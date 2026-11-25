// Subsystem: Internal Routines Cluster 04 (0x762070 .. 0x85b360)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : FUN_7fffa4ed2070  |  RVA: 0x762070  |  Size: 27286 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4ed3141) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed37c8) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed366e) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed2baf) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed4311) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed5033) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed5401) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed5723) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed53a8) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed4dce) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed5498) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed4639) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed6d5e) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed6390) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed6afc) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed6e54) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed737d) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed77b6) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed82db) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed8823) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed4701) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed59eb) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed5b7e) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed7819) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed5d87) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed5819) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed32c4) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed6c19) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed6ffc) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed34b4) */

int64_t FUN_7fffa4ed2070(int64_t param_1,int64_t *param_2,int *param_3,uint64_t *param_4,
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
  uint32_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int64_t lVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  char cVar23;
  uint32_t uVar24;
  uint64_t uVar25;
  uint64_t *puVar26;
  uint8_t bVar27;
  uint8_t bVar28;
  uint64_t *puVar29;
  char *pcVar30;
  int iVar31;
  uint32_t uVar32;
  uint64_t *puVar33;
  int64_t lVar34;
  int *piVar35;
  uint64_t *puVar36;
  uint32_t uVar37;
  uint32_t uVar38;
  uint64_t uVar39;
  int64_t lVar40;
  uint64_t *puVar41;
  uint32_t uVar42;
  uint32_t uVar43;
  uint64_t *puVar44;
  int64_t lVar45;
  uint64_t uVar46;
  int64_t lVar47;
  uint64_t *puVar48;
  char *pcVar49;
  uint64_t uVar50;
  int iVar51;
  int iVar52;
  uint64_t *puVar53;
  uint64_t uVar54;
  uint64_t uVar55;
  uint64_t *puVar56;
  uint32_t uVar57;
  uint64_t uVar58;
  uint64_t uVar59;
  int iStack_12c;
  uint64_t *puStack_110;
  int iStack_a4;
  
  puVar56 = *(uint64_t **)(param_1 + 0xf8);
  uVar11 = puVar56[0xe];
  uVar42 = (uint32_t)puVar56[0x21];
  uVar54 = (uint64_t)(*(int *)(param_1 + 0x114) + (uint32_t)(*(int *)(param_1 + 0x114) == 0));
  uVar9 = *(uint32_t *)(param_1 + 0x18);
  uVar59 = (uint64_t)uVar9;
  lVar12 = *(int64_t *)(param_1 + 8);
  puVar53 = (uint64_t *)(lVar12 + uVar59);
  puVar13 = (uint64_t *)*puVar56;
  uVar14 = puVar56[1];
  iVar17 = ((int)param_4 - (int)puVar53) + (int)puVar13;
  uVar10 = (uint32_t)puVar56[3];
  uVar57 = ((int)uVar14 - (int)puVar13) + uVar9;
  pcVar49 = (char *)(uVar10 + uVar14);
  iVar18 = (int)pcVar49;
  lVar15 = *(int64_t *)(param_1 + 0x70);
  iVar52 = *(int *)(param_1 + 0x110);
  iVar51 = *(int *)(param_1 + 0x128);
  puVar4 = (uint64_t *)((int64_t)param_4 + param_5);
  puVar7 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  iStack_12c = *param_3;
  iVar31 = param_3[1];
  bVar27 = (uint8_t)puVar56[0x21];
  iVar19 = (int)lVar12;
  cVar23 = (char)*(int *)(param_1 + 0x108);
  puVar56 = param_4;
  iStack_a4 = iVar31;
  if (iVar52 < 6) {
    if (iVar52 == 5) {
      if ((iVar51 != 0) && (uVar42 < 0x3e)) {
        uVar25 = 0;
        do {
          uVar25 = uVar25 + 0x40;
        } while (uVar25 < (uint64_t)(4L << (bVar27 & 0x3f)));
      }
      puVar48 = (uint64_t *)((int64_t)param_4 + uVar54);
      if (puVar48 <= puVar7) {
        puVar3 = puVar4 + -4;
        puVar1 = (uint64_t *)((int64_t)puVar4 - 1);
        bVar28 = 0x40 - cVar23;
        puVar2 = (uint64_t *)((int64_t)puVar4 - 3);
        puVar44 = (uint64_t *)((int64_t)puVar4 - 7);
        puVar56 = (uint64_t *)((uint64_t)(iVar17 == iVar18) + (int64_t)param_4);
        lVar45 = uVar59 + lVar12 + 8;
        puStack_110 = param_4;
LAB_7fffa4ed22dc:
        puVar29 = puVar56 + 0x20;
        uVar25 = *puVar56 * -0x30e4432345000000;
        uVar50 = uVar25 >> (0x38 - bVar27 & 0x3f);
        uVar39 = (uint64_t)*(uint32_t *)(uVar11 + (uVar50 >> 8) * 4);
        uVar50 = uVar50 ^ uVar39;
        uVar59 = uVar54;
        do {
          uVar55 = uVar25 >> (bVar28 & 0x3f);
          uVar25 = *puVar48 * -0x30e4432345000000;
          uVar46 = uVar25 >> (0x38 - bVar27 & 0x3f);
          uVar42 = *(uint32_t *)(lVar15 + uVar55 * 4);
          uVar58 = (uint64_t)uVar42;
          iVar52 = (int)((int64_t)puVar56 - lVar12);
          *(int *)(lVar15 + uVar55 * 4) = iVar52;
          uVar37 = (iVar52 - iStack_12c) + 1;
          if (2 < (uVar9 - 1) - uVar37) {
            piVar35 = (int *)((uVar37 - uVar57) + uVar14);
            if (uVar9 <= uVar37) {
              piVar35 = (int *)((uint64_t)uVar37 + lVar12);
            }
            if (*piVar35 != *(int *)((int64_t)puVar56 + 1)) goto LAB_7fffa4ed2395;
            puVar48 = (uint64_t *)(piVar35 + 1);
            puVar29 = (uint64_t *)((int64_t)puVar56 + 5);
            puVar41 = puVar4;
            if (uVar37 < uVar9) {
              puVar41 = puVar13;
            }
            puVar33 = (uint64_t *)((int64_t)puVar56 + (int64_t)puVar41 + (5 - (int64_t)puVar48))
            ;
            if (puVar4 <= puVar33) {
              puVar33 = puVar4;
            }
            puVar26 = puVar48;
            puVar36 = puVar29;
            if ((uint64_t *)((int64_t)puVar33 - 7U) <= puVar29) goto LAB_7fffa4ed2672;
            if (*puVar48 != *puVar29) {
              uVar42 = 0;
              for (uVar59 = *puVar29 ^ *puVar48; (uVar59 & 1) == 0;
                  uVar59 = uVar59 >> 1 | 0x8000000000000000) {
                uVar42 = uVar42 + 1;
              }
              uVar59 = (uint64_t)(uVar42 >> 3);
              goto LAB_7fffa4ed273c;
            }
            lVar47 = 0;
            goto LAB_7fffa4ed2610;
          }
LAB_7fffa4ed2395:
          puVar41 = puVar56;
          if ((uVar50 & 0xff) == 0) {
            uVar50 = uVar39 >> 8;
            uVar37 = (uint32_t)(uVar39 >> 8);
            if (((uVar37 <= uVar10) || (*(int *)(uVar14 + uVar50) != (int)*puVar56)) ||
               (uVar9 < uVar42)) goto LAB_7fffa4ed23d0;
            puVar33 = (uint64_t *)(uVar14 + uVar50 + 4);
            puVar48 = (uint64_t *)((int64_t)puVar56 + 4);
            puVar29 = (uint64_t *)((int64_t)puVar56 + (int64_t)puVar13 + (4 - (int64_t)puVar33))
            ;
            if (puVar4 <= puVar29) {
              puVar29 = puVar4;
            }
            puVar36 = puVar33;
            puVar26 = puVar48;
            if ((uint64_t *)((int64_t)puVar29 - 7U) <= puVar48) goto LAB_7fffa4ed35f0;
            if (*puVar33 != *puVar48) {
              uVar42 = 0;
              for (uVar59 = *puVar48 ^ *puVar33; (uVar59 & 1) == 0;
                  uVar59 = uVar59 >> 1 | 0x8000000000000000) {
                uVar42 = uVar42 + 1;
              }
              uVar59 = (uint64_t)(uVar42 >> 3);
              goto LAB_7fffa4ed36b4;
            }
            lVar47 = 0xc;
            goto LAB_7fffa4ed25d9;
          }
LAB_7fffa4ed23d0:
          if ((uVar9 < uVar42) && (piVar35 = (int *)(lVar12 + uVar58), *piVar35 == (int)*puVar56))
          goto LAB_7fffa4ed24be;
          uVar59 = (puVar29 <= puVar48) + uVar59;
          if (puVar7 < (uint64_t *)((int64_t)puVar48 + uVar59)) goto LAB_7fffa4ed8aec;
          puVar29 = puVar29 + (uint64_t)(puVar29 <= puVar48) * 0x20;
          uVar39 = (uint64_t)*(uint32_t *)(uVar11 + (uVar46 >> 8) * 4);
          uVar50 = uVar46 ^ uVar39;
          puVar56 = puVar48;
          puVar48 = (uint64_t *)((int64_t)puVar48 + uVar59);
        } while( true );
      }
      goto LAB_7fffa4ed8b08;
    }
  }
  else {
    if (iVar52 == 6) {
      if ((iVar51 != 0) && (uVar42 < 0x3e)) {
        uVar25 = 0;
        do {
          uVar25 = uVar25 + 0x40;
        } while (uVar25 < (uint64_t)(4L << (bVar27 & 0x3f)));
      }
      puVar48 = (uint64_t *)(uVar54 + (int64_t)param_4);
      if (puVar48 <= puVar7) {
        puVar3 = (uint64_t *)((int64_t)puVar4 - 3);
        puVar1 = puVar4 + -4;
        puVar2 = (uint64_t *)((int64_t)puVar4 - 7);
        uVar42 = 0x40 - *(int *)(param_1 + 0x108);
        puVar56 = (uint64_t *)((int64_t)param_4 + (uint64_t)(iVar17 == iVar18));
        puVar44 = (uint64_t *)((int64_t)puVar4 - 1);
        lVar45 = uVar59 + 8 + lVar12;
        puStack_110 = param_4;
LAB_7fffa4ed72b7:
        puVar29 = puVar56 + 0x20;
        uVar39 = *puVar56 * -0x30e4432340650000 >> (0x38 - bVar27 & 0x3f);
        uVar50 = (uint64_t)*(uint32_t *)(uVar11 + (uVar39 >> 8) * 4);
        uVar39 = uVar39 ^ uVar50;
        uVar59 = *puVar56 * -0x30e4432340650000;
        uVar25 = uVar54;
        do {
          puVar41 = puVar48;
          uVar46 = *puVar41;
          iVar52 = (int)((int64_t)puVar56 - lVar12);
          uVar43 = (iVar52 - iStack_12c) + 1;
          uVar55 = uVar46 * -0x30e4432340650000 >> (0x38 - bVar27 & 0x3f);
          uVar59 = uVar59 >> (uint64_t)uVar42;
          uVar37 = *(uint32_t *)(lVar15 + uVar59 * 4);
          *(int *)(lVar15 + uVar59 * 4) = iVar52;
          if (2 < (uVar9 - 1) - uVar43) {
            piVar35 = (int *)((uVar43 - uVar57) + uVar14);
            if (uVar9 <= uVar43) {
              piVar35 = (int *)((uint64_t)uVar43 + lVar12);
            }
            if (*piVar35 != *(int *)((int64_t)puVar56 + 1)) goto LAB_7fffa4ed73be;
            puVar48 = puVar4;
            if (uVar43 < uVar9) {
              puVar48 = puVar13;
            }
            puVar29 = (uint64_t *)(piVar35 + 1);
            puVar41 = (uint64_t *)((int64_t)puVar56 + 5);
            puVar33 = (uint64_t *)((int64_t)puVar56 + (int64_t)puVar48 + (5 - (int64_t)puVar29))
            ;
            if (puVar4 <= puVar33) {
              puVar33 = puVar4;
            }
            puVar26 = puVar29;
            puVar36 = puVar41;
            if ((uint64_t *)((int64_t)puVar33 - 7U) <= puVar41) goto LAB_7fffa4ed76ea;
            if (*puVar29 != *puVar41) {
              uVar37 = 0;
              for (uVar59 = *puVar29 ^ *puVar41; (uVar59 & 1) == 0;
                  uVar59 = uVar59 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              uVar59 = (uint64_t)(uVar37 >> 3);
              goto LAB_7fffa4ed7740;
            }
            lVar47 = 0;
            goto LAB_7fffa4ed7641;
          }
LAB_7fffa4ed73be:
          puVar48 = puVar56;
          if ((char)uVar39 == '\0') {
            uVar59 = uVar50 >> 8;
            uVar43 = (uint32_t)(uVar50 >> 8);
            if ((uVar43 <= uVar10) || (*(int *)(uVar14 + uVar59) != (int)*puVar56 || uVar9 < uVar37)
               ) goto LAB_7fffa4ed7410;
            puVar33 = (uint64_t *)(uVar14 + uVar59 + 4);
            puVar29 = (uint64_t *)((int64_t)puVar56 + 4);
            puVar41 = (uint64_t *)((int64_t)puVar56 + (int64_t)puVar13 + (4 - (int64_t)puVar33))
            ;
            if (puVar4 <= puVar41) {
              puVar41 = puVar4;
            }
            puVar26 = puVar33;
            puVar36 = puVar29;
            if ((uint64_t *)((int64_t)puVar41 - 7U) <= puVar29) goto LAB_7fffa4ed7d57;
            if (*puVar33 != *puVar29) {
              uVar37 = 0;
              for (uVar25 = *puVar29 ^ *puVar33; (uVar25 & 1) == 0;
                  uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              uVar25 = (uint64_t)(uVar37 >> 3);
              goto LAB_7fffa4ed7db5;
            }
            lVar47 = 0;
            goto LAB_7fffa4ed75ed;
          }
LAB_7fffa4ed7410:
          if ((uVar9 < uVar37) &&
             (piVar35 = (int *)(lVar12 + (uint64_t)uVar37), *piVar35 == (int)*puVar56))
          goto LAB_7fffa4ed7526;
          uVar25 = (puVar29 <= puVar41) + uVar25;
          if (puVar7 < (uint64_t *)((int64_t)puVar41 + uVar25)) goto LAB_7fffa4ed8aec;
          puVar29 = puVar29 + (uint64_t)(puVar29 <= puVar41) * 0x20;
          uVar50 = (uint64_t)*(uint32_t *)(uVar11 + (uVar55 >> 8) * 4);
          uVar39 = uVar50 ^ uVar55;
          puVar48 = (uint64_t *)((int64_t)puVar41 + uVar25);
          puVar56 = puVar41;
          uVar59 = uVar46 * -0x30e4432340650000;
        } while( true );
      }
      goto LAB_7fffa4ed8b08;
    }
    if (iVar52 == 7) {
      if ((iVar51 != 0) && (uVar42 < 0x3e)) {
        uVar25 = 0;
        do {
          uVar25 = uVar25 + 0x40;
        } while (uVar25 < (uint64_t)(4L << (bVar27 & 0x3f)));
      }
      puVar48 = (uint64_t *)((int64_t)param_4 + uVar54);
      if (puVar48 <= puVar7) {
        puVar3 = puVar4 + -4;
        puVar1 = (uint64_t *)((int64_t)puVar4 - 1);
        puVar2 = (uint64_t *)((int64_t)puVar4 - 3);
        puVar44 = (uint64_t *)((int64_t)puVar4 - 7);
        bVar28 = 0x40 - cVar23;
        puVar56 = (uint64_t *)((uint64_t)(iVar17 == iVar18) + (int64_t)param_4);
        lVar45 = uVar59 + lVar12 + 8;
        puStack_110 = param_4;
LAB_7fffa4ed3df6:
        puVar29 = puVar56 + 0x20;
        uVar39 = *puVar56 * -0x30e44323405a9d00;
        uVar50 = uVar39 >> (0x38 - bVar27 & 0x3f);
        uVar25 = (uint64_t)*(uint32_t *)(uVar11 + (uVar50 >> 8) * 4);
        uVar50 = uVar50 ^ uVar25;
        uVar59 = uVar54;
        puVar41 = puVar56;
        do {
          puVar33 = puVar48;
          uVar55 = uVar39 >> (bVar28 & 0x3f);
          uVar42 = *(uint32_t *)(lVar15 + uVar55 * 4);
          uVar39 = *puVar33 * -0x30e44323405a9d00;
          uVar46 = uVar39 >> (0x38 - bVar27 & 0x3f);
          iVar52 = (int)((int64_t)puVar41 - lVar12);
          uVar37 = (iVar52 - iStack_12c) + 1;
          *(int *)(lVar15 + uVar55 * 4) = iVar52;
          if (2 < (uVar9 - 1) - uVar37) {
            piVar35 = (int *)((uint64_t)uVar37 + lVar12);
            if (uVar37 < uVar9) {
              piVar35 = (int *)((uVar37 - uVar57) + uVar14);
            }
            if (*piVar35 != *(int *)((int64_t)puVar41 + 1)) goto LAB_7fffa4ed3f25;
            puVar56 = (uint64_t *)(piVar35 + 1);
            puVar48 = (uint64_t *)((int64_t)puVar41 + 5);
            puVar29 = puVar4;
            if (uVar37 < uVar9) {
              puVar29 = puVar13;
            }
            puVar33 = (uint64_t *)((int64_t)puVar41 + (int64_t)puVar29 + (5 - (int64_t)puVar56))
            ;
            if (puVar4 <= puVar33) {
              puVar33 = puVar4;
            }
            puVar26 = puVar56;
            puVar36 = puVar48;
            if ((uint64_t *)((int64_t)puVar33 - 7U) <= puVar48) goto LAB_7fffa4ed41cc;
            if (*puVar56 != *puVar48) {
              uVar42 = 0;
              for (uVar59 = *puVar48 ^ *puVar56; (uVar59 & 1) == 0;
                  uVar59 = uVar59 >> 1 | 0x8000000000000000) {
                uVar42 = uVar42 + 1;
              }
              uVar59 = (uint64_t)(uVar42 >> 3);
              goto LAB_7fffa4ed425c;
            }
            lVar47 = 0;
            goto LAB_7fffa4ed4160;
          }
LAB_7fffa4ed3f25:
          puVar56 = puVar41;
          if ((char)uVar50 == '\0') {
            uVar50 = uVar25 >> 8;
            uVar37 = (uint32_t)(uVar25 >> 8);
            if ((uVar37 <= uVar10) || (*(int *)(uVar14 + uVar50) != (int)*puVar41 || uVar9 < uVar42)
               ) goto LAB_7fffa4ed3f70;
            puVar48 = (uint64_t *)((int64_t)puVar41 + 4);
            puVar33 = (uint64_t *)(uVar14 + uVar50 + 4);
            puVar29 = (uint64_t *)((int64_t)puVar41 + (int64_t)puVar13 + (4 - (int64_t)puVar33))
            ;
            if (puVar4 <= puVar29) {
              puVar29 = puVar4;
            }
            puVar36 = puVar33;
            puVar26 = puVar48;
            if ((uint64_t *)((int64_t)puVar29 - 7U) <= puVar48) goto LAB_7fffa4ed50e8;
            if (*puVar33 != *puVar48) {
              uVar42 = 0;
              for (uVar59 = *puVar48 ^ *puVar33; (uVar59 & 1) == 0;
                  uVar59 = uVar59 >> 1 | 0x8000000000000000) {
                uVar42 = uVar42 + 1;
              }
              uVar59 = (uint64_t)(uVar42 >> 3);
              goto LAB_7fffa4ed5143;
            }
            lVar47 = 0xc;
            goto LAB_7fffa4ed4135;
          }
LAB_7fffa4ed3f70:
          if ((uVar9 < uVar42) &&
             (piVar35 = (int *)(lVar12 + (uint64_t)uVar42), *piVar35 == (int)*puVar41))
          goto LAB_7fffa4ed406e;
          uVar59 = (puVar29 <= puVar33) + uVar59;
          if (puVar7 < (uint64_t *)((int64_t)puVar33 + uVar59)) goto LAB_7fffa4ed8aec;
          puVar29 = puVar29 + (uint64_t)(puVar29 <= puVar33) * 0x20;
          uVar25 = (uint64_t)*(uint32_t *)(uVar11 + (uVar46 >> 8) * 4);
          uVar50 = uVar25 ^ uVar46;
          puVar48 = (uint64_t *)((int64_t)puVar33 + uVar59);
          puVar41 = puVar33;
        } while( true );
      }
      goto LAB_7fffa4ed8b08;
    }
  }
  if ((iVar51 != 0) && (uVar42 < 0x3e)) {
    uVar59 = 0;
    do {
      uVar59 = uVar59 + 0x40;
    } while (uVar59 < (uint64_t)(4L << (bVar27 & 0x3f)));
  }
  puVar48 = (uint64_t *)(uVar54 + (int64_t)param_4);
  if (puVar48 <= puVar7) {
    bVar28 = 0x20 - cVar23;
    puVar3 = (uint64_t *)((int64_t)puVar4 - 1);
    puVar1 = (uint64_t *)((int64_t)puVar4 - 7);
    puVar2 = (uint64_t *)((int64_t)puVar4 - 3);
    puVar44 = puVar4 + -4;
    puVar56 = (uint64_t *)((int64_t)param_4 + (uint64_t)(iVar17 == iVar18));
    puStack_110 = param_4;
LAB_7fffa4ed585f:
    puVar29 = puVar56 + 0x20;
    uVar37 = (int)*puVar56 * -0x61c8864f;
    uVar43 = uVar37 >> (0x18 - bVar27 & 0x1f);
    uVar42 = *(uint32_t *)(uVar11 + (uint64_t)(uVar43 >> 8) * 4);
    uVar43 = uVar43 ^ uVar42;
    uVar59 = uVar54;
    do {
      puVar41 = puVar48;
      uVar32 = (int)*puVar41 * -0x61c8864f;
      uVar24 = uVar32 >> (0x18 - bVar27 & 0x1f);
      uVar25 = (uint64_t)(uVar37 >> (bVar28 & 0x1f));
      iVar52 = (int)((int64_t)puVar56 - lVar12);
      uVar38 = (iVar52 - iStack_12c) + 1;
      uVar37 = *(uint32_t *)(lVar15 + uVar25 * 4);
      *(int *)(lVar15 + uVar25 * 4) = iVar52;
      if (2 < (uVar9 - 1) - uVar38) {
        piVar35 = (int *)((uVar38 - uVar57) + uVar14);
        if (uVar9 <= uVar38) {
          piVar35 = (int *)((uint64_t)uVar38 + lVar12);
        }
        if (*piVar35 != *(int *)((int64_t)puVar56 + 1)) goto LAB_7fffa4ed5917;
        puVar48 = puVar4;
        if (uVar38 < uVar9) {
          puVar48 = puVar13;
        }
        puVar29 = (uint64_t *)(piVar35 + 1);
        puVar41 = (uint64_t *)((int64_t)puVar56 + 5);
        puVar33 = (uint64_t *)((int64_t)puVar56 + (int64_t)puVar48 + (5 - (int64_t)puVar29));
        if (puVar4 <= puVar33) {
          puVar33 = puVar4;
        }
        puVar26 = puVar29;
        puVar36 = puVar41;
        if ((uint64_t *)((int64_t)puVar33 - 7U) <= puVar41) goto LAB_7fffa4ed5c72;
        if (*puVar29 != *puVar41) {
          uVar42 = 0;
          for (uVar59 = *puVar29 ^ *puVar41; (uVar59 & 1) == 0;
              uVar59 = uVar59 >> 1 | 0x8000000000000000) {
            uVar42 = uVar42 + 1;
          }
          uVar59 = (uint64_t)(uVar42 >> 3);
          goto LAB_7fffa4ed5cf7;
        }
        lVar45 = 0;
        goto LAB_7fffa4ed5c00;
      }
LAB_7fffa4ed5917:
      puVar48 = puVar56;
      if (((((uVar43 & 0xff) == 0) && (uVar42 = uVar42 >> 8, uVar10 < uVar42)) &&
          (uVar25 = (uint64_t)uVar42, *(int *)(uVar14 + uVar25) == (int)*puVar56)) &&
         (uVar37 <= uVar9)) {
        puVar33 = (uint64_t *)(uVar14 + uVar25 + 4);
        puVar29 = (uint64_t *)((int64_t)puVar56 + 4);
        puVar41 = (uint64_t *)((int64_t)puVar56 + (int64_t)puVar13 + (4 - (int64_t)puVar33));
        if (puVar4 <= puVar41) {
          puVar41 = puVar4;
        }
        puVar26 = puVar33;
        puVar36 = puVar29;
        if ((uint64_t *)((int64_t)puVar41 - 7U) <= puVar29) goto LAB_7fffa4ed699f;
        if (*puVar33 != *puVar29) {
          uVar37 = 0;
          for (uVar59 = *puVar29 ^ *puVar33; (uVar59 & 1) == 0;
              uVar59 = uVar59 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          uVar59 = (uint64_t)(uVar37 >> 3);
          goto code_r0x7fffa4ed6a1a;
        }
        lVar45 = 0;
        goto LAB_7fffa4ed5bbb;
      }
      if ((uVar9 < uVar37) &&
         (piVar35 = (int *)(lVar12 + (uint64_t)uVar37), *piVar35 == (int)*puVar56))
      goto LAB_7fffa4ed5a9f;
      uVar59 = uVar59 + (puVar29 <= puVar41);
      if (puVar7 < (uint64_t *)((int64_t)puVar41 + uVar59)) goto LAB_7fffa4ed8aec;
      puVar29 = puVar29 + (uint64_t)(puVar29 <= puVar41) * 0x20;
      uVar42 = *(uint32_t *)(uVar11 + (uint64_t)(uVar24 >> 8) * 4);
      uVar43 = uVar24 ^ uVar42;
      puVar48 = (uint64_t *)((int64_t)puVar41 + uVar59);
      puVar56 = puVar41;
      uVar37 = uVar32;
    } while( true );
  }
LAB_7fffa4ed8b08:
  param_3[1] = iVar31;
  *param_3 = iStack_12c;
  return (int64_t)puVar4 - (int64_t)puVar56;
LAB_7fffa4ed2610:
  puVar26 = (uint64_t *)((int64_t)puVar56 + lVar47 + 0xd);
  if (puVar26 < (uint64_t *)((int64_t)puVar33 - 7U)) {
    uVar59 = *(uint64_t *)((int64_t)piVar35 + lVar47 + 0xc);
    uVar25 = *puVar26;
    if (uVar59 == uVar25) goto code_r0x7fffa4ed2638;
    uVar42 = 0;
    for (uVar59 = uVar59 ^ uVar25; (uVar59 & 1) == 0; uVar59 = uVar59 >> 1 | 0x8000000000000000) {
      uVar42 = uVar42 + 1;
    }
    uVar59 = (uint64_t)(uVar42 >> 3) + lVar47 + 8;
  }
  else {
    puVar36 = (uint64_t *)((int64_t)puVar56 + lVar47 + 0xd);
    puVar26 = (uint64_t *)((int64_t)piVar35 + lVar47 + 0xc);
LAB_7fffa4ed2672:
    if ((puVar36 < (uint64_t *)((int64_t)puVar33 - 3U)) && ((int)*puVar26 == (int)*puVar36)) {
      puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
      puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
    }
    if ((puVar36 < (uint64_t *)((int64_t)puVar33 - 1U)) && ((short)*puVar26 == (short)*puVar36)) {
      puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
      puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
    }
    if (puVar36 < puVar33) {
      puVar36 = (uint64_t *)((int64_t)puVar36 + (uint64_t)((char)*puVar26 == (char)*puVar36));
    }
    uVar59 = (int64_t)puVar36 - (int64_t)puVar29;
  }
  goto LAB_7fffa4ed273c;
code_r0x7fffa4ed2638:
  lVar47 = lVar47 + 8;
  goto LAB_7fffa4ed2610;
LAB_7fffa4ed273c:
  if ((uint64_t *)((int64_t)puVar48 + uVar59) == puVar41) {
    puVar29 = (uint64_t *)((int64_t)puVar29 + uVar59);
    puVar48 = puVar53;
    puVar41 = puVar29;
    if (puVar29 < puVar44) {
      if (*puVar53 == *puVar29) {
        lVar47 = 0;
        do {
          puVar48 = (uint64_t *)((int64_t)puVar56 + lVar47 + uVar59 + 0xd);
          if (puVar44 <= puVar48) {
            puVar41 = (uint64_t *)((int64_t)puVar56 + lVar47 + uVar59 + 0xd);
            puVar48 = (uint64_t *)(lVar47 + lVar45);
            goto LAB_7fffa4ed2cb3;
          }
          puVar41 = (uint64_t *)(lVar45 + lVar47);
          uVar25 = *puVar48;
          lVar47 = lVar47 + 8;
        } while (*puVar41 == uVar25);
        uVar42 = 0;
        for (uVar25 = uVar25 ^ *puVar41; (uVar25 & 1) == 0;
            uVar25 = uVar25 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        uVar25 = (uint64_t)(uVar42 >> 3) + lVar47;
      }
      else {
        uVar42 = 0;
        for (uVar25 = *puVar29 ^ *puVar53; (uVar25 & 1) == 0;
            uVar25 = uVar25 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        uVar25 = (uint64_t)(uVar42 >> 3);
      }
    }
    else {
LAB_7fffa4ed2cb3:
      if ((puVar41 < puVar2) && ((int)*puVar48 == (int)*puVar41)) {
        puVar48 = (uint64_t *)((int64_t)puVar48 + 4);
        puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
      }
      if ((puVar41 < puVar1) && ((short)*puVar48 == (short)*puVar41)) {
        puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
        puVar48 = (uint64_t *)((int64_t)puVar48 + 2);
      }
      if (puVar41 < puVar4) {
        puVar41 = (uint64_t *)((int64_t)puVar41 + (uint64_t)((char)*puVar48 == (char)*puVar41));
      }
      uVar25 = (int64_t)puVar41 - (int64_t)puVar29;
    }
    uVar59 = uVar59 + uVar25;
  }
  puVar41 = (uint64_t *)((int64_t)puVar56 + 1);
  uVar25 = (int64_t)puVar41 - (int64_t)puStack_110;
  puVar48 = (uint64_t *)param_2[3];
  if (puVar3 < puVar41) {
    puVar29 = puVar48;
    if (puStack_110 <= puVar3) {
      uVar50 = puStack_110[1];
      *puVar48 = *puStack_110;
      puVar48[1] = uVar50;
      puVar29 = (uint64_t *)((int64_t)puVar48 + ((int64_t)puVar3 - (int64_t)puStack_110));
      if (0x10 < (int64_t)puVar3 - (int64_t)puStack_110) {
        lVar47 = 0x10;
        do {
          uVar20 = ((uint64_t *)((int64_t)puStack_110 + lVar47))[1];
          *(uint64_t *)((int64_t)puVar48 + lVar47) =
               *(uint64_t *)((int64_t)puStack_110 + lVar47);
          ((uint64_t *)((int64_t)puVar48 + lVar47))[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar47 + 0x10);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)((int64_t)puVar48 + lVar47 + 0x10);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          lVar40 = lVar47 + 0x20;
          lVar47 = lVar47 + 0x20;
        } while ((uint64_t *)((int64_t)puVar48 + lVar40) < puVar29);
      }
      puStack_110 = puVar3;
    }
    if (puStack_110 < puVar41) {
      uVar50 = (int64_t)puVar56 + (1 - (int64_t)puStack_110);
      if ((uint64_t)((int64_t)puVar29 - (int64_t)puStack_110) < 0x20 || uVar50 < 4) {
LAB_7fffa4ed2e0c:
        puVar48 = puVar29;
      }
      else {
        if (uVar50 < 0x20) {
          uVar46 = 0;
        }
        else {
          uVar46 = uVar50 & 0xffffffffffffffe0;
          uVar39 = 0;
          do {
            uVar20 = ((uint64_t *)((int64_t)puStack_110 + uVar39))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_110 + uVar39 + 0x10);
            uVar21 = *puVar5;
            uVar22 = puVar5[1];
            *(uint64_t *)((int64_t)puVar29 + uVar39) =
                 *(uint64_t *)((int64_t)puStack_110 + uVar39);
            ((uint64_t *)((int64_t)puVar29 + uVar39))[1] = uVar20;
            puVar5 = (uint64_t *)((int64_t)puVar29 + uVar39 + 0x10);
            *puVar5 = uVar21;
            puVar5[1] = uVar22;
            uVar39 = uVar39 + 0x20;
          } while (uVar39 != uVar46);
          if (uVar50 == uVar46) goto LAB_7fffa4ed3037;
          if ((uVar50 & 0x1c) == 0) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + uVar46);
            puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar46);
            goto LAB_7fffa4ed2e0c;
          }
        }
        uVar39 = uVar50 & 0xfffffffffffffffc;
        puVar48 = (uint64_t *)((int64_t)puVar29 + uVar39);
        do {
          *(uint32_t *)((int64_t)puVar29 + uVar46) =
               *(uint32_t *)((int64_t)puStack_110 + uVar46);
          uVar46 = uVar46 + 4;
        } while (uVar46 != uVar39);
        if (uVar50 == uVar39) goto LAB_7fffa4ed3037;
        puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar39);
      }
      uVar39 = (int64_t)puVar56 - (int64_t)puStack_110;
      uVar42 = (uint32_t)uVar39;
      uVar50 = (uint64_t)(uVar42 & 7) + 0xc0000102;
      if ((uVar50 << 0x27 | uVar50 >> 0x19) != 0x848000000060) {
        uVar50 = 0;
        puVar29 = puVar48;
        puVar33 = puStack_110;
        do {
          puStack_110 = (uint64_t *)((int64_t)puVar33 + 1);
          puVar48 = (uint64_t *)((int64_t)puVar29 + 1);
          *(char *)puVar29 = (char)*puVar33;
          uVar50 = uVar50 + 1;
          puVar29 = puVar48;
          puVar33 = puStack_110;
        } while (uVar50 != (uVar42 + 1 & 7));
        if (uVar39 < 7) goto LAB_7fffa4ed3037;
      }
      lVar47 = 0;
      do {
        *(uint8_t *)((int64_t)puVar48 + lVar47) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47);
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 1) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 1);
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 2) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 2);
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 3) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 3);
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 4) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 4);
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 5) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 5);
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 6) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 6);
        lVar40 = lVar47 + 7;
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 7) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 7);
        lVar47 = lVar47 + 8;
      } while ((uint64_t *)((int64_t)puStack_110 + lVar40) != puVar56);
    }
LAB_7fffa4ed3037:
    lVar47 = param_2[1];
    param_2[3] = param_2[3] + uVar25;
    if (0xffff < uVar25) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
    }
  }
  else {
    uVar50 = puStack_110[1];
    *puVar48 = *puStack_110;
    puVar48[1] = uVar50;
    if (0x10 < uVar25) {
      lVar47 = param_2[3];
      uVar50 = puStack_110[3];
      *(uint64_t *)(lVar47 + 0x10) = puStack_110[2];
      *(uint64_t *)(lVar47 + 0x18) = uVar50;
      if (0x20 < (int64_t)uVar25) {
        lVar40 = 0;
        do {
          puVar8 = (uint64_t *)((int64_t)puStack_110 + lVar40 + 0x20);
          uVar20 = puVar8[1];
          puVar5 = (uint64_t *)(lVar47 + 0x20 + lVar40);
          *puVar5 = *puVar8;
          puVar5[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar40 + 0x30);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)(lVar47 + 0x30 + lVar40);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          lVar34 = lVar47 + 0x20 + lVar40;
          lVar40 = lVar40 + 0x20;
        } while (lVar34 + 0x20U < lVar47 + uVar25);
      }
      goto LAB_7fffa4ed3037;
    }
    lVar47 = param_2[1];
    param_2[3] = param_2[3] + uVar25;
  }
  lVar40 = uVar59 + 4;
  uVar59 = uVar59 + 1;
  *(short *)(lVar47 + 4) = (short)uVar25;
  *(uint32_t *)param_2[1] = 1;
  lVar47 = param_2[1];
  iVar51 = iStack_12c;
  goto joined_r0x7fffa4ed30a2;
LAB_7fffa4ed25d9:
  puVar26 = (uint64_t *)(lVar47 + (int64_t)puVar56);
  if ((uint64_t *)((int64_t)puVar29 - 7U) <= puVar26) goto LAB_7fffa4ed35e2;
  uVar59 = *(uint64_t *)(uVar14 + uVar50 + lVar47);
  if (uVar59 != *puVar26) {
    uVar42 = 0;
    for (uVar59 = *puVar26 ^ uVar59; (uVar59 & 1) == 0; uVar59 = uVar59 >> 1 | 0x8000000000000000) {
      uVar42 = uVar42 + 1;
    }
    uVar59 = ((uint64_t)(uVar42 >> 3) + lVar47) - 4;
    goto LAB_7fffa4ed36b4;
  }
  lVar47 = lVar47 + 8;
  goto LAB_7fffa4ed25d9;
LAB_7fffa4ed35e2:
  puVar36 = (uint64_t *)(lVar47 + uVar14 + uVar50);
LAB_7fffa4ed35f0:
  if ((puVar26 < (uint64_t *)((int64_t)puVar29 - 3U)) && ((int)*puVar36 == (int)*puVar26)) {
    puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
    puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
  }
  if ((puVar26 < (uint64_t *)((int64_t)puVar29 - 1U)) && ((short)*puVar36 == (short)*puVar26)) {
    puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
    puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
  }
  if (puVar26 < puVar29) {
    puVar26 = (uint64_t *)((int64_t)puVar26 + (uint64_t)((char)*puVar36 == (char)*puVar26));
  }
  uVar59 = (int64_t)puVar26 - (int64_t)puVar48;
LAB_7fffa4ed36b4:
  if ((uint64_t *)((int64_t)puVar33 + uVar59) == puVar13) {
    puVar48 = (uint64_t *)((int64_t)puVar48 + uVar59);
    puVar29 = puVar48;
    puVar33 = puVar53;
    if (puVar48 < puVar44) {
      if (*puVar53 == *puVar48) {
        lVar47 = 0;
        do {
          puVar29 = (uint64_t *)((int64_t)puVar56 + lVar47 + uVar59 + 0xc);
          if (puVar44 <= puVar29) {
            puVar29 = (uint64_t *)((int64_t)puVar56 + lVar47 + uVar59 + 0xc);
            puVar33 = (uint64_t *)(lVar47 + lVar45);
            goto LAB_7fffa4ed37f0;
          }
          puVar33 = (uint64_t *)(lVar45 + lVar47);
          uVar25 = *puVar29;
          lVar47 = lVar47 + 8;
        } while (*puVar33 == uVar25);
        uVar42 = 0;
        for (uVar25 = *puVar33 ^ uVar25; (uVar25 & 1) == 0;
            uVar25 = uVar25 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        uVar25 = (uint64_t)(uVar42 >> 3) + lVar47;
      }
      else {
        uVar42 = 0;
        for (uVar25 = *puVar53 ^ *puVar48; (uVar25 & 1) == 0;
            uVar25 = uVar25 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        uVar25 = (uint64_t)(uVar42 >> 3);
      }
    }
    else {
LAB_7fffa4ed37f0:
      if ((puVar29 < puVar2) && ((int)*puVar33 == (int)*puVar29)) {
        puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
        puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
      }
      if ((puVar29 < puVar1) && ((short)*puVar33 == (short)*puVar29)) {
        puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
        puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
      }
      if (puVar29 < puVar4) {
        puVar29 = (uint64_t *)((int64_t)puVar29 + (uint64_t)((char)*puVar33 == (char)*puVar29));
      }
      uVar25 = (int64_t)puVar29 - (int64_t)puVar48;
    }
    uVar59 = uVar25 + uVar59;
  }
  lVar40 = uVar59 + 4;
  if (puStack_110 < puVar56) {
    pcVar30 = (char *)(uVar50 + (uVar14 - 1));
    while (puVar48 = (uint64_t *)((int64_t)puVar41 + -1), *(char *)puVar48 == *pcVar30) {
      lVar40 = lVar40 + 1;
      puVar41 = puVar48;
      if ((pcVar30 <= pcVar49) || (pcVar30 = pcVar30 + -1, puVar48 <= puStack_110)) break;
    }
  }
  iVar51 = iVar52 - (uVar37 + uVar57);
  puVar48 = (uint64_t *)param_2[3];
  uVar59 = (int64_t)puVar41 - (int64_t)puStack_110;
  if (puVar3 < puVar41) {
    puVar29 = puVar48;
    if (puStack_110 <= puVar3) {
      uVar25 = puStack_110[1];
      *puVar48 = *puStack_110;
      puVar48[1] = uVar25;
      puVar29 = (uint64_t *)((int64_t)puVar48 + ((int64_t)puVar3 - (int64_t)puStack_110));
      if (0x10 < (int64_t)puVar3 - (int64_t)puStack_110) {
        puVar48 = puVar48 + 6;
        while( true ) {
          uVar25 = puStack_110[3];
          puVar48[-4] = puStack_110[2];
          puVar48[-3] = uVar25;
          uVar25 = puStack_110[5];
          puVar48[-2] = puStack_110[4];
          puVar48[-1] = uVar25;
          if (puVar29 <= puVar48) break;
          puVar48 = puVar48 + 4;
          puStack_110 = puStack_110 + 4;
        }
      }
      puStack_110 = puVar3;
    }
    if (puStack_110 < puVar41) {
      uVar25 = (int64_t)puVar41 - (int64_t)puStack_110;
      puVar48 = puVar29;
      if ((3 < uVar25) && (0x1f < (uint64_t)((int64_t)puVar29 - (int64_t)puStack_110))) {
        if (uVar25 < 0x20) {
          uVar39 = 0;
        }
        else {
          uVar39 = uVar25 & 0xffffffffffffffe0;
          uVar50 = 0;
          do {
            uVar20 = *(uint64_t *)((int64_t)puStack_110 + uVar50);
            uVar21 = ((uint64_t *)((int64_t)puStack_110 + uVar50))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_110 + uVar50 + 0x10);
            uVar22 = puVar5[1];
            puVar8 = (uint64_t *)((int64_t)puVar29 + uVar50 + 0x10);
            *puVar8 = *puVar5;
            puVar8[1] = uVar22;
            *(uint64_t *)((int64_t)puVar29 + uVar50) = uVar20;
            ((uint64_t *)((int64_t)puVar29 + uVar50))[1] = uVar21;
            uVar50 = uVar50 + 0x20;
          } while (uVar50 != uVar39);
          if (uVar25 == uVar39) goto LAB_7fffa4ed3c15;
          if ((uVar25 & 0x1c) == 0) {
            puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar39);
            puVar48 = (uint64_t *)((int64_t)puVar29 + uVar39);
            goto LAB_7fffa4ed3b03;
          }
        }
        uVar50 = uVar25 & 0xfffffffffffffffc;
        puVar48 = (uint64_t *)((int64_t)puVar29 + uVar50);
        do {
          *(uint32_t *)((int64_t)puVar29 + uVar39) =
               *(uint32_t *)((int64_t)puStack_110 + uVar39);
          uVar39 = uVar39 + 4;
        } while (uVar39 != uVar50);
        if (uVar25 == uVar50) goto LAB_7fffa4ed3c15;
        puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar50);
      }
LAB_7fffa4ed3b03:
      uVar25 = (uint64_t)((int)puVar41 - (int)puStack_110 & 7);
      puVar29 = puStack_110;
      if (uVar25 != 0) {
        uVar50 = 0;
        puVar26 = puVar48;
        puVar33 = puStack_110;
        do {
          puVar29 = (uint64_t *)((int64_t)puVar33 + 1);
          puVar48 = (uint64_t *)((int64_t)puVar26 + 1);
          *(char *)puVar26 = (char)*puVar33;
          uVar50 = uVar50 + 1;
          puVar26 = puVar48;
          puVar33 = puVar29;
        } while (uVar50 != uVar25);
      }
      if ((uint64_t)((int64_t)puStack_110 - (int64_t)puVar41) < 0xfffffffffffffff9) {
        lVar47 = 0;
        while( true ) {
          *(uint8_t *)((int64_t)puVar48 + lVar47) = *(uint8_t *)((int64_t)puVar29 + lVar47);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 1) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 1);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 2) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 2);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 3) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 3);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 4) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 4);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 5) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 5);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 6) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 6);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 7) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 7);
          if ((uint64_t *)((int64_t)puVar29 + lVar47 + 8) == puVar41) break;
          lVar47 = lVar47 + 8;
        }
      }
    }
LAB_7fffa4ed3c15:
    param_2[3] = param_2[3] + uVar59;
    lVar47 = param_2[1];
    if (0xffff < uVar59) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
    }
  }
  else {
    uVar25 = puStack_110[1];
    *puVar48 = *puStack_110;
    puVar48[1] = uVar25;
    if (0x10 < uVar59) {
      lVar47 = param_2[3];
      uVar25 = puStack_110[3];
      *(uint64_t *)(lVar47 + 0x10) = puStack_110[2];
      *(uint64_t *)(lVar47 + 0x18) = uVar25;
      if (0x20 < (int64_t)uVar59) {
        lVar34 = 0;
        while( true ) {
          puVar8 = (uint64_t *)((int64_t)puStack_110 + lVar34 + 0x20);
          uVar20 = puVar8[1];
          puVar5 = (uint64_t *)(lVar47 + 0x20 + lVar34);
          *puVar5 = *puVar8;
          puVar5[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar34 + 0x30);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)(lVar47 + 0x30 + lVar34);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          if (lVar47 + uVar59 <= lVar47 + 0x20 + lVar34 + 0x20U) break;
          lVar34 = lVar34 + 0x20;
        }
      }
      goto LAB_7fffa4ed3c15;
    }
    lVar47 = param_2[1];
    param_2[3] = param_2[3] + uVar59;
  }
  *(short *)(lVar47 + 4) = (short)uVar59;
  *(int *)param_2[1] = iVar51 + 3;
  lVar47 = param_2[1];
  uVar59 = lVar40 - 3;
  iStack_a4 = iStack_12c;
  if (uVar59 < 0x10000) goto LAB_7fffa4ed30c0;
  goto LAB_7fffa4ed30a4;
LAB_7fffa4ed24be:
  puVar48 = (uint64_t *)((int64_t)puVar56 + 4);
  puVar29 = (uint64_t *)(piVar35 + 1);
  puVar33 = puVar48;
  if (puVar48 < puVar44) {
    if (*puVar29 == *puVar48) {
      lVar40 = lVar12 + 0xc + uVar58;
      lVar47 = 0;
      do {
        puVar29 = (uint64_t *)((int64_t)puVar56 + lVar47 + 0xc);
        if (puVar44 <= puVar29) {
          puVar29 = (uint64_t *)(lVar40 + lVar47);
          puVar33 = (uint64_t *)((int64_t)puVar56 + lVar47 + 0xc);
          goto joined_r0x7fffa4ed27ca;
        }
        uVar59 = *(uint64_t *)(lVar40 + lVar47);
        uVar25 = *puVar29;
        lVar47 = lVar47 + 8;
      } while (uVar59 == uVar25);
      uVar42 = 0;
      for (uVar59 = uVar59 ^ uVar25; (uVar59 & 1) == 0; uVar59 = uVar59 >> 1 | 0x8000000000000000) {
        uVar42 = uVar42 + 1;
      }
      uVar59 = (uint64_t)(uVar42 >> 3) + lVar47;
    }
    else {
      uVar42 = 0;
      for (uVar59 = *puVar29 ^ *puVar48; (uVar59 & 1) == 0;
          uVar59 = uVar59 >> 1 | 0x8000000000000000) {
        uVar42 = uVar42 + 1;
      }
      uVar59 = (uint64_t)(uVar42 >> 3);
    }
  }
  else {
joined_r0x7fffa4ed27ca:
    if ((puVar33 < puVar2) && ((int)*puVar29 == (int)*puVar33)) {
      puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
      puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
    }
    if ((puVar33 < puVar1) && ((short)*puVar29 == (short)*puVar33)) {
      puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
      puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
    }
    if (puVar33 < puVar4) {
      puVar33 = (uint64_t *)((int64_t)puVar33 + (uint64_t)((char)*puVar29 == (char)*puVar33));
    }
    uVar59 = (int64_t)puVar33 - (int64_t)puVar48;
  }
  lVar40 = uVar59 + 4;
  if (puStack_110 < puVar56) {
    puVar48 = (uint64_t *)(uVar58 + lVar12 + -1);
    while (puVar29 = (uint64_t *)((int64_t)puVar41 + -1), *(char *)puVar29 == (char)*puVar48) {
      lVar40 = lVar40 + 1;
      puVar41 = puVar29;
      if ((puVar29 <= puStack_110) ||
         (bVar16 = puVar48 <= puVar53, puVar48 = (uint64_t *)((int64_t)puVar48 + -1), bVar16))
      break;
    }
  }
  puVar48 = (uint64_t *)param_2[3];
  uVar25 = (int64_t)puVar41 - (int64_t)puStack_110;
  if (puVar3 < puVar41) {
    puVar29 = puVar48;
    if (puStack_110 <= puVar3) {
      uVar59 = puStack_110[1];
      *puVar48 = *puStack_110;
      puVar48[1] = uVar59;
      puVar29 = (uint64_t *)((int64_t)puVar48 + ((int64_t)puVar3 - (int64_t)puStack_110));
      if (0x10 < (int64_t)puVar3 - (int64_t)puStack_110) {
        puVar48 = puVar48 + 6;
        while( true ) {
          uVar59 = puStack_110[3];
          puVar48[-4] = puStack_110[2];
          puVar48[-3] = uVar59;
          uVar59 = puStack_110[5];
          puVar48[-2] = puStack_110[4];
          puVar48[-1] = uVar59;
          if (puVar29 <= puVar48) break;
          puVar48 = puVar48 + 4;
          puStack_110 = puStack_110 + 4;
        }
      }
      puStack_110 = puVar3;
    }
    if (puStack_110 < puVar41) {
      uVar59 = (int64_t)puVar41 - (int64_t)puStack_110;
      if ((uVar59 < 4) || ((uint64_t)((int64_t)puVar29 - (int64_t)puStack_110) < 0x20)) {
LAB_7fffa4ed2a57:
        puVar48 = puVar29;
      }
      else {
        if (uVar59 < 0x20) {
          uVar50 = 0;
        }
        else {
          uVar50 = uVar59 & 0xffffffffffffffe0;
          uVar39 = 0;
          do {
            uVar20 = ((uint64_t *)((int64_t)puStack_110 + uVar39))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_110 + uVar39 + 0x10);
            uVar21 = *puVar5;
            uVar22 = puVar5[1];
            *(uint64_t *)((int64_t)puVar29 + uVar39) =
                 *(uint64_t *)((int64_t)puStack_110 + uVar39);
            ((uint64_t *)((int64_t)puVar29 + uVar39))[1] = uVar20;
            puVar5 = (uint64_t *)((int64_t)puVar29 + uVar39 + 0x10);
            *puVar5 = uVar21;
            puVar5[1] = uVar22;
            uVar39 = uVar39 + 0x20;
          } while (uVar39 != uVar50);
          if (uVar59 == uVar50) goto LAB_7fffa4ed2b5c;
          if ((uVar59 & 0x1c) == 0) {
            puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar50);
            puVar29 = (uint64_t *)((int64_t)puVar29 + uVar50);
            goto LAB_7fffa4ed2a57;
          }
        }
        uVar39 = uVar59 & 0xfffffffffffffffc;
        puVar48 = (uint64_t *)((int64_t)puVar29 + uVar39);
        do {
          *(uint32_t *)((int64_t)puVar29 + uVar50) =
               *(uint32_t *)((int64_t)puStack_110 + uVar50);
          uVar50 = uVar50 + 4;
        } while (uVar50 != uVar39);
        if (uVar59 == uVar39) goto LAB_7fffa4ed2b5c;
        puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar39);
      }
      uVar59 = (int64_t)puVar41 - (int64_t)puStack_110 & 7;
      puVar29 = puStack_110;
      if (uVar59 != 0) {
        uVar50 = 0;
        puVar33 = puVar48;
        puVar26 = puStack_110;
        do {
          puVar29 = (uint64_t *)((int64_t)puVar26 + 1);
          puVar48 = (uint64_t *)((int64_t)puVar33 + 1);
          *(char *)puVar33 = (char)*puVar26;
          uVar50 = uVar50 + 1;
          puVar33 = puVar48;
          puVar26 = puVar29;
        } while (uVar50 != uVar59);
      }
      if ((uint64_t)((int64_t)puStack_110 - (int64_t)puVar41) < 0xfffffffffffffff9) {
        while( true ) {
          *(char *)puVar48 = (char)*puVar29;
          *(uint8_t *)((int64_t)puVar48 + 1) = *(uint8_t *)((int64_t)puVar29 + 1);
          *(uint8_t *)((int64_t)puVar48 + 2) = *(uint8_t *)((int64_t)puVar29 + 2);
          *(uint8_t *)((int64_t)puVar48 + 3) = *(uint8_t *)((int64_t)puVar29 + 3);
          *(uint8_t *)((int64_t)puVar48 + 4) = *(uint8_t *)((int64_t)puVar29 + 4);
          *(uint8_t *)((int64_t)puVar48 + 5) = *(uint8_t *)((int64_t)puVar29 + 5);
          *(uint8_t *)((int64_t)puVar48 + 6) = *(uint8_t *)((int64_t)puVar29 + 6);
          *(uint8_t *)((int64_t)puVar48 + 7) = *(uint8_t *)((int64_t)puVar29 + 7);
          if (puVar29 + 1 == puVar41) break;
          puVar48 = puVar48 + 1;
          puVar29 = puVar29 + 1;
        }
      }
    }
LAB_7fffa4ed2b5c:
    param_2[3] = param_2[3] + uVar25;
    lVar47 = param_2[1];
    if (0xffff < uVar25) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
    }
  }
  else {
    uVar59 = puStack_110[1];
    *puVar48 = *puStack_110;
    puVar48[1] = uVar59;
    if (0x10 < uVar25) {
      lVar47 = param_2[3];
      uVar59 = puStack_110[3];
      *(uint64_t *)(lVar47 + 0x10) = puStack_110[2];
      *(uint64_t *)(lVar47 + 0x18) = uVar59;
      if (0x20 < (int64_t)uVar25) {
        lVar34 = 0;
        do {
          puVar8 = (uint64_t *)((int64_t)puStack_110 + lVar34 + 0x20);
          uVar20 = puVar8[1];
          puVar5 = (uint64_t *)(lVar47 + 0x20 + lVar34);
          *puVar5 = *puVar8;
          puVar5[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar34 + 0x30);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)(lVar47 + 0x30 + lVar34);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          lVar6 = lVar47 + 0x20 + lVar34;
          lVar34 = lVar34 + 0x20;
        } while (lVar6 + 0x20U < lVar47 + uVar25);
      }
      goto LAB_7fffa4ed2b5c;
    }
    lVar47 = param_2[1];
    param_2[3] = param_2[3] + uVar25;
  }
  iVar51 = (int)puVar56 - (int)piVar35;
  uVar59 = lVar40 - 3;
  *(short *)(lVar47 + 4) = (short)uVar25;
  *(int *)param_2[1] = iVar51 + 3;
  lVar47 = param_2[1];
  iStack_a4 = iStack_12c;
joined_r0x7fffa4ed30a2:
  if (0xffff < uVar59) {
LAB_7fffa4ed30a4:
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
  }
LAB_7fffa4ed30c0:
  puVar41 = (uint64_t *)(lVar40 + (int64_t)puVar41);
  *(short *)(lVar47 + 6) = (short)uVar59;
  param_2[1] = param_2[1] + 8;
  if (puVar7 < puVar41) {
LAB_7fffa4ed35ab:
    puVar56 = puVar41;
    iVar31 = iStack_a4;
    iStack_a4 = iVar51;
  }
  else {
    *(int *)(lVar15 + ((uint64_t)
                       (*(int64_t *)(lVar12 + 2 + ((int64_t)puVar56 - lVar12 & 0xffffffffU)) *
                       -0x30e4432345000000) >> (bVar28 & 0x3f)) * 4) = iVar52 + 2;
    *(int *)(lVar15 + ((uint64_t)(*(int64_t *)((int64_t)puVar41 + -2) * -0x30e4432345000000) >>
                      (bVar28 & 0x3f)) * 4) = ((int)puVar41 + -2) - iVar19;
    iVar52 = iVar51;
    iVar51 = iStack_a4;
    do {
      iStack_a4 = iVar51;
      iVar51 = iVar52;
      iVar52 = (int)puVar41 - iVar19;
      uVar42 = iVar52 - iStack_a4;
      lVar47 = lVar12;
      if (uVar42 < uVar9) {
        lVar47 = uVar14 - uVar57;
      }
      if (((uVar9 - 1) - uVar42 < 3) ||
         (piVar35 = (int *)(lVar47 + (uint64_t)uVar42), *piVar35 != (int)*puVar41))
      goto LAB_7fffa4ed35ab;
      puVar56 = (uint64_t *)(piVar35 + 1);
      puVar48 = puVar4;
      if (uVar42 < uVar9) {
        puVar48 = puVar13;
      }
      puVar29 = (uint64_t *)((int64_t)puVar41 + 4);
      puVar33 = (uint64_t *)((int64_t)puVar41 + (int64_t)puVar48 + (4 - (int64_t)puVar56));
      if (puVar4 <= puVar33) {
        puVar33 = puVar4;
      }
      puVar26 = puVar29;
      puVar36 = puVar56;
      if (puVar29 < (uint64_t *)((int64_t)puVar33 - 7U)) {
        if (*puVar56 == *puVar29) {
          lVar47 = 0xc;
LAB_7fffa4ed3290:
          puVar26 = (uint64_t *)(lVar47 + (int64_t)puVar41);
          if (puVar26 < (uint64_t *)((int64_t)puVar33 - 7U)) {
            if (*(uint64_t *)((int64_t)piVar35 + lVar47) == *puVar26) goto code_r0x7fffa4ed32d2;
            uVar42 = 0;
            for (uVar59 = *puVar26 ^ *(uint64_t *)((int64_t)piVar35 + lVar47); (uVar59 & 1) == 0;
                uVar59 = uVar59 >> 1 | 0x8000000000000000) {
              uVar42 = uVar42 + 1;
            }
            uVar59 = ((uint64_t)(uVar42 >> 3) + lVar47) - 4;
            goto LAB_7fffa4ed3358;
          }
          puVar36 = (uint64_t *)((int64_t)piVar35 + lVar47);
          goto LAB_7fffa4ed32f0;
        }
        uVar42 = 0;
        for (uVar59 = *puVar29 ^ *puVar56; (uVar59 & 1) == 0;
            uVar59 = uVar59 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        uVar59 = (uint64_t)(uVar42 >> 3);
      }
      else {
LAB_7fffa4ed32f0:
        if ((puVar26 < (uint64_t *)((int64_t)puVar33 - 3U)) && ((int)*puVar36 == (int)*puVar26)) {
          puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
          puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
        }
        if ((puVar26 < (uint64_t *)((int64_t)puVar33 - 1U)) &&
           ((short)*puVar36 == (short)*puVar26)) {
          puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
          puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
        }
        if (puVar26 < puVar33) {
          puVar26 = (uint64_t *)((int64_t)puVar26 + (uint64_t)((char)*puVar36 == (char)*puVar26))
          ;
        }
        uVar59 = (int64_t)puVar26 - (int64_t)puVar29;
      }
LAB_7fffa4ed3358:
      if ((uint64_t *)((int64_t)puVar56 + uVar59) == puVar48) {
        puVar29 = (uint64_t *)((int64_t)puVar29 + uVar59);
        puVar56 = puVar29;
        puVar48 = puVar53;
        if (puVar29 < puVar44) {
          if (*puVar53 == *puVar29) {
            lVar47 = 0;
            do {
              puVar56 = (uint64_t *)((int64_t)puVar41 + lVar47 + uVar59 + 0xc);
              if (puVar44 <= puVar56) {
                puVar56 = (uint64_t *)((int64_t)puVar41 + lVar47 + uVar59 + 0xc);
                puVar48 = (uint64_t *)(lVar47 + lVar45);
                goto LAB_7fffa4ed3526;
              }
              uVar25 = *puVar56;
              puVar56 = (uint64_t *)(lVar45 + lVar47);
              lVar47 = lVar47 + 8;
            } while (*puVar56 == uVar25);
            uVar42 = 0;
            for (uVar25 = uVar25 ^ *puVar56; (uVar25 & 1) == 0;
                uVar25 = uVar25 >> 1 | 0x8000000000000000) {
              uVar42 = uVar42 + 1;
            }
            uVar25 = (uint64_t)(uVar42 >> 3) + lVar47;
          }
          else {
            uVar42 = 0;
            for (uVar25 = *puVar53 ^ *puVar29; (uVar25 & 1) == 0;
                uVar25 = uVar25 >> 1 | 0x8000000000000000) {
              uVar42 = uVar42 + 1;
            }
            uVar25 = (uint64_t)(uVar42 >> 3);
          }
        }
        else {
LAB_7fffa4ed3526:
          if ((puVar56 < puVar2) && ((int)*puVar48 == (int)*puVar56)) {
            puVar48 = (uint64_t *)((int64_t)puVar48 + 4);
            puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
          }
          if ((puVar56 < puVar1) && ((short)*puVar48 == (short)*puVar56)) {
            puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
            puVar48 = (uint64_t *)((int64_t)puVar48 + 2);
          }
          if (puVar56 < puVar4) {
            puVar56 = (uint64_t *)
                      ((int64_t)puVar56 + (uint64_t)((char)*puVar48 == (char)*puVar56));
          }
          uVar25 = (int64_t)puVar56 - (int64_t)puVar29;
        }
        uVar59 = uVar59 + uVar25;
      }
      if (puVar41 <= puVar3) {
        puVar56 = (uint64_t *)param_2[3];
        uVar25 = puVar41[1];
        *puVar56 = *puVar41;
        puVar56[1] = uVar25;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar59 + 1) {
        *(uint32_t *)(param_2 + 9) = 2;
        *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
      }
      *(short *)(param_2[1] + 6) = (short)(uVar59 + 1);
      param_2[1] = param_2[1] + 8;
      puVar56 = (uint64_t *)((int64_t)puVar41 + uVar59 + 4);
      *(int *)(lVar15 + (*puVar41 * -0x30e4432345000000 >> (bVar28 & 0x3f)) * 4) = iVar52;
      puVar41 = puVar56;
      iVar52 = iStack_a4;
      iVar31 = iVar51;
    } while (puVar56 <= puVar7);
  }
  puVar48 = (uint64_t *)(uVar54 + (int64_t)puVar56);
  iStack_12c = iStack_a4;
  puStack_110 = puVar56;
  iStack_a4 = iVar31;
  if (puVar7 < puVar48) goto LAB_7fffa4ed8b08;
  goto LAB_7fffa4ed22dc;
code_r0x7fffa4ed32d2:
  lVar47 = lVar47 + 8;
  goto LAB_7fffa4ed3290;
LAB_7fffa4ed7641:
  puVar26 = (uint64_t *)((int64_t)puVar56 + lVar47 + 0xd);
  if (puVar26 < (uint64_t *)((int64_t)puVar33 - 7U)) goto code_r0x7fffa4ed764e;
  puVar36 = (uint64_t *)((int64_t)puVar56 + lVar47 + 0xd);
  puVar26 = (uint64_t *)((int64_t)piVar35 + lVar47 + 0xc);
LAB_7fffa4ed76ea:
  if ((puVar36 < (uint64_t *)((int64_t)puVar33 - 3U)) && ((int)*puVar26 == (int)*puVar36)) {
    puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
    puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
  }
  if ((puVar36 < (uint64_t *)((int64_t)puVar33 - 1U)) && ((short)*puVar26 == (short)*puVar36)) {
    puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
    puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
  }
  if (puVar36 < puVar33) {
    puVar36 = (uint64_t *)((int64_t)puVar36 + (uint64_t)((char)*puVar26 == (char)*puVar36));
  }
  uVar59 = (int64_t)puVar36 - (int64_t)puVar41;
  goto LAB_7fffa4ed7740;
code_r0x7fffa4ed764e:
  uVar59 = *puVar26;
  uVar25 = *(uint64_t *)((int64_t)piVar35 + lVar47 + 0xc);
  lVar47 = lVar47 + 8;
  if (uVar25 != uVar59) goto code_r0x7fffa4ed769a;
  goto LAB_7fffa4ed7641;
code_r0x7fffa4ed769a:
  uVar37 = 0;
  for (uVar25 = uVar25 ^ uVar59; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x8000000000000000) {
    uVar37 = uVar37 + 1;
  }
  uVar59 = (uint64_t)(uVar37 >> 3) + lVar47;
LAB_7fffa4ed7740:
  if ((uint64_t *)((int64_t)puVar29 + uVar59) == puVar48) {
    puVar41 = (uint64_t *)((int64_t)puVar41 + uVar59);
    puVar48 = puVar53;
    puVar29 = puVar41;
    if (puVar41 < puVar2) {
      if (*puVar53 == *puVar41) {
        puVar29 = (uint64_t *)((int64_t)puVar56 + uVar59 + 0xd);
        lVar47 = 8;
        if (puVar29 < puVar2) {
LAB_7fffa4ed77d8:
          if (*(uint64_t *)((int64_t)puVar53 + lVar47) == *puVar29) goto code_r0x7fffa4ed7827;
          uVar37 = 0;
          for (uVar25 = *(uint64_t *)((int64_t)puVar53 + lVar47) ^ *puVar29; (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          uVar25 = (uint64_t)(uVar37 >> 3) + lVar47;
          goto LAB_7fffa4ed7e40;
        }
LAB_7fffa4ed7836:
        puVar48 = (uint64_t *)(lVar47 + (int64_t)puVar53);
        goto LAB_7fffa4ed783e;
      }
      uVar37 = 0;
      for (uVar25 = *puVar41 ^ *puVar53; (uVar25 & 1) == 0;
          uVar25 = uVar25 >> 1 | 0x8000000000000000) {
        uVar37 = uVar37 + 1;
      }
      uVar25 = (uint64_t)(uVar37 >> 3);
    }
    else {
LAB_7fffa4ed783e:
      if ((puVar29 < puVar3) && ((int)*puVar48 == (int)*puVar29)) {
        puVar48 = (uint64_t *)((int64_t)puVar48 + 4);
        puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
      }
      if ((puVar29 < puVar44) && ((short)*puVar48 == (short)*puVar29)) {
        puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
        puVar48 = (uint64_t *)((int64_t)puVar48 + 2);
      }
      if (puVar29 < puVar4) {
        puVar29 = (uint64_t *)((int64_t)puVar29 + (uint64_t)((char)*puVar48 == (char)*puVar29));
      }
      uVar25 = (int64_t)puVar29 - (int64_t)puVar41;
    }
LAB_7fffa4ed7e40:
    uVar59 = uVar59 + uVar25;
  }
  puVar48 = (uint64_t *)((int64_t)puVar56 + 1);
  puVar29 = (uint64_t *)param_2[3];
  uVar25 = (int64_t)puVar48 - (int64_t)puStack_110;
  if (puVar1 < puVar48) {
    puVar41 = puVar29;
    if (puStack_110 <= puVar1) {
      uVar50 = puStack_110[1];
      *puVar29 = *puStack_110;
      puVar29[1] = uVar50;
      puVar41 = (uint64_t *)((int64_t)puVar29 + ((int64_t)puVar1 - (int64_t)puStack_110));
      if (0x10 < (int64_t)puVar1 - (int64_t)puStack_110) {
        lVar47 = 0x10;
        do {
          uVar20 = ((uint64_t *)((int64_t)puStack_110 + lVar47))[1];
          *(uint64_t *)((int64_t)puVar29 + lVar47) =
               *(uint64_t *)((int64_t)puStack_110 + lVar47);
          ((uint64_t *)((int64_t)puVar29 + lVar47))[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar47 + 0x10);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)((int64_t)puVar29 + lVar47 + 0x10);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          lVar40 = lVar47 + 0x20;
          lVar47 = lVar47 + 0x20;
        } while ((uint64_t *)((int64_t)puVar29 + lVar40) < puVar41);
      }
      puStack_110 = puVar1;
    }
    if (puStack_110 < puVar48) {
      uVar50 = (int64_t)puVar56 + (1 - (int64_t)puStack_110);
      if (uVar50 < 4 || (uint64_t)((int64_t)puVar41 - (int64_t)puStack_110) < 0x20) {
LAB_7fffa4ed84fc:
        puVar29 = puVar41;
      }
      else {
        if (uVar50 < 0x20) {
          uVar39 = 0;
        }
        else {
          uVar39 = uVar50 & 0xffffffffffffffe0;
          uVar46 = 0;
          do {
            uVar20 = *(uint64_t *)((int64_t)puStack_110 + uVar46);
            uVar21 = ((uint64_t *)((int64_t)puStack_110 + uVar46))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_110 + uVar46 + 0x10);
            uVar22 = puVar5[1];
            puVar8 = (uint64_t *)((int64_t)puVar41 + uVar46 + 0x10);
            *puVar8 = *puVar5;
            puVar8[1] = uVar22;
            *(uint64_t *)((int64_t)puVar41 + uVar46) = uVar20;
            ((uint64_t *)((int64_t)puVar41 + uVar46))[1] = uVar21;
            uVar46 = uVar46 + 0x20;
          } while (uVar46 != uVar39);
          if (uVar50 == uVar39) goto LAB_7fffa4ed7f6b;
          if ((uVar50 & 0x1c) == 0) {
            puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar39);
            puVar41 = (uint64_t *)((int64_t)puVar41 + uVar39);
            goto LAB_7fffa4ed84fc;
          }
        }
        uVar46 = uVar50 & 0xfffffffffffffffc;
        puVar29 = (uint64_t *)((int64_t)puVar41 + uVar46);
        do {
          *(uint32_t *)((int64_t)puVar41 + uVar39) =
               *(uint32_t *)((int64_t)puStack_110 + uVar39);
          uVar39 = uVar39 + 4;
        } while (uVar39 != uVar46);
        if (uVar50 == uVar46) goto LAB_7fffa4ed7f6b;
        puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar46);
      }
      uVar50 = (int64_t)puVar56 - (int64_t)puStack_110;
      uVar37 = (uint32_t)uVar50;
      if ((~uVar37 & 7) != 0) {
        uVar39 = 0;
        do {
          uVar46 = *puStack_110;
          puStack_110 = (uint64_t *)((int64_t)puStack_110 + 1);
          *(char *)puVar29 = (char)uVar46;
          puVar29 = (uint64_t *)((int64_t)puVar29 + 1);
          uVar39 = uVar39 + 1;
        } while (uVar39 != (uVar37 + 1 & 7));
        if (uVar50 < 7) goto LAB_7fffa4ed7f6b;
      }
      puStack_110 = (uint64_t *)((int64_t)puStack_110 + 7);
      while( true ) {
        *(uint8_t *)puVar29 = *(uint8_t *)((int64_t)puStack_110 + -7);
        *(uint8_t *)((int64_t)puVar29 + 1) = *(uint8_t *)((int64_t)puStack_110 + -6);
        *(uint8_t *)((int64_t)puVar29 + 2) = *(uint8_t *)((int64_t)puStack_110 + -5);
        *(uint8_t *)((int64_t)puVar29 + 3) = *(uint8_t *)((int64_t)puStack_110 + -4);
        *(uint8_t *)((int64_t)puVar29 + 4) = *(uint8_t *)((int64_t)puStack_110 + -3);
        *(uint8_t *)((int64_t)puVar29 + 5) = *(uint8_t *)((int64_t)puStack_110 + -2);
        *(uint8_t *)((int64_t)puVar29 + 6) = *(uint8_t *)((int64_t)puStack_110 + -1);
        *(char *)((int64_t)puVar29 + 7) = (char)*puStack_110;
        if (puStack_110 == puVar56) break;
        puStack_110 = puStack_110 + 1;
        puVar29 = puVar29 + 1;
      }
    }
LAB_7fffa4ed7f6b:
    lVar47 = param_2[1];
    param_2[3] = param_2[3] + uVar25;
    if (0xffff < uVar25) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
    }
  }
  else {
    uVar50 = puStack_110[1];
    *puVar29 = *puStack_110;
    puVar29[1] = uVar50;
    if (0x10 < uVar25) {
      lVar47 = param_2[3];
      uVar50 = puStack_110[3];
      *(uint64_t *)(lVar47 + 0x10) = puStack_110[2];
      *(uint64_t *)(lVar47 + 0x18) = uVar50;
      if (0x20 < (int64_t)uVar25) {
        uVar50 = lVar47 + 0x40;
        puStack_110 = puStack_110 + 6;
        while( true ) {
          uVar39 = puStack_110[-1];
          *(uint64_t *)(uVar50 - 0x20) = puStack_110[-2];
          *(uint64_t *)(uVar50 - 0x18) = uVar39;
          uVar39 = puStack_110[1];
          *(uint64_t *)(uVar50 - 0x10) = *puStack_110;
          *(uint64_t *)(uVar50 - 8) = uVar39;
          if (lVar47 + uVar25 <= uVar50) break;
          uVar50 = uVar50 + 0x20;
          puStack_110 = puStack_110 + 4;
        }
      }
      goto LAB_7fffa4ed7f6b;
    }
    lVar47 = param_2[1];
    param_2[3] = param_2[3] + uVar25;
  }
  lVar40 = uVar59 + 4;
  uVar59 = uVar59 + 1;
  *(short *)(lVar47 + 4) = (short)uVar25;
  *(uint32_t *)param_2[1] = 1;
  lVar47 = param_2[1];
  iVar51 = iStack_12c;
joined_r0x7fffa4ed7fd4:
  if (0xffff < uVar59) {
LAB_7fffa4ed7fd6:
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
    *(uint32_t *)(param_2 + 9) = 2;
  }
LAB_7fffa4ed7ff2:
  puVar48 = (uint64_t *)(lVar40 + (int64_t)puVar48);
  *(short *)(lVar47 + 6) = (short)uVar59;
  param_2[1] = param_2[1] + 8;
  if (puVar7 < puVar48) {
    puVar56 = puVar48;
    iStack_12c = iVar51;
LAB_7fffa4ed8461:
    iVar31 = iStack_a4;
  }
  else {
    bVar28 = (uint8_t)uVar42;
    *(int *)(lVar15 + ((uint64_t)
                       (*(int64_t *)(lVar12 + 2 + ((int64_t)puVar56 - lVar12 & 0xffffffffU)) *
                       -0x30e4432340650000) >> (bVar28 & 0x3f)) * 4) = iVar52 + 2;
    *(int *)(lVar15 + ((uint64_t)(*(int64_t *)((int64_t)puVar48 + -2) * -0x30e4432340650000) >>
                      (bVar28 & 0x3f)) * 4) = ((int)puVar48 + -2) - iVar19;
    iVar31 = iStack_a4;
    do {
      iStack_12c = iVar31;
      iVar31 = iVar51;
      iVar52 = (int)puVar48 - iVar19;
      uVar37 = iVar52 - iStack_12c;
      lVar47 = lVar12;
      if (uVar37 < uVar9) {
        lVar47 = uVar14 - uVar57;
      }
      if (((uVar9 - 1) - uVar37 < 3) ||
         (piVar35 = (int *)(lVar47 + (uint64_t)uVar37), *piVar35 != (int)*puVar48)) {
        puVar56 = puVar48;
        iStack_a4 = iStack_12c;
        iStack_12c = iVar31;
        goto LAB_7fffa4ed8461;
      }
      puVar56 = (uint64_t *)((int64_t)puVar48 + 4);
      puVar29 = puVar4;
      if (uVar37 < uVar9) {
        puVar29 = puVar13;
      }
      puVar41 = (uint64_t *)(piVar35 + 1);
      puVar33 = (uint64_t *)((int64_t)puVar48 + (int64_t)puVar29 + (4 - (int64_t)puVar41));
      if (puVar4 <= puVar33) {
        puVar33 = puVar4;
      }
      puVar26 = puVar41;
      puVar36 = puVar56;
      if (puVar56 < (uint64_t *)((int64_t)puVar33 - 7U)) {
        if (*puVar41 == *puVar56) {
          lVar40 = 0;
          do {
            puVar26 = (uint64_t *)((int64_t)puVar48 + lVar40 + 0xc);
            if ((uint64_t *)((int64_t)puVar33 - 7U) <= puVar26) {
              puVar36 = (uint64_t *)((int64_t)puVar48 + lVar40 + 0xc);
              puVar26 = (uint64_t *)((int64_t)piVar35 + lVar40 + 0xc);
              goto LAB_7fffa4ed822b;
            }
            uVar59 = *puVar26;
            uVar25 = *(uint64_t *)(lVar47 + (uint64_t)uVar37 + 0xc + lVar40);
            lVar40 = lVar40 + 8;
          } while (uVar25 == uVar59);
          uVar37 = 0;
          for (uVar25 = uVar25 ^ uVar59; (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          uVar59 = (uint64_t)(uVar37 >> 3) + lVar40;
        }
        else {
          uVar37 = 0;
          for (uVar59 = *puVar41 ^ *puVar56; (uVar59 & 1) == 0;
              uVar59 = uVar59 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          uVar59 = (uint64_t)(uVar37 >> 3);
        }
      }
      else {
LAB_7fffa4ed822b:
        if ((puVar36 < (uint64_t *)((int64_t)puVar33 - 3U)) && ((int)*puVar26 == (int)*puVar36)) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
          puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
        }
        if ((puVar36 < (uint64_t *)((int64_t)puVar33 - 1U)) &&
           ((short)*puVar26 == (short)*puVar36)) {
          puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
          puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
        }
        if (puVar36 < puVar33) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + (uint64_t)((char)*puVar26 == (char)*puVar36))
          ;
        }
        uVar59 = (int64_t)puVar36 - (int64_t)puVar56;
      }
      if ((uint64_t *)((int64_t)puVar41 + uVar59) == puVar29) {
        puVar56 = (uint64_t *)((int64_t)puVar56 + uVar59);
        puVar29 = puVar53;
        puVar41 = puVar56;
        if (puVar56 < puVar2) {
          if (*puVar53 == *puVar56) {
            lVar47 = 0;
            do {
              puVar29 = (uint64_t *)((int64_t)puVar48 + lVar47 + uVar59 + 0xc);
              if (puVar2 <= puVar29) {
                puVar41 = (uint64_t *)((int64_t)puVar48 + lVar47 + uVar59 + 0xc);
                puVar29 = (uint64_t *)(lVar47 + lVar45);
                goto LAB_7fffa4ed8403;
              }
              uVar25 = *puVar29;
              uVar50 = *(uint64_t *)(lVar45 + lVar47);
              lVar47 = lVar47 + 8;
            } while (uVar50 == uVar25);
            uVar37 = 0;
            for (uVar50 = uVar50 ^ uVar25; (uVar50 & 1) == 0;
                uVar50 = uVar50 >> 1 | 0x8000000000000000) {
              uVar37 = uVar37 + 1;
            }
            uVar25 = (uint64_t)(uVar37 >> 3) + lVar47;
          }
          else {
            uVar37 = 0;
            for (uVar25 = *puVar56 ^ *puVar53; (uVar25 & 1) == 0;
                uVar25 = uVar25 >> 1 | 0x8000000000000000) {
              uVar37 = uVar37 + 1;
            }
            uVar25 = (uint64_t)(uVar37 >> 3);
          }
        }
        else {
LAB_7fffa4ed8403:
          if ((puVar41 < puVar3) && ((int)*puVar29 == (int)*puVar41)) {
            puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
          }
          if ((puVar41 < puVar44) && ((short)*puVar29 == (short)*puVar41)) {
            puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
          }
          if (puVar41 < puVar4) {
            puVar41 = (uint64_t *)
                      ((int64_t)puVar41 + (uint64_t)((char)*puVar29 == (char)*puVar41));
          }
          uVar25 = (int64_t)puVar41 - (int64_t)puVar56;
        }
        uVar59 = uVar59 + uVar25;
      }
      if (puVar48 <= puVar1) {
        puVar56 = (uint64_t *)param_2[3];
        uVar25 = puVar48[1];
        *puVar56 = *puVar48;
        puVar56[1] = uVar25;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar59 + 1) {
        *(uint32_t *)(param_2 + 9) = 2;
        *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
      }
      *(short *)(param_2[1] + 6) = (short)(uVar59 + 1);
      param_2[1] = param_2[1] + 8;
      puVar56 = (uint64_t *)((int64_t)puVar48 + uVar59 + 4);
      *(int *)(lVar15 + (*puVar48 * -0x30e4432340650000 >> (bVar28 & 0x3f)) * 4) = iVar52;
      puVar48 = puVar56;
      iVar51 = iStack_12c;
    } while (puVar56 <= puVar7);
  }
  puVar48 = (uint64_t *)(uVar54 + (int64_t)puVar56);
  puStack_110 = puVar56;
  iStack_a4 = iVar31;
  if (puVar7 < puVar48) goto LAB_7fffa4ed8b08;
  goto LAB_7fffa4ed72b7;
code_r0x7fffa4ed7827:
  puVar29 = puVar29 + 1;
  lVar47 = lVar47 + 8;
  if (puVar2 <= puVar29) goto LAB_7fffa4ed7836;
  goto LAB_7fffa4ed77d8;
LAB_7fffa4ed75ed:
  puVar26 = (uint64_t *)((int64_t)puVar56 + lVar47 + 0xc);
  if (puVar26 < (uint64_t *)((int64_t)puVar41 - 7U)) goto code_r0x7fffa4ed75fa;
  puVar36 = (uint64_t *)((int64_t)puVar56 + lVar47 + 0xc);
  puVar26 = (uint64_t *)(lVar47 + uVar14 + 0xc + uVar59);
LAB_7fffa4ed7d57:
  if ((puVar36 < (uint64_t *)((int64_t)puVar41 - 3U)) && ((int)*puVar26 == (int)*puVar36)) {
    puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
    puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
  }
  if ((puVar36 < (uint64_t *)((int64_t)puVar41 - 1U)) && ((short)*puVar26 == (short)*puVar36)) {
    puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
    puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
  }
  if (puVar36 < puVar41) {
    puVar36 = (uint64_t *)((int64_t)puVar36 + (uint64_t)((char)*puVar26 == (char)*puVar36));
  }
  uVar25 = (int64_t)puVar36 - (int64_t)puVar29;
  goto LAB_7fffa4ed7db5;
code_r0x7fffa4ed75fa:
  uVar25 = *puVar26;
  uVar50 = *(uint64_t *)(uVar14 + 0xc + uVar59 + lVar47);
  lVar47 = lVar47 + 8;
  if (uVar50 != uVar25) goto code_r0x7fffa4ed7618;
  goto LAB_7fffa4ed75ed;
code_r0x7fffa4ed7618:
  uVar37 = 0;
  for (uVar25 = uVar25 ^ uVar50; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x8000000000000000) {
    uVar37 = uVar37 + 1;
  }
  uVar25 = (uint64_t)(uVar37 >> 3) + lVar47;
LAB_7fffa4ed7db5:
  if ((uint64_t *)((int64_t)puVar33 + uVar25) == puVar13) {
    puVar29 = (uint64_t *)((int64_t)puVar29 + uVar25);
    puVar41 = puVar29;
    puVar33 = puVar53;
    if (puVar29 < puVar2) {
      if (*puVar53 == *puVar29) {
        puVar41 = (uint64_t *)((int64_t)puVar56 + uVar25 + 0xc);
        lVar47 = 8;
        if (puVar41 < puVar2) {
LAB_7fffa4ed8622:
          if (*(uint64_t *)((int64_t)puVar53 + lVar47) == *puVar41) goto code_r0x7fffa4ed8661;
          uVar37 = 0;
          for (uVar50 = *puVar41 ^ *(uint64_t *)((int64_t)puVar53 + lVar47); (uVar50 & 1) == 0;
              uVar50 = uVar50 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          uVar50 = (uint64_t)(uVar37 >> 3) + lVar47;
          goto LAB_7fffa4ed86e4;
        }
LAB_7fffa4ed8675:
        puVar33 = (uint64_t *)(lVar47 + (int64_t)puVar53);
        goto LAB_7fffa4ed8678;
      }
      uVar37 = 0;
      for (uVar50 = *puVar29 ^ *puVar53; (uVar50 & 1) == 0;
          uVar50 = uVar50 >> 1 | 0x8000000000000000) {
        uVar37 = uVar37 + 1;
      }
      uVar50 = (uint64_t)(uVar37 >> 3);
    }
    else {
LAB_7fffa4ed8678:
      if ((puVar41 < puVar3) && ((int)*puVar33 == (int)*puVar41)) {
        puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
        puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
      }
      if ((puVar41 < puVar44) && ((short)*puVar33 == (short)*puVar41)) {
        puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
        puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
      }
      if (puVar41 < puVar4) {
        puVar41 = (uint64_t *)((int64_t)puVar41 + (uint64_t)((char)*puVar33 == (char)*puVar41));
      }
      uVar50 = (int64_t)puVar41 - (int64_t)puVar29;
    }
LAB_7fffa4ed86e4:
    uVar25 = uVar25 + uVar50;
  }
  lVar40 = uVar25 + 4;
  if (puStack_110 < puVar56) {
    pcVar30 = (char *)(uVar59 + (uVar14 - 1));
    while (puVar29 = (uint64_t *)((int64_t)puVar48 + -1), *(char *)puVar29 == *pcVar30) {
      lVar40 = lVar40 + 1;
      puVar48 = puVar29;
      if ((pcVar30 <= pcVar49) || (pcVar30 = pcVar30 + -1, puVar29 <= puStack_110)) break;
    }
  }
  uVar25 = (int64_t)puVar48 - (int64_t)puStack_110;
  puVar29 = (uint64_t *)param_2[3];
  if (puVar1 < puVar48) {
    puVar41 = puVar29;
    if (puStack_110 <= puVar1) {
      uVar59 = puStack_110[1];
      *puVar29 = *puStack_110;
      puVar29[1] = uVar59;
      puVar41 = (uint64_t *)((int64_t)puVar29 + ((int64_t)puVar1 - (int64_t)puStack_110));
      if (0x10 < (int64_t)puVar1 - (int64_t)puStack_110) {
        lVar47 = 0x10;
        do {
          uVar20 = ((uint64_t *)((int64_t)puStack_110 + lVar47))[1];
          *(uint64_t *)((int64_t)puVar29 + lVar47) =
               *(uint64_t *)((int64_t)puStack_110 + lVar47);
          ((uint64_t *)((int64_t)puVar29 + lVar47))[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar47 + 0x10);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)((int64_t)puVar29 + lVar47 + 0x10);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          lVar34 = lVar47 + 0x20;
          lVar47 = lVar47 + 0x20;
        } while ((uint64_t *)((int64_t)puVar29 + lVar34) < puVar41);
      }
      puStack_110 = puVar1;
    }
    if (puStack_110 < puVar48) {
      uVar59 = (int64_t)puVar48 - (int64_t)puStack_110;
      puVar29 = puVar41;
      if ((3 < uVar59) && (0x1f < (uint64_t)((int64_t)puVar41 - (int64_t)puStack_110))) {
        if (uVar59 < 0x20) {
          uVar39 = 0;
        }
        else {
          uVar39 = uVar59 & 0xffffffffffffffe0;
          uVar50 = 0;
          do {
            uVar21 = *(uint64_t *)((int64_t)puStack_110 + uVar50);
            uVar22 = ((uint64_t *)((int64_t)puStack_110 + uVar50))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_110 + uVar50 + 0x10);
            uVar20 = puVar5[1];
            puVar8 = (uint64_t *)((int64_t)puVar41 + uVar50 + 0x10);
            *puVar8 = *puVar5;
            puVar8[1] = uVar20;
            *(uint64_t *)((int64_t)puVar41 + uVar50) = uVar21;
            ((uint64_t *)((int64_t)puVar41 + uVar50))[1] = uVar22;
            uVar50 = uVar50 + 0x20;
          } while (uVar50 != uVar39);
          if (uVar59 == uVar39) goto LAB_7fffa4ed8a35;
          if ((uVar59 & 0x1c) == 0) {
            puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar39);
            puVar29 = (uint64_t *)((int64_t)puVar41 + uVar39);
            goto LAB_7fffa4ed8987;
          }
        }
        uVar50 = uVar59 & 0xfffffffffffffffc;
        puVar29 = (uint64_t *)((int64_t)puVar41 + uVar50);
        do {
          *(uint32_t *)((int64_t)puVar41 + uVar39) =
               *(uint32_t *)((int64_t)puStack_110 + uVar39);
          uVar39 = uVar39 + 4;
        } while (uVar39 != uVar50);
        if (uVar59 == uVar50) goto LAB_7fffa4ed8a35;
        puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar50);
      }
LAB_7fffa4ed8987:
      uVar59 = (int64_t)puVar48 - (int64_t)puStack_110 & 7;
      puVar41 = puStack_110;
      if (uVar59 != 0) {
        uVar50 = 0;
        do {
          uVar39 = *puVar41;
          puVar41 = (uint64_t *)((int64_t)puVar41 + 1);
          *(char *)puVar29 = (char)uVar39;
          uVar50 = uVar50 + 1;
          puVar29 = (uint64_t *)((int64_t)puVar29 + 1);
        } while (uVar50 != uVar59);
      }
      if ((uint64_t)((int64_t)puStack_110 - (int64_t)puVar48) < 0xfffffffffffffff9) {
        lVar47 = 0;
        do {
          *(uint8_t *)((int64_t)puVar29 + lVar47) = *(uint8_t *)((int64_t)puVar41 + lVar47);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 1) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 1);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 2) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 2);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 3) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 3);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 4) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 4);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 5) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 5);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 6) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 6);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 7) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 7);
          lVar34 = lVar47 + 8;
          lVar47 = lVar47 + 8;
        } while ((uint64_t *)((int64_t)puVar41 + lVar34) != puVar48);
      }
    }
LAB_7fffa4ed8a35:
    param_2[3] = param_2[3] + uVar25;
    lVar47 = param_2[1];
    if (0xffff < uVar25) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
    }
  }
  else {
    uVar59 = puStack_110[1];
    *puVar29 = *puStack_110;
    puVar29[1] = uVar59;
    if (0x10 < uVar25) {
      lVar47 = param_2[3];
      uVar59 = puStack_110[3];
      *(uint64_t *)(lVar47 + 0x10) = puStack_110[2];
      *(uint64_t *)(lVar47 + 0x18) = uVar59;
      if (0x20 < (int64_t)uVar25) {
        lVar34 = 0;
        while( true ) {
          puVar8 = (uint64_t *)((int64_t)puStack_110 + lVar34 + 0x20);
          uVar20 = puVar8[1];
          puVar5 = (uint64_t *)(lVar47 + 0x20 + lVar34);
          *puVar5 = *puVar8;
          puVar5[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar34 + 0x30);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)(lVar47 + 0x30 + lVar34);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          if (lVar47 + uVar25 <= lVar47 + 0x20 + lVar34 + 0x20U) break;
          lVar34 = lVar34 + 0x20;
        }
      }
      goto LAB_7fffa4ed8a35;
    }
    lVar47 = param_2[1];
    param_2[3] = param_2[3] + uVar25;
  }
  iVar51 = iVar52 - (uVar43 + uVar57);
  uVar59 = lVar40 - 3;
  *(short *)(lVar47 + 4) = (short)uVar25;
  *(int *)param_2[1] = iVar51 + 3;
  lVar47 = param_2[1];
  iStack_a4 = iStack_12c;
  if (uVar59 < 0x10000) goto LAB_7fffa4ed7ff2;
  goto LAB_7fffa4ed7fd6;
code_r0x7fffa4ed8661:
  puVar41 = puVar41 + 1;
  lVar47 = lVar47 + 8;
  if (puVar2 <= puVar41) goto LAB_7fffa4ed8675;
  goto LAB_7fffa4ed8622;
LAB_7fffa4ed7526:
  puVar29 = (uint64_t *)((int64_t)puVar56 + 4);
  puVar41 = (uint64_t *)(piVar35 + 1);
  if (puVar29 < puVar2) {
    if (*puVar41 == *puVar29) {
      lVar47 = 0xc;
LAB_7fffa4ed76b6:
      puVar33 = (uint64_t *)(lVar47 + (int64_t)puVar56);
      if (puVar33 < puVar2) {
        if (*(uint64_t *)((int64_t)piVar35 + lVar47) == *puVar33) goto code_r0x7fffa4ed76d5;
        uVar43 = 0;
        for (uVar59 = *puVar33 ^ *(uint64_t *)((int64_t)piVar35 + lVar47); (uVar59 & 1) == 0;
            uVar59 = uVar59 >> 1 | 0x8000000000000000) {
          uVar43 = uVar43 + 1;
        }
        uVar59 = ((uint64_t)(uVar43 >> 3) + lVar47) - 4;
        goto LAB_7fffa4ed78b6;
      }
      puVar41 = (uint64_t *)(lVar47 + (int64_t)piVar35);
      goto LAB_7fffa4ed786b;
    }
    uVar43 = 0;
    for (uVar59 = *puVar29 ^ *puVar41; (uVar59 & 1) == 0; uVar59 = uVar59 >> 1 | 0x8000000000000000)
    {
      uVar43 = uVar43 + 1;
    }
    uVar59 = (uint64_t)(uVar43 >> 3);
  }
  else {
    puVar33 = puVar29;
LAB_7fffa4ed786b:
    if ((puVar33 < puVar3) && ((int)*puVar41 == (int)*puVar33)) {
      puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
      puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
    }
    if ((puVar33 < puVar44) && ((short)*puVar41 == (short)*puVar33)) {
      puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
      puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
    }
    if (puVar33 < puVar4) {
      puVar33 = (uint64_t *)((int64_t)puVar33 + (uint64_t)((char)*puVar41 == (char)*puVar33));
    }
    uVar59 = (int64_t)puVar33 - (int64_t)puVar29;
  }
LAB_7fffa4ed78b6:
  lVar40 = uVar59 + 4;
  if (puStack_110 < puVar56) {
    puVar29 = (uint64_t *)((uint64_t)uVar37 + lVar12 + -1);
    while (puVar41 = (uint64_t *)((int64_t)puVar48 + -1), *(char *)puVar41 == (char)*puVar29) {
      lVar40 = lVar40 + 1;
      puVar48 = puVar41;
      if ((puVar41 <= puStack_110) ||
         (bVar16 = puVar29 <= puVar53, puVar29 = (uint64_t *)((int64_t)puVar29 + -1), bVar16))
      break;
    }
  }
  uVar25 = (int64_t)puVar48 - (int64_t)puStack_110;
  puVar29 = (uint64_t *)param_2[3];
  if (puVar1 < puVar48) {
    puVar41 = puVar29;
    if (puStack_110 <= puVar1) {
      uVar59 = puStack_110[1];
      *puVar29 = *puStack_110;
      puVar29[1] = uVar59;
      puVar41 = (uint64_t *)((int64_t)puVar29 + ((int64_t)puVar1 - (int64_t)puStack_110));
      if (0x10 < (int64_t)puVar1 - (int64_t)puStack_110) {
        lVar47 = 0x10;
        do {
          uVar20 = ((uint64_t *)((int64_t)puStack_110 + lVar47))[1];
          *(uint64_t *)((int64_t)puVar29 + lVar47) =
               *(uint64_t *)((int64_t)puStack_110 + lVar47);
          ((uint64_t *)((int64_t)puVar29 + lVar47))[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar47 + 0x10);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)((int64_t)puVar29 + lVar47 + 0x10);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          lVar34 = lVar47 + 0x20;
          lVar47 = lVar47 + 0x20;
        } while ((uint64_t *)((int64_t)puVar29 + lVar34) < puVar41);
      }
      puStack_110 = puVar1;
    }
    if (puStack_110 < puVar48) {
      uVar59 = (int64_t)puVar48 - (int64_t)puStack_110;
      if ((uint64_t)((int64_t)puVar41 - (int64_t)puStack_110) < 0x20 || uVar59 < 4) {
LAB_7fffa4ed7a12:
        puVar29 = puVar41;
      }
      else {
        if (uVar59 < 0x20) {
          uVar50 = 0;
        }
        else {
          uVar50 = uVar59 & 0xffffffffffffffe0;
          uVar39 = 0;
          do {
            uVar20 = ((uint64_t *)((int64_t)puStack_110 + uVar39))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_110 + uVar39 + 0x10);
            uVar21 = *puVar5;
            uVar22 = puVar5[1];
            *(uint64_t *)((int64_t)puVar41 + uVar39) =
                 *(uint64_t *)((int64_t)puStack_110 + uVar39);
            ((uint64_t *)((int64_t)puVar41 + uVar39))[1] = uVar20;
            puVar5 = (uint64_t *)((int64_t)puVar41 + uVar39 + 0x10);
            *puVar5 = uVar21;
            puVar5[1] = uVar22;
            uVar39 = uVar39 + 0x20;
          } while (uVar39 != uVar50);
          if (uVar59 == uVar50) goto LAB_7fffa4ed7ccb;
          if ((uVar59 & 0x1c) == 0) {
            puVar41 = (uint64_t *)((int64_t)puVar41 + uVar50);
            puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar50);
            goto LAB_7fffa4ed7a12;
          }
        }
        uVar39 = uVar59 & 0xfffffffffffffffc;
        puVar29 = (uint64_t *)((int64_t)puVar41 + uVar39);
        do {
          *(uint32_t *)((int64_t)puVar41 + uVar50) =
               *(uint32_t *)((int64_t)puStack_110 + uVar50);
          uVar50 = uVar50 + 4;
        } while (uVar50 != uVar39);
        if (uVar59 == uVar39) goto LAB_7fffa4ed7ccb;
        puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar39);
      }
      uVar59 = (int64_t)puVar48 - (int64_t)puStack_110 & 7;
      puVar41 = puStack_110;
      if (uVar59 != 0) {
        uVar50 = 0;
        puVar26 = puVar29;
        puVar33 = puStack_110;
        do {
          puVar41 = (uint64_t *)((int64_t)puVar33 + 1);
          puVar29 = (uint64_t *)((int64_t)puVar26 + 1);
          *(char *)puVar26 = (char)*puVar33;
          uVar50 = uVar50 + 1;
          puVar26 = puVar29;
          puVar33 = puVar41;
        } while (uVar50 != uVar59);
      }
      if ((uint64_t)((int64_t)puStack_110 - (int64_t)puVar48) < 0xfffffffffffffff9) {
        lVar47 = 0;
        do {
          *(uint8_t *)((int64_t)puVar29 + lVar47) = *(uint8_t *)((int64_t)puVar41 + lVar47);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 1) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 1);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 2) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 2);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 3) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 3);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 4) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 4);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 5) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 5);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 6) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 6);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 7) =
               *(uint8_t *)((int64_t)puVar41 + lVar47 + 7);
          lVar34 = lVar47 + 8;
          lVar47 = lVar47 + 8;
        } while ((uint64_t *)((int64_t)puVar41 + lVar34) != puVar48);
      }
    }
LAB_7fffa4ed7ccb:
    lVar47 = param_2[1];
    param_2[3] = param_2[3] + uVar25;
    if (0xffff < uVar25) {
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
      *(uint32_t *)(param_2 + 9) = 1;
    }
  }
  else {
    uVar59 = puStack_110[1];
    *puVar29 = *puStack_110;
    puVar29[1] = uVar59;
    if (0x10 < uVar25) {
      lVar47 = param_2[3];
      uVar59 = puStack_110[3];
      *(uint64_t *)(lVar47 + 0x10) = puStack_110[2];
      *(uint64_t *)(lVar47 + 0x18) = uVar59;
      if (0x20 < (int64_t)uVar25) {
        lVar34 = 0;
        do {
          puVar8 = (uint64_t *)((int64_t)puStack_110 + lVar34 + 0x20);
          uVar20 = puVar8[1];
          puVar5 = (uint64_t *)(lVar47 + 0x20 + lVar34);
          *puVar5 = *puVar8;
          puVar5[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar34 + 0x30);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)(lVar47 + 0x30 + lVar34);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          lVar6 = lVar47 + 0x20 + lVar34;
          lVar34 = lVar34 + 0x20;
        } while (lVar6 + 0x20U < lVar47 + uVar25);
      }
      goto LAB_7fffa4ed7ccb;
    }
    lVar47 = param_2[1];
    param_2[3] = param_2[3] + uVar25;
  }
  iVar51 = (int)puVar56 - (int)piVar35;
  uVar59 = lVar40 - 3;
  *(short *)(lVar47 + 4) = (short)uVar25;
  *(int *)param_2[1] = iVar51 + 3;
  lVar47 = param_2[1];
  iStack_a4 = iStack_12c;
  goto joined_r0x7fffa4ed7fd4;
code_r0x7fffa4ed76d5:
  lVar47 = lVar47 + 8;
  goto LAB_7fffa4ed76b6;
LAB_7fffa4ed5c00:
  puVar26 = (uint64_t *)((int64_t)puVar56 + lVar45 + 0xd);
  if (puVar26 < (uint64_t *)((int64_t)puVar33 - 7U)) {
    uVar59 = *puVar26;
    uVar25 = *(uint64_t *)((int64_t)piVar35 + lVar45 + 0xc);
    if (uVar25 == uVar59) goto code_r0x7fffa4ed5c31;
    uVar42 = 0;
    for (uVar25 = uVar25 ^ uVar59; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x8000000000000000) {
      uVar42 = uVar42 + 1;
    }
    uVar59 = (uint64_t)(uVar42 >> 3) + lVar45 + 8;
  }
  else {
    puVar36 = (uint64_t *)((int64_t)puVar56 + lVar45 + 0xd);
    puVar26 = (uint64_t *)((int64_t)piVar35 + lVar45 + 0xc);
LAB_7fffa4ed5c72:
    if ((puVar36 < (uint64_t *)((int64_t)puVar33 - 3U)) && ((int)*puVar26 == (int)*puVar36)) {
      puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
      puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
    }
    if ((puVar36 < (uint64_t *)((int64_t)puVar33 - 1U)) && ((short)*puVar26 == (short)*puVar36)) {
      puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
      puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
    }
    if (puVar36 < puVar33) {
      puVar36 = (uint64_t *)((int64_t)puVar36 + (uint64_t)((char)*puVar26 == (char)*puVar36));
    }
    uVar59 = (int64_t)puVar36 - (int64_t)puVar41;
  }
  goto LAB_7fffa4ed5cf7;
code_r0x7fffa4ed5c31:
  lVar45 = lVar45 + 8;
  goto LAB_7fffa4ed5c00;
LAB_7fffa4ed5cf7:
  if ((uint64_t *)((int64_t)puVar29 + uVar59) == puVar48) {
    puVar41 = (uint64_t *)((int64_t)puVar41 + uVar59);
    puVar48 = puVar41;
    puVar29 = puVar53;
    if (puVar41 < puVar1) {
      if (*puVar53 == *puVar41) {
        puVar48 = (uint64_t *)((int64_t)puVar56 + uVar59 + 0xd);
        lVar45 = 8;
        if (puVar48 < puVar1) {
LAB_7fffa4ed6009:
          if (*(uint64_t *)((int64_t)puVar53 + lVar45) == *puVar48) goto code_r0x7fffa4ed6019;
          uVar42 = 0;
          for (uVar25 = *puVar48 ^ *(uint64_t *)((int64_t)puVar53 + lVar45); (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x8000000000000000) {
            uVar42 = uVar42 + 1;
          }
          uVar25 = (uint64_t)(uVar42 >> 3) + lVar45;
          goto LAB_7fffa4ed60fe;
        }
LAB_7fffa4ed602b:
        puVar29 = (uint64_t *)(lVar45 + (int64_t)puVar53);
        goto LAB_7fffa4ed602e;
      }
      uVar42 = 0;
      for (uVar25 = *puVar41 ^ *puVar53; (uVar25 & 1) == 0;
          uVar25 = uVar25 >> 1 | 0x8000000000000000) {
        uVar42 = uVar42 + 1;
      }
      uVar25 = (uint64_t)(uVar42 >> 3);
    }
    else {
LAB_7fffa4ed602e:
      if ((puVar48 < puVar2) && ((int)*puVar29 == (int)*puVar48)) {
        puVar48 = (uint64_t *)((int64_t)puVar48 + 4);
        puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
      }
      if ((puVar48 < puVar3) && ((short)*puVar29 == (short)*puVar48)) {
        puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
        puVar48 = (uint64_t *)((int64_t)puVar48 + 2);
      }
      if (puVar48 < puVar4) {
        puVar48 = (uint64_t *)((int64_t)puVar48 + (uint64_t)((char)*puVar29 == (char)*puVar48));
      }
      uVar25 = (int64_t)puVar48 - (int64_t)puVar41;
    }
LAB_7fffa4ed60fe:
    uVar59 = uVar25 + uVar59;
  }
  puVar48 = (uint64_t *)((int64_t)puVar56 + 1);
  puVar29 = (uint64_t *)param_2[3];
  uVar25 = (int64_t)puVar48 - (int64_t)puStack_110;
  if (puVar44 < puVar48) {
    puVar41 = puVar29;
    if (puStack_110 <= puVar44) {
      uVar50 = puStack_110[1];
      *puVar29 = *puStack_110;
      puVar29[1] = uVar50;
      puVar41 = (uint64_t *)((int64_t)puVar29 + ((int64_t)puVar44 - (int64_t)puStack_110));
      if (0x10 < (int64_t)puVar44 - (int64_t)puStack_110) {
        puVar29 = puVar29 + 6;
        while( true ) {
          uVar50 = puStack_110[3];
          puVar29[-4] = puStack_110[2];
          puVar29[-3] = uVar50;
          uVar50 = puStack_110[5];
          puVar29[-2] = puStack_110[4];
          puVar29[-1] = uVar50;
          if (puVar41 <= puVar29) break;
          puVar29 = puVar29 + 4;
          puStack_110 = puStack_110 + 4;
        }
      }
      puStack_110 = puVar44;
    }
    if (puStack_110 < puVar48) {
      uVar50 = (int64_t)puVar56 + (1 - (int64_t)puStack_110);
      if ((uVar50 < 4) || ((uint64_t)((int64_t)puVar41 - (int64_t)puStack_110) < 0x20)) {
LAB_7fffa4ed621c:
        puVar29 = puVar41;
      }
      else {
        if (uVar50 < 0x20) {
          uVar39 = 0;
        }
        else {
          uVar39 = uVar50 & 0xffffffffffffffe0;
          uVar46 = 0;
          do {
            uVar20 = ((uint64_t *)((int64_t)puStack_110 + uVar46))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_110 + uVar46 + 0x10);
            uVar21 = *puVar5;
            uVar22 = puVar5[1];
            *(uint64_t *)((int64_t)puVar41 + uVar46) =
                 *(uint64_t *)((int64_t)puStack_110 + uVar46);
            ((uint64_t *)((int64_t)puVar41 + uVar46))[1] = uVar20;
            puVar5 = (uint64_t *)((int64_t)puVar41 + uVar46 + 0x10);
            *puVar5 = uVar21;
            puVar5[1] = uVar22;
            uVar46 = uVar46 + 0x20;
          } while (uVar46 != uVar39);
          if (uVar50 == uVar39) goto LAB_7fffa4ed6427;
          if ((uVar50 & 0x1c) == 0) {
            puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar39);
            puVar41 = (uint64_t *)((int64_t)puVar41 + uVar39);
            goto LAB_7fffa4ed621c;
          }
        }
        uVar46 = uVar50 & 0xfffffffffffffffc;
        puVar29 = (uint64_t *)((int64_t)puVar41 + uVar46);
        do {
          *(uint32_t *)((int64_t)puVar41 + uVar39) =
               *(uint32_t *)((int64_t)puStack_110 + uVar39);
          uVar39 = uVar39 + 4;
        } while (uVar39 != uVar46);
        if (uVar50 == uVar46) goto LAB_7fffa4ed6427;
        puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar46);
      }
      uVar50 = (int64_t)puVar56 - (int64_t)puStack_110;
      uVar42 = (uint32_t)uVar50;
      if ((~uVar42 & 7) != 0) {
        uVar39 = 0;
        puVar41 = puVar29;
        puVar33 = puStack_110;
        do {
          puStack_110 = (uint64_t *)((int64_t)puVar33 + 1);
          puVar29 = (uint64_t *)((int64_t)puVar41 + 1);
          uVar39 = uVar39 + 1;
          *(char *)puVar41 = (char)*puVar33;
          puVar41 = puVar29;
          puVar33 = puStack_110;
        } while (uVar39 != (uVar42 + 1 & 7));
        if (uVar50 < 7) goto LAB_7fffa4ed6427;
      }
      puStack_110 = (uint64_t *)((int64_t)puStack_110 + -1);
      do {
        *(uint8_t *)puVar29 = *(uint8_t *)((int64_t)puStack_110 + 1);
        *(uint8_t *)((int64_t)puVar29 + 1) = *(uint8_t *)((int64_t)puStack_110 + 2);
        *(uint8_t *)((int64_t)puVar29 + 2) = *(uint8_t *)((int64_t)puStack_110 + 3);
        *(uint8_t *)((int64_t)puVar29 + 3) = *(uint8_t *)((int64_t)puStack_110 + 4);
        *(uint8_t *)((int64_t)puVar29 + 4) = *(uint8_t *)((int64_t)puStack_110 + 5);
        *(uint8_t *)((int64_t)puVar29 + 5) = *(uint8_t *)((int64_t)puStack_110 + 6);
        *(uint8_t *)((int64_t)puVar29 + 6) = *(uint8_t *)((int64_t)puStack_110 + 7);
        *(char *)((int64_t)puVar29 + 7) = (char)puStack_110[1];
        puVar29 = puVar29 + 1;
        puStack_110 = puStack_110 + 1;
      } while (puStack_110 != puVar56);
    }
LAB_7fffa4ed6427:
    param_2[3] = param_2[3] + uVar25;
    lVar45 = param_2[1];
    if (0xffff < uVar25) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar45 - *param_2) >> 3);
    }
  }
  else {
    uVar50 = puStack_110[1];
    *puVar29 = *puStack_110;
    puVar29[1] = uVar50;
    if (0x10 < uVar25) {
      lVar45 = param_2[3];
      uVar50 = puStack_110[3];
      *(uint64_t *)(lVar45 + 0x10) = puStack_110[2];
      *(uint64_t *)(lVar45 + 0x18) = uVar50;
      if (0x20 < (int64_t)uVar25) {
        uVar50 = lVar45 + 0x40;
        puStack_110 = puStack_110 + 6;
        while( true ) {
          uVar39 = puStack_110[-1];
          *(uint64_t *)(uVar50 - 0x20) = puStack_110[-2];
          *(uint64_t *)(uVar50 - 0x18) = uVar39;
          uVar39 = puStack_110[1];
          *(uint64_t *)(uVar50 - 0x10) = *puStack_110;
          *(uint64_t *)(uVar50 - 8) = uVar39;
          if (uVar25 + lVar45 <= uVar50) break;
          uVar50 = uVar50 + 0x20;
          puStack_110 = puStack_110 + 4;
        }
      }
      goto LAB_7fffa4ed6427;
    }
    lVar45 = param_2[1];
    param_2[3] = param_2[3] + uVar25;
  }
  lVar47 = uVar59 + 4;
  *(short *)(lVar45 + 4) = (short)uVar25;
  *(uint32_t *)param_2[1] = 1;
  lVar45 = param_2[1];
  uVar59 = uVar59 + 1;
  iVar51 = iStack_12c;
  goto joined_r0x7fffa4ed6495;
code_r0x7fffa4ed6019:
  puVar48 = puVar48 + 1;
  lVar45 = lVar45 + 8;
  if (puVar1 <= puVar48) goto LAB_7fffa4ed602b;
  goto LAB_7fffa4ed6009;
LAB_7fffa4ed5bbb:
  puVar26 = (uint64_t *)((int64_t)puVar56 + lVar45 + 0xc);
  if (puVar26 < (uint64_t *)((int64_t)puVar41 - 7U)) goto code_r0x7fffa4ed5bc8;
  puVar36 = (uint64_t *)((int64_t)puVar56 + lVar45 + 0xc);
  puVar26 = (uint64_t *)(lVar45 + uVar14 + 0xc + uVar25);
LAB_7fffa4ed699f:
  if ((puVar36 < (uint64_t *)((int64_t)puVar41 - 3U)) && ((int)*puVar26 == (int)*puVar36)) {
    puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
    puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
  }
  if ((puVar36 < (uint64_t *)((int64_t)puVar41 - 1U)) && ((short)*puVar26 == (short)*puVar36)) {
    puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
    puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
  }
  if (puVar36 < puVar41) {
    puVar36 = (uint64_t *)((int64_t)puVar36 + (uint64_t)((char)*puVar26 == (char)*puVar36));
  }
  uVar59 = (int64_t)puVar36 - (int64_t)puVar29;
  goto code_r0x7fffa4ed6a1a;
code_r0x7fffa4ed5bc8:
  uVar59 = *puVar26;
  uVar50 = *(uint64_t *)(uVar14 + 0xc + uVar25 + lVar45);
  lVar45 = lVar45 + 8;
  if (uVar50 != uVar59) goto code_r0x7fffa4ed5bd8;
  goto LAB_7fffa4ed5bbb;
code_r0x7fffa4ed5bd8:
  uVar37 = 0;
  for (uVar50 = uVar50 ^ uVar59; (uVar50 & 1) == 0; uVar50 = uVar50 >> 1 | 0x8000000000000000) {
    uVar37 = uVar37 + 1;
  }
  uVar59 = (uint64_t)(uVar37 >> 3) + lVar45;
code_r0x7fffa4ed6a1a:
  if ((uint64_t *)((int64_t)puVar33 + uVar59) == puVar13) {
    puVar29 = (uint64_t *)((int64_t)puVar29 + uVar59);
    puVar41 = puVar29;
    puVar33 = puVar53;
    if (puVar29 < puVar1) {
      if (*puVar53 == *puVar29) {
        puVar41 = (uint64_t *)((int64_t)puVar56 + uVar59 + 0xc);
        lVar45 = 8;
        if (puVar41 < puVar1) {
LAB_7fffa4ed6a87:
          if (*(uint64_t *)((int64_t)puVar53 + lVar45) == *puVar41) goto code_r0x7fffa4ed6a97;
          uVar37 = 0;
          for (uVar50 = *puVar41 ^ *(uint64_t *)((int64_t)puVar53 + lVar45); (uVar50 & 1) == 0;
              uVar50 = uVar50 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          uVar50 = (uint64_t)(uVar37 >> 3) + lVar45;
          goto LAB_7fffa4ed6b7e;
        }
LAB_7fffa4ed6aa9:
        puVar33 = (uint64_t *)(lVar45 + (int64_t)puVar53);
        goto LAB_7fffa4ed6aac;
      }
      uVar37 = 0;
      for (uVar50 = *puVar53 ^ *puVar29; (uVar50 & 1) == 0;
          uVar50 = uVar50 >> 1 | 0x8000000000000000) {
        uVar37 = uVar37 + 1;
      }
      uVar50 = (uint64_t)(uVar37 >> 3);
    }
    else {
LAB_7fffa4ed6aac:
      if ((puVar41 < puVar2) && ((int)*puVar33 == (int)*puVar41)) {
        puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
        puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
      }
      if ((puVar41 < puVar3) && ((short)*puVar33 == (short)*puVar41)) {
        puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
        puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
      }
      if (puVar41 < puVar4) {
        puVar41 = (uint64_t *)((int64_t)puVar41 + (uint64_t)((char)*puVar33 == (char)*puVar41));
      }
      uVar50 = (int64_t)puVar41 - (int64_t)puVar29;
    }
LAB_7fffa4ed6b7e:
    uVar59 = uVar59 + uVar50;
  }
  lVar47 = uVar59 + 4;
  if (puStack_110 < puVar56) {
    pcVar30 = (char *)(uVar25 + (uVar14 - 1));
    while( true ) {
      puVar29 = (uint64_t *)((int64_t)puVar48 + -1);
      if (*(char *)puVar29 != *pcVar30) break;
      lVar47 = lVar47 + 1;
      puVar48 = puVar29;
      if ((puVar29 <= puStack_110) || (bVar16 = pcVar30 <= pcVar49, pcVar30 = pcVar30 + -1, bVar16))
      break;
    }
  }
  uVar25 = (int64_t)puVar48 - (int64_t)puStack_110;
  puVar29 = (uint64_t *)param_2[3];
  if (puVar44 < puVar48) {
    puVar41 = puVar29;
    if (puStack_110 <= puVar44) {
      uVar59 = puStack_110[1];
      puVar41 = (uint64_t *)((int64_t)puVar29 + ((int64_t)puVar44 - (int64_t)puStack_110));
      *puVar29 = *puStack_110;
      puVar29[1] = uVar59;
      if (0x10 < (int64_t)puVar44 - (int64_t)puStack_110) {
        lVar45 = 0x10;
        do {
          uVar20 = ((uint64_t *)((int64_t)puStack_110 + lVar45))[1];
          *(uint64_t *)((int64_t)puVar29 + lVar45) =
               *(uint64_t *)((int64_t)puStack_110 + lVar45);
          ((uint64_t *)((int64_t)puVar29 + lVar45))[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar45 + 0x10);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)((int64_t)puVar29 + lVar45 + 0x10);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          lVar40 = lVar45 + 0x20;
          lVar45 = lVar45 + 0x20;
        } while ((uint64_t *)((int64_t)puVar29 + lVar40) < puVar41);
      }
      puStack_110 = puVar44;
    }
    if (puStack_110 < puVar48) {
      uVar59 = (int64_t)puVar48 - (int64_t)puStack_110;
      if ((uint64_t)((int64_t)puVar41 - (int64_t)puStack_110) < 0x20 || uVar59 < 4) {
LAB_7fffa4ed6d7a:
        puVar29 = puVar41;
      }
      else {
        if (uVar59 < 0x20) {
          uVar50 = 0;
        }
        else {
          uVar50 = uVar59 & 0xffffffffffffffe0;
          uVar39 = 0;
          do {
            uVar20 = *(uint64_t *)((int64_t)puStack_110 + uVar39);
            uVar21 = ((uint64_t *)((int64_t)puStack_110 + uVar39))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_110 + uVar39 + 0x10);
            uVar22 = puVar5[1];
            puVar8 = (uint64_t *)((int64_t)puVar41 + uVar39 + 0x10);
            *puVar8 = *puVar5;
            puVar8[1] = uVar22;
            *(uint64_t *)((int64_t)puVar41 + uVar39) = uVar20;
            ((uint64_t *)((int64_t)puVar41 + uVar39))[1] = uVar21;
            uVar39 = uVar39 + 0x20;
          } while (uVar39 != uVar50);
          if (uVar59 == uVar50) goto LAB_7fffa4ed6fa5;
          if ((uVar59 & 0x1c) == 0) {
            puVar41 = (uint64_t *)((int64_t)puVar41 + uVar50);
            puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar50);
            goto LAB_7fffa4ed6d7a;
          }
        }
        uVar39 = uVar59 & 0xfffffffffffffffc;
        puVar29 = (uint64_t *)((int64_t)puVar41 + uVar39);
        do {
          *(uint32_t *)((int64_t)puVar41 + uVar50) =
               *(uint32_t *)((int64_t)puStack_110 + uVar50);
          uVar50 = uVar50 + 4;
        } while (uVar50 != uVar39);
        if (uVar59 == uVar39) goto LAB_7fffa4ed6fa5;
        puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar39);
      }
      uVar59 = (int64_t)puVar48 - (int64_t)puStack_110 & 7;
      puVar41 = puStack_110;
      if (uVar59 != 0) {
        uVar50 = 0;
        puVar33 = puStack_110;
        puVar26 = puVar29;
        do {
          puVar29 = (uint64_t *)((int64_t)puVar26 + 1);
          uVar50 = uVar50 + 1;
          *(char *)puVar26 = (char)*puVar33;
          puVar41 = (uint64_t *)((int64_t)puVar33 + 1);
          puVar33 = (uint64_t *)((int64_t)puVar33 + 1);
          puVar26 = puVar29;
        } while (uVar50 != uVar59);
      }
      if ((uint64_t)((int64_t)puStack_110 - (int64_t)puVar48) < 0xfffffffffffffff9) {
        while( true ) {
          *(char *)puVar29 = (char)*puVar41;
          *(uint8_t *)((int64_t)puVar29 + 1) = *(uint8_t *)((int64_t)puVar41 + 1);
          *(uint8_t *)((int64_t)puVar29 + 2) = *(uint8_t *)((int64_t)puVar41 + 2);
          *(uint8_t *)((int64_t)puVar29 + 3) = *(uint8_t *)((int64_t)puVar41 + 3);
          *(uint8_t *)((int64_t)puVar29 + 4) = *(uint8_t *)((int64_t)puVar41 + 4);
          *(uint8_t *)((int64_t)puVar29 + 5) = *(uint8_t *)((int64_t)puVar41 + 5);
          *(uint8_t *)((int64_t)puVar29 + 6) = *(uint8_t *)((int64_t)puVar41 + 6);
          *(uint8_t *)((int64_t)puVar29 + 7) = *(uint8_t *)((int64_t)puVar41 + 7);
          if (puVar41 + 1 == puVar48) break;
          puVar29 = puVar29 + 1;
          puVar41 = puVar41 + 1;
        }
      }
    }
LAB_7fffa4ed6fa5:
    lVar45 = param_2[1];
    param_2[3] = param_2[3] + uVar25;
    if (0xffff < uVar25) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar45 - *param_2) >> 3);
    }
  }
  else {
    uVar59 = puStack_110[1];
    *puVar29 = *puStack_110;
    puVar29[1] = uVar59;
    if (0x10 < uVar25) {
      lVar45 = param_2[3];
      uVar59 = puStack_110[3];
      *(uint64_t *)(lVar45 + 0x10) = puStack_110[2];
      *(uint64_t *)(lVar45 + 0x18) = uVar59;
      if (0x20 < (int64_t)uVar25) {
        lVar40 = 0;
        do {
          puVar8 = (uint64_t *)((int64_t)puStack_110 + lVar40 + 0x20);
          uVar20 = puVar8[1];
          puVar5 = (uint64_t *)(lVar45 + 0x20 + lVar40);
          *puVar5 = *puVar8;
          puVar5[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar40 + 0x30);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)(lVar45 + 0x30 + lVar40);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          lVar34 = lVar45 + 0x20 + lVar40;
          lVar40 = lVar40 + 0x20;
        } while (lVar34 + 0x20U < lVar45 + uVar25);
      }
      goto LAB_7fffa4ed6fa5;
    }
    lVar45 = param_2[1];
    param_2[3] = param_2[3] + uVar25;
  }
  iVar51 = iVar52 - (uVar42 + uVar57);
  uVar59 = lVar47 - 3;
  *(short *)(lVar45 + 4) = (short)uVar25;
  *(int *)param_2[1] = iVar51 + 3;
  lVar45 = param_2[1];
  iStack_a4 = iStack_12c;
  if (uVar59 < 0x10000) goto LAB_7fffa4ed64bf;
  goto LAB_7fffa4ed6497;
code_r0x7fffa4ed6a97:
  puVar41 = puVar41 + 1;
  lVar45 = lVar45 + 8;
  if (puVar1 <= puVar41) goto LAB_7fffa4ed6aa9;
  goto LAB_7fffa4ed6a87;
LAB_7fffa4ed5a9f:
  puVar29 = (uint64_t *)(piVar35 + 1);
  puVar41 = (uint64_t *)((int64_t)puVar56 + 4);
  if (puVar41 < puVar1) {
    if (*puVar29 == *puVar41) {
      lVar45 = 0xc;
LAB_7fffa4ed5ae0:
      puVar33 = (uint64_t *)(lVar45 + (int64_t)puVar56);
      if (puVar33 < puVar1) {
        if (*(uint64_t *)((int64_t)piVar35 + lVar45) == *puVar33) goto code_r0x7fffa4ed5b02;
        uVar42 = 0;
        for (uVar59 = *(uint64_t *)((int64_t)piVar35 + lVar45) ^ *puVar33; (uVar59 & 1) == 0;
            uVar59 = uVar59 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        uVar59 = ((uint64_t)(uVar42 >> 3) + lVar45) - 4;
        goto LAB_7fffa4ed5de5;
      }
      puVar29 = (uint64_t *)(lVar45 + (int64_t)piVar35);
      goto LAB_7fffa4ed5d5b;
    }
    uVar42 = 0;
    for (uVar59 = *puVar41 ^ *puVar29; (uVar59 & 1) == 0; uVar59 = uVar59 >> 1 | 0x8000000000000000)
    {
      uVar42 = uVar42 + 1;
    }
    uVar59 = (uint64_t)(uVar42 >> 3);
  }
  else {
    puVar33 = puVar41;
LAB_7fffa4ed5d5b:
    if ((puVar33 < puVar2) && ((int)*puVar29 == (int)*puVar33)) {
      puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
      puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
    }
    if ((puVar33 < puVar3) && ((short)*puVar29 == (short)*puVar33)) {
      puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
      puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
    }
    if (puVar33 < puVar4) {
      puVar33 = (uint64_t *)((int64_t)puVar33 + (uint64_t)((char)*puVar29 == (char)*puVar33));
    }
    uVar59 = (int64_t)puVar33 - (int64_t)puVar41;
  }
LAB_7fffa4ed5de5:
  lVar47 = uVar59 + 4;
  if (puStack_110 < puVar56) {
    puVar29 = (uint64_t *)((uint64_t)uVar37 + lVar12 + -1);
    while (puVar41 = (uint64_t *)((int64_t)puVar48 + -1), *(char *)puVar41 == (char)*puVar29) {
      lVar47 = lVar47 + 1;
      puVar48 = puVar41;
      if ((puVar29 <= puVar53) ||
         (puVar29 = (uint64_t *)((int64_t)puVar29 + -1), puVar41 <= puStack_110)) break;
    }
  }
  puVar29 = (uint64_t *)param_2[3];
  uVar59 = (int64_t)puVar48 - (int64_t)puStack_110;
  if (puVar44 < puVar48) {
    puVar41 = puVar29;
    if (puStack_110 <= puVar44) {
      uVar25 = puStack_110[1];
      *puVar29 = *puStack_110;
      puVar29[1] = uVar25;
      puVar41 = (uint64_t *)((int64_t)puVar29 + ((int64_t)puVar44 - (int64_t)puStack_110));
      if (0x10 < (int64_t)puVar44 - (int64_t)puStack_110) {
        puVar29 = puVar29 + 6;
        while( true ) {
          uVar25 = puStack_110[3];
          puVar29[-4] = puStack_110[2];
          puVar29[-3] = uVar25;
          uVar25 = puStack_110[5];
          puVar29[-2] = puStack_110[4];
          puVar29[-1] = uVar25;
          if (puVar41 <= puVar29) break;
          puVar29 = puVar29 + 4;
          puStack_110 = puStack_110 + 4;
        }
      }
      puStack_110 = puVar44;
    }
    if (puStack_110 < puVar48) {
      uVar25 = (int64_t)puVar48 - (int64_t)puStack_110;
      if ((3 < uVar25) && (0x1f < (uint64_t)((int64_t)puVar41 - (int64_t)puStack_110))) {
        if (uVar25 < 0x20) {
          uVar50 = 0;
        }
        else {
          uVar50 = uVar25 & 0xffffffffffffffe0;
          uVar39 = 0;
          do {
            uVar20 = ((uint64_t *)((int64_t)puStack_110 + uVar39))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_110 + uVar39 + 0x10);
            uVar21 = *puVar5;
            uVar22 = puVar5[1];
            *(uint64_t *)((int64_t)puVar41 + uVar39) =
                 *(uint64_t *)((int64_t)puStack_110 + uVar39);
            ((uint64_t *)((int64_t)puVar41 + uVar39))[1] = uVar20;
            puVar5 = (uint64_t *)((int64_t)puVar41 + uVar39 + 0x10);
            *puVar5 = uVar21;
            puVar5[1] = uVar22;
            uVar39 = uVar39 + 0x20;
          } while (uVar39 != uVar50);
          if (uVar25 == uVar50) goto LAB_7fffa4ed7117;
          if ((uVar25 & 0x1c) == 0) {
            puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar50);
            puVar41 = (uint64_t *)((int64_t)puVar41 + uVar50);
            goto LAB_7fffa4ed7059;
          }
        }
        uVar39 = uVar25 & 0xfffffffffffffffc;
        do {
          *(uint32_t *)((int64_t)puVar41 + uVar50) =
               *(uint32_t *)((int64_t)puStack_110 + uVar50);
          uVar50 = uVar50 + 4;
        } while (uVar50 != uVar39);
        if (uVar25 == uVar39) goto LAB_7fffa4ed7117;
        puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar39);
        puVar41 = (uint64_t *)((int64_t)puVar41 + uVar39);
      }
LAB_7fffa4ed7059:
      uVar25 = (int64_t)puVar48 - (int64_t)puStack_110 & 7;
      puVar29 = puStack_110;
      if (uVar25 != 0) {
        uVar50 = 0;
        do {
          *(char *)puVar41 = (char)*puVar29;
          puVar29 = (uint64_t *)((int64_t)puVar29 + 1);
          puVar41 = (uint64_t *)((int64_t)puVar41 + 1);
          uVar50 = uVar50 + 1;
        } while (uVar50 != uVar25);
      }
      if ((uint64_t)((int64_t)puStack_110 - (int64_t)puVar48) < 0xfffffffffffffff9) {
        lVar45 = 0;
        do {
          *(uint8_t *)((int64_t)puVar41 + lVar45) = *(uint8_t *)((int64_t)puVar29 + lVar45);
          *(uint8_t *)((int64_t)puVar41 + lVar45 + 1) =
               *(uint8_t *)((int64_t)puVar29 + lVar45 + 1);
          *(uint8_t *)((int64_t)puVar41 + lVar45 + 2) =
               *(uint8_t *)((int64_t)puVar29 + lVar45 + 2);
          *(uint8_t *)((int64_t)puVar41 + lVar45 + 3) =
               *(uint8_t *)((int64_t)puVar29 + lVar45 + 3);
          *(uint8_t *)((int64_t)puVar41 + lVar45 + 4) =
               *(uint8_t *)((int64_t)puVar29 + lVar45 + 4);
          *(uint8_t *)((int64_t)puVar41 + lVar45 + 5) =
               *(uint8_t *)((int64_t)puVar29 + lVar45 + 5);
          *(uint8_t *)((int64_t)puVar41 + lVar45 + 6) =
               *(uint8_t *)((int64_t)puVar29 + lVar45 + 6);
          *(uint8_t *)((int64_t)puVar41 + lVar45 + 7) =
               *(uint8_t *)((int64_t)puVar29 + lVar45 + 7);
          lVar40 = lVar45 + 8;
          lVar45 = lVar45 + 8;
        } while ((uint64_t *)((int64_t)puVar29 + lVar40) != puVar48);
      }
    }
LAB_7fffa4ed7117:
    param_2[3] = param_2[3] + uVar59;
    lVar45 = param_2[1];
    if (0xffff < uVar59) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar45 - *param_2) >> 3);
    }
  }
  else {
    uVar25 = puStack_110[1];
    *puVar29 = *puStack_110;
    puVar29[1] = uVar25;
    if (0x10 < uVar59) {
      lVar45 = param_2[3];
      uVar25 = puStack_110[3];
      *(uint64_t *)(lVar45 + 0x10) = puStack_110[2];
      *(uint64_t *)(lVar45 + 0x18) = uVar25;
      if (0x20 < (int64_t)uVar59) {
        lVar40 = 0;
        while( true ) {
          puVar8 = (uint64_t *)((int64_t)puStack_110 + lVar40 + 0x20);
          uVar20 = puVar8[1];
          puVar5 = (uint64_t *)(lVar45 + 0x20 + lVar40);
          *puVar5 = *puVar8;
          puVar5[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar40 + 0x30);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)(lVar45 + 0x30 + lVar40);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          if (lVar45 + uVar59 <= lVar45 + 0x20 + lVar40 + 0x20U) break;
          lVar40 = lVar40 + 0x20;
        }
      }
      goto LAB_7fffa4ed7117;
    }
    param_2[3] = param_2[3] + uVar59;
    lVar45 = param_2[1];
  }
  iVar51 = (int)puVar56 - (int)piVar35;
  *(short *)(lVar45 + 4) = (short)uVar59;
  *(int *)param_2[1] = iVar51 + 3;
  lVar45 = param_2[1];
  uVar59 = lVar47 - 3;
  iStack_a4 = iStack_12c;
joined_r0x7fffa4ed6495:
  if (0xffff < uVar59) {
LAB_7fffa4ed6497:
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar45 - *param_2) >> 3);
  }
LAB_7fffa4ed64bf:
  puVar48 = (uint64_t *)(lVar47 + (int64_t)puVar48);
  *(short *)(lVar45 + 6) = (short)uVar59;
  param_2[1] = param_2[1] + 8;
  if (puVar7 < puVar48) {
    puVar56 = puVar48;
    iStack_12c = iVar51;
LAB_7fffa4ed68d6:
    iVar31 = iStack_a4;
  }
  else {
    *(int *)(lVar15 + (uint64_t)
                      ((uint32_t)(*(int *)(lVar12 + 2 + ((int64_t)puVar56 - lVar12 & 0xffffffffU)) *
                             -0x61c8864f) >> (bVar28 & 0x1f)) * 4) = iVar52 + 2;
    *(int *)(lVar15 + (uint64_t)
                      ((uint32_t)(*(int *)((int64_t)puVar48 + -2) * -0x61c8864f) >> (bVar28 & 0x1f)) *
                      4) = ((int)puVar48 + -2) - iVar19;
    iVar31 = iStack_a4;
    do {
      iStack_12c = iVar31;
      iVar31 = iVar51;
      iVar52 = (int)puVar48 - iVar19;
      uVar42 = iVar52 - iStack_12c;
      lVar45 = lVar12;
      if (uVar42 < uVar9) {
        lVar45 = uVar14 - uVar57;
      }
      if (((uVar9 - 1) - uVar42 < 3) ||
         (piVar35 = (int *)(lVar45 + (uint64_t)uVar42), *piVar35 != (int)*puVar48)) {
        puVar56 = puVar48;
        iStack_a4 = iStack_12c;
        iStack_12c = iVar31;
        goto LAB_7fffa4ed68d6;
      }
      puVar56 = (uint64_t *)(piVar35 + 1);
      puVar29 = puVar4;
      if (uVar42 < uVar9) {
        puVar29 = puVar13;
      }
      puVar41 = (uint64_t *)((int64_t)puVar48 + 4);
      puVar33 = (uint64_t *)((int64_t)puVar48 + (int64_t)puVar29 + (4 - (int64_t)puVar56));
      if (puVar4 <= puVar33) {
        puVar33 = puVar4;
      }
      puVar26 = puVar41;
      puVar36 = puVar56;
      if (puVar41 < (uint64_t *)((int64_t)puVar33 - 7U)) {
        if (*puVar56 == *puVar41) {
          lVar45 = 0xc;
LAB_7fffa4ed6650:
          puVar26 = (uint64_t *)((int64_t)puVar48 + lVar45);
          if (puVar26 < (uint64_t *)((int64_t)puVar33 - 7U)) {
            if (*(uint64_t *)((int64_t)piVar35 + lVar45) == *puVar26) goto code_r0x7fffa4ed6669;
            uVar42 = 0;
            for (uVar59 = *(uint64_t *)((int64_t)piVar35 + lVar45) ^ *puVar26; (uVar59 & 1) == 0;
                uVar59 = uVar59 >> 1 | 0x8000000000000000) {
              uVar42 = uVar42 + 1;
            }
            uVar59 = ((uint64_t)(uVar42 >> 3) + lVar45) - 4;
            goto LAB_7fffa4ed66fd;
          }
          puVar36 = (uint64_t *)((int64_t)piVar35 + lVar45);
          goto LAB_7fffa4ed667d;
        }
        uVar42 = 0;
        for (uVar59 = *puVar56 ^ *puVar41; (uVar59 & 1) == 0;
            uVar59 = uVar59 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        uVar59 = (uint64_t)(uVar42 >> 3);
      }
      else {
LAB_7fffa4ed667d:
        if ((puVar26 < (uint64_t *)((int64_t)puVar33 - 3U)) && ((int)*puVar36 == (int)*puVar26)) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
          puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
        }
        if ((puVar26 < (uint64_t *)((int64_t)puVar33 - 1U)) &&
           ((short)*puVar36 == (short)*puVar26)) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
          puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
        }
        if (puVar26 < puVar33) {
          puVar26 = (uint64_t *)((int64_t)puVar26 + (uint64_t)((char)*puVar36 == (char)*puVar26))
          ;
        }
        uVar59 = (int64_t)puVar26 - (int64_t)puVar41;
      }
LAB_7fffa4ed66fd:
      if ((uint64_t *)((int64_t)puVar56 + uVar59) == puVar29) {
        puVar41 = (uint64_t *)((int64_t)puVar41 + uVar59);
        puVar56 = puVar53;
        puVar29 = puVar41;
        if (puVar41 < puVar1) {
          if (*puVar53 == *puVar41) {
            puVar29 = (uint64_t *)((int64_t)puVar48 + uVar59 + 0xc);
            lVar45 = 8;
            if (puVar29 < puVar1) {
LAB_7fffa4ed6820:
              if (*(uint64_t *)((int64_t)puVar53 + lVar45) == *puVar29) goto code_r0x7fffa4ed6830;
              uVar42 = 0;
              for (uVar25 = *(uint64_t *)((int64_t)puVar53 + lVar45) ^ *puVar29; (uVar25 & 1) == 0
                  ; uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar42 = uVar42 + 1;
              }
              uVar25 = (uint64_t)(uVar42 >> 3) + lVar45;
              goto LAB_7fffa4ed689f;
            }
LAB_7fffa4ed6842:
            puVar56 = (uint64_t *)(lVar45 + (int64_t)puVar53);
            goto LAB_7fffa4ed6845;
          }
          uVar42 = 0;
          for (uVar25 = *puVar53 ^ *puVar41; (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x8000000000000000) {
            uVar42 = uVar42 + 1;
          }
          uVar25 = (uint64_t)(uVar42 >> 3);
        }
        else {
LAB_7fffa4ed6845:
          if ((puVar29 < puVar2) && ((int)*puVar56 == (int)*puVar29)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
          }
          if ((puVar29 < puVar3) && ((short)*puVar56 == (short)*puVar29)) {
            puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
          }
          if (puVar29 < puVar4) {
            puVar29 = (uint64_t *)
                      ((int64_t)puVar29 + (uint64_t)((char)*puVar56 == (char)*puVar29));
          }
          uVar25 = (int64_t)puVar29 - (int64_t)puVar41;
        }
LAB_7fffa4ed689f:
        uVar59 = uVar25 + uVar59;
      }
      if (puVar48 <= puVar44) {
        puVar56 = (uint64_t *)param_2[3];
        uVar25 = puVar48[1];
        *puVar56 = *puVar48;
        puVar56[1] = uVar25;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar59 + 1) {
        *(uint32_t *)(param_2 + 9) = 2;
        *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
      }
      *(short *)(param_2[1] + 6) = (short)(uVar59 + 1);
      param_2[1] = param_2[1] + 8;
      puVar56 = (uint64_t *)((int64_t)puVar48 + uVar59 + 4);
      *(int *)(lVar15 + (uint64_t)((uint32_t)((int)*puVar48 * -0x61c8864f) >> (bVar28 & 0x1f)) * 4) =
           iVar52;
      puVar48 = puVar56;
      iVar51 = iStack_12c;
    } while (puVar56 <= puVar7);
  }
  puVar48 = (uint64_t *)(uVar54 + (int64_t)puVar56);
  puStack_110 = puVar56;
  iStack_a4 = iVar31;
  if (puVar7 < puVar48) goto LAB_7fffa4ed8b08;
  goto LAB_7fffa4ed585f;
code_r0x7fffa4ed5b02:
  lVar45 = lVar45 + 8;
  goto LAB_7fffa4ed5ae0;
code_r0x7fffa4ed6669:
  lVar45 = lVar45 + 8;
  goto LAB_7fffa4ed6650;
code_r0x7fffa4ed6830:
  puVar29 = puVar29 + 1;
  lVar45 = lVar45 + 8;
  if (puVar1 <= puVar29) goto LAB_7fffa4ed6842;
  goto LAB_7fffa4ed6820;
LAB_7fffa4ed4160:
  puVar26 = (uint64_t *)((int64_t)puVar41 + lVar47 + 0xd);
  if (puVar26 < (uint64_t *)((int64_t)puVar33 - 7U)) goto code_r0x7fffa4ed4169;
  puVar36 = (uint64_t *)((int64_t)puVar41 + lVar47 + 0xd);
  puVar26 = (uint64_t *)((int64_t)piVar35 + lVar47 + 0xc);
LAB_7fffa4ed41cc:
  if ((puVar36 < (uint64_t *)((int64_t)puVar33 - 3U)) && ((int)*puVar26 == (int)*puVar36)) {
    puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
    puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
  }
  if ((puVar36 < (uint64_t *)((int64_t)puVar33 - 1U)) && ((short)*puVar26 == (short)*puVar36)) {
    puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
    puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
  }
  if (puVar36 < puVar33) {
    puVar36 = (uint64_t *)((int64_t)puVar36 + (uint64_t)((char)*puVar26 == (char)*puVar36));
  }
  uVar59 = (int64_t)puVar36 - (int64_t)puVar48;
  goto LAB_7fffa4ed425c;
code_r0x7fffa4ed4169:
  uVar59 = *puVar26;
  uVar25 = *(uint64_t *)((int64_t)piVar35 + lVar47 + 0xc);
  lVar47 = lVar47 + 8;
  if (uVar25 != uVar59) goto code_r0x7fffa4ed417a;
  goto LAB_7fffa4ed4160;
code_r0x7fffa4ed417a:
  uVar42 = 0;
  for (uVar59 = uVar59 ^ uVar25; (uVar59 & 1) == 0; uVar59 = uVar59 >> 1 | 0x8000000000000000) {
    uVar42 = uVar42 + 1;
  }
  uVar59 = (uint64_t)(uVar42 >> 3) + lVar47;
LAB_7fffa4ed425c:
  if ((uint64_t *)((int64_t)puVar56 + uVar59) == puVar29) {
    puVar48 = (uint64_t *)((int64_t)puVar48 + uVar59);
    puVar56 = puVar53;
    puVar29 = puVar48;
    if (puVar48 < puVar44) {
      if (*puVar53 == *puVar48) {
        lVar47 = 0;
        do {
          puVar56 = (uint64_t *)((int64_t)puVar41 + lVar47 + uVar59 + 0xd);
          if (puVar44 <= puVar56) {
            puVar29 = (uint64_t *)((int64_t)puVar41 + lVar47 + uVar59 + 0xd);
            puVar56 = (uint64_t *)(lVar47 + lVar45);
            goto LAB_7fffa4ed4837;
          }
          uVar25 = *puVar56;
          uVar50 = *(uint64_t *)(lVar45 + lVar47);
          lVar47 = lVar47 + 8;
        } while (uVar50 == uVar25);
        uVar42 = 0;
        for (uVar25 = uVar25 ^ uVar50; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x8000000000000000)
        {
          uVar42 = uVar42 + 1;
        }
        uVar25 = (uint64_t)(uVar42 >> 3) + lVar47;
      }
      else {
        uVar42 = 0;
        for (uVar25 = *puVar53 ^ *puVar48; (uVar25 & 1) == 0;
            uVar25 = uVar25 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        uVar25 = (uint64_t)(uVar42 >> 3);
      }
    }
    else {
LAB_7fffa4ed4837:
      if ((puVar29 < puVar2) && ((int)*puVar56 == (int)*puVar29)) {
        puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
        puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
      }
      if ((puVar29 < puVar1) && ((short)*puVar56 == (short)*puVar29)) {
        puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
        puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
      }
      if (puVar29 < puVar4) {
        puVar29 = (uint64_t *)((int64_t)puVar29 + (uint64_t)((char)*puVar56 == (char)*puVar29));
      }
      uVar25 = (int64_t)puVar29 - (int64_t)puVar48;
    }
    uVar59 = uVar59 + uVar25;
  }
  puVar56 = (uint64_t *)((int64_t)puVar41 + 1);
  uVar25 = (int64_t)puVar56 - (int64_t)puStack_110;
  puVar48 = (uint64_t *)param_2[3];
  if (puVar3 < puVar56) {
    puVar29 = puVar48;
    if (puStack_110 <= puVar3) {
      uVar50 = puStack_110[1];
      *puVar48 = *puStack_110;
      puVar48[1] = uVar50;
      puVar29 = (uint64_t *)((int64_t)puVar48 + ((int64_t)puVar3 - (int64_t)puStack_110));
      if (0x10 < (int64_t)puVar3 - (int64_t)puStack_110) {
        lVar47 = 0x10;
        do {
          uVar20 = ((uint64_t *)((int64_t)puStack_110 + lVar47))[1];
          *(uint64_t *)((int64_t)puVar48 + lVar47) =
               *(uint64_t *)((int64_t)puStack_110 + lVar47);
          ((uint64_t *)((int64_t)puVar48 + lVar47))[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar47 + 0x10);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)((int64_t)puVar48 + lVar47 + 0x10);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          lVar40 = lVar47 + 0x20;
          lVar47 = lVar47 + 0x20;
        } while ((uint64_t *)((int64_t)puVar48 + lVar40) < puVar29);
      }
      puStack_110 = puVar3;
    }
    if (puStack_110 < puVar56) {
      uVar50 = (int64_t)puVar41 + (1 - (int64_t)puStack_110);
      if ((uVar50 < 4) || ((uint64_t)((int64_t)puVar29 - (int64_t)puStack_110) < 0x20)) {
LAB_7fffa4ed4a2b:
        puVar48 = puVar29;
      }
      else {
        if (uVar50 < 0x20) {
          uVar39 = 0;
        }
        else {
          uVar39 = uVar50 & 0xffffffffffffffe0;
          uVar46 = 0;
          do {
            uVar20 = *(uint64_t *)((int64_t)puStack_110 + uVar46);
            uVar21 = ((uint64_t *)((int64_t)puStack_110 + uVar46))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_110 + uVar46 + 0x10);
            uVar22 = puVar5[1];
            puVar8 = (uint64_t *)((int64_t)puVar29 + uVar46 + 0x10);
            *puVar8 = *puVar5;
            puVar8[1] = uVar22;
            *(uint64_t *)((int64_t)puVar29 + uVar46) = uVar20;
            ((uint64_t *)((int64_t)puVar29 + uVar46))[1] = uVar21;
            uVar46 = uVar46 + 0x20;
          } while (uVar46 != uVar39);
          if (uVar50 == uVar39) goto LAB_7fffa4ed4b0b;
          if ((uVar50 & 0x1c) == 0) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + uVar39);
            puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar39);
            goto LAB_7fffa4ed4a2b;
          }
        }
        uVar46 = uVar50 & 0xfffffffffffffffc;
        puVar48 = (uint64_t *)((int64_t)puVar29 + uVar46);
        do {
          *(uint32_t *)((int64_t)puVar29 + uVar39) =
               *(uint32_t *)((int64_t)puStack_110 + uVar39);
          uVar39 = uVar39 + 4;
        } while (uVar39 != uVar46);
        if (uVar50 == uVar46) goto LAB_7fffa4ed4b0b;
        puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar46);
      }
      uVar50 = (int64_t)puVar41 - (int64_t)puStack_110;
      uVar42 = (uint32_t)uVar50;
      if ((~uVar42 & 7) != 0) {
        uVar39 = 0;
        do {
          uVar46 = *puStack_110;
          puStack_110 = (uint64_t *)((int64_t)puStack_110 + 1);
          *(char *)puVar48 = (char)uVar46;
          puVar48 = (uint64_t *)((int64_t)puVar48 + 1);
          uVar39 = uVar39 + 1;
        } while (uVar39 != (uVar42 + 1 & 7));
        if (uVar50 < 7) goto LAB_7fffa4ed4b0b;
      }
      lVar47 = 0;
      do {
        *(uint8_t *)((int64_t)puVar48 + lVar47) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47);
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 1) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 1);
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 2) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 2);
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 3) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 3);
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 4) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 4);
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 5) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 5);
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 6) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 6);
        lVar40 = lVar47 + 7;
        *(uint8_t *)((int64_t)puVar48 + lVar47 + 7) =
             *(uint8_t *)((int64_t)puStack_110 + lVar47 + 7);
        lVar47 = lVar47 + 8;
      } while ((uint64_t *)((int64_t)puStack_110 + lVar40) != puVar41);
    }
LAB_7fffa4ed4b0b:
    param_2[3] = param_2[3] + uVar25;
    lVar47 = param_2[1];
    if (0xffff < uVar25) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
    }
  }
  else {
    uVar50 = puStack_110[1];
    *puVar48 = *puStack_110;
    puVar48[1] = uVar50;
    if (0x10 < uVar25) {
      lVar47 = param_2[3];
      uVar50 = puStack_110[3];
      *(uint64_t *)(lVar47 + 0x10) = puStack_110[2];
      *(uint64_t *)(lVar47 + 0x18) = uVar50;
      if (0x20 < (int64_t)uVar25) {
        lVar40 = 0;
        do {
          puVar8 = (uint64_t *)((int64_t)puStack_110 + lVar40 + 0x20);
          uVar20 = puVar8[1];
          puVar5 = (uint64_t *)(lVar47 + 0x20 + lVar40);
          *puVar5 = *puVar8;
          puVar5[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar40 + 0x30);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)(lVar47 + 0x30 + lVar40);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          lVar34 = lVar47 + 0x20 + lVar40;
          lVar40 = lVar40 + 0x20;
        } while (lVar34 + 0x20U < lVar47 + uVar25);
      }
      goto LAB_7fffa4ed4b0b;
    }
    param_2[3] = param_2[3] + uVar25;
    lVar47 = param_2[1];
  }
  lVar40 = uVar59 + 4;
  uVar59 = uVar59 + 1;
  *(short *)(lVar47 + 4) = (short)uVar25;
  *(uint32_t *)param_2[1] = 1;
  lVar47 = param_2[1];
  iVar51 = iStack_12c;
joined_r0x7fffa4ed4b75:
  iStack_12c = iVar51;
  if (0xffff < uVar59) {
code_r0x7fffa4ed4b79:
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
    iStack_12c = iVar51;
  }
LAB_7fffa4ed4bb0:
  puVar56 = (uint64_t *)(lVar40 + (int64_t)puVar56);
  *(short *)(lVar47 + 6) = (short)uVar59;
  param_2[1] = param_2[1] + 8;
  if (puVar7 < puVar56) {
    iVar31 = iStack_a4;
  }
  else {
    *(int *)(lVar15 + ((uint64_t)
                       (*(int64_t *)(lVar12 + 2 + ((int64_t)puVar41 - lVar12 & 0xffffffffU)) *
                       -0x30e44323405a9d00) >> (bVar28 & 0x3f)) * 4) = iVar52 + 2;
    *(int *)(lVar15 + ((uint64_t)(*(int64_t *)((int64_t)puVar56 + -2) * -0x30e44323405a9d00) >>
                      (bVar28 & 0x3f)) * 4) = ((int)puVar56 + -2) - iVar19;
    do {
      iVar51 = iStack_12c;
      iVar52 = (int)puVar56 - iVar19;
      uVar42 = iVar52 - iStack_a4;
      lVar47 = lVar12;
      if (uVar42 < uVar9) {
        lVar47 = uVar14 - uVar57;
      }
      if (((uVar9 - 1) - uVar42 < 3) ||
         (piVar35 = (int *)(lVar47 + (uint64_t)uVar42), *piVar35 != (int)*puVar56)) {
        iVar31 = iStack_a4;
        iStack_12c = iVar51;
        break;
      }
      puVar48 = (uint64_t *)(piVar35 + 1);
      puVar29 = (uint64_t *)((int64_t)puVar56 + 4);
      puVar41 = puVar4;
      if (uVar42 < uVar9) {
        puVar41 = puVar13;
      }
      puVar33 = (uint64_t *)((int64_t)puVar56 + (int64_t)puVar41 + (4 - (int64_t)puVar48));
      if (puVar4 <= puVar33) {
        puVar33 = puVar4;
      }
      puVar26 = puVar29;
      puVar36 = puVar48;
      if (puVar29 < (uint64_t *)((int64_t)puVar33 - 7U)) {
        if (*puVar48 == *puVar29) {
          lVar40 = 0;
          do {
            puVar26 = (uint64_t *)((int64_t)puVar56 + lVar40 + 0xc);
            if ((uint64_t *)((int64_t)puVar33 - 7U) <= puVar26) {
              puVar26 = (uint64_t *)((int64_t)puVar56 + lVar40 + 0xc);
              puVar36 = (uint64_t *)((int64_t)piVar35 + lVar40 + 0xc);
              goto LAB_7fffa4ed4e01;
            }
            uVar59 = *(uint64_t *)((uint64_t)uVar42 + lVar47 + 0xc + lVar40);
            uVar25 = *puVar26;
            lVar40 = lVar40 + 8;
          } while (uVar59 == uVar25);
          uVar50 = 0;
          for (uVar25 = uVar25 ^ uVar59; (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x8000000000000000) {
            uVar50 = uVar50 + 1;
          }
          uVar59 = (uVar50 >> 3 & 0x1fffffff) + lVar40;
        }
        else {
          uVar42 = 0;
          for (uVar59 = *puVar48 ^ *puVar29; (uVar59 & 1) == 0;
              uVar59 = uVar59 >> 1 | 0x8000000000000000) {
            uVar42 = uVar42 + 1;
          }
          uVar59 = (uint64_t)(uVar42 >> 3);
        }
      }
      else {
LAB_7fffa4ed4e01:
        if ((puVar26 < (uint64_t *)((int64_t)puVar33 - 3U)) && ((int)*puVar36 == (int)*puVar26)) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
          puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
        }
        if ((puVar26 < (uint64_t *)((int64_t)puVar33 - 1U)) &&
           ((short)*puVar36 == (short)*puVar26)) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
          puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
        }
        if (puVar26 < puVar33) {
          puVar26 = (uint64_t *)((int64_t)puVar26 + (uint64_t)((char)*puVar36 == (char)*puVar26))
          ;
        }
        uVar59 = (int64_t)puVar26 - (int64_t)puVar29;
      }
      if ((uint64_t *)((int64_t)puVar48 + uVar59) == puVar41) {
        puVar29 = (uint64_t *)((int64_t)puVar29 + uVar59);
        puVar48 = puVar53;
        puVar41 = puVar29;
        if (puVar29 < puVar44) {
          if (*puVar53 == *puVar29) {
            puVar41 = (uint64_t *)((int64_t)puVar56 + uVar59 + 0xc);
            lVar47 = 8;
LAB_7fffa4ed4ee0:
            if (puVar41 < puVar44) {
              if (*(uint64_t *)((int64_t)puVar53 + lVar47) == *puVar41) goto code_r0x7fffa4ed4f0f;
              uVar42 = 0;
              for (uVar25 = *puVar41 ^ *(uint64_t *)((int64_t)puVar53 + lVar47); (uVar25 & 1) == 0
                  ; uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar42 = uVar42 + 1;
              }
              uVar25 = (uint64_t)(uVar42 >> 3) + lVar47;
              goto LAB_7fffa4ed4f8b;
            }
            puVar48 = (uint64_t *)(lVar47 + (int64_t)puVar53);
            goto LAB_7fffa4ed4f21;
          }
          uVar42 = 0;
          for (uVar25 = *puVar29 ^ *puVar53; (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x8000000000000000) {
            uVar42 = uVar42 + 1;
          }
          uVar25 = (uint64_t)(uVar42 >> 3);
        }
        else {
LAB_7fffa4ed4f21:
          if ((puVar41 < puVar2) && ((int)*puVar48 == (int)*puVar41)) {
            puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
            puVar48 = (uint64_t *)((int64_t)puVar48 + 4);
          }
          if ((puVar41 < puVar1) && ((short)*puVar48 == (short)*puVar41)) {
            puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
            puVar48 = (uint64_t *)((int64_t)puVar48 + 2);
          }
          if (puVar41 < puVar4) {
            puVar41 = (uint64_t *)
                      ((int64_t)puVar41 + (uint64_t)((char)*puVar48 == (char)*puVar41));
          }
          uVar25 = (int64_t)puVar41 - (int64_t)puVar29;
        }
LAB_7fffa4ed4f8b:
        uVar59 = uVar59 + uVar25;
      }
      if (puVar56 <= puVar3) {
        puVar48 = (uint64_t *)param_2[3];
        uVar25 = puVar56[1];
        *puVar48 = *puVar56;
        puVar48[1] = uVar25;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar59 + 1) {
        *(uint32_t *)(param_2 + 9) = 2;
        *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
      }
      *(short *)(param_2[1] + 6) = (short)(uVar59 + 1);
      param_2[1] = param_2[1] + 8;
      puVar48 = (uint64_t *)((int64_t)puVar56 + uVar59 + 4);
      *(int *)(lVar15 + (*puVar56 * -0x30e44323405a9d00 >> (bVar28 & 0x3f)) * 4) = iVar52;
      puVar56 = puVar48;
      iVar31 = iVar51;
      iStack_12c = iStack_a4;
      iStack_a4 = iVar51;
    } while (puVar48 <= puVar7);
  }
  puVar48 = (uint64_t *)(uVar54 + (int64_t)puVar56);
  puStack_110 = puVar56;
  iStack_a4 = iVar31;
  if (puVar7 < puVar48) goto LAB_7fffa4ed8b08;
  goto LAB_7fffa4ed3df6;
LAB_7fffa4ed4135:
  puVar26 = (uint64_t *)(lVar47 + (int64_t)puVar41);
  if ((uint64_t *)((int64_t)puVar29 - 7U) <= puVar26) goto LAB_7fffa4ed50d2;
  uVar59 = *(uint64_t *)(uVar14 + uVar50 + lVar47);
  if (uVar59 != *puVar26) {
    uVar42 = 0;
    for (uVar59 = *puVar26 ^ uVar59; (uVar59 & 1) == 0; uVar59 = uVar59 >> 1 | 0x8000000000000000) {
      uVar42 = uVar42 + 1;
    }
    uVar59 = ((uint64_t)(uVar42 >> 3) + lVar47) - 4;
    goto LAB_7fffa4ed5143;
  }
  lVar47 = lVar47 + 8;
  goto LAB_7fffa4ed4135;
LAB_7fffa4ed50d2:
  puVar36 = (uint64_t *)(lVar47 + uVar14 + uVar50);
LAB_7fffa4ed50e8:
  if ((puVar26 < (uint64_t *)((int64_t)puVar29 - 3U)) && ((int)*puVar36 == (int)*puVar26)) {
    puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
    puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
  }
  if ((puVar26 < (uint64_t *)((int64_t)puVar29 - 1U)) && ((short)*puVar36 == (short)*puVar26)) {
    puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
    puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
  }
  if (puVar26 < puVar29) {
    puVar26 = (uint64_t *)((int64_t)puVar26 + (uint64_t)((char)*puVar36 == (char)*puVar26));
  }
  uVar59 = (int64_t)puVar26 - (int64_t)puVar48;
LAB_7fffa4ed5143:
  if ((uint64_t *)((int64_t)puVar33 + uVar59) == puVar13) {
    puVar48 = (uint64_t *)((int64_t)puVar48 + uVar59);
    puVar29 = puVar53;
    puVar33 = puVar48;
    if (puVar48 < puVar44) {
      if (*puVar53 == *puVar48) {
        puVar33 = (uint64_t *)((int64_t)puVar41 + uVar59 + 0xc);
        lVar47 = 8;
        if (puVar33 < puVar44) {
LAB_7fffa4ed51cb:
          if (*(uint64_t *)((int64_t)puVar53 + lVar47) == *puVar33) goto code_r0x7fffa4ed51dc;
          uVar25 = 0;
          for (uVar39 = *(uint64_t *)((int64_t)puVar53 + lVar47) ^ *puVar33; (uVar39 & 1) == 0;
              uVar39 = uVar39 >> 1 | 0x8000000000000000) {
            uVar25 = uVar25 + 1;
          }
          uVar25 = (uVar25 >> 3 & 0x1fffffff) + lVar47;
          goto LAB_7fffa4ed5257;
        }
LAB_7fffa4ed51eb:
        puVar29 = (uint64_t *)(lVar47 + (int64_t)puVar53);
        goto LAB_7fffa4ed51ee;
      }
      uVar42 = 0;
      for (uVar25 = *puVar48 ^ *puVar53; (uVar25 & 1) == 0;
          uVar25 = uVar25 >> 1 | 0x8000000000000000) {
        uVar42 = uVar42 + 1;
      }
      uVar25 = (uint64_t)(uVar42 >> 3);
    }
    else {
LAB_7fffa4ed51ee:
      if ((puVar33 < puVar2) && ((int)*puVar29 == (int)*puVar33)) {
        puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
        puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
      }
      if ((puVar33 < puVar1) && ((short)*puVar29 == (short)*puVar33)) {
        puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
        puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
      }
      if (puVar33 < puVar4) {
        puVar33 = (uint64_t *)((int64_t)puVar33 + (uint64_t)((char)*puVar29 == (char)*puVar33));
      }
      uVar25 = (int64_t)puVar33 - (int64_t)puVar48;
    }
LAB_7fffa4ed5257:
    uVar59 = uVar59 + uVar25;
  }
  lVar40 = uVar59 + 4;
  if (puStack_110 < puVar41) {
    pcVar30 = (char *)(uVar50 + (uVar14 - 1));
    while( true ) {
      puVar48 = (uint64_t *)((int64_t)puVar56 + -1);
      if (*(char *)puVar48 != *pcVar30) break;
      lVar40 = lVar40 + 1;
      puVar56 = puVar48;
      if ((puVar48 <= puStack_110) || (bVar16 = pcVar30 <= pcVar49, pcVar30 = pcVar30 + -1, bVar16))
      break;
    }
  }
  puVar48 = (uint64_t *)param_2[3];
  uVar59 = (int64_t)puVar56 - (int64_t)puStack_110;
  if (puVar3 < puVar56) {
    puVar29 = puVar48;
    if (puStack_110 <= puVar3) {
      uVar25 = puStack_110[1];
      *puVar48 = *puStack_110;
      puVar48[1] = uVar25;
      puVar29 = (uint64_t *)((int64_t)puVar48 + ((int64_t)puVar3 - (int64_t)puStack_110));
      if (0x10 < (int64_t)puVar3 - (int64_t)puStack_110) {
        lVar47 = 0x10;
        do {
          uVar20 = ((uint64_t *)((int64_t)puStack_110 + lVar47))[1];
          *(uint64_t *)((int64_t)puVar48 + lVar47) =
               *(uint64_t *)((int64_t)puStack_110 + lVar47);
          ((uint64_t *)((int64_t)puVar48 + lVar47))[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar47 + 0x10);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)((int64_t)puVar48 + lVar47 + 0x10);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          lVar34 = lVar47 + 0x20;
          lVar47 = lVar47 + 0x20;
        } while ((uint64_t *)((int64_t)puVar48 + lVar34) < puVar29);
      }
      puStack_110 = puVar3;
    }
    if (puStack_110 < puVar56) {
      uVar25 = (int64_t)puVar56 - (int64_t)puStack_110;
      if (3 < uVar25) {
        if ((uint64_t)((int64_t)puVar29 - (int64_t)puStack_110) < 0x20) {
LAB_7fffa4ed551d:
        }
        else {
          if (uVar25 < 0x20) {
            uVar50 = 0;
          }
          else {
            uVar50 = uVar25 & 0xffffffffffffffe0;
            uVar39 = 0;
            do {
              uVar20 = ((uint64_t *)((int64_t)puStack_110 + uVar39))[1];
              puVar5 = (uint64_t *)((int64_t)puStack_110 + uVar39 + 0x10);
              uVar21 = *puVar5;
              uVar22 = puVar5[1];
              *(uint64_t *)((int64_t)puVar29 + uVar39) =
                   *(uint64_t *)((int64_t)puStack_110 + uVar39);
              ((uint64_t *)((int64_t)puVar29 + uVar39))[1] = uVar20;
              puVar5 = (uint64_t *)((int64_t)puVar29 + uVar39 + 0x10);
              *puVar5 = uVar21;
              puVar5[1] = uVar22;
              uVar39 = uVar39 + 0x20;
            } while (uVar39 != uVar50);
            if (uVar25 == uVar50) goto LAB_7fffa4ed5641;
            if ((uVar25 & 0x1c) == 0) {
              puVar29 = (uint64_t *)((int64_t)puVar29 + uVar50);
              puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar50);
              goto LAB_7fffa4ed551d;
            }
          }
          uVar39 = uVar25 & 0xfffffffffffffffc;
          do {
            uVar46 = uVar50 + 4;
            *(uint32_t *)((int64_t)puVar29 + uVar50) =
                 *(uint32_t *)((int64_t)puStack_110 + uVar50);
            uVar50 = uVar46;
          } while (uVar46 != uVar39);
          if (uVar25 == uVar39) goto LAB_7fffa4ed5641;
          puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar39);
          puVar29 = (uint64_t *)((int64_t)puVar29 + uVar39);
        }
      }
      uVar25 = (int64_t)puVar56 - (int64_t)puStack_110 & 7;
      puVar48 = puStack_110;
      if (uVar25 != 0) {
        uVar50 = 0;
        puVar33 = puVar29;
        puVar26 = puStack_110;
        do {
          puVar48 = (uint64_t *)((int64_t)puVar26 + 1);
          puVar29 = (uint64_t *)((int64_t)puVar33 + 1);
          *(char *)puVar33 = (char)*puVar26;
          uVar50 = uVar50 + 1;
          puVar33 = puVar29;
          puVar26 = puVar48;
        } while (uVar50 != uVar25);
      }
      if ((uint64_t)((int64_t)puStack_110 - (int64_t)puVar56) < 0xfffffffffffffff9) {
        lVar47 = 0;
        do {
          *(uint8_t *)((int64_t)puVar29 + lVar47) = *(uint8_t *)((int64_t)puVar48 + lVar47);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 1) =
               *(uint8_t *)((int64_t)puVar48 + lVar47 + 1);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 2) =
               *(uint8_t *)((int64_t)puVar48 + lVar47 + 2);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 3) =
               *(uint8_t *)((int64_t)puVar48 + lVar47 + 3);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 4) =
               *(uint8_t *)((int64_t)puVar48 + lVar47 + 4);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 5) =
               *(uint8_t *)((int64_t)puVar48 + lVar47 + 5);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 6) =
               *(uint8_t *)((int64_t)puVar48 + lVar47 + 6);
          *(uint8_t *)((int64_t)puVar29 + lVar47 + 7) =
               *(uint8_t *)((int64_t)puVar48 + lVar47 + 7);
          lVar34 = lVar47 + 8;
          lVar47 = lVar47 + 8;
        } while ((uint64_t *)((int64_t)puVar48 + lVar34) != puVar56);
      }
    }
LAB_7fffa4ed5641:
    lVar47 = param_2[1];
    param_2[3] = param_2[3] + uVar59;
    if (0xffff < uVar59) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
    }
  }
  else {
    uVar25 = puStack_110[1];
    *puVar48 = *puStack_110;
    puVar48[1] = uVar25;
    if (0x10 < uVar59) {
      lVar47 = param_2[3];
      uVar25 = puStack_110[3];
      *(uint64_t *)(lVar47 + 0x10) = puStack_110[2];
      *(uint64_t *)(lVar47 + 0x18) = uVar25;
      if (0x20 < (int64_t)uVar59) {
        lVar34 = 0;
        while( true ) {
          puVar8 = (uint64_t *)((int64_t)puStack_110 + lVar34 + 0x20);
          uVar20 = puVar8[1];
          puVar5 = (uint64_t *)(lVar47 + 0x20 + lVar34);
          *puVar5 = *puVar8;
          puVar5[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar34 + 0x30);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)(lVar47 + 0x30 + lVar34);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          if (lVar47 + uVar59 <= lVar47 + 0x20 + lVar34 + 0x20U) break;
          lVar34 = lVar34 + 0x20;
        }
      }
      goto LAB_7fffa4ed5641;
    }
    param_2[3] = param_2[3] + uVar59;
    lVar47 = param_2[1];
  }
  iVar51 = iVar52 - (uVar37 + uVar57);
  *(short *)(lVar47 + 4) = (short)uVar59;
  *(int *)param_2[1] = iVar51 + 3;
  lVar47 = param_2[1];
  uVar59 = lVar40 - 3;
  iStack_a4 = iStack_12c;
  iStack_12c = iVar51;
  if (uVar59 < 0x10000) goto LAB_7fffa4ed4bb0;
  goto code_r0x7fffa4ed4b79;
code_r0x7fffa4ed51dc:
  puVar33 = puVar33 + 1;
  lVar47 = lVar47 + 8;
  if (puVar44 <= puVar33) goto LAB_7fffa4ed51eb;
  goto LAB_7fffa4ed51cb;
LAB_7fffa4ed406e:
  puVar48 = (uint64_t *)((int64_t)puVar41 + 4);
  puVar29 = (uint64_t *)(piVar35 + 1);
  if (puVar48 < puVar44) {
    if (*puVar29 == *puVar48) {
      lVar47 = 0xc;
LAB_7fffa4ed4198:
      puVar33 = (uint64_t *)(lVar47 + (int64_t)puVar41);
      if (puVar33 < puVar44) {
        if (*(uint64_t *)((int64_t)piVar35 + lVar47) == *puVar33) goto code_r0x7fffa4ed41b7;
        uVar37 = 0;
        for (uVar59 = *puVar33 ^ *(uint64_t *)((int64_t)piVar35 + lVar47); (uVar59 & 1) == 0;
            uVar59 = uVar59 >> 1 | 0x8000000000000000) {
          uVar37 = uVar37 + 1;
        }
        uVar59 = ((uint64_t)(uVar37 >> 3) + lVar47) - 4;
        goto LAB_7fffa4ed435f;
      }
      puVar29 = (uint64_t *)(lVar47 + (int64_t)piVar35);
      goto LAB_7fffa4ed42b8;
    }
    uVar37 = 0;
    for (uVar59 = *puVar48 ^ *puVar29; (uVar59 & 1) == 0; uVar59 = uVar59 >> 1 | 0x8000000000000000)
    {
      uVar37 = uVar37 + 1;
    }
    uVar59 = (uint64_t)(uVar37 >> 3);
  }
  else {
    puVar33 = puVar48;
LAB_7fffa4ed42b8:
    if ((puVar33 < puVar2) && ((int)*puVar29 == (int)*puVar33)) {
      puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
      puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
    }
    if ((puVar33 < puVar1) && ((short)*puVar29 == (short)*puVar33)) {
      puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
      puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
    }
    if (puVar33 < puVar4) {
      puVar33 = (uint64_t *)((int64_t)puVar33 + (uint64_t)((char)*puVar29 == (char)*puVar33));
    }
    uVar59 = (int64_t)puVar33 - (int64_t)puVar48;
  }
LAB_7fffa4ed435f:
  lVar40 = uVar59 + 4;
  if (puStack_110 < puVar41) {
    puVar48 = (uint64_t *)((uint64_t)uVar42 + lVar12 + -1);
    while (puVar29 = (uint64_t *)((int64_t)puVar56 + -1), *(char *)puVar29 == (char)*puVar48) {
      lVar40 = lVar40 + 1;
      puVar56 = puVar29;
      if ((puVar29 <= puStack_110) ||
         (bVar16 = puVar48 <= puVar53, puVar48 = (uint64_t *)((int64_t)puVar48 + -1), bVar16))
      break;
    }
  }
  puVar48 = (uint64_t *)param_2[3];
  uVar59 = (int64_t)puVar56 - (int64_t)puStack_110;
  if (puVar3 < puVar56) {
    puVar29 = puVar48;
    if (puStack_110 <= puVar3) {
      uVar25 = puStack_110[1];
      *puVar48 = *puStack_110;
      puVar48[1] = uVar25;
      puVar29 = (uint64_t *)((int64_t)puVar48 + ((int64_t)puVar3 - (int64_t)puStack_110));
      if (0x10 < (int64_t)puVar3 - (int64_t)puStack_110) {
        lVar47 = 0x10;
        while( true ) {
          uVar20 = ((uint64_t *)((int64_t)puStack_110 + lVar47))[1];
          *(uint64_t *)((int64_t)puVar48 + lVar47) =
               *(uint64_t *)((int64_t)puStack_110 + lVar47);
          ((uint64_t *)((int64_t)puVar48 + lVar47))[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar47 + 0x10);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)((int64_t)puVar48 + lVar47 + 0x10);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          if (puVar29 <= (uint64_t *)((int64_t)puVar48 + lVar47 + 0x20)) break;
          lVar47 = lVar47 + 0x20;
        }
      }
      puStack_110 = puVar3;
    }
    if (puStack_110 < puVar56) {
      uVar25 = (int64_t)puVar56 - (int64_t)puStack_110;
      puVar48 = puVar29;
      if (!((uint64_t)((int64_t)puVar29 - (int64_t)puStack_110) < 0x20 || uVar25 < 4)) {
        if (uVar25 < 0x20) {
          uVar39 = 0;
        }
        else {
          uVar39 = uVar25 & 0xffffffffffffffe0;
          uVar50 = 0;
          do {
            uVar20 = *(uint64_t *)((int64_t)puStack_110 + uVar50);
            uVar21 = ((uint64_t *)((int64_t)puStack_110 + uVar50))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_110 + uVar50 + 0x10);
            uVar22 = puVar5[1];
            uVar46 = uVar50 + 0x20;
            puVar8 = (uint64_t *)((int64_t)puVar29 + uVar50 + 0x10);
            *puVar8 = *puVar5;
            puVar8[1] = uVar22;
            *(uint64_t *)((int64_t)puVar29 + uVar50) = uVar20;
            ((uint64_t *)((int64_t)puVar29 + uVar50))[1] = uVar21;
            uVar50 = uVar46;
          } while (uVar46 != uVar39);
          if (uVar25 == uVar39) goto LAB_7fffa4ed4799;
          if ((uVar25 & 0x1c) == 0) {
            puVar48 = (uint64_t *)((int64_t)puVar29 + uVar39);
            puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar39);
            goto LAB_7fffa4ed4695;
          }
        }
        uVar50 = uVar25 & 0xfffffffffffffffc;
        puVar48 = (uint64_t *)((int64_t)puVar29 + uVar50);
        do {
          *(uint32_t *)((int64_t)puVar29 + uVar39) =
               *(uint32_t *)((int64_t)puStack_110 + uVar39);
          uVar39 = uVar39 + 4;
        } while (uVar39 != uVar50);
        if (uVar25 == uVar50) goto LAB_7fffa4ed4799;
        puStack_110 = (uint64_t *)((int64_t)puStack_110 + uVar50);
      }
LAB_7fffa4ed4695:
      uVar25 = (int64_t)puVar56 - (int64_t)puStack_110 & 7;
      puVar29 = puStack_110;
      if (uVar25 != 0) {
        uVar50 = 0;
        do {
          *(char *)puVar48 = (char)*puVar29;
          puVar29 = (uint64_t *)((int64_t)puVar29 + 1);
          puVar48 = (uint64_t *)((int64_t)puVar48 + 1);
          uVar50 = uVar50 + 1;
        } while (uVar50 != uVar25);
      }
      if ((uint64_t)((int64_t)puStack_110 - (int64_t)puVar56) < 0xfffffffffffffff9) {
        lVar47 = 0;
        do {
          *(uint8_t *)((int64_t)puVar48 + lVar47) = *(uint8_t *)((int64_t)puVar29 + lVar47);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 1) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 1);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 2) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 2);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 3) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 3);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 4) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 4);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 5) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 5);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 6) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 6);
          *(uint8_t *)((int64_t)puVar48 + lVar47 + 7) =
               *(uint8_t *)((int64_t)puVar29 + lVar47 + 7);
          lVar34 = lVar47 + 8;
          lVar47 = lVar47 + 8;
        } while ((uint64_t *)((int64_t)puVar29 + lVar34) != puVar56);
      }
    }
LAB_7fffa4ed4799:
    lVar47 = param_2[1];
    param_2[3] = param_2[3] + uVar59;
    if (0xffff < uVar59) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
    }
  }
  else {
    uVar25 = puStack_110[1];
    *puVar48 = *puStack_110;
    puVar48[1] = uVar25;
    if (0x10 < uVar59) {
      lVar47 = param_2[3];
      uVar25 = puStack_110[3];
      *(uint64_t *)(lVar47 + 0x10) = puStack_110[2];
      *(uint64_t *)(lVar47 + 0x18) = uVar25;
      if (0x20 < (int64_t)uVar59) {
        lVar34 = 0;
        do {
          puVar8 = (uint64_t *)((int64_t)puStack_110 + lVar34 + 0x20);
          uVar20 = puVar8[1];
          puVar5 = (uint64_t *)(lVar47 + 0x20 + lVar34);
          *puVar5 = *puVar8;
          puVar5[1] = uVar20;
          puVar5 = (uint64_t *)((int64_t)puStack_110 + lVar34 + 0x30);
          uVar20 = puVar5[1];
          puVar8 = (uint64_t *)(lVar47 + 0x30 + lVar34);
          *puVar8 = *puVar5;
          puVar8[1] = uVar20;
          lVar6 = lVar47 + 0x20 + lVar34;
          lVar34 = lVar34 + 0x20;
        } while (lVar6 + 0x20U < lVar47 + uVar59);
      }
      goto LAB_7fffa4ed4799;
    }
    param_2[3] = param_2[3] + uVar59;
    lVar47 = param_2[1];
  }
  iVar51 = (int)puVar41 - (int)piVar35;
  *(short *)(lVar47 + 4) = (short)uVar59;
  *(int *)param_2[1] = iVar51 + 3;
  lVar47 = param_2[1];
  uVar59 = lVar40 - 3;
  iStack_a4 = iStack_12c;
  goto joined_r0x7fffa4ed4b75;
code_r0x7fffa4ed41b7:
  lVar47 = lVar47 + 8;
  goto LAB_7fffa4ed4198;
code_r0x7fffa4ed4f0f:
  puVar41 = puVar41 + 1;
  lVar47 = lVar47 + 8;
  goto LAB_7fffa4ed4ee0;
LAB_7fffa4ed8aec:
  puVar56 = puStack_110;
  iVar31 = iStack_a4;
  goto LAB_7fffa4ed8b08;
}


// ============================================================================
// Function : FUN_7fffa4ed8b50  |  RVA: 0x768b50  |  Size: 35 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4ed8b66) */

uint64_t FUN_7fffa4ed8b50(void)

{
  uint32_t in_EAX;
  uint64_t uStack_8;
  
  uStack_8 = CONCAT44(0xa733b5ab,in_EAX);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa4ed8b80  |  RVA: 0x768b80  |  Size: 584 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4ed8b80(uint64_t param_1,uint64_t param_2,uint8_t param_3,uint64_t param_4)

{
  bool bVar1;
  uint32_t in_EAX;
  uint32_t uVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  
  param_3 = param_3 >> 2 ^ param_3;
  uVar5 = (param_4 >> 0x28) + 0xe598a09fff2cc505;
  param_3 = param_3 >> 4 ^ param_3;
  bVar3 = (uint8_t)in_EAX;
  uVar4 = (uint32_t)uVar5;
  if ((char)param_3 < '\b') {
    if ((char)((bVar3 | 1) * -0x4a + 'F') <= (char)param_3) {
      if ((char)param_3 < '\x06') {
        if (param_3 == 5) {
          uVar5 = uVar5 & 0x40;
          goto joined_r0x7fffa4ed8d09;
        }
        uVar5 = uVar5 & 0x40;
      }
      else {
        if (param_3 == 7) {
          uVar5 = uVar5 & 0x41;
joined_r0x7fffa4ed8d09:
          if (uVar5 == 0) {
            return;
          }
          return;
        }
        uVar5 = uVar5 & 0x41;
      }
      goto joined_r0x7fffa4ed8d4c;
    }
    if ((char)param_3 < '\x02') {
      uVar5 = uVar5 & 0x800;
      uVar4 = uVar4 & 0x800;
      if (param_3 == (uint8_t)(('s' - bVar3) * -0x55 + 0x1f)) {
        uVar2 = 0U >> (bVar3 & 0x1f) | 0 << 0x20 - (bVar3 & 0x1f);
LAB_7fffa4ed8d6a:
        if (uVar4 == uVar2) {
          return;
        }
        return;
      }
      goto joined_r0x7fffa4ed8d4c;
    }
    if (param_3 != 2) {
      uVar5 = uVar5 & 1;
      goto joined_r0x7fffa4ed8d09;
    }
  }
  else {
    if ((char)param_3 < '\f') {
      if ((char)param_3 < '\n') {
        if (param_3 != 8) {
          if ((char)uVar5 < '\0') {
            return;
          }
          return;
        }
        if ((char)uVar5 < '\0') {
          return;
        }
        return;
      }
      if ((char)((bVar3 | 1) * '7') <= (char)param_3) {
        uVar5 = uVar5 & 4;
        goto joined_r0x7fffa4ed8d09;
      }
      uVar5 = uVar5 & 4;
      goto joined_r0x7fffa4ed8d4c;
    }
    bVar1 = param_3 == 0xe;
    if ((uint64_t)((in_EAX ^ 0x1528258b) + 0x599fe6ab) < 0xffffffffe31215e3) {
      bVar1 = (char)param_3 < '\x0e';
    }
    if (bVar1) {
      if (param_3 != 0xc) {
        uVar4 = (uVar4 >> 7 ^ uVar4 >> 0xb) & 1;
        uVar2 = (in_EAX ^ 0x106cd) & 0xffff;
        goto LAB_7fffa4ed8d6a;
      }
      uVar5 = (uint64_t)(uVar4 >> 0xb ^ uVar4 >> 7);
    }
    else {
      uVar2 = (uint32_t)(uVar5 >> 0xb) & 0x1fffff;
      if ('\x0e' < (char)param_3) {
        if (((uVar4 >> 7 ^ uVar2 | uVar4 >> 6) & 1) == 0) {
          return;
        }
        return;
      }
      uVar5 = (uint64_t)(uVar4 >> 7 ^ uVar2 | uVar4 >> 6);
    }
  }
  uVar5 = uVar5 & 1;
joined_r0x7fffa4ed8d4c:
  if (uVar5 == 0) {
    return;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4ed8dd0  |  RVA: 0x768dd0  |  Size: 940 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4ed917c) */

uint64_t FUN_7fffa4ed8dd0(void)

{
  uRam00007fffa47baf90 = 0x1cf4a67178435e5d;
  uRam00007fffa47bafa0 = 0x41015fee9929c00a;
  uRam00007fffa47bafa8 = 0x597a27596d8ef0b5;
  uRam00007fffa47baf98 = 0xe0256b04a81749be;
  uRam00007fffa47bafb8 = 0x9391a2df54ac04ed;
  uRam00007fffa47bafb0 =
       (0x20585aada7893ed0U - lRam00007fffa4781550) * 0x800 ^
       0x20585aada7893ed0U - lRam00007fffa4781550;
  uRam00007fffa47bafb0 =
       uRam00007fffa47bafb0 << 0x16 ^ uRam00007fffa47bafb0 << 0x2c ^ uRam00007fffa47bafb0;
  uRam00007fffa47bafb0 =
       (uRam00007fffa47bafb0 << 0xf | uRam00007fffa47bafb0 >> 0x31) ^
       (uRam00007fffa47bafb0 << 0xd | uRam00007fffa47bafb0 >> 0x33) ^ uRam00007fffa47bafb0;
  uRam00007fffa47bafc0 = 0xfdbe0f1ccac1e326;
  uRam00007fffa47bafb0 =
       (uRam00007fffa47bafb0 << 0x1a | uRam00007fffa47bafb0 >> 0x26) ^
       (uRam00007fffa47bafb0 << 0x1e | uRam00007fffa47bafb0 >> 0x22) ^ uRam00007fffa47bafb0;
  uRam00007fffa47bafb0 =
       (uRam00007fffa47bafb0 << 0x34 | uRam00007fffa47bafb0 >> 0xc) ^
       (uRam00007fffa47bafb0 << 0x3c | uRam00007fffa47bafb0 >> 4) ^ uRam00007fffa47bafb0;
  uRam00007fffa47bafb0 =
       (uRam00007fffa47bafb0 << 0x28 | uRam00007fffa47bafb0 >> 0x18) ^
       (uRam00007fffa47bafb0 << 0x38 | uRam00007fffa47bafb0 >> 8) ^ uRam00007fffa47bafb0;
  uRam00007fffa47bafc8 = 0xf78a9f2d0b2857b0;
  uRam00007fffa47bafb0 =
       (uRam00007fffa47bafb0 << 0x10 | uRam00007fffa47bafb0 >> 0x30) ^
       (uRam00007fffa47bafb0 << 0x30 | uRam00007fffa47bafb0 >> 0x10) ^ uRam00007fffa47bafb0;
  return uRam00007fffa47bafb0;
}


// ============================================================================
// Function : FUN_7fffa4ed9184  |  RVA: 0x769184  |  Size: 35 bytes
// Callers  : FUN_7fffa569ad70@0xf2ad70, FUN_7fffa507ecd4@0x90ecd4, FUN_7fffa56a06d0@0xf306d0, FUN_7fffa56aab2c@0xf3ab2c, FUN_7fffa51450e0@0x9d50e0, FUN_7fffa5404bd0@0xc94bd0, FUN_7fffa5267990@0xaf7990, FUN_7fffa549ab90@0xd2ab90
// Callees  : FUN_7fffa4f5c658@0x7ec658
// ============================================================================
int64_t FUN_7fffa4ed9184(void)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = FUN_7fffa4f5c658();
  lVar2 = lVar1 + 0x20;
  if (lVar1 == 0) {
    lVar2 = 0x7fffa4780228;
  }
  return lVar2;
}


// ============================================================================
// Function : FUN_7fffa4ed91b0  |  RVA: 0x7691b0  |  Size: 846 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t FUN_7fffa4ed91b0(void)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  uint64_t in_RAX;
  uint64_t uVar4;
  int iVar5;
  uint32_t uVar6;
  int64_t lVar7;
  uint32_t unaff_ESI;
  int64_t lVar8;
  
  iVar5 = (unaff_ESI + ((unaff_ESI ^ 0xffffffff) & ~unaff_ESI)) * 0x21bbf79d;
  uVar6 = iVar5 + 0xf80865a0;
  *(uint8_t *)((int64_t)(int)(-0x29b475c9 - uVar6) + 0x7fffa47cdd32) = ~(((uint8_t)uVar6 | 1) * 'U');
  lVar8 = (int64_t)(int)(0x34a36c29 - (uVar6 ^ 0xe2e86bc2));
  *(uint8_t (*) [16])(lVar8 + 0x7fffa47c930f) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar8 + 0x7fffa47c931f) = 0;
  *(uint64_t *)((int64_t)(iVar5 + 0x21bb6ad2) + 0x7fffa47c8660) =
       (uint64_t)~((uVar6 ^ 0x29b391fc) << 0x16 | (uVar6 ^ 0x29b391fc) >> 10);
  uVar4 = rdtsc();
  lVar8 = (uVar4 & 0xffffffff00000000 | CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar4)) *
          0x706912aa51ca60d + 1;
  uVar4 = 0;
  while( true ) {
    lVar8 = lVar8 * 0x706912aa51ca60d + 1;
    *(char *)(uVar4 + (int64_t)(int)((uVar6 | 1) * -0x26822101) + 0x7fffa47cca63) =
         (char)((uint64_t)lVar8 >> 0x20);
    uVar2 = (uint16_t)uVar6;
    if (uVar4 == 0x3c) break;
    lVar8 = lVar8 * 0x706912aa51ca60d + 1;
    lVar7 = lVar8 * 0x706912aa51ca60d + 1;
    *(char *)((uVar4 | 2) + (int64_t)(short)(uVar2 ^ 0xb09a) + 0x7fffa47c1ac7) =
         (char)((uint64_t)lVar7 >> 0x20);
    *(char *)(uVar4 + (int64_t)(int)((0xd620d702 - uVar6) * 0x4000000 | 0xd620d702 - uVar6 >> 6) +
                      0x7fffa47ca7be) = (char)((uint64_t)lVar8 >> 0x20);
    lVar8 = lVar7 * 0x706912aa51ca60d + 1;
    *(char *)(uVar4 + (int64_t)(int)((uVar6 ^ 0xba62729a) * -0x1ffc76fb) + 0x7fffa47c8966) =
         (char)((uint64_t)lVar8 >> 0x20);
    uVar4 = uVar4 + 4;
  }
  bVar1 = (uint8_t)uVar6 & 0xf;
  uVar3 = (uint16_t)DAT_7fffa56b2670;
  lVar8 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(short)(0x879fU >> bVar1 | -0x7861 << 0x10 - bVar1) +
                          0x7fffa47c0873) * 0x55555556 + 0x55555556) * 3;
  *(uint64_t *)
   ((uint64_t)(uint32_t)((int)((uint64_t)lVar8 >> 0x20) * 8) +
   (int64_t)(short)((uVar2 + 0x5cd4) * 0x100 | (uint16_t)(uVar2 + 0x5cd4) >> 8) + 0x7fffa47c21ad) = 0
  ;
  *(char *)((int64_t)(short)((uVar2 | uVar3) * -0x24ea + -0xbc0) + 0x7fffa47bffe4) =
       (char)((uint64_t)lVar8 >> 0x20);
  return (int64_t)(iVar5 + 0x21bb33d3) + 0x7fffa47cbd2a;
}


// ============================================================================
// Function : FUN_7fffa4ed9510  |  RVA: 0x769510  |  Size: 143 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t * FUN_7fffa4ed9510(uint64_t *param_1,int64_t param_2)

{
  *param_1 = &PTR_FUN_7fffa56f3928;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_7fffa560b2b0(param_2 + 8,param_1 + 1,param_1 + 1,FUN_7fffa560b2b0,0xfffffffffffffffe);
  *param_1 = &PTR_FUN_7fffa56f52d8;
  return param_1;
}


// ============================================================================
// Function : Unwind@7fffa4ed95a0  |  RVA: 0x7695a0  |  Size: 46 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ed95a0(void)

{
  code *pcVar1;
  
  Unwind_7fffa56253e0();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa4ed95d0  |  RVA: 0x7695d0  |  Size: 232 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4ed95d0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint8_t bVar3;
  code *pcVar4;
  int64_t in_RAX;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t in_R9;
  int iVar7;
  int64_t lVar8;
  
  lVar8 = (in_R9 ^ 0xf7feb0c75cfca7b) * in_RAX * -0x7fdb8c3f;
  lVar2 = *(int64_t *)(lVar8 + 0x1fc5b791);
  if (lVar2 != 0) {
    iVar7 = 0x6cba4e3a - (uint32_t)in_R9;
    uVar5 = *(int64_t *)(lVar8 + 0x1fc5b7a1) - lVar2;
    lVar6 = lVar2;
    if (~(iVar7 * 2 | (uint32_t)(iVar7 < 0)) < uVar5) {
      lVar6 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (uint64_t)((lVar2 + -8) - lVar6)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar1 = uVar5 + 0x27;
      bVar3 = (uint8_t)in_R9 & 0x1f;
      uVar5 = (uint64_t)((uint32_t)uVar5 & 0x27);
      if ((uint64_t)(((uint32_t)in_R9 | 1) * -0x2fafecdc) <=
          (uint64_t)(int64_t)(int)(0x200e95ac << bVar3 | 0x200e95acU >> 0x20 - bVar3)) {
        uVar5 = uVar1;
      }
    }
    bVar3 = (uint8_t)in_R9 & 0x1f;
    (*(code *)(&UNK_7fffa508d4b4 + (int)(-0x292cc1 << bVar3 | 0xffd6d33fU >> 0x20 - bVar3)))
              (lVar6,uVar5);
    *(int64_t *)(lVar8 + 0x1fc5b791) = 0;
    *(uint64_t *)(lVar8 + 0x1fc5b799) = 0;
    *(uint64_t *)(lVar8 + 0x1fc5b7a1) = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4ed96c0  |  RVA: 0x7696c0  |  Size: 28847 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4ed96c0(void) {
    /* +0x7696c0 */ __asm { PUSH RBP }
    /* +0x7696c1 */ __asm { PUSH R13 }
    /* +0x7696c3 */ __asm { PUSH RBX }
    /* +0x7696c4 */ __asm { PUSH RSI }
    /* +0x7696c5 */ __asm { PUSH R12 }
    /* +0x7696c7 */ __asm { PUSH RDI }
    /* +0x7696c8 */ __asm { PUSH R15 }
    /* +0x7696ca */ __asm { PUSH R14 }
    /* +0x7696cc */ __asm { SUB RSP,0x2b8 }
    /* +0x7696d3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x7696db */ __asm { MOVDQA xmmword ptr [RBP + 0x220],XMM7 }
    /* +0x7696e3 */ __asm { MOVDQA xmmword ptr [RBP + 0x210],XMM8 }
    /* +0x7696ec */ __asm { MOVDQA xmmword ptr [RBP + 0x200],XMM6 }
    /* +0x7696f4 */ __asm { MOV qword ptr [RBP + 0x1f8],-0x2 }
    /* +0x7696ff */ __asm { MOV ESI,R11D }
    /* +0x769702 */ __asm { MOV R14,qword ptr [RBP + 0x2a0] }
    /* +0x769709 */ __asm { MOV R9D,0xe6a73670 }
    /* +0x76970f */ __asm { MOV R8,RAX }
    /* +0x769712 */ __asm { SHL R8,0x3b }
    /* +0x769716 */ __asm { SUB RAX,R8 }
    /* +0x769719 */ __asm { MOV R8,RAX }
    /* +0x76971c */ __asm { ROL R8,0x27 }
    /* +0x769720 */ __asm { XOR R8,RAX }
    /* +0x769723 */ __asm { MOV RDX,RAX }
    /* +0x769726 */ __asm { ROL RDX,0x1d }
    /* +0x76972a */ __asm { MOV AX,0x2b0c }
    /* +0x76972e */ __asm { MOVQ RCX,XMM3 }
    /* +0x769733 */ __asm { ROL RCX,0x28 }
    /* +0x769737 */ __asm { LEA R10,[RDX + R8*0x1] }
    /* +0x76973b */ __asm { IMUL EAX,EAX,0x785b }
    /* +0x769741 */ __asm { MOV R12D,R14D }
    /* +0x769744 */ __asm { OR R12D,0x1 }
    /* +0x769748 */ __asm { IMUL R9D,R12D }
    /* +0x76974c */ __asm { XOR R8,RDX }
    /* +0x76974f */ __asm { MOV EDX,0xe005728e }
    /* +0x769754 */ __asm { ADD R9D,0x2bc40713 }
    /* +0x76975b */ __asm { MOV R11D,0x1355e4bc }
    /* +0x769761 */ __asm { SUB R11D,EDX }
    /* +0x769764 */ __asm { MOV RDX,-0xce700342 }
    /* +0x76976e */ __asm { ADD RDX,RCX }
    /* +0x769771 */ __asm { MOV EBX,0xcc8999c2 }
    /* +0x769776 */ __asm { XOR RBX,RDX }
    /* +0x769779 */ __asm { SUB EAX,R14D }
    /* +0x76977c */ __asm { ROL R9D,0x1c }
    /* +0x769780 */ __asm { CMP R9,R11 }
    /* +0x769783 */ __asm { CMOVC R8,R10 }
    /* +0x769787 */ __asm { MOVZX R9D,AX }
    /* +0x76978b */ __asm { MOV RDX,R8 }
    /* +0x76978e */ __asm { ROL RDX,0x3a }
    /* +0x769792 */ __asm { MOV RCX,R8 }
    /* +0x769795 */ __asm { ROL RCX,0xe }
    /* +0x769799 */ __asm { XOR RCX,RDX }
    /* +0x76979c */ __asm { XOR RCX,R8 }
    /* +0x76979f */ __asm { MOV R8,RCX }
    /* +0x7697a2 */ __asm { ROL R8,0x34 }
    /* +0x7697a6 */ __asm { MOV RDX,RCX }
    /* +0x7697a9 */ __asm { ROL RDX,0x1c }
    /* +0x7697ad */ __asm { XOR RDX,R8 }
    /* +0x7697b0 */ __asm { XOR RDX,RCX }
    /* +0x7697b3 */ __asm { MOV R8,RDX }
    /* +0x7697b6 */ __asm { ROL R8,0x28 }
    /* +0x7697ba */ __asm { MOV RCX,RDX }
    /* +0x7697bd */ __asm { ROL RCX,0x38 }
    /* +0x7697c1 */ __asm { XOR RCX,R8 }
    /* +0x7697c4 */ __asm { XOR RCX,RDX }
    /* +0x7697c7 */ __asm { MOV R8,RCX }
    /* +0x7697ca */ __asm { ROL R8,0x10 }
    /* +0x7697ce */ __asm { MOV RDX,RCX }
    /* +0x7697d1 */ __asm { ROL RDX,0x30 }
    /* +0x7697d5 */ __asm { XOR RDX,R8 }
    /* +0x7697d8 */ __asm { XOR RDX,RCX }
    /* +0x7697db */ __asm { MOV R8,0x10008004002001 }
    /* +0x7697e5 */ __asm { IMUL R8,RDX }
    /* +0x7697e9 */ __asm { MOV qword ptr [RBP + 0x1f0],R8 }
    /* +0x7697f0 */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0x7697f4 */ __asm { MOV R8,-0x58f37b43cb36a2e3 }
    /* +0x7697fe */ __asm { CMP qword ptr [R9 + 0x18],R8 }
    /* +0x769802 */ __asm { NOP }
    /* +0x769803 */ __asm { NOP }
    /* +0x769804 */ __asm { NOP }
    /* +0x769805 */ __asm { NOP }
    /* +0x769806 */ __asm { NOP }
    /* +0x769807 */ __asm { PXOR XMM5,XMM5 }
    /* +0x76980b */ __asm { MOVDQU xmmword ptr [RBX],XMM5 }
    /* +0x76980f */ __asm { MOV qword ptr [RBX + 0x10],0x0 }
    /* +0x769817 */ __asm { MOV RDX,0x1f36b4bc0d13e4e3 }
    /* +0x769821 */ __asm { MOV RCX,0x1f44b4ce0d76e4d9 }
    /* +0x76982b */ __asm { LEA RAX,[RBP + 0x70] }
    /* +0x76982f */ __asm { MOV R9,-0x7c9a946e51875990 }
    /* +0x769839 */ __asm { MOV qword ptr [RBP + 0x70],RDX }
    /* +0x76983d */ __asm { MOV qword ptr [RBP + 0x170],R9 }
    /* +0x769844 */ __asm { MOV qword ptr [RBP + 0x78],R9 }
    /* +0x769848 */ __asm { XOR RCX,qword ptr [RAX] }
    /* +0x76984b */ __asm { MOV qword ptr [RBP + 0x1a8],0x4 }
    /* +0x769856 */ __asm { MOV qword ptr [RBP + 0x1b0],0x7 }
    /* +0x769861 */ __asm { MOV qword ptr [RBP + 0x198],RCX }
    /* +0x769868 */ __asm { MOV qword ptr [RBP + 0x1a0],0x0 }
    /* +0x769873 */ __asm { MOV dword ptr [RBP + -0x8],0x80008 }
    /* +0x76987a */ __asm { PUSHFQ }
    /* +0x76987b */ __asm { POP RDX }
    /* +0x76987c */ __asm { LEA R9,[RBP + 0x198] }
    /* +0x769883 */ __asm { MOV qword ptr [RBP],R9 }
    /* +0x769887 */ __asm { MOV qword ptr [RBP + 0x10],RDX }
    /* +0x76988b */ __asm { TEST EDX,0x100 }
    /* +0x769891 */ __asm { NOP }
    /* +0x769892 */ __asm { NOP }
    /* +0x769893 */ __asm { NOP }
    /* +0x769894 */ __asm { NOP }
    /* +0x769895 */ __asm { NOP }
    /* +0x769896 */ __asm { MOV dword ptr [RBP + 0x70],0xcb2536cc }
    /* +0x76989d */ __asm { MOV EAX,dword ptr [RBP + 0x70] }
    /* +0x7698a0 */ __asm { CMP EAX,0x630827f6 }
    /* +0x7698a5 */ __asm { JBE 0x7fffa4edb36b }
    /* +0x7698ab */ __asm { MOV R8D,0x71d93727 }
    /* +0x7698b1 */ __asm { SUB R8D,R14D }
    /* +0x7698b4 */ __asm { ROL R8D,0x14 }
    /* +0x7698b8 */ __asm { MOV EAX,0x12ce3775 }
    /* +0x7698bd */ __asm { XOR EAX,R14D }
    /* +0x7698c0 */ __asm { IMUL R10D,EAX,0x11a7076b }
    /* +0x7698c7 */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0x7698d1 */ __asm { MOV R13,-0x22b18422c4a9c65e }
    /* +0x7698db */ __asm { LEA R9,[RBP + -0x8] }
    /* +0x7698df */ __asm { CMP R10,R8 }
    /* +0x7698e2 */ __asm { JNC 0x7fffa4ed9961 }
    /* +0x7698e4 */ __asm { MOV EAX,0x985b4f21 }
    /* +0x7698e9 */ __asm { MOV qword ptr [RBP + 0x150],R9 }
    /* +0x7698f0 */ __asm { MOV dword ptr [RBP + 0x140],0x30 }
    /* +0x7698fa */ __asm { MOV R9,qword ptr [RBP + 0x1f0] }
    /* +0x769901 */ __asm { MOV qword ptr [RBP + 0x148],R9 }
    /* +0x769908 */ __asm { MOV dword ptr [RBP + 0x158],0x40 }
    /* +0x769912 */ __asm { MOVDQU xmmword ptr [RBP + 0x160],XMM5 }
    /* +0x76991a */ __asm { XOR EAX,0x730cfd1 }
    /* +0x76991f */ __asm { ROL EAX,0xa }
    /* +0x769922 */ __asm { IMUL EAX,R12D }
    /* +0x769926 */ __asm { MOVSXD R9,EAX }
    /* +0x769929 */ __asm { MOV qword ptr [RBP + 0x118],R9 }
    /* +0x769930 */ __asm { MOV dword ptr [RBP + 0x70],0x8ae3dd25 }
    /* +0x769937 */ __asm { MOV EAX,dword ptr [RBP + 0x70] }
    /* +0x76993a */ __asm { RDTSC }
    /* +0x76993c */ __asm { SHL RDX,0x20 }
    /* +0x769940 */ __asm { OR RDX,RAX }
    /* +0x769943 */ __asm { IMUL RDX,R11 }
    /* +0x769947 */ __asm { ADD RDX,R13 }
    /* +0x76994a */ __asm { MOV R10,RDX }
    /* +0x76994d */ __asm { SHR R10,0x2d }
    /* +0x769951 */ __asm { MOV RCX,RDX }
    /* +0x769954 */ __asm { SHR RCX,0x3b }
    /* +0x769958 */ __asm { SHR RDX,0x1b }
    /* +0x76995c */ __asm { XOR R10D,EDX }
    /* +0x76995f */ __asm { JMP 0x7fffa4ed99dc }
    /* +0x769961 */ __asm { MOV dword ptr [RBP + 0x140],0x30 }
    /* +0x76996b */ __asm { MOV EAX,dword ptr [RBP + 0x70] }
    /* +0x76996e */ __asm { MOV R8D,0xc1c3d2d2 }
    /* +0x769974 */ __asm { ADD R8D,0xaa3c2d30 }
    /* +0x76997b */ __asm { MOV ECX,R14D }
    /* +0x76997e */ __asm { ROL R8D,CL }
    /* +0x769981 */ __asm { MOV qword ptr [RBP + 0x118],R8 }
    /* +0x769988 */ __asm { MOV dword ptr [RBP + 0x70],0x8ae3dd25 }
    /* +0x76998f */ __asm { MOV dword ptr [RBP + 0x158],0x40 }
    /* +0x769999 */ __asm { RDTSC }
    /* +0x76999b */ __asm { SHL RDX,0x20 }
    /* +0x76999f */ __asm { OR RDX,RAX }
    /* +0x7699a2 */ __asm { MOV R8,qword ptr [RBP + 0x1f0] }
    /* +0x7699a9 */ __asm { MOV qword ptr [RBP + 0x148],R8 }
    /* +0x7699b0 */ __asm { MOVDQU xmmword ptr [RBP + 0x160],XMM5 }
    /* +0x7699b8 */ __asm { IMUL RDX,R11 }
    /* +0x7699bc */ __asm { LEA RCX,[RDX + R13*0x1] }
    /* +0x7699c0 */ __asm { MOV R10,RCX }
    /* +0x7699c3 */ __asm { SHR R10,0x1b }
    /* +0x7699c7 */ __asm { MOV R8,RCX }
    /* +0x7699ca */ __asm { SHR R8,0x2d }
    /* +0x7699ce */ __asm { XOR R10D,R8D }
    /* +0x7699d1 */ __asm { SHR RCX,0x3b }
    /* +0x7699d5 */ __asm { MOV qword ptr [RBP + 0x150],R9 }
    /* +0x7699dc */ __asm { ROR R10D,CL }
    /* +0x7699df */ __asm { AND R10D,0x3 }
    /* +0x7699e3 */ __asm { CMP R10D,0x2 }
    /* +0x7699e7 */ __asm { MOV qword ptr [RBP + 0x130],R12 }
    /* +0x7699ee */ __asm { MOV qword ptr [RBP + 0x30],RBX }
    /* +0x7699f2 */ __asm { MOV qword ptr [RBP + 0x40],R10 }
    /* +0x7699f6 */ __asm { JC 0x7fffa4ed9b6c }
    /* +0x7699fc */ __asm { CMP R10D,0x3 }
    /* +0x769a00 */ __asm { MOV RBX,-0x30ebf64fafbc6efb }
    /* +0x769a0a */ __asm { JZ 0x7fffa4ed9f25 }
    /* +0x769a10 */ __asm { LEA RDX,[0x7fffa47c3525] }
    /* +0x769a17 */ __asm { MOV R9,-0x3823f64c2d5450af }
    /* +0x769a21 */ __asm { CMP RDX,R9 }
    /* +0x769a24 */ __asm { NOP }
    /* +0x769a25 */ __asm { NOP }
    /* +0x769a26 */ __asm { NOP }
    /* +0x769a27 */ __asm { NOP }
    /* +0x769a28 */ __asm { NOP }
    /* +0x769a29 */ __asm { NOP }
    /* +0x769a2a */ __asm { NOP }
    /* +0x769a2b */ __asm { MOV EAX,0xee6cd17d }
    /* +0x769a30 */ __asm { IMUL EAX,EAX,0x6b8e11bb }
    /* +0x769a36 */ __asm { SUB EAX,R14D }
    /* +0x769a39 */ __asm { MOVZX R8D,uint8_t ptr [RDX + -0x6e98] }
    /* +0x769a41 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R8*0x4 + -0x6e88] }
    /* +0x769a4a */ __asm { ROL CL,0x4 }
    /* +0x769a4d */ __asm { MOV uint8_t ptr [RBP + 0x70],CL }
    /* +0x769a50 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R8*0x4 + -0x6e87] }
    /* +0x769a59 */ __asm { ROL CL,0x4 }
    /* +0x769a5c */ __asm { MOV uint8_t ptr [RBP + 0x71],CL }
    /* +0x769a5f */ __asm { MOVZX ECX,uint8_t ptr [RDX + R8*0x4 + -0x6e86] }
    /* +0x769a68 */ __asm { ROL CL,0x4 }
    /* +0x769a6b */ __asm { MOV uint8_t ptr [RBP + 0x72],CL }
    /* +0x769a6e */ __asm { MOVZX ECX,uint8_t ptr [RDX + R8*0x4 + -0x6e85] }
    /* +0x769a77 */ __asm { ROL CL,0x4 }
    /* +0x769a7a */ __asm { MOV uint8_t ptr [RBP + 0x73],CL }
    /* +0x769a7d */ __asm { MOV R10D,0x65e8ce72 }
    /* +0x769a83 */ __asm { XOR R10D,dword ptr [RBP + 0x70] }
    /* +0x769a87 */ __asm { IMUL R9D,EAX,-0x3fffff71 }
    /* +0x769a8e */ __asm { XOR R9D,dword ptr [RBP + 0x118] }
    /* +0x769a95 */ __asm { MOV EAX,dword ptr [R9] }
    /* +0x769a98 */ __asm { BT R10D,EAX }
    /* +0x769a9c */ __asm { JNC 0x7fffa4eda8be }
    /* +0x769aa2 */ __asm { LEA RDX,[0x7fffa47c2279] }
    /* +0x769aa9 */ __asm { MOV R9,0x7b5e93511f88bc8c }
    /* +0x769ab3 */ __asm { CMP RDX,R9 }
    /* +0x769ab6 */ __asm { JZ 0x7fffa4edb37a }
    /* +0x769abc */ __asm { MOV qword ptr [RBP + 0x70],RCX }
    /* +0x769ac0 */ __asm { MOV R11W,0x26cb }
    /* +0x769ac5 */ __asm { MOV AX,0x4275 }
    /* +0x769ac9 */ __asm { XOR EAX,R14D }
    /* +0x769acc */ __asm { ROL AX,0xd }
    /* +0x769ad0 */ __asm { MOV RDI,qword ptr [RBP + 0x118] }
    /* +0x769ad7 */ __asm { XOR EAX,EDI }
    /* +0x769ad9 */ __asm { MOVZX R10D,AX }
    /* +0x769add */ __asm { MOV R8W,0x66d1 }
    /* +0x769ae2 */ __asm { MOV R9W,0xf8a6 }
    /* +0x769ae7 */ __asm { MOV EAX,dword ptr [RDX + -0x5df1] }
    /* +0x769aed */ __asm { MOV EDX,0x7c3bc959 }
    /* +0x769af2 */ __asm { XOR EDX,0x66376a5b }
    /* +0x769af8 */ __asm { MOV ECX,R14D }
    /* +0x769afb */ __asm { ROR EDX,CL }
    /* +0x769afd */ __asm { XOR R9D,0x197d }
    /* +0x769b04 */ __asm { MOV R15W,0x6a71 }
    /* +0x769b09 */ __asm { XOR R15D,0x3762 }
    /* +0x769b10 */ __asm { ROR R15W,CL }
    /* +0x769b14 */ __asm { MOV ECX,EDI }
    /* +0x769b16 */ __asm { ROR R9W,CL }
    /* +0x769b1a */ __asm { SUB R15D,EDI }
    /* +0x769b1d */ __asm { MOVZX ECX,R15W }
    /* +0x769b21 */ __asm { XOR R11D,R14D }
    /* +0x769b24 */ __asm { ADD R11D,EDI }
    /* +0x769b27 */ __asm { MOVZX R11D,R11W }
    /* +0x769b2b */ __asm { MOV R15D,R14D }
    /* +0x769b2e */ __asm { OR R15D,0x1 }
    /* +0x769b32 */ __asm { IMUL R9D,R15D }
    /* +0x769b36 */ __asm { MOVZX R9D,R9W }
    /* +0x769b3a */ __asm { IMUL R8D,R8D,0x77ff }
    /* +0x769b41 */ __asm { ADD R8D,EDI }
    /* +0x769b44 */ __asm { IMUL R8D,R15D }
    /* +0x769b48 */ __asm { ROL R8W,0xd }
    /* +0x769b4d */ __asm { MOVZX R8D,R8W }
    /* +0x769b51 */ __asm { ADD EDX,EDI }
    /* +0x769b53 */ __asm { MOV dword ptr [RSP + 0x58],R11D }
    /* +0x769b58 */ __asm { MOV dword ptr [RSP + 0x48],R8D }
    /* +0x769b5d */ __asm { MOV dword ptr [RSP + 0x40],R9D }
    /* +0x769b62 */ __asm { MOV dword ptr [RSP + 0x38],R10D }
    /* +0x769b67 */ __asm { JMP 0x7fffa4eda32f }
    /* +0x769b6c */ __asm { MOV R15D,R14D }
    /* +0x769b6f */ __asm { OR R15D,0x1 }
    /* +0x769b73 */ __asm { MOV AX,0x8f13 }
    /* +0x769b77 */ __asm { IMUL EAX,R15D }
    /* +0x769b7b */ __asm { NOT EAX }
    /* +0x769b7d */ __asm { MOV R13,qword ptr [RBP + 0x118] }
    /* +0x769b84 */ __asm { MOV ECX,R13D }
    /* +0x769b87 */ __asm { ROL AX,CL }
    /* +0x769b8a */ __asm { MOVZX EAX,AX }
    /* +0x769b8d */ __asm { CMP R10D,EAX }
    /* +0x769b90 */ __asm { JNZ 0x7fffa4eda338 }
    /* +0x769b96 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x769b9d */ __asm { MOV RDX,0x0 }
    /* +0x769ba4 */ __asm { MOV R10W,0x3135 }
    /* +0x769ba9 */ __asm { SUB R10D,R13D }
    /* +0x769bac */ __asm { XOR R10D,0xffffdee5 }
    /* +0x769bb3 */ __asm { MOV EBX,0xc70f5156 }
    /* +0x769bb8 */ __asm { MOV R11D,0x85526e69 }
    /* +0x769bbe */ __asm { XOR R11D,0x805cc3fb }
    /* +0x769bc5 */ __asm { SUB R11D,R13D }
    /* +0x769bc8 */ __asm { MOV ECX,R14D }
    /* +0x769bcb */ __asm { ROL R11D,CL }
    /* +0x769bce */ __asm { RDTSC }
    /* +0x769bd0 */ __asm { SHL RDX,0x20 }
    /* +0x769bd4 */ __asm { OR RDX,RAX }
    /* +0x769bd7 */ __asm { MOV R9,-0x6bdeac2e46be109b }
    /* +0x769be1 */ __asm { IMUL R9,RDX }
    /* +0x769be5 */ __asm { MOV R8,-0x49aa6514d4011a6e }
    /* +0x769bef */ __asm { ADD R8,R9 }
    /* +0x769bf2 */ __asm { LEA EDX,[R8 + R8*0x8] }
    /* +0x769bf6 */ __asm { LEA EAX,[RDX + RDX*0x2] }
    /* +0x769bf9 */ __asm { MOV R9,R8 }
    /* +0x769bfc */ __asm { SHR R9,0x3b }
    /* +0x769c00 */ __asm { MOV RCX,R8 }
    /* +0x769c03 */ __asm { SHR RCX,0x2d }
    /* +0x769c07 */ __asm { SHR R8,0x1b }
    /* +0x769c0b */ __asm { XOR R8D,ECX }
    /* +0x769c0e */ __asm { XOR EBX,R14D }
    /* +0x769c11 */ __asm { ADD EBX,0x4bf704bb }
    /* +0x769c17 */ __asm { MOV ECX,R13D }
    /* +0x769c1a */ __asm { ROL EBX,CL }
    /* +0x769c1c */ __asm { ADD R10D,0xffffc703 }
    /* +0x769c23 */ __asm { MOV EDX,R14D }
    /* +0x769c26 */ __asm { XOR EDX,R10D }
    /* +0x769c29 */ __asm { MOVSXD R10,EBX }
    /* +0x769c2c */ __asm { CMP R10,R11 }
    /* +0x769c2f */ __asm { CMOVC R9D,EAX }
    /* +0x769c33 */ __asm { MOV ECX,R9D }
    /* +0x769c36 */ __asm { ROR R8D,CL }
    /* +0x769c39 */ __asm { MOVZX R9D,DX }
    /* +0x769c3d */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0x769c41 */ __asm { MOV R10,0xcf7f1017703e5a2 }
    /* +0x769c4b */ __asm { MOV R9,qword ptr [R9 + 0x398] }
    /* +0x769c52 */ __asm { MOV RDX,0x275d7820e79a532b }
    /* +0x769c5c */ __asm { OR RDX,R9 }
    /* +0x769c5f */ __asm { NOT R10 }
    /* +0x769c62 */ __asm { ADD R10,R13 }
    /* +0x769c65 */ __asm { MOV ECX,R14D }
    /* +0x769c68 */ __asm { ROR R10,CL }
    /* +0x769c6b */ __asm { CMP RDX,R10 }
    /* +0x769c6e */ __asm { JZ 0x7fffa4edb33b }
    /* +0x769c74 */ __asm { CMP R8D,0x40947ca }
    /* +0x769c7b */ __asm { JA 0x7fffa4ed9e50 }
    /* +0x769c81 */ __asm { TEST dword ptr [RBP + 0x10],0x100 }
    /* +0x769c88 */ __asm { NOP }
    /* +0x769c89 */ __asm { NOP }
    /* +0x769c8a */ __asm { NOP }
    /* +0x769c8b */ __asm { NOP }
    /* +0x769c8c */ __asm { NOP }
    /* +0x769c8d */ __asm { NOP }
    /* +0x769c8e */ __asm { NOP }
    /* +0x769c8f */ __asm { NOP }
    /* +0x769c90 */ __asm { NOP }
    /* +0x769c91 */ __asm { NOP }
    /* +0x769c92 */ __asm { NOP }
    /* +0x769c93 */ __asm { NOP }
    /* +0x769c94 */ __asm { NOP }
    /* +0x769c95 */ __asm { NOP }
    /* +0x769c96 */ __asm { MOV dword ptr [RBP + 0x70],0xb7a85146 }
    /* +0x769c9d */ __asm { MOV EAX,dword ptr [RBP + 0x70] }
    /* +0x769ca0 */ __asm { MOV R10W,0x4f7c }
    /* +0x769ca5 */ __asm { ADD R10D,0x5f11 }
    /* +0x769cac */ __asm { MOV EDX,R14D }
    /* +0x769caf */ __asm { XOR EDX,R10D }
    /* +0x769cb2 */ __asm { IMUL R8D,EDX,0x64d7 }
    /* +0x769cb9 */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x769cc0 */ __asm { LEA R10D,[R9 + R8*0x1] }
    /* +0x769cc4 */ __asm { MOVZX R10D,R10W }
    /* +0x769cc8 */ __asm { CMP EAX,R10D }
    /* +0x769ccb */ __asm { NOP }
    /* +0x769ccc */ __asm { NOP }
    /* +0x769ccd */ __asm { NOP }
    /* +0x769cce */ __asm { NOP }
    /* +0x769ccf */ __asm { NOP }
    /* +0x769cd0 */ __asm { LEA RDX,[0x7fffa47c3690] }
    /* +0x769cd7 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x769cde */ __asm { MOV RCX,0x0 }
    /* +0x769ce5 */ __asm { MOV R9,-0xcf95dccf3eee4cd }
    /* +0x769cef */ __asm { CMP RDX,R9 }
    /* +0x769cf2 */ __asm { JZ 0x7fffa4edb382 }
    /* +0x769cf8 */ __asm { MOVZX R8D,uint8_t ptr [RDX + -0x6f47] }
    /* +0x769d00 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R8*0x4 + -0x6f41] }
    /* +0x769d09 */ __asm { NOT CL }
    /* +0x769d0b */ __asm { ROL CL,0x5 }
    /* +0x769d0e */ __asm { MOV uint8_t ptr [RBP + 0x70],CL }
    /* +0x769d11 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R8*0x4 + -0x6f40] }
    /* +0x769d1a */ __asm { NOT CL }
    /* +0x769d1c */ __asm { ROL CL,0x5 }
    /* +0x769d1f */ __asm { MOV uint8_t ptr [RBP + 0x71],CL }
    /* +0x769d22 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R8*0x4 + -0x6f3f] }
    /* +0x769d2b */ __asm { NOT CL }
    /* +0x769d2d */ __asm { ROL CL,0x5 }
    /* +0x769d30 */ __asm { MOV uint8_t ptr [RBP + 0x72],CL }
    /* +0x769d33 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R8*0x4 + -0x6f3e] }
    /* +0x769d3c */ __asm { NOT CL }
    /* +0x769d3e */ __asm { ROL CL,0x5 }
    /* +0x769d41 */ __asm { MOV uint8_t ptr [RBP + 0x73],CL }
    /* +0x769d44 */ __asm { MOV EAX,0x9102c3cc }
    /* +0x769d49 */ __asm { XOR EAX,dword ptr [RBP + 0x70] }
    /* +0x769d4c */ __asm { BT EAX,EAX }
    /* +0x769d4f */ __asm { JNC 0x7fffa4ed9e50 }
    /* +0x769d55 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM5 }
    /* +0x769d5a */ __asm { MOV dword ptr [RBP + 0xa0],0x9138a14b }
    /* +0x769d64 */ __asm { MOV EAX,dword ptr [RBP + 0xa0] }
    /* +0x769d6a */ __asm { MOV dword ptr [RBP + 0x70],0x0 }
    /* +0x769d71 */ __asm { MOV dword ptr [RBP + 0xa0],0x6f8f276a }
    /* +0x769d7b */ __asm { MOV EAX,dword ptr [RBP + 0xa0] }
    /* +0x769d81 */ __asm { TEST AL,0x1 }
    /* +0x769d83 */ __asm { NOP }
    /* +0x769d84 */ __asm { NOP }
    /* +0x769d85 */ __asm { NOP }
    /* +0x769d86 */ __asm { NOP }
    /* +0x769d87 */ __asm { NOP }
    /* +0x769d88 */ __asm { NOP }
    /* +0x769d89 */ __asm { NOP }
    /* +0x769d8a */ __asm { NOP }
    /* +0x769d8b */ __asm { NOP }
    /* +0x769d8c */ __asm { NOP }
    /* +0x769d8d */ __asm { MOV dword ptr [RBP + 0xa0],0x28f570ca }
    /* +0x769d97 */ __asm { MOV EAX,dword ptr [RBP + 0xa0] }
    /* +0x769d9d */ __asm { TEST EAX,EAX }
    /* +0x769d9f */ __asm { NOP }
    /* +0x769da0 */ __asm { NOP }
    /* +0x769da1 */ __asm { NOP }
    /* +0x769da2 */ __asm { NOP }
    /* +0x769da3 */ __asm { NOP }
    /* +0x769da4 */ __asm { NOP }
    /* +0x769da5 */ __asm { NOP }
    /* +0x769da6 */ __asm { NOP }
    /* +0x769da7 */ __asm { NOP }
    /* +0x769da8 */ __asm { NOP }
    /* +0x769da9 */ __asm { NOP }
    /* +0x769daa */ __asm { NOP }
    /* +0x769dab */ __asm { NOP }
    /* +0x769dac */ __asm { NOP }
    /* +0x769dad */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x769db4 */ __asm { MOV RDX,0x0 }
    /* +0x769dbb */ __asm { PUSHFQ }
    /* +0x769dbc */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x769dc4 */ __asm { POPFQ }
    /* +0x769dc5 */ __asm { LEA RAX,[0x7fffa47b826a] }
    /* +0x769dcc */ __asm { MOV R9,-0x25fa0e33e67648f7 }
    /* +0x769dd6 */ __asm { CMP RAX,R9 }
    /* +0x769dd9 */ __asm { JZ 0x7fffa4ee5ac6 }
    /* +0x769ddf */ __asm { MOV R10W,0x5820 }
    /* +0x769de4 */ __asm { MOV qword ptr [RBP + 0xa0],RDX }
    /* +0x769deb */ __asm { MOV DX,0x78db }
    /* +0x769def */ __asm { IMUL EDX,R15D }
    /* +0x769df3 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x769dfa */ __asm { ROR DX,CL }
    /* +0x769dfd */ __asm { ADD EDX,0x40d }
    /* +0x769e03 */ __asm { ROL DX,0xa }
    /* +0x769e07 */ __asm { MOVZX R9D,DX }
    /* +0x769e0b */ __asm { MOV R11D,ECX }
    /* +0x769e0e */ __asm { OR R11D,0x1 }
    /* +0x769e12 */ __asm { MOV R8W,0xed7f }
    /* +0x769e17 */ __asm { ADD R10D,0x325d }
    /* +0x769e1e */ __asm { IMUL R10D,R15D }
    /* +0x769e22 */ __asm { XOR R10D,ECX }
    /* +0x769e25 */ __asm { ROL R10W,0x8 }
    /* +0x769e2a */ __asm { ADD R8D,0xe4d }
    /* +0x769e31 */ __asm { MOV ECX,R14D }
    /* +0x769e34 */ __asm { ROL R8W,CL }
    /* +0x769e38 */ __asm { MOVZX EDX,R10W }
    /* +0x769e3c */ __asm { IMUL R8D,R11D }
    /* +0x769e40 */ __asm { MOVSX R10,R8W }
    /* +0x769e44 */ __asm { MOV EAX,dword ptr [RAX + 0x425e] }
    /* +0x769e4a */ __asm { LEA R8,[RBP + 0x70] }
    /* +0x769e4e */ __asm { SYSCALL }
    /* +0x769e50 */ __asm { LEA RAX,[0x7fffa47881e2] }
    /* +0x769e57 */ __asm { MOV R9,-0x47f927e3390bf47f }
    /* +0x769e61 */ __asm { CMP RAX,R9 }
    /* +0x769e64 */ __asm { NOP }
    /* +0x769e65 */ __asm { NOP }
    /* +0x769e66 */ __asm { NOP }
    /* +0x769e67 */ __asm { MOV EDX,0x9d0ca969 }
    /* +0x769e6c */ __asm { MOV R11W,0x77be }
    /* +0x769e71 */ __asm { MOV R10W,0xd934 }
    /* +0x769e76 */ __asm { SUB R10D,R14D }
    /* +0x769e79 */ __asm { IMUL R10D,R10D,0x27 }
    /* +0x769e7d */ __asm { MOV RDI,qword ptr [RBP + 0x118] }
    /* +0x769e84 */ __asm { MOV ECX,EDI }
    /* +0x769e86 */ __asm { ROL R10W,CL }
    /* +0x769e8a */ __asm { MOVZX R10D,R10W }
    /* +0x769e8e */ __asm { MOV qword ptr [RBP + 0x70],RCX }
    /* +0x769e92 */ __asm { MOV CX,0xece4 }
    /* +0x769e96 */ __asm { SUB ECX,R14D }
    /* +0x769e99 */ __asm { MOV EAX,dword ptr [RAX + -0x3b66] }
    /* +0x769e9f */ __asm { MOV R9W,0x16dd }
    /* +0x769ea4 */ __asm { ADD R9D,0xf61 }
    /* +0x769eab */ __asm { IMUL R8D,ECX,-0x4509 }
    /* +0x769eb2 */ __asm { MOV ECX,EDI }
    /* +0x769eb4 */ __asm { ROR R8W,CL }
    /* +0x769eb8 */ __asm { ROR R9W,CL }
    /* +0x769ebc */ __asm { IMUL EDX,EDX,-0x19b1c90b }
    /* +0x769ec2 */ __asm { MOVZX R8D,R8W }
    /* +0x769ec6 */ __asm { ADD R9D,R14D }
    /* +0x769ec9 */ __asm { MOVZX R9D,R9W }
    /* +0x769ecd */ __asm { MOV BX,0xbad6 }
    /* +0x769ed1 */ __asm { ADD EDX,0x1329b8a3 }
    /* +0x769ed7 */ __asm { ROR EDX,CL }
    /* +0x769ed9 */ __asm { IMUL R11D,R11D,-0x4d29 }
    /* +0x769ee0 */ __asm { ADD R11D,0xffff893f }
    /* +0x769ee7 */ __asm { XOR R11D,EDI }
    /* +0x769eea */ __asm { IMUL R11D,R15D }
    /* +0x769eee */ __asm { IMUL EBX,R15D }
    /* +0x769ef2 */ __asm { ROL BX,CL }
    /* +0x769ef5 */ __asm { MOVZX R11D,R11W }
    /* +0x769ef9 */ __asm { XOR EBX,0xffffbf9c }
    /* +0x769eff */ __asm { ADD EBX,0xffff92c1 }
    /* +0x769f05 */ __asm { MOVZX ECX,BX }
    /* +0x769f08 */ __asm { MOV dword ptr [RSP + 0x48],R10D }
    /* +0x769f0d */ __asm { MOV dword ptr [RSP + 0x30],R8D }
    /* +0x769f12 */ __asm { MOV dword ptr [RSP + 0x58],R11D }
    /* +0x769f17 */ __asm { MOV dword ptr [RSP + 0x38],R9D }
    /* +0x769f1c */ __asm { MOV dword ptr [RSP + 0x40],ECX }
    /* +0x769f20 */ __asm { JMP 0x7fffa4eda620 }
    /* +0x769f25 */ __asm { MOV EDX,0x572a4474 }
}


// ============================================================================
// Function : Unwind@7fffa4ee5ec0  |  RVA: 0x775ec0  |  Size: 3146 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4ee5ec0(void) {
    /* +0x775ec0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x775ec5 */ __asm { PUSH RBP }
    /* +0x775ec6 */ __asm { PUSH R13 }
    /* +0x775ec8 */ __asm { PUSH RBX }
    /* +0x775ec9 */ __asm { PUSH RSI }
    /* +0x775eca */ __asm { PUSH R12 }
    /* +0x775ecc */ __asm { PUSH RDI }
    /* +0x775ecd */ __asm { PUSH R15 }
    /* +0x775ecf */ __asm { PUSH R14 }
    /* +0x775ed1 */ __asm { SUB RSP,0x98 }
    /* +0x775ed8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x775edf */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM7 }
    /* +0x775ee5 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM8 }
    /* +0x775eec */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM6 }
    /* +0x775ef5 */ __asm { MOV EAX,0xbcfd6caa }
    /* +0x775efa */ __asm { ADD EAX,0x9c4bbb6f }
    /* +0x775eff */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x775f06 */ __asm { ROR EAX,CL }
    /* +0x775f08 */ __asm { MOV R9,qword ptr [RBP + 0x2a0] }
    /* +0x775f0f */ __asm { XOR EAX,R9D }
    /* +0x775f12 */ __asm { MOV dword ptr [RBP + 0x70],EAX }
    /* +0x775f15 */ __asm { MOV EAX,dword ptr [RBP + 0x70] }
    /* +0x775f18 */ __asm { TEST AL,0x1 }
    /* +0x775f1a */ __asm { NOP }
    /* +0x775f1b */ __asm { NOP }
    /* +0x775f1c */ __asm { NOP }
    /* +0x775f1d */ __asm { NOP }
    /* +0x775f1e */ __asm { NOP }
    /* +0x775f1f */ __asm { MOV R10W,0xcbc5 }
    /* +0x775f24 */ __asm { MOV R14,qword ptr [RBP + 0x18] }
    /* +0x775f28 */ __asm { RDTSC }
    /* +0x775f2a */ __asm { SHL RDX,0x20 }
    /* +0x775f2e */ __asm { OR RDX,RAX }
    /* +0x775f31 */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0x775f3b */ __asm { IMUL RDX,R9 }
    /* +0x775f3f */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0x775f49 */ __asm { ADD RDX,R9 }
    /* +0x775f4c */ __asm { MOV RCX,RDX }
    /* +0x775f4f */ __asm { SHR RCX,0x3b }
    /* +0x775f53 */ __asm { MOV R9,RDX }
    /* +0x775f56 */ __asm { SHR R9,0x1b }
    /* +0x775f5a */ __asm { SHR RDX,0x2d }
    /* +0x775f5e */ __asm { XOR EDX,R9D }
    /* +0x775f61 */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x775f68 */ __asm { MOV R11D,R9D }
    /* +0x775f6b */ __asm { OR R11D,0x1 }
    /* +0x775f6f */ __asm { MOV R9,qword ptr [RBP + 0x2a0] }
    /* +0x775f76 */ __asm { SUB R10D,R9D }
    /* +0x775f79 */ __asm { IMUL EAX,R10D,-0x873 }
    /* +0x775f80 */ __asm { ADD EAX,0xffffad75 }
    /* +0x775f85 */ __asm { ROR EDX,CL }
    /* +0x775f87 */ __asm { IMUL EAX,R11D }
    /* +0x775f8b */ __asm { MOVZX EAX,AX }
    /* +0x775f8e */ __asm { AND EDX,0x3 }
    /* +0x775f91 */ __asm { CMP EDX,EAX }
    /* +0x775f93 */ __asm { JC 0x7fffa4ee62d9 }
    /* +0x775f99 */ __asm { CMP EDX,0x3 }
    /* +0x775f9c */ __asm { JZ 0x7fffa4ee6365 }
    /* +0x775fa2 */ __asm { RDTSC }
    /* +0x775fa4 */ __asm { SHL RDX,0x20 }
    /* +0x775fa8 */ __asm { OR RDX,RAX }
    /* +0x775fab */ __asm { MOV R9,-0x5b596a0ee0e87373 }
    /* +0x775fb5 */ __asm { IMUL R9,RDX }
    /* +0x775fb9 */ __asm { MOV R8,-0x7069a5359130d3ea }
    /* +0x775fc3 */ __asm { ADD R8,R9 }
    /* +0x775fc6 */ __asm { MOV R9,R8 }
    /* +0x775fc9 */ __asm { SHR R9,0x1b }
    /* +0x775fcd */ __asm { MOV RCX,R8 }
    /* +0x775fd0 */ __asm { SHR RCX,0x3b }
    /* +0x775fd4 */ __asm { SHR R8,0x2d }
    /* +0x775fd8 */ __asm { XOR R8D,R9D }
    /* +0x775fdb */ __asm { ROR R8D,CL }
    /* +0x775fde */ __asm { MOV dword ptr [RBP + 0x70],0x451fe30d }
    /* +0x775fe5 */ __asm { MOV EAX,dword ptr [RBP + 0x70] }
    /* +0x775fe8 */ __asm { CMP R8D,0x115ef5 }
    /* +0x775fef */ __asm { JA 0x7fffa4ee62b0 }
    /* +0x775ff5 */ __asm { MOV dword ptr [RBP + 0x70],0x7fd37cfb }
    /* +0x775ffc */ __asm { MOV EAX,dword ptr [RBP + 0x70] }
    /* +0x775fff */ __asm { MOV R10W,0xca2f }
    /* +0x776004 */ __asm { ADD R10D,dword ptr [RBP + 0x118] }
    /* +0x77600b */ __asm { ROL R10W,0x4 }
    /* +0x776010 */ __asm { IMUL R10D,R10D,0x2ef }
    /* +0x776017 */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x77601e */ __asm { ROR R10W,CL }
    /* +0x776022 */ __asm { AND EAX,0x1 }
    /* +0x776025 */ __asm { MOVZX R10D,R10W }
    /* +0x776029 */ __asm { CMP EAX,R10D }
    /* +0x77602c */ __asm { NOP }
    /* +0x77602d */ __asm { NOP }
    /* +0x77602e */ __asm { NOP }
    /* +0x77602f */ __asm { NOP }
    /* +0x776030 */ __asm { NOP }
    /* +0x776031 */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x776038 */ __asm { OR R9,0x1 }
    /* +0x77603c */ __asm { LEA RDX,[0x7fffa47bbf2e] }
    /* +0x776043 */ __asm { MOV R8,qword ptr [RBP + 0x2a0] }
    /* +0x77604a */ __asm { OR R8,0x1 }
    /* +0x77604e */ __asm { MOV R10,-0x22561ee8f8622d05 }
    /* +0x776058 */ __asm { XOR R10,0x68c9e55f }
    /* +0x77605f */ __asm { IMUL R10,R9 }
    /* +0x776063 */ __asm { MOV R9D,0xe26a8ce8 }
    /* +0x776069 */ __asm { XOR R9,R10 }
    /* +0x77606c */ __asm { IMUL R9,R8 }
    /* +0x776070 */ __asm { CMP RDX,R9 }
    /* +0x776073 */ __asm { NOP }
    /* +0x776074 */ __asm { NOP }
    /* +0x776075 */ __asm { NOP }
    /* +0x776076 */ __asm { NOP }
    /* +0x776077 */ __asm { NOP }
    /* +0x776078 */ __asm { MOV AX,0x26cb }
    /* +0x77607c */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x776083 */ __asm { MOV R10D,ECX }
    /* +0x776086 */ __asm { MOV R15,qword ptr [RBP + 0x2a0] }
    /* +0x77608d */ __asm { SUB R10D,R15D }
    /* +0x776090 */ __asm { MOV R9D,0xe4e7c9b7 }
    /* +0x776096 */ __asm { ADD R9D,R10D }
    /* +0x776099 */ __asm { NOT R9D }
    /* +0x77609c */ __asm { MOV R10W,0x8fd9 }
    /* +0x7760a1 */ __asm { XOR R10D,0x6634 }
    /* +0x7760a8 */ __asm { ROR R10W,CL }
    /* +0x7760ac */ __asm { XOR EAX,R15D }
    /* +0x7760af */ __asm { ADD EAX,ECX }
    /* +0x7760b1 */ __asm { SUB R10D,R15D }
    /* +0x7760b4 */ __asm { MOVZX R10D,R10W }
    /* +0x7760b8 */ __asm { MOV RCX,RDX }
    /* +0x7760bb */ __asm { IMUL EAX,EAX,-0x23d9 }
    /* +0x7760c1 */ __asm { ROL AX,0x5 }
    /* +0x7760c5 */ __asm { ADD RCX,R10 }
    /* +0x7760c8 */ __asm { MOV R8D,0x1c381072 }
    /* +0x7760ce */ __asm { IMUL R8D,R8D,-0x6684f975 }
    /* +0x7760d5 */ __asm { NOT R8D }
    /* +0x7760d8 */ __asm { ADD R8D,R15D }
    /* +0x7760db */ __asm { ROL R8D,0x1a }
    /* +0x7760df */ __asm { MOVSXD R8,R8D }
    /* +0x7760e2 */ __asm { MOVZX EDX,uint8_t ptr [RDX + R10*0x1 + 0x9] }
    /* +0x7760e8 */ __asm { MOVZX R10D,uint8_t ptr [RCX + RDX*0x4 + 0xf] }
    /* +0x7760ee */ __asm { NOT R10B }
    /* +0x7760f1 */ __asm { ROL R10B,0x5 }
    /* +0x7760f5 */ __asm { MOV uint8_t ptr [RBP + 0x70],R10B }
    /* +0x7760f9 */ __asm { MOVZX R10D,uint8_t ptr [RCX + RDX*0x4 + 0x10] }
    /* +0x7760ff */ __asm { NOT R10B }
    /* +0x776102 */ __asm { ROL R10B,0x5 }
    /* +0x776106 */ __asm { MOV uint8_t ptr [RBP + 0x71],R10B }
    /* +0x77610a */ __asm { MOVZX R10D,uint8_t ptr [RCX + RDX*0x4 + 0x11] }
    /* +0x776110 */ __asm { NOT R10B }
    /* +0x776113 */ __asm { ROL R10B,0x5 }
    /* +0x776117 */ __asm { MOV uint8_t ptr [RBP + 0x72],R10B }
    /* +0x77611b */ __asm { MOVZX ECX,uint8_t ptr [RCX + RDX*0x4 + 0x12] }
    /* +0x776120 */ __asm { NOT CL }
    /* +0x776122 */ __asm { ROL CL,0x5 }
    /* +0x776125 */ __asm { MOVZX EAX,AX }
    /* +0x776128 */ __asm { MOV uint8_t ptr [RBP + 0x73],CL }
    /* +0x77612b */ __asm { MOV R10D,0x9102c3cc }
    /* +0x776131 */ __asm { XOR R10D,dword ptr [RBP + 0x70] }
    /* +0x776135 */ __asm { MOV ECX,R10D }
    /* +0x776138 */ __asm { AND ECX,0x1f }
    /* +0x77613b */ __asm { MOV EDX,ECX }
    /* +0x77613d */ __asm { XOR EDX,0x1 }
    /* +0x776140 */ __asm { MOV EDI,0x1 }
    /* +0x776145 */ __asm { SHL EDI,CL }
    /* +0x776147 */ __asm { CMP R9,R8 }
    /* +0x77614a */ __asm { CMOVL EDI,EDX }
    /* +0x77614d */ __asm { AND EDI,R10D }
    /* +0x776150 */ __asm { CMP EDI,EAX }
    /* +0x776152 */ __asm { JZ 0x7fffa4ee62b0 }
    /* +0x776158 */ __asm { PXOR XMM5,XMM5 }
    /* +0x77615c */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM5 }
    /* +0x776161 */ __asm { PUSHFQ }
    /* +0x776162 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x77616a */ __asm { POPFQ }
    /* +0x77616b */ __asm { MOV dword ptr [RBP + 0xa0],0xcbcbe3f7 }
    /* +0x776175 */ __asm { MOV EAX,dword ptr [RBP + 0xa0] }
    /* +0x77617b */ __asm { TEST EAX,EAX }
    /* +0x77617d */ __asm { JNS 0x7fffa4ee6b2f }
    /* +0x776183 */ __asm { MOV dword ptr [RBP + 0x70],0x0 }
    /* +0x77618a */ __asm { MOV dword ptr [RBP + 0xa0],0xa73402c4 }
    /* +0x776194 */ __asm { MOV EAX,dword ptr [RBP + 0xa0] }
    /* +0x77619a */ __asm { TEST EAX,EAX }
    /* +0x77619c */ __asm { JNS 0x7fffa4ee6b3c }
    /* +0x7761a2 */ __asm { MOV AX,0xf03a }
    /* +0x7761a6 */ __asm { PUSHFQ }
    /* +0x7761a7 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x7761af */ __asm { POPFQ }
    /* +0x7761b0 */ __asm { MOV R10,qword ptr [RBP + 0x2a0] }
    /* +0x7761b7 */ __asm { SUB EAX,R10D }
    /* +0x7761ba */ __asm { MOVZX R9D,AX }
    /* +0x7761be */ __asm { XOR R9,0x366 }
    /* +0x7761c5 */ __asm { MOV R8,qword ptr GS:[R9] }
    /* +0x7761c9 */ __asm { MOV EDX,0xc711850b }
    /* +0x7761ce */ __asm { MOV AX,0x335b }
    /* +0x7761d2 */ __asm { XOR EAX,R10D }
    /* +0x7761d5 */ __asm { ROL AX,0xe }
    /* +0x7761d9 */ __asm { NOT EAX }
    /* +0x7761db */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x7761e2 */ __asm { ADD R9D,EDX }
    /* +0x7761e5 */ __asm { ADD R9D,0x58c4fc2b }
    /* +0x7761ec */ __asm { XOR R9D,0xd12fa0bb }
    /* +0x7761f3 */ __asm { ADD R9D,R10D }
    /* +0x7761f6 */ __asm { MOV R9,qword ptr [R9] }
    /* +0x7761f9 */ __asm { MOVZX R10D,AX }
    /* +0x7761fd */ __asm { XOR R9,qword ptr [R10 + R8*0x1] }
    /* +0x776201 */ __asm { ROL R9,0xf }
    /* +0x776205 */ __asm { XOR R9,0x6bf96814 }
    /* +0x77620c */ __asm { MOV R8,-0x2c0d37561274a71 }
    /* +0x776216 */ __asm { CMP R9,R8 }
    /* +0x776219 */ __asm { NOP }
    /* +0x77621a */ __asm { NOP }
    /* +0x77621b */ __asm { NOP }
    /* +0x77621c */ __asm { NOP }
    /* +0x77621d */ __asm { NOP }
    /* +0x77621e */ __asm { LEA R8,[0x7fffa47bbb31] }
    /* +0x776225 */ __asm { MOV R9,-0x51348611d2851b07 }
    /* +0x77622f */ __asm { CMP R8,R9 }
    /* +0x776232 */ __asm { NOP }
    /* +0x776233 */ __asm { NOP }
    /* +0x776234 */ __asm { NOP }
    /* +0x776235 */ __asm { NOP }
    /* +0x776236 */ __asm { NOP }
    /* +0x776237 */ __asm { MOV R10W,0x6df3 }
    /* +0x77623c */ __asm { MOV AX,0x5be3 }
    /* +0x776240 */ __asm { MOV R9W,0x645e }
    /* +0x776245 */ __asm { MOV R15,qword ptr [RBP + 0x118] }
    /* +0x77624c */ __asm { XOR R9D,R15D }
    /* +0x77624f */ __asm { IMUL EDI,R10D,-0x2c2f }
    /* +0x776256 */ __asm { MOV R10W,0x8a2f }
    /* +0x77625b */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x776262 */ __asm { ROL R9W,CL }
    /* +0x776266 */ __asm { XOR R10D,R15D }
    /* +0x776269 */ __asm { ADD R9D,0xffffe70a }
    /* +0x776270 */ __asm { SUB EAX,ECX }
    /* +0x776272 */ __asm { MOV qword ptr [RBP + 0xa0],RDX }
    /* +0x776279 */ __asm { ADD EDI,ECX }
    /* +0x77627b */ __asm { ROL DI,0x3 }
    /* +0x77627f */ __asm { ROL AX,0xc }
    /* +0x776283 */ __asm { ROL R10W,0x5 }
    /* +0x776288 */ __asm { IMUL R11D,EAX }
    /* +0x77628c */ __asm { NOT R10D }
    /* +0x77628f */ __asm { MOVZX EDX,R10W }
    /* +0x776293 */ __asm { MOVSX R10,R9W }
    /* +0x776297 */ __asm { ADD EDI,R15D }
    /* +0x77629a */ __asm { MOVZX R9D,DI }
    /* +0x77629e */ __asm { MOVZX R11D,R11W }
    /* +0x7762a2 */ __asm { MOV EAX,dword ptr [R11 + R8*0x1 + 0x88] }
    /* +0x7762aa */ __asm { LEA R8,[RBP + 0x70] }
    /* +0x7762ae */ __asm { SYSCALL }
    /* +0x7762b0 */ __asm { LEA RDX,[0x7fffa477fafd] }
    /* +0x7762b7 */ __asm { MOV R9,-0x4560dae2ed77d37a }
    /* +0x7762c1 */ __asm { CMP RDX,R9 }
    /* +0x7762c4 */ __asm { JZ 0x7fffa4ee6b44 }
    /* +0x7762ca */ __asm { MOV qword ptr [RBP + 0x70],RCX }
    /* +0x7762ce */ __asm { MOV EAX,dword ptr [RDX + 0x535f] }
    /* +0x7762d4 */ __asm { JMP 0x7fffa4ee6b00 }
    /* +0x7762d9 */ __asm { CMP EDX,0x1 }
    /* +0x7762dc */ __asm { JZ 0x7fffa4ee6425 }
    /* +0x7762e2 */ __asm { MOV EDX,0x1c3cc6b7 }
    /* +0x7762e7 */ __asm { MOV R9,0x730145d6c5f871d5 }
    /* +0x7762f1 */ __asm { CMP RDX,R9 }
    /* +0x7762f4 */ __asm { NOP }
    /* +0x7762f5 */ __asm { NOP }
    /* +0x7762f6 */ __asm { NOP }
    /* +0x7762f7 */ __asm { NOP }
    /* +0x7762f8 */ __asm { NOP }
    /* +0x7762f9 */ __asm { NOP }
    /* +0x7762fa */ __asm { NOP }
    /* +0x7762fb */ __asm { NOP }
    /* +0x7762fc */ __asm { NOP }
    /* +0x7762fd */ __asm { NOP }
    /* +0x7762fe */ __asm { NOP }
    /* +0x7762ff */ __asm { NOP }
    /* +0x776300 */ __asm { NOP }
    /* +0x776301 */ __asm { NOP }
    /* +0x776302 */ __asm { NOP }
    /* +0x776303 */ __asm { NOP }
    /* +0x776304 */ __asm { NOP }
    /* +0x776365 */ __asm { MOV EDX,0xc176f07b }
    /* +0x77636a */ __asm { MOV RCX,RDX }
    /* +0x77636d */ __asm { ROL RCX,0x1b }
    /* +0x776371 */ __asm { MOV R9,-0x35494f1c9108308b }
    /* +0x77637b */ __asm { IMUL R9,RCX }
    /* +0x77637f */ __asm { ADD R9,-0x671e13d7 }
    /* +0x776386 */ __asm { MOV R8,-0x13a89e41a8ec812a }
    /* +0x776390 */ __asm { CMP R9,R8 }
    /* +0x776393 */ __asm { JZ 0x7fffa4ee6b4a }
    /* +0x776399 */ __asm { MOV R9D,dword ptr [RDX + -0x4178edb7] }
    /* +0x7763a0 */ __asm { MOV R8,0x5555555555555556 }
    /* +0x7763aa */ __asm { IMUL R8,R9 }
    /* +0x7763ae */ __asm { MOV R9,0x5555555555555555 }
    /* +0x7763b8 */ __asm { CMP R8,R9 }
    /* +0x7763bb */ __asm { JBE 0x7fffa4ee67b5 }
    /* +0x7763c1 */ __asm { LEA RDX,[0x7fffa47b8097] }
    /* +0x7763c8 */ __asm { MOV R9,0x3239a6c1177f5361 }
    /* +0x7763d2 */ __asm { IMUL R9,RDX }
    /* +0x7763d6 */ __asm { MOV R8,-0x18a09f090ec729c3 }
    /* +0x7763e0 */ __asm { ADD R8,R9 }
    /* +0x7763e3 */ __asm { MOV R9,0x5c866f77cffc3d63 }
    /* +0x7763ed */ __asm { CMP R8,R9 }
    /* +0x7763f0 */ __asm { JNZ 0x7fffa4ee63f4 }
    /* +0x7763f2 */ __asm { XOR BH,CL }
    /* +0x7763f4 */ __asm { MOV qword ptr [RBP + 0x70],RCX }
    /* +0x7763f8 */ __asm { MOV R8D,0x90ad1e84 }
    /* +0x7763fe */ __asm { XOR R8D,0x493c5866 }
    /* +0x776405 */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x77640c */ __asm { ROL R8D,CL }
    /* +0x77640f */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x776416 */ __asm { MOV EAX,R9D }
    /* +0x776419 */ __asm { OR EAX,0x1 }
    /* +0x77641c */ __asm { IMUL R8D,EAX }
    /* +0x776420 */ __asm { JMP 0x7fffa4ee67a8 }
    /* +0x776425 */ __asm { MOV EAX,0xeebf106a }
    /* +0x77642a */ __asm { IMUL R9D,EAX,0x4e4a0c69 }
    /* +0x776431 */ __asm { MOV EDX,0xf8a89ed7 }
    /* +0x776436 */ __asm { MOV RAX,RDX }
    /* +0x776439 */ __asm { ROL RAX,0x37 }
    /* +0x77643d */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x776444 */ __asm { ROL R9D,CL }
    /* +0x776447 */ __asm { MOV R8,qword ptr [RBP + 0x2a0] }
    /* +0x77644e */ __asm { ADD R9D,R8D }
    /* +0x776451 */ __asm { XOR R9D,0xbce5dc3c }
    /* +0x776458 */ __asm { XOR R9,RAX }
    /* +0x77645b */ __asm { ADD R9,0x114aafea }
    /* +0x776462 */ __asm { MOV R8,0x37491b5bda011d78 }
    /* +0x77646c */ __asm { CMP R9,R8 }
    /* +0x77646f */ __asm { NOP }
    /* +0x776470 */ __asm { NOP }
    /* +0x776471 */ __asm { NOP }
    /* +0x776472 */ __asm { NOP }
    /* +0x776473 */ __asm { NOP }
    /* +0x776474 */ __asm { MOV RCX,0x0 }
    /* +0x77647b */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x776482 */ __asm { MOV R9D,dword ptr [RDX + -0x78aa9c13] }
    /* +0x776489 */ __asm { MOV R8,0x5555555555555556 }
    /* +0x776493 */ __asm { IMUL R9,R8 }
    /* +0x776497 */ __asm { MOV R10,0x5555555555555555 }
    /* +0x7764a1 */ __asm { CMP R9,R10 }
    /* +0x7764a4 */ __asm { JBE 0x7fffa4ee6a97 }
    /* +0x7764aa */ __asm { MOV EAX,0x8a6671a7 }
    /* +0x7764af */ __asm { MOV R15D,0x70fc68f0 }
    /* +0x7764b5 */ __asm { PUSHFQ }
    /* +0x7764b6 */ __asm { POP R12 }
    /* +0x7764b8 */ __asm { IMUL R13D,EAX,-0x533e1a55 }
    /* +0x7764bf */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x7764c6 */ __asm { ADD R13D,ECX }
    /* +0x7764c9 */ __asm { XOR R13D,0x70ab3097 }
    /* +0x7764d0 */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x7764d7 */ __asm { SUB R13D,R9D }
    /* +0x7764da */ __asm { SUB R15D,R9D }
    /* +0x7764dd */ __asm { RDTSC }
    /* +0x7764df */ __asm { SHL RDX,0x20 }
    /* +0x7764e3 */ __asm { OR RDX,RAX }
    /* +0x7764e6 */ __asm { MOV R9,-0x83d143f70980d4b }
    /* +0x7764f0 */ __asm { IMUL R9,RDX }
    /* +0x7764f4 */ __asm { MOV RAX,0x47b3a328553f4eda }
    /* +0x7764fe */ __asm { ADD RAX,R9 }
    /* +0x776501 */ __asm { MOV RDX,RAX }
    /* +0x776504 */ __asm { SHR RDX,0x2d }
    /* +0x776508 */ __asm { MOV R9,RAX }
    /* +0x77650b */ __asm { SHR R9,0x3b }
    /* +0x77650f */ __asm { ROR R15D,CL }
    /* +0x776512 */ __asm { ROL R15D,0x10 }
    /* +0x776516 */ __asm { SHR RAX,0x1b }
    /* +0x77651a */ __asm { MOV ECX,EAX }
    /* +0x77651c */ __asm { XOR ECX,EDX }
    /* +0x77651e */ __asm { ADD EAX,EDX }
    /* +0x776520 */ __asm { CMP R15,R13 }
    /* +0x776523 */ __asm { CMOVNC EAX,ECX }
    /* +0x776526 */ __asm { MOV ECX,R9D }
    /* +0x776529 */ __asm { ROR EAX,CL }
    /* +0x77652b */ __asm { TEST R12D,0x100 }
    /* +0x776532 */ __asm { NOP }
    /* +0x776533 */ __asm { NOP }
    /* +0x776534 */ __asm { NOP }
    /* +0x776535 */ __asm { NOP }
    /* +0x776536 */ __asm { NOP }
    /* +0x776537 */ __asm { MOV dword ptr [RBP + 0x70],0x1468f17e }
    /* +0x77653e */ __asm { MOV EDX,dword ptr [RBP + 0x70] }
    /* +0x776541 */ __asm { CMP EDX,0x308b989a }
    /* +0x776547 */ __asm { JNC 0x7fffa4ee6b55 }
    /* +0x77654d */ __asm { CMP EAX,0x42da98 }
    /* +0x776552 */ __asm { JA 0x7fffa4ee673e }
    /* +0x776558 */ __asm { MOV AX,0xe5d }
    /* +0x77655c */ __asm { ADD EAX,0xffff8e77 }
    /* +0x776561 */ __asm { IMUL EAX,R11D }
    /* +0x776565 */ __asm { MOV R9,qword ptr [RBP + 0x2a0] }
    /* +0x77656c */ __asm { SUB EAX,R9D }
    /* +0x77656f */ __asm { MOVZX R9D,AX }
    /* +0x776573 */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0x776577 */ __asm { MOV RAX,-0x519494d7cfd96cbb }
    /* +0x776581 */ __asm { CMP qword ptr [R9 + 0xa0],RAX }
    /* +0x776588 */ __asm { JNZ 0x7fffa4ee65a3 }
    /* +0x77658a */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x776591 */ __asm { MOV RDX,0x0 }
    /* +0x776598 */ __asm { CMP uint8_t ptr [RAX + 0x6d74661e],BL }
    /* +0x77659e */ __asm { MOV AH,0x70 }
    /* +0x7765a0 */ __asm { CMPSB RDI,RSI }
    /* +0x7765a1 */ __asm { CMP ECX,ESI }
    /* +0x7765a3 */ __asm { MOV EAX,0xc2820707 }
    /* +0x7765a8 */ __asm { MOV R9,-0x154da30db7585adc }
    /* +0x7765b2 */ __asm { MOV R11D,0x921d7753 }
    /* +0x7765b8 */ __asm { IMUL R11,R9 }
    /* +0x7765bc */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x7765c3 */ __asm { ROR R11,CL }
    /* +0x7765c6 */ __asm { MOV EDX,0xa84eefdd }
    /* +0x7765cb */ __asm { ADD EAX,ECX }
    /* +0x7765cd */ __asm { IMUL R9D,EAX,-0xb4acab9 }
    /* +0x7765d4 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x7765db */ __asm { ROR R9D,CL }
    /* +0x7765de */ __asm { ADD R9,RDX }
    /* +0x7765e1 */ __asm { XOR R9,0x4cd5e8b4 }
    /* +0x7765e8 */ __asm { SUB R11,RCX }
    /* +0x7765eb */ __asm { ROL R11,0x39 }
    /* +0x7765ef */ __asm { CMP R11,R9 }
    /* +0x7765f2 */ __asm { NOP }
    /* +0x7765f3 */ __asm { NOP }
    /* +0x7765f4 */ __asm { NOP }
    /* +0x7765f5 */ __asm { NOP }
    /* +0x7765f6 */ __asm { NOP }
    /* +0x7765f7 */ __asm { NOP }
    /* +0x7765f8 */ __asm { MOV RCX,0x0 }
    /* +0x7765ff */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x776606 */ __asm { MOV R9D,dword ptr [RDX + -0x2850ed19] }
    /* +0x77660d */ __asm { IMUL R9,R8 }
    /* +0x776611 */ __asm { CMP R9,R10 }
    /* +0x776614 */ __asm { JA 0x7fffa4ee673e }
    /* +0x77661a */ __asm { PXOR XMM5,XMM5 }
    /* +0x77661e */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM5 }
    /* +0x776623 */ __asm { MOV dword ptr [RBP + 0xa0],0x5187909c }
    /* +0x77662d */ __asm { MOV EAX,dword ptr [RBP + 0xa0] }
    /* +0x776633 */ __asm { MOV dword ptr [RBP + 0x70],0x0 }
    /* +0x77663a */ __asm { MOV AX,0x1376 }
    /* +0x77663e */ __asm { XOR EAX,0xffff94d3 }
    /* +0x776643 */ __asm { MOV R8,qword ptr [RBP + 0x2a0] }
    /* +0x77664a */ __asm { SUB EAX,R8D }
    /* +0x77664d */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x776654 */ __asm { ROR AX,CL }
    /* +0x776657 */ __asm { IMUL EAX,EAX,0x42c9 }
    /* +0x77665d */ __asm { MOVZX R9D,AX }
    /* +0x776661 */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0x776665 */ __asm { MOV AX,0xcc1b }
    /* +0x776669 */ __asm { XOR EAX,R8D }
    /* +0x77666c */ __asm { MOV R10D,0x212f }
    /* +0x776672 */ __asm { SUB R10D,EAX }
    /* +0x776675 */ __asm { MOVZX R8D,R10W }
    /* +0x776679 */ __asm { MOV R8,qword ptr GS:[R8] }
    /* +0x77667d */ __asm { ROL R9,0x14 }
    /* +0x776681 */ __asm { XOR R9,-0x39b280f7 }
    /* +0x776688 */ __asm { MOV R8,-0x3b2cd2b99229bc62 }
    /* +0x776692 */ __asm { CMP R9,R8 }
    /* +0x776695 */ __asm { JNZ 0x7fffa4ee66a3 }
    /* +0x776697 */ __asm { ENTER 0x8d25,0x1 }
    /* +0x77669b */ __asm { SAHF }
    /* +0x77669c */ __asm { MOV EBX,0x1fba1b5c }
    /* +0x7766a1 */ __asm { XCHG EAX,EDI }
    /* +0x7766a2 */ __asm { STC }
    /* +0x7766a3 */ __asm { MOV dword ptr [RBP + 0xa0],0x4400e7a8 }
    /* +0x7766ad */ __asm { MOV EAX,dword ptr [RBP + 0xa0] }
    /* +0x7766b3 */ __asm { LEA RAX,[0x7fffa4786411] }
    /* +0x7766ba */ __asm { MOV R9,-0x7ce82ef7cdf32b47 }
    /* +0x7766c4 */ __asm { CMP RAX,R9 }
    /* +0x7766c7 */ __asm { JZ 0x7fffa4ee6b6f }
    /* +0x7766cd */ __asm { MOV DX,0x90b3 }
    /* +0x7766d1 */ __asm { MOV R9,qword ptr [RBP + 0x2a0] }
    /* +0x7766d8 */ __asm { MOV R10D,R9D }
    /* +0x7766db */ __asm { OR R10D,0x1 }
    /* +0x7766df */ __asm { MOV R8D,0x6f088c01 }
    /* +0x7766e5 */ __asm { IMUL R8D,dword ptr [RBP + 0x130] }
    /* +0x7766ed */ __asm { MOV R11W,0x1b3d }
    /* +0x7766f2 */ __asm { IMUL R11D,R10D }
    /* +0x7766f6 */ __asm { XOR R8D,0x17b6d71a }
    /* +0x7766fd */ __asm { ADD EDX,0x6eac }
    /* +0x776703 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x77670a */ __asm { ROR DX,CL }
    /* +0x77670d */ __asm { MOVSXD R10,R8D }
    /* +0x776710 */ __asm { ROR DX,0x1 }
    /* +0x776713 */ __asm { NOT EDX }
    /* +0x776715 */ __asm { MOVZX EDX,DX }
    /* +0x776718 */ __asm { MOV qword ptr [RBP + 0xa0],R9 }
    /* +0x77671f */ __asm { MOV EAX,dword ptr [RAX + -0x1df5] }
    /* +0x776725 */ __asm { ROR R11W,CL }
    /* +0x776729 */ __asm { ROL R11W,0x1 }
    /* +0x77672d */ __asm { ADD R11D,0x667f }
    /* +0x776734 */ __asm { MOVZX R9D,R11W }
    /* +0x776738 */ __asm { LEA R8,[RBP + 0x70] }
    /* +0x77673c */ __asm { SYSCALL }
    /* +0x77673e */ __asm { LEA RDX,[0x7fffa4786458] }
    /* +0x776745 */ __asm { MOV R9,0x7aa929ea9df0d528 }
    /* +0x77674f */ __asm { CMP RDX,R9 }
    /* +0x776752 */ __asm { JZ 0x7fffa4ee6b77 }
    /* +0x776758 */ __asm { MOV qword ptr [RBP + 0x70],RCX }
    /* +0x77675c */ __asm { MOV EAX,dword ptr [RDX + -0x15fc] }
    /* +0x776762 */ __asm { JMP 0x7fffa4ee6b00 }
    /* +0x7767a8 */ __asm { MOV EAX,dword ptr [RDX + R8*0x1 + 0xd8] }
    /* +0x7767b0 */ __asm { JMP 0x7fffa4ee6b00 }
    /* +0x7767b5 */ __asm { RDTSC }
    /* +0x7767b7 */ __asm { SHL RDX,0x20 }
    /* +0x7767bb */ __asm { OR RDX,RAX }
    /* +0x7767be */ __asm { MOV EAX,0xa507ba23 }
    /* +0x7767c3 */ __asm { MOV R9,-0x6bdeac2e46be109b }
    /* +0x7767cd */ __asm { IMUL R9,RDX }
    /* +0x7767d1 */ __asm { MOV R8,-0xd59d6eb6f0ae7e6 }
    /* +0x7767db */ __asm { ADD R8,R9 }
}


// ============================================================================
// Function : Unwind@7fffa4ee6bd0  |  RVA: 0x776bd0  |  Size: 4210 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4ee6bd0(void) {
    /* +0x776bd0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x776bd5 */ __asm { PUSH RBP }
    /* +0x776bd6 */ __asm { PUSH R13 }
    /* +0x776bd8 */ __asm { PUSH RBX }
    /* +0x776bd9 */ __asm { PUSH RSI }
    /* +0x776bda */ __asm { PUSH R12 }
    /* +0x776bdc */ __asm { PUSH RDI }
    /* +0x776bdd */ __asm { PUSH R15 }
    /* +0x776bdf */ __asm { PUSH R14 }
    /* +0x776be1 */ __asm { SUB RSP,0x98 }
    /* +0x776be8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x776bef */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM7 }
    /* +0x776bf5 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM8 }
    /* +0x776bfc */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM6 }
    /* +0x776c05 */ __asm { MOV R14,qword ptr [RBP + 0x58] }
    /* +0x776c09 */ __asm { RDTSC }
    /* +0x776c0b */ __asm { SHL RDX,0x20 }
    /* +0x776c0f */ __asm { OR RDX,RAX }
    /* +0x776c12 */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0x776c1c */ __asm { IMUL RDX,R9 }
    /* +0x776c20 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0x776c2a */ __asm { ADD RDX,R9 }
    /* +0x776c2d */ __asm { MOV R9,RDX }
    /* +0x776c30 */ __asm { SHR R9,0x1b }
    /* +0x776c34 */ __asm { MOV RCX,RDX }
    /* +0x776c37 */ __asm { SHR RCX,0x3b }
    /* +0x776c3b */ __asm { SHR RDX,0x2d }
    /* +0x776c3f */ __asm { XOR R9D,EDX }
    /* +0x776c42 */ __asm { ROR R9D,CL }
    /* +0x776c45 */ __asm { AND R9D,0x3 }
    /* +0x776c49 */ __asm { CMP R9D,0x2 }
    /* +0x776c4d */ __asm { JNC 0x7fffa4ee6d85 }
    /* +0x776c53 */ __asm { CMP R9D,0x1 }
    /* +0x776c57 */ __asm { JZ 0x7fffa4ee6dfd }
    /* +0x776c5d */ __asm { LEA RDX,[0x7fffa47b5dc6] }
    /* +0x776c64 */ __asm { MOV R9,-0x4ff2ab201c6dc65 }
    /* +0x776c6e */ __asm { CMP RDX,R9 }
    /* +0x776c71 */ __asm { JZ 0x7fffa4ee7c1e }
    /* +0x776c77 */ __asm { MOV EAX,0x4f835ace }
    /* +0x776c7c */ __asm { MOV R10D,0xcda5bb4b }
    /* +0x776c82 */ __asm { MOV R8,qword ptr [RBP + 0x118] }
    /* +0x776c89 */ __asm { SUB R10D,R8D }
    /* +0x776c8c */ __asm { MOV R9D,0x2eeb2800 }
    /* +0x776c92 */ __asm { IMUL R9D,dword ptr [RBP + 0x130] }
    /* +0x776c9a */ __asm { ADD R9D,0x6b85be0f }
    /* +0x776ca1 */ __asm { ROL R9D,0x18 }
    /* +0x776ca5 */ __asm { XOR R9D,R8D }
    /* +0x776ca8 */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x776caf */ __asm { SUB R8D,ECX }
    /* +0x776cb2 */ __asm { ADD R8D,EAX }
    /* +0x776cb5 */ __asm { NOT R8D }
    /* +0x776cb8 */ __asm { ROR R10D,CL }
    /* +0x776cbb */ __asm { MOV EAX,0xd10d6843 }
    /* +0x776cc0 */ __asm { XOR RAX,R10 }
    /* +0x776cc3 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x776cca */ __asm { MOV RCX,0x0 }
    /* +0x776cd1 */ __asm { NOP }
    /* +0x776cd2 */ __asm { MOVZX ECX,uint8_t ptr [RDX + 0x68c7] }
    /* +0x776cd9 */ __asm { MOVZX R10D,uint8_t ptr [RDX + RCX*0x4 + 0x68d7] }
    /* +0x776ce2 */ __asm { ROL R10B,0x4 }
    /* +0x776ce6 */ __asm { MOV uint8_t ptr [RBP + 0x60],R10B }
    /* +0x776cea */ __asm { MOVZX R10D,uint8_t ptr [RDX + RCX*0x4 + 0x68d8] }
    /* +0x776cf3 */ __asm { ROL R10B,0x4 }
    /* +0x776cf7 */ __asm { MOV uint8_t ptr [RBP + 0x61],R10B }
    /* +0x776cfb */ __asm { MOVZX R10D,uint8_t ptr [RDX + RCX*0x4 + 0x68d9] }
    /* +0x776d04 */ __asm { ROL R10B,0x4 }
    /* +0x776d08 */ __asm { MOV uint8_t ptr [RBP + 0x62],R10B }
    /* +0x776d0c */ __asm { MOVZX ECX,uint8_t ptr [RDX + RCX*0x4 + 0x68da] }
    /* +0x776d14 */ __asm { ROL CL,0x4 }
    /* +0x776d17 */ __asm { MOV uint8_t ptr [RBP + 0x63],CL }
    /* +0x776d1a */ __asm { MOVZX ECX,uint8_t ptr [RAX] }
    /* +0x776d1d */ __asm { MOV EAX,0x1 }
    /* +0x776d22 */ __asm { SHL EAX,CL }
    /* +0x776d24 */ __asm { MOV R10D,0x65e8ce72 }
    /* +0x776d2a */ __asm { XOR R10D,dword ptr [RBP + 0x60] }
    /* +0x776d2e */ __asm { MOV EDX,R10D }
    /* +0x776d31 */ __asm { AND EDX,EAX }
    /* +0x776d33 */ __asm { SUB EAX,R10D }
    /* +0x776d36 */ __asm { CMP R8,R9 }
    /* +0x776d39 */ __asm { CMOVL EAX,EDX }
    /* +0x776d3c */ __asm { TEST EAX,EAX }
    /* +0x776d3e */ __asm { JNZ 0x7fffa4ee7095 }
    /* +0x776d44 */ __asm { LEA R8,[0x7fffa47c0bdf] }
    /* +0x776d4b */ __asm { MOV R9,0x5ad3ecd9e0eea215 }
    /* +0x776d55 */ __asm { CMP R8,R9 }
    /* +0x776d58 */ __asm { JNZ 0x7fffa4ee6d5e }
    /* +0x776d5a */ __asm { LOOP 0x7fffa4ee6da9 }
    /* +0x776d5c */ __asm { TEST AL,0xfc }
    /* +0x776d5e */ __asm { MOV EAX,0x181b3d1 }
    /* +0x776d63 */ __asm { MOV qword ptr [RBP + 0x60],RDX }
    /* +0x776d67 */ __asm { IMUL EAX,dword ptr [RBP + 0x178] }
    /* +0x776d6e */ __asm { XOR EAX,0xe5d6d930 }
    /* +0x776d73 */ __asm { MOV R9,qword ptr [RBP + 0x2a0] }
    /* +0x776d7a */ __asm { ADD EAX,R9D }
    /* +0x776d7d */ __asm { MOVSXD R9,EAX }
    /* +0x776d80 */ __asm { JMP 0x7fffa4ee7088 }
    /* +0x776d85 */ __asm { CMP R9D,0x3 }
    /* +0x776d89 */ __asm { JZ 0x7fffa4ee700a }
    /* +0x776d8f */ __asm { MOV EDX,0x9668e9de }
    /* +0x776d94 */ __asm { MOV R9,-0x685ed35ede0e6b98 }
    /* +0x776d9e */ __asm { CMP RDX,R9 }
    /* +0x776da1 */ __asm { NOP }
    /* +0x776da2 */ __asm { NOP }
    /* +0x776da3 */ __asm { NOP }
    /* +0x776da4 */ __asm { NOP }
    /* +0x776da5 */ __asm { NOP }
    /* +0x776da6 */ __asm { NOP }
    /* +0x776da7 */ __asm { NOP }
    /* +0x776da8 */ __asm { NOP }
    /* +0x776da9 */ __asm { NOP }
    /* +0x776daa */ __asm { NOP }
    /* +0x776dab */ __asm { NOP }
    /* +0x776dac */ __asm { MOV R9D,dword ptr [RDX + -0x166ae71a] }
    /* +0x776db3 */ __asm { MOV R8,0x5555555555555556 }
    /* +0x776dbd */ __asm { IMUL R9,R8 }
    /* +0x776dc1 */ __asm { MOV R8,0x5555555555555555 }
    /* +0x776dcb */ __asm { CMP R9,R8 }
    /* +0x776dce */ __asm { JA 0x7fffa4ee7325 }
    /* +0x776dd4 */ __asm { LEA RDX,[0x7fffa47b9cfc] }
    /* +0x776ddb */ __asm { MOV R9,0x3726a30c14ee1235 }
    /* +0x776de5 */ __asm { CMP RDX,R9 }
    /* +0x776de8 */ __asm { JZ 0x7fffa4ee7c26 }
    /* +0x776dee */ __asm { MOV qword ptr [RBP + 0x60],RCX }
    /* +0x776df2 */ __asm { MOV EAX,dword ptr [RDX + 0x333c] }
    /* +0x776df8 */ __asm { JMP 0x7fffa4ee7ae5 }
    /* +0x776dfd */ __asm { LEA RDX,[0x7fffa47c3ee1] }
    /* +0x776e04 */ __asm { MOV R9,-0x599f5dde9457ef09 }
    /* +0x776e0e */ __asm { SUB R9,qword ptr [RBP + 0x2a0] }
    /* +0x776e15 */ __asm { ADD R9,qword ptr [RBP + 0x118] }
    /* +0x776e1c */ __asm { ROL R9,0x6 }
    /* +0x776e20 */ __asm { CMP RDX,R9 }
    /* +0x776e23 */ __asm { JZ 0x7fffa4ee7c2e }
    /* +0x776e29 */ __asm { MOV R9D,0x57d03ab0 }
    /* +0x776e2f */ __asm { XOR R9D,0x8d7b2365 }
    /* +0x776e36 */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x776e3d */ __asm { ROL R9D,CL }
    /* +0x776e40 */ __asm { MOV R11,qword ptr [RBP + 0x118] }
    /* +0x776e47 */ __asm { XOR R9D,R11D }
    /* +0x776e4a */ __asm { MOV EAX,0x6c2bff09 }
    /* +0x776e4f */ __asm { XOR EAX,0x7a08bf96 }
    /* +0x776e54 */ __asm { IMUL EAX,EAX,-0x486d0da1 }
    /* +0x776e5a */ __asm { MOV R10D,0xb658b9d7 }
    /* +0x776e60 */ __asm { SUB R10D,R11D }
    /* +0x776e63 */ __asm { ROR R10D,0x1 }
    /* +0x776e66 */ __asm { NOT R10D }
    /* +0x776e69 */ __asm { MOV R8D,ECX }
    /* +0x776e6c */ __asm { SUB R8D,R11D }
    /* +0x776e6f */ __asm { ADD R8D,EAX }
    /* +0x776e72 */ __asm { LEA RAX,[RDX + -0x7862] }
    /* +0x776e79 */ __asm { ADD RDX,0x7862 }
    /* +0x776e80 */ __asm { CMP R10,R9 }
    /* +0x776e83 */ __asm { CMOVNZ RDX,RAX }
    /* +0x776e87 */ __asm { MOVZX ECX,uint8_t ptr [RDX + 0xe] }
    /* +0x776e8b */ __asm { MOVZX R9D,uint8_t ptr [RDX + RCX*0x4 + 0x1e] }
    /* +0x776e91 */ __asm { ROL R9B,0x4 }
    /* +0x776e95 */ __asm { MOV uint8_t ptr [RBP + 0x60],R9B }
    /* +0x776e99 */ __asm { MOVZX R9D,uint8_t ptr [RDX + RCX*0x4 + 0x1f] }
    /* +0x776e9f */ __asm { ROL R9B,0x4 }
    /* +0x776ea3 */ __asm { MOV uint8_t ptr [RBP + 0x61],R9B }
    /* +0x776ea7 */ __asm { MOVZX R9D,uint8_t ptr [RDX + RCX*0x4 + 0x20] }
    /* +0x776ead */ __asm { ROL R9B,0x4 }
    /* +0x776eb1 */ __asm { MOV uint8_t ptr [RBP + 0x62],R9B }
    /* +0x776eb5 */ __asm { MOVZX ECX,uint8_t ptr [RDX + RCX*0x4 + 0x21] }
    /* +0x776eba */ __asm { ROL CL,0x4 }
    /* +0x776ebd */ __asm { MOV uint8_t ptr [RBP + 0x63],CL }
    /* +0x776ec0 */ __asm { MOV R10D,0x65e8ce72 }
    /* +0x776ec6 */ __asm { XOR R10D,dword ptr [RBP + 0x60] }
    /* +0x776eca */ __asm { MOV R11D,dword ptr [R8] }
    /* +0x776ecd */ __asm { RDTSC }
    /* +0x776ecf */ __asm { SHL RDX,0x20 }
    /* +0x776ed3 */ __asm { OR RDX,RAX }
    /* +0x776ed6 */ __asm { BT R10D,R11D }
    /* +0x776eda */ __asm { JNC 0x7fffa4ee765c }
    /* +0x776ee0 */ __asm { MOV R9,0x6a5f7d7eeaa60c4a }
    /* +0x776eea */ __asm { MOV R8,qword ptr [RBP + 0x2a0] }
    /* +0x776ef1 */ __asm { OR R8,0x1 }
    /* +0x776ef5 */ __asm { IMUL R8,R9 }
    /* +0x776ef9 */ __asm { MOV R9,0x5851f42d4c957f2d }
    /* +0x776f03 */ __asm { IMUL RDX,R9 }
    /* +0x776f07 */ __asm { ROL R8,0x2c }
    /* +0x776f0b */ __asm { MOV R10D,0xd27228d5 }
    /* +0x776f11 */ __asm { IMUL R10,R8 }
    /* +0x776f15 */ __asm { ADD R10,qword ptr [RBP + 0x118] }
    /* +0x776f1c */ __asm { ADD R10,RDX }
    /* +0x776f1f */ __asm { MOV RCX,R10 }
    /* +0x776f22 */ __asm { SHR RCX,0x3b }
    /* +0x776f26 */ __asm { MOV R9,R10 }
    /* +0x776f29 */ __asm { SHR R9,0x2d }
    /* +0x776f2d */ __asm { SHR R10,0x1b }
    /* +0x776f31 */ __asm { XOR R9D,R10D }
    /* +0x776f34 */ __asm { ROR R9D,CL }
    /* +0x776f37 */ __asm { MOV dword ptr [RBP + 0x60],0x2baf7156 }
    /* +0x776f3e */ __asm { MOV EAX,dword ptr [RBP + 0x60] }
    /* +0x776f41 */ __asm { CMP EAX,0x1b523e05 }
    /* +0x776f46 */ __asm { NOP }
    /* +0x776f47 */ __asm { NOP }
    /* +0x776f48 */ __asm { NOP }
    /* +0x776f49 */ __asm { NOP }
    /* +0x776f4a */ __asm { CMP R9D,0x449cf9 }
    /* +0x776f51 */ __asm { JA 0x7fffa4ee7ac1 }
    /* +0x776f57 */ __asm { MOV dword ptr [RBP + 0x60],0x10053088 }
    /* +0x776f5e */ __asm { MOV EAX,dword ptr [RBP + 0x60] }
    /* +0x776f61 */ __asm { LEA RDX,[0x7fffa47c2ae9] }
    /* +0x776f68 */ __asm { MOV R9,0x441483c5852cfd46 }
    /* +0x776f72 */ __asm { CMP RDX,R9 }
    /* +0x776f75 */ __asm { JZ 0x7fffa4ee7c3c }
    /* +0x776f7b */ __asm { MOV EAX,0x8cee3e44 }
    /* +0x776f80 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x776f87 */ __asm { ADD EAX,ECX }
    /* +0x776f89 */ __asm { MOV R9D,0x32645dc3 }
    /* +0x776f8f */ __asm { SUB R9D,EAX }
    /* +0x776f92 */ __asm { MOV R8D,0x67a1611b }
    /* +0x776f98 */ __asm { IMUL R8D,dword ptr [RBP + 0x130] }
    /* +0x776fa0 */ __asm { XOR R8D,0xc7abc1c2 }
    /* +0x776fa7 */ __asm { ROR R8D,CL }
    /* +0x776faa */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x776fb1 */ __asm { ROL R9D,CL }
    /* +0x776fb4 */ __asm { CMP R8,R9 }
    /* +0x776fb7 */ __asm { JGE 0x7fffa4ee78de }
    /* +0x776fbd */ __asm { MOV R9D,0xd6b8fd36 }
    /* +0x776fc3 */ __asm { MOV R8,qword ptr [RBP + 0x2a0] }
    /* +0x776fca */ __asm { SUB R9D,R8D }
    /* +0x776fcd */ __asm { ADD R9D,dword ptr [RBP + 0x118] }
    /* +0x776fd4 */ __asm { ROL R9D,0x1d }
    /* +0x776fd8 */ __asm { MOV RCX,0x0 }
    /* +0x776fdf */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x776fe6 */ __asm { MOVZX ECX,uint8_t ptr [RDX + -0x63a0] }
    /* +0x776fed */ __asm { LEA R8,[RDX + RCX*0x4] }
    /* +0x776ff1 */ __asm { ADD R8,-0x639a }
    /* +0x776ff8 */ __asm { MOVZX ECX,uint8_t ptr [RDX + RCX*0x4 + -0x639a] }
    /* +0x777000 */ __asm { NOT CL }
    /* +0x777002 */ __asm { ROL CL,0x5 }
    /* +0x777005 */ __asm { JMP 0x7fffa4ee7932 }
    /* +0x77700a */ __asm { MOV R9D,0x9490ee42 }
    /* +0x777010 */ __asm { ADD R9D,0x66a911bd }
    /* +0x777017 */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x77701e */ __asm { ROR R9D,CL }
    /* +0x777021 */ __asm { NOT R9D }
    /* +0x777024 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x77702b */ __asm { ROL R9D,CL }
    /* +0x77702e */ __asm { LEA R8,[0x7fffa47b69ae] }
    /* +0x777035 */ __asm { SUB R9,R8 }
    /* +0x777038 */ __asm { MOV R10,-0x88ce4128 }
    /* +0x777042 */ __asm { ADD R10,R9 }
    /* +0x777045 */ __asm { MOV R9,0x4375e26c3beca892 }
    /* +0x77704f */ __asm { CMP R10,R9 }
    /* +0x777052 */ __asm { JZ 0x7fffa4ee7c50 }
    /* +0x777058 */ __asm { MOV R9D,0x46aeb024 }
    /* +0x77705e */ __asm { XOR R9D,0xc1d4fdb }
    /* +0x777065 */ __asm { ROL R9D,0x1e }
    /* +0x777069 */ __asm { MOV RDX,0x0 }
    /* +0x777070 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x777077 */ __asm { NOT R9D }
    /* +0x77707a */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x777081 */ __asm { ROL R9D,CL }
    /* +0x777084 */ __asm { MOV qword ptr [RBP + 0x60],RDX }
    /* +0x777088 */ __asm { MOV EAX,dword ptr [R9 + R8*0x1 + 0xd8] }
    /* +0x777090 */ __asm { JMP 0x7fffa4ee7ae5 }
    /* +0x777095 */ __asm { RDTSC }
    /* +0x777097 */ __asm { SHL RDX,0x20 }
    /* +0x77709b */ __asm { OR RDX,RAX }
    /* +0x77709e */ __asm { MOV R9,0x7facc0f7a00541bd }
    /* +0x7770a8 */ __asm { IMUL RDX,R9 }
    /* +0x7770ac */ __asm { MOV R8,0x6da27a95534aeb06 }
    /* +0x7770b6 */ __asm { ADD R8,RDX }
    /* +0x7770b9 */ __asm { MOV RCX,R8 }
    /* +0x7770bc */ __asm { SHR RCX,0x3b }
    /* +0x7770c0 */ __asm { MOV R9,R8 }
    /* +0x7770c3 */ __asm { SHR R9,0x2d }
    /* +0x7770c7 */ __asm { SHR R8,0x1b }
    /* +0x7770cb */ __asm { XOR R9D,R8D }
    /* +0x7770ce */ __asm { ROR R9D,CL }
    /* +0x7770d1 */ __asm { MOV dword ptr [RBP + 0x60],0xad6026bb }
    /* +0x7770d8 */ __asm { MOV EAX,dword ptr [RBP + 0x60] }
    /* +0x7770db */ __asm { CMP EAX,0xc4794186 }
    /* +0x7770e0 */ __asm { JNC 0x7fffa4ee7c57 }
    /* +0x7770e6 */ __asm { MOV EAX,0xb45408c7 }
    /* +0x7770eb */ __asm { ADD EAX,dword ptr [RBP + 0x118] }
    /* +0x7770f1 */ __asm { MOV R10D,0x97016c79 }
    /* +0x7770f7 */ __asm { SUB R10D,EAX }
    /* +0x7770fa */ __asm { CMP R9D,R10D }
    /* +0x7770fd */ __asm { JNC 0x7fffa4ee72fd }
    /* +0x777103 */ __asm { MOV dword ptr [RBP + 0x60],0xcbc4c524 }
    /* +0x77710a */ __asm { MOV EAX,dword ptr [RBP + 0x60] }
    /* +0x77710d */ __asm { TEST AL,0x1 }
    /* +0x77710f */ __asm { NOP }
    /* +0x777110 */ __asm { NOP }
    /* +0x777111 */ __asm { NOP }
    /* +0x777112 */ __asm { LEA RDX,[0x7fffa47c12ec] }
    /* +0x777119 */ __asm { MOV RAX,RDX }
    /* +0x77711c */ __asm { XOR RAX,0x18b44963 }
    /* +0x777122 */ __asm { ROL RAX,0x19 }
    /* +0x777126 */ __asm { MOV R9,0x2f0c0aa94a73d776 }
    /* +0x777130 */ __asm { XOR R9,-0x12662a68 }
    /* +0x777137 */ __asm { MOV R8,-0xa857db26 }
    /* +0x777141 */ __asm { ADD R8,R9 }
    /* +0x777144 */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x77714b */ __asm { ROL R8,CL }
    /* +0x77714e */ __asm { IMUL R8,RAX }
    /* +0x777152 */ __asm { MOV R9,0x95863a5f9927da2 }
    /* +0x77715c */ __asm { CMP R8,R9 }
    /* +0x77715f */ __asm { JZ 0x7fffa4ee7c5f }
    /* +0x777165 */ __asm { MOV AX,0x5b74 }
    /* +0x777169 */ __asm { IMUL EAX,EAX,0x45f3 }
    /* +0x77716f */ __asm { MOV R9,qword ptr [RBP + 0x2a0] }
    /* +0x777176 */ __asm { ADD EAX,R9D }
    /* +0x777179 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x777180 */ __asm { ROR AX,CL }
    /* +0x777183 */ __asm { ROR AX,0x1 }
    /* +0x777186 */ __asm { MOVZX R8D,uint8_t ptr [RDX + -0x4ba3] }
    /* +0x77718e */ __asm { MOVZX ECX,uint8_t ptr [RDX + R8*0x4 + -0x4b9d] }
    /* +0x777197 */ __asm { NOT CL }
    /* +0x777199 */ __asm { ROL CL,0x5 }
    /* +0x77719c */ __asm { MOV uint8_t ptr [RBP + 0x60],CL }
    /* +0x77719f */ __asm { MOVZX ECX,uint8_t ptr [RDX + R8*0x4 + -0x4b9c] }
    /* +0x7771a8 */ __asm { NOT CL }
    /* +0x7771aa */ __asm { ROL CL,0x5 }
    /* +0x7771ad */ __asm { MOV uint8_t ptr [RBP + 0x61],CL }
    /* +0x7771b0 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R8*0x4 + -0x4b9b] }
    /* +0x7771b9 */ __asm { NOT CL }
    /* +0x7771bb */ __asm { ROL CL,0x5 }
    /* +0x7771be */ __asm { MOV uint8_t ptr [RBP + 0x62],CL }
    /* +0x7771c1 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R8*0x4 + -0x4b9a] }
    /* +0x7771ca */ __asm { NOT CL }
    /* +0x7771cc */ __asm { ROL CL,0x5 }
    /* +0x7771cf */ __asm { MOV uint8_t ptr [RBP + 0x63],CL }
    /* +0x7771d2 */ __asm { MOV ECX,0x9102c3cc }
    /* +0x7771d7 */ __asm { XOR ECX,dword ptr [RBP + 0x60] }
    /* +0x7771da */ __asm { MOV R10D,0x1 }
    /* +0x7771e0 */ __asm { SHL R10D,CL }
    /* +0x7771e3 */ __asm { MOVZX EAX,AX }
    /* +0x7771e6 */ __asm { AND R10D,ECX }
    /* +0x7771e9 */ __asm { CMP R10D,EAX }
    /* +0x7771ec */ __asm { JZ 0x7fffa4ee72fd }
    /* +0x7771f2 */ __asm { XORPD XMM5,XMM5 }
    /* +0x7771f6 */ __asm { MOVAPD xmmword ptr [RBP + 0x60],XMM5 }
    /* +0x7771fb */ __asm { MOV RDX,0xb128896a1ad727d }
    /* +0x777205 */ __asm { MOV R9,0x7162c000248f94f }
    /* +0x77720f */ __asm { CMP RDX,R9 }
    /* +0x777212 */ __asm { NOP }
    /* +0x777213 */ __asm { NOP }
    /* +0x777214 */ __asm { NOP }
    /* +0x777215 */ __asm { NOP }
    /* +0x777216 */ __asm { NOP }
    /* +0x777217 */ __asm { MOV AX,0x9944 }
    /* +0x77721b */ __asm { MOV R9,qword ptr [RBP + 0x2a0] }
    /* +0x777222 */ __asm { XOR EAX,R9D }
    /* +0x777225 */ __asm { IMUL EAX,EAX,0x86f }
    /* +0x77722b */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x777232 */ __asm { ROR AX,CL }
    /* +0x777235 */ __asm { MOV dword ptr [RBP + 0x60],0x0 }
    /* +0x77723c */ __asm { MOVZX R9D,AX }
    /* +0x777240 */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0x777244 */ __asm { MOV R9,qword ptr [R9 + 0x60] }
    /* +0x777248 */ __asm { MOV RDX,0x5aa44cde8a893083 }
    /* +0x777252 */ __asm { XOR RDX,R9 }
    /* +0x777255 */ __asm { MOV R9,-0x546c5aa2a41a89d9 }
    /* +0x77725f */ __asm { CMP RDX,R9 }
    /* +0x777262 */ __asm { JZ 0x7fffa4ee7c0d }
    /* +0x777268 */ __asm { LEA RDX,[0x7fffa47bf059] }
    /* +0x77726f */ __asm { MOV RCX,RDX }
    /* +0x777272 */ __asm { NOT RCX }
    /* +0x777275 */ __asm { ROL RCX,0x12 }
    /* +0x777279 */ __asm { XOR RCX,-0x223c568e }
    /* +0x777280 */ __asm { MOV R9,0x60c6842714fbf623 }
    /* +0x77728a */ __asm { CMP RCX,R9 }
    /* +0x77728d */ __asm { JZ 0x7fffa4ee7c70 }
    /* +0x777293 */ __asm { MOV R11W,0x90d0 }
    /* +0x777298 */ __asm { MOV CX,0x25d0 }
    /* +0x77729c */ __asm { NOT ECX }
    /* +0x77729e */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x7772a5 */ __asm { ADD ECX,R9D }
    /* +0x7772a8 */ __asm { MOV AX,0xf76d }
    /* +0x7772ac */ __asm { SUB EAX,R9D }
    /* +0x7772af */ __asm { MOV R8D,dword ptr [RBP + 0x1b8] }
    /* +0x7772b6 */ __asm { IMUL EAX,R8D }
    /* +0x7772ba */ __asm { ADD EAX,0xffffff73 }
    /* +0x7772bf */ __asm { ROL AX,0x5 }
    /* +0x7772c3 */ __asm { MOVSX R10,AX }
    /* +0x7772c7 */ __asm { ADD R11D,0x9 }
    /* +0x7772cb */ __asm { XOR R11D,R9D }
    /* +0x7772ce */ __asm { IMUL R11D,R8D }
    /* +0x7772d2 */ __asm { NOP }
    /* +0x7772d3 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x7772da */ __asm { MOV RAX,0x0 }
    /* +0x7772e1 */ __asm { MOV qword ptr [RBP + -0x18],RAX }
    /* +0x7772e5 */ __asm { MOV EAX,dword ptr [RDX + -0x2b91] }
    /* +0x7772eb */ __asm { MOVZX EDX,R11W }
    /* +0x7772ef */ __asm { ROL CX,0x8 }
    /* +0x7772f3 */ __asm { MOVZX R9D,CX }
    /* +0x7772f7 */ __asm { LEA R8,[RBP + 0x60] }
    /* +0x7772fb */ __asm { SYSCALL }
    /* +0x7772fd */ __asm { LEA RDX,[0x7fffa4785df1] }
    /* +0x777304 */ __asm { MOV R9,0x60a472208c529f2a }
    /* +0x77730e */ __asm { CMP RDX,R9 }
    /* +0x777311 */ __asm { NOP }
    /* +0x777312 */ __asm { NOP }
    /* +0x777313 */ __asm { NOP }
    /* +0x777314 */ __asm { NOP }
    /* +0x777315 */ __asm { NOP }
    /* +0x777316 */ __asm { MOV qword ptr [RBP + 0x60],RCX }
    /* +0x77731a */ __asm { MOV EAX,dword ptr [RDX + -0xf95] }
    /* +0x777320 */ __asm { JMP 0x7fffa4ee7ae5 }
    /* +0x777325 */ __asm { MOV AX,0x361c }
    /* +0x777329 */ __asm { XOR EAX,0x24 }
    /* +0x77732c */ __asm { MOV R15,qword ptr [RBP + 0x118] }
    /* +0x777333 */ __asm { MOV ECX,R15D }
    /* +0x777336 */ __asm { ROR AX,CL }
    /* +0x777339 */ __asm { IMUL R10D,EAX,-0x4ad9 }
    /* +0x777340 */ __asm { RDTSC }
    /* +0x777342 */ __asm { SHL RDX,0x20 }
    /* +0x777346 */ __asm { OR RDX,RAX }
    /* +0x777349 */ __asm { MOV RCX,-0x5b596a0ee0e87373 }
    /* +0x777353 */ __asm { IMUL RCX,RDX }
    /* +0x777357 */ __asm { MOV R9,-0x281a0d66b163e79a }
    /* +0x777361 */ __asm { ADD RCX,R9 }
    /* +0x777364 */ __asm { MOV R8,RCX }
    /* +0x777367 */ __asm { SHR R8,0x2d }
    /* +0x77736b */ __asm { MOV R9,RCX }
    /* +0x77736e */ __asm { SHR R9,0x1b }
    /* +0x777372 */ __asm { XOR R9D,R8D }
    /* +0x777375 */ __asm { SHR RCX,0x3b }
    /* +0x777379 */ __asm { ROR R9D,CL }
    /* +0x77737c */ __asm { MOV R11,qword ptr [RBP + 0x2a0] }
    /* +0x777383 */ __asm { SUB R10D,R11D }
    /* +0x777386 */ __asm { MOVZX R8D,R10W }
    /* +0x77738a */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x77738e */ __asm { MOV R8D,0x92b896a0 }
    /* +0x777394 */ __asm { MOV R10D,0x464cf432 }
    /* +0x77739a */ __asm { ADD R10D,0x1b21b516 }
    /* +0x7773a1 */ __asm { MOV ECX,R15D }
    /* +0x7773a4 */ __asm { ROR R10D,CL }
    /* +0x7773a7 */ __asm { ADD R10D,R11D }
    /* +0x7773aa */ __asm { XOR EDX,EDX }
    /* +0x7773ac */ __asm { XOR R11D,R11D }
    /* +0x7773af */ __asm { MOV RCX,0x762613f1b25ca17b }
    /* +0x7773b9 */ __asm { CMP qword ptr [RAX + 0xf80],RCX }
    /* +0x7773c0 */ __asm { NOT R8D }
    /* +0x7773c3 */ __asm { SETL DL }
    /* +0x7773c6 */ __asm { SETZ R11B }
    /* +0x7773ca */ __asm { ADD R8D,R15D }
    /* +0x7773cd */ __asm { ROL R8D,0xb }
    /* +0x7773d1 */ __asm { XOR R8D,0x4c27a8b3 }
    /* +0x7773d8 */ __asm { CMP R8,R10 }
    /* +0x7773db */ __asm { CMOVNC EDX,R11D }
    /* +0x7773df */ __asm { CMP DL,0x1 }
    /* +0x7773e2 */ __asm { NOP }
    /* +0x7773e3 */ __asm { NOP }
    /* +0x7773e4 */ __asm { NOP }
    /* +0x7773e5 */ __asm { NOP }
    /* +0x7773e6 */ __asm { NOP }
    /* +0x7773e7 */ __asm { NOP }
    /* +0x7773e8 */ __asm { NOP }
    /* +0x7773e9 */ __asm { NOP }
    /* +0x7773ea */ __asm { NOP }
    /* +0x7773eb */ __asm { MOV EAX,0xfbb6cdb }
    /* +0x7773f0 */ __asm { NOT EAX }
    /* +0x7773f2 */ __asm { MOV R8,qword ptr [RBP + 0x2a0] }
    /* +0x7773f9 */ __asm { ADD EAX,R8D }
    /* +0x7773fc */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x777403 */ __asm { ROL EAX,CL }
    /* +0x777405 */ __asm { CMP R9D,EAX }
    /* +0x777408 */ __asm { JNC 0x7fffa4ee7614 }
    /* +0x77740e */ __asm { MOV AX,0x2552 }
    /* +0x777412 */ __asm { XOR EAX,0xffffbc62 }
    /* +0x777417 */ __asm { MOV R9,qword ptr [RBP + 0xc0] }
    /* +0x77741e */ __asm { IMUL R9D,EAX }
    /* +0x777422 */ __asm { MOVZX R9D,R9W }
    /* +0x777426 */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0x77742a */ __asm { MOV R8,0x538e8c927bac6079 }
    /* +0x777434 */ __asm { CMP qword ptr [R9 + 0x60],R8 }
    /* +0x777438 */ __asm { NOP }
    /* +0x777439 */ __asm { NOP }
    /* +0x77743a */ __asm { NOP }
    /* +0x77743b */ __asm { NOP }
    /* +0x77743c */ __asm { NOP }
    /* +0x77743d */ __asm { MOV R9D,0x63f274b }
    /* +0x777443 */ __asm { MOV EDX,0x81bcabd1 }
    /* +0x777448 */ __asm { IMUL R9D,dword ptr [RBP + 0x130] }
    /* +0x777450 */ __asm { ROL R9D,0x4 }
    /* +0x777454 */ __asm { IMUL R9D,dword ptr [RBP + 0x178] }
    /* +0x77745c */ __asm { MOV RCX,RDX }
    /* +0x77745f */ __asm { SUB RCX,R9 }
    /* +0x777462 */ __asm { XOR RCX,0x61d9afcf }
    /* +0x777469 */ __asm { MOV R9,-0x1bb8dc2b78821fef }
    /* +0x777473 */ __asm { CMP RCX,R9 }
    /* +0x777476 */ __asm { JZ 0x7fffa4ee7c78 }
    /* +0x77747c */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x777483 */ __asm { MOV RCX,0x0 }
    /* +0x77748a */ __asm { TEST uint8_t ptr [RDX + -0x1bea991],0x1 }
    /* +0x777491 */ __asm { JNZ 0x7fffa4ee7614 }
    /* +0x777497 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x77749e */ __asm { MOV RDX,0x0 }
    /* +0x7774a5 */ __asm { XORPD XMM5,XMM5 }
    /* +0x7774a9 */ __asm { MOVAPD xmmword ptr [RBP + 0x60],XMM5 }
    /* +0x7774ae */ __asm { MOV RDX,-0x69ff45eb76b81ac1 }
    /* +0x7774b8 */ __asm { NOT RDX }
    /* +0x7774bb */ __asm { ROL RDX,0x1f }
    /* +0x7774bf */ __asm { XOR RDX,0x49dc382 }
    /* +0x7774c6 */ __asm { MOV R9,0x274804ea28d7437a }
}


// ============================================================================
// Function : Unwind@7fffa4ee7cc0  |  RVA: 0x777cc0  |  Size: 167 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ee7cc0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = *(uint64_t *)(param_2 + 0xc0);
  (*(code *)((int64_t)
             (short)((uint16_t)*(uint64_t *)(param_2 + 800) ^
                    0x54d0U - (short)*(uint64_t *)(param_2 + 0x198)) + 0x7fffa5688a15))
            (param_1,uVar1,uVar1 >> 0x3d ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ee7d70  |  RVA: 0x777d70  |  Size: 3373 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4ee7d70(void) {
    /* +0x777d70 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x777d75 */ __asm { PUSH RBP }
    /* +0x777d76 */ __asm { PUSH R13 }
    /* +0x777d78 */ __asm { PUSH RBX }
    /* +0x777d79 */ __asm { PUSH RSI }
    /* +0x777d7a */ __asm { PUSH R12 }
    /* +0x777d7c */ __asm { PUSH RDI }
    /* +0x777d7d */ __asm { PUSH R15 }
    /* +0x777d7f */ __asm { PUSH R14 }
    /* +0x777d81 */ __asm { SUB RSP,0x98 }
    /* +0x777d88 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x777d8f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM7 }
    /* +0x777d95 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM8 }
    /* +0x777d9c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM6 }
    /* +0x777da5 */ __asm { MOV R9,qword ptr [RBP + 0x18] }
    /* +0x777da9 */ __asm { MOV qword ptr [RBP + 0x40],R9 }
    /* +0x777dad */ __asm { RDTSC }
    /* +0x777daf */ __asm { MOV R8,RDX }
    /* +0x777db2 */ __asm { SHL R8,0x20 }
    /* +0x777db6 */ __asm { OR R8,RAX }
    /* +0x777db9 */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x777dc3 */ __asm { IMUL RCX,R8 }
    /* +0x777dc7 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0x777dd1 */ __asm { ADD RCX,R9 }
    /* +0x777dd4 */ __asm { MOV R9,RCX }
    /* +0x777dd7 */ __asm { SHR R9,0x2d }
    /* +0x777ddb */ __asm { MOV R10,RCX }
    /* +0x777dde */ __asm { SHR R10,0x1b }
    /* +0x777de2 */ __asm { SHR RCX,0x3b }
    /* +0x777de6 */ __asm { XOR R9D,R10D }
    /* +0x777de9 */ __asm { ROR R9D,CL }
    /* +0x777dec */ __asm { AND R9D,0x3 }
    /* +0x777df0 */ __asm { CMP R9D,0x2 }
    /* +0x777df4 */ __asm { JNC 0x7fffa4ee8497 }
    /* +0x777dfa */ __asm { CMP R9D,0x1 }
    /* +0x777dfe */ __asm { JZ 0x7fffa4ee8540 }
    /* +0x777e04 */ __asm { RDTSC }
    /* +0x777e06 */ __asm { SHL RDX,0x20 }
    /* +0x777e0a */ __asm { OR RDX,RAX }
    /* +0x777e0d */ __asm { MOV R10,0x5851f42d4c957f2d }
    /* +0x777e17 */ __asm { IMUL R10,RDX }
    /* +0x777e1b */ __asm { MOV R9,0x908916f9b308e7a }
    /* +0x777e25 */ __asm { ADD R9,R10 }
    /* +0x777e28 */ __asm { MOV RCX,R9 }
    /* +0x777e2b */ __asm { SHR RCX,0x3b }
    /* +0x777e2f */ __asm { MOV R10,R9 }
    /* +0x777e32 */ __asm { SHR R10,0x2d }
    /* +0x777e36 */ __asm { SHR R9,0x1b }
    /* +0x777e3a */ __asm { XOR R9D,R10D }
    /* +0x777e3d */ __asm { ROR R9D,CL }
    /* +0x777e40 */ __asm { PUSHFQ }
    /* +0x777e41 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x777e49 */ __asm { POPFQ }
    /* +0x777e4a */ __asm { MOV dword ptr [RBP + 0x70],0xc7b27959 }
    /* +0x777e51 */ __asm { MOV EAX,dword ptr [RBP + 0x70] }
    /* +0x777e54 */ __asm { TEST EAX,EAX }
    /* +0x777e56 */ __asm { JNS 0x7fffa4ee8adc }
    /* +0x777e5c */ __asm { CMP R9D,0x43df8c }
    /* +0x777e63 */ __asm { JA 0x7fffa4ee8449 }
    /* +0x777e69 */ __asm { MOV AX,0x5b5c }
    /* +0x777e6d */ __asm { MOV R9,-0x508 }
    /* +0x777e74 */ __asm { ADD R9,qword ptr [RBP + 0x278] }
    /* +0x777e7b */ __asm { MOV R13,qword ptr [RBP + 0x2a0] }
    /* +0x777e82 */ __asm { ADD EAX,R13D }
    /* +0x777e85 */ __asm { IMUL EAX,EAX,0x4ca3 }
    /* +0x777e8b */ __asm { MOV R15,qword ptr [RBP + 0x118] }
    /* +0x777e92 */ __asm { MOV ECX,R15D }
    /* +0x777e95 */ __asm { ROR AX,CL }
    /* +0x777e98 */ __asm { MOVZX R10D,AX }
    /* +0x777e9c */ __asm { MOV EAX,0x740 }
    /* +0x777ea1 */ __asm { ADD RAX,qword ptr GS:[R10] }
    /* +0x777ea5 */ __asm { MOV R10,R9 }
    /* +0x777ea8 */ __asm { MOV EDX,0x82c7eef7 }
    /* +0x777ead */ __asm { MOV R11D,0x7ba44a44 }
    /* +0x777eb3 */ __asm { ADD R11D,0xf96b6fb8 }
    /* +0x777eba */ __asm { XOR R11D,R15D }
    /* +0x777ebd */ __asm { ADD R11D,0x2972fb2c }
    /* +0x777ec4 */ __asm { MOV ECX,R13D }
    /* +0x777ec7 */ __asm { ROL R11D,CL }
    /* +0x777eca */ __asm { IMUL R10,RAX }
    /* +0x777ece */ __asm { SUB R9,RAX }
    /* +0x777ed1 */ __asm { SUB EDX,R13D }
    /* +0x777ed4 */ __asm { MOV ECX,R15D }
    /* +0x777ed7 */ __asm { ROL EDX,CL }
    /* +0x777ed9 */ __asm { IMUL EAX,EDX,-0x23b3b17d }
    /* +0x777edf */ __asm { ADD EAX,0xabf5d6b1 }
    /* +0x777ee4 */ __asm { CMP R11,RAX }
    /* +0x777ee7 */ __asm { CMOVL R9,R10 }
    /* +0x777eeb */ __asm { MOV R10,-0x4529e393bf5f7aab }
    /* +0x777ef5 */ __asm { CMP R9,R10 }
    /* +0x777ef8 */ __asm { JZ 0x7fffa4ee8ad4 }
    /* +0x777efe */ __asm { MOV EDX,0xf5228fb0 }
    /* +0x777f03 */ __asm { MOV RCX,RDX }
    /* +0x777f06 */ __asm { ROL RCX,0xc }
    /* +0x777f0a */ __asm { ADD RCX,0x36c12d7c }
    /* +0x777f11 */ __asm { MOV R9,-0x116a2385824ed6dd }
    /* +0x777f1b */ __asm { CMP RCX,R9 }
    /* +0x777f1e */ __asm { JZ 0x7fffa4ee8af1 }
    /* +0x777f24 */ __asm { MOV R9,0x3cc9abb4e0aebdbd }
    /* +0x777f2e */ __asm { ADD R9,qword ptr [RBP + 0x118] }
    /* +0x777f35 */ __asm { IMUL R11,R9,0x21b4ff0d }
    /* +0x777f3c */ __asm { SUB R11,qword ptr [RBP + 0x2a0] }
    /* +0x777f43 */ __asm { MOV ECX,0xc763e352 }
    /* +0x777f48 */ __asm { MOV EAX,0x81d29dd8 }
    /* +0x777f4d */ __asm { IMUL EAX,dword ptr [RBP + 0x178] }
    /* +0x777f54 */ __asm { ADD EAX,0x882991c6 }
    /* +0x777f59 */ __asm { CDQE }
    /* +0x777f5b */ __asm { XOR RAX,0x6aa9574e }
    /* +0x777f61 */ __asm { MOV R9,qword ptr [RDX + RAX*0x1 + 0x8] }
    /* +0x777f66 */ __asm { MOV R10,-0x31001349048f5637 }
    /* +0x777f70 */ __asm { MOV RAX,R9 }
    /* +0x777f73 */ __asm { MUL R10 }
    /* +0x777f76 */ __asm { MOV R10,RDX }
    /* +0x777f79 */ __asm { MOV EDX,0x14710ff }
    /* +0x777f7e */ __asm { MOV RAX,R9 }
    /* +0x777f81 */ __asm { MUL RDX }
    /* +0x777f84 */ __asm { XOR RCX,R11 }
    /* +0x777f87 */ __asm { ADD RAX,R10 }
    /* +0x777f8a */ __asm { ADC RDX,0x0 }
    /* +0x777f8e */ __asm { AND EDX,0x1 }
    /* +0x777f91 */ __asm { OR RDX,RCX }
    /* +0x777f94 */ __asm { JZ 0x7fffa4ee8449 }
    /* +0x777f9a */ __asm { MOV R11,qword ptr [RBP + 0x118] }
    /* +0x777fa1 */ __asm { MOV EAX,R11D }
    /* +0x777fa4 */ __asm { OR EAX,0x1 }
    /* +0x777fa7 */ __asm { PXOR XMM5,XMM5 }
    /* +0x777fab */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM5 }
    /* +0x777fb0 */ __asm { MOV R10W,0x4c98 }
    /* +0x777fb5 */ __asm { IMUL R10D,EAX }
    /* +0x777fb9 */ __asm { MOV R15,qword ptr [RBP + 0x2a0] }
    /* +0x777fc0 */ __asm { MOV ECX,R15D }
    /* +0x777fc3 */ __asm { ROR R10W,CL }
    /* +0x777fc7 */ __asm { ROL R10W,0x6 }
    /* +0x777fcc */ __asm { MOVZX R9D,R10W }
    /* +0x777fd0 */ __asm { MOV RBX,qword ptr GS:[R9] }
    /* +0x777fd4 */ __asm { MOV R9D,0xcf1fbf28 }
    /* +0x777fda */ __asm { MOV qword ptr [RBP + 0x1f0],R9 }
    /* +0x777fe1 */ __asm { MOV EAX,0xffaed4f1 }
    /* +0x777fe6 */ __asm { MOV RCX,qword ptr [RBP + 0x178] }
    /* +0x777fed */ __asm { IMUL ECX,EAX }
    /* +0x777ff0 */ __asm { ROL ECX,0x1e }
    /* +0x777ff3 */ __asm { MOV R13D,0xb834dcb2 }
    /* +0x777ff9 */ __asm { MOV EAX,0x58e6b686 }
    /* +0x777ffe */ __asm { MOV dword ptr [RBP + 0xc0],EAX }
    /* +0x778004 */ __asm { MOV EAX,0x15843016 }
    /* +0x778009 */ __asm { MOV R9D,0x87b3856a }
    /* +0x77800f */ __asm { MOV qword ptr [RBP + 0x1b8],R9 }
    /* +0x778016 */ __asm { MOV R14,R14 }
    /* +0x778019 */ __asm { MOV R10D,0xee6e7efb }
    /* +0x77801f */ __asm { ADD EAX,R11D }
    /* +0x778022 */ __asm { MOV R9D,0x98654086 }
    /* +0x778028 */ __asm { SUB R9D,EAX }
    /* +0x77802b */ __asm { ROL R9D,0x6 }
    /* +0x77802f */ __asm { MOV qword ptr [RBP + 0x10],R9 }
    /* +0x778033 */ __asm { MOV RDX,R14 }
    /* +0x778036 */ __asm { AND RDX,RBX }
    /* +0x778039 */ __asm { MOV R9,RBX }
    /* +0x77803c */ __asm { AND RDX,R8 }
    /* +0x77803f */ __asm { SUB ECX,R15D }
    /* +0x778042 */ __asm { ROL ECX,0x1c }
    /* +0x778045 */ __asm { IMUL RCX,RDX }
    /* +0x778049 */ __asm { MOV qword ptr [RBP + 0x178],RCX }
    /* +0x778050 */ __asm { MOV EDX,0xc09b3db3 }
    /* +0x778055 */ __asm { MOV RAX,0x451c3839faaba801 }
    /* +0x77805f */ __asm { MOV qword ptr [RBP + 0x48],RAX }
    /* +0x778063 */ __asm { MOV EAX,0x166c3b0a }
    /* +0x778068 */ __asm { MOV EDI,R15D }
    /* +0x77806b */ __asm { MOV RCX,R11 }
    /* +0x77806e */ __asm { MOV qword ptr [RBP + 0x118],R11 }
    /* +0x778075 */ __asm { SUB EDI,ECX }
    /* +0x778077 */ __asm { ADD EDI,EAX }
    /* +0x778079 */ __asm { MOV dword ptr [RBP + 0xf8],EDI }
    /* +0x77807f */ __asm { MOV R12,R8 }
    /* +0x778082 */ __asm { NOT R12 }
    /* +0x778085 */ __asm { IMUL R10D,R10D,0x23346027 }
    /* +0x77808c */ __asm { MOV qword ptr [RBP + 0x170],R10 }
    /* +0x778093 */ __asm { XOR EDX,0x914a2604 }
    /* +0x778099 */ __asm { ROR EDX,CL }
    /* +0x77809b */ __asm { MOV EDI,0x312a3212 }
    /* +0x7780a0 */ __asm { MOV EBX,0xe86194a }
    /* +0x7780a5 */ __asm { IMUL R13D,dword ptr [RBP + 0x130] }
    /* +0x7780ad */ __asm { NOT R13D }
    /* +0x7780b0 */ __asm { ROL R13D,0xe }
    /* +0x7780b4 */ __asm { MOV qword ptr [RBP + 0x1d0],R13 }
    /* +0x7780bb */ __asm { MOV ESI,0x339aa306 }
    /* +0x7780c0 */ __asm { ADD ESI,0x18578dff }
    /* +0x7780c6 */ __asm { ROL ESI,CL }
    /* +0x7780c8 */ __asm { XOR EDX,0x7368c60c }
    /* +0x7780ce */ __asm { MOV dword ptr [RBP + 0x38],EDX }
    /* +0x7780d1 */ __asm { XOR EBX,0xba242c4a }
    /* +0x7780d7 */ __asm { SUB EDI,ECX }
    /* +0x7780d9 */ __asm { MOV ECX,R15D }
    /* +0x7780dc */ __asm { ROL EDI,CL }
    /* +0x7780de */ __asm { ADD EDI,0x4868ba6f }
    /* +0x7780e4 */ __asm { MOV RAX,R14 }
    /* +0x7780e7 */ __asm { MOV R13,R14 }
    /* +0x7780ea */ __asm { NOT R13 }
    /* +0x7780ed */ __asm { MOV R11,R9 }
    /* +0x7780f0 */ __asm { MOV qword ptr [RBP + 0x188],R9 }
    /* +0x7780f7 */ __asm { MOV R14,R9 }
    /* +0x7780fa */ __asm { XOR R14,RAX }
    /* +0x7780fd */ __asm { MOV R9,RAX }
    /* +0x778100 */ __asm { MOVQ XMM5,R14 }
    /* +0x778105 */ __asm { XOR R14,R12 }
    /* +0x778108 */ __asm { MOV EAX,dword ptr [RBP + 0xc0] }
    /* +0x77810e */ __asm { XOR EAX,0x2f2ddd60 }
    /* +0x778113 */ __asm { MOV EDX,0x2875d4ca }
    /* +0x778118 */ __asm { IMUL EAX,EAX,0x651537eb }
    /* +0x77811e */ __asm { NOT EAX }
    /* +0x778120 */ __asm { ROR EAX,CL }
    /* +0x778122 */ __asm { MOV RCX,R15 }
    /* +0x778125 */ __asm { XOR EDX,ECX }
    /* +0x778127 */ __asm { CDQE }
    /* +0x778129 */ __asm { MOV qword ptr [RBP + 0xc0],RAX }
    /* +0x778130 */ __asm { MOV RAX,R11 }
    /* +0x778133 */ __asm { NOT RAX }
    /* +0x778136 */ __asm { LEA R10,[R9 + -0x1] }
    /* +0x77813a */ __asm { MOV qword ptr [RBP + 0x20],R10 }
    /* +0x77813e */ __asm { XOR R9,RAX }
    /* +0x778141 */ __asm { AND RAX,R13 }
    /* +0x778144 */ __asm { MOV R11,RAX }
    /* +0x778147 */ __asm { AND R11,R12 }
    /* +0x77814a */ __asm { AND RAX,R8 }
    /* +0x77814d */ __asm { XOR R9,R8 }
    /* +0x778150 */ __asm { MOV R15D,0x96433c8a }
    /* +0x778156 */ __asm { IMUL R15,R9 }
    /* +0x77815a */ __asm { MOV qword ptr [RBP + 0x180],R15 }
    /* +0x778161 */ __asm { MOV R15,qword ptr [RBP + 0x1f0] }
    /* +0x778168 */ __asm { NEG R15D }
    /* +0x77816b */ __asm { ADD R15D,ECX }
    /* +0x77816e */ __asm { ADD R15D,0x7f23b244 }
    /* +0x778175 */ __asm { MOV R10,qword ptr [RBP + 0x118] }
    /* +0x77817c */ __asm { MOV ECX,R10D }
    /* +0x77817f */ __asm { ROL R15D,CL }
    /* +0x778182 */ __asm { IMUL R9,R9,0x29bcc79d }
    /* +0x778189 */ __asm { MOV qword ptr [RBP + 0x138],R15 }
    /* +0x778190 */ __asm { MOV RCX,qword ptr [RBP + 0x1b8] }
    /* +0x778197 */ __asm { MOV R15,qword ptr [RBP + 0x2a0] }
    /* +0x77819e */ __asm { XOR ECX,R15D }
    /* +0x7781a1 */ __asm { MOV qword ptr [RBP + 0x1b8],RCX }
    /* +0x7781a8 */ __asm { ADD EDX,0x77d7b16a }
    /* +0x7781ae */ __asm { MOV RCX,R10 }
    /* +0x7781b1 */ __asm { XOR EDX,ECX }
    /* +0x7781b3 */ __asm { CMP RDX,qword ptr [RBP + 0x10] }
    /* +0x7781b7 */ __asm { MOVD XMM3,EBX }
    /* +0x7781bb */ __asm { LEA R10,[R8 + -0x1] }
    /* +0x7781bf */ __asm { CMOVGE R10,R12 }
    /* +0x7781c3 */ __asm { MOV qword ptr [RBP + 0x1f0],R10 }
    /* +0x7781ca */ __asm { ADD R9,qword ptr [RBP + 0x178] }
    /* +0x7781d1 */ __asm { MOV qword ptr [RBP + 0x178],R9 }
    /* +0x7781d8 */ __asm { NOT ESI }
    /* +0x7781da */ __asm { IMUL ESI,dword ptr [RBP + 0x130] }
    /* +0x7781e1 */ __asm { IMUL RSI,RAX }
    /* +0x7781e5 */ __asm { SUB RSI,R11 }
    /* +0x7781e8 */ __asm { MOV R9,RCX }
    /* +0x7781eb */ __asm { MOVD XMM0,R9D }
    /* +0x7781f0 */ __asm { PSUBD XMM3,XMM0 }
    /* +0x7781f4 */ __asm { MOVD R11D,XMM3 }
    /* +0x7781f9 */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x778200 */ __asm { ROR R11D,CL }
    /* +0x778203 */ __asm { CMP qword ptr [RBP + 0x1d0],R11 }
    /* +0x77820a */ __asm { MOV RBX,qword ptr [RBP + 0x20] }
    /* +0x77820e */ __asm { CMOVBE RBX,R13 }
    /* +0x778212 */ __asm { MOV R10,qword ptr [RBP + 0x170] }
    /* +0x778219 */ __asm { SUB R10D,R9D }
    /* +0x77821c */ __asm { ROR R10D,CL }
    /* +0x77821f */ __asm { MOV R11,qword ptr [RBP + 0x1b8] }
    /* +0x778226 */ __asm { ADD R11D,0x57974a33 }
    /* +0x77822d */ __asm { MOV ECX,R9D }
    /* +0x778230 */ __asm { ROR R11D,CL }
    /* +0x778233 */ __asm { MOV RDX,qword ptr [RBP + 0x188] }
    /* +0x77823a */ __asm { AND RBX,RDX }
    /* +0x77823d */ __asm { MOV EAX,0xd9e0975b }
    /* +0x778242 */ __asm { CMP R11,RAX }
    /* +0x778245 */ __asm { MOVQ XMM3,R12 }
    /* +0x77824a */ __asm { PAND XMM5,XMM3 }
    /* +0x77824e */ __asm { MOVQ RCX,XMM5 }
    /* +0x778253 */ __asm { CMOVNZ RCX,R14 }
    /* +0x778257 */ __asm { IMUL RCX,R10 }
    /* +0x77825b */ __asm { AND R13,RDX }
    /* +0x77825e */ __asm { XOR R8,R13 }
    /* +0x778261 */ __asm { MOV RAX,-0xc0000457 }
    /* +0x77826b */ __asm { IMUL RAX,R8 }
    /* +0x77826f */ __asm { ADD RAX,qword ptr [RBP + 0x180] }
    /* +0x778276 */ __asm { MOV R8,R12 }
    /* +0x778279 */ __asm { XOR R8,R13 }
    /* +0x77827c */ __asm { AND R13,qword ptr [RBP + 0x1f0] }
    /* +0x778283 */ __asm { IMUL RDX,R8,-0x72671d41 }
    /* +0x77828a */ __asm { IMUL R8,R13,0x4d98e717 }
    /* +0x778291 */ __asm { MOV R10,RDX }
    /* +0x778294 */ __asm { NEG R10 }
    /* +0x778297 */ __asm { CMP RDI,qword ptr [RBP + 0x138] }
    /* +0x77829e */ __asm { MOVQ XMM5,qword ptr [RBP + 0x48] }
    /* +0x7782a3 */ __asm { CMOVC R10,RDX }
    /* +0x7782a7 */ __asm { ADD R10,qword ptr [RBP + 0x178] }
    /* +0x7782ae */ __asm { MOVQ XMM3,qword ptr [RBP + 0x118] }
    /* +0x7782b6 */ __asm { PADDQ XMM5,XMM3 }
    /* +0x7782ba */ __asm { ADD R10,RAX }
    /* +0x7782bd */ __asm { MOVQ R9,XMM5 }
    /* +0x7782c2 */ __asm { IMUL R9,qword ptr [RBP + 0xd0] }
    /* +0x7782ca */ __asm { MOV RAX,RBX }
    /* +0x7782cd */ __asm { OR RAX,R12 }
    /* +0x7782d0 */ __asm { IMUL RAX,RAX,-0x4d98e715 }
    /* +0x7782d7 */ __asm { MOV RDX,R10 }
    /* +0x7782da */ __asm { OR RDX,RAX }
    /* +0x7782dd */ __asm { ADD R10,RAX }
    /* +0x7782e0 */ __asm { ADD R9,0x17d1dd33 }
    /* +0x7782e7 */ __asm { MOV EAX,dword ptr [RBP + 0xf8] }
    /* +0x7782ed */ __asm { NOT EAX }
    /* +0x7782ef */ __asm { ROL EAX,0x6 }
    /* +0x7782f2 */ __asm { CDQE }
    /* +0x7782f4 */ __asm { CMP qword ptr [RBP + 0xc0],RAX }
    /* +0x7782fb */ __asm { CMOVNZ R10,RDX }
    /* +0x7782ff */ __asm { ADD RCX,RSI }
    /* +0x778302 */ __asm { ADD RCX,R10 }
    /* +0x778305 */ __asm { MOV R10D,0x59ce28f }
    /* +0x77830b */ __asm { XOR R10,qword ptr [R8 + RCX*0x1] }
    /* +0x77830f */ __asm { MOVSXD R8,dword ptr [RBP + 0x38] }
    /* +0x778313 */ __asm { SUB R10,R8 }
    /* +0x778316 */ __asm { ADD R10,0x5276266d }
    /* +0x77831d */ __asm { CMP R9,R10 }
    /* +0x778320 */ __asm { NOP }
    /* +0x778321 */ __asm { NOP }
    /* +0x778322 */ __asm { NOP }
    /* +0x778323 */ __asm { NOP }
    /* +0x778324 */ __asm { NOP }
    /* +0x778325 */ __asm { NOP }
    /* +0x778326 */ __asm { NOP }
    /* +0x778327 */ __asm { NOP }
    /* +0x778328 */ __asm { NOP }
    /* +0x778329 */ __asm { NOP }
    /* +0x77832a */ __asm { MOV dword ptr [RBP + 0x70],0x0 }
    /* +0x778331 */ __asm { PUSHFQ }
    /* +0x778332 */ __asm { POP RDX }
    /* +0x778333 */ __asm { TEST EDX,0x100 }
    /* +0x778339 */ __asm { NOP }
    /* +0x77833a */ __asm { NOP }
    /* +0x77833b */ __asm { NOP }
    /* +0x77833c */ __asm { NOP }
    /* +0x77833d */ __asm { NOP }
    /* +0x77833e */ __asm { NOP }
    /* +0x77833f */ __asm { NOP }
    /* +0x778340 */ __asm { NOP }
    /* +0x778341 */ __asm { NOP }
    /* +0x778342 */ __asm { NOP }
    /* +0x778343 */ __asm { NOP }
    /* +0x778344 */ __asm { NOP }
    /* +0x778345 */ __asm { MOV dword ptr [RBP + 0xa0],0x7c6e49c3 }
    /* +0x77834f */ __asm { MOV EAX,dword ptr [RBP + 0xa0] }
    /* +0x778355 */ __asm { CMP EAX,0x820b562d }
    /* +0x77835a */ __asm { JNC 0x7fffa4ee8af9 }
    /* +0x778360 */ __asm { MOV R8W,0xb68e }
    /* +0x778365 */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x77836c */ __asm { LEA EAX,[R9 + R8*0x1] }
    /* +0x778370 */ __asm { NOT EAX }
    /* +0x778372 */ __asm { IMUL EAX,EAX,0x791f }
    /* +0x778378 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x77837f */ __asm { MOV RDX,0x0 }
    /* +0x778386 */ __asm { MOVZX R9D,AX }
    /* +0x77838a */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0x77838e */ __asm { MOV R8D,0xc99cd293 }
    /* +0x778394 */ __asm { SUB R8,qword ptr [R9 + 0x18] }
    /* +0x778398 */ __asm { MOV R9,0x591fdc657dddd0dc }
    /* +0x7783a2 */ __asm { CMP R8,R9 }
    /* +0x7783a5 */ __asm { NOP }
    /* +0x7783a6 */ __asm { NOP }
    /* +0x7783a7 */ __asm { NOP }
    /* +0x7783a8 */ __asm { NOP }
    /* +0x7783a9 */ __asm { NOP }
    /* +0x7783aa */ __asm { NOP }
    /* +0x7783ab */ __asm { NOP }
    /* +0x7783ac */ __asm { NOP }
    /* +0x7783ad */ __asm { NOP }
    /* +0x7783ae */ __asm { NOP }
    /* +0x7783af */ __asm { NOP }
    /* +0x7783b0 */ __asm { NOP }
    /* +0x7783b1 */ __asm { NOP }
    /* +0x7783b2 */ __asm { NOP }
    /* +0x7783b3 */ __asm { NOP }
    /* +0x7783b4 */ __asm { NOP }
    /* +0x7783b5 */ __asm { NOP }
    /* +0x778449 */ __asm { LEA RDX,[0x7fffa478262d] }
    /* +0x778450 */ __asm { MOV R9,0x37636a89cbddc35e }
    /* +0x77845a */ __asm { ADD R9,qword ptr [RBP + 0x118] }
    /* +0x778461 */ __asm { MOV R8,qword ptr [RBP + 0x2a0] }
    /* +0x778468 */ __asm { XOR R8,R9 }
    /* +0x77846b */ __asm { IMUL R9,R8,0x1830ba07 }
    /* +0x778472 */ __asm { CMP RDX,R9 }
    /* +0x778475 */ __asm { NOP }
    /* +0x778476 */ __asm { NOP }
    /* +0x778477 */ __asm { NOP }
    /* +0x778478 */ __asm { NOP }
    /* +0x778479 */ __asm { NOP }
    /* +0x77847a */ __asm { NOP }
    /* +0x77847b */ __asm { NOP }
    /* +0x77847c */ __asm { NOP }
    /* +0x77847d */ __asm { NOP }
    /* +0x77847e */ __asm { NOP }
    /* +0x77847f */ __asm { NOP }
    /* +0x778480 */ __asm { NOP }
    /* +0x778481 */ __asm { NOP }
    /* +0x778482 */ __asm { NOP }
    /* +0x778483 */ __asm { NOP }
    /* +0x778484 */ __asm { NOP }
    /* +0x778485 */ __asm { NOP }
    /* +0x778497 */ __asm { CMP R9D,0x3 }
    /* +0x77849b */ __asm { JNZ 0x7fffa4ee86bd }
    /* +0x7784a1 */ __asm { MOV EDX,0xe9adc53b }
    /* +0x7784a6 */ __asm { MOV R9,-0x351da54e771a5f47 }
    /* +0x7784b0 */ __asm { CMP RDX,R9 }
    /* +0x7784b3 */ __asm { JZ 0x7fffa4ee8b09 }
    /* +0x7784b9 */ __asm { MOV R9,qword ptr [RDX + -0x69afc533] }
    /* +0x7784c0 */ __asm { MOV R8,-0x19b6ca4fac5c6d04 }
    /* +0x7784ca */ __asm { MOV RAX,R9 }
    /* +0x7784cd */ __asm { MUL R8 }
    /* +0x7784d0 */ __asm { MOV R8,RDX }
    /* +0x7784d3 */ __asm { MOV R10D,0x146c8f5 }
    /* +0x7784d9 */ __asm { MOV RAX,R9 }
    /* +0x7784dc */ __asm { MUL R10 }
    /* +0x7784df */ __asm { ADD RAX,R8 }
    /* +0x7784e2 */ __asm { ADC RDX,0x0 }
    /* +0x7784e6 */ __asm { TEST DL,0x1 }
    /* +0x7784e9 */ __asm { JZ 0x7fffa4ee87b2 }
    /* +0x7784ef */ __asm { LEA R8,[0x7fffa47bb9e4] }
    /* +0x7784f6 */ __asm { MOV R9,-0xe90d71660f3e82d }
    /* +0x778500 */ __asm { CMP R8,R9 }
    /* +0x778503 */ __asm { JZ 0x7fffa4ee8b12 }
    /* +0x778509 */ __asm { MOV qword ptr [RBP + 0x70],RDX }
    /* +0x77850d */ __asm { MOV AX,0xcb7e }
    /* +0x778511 */ __asm { ADD EAX,0x1d49 }
    /* +0x778516 */ __asm { XOR EAX,0xffffff7b }
    /* +0x77851b */ __asm { MOV R9,qword ptr [RBP + 0x2a0] }
    /* +0x778522 */ __asm { SUB EAX,R9D }
    /* +0x778525 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x77852c */ __asm { ROR AX,CL }
    /* +0x77852f */ __asm { MOVZX R9D,AX }
    /* +0x778533 */ __asm { MOV EAX,dword ptr [R9 + R8*0x1 + 0xe8] }
    /* +0x77853b */ __asm { JMP 0x7fffa4ee8aa4 }
    /* +0x778540 */ __asm { LEA RDX,[0x7fffa47b885f] }
    /* +0x778547 */ __asm { MOV R9,-0x59634261ec7aa33b }
    /* +0x778551 */ __asm { IMUL R9,RDX }
    /* +0x778555 */ __asm { MOV R8,0x7e957518c3f3aa86 }
    /* +0x77855f */ __asm { ADD R8,R9 }
    /* +0x778562 */ __asm { MOV R9,0x14031722b19c3a02 }
    /* +0x77856c */ __asm { CMP R8,R9 }
    /* +0x77856f */ __asm { JNZ 0x7fffa4ee8580 }
    /* +0x778571 */ __asm { TEST uint8_t ptr [RCX],DL }
    /* +0x778573 */ __asm { FNSTENV [0x7fff91a6da84] }
    /* +0x77857a */ __asm { IN AL,DX }
    /* +0x77857b */ __asm { FUCOMI ST0,ST0 }
    /* +0x77857d */ __asm { POP RSI }
    /* +0x77857e */ __asm { JNP 0x7fffa4ee85fc }
    /* +0x778580 */ __asm { MOV R9D,0xd0f4c311 }
    /* +0x778586 */ __asm { MOV R8D,0x896b81d9 }
    /* +0x77858c */ __asm { MOVZX EAX,uint8_t ptr [RDX + 0x3eea] }
    /* +0x778593 */ __asm { ADD R8D,0x45ea3768 }
    /* +0x77859a */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x7785a1 */ __asm { ROL R8D,CL }
    /* +0x7785a4 */ __asm { MOV R11,qword ptr [RBP + 0x118] }
    /* +0x7785ab */ __asm { ADD R8D,R11D }
    /* +0x7785ae */ __asm { ADD R9D,0xc9a5cd3d }
    /* +0x7785b5 */ __asm { ROL R9D,CL }
    /* +0x7785b8 */ __asm { MOV R10,0x7fff7c250517 }
    /* +0x7785c2 */ __asm { XOR R10,RCX }
    /* +0x7785c5 */ __asm { SUB R10,R11 }
    /* +0x7785c8 */ __asm { MOV R14D,0xb1b8cebe }
    /* +0x7785ce */ __asm { ADD R14,R10 }
    /* +0x7785d1 */ __asm { ROL R14,0x3b }
    /* +0x7785d5 */ __asm { XOR R9D,R11D }
    /* +0x7785d8 */ __asm { MOV R10D,0x6feebda2 }
    /* +0x7785de */ __asm { XOR R10D,R11D }
    /* +0x7785e1 */ __asm { ROL R10D,0x9 }
    /* +0x7785e5 */ __asm { MOVZX R11D,uint8_t ptr [RDX + RAX*0x4 + 0x3ef0] }
    /* +0x7785ee */ __asm { NOT R11B }
    /* +0x7785f1 */ __asm { ROL R11B,0x5 }
    /* +0x7785f5 */ __asm { MOV uint8_t ptr [RBP + 0x70],R11B }
    /* +0x7785f9 */ __asm { MOVZX R11D,uint8_t ptr [RDX + RAX*0x4 + 0x3ef1] }
    /* +0x778602 */ __asm { NOT R11B }
    /* +0x778605 */ __asm { ROL R11B,0x5 }
    /* +0x778609 */ __asm { ADD R10D,ECX }
    /* +0x77860c */ __asm { MOV uint8_t ptr [RBP + 0x71],R11B }
    /* +0x778610 */ __asm { MOVZX R11D,uint8_t ptr [RDX + RAX*0x4 + 0x3ef2] }
    /* +0x778619 */ __asm { NOT R11B }
    /* +0x77861c */ __asm { ROL R11B,0x5 }
    /* +0x778620 */ __asm { MOV uint8_t ptr [RBP + 0x72],R11B }
    /* +0x778624 */ __asm { MOVZX EDX,uint8_t ptr [RDX + RAX*0x4 + 0x3ef3] }
    /* +0x77862c */ __asm { NOT DL }
    /* +0x77862e */ __asm { ROL DL,0x5 }
    /* +0x778631 */ __asm { MOV uint8_t ptr [RBP + 0x73],DL }
    /* +0x778634 */ __asm { MOV EAX,0x9102c3cc }
    /* +0x778639 */ __asm { XOR EAX,dword ptr [RBP + 0x70] }
    /* +0x77863c */ __asm { MOV EDX,EAX }
    /* +0x77863e */ __asm { OR DL,0x1f }
    /* +0x778641 */ __asm { MOV R11D,EAX }
    /* +0x778644 */ __asm { AND R11B,0x1f }
    /* +0x778648 */ __asm { CMP R14,R8 }
    /* +0x77864b */ __asm { NOT R10D }
    /* +0x77864e */ __asm { MOVZX R11D,R11B }
    /* +0x778652 */ __asm { MOVZX ECX,DL }
    /* +0x778655 */ __asm { CMOVNC ECX,R11D }
}


// ============================================================================
// Function : Unwind@7fffa4ee8b60  |  RVA: 0x778b60  |  Size: 286 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ee8b60(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  
  uVar2 = (short)*(uint64_t *)(param_2 + 800) + 0x8c8c;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0xf;
  uVar3 = (uint32_t)*(uint64_t *)(param_2 + 800);
  (*(code *)((int64_t)(short)((uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) ^ 0xab62) + 0x7fffa568e456))
            (*(uint64_t *)(param_2 + 0x198),uVar3 ^ 0x14ffe30c,
             *(uint64_t *)(param_2 + 200) >> 0x3d ^ *(uint64_t *)(param_2 + 200));
  (*(code *)((int64_t)(int)~(uVar3 ^ 0x50931efc) + 0x7fffa562caa9))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ee8c80  |  RVA: 0x778c80  |  Size: 300 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ee8c80(uint64_t param_1,int64_t param_2)

{
  uint8_t (*pauVar1) [16];
  uint16_t uVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x230)) {
    (*(code *)((int64_t)
               (((int)*(uint64_t *)(param_2 + 0x198) - (int)*(uint64_t *)(param_2 + 800)) +
               0x7223cd69) + 0x7fffa56965da))
              (*(uint64_t *)(param_2 + 0x198),0x18b9aa4a,
               *(uint64_t *)(param_2 + 0x218) >> 0x3d ^ *(uint64_t *)(param_2 + 0x218));
  }
  pauVar1 = *(uint8_t (**) [16])(param_2 + 0xb0);
  if (*(int64_t *)*pauVar1 != 0) {
    uVar2 = ((uint16_t)*(uint64_t *)(param_2 + 800) ^ 0x6bbe) -
            (short)*(uint64_t *)(param_2 + 0x198);
    (*(code *)(&UNK_7fffa568efe6 + (short)(uVar2 * 8 | uVar2 >> 0xd)))();
    *pauVar1 = (uint8_t  [16])0x0;
    *(uint64_t *)pauVar1[1] = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4ee8dac  |  RVA: 0x778dac  |  Size: 61 bytes
// Callers  : none
// Callees  : FUN_7fffa5213ecc@0xaa3ecc, FUN_7fffa50fed00@0x98ed00, FUN_7fffa52cf298@0xb5f298, FUN_7fffa564c070@0xedc070, FUN_7fffa569b30c@0xf2b30c
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t FUN_7fffa4ee8dac(void)

{
  uint64_t uVar1;
  
  uVar1 = _DAT_7fffa4780040;
  FUN_7fffa52cf298(_DAT_7fffa4780040);
  FUN_7fffa50fed00(uVar1);
  FUN_7fffa569b30c(uVar1);
  FUN_7fffa564c070(uVar1);
  FUN_7fffa5213ecc(uVar1);
  return 1;
}


// ============================================================================
// Function : FUN_7fffa4ee8dec  |  RVA: 0x778dec  |  Size: 26 bytes
// Callers  : FUN_7fffa549cd74@0xd2cd74
// Callees  : FUN_7fffa5130724@0x9c0724
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa4ee8dec(int64_t *param_1)

{
  if (*param_1 != _DAT_7fffa4781c38) {
    FUN_7fffa5130724();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4ee8e08  |  RVA: 0x778e08  |  Size: 264 bytes
// Callers  : FUN_7fffa5177ef8@0xa07ef8
// Callees  : FUN_7fffa4ed2030@0x762030, FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
void FUN_7fffa4ee8e08(int64_t param_1)

{
  if (param_1 != 0) {
    FUN_7fffa4ed2030(param_1,7);
    FUN_7fffa4ed2030(param_1 + 0x38,7);
    FUN_7fffa4ed2030(param_1 + 0x70,0xc);
    FUN_7fffa4ed2030(param_1 + 0xd0,0xc);
    FUN_7fffa4ed2030(param_1 + 0x130,2);
    FUN_7fffa52d8dd0(*(uint64_t *)(param_1 + 0x140));
    FUN_7fffa52d8dd0(*(uint64_t *)(param_1 + 0x148));
    FUN_7fffa52d8dd0(*(uint64_t *)(param_1 + 0x150));
    FUN_7fffa4ed2030(param_1 + 0x160,7);
    FUN_7fffa4ed2030(param_1 + 0x198,7);
    FUN_7fffa4ed2030(param_1 + 0x1d0,0xc);
    FUN_7fffa4ed2030(param_1 + 0x230,0xc);
    FUN_7fffa4ed2030(param_1 + 0x290,2);
    FUN_7fffa52d8dd0(*(uint64_t *)(param_1 + 0x2a0));
    FUN_7fffa52d8dd0(*(uint64_t *)(param_1 + 0x2a8));
    FUN_7fffa52d8dd0(*(uint64_t *)(param_1 + 0x2b0));
    FUN_7fffa52d8dd0(*(uint64_t *)(param_1 + 0x2b8));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4ee8f10  |  RVA: 0x778f10  |  Size: 47 bytes
// Callers  : FUN_7fffa5660944@0xef0944
// Callees  : FUN_7fffa5213854@0xaa3854, FUN_7fffa5487f0c@0xd17f0c
// ============================================================================
bool FUN_7fffa4ee8f10(void)

{
  char cVar1;
  int aiStackX_8 [8];
  
  aiStackX_8[0] = 0;
  cVar1 = FUN_7fffa5213854();
  if (cVar1 == '\0') {
    FUN_7fffa5487f0c(aiStackX_8);
  }
  return aiStackX_8[0] != 1;
}


// ============================================================================
// Function : FUN_7fffa4ee8f40  |  RVA: 0x778f40  |  Size: 535 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4ee8f40(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  char *pcVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  code *pcVar7;
  uint32_t uVar8;
  uint64_t uVar9;
  uint64_t in_R10;
  int64_t lVar10;
  char *pcVar11;
  bool bVar12;
  uint8_t auVar13 [16];
  
  uVar8 = (uint32_t)in_R10 | 1;
  param_3 = (param_3 << 0x21 | param_3 >> 0x1f) ^ (param_3 << 0x36 | param_3 >> 10) ^ param_3;
  param_3 = (param_3 << 2 | param_3 >> 0x3e) ^ (param_3 << 0x2c | param_3 >> 0x14) ^ param_3;
  uVar5 = (param_3 << 4 | param_3 >> 0x3c) ^ param_3;
  uVar9 = param_3 << 0x18 | param_3 >> 0x28;
  uVar6 = uVar9 & uVar5;
  if ((uint64_t)((uVar8 * 0x7cea91c0 | uVar8 * -0x418ab72 >> 0x1b) ^ 0x2d55fa7a) <
      ((in_R10 | 1) * -0x3b5a7bf35ed7e2be |
      (uint64_t)((int64_t)((in_R10 | 1) * 0x6252c20650940ea1) < 0))) {
    uVar6 = uVar5 ^ uVar9;
  }
  uVar6 = (uVar6 << 8 | uVar6 >> 0x38) ^ (uVar6 << 0x30 | uVar6 >> 0x10) ^ uVar6;
  uVar6 = (uVar6 << 0x10 | uVar6 >> 0x30) ^ (uVar6 << 0x20 | uVar6 >> 0x20) ^ uVar6;
  uVar5 = uVar6 << 0x20 | uVar6 >> 0x20;
  uVar6 = *(uint64_t *)(uVar5 + 0x18);
  if (uVar6 != 0) {
    pcVar1 = *(char **)(uVar5 + 0x10);
    lVar10 = *(int64_t *)(uVar5 + 8) * 0x10;
    if (pcVar1 != pcVar1 + lVar10 + 0x10) {
      pcVar11 = pcVar1;
      do {
        bVar2 = (uint8_t)in_R10 & 0xf;
        auVar13[0] = -(*pcVar11 == '\0');
        auVar13[1] = -(pcVar11[1] == '\0');
        auVar13[2] = -(pcVar11[2] == '\0');
        auVar13[3] = -(pcVar11[3] == '\0');
        auVar13[4] = -(pcVar11[4] == '\0');
        auVar13[5] = -(pcVar11[5] == '\0');
        auVar13[6] = -(pcVar11[6] == '\0');
        auVar13[7] = -(pcVar11[7] == '\0');
        auVar13[8] = -(pcVar11[8] == '\0');
        auVar13[9] = -(pcVar11[9] == '\0');
        auVar13[10] = -(pcVar11[10] == '\0');
        auVar13[0xb] = -(pcVar11[0xb] == '\0');
        auVar13[0xc] = -(pcVar11[0xc] == '\0');
        auVar13[0xd] = -(pcVar11[0xd] == '\0');
        auVar13[0xe] = -(pcVar11[0xe] == '\0');
        auVar13[0xf] = -(pcVar11[0xf] == '\0');
        uVar8 = ((uint32_t)(pcVar11 != pcVar1 + lVar10) << 0xe | 0x3fff) &
                ((uint16_t)((uint16_t)(SUB161(auVar13 >> 7,0) & 1) |
                          (uint16_t)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                          (uint16_t)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                          (uint16_t)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                          (uint16_t)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                          (uint16_t)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                          (uint16_t)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                          (uint16_t)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                          (uint16_t)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                          (uint16_t)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                          (uint16_t)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                          (uint16_t)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                          (uint16_t)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                          (uint16_t)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                          (uint16_t)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                         (uint16_t)(auVar13[0xf] >> 7) << 0xf) ^ 0x7fff);
        if (uVar8 != (uint16_t)~(0xffffU >> bVar2 | -1 << 0x10 - bVar2)) {
          do {
            uVar3 = 0;
            for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar3 = uVar3 + 1;
            }
            uVar9 = *(uint64_t *)(uVar6 + (uint64_t)uVar3 * 8);
            if (uVar9 != 0) {
              FUN_7fffa5687c30(0x7fffa568bee9,0xf006bd47,uVar9 >> 0x3d ^ uVar9);
            }
            uVar8 = uVar8 - 1 & uVar8;
          } while (uVar8 != 0);
        }
        uVar6 = uVar6 + 0x78;
        bVar12 = pcVar11 != pcVar1 + lVar10;
        pcVar11 = pcVar11 + 0x10;
      } while (bVar12);
      uVar6 = *(uint64_t *)(uVar5 + 0x18);
      if (uVar6 == 0) {
        return;
      }
    }
    pcVar7 = (code *)((int64_t)(short)(((uint16_t)in_R10 | 1) * 0x2fad) + 0x7fffa568c47b);
    (*pcVar7)(pcVar7,0x639abeed,uVar6 >> 0x3d ^ uVar6);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4ee9170  |  RVA: 0x779170  |  Size: 544 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa4ee9170(int64_t param_1,uint64_t param_2,uint32_t param_3)

{
  uint8_t bVar1;
  uint64_t uVar2;
  uint8_t *in_R10;
  uint64_t in_R11;
  uint64_t uVar3;
  uint8_t in_XMM1_Ba;
  uint8_t bVar4;
  
  uVar2 = (uint64_t)(param_3 ^ 0x8e9252e9);
  bVar4 = (uint8_t)param_3 & 0x1f;
  if (uVar2 < (0x834320ccU >> bVar4 | -0x7cbcdf34 << 0x20 - bVar4)) {
    bVar4 = in_XMM1_Ba & 0xe5;
  }
  else {
    bVar4 = in_XMM1_Ba - 0x1b;
  }
  if (((*in_R10 & 3) == 2) && ((in_R10[4] & 0x10) != 0)) {
    uVar2 = (in_R11 << 0x26 | in_R11 >> 0x1a) ^ (in_R11 << 0x27 | in_R11 >> 0x19) ^ in_R11;
    uVar2 = (uVar2 << 0xe | uVar2 >> 0x32) ^ (uVar2 << 0xc | uVar2 >> 0x34) ^ uVar2;
    uVar2 = (uVar2 << 0x1c | uVar2 >> 0x24) ^ (uVar2 << 0x18 | uVar2 >> 0x28) ^ uVar2;
    uVar2 = (uVar2 << 0x38 | uVar2 >> 8) ^ (uVar2 << 0x30 | uVar2 >> 0x10) ^ uVar2;
    uVar2 = (uVar2 << 0x30 | uVar2 >> 0x10) ^ (uVar2 << 0x20 | uVar2 >> 0x20) ^ uVar2;
    uVar2 = uVar2 << 0x20 | uVar2 >> 0x20;
    bVar4 = bVar4 << 1 | (char)bVar4 < '\0';
    bVar4 = bVar4 * '\x02' ^ bVar4;
    bVar4 = bVar4 * '\x04' ^ bVar4;
    uVar3 = (uint64_t)(uint8_t)(bVar4 << 4 ^ bVar4);
    if (uVar3 + 2 <= uVar2) {
      uVar2 = 0;
      bVar4 = in_R10[5];
      in_R10[5] = bVar4 | 2;
      in_R10[2] = in_R10[2] & 0xf0;
      in_R10[0x20] = *(uint8_t *)(param_1 + uVar3);
      bVar1 = *(uint8_t *)(param_1 + 1 + uVar3);
      in_R10[0x21] = bVar1;
      if ((bVar4 & 1) == 0) {
        uVar2 = (uint64_t)(uint8_t)(in_R10[0xb] + 2);
        in_R10[0xb] = in_R10[0xb] + 2;
        *(uint32_t *)(in_R10 + 0x18) =
             (uint32_t)(uint8_t)(bVar1 >> 1 & 2 | bVar1 & 0x20 | bVar1 >> 2 & 0x10 |
                         bVar1 >> 3 & 1 |
                         bVar1 * '\x04' & 0x40 | (bVar1 & 2) * '\x02' | bVar1 * '\b' & 0xc) |
             *(uint32_t *)(in_R10 + 0x18) & 0xffffff80;
      }
    }
  }
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa4ee9390  |  RVA: 0x779390  |  Size: 748 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa4ee9673) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ee9489) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ee966d) */

void FUN_7fffa4ee9390(void)

{
  uint64_t uVar1;
  
  uRam00007fffa47bfb70 = 0;
  uRam00007fffa47bfb78 = 0xd51aa9a080f71cd1;
  uVar1 = -lRam00007fffa4780fd0;
  uVar1 = uVar1 >> 0x1b ^ uVar1 >> 0x36 ^ uVar1;
  uVar1 = uVar1 >> 0x13 ^ uVar1;
  lRam00007fffa47bfb80 = (uVar1 >> 0x26 ^ uVar1) * -0x7f01fc07f01fc07f;
  uVar1 = uRam00007fffa4780f28 ^ uRam00007fffa4780f80 ^ 0x4f9f9cfa80977591;
  uRam00007fffa47bfb98 = 0x628ee7c16381faa;
  uRam00007fffa47bfb90 = 0xe0e59d70902945b;
  uRam00007fffa47bfb88 = uVar1 >> 0x1b ^ uVar1 >> 0x36 ^ uVar1;
  lRam00007fffa47bfba0 = -lRam00007fffa4781428;
  uRam00007fffa47bfba8 = 0xfcc72c0961b1e4d6;
  return;
}


// ============================================================================
// Function : FUN_7fffa4ee9680  |  RVA: 0x779680  |  Size: 113973 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4ee9680(void) {
    /* +0x779680 */ __asm { PUSH RBP }
    /* +0x779681 */ __asm { PUSH RSI }
    /* +0x779682 */ __asm { PUSH R13 }
    /* +0x779684 */ __asm { PUSH RDI }
    /* +0x779685 */ __asm { PUSH R12 }
    /* +0x779687 */ __asm { PUSH R15 }
    /* +0x779689 */ __asm { PUSH R14 }
    /* +0x77968b */ __asm { PUSH RBX }
    /* +0x77968c */ __asm { SUB RSP,0x538 }
    /* +0x779693 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x77969b */ __asm { MOVDQA xmmword ptr [RBP + 0x4a0],XMM9 }
    /* +0x7796a4 */ __asm { MOVDQA xmmword ptr [RBP + 0x490],XMM13 }
    /* +0x7796ad */ __asm { MOVDQA xmmword ptr [RBP + 0x480],XMM12 }
    /* +0x7796b6 */ __asm { MOVDQA xmmword ptr [RBP + 0x470],XMM10 }
    /* +0x7796bf */ __asm { MOVAPS xmmword ptr [RBP + 0x460],XMM15 }
    /* +0x7796c7 */ __asm { MOVDQA xmmword ptr [RBP + 0x450],XMM6 }
    /* +0x7796cf */ __asm { MOVDQA xmmword ptr [RBP + 0x440],XMM8 }
    /* +0x7796d8 */ __asm { MOV qword ptr [RBP + 0x438],-0x2 }
    /* +0x7796e3 */ __asm { MOV qword ptr [RBP + 0x118],R11 }
    /* +0x7796ea */ __asm { MOV R12,RAX }
    /* +0x7796ed */ __asm { NOT R12 }
    /* +0x7796f0 */ __asm { MOV R14,R12 }
    /* +0x7796f3 */ __asm { ROL R14,0x1d }
    /* +0x7796f7 */ __asm { MOV RDX,R12 }
    /* +0x7796fa */ __asm { ROL RDX,0x16 }
    /* +0x7796fe */ __asm { XOR RDX,R12 }
    /* +0x779701 */ __asm { XOR RDX,R14 }
    /* +0x779704 */ __asm { MOV R8,RDX }
    /* +0x779707 */ __asm { ROL R8,0x2c }
    /* +0x77970b */ __asm { XOR R8,RDX }
    /* +0x77970e */ __asm { MOV R10,RDX }
    /* +0x779711 */ __asm { ROL R10,0x3a }
    /* +0x779715 */ __asm { XOR R8,R10 }
    /* +0x779718 */ __asm { MOV RDX,R8 }
    /* +0x77971b */ __asm { ROL RDX,0x34 }
    /* +0x77971f */ __asm { MOV R13,R8 }
    /* +0x779722 */ __asm { ROL R13,0x18 }
    /* +0x779726 */ __asm { XOR R13,RDX }
    /* +0x779729 */ __asm { XOR R13,R8 }
    /* +0x77972c */ __asm { MOV R8,R13 }
    /* +0x77972f */ __asm { ROL R8,0x28 }
    /* +0x779733 */ __asm { MOV RDX,R13 }
    /* +0x779736 */ __asm { ROL RDX,0x30 }
    /* +0x77973a */ __asm { XOR RDX,R13 }
    /* +0x77973d */ __asm { MOV qword ptr [RBP + 0x138],R8 }
    /* +0x779744 */ __asm { XOR RDX,R8 }
    /* +0x779747 */ __asm { MOV R8,RDX }
    /* +0x77974a */ __asm { ROL R8,0x10 }
    /* +0x77974e */ __asm { MOV RCX,RDX }
    /* +0x779751 */ __asm { ROL RCX,0x20 }
    /* +0x779755 */ __asm { XOR RCX,R8 }
    /* +0x779758 */ __asm { XOR RCX,RDX }
    /* +0x77975b */ __asm { ROL RCX,0x20 }
    /* +0x77975f */ __asm { MOV qword ptr [RBP + 0xb0],RCX }
    /* +0x779766 */ __asm { PUSHFQ }
    /* +0x779767 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x77976f */ __asm { POPFQ }
    /* +0x779770 */ __asm { MOV dword ptr [RBP + 0x200],0xdfffffe0 }
    /* +0x77977a */ __asm { MOV EBX,dword ptr [RBP + 0x200] }
    /* +0x779780 */ __asm { TEST EBX,EBX }
    /* +0x779782 */ __asm { NOP }
    /* +0x779783 */ __asm { NOP }
    /* +0x779784 */ __asm { NOP }
    /* +0x779785 */ __asm { MOV ECX,0x1e60c33 }
    /* +0x77978a */ __asm { IMUL R8D,ECX,-0x194c463f }
    /* +0x779791 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x779798 */ __asm { ROL R8D,CL }
    /* +0x77979b */ __asm { ADD R8D,0xef5911d6 }
    /* +0x7797a2 */ __asm { MOV dword ptr [RBP + 0x200],R8D }
    /* +0x7797a9 */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x7797af */ __asm { CMP ECX,0xad40b0f9 }
    /* +0x7797b5 */ __asm { JNC 0x7fffa4f1fe0c }
    /* +0x7797bb */ __asm { PUSHFQ }
    /* +0x7797bc */ __asm { POP RDX }
    /* +0x7797bd */ __asm { AND RDX,0x100 }
    /* +0x7797c4 */ __asm { MOV qword ptr [RBP + 0x128],RDX }
    /* +0x7797cb */ __asm { NOP }
    /* +0x7797cc */ __asm { NOP }
    /* +0x7797cd */ __asm { NOP }
    /* +0x7797ce */ __asm { NOP }
    /* +0x7797cf */ __asm { NOP }
    /* +0x7797d0 */ __asm { NOP }
    /* +0x7797d1 */ __asm { NOP }
    /* +0x7797d2 */ __asm { NOP }
    /* +0x7797d3 */ __asm { NOP }
    /* +0x7797d4 */ __asm { NOP }
    /* +0x7797d5 */ __asm { NOP }
    /* +0x7797d6 */ __asm { NOP }
    /* +0x7797d7 */ __asm { NOP }
    /* +0x7797d8 */ __asm { MOV RDX,0x0 }
    /* +0x7797df */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x7797e6 */ __asm { MOV dword ptr [RBP + 0x200],0xf73303c3 }
    /* +0x7797f0 */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x7797f6 */ __asm { TEST ECX,ECX }
    /* +0x7797f8 */ __asm { JNS 0x7fffa4f1fe14 }
    /* +0x7797fe */ __asm { MOV R8D,0x1a2cf8f5 }
    /* +0x779804 */ __asm { XOR R8D,0xb52ee2e5 }
    /* +0x77980b */ __asm { MOV R9D,0x6911e133 }
    /* +0x779811 */ __asm { ADD R9D,0x129d13b3 }
    /* +0x779818 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x77981f */ __asm { ROR R9D,CL }
    /* +0x779822 */ __asm { IMUL R8D,R8D,-0x117fa37d }
    /* +0x779829 */ __asm { ROR R8D,CL }
    /* +0x77982c */ __asm { CMP R9,R8 }
    /* +0x77982f */ __asm { JG 0x7fffa4ee9848 }
    /* +0x779831 */ __asm { MOV ECX,0x2ee2575a }
    /* +0x779836 */ __asm { SUB ECX,dword ptr [RBP + 0x118] }
    /* +0x77983c */ __asm { IMUL R9D,ECX,0x558e105d }
    /* +0x779843 */ __asm { NOT R9D }
    /* +0x779846 */ __asm { JMP 0x7fffa4ee985f }
    /* +0x779848 */ __asm { MOV R9D,0x6c40a31c }
    /* +0x77984e */ __asm { XOR R9D,0x34840924 }
    /* +0x779855 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x77985c */ __asm { ROL R9D,CL }
    /* +0x77985f */ __asm { MOV qword ptr [RBP + -0x10],R9 }
    /* +0x779863 */ __asm { MOV RDX,qword ptr [RBP + 0xb0] }
    /* +0x77986a */ __asm { MOV RDX,qword ptr [RDX] }
    /* +0x77986d */ __asm { MOV ECX,dword ptr [RDX] }
    /* +0x77986f */ __asm { MOVD XMM15,dword ptr [RBP + 0x118] }
    /* +0x779878 */ __asm { CMP ECX,0x6 }
    /* +0x77987b */ __asm { JL 0x7fffa4eeced6 }
    /* +0x779881 */ __asm { CMP ECX,0x9 }
    /* +0x779884 */ __asm { JGE 0x7fffa4eecf8b }
    /* +0x77988a */ __asm { CMP ECX,0x6 }
    /* +0x77988d */ __asm { JZ 0x7fffa4eed7de }
    /* +0x779893 */ __asm { CMP ECX,0x8 }
    /* +0x779896 */ __asm { JNZ 0x7fffa4eeef1a }
    /* +0x77989c */ __asm { MOV RCX,qword ptr [RBP + 0xb0] }
    /* +0x7798a3 */ __asm { MOV RDX,qword ptr [RCX + 0x10] }
    /* +0x7798a7 */ __asm { MOV R8,qword ptr [RCX + 0x18] }
    /* +0x7798ab */ __asm { MOV R8,qword ptr [R8] }
    /* +0x7798ae */ __asm { MOV qword ptr [RBP + 0x428],R8 }
    /* +0x7798b5 */ __asm { MOV R8,qword ptr [RCX + 0x20] }
    /* +0x7798b9 */ __asm { MOV R8,qword ptr [R8] }
    /* +0x7798bc */ __asm { MOV qword ptr [RBP + 0x8],R8 }
    /* +0x7798c0 */ __asm { MOV RDX,qword ptr [RDX] }
    /* +0x7798c3 */ __asm { MOV qword ptr [RBP + 0x3a0],RDX }
    /* +0x7798ca */ __asm { MOV dword ptr [RBP + 0x200],0xfcd3d9df }
    /* +0x7798d4 */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x7798da */ __asm { TEST ECX,ECX }
    /* +0x7798dc */ __asm { NOP }
    /* +0x7798dd */ __asm { NOP }
    /* +0x7798de */ __asm { NOP }
    /* +0x7798df */ __asm { NOP }
    /* +0x7798e0 */ __asm { NOP }
    /* +0x7798e1 */ __asm { MOV RDX,qword ptr [RBP + 0x118] }
    /* +0x7798e8 */ __asm { MOV ECX,EDX }
    /* +0x7798ea */ __asm { OR ECX,0x1 }
    /* +0x7798ed */ __asm { MOV dword ptr [RBP + 0x150],ECX }
    /* +0x7798f3 */ __asm { MOV R8,qword ptr [RBP + -0x10] }
    /* +0x7798f7 */ __asm { MOV ECX,R8D }
    /* +0x7798fa */ __asm { OR ECX,0x1 }
    /* +0x7798fd */ __asm { MOV dword ptr [RBP + 0x120],ECX }
    /* +0x779903 */ __asm { PUSHFQ }
    /* +0x779904 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x77990c */ __asm { POPFQ }
    /* +0x77990d */ __asm { PXOR XMM15,XMM15 }
    /* +0x779912 */ __asm { MOVDQA xmmword ptr [RBP + 0x30],XMM15 }
    /* +0x779918 */ __asm { MOV qword ptr [RBP + 0x40],0x0 }
    /* +0x779920 */ __asm { MOV ECX,EDX }
    /* +0x779922 */ __asm { OR ECX,0x1 }
    /* +0x779925 */ __asm { MOV dword ptr [RBP + -0x8],ECX }
    /* +0x779928 */ __asm { MOV ECX,R8D }
    /* +0x77992b */ __asm { OR ECX,0x1 }
    /* +0x77992e */ __asm { MOV dword ptr [RBP + 0x400],ECX }
    /* +0x779934 */ __asm { MOV ECX,EDX }
    /* +0x779936 */ __asm { OR ECX,0x1 }
    /* +0x779939 */ __asm { MOV dword ptr [RBP + 0x170],ECX }
    /* +0x77993f */ __asm { MOVDQA XMM6,xmmword ptr [0x7fffa56bbb90] }
    /* +0x779947 */ __asm { MOV ECX,EDX }
    /* +0x779949 */ __asm { OR ECX,0x1 }
    /* +0x77994c */ __asm { MOV dword ptr [RBP + 0x318],ECX }
    /* +0x779952 */ __asm { MOV ECX,R8D }
    /* +0x779955 */ __asm { OR ECX,0x1 }
    /* +0x779958 */ __asm { MOV dword ptr [RBP + 0xe8],ECX }
    /* +0x77995e */ __asm { MOV ECX,EDX }
    /* +0x779960 */ __asm { OR ECX,0x1 }
    /* +0x779963 */ __asm { MOV dword ptr [RBP + 0x1e0],ECX }
    /* +0x779969 */ __asm { MOV ECX,EDX }
    /* +0x77996b */ __asm { OR ECX,0x1 }
    /* +0x77996e */ __asm { MOV dword ptr [RBP + 0x138],ECX }
    /* +0x779974 */ __asm { MOV ECX,EDX }
    /* +0x779976 */ __asm { OR ECX,0x1 }
    /* +0x779979 */ __asm { MOV dword ptr [RBP + -0x18],ECX }
    /* +0x77997c */ __asm { MOV ECX,R8D }
    /* +0x77997f */ __asm { OR ECX,0x1 }
    /* +0x779982 */ __asm { MOV dword ptr [RBP + 0xa0],ECX }
    /* +0x779988 */ __asm { MOV ECX,R8D }
    /* +0x77998b */ __asm { OR ECX,0x1 }
    /* +0x77998e */ __asm { MOV dword ptr [RBP + 0x3c8],ECX }
    /* +0x779994 */ __asm { MOV R15D,0x1 }
    /* +0x77999a */ __asm { MOV qword ptr [RBP + 0x18],0x0 }
    /* +0x7799a2 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0x7799b0 */ __asm { MOV R8W,0xac9e }
    /* +0x7799b5 */ __asm { XOR R8D,dword ptr [RBP + 0x118] }
    /* +0x7799bc */ __asm { MOV RCX,qword ptr [RBP + -0x10] }
    /* +0x7799c0 */ __asm { ROL R8W,CL }
    /* +0x7799c4 */ __asm { ADD R8D,0xffffacf6 }
    /* +0x7799cb */ __asm { MOVZX R9D,R8W }
    /* +0x7799cf */ __asm { CMP R15,R9 }
    /* +0x7799d2 */ __asm { JNC 0x7fffa4ef7230 }
    /* +0x7799d8 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x7799df */ __asm { MOV RDX,0x0 }
    /* +0x7799e6 */ __asm { PUSHFQ }
    /* +0x7799e7 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x7799ef */ __asm { POPFQ }
    /* +0x7799f0 */ __asm { MOV dword ptr [RBP + 0x200],0xecbfbd98 }
    /* +0x7799fa */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x779a00 */ __asm { MOV R9W,0xd243 }
    /* +0x779a05 */ __asm { MOV qword ptr [RBP + 0x430],R9 }
    /* +0x779a0c */ __asm { MOV R12,qword ptr [RBP + -0x10] }
    /* +0x779a10 */ __asm { LEA R8D,[R9 + R12*0x1] }
    /* +0x779a14 */ __asm { ROL R8W,0x5 }
    /* +0x779a19 */ __asm { NOT R8D }
    /* +0x779a1c */ __asm { ROL R8W,0x2 }
    /* +0x779a21 */ __asm { MOVZX R8D,R8W }
    /* +0x779a25 */ __asm { CMP ECX,R8D }
    /* +0x779a28 */ __asm { JGE 0x7fffa4eeb2b8 }
    /* +0x779a2e */ __asm { MOV RDX,0x4fab0fda8f9c728d }
    /* +0x779a38 */ __asm { MOV RAX,0x1f6ab4830d2ce4bf }
    /* +0x779a42 */ __asm { MOV RCX,-0x7c9a946e51875990 }
    /* +0x779a4c */ __asm { MOV R8,0x1972575809da0937 }
    /* +0x779a56 */ __asm { MOV R9,-0x7cfe941c51e659c8 }
    /* +0x779a60 */ __asm { MOV R10,-0x7e6df35855008406 }
    /* +0x779a6a */ __asm { MOV R11,0x1f36b4bc0d13e4e3 }
    /* +0x779a74 */ __asm { MOV R14,-0x7e18f334556f8454 }
    /* +0x779a7e */ __asm { MOVQ XMM2,R9 }
    /* +0x779a83 */ __asm { MOVQ XMM8,RAX }
    /* +0x779a88 */ __asm { LEA R9,[RBP + 0x200] }
    /* +0x779a8f */ __asm { MOV R13,0x3150cb3deabed324 }
    /* +0x779a99 */ __asm { MOVQ XMM0,R14 }
    /* +0x779a9e */ __asm { MOV RAX,0x4fc00fa98ff572e9 }
    /* +0x779aa8 */ __asm { MOVQ XMM9,RAX }
    /* +0x779aad */ __asm { MOV EAX,0xcd3bd813 }
    /* +0x779ab2 */ __asm { SUB EAX,R12D }
    /* +0x779ab5 */ __asm { MOV R14D,0xf87f52ea }
    /* +0x779abb */ __asm { LEA RDI,[0x7fffa5273f76] }
    /* +0x779ac2 */ __asm { XOR EAX,0x36225084 }
    /* +0x779ac7 */ __asm { MOV RSI,qword ptr [RBP + 0x118] }
    /* +0x779ace */ __asm { ADD EAX,ESI }
    /* +0x779ad0 */ __asm { CDQE }
    /* +0x779ad2 */ __asm { MOV qword ptr [RBP + 0x218],R10 }
    /* +0x779ad9 */ __asm { MOV qword ptr [RBP + 0x220],R8 }
    /* +0x779ae0 */ __asm { MOV qword ptr [RBP + 0x210],RDX }
    /* +0x779ae7 */ __asm { MOV qword ptr [RBP + 0x208],RCX }
    /* +0x779aee */ __asm { PUNPCKLQDQ XMM9,XMM0 }
    /* +0x779af3 */ __asm { MOV qword ptr [RBP + 0x228],R13 }
    /* +0x779afa */ __asm { MOV RBX,0x1972575809bf095a }
    /* +0x779b04 */ __asm { XOR EBX,dword ptr [R9 + 0x20] }
    /* +0x779b08 */ __asm { PXOR XMM9,xmmword ptr [R9 + 0x10] }
    /* +0x779b0e */ __asm { MOV qword ptr [RBP + 0x200],R11 }
    /* +0x779b15 */ __asm { PUNPCKLQDQ XMM8,XMM2 }
    /* +0x779b1a */ __asm { PXOR XMM8,xmmword ptr [R9] }
    /* +0x779b1f */ __asm { ADD R14D,0x7ad0a46e }
    /* +0x779b26 */ __asm { MOV ECX,R12D }
    /* +0x779b29 */ __asm { ROL R14D,CL }
    /* +0x779b2c */ __asm { SUB R14D,ESI }
    /* +0x779b2f */ __asm { MOVSXD RDX,R14D }
    /* +0x779b32 */ __asm { ADD RDX,RDI }
    /* +0x779b35 */ __asm { MOVDQA xmmword ptr [RBP + 0x320],XMM15 }
    /* +0x779b3e */ __asm { MOVDQA xmmword ptr [RBP + 0x330],XMM15 }
    /* +0x779b47 */ __asm { MOV R10,0x1865d7a5983f }
    /* +0x779b51 */ __asm { CALL RDX }
    /* +0x779b53 */ __asm { ROL RCX,0x2c }
    /* +0x779b57 */ __asm { MOV RDX,RCX }
    /* +0x779b5a */ __asm { SHL RDX,0x36 }
    /* +0x779b5e */ __asm { SUB RCX,RDX }
    /* +0x779b61 */ __asm { MOV qword ptr [RBP + 0x338],0x17 }
    /* +0x779b6c */ __asm { MOV qword ptr [RBP + 0x330],0x12 }
    /* +0x779b77 */ __asm { MOVDQU xmmword ptr [RCX + 0x10],XMM9 }
    /* +0x779b7d */ __asm { MOV qword ptr [RBP + 0x320],RCX }
    /* +0x779b84 */ __asm { MOV word ptr [RCX + 0x24],0x0 }
    /* +0x779b8a */ __asm { MOVDQU xmmword ptr [RCX],XMM8 }
    /* +0x779b8f */ __asm { MOV dword ptr [RCX + 0x20],EBX }
    /* +0x779b92 */ __asm { CMP R15,0x9 }
    /* +0x779b96 */ __asm { MOV R13,R12 }
    /* +0x779b99 */ __asm { JBE 0x7fffa4ee9c60 }
    /* +0x779b9f */ __asm { MOV CX,0xcc3f }
    /* +0x779ba3 */ __asm { IMUL ECX,dword ptr [RBP + -0x8] }
    /* +0x779ba7 */ __asm { XOR ECX,R13D }
    /* +0x779baa */ __asm { IMUL R9D,ECX,0x7bad }
    /* +0x779bb1 */ __asm { MOV R8,R15 }
    /* +0x779bb4 */ __asm { MOV RAX,R15 }
    /* +0x779bb7 */ __asm { MOV RDX,0x28f5c28f5c28f5c3 }
    /* +0x779bc1 */ __asm { MUL RDX }
    /* +0x779bc4 */ __asm { MOV RCX,RAX }
    /* +0x779bc7 */ __asm { MOV R10,0x28f5c28f5c28f5c }
    /* +0x779bd1 */ __asm { IMUL R8,R10 }
    /* +0x779bd5 */ __asm { ADD R8,RDX }
    /* +0x779bd8 */ __asm { MOV RAX,R8 }
    /* +0x779bdb */ __asm { MOV R10D,0x64 }
    /* +0x779be1 */ __asm { MUL R10 }
    /* +0x779be4 */ __asm { MOV R11,RDX }
    /* +0x779be7 */ __asm { MOV R8,RAX }
    /* +0x779bea */ __asm { MOV RAX,RCX }
    /* +0x779bed */ __asm { MUL R10 }
    /* +0x779bf0 */ __asm { MOVSX RCX,R9W }
    /* +0x779bf4 */ __asm { LEA R10,[0x7fffa5865c93] }
    /* +0x779bfb */ __asm { ADD R10,RCX }
    /* +0x779bfe */ __asm { ADD RDX,R8 }
    /* +0x779c01 */ __asm { ADC R11D,0x0 }
    /* +0x779c05 */ __asm { MOV ECX,dword ptr [R10 + R11*0x4] }
    /* +0x779c09 */ __asm { MOV dword ptr [RBP + 0x226],ECX }
    /* +0x779c0f */ __asm { LEA R14,[RBP + 0x226] }
    /* +0x779c16 */ __asm { CMP R15,0x64 }
    /* +0x779c1a */ __asm { LEA R12,[RBP + 0x60] }
    /* +0x779c1e */ __asm { JC 0x7fffa4ee9c78 }
    /* +0x779c20 */ __asm { MOV RAX,R15 }
    /* +0x779c23 */ __asm { MOV RDX,0x28f5c28f5c28f5c3 }
    /* +0x779c2d */ __asm { MUL RDX }
    /* +0x779c30 */ __asm { MOV R8,RDX }
    /* +0x779c33 */ __asm { MOV RAX,R15 }
    /* +0x779c36 */ __asm { MOV RDX,0x28f5c28f5c28f5c }
    /* +0x779c40 */ __asm { MUL RDX }
    /* +0x779c43 */ __asm { ADD RAX,R8 }
    /* +0x779c46 */ __asm { ADC DX,0x30 }
    /* +0x779c4a */ __asm { MOV word ptr [RBP + 0x224],DX }
    /* +0x779c51 */ __asm { LEA R14,[RBP + 0x224] }
    /* +0x779c58 */ __asm { JMP 0x7fffa4ee9c78 }
    /* +0x779c60 */ __asm { MOV ECX,R15D }
    /* +0x779c63 */ __asm { OR ECX,0x30 }
    /* +0x779c66 */ __asm { MOV word ptr [RBP + 0x228],CX }
    /* +0x779c6d */ __asm { LEA R14,[RBP + 0x228] }
    /* +0x779c74 */ __asm { LEA R12,[RBP + 0x60] }
    /* +0x779c78 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM15 }
    /* +0x779c7e */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM15 }
    /* +0x779c84 */ __asm { LEA RBX,[RBP + 0x22a] }
    /* +0x779c8b */ __asm { SUB RBX,R14 }
    /* +0x779c8e */ __asm { MOV RDI,RBX }
    /* +0x779c91 */ __asm { SAR RDI,0x1 }
    /* +0x779c94 */ __asm { MOV RDX,0x7fffffffffffffff }
    /* +0x779c9e */ __asm { CMP RDI,RDX }
    /* +0x779ca1 */ __asm { JNC 0x7fffa4f1f83c }
    /* +0x779ca7 */ __asm { CMP RDI,0x7 }
    /* +0x779cab */ __asm { MOV qword ptr [RBP + 0x158],R15 }
    /* +0x779cb2 */ __asm { JBE 0x7fffa4ee9d30 }
    /* +0x779cb4 */ __asm { MOV R11,RDI }
    /* +0x779cb7 */ __asm { OR R11,0x7 }
    /* +0x779cbb */ __asm { CMP R11,0xb }
    /* +0x779cbf */ __asm { MOV ESI,0xa }
    /* +0x779cc4 */ __asm { CMOVNC RSI,R11 }
    /* +0x779cc8 */ __asm { LEA RDX,[RSI + RSI*0x1] }
    /* +0x779ccc */ __asm { CMP R11,0x7ff }
    /* +0x779cd3 */ __asm { JC 0x7fffa4ee9d70 }
    /* +0x779cd9 */ __asm { MOV CX,0x44c1 }
    /* +0x779cdd */ __asm { LEA R8,[0x7fffa52282f7] }
    /* +0x779ce4 */ __asm { IMUL EAX,ECX,0x37e1 }
    /* +0x779cea */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x779cf1 */ __asm { ROR AX,CL }
    /* +0x779cf4 */ __asm { MOV ECX,R13D }
    /* +0x779cf7 */ __asm { ROL AX,CL }
    /* +0x779cfa */ __asm { ADD RDX,0x29 }
    /* +0x779cfe */ __asm { IMUL R9D,EAX,-0x65dd }
    /* +0x779d05 */ __asm { MOVSX R10,R9W }
    /* +0x779d09 */ __asm { ADD R10,R8 }
    /* +0x779d0c */ __asm { MOV RCX,RDX }
    /* +0x779d0f */ __asm { CALL R10 }
    /* +0x779d12 */ __asm { MOV RCX,RAX }
    /* +0x779d15 */ __asm { ADD RCX,0x27 }
    /* +0x779d19 */ __asm { AND RCX,-0x20 }
    /* +0x779d1d */ __asm { MOV qword ptr [RCX + -0x8],RAX }
    /* +0x779d21 */ __asm { JMP 0x7fffa4ee9da9 }
    /* +0x779d30 */ __asm { MOV qword ptr [RBP + 0x78],0x7 }
    /* +0x779d38 */ __asm { MOV qword ptr [RBP + 0x70],RDI }
    /* +0x779d3c */ __asm { MOV RCX,R12 }
    /* +0x779d3f */ __asm { MOV R8,RBX }
    /* +0x779d42 */ __asm { MOV RDX,R14 }
    /* +0x779d45 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x779d4a */ __asm { MOV word ptr [RBP + RDI*0x2 + 0x60],0x0 }
    /* +0x779d51 */ __asm { MOV RSI,qword ptr [RBP + 0x78] }
    /* +0x779d55 */ __asm { MOV R8,qword ptr [RBP + 0x60] }
    /* +0x779d59 */ __asm { MOV RDI,qword ptr [RBP + 0x70] }
    /* +0x779d5d */ __asm { MOV R15D,0x12 }
    /* +0x779d63 */ __asm { MOV EBX,0x17 }
    /* +0x779d68 */ __asm { JMP 0x7fffa4ee9ddf }
    /* +0x779d70 */ __asm { MOV R8D,0x15782b4f }
    /* +0x779d76 */ __asm { ADD RDX,0x2 }
    /* +0x779d7a */ __asm { ADD R8D,0x5f5b1680 }
    /* +0x779d81 */ __asm { IMUL R8D,dword ptr [RBP + 0x120] }
    /* +0x779d89 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x779d90 */ __asm { ROR R8D,CL }
    /* +0x779d93 */ __asm { LEA RCX,[0x7fffa5233aa6] }
    /* +0x779d9a */ __asm { MOVSXD R8,R8D }
    /* +0x779d9d */ __asm { ADD R8,RCX }
    /* +0x779da0 */ __asm { MOV RCX,RDX }
    /* +0x779da3 */ __asm { CALL R8 }
    /* +0x779da6 */ __asm { MOV RCX,RAX }
    /* +0x779da9 */ __asm { MOV qword ptr [RBP + 0x78],RSI }
    /* +0x779dad */ __asm { MOV R8,RBX }
    /* +0x779db0 */ __asm { MOV RDX,R14 }
    /* +0x779db3 */ __asm { MOV R14,RCX }
    /* +0x779db6 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x779dbb */ __asm { MOV R8,R14 }
    /* +0x779dbe */ __asm { MOV qword ptr [RBP + 0x60],R14 }
    /* +0x779dc2 */ __asm { MOV word ptr [R14 + RBX*0x1],0x0 }
    /* +0x779dc9 */ __asm { MOV R15,qword ptr [RBP + 0x330] }
    /* +0x779dd0 */ __asm { MOV RBX,qword ptr [RBP + 0x338] }
    /* +0x779dd7 */ __asm { MOV qword ptr [RBP + 0x70],RDI }
    /* +0x779ddb */ __asm { MOV R13,qword ptr [RBP + -0x10] }
    /* +0x779ddf */ __asm { MOV RCX,RBX }
    /* +0x779de2 */ __asm { SUB RCX,R15 }
    /* +0x779de5 */ __asm { CMP RSI,0x8 }
    /* +0x779de9 */ __asm { MOV RDX,R12 }
    /* +0x779dec */ __asm { CMOVNC RDX,R8 }
    /* +0x779df0 */ __asm { CMP RDI,RCX }
    /* +0x779df3 */ __asm { JBE 0x7fffa4ee9f80 }
    /* +0x779df9 */ __asm { MOV qword ptr [RBP + 0x408],RSI }
    /* +0x779e00 */ __asm { MOV R10,0x7ffffffffffffffe }
    /* +0x779e0a */ __asm { MOV RCX,R10 }
    /* +0x779e0d */ __asm { SUB RCX,R15 }
    /* +0x779e10 */ __asm { CMP RCX,RDI }
    /* +0x779e13 */ __asm { JC 0x7fffa4f1f975 }
    /* +0x779e19 */ __asm { MOV qword ptr [RBP + 0x3c0],RDX }
    /* +0x779e20 */ __asm { MOV qword ptr [RBP + 0x1d0],R8 }
    /* +0x779e27 */ __asm { LEA RDX,[RDI + R15*0x1] }
    /* +0x779e2b */ __asm { MOV qword ptr [RBP + 0x178],RDX }
    /* +0x779e32 */ __asm { OR RDX,0x7 }
    /* +0x779e36 */ __asm { MOV RCX,0x0 }
    /* +0x779e3d */ __asm { NOP }
    /* +0x779e3e */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x779e45 */ __asm { MOV RSI,R10 }
    /* +0x779e48 */ __asm { CMP RDX,R10 }
    /* +0x779e4b */ __asm { JA 0x7fffa4ee9e75 }
    /* +0x779e4d */ __asm { MOV R8,RBX }
    /* +0x779e50 */ __asm { SHR R8,0x1 }
    /* +0x779e53 */ __asm { MOV RSI,0x7ffffffffffffffe }
    /* +0x779e5d */ __asm { MOV RCX,RSI }
    /* +0x779e60 */ __asm { SUB RCX,R8 }
    /* +0x779e63 */ __asm { CMP RBX,RCX }
    /* +0x779e66 */ __asm { JA 0x7fffa4ee9e75 }
    /* +0x779e68 */ __asm { ADD R8,RBX }
    /* +0x779e6b */ __asm { CMP RDX,R8 }
    /* +0x779e6e */ __asm { CMOVA R8,RDX }
    /* +0x779e72 */ __asm { MOV RSI,R8 }
    /* +0x779e75 */ __asm { LEA R10,[0x2 + RSI*0x2] }
    /* +0x779e7d */ __asm { MOV RDX,R10 }
    /* +0x779e80 */ __asm { SHL RDX,0x3c }
    /* +0x779e84 */ __asm { MOV ECX,0x1d290ee1 }
    /* +0x779e89 */ __asm { SUB ECX,R13D }
    /* +0x779e8c */ __asm { ROL ECX,0x1 }
    /* +0x779e8e */ __asm { LEA R8,[0x7fffa526c105] }
    /* +0x779e95 */ __asm { IMUL ECX,dword ptr [RBP + 0x150] }
    /* +0x779e9c */ __asm { MOVSXD RAX,ECX }
    /* +0x779e9f */ __asm { MOV R9W,0xd1db }
    /* +0x779ea4 */ __asm { XOR R9D,0x14 }
    /* +0x779ea8 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x779eaf */ __asm { ROL R9W,CL }
    /* +0x779eb3 */ __asm { XOR RDX,R10 }
    /* +0x779eb6 */ __asm { SHL R10,0xe }
    /* +0x779eba */ __asm { XOR R9D,R13D }
    /* +0x779ebd */ __asm { ADD R9D,0xffff9679 }
    /* +0x779ec4 */ __asm { MOVSX RCX,R9W }
    /* +0x779ec8 */ __asm { ADD RCX,R8 }
    /* +0x779ecb */ __asm { MOV R8,0x1865d799980f }
    /* +0x779ed5 */ __asm { ADD R10,R8 }
    /* +0x779ed8 */ __asm { ADD R10,RDX }
    /* +0x779edb */ __asm { CALL RCX }
    /* +0x779edd */ __asm { MOV R14,RCX }
    /* +0x779ee0 */ __asm { ROL R14,0x2c }
    /* +0x779ee4 */ __asm { MOV RDX,R14 }
    /* +0x779ee7 */ __asm { SHL RDX,0x36 }
    /* +0x779eeb */ __asm { SUB R14,RDX }
    /* +0x779eee */ __asm { MOV RDX,qword ptr [RBP + 0x178] }
    /* +0x779ef5 */ __asm { MOV qword ptr [RBP + 0x330],RDX }
    /* +0x779efc */ __asm { MOV qword ptr [RBP + 0x338],RSI }
    /* +0x779f03 */ __asm { CMP RBX,0x8 }
    /* +0x779f07 */ __asm { JNC 0x7fffa4eea000 }
    /* +0x779f0d */ __asm { MOV ECX,0x3c844359 }
    /* +0x779f12 */ __asm { MOV R8D,0xb9242352 }
    /* +0x779f18 */ __asm { SUB R8D,ECX }
    /* +0x779f1b */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x779f22 */ __asm { XOR R8D,R9D }
    /* +0x779f25 */ __asm { MOVSXD RDX,R8D }
    /* +0x779f28 */ __asm { LEA RBX,[RDI + RDI*0x1] }
    /* +0x779f2c */ __asm { MOV ECX,0xfad6e349 }
    /* +0x779f31 */ __asm { XOR ECX,R9D }
    /* +0x779f34 */ __asm { IMUL R9D,ECX,-0x293ea8e9 }
    /* +0x779f3b */ __asm { ROL R9D,0x11 }
    /* +0x779f3f */ __asm { ADD R9D,R13D }
    /* +0x779f42 */ __asm { CMP RDX,R9 }
    /* +0x779f45 */ __asm { SETLE CL }
    /* +0x779f48 */ __asm { MOV R8,R15 }
    /* +0x779f4b */ __asm { SHL R8,CL }
    /* +0x779f4e */ __asm { MOV RCX,R14 }
    /* +0x779f51 */ __asm { LEA RDX,[RBP + 0x320] }
    /* +0x779f58 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x779f5d */ __asm { LEA R15,[R14 + R15*0x2] }
    /* +0x779f61 */ __asm { MOV RCX,R15 }
    /* +0x779f64 */ __asm { MOV R8,RBX }
    /* +0x779f67 */ __asm { MOV RDX,qword ptr [RBP + 0x3c0] }
    /* +0x779f6e */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x779f73 */ __asm { MOV word ptr [R15 + RDI*0x2],0x0 }
    /* +0x779f7a */ __asm { JMP 0x7fffa4eea0f4 }
    /* +0x779f80 */ __asm { MOV R12,R8 }
    /* +0x779f83 */ __asm { MOV R8W,0xb898 }
    /* +0x779f88 */ __asm { IMUL R8D,dword ptr [RBP + 0x3c8] }
    /* +0x779f90 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x779f97 */ __asm { ROR R8W,CL }
    /* +0x779f9b */ __asm { LEA R13,[R15 + RDI*0x1] }
    /* +0x779f9f */ __asm { ROL R8W,0x8 }
}


// ============================================================================
// Function : FUN_7fffa4f108ac  |  RVA: 0x7a08ac  |  Size: 72776 bytes
// Callers  : FUN_7fffa4f108ac@0x7a08ac
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa4f108ac@0x7a08ac
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4f108ac(void) {
    /* +0x7a0890 */ __asm { MOV qword ptr [R12 + 0x18],0xf }
    /* +0x7a0899 */ __asm { MOV qword ptr [R12 + 0x10],0x0 }
    /* +0x7a08a2 */ __asm { MOV uint8_t ptr [R12],0x0 }
    /* +0x7a08a7 */ __asm { LEA RDX,[R12 + 0x20] }
    /* +0x7a08ac */ __asm { MOV R12,RDX }
    /* +0x7a08af */ __asm { CMP RDX,RDI }
    /* +0x7a08b2 */ __asm { JZ 0x7fffa4f1090a }
    /* +0x7a08b4 */ __asm { CMP qword ptr [R12 + 0x18],0x10 }
    /* +0x7a08ba */ __asm { JC 0x7fffa4f10890 }
    /* +0x7a08bc */ __asm { MOV R10,qword ptr [R12] }
    /* +0x7a08c0 */ __asm { LEA RDX,[0x7fffa5693ffb] }
    /* +0x7a08c7 */ __asm { MOV EAX,0x14b3f86b }
    /* +0x7a08cc */ __asm { MOV ECX,0xefaf7220 }
    /* +0x7a08d1 */ __asm { IMUL R11D,ECX,-0x788b9795 }
    /* +0x7a08d8 */ __asm { ADD R11D,0xa33e3803 }
    /* +0x7a08df */ __asm { XOR R11D,EBX }
    /* +0x7a08e2 */ __asm { IMUL R11D,ESI }
    /* +0x7a08e6 */ __asm { MOV R8,R10 }
    /* +0x7a08e9 */ __asm { IMUL EAX,dword ptr [RBP + -0x18] }
    /* +0x7a08ed */ __asm { ROL EAX,0x13 }
    /* +0x7a08f0 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x7a08f7 */ __asm { ROR EAX,CL }
    /* +0x7a08f9 */ __asm { SHR R8,0x3d }
    /* +0x7a08fd */ __asm { XOR R8,R10 }
    /* +0x7a0900 */ __asm { MOVSXD RCX,EAX }
    /* +0x7a0903 */ __asm { ADD RCX,RDX }
    /* +0x7a0906 */ __asm { CALL RCX }
    /* +0x7a0908 */ __asm { JMP 0x7fffa4f10890 }
    /* +0x7a090a */ __asm { MOV R12,qword ptr [RBP + 0x30] }
    /* +0x7a090e */ __asm { MOV R11D,0x5ca3dd8e }
    /* +0x7a0914 */ __asm { ADD R11D,0x7ffe0324 }
    /* +0x7a091b */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x7a0922 */ __asm { MOV ECX,R9D }
    /* +0x7a0925 */ __asm { ROR R11D,CL }
    /* +0x7a0928 */ __asm { MOV ECX,EBX }
    /* +0x7a092a */ __asm { ROL R11D,CL }
    /* +0x7a092d */ __asm { LEA RDX,[0x7fffa5689e8b] }
    /* +0x7a0934 */ __asm { MOV R8,R12 }
    /* +0x7a0937 */ __asm { SHR R8,0x3d }
    /* +0x7a093b */ __asm { XOR R8,R12 }
    /* +0x7a093e */ __asm { MOV CX,0x6253 }
    /* +0x7a0942 */ __asm { XOR ECX,EBX }
    /* +0x7a0944 */ __asm { SUB ECX,R9D }
    /* +0x7a0947 */ __asm { ROL CX,0x3 }
    /* +0x7a094b */ __asm { MOVSX RCX,CX }
    /* +0x7a094f */ __asm { ADD RCX,RDX }
    /* +0x7a0952 */ __asm { CALL RCX }
    /* +0x7a0954 */ __asm { MOV R8,qword ptr [RBP + 0x408] }
    /* +0x7a095b */ __asm { MOV qword ptr [RBP + 0x30],R8 }
    /* +0x7a095f */ __asm { MOV RDX,qword ptr [RBP + 0x178] }
    /* +0x7a0966 */ __asm { SHL RDX,0x5 }
    /* +0x7a096a */ __asm { ADD RDX,R8 }
    /* +0x7a096d */ __asm { MOV qword ptr [RBP + 0x38],RDX }
    /* +0x7a0971 */ __asm { SHL R13,0x5 }
    /* +0x7a0975 */ __asm { ADD R13,R8 }
    /* +0x7a0978 */ __asm { MOV qword ptr [RBP + 0x40],R13 }
    /* +0x7a097c */ __asm { MOV R12D,dword ptr [RBP + -0x18] }
    /* +0x7a0980 */ __asm { MOV dword ptr [RBP + 0x200],0x2adb33d0 }
    /* +0x7a098a */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x7a0990 */ __asm { TEST CL,0x1 }
    /* +0x7a0993 */ __asm { JZ 0x7fffa4f10170 }
    /* +0x7a09a1 */ __asm { MOV DL,0xd6 }
    /* +0x7a09a3 */ __asm { POPFQ }
    /* +0x7a09a4 */ __asm { JMP 0x7fffa4f10170 }
    /* +0x7a09b2 */ __asm { MOV R14D,0x5837a464 }
    /* +0x7a09b8 */ __asm { LEA RDX,[0x7fffa564e9d8] }
    /* +0x7a09bf */ __asm { MOV R8D,0x7ed26ccb }
    /* +0x7a09c5 */ __asm { XOR R8D,0x6fec2135 }
    /* +0x7a09cc */ __asm { MOV EAX,ESI }
    /* +0x7a09ce */ __asm { MOV RSI,qword ptr [RBP + 0x118] }
    /* +0x7a09d5 */ __asm { MOV ECX,ESI }
    /* +0x7a09d7 */ __asm { ROL R8D,CL }
    /* +0x7a09da */ __asm { ADD R8D,0x7e15f386 }
    /* +0x7a09e1 */ __asm { MOV ECX,EDI }
    /* +0x7a09e3 */ __asm { ROR R8D,CL }
    /* +0x7a09e6 */ __asm { IMUL R14D,EAX }
    /* +0x7a09ea */ __asm { MOV CX,0x1ead }
    /* +0x7a09ee */ __asm { SUB ECX,EDI }
    /* +0x7a09f0 */ __asm { ROL CX,0x4 }
    /* +0x7a09f4 */ __asm { ADD R14D,0xdd4974f9 }
    /* +0x7a09fb */ __asm { MOV R9D,dword ptr [RBP + 0x170] }
    /* +0x7a0a02 */ __asm { IMUL R9D,ECX }
    /* +0x7a0a06 */ __asm { MOV ECX,EDI }
    /* +0x7a0a08 */ __asm { ROR R14D,CL }
    /* +0x7a0a0b */ __asm { ADD R9D,0x4763 }
    /* +0x7a0a12 */ __asm { MOVSX RCX,R9W }
    /* +0x7a0a16 */ __asm { ADD RCX,RDX }
    /* +0x7a0a19 */ __asm { MOV RDX,qword ptr [RBP + 0x30] }
    /* +0x7a0a1d */ __asm { MOV R9,qword ptr [RBP + 0x38] }
    /* +0x7a0a21 */ __asm { MOV R10,R9 }
    /* +0x7a0a24 */ __asm { SUB R10,RDX }
    /* +0x7a0a27 */ __asm { XOR RDX,-0x664a9d41 }
    /* +0x7a0a2e */ __asm { SAR R10,0x5 }
    /* +0x7a0a32 */ __asm { MOV RAX,-0x94ecd380 }
    /* +0x7a0a3c */ __asm { ADD RAX,R10 }
    /* +0x7a0a3f */ __asm { MOV qword ptr [RSP + 0x20],RDX }
    /* +0x7a0a44 */ __asm { CALL RCX }
    /* +0x7a0a46 */ __asm { MOV dword ptr [RBP + 0x200],R14D }
    /* +0x7a0a4d */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x7a0a53 */ __asm { PUSHFQ }
    /* +0x7a0a54 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x7a0a5c */ __asm { POPFQ }
    /* +0x7a0a5d */ __asm { MOV R14,qword ptr [RBP + 0x60] }
    /* +0x7a0a61 */ __asm { TEST R14,R14 }
    /* +0x7a0a64 */ __asm { JZ 0x7fffa4f10b6c }
    /* +0x7a0a6a */ __asm { MOV RDI,qword ptr [RBP + 0x68] }
    /* +0x7a0a6e */ __asm { CMP R14,RDI }
    /* +0x7a0a71 */ __asm { JZ 0x7fffa4f10b0b }
    /* +0x7a0a77 */ __asm { LEA R13,[0x7fffa5694d5c] }
    /* +0x7a0a7e */ __asm { PXOR XMM15,XMM15 }
    /* +0x7a0a83 */ __asm { MOV R12,R14 }
    /* +0x7a0a86 */ __asm { JMP 0x7fffa4f10aa7 }
    /* +0x7a0a90 */ __asm { MOV RDX,0x0 }
    /* +0x7a0a97 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x7a0a9e */ __asm { ADD R12,0x18 }
    /* +0x7a0aa2 */ __asm { CMP R12,RDI }
    /* +0x7a0aa5 */ __asm { JZ 0x7fffa4f10b0b }
    /* +0x7a0aa7 */ __asm { MOV RDX,qword ptr [R12] }
    /* +0x7a0aab */ __asm { TEST RDX,RDX }
    /* +0x7a0aae */ __asm { JZ 0x7fffa4f10a90 }
    /* +0x7a0ab0 */ __asm { MOV R11D,0x417efa0e }
    /* +0x7a0ab6 */ __asm { MOV ECX,0x47d829dc }
    /* +0x7a0abb */ __asm { IMUL EAX,ECX,0x714e9d13 }
    /* +0x7a0ac1 */ __asm { MOV R9,qword ptr [RBP + -0x10] }
    /* +0x7a0ac5 */ __asm { SUB EAX,R9D }
    /* +0x7a0ac8 */ __asm { ADD EAX,0x107 }
    /* +0x7a0acd */ __asm { MOV ECX,ESI }
    /* +0x7a0acf */ __asm { ROL EAX,CL }
    /* +0x7a0ad1 */ __asm { MOV R10,R13 }
    /* +0x7a0ad4 */ __asm { XOR R11D,R9D }
    /* +0x7a0ad7 */ __asm { ROR R11D,CL }
    /* +0x7a0ada */ __asm { ADD R11D,0x528e901a }
    /* +0x7a0ae1 */ __asm { XOR R11D,0x1eca470f }
    /* +0x7a0ae8 */ __asm { MOV R8,RDX }
    /* +0x7a0aeb */ __asm { SHR R8,0x3d }
    /* +0x7a0aef */ __asm { XOR R8,RDX }
    /* +0x7a0af2 */ __asm { MOVSXD RDX,EAX }
    /* +0x7a0af5 */ __asm { ADD RDX,R10 }
    /* +0x7a0af8 */ __asm { CALL RDX }
    /* +0x7a0afa */ __asm { MOVDQU xmmword ptr [R12],XMM15 }
    /* +0x7a0b00 */ __asm { MOV qword ptr [R12 + 0x10],0x0 }
    /* +0x7a0b09 */ __asm { JMP 0x7fffa4f10a90 }
    /* +0x7a0b0b */ __asm { MOV R8,R14 }
    /* +0x7a0b0e */ __asm { SHR R8,0x3d }
    /* +0x7a0b12 */ __asm { MOV R11D,0xf339996a }
    /* +0x7a0b18 */ __asm { LEA RDX,[0x7fffa5692408] }
    /* +0x7a0b1f */ __asm { MOV RCX,0x0 }
    /* +0x7a0b26 */ __asm { NOP }
    /* +0x7a0b27 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x7a0b2e */ __asm { XOR R8,R14 }
    /* +0x7a0b31 */ __asm { MOV ECX,0x3dffb072 }
    /* +0x7a0b36 */ __asm { IMUL ECX,ECX,0x3782c473 }
    /* +0x7a0b3c */ __asm { ADD ECX,ESI }
    /* +0x7a0b3e */ __asm { IMUL ECX,ECX,-0x494cd839 }
    /* +0x7a0b44 */ __asm { NOT ECX }
    /* +0x7a0b46 */ __asm { IMUL R11D,dword ptr [RBP + 0x1d0] }
    /* +0x7a0b4e */ __asm { ADD R11D,0xc00000fd }
    /* +0x7a0b55 */ __asm { ROL R11D,0x14 }
    /* +0x7a0b59 */ __asm { NOT R11D }
    /* +0x7a0b5c */ __asm { MOVSXD RCX,ECX }
    /* +0x7a0b5f */ __asm { ADD RCX,RDX }
    /* +0x7a0b62 */ __asm { CALL RCX }
    /* +0x7a0b64 */ __asm { MOV RDI,qword ptr [RBP + -0x10] }
    /* +0x7a0b68 */ __asm { MOV R12D,dword ptr [RBP + -0x18] }
    /* +0x7a0b6c */ __asm { MOV R8D,0x1c332f93 }
    /* +0x7a0b72 */ __asm { XOR R8D,0x7c2a7abf }
    /* +0x7a0b79 */ __asm { ADD R8D,0x9f6618d3 }
    /* +0x7a0b80 */ __asm { MOV ECX,ESI }
    /* +0x7a0b82 */ __asm { ROL R8D,CL }
    /* +0x7a0b85 */ __asm { MOV ECX,EDI }
    /* +0x7a0b87 */ __asm { ROR R8D,CL }
    /* +0x7a0b8a */ __asm { PUSHFQ }
    /* +0x7a0b8b */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x7a0b93 */ __asm { POPFQ }
    /* +0x7a0b94 */ __asm { MOV dword ptr [RBP + 0x200],R8D }
    /* +0x7a0b9b */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x7a0ba1 */ __asm { TEST ECX,ECX }
    /* +0x7a0ba3 */ __asm { JNS 0x7fffa4f1fe69 }
    /* +0x7a0ba9 */ __asm { MOV R13,qword ptr [RBP + 0x30] }
    /* +0x7a0bad */ __asm { CMP R13,qword ptr [RBP + 0x38] }
    /* +0x7a0bb1 */ __asm { JZ 0x7fffa4f11934 }
    /* +0x7a0bb7 */ __asm { MOV dword ptr [RBP + 0x200],0x3f21bb38 }
    /* +0x7a0bc1 */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x7a0bc7 */ __asm { TEST CL,0x1 }
    /* +0x7a0bca */ __asm { NOP }
    /* +0x7a0bcb */ __asm { NOP }
    /* +0x7a0bcc */ __asm { NOP }
    /* +0x7a0bcd */ __asm { NOP }
    /* +0x7a0bce */ __asm { NOP }
    /* +0x7a0bcf */ __asm { MOV RCX,-0x7e6df35855008406 }
    /* +0x7a0bd9 */ __asm { MOV R9D,0x5dc93a41 }
    /* +0x7a0bdf */ __asm { MOV R8,0x4fab0fda8f9c728d }
    /* +0x7a0be9 */ __asm { MOV RAX,0x4a47d6d74464beaa }
    /* +0x7a0bf3 */ __asm { MOV R10,-0x7c9a946e51875990 }
    /* +0x7a0bfd */ __asm { MOV RDX,-0x12cfa62008f610ce }
    /* +0x7a0c07 */ __asm { LEA R11,[RBP + 0x200] }
    /* +0x7a0c0e */ __asm { MOV R13,0x1f36b4bc0d13e4e3 }
    /* +0x7a0c18 */ __asm { SUB R9D,ESI }
    /* +0x7a0c1b */ __asm { ROL R9D,0x12 }
    /* +0x7a0c1f */ __asm { XOR R9D,0xe484ff2c }
    /* +0x7a0c26 */ __asm { IMUL R9D,R12D }
    /* +0x7a0c2a */ __asm { MOVSXD RBX,R9D }
    /* +0x7a0c2d */ __asm { PXOR XMM2,XMM2 }
    /* +0x7a0c31 */ __asm { MOVDQA xmmword ptr [RBP + 0x360],XMM2 }
    /* +0x7a0c39 */ __asm { MOVDQA xmmword ptr [RBP + 0x350],XMM2 }
    /* +0x7a0c41 */ __asm { MOVDQA xmmword ptr [RBP + 0x340],XMM2 }
    /* +0x7a0c49 */ __asm { MOVDQA xmmword ptr [RBP + 0x330],XMM2 }
    /* +0x7a0c51 */ __asm { MOVDQA xmmword ptr [RBP + 0x320],XMM2 }
    /* +0x7a0c59 */ __asm { MOVAPS XMM0,xmmword ptr [0x7fffa56b83a0] }
    /* +0x7a0c60 */ __asm { MOVAPS xmmword ptr [RBP + 0x370],XMM0 }
    /* +0x7a0c67 */ __asm { MOVAPS XMM0,xmmword ptr [0x7fffa56b8390] }
    /* +0x7a0c6e */ __asm { MOVAPS xmmword ptr [RBP + 0x380],XMM0 }
    /* +0x7a0c75 */ __asm { MOV R9,qword ptr [RBP + 0x10] }
    /* +0x7a0c79 */ __asm { MOV qword ptr [R9],0x1 }
    /* +0x7a0c80 */ __asm { MOV qword ptr [RBP + 0x78],RCX }
    /* +0x7a0c84 */ __asm { MOV qword ptr [RBP + 0x68],RDX }
    /* +0x7a0c88 */ __asm { MOV qword ptr [RBP + 0x60],RAX }
    /* +0x7a0c8c */ __asm { MOV RDX,0x4fab0fdacbe916bf }
    /* +0x7a0c96 */ __asm { MOV qword ptr [RBP + 0x70],RDX }
    /* +0x7a0c9a */ __asm { MOV qword ptr [RBP + 0x208],R10 }
    /* +0x7a0ca1 */ __asm { MOV qword ptr [RBP + 0x430],R13 }
    /* +0x7a0ca8 */ __asm { MOV qword ptr [RBP + 0x200],R13 }
    /* +0x7a0caf */ __asm { MOV qword ptr [RBP + 0x210],R8 }
    /* +0x7a0cb6 */ __asm { MOV qword ptr [RBP + 0x218],RCX }
    /* +0x7a0cbd */ __asm { MOVDQA XMM0,xmmword ptr [R11] }
    /* +0x7a0cc2 */ __asm { PXOR XMM0,xmmword ptr [RBP + 0x60] }
    /* +0x7a0cc7 */ __asm { MOVDQA XMM3,xmmword ptr [RBP + 0x70] }
    /* +0x7a0ccc */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM0 }
    /* +0x7a0cd1 */ __asm { PXOR XMM3,xmmword ptr [R11 + 0x10] }
    /* +0x7a0cd7 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM3 }
    /* +0x7a0cdc */ __asm { MOV ECX,dword ptr [RBP + 0x360] }
    /* +0x7a0ce2 */ __asm { XOR EAX,EAX }
    /* +0x7a0ce4 */ __asm { MOV EDI,ESI }
    /* +0x7a0ce6 */ __asm { SUB EDI,EBX }
    /* +0x7a0ce8 */ __asm { MOV R13,qword ptr [RBP + -0x10] }
    /* +0x7a0cec */ __asm { MOV qword ptr [RBP + 0x408],RBX }
    /* +0x7a0cf3 */ __asm { MOV dword ptr [RBP + 0x318],EDI }
    /* +0x7a0cf9 */ __asm { JMP 0x7fffa4f10dc2 }
    /* +0x7a0d00 */ __asm { MOV EDX,R10D }
    /* +0x7a0d03 */ __asm { MOV R10D,dword ptr [RBP + 0x428] }
    /* +0x7a0d0a */ __asm { ADD R10D,R11D }
    /* +0x7a0d0d */ __asm { MOV R8D,dword ptr [RBP + 0x1c8] }
    /* +0x7a0d14 */ __asm { ADD R8D,ESI }
    /* +0x7a0d17 */ __asm { ADD R14D,dword ptr [RBP + 0x1e0] }
    /* +0x7a0d1e */ __asm { MOV EAX,dword ptr [RBP + 0x158] }
    /* +0x7a0d24 */ __asm { ADD EAX,dword ptr [RBP + 0x8] }
    /* +0x7a0d27 */ __asm { MOV dword ptr [RBP + 0x37c],EAX }
    /* +0x7a0d2d */ __asm { MOV EAX,dword ptr [RBP + 0x150] }
    /* +0x7a0d33 */ __asm { ADD EAX,R9D }
    /* +0x7a0d36 */ __asm { ADD ECX,dword ptr [RBP + 0xa0] }
    /* +0x7a0d3c */ __asm { MOV dword ptr [RBP + 0x378],R10D }
    /* +0x7a0d43 */ __asm { MOV R11D,dword ptr [RBP + 0x1b0] }
    /* +0x7a0d4a */ __asm { ADD R11D,EDX }
    /* +0x7a0d4d */ __asm { MOV dword ptr [RBP + 0x388],R11D }
    /* +0x7a0d54 */ __asm { MOV dword ptr [RBP + 0x374],R8D }
    /* +0x7a0d5b */ __asm { MOV R8D,dword ptr [RBP + 0x120] }
    /* +0x7a0d62 */ __asm { ADD R8D,EBX }
    /* +0x7a0d65 */ __asm { MOV dword ptr [RBP + 0x380],R8D }
    /* +0x7a0d6c */ __asm { MOV dword ptr [RBP + 0x38c],R14D }
    /* +0x7a0d73 */ __asm { MOV dword ptr [RBP + 0x370],ECX }
    /* +0x7a0d79 */ __asm { MOV dword ptr [RBP + 0x384],EAX }
    /* +0x7a0d7f */ __asm { MOV dword ptr [RBP + 0x360],0x0 }
    /* +0x7a0d89 */ __asm { ADD qword ptr [RBP + 0x368],0x200 }
    /* +0x7a0d94 */ __asm { XOR ECX,ECX }
    /* +0x7a0d96 */ __asm { MOV RSI,qword ptr [RBP + 0x118] }
    /* +0x7a0d9d */ __asm { MOV R12D,dword ptr [RBP + -0x18] }
    /* +0x7a0da1 */ __asm { MOV RBX,qword ptr [RBP + 0x408] }
    /* +0x7a0da8 */ __asm { MOV RAX,qword ptr [RBP + 0x310] }
    /* +0x7a0daf */ __asm { MOV EDI,dword ptr [RBP + 0x318] }
    /* +0x7a0db5 */ __asm { INC RAX }
    /* +0x7a0db8 */ __asm { CMP RAX,0x14 }
    /* +0x7a0dbc */ __asm { JZ 0x7fffa4f11233 }
    /* +0x7a0dc2 */ __asm { MOVZX R9D,uint8_t ptr [RBP + RAX*0x1 + 0x60] }
    /* +0x7a0dc8 */ __asm { MOV R11D,ECX }
    /* +0x7a0dcb */ __asm { MOV uint8_t ptr [RBP + R11*0x1 + 0x320],R9B }
    /* +0x7a0dd3 */ __asm { MOV ECX,dword ptr [RBP + 0x360] }
    /* +0x7a0dd9 */ __asm { INC ECX }
    /* +0x7a0ddb */ __asm { MOV dword ptr [RBP + 0x360],ECX }
    /* +0x7a0de1 */ __asm { CMP ECX,0x40 }
    /* +0x7a0de4 */ __asm { JNZ 0x7fffa4f10db5 }
    /* +0x7a0de6 */ __asm { MOV qword ptr [RBP + 0x310],RAX }
    /* +0x7a0ded */ __asm { MOV R11D,0x4 }
    /* +0x7a0df3 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0x7a0e00 */ __asm { MOV AX,0xb2a1 }
    /* +0x7a0e04 */ __asm { ADD EAX,EDI }
    /* +0x7a0e06 */ __asm { XOR EAX,0x102 }
    /* +0x7a0e0b */ __asm { LEA ECX,[RAX + R13*0x1] }
    /* +0x7a0e0f */ __asm { ADD ECX,0xffffdfd4 }
    /* +0x7a0e15 */ __asm { MOVZX R9D,CX }
    /* +0x7a0e19 */ __asm { MOVZX ECX,uint8_t ptr [RBP + R11*0x4 + 0x31b] }
    /* +0x7a0e22 */ __asm { MOVZX EAX,uint8_t ptr [RBP + R11*0x4 + 0x31a] }
    /* +0x7a0e2b */ __asm { MOVZX R10D,uint8_t ptr [RBP + R11*0x4 + 0x316] }
    /* +0x7a0e34 */ __asm { MOVZX R8D,uint8_t ptr [RBP + R11*0x4 + 0x315] }
    /* +0x7a0e3d */ __asm { MOVZX EDX,uint8_t ptr [RBP + R11*0x4 + 0x311] }
    /* +0x7a0e46 */ __asm { MOVZX R14D,uint8_t ptr [RBP + R11*0x4 + 0x319] }
    /* +0x7a0e4f */ __asm { SHL R8D,0x8 }
    /* +0x7a0e53 */ __asm { OR R8D,EDX }
    /* +0x7a0e56 */ __asm { SHL R14D,0x10 }
    /* +0x7a0e5a */ __asm { OR R14D,R8D }
    /* +0x7a0e5d */ __asm { MOVZX R8D,uint8_t ptr [RBP + R11*0x4 + 0x31d] }
    /* +0x7a0e66 */ __asm { SHL R8D,0x18 }
    /* +0x7a0e6a */ __asm { OR R8D,R14D }
    /* +0x7a0e6d */ __asm { MOVZX EDX,uint8_t ptr [RBP + R11*0x4 + 0x312] }
    /* +0x7a0e76 */ __asm { MOVZX R14D,uint8_t ptr [RBP + R11*0x4 + 0x313] }
    /* +0x7a0e7f */ __asm { MOVZX R15D,uint8_t ptr [RBP + R11*0x4 + 0x317] }
    /* +0x7a0e88 */ __asm { SHL R10D,0x8 }
    /* +0x7a0e8c */ __asm { OR R10D,EDX }
    /* +0x7a0e8f */ __asm { SHL EAX,0x10 }
    /* +0x7a0e92 */ __asm { OR EAX,R10D }
    /* +0x7a0e95 */ __asm { MOVZX R10D,uint8_t ptr [RBP + R11*0x4 + 0x31e] }
    /* +0x7a0e9e */ __asm { SHL R10D,0x18 }
    /* +0x7a0ea2 */ __asm { OR R10D,EAX }
    /* +0x7a0ea5 */ __asm { SHL R15D,0x8 }
    /* +0x7a0ea9 */ __asm { OR R15D,R14D }
    /* +0x7a0eac */ __asm { SHL ECX,0x10 }
    /* +0x7a0eaf */ __asm { OR ECX,R15D }
    /* +0x7a0eb2 */ __asm { MOVZX EAX,uint8_t ptr [RBP + R11*0x4 + 0x31f] }
    /* +0x7a0ebb */ __asm { SHL EAX,0x18 }
    /* +0x7a0ebe */ __asm { OR EAX,ECX }
    /* +0x7a0ec0 */ __asm { MOVD XMM0,R8D }
    /* +0x7a0ec5 */ __asm { PUNPCKLBW XMM0,XMM2 }
    /* +0x7a0ec9 */ __asm { PXOR XMM3,XMM3 }
    /* +0x7a0ecd */ __asm { PUNPCKLWD XMM3,XMM0 }
    /* +0x7a0ed1 */ __asm { MOVD XMM0,R10D }
    /* +0x7a0ed6 */ __asm { PUNPCKLBW XMM0,XMM2 }
    /* +0x7a0eda */ __asm { PUNPCKLWD XMM0,XMM2 }
    /* +0x7a0ede */ __asm { MOVD XMM5,dword ptr [RBP + R11*0x4 + 0x310] }
    /* +0x7a0ee8 */ __asm { PINSRW XMM5,word ptr [RBP + R11*0x4 + 0x314],0x2 }
    /* +0x7a0ef3 */ __asm { PINSRW XMM5,word ptr [RBP + R11*0x4 + 0x318],0x4 }
    /* +0x7a0efe */ __asm { PSLLD XMM0,0x8 }
    /* +0x7a0f03 */ __asm { PINSRW XMM5,word ptr [RBP + R11*0x4 + 0x31c],0x6 }
    /* +0x7a0f0e */ __asm { PSLLD XMM5,0x18 }
    /* +0x7a0f13 */ __asm { POR XMM5,XMM3 }
    /* +0x7a0f17 */ __asm { MOVD XMM3,EAX }
    /* +0x7a0f1b */ __asm { PUNPCKLBW XMM3,XMM2 }
    /* +0x7a0f1f */ __asm { PUNPCKLWD XMM3,XMM2 }
    /* +0x7a0f23 */ __asm { POR XMM3,XMM0 }
    /* +0x7a0f27 */ __asm { POR XMM3,XMM5 }
    /* +0x7a0f2b */ __asm { MOVDQA xmmword ptr [RBP + R11*0x4 + 0x1f0],XMM3 }
    /* +0x7a0f35 */ __asm { CMP R11,R9 }
    /* +0x7a0f38 */ __asm { JZ 0x7fffa4f10f50 }
    /* +0x7a0f3a */ __asm { ADD R11,0x4 }
    /* +0x7a0f3e */ __asm { JMP 0x7fffa4f10e00 }
    /* +0x7a0f50 */ __asm { MOV EAX,dword ptr [RBP + 0x200] }
    /* +0x7a0f56 */ __asm { LEA R8,[RBP + 0x240] }
    /* +0x7a0f5d */ __asm { MOV R10,0x709457c8dd39e89d }
    /* +0x7a0f67 */ __asm { NOP word ptr [RAX + RAX*0x1] }
    /* +0x7a0f70 */ __asm { MOV R11D,EAX }
    /* +0x7a0f73 */ __asm { MOV EAX,dword ptr [R8 + -0x3c] }
    /* +0x7a0f77 */ __asm { MOV R9D,dword ptr [R8 + -0x8] }
    /* +0x7a0f7b */ __asm { MOV ECX,EAX }
    /* +0x7a0f7d */ __asm { ROL ECX,0xe }
    /* +0x7a0f80 */ __asm { MOV EDX,EAX }
    /* +0x7a0f82 */ __asm { ROL EDX,0x19 }
    /* +0x7a0f85 */ __asm { XOR EDX,ECX }
    /* +0x7a0f87 */ __asm { MOV R14D,EAX }
    /* +0x7a0f8a */ __asm { SHR R14D,0x3 }
    /* +0x7a0f8e */ __asm { XOR R14D,EDX }
    /* +0x7a0f91 */ __asm { MOV ECX,R9D }
    /* +0x7a0f94 */ __asm { ROL ECX,0xd }
    /* +0x7a0f97 */ __asm { MOV R15D,R9D }
    /* +0x7a0f9a */ __asm { OR R15D,0xa }
    /* +0x7a0f9e */ __asm { MOV EDI,R9D }
    /* +0x7a0fa1 */ __asm { ROL EDI,0xf }
    /* +0x7a0fa4 */ __asm { XOR EDI,ECX }
    /* +0x7a0fa6 */ __asm { MOV RDX,R10 }
    /* +0x7a0fa9 */ __asm { MOV ECX,0xba681f1d }
    /* +0x7a0fae */ __asm { XOR RDX,RCX }
    /* +0x7a0fb1 */ __asm { MOV R12D,0xfee1b94 }
    /* +0x7a0fb7 */ __asm { ADD R12D,0x5aea5043 }
    /* +0x7a0fbe */ __asm { ADD R11D,dword ptr [R8 + -0x1c] }
    /* +0x7a0fc2 */ __asm { MOV ECX,ESI }
    /* +0x7a0fc4 */ __asm { ROR R12D,CL }
    /* +0x7a0fc7 */ __asm { SHR R9D,0xa }
    /* +0x7a0fcb */ __asm { XOR R12D,R13D }
    /* +0x7a0fce */ __asm { NOT R12D }
    /* +0x7a0fd1 */ __asm { CMP R12,-0x185ea46 }
    /* +0x7a0fd8 */ __asm { CMOVZ R9D,R15D }
    /* +0x7a0fdc */ __asm { XOR R9D,EDI }
    /* +0x7a0fdf */ __asm { ADD R11D,R14D }
    /* +0x7a0fe2 */ __asm { ADD R11D,R9D }
    /* +0x7a0fe5 */ __asm { MOV dword ptr [R8],R11D }
    /* +0x7a0fe8 */ __asm { MOV RCX,0x4d79c2f48ba2ec5d }
    /* +0x7a0ff2 */ __asm { CMP RDX,RCX }
    /* +0x7a0ff5 */ __asm { JZ 0x7fffa4f11010 }
    /* +0x7a0ff7 */ __asm { MOV RDX,-0x62ca18f42f38d433 }
    /* +0x7a1001 */ __asm { ADD R10,RDX }
    /* +0x7a1004 */ __asm { ADD R8,0x4 }
    /* +0x7a1008 */ __asm { JMP 0x7fffa4f10f70 }
    /* +0x7a1010 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x7a1017 */ __asm { MOV RDX,0x0 }
    /* +0x7a101e */ __asm { MOV R15D,dword ptr [RBP + 0x38c] }
    /* +0x7a1025 */ __asm { MOV R9D,dword ptr [RBP + 0x380] }
    /* +0x7a102c */ __asm { MOV R10D,dword ptr [RBP + 0x37c] }
    /* +0x7a1033 */ __asm { MOV ECX,dword ptr [RBP + 0x370] }
    /* +0x7a1039 */ __asm { MOV ESI,dword ptr [RBP + 0x374] }
    /* +0x7a103f */ __asm { MOV R11D,dword ptr [RBP + 0x378] }
    /* +0x7a1046 */ __asm { MOV EAX,dword ptr [RBP + 0x388] }
    /* +0x7a104c */ __asm { MOV R8D,dword ptr [RBP + 0x384] }
    /* +0x7a1053 */ __asm { XOR R12D,R12D }
    /* +0x7a1056 */ __asm { MOV dword ptr [RBP + 0xa0],ECX }
    /* +0x7a105c */ __asm { MOV dword ptr [RBP + 0x1c8],ESI }
    /* +0x7a1062 */ __asm { MOV dword ptr [RBP + 0x1e0],R15D }
    /* +0x7a1069 */ __asm { MOV dword ptr [RBP + 0x1b0],EAX }
    /* +0x7a106f */ __asm { MOV dword ptr [RBP + 0x3c0],EAX }
    /* +0x7a1075 */ __asm { MOV dword ptr [RBP + 0x150],R8D }
    /* +0x7a107c */ __asm { MOV dword ptr [RBP + 0x178],R8D }
    /* +0x7a1083 */ __asm { MOV dword ptr [RBP + 0x120],R9D }
    /* +0x7a108a */ __asm { MOV dword ptr [RBP + 0x8],R10D }
    /* +0x7a108e */ __asm { MOV dword ptr [RBP + -0x8],R10D }
    /* +0x7a1092 */ __asm { MOV dword ptr [RBP + 0x428],R11D }
    /* +0x7a1099 */ __asm { MOV dword ptr [RBP + 0x158],R11D }
    /* +0x7a10a0 */ __asm { MOV R11D,ESI }
    /* +0x7a10a3 */ __asm { MOV ESI,ECX }
    /* +0x7a10a5 */ __asm { MOV EAX,0xfce99135 }
    /* +0x7a10aa */ __asm { MOV R8D,0xefff6c }
    /* +0x7a10b0 */ __asm { MOV R10,qword ptr [RBP + 0x118] }
    /* +0x7a10b7 */ __asm { XOR R8D,R10D }
    /* +0x7a10ba */ __asm { MOV ECX,EBX }
    /* +0x7a10bc */ __asm { ROL R8D,CL }
    /* +0x7a10bf */ __asm { ADD R8D,0xd8520794 }
    /* +0x7a10c6 */ __asm { MOV R13,qword ptr [RBP + -0x10] }
    /* +0x7a10ca */ __asm { MOV ECX,R13D }
    /* +0x7a10cd */ __asm { ROR R8D,CL }
    /* +0x7a10d0 */ __asm { IMUL EDX,EAX,-0x488e1a73 }
    /* +0x7a10d6 */ __asm { SUB EDX,R13D }
    /* +0x7a10d9 */ __asm { MOV ECX,R10D }
    /* +0x7a10dc */ __asm { ROL EDX,CL }
    /* +0x7a10de */ __asm { SUB EDX,EBX }
    /* +0x7a10e0 */ __asm { ROL EDX,0x1 }
    /* +0x7a10e2 */ __asm { CMP RDX,R8 }
    /* +0x7a10e5 */ __asm { JBE 0x7fffa4f11160 }
    /* +0x7a10e7 */ __asm { MOV R14,RBX }
    /* +0x7a10ea */ __asm { MOV EBX,ESI }
    /* +0x7a10ec */ __asm { ROL EBX,0xa }
    /* +0x7a10ef */ __asm { MOV ECX,R11D }
    /* +0x7a10f2 */ __asm { MOV qword ptr [RBP + 0x3c8],R12 }
    /* +0x7a10f9 */ __asm { MOV R12D,R15D }
    /* +0x7a10fc */ __asm { MOV R15D,R11D }
    /* +0x7a10ff */ __asm { MOV R11D,dword ptr [RBP + 0x158] }
    /* +0x7a1106 */ __asm { XOR ECX,R11D }
    /* +0x7a1109 */ __asm { MOV EAX,0x2ecb3ef8 }
    /* +0x7a110e */ __asm { MOV EDX,R9D }
    /* +0x7a1111 */ __asm { ROL EDX,0x1a }
    /* +0x7a1114 */ __asm { MOV R8D,R9D }
    /* +0x7a1117 */ __asm { ROL R8D,0x15 }
    /* +0x7a111b */ __asm { XOR R8D,EDX }
    /* +0x7a111e */ __asm { AND ECX,ESI }
    /* +0x7a1120 */ __asm { MOV EDI,R15D }
    /* +0x7a1123 */ __asm { AND EDI,R11D }
    /* +0x7a1126 */ __asm { MOV R11D,R15D }
    /* +0x7a1129 */ __asm { MOV R15D,R12D }
    /* +0x7a112c */ __asm { MOV R12,qword ptr [RBP + 0x3c8] }
    /* +0x7a1133 */ __asm { XOR EDI,ECX }
    /* +0x7a1135 */ __asm { LEA RDX,[0x7fffa578ee98] }
    /* +0x7a113c */ __asm { XOR EAX,R10D }
    /* +0x7a113f */ __asm { ADD EAX,R14D }
    /* +0x7a1142 */ __asm { MOV ECX,R13D }
    /* +0x7a1145 */ __asm { ROL EAX,CL }
    /* +0x7a1147 */ __asm { ROL EAX,0xb }
    /* +0x7a114a */ __asm { CDQE }
    /* +0x7a114c */ __asm { ADD RAX,RDX }
    /* +0x7a114f */ __asm { JMP 0x7fffa4f111ab }
    /* +0x7a1160 */ __asm { MOV ECX,R11D }
    /* +0x7a1163 */ __asm { MOV R8D,dword ptr [RBP + 0x158] }
    /* +0x7a116a */ __asm { XOR ECX,R8D }
    /* +0x7a116d */ __asm { AND ECX,ESI }
    /* +0x7a116f */ __asm { MOV AX,0x1268 }
    /* +0x7a1173 */ __asm { MOV EDX,R9D }
    /* +0x7a1176 */ __asm { ROL EDX,0x15 }
    /* +0x7a1179 */ __asm { MOV EDI,R11D }
    /* +0x7a117c */ __asm { AND EDI,R8D }
    /* +0x7a117f */ __asm { XOR EDI,ECX }
    /* +0x7a1181 */ __asm { LEA RCX,[0x7fffa5786016] }
    /* +0x7a1188 */ __asm { MOV R8D,R9D }
    /* +0x7a118b */ __asm { ROL R8D,0x1a }
    /* +0x7a118f */ __asm { XOR R8D,EDX }
    /* +0x7a1192 */ __asm { MOV EDX,0x371b }
    /* +0x7a1197 */ __asm { SUB EDX,EAX }
    /* +0x7a1199 */ __asm { MOV EBX,ESI }
    /* +0x7a119b */ __asm { ROL EBX,0xa }
    /* +0x7a119e */ __asm { XOR EDX,R13D }
    /* +0x7a11a1 */ __asm { ADD EDX,R10D }
    /* +0x7a11a4 */ __asm { MOVSX RAX,DX }
    /* +0x7a11a8 */ __asm { ADD RAX,RCX }
    /* +0x7a11ab */ __asm { MOV EDX,ESI }
    /* +0x7a11ad */ __asm { ROL EDX,0x13 }
    /* +0x7a11b0 */ __asm { MOV ECX,ESI }
    /* +0x7a11b2 */ __asm { ROL ECX,0x1e }
    /* +0x7a11b5 */ __asm { XOR ECX,EDX }
    /* +0x7a11b7 */ __asm { XOR ECX,EBX }
    /* +0x7a11b9 */ __asm { MOV R10D,dword ptr [RBP + 0x178] }
    /* +0x7a11c0 */ __asm { MOV EDX,R10D }
    /* +0x7a11c3 */ __asm { MOV R14D,dword ptr [RBP + 0x3c0] }
    /* +0x7a11ca */ __asm { XOR EDX,R14D }
    /* +0x7a11cd */ __asm { AND EDX,R9D }
    /* +0x7a11d0 */ __asm { XOR EDX,R14D }
    /* +0x7a11d3 */ __asm { ADD R15D,dword ptr [RBP + R12*0x4 + 0x200] }
    /* +0x7a11db */ __asm { MOV EBX,R9D }
    /* +0x7a11de */ __asm { ROL EBX,0x7 }
}


// ============================================================================
// Function : Unwind@7fffa4f29270  |  RVA: 0x7b9270  |  Size: 279 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f29270(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  uVar2 = 0x8744932b - (int)*(uint64_t *)(param_2 + 0x198);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x70) & 0x1f;
  (*(code *)((int64_t)(int)~(uVar2 << bVar1 | uVar2 >> 0x20 - bVar1) + 0x7fffa562c880))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f29390  |  RVA: 0x7b9390  |  Size: 297 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f29390(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0xf;
  uVar2 = (uint16_t)(((uint32_t)*(uint64_t *)(param_2 + 0x70) | 1) * 0x6c8a);
  uVar2 = uVar2 >> bVar1 | uVar2 << 0x10 - bVar1;
  (*(code *)((int64_t)(short)(uVar2 << 0xc | uVar2 >> 4) + 0x7fffa56210cc))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f294c0  |  RVA: 0x7b94c0  |  Size: 252 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f294c0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)((int64_t)
                    (short)(~((short)*(uint64_t *)(param_2 + 0x198) + 0x9981U) -
                           (short)*(uint32_t *)(param_2 + 0x70)) + 0x7fffa568d7a9);
  (*pcVar1)(pcVar1,0x7fffa568d7a9,
            *(uint64_t *)(param_2 + 0x78) >> 0x3d ^ *(uint64_t *)(param_2 + 0x78));
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f295c0  |  RVA: 0x7b95c0  |  Size: 127 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4f295c0(void) {
    /* +0x7b95c0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x7b95c5 */ __asm { PUSH RBP }
    /* +0x7b95c6 */ __asm { PUSH RSI }
    /* +0x7b95c7 */ __asm { PUSH R13 }
    /* +0x7b95c9 */ __asm { PUSH RDI }
    /* +0x7b95ca */ __asm { PUSH R12 }
    /* +0x7b95cc */ __asm { PUSH R15 }
    /* +0x7b95ce */ __asm { PUSH R14 }
    /* +0x7b95d0 */ __asm { PUSH RBX }
    /* +0x7b95d1 */ __asm { SUB RSP,0xd8 }
    /* +0x7b95d8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x7b95df */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM9 }
    /* +0x7b95e6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM13 }
    /* +0x7b95ed */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x7b95f7 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM10 }
    /* +0x7b9601 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM15 }
    /* +0x7b960b */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM6 }
    /* +0x7b9614 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM8 }
    /* +0x7b961e */ __asm { MOV dword ptr [RBP + 0x60],0xf551b4dd }
    /* +0x7b9625 */ __asm { MOV ECX,dword ptr [RBP + 0x60] }
    /* +0x7b9628 */ __asm { CMP ECX,0x2a4f00c5 }
    /* +0x7b962e */ __asm { NOP }
    /* +0x7b962f */ __asm { NOP }
    /* +0x7b9630 */ __asm { NOP }
    /* +0x7b9631 */ __asm { NOP }
    /* +0x7b9632 */ __asm { NOP }
    /* +0x7b9633 */ __asm { NOP }
    /* +0x7b9634 */ __asm { NOP }
    /* +0x7b9635 */ __asm { NOP }
    /* +0x7b9636 */ __asm { NOP }
    /* +0x7b9637 */ __asm { NOP }
    /* +0x7b9638 */ __asm { NOP }
    /* +0x7b9639 */ __asm { NOP }
    /* +0x7b963a */ __asm { NOP }
    /* +0x7b963b */ __asm { NOP }
    /* +0x7b963c */ __asm { NOP }
    /* +0x7b963d */ __asm { NOP }
    /* +0x7b963e */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4f2a450  |  RVA: 0x7ba450  |  Size: 252 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2a450(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  code *pcVar2;
  uint32_t uVar3;
  
  uVar1 = (uint32_t)*(uint64_t *)(param_2 + 0x70);
  uVar3 = ~(uVar1 ^ 0xa47a4102);
  uVar1 = (uVar1 ^ 0x2700d67) + (int)*(uint64_t *)(param_2 + 0x198) + 0xb1d772e9;
  pcVar2 = (code *)((int64_t)(int)(uVar1 * 0x200000 | uVar1 >> 0xb) + 0x7fffa5671aac);
  (*pcVar2)(pcVar2,uVar3 << 9 | uVar3 >> 0x17,param_2 + -0x1f34298c);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2a550  |  RVA: 0x7ba550  |  Size: 357 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2a550(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint8_t bVar2;
  int iVar3;
  uint64_t uVar4;
  code *pcVar5;
  uint64_t uVar6;
  uint8_t auVar7 [16];
  uint64_t uVar8;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0xf;
  pcVar5 = (code *)((int64_t)
                    (short)((-0x52e5 << bVar2 | 0xad1bU >> 0x10 - bVar2) -
                           (short)*(uint32_t *)(param_2 + 0x390)) + 0x7fffa53f7a17);
  iVar3 = (int)*(uint64_t *)(param_2 + 0x198);
  lVar1 = param_2 + 0x280;
  uVar4 = (lVar1 << 0x2a) + lVar1;
  uVar6 = (uVar4 * 0x200 | uVar4 >> 0x37) ^ (lVar1 * 0x400000 | uVar4 >> 0x2a) ^ uVar4;
  auVar7._8_4_ = (int)uVar6;
  auVar7._0_8_ = uVar6;
  auVar7._12_4_ = (int)(uVar6 >> 0x20);
  uVar8 = auVar7._8_8_ + 0x6b8db696;
  (*pcVar5)(uVar4,pcVar5,iVar3 << 0x1d | (uint32_t)(*(int *)(param_2 + 0x1a0) * 0x761586c0 + iVar3) >> 3
            ,uVar6,(uVar6 + 0x8e3d93c9 << 0x22 | uVar6 + 0x8e3d93c9 >> 0x1e) ^ 0x2f45efa2,
            (uVar8 * 0x80 | uVar8 >> 0x39) ^ 0x6f6d7cf);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2a6c0  |  RVA: 0x7ba6c0  |  Size: 437 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2a6c0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  
  *(uint64_t *)(param_2 + 0x488) = 0x7fffa568db40;
  uVar1 = param_2 + 0x280;
  uVar3 = (short)*(uint32_t *)(param_2 + 0x214) * -0x6c45 ^ 0x2216;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x70) & 0xf;
  (*(code *)((int64_t)
             (short)~(((short)*(uint64_t *)(param_2 + 0x70) -
                      (short)*(uint64_t *)(param_2 + 0x198)) + 0xa76cU) + 0x7fffa562197e))
            ((uVar1 * 0x80000000 | uVar1 >> 0x21) ^ (uVar1 * 0x40000000 | uVar1 >> 0x22) ^ uVar1);
  (*(code *)((int64_t)(short)(uVar3 >> bVar2 | uVar3 << 0x10 - bVar2) +
            *(int64_t *)(param_2 + 0x488)))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2a880  |  RVA: 0x7ba880  |  Size: 376 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2a880(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint16_t uVar4;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x70) & 0x1f;
  uVar2 = (0xf2fdf614U >> bVar1 | -0xd0209ec << 0x20 - bVar1) + 0xd00baaf0;
  uVar4 = (((uint16_t)*(uint64_t *)(param_2 + 0x198) | 1) * -0x27fe ^ 0x3a2) -
          (short)*(uint64_t *)(param_2 + 0x70);
  uVar3 = *(uint64_t *)(param_2 + 0x198) & 0xffffffff;
  bVar1 = (uint8_t)uVar3 & 0x1f;
  (*(code *)((int64_t)(short)(uVar4 * 0x20 | uVar4 >> 0xb) + 0x7fffa5621578))(uVar3,param_2 + 0xb0)
  ;
  (*(code *)(&UNK_7fffa56923cf + (int)(uVar2 << bVar1 | uVar2 >> 0x20 - bVar1)))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2aa00  |  RVA: 0x7baa00  |  Size: 351 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2aa00(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  
  uVar1 = param_2 + 0x280;
  uVar2 = *(uint64_t *)(param_2 + 0x198);
  uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x398);
  uVar4 = 0xd261a603 - uVar5;
  uVar5 = uVar5 ^ 0xd45f0b95;
  bVar3 = (uint8_t)uVar2 & 0x1f;
  (*(code *)(&UNK_7fffa5628cfe + (int)(uVar5 << bVar3 | uVar5 >> 0x20 - bVar3)))
            (uVar2,uVar1,(int)uVar2 + -0x35498cf1,
             (uVar1 * 0x40000000 | uVar1 >> 0x22) ^ (uVar1 * 0x80000000 | uVar1 >> 0x21) ^ uVar1);
  (*(code *)((int64_t)(int)((uVar4 * 0x200000 | uVar4 >> 0xb) - (int)uVar2) + 0x7fffa5693b06))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2ab60  |  RVA: 0x7bab60  |  Size: 374 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2ab60(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int iVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint32_t uVar5;
  
  uVar5 = 0x3c588919 - (int)*(uint64_t *)(param_2 + 0x198);
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x70);
  bVar4 = bVar3 & 0x1f;
  uVar5 = uVar5 >> bVar4 | uVar5 << 0x20 - bVar4;
  uVar1 = param_2 + 0xe0;
  bVar3 = bVar3 & 0x1f;
  iVar2 = *(int *)(param_2 + 0x250);
  (*(code *)(&UNK_7fffa5629337 + (int)(uVar5 * 0x3d000000 | uVar5 * -0x13a7e4c3 >> 8)))
            (&UNK_7fffa5629337 + (int)(uVar5 * 0x3d000000 | uVar5 * -0x13a7e4c3 >> 8),uVar1,
             uVar1 * 0x80000000 | uVar1 >> 0x21);
  (*(code *)((int64_t)(int)(iVar2 * (0x43272885 << bVar3 | 0x43272885U >> 0x20 - bVar3)) +
            0x7fffa56976d8))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2ace0  |  RVA: 0x7bace0  |  Size: 255 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2ace0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x3b8)) {
    pcVar1 = (code *)((int64_t)~((-0x682efeca - *(int *)(param_2 + 0x198)) * -0x95c2281) +
                     0x7fffa5693bb6);
    (*pcVar1)(pcVar1,0x7fffa5693bb6,
              *(uint64_t *)(param_2 + 0x3a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x3a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2ade0  |  RVA: 0x7bade0  |  Size: 3232 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4f2ade0(void) {
    /* +0x7bade0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x7bade5 */ __asm { PUSH RBP }
    /* +0x7bade6 */ __asm { PUSH RSI }
    /* +0x7bade7 */ __asm { PUSH R13 }
    /* +0x7bade9 */ __asm { PUSH RDI }
    /* +0x7badea */ __asm { PUSH R12 }
    /* +0x7badec */ __asm { PUSH R15 }
    /* +0x7badee */ __asm { PUSH R14 }
    /* +0x7badf0 */ __asm { PUSH RBX }
    /* +0x7badf1 */ __asm { SUB RSP,0xd8 }
    /* +0x7badf8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x7badff */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM9 }
    /* +0x7bae06 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM13 }
    /* +0x7bae0d */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x7bae17 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM10 }
    /* +0x7bae21 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM15 }
    /* +0x7bae2b */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM6 }
    /* +0x7bae34 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM8 }
    /* +0x7bae3e */ __asm { MOV RDX,qword ptr [RBP + 0x180] }
    /* +0x7bae45 */ __asm { LEA R8,[0x7fffa569399c] }
    /* +0x7bae4c */ __asm { MOV R10,qword ptr [RBP + 0x430] }
    /* +0x7bae53 */ __asm { LEA RCX,[0x7fffa568c532] }
    /* +0x7bae5a */ __asm { MOV AX,0xe85c }
    /* +0x7bae5e */ __asm { MOV R11D,0xe66f4ae }
    /* +0x7bae64 */ __asm { XOR EAX,0x62f7 }
    /* +0x7bae69 */ __asm { MOV R14,R10 }
    /* +0x7bae6c */ __asm { SHR R14,0x3d }
    /* +0x7bae70 */ __asm { XOR R14,R10 }
    /* +0x7bae73 */ __asm { MOV R10,qword ptr [RBP + 0x158] }
    /* +0x7bae7a */ __asm { IMUL R11D,R10D }
    /* +0x7bae7e */ __asm { XOR R11D,dword ptr [RBP + 0x310] }
    /* +0x7bae85 */ __asm { ROL R11D,0x10 }
    /* +0x7bae89 */ __asm { MOV R12,qword ptr [RBP + 0x118] }
    /* +0x7bae90 */ __asm { ADD EAX,R12D }
    /* +0x7bae93 */ __asm { IMUL R9D,EAX,0x28c5 }
    /* +0x7bae9a */ __asm { MOV EAX,0x8ce9b212 }
    /* +0x7bae9f */ __asm { MOV RBX,qword ptr [RBP + 0x1d0] }
    /* +0x7baea6 */ __asm { XOR EAX,EBX }
    /* +0x7baea8 */ __asm { ADD EAX,0xef232029 }
    /* +0x7baead */ __asm { IMUL EAX,R10D }
    /* +0x7baeb1 */ __asm { ROL EAX,0xa }
    /* +0x7baeb4 */ __asm { MOVSX R10,R9W }
    /* +0x7baeb8 */ __asm { MOVSXD RDI,EAX }
    /* +0x7baebb */ __asm { ADD RDI,R8 }
    /* +0x7baebe */ __asm { MOV R8,RDX }
    /* +0x7baec1 */ __asm { SHR R8,0x3d }
    /* +0x7baec5 */ __asm { XOR R8,RDX }
    /* +0x7baec8 */ __asm { ADD R10,RCX }
    /* +0x7baecb */ __asm { CALL R10 }
    /* +0x7baece */ __asm { MOV R11D,0xd4413043 }
    /* +0x7baed4 */ __asm { ADD R11D,0x7ffe02c4 }
    /* +0x7baedb */ __asm { MOV ECX,R12D }
    /* +0x7baede */ __asm { ROL R11D,CL }
    /* +0x7baee1 */ __asm { SUB R11D,EBX }
    /* +0x7baee4 */ __asm { ROL R11D,0x10 }
    /* +0x7baee8 */ __asm { MOV R8,R14 }
    /* +0x7baeeb */ __asm { CALL RDI }
    /* +0x7baeed */ __asm { PUSHFQ }
    /* +0x7baeee */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x7baef6 */ __asm { POPFQ }
    /* +0x7baef7 */ __asm { MOV dword ptr [RBP + 0x200],0x4daaccab }
    /* +0x7baf01 */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x7baf07 */ __asm { MOV R8W,0xb5e9 }
    /* +0x7baf0c */ __asm { ADD R8D,R12D }
    /* +0x7baf0f */ __asm { IMUL R8D,R8D,0x1e2d }
    /* +0x7baf16 */ __asm { SUB R8D,EBX }
    /* +0x7baf19 */ __asm { MOVSX R8D,R8W }
    /* +0x7baf1d */ __asm { CMP ECX,R8D }
    /* +0x7baf20 */ __asm { NOP }
    /* +0x7baf21 */ __asm { NOP }
    /* +0x7baf22 */ __asm { NOP }
    /* +0x7baf23 */ __asm { NOP }
    /* +0x7baf24 */ __asm { NOP }
    /* +0x7baf25 */ __asm { NOP }
    /* +0x7baf26 */ __asm { NOP }
    /* +0x7baf27 */ __asm { NOP }
    /* +0x7baf28 */ __asm { MOV R8D,0x679a05ba }
    /* +0x7baf2e */ __asm { XOR R8D,dword ptr [RBP + 0x118] }
    /* +0x7baf35 */ __asm { MOV RCX,qword ptr [RBP + 0x1d0] }
    /* +0x7baf3c */ __asm { ROL R8D,CL }
    /* +0x7baf3f */ __asm { ADD R8D,0xc0000004 }
    /* +0x7baf46 */ __asm { MOVSXD R8,R8D }
    /* +0x7baf49 */ __asm { MOV R14,qword ptr [RBP + 0x60] }
    /* +0x7baf4d */ __asm { RDTSC }
    /* +0x7baf4f */ __asm { SHL RDX,0x20 }
    /* +0x7baf53 */ __asm { OR RDX,RAX }
    /* +0x7baf56 */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x7baf60 */ __asm { IMUL RDX,RCX }
    /* +0x7baf64 */ __asm { LEA EAX,[RDX + 0x3b5639cf] }
    /* +0x7baf6a */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0x7baf74 */ __asm { ADD RDX,RCX }
    /* +0x7baf77 */ __asm { MOV RCX,RDX }
    /* +0x7baf7a */ __asm { SHR RCX,0x3b }
    /* +0x7baf7e */ __asm { MOV R9,RDX }
    /* +0x7baf81 */ __asm { SHR R9,0x1b }
    /* +0x7baf85 */ __asm { SHR RDX,0x2d }
    /* +0x7baf89 */ __asm { MOV R10D,0xec29697c }
    /* +0x7baf8f */ __asm { CMP R8,R10 }
    /* +0x7baf92 */ __asm { CMOVZ EDX,EAX }
    /* +0x7baf95 */ __asm { XOR R9D,EDX }
    /* +0x7baf98 */ __asm { ROR R9D,CL }
    /* +0x7baf9b */ __asm { AND R9D,0x3 }
    /* +0x7baf9f */ __asm { CMP R9D,0x2 }
    /* +0x7bafa3 */ __asm { JC 0x7fffa4f2b2f9 }
    /* +0x7bafa9 */ __asm { CMP R9D,0x3 }
    /* +0x7bafad */ __asm { JNZ 0x7fffa4f2b34f }
    /* +0x7bafb3 */ __asm { MOV EDX,0x2f53f74b }
    /* +0x7bafb8 */ __asm { MOV R8,0x7f1ce97cd76c3368 }
    /* +0x7bafc2 */ __asm { CMP RDX,R8 }
    /* +0x7bafc5 */ __asm { NOP }
    /* +0x7bafc6 */ __asm { NOP }
    /* +0x7bafc7 */ __asm { NOP }
    /* +0x7bafc8 */ __asm { NOP }
    /* +0x7bafc9 */ __asm { NOP }
    /* +0x7bafca */ __asm { CMP dword ptr [RDX + 0x50aa0c75],0xd }
    /* +0x7bafd1 */ __asm { JC 0x7fffa4f2b80a }
    /* +0x7bafd7 */ __asm { MOV ECX,0xb23205ec }
    /* +0x7bafdc */ __asm { MOV R8W,0xebc5 }
    /* +0x7bafe1 */ __asm { MOV RDI,qword ptr [RBP + 0x310] }
    /* +0x7bafe8 */ __asm { MOV R11D,EDI }
    /* +0x7bafeb */ __asm { OR R11D,0x1 }
    /* +0x7bafef */ __asm { RDTSC }
    /* +0x7baff1 */ __asm { SHL RDX,0x20 }
    /* +0x7baff5 */ __asm { OR RDX,RAX }
    /* +0x7baff8 */ __asm { MOV R9D,0x902eac2e }
    /* +0x7baffe */ __asm { IMUL R10D,ECX,0x7cae0e5f }
    /* +0x7bb005 */ __asm { MOV RAX,qword ptr [RBP + 0x118] }
    /* +0x7bb00c */ __asm { MOV ECX,EAX }
    /* +0x7bb00e */ __asm { ROL R10D,CL }
    /* +0x7bb011 */ __asm { XOR R8D,EAX }
    /* +0x7bb014 */ __asm { ROL R8W,0xb }
    /* +0x7bb019 */ __asm { NOT R8D }
    /* +0x7bb01c */ __asm { MOV R12,qword ptr [RBP + 0x1d0] }
    /* +0x7bb023 */ __asm { MOV ECX,R12D }
    /* +0x7bb026 */ __asm { ROR R8W,CL }
    /* +0x7bb02a */ __asm { ADD R9D,0x2052b937 }
    /* +0x7bb031 */ __asm { MOV ECX,EAX }
    /* +0x7bb033 */ __asm { ROR R9D,CL }
    /* +0x7bb036 */ __asm { MOV RAX,-0x158b4ad174161d9b }
    /* +0x7bb040 */ __asm { IMUL RAX,RDX }
    /* +0x7bb044 */ __asm { ADD R9D,0x51b3d127 }
    /* +0x7bb04b */ __asm { MOV ECX,EDI }
    /* +0x7bb04d */ __asm { ROR R9D,CL }
    /* +0x7bb050 */ __asm { MOV ECX,0xdc9c1cf5 }
    /* +0x7bb055 */ __asm { ADD ECX,dword ptr [RBP + -0x10] }
    /* +0x7bb058 */ __asm { MOV RDI,qword ptr [RBP + 0x158] }
    /* +0x7bb05f */ __asm { IMUL EDI,ECX }
    /* +0x7bb062 */ __asm { ADD EDI,0xd3878a3 }
    /* +0x7bb068 */ __asm { IMUL R10D,R11D }
    /* +0x7bb06c */ __asm { MOV RDX,-0x63fa089a859ba0ba }
    /* +0x7bb076 */ __asm { ADD RDX,RAX }
    /* +0x7bb079 */ __asm { MOV RAX,RDX }
    /* +0x7bb07c */ __asm { MOV RCX,RDX }
    /* +0x7bb07f */ __asm { LEA R11D,[RDX + RDX*0x8] }
    /* +0x7bb083 */ __asm { SHR RDX,0x2d }
    /* +0x7bb087 */ __asm { SHR RAX,0x1b }
    /* +0x7bb08b */ __asm { SHR RCX,0x3b }
    /* +0x7bb08f */ __asm { MOV R15D,EAX }
    /* +0x7bb092 */ __asm { XOR R15D,EDX }
    /* +0x7bb095 */ __asm { CMP R10,RDI }
    /* +0x7bb098 */ __asm { LEA R11D,[R11 + R11*0x2] }
    /* +0x7bb09c */ __asm { CMOVLE ECX,R11D }
    /* +0x7bb0a0 */ __asm { MOV R11D,0x89501e46 }
    /* +0x7bb0a6 */ __asm { MOV R10D,0x1252cd2b }
    /* +0x7bb0ac */ __asm { SUB R10D,R11D }
    /* +0x7bb0af */ __asm { XOR R10D,R12D }
    /* +0x7bb0b2 */ __asm { OR EDX,EAX }
    /* +0x7bb0b4 */ __asm { CMP R9,R10 }
    /* +0x7bb0b7 */ __asm { CMOVZ EDX,R15D }
    /* +0x7bb0bb */ __asm { ROR EDX,CL }
    /* +0x7bb0bd */ __asm { MOVZX R9D,R8W }
    /* +0x7bb0c1 */ __asm { MOV R8,qword ptr GS:[R9] }
    /* +0x7bb0c5 */ __asm { MOV R8,qword ptr [R8 + 0x30] }
    /* +0x7bb0c9 */ __asm { MOV RCX,0x46c3f6c13349dd59 }
    /* +0x7bb0d3 */ __asm { SUB R8,RCX }
    /* +0x7bb0d6 */ __asm { MOV RCX,-0x1c29bc9f48185a1 }
    /* +0x7bb0e0 */ __asm { CMP R8,RCX }
    /* +0x7bb0e3 */ __asm { NOP }
    /* +0x7bb0e4 */ __asm { NOP }
    /* +0x7bb0e5 */ __asm { NOP }
    /* +0x7bb0e6 */ __asm { NOP }
    /* +0x7bb0e7 */ __asm { NOP }
    /* +0x7bb0e8 */ __asm { CMP EDX,0x43fb90d }
    /* +0x7bb0ee */ __asm { JA 0x7fffa4f2b2c3 }
    /* +0x7bb0f4 */ __asm { PUSHFQ }
    /* +0x7bb0f5 */ __asm { POP RDX }
    /* +0x7bb0f6 */ __asm { TEST EDX,0x100 }
    /* +0x7bb0fc */ __asm { NOP }
    /* +0x7bb0fd */ __asm { NOP }
    /* +0x7bb0fe */ __asm { NOP }
    /* +0x7bb0ff */ __asm { NOP }
    /* +0x7bb100 */ __asm { NOP }
    /* +0x7bb101 */ __asm { NOP }
    /* +0x7bb102 */ __asm { NOP }
    /* +0x7bb103 */ __asm { MOV dword ptr [RBP + 0x200],0x59ef00d5 }
    /* +0x7bb10d */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x7bb113 */ __asm { MOV R11W,0x6bc5 }
    /* +0x7bb118 */ __asm { MOV RDX,qword ptr [RBP + 0x118] }
    /* +0x7bb11f */ __asm { LEA R8D,[RDX + R11*0x1] }
    /* +0x7bb123 */ __asm { ROL R8W,0x5 }
    /* +0x7bb128 */ __asm { NOT R8D }
    /* +0x7bb12b */ __asm { MOVSX R8D,R8W }
    /* +0x7bb12f */ __asm { CMP ECX,R8D }
    /* +0x7bb132 */ __asm { JLE 0x7fffa4f2b8f0 }
    /* +0x7bb138 */ __asm { MOV R8,-0x7153b3d0fc101b44 }
    /* +0x7bb142 */ __asm { MOV EDX,0x311b8199 }
    /* +0x7bb147 */ __asm { SUB R8,qword ptr [RBP + 0x1d0] }
    /* +0x7bb14e */ __asm { IMUL R11,R8,0x3b480d39 }
    /* +0x7bb155 */ __asm { MOV R8,qword ptr [RBP + 0x118] }
    /* +0x7bb15c */ __asm { ADD R8,R11 }
    /* +0x7bb15f */ __asm { ADD R8,0xf75386f }
    /* +0x7bb166 */ __asm { CMP RDX,R8 }
    /* +0x7bb169 */ __asm { JZ 0x7fffa4f2b8f8 }
    /* +0x7bb16f */ __asm { MOV R9D,dword ptr [RDX + 0x4ee2812b] }
    /* +0x7bb176 */ __asm { MOV RDX,0x5555555555555556 }
    /* +0x7bb180 */ __asm { IMUL RDX,R9 }
    /* +0x7bb184 */ __asm { MOV R8,0x5555555555555555 }
    /* +0x7bb18e */ __asm { CMP RDX,R8 }
    /* +0x7bb191 */ __asm { JA 0x7fffa4f2b2c3 }
    /* +0x7bb197 */ __asm { MOV R8D,0x384ba8ba }
    /* +0x7bb19d */ __asm { XOR R8D,dword ptr [RBP + -0x10] }
    /* +0x7bb1a1 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x7bb1a8 */ __asm { ROL R8D,CL }
    /* +0x7bb1ab */ __asm { IMUL R9D,R8D,-0x75059eaf }
    /* +0x7bb1b2 */ __asm { PXOR XMM2,XMM2 }
    /* +0x7bb1b6 */ __asm { MOVDQA xmmword ptr [RBP + 0x200],XMM2 }
    /* +0x7bb1be */ __asm { MOV RDX,-0x7c812ef37a8ca6cb }
    /* +0x7bb1c8 */ __asm { CMP qword ptr [R9],RDX }
    /* +0x7bb1cb */ __asm { NOP }
    /* +0x7bb1cc */ __asm { NOP }
    /* +0x7bb1cd */ __asm { NOP }
    /* +0x7bb1ce */ __asm { NOP }
    /* +0x7bb1cf */ __asm { NOP }
    /* +0x7bb1d0 */ __asm { NOP }
    /* +0x7bb1d1 */ __asm { NOP }
    /* +0x7bb1d2 */ __asm { NOP }
    /* +0x7bb1d3 */ __asm { NOP }
    /* +0x7bb1d4 */ __asm { MOV dword ptr [RBP + 0x200],0x0 }
    /* +0x7bb1de */ __asm { MOV dword ptr [RBP + 0x320],0xeeca5760 }
    /* +0x7bb1e8 */ __asm { MOV ECX,dword ptr [RBP + 0x320] }
    /* +0x7bb1ee */ __asm { MOV dword ptr [RBP + 0x320],0x454fb254 }
    /* +0x7bb1f8 */ __asm { MOV ECX,dword ptr [RBP + 0x320] }
    /* +0x7bb1fe */ __asm { CMP ECX,0x21a061d0 }
    /* +0x7bb204 */ __asm { NOP }
    /* +0x7bb205 */ __asm { NOP }
    /* +0x7bb206 */ __asm { NOP }
    /* +0x7bb207 */ __asm { NOP }
    /* +0x7bb208 */ __asm { NOP }
    /* +0x7bb209 */ __asm { NOP }
    /* +0x7bb20a */ __asm { NOP }
    /* +0x7bb20b */ __asm { NOP }
    /* +0x7bb20c */ __asm { NOP }
    /* +0x7bb20d */ __asm { NOP }
    /* +0x7bb20e */ __asm { NOP }
    /* +0x7bb20f */ __asm { NOP }
    /* +0x7bb210 */ __asm { NOP }
    /* +0x7bb211 */ __asm { MOV RDX,0x65b76d596a0d8c6c }
    /* +0x7bb21b */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x7bb222 */ __asm { ADD R9,RDX }
    /* +0x7bb225 */ __asm { IMUL RDX,R9,0x374b9563 }
    /* +0x7bb22c */ __asm { LEA R8,[0x7fffa4783fe9] }
    /* +0x7bb233 */ __asm { MOV RCX,R8 }
    /* +0x7bb236 */ __asm { XOR RCX,RDX }
    /* +0x7bb239 */ __asm { CMP RCX,-0x1 }
    /* +0x7bb23d */ __asm { JZ 0x7fffa4f2b900 }
    /* +0x7bb243 */ __asm { MOV R10W,0xfcb9 }
    /* +0x7bb248 */ __asm { MOV CX,0xfbc }
    /* +0x7bb24c */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x7bb253 */ __asm { ADD R10D,R9D }
    /* +0x7bb256 */ __asm { SUB ECX,R9D }
    /* +0x7bb259 */ __asm { XOR ECX,0xffff8fe9 }
    /* +0x7bb25f */ __asm { MOV R9,qword ptr [RBP + 0x310] }
    /* +0x7bb266 */ __asm { MOV EAX,R9D }
    /* +0x7bb269 */ __asm { OR EAX,0x1 }
    /* +0x7bb26c */ __asm { IMUL EAX,ECX }
    /* +0x7bb26f */ __asm { MOVZX EDX,AX }
    /* +0x7bb272 */ __asm { MOV ECX,0x1bff765b }
    /* +0x7bb277 */ __asm { IMUL ECX,ECX,-0x2a3e53ed }
    /* +0x7bb27d */ __asm { XOR ECX,R9D }
    /* +0x7bb280 */ __asm { MOV AX,0x13a4 }
    /* +0x7bb284 */ __asm { XOR EAX,0x53f9 }
    /* +0x7bb289 */ __asm { SUB EAX,dword ptr [RBP + 0x1d0] }
    /* +0x7bb28f */ __asm { ROL AX,0x1 }
    /* +0x7bb292 */ __asm { MOVZX R9D,AX }
    /* +0x7bb296 */ __asm { NOT ECX }
    /* +0x7bb298 */ __asm { IMUL EAX,ECX,0x15c91bcd }
    /* +0x7bb29e */ __asm { ROL R10W,0xa }
    /* +0x7bb2a3 */ __asm { XOR R10D,dword ptr [RBP + -0x10] }
    /* +0x7bb2a7 */ __asm { MOVSX R10,R10W }
    /* +0x7bb2ab */ __asm { MOV qword ptr [RBP + 0x320],RCX }
    /* +0x7bb2b2 */ __asm { MOV EAX,dword ptr [RAX + R8*0x1 + 0x128] }
    /* +0x7bb2ba */ __asm { LEA R8,[RBP + 0x200] }
    /* +0x7bb2c1 */ __asm { SYSCALL }
    /* +0x7bb2c3 */ __asm { LEA RDX,[0x7fffa4786e51] }
    /* +0x7bb2ca */ __asm { MOV R8,-0x927a22eda859612 }
    /* +0x7bb2d4 */ __asm { CMP RDX,R8 }
    /* +0x7bb2d7 */ __asm { JNZ 0x7fffa4f2b2e7 }
    /* +0x7bb2d9 */ __asm { SAR dword ptr [RDX + 0x1772c860],0x1 }
    /* +0x7bb2df */ __asm { SBB ESI,EBX }
    /* +0x7bb2e1 */ __asm { RET 0xb088 }
    /* +0x7bb2e7 */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bb2ee */ __asm { MOV EAX,dword ptr [RDX + -0x1ff5] }
    /* +0x7bb2f4 */ __asm { JMP 0x7fffa4f2b89f }
    /* +0x7bb2f9 */ __asm { CMP R9D,0x1 }
    /* +0x7bb2fd */ __asm { JZ 0x7fffa4f2b3fd }
    /* +0x7bb303 */ __asm { LEA RDX,[0x7fffa47bedd0] }
    /* +0x7bb30a */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x7bb311 */ __asm { MOV RCX,0x0 }
    /* +0x7bb318 */ __asm { NOP }
    /* +0x7bb319 */ __asm { MOV RCX,RDX }
    /* +0x7bb31c */ __asm { ROL RCX,0x36 }
    /* +0x7bb320 */ __asm { MOV R8,-0x18a9e844 }
    /* +0x7bb327 */ __asm { SUB R8,RCX }
    /* +0x7bb32a */ __asm { MOV RCX,0x399d38a178a6d06a }
    /* +0x7bb334 */ __asm { CMP R8,RCX }
    /* +0x7bb337 */ __asm { JZ 0x7fffa4f2b916 }
    /* +0x7bb33d */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bb344 */ __asm { MOV EAX,dword ptr [RDX + -0x1d98] }
    /* +0x7bb34a */ __asm { JMP 0x7fffa4f2b89f }
    /* +0x7bb34f */ __asm { MOV R10D,0x904b7a7f }
    /* +0x7bb355 */ __asm { MOV RDX,0x374938a2fd905139 }
    /* +0x7bb35f */ __asm { CMP R10,RDX }
    /* +0x7bb362 */ __asm { NOP }
    /* +0x7bb363 */ __asm { NOP }
    /* +0x7bb364 */ __asm { NOP }
    /* +0x7bb365 */ __asm { NOP }
    /* +0x7bb366 */ __asm { NOP }
    /* +0x7bb367 */ __asm { NOP }
    /* +0x7bb368 */ __asm { NOP }
    /* +0x7bb369 */ __asm { NOP }
    /* +0x7bb36a */ __asm { NOP }
    /* +0x7bb36b */ __asm { NOP }
    /* +0x7bb36c */ __asm { NOP }
    /* +0x7bb36d */ __asm { NOP }
    /* +0x7bb36e */ __asm { MOV RDX,0x0 }
    /* +0x7bb375 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x7bb37c */ __asm { MOV RDX,qword ptr [RBP + 0x118] }
    /* +0x7bb383 */ __asm { MOV R11,qword ptr [RBP + 0x310] }
    /* +0x7bb38a */ __asm { ADD R11D,EDX }
    /* +0x7bb38d */ __asm { MOV R9D,0x526b0c3c }
    /* +0x7bb393 */ __asm { LEA ECX,[R9 + R11*0x1 + -0x6a3f604f] }
    /* +0x7bb39b */ __asm { MOVSXD RDX,ECX }
    /* +0x7bb39e */ __asm { MOV R8,qword ptr [RDX + R10*0x1 + 0x8] }
    /* +0x7bb3a3 */ __asm { MOV RDX,-0x77601e2dbec050db }
    /* +0x7bb3ad */ __asm { MOV RAX,R8 }
    /* +0x7bb3b0 */ __asm { MUL RDX }
    /* +0x7bb3b3 */ __asm { MOV RCX,RDX }
    /* +0x7bb3b6 */ __asm { MOV EDX,0x146de6d }
    /* +0x7bb3bb */ __asm { MOV RAX,R8 }
    /* +0x7bb3be */ __asm { MUL RDX }
    /* +0x7bb3c1 */ __asm { ADD RAX,RCX }
    /* +0x7bb3c4 */ __asm { ADC RDX,0x0 }
    /* +0x7bb3c8 */ __asm { TEST DL,0x1 }
    /* +0x7bb3cb */ __asm { JZ 0x7fffa4f2b833 }
    /* +0x7bb3d1 */ __asm { LEA RDX,[0x7fffa47c02f1] }
    /* +0x7bb3d8 */ __asm { MOV R8,-0x4e217782d1b06562 }
    /* +0x7bb3e2 */ __asm { CMP RDX,R8 }
    /* +0x7bb3e5 */ __asm { JZ 0x7fffa4f2b920 }
    /* +0x7bb3eb */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bb3f2 */ __asm { MOV EAX,dword ptr [RDX + -0x3dc5] }
    /* +0x7bb3f8 */ __asm { JMP 0x7fffa4f2b89f }
    /* +0x7bb3fd */ __asm { RDTSC }
    /* +0x7bb3ff */ __asm { SHL RDX,0x20 }
    /* +0x7bb403 */ __asm { MOV R9D,0x46a50697 }
    /* +0x7bb409 */ __asm { MOV ECX,0x252b9b52 }
    /* +0x7bb40e */ __asm { IMUL R8D,ECX,0x8cace95 }
    /* +0x7bb415 */ __asm { XOR R8D,dword ptr [RBP + 0x118] }
    /* +0x7bb41c */ __asm { NOT R8D }
    /* +0x7bb41f */ __asm { MOV RCX,qword ptr [RBP + 0x1d0] }
    /* +0x7bb426 */ __asm { ROL R8D,CL }
    /* +0x7bb429 */ __asm { OR RDX,RAX }
    /* +0x7bb42c */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x7bb436 */ __asm { IMUL RCX,RDX }
    /* +0x7bb43a */ __asm { MOV R11,-0x425d6b7169d341a }
    /* +0x7bb444 */ __asm { IMUL R9D,dword ptr [RBP + 0x158] }
    /* +0x7bb44c */ __asm { ADD R9D,dword ptr [RBP + 0x310] }
    /* +0x7bb453 */ __asm { ROL R9D,0x1 }
    /* +0x7bb456 */ __asm { LEA RDX,[RCX + R11*0x1] }
    /* +0x7bb45a */ __asm { OR RCX,R11 }
    /* +0x7bb45d */ __asm { CMP R9,R8 }
    /* +0x7bb460 */ __asm { CMOVG RCX,RDX }
    /* +0x7bb464 */ __asm { MOV R9,RCX }
    /* +0x7bb467 */ __asm { SHR R9,0x2d }
    /* +0x7bb46b */ __asm { MOV R8,RCX }
    /* +0x7bb46e */ __asm { SHR R8,0x1b }
    /* +0x7bb472 */ __asm { XOR R9D,R8D }
    /* +0x7bb475 */ __asm { SHR RCX,0x3b }
    /* +0x7bb479 */ __asm { ROR R9D,CL }
    /* +0x7bb47c */ __asm { MOV dword ptr [RBP + 0x200],0x40f2be22 }
    /* +0x7bb486 */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x7bb48c */ __asm { TEST ECX,ECX }
    /* +0x7bb48e */ __asm { JS 0x7fffa4f2b937 }
    /* +0x7bb494 */ __asm { PUSHFQ }
    /* +0x7bb495 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x7bb49d */ __asm { POPFQ }
    /* +0x7bb49e */ __asm { CMP R9D,0x117480 }
    /* +0x7bb4a5 */ __asm { JA 0x7fffa4f2b754 }
    /* +0x7bb4ab */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x7bb4b2 */ __asm { MOV RDX,0x0 }
    /* +0x7bb4b9 */ __asm { MOV R8D,0x793cf265 }
    /* +0x7bb4bf */ __asm { SUB R8D,dword ptr [RBP + 0x1d0] }
    /* +0x7bb4c6 */ __asm { MOV R11D,0xd789a4ac }
    /* +0x7bb4cc */ __asm { NEG R11D }
    /* +0x7bb4cf */ __asm { ROL R8D,0x17 }
    /* +0x7bb4d3 */ __asm { ADD R8D,0x3fffff70 }
    /* +0x7bb4da */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x7bb4e1 */ __asm { ROR R8D,CL }
    /* +0x7bb4e4 */ __asm { LEA R9D,[RCX + R11*0x1] }
    /* +0x7bb4e8 */ __asm { ADD R9D,0x84696c86 }
    /* +0x7bb4ef */ __asm { MOVSXD R11,R8D }
    /* +0x7bb4f2 */ __asm { MOV RDX,qword ptr [RBP + 0x120] }
    /* +0x7bb4f9 */ __asm { MOV RDX,qword ptr [RDX + R11*0x1] }
    /* +0x7bb4fd */ __asm { MOV RCX,0x2e3a8d77750f3d6f }
    /* +0x7bb507 */ __asm { OR RCX,RDX }
    /* +0x7bb50a */ __asm { MOV RDX,-0x3f29be75 }
    /* +0x7bb511 */ __asm { SUB RDX,RCX }
    /* +0x7bb514 */ __asm { XOR RDX,R9 }
    /* +0x7bb517 */ __asm { MOV R8,0x7d4e6584c6a12217 }
    /* +0x7bb521 */ __asm { CMP RDX,R8 }
    /* +0x7bb524 */ __asm { JNZ 0x7fffa4f2b531 }
    /* +0x7bb526 */ __asm { RET }
    /* +0x7bb531 */ __asm { LEA RDX,[0x7fffa47c0972] }
    /* +0x7bb538 */ __asm { MOV R8,-0x3571e4787ac43637 }
    /* +0x7bb542 */ __asm { IMUL R8,RDX }
    /* +0x7bb546 */ __asm { XOR R8,0x2e81e185 }
    /* +0x7bb54d */ __asm { MOV RCX,-0xbaec18e3 }
    /* +0x7bb557 */ __asm { ADD RCX,R8 }
    /* +0x7bb55a */ __asm { MOV R8,0x786d7f58da004620 }
    /* +0x7bb564 */ __asm { CMP RCX,R8 }
    /* +0x7bb567 */ __asm { JZ 0x7fffa4f2b947 }
    /* +0x7bb56d */ __asm { MOV R9D,0xb3479c74 }
    /* +0x7bb573 */ __asm { SUB R9D,dword ptr [RBP + 0x1d0] }
    /* +0x7bb57a */ __asm { XOR R9D,0x8162ef1f }
    /* +0x7bb581 */ __asm { ADD R9D,0x44564f8f }
    /* +0x7bb588 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x7bb58f */ __asm { ROL R9D,CL }
    /* +0x7bb592 */ __asm { MOVZX R11D,uint8_t ptr [RDX + -0x42e5] }
    /* +0x7bb59a */ __asm { MOVZX R10D,uint8_t ptr [RDX + R11*0x4 + -0x42d5] }
    /* +0x7bb5a3 */ __asm { ROL R10B,0x4 }
    /* +0x7bb5a7 */ __asm { MOV uint8_t ptr [RBP + 0x200],R10B }
    /* +0x7bb5ae */ __asm { MOVZX R10D,uint8_t ptr [RDX + R11*0x4 + -0x42d4] }
    /* +0x7bb5b7 */ __asm { ROL R10B,0x4 }
    /* +0x7bb5bb */ __asm { MOV uint8_t ptr [RBP + 0x201],R10B }
    /* +0x7bb5c2 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R11*0x4 + -0x42d3] }
    /* +0x7bb5cb */ __asm { ROL R10B,0x4 }
    /* +0x7bb5cf */ __asm { MOV uint8_t ptr [RBP + 0x202],R10B }
    /* +0x7bb5d6 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R11*0x4 + -0x42d2] }
    /* +0x7bb5df */ __asm { ROL R10B,0x4 }
    /* +0x7bb5e3 */ __asm { MOV uint8_t ptr [RBP + 0x203],R10B }
    /* +0x7bb5ea */ __asm { MOV ECX,0x65e8ce72 }
    /* +0x7bb5ef */ __asm { XOR ECX,dword ptr [RBP + 0x200] }
    /* +0x7bb5f5 */ __asm { MOV R8D,dword ptr [R9] }
    /* +0x7bb5f8 */ __asm { BT ECX,R8D }
    /* +0x7bb5fc */ __asm { JNC 0x7fffa4f2b754 }
    /* +0x7bb602 */ __asm { PUSHFQ }
    /* +0x7bb603 */ __asm { POP RDX }
    /* +0x7bb604 */ __asm { PXOR XMM2,XMM2 }
    /* +0x7bb608 */ __asm { MOVDQA xmmword ptr [RBP + 0x200],XMM2 }
    /* +0x7bb610 */ __asm { TEST EDX,0x100 }
    /* +0x7bb616 */ __asm { NOP }
    /* +0x7bb617 */ __asm { NOP }
    /* +0x7bb618 */ __asm { NOP }
    /* +0x7bb619 */ __asm { NOP }
    /* +0x7bb61a */ __asm { NOP }
    /* +0x7bb61b */ __asm { NOP }
    /* +0x7bb61c */ __asm { NOP }
    /* +0x7bb61d */ __asm { NOP }
    /* +0x7bb61e */ __asm { NOP }
    /* +0x7bb61f */ __asm { MOV ECX,0x94e88dd7 }
    /* +0x7bb624 */ __asm { XOR ECX,0x648e9887 }
    /* +0x7bb62a */ __asm { IMUL ECX,dword ptr [RBP + 0x158] }
    /* +0x7bb631 */ __asm { ADD ECX,dword ptr [RBP + -0x10] }
    /* +0x7bb634 */ __asm { MOV dword ptr [RBP + 0x320],ECX }
    /* +0x7bb63a */ __asm { MOV ECX,dword ptr [RBP + 0x320] }
    /* +0x7bb640 */ __asm { TEST ECX,ECX }
    /* +0x7bb642 */ __asm { NOP }
    /* +0x7bb643 */ __asm { NOP }
    /* +0x7bb644 */ __asm { NOP }
    /* +0x7bb645 */ __asm { NOP }
    /* +0x7bb646 */ __asm { NOP }
    /* +0x7bb647 */ __asm { MOV dword ptr [RBP + 0x200],0x0 }
    /* +0x7bb651 */ __asm { MOV dword ptr [RBP + 0x320],0x80110a20 }
    /* +0x7bb65b */ __asm { MOV ECX,dword ptr [RBP + 0x320] }
    /* +0x7bb661 */ __asm { CMP ECX,0x709a0ce5 }
    /* +0x7bb667 */ __asm { JBE 0x7fffa4f2b94f }
    /* +0x7bb66d */ __asm { MOV R11W,0xc41a }
    /* +0x7bb672 */ __asm { MOV RDX,qword ptr [RBP + 0x118] }
    /* +0x7bb679 */ __asm { LEA ECX,[RDX + R11*0x1] }
    /* +0x7bb67d */ __asm { MOV RDX,qword ptr [RBP + 0x1d0] }
    /* +0x7bb684 */ __asm { MOV R8D,EDX }
    /* +0x7bb687 */ __asm { XOR R8D,ECX }
    /* +0x7bb68a */ __asm { ROL R8W,0xa }
    /* +0x7bb68f */ __asm { MOVZX R9D,R8W }
    /* +0x7bb693 */ __asm { MOV RDX,qword ptr GS:[R9] }
    /* +0x7bb697 */ __asm { MOV R8D,0x7b0385e9 }
    /* +0x7bb69d */ __asm { ADD R8,qword ptr [RDX + 0xce0] }
    /* +0x7bb6a4 */ __asm { XOR R8,0x596c24b1 }
    /* +0x7bb6ab */ __asm { MOV RDX,0x2e6a54ec6bd91e03 }
    /* +0x7bb6b5 */ __asm { CMP R8,RDX }
    /* +0x7bb6b8 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4f2b990  |  RVA: 0x7bb990  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2b990(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint32_t uVar2;
  code *pcVar3;
  
  uVar1 = *(uint64_t *)(param_2 + 0xe0);
  if (uVar1 != 0) {
    uVar2 = *(int *)(param_2 + 0x1d0) * 0x44c331bb + *(int *)(param_2 + 0x4b0);
    pcVar3 = (code *)((int64_t)(int)(uVar2 * 0x800 | uVar2 >> 0x15) + 0x7fffa56940d4);
    (*pcVar3)(0x7fffa56940d4,pcVar3,uVar1 >> 0x3d ^ uVar1);
    *(uint64_t *)(param_2 + 0xe0) = 0;
    *(uint64_t *)(param_2 + 0xe8) = 0;
    *(uint64_t *)(param_2 + 0xf0) = 0;
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2bab0  |  RVA: 0x7bbab0  |  Size: 434 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2bab0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  int iVar2;
  uint32_t uVar3;
  uint8_t bVar4;
  uint32_t uVar5;
  code *pcVar6;
  uint32_t uVar7;
  int64_t lVar8;
  uint16_t uVar9;
  
  lVar8 = (param_2 + 0xb0) - (param_2 << 0x3e);
  iVar2 = (int)(param_2 + 0xb0);
  uVar3 = (uint32_t)((uint64_t)lVar8 >> 0x20);
  uVar7 = (uint32_t)*(uint64_t *)(param_2 + 0x198);
  uVar9 = ~((uint16_t)*(uint64_t *)(param_2 + 0x198) ^ 0xa151);
  uVar5 = uVar7 + 0xbfad3ea9;
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x70);
  bVar1 = bVar4 & 0x1f;
  pcVar6 = (code *)((int64_t)(int)((uVar5 << bVar1 | uVar5 >> 0x20 - bVar1) + 0xbb91199f) +
                   0x7fffa56acc93);
  uVar7 = uVar7 ^ 0x284307a6;
  bVar4 = bVar4 & 0x1f;
  uVar5 = uVar7 >> bVar4 | uVar7 << 0x20 - bVar4;
  uVar5 = uVar5 << 0xb | uVar5 >> 0x15;
  (*pcVar6)(*(uint64_t *)(param_2 + 0x70),
            ((iVar2 * 0x800 | uVar3 >> 0x15) ^ (iVar2 * 4 | uVar3 >> 0x1e) ^ (uint32_t)lVar8) *
            -0x2c78be5,pcVar6,uVar5,uVar5);
  (*(code *)((int64_t)(short)(uVar9 << 0xd | uVar9 >> 3) + 0x7fffa5621f3e))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2bc70  |  RVA: 0x7bbc70  |  Size: 2098 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4f2bc70(void) {
    /* +0x7bbc70 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x7bbc75 */ __asm { PUSH RBP }
    /* +0x7bbc76 */ __asm { PUSH RSI }
    /* +0x7bbc77 */ __asm { PUSH R13 }
    /* +0x7bbc79 */ __asm { PUSH RDI }
    /* +0x7bbc7a */ __asm { PUSH R12 }
    /* +0x7bbc7c */ __asm { PUSH R15 }
    /* +0x7bbc7e */ __asm { PUSH R14 }
    /* +0x7bbc80 */ __asm { PUSH RBX }
    /* +0x7bbc81 */ __asm { SUB RSP,0xd8 }
    /* +0x7bbc88 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x7bbc8f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM9 }
    /* +0x7bbc96 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM13 }
    /* +0x7bbc9d */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x7bbca7 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM10 }
    /* +0x7bbcb1 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM15 }
    /* +0x7bbcbb */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM6 }
    /* +0x7bbcc4 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM8 }
    /* +0x7bbcce */ __asm { MOV R9D,0xa8b6a5dc }
    /* +0x7bbcd4 */ __asm { MOV CX,0xafff }
    /* +0x7bbcd8 */ __asm { LEA RDX,[0x7fffa56a6950] }
    /* +0x7bbcdf */ __asm { IMUL R8D,ECX,-0x1b35 }
    /* +0x7bbce6 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x7bbced */ __asm { ROR R8W,CL }
    /* +0x7bbcf1 */ __asm { ADD R9D,0xc5a5f811 }
    /* +0x7bbcf8 */ __asm { ROL R9D,0xd }
    /* +0x7bbcfc */ __asm { ADD R8D,0x7947 }
    /* +0x7bbd03 */ __asm { MOV R10,qword ptr [RBP + -0x10] }
    /* +0x7bbd07 */ __asm { XOR R8D,R10D }
    /* +0x7bbd0a */ __asm { MOVSX R8,R8W }
    /* +0x7bbd0e */ __asm { ADD R8,RDX }
    /* +0x7bbd11 */ __asm { SUB R9D,R10D }
    /* +0x7bbd14 */ __asm { XOR R9D,ECX }
    /* +0x7bbd17 */ __asm { LEA RCX,[RBP + 0x200] }
    /* +0x7bbd1e */ __asm { MOV RDX,RCX }
    /* +0x7bbd21 */ __asm { ROL RDX,0x2c }
    /* +0x7bbd25 */ __asm { MOV R10,RCX }
    /* +0x7bbd28 */ __asm { ROL R10,0x14 }
    /* +0x7bbd2c */ __asm { XOR R10,RDX }
    /* +0x7bbd2f */ __asm { XOR R10,RCX }
    /* +0x7bbd32 */ __asm { MOV RCX,R9 }
    /* +0x7bbd35 */ __asm { CALL R8 }
    /* +0x7bbd38 */ __asm { MOV R14,qword ptr [RBP + 0x20] }
    /* +0x7bbd3c */ __asm { RDTSC }
    /* +0x7bbd3e */ __asm { SHL RDX,0x20 }
    /* +0x7bbd42 */ __asm { OR RDX,RAX }
    /* +0x7bbd45 */ __asm { MOV R8,-0x30ebf64fafbc6efb }
    /* +0x7bbd4f */ __asm { IMUL RDX,R8 }
    /* +0x7bbd53 */ __asm { MOV R8,-0x22b18422c4a9c65e }
    /* +0x7bbd5d */ __asm { ADD RDX,R8 }
    /* +0x7bbd60 */ __asm { MOV R9,RDX }
    /* +0x7bbd63 */ __asm { SHR R9,0x2d }
    /* +0x7bbd67 */ __asm { MOV RCX,RDX }
    /* +0x7bbd6a */ __asm { SHR RCX,0x3b }
    /* +0x7bbd6e */ __asm { SHR RDX,0x1b }
    /* +0x7bbd72 */ __asm { XOR EDX,R9D }
    /* +0x7bbd75 */ __asm { ROR EDX,CL }
    /* +0x7bbd77 */ __asm { AND EDX,0x3 }
    /* +0x7bbd7a */ __asm { CMP EDX,0x2 }
    /* +0x7bbd7d */ __asm { JNC 0x7fffa4f2be36 }
    /* +0x7bbd83 */ __asm { CMP EDX,0x1 }
    /* +0x7bbd86 */ __asm { JZ 0x7fffa4f2bee7 }
    /* +0x7bbd8c */ __asm { MOV EDX,0x70cf848a }
    /* +0x7bbd91 */ __asm { MOV R8,0x4cf569ae2579063c }
    /* +0x7bbd9b */ __asm { CMP RDX,R8 }
    /* +0x7bbd9e */ __asm { JZ 0x7fffa4f2c637 }
    /* +0x7bbda4 */ __asm { MOV R8,qword ptr [RDX + 0xf2e7b7e] }
    /* +0x7bbdab */ __asm { MOV RAX,R8 }
    /* +0x7bbdae */ __asm { MOV RDX,0x25cc5f8320161962 }
    /* +0x7bbdb8 */ __asm { MUL RDX }
    /* +0x7bbdbb */ __asm { MOV RCX,RDX }
    /* +0x7bbdbe */ __asm { MOV EDX,0x1465f9b }
    /* +0x7bbdc3 */ __asm { MOV RAX,R8 }
    /* +0x7bbdc6 */ __asm { MUL RDX }
    /* +0x7bbdc9 */ __asm { ADD RAX,RCX }
    /* +0x7bbdcc */ __asm { ADC RDX,0x0 }
    /* +0x7bbdd0 */ __asm { TEST DL,0x1 }
    /* +0x7bbdd3 */ __asm { JZ 0x7fffa4f2bfef }
    /* +0x7bbdd9 */ __asm { MOV R9D,0xbaf7999a }
    /* +0x7bbddf */ __asm { LEA RDX,[0x7fffa47b58e3] }
    /* +0x7bbde6 */ __asm { ADD R9D,0x2af33331 }
    /* +0x7bbded */ __asm { XOR R9D,0xcfe49628 }
    /* +0x7bbdf4 */ __asm { IMUL R9D,dword ptr [RBP + 0x158] }
    /* +0x7bbdfc */ __asm { SUB R9D,dword ptr [RBP + -0x10] }
    /* +0x7bbe00 */ __asm { XOR R9,RDX }
    /* +0x7bbe03 */ __asm { MOV R8,0x367c7826464ddeb1 }
    /* +0x7bbe0d */ __asm { IMUL R8,R9 }
    /* +0x7bbe11 */ __asm { MOV RCX,-0x67a1bb4e3b4c7d29 }
    /* +0x7bbe1b */ __asm { CMP R8,RCX }
    /* +0x7bbe1e */ __asm { JZ 0x7fffa4f2c63e }
    /* +0x7bbe24 */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bbe2b */ __asm { MOV EAX,dword ptr [RDX + 0x7755] }
    /* +0x7bbe31 */ __asm { JMP 0x7fffa4f2c5c7 }
    /* +0x7bbe36 */ __asm { CMP EDX,0x3 }
    /* +0x7bbe39 */ __asm { JNZ 0x7fffa4f2bf76 }
    /* +0x7bbe3f */ __asm { MOV EDX,0xabdb2592 }
    /* +0x7bbe44 */ __asm { MOV R8,0x5f88b0bd499372ac }
    /* +0x7bbe4e */ __asm { MOV R11,RDX }
    /* +0x7bbe51 */ __asm { ROL R11,0x2a }
    /* +0x7bbe55 */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x7bbe5c */ __asm { OR R9,0x1 }
    /* +0x7bbe60 */ __asm { IMUL R8,R8,0x5d53880d }
    /* +0x7bbe67 */ __asm { ROL R8,0x2e }
    /* +0x7bbe6b */ __asm { IMUL R8,R9 }
    /* +0x7bbe6f */ __asm { MOV RCX,qword ptr [RBP + -0x10] }
    /* +0x7bbe73 */ __asm { ROR R8,CL }
    /* +0x7bbe76 */ __asm { MOV ECX,0x1ab045e }
    /* +0x7bbe7b */ __asm { SUB RCX,R11 }
    /* +0x7bbe7e */ __asm { CMP R8,RCX }
    /* +0x7bbe81 */ __asm { JZ 0x7fffa4f2c646 }
    /* +0x7bbe87 */ __asm { MOV R8,qword ptr [RDX + -0x2bdd258a] }
    /* +0x7bbe8e */ __asm { MOV RAX,R8 }
    /* +0x7bbe91 */ __asm { MOV RDX,0x2fe916351d886ad1 }
    /* +0x7bbe9b */ __asm { MUL RDX }
    /* +0x7bbe9e */ __asm { MOV RCX,RDX }
    /* +0x7bbea1 */ __asm { MOV EDX,0x1471cd6 }
    /* +0x7bbea6 */ __asm { MOV RAX,R8 }
    /* +0x7bbea9 */ __asm { MUL RDX }
    /* +0x7bbeac */ __asm { ADD RAX,RCX }
    /* +0x7bbeaf */ __asm { ADC RDX,0x0 }
    /* +0x7bbeb3 */ __asm { TEST DL,0x1 }
    /* +0x7bbeb6 */ __asm { JZ 0x7fffa4f2c305 }
    /* +0x7bbebc */ __asm { LEA RDX,[0x7fffa47c2fac] }
    /* +0x7bbec3 */ __asm { MOV R8,-0x385d0017a399fe2f }
    /* +0x7bbecd */ __asm { CMP RDX,R8 }
    /* +0x7bbed0 */ __asm { NOP }
    /* +0x7bbed1 */ __asm { NOP }
    /* +0x7bbed2 */ __asm { NOP }
    /* +0x7bbed3 */ __asm { NOP }
    /* +0x7bbed4 */ __asm { NOP }
    /* +0x7bbed5 */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bbedc */ __asm { MOV EAX,dword ptr [RDX + -0x6a80] }
    /* +0x7bbee2 */ __asm { JMP 0x7fffa4f2c5c7 }
    /* +0x7bbee7 */ __asm { MOV EDX,0xbca22183 }
    /* +0x7bbeec */ __asm { MOV RCX,RDX }
    /* +0x7bbeef */ __asm { ROL RCX,0x36 }
    /* +0x7bbef3 */ __asm { XOR RCX,0x15836170 }
    /* +0x7bbefa */ __asm { MOV R8,-0x2b685cbf824164b1 }
    /* +0x7bbf04 */ __asm { CMP RCX,R8 }
    /* +0x7bbf07 */ __asm { NOP }
    /* +0x7bbf08 */ __asm { NOP }
    /* +0x7bbf09 */ __asm { NOP }
    /* +0x7bbf0a */ __asm { NOP }
    /* +0x7bbf0b */ __asm { NOP }
    /* +0x7bbf0c */ __asm { NOP }
    /* +0x7bbf0d */ __asm { NOP }
    /* +0x7bbf0e */ __asm { NOP }
    /* +0x7bbf0f */ __asm { NOP }
    /* +0x7bbf10 */ __asm { NOP }
    /* +0x7bbf11 */ __asm { NOP }
    /* +0x7bbf12 */ __asm { NOP }
    /* +0x7bbf13 */ __asm { NOP }
    /* +0x7bbf14 */ __asm { NOP }
    /* +0x7bbf15 */ __asm { MOV R9D,dword ptr [RDX + -0x3ca41ebf] }
    /* +0x7bbf1c */ __asm { MOV RDX,0x5555555555555556 }
    /* +0x7bbf26 */ __asm { IMUL R9,RDX }
    /* +0x7bbf2a */ __asm { MOV RDX,0x5555555555555555 }
    /* +0x7bbf34 */ __asm { CMP R9,RDX }
    /* +0x7bbf37 */ __asm { JBE 0x7fffa4f2c35b }
    /* +0x7bbf3d */ __asm { LEA RDX,[0x7fffa47c37b3] }
    /* +0x7bbf44 */ __asm { MOV R8,-0x1259199d8a1b28c9 }
    /* +0x7bbf4e */ __asm { CMP RDX,R8 }
    /* +0x7bbf51 */ __asm { NOP }
    /* +0x7bbf52 */ __asm { NOP }
    /* +0x7bbf53 */ __asm { NOP }
    /* +0x7bbf54 */ __asm { NOP }
    /* +0x7bbf55 */ __asm { NOP }
    /* +0x7bbf56 */ __asm { MOV RCX,0x0 }
    /* +0x7bbf5d */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x7bbf64 */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bbf6b */ __asm { MOV EAX,dword ptr [RDX + -0x677b] }
    /* +0x7bbf71 */ __asm { JMP 0x7fffa4f2c5c7 }
    /* +0x7bbf76 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x7bbf7d */ __asm { MOV RDX,0x0 }
    /* +0x7bbf84 */ __asm { MOV EDX,0x4cc9969b }
    /* +0x7bbf89 */ __asm { MOV R8,0x762f762344ca02fd }
    /* +0x7bbf93 */ __asm { CMP RDX,R8 }
    /* +0x7bbf96 */ __asm { JZ 0x7fffa4f2c653 }
    /* +0x7bbf9c */ __asm { MOV R9D,dword ptr [RDX + 0x33346c29] }
    /* +0x7bbfa3 */ __asm { MOV RDX,0x5555555555555556 }
    /* +0x7bbfad */ __asm { IMUL R9,RDX }
    /* +0x7bbfb1 */ __asm { MOV RDX,0x5555555555555555 }
    /* +0x7bbfbb */ __asm { CMP R9,RDX }
    /* +0x7bbfbe */ __asm { JBE 0x7fffa4f2c591 }
    /* +0x7bbfc4 */ __asm { LEA RDX,[0x7fffa47c1085] }
    /* +0x7bbfcb */ __asm { MOV R8,-0x1cb5d62e9f4f6e56 }
    /* +0x7bbfd5 */ __asm { CMP RDX,R8 }
    /* +0x7bbfd8 */ __asm { NOP }
    /* +0x7bbfd9 */ __asm { NOP }
    /* +0x7bbfda */ __asm { NOP }
    /* +0x7bbfdb */ __asm { NOP }
    /* +0x7bbfdc */ __asm { NOP }
    /* +0x7bbfdd */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bbfe4 */ __asm { MOV EAX,dword ptr [RDX + -0x4b59] }
    /* +0x7bbfea */ __asm { JMP 0x7fffa4f2c5c7 }
    /* +0x7bbfef */ __asm { RDTSC }
    /* +0x7bbff1 */ __asm { SHL RDX,0x20 }
    /* +0x7bbff5 */ __asm { OR RDX,RAX }
    /* +0x7bbff8 */ __asm { MOV R8,0x7facc0f7a00541bd }
    /* +0x7bc002 */ __asm { IMUL RDX,R8 }
    /* +0x7bc006 */ __asm { MOV R9,-0x37498fa627a4a20a }
    /* +0x7bc010 */ __asm { MOV R11,qword ptr [RBP + -0x10] }
    /* +0x7bc014 */ __asm { ADD R9,R11 }
    /* +0x7bc017 */ __asm { ROL R9,0x21 }
    /* +0x7bc01b */ __asm { MOV R10,qword ptr [RBP + 0x118] }
    /* +0x7bc022 */ __asm { XOR R9,R10 }
    /* +0x7bc025 */ __asm { ADD R9,RDX }
    /* +0x7bc028 */ __asm { MOV R8,R9 }
    /* +0x7bc02b */ __asm { SHR R8,0x2d }
    /* +0x7bc02f */ __asm { MOV RCX,R9 }
    /* +0x7bc032 */ __asm { SHR RCX,0x3b }
    /* +0x7bc036 */ __asm { SHR R9,0x1b }
    /* +0x7bc03a */ __asm { XOR R9D,R8D }
    /* +0x7bc03d */ __asm { ROR R9D,CL }
    /* +0x7bc040 */ __asm { MOV dword ptr [RBP + 0x200],0x3695b8ab }
    /* +0x7bc04a */ __asm { MOV R8D,dword ptr [RBP + 0x200] }
    /* +0x7bc051 */ __asm { MOV AX,0x6305 }
    /* +0x7bc055 */ __asm { XOR EAX,0xd480 }
    /* +0x7bc05a */ __asm { MOV ECX,R10D }
    /* +0x7bc05d */ __asm { ROL AX,CL }
    /* +0x7bc060 */ __asm { XOR EAX,R11D }
    /* +0x7bc063 */ __asm { MOVZX ECX,AX }
    /* +0x7bc066 */ __asm { AND R8D,0x1 }
    /* +0x7bc06a */ __asm { CMP R8D,ECX }
    /* +0x7bc06d */ __asm { JZ 0x7fffa4f2c65b }
    /* +0x7bc073 */ __asm { CMP R9D,0x40fff7b }
    /* +0x7bc07a */ __asm { JA 0x7fffa4f2c2c6 }
    /* +0x7bc080 */ __asm { MOV CX,0x51ff }
    /* +0x7bc084 */ __asm { MOV R8D,0xffffffbc }
    /* +0x7bc08a */ __asm { SUB R8D,ECX }
    /* +0x7bc08d */ __asm { MOV RCX,qword ptr [RBP + -0x10] }
    /* +0x7bc091 */ __asm { MOV EAX,ECX }
    /* +0x7bc093 */ __asm { XOR EAX,R8D }
    /* +0x7bc096 */ __asm { ROL AX,0x6 }
    /* +0x7bc09a */ __asm { MOVZX R9D,AX }
    /* +0x7bc09e */ __asm { MOV RDX,qword ptr GS:[R9] }
    /* +0x7bc0a2 */ __asm { MOV R9D,0x55ee94ac }
    /* +0x7bc0a8 */ __asm { IMUL R9D,dword ptr [RBP + 0x158] }
    /* +0x7bc0b0 */ __asm { ADD R9D,0xea125fcc }
    /* +0x7bc0b7 */ __asm { ROL R9D,CL }
    /* +0x7bc0ba */ __asm { XOR R9,qword ptr [RDX + 0xd78] }
    /* +0x7bc0c1 */ __asm { NOT R9 }
    /* +0x7bc0c4 */ __asm { MOV RDX,0x10ea973a4ad24a5b }
    /* +0x7bc0ce */ __asm { IMUL RDX,R9 }
    /* +0x7bc0d2 */ __asm { MOV R11,0x1a16eec280a4174 }
    /* +0x7bc0dc */ __asm { MOV R8,qword ptr [RBP + 0x118] }
    /* +0x7bc0e3 */ __asm { ADD R8,R11 }
    /* +0x7bc0e6 */ __asm { ADD R8,0x1ac5b0d0 }
    /* +0x7bc0ed */ __asm { ROL R8,0x22 }
    /* +0x7bc0f1 */ __asm { XOR R8,RCX }
    /* +0x7bc0f4 */ __asm { CMP R8,RDX }
    /* +0x7bc0f7 */ __asm { NOP }
    /* +0x7bc0f8 */ __asm { NOP }
    /* +0x7bc0f9 */ __asm { NOP }
    /* +0x7bc0fa */ __asm { NOP }
    /* +0x7bc0fb */ __asm { NOP }
    /* +0x7bc0fc */ __asm { NOP }
    /* +0x7bc0fd */ __asm { NOP }
    /* +0x7bc0fe */ __asm { NOP }
    /* +0x7bc0ff */ __asm { NOP }
    /* +0x7bc100 */ __asm { NOP }
    /* +0x7bc101 */ __asm { NOP }
    /* +0x7bc102 */ __asm { NOP }
    /* +0x7bc103 */ __asm { NOP }
    /* +0x7bc104 */ __asm { NOP }
    /* +0x7bc105 */ __asm { NOP }
    /* +0x7bc106 */ __asm { NOP }
    /* +0x7bc107 */ __asm { NOP }
    /* +0x7bc2c6 */ __asm { LEA RDX,[0x7fffa478c8b0] }
    /* +0x7bc2cd */ __asm { MOV R8,-0x53b40c549def4379 }
    /* +0x7bc2d7 */ __asm { CMP RDX,R8 }
    /* +0x7bc2da */ __asm { NOP }
    /* +0x7bc2db */ __asm { NOP }
    /* +0x7bc2dc */ __asm { NOP }
    /* +0x7bc2dd */ __asm { NOP }
    /* +0x7bc2de */ __asm { NOP }
    /* +0x7bc2df */ __asm { NOP }
    /* +0x7bc2e0 */ __asm { NOP }
    /* +0x7bc2e1 */ __asm { NOP }
    /* +0x7bc2e2 */ __asm { NOP }
    /* +0x7bc2e3 */ __asm { NOP }
    /* +0x7bc2e4 */ __asm { NOP }
    /* +0x7bc2e5 */ __asm { NOP }
    /* +0x7bc2e6 */ __asm { NOP }
    /* +0x7bc2e7 */ __asm { NOP }
    /* +0x7bc2e8 */ __asm { NOP }
    /* +0x7bc2e9 */ __asm { NOP }
    /* +0x7bc2ea */ __asm { NOP }
    /* +0x7bc305 */ __asm { MOV RDX,0x3f796630fd7e3b08 }
    /* +0x7bc30f */ __asm { MOV R8D,0x852fbc15 }
    /* +0x7bc315 */ __asm { ADD R8,RDX }
    /* +0x7bc318 */ __asm { MOV R10D,0xc0000092 }
    /* +0x7bc31e */ __asm { XOR R10,R8 }
    /* +0x7bc321 */ __asm { MOV RCX,qword ptr [RBP + -0x10] }
    /* +0x7bc325 */ __asm { ROR R10,CL }
    /* +0x7bc328 */ __asm { LEA RDX,[0x7fffa47c2013] }
    /* +0x7bc32f */ __asm { XOR R10,qword ptr [RBP + 0x118] }
    /* +0x7bc336 */ __asm { CMP RDX,R10 }
    /* +0x7bc339 */ __asm { NOP }
    /* +0x7bc33a */ __asm { NOP }
    /* +0x7bc33b */ __asm { NOP }
    /* +0x7bc33c */ __asm { NOP }
    /* +0x7bc33d */ __asm { NOP }
    /* +0x7bc33e */ __asm { NOP }
    /* +0x7bc33f */ __asm { NOP }
    /* +0x7bc340 */ __asm { NOP }
    /* +0x7bc341 */ __asm { NOP }
    /* +0x7bc342 */ __asm { NOP }
    /* +0x7bc343 */ __asm { NOP }
    /* +0x7bc344 */ __asm { NOP }
    /* +0x7bc345 */ __asm { NOP }
    /* +0x7bc346 */ __asm { NOP }
    /* +0x7bc347 */ __asm { NOP }
    /* +0x7bc348 */ __asm { NOP }
    /* +0x7bc349 */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bc350 */ __asm { MOV EAX,dword ptr [RDX + -0x4fdb] }
    /* +0x7bc356 */ __asm { JMP 0x7fffa4f2c5c7 }
    /* +0x7bc35b */ __asm { MOV R8D,0xdb8b436 }
    /* +0x7bc361 */ __asm { MOV R10,qword ptr [RBP + 0x118] }
    /* +0x7bc368 */ __asm { SUB R8D,R10D }
    /* +0x7bc36b */ __asm { ROL R8D,0x5 }
    /* +0x7bc36f */ __asm { IMUL R8D,dword ptr [RBP + 0x1a8] }
    /* +0x7bc377 */ __asm { ROL R8D,0x9 }
    /* +0x7bc37b */ __asm { RDTSC }
    /* +0x7bc37d */ __asm { SHL RDX,0x20 }
    /* +0x7bc381 */ __asm { OR RDX,RAX }
    /* +0x7bc384 */ __asm { MOV RCX,-0x6bdeac2e46be109b }
    /* +0x7bc38e */ __asm { IMUL RDX,RCX }
    /* +0x7bc392 */ __asm { MOV RCX,0x1f5ea922df79a67a }
    /* +0x7bc39c */ __asm { ADD RDX,RCX }
    /* +0x7bc39f */ __asm { MOV RCX,RDX }
    /* +0x7bc3a2 */ __asm { SHR RCX,0x3b }
    /* +0x7bc3a6 */ __asm { MOV R9,RDX }
    /* +0x7bc3a9 */ __asm { SHR R9,0x2d }
    /* +0x7bc3ad */ __asm { SHR RDX,0x1b }
    /* +0x7bc3b1 */ __asm { XOR R9D,EDX }
    /* +0x7bc3b4 */ __asm { ROR R9D,CL }
    /* +0x7bc3b7 */ __asm { MOV dword ptr [RBP + 0x200],R8D }
    /* +0x7bc3be */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x7bc3c4 */ __asm { MOV ECX,0xf2c2d59f }
    /* +0x7bc3c9 */ __asm { ADD ECX,R10D }
    /* +0x7bc3cc */ __asm { XOR ECX,0x45cfbebf }
    /* +0x7bc3d2 */ __asm { ADD ECX,dword ptr [RBP + -0x10] }
    /* +0x7bc3d5 */ __asm { CMP R9D,ECX }
    /* +0x7bc3d8 */ __asm { JNC 0x7fffa4f2c568 }
    /* +0x7bc3de */ __asm { MOV dword ptr [RBP + 0x200],0x25085b3e }
    /* +0x7bc3e8 */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x7bc3ee */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x7bc3f5 */ __asm { MOV EAX,ECX }
    /* +0x7bc3f7 */ __asm { OR EAX,0x1 }
    /* +0x7bc3fa */ __asm { MOV R8W,0xa5c5 }
    /* +0x7bc3ff */ __asm { XOR R8D,0xffffad19 }
    /* +0x7bc406 */ __asm { PXOR XMM2,XMM2 }
    /* +0x7bc40a */ __asm { MOVDQA xmmword ptr [RBP + 0x200],XMM2 }
    /* +0x7bc412 */ __asm { MOV R10,qword ptr [RBP + -0x10] }
    /* +0x7bc416 */ __asm { SUB R8D,R10D }
    /* +0x7bc419 */ __asm { IMUL R8D,EAX }
    /* +0x7bc41d */ __asm { MOVZX R9D,R8W }
    /* +0x7bc421 */ __asm { MOV R8,qword ptr GS:[R9] }
    /* +0x7bc425 */ __asm { MOV RDX,qword ptr [RBP + 0x4f8] }
    /* +0x7bc42c */ __asm { MOV R8,qword ptr [R8 + 0x5f0] }
    /* +0x7bc433 */ __asm { MOV R9D,0xe007e04c }
    /* +0x7bc439 */ __asm { XOR R9D,R10D }
    /* +0x7bc43c */ __asm { XOR R9D,0xb94d9037 }
    /* +0x7bc443 */ __asm { ROR R9D,CL }
    /* +0x7bc446 */ __asm { ROL R8,0x16 }
    /* +0x7bc44a */ __asm { MOV R11,-0x4af1cbf1b9c86d6f }
    /* +0x7bc454 */ __asm { SUB R11,RCX }
    /* +0x7bc457 */ __asm { MOV R10,-0xc000008d }
    /* +0x7bc461 */ __asm { ADD R10,R11 }
    /* +0x7bc464 */ __asm { IMUL R10,R8 }
    /* +0x7bc468 */ __asm { ADD R10,R9 }
    /* +0x7bc46b */ __asm { MOV R8,0x6fe2568a6492e567 }
    /* +0x7bc475 */ __asm { CMP R10,R8 }
    /* +0x7bc478 */ __asm { NOP }
    /* +0x7bc479 */ __asm { NOP }
    /* +0x7bc47a */ __asm { NOP }
    /* +0x7bc47b */ __asm { NOP }
    /* +0x7bc47c */ __asm { NOP }
    /* +0x7bc47d */ __asm { NOP }
    /* +0x7bc47e */ __asm { NOP }
    /* +0x7bc47f */ __asm { NOP }
    /* +0x7bc480 */ __asm { NOP }
    /* +0x7bc481 */ __asm { NOP }
    /* +0x7bc482 */ __asm { MOV R9W,0xa908 }
    /* +0x7bc487 */ __asm { XOR R9D,dword ptr [RBP + 0x118] }
    /* +0x7bc48e */ __asm { MOV dword ptr [RBP + 0x200],0x0 }
    /* +0x7bc498 */ __asm { ADD R9D,0xffffc21d }
    /* +0x7bc49f */ __asm { MOVSX R11,R9W }
    /* +0x7bc4a3 */ __asm { MOV R8,0x1b2954dae0de10c9 }
    /* +0x7bc4ad */ __asm { CMP qword ptr [RDX + R11*0x1],R8 }
    /* +0x7bc4b1 */ __asm { JZ 0x7fffa4f2c623 }
    /* +0x7bc4b7 */ __asm { MOV R8D,0x731651dd }
    /* +0x7bc4bd */ __asm { MOV RCX,qword ptr [RBP + -0x10] }
    /* +0x7bc4c1 */ __asm { ADD R8D,ECX }
    /* +0x7bc4c4 */ __asm { ROL R8D,0x13 }
    /* +0x7bc4c8 */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x7bc4cf */ __asm { XOR R8D,R9D }
    /* +0x7bc4d2 */ __asm { MOV dword ptr [RBP + 0x160],R8D }
    /* +0x7bc4d9 */ __asm { MOV R8D,dword ptr [RBP + 0x160] }
    /* +0x7bc4e0 */ __asm { LEA RDX,[0x7fffa4780ad7] }
    /* +0x7bc4e7 */ __asm { MOV R8,-0x16a26bf75f53a353 }
    /* +0x7bc4f1 */ __asm { ADD R9,R8 }
    /* +0x7bc4f4 */ __asm { XOR R9,0x5e96b806 }
    /* +0x7bc4fb */ __asm { ROR R9,CL }
    /* +0x7bc4fe */ __asm { CMP RDX,R9 }
    /* +0x7bc501 */ __asm { NOP }
    /* +0x7bc502 */ __asm { NOP }
    /* +0x7bc503 */ __asm { NOP }
    /* +0x7bc504 */ __asm { NOP }
    /* +0x7bc505 */ __asm { NOP }
    /* +0x7bc506 */ __asm { MOV R8W,0xd043 }
    /* +0x7bc50b */ __asm { MOV R10,qword ptr [RBP + -0x10] }
    /* +0x7bc50f */ __asm { ADD R8D,R10D }
    /* +0x7bc512 */ __asm { NOT R8D }
    /* +0x7bc515 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x7bc51c */ __asm { ROL R8W,CL }
    /* +0x7bc520 */ __asm { MOVZX R9D,R8W }
    /* +0x7bc524 */ __asm { MOV qword ptr [RBP + 0x160],R8 }
    /* +0x7bc52b */ __asm { MOV R8W,0xfdbc }
    /* +0x7bc530 */ __asm { SUB R8D,ECX }
    /* +0x7bc533 */ __asm { MOV EAX,dword ptr [RDX + 0x43b5] }
    /* +0x7bc539 */ __asm { MOV ECX,R10D }
    /* +0x7bc53c */ __asm { ROL R8W,CL }
    /* +0x7bc540 */ __asm { IMUL ECX,R8D,-0x539 }
    /* +0x7bc547 */ __asm { MOVZX EDX,CX }
    /* +0x7bc54a */ __asm { MOV ECX,0x4b8b30ab }
    /* +0x7bc54f */ __asm { IMUL ECX,dword ptr [RBP + 0x158] }
    /* +0x7bc556 */ __asm { ROL ECX,0x9 }
    /* +0x7bc559 */ __asm { ADD ECX,R10D }
    /* +0x7bc55c */ __asm { MOVSXD R10,ECX }
    /* +0x7bc55f */ __asm { LEA R8,[RBP + 0x200] }
    /* +0x7bc566 */ __asm { SYSCALL }
    /* +0x7bc568 */ __asm { LEA RDX,[0x7fffa477d13c] }
    /* +0x7bc56f */ __asm { MOV R8,0x6e144868537fdb4a }
    /* +0x7bc579 */ __asm { CMP RDX,R8 }
    /* +0x7bc57c */ __asm { JZ 0x7fffa4f2c6a1 }
    /* +0x7bc582 */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bc589 */ __asm { MOV EAX,dword ptr [RDX + 0x74f4] }
    /* +0x7bc58f */ __asm { JMP 0x7fffa4f2c5c7 }
    /* +0x7bc591 */ __asm { LEA RDX,[0x7fffa47c00d1] }
    /* +0x7bc598 */ __asm { MOV R8,-0x23c88e57300e7c1f }
    /* +0x7bc5a2 */ __asm { CMP RDX,R8 }
    /* +0x7bc5a5 */ __asm { JZ 0x7fffa4f2c6a9 }
    /* +0x7bc5ab */ __asm { NOP }
    /* +0x7bc5ac */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x7bc5b3 */ __asm { MOV RCX,0x0 }
    /* +0x7bc5ba */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bc5c1 */ __asm { MOV EAX,dword ptr [RDX + -0x3ba5] }
    /* +0x7bc5c7 */ __asm { MOV R10,R14 }
    /* +0x7bc5ca */ __asm { SYSCALL }
    /* +0x7bc5cc */ __asm { MOV RDX,qword ptr [RBP + 0x1d0] }
    /* +0x7bc5d3 */ __asm { MOV qword ptr [RBP],RDX }
    /* +0x7bc5d7 */ __asm { MOVAPS XMM8,xmmword ptr [RSP + 0xc0] }
    /* +0x7bc5e0 */ __asm { MOVAPS XMM6,xmmword ptr [RSP + 0xb0] }
    /* +0x7bc5e8 */ __asm { MOVAPS XMM15,xmmword ptr [RSP + 0xa0] }
    /* +0x7bc5f1 */ __asm { MOVAPS XMM10,xmmword ptr [RSP + 0x90] }
    /* +0x7bc5fa */ __asm { MOVAPS XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x7bc603 */ __asm { MOVAPS XMM13,xmmword ptr [RSP + 0x70] }
    /* +0x7bc609 */ __asm { MOVAPS XMM9,xmmword ptr [RSP + 0x60] }
    /* +0x7bc60f */ __asm { ADD RSP,0xd8 }
    /* +0x7bc616 */ __asm { POP RBX }
    /* +0x7bc617 */ __asm { POP R14 }
    /* +0x7bc619 */ __asm { POP R15 }
    /* +0x7bc61b */ __asm { POP R12 }
    /* +0x7bc61d */ __asm { POP RDI }
    /* +0x7bc61e */ __asm { POP R13 }
    /* +0x7bc620 */ __asm { POP RSI }
    /* +0x7bc621 */ __asm { POP RBP }
    /* +0x7bc622 */ __asm { RET }
    /* +0x7bc63e */ __asm { TEST dword ptr DS:[RDI + -0x82117],0xca6125ff }
    /* +0x7bc649 */ __asm { JZ 0x7fffa4f2c69b }
    /* +0x7bc64b */ __asm { MOV EBP,0x34e93c87 }
    /* +0x7bc650 */ __asm { CLC }
    /* +0x7bc653 */ __asm { TEST dword ptr [R13 + -0x6be17],0xd8d48ff }
    /* +0x7bc65e */ __asm { SAHF }
    /* +0x7bc65f */ __asm { CMP dword ptr [RDI + RDI*0x8 + 0xc2c748],EAX }
    /* +0x7bc666 */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0x7bc668 */ __asm { ADD uint8_t ptr [RAX + 0x2a],CL }
    /* +0x7bc66b */ __asm { NOP }
    /* +0x7bc66d */ __asm { IMUL EBX,dword ptr [RDI + -0x21],-0x7847d20b }
    /* +0x7bc674 */ __asm { CMP R9D,0x40fff7b }
    /* +0x7bc67b */ __asm { JBE 0x7fffa4f2c080 }
    /* +0x7bc681 */ __asm { JMP 0x7fffa4f2c2c6 }
    /* +0x7bc69b */ __asm { NOP }
    /* +0x7bc69c */ __asm { NOP }
    /* +0x7bc69d */ __asm { NOP }
    /* +0x7bc69e */ __asm { NOP }
    /* +0x7bc69f */ __asm { NOP }
    /* +0x7bc6a0 */ __asm { NOP }
    /* +0x7bc6a1 */ __asm { NOP }
    /* +0x7bc6a2 */ __asm { NOP }
    /* +0x7bc6a3 */ __asm { NOP }
    /* +0x7bc6a4 */ __asm { NOP }
    /* +0x7bc6a5 */ __asm { NOP }
    /* +0x7bc6a6 */ __asm { NOP }
    /* +0x7bc6a7 */ __asm { NOP }
    /* +0x7bc6a8 */ __asm { NOP }
    /* +0x7bc6a9 */ __asm { NOP }
    /* +0x7bc6aa */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4f2c6c0  |  RVA: 0x7bc6c0  |  Size: 301 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2c6c0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint32_t uVar1;
  code *pcVar2;
  uint16_t uVar3;
  int iVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  
  uVar6 = param_2 + 0xe0;
  uVar6 = (uVar6 << 0x29 | uVar6 >> 0x17) ^ (uVar6 << 0x2b | uVar6 >> 0x15) ^ uVar6;
  uVar1 = (uint32_t)*(uint64_t *)(param_2 + 0x198);
  iVar4 = (int)CONCAT62((int6)((uint64_t)param_4 >> 0x10),0xdee9) - *(int *)(param_2 + 0x1f8);
  uVar3 = (uint16_t)iVar4;
  uVar5 = CONCAT22((short)((uint32_t)iVar4 >> 0x10),uVar3 << 5 | uVar3 >> 0xb) + 0x6a37U ^ uVar1;
  pcVar2 = (code *)((int64_t)(short)uVar5 + 0x7fffa549aca4);
  (*pcVar2)(pcVar2,0x7fffa549aca4,
            (*(int *)(param_2 + 0x260) * -0x2209b500 |
            (uint32_t)(*(int *)(param_2 + 0x260) * 0x4777d92c) >> 0x1a) * -0x3ffffffb - uVar1,uVar5,
            (uVar6 << 7 | uVar6 >> 0x39) ^ (uVar6 << 5 | uVar6 >> 0x3b) ^ uVar6);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2c7f0  |  RVA: 0x7bc7f0  |  Size: 1788 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4f2c7f0(void) {
    /* +0x7bc7f0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x7bc7f5 */ __asm { PUSH RBP }
    /* +0x7bc7f6 */ __asm { PUSH RSI }
    /* +0x7bc7f7 */ __asm { PUSH R13 }
    /* +0x7bc7f9 */ __asm { PUSH RDI }
    /* +0x7bc7fa */ __asm { PUSH R12 }
    /* +0x7bc7fc */ __asm { PUSH R15 }
    /* +0x7bc7fe */ __asm { PUSH R14 }
    /* +0x7bc800 */ __asm { PUSH RBX }
    /* +0x7bc801 */ __asm { SUB RSP,0xd8 }
    /* +0x7bc808 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x7bc80f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM9 }
    /* +0x7bc816 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM13 }
    /* +0x7bc81d */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x7bc827 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM10 }
    /* +0x7bc831 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM15 }
    /* +0x7bc83b */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM6 }
    /* +0x7bc844 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM8 }
    /* +0x7bc84e */ __asm { MOV CX,0xba1b }
    /* +0x7bc852 */ __asm { ADD ECX,0x1cad }
    /* +0x7bc858 */ __asm { ROR CX,0x1 }
    /* +0x7bc85b */ __asm { ADD ECX,dword ptr [RBP + 0x118] }
    /* +0x7bc861 */ __asm { NOT ECX }
    /* +0x7bc863 */ __asm { MOVZX R9D,CX }
    /* +0x7bc867 */ __asm { MOV RDX,qword ptr GS:[R9] }
    /* +0x7bc86b */ __asm { MOV R8,0x339a0ce31e666ced }
    /* +0x7bc875 */ __asm { CMP qword ptr [RDX + 0x30],R8 }
    /* +0x7bc879 */ __asm { NOP }
    /* +0x7bc87a */ __asm { NOP }
    /* +0x7bc87b */ __asm { NOP }
    /* +0x7bc87c */ __asm { NOP }
    /* +0x7bc87d */ __asm { NOP }
    /* +0x7bc87e */ __asm { MOV RDX,0x0 }
    /* +0x7bc885 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x7bc88c */ __asm { MOV R14,qword ptr [RBP + 0x1f0] }
    /* +0x7bc893 */ __asm { RDTSC }
    /* +0x7bc895 */ __asm { SHL RDX,0x20 }
    /* +0x7bc899 */ __asm { OR RDX,RAX }
    /* +0x7bc89c */ __asm { MOV R8,-0x30ebf64fafbc6efb }
    /* +0x7bc8a6 */ __asm { IMUL RDX,R8 }
    /* +0x7bc8aa */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0x7bc8b4 */ __asm { ADD RCX,RDX }
    /* +0x7bc8b7 */ __asm { MOV RAX,RCX }
    /* +0x7bc8ba */ __asm { SHR RAX,0x2d }
    /* +0x7bc8be */ __asm { MOV R11,RCX }
    /* +0x7bc8c1 */ __asm { SHR R11,0x1b }
    /* +0x7bc8c5 */ __asm { XOR R11D,EAX }
    /* +0x7bc8c8 */ __asm { SHR RCX,0x3b }
    /* +0x7bc8cc */ __asm { ROR R11D,CL }
    /* +0x7bc8cf */ __asm { AND R11D,0x3 }
    /* +0x7bc8d3 */ __asm { CMP R11D,0x2 }
    /* +0x7bc8d7 */ __asm { JC 0x7fffa4f2c90f }
    /* +0x7bc8d9 */ __asm { CMP R11D,0x3 }
    /* +0x7bc8dd */ __asm { JZ 0x7fffa4f2cc3a }
    /* +0x7bc8e3 */ __asm { LEA RDX,[0x7fffa47be57a] }
    /* +0x7bc8ea */ __asm { MOV R8,0x3396d7b85c01e0cc }
    /* +0x7bc8f4 */ __asm { CMP RDX,R8 }
    /* +0x7bc8f7 */ __asm { JZ 0x7fffa4f2d383 }
    /* +0x7bc8fd */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bc904 */ __asm { MOV EAX,dword ptr [RDX + -0x204e] }
    /* +0x7bc90a */ __asm { JMP 0x7fffa4f2d322 }
    /* +0x7bc90f */ __asm { MOV R8W,0x8dfb }
    /* +0x7bc914 */ __asm { ADD R8D,0x977 }
    /* +0x7bc91b */ __asm { ROL R8W,0xb }
    /* +0x7bc920 */ __asm { XOR R8D,dword ptr [RBP + 0x118] }
    /* +0x7bc927 */ __asm { MOV RCX,qword ptr [RBP + 0x408] }
    /* +0x7bc92e */ __asm { ROR R8W,CL }
    /* +0x7bc932 */ __asm { MOVZX ECX,R8W }
    /* +0x7bc936 */ __asm { CMP R11D,ECX }
    /* +0x7bc939 */ __asm { JNZ 0x7fffa4f2cd44 }
    /* +0x7bc93f */ __asm { MOV R10D,0x62486469 }
    /* +0x7bc945 */ __asm { MOV RDX,0x7e4e805fca9e12b7 }
    /* +0x7bc94f */ __asm { CMP R10,RDX }
    /* +0x7bc952 */ __asm { NOP }
    /* +0x7bc953 */ __asm { NOP }
    /* +0x7bc954 */ __asm { NOP }
    /* +0x7bc955 */ __asm { NOP }
    /* +0x7bc956 */ __asm { NOP }
    /* +0x7bc957 */ __asm { NOP }
    /* +0x7bc958 */ __asm { NOP }
    /* +0x7bc959 */ __asm { NOP }
    /* +0x7bc95a */ __asm { NOP }
    /* +0x7bc95b */ __asm { NOP }
    /* +0x7bc95c */ __asm { NOP }
    /* +0x7bc95d */ __asm { NOP }
    /* +0x7bc95e */ __asm { NOP }
    /* +0x7bc95f */ __asm { NOP }
    /* +0x7bc960 */ __asm { NOP }
    /* +0x7bc961 */ __asm { NOP }
    /* +0x7bc962 */ __asm { NOP }
    /* +0x7bcc3a */ __asm { RDTSC }
    /* +0x7bcc3c */ __asm { SHL RDX,0x20 }
    /* +0x7bcc40 */ __asm { OR RDX,RAX }
    /* +0x7bcc43 */ __asm { MOV R8,-0x583f2dd720db9bdb }
    /* +0x7bcc4d */ __asm { IMUL RDX,R8 }
    /* +0x7bcc51 */ __asm { MOV R8,-0x5a8bfca4bc2aa792 }
    /* +0x7bcc5b */ __asm { ADD RDX,R8 }
    /* +0x7bcc5e */ __asm { MOV RCX,RDX }
    /* +0x7bcc61 */ __asm { SHR RCX,0x3b }
    /* +0x7bcc65 */ __asm { MOV R9,RDX }
    /* +0x7bcc68 */ __asm { SHR R9,0x1b }
    /* +0x7bcc6c */ __asm { SHR RDX,0x2d }
    /* +0x7bcc70 */ __asm { XOR R9D,EDX }
    /* +0x7bcc73 */ __asm { ROR R9D,CL }
    /* +0x7bcc76 */ __asm { MOV dword ptr [RBP + 0x200],0xfbe78146 }
    /* +0x7bcc80 */ __asm { MOV ECX,dword ptr [RBP + 0x200] }
    /* +0x7bcc86 */ __asm { CMP R9D,0x429ce4 }
    /* +0x7bcc8d */ __asm { JA 0x7fffa4f2d2ed }
    /* +0x7bcc93 */ __asm { MOV R8W,0xbe55 }
    /* +0x7bcc98 */ __asm { XOR R8D,0x402a }
    /* +0x7bcc9f */ __asm { MOV RCX,qword ptr [RBP + 0x430] }
    /* +0x7bcca6 */ __asm { ROL R8W,CL }
    /* +0x7bccaa */ __asm { NOT R8D }
    /* +0x7bccad */ __asm { MOVZX R9D,R8W }
    /* +0x7bccb1 */ __asm { MOV RDX,qword ptr GS:[R9] }
    /* +0x7bccb5 */ __asm { MOV R8,-0xddf0dd49cf7570d }
    /* +0x7bccbf */ __asm { CMP qword ptr [RDX + 0x18],R8 }
    /* +0x7bccc3 */ __asm { NOP }
    /* +0x7bccc4 */ __asm { NOP }
    /* +0x7bccc5 */ __asm { NOP }
    /* +0x7bccc6 */ __asm { NOP }
    /* +0x7bccc7 */ __asm { NOP }
    /* +0x7bccc8 */ __asm { LEA RDX,[0x7fffa47b8e05] }
    /* +0x7bcccf */ __asm { MOV RCX,RDX }
    /* +0x7bccd2 */ __asm { ROL RCX,0x21 }
    /* +0x7bccd6 */ __asm { MOV R8,0x24b8c8bdbcb48581 }
    /* +0x7bcce0 */ __asm { IMUL R8,RCX }
    /* +0x7bcce4 */ __asm { MOV RCX,-0x280afcfe9415f822 }
    /* +0x7bccee */ __asm { CMP R8,RCX }
    /* +0x7bccf1 */ __asm { NOP }
    /* +0x7bccf2 */ __asm { NOP }
    /* +0x7bccf3 */ __asm { NOP }
    /* +0x7bccf4 */ __asm { NOP }
    /* +0x7bccf5 */ __asm { NOP }
    /* +0x7bccf6 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x7bccfd */ __asm { MOV R11,qword ptr [RBP + -0x10] }
    /* +0x7bcd01 */ __asm { LEA R8D,[RCX + R11*0x1] }
    /* +0x7bcd05 */ __asm { MOV R9D,0x71207a97 }
    /* +0x7bcd0b */ __asm { ADD R9D,0xcd443f6a }
    /* +0x7bcd12 */ __asm { IMUL R9D,dword ptr [RBP + 0x120] }
    /* +0x7bcd1a */ __asm { ROL R9D,CL }
    /* +0x7bcd1d */ __asm { MOV ECX,0x12e9d01 }
    /* +0x7bcd22 */ __asm { SUB ECX,R8D }
    /* +0x7bcd25 */ __asm { ADD ECX,0xd10a2f39 }
    /* +0x7bcd2b */ __asm { MOVSXD R8,ECX }
    /* +0x7bcd2e */ __asm { CMP R9,R8 }
    /* +0x7bcd31 */ __asm { JLE 0x7fffa4f2d189 }
    /* +0x7bcd37 */ __asm { MOVZX R11D,uint8_t ptr [RDX + 0x3888] }
    /* +0x7bcd3f */ __asm { JMP 0x7fffa4f2d191 }
    /* +0x7bcd44 */ __asm { LEA RDX,[0x7fffa47ba538] }
    /* +0x7bcd4b */ __asm { MOV RCX,RDX }
    /* +0x7bcd4e */ __asm { ROL RCX,0x39 }
    /* +0x7bcd52 */ __asm { MOV R8D,0xb0e4bed7 }
    /* +0x7bcd58 */ __asm { ADD R8,RCX }
    /* +0x7bcd5b */ __asm { MOV RCX,0xe2e71040ab0d66b }
    /* +0x7bcd65 */ __asm { CMP R8,RCX }
    /* +0x7bcd68 */ __asm { NOP }
    /* +0x7bcd69 */ __asm { NOP }
    /* +0x7bcd6a */ __asm { NOP }
    /* +0x7bcd6b */ __asm { NOP }
    /* +0x7bcd6c */ __asm { NOP }
    /* +0x7bcd6d */ __asm { NOP }
    /* +0x7bcd6e */ __asm { NOP }
    /* +0x7bcd6f */ __asm { NOP }
    /* +0x7bcd70 */ __asm { NOP }
    /* +0x7bcd71 */ __asm { NOP }
    /* +0x7bcd72 */ __asm { NOP }
    /* +0x7bcd73 */ __asm { NOP }
    /* +0x7bcd74 */ __asm { MOV R9D,0x33d96db9 }
    /* +0x7bcd7a */ __asm { MOVZX R11D,uint8_t ptr [RDX + 0x2155] }
    /* +0x7bcd82 */ __asm { NOT R9D }
    /* +0x7bcd85 */ __asm { ADD R9D,dword ptr [RBP + -0x10] }
    /* +0x7bcd89 */ __asm { ROL R9D,0x3 }
    /* +0x7bcd8d */ __asm { MOVZX R10D,uint8_t ptr [RDX + R11*0x4 + 0x2165] }
    /* +0x7bcd96 */ __asm { ROL R10B,0x4 }
    /* +0x7bcd9a */ __asm { MOV uint8_t ptr [RBP + 0x200],R10B }
    /* +0x7bcda1 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R11*0x4 + 0x2166] }
    /* +0x7bcdaa */ __asm { ROL R10B,0x4 }
    /* +0x7bcdae */ __asm { MOV uint8_t ptr [RBP + 0x201],R10B }
    /* +0x7bcdb5 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R11*0x4 + 0x2167] }
    /* +0x7bcdbe */ __asm { ROL R10B,0x4 }
    /* +0x7bcdc2 */ __asm { MOV uint8_t ptr [RBP + 0x202],R10B }
    /* +0x7bcdc9 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R11*0x4 + 0x2168] }
    /* +0x7bcdd2 */ __asm { ROL R10B,0x4 }
    /* +0x7bcdd6 */ __asm { MOV uint8_t ptr [RBP + 0x203],R10B }
    /* +0x7bcddd */ __asm { MOV ECX,0x65e8ce72 }
    /* +0x7bcde2 */ __asm { XOR ECX,dword ptr [RBP + 0x200] }
    /* +0x7bcde8 */ __asm { MOV R8D,dword ptr [R9] }
    /* +0x7bcdeb */ __asm { BT ECX,R8D }
    /* +0x7bcdef */ __asm { JNC 0x7fffa4f2d147 }
    /* +0x7bcdf5 */ __asm { LEA RDX,[0x7fffa47bae67] }
    /* +0x7bcdfc */ __asm { MOV R8,-0x6f166819d7a48bc4 }
    /* +0x7bce06 */ __asm { CMP RDX,R8 }
    /* +0x7bce09 */ __asm { JZ 0x7fffa4f2d3aa }
    /* +0x7bce0f */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bce16 */ __asm { MOV EAX,dword ptr [RDX + 0x16c5] }
    /* +0x7bce1c */ __asm { JMP 0x7fffa4f2d322 }
    /* +0x7bced5 */ __asm { PUSHFQ }
    /* +0x7bced6 */ __asm { POP RDX }
    /* +0x7bced7 */ __asm { TEST EDX,0x100 }
    /* +0x7bcedd */ __asm { NOP }
    /* +0x7bcede */ __asm { NOP }
    /* +0x7bcedf */ __asm { NOP }
    /* +0x7bcee0 */ __asm { NOP }
    /* +0x7bcee1 */ __asm { NOP }
    /* +0x7bcee2 */ __asm { NOP }
    /* +0x7bcee3 */ __asm { NOP }
    /* +0x7bcee4 */ __asm { NOP }
    /* +0x7bcee5 */ __asm { NOP }
    /* +0x7bcee6 */ __asm { NOP }
    /* +0x7bcee7 */ __asm { NOP }
    /* +0x7bcee8 */ __asm { NOP }
    /* +0x7bcee9 */ __asm { NOP }
    /* +0x7bceea */ __asm { NOP }
    /* +0x7bceeb */ __asm { NOP }
    /* +0x7bceec */ __asm { NOP }
    /* +0x7bceed */ __asm { NOP }
    /* +0x7bd147 */ __asm { MOV RDX,-0x62f3d8457b24315c }
    /* +0x7bd151 */ __asm { MOV R8D,0xd3601978 }
    /* +0x7bd157 */ __asm { SUB R8,RDX }
    /* +0x7bd15a */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x7bd161 */ __asm { XOR R9,R8 }
    /* +0x7bd164 */ __asm { ROL R9,0x28 }
    /* +0x7bd168 */ __asm { LEA RDX,[0x7fffa47b51f9] }
    /* +0x7bd16f */ __asm { CMP RDX,R9 }
    /* +0x7bd172 */ __asm { NOP }
    /* +0x7bd173 */ __asm { NOP }
    /* +0x7bd174 */ __asm { NOP }
    /* +0x7bd175 */ __asm { NOP }
    /* +0x7bd176 */ __asm { NOP }
    /* +0x7bd177 */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bd17e */ __asm { MOV EAX,dword ptr [RDX + 0x7e3f] }
    /* +0x7bd184 */ __asm { JMP 0x7fffa4f2d322 }
    /* +0x7bd189 */ __asm { MOVZX R11D,uint8_t ptr [RDX + 0x3888] }
    /* +0x7bd191 */ __asm { LEA R8,[RDX + R11*0x4] }
    /* +0x7bd195 */ __asm { ADD R8,0x3898 }
    /* +0x7bd19c */ __asm { MOVZX R9D,uint8_t ptr [RDX + R11*0x4 + 0x3898] }
    /* +0x7bd1a5 */ __asm { ROL R9B,0x4 }
    /* +0x7bd1a9 */ __asm { MOV uint8_t ptr [RBP + 0x200],R9B }
    /* +0x7bd1b0 */ __asm { MOV R9D,0x54114d5a }
    /* +0x7bd1b6 */ __asm { MOVZX R10D,uint8_t ptr [R8 + 0x1] }
    /* +0x7bd1bb */ __asm { MOVZX EAX,uint8_t ptr [R8 + 0x2] }
    /* +0x7bd1c0 */ __asm { ROL AL,0x4 }
    /* +0x7bd1c3 */ __asm { MOV uint8_t ptr [RBP + 0x202],AL }
    /* +0x7bd1c9 */ __asm { ROL R10B,0x4 }
    /* +0x7bd1cd */ __asm { IMUL R9D,dword ptr [RBP + 0x120] }
    /* +0x7bd1d5 */ __asm { ADD R9D,0xc517151d }
    /* +0x7bd1dc */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x7bd1e3 */ __asm { ROL R9D,CL }
    /* +0x7bd1e6 */ __asm { MOV uint8_t ptr [RBP + 0x201],R10B }
    /* +0x7bd1ed */ __asm { MOVZX R10D,uint8_t ptr [R8 + 0x3] }
    /* +0x7bd1f2 */ __asm { ROL R10B,0x4 }
    /* +0x7bd1f6 */ __asm { MOV uint8_t ptr [RBP + 0x203],R10B }
    /* +0x7bd1fd */ __asm { MOV ECX,0x65e8ce72 }
    /* +0x7bd202 */ __asm { XOR ECX,dword ptr [RBP + 0x200] }
    /* +0x7bd208 */ __asm { MOV R8D,dword ptr [R9] }
    /* +0x7bd20b */ __asm { BT ECX,R8D }
    /* +0x7bd20f */ __asm { JNC 0x7fffa4f2d2ed }
    /* +0x7bd215 */ __asm { MOV ECX,0x2c0c261a }
    /* +0x7bd21a */ __asm { ADD ECX,0x5245ae25 }
    /* +0x7bd220 */ __asm { ROL ECX,0xb }
    /* +0x7bd223 */ __asm { ADD ECX,dword ptr [RBP + 0x408] }
    /* +0x7bd229 */ __asm { XOR ECX,dword ptr [RBP + 0x118] }
    /* +0x7bd22f */ __asm { XORPD XMM2,XMM2 }
    /* +0x7bd233 */ __asm { MOVAPD xmmword ptr [RBP + 0x200],XMM2 }
    /* +0x7bd23b */ __asm { MOV dword ptr [RBP + 0xc0],ECX }
    /* +0x7bd241 */ __asm { MOV ECX,dword ptr [RBP + 0xc0] }
    /* +0x7bd247 */ __asm { MOV dword ptr [RBP + 0x200],0x0 }
    /* +0x7bd251 */ __asm { MOV dword ptr [RBP + 0xc0],0xa35a59d5 }
    /* +0x7bd25b */ __asm { MOV ECX,dword ptr [RBP + 0xc0] }
    /* +0x7bd261 */ __asm { TEST CL,0x1 }
    /* +0x7bd264 */ __asm { NOP }
    /* +0x7bd265 */ __asm { NOP }
    /* +0x7bd266 */ __asm { NOP }
    /* +0x7bd267 */ __asm { NOP }
    /* +0x7bd268 */ __asm { NOP }
    /* +0x7bd269 */ __asm { NOP }
    /* +0x7bd26a */ __asm { LEA RCX,[0x7fffa4780896] }
    /* +0x7bd271 */ __asm { MOV RDX,0x5eb1138f4d9289f }
    /* +0x7bd27b */ __asm { CMP RCX,RDX }
    /* +0x7bd27e */ __asm { JZ 0x7fffa4f2d3ca }
    /* +0x7bd284 */ __asm { MOV R9,qword ptr [RBP + 0x408] }
    /* +0x7bd28b */ __asm { OR R9D,0x1 }
    /* +0x7bd28f */ __asm { MOV AX,0x113 }
    /* +0x7bd293 */ __asm { MOV R8D,0xa20710d2 }
    /* +0x7bd299 */ __asm { MOV R10,qword ptr [RBP + 0x118] }
    /* +0x7bd2a0 */ __asm { XOR EAX,R10D }
    /* +0x7bd2a3 */ __asm { ADD EAX,0xffffd8be }
    /* +0x7bd2a8 */ __asm { MOV RDX,qword ptr [RBP + 0x430] }
    /* +0x7bd2af */ __asm { XOR EDX,EAX }
    /* +0x7bd2b1 */ __asm { MOV AX,0x884b }
    /* +0x7bd2b5 */ __asm { IMUL EAX,R9D }
    /* +0x7bd2b9 */ __asm { ADD EAX,R10D }
    /* +0x7bd2bc */ __asm { ROL AX,0x1 }
    /* +0x7bd2bf */ __asm { MOVZX R9D,AX }
    /* +0x7bd2c3 */ __asm { ADD R8D,0xa2e5a8b4 }
    /* +0x7bd2ca */ __asm { XOR R8D,dword ptr [RBP + -0x10] }
    /* +0x7bd2ce */ __asm { SUB R8D,R10D }
    /* +0x7bd2d1 */ __asm { MOVSXD R10,R8D }
    /* +0x7bd2d4 */ __asm { MOVZX EDX,DX }
    /* +0x7bd2d7 */ __asm { MOV qword ptr [RBP + 0xc0],R8 }
    /* +0x7bd2de */ __asm { MOV EAX,dword ptr [RCX + 0x3d86] }
    /* +0x7bd2e4 */ __asm { LEA R8,[RBP + 0x200] }
    /* +0x7bd2eb */ __asm { SYSCALL }
    /* +0x7bd2ed */ __asm { LEA RDX,[0x7fffa4785880] }
    /* +0x7bd2f4 */ __asm { MOV RCX,RDX }
    /* +0x7bd2f7 */ __asm { ROL RCX,0x24 }
    /* +0x7bd2fb */ __asm { ADD RCX,0x17969501 }
    /* +0x7bd302 */ __asm { MOV R8,-0x4286fae6d1c1e3b }
    /* +0x7bd30c */ __asm { CMP RCX,R8 }
    /* +0x7bd30f */ __asm { JZ 0x7fffa4f2d3d2 }
    /* +0x7bd315 */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0x7bd31c */ __asm { MOV EAX,dword ptr [RDX + -0x1250] }
    /* +0x7bd322 */ __asm { MOV R10,R14 }
    /* +0x7bd325 */ __asm { SYSCALL }
    /* +0x7bd327 */ __asm { MOVAPS XMM8,xmmword ptr [RSP + 0xc0] }
    /* +0x7bd330 */ __asm { MOVAPS XMM6,xmmword ptr [RSP + 0xb0] }
    /* +0x7bd338 */ __asm { MOVAPS XMM15,xmmword ptr [RSP + 0xa0] }
    /* +0x7bd341 */ __asm { MOVAPS XMM10,xmmword ptr [RSP + 0x90] }
    /* +0x7bd34a */ __asm { MOVAPS XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x7bd353 */ __asm { MOVAPS XMM13,xmmword ptr [RSP + 0x70] }
    /* +0x7bd359 */ __asm { MOVAPS XMM9,xmmword ptr [RSP + 0x60] }
    /* +0x7bd35f */ __asm { ADD RSP,0xd8 }
    /* +0x7bd366 */ __asm { POP RBX }
    /* +0x7bd367 */ __asm { POP R14 }
    /* +0x7bd369 */ __asm { POP R15 }
    /* +0x7bd36b */ __asm { POP R12 }
    /* +0x7bd36d */ __asm { POP RDI }
    /* +0x7bd36e */ __asm { POP R13 }
    /* +0x7bd370 */ __asm { POP RSI }
    /* +0x7bd371 */ __asm { POP RBP }
    /* +0x7bd372 */ __asm { RET }
    /* +0x7bd383 */ __asm { MOV RCX,0x0 }
    /* +0x7bd38a */ __asm { NOP }
    /* +0x7bd38b */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x7bd3aa */ __asm { IMUL RCX,qword ptr [R13 + -0x5a217],-0x7f960c01 }
    /* +0x7bd3b5 */ __asm { JMP 0x7fffa4f2ced5 }
    /* +0x7bd3ca */ __asm { CMP BH,uint8_t ptr [RCX + -0x14d1609] }
    /* +0x7bd3d2 */ __asm { SBB CH,uint8_t ptr [RAX + 0x4b] }
    /* +0x7bd3d5 */ __asm { AND dword ptr [RDX + -0x5d1a055f],0xffffffe9 }
    /* +0x7bd3dc */ __asm { XOR EAX,0x48ffffff }
    /* +0x7bd3e1 */ __asm { MOV dword ptr [RSP + 0x10],EDX }
    /* +0x7bd3e5 */ __asm { PUSH RBP }
    /* +0x7bd3e6 */ __asm { PUSH RSI }
    /* +0x7bd3e7 */ __asm { PUSH R13 }
    /* +0x7bd3e9 */ __asm { PUSH RDI }
    /* +0x7bd3ea */ __asm { PUSH R12 }
    /* +0x7bd3ec */ __asm { PUSH R15 }
    /* +0x7bd3ee */ __asm { PUSH R14 }
    /* +0x7bd3f0 */ __asm { PUSH RBX }
    /* +0x7bd3f1 */ __asm { SUB RSP,0xd8 }
    /* +0x7bd3f8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x7bd3ff */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM9 }
    /* +0x7bd406 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM13 }
    /* +0x7bd40d */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x7bd417 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM10 }
    /* +0x7bd421 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM15 }
    /* +0x7bd42b */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM6 }
    /* +0x7bd434 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM8 }
    /* +0x7bd43e */ __asm { LEA RDX,[0x7fffa5499fc6] }
    /* +0x7bd445 */ __asm { LEA R9,[RBP + 0x320] }
    /* +0x7bd44c */ __asm { MOV RCX,R9 }
    /* +0x7bd44f */ __asm { ROL RCX,0x29 }
    /* +0x7bd453 */ __asm { MOV R11W,0x57c7 }
    /* +0x7bd458 */ __asm { MOV R8D,0xcd3309c4 }
    /* +0x7bd45e */ __asm { MOV RDI,qword ptr [RBP + -0x10] }
    /* +0x7bd462 */ __asm { XOR R8D,EDI }
    /* +0x7bd465 */ __asm { NOT R8D }
    /* +0x7bd468 */ __asm { MOV R10,R9 }
    /* +0x7bd46b */ __asm { ROL R10,0x2b }
    /* +0x7bd46f */ __asm { XOR R10,RCX }
    /* +0x7bd472 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x7bd479 */ __asm { SUB R8D,ECX }
    /* +0x7bd47c */ __asm { XOR R10,R9 }
    /* +0x7bd47f */ __asm { MOV R9,R10 }
    /* +0x7bd482 */ __asm { ROL R9,0x5 }
    /* +0x7bd486 */ __asm { MOV RAX,R10 }
    /* +0x7bd489 */ __asm { ROL RAX,0x7 }
    /* +0x7bd48d */ __asm { ADD R11D,EDI }
    /* +0x7bd490 */ __asm { ROL R11W,0xc }
    /* +0x7bd495 */ __asm { XOR R11D,0x6fed }
    /* +0x7bd49c */ __asm { ROR R11W,CL }
    /* +0x7bd4a0 */ __asm { XOR RAX,R9 }
    /* +0x7bd4a3 */ __asm { XOR RAX,R10 }
    /* +0x7bd4a6 */ __asm { MOVSX RCX,R11W }
    /* +0x7bd4aa */ __asm { ADD RCX,RDX }
    /* +0x7bd4ad */ __asm { MOV qword ptr [RSP + 0x20],RAX }
    /* +0x7bd4b2 */ __asm { CALL RCX }
    /* +0x7bd4b4 */ __asm { MOV RDX,qword ptr [RBP + 0x1d0] }
    /* +0x7bd4bb */ __asm { MOV qword ptr [RBP],RDX }
    /* +0x7bd4bf */ __asm { MOVAPS XMM8,xmmword ptr [RSP + 0xc0] }
    /* +0x7bd4c8 */ __asm { MOVAPS XMM6,xmmword ptr [RSP + 0xb0] }
    /* +0x7bd4d0 */ __asm { MOVAPS XMM15,xmmword ptr [RSP + 0xa0] }
    /* +0x7bd4d9 */ __asm { MOVAPS XMM10,xmmword ptr [RSP + 0x90] }
    /* +0x7bd4e2 */ __asm { MOVAPS XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x7bd4eb */ __asm { MOVAPS XMM13,xmmword ptr [RSP + 0x70] }
    /* +0x7bd4f1 */ __asm { MOVAPS XMM9,xmmword ptr [RSP + 0x60] }
    /* +0x7bd4f7 */ __asm { ADD RSP,0xd8 }
    /* +0x7bd4fe */ __asm { POP RBX }
    /* +0x7bd4ff */ __asm { POP R14 }
    /* +0x7bd501 */ __asm { POP R15 }
    /* +0x7bd503 */ __asm { POP R12 }
    /* +0x7bd505 */ __asm { POP RDI }
    /* +0x7bd506 */ __asm { POP R13 }
    /* +0x7bd508 */ __asm { POP RSI }
    /* +0x7bd509 */ __asm { POP RBP }
    /* +0x7bd50a */ __asm { RET }
}


// ============================================================================
// Function : Unwind@7fffa4f2d3e0  |  RVA: 0x7bd3e0  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2d3e0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint16_t uVar5;
  
  uVar4 = param_2 + 0x3a0;
  uVar4 = (uVar4 << 0x2b | uVar4 >> 0x15) ^ (uVar4 << 0x29 | uVar4 >> 0x17) ^ uVar4;
  uVar3 = uVar4 << 5 | uVar4 >> 0x3b;
  uVar5 = (short)*(uint64_t *)(param_2 + 0x70) + 0x57c7;
  uVar5 = (uVar5 * 0x1000 | uVar5 >> 4) ^ 0x6fed;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0xf;
  pcVar2 = (code *)((int64_t)(short)(uVar5 >> bVar1 | uVar5 << 0x10 - bVar1) + 0x7fffa5499fc6);
  (*pcVar2)(pcVar2,0x7fffa5499fc6,
            ~((uint32_t)*(uint64_t *)(param_2 + 0x70) ^ 0xcd3309c4) -
            (int)*(uint64_t *)(param_2 + 0x198),uVar3,(uVar4 << 7 | uVar4 >> 0x39) ^ uVar3 ^ uVar4
           );
  *(uint64_t *)(param_2 + 0x80) = *(uint64_t *)(param_2 + 0x250);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2d510  |  RVA: 0x7bd510  |  Size: 285 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2d510(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  
  uVar3 = param_2 + 0xe0;
  uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x198);
  uVar2 = uVar5 ^ 0xb8ca5a83;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x70) & 0x1f;
  uVar2 = uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
  uVar3 = (uVar3 << 0x2b | uVar3 >> 0x15) ^ (uVar3 << 0x29 | uVar3 >> 0x17) ^ uVar3;
  uVar4 = uVar3 << 7 | uVar3 >> 0x39;
  uVar6 = (uVar3 << 5 | uVar3 >> 0x3b) ^ uVar4 ^ uVar3;
  (*(code *)(&UNK_7fffa54a5b90 + (int)(uVar2 << 0x1e | uVar2 >> 2)))
            (uVar3,uVar4,(-(int)*(uint64_t *)(param_2 + 0x70) - uVar5) + -0x4b10f6bd,uVar6,uVar6);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2d630  |  RVA: 0x7bd630  |  Size: 3577 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4f2d630(void) {
    /* +0x7bd630 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x7bd635 */ __asm { PUSH RBP }
    /* +0x7bd636 */ __asm { PUSH RSI }
    /* +0x7bd637 */ __asm { PUSH R13 }
    /* +0x7bd639 */ __asm { PUSH RDI }
    /* +0x7bd63a */ __asm { PUSH R12 }
    /* +0x7bd63c */ __asm { PUSH R15 }
    /* +0x7bd63e */ __asm { PUSH R14 }
    /* +0x7bd640 */ __asm { PUSH RBX }
    /* +0x7bd641 */ __asm { SUB RSP,0xd8 }
    /* +0x7bd648 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x7bd64f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM9 }
    /* +0x7bd656 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM13 }
    /* +0x7bd65d */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x7bd667 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM10 }
    /* +0x7bd671 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM15 }
    /* +0x7bd67b */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM6 }
    /* +0x7bd684 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM8 }
    /* +0x7bd68e */ __asm { MOV AX,0xaba6 }
    /* +0x7bd692 */ __asm { ADD EAX,dword ptr [RBP + 0x408] }
    /* +0x7bd698 */ __asm { MOV RDX,qword ptr [RBP + 0x1d0] }
    /* +0x7bd69f */ __asm { MOV R8,RDX }
    /* +0x7bd6a2 */ __asm { SHR R8,0x3d }
    /* +0x7bd6a6 */ __asm { XOR R8,RDX }
    /* +0x7bd6a9 */ __asm { LEA RDX,[0x7fffa568df58] }
    /* +0x7bd6b0 */ __asm { MOV R11D,0xd6c9b040 }
    /* +0x7bd6b6 */ __asm { ADD R11D,0xc9f66f20 }
    /* +0x7bd6bd */ __asm { XOR R11D,0x18aa071f }
    /* +0x7bd6c4 */ __asm { MOV R12,qword ptr [RBP + 0x118] }
    /* +0x7bd6cb */ __asm { MOV ECX,R12D }
    /* +0x7bd6ce */ __asm { ROR R11D,CL }
    /* +0x7bd6d1 */ __asm { MOV RDI,qword ptr [RBP + 0x158] }
    /* +0x7bd6d8 */ __asm { OR EDI,0x1 }
    /* +0x7bd6db */ __asm { IMUL EAX,EAX,-0x2e05 }
    /* +0x7bd6e1 */ __asm { ADD EAX,0x7d3e }
    /* +0x7bd6e6 */ __asm { ROR AX,CL }
    /* +0x7bd6e9 */ __asm { IMUL R11D,EDI }
    /* +0x7bd6ed */ __asm { MOVSX RCX,AX }
    /* +0x7bd6f1 */ __asm { ADD RCX,RDX }
    /* +0x7bd6f4 */ __asm { CALL RCX }
    /* +0x7bd6f6 */ __asm { MOV dword ptr [RBP + 0x60],0xa8bfb061 }
    /* +0x7bd6fd */ __asm { MOV ECX,dword ptr [RBP + 0x60] }
    /* +0x7bd700 */ __asm { MOV R14,qword ptr [RBP + 0x1b8] }
    /* +0x7bd707 */ __asm { RDTSC }
    /* +0x7bd709 */ __asm { SHL RDX,0x20 }
    /* +0x7bd70d */ __asm { OR RDX,RAX }
    /* +0x7bd710 */ __asm { MOV R8,-0x30ebf64fafbc6efb }
    /* +0x7bd71a */ __asm { IMUL RDX,R8 }
    /* +0x7bd71e */ __asm { MOV R8,-0x22b18422c4a9c65e }
    /* +0x7bd728 */ __asm { ADD RDX,R8 }
    /* +0x7bd72b */ __asm { MOV R9,RDX }
    /* +0x7bd72e */ __asm { SHR R9,0x1b }
    /* +0x7bd732 */ __asm { MOV RCX,RDX }
    /* +0x7bd735 */ __asm { SHR RCX,0x3b }
    /* +0x7bd739 */ __asm { MOV R8W,0xaaf1 }
    /* +0x7bd73e */ __asm { MOV EAX,R12D }
    /* +0x7bd741 */ __asm { SUB EAX,R8D }
    /* +0x7bd744 */ __asm { SHR RDX,0x2d }
    /* +0x7bd748 */ __asm { XOR R9D,EDX }
    /* +0x7bd74b */ __asm { ROR R9D,CL }
    /* +0x7bd74e */ __asm { ADD EAX,0x16b8 }
    /* +0x7bd753 */ __asm { MOVZX ECX,AX }
    /* +0x7bd756 */ __asm { AND R9D,0x3 }
    /* +0x7bd75a */ __asm { CMP R9D,ECX }
    /* +0x7bd75d */ __asm { JC 0x7fffa4f2da6e }
    /* +0x7bd763 */ __asm { CMP R9D,0x3 }
    /* +0x7bd767 */ __asm { JNZ 0x7fffa4f2dd16 }
    /* +0x7bd76d */ __asm { MOV ECX,0x341f8212 }
    /* +0x7bd772 */ __asm { RDTSC }
    /* +0x7bd774 */ __asm { SHL RDX,0x20 }
    /* +0x7bd778 */ __asm { OR RDX,RAX }
    /* +0x7bd77b */ __asm { ADD ECX,0x7b6c9e1b }
    /* +0x7bd781 */ __asm { IMUL EDI,ECX }
    /* +0x7bd784 */ __asm { MOV RCX,-0x4b061743ec0c107b }
    /* +0x7bd78e */ __asm { IMUL RCX,RDX }
    /* +0x7bd792 */ __asm { MOV RDX,-0x582d7c7028fe06fe }
    /* +0x7bd79c */ __asm { ADD RCX,RDX }
    /* +0x7bd79f */ __asm { MOV R8,RCX }
    /* +0x7bd7a2 */ __asm { SHR R8,0x1b }
    /* +0x7bd7a6 */ __asm { MOV R9,RCX }
    /* +0x7bd7a9 */ __asm { SHR R9,0x2d }
    /* +0x7bd7ad */ __asm { XOR R9D,R8D }
    /* +0x7bd7b0 */ __asm { SHR RCX,0x3b }
    /* +0x7bd7b4 */ __asm { ROR R9D,CL }
    /* +0x7bd7b7 */ __asm { ADD EDI,dword ptr [RBP + 0x118] }
    /* +0x7bd7bd */ __asm { MOV dword ptr [RBP + 0x60],EDI }
    /* +0x7bd7c0 */ __asm { MOV ECX,dword ptr [RBP + 0x60] }
    /* +0x7bd7c3 */ __asm { TEST CL,0x1 }
    /* +0x7bd7c6 */ __asm { NOP }
    /* +0x7bd7c7 */ __asm { NOP }
    /* +0x7bd7c8 */ __asm { NOP }
    /* +0x7bd7c9 */ __asm { NOP }
    /* +0x7bd7ca */ __asm { NOP }
    /* +0x7bd7cb */ __asm { NOP }
    /* +0x7bd7cc */ __asm { NOP }
    /* +0x7bd7cd */ __asm { NOP }
    /* +0x7bd7ce */ __asm { NOP }
    /* +0x7bd7cf */ __asm { NOP }
    /* +0x7bd7d0 */ __asm { NOP }
    /* +0x7bd7d1 */ __asm { NOP }
    /* +0x7bd7d2 */ __asm { CMP R9D,0x4516d08 }
    /* +0x7bd7d9 */ __asm { JA 0x7fffa4f2da2a }
    /* +0x7bd7df */ __asm { MOV R8W,0x2e82 }
    /* +0x7bd7e4 */ __asm { ADD R8D,0xffffe62e }
    /* +0x7bd7eb */ __asm { MOV RCX,qword ptr [RBP + -0x10] }
    /* +0x7bd7ef */ __asm { ROL R8W,CL }
    /* +0x7bd7f3 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x7bd7fa */ __asm { ROR R8W,CL }
    /* +0x7bd7fe */ __asm { IMUL ECX,R8D,-0x6ed7 }
    /* +0x7bd805 */ __asm { MOVZX R9D,CX }
    /* +0x7bd809 */ __asm { MOV RDX,qword ptr GS:[R9] }
    /* +0x7bd80d */ __asm { MOV RDX,qword ptr [RDX + 0x30] }
    /* +0x7bd811 */ __asm { MOV RCX,0x3a8c2e850ede86b3 }
    /* +0x7bd81b */ __asm { SUB RDX,RCX }
    /* +0x7bd81e */ __asm { MOV R8,0x5bc515d00a0f910d }
    /* +0x7bd828 */ __asm { CMP RDX,R8 }
    /* +0x7bd82b */ __asm { NOP }
    /* +0x7bd82c */ __asm { NOP }
    /* +0x7bd82d */ __asm { NOP }
    /* +0x7bd82e */ __asm { NOP }
    /* +0x7bd82f */ __asm { NOP }
    /* +0x7bd830 */ __asm { MOV EDX,0xf7c97ed5 }
    /* +0x7bd835 */ __asm { MOV RCX,0x69f561ee8bf7c314 }
    /* +0x7bd83f */ __asm { XOR R8D,R8D }
    /* +0x7bd842 */ __asm { CMP RDX,RCX }
    /* +0x7bd845 */ __asm { SETZ R8B }
    /* +0x7bd849 */ __asm { MOV R9D,0xe8f2f477 }
    /* +0x7bd84f */ __asm { MOV R10D,0xbeb9b157 }
    /* +0x7bd855 */ __asm { XOR R10D,dword ptr [RBP + -0x10] }
    /* +0x7bd859 */ __asm { ADD R10D,0x93c003eb }
    /* +0x7bd860 */ __asm { MOV RCX,0x69f561ee8bf7c315 }
    /* +0x7bd86a */ __asm { XOR EAX,EAX }
    /* +0x7bd86c */ __asm { CMP RDX,RCX }
    /* +0x7bd86f */ __asm { SETC AL }
    /* +0x7bd872 */ __asm { MOV RCX,qword ptr [RBP + 0x118] }
    /* +0x7bd879 */ __asm { ROR R10D,CL }
    /* +0x7bd87c */ __asm { IMUL R9D,dword ptr [RBP + 0x3c8] }
    /* +0x7bd884 */ __asm { ROL R9D,0x17 }
    /* +0x7bd888 */ __asm { XOR R9D,0x76c17f35 }
    /* +0x7bd88f */ __asm { CMP R9,R10 }
    /* +0x7bd892 */ __asm { CMOVA EAX,R8D }
    /* +0x7bd896 */ __asm { CMP AL,0x1 }
    /* +0x7bd898 */ __asm { NOP }
    /* +0x7bd899 */ __asm { NOP }
    /* +0x7bd89a */ __asm { NOP }
    /* +0x7bd89b */ __asm { NOP }
    /* +0x7bd89c */ __asm { NOP }
    /* +0x7bd89d */ __asm { MOV R8,qword ptr [RDX + -0x77cb7ecd] }
    /* +0x7bd8a4 */ __asm { MOV RAX,R8 }
    /* +0x7bd8a7 */ __asm { MOV RDX,-0x579708bdda508448 }
    /* +0x7bd8b1 */ __asm { MUL RDX }
    /* +0x7bd8b4 */ __asm { MOV RCX,RDX }
    /* +0x7bd8b7 */ __asm { MOV EDX,0x146e2fc }
    /* +0x7bd8bc */ __asm { MOV RAX,R8 }
    /* +0x7bd8bf */ __asm { MUL RDX }
    /* +0x7bd8c2 */ __asm { ADD RAX,RCX }
    /* +0x7bd8c5 */ __asm { ADC RDX,0x0 }
    /* +0x7bd8c9 */ __asm { TEST DL,0x1 }
    /* +0x7bd8cc */ __asm { JZ 0x7fffa4f2da2a }
    /* +0x7bd8d2 */ __asm { PXOR XMM2,XMM2 }
    /* +0x7bd8d6 */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM2 }
    /* +0x7bd8db */ __asm { MOV dword ptr [RBP + 0x160],0xecbb8dfd }
    /* +0x7bd8e5 */ __asm { MOV ECX,dword ptr [RBP + 0x160] }
    /* +0x7bd8eb */ __asm { MOV dword ptr [RBP + 0x60],0x0 }
    /* +0x7bd8f2 */ __asm { MOV dword ptr [RBP + 0x160],0x3bf913f2 }
    /* +0x7bd8fc */ __asm { MOV ECX,dword ptr [RBP + 0x160] }
    /* +0x7bd902 */ __asm { PUSHFQ }
    /* +0x7bd903 */ __asm { POP RDX }
    /* +0x7bd904 */ __asm { TEST EDX,0x100 }
    /* +0x7bd90a */ __asm { NOP }
    /* +0x7bd90b */ __asm { NOP }
    /* +0x7bd90c */ __asm { NOP }
    /* +0x7bd90d */ __asm { NOP }
    /* +0x7bd90e */ __asm { NOP }
    /* +0x7bd90f */ __asm { MOV ECX,0xa7000d5 }
    /* +0x7bd914 */ __asm { IMUL R8D,ECX,0x1fabba3d }
    /* +0x7bd91b */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0x7bd922 */ __asm { ADD R8D,R9D }
    /* +0x7bd925 */ __asm { NOT R8D }
    /* +0x7bd928 */ __asm { MOV RCX,qword ptr [RBP + 0x178] }
    /* +0x7bd92f */ __asm { ROR R8D,CL }
    /* +0x7bd932 */ __asm { MOV dword ptr [RBP + 0x160],R8D }
    /* +0x7bd939 */ __asm { MOV R8D,dword ptr [RBP + 0x160] }
    /* +0x7bd940 */ __asm { MOV EAX,0xedb2e7cd }
    /* +0x7bd945 */ __asm { XOR EAX,dword ptr [RBP + 0x408] }
    /* +0x7bd94b */ __asm { ROL EAX,0x3 }
    /* +0x7bd94e */ __asm { MOV ECX,R9D }
    /* +0x7bd951 */ __asm { ROR EAX,CL }
    /* +0x7bd953 */ __asm { IMUL ECX,EAX,-0x78ea822b }
    /* +0x7bd959 */ __asm { CMP R8D,ECX }
    /* +0x7bd95c */ __asm { JBE 0x7fffa4f2e618 }
    /* +0x7bd962 */ __asm { MOV RDX,-0x7ce9970a1284c5df }
    /* +0x7bd96c */ __asm { LEA RCX,[0x7fffa4786ea6] }
    /* +0x7bd973 */ __asm { MOV R8,RCX }
    /* +0x7bd976 */ __asm { NOT R8 }
    /* +0x7bd979 */ __asm { MOV R11,qword ptr [RBP + -0x10] }
    /* +0x7bd97d */ __asm { OR R11,0x1 }
    /* +0x7bd981 */ __asm { IMUL R11,RDX }
    /* +0x7bd985 */ __asm { MOV EDX,0x3df789b0 }
    /* +0x7bd98a */ __asm { SUB RDX,R11 }
    /* +0x7bd98d */ __asm { MOV R10D,0xb4efd39f }
    /* +0x7bd993 */ __asm { IMUL R10,R8 }
    /* +0x7bd997 */ __asm { IMUL R10,RDX }
    /* +0x7bd99b */ __asm { MOV RDX,0x2f02b85b49637b20 }
    /* +0x7bd9a5 */ __asm { CMP R10,RDX }
    /* +0x7bd9a8 */ __asm { JZ 0x7fffa4f2e61e }
    /* +0x7bd9ae */ __asm { MOV RDX,qword ptr [RBP + 0x178] }
    /* +0x7bd9b5 */ __asm { MOV R8D,EDX }
    /* +0x7bd9b8 */ __asm { OR R8D,0x1 }
    /* +0x7bd9bc */ __asm { MOV qword ptr [RBP + 0x160],RDX }
    /* +0x7bd9c3 */ __asm { MOV EAX,0xd2dbe937 }
    /* +0x7bd9c8 */ __asm { MOV R10,qword ptr [RBP + 0x118] }
    /* +0x7bd9cf */ __asm { SUB EAX,R10D }
    /* +0x7bd9d2 */ __asm { ADD EAX,0xf0807d47 }
    /* +0x7bd9d7 */ __asm { MOV RDX,qword ptr [RBP + 0x408] }
    /* +0x7bd9de */ __asm { MOV R11D,EDX }
    /* +0x7bd9e1 */ __asm { OR R11D,0x1 }
    /* +0x7bd9e5 */ __asm { MOV R9W,0x690d }
    /* +0x7bd9ea */ __asm { IMUL R9D,R11D }
    /* +0x7bd9ee */ __asm { XOR R9D,0xfffffbd4 }
    /* +0x7bd9f5 */ __asm { SUB R9D,R10D }
    /* +0x7bd9f8 */ __asm { XOR EAX,dword ptr [RBP + -0x10] }
    /* +0x7bd9fb */ __asm { MOVSXD R10,EAX }
    /* +0x7bd9fe */ __asm { MOV AX,0xe929 }
    /* +0x7bda02 */ __asm { IMUL EAX,R8D }
    /* +0x7bda06 */ __asm { ADD EAX,0xffff9c7f }
    /* +0x7bda0b */ __asm { ROL AX,0xd }
    /* +0x7bda0f */ __asm { MOVZX EDX,R9W }
    /* +0x7bda13 */ __asm { IMUL EAX,dword ptr [RBP + 0x430] }
    /* +0x7bda1a */ __asm { MOVZX R9D,AX }
    /* +0x7bda1e */ __asm { MOV EAX,dword ptr [RCX + -0x201a] }
    /* +0x7bda24 */ __asm { LEA R8,[RBP + 0x60] }
    /* +0x7bda28 */ __asm { SYSCALL }
    /* +0x7bda2a */ __asm { LEA R10,[0x7fffa477d12c] }
    /* +0x7bda31 */ __asm { MOV RDX,-0x2a546e73da3471ee }
    /* +0x7bda3b */ __asm { CMP R10,RDX }
    /* +0x7bda3e */ __asm { NOP }
    /* +0x7bda3f */ __asm { NOP }
    /* +0x7bda40 */ __asm { NOP }
    /* +0x7bda41 */ __asm { NOP }
    /* +0x7bda42 */ __asm { NOP }
    /* +0x7bda43 */ __asm { MOV CX,0x2571 }
    /* +0x7bda47 */ __asm { ADD ECX,dword ptr [RBP + 0x408] }
    /* +0x7bda4d */ __asm { XOR ECX,dword ptr [RBP + 0x118] }
    /* +0x7bda53 */ __asm { IMUL ECX,ECX,0x2489 }
    /* +0x7bda59 */ __asm { MOV qword ptr [RBP + 0x60],RDX }
    /* +0x7bda5d */ __asm { MOVZX R9D,CX }
    /* +0x7bda61 */ __asm { MOV EAX,dword ptr [R9 + R10*0x1 + 0xf8] }
    /* +0x7bda69 */ __asm { JMP 0x7fffa4f2e5b2 }
    /* +0x7bda6e */ __asm { CMP R9D,0x1 }
    /* +0x7bda72 */ __asm { JNZ 0x7fffa4f2dda8 }
    /* +0x7bda78 */ __asm { RDTSC }
    /* +0x7bda7a */ __asm { SHL RDX,0x20 }
    /* +0x7bda7e */ __asm { OR RDX,RAX }
    /* +0x7bda81 */ __asm { MOV R10,0x5a46117eacb056b3 }
    /* +0x7bda8b */ __asm { ADD R10,RDX }
    /* +0x7bda8e */ __asm { MOV R8,-0x5a46117eacb056b3 }
    /* +0x7bda98 */ __asm { IMUL RDX,R8 }
    /* +0x7bda9c */ __asm { MOV R9D,0xf5f331d9 }
    /* +0x7bdaa2 */ __asm { MOV R11,qword ptr [RBP + -0x10] }
    /* +0x7bdaa6 */ __asm { XOR R9D,R11D }
    /* +0x7bdaa9 */ __asm { MOV EAX,0xcdf5f0e9 }
    /* +0x7bdaae */ __asm { IMUL EAX,dword ptr [RBP + 0x3c8] }
    /* +0x7bdab5 */ __asm { XOR EAX,dword ptr [RBP + 0x178] }
    /* +0x7bdabb */ __asm { ROL R9D,0x11 }
    /* +0x7bdabf */ __asm { MOV CX,0x518f }
    /* +0x7bdac3 */ __asm { MOV RDI,qword ptr [RBP + 0x118] }
    /* +0x7bdaca */ __asm { ADD R9D,EDI }
    /* +0x7bdacd */ __asm { MOV R8D,0x530f }
    /* +0x7bdad3 */ __asm { SUB R8D,ECX }
    /* +0x7bdad6 */ __asm { MOV RCX,qword ptr [RBP + 0x408] }
    /* +0x7bdadd */ __asm { ROR R8W,CL }
    /* +0x7bdae1 */ __asm { MOV ECX,0xcc7dd3c0 }
    /* +0x7bdae6 */ __asm { SUB ECX,R11D }
    /* +0x7bdae9 */ __asm { XOR ECX,EDI }
    /* +0x7bdaeb */ __asm { NOT ECX }
    /* +0x7bdaed */ __asm { ADD EAX,0x5feb4d67 }
    /* +0x7bdaf2 */ __asm { CMP RAX,RCX }
    /* +0x7bdaf5 */ __asm { CMOVG RDX,R10 }
    /* +0x7bdaf9 */ __asm { MOV RCX,0x203e807f217c37a2 }
    /* +0x7bdb03 */ __asm { ADD RDX,RCX }
    /* +0x7bdb06 */ __asm { MOV RAX,RDX }
    /* +0x7bdb09 */ __asm { SHR RAX,0x1b }
    /* +0x7bdb0d */ __asm { MOV RCX,RDX }
    /* +0x7bdb10 */ __asm { SHR RCX,0x3b }
    /* +0x7bdb14 */ __asm { MOV R10,RDX }
    /* +0x7bdb17 */ __asm { SHR R10,0x2d }
    /* +0x7bdb1b */ __asm { AND EDX,0x1b }
    /* +0x7bdb1e */ __asm { MOV R11D,0x541334dc }
    /* +0x7bdb24 */ __asm { SUB R11D,EDI }
    /* +0x7bdb27 */ __asm { IMUL R11D,R11D,-0x663b841 }
    /* +0x7bdb2e */ __asm { ROL R11D,0x7 }
    /* +0x7bdb32 */ __asm { NOT R11D }
    /* +0x7bdb35 */ __asm { CMP R9,R11 }
    /* +0x7bdb38 */ __asm { CMOVG EAX,EDX }
    /* +0x7bdb3b */ __asm { XOR R10D,EAX }
    /* +0x7bdb3e */ __asm { ROR R10D,CL }
    /* +0x7bdb41 */ __asm { MOVZX R9D,R8W }
    /* +0x7bdb45 */ __asm { MOV RDX,qword ptr GS:[R9] }
    /* +0x7bdb49 */ __asm { MOV RDX,qword ptr [RDX + 0xba8] }
    /* +0x7bdb50 */ __asm { MOV RCX,-0x50039001b153bc49 }
    /* +0x7bdb5a */ __asm { SUB RDX,RCX }
    /* +0x7bdb5d */ __asm { MOV R8,0x4a9d32dc7083a549 }
    /* +0x7bdb67 */ __asm { CMP RDX,R8 }
    /* +0x7bdb6a */ __asm { JZ 0x7fffa4f2e60a }
    /* +0x7bdb70 */ __asm { MOV ECX,0xf7f4a1d5 }
    /* +0x7bdb75 */ __asm { ADD ECX,dword ptr [RBP + 0x118] }
    /* +0x7bdb7b */ __asm { XOR ECX,0x7f6f2848 }
    /* +0x7bdb81 */ __asm { CMP R10D,ECX }
    /* +0x7bdb84 */ __asm { JNC 0x7fffa4f2dcee }
    /* +0x7bdb8a */ __asm { MOV R8D,0x77cf8590 }
    /* +0x7bdb90 */ __asm { ADD R8D,0x907be979 }
    /* +0x7bdb97 */ __asm { MOV RCX,qword ptr [RBP + 0x408] }
    /* +0x7bdb9e */ __asm { ROR R8D,CL }
    /* +0x7bdba1 */ __asm { ADD R8D,dword ptr [RBP + 0x118] }
    /* +0x7bdba8 */ __asm { MOV dword ptr [RBP + 0x60],R8D }
    /* +0x7bdbac */ __asm { MOV ECX,dword ptr [RBP + 0x60] }
    /* +0x7bdbaf */ __asm { TEST ECX,ECX }
    /* +0x7bdbb1 */ __asm { JS 0x7fffa4f2e62a }
    /* +0x7bdbb7 */ __asm { MOV ECX,0x1013c017 }
    /* +0x7bdbbc */ __asm { XOR ECX,dword ptr [RBP + -0x10] }
    /* +0x7bdbbf */ __asm { IMUL R9D,ECX,0x2d546ae1 }
    /* +0x7bdbc6 */ __asm { MOV R8,qword ptr [RBP + 0x118] }
    /* +0x7bdbcd */ __asm { ADD R9D,R8D }
    /* +0x7bdbd0 */ __asm { PUSHFQ }
    /* +0x7bdbd1 */ __asm { POP RDX }
    /* +0x7bdbd2 */ __asm { SHR EDX,0x8 }
    /* +0x7bdbd5 */ __asm { AND EDX,0x1 }
    /* +0x7bdbd8 */ __asm { MOV ECX,0x447d6dfd }
    /* +0x7bdbdd */ __asm { IMUL ECX,ECX,0x6653ac1 }
    /* +0x7bdbe3 */ __asm { ADD ECX,R8D }
    /* +0x7bdbe6 */ __asm { XOR ECX,dword ptr [RBP + 0x408] }
    /* +0x7bdbec */ __asm { IMUL R8D,ECX,-0x580b46df }
    /* +0x7bdbf3 */ __asm { CMP R9,R8 }
    /* +0x7bdbf6 */ __asm { SETL R9B }
    /* +0x7bdbfa */ __asm { XOR R9B,DL }
    /* +0x7bdbfd */ __asm { NOP }
    /* +0x7bdbfe */ __asm { NOP }
    /* +0x7bdbff */ __asm { NOP }
    /* +0x7bdc00 */ __asm { NOP }
    /* +0x7bdc01 */ __asm { NOP }
    /* +0x7bdc02 */ __asm { PXOR XMM2,XMM2 }
    /* +0x7bdc06 */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM2 }
    /* +0x7bdc0b */ __asm { MOV dword ptr [RBP + 0x160],0x14420908 }
    /* +0x7bdc15 */ __asm { MOV ECX,dword ptr [RBP + 0x160] }
    /* +0x7bdc1b */ __asm { TEST ECX,ECX }
    /* +0x7bdc1d */ __asm { NOP }
    /* +0x7bdc1e */ __asm { NOP }
    /* +0x7bdc1f */ __asm { NOP }
    /* +0x7bdc20 */ __asm { NOP }
    /* +0x7bdc21 */ __asm { NOP }
    /* +0x7bdc22 */ __asm { TEST R9B,R9B }
    /* +0x7bdc25 */ __asm { NOP }
    /* +0x7bdc26 */ __asm { NOP }
    /* +0x7bdc27 */ __asm { NOP }
    /* +0x7bdc28 */ __asm { NOP }
    /* +0x7bdc29 */ __asm { MOV dword ptr [RBP + 0x60],0x0 }
    /* +0x7bdc30 */ __asm { MOV dword ptr [RBP + 0x160],0x58c6872a }
    /* +0x7bdc3a */ __asm { MOV ECX,dword ptr [RBP + 0x160] }
    /* +0x7bdc40 */ __asm { MOV dword ptr [RBP + 0x160],0x92a0e358 }
    /* +0x7bdc4a */ __asm { MOV ECX,dword ptr [RBP + 0x160] }
    /* +0x7bdc50 */ __asm { CMP ECX,0xbab60a41 }
    /* +0x7bdc56 */ __asm { JNC 0x7fffa4f2e634 }
    /* +0x7bdc5c */ __asm { LEA RCX,[0x7fffa47806af] }
    /* +0x7bdc63 */ __asm { MOV RDX,-0x284d753deb2e7f0c }
    /* +0x7bdc6d */ __asm { CMP RCX,RDX }
    /* +0x7bdc70 */ __asm { JZ 0x7fffa4f2e63c }
    /* +0x7bdc76 */ __asm { MOV R9,qword ptr [RBP + 0x158] }
    /* +0x7bdc7d */ __asm { OR R9D,0x1 }
    /* +0x7bdc81 */ __asm { MOV AX,0x5c81 }
    /* +0x7bdc85 */ __asm { MOV R8D,0xffffff2d }
    /* +0x7bdc8b */ __asm { SUB R8D,EAX }
    /* +0x7bdc8e */ __asm { MOV AX,0x819 }
    /* +0x7bdc92 */ __asm { MOV R11W,0x5eb3 }
    /* +0x7bdc97 */ __asm { XOR R11D,0x144c }
    /* +0x7bdc9e */ __asm { IMUL EAX,dword ptr [RBP + 0x430] }
    /* +0x7bdca5 */ __asm { ADD EAX,0x54f5 }
    /* +0x7bdcaa */ __asm { IMUL EAX,R9D }
    /* +0x7bdcae */ __asm { MOV qword ptr [RBP + 0x160],RDX }
    /* +0x7bdcb5 */ __asm { MOVZX EDX,AX }
    /* +0x7bdcb8 */ __asm { MOV R10,qword ptr [RBP + 0x118] }
    /* +0x7bdcbf */ __asm { ADD R11D,R10D }
    /* +0x7bdcc2 */ __asm { XOR R11D,0xdf2a }
    /* +0x7bdcc9 */ __asm { MOVZX R9D,R11W }
    /* +0x7bdccd */ __asm { MOV RAX,qword ptr [RBP + 0x408] }
    /* +0x7bdcd4 */ __asm { OR EAX,0x1 }
    /* +0x7bdcd7 */ __asm { IMUL EAX,R8D }
    /* +0x7bdcdb */ __asm { XOR EAX,R10D }
    /* +0x7bdcde */ __asm { MOVSX R10,AX }
    /* +0x7bdce2 */ __asm { MOV EAX,dword ptr [RCX + 0x47dd] }
    /* +0x7bdce8 */ __asm { LEA R8,[RBP + 0x60] }
    /* +0x7bdcec */ __asm { SYSCALL }
    /* +0x7bdcee */ __asm { LEA RDX,[0x7fffa478b2f1] }
    /* +0x7bdcf5 */ __asm { MOV R8,0x6a6e65db771942ac }
    /* +0x7bdcff */ __asm { CMP RDX,R8 }
    /* +0x7bdd02 */ __asm { NOP }
    /* +0x7bdd03 */ __asm { NOP }
    /* +0x7bdd04 */ __asm { NOP }
    /* +0x7bdd05 */ __asm { NOP }
    /* +0x7bdd06 */ __asm { NOP }
    /* +0x7bdd07 */ __asm { MOV qword ptr [RBP + 0x60],RCX }
    /* +0x7bdd0b */ __asm { MOV EAX,dword ptr [RDX + -0x6495] }
    /* +0x7bdd11 */ __asm { JMP 0x7fffa4f2e5b2 }
    /* +0x7bdd16 */ __asm { MOV RDX,-0x67b9f452d9248291 }
    /* +0x7bdd20 */ __asm { SUB RDX,qword ptr [RBP + 0x118] }
    /* +0x7bdd27 */ __asm { ROL RDX,0x3 }
    /* +0x7bdd2b */ __asm { SUB RDX,qword ptr [RBP + -0x10] }
    /* +0x7bdd2f */ __asm { MOV R10D,0x62fd4b26 }
    /* +0x7bdd35 */ __asm { MOV RCX,R10 }
    /* +0x7bdd38 */ __asm { NOT RCX }
    /* +0x7bdd3b */ __asm { MOV R8,-0x66918e5dbd8b61a1 }
    /* +0x7bdd45 */ __asm { IMUL R8,RCX }
    /* +0x7bdd49 */ __asm { ADD R8,0x2d543bb9 }
    /* +0x7bdd50 */ __asm { CMP RDX,R8 }
    /* +0x7bdd53 */ __asm { NOP }
    /* +0x7bdd54 */ __asm { NOP }
    /* +0x7bdd55 */ __asm { NOP }
    /* +0x7bdd56 */ __asm { NOP }
    /* +0x7bdd57 */ __asm { NOP }
    /* +0x7bdd58 */ __asm { MOV R9D,0x7cf4710c }
    /* +0x7bdd5e */ __asm { SUB R9D,dword ptr [RBP + 0x408] }
    /* +0x7bdd65 */ __asm { XOR R9D,dword ptr [RBP + 0x118] }
    /* +0x7bdd6c */ __asm { ROL R9D,0xf }
    /* +0x7bdd70 */ __asm { CMP dword ptr [R9 + R10*0x1 + 0x3c0],0xd }
    /* +0x7bdd79 */ __asm { JC 0x7fffa4f2e24e }
    /* +0x7bdd7f */ __asm { LEA RDX,[0x7fffa47c02c6] }
    /* +0x7bdd86 */ __asm { MOV R8,-0x1d23ffb6d09d60f0 }
    /* +0x7bdd90 */ __asm { CMP RDX,R8 }
    /* +0x7bdd93 */ __asm { JZ 0x7fffa4f2e644 }
    /* +0x7bdd99 */ __asm { MOV qword ptr [RBP + 0x60],RCX }
    /* +0x7bdd9d */ __asm { MOV EAX,dword ptr [RDX + -0x328e] }
    /* +0x7bdda3 */ __asm { JMP 0x7fffa4f2e5b2 }
    /* +0x7bdda8 */ __asm { LEA RDX,[0x7fffa47bc237] }
    /* +0x7bddaf */ __asm { MOV R9D,0xfff071f0 }
    /* +0x7bddb5 */ __asm { SUB R9D,dword ptr [RBP + 0x408] }
    /* +0x7bddbc */ __asm { MOV R8D,0x50e2df48 }
    /* +0x7bddc2 */ __asm { ADD R8D,0x8d6679c0 }
    /* +0x7bddc9 */ __asm { MOV RCX,0x2cf60e0cf1340f75 }
    /* +0x7bddd3 */ __asm { XOR EAX,EAX }
    /* +0x7bddd5 */ __asm { CMP RDX,RCX }
    /* +0x7bddd8 */ __asm { SETC AL }
    /* +0x7bdddb */ __asm { XOR R11D,R11D }
    /* +0x7bddde */ __asm { MOV RCX,0x2cf60e0cf1340f74 }
    /* +0x7bdde8 */ __asm { CMP RDX,RCX }
    /* +0x7bddeb */ __asm { SETZ R11B }
    /* +0x7bddef */ __asm { ROL R8D,0xd }
    /* +0x7bddf3 */ __asm { MOV R10,qword ptr [RBP + 0x118] }
    /* +0x7bddfa */ __asm { XOR R8D,R10D }
    /* +0x7bddfd */ __asm { MOV RCX,qword ptr [RBP + 0x158] }
    /* +0x7bde04 */ __asm { ROR R8D,CL }
    /* +0x7bde07 */ __asm { ADD R9D,0xcf88704d }
    /* +0x7bde0e */ __asm { XOR R9D,R10D }
    /* +0x7bde11 */ __asm { ROL R9D,0x9 }
    /* +0x7bde15 */ __asm { CMP R8,R9 }
    /* +0x7bde18 */ __asm { CMOVBE R11D,EAX }
    /* +0x7bde1c */ __asm { CMP R11B,0x1 }
    /* +0x7bde20 */ __asm { JZ 0x7fffa4f2e653 }
    /* +0x7bde26 */ __asm { MOV ECX,0xb514eb2d }
    /* +0x7bde2b */ __asm { MOV R8D,0xf2a5db46 }
    /* +0x7bde31 */ __asm { SUB R8D,ECX }
    /* +0x7bde34 */ __asm { IMUL R9D,R8D,0x1259b137 }
    /* +0x7bde3b */ __asm { MOVZX R11D,uint8_t ptr [RDX + 0x456] }
    /* +0x7bde43 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R11*0x4 + 0x466] }
    /* +0x7bde4c */ __asm { ROL R10B,0x4 }
    /* +0x7bde50 */ __asm { MOV uint8_t ptr [RBP + 0x60],R10B }
    /* +0x7bde54 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R11*0x4 + 0x467] }
    /* +0x7bde5d */ __asm { ROL R10B,0x4 }
    /* +0x7bde61 */ __asm { MOV uint8_t ptr [RBP + 0x61],R10B }
    /* +0x7bde65 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R11*0x4 + 0x468] }
    /* +0x7bde6e */ __asm { ROL R10B,0x4 }
    /* +0x7bde72 */ __asm { MOV uint8_t ptr [RBP + 0x62],R10B }
    /* +0x7bde76 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R11*0x4 + 0x469] }
    /* +0x7bde7f */ __asm { ROL R10B,0x4 }
    /* +0x7bde83 */ __asm { MOV uint8_t ptr [RBP + 0x63],R10B }
    /* +0x7bde87 */ __asm { MOV ECX,0x65e8ce72 }
    /* +0x7bde8c */ __asm { XOR ECX,dword ptr [RBP + 0x60] }
    /* +0x7bde8f */ __asm { XOR R9D,dword ptr [RBP + 0x178] }
    /* +0x7bde96 */ __asm { MOV R8D,dword ptr [R9] }
    /* +0x7bde99 */ __asm { RDTSC }
    /* +0x7bde9b */ __asm { SHL RDX,0x20 }
    /* +0x7bde9f */ __asm { OR RDX,RAX }
    /* +0x7bdea2 */ __asm { BT ECX,R8D }
    /* +0x7bdea6 */ __asm { JNC 0x7fffa4f2e288 }
    /* +0x7bdeac */ __asm { MOV R8,-0x583f2dd720db9bdb }
    /* +0x7bdeb6 */ __asm { IMUL RDX,R8 }
    /* +0x7bdeba */ __asm { MOV ECX,0xb1064e7c }
    /* +0x7bdebf */ __asm { IMUL ECX,dword ptr [RBP + 0x3c8] }
    /* +0x7bdec6 */ __asm { ROL ECX,0x5 }
    /* +0x7bdec9 */ __asm { IMUL R9D,ECX,-0x32c28be3 }
    /* +0x7bded0 */ __asm { MOV R10,qword ptr [RBP + 0x408] }
    /* +0x7bded7 */ __asm { XOR R9D,R10D }
    /* +0x7bdeda */ __asm { MOV R8,qword ptr [R9] }
    /* +0x7bdedd */ __asm { MOV RCX,0x1e6e6f061285ad15 }
    /* +0x7bdee7 */ __asm { MOV RCX,-0xbc8ccb3f9ba7189 }
    /* +0x7bdef1 */ __asm { XOR RCX,R10 }
    /* +0x7bdef4 */ __asm { ROL RCX,0x10 }
    /* +0x7bdef8 */ __asm { IMUL RCX,RCX,0x6e820329 }
    /* +0x7bdeff */ __asm { MOV R10,qword ptr [RBP + 0x118] }
    /* +0x7bdf06 */ __asm { ADD R10,RCX }
    /* +0x7bdf09 */ __asm { ADD R10,RDX }
}


// ============================================================================
// Function : Unwind@7fffa4f2e690  |  RVA: 0x7be690  |  Size: 611 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2e690(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  int64_t lVar4;
  code *pcVar5;
  uint16_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  
  uVar8 = *(uint64_t *)(param_2 + 0x80);
  if ((uint64_t)(((uint32_t)*(uint64_t *)(param_2 + 0x70) | 1) * -0xc8ed & 0xffff) <
      *(uint64_t *)(param_2 + 200)) {
    uVar7 = *(uint64_t *)(param_2 + 0xb0);
    lVar4 = (int64_t)
            (short)((short)*(uint64_t *)(param_2 + 0x70) +
                   (((uint16_t)*(uint64_t *)(param_2 + 0x198) | 1) * -0x27d1 ^ 0x4c62));
    (*(code *)(lVar4 + 0x7fffa5689bbd))(lVar4,uVar7,uVar7 >> 0x3d ^ uVar7);
  }
  if (uVar8 != 0) {
    uVar3 = ((uint32_t)*(uint64_t *)(param_2 + 0x70) ^ 0x41f17186) -
            (int)*(uint64_t *)(param_2 + 0x198);
    pcVar5 = (code *)((int64_t)(int)(uVar3 * 0x200000 | uVar3 >> 0xb) + 0x7fffa5691dd8);
    (*pcVar5)(pcVar5,0x7fffa5691dd8,uVar8 >> 0x3d ^ uVar8);
  }
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x198);
  bVar1 = bVar2 & 0xf;
  uVar6 = -0x5a58 << bVar1 | 0xa5a8U >> 0x10 - bVar1;
  uVar7 = param_2 + 0x210ffd78;
  bVar2 = bVar2 & 0x1f;
  uVar8 = uVar7 << 0x21 ^ uVar7;
  if ((int64_t)
      (uint64_t)
      ((int)*(uint64_t *)(param_2 + 0x228) * (0xfb8548dcU >> bVar2 | -0x47ab724 << 0x20 - bVar2))
      < (int64_t)(*(int *)(param_2 + 0x1d8) * 0x2b342892)) {
    uVar8 = uVar7 - (uVar7 << 0x21);
  }
  uVar8 = (uVar8 << 0x38 | uVar8 >> 8) - 0x5b25b9fc;
  uVar3 = (uint32_t)*(uint64_t *)(param_2 + 0x198) ^ 0x4b755093;
  uVar3 = uVar3 << 0x11 | uVar3 >> 0xf;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x70) & 0x1f;
  (*(code *)((int64_t)(short)~(uVar6 << 2 | uVar6 >> 0xe) + 0x7fffa5246a26))
            (*(uint64_t *)(param_2 + 0x70),(uVar8 * 0x2000000 | uVar8 >> 0x27) - 0x8c0eb63,
             uVar3 << bVar1 | uVar3 >> 0x20 - bVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2e900  |  RVA: 0x7be900  |  Size: 718 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2e900(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint64_t uVar4;
  code *pcVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  
  uVar8 = *(uint32_t *)(param_2 + 0x198) ^ 0xa22f573d;
  if ((uint64_t)((uVar8 << 0x1d | uVar8 + 0xf9aeab18 >> 3) - *(int *)(param_2 + 0x70)) <
      *(uint64_t *)(param_2 + 0x3b8)) {
    uVar8 = (int)*(uint64_t *)(param_2 + 0x1f8) + 0x2abd1814;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0x1f;
    pcVar5 = (code *)((int64_t)(int)(uVar8 << bVar2 | uVar8 >> 0x20 - bVar2) + 0x7fffa569347e);
    (*pcVar5)(pcVar5,0x7fffa569347e,
              *(uint64_t *)(param_2 + 0x3a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x3a0));
  }
  if (*(int64_t *)(param_2 + 0x398) != 0) {
    uVar6 = *(uint64_t *)(param_2 + 0x98) >> 0x1f & 1;
    uVar8 = (uint32_t)*(uint64_t *)(param_2 + 0x198);
    uVar9 = *(int *)(param_2 + 0x448) * 0x61277d3d ^ 0x56ddc120;
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x70) & 0x1f;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1f8) & 0x1f;
    pcVar5 = (code *)((int64_t)(*(int *)(param_2 + 0x260) * -0x269f8d08 + 0x335c9322) +
                     0x7fffa5696ff6);
    uVar4 = (int64_t)
            (int)(((0x4d32a80a - uVar8) * 0x447be8e1 + (int)*(uint64_t *)(param_2 + 0x1f8)) *
                 0x3f703e3f) + (uint64_t)(uVar9 >> bVar3 | uVar9 << 0x20 - bVar3);
    uVar1 = *(uint64_t *)(param_2 + 0x398);
    uVar11 = ~uVar1;
    uVar7 = uVar1 >> 0x3d;
    uVar12 = (uVar11 | uVar7) ^ uVar6;
    uVar10 = (uint64_t)((uint32_t)(uVar1 >> 0x3d) & (uint32_t)uVar1);
    if (((uVar8 ^ 0x5aa0500b) * 0x3625a9c7 - (int)*(uint64_t *)(param_2 + 0x70) ^ 0x15060335) <
        (0xb6973add - uVar8 << bVar2 | 0xb6973add - uVar8 >> 0x20 - bVar2) * 0x728afe33) {
      uVar10 = uVar7 + uVar1;
    }
    lVar13 = (uVar4 & 0xffffffff) * (uVar12 & 0xffffffff) +
             ((uVar4 >> 0x20) * (uVar12 & 0xffffffff) + (uVar11 >> 0x20) * (uVar4 & 0xffffffff) <<
             0x20);
    (*pcVar5)(lVar13,pcVar5,
              (~(uVar6 | uVar7) & uVar11) * -0x2f22fe37 +
              ((uVar6 | uVar7 | uVar1) - (uVar6 | uVar7 ^ uVar1)) * 0xb38d411c +
              (uVar7 ^ uVar1 | ~uVar6) * -0x2f22fe35 + ((~uVar7 | uVar1) ^ uVar6) * 0x2f22fe36 +
              (uVar10 & ~uVar6) * -0xe2b03f53 + lVar13);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f2ebd0  |  RVA: 0x7bebd0  |  Size: 363 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f2ebd0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  code *pcVar4;
  
  if (7 < *(uint64_t *)(param_2 + 0x3b8)) {
    uVar3 = ((uint32_t)*(uint64_t *)(param_2 + 0x198) | 1) * 0x758f +
            (int)*(uint64_t *)(param_2 + 0x70);
    pcVar4 = (code *)((int64_t)(short)((uint16_t)uVar3 >> 1 | (uint16_t)((uVar3 & 1) != 0) << 0xf) +
                     0x7fffa5688358);
    (*pcVar4)(*(uint64_t *)(param_2 + 0x70),pcVar4,
              *(uint64_t *)(param_2 + 0x3a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x3a0));
  }
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0x1f;
  uVar1 = param_2 + 0xb0;
  pcVar4 = (code *)((int64_t)(int)(-0x11b6e1 << bVar2 | 0xffee491fU >> 0x20 - bVar2) +
                   0x7fffa5626648);
  (*pcVar4)(pcVar4,(uVar1 * 0x80000000 | uVar1 >> 0x21) ^ (uVar1 * 0x40000000 | uVar1 >> 0x22) ^
                   uVar1);
  return;
}


// ============================================================================
// Function : FUN_7fffa4f2ed40  |  RVA: 0x7bed40  |  Size: 35 bytes
// Callers  : none
// Callees  : FUN_7fffa56ab060@0xf3b060
// ============================================================================
uint8_t FUN_7fffa4f2ed40(void)

{
  FUN_7fffa56ab060(0x7fffa4781d68);
  FUN_7fffa56ab060(0x7fffa4781d80);
  return 1;
}


// ============================================================================
// Function : FUN_7fffa4f2ed70  |  RVA: 0x7bed70  |  Size: 24979 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4f2ed70(void) {
    /* +0x7bed70 */ __asm { PUSH RBP }
    /* +0x7bed71 */ __asm { PUSH RDI }
    /* +0x7bed72 */ __asm { PUSH RBX }
    /* +0x7bed73 */ __asm { PUSH R14 }
    /* +0x7bed75 */ __asm { PUSH R13 }
    /* +0x7bed77 */ __asm { PUSH R15 }
    /* +0x7bed79 */ __asm { PUSH RSI }
    /* +0x7bed7a */ __asm { PUSH R12 }
    /* +0x7bed7c */ __asm { SUB RSP,0x1b8 }
    /* +0x7bed83 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x7bed8b */ __asm { MOVAPS xmmword ptr [RBP + 0x120],XMM13 }
    /* +0x7bed93 */ __asm { MOV qword ptr [RBP + 0x118],-0x2 }
    /* +0x7bed9e */ __asm { MOV RDI,RCX }
    /* +0x7beda1 */ __asm { MOV EAX,0xbcde663a }
    /* +0x7beda6 */ __asm { MOV R10,RDX }
    /* +0x7beda9 */ __asm { ROL R10,0x14 }
    /* +0x7bedad */ __asm { MOV R8,RDX }
    /* +0x7bedb0 */ __asm { ROL R8,0x1f }
    /* +0x7bedb4 */ __asm { XOR R8,R10 }
    /* +0x7bedb7 */ __asm { XOR R8,RDX }
    /* +0x7bedba */ __asm { MOV RDX,R8 }
    /* +0x7bedbd */ __asm { ROL RDX,0x28 }
    /* +0x7bedc1 */ __asm { MOV R10,R11 }
    /* +0x7bedc4 */ __asm { ROL R10,0x37 }
    /* +0x7bedc8 */ __asm { MOV RCX,R11 }
    /* +0x7bedcb */ __asm { ROL RCX,0x1 }
    /* +0x7bedce */ __asm { ADD EAX,EDI }
    /* +0x7bedd0 */ __asm { ADD EAX,0x2867b060 }
    /* +0x7bedd5 */ __asm { MOV R9D,0x2d47073f }
    /* +0x7beddb */ __asm { ADD R9D,EDI }
    /* +0x7bedde */ __asm { ADD R9D,0xc411f123 }
    /* +0x7bede5 */ __asm { MOV RBX,qword ptr [RBP + 0x178] }
    /* +0x7bedec */ __asm { MOV R15,R8 }
    /* +0x7bedef */ __asm { ROL R15,0x3e }
    /* +0x7bedf3 */ __asm { XOR R15,RDX }
    /* +0x7bedf6 */ __asm { XOR R15,R8 }
    /* +0x7bedf9 */ __asm { MOV R8,R15 }
    /* +0x7bedfc */ __asm { ROL R8,0x10 }
    /* +0x7bee00 */ __asm { MOV RDX,R15 }
    /* +0x7bee03 */ __asm { ROL RDX,0x3c }
    /* +0x7bee07 */ __asm { XOR RDX,R8 }
    /* +0x7bee0a */ __asm { XOR RDX,R15 }
    /* +0x7bee0d */ __asm { MOV R15,RDX }
    /* +0x7bee10 */ __asm { ROL R15,0x20 }
    /* +0x7bee14 */ __asm { MOV R8,RDX }
    /* +0x7bee17 */ __asm { ROL R8,0x38 }
    /* +0x7bee1b */ __asm { XOR R8,R15 }
    /* +0x7bee1e */ __asm { XOR R8,RDX }
    /* +0x7bee21 */ __asm { XOR EDX,EDX }
    /* +0x7bee23 */ __asm { CMP R9,RAX }
    /* +0x7bee26 */ __asm { CMOVC RDX,R8 }
    /* +0x7bee2a */ __asm { ROL R8,0x30 }
    /* +0x7bee2e */ __asm { ROL R11,0xa }
    /* +0x7bee32 */ __asm { XOR R11,RCX }
    /* +0x7bee35 */ __asm { XOR R11,R10 }
    /* +0x7bee38 */ __asm { MOV R10,R11 }
    /* +0x7bee3b */ __asm { ROL R10,0x14 }
    /* +0x7bee3f */ __asm { MOV RCX,R11 }
    /* +0x7bee42 */ __asm { ROL RCX,0x26 }
    /* +0x7bee46 */ __asm { XOR RCX,R10 }
    /* +0x7bee49 */ __asm { XOR RCX,R11 }
    /* +0x7bee4c */ __asm { MOV R11,RCX }
    /* +0x7bee4f */ __asm { ROL R11,0xc }
    /* +0x7bee53 */ __asm { MOV R10,RCX }
    /* +0x7bee56 */ __asm { ROL R10,0x28 }
    /* +0x7bee5a */ __asm { MOVQ XMM0,R11 }
    /* +0x7bee5f */ __asm { MOVQ XMM1,R10 }
    /* +0x7bee64 */ __asm { PXOR XMM1,XMM0 }
    /* +0x7bee68 */ __asm { MOVQ R11,XMM1 }
    /* +0x7bee6d */ __asm { XOR R11,RCX }
    /* +0x7bee70 */ __asm { MOV R10,R11 }
    /* +0x7bee73 */ __asm { ROL R10,0x18 }
    /* +0x7bee77 */ __asm { MOV RCX,R11 }
    /* +0x7bee7a */ __asm { ROL RCX,0x10 }
    /* +0x7bee7e */ __asm { XOR RCX,R10 }
    /* +0x7bee81 */ __asm { XOR RCX,R11 }
    /* +0x7bee84 */ __asm { MOV R11,RCX }
    /* +0x7bee87 */ __asm { ROL R11,0x20 }
    /* +0x7bee8b */ __asm { MOV R15,RCX }
    /* +0x7bee8e */ __asm { ROL R15,0x30 }
    /* +0x7bee92 */ __asm { XOR R15,R11 }
    /* +0x7bee95 */ __asm { XOR R15,RCX }
    /* +0x7bee98 */ __asm { ROL R15,0x20 }
    /* +0x7bee9c */ __asm { MOV R11,0x47be8e06492041bb }
    /* +0x7beea6 */ __asm { MOV qword ptr [RBP + 0x110],RBX }
    /* +0x7beead */ __asm { CMP RBX,R11 }
    /* +0x7beeb0 */ __asm { JZ 0x7fffa4f314cd }
    /* +0x7beeb6 */ __asm { OR R8,RDX }
    /* +0x7beeb9 */ __asm { MOV DX,0x41d7 }
    /* +0x7beebd */ __asm { SUB EDX,EDI }
    /* +0x7beebf */ __asm { IMUL EDX,EDX,-0x1933 }
    /* +0x7beec5 */ __asm { NOT EDX }
    /* +0x7beec7 */ __asm { MOVZX EDX,DX }
    /* +0x7beeca */ __asm { PXOR XMM0,XMM0 }
    /* +0x7beece */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM0 }
    /* +0x7beed6 */ __asm { MOV qword ptr [RBP + 0xf0],0x0 }
    /* +0x7beee1 */ __asm { MOV qword ptr [RBP + 0xf8],0x7 }
    /* +0x7beeec */ __asm { MOV R11,qword ptr GS:[RDX] }
    /* +0x7beef0 */ __asm { MOV EDX,0x808b6b25 }
    /* +0x7beef5 */ __asm { ADD EDX,0xd15df006 }
    /* +0x7beefb */ __asm { MOV ECX,EDI }
    /* +0x7beefd */ __asm { ROR EDX,CL }
    /* +0x7beeff */ __asm { MOV R10,0x5911d643556d338b }
    /* +0x7bef09 */ __asm { IMUL R10,qword ptr [R11 + 0x60] }
    /* +0x7bef0e */ __asm { MOVSXD R11,EDX }
    /* +0x7bef11 */ __asm { SUB R10,R11 }
    /* +0x7bef14 */ __asm { MOV R11,-0x8f804883aa0b3b4 }
    /* +0x7bef1e */ __asm { CMP R10,R11 }
    /* +0x7bef21 */ __asm { NOP }
    /* +0x7bef22 */ __asm { NOP }
    /* +0x7bef23 */ __asm { NOP }
    /* +0x7bef24 */ __asm { NOP }
    /* +0x7bef25 */ __asm { NOP }
    /* +0x7bef26 */ __asm { MOV R14,R8 }
    /* +0x7bef29 */ __asm { ROL R14,0x20 }
    /* +0x7bef2d */ __asm { TEST R8,R8 }
    /* +0x7bef30 */ __asm { MOV qword ptr [RBP + 0xd8],RDI }
    /* +0x7bef37 */ __asm { MOV qword ptr [RBP + 0xc8],R15 }
    /* +0x7bef3e */ __asm { MOV qword ptr [RBP + 0xa8],R14 }
    /* +0x7bef45 */ __asm { JZ 0x7fffa4f2ef9f }
    /* +0x7bef47 */ __asm { MOVZX ESI,word ptr [R15] }
    /* +0x7bef4b */ __asm { MOV EDX,ESI }
    /* +0x7bef4d */ __asm { ROL DX,0x8 }
    /* +0x7bef51 */ __asm { ADD EDX,0xffffcb7f }
    /* +0x7bef57 */ __asm { MOVZX EDX,DX }
    /* +0x7bef5a */ __asm { CMP EDX,0x277f }
    /* +0x7bef60 */ __asm { JNZ 0x7fffa4f2efa6 }
    /* +0x7bef62 */ __asm { MOV R11,0x100000000 }
    /* +0x7bef6c */ __asm { CMP R8,R11 }
    /* +0x7bef6f */ __asm { JNZ 0x7fffa4f2f041 }
    /* +0x7bef75 */ __asm { LEA R8,[R14 + R14*0x1] }
    /* +0x7bef79 */ __asm { MOV qword ptr [RBP + 0xf0],R14 }
    /* +0x7bef80 */ __asm { LEA RCX,[RBP + 0xe0] }
    /* +0x7bef87 */ __asm { MOV RDX,R15 }
    /* +0x7bef8a */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7bef8f */ __asm { MOV word ptr [RBP + R14*0x2 + 0xe0],0x0 }
    /* +0x7bef9a */ __asm { JMP 0x7fffa4f2f67c }
    /* +0x7bef9f */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM0 }
    /* +0x7befa4 */ __asm { JMP 0x7fffa4f2efe0 }
    /* +0x7befa6 */ __asm { MOVDQA xmmword ptr [RBP + 0x80],XMM0 }
    /* +0x7befae */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM0 }
    /* +0x7befb3 */ __asm { MOV R8,0x7fffffffffffffff }
    /* +0x7befbd */ __asm { CMP R14,R8 }
    /* +0x7befc0 */ __asm { JNC 0x7fffa4f3151b }
    /* +0x7befc6 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x7befcd */ __asm { NOP }
    /* +0x7befcf */ __asm { MOV R8,0x0 }
    /* +0x7befd6 */ __asm { CMP R14,0x7 }
    /* +0x7befda */ __asm { JA 0x7fffa4f2f148 }
    /* +0x7befe0 */ __asm { MOV R10,R14 }
    /* +0x7befe3 */ __asm { SHR R10,0x1 }
    /* +0x7befe6 */ __asm { MOV EDX,0x2cab54e4 }
    /* +0x7befeb */ __asm { ADD EDX,EDI }
    /* +0x7befed */ __asm { LEA R8,[R14 + R14*0x1] }
    /* +0x7beff1 */ __asm { MOV qword ptr [RBP + 0x80],R14 }
    /* +0x7beff8 */ __asm { XOR EDX,0xb17fff31 }
    /* +0x7beffe */ __asm { ROL EDX,0x1a }
    /* +0x7bf001 */ __asm { CMP RDX,0x51e37dc8 }
    /* +0x7bf008 */ __asm { CMOVZ R8,R10 }
    /* +0x7bf00c */ __asm { MOV qword ptr [RBP + 0x88],0x7 }
    /* +0x7bf017 */ __asm { LEA RCX,[RBP + 0x70] }
    /* +0x7bf01b */ __asm { MOV RDX,R15 }
    /* +0x7bf01e */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7bf023 */ __asm { MOV word ptr [RBP + R14*0x2 + 0x70],0x0 }
    /* +0x7bf02b */ __asm { MOV RAX,RDI }
    /* +0x7bf02e */ __asm { MOV RDI,qword ptr [RBP + 0x80] }
    /* +0x7bf035 */ __asm { MOV R12,qword ptr [RBP + 0x88] }
    /* +0x7bf03c */ __asm { JMP 0x7fffa4f2f21b }
    /* +0x7bf041 */ __asm { MOVZX R10D,word ptr [R15 + 0x2] }
    /* +0x7bf046 */ __asm { IMUL EDX,R10D,0x629f }
    /* +0x7bf04d */ __asm { ROL DX,0x6 }
    /* +0x7bf051 */ __asm { ADD EDX,0x51c1 }
    /* +0x7bf057 */ __asm { MOVZX EDX,DX }
    /* +0x7bf05a */ __asm { CMP EDX,0x9add }
    /* +0x7bf060 */ __asm { JNZ 0x7fffa4f2f965 }
    /* +0x7bf066 */ __asm { MOVZX R12D,SI }
    /* +0x7bf06a */ __asm { MOVZX EBX,R10W }
    /* +0x7bf06e */ __asm { CMP R14,0x2 }
    /* +0x7bf072 */ __asm { MOV qword ptr [RBP + 0x20],R12 }
    /* +0x7bf076 */ __asm { MOV qword ptr [RBP + 0xc0],RBX }
    /* +0x7bf07d */ __asm { MOV qword ptr [RBP + 0xd0],RSI }
    /* +0x7bf084 */ __asm { MOV dword ptr [RBP + 0x60],R10D }
    /* +0x7bf088 */ __asm { JBE 0x7fffa4f2fa68 }
    /* +0x7bf08e */ __asm { MOV R9D,EDI }
    /* +0x7bf091 */ __asm { OR R9D,0x1 }
    /* +0x7bf095 */ __asm { MOVZX EDX,word ptr [R15 + 0x4] }
    /* +0x7bf09a */ __asm { CMP DX,0x3f }
    /* +0x7bf09e */ __asm { JL 0x7fffa4f309c6 }
    /* +0x7bf0a4 */ __asm { JNZ 0x7fffa4f309df }
    /* +0x7bf0aa */ __asm { MOVDQA xmmword ptr [RBP + 0x80],XMM0 }
    /* +0x7bf0b2 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM0 }
    /* +0x7bf0b7 */ __asm { MOV R8,RBX }
    /* +0x7bf0ba */ __asm { OR R8,0x1 }
    /* +0x7bf0be */ __asm { LEA R13,[R14 + -0x3] }
    /* +0x7bf0c2 */ __asm { MOV R11,0x4bc22689a294a4cd }
    /* +0x7bf0cc */ __asm { ADD R11,R12 }
    /* +0x7bf0cf */ __asm { MOV ECX,EDI }
    /* +0x7bf0d1 */ __asm { ROL R11,CL }
    /* +0x7bf0d4 */ __asm { NOT R11 }
    /* +0x7bf0d7 */ __asm { IMUL R11,R8 }
    /* +0x7bf0db */ __asm { MOV R8,0x100000008a7 }
    /* +0x7bf0e5 */ __asm { ADD R8,R11 }
    /* +0x7bf0e8 */ __asm { CMP R13,R8 }
    /* +0x7bf0eb */ __asm { JA 0x7fffa4f31594 }
    /* +0x7bf0f1 */ __asm { MOV dword ptr [RBP + 0x108],R9D }
    /* +0x7bf0f8 */ __asm { LEA RSI,[R15 + 0x6] }
    /* +0x7bf0fc */ __asm { CMP R13,0x7 }
    /* +0x7bf100 */ __asm { JA 0x7fffa4f30bea }
    /* +0x7bf106 */ __asm { MOV qword ptr [RBP + 0x88],0x7 }
    /* +0x7bf111 */ __asm { MOV qword ptr [RBP + 0x80],R13 }
    /* +0x7bf118 */ __asm { ADD R13,R13 }
    /* +0x7bf11b */ __asm { LEA RCX,[RBP + 0x70] }
    /* +0x7bf11f */ __asm { MOV R8,R13 }
    /* +0x7bf122 */ __asm { MOV RDX,RSI }
    /* +0x7bf125 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7bf12a */ __asm { MOV word ptr [RBP + R14*0x2 + 0x6a],0x0 }
    /* +0x7bf132 */ __asm { MOV R13,qword ptr [RBP + 0x80] }
    /* +0x7bf139 */ __asm { MOV R15,RBX }
    /* +0x7bf13c */ __asm { MOV RBX,qword ptr [RBP + 0x88] }
    /* +0x7bf143 */ __asm { JMP 0x7fffa4f30d07 }
    /* +0x7bf148 */ __asm { NOP }
    /* +0x7bf14a */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x7bf151 */ __asm { MOV R8,0x0 }
    /* +0x7bf158 */ __asm { LEA RBX,[R14 + R14*0x1] }
    /* +0x7bf15c */ __asm { LEA R8,[0x7fffa5275adf] }
    /* +0x7bf163 */ __asm { MOV EDX,0xe51ccc27 }
    /* +0x7bf168 */ __asm { MOV R10,R14 }
    /* +0x7bf16b */ __asm { OR R10,0x7 }
    /* +0x7bf16f */ __asm { CMP R10,0xb }
    /* +0x7bf173 */ __asm { MOV R12D,0xa }
    /* +0x7bf179 */ __asm { CMOVNC R12,R10 }
    /* +0x7bf17d */ __asm { MOV R11D,EDI }
    /* +0x7bf180 */ __asm { OR R11D,0x1 }
    /* +0x7bf184 */ __asm { IMUL R11D,EDX }
    /* +0x7bf188 */ __asm { ROL R11D,0x11 }
    /* +0x7bf18c */ __asm { MOVSXD RAX,R11D }
    /* +0x7bf18f */ __asm { MOV EDX,0xa5b38578 }
    /* +0x7bf194 */ __asm { XOR EDX,0x8fc2ade5 }
    /* +0x7bf19a */ __asm { SUB EDX,EDI }
    /* +0x7bf19c */ __asm { MOVSXD R11,EDX }
    /* +0x7bf19f */ __asm { ADD R11,R8 }
    /* +0x7bf1a2 */ __asm { MOV R8,0x7ffffffffffffffe }
    /* +0x7bf1ac */ __asm { CMP R12,R8 }
    /* +0x7bf1af */ __asm { CMOVNC R12,R8 }
    /* +0x7bf1b3 */ __asm { LEA R8,[0x2 + R12*0x2] }
    /* +0x7bf1bb */ __asm { MOV RCX,R8 }
    /* +0x7bf1be */ __asm { SHL RCX,0x3c }
    /* +0x7bf1c2 */ __asm { XOR RCX,R8 }
    /* +0x7bf1c5 */ __asm { SHL R8,0xe }
    /* +0x7bf1c9 */ __asm { MOV R10,0x1865d799980f }
    /* +0x7bf1d3 */ __asm { ADD R10,R8 }
    /* +0x7bf1d6 */ __asm { ADD R10,RCX }
    /* +0x7bf1d9 */ __asm { CALL R11 }
    /* +0x7bf1dc */ __asm { MOV R13,RCX }
    /* +0x7bf1df */ __asm { ROL R13,0x2c }
    /* +0x7bf1e3 */ __asm { MOV R8,R13 }
    /* +0x7bf1e6 */ __asm { SHL R8,0x36 }
    /* +0x7bf1ea */ __asm { SUB R13,R8 }
    /* +0x7bf1ed */ __asm { MOV qword ptr [RBP + 0x88],R12 }
    /* +0x7bf1f4 */ __asm { MOV R8,RBX }
    /* +0x7bf1f7 */ __asm { MOV RCX,R13 }
    /* +0x7bf1fa */ __asm { MOV RDX,R15 }
    /* +0x7bf1fd */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7bf202 */ __asm { MOV word ptr [R13 + R14*0x2],0x0 }
    /* +0x7bf20a */ __asm { MOV qword ptr [RBP + 0x80],R14 }
    /* +0x7bf211 */ __asm { MOV qword ptr [RBP + 0x70],R13 }
    /* +0x7bf215 */ __asm { MOV RAX,RDI }
    /* +0x7bf218 */ __asm { MOV RDI,R14 }
    /* +0x7bf21b */ __asm { MOV R8,0x1f6ab4830d2ce4bf }
    /* +0x7bf225 */ __asm { MOV EDX,0xc58cd415 }
    /* +0x7bf22a */ __asm { IMUL EDX,EDX,-0x6cfff543 }
    /* +0x7bf230 */ __asm { MOV RBX,R12 }
    /* +0x7bf233 */ __asm { SUB RBX,RDI }
    /* +0x7bf236 */ __asm { MOV R11,0x1f36b4bc0d13e4e3 }
    /* +0x7bf240 */ __asm { MOV RCX,-0x7c9a946e51875990 }
    /* +0x7bf24a */ __asm { MOV qword ptr [RBP],R8 }
    /* +0x7bf24e */ __asm { XOR EDX,0xbdcc1359 }
    /* +0x7bf254 */ __asm { LEA R8,[0x7fffa518234c] }
    /* +0x7bf25b */ __asm { MOV qword ptr [RBP + 0x8],RCX }
    /* +0x7bf25f */ __asm { MOV qword ptr [RBP + 0x40],R11 }
    /* +0x7bf263 */ __asm { LEA R11,[RBP + 0x40] }
    /* +0x7bf267 */ __asm { MOV qword ptr [RBP + 0x48],RCX }
    /* +0x7bf26b */ __asm { MOVDQA XMM0,xmmword ptr [R11] }
    /* +0x7bf270 */ __asm { PXOR XMM0,xmmword ptr [RBP] }
    /* +0x7bf275 */ __asm { ADD EDX,EAX }
    /* +0x7bf277 */ __asm { MOVSXD R11,EDX }
    /* +0x7bf27a */ __asm { ADD R11,R8 }
    /* +0x7bf27d */ __asm { MOVDQA xmmword ptr [RBP],XMM0 }
    /* +0x7bf282 */ __asm { MOV R14,RBP }
    /* +0x7bf285 */ __asm { MOV RCX,R14 }
    /* +0x7bf288 */ __asm { CALL R11 }
    /* +0x7bf28b */ __asm { MOV R13,RAX }
    /* +0x7bf28e */ __asm { CMP RAX,RBX }
    /* +0x7bf291 */ __asm { JA 0x7fffa4f2f2b1 }
    /* +0x7bf293 */ __asm { LEA R8,[R13*0x2] }
    /* +0x7bf29b */ __asm { ADD R8,RBP }
    /* +0x7bf29e */ __asm { CMP R12,0x8 }
    /* +0x7bf2a2 */ __asm { JC 0x7fffa4f2f42d }
    /* +0x7bf2a8 */ __asm { MOV RBX,qword ptr [RBP + 0x70] }
    /* +0x7bf2ac */ __asm { JMP 0x7fffa4f2f431 }
    /* +0x7bf2b1 */ __asm { MOV RSI,0x7ffffffffffffffe }
    /* +0x7bf2bb */ __asm { MOV R8,RSI }
    /* +0x7bf2be */ __asm { SUB R8,RDI }
    /* +0x7bf2c1 */ __asm { CMP R8,R13 }
    /* +0x7bf2c4 */ __asm { JC 0x7fffa4f314d5 }
    /* +0x7bf2ca */ __asm { LEA RBX,[RDI + R13*0x1] }
    /* +0x7bf2ce */ __asm { MOV R8,RBX }
    /* +0x7bf2d1 */ __asm { OR R8,0x7 }
    /* +0x7bf2d5 */ __asm { CMP R8,RSI }
    /* +0x7bf2d8 */ __asm { JA 0x7fffa4f2f307 }
    /* +0x7bf2da */ __asm { MOV R11,R12 }
    /* +0x7bf2dd */ __asm { SHR R11,0x1 }
    /* +0x7bf2e0 */ __asm { MOV R10,RSI }
    /* +0x7bf2e3 */ __asm { SUB R10,R11 }
    /* +0x7bf2e6 */ __asm { CMP R12,R10 }
    /* +0x7bf2e9 */ __asm { JA 0x7fffa4f2f307 }
    /* +0x7bf2eb */ __asm { ADD R11,R12 }
    /* +0x7bf2ee */ __asm { CMP R8,R11 }
    /* +0x7bf2f1 */ __asm { CMOVA R11,R8 }
    /* +0x7bf2f5 */ __asm { MOV R8,0x0 }
    /* +0x7bf2fc */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x7bf303 */ __asm { NOP }
    /* +0x7bf304 */ __asm { MOV RSI,R11 }
    /* +0x7bf307 */ __asm { MOV EDX,0x6d17066e }
    /* +0x7bf30c */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x7bf313 */ __asm { MOV R8,0x0 }
    /* +0x7bf31a */ __asm { NOP }
    /* +0x7bf31c */ __asm { MOV R15,qword ptr [RBP + 0xd8] }
    /* +0x7bf323 */ __asm { ADD EDX,R15D }
    /* +0x7bf326 */ __asm { ROL EDX,0x19 }
    /* +0x7bf329 */ __asm { XOR EDX,0xb3599eb0 }
    /* +0x7bf32f */ __asm { MOVSXD RAX,EDX }
    /* +0x7bf332 */ __asm { LEA R8,[0x7fffa52706e8] }
    /* +0x7bf339 */ __asm { MOV DX,0x3a6f }
    /* +0x7bf33d */ __asm { IMUL EDX,EDX,-0x3753 }
    /* +0x7bf343 */ __asm { NOT EDX }
    /* +0x7bf345 */ __asm { ADD EDX,R15D }
    /* +0x7bf348 */ __asm { MOVSX R11,DX }
    /* +0x7bf34c */ __asm { ADD R11,R8 }
    /* +0x7bf34f */ __asm { LEA R8,[0x2 + RSI*0x2] }
    /* +0x7bf357 */ __asm { MOV RCX,R8 }
    /* +0x7bf35a */ __asm { SHL RCX,0x3c }
    /* +0x7bf35e */ __asm { XOR RCX,R8 }
    /* +0x7bf361 */ __asm { SHL R8,0xe }
    /* +0x7bf365 */ __asm { MOV R10,0x1865d799980f }
    /* +0x7bf36f */ __asm { ADD R10,R8 }
    /* +0x7bf372 */ __asm { ADD R10,RCX }
    /* +0x7bf375 */ __asm { CALL R11 }
    /* +0x7bf378 */ __asm { MOV R14,RCX }
    /* +0x7bf37b */ __asm { ROL R14,0x2c }
    /* +0x7bf37f */ __asm { MOV R8,R14 }
    /* +0x7bf382 */ __asm { SHL R8,0x36 }
    /* +0x7bf386 */ __asm { SUB R14,R8 }
    /* +0x7bf389 */ __asm { MOV qword ptr [RBP + 0x88],RSI }
    /* +0x7bf390 */ __asm { MOV qword ptr [RBP + 0x80],RBX }
    /* +0x7bf397 */ __asm { CMP R12,0x8 }
    /* +0x7bf39b */ __asm { JC 0x7fffa4f2f4ab }
    /* +0x7bf3a1 */ __asm { LEA R8,[R13*0x2] }
    /* +0x7bf3a9 */ __asm { MOV ESI,0x3d822174 }
    /* +0x7bf3ae */ __asm { ADD ESI,R15D }
    /* +0x7bf3b1 */ __asm { XOR ESI,0x530b1938 }
    /* +0x7bf3b7 */ __asm { ADD ESI,0x844added }
    /* +0x7bf3bd */ __asm { LEA R11,[0x2 + RDI*0x2] }
    /* +0x7bf3c5 */ __asm { MOV qword ptr [RBP + 0x20],R11 }
    /* +0x7bf3c9 */ __asm { MOV R15,qword ptr [RBP + 0x70] }
    /* +0x7bf3cd */ __asm { MOV RDI,R15 }
    /* +0x7bf3d0 */ __asm { MOV RBX,RDI }
    /* +0x7bf3d3 */ __asm { SHR RBX,0x3d }
    /* +0x7bf3d7 */ __asm { MOV RDX,RBP }
    /* +0x7bf3da */ __asm { MOV RCX,R14 }
    /* +0x7bf3dd */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7bf3e2 */ __asm { MOV DX,0x1fff }
    /* +0x7bf3e6 */ __asm { IMUL R12D,EDX,-0xebb }
    /* +0x7bf3ed */ __asm { LEA RCX,[R14 + R13*0x2] }
    /* +0x7bf3f1 */ __asm { MOV R8,qword ptr [RBP + 0x20] }
    /* +0x7bf3f5 */ __asm { MOV RDX,R15 }
    /* +0x7bf3f8 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7bf3fd */ __asm { XOR RBX,RDI }
    /* +0x7bf400 */ __asm { MOV RDI,qword ptr [RBP + 0xd8] }
    /* +0x7bf407 */ __asm { SUB R12D,EDI }
    /* +0x7bf40a */ __asm { ADD R12D,0xdf }
    /* +0x7bf411 */ __asm { MOVSX R8,R12W }
    /* +0x7bf415 */ __asm { LEA R10,[0x7fffa568a562] }
    /* +0x7bf41c */ __asm { ADD R10,R8 }
    /* +0x7bf41f */ __asm { MOV R11,RSI }
    /* +0x7bf422 */ __asm { MOV R8,RBX }
    /* +0x7bf425 */ __asm { CALL R10 }
    /* +0x7bf428 */ __asm { JMP 0x7fffa4f2f4d7 }
    /* +0x7bf42d */ __asm { LEA RBX,[RBP + 0x70] }
    /* +0x7bf431 */ __asm { CMP R8,RBX }
    /* +0x7bf434 */ __asm { SETBE R10B }
    /* +0x7bf438 */ __asm { LEA R11,[RDI + R13*0x1] }
    /* +0x7bf43c */ __asm { MOV qword ptr [RBP + 0x80],R11 }
    /* +0x7bf443 */ __asm { LEA R11,[RBX + RDI*0x2] }
    /* +0x7bf447 */ __asm { CMP R14,R11 }
    /* +0x7bf44a */ __asm { SETA R9B }
    /* +0x7bf44e */ __asm { OR R9B,R10B }
    /* +0x7bf451 */ __asm { MOV R10,R13 }
    /* +0x7bf454 */ __asm { JNZ 0x7fffa4f2f4e0 }
    /* +0x7bf45a */ __asm { MOV R11D,0xf3ec6894 }
    /* +0x7bf460 */ __asm { MOV RCX,0x0 }
    /* +0x7bf467 */ __asm { NOP }
    /* +0x7bf468 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x7bf46f */ __asm { MOV RAX,qword ptr [RBP + 0xd8] }
    /* +0x7bf476 */ __asm { ADD R11D,EAX }
    /* +0x7bf479 */ __asm { XOR EDX,EDX }
    /* +0x7bf47b */ __asm { XOR R9D,R9D }
    /* +0x7bf47e */ __asm { MOV R10,RBX }
    /* +0x7bf481 */ __asm { SUB R10,R14 }
    /* +0x7bf484 */ __asm { SETA DL }
    /* +0x7bf487 */ __asm { SETG R9B }
    /* +0x7bf48b */ __asm { MOV ECX,0x688677f0 }
    /* +0x7bf490 */ __asm { ADD ECX,EAX }
    /* +0x7bf492 */ __asm { NOT ECX }
    /* +0x7bf494 */ __asm { NOT R11D }
    /* +0x7bf497 */ __asm { MOVSXD R11,R11D }
    /* +0x7bf49a */ __asm { CMP RCX,R11 }
    /* +0x7bf49d */ __asm { CMOVA EDX,R9D }
    /* +0x7bf4a1 */ __asm { CMP DL,0x1 }
    /* +0x7bf4a4 */ __asm { JNZ 0x7fffa4f2f4dd }
    /* +0x7bf4a6 */ __asm { SAR R10,0x1 }
    /* +0x7bf4a9 */ __asm { JMP 0x7fffa4f2f4e0 }
    /* +0x7bf4ab */ __asm { LEA RBX,[R14 + R13*0x2] }
    /* +0x7bf4af */ __asm { ADD R13,R13 }
    /* +0x7bf4b2 */ __asm { MOV RDX,RBP }
    /* +0x7bf4b5 */ __asm { MOV R8,R13 }
    /* +0x7bf4b8 */ __asm { MOV RCX,R14 }
    /* +0x7bf4bb */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7bf4c0 */ __asm { LEA R8,[0x2 + RDI*0x2] }
    /* +0x7bf4c8 */ __asm { LEA RDX,[RBP + 0x70] }
    /* +0x7bf4cc */ __asm { MOV RCX,RBX }
    /* +0x7bf4cf */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7bf4d4 */ __asm { MOV RDI,R15 }
    /* +0x7bf4d7 */ __asm { MOV qword ptr [RBP + 0x70],R14 }
    /* +0x7bf4db */ __asm { JMP 0x7fffa4f2f52e }
    /* +0x7bf4dd */ __asm { XOR R10D,R10D }
    /* +0x7bf4e0 */ __asm { LEA R14,[R8 + R10*0x2] }
    /* +0x7bf4e4 */ __asm { LEA R12,[R10 + R10*0x1] }
    /* +0x7bf4e8 */ __asm { LEA R8,[0x2 + RDI*0x2] }
    /* +0x7bf4f0 */ __asm { LEA RCX,[RBX + R13*0x2] }
    /* +0x7bf4f4 */ __asm { SUB R13,R10 }
    /* +0x7bf4f7 */ __asm { ADD R13,R13 }
    /* +0x7bf4fa */ __asm { LEA RDI,[RBX + R10*0x2] }
    /* +0x7bf4fe */ __asm { MOV RDX,RBX }
    /* +0x7bf501 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7bf506 */ __asm { MOV RDX,RBP }
    /* +0x7bf509 */ __asm { MOV R8,R12 }
    /* +0x7bf50c */ __asm { MOV RCX,RBX }
    /* +0x7bf50f */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7bf514 */ __asm { MOV R8,R13 }
    /* +0x7bf517 */ __asm { MOV RCX,RDI }
    /* +0x7bf51a */ __asm { MOV RDX,R14 }
    /* +0x7bf51d */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7bf522 */ __asm { MOVZX R14D,word ptr [RBP + 0x70] }
    /* +0x7bf527 */ __asm { MOV RDI,qword ptr [RBP + 0xd8] }
    /* +0x7bf52e */ __asm { MOV RBX,qword ptr [RBP + 0x88] }
    /* +0x7bf535 */ __asm { CMP qword ptr [RBP + 0xf8],0x8 }
    /* +0x7bf53d */ __asm { MOV R13,qword ptr [RBP + 0x80] }
    /* +0x7bf544 */ __asm { MOV qword ptr [RBP + 0x80],0x0 }
    /* +0x7bf54f */ __asm { MOV qword ptr [RBP + 0x88],0x7 }
    /* +0x7bf55a */ __asm { MOV word ptr [RBP + 0x70],0x0 }
    /* +0x7bf560 */ __asm { MOV R8,qword ptr [RBP + 0x72] }
    /* +0x7bf564 */ __asm { MOV R11,qword ptr [RBP + 0x78] }
    /* +0x7bf568 */ __asm { MOV qword ptr [RBP + 0x30],R8 }
    /* +0x7bf56c */ __asm { MOV qword ptr [RBP + 0x36],R11 }
    /* +0x7bf570 */ __asm { JNC 0x7fffa4f2f5a6 }
    /* +0x7bf572 */ __asm { LEA R8,[RBP + 0x72] }
    /* +0x7bf576 */ __asm { MOV qword ptr [RBP + 0xf0],R13 }
    /* +0x7bf57d */ __asm { MOV R11,qword ptr [R8] }
    /* +0x7bf580 */ __asm { MOV R8,qword ptr [R8 + 0x6] }
    /* +0x7bf584 */ __asm { MOV qword ptr [RBP + 0xe2],R11 }
    /* +0x7bf58b */ __asm { MOV qword ptr [RBP + 0xe8],R8 }
    /* +0x7bf592 */ __asm { MOV word ptr [RBP + 0xe0],R14W }
    /* +0x7bf59a */ __asm { MOV qword ptr [RBP + 0xf8],RBX }
    /* +0x7bf5a1 */ __asm { JMP 0x7fffa4f2f675 }
    /* +0x7bf5a6 */ __asm { MOV EDX,0x96c48cd6 }
    /* +0x7bf5ab */ __asm { LEA R8,[0x7fffa568c214] }
    /* +0x7bf5b2 */ __asm { IMUL R11D,EDX,0x75d76f27 }
    /* +0x7bf5b9 */ __asm { NOT R11D }
    /* +0x7bf5bc */ __asm { MOV EDX,EDI }
    /* +0x7bf5be */ __asm { OR EDX,0x1 }
    /* +0x7bf5c1 */ __asm { MOV R10,qword ptr [RBP + 0xe0] }
    /* +0x7bf5c8 */ __asm { MOV CX,0x42c4 }
    /* +0x7bf5cc */ __asm { ADD ECX,0xffff8fc8 }
    /* +0x7bf5d2 */ __asm { IMUL ECX,EDX }
    /* +0x7bf5d5 */ __asm { MOVSX RCX,CX }
    /* +0x7bf5d9 */ __asm { ADD RCX,R8 }
    /* +0x7bf5dc */ __asm { MOV R8,R10 }
    /* +0x7bf5df */ __asm { SHR R8,0x3d }
    /* +0x7bf5e3 */ __asm { XOR R8,R10 }
    /* +0x7bf5e6 */ __asm { CALL RCX }
    /* +0x7bf5e8 */ __asm { MOV qword ptr [RBP + 0xf0],R13 }
    /* +0x7bf5ef */ __asm { CMP qword ptr [RBP + 0x88],0x8 }
    /* +0x7bf5f7 */ __asm { MOV word ptr [RBP + 0xe0],R14W }
    /* +0x7bf5ff */ __asm { MOV qword ptr [RBP + 0xf8],RBX }
    /* +0x7bf606 */ __asm { MOV R8,qword ptr [RBP + 0x30] }
    /* +0x7bf60a */ __asm { MOV R11,qword ptr [RBP + 0x36] }
    /* +0x7bf60e */ __asm { MOV qword ptr [RBP + 0xe2],R8 }
    /* +0x7bf615 */ __asm { MOV qword ptr [RBP + 0xe8],R11 }
    /* +0x7bf61c */ __asm { JC 0x7fffa4f2f675 }
}


// ============================================================================
// Function : Unwind@7fffa4f35a70  |  RVA: 0x7c5a70  |  Size: 302 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f35a70(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint64_t uVar2;
  uint32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  int iVar6;
  
  uVar3 = (*(uint32_t *)(param_2 + 0x140) ^ 0xe6bdce78) + 0x1942316b;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xa0) & 0x1f;
  if ((uint64_t)~(uVar3 << bVar1 | uVar3 >> 0x20 - bVar1) < *(uint64_t *)(param_2 + 0x108)) {
    uVar5 = *(uint64_t *)(param_2 + 0xf0);
    iVar6 = (int)*(uint64_t *)(param_2 + 0x140);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x158) & 0x1f;
    uVar3 = (uint32_t)*(uint64_t *)(param_2 + 0xa0);
    uVar2 = uVar5 >> 0x3d ^ uVar5;
    iVar4 = ((0xd83fa7c1U - iVar6 ^ 0xb7dc0c96) + uVar3) * *(int *)(param_2 + 0x188);
    uVar5 = uVar5 - (uVar5 >> 0x3d);
    if ((uint64_t)
        (~(iVar6 + 0x8d2242a5U ^ uVar3) * 0x1c8f17e7 - (int)*(uint64_t *)(param_2 + 0x158)) <
        (uint64_t)(int64_t)iVar4) {
      uVar5 = uVar2;
    }
    (*(code *)((int64_t)
               (int)((iVar6 - uVar3) + (0xf449bfffU >> bVar1 | -0xbb64001 << 0x20 - bVar1)) +
              0x7fffa5693795))(uVar2,iVar4,uVar5);
  }
  *(uint64_t *)(param_2 + 0x108) = 7;
  *(uint16_t *)(param_2 + 0xf0) = 0;
  *(uint64_t *)(param_2 + 0x100) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f35ba0  |  RVA: 0x7c5ba0  |  Size: 245 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f35ba0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  code *pcVar3;
  uint32_t uVar4;
  int iVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  
  uVar7 = (uint32_t)*(uint64_t *)(param_2 + 0x158);
  uVar6 = (uint32_t)*(uint64_t *)(param_2 + 0x140);
  uVar4 = uVar7 + 0x5c47cd3d ^ uVar6;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xa0);
  bVar1 = bVar2 & 0x1f;
  uVar7 = (0x1669322b - uVar6 ^ uVar7) + 0x90b76ed9;
  bVar2 = bVar2 & 0x1f;
  if (((uint64_t)
       ((int64_t)(int)(uVar7 >> bVar2 | uVar7 << 0x20 - bVar2) <=
       (int64_t)(uint64_t)(uVar4 >> bVar1 | uVar4 << 0x20 - bVar1)) | 6) <
      *(uint64_t *)(param_2 + 0xd8)) {
    iVar5 = ((int)*(uint64_t *)(param_2 + 0xa0) + -0x558e6fc4) -
            (int)*(uint64_t *)(param_2 + 0x158);
    uVar7 = iVar5 * 2 | (uint32_t)(iVar5 < 0);
    pcVar3 = (code *)((int64_t)(int)uVar7 + 0x7fffa5690c98);
    (*pcVar3)(pcVar3,uVar7,*(uint64_t *)(param_2 + 0xc0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xc0));
  }
  *(uint64_t *)(param_2 + 0xd0) = 0;
  *(uint16_t *)(param_2 + 0xc0) = 0;
  *(uint64_t *)(param_2 + 0xd8) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f35ca0  |  RVA: 0x7c5ca0  |  Size: 184 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f35ca0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint32_t uVar2;
  
  uVar2 = ~(*(int *)(param_2 + 0x158) + 0xd58def33U);
  uVar2 = uVar2 << 0x15 | uVar2 >> 0xb;
  if ((uint64_t)uVar2 < *(uint64_t *)(param_2 + 0x108)) {
    uVar2 = (int)CONCAT62((uint6)(uint16_t)(uVar2 >> 0x10),0x990) +
            (int)*(uint64_t *)(param_2 + 0x158) ^ 0x1b81;
    pcVar1 = (code *)((int64_t)(short)uVar2 + 0x7fffa5688253);
    (*pcVar1)(pcVar1,uVar2,*(uint64_t *)(param_2 + 0xf0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xf0));
  }
  *(uint64_t *)(param_2 + 0x108) = 7;
  *(uint64_t *)(param_2 + 0x100) = 0;
  *(uint16_t *)(param_2 + 0xf0) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f35d60  |  RVA: 0x7c5d60  |  Size: 145 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f35d60(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x178)) {
    pcVar1 = (code *)((int64_t)
                      (short)(((short)*(uint64_t *)(param_2 + 0x158) + -0x3aa7) * -0x1663) +
                     0x7fffa568d27f);
    (*pcVar1)(pcVar1,0xb9065ab4,
              *(uint64_t *)(param_2 + 0x160) >> 0x3d ^ *(uint64_t *)(param_2 + 0x160));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4f35e00  |  RVA: 0x7c5e00  |  Size: 39642 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4f35e00(void) {
    /* +0x7c5e00 */ __asm { PUSH RBP }
    /* +0x7c5e01 */ __asm { PUSH RBX }
    /* +0x7c5e02 */ __asm { PUSH R12 }
    /* +0x7c5e04 */ __asm { PUSH R15 }
    /* +0x7c5e06 */ __asm { PUSH RDI }
    /* +0x7c5e07 */ __asm { PUSH RSI }
    /* +0x7c5e08 */ __asm { PUSH R13 }
    /* +0x7c5e0a */ __asm { PUSH R14 }
    /* +0x7c5e0c */ __asm { SUB RSP,0x198 }
    /* +0x7c5e13 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x7c5e1b */ __asm { MOVDQA xmmword ptr [RBP + 0x100],XMM9 }
    /* +0x7c5e24 */ __asm { MOV qword ptr [RBP + 0xf8],-0x2 }
    /* +0x7c5e2f */ __asm { MOV R14,R10 }
    /* +0x7c5e32 */ __asm { MOV RDX,R11 }
    /* +0x7c5e35 */ __asm { ROL RDX,0x1e }
    /* +0x7c5e39 */ __asm { MOV RCX,R11 }
    /* +0x7c5e3c */ __asm { ROL RCX,0x24 }
    /* +0x7c5e40 */ __asm { MOV R9D,0xc699942b }
    /* +0x7c5e46 */ __asm { ROL R11,0x3a }
    /* +0x7c5e4a */ __asm { XOR R11,RCX }
    /* +0x7c5e4d */ __asm { XOR R11,RDX }
    /* +0x7c5e50 */ __asm { MOV RDX,R11 }
    /* +0x7c5e53 */ __asm { ROL RDX,0xc }
    /* +0x7c5e57 */ __asm { XOR RDX,R11 }
    /* +0x7c5e5a */ __asm { ROL R11,0x38 }
    /* +0x7c5e5e */ __asm { MOVQ XMM2,R11 }
    /* +0x7c5e63 */ __asm { MOVQ XMM5,RDX }
    /* +0x7c5e68 */ __asm { XOR R9D,0x7ffe0328 }
    /* +0x7c5e6f */ __asm { ROL R9D,0xe }
    /* +0x7c5e73 */ __asm { SUB R9D,R14D }
    /* +0x7c5e76 */ __asm { MOVDQA XMM4,XMM2 }
    /* +0x7c5e7a */ __asm { MOV RDX,RAX }
    /* +0x7c5e7d */ __asm { ROL RDX,0x1 }
    /* +0x7c5e80 */ __asm { PADDQ XMM4,XMM5 }
    /* +0x7c5e84 */ __asm { MOV RCX,RAX }
    /* +0x7c5e87 */ __asm { ROL RCX,0x11 }
    /* +0x7c5e8b */ __asm { ROL RAX,0x29 }
    /* +0x7c5e8f */ __asm { XOR RAX,RCX }
    /* +0x7c5e92 */ __asm { XOR RAX,RDX }
    /* +0x7c5e95 */ __asm { MOV RCX,RAX }
    /* +0x7c5e98 */ __asm { ROL RCX,0x10 }
    /* +0x7c5e9c */ __asm { MOV R10,RAX }
    /* +0x7c5e9f */ __asm { ROL R10,0x20 }
    /* +0x7c5ea3 */ __asm { XOR R10,RCX }
    /* +0x7c5ea6 */ __asm { XOR R10,RAX }
    /* +0x7c5ea9 */ __asm { ROL R10,0x20 }
    /* +0x7c5ead */ __asm { MOV ECX,0x6041734d }
    /* +0x7c5eb2 */ __asm { XOR ECX,R14D }
    /* +0x7c5eb5 */ __asm { ROL ECX,0x8 }
    /* +0x7c5eb8 */ __asm { MOVSXD RCX,ECX }
    /* +0x7c5ebb */ __asm { CMP R9,RCX }
    /* +0x7c5ebe */ __asm { PXOR XMM2,XMM5 }
    /* +0x7c5ec2 */ __asm { MOVQ RCX,XMM2 }
    /* +0x7c5ec7 */ __asm { MOVQ R11,XMM4 }
    /* +0x7c5ecc */ __asm { CMOVGE R11,RCX }
    /* +0x7c5ed0 */ __asm { MOV RCX,R11 }
    /* +0x7c5ed3 */ __asm { ROL RCX,0x18 }
    /* +0x7c5ed7 */ __asm { MOV R8,R11 }
    /* +0x7c5eda */ __asm { ROL R8,0x30 }
    /* +0x7c5ede */ __asm { XOR R8,RCX }
    /* +0x7c5ee1 */ __asm { XOR R8,R11 }
    /* +0x7c5ee4 */ __asm { MOV RCX,R8 }
    /* +0x7c5ee7 */ __asm { ROL RCX,0x20 }
    /* +0x7c5eeb */ __asm { MOV R11,R8 }
    /* +0x7c5eee */ __asm { ROL R11,0x30 }
    /* +0x7c5ef2 */ __asm { XOR R11,RCX }
    /* +0x7c5ef5 */ __asm { XOR R11,R8 }
    /* +0x7c5ef8 */ __asm { ROL R11,0x20 }
    /* +0x7c5efc */ __asm { PXOR XMM2,XMM2 }
    /* +0x7c5f00 */ __asm { MOVDQU xmmword ptr [R11],XMM2 }
    /* +0x7c5f05 */ __asm { MOV dword ptr [RBP + 0x30],0xf1cf0581 }
    /* +0x7c5f0c */ __asm { MOV ECX,dword ptr [RBP + 0x30] }
    /* +0x7c5f0f */ __asm { MOV RDX,qword ptr [R10] }
    /* +0x7c5f12 */ __asm { MOV R15,qword ptr [R10 + 0x8] }
    /* +0x7c5f16 */ __asm { MOV RCX,qword ptr [RBP + 0x158] }
    /* +0x7c5f1d */ __asm { MOV R8,0x47be8e06492041bb }
    /* +0x7c5f27 */ __asm { MOV qword ptr [RBP + 0x28],RCX }
    /* +0x7c5f2b */ __asm { CMP RCX,R8 }
    /* +0x7c5f2e */ __asm { JZ 0x7fffa4f38726 }
    /* +0x7c5f34 */ __asm { MOV CX,0x674c }
    /* +0x7c5f38 */ __asm { MOVDQA xmmword ptr [RBP + 0xa0],XMM2 }
    /* +0x7c5f40 */ __asm { MOV qword ptr [RBP + 0xb0],0x0 }
    /* +0x7c5f4b */ __asm { MOV qword ptr [RBP + 0xb8],0x7 }
    /* +0x7c5f56 */ __asm { MOV ESI,R14D }
    /* +0x7c5f59 */ __asm { OR ESI,0x1 }
    /* +0x7c5f5c */ __asm { IMUL ECX,ESI }
    /* +0x7c5f5f */ __asm { ADD ECX,0xffffd85c }
    /* +0x7c5f65 */ __asm { MOVZX R9D,CX }
    /* +0x7c5f69 */ __asm { MOV R8,qword ptr GS:[R9] }
    /* +0x7c5f6d */ __asm { MOV RCX,-0x6488b36ebb28873d }
    /* +0x7c5f77 */ __asm { CMP qword ptr [R8 + 0x60],RCX }
    /* +0x7c5f7b */ __asm { NOP }
    /* +0x7c5f7c */ __asm { NOP }
    /* +0x7c5f7d */ __asm { NOP }
    /* +0x7c5f7e */ __asm { NOP }
    /* +0x7c5f7f */ __asm { NOP }
    /* +0x7c5f80 */ __asm { TEST R15,R15 }
    /* +0x7c5f83 */ __asm { MOV qword ptr [RBP + 0xf0],RSI }
    /* +0x7c5f8a */ __asm { MOV qword ptr [RBP + -0x18],R15 }
    /* +0x7c5f8e */ __asm { MOV qword ptr [RBP + 0xc8],RDX }
    /* +0x7c5f95 */ __asm { MOV qword ptr [RBP],R11 }
    /* +0x7c5f99 */ __asm { JZ 0x7fffa4f360ae }
    /* +0x7c5f9f */ __asm { CMP word ptr [RDX],0x5c }
    /* +0x7c5fa3 */ __asm { JZ 0x7fffa4f36300 }
    /* +0x7c5fa9 */ __asm { MOV RCX,-0x5ab7af2ca2b1bb05 }
    /* +0x7c5fb3 */ __asm { XOR RCX,0x58f32449 }
    /* +0x7c5fba */ __asm { MOV R9,R14 }
    /* +0x7c5fbd */ __asm { OR R9,0x1 }
    /* +0x7c5fc1 */ __asm { IMUL R9,RCX }
    /* +0x7c5fc5 */ __asm { MOVDQA xmmword ptr [RBP + 0x40],XMM2 }
    /* +0x7c5fca */ __asm { MOVDQA xmmword ptr [RBP + 0x30],XMM2 }
    /* +0x7c5fcf */ __asm { CMP R15,R9 }
    /* +0x7c5fd2 */ __asm { JA 0x7fffa4f3874f }
    /* +0x7c5fd8 */ __asm { CMP R15,0x7 }
    /* +0x7c5fdc */ __asm { JBE 0x7fffa4f360b3 }
    /* +0x7c5fe2 */ __asm { LEA R13,[R15 + R15*0x1] }
    /* +0x7c5fe6 */ __asm { MOV RAX,R15 }
    /* +0x7c5fe9 */ __asm { OR RAX,0x7 }
    /* +0x7c5fed */ __asm { CMP RAX,0xb }
    /* +0x7c5ff1 */ __asm { MOV EBX,0xa }
    /* +0x7c5ff6 */ __asm { CMOVNC RBX,RAX }
    /* +0x7c5ffa */ __asm { MOV RCX,0x7ffffffffffffffe }
    /* +0x7c6004 */ __asm { CMP RBX,RCX }
    /* +0x7c6007 */ __asm { CMOVNC RBX,RCX }
    /* +0x7c600b */ __asm { MOVD XMM2,dword ptr [RBP + 0xf0] }
    /* +0x7c6013 */ __asm { LEA RCX,[0x2 + RBX*0x2] }
    /* +0x7c601b */ __asm { MOV RDI,RCX }
    /* +0x7c601e */ __asm { SHL RDI,0x3c }
    /* +0x7c6022 */ __asm { XOR RDI,RCX }
    /* +0x7c6025 */ __asm { MOV R9W,0x33ae }
    /* +0x7c602a */ __asm { LEA R11,[0x7fffa5270756] }
    /* +0x7c6031 */ __asm { MOV R8D,0xe42e86f8 }
    /* +0x7c6037 */ __asm { XOR R8D,0x225809f6 }
    /* +0x7c603e */ __asm { MOVSXD RAX,R8D }
    /* +0x7c6041 */ __asm { MOVD XMM5,R9D }
    /* +0x7c6046 */ __asm { PMULLW XMM5,XMM2 }
    /* +0x7c604a */ __asm { MOVD R9D,XMM5 }
    /* +0x7c604f */ __asm { ADD R9D,0x4eb8 }
    /* +0x7c6056 */ __asm { MOVSX R8,R9W }
    /* +0x7c605a */ __asm { ADD R8,R11 }
    /* +0x7c605d */ __asm { SHL RCX,0xe }
    /* +0x7c6061 */ __asm { MOV R12,RDX }
    /* +0x7c6064 */ __asm { MOV R10,0x1865d799980f }
    /* +0x7c606e */ __asm { ADD R10,RCX }
    /* +0x7c6071 */ __asm { ADD R10,RDI }
    /* +0x7c6074 */ __asm { CALL R8 }
    /* +0x7c6077 */ __asm { MOV RDI,R15 }
    /* +0x7c607a */ __asm { MOV R15,RCX }
    /* +0x7c607d */ __asm { MOV qword ptr [RBP + 0x48],RBX }
    /* +0x7c6081 */ __asm { MOV qword ptr [RBP + 0x40],RDI }
    /* +0x7c6085 */ __asm { ROL R15,0x2c }
    /* +0x7c6089 */ __asm { MOV RDX,R15 }
    /* +0x7c608c */ __asm { SHL RDX,0x36 }
    /* +0x7c6090 */ __asm { SUB R15,RDX }
    /* +0x7c6093 */ __asm { MOV qword ptr [RBP + 0x30],R15 }
    /* +0x7c6097 */ __asm { MOV R8,R13 }
    /* +0x7c609a */ __asm { MOV RDX,R12 }
    /* +0x7c609d */ __asm { MOV RCX,R15 }
    /* +0x7c60a0 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7c60a5 */ __asm { MOV word ptr [R15 + RDI*0x2],0x0 }
    /* +0x7c60ac */ __asm { JMP 0x7fffa4f360eb }
    /* +0x7c60ae */ __asm { MOVDQA xmmword ptr [RBP + 0x30],XMM2 }
    /* +0x7c60b3 */ __asm { LEA R8,[R15 + R15*0x1] }
    /* +0x7c60b7 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x7c60be */ __asm { NOP }
    /* +0x7c60bf */ __asm { MOV R11,0x0 }
    /* +0x7c60c6 */ __asm { MOV qword ptr [RBP + 0x40],R15 }
    /* +0x7c60ca */ __asm { MOV qword ptr [RBP + 0x48],0x7 }
    /* +0x7c60d2 */ __asm { LEA RCX,[RBP + 0x30] }
    /* +0x7c60d6 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7c60db */ __asm { MOV word ptr [RBP + R15*0x2 + 0x30],0x0 }
    /* +0x7c60e3 */ __asm { MOV RDI,qword ptr [RBP + 0x40] }
    /* +0x7c60e7 */ __asm { MOV RBX,qword ptr [RBP + 0x48] }
    /* +0x7c60eb */ __asm { MOV R11,0x1f36b4bc0d13e4e3 }
    /* +0x7c60f5 */ __asm { LEA RAX,[RBP + 0x70] }
    /* +0x7c60f9 */ __asm { MOV RCX,-0x7c9a946e51875990 }
    /* +0x7c6103 */ __asm { MOV R9W,0x150f }
    /* +0x7c6108 */ __asm { XOR R9D,0xfa45 }
    /* +0x7c610f */ __asm { MOVSX RDX,R9W }
    /* +0x7c6113 */ __asm { MOV R13,RBX }
    /* +0x7c6116 */ __asm { SUB R13,RDI }
    /* +0x7c6119 */ __asm { LEA R8,[0x7fffa51783a6] }
    /* +0x7c6120 */ __asm { ADD R8,RDX }
    /* +0x7c6123 */ __asm { MOV qword ptr [RBP + 0xd8],RCX }
    /* +0x7c612a */ __asm { MOV R9,0x1f6ab4830d2ce4bf }
    /* +0x7c6134 */ __asm { MOV qword ptr [RBP + 0xd0],R9 }
    /* +0x7c613b */ __asm { MOV qword ptr [RBP + 0x70],R11 }
    /* +0x7c613f */ __asm { MOVDQA XMM2,xmmword ptr [RBP + 0xd0] }
    /* +0x7c6147 */ __asm { MOV qword ptr [RBP + 0x78],RCX }
    /* +0x7c614b */ __asm { PXOR XMM2,xmmword ptr [RAX] }
    /* +0x7c614f */ __asm { MOVDQA xmmword ptr [RBP + 0xd0],XMM2 }
    /* +0x7c6157 */ __asm { LEA R15,[RBP + 0xd0] }
    /* +0x7c615e */ __asm { MOV RCX,R15 }
    /* +0x7c6161 */ __asm { CALL R8 }
    /* +0x7c6164 */ __asm { MOV R12,RAX }
    /* +0x7c6167 */ __asm { CMP RAX,R13 }
    /* +0x7c616a */ __asm { JA 0x7fffa4f361a1 }
    /* +0x7c616c */ __asm { LEA RDX,[0xd0 + R12*0x2] }
    /* +0x7c6174 */ __asm { ADD RDX,RBP }
    /* +0x7c6177 */ __asm { LEA RCX,[R12 + RDI*0x1] }
    /* +0x7c617b */ __asm { NOP }
    /* +0x7c617c */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x7c6183 */ __asm { MOV R11,0x0 }
    /* +0x7c618a */ __asm { MOV qword ptr [RBP + 0x40],RCX }
    /* +0x7c618e */ __asm { CMP RBX,0x8 }
    /* +0x7c6192 */ __asm { JC 0x7fffa4f36340 }
    /* +0x7c6198 */ __asm { MOV R13,qword ptr [RBP + 0x30] }
    /* +0x7c619c */ __asm { JMP 0x7fffa4f36344 }
    /* +0x7c61a1 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x7c61a8 */ __asm { MOV R11,0x0 }
    /* +0x7c61af */ __asm { NOP }
    /* +0x7c61b0 */ __asm { MOV RSI,0x7ffffffffffffffe }
    /* +0x7c61ba */ __asm { MOV RDX,RSI }
    /* +0x7c61bd */ __asm { SUB RDX,RDI }
    /* +0x7c61c0 */ __asm { CMP RDX,R12 }
    /* +0x7c61c3 */ __asm { JC 0x7fffa4f3872e }
    /* +0x7c61c9 */ __asm { LEA R13,[RDI + R12*0x1] }
    /* +0x7c61cd */ __asm { MOV RDX,R13 }
    /* +0x7c61d0 */ __asm { OR RDX,0x7 }
    /* +0x7c61d4 */ __asm { CMP RDX,RSI }
    /* +0x7c61d7 */ __asm { JA 0x7fffa4f36206 }
    /* +0x7c61d9 */ __asm { MOV RCX,RBX }
    /* +0x7c61dc */ __asm { SHR RCX,0x1 }
    /* +0x7c61df */ __asm { MOV R11,RSI }
    /* +0x7c61e2 */ __asm { SUB R11,RCX }
    /* +0x7c61e5 */ __asm { CMP RBX,R11 }
    /* +0x7c61e8 */ __asm { JA 0x7fffa4f36206 }
    /* +0x7c61ea */ __asm { ADD RCX,RBX }
    /* +0x7c61ed */ __asm { CMP RDX,RCX }
    /* +0x7c61f0 */ __asm { CMOVA RCX,RDX }
    /* +0x7c61f4 */ __asm { MOV R11,0x0 }
    /* +0x7c61fb */ __asm { NOP }
    /* +0x7c61fc */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x7c6203 */ __asm { MOV RSI,RCX }
    /* +0x7c6206 */ __asm { LEA RDX,[0x7fffa526cec6] }
    /* +0x7c620d */ __asm { MOV ECX,0x4859d1de }
    /* +0x7c6212 */ __asm { LEA R11,[0x2 + RSI*0x2] }
    /* +0x7c621a */ __asm { IMUL ECX,ECX,-0x4c7bc527 }
    /* +0x7c6220 */ __asm { MOV R8,R11 }
    /* +0x7c6223 */ __asm { SHL R8,0x3c }
    /* +0x7c6227 */ __asm { XOR R8,R11 }
    /* +0x7c622a */ __asm { SHL R11,0xe }
    /* +0x7c622e */ __asm { ROL ECX,0xb }
    /* +0x7c6231 */ __asm { MOV R10,0x1865d799980f }
    /* +0x7c623b */ __asm { NOT ECX }
    /* +0x7c623d */ __asm { MOVSXD RAX,ECX }
    /* +0x7c6240 */ __asm { MOV CX,0xc6f6 }
    /* +0x7c6244 */ __asm { IMUL R9D,ECX,-0x72f5 }
    /* +0x7c624b */ __asm { NOT R9D }
    /* +0x7c624e */ __asm { MOV ECX,R14D }
    /* +0x7c6251 */ __asm { ROR R9W,CL }
    /* +0x7c6255 */ __asm { ADD R10,R11 }
    /* +0x7c6258 */ __asm { ADD R10,R8 }
    /* +0x7c625b */ __asm { MOVSX RCX,R9W }
    /* +0x7c625f */ __asm { ADD RCX,RDX }
    /* +0x7c6262 */ __asm { CALL RCX }
    /* +0x7c6264 */ __asm { MOV R15,RCX }
    /* +0x7c6267 */ __asm { ROL R15,0x2c }
    /* +0x7c626b */ __asm { MOV RDX,R15 }
    /* +0x7c626e */ __asm { SHL RDX,0x36 }
    /* +0x7c6272 */ __asm { SUB R15,RDX }
    /* +0x7c6275 */ __asm { MOV qword ptr [RBP + 0x40],R13 }
    /* +0x7c6279 */ __asm { MOV qword ptr [RBP + 0x48],RSI }
    /* +0x7c627d */ __asm { CMP RBX,0x8 }
    /* +0x7c6281 */ __asm { JC 0x7fffa4f3638d }
    /* +0x7c6287 */ __asm { MOV SI,0x12d5 }
    /* +0x7c628b */ __asm { MOV R13D,0xd095d984 }
    /* +0x7c6291 */ __asm { MOV qword ptr [RBP + 0x20],R14 }
    /* +0x7c6295 */ __asm { LEA R14,[0x7fffa568e4a5] }
    /* +0x7c629c */ __asm { ADD R13D,0xe246c85c }
    /* +0x7c62a3 */ __asm { SUB ESI,dword ptr [RBP + 0x20] }
    /* +0x7c62a6 */ __asm { LEA R8,[R12 + R12*0x1] }
    /* +0x7c62aa */ __asm { LEA RDX,[RBP + 0xd0] }
    /* +0x7c62b1 */ __asm { MOV RCX,R15 }
    /* +0x7c62b4 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7c62b9 */ __asm { MOV RCX,qword ptr [RBP + 0x20] }
    /* +0x7c62bd */ __asm { ROR R13D,CL }
    /* +0x7c62c0 */ __asm { LEA RCX,[R15 + R12*0x2] }
    /* +0x7c62c4 */ __asm { MOV RDX,qword ptr [RBP + 0x30] }
    /* +0x7c62c8 */ __asm { MOV R11,RDX }
    /* +0x7c62cb */ __asm { MOV RBX,R11 }
    /* +0x7c62ce */ __asm { SHR RBX,0x3d }
    /* +0x7c62d2 */ __asm { XOR RBX,R11 }
    /* +0x7c62d5 */ __asm { LEA R8,[0x2 + RDI*0x2] }
    /* +0x7c62dd */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7c62e2 */ __asm { ADD ESI,0xffffeccd }
    /* +0x7c62e8 */ __asm { MOVSX RDX,SI }
    /* +0x7c62ec */ __asm { ADD RDX,R14 }
    /* +0x7c62ef */ __asm { MOV R14,qword ptr [RBP + 0x20] }
    /* +0x7c62f3 */ __asm { MOV R11,R13 }
    /* +0x7c62f6 */ __asm { MOV R8,RBX }
    /* +0x7c62f9 */ __asm { CALL RDX }
    /* +0x7c62fb */ __asm { JMP 0x7fffa4f363c4 }
    /* +0x7c6300 */ __asm { CMP R15,0x1 }
    /* +0x7c6304 */ __asm { JNZ 0x7fffa4f363cd }
    /* +0x7c630a */ __asm { LEA R8,[R15 + R15*0x1] }
    /* +0x7c630e */ __asm { MOV R11,0x0 }
    /* +0x7c6315 */ __asm { NOP }
    /* +0x7c6316 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x7c631d */ __asm { MOV qword ptr [RBP + 0xb0],R15 }
    /* +0x7c6324 */ __asm { LEA RCX,[RBP + 0xa0] }
    /* +0x7c632b */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7c6330 */ __asm { MOV word ptr [RBP + R15*0x2 + 0xa0],0x0 }
    /* +0x7c633b */ __asm { JMP 0x7fffa4f36690 }
    /* +0x7c6340 */ __asm { LEA R13,[RBP + 0x30] }
    /* +0x7c6344 */ __asm { LEA RCX,[RDI*0x2] }
    /* +0x7c634c */ __asm { ADD RCX,R13 }
    /* +0x7c634f */ __asm { CMP R15,RCX }
    /* +0x7c6352 */ __asm { SETA R8B }
    /* +0x7c6356 */ __asm { MOV RBX,R12 }
    /* +0x7c6359 */ __asm { CMP RDX,R13 }
    /* +0x7c635c */ __asm { JBE 0x7fffa4f364ee }
    /* +0x7c6362 */ __asm { TEST R8B,R8B }
    /* +0x7c6365 */ __asm { JNZ 0x7fffa4f364ee }
    /* +0x7c636b */ __asm { NOP }
    /* +0x7c636c */ __asm { MOV R11,0x0 }
    /* +0x7c6373 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x7c637a */ __asm { MOV RBX,R13 }
    /* +0x7c637d */ __asm { SUB RBX,R15 }
    /* +0x7c6380 */ __asm { JA 0x7fffa4f364eb }
    /* +0x7c6386 */ __asm { XOR EBX,EBX }
    /* +0x7c6388 */ __asm { JMP 0x7fffa4f364ee }
    /* +0x7c638d */ __asm { LEA R8,[R12 + R12*0x1] }
    /* +0x7c6391 */ __asm { NOP }
    /* +0x7c6392 */ __asm { MOV R11,0x0 }
    /* +0x7c6399 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x7c63a0 */ __asm { LEA RDX,[RBP + 0xd0] }
    /* +0x7c63a7 */ __asm { MOV RCX,R15 }
    /* +0x7c63aa */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7c63af */ __asm { LEA RCX,[R15 + R12*0x2] }
    /* +0x7c63b3 */ __asm { LEA R8,[0x2 + RDI*0x2] }
    /* +0x7c63bb */ __asm { LEA RDX,[RBP + 0x30] }
    /* +0x7c63bf */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7c63c4 */ __asm { MOV qword ptr [RBP + 0x30],R15 }
    /* +0x7c63c8 */ __asm { JMP 0x7fffa4f36546 }
    /* +0x7c63cd */ __asm { NOP }
    /* +0x7c63ce */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x7c63d5 */ __asm { MOV R11,0x0 }
    /* +0x7c63dc */ __asm { CMP word ptr [RDX + 0x2],0x5c }
    /* +0x7c63e1 */ __asm { JZ 0x7fffa4f3695f }
    /* +0x7c63e7 */ __asm { CMP R15,0x7 }
    /* +0x7c63eb */ __asm { JBE 0x7fffa4f3630a }
    /* +0x7c63f1 */ __asm { MOV RDX,-0x7fffffff8b99aed3 }
    /* +0x7c63fb */ __asm { MOV ECX,0x7466512b }
    /* +0x7c6400 */ __asm { SUB RCX,RDX }
    /* +0x7c6403 */ __asm { CMP R15,RCX }
    /* +0x7c6406 */ __asm { JA 0x7fffa4f38771 }
    /* +0x7c640c */ __asm { LEA RDX,[0x7fffa52716c9] }
    /* +0x7c6413 */ __asm { MOV ECX,0xc1d62675 }
    /* +0x7c6418 */ __asm { XOR ECX,R14D }
    /* +0x7c641b */ __asm { ROL ECX,0x12 }
    /* +0x7c641e */ __asm { LEA R13,[R15 + R15*0x1] }
    /* +0x7c6422 */ __asm { NOT ECX }
    /* +0x7c6424 */ __asm { MOVSXD RAX,ECX }
    /* +0x7c6427 */ __asm { MOV CX,0x7184 }
    /* +0x7c642b */ __asm { XOR ECX,0x68bd }
    /* +0x7c6431 */ __asm { MOVD XMM2,ECX }
    /* +0x7c6435 */ __asm { MOV R9,R15 }
    /* +0x7c6438 */ __asm { OR R9,0x7 }
    /* +0x7c643c */ __asm { MOVD XMM5,R14D }
    /* +0x7c6441 */ __asm { PSUBW XMM2,XMM5 }
    /* +0x7c6445 */ __asm { CMP R9,0xb }
    /* +0x7c6449 */ __asm { MOV R12D,0xa }
    /* +0x7c644f */ __asm { CMOVNC R12,R9 }
    /* +0x7c6453 */ __asm { MOV RCX,0x7ffffffffffffffe }
    /* +0x7c645d */ __asm { CMP R12,RCX }
    /* +0x7c6460 */ __asm { CMOVNC R12,RCX }
    /* +0x7c6464 */ __asm { LEA RCX,[0x2 + R12*0x2] }
    /* +0x7c646c */ __asm { MOV R11,RCX }
    /* +0x7c646f */ __asm { SHL R11,0x3c }
    /* +0x7c6473 */ __asm { XOR R11,RCX }
    /* +0x7c6476 */ __asm { SHL RCX,0xe }
    /* +0x7c647a */ __asm { MOV R10,0x1865d799980f }
    /* +0x7c6484 */ __asm { ADD R10,RCX }
    /* +0x7c6487 */ __asm { ADD R10,R11 }
    /* +0x7c648a */ __asm { MOVD R9D,XMM2 }
    /* +0x7c648f */ __asm { ADD R9D,0xffffe2c5 }
    /* +0x7c6496 */ __asm { MOVSX RCX,R9W }
    /* +0x7c649a */ __asm { ADD RCX,RDX }
    /* +0x7c649d */ __asm { CALL RCX }
    /* +0x7c649f */ __asm { MOV R15,RCX }
    /* +0x7c64a2 */ __asm { MOV RDX,qword ptr [RBP + -0x18] }
    /* +0x7c64a6 */ __asm { MOV qword ptr [RBP + 0xb0],RDX }
    /* +0x7c64ad */ __asm { ROL R15,0x2c }
    /* +0x7c64b1 */ __asm { MOV qword ptr [RBP + 0xb8],R12 }
    /* +0x7c64b8 */ __asm { MOV RDX,R15 }
    /* +0x7c64bb */ __asm { SHL RDX,0x36 }
    /* +0x7c64bf */ __asm { SUB R15,RDX }
    /* +0x7c64c2 */ __asm { MOV R8,R13 }
    /* +0x7c64c5 */ __asm { MOV RDX,qword ptr [RBP + 0xc8] }
    /* +0x7c64cc */ __asm { MOV RCX,R15 }
    /* +0x7c64cf */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7c64d4 */ __asm { MOV RAX,qword ptr [RBP + -0x18] }
    /* +0x7c64d8 */ __asm { MOV word ptr [R15 + RAX*0x2],0x0 }
    /* +0x7c64df */ __asm { MOV qword ptr [RBP + 0xa0],R15 }
    /* +0x7c64e6 */ __asm { JMP 0x7fffa4f36689 }
    /* +0x7c64eb */ __asm { SAR RBX,0x1 }
    /* +0x7c64ee */ __asm { LEA R15,[RDX + RBX*0x2] }
    /* +0x7c64f2 */ __asm { LEA RCX,[R12*0x2] }
    /* +0x7c64fa */ __asm { ADD RCX,R13 }
    /* +0x7c64fd */ __asm { LEA R8,[0x2 + RDI*0x2] }
    /* +0x7c6505 */ __asm { SUB R12,RBX }
    /* +0x7c6508 */ __asm { ADD R12,R12 }
    /* +0x7c650b */ __asm { LEA RSI,[RBX*0x2] }
    /* +0x7c6513 */ __asm { ADD RSI,R13 }
    /* +0x7c6516 */ __asm { ADD RBX,RBX }
    /* +0x7c6519 */ __asm { MOV RDX,R13 }
    /* +0x7c651c */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7c6521 */ __asm { LEA RDX,[RBP + 0xd0] }
    /* +0x7c6528 */ __asm { MOV R8,RBX }
    /* +0x7c652b */ __asm { MOV RCX,R13 }
    /* +0x7c652e */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7c6533 */ __asm { MOV R8,R12 }
    /* +0x7c6536 */ __asm { MOV RDX,R15 }
    /* +0x7c6539 */ __asm { MOV RCX,RSI }
    /* +0x7c653c */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7c6541 */ __asm { MOVZX R15D,word ptr [RBP + 0x30] }
    /* +0x7c6546 */ __asm { CMP qword ptr [RBP + 0xb8],0x8 }
    /* +0x7c654e */ __asm { MOV RDI,qword ptr [RBP + 0x48] }
    /* +0x7c6552 */ __asm { MOV qword ptr [RBP + 0x48],0x7 }
    /* +0x7c655a */ __asm { MOV RDX,qword ptr [RBP + 0x32] }
    /* +0x7c655e */ __asm { MOV RCX,qword ptr [RBP + 0x38] }
    /* +0x7c6562 */ __asm { MOV qword ptr [RBP + 0x10],RDX }
    /* +0x7c6566 */ __asm { MOV qword ptr [RBP + 0x16],RCX }
    /* +0x7c656a */ __asm { MOV word ptr [RBP + 0x30],0x0 }
    /* +0x7c6570 */ __asm { MOV R13,qword ptr [RBP + 0x40] }
    /* +0x7c6574 */ __asm { MOV qword ptr [RBP + 0x40],0x0 }
    /* +0x7c657c */ __asm { JNC 0x7fffa4f365b2 }
    /* +0x7c657e */ __asm { LEA RDX,[RBP + 0x32] }
    /* +0x7c6582 */ __asm { MOV word ptr [RBP + 0xa0],R15W }
    /* +0x7c658a */ __asm { MOV qword ptr [RBP + 0xb0],R13 }
    /* +0x7c6591 */ __asm { MOV RCX,qword ptr [RDX] }
    /* +0x7c6594 */ __asm { MOV RDX,qword ptr [RDX + 0x6] }
    /* +0x7c6598 */ __asm { MOV qword ptr [RBP + 0xa2],RCX }
    /* +0x7c659f */ __asm { MOV qword ptr [RBP + 0xa8],RDX }
    /* +0x7c65a6 */ __asm { MOV qword ptr [RBP + 0xb8],RDI }
    /* +0x7c65ad */ __asm { JMP 0x7fffa4f3667a }
    /* +0x7c65b2 */ __asm { LEA RDX,[0x7fffa568d2ec] }
    /* +0x7c65b9 */ __asm { MOV R9W,0x4a1a }
    /* +0x7c65be */ __asm { NOP }
    /* +0x7c65bf */ __asm { MOV R11,0x0 }
    /* +0x7c65c6 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x7c65cd */ __asm { MOV RCX,qword ptr [RBP + 0xa0] }
    /* +0x7c65d4 */ __asm { MOV R8,RCX }
    /* +0x7c65d7 */ __asm { SHR R8,0x3d }
    /* +0x7c65db */ __asm { XOR R8,RCX }
    /* +0x7c65de */ __asm { ADD R9D,0x7739 }
    /* +0x7c65e5 */ __asm { XOR R9D,R14D }
    /* +0x7c65e8 */ __asm { MOVSX RCX,R9W }
    /* +0x7c65ec */ __asm { ADD RCX,RDX }
    /* +0x7c65ef */ __asm { MOV R11D,0x46cee63e }
    /* +0x7c65f5 */ __asm { SUB R11D,R14D }
    /* +0x7c65f8 */ __asm { XOR R11D,0x11a7bf42 }
    /* +0x7c65ff */ __asm { CALL RCX }
    /* +0x7c6601 */ __asm { MOV qword ptr [RBP + 0xb8],RDI }
    /* +0x7c6608 */ __asm { MOV RDX,qword ptr [RBP + 0x10] }
    /* +0x7c660c */ __asm { MOV RCX,qword ptr [RBP + 0x16] }
    /* +0x7c6610 */ __asm { MOV qword ptr [RBP + 0xa2],RDX }
    /* +0x7c6617 */ __asm { MOV qword ptr [RBP + 0xa8],RCX }
    /* +0x7c661e */ __asm { CMP qword ptr [RBP + 0x48],0x8 }
    /* +0x7c6623 */ __asm { MOV qword ptr [RBP + 0xb0],R13 }
    /* +0x7c662a */ __asm { MOV word ptr [RBP + 0xa0],R15W }
    /* +0x7c6632 */ __asm { JC 0x7fffa4f3667a }
    /* +0x7c6634 */ __asm { MOV RDX,qword ptr [RBP + 0x30] }
    /* +0x7c6638 */ __asm { MOV ECX,R14D }
    /* +0x7c663b */ __asm { OR ECX,0x1 }
    /* +0x7c663e */ __asm { LEA R11,[0x7fffa56960f2] }
    /* +0x7c6645 */ __asm { MOV R9D,0x8bdfb29 }
    /* +0x7c664b */ __asm { IMUL R9D,ECX }
    /* +0x7c664f */ __asm { ADD R9D,0x506ae28f }
    /* +0x7c6656 */ __asm { MOVSXD R9,R9D }
    /* +0x7c6659 */ __asm { ADD R9,R11 }
    /* +0x7c665c */ __asm { MOV R8,RDX }
    /* +0x7c665f */ __asm { SHR R8,0x3d }
    /* +0x7c6663 */ __asm { XOR R8,RDX }
    /* +0x7c6666 */ __asm { MOV R11D,0x1f8bfdd8 }
    /* +0x7c666c */ __asm { IMUL R11D,ECX }
    /* +0x7c6670 */ __asm { XOR R11D,0x8d604f0d }
    /* +0x7c6677 */ __asm { CALL R9 }
    /* +0x7c667a */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x7c6681 */ __asm { NOP }
    /* +0x7c6682 */ __asm { MOV R11,0x0 }
    /* +0x7c6689 */ __asm { MOV RSI,qword ptr [RBP + 0xf0] }
    /* +0x7c6690 */ __asm { MOV CX,0x717b }
    /* +0x7c6694 */ __asm { IMUL EAX,ECX,-0x7b15 }
    /* +0x7c669a */ __asm { LEA ECX,[R14 + RAX*0x1] }
    /* +0x7c669e */ __asm { ROL CX,0xa }
    /* +0x7c66a2 */ __asm { MOV RAX,qword ptr [RBP + 0xb0] }
    /* +0x7c66a9 */ __asm { MOVZX R9D,CX }
    /* +0x7c66ad */ __asm { CMP qword ptr [RBP + 0xb8],0x8 }
    /* +0x7c66b5 */ __asm { JC 0x7fffa4f366c8 }
    /* +0x7c66b7 */ __asm { MOV RDX,qword ptr [RBP + 0xa0] }
    /* +0x7c66be */ __asm { CMP RAX,R9 }
    /* +0x7c66c1 */ __asm { JNZ 0x7fffa4f366d8 }
    /* +0x7c66c3 */ __asm { JMP 0x7fffa4f36dc8 }
    /* +0x7c66c8 */ __asm { LEA RDX,[RBP + 0xa0] }
    /* +0x7c66cf */ __asm { CMP RAX,R9 }
    /* +0x7c66d2 */ __asm { JZ 0x7fffa4f36dc8 }
    /* +0x7c66d8 */ __asm { LEA RCX,[RAX + -0x1] }
    /* +0x7c66dc */ __asm { MOV R10,0x7fffffffffffffff }
}


// ============================================================================
// Function : Unwind@7fffa4f407e0  |  RVA: 0x7d07e0  |  Size: 158 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f407e0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (7 < *(uint64_t *)(param_2 + 200)) {
    pcVar1 = (code *)((int64_t)(0x78ef364d - ((int)*(uint64_t *)(param_2 + 0x78) + 0x78f019ff)) +
                     0x7fffa569683f);
    (*pcVar1)(0x7fffa569683f,pcVar1,
              *(uint64_t *)(param_2 + 0xb0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xb0));
  }
  *(uint16_t *)(param_2 + 0xb0) = 0;
  *(uint64_t *)(param_2 + 200) = 7;
  *(uint64_t *)(param_2 + 0xc0) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f40880  |  RVA: 0x7d0880  |  Size: 158 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f40880(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x108)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xa0) & 0x1f;
    pcVar2 = (code *)((int64_t)(int)(0xe37fff9cU >> bVar1 | -0x1c800064 << 0x20 - bVar1) +
                     0x7fffa569426a);
    (*pcVar2)(0x7fffa569426a,pcVar2,
              *(uint64_t *)(param_2 + 0xf0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xf0));
  }
  *(uint64_t *)(param_2 + 0x108) = 7;
  *(uint16_t *)(param_2 + 0xf0) = 0;
  *(uint64_t *)(param_2 + 0x100) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f40920  |  RVA: 0x7d0920  |  Size: 157 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f40920(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 200)) {
    uVar1 = *(uint64_t *)(param_2 + 0xb0);
    FUN_7fffa5687c30(FUN_7fffa5687c30,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  *(uint64_t *)(param_2 + 200) = 7;
  *(uint16_t *)(param_2 + 0xb0) = 0;
  *(uint64_t *)(param_2 + 0xc0) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f409c0  |  RVA: 0x7d09c0  |  Size: 143 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f409c0(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x138)) {
    (*(code *)(&UNK_7fffa5688141 + (short)((short)*(uint64_t *)(param_2 + 0x170) * 0x17a7 ^ 0x2ee)
              ))(&UNK_7fffa5688141 +
                 (short)((short)*(uint64_t *)(param_2 + 0x170) * 0x17a7 ^ 0x2ee),&UNK_7fffa5688141
                 ,*(uint64_t *)(param_2 + 0x120) >> 0x3d ^ *(uint64_t *)(param_2 + 0x120));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4f40a50  |  RVA: 0x7d0a50  |  Size: 49 bytes
// Callers  : FUN_7fffa569b130@0xf2b130, FUN_7fffa564c60d@0xedc60d, FUN_7fffa4ecfc70@0x75fc70
// Callees  : FUN_7fffa5281ce4@0xb11ce4
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa4f40a50(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  
  if ((*param_2 != _DAT_7fffa47825c8) && ((_DAT_7fffa4780900 & *(uint32_t *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_7fffa5281ce4();
    *param_2 = lVar1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4f40a90  |  RVA: 0x7d0a90  |  Size: 717 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint32_t FUN_7fffa4f40a90(void)

{
  uint16_t uVar1;
  uint32_t in_EAX;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint16_t uVar5;
  uint8_t bVar6;
  uint8_t bVar7;
  uint8_t bVar8;
  uint8_t bVar9;
  uint32_t uStack_5c;
  
  bVar6 = (uint8_t)in_EAX;
  uVar1 = (uint16_t)in_EAX | 1;
  iVar2 = (int)*(uint64_t *)
                ((uint64_t)(uint16_t)(0x24 << (bVar6 & 0xf) | 0x24U >> 0x10 - (bVar6 & 0xf)) +
                0xff00000000);
  if (*(int *)((int64_t)(short)(uVar1 * 0x187) + 0x7fffa47c3029) != iVar2) {
    (*(code *)&DAT_7ff8504ead30)
              ((int64_t)(int)(0xfffe66ffU >> (bVar6 & 0x1f) | -0x19901 << 0x20 - (bVar6 & 0x1f)) +
               0x7fffa47cc1b9);
    LOCK();
    UNLOCK();
    iRam00007fffa47bf530 = iVar2;
  }
  *(int *)((int64_t)(short)(-0xf06 << (bVar6 & 0xf) | 0xf0faU >> 0x10 - (bVar6 & 0xf)) +
          0x7fffa47c133f) = iRam00007fffa47bf534 + 1;
  lVar4 = (int64_t)(short)~(uVar1 * 0x1075);
  uVar3 = (uint64_t)bRam00007fffa4784c82;
  bVar7 = *(uint8_t *)(lVar4 + 0x7fffa4789783 + uVar3 * 4) ^
          *(uint8_t *)(((int64_t)(int)(in_EAX + 0xd06c7a37) ^ 0x3d8d3807U) + 0x7fffa47909e9);
  bVar9 = *(uint8_t *)(lVar4 + 0x7fffa4789780 + uVar3 * 4) ^
          *(uint8_t *)((int64_t)(int)(in_EAX + 0xdf926c7) + 0x7fffa479255d);
  bVar8 = bRam00007fffa4784ca7 ^ *(uint8_t *)(lVar4 + 0x7fffa4789782 + uVar3 * 4);
  bVar6 = *(uint8_t *)((int64_t)(short)((uint16_t)in_EAX ^ 0x92b8) + 0x7fffa478ba6d) ^
          *(uint8_t *)(lVar4 + 0x7fffa4789781 + uVar3 * 4);
  uStack_5c = CONCAT22(CONCAT11(bVar7 >> 1 | bVar7 << 7,bVar8 >> 1 | bVar8 << 7),
                       CONCAT11(bVar6 >> 1 | bVar6 << 7,bVar9 >> 1 | bVar9 << 7));
  uVar5 = (uint16_t)(0xe779 - in_EAX);
  iVar2 = *(int *)((int64_t)(short)(uVar1 * 0x78a1 + 0x436) + 0x7fffa47c27dd) + -1;
  *(int *)((int64_t)(short)(uVar5 << 0xb | uVar5 >> 5) + 0x7fffa47c2dfd) = iVar2;
  if (iVar2 == 0) {
    LOCK();
    *(uint32_t *)((int64_t)(int)((in_EAX | 1) * -0x1bc48454 + 0x7ffe0324) + 0x7fffa47ca060) = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(short)(~(uVar1 * -0x490f) << 3 | (uint16_t)~(uVar1 * -0x490f) >> 0xd) +
               0x7fffa47c70c2);
  }
  return uStack_5c << 0x13 | uStack_5c >> 0xd;
}


// ============================================================================
// Function : FUN_7fffa4f40d60  |  RVA: 0x7d0d60  |  Size: 1024 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4f40fe5) */

void FUN_7fffa4f40d60(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  uint64_t in_RAX;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint8_t bVar8;
  
  bRam00007fffa4785846 = 0;
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[4] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[5] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[6] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[7] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[8] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[9] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[10] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0xb] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0xc] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0xd] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0xe] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0xf] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x10] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x11] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x12] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x13] = '\0';
  uRam00007fffa478584f = 0;
  uRam00007fffa4785857 = 0;
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x14] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x15] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x16] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x17] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x18] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x19] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x1a] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x1b] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x28] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x29] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2a] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2b] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2c] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2d] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2e] = '\0';
  s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2f] = '\0';
  uVar1 = rdtsc();
  lVar5 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar1)) * 0x301016feb6383fa + 0xb;
  lVar4 = 3;
  do {
    lVar5 = lVar5 * 0x301016feb6383fa + 0xb;
    *(char *)(lVar4 + 0x7fffa4785835) = (char)((uint64_t)lVar5 >> 0x20);
    lVar6 = lVar5 * 0x301016feb6383fa + 0xb;
    lVar5 = lVar6 * 0x301016feb6383fa + 0xb;
    *(char *)(lVar4 + 0x7fffa4785837) = (char)((uint64_t)lVar5 >> 0x20);
    lVar5 = lVar5 * 0x301016feb6383fa + 0xb;
    *(char *)(lVar4 + 0x7fffa4785838) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar4 + 0x7fffa4785836) = (char)((uint64_t)lVar6 >> 0x20);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x57);
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa4785846 * 0x33333334 + 0x33333334) * 5;
  uVar7 = uVar2 >> 0x20;
  cVar3 = s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x28];
  *(uint8_t *)(uVar7 * 8 + 0x7fffa4785850) =
       (uint8_t)~s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x29] >> 1 |
       ~s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x29] << 7;
  *(uint8_t *)(uVar7 * 8 + 0x7fffa4785854) =
       (uint8_t)~s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2d] >> 1 |
       ~s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2d] << 7;
  *(uint8_t *)(uVar7 * 8 + 0x7fffa478584f) = (uint8_t)~cVar3 >> 1 | ~cVar3 << 7;
  bVar8 = ~s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2b];
  *(uint8_t *)(uVar7 * 8 + 0x7fffa4785853) =
       (uint8_t)~s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2c] >> 1 |
       ~s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2c] << 7;
  *(uint8_t *)(uVar7 * 8 + 0x7fffa4785852) = bVar8 >> 1 | bVar8 << 7;
  *(uint8_t *)(uVar7 * 8 + 0x7fffa4785856) =
       (uint8_t)~s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2f] >> 1 |
       ~s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2f] << 7;
  *(uint8_t *)(uVar7 * 8 + 0x7fffa4785851) =
       (uint8_t)~s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2a] >> 1 |
       ~s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2a] << 7;
  *(uint8_t *)(uVar7 * 8 + 0x7fffa4785855) =
       (uint8_t)~s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2e] >> 1 |
       ~s_EEEEEEEEEEEE________EEEEEEEEEEEE_7fffa478585b[0x2e] << 7;
  bRam00007fffa4785846 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4f41160  |  RVA: 0x7d1160  |  Size: 169 bytes
// Callers  : FUN_7fffa549ae70@0xd2ae70, FUN_7fffa47de300@0x6e300, FUN_7fffa517b810@0xa0b810, FUN_7fffa54a4560@0xd34560, FUN_7fffa54037a0@0xc937a0, FUN_7fffa4a994d0@0x3294d0, FUN_7fffa5244df0@0xad4df0
// Callees  : none
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_7fffa4f41160(int64_t *param_1,uint8_t *param_2)

{
  uint64_t uVar1;
  int64_t lStack_38;
  uint64_t uStack_30;
  int64_t *plStack_28;
  uint8_t *pbStack_20;
  int64_t lStack_18;
  
  uVar1 = 0x19930520;
  if ((param_2 != (uint8_t *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(uint8_t **)(*(int64_t *)(*param_1 + -8) + 0x30);
    (**(code **)(*(int64_t *)(*param_1 + -8) + 0x40))();
  }
  lStack_38 = 0;
  if (param_2 != (uint8_t *)0x0) {
    lStack_38 = (*(code *)&DAT_7ff85052c160)(param_2,&lStack_38);
    if (((*param_2 & 8) != 0) || (lStack_38 == 0)) {
      uVar1 = 0x1994000;
    }
  }
  uStack_30 = uVar1;
  plStack_28 = param_1;
  pbStack_20 = param_2;
  lStack_18 = lStack_38;
  (*(code *)&DAT_7ff84ea3b2c0)(0xe06d7363,1,4,&uStack_30);
  return;
}


// ============================================================================
// Function : FUN_7fffa4f4120c  |  RVA: 0x7d120c  |  Size: 106 bytes
// Callers  : FUN_7fffa5668bc0@0xef8bc0
// Callees  : FUN_7fffa55d50b4@0xe650b4
// ============================================================================
int64_t FUN_7fffa4f4120c(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint32_t auStackX_8 [2];
  
  lVar1 = *param_1;
  lVar2 = 0;
  if (lVar1 == 0) {
    auStackX_8[0] = (*(code *)&DAT_7ff84ea18640)();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(uint8_t *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    lVar1 = FUN_7fffa55d50b4(auStackX_8,lVar2);
    *param_1 = lVar1;
    (*(code *)&DAT_7ff84ea28280)(auStackX_8[0]);
  }
  return lVar1;
}


// ============================================================================
// Function : FUN_7fffa4f41280  |  RVA: 0x7d1280  |  Size: 947 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4f41280(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  
  bRam00007fffa479c1b5 = 0;
  uRam00007fffa479c1bc = 0;
  uRam00007fffa479c1c4 = 0;
  uRam00007fffa479c1cc = 0;
  _uRam00007fffa479c1e0 = 0;
  uVar1 = rdtsc();
  lVar7 = (uVar1 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar1)) * 0xbdef37dbe5a2b09;
  for (lVar6 = 3;
      *(char *)(lVar6 + 0x7fffa479c1b1) = (char)((uint64_t)(lVar7 * 0x7dbe5a2b09) >> 0x20),
      lVar6 != 0x37; lVar6 = lVar6 + 4) {
    *(char *)(lVar6 + 0x7fffa479c1b3) = (char)((uint64_t)(lVar7 * 0x895999d3d9) >> 0x20);
    *(char *)(lVar6 + 0x7fffa479c1b2) = (char)((uint64_t)(lVar7 * 0x6da5900651) >> 0x20);
    lVar7 = lVar7 * 0x5ee302258547e5a1;
    *(char *)(lVar6 + 0x7fffa479c1b4) = (char)((uint64_t)lVar7 >> 0x20);
  }
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa479c1b5 * 0x55555556 + 0x55555556) * 3;
  uVar8 = uVar1 >> 0x20;
  bVar4 = bRam00007fffa479c1e3;
  bVar3 = uRam00007fffa479c1e0._1_1_;
  *(uint8_t *)(uVar8 * 8 + 0x7fffa479c1c1) = bRam00007fffa479c1e5 << 4 | bRam00007fffa479c1e5 >> 4;
  bVar2 = bRam00007fffa479c1e2;
  *(uint8_t *)(uVar8 * 8 + 0x7fffa479c1c2) = bRam00007fffa479c1e6 << 4 | bRam00007fffa479c1e6 >> 4;
  *(uint8_t *)(uVar8 * 8 + 0x7fffa479c1be) = bVar2 << 4 | bVar2 >> 4;
  bVar5 = bRam00007fffa479c1e7;
  *(uint8_t *)(uVar8 * 8 + 0x7fffa479c1bf) = bVar4 << 4 | bVar4 >> 4;
  bVar2 = (uint8_t)uRam00007fffa479c1e0;
  *(uint8_t *)(uVar8 * 8 + 0x7fffa479c1c3) = bVar5 << 4 | bVar5 >> 4;
  *(uint8_t *)(uVar8 * 8 + 0x7fffa479c1bc) = bVar2 << 4 | bVar2 >> 4;
  *(uint8_t *)(uVar8 * 8 + 0x7fffa479c1bd) = bVar3 << 4 | bVar3 >> 4;
  *(uint8_t *)(uVar8 * 8 + 0x7fffa479c1c0) = bRam00007fffa479c1e4 << 4 | bRam00007fffa479c1e4 >> 4;
  bRam00007fffa479c1b5 = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4f41640  |  RVA: 0x7d1640  |  Size: 9967 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4f41640(void) {
    /* +0x7d1640 */ __asm { PUSH R12 }
    /* +0x7d1642 */ __asm { PUSH RDI }
    /* +0x7d1643 */ __asm { PUSH RBP }
    /* +0x7d1644 */ __asm { PUSH RSI }
    /* +0x7d1645 */ __asm { PUSH R14 }
    /* +0x7d1647 */ __asm { PUSH R15 }
    /* +0x7d1649 */ __asm { PUSH RBX }
    /* +0x7d164a */ __asm { PUSH R13 }
    /* +0x7d164c */ __asm { SUB RSP,0x168 }
    /* +0x7d1653 */ __asm { MOVDQA xmmword ptr [RSP + 0x150],XMM14 }
    /* +0x7d165d */ __asm { MOV RBX,RDX }
    /* +0x7d1660 */ __asm { MOV R13D,EAX }
    /* +0x7d1663 */ __asm { ADD R13D,0xcbb84d77 }
    /* +0x7d166a */ __asm { MOV EAX,R13D }
    /* +0x7d166d */ __asm { SHR EAX,0x19 }
    /* +0x7d1670 */ __asm { MOV dword ptr [RSP + 0xa0],0x8bcc451e }
    /* +0x7d167b */ __asm { MOV ECX,dword ptr [RSP + 0xa0] }
    /* +0x7d1682 */ __asm { MOV dword ptr [RSP + 0xa0],0xecfbfbff }
    /* +0x7d168d */ __asm { MOV ECX,dword ptr [RSP + 0xa0] }
    /* +0x7d1694 */ __asm { TEST ECX,ECX }
    /* +0x7d1696 */ __asm { NOP }
    /* +0x7d1697 */ __asm { NOP }
    /* +0x7d1698 */ __asm { NOP }
    /* +0x7d1699 */ __asm { NOP }
    /* +0x7d169a */ __asm { NOP }
    /* +0x7d169b */ __asm { XOR R13D,EAX }
    /* +0x7d169e */ __asm { PUSHFQ }
    /* +0x7d169f */ __asm { POP RSI }
    /* +0x7d16a0 */ __asm { TEST ESI,0x100 }
    /* +0x7d16a6 */ __asm { NOP }
    /* +0x7d16a7 */ __asm { NOP }
    /* +0x7d16a8 */ __asm { NOP }
    /* +0x7d16a9 */ __asm { NOP }
    /* +0x7d16aa */ __asm { NOP }
    /* +0x7d16ab */ __asm { CMP R13D,0x3 }
    /* +0x7d16af */ __asm { JL 0x7fffa4f4175e }
    /* +0x7d16b5 */ __asm { MOV AX,0x729a }
    /* +0x7d16b9 */ __asm { IMUL EAX,EAX,0x3833 }
    /* +0x7d16bf */ __asm { ROL AX,0x6 }
    /* +0x7d16c3 */ __asm { ADD EAX,EBX }
    /* +0x7d16c5 */ __asm { MOVZX EAX,AX }
    /* +0x7d16c8 */ __asm { CMP R13D,EAX }
    /* +0x7d16cb */ __asm { JNZ 0x7fffa4f442ad }
    /* +0x7d16d1 */ __asm { MOV dword ptr [RSP + 0xa0],0x24ec5e94 }
    /* +0x7d16dc */ __asm { MOV EAX,dword ptr [RSP + 0xa0] }
    /* +0x7d16e3 */ __asm { TEST AL,0x1 }
    /* +0x7d16e5 */ __asm { NOP }
    /* +0x7d16e6 */ __asm { NOP }
    /* +0x7d16e7 */ __asm { NOP }
    /* +0x7d16e8 */ __asm { NOP }
    /* +0x7d16e9 */ __asm { NOP }
    /* +0x7d16ea */ __asm { PXOR XMM4,XMM4 }
    /* +0x7d16ee */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM4 }
    /* +0x7d16f7 */ __asm { MOV dword ptr [RSP + 0xc8],0x159f27e8 }
    /* +0x7d1702 */ __asm { MOV EAX,dword ptr [RSP + 0xc8] }
    /* +0x7d1709 */ __asm { MOV AX,0x6ac8 }
    /* +0x7d170d */ __asm { IMUL EAX,EAX,0x40bb }
    /* +0x7d1713 */ __asm { MOV ECX,EBX }
    /* +0x7d1715 */ __asm { ROL AX,CL }
    /* +0x7d1718 */ __asm { MOVZX EAX,AX }
    /* +0x7d171b */ __asm { MOV R9,qword ptr GS:[RAX] }
    /* +0x7d171f */ __asm { MOV R10,-0x114ebc137ed475a }
    /* +0x7d1729 */ __asm { OR RBX,0x1 }
    /* +0x7d172d */ __asm { MOV R11,-0xdab16183 }
    /* +0x7d1737 */ __asm { ADD R11,R10 }
    /* +0x7d173a */ __asm { IMUL R11,RBX }
    /* +0x7d173e */ __asm { CMP qword ptr [R9 + 0x18],R11 }
    /* +0x7d1742 */ __asm { NOP }
    /* +0x7d1743 */ __asm { NOP }
    /* +0x7d1744 */ __asm { NOP }
    /* +0x7d1745 */ __asm { NOP }
    /* +0x7d1746 */ __asm { NOP }
    /* +0x7d1747 */ __asm { MOV dword ptr [RSP + 0xc8],0x6865daa8 }
    /* +0x7d1752 */ __asm { MOV EAX,dword ptr [RSP + 0xc8] }
    /* +0x7d1759 */ __asm { JMP 0x7fffa4f442ad }
    /* +0x7d175e */ __asm { MOV EAX,0x1275efe8 }
    /* +0x7d1763 */ __asm { ADD EAX,EBX }
    /* +0x7d1765 */ __asm { IMUL EAX,EAX,0x7b9df3ab }
    /* +0x7d176b */ __asm { ADD EAX,0xc2fc25bd }
    /* +0x7d1770 */ __asm { XOR EAX,R13D }
    /* +0x7d1773 */ __asm { ADD EAX,0x91c45bda }
    /* +0x7d1778 */ __asm { CMP EAX,0x979dd03 }
    /* +0x7d177d */ __asm { JNZ 0x7fffa4f442ad }
    /* +0x7d1783 */ __asm { MOV EBP,EBX }
    /* +0x7d1785 */ __asm { OR EBP,0x1 }
    /* +0x7d1788 */ __asm { MOV R8D,0x2a6b7e47 }
    /* +0x7d178e */ __asm { IMUL R8D,EBP }
    /* +0x7d1792 */ __asm { LEA EAX,[R8 + R13*0x1] }
    /* +0x7d1796 */ __asm { ADD EAX,0x82696ae1 }
    /* +0x7d179b */ __asm { MOV R9,qword ptr [RAX] }
    /* +0x7d179e */ __asm { MOV R11,-0x209c7a6c1ef16a3d }
    /* +0x7d17a8 */ __asm { IMUL R11,R9 }
    /* +0x7d17ac */ __asm { MOV R9,0x127ffdf1b9551d25 }
    /* +0x7d17b6 */ __asm { CMP R11,R9 }
    /* +0x7d17b9 */ __asm { JNZ 0x7fffa4f417cd }
    /* +0x7d17bb */ __asm { MOV R11,0x0 }
    /* +0x7d17c2 */ __asm { NOP }
    /* +0x7d17c3 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x7d17ca */ __asm { MOV DH,0x34 }
    /* +0x7d17cd */ __asm { MOV dword ptr [RSP + 0x140],0x0 }
    /* +0x7d17d8 */ __asm { MOV dword ptr [RSP + 0x74],0x0 }
    /* +0x7d17e0 */ __asm { MOV dword ptr [RSP + 0xe8],0x0 }
    /* +0x7d17eb */ __asm { MOV dword ptr [RSP + 0xd4],0x0 }
    /* +0x7d17f6 */ __asm { MOV EAX,0x8fd92a03 }
    /* +0x7d17fb */ __asm { IMUL R9D,EAX,0x1d6c12ed }
    /* +0x7d1802 */ __asm { ROL R9D,0x3 }
    /* +0x7d1806 */ __asm { NOT R9D }
    /* +0x7d1809 */ __asm { MOV ECX,R13D }
    /* +0x7d180c */ __asm { ROR R9D,CL }
    /* +0x7d180f */ __asm { XOR ECX,ECX }
    /* +0x7d1811 */ __asm { MOV EAX,0x11 }
    /* +0x7d1816 */ __asm { XCHG RBX,R8 }
    /* +0x7d1819 */ __asm { CPUID }
    /* +0x7d181b */ __asm { XCHG RBX,R8 }
    /* +0x7d181e */ __asm { MOV dword ptr [RSP + 0xd4],EDX }
    /* +0x7d1825 */ __asm { MOV dword ptr [RSP + 0x140],EAX }
    /* +0x7d182c */ __asm { MOV dword ptr [RSP + 0xe8],ECX }
    /* +0x7d1833 */ __asm { MOV dword ptr [RSP + 0x74],R8D }
    /* +0x7d1838 */ __asm { MOV dword ptr [RSP + 0xa0],R9D }
    /* +0x7d1840 */ __asm { MOV EAX,dword ptr [RSP + 0xa0] }
    /* +0x7d1847 */ __asm { CMP EAX,0xd93d387 }
    /* +0x7d184c */ __asm { JBE 0x7fffa4f44317 }
    /* +0x7d1852 */ __asm { MOV AX,0xc10 }
    /* +0x7d1856 */ __asm { MOV R14D,R13D }
    /* +0x7d1859 */ __asm { OR R14D,0x1 }
    /* +0x7d185d */ __asm { XOR EAX,0xc14 }
    /* +0x7d1862 */ __asm { IMUL EAX,R14D }
    /* +0x7d1866 */ __asm { MOV ECX,EBX }
    /* +0x7d1868 */ __asm { ROL AX,CL }
    /* +0x7d186b */ __asm { MOVZX EAX,AX }
    /* +0x7d186e */ __asm { MOV R9,qword ptr GS:[RAX] }
    /* +0x7d1872 */ __asm { MOV R15D,R13D }
    /* +0x7d1875 */ __asm { MOV R9,qword ptr [R9 + 0x60] }
    /* +0x7d1879 */ __asm { NOT R9 }
    /* +0x7d187c */ __asm { MOVQ XMM4,R9 }
    /* +0x7d1881 */ __asm { MOV R9,-0x4d8bd6000d5c0de4 }
    /* +0x7d188b */ __asm { ADD R9,R15 }
    /* +0x7d188e */ __asm { XOR R9,RBX }
    /* +0x7d1891 */ __asm { MOV R10D,0xdf7a3aa3 }
    /* +0x7d1897 */ __asm { IMUL R10,R9 }
    /* +0x7d189b */ __asm { MOV R9D,0xbeecff9f }
    /* +0x7d18a1 */ __asm { ADD R9,R10 }
    /* +0x7d18a4 */ __asm { MOVQ XMM2,R9 }
    /* +0x7d18a9 */ __asm { MOVDQA XMM0,XMM2 }
    /* +0x7d18ad */ __asm { PSRLQ XMM0,0x20 }
    /* +0x7d18b2 */ __asm { PMULUDQ XMM0,XMM4 }
    /* +0x7d18b6 */ __asm { MOVDQA XMM1,XMM4 }
    /* +0x7d18ba */ __asm { PSRLQ XMM1,0x20 }
    /* +0x7d18bf */ __asm { PMULUDQ XMM1,XMM2 }
    /* +0x7d18c3 */ __asm { PADDQ XMM1,XMM0 }
    /* +0x7d18c7 */ __asm { PSLLQ XMM1,0x20 }
    /* +0x7d18cc */ __asm { PMULUDQ XMM4,XMM2 }
    /* +0x7d18d0 */ __asm { PADDQ XMM4,XMM1 }
    /* +0x7d18d4 */ __asm { MOVQ R9,XMM4 }
    /* +0x7d18d9 */ __asm { MOV R10,0x56a7719961ec1770 }
    /* +0x7d18e3 */ __asm { CMP R9,R10 }
    /* +0x7d18e6 */ __asm { JNZ 0x7fffa4f418f5 }
    /* +0x7d18e8 */ __asm { LEA EBX,[RSI] }
    /* +0x7d18ea */ __asm { JMP 0x7fffb1b1064d }
    /* +0x7d18f5 */ __asm { MOV dword ptr [RSP + 0xa0],0x79aea5b4 }
    /* +0x7d1900 */ __asm { MOV EAX,dword ptr [RSP + 0xa0] }
    /* +0x7d1907 */ __asm { CMP EAX,0x8d4bcf2a }
    /* +0x7d190c */ __asm { JNC 0x7fffa4f44326 }
    /* +0x7d1912 */ __asm { LEA R11,[0x7fffa477dd68] }
    /* +0x7d1919 */ __asm { MOV R9,-0x4cd6dc5a1cb537b8 }
    /* +0x7d1923 */ __asm { CMP R11,R9 }
    /* +0x7d1926 */ __asm { JZ 0x7fffa4f44335 }
    /* +0x7d192c */ __asm { MOV EAX,0x8a0c38bb }
    /* +0x7d1931 */ __asm { XOR EAX,R13D }
    /* +0x7d1934 */ __asm { NOT EAX }
    /* +0x7d1936 */ __asm { ROL EAX,0x1d }
    /* +0x7d1939 */ __asm { XOR EAX,EBX }
    /* +0x7d193b */ __asm { MOVSXD R9,EAX }
    /* +0x7d193e */ __asm { MOV EAX,0xed8404d6 }
    /* +0x7d1943 */ __asm { IMUL EAX,EAX,-0x4b50667d }
    /* +0x7d1949 */ __asm { MOV ECX,R13D }
    /* +0x7d194c */ __asm { ROR EAX,CL }
    /* +0x7d194e */ __asm { ADD R11,0x681e }
    /* +0x7d1955 */ __asm { SUB EAX,EBX }
    /* +0x7d1957 */ __asm { CMP RAX,R9 }
    /* +0x7d195a */ __asm { JA 0x7fffa4f419a3 }
    /* +0x7d195c */ __asm { MOV EAX,0xc889f4f }
    /* +0x7d1961 */ __asm { ADD EAX,EBX }
    /* +0x7d1963 */ __asm { IMUL R12D,EAX,-0x8bb2e39 }
    /* +0x7d196a */ __asm { XOR R12D,0x18a2a50a }
    /* +0x7d1971 */ __asm { MOV ECX,R13D }
    /* +0x7d1974 */ __asm { ROR R12D,CL }
    /* +0x7d1977 */ __asm { MOVZX R8D,uint8_t ptr [R11 + 0x9] }
    /* +0x7d197c */ __asm { MOVZX EDX,uint8_t ptr [R11 + R8*0x4 + 0x13] }
    /* +0x7d1982 */ __asm { NOT DL }
    /* +0x7d1984 */ __asm { ROL DL,0x3 }
    /* +0x7d1987 */ __asm { LEA R9,[R11 + R8*0x4] }
    /* +0x7d198b */ __asm { ADD R9,0x13 }
    /* +0x7d198f */ __asm { MOV uint8_t ptr [RSP + 0xa0],DL }
    /* +0x7d1996 */ __asm { MOVZX EAX,uint8_t ptr [R11 + R8*0x4 + 0x14] }
    /* +0x7d199c */ __asm { NOT AL }
    /* +0x7d199e */ __asm { JMP 0x7fffa4f41a23 }
    /* +0x7d19a3 */ __asm { MOV EAX,0xdb6e1d57 }
    /* +0x7d19a8 */ __asm { IMUL R12D,EAX,-0x26059b3d }
    /* +0x7d19af */ __asm { MOV EAX,0x63b18315 }
    /* +0x7d19b4 */ __asm { MOV ECX,0x3edd93de }
    /* +0x7d19b9 */ __asm { XOR R12D,R13D }
    /* +0x7d19bc */ __asm { ROL R12D,0x1e }
    /* +0x7d19c0 */ __asm { ADD R12D,EBX }
    /* +0x7d19c3 */ __asm { IMUL EAX,EBP }
    /* +0x7d19c6 */ __asm { XOR EAX,R13D }
    /* +0x7d19c9 */ __asm { ROL EAX,0xa }
    /* +0x7d19cc */ __asm { MOVZX R8D,uint8_t ptr [R11 + 0x9] }
    /* +0x7d19d1 */ __asm { MOVD XMM4,EBP }
    /* +0x7d19d5 */ __asm { LEA R9,[R11 + R8*0x4] }
    /* +0x7d19d9 */ __asm { ADD R9,0x13 }
    /* +0x7d19dd */ __asm { MOVZX EDX,uint8_t ptr [R11 + R8*0x4 + 0x13] }
    /* +0x7d19e3 */ __asm { MOVZX R10D,uint8_t ptr [R11 + R8*0x4 + 0x14] }
    /* +0x7d19e9 */ __asm { NOT DL }
    /* +0x7d19eb */ __asm { MOV R11D,R10D }
    /* +0x7d19ee */ __asm { ADD ECX,0x951afb3a }
    /* +0x7d19f4 */ __asm { MOVD XMM2,ECX }
    /* +0x7d19f8 */ __asm { PMULUDQ XMM2,XMM4 }
    /* +0x7d19fc */ __asm { MOVD ECX,XMM2 }
    /* +0x7d1a00 */ __asm { ROL ECX,0x6 }
    /* +0x7d1a03 */ __asm { NOT R11B }
    /* +0x7d1a06 */ __asm { NOT ECX }
    /* +0x7d1a08 */ __asm { ROL DL,0x3 }
    /* +0x7d1a0b */ __asm { DEC R10B }
    /* +0x7d1a0e */ __asm { CMP RCX,RAX }
    /* +0x7d1a11 */ __asm { MOV uint8_t ptr [RSP + 0xa0],DL }
    /* +0x7d1a18 */ __asm { MOVZX ECX,R11B }
    /* +0x7d1a1c */ __asm { MOVZX EAX,R10B }
    /* +0x7d1a20 */ __asm { CMOVGE EAX,ECX }
    /* +0x7d1a23 */ __asm { ROL AL,0x3 }
    /* +0x7d1a26 */ __asm { MOVZX EDX,uint8_t ptr [R9 + 0x3] }
    /* +0x7d1a2b */ __asm { NOT DL }
    /* +0x7d1a2d */ __asm { ROL DL,0x3 }
    /* +0x7d1a30 */ __asm { MOV uint8_t ptr [RSP + 0xa1],AL }
    /* +0x7d1a37 */ __asm { MOVZX R9D,uint8_t ptr [R9 + 0x2] }
    /* +0x7d1a3c */ __asm { MOV uint8_t ptr [RSP + 0xa3],DL }
    /* +0x7d1a43 */ __asm { NOT R9B }
    /* +0x7d1a46 */ __asm { ROL R9B,0x3 }
    /* +0x7d1a4a */ __asm { MOV uint8_t ptr [RSP + 0xa2],R9B }
    /* +0x7d1a52 */ __asm { MOV EAX,0x97cd0fa7 }
    /* +0x7d1a57 */ __asm { XOR EAX,dword ptr [RSP + 0xa0] }
    /* +0x7d1a5e */ __asm { BT EAX,EAX }
    /* +0x7d1a61 */ __asm { JC 0x7fffa4f4429b }
    /* +0x7d1a67 */ __asm { MOV dword ptr [RSP + 0xa0],0x6e9e094d }
    /* +0x7d1a72 */ __asm { MOV EAX,dword ptr [RSP + 0xa0] }
    /* +0x7d1a79 */ __asm { TEST AL,0x1 }
    /* +0x7d1a7b */ __asm { JZ 0x7fffa4f4433d }
    /* +0x7d1a81 */ __asm { MOV qword ptr [RSP + 0xf0],R15 }
    /* +0x7d1a89 */ __asm { MOV qword ptr [RSP + 0xe0],RSI }
    /* +0x7d1a91 */ __asm { MOV dword ptr [RSP + 0x13c],EBP }
    /* +0x7d1a98 */ __asm { LEA RDX,[0x7fffa478ad9a] }
    /* +0x7d1a9f */ __asm { MOV R9,-0x2ab80ec63b47c18b }
    /* +0x7d1aa9 */ __asm { CMP RDX,R9 }
    /* +0x7d1aac */ __asm { NOP }
    /* +0x7d1aad */ __asm { NOP }
    /* +0x7d1aae */ __asm { NOP }
    /* +0x7d1aaf */ __asm { NOP }
    /* +0x7d1ab0 */ __asm { NOP }
    /* +0x7d1ab1 */ __asm { NOP }
    /* +0x7d1ab2 */ __asm { NOP }
    /* +0x7d1ab3 */ __asm { NOP }
    /* +0x7d1ab4 */ __asm { NOP }
    /* +0x7d1ab5 */ __asm { NOP }
    /* +0x7d1ab6 */ __asm { NOP }
    /* +0x7d1ab7 */ __asm { NOP }
    /* +0x7d1ab8 */ __asm { MOV EBP,0x9319cefd }
    /* +0x7d1abd */ __asm { MOV R9D,0x13129503 }
    /* +0x7d1ac3 */ __asm { MOV R10D,0x6b5e5076 }
    /* +0x7d1ac9 */ __asm { MOV AX,0xe722 }
    /* +0x7d1acd */ __asm { XOR EAX,R12D }
    /* +0x7d1ad0 */ __asm { ROR AX,0x1 }
    /* +0x7d1ad3 */ __asm { NOT EAX }
    /* +0x7d1ad5 */ __asm { MOV ECX,R14D }
    /* +0x7d1ad8 */ __asm { IMUL ECX,EAX }
    /* +0x7d1adb */ __asm { MOV dword ptr [RSP + 0x98],ECX }
    /* +0x7d1ae2 */ __asm { MOV EAX,0xb916e593 }
    /* +0x7d1ae7 */ __asm { ADD R9D,0x6e958d65 }
    /* +0x7d1aee */ __asm { MOV ECX,EBX }
    /* +0x7d1af0 */ __asm { ROL R9D,CL }
    /* +0x7d1af3 */ __asm { SUB EAX,EBX }
    /* +0x7d1af5 */ __asm { SUB R9D,R12D }
    /* +0x7d1af8 */ __asm { ADD R9D,0x164ecd65 }
    /* +0x7d1aff */ __asm { IMUL R9D,R14D }
    /* +0x7d1b03 */ __asm { MOV qword ptr [RSP + 0x118],R9 }
    /* +0x7d1b0b */ __asm { IMUL EAX,EAX,0x14fd8863 }
    /* +0x7d1b11 */ __asm { ADD EAX,0xc917f1b9 }
    /* +0x7d1b16 */ __asm { XOR EAX,R13D }
    /* +0x7d1b19 */ __asm { CDQE }
    /* +0x7d1b1b */ __asm { MOV qword ptr [RSP + 0x88],R12 }
    /* +0x7d1b23 */ __asm { MOV dword ptr [RSP + 0x14c],R14D }
    /* +0x7d1b2b */ __asm { MOV R15,qword ptr [RAX + RDX*0x1 + 0x10] }
    /* +0x7d1b30 */ __asm { MOV R8,R15 }
    /* +0x7d1b33 */ __asm { SHL R8,0x5 }
    /* +0x7d1b37 */ __asm { MOV ECX,R15D }
    /* +0x7d1b3a */ __asm { AND ECX,0x30000 }
    /* +0x7d1b40 */ __asm { SHL RCX,0x12 }
    /* +0x7d1b44 */ __asm { MOV R11D,R15D }
    /* +0x7d1b47 */ __asm { AND R11D,0x1 }
    /* +0x7d1b4b */ __asm { SHL R11D,0x1d }
    /* +0x7d1b4f */ __asm { MOV R12D,R15D }
    /* +0x7d1b52 */ __asm { AND R12D,0x3000 }
    /* +0x7d1b59 */ __asm { SHL R12,0x14 }
    /* +0x7d1b5d */ __asm { OR R12,R11 }
    /* +0x7d1b60 */ __asm { OR R12,RCX }
    /* +0x7d1b63 */ __asm { LEA R11,[R15 + R15*0x1] }
    /* +0x7d1b67 */ __asm { MOV R9,0x80000000000 }
    /* +0x7d1b71 */ __asm { AND R9,R11 }
    /* +0x7d1b74 */ __asm { MOV qword ptr [RSP + 0xf8],R9 }
    /* +0x7d1b7c */ __asm { MOV R9,0x8000000000 }
    /* +0x7d1b86 */ __asm { AND R9,R8 }
    /* +0x7d1b89 */ __asm { MOV qword ptr [RSP + 0x58],R9 }
    /* +0x7d1b8e */ __asm { MOV ECX,R15D }
    /* +0x7d1b91 */ __asm { AND ECX,0x80000 }
    /* +0x7d1b97 */ __asm { SHL RCX,0x11 }
    /* +0x7d1b9b */ __asm { OR RCX,R12 }
    /* +0x7d1b9e */ __asm { MOV R11D,R15D }
    /* +0x7d1ba1 */ __asm { AND R11D,0x200000 }
    /* +0x7d1ba8 */ __asm { SHL R11,0x10 }
    /* +0x7d1bac */ __asm { OR R11,RCX }
    /* +0x7d1baf */ __asm { MOV RSI,qword ptr [RAX + RDX*0x1] }
    /* +0x7d1bb3 */ __asm { MOV R9,qword ptr [RAX + RDX*0x1 + 0x8] }
    /* +0x7d1bb8 */ __asm { MOV R8,RSI }
    /* +0x7d1bbb */ __asm { MOV qword ptr [RSP + 0xd8],RSI }
    /* +0x7d1bc3 */ __asm { MOV ECX,ESI }
    /* +0x7d1bc5 */ __asm { SHR ECX,0xf }
    /* +0x7d1bc8 */ __asm { AND ECX,0x2 }
    /* +0x7d1bcb */ __asm { MOV RDI,RSI }
    /* +0x7d1bce */ __asm { MOV EAX,ESI }
    /* +0x7d1bd0 */ __asm { AND EAX,0x1 }
    /* +0x7d1bd3 */ __asm { OR RAX,RCX }
    /* +0x7d1bd6 */ __asm { MOV ECX,ESI }
    /* +0x7d1bd8 */ __asm { SHR ECX,0x11 }
    /* +0x7d1bdb */ __asm { AND ECX,0xc }
    /* +0x7d1bde */ __asm { OR RAX,RCX }
    /* +0x7d1be1 */ __asm { MOV R12,RSI }
    /* +0x7d1be4 */ __asm { MOV qword ptr [RSP + 0x78],RSI }
    /* +0x7d1be9 */ __asm { MOV qword ptr [RSP + 0x120],RSI }
    /* +0x7d1bf1 */ __asm { MOV EDX,ESI }
    /* +0x7d1bf3 */ __asm { MOV qword ptr [RSP + 0x68],RSI }
    /* +0x7d1bf8 */ __asm { SHR ESI,0x12 }
    /* +0x7d1bfb */ __asm { AND ESI,0x10 }
    /* +0x7d1bfe */ __asm { OR RSI,RAX }
    /* +0x7d1c01 */ __asm { XOR R10D,dword ptr [RSP + 0x88] }
    /* +0x7d1c09 */ __asm { ADD R10D,EBX }
    /* +0x7d1c0c */ __asm { ADD EBP,0xb597ec0b }
    /* +0x7d1c12 */ __asm { MOV RCX,qword ptr [RSP + 0x88] }
    /* +0x7d1c1a */ __asm { ROL EBP,CL }
    /* +0x7d1c1c */ __asm { IMUL EBP,R14D }
    /* +0x7d1c20 */ __asm { MOV qword ptr [RSP + 0x80],R13 }
    /* +0x7d1c28 */ __asm { MOV ECX,R13D }
    /* +0x7d1c2b */ __asm { ROR R10D,CL }
    /* +0x7d1c2e */ __asm { ADD EBP,0xbf4af0e7 }
    /* +0x7d1c34 */ __asm { MOV dword ptr [RSP + 0x44],EBP }
    /* +0x7d1c38 */ __asm { LEA RCX,[R15*0x4] }
    /* +0x7d1c40 */ __asm { MOV RAX,0x70000000000 }
    /* +0x7d1c4a */ __asm { AND RCX,RAX }
    /* +0x7d1c4d */ __asm { MOV EAX,R15D }
    /* +0x7d1c50 */ __asm { SHL EAX,0x18 }
    /* +0x7d1c53 */ __asm { SHR R8,0x27 }
    /* +0x7d1c57 */ __asm { MOV qword ptr [RSP + 0x50],R8 }
    /* +0x7d1c5c */ __asm { MOV R8,qword ptr [RSP + 0xd8] }
    /* +0x7d1c64 */ __asm { SHR R8,0x1d }
    /* +0x7d1c68 */ __asm { SHR RDI,0x1f }
    /* +0x7d1c6c */ __asm { SHR R12,0x2c }
    /* +0x7d1c70 */ __asm { AND R12D,0x8000 }
    /* +0x7d1c77 */ __asm { MOV qword ptr [RSP + 0x128],R12 }
    /* +0x7d1c7f */ __asm { AND R8D,0x80 }
    /* +0x7d1c86 */ __asm { MOV qword ptr [RSP + 0xd8],R8 }
    /* +0x7d1c8e */ __asm { SHR qword ptr [RSP + 0x78],0x23 }
    /* +0x7d1c94 */ __asm { SHR qword ptr [RSP + 0x120],0x29 }
    /* +0x7d1c9d */ __asm { SHR EDX,0x15 }
    /* +0x7d1ca0 */ __asm { MOV qword ptr [RSP + 0x90],RDX }
    /* +0x7d1ca8 */ __asm { MOV RDX,qword ptr [RSP + 0x68] }
    /* +0x7d1cad */ __asm { SHR RDX,0x1c }
    /* +0x7d1cb1 */ __asm { AND EDX,0x40 }
    /* +0x7d1cb4 */ __asm { MOV qword ptr [RSP + 0x68],RDX }
    /* +0x7d1cb9 */ __asm { MOV R12D,R9D }
    /* +0x7d1cbc */ __asm { SHR R12D,0x8 }
    /* +0x7d1cc0 */ __asm { MOV R8D,R9D }
    /* +0x7d1cc3 */ __asm { SHR R8D,0x4 }
    /* +0x7d1cc7 */ __asm { MOV R13,R9 }
    /* +0x7d1cca */ __asm { SHR R13,0x20 }
    /* +0x7d1cce */ __asm { MOV EDX,R9D }
    /* +0x7d1cd1 */ __asm { AND EDX,0x80000 }
    /* +0x7d1cd7 */ __asm { MOV qword ptr [RSP + 0x48],RDX }
    /* +0x7d1cdc */ __asm { MOV qword ptr [RSP + 0x60],RBX }
    /* +0x7d1ce1 */ __asm { MOV R14D,R9D }
    /* +0x7d1ce4 */ __asm { SHR R14D,0x3 }
    /* +0x7d1ce8 */ __asm { MOV RBX,R9 }
    /* +0x7d1ceb */ __asm { SHR RBX,0x21 }
    /* +0x7d1cef */ __asm { MOV RBP,R9 }
    /* +0x7d1cf2 */ __asm { SHR RBP,0x18 }
    /* +0x7d1cf6 */ __asm { AND EBP,0x4000000 }
    /* +0x7d1cfc */ __asm { AND EBX,0x10000000 }
    /* +0x7d1d02 */ __asm { AND R14D,0x300000 }
    /* +0x7d1d09 */ __asm { AND R13D,0x8000000 }
    /* +0x7d1d10 */ __asm { AND R12D,0x800000 }
    /* +0x7d1d17 */ __asm { MOV RDX,R9 }
    /* +0x7d1d1a */ __asm { SHR RDX,0x12 }
    /* +0x7d1d1e */ __asm { AND EDX,0x2000000 }
    /* +0x7d1d24 */ __asm { MOV qword ptr [RSP + 0x130],RDX }
    /* +0x7d1d2c */ __asm { AND EDI,0x100 }
    /* +0x7d1d32 */ __asm { ADD R10D,0x742ba9a4 }
    /* +0x7d1d39 */ __asm { CMP R10,0x56319770 }
    /* +0x7d1d40 */ __asm { MOV R10,0x70000000000 }
    /* +0x7d1d4a */ __asm { LEA R10,[R10 + R15*0x4] }
    /* +0x7d1d4e */ __asm { CMOVZ R10,RCX }
    /* +0x7d1d52 */ __asm { MOVQ XMM4,R10 }
    /* +0x7d1d57 */ __asm { AND R15D,0x2000000 }
    /* +0x7d1d5e */ __asm { SHL R15,0xd }
    /* +0x7d1d62 */ __asm { OR R15,R11 }
    /* +0x7d1d65 */ __asm { ADD R15,qword ptr [RSP + 0x58] }
    /* +0x7d1d6a */ __asm { OR R15,qword ptr [RSP + 0xf8] }
    /* +0x7d1d72 */ __asm { MOVQ XMM2,R15 }
    /* +0x7d1d77 */ __asm { MOV R15,qword ptr [RSP + 0x88] }
    /* +0x7d1d7f */ __asm { MOV ECX,0x993826f9 }
    /* +0x7d1d84 */ __asm { IMUL R11D,ECX,0x5cc0d189 }
    /* +0x7d1d8b */ __asm { ADD R11D,0x413ccd35 }
    /* +0x7d1d92 */ __asm { IMUL R11D,dword ptr [RSP + 0x14c] }
    /* +0x7d1d9b */ __asm { SUB R11D,dword ptr [RSP + 0x60] }
    /* +0x7d1da0 */ __asm { MOV ECX,R15D }
    /* +0x7d1da3 */ __asm { ROL R11D,CL }
    /* +0x7d1da6 */ __asm { AND R11D,EAX }
    /* +0x7d1da9 */ __asm { AND R8D,0x400000 }
    /* +0x7d1db0 */ __asm { OR R8,R14 }
    /* +0x7d1db3 */ __asm { MOV R14,qword ptr [RSP + 0x60] }
    /* +0x7d1db8 */ __asm { OR R8,R12 }
    /* +0x7d1dbb */ __asm { MOV RAX,R9 }
    /* +0x7d1dbe */ __asm { SHR RAX,0xd }
    /* +0x7d1dc2 */ __asm { AND EAX,0x1000000 }
    /* +0x7d1dc7 */ __asm { OR R8,RAX }
    /* +0x7d1dca */ __asm { OR R11,qword ptr [RSP + 0x48] }
    /* +0x7d1dcf */ __asm { MOVD XMM0,R9D }
    /* +0x7d1dd4 */ __asm { MOV EDX,R9D }
    /* +0x7d1dd7 */ __asm { AND EDX,0x10 }
    /* +0x7d1dda */ __asm { SHL EDX,0xc }
    /* +0x7d1ddd */ __asm { OR R11,RDX }
    /* +0x7d1de0 */ __asm { POR XMM2,XMM4 }
    /* +0x7d1de4 */ __asm { MOVQ R10,XMM2 }
    /* +0x7d1de9 */ __asm { OR R11,R10 }
    /* +0x7d1dec */ __asm { MOVQ XMM4,R11 }
    /* +0x7d1df1 */ __asm { PSLLD XMM0,0x8 }
    /* +0x7d1df6 */ __asm { PAND XMM0,xmmword ptr [0x7fffa56bc5b0] }
    /* +0x7d1dfe */ __asm { POR XMM4,XMM0 }
    /* +0x7d1e02 */ __asm { MOVQ R10,XMM4 }
    /* +0x7d1e07 */ __asm { OR R10,R8 }
    /* +0x7d1e0a */ __asm { OR R13,RBP }
    /* +0x7d1e0d */ __asm { OR R13,RBX }
    /* +0x7d1e10 */ __asm { MOV RAX,qword ptr [RSP + 0x90] }
    /* +0x7d1e18 */ __asm { AND EAX,0x20 }
    /* +0x7d1e1b */ __asm { OR RAX,RSI }
    /* +0x7d1e1e */ __asm { ADD RAX,qword ptr [RSP + 0x68] }
    /* +0x7d1e23 */ __asm { MOV R9,RAX }
    /* +0x7d1e26 */ __asm { OR RDI,qword ptr [RSP + 0xd8] }
    /* +0x7d1e2e */ __asm { MOV RAX,qword ptr [RSP + 0x78] }
    /* +0x7d1e33 */ __asm { AND EAX,0x600 }
    /* +0x7d1e38 */ __asm { OR RDI,RAX }
    /* +0x7d1e3b */ __asm { MOV RAX,qword ptr [RSP + 0x50] }
    /* +0x7d1e40 */ __asm { AND EAX,0x3800 }
    /* +0x7d1e45 */ __asm { OR RDI,RAX }
    /* +0x7d1e48 */ __asm { MOV RAX,qword ptr [RSP + 0x120] }
    /* +0x7d1e50 */ __asm { AND EAX,0x4000 }
    /* +0x7d1e55 */ __asm { OR RDI,RAX }
    /* +0x7d1e58 */ __asm { OR RDI,R9 }
    /* +0x7d1e5b */ __asm { MOV R11,RDI }
    /* +0x7d1e5e */ __asm { MOV R9,qword ptr [RSP + 0x128] }
    /* +0x7d1e66 */ __asm { OR R11,R9 }
    /* +0x7d1e69 */ __asm { ADD RDI,R9 }
    /* +0x7d1e6c */ __asm { MOV ECX,R14D }
    /* +0x7d1e6f */ __asm { MOV EAX,dword ptr [RSP + 0x44] }
    /* +0x7d1e73 */ __asm { ROR EAX,CL }
    /* +0x7d1e75 */ __asm { CDQE }
    /* +0x7d1e77 */ __asm { CMP RAX,qword ptr [RSP + 0x118] }
    /* +0x7d1e7f */ __asm { MOVD XMM4,dword ptr [RSP + 0x130] }
    /* +0x7d1e88 */ __asm { MOVQ XMM2,R10 }
    /* +0x7d1e8d */ __asm { CMOVNC RDI,R11 }
    /* +0x7d1e91 */ __asm { POR XMM2,XMM4 }
    /* +0x7d1e95 */ __asm { OR RDI,R13 }
    /* +0x7d1e98 */ __asm { MOV R13,RDI }
    /* +0x7d1e9b */ __asm { MOVQ R9,XMM2 }
    /* +0x7d1ea0 */ __asm { MOV EAX,dword ptr [RSP + 0x98] }
    /* +0x7d1ea7 */ __asm { NOT EAX }
    /* +0x7d1ea9 */ __asm { MOVZX EAX,AX }
    /* +0x7d1eac */ __asm { OR R13,R9 }
    /* +0x7d1eaf */ __asm { SHL R13,0x4 }
    /* +0x7d1eb3 */ __asm { MOV R12,qword ptr GS:[RAX] }
    /* +0x7d1eb7 */ __asm { MOV EAX,dword ptr [R13] }
    /* +0x7d1ebb */ __asm { CMP EAX,R12D }
    /* +0x7d1ebe */ __asm { JZ 0x7fffa4f41ece }
    /* +0x7d1ec0 */ __asm { LEA RCX,[R13 + 0x8] }
    /* +0x7d1ec4 */ __asm { CALL qword ptr [0x7fffa5877480] }
    /* +0x7d1eca */ __asm { XCHG dword ptr [R13],R12D }
    /* +0x7d1ece */ __asm { MOV AX,0xb460 }
    /* +0x7d1ed2 */ __asm { MOV EDX,R14D }
    /* +0x7d1ed5 */ __asm { XOR EDX,EAX }
    /* +0x7d1ed7 */ __asm { MOV RSI,qword ptr [RSP + 0x80] }
    /* +0x7d1edf */ __asm { XOR EDX,ESI }
    /* +0x7d1ee1 */ __asm { NOT EDX }
    /* +0x7d1ee3 */ __asm { MOV ECX,R15D }
    /* +0x7d1ee6 */ __asm { ROL DX,CL }
}


// ============================================================================
// Function : FUN_7fffa4f444c0  |  RVA: 0x7d44c0  |  Size: 254 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4f444c0(void)

{
  uRam00007fffa47bb1f8 = 0;
  uRam00007fffa47bb1e8 = 1;
  puRam00007fffa47bb1f0 = &UNK_7fffa56ee720;
  uRam00007fffa47bb1e0 = 0x3f;
  uRam00007fffa47bb200 = 0;
  uRam00007fffa47bb208 = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa4f445c0  |  RVA: 0x7d45c0  |  Size: 570 bytes
// Callers  : none
// Callees  : FUN_7fffa56606b8@0xef06b8, FUN_7fffa55ca84c@0xe5a84c, FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa52679b8@0xaf79b8, FUN_7fffa51450e0@0x9d50e0, FUN_7fffa50c8f60@0x958f60
// ============================================================================
uint64_t FUN_7fffa4f445c0(int64_t *param_1,int64_t *param_2)

{
  code *pcVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t *puVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lStackX_10;
  int64_t lStackX_18;
  int64_t lStackX_20;
  int64_t *plStack_58;
  int64_t *plStack_50;
  uint64_t uStack_48;
  
  if (param_2 == (int64_t *)0x0) {
    puVar4 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar4 = 0x16;
    FUN_7fffa55c8ce0();
    uVar6 = 0x16;
  }
  else {
    *param_2 = 0;
    lVar8 = *param_1;
    plStack_58 = (int64_t *)0x0;
    plStack_50 = (int64_t *)0x0;
    uStack_48 = 0;
    while (plVar9 = plStack_50, plVar10 = plStack_58, lVar8 != 0) {
      lStackX_10 = CONCAT53(lStackX_10._3_5_,0x3f2a);
      lVar8 = FUN_7fffa50c8f60(lVar8,&lStackX_10);
      if (lVar8 == 0) {
        uVar2 = FUN_7fffa56606b8(*param_1,0,0,&plStack_58);
        plVar10 = plStack_58;
        uVar6 = (uint64_t)uVar2;
        if (uVar2 != 0) {
          plVar9 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_7fffa52d8dd0(*plVar9);
              plVar9 = plVar9 + 1;
            } while (plVar9 != plStack_50);
          }
          goto LAB_7fffa4f4470f;
        }
      }
      else {
        uVar2 = FUN_7fffa55ca84c(*param_1,lVar8,&plStack_58);
        plVar10 = plStack_58;
        uVar6 = (uint64_t)uVar2;
        if (uVar2 != 0) {
          plVar9 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_7fffa52d8dd0(*plVar9);
              plVar9 = plVar9 + 1;
            } while (plVar9 != plStack_50);
          }
          goto LAB_7fffa4f4470f;
        }
      }
      param_1 = param_1 + 1;
      lVar8 = *param_1;
    }
    lVar8 = 0;
    lStackX_18 = 0;
    lVar11 = ((int64_t)plStack_50 - (int64_t)plStack_58 >> 3) + 1;
    plVar5 = plStack_58;
    if (plStack_58 != plStack_50) {
      do {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(*plVar5 + lVar7) != '\0');
        plVar5 = plVar5 + 1;
        lVar8 = lVar8 + 1 + lVar7;
      } while (plVar5 != plStack_50);
      lStackX_18 = lVar8;
    }
    lVar8 = FUN_7fffa52679b8(lVar11,lStackX_18,1);
    if (lVar8 == 0) {
      FUN_7fffa52d8dd0(0);
      for (plVar5 = plVar10; plVar5 != plVar9; plVar5 = plVar5 + 1) {
        FUN_7fffa52d8dd0(*plVar5);
      }
      uVar6 = 0xffffffff;
LAB_7fffa4f4470f:
      FUN_7fffa52d8dd0(plVar10);
    }
    else {
      lVar11 = lVar8 + lVar11 * 8;
      lStackX_20 = lVar11;
      if (plVar10 != plVar9) {
        lStackX_10 = lVar8 - (int64_t)plVar10;
        plVar5 = plVar10;
        do {
          lVar7 = -1;
          do {
            lVar12 = lVar7;
            lVar7 = lVar12 + 1;
          } while (*(char *)(*plVar5 + lVar7) != '\0');
          lVar12 = lVar12 + 2;
          iVar3 = FUN_7fffa51450e0(lVar11,(lStackX_20 - lVar11) + lStackX_18,*plVar5,lVar12);
          if (iVar3 != 0) {
            FUN_7fffa52d0cd4(0,0,0,0,0);
            pcVar1 = (code *)__debugbreak();
            uVar6 = (*pcVar1)();
            return uVar6;
          }
          *(int64_t *)(lStackX_10 + (int64_t)plVar5) = lVar11;
          lVar11 = lVar11 + lVar12;
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar9);
      }
      *param_2 = lVar8;
      FUN_7fffa52d8dd0(0);
      for (plVar5 = plVar10; plVar5 != plVar9; plVar5 = plVar5 + 1) {
        FUN_7fffa52d8dd0(*plVar5);
      }
      FUN_7fffa52d8dd0(plVar10);
      uVar6 = 0;
    }
  }
  return uVar6;
}


// ============================================================================
// Function : FUN_7fffa4f44890  |  RVA: 0x7d4890  |  Size: 2715 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4f44890(void) {
    /* +0x7d4890 */ __asm { PUSH RBP }
    /* +0x7d4891 */ __asm { PUSH RBX }
    /* +0x7d4892 */ __asm { PUSH R15 }
    /* +0x7d4894 */ __asm { PUSH R14 }
    /* +0x7d4896 */ __asm { PUSH RDI }
    /* +0x7d4897 */ __asm { PUSH RSI }
    /* +0x7d4898 */ __asm { PUSH R13 }
    /* +0x7d489a */ __asm { PUSH R12 }
    /* +0x7d489c */ __asm { SUB RSP,0x6c8 }
    /* +0x7d48a3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x7d48ab */ __asm { MOVDQA xmmword ptr [RBP + 0x630],XMM13 }
    /* +0x7d48b4 */ __asm { MOVDQA xmmword ptr [RBP + 0x620],XMM9 }
    /* +0x7d48bd */ __asm { MOVDQA xmmword ptr [RBP + 0x610],XMM7 }
    /* +0x7d48c5 */ __asm { MOVAPS xmmword ptr [RBP + 0x600],XMM14 }
    /* +0x7d48cd */ __asm { MOVDQA xmmword ptr [RBP + 0x5f0],XMM12 }
    /* +0x7d48d6 */ __asm { MOVDQA xmmword ptr [RBP + 0x5e0],XMM8 }
    /* +0x7d48df */ __asm { MOVDQA xmmword ptr [RBP + 0x5d0],XMM15 }
    /* +0x7d48e8 */ __asm { MOVDQA xmmword ptr [RBP + 0x5c0],XMM10 }
    /* +0x7d48f1 */ __asm { MOVDQA xmmword ptr [RBP + 0x5b0],XMM11 }
    /* +0x7d48fa */ __asm { MOVDQA xmmword ptr [RBP + 0x5a0],XMM6 }
    /* +0x7d4902 */ __asm { MOV qword ptr [RBP + 0x598],-0x2 }
    /* +0x7d490d */ __asm { MOV R14,RCX }
    /* +0x7d4910 */ __asm { MOV qword ptr [RBP + 0x4f0],R11 }
    /* +0x7d4917 */ __asm { MOV R8,R10 }
    /* +0x7d491a */ __asm { SHR R8,0x37 }
    /* +0x7d491e */ __asm { XOR R8,R10 }
    /* +0x7d4921 */ __asm { MOV RAX,R8 }
    /* +0x7d4924 */ __asm { SHL RAX,0x3f }
    /* +0x7d4928 */ __asm { MOVQ XMM3,RAX }
    /* +0x7d492d */ __asm { MOVQ XMM0,R8 }
    /* +0x7d4932 */ __asm { PSRLQ XMM3,0x20 }
    /* +0x7d4937 */ __asm { PMULUDQ XMM3,XMM0 }
    /* +0x7d493b */ __asm { MOV EDX,0xbc212c61 }
    /* +0x7d4940 */ __asm { ADD EDX,0x139faa1a }
    /* +0x7d4946 */ __asm { ROR EDX,CL }
    /* +0x7d4948 */ __asm { PSLLQ XMM3,0x20 }
    /* +0x7d494d */ __asm { XOR RAX,R8 }
    /* +0x7d4950 */ __asm { MOV R10D,0xcfc0d67b }
    /* +0x7d4956 */ __asm { CMP RDX,R10 }
    /* +0x7d4959 */ __asm { MOVQ R10,XMM3 }
    /* +0x7d495e */ __asm { CMOVZ R10,RAX }
    /* +0x7d4962 */ __asm { MOV RAX,qword ptr [R10] }
    /* +0x7d4965 */ __asm { MOV qword ptr [RBP + -0x40],RAX }
    /* +0x7d4969 */ __asm { MOV dword ptr [RBP + 0x370],0xff57ddbd }
    /* +0x7d4973 */ __asm { MOV R11D,dword ptr [RBP + 0x370] }
    /* +0x7d497a */ __asm { MOV R11W,0x127 }
    /* +0x7d497f */ __asm { IMUL R11D,R11D,0x6f1 }
    /* +0x7d4986 */ __asm { NOT R11D }
    /* +0x7d4989 */ __asm { MOVZX ECX,R11W }
    /* +0x7d498d */ __asm { MOV RSI,qword ptr GS:[RCX] }
    /* +0x7d4991 */ __asm { MOV R11D,0x586e4668 }
    /* +0x7d4997 */ __asm { IMUL R11D,R11D,-0x4f7e1cdb }
    /* +0x7d499e */ __asm { NOT R11D }
    /* +0x7d49a1 */ __asm { ADD R11D,R14D }
    /* +0x7d49a4 */ __asm { LEA RAX,[0x7fffa47cce59] }
    /* +0x7d49ab */ __asm { MOVSXD R9,R11D }
    /* +0x7d49ae */ __asm { MOV R11D,dword ptr [RAX + R9*0x1] }
    /* +0x7d49b2 */ __asm { CMP R11D,ESI }
    /* +0x7d49b5 */ __asm { JZ 0x7fffa4f449f8 }
    /* +0x7d49b7 */ __asm { MOV CX,0x69 }
    /* +0x7d49bb */ __asm { NOT ECX }
    /* +0x7d49bd */ __asm { LEA RBX,[0x7fffa47c5101] }
    /* +0x7d49c4 */ __asm { MOV R13W,0xb58f }
    /* +0x7d49c9 */ __asm { LEA RAX,[0x7fffa47c69ba] }
    /* +0x7d49d0 */ __asm { ADD ECX,R14D }
    /* +0x7d49d3 */ __asm { MOVSX R9,CX }
    /* +0x7d49d7 */ __asm { LEA RCX,[RAX + R9*0x1] }
    /* +0x7d49db */ __asm { ADD RCX,0x8 }
    /* +0x7d49df */ __asm { CALL qword ptr [0x7fffa5877480] }
    /* +0x7d49e5 */ __asm { ADD R13D,R14D }
    /* +0x7d49e8 */ __asm { NOT R13D }
    /* +0x7d49eb */ __asm { ROL R13W,0x6 }
    /* +0x7d49f0 */ __asm { MOVSX R9,R13W }
    /* +0x7d49f4 */ __asm { XCHG dword ptr [RBX + R9*0x1],ESI }
    /* +0x7d49f8 */ __asm { MOV EDI,R14D }
    /* +0x7d49fb */ __asm { LEA RAX,[0x7fffa47bb56c] }
    /* +0x7d4a02 */ __asm { MOV R11W,0x60d }
    /* +0x7d4a07 */ __asm { LEA R10,[0x7fffa47c9b67] }
    /* +0x7d4a0e */ __asm { LEA R8,[0x7fffa47c38bd] }
    /* +0x7d4a15 */ __asm { LEA R9,[0x7fffa47c2d46] }
    /* +0x7d4a1c */ __asm { MOV DX,0x14ee }
    /* +0x7d4a20 */ __asm { MOV R13D,0xa53a71e9 }
    /* +0x7d4a26 */ __asm { ADD R13D,R14D }
    /* +0x7d4a29 */ __asm { ROL R13D,0x6 }
    /* +0x7d4a2d */ __asm { ADD R11D,0xffff9c46 }
    /* +0x7d4a34 */ __asm { MOV ECX,R14D }
    /* +0x7d4a37 */ __asm { ROR R11W,CL }
    /* +0x7d4a3b */ __asm { OR EDI,0x1 }
    /* +0x7d4a3e */ __asm { MOVSXD RCX,R13D }
    /* +0x7d4a41 */ __asm { MOVSX R11,R11W }
    /* +0x7d4a45 */ __asm { XOR R11,0x65b9 }
    /* +0x7d4a4c */ __asm { MOV R13D,0x69fbeb72 }
    /* +0x7d4a52 */ __asm { XOR R13D,R14D }
    /* +0x7d4a55 */ __asm { MOVSXD R12,R13D }
    /* +0x7d4a58 */ __asm { XOR R12,0x1cc1395b }
    /* +0x7d4a5f */ __asm { MOV R11D,dword ptr [R9 + R11*0x1 + 0x4] }
    /* +0x7d4a64 */ __asm { INC R11D }
    /* +0x7d4a67 */ __asm { MOV dword ptr [R10 + R12*0x1 + 0x4],R11D }
    /* +0x7d4a6c */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x1 + 0xf] }
    /* +0x7d4a72 */ __asm { ADD EDX,0x698e }
    /* +0x7d4a78 */ __asm { XOR EDX,R14D }
    /* +0x7d4a7b */ __asm { MOVSX R10,DX }
    /* +0x7d4a7f */ __asm { ADD R10,RAX }
    /* +0x7d4a82 */ __asm { MOV RAX,qword ptr [R10 + R9*0x8 + 0x1f] }
    /* +0x7d4a87 */ __asm { MOV qword ptr [RBP + 0x370],RAX }
    /* +0x7d4a8e */ __asm { CMP qword ptr [RBP + 0x370],0x0 }
    /* +0x7d4a96 */ __asm { MOVD XMM14,R14D }
    /* +0x7d4a9b */ __asm { MOV RSI,R14 }
    /* +0x7d4a9e */ __asm { JNZ 0x7fffa4f44df9 }
    /* +0x7d4aa4 */ __asm { MOV R10D,0xaac534c5 }
    /* +0x7d4aaa */ __asm { MOV R11D,0x8e948662 }
    /* +0x7d4ab0 */ __asm { MOV R8W,0x25a5 }
    /* +0x7d4ab5 */ __asm { LEA RAX,[0x7fffa47c5853] }
    /* +0x7d4abc */ __asm { IMUL EDX,R11D,-0x391cd15b }
    /* +0x7d4ac3 */ __asm { MOV R9D,ESI }
    /* +0x7d4ac6 */ __asm { OR R9D,0x1 }
    /* +0x7d4aca */ __asm { LEA RCX,[0x7fffa47bc4ae] }
    /* +0x7d4ad1 */ __asm { IMUL R8D,R8D,0x39c1 }
    /* +0x7d4ad8 */ __asm { NOT R8D }
    /* +0x7d4adb */ __asm { MOV R11D,0xcca29329 }
    /* +0x7d4ae1 */ __asm { IMUL R11D,EDI }
    /* +0x7d4ae5 */ __asm { IMUL R11D,R11D,0x43cae6bf }
    /* +0x7d4aec */ __asm { LEA RBX,[0x7fffa47c6e3f] }
    /* +0x7d4af3 */ __asm { IMUL R8D,R9D }
    /* +0x7d4af7 */ __asm { MOVSX R12,R8W }
    /* +0x7d4afb */ __asm { IMUL R10D,R10D,-0xca1d229 }
    /* +0x7d4b02 */ __asm { XOR R10D,ESI }
    /* +0x7d4b05 */ __asm { ROR R10D,0x1 }
    /* +0x7d4b08 */ __asm { MOVSXD R8,R10D }
    /* +0x7d4b0b */ __asm { ADD R8,RBX }
    /* +0x7d4b0e */ __asm { LEA R10,[0x7fffa47c7c23] }
    /* +0x7d4b15 */ __asm { NOT EDX }
    /* +0x7d4b17 */ __asm { ADD EDX,ESI }
    /* +0x7d4b19 */ __asm { MOVSXD R9,EDX }
    /* +0x7d4b1c */ __asm { ADD R9,RAX }
    /* +0x7d4b1f */ __asm { RDTSC }
    /* +0x7d4b21 */ __asm { SHL RDX,0x20 }
    /* +0x7d4b25 */ __asm { OR RDX,RAX }
    /* +0x7d4b28 */ __asm { MOV R13,RSI }
    /* +0x7d4b2b */ __asm { MOV RSI,0x7facc0f7a00541bd }
    /* +0x7d4b35 */ __asm { IMUL RDX,RSI }
    /* +0x7d4b39 */ __asm { MOVZX ECX,uint8_t ptr [RCX + R12*0x1 + 0xf] }
    /* +0x7d4b3f */ __asm { IMUL EAX,ECX,0x33333334 }
    /* +0x7d4b45 */ __asm { ADD EAX,0x33333334 }
    /* +0x7d4b4a */ __asm { LEA RAX,[RAX + RAX*0x4] }
    /* +0x7d4b4e */ __asm { SHR RAX,0x20 }
    /* +0x7d4b52 */ __asm { LEA R14D,[RAX*0x8] }
    /* +0x7d4b5a */ __asm { MOV RCX,0x72f9a656d9bc8532 }
    /* +0x7d4b64 */ __asm { ADD RCX,RDX }
    /* +0x7d4b67 */ __asm { MOV RDX,RCX }
    /* +0x7d4b6a */ __asm { SHR RDX,0x1b }
    /* +0x7d4b6e */ __asm { MOV RBX,RCX }
    /* +0x7d4b71 */ __asm { SHR RBX,0x2d }
    /* +0x7d4b75 */ __asm { XOR EDX,EBX }
    /* +0x7d4b77 */ __asm { IMUL RSI,RCX }
    /* +0x7d4b7b */ __asm { SHR RCX,0x3b }
    /* +0x7d4b7f */ __asm { ROR EDX,CL }
    /* +0x7d4b81 */ __asm { MOVD XMM3,EDX }
    /* +0x7d4b85 */ __asm { PSLLQ XMM3,0x20 }
    /* +0x7d4b8a */ __asm { ADD RSI,0x2d713387 }
    /* +0x7d4b91 */ __asm { MOV RDX,RSI }
    /* +0x7d4b94 */ __asm { SHR RDX,0x2d }
    /* +0x7d4b98 */ __asm { MOV RCX,RSI }
    /* +0x7d4b9b */ __asm { SHR RCX,0x3b }
    /* +0x7d4b9f */ __asm { SHR RSI,0x1b }
    /* +0x7d4ba3 */ __asm { XOR ESI,EDX }
    /* +0x7d4ba5 */ __asm { ROR ESI,CL }
    /* +0x7d4ba7 */ __asm { MOVD XMM0,ESI }
    /* +0x7d4bab */ __asm { POR XMM0,XMM3 }
    /* +0x7d4baf */ __asm { MOVQ RDX,XMM0 }
    /* +0x7d4bb4 */ __asm { OR RDX,0x1 }
    /* +0x7d4bb8 */ __asm { MOV qword ptr [R14 + R9*0x1 + 0x1f],RDX }
    /* +0x7d4bbd */ __asm { ADD R11D,0xdd252c2e }
    /* +0x7d4bc4 */ __asm { MOVSXD R9,R11D }
    /* +0x7d4bc7 */ __asm { MOV uint8_t ptr [R10 + R9*0x1 + 0xf],AL }
    /* +0x7d4bcc */ __asm { MOV dword ptr [RBP + 0x370],0x83071146 }
    /* +0x7d4bd6 */ __asm { MOV R11D,dword ptr [RBP + 0x370] }
    /* +0x7d4bdd */ __asm { CMP R11D,0xc387a972 }
    /* +0x7d4be4 */ __asm { MOV qword ptr [RBP + 0x290],RDI }
    /* +0x7d4beb */ __asm { JNC 0x7fffa4f535bf }
    /* +0x7d4bf1 */ __asm { MOV ECX,0xac78bcb }
    /* +0x7d4bf6 */ __asm { PUSHFQ }
    /* +0x7d4bf7 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x7d4bff */ __asm { POPFQ }
    /* +0x7d4c00 */ __asm { NOT ECX }
    /* +0x7d4c02 */ __asm { ADD ECX,R13D }
    /* +0x7d4c05 */ __asm { MOV R10,qword ptr [RCX] }
    /* +0x7d4c08 */ __asm { LEA R14,[0x7fffa47c648b] }
    /* +0x7d4c0f */ __asm { LEA RAX,[0x7fffa47cd86f] }
    /* +0x7d4c16 */ __asm { MOV qword ptr [RBP + 0x230],RAX }
    /* +0x7d4c1d */ __asm { MOV R11D,0x7841fe83 }
    /* +0x7d4c23 */ __asm { MOV dword ptr [RBP + 0x270],R11D }
    /* +0x7d4c2a */ __asm { MOV R11D,0xa62d611a }
    /* +0x7d4c30 */ __asm { IMUL R11D,R11D,0x653e383b }
    /* +0x7d4c37 */ __asm { MOV dword ptr [RBP + 0x250],R11D }
    /* +0x7d4c3e */ __asm { LEA RAX,[0x7fffa47cc8f4] }
    /* +0x7d4c45 */ __asm { MOV qword ptr [RBP + 0x580],RAX }
    /* +0x7d4c4c */ __asm { MOV R15D,0x2af3c952 }
    /* +0x7d4c52 */ __asm { XOR R15D,R13D }
    /* +0x7d4c55 */ __asm { MOV R8,0x295e9e1b089a0276 }
    /* +0x7d4c5f */ __asm { MOV RAX,R10 }
    /* +0x7d4c62 */ __asm { MUL R8 }
    /* +0x7d4c65 */ __asm { MOV R8,RDX }
    /* +0x7d4c68 */ __asm { MOV R11,0x68db8bac710cb }
    /* +0x7d4c72 */ __asm { MOV RAX,R10 }
    /* +0x7d4c75 */ __asm { MUL R11 }
    /* +0x7d4c78 */ __asm { ADD RAX,R8 }
    /* +0x7d4c7b */ __asm { ADC RDX,0x0 }
    /* +0x7d4c7f */ __asm { LEA R8,[0x7fffa47c5a43] }
    /* +0x7d4c86 */ __asm { LEA RAX,[0x7fffa47c7b07] }
    /* +0x7d4c8d */ __asm { MOV R11W,0x3d4a }
    /* +0x7d4c92 */ __asm { IMUL EDI,R11D,-0x317b }
    /* +0x7d4c99 */ __asm { MOV ECX,R13D }
    /* +0x7d4c9c */ __asm { ROR DI,CL }
    /* +0x7d4c9f */ __asm { MOV R10W,0x6e26 }
    /* +0x7d4ca4 */ __asm { LEA RBX,[0x7fffa47cef1a] }
    /* +0x7d4cab */ __asm { MOV CX,0x4761 }
    /* +0x7d4caf */ __asm { LEA RSI,[0x7fffa47ce5d2] }
    /* +0x7d4cb6 */ __asm { LEA R12,[0x7fffa47c6702] }
    /* +0x7d4cbd */ __asm { NOT EDI }
    /* +0x7d4cbf */ __asm { MOVSX R9,DI }
    /* +0x7d4cc3 */ __asm { MOV EDI,0x4d5a34bc }
    /* +0x7d4cc8 */ __asm { MOV R11D,0x57c47ea }
    /* +0x7d4cce */ __asm { MOVZX R9D,uint8_t ptr [R8 + R9*0x1 + 0xe] }
    /* +0x7d4cd4 */ __asm { IMUL R8D,ECX,0x7c2b }
    /* +0x7d4cdb */ __asm { LEA ECX,[R8 + R13*0x1] }
    /* +0x7d4cdf */ __asm { ADD ECX,0xd1a }
    /* +0x7d4ce5 */ __asm { MOVSX R8,CX }
    /* +0x7d4ce9 */ __asm { ADD R8,R14 }
    /* +0x7d4cec */ __asm { ADD R11D,R13D }
    /* +0x7d4cef */ __asm { INC R9B }
    /* +0x7d4cf2 */ __asm { IMUL R11D,R11D,-0x3ec31131 }
    /* +0x7d4cf9 */ __asm { MOVSXD R11,R11D }
    /* +0x7d4cfc */ __asm { XOR R11,0x3a87779f }
    /* +0x7d4d03 */ __asm { AND R9B,0x3 }
    /* +0x7d4d07 */ __asm { MOVZX R14D,R9B }
    /* +0x7d4d0b */ __asm { MOVD XMM3,dword ptr [RAX + R11*0x1 + 0x40] }
    /* +0x7d4d12 */ __asm { MOVQ XMM0,RDX }
    /* +0x7d4d17 */ __asm { ADD R15D,0xda9d891d }
    /* +0x7d4d1e */ __asm { XOR R15D,0x852ccc79 }
    /* +0x7d4d25 */ __asm { MOVSXD R9,R15D }
    /* +0x7d4d28 */ __asm { MOV R11,RDX }
    /* +0x7d4d2b */ __asm { MOV RAX,RDX }
    /* +0x7d4d2e */ __asm { SHR RDX,0x28 }
    /* +0x7d4d32 */ __asm { XOR DL,uint8_t ptr [RBX + R9*0x1 + 0x45] }
    /* +0x7d4d37 */ __asm { MOVD XMM1,EDI }
    /* +0x7d4d3b */ __asm { PXOR XMM1,XMM14 }
    /* +0x7d4d40 */ __asm { MOVD ECX,XMM1 }
    /* +0x7d4d44 */ __asm { MOV R9D,0xc79eddbd }
    /* +0x7d4d4a */ __asm { SUB R9D,ECX }
    /* +0x7d4d4d */ __asm { SHR R11,0x20 }
    /* +0x7d4d51 */ __asm { MOVSXD R9,R9D }
    /* +0x7d4d54 */ __asm { MOV RCX,qword ptr [RBP + 0x230] }
    /* +0x7d4d5b */ __asm { XOR R11B,uint8_t ptr [RCX + R9*0x1 + 0x44] }
    /* +0x7d4d60 */ __asm { MOV ECX,R13D }
    /* +0x7d4d63 */ __asm { MOV R9D,dword ptr [RBP + 0x250] }
    /* +0x7d4d6a */ __asm { ROR R9D,CL }
    /* +0x7d4d6d */ __asm { MOVSXD R9,R9D }
    /* +0x7d4d70 */ __asm { MOVZX R9D,uint8_t ptr [RSI + R9*0x1 + 0x47] }
    /* +0x7d4d76 */ __asm { MOV uint8_t ptr [R8 + R14*0x8 + 0x19],DL }
    /* +0x7d4d7b */ __asm { ADD R10D,0x21a8 }
    /* +0x7d4d82 */ __asm { ROL R10W,CL }
    /* +0x7d4d86 */ __asm { SHR RAX,0x30 }
    /* +0x7d4d8a */ __asm { MOVSX RDX,R10W }
    /* +0x7d4d8e */ __asm { XOR AL,uint8_t ptr [R12 + RDX*0x1 + 0x46] }
    /* +0x7d4d93 */ __asm { MOV uint8_t ptr [R8 + R14*0x8 + 0x18],R11B }
    /* +0x7d4d98 */ __asm { MOVDQA XMM1,XMM0 }
    /* +0x7d4d9c */ __asm { PSRLQ XMM1,0x8 }
    /* +0x7d4da1 */ __asm { MOVDQA XMM2,XMM0 }
    /* +0x7d4da5 */ __asm { PUNPCKLBW XMM2,XMM1 }
    /* +0x7d4da9 */ __asm { PAND XMM2,xmmword ptr [0x7fffa56bbc90] }
    /* +0x7d4db1 */ __asm { MOV uint8_t ptr [R8 + R14*0x8 + 0x1b],R9B }
    /* +0x7d4db6 */ __asm { PAND XMM0,xmmword ptr [0x7fffa56bb7a0] }
    /* +0x7d4dbe */ __asm { POR XMM0,XMM2 }
    /* +0x7d4dc2 */ __asm { PXOR XMM3,XMM0 }
    /* +0x7d4dc6 */ __asm { MOVD dword ptr [R8 + R14*0x8 + 0x14],XMM3 }
    /* +0x7d4dcd */ __asm { MOV uint8_t ptr [R8 + R14*0x8 + 0x1a],AL }
    /* +0x7d4dd2 */ __asm { MOV RDI,qword ptr [RBP + 0x290] }
    /* +0x7d4dd9 */ __asm { MOV R11D,dword ptr [RBP + 0x270] }
    /* +0x7d4de0 */ __asm { IMUL R11D,EDI }
    /* +0x7d4de4 */ __asm { NOT R11D }
    /* +0x7d4de7 */ __asm { MOVSXD R9,R11D }
    /* +0x7d4dea */ __asm { MOV RAX,qword ptr [RBP + 0x580] }
    /* +0x7d4df1 */ __asm { MOV uint8_t ptr [RAX + R9*0x1 + 0xe],R14B }
    /* +0x7d4df6 */ __asm { MOV RSI,R13 }
    /* +0x7d4df9 */ __asm { MOV R11D,0xa3766ac6 }
    /* +0x7d4dff */ __asm { MOV ECX,0xfb565634 }
    /* +0x7d4e04 */ __asm { SUB ECX,R11D }
    /* +0x7d4e07 */ __asm { MOV dword ptr [RBP + 0x370],ECX }
    /* +0x7d4e0d */ __asm { MOV R11D,dword ptr [RBP + 0x370] }
    /* +0x7d4e14 */ __asm { TEST R11B,0x1 }
    /* +0x7d4e18 */ __asm { JNZ 0x7fffa4f535af }
    /* +0x7d4e1e */ __asm { MOV R11W,0x6092 }
    /* +0x7d4e23 */ __asm { MOV R14D,ESI }
    /* +0x7d4e26 */ __asm { OR R14D,0x1 }
    /* +0x7d4e2a */ __asm { MOV ECX,R14D }
    /* +0x7d4e2d */ __asm { IMUL ECX,R11D }
    /* +0x7d4e31 */ __asm { MOVSX R9,CX }
    /* +0x7d4e35 */ __asm { XOR R9,-0x3865 }
    /* +0x7d4e3c */ __asm { MOV R11W,0x9d23 }
    /* +0x7d4e41 */ __asm { ADD R11D,0xffffd47b }
    /* +0x7d4e48 */ __asm { LEA RAX,[0x7fffa47c4959] }
    /* +0x7d4e4f */ __asm { LEA R10,[0x7fffa47c15a8] }
    /* +0x7d4e56 */ __asm { XOR R11D,0xdf86 }
    /* +0x7d4e5d */ __asm { MOV ECX,ESI }
    /* +0x7d4e5f */ __asm { ROL R11W,CL }
    /* +0x7d4e63 */ __asm { MOVZX ECX,uint8_t ptr [R10 + R9*0x1 + 0x9] }
    /* +0x7d4e69 */ __asm { MOVSX R9,R11W }
    /* +0x7d4e6d */ __asm { ADD R9,RAX }
    /* +0x7d4e70 */ __asm { MOVZX R9D,uint8_t ptr [RCX + R9*0x1 + 0x17] }
    /* +0x7d4e76 */ __asm { NOT R9B }
    /* +0x7d4e79 */ __asm { ROL R9B,0x3 }
    /* +0x7d4e7d */ __asm { MOV uint8_t ptr [RBP + 0x370],R9B }
    /* +0x7d4e84 */ __asm { CMP uint8_t ptr [RBP + 0x370],0x0 }
    /* +0x7d4e8b */ __asm { MOV qword ptr [RBP + -0x48],R14 }
    /* +0x7d4e8f */ __asm { JZ 0x7fffa4f44eec }
    /* +0x7d4e91 */ __asm { MOV R11W,0xca70 }
    /* +0x7d4e96 */ __asm { ADD R11D,0x358f }
    /* +0x7d4e9d */ __asm { ROL R11W,0xc }
    /* +0x7d4ea2 */ __asm { NOT R11D }
    /* +0x7d4ea5 */ __asm { PUSHFQ }
    /* +0x7d4ea6 */ __asm { POP RDX }
    /* +0x7d4ea7 */ __asm { AND EDX,0x100 }
    /* +0x7d4ead */ __asm { MOVZX R11D,R11W }
    /* +0x7d4eb1 */ __asm { CMP EDX,R11D }
    /* +0x7d4eb4 */ __asm { NOP }
    /* +0x7d4eb5 */ __asm { NOP }
    /* +0x7d4eb6 */ __asm { NOP }
    /* +0x7d4eb7 */ __asm { NOP }
    /* +0x7d4eb8 */ __asm { NOP }
    /* +0x7d4eb9 */ __asm { MOV dword ptr [RBP + 0x370],0x569a5e1c }
    /* +0x7d4ec3 */ __asm { MOV R11D,dword ptr [RBP + 0x370] }
    /* +0x7d4eca */ __asm { TEST R11D,R11D }
    /* +0x7d4ecd */ __asm { JS 0x7fffa4f535b7 }
    /* +0x7d4ed3 */ __asm { MOV RCX,0x0 }
    /* +0x7d4eda */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x7d4ee1 */ __asm { MOV R13D,0x3 }
    /* +0x7d4ee7 */ __asm { JMP 0x7fffa4f5327d }
    /* +0x7d4eec */ __asm { MOV dword ptr [RBP + 0x370],0xef4a0f8 }
    /* +0x7d4ef6 */ __asm { MOV R11D,dword ptr [RBP + 0x370] }
    /* +0x7d4efd */ __asm { LEA RAX,[0x7fffa47cbc3c] }
    /* +0x7d4f04 */ __asm { MOV EDX,0xb5ad29bd }
    /* +0x7d4f09 */ __asm { MOV ECX,0x81642064 }
    /* +0x7d4f0e */ __asm { MOVD XMM15,EDI }
    /* +0x7d4f13 */ __asm { LEA R8,[0x7fffa47c8b52] }
    /* +0x7d4f1a */ __asm { LEA R10,[0x7fffa47caf77] }
    /* +0x7d4f21 */ __asm { MOV R11D,0x993a3be0 }
    /* +0x7d4f27 */ __asm { ADD R11D,0x5f5ff32a }
    /* +0x7d4f2e */ __asm { MOV R9D,0x8afcc75c }
    /* +0x7d4f34 */ __asm { MOV R13D,0x8afc0f56 }
    /* +0x7d4f3a */ __asm { SUB R13D,R9D }
    /* +0x7d4f3d */ __asm { IMUL R11D,EDI }
    /* +0x7d4f41 */ __asm { ROL R11D,0xe }
    /* +0x7d4f45 */ __asm { ADD ECX,0xdd0fef7c }
    /* +0x7d4f4b */ __asm { IMUL ECX,EDI }
    /* +0x7d4f4e */ __asm { NOT ECX }
    /* +0x7d4f50 */ __asm { MOVSXD R9,ECX }
    /* +0x7d4f53 */ __asm { MOV ECX,ESI }
    /* +0x7d4f55 */ __asm { ROL R13D,CL }
    /* +0x7d4f58 */ __asm { MOVSXD RCX,R13D }
    /* +0x7d4f5b */ __asm { MOVZX R8D,uint8_t ptr [R8 + R9*0x1 + 0x9] }
    /* +0x7d4f61 */ __asm { IMUL R9D,R8D,0x24924925 }
    /* +0x7d4f68 */ __asm { ADD R9D,0x24924925 }
    /* +0x7d4f6f */ __asm { LEA R8,[R9*0x8] }
    /* +0x7d4f77 */ __asm { SUB R8,R9 }
    /* +0x7d4f7a */ __asm { SHR R8,0x20 }
    /* +0x7d4f7e */ __asm { IMUL EDX,EDX,-0x7920d003 }
    /* +0x7d4f84 */ __asm { ADD EDX,0xb6a6070c }
    /* +0x7d4f8a */ __asm { MOVD XMM3,EDX }
    /* +0x7d4f8e */ __asm { PMULUDQ XMM3,XMM15 }
    /* +0x7d4f93 */ __asm { MOVD EDX,XMM3 }
    /* +0x7d4f97 */ __asm { MOVSXD R9,EDX }
    /* +0x7d4f9a */ __asm { ADD R9,RAX }
    /* +0x7d4f9d */ __asm { MOV uint8_t ptr [R8 + R9*0x1 + 0x17],0xdf }
    /* +0x7d4fa3 */ __asm { MOV uint8_t ptr [R10 + RCX*0x1 + 0x9],R8B }
    /* +0x7d4fa8 */ __asm { MOV dword ptr [RBP + 0x370],R11D }
    /* +0x7d4faf */ __asm { MOV R11D,dword ptr [RBP + 0x370] }
    /* +0x7d4fb6 */ __asm { MOV R11W,0x8baf }
    /* +0x7d4fbb */ __asm { NOT R11D }
    /* +0x7d4fbe */ __asm { ADD R11D,ESI }
    /* +0x7d4fc1 */ __asm { MOVZX ECX,R11W }
    /* +0x7d4fc5 */ __asm { MOV RAX,qword ptr GS:[RCX] }
    /* +0x7d4fc9 */ __asm { MOVD XMM3,R14D }
    /* +0x7d4fce */ __asm { MOV R11W,0x7b7a }
    /* +0x7d4fd3 */ __asm { MOV RAX,qword ptr [RAX + 0xe60] }
    /* +0x7d4fda */ __asm { ADD R11D,0xab6 }
    /* +0x7d4fe1 */ __asm { MOVD XMM0,R11D }
    /* +0x7d4fe6 */ __asm { PMULLW XMM0,XMM3 }
    /* +0x7d4fea */ __asm { PEXTRW ECX,XMM0,0x0 }
    /* +0x7d4fef */ __asm { MOV R11D,0x6251a4bc }
    /* +0x7d4ff5 */ __asm { MOV EDX,0x4c3241fa }
    /* +0x7d4ffa */ __asm { ADD R11D,0x2732a495 }
    /* +0x7d5001 */ __asm { IMUL R11D,EDI }
    /* +0x7d5005 */ __asm { IMUL EDX,EDI }
    /* +0x7d5008 */ __asm { ADD EDX,0x8877e475 }
    /* +0x7d500e */ __asm { MOVQ XMM3,qword ptr GS:[RCX] }
    /* +0x7d5013 */ __asm { MOVSXD R10,R11D }
    /* +0x7d5016 */ __asm { CMP RDX,R10 }
    /* +0x7d5019 */ __asm { MOV R10,-0x60 }
    /* +0x7d5020 */ __asm { MOV R8D,0x60 }
    /* +0x7d5026 */ __asm { CMOVNC R8,R10 }
    /* +0x7d502a */ __asm { MOVQ XMM0,R8 }
    /* +0x7d502f */ __asm { PADDQ XMM0,XMM3 }
    /* +0x7d5033 */ __asm { MOVQ R10,XMM0 }
    /* +0x7d5038 */ __asm { ADD RAX,qword ptr [R10] }
    /* +0x7d503b */ __asm { MOV R10,-0x70de399a49f173cd }
    /* +0x7d5045 */ __asm { CMP RAX,R10 }
    /* +0x7d5048 */ __asm { JZ 0x7fffa4f53454 }
    /* +0x7d504e */ __asm { PUSHFQ }
    /* +0x7d504f */ __asm { POP RDX }
    /* +0x7d5050 */ __asm { MOV R11W,0xc0e3 }
    /* +0x7d5055 */ __asm { ADD R11D,ESI }
    /* +0x7d5058 */ __asm { ROL R11W,0x5 }
    /* +0x7d505d */ __asm { AND EDX,0x100 }
    /* +0x7d5063 */ __asm { XOR R11D,0x9869 }
    /* +0x7d506a */ __asm { MOVZX ECX,R11W }
    /* +0x7d506e */ __asm { MOV qword ptr [RBP + 0x2a8],RDX }
    /* +0x7d5075 */ __asm { MOV qword ptr [RBP + 0x570],RCX }
    /* +0x7d507c */ __asm { CMP RDX,RCX }
    /* +0x7d507f */ __asm { NOP }
    /* +0x7d5080 */ __asm { NOP }
    /* +0x7d5081 */ __asm { NOP }
    /* +0x7d5082 */ __asm { NOP }
    /* +0x7d5083 */ __asm { NOP }
    /* +0x7d5084 */ __asm { MOV dword ptr [RBP + 0x370],0xcd2937f }
    /* +0x7d508e */ __asm { MOV R11D,dword ptr [RBP + 0x370] }
    /* +0x7d5095 */ __asm { CMP R11D,0x4f0c9cd5 }
    /* +0x7d509c */ __asm { NOP }
    /* +0x7d509d */ __asm { NOP }
    /* +0x7d509e */ __asm { NOP }
    /* +0x7d509f */ __asm { NOP }
    /* +0x7d50a0 */ __asm { NOP }
    /* +0x7d50a1 */ __asm { NOP }
    /* +0x7d50a2 */ __asm { NOP }
    /* +0x7d50a3 */ __asm { NOP }
    /* +0x7d50a4 */ __asm { NOP }
    /* +0x7d50a5 */ __asm { NOP }
    /* +0x7d50a6 */ __asm { NOP }
    /* +0x7d50a7 */ __asm { NOP }
    /* +0x7d50a8 */ __asm { NOP }
    /* +0x7d50a9 */ __asm { MOV R11W,0x7ec3 }
    /* +0x7d50ae */ __asm { XOR R11D,0xaef }
    /* +0x7d50b5 */ __asm { ADD R11D,ESI }
    /* +0x7d50b8 */ __asm { ROL R11W,0x3 }
    /* +0x7d50bd */ __asm { MOVZX ECX,R11W }
    /* +0x7d50c1 */ __asm { MOV RAX,qword ptr GS:[RCX] }
    /* +0x7d50c5 */ __asm { MOV R10,0x598befa219de9e5 }
    /* +0x7d50cf */ __asm { IMUL R10,R10,0x5c1f60a9 }
    /* +0x7d50d6 */ __asm { MOV ECX,ESI }
    /* +0x7d50d8 */ __asm { ROR R10,CL }
    /* +0x7d50db */ __asm { MOV R11D,0xf47b486c }
    /* +0x7d50e1 */ __asm { MOV ECX,ESI }
    /* +0x7d50e3 */ __asm { SUB ECX,R11D }
    /* +0x7d50e6 */ __asm { ADD ECX,0x7508164c }
    /* +0x7d50ec */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x7d50f0 */ __asm { MOV RDX,-0x59103677b09d8bc3 }
    /* +0x7d50fa */ __asm { ADD RDX,RAX }
    /* +0x7d50fd */ __asm { XOR RDX,-0x408c6d73 }
    /* +0x7d5104 */ __asm { ADD RDX,RCX }
    /* +0x7d5107 */ __asm { XOR RDX,R10 }
    /* +0x7d510a */ __asm { CMP RDX,-0x1 }
    /* +0x7d510e */ __asm { NOP }
    /* +0x7d510f */ __asm { NOP }
    /* +0x7d5110 */ __asm { NOP }
    /* +0x7d5111 */ __asm { NOP }
    /* +0x7d5112 */ __asm { NOP }
    /* +0x7d5113 */ __asm { NOP }
    /* +0x7d5114 */ __asm { NOP }
    /* +0x7d5115 */ __asm { NOP }
    /* +0x7d5116 */ __asm { NOP }
    /* +0x7d5117 */ __asm { NOP }
    /* +0x7d5118 */ __asm { NOP }
    /* +0x7d5119 */ __asm { NOP }
    /* +0x7d511a */ __asm { NOP }
    /* +0x7d511b */ __asm { NOP }
    /* +0x7d511c */ __asm { NOP }
    /* +0x7d511d */ __asm { NOP }
    /* +0x7d511e */ __asm { NOP }
    /* +0x7e327d */ __asm { MOV ECX,0xed7e2501 }
    /* +0x7e3282 */ __asm { MOV R11D,0x80f0098f }
    /* +0x7e3288 */ __asm { XOR ECX,ESI }
    /* +0x7e328a */ __asm { IMUL ECX,ECX,-0xd8714a9 }
    /* +0x7e3290 */ __asm { MOV EDX,0x2c68e927 }
    /* +0x7e3295 */ __asm { MOV R8W,0x30ab }
    /* +0x7e329a */ __asm { LEA RAX,[0x7fffa47ce708] }
    /* +0x7e32a1 */ __asm { ADD EDX,0x270227cf }
    /* +0x7e32a7 */ __asm { MOVD XMM3,EDX }
    /* +0x7e32ab */ __asm { LEA R10,[0x7fffa47c751e] }
    /* +0x7e32b2 */ __asm { MOV R14,qword ptr [RBP + -0x48] }
    /* +0x7e32b6 */ __asm { IMUL R8D,R14D }
    /* +0x7e32ba */ __asm { ADD R8D,0x60b5 }
    /* +0x7e32c1 */ __asm { MOVZX EDX,R8W }
    /* +0x7e32c5 */ __asm { PXOR XMM14,XMM3 }
    /* +0x7e32ca */ __asm { MOVD R8D,XMM14 }
    /* +0x7e32cf */ __asm { ADD R8D,0x26507312 }
    /* +0x7e32d6 */ __asm { IMUL R11D,R11D,0x1016b8ed }
    /* +0x7e32dd */ __asm { XOR R11D,ESI }
    /* +0x7e32e0 */ __asm { MOV R9W,0x72dd }
    /* +0x7e32e5 */ __asm { IMUL R9D,R9D,-0x2eef }
    /* +0x7e32ec */ __asm { NOT R9D }
}


// ============================================================================
// Function : Unwind@7fffa4f536e0  |  RVA: 0x7e36e0  |  Size: 278 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f536e0(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = ~(*(int *)(param_2 + 0x1a8) * 0x3c6f5ce1);
  iVar1 = *(int *)(param_2 + 0x1a8) * -0x730c517e + 0x7de0ac17;
  (*(code *)((int64_t)iVar1 + 0x7fffa567427f))
            (iVar1,uVar2 << 0x17 | uVar2 >> 9,param_2 + -0x1f34281c);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f53800  |  RVA: 0x7e3800  |  Size: 428 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f53800(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  
  uVar1 = param_2 + 0x5a0;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x1f0) & 0x1f;
  uVar4 = 0x8f221301U >> bVar3 | -0x70ddecff << 0x20 - bVar3;
  uVar2 = *(uint64_t *)(param_2 + 0x3e0);
  bVar3 = (uint8_t)uVar2 & 0x1f;
  (*(code *)(&UNK_7fffa562c0fc + (int)((uVar4 << bVar3 | uVar4 >> 0x20 - bVar3) * -0xd382e33)))
            ((uVar1 * 0x80000000 | uVar1 >> 0x21) ^ (uVar1 * 0x40000000 | uVar1 >> 0x22));
  (*(code *)((int64_t)(short)((short)uVar2 - 0x27U ^ 0x3ddc) + 0x7fffa568e556))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f539b0  |  RVA: 0x7e39b0  |  Size: 383 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f539b0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  uVar2 = *(uint64_t *)(param_2 + 0x1f0);
  uVar1 = param_2 + 0x3f0;
  (*(code *)((int64_t)(short)((uint16_t)uVar2 ^ 0x18b6) + 0x7fffa562453a))
            ((uVar1 * 0x40000000 | uVar1 >> 0x22) ^ (uVar1 * 0x80000000 | uVar1 >> 0x21));
  (*(code *)(&UNK_7fffa569023b + (int)((uint32_t)uVar2 ^ 0x753af215)))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f53b30  |  RVA: 0x7e3b30  |  Size: 317 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f53b30(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  int iVar3;
  uint32_t uVar4;
  
  if (0xf < *(uint64_t *)(param_2 + 0x68)) {
    uVar4 = (uint32_t)*(uint64_t *)(param_2 + 0x3e0);
    iVar3 = (int)CONCAT62((int6)((uint64_t)param_2 >> 0x10),0xd243) * (uVar4 | 1);
    uVar2 = (uint16_t)iVar3;
    uVar2 = uVar2 << 6 | uVar2 >> 10;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1f0) & 0xf;
    uVar2 = uVar2 >> bVar1 | uVar2 << 0x10 - bVar1;
    uVar2 = uVar2 << 0xd | uVar2 >> 3;
    (*(code *)((int64_t)(short)uVar2 + 0x7fffa568c5f3))
              (*(uint64_t *)(param_2 + 0x1f0),CONCAT22((short)((uint32_t)iVar3 >> 0x10),uVar2),
               *(uint64_t *)(param_2 + 0x50) >> 0x3d ^ *(uint64_t *)(param_2 + 0x50),
               uVar4 ^ 0x46fd6d85);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f53c70  |  RVA: 0x7e3c70  |  Size: 506 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f53c70(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  int iVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  int iVar6;
  uint16_t uVar7;
  int64_t lVar8;
  
  lVar8 = (param_2 + 0x120) - (param_2 << 0x3e);
  uVar7 = 0xc8ae - (short)*(uint64_t *)(param_2 + 0x3e0);
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1f0);
  bVar1 = bVar2 & 0xf;
  uVar7 = (uVar7 >> bVar1 | uVar7 << 0x10 - bVar1) + 0x13f9;
  iVar3 = (int)(param_2 + 0x120);
  uVar4 = (uint32_t)((uint64_t)lVar8 >> 0x20);
  bVar2 = bVar2 & 0x1f;
  iVar6 = (0xc1f37e24U >> bVar2 | -0x3e0c81dc << 0x20 - bVar2) *
          ((uint32_t)*(uint64_t *)(param_2 + 0x3e0) | 1);
  uVar5 = *(uint64_t *)(param_2 + 0x1f0) & 0xffffffff;
  bVar1 = (uint8_t)uVar5 & 0x1f;
  (*(code *)((int64_t)iVar6 + 0x7fffa56adb0c))
            (uVar5,((iVar3 * 0x800 | uVar4 >> 0x15) ^ (iVar3 * 4 | uVar4 >> 0x1e) ^ (uint32_t)lVar8) *
                   -0x2c78be5,(param_2 + 0x5a0U) * 0x40000000 | param_2 + 0x5a0U >> 0x22,iVar6,
             0x49ced7bbU >> bVar1 | 0x49ced7bb << 0x20 - bVar1);
  (*(code *)((int64_t)(short)(uVar7 * 8 | uVar7 >> 0xd) + 0x7fffa5624cbf))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4f53e70  |  RVA: 0x7e3e70  |  Size: 389 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4f53e70(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  int iVar3;
  uint32_t uVar4;
  
  uVar1 = *(uint64_t *)(param_2 + 0x1f0);
  bVar2 = (uint8_t)uVar1 & 0x1f;
  uVar4 = *(int *)((int64_t)(int)(0xffff13cbU >> bVar2 | -0xec35 << 0x20 - bVar2) + 0x7fffa47ce169)
          - 1;
  *(uint32_t *)((int64_t)(short)(((uint16_t)uVar1 ^ 0x78d6) * 0x2a29 + -0x92) + 0x7fffa47c2620) = uVar4;
  if (uVar4 == (0x8be0U - (int)uVar1 & 0xffff)) {
    iVar3 = (int)*(uint64_t *)(param_2 + 0x1f0);
    LOCK();
    *(uint32_t *)((int64_t)(-0x753b3c52 - iVar3) + 0x7fffa47cbd62) = 0;
    UNLOCK();
    uVar4 = iVar3 + 0x75377387;
    (*(code *)&DAT_7ff8504eba90)((int64_t)(int)(uVar4 * 0x40000000 | uVar4 >> 2) + 0x7fffa47cb55f);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4f54010  |  RVA: 0x7e4010  |  Size: 28 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_7fffa4f54010(void)

{
  _DAT_7fffa4782170 = (*(code *)&DAT_7ff84ea23460)();
  return _DAT_7fffa4782170 != 0;
}


// ============================================================================
// Function : FUN_7fffa4f54070  |  RVA: 0x7e4070  |  Size: 129 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4f54070(uint64_t param_1,int param_2)

{
  code *pcVar1;
  uint8_t *puStack_18;
  uint64_t uStack_10;
  uint64_t uStack_8;
  
  uStack_10 = 0;
  uStack_8 = 0;
  puStack_18 = &UNK_7fffa56f75fc + (-0x72b4d7cf - param_2);
  (*(code *)((int64_t)(short)(((uint16_t)param_2 | 1) * -0x6282) + 0x7fffa4f4147a))
            (&puStack_18,(int64_t)(int)(param_2 + 0xa5323d09U ^ 0xcd810cf4) + 0x7fffa589ea9e);
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa4f54100  |  RVA: 0x7e4100  |  Size: 817 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4f54100(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  int iVar5;
  int64_t lVar6;
  uint32_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint32_t unaff_R13D;
  uint64_t uVar10;
  uint32_t unaff_R15D;
  uint32_t uVar11;
  
  uVar7 = ~unaff_R15D;
  uVar11 = ~unaff_R13D;
  iVar5 = ((uVar7 | 0xe1ffff7) ^ unaff_R13D) * 0x366d806 +
          (uVar7 ^ 0xe1ffff7 | unaff_R13D) * -0x28ec4054 +
          (unaff_R15D & 0xf1e00008 | uVar11) * 0x54509358 +
          (uVar11 & unaff_R15D & 0xf1e00008) * 0x2b0bc0f6 +
          ((uVar7 & 0xe1ffff7 | uVar11) - (uVar11 & (uVar7 ^ 0xe1ffff7))) * 0x57b76b5e +
          (unaff_R15D ^ 0xe1ffff7 ^ uVar11) * -0x57b76b5e +
          (uVar11 & 0xe1ffff7 & uVar7) * 0x27a4e8f0;
  bVar3 = (uint8_t)iVar5;
  uVar7 = 0xe1ffff7U >> (bVar3 & 0x1f) | 0xe1ffff7 << 0x20 - (bVar3 & 0x1f);
  *(uint8_t *)((int64_t)(int)(-0xfc6d001 << (bVar3 & 0x1f) | 0xf0392fffU >> 0x20 - (bVar3 & 0x1f)) +
           0x7fffa47caf23) = bVar3 ^ 0x54;
  uVar4 = (uint16_t)iVar5;
  lVar9 = (int64_t)(short)((0xf661 - uVar4) * 0x20 | (uint16_t)(0xf661 - uVar4) >> 0xb);
  *(uint8_t (*) [16])(lVar9 + 0x7fffa47bf12a) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar9 + 0x7fffa47bf11a) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar9 + 0x7fffa47bf10a) = (uint8_t  [16])0x0;
  *(uint64_t *)((int64_t)(int)uVar7 + 0x7fffa47c4213) = 0;
  uVar1 = rdtsc();
  lVar6 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44((int)uVar7 >> 0x1f,(int)uVar1)) * 0xa03d74d4c6acad + 1;
  lVar9 = 2;
  while( true ) {
    lVar6 = lVar6 * 0xa03d74d4c6acad + 1;
    *(char *)(lVar9 + 0x7fffa47bb2a6) = (char)((uint64_t)lVar6 >> 0x20);
    lVar8 = lVar6 * 0xa03d74d4c6acad + 1;
    lVar6 = lVar8 * 0xa03d74d4c6acad + 1;
    *(char *)(lVar9 + (int64_t)(short)(uVar4 ^ 0xd3fb) + 0x7fffa47c1ef9) =
         (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar9 + ((int64_t)(short)(uVar4 + 0x5538) ^ 0x4795U) + 0x7fffa47be08e) =
         (char)((uint64_t)lVar8 >> 0x20);
    if (lVar9 == 0x56) break;
    lVar9 = lVar9 + 3;
  }
  uVar4 = (uVar4 ^ 0x6deb) + 0x617b;
  lVar9 = (int64_t)(short)(uVar4 * 0x4000 | uVar4 >> 2);
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47bb2b5 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  uVar10 = uVar2 >> 0x20;
  *(uint32_t *)(lVar9 + 0x7fffa47c0ef2 + uVar10 * 8) = ~uRam00007fffa47bb2f4;
  *(uint32_t *)(lVar9 + 0x7fffa47c0ef6 + uVar10 * 8) = ~uRam00007fffa47bb2f8;
  *(char *)((int64_t)(int)(~(iVar5 + 0xf5c710f0U) * 0x30ae942b) + 0x7fffa47c3d4c) =
       (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4f54440  |  RVA: 0x7e4440  |  Size: 9 bytes
// Callers  : FUN_7fffa53eceb0@0xc7ceb0
// Callees  : none
// ============================================================================
uint32_t FUN_7fffa4f54440(uint32_t param_1)

{
  return param_1 | 0x400000;
}


// ============================================================================
// Function : FUN_7fffa4f54450  |  RVA: 0x7e4450  |  Size: 40 bytes
// Callers  : FUN_7fffa56a0310@0xf30310
// Callees  : none
// ============================================================================
uint32_t FUN_7fffa4f54450(int64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t *pbVar2;
  int64_t lVar3;
  
  if (param_1 != param_2) {
    pbVar2 = (uint8_t *)(param_1 + 9);
    lVar3 = (param_2 + 9) - (int64_t)pbVar2;
    do {
      bVar1 = *pbVar2;
      if (bVar1 != pbVar2[lVar3]) {
        return -(uint32_t)(bVar1 < pbVar2[lVar3]) | 1;
      }
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa4f54478  |  RVA: 0x7e4478  |  Size: 25 bytes
// Callers  : FUN_7fffa5130768@0x9c0768, FUN_7fffa565d380@0xeed380, FUN_7fffa507ecd4@0x90ecd4, FUN_7fffa5605d16@0xe95d16, FUN_7fffa52c405b@0xb5405b, FUN_7fffa56a0690@0xf30690, FUN_7fffa52c5cd0@0xb55cd0, FUN_7fffa5656fe0@0xee6fe0
// Callees  : none
// ============================================================================
void FUN_7fffa4f54478(int param_1)

{
  (*(code *)&DAT_7ff8504ccfa0)((int64_t)param_1 * 0x28 + 0x7fffa4781f10);
  return;
}


// ============================================================================
// Function : FUN_7fffa4f54494  |  RVA: 0x7e4494  |  Size: 67 bytes
// Callers  : FUN_7fffa5465140@0xcf5140, FUN_7fffa5007cbc@0x897cbc
// Callees  : FUN_7fffa54003cc@0xc903cc
// ============================================================================
void FUN_7fffa4f54494(uint64_t param_1)

{
  uint64_t uStackX_8;
  uint8_t auStackX_10 [8];
  uint32_t auStackX_18 [2];
  uint32_t auStackX_20 [2];
  uint64_t *puStack_18;
  uint64_t uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  puStack_18 = &uStackX_8;
  auStackX_18[0] = 2;
  auStackX_20[0] = 2;
  uStackX_8 = param_1;
  FUN_7fffa54003cc(auStackX_10,auStackX_20,&puStack_18,auStackX_18);
  return;
}


// ============================================================================
// Function : FUN_7fffa4f544f0  |  RVA: 0x7e44f0  |  Size: 609 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4f546e1) */

void FUN_7fffa4f544f0(void)

{
  code *pcVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uint32_t unaff_EBX;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t unaff_R13D;
  uint32_t unaff_R15D;
  
  uVar6 = ~unaff_R15D;
  uVar2 = ~unaff_EBX;
  uVar8 = ~unaff_R13D & uVar2;
  uVar5 = unaff_R15D ^ uVar8;
  uVar7 = uVar2 & unaff_R13D;
  iVar3 = (uVar6 & uVar7) * -0x68adbfff + (~uVar5 & ~uVar7) * -0x22549b05;
  iVar4 = (uVar6 ^ unaff_EBX ^ unaff_R13D) * 0x3638d46;
  (*(code *)((int64_t)
             (int)(((((unaff_R15D | uVar8) ^ uVar7) - (unaff_R15D & uVar8)) * -0x171109bb +
                    0xe9b25ab +
                   (((uVar7 ^ uVar5) * -0x95acf1a + (uVar7 ^ (uVar8 | uVar6)) * 0xf46118 +
                     (~uVar7 & (uVar8 | uVar6)) * -0x1e8c230 +
                     ((unaff_EBX ^ unaff_R13D) & unaff_R15D) * 0x2e14da1c +
                     (unaff_EBX & unaff_R13D & unaff_R15D) * 0x31786762 +
                     (unaff_EBX & unaff_R13D & uVar6) * 0x654a32b9 +
                     ((unaff_R13D | unaff_EBX) ^ unaff_R15D) * -0x663e93d1 +
                     (unaff_R15D & (unaff_R13D | unaff_EBX)) * 0x684904cd +
                     (uVar5 | uVar7) * 0x206bd8d5 + (uVar8 ^ uVar6 ^ uVar7) * -0x216039ed +
                     (((uVar2 | unaff_R13D) ^ unaff_R15D) - (unaff_R15D & unaff_EBX & ~unaff_R13D))
                     * -0x68adbfff + iVar4 + (unaff_R15D & uVar8 & uVar7) * 0x33f5fc26) - iVar3)) *
                   0x2feb3bb7 + 0x41c7debd) + 0x7fffa52e366f))(iVar3,iVar4,0x74ea6167);
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa4f54760  |  RVA: 0x7e4760  |  Size: 896 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4f54760(void) {
    /* +0x7e4760 */ __asm { PUSH RBP }
    /* +0x7e4761 */ __asm { PUSH RDI }
    /* +0x7e4762 */ __asm { PUSH R15 }
    /* +0x7e4764 */ __asm { PUSH RBX }
    /* +0x7e4765 */ __asm { PUSH R14 }
    /* +0x7e4767 */ __asm { PUSH R12 }
    /* +0x7e4769 */ __asm { PUSH RSI }
    /* +0x7e476a */ __asm { PUSH R13 }
    /* +0x7e476c */ __asm { SUB RSP,0x1d8 }
    /* +0x7e4773 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x7e477b */ __asm { MOVDQA xmmword ptr [RBP + 0x140],XMM8 }
    /* +0x7e4784 */ __asm { MOVDQA xmmword ptr [RBP + 0x130],XMM12 }
    /* +0x7e478d */ __asm { MOVDQA xmmword ptr [RBP + 0x120],XMM10 }
    /* +0x7e4796 */ __asm { MOVDQA xmmword ptr [RBP + 0x110],XMM11 }
    /* +0x7e479f */ __asm { MOV qword ptr [RBP + 0x108],-0x2 }
    /* +0x7e47aa */ __asm { MOV RSI,qword ptr [RBP + 0x1c0] }
    /* +0x7e47b1 */ __asm { MOV R8W,0xe655 }
    /* +0x7e47b6 */ __asm { XOR R8D,0x48f4 }
    /* +0x7e47bd */ __asm { MOV ECX,ESI }
    /* +0x7e47bf */ __asm { ROR R8W,0x1 }
    /* +0x7e47c3 */ __asm { OR ECX,0x1 }
    /* +0x7e47c6 */ __asm { MOV qword ptr [RBP + 0x28],RCX }
    /* +0x7e47ca */ __asm { IMUL R8D,ECX }
    /* +0x7e47ce */ __asm { MOVZX R8D,R8W }
    /* +0x7e47d2 */ __asm { MOV EDX,0xad0 }
    /* +0x7e47d7 */ __asm { ADD RDX,qword ptr GS:[R8] }
    /* +0x7e47db */ __asm { MOV R8W,0x76de }
    /* +0x7e47e0 */ __asm { IMUL R8D,R8D,0x7db5 }
    /* +0x7e47e7 */ __asm { SUB R8D,ESI }
    /* +0x7e47ea */ __asm { MOVZX R8D,R8W }
    /* +0x7e47ee */ __asm { MOV R10,qword ptr GS:[R8] }
    /* +0x7e47f2 */ __asm { OR RDX,qword ptr [R10 + 0x30] }
    /* +0x7e47f6 */ __asm { MOV R10,-0x75bb3439b4bda2d9 }
    /* +0x7e4800 */ __asm { CMP RDX,R10 }
    /* +0x7e4803 */ __asm { NOP }
    /* +0x7e4804 */ __asm { NOP }
    /* +0x7e4805 */ __asm { NOP }
    /* +0x7e4806 */ __asm { NOP }
    /* +0x7e4807 */ __asm { NOP }
    /* +0x7e4808 */ __asm { NOP }
    /* +0x7e4809 */ __asm { NOP }
    /* +0x7e480a */ __asm { NOP }
    /* +0x7e480b */ __asm { NOP }
    /* +0x7e480c */ __asm { NOP }
    /* +0x7e480d */ __asm { NOP }
    /* +0x7e480e */ __asm { NOP }
    /* +0x7e480f */ __asm { NOP }
    /* +0x7e4810 */ __asm { LEA RAX,[0x7fffa477e4cb] }
    /* +0x7e4817 */ __asm { MOV RDX,-0x520e153913f195c3 }
    /* +0x7e4821 */ __asm { IMUL RDX,RAX }
    /* +0x7e4825 */ __asm { NOT RDX }
    /* +0x7e4828 */ __asm { MOV R10,-0x2c54fb107d6259db }
    /* +0x7e4832 */ __asm { IMUL R10,RDX }
    /* +0x7e4836 */ __asm { MOV RDX,-0x4194cea90477df8e }
    /* +0x7e4840 */ __asm { CMP R10,RDX }
    /* +0x7e4843 */ __asm { JZ 0x7fffa4f5a2e0 }
    /* +0x7e4849 */ __asm { MOV R8D,0x7f35dbab }
    /* +0x7e484f */ __asm { MOV ECX,0x58250fda }
    /* +0x7e4854 */ __asm { NOT ECX }
    /* +0x7e4856 */ __asm { SUB R8D,ESI }
    /* +0x7e4859 */ __asm { ADD ECX,ESI }
    /* +0x7e485b */ __asm { MOV RDX,RAX }
    /* +0x7e485e */ __asm { ADD RDX,RCX }
    /* +0x7e4861 */ __asm { ROL R8D,0xd }
    /* +0x7e4865 */ __asm { XOR R8D,0xc0000006 }
    /* +0x7e486c */ __asm { MOV R9D,0x1bbc1d52 }
    /* +0x7e4872 */ __asm { SUB R9D,ESI }
    /* +0x7e4875 */ __asm { ADD R9D,0x25c905b }
    /* +0x7e487c */ __asm { MOVZX R10D,uint8_t ptr [RCX + RAX*0x1 + 0x9] }
    /* +0x7e4882 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R10*0x4 + 0x13] }
    /* +0x7e4888 */ __asm { NOT CL }
    /* +0x7e488a */ __asm { ROL CL,0x3 }
    /* +0x7e488d */ __asm { MOV uint8_t ptr [RBP + 0x60],CL }
    /* +0x7e4890 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R10*0x4 + 0x14] }
    /* +0x7e4896 */ __asm { NOT CL }
    /* +0x7e4898 */ __asm { ROL CL,0x3 }
    /* +0x7e489b */ __asm { MOV uint8_t ptr [RBP + 0x61],CL }
    /* +0x7e489e */ __asm { MOVZX ECX,uint8_t ptr [RDX + R10*0x4 + 0x15] }
    /* +0x7e48a4 */ __asm { NOT CL }
    /* +0x7e48a6 */ __asm { ROL CL,0x3 }
    /* +0x7e48a9 */ __asm { MOV uint8_t ptr [RBP + 0x62],CL }
    /* +0x7e48ac */ __asm { MOVZX ECX,uint8_t ptr [RDX + R10*0x4 + 0x16] }
    /* +0x7e48b2 */ __asm { NOT CL }
    /* +0x7e48b4 */ __asm { ROL CL,0x3 }
    /* +0x7e48b7 */ __asm { MOV uint8_t ptr [RBP + 0x63],CL }
    /* +0x7e48ba */ __asm { MOV ECX,0x97cd0fa7 }
    /* +0x7e48bf */ __asm { XOR ECX,dword ptr [RBP + 0x60] }
    /* +0x7e48c2 */ __asm { MOV EAX,0x1 }
    /* +0x7e48c7 */ __asm { SHL EAX,CL }
    /* +0x7e48c9 */ __asm { CMP R9,R8 }
    /* +0x7e48cc */ __asm { JGE 0x7fffa4f56cfc }
    /* +0x7e48d2 */ __asm { AND EAX,ECX }
    /* +0x7e48d4 */ __asm { JNZ 0x7fffa4f56cfc }
    /* +0x7e48da */ __asm { MOV dword ptr [RBP + 0x60],0xe7bfbf33 }
    /* +0x7e48e1 */ __asm { MOV R8D,dword ptr [RBP + 0x60] }
    /* +0x7e48e5 */ __asm { CMP R8D,0x4f37e841 }
    /* +0x7e48ec */ __asm { JBE 0x7fffa4f5a2ec }
    /* +0x7e48f2 */ __asm { MOV R8D,0x19830aff }
    /* +0x7e48f8 */ __asm { XOR R8D,ESI }
    /* +0x7e48fb */ __asm { ROL R8D,0x1b }
    /* +0x7e48ff */ __asm { PUSHFQ }
    /* +0x7e4900 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x7e4908 */ __asm { POPFQ }
    /* +0x7e4909 */ __asm { MOV dword ptr [RBP + 0x60],R8D }
    /* +0x7e490d */ __asm { MOV R8D,dword ptr [RBP + 0x60] }
    /* +0x7e4911 */ __asm { TEST R8D,R8D }
    /* +0x7e4914 */ __asm { NOP }
    /* +0x7e4915 */ __asm { NOP }
    /* +0x7e4916 */ __asm { NOP }
    /* +0x7e4917 */ __asm { NOP }
    /* +0x7e4918 */ __asm { NOP }
    /* +0x7e4919 */ __asm { NOP }
    /* +0x7e491a */ __asm { NOP }
    /* +0x7e491b */ __asm { NOP }
    /* +0x7e491c */ __asm { NOP }
    /* +0x7e491d */ __asm { NOP }
    /* +0x7e491e */ __asm { NOP }
    /* +0x7e491f */ __asm { NOP }
    /* +0x7e4920 */ __asm { NOP }
    /* +0x7e4921 */ __asm { NOP }
    /* +0x7e4922 */ __asm { NOP }
    /* +0x7e4923 */ __asm { NOP }
    /* +0x7e4924 */ __asm { LEA R10,[0x7fffa478ca6f] }
    /* +0x7e492b */ __asm { LEA R11,[0x7fffa478854b] }
    /* +0x7e4932 */ __asm { MOV R9W,0x1543 }
    /* +0x7e4937 */ __asm { MOV R8W,0xe45c }
    /* +0x7e493c */ __asm { MOV AX,0xd776 }
    /* +0x7e4940 */ __asm { IMUL EAX,EAX,0x2303 }
    /* +0x7e4946 */ __asm { MOV ECX,ESI }
    /* +0x7e4948 */ __asm { ROR AX,CL }
    /* +0x7e494b */ __asm { MOVSX RAX,AX }
    /* +0x7e494f */ __asm { ADD R9D,0xffffa993 }
    /* +0x7e4956 */ __asm { IMUL R9D,dword ptr [RBP + 0x28] }
    /* +0x7e495b */ __asm { NOT R9D }
    /* +0x7e495e */ __asm { MOVSX RDX,R9W }
    /* +0x7e4962 */ __asm { ADD RDX,R11 }
    /* +0x7e4965 */ __asm { MOVZX R10D,uint8_t ptr [R10 + RAX*0x1 + 0x8] }
    /* +0x7e496b */ __asm { MOVZX EAX,uint8_t ptr [RDX + R10*0x8 + 0xa] }
    /* +0x7e4971 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R10*0x8 + 0xb] }
    /* +0x7e4977 */ __asm { NOT AL }
    /* +0x7e4979 */ __asm { MOVZX R11D,uint8_t ptr [RDX + R10*0x8 + 0x10] }
    /* +0x7e497f */ __asm { NOT R11B }
    /* +0x7e4982 */ __asm { NOT CL }
    /* +0x7e4984 */ __asm { ROL CL,0x5 }
    /* +0x7e4987 */ __asm { MOVZX R9D,uint8_t ptr [RDX + R10*0x8 + 0xd] }
    /* +0x7e498d */ __asm { NOT R9B }
    /* +0x7e4990 */ __asm { ROL R9B,0x5 }
    /* +0x7e4994 */ __asm { MOV uint8_t ptr [RBP + 0x64],R9B }
    /* +0x7e4998 */ __asm { ADD R8D,-0xd }
    /* +0x7e499c */ __asm { XOR R8D,ESI }
    /* +0x7e499f */ __asm { ROL R11B,0x5 }
    /* +0x7e49a3 */ __asm { ADD R8D,0x6b57 }
    /* +0x7e49aa */ __asm { ROL AL,0x5 }
    /* +0x7e49ad */ __asm { MOV uint8_t ptr [RBP + 0x61],AL }
    /* +0x7e49b0 */ __asm { MOVZX EAX,uint8_t ptr [RDX + R10*0x8 + 0xc] }
    /* +0x7e49b6 */ __asm { NOT AL }
    /* +0x7e49b8 */ __asm { ROL AL,0x5 }
    /* +0x7e49bb */ __asm { MOV uint8_t ptr [RBP + 0x63],AL }
    /* +0x7e49be */ __asm { MOV uint8_t ptr [RBP + 0x62],CL }
    /* +0x7e49c1 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R10*0x8 + 0x9] }
    /* +0x7e49c7 */ __asm { MOV uint8_t ptr [RBP + 0x67],R11B }
    /* +0x7e49cb */ __asm { NOT CL }
    /* +0x7e49cd */ __asm { ROL CL,0x5 }
    /* +0x7e49d0 */ __asm { MOV uint8_t ptr [RBP + 0x60],CL }
    /* +0x7e49d3 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R10*0x8 + 0xf] }
    /* +0x7e49d9 */ __asm { NOT CL }
    /* +0x7e49db */ __asm { ROL CL,0x5 }
    /* +0x7e49de */ __asm { MOVZX R8D,R8W }
    /* +0x7e49e2 */ __asm { MOV uint8_t ptr [RBP + 0x66],CL }
    /* +0x7e49e5 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R10*0x8 + 0xe] }
    /* +0x7e49eb */ __asm { NOT CL }
    /* +0x7e49ed */ __asm { ROL CL,0x5 }
    /* +0x7e49f0 */ __asm { MOV uint8_t ptr [RBP + 0x65],CL }
    /* +0x7e49f3 */ __asm { MOV R9,qword ptr [RBP + 0x60] }
    /* +0x7e49f7 */ __asm { MOV RDX,qword ptr GS:[R8] }
    /* +0x7e49fb */ __asm { MOV R10,qword ptr [RBP + 0x198] }
    /* +0x7e4a02 */ __asm { MOV qword ptr [RBP + 0x100],R10 }
    /* +0x7e4a09 */ __asm { MOV R10,qword ptr [R10 + -0x1b0] }
    /* +0x7e4a10 */ __asm { IMUL R10,qword ptr [RDX + 0x168] }
    /* +0x7e4a18 */ __asm { MOV RDX,0x2249277d1cb4497f }
    /* +0x7e4a22 */ __asm { CMP R10,RDX }
    /* +0x7e4a25 */ __asm { NOP }
    /* +0x7e4a26 */ __asm { NOP }
    /* +0x7e4a27 */ __asm { NOP }
    /* +0x7e4a28 */ __asm { NOP }
    /* +0x7e4a29 */ __asm { NOP }
    /* +0x7e4a2a */ __asm { NOP }
    /* +0x7e4a2b */ __asm { NOP }
    /* +0x7e4a2c */ __asm { NOP }
    /* +0x7e4a2d */ __asm { NOP }
    /* +0x7e4a2e */ __asm { NOP }
    /* +0x7e4a2f */ __asm { NOP }
    /* +0x7e4a30 */ __asm { NOP }
    /* +0x7e4a31 */ __asm { NOP }
    /* +0x7e4a32 */ __asm { NOP }
    /* +0x7e4a33 */ __asm { NOP }
    /* +0x7e4a34 */ __asm { NOP }
    /* +0x7e4a35 */ __asm { NOP }
    /* +0x7e6cfc */ __asm { MOV R8W,0xa12c }
    /* +0x7e6d01 */ __asm { IMUL R8D,R8D,0x1e9d }
    /* +0x7e6d08 */ __asm { NOT R8D }
    /* +0x7e6d0b */ __asm { ROL R8W,0x4 }
    /* +0x7e6d10 */ __asm { MOVZX R8D,R8W }
    /* +0x7e6d14 */ __asm { MOV RDX,qword ptr GS:[R8] }
    /* +0x7e6d18 */ __asm { MOV R10,-0x40e4114357bab3a1 }
    /* +0x7e6d22 */ __asm { SUB RDX,R10 }
    /* +0x7e6d25 */ __asm { ADD RDX,0x430 }
    /* +0x7e6d2c */ __asm { ROL RDX,0x2c }
    /* +0x7e6d30 */ __asm { MOV R10,0x89f8f58a16dc1ff }
    /* +0x7e6d3a */ __asm { IMUL R10,RDX }
    /* +0x7e6d3e */ __asm { MOV RDX,0x5e829c8933b5b557 }
    /* +0x7e6d48 */ __asm { CMP R10,RDX }
    /* +0x7e6d4b */ __asm { NOP }
    /* +0x7e6d4c */ __asm { NOP }
    /* +0x7e6d4d */ __asm { NOP }
    /* +0x7e6d4e */ __asm { NOP }
    /* +0x7e6d4f */ __asm { NOP }
    /* +0x7e6d50 */ __asm { NOP }
    /* +0x7e6d51 */ __asm { NOP }
    /* +0x7e6d52 */ __asm { NOP }
    /* +0x7e6d53 */ __asm { NOP }
    /* +0x7e6d54 */ __asm { NOP }
    /* +0x7e6d55 */ __asm { NOP }
    /* +0x7e6d56 */ __asm { NOP }
    /* +0x7e6d57 */ __asm { NOP }
    /* +0x7e6d58 */ __asm { NOP }
    /* +0x7e6d59 */ __asm { NOP }
    /* +0x7e6d5a */ __asm { XOR R12D,R12D }
    /* +0x7e6d5d */ __asm { JMP 0x7fffa4f5aeca }
    /* +0x7ea2e0 */ __asm { INSD RDI,DX }
    /* +0x7ea2e2 */ __asm { CMP EAX,0x7dca8daa }
    /* +0x7ea2e7 */ __asm { JMP 0x7fffa4f54849 }
    /* +0x7ea2ec */ __asm { PUSHFQ }
    /* +0x7eaeca */ __asm { MOV R11D,R12D }
    /* +0x7eaecd */ __asm { MOVAPS XMM11,xmmword ptr [RBP + 0x110] }
    /* +0x7eaed5 */ __asm { MOVAPS XMM10,xmmword ptr [RBP + 0x120] }
    /* +0x7eaedd */ __asm { MOVAPS XMM12,xmmword ptr [RBP + 0x130] }
    /* +0x7eaee5 */ __asm { MOVAPS XMM8,xmmword ptr [RBP + 0x140] }
    /* +0x7eaeed */ __asm { ADD RSP,0x1d8 }
    /* +0x7eaef4 */ __asm { POP R13 }
    /* +0x7eaef6 */ __asm { POP RSI }
    /* +0x7eaef7 */ __asm { POP R12 }
    /* +0x7eaef9 */ __asm { POP R14 }
    /* +0x7eaefb */ __asm { POP RBX }
    /* +0x7eaefc */ __asm { POP R15 }
    /* +0x7eaefe */ __asm { POP RDI }
    /* +0x7eaeff */ __asm { POP RBP }
    /* +0x7eaf00 */ __asm { RET }
}


// ============================================================================
// Function : Unwind@7fffa4f5b290  |  RVA: 0x7eb290  |  Size: 4696 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4f5b290(void) {
    /* +0x7eb290 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x7eb295 */ __asm { PUSH RBP }
    /* +0x7eb296 */ __asm { PUSH RDI }
    /* +0x7eb297 */ __asm { PUSH R15 }
    /* +0x7eb299 */ __asm { PUSH RBX }
    /* +0x7eb29a */ __asm { PUSH R14 }
    /* +0x7eb29c */ __asm { PUSH R12 }
    /* +0x7eb29e */ __asm { PUSH RSI }
    /* +0x7eb29f */ __asm { PUSH R13 }
    /* +0x7eb2a1 */ __asm { SUB RSP,0x98 }
    /* +0x7eb2a8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x7eb2af */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM8 }
    /* +0x7eb2b6 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM12 }
    /* +0x7eb2bd */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM10 }
    /* +0x7eb2c4 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM11 }
    /* +0x7eb2ce */ __asm { MOV R15,qword ptr [RBP + 0x30] }
    /* +0x7eb2d2 */ __asm { MOV R8D,0x34d72440 }
    /* +0x7eb2d8 */ __asm { RDTSC }
    /* +0x7eb2da */ __asm { SHL RDX,0x20 }
    /* +0x7eb2de */ __asm { OR RDX,RAX }
    /* +0x7eb2e1 */ __asm { MOV R10,-0x30ebf64fafbc6efb }
    /* +0x7eb2eb */ __asm { IMUL RDX,R10 }
    /* +0x7eb2ef */ __asm { MOV R10,-0x22b18422c4a9c65e }
    /* +0x7eb2f9 */ __asm { LEA RCX,[RDX + R10*0x1] }
    /* +0x7eb2fd */ __asm { MOV RDX,RCX }
    /* +0x7eb300 */ __asm { SHR RDX,0x2d }
    /* +0x7eb304 */ __asm { MOV R9,RCX }
    /* +0x7eb307 */ __asm { SHR R9,0x1b }
    /* +0x7eb30b */ __asm { MOV EAX,R9D }
    /* +0x7eb30e */ __asm { XOR EAX,EDX }
    /* +0x7eb310 */ __asm { AND R9D,EDX }
    /* +0x7eb313 */ __asm { SHR RCX,0x3b }
    /* +0x7eb317 */ __asm { MOV EDX,0xd5628cda }
    /* +0x7eb31c */ __asm { SUB EDX,R8D }
    /* +0x7eb31f */ __asm { CMP RDX,0x131f6cfd }
    /* +0x7eb326 */ __asm { CMOVNZ R9D,EAX }
    /* +0x7eb32a */ __asm { ROR R9D,CL }
    /* +0x7eb32d */ __asm { AND R9D,0x3 }
    /* +0x7eb331 */ __asm { CMP R9D,0x2 }
    /* +0x7eb335 */ __asm { JNC 0x7fffa4f5b540 }
    /* +0x7eb33b */ __asm { CMP R9D,0x1 }
    /* +0x7eb33f */ __asm { JZ 0x7fffa4f5b79b }
    /* +0x7eb345 */ __asm { MOV R8W,0x1f }
    /* +0x7eb34a */ __asm { XOR R8D,0x2f }
    /* +0x7eb34e */ __asm { PXOR XMM3,XMM3 }
    /* +0x7eb352 */ __asm { MOV RCX,qword ptr [RBP + 0x1c0] }
    /* +0x7eb359 */ __asm { ROL R8W,CL }
    /* +0x7eb35d */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM3 }
    /* +0x7eb362 */ __asm { ROL R8W,0xa }
    /* +0x7eb367 */ __asm { MOVZX R8D,R8W }
    /* +0x7eb36b */ __asm { MOV RDX,qword ptr GS:[R8] }
    /* +0x7eb36f */ __asm { MOV R10,0x757114fbea5ffdf }
    /* +0x7eb379 */ __asm { IMUL R10,qword ptr [RDX + 0x60] }
    /* +0x7eb37e */ __asm { ROL R10,0x1c }
    /* +0x7eb382 */ __asm { MOV RDX,-0x6fa434800ce60ff }
    /* +0x7eb38c */ __asm { IMUL RDX,R10 }
    /* +0x7eb390 */ __asm { MOV R10,-0x7d12dcf39a06b879 }
    /* +0x7eb39a */ __asm { CMP RDX,R10 }
    /* +0x7eb39d */ __asm { NOP }
    /* +0x7eb39e */ __asm { NOP }
    /* +0x7eb39f */ __asm { NOP }
    /* +0x7eb3a0 */ __asm { NOP }
    /* +0x7eb3a1 */ __asm { NOP }
    /* +0x7eb3a2 */ __asm { MOV R8D,0xc882a221 }
    /* +0x7eb3a8 */ __asm { MOV dword ptr [RBP + 0x60],0x0 }
    /* +0x7eb3af */ __asm { MOV RCX,qword ptr [RBP + 0x1c0] }
    /* +0x7eb3b6 */ __asm { XOR R8D,ECX }
    /* +0x7eb3b9 */ __asm { MOV EAX,0x89a33088 }
    /* +0x7eb3be */ __asm { SUB EAX,R8D }
    /* +0x7eb3c1 */ __asm { MOV dword ptr [RBP + 0xc0],EAX }
    /* +0x7eb3c7 */ __asm { MOV R8D,dword ptr [RBP + 0xc0] }
    /* +0x7eb3ce */ __asm { MOV R8W,0x35a2 }
    /* +0x7eb3d3 */ __asm { IMUL R8D,R8D,-0x774d }
    /* +0x7eb3da */ __asm { SUB R8D,ECX }
    /* +0x7eb3dd */ __asm { MOVZX R8D,R8W }
    /* +0x7eb3e1 */ __asm { XOR R8,0x1f80 }
    /* +0x7eb3e8 */ __asm { MOV RDX,qword ptr GS:[R8] }
    /* +0x7eb3ec */ __asm { MOV RDX,qword ptr [RDX + 0x60] }
    /* +0x7eb3f0 */ __asm { MOV R8W,0x4239 }
    /* +0x7eb3f5 */ __asm { MOV RCX,qword ptr [RBP + 0x28] }
    /* +0x7eb3f9 */ __asm { IMUL ECX,R8D }
    /* +0x7eb3fd */ __asm { NOT ECX }
    /* +0x7eb3ff */ __asm { MOVZX R8D,CX }
    /* +0x7eb403 */ __asm { MOV R10,qword ptr GS:[R8] }
    /* +0x7eb407 */ __asm { MOVQ XMM3,RDX }
    /* +0x7eb40c */ __asm { MOV R8D,0x108abe37 }
    /* +0x7eb412 */ __asm { MOV R10,qword ptr [R10 + 0x30] }
    /* +0x7eb416 */ __asm { MOVQ XMM0,R10 }
    /* +0x7eb41b */ __asm { PSUBQ XMM3,XMM0 }
    /* +0x7eb41f */ __asm { XOR RDX,R10 }
    /* +0x7eb422 */ __asm { MOVQ R10,XMM3 }
    /* +0x7eb427 */ __asm { MOV R9,qword ptr [RBP + 0xf0] }
    /* +0x7eb42e */ __asm { IMUL R8D,R9D }
    /* +0x7eb432 */ __asm { ADD R8D,0xd9c576cb }
    /* +0x7eb439 */ __asm { MOV ECX,0x8a7d4fbc }
    /* +0x7eb43e */ __asm { IMUL ECX,R9D }
    /* +0x7eb442 */ __asm { ADD ECX,0xecfa0c9e }
    /* +0x7eb448 */ __asm { CMP RCX,R8 }
    /* +0x7eb44b */ __asm { CMOVNC R10,RDX }
    /* +0x7eb44f */ __asm { MOV RDX,0x7155d2562b31d71 }
    /* +0x7eb459 */ __asm { CMP R10,RDX }
    /* +0x7eb45c */ __asm { NOP }
    /* +0x7eb45d */ __asm { NOP }
    /* +0x7eb45e */ __asm { NOP }
    /* +0x7eb45f */ __asm { NOP }
    /* +0x7eb460 */ __asm { NOP }
    /* +0x7eb461 */ __asm { MOV RDX,-0x55a6af161ab06e20 }
    /* +0x7eb46b */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x7eb472 */ __asm { MOV R10,0x0 }
    /* +0x7eb479 */ __asm { NOP }
    /* +0x7eb47b */ __asm { LEA R10,[0x7fffa478726d] }
    /* +0x7eb482 */ __asm { MOV R11D,0xa5d4ccf4 }
    /* +0x7eb488 */ __asm { XOR R11,RDX }
    /* +0x7eb48b */ __asm { SUB R11,qword ptr [RBP + 0x1c0] }
    /* +0x7eb492 */ __asm { ROL R11,0x27 }
    /* +0x7eb496 */ __asm { CMP R10,R11 }
    /* +0x7eb499 */ __asm { JZ 0x7fffa4f5c513 }
    /* +0x7eb49f */ __asm { MOV R8W,0xbd7f }
    /* +0x7eb4a4 */ __asm { MOV DX,0xd46 }
    /* +0x7eb4a8 */ __asm { MOV RCX,qword ptr [RBP + 0x1c0] }
    /* +0x7eb4af */ __asm { XOR EDX,ECX }
    /* +0x7eb4b1 */ __asm { MOV qword ptr [RBP + 0xc0],R9 }
    /* +0x7eb4b8 */ __asm { MOV R9W,0x8a00 }
    /* +0x7eb4bd */ __asm { IMUL R8D,R8D,0x1d81 }
    /* +0x7eb4c4 */ __asm { ROL R8W,0x7 }
    /* +0x7eb4c9 */ __asm { MOV EAX,dword ptr [R10 + -0x23e1] }
    /* +0x7eb4d0 */ __asm { ADD EDX,0xffff822f }
    /* +0x7eb4d6 */ __asm { MOVSX R10,DX }
    /* +0x7eb4da */ __asm { LEA RBX,[0x7fffa4782a2e] }
    /* +0x7eb4e1 */ __asm { IMUL R9D,R9D,0x7941 }
    /* +0x7eb4e8 */ __asm { ROR R9W,CL }
    /* +0x7eb4ec */ __asm { MOVZX EDX,R9W }
    /* +0x7eb4f0 */ __asm { NOT R8D }
    /* +0x7eb4f3 */ __asm { MOVZX R9D,R8W }
    /* +0x7eb4f7 */ __asm { LEA R8,[RBP + 0x60] }
    /* +0x7eb4fb */ __asm { SYSCALL }
    /* +0x7eb4fd */ __asm { MOV RDX,-0x68e30c78e78c1c06 }
    /* +0x7eb507 */ __asm { CMP RBX,RDX }
    /* +0x7eb50a */ __asm { JZ 0x7fffa4f5c51b }
    /* +0x7eb510 */ __asm { MOV R8D,0xc00f2a8d }
    /* +0x7eb516 */ __asm { XOR R8D,0x1efdc4f0 }
    /* +0x7eb51d */ __asm { MOV RCX,qword ptr [RBP + 0x1c0] }
    /* +0x7eb524 */ __asm { ROR R8D,CL }
    /* +0x7eb527 */ __asm { MOV qword ptr [RBP + 0x60],R10 }
    /* +0x7eb52b */ __asm { IMUL R8D,R8D,-0x4cfb4fb3 }
    /* +0x7eb532 */ __asm { MOVSXD R10,R8D }
    /* +0x7eb535 */ __asm { MOV EAX,dword ptr [RBX + 0x1c56] }
    /* +0x7eb53b */ __asm { JMP 0x7fffa4f5bd67 }
    /* +0x7eb540 */ __asm { CMP R9D,0x3 }
    /* +0x7eb544 */ __asm { JZ 0x7fffa4f5b93f }
    /* +0x7eb54a */ __asm { LEA R10,[0x7fffa47be090] }
    /* +0x7eb551 */ __asm { MOV R9,R10 }
    /* +0x7eb554 */ __asm { ROL R9,0x10 }
    /* +0x7eb558 */ __asm { ADD R9,-0x731e3029 }
    /* +0x7eb55f */ __asm { MOV RDX,0x1ca0b11abe165a10 }
    /* +0x7eb569 */ __asm { CMP R9,RDX }
    /* +0x7eb56c */ __asm { JZ 0x7fffa4f5c523 }
    /* +0x7eb572 */ __asm { MOV CX,0x21ea }
    /* +0x7eb576 */ __asm { MOV R8D,0xe09631d0 }
    /* +0x7eb57c */ __asm { IMUL R8D,dword ptr [RBP + 0xf0] }
    /* +0x7eb584 */ __asm { IMUL ECX,dword ptr [RBP + 0x28] }
    /* +0x7eb588 */ __asm { ADD ECX,0xffff84e9 }
    /* +0x7eb58e */ __asm { XOR R8D,0xfc356404 }
    /* +0x7eb595 */ __asm { MOVSX R9,CX }
    /* +0x7eb599 */ __asm { MOV RDX,R10 }
    /* +0x7eb59c */ __asm { ADD RDX,R9 }
    /* +0x7eb59f */ __asm { MOVZX R10D,uint8_t ptr [R10 + R9*0x1 + 0xe] }
    /* +0x7eb5a5 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R10*0x4 + 0x1e] }
    /* +0x7eb5ab */ __asm { ROL CL,0x4 }
    /* +0x7eb5ae */ __asm { MOV uint8_t ptr [RBP + 0x60],CL }
    /* +0x7eb5b1 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R10*0x4 + 0x1f] }
    /* +0x7eb5b7 */ __asm { ROL CL,0x4 }
    /* +0x7eb5ba */ __asm { MOV uint8_t ptr [RBP + 0x61],CL }
    /* +0x7eb5bd */ __asm { MOVZX ECX,uint8_t ptr [RDX + R10*0x4 + 0x20] }
    /* +0x7eb5c3 */ __asm { ROL CL,0x4 }
    /* +0x7eb5c6 */ __asm { MOV uint8_t ptr [RBP + 0x62],CL }
    /* +0x7eb5c9 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R10*0x4 + 0x21] }
    /* +0x7eb5cf */ __asm { ROL CL,0x4 }
    /* +0x7eb5d2 */ __asm { MOV uint8_t ptr [RBP + 0x63],CL }
    /* +0x7eb5d5 */ __asm { MOV EAX,0x65e8ce72 }
    /* +0x7eb5da */ __asm { XOR EAX,dword ptr [RBP + 0x60] }
    /* +0x7eb5dd */ __asm { IMUL R8D,R8D,0xcf6b1f9 }
    /* +0x7eb5e4 */ __asm { MOVD XMM3,EAX }
    /* +0x7eb5e8 */ __asm { MOVZX ECX,uint8_t ptr [R8] }
    /* +0x7eb5ec */ __asm { MOV R8D,0x1 }
    /* +0x7eb5f2 */ __asm { SHL R8D,CL }
    /* +0x7eb5f5 */ __asm { MOVD XMM0,R8D }
    /* +0x7eb5fa */ __asm { PAND XMM0,XMM3 }
    /* +0x7eb5fe */ __asm { MOVD R8D,XMM0 }
    /* +0x7eb603 */ __asm { TEST R8D,R8D }
    /* +0x7eb606 */ __asm { JZ 0x7fffa4f5bbd2 }
    /* +0x7eb60c */ __asm { MOV R10D,0xc5620d30 }
    /* +0x7eb612 */ __asm { MOV RCX,qword ptr [RBP + 0x1c0] }
    /* +0x7eb619 */ __asm { LEA R8D,[RCX + R10*0x1] }
    /* +0x7eb61d */ __asm { ADD R8D,0xa727d0ae }
    /* +0x7eb624 */ __asm { PXOR XMM3,XMM3 }
    /* +0x7eb628 */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM3 }
    /* +0x7eb62d */ __asm { MOV dword ptr [RBP + 0xc0],R8D }
    /* +0x7eb634 */ __asm { MOV R8D,dword ptr [RBP + 0xc0] }
    /* +0x7eb63b */ __asm { MOV R8W,0xfff4 }
    /* +0x7eb640 */ __asm { XOR R8D,0xfffff7f4 }
    /* +0x7eb647 */ __asm { IMUL R8D,R8D,0x4de3 }
    /* +0x7eb64e */ __asm { ROR R8W,CL }
    /* +0x7eb652 */ __asm { MOV dword ptr [RBP + 0x60],0x0 }
    /* +0x7eb659 */ __asm { MOVZX R8D,R8W }
    /* +0x7eb65d */ __asm { MOV RDX,qword ptr GS:[R8] }
    /* +0x7eb661 */ __asm { MOV R8D,0xd8276b55 }
    /* +0x7eb667 */ __asm { NOT R8D }
    /* +0x7eb66a */ __asm { ADD R8D,ECX }
    /* +0x7eb66d */ __asm { MOV RDX,qword ptr [RDX + 0x18] }
    /* +0x7eb671 */ __asm { OR RDX,qword ptr [R8] }
    /* +0x7eb674 */ __asm { MOV R10,-0x682a35cde550ede5 }
    /* +0x7eb67e */ __asm { CMP RDX,R10 }
    /* +0x7eb681 */ __asm { NOP }
    /* +0x7eb682 */ __asm { NOP }
    /* +0x7eb683 */ __asm { NOP }
    /* +0x7eb684 */ __asm { NOP }
    /* +0x7eb685 */ __asm { NOP }
    /* +0x7eb686 */ __asm { MOV dword ptr [RBP + 0xc0],0x315d90df }
    /* +0x7eb690 */ __asm { MOV R8D,dword ptr [RBP + 0xc0] }
    /* +0x7eb697 */ __asm { LEA R10,[0x7fffa47c35af] }
    /* +0x7eb69e */ __asm { MOV RDX,-0x1e35b9c38a1abc3a }
    /* +0x7eb6a8 */ __asm { CMP R10,RDX }
    /* +0x7eb6ab */ __asm { NOP }
    /* +0x7eb6ac */ __asm { NOP }
    /* +0x7eb6ad */ __asm { NOP }
    /* +0x7eb6ae */ __asm { NOP }
    /* +0x7eb6af */ __asm { NOP }
    /* +0x7eb6b0 */ __asm { NOP }
    /* +0x7eb6b1 */ __asm { NOP }
    /* +0x7eb6b2 */ __asm { NOP }
    /* +0x7eb6b3 */ __asm { NOP }
    /* +0x7eb6b4 */ __asm { NOP }
    /* +0x7eb6b5 */ __asm { NOP }
    /* +0x7eb6b6 */ __asm { NOP }
    /* +0x7eb6b7 */ __asm { NOP }
    /* +0x7eb6b8 */ __asm { MOV R9W,0xd89a }
    /* +0x7eb6bd */ __asm { MOV RDX,-0x52d2a50f70be3f9 }
    /* +0x7eb6c7 */ __asm { IMUL RDX,RDX,0x6fac869 }
    /* +0x7eb6ce */ __asm { LEA RBX,[0x7fffa47c3010] }
    /* +0x7eb6d5 */ __asm { MOV R8,RBX }
    /* +0x7eb6d8 */ __asm { MOV qword ptr [RBP + 0xc0],RAX }
    /* +0x7eb6df */ __asm { MOV R11D,0xb349be9b }
    /* +0x7eb6e5 */ __asm { MOV EAX,dword ptr [R10 + -0x70e7] }
    /* +0x7eb6ec */ __asm { MOV R10D,0xbf2c14fa }
    /* +0x7eb6f2 */ __asm { ADD R10D,0x91a0b253 }
    /* +0x7eb6f9 */ __asm { ROR R10D,CL }
    /* +0x7eb6fc */ __asm { XOR R8,0x55d35bbd }
    /* +0x7eb703 */ __asm { ADD R9D,ECX }
    /* +0x7eb706 */ __asm { ADD R9D,0xffffb6e0 }
    /* +0x7eb70d */ __asm { IMUL R10D,R10D,-0x3fffff6b }
    /* +0x7eb714 */ __asm { MOVSXD R10,R10D }
    /* +0x7eb717 */ __asm { IMUL R11D,R11D,0x33809f5f }
    /* +0x7eb71e */ __asm { ADD R11D,ECX }
    /* +0x7eb721 */ __asm { MOVSXD R11,R11D }
    /* +0x7eb724 */ __asm { SUB R8,R11 }
    /* +0x7eb727 */ __asm { MOV R14,0x50fd6e5722c2f947 }
    /* +0x7eb731 */ __asm { IMUL R14,R8 }
    /* +0x7eb735 */ __asm { MOV R13,-0x4276af9c56097e5 }
    /* +0x7eb73f */ __asm { ADD R13,RDX }
    /* +0x7eb742 */ __asm { ROL R13,CL }
    /* +0x7eb745 */ __asm { MOVZX R9D,R9W }
    /* +0x7eb749 */ __asm { MOV R8W,0xbf7f }
    /* +0x7eb74e */ __asm { ADD R8D,0xffffdb4b }
    /* +0x7eb755 */ __asm { XOR R8D,0x1558 }
    /* +0x7eb75c */ __asm { ADD R8D,ECX }
    /* +0x7eb75f */ __asm { MOVZX EDX,R8W }
    /* +0x7eb763 */ __asm { LEA R8,[RBP + 0x60] }
    /* +0x7eb767 */ __asm { SYSCALL }
    /* +0x7eb769 */ __asm { CMP R13,R14 }
    /* +0x7eb76c */ __asm { JZ 0x7fffa4f5c53a }
    /* +0x7eb772 */ __asm { MOV R8D,0xab9083ba }
    /* +0x7eb778 */ __asm { MOV RCX,qword ptr [RBP + 0x1c0] }
    /* +0x7eb77f */ __asm { SUB R8D,ECX }
    /* +0x7eb782 */ __asm { ADD R8D,0xac94ecdb }
    /* +0x7eb789 */ __asm { MOVSXD R10,R8D }
    /* +0x7eb78c */ __asm { MOV qword ptr [RBP + 0x60],R9 }
    /* +0x7eb790 */ __asm { MOV EAX,dword ptr [RBX + -0x6b08] }
    /* +0x7eb796 */ __asm { JMP 0x7fffa4f5bd67 }
    /* +0x7eb79b */ __asm { MOV R10D,0x62e69352 }
    /* +0x7eb7a1 */ __asm { NOP }
    /* +0x7eb7a2 */ __asm { MOV R9,0x0 }
    /* +0x7eb7a9 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x7eb7b0 */ __asm { MOV R8D,dword ptr [R10 + 0x1d176f72] }
    /* +0x7eb7b7 */ __asm { MOV RDX,0x5555555555555556 }
    /* +0x7eb7c1 */ __asm { IMUL R8,RDX }
    /* +0x7eb7c5 */ __asm { MOV RDX,0x5555555555555555 }
    /* +0x7eb7cf */ __asm { CMP R8,RDX }
    /* +0x7eb7d2 */ __asm { JBE 0x7fffa4f5baaa }
    /* +0x7eb7d8 */ __asm { PUSHFQ }
    /* +0x7eb7d9 */ __asm { POP R8 }
    /* +0x7eb7db */ __asm { PXOR XMM3,XMM3 }
    /* +0x7eb7df */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM3 }
    /* +0x7eb7e4 */ __asm { TEST R8D,0x100 }
    /* +0x7eb7eb */ __asm { NOP }
    /* +0x7eb7ec */ __asm { NOP }
    /* +0x7eb7ed */ __asm { NOP }
    /* +0x7eb7ee */ __asm { NOP }
    /* +0x7eb7ef */ __asm { NOP }
    /* +0x7eb7f0 */ __asm { MOV dword ptr [RBP + 0xc0],0x768007d4 }
    /* +0x7eb7fa */ __asm { MOV R8D,dword ptr [RBP + 0xc0] }
    /* +0x7eb801 */ __asm { TEST R8D,R8D }
    /* +0x7eb804 */ __asm { NOP }
    /* +0x7eb805 */ __asm { NOP }
    /* +0x7eb806 */ __asm { NOP }
    /* +0x7eb807 */ __asm { NOP }
    /* +0x7eb808 */ __asm { NOP }
    /* +0x7eb809 */ __asm { MOV dword ptr [RBP + 0x60],0x0 }
    /* +0x7eb810 */ __asm { MOV R8W,0xf1 }
    /* +0x7eb815 */ __asm { XOR R8D,0x91 }
    /* +0x7eb81c */ __asm { ROL R8W,0xa }
    /* +0x7eb821 */ __asm { MOV RCX,qword ptr [RBP + 0x1c0] }
    /* +0x7eb828 */ __asm { ROL R8W,CL }
    /* +0x7eb82c */ __asm { MOVZX R8D,R8W }
    /* +0x7eb830 */ __asm { MOV RDX,qword ptr GS:[R8] }
    /* +0x7eb834 */ __asm { MOV R10,0xd5298e27e521b85 }
    /* +0x7eb83e */ __asm { ADD R10,RCX }
    /* +0x7eb841 */ __asm { ADD R10,0x1510080d }
    /* +0x7eb848 */ __asm { MOV RDX,qword ptr [RDX + 0x18] }
    /* +0x7eb84c */ __asm { ROL RDX,0x3b }
    /* +0x7eb850 */ __asm { MOV R11,-0x3fe8d28142fe1e43 }
    /* +0x7eb85a */ __asm { IMUL R11,RDX }
    /* +0x7eb85e */ __asm { CMP R10,R11 }
    /* +0x7eb861 */ __asm { NOP }
    /* +0x7eb862 */ __asm { NOP }
    /* +0x7eb863 */ __asm { NOP }
    /* +0x7eb864 */ __asm { NOP }
    /* +0x7eb865 */ __asm { NOP }
    /* +0x7eb866 */ __asm { MOV dword ptr [RBP + 0xc0],0x552c096 }
    /* +0x7eb870 */ __asm { MOV R8D,dword ptr [RBP + 0xc0] }
    /* +0x7eb877 */ __asm { TEST R8B,0x1 }
    /* +0x7eb87b */ __asm { JNZ 0x7fffa4f5c54c }
    /* +0x7eb881 */ __asm { LEA R10,[0x7fffa478188e] }
    /* +0x7eb888 */ __asm { MOV R9,R10 }
    /* +0x7eb88b */ __asm { ROL R9,0x38 }
    /* +0x7eb88f */ __asm { ADD R9,-0x3ee88d98 }
    /* +0x7eb896 */ __asm { MOV RDX,-0x1f11c1ef0da176ad }
    /* +0x7eb8a0 */ __asm { CMP R9,RDX }
    /* +0x7eb8a3 */ __asm { JZ 0x7fffa4f5c554 }
    /* +0x7eb8a9 */ __asm { MOV R8W,0xec73 }
    /* +0x7eb8ae */ __asm { LEA RBX,[0x7fffa477fd9f] }
    /* +0x7eb8b5 */ __asm { MOV AX,0x7938 }
    /* +0x7eb8b9 */ __asm { MOV RCX,qword ptr [RBP + 0x28] }
    /* +0x7eb8bd */ __asm { IMUL ECX,EAX }
    /* +0x7eb8c0 */ __asm { ROL CX,0x1 }
    /* +0x7eb8c3 */ __asm { MOVZX R9D,CX }
    /* +0x7eb8c7 */ __asm { MOV EAX,0xffffec9b }
    /* +0x7eb8cc */ __asm { SUB EAX,R8D }
    /* +0x7eb8cf */ __asm { MOV R8W,0xcc84 }
    /* +0x7eb8d4 */ __asm { MOVZX EDX,AX }
    /* +0x7eb8d7 */ __asm { XOR R8D,0xcc84 }
    /* +0x7eb8de */ __asm { ROL R8W,0xd }
    /* +0x7eb8e3 */ __asm { MOV qword ptr [RBP + 0xc0],RAX }
    /* +0x7eb8ea */ __asm { MOV EAX,dword ptr [R10 + 0x35fe] }
    /* +0x7eb8f1 */ __asm { NOT R8D }
    /* +0x7eb8f4 */ __asm { MOVSX R10,R8W }
    /* +0x7eb8f8 */ __asm { LEA R8,[RBP + 0x60] }
    /* +0x7eb8fc */ __asm { SYSCALL }
    /* +0x7eb8fe */ __asm { MOV RDX,-0x420812a309e1d04c }
    /* +0x7eb908 */ __asm { CMP RBX,RDX }
    /* +0x7eb90b */ __asm { JZ 0x7fffa4f5c563 }
    /* +0x7eb911 */ __asm { MOV R8W,0x9ae4 }
    /* +0x7eb916 */ __asm { IMUL R8D,R8D,-0x2e97 }
    /* +0x7eb91d */ __asm { ROL R8W,0x5 }
    /* +0x7eb922 */ __asm { MOV qword ptr [RBP + 0x60],R10 }
    /* +0x7eb926 */ __asm { MOV RCX,qword ptr [RBP + 0x1c0] }
    /* +0x7eb92d */ __asm { SUB R8D,ECX }
    /* +0x7eb930 */ __asm { MOVSX R10,R8W }
    /* +0x7eb934 */ __asm { MOV EAX,dword ptr [RBX + 0x5019] }
    /* +0x7eb93a */ __asm { JMP 0x7fffa4f5bd67 }
    /* +0x7eb93f */ __asm { PXOR XMM3,XMM3 }
    /* +0x7eb943 */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM3 }
    /* +0x7eb948 */ __asm { MOV RDX,qword ptr [RBP + 0x100] }
    /* +0x7eb94f */ __asm { MOV RDX,qword ptr [RDX + -0xb60] }
    /* +0x7eb956 */ __asm { MOV R10,0x226e094f0090c7bb }
    /* +0x7eb960 */ __asm { ADD R10,RDX }
    /* +0x7eb963 */ __asm { MOV RDX,0x228cd29560cbd903 }
    /* +0x7eb96d */ __asm { CMP R10,RDX }
    /* +0x7eb970 */ __asm { NOP }
    /* +0x7eb971 */ __asm { NOP }
    /* +0x7eb972 */ __asm { NOP }
    /* +0x7eb973 */ __asm { NOP }
    /* +0x7eb974 */ __asm { NOP }
    /* +0x7eb975 */ __asm { NOP }
    /* +0x7eb976 */ __asm { NOP }
    /* +0x7eb977 */ __asm { NOP }
    /* +0x7eb978 */ __asm { NOP }
    /* +0x7eb979 */ __asm { NOP }
    /* +0x7eb97a */ __asm { NOP }
    /* +0x7eb97b */ __asm { NOP }
    /* +0x7eb97c */ __asm { NOP }
    /* +0x7eb97d */ __asm { NOP }
    /* +0x7eb97e */ __asm { NOP }
    /* +0x7eb97f */ __asm { NOP }
    /* +0x7eb980 */ __asm { NOP }
    /* +0x7ebaaa */ __asm { PXOR XMM3,XMM3 }
    /* +0x7ebaae */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM3 }
    /* +0x7ebab3 */ __asm { MOV dword ptr [RBP + 0xc0],0xf49d2392 }
    /* +0x7ebabd */ __asm { MOV R8D,dword ptr [RBP + 0xc0] }
    /* +0x7ebac4 */ __asm { CMP R8D,0x470f573c }
    /* +0x7ebacb */ __asm { JBE 0x7fffa4f5c57d }
    /* +0x7ebad1 */ __asm { MOV dword ptr [RBP + 0x60],0x0 }
    /* +0x7ebad8 */ __asm { PUSHFQ }
    /* +0x7ebad9 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x7ebae1 */ __asm { POPFQ }
    /* +0x7ebae2 */ __asm { MOV dword ptr [RBP + 0xc0],0xaf834148 }
    /* +0x7ebaec */ __asm { MOV R8D,dword ptr [RBP + 0xc0] }
    /* +0x7ebaf3 */ __asm { TEST R8D,R8D }
    /* +0x7ebaf6 */ __asm { JS 0x7fffa4f5bb06 }
    /* +0x7ebaf8 */ __asm { RCL DL,0x1 }
    /* +0x7ebafa */ __asm { SHL EDI,0xe7 }
    /* +0x7ebafd */ __asm { POP RSP }
    /* +0x7ebafe */ __asm { RCL dword ptr [RBX + 0x7e],0x82 }
    /* +0x7ebb02 */ __asm { MOV AL,0x4b }
    /* +0x7ebb04 */ __asm { OR AL,0x74 }
    /* +0x7ebb06 */ __asm { MOV dword ptr [RBP + 0xc0],0xbbf9bdad }
    /* +0x7ebb10 */ __asm { MOV R8D,dword ptr [RBP + 0xc0] }
    /* +0x7ebb17 */ __asm { CMP R8D,0x28d0a28a }
    /* +0x7ebb1e */ __asm { JBE 0x7fffa4f5c585 }
    /* +0x7ebb24 */ __asm { LEA R10,[0x7fffa47b77a0] }
    /* +0x7ebb2b */ __asm { MOV RDX,0x27053b191283f6f9 }
    /* +0x7ebb35 */ __asm { CMP R10,RDX }
    /* +0x7ebb38 */ __asm { JZ 0x7fffa4f5c596 }
    /* +0x7ebb3e */ __asm { MOV R8W,0xd7e }
    /* +0x7ebb43 */ __asm { MOV AX,0x7085 }
    /* +0x7ebb47 */ __asm { NOT EAX }
    /* +0x7ebb49 */ __asm { LEA RBX,[0x7fffa47be6f3] }
    /* +0x7ebb50 */ __asm { MOV R9W,0x6e3e }
    /* +0x7ebb55 */ __asm { MOV RCX,qword ptr [RBP + 0x1c0] }
    /* +0x7ebb5c */ __asm { XOR R9D,ECX }
    /* +0x7ebb5f */ __asm { IMUL R9D,R9D,0x5371 }
    /* +0x7ebb66 */ __asm { MOVZX EDX,R9W }
    /* +0x7ebb6a */ __asm { ADD EAX,ECX }
    /* +0x7ebb6c */ __asm { MOVZX R9D,AX }
    /* +0x7ebb70 */ __asm { MOV qword ptr [RBP + 0xc0],RAX }
    /* +0x7ebb77 */ __asm { MOV EAX,dword ptr [R10 + 0x5838] }
    /* +0x7ebb7e */ __asm { XOR R8D,ECX }
    /* +0x7ebb81 */ __asm { ADD R8D,0xffff8217 }
    /* +0x7ebb88 */ __asm { MOVSX R10,R8W }
    /* +0x7ebb8c */ __asm { LEA R8,[RBP + 0x60] }
    /* +0x7ebb90 */ __asm { SYSCALL }
    /* +0x7ebb92 */ __asm { MOV RDX,0x7d1d2ea7a8cb0cd9 }
    /* +0x7ebb9c */ __asm { CMP RBX,RDX }
    /* +0x7ebb9f */ __asm { JZ 0x7fffa4f5c59e }
    /* +0x7ebba5 */ __asm { MOV R8D,0x2d2938ba }
    /* +0x7ebbab */ __asm { MOV RCX,qword ptr [RBP + 0x1c0] }
    /* +0x7ebbb2 */ __asm { SUB R8D,ECX }
    /* +0x7ebbb5 */ __asm { MOV qword ptr [RBP + 0x60],R10 }
    /* +0x7ebbb9 */ __asm { MOV EAX,dword ptr [RBX + -0x21eb] }
    /* +0x7ebbbf */ __asm { ADD R8D,0x2afc37db }
    /* +0x7ebbc6 */ __asm { ROL R8D,0x7 }
    /* +0x7ebbca */ __asm { MOVSXD R10,R8D }
    /* +0x7ebbcd */ __asm { JMP 0x7fffa4f5bd67 }
    /* +0x7ebbd2 */ __asm { PXOR XMM3,XMM3 }
    /* +0x7ebbd6 */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM3 }
    /* +0x7ebbdb */ __asm { MOV dword ptr [RBP + 0xc0],0xecbdef7e }
    /* +0x7ebbe5 */ __asm { MOV R8D,dword ptr [RBP + 0xc0] }
    /* +0x7ebbec */ __asm { TEST R8B,0x1 }
    /* +0x7ebbf0 */ __asm { JNZ 0x7fffa4f5c5a6 }
    /* +0x7ebbf6 */ __asm { MOV RDX,-0x9fc11a2fadf9543 }
    /* +0x7ebc00 */ __asm { MOV dword ptr [RBP + 0x60],0x0 }
    /* +0x7ebc07 */ __asm { CMP qword ptr [RBP + 0x100],RDX }
    /* +0x7ebc0e */ __asm { JZ 0x7fffa4f5c4fb }
    /* +0x7ebc14 */ __asm { MOV dword ptr [RBP + 0xc0],0x9ea8d571 }
    /* +0x7ebc1e */ __asm { MOV R8D,dword ptr [RBP + 0xc0] }
    /* +0x7ebc25 */ __asm { CMP R8D,0xcc4609e3 }
    /* +0x7ebc2c */ __asm { JNC 0x7fffa4f5c5b5 }
    /* +0x7ebc32 */ __asm { LEA R10,[0x7fffa47824a1] }
    /* +0x7ebc39 */ __asm { MOV R9,R10 }
    /* +0x7ebc3c */ __asm { ROL R9,0x28 }
    /* +0x7ebc40 */ __asm { PUSHFQ }
    /* +0x7ebc41 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x7ebc49 */ __asm { POPFQ }
    /* +0x7ebc4a */ __asm { MOV R8D,0x643f9a7c }
    /* +0x7ebc50 */ __asm { MOV RCX,qword ptr [RBP + 0x1c0] }
    /* +0x7ebc57 */ __asm { XOR R8D,ECX }
    /* +0x7ebc5a */ __asm { ADD R8D,0x43e31782 }
    /* +0x7ebc61 */ __asm { SUB R9,R8 }
    /* +0x7ebc64 */ __asm { MOV RDX,-0x2f64b37c263e57da }
    /* +0x7ebc6e */ __asm { CMP R9,RDX }
    /* +0x7ebc71 */ __asm { NOP }
    /* +0x7ebc72 */ __asm { NOP }
    /* +0x7ebc73 */ __asm { NOP }
    /* +0x7ebc74 */ __asm { NOP }
    /* +0x7ebc75 */ __asm { NOP }
    /* +0x7ebc76 */ __asm { MOV R8W,0x96e5 }
    /* +0x7ebc7b */ __asm { MOV R9W,0xef60 }
    /* +0x7ebc80 */ __asm { MOV R11D,0x58257096 }
    /* +0x7ebc86 */ __asm { MOV AX,0xd797 }
    /* +0x7ebc8a */ __asm { MOV R12D,0xda59ceda }
    /* +0x7ebc90 */ __asm { LEA RBX,[0x7fffa47bad50] }
    /* +0x7ebc97 */ __asm { MOVD XMM3,R11D }
    /* +0x7ebc9c */ __asm { XOR EAX,0xe75d }
    /* +0x7ebca1 */ __asm { MOV R14,qword ptr [RBP + 0x28] }
    /* +0x7ebca5 */ __asm { IMUL R14D,R8D }
    /* +0x7ebca9 */ __asm { MOV qword ptr [RBP + 0xc0],RDX }
    /* +0x7ebcb0 */ __asm { ADD R12D,ECX }
    /* +0x7ebcb3 */ __asm { MOV R8D,0xa14d71a2 }
    /* +0x7ebcb9 */ __asm { SUB R8D,R12D }
    /* +0x7ebcbc */ __asm { MOV R11W,0x9061 }
}


// ============================================================================
// Function : FUN_7fffa4f5c658  |  RVA: 0x7ec658  |  Size: 144 bytes
// Callers  : FUN_7fffa56ab604@0xf3b604, FUN_7fffa55c8d98@0xe58d98, FUN_7fffa4d03fd8@0x593fd8, FUN_7fffa4ed9184@0x769184, FUN_7fffa56266a0@0xeb66a0, FUN_7fffa52d5bb0@0xb65bb0, FUN_7fffa517e300@0xa0e300
// Callees  : FUN_7fffa54a3b94@0xd33b94, FUN_7fffa4ecd2c4@0x75d2c4, FUN_7fffa5608650@0xe98650
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t FUN_7fffa4f5c658(void)

{
  uint32_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar3 = 0;
  if (DAT_7fffa4782178 == '\0') {
    uVar1 = (*(code *)&DAT_7ff84ea18640)();
    if (_DAT_7fffa4780244 == -1) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_7fffa5608650();
    }
    if (lVar2 != -1) {
      if (lVar2 == 0) {
        lVar2 = FUN_7fffa4ecd2c4();
      }
      lVar3 = lVar2;
    }
    (*(code *)&DAT_7ff84ea28280)(uVar1);
  }
  else {
    if (_DAT_7fffa4780244 == -1) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_7fffa54a3b94();
    }
    if (lVar2 != -1) {
      if (lVar2 == 0) {
        lVar2 = FUN_7fffa4ecd2c4();
      }
      lVar3 = lVar2;
    }
  }
  return lVar3;
}


// ============================================================================
// Function : FUN_7fffa4f5c6f0  |  RVA: 0x7ec6f0  |  Size: 71 bytes
// Callers  : FUN_7fffa47de300@0x6e300
// Callees  : FUN_7fffa560b2b0@0xe9b2b0
// ============================================================================
uint64_t * FUN_7fffa4f5c6f0(uint64_t *param_1,uint64_t param_2)

{
  uint64_t uStack_18;
  uint8_t uStack_10;
  
  uStack_10 = 1;
  *param_1 = &PTR_FUN_7fffa56f3928;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_18 = param_2;
  FUN_7fffa560b2b0(&uStack_18);
  *param_1 = std::length_error::vftable;
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa4f5c740  |  RVA: 0x7ec740  |  Size: 1186 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4f5c740(void)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  int64_t lVar6;
  uint8_t bVar7;
  uint32_t uVar8;
  int64_t lVar9;
  uint8_t bVar10;
  uint8_t bVar11;
  uint32_t in_R10D;
  uint64_t uVar12;
  uint32_t unaff_R13D;
  
  uVar8 = (in_R10D ^ unaff_R13D) * 0x15dbcf9f + (in_R10D & unaff_R13D) * 0x15dbcf9f +
          ~(in_R10D | unaff_R13D) * 0x15dbcf9f;
  bVar7 = (uint8_t)uVar8;
  uVar5 = 0x7fffb708 << (bVar7 & 0x1f) | 0x7fffb708U >> 0x20 - (bVar7 & 0x1f);
  uVar4 = (uint16_t)uVar8;
  lVar9 = (int64_t)(short)((uVar4 ^ 0xfd84) + 0x8e);
  *(uint8_t *)
   ((int64_t)(int)((0xe9dbabe0 - uVar8) * 0x2000000 | 0xe9dbabe0 - uVar8 >> 7) + 0x7fffa47c3f0a) =
       0;
  *(uint8_t (*) [16])(lVar9 + 0x7fffa47bdfaa) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar9 + 0x7fffa47bdf9a) = (uint8_t  [16])0x0;
  *(uint64_t *)((int64_t)(int)uVar5 + 0x7fffa47c4020) =
       (uint64_t)((uVar8 | 1) * 0x39264339 ^ 0x621e2899);
  uVar12 = rdtsc();
  lVar6 = 0;
  lVar9 = (uVar12 & 0xffffffff00000000 | CONCAT44((int)uVar5 >> 0x1f,(int)uVar12)) *
          ((0xcec408080bcb0ffbU >> (bVar7 & 0x3f) | -0x313bf7f7f434f005 << 0x40 - (bVar7 & 0x3f)) ^
          0x405a48d5);
  do {
    *(char *)(lVar6 + (int64_t)(int)((uVar8 + 0x1570899e) * 0x2000000 | uVar8 + 0x1570899e >> 7) +
                      0x7fffa47c8488) = (char)((uint64_t)(lVar9 * 0x2ddff06941) >> 0x20);
    *(char *)(lVar6 + (int64_t)(short)((uVar4 ^ 0x463c) << 0xb | (uVar4 ^ 0x463c) >> 5) +
                      0x7fffa47bc246) = (char)((uint64_t)(lVar9 * 0xfda7384cd1) >> 0x20);
    *(char *)((int64_t)&g_api_ntdll_dll_NtTerminateProcess +
             lVar6 + (short)(~(uVar4 ^ 0x5942) << 5 | (uint16_t)~(uVar4 ^ 0x5942) >> 0xb)) =
         (char)((uint64_t)(lVar9 * 0x4669dab171) >> 0x20);
    uVar5 = (uVar8 | 1) * -0x6247c26c + 0xbfffffeb;
    *(char *)(lVar6 + (int64_t)(int)(uVar5 * 0x1000000 | uVar5 >> 8) + 0x7fffa47c82e8) =
         (char)((uint64_t)(lVar9 * 0x1d51586c9fbd3a11) >> 0x20);
    *(char *)(lVar6 + (int64_t)(int)~(uVar8 ^ 0xea24dfff) + 0x7fffa47c9d98) =
         (char)((uint64_t)(lVar9 * 0xb4607cc2a1) >> 0x20);
    lVar6 = lVar6 + 5;
    lVar9 = lVar9 * 0x1d51586c9fbd3a11;
  } while (lVar6 != 0x4b);
  lVar9 = (int64_t)(short)(0x1628 - uVar4);
  bVar10 = *(char *)((int64_t)(short)((uVar4 ^ 0xac0b) * 0x4b91) + 0x7fffa47c07f6) + 1;
  bVar11 = bVar10 & 3;
  if (~(uVar8 ^ 0x7845146e) < (0x2864f9eb << (bVar7 & 0x1f) | 0x2864f9ebU >> 0x20 - (bVar7 & 0x1f)))
  {
    bVar11 = bVar10 * '\x03';
  }
  uVar12 = (uint64_t)bVar11;
  bVar10 = *(uint8_t *)(((int64_t)(int)((uVar8 + 0x290473cf) * -0x2dafdbb7) ^ 0x2352d864U) +
                    0x7fffa47c645f);
  *(uint8_t *)(lVar9 + 0x7fffa47bc849 + uVar12 * 8) = bVar10 >> 1 | bVar10 << 7;
  bVar10 = *(uint8_t *)((int64_t)(int)(-0x15dcc16c - uVar8) + 0x7fffa47c9ffd);
  bVar1 = *(uint8_t *)((int64_t)(int)((uVar8 ^ 0xb5b9e6c8) + 0xa061875e) + 0x7fffa47c502e);
  bVar2 = *(uint8_t *)((int64_t)(short)(uVar4 ^ 0xd005) + 0x7fffa47bcdd3);
  bVar3 = *(uint8_t *)((int64_t)(short)((0x3956 - uVar4) * 0x200 | (uint16_t)(0x3956 - uVar4) >> 7) +
                   0x7fffa47bc420);
  *(uint8_t *)(lVar9 + 0x7fffa47bc84b + uVar12 * 8) = bVar1 >> 1 | bVar1 << 7;
  *(uint8_t *)(lVar9 + 0x7fffa47bc84d + uVar12 * 8) = bVar2 >> 1 | bVar2 << 7;
  *(uint8_t *)(lVar9 + 0x7fffa47bc847 + uVar12 * 8) = bVar3 >> 1 | bVar3 << 7;
  *(uint8_t *)(lVar9 + 0x7fffa47bc846 + uVar12 * 8) = bVar10 >> 1 | bVar10 << 7;
  bVar10 = *(uint8_t *)((int64_t)
                     (int)(((uVar8 ^ 0x79287369) << 0x14 | (uVar8 ^ 0x79287369) >> 0xc) *
                          -0x58962511) + 0x7fffa47c3f38);
  *(uint8_t *)(lVar9 + 0x7fffa47bc84a + uVar12 * 8) = bVar10 >> 1 | bVar10 << 7;
  bVar10 = *(uint8_t *)((int64_t)(short)(uVar4 + 0x88d8) + 0x7fffa47bf4fd);
  *(uint8_t *)(lVar9 + 0x7fffa47bc84c + uVar12 * 8) = bVar10 >> 1 | bVar10 << 7;
  bVar7 = *(uint8_t *)((int64_t)
                    (int)(0xfffe5ce1U >> (bVar7 & 0x1f) | -0x1a31f << 0x20 - (bVar7 & 0x1f)) +
                   0x7fffa47c7fc2);
  *(uint8_t *)(lVar9 + 0x7fffa47bc848 + uVar12 * 8) = bVar7 >> 1 | bVar7 << 7;
  *(uint8_t *)((int64_t)(int)((uVar8 ^ 0x95db9248) << 1 | (uint32_t)((int)(uVar8 ^ 0x95db9248) < 0)) +
           0x7fffa47c69ae) = bVar11;
  return;
}


// ============================================================================
// Function : FUN_7fffa4f5cbf0  |  RVA: 0x7ecbf0  |  Size: 1 bytes
// Callers  : FUN_7fffa5216e00@0xaa6e00
// Callees  : none
// ============================================================================
void FUN_7fffa4f5cbf0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa4f5cc00  |  RVA: 0x7ecc00  |  Size: 36569 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4f5e640) */
/* WARNING: Removing unreachable block (ram,0x7fffa4f64c40) */
/* WARNING: Removing unreachable block (ram,0x7fffa4f60085) */
/* WARNING: Removing unreachable block (ram,0x7fffa4f5d58b) */
/* WARNING: Removing unreachable block (ram,0x7fffa4f6432a) */
/* WARNING: Removing unreachable block (ram,0x7fffa4f5da30) */
/* WARNING: Removing unreachable block (ram,0x7fffa4f65bc3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa4f5cc00(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t *param_4)

{
  uint8_t *pbVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint16_t uVar9;
  uint64_t uVar10;
  uint8_t bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint8_t auVar31 [16];
  short sVar32;
  uint32_t uVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint32_t *puVar36;
  uint32_t *puVar37;
  uint32_t *puVar38;
  uint32_t *puVar39;
  uint32_t *puVar40;
  uint8_t *puVar41;
  uint16_t uVar42;
  uint32_t uVar43;
  uint64_t uVar44;
  uint64_t uVar45;
  uint32_t uVar46;
  uint8_t bVar50;
  uint64_t uVar47;
  uint64_t uVar48;
  int64_t lVar49;
  uint32_t uVar51;
  int iVar52;
  uint8_t (*pauVar53) [16];
  short sVar54;
  uint64_t uVar55;
  uint64_t uVar56;
  int64_t lVar57;
  uint32_t *puVar58;
  uint8_t bVar59;
  uint64_t uVar60;
  uint64_t uVar61;
  uint64_t uVar62;
  uint64_t uVar63;
  uint64_t uVar64;
  short sVar65;
  short sVar66;
  int iVar67;
  uint64_t uVar68;
  uint64_t uVar69;
  uint32_t uVar70;
  int64_t *in_R10;
  uint64_t uVar71;
  int64_t lVar72;
  uint8_t (*pauVar73) [16];
  uint64_t uVar74;
  uint32_t uVar75;
  uint32_t uVar76;
  uint64_t uVar77;
  uint32_t *puVar78;
  uint64_t uVar79;
  uint32_t uVar80;
  int iVar81;
  uint32_t uVar82;
  int iVar83;
  uint32_t *puVar84;
  int iVar85;
  uint32_t *puVar86;
  int iVar87;
  uint64_t uVar88;
  uint64_t uVar89;
  bool bVar90;
  bool bVar91;
  int64_t lVar92;
  uint32_t uVar95;
  uint8_t auVar94 [16];
  uint8_t auVar93 [16];
  int64_t lVar96;
  int64_t lVar97;
  uint8_t auVar98 [16];
  int64_t lVar100;
  int64_t lVar101;
  uint8_t auVar99 [16];
  uint8_t auVar102 [16];
  uint8_t auVar103 [16];
  uint8_t auVar104 [16];
  uint8_t auVar105 [16];
  uint8_t auVar106 [16];
  uint64_t in_XMM4_Qa;
  int64_t in_XMM5_Qa;
  int *piStack_230;
  uint64_t uStack_210;
  uint32_t *puStack_1f0;
  int *piStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1a8;
  uint64_t uStack_168;
  int *piStack_160;
  int *piStack_118;
  int *piStack_f8;
  
  auVar31 = _DAT_7fffa56b8440;
  uVar51 = (uint32_t)param_2;
  uVar34 = (~in_XMM4_Qa << 0x10 | ~in_XMM4_Qa >> 0x30) + 0x7d70725d;
  uVar34 = (uVar34 << 0x3b | uVar34 >> 5) ^ (uVar34 << 0x26 | uVar34 >> 0x1a) ^ uVar34;
  uVar34 = (uVar34 << 0xc | uVar34 >> 0x34) ^ (uVar34 << 0x36 | uVar34 >> 10) ^ uVar34;
  uVar34 = (uVar34 << 0x2c | uVar34 >> 0x14) ^ (uVar34 << 0x18 | uVar34 >> 0x28) ^ uVar34;
  uVar44 = uVar34 << 0x30 | uVar34 >> 0x10;
  uVar34 = (uVar34 << 0x18 | uVar34 >> 0x28) ^ uVar34 ^ uVar44;
  uVar34 = (uVar34 << 0x20 | uVar34 >> 0x20) ^ (uVar34 << 0x30 | uVar34 >> 0x10) ^ uVar34;
  uVar82 = uVar51 | 1;
  uVar35 = (uVar34 << 0x1c | uVar34 >> 0x24) ^ (uVar34 << 0x21 | uVar34 >> 0x1f) ^
           (uVar34 << 0x20 | uVar34 >> 0x20);
  uVar45 = uVar35 << 2 | uVar35 >> 0x3e;
  uVar68 = (0x6ad3ab65 - in_XMM5_Qa) * 0x20b75688d055a10f + 0xbc23508;
  uVar34 = uVar45 + uVar35;
  if (uVar82 * -0x5e82c8cf + 0xec589b10 < (0x5d9ed283 - uVar51) * 0x7c48ac41 + 0x93d23c3d) {
    uVar34 = uVar35 ^ uVar45;
  }
  uVar34 = uVar34 ^ (uVar35 << 0x38 | uVar35 >> 8);
  uVar34 = (uVar34 << 4 | uVar34 >> 0x3c) ^ (uVar34 << 0x30 | uVar34 >> 0x10) ^ uVar34;
  uVar34 = (uVar34 << 8 | uVar34 >> 0x38) ^ (uVar34 << 0x20 | uVar34 >> 0x20) ^ uVar34;
  uVar34 = (uVar34 << 0x30 | uVar34 >> 0x10) - 0x707d989f;
  if (299 < uVar68 - uVar34) {
    uVar47 = (uint64_t)((uVar51 + 0x1418c3af) * 0x8000 | uVar51 + 0x1418c3af >> 0x11);
    lVar2 = param_3 + 0xe8;
    uVar75 = uVar51 | 1;
    uVar45 = in_R10[1];
    uVar60 = (uint64_t)(uVar51 ^ 0xa173299);
    uVar61 = (uint64_t)((uVar75 * 0x3e5b ^ 0xffffc5c4) + 0x4459 & 0xffff);
    uVar62 = (uint64_t)((uVar51 ^ 0x12886) - 0x107 & 0xffff);
    uVar63 = (uint64_t)((uVar51 + 0x602db147) * 0x2072ee57);
    uVar35 = param_3 + 0x1338;
    while (uVar45 < 0xc4) {
      uVar45 = param_4[9];
      *(uint64_t *)(param_3 + 0xed8) = param_4[8];
      *(uint64_t *)(param_3 + 0xee0) = uVar45;
      uVar45 = *param_4;
      uVar55 = param_4[1];
      uVar48 = param_4[2];
      uVar89 = param_4[3];
      uVar64 = param_4[4];
      uVar69 = param_4[5];
      uVar77 = param_4[7];
      *(uint64_t *)(param_3 + 0xec8) = param_4[6];
      *(uint64_t *)(param_3 + 0xed0) = uVar77;
      *(uint64_t *)(param_3 + 0xeb8) = uVar64;
      *(uint64_t *)(param_3 + 0xec0) = uVar69;
      *(uint64_t *)(param_3 + 0xea8) = uVar48;
      *(uint64_t *)(param_3 + 0xeb0) = uVar89;
      *(uint64_t *)(param_3 + 0xe98) = uVar45;
      *(uint64_t *)(param_3 + 0xea0) = uVar55;
      bVar11 = (uint8_t)param_2;
      if (uVar34 != 0) {
        uVar45 = *(uint64_t *)(param_3 + 0xe98);
        uVar55 = uVar34 * 8 + *param_4;
        *(uint64_t *)(param_3 + 0xea0) = uVar55;
        if (uVar55 == uVar45) {
          uVar55 = 0;
        }
        else {
          uVar69 = ~uVar35;
          uVar64 = uVar55 ^ uVar45;
          uVar77 = ~uVar55;
          uVar89 = (uint64_t)*(uint32_t *)(param_3 + 0xee4);
          uVar48 = uVar45 ^ uVar77 ^ uVar35;
          lVar72 = uVar48 * 0x3ef79d49;
          if (-0x3e878c5f < (int)((uVar51 + 0x314f9d5a) * 0x40 | uVar51 + 0x314f9d5a >> 0x1a)) {
            lVar72 = uVar48 * -0x3ef79d49;
          }
          uVar48 = (int64_t)
                   (lVar72 + (uVar45 & uVar77 ^ uVar35) *
                             (uint64_t)(uVar82 * -0x2dc00000 | uVar82 * 0x7c922349 >> 10) +
                    (~uVar45 & uVar55 | uVar69) * 0x7e73a0a5 + (uVar64 | uVar35) * -0x866c0451 +
                    (uVar64 & uVar35) * 0xc563a199 + (uVar69 & uVar64) * 0x866c044e +
                    (uVar69 & ~uVar45 & uVar55) * -0x7e73a0a1 +
                    ((uVar77 | uVar45) ^ uVar35) * -0x104dfa4f4 +
                   (uint64_t)(uVar82 * -0x7c000000 | uVar82 * -0x41b7183e >> 7) *
                   ((uVar45 ^ uVar77) & uVar69)) >> 3;
          if (uVar48 < 2) {
            uVar48 = 1;
            uVar55 = 0;
            uVar64 = 0;
          }
          else {
            uVar69 = uVar48 & 0xfffffffffffffffe;
            uVar55 = 0;
            uVar64 = 0;
            do {
              lVar72 = *(uint16_t *)(uVar45 + 4 + uVar64 * 8) + uVar55;
              if (uVar64 == uVar89) {
                if (*(int *)(param_3 + 0xee0) == 1) {
                  lVar72 = lVar72 + 0x10000;
                }
              }
              uVar55 = (uint64_t)*(uint16_t *)(uVar45 + 0xc + uVar64 * 8) + lVar72;
              if ((uVar64 | 1) == uVar89) {
                if (*(int *)(param_3 + 0xee0) == 1) {
                  uVar55 = uVar55 + 0x10000;
                }
              }
              uVar56 = ~uVar44;
              uVar88 = ~uVar69;
              uVar71 = uVar88 & uVar64;
              uVar77 = uVar88 | uVar64;
              if ((0x539b71d << (bVar11 & 0x1f) | 0x539b71dU >> 0x20 - (bVar11 & 0x1f)) <=
                  (0x586966e8 << (bVar11 & 0x1f) | 0x586966e8U >> 0x20 - (bVar11 & 0x1f))) {
                uVar77 = uVar71;
              }
              uVar64 = ((uVar56 & (uVar69 ^ uVar64)) - (uVar56 & uVar71)) * 0x2e200db3 +
                       (~uVar64 & uVar88 & uVar56) * -0x2e200db6 +
                       (((uVar69 | uVar44 | uVar64) * -0x2e200db5 +
                         (uVar44 | uVar88 | uVar64) * 0x2e200db4 + (uVar44 & uVar71) * 0x5876c720) -
                       (~uVar64 & uVar88 & uVar44)) +
                       ((uint64_t)(uVar82 * -0x606787d6 + 0x80425168 ^ 0x2e6e527b) - 0x51e7cca) *
                       ((uVar69 ^ uVar64) & uVar44) + (uVar77 & uVar44) * -0x5876c71f;
            } while (uVar64 != uVar69);
          }
          if ((uVar48 & 1) != 0) {
            uVar9 = *(uint16_t *)(uVar45 + 4 + uVar64 * 8);
            uVar45 = (uint64_t)uVar9;
            if (uVar82 * 0x37e90e6 <
                (((0x1b59a47a - uVar51) * 0x10000000 | 0x1b59a47a - uVar51 >> 4) ^ 0x1771b163)) {
              uVar45 = (int64_t)(short)uVar9;
            }
            uVar55 = uVar45 + uVar55;
            if (uVar64 == uVar89) {
              uVar45 = uVar55 + 0x10000;
              if ((uint64_t)(int64_t)(int)((uVar51 ^ 0x4687ede2) + 0x7e97b63d) <=
                  ((uint64_t)uVar82 * 0x5041eebc & 0xffffffff)) {
                uVar45 = uVar55 ^ 0x10000;
              }
              if (*(int *)(param_3 + 0xee0) == 1) {
                uVar55 = uVar45;
              }
            }
          }
        }
        *(int64_t *)(param_3 + uVar63) = *(int64_t *)(param_3 + uVar63) + uVar55;
      }
      if ((int)param_4[9] != 0) {
        if (*(uint32_t *)((int64_t)param_4 + 0x4c) < uVar34 ||
            uVar68 < *(uint32_t *)((int64_t)param_4 + 0x4c)) {
          *(uint32_t *)(param_3 + 0xee0) = 0;
        }
        else {
          *(int *)(param_3 + 0xee4) = *(int *)(param_3 + 0xee4) - (int)uVar34;
        }
      }
      lVar72 = *param_4 + uVar34 * 8;
      *(int64_t *)(param_3 + 0xe98) = lVar72;
      lVar49 = *param_4 + uVar68 * 8;
      *(int64_t *)(param_3 + 0xea0) = lVar49;
      if (uVar68 != (int64_t)(param_4[1] - *param_4) >> 3) {
        lVar49 = lVar49 - lVar72;
        if (lVar49 == 0) {
          lVar49 = 0;
        }
        else {
          uVar55 = lVar49 >> 3;
          uVar45 = (uint64_t)*(uint32_t *)(param_3 + 0xee4);
          if (uVar55 < 2) {
            lVar49 = 0;
            uVar48 = 0;
          }
          else {
            uVar48 = 2;
            lVar49 = 0;
            uVar89 = 0;
            while( true ) {
              lVar49 = (uint64_t)*(uint16_t *)(lVar72 + -0xc + uVar48 * 8) + lVar49;
              if (uVar48 - uVar45 == 2) {
                bVar91 = 1 < *(uint32_t *)(param_3 + 0xee0);
                if (((uVar51 ^ 0x4affb793) << 0xe | (uVar51 ^ 0x4affb793) >> 0x12) < 0x6e479913) {
                  bVar91 = *(uint32_t *)(param_3 + 0xee0) == 1;
                }
                if (bVar91) {
                  lVar49 = lVar49 + 0x10000;
                }
              }
              lVar49 = (uint64_t)*(uint16_t *)(lVar72 + -4 + uVar48 * 8) + lVar49;
              if ((uVar89 | 1) == uVar45) {
                if (*(int *)(param_3 + 0xee0) == 1) {
                  lVar49 = lVar49 + 0x10000;
                }
              }
              else {
              }
              uVar89 = uVar89 + 2;
              if (uVar89 == (uVar55 & 0xfffffffffffffffe)) break;
              uVar48 = uVar48 + 2;
            }
            if ((uVar55 & 1) == 0) goto LAB_7fffa4f5d6a0;
          }
          lVar49 = lVar49 + (uint64_t)*(uint16_t *)(lVar72 + 4 + uVar48 * 8);
          if (uVar48 == uVar45) {
            if (*(int *)(param_3 + 0xee0) == 1) {
              lVar49 = lVar49 + 0x10000;
            }
          }
        }
LAB_7fffa4f5d6a0:
        *(int64_t *)(param_3 + 0xeb0) = lVar49 + *(int64_t *)(param_3 + uVar63);
      }
      *(int64_t *)(param_3 + 0xec0) = *(int64_t *)(param_3 + 0xec0) + uVar34;
      lVar72 = *(int64_t *)(param_3 + uVar60);
      *(int64_t *)(param_3 + 0xeb8) = *(int64_t *)(param_3 + 0xeb8) + uVar34;
      *(uint64_t *)(param_3 + uVar60) = lVar72 + uVar34;
      uVar45 = param_4[9];
      *(uint64_t *)(param_3 + 0xf28) = param_4[8];
      *(uint64_t *)(param_3 + 0xf30) = uVar45;
      uVar45 = *param_4;
      uVar55 = param_4[1];
      uVar48 = param_4[2];
      uVar89 = param_4[3];
      uVar64 = param_4[4];
      uVar69 = param_4[5];
      uVar77 = param_4[7];
      *(uint64_t *)(param_3 + 0xf18) = param_4[6];
      *(uint64_t *)(param_3 + 0xf20) = uVar77;
      *(uint64_t *)(param_3 + 0xf08) = uVar64;
      *(uint64_t *)(param_3 + 0xf10) = uVar69;
      *(uint64_t *)(param_3 + 0xef8) = uVar48;
      *(uint64_t *)(param_3 + 0xf00) = uVar89;
      *(uint64_t *)(param_3 + 0xee8) = uVar45;
      *(uint64_t *)(param_3 + 0xef0) = uVar55;
      if (uVar34 != 0) {
        lVar72 = *(int64_t *)(param_3 + 0xee8);
        lVar49 = uVar34 * 8 + *param_4;
        *(int64_t *)(param_3 + 0xef0) = lVar49;
        lVar49 = lVar49 - lVar72;
        if (lVar49 == 0) {
          lVar49 = 0;
        }
        else {
          uVar55 = (uint64_t)*(uint32_t *)(param_3 + 0xf34);
          uVar45 = lVar49 >> 3;
          if (uVar45 < 2) {
            uVar45 = 1;
            lVar49 = 0;
            uVar48 = 0;
          }
          else {
            lVar49 = 0;
            uVar89 = 0;
            do {
              uVar48 = uVar89;
              lVar57 = (uint64_t)*(uint16_t *)(lVar72 + 4 + uVar48 * 8) + lVar49;
              if (uVar55 == uVar48) {
                if (*(int *)(param_3 + 0xf30) == 1) {
                  lVar57 = lVar57 + 0x10000;
                }
              }
              uVar89 = (uint64_t)*(uint16_t *)(lVar72 + 0xc + uVar48 * 8);
              lVar49 = uVar89 + lVar57;
              if ((0x1923fff << (bVar11 & 0x1f) | 0x1923fffU >> 0x20 - (bVar11 & 0x1f)) <
                  uVar51 + 0x2339e684) {
                lVar49 = uVar89 * lVar57;
              }
              if (uVar48 + 1 == uVar55) {
                if (*(int *)(param_3 + 0xf30) == 1) {
                  lVar49 = lVar49 + 0x10000;
                }
              }
              uVar89 = uVar48 + 2;
            } while (uVar48 + 2 != (uVar45 & 0xfffffffffffffffe));
            uVar48 = uVar48 + 2;
          }
          if ((uVar45 & 1) != 0) {
            lVar49 = (uint64_t)*(uint16_t *)(lVar72 + 4 + uVar48 * 8) + lVar49;
            if (uVar48 == uVar55) {
              if (*(int *)(param_3 + 0xf30) == 1) {
                lVar49 = lVar49 + 0x10000;
              }
            }
          }
        }
        *(int64_t *)(param_3 + 0xef8) = *(int64_t *)(param_3 + 0xef8) + lVar49;
      }
      uVar55 = uVar34 + uVar68 >> 1;
      if ((uint32_t)param_4[9] != (0x3c51 - uVar51 & 0xffff)) {
        if (uVar55 < *(uint32_t *)((int64_t)param_4 + 0x4c) ||
            *(uint32_t *)((int64_t)param_4 + 0x4c) < uVar34) {
          *(uint32_t *)(param_3 + 0xf30) = 0;
        }
        else {
          *(int *)(param_3 + 0xf34) = *(int *)(param_3 + 0xf34) - (int)uVar34;
        }
      }
      uVar45 = *param_4;
      lVar72 = uVar45 + uVar34 * 8;
      *(int64_t *)(param_3 + 0xee8) = lVar72;
      lVar49 = *param_4 + uVar55 * 8;
      *(int64_t *)(param_3 + 0xef0) = lVar49;
      uVar48 = param_4[1] ^ *param_4;
      if ((int64_t)(int)(uVar82 * -0x7741f076) <= (int64_t)(uint64_t)(uVar82 * -0x165b691f)) {
        uVar48 = param_4[1] - *param_4;
      }
      if (uVar55 != (int64_t)uVar48 >> 3) {
        lVar49 = lVar49 - lVar72;
        if (lVar49 == 0) {
          lVar49 = 0;
        }
        else {
          uVar48 = lVar49 >> 3;
          uVar89 = (uint64_t)*(uint32_t *)(param_3 + 0xf34);
          if (uVar48 < 2) {
            lVar49 = 0;
            uVar45 = 0;
          }
          else {
            lVar57 = uVar45 + uVar34 * 8;
            lVar49 = 0;
            uVar64 = 0;
            do {
              uVar45 = uVar64;
              lVar49 = (uint64_t)*(uint16_t *)(lVar57 + 4 + uVar45 * 8) + lVar49;
              if (uVar89 == uVar45) {
                if (*(int *)(param_3 + 0xf30) == 1) {
                  lVar49 = lVar49 + 0x10000;
                }
              }
              lVar49 = (uint64_t)*(uint16_t *)(lVar57 + 0xc + uVar45 * 8) + lVar49;
              if (uVar45 + 1 == uVar89) {
                if (*(int *)(param_3 + 0xf30) == 1) {
                  lVar49 = lVar49 + 0x10000;
                }
              }
              uVar64 = uVar45 + 2;
            } while (uVar45 + 2 != (uVar48 & 0xfffffffffffffffe));
            uVar45 = uVar45 + 2;
            if ((uVar48 & 1) == 0) goto LAB_7fffa4f5da60;
          }
          lVar49 = lVar49 + (uint64_t)*(uint16_t *)(lVar72 + 4 + uVar45 * 8);
          if (uVar45 == uVar89) {
            if (*(int *)(param_3 + 0xf30) == 1) {
              lVar49 = lVar49 + 0x10000;
            }
          }
        }
LAB_7fffa4f5da60:
        *(int64_t *)(param_3 + 0xf00) = lVar49 + *(int64_t *)(param_3 + 0xef8);
      }
      lVar72 = *(int64_t *)(param_3 + 0xf10);
      plVar3 = (int64_t *)(param_3 + uVar47);
      *plVar3 = *plVar3 + uVar34;
      *(int64_t *)(param_3 + 0xf08) = *(int64_t *)(param_3 + 0xf08) + uVar34;
      *(uint64_t *)(param_3 + 0xf10) = lVar72 + uVar34;
      uVar45 = param_4[9];
      *(uint64_t *)(param_3 + 0xf78) = param_4[8];
      *(uint64_t *)(param_3 + 0xf80) = uVar45;
      uVar69 = *param_4;
      uVar77 = param_4[1];
      uVar45 = param_4[2];
      uVar48 = param_4[3];
      uVar89 = param_4[4];
      uVar64 = param_4[5];
      uVar56 = param_4[7];
      *(uint64_t *)(param_3 + 0xf68) = param_4[6];
      *(uint64_t *)(param_3 + 0xf70) = uVar56;
      *(uint64_t *)(param_3 + 0xf58) = uVar89;
      *(uint64_t *)(param_3 + 0xf60) = uVar64;
      *(uint64_t *)(param_3 + 0xf48) = uVar45;
      *(uint64_t *)(param_3 + 0xf50) = uVar48;
      *(uint64_t *)(param_3 + 0xf38) = uVar69;
      *(uint64_t *)(param_3 + 0xf40) = uVar77;
      sVar66 = (short)uVar75;
      if (1 < uVar34 + uVar68) {
        lVar49 = uVar55 * 8 + *param_4;
        *(int64_t *)(param_3 + 0xf40) = lVar49;
        lVar72 = *(int64_t *)(param_3 + 0xf38);
        lVar49 = lVar49 - lVar72;
        if (lVar49 == 0) {
          lVar49 = 0;
        }
        else {
          uVar48 = lVar49 >> 3;
          uVar34 = uVar48 + (uVar48 == 0);
          uVar45 = (uint64_t)*(uint32_t *)(param_3 + 0xf84);
          if (uVar48 < ((uVar51 ^ 0xa973c51) << 10 | (uVar51 ^ 0xa973c51) >> 0x16)) {
            lVar49 = 0;
            uVar89 = 0;
          }
          else {
            lVar49 = 0;
            uVar48 = 0;
            do {
              uVar89 = uVar48;
              lVar49 = (uint64_t)*(uint16_t *)(lVar72 + 4 + uVar89 * 8) + lVar49;
              if (uVar45 == uVar89) {
                if (*(uint32_t *)(param_3 + 0xf80) == ((0xc74e - uVar51) * 0x6255 & 0xffff)) {
                  lVar49 = lVar49 + 0x10000;
                }
              }
              lVar49 = (uint64_t)*(uint16_t *)(lVar72 + 0xc + uVar89 * 8) + lVar49;
              if (uVar89 + 1 == uVar45) {
                if (*(uint32_t *)(param_3 + 0xf80) ==
                    (uint32_t)(uint16_t)~(sVar66 * 0x3c00 | (uint16_t)(sVar66 * 0x470f) >> 6)) {
                  lVar49 = lVar49 + 0x10000;
                }
              }
              uVar48 = uVar89 + 2;
            } while (uVar89 + 2 != (uVar34 & 0xfffffffffffffffe));
            uVar89 = uVar89 + 2;
          }
          if ((uVar34 & 1) != 0) {
            lVar49 = lVar49 + (uint64_t)*(uint16_t *)(lVar72 + 4 + uVar89 * 8);
            if (uVar89 == uVar45) {
              if (*(int *)(param_3 + 0xf80) == 1) {
                lVar49 = lVar49 + 0x10000;
              }
            }
          }
        }
        *(int64_t *)(param_3 + 0xf48) = *(int64_t *)(param_3 + 0xf48) + lVar49;
      }
      if ((int)param_4[9] != 0) {
        if (uVar68 < *(uint32_t *)((int64_t)param_4 + 0x4c) ||
            *(uint32_t *)((int64_t)param_4 + 0x4c) < uVar55) {
          *(uint32_t *)(param_3 + 0xf80) = 0;
        }
        else {
          *(int *)(param_3 + 0xf84) = *(int *)(param_3 + 0xf84) - (int)uVar55;
        }
      }
      uVar34 = *param_4;
      lVar72 = uVar34 + uVar55 * 8;
      *(int64_t *)(param_3 + 0xf38) = lVar72;
      lVar49 = uVar68 * 8 + *param_4;
      *(int64_t *)(param_3 + 0xf40) = lVar49;
      if (uVar68 != (int64_t)(param_4[1] - *param_4) >> 3) {
        lVar49 = lVar49 - lVar72;
        if (lVar49 == 0) {
          lVar49 = 0;
        }
        else {
          uVar48 = (uint64_t)*(uint32_t *)(param_3 + 0xf84);
          uVar45 = lVar49 >> 3;
          if (uVar45 < 2) {
            uVar45 = 1;
            lVar49 = 0;
            uVar89 = 0;
          }
          else {
            lVar49 = 0;
            uVar89 = 0;
            while( true ) {
              lVar49 = (uint64_t)*(uint16_t *)(uVar34 + uVar55 * 8 + 4 + uVar89 * 8) + lVar49;
              if (uVar89 == uVar48) {
                if (*(int *)(param_3 + 0xf80) == 1) {
                  lVar49 = lVar49 + 0x10000;
                }
              }
              uVar64 = uVar89 + (uVar51 + 0x44533fe2 < 0x87ec5ea5);
              lVar49 = (uint64_t)*(uint16_t *)(lVar72 + 4 + uVar64 * 8) + lVar49;
              if (uVar64 == uVar48) {
                if (*(uint32_t *)(param_3 + 0xf80) == (uint32_t)((uint16_t)(sVar66 * 0x32c4) >> 2)) {
                  lVar49 = lVar49 + 0x10000;
                }
              }
              if ((uVar45 & 0xfffffffffffffffe) - 2 == uVar89) break;
              uVar89 = uVar89 + 2;
            }
            uVar89 = uVar89 + 2;
          }
          if ((uVar45 & 1) != 0) {
            lVar49 = (uint64_t)*(uint16_t *)(lVar72 + 4 + uVar89 * 8) + lVar49;
            if (uVar89 == uVar48) {
              if (*(uint32_t *)(param_3 + 0xf80) == ((0x289e - uVar51) * 0x2c85 & 0xffff)) {
                lVar49 = lVar49 + 0x10000;
              }
            }
          }
        }
        *(int64_t *)(param_3 + 0xf50) = lVar49 + *(int64_t *)(param_3 + 0xf48);
      }
      uVar10 = *(uint64_t *)(param_3 + 0xdc0);
      lVar72 = *(int64_t *)(param_3 + 0xf60);
      lVar49 = *(int64_t *)(param_3 + uVar61);
      uVar9 = (uint16_t)param_2;
      uVar48 = uVar35 >> 0x3c ^ uVar35;
      lVar57 = *(int64_t *)(param_3 + 0xc88);
      *(int64_t *)(param_3 + 0xf58) = *(int64_t *)(param_3 + 0xf58) + uVar55;
      uVar89 = uVar48 << 0x3a;
      uVar34 = uVar89 + uVar48;
      *(uint64_t *)(param_3 + uVar61) = lVar49 + uVar55;
      *(uint64_t *)(param_3 + 0xf60) = lVar72 + uVar55;
      uVar45 = uVar48 | uVar89;
      if ((uVar51 ^ 0x38700d49) <
          (0x43e67f9fU >> (bVar11 & 0x1f) | 0x43e67f9f << 0x20 - (bVar11 & 0x1f))) {
        uVar45 = uVar34;
      }
      (*(code *)((int64_t)(short)(((uVar9 ^ 0xad7a) << 0xe | (uVar9 ^ 0xad7a) >> 2) + 0xca33) +
                0x7fffa55bbac3))
                (uVar51 ^ 0x38700d49,lVar2,uVar10,
                 (uVar45 << 0x12 | uVar45 >> 0x2e) ^ (uVar45 << 0xb | uVar45 >> 0x35) ^ uVar45,
                 (-0x71c96eed << (bVar11 & 0x1f) | 0x8e369113U >> 0x20 - (bVar11 & 0x1f)) +
                 0xda81bcc0);
      lVar72 = *(int64_t *)(param_3 + 0xc88);
      pauVar53 = *(uint8_t (**) [16])(param_3 + 0xdc0);
      uStack_210 = lVar57 + 0x453ba0f2U ^ 0x8a3d86ae;
      if (uStack_210 < 0xffffffffffffff89) {
        uVar45 = *(uint64_t *)(param_3 + 0xe98);
        uVar64 = *(uint64_t *)(param_3 + 0xea0);
        puVar86 = *(uint32_t **)(param_3 + uVar63);
        puVar36 = *(uint32_t **)(param_3 + 0xeb0);
        uVar77 = (int64_t)puVar36 - (int64_t)puVar86;
        uVar80 = *(uint32_t *)(param_3 + 0x1338);
        uVar69 = uVar45 | uVar64;
        if ((0x60389d2f << (bVar11 & 0x1f) | 0x60389d2fU >> 0x20 - (bVar11 & 0x1f)) <=
            (-0x2040d40 - uVar51) * -0x18edbc9f) {
          uVar69 = uVar64 - uVar45;
        }
        puVar37 = *(uint32_t **)(param_3 + uVar60);
        puVar78 = *(uint32_t **)(param_3 + 0xec0);
        puVar84 = *(uint32_t **)(param_3 + 0xeb8);
        if ((int)uVar80 < (int)(uVar75 * 0x1962 & 0xffff)) {
          bVar91 = uVar80 == 1;
          if ((int)(uVar51 ^ 0x9526075c) <=
              (int)((-0xa9460f5 << (bVar11 & 0x1f) | 0xf56b9f0bU >> 0x20 - (bVar11 & 0x1f)) +
                   0x7ffe0328)) {
            bVar91 = (int)uVar80 < 1;
          }
          piStack_f8 = (int *)0x1;
          if ((bVar91) && (piStack_f8 = (int *)uVar77, uVar80 != 0)) goto LAB_7fffa4f5e15b;
        }
        else if (((int)uVar80 <
                  (int)(uint32_t)(uint16_t)((-0x7442 << (bVar11 & 0xf) | 0x8bbeU >> 0x10 - (bVar11 & 0xf))
                                     + 0xe886)) ||
                ((uVar80 << 8 | uVar80 >> 0x18) * -0x5402a661 == -0x7f32300)) {
          if (((uint64_t)pauVar53 & 3) != 0) {
            piStack_f8 = (int *)uVar77;
            goto LAB_7fffa4f5e6e0;
          }
          if (uVar77 < (uVar51 + 0xc98b & 0xffff)) {
            FUN_7fffa4ecf8e0(pauVar53,0,0x400);
            if (uVar77 != 0) {
              do {
                uVar70 = *puVar86;
                puVar86 = (uint32_t *)((int64_t)puVar86 + 1);
                *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) + 1;
              } while (puVar86 < puVar36);
              for (uVar56 = 0xff;
                  *(uint32_t *)(*pauVar53 + uVar56 * 4) ==
                  (uint32_t)(uint16_t)((uVar9 + 0xc3af) * 0x1000 | (uint16_t)(uVar9 + 0xc3af) >> 4);
                  uVar56 = (uint64_t)((uint32_t)uVar56 - 1)) {
              }
              if (6 < (uint32_t)uVar56) {
                uVar71 = uVar56 + 1 & 0xfffffffffffffff8;
                do {
                  uVar71 = uVar71 - 8;
                } while (uVar71 != 0);
                goto LAB_7fffa4f5e599;
              }
              goto LAB_7fffa4f5e5a2;
            }
            uVar71 = 1;
            uVar88 = 0;
            uVar56 = 0;
            goto LAB_7fffa4f5eb06;
          }
          FUN_7fffa4ecf8e0(pauVar53,0,0x1000);
          if (0x13 < (int64_t)uVar77) {
            puVar40 = (uint32_t *)((int64_t)puVar86 + (uVar77 - 0xf));
            uVar70 = *puVar86;
            puVar39 = puVar86;
            do {
              uVar33 = puVar39[1];
              iVar83 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4);
              *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) =
                   *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) + 1;
              *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) = iVar83 + 1;
              iVar83 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4);
              iVar52 = *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4);
              *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) =
                   *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) + 1;
              uVar56 = (uint64_t)(uVar33 >> 8 & 0xff);
              iVar85 = *(int *)(pauVar53[0x40] + uVar56 * 4);
              *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) =
                   *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) + 1;
              uVar70 = puVar39[2];
              *(int *)(pauVar53[0x40] + uVar56 * 4) = iVar85 + 1;
              *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) = iVar52 + 1;
              uVar56 = (uint64_t)(uVar70 >> 8 & 0xff);
              iVar52 = *(int *)(pauVar53[0x40] + uVar56 * 4);
              *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) = iVar83 + 1;
              iVar83 = *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4);
              uVar71 = (uint64_t)((uint16_t)(uVar70 >> 0x10) & 0xff);
              iVar85 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4);
              *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) =
                   *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) + 1;
              uVar33 = puVar39[3];
              *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) = iVar85 + 1;
              *(int *)(pauVar53[0x40] + uVar56 * 4) = iVar52 + 1;
              iVar52 = *(int *)(pauVar53[0x80] + uVar71 * 4);
              *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) = iVar83 + 1;
              *(int *)(pauVar53[0x80] + uVar71 * 4) = iVar52 + 1;
              uVar70 = puVar39[4];
              *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) =
                   *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) + 1;
              *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) =
                   *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) + 1;
              *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) =
                   *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) + 1;
              *(int *)(pauVar53[0x40] + (uint64_t)(uVar33 >> 8 & 0xff) * 4) =
                   *(int *)(pauVar53[0x40] + (uint64_t)(uVar33 >> 8 & 0xff) * 4) + 1;
              puVar86 = puVar39 + 4;
              puVar58 = puVar39 + 5;
              puVar39 = puVar86;
            } while (puVar58 < puVar40);
          }
          uVar56 = (int64_t)puVar86 - (int64_t)puVar36;
          if (puVar86 < puVar36) {
            uVar70 = (int)puVar36 - (int)puVar86 & 3;
            uVar71 = (uint64_t)uVar70;
            puVar39 = puVar86;
            if (uVar70 != 0) {
              do {
                uVar71 = uVar71 - 1;
                puVar86 = (uint32_t *)((int64_t)puVar39 + 1);
                *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar39 * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar39 * 4) + 1;
                puVar39 = puVar86;
              } while (uVar71 != 0);
            }
            if (uVar56 < 0xfffffffffffffffd) {
              do {
                *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar86 * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar86 * 4) + 1;
                *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar86 + 1) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar86 + 1) * 4) + 1;
                uVar70 = *(uint32_t *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar86 + 2) * 4) + 1;
                if (uVar51 + 0x404eb8c7 <= 0x118f2c30 - uVar51) {
                  uVar70 = *(uint32_t *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar86 + 2) * 4) &
                           1;
                }
                *(uint32_t *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar86 + 2) * 4) = uVar70;
                *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar86 + 3) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar86 + 3) * 4) + 1;
                puVar86 = puVar86 + 1;
              } while (puVar86 < puVar36);
            }
          }
          lVar49 = 0x5db42b2d;
          pauVar73 = pauVar53;
          while( true ) {
            auVar105 = pauVar73[0xc1];
            auVar98 = pauVar73[0x80];
            iVar83 = *(int *)(pauVar73[0x40] + 4);
            iVar52 = *(int *)(pauVar73[0x40] + 8);
            iVar85 = *(int *)(pauVar73[0x40] + 0xc);
            iVar67 = *(int *)(pauVar73[0xc0] + 4);
            iVar81 = *(int *)(pauVar73[0xc0] + 8);
            iVar87 = *(int *)(pauVar73[0xc0] + 0xc);
            iVar12 = *(int *)(*pauVar73 + 4);
            iVar13 = *(int *)(*pauVar73 + 8);
            iVar14 = *(int *)(*pauVar73 + 0xc);
            auVar102._0_4_ =
                 *(int *)pauVar73[1] + auVar105._0_4_ +
                 *(int *)pauVar73[0x81] + *(int *)pauVar73[0x41];
            auVar102._4_4_ =
                 *(int *)(pauVar73[1] + 4) + auVar105._4_4_ +
                 *(int *)(pauVar73[0x81] + 4) + *(int *)(pauVar73[0x41] + 4);
            auVar102._8_4_ =
                 *(int *)(pauVar73[1] + 8) + auVar105._8_4_ +
                 *(int *)(pauVar73[0x81] + 8) + *(int *)(pauVar73[0x41] + 8);
            auVar102._12_4_ =
                 *(int *)(pauVar73[1] + 0xc) + auVar105._12_4_ +
                 *(int *)(pauVar73[0x81] + 0xc) + *(int *)(pauVar73[0x41] + 0xc);
            *(int *)*pauVar73 =
                 *(int *)pauVar73[0x40] + auVar98._0_4_ + *(int *)*pauVar73 + *(int *)pauVar73[0xc0]
            ;
            *(int *)(*pauVar73 + 4) = iVar83 + auVar98._4_4_ + iVar12 + iVar67;
            *(int *)(*pauVar73 + 8) = iVar52 + auVar98._8_4_ + iVar13 + iVar81;
            *(int *)(*pauVar73 + 0xc) = iVar85 + auVar98._12_4_ + iVar14 + iVar87;
            pauVar73[1] = auVar102;
            if (lVar49 == 0x5db42a35) break;
            pauVar73 = pauVar73 + 2;
            lVar49 = lVar49 + -8;
          }
          uVar56 = 0x100;
          do {
            uVar56 = (uint64_t)((int)uVar56 - 1);
          } while (*(int *)(*pauVar53 + uVar56 * 4) == 0);
LAB_7fffa4f5e599:
          if ((int)uVar56 < 0) {
            uVar56 = 0;
          }
          else {
LAB_7fffa4f5e5a2:
            uVar70 = (uint32_t)uVar56 + 1;
            uVar71 = (uint64_t)uVar70;
            if ((uint32_t)uVar56 < 3) {
              uVar88 = 0;
              uVar56 = 0;
LAB_7fffa4f5eb06:
              for (; uVar56 = (uint64_t)*(uint8_t *)(lVar72 + 8 + uVar88 * 8) *
                              (uint64_t)*(uint32_t *)(*pauVar53 + uVar88 * 4) + uVar56,
                  uVar71 - 1 != uVar88; uVar88 = uVar88 + 1) {
              }
            }
            else {
              uVar88 = (uint64_t)(uVar70 & 0xfffffffc);
              lVar92 = 0;
              lVar97 = 0;
              uVar56 = 4;
              lVar49 = 0;
              lVar57 = 0;
              while( true ) {
                auVar105 = *(uint8_t (*) [16])(lVar72 + -0x18 + uVar56 * 8) & auVar31;
                lVar92 = (uint64_t)auVar105._0_4_ *
                         (*(uint64_t *)(pauVar53[-1] + uVar56 * 4) & 0xffffffff) + lVar92;
                lVar97 = (auVar105._8_8_ & 0xffffffff) *
                         (*(uint64_t *)(pauVar53[-1] + uVar56 * 4) >> 0x20) + lVar97;
                auVar105 = *(uint8_t (*) [16])(lVar72 + -8 + uVar56 * 8) & auVar31;
                lVar49 = (uint64_t)auVar105._0_4_ *
                         (*(uint64_t *)(pauVar53[-1] + uVar56 * 4 + 8) & 0xffffffff) + lVar49;
                lVar57 = (auVar105._8_8_ & 0xffffffff) *
                         (*(uint64_t *)(pauVar53[-1] + uVar56 * 4 + 8) >> 0x20) + lVar57;
                if (uVar56 == uVar88) break;
                uVar56 = uVar56 + 4;
              }
              uVar56 = lVar57 + lVar97 + lVar49 + lVar92;
              if ((uVar70 & 0xfffffffc) != uVar70) goto LAB_7fffa4f5eb06;
            }
            uVar56 = uVar56 >> 3;
          }
          if ((~uVar80 << 0xe | ~uVar80 >> 0x12) * 0x68b95fe5 == -0x18abdfe5) {
            uVar56 = uVar56 + *(int64_t *)(param_3 + 0x13c0);
          }
          uVar71 = uVar56 + 6;
          if (uVar77 < 0x100) {
            uVar71 = uVar56;
          }
          piStack_f8 = (int *)((uint64_t)(0x3ff < uVar77) + 3 +
                               (uint64_t)((-(uVar51 + 0x2a20) - 0x5990 & 0xffff) < uVar77) + uVar71
                              );
        }
        else {
LAB_7fffa4f5e15b:
          piStack_f8 = (int *)0x0;
        }
LAB_7fffa4f5e6e0:
        uVar69 = (int64_t)uVar69 >> 3;
        puVar86 = (uint32_t *)((int64_t)puVar37 + uVar69);
        uVar80 = *(uint32_t *)(param_3 + 0x13cc);
        if (uVar69 < 0x5dc) {
          pauVar53[7] = (uint8_t  [16])0x0;
          pauVar53[6] = (uint8_t  [16])0x0;
          pauVar53[5] = (uint8_t  [16])0x0;
          pauVar53[4] = (uint8_t  [16])0x0;
          pauVar53[3] = (uint8_t  [16])0x0;
          pauVar53[2] = (uint8_t  [16])0x0;
          pauVar53[1] = (uint8_t  [16])0x0;
          *pauVar53 = (uint8_t  [16])0x0;
          if (uVar64 == uVar45) {
            uVar70 = 0;
          }
          else {
            puVar36 = puVar37;
            do {
              *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) =
                   *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) + 1;
              puVar36 = (uint32_t *)((int64_t)puVar36 + 1);
            } while (puVar36 < puVar86);
            uVar77 = 0x20;
            do {
              uVar70 = (int)uVar77 - 1;
              uVar77 = (uint64_t)uVar70;
            } while (*(uint32_t *)(*pauVar53 + uVar77 * 4) ==
                     (uint32_t)(uint16_t)~(0xffffU >> (bVar11 & 0xf) | -1 << 0x10 - (bVar11 & 0xf)));
            if (6 < uVar70) {
              uVar56 = 0;
              do {
                uVar56 = (uVar56 + (uint64_t)
                                   (((0xda3d951c - uVar51) * 0x400000 | 0xda3d951c - uVar51 >> 10)
                                   <= (0x774abdbd << (bVar11 & 0x1f) |
                                      0x774abdbdU >> 0x20 - (bVar11 & 0x1f))) * 0x10) - 8;
              } while (uVar56 != (uVar77 + 1 & 0x1fffffff8));
            }
          }
        }
        else {
          uVar70 = 0x1f;
          if (((uint32_t)pauVar53 & 3) == (0U >> (bVar11 & 0x1f) | 0 << 0x20 - (bVar11 & 0x1f))) {
            FUN_7fffa4ecf8e0(pauVar53,0,0x1000);
            puVar36 = puVar37;
            if (0x13 < (int64_t)uVar69) {
              uVar70 = *puVar37;
              puVar39 = puVar37;
              while( true ) {
                puVar36 = puVar39 + 4;
                uVar77 = (uint64_t)(uVar70 >> 8 & 0xff);
                iVar83 = *(int *)(pauVar53[0x40] + uVar77 * 4);
                uVar33 = uVar70 ^ 0x10;
                if (((uVar51 ^ 0xea3015c0) << 0x10 | (uVar51 ^ 0xea3015c0) >> 0x10) <
                    ~(uVar51 ^ 0x3481d8ec) * -0x4cf7596f) {
                  uVar33 = uVar70 >> 0x10;
                }
                uVar43 = puVar39[1];
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                *(int *)(pauVar53[0x40] + uVar77 * 4) = iVar83 + 1;
                uVar77 = (uint64_t)(uVar43 >> 8 & 0xff);
                iVar83 = *(int *)(pauVar53[0x40] + uVar77 * 4);
                *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) + 1;
                *(int *)(pauVar53[0x80] + (uint64_t)(uVar33 & 0xff) * 4) =
                     *(int *)(pauVar53[0x80] + (uint64_t)(uVar33 & 0xff) * 4) + 1;
                iVar52 = *(int *)(*pauVar53 + (uint64_t)(uVar43 & 0xff) * 4);
                uVar70 = puVar39[2];
                *(int *)(pauVar53[0x80] + (uVar43 >> 0xe & 0x3fc)) =
                     *(int *)(pauVar53[0x80] + (uVar43 >> 0xe & 0x3fc)) + 1;
                *(int *)(*pauVar53 + (uint64_t)(uVar43 & 0xff) * 4) = iVar52 + 1;
                *(int *)(pauVar53[0x40] + uVar77 * 4) = iVar83 + 1;
                uVar46 = uVar70 >> 0xe & 0x3fc;
                iVar83 = *(int *)(pauVar53[0x80] + uVar46);
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar43 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar43 >> 0x18) * 4) + 1;
                uVar77 = (uint64_t)(uVar70 >> 8 & 0xff);
                uVar33 = puVar39[3];
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                uVar56 = (uint64_t)((uint16_t)(uVar33 >> 0x10) & 0xff);
                uVar43 = uVar33 >> 0x18;
                if ((uint64_t)((uVar51 ^ 0x1b1f96b3) * -0x45760e45) == 0xffffffffeab8b98a) {
                  uVar43 = uVar33 << 0x18;
                }
                iVar52 = *(int *)(pauVar53[0xc0] + (uint64_t)uVar43 * 4);
                *(int *)(*pauVar53 + (uint64_t)((uint16_t)uVar70 & 0xff) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)((uint16_t)uVar70 & 0xff) * 4) + 1;
                iVar85 = *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4);
                *(int *)(pauVar53[0x80] + uVar46) = iVar83 + 1;
                iVar83 = *(int *)(pauVar53[0x80] + uVar56 * 4);
                uVar70 = *(uint32_t *)(pauVar53[0x40] + uVar77 * 4) + 1;
                if ((0xe7af288fU >> (bVar11 & 0x1f) | -0x1850d771 << 0x20 - (bVar11 & 0x1f)) <=
                    (uVar51 ^ 0x181ae3c3)) {
                  uVar70 = *(uint32_t *)(pauVar53[0x40] + uVar77 * 4) & 1;
                }
                *(uint32_t *)(pauVar53[0x40] + uVar77 * 4) = uVar70;
                uVar70 = *puVar36;
                *(int *)(pauVar53[0x80] + uVar56 * 4) = iVar83 + 1;
                *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) = iVar85 + 1;
                *(int *)(pauVar53[0x40] + (uint64_t)(uVar33 >> 8 & 0xff) * 4) =
                     *(int *)(pauVar53[0x40] + (uint64_t)(uVar33 >> 8 & 0xff) * 4) + 1;
                *(int *)(pauVar53[0xc0] + (uint64_t)uVar43 * 4) = iVar52 + 1;
                if ((uint32_t *)((int64_t)puVar86 - 0xfU) <= puVar39 + 5) break;
                puVar39 = puVar36;
              }
            }
            uVar77 = (int64_t)puVar36 - (int64_t)puVar86;
            if (puVar36 < puVar86) {
              uVar56 = ((int64_t)puVar86 - (int64_t)puVar36) - 3;
              if (0x1b0de210 < (uVar82 * 0x40000000 | uVar82 * 0x5e955714 >> 4) * -0x75e2dda9) {
                uVar56 = (uint64_t)((uint32_t)((int64_t)puVar86 - (int64_t)puVar36) & 3);
              }
              if (uVar56 != 0) {
                do {
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) + 1;
                  puVar36 = (uint32_t *)((int64_t)puVar36 + 1);
                  uVar56 = uVar56 - 1;
                } while (uVar56 != 0);
              }
              if (uVar77 < 0xfffffffffffffffd) {
                do {
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 3) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 3) * 4) + 1;
                  puVar36 = puVar36 + 1;
                } while (puVar36 < puVar86);
              }
            }
            lVar49 = 0;
            while( true ) {
              auVar105 = *(uint8_t (*) [16])(pauVar53[0xc1] + lVar49 * 4);
              piVar5 = (int *)(pauVar53[0xc0] + lVar49 * 4);
              iVar83 = *piVar5;
              iVar52 = piVar5[1];
              iVar85 = piVar5[2];
              iVar67 = piVar5[3];
              piVar6 = (int *)(pauVar53[0x81] + lVar49 * 4);
              iVar81 = piVar6[1];
              iVar87 = piVar6[2];
              iVar12 = piVar6[3];
              piVar5 = (int *)(pauVar53[0x80] + lVar49 * 4);
              iVar13 = *piVar5;
              iVar14 = piVar5[1];
              iVar15 = piVar5[2];
              iVar16 = piVar5[3];
              piVar7 = (int *)(pauVar53[0x41] + lVar49 * 4);
              iVar17 = piVar7[1];
              iVar18 = piVar7[2];
              iVar19 = piVar7[3];
              piVar5 = (int *)(pauVar53[0x40] + lVar49 * 4);
              iVar20 = *piVar5;
              iVar21 = piVar5[1];
              iVar22 = piVar5[2];
              iVar23 = piVar5[3];
              piVar5 = (int *)(*pauVar53 + lVar49 * 4);
              iVar24 = *piVar5;
              iVar25 = piVar5[1];
              iVar26 = piVar5[2];
              iVar27 = piVar5[3];
              piVar5 = (int *)(pauVar53[1] + lVar49 * 4);
              iVar28 = piVar5[1];
              iVar29 = piVar5[2];
              iVar30 = piVar5[3];
              piVar4 = (int *)(pauVar53[1] + lVar49 * 4);
              *piVar4 = *piVar5 + auVar105._0_4_ + *piVar7 + *piVar6;
              piVar4[1] = iVar28 + auVar105._4_4_ + iVar17 + iVar81;
              piVar4[2] = iVar29 + auVar105._8_4_ + iVar18 + iVar87;
              piVar4[3] = iVar30 + auVar105._12_4_ + iVar19 + iVar12;
              piVar5 = (int *)(*pauVar53 + lVar49 * 4);
              *piVar5 = iVar24 + iVar13 + iVar20 + iVar83;
              piVar5[1] = iVar25 + iVar14 + iVar21 + iVar52;
              piVar5[2] = iVar26 + iVar15 + iVar22 + iVar85;
              piVar5[3] = iVar27 + iVar16 + iVar23 + iVar67;
              if (lVar49 == 0xf8) break;
              lVar49 = lVar49 + 8;
            }
            uVar77 = 0x100;
            do {
              uVar70 = (int)uVar77 - 1;
              uVar77 = (uint64_t)uVar70;
            } while (*(int *)(*pauVar53 + uVar77 * 4) == 0);
          }
        }
        if ((int)uVar80 < 1) {
          if (uVar80 != 0) goto LAB_7fffa4f5ec80;
          uVar70 = uVar70 + 1;
          if (uVar70 < 2) {
            uVar70 = 1;
            uVar56 = 0;
            uVar77 = 0;
          }
          else {
            uVar56 = 0;
            uVar77 = 0;
            do {
              sVar32 = (short)*(uint32_t *)
                               (&UNK_7fffa56c6040 +
                               uVar56 * 2 +
                               (int64_t)
                               (int)(0xd201fffeU >> (bVar11 & 0x1f) |
                                    -0x2dfe0002 << 0x20 - (bVar11 & 0x1f)));
              if (sVar32 == -1) {
                sVar32 = 1;
              }
              uVar71 = (int64_t)sVar32 << 3 & 0xffffffff;
              if ((0xf3b3978U >> (bVar11 & 0x1f) | 0xf3b3978 << 0x20 - (bVar11 & 0x1f)) < 0x84c10482
                 ) {
                uVar71 = (int64_t)sVar32 << 3 ^ 0xfffffff8;
              }
              lVar49 = uVar56 * 4;
              lVar57 = uVar56 * 4;
              sVar32 = 1;
              if (*(short *)(&UNK_7fffa56cc150 +
                            uVar56 * 2 + (int64_t)(int)((uVar51 + 0xdab18549) * 0x3b9bbfdd)) != -1)
              {
                sVar32 = *(short *)(&UNK_7fffa56cc150 +
                                   uVar56 * 2 + (int64_t)(int)((uVar51 + 0xdab18549) * 0x3b9bbfdd))
                ;
              }
              uVar56 = uVar56 + 2;
              uVar77 = uVar77 + (uint32_t)(*(int *)(*pauVar53 + lVar49) *
                                      *(int *)(&UNK_7fffa586de4b +
                                              uVar71 * 4 +
                                              ((int64_t)
                                               (int)(0x17c4604aU >> (bVar11 & 0x1f) |
                                                    0x17c4604a << 0x20 - (bVar11 & 0x1f)) ^
                                              0xffffffffcfda30c7U))) +
                       ((uint64_t)*(uint32_t *)(*pauVar53 + lVar57 + 4) *
                        (uint64_t)
                        *(uint32_t *)(&UNK_7fffa5861970 + (uint64_t)(uint32_t)((int)sVar32 << 3) * 4) &
                       0xffffffff);
            } while ((uVar70 & 0xfffffffe) != uVar56);
          }
          if ((uVar70 & 1) != 0) {
            sVar32 = *(short *)(&UNK_7fffa56c22d6 + uVar56 * 2 + (int64_t)(short)(sVar66 * 0x74a));
            if (*(short *)(&UNK_7fffa56c22d6 + uVar56 * 2 + (int64_t)(short)(sVar66 * 0x74a)) == -1
               ) {
              sVar32 = 1;
            }
            uVar77 = uVar77 + (uint32_t)(*(int *)(*pauVar53 + uVar56 * 4) *
                                    *(int *)(&UNK_7fffa58677b9 +
                                            (uint64_t)(uint32_t)((int)sVar32 << 3) * 4 +
                                            (int64_t)(short)(uVar9 + 0x6566)));
          }
LAB_7fffa4f5f00d:
          uVar77 = uVar77 >> 8;
LAB_7fffa4f5f029:
          if (uVar64 != uVar45) {
            do {
              puVar36 = (uint32_t *)((int64_t)puVar37 + 1);
              uVar77 = (uint8_t)*puVar37 + uVar77;
              puVar37 = puVar36;
            } while (puVar36 < puVar86);
          }
          uVar77 = uVar77 >> 3;
        }
        else {
          if (uVar80 == 1) {
LAB_7fffa4f5edd0:
            uVar77 = 0;
            goto LAB_7fffa4f5f029;
          }
LAB_7fffa4f5ec80:
          if (((uVar80 & 0xfffffffe) << 2 | uVar80 >> 0x1e) != 8) goto LAB_7fffa4f5edd0;
          uVar42 = *(uint16_t *)(lVar72 + 0x810);
          lVar49 = (int64_t)(1 << ((uint8_t)uVar42 - 1 & 0x1f));
          if (uVar42 == 0) {
            lVar49 = 1;
          }
          if (uVar70 <= *(uint16_t *)(lVar72 + 0x812)) {
            uVar56 = 0;
            uVar77 = 0;
            do {
              uVar80 = *(uint32_t *)(lVar72 + lVar49 * 4 + 0x818 + uVar56 * 8);
              iVar52 = (uVar80 >> 0x10) + 1;
              iVar83 = iVar52 * 0x1000000;
              if ((int64_t)
                  (uint64_t)((uVar82 * -0x3fdc5000 | uVar82 * -0x43a3fdc5 >> 0x14) ^ 0xc4a5e449) <
                  (int64_t)(int)((0x41a62795 - uVar51) * 0x20 | 0x41a62795 - uVar51 >> 0x1b)) {
                iVar83 = 0;
              }
              if ((uint64_t)*(uint32_t *)(*pauVar53 + uVar56 * 4) != 0) {
                uVar80 = iVar52 * 0x100 -
                         (iVar83 + (uVar80 + (1 << ((uint8_t)uVar42 & 0x1f))) * -0x100 >>
                         (uint64_t)(uint32_t)uVar42);
                if ((uint32_t)uVar42 * 0x100 + 0x100 <= uVar80) goto LAB_7fffa4f5edd8;
                uVar77 = uVar77 + (uint64_t)uVar80 * (uint64_t)*(uint32_t *)(*pauVar53 + uVar56 * 4);
              }
              uVar56 = uVar56 + 1;
            } while (uVar70 + 1 != uVar56);
            goto LAB_7fffa4f5f00d;
          }
LAB_7fffa4f5edd8:
          uVar77 = uVar69 * 10;
        }
        puVar86 = (uint32_t *)(uVar69 + (int64_t)puVar84);
        uVar80 = *(uint32_t *)(param_3 + 0x13c8);
        if (uVar69 < 0x5dc) {
          pauVar53[8] = (uint8_t  [16])0x0;
          pauVar53[7] = (uint8_t  [16])0x0;
          pauVar53[6] = (uint8_t  [16])0x0;
          pauVar53[5] = (uint8_t  [16])0x0;
          pauVar53[4] = (uint8_t  [16])0x0;
          pauVar53[3] = (uint8_t  [16])0x0;
          pauVar53[2] = (uint8_t  [16])0x0;
          pauVar53[1] = (uint8_t  [16])0x0;
          *pauVar53 = (uint8_t  [16])0x0;
          puVar36 = puVar84;
          if (uVar64 == uVar45) {
            uVar56 = 0;
          }
          else {
            do {
              puVar37 = (uint32_t *)((int64_t)puVar36 + 1);
              *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) =
                   *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) + 1;
              bVar91 = (int64_t)puVar86 <= (int64_t)puVar37;
              if (uVar51 + 0x31593891 < ~(uVar51 + 0xb031d8c5)) {
                bVar91 = puVar37 < puVar86;
              }
              puVar36 = puVar37;
            } while (bVar91);
            for (uVar56 = 0x23; *(int *)(*pauVar53 + uVar56 * 4) == 0;
                uVar56 = (uint64_t)((uint32_t)uVar56 - 1)) {
            }
            if (6 < (uint32_t)uVar56) {
              uVar71 = uVar56 + 1 & 0xfffffffffffffff8;
              do {
                uVar71 = uVar71 - 8;
              } while (uVar71 != 0);
            }
          }
        }
        else {
          uVar56 = 0x23;
          if (((uint64_t)pauVar53 & 3) == 0) {
            FUN_7fffa4ecf8e0(pauVar53,0,0x1000);
            puVar36 = puVar84;
            if (0x13 < (int64_t)uVar69) {
              uVar70 = *puVar84;
              puVar37 = puVar84;
              do {
                puVar36 = puVar37 + 4;
                uVar43 = uVar70 >> 0x18;
                uVar33 = puVar37[1];
                uVar88 = (uint64_t)(uVar70 >> 8 & 0xff);
                uVar74 = (uint64_t)(uVar70 >> 0x10 & 0xff);
                iVar83 = *(int *)(pauVar53[0x80] + uVar74 * 4);
                uVar46 = 0xca174255 - uVar51;
                iVar52 = *(int *)(pauVar53[0x40] + uVar88 * 4) + 1;
                uVar71 = (uint64_t)(uVar33 & 0xff);
                uVar56 = (uint64_t)(uVar33 >> 8 & 0xff);
                if ((uint64_t)uVar46 * 0x78ee58db528b9ea5 == -0x848c1a7b019a76c) {
                  *(int *)(pauVar53[0x40] + uVar88 * 4) = iVar52;
                  iVar52 = *(int *)(pauVar53[0xc0] + (uint64_t)uVar43 * 4);
                  *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) + 1;
                  iVar85 = *(int *)(*pauVar53 + uVar71 * 4);
                  iVar67 = (uVar51 + 0x8d9f8bbb) * (uVar46 | 1);
                  *(uint32_t *)(pauVar53[0xc0] + (uint64_t)uVar43 * 4) =
                       iVar52 + (uint32_t)(0x6862d800 - (uVar46 ^ 0xd01bbc6) <=
                                      (((uVar51 ^ 0xa848289e) << 0xb | (uVar51 ^ 0xa848289e) >> 0x15
                                       ) - uVar46) + 0xb8ed4953) * 2 + -1;
                }
                else {
                  *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) + 1;
                  iVar85 = *(int *)(*pauVar53 + uVar71 * 4);
                  *(int *)(pauVar53[0x40] + uVar88 * 4) = iVar52;
                  iVar67 = -0x4acb3e84 - uVar51;
                  *(int *)(pauVar53[0xc0] + (uint64_t)uVar43 * 4) =
                       *(int *)(pauVar53[0xc0] + (uint64_t)uVar43 * 4) + 1;
                }
                uVar70 = (uVar33 >> 0x18) << 2;
                piStack_118 = (int *)(*pauVar53 + uVar71 * 4);
                piStack_230 = (int *)(pauVar53[0xc0] + uVar70);
                iVar52 = *(int *)(pauVar53[0xc0] + uVar70);
                iVar81 = *(int *)(pauVar53[0x40] + uVar56 * 4);
                bVar59 = (uint8_t)iVar67 & 0x1f;
                bVar50 = (uint8_t)iVar67 & 0x1f;
                uVar46 = (iVar67 - uVar51) + 0xb53b8657;
                *(int *)(pauVar53[0x80] + uVar74 * 4) = iVar83 + 1;
                uVar70 = puVar37[2];
                *piStack_230 = iVar52 + 1;
                *(int *)(pauVar53[0x40] + uVar56 * 4) = iVar81 + 1;
                *piStack_118 = iVar85 + 1;
                *(int *)(pauVar53[0x80] + (uint64_t)(uVar33 >> 0x10 & 0xff) * 4) =
                     *(int *)(pauVar53[0x80] + (uint64_t)(uVar33 >> 0x10 & 0xff) * 4) + 1;
                uVar43 = uVar70 >> 0xe & 0x3fc;
                iVar83 = *(int *)(pauVar53[0x80] + uVar43);
                uVar33 = puVar37[3];
                *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) + 1;
                *(int *)(pauVar53[0x80] + uVar43) = iVar83 + 1;
                uVar43 = uVar33 >> 8 & 0xff;
                if ((uint64_t)(int64_t)(int)(uVar46 * 0x400000 | uVar46 >> 10) <=
                    (uint64_t)
                    (~(uVar82 * 0xfc5778) << bVar59 | ~(uVar82 * 0xfc5778) >> 0x20 - bVar59)) {
                  uVar43 = uVar33 >> 8 | 0xff;
                }
                iVar83 = *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4);
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                iVar52 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4);
                *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) =
                     *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) + 1;
                uVar70 = *puVar36;
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) = iVar52 + 1;
                uVar46 = *(uint32_t *)(pauVar53[0x40] + (uint64_t)uVar43 * 4);
                *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) = iVar83 + 1;
                uVar76 = uVar46 ^ 1;
                if ((uint64_t)(iVar67 + 0xe070fb97) <=
                    (uint64_t)
                    (int64_t)
                    (int)((uVar51 + 0xb5130243 << bVar50 | uVar51 + 0xb5130243 >> 0x20 - bVar50) *
                         -0x66af707d)) {
                  uVar76 = uVar46 + 1;
                }
                *(uint32_t *)(pauVar53[0x40] + (uint64_t)uVar43 * 4) = uVar76;
                *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) =
                     *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) + 1;
                puVar39 = puVar37 + 5;
                puVar37 = puVar36;
              } while (puVar39 < (uint32_t *)((int64_t)puVar86 - 0xfU));
            }
            uVar56 = (int64_t)puVar36 - (int64_t)puVar86;
            if (puVar36 < puVar86) {
              for (uVar71 = (uint64_t)((int)puVar86 - (int)puVar36 & 3); uVar71 != 0;
                  uVar71 = uVar71 - 1) {
                uVar70 = *puVar36;
                puVar36 = (uint32_t *)((int64_t)puVar36 + 1);
                *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) + 1;
              }
              if (uVar56 < 0xfffffffffffffffd) {
                do {
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 3) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 3) * 4) + 1;
                  puVar36 = puVar36 + 1;
                } while (puVar36 < puVar86);
              }
            }
            lVar49 = 0x896e144b;
            pauVar73 = pauVar53;
            while( true ) {
              iVar83 = *(int *)pauVar73[0x80];
              iVar52 = *(int *)(pauVar73[0x80] + 4);
              iVar85 = *(int *)(pauVar73[0x80] + 8);
              iVar67 = *(int *)(pauVar73[0x80] + 0xc);
              iVar81 = *(int *)pauVar73[0x40];
              iVar87 = *(int *)(pauVar73[0x40] + 4);
              iVar12 = *(int *)(pauVar73[0x40] + 8);
              iVar13 = *(int *)(pauVar73[0x40] + 0xc);
              iVar14 = *(int *)(pauVar73[0x41] + 4);
              iVar15 = *(int *)(pauVar73[0x41] + 8);
              iVar16 = *(int *)(pauVar73[0x41] + 0xc);
              iVar17 = *(int *)(pauVar73[0xc1] + 4);
              iVar18 = *(int *)(pauVar73[0xc1] + 8);
              iVar19 = *(int *)(pauVar73[0xc1] + 0xc);
              iVar20 = *(int *)(pauVar73[0x81] + 4);
              iVar21 = *(int *)(pauVar73[0x81] + 8);
              iVar22 = *(int *)(pauVar73[0x81] + 0xc);
              iVar23 = *(int *)*pauVar73;
              iVar24 = *(int *)(*pauVar73 + 4);
              iVar25 = *(int *)(*pauVar73 + 8);
              iVar26 = *(int *)(*pauVar73 + 0xc);
              iVar27 = *(int *)(pauVar73[1] + 4);
              iVar28 = *(int *)(pauVar73[1] + 8);
              iVar29 = *(int *)(pauVar73[1] + 0xc);
              *(int *)pauVar73[1] =
                   *(int *)pauVar73[1] + *(int *)pauVar73[0x41] +
                   *(int *)pauVar73[0x81] + *(int *)pauVar73[0xc1];
              *(int *)(pauVar73[1] + 4) = iVar27 + iVar14 + iVar20 + iVar17;
              *(int *)(pauVar73[1] + 8) = iVar28 + iVar15 + iVar21 + iVar18;
              *(int *)(pauVar73[1] + 0xc) = iVar29 + iVar16 + iVar22 + iVar19;
              auVar105._0_4_ = *(int *)pauVar73[0xc0] + iVar81 + iVar23 + iVar83;
              auVar105._4_4_ = *(int *)(pauVar73[0xc0] + 4) + iVar87 + iVar24 + iVar52;
              auVar105._8_4_ = *(int *)(pauVar73[0xc0] + 8) + iVar12 + iVar25 + iVar85;
              auVar105._12_4_ = *(int *)(pauVar73[0xc0] + 0xc) + iVar13 + iVar26 + iVar67;
              *pauVar73 = auVar105;
              if (lVar49 == 0x896e1543) break;
              pauVar73 = pauVar73 + 2;
              lVar49 = lVar49 + 8;
            }
            uVar56 = 0x100;
            do {
              uVar56 = (uint64_t)((int)uVar56 - 1);
            } while (*(int *)(*pauVar53 + uVar56 * 4) == 0);
          }
        }
        if ((int)uVar80 < 1) {
          if (uVar80 != 0) {
            uVar80 = uVar80 & 0xfffffffe;
            goto joined_r0x7fffa4f5f69e;
          }
          uVar80 = (uint32_t)uVar56 + 1;
          uVar33 = (-0xcf7793b << (bVar11 & 0x1f) | 0xf30886c5U >> 0x20 - (bVar11 & 0x1f)) +
                   0x536721d8;
          uVar70 = ((uVar51 + 0x222894bb) * 0x100000 | uVar51 + 0x222894bb >> 0xc) * 0x30c527b9;
          if (uVar80 < 2) {
            uVar80 = 1;
            uVar56 = 0;
            uStack_1c0 = 0;
            if (uVar70 <= uVar33) goto LAB_7fffa4f5f99f;
LAB_7fffa4f5f9a5:
            sVar32 = *(short *)(&UNK_7fffa5705ff0 +
                               uVar56 * 2 +
                               (int64_t)
                               (int)(0x4f41fffeU >> (bVar11 & 0x1f) |
                                    0x4f41fffe << 0x20 - (bVar11 & 0x1f)));
            if (*(short *)(&UNK_7fffa5705ff0 +
                          uVar56 * 2 +
                          (int64_t)
                          (int)(0x4f41fffeU >> (bVar11 & 0x1f) |
                               0x4f41fffe << 0x20 - (bVar11 & 0x1f))) == -1) {
              sVar32 = 1;
            }
            uStack_1c0 = uStack_1c0 +
                         ((uint64_t)
                          *(uint32_t *)((int64_t)(int)(uVar82 * -0x63a29bb1 + -0x76290e35) +
                                    0x7fffa586e6a6 + (uint64_t)(uint32_t)((int)sVar32 << 2) * 4) *
                          (uint64_t)*(uint32_t *)(*pauVar53 + uVar56 * 4) & 0xffffffff);
          }
          else {
            uVar56 = 2;
            uStack_1c0 = 0;
            while( true ) {
              uVar42 = *(uint16_t *)
                        ((int64_t)(short)(sVar66 * -0x611c + 0x1281) + 0x7fffa56fbee9 + uVar56 * 2)
              ;
              uVar88 = (uint64_t)(uint32_t)((short)uVar42 * 4);
              uVar71 = uVar88;
              if (uVar42 == (uint16_t)(0xffffU >> (bVar11 & 0xf) | -1 << 0x10 - (bVar11 & 0xf))) {
                uVar71 = 4;
              }
              if ((0x788724efU >> (bVar11 & 0x1f) | 0x788724ef << 0x20 - (bVar11 & 0x1f)) <
                  (0x3dd47dcbU >> (bVar11 & 0x1f) | 0x3dd47dcb << 0x20 - (bVar11 & 0x1f))) {
                uVar71 = uVar88;
              }
              sVar32 = (short)*(uint32_t *)
                               (&UNK_7fffa5703d66 +
                               uVar56 * 2 +
                               (int64_t)
                               (int)~((uVar51 ^ 0x61a53c50) << 0xf | (uVar51 ^ 0x61a53c50) >> 0x11))
              ;
              if (sVar32 == -1) {
                sVar32 = 1;
              }
              uStack_1c0 = uStack_1c0 +
                           (uint32_t)(*(int *)(pauVar53[-1] + uVar56 * 4 + 8) *
                                 *(int *)(&UNK_7fffa586ae65 +
                                         (uint64_t)(uint32_t)((int)sVar32 << 2) * 4 +
                                         ((int64_t)
                                          (int)(0x279c5b4U >> (bVar11 & 0x1f) |
                                               0x279c5b4 << 0x20 - (bVar11 & 0x1f)) ^ 0x1d256a37U)))
                           + (uint64_t)
                             (uint32_t)(*(int *)(&UNK_7fffa5870b94 +
                                            uVar71 * 4 + (int64_t)(int)(uVar51 + 0xf5e7d18b)) *
                                   *(int *)(pauVar53[-1] + uVar56 * 4 + 0xc));
              if ((uVar80 & 0xfffffffe) == uVar56) break;
              uVar56 = uVar56 + 2;
            }
            if (uVar33 < uVar70) goto LAB_7fffa4f5f9a5;
LAB_7fffa4f5f99f:
            if ((uVar80 & 1) != 0) goto LAB_7fffa4f5f9a5;
          }
          uStack_1c0 = uStack_1c0 >> 8;
LAB_7fffa4f5fa17:
          if (uVar64 != uVar45) {
            do {
              uVar80 = *puVar84;
              puVar84 = (uint32_t *)((int64_t)puVar84 + 1);
              uStack_1c0 = uStack_1c0 +
                           (uint8_t)(&UNK_7fffa586bf4e)
                                 [(uint64_t)(uint8_t)uVar80 +
                                  (int64_t)(int)((uVar51 + 0xfbea76b9) * 0x196fef4d)];
            } while (puVar84 < puVar86);
          }
          uStack_1c0 = uStack_1c0 >> 3;
        }
        else {
          uVar80 = uVar80 & 0x7ffffffe;
joined_r0x7fffa4f5f69e:
          if (uVar80 != 2) {
            uStack_1c0 = 0;
            goto LAB_7fffa4f5fa17;
          }
          uVar42 = *(uint16_t *)(lVar72 + 0x10c0);
          bVar59 = (uint8_t)uVar42;
          lVar49 = (int64_t)(1 << (bVar59 - 1 & 0x1f));
          if (uVar42 == 0) {
            lVar49 = 1;
          }
          if ((uint32_t)uVar56 <= (uint32_t)*(uint16_t *)(lVar72 + 0x10c2)) {
            uVar71 = 0;
            uStack_1c0 = 0;
            while( true ) {
              uVar80 = *(uint32_t *)(lVar72 + lVar49 * 4 + 0x10c8 + uVar71 * 8);
              iVar83 = (uVar80 >> 0x10) + 1;
              if ((uint64_t)*(uint32_t *)(*pauVar53 + uVar71 * 4) != 0) {
                uVar80 = iVar83 * 0x100 -
                         (iVar83 * 0x1000000 + ((1 << (bVar59 & 0x1f)) + uVar80) * -0x100 >>
                         (bVar59 & 0x1f));
                if ((uint32_t)uVar42 * 0x100 + 0x100 <= uVar80) goto LAB_7fffa4f5f781;
                uStack_1c0 = uStack_1c0 +
                             (uint64_t)uVar80 * (uint64_t)*(uint32_t *)(*pauVar53 + uVar71 * 4);
              }
              if (uVar56 == uVar71) break;
              uVar71 = uVar71 + 1;
            }
            uStack_1c0 = uStack_1c0 >> 8;
            goto LAB_7fffa4f5fa17;
          }
LAB_7fffa4f5f781:
          uStack_1c0 = uVar69 * 10;
        }
        puVar86 = (uint32_t *)((int64_t)puVar78 + uVar69);
        uVar80 = *(uint32_t *)(param_3 + uVar62);
        if (uVar69 < 0x5dc) {
          pauVar53[0xc] = (uint8_t  [16])0x0;
          pauVar53[0xb] = (uint8_t  [16])0x0;
          pauVar53[10] = (uint8_t  [16])0x0;
          pauVar53[9] = (uint8_t  [16])0x0;
          pauVar53[8] = (uint8_t  [16])0x0;
          pauVar53[7] = (uint8_t  [16])0x0;
          pauVar53[6] = (uint8_t  [16])0x0;
          pauVar53[5] = (uint8_t  [16])0x0;
          pauVar53[4] = (uint8_t  [16])0x0;
          pauVar53[3] = (uint8_t  [16])0x0;
          pauVar53[2] = (uint8_t  [16])0x0;
          pauVar53[1] = (uint8_t  [16])0x0;
          *pauVar53 = (uint8_t  [16])0x0;
          *(uint32_t *)pauVar53[0xd] = 0;
          if (uVar64 == uVar45) {
            uVar70 = 0;
          }
          else {
            puVar36 = puVar78;
            do {
              uVar70 = *puVar36;
              puVar36 = (uint32_t *)((int64_t)puVar36 + 1);
              *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) =
                   *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) + 1;
            } while (puVar36 < puVar86);
            uVar56 = 0x34;
            while (uVar70 = (uint32_t)uVar56, *(int *)(*pauVar53 + uVar56 * 4) == 0) {
              uVar56 = (uint64_t)(uVar70 - 1);
            }
            if (6 < uVar70) {
              uVar56 = uVar56 + 1 & 0xfffffffffffffff8;
              do {
                uVar56 = uVar56 - 8;
              } while (uVar56 != 0);
            }
          }
joined_r0x7fffa4f5fdae:
          if ((int)uVar80 < 1) goto LAB_7fffa4f5ffb0;
LAB_7fffa4f5fd99:
          if (uVar80 != 1) goto LAB_7fffa4f5ffb6;
LAB_7fffa4f5ffd0:
          uVar56 = 0;
LAB_7fffa4f60410:
          if (uVar64 != uVar45) {
            do {
              puVar36 = (uint32_t *)((int64_t)puVar78 + 1);
              uVar56 = (uint8_t)(&UNK_7fffa56f2edc)
                             [(uint64_t)(uint8_t)*puVar78 +
                              (int64_t)
                              (short)((0x9899 - uVar9) * 0x1000 | (uint16_t)(0x9899 - uVar9) >> 4)] +
                       uVar56;
              puVar78 = puVar36;
            } while (puVar36 < puVar86);
          }
          uVar56 = uVar56 >> 3;
        }
        else {
          uVar70 = 0x34;
          if (((uint64_t)pauVar53 & 3) != 0) goto joined_r0x7fffa4f5fdae;
          FUN_7fffa4ecf8e0(pauVar53,0,0x1000);
          puVar36 = puVar78;
          if (0x13 < (int64_t)uVar69) {
            uVar70 = *puVar78;
            puVar37 = puVar78;
            do {
              puVar36 = puVar37 + 4;
              uVar33 = 0x67c7b786U >> (bVar11 & 0x1f) | 0x67c7b786 << 0x20 - (bVar11 & 0x1f);
              uVar56 = (uint64_t)(uVar70 >> 0x18);
              if (uVar51 + 0xb6774aab < (uVar33 << 4 | uVar33 >> 0x1c)) {
                iVar83 = *(int *)(pauVar53[0xc0] + uVar56 * 4);
                uVar33 = puVar37[1];
                *(int *)(*pauVar53 + ((uint64_t)uVar70 & 0xff) * 4) =
                     *(int *)(*pauVar53 + ((uint64_t)uVar70 & 0xff) * 4) + 1;
              }
              else {
                uVar33 = puVar37[1];
                iVar83 = *(int *)(pauVar53[0xc0] + uVar56 * 4);
                *(int *)(*pauVar53 + ((uint64_t)uVar70 & 0xff) * 4) =
                     *(int *)(*pauVar53 + ((uint64_t)uVar70 & 0xff) * 4) + 1;
              }
              *(int *)(pauVar53[0xc0] + uVar56 * 4) = iVar83 + 1;
              iVar83 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4);
              iVar52 = *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4);
              *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) =
                   *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) + 1;
              uVar56 = (uint64_t)(uVar33 >> 8 & 0xff);
              iVar85 = *(int *)(pauVar53[0x40] + uVar56 * 4);
              *(int *)(pauVar53[0x80] + (uint64_t)((uint16_t)(uVar70 >> 0x10) & 0xff) * 4) =
                   *(int *)(pauVar53[0x80] + (uint64_t)((uint16_t)(uVar70 >> 0x10) & 0xff) * 4) + 1;
              uVar70 = puVar37[2];
              uVar43 = uVar33 >> 0xe & 0x3fc;
              iVar67 = *(int *)(pauVar53[0x80] + uVar43);
              *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) = iVar52 + 1;
              iVar52 = *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4);
              *(int *)(pauVar53[0x40] + uVar56 * 4) = iVar85 + 1;
              uVar56 = (uint64_t)(uVar70 >> 8 & 0xff);
              iVar85 = *(int *)(pauVar53[0x40] + uVar56 * 4);
              *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) = iVar83 + 1;
              iVar83 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4);
              *(int *)(pauVar53[0x80] + uVar43) = iVar67 + 1;
              uVar33 = puVar37[3];
              uVar43 = uVar70 >> 0xe & 0x3fc;
              iVar67 = *(int *)(pauVar53[0x80] + uVar43);
              *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) = iVar83 + 1;
              *(int *)(pauVar53[0x40] + uVar56 * 4) = iVar85 + 1;
              *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) = iVar52 + 1;
              *(int *)(pauVar53[0x80] + uVar43) = iVar67 + 1;
              uVar70 = *puVar36;
              *(int *)(pauVar53[0x40] + (uint64_t)(uint16_t)((uint16_t)uVar33 >> 8) * 4) =
                   *(int *)(pauVar53[0x40] + (uint64_t)(uint16_t)((uint16_t)uVar33 >> 8) * 4) + 1;
              *(int *)(*pauVar53 + (uint64_t)((uint16_t)uVar33 & 0xff) * 4) =
                   *(int *)(*pauVar53 + (uint64_t)((uint16_t)uVar33 & 0xff) * 4) + 1;
              puVar84 = puVar37 + 5;
              *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) =
                   *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) + 1;
              *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) =
                   *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) + 1;
              puVar37 = puVar36;
            } while (puVar84 < (uint32_t *)((int64_t)puVar86 - 0xfU));
          }
          uVar56 = (int64_t)puVar36 - (int64_t)puVar86;
          if (puVar36 < puVar86) {
            uVar71 = (int64_t)puVar86 - (int64_t)puVar36 | 3;
            if ((0x6f6dd1ed << (bVar11 & 0x1f) | 0x6f6dd1edU >> 0x20 - (bVar11 & 0x1f)) < 0xc6f0d008
               ) {
              uVar71 = (uint64_t)((uint32_t)((int64_t)puVar86 - (int64_t)puVar36) & 3);
            }
            for (; uVar71 != 0; uVar71 = uVar71 - 1) {
                    /* WARNING: Read-only address (ram,0x7fffa56b8440) is written */
              uVar70 = *puVar36;
              puVar36 = (uint32_t *)((int64_t)puVar36 + 1);
              *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) =
                   *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) + 1;
            }
                    /* WARNING: Read-only address (ram,0x7fffa56b8440) is written */
            if (uVar56 < 0xfffffffffffffffd) {
              do {
                *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) + 1;
                *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) + 1;
                *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) + 1;
                *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 3) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 3) * 4) + 1;
                puVar36 = puVar36 + 1;
              } while (puVar36 < puVar86);
            }
          }
          lVar49 = 0;
          do {
            if ((int)((uVar51 ^ 0x4f54c668) * 0xbd421db + 0x446a07d6) <
                (int)((uVar51 + 0xf07b7f7e) * 2 | (uint32_t)((int)(uVar51 + 0xf07b7f7e) < 0))) {
              uVar33 = 0x3e4c9ffb - uVar51;
            }
            else {
              uVar33 = uVar51 ^ 0x8e2d9338;
            }
            piVar6 = (int *)(pauVar53[0x40] + lVar49 * 4);
            iVar83 = piVar6[1];
            iVar52 = piVar6[2];
            iVar85 = piVar6[3];
            piVar7 = (int *)(pauVar53[0xc0] + lVar49 * 4);
            iVar67 = piVar7[1];
            iVar81 = piVar7[2];
            iVar87 = piVar7[3];
            auVar105 = *(uint8_t (*) [16])(pauVar53[0x81] + lVar49 * 4);
            piVar5 = (int *)(pauVar53[0xc1] + lVar49 * 4);
            iVar12 = *piVar5;
            iVar13 = piVar5[1];
            iVar14 = piVar5[2];
            iVar15 = piVar5[3];
            piVar5 = (int *)(*pauVar53 + lVar49 * 4);
            iVar16 = piVar5[1];
            iVar17 = piVar5[2];
            iVar18 = piVar5[3];
            piVar4 = (int *)(pauVar53[1] + lVar49 * 4);
            iVar19 = *piVar4;
            iVar20 = piVar4[1];
            iVar21 = piVar4[2];
            iVar22 = piVar4[3];
            piVar8 = (int *)(pauVar53[0x80] + lVar49 * 4);
            iVar23 = piVar8[1];
            iVar24 = piVar8[2];
            iVar25 = piVar8[3];
            piVar4 = (int *)(*pauVar53 + lVar49 * 4);
            *piVar4 = *piVar8 + *piVar5 + *piVar7 + *piVar6;
            piVar4[1] = iVar23 + iVar16 + iVar67 + iVar83;
            piVar4[2] = iVar24 + iVar17 + iVar81 + iVar52;
            piVar4[3] = iVar25 + iVar18 + iVar87 + iVar85;
            piVar4 = (int *)(pauVar53[0x41] + lVar49 * 4);
            iVar83 = piVar4[1];
            iVar52 = piVar4[2];
            iVar85 = piVar4[3];
            piVar5 = (int *)(pauVar53[1] + lVar49 * 4);
            *piVar5 = *piVar4 + auVar105._0_4_ + iVar19 + iVar12;
            piVar5[1] = iVar83 + auVar105._4_4_ + iVar20 + iVar13;
            piVar5[2] = iVar52 + auVar105._8_4_ + iVar21 + iVar14;
            piVar5[3] = iVar85 + auVar105._12_4_ + iVar22 + iVar15;
            lVar49 = lVar49 + 8;
          } while (lVar49 != 0x100);
          uVar56 = 0xff;
          while (uVar70 = (uint32_t)uVar56, *(int *)(*pauVar53 + uVar56 * 4) == 0) {
            uVar43 = (uVar51 ^ 0xbaa3a683) + 0x345b1e4f;
            bVar59 = (uint8_t)uVar33 & 0x1f;
            uVar56 = (uint64_t)
                     (uVar70 - ((uVar43 >> bVar59 | uVar43 << 0x20 - bVar59) ==
                               ((uVar33 ^ 0x571e4bc9) * uVar82 ^ 0xb57ab8bd)));
          }
          if (0 < (int)uVar80) goto LAB_7fffa4f5fd99;
LAB_7fffa4f5ffb0:
          if (uVar80 == 0) {
            uVar70 = uVar70 + 1;
            if (uVar70 < 2) {
              lVar72 = 0;
              uVar56 = 0;
LAB_7fffa4f60373:
              sVar32 = *(short *)(&UNK_7fffa5789363 +
                                 lVar72 * 2 + (int64_t)(int)(uVar82 * 0x677ec06d));
              if (*(short *)(&UNK_7fffa5789363 + lVar72 * 2 + (int64_t)(int)(uVar82 * 0x677ec06d))
                  == -1) {
                sVar32 = 1;
              }
              uVar56 = uVar56 + (uint32_t)(*(int *)(&UNK_7fffa5865214 +
                                               (uint64_t)(uint32_t)((int)sVar32 << 2) * 4 +
                                               (int64_t)(short)((uVar9 ^ 0xb152) + 0x3a59)) *
                                      *(int *)(*pauVar53 + lVar72 * 4));
            }
            else {
              uStack_168 = 0;
              uVar56 = 0;
              while( true ) {
                lVar72 = ((int64_t)(int)(-0x2cf0f083 - uVar51) != 0xac89d8f5) + uStack_168;
                sVar32 = 1;
                if (*(short *)(&UNK_7fffa578f047 +
                              lVar72 * 2 + (int64_t)(int)(uVar82 * 0x65dfdfd9 + -0x4acc9e10)) != -1
                   ) {
                  sVar32 = *(short *)(&UNK_7fffa578f047 +
                                     lVar72 * 2 + (int64_t)(int)(uVar82 * 0x65dfdfd9 + -0x4acc9e10)
                                     );
                }
                sVar65 = 1;
                if ((short)*(uint32_t *)
                            (&UNK_7fffa57874af +
                            uStack_168 * 2 +
                            (int64_t)
                            (short)(-0x3968 << (bVar11 & 0xf) | 0xc698U >> 0x10 - (bVar11 & 0xf)))
                    != -1) {
                  sVar65 = (short)*(uint32_t *)
                                   (&UNK_7fffa57874af +
                                   uStack_168 * 2 +
                                   (int64_t)
                                   (short)(-0x3968 << (bVar11 & 0xf) |
                                          0xc698U >> 0x10 - (bVar11 & 0xf)));
                }
                uVar80 = *(uint32_t *)(*pauVar53 + lVar72 * 4) *
                         *(uint32_t *)(&UNK_7fffa5868e10 +
                                  (uint64_t)(uint32_t)((int)sVar32 << 2) * 4 +
                                  (int64_t)
                                  (short)(0x16c1U >> (bVar11 & 0xf) |
                                         0x16c1 << 0x10 - (bVar11 & 0xf)));
                if ((int64_t)
                    (uint64_t)
                    (0x10674d27U >> (bVar11 & 0x1f) | 0x10674d27 << 0x20 - (bVar11 & 0x1f)) <=
                    (int64_t)(int)(uVar82 * -0x42015605)) {
                  uVar80 = *(uint32_t *)(*pauVar53 + lVar72 * 4) &
                           *(uint32_t *)(&UNK_7fffa5868e10 +
                                    (uint64_t)(uint32_t)((int)sVar32 << 2) * 4 +
                                    (int64_t)
                                    (short)(0x16c1U >> (bVar11 & 0xf) |
                                           0x16c1 << 0x10 - (bVar11 & 0xf)));
                }
                uVar71 = (int64_t)(int)uVar80;
                if (uVar82 * 0xc11bf75 ==
                    ((0x97539961U >> (bVar11 & 0x1f) | -0x68ac669f << 0x20 - (bVar11 & 0x1f)) ^
                    0xcb0cbac)) {
                  uVar71 = (uint64_t)uVar80;
                }
                uVar56 = uVar71 + uVar56 + (uint32_t)(*(int *)(&UNK_7fffa58710a3 +
                                                          (uint64_t)(uint32_t)((int)sVar65 << 2) * 4 +
                                                          (int64_t)
                                                          (int)(0x119bfffeU >> (bVar11 & 0x1f) |
                                                               0x119bfffe << 0x20 - (bVar11 & 0x1f))
                                                          ) * *(int *)(*pauVar53 + uStack_168 * 4));
                if ((uint64_t)(uVar70 & 0xfffffffe) - 2 == uStack_168) break;
                uStack_168 = uStack_168 + 2;
              }
              lVar72 = uStack_168 + 2;
              if ((uVar70 & 1) != 0) goto LAB_7fffa4f60373;
            }
            uVar56 = uVar56 >> 8;
            goto LAB_7fffa4f60410;
          }
LAB_7fffa4f5ffb6:
          if ((uVar80 & 0xfffffffe) != 2) goto LAB_7fffa4f5ffd0;
          uVar42 = *(uint16_t *)(lVar72 + 0xb14);
          bVar59 = (uint8_t)uVar42;
          lVar49 = (int64_t)(1 << (bVar59 - 1 & 0x1f));
          if (uVar42 == 0) {
            lVar49 = 1;
          }
          if (uVar70 <= *(uint16_t *)(lVar72 + 0xb16)) {
            uVar71 = 0;
            uVar56 = 0;
            while( true ) {
              uVar80 = *(uint32_t *)(lVar72 + lVar49 * 4 + 0xb1c + uVar71 * 8);
              iVar83 = (uVar80 >> 0x10) + 1;
              if (*(uint32_t *)(*pauVar53 + uVar71 * 4) != 0) {
                uVar80 = iVar83 * 0x100 -
                         (iVar83 * 0x1000000 + (uVar80 + (1 << (bVar59 & 0x1f))) * -0x100 >>
                         (bVar59 & 0x1f));
                if ((uint32_t)uVar42 * 0x100 + 0x100 <= uVar80) goto LAB_7fffa4f60043;
                uVar56 = uVar56 + (uint64_t)*(uint32_t *)(*pauVar53 + uVar71 * 4) * (uint64_t)uVar80;
              }
              if (uVar70 == uVar71) break;
              uVar71 = uVar71 + 1;
            }
            uVar56 = uVar56 >> 8;
            goto LAB_7fffa4f60410;
          }
LAB_7fffa4f60043:
          uVar56 = uVar69 * 10;
        }
        lVar72 = *(int64_t *)(param_3 + 0xc88);
        pauVar53 = *(uint8_t (**) [16])(param_3 + 0xdc0);
        lVar49 = (int64_t)piStack_f8 + uVar77 +
                 (((uint64_t)(0x7f < uVar69) + 1) - (uint64_t)(uVar69 < 0x7f00));
        uStack_210 = uVar56 + 5 + lVar49 + uStack_1c0;
        if ((0x22a9957b << (bVar11 & 0x1f) | 0x22a9957bU >> 0x20 - (bVar11 & 0x1f)) ==
            ((uVar51 ^ 0x6b612bf0) << 1 | (uint32_t)((int)(uVar51 ^ 0x6b612bf0) < 0))) {
          uStack_210 = uStack_1c0 + lVar49 + 5 | uVar56;
        }
        uStack_210 = uStack_210 + *(int64_t *)(param_3 + 0x1460);
      }
      uVar45 = uVar48 - uVar89;
      if ((uVar51 + 0xc488db71) * 0x49cee021 <= uVar82 * 0x206f1cab) {
        uVar45 = uVar34;
      }
      (*(code *)((int64_t)
                 (int)(((0x463c7d1 - uVar51) * 0x40000000 | 0x463c7d1 - uVar51 >> 2) * 0x28b61407) +
                0x7fffa55bf520))
                (uVar82 * 0x206f1cab,lVar2,pauVar53,
                 (uVar45 << 0xb | uVar45 >> 0x35) ^ (uVar45 << 0x12 | uVar45 >> 0x2e) ^ uVar45,
                 ~(0x4da406aeU >> (bVar11 & 0x1f) | 0x4da406ae << 0x20 - (bVar11 & 0x1f)));
      lVar49 = *(int64_t *)(param_3 + 0xc88);
      pauVar53 = *(uint8_t (**) [16])(param_3 + 0xdc0);
      uVar45 = lVar72 + 0x453ba0f2U ^ (uint64_t)(uVar51 ^ 0x802abaff);
      if (uVar45 < 0xffffffffffffff89) {
        puVar36 = *(uint32_t **)(param_3 + 0xf00);
        lVar72 = *(int64_t *)(param_3 + 0xee8);
        lVar57 = *(int64_t *)(param_3 + 0xef0);
        puVar86 = *(uint32_t **)(param_3 + 0xef8);
        uVar89 = (int64_t)puVar36 - (int64_t)puVar86;
        puVar37 = *(uint32_t **)(param_3 + 0xf08);
        puVar78 = *(uint32_t **)(param_3 + 0xf10);
        puVar84 = *(uint32_t **)(param_3 + uVar47);
        uVar80 = *(uint32_t *)(param_3 + 0x1338);
        if ((int)uVar80 < 2) {
          uVar64 = 1;
          if (((int)uVar80 <
               (int)(uint32_t)(uint16_t)(-0x8000 << (bVar11 & 0xf) | 0x8000U >> 0x10 - (bVar11 & 0xf))) &&
             (uVar64 = uVar89, uVar80 != 0)) {
            uVar64 = 0;
          }
        }
        else if (((int)uVar80 < (int)((uVar51 ^ 0x4bcb3c52) & 0xffff)) ||
                (uVar80 == (uVar75 * 0x40c - 0x17c9 & 0xffff))) {
          uVar64 = uVar89;
          if (((uint64_t)pauVar53 & 3) == 0) {
            if (uVar89 < 0x5dc) {
              FUN_7fffa4ecf8e0(pauVar53,0,0x400);
              if (uVar89 != 0) {
                do {
                  uVar70 = *puVar86;
                  puVar86 = (uint32_t *)((int64_t)puVar86 + 1);
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) + 1;
                } while (puVar86 < puVar36);
                uVar64 = 0x100;
                uVar70 = 0xff;
                do {
                  uVar69 = (uint64_t)uVar70;
                  uVar33 = (int)uVar64 - 1;
                  uVar64 = (uint64_t)uVar33;
                  uVar70 = uVar70 - 1;
                } while (*(int *)(*pauVar53 + uVar64 * 4) == 0);
                if (6 < uVar33) {
                  uVar64 = uVar69 + 1 & 0xfffffffffffffff8;
                  do {
                    uVar64 = uVar64 - 8;
                  } while (uVar64 != 0);
                  goto LAB_7fffa4f60b5b;
                }
                goto LAB_7fffa4f60b74;
              }
              uVar69 = 1;
              uVar64 = 0;
              uVar77 = 0;
              goto LAB_7fffa4f60c80;
            }
            FUN_7fffa4ecf8e0(pauVar53,0,0x1000);
            if (0x13 < (int64_t)uVar89) {
              puVar40 = (uint32_t *)((int64_t)puVar86 + (uVar89 - 0xf));
              uVar70 = *puVar86;
              puVar39 = puVar86;
              while( true ) {
                puVar86 = puVar39 + 4;
                uVar33 = puVar39[1];
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                uVar64 = (uint64_t)(uVar33 >> 8 & 0xff);
                iVar83 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4);
                *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) =
                     *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) + 1;
                iVar52 = *(int *)(pauVar53[0x40] + uVar64 * 4);
                *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) =
                     *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) + 1;
                uVar69 = (uint64_t)((uint16_t)(uVar33 >> 0x10) & 0xff);
                iVar85 = *(int *)(pauVar53[0x80] + uVar69 * 4);
                *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) + 1;
                iVar67 = *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4);
                uVar70 = puVar39[2];
                *(int *)(pauVar53[0x80] + uVar69 * 4) = iVar85 + 1;
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) = iVar83 + 1;
                uVar43 = *(uint32_t *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                if (uVar82 * 0x6aaed34b != -0x5b6c9145) {
                  uVar43 = *(uint32_t *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) | 1;
                }
                *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) = iVar67 + 1;
                uVar46 = uVar70 >> 0xe & 0x3fc;
                uVar33 = *(uint32_t *)(pauVar53[0x80] + uVar46) | 1;
                if ((uint64_t)(uVar51 + 0x485ffdd2) <=
                    (uint64_t)(int64_t)(int)((0x3d021cae - uVar51) * -0x4dabbc6f)) {
                  uVar33 = *(uint32_t *)(pauVar53[0x80] + uVar46) + 1;
                }
                uVar77 = (uint64_t)((uint16_t)uVar70 & 0xff);
                uVar69 = (uint64_t)(uVar70 >> 8 & 0xff);
                iVar83 = *(int *)(*pauVar53 + uVar77 * 4);
                *(int *)(pauVar53[0x40] + uVar64 * 4) = iVar52 + 1;
                iVar52 = *(int *)(pauVar53[0x40] + uVar69 * 4);
                uVar76 = puVar39[3];
                *(int *)(*pauVar53 + uVar77 * 4) = iVar83 + 1;
                *(int *)(pauVar53[0x40] + uVar69 * 4) = iVar52 + 1;
                *(uint32_t *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) = uVar43;
                iVar83 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar76 >> 0x18) * 4);
                uVar64 = (uint64_t)(uVar76 >> 8 & 0xff);
                iVar52 = *(int *)(pauVar53[0x40] + uVar64 * 4);
                iVar85 = *(int *)(*pauVar53 + (uint64_t)(uVar76 & 0xff) * 4);
                *(uint32_t *)(pauVar53[0x80] + uVar46) = uVar33;
                uVar70 = *puVar86;
                *(int *)(pauVar53[0x40] + uVar64 * 4) = iVar52 + 1;
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar76 >> 0x18) * 4) = iVar83 + 1;
                *(int *)(pauVar53[0x80] + (uVar76 >> 0xe & 0x3fc)) =
                     *(int *)(pauVar53[0x80] + (uVar76 >> 0xe & 0x3fc)) + 1;
                *(int *)(*pauVar53 + (uint64_t)(uVar76 & 0xff) * 4) = iVar85 + 1;
                if (puVar40 <= puVar39 + 5) break;
                puVar39 = puVar86;
              }
            }
            uVar64 = (int64_t)puVar86 - (int64_t)puVar36;
            if (puVar86 < puVar36) {
              uVar70 = (int)puVar36 - (int)puVar86 & 3;
              uVar69 = (uint64_t)uVar70;
              if (uVar70 != 0) {
                do {
                  uVar70 = *puVar86;
                  puVar86 = (uint32_t *)((int64_t)puVar86 + 1);
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) + 1;
                  uVar69 = uVar69 - 1;
                } while (uVar69 != 0);
              }
              if (uVar64 < 0xfffffffffffffffd) {
                do {
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar86 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar86 * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar86 + 1) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar86 + 1) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar86 + 2) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar86 + 2) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar86 + 3) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar86 + 3) * 4) + 1;
                  puVar86 = puVar86 + 1;
                } while (puVar86 < puVar36);
              }
            }
            lVar92 = 0;
            while( true ) {
              piVar6 = (int *)(pauVar53[0x80] + lVar92 * 4);
              iVar83 = piVar6[1];
              iVar52 = piVar6[2];
              iVar85 = piVar6[3];
              piVar7 = (int *)(pauVar53[0xc0] + lVar92 * 4);
              iVar67 = piVar7[1];
              iVar81 = piVar7[2];
              iVar87 = piVar7[3];
              piVar5 = (int *)(pauVar53[0xc1] + lVar92 * 4);
              iVar12 = *piVar5;
              iVar13 = piVar5[1];
              iVar14 = piVar5[2];
              iVar15 = piVar5[3];
              piVar4 = (int *)(*pauVar53 + lVar92 * 4);
              iVar16 = piVar4[1];
              iVar17 = piVar4[2];
              iVar18 = piVar4[3];
              piVar5 = (int *)(pauVar53[1] + lVar92 * 4);
              iVar19 = *piVar5;
              iVar20 = piVar5[1];
              iVar21 = piVar5[2];
              iVar22 = piVar5[3];
              piVar5 = (int *)(pauVar53[0x81] + lVar92 * 4);
              iVar23 = *piVar5;
              iVar24 = piVar5[1];
              iVar25 = piVar5[2];
              iVar26 = piVar5[3];
              piVar8 = (int *)(pauVar53[0x40] + lVar92 * 4);
              iVar27 = piVar8[1];
              iVar28 = piVar8[2];
              iVar29 = piVar8[3];
              piVar5 = (int *)(*pauVar53 + lVar92 * 4);
              *piVar5 = *piVar8 + *piVar6 + *piVar4 + *piVar7;
              piVar5[1] = iVar27 + iVar83 + iVar16 + iVar67;
              piVar5[2] = iVar28 + iVar52 + iVar17 + iVar81;
              piVar5[3] = iVar29 + iVar85 + iVar18 + iVar87;
              piVar5 = (int *)(pauVar53[0x41] + lVar92 * 4);
              auVar98._0_4_ = *piVar5 + iVar12 + iVar23 + iVar19;
              auVar98._4_4_ = piVar5[1] + iVar13 + iVar24 + iVar20;
              auVar98._8_4_ = piVar5[2] + iVar14 + iVar25 + iVar21;
              auVar98._12_4_ = piVar5[3] + iVar15 + iVar26 + iVar22;
              *(uint8_t (*) [16])(pauVar53[1] + lVar92 * 4) = auVar98;
              if (lVar92 == 0xf8) break;
              lVar92 = lVar92 + 8;
            }
            uVar64 = 0x100;
            do {
              uVar33 = (int)uVar64 - 1;
              uVar64 = (uint64_t)uVar33;
            } while (*(int *)(*pauVar53 + uVar64 * 4) == 0);
LAB_7fffa4f60b5b:
            if ((int)uVar33 < 0) {
              uVar77 = 0;
            }
            else {
LAB_7fffa4f60b74:
              uVar69 = (uint64_t)(uVar33 + 1);
              if ((uint64_t)
                  (int64_t)
                  (int)(0x38b7632e << (bVar11 & 0x1f) | 0x38b7632eU >> 0x20 - (bVar11 & 0x1f)) <=
                  (uint64_t)(uVar51 ^ 0x4cf38b08)) {
                uVar69 = (int64_t)(int)(uVar33 + 1);
              }
              if (uVar33 < 3) {
                uVar64 = 0;
                uVar77 = 0;
LAB_7fffa4f60c80:
                do {
                  lVar97 = uVar64 * 4;
                  lVar92 = uVar64 * 8;
                  uVar64 = uVar64 + 1;
                  uVar77 = uVar77 + (uint64_t)*(uint8_t *)(lVar49 + 8 + lVar92) *
                                    (uint64_t)*(uint32_t *)(*pauVar53 + lVar97);
                } while (uVar69 != uVar64);
              }
              else {
                uVar64 = (uint64_t)((uint32_t)uVar69 & 0xfffffffc);
                lVar96 = 0;
                lVar100 = 0;
                lVar92 = 0;
                lVar97 = 0;
                lVar101 = 0;
                while( true ) {
                  auVar105 = *(uint8_t (*) [16])(lVar49 + 0x18 + lVar92 * 8) & auVar31;
                  lVar97 = (uint64_t)auVar105._0_4_ *
                           (*(uint64_t *)(*pauVar53 + lVar92 * 4 + 8) & 0xffffffff) + lVar97;
                  lVar101 = (auVar105._8_8_ & 0xffffffff) *
                            (*(uint64_t *)(*pauVar53 + lVar92 * 4 + 8) >> 0x20) + lVar101;
                  auVar105 = *(uint8_t (*) [16])(lVar49 + 8 + lVar92 * 8) & auVar31;
                  lVar96 = (uint64_t)auVar105._0_4_ *
                           (*(uint64_t *)(*pauVar53 + lVar92 * 4) & 0xffffffff) + lVar96;
                  lVar100 = (auVar105._8_8_ & 0xffffffff) *
                            (*(uint64_t *)(*pauVar53 + lVar92 * 4) >> 0x20) + lVar100;
                  if (uVar64 - 4 == lVar92) break;
                  lVar92 = lVar92 + 4;
                }
                uVar77 = lVar101 + lVar100 + lVar97 + lVar96;
                if (uVar64 != uVar69) goto LAB_7fffa4f60c80;
              }
              uVar77 = uVar77 >> 3;
            }
            if (uVar80 == 2) {
              uVar77 = uVar77 + *(int64_t *)(param_3 + 0x13c0);
            }
            uVar64 = uVar77 + 6;
            if (uVar89 < 0x100) {
              uVar64 = uVar77;
            }
            uVar64 = uVar64 + ((uint64_t)(0x3fff < uVar89) - (uint64_t)(uVar89 < 0x400)) + 4;
          }
        }
        else {
          uVar64 = 0;
        }
        uVar69 = lVar57 - lVar72 >> 3;
        puVar86 = (uint32_t *)((int64_t)puVar84 + uVar69);
        uVar89 = (uint64_t)(uVar51 ^ 0xa17398d);
        uVar80 = *(uint32_t *)(param_3 + 0x13cc);
        if (uVar69 < uVar89) {
          pauVar53[7] = (uint8_t  [16])0x0;
          pauVar53[6] = (uint8_t  [16])0x0;
          pauVar53[5] = (uint8_t  [16])0x0;
          pauVar53[4] = (uint8_t  [16])0x0;
          pauVar53[3] = (uint8_t  [16])0x0;
          pauVar53[2] = (uint8_t  [16])0x0;
          pauVar53[1] = (uint8_t  [16])0x0;
          *pauVar53 = (uint8_t  [16])0x0;
          if (lVar57 == lVar72) {
            uVar70 = 0;
          }
          else {
            puVar36 = puVar84;
            do {
              *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) =
                   *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) + 1;
              puVar36 = (uint32_t *)((int64_t)puVar36 + 1);
            } while (puVar36 < puVar86);
            uVar77 = 0x20;
            uVar33 = 0x1f;
            do {
              uVar56 = (uint64_t)uVar33;
              uVar70 = (int)uVar77 - 1;
              uVar77 = (uint64_t)uVar70;
              uVar33 = uVar33 - 1;
            } while (*(int *)(*pauVar53 + uVar77 * 4) == 0);
            if (6 < uVar70) {
              uVar77 = uVar56 + 1 & 0xfffffffffffffff8;
              do {
                uVar77 = uVar77 - 8;
              } while (uVar77 != 0);
            }
          }
        }
        else {
          uVar70 = 0x1f;
          if (((uint64_t)pauVar53 & 3) == 0) {
            FUN_7fffa4ecf8e0(pauVar53,0,0x1000);
            puVar36 = puVar84;
            if (0x13 < (int64_t)uVar69) {
              uVar70 = *puVar84;
              puVar39 = puVar84;
              do {
                uVar33 = puVar39[1];
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                uVar77 = (uint64_t)(uVar33 >> 8 & 0xff);
                iVar83 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4);
                *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) =
                     *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) + 1;
                uVar43 = uVar70 >> 8;
                if (0x232c6e42 < (int)(uVar51 + 0x9888d44c)) {
                  uVar43 = uVar70 * 8;
                }
                iVar52 = *(int *)(pauVar53[0x40] + (uint64_t)(uVar43 & 0xff) * 4);
                uVar46 = uVar33 >> 0xe & 0x3fc;
                iVar85 = *(int *)(pauVar53[0x80] + uVar46);
                *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) + 1;
                iVar67 = *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4);
                *(int *)(pauVar53[0x40] + (uint64_t)(uVar43 & 0xff) * 4) = iVar52 + 1;
                uVar70 = puVar39[2];
                uVar74 = (uint64_t)(uVar70 & 0xff);
                uVar71 = (uint64_t)(uVar70 >> 8 & 0xff);
                iVar52 = *(int *)(pauVar53[0x40] + uVar77 * 4);
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) = iVar83 + 1;
                *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) = iVar67 + 1;
                uVar56 = (uint64_t)(uVar70 >> 0x10 & 0xff);
                uVar88 = (uint64_t)(uVar70 >> 0x18);
                *(int *)(pauVar53[0x80] + uVar46) = iVar85 + 1;
                iVar83 = *(int *)(pauVar53[0x80] + uVar56 * 4);
                iVar85 = *(int *)(pauVar53[0xc0] + uVar88 * 4);
                *(int *)(pauVar53[0x40] + uVar77 * 4) = iVar52 + 1;
                uVar33 = puVar39[3];
                uVar70 = *(uint32_t *)(*pauVar53 + uVar74 * 4) + 1;
                if ((uVar51 + 0x423686f9 >> 1 | (uint32_t)((uVar51 + 0x423686f9 & 1) != 0) << 0x1f) !=
                    0x2626e1a5) {
                  uVar70 = *(uint32_t *)(*pauVar53 + uVar74 * 4) ^ 1;
                }
                iVar52 = *(int *)(pauVar53[0x40] + uVar71 * 4) + 1;
                bVar59 = (uint8_t)(uVar33 >> 8);
                if (uVar51 + 0x2127bc48 < (uVar51 ^ 0x705cea80)) {
                  *(int *)(pauVar53[0xc0] + uVar88 * 4) = iVar85 + 1;
                  *(uint32_t *)(*pauVar53 + uVar74 * 4) = uVar70;
                  *(int *)(pauVar53[0x40] + uVar71 * 4) = iVar52;
                }
                else {
                  *(uint32_t *)(*pauVar53 + uVar74 * 4) = uVar70;
                  *(int *)(pauVar53[0x40] + uVar71 * 4) = iVar52;
                  *(int *)(pauVar53[0xc0] + uVar88 * 4) = iVar85 + 1;
                }
                iVar52 = *(int *)(pauVar53[0x40] + (uint64_t)bVar59 * 4);
                puVar36 = puVar39 + 4;
                iVar85 = *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar33 * 4);
                *(int *)(pauVar53[0x80] + uVar56 * 4) = iVar83 + 1;
                uVar70 = *puVar36;
                *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar33 * 4) = iVar85 + 1;
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) + 1;
                *(int *)(pauVar53[0x40] + (uint64_t)bVar59 * 4) = iVar52 + 1;
                *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) =
                     *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) + 1;
                puVar40 = puVar39 + 5;
                puVar39 = puVar36;
              } while (puVar40 < (uint32_t *)((int64_t)puVar86 - 0xfU));
            }
            uVar77 = (int64_t)puVar36 - (int64_t)puVar86;
            if (puVar36 < puVar86) {
              uVar70 = (int)puVar86 - (int)puVar36 & 3;
              uVar56 = (uint64_t)uVar70;
              if (uVar70 != 0) {
                uVar71 = 0;
                do {
                  uVar88 = uVar71 + 1;
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) + 1;
                  puVar36 = (uint32_t *)((int64_t)puVar36 + 1);
                  uVar71 = uVar71 ^ 1;
                  if ((uint64_t)~(uVar51 + 0xb8fd2512) != 0xfffffffff9b6cde7) {
                    uVar71 = uVar88;
                  }
                  bVar91 = uVar71 == uVar56;
                  if ((0x3dcbf48 << (bVar11 & 0x1f) | 0x3dcbf48U >> 0x20 - (bVar11 & 0x1f)) !=
                      0x7e9007b9) {
                    bVar91 = uVar71 != uVar56 && (int64_t)uVar56 <= (int64_t)uVar71;
                  }
                } while (!bVar91);
              }
              if (uVar77 < 0xfffffffffffffffd) {
                do {
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 3) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 3) * 4) + 1;
                  puVar36 = puVar36 + 1;
                } while (puVar36 < puVar86);
              }
            }
            lVar92 = 0;
            do {
              auVar105 = *(uint8_t (*) [16])(pauVar53[0x41] + lVar92 * 4);
              piVar4 = (int *)(pauVar53[0x80] + lVar92 * 4);
              piVar6 = (int *)(pauVar53[0xc0] + lVar92 * 4);
              piVar7 = (int *)(pauVar53[0xc1] + lVar92 * 4);
              iVar83 = piVar7[1];
              iVar52 = piVar7[2];
              iVar85 = piVar7[3];
              piVar8 = (int *)(pauVar53[0x40] + lVar92 * 4);
              piVar5 = (int *)(*pauVar53 + lVar92 * 4);
              auVar103._0_4_ = *piVar5 + *piVar8 + *piVar6 + *piVar4;
              auVar103._4_4_ = piVar5[1] + piVar8[1] + piVar6[1] + piVar4[1];
              auVar103._8_4_ = piVar5[2] + piVar8[2] + piVar6[2] + piVar4[2];
              auVar103._12_4_ = piVar5[3] + piVar8[3] + piVar6[3] + piVar4[3];
              piVar5 = (int *)(pauVar53[1] + lVar92 * 4);
              iVar67 = piVar5[1];
              iVar81 = piVar5[2];
              iVar87 = piVar5[3];
              *(uint8_t (*) [16])(*pauVar53 + lVar92 * 4) = auVar103;
              piVar6 = (int *)(pauVar53[0x81] + lVar92 * 4);
              iVar12 = piVar6[1];
              iVar13 = piVar6[2];
              iVar14 = piVar6[3];
              piVar4 = (int *)(pauVar53[1] + lVar92 * 4);
              *piVar4 = *piVar6 + auVar105._0_4_ + *piVar5 + *piVar7;
              piVar4[1] = iVar12 + auVar105._4_4_ + iVar67 + iVar83;
              piVar4[2] = iVar13 + auVar105._8_4_ + iVar81 + iVar52;
              piVar4[3] = iVar14 + auVar105._12_4_ + iVar87 + iVar85;
              lVar92 = lVar92 + 8;
            } while (lVar92 != 0x100);
            uVar77 = 0xff;
            while (uVar70 = (uint32_t)uVar77, *(int *)(*pauVar53 + uVar77 * 4) == 0) {
              uVar77 = (uint64_t)(uVar70 - 1);
            }
          }
        }
        if ((int)uVar80 < (int)(uVar51 - 0x3c50 & 0xffff)) {
          if (uVar80 != 0) goto LAB_7fffa4f60f49;
          uVar70 = uVar70 + 1;
          if (uVar70 < 2) {
            uVar70 = 1;
            uVar77 = 0;
            uVar56 = 0;
          }
          else {
            uVar56 = 0;
            uVar71 = 0;
            do {
              sVar32 = (short)*(uint32_t *)
                               (&UNK_7fffa56c7abb +
                               uVar71 * 2 +
                               (int64_t)
                               (int)(0x9d0bfffeU >> (bVar11 & 0x1f) |
                                    -0x62f40002 << 0x20 - (bVar11 & 0x1f)));
              if (sVar32 == -1) {
                sVar32 = 1;
              }
              sVar65 = 1;
              if (*(short *)(&UNK_7fffa56c358c +
                            uVar71 * 2 +
                            (int64_t)
                            (short)((uVar9 + 0x6163) * 0x2000 | (uint16_t)(uVar9 + 0x6163) >> 3)) !=
                  -1) {
                sVar65 = *(short *)(&UNK_7fffa56c358c +
                                   uVar71 * 2 +
                                   (int64_t)
                                   (short)((uVar9 + 0x6163) * 0x2000 | (uint16_t)(uVar9 + 0x6163) >> 3
                                          ));
              }
              uVar77 = uVar71 + 2;
              uVar56 = uVar56 + (uint32_t)(*(int *)(&UNK_7fffa58683a0 +
                                               (uint64_t)(uint32_t)((int)sVar65 << 3) * 4 +
                                               ((int64_t)(short)(0x10d6 - uVar9) ^ 0x4155U)) *
                                      *(int *)(*pauVar53 + uVar71 * 4 + 4)) +
                       (uint64_t)
                       (uint32_t)(*(int *)(*pauVar53 + uVar71 * 4) *
                             *(int *)(&UNK_7fffa58690e5 +
                                     (uint64_t)(uint32_t)((int)sVar32 << 3) * 4 +
                                     ((int64_t)(short)((-0x23cc - uVar9) * -0x27dd) ^
                                     0xffffffffffffec82U)));
              uVar71 = uVar77;
            } while ((uVar70 & 0xfffffffe) != uVar77);
          }
          if ((uVar70 & 1) != 0) {
            uVar42 = *(uint16_t *)
                      (&UNK_7fffa56c81a1 +
                      uVar77 * 2 +
                      (int64_t)
                      (int)(0x8f3ffffeU >> (bVar11 & 0x1f) | -0x70c00002 << 0x20 - (bVar11 & 0x1f)))
            ;
            if (*(uint16_t *)
                 (&UNK_7fffa56c81a1 +
                 uVar77 * 2 +
                 (int64_t)
                 (int)(0x8f3ffffeU >> (bVar11 & 0x1f) | -0x70c00002 << 0x20 - (bVar11 & 0x1f))) ==
                (uint16_t)(sVar66 * 0x4f00 | (uint16_t)(sVar66 * 0x734f) >> 8)) {
              uVar42 = 1;
            }
            uVar56 = uVar56 + (uint32_t)(*(int *)(*pauVar53 + uVar77 * 4) *
                                    *(int *)(&UNK_7fffa586ba09 +
                                            (uint64_t)(uint32_t)((int)(short)uVar42 << 3) * 4 +
                                            (int64_t)
                                            (int)((0xb3b27113U >> (bVar11 & 0x1f) |
                                                  -0x4c4d8eed << 0x20 - (bVar11 & 0x1f)) +
                                                 0xc775858e)));
          }
          uVar56 = uVar56 >> 8;
joined_r0x7fffa4f61c61:
          if (lVar57 != lVar72) {
            do {
              uVar80 = *puVar84;
              puVar84 = (uint32_t *)((int64_t)puVar84 + 1);
              uVar56 = uVar56 + (uint8_t)uVar80;
            } while (puVar84 < puVar86);
          }
          uVar56 = uVar56 >> 3;
        }
        else {
          if (uVar80 == 1) {
LAB_7fffa4f60f57:
            uVar56 = 0;
            goto joined_r0x7fffa4f61c61;
          }
LAB_7fffa4f60f49:
          if ((uVar80 & 0xfffffffe) != 2) goto LAB_7fffa4f60f57;
          uVar42 = *(uint16_t *)(lVar49 + 0x810);
          uVar80 = uVar42 - 1 | 1;
          if ((int64_t)(int)~(uVar82 * -0x1d1ef33e) <=
              (int64_t)
              (uint64_t)(0xe74cae15U >> (bVar11 & 0x1f) | -0x18b351eb << 0x20 - (bVar11 & 0x1f))) {
            uVar80 = 1 << ((uint8_t)(uVar42 - 1) & 0x1f);
          }
          lVar92 = (int64_t)(int)uVar80;
          if (uVar42 == 0) {
            lVar92 = 1;
          }
          if (uVar70 <= *(uint16_t *)(lVar49 + 0x812)) {
            uVar77 = 0;
            uVar56 = 0;
            do {
              uVar80 = *(uint32_t *)(lVar49 + lVar92 * 4 + 0x818 + uVar77 * 8);
              iVar83 = (uVar80 >> 0x10) + 1;
              if ((uint64_t)*(uint32_t *)(*pauVar53 + uVar77 * 4) != 0) {
                uVar80 = iVar83 * 0x100 -
                         (iVar83 * 0x1000000 + (uVar80 + (1 << ((uint8_t)uVar42 & 0x1f))) * -0x100 >>
                         ((uint8_t)uVar42 & 0x1f));
                if ((uint32_t)uVar42 * 0x100 + 0x100 <= uVar80) goto LAB_7fffa4f612aa;
                uVar56 = uVar56 + (uint64_t)uVar80 * (uint64_t)*(uint32_t *)(*pauVar53 + uVar77 * 4);
              }
              uVar77 = uVar77 + 1;
            } while (uVar70 + 1 != uVar77);
            uVar56 = uVar56 >> 8;
            goto joined_r0x7fffa4f61c61;
          }
LAB_7fffa4f612aa:
          uVar56 = uVar69 * 10;
        }
        puVar86 = (uint32_t *)((int64_t)puVar37 + uVar69);
        uVar80 = *(uint32_t *)(param_3 + 0x13c8);
        if (uVar69 < uVar89) {
          pauVar53[8] = (uint8_t  [16])0x0;
          pauVar53[7] = (uint8_t  [16])0x0;
          pauVar53[6] = (uint8_t  [16])0x0;
          pauVar53[5] = (uint8_t  [16])0x0;
          pauVar53[4] = (uint8_t  [16])0x0;
          pauVar53[3] = (uint8_t  [16])0x0;
          pauVar53[2] = (uint8_t  [16])0x0;
          pauVar53[1] = (uint8_t  [16])0x0;
          *pauVar53 = (uint8_t  [16])0x0;
          if (lVar57 == lVar72) {
            uVar77 = 0;
          }
          else {
            puVar36 = puVar37;
            do {
              uVar33 = *puVar36;
              puVar36 = (uint32_t *)((int64_t)puVar36 + 1);
              uVar70 = *(uint32_t *)(*pauVar53 + (uint64_t)(uint8_t)uVar33 * 4) + 1;
              if ((uVar51 + 0x5c150dd5 ^ 0xa10dd31) <
                  ((uVar51 ^ 0x9423cf17) << 8 | (uVar51 ^ 0x9423cf17) >> 0x18)) {
                uVar70 = *(uint32_t *)(*pauVar53 + (uint64_t)(uint8_t)uVar33 * 4) ^ 1;
              }
              *(uint32_t *)(*pauVar53 + (uint64_t)(uint8_t)uVar33 * 4) = uVar70;
            } while (puVar36 < puVar86);
            uVar77 = 0x24;
            uVar70 = 0x23;
            do {
              uVar71 = (uint64_t)uVar70;
              uVar33 = (int)uVar77 - 1;
              uVar77 = (uint64_t)uVar33;
              uVar70 = uVar70 - 1;
            } while (*(int *)(*pauVar53 + uVar77 * 4) == 0);
            if (6 < uVar33) {
              uVar71 = uVar71 + 1 & 0xfffffffffffffff8;
              do {
                uVar71 = uVar71 - 8;
              } while (uVar71 != 0);
            }
          }
        }
        else {
          uVar77 = 0x23;
          if (((uint64_t)pauVar53 & 3) == 0) {
            FUN_7fffa4ecf8e0(pauVar53,0,0x1000);
            puVar36 = puVar37;
            if (0x13 < (int64_t)uVar69) {
              uVar70 = *puVar37;
              puVar84 = puVar37;
              do {
                uVar33 = puVar84[1];
                uVar88 = (uint64_t)(uVar33 >> 0x18);
                uVar74 = (uint64_t)uVar70 & 0xff;
                iVar83 = *(int *)(*pauVar53 + uVar74 * 4);
                *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) =
                     *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) + 1;
                uVar77 = (uint64_t)(uVar70 >> 0x18);
                iVar83 = iVar83 + 1;
                uVar71 = (uint64_t)(uVar33 & 0xff);
                bVar59 = (uint8_t)(uVar70 >> 8);
                if (uVar51 == 0x390d1bdd) {
                  iVar52 = *(int *)(pauVar53[0xc0] + uVar77 * 4);
                  *(int *)(*pauVar53 + uVar74 * 4) = iVar83;
                  iVar83 = *(int *)(*pauVar53 + uVar71 * 4);
                  *(int *)(pauVar53[0x40] + (uint64_t)bVar59 * 4) =
                       *(int *)(pauVar53[0x40] + (uint64_t)bVar59 * 4) + 1;
                  *(int *)(pauVar53[0xc0] + uVar77 * 4) = iVar52 + 1;
                  iVar52 = *(int *)(pauVar53[0xc0] + uVar88 * 4);
                }
                else {
                  *(int *)(pauVar53[0xc0] + uVar77 * 4) = *(int *)(pauVar53[0xc0] + uVar77 * 4) + 1;
                  iVar52 = *(int *)(pauVar53[0xc0] + uVar88 * 4);
                  *(int *)(*pauVar53 + uVar74 * 4) = iVar83;
                  iVar83 = *(int *)(*pauVar53 + uVar71 * 4);
                  *(int *)(pauVar53[0x40] + (uint64_t)bVar59 * 4) =
                       *(int *)(pauVar53[0x40] + (uint64_t)bVar59 * 4) + 1;
                }
                uVar70 = puVar84[2];
                *(int *)(pauVar53[0xc0] + uVar88 * 4) = iVar52 + 1;
                iVar52 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4);
                *(int *)(*pauVar53 + uVar71 * 4) = iVar83 + 1;
                iVar83 = *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4);
                *(int *)(pauVar53[0x40] + (uint64_t)(uint8_t)(uVar33 >> 8) * 4) =
                     *(int *)(pauVar53[0x40] + (uint64_t)(uint8_t)(uVar33 >> 8) * 4) + 1;
                uVar77 = (uint64_t)(uVar70 >> 8 & 0xff);
                iVar85 = *(int *)(pauVar53[0x40] + uVar77 * 4);
                *(int *)(pauVar53[0x80] + (uint64_t)(uVar33 >> 0x10 & 0xff) * 4) =
                     *(int *)(pauVar53[0x80] + (uint64_t)(uVar33 >> 0x10 & 0xff) * 4) + 1;
                uVar43 = uVar70 >> 0xe & 0x3fc;
                iVar67 = *(int *)(pauVar53[0x80] + uVar43);
                uVar33 = puVar84[3];
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) = iVar52 + 1;
                *(int *)(pauVar53[0x80] + uVar43) = iVar67 + 1;
                *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) = iVar83 + 1;
                iVar83 = *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4);
                *(int *)(pauVar53[0x40] + uVar77 * 4) = iVar85 + 1;
                uVar70 = puVar84[4];
                *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) = iVar83 + 1;
                *(int *)(pauVar53[0x40] + (uint64_t)(uVar33 >> 8 & 0xff) * 4) =
                     *(int *)(pauVar53[0x40] + (uint64_t)(uVar33 >> 8 & 0xff) * 4) + 1;
                *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) =
                     *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) + 1;
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) + 1;
                puVar36 = puVar84 + 4;
                puVar39 = puVar84 + 5;
                puVar84 = puVar36;
              } while (puVar39 < (uint32_t *)((int64_t)puVar86 - 0xfU));
            }
            uVar77 = (int64_t)puVar36 - (int64_t)puVar86;
            if (puVar36 < puVar86) {
              uVar70 = (int)puVar86 - (int)puVar36 & 3;
              uVar71 = (uint64_t)uVar70;
              if (uVar70 != 0) {
                do {
                  uVar70 = *puVar36;
                  puVar36 = (uint32_t *)((int64_t)puVar36 + 1);
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) + 1;
                  uVar71 = uVar71 - 1;
                } while (uVar71 != 0);
              }
              if (uVar77 < 0xfffffffffffffffd) {
                do {
                  if ((-0x5c574709 << (bVar11 & 0x1f) | 0xa3a8b8f7U >> 0x20 - (bVar11 & 0x1f)) <
                      ~(uVar51 + 0x691c457e)) {
                    *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) =
                         *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) + 1;
                    *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) =
                         *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) + 1;
                    bVar59 = *(uint8_t *)((int64_t)puVar36 + 2);
                  }
                  else {
                    *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) =
                         *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) + 1;
                    *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) =
                         *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) + 1;
                    bVar59 = (uint8_t)*puVar36;
                  }
                  *(int *)(*pauVar53 + (uint64_t)bVar59 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)bVar59 * 4) + 1;
                  pbVar1 = (uint8_t *)((int64_t)puVar36 + 3);
                  puVar36 = puVar36 + 1;
                  *(int *)(*pauVar53 + (uint64_t)*pbVar1 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*pbVar1 * 4) + 1;
                } while (puVar36 < puVar86);
              }
            }
            lVar92 = 0;
            while( true ) {
              piVar6 = (int *)(pauVar53[0x41] + lVar92 * 4);
              iVar83 = piVar6[1];
              iVar52 = piVar6[2];
              iVar85 = piVar6[3];
              piVar5 = (int *)(pauVar53[0xc0] + lVar92 * 4);
              iVar67 = *piVar5;
              iVar81 = piVar5[1];
              iVar87 = piVar5[2];
              iVar12 = piVar5[3];
              piVar7 = (int *)(pauVar53[0xc1] + lVar92 * 4);
              iVar13 = piVar7[1];
              iVar14 = piVar7[2];
              iVar15 = piVar7[3];
              piVar5 = (int *)(*pauVar53 + lVar92 * 4);
              iVar16 = *piVar5;
              iVar17 = piVar5[1];
              iVar18 = piVar5[2];
              iVar19 = piVar5[3];
              piVar5 = (int *)(pauVar53[1] + lVar92 * 4);
              iVar20 = piVar5[1];
              iVar21 = piVar5[2];
              iVar22 = piVar5[3];
              piVar4 = (int *)(pauVar53[0x80] + lVar92 * 4);
              iVar23 = *piVar4;
              iVar24 = piVar4[1];
              iVar25 = piVar4[2];
              iVar26 = piVar4[3];
              piVar8 = (int *)(pauVar53[0x81] + lVar92 * 4);
              iVar27 = piVar8[1];
              iVar28 = piVar8[2];
              iVar29 = piVar8[3];
              piVar4 = (int *)(pauVar53[1] + lVar92 * 4);
              *piVar4 = *piVar8 + *piVar5 + *piVar7 + *piVar6;
              piVar4[1] = iVar27 + iVar20 + iVar13 + iVar83;
              piVar4[2] = iVar28 + iVar21 + iVar14 + iVar52;
              piVar4[3] = iVar29 + iVar22 + iVar15 + iVar85;
              piVar4 = (int *)(pauVar53[0x40] + lVar92 * 4);
              iVar83 = piVar4[1];
              iVar52 = piVar4[2];
              iVar85 = piVar4[3];
              piVar5 = (int *)(*pauVar53 + lVar92 * 4);
              *piVar5 = *piVar4 + iVar67 + iVar23 + iVar16;
              piVar5[1] = iVar83 + iVar81 + iVar24 + iVar17;
              piVar5[2] = iVar52 + iVar87 + iVar25 + iVar18;
              piVar5[3] = iVar85 + iVar12 + iVar26 + iVar19;
              if (lVar92 == 0xf8) break;
              lVar92 = lVar92 + 8;
            }
            uVar77 = 0x100;
            do {
              uVar77 = (uint64_t)((int)uVar77 - 1);
            } while (*(uint32_t *)(*pauVar53 + uVar77 * 4) ==
                     (uint32_t)(uint16_t)(0U >> (bVar11 & 0xf) | 0 << 0x10 - (bVar11 & 0xf)));
          }
        }
        if ((int)uVar80 < 1) {
          if (uVar80 != 0) goto LAB_7fffa4f6147d;
          uVar80 = (uint32_t)uVar77 + 1;
          if (uVar80 < 2) {
            uVar80 = 1;
            uVar77 = 0;
            uVar71 = 0;
          }
          else {
            uVar71 = 0;
            uVar88 = 0;
            do {
              sVar32 = (short)*(uint32_t *)
                               (&UNK_7fffa56fd961 + uVar88 * 2 + (int64_t)(short)(-0x1580 - uVar9))
              ;
              if (sVar32 == -1) {
                sVar32 = 1;
              }
              sVar65 = 1;
              if (*(short *)(&UNK_7fffa57073c3 +
                            uVar88 * 2 +
                            (int64_t)(int)(uVar82 * -0x53e5f000 | uVar82 * 0x48cac1a1 >> 0x14)) !=
                  -1) {
                sVar65 = *(short *)(&UNK_7fffa57073c3 +
                                   uVar88 * 2 +
                                   (int64_t)
                                   (int)(uVar82 * -0x53e5f000 | uVar82 * 0x48cac1a1 >> 0x14));
              }
              uVar77 = uVar88 + 2;
              uVar71 = (uint64_t)
                       (uint32_t)(*(int *)(&UNK_7fffa586aba9 +
                                      (uint64_t)(uint32_t)((int)sVar65 << 2) * 4 +
                                      (int64_t)
                                      (int)(uVar82 * -0x19620000 | uVar82 * 0x47a0734f >> 0xf)) *
                             *(int *)(*pauVar53 + uVar88 * 4 + 4)) +
                       (uint32_t)(*(int *)(&UNK_7fffa586234b +
                                      (uint64_t)(uint32_t)((int)sVar32 << 2) * 4 +
                                      (int64_t)
                                      (short)(sVar66 * -0x53e0 | (uint16_t)(sVar66 * -0x753e) >> 0xc))
                             * *(int *)(*pauVar53 + uVar88 * 4)) + uVar71;
              uVar88 = uVar77;
            } while ((uVar80 & 0xfffffffe) != uVar77);
          }
          if ((uVar80 & 1) != 0) {
            sVar32 = *(short *)(&UNK_7fffa56fe20f +
                               uVar77 * 2 +
                               (int64_t)
                               (short)((uVar9 + 0xd0db) * 0x20 | (uint16_t)(uVar9 + 0xd0db) >> 0xb));
            if (sVar32 == -1) {
              sVar32 = 1;
            }
            uVar71 = uVar71 + (uint32_t)(*(int *)(&UNK_7fffa58655d2 +
                                             (uint64_t)(uint32_t)((int)sVar32 << 2) * 4 +
                                             (int64_t)
                                             (short)(0x61cf << (bVar11 & 0xf) |
                                                    0x61cfU >> 0x10 - (bVar11 & 0xf))) *
                                    *(int *)(*pauVar53 + uVar77 * 4));
          }
          uVar71 = uVar71 >> 8;
LAB_7fffa4f61d00:
          if (lVar57 != lVar72) {
            do {
              puVar36 = (uint32_t *)((int64_t)puVar37 + 1);
              bVar91 = puVar36 < puVar86;
              if ((uint64_t)((uVar51 + 0x5413a5a0) * 0x693dd505 ^ 0xb5b16228) == 0xffffffffce75d8b2
                 ) {
                bVar91 = puVar36 <= puVar86;
              }
              uVar77 = (uint64_t)(uint8_t)*puVar37;
              if ((0x5a03269fU >> (bVar11 & 0x1f) | 0x5a03269f << 0x20 - (bVar11 & 0x1f)) <
                  uVar82 * 0x2ae1ebc9) {
                uVar77 = (int64_t)(char)(uint8_t)*puVar37;
              }
              uVar71 = uVar71 + (uint8_t)(&UNK_7fffa586532f)
                                      [uVar77 + (int64_t)(short)(uVar9 + 0x5fd0)];
              puVar37 = puVar36;
            } while (bVar91);
          }
          uVar71 = uVar71 >> 3;
        }
        else {
          if (uVar80 == 1) {
LAB_7fffa4f61590:
            uVar71 = 0;
            goto LAB_7fffa4f61d00;
          }
LAB_7fffa4f6147d:
          if ((uVar80 & 0xfffffffe) != 2) goto LAB_7fffa4f61590;
          uVar42 = *(uint16_t *)(lVar49 + 0x10c0);
          bVar59 = (uint8_t)uVar42;
          lVar92 = (int64_t)(1 << (bVar59 - 1 & 0x1f));
          if (uVar42 == 0) {
            lVar92 = 1;
          }
          if ((uint32_t)uVar77 <= (uint32_t)*(uint16_t *)(lVar49 + 0x10c2)) {
            uVar88 = 0;
            uVar71 = 0;
            while( true ) {
              uVar80 = *(uint32_t *)(lVar49 + lVar92 * 4 + 0x10c8 + uVar88 * 8);
              iVar83 = (uVar80 >> 0x10) + 1;
              if ((uint64_t)*(uint32_t *)(*pauVar53 + uVar88 * 4) != 0) {
                uVar80 = iVar83 * 0x100 -
                         (iVar83 * 0x1000000 + (uVar80 + (1 << (bVar59 & 0x1f))) * -0x100 >>
                         (bVar59 & 0x1f));
                if ((uint32_t)uVar42 * 0x100 + 0x100 <= uVar80) goto LAB_7fffa4f61598;
                uVar71 = uVar71 + (uint64_t)uVar80 * (uint64_t)*(uint32_t *)(*pauVar53 + uVar88 * 4);
              }
              if (uVar77 == uVar88) break;
              uVar88 = uVar88 + 1;
            }
            uVar71 = uVar71 >> 8;
            goto LAB_7fffa4f61d00;
          }
LAB_7fffa4f61598:
          uVar71 = uVar69 * 10;
        }
        puVar86 = (uint32_t *)((int64_t)puVar78 + uVar69);
        uVar80 = *(uint32_t *)(param_3 + uVar62);
        if (uVar69 < uVar89) {
          pauVar53[0xc] = (uint8_t  [16])0x0;
          pauVar53[0xb] = (uint8_t  [16])0x0;
          pauVar53[10] = (uint8_t  [16])0x0;
          pauVar53[9] = (uint8_t  [16])0x0;
          pauVar53[8] = (uint8_t  [16])0x0;
          pauVar53[7] = (uint8_t  [16])0x0;
          pauVar53[6] = (uint8_t  [16])0x0;
          pauVar53[5] = (uint8_t  [16])0x0;
          pauVar53[4] = (uint8_t  [16])0x0;
          pauVar53[3] = (uint8_t  [16])0x0;
          pauVar53[2] = (uint8_t  [16])0x0;
          pauVar53[1] = (uint8_t  [16])0x0;
          *pauVar53 = (uint8_t  [16])0x0;
          *(uint32_t *)pauVar53[0xd] = 0;
          if (lVar57 == lVar72) {
            uVar89 = 0;
          }
          else {
            puVar36 = puVar78;
            do {
              uVar70 = *puVar36;
              puVar36 = (uint32_t *)((int64_t)puVar36 + 1);
              *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) =
                   *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) + 1;
            } while (puVar36 < puVar86);
            uVar89 = 0x35;
            uVar70 = 0x34;
            do {
              uVar77 = (uint64_t)uVar70;
              uVar33 = (int)uVar89 - 1;
              uVar89 = (uint64_t)uVar33;
              uVar70 = uVar70 - 1;
            } while (*(int *)(*pauVar53 + uVar89 * 4) == 0);
            if (6 < uVar33) {
              uVar77 = uVar77 + 1 & 0xfffffffffffffff8;
              do {
                uVar77 = uVar77 - 8;
              } while (uVar77 != 0);
            }
          }
        }
        else {
          uVar89 = 0x34;
          if (((uint64_t)pauVar53 & 3) == 0) {
            FUN_7fffa4ecf8e0(pauVar53,0,0x1000);
            uVar70 = uVar51 + 0xfbdcb031 ^ 0x5fa6c82;
            bVar91 = 0x13 < (int64_t)uVar69;
            if (uVar51 != 0xa173c51) {
              bVar91 = (int64_t)(uint64_t)(uVar70 << 0x11 | uVar70 >> 0xf) <= (int64_t)uVar69;
            }
            puVar36 = puVar78;
            if (bVar91) {
              uVar70 = *puVar78;
              puVar37 = puVar78;
              while( true ) {
                puVar36 = puVar37 + 4;
                uVar33 = puVar37[1];
                uVar89 = (uint64_t)(uVar33 >> 0x18);
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                iVar83 = *(int *)(pauVar53[0xc0] + uVar89 * 4);
                if ((uint64_t)
                    (int64_t)
                    (int)(0x59dba3c1U >> (bVar11 & 0x1f) | 0x59dba3c1 << 0x20 - (bVar11 & 0x1f)) <
                    (uint64_t)(uVar82 * 0x693c973c)) {
                  uVar43 = 0x5d0b4264U >> (bVar11 & 0x1f) | 0x5d0b4264 << 0x20 - (bVar11 & 0x1f);
                }
                else {
                  uVar43 = 0xc4982d5e - uVar51;
                }
                *(int *)(pauVar53[0x80] + (uint64_t)(uVar70 >> 0x10 & 0xff) * 4) =
                     *(int *)(pauVar53[0x80] + (uint64_t)(uVar70 >> 0x10 & 0xff) * 4) + 1;
                uVar88 = (uint64_t)(uVar33 >> 0x10 & 0xff);
                uVar77 = (uint64_t)(uVar33 & 0xff);
                iVar83 = iVar83 + 1;
                if ((int64_t)(uint64_t)(uVar51 + 0xb5e8c3b5) <
                    (int64_t)(int)((uVar43 ^ 0xae5e5a42 - uVar51) + 0xcef1cf76)) {
                  *(int *)(pauVar53[0xc0] + uVar89 * 4) = iVar83;
                  iVar83 = *(int *)(pauVar53[0x80] + uVar88 * 4);
                  iVar52 = *(int *)(*pauVar53 + uVar77 * 4);
                  *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) + 1;
                  *(int *)(*pauVar53 + uVar77 * 4) = iVar52 + 1;
                  uVar43 = puVar37[2];
                  *(int *)(pauVar53[0x80] + uVar88 * 4) = iVar83 + 1;
                  *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) =
                       *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) + 1;
                }
                else {
                  *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) + 1;
                  iVar52 = *(int *)(*pauVar53 + uVar77 * 4);
                  iVar85 = *(int *)(pauVar53[0x80] + uVar88 * 4);
                  *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) =
                       *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) + 1;
                  uVar43 = puVar37[2];
                  *(int *)(*pauVar53 + uVar77 * 4) = iVar52 + 1;
                  *(int *)(pauVar53[0xc0] + uVar89 * 4) = iVar83;
                  *(int *)(pauVar53[0x80] + uVar88 * 4) = iVar85 + 1;
                }
                iVar83 = *(int *)(*pauVar53 + (uint64_t)(uVar43 & 0xff) * 4);
                uVar70 = uVar43 >> 0xe & 0x3fc;
                iVar52 = *(int *)(pauVar53[0x80] + uVar70);
                iVar85 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar43 >> 0x18) * 4);
                *(int *)(pauVar53[0x40] + (uint64_t)(uVar33 >> 8 & 0xff) * 4) =
                     *(int *)(pauVar53[0x40] + (uint64_t)(uVar33 >> 8 & 0xff) * 4) + 1;
                uVar33 = puVar37[3];
                *(int *)(pauVar53[0x80] + uVar70) = iVar52 + 1;
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar43 >> 0x18) * 4) = iVar85 + 1;
                *(int *)(*pauVar53 + (uint64_t)(uVar43 & 0xff) * 4) = iVar83 + 1;
                iVar83 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4);
                iVar52 = *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4);
                *(int *)(pauVar53[0x40] + (uint64_t)(uVar43 >> 8 & 0xff) * 4) =
                     *(int *)(pauVar53[0x40] + (uint64_t)(uVar43 >> 8 & 0xff) * 4) + 1;
                uVar70 = *puVar36;
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) = iVar83 + 1;
                *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) = iVar52 + 1;
                *(int *)(pauVar53[0x40] + (uint64_t)(uVar33 >> 8 & 0xff) * 4) =
                     *(int *)(pauVar53[0x40] + (uint64_t)(uVar33 >> 8 & 0xff) * 4) + 1;
                *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) =
                     *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) + 1;
                if ((uint32_t *)((int64_t)puVar86 - 0xfU) <= puVar37 + 5) break;
                puVar37 = puVar36;
              }
            }
            uVar89 = (int64_t)puVar36 - (int64_t)puVar86;
            if (puVar36 < puVar86) {
              uVar70 = (int)puVar86 - (int)puVar36 & 3;
              uVar77 = (uint64_t)uVar70;
              puVar37 = puVar36;
              if (uVar70 != 0) {
                do {
                  uVar77 = uVar77 - 1;
                  puVar36 = (uint32_t *)((int64_t)puVar37 + 1);
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar37 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar37 * 4) + 1;
                  puVar37 = puVar36;
                } while (uVar77 != 0);
              }
              if (uVar89 < 0xfffffffffffffffd) {
                do {
                  uVar89 = (uint64_t)(uint8_t)*puVar36;
                  if (uVar82 * 0x16b673d9 <=
                      ((0xa744469e - uVar51) * 0x8000 | 0xa744469e - uVar51 >> 0x11)) {
                    uVar89 = (int64_t)(char)(uint8_t)*puVar36;
                  }
                  uVar70 = *(uint32_t *)(*pauVar53 + uVar89 * 4) ^ 1;
                  if ((uint64_t)(0x4d335463 - uVar51) !=
                      (int64_t)(int)~((uVar51 + 0x3c1179bf) * -0x4d5a5d2d)) {
                    uVar70 = *(uint32_t *)(*pauVar53 + uVar89 * 4) + 1;
                  }
                  *(uint32_t *)(*pauVar53 + uVar89 * 4) = uVar70;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) + 1;
                  uVar89 = (int64_t)(char)*(uint8_t *)((int64_t)puVar36 + 3);
                  if ((param_2 | 1) * 0x6b110b1cf0b58312 != 0xa9ea2179) {
                    uVar89 = (uint64_t)*(uint8_t *)((int64_t)puVar36 + 3);
                  }
                  *(int *)(*pauVar53 + uVar89 * 4) = *(int *)(*pauVar53 + uVar89 * 4) + 1;
                  puVar36 = puVar36 + 1;
                } while (puVar36 < puVar86);
              }
            }
            lVar92 = 0;
            while( true ) {
              piVar6 = (int *)(pauVar53[0xc0] + lVar92 * 4);
              iVar83 = piVar6[1];
              iVar52 = piVar6[2];
              iVar85 = piVar6[3];
              piVar5 = (int *)(pauVar53[0x81] + lVar92 * 4);
              iVar67 = *piVar5;
              iVar81 = piVar5[1];
              iVar87 = piVar5[2];
              iVar12 = piVar5[3];
              piVar4 = (int *)(*pauVar53 + lVar92 * 4);
              iVar13 = piVar4[1];
              iVar14 = piVar4[2];
              iVar15 = piVar4[3];
              piVar5 = (int *)(pauVar53[1] + lVar92 * 4);
              iVar16 = *piVar5;
              iVar17 = piVar5[1];
              iVar18 = piVar5[2];
              iVar19 = piVar5[3];
              piVar7 = (int *)(pauVar53[0x80] + lVar92 * 4);
              iVar20 = piVar7[1];
              iVar21 = piVar7[2];
              iVar22 = piVar7[3];
              piVar5 = (int *)(pauVar53[0x41] + lVar92 * 4);
              iVar23 = *piVar5;
              iVar24 = piVar5[1];
              iVar25 = piVar5[2];
              iVar26 = piVar5[3];
              piVar8 = (int *)(pauVar53[0x40] + lVar92 * 4);
              iVar27 = piVar8[1];
              iVar28 = piVar8[2];
              iVar29 = piVar8[3];
              piVar5 = (int *)(*pauVar53 + lVar92 * 4);
              *piVar5 = *piVar8 + *piVar7 + *piVar4 + *piVar6;
              piVar5[1] = iVar27 + iVar20 + iVar13 + iVar83;
              piVar5[2] = iVar28 + iVar21 + iVar14 + iVar52;
              piVar5[3] = iVar29 + iVar22 + iVar15 + iVar85;
              piVar4 = (int *)(pauVar53[0xc1] + lVar92 * 4);
              iVar83 = piVar4[1];
              iVar52 = piVar4[2];
              iVar85 = piVar4[3];
              piVar5 = (int *)(pauVar53[1] + lVar92 * 4);
              *piVar5 = *piVar4 + iVar16 + iVar23 + iVar67;
              piVar5[1] = iVar83 + iVar17 + iVar24 + iVar81;
              piVar5[2] = iVar52 + iVar18 + iVar25 + iVar87;
              piVar5[3] = iVar85 + iVar19 + iVar26 + iVar12;
              if (lVar92 == 0xf8) break;
              lVar92 = lVar92 + 8;
            }
            uVar89 = 0x100;
            do {
              uVar89 = (uint64_t)((int)uVar89 - 1);
            } while (*(int *)(*pauVar53 + uVar89 * 4) == 0);
          }
        }
        if ((int)uVar80 < 1) {
          if (uVar80 != 0) goto LAB_7fffa4f623ec;
          uVar80 = (uint32_t)uVar89 + 1;
          if (uVar80 < 2) {
            uVar80 = 1;
            uVar89 = 0;
            uVar77 = 0;
          }
          else {
            uVar77 = 0;
            uVar88 = 0;
            do {
              uVar89 = uVar88 + 2;
              sVar32 = *(short *)(&UNK_7fffa57896cb +
                                 uVar88 * 2 + (int64_t)(int)(0xa16a768 - uVar51));
              if (*(short *)(&UNK_7fffa57896cb + uVar88 * 2 + (int64_t)(int)(0xa16a768 - uVar51))
                  == -1) {
                sVar32 = 1;
              }
              bVar91 = (uVar80 & 0xfffffffe) < uVar89;
              if ((-0x4419e617 << (bVar11 & 0x1f) | 0xbbe619e9U >> 0x20 - (bVar11 & 0x1f)) <
                  uVar51 + 0x64518aa7) {
                bVar91 = (uint64_t)(uVar80 & 0xfffffffe) - 2 == uVar88;
              }
              sVar65 = (short)*(uint32_t *)
                               (&UNK_7fffa578024e +
                               uVar88 * 2 + (int64_t)(short)((uVar9 ^ 0xea45) + 0x297e));
              if (sVar65 == -1) {
                sVar65 = 1;
              }
              uVar77 = (uint32_t)(*(int *)(&UNK_7fffa5864754 +
                                      (uint64_t)(uint32_t)((int)sVar65 << 2) * 4 +
                                      (int64_t)
                                      (short)((-0x16fd << (bVar11 & 0xf) |
                                              0xe903U >> 0x10 - (bVar11 & 0xf)) + 0x15)) *
                             *(int *)(*pauVar53 + uVar88 * 4)) + uVar77 +
                       (uint64_t)
                       (uint32_t)(*(int *)(&UNK_7fffa5861970 + (uint64_t)(uint32_t)((int)sVar32 << 2) * 4)
                             * *(int *)(*pauVar53 + uVar88 * 4 + 4));
              uVar88 = uVar89;
            } while (!bVar91);
          }
          uVar88 = uVar77;
          if ((uVar80 & 1) != 0) {
            sVar32 = *(short *)(&UNK_7fffa579002b +
                               uVar89 * 2 + (int64_t)(int)(uVar51 + 0xf5e7c564));
            if (sVar32 == -1) {
              sVar32 = 1;
            }
            uVar80 = *(int *)(&UNK_7fffa586366b +
                             (uint64_t)(uint32_t)((int)sVar32 << 2) * 4 +
                             (int64_t)(short)(uVar9 + 0xa6b4)) * *(int *)(*pauVar53 + uVar89 * 4);
            uVar88 = uVar77 + uVar80;
            if (uVar51 + 0xb5e8c43b < (uVar82 * -0x62452800 | uVar82 * 0x3f93b75b >> 0x15)) {
              uVar88 = (uint64_t)uVar80 * (uVar77 & 0xffffffff) +
                       ((uVar77 >> 0x20) * (uint64_t)uVar80 << 0x20);
            }
          }
          uVar88 = uVar88 >> 8;
LAB_7fffa4f62890:
          bVar91 = lVar72 <= lVar57;
          if (((0x807f5f67 - uVar51) * 0x200000 | 0x807f5f67 - uVar51 >> 0xb) != 0xd8b7de0b) {
            bVar91 = lVar57 == lVar72;
          }
          if (!bVar91) {
            do {
              uVar80 = *puVar78;
              puVar78 = (uint32_t *)((int64_t)puVar78 + 1);
              uVar88 = uVar88 + *(uint8_t *)((uint64_t)(uint8_t)uVar80 +
                                         (int64_t)(short)(uVar9 + 0x892b) + 0x7fffa56eef24);
            } while (puVar78 < puVar86);
          }
          uVar88 = uVar88 >> 3;
        }
        else {
          if (uVar80 == ((uVar75 * 0x5399 ^ 0x4f68) & 0xffff)) {
            uVar88 = 0;
            goto LAB_7fffa4f62890;
          }
LAB_7fffa4f623ec:
          uVar70 = (uVar80 & 0xfffffffe) + 0xc74d1dbf;
          uVar33 = uVar70 * 0x40 | uVar70 >> 0x1a;
          uVar70 = ((uVar51 ^ 0xc685c752) << 6 | (uVar51 ^ 0xc685c752) >> 0x1a) + 0xdf09a8b2 |
                   uVar33;
          if (uVar51 + 0x4f422960 < uVar82 * -0x9a3e42b) {
            uVar70 = uVar33 + 0x3c869a5;
          }
          if (uVar70 != 0xd70fda16) {
            uVar88 = 0;
            goto LAB_7fffa4f62890;
          }
          uVar42 = *(uint16_t *)(lVar49 + 0xb14);
          bVar59 = (uint8_t)uVar42;
          lVar92 = (int64_t)(1 << (bVar59 - 1 & 0x1f));
          if (uVar42 == (uint16_t)(0 << (bVar11 & 0xf) | 0U >> 0x10 - (bVar11 & 0xf))) {
            lVar92 = 1;
          }
          if ((uint32_t)uVar89 <= (uint32_t)*(uint16_t *)(lVar49 + (uint64_t)((uVar80 | 1) * 0x3b2))) {
            uVar77 = 0;
            uVar88 = 0;
            while( true ) {
              uVar80 = *(uint32_t *)(lVar49 + lVar92 * 4 + 0xb1c + uVar77 * 8);
              iVar83 = (uVar80 >> 0x10) + 1;
              uVar70 = iVar83 * 0x100;
              uVar33 = iVar83 * 0x1000000 + ((1 << (bVar59 & 0x1f)) + uVar80) * -0x100 >>
                       (bVar59 & 0x1f);
              uVar80 = uVar70 - uVar33;
              if (uVar51 != 0xa173c51) {
                uVar80 = uVar70 ^ uVar33;
              }
              if (*(uint32_t *)(*pauVar53 + uVar77 * 4) != 0) {
                if ((uint32_t)uVar42 * 0x100 + 0x100 <= uVar80) goto LAB_7fffa4f625b0;
                uVar88 = uVar88 + (uint64_t)*(uint32_t *)(*pauVar53 + uVar77 * 4) * (uint64_t)uVar80;
              }
              if (uVar89 == uVar77) break;
              uVar77 = uVar77 + 1;
            }
            uVar88 = uVar88 >> 8;
            goto LAB_7fffa4f62890;
          }
LAB_7fffa4f625b0:
          uVar88 = uVar69 * 10;
        }
        lVar49 = *(int64_t *)(param_3 + 0xc88);
        pauVar53 = *(uint8_t (**) [16])(param_3 + 0xdc0);
        uStack_1a8 = *(int64_t *)(param_3 + 0x1460) +
                     uVar64 + uVar56 + uVar71 +
                     ((uint64_t)(0x7f < uVar69) - (uint64_t)(uVar69 < 0x7f00)) + uVar88 + 6;
      }
      else {
        uStack_1a8 = uVar45;
      }
      bVar59 = (uint8_t)(param_2 & 0xffffffff) & 0xf;
      (*(code *)((int64_t)(short)(0x4e73 << bVar59 | 0x4e73U >> 0x10 - bVar59) + 0x7fffa55bcc5a))
                (param_2 & 0xffffffff,lVar2,pauVar53,
                 (uVar48 << 0xb | uVar34 >> 0x35) ^ (uVar48 << 0x12 | uVar34 >> 0x2e) ^ uVar34,
                 (uVar51 + 0xdb2f8d1e) * 0x20000000 | uVar51 + 0xdb2f8d1e >> 3);
      uVar34 = lVar49 + 0x453ba0f2U ^ 0x8a3d86ae;
      if (uVar34 < 0xffffffffffffff89) {
        puVar86 = *(uint32_t **)(param_3 + 0xf50);
        lVar72 = *(int64_t *)(param_3 + 0xc88);
        pauVar53 = *(uint8_t (**) [16])(param_3 + 0xdc0);
        puVar36 = *(uint32_t **)(param_3 + 0xf58);
        puVar37 = *(uint32_t **)(param_3 + uVar61);
        puVar78 = *(uint32_t **)(param_3 + 0xf48);
        uVar34 = *(uint64_t *)(param_3 + 0xf38);
        puVar84 = *(uint32_t **)(param_3 + 0xf60);
        iVar83 = *(int *)(param_3 + 0x1338);
        uVar89 = (int64_t)puVar86 - (int64_t)puVar78;
        uVar48 = *(uint64_t *)(param_3 + 0xf40);
        if (iVar83 < 2) {
          if (iVar83 == 1) {
            uVar89 = 1;
          }
          else if (iVar83 != 0) goto LAB_7fffa4f62b3d;
        }
        else if (iVar83 - 2U < 2) {
          if (((uint32_t)pauVar53 & 3) == ((uVar51 ^ 0xe3d73c51) & 0xffff)) {
            if (uVar89 < 0x5dc) {
              FUN_7fffa4ecf8e0(pauVar53,0);
              if (uVar89 != 0) {
                do {
                  puVar39 = (uint32_t *)((int64_t)puVar78 + 1);
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar78 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar78 * 4) + 1;
                  puVar78 = puVar39;
                } while (puVar39 < puVar86);
                uVar64 = 0x100;
                uVar80 = 0xff;
                do {
                  uVar69 = (uint64_t)uVar80;
                  uVar70 = (int)uVar64 - 1;
                  uVar64 = (uint64_t)uVar70;
                  uVar80 = uVar80 - 1;
                } while (*(int *)(*pauVar53 + uVar64 * 4) == 0);
                if (6 < uVar70) {
                  uVar64 = uVar69 + 1 & 0xfffffffffffffff8;
                  do {
                    uVar64 = uVar64 - 8;
                  } while (uVar64 != 0);
                  goto LAB_7fffa4f634db;
                }
                goto LAB_7fffa4f634e0;
              }
              uVar77 = 1;
              uVar64 = 0;
              uVar69 = 0;
              goto LAB_7fffa4f63630;
            }
            FUN_7fffa4ecf8e0(pauVar53,0,0x1000);
            if (0x13 < (int64_t)uVar89) {
              puVar38 = (uint32_t *)((int64_t)puVar78 + (uVar89 - 0xf));
              uVar80 = *puVar78;
              puVar40 = puVar78 + 1;
              puVar58 = puVar78;
              puVar39 = puVar78;
              while( true ) {
                puVar78 = puVar39 + 4;
                puStack_1f0 = puVar39 + 5;
                if (uVar51 == 0xa173c51) {
                  bVar91 = puVar38 <= puStack_1f0;
                  puStack_1f0 = puVar58 + 5;
                  uVar70 = 0xd6a2e363;
                  bVar91 = (0xb8000U >> (bVar11 & 0x1f) | 0xb8000 << 0x20 - (bVar11 & 0x1f)) <
                           0xe0dfa148 != bVar91;
                }
                else {
                  bVar91 = puStack_1f0 < puVar38;
                  uVar70 = (uVar51 ^ 0xd133f925) << 5 | (uVar51 ^ 0xd133f925) >> 0x1b;
                }
                uVar33 = *puVar40;
                uVar71 = (uint64_t)(uVar33 & 0xff);
                uVar77 = (uint64_t)(uVar33 >> 0x18);
                bVar59 = (uint8_t)uVar70 & 0x1f;
                uVar64 = (uint64_t)(uVar80 >> 0x10 & 0xff);
                uVar56 = (uint64_t)(uVar33 >> 0x10 & 0xff);
                iVar52 = *(int *)(pauVar53[0x80] + uVar64 * 4);
                uVar69 = (uint64_t)(uVar80 >> 8 & 0xff);
                iVar85 = *(int *)(pauVar53[0x40] + uVar69 * 4);
                *(int *)(*pauVar53 + (uint64_t)(uVar80 & 0xff) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uVar80 & 0xff) * 4) + 1;
                iVar85 = iVar85 + 1;
                iVar52 = iVar52 + 1;
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar80 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar80 >> 0x18) * 4) + 1;
                if ((int64_t)(int)((uVar51 ^ 0x846e2224) - uVar70) ==
                    (uint64_t)
                    ((uVar51 ^ 0xcac015ad) << bVar59 | (uVar51 ^ 0xcac015ad) >> 0x20 - bVar59)) {
                  iVar67 = *(int *)(pauVar53[0xc0] + uVar77 * 4);
                  iVar81 = *(int *)(pauVar53[0x80] + uVar56 * 4);
                  *(int *)(pauVar53[0x40] + uVar69 * 4) = iVar85;
                  uVar80 = puVar39[2];
                  *(int *)(pauVar53[0x80] + uVar64 * 4) = iVar52;
                  uVar43 = (uVar70 | 1) * 0x2fc5627a;
                  uVar43 = uVar43 >> (bVar11 & 0x1f) | uVar43 << 0x20 - (bVar11 & 0x1f);
                  *(int *)(pauVar53[0x80] + uVar56 * 4) = iVar81 + 1;
                  uVar64 = (uint64_t)((uVar33 >> 8 & 0xff) << 2);
                  iVar85 = *(int *)(pauVar53[0x40] + uVar64);
                  iVar52 = *(int *)(*pauVar53 + uVar71 * 4);
                }
                else {
                  *(int *)(pauVar53[0x80] + uVar64 * 4) = iVar52;
                  iVar67 = *(int *)(pauVar53[0x80] + uVar56 * 4);
                  uVar64 = (uint64_t)((uVar33 >> 8 & 0xff) << 2);
                  *(int *)(pauVar53[0x40] + uVar69 * 4) = iVar85;
                  uVar80 = puVar39[2];
                  iVar52 = *(int *)(*pauVar53 + uVar71 * 4);
                  *(int *)(pauVar53[0x80] + uVar56 * 4) = iVar67 + 1;
                  iVar67 = *(int *)(pauVar53[0xc0] + uVar77 * 4);
                  uVar43 = (uVar70 + 0x4cda10c1 >> (bVar11 & 0x1f) |
                           uVar70 + 0x4cda10c1 << 0x20 - (bVar11 & 0x1f)) * -0x5be67d3b + 0x487b3e79
                  ;
                  iVar85 = *(int *)(pauVar53[0x40] + uVar64);
                }
                piStack_f8 = (int *)(pauVar53[0x40] + uVar64);
                uVar33 = uVar43 ^ uVar51 + 0x5f033d61;
                uVar64 = (uint64_t)(uVar80 & 0xff);
                if ((0x7a53a9b2 - uVar51 ^ 0xd9e53c9a) * (uVar70 | 1) <
                    (uVar33 << 1 | (uint32_t)((int)uVar33 < 0))) {
                  uVar69 = (uint64_t)((uVar80 >> 8 & 0xff) << 2);
                  *piStack_f8 = iVar85 + 1;
                  *(int *)(*pauVar53 + uVar71 * 4) = iVar52 + 1;
                  *(int *)(pauVar53[0xc0] + uVar77 * 4) = iVar67 + 1;
                  iVar52 = *(int *)(pauVar53[0x40] + uVar69);
                  iVar87 = *(int *)(*pauVar53 + uVar64 * 4);
                  iVar81 = ((uVar43 + 0xfc0e00de) * 4 | uVar43 + 0xfc0e00de >> 0x1e) * uVar82;
                }
                else {
                  iVar81 = (uVar70 - uVar51) + -0x6d12481c;
                  *(int *)(*pauVar53 + uVar71 * 4) = iVar52 + 1;
                  iVar87 = *(int *)(*pauVar53 + uVar64 * 4);
                  uVar69 = (uint64_t)((uVar80 >> 8 & 0xff) << 2);
                  iVar52 = *(int *)(pauVar53[0x40] + uVar69);
                  *(int *)(pauVar53[0xc0] + uVar77 * 4) = iVar67 + 1;
                  *piStack_f8 = iVar85 + 1;
                }
                piStack_160 = (int *)(*pauVar53 + uVar64 * 4);
                piStack_1c8 = (int *)(pauVar53[0x40] + uVar69);
                uVar64 = (uint64_t)(uVar80 >> 0x10 & 0xff);
                if (~(uVar51 ^ 0x720db2c0) * (uVar43 | 1) < iVar81 + 0xe9ca9961U) {
                  uVar33 = puVar39[3];
                  uVar69 = (uint64_t)((uint16_t)(uVar33 >> 0x10) & 0xff) * 4;
                  uVar43 = *(uint32_t *)(pauVar53[0x80] + uVar64 * 4) ^ 1;
                  if ((uVar70 + 0x1326fbc7) * -0x3fffff73 - uVar51 <
                      (0xdca71420U - iVar81 << (bVar11 & 0x1f) |
                      0xdca71420U - iVar81 >> 0x20 - (bVar11 & 0x1f))) {
                    uVar43 = *(uint32_t *)(pauVar53[0x80] + uVar64 * 4) + 1;
                  }
                  *(uint32_t *)(pauVar53[0x80] + uVar64 * 4) = uVar43;
                  iVar85 = *(int *)(pauVar53[0x80] + uVar69);
                  *(int *)(pauVar53[0xc0] + (uint64_t)(uVar80 >> 0x18) * 4) =
                       *(int *)(pauVar53[0xc0] + (uint64_t)(uVar80 >> 0x18) * 4) + 1;
                  *piStack_160 = iVar87 + 1;
                }
                else {
                  *piStack_160 = iVar87 + 1;
                  iVar85 = *(int *)(pauVar53[0x80] + uVar64 * 4);
                  *(int *)(pauVar53[0xc0] + (uint64_t)(uVar80 >> 0x18) * 4) =
                       *(int *)(pauVar53[0xc0] + (uint64_t)(uVar80 >> 0x18) * 4) + 1;
                  *(int *)(pauVar53[0x80] + uVar64 * 4) = iVar85 + 1;
                  uVar33 = puVar39[3];
                  uVar69 = (uint64_t)(uVar33 >> 0xe & 0x3fc);
                  iVar85 = *(int *)(pauVar53[0x80] + uVar69);
                }
                iVar67 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4);
                *piStack_1c8 = iVar52 + 1;
                uVar80 = *puVar78;
                *(int *)(pauVar53[0x80] + uVar69) = iVar85 + 1;
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) = iVar67 + 1;
                *(int *)(pauVar53[0x40] + (uint64_t)(uVar33 >> 8 & 0xff) * 4) =
                     *(int *)(pauVar53[0x40] + (uint64_t)(uVar33 >> 8 & 0xff) * 4) + 1;
                *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) + 1;
                if (!bVar91) break;
                puVar58 = puVar58 + 4;
                puVar40 = puStack_1f0;
                puVar39 = puVar78;
              }
            }
            uVar64 = (int64_t)puVar78 - (int64_t)puVar86;
            if (puVar78 < puVar86) {
              iVar52 = -(int)puVar78;
              if ((uVar51 ^ 0x747e8489) + 0x1944994 <= (uVar51 ^ 0x6fad9fb5)) {
                iVar52 = (int)puVar78;
              }
              uVar69 = (uint64_t)((int)puVar86 + iVar52 & 3);
              puVar39 = puVar78;
              if (uVar69 != (uVar51 ^ 0xe06e9bf9) + 0x15865858) {
                do {
                  uVar69 = uVar69 - 1;
                  puVar78 = (uint32_t *)((int64_t)puVar39 + 1);
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar39 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar39 * 4) + 1;
                  puVar39 = puVar78;
                } while (uVar69 != 0);
              }
              if (uVar64 < 0xfffffffffffffffd) {
                do {
                  puVar39 = puVar78 + 1;
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar78 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar78 * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar78 + 1) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar78 + 1) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar78 + 2) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar78 + 2) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar78 + 3) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar78 + 3) * 4) + 1;
                  puVar78 = puVar39;
                } while (puVar39 < puVar86);
              }
            }
            lVar49 = 0;
            do {
              uVar64 = lVar49 + 0xdcca4b3f;
              piVar5 = (int *)(pauVar53[0x80] + lVar49 * 4);
              iVar52 = *piVar5;
              iVar85 = piVar5[1];
              iVar67 = piVar5[2];
              iVar81 = piVar5[3];
              auVar105 = *(uint8_t (*) [16])(pauVar53[0x81] + lVar49 * 4);
              piVar5 = (int *)(pauVar53[0xc0] + lVar49 * 4);
              iVar87 = *piVar5;
              iVar12 = piVar5[1];
              iVar13 = piVar5[2];
              iVar14 = piVar5[3];
              piVar6 = (int *)(pauVar53[0xc1] + lVar49 * 4);
              piVar4 = (int *)(*pauVar53 + lVar49 * 4);
              iVar15 = piVar4[1];
              iVar16 = piVar4[2];
              iVar17 = piVar4[3];
              piVar5 = (int *)(pauVar53[1] + lVar49 * 4);
              piVar7 = (int *)(pauVar53[0x40] + lVar49 * 4);
              iVar18 = *piVar7;
              iVar19 = piVar7[1];
              iVar20 = piVar7[2];
              iVar21 = piVar7[3];
              piVar7 = (int *)(pauVar53[0x41] + lVar49 * 4);
              auVar104._0_4_ = *piVar7 + auVar105._0_4_ + *piVar5 + *piVar6;
              auVar104._4_4_ = piVar7[1] + auVar105._4_4_ + piVar5[1] + piVar6[1];
              auVar104._8_4_ = piVar7[2] + auVar105._8_4_ + piVar5[2] + piVar6[2];
              auVar104._12_4_ = piVar7[3] + auVar105._12_4_ + piVar5[3] + piVar6[3];
              *(uint8_t (*) [16])(pauVar53[1] + lVar49 * 4) = auVar104;
              piVar5 = (int *)(*pauVar53 + lVar49 * 4);
              *piVar5 = iVar87 + iVar52 + iVar18 + *piVar4;
              piVar5[1] = iVar12 + iVar85 + iVar19 + iVar15;
              piVar5[2] = iVar13 + iVar67 + iVar20 + iVar16;
              piVar5[3] = iVar14 + iVar81 + iVar21 + iVar17;
              lVar49 = lVar49 + 8;
            } while ((uVar64 * 4 | uVar64 >> 0x3e) != 0x3732930dc);
            uVar64 = 0x100;
            do {
              uVar70 = (int)uVar64 - 1;
              uVar64 = (uint64_t)uVar70;
            } while (*(int *)(*pauVar53 + uVar64 * 4) == 0);
LAB_7fffa4f634db:
            if ((int)uVar70 < 0) {
              uVar69 = 0;
            }
            else {
LAB_7fffa4f634e0:
              uVar77 = (uint64_t)(uVar70 + 1);
              if (uVar70 < 3) {
                uVar64 = 0;
                uVar69 = 0;
LAB_7fffa4f63630:
                do {
                  lVar49 = uVar64 * 8;
                  lVar57 = uVar64 * 4;
                  uVar64 = uVar64 + 1;
                  uVar69 = uVar69 + (uint64_t)*(uint32_t *)(*pauVar53 + lVar57) *
                                    (uint64_t)*(uint8_t *)(lVar72 + 8 + lVar49);
                } while (uVar77 != uVar64);
              }
              else {
                uVar64 = (uint64_t)(uVar70 + 1 & 0xfffffffc);
                if (0xffffffffe692924f < (uint64_t)~(uVar51 ^ 0x5d1908b3)) {
                  uVar64 = uVar77 - 0xfffffffc;
                }
                lVar97 = 0;
                lVar101 = 0;
                lVar49 = 0;
                lVar57 = 0;
                lVar92 = 0;
                while( true ) {
                  uVar69 = *(uint64_t *)(*pauVar53 + lVar49 * 4 + 8);
                  uVar95 = (uint32_t)(uVar69 >> 0x20);
                  if ((uint64_t)((0x56e46ec6 - uVar51) * 0x100000 | 0x56e46ec6 - uVar51 >> 0xc) <
                      (uint64_t)(int64_t)(int)((uVar51 ^ 0x3772e901) + 0x4261235a ^ 0xc5727526)) {
                    auVar93._0_8_ = uVar69 & 0xffffffff;
                    auVar93._8_4_ = uVar95;
                    auVar93._12_4_ = 0;
                  }
                  else {
                    auVar93._0_4_ = (int)uVar69;
                    auVar94._8_4_ = uVar95;
                    auVar94._0_8_ = uVar69;
                    auVar94._12_4_ = -(uint32_t)((int64_t)uVar69 < 0);
                    auVar93._8_8_ = auVar94._8_8_;
                    auVar93._4_4_ = -(uint32_t)(auVar93._0_4_ < 0);
                  }
                  auVar105 = *(uint8_t (*) [16])(lVar72 + 8 + lVar49 * 8) & auVar31;
                  lVar97 = lVar97 + (uint64_t)auVar105._0_4_ *
                                    (*(uint64_t *)(*pauVar53 + lVar49 * 4) & 0xffffffff);
                  lVar101 = lVar101 + (auVar105._8_8_ & 0xffffffff) *
                                      (*(uint64_t *)(*pauVar53 + lVar49 * 4) >> 0x20);
                  auVar105 = *(uint8_t (*) [16])(lVar72 + 0x18 + lVar49 * 8) & auVar31;
                  lVar57 = ((auVar93._0_8_ >> 0x20) * (uint64_t)auVar105._0_4_ << 0x20) +
                           lVar57 + (uint64_t)auVar105._0_4_ * (uint64_t)auVar93._0_4_;
                  lVar92 = ((auVar93._8_8_ >> 0x20) * (uint64_t)auVar105._8_4_ << 0x20) +
                           lVar92 + (auVar105._8_8_ & 0xffffffff) * (uint64_t)auVar93._8_4_;
                  if (uVar64 - 4 == lVar49) break;
                  lVar49 = lVar49 + 4;
                }
                uVar69 = lVar101 + lVar92 + lVar97 + lVar57;
                if (uVar64 != uVar77) goto LAB_7fffa4f63630;
              }
              uVar69 = uVar69 >> 3;
            }
            if (iVar83 * -0x6f0d8ec1 == 0x21e4e27e) {
              uVar69 = uVar69 + *(int64_t *)(param_3 + 0x13c0);
            }
            uVar64 = uVar69 + 6;
            if (uVar89 < 0x100) {
              uVar64 = uVar69;
            }
            uVar89 = uVar64 + ((uint64_t)
                               ((uint16_t)((uVar9 ^ 0xc3ad) << 0xe | (uVar9 ^ 0xc3ad) >> 2) < uVar89)
                              - (uint64_t)(uVar89 < 0x400)) + 4;
          }
        }
        else {
LAB_7fffa4f62b3d:
          uVar89 = 0;
        }
        uVar64 = (int64_t)(uVar48 - uVar34) >> 3;
        puVar86 = (uint32_t *)((int64_t)puVar37 + uVar64);
        uVar80 = *(uint32_t *)(param_3 + 0x13cc);
        if (uVar64 < 0x5dc) {
          pauVar53[7] = (uint8_t  [16])0x0;
          pauVar53[6] = (uint8_t  [16])0x0;
          pauVar53[5] = (uint8_t  [16])0x0;
          pauVar53[4] = (uint8_t  [16])0x0;
          pauVar53[3] = (uint8_t  [16])0x0;
          pauVar53[2] = (uint8_t  [16])0x0;
          pauVar53[1] = (uint8_t  [16])0x0;
          *pauVar53 = (uint8_t  [16])0x0;
          puVar78 = puVar37;
          if (uVar48 == uVar34) {
            uVar70 = 0;
          }
          else {
            do {
              puVar39 = (uint32_t *)((int64_t)puVar78 + 1);
              *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar78 * 4) =
                   *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar78 * 4) + 1;
              puVar78 = puVar39;
            } while (puVar39 < puVar86);
            uVar70 = 0x1f;
            while (*(int *)(*pauVar53 + (uint64_t)uVar70 * 4) == 0) {
              uVar70 = uVar70 - 1;
            }
            if (6 < uVar70) {
              uVar45 = (uint64_t)uVar70 + 1 & 0xfffffffffffffff8;
              do {
                uVar45 = uVar45 - 8;
              } while (uVar45 != 0);
            }
          }
        }
        else {
          uVar70 = 0x1f;
          if (((uint64_t)pauVar53 & 3) == 0) {
            FUN_7fffa4ecf8e0(pauVar53,0,0x1000);
            if ((int64_t)uVar64 < 0x14) {
              puVar78 = puVar37;
            }
            else {
              uVar70 = *puVar37;
              puVar39 = puVar37;
              do {
                bVar59 = (uint8_t)(uVar70 >> 8);
                uVar33 = puVar39[1];
                uVar43 = uVar70 >> 0x10 & 0xff;
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                iVar83 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4);
                if (0xc03df83a - (uVar51 ^ 0xfcccf9f4) <
                    (uVar82 * -0x3650fc00 | uVar82 * 0x64e4d782 >> 0x17) ==
                    (int64_t)(uint64_t)(0x98cbe299 - uVar51) <=
                    (int64_t)(int)((uVar51 ^ 0xd72539c0) + 0xce140d01)) {
                  *(int *)(pauVar53[0x80] + (uint64_t)uVar43 * 4) =
                       *(int *)(pauVar53[0x80] + (uint64_t)uVar43 * 4) + 1;
                  lVar49 = (uint64_t)bVar59 * 4;
                  iVar52 = *(int *)(pauVar53[0x40] + lVar49);
                }
                else {
                  lVar49 = (uint64_t)bVar59 * 4;
                  iVar52 = *(int *)(pauVar53[0x40] + lVar49);
                  *(int *)(pauVar53[0x80] + (uint64_t)uVar43 * 4) =
                       *(int *)(pauVar53[0x80] + (uint64_t)uVar43 * 4) + 1;
                }
                uVar77 = (uint64_t)(uint8_t)(uVar33 >> 8);
                *(int *)(pauVar53[0x40] + lVar49) = iVar52 + 1;
                iVar52 = *(int *)(pauVar53[0x40] + uVar77 * 4);
                uVar69 = (uint64_t)(uVar33 >> 0x10 & 0xff);
                iVar85 = *(int *)(pauVar53[0x80] + uVar69 * 4);
                *(int *)(*pauVar53 + ((uint64_t)uVar70 & 0xff) * 4) =
                     *(int *)(*pauVar53 + ((uint64_t)uVar70 & 0xff) * 4) + 1;
                iVar67 = *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar33 * 4);
                uVar70 = puVar39[2];
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) = iVar83 + 1;
                *(int *)(pauVar53[0x40] + uVar77 * 4) = iVar52 + 1;
                *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar33 * 4) = iVar67 + 1;
                *(int *)(pauVar53[0x80] + uVar69 * 4) = iVar85 + 1;
                uVar33 = puVar39[3];
                *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) =
                     *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) + 1;
                uVar69 = (uint64_t)(uVar33 >> 8 & 0xff);
                iVar83 = *(int *)(pauVar53[0x40] + uVar69 * 4);
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                iVar52 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4);
                *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) + 1;
                *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) =
                     *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) + 1;
                uVar70 = puVar39[4];
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) = iVar52 + 1;
                *(int *)(pauVar53[0x40] + uVar69 * 4) = iVar83 + 1;
                *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) =
                     *(int *)(pauVar53[0x80] + (uVar33 >> 0xe & 0x3fc)) + 1;
                *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) + 1;
                puVar78 = puVar39 + 4;
                puVar40 = puVar39 + 5;
                puVar39 = puVar78;
              } while (puVar40 < (uint32_t *)((int64_t)puVar86 - 0xfU));
            }
            if (puVar78 < puVar86) {
              uVar77 = (uint64_t)(uVar45 < 0xffffffffffffff89);
              uVar88 = ~(uint64_t)puVar37;
              uVar79 = uVar64 & uVar88;
              uVar70 = (uint32_t)(uVar45 < 0xffffffffffffff89);
              uVar69 = (uVar88 | uVar64) ^ uVar77;
              uVar71 = (uint64_t)((0x432b7147 - uVar51) * 0x8000 | 0x432b7147 - uVar51 >> 0x11) -
                       0x1a7b1c8b;
              uVar74 = uVar88 | ~uVar64;
              uVar56 = uVar77 ^ 0xffffffffffffffff;
              uVar45 = uVar74 & uVar56;
              if (((uVar51 ^ 0x85813e5e) << 10 | (uVar51 ^ 0x85813e5e) >> 0x16) <=
                  uVar51 + 0x2b692030) {
                uVar45 = uVar74 * uVar56;
              }
              lVar49 = (uVar69 & 0xffffffff) * (uVar71 & 0xffffffff) +
                       ((uVar71 >> 0x20) * (uVar69 & 0xffffffff) +
                        ((uVar88 | uVar64) >> 0x20) * (uVar71 & 0xffffffff) << 0x20) +
                       (uVar64 | (uint64_t)puVar37 | uVar56) * -0xe70b68c6 +
                       (uint64_t)((uint32_t)(uVar64 | (uint64_t)puVar37) & uVar70) * 0xe70b68c8 +
                       (uint64_t)((uint32_t)uVar79 & uVar70) * 0x4fae3bef +
                       (uVar79 ^ uVar56) * -0x4fae3bf0 +
                       ((~uVar64 | (uint64_t)puVar37) & uVar56) * 0x136b9a4b9 +
                       (~uVar77 & uVar79) * 0xe70b68ca + uVar45 * -2;
              uVar70 = (int)lVar49 - (int)puVar78 & 3;
              uVar45 = (uint64_t)uVar70;
              puVar40 = puVar78;
              puVar39 = puVar78;
              if (uVar70 != 0) {
                do {
                  puVar40 = (uint32_t *)((int64_t)puVar39 + 1);
                  uVar45 = uVar45 - 1;
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar39 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar39 * 4) + 1;
                  puVar39 = puVar40;
                } while (uVar45 != 0);
              }
              if ((uint64_t)((int64_t)puVar78 - lVar49) < 0xfffffffffffffffd) {
                do {
                  puVar78 = puVar40 + 1;
                  if ((0x44b73736 - uVar51) * -0x22e44fb5 == 0x5082f117) {
                    *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar40 * 4) =
                         *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar40 * 4) + 1;
                    *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar40 + 1) * 4) =
                         *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar40 + 1) * 4) + 1;
                    uVar45 = (uint64_t)*(uint8_t *)((int64_t)puVar40 + 2);
                    iVar83 = *(int *)(*pauVar53 + uVar45 * 4);
                  }
                  else {
                    uVar45 = (uint64_t)*(uint8_t *)((int64_t)puVar40 + 2);
                    bVar59 = *(uint8_t *)((int64_t)puVar40 + 1);
                    iVar83 = *(int *)(*pauVar53 + uVar45 * 4);
                    *(uint32_t *)(*pauVar53 + (uint64_t)(uint8_t)*puVar40 * 4) =
                         *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar40 * 4) +
                         (-(uint32_t)(uVar82 * 0x14c083e4 + 0xe4901ea9 <
                                 (-0x7ecc4b8e - uVar51) * 0x654028b) | 1);
                    uVar70 = *(uint32_t *)(*pauVar53 + (uint64_t)bVar59 * 4) + 1;
                    if ((int64_t)
                        (uint64_t)
                        (-0x15bf1c8d << (bVar11 & 0x1f) | 0xea40e373U >> 0x20 - (bVar11 & 0x1f)) <=
                        (int64_t)(int)((uVar51 ^ 0xb6225b72) + 0xfd27170b)) {
                      uVar70 = *(uint32_t *)(*pauVar53 + (uint64_t)bVar59 * 4) & 1;
                    }
                    *(uint32_t *)(*pauVar53 + (uint64_t)bVar59 * 4) = uVar70;
                  }
                  *(int *)(*pauVar53 + uVar45 * 4) = iVar83 + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar40 + 3) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar40 + 3) * 4) + 1;
                  puVar40 = puVar78;
                } while (puVar78 < puVar86);
              }
            }
            lVar49 = 0;
            do {
              piVar6 = (int *)(pauVar53[0x81] + lVar49 * 4);
              piVar5 = (int *)(pauVar53[0x80] + lVar49 * 4);
              iVar83 = *piVar5;
              iVar52 = piVar5[1];
              iVar85 = piVar5[2];
              iVar67 = piVar5[3];
              piVar4 = (int *)(*pauVar53 + lVar49 * 4);
              iVar81 = piVar4[1];
              iVar87 = piVar4[2];
              iVar12 = piVar4[3];
              piVar5 = (int *)(pauVar53[1] + lVar49 * 4);
              piVar7 = (int *)(pauVar53[0x41] + lVar49 * 4);
              piVar8 = (int *)(pauVar53[0xc0] + lVar49 * 4);
              iVar13 = *piVar8;
              iVar14 = piVar8[1];
              iVar15 = piVar8[2];
              iVar16 = piVar8[3];
              piVar8 = (int *)(pauVar53[0xc1] + lVar49 * 4);
              auVar106._0_4_ = *piVar8 + *piVar7 + *piVar5 + *piVar6;
              auVar106._4_4_ = piVar8[1] + piVar7[1] + piVar5[1] + piVar6[1];
              auVar106._8_4_ = piVar8[2] + piVar7[2] + piVar5[2] + piVar6[2];
              auVar106._12_4_ = piVar8[3] + piVar7[3] + piVar5[3] + piVar6[3];
              *(uint8_t (*) [16])(pauVar53[1] + lVar49 * 4) = auVar106;
              piVar6 = (int *)(pauVar53[0x40] + lVar49 * 4);
              iVar17 = piVar6[1];
              iVar18 = piVar6[2];
              iVar19 = piVar6[3];
              piVar5 = (int *)(*pauVar53 + lVar49 * 4);
              *piVar5 = *piVar6 + iVar13 + *piVar4 + iVar83;
              piVar5[1] = iVar17 + iVar14 + iVar81 + iVar52;
              piVar5[2] = iVar18 + iVar15 + iVar87 + iVar85;
              piVar5[3] = iVar19 + iVar16 + iVar12 + iVar67;
              bVar91 = lVar49 != 0xf8;
              lVar49 = lVar49 + 8;
            } while (bVar91);
            uVar45 = 0xff;
            do {
              uVar70 = (uint32_t)uVar45;
              lVar49 = uVar45 * 4;
              uVar45 = (uint64_t)
                       (uVar70 - ((uint64_t)((uVar51 ^ 0x9ec56e6d) * 0x103 + 0xbf7cafd4) <
                                 (uint64_t)
                                 (int64_t)
                                 (int)((uVar51 + 0x7a19b6e9) * 0x40000000 | uVar51 + 0x7a19b6e9 >> 2
                                      )));
            } while (*(int *)(*pauVar53 + lVar49) == 0);
          }
        }
        if ((int)uVar80 < 1) {
          if (uVar80 != 0) goto LAB_7fffa4f63e66;
          uVar70 = uVar70 + 1;
          if (uVar70 < 2) {
            lVar49 = 0;
            uVar45 = 0;
LAB_7fffa4f6433e:
            sVar32 = *(short *)((int64_t)
                                (short)((-0x4f00 - uVar9) * 2 |
                                       (uint16_t)((short)(-0x4f00 - uVar9) < 0)) + 0x7fffa56bdfe2 +
                               lVar49 * 2);
            if (sVar32 == -1) {
              sVar32 = 1;
            }
            uVar45 = uVar45 + (uint32_t)(*(int *)(*pauVar53 + lVar49 * 4) *
                                    *(int *)(&UNK_7fffa586e6ef +
                                            (uint64_t)(uint32_t)((int)sVar32 << 3) * 4 +
                                            (int64_t)
                                            (int)~(uVar51 + 0xf5ea5eab >> 1 |
                                                  (uint32_t)((uVar51 + 0xf5ea5eab & 1) != 0) << 0x1f)));
          }
          else {
            uVar69 = 0;
            uVar45 = 0;
            while( true ) {
              uVar77 = uVar69 | 1;
              if ((int64_t)(int)(uVar51 ^ 0x94743724) <
                  (int64_t)
                  (uint64_t)
                  (-0x3b89d5a7 << (bVar11 & 0x1f) | 0xc4762a59U >> 0x20 - (bVar11 & 0x1f))) {
                if (0xffffffff9b88829d <
                    (uint64_t)
                    ((0x189449a9U >> (bVar11 & 0x1f) | 0x189449a9 << 0x20 - (bVar11 & 0x1f)) ^
                    0xe4d48c6e)) {
                  uVar77 = 0;
                }
                sVar32 = *(short *)(&UNK_7fffa56c0ae8 +
                                   uVar77 * 2 +
                                   (int64_t)
                                   (short)(0x5f2c << (bVar11 & 0xf) |
                                          0x5f2cU >> 0x10 - (bVar11 & 0xf)));
                if (sVar32 == -1) {
                  sVar32 = 1;
                }
                puVar41 = &UNK_7fffa56cad71 +
                          (int)(0x379ffffeU >> (bVar11 & 0x1f) |
                               0x379ffffe << 0x20 - (bVar11 & 0x1f));
                uVar33 = (0xfcc58b48U >> (bVar11 & 0x1f) | -0x33a74b8 << 0x20 - (bVar11 & 0x1f)) +
                         0x3d7b1e99;
                uVar80 = *(int *)(*pauVar53 + uVar77 * 4) *
                         *(int *)(&UNK_7fffa5870452 +
                                 (uint64_t)(uint32_t)((int)sVar32 << 3) * 4 +
                                 (int64_t)(int)(uVar51 ^ 0xf5e8294f));
              }
              else {
                sVar32 = 1;
                if (*(short *)(&UNK_7fffa56c502f +
                              uVar77 * 2 +
                              (int64_t)
                              (int)((uVar51 ^ 0xf5ecf4de) << 0x1d | (uVar51 ^ 0xf5ecf4de) >> 3)) !=
                    -1) {
                  sVar32 = *(short *)(&UNK_7fffa56c502f +
                                     uVar77 * 2 +
                                     (int64_t)
                                     (int)((uVar51 ^ 0xf5ecf4de) << 0x1d |
                                          (uVar51 ^ 0xf5ecf4de) >> 3));
                }
                puVar41 = &UNK_7fffa56c5824 + (int)(0x4da39d1f - uVar51 ^ 0xbc7311d2);
                uVar33 = uVar51 + 0x678ae878;
                uVar80 = *(int *)(&UNK_7fffa5862624 +
                                 (uint64_t)(uint32_t)((int)sVar32 << 3) * 4 +
                                 (int64_t)(short)(sVar66 * -0x3874)) *
                         *(int *)(*pauVar53 + uVar77 * 4);
              }
              uVar33 = (uVar33 | 1) * 0x1d321cd;
              uVar33 = uVar33 << (bVar11 & 0x1f) | uVar33 >> 0x20 - (bVar11 & 0x1f);
              sVar32 = 1;
              if ((short)*(uint32_t *)(puVar41 + uVar69 * 2) != -1) {
                sVar32 = (short)*(uint32_t *)(puVar41 + uVar69 * 2);
              }
              uVar45 = uVar45 + (uint32_t)(*(int *)(*pauVar53 + uVar69 * 4) *
                                      *(int *)(&UNK_7fffa5870290 +
                                              (uint64_t)(uint32_t)((int)sVar32 << 3) * 4 +
                                              (int64_t)(int)(uVar33 << 3 | uVar33 >> 0x1d))) +
                       (uint64_t)uVar80;
              if ((uint64_t)(uVar70 & 0xfffffffe) - 2 == uVar69) break;
              uVar69 = uVar69 + 2;
            }
            lVar49 = uVar69 + 2;
            if ((uVar70 & 1) != 0) goto LAB_7fffa4f6433e;
          }
          uVar45 = uVar45 >> 8;
LAB_7fffa4f643b0:
          if (uVar48 != uVar34) {
            do {
              puVar78 = (uint32_t *)((int64_t)puVar37 + 1);
              uVar45 = (uint8_t)*puVar37 + uVar45;
              puVar37 = puVar78;
            } while (puVar78 < puVar86);
          }
          piStack_1c8 = (int *)(uVar45 >> 3);
        }
        else {
          if (uVar51 + 0x38297a78 < 0x6624b3ff - uVar51 && uVar80 == 1) {
LAB_7fffa4f63ee0:
            uVar45 = 0;
            goto LAB_7fffa4f643b0;
          }
LAB_7fffa4f63e66:
          if ((uVar80 & 0xfffffffe) != 2) goto LAB_7fffa4f63ee0;
          uVar42 = *(uint16_t *)(lVar72 + 0x810);
          bVar59 = (uint8_t)uVar42;
          lVar49 = (int64_t)(1 << (bVar59 - 1 & 0x1f));
          if (uVar42 == 0) {
            lVar49 = 1;
          }
          if (uVar70 <= *(uint16_t *)(lVar72 + 0x812)) {
            uVar43 = (uint32_t)uVar42 * 0x100;
            uVar33 = (uint32_t)uVar35;
            uVar80 = uVar43 ^ uVar33;
            if ((uVar51 ^ 0x95fdb83e) * -0x53215b7d != 0x7e1ae0cd) {
              uVar80 = uVar33 + (uint32_t)uVar42 * -0x100;
            }
            uVar46 = ~uVar33 & ~uVar43;
            iVar83 = uVar46 * -0x100;
            if ((int64_t)
                (uint64_t)(-0x5637e23f << (bVar11 & 0x1f) | 0xa9c81dc1U >> 0x20 - (bVar11 & 0x1f))
                <= (int64_t)
                   (int)(0x7aedeb28 - uVar51 >> 1 | (uint32_t)((0x7aedeb28 - uVar51 & 1) != 0) << 0x1f))
            {
              iVar83 = uVar46 + 0x100;
            }
            uVar69 = 0;
            uVar45 = 0;
            while( true ) {
              uVar46 = *(uint32_t *)(((uint64_t)
                                  ((uint32_t)(uint16_t)((uVar9 ^ 0xb4fa) << 3 | (uVar9 ^ 0xb4fa) >> 0xd) *
                                  0x2203) & 0xffff) + lVar49 * 4 + lVar72 + 4 + uVar69 * 8);
              iVar52 = (uVar46 >> 0x10) + 1;
              if ((uint64_t)*(uint32_t *)(*pauVar53 + uVar69 * 4) != 0) {
                uVar46 = iVar52 * 0x100 -
                         (iVar52 * 0x1000000 + (uVar46 + (1 << (bVar59 & 0x1f))) * -0x100 >>
                         (bVar59 & 0x1f));
                if (iVar83 + (~uVar43 & uVar33) * 0x119af635 +
                             (uVar43 & uVar33) * -0x690b26bd + (uVar43 | uVar33) * 0x690b25be +
                             uVar80 * (-0x708ee0a2 - uVar51) +
                             ((uVar33 ^ 0xffffffff) & uVar43) *
                             ((uVar51 + 0x4bb8328c ^ 0x46e6ab34) +
                              ((uVar51 ^ 0x3eb5eee5) << 0x10 | (uVar51 ^ 0x3eb5eee5) >> 0x10) +
                             0x2bbcfbab) <= uVar46) goto LAB_7fffa4f63eb1;
                uVar45 = uVar45 + (uint64_t)*(uint32_t *)(*pauVar53 + uVar69 * 4) * (uint64_t)uVar46;
              }
              if (uVar70 == uVar69) break;
              uVar69 = uVar69 + 1;
            }
            uVar45 = uVar45 >> 8;
            goto LAB_7fffa4f643b0;
          }
LAB_7fffa4f63eb1:
          piStack_1c8 = (int *)(uVar64 * 10);
        }
        puVar86 = (uint32_t *)((int64_t)puVar36 + uVar64);
        uVar80 = *(uint32_t *)(param_3 + 0x13c8);
        if (uVar64 < 0x5dc) {
          pauVar53[8] = (uint8_t  [16])0x0;
          pauVar53[7] = (uint8_t  [16])0x0;
          pauVar53[6] = (uint8_t  [16])0x0;
          pauVar53[5] = (uint8_t  [16])0x0;
          pauVar53[4] = (uint8_t  [16])0x0;
          pauVar53[3] = (uint8_t  [16])0x0;
          pauVar53[2] = (uint8_t  [16])0x0;
          pauVar53[1] = (uint8_t  [16])0x0;
          *pauVar53 = (uint8_t  [16])0x0;
          puVar37 = puVar36;
          if (uVar48 == uVar34) {
            uVar45 = 0;
          }
          else {
            do {
              puVar78 = (uint32_t *)((int64_t)puVar37 + 1);
              *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar37 * 4) =
                   *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar37 * 4) + 1;
              puVar37 = puVar78;
            } while (puVar78 < puVar86);
            uVar45 = 0x23;
            while( true ) {
              uVar70 = (uint32_t)uVar45;
              uVar69 = (int64_t)(int)uVar70;
              if (uVar51 + 0x2b21d7ab <=
                  (0xfdfcae77U >> (bVar11 & 0x1f) | -0x2035189 << 0x20 - (bVar11 & 0x1f)) *
                  0x1854bf7) {
                uVar69 = uVar45;
              }
              if (*(int *)(*pauVar53 + uVar69 * 4) != 0) break;
              uVar45 = (uint64_t)(uVar70 - 1);
            }
            if (6 < uVar70) {
              uVar69 = uVar69 + 1 & 0x1fffffff8;
              do {
                uVar69 = uVar69 - 8;
              } while (uVar69 != 0);
            }
          }
        }
        else {
          uVar45 = 0x23;
          if (((uint64_t)pauVar53 & 3) == 0) {
            FUN_7fffa4ecf8e0(pauVar53,0,0x1000);
            puVar37 = puVar36;
            if ((int64_t)(uint64_t)((uVar51 + 0xd7e2) * -0x7b5f & 0xffff) < (int64_t)uVar64) {
              uVar70 = *puVar36;
              puVar78 = puVar36;
              do {
                uVar33 = puVar78[1];
                *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) =
                     *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) + 1;
                *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) =
                     *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) + 1;
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                uVar43 = uVar33 >> 8 & 0xff;
                if ((int64_t)
                    (uint64_t)
                    (0x1bb68060 << (bVar11 & 0x1f) | 0x1bb68060U >> 0x20 - (bVar11 & 0x1f)) <
                    (int64_t)(int)(uVar51 + 0xae879af6)) {
                  uVar43 = (uVar33 & 0xffffff00) - (uVar33 >> 8);
                }
                if ((-0x29a34a26 << (bVar11 & 0x1f) | 0xd65cb5daU >> 0x20 - (bVar11 & 0x1f)) ==
                    0x6bb5acb9) {
                  bVar59 = (uint8_t)((uVar51 ^ 0x654739cb) + 0x79a5d309 >> 2);
                  uVar45 = (uint64_t)((uVar33 >> 0x10) - 0xff);
                  if (((uVar51 ^ 0x3f11ad1) << 0x1d | (uVar51 ^ 0x3f11ad1) >> 3) < 0x5c783e7a) {
                    uVar45 = (uint64_t)(uint8_t)(uVar33 >> 0x10);
                  }
                  iVar83 = *(int *)(pauVar53[0x80] + uVar45 * 4) + 1;
                }
                else {
                  uVar45 = (uint64_t)(uVar33 >> 0x10) & 0xff;
                  bVar59 = (uint8_t)(uVar82 * -0x445faf88 >> 0x17);
                  iVar83 = *(int *)(pauVar53[0x80] + uVar45 * 4) +
                           (uint32_t)((-0x4117da53 << (bVar11 & 0x1f) |
                                  0xbee825adU >> 0x20 - (bVar11 & 0x1f)) != 0x35eb6135) * 2 + -1;
                }
                *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) + 1;
                iVar52 = *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar33 * 4);
                iVar85 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4);
                iVar67 = *(int *)(pauVar53[0x40] + (uint64_t)uVar43 * 4);
                uVar70 = puVar78[2];
                *(int *)(pauVar53[0x80] + uVar45 * 4) = iVar83;
                *(int *)(pauVar53[0x40] + (uint64_t)uVar43 * 4) = iVar67 + 1;
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) = iVar85 + 1;
                *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar33 * 4) = iVar52 + 1;
                uVar33 = puVar78[3];
                *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) + 1;
                uVar43 = uVar70 >> 0x10 & 0xff;
                if ((0x63dbff42 - uVar51 >> (bVar59 & 0x1f) |
                    0x63dbff42 - uVar51 << 0x20 - (bVar59 & 0x1f)) == 0x3f005e87) {
                  uVar43 = (uVar70 >> 0x10) - 0xff;
                }
                *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) =
                     *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) + 1;
                uVar45 = (uint64_t)(uVar33 >> 8 & 0xff);
                iVar83 = *(int *)(pauVar53[0x40] + uVar45 * 4);
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                iVar52 = *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4);
                iVar85 = *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4);
                *(int *)(pauVar53[0x80] + (uint64_t)uVar43 * 4) =
                     *(int *)(pauVar53[0x80] + (uint64_t)uVar43 * 4) + 1;
                uVar70 = puVar78[4];
                *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) = iVar52 + 1;
                uVar43 = uVar33 >> 0xe & 0x3fc;
                iVar52 = *(int *)(pauVar53[0x80] + uVar43);
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) = iVar85 + 1;
                *(int *)(pauVar53[0x40] + uVar45 * 4) = iVar83 + 1;
                puVar37 = puVar78 + 4;
                *(int *)(pauVar53[0x80] + uVar43) = iVar52 + 1;
                puVar39 = puVar78 + 5;
                puVar78 = puVar37;
              } while (puVar39 < (uint32_t *)((int64_t)puVar86 - 0xfU));
            }
            uVar45 = (int64_t)puVar37 - (int64_t)puVar86;
            bVar91 = (int64_t)puVar86 < (int64_t)puVar37;
            if ((int64_t)(int)(uVar51 + 0x87b7648f) != (uint64_t)(uVar51 + 0xb5e8c43d)) {
              bVar91 = puVar37 < puVar86;
            }
            if (bVar91) {
              uVar70 = (int)puVar86 - (int)puVar37 & 3;
              if (uVar70 != 0) {
                uVar69 = 0;
                do {
                  uVar33 = uVar82 * 0x730c1276 ^ 0x1217cd5a;
                  bVar90 = uVar69 < uVar70;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar37 + uVar69) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar37 + uVar69) * 4) +
                       1;
                  bVar91 = (uint64_t)uVar70 - 1 == uVar69;
                  uVar69 = uVar69 + 1;
                  if ((uVar82 * -0x72d2493b >> 1 | (uint32_t)((uVar82 * -0x72d2493b & 1) != 0) << 0x1f)
                      < (uVar33 << 9 | uVar33 >> 0x17)) {
                    bVar91 = bVar90;
                  }
                } while (!bVar91);
                puVar37 = (uint32_t *)((int64_t)puVar37 + uVar69);
              }
              if (uVar45 < 0xfffffffffffffffd) {
                do {
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar37 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar37 * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar37 + 1) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar37 + 1) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar37 + 2) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar37 + 2) * 4) + 1;
                  pbVar1 = (uint8_t *)((int64_t)puVar37 + 3);
                  puVar37 = puVar37 + 1;
                  *(int *)(*pauVar53 + (uint64_t)*pbVar1 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*pbVar1 * 4) + 1;
                } while (puVar37 < puVar86);
              }
            }
            uVar45 = 0;
            do {
              piVar6 = (int *)(pauVar53[0xc0] + uVar45 * 4);
              iVar83 = piVar6[1];
              iVar52 = piVar6[2];
              iVar85 = piVar6[3];
              piVar7 = (int *)(pauVar53[0x80] + uVar45 * 4);
              iVar67 = piVar7[1];
              iVar81 = piVar7[2];
              iVar87 = piVar7[3];
              piVar8 = (int *)(pauVar53[0x40] + uVar45 * 4);
              iVar12 = piVar8[1];
              iVar13 = piVar8[2];
              iVar14 = piVar8[3];
              piVar4 = (int *)(*pauVar53 + uVar45 * 4);
              iVar15 = piVar4[1];
              iVar16 = piVar4[2];
              iVar17 = piVar4[3];
              piVar5 = (int *)(pauVar53[1] + uVar45 * 4);
              iVar18 = *piVar5;
              iVar19 = piVar5[1];
              iVar20 = piVar5[2];
              iVar21 = piVar5[3];
              piVar5 = (int *)(pauVar53[0x81] + uVar45 * 4);
              iVar22 = *piVar5;
              iVar23 = piVar5[1];
              iVar24 = piVar5[2];
              iVar25 = piVar5[3];
              piVar5 = (int *)(*pauVar53 + uVar45 * 4);
              *piVar5 = *piVar4 + *piVar7 + *piVar8 + *piVar6;
              piVar5[1] = iVar15 + iVar67 + iVar12 + iVar83;
              piVar5[2] = iVar16 + iVar81 + iVar13 + iVar52;
              piVar5[3] = iVar17 + iVar87 + iVar14 + iVar85;
              piVar4 = (int *)(pauVar53[0x41] + uVar45 * 4);
              iVar83 = piVar4[1];
              iVar52 = piVar4[2];
              iVar85 = piVar4[3];
              piVar6 = (int *)(pauVar53[0xc1] + uVar45 * 4);
              iVar67 = piVar6[1];
              iVar81 = piVar6[2];
              iVar87 = piVar6[3];
              piVar5 = (int *)(pauVar53[1] + uVar45 * 4);
              *piVar5 = *piVar6 + iVar22 + *piVar4 + iVar18;
              piVar5[1] = iVar67 + iVar23 + iVar83 + iVar19;
              piVar5[2] = iVar81 + iVar24 + iVar52 + iVar20;
              piVar5[3] = iVar87 + iVar25 + iVar85 + iVar21;
              uVar45 = uVar45 + 8;
            } while (uVar45 != (uVar51 + 0x8cfde10e) * 0x384aa1e3 + 0x7b5836c3);
            uVar45 = 0x100;
            do {
              uVar45 = (uint64_t)((int)uVar45 - 1);
            } while (((uVar51 + 0xe5ffe7ae) * 0x200000 | uVar51 + 0xe5ffe7ae >> 0xb) < 0x509d6deb ||
                     *(int *)(*pauVar53 + uVar45 * 4) == 0);
          }
        }
        if ((int)uVar80 < 1) {
          if (uVar80 != 0) goto LAB_7fffa4f64a41;
          uVar80 = (uint32_t)uVar45 + 1;
          if (uVar80 < 2) {
            lVar49 = 0;
            uStack_168 = 0;
LAB_7fffa4f65bea:
            sVar66 = *(short *)(&UNK_7fffa5708404 + lVar49 * 2 + (int64_t)(int)(0xa163fdd - uVar51)
                               );
            if (*(short *)(&UNK_7fffa5708404 + lVar49 * 2 + (int64_t)(int)(0xa163fdd - uVar51)) ==
                -1) {
              sVar66 = 1;
            }
            uStack_168 = uStack_168 +
                         ((uint64_t)
                          *(uint32_t *)(&UNK_7fffa5863341 +
                                   (uint64_t)(uint32_t)((int)sVar66 << 2) * 4 +
                                   (int64_t)
                                   (short)~(0x33a0U >> (bVar11 & 0xf) |
                                           0x33a0 << 0x10 - (bVar11 & 0xf))) *
                          (uint64_t)*(uint32_t *)(*pauVar53 + lVar49 * 4) & 0xffffffff);
          }
          else {
            uVar45 = (uint64_t)uVar80 * 0xfffffffe;
            if ((0xc80e5162U >> (bVar11 & 0x1f) | -0x37f1ae9e << 0x20 - (bVar11 & 0x1f)) !=
                (uVar82 * 0x3c8f8000 | uVar82 * 0x6ed0f23e >> 0x12)) {
              uVar45 = (uint64_t)(uVar80 & 0xfffffffe);
            }
            lVar49 = 0;
            uStack_168 = 0;
            while( true ) {
              uVar70 = uVar51 + 0x3aa16982 >> 0x12;
              uVar33 = (uVar51 + 0x3aa16982) * 0x4000 | uVar70;
              sVar65 = (short)uVar33;
              uVar42 = 0xcfdd - sVar65;
              bVar59 = (uint8_t)uVar70 & 0x1f;
              uVar33 = uVar33 | 1;
              sVar32 = *(short *)(&UNK_7fffa56f9467 +
                                 lVar49 * 2 +
                                 (int64_t)(short)((uVar42 * 4 | uVar42 >> 0xe) * sVar66 + -0x2744))
              ;
              if (sVar32 == -1) {
                sVar32 = 1;
              }
              sVar54 = 1;
              if ((short)*(uint32_t *)
                          (&UNK_7fffa5704b32 +
                          lVar49 * 2 +
                          (int64_t)(int)~(0xe840003 << bVar59 | 0xe840003U >> 0x20 - bVar59)) != -1
                 ) {
                sVar54 = (short)*(uint32_t *)
                                 (&UNK_7fffa5704b32 +
                                 lVar49 * 2 +
                                 (int64_t)(int)~(0xe840003 << bVar59 | 0xe840003U >> 0x20 - bVar59)
                                 );
              }
              uVar43 = ~(0x31a8c << (bVar11 & 0x1f) | 0x31a8cU >> 0x20 - (bVar11 & 0x1f));
              uVar70 = (uint32_t)((uint64_t)(int64_t)sVar32 >> 2);
              if ((uint64_t)(uVar33 * 0x6a184b61) <=
                  (uint64_t)
                  (int64_t)
                  (int)((((uVar51 + 0xa9bbffe9) * 0x10000 | uVar51 + 0xa9bbffe9 >> 0x10) +
                        0xad49b625) * uVar33)) {
                uVar70 = (int)sVar32 << 2;
              }
              uStack_168 = (uint64_t)
                           (uint32_t)(*(int *)(*pauVar53 + lVar49 * 4 + 4) *
                                 *(int *)(&UNK_7fffa5868138 +
                                         (uint64_t)(uVar70 & 0xfffffffc) * 4 +
                                         (int64_t)(short)((sVar66 * 0x27cc - sVar65) + 0x1da))) +
                           (uint32_t)(*(int *)((int64_t)(int)(uVar43 << 0xd | uVar43 >> 0x13) +
                                           0x7fffa586e014 + (uint64_t)(uint32_t)((int)sVar54 << 2) * 4)
                                 * *(int *)(*pauVar53 + lVar49 * 4)) + uStack_168;
              if (uVar45 - 2 == lVar49) break;
              lVar49 = lVar49 + 2;
            }
            lVar49 = lVar49 + 2;
            if ((uVar80 & 1) != 0) goto LAB_7fffa4f65bea;
          }
          uStack_168 = uStack_168 >> 8;
LAB_7fffa4f64a4f:
          bVar91 = uVar48 != uVar34 && (int64_t)uVar34 <= (int64_t)uVar48;
          if ((0x819408f4 - uVar51 ^ 0x7ffe0330) <= uVar82 * 0x205cfb41 + 0xe8f6d699) {
            bVar91 = uVar48 == uVar34;
          }
          if (!bVar91) {
            do {
              uVar80 = *puVar36;
              puVar36 = (uint32_t *)((int64_t)puVar36 + 1);
              uStack_168 = uStack_168 +
                           (uint8_t)(&UNK_7fffa5867bae)
                                 [(uint64_t)(uint8_t)uVar80 +
                                  (int64_t)
                                  (int)((uVar51 + 0x55e8b223) * 8 | uVar51 + 0x55e8b223 >> 0x1d)];
            } while (puVar36 < puVar86);
          }
          uStack_168 = uStack_168 >> 3;
        }
        else {
          if (uVar80 == 1) {
LAB_7fffa4f64a4d:
            uStack_168 = 0;
            goto LAB_7fffa4f64a4f;
          }
LAB_7fffa4f64a41:
          if ((uVar80 & 0xfffffffe) != 2) goto LAB_7fffa4f64a4d;
          uVar42 = *(uint16_t *)(lVar72 + 0x10c0);
          bVar59 = (uint8_t)uVar42;
          uVar80 = 1 << (bVar59 - 1 & 0x1f);
          uVar69 = (int64_t)(int)uVar80;
          if ((uint64_t)(int64_t)(int)(uVar51 ^ 0xe7ce863b) <=
              (uint64_t)(0x13a5e965 << (bVar11 & 0x1f) | 0x13a5e965U >> 0x20 - (bVar11 & 0x1f))) {
            uVar69 = (uint64_t)uVar80;
          }
          if (uVar42 == 0) {
            uVar69 = 1;
          }
          if ((uint32_t)uVar45 <= (uint32_t)*(uint16_t *)(lVar72 + 0x10c2)) {
            uVar77 = 0;
            uStack_168 = 0;
            while( true ) {
              uVar80 = *(uint32_t *)(lVar72 + uVar69 * 4 + 0x10c8 + uVar77 * 8);
              iVar83 = (uVar80 >> 0x10) + 1;
              if ((uint64_t)*(uint32_t *)(*pauVar53 + uVar77 * 4) != 0) {
                uVar80 = iVar83 * 0x100 -
                         (iVar83 * 0x1000000 + (uVar80 + (1 << (bVar59 & 0x1f))) * -0x100 >>
                         (bVar59 & 0x1f));
                if ((uint32_t)uVar42 * 0x100 + 0x100 <= uVar80) goto LAB_7fffa4f64eac;
                uStack_168 = uStack_168 +
                             (uint64_t)*(uint32_t *)(*pauVar53 + uVar77 * 4) * (uint64_t)uVar80;
              }
              if (uVar45 == uVar77) break;
              uVar77 = uVar77 + 1;
            }
            uStack_168 = uStack_168 >> 8;
            goto LAB_7fffa4f64a4f;
          }
LAB_7fffa4f64eac:
          uStack_168 = uVar64 * 10;
        }
        puVar86 = (uint32_t *)((int64_t)puVar84 + uVar64);
        uVar80 = *(uint32_t *)(param_3 + uVar62);
        if (uVar64 < 0x5dc) {
          bVar91 = uVar48 <= uVar34;
          if ((int64_t)(uint64_t)((uVar51 + 0xe5d99d5b) * 0x10a3a1fd) <=
              (int64_t)(param_2 - 0x800315f7b35 ^ 0xffffffffd8b7c325)) {
            bVar91 = uVar48 == uVar34;
          }
          pauVar53[0xc] = (uint8_t  [16])0x0;
          pauVar53[0xb] = (uint8_t  [16])0x0;
          pauVar53[10] = (uint8_t  [16])0x0;
          pauVar53[9] = (uint8_t  [16])0x0;
          pauVar53[8] = (uint8_t  [16])0x0;
          pauVar53[7] = (uint8_t  [16])0x0;
          pauVar53[6] = (uint8_t  [16])0x0;
          pauVar53[5] = (uint8_t  [16])0x0;
          pauVar53[4] = (uint8_t  [16])0x0;
          pauVar53[3] = (uint8_t  [16])0x0;
          pauVar53[2] = (uint8_t  [16])0x0;
          pauVar53[1] = (uint8_t  [16])0x0;
          *pauVar53 = (uint8_t  [16])0x0;
          *(uint32_t *)pauVar53[0xd] = 0;
          uVar70 = 0;
          if (!bVar91) {
            puVar36 = puVar84;
            do {
              puVar37 = (uint32_t *)((int64_t)puVar36 + 1);
              uVar70 = *(uint32_t *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) + 1;
              if (0xa38bd814 < ((0x31da25a - uVar51) * 0x40000000 | 0x31da25a - uVar51 >> 2)) {
                uVar70 = *(uint32_t *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) & 1;
              }
              *(uint32_t *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) = uVar70;
              puVar36 = puVar37;
            } while (puVar37 < puVar86);
            uVar45 = 0x35;
            uVar33 = 0x34;
            do {
              uVar69 = (uint64_t)uVar33;
              uVar70 = (int)uVar45 - 1;
              uVar45 = (uint64_t)uVar70;
              uVar33 = uVar33 - 1;
            } while (*(int *)(*pauVar53 + uVar45 * 4) == 0);
            if (6 < uVar70) {
              uVar45 = uVar69 + 1 & 0xfffffffffffffff8;
              do {
                uVar45 = uVar45 - 8;
              } while (uVar45 != 0);
            }
          }
        }
        else {
          uVar70 = 0x34;
          if (((uint64_t)pauVar53 & 3) == 0) {
            FUN_7fffa4ecf8e0(pauVar53,0,0x1000);
            puVar36 = puVar84;
            if (0x13 < (int64_t)uVar64) {
              uVar70 = *puVar84;
              puVar37 = puVar84;
              do {
                uVar33 = puVar37[1];
                uVar45 = (uint64_t)(uVar33 & 0xff);
                *(uint32_t *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) =
                     *(int *)(pauVar53[0x40] + (uint64_t)(uVar70 >> 8 & 0xff) * 4) +
                     (uint32_t)(0x403e9ab5 <
                           ((0xf1b59db5 - uVar51) * 0x4000 | 0xf1b59db5 - uVar51 >> 0x12));
                uVar43 = uVar33 >> 0x10 & 0xff;
                if ((uVar51 + 0x9543fd83 ^ 0xcf75b046) <
                    (-0x2025d064 << (bVar11 & 0x1f) | 0xdfda2f9cU >> 0x20 - (bVar11 & 0x1f)) *
                    -0x3e6a696b) {
                  uVar46 = (uVar33 >> 0x10) * 0xff;
                  if ((uVar51 ^ 0x95860d9f) + 0x829fe021 < uVar82 * 0x5232700b) {
                    uVar46 = uVar43;
                  }
                  *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) =
                       *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) + 1;
                  uVar69 = (uint64_t)(uVar46 << 2);
                  iVar83 = *(int *)(pauVar53[0x80] + uVar69);
                  *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) =
                       *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                  bVar59 = (uint8_t)(0xd1f60cb5 - uVar51 >> 0x12);
                }
                else {
                  *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) =
                       *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                  uVar69 = (uint64_t)(uVar43 << 2);
                  iVar83 = *(int *)(pauVar53[0x80] + uVar69);
                  *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) =
                       *(int *)(pauVar53[0x80] + (uVar70 >> 0xe & 0x3fc)) + 1;
                  bVar59 = (char)(-0x3f0f78a1 - uVar51) * '\x10' |
                           (uint8_t)(-0x3f0f78a1 - uVar51 >> 0x1c);
                }
                uVar77 = (uint64_t)(uVar33 >> 8 & 0xff);
                *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uVar70 & 0xff) * 4) + 1;
                uVar70 = puVar37[2];
                iVar85 = *(int *)(pauVar53[0x40] + uVar77 * 4) + 1;
                uVar43 = 0x24e4064 << (bVar11 & 0x1f) | 0x24e4064U >> 0x20 - (bVar11 & 0x1f);
                iVar52 = *(int *)(*pauVar53 + uVar45 * 4) + 1;
                bVar50 = (uint8_t)(uVar70 >> 8);
                if ((int64_t)
                    (uint64_t)
                    ((0xf79b3532U >> (bVar59 & 0x1f) | -0x864cace << 0x20 - (bVar59 & 0x1f)) -
                    uVar51) < (int64_t)
                              (int)(uVar43 >> (bVar59 & 0x1f) | uVar43 << 0x20 - (bVar59 & 0x1f))) {
                  *(int *)(*pauVar53 + uVar45 * 4) = iVar52;
                  *(int *)(pauVar53[0x40] + uVar77 * 4) = iVar85;
                  *(int *)(pauVar53[0x80] + uVar69) = iVar83 + 1;
                  iVar85 = *(int *)(pauVar53[0x40] + (uint64_t)bVar50 * 4);
                }
                else {
                  *(int *)(pauVar53[0x40] + uVar77 * 4) = iVar85;
                  iVar85 = *(int *)(pauVar53[0x40] + (uint64_t)bVar50 * 4);
                  *(int *)(pauVar53[0x80] + uVar69) = iVar83 + 1;
                  *(int *)(*pauVar53 + uVar45 * 4) = iVar52;
                }
                iVar83 = *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4);
                uVar43 = uVar70 >> 0xe & 0x3fc;
                iVar52 = *(int *)(pauVar53[0x80] + uVar43);
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) + 1;
                uVar33 = puVar37[3];
                *(int *)(pauVar53[0x80] + uVar43) = iVar52 + 1;
                uVar43 = uVar33 >> 0xe & 0x3fc;
                iVar52 = *(int *)(pauVar53[0x80] + uVar43);
                *(int *)(*pauVar53 + (uint64_t)(uint8_t)uVar70 * 4) = iVar83 + 1;
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar70 >> 0x18) * 4) + 1;
                *(int *)(pauVar53[0x40] + (uint64_t)bVar50 * 4) = iVar85 + 1;
                uVar45 = (uint64_t)(uVar33 >> 8 & 0xff);
                iVar83 = *(int *)(pauVar53[0x40] + uVar45 * 4);
                uVar70 = puVar37[4];
                *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) =
                     *(int *)(pauVar53[0xc0] + (uint64_t)(uVar33 >> 0x18) * 4) + 1;
                *(int *)(pauVar53[0x80] + uVar43) = iVar52 + 1;
                *(int *)(pauVar53[0x40] + uVar45 * 4) = iVar83 + 1;
                *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) =
                     *(int *)(*pauVar53 + (uint64_t)(uVar33 & 0xff) * 4) + 1;
                puVar36 = puVar37 + 4;
                puVar78 = puVar37 + 5;
                puVar37 = puVar36;
              } while (puVar78 < (uint32_t *)((int64_t)puVar86 - 0xfU));
            }
            uVar45 = (int64_t)puVar36 - (int64_t)puVar86;
            if (puVar36 < puVar86) {
              uVar70 = (int)puVar86 - (int)puVar36 & 3;
              uVar69 = (uint64_t)uVar70;
              puVar37 = puVar36;
              if (uVar70 != 0) {
                do {
                  uVar69 = uVar69 - 1;
                  puVar36 = (uint32_t *)((int64_t)puVar37 + 1);
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar37 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar37 * 4) + 1;
                  puVar37 = puVar36;
                } while (uVar69 != 0);
              }
              if (uVar45 < 0xfffffffffffffffd) {
                do {
                  *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) =
                       *(int *)(*pauVar53 + (uint64_t)(uint8_t)*puVar36 * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 1) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 2) * 4) + 1;
                  *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 3) * 4) =
                       *(int *)(*pauVar53 + (uint64_t)*(uint8_t *)((int64_t)puVar36 + 3) * 4) + 1;
                  puVar36 = puVar36 + 1;
                } while (puVar36 < puVar86);
              }
            }
            uVar45 = 0;
            do {
              piVar6 = (int *)(pauVar53[0xc1] + uVar45 * 4);
              iVar83 = piVar6[1];
              iVar52 = piVar6[2];
              iVar85 = piVar6[3];
              auVar105 = *(uint8_t (*) [16])(*pauVar53 + uVar45 * 4);
              piVar5 = (int *)(pauVar53[1] + uVar45 * 4);
              iVar67 = piVar5[1];
              iVar81 = piVar5[2];
              iVar87 = piVar5[3];
              piVar4 = (int *)(pauVar53[0x80] + uVar45 * 4);
              iVar12 = *piVar4;
              iVar13 = piVar4[1];
              iVar14 = piVar4[2];
              iVar15 = piVar4[3];
              piVar4 = (int *)(pauVar53[0xc0] + uVar45 * 4);
              iVar16 = *piVar4;
              iVar17 = piVar4[1];
              iVar18 = piVar4[2];
              iVar19 = piVar4[3];
              piVar7 = (int *)(pauVar53[0x81] + uVar45 * 4);
              iVar20 = piVar7[1];
              iVar21 = piVar7[2];
              iVar22 = piVar7[3];
              piVar8 = (int *)(pauVar53[0x41] + uVar45 * 4);
              iVar23 = piVar8[1];
              iVar24 = piVar8[2];
              iVar25 = piVar8[3];
              piVar4 = (int *)(pauVar53[1] + uVar45 * 4);
              *piVar4 = *piVar8 + *piVar7 + *piVar5 + *piVar6;
              piVar4[1] = iVar23 + iVar20 + iVar67 + iVar83;
              piVar4[2] = iVar24 + iVar21 + iVar81 + iVar52;
              piVar4[3] = iVar25 + iVar22 + iVar87 + iVar85;
              piVar5 = (int *)(pauVar53[0x40] + uVar45 * 4);
              iVar83 = piVar5[1];
              iVar52 = piVar5[2];
              iVar85 = piVar5[3];
              auVar99 = auVar105;
              if (0xda674736 < (int64_t)(int)(uVar82 * -0x4218f993 + -0x6bc21d20)) {
                auVar99._4_4_ = -auVar105._4_4_;
                auVar99._0_4_ = -auVar105._0_4_;
                auVar99._8_4_ = -auVar105._8_4_;
                auVar99._12_4_ = SUB164((uint8_t  [16])0x0,0xc) - auVar105._12_4_;
              }
              piVar4 = (int *)(*pauVar53 + uVar45 * 4);
              *piVar4 = iVar16 + *piVar5 + iVar12 + auVar99._0_4_;
              piVar4[1] = iVar17 + iVar83 + iVar13 + auVar99._4_4_;
              piVar4[2] = iVar18 + iVar52 + iVar14 + auVar99._8_4_;
              piVar4[3] = iVar19 + iVar85 + iVar15 + auVar99._12_4_;
              uVar45 = uVar45 + 8;
            } while (uVar45 != uVar82 * 0x38cb100);
            uVar45 = 0xff;
            while (uVar70 = (uint32_t)uVar45,
                  *(uint32_t *)(*pauVar53 + uVar45 * 4) ==
                  (uint32_t)(uint16_t)((uVar9 ^ 0x3c51) << 1 | (uint16_t)((short)(uVar9 ^ 0x3c51) < 0))) {
              uVar45 = (uint64_t)(uVar70 - 1);
            }
          }
        }
        if ((int)uVar80 < 1) {
          if (uVar80 != (uint16_t)(((0x213e - uVar9) * 0x20 | (uint16_t)(0x213e - uVar9) >> 0xb) ^
                                0x9dbc)) goto LAB_7fffa4f65581;
          uVar70 = uVar70 + 1;
          if (uVar70 < 2) {
            uVar70 = 1;
            uVar45 = 0;
            uVar69 = 0;
          }
          else {
            uVar45 = 0;
            uVar69 = 0;
            do {
              sVar66 = 1;
              if ((short)*(uint32_t *)
                          (&UNK_7fffa578099c +
                          uVar45 * 2 +
                          (int64_t)(short)((uVar9 ^ 0xb81e) << 0xc | (uVar9 ^ 0xb81e) >> 4)) != -1)
              {
                sVar66 = (short)*(uint32_t *)
                                 (&UNK_7fffa578099c +
                                 uVar45 * 2 +
                                 (int64_t)(short)((uVar9 ^ 0xb81e) << 0xc | (uVar9 ^ 0xb81e) >> 4))
                ;
              }
              sVar32 = *(short *)(&UNK_7fffa578d220 +
                                 uVar45 * 2 +
                                 (int64_t)
                                 (int)((0x71a57105 << (bVar11 & 0x1f) |
                                       0x71a57105U >> 0x20 - (bVar11 & 0x1f)) * -0x3fffff73));
              if (sVar32 == -1) {
                sVar32 = 1;
              }
              lVar72 = uVar45 * 4;
              lVar49 = uVar45 * 4;
              uVar45 = uVar45 + 2;
              uVar69 = uVar69 + (uint32_t)(*(int *)(&UNK_7fffa586f727 +
                                               (uint64_t)(uint32_t)((int)sVar66 << 2) * 4 +
                                               (int64_t)(int)(uVar82 * -0x56fe5f87)) *
                                      *(int *)(*pauVar53 + lVar49)) +
                       (uint64_t)
                       (uint32_t)(*(int *)(&UNK_7fffa5861970 + (uint64_t)(uint32_t)((int)sVar32 << 2) * 4)
                             * *(int *)(*pauVar53 + lVar72 + 4));
            } while ((uVar70 & 0xfffffffe) != uVar45);
          }
          uVar77 = uVar69;
          if ((uVar70 & 1) != 0) {
            sVar66 = *(short *)(&UNK_7fffa5783dad +
                               uVar45 * 2 + (int64_t)(short)((uVar9 ^ 0x871e) + 0x8e4));
            if (*(short *)(&UNK_7fffa5783dad +
                          uVar45 * 2 + (int64_t)(short)((uVar9 ^ 0x871e) + 0x8e4)) == -1) {
              sVar66 = 1;
            }
            uVar77 = (int64_t)sVar66 << 2 & 0xffffffff;
            if ((uint64_t)(int64_t)(int)(uVar82 * 0x37848bf7 + -0x3057776d) <=
                (uint64_t)(0x3ff37537 - (uVar51 + 0x8a1b5fa1))) {
              uVar77 = (int64_t)sVar66 << 2 ^ 0xfffffffc;
            }
            uVar45 = (uint64_t)
                     (uint32_t)(*(int *)(*pauVar53 + uVar45 * 4) *
                           *(int *)(&UNK_7fffa586d951 +
                                   uVar77 * 4 + (int64_t)(int)(uVar51 + 0xf5e803ce)));
            uVar77 = uVar69 | uVar45;
            if (~(uVar51 ^ 0xb1fbdd42) <= 0x3f22727 - uVar51) {
              uVar77 = uVar45 + uVar69;
            }
          }
LAB_7fffa4f6596f:
          uVar77 = uVar77 >> 8;
LAB_7fffa4f65977:
          if (uVar48 != uVar34) {
            do {
              uVar80 = *puVar84;
              puVar84 = (uint32_t *)((int64_t)puVar84 + 1);
              uVar77 = uVar77 + (uint8_t)(&UNK_7fffa56ef7cd)
                                      [(uint64_t)(uint8_t)uVar80 + (int64_t)(short)(uVar9 + 0x8082)];
            } while (puVar84 < puVar86);
          }
          uVar77 = uVar77 >> 3;
        }
        else {
          if (uVar80 == 1) {
LAB_7fffa4f656b0:
            uVar77 = 0;
            goto LAB_7fffa4f65977;
          }
LAB_7fffa4f65581:
          if ((uVar80 & 0xfffffffe) != 2) goto LAB_7fffa4f656b0;
          uVar42 = *(uint16_t *)(lVar72 + 0xb14);
          bVar59 = (uint8_t)uVar42;
          lVar49 = (int64_t)(1 << (bVar59 - 1 & 0x1f));
          if (uVar42 == 0) {
            lVar49 = 1;
          }
          if (uVar70 <= *(uint16_t *)(lVar72 + 0xb16)) {
            uVar45 = 0;
            uVar77 = 0;
            do {
              uVar80 = *(uint32_t *)(*pauVar53 + uVar45 * 4);
              uVar33 = *(uint32_t *)(lVar72 + lVar49 * 4 + 0xb1c + uVar45 * 8);
              iVar83 = (uVar33 >> 0x10) + 1;
              bVar91 = (int)uVar80 < 1;
              if (uVar51 != 0x2c554593) {
                bVar91 = uVar80 == 0;
              }
              if (!bVar91) {
                uVar33 = iVar83 * 0x100 -
                         (iVar83 * 0x1000000 + (uVar33 + (1 << (bVar59 & 0x1f))) * -0x100 >>
                         (bVar59 & 0x1f));
                if ((uint32_t)uVar42 * 0x100 + 0x100 <= uVar33) goto LAB_7fffa4f657eb;
                uVar77 = uVar77 + (uint64_t)uVar33 * (uint64_t)uVar80;
              }
              uVar45 = uVar45 + 1;
            } while (uVar70 + 1 != uVar45);
            goto LAB_7fffa4f6596f;
          }
LAB_7fffa4f657eb:
          uVar77 = uVar64 * 10;
        }
        lVar72 = uVar89 + (0x7f < uVar64) + -1 +
                 (uint64_t)((uVar51 ^ 0x3dabe38) + 0xf632fc96 < uVar64);
        uVar34 = (int64_t)piStack_1c8 + 6U + lVar72;
        if (((uVar51 ^ 0xd51de98e) << 0xe | (uVar51 ^ 0xd51de98e) >> 0x12) != 0xb577f7c2) {
          uVar34 = lVar72 + 6U | (uint64_t)piStack_1c8;
        }
        uVar34 = uVar34 + uStack_168 + uVar77 + *(int64_t *)(param_3 + 0x1460);
      }
      if ((uint64_t)(int64_t)(short)(0xebc6 - uVar9 ^ 0x50fc) <= uStack_1a8 ||
          0xffffffffffffff88 < uStack_210) {
        return;
      }
      if ((uint64_t)(int64_t)(short)(-0x3c << (bVar11 & 0xf) | 0xffc4U >> 0x10 - (bVar11 & 0xf))
          <= uVar34 || uStack_210 <= uStack_1a8 + uVar34) {
        return;
      }
      uVar34 = (uint64_t)(uVar51 + 0x1aaf8b8) + ~uVar55;
      (*(code *)((int64_t)
                 (int)(((uVar51 ^ 0x7e950ebd) << 0xf | (uVar51 ^ 0x7e950ebd) >> 0x11) * 0x76a66fb5)
                + 0x7fffa4f66d0b))
                ((uVar34 & 0xffffffff) * 0xffffffff + (uVar34 >> 0x20) * 0xb3512def << 0x20,
                 -0x61d77af5 << (bVar11 & 0x1f) | 0x9e28850bU >> 0x20 - (bVar11 & 0x1f),param_3,
                 param_4);
      *(int *)(*in_R10 + in_R10[1] * 4) = (int)uVar55;
      uVar45 = in_R10[1] + 1;
      in_R10[1] = uVar45;
      uVar34 = uVar55;
      if (uVar68 - uVar55 < 300) {
        return;
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x7fffa56b8440) is written */
  return;
}


// ============================================================================
// Function : FUN_7fffa4f65f60  |  RVA: 0x7f5f60  |  Size: 2237 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4f65f60(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                     uint64_t param_5)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint8_t *pbVar7;
  uint64_t uVar8;
  uint8_t *pbVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint32_t in_XMM2_Dc;
  uint32_t in_XMM2_Dd;
  
  param_3 = param_3 - (param_3 << 0x3e);
  uVar18 = param_3 + 0x7fffffffbc0469be;
  uVar17 = CONCAT44(in_XMM2_Dd,in_XMM2_Dc) << 0x26 | CONCAT44(in_XMM2_Dd,in_XMM2_Dc) >> 0x1a;
  uVar5 = (uint32_t)param_5;
  pbVar9 = (uint8_t *)(uVar17 + 0x5dfadedd);
  if (((0x6f5a5afc - uVar5) * 0x20000 | 0x6f5a5afc - uVar5 >> 0xf) == 0xb69e2fba) {
    pbVar9 = (uint8_t *)(uVar17 + 0xd7af07f2 ^ 0xffffffff864bd6eb);
  }
  if (8 < uVar18) {
    pbVar7 = pbVar9 + 8;
    uVar6 = param_5 | 1;
    uVar17 = uVar18;
    do {
      if ((((((((uint64_t)pbVar7[-5] ^
               ((((uint64_t)pbVar7[-8] ^ 0x108b312565f4a31d) * 0x1000000041b ^
                (uint64_t)pbVar7[-7]) * 0x1000000041b ^ (uint64_t)pbVar7[-6]) * 0x1000000041b) *
               0x1000000041b ^ (uint64_t)pbVar7[-4]) * (param_5 ^ 0x5805150ee7572036) * 0x5d7ff581
             ^ (uint64_t)pbVar7[-3]) * 0x1000000041b ^ (uint64_t)pbVar7[-2]) * 0x1000000041b ^
           (uint64_t)pbVar7[-1]) *
           (uVar6 * 0x4bead695965bafc2 | (uint64_t)((int64_t)(uVar6 * 0x25f56b4acb2dd7e1) < 0)) ^
          (uint64_t)*pbVar7) * 0x1000000041b == 0x3b79c894f466ec5f - param_5) {
        return;
      }
      uVar17 = uVar17 - 1;
      pbVar7 = pbVar7 + 1;
    } while (8 < uVar17);
    bVar3 = (uint8_t)param_5;
    if (0x14 < uVar18) {
      uVar13 = uVar5 | 1;
      uVar17 = uVar18;
      pbVar7 = pbVar9;
      do {
        if ((uint64_t)(0xc3f49c5e - uVar5) == 0xffffffff98ef4ae7) {
          uVar14 = 0xfdfdf079;
          uVar4 = ((uint64_t)*pbVar7 ^ 0x813a5f9c9ef14923) *
                  (0x800000024980000 << (bVar3 & 0x3f) | 0x800000024980000U >> 0x40 - (bVar3 & 0x3f)
                  );
        }
        else {
          uVar14 = (uVar5 ^ 0x3eb88645) << 0x14 | (uVar5 ^ 0x3eb88645) >> 0xc;
          uVar4 = ((uint64_t)*pbVar7 ^ 0x813a5f9c9ef14923) * 0x10000000493;
        }
        uVar8 = (uint64_t)(int)uVar14;
        uVar15 = (uVar14 + 0xf4fe2855) * uVar13;
        if ((0x25f3e4314b99aa64 - uVar8) * uVar6 + -0xf2d7e9 ==
            ((uint64_t)uVar15 ^ 0xffffffff8d041bf1) - 0x6e4a47d6) {
          uVar10 = (uVar8 ^ 0xefffffffd7b69c47) << 0x36 | (uVar8 ^ 0xefffffffd7b69c47) >> 10;
          uVar11 = uVar10 << (bVar3 & 0x3f) | uVar10 >> 0x40 - (bVar3 & 0x3f);
          bVar2 = (uint8_t)uVar15 & 0x3f;
          uVar16 = uVar13 * -0x154ea5cd + uVar15 ^ 0xe95b3bae;
          bVar1 = (uint8_t)uVar14 & 0x1f;
          uVar10 = (uint64_t)(uVar16 >> bVar1 | uVar16 << 0x20 - bVar1);
          bVar1 = (uint8_t)uVar14 & 0x3f;
          uVar12 = 0x24bffefb92711201 << bVar1 | 0x24bffefb92711201U >> 0x40 - bVar1;
          uVar12 = (uVar12 << 0x30 | uVar12 >> 0x10) + (uint64_t)uVar15;
          uVar12 = uVar12 >> (bVar3 & 0x3f) | uVar12 << 0x40 - (bVar3 & 0x3f);
          uVar4 = (((uint64_t)pbVar7[2] ^ (pbVar7[1] ^ uVar4) * 0x10000000493) *
                   (uVar11 >> bVar2 | uVar11 << 0x40 - bVar2) ^ (uint64_t)pbVar7[3]) *
                  0x10000000493;
          uVar11 = uVar4 ^ pbVar7[4];
          uVar4 = (uVar11 & 0xffffffff) * (uVar12 & 0xffffffff) +
                  ((uVar4 >> 0x20) * (uVar12 & 0xffffffff) +
                   (uVar12 >> 0x20) * (uVar11 & 0xffffffff) << 0x20);
        }
        else {
          uVar10 = (uint64_t)
                   (int)(0xc492cb2d - uVar14 << (bVar3 & 0x1f) |
                        0xc492cb2d - uVar14 >> 0x20 - (bVar3 & 0x1f));
          uVar4 = ((((uVar4 ^ pbVar7[1]) * 0x10000000493 ^ (uint64_t)pbVar7[2]) * 0x10000000493 ^
                   (uint64_t)pbVar7[3]) * 0x10000000493 ^ (uint64_t)pbVar7[4]) * 0x10000000493;
        }
        uVar15 = uVar13 * -0x7864a6a2 - uVar14;
        uVar10 = ((uint64_t)pbVar7[0xf] ^
                 (((((((uint64_t)pbVar7[9] ^
                      ((((uint64_t)pbVar7[6] ^ (uVar4 ^ pbVar7[5]) * (uVar10 + 0x1007a233fd2)) *
                        0x10000000493 ^ (uint64_t)pbVar7[7]) * 0x10000000493 ^ (uint64_t)pbVar7[8]
                      ) * 0x10000000493) * 0x10000000493 ^ (uint64_t)pbVar7[10]) * 0x10000000493 ^
                    (uint64_t)pbVar7[0xb]) * 0x10000000493 ^ (uint64_t)pbVar7[0xc]) *
                   0x10000000493 ^ (uint64_t)pbVar7[0xd]) * 0x10000000493 ^ (uint64_t)pbVar7[0xe])
                 * 0x10000000493) * 0x10000000493;
        uVar4 = uVar10 | pbVar7[0x10];
        if (((uVar14 | 1) * 0x16e0fff2 ^ uVar5) == 0x9e768bb3) {
          uVar4 = pbVar7[0x10] ^ uVar10;
        }
        uVar10 = (uVar4 * ~((uVar8 + 0xfffedb4020c67ad1 ^ 0x40b2a8e7) << 0x1a |
                           uVar8 + 0xfffedb4020c67ad1 >> 0x26) ^ (uint64_t)pbVar7[0x11]) *
                 0x10000000493;
        uVar4 = uVar10 - pbVar7[0x12];
        if ((uint64_t)(uVar15 * 0x2000000 | uVar15 >> 7) <=
            (uint64_t)(int64_t)(int)~((uVar5 + 0x7f1cc023) * 0x70c07a0d)) {
          uVar4 = pbVar7[0x12] ^ uVar10;
        }
        if ((((uint64_t)pbVar7[0x13] ^ uVar4 * (param_5 + 0x9d7055c63bc157a8) * (uVar8 | 1)) *
             0x10000000493 ^ (uint64_t)pbVar7[0x14]) * 0x10000000493 == 0x398f77f5f1bce31f) {
          return;
        }
        pbVar7 = pbVar7 + 1;
        uVar17 = uVar17 - 1;
      } while (0x14 < uVar17);
    }
    if (0xd < uVar18) {
      pbVar9 = pbVar9 + 0xd;
      uVar17 = param_3 + 0x7fffffffbc0469bd;
      while( true ) {
        if (((0xef0ae681 - uVar5) * 0x100 | 0xef0ae681 - uVar5 >> 0x18) < uVar5 + 0xafdb4253) {
          uVar13 = ((uVar5 ^ 0x7c5898c0) << 9 | (uVar5 ^ 0x7c5898c0) >> 0x17) + 0xea62f6cb;
        }
        else {
          uVar13 = (uVar5 + 0x1e4d97c9) * -0x3ffffff9 + 0xa31a8106;
        }
        uVar14 = (uVar5 | 1) * -0x16bbd953;
        bVar1 = (uint8_t)uVar13 & 0x1f;
        uVar6 = (((uint64_t)pbVar9[-0xd] ^ 0xc3791ae20ea3d2c5) * 0x8000000108b ^
                (uint64_t)pbVar9[-0xc]) * 0x8000000108b ^ (uint64_t)pbVar9[-0xb];
        uVar18 = uVar6 + (((uint64_t)uVar13 ^ 0x80023cc21d0) - 0x78687405);
        if ((int64_t)(int)((uVar14 >> bVar1 | uVar14 << 0x20 - bVar1) ^ 0xfb42c5c9) <
            (int64_t)(uint64_t)(uVar5 + 0xe46ffdf8)) {
          uVar18 = uVar6 * 0x8000000108b;
        }
        if (*(int64_t *)
             ((uint64_t)
              ((uint16_t)(0x2d05 << (bVar3 & 0xf) | 0x2d05U >> 0x10 - (bVar3 & 0xf)) - uVar13 & 0xffff
              ) + 0xff00000000) == -0x388a199bee9a7c21) {
          return;
        }
        uVar6 = (0x7ffffffce10a6d - param_5) + (uint64_t)uVar13;
        if (((((((((((((pbVar9[-10] ^ uVar18) * 0x8000000108b ^ (uint64_t)pbVar9[-9]) *
                      0x8000000108b ^ (uint64_t)pbVar9[-8]) * 0x8000000108b ^ (uint64_t)pbVar9[-7]
                    ) * 0x8000000108b ^ (uint64_t)pbVar9[-6]) * 0x8000000108b ^
                  (uint64_t)pbVar9[-5]) * 0x8000000108b ^ (uint64_t)pbVar9[-4]) *
                 (uVar6 << 0x34 | uVar6 >> 0xc) ^ (uint64_t)pbVar9[-3]) * 0x8000000108b ^
               (uint64_t)pbVar9[-2]) * 0x8000000108b ^ (uint64_t)pbVar9[-1]) * 0x8000000108b ^
             (uint64_t)*pbVar9) * 0x8000000108b == 0x561678e392a35cd0) || (uVar17 < 0xe)) break;
        pbVar9 = pbVar9 + 1;
        uVar17 = uVar17 - 1;
      }
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4f66850  |  RVA: 0x7f6850  |  Size: 4611 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4f66850(void) {
    /* +0x7f6850 */ __asm { PUSH R15 }
    /* +0x7f6852 */ __asm { PUSH RBX }
    /* +0x7f6853 */ __asm { PUSH R14 }
    /* +0x7f6855 */ __asm { PUSH R12 }
    /* +0x7f6857 */ __asm { PUSH RBP }
    /* +0x7f6858 */ __asm { PUSH RDI }
    /* +0x7f6859 */ __asm { PUSH RSI }
    /* +0x7f685a */ __asm { PUSH R13 }
    /* +0x7f685c */ __asm { SUB RSP,0xc8 }
    /* +0x7f6863 */ __asm { MOVAPS xmmword ptr [RSP + 0xb0],XMM15 }
    /* +0x7f686c */ __asm { MOV RDI,RCX }
    /* +0x7f686f */ __asm { MOV R13,R10 }
    /* +0x7f6872 */ __asm { MOV ECX,0xb502693b }
    /* +0x7f6877 */ __asm { IMUL ECX,ECX,0x260af085 }
    /* +0x7f687d */ __asm { NOT ECX }
    /* +0x7f687f */ __asm { ADD R13,-0x61a19746 }
    /* +0x7f6886 */ __asm { ADD RCX,R9 }
    /* +0x7f6889 */ __asm { MOV R8,RCX }
    /* +0x7f688c */ __asm { ROL R8,0x31 }
    /* +0x7f6890 */ __asm { MOV R11,RCX }
    /* +0x7f6893 */ __asm { ROL R11,0xd }
    /* +0x7f6897 */ __asm { XOR R11,R8 }
    /* +0x7f689a */ __asm { XOR R11,RCX }
    /* +0x7f689d */ __asm { MOVQ XMM4,R11 }
    /* +0x7f68a2 */ __asm { MOV R8,R11 }
    /* +0x7f68a5 */ __asm { ROL R8,0x22 }
    /* +0x7f68a9 */ __asm { ROL R11,0x1a }
    /* +0x7f68ad */ __asm { XOR R11,R8 }
    /* +0x7f68b0 */ __asm { MOVQ XMM3,R11 }
    /* +0x7f68b5 */ __asm { PXOR XMM3,XMM4 }
    /* +0x7f68b9 */ __asm { MOVQ R8,XMM3 }
    /* +0x7f68be */ __asm { MOV R11,R8 }
    /* +0x7f68c1 */ __asm { ROL R11,0x4 }
    /* +0x7f68c5 */ __asm { MOV R10,R8 }
    /* +0x7f68c8 */ __asm { ROL R10,0x34 }
    /* +0x7f68cc */ __asm { XOR R10,R11 }
    /* +0x7f68cf */ __asm { XOR R10,R8 }
    /* +0x7f68d2 */ __asm { MOV R8,R10 }
    /* +0x7f68d5 */ __asm { ROL R8,0x8 }
    /* +0x7f68d9 */ __asm { MOV R11,R10 }
    /* +0x7f68dc */ __asm { ROL R11,0x28 }
    /* +0x7f68e0 */ __asm { XOR R11,R8 }
    /* +0x7f68e3 */ __asm { XOR R11,R10 }
    /* +0x7f68e6 */ __asm { MOV R8,R11 }
    /* +0x7f68e9 */ __asm { ROL R8,0x19 }
    /* +0x7f68ed */ __asm { MOV R10,R11 }
    /* +0x7f68f0 */ __asm { ROL R10,0x16 }
    /* +0x7f68f4 */ __asm { XOR R10,R8 }
    /* +0x7f68f7 */ __asm { XOR R10,R11 }
    /* +0x7f68fa */ __asm { MOV R8,R10 }
    /* +0x7f68fd */ __asm { ROL R8,0x2c }
    /* +0x7f6901 */ __asm { MOV R11,R10 }
    /* +0x7f6904 */ __asm { ROL R11,0x32 }
    /* +0x7f6908 */ __asm { XOR R11,R8 }
    /* +0x7f690b */ __asm { XOR R11,R10 }
    /* +0x7f690e */ __asm { MOV R8,R11 }
    /* +0x7f6911 */ __asm { ROL R8,0x24 }
    /* +0x7f6915 */ __asm { MOV R10,R11 }
    /* +0x7f6918 */ __asm { ROL R10,0x18 }
    /* +0x7f691c */ __asm { XOR R10,R8 }
    /* +0x7f691f */ __asm { XOR R10,R11 }
    /* +0x7f6922 */ __asm { MOV R8,R10 }
    /* +0x7f6925 */ __asm { ROL R8,0x8 }
    /* +0x7f6929 */ __asm { MOV R11,R10 }
    /* +0x7f692c */ __asm { ROL R11,0x30 }
    /* +0x7f6930 */ __asm { XOR R11,R8 }
    /* +0x7f6933 */ __asm { XOR R11,R10 }
    /* +0x7f6936 */ __asm { MOV R8,R11 }
    /* +0x7f6939 */ __asm { ROL R8,0x20 }
    /* +0x7f693d */ __asm { MOV R15,R11 }
    /* +0x7f6940 */ __asm { ROL R15,0x10 }
    /* +0x7f6944 */ __asm { XOR R15,R8 }
    /* +0x7f6947 */ __asm { XOR R15,R11 }
    /* +0x7f694a */ __asm { ROL R15,0x20 }
    /* +0x7f694e */ __asm { RDTSC }
    /* +0x7f6950 */ __asm { SHL RDX,0x20 }
    /* +0x7f6954 */ __asm { OR RDX,RAX }
    /* +0x7f6957 */ __asm { MOV R8,-0x30ebf64fafbc6efb }
    /* +0x7f6961 */ __asm { IMUL RDX,R8 }
    /* +0x7f6965 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0x7f696f */ __asm { ADD R9,RDX }
    /* +0x7f6972 */ __asm { MOV RCX,R9 }
    /* +0x7f6975 */ __asm { SHR RCX,0x3b }
    /* +0x7f6979 */ __asm { MOVQ XMM4,R9 }
    /* +0x7f697e */ __asm { PSRLQ XMM4,0x1b }
    /* +0x7f6983 */ __asm { SHR R9,0x2d }
    /* +0x7f6987 */ __asm { MOVD XMM3,R9D }
    /* +0x7f698c */ __asm { PXOR XMM3,XMM4 }
    /* +0x7f6990 */ __asm { MOVD R11D,XMM3 }
    /* +0x7f6995 */ __asm { ROR R11D,CL }
    /* +0x7f6998 */ __asm { MOV EBX,EDI }
    /* +0x7f699a */ __asm { OR EBX,0x1 }
    /* +0x7f699d */ __asm { AND R11D,0x3 }
    /* +0x7f69a1 */ __asm { CMP R11D,0x2 }
    /* +0x7f69a5 */ __asm { JC 0x7fffa4f66ad8 }
    /* +0x7f69ab */ __asm { MOV CX,0xee0b }
    /* +0x7f69af */ __asm { XOR ECX,0x2 }
    /* +0x7f69b2 */ __asm { SUB ECX,EDI }
    /* +0x7f69b4 */ __asm { XOR ECX,0xecdf }
    /* +0x7f69ba */ __asm { MOVZX ECX,CX }
    /* +0x7f69bd */ __asm { CMP R11D,ECX }
    /* +0x7f69c0 */ __asm { JNC 0x7fffa4f66ba4 }
    /* +0x7f69c6 */ __asm { MOV ECX,0xcc352e22 }
    /* +0x7f69cb */ __asm { MOV R8,-0x4d39bffdfc60ca4e }
    /* +0x7f69d5 */ __asm { CMP RCX,R8 }
    /* +0x7f69d8 */ __asm { JZ 0x7fffa4f67a7b }
    /* +0x7f69de */ __asm { NOP }
    /* +0x7f69df */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x7f69e6 */ __asm { MOV R10,0x0 }
    /* +0x7f69ed */ __asm { MOV R8,qword ptr [RCX + -0x4c372e1a] }
    /* +0x7f69f4 */ __asm { MOV R11,0x46afee173fdb0ee7 }
    /* +0x7f69fe */ __asm { MOV RAX,R8 }
    /* +0x7f6a01 */ __asm { MUL R11 }
    /* +0x7f6a04 */ __asm { MOV R11,RDX }
    /* +0x7f6a07 */ __asm { MOV R10D,0x1479bbd }
    /* +0x7f6a0d */ __asm { MOV RAX,R8 }
    /* +0x7f6a10 */ __asm { MUL R10 }
    /* +0x7f6a13 */ __asm { ADD RAX,R11 }
    /* +0x7f6a16 */ __asm { ADC RDX,0x0 }
    /* +0x7f6a1a */ __asm { TEST DL,0x1 }
    /* +0x7f6a1d */ __asm { JZ 0x7fffa4f66fa3 }
    /* +0x7f6a23 */ __asm { LEA R11,[0x7fffa47bb16c] }
    /* +0x7f6a2a */ __asm { MOV R8,-0x28513ac049cc3514 }
    /* +0x7f6a34 */ __asm { CMP R11,R8 }
    /* +0x7f6a37 */ __asm { NOP }
    /* +0x7f6a38 */ __asm { NOP }
    /* +0x7f6a39 */ __asm { NOP }
    /* +0x7f6a3a */ __asm { NOP }
    /* +0x7f6a3b */ __asm { NOP }
    /* +0x7f6a3c */ __asm { NOP }
    /* +0x7f6a3d */ __asm { NOP }
    /* +0x7f6a3e */ __asm { NOP }
    /* +0x7f6a3f */ __asm { NOP }
    /* +0x7f6a40 */ __asm { NOP }
    /* +0x7f6a41 */ __asm { NOP }
    /* +0x7f6a42 */ __asm { NOP }
    /* +0x7f6a43 */ __asm { NOP }
    /* +0x7f6a44 */ __asm { NOP }
    /* +0x7f6a45 */ __asm { NOP }
    /* +0x7f6a46 */ __asm { NOP }
    /* +0x7f6a47 */ __asm { NOP }
    /* +0x7f6ad8 */ __asm { CMP R11D,0x1 }
    /* +0x7f6adc */ __asm { JNZ 0x7fffa4f66e34 }
    /* +0x7f6ae2 */ __asm { MOV ECX,0xf59a83c }
    /* +0x7f6ae7 */ __asm { MOV R8,-0x2bfaf03e9c41b186 }
    /* +0x7f6af1 */ __asm { CMP RCX,R8 }
    /* +0x7f6af4 */ __asm { JZ 0x7fffa4f67a84 }
    /* +0x7f6afa */ __asm { MOV ECX,dword ptr [RCX + 0x70a45a88] }
    /* +0x7f6b00 */ __asm { MOV R8,0x5555555555555556 }
    /* +0x7f6b0a */ __asm { IMUL R8,RCX }
    /* +0x7f6b0e */ __asm { MOV R11,0x5555555555555555 }
    /* +0x7f6b18 */ __asm { CMP R8,R11 }
    /* +0x7f6b1b */ __asm { JBE 0x7fffa4f67357 }
    /* +0x7f6b21 */ __asm { LEA RCX,[0x7fffa47c15dd] }
    /* +0x7f6b28 */ __asm { MOV R8D,0x4d0b5cba }
    /* +0x7f6b2e */ __asm { SUB R8,RCX }
    /* +0x7f6b31 */ __asm { MOV R11,0x13a13dbe26c70626 }
    /* +0x7f6b3b */ __asm { CMP R8,R11 }
    /* +0x7f6b3e */ __asm { JZ 0x7fffa4f67a94 }
    /* +0x7f6b44 */ __asm { MOV qword ptr [RSP + 0x48],R10 }
    /* +0x7f6b49 */ __asm { MOV R11W,0x79a7 }
    /* +0x7f6b4e */ __asm { IMUL R11D,R11D,-0x5d9 }
    /* +0x7f6b55 */ __asm { MOVD XMM4,R11D }
    /* +0x7f6b5a */ __asm { MOV R11W,0x6824 }
    /* +0x7f6b5f */ __asm { MOVD XMM3,EDI }
    /* +0x7f6b63 */ __asm { PSUBW XMM4,XMM3 }
    /* +0x7f6b67 */ __asm { MOVD R9D,XMM4 }
    /* +0x7f6b6c */ __asm { ADD R9D,0x62dc }
    /* +0x7f6b73 */ __asm { MOVZX R9D,R9W }
    /* +0x7f6b77 */ __asm { ADD R11D,EDI }
    /* +0x7f6b7a */ __asm { ROL R11W,0x3 }
    /* +0x7f6b7f */ __asm { MOV EAX,dword ptr [RCX + -0x463d] }
    /* +0x7f6b85 */ __asm { IMUL ECX,R11D,0x4d23 }
    /* +0x7f6b8c */ __asm { MOVZX EDX,CX }
    /* +0x7f6b8f */ __asm { MOV CX,0xbb77 }
    /* +0x7f6b93 */ __asm { IMUL ECX,ECX,0x2ced }
    /* +0x7f6b99 */ __asm { SUB ECX,EDI }
    /* +0x7f6b9b */ __asm { MOVSX R10,CX }
    /* +0x7f6b9f */ __asm { JMP 0x7fffa4f67707 }
    /* +0x7f6ba4 */ __asm { MOV EAX,0x3751616f }
    /* +0x7f6ba9 */ __asm { MOV R11,0x4a83cd3b111ea98d }
    /* +0x7f6bb3 */ __asm { CMP RAX,R11 }
    /* +0x7f6bb6 */ __asm { JZ 0x7fffa4f67a8c }
    /* +0x7f6bbc */ __asm { MOV ECX,0xb3192c79 }
    /* +0x7f6bc1 */ __asm { ADD ECX,0x8dfe5cfc }
    /* +0x7f6bc7 */ __asm { IMUL ECX,EBX }
    /* +0x7f6bca */ __asm { MOV ECX,dword ptr [RCX + RAX*0x1 + 0x2c4] }
    /* +0x7f6bd1 */ __asm { MOV R11,0x5555555555555556 }
    /* +0x7f6bdb */ __asm { IMUL R11,RCX }
    /* +0x7f6bdf */ __asm { MOV R10,0x5555555555555555 }
    /* +0x7f6be9 */ __asm { CMP R11,R10 }
    /* +0x7f6bec */ __asm { JA 0x7fffa4f67632 }
    /* +0x7f6bf2 */ __asm { RDTSC }
    /* +0x7f6bf4 */ __asm { SHL RDX,0x20 }
    /* +0x7f6bf8 */ __asm { OR RDX,RAX }
    /* +0x7f6bfb */ __asm { IMUL RDX,R8 }
    /* +0x7f6bff */ __asm { MOV R8,-0x4e4590cde4da0c6 }
    /* +0x7f6c09 */ __asm { ADD R8,RDX }
    /* +0x7f6c0c */ __asm { MOV RCX,R8 }
    /* +0x7f6c0f */ __asm { SHR RCX,0x3b }
    /* +0x7f6c13 */ __asm { MOV RDX,R8 }
    /* +0x7f6c16 */ __asm { SHR RDX,0x1b }
    /* +0x7f6c1a */ __asm { SHR R8,0x2d }
    /* +0x7f6c1e */ __asm { XOR R8D,EDX }
    /* +0x7f6c21 */ __asm { ROR R8D,CL }
    /* +0x7f6c24 */ __asm { MOV dword ptr [RSP + 0x60],0xaea609f0 }
    /* +0x7f6c2c */ __asm { MOV ECX,dword ptr [RSP + 0x60] }
    /* +0x7f6c30 */ __asm { TEST ECX,ECX }
    /* +0x7f6c32 */ __asm { NOP }
    /* +0x7f6c33 */ __asm { NOP }
    /* +0x7f6c34 */ __asm { NOP }
    /* +0x7f6c35 */ __asm { NOP }
    /* +0x7f6c36 */ __asm { NOP }
    /* +0x7f6c37 */ __asm { PUSHFQ }
    /* +0x7f6c38 */ __asm { POP RAX }
    /* +0x7f6c39 */ __asm { TEST EAX,0x100 }
    /* +0x7f6c3e */ __asm { NOP }
    /* +0x7f6c3f */ __asm { NOP }
    /* +0x7f6c40 */ __asm { NOP }
    /* +0x7f6c41 */ __asm { NOP }
    /* +0x7f6c42 */ __asm { NOP }
    /* +0x7f6c43 */ __asm { CMP R8D,0x114a3a }
    /* +0x7f6c4a */ __asm { JA 0x7fffa4f66db9 }
    /* +0x7f6c50 */ __asm { MOV dword ptr [RSP + 0x60],0xc0688060 }
    /* +0x7f6c58 */ __asm { MOV ECX,dword ptr [RSP + 0x60] }
    /* +0x7f6c5c */ __asm { MOV ECX,EDI }
    /* +0x7f6c5e */ __asm { OR ECX,0x1 }
    /* +0x7f6c61 */ __asm { MOV R11W,0x6c1b }
    /* +0x7f6c66 */ __asm { IMUL R11D,ECX }
    /* +0x7f6c6a */ __asm { MOVZX R8D,R11W }
    /* +0x7f6c6e */ __asm { XOR R8,0x1bdf }
    /* +0x7f6c75 */ __asm { PXOR XMM4,XMM4 }
    /* +0x7f6c79 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM4 }
    /* +0x7f6c7f */ __asm { MOV R8,qword ptr GS:[R8] }
    /* +0x7f6c83 */ __asm { MOV R11,-0x79418593008c7987 }
    /* +0x7f6c8d */ __asm { CMP qword ptr [R8 + 0x18],R11 }
    /* +0x7f6c91 */ __asm { NOP }
    /* +0x7f6c92 */ __asm { NOP }
    /* +0x7f6c93 */ __asm { NOP }
    /* +0x7f6c94 */ __asm { NOP }
    /* +0x7f6c95 */ __asm { NOP }
    /* +0x7f6c96 */ __asm { NOP }
    /* +0x7f6c97 */ __asm { NOP }
    /* +0x7f6c98 */ __asm { NOP }
    /* +0x7f6c99 */ __asm { NOP }
    /* +0x7f6c9a */ __asm { NOP }
    /* +0x7f6c9b */ __asm { NOP }
    /* +0x7f6c9c */ __asm { NOP }
    /* +0x7f6c9d */ __asm { NOP }
    /* +0x7f6c9e */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0x7f6ca6 */ __asm { MOV R11D,0x9e8faea0 }
    /* +0x7f6cac */ __asm { MOV R9D,0x37acd66e }
    /* +0x7f6cb2 */ __asm { SUB R9D,R11D }
    /* +0x7f6cb5 */ __asm { MOV dword ptr [RSP + 0x48],R9D }
    /* +0x7f6cba */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0x7f6cbf */ __asm { AND R11D,0x1 }
    /* +0x7f6cc3 */ __asm { MOV R9W,0xd64 }
    /* +0x7f6cc8 */ __asm { ADD R9D,0xfffff29c }
    /* +0x7f6ccf */ __asm { MOV R10D,ECX }
    /* +0x7f6cd2 */ __asm { IMUL R10D,R9D }
    /* +0x7f6cd6 */ __asm { MOVZX R9D,R10W }
    /* +0x7f6cda */ __asm { CMP R11D,R9D }
    /* +0x7f6cdd */ __asm { JNZ 0x7fffa4f67ac0 }
    /* +0x7f6ce3 */ __asm { MOV R11D,0x34f3c7ed }
    /* +0x7f6ce9 */ __asm { XOR R11D,EDI }
    /* +0x7f6cec */ __asm { IMUL R11D,R11D,-0x17dd80d5 }
    /* +0x7f6cf3 */ __asm { MOV dword ptr [RSP + 0x48],R11D }
    /* +0x7f6cf8 */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0x7f6cfd */ __asm { CMP R11D,0x54d50386 }
    /* +0x7f6d04 */ __asm { NOP }
    /* +0x7f6d05 */ __asm { NOP }
    /* +0x7f6d06 */ __asm { NOP }
    /* +0x7f6d07 */ __asm { NOP }
    /* +0x7f6d08 */ __asm { NOP }
    /* +0x7f6d09 */ __asm { MOV R10,0x0 }
    /* +0x7f6d10 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x7f6d17 */ __asm { NOP }
    /* +0x7f6d18 */ __asm { LEA R10,[0x7fffa4782e19] }
    /* +0x7f6d1f */ __asm { MOV R8,0xe21c73386015da4 }
    /* +0x7f6d29 */ __asm { CMP R10,R8 }
    /* +0x7f6d2c */ __asm { JZ 0x7fffa4f67ac8 }
    /* +0x7f6d32 */ __asm { MOV R11D,0xc000012d }
    /* +0x7f6d38 */ __asm { MOV R9D,0xea2e7075 }
    /* +0x7f6d3e */ __asm { ADD R9D,EDI }
    /* +0x7f6d41 */ __asm { MOV R8,R10 }
    /* +0x7f6d44 */ __asm { XOR R8,0x1f4b }
    /* +0x7f6d4b */ __asm { MOV EAX,0xc2380403 }
    /* +0x7f6d50 */ __asm { MOV DX,0x819c }
    /* +0x7f6d54 */ __asm { SUB R11D,EDI }
    /* +0x7f6d57 */ __asm { MOV qword ptr [RSP + 0x48],R12 }
    /* +0x7f6d5c */ __asm { MOV SI,0xb528 }
    /* +0x7f6d60 */ __asm { IMUL ESI,ECX }
    /* +0x7f6d63 */ __asm { ROL SI,0x1 }
    /* +0x7f6d66 */ __asm { ADD R10,0x1f4b }
    /* +0x7f6d6d */ __asm { XOR EAX,0xa125cfa0 }
    /* +0x7f6d72 */ __asm { XOR R9D,0x10427a22 }
    /* +0x7f6d79 */ __asm { SUB EAX,EDI }
    /* +0x7f6d7b */ __asm { CDQE }
    /* +0x7f6d7d */ __asm { ADD R9D,0xf02ad98e }
    /* +0x7f6d84 */ __asm { MOVSXD R9,R9D }
    /* +0x7f6d87 */ __asm { CMP RAX,R9 }
    /* +0x7f6d8a */ __asm { CMOVNC R10,R8 }
    /* +0x7f6d8e */ __asm { MOVZX R9D,SI }
    /* +0x7f6d92 */ __asm { MOV EAX,dword ptr [R10 + 0x128] }
    /* +0x7f6d99 */ __asm { IMUL R11D,R11D,0x76cc30ed }
    /* +0x7f6da0 */ __asm { NOT R11D }
    /* +0x7f6da3 */ __asm { MOVSXD R10,R11D }
    /* +0x7f6da6 */ __asm { XOR EDX,0x854 }
    /* +0x7f6dac */ __asm { IMUL EDX,ECX }
    /* +0x7f6daf */ __asm { MOVZX EDX,DX }
    /* +0x7f6db2 */ __asm { LEA R8,[RSP + 0x60] }
    /* +0x7f6db7 */ __asm { SYSCALL }
    /* +0x7f6db9 */ __asm { LEA R10,[0x7fffa478aec4] }
    /* +0x7f6dc0 */ __asm { MOV R8,-0x3e8175ee9b1c9549 }
    /* +0x7f6dca */ __asm { CMP R10,R8 }
    /* +0x7f6dcd */ __asm { JZ 0x7fffa4f67aa0 }
    /* +0x7f6dd3 */ __asm { MOV R11W,0x2684 }
    /* +0x7f6dd8 */ __asm { MOV CX,0xdf00 }
    /* +0x7f6ddc */ __asm { MOVD XMM4,EDI }
    /* +0x7f6de0 */ __asm { IMUL R9D,ECX,0x301f }
    /* +0x7f6de7 */ __asm { MOV ECX,EDI }
    /* +0x7f6de9 */ __asm { ROL R9W,CL }
    /* +0x7f6ded */ __asm { MOV ECX,0x65b32093 }
    /* +0x7f6df2 */ __asm { ADD ECX,0x9a4c943c }
    /* +0x7f6df8 */ __asm { ROL ECX,0x1a }
    /* +0x7f6dfb */ __asm { MOVZX R9D,R9W }
    /* +0x7f6dff */ __asm { IMUL R11D,R11D,-0x5cbf }
    /* +0x7f6e06 */ __asm { XOR R11D,EDI }
    /* +0x7f6e09 */ __asm { IMUL R11D,R11D,-0xe67 }
    /* +0x7f6e10 */ __asm { MOVZX EDX,R11W }
    /* +0x7f6e14 */ __asm { MOV qword ptr [RSP + 0x48],R11 }
    /* +0x7f6e19 */ __asm { MOV EAX,dword ptr [R10 + -0x689c] }
    /* +0x7f6e20 */ __asm { MOVD XMM3,ECX }
    /* +0x7f6e24 */ __asm { PXOR XMM3,XMM4 }
    /* +0x7f6e28 */ __asm { MOVD ECX,XMM3 }
    /* +0x7f6e2c */ __asm { MOVSXD R10,ECX }
    /* +0x7f6e2f */ __asm { JMP 0x7fffa4f67707 }
    /* +0x7f6e34 */ __asm { MOV R8,0x613269176c48e8ae }
    /* +0x7f6e3e */ __asm { MOV R11D,0x4967ebed }
    /* +0x7f6e44 */ __asm { SUB R11,R8 }
    /* +0x7f6e47 */ __asm { MOV ECX,0x9e22fa15 }
    /* +0x7f6e4c */ __asm { MOV R10,RCX }
    /* +0x7f6e4f */ __asm { ROL R10,0x4 }
    /* +0x7f6e53 */ __asm { MOV R8,0x10000000273 }
    /* +0x7f6e5d */ __asm { ADD R8,R10 }
    /* +0x7f6e60 */ __asm { XOR R8,0x7033cf95 }
    /* +0x7f6e67 */ __asm { CMP R11,R8 }
    /* +0x7f6e6a */ __asm { NOP }
    /* +0x7f6e6b */ __asm { NOP }
    /* +0x7f6e6c */ __asm { NOP }
    /* +0x7f6e6d */ __asm { NOP }
    /* +0x7f6e6e */ __asm { NOP }
    /* +0x7f6e6f */ __asm { MOV R10,0x0 }
    /* +0x7f6e76 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x7f6e7d */ __asm { NOP }
    /* +0x7f6e7e */ __asm { TEST uint8_t ptr [RCX + -0x1e24f7d5],0x1 }
    /* +0x7f6e85 */ __asm { JNZ 0x7fffa4f676a7 }
    /* +0x7f6e8b */ __asm { MOVD XMM4,EDI }
    /* +0x7f6e8f */ __asm { MOV R8,qword ptr [RSP + 0x108] }
    /* +0x7f6e97 */ __asm { MOV ECX,0xc33e3f91 }
    /* +0x7f6e9c */ __asm { MOVD XMM3,ECX }
    /* +0x7f6ea0 */ __asm { RDTSC }
    /* +0x7f6ea2 */ __asm { SHL RDX,0x20 }
    /* +0x7f6ea6 */ __asm { OR RDX,RAX }
    /* +0x7f6ea9 */ __asm { MOV R11,-0x6bdeac2e46be109b }
    /* +0x7f6eb3 */ __asm { IMUL R11,RDX }
    /* +0x7f6eb7 */ __asm { MOV RCX,0x699e174946539c6e }
    /* +0x7f6ec1 */ __asm { ADD RCX,R11 }
    /* +0x7f6ec4 */ __asm { MOV R9,RCX }
    /* +0x7f6ec7 */ __asm { SHR R9,0x1b }
    /* +0x7f6ecb */ __asm { MOV RDX,RCX }
    /* +0x7f6ece */ __asm { SHR RDX,0x2d }
    /* +0x7f6ed2 */ __asm { XOR EDX,R9D }
    /* +0x7f6ed5 */ __asm { SHR RCX,0x3b }
    /* +0x7f6ed9 */ __asm { ROR EDX,CL }
    /* +0x7f6edb */ __asm { PADDD XMM3,XMM4 }
    /* +0x7f6edf */ __asm { MOVD ECX,XMM3 }
    /* +0x7f6ee3 */ __asm { ROL ECX,0x1e }
    /* +0x7f6ee6 */ __asm { MOVSXD R11,ECX }
    /* +0x7f6ee9 */ __asm { XOR R11,0x5f306357 }
    /* +0x7f6ef0 */ __asm { MOV R8,qword ptr [R8 + R11*0x1] }
    /* +0x7f6ef4 */ __asm { MOV RCX,0x66bfc6fde5fa05ef }
    /* +0x7f6efe */ __asm { AND RCX,R8 }
    /* +0x7f6f01 */ __asm { MOV R8,0x27d36a70ee0eea5d }
    /* +0x7f6f0b */ __asm { CMP RCX,R8 }
    /* +0x7f6f0e */ __asm { NOP }
    /* +0x7f6f0f */ __asm { NOP }
    /* +0x7f6f10 */ __asm { NOP }
    /* +0x7f6f11 */ __asm { NOP }
    /* +0x7f6f12 */ __asm { NOP }
    /* +0x7f6f13 */ __asm { CMP EDX,0x430dcb6 }
    /* +0x7f6f19 */ __asm { JA 0x7fffa4f66f27 }
    /* +0x7f6f1b */ __asm { MOV dword ptr [RSP + 0x60],0xcf96fc2a }
    /* +0x7f6f23 */ __asm { MOV ECX,dword ptr [RSP + 0x60] }
    /* +0x7f6f27 */ __asm { LEA RCX,[0x7fffa4786e45] }
    /* +0x7f6f2e */ __asm { MOV R10,RCX }
    /* +0x7f6f31 */ __asm { ROL R10,0xb }
    /* +0x7f6f35 */ __asm { MOV R8,0x6791c431237046d7 }
    /* +0x7f6f3f */ __asm { IMUL R8,R10 }
    /* +0x7f6f43 */ __asm { MOV R11,0x5202384f38694725 }
    /* +0x7f6f4d */ __asm { CMP R8,R11 }
    /* +0x7f6f50 */ __asm { NOP }
    /* +0x7f6f51 */ __asm { NOP }
    /* +0x7f6f52 */ __asm { NOP }
    /* +0x7f6f53 */ __asm { NOP }
    /* +0x7f6f54 */ __asm { NOP }
    /* +0x7f6f55 */ __asm { MOV R11D,EDI }
    /* +0x7f6f58 */ __asm { MOV R8D,0x41a0abaa }
    /* +0x7f6f5e */ __asm { LEA R10D,[R8 + RDI*0x1] }
    /* +0x7f6f62 */ __asm { ADD R10D,0xfe5f52e8 }
    /* +0x7f6f69 */ __asm { ROL R10D,0x1a }
    /* +0x7f6f6d */ __asm { OR R11D,0x1 }
    /* +0x7f6f71 */ __asm { MOV R9W,0xb528 }
    /* +0x7f6f76 */ __asm { MOV DX,0x12b6 }
    /* +0x7f6f7a */ __asm { IMUL EDX,R11D }
    /* +0x7f6f7e */ __asm { NOT EDX }
    /* +0x7f6f80 */ __asm { MOVZX EDX,DX }
    /* +0x7f6f83 */ __asm { IMUL R9D,R11D }
    /* +0x7f6f87 */ __asm { ROL R9W,0x2 }
    /* +0x7f6f8c */ __asm { MOV qword ptr [RSP + 0x48],R11 }
    /* +0x7f6f91 */ __asm { MOV EAX,dword ptr [RCX + -0x281d] }
    /* +0x7f6f97 */ __asm { MOVZX R9D,R9W }
    /* +0x7f6f9b */ __asm { MOVSXD R10,R10D }
    /* +0x7f6f9e */ __asm { JMP 0x7fffa4f67707 }
    /* +0x7f6fa3 */ __asm { MOV R8,0x40e3d417ea266285 }
    /* +0x7f6fad */ __asm { MOV R9W,0xda3c }
    /* +0x7f6fb2 */ __asm { MOV R11D,EDI }
    /* +0x7f6fb5 */ __asm { OR R11D,0x1 }
    /* +0x7f6fb9 */ __asm { ADD R9D,0xffffa3a4 }
    /* +0x7f6fc0 */ __asm { IMUL R9D,R11D }
    /* +0x7f6fc4 */ __asm { ADD R8,-0x7ffe0330 }
    /* +0x7f6fcb */ __asm { MOV R10D,0xf7ba41cf }
    /* +0x7f6fd1 */ __asm { XOR R10,R8 }
    /* +0x7f6fd4 */ __asm { MOV ECX,EDI }
    /* +0x7f6fd6 */ __asm { ROR R10,CL }
    /* +0x7f6fd9 */ __asm { MOVZX R9D,R9W }
    /* +0x7f6fdd */ __asm { RDTSC }
    /* +0x7f6fdf */ __asm { SHL RDX,0x20 }
    /* +0x7f6fe3 */ __asm { OR RDX,RAX }
    /* +0x7f6fe6 */ __asm { MOV RAX,0x5851f42d4c957f2d }
    /* +0x7f6ff0 */ __asm { IMUL RAX,RDX }
    /* +0x7f6ff4 */ __asm { ADD RAX,R10 }
    /* +0x7f6ff7 */ __asm { MOV R8,RAX }
    /* +0x7f6ffa */ __asm { SHR R8,0x2d }
    /* +0x7f6ffe */ __asm { MOV RCX,RAX }
    /* +0x7f7001 */ __asm { SHR RCX,0x3b }
    /* +0x7f7005 */ __asm { SHR RAX,0x1b }
    /* +0x7f7009 */ __asm { XOR R8D,EAX }
    /* +0x7f700c */ __asm { ROR R8D,CL }
    /* +0x7f700f */ __asm { MOV R10,qword ptr GS:[R9] }
    /* +0x7f7013 */ __asm { MOV R9W,0xef67 }
    /* +0x7f7018 */ __asm { LEA ECX,[RDI + R9*0x1] }
    /* +0x7f701c */ __asm { ADD ECX,0xfcc }
    /* +0x7f7022 */ __asm { MOVZX ECX,CX }
    /* +0x7f7025 */ __asm { MOV RCX,qword ptr GS:[RCX] }
    /* +0x7f7029 */ __asm { MOV R9,qword ptr [RCX + 0x18] }
    /* +0x7f702d */ __asm { MOV RCX,-0x4b1ee0c876613495 }
    /* +0x7f7037 */ __asm { NEG R9 }
    /* +0x7f703a */ __asm { ADD R10,R9 }
    /* +0x7f703d */ __asm { ADD R10,0xea0 }
    /* +0x7f7044 */ __asm { MOV RDX,RDI }
    /* +0x7f7047 */ __asm { OR RDX,0x1 }
    /* +0x7f704b */ __asm { IMUL RDX,RCX }
    /* +0x7f704f */ __asm { MOV RCX,-0x10a3a56c0 }
    /* +0x7f7059 */ __asm { ADD RCX,RDX }
    /* +0x7f705c */ __asm { CMP R10,RCX }
    /* +0x7f705f */ __asm { NOP }
    /* +0x7f7060 */ __asm { NOP }
    /* +0x7f7061 */ __asm { NOP }
    /* +0x7f7062 */ __asm { NOP }
    /* +0x7f7063 */ __asm { NOP }
    /* +0x7f7064 */ __asm { NOP }
    /* +0x7f7065 */ __asm { NOP }
    /* +0x7f7066 */ __asm { NOP }
    /* +0x7f7067 */ __asm { NOP }
    /* +0x7f7068 */ __asm { NOP }
    /* +0x7f7069 */ __asm { MOV ECX,0x1e6aeed }
    /* +0x7f706e */ __asm { SUB ECX,EDI }
    /* +0x7f7070 */ __asm { ROL ECX,0x1c }
    /* +0x7f7073 */ __asm { CMP R8D,ECX }
    /* +0x7f7076 */ __asm { JNC 0x7fffa4f672d8 }
    /* +0x7f707c */ __asm { MOV R8,qword ptr [RSP + 0x108] }
    /* +0x7f7084 */ __asm { MOV R8,qword ptr [R8 + -0xbf0] }
    /* +0x7f708b */ __asm { MOV RCX,-0x5d64b05cfd35d5a1 }
    /* +0x7f7095 */ __asm { AND RCX,R8 }
    /* +0x7f7098 */ __asm { XOR RCX,-0x1c3c3f28 }
    /* +0x7f709f */ __asm { ROL RCX,0x24 }
    /* +0x7f70a3 */ __asm { MOV R8,-0xdbe8e78b }
    /* +0x7f70ad */ __asm { ADD R8,RCX }
    /* +0x7f70b0 */ __asm { MOV R10,0x5a736c7726a4e3d4 }
    /* +0x7f70ba */ __asm { CMP R8,R10 }
    /* +0x7f70bd */ __asm { NOP }
    /* +0x7f70be */ __asm { NOP }
    /* +0x7f70bf */ __asm { NOP }
    /* +0x7f70c0 */ __asm { NOP }
    /* +0x7f70c1 */ __asm { NOP }
    /* +0x7f70c2 */ __asm { LEA RCX,[0x7fffa47c4276] }
    /* +0x7f70c9 */ __asm { MOV R9,0x481c33669e36dc6c }
    /* +0x7f70d3 */ __asm { LEA R8,[RDI + R9*0x1] }
    /* +0x7f70d7 */ __asm { ADD R8,-0x10a8e78b }
}


// ============================================================================
// Function : FUN_7fffa4f67b20  |  RVA: 0x7f7b20  |  Size: 3025 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Type propagation algorithm not settling */

IMAGE_DOS_HEADER * FUN_7fffa4f67b20(uint32_t param_1,int64_t param_2,uint64_t param_3,uint32_t param_4)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint8_t *pbVar3;
  uint8_t bVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t in_RAX;
  IMAGE_DOS_HEADER *pIVar9;
  IMAGE_DOS_HEADER *pIVar10;
  IMAGE_DOS_HEADER *pIVar11;
  char cVar12;
  char *pcVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  word *pwVar17;
  uint8_t bVar18;
  uint16_t uVar19;
  uint32_t uVar20;
  uint64_t uVar21;
  uint32_t uVar22;
  int64_t lVar23;
  uint8_t *pbVar24;
  int64_t lVar25;
  uint8_t bVar26;
  uint32_t uVar27;
  uint64_t uVar28;
  bool bVar29;
  
  pIVar9 = (IMAGE_DOS_HEADER *)(in_RAX ^ 0x6619dd74);
  pwVar17 = (word *)(param_2 + 0xb6f076cd);
  lVar23 = (uint64_t)param_4 * 0x20;
  bVar18 = pIVar9->e_program[lVar23] & 0xf;
  bVar26 = (uint8_t)param_1;
  uVar19 = (uint16_t)param_1;
  if (1 < bVar18) {
    if (bVar18 != 2) {
      return pIVar9;
    }
    bVar18 = pIVar9->e_program[lVar23 + 8];
    if ((bVar18 & 2) == 0) {
      uVar16 = 0;
    }
    else {
      bVar4 = pIVar9->e_program[lVar23 + 10];
      uVar16 = *(uint64_t *)(pIVar9[4].e_magic + (pIVar9->e_program[lVar23 + 0x12] & 0xfffffff8));
      if ((char)bVar4 < '\x02') {
        if (bVar4 == (uint8_t)(bVar26 + 0x6b)) {
          uVar16 = uVar16 & 0xff;
        }
      }
      else if ((char)bVar4 < '\x04') {
        if ((~bVar4 & 0x7f) == 0x7d) {
          uVar16 = uVar16 & 0xffff;
        }
      }
      else if ((uint8_t)(~bVar4 * '\x0f') == -0x4b) {
        uVar16 = uVar16 & 0xffffffff;
      }
    }
    if ((bVar18 & 4) != 0) {
      bVar4 = pIVar9->e_program[lVar23 + 0xb];
      uVar21 = *(uint64_t *)(pIVar9[4].e_magic + (uint64_t)pIVar9->e_program[lVar23 + 0x13] * 8);
      if ((char)bVar4 < '\x02') {
        uVar14 = uVar21 & 0xff;
        bVar29 = bVar4 == 1;
      }
      else if ((char)bVar4 < '\x04') {
        uVar14 = uVar21 & 0xffff;
        bVar29 = (uint8_t)(bVar4 * '\x05') == '\n';
      }
      else {
        uVar14 = uVar21 & 0xffffffff;
        bVar29 = (uint8_t)(0xc5U >> (bVar26 & 7) | -0x3b << 8 - (bVar26 & 7)) == (uint8_t)(0x1b - bVar4);
      }
      if (!bVar29) {
        uVar14 = uVar21;
      }
      uVar22 = pIVar9->e_program[lVar23 + 0x14] & 0xf;
      uVar16 = uVar16 + ((uVar14 >> 0x20) * (uint64_t)uVar22 << 0x20) +
                        (uint64_t)uVar22 * (uVar14 & 0xffffffff);
    }
    if ((bVar18 & 8) != 0) {
      uVar16 = uVar16 + *(int64_t *)(pIVar9->e_program + lVar23 + 0x18);
    }
    if ((bVar18 & 0x40) != 0) {
      uVar16 = uVar16 + *(int64_t *)&pIVar9[5].e_cparhdr;
    }
    if ((pIVar9->e_program[lVar23 + 9] & 8) != 0) {
      uVar14 = (uint64_t)*(uint32_t *)(pIVar9->e_program + 4);
      cVar12 = (char)(*(int *)(pIVar9->e_program + 0x24) << 3);
      uVar28 = 0xffffffffffffffff >> (-cVar12 & 0x3fU);
      uVar21 = 0;
      if ((*(uint64_t *)(pIVar9[4].e_magic + (uint64_t)*(uint32_t *)(pIVar9->e_program + 0x30) * 8) >>
           ((uint64_t)(uint8_t)(cVar12 - 1) & 0x3f) & 1) != 0) {
        uVar21 = ~uVar28;
      }
      uVar21 = uVar28 & *(uint64_t *)
                         (pIVar9[4].e_magic + (uint64_t)*(uint32_t *)(pIVar9->e_program + 0x30) * 8) |
               uVar21;
      if ((int64_t)uVar21 < 0) {
        uVar16 = uVar16 - ((-uVar14 & ~uVar21 >> 3) + uVar14);
      }
      else {
        uVar16 = uVar16 + (uVar21 >> 3 & -uVar14);
      }
    }
    if (((char)bVar18 < '\0') && ((pIVar9->e_program[lVar23 + 1] & 10) != 0)) {
      uVar16 = uVar16 - *(uint32_t *)(pIVar9->e_program + lVar23 + 4);
    }
    uVar21 = uVar16 & 0xffffffff;
    if ((pIVar9->e_magic[0] & 0xc0U) != 0x40) {
      uVar21 = uVar16;
    }
    if ((uint8_t)pIVar9->e_magic[0] < 0x40) {
      uVar21 = uVar16 & 0xffff;
    }
    uVar16 = uVar21;
    if ((bVar18 & 1) != 0) {
      if ((uint8_t)((pIVar9->e_program[lVar23 + 0x12] & 6) * -0xb) == -0x42) {
        lVar25 = 0;
      }
      else {
        lVar25 = *(int64_t *)
                  (pIVar9->e_magic +
                  (uint64_t)((param_1 ^ 0xd89e) - 0x2c88 & 0xffff) +
                  (uint64_t)(uint8_t)(pIVar9->e_program[lVar23 + 0x12] << 5));
      }
      uVar16 = uVar21 + lVar25;
      if ((char)pIVar9[0xb].e_ovno != '\x02') {
        uVar16 = uVar21 + lVar25 & 0xffffffff;
      }
    }
    uVar22 = *(uint32_t *)(param_2 + 0xb6f0770d);
    if (*(uint32_t *)(pIVar9->e_program + lVar23 + 4) < *(uint32_t *)(param_2 + 0xb6f0770d)) {
      uVar22 = *(uint32_t *)(pIVar9->e_program + lVar23 + 4);
    }
    pIVar10 = (IMAGE_DOS_HEADER *)
              (**(code **)(pIVar9->e_magic +
                          (uint16_t)((0xb7a0 - uVar19) * 0x80 | (uint16_t)(0xb7a0 - uVar19) >> 9)))
                        (pIVar9,uVar16,(IMAGE_DOS_HEADER *)(uint64_t)uVar22,pwVar17,
                         (uint16_t)((uVar19 | 1) * -0x3ec8) >> 2);
    if (pIVar10 != (IMAGE_DOS_HEADER *)(uint64_t)uVar22) {
      return pIVar10;
    }
    if ((char)pIVar9->e_program[lVar23 + 8] < '\0') {
      uVar16 = *(uint64_t *)(pIVar9[4].e_res_4_ + 2);
      bVar18 = (uint8_t)pIVar9->e_magic[0] >> 4 & 3;
      if (bVar18 == 0) {
        uVar21 = uVar16 & 0xffff;
      }
      else {
        pIVar10 = (IMAGE_DOS_HEADER *)(uint64_t)(param_1 ^ 0x219f69d6);
        uVar21 = uVar16;
        if (pIVar10 != (IMAGE_DOS_HEADER *)0xfb4c9e40) {
          uVar21 = uVar16 & 0xffffffff;
        }
        if (bVar18 == 1) {
          uVar21 = uVar16 & 0xffffffff;
        }
      }
      uVar22 = *(uint32_t *)(pIVar9->e_program + lVar23 + 4);
      if ((pIVar9->e_cparhdr & 0x28) != 0) {
        *(uint64_t *)(pIVar9[4].e_res_4_ + 2) = 0;
      }
      uVar21 = uVar21 - uVar22;
      if (bVar18 == 0) {
        pIVar9[4].e_res_4_[2] = (word)uVar21;
      }
      else {
        if (bVar18 == 1) {
          uVar21 = uVar21 & 0xffffffff;
        }
        *(uint64_t *)(pIVar9[4].e_res_4_ + 2) = uVar21;
      }
      *(uint8_t *)&pIVar9[0xb].e_lfarlc = (uint8_t)pIVar9[0xb].e_lfarlc | 0x10;
    }
    if ((pIVar9->e_program[lVar23 + 9] & 1) == 0) {
      return pIVar10;
    }
    bVar18 = pIVar9->e_program[lVar23 + 10];
    bVar4 = pIVar9->e_program[lVar23 + 0x12] >> 3;
    uVar21 = (uint64_t)bVar4;
    uVar16 = *(uint64_t *)(pIVar9[4].e_magic + (pIVar9->e_program[lVar23 + 0x12] & 0xfffffff8));
    if ((char)bVar18 < '\x02') {
      if (bVar18 == 1) {
        uVar16 = uVar16 & 0xff;
      }
    }
    else if ((char)bVar18 < '\x04') {
      if (bVar18 == 2) {
        uVar16 = uVar16 & 0xffff;
      }
    }
    else {
      cVar12 = -0xd;
      if ((int64_t)
          (uint64_t)(-0x9ec5af1 << (bVar26 & 0x1f) | 0xf613a50fU >> 0x20 - (bVar26 & 0x1f)) <=
          (int64_t)(int)(-0x621d6428 - param_1)) {
        cVar12 = bVar26 + 0x77;
      }
      if ((uint8_t)(cVar12 + ((uint8_t)(bVar18 + 0x4c) >> 1 | bVar18 << 7)) == '\x1b') {
        uVar16 = uVar16 & 0xffffffff;
      }
    }
    pIVar11 = (IMAGE_DOS_HEADER *)(uint64_t)*(uint32_t *)(pIVar9->e_program + lVar23 + 4);
    pIVar10 = (IMAGE_DOS_HEADER *)-(int64_t)pIVar11;
    if ((pIVar9[5].e_sp & 0x400) == 0) {
      pIVar10 = pIVar11;
    }
    if ((pIVar9->e_cparhdr & 0x28) != 0) {
      *(uint64_t *)(pIVar9[4].e_magic + uVar21 * 8) = 0;
    }
    pcVar13 = pIVar10->e_magic + uVar16;
    if ((char)bVar18 < '\x02') {
      if (bVar18 == 1) {
        pIVar9[4].e_magic[uVar21 * 8] = (char)pcVar13;
        goto LAB_7fffa4f68465;
      }
    }
    else if ((char)bVar18 < '\x04') {
      if (bVar18 == 2) {
        *(short *)(pIVar9[4].e_magic + uVar21 * 8) = (short)pcVar13;
        goto LAB_7fffa4f68465;
      }
    }
    else if (bVar18 == 4) {
      *(uint64_t *)(pIVar9[4].e_magic + uVar21 * 8) = (uint64_t)pcVar13 & 0xffffffff;
      goto LAB_7fffa4f68465;
    }
    pIVar11 = &IMAGE_DOS_HEADER_7fffa4770000;
    *(char **)(pIVar9[4].e_magic + uVar21 * 8) = pcVar13;
LAB_7fffa4f68465:
    pIVar9[0xb].e_lfarlc = pIVar9[0xb].e_lfarlc | (uint16_t)(1 << bVar4);
    return pIVar11;
  }
  if (bVar18 != (uint8_t)(bVar26 + 0x6b)) {
    return pIVar9;
  }
  uVar22 = *(uint32_t *)(pIVar9->e_program + lVar23 + 8);
  if ((int)uVar22 < 5) {
    if ((int)((param_1 ^ 0xf290) * 0x5c2b & 0xffff) <= (int)uVar22) {
      if (uVar22 != 2) {
        return pIVar9;
      }
      if ((uint64_t)*(uint32_t *)(pIVar9->e_program + lVar23 + 0x10) < 6) {
        *(uint64_t *)
         (pIVar9[5].e_res2_10_ + (uint64_t)*(uint32_t *)(pIVar9->e_program + lVar23 + 0x10) * 0x10 + 8)
             = (uint64_t)*pwVar17;
        return pIVar9;
      }
      return pIVar9;
    }
    if (uVar22 != 1) {
      return pIVar9;
    }
    uVar22 = *(uint32_t *)(pIVar9->e_program + lVar23 + 0x10);
    if (*(int *)(pIVar9->e_magic + ((param_1 + 0x252f586a) * 0x800000 | param_1 + 0x252f586a >> 9))
        == 0x6c4 && uVar22 == 4) {
      pIVar9->e_magic[(uint64_t)((param_1 | 1) * 0x8a02 - 0x4fde & 0xffff) + 1] =
           pIVar9->e_magic[(uint64_t)((param_1 | 1) * 0x8a02 - 0x4fde & 0xffff) + 1] | 1;
      uVar22 = 4;
    }
    bVar18 = pIVar9->e_program[lVar23 + 0x15];
    uVar27 = uVar22 - 4;
    if ((bVar18 & 1) == 0) {
      uVar27 = uVar22;
    }
    uVar16 = *(uint64_t *)pwVar17;
    if (uVar22 < 4) {
      uVar27 = uVar22;
    }
    iVar5 = *(int *)(pIVar9->e_program + lVar23 + 4);
    uVar21 = (uint64_t)uVar27;
    if ((pIVar9->e_cparhdr & 0x28) != 0) {
      *(uint64_t *)(pIVar9[4].e_magic + uVar21 * 8) = 0;
    }
    if (iVar5 < 2) {
      if (iVar5 == 1) {
        if ((bVar18 & 1) == 0) {
          pIVar9[4].e_magic[uVar21 * 8] = (char)uVar16;
        }
        else {
          pIVar9[4].e_magic[uVar21 * 8 + 1] = (char)uVar16;
        }
        goto LAB_7fffa4f685ff;
      }
    }
    else if (iVar5 < (int)((param_1 + 0xdb75 ^ 0xd30f) & 0xffff)) {
      if (~(iVar5 * 0x5c800ee7) + (param_1 ^ 0x7ce90aee) * -0x2cacc065 == -0x79001e27) {
        *(short *)(pIVar9[4].e_magic + uVar21 * 8) = (short)uVar16;
        goto LAB_7fffa4f685ff;
      }
    }
    else if ((iVar5 * -0x47a4250 | (uint32_t)(iVar5 * -0x6047a425) >> 0x1c) == 0xee16f6c7) {
      uVar16 = uVar16 & 0xffffffff;
    }
    *(uint64_t *)(pIVar9[4].e_magic + uVar21 * 8) = uVar16;
LAB_7fffa4f685ff:
    pIVar9[0xb].e_lfarlc = pIVar9[0xb].e_lfarlc | (uint16_t)(1 << ((uint8_t)uVar27 & 0x1f));
    return pIVar9;
  }
  if ((int)(uint32_t)(uint16_t)((uVar19 + 0x686c) * 8 | (uint16_t)(uVar19 + 0x686c) >> 0xd) <= (int)uVar22)
  {
    if ((int)uVar22 <
        (int)(uint32_t)(uint16_t)((-0xd1c << (bVar26 & 0xf) | 0xf2e4U >> 0x10 - (bVar26 & 0xf)) ^ 0xb928))
    {
      if (*(int *)(pIVar9->e_program + lVar23 + 4) == 2) {
        uVar19 = *pwVar17;
        pwVar17 = &pIVar9[5].e_sp;
        pIVar9[5].e_sp = uVar19;
      }
      uVar16 = (uint64_t)((uint32_t)*(uint64_t *)pwVar17 & 0x3f7fd5) | 2;
      pIVar9[5].e_sp = (short)uVar16;
      pIVar9[5].e_csum = (short)(uVar16 >> 0x10);
      pIVar9[5].e_ip = (short)(uVar16 >> 0x20);
      pIVar9[5].e_cs = (short)(uVar16 >> 0x30);
      return pIVar9;
    }
    if (uVar22 == 0x14) {
      bVar18 = pIVar9->e_program[lVar23 + 4] * -8;
      uVar16 = (*(uint64_t *)pwVar17 << (bVar18 & 0x3f)) >> (bVar18 & 0x3f);
      pIVar9[5].e_cparhdr = (short)uVar16;
      pIVar9[5].e_minalloc = (short)(uVar16 >> 0x10);
      pIVar9[5].e_maxalloc = (short)(uVar16 >> 0x20);
      pIVar9[5].e_ss = (short)(uVar16 >> 0x30);
      return pIVar9;
    }
    return pIVar9;
  }
  if ((uVar22 << 0x1b | uVar22 >> 5) != 0x28000000) {
    return pIVar9;
  }
  lVar25 = (uint64_t)*(uint32_t *)(pIVar9->e_program + lVar23 + 0x10) * 0x20;
  pbVar3 = pIVar9[6].e_program + lVar25 + 0x30;
  if ((pIVar9->e_cblp & 0xf) != 0) {
    pbVar3[0x10] = 0;
    pbVar3[0x11] = 0;
    pbVar3[0x12] = 0;
    pbVar3[0x13] = 0;
    pbVar3[0x14] = 0;
    pbVar3[0x15] = 0;
    pbVar3[0x16] = 0;
    pbVar3[0x17] = 0;
    pbVar3[0x18] = 0;
    pbVar3[0x19] = 0;
    pbVar3[0x1a] = 0;
    pbVar3[0x1b] = 0;
    pbVar3[0x1c] = 0;
    pbVar3[0x1d] = 0;
    pbVar3[0x1e] = 0;
    pbVar3[0x1f] = 0;
  }
  pbVar3[0] = 0;
  pbVar3[1] = 0;
  pbVar3[2] = 0;
  pbVar3[3] = 0;
  pbVar3[4] = 0;
  pbVar3[5] = 0;
  pbVar3[6] = 0;
  pbVar3[7] = 0;
  pbVar3[8] = 0;
  pbVar3[9] = 0;
  pbVar3[10] = 0;
  pbVar3[0xb] = 0;
  pbVar3[0xc] = 0;
  pbVar3[0xd] = 0;
  pbVar3[0xe] = 0;
  pbVar3[0xf] = 0;
  uVar27 = *(uint32_t *)(pIVar9->e_program + lVar23 + 4);
  uVar16 = (uint64_t)uVar27;
  if (uVar16 == 0) goto LAB_7fffa4f686a9;
  uVar19 = 0x779b - uVar19 ^ (uint16_t)uVar22;
  uVar20 = (uVar22 ^ 0xfbadcec0) * 0x415ad7f7;
  bVar29 = uVar27 < 4;
  if ((uVar20 >> (bVar26 & 0x1f) | uVar20 << 0x20 - (bVar26 & 0x1f)) != 0x6fcc4e0e) {
    bVar29 = uVar27 == (uint16_t)(uVar19 << 3 | uVar19 >> 0xd);
  }
  if ((bVar29) || ((uint64_t)((int64_t)pIVar9 + (lVar25 - (int64_t)pwVar17) + 0x340) < 0x20)) {
    uVar21 = 0;
    pbVar24 = pbVar3;
  }
  else {
    if (uVar27 < 0x20) {
      uVar16 = 0;
    }
    else {
      uVar21 = (uint64_t)(uVar27 & 0xffffffe0);
      lVar23 = 0;
      while( true ) {
        uVar6 = ((uint64_t *)((int64_t)pwVar17 + lVar23))[1];
        puVar2 = (uint64_t *)(param_2 + 0xb6f076dd + lVar23);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        *(uint64_t *)(pIVar9[6].e_program + lVar23 + lVar25 + 0x30) =
             *(uint64_t *)((int64_t)pwVar17 + lVar23);
        *(uint64_t *)(pIVar9[6].e_program + lVar23 + lVar25 + 0x30 + 8) = uVar6;
        *(uint64_t *)(pIVar9[7].e_magic + lVar23 + lVar25 + 8) = uVar7;
        *(uint64_t *)(pIVar9[7].e_magic + lVar23 + lVar25 + 8 + 8) = uVar8;
        if (uVar21 - 0x20 == lVar23) break;
        lVar23 = lVar23 + 0x20;
      }
      if ((uVar27 & 0xffffffe0) == uVar27) goto LAB_7fffa4f686a9;
      uVar16 = uVar21;
      if ((uVar27 & 0x1c) == 0) {
        uVar16 = (uint64_t)(uVar27 & 0x1f);
        pbVar24 = pbVar3 + uVar21;
        goto LAB_7fffa4f67dea;
      }
    }
    uVar21 = (uint64_t)(uVar27 & 0xfffffffc);
    pbVar24 = pbVar3 + uVar21;
    do {
      *(uint32_t *)(pbVar3 + uVar16) = *(uint32_t *)((int64_t)pwVar17 + uVar16);
      uVar16 = uVar16 + 4;
    } while (uVar21 != uVar16);
    if ((uVar27 & 0xfffffffc) == uVar27) goto LAB_7fffa4f686a9;
    uVar16 = (uint64_t)(uVar27 & 3);
  }
LAB_7fffa4f67dea:
  uVar14 = uVar16 - 1;
  uVar28 = uVar16 & 3;
  if (uVar28 != 0) {
    uVar16 = (uint64_t)((uint32_t)uVar16 & 0xfffffffc);
    uVar15 = 0;
    do {
      uVar27 = (param_1 | 1) * 0x432322a0;
      bVar18 = (uint8_t)uVar22 & 0x1f;
      uVar27 = uVar27 >> bVar18 | uVar27 << 0x20 - bVar18;
      bVar29 = uVar28 - 1 == uVar15;
      bVar18 = (uint8_t)uVar22 & 0x1f;
      pbVar24[uVar15] = *(uint8_t *)((int64_t)pwVar17 + uVar21);
      if (((param_1 + 0x8b54b399) * -0x76e9d57 ^ uVar22) <= (uVar27 << 0x18 | uVar27 >> 8)) {
        bVar29 = uVar15 < uVar28;
      }
      uVar1 = uVar21 + 1;
      uVar15 = uVar15 + 1;
      uVar27 = (0xbaf7a12aU >> (bVar26 & 0x1f) | -0x45085ed6 << 0x20 - (bVar26 & 0x1f)) *
               (uVar22 | 1);
      uVar21 = uVar21 ^ 1;
      if ((uVar27 * 0x40 | uVar27 >> 0x1a) <
          (~(param_1 + 0x86e10cc0) << bVar18 | ~(param_1 + 0x86e10cc0) >> 0x20 - bVar18)) {
        uVar21 = uVar1;
      }
    } while (!bVar29);
    pbVar24 = pbVar24 + uVar15;
  }
  if (2 < uVar14) {
    uVar14 = uVar16 - 4;
    uVar20 = ~(param_1 + 0x29321d62) - uVar22;
    uVar27 = (param_1 | 1) * ((uVar22 ^ 0x4911dad2) + 0x5154a8ac);
    uVar28 = (uint64_t)((uint32_t)uVar14 & 4);
    if ((uVar27 * 0x2000000 | uVar27 >> 7) < (uVar20 * 0x20000000 | uVar20 >> 3)) {
      uVar28 = uVar14 ^ 4;
    }
    if (uVar28 == 0) {
      *pbVar24 = *(uint8_t *)((int64_t)pwVar17 + uVar21);
      pbVar24[1] = *(uint8_t *)(param_2 + 0xb6f076ce + uVar21);
      pbVar24[2] = *(uint8_t *)(param_2 + 0xb6f076cf + uVar21);
      pbVar24[3] = *(uint8_t *)(param_2 + 0xb6f076d0 + uVar21);
      pbVar24 = pbVar24 + 4;
      uVar21 = uVar21 + 4;
      uVar16 = uVar14;
    }
    if (3 < uVar14) {
      lVar23 = 0;
      do {
        uVar16 = uVar16 - 8;
        pbVar24[lVar23] = *(uint8_t *)((int64_t)pwVar17 + lVar23 + uVar21);
        pbVar24[lVar23 + 1] = *(uint8_t *)((int64_t)pwVar17 + lVar23 + uVar21 + 1);
        pbVar24[lVar23 + 2] = *(uint8_t *)((int64_t)pwVar17 + lVar23 + uVar21 + 2);
        pbVar24[lVar23 + 3] = *(uint8_t *)((int64_t)pwVar17 + lVar23 + uVar21 + 3);
        pbVar24[lVar23 + 4] = *(uint8_t *)((int64_t)pwVar17 + lVar23 + uVar21 + 4);
        pbVar24[lVar23 + 5] = *(uint8_t *)((int64_t)pwVar17 + lVar23 + uVar21 + 5);
        pbVar24[lVar23 + 6] = *(uint8_t *)((int64_t)pwVar17 + lVar23 + uVar21 + 6);
        pbVar24[lVar23 + 7] = *(uint8_t *)((int64_t)pwVar17 + lVar23 + uVar21 + 7);
        lVar23 = lVar23 + 8;
      } while (uVar16 != (((uVar22 | 1) * 0x8230 ^ 0x8af0) & 0xffff));
    }
  }
LAB_7fffa4f686a9:
  *(uint8_t *)(pIVar9[0xb].e_res2_10_ + 1) = (uint8_t)pIVar9[0xb].e_res2_10_[1] | 0x40;
  return pIVar9;
}


// ============================================================================
// Function : FUN_7fffa4f68700  |  RVA: 0x7f8700  |  Size: 3652 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4f68d23) */

void FUN_7fffa4f68700(void)

{
  uint8_t bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  cRam00007fffa47bba46 = '\0';
  auRam00007fffa47bba58 = (uint8_t  [16])0x0;
  auRam00007fffa47bba48 = (uint8_t  [16])0x0;
  uRam00007fffa47bba6d = 0;
  lVar3 = rdtsc();
  lVar3 = lVar3 * 0x2050761b267fa9c;
  lVar4 = -0xd5178919;
  lVar2 = 0;
  while( true ) {
    *(char *)(lVar2 + 0x7fffa47bba48) = (char)((uint64_t)(lVar3 * 0x51edacdc0) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bba46) = (char)((uint64_t)(lVar3 * 0x61b267fa9c) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bba47) = (char)((uint64_t)(lVar3 * 0xf48edd0f10) >> 0x20);
    if (lVar4 == 0x502fce10b3e79e9f) break;
    lVar3 = lVar3 * 0x56dd3218c282e100;
    *(char *)(lVar2 + 0x7fffa47bba49) = (char)((uint64_t)lVar3 >> 0x20);
    lVar2 = lVar2 + 4;
    lVar4 = lVar4 + 0x4eded7dcae5b5e44;
  }
  bVar1 = cRam00007fffa47bba46 + 1U & 3;
  *(uint64_t *)
   ((int64_t)((0x336131aa - (int)lVar2) * 0x15ffa165) + 0x7fffa47c864e + (uint64_t)bVar1 * 8) =
       *(uint64_t *)((int64_t)(short)((0x7e88 - (uint16_t)lVar2) * -0x21f5) + 0x7fffa47becfd);
  *(uint8_t *)((int64_t)(short)((uint16_t)lVar2 ^ 0x836f) + 0x7fffa47c36ef) = bVar1;
  return;
}


// ============================================================================
// Function : FUN_7fffa4f69550  |  RVA: 0x7f9550  |  Size: 80 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4f69550(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  short in_R11W;
  int iVar2;
  
  piVar1 = (int *)(param_2 * 0x4000002000001 ^ 0xfffffffff6475171);
  iVar2 = (int)*(uint64_t *)
                ((uint64_t)
                 (uint16_t)((uint16_t)(0xd327U - in_R11W) >> 1 |
                         (uint16_t)((0xd327U - in_R11W & 1) != 0) << 0xf) + 0xff00000000);
  if (*piVar1 != iVar2) {
    (*(code *)&DAT_7ff8504ead30)(piVar1 + 2);
    LOCK();
    *piVar1 = iVar2;
    UNLOCK();
  }
  piVar1[1] = piVar1[1] + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa4f695a0  |  RVA: 0x7f95a0  |  Size: 20036 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa565caf0@0xeecaf0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4f695a0(void) {
    /* +0x7f95a0 */ __asm { PUSH RBP }
    /* +0x7f95a1 */ __asm { PUSH RSI }
    /* +0x7f95a2 */ __asm { PUSH RBX }
    /* +0x7f95a3 */ __asm { PUSH R15 }
    /* +0x7f95a5 */ __asm { PUSH R12 }
    /* +0x7f95a7 */ __asm { PUSH RDI }
    /* +0x7f95a8 */ __asm { PUSH R13 }
    /* +0x7f95aa */ __asm { PUSH R14 }
    /* +0x7f95ac */ __asm { MOV EAX,0x1758 }
    /* +0x7f95b1 */ __asm { CALL 0x7fffa565caf0 }
    /* +0x7f95b6 */ __asm { SUB RSP,RAX }
    /* +0x7f95b9 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x7f95c1 */ __asm { MOVAPS xmmword ptr [RBP + 0x16c0],XMM13 }
    /* +0x7f95c9 */ __asm { MOVDQA xmmword ptr [RBP + 0x16b0],XMM10 }
    /* +0x7f95d2 */ __asm { MOVDQA xmmword ptr [RBP + 0x16a0],XMM8 }
    /* +0x7f95db */ __asm { MOVAPS xmmword ptr [RBP + 0x1690],XMM15 }
    /* +0x7f95e3 */ __asm { MOVAPS xmmword ptr [RBP + 0x1680],XMM11 }
    /* +0x7f95eb */ __asm { MOVAPS xmmword ptr [RBP + 0x1670],XMM7 }
    /* +0x7f95f2 */ __asm { MOVDQA xmmword ptr [RBP + 0x1660],XMM9 }
    /* +0x7f95fb */ __asm { MOVDQA xmmword ptr [RBP + 0x1650],XMM6 }
    /* +0x7f9603 */ __asm { MOVDQA xmmword ptr [RBP + 0x1640],XMM14 }
    /* +0x7f960c */ __asm { MOVDQA xmmword ptr [RBP + 0x1630],XMM12 }
    /* +0x7f9615 */ __asm { MOV qword ptr [RBP + 0x1628],-0x2 }
    /* +0x7f9620 */ __asm { MOV dword ptr [RBP + 0x1c0],R11D }
    /* +0x7f9627 */ __asm { MOV R13,qword ptr [RBP + 0x1740] }
    /* +0x7f962e */ __asm { MOV dword ptr [RBP + 0x260],0x1b49dc90 }
    /* +0x7f9638 */ __asm { MOV R8D,dword ptr [RBP + 0x260] }
    /* +0x7f963f */ __asm { MOV R8D,0xee0f2006 }
    /* +0x7f9645 */ __asm { MOV EDX,R13D }
    /* +0x7f9648 */ __asm { OR EDX,0x1 }
    /* +0x7f964b */ __asm { MOV qword ptr [RBP + 0x1310],RDX }
    /* +0x7f9652 */ __asm { IMUL R8D,EDX }
    /* +0x7f9656 */ __asm { MOV EAX,0xfd4870d2 }
    /* +0x7f965b */ __asm { XOR RAX,R8 }
    /* +0x7f965e */ __asm { MOV R8,qword ptr [RAX] }
    /* +0x7f9661 */ __asm { MOV RAX,0x200176ab42b }
    /* +0x7f966b */ __asm { SUB RAX,R13 }
    /* +0x7f966e */ __asm { ADD RAX,0x21a7d052 }
    /* +0x7f9674 */ __asm { MOVD XMM7,R13D }
    /* +0x7f9679 */ __asm { CMP RAX,0xeeded2b }
    /* +0x7f967f */ __asm { JZ 0x7fffa4f69715 }
    /* +0x7f9685 */ __asm { MOV R9D,R8D }
    /* +0x7f9688 */ __asm { MOV EDX,0x684ae8a3 }
    /* +0x7f968d */ __asm { MOVQ XMM4,R8 }
    /* +0x7f9692 */ __asm { PSRLQ XMM4,0x18 }
    /* +0x7f9697 */ __asm { MOV R14D,0x55f4657b }
    /* +0x7f969d */ __asm { ADD R14D,0x88edd859 }
    /* +0x7f96a4 */ __asm { ADD EDX,0xdea19ab3 }
    /* +0x7f96aa */ __asm { XOR EDX,R13D }
    /* +0x7f96ad */ __asm { MOV R8D,dword ptr [RDX] }
    /* +0x7f96b0 */ __asm { PAND XMM4,xmmword ptr [0x7fffa56bac70] }
    /* +0x7f96b8 */ __asm { MOVQ RAX,XMM4 }
    /* +0x7f96bd */ __asm { IMUL RAX,R8 }
    /* +0x7f96c1 */ __asm { XOR R14D,R13D }
    /* +0x7f96c4 */ __asm { ADD R14D,0xa69f00b8 }
    /* +0x7f96cb */ __asm { IMUL R9,R8 }
    /* +0x7f96cf */ __asm { SHR R9,0x18 }
    /* +0x7f96d3 */ __asm { MOV qword ptr [RBP + 0x1050],R9 }
    /* +0x7f96da */ __asm { ADD RAX,R9 }
    /* +0x7f96dd */ __asm { MOV qword ptr [RBP + 0x1218],RAX }
    /* +0x7f96e4 */ __asm { MOV dword ptr [RBP + 0x14bc],0x808b0367 }
    /* +0x7f96ee */ __asm { MOV R8D,dword ptr [RBP + 0x14bc] }
    /* +0x7f96f5 */ __asm { MOV RDI,0x1f36b4bc0d13e4e3 }
    /* +0x7f96ff */ __asm { MOV R10,-0x7c9a940b51e459e7 }
    /* +0x7f9709 */ __asm { LEA RDX,[RBP + 0x260] }
    /* +0x7f9710 */ __asm { JMP 0x7fffa4f697ac }
    /* +0x7f9715 */ __asm { MOV EAX,0x95dfe6dc }
    /* +0x7f971a */ __asm { MOV R14D,0x17de31c3 }
    /* +0x7f9720 */ __asm { MOV R10,-0x7c9a940b51e459e7 }
    /* +0x7f972a */ __asm { ADD EAX,R13D }
    /* +0x7f972d */ __asm { XOR EAX,0x4e796949 }
    /* +0x7f9732 */ __asm { MOV R9,R8 }
    /* +0x7f9735 */ __asm { SHR R9,0x18 }
    /* +0x7f9739 */ __asm { AND R9,-0x100 }
    /* +0x7f9740 */ __asm { XOR R14D,0xc087d0c7 }
    /* +0x7f9747 */ __asm { MOV ECX,R13D }
    /* +0x7f974a */ __asm { ROR R14D,CL }
    /* +0x7f974d */ __asm { MOV RDI,0x1f36b4bc0d13e4e3 }
    /* +0x7f9757 */ __asm { LEA RDX,[RBP + 0x260] }
    /* +0x7f975e */ __asm { MOV dword ptr [RBP + 0x14bc],EAX }
    /* +0x7f9764 */ __asm { MOV EAX,dword ptr [RBP + 0x14bc] }
    /* +0x7f976a */ __asm { MOV R11D,R8D }
    /* +0x7f976d */ __asm { MOV R8D,0xfd9d7fbd }
    /* +0x7f9773 */ __asm { IMUL R8D,R8D,0x41d292b1 }
    /* +0x7f977a */ __asm { ROL R8D,0xe }
    /* +0x7f977e */ __asm { MOVD XMM4,R8D }
    /* +0x7f9783 */ __asm { PADDD XMM4,XMM7 }
    /* +0x7f9787 */ __asm { MOVD R8D,XMM4 }
    /* +0x7f978c */ __asm { MOV R8D,dword ptr [R8] }
    /* +0x7f978f */ __asm { IMUL R11,R8 }
    /* +0x7f9793 */ __asm { SHR R11,0x18 }
    /* +0x7f9797 */ __asm { IMUL R9,R8 }
    /* +0x7f979b */ __asm { MOV qword ptr [RBP + 0x1050],R11 }
    /* +0x7f97a2 */ __asm { ADD R9,R11 }
    /* +0x7f97a5 */ __asm { MOV qword ptr [RBP + 0x1218],R9 }
    /* +0x7f97ac */ __asm { MOV ECX,0x95e2ab53 }
    /* +0x7f97b1 */ __asm { MOV R12W,0x8108 }
    /* +0x7f97b6 */ __asm { LEA R8,[0x7fffa5182aae] }
    /* +0x7f97bd */ __asm { LEA RAX,[0x7fffa564e116] }
    /* +0x7f97c4 */ __asm { MOV qword ptr [RBP + 0x1200],RAX }
    /* +0x7f97cb */ __asm { MOV ESI,0x8920adb1 }
    /* +0x7f97d0 */ __asm { XOR ESI,0xe9117b05 }
    /* +0x7f97d6 */ __asm { MOV R11W,0x7ef4 }
    /* +0x7f97db */ __asm { LEA RAX,[RBP + 0xc10] }
    /* +0x7f97e2 */ __asm { MOV R9,RAX }
    /* +0x7f97e5 */ __asm { ADD R9,0x4019dfe0 }
    /* +0x7f97ec */ __asm { MOV RBX,R9 }
    /* +0x7f97ef */ __asm { SHR RBX,0x27 }
    /* +0x7f97f3 */ __asm { XOR RBX,R9 }
    /* +0x7f97f6 */ __asm { MOV R15D,R14D }
    /* +0x7f97f9 */ __asm { OR R15D,0x1 }
    /* +0x7f97fd */ __asm { IMUL ECX,R15D }
    /* +0x7f9801 */ __asm { XOR ECX,R13D }
    /* +0x7f9804 */ __asm { ADD ECX,0x7b14b303 }
    /* +0x7f980a */ __asm { MOVSXD R9,ECX }
    /* +0x7f980d */ __asm { ADD R9,R8 }
    /* +0x7f9810 */ __asm { MOV R8,0x1f40b4d90d57e4bf }
    /* +0x7f981a */ __asm { MOV ECX,R14D }
    /* +0x7f981d */ __asm { ROL ESI,CL }
    /* +0x7f981f */ __asm { MOV qword ptr [RBP + 0xc10],R8 }
    /* +0x7f9826 */ __asm { MOV qword ptr [RBP + 0xc18],R10 }
    /* +0x7f982d */ __asm { MOV R10,-0x7c9a946e51875990 }
    /* +0x7f9837 */ __asm { MOV qword ptr [RBP + 0xe48],R10 }
    /* +0x7f983e */ __asm { MOV qword ptr [RBP + 0x268],R10 }
    /* +0x7f9845 */ __asm { MOV qword ptr [RBP + 0xd90],RDI }
    /* +0x7f984c */ __asm { MOV qword ptr [RBP + 0x260],RDI }
    /* +0x7f9853 */ __asm { MOVDQA XMM4,xmmword ptr [RDX] }
    /* +0x7f9857 */ __asm { ADD R12D,0xffffca8b }
    /* +0x7f985e */ __asm { XOR R11D,R13D }
    /* +0x7f9861 */ __asm { IMUL R8D,R11D,0x2c8b }
    /* +0x7f9868 */ __asm { ADD R8D,R14D }
    /* +0x7f986b */ __asm { MOVZX EDI,R8W }
    /* +0x7f986f */ __asm { PXOR XMM4,xmmword ptr [RBP + 0xc10] }
    /* +0x7f9877 */ __asm { MOVDQA xmmword ptr [RBP + 0xc10],XMM4 }
    /* +0x7f987f */ __asm { MOV RCX,RAX }
    /* +0x7f9882 */ __asm { CALL R9 }
    /* +0x7f9885 */ __asm { MOV R8,RAX }
    /* +0x7f9888 */ __asm { SHL R8,0x35 }
    /* +0x7f988c */ __asm { ADD R8,RAX }
    /* +0x7f988f */ __asm { SHL RAX,0x10 }
    /* +0x7f9893 */ __asm { MOV qword ptr [RBP + 0x250],R8 }
    /* +0x7f989a */ __asm { XOR RAX,R8 }
    /* +0x7f989d */ __asm { ROL RAX,0x19 }
    /* +0x7f98a1 */ __asm { IMUL R12D,R15D }
    /* +0x7f98a5 */ __asm { MOV ECX,R13D }
    /* +0x7f98a8 */ __asm { ROL R12W,CL }
    /* +0x7f98ac */ __asm { NOT R12D }
    /* +0x7f98af */ __asm { MOVSX R8,R12W }
    /* +0x7f98b3 */ __asm { ADD R8,qword ptr [RBP + 0x1200] }
    /* +0x7f98ba */ __asm { MOV R10,RBX }
    /* +0x7f98bd */ __asm { MOV RCX,RAX }
    /* +0x7f98c0 */ __asm { MOV R9,RSI }
    /* +0x7f98c3 */ __asm { CALL R8 }
    /* +0x7f98c6 */ __asm { PXOR XMM4,XMM4 }
    /* +0x7f98ca */ __asm { MOVDQA xmmword ptr [RBP],XMM4 }
    /* +0x7f98cf */ __asm { MOV qword ptr [RBP + 0x10],0x0 }
    /* +0x7f98d7 */ __asm { MOV qword ptr [RBP + 0x18],0x7 }
    /* +0x7f98df */ __asm { MOV RAX,qword ptr GS:[RDI] }
    /* +0x7f98e3 */ __asm { MOV R8W,0xa824 }
    /* +0x7f98e8 */ __asm { SUB R8D,R14D }
    /* +0x7f98eb */ __asm { IMUL R8D,R8D,-0x4673 }
    /* +0x7f98f2 */ __asm { MOV EDI,dword ptr [RAX + 0x2c0] }
    /* +0x7f98f8 */ __asm { ADD R8D,R13D }
    /* +0x7f98fb */ __asm { MOVZX R8D,R8W }
    /* +0x7f98ff */ __asm { CMP EDI,R8D }
    /* +0x7f9902 */ __asm { MOV qword ptr [RBP + 0x248],R14 }
    /* +0x7f9909 */ __asm { MOV qword ptr [RBP + 0xea8],R15 }
    /* +0x7f9910 */ __asm { JNZ 0x7fffa4f6991e }
    /* +0x7f9912 */ __asm { MOV EBX,0x7 }
    /* +0x7f9917 */ __asm { XOR ESI,ESI }
    /* +0x7f9919 */ __asm { JMP 0x7fffa4f6a267 }
    /* +0x7f991e */ __asm { MOV R8D,0xf7741645 }
    /* +0x7f9924 */ __asm { MOV R10D,0x39c54d76 }
    /* +0x7f992a */ __asm { SUB R10D,R13D }
    /* +0x7f992d */ __asm { IMUL R10D,R10D,-0x35aa80f5 }
    /* +0x7f9934 */ __asm { ROL R10D,0x1c }
    /* +0x7f9938 */ __asm { IMUL R10D,R15D }
    /* +0x7f993c */ __asm { MOVSXD RAX,R10D }
    /* +0x7f993f */ __asm { XOR R8D,R14D }
    /* +0x7f9942 */ __asm { MOV ECX,R13D }
    /* +0x7f9945 */ __asm { ROL R8D,CL }
    /* +0x7f9948 */ __asm { IMUL R8D,R8D,-0x1e33f205 }
    /* +0x7f994f */ __asm { ADD R8D,0x3a942f51 }
    /* +0x7f9956 */ __asm { MOVSXD R8,R8D }
    /* +0x7f9959 */ __asm { CMP RAX,R8 }
    /* +0x7f995c */ __asm { JA 0x7fffa4f69a0b }
    /* +0x7f9962 */ __asm { MOV RDX,-0x7e6df35855008406 }
    /* +0x7f996c */ __asm { MOV R11,0x4fab0fda8f9c728d }
    /* +0x7f9976 */ __asm { MOV RAX,-0x7cf4940151ee59fd }
    /* +0x7f9980 */ __asm { MOV R15D,0x38ebfc03 }
    /* +0x7f9986 */ __asm { SUB R15D,R14D }
    /* +0x7f9989 */ __asm { LEA R10,[RBP + 0x260] }
    /* +0x7f9990 */ __asm { MOV qword ptr [RBP + 0xc28],RDX }
    /* +0x7f9997 */ __asm { ADD R15D,0xc000008d }
    /* +0x7f999e */ __asm { MOV qword ptr [RBP + 0xc18],RAX }
    /* +0x7f99a5 */ __asm { MOV RAX,0x1f45b4d90d40e4bf }
    /* +0x7f99af */ __asm { MOV qword ptr [RBP + 0xc10],RAX }
    /* +0x7f99b6 */ __asm { MOV RAX,0x4fab0fda8fc072fe }
    /* +0x7f99c0 */ __asm { MOV qword ptr [RBP + 0xc20],RAX }
    /* +0x7f99c7 */ __asm { MOV qword ptr [RBP + 0x270],R11 }
    /* +0x7f99ce */ __asm { MOVAPS XMM2,xmmword ptr [RBP + 0xc20] }
    /* +0x7f99d5 */ __asm { MOV R11,qword ptr [RBP + 0xd90] }
    /* +0x7f99dc */ __asm { MOV qword ptr [RBP + 0x260],R11 }
    /* +0x7f99e3 */ __asm { MOV qword ptr [RBP + 0x278],RDX }
    /* +0x7f99ea */ __asm { MOVDQA XMM4,xmmword ptr [RBP + 0xc10] }
    /* +0x7f99f2 */ __asm { MOV RDX,qword ptr [RBP + 0xe48] }
    /* +0x7f99f9 */ __asm { MOV qword ptr [RBP + 0x268],RDX }
    /* +0x7f9a00 */ __asm { MOV ECX,R13D }
    /* +0x7f9a03 */ __asm { ROR R15D,CL }
    /* +0x7f9a06 */ __asm { JMP 0x7fffa4f69ab2 }
    /* +0x7f9a0b */ __asm { MOV RDX,0x4fab0fda8fc072fe }
    /* +0x7f9a15 */ __asm { LEA R10,[RBP + 0x260] }
    /* +0x7f9a1c */ __asm { MOV R11,0x1f45b4d90d40e4bf }
    /* +0x7f9a26 */ __asm { MOV RAX,-0x7cf4940151ee59fd }
    /* +0x7f9a30 */ __asm { MOV qword ptr [RBP + 0xc18],RAX }
    /* +0x7f9a37 */ __asm { MOVDQA XMM4,xmmword ptr [RBP + 0xc10] }
    /* +0x7f9a3f */ __asm { MOV R8D,0xa1470530 }
    /* +0x7f9a45 */ __asm { MOV RAX,qword ptr [RBP + 0xd90] }
    /* +0x7f9a4c */ __asm { MOV qword ptr [RBP + 0x260],RAX }
    /* +0x7f9a53 */ __asm { MOV RAX,-0x7e6df35855008406 }
    /* +0x7f9a5d */ __asm { XOR R8D,R13D }
    /* +0x7f9a60 */ __asm { IMUL R15D,R8D,0x38da4a2f }
    /* +0x7f9a67 */ __asm { MOV ECX,R14D }
    /* +0x7f9a6a */ __asm { ROR R15D,CL }
    /* +0x7f9a6d */ __asm { MOV qword ptr [RBP + 0x278],RAX }
    /* +0x7f9a74 */ __asm { NOT R15D }
    /* +0x7f9a77 */ __asm { MOV R8,0x4fab0fda8f9c728d }
    /* +0x7f9a81 */ __asm { MOVAPS XMM2,xmmword ptr [RBP + 0xc20] }
    /* +0x7f9a88 */ __asm { MOV qword ptr [RBP + 0xc20],RDX }
    /* +0x7f9a8f */ __asm { MOV qword ptr [RBP + 0xc10],R11 }
    /* +0x7f9a96 */ __asm { MOV RDX,qword ptr [RBP + 0xe48] }
    /* +0x7f9a9d */ __asm { MOV qword ptr [RBP + 0x268],RDX }
    /* +0x7f9aa4 */ __asm { MOV qword ptr [RBP + 0xc28],RAX }
    /* +0x7f9aab */ __asm { MOV qword ptr [RBP + 0x270],R8 }
    /* +0x7f9ab2 */ __asm { MOV R8D,0x25ad61af }
    /* +0x7f9ab8 */ __asm { MOV R11W,0x3a14 }
    /* +0x7f9abd */ __asm { ADD R11D,0xffffdf48 }
    /* +0x7f9ac4 */ __asm { ROL R11W,0x4 }
    /* +0x7f9ac9 */ __asm { LEA RAX,[0x7fffa5184a48] }
    /* +0x7f9ad0 */ __asm { XORPS XMM2,xmmword ptr [R10 + 0x10] }
    /* +0x7f9ad5 */ __asm { MOVAPS xmmword ptr [RBP + 0xc20],XMM2 }
    /* +0x7f9adc */ __asm { PXOR XMM4,xmmword ptr [R10] }
    /* +0x7f9ae1 */ __asm { MOV ECX,R13D }
    /* +0x7f9ae4 */ __asm { ROR R11W,CL }
    /* +0x7f9ae8 */ __asm { MOVDQA xmmword ptr [RBP + 0xc10],XMM4 }
    /* +0x7f9af0 */ __asm { ADD R11D,R15D }
    /* +0x7f9af3 */ __asm { MOVZX R12D,R11W }
    /* +0x7f9af7 */ __asm { ADD R8D,0x7b9978bf }
    /* +0x7f9afe */ __asm { XOR R8D,R14D }
    /* +0x7f9b01 */ __asm { ADD R8D,R13D }
    /* +0x7f9b04 */ __asm { ADD R8D,0x97234006 }
    /* +0x7f9b0b */ __asm { MOVSXD R8,R8D }
    /* +0x7f9b0e */ __asm { ADD R8,RAX }
    /* +0x7f9b11 */ __asm { LEA RCX,[RBP + 0xc10] }
    /* +0x7f9b18 */ __asm { CALL R8 }
    /* +0x7f9b1b */ __asm { MOV RSI,RAX }
    /* +0x7f9b1e */ __asm { CMP RAX,R12 }
    /* +0x7f9b21 */ __asm { JA 0x7fffa4f69c0f }
    /* +0x7f9b27 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x7f9b2e */ __asm { MOV R10,0x0 }
    /* +0x7f9b35 */ __asm { NOP }
    /* +0x7f9b36 */ __asm { MOV qword ptr [RBP + 0x10],RSI }
    /* +0x7f9b3a */ __asm { MOV R8,RSI }
    /* +0x7f9b3d */ __asm { ADD R8,RSI }
    /* +0x7f9b40 */ __asm { MOV RCX,RBP }
    /* +0x7f9b43 */ __asm { LEA RDX,[RBP + 0xc10] }
    /* +0x7f9b4a */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7f9b4f */ __asm { MOV word ptr [RBP + RSI*0x2],0x0 }
    /* +0x7f9b56 */ __asm { CMP EDI,0xa }
    /* +0x7f9b59 */ __asm { JC 0x7fffa4f69cf2 }
    /* +0x7f9b5f */ __asm { MOV R9D,0x6 }
    /* +0x7f9b65 */ __asm { LEA RBX,[RBP + 0x286] }
    /* +0x7f9b6c */ __asm { LEA RSI,[0x7fffa5865513] }
    /* +0x7f9b73 */ __asm { MOV R14,0x28f5c28f5c28f5d }
    /* +0x7f9b7d */ __asm { MOV R12D,0x64 }
    /* +0x7f9b83 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0x7f9b90 */ __asm { MOV R8,-0xa3d740a9271e7a4 }
    /* +0x7f9b9a */ __asm { MOV R13,RSI }
    /* +0x7f9b9d */ __asm { MOV R10W,0xc63e }
    /* +0x7f9ba2 */ __asm { IMUL R10D,R10D,-0xa73 }
    /* +0x7f9ba9 */ __asm { MOV RDX,qword ptr [RBP + 0x1740] }
    /* +0x7f9bb0 */ __asm { SUB R10D,EDX }
    /* +0x7f9bb3 */ __asm { ADD R8,0x550143cc }
    /* +0x7f9bba */ __asm { MOV R11,R15 }
    /* +0x7f9bbd */ __asm { MOV ECX,R15D }
    /* +0x7f9bc0 */ __asm { ROR R10W,CL }
    /* +0x7f9bc4 */ __asm { MOV ECX,EDX }
    /* +0x7f9bc6 */ __asm { ROR R8,CL }
    /* +0x7f9bc9 */ __asm { MOVSX RCX,R10W }
    /* +0x7f9bcd */ __asm { MOV R15D,EDI }
    /* +0x7f9bd0 */ __asm { MOV RAX,R15 }
    /* +0x7f9bd3 */ __asm { IMUL RAX,R14 }
    /* +0x7f9bd7 */ __asm { MUL R12 }
    /* +0x7f9bda */ __asm { MOV R10,RDX }
    /* +0x7f9bdd */ __asm { ADD RCX,R13 }
    /* +0x7f9be0 */ __asm { NOT R8 }
    /* +0x7f9be3 */ __asm { ROL R8,0x28 }
    /* +0x7f9be7 */ __asm { MOV RAX,R8 }
    /* +0x7f9bea */ __asm { MUL R15 }
    /* +0x7f9bed */ __asm { MOV R8D,dword ptr [RCX + R10*0x4] }
    /* +0x7f9bf1 */ __asm { MOV dword ptr [RBX],R8D }
    /* +0x7f9bf4 */ __asm { CMP EDI,0x3e8 }
    /* +0x7f9bfa */ __asm { JC 0x7fffa4f69d05 }
    /* +0x7f9c00 */ __asm { ADD R9,0x4 }
    /* +0x7f9c04 */ __asm { ADD RBX,-0x4 }
    /* +0x7f9c08 */ __asm { MOV EDI,EDX }
    /* +0x7f9c0a */ __asm { MOV R15,R11 }
    /* +0x7f9c0d */ __asm { JMP 0x7fffa4f69b90 }
    /* +0x7f9c0f */ __asm { MOV RAX,0x7fffffffffffffff }
    /* +0x7f9c19 */ __asm { CMP RSI,RAX }
    /* +0x7f9c1c */ __asm { JNC 0x7fffa4f705ff }
    /* +0x7f9c22 */ __asm { MOV R10,RSI }
    /* +0x7f9c25 */ __asm { OR R10,0x7 }
    /* +0x7f9c29 */ __asm { MOV AX,0x777a }
    /* +0x7f9c2d */ __asm { LEA R8,[0x7fffa526cced] }
    /* +0x7f9c34 */ __asm { MOV R12,RSI }
    /* +0x7f9c37 */ __asm { ADD R12,RSI }
    /* +0x7f9c3a */ __asm { MOV EDX,R13D }
    /* +0x7f9c3d */ __asm { XOR EDX,EAX }
    /* +0x7f9c3f */ __asm { MOV EAX,R15D }
    /* +0x7f9c42 */ __asm { OR EAX,0x1 }
    /* +0x7f9c45 */ __asm { MOV ECX,0x135249cb }
    /* +0x7f9c4a */ __asm { XOR ECX,0xb7654fbe }
    /* +0x7f9c50 */ __asm { ROL ECX,0x8 }
    /* +0x7f9c53 */ __asm { IMUL ECX,EAX }
    /* +0x7f9c56 */ __asm { ADD ECX,R13D }
    /* +0x7f9c59 */ __asm { MOVSXD RAX,ECX }
    /* +0x7f9c5c */ __asm { CMP R10,0xb }
    /* +0x7f9c60 */ __asm { MOV R14D,0xa }
    /* +0x7f9c66 */ __asm { CMOVNC R14,R10 }
    /* +0x7f9c6a */ __asm { MOV R9,0x7ffffffffffffffe }
    /* +0x7f9c74 */ __asm { CMP R14,R9 }
    /* +0x7f9c77 */ __asm { CMOVNC R14,R9 }
    /* +0x7f9c7b */ __asm { LEA R10,[0x2 + R14*0x2] }
    /* +0x7f9c83 */ __asm { MOV R9,R10 }
    /* +0x7f9c86 */ __asm { SHL R9,0x3c }
    /* +0x7f9c8a */ __asm { XOR R9,R10 }
    /* +0x7f9c8d */ __asm { SHL R10,0xe }
    /* +0x7f9c91 */ __asm { MOV RCX,0x1865d799980f }
    /* +0x7f9c9b */ __asm { ADD R10,RCX }
    /* +0x7f9c9e */ __asm { ROL DX,0xd }
    /* +0x7f9ca2 */ __asm { ADD R10,R9 }
    /* +0x7f9ca5 */ __asm { ADD EDX,dword ptr [RBP + 0x248] }
    /* +0x7f9cab */ __asm { MOVSX RDX,DX }
    /* +0x7f9caf */ __asm { ADD RDX,R8 }
    /* +0x7f9cb2 */ __asm { CALL RDX }
    /* +0x7f9cb4 */ __asm { MOV RBX,RCX }
    /* +0x7f9cb7 */ __asm { ROL RBX,0x2c }
    /* +0x7f9cbb */ __asm { MOV RAX,RBX }
    /* +0x7f9cbe */ __asm { SHL RAX,0x36 }
    /* +0x7f9cc2 */ __asm { SUB RBX,RAX }
    /* +0x7f9cc5 */ __asm { LEA RDX,[RBP + 0xc10] }
    /* +0x7f9ccc */ __asm { MOV R8,R12 }
    /* +0x7f9ccf */ __asm { MOV RCX,RBX }
    /* +0x7f9cd2 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7f9cd7 */ __asm { MOV word ptr [RBX + RSI*0x2],0x0 }
    /* +0x7f9cdd */ __asm { MOV qword ptr [RBP + 0x18],R14 }
    /* +0x7f9ce1 */ __asm { MOV qword ptr [RBP + 0x10],RSI }
    /* +0x7f9ce5 */ __asm { MOV qword ptr [RBP],RBX }
    /* +0x7f9ce9 */ __asm { CMP EDI,0xa }
    /* +0x7f9cec */ __asm { JNC 0x7fffa4f69b5f }
    /* +0x7f9cf2 */ __asm { LEA RBX,[RBP + 0x288] }
    /* +0x7f9cf9 */ __asm { OR EDI,0x30 }
    /* +0x7f9cfc */ __asm { MOV word ptr [RBP + 0x288],DI }
    /* +0x7f9d03 */ __asm { JMP 0x7fffa4f69d48 }
    /* +0x7f9d05 */ __asm { CMP EDI,0x63 }
    /* +0x7f9d08 */ __asm { MOV R15,R11 }
    /* +0x7f9d0b */ __asm { JBE 0x7fffa4f69d48 }
    /* +0x7f9d0d */ __asm { OR EDX,0x30 }
    /* +0x7f9d10 */ __asm { MOV word ptr [RBX + -0x2],DX }
    /* +0x7f9d14 */ __asm { PXOR XMM4,XMM4 }
    /* +0x7f9d18 */ __asm { MOVDQA xmmword ptr [RBP + 0xc20],XMM4 }
    /* +0x7f9d20 */ __asm { MOVDQA xmmword ptr [RBP + 0xc10],XMM4 }
    /* +0x7f9d28 */ __asm { TEST R9,R9 }
    /* +0x7f9d2b */ __asm { MOV R14,qword ptr [RBP + 0x248] }
    /* +0x7f9d32 */ __asm { MOV RAX,0x7fffffffffffffff }
    /* +0x7f9d3c */ __asm { JZ 0x7fffa4f6ffe5 }
    /* +0x7f9d42 */ __asm { ADD RBX,-0x2 }
    /* +0x7f9d46 */ __asm { JMP 0x7fffa4f69d6d }
    /* +0x7f9d48 */ __asm { MOV R14,qword ptr [RBP + 0x248] }
    /* +0x7f9d4f */ __asm { MOV RAX,0x7fffffffffffffff }
    /* +0x7f9d59 */ __asm { PXOR XMM4,XMM4 }
    /* +0x7f9d5d */ __asm { MOVDQA xmmword ptr [RBP + 0xc20],XMM4 }
    /* +0x7f9d65 */ __asm { MOVDQA xmmword ptr [RBP + 0xc10],XMM4 }
    /* +0x7f9d6d */ __asm { LEA RDI,[RBP + 0x28a] }
    /* +0x7f9d74 */ __asm { SUB RDI,RBX }
    /* +0x7f9d77 */ __asm { MOV RSI,RDI }
    /* +0x7f9d7a */ __asm { SAR RSI,0x1 }
    /* +0x7f9d7d */ __asm { CMP RSI,RAX }
    /* +0x7f9d80 */ __asm { JNC 0x7fffa4f705d3 }
    /* +0x7f9d86 */ __asm { CMP RSI,0x7 }
    /* +0x7f9d8a */ __asm { JBE 0x7fffa4f69e38 }
    /* +0x7f9d90 */ __asm { MOV R8,RSI }
    /* +0x7f9d93 */ __asm { OR R8,0x7 }
    /* +0x7f9d97 */ __asm { CMP R8,0xb }
    /* +0x7f9d9b */ __asm { MOV R12D,0xa }
    /* +0x7f9da1 */ __asm { CMOVNC R12,R8 }
    /* +0x7f9da5 */ __asm { MOV R10D,0x91df2dde }
    /* +0x7f9dab */ __asm { MOV EAX,0xd2acd1b6 }
    /* +0x7f9db0 */ __asm { SUB EAX,R10D }
    /* +0x7f9db3 */ __asm { CMP R8,0x7ff }
    /* +0x7f9dba */ __asm { SETNC DL }
    /* +0x7f9dbd */ __asm { MOV ECX,R15D }
    /* +0x7f9dc0 */ __asm { ROR EAX,CL }
    /* +0x7f9dc2 */ __asm { LEA RCX,[R12 + R12*0x1] }
    /* +0x7f9dc6 */ __asm { CDQE }
    /* +0x7f9dc8 */ __asm { MOV R8D,0xd44bfb8a }
    /* +0x7f9dce */ __asm { MOV R11,qword ptr [RBP + 0x1740] }
    /* +0x7f9dd5 */ __asm { MOV R9D,R11D }
    /* +0x7f9dd8 */ __asm { SUB R9D,R14D }
    /* +0x7f9ddb */ __asm { ADD R8D,R9D }
    /* +0x7f9dde */ __asm { ADD R8D,0x3337e36e }
    /* +0x7f9de5 */ __asm { CMP RAX,R8 }
    /* +0x7f9de8 */ __asm { SBB DL,0x0 }
    /* +0x7f9deb */ __asm { JZ 0x7fffa4f69e7d }
    /* +0x7f9df1 */ __asm { ADD RCX,0x29 }
    /* +0x7f9df5 */ __asm { MOV R8W,0xee84 }
    /* +0x7f9dfa */ __asm { XOR R8D,0x112d }
    /* +0x7f9e01 */ __asm { ADD R8D,0x256 }
    /* +0x7f9e08 */ __asm { MOV RDX,qword ptr [RBP + 0xea8] }
    /* +0x7f9e0f */ __asm { IMUL EDX,R8D }
    /* +0x7f9e13 */ __asm { MOVSX RAX,DX }
    /* +0x7f9e17 */ __asm { LEA R8,[0x7fffa522965f] }
    /* +0x7f9e1e */ __asm { ADD R8,RAX }
    /* +0x7f9e21 */ __asm { CALL R8 }
    /* +0x7f9e24 */ __asm { MOV R14,RAX }
    /* +0x7f9e27 */ __asm { ADD R14,0x27 }
    /* +0x7f9e2b */ __asm { AND R14,-0x20 }
    /* +0x7f9e2f */ __asm { MOV qword ptr [R14 + -0x8],RAX }
    /* +0x7f9e33 */ __asm { JMP 0x7fffa4f69ebb }
    /* +0x7f9e38 */ __asm { MOV qword ptr [RBP + 0xc20],RSI }
    /* +0x7f9e3f */ __asm { MOV qword ptr [RBP + 0xc28],0x7 }
    /* +0x7f9e4a */ __asm { LEA RCX,[RBP + 0xc10] }
    /* +0x7f9e51 */ __asm { MOV R8,RDI }
    /* +0x7f9e54 */ __asm { MOV RDX,RBX }
    /* +0x7f9e57 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7f9e5c */ __asm { MOV word ptr [RBP + RSI*0x2 + 0xc10],0x0 }
    /* +0x7f9e66 */ __asm { MOV R12,qword ptr [RBP + 0xc28] }
    /* +0x7f9e6d */ __asm { MOV R9,qword ptr [RBP + 0xc10] }
    /* +0x7f9e74 */ __asm { MOV RSI,qword ptr [RBP + 0xc20] }
    /* +0x7f9e7b */ __asm { JMP 0x7fffa4f69eef }
    /* +0x7f9e7d */ __asm { MOV R10,0x0 }
    /* +0x7f9e84 */ __asm { NOP }
    /* +0x7f9e85 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x7f9e8c */ __asm { MOV R8D,0x1f108de2 }
    /* +0x7f9e92 */ __asm { IMUL R8D,dword ptr [RBP + 0xea8] }
    /* +0x7f9e9a */ __asm { LEA RAX,[0x7fffa522f8e1] }
    /* +0x7f9ea1 */ __asm { ADD RCX,0x2 }
    /* +0x7f9ea5 */ __asm { XOR R8D,0xa53d570f }
    /* +0x7f9eac */ __asm { SUB R8D,R11D }
    /* +0x7f9eaf */ __asm { MOVSXD R8,R8D }
    /* +0x7f9eb2 */ __asm { ADD R8,RAX }
    /* +0x7f9eb5 */ __asm { CALL R8 }
    /* +0x7f9eb8 */ __asm { MOV R14,RAX }
    /* +0x7f9ebb */ __asm { MOV qword ptr [RBP + 0xc20],RSI }
    /* +0x7f9ec2 */ __asm { MOV qword ptr [RBP + 0xc10],R14 }
    /* +0x7f9ec9 */ __asm { MOV qword ptr [RBP + 0xc28],R12 }
    /* +0x7f9ed0 */ __asm { MOV R8,RDI }
    /* +0x7f9ed3 */ __asm { MOV RCX,R14 }
    /* +0x7f9ed6 */ __asm { MOV RDX,RBX }
    /* +0x7f9ed9 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x7f9ede */ __asm { MOV R9,R14 }
    /* +0x7f9ee1 */ __asm { MOV word ptr [R14 + RDI*0x1],0x0 }
    /* +0x7f9ee8 */ __asm { MOV R14,qword ptr [RBP + 0x248] }
    /* +0x7f9eef */ __asm { MOV R8D,0x56e2dedc }
    /* +0x7f9ef5 */ __asm { IMUL R8D,dword ptr [RBP + 0xea8] }
    /* +0x7f9efd */ __asm { MOV RDI,qword ptr [RBP + 0x10] }
    /* +0x7f9f01 */ __asm { MOV R13,qword ptr [RBP + 0x18] }
    /* +0x7f9f05 */ __asm { XOR R10D,R10D }
    /* +0x7f9f08 */ __asm { CMP R12,0x8 }
    /* +0x7f9f0c */ __asm { SETNC R10B }
    /* +0x7f9f10 */ __asm { XOR EAX,EAX }
    /* +0x7f9f12 */ __asm { CMP R12,0x7 }
    /* +0x7f9f16 */ __asm { SETC AL }
    /* +0x7f9f19 */ __asm { ROL R8D,0x13 }
    /* +0x7f9f1d */ __asm { MOV RDX,qword ptr [RBP + 0x1740] }
    /* +0x7f9f24 */ __asm { ADD R8D,EDX }
    /* +0x7f9f27 */ __asm { NOT R8D }
    /* +0x7f9f2a */ __asm { CMP R8,0x4fdd2d10 }
    /* +0x7f9f31 */ __asm { CMOVNZ EAX,R10D }
    /* +0x7f9f35 */ __asm { TEST AL,AL }
    /* +0x7f9f37 */ __asm { LEA RBX,[RBP + 0xc10] }
    /* +0x7f9f3e */ __asm { CMOVNZ RBX,R9 }
    /* +0x7f9f42 */ __asm { MOV RAX,R13 }
    /* +0x7f9f45 */ __asm { SUB RAX,RDI }
    /* +0x7f9f48 */ __asm { CMP RSI,RAX }
    /* +0x7f9f4b */ __asm { JBE 0x7fffa4f6a129 }
    /* +0x7f9f51 */ __asm { MOV qword ptr [RBP + 0xe20],R9 }
    /* +0x7f9f58 */ __asm { MOV qword ptr [RBP + 0x1200],R15 }
    /* +0x7f9f5f */ __asm { MOV R15,0x7ffffffffffffffe }
    /* +0x7f9f69 */ __asm { MOV RAX,R15 }
    /* +0x7f9f6c */ __asm { SUB RAX,RDI }
    /* +0x7f9f6f */ __asm { CMP RAX,RSI }
    /* +0x7f9f72 */ __asm { JC 0x7fffa4f71366 }
    /* +0x7f9f78 */ __asm { LEA RAX,[RSI + RDI*0x1] }
    /* +0x7f9f7c */ __asm { MOV qword ptr [RBP + 0x140],RAX }
    /* +0x7f9f83 */ __asm { OR RAX,0x7 }
    /* +0x7f9f87 */ __asm { CMP RAX,R15 }
    /* +0x7f9f8a */ __asm { JA 0x7fffa4f69fee }
    /* +0x7f9f8c */ __asm { MOV EDX,0x83adaf6e }
}


// ============================================================================
// Function : Unwind@7fffa4fcafa0  |  RVA: 0x85afa0  |  Size: 350 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fcafa0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  code *pcVar5;
  uint32_t uVar6;
  
  uVar3 = param_2 + 0xc90;
  uVar4 = (int)*(uint64_t *)(param_2 + 0x1280) + 0xb139fe3c;
  uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x17c0);
  bVar1 = bVar2 & 0x1f;
  uVar6 = *(int *)(param_2 + 0x2c8) + 0x988840bf;
  bVar2 = bVar2 & 0x1f;
  pcVar5 = (code *)((int64_t)(int)(uVar6 >> bVar2 | uVar6 << 0x20 - bVar2) + 0x7fffa54a4cab);
  uVar3 = (uVar3 << 0x2b | uVar3 >> 0x15) ^ (uVar3 << 0x29 | uVar3 >> 0x17) ^ uVar3;
  (*pcVar5)(*(uint64_t *)(param_2 + 0x17c0),uVar3,uVar4 >> bVar1 | uVar4 << 0x20 - bVar1,pcVar5,
            (uVar3 << 7 | uVar3 >> 0x39) ^ (uVar3 << 5 | uVar3 >> 0x3b) ^ uVar3);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fcb100  |  RVA: 0x85b100  |  Size: 312 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fcb100(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x98)) {
    uVar1 = (uint16_t)*(uint64_t *)(param_2 + 0x17c0) ^ 0x2709;
    (*(code *)(&UNK_7fffa568a609 +
              (short)((short)*(uint64_t *)(param_2 + 0x2c8) + (uVar1 << 6 | uVar1 >> 10))))
              (*(uint64_t *)(param_2 + 0x2c8),
               &UNK_7fffa568a609 +
               (short)((short)*(uint64_t *)(param_2 + 0x2c8) + (uVar1 << 6 | uVar1 >> 10)),
               *(uint64_t *)(param_2 + 0x80) >> 0x3d ^ *(uint64_t *)(param_2 + 0x80));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fcb240  |  RVA: 0x85b240  |  Size: 286 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fcb240(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  if (*(int64_t *)(param_2 + 0xfa8) != 0) {
    uVar1 = (uint16_t)((int)*(uint64_t *)(param_2 + 0xf08) * 0x3b7f);
    (*(code *)((int64_t)
               (short)(((uVar1 << 3 | uVar1 >> 0xd) - (short)*(uint32_t *)(param_2 + 0xf58)) +
                      0x2846) + 0x7fffa5085e4a))();
  }
  return;
}


// ============================================================================
// Function : Catch@7fffa4fcb360  |  RVA: 0x85b360  |  Size: 232 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa4fcb360(void)

{
  return &UNK_7fffa4f733bf;
}

