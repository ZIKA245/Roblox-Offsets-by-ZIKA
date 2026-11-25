// Subsystem: Internal Routines Cluster 07 (0x98e4f0 .. 0x9f9410)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : Unwind@7fffa50fe4f0  |  RVA: 0x98e4f0  |  Size: 316 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50fe4f0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x448) & 0xf;
  if ((uint64_t)(uint16_t)(0xe001U >> bVar1 | -0x1fff << 0x10 - bVar1) <
      *(uint64_t *)(param_2 + 0x58)) {
    pcVar2 = (code *)((int64_t)((int)*(uint64_t *)(param_2 + 0x448) + -0x15eada29) +
                     0x7fffa5694b4c);
    (*pcVar2)(*(uint64_t *)(param_2 + 0x448),pcVar2,
              *(uint64_t *)(param_2 + 0x40) >> 0x3d ^ *(uint64_t *)(param_2 + 0x40));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50fe630  |  RVA: 0x98e630  |  Size: 321 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50fe630(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 200)) {
    pcVar1 = (code *)((int64_t)
                      (short)(((uint16_t)*(uint64_t *)(param_2 + 0x430) ^ 0xfc9a) -
                             (short)*(uint32_t *)(param_2 + 0x448)) + 0x7fffa568f622);
    (*pcVar1)(param_1,pcVar1,*(uint64_t *)(param_2 + 0xb0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xb0)
             );
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50fe780  |  RVA: 0x98e780  |  Size: 301 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50fe780(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x58)) {
    uVar2 = (short)*(uint64_t *)(param_2 + 0x170) * -0x13fa;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1b8) & 0xf;
    (*(code *)((int64_t)(short)((uVar2 << bVar1 | uVar2 >> 0x10 - bVar1) + 0xd5c9) + 0x7fffa568c283
              ))(*(uint64_t *)(param_2 + 400),param_2,
                 *(uint64_t *)(param_2 + 0x40) >> 0x3d ^ *(uint64_t *)(param_2 + 0x40));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50fe8b0  |  RVA: 0x98e8b0  |  Size: 320 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50fe8b0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 200)) {
    uVar1 = *(uint64_t *)(param_2 + 0xb0);
    (*(code *)((int64_t)
               (short)(((uint16_t)*(uint64_t *)(param_2 + 0x430) | 1) *
                       ((short)*(uint64_t *)(param_2 + 0x448) + 0x233e) + 0x64ac) + 0x7fffa568d4b9
              ))(*(uint64_t *)(param_2 + 0x448),uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50fe9f0  |  RVA: 0x98e9f0  |  Size: 307 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50fe9f0(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x1f8)) {
    uVar1 = 0x718ff69a - ((int)*(uint64_t *)(param_2 + 0x448) + -0x31961472);
    uVar1 = uVar1 * 0x20000 | uVar1 >> 0xf;
    (*(code *)((int64_t)(int)uVar1 + 0x7fffa56961b9))
              (*(uint64_t *)(param_2 + 0x448),uVar1,
               *(uint64_t *)(param_2 + 0x1e0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1e0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50feb30  |  RVA: 0x98eb30  |  Size: 309 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50feb30(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x1f8)) {
    pcVar1 = (code *)((int64_t)(int)~(((uint32_t)*(uint64_t *)(param_2 + 0x1b8) | 1) * 0x407348e6) +
                     0x7fffa569559f);
    (*pcVar1)(*(uint64_t *)(param_2 + 0x448),pcVar1,
              *(uint64_t *)(param_2 + 0x1e0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1e0));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa50fec70  |  RVA: 0x98ec70  |  Size: 67 bytes
// Callers  : FUN_7fffa55d8480@0xe68480
// Callees  : none
// ============================================================================
int64_t FUN_7fffa50fec70(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  param_1 = *(int *)(param_1 + 0x3c) + param_1;
  lVar1 = (uint64_t)*(uint16_t *)(param_1 + 0x14) + 0x18 + param_1;
  if (*(uint16_t *)(param_1 + 6) != 0) {
    do {
      if ((*(uint32_t *)(lVar1 + 0xc) <= param_2) &&
         (param_2 < *(int *)(lVar1 + 8) + *(uint32_t *)(lVar1 + 0xc))) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x28;
    } while (uVar2 < *(uint16_t *)(param_1 + 6));
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa50fecc0  |  RVA: 0x98ecc0  |  Size: 51 bytes
// Callers  : FUN_7fffa5130600@0x9c0600, FUN_7fffa5225520@0xab5520, FUN_7fffa56a65a0@0xf365a0, FUN_7fffa569faf0@0xf2faf0
// Callees  : _guard_dispatch_icall@0xf30810, FUN_7fffa50fed10@0x98ed10
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

bool FUN_7fffa50fecc0(uint64_t param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  pcVar2 = (code *)FUN_7fffa50fed10();
  bVar3 = false;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}


// ============================================================================
// Function : FUN_7fffa50fed00  |  RVA: 0x98ed00  |  Size: 1 bytes
// Callers  : FUN_7fffa4ee8dac@0x778dac
// Callees  : none
// ============================================================================
void FUN_7fffa50fed00(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa50fed10  |  RVA: 0x98ed10  |  Size: 55 bytes
// Callers  : FUN_7fffa50fecc0@0x98ecc0
// Callees  : FUN_7fffa5476b88@0xd06b88, FUN_7fffa4f54478@0x7e4478
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa50fed10(void)

{
  uint8_t bVar1;
  uint64_t uVar2;
  
  FUN_7fffa5476b88(0);
  bVar1 = (uint8_t)_DAT_7fffa4780040 & 0x3f;
  uVar2 = _DAT_7fffa4781c40 ^ _DAT_7fffa4780040;
  FUN_7fffa4f54478(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}


// ============================================================================
// Function : FUN_7fffa50fed50  |  RVA: 0x98ed50  |  Size: 89 bytes
// Callers  : none
// Callees  : FUN_7fffa5476b88@0xd06b88, FUN_7fffa4f54478@0x7e4478
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa50fed50(uint64_t param_1)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint64_t uVar3;
  
  FUN_7fffa5476b88(0);
  bVar2 = (uint8_t)_DAT_7fffa4780040 & 0x3f;
  uVar3 = _DAT_7fffa4780040 ^ _DAT_7fffa4781c40;
  bVar1 = 0x40 - bVar2 & 0x3f;
  _DAT_7fffa4781c40 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ _DAT_7fffa4780040;
  FUN_7fffa4f54478(0);
  return uVar3 >> bVar2 | uVar3 << 0x40 - bVar2;
}


// ============================================================================
// Function : FUN_7fffa50fede0  |  RVA: 0x98ede0  |  Size: 10397 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int64_t FUN_7fffa50fede0(uint64_t param_1,int64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  bool bVar10;
  uint8_t bVar11;
  short sVar12;
  uint16_t uVar13;
  char cVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  bool bVar17;
  uint64_t *puVar18;
  uint64_t uVar19;
  sbyte sVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  uint64_t uVar23;
  int64_t lVar24;
  uint64_t uVar25;
  uint64_t *puVar26;
  uint64_t uVar27;
  int iVar28;
  uint32_t uVar29;
  uint32_t uVar30;
  uint64_t uVar31;
  uint32_t uVar32;
  uint32_t uVar33;
  uint32_t uVar34;
  uint32_t uVar35;
  int64_t lVar36;
  uint32_t uVar37;
  int *piVar38;
  uint16_t uVar39;
  uint32_t uVar40;
  uint8_t *puVar41;
  code *pcVar42;
  uint32_t uVar43;
  uint32_t uVar44;
  uint64_t uVar45;
  uint64_t uVar46;
  int iVar47;
  uint64_t uVar48;
  IMAGE_DOS_HEADER *pIVar49;
  int64_t lVar50;
  uint64_t unaff_R12;
  uint64_t *puVar51;
  uint32_t uVar52;
  uint64_t uVar53;
  uint64_t unaff_R14;
  uint32_t uVar54;
  uint64_t *puVar55;
  short sStack_170;
  uint32_t uStack_154;
  uint64_t *puStack_150;
  uint64_t *puStack_100;
  uint64_t uStack_d0;
  uint64_t *puStack_c8;
  uint64_t *puStack_c0;
  uint32_t uStack_b4;
  uint64_t uStack_b0;
  uint32_t uStack_a4;
  int64_t lStack_a0;
  uint8_t auStack_98 [88];
  
  uVar25 = CONCAT62((int6)((uint64_t)unaff_R14 >> 0x10),0x1088);
  uVar40 = *(uint32_t *)(param_1 + 0x110);
  uVar37 = *(uint32_t *)(param_1 + 0x2c);
  uVar48 = (uint64_t)uVar37;
  uVar54 = *(uint32_t *)(param_1 + 0x18);
  lStack_a0 = *(int64_t *)(param_1 + 8);
  uVar9 = *(uint64_t *)(param_1 + 0x38);
  uVar44 = *param_3;
  uStack_a4 = param_3[1];
  *(uint32_t *)(param_1 + 300) = 0;
  lVar36 = (~uVar25 | unaff_R12) * 0xd9c1bfc +
           (~unaff_R12 & uVar25) * -0x57ccda96 + (uVar25 ^ unaff_R12) * 0x6568f692 +
           (~uVar25 & unaff_R12) * -0x6568f692;
  uVar32 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  uVar31 = (uint64_t)uVar54 + lStack_a0;
  uVar35 = (uint32_t)lVar36;
  uStack_b4 = uVar35 | 1;
  puVar51 = (uint64_t *)
            ((uint64_t)
             ((int)param_4 - (int)uVar31 == (((int)uVar25 + -0x1088) * uStack_b4 & 0xffff)) +
            (int64_t)param_4);
  iVar28 = (int)puVar51 - (int)lStack_a0;
  uVar29 = iVar28 - uVar32;
  if (iVar28 - uVar54 <= uVar32) {
    uVar29 = uVar54;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar29 = uVar54;
  }
  uVar54 = 6;
  if (uVar40 < 6) {
    uVar54 = uVar40;
  }
  uVar32 = *(uint32_t *)(param_1 + 0x10c);
  uVar33 = 6;
  if (uVar32 < 6) {
    uVar33 = uVar32;
  }
  if (uVar33 < 5) {
    uVar33 = 4;
  }
  puVar6 = (uint64_t *)((int64_t)param_4 + param_5 + -0x10);
  uVar34 = ((int)puVar6 - (int)(uint64_t *)(lStack_a0 + uVar48)) + 1;
  uVar43 = 8;
  if (uVar34 < 8) {
    uVar43 = uVar34;
  }
  if (puVar6 < (uint64_t *)(lStack_a0 + uVar48)) {
    uVar43 = 0;
  }
  uVar43 = uVar43 + uVar37;
  if (uVar54 < 5) {
    uVar54 = 4;
  }
  bVar11 = (uint8_t)lVar36;
  uVar29 = iVar28 - uVar29;
  uVar34 = uVar44;
  if (uVar29 < uVar44) {
    uVar34 = 0;
  }
  bVar17 = uVar29 < uStack_a4;
  if ((-0x4fc804f6 << (bVar11 & 0x1f) | 0xb037fb0aU >> 0x20 - (bVar11 & 0x1f)) != 0x37fb0ab) {
    bVar17 = (int)uVar29 <= (int)uStack_a4;
  }
  uStack_b0 = 0;
  if (!bVar17) {
    uStack_b0 = (uint64_t)uStack_a4;
  }
  uStack_154 = (uint32_t)uStack_b0;
  if (uVar37 < uVar43) {
    iVar28 = *(int *)(param_1 + 0x34);
    uVar25 = (uint64_t)uVar43;
    uVar43 = 0x18 - iVar28;
    uStack_b0 = *(uint64_t *)(param_1 + 0x60);
    do {
      if ((uStack_b4 * 0x5805e2da == -0x3b8a69be) == 5 < uVar40) {
        if (uVar54 != (0xe40a - uVar35 & 0xffff)) goto LAB_7fffa50ff1c0;
        uVar53 = *(int64_t *)(lStack_a0 + uVar48) * -0x30e4432340650000;
LAB_7fffa50ff1b5:
        uVar37 = (uint32_t)((uVar53 ^ uStack_b0) >> (0x38U - (char)iVar28 & 0x3f));
      }
      else {
        bVar10 = uVar40 < 6;
        if ((int64_t)(int)~(uVar35 + 0xde946b9) <
            (int64_t)(uint64_t)((uVar35 + 0xc5811e0b) * -0x43cc4d07 ^ 0xedfaa0c8)) {
          bVar10 = uVar40 == 5;
        }
        if (bVar10) {
          uVar53 = *(int64_t *)(lStack_a0 + uVar48) * -0x30e4432345000000;
          goto LAB_7fffa50ff1b5;
        }
LAB_7fffa50ff1c0:
        uVar37 = (*(int *)(lStack_a0 + uVar48) * -0x61c8864f ^ (uint32_t)uStack_b0) >>
                 ((uint8_t)uVar43 & 0x1f);
      }
      *(uint32_t *)(param_1 + 0x40 + (uint64_t)((uint32_t)uVar48 & 7) * 4) = uVar37;
      if (uVar25 - 1 == uVar48) break;
      uVar48 = uVar48 + 1;
    } while( true );
  }
  puStack_c8 = (uint64_t *)(param_5 + (int64_t)param_4);
  if (puVar51 < puVar6) {
    puVar1 = puStack_c8 + -4;
    puStack_c0 = (uint64_t *)((int64_t)puStack_c8 + -1);
    puVar2 = (uint64_t *)((int64_t)puStack_c8 - 7);
    puVar3 = (uint64_t *)((int64_t)puStack_c8 - 3);
    do {
      lVar24 = -(uint64_t)uVar34;
      if (uVar34 == 0) {
        uVar25 = 0;
      }
      else {
        uVar25 = 0;
        if (*(int *)((int64_t)((int64_t)puVar51 + 1U) - (uint64_t)uVar34) ==
            *(int *)((int64_t)puVar51 + 1)) {
          puVar5 = (uint64_t *)((int64_t)puVar51 + 5);
          puVar18 = (uint64_t *)((int64_t)puVar51 + lVar24 + 5);
          puVar26 = puVar5;
          if (puVar5 < puVar2) {
            if (*puVar18 == *puVar5) {
              do {
                puVar18 = puVar18 + 1;
                puVar26 = puVar26 + 1;
                if (puVar2 <= puVar26) goto LAB_7fffa50ff3a7;
              } while (*puVar18 == *puVar26);
              uVar37 = 0;
              for (uVar25 = *puVar26 ^ *puVar18; (uVar25 & 1) == 0;
                  uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              uVar53 = (int64_t)puVar26 + (uint64_t)(uVar37 >> 3);
              uVar25 = uVar53 | (uint64_t)puVar5;
              if (uStack_b4 * 0x41c7faf5 <
                  (0xa8cafe62U >> (bVar11 & 0x1f) | -0x5735019e << 0x20 - (bVar11 & 0x1f))) {
                uVar25 = uVar53 - (int64_t)puVar5;
              }
            }
            else {
              uVar37 = 0;
              for (uVar25 = *puVar5 ^ *puVar18; (uVar25 & 1) == 0;
                  uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              uVar25 = (uint64_t)(uVar37 >> 3);
            }
          }
          else {
LAB_7fffa50ff3a7:
            if ((puVar26 < puVar3) && ((int)*puVar18 == (int)*puVar26)) {
              puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
              puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
            }
            if ((puVar26 < puStack_c0) && ((short)*puVar18 == (short)*puVar26)) {
              puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
              puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
            }
            if (puVar26 < puStack_c8) {
              puVar26 = (uint64_t *)
                        ((int64_t)puVar26 + (uint64_t)((char)*puVar18 == (char)*puVar26));
            }
            uVar25 = (int64_t)puVar26 - (int64_t)puVar5;
          }
          uVar25 = uVar25 + 4;
        }
      }
      uStack_d0 = 999999999;
      uVar13 = (uint16_t)lVar36;
      sVar12 = (short)uStack_b4;
      if (uVar40 < 5) {
        if (uVar32 < 5) {
          uVar53 = (int64_t)puVar51 << 0x23 | (uint64_t)puVar51 >> 0x1d;
          (*(code *)((int64_t)(short)(sVar12 * -0xf00 | (uint16_t)(sVar12 * -0x220f) >> 8) +
                    0x7fffa5219d97))
                    (((int64_t)puVar51 << 1 | (uint64_t)((int64_t)puVar51 < 0)) ^ uVar53 ^
                     (uint64_t)puVar51 ^ 0x7087e94d,0x67f52c4d,param_1,puStack_c8);
          uVar53 = uVar53 << 0x3d ^ uVar53;
        }
        else if (uVar32 == 5) {
          uVar23 = (uint64_t)(0xf262fe6c - uVar35);
          (*(code *)((int64_t)(int)(0xf262fe6c - uVar35) + 0x7fffa5626fc8))
                    (puVar51,param_1 << 10 ^ param_1,
                     (0xbe1b8457U >> (bVar11 & 0x1f) | -0x41e47ba9 << 0x20 - (bVar11 & 0x1f)) ^
                     0x9d4ed4d9);
          uVar53 = ~uVar23 * -0x46175c118ede08a9;
          uVar53 = (~uVar23 * -0x18ede08a90000000 | uVar53 >> 0x24) ^
                   (uVar53 << 0x29 | uVar53 >> 0x17) ^ uVar53;
          uVar53 = (uVar53 << 0x38 | uVar53 >> 8) ^ (uVar53 << 0x12 | uVar53 >> 0x2e) ^ uVar53;
          uVar53 = (uVar53 << 0x24 | uVar53 >> 0x1c) ^ (uVar53 << 0x30 | uVar53 >> 0x10) ^ uVar53;
          uVar53 = (uVar53 << 8 | uVar53 >> 0x38) ^ (uVar53 << 0x20 | uVar53 >> 0x20) ^ uVar53;
          uVar53 = uVar53 << 0x30 | uVar53 >> 0x10;
        }
        else {
          uVar53 = param_1 * -0x7ffff - 0x6b42da88;
          uVar23 = (int64_t)puVar51 + 0xf999dc5b;
          lVar50 = 0x17acfd2d;
          (*(code *)(&UNK_7fffa528b1bd +
                    (short)((-0x3a93 - uVar13) * 2 | (uint16_t)((short)(-0x3a93 - uVar13) < 0))))
                    ((uVar23 * 0x800 | uVar23 >> 0x35) ^ (uVar23 * 0x80 | uVar23 >> 0x39) ^ uVar23,
                     &UNK_7fffa528b1bd +
                     (short)((-0x3a93 - uVar13) * 2 | (uint16_t)((short)(-0x3a93 - uVar13) < 0)),
                     (uVar53 * 4 | uVar53 >> 0x3e) << 0x3b | (uVar53 & 0x3fffffffffffffff) >> 3,
                     &uStack_d0);
          uVar53 = lVar50 - 0x38a8af91;
        }
      }
      else if (uVar40 == 5) {
        if (uVar32 < 5) {
          puVar41 = auStack_98 + ((uint64_t)(uStack_b4 * -0x2edfd8f1) - 0x38);
          uVar37 = (uStack_b4 * 0xc4d26a8 | uStack_b4 * -0x5e765b2b >> 0x1d) ^ 0x49180270;
          uVar23 = (uint64_t)uVar37;
          uVar53 = ((uint64_t)puVar41 >> 1 | (uint64_t)(((uint64_t)puVar41 & 1) != 0) << 0x3f) ^
                   ((int64_t)puVar41 * 0x4000 | (uint64_t)puVar41 >> 0x32) ^ (uint64_t)puVar41;
          uVar53 = uVar53 << 0xd ^ uVar53;
          (*(code *)((int64_t)(int)uVar37 + 0x7fffa526f952))
                    (((int64_t)puStack_c8 * 0x9dfbbfba000 |
                     (uint64_t)((int64_t)puStack_c8 * 0x4efddfdd) >> 0x33) * -0xffffffff,
                     (uVar53 << 2 & 0xffffffff | uVar53 >> 0x3e) * 0xfcf47e09 +
                     ((uVar53 << 2 & 0xffffffff | uVar53 >> 0x3e) * 0xffffffff +
                      ((uVar53 & 0x3fffffffffffffff) >> 0x1e) * 0xfcf47e09 << 0x20));
          uVar53 = uVar23 << 0x3f ^ uVar23;
          uVar53 = (uVar23 << 0x23 | uVar53 >> 0x1d) ^ (uVar23 << 0x24 | uVar53 >> 0x1c) ^ uVar53;
          uVar53 = (uVar53 << 8 | uVar53 >> 0x38) ^ (uVar53 << 6 | uVar53 >> 0x3a) ^ uVar53;
          uVar53 = (uVar53 << 0xc | uVar53 >> 0x34) ^ (uVar53 << 0x10 | uVar53 >> 0x30) ^ uVar53;
          uVar53 = (uVar53 << 0x18 | uVar53 >> 0x28) ^ (uVar53 << 0x20 | uVar53 >> 0x20) ^ uVar53;
          uVar53 = uVar53 << 0x10 | uVar53 >> 0x30;
        }
        else if (uVar32 == 5) {
          uVar53 = (int64_t)puStack_c8 >> 0x3c;
          if (((uVar35 ^ 0xb033f0c3) << 4 | (uVar35 ^ 0xb033f0c3) >> 0x1c) <
              ((uVar35 ^ 0xd48ec8d3) << 0xd | (uVar35 ^ 0xd48ec8d3) >> 0x13)) {
            uVar53 = (int64_t)puStack_c8 << 0x3c;
          }
          lVar50 = lVar36;
          (*(code *)((int64_t)(short)(0x6e80 << (bVar11 & 0xf) | 0x6e80U >> 0x10 - (bVar11 & 0xf))
                    + 0x7fffa55c99ba))
                    (lVar36,(uVar53 ^ (uint64_t)puStack_c8) * -0x5e8fa187,&uStack_d0);
          uVar53 = lVar50 * -0x3ffbffe001ffffff;
        }
        else {
          uVar53 = (uint64_t)&uStack_d0 >> 6 ^ (uint64_t)&uStack_d0;
          pcVar42 = (code *)((int64_t)(int)((uVar35 ^ 0xf8bf5da3) * 0x7f45c38d) + 0x7fffa5273615);
          (*pcVar42)(uVar53 << 0x1b | uVar53 >> 0x25,param_1,puStack_c8,0xcda283bd);
          uVar23 = (uint64_t)pcVar42 >> 0x11 ^ (uint64_t)pcVar42;
          uVar53 = (uint64_t)((uint32_t)(uVar23 >> 0x22) & (uint32_t)uVar23);
          if (((uVar35 + 0xd9c219b) * 0x40000000 | uVar35 + 0xd9c219b >> 2) <=
              (0x4966e604 - uVar35) * 0x45ed7963) {
            uVar53 = uVar23 ^ uVar23 >> 0x22;
          }
          uVar53 = (uVar53 << 0x2e | uVar53 >> 0x12) ^ (uVar53 << 0x3c | uVar53 >> 4) ^ uVar53;
          uVar53 = (uVar53 << 0x38 | uVar53 >> 8) ^ (uVar53 << 0x1c | uVar53 >> 0x24) ^ uVar53;
          uVar53 = (uVar53 << 0x38 | uVar53 >> 8) ^ (uVar53 << 0x30 | uVar53 >> 0x10) ^ uVar53;
          uVar53 = (uVar53 << 0x20 | uVar53 >> 0x20) ^ (uVar53 << 0x30 | uVar53 >> 0x10) ^ uVar53;
          uVar53 = uVar53 << 0x20 | uVar53 >> 0x20;
        }
      }
      else if (uVar33 < (uint16_t)((0x78b2U >> (bVar11 & 0xf) | 0x78b2 << 0x10 - (bVar11 & 0xf)) *
                                -0x1751)) {
        uVar23 = ((int64_t)&uStack_d0 * 0x2000 | (uint64_t)&uStack_d0 >> 0x33) ^
                 ((int64_t)&uStack_d0 * 0x80 | (uint64_t)&uStack_d0 >> 0x39) ^
                 (uint64_t)&uStack_d0;
        uVar53 = param_1 << 0x28 ^ param_1;
        uVar53 = (uVar53 << 5 | uVar53 >> 0x3b) ^ (param_1 << 0x2a | uVar53 >> 0x16) ^ uVar53;
        (*(code *)(&UNK_7fffa55e6e4b + (int)(-0xd9d11f7 - uVar35)))
                  (0x55af6ee6,
                   (uVar23 << 0x38 | uVar23 >> 8) ^ (uVar23 << 0x1a | uVar23 >> 0x26) ^
                   (uVar23 << 0x2a | uVar23 >> 0x16));
        uVar53 = uVar53 ^ 0xad38af14 - uVar35;
      }
      else if (uVar32 < 6) {
        sStack_170 = (0x2d43U >> (bVar11 & 0xf) | 0x2d43 << 0x10 - (bVar11 & 0xf)) * -0x4007;
        uVar23 = ~uVar48;
        uVar53 = param_1 * 0xb411f215;
        (*(code *)((int64_t)sStack_170 + 0x7fffa55cd00c))
                  (uVar53,(uVar23 | uVar9) * -0x23139669 + (uVar9 & uVar23) * 0x23139669 +
                          (uVar48 ^ uVar9) * -0x1aed8f0f +
                          (uint64_t)((uVar35 ^ 0xccaa88ff) + 0xc95c9a5f) * (uVar9 ^ uVar23));
        uVar53 = (uVar53 << 6 | uVar53 >> 0x3a) ^ (uVar53 << 0x16 | uVar53 >> 0x2a) ^ uVar53;
        uVar53 = (uVar53 << 0x2c | uVar53 >> 0x14) ^ (uVar53 << 0xc | uVar53 >> 0x34) ^ uVar53;
      }
      else {
        uVar53 = (param_1 << 1 | (uint64_t)((int64_t)param_1 < 0)) ^
                 (param_1 << 0x35 | param_1 >> 0xb) ^ param_1;
        (*(code *)((int64_t)(short)(sVar12 * 0x5c59 + 0x7f61) + 0x7fffa547da92))
                  (((int64_t)&uStack_d0 * 2 | (uint64_t)((int64_t)&uStack_d0 < 0)) ^
                   ((int64_t)&uStack_d0 << 0x27 | (uint64_t)&uStack_d0 >> 0x19) ^
                   (uint64_t)&uStack_d0,puStack_c8,puVar51);
        uVar53 = uVar53 - 0x86db7c86;
      }
      uVar23 = uVar25;
      if (uVar25 < uVar53) {
        uVar23 = uVar53;
      }
      uVar37 = 0xc282f3f0U >> (bVar11 & 0x1f) | -0x3d7d0c10 << 0x20 - (bVar11 & 0x1f);
      bVar10 = (int64_t)uVar23 < 4;
      if ((uVar37 << 9 | uVar37 >> 0x17) <= (uVar35 ^ 0xa2fbda1e)) {
        bVar10 = uVar23 < (uint16_t)(0x4000 << (bVar11 & 0xf) | 0x4000U >> 0x10 - (bVar11 & 0xf));
      }
      if (!bVar10) {
        if (uVar25 < uVar53) {
          puStack_100 = puVar51;
        }
        else {
          uStack_d0 = 1;
          puStack_100 = (uint64_t *)((int64_t)puVar51 + 1U);
        }
        puStack_150 = (uint64_t *)((int64_t)puVar51 + 0xd);
        do {
          puVar5 = (uint64_t *)((int64_t)puVar51 + 1);
          uVar25 = uVar23;
          if (uStack_d0 == 0) {
            uVar53 = 0;
          }
          else {
            uVar53 = uStack_d0;
            if ((*(int *)puVar5 == *(int *)((int64_t)puVar5 + lVar24)) && (uVar34 != 0)) {
              puVar26 = (uint64_t *)((int64_t)puVar51 + lVar24 + 5);
              puVar18 = (uint64_t *)((int64_t)puVar51 + 5);
              if (puVar18 < puVar2) {
                puVar55 = puStack_150;
                if (*puVar26 == *puVar18) {
                  do {
                    if (puVar2 <= puVar55) {
                      puVar26 = (uint64_t *)((int64_t)puVar55 + lVar24);
                      if (puVar55 < puVar3) goto LAB_7fffa51000b1;
                      goto LAB_7fffa51000c1;
                    }
                    puVar26 = (uint64_t *)((int64_t)puVar55 + lVar24);
                    uVar19 = *puVar55;
                    puVar55 = puVar55 + 1;
                  } while (*puVar26 == uVar19);
                  uVar37 = 0;
                  for (uVar19 = uVar19 ^ *puVar26; (uVar19 & 1) == 0;
                      uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                    uVar37 = uVar37 + 1;
                  }
                  puVar55 = (uint64_t *)((int64_t)puVar55 + ((uint64_t)(uVar37 >> 3) - 8));
                  goto LAB_7fffa510012d;
                }
                uVar37 = 0;
                for (uVar25 = *puVar18 ^ *puVar26; (uVar25 & 1) == 0;
                    uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                  uVar37 = uVar37 + 1;
                }
                uVar19 = (uint64_t)(uVar37 >> 3);
              }
              else {
                puVar55 = puVar18;
                if (puVar18 < puVar3) {
LAB_7fffa51000b1:
                  if ((int)*puVar26 == (int)*puVar55) {
                    puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
                    puVar55 = (uint64_t *)((int64_t)puVar55 + 4);
                  }
                }
LAB_7fffa51000c1:
                if ((puVar55 < puStack_c0) && ((short)*puVar26 == (short)*puVar55)) {
                  puVar55 = (uint64_t *)((int64_t)puVar55 + 2);
                  puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
                }
                if (puVar55 < puStack_c8) {
                  uVar45 = (uint64_t)((char)*puVar26 == (char)*puVar55);
                  uVar19 = -uVar45;
                  if (~(uVar35 ^ 0x9eb7d6f) <=
                      (-0x7345e458 << (bVar11 & 0x1f) | 0x8cba1ba8U >> 0x20 - (bVar11 & 0x1f))) {
                    uVar19 = uVar45;
                  }
                  puVar55 = (uint64_t *)((int64_t)puVar55 + uVar19);
                }
LAB_7fffa510012d:
                uVar19 = (int64_t)puVar55 - (int64_t)puVar18;
                if (0xfffffffffffffffb < uVar19) goto LAB_7fffa5100190;
              }
              uVar37 = 0x1f;
              if ((uint32_t)uStack_d0 != 0) {
                for (; (uint32_t)uStack_d0 >> uVar37 == 0; uVar37 = uVar37 - 1) {
                }
              }
              if ((int)((int)uVar23 * 3 + (uVar37 ^ 0x1f) + -0x1e) < (int)(uVar19 + 4) * 3) {
                uStack_d0 = 1;
                uVar23 = uVar19 + 4;
                puStack_100 = puVar5;
              }
              uVar53 = uStack_d0;
              uVar25 = uVar23;
            }
          }
LAB_7fffa5100190:
          uStack_d0 = 999999999;
          if (uVar40 < 5) {
            if (uVar32 < 5) {
              pIVar49 = &IMAGE_DOS_HEADER_7fffa4770000;
              (*(code *)((int64_t)
                         (int)((0x738cd7d << (bVar11 & 0x1f) | 0x738cd7dU >> 0x20 - (bVar11 & 0x1f))
                              ^ 0x8c73b622) + 0x7fffa521f19e))
                        (((int64_t)puVar5 << 0x23 | (uint64_t)puVar5 >> 0x1d) ^
                         ((int64_t)puVar5 * 2 | (uint64_t)((int64_t)puVar5 < 0)) ^
                         (uint64_t)puVar5 ^ 0x7087e94d,0x67f52c4d,param_1,puStack_c8);
              uVar23 = (int64_t)pIVar49 << 0x3d ^ (uint64_t)pIVar49;
            }
            else if (uVar32 == 5) {
              uVar37 = uStack_b4 * 0x1b6fb20a;
              uVar23 = (uint64_t)(uStack_b4 * -0x44f9dc00);
              (*(code *)((int64_t)(int)(uStack_b4 * 0x44f9dc00 + 0xb2deea1) + 0x7fffa5624f8f))
                        (puVar5,param_1 << 10 ^ param_1,0xe6af6c9c);
              uVar45 = ~uVar23 * -0x46175c118ede08a9;
              uVar19 = (~uVar23 * -0x18ede08a90000000 | uVar45 >> 0x24) ^ uVar45;
              uVar45 = uVar45 << 0x29 | uVar45 >> 0x17;
              uVar23 = uVar19 & uVar45;
              if (uVar35 + 0x28f57a71 <= uVar37) {
                uVar23 = uVar45 ^ uVar19;
              }
              uVar23 = (uVar23 << 0x38 | uVar23 >> 8) ^ (uVar23 << 0x12 | uVar23 >> 0x2e) ^ uVar23;
              uVar23 = (uVar23 << 0x24 | uVar23 >> 0x1c) ^ (uVar23 << 0x30 | uVar23 >> 0x10) ^
                       uVar23;
              uVar23 = (uVar23 << 0x20 | uVar23 >> 0x20) ^ (uVar23 << 8 | uVar23 >> 0x38) ^ uVar23;
              uVar23 = uVar23 << 0x30 | uVar23 >> 0x10;
            }
            else {
              piVar38 = (int *)((int64_t)puVar51 + 0xf999dc5c);
              uVar23 = param_1 * -0x7ffff - 0x6b42da88;
              lVar50 = 0x17acfd2d;
              FUN_7fffa5287490(((int64_t)piVar38 * 0x800 | (uint64_t)piVar38 >> 0x35) ^
                               ((int64_t)piVar38 * 0x80 | (uint64_t)piVar38 >> 0x39) ^
                               (uint64_t)piVar38,FUN_7fffa5287490,
                               (uVar23 * 4 | uVar23 >> 0x3e) << 0x3b |
                               (uVar23 & 0x3fffffffffffffff) >> 3,&uStack_d0);
              uVar23 = lVar50 - 0x38a8af91;
            }
          }
          else if (uVar40 == 5) {
            if (uVar32 < 5) {
              uVar23 = (int64_t)puStack_c8 * 0x9dfbbfba000 |
                       (uint64_t)((int64_t)puStack_c8 * 0x4efddfdd) >> 0x33;
              sVar20 = 0x20;
              if ((int64_t)(uint64_t)~(uVar35 ^ 0xd9e8a992) < -0x281049e9) {
                sVar20 = 5;
              }
              uVar46 = (uint64_t)(uStack_b4 * -0x270ca4a3);
              uVar19 = (int64_t)register0x00000020 + 0x1371e7b;
              uVar45 = (uVar19 >> 1 | (uint64_t)((uVar19 & 1) != 0) << 0x3f) ^ uVar19;
              uVar27 = uVar19 * 0x4000 | uVar19 >> 0x32;
              uVar19 = uVar45 * uVar27;
              if ((uint64_t)(0xbbe71fbe - uVar35) <
                  (uint64_t)(int64_t)(int)(uStack_b4 * 0x677a6070 + 0x7120a24c)) {
                uVar19 = uVar27 ^ uVar45;
              }
              uVar19 = uVar19 << 0xd ^ uVar19;
              (*(code *)((int64_t)(short)(-0x5e4a - uVar13) + 0x7fffa5269ede))
                        (uVar23 - (uVar23 << sVar20),
                         (uVar19 << 2 & 0xffffffff | uVar19 >> 0x3e) * 0xfcf47e09 +
                         ((uVar19 << 2 & 0xffffffff | uVar19 >> 0x3e) * 0xffffffff +
                          ((uVar19 & 0x3fffffffffffffff) >> 0x1e) * 0xfcf47e09 << 0x20));
              uVar23 = uVar46 << 0x3f ^ uVar46;
              uVar23 = (uVar46 << 0x24 | uVar23 >> 0x1c) ^ (uVar46 << 0x23 | uVar23 >> 0x1d) ^
                       uVar23;
              uVar23 = (uVar23 << 8 | uVar23 >> 0x38) ^ (uVar23 << 6 | uVar23 >> 0x3a) ^ uVar23;
              uVar23 = (uVar23 << 0x10 | uVar23 >> 0x30) ^ (uVar23 << 0xc | uVar23 >> 0x34) ^ uVar23
              ;
              uVar23 = (uVar23 << 0x20 | uVar23 >> 0x20) ^ (uVar23 << 0x18 | uVar23 >> 0x28) ^
                       uVar23;
              uVar23 = uVar23 << 0x10 | uVar23 >> 0x30;
            }
            else if (uVar32 == 5) {
              uVar39 = (uint16_t)(uStack_b4 * 0x20c0);
              pcVar42 = (code *)((int64_t)(short)~(uVar39 << 5 | uVar39 >> 0xb) + 0x7fffa55cf9d5);
              (*pcVar42)(pcVar42,((int64_t)puStack_c8 << 0x3c ^ (uint64_t)puStack_c8) *
                                 -0x5e8fa187,&uStack_d0);
              uVar23 = (int64_t)pcVar42 * -0x3ffbffe001ffffff;
            }
            else {
              pcVar42 = FUN_7fffa526ac10;
              FUN_7fffa526ac10((uint64_t)&uStack_d0 >> 6 ^ (uint64_t)&uStack_d0,param_1,puStack_c8
                               ,0xcda283bd);
              uVar23 = (uint64_t)pcVar42 >> 0x11 ^ (uint64_t)pcVar42;
              uVar23 = uVar23 >> 0x22 ^ uVar23;
              uVar23 = (uVar23 << 0x3c | uVar23 >> 4) ^ (uVar23 << 0x2e | uVar23 >> 0x12) ^ uVar23;
              uVar23 = (uVar23 << 0x38 | uVar23 >> 8) ^ (uVar23 << 0x1c | uVar23 >> 0x24) ^ uVar23;
              uVar23 = (uVar23 << 0x38 | uVar23 >> 8) ^ (uVar23 << 0x30 | uVar23 >> 0x10) ^ uVar23;
              uVar23 = (uVar23 << 0x30 | uVar23 >> 0x10) ^ (uVar23 << 0x20 | uVar23 >> 0x20) ^
                       uVar23;
              uVar23 = uVar23 << 0x20 | uVar23 >> 0x20;
            }
          }
          else if (uVar32 < 5) {
            uVar23 = param_1 << 0x28 ^ param_1;
            uVar45 = ((int64_t)&uStack_d0 * 0x80 | (uint64_t)&uStack_d0 >> 0x39) ^
                     ((int64_t)&uStack_d0 * 0x2000 | (uint64_t)&uStack_d0 >> 0x33) ^
                     (uint64_t)&uStack_d0;
            uVar19 = (param_1 << 0x2a | uVar23 >> 0x16) ^ uVar23;
            uVar27 = uVar23 << 5 | uVar23 >> 0x3b;
            uVar23 = uVar27 ^ uVar19;
            if ((uVar35 ^ 0x821ad0b1) <= uStack_b4 * 0x63381ba0 + 0x31feba05) {
              uVar23 = uVar19 | uVar27;
            }
            (*(code *)(&UNK_7fffa55ddcf0 + (short)(uVar13 ^ 0x7f64)))
                      (0x55af6ee6,
                       (uVar45 << 0x1a | uVar45 >> 0x26) ^ (uVar45 << 0x38 | uVar45 >> 8) ^
                       (uVar45 << 0x2a | uVar45 >> 0x16));
            uVar23 = uVar23 ^ 0xf6bba343 - (uVar35 ^ 0xc9853c37);
          }
          else if (uVar33 < 6) {
            pcVar42 = (code *)((int64_t)(short)(uVar13 + 0xaf74) + 0x7fffa55cd8c8);
            puVar41 = auStack_98 +
                      ((uint64_t)((-0x755fbac6 - uVar35) * -0x1497a013 + 0x63c2870) - 0x38);
            (*pcVar42)(param_1 * 0xb411f215,0x1aed8f0f,
                       ((int64_t)puVar41 << 0x24 | (uint64_t)puVar41 >> 0x1c) ^
                       ((int64_t)puVar41 * 4 | (uint64_t)puVar41 >> 0x3e));
            uVar23 = ((int64_t)pcVar42 << 0x16 | (uint64_t)pcVar42 >> 0x2a) ^
                     ((int64_t)pcVar42 << 6 | (uint64_t)pcVar42 >> 0x3a) ^ (uint64_t)pcVar42;
            uVar23 = (uVar23 << 0x2c | uVar23 >> 0x14) ^ (uVar23 << 0xc | uVar23 >> 0x34) ^ uVar23;
          }
          else {
            uVar23 = (param_1 << 1 | (uint64_t)((int64_t)param_1 < 0)) ^
                     (param_1 << 0x35 | param_1 >> 0xb) ^ param_1;
            (*(code *)(&UNK_7fffa5481726 +
                      (int)~((uVar35 ^ 0xf2365e84) << 0x19 | (uVar35 ^ 0xf2365e84) >> 7)))
                      (((int64_t)&uStack_d0 * 2 | (uint64_t)((int64_t)&uStack_d0 < 0)) ^
                       ((int64_t)&uStack_d0 << 0x27 | (uint64_t)&uStack_d0 >> 0x19) ^
                       (uint64_t)&uStack_d0,puStack_c8,puVar5,
                       (~(uint64_t)uVar43 ^ uStack_b0) & ~uVar9);
            uVar23 = uVar23 - (uVar35 ^ 0x74b89882);
          }
          if (uVar23 < 4) break;
          uVar37 = 0x1f;
          if ((uint32_t)uVar53 != 0) {
            for (; (uint32_t)uVar53 >> uVar37 == 0; uVar37 = uVar37 - 1) {
            }
          }
          iVar28 = 0x1f;
          if ((uint32_t)uStack_d0 != 0) {
            for (; (uint32_t)uStack_d0 >> iVar28 == 0; iVar28 = iVar28 + -1) {
            }
          }
          iVar47 = (int)uVar23 * 4;
          if (uVar35 == 0x8e85837f) {
            iVar47 = (int)uVar23 + -2;
          }
          if (iVar47 - iVar28 <= (int)((uVar37 ^ 0x1f) + (int)uVar25 * 4 + -0x1b)) break;
          puStack_150 = (uint64_t *)((int64_t)puStack_150 + 1);
          puVar51 = puVar5;
          puStack_100 = puVar5;
          uVar53 = uStack_d0;
          uVar25 = uVar23;
        } while (puVar5 < puVar6);
        if (uVar53 < 4) {
          uVar37 = uVar34;
        }
        else {
          if ((param_4 < puStack_100) && (uVar31 < (int64_t)puStack_100 + (3 - uVar53))) {
            for (lVar24 = 0;
                *(char *)((int64_t)puStack_100 + lVar24 + -1) ==
                *(char *)((int64_t)puStack_100 + lVar24 + (2 - uVar53)); lVar24 = lVar24 + -1) {
              puVar51 = (uint64_t *)((int64_t)puStack_100 + lVar24 + -1);
              if ((puVar51 <= param_4) || ((int64_t)puStack_100 + lVar24 + (2 - uVar53) <= uVar31))
              {
                uVar25 = (uVar25 - lVar24) + 1;
                puStack_100 = puVar51;
                goto LAB_7fffa5100e45;
              }
            }
            uVar25 = uVar25 - lVar24;
            puStack_100 = (uint64_t *)((int64_t)puStack_100 + lVar24);
          }
LAB_7fffa5100e45:
          uVar37 = (int)uVar53 - 3;
          uStack_154 = uVar34;
        }
        uVar34 = uVar37;
        puVar51 = (uint64_t *)param_2[3];
        uVar23 = (int64_t)puStack_100 - (int64_t)param_4;
        if (uStack_b4 * -0x527ba3fa + 0x8001fcdc <
            ((0x18ea2941 - uVar35) * 0x1000000 | 0x18ea2941 - uVar35 >> 8) == puStack_100 <= puVar1)
        {
          uVar19 = param_4[1];
          *puVar51 = *param_4;
          puVar51[1] = uVar19;
          lVar24 = param_2[3];
          if (0x10 < uVar23) {
            uVar19 = param_4[3];
            *(uint64_t *)(lVar24 + 0x10) = param_4[2];
            *(uint64_t *)(lVar24 + 0x18) = uVar19;
            if (0x20 < (int64_t)uVar23) {
              lVar50 = 0;
              do {
                puVar8 = (uint64_t *)((int64_t)param_4 + lVar50 + 0x20);
                uVar15 = puVar8[1];
                puVar7 = (uint64_t *)(lVar24 + 0x20 + lVar50);
                *puVar7 = *puVar8;
                puVar7[1] = uVar15;
                puVar7 = (uint64_t *)((int64_t)param_4 + lVar50 + 0x30);
                uVar15 = puVar7[1];
                puVar8 = (uint64_t *)(lVar24 + 0x30 + lVar50);
                *puVar8 = *puVar7;
                puVar8[1] = uVar15;
                lVar4 = lVar24 + 0x20 + lVar50;
                lVar50 = lVar50 + 0x20;
              } while (lVar4 + 0x20U < lVar24 + uVar23);
            }
            goto LAB_7fffa5101190;
          }
          lVar50 = param_2[1];
          param_2[3] = lVar24 + uVar23;
        }
        else {
          puVar5 = puVar51;
          puVar26 = param_4;
          if (param_4 <= puVar1) {
            puVar5 = (uint64_t *)((int64_t)puVar51 + ((int64_t)puVar1 - (int64_t)param_4));
            uVar19 = param_4[1];
            *puVar51 = *param_4;
            puVar51[1] = uVar19;
            puVar26 = puVar1;
            if (0x10 < (int64_t)puVar1 - (int64_t)param_4) {
              lVar24 = 0x10;
              while( true ) {
                uVar15 = ((uint64_t *)((int64_t)param_4 + lVar24))[1];
                *(uint64_t *)((int64_t)puVar51 + lVar24) =
                     *(uint64_t *)((int64_t)param_4 + lVar24);
                ((uint64_t *)((int64_t)puVar51 + lVar24))[1] = uVar15;
                puVar7 = (uint64_t *)((int64_t)param_4 + lVar24 + 0x10);
                uVar15 = puVar7[1];
                puVar8 = (uint64_t *)((int64_t)puVar51 + lVar24 + 0x10);
                *puVar8 = *puVar7;
                puVar8[1] = uVar15;
                if (puVar5 <= (uint64_t *)((int64_t)puVar51 + lVar24 + 0x20)) break;
                lVar24 = lVar24 + 0x20;
              }
            }
          }
          if (puVar26 < puStack_100) {
            uVar19 = (int64_t)puStack_100 - (int64_t)puVar26;
            puVar51 = puVar5;
            if ((3 < uVar19) && (0x1f < (uint64_t)((int64_t)puVar5 - (int64_t)puVar26))) {
              if (uVar19 < (uVar35 << 0x1e | (uVar35 ^ 0xf263e484) >> 2)) {
                uVar45 = 0;
              }
              else {
                uVar45 = uVar19 & 0xffffffffffffffe0;
                uVar27 = 0;
                do {
                  uVar15 = *(uint64_t *)((int64_t)puVar26 + uVar27);
                  uVar16 = ((uint64_t *)((int64_t)puVar26 + uVar27))[1];
                  *(uint8_t (*) [16])((int64_t)puVar5 + uVar27 + 0x10) =
                       *(uint8_t (*) [16])((int64_t)puVar26 + uVar27 + 0x10);
                  *(uint64_t *)((int64_t)puVar5 + uVar27) = uVar15;
                  ((uint64_t *)((int64_t)puVar5 + uVar27))[1] = uVar16;
                  uVar27 = uVar27 + 0x20;
                } while (uVar45 != uVar27);
                if (uVar19 == uVar45) goto LAB_7fffa5101190;
                if ((uVar19 & 0x1c) == 0) {
                  puVar51 = (uint64_t *)((int64_t)puVar5 + uVar45);
                  puVar26 = (uint64_t *)((int64_t)puVar26 + uVar45);
                  goto LAB_7fffa51010a8;
                }
              }
              uVar27 = uVar19 & 0xfffffffffffffffc;
              puVar51 = (uint64_t *)((int64_t)puVar5 + uVar27);
              do {
                *(uint32_t *)((int64_t)puVar5 + uVar45) =
                     *(uint32_t *)((int64_t)puVar26 + uVar45);
                uVar45 = uVar45 + 4;
              } while (uVar27 != uVar45);
              if (uVar19 == uVar27) goto LAB_7fffa5101190;
              puVar26 = (uint64_t *)((int64_t)puVar26 + uVar27);
            }
LAB_7fffa51010a8:
            uVar37 = (int)puStack_100 - (int)puVar26 & 7;
            uVar19 = (uint64_t)uVar37;
            puVar18 = puVar51;
            puVar5 = puVar26;
            if (uVar37 == 0) {
              puVar55 = puVar26;
            }
            else {
              do {
                uVar19 = uVar19 - 1;
                puVar51 = (uint64_t *)((int64_t)puVar18 + 1);
                *(char *)puVar18 = (char)*puVar5;
                puVar55 = (uint64_t *)((int64_t)puVar5 + 1);
                puVar18 = puVar51;
                puVar5 = (uint64_t *)((int64_t)puVar5 + 1);
              } while (uVar19 != 0);
            }
            if ((uint64_t)((int64_t)puVar26 - (int64_t)puStack_100) < 0xfffffffffffffff9) {
              do {
                *(char *)puVar51 = (char)*puVar55;
                *(uint8_t *)((int64_t)puVar51 + 1) = *(uint8_t *)((int64_t)puVar55 + 1);
                *(uint8_t *)((int64_t)puVar51 + 2) = *(uint8_t *)((int64_t)puVar55 + 2);
                *(uint8_t *)((int64_t)puVar51 + 3) = *(uint8_t *)((int64_t)puVar55 + 3);
                *(uint8_t *)((int64_t)puVar51 + 4) = *(uint8_t *)((int64_t)puVar55 + 4);
                *(uint8_t *)((int64_t)puVar51 + 5) = *(uint8_t *)((int64_t)puVar55 + 5);
                *(uint8_t *)((int64_t)puVar51 + 6) = *(uint8_t *)((int64_t)puVar55 + 6);
                *(uint8_t *)((int64_t)puVar51 + 7) = *(uint8_t *)((int64_t)puVar55 + 7);
                puVar51 = puVar51 + 1;
                puVar55 = puVar55 + 1;
              } while (puVar55 != puStack_100);
            }
          }
LAB_7fffa5101190:
          param_2[3] = param_2[3] + uVar23;
          lVar50 = param_2[1];
          if (0xffff < uVar23) {
            *(uint32_t *)(param_2 + 9) = 1;
            uVar37 = (uint32_t)((uint64_t)(lVar50 - *param_2) >> 3);
            if (uStack_b4 * -0x56d4192 + 0xc7cb35d9 < 0xc3223ffa - uVar35) {
              uVar37 = (uint32_t)(lVar50 - *param_2) & 3;
            }
            *(uint32_t *)((int64_t)param_2 + 0x4c) = uVar37;
          }
        }
        *(short *)(lVar50 + 4) = (short)uVar23;
        *(int *)param_2[1] = (int)uVar53;
        if (0xffff < uVar25 - 3) {
          *(uint32_t *)(param_2 + 9) = 2;
          *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
        }
        *(short *)(param_2[1] + 6) = (short)(uVar25 - 3);
        param_2[1] = param_2[1] + 8;
        if (*(int *)(param_1 + 300) != 0) {
          uVar37 = *(uint32_t *)(param_1 + 0x2c);
          uVar53 = (uint64_t)uVar37;
          uVar21 = (int)puVar6 - (int)(uint64_t *)(lStack_a0 + uVar53);
          uVar22 = uVar21 ^ 1;
          if (0x3e41867d - uVar35 < uVar35 + 0x8d9a1ec0) {
            uVar22 = uVar21 + 1;
          }
          if (7 < uVar22) {
            uVar22 = 8;
          }
          if (puVar6 < (uint64_t *)(lStack_a0 + uVar53)) {
            uVar22 = 0;
          }
          if (uVar37 < uVar22 + uVar37) {
            cVar14 = (char)*(uint32_t *)(param_1 + 0x34);
            uVar23 = *(uint64_t *)(param_1 + 0x60);
            do {
              if (uVar40 < 6) {
                if (uVar40 == 5) {
                  uVar19 = *(int64_t *)(lStack_a0 + uVar53) * -0x30e4432345000000;
                  goto LAB_7fffa51015d5;
                }
LAB_7fffa5101563:
                uVar52 = *(int *)(lStack_a0 + uVar53) * -0x61c8864f;
                uVar30 = (uint32_t)uVar23;
                uVar21 = uVar52 - uVar30;
                if (0x44d2458c < (uVar35 ^ 0xa74bc822)) {
                  uVar21 = uVar30 ^ uVar52;
                }
                uVar21 = uVar21 >> (0x18U - cVar14 & 0x1f);
              }
              else {
                if (uVar54 != (~(uVar35 ^ 0x1bfd) & 0xffff)) goto LAB_7fffa5101563;
                uVar19 = *(int64_t *)(lStack_a0 + uVar53) * -0x30e4432340650000;
LAB_7fffa51015d5:
                uVar21 = (uint32_t)((uVar19 ^ uVar23) >> (0x38U - cVar14 & 0x3f));
              }
              *(uint32_t *)(param_1 + 0x40 + (uint64_t)((uint32_t)uVar53 & 7) * 4) = uVar21;
              if ((uint64_t)(uVar22 + uVar37) - 1 == uVar53) break;
              uVar53 = uVar53 + 1;
            } while( true );
          }
          *(uint32_t *)(param_1 + 300) = 0;
        }
        puVar51 = (uint64_t *)((int64_t)puStack_100 + uVar25);
        param_4 = puVar51;
        if (puVar6 < puVar51) goto LAB_7fffa50fff4d;
        if (uStack_154 == 0) {
        }
        else {
          uVar37 = uStack_154;
          do {
            uStack_154 = uVar34;
            if ((int)*puVar51 != *(int *)((int64_t)puVar51 - (uint64_t)uVar37)) {
              param_4 = puVar51;
              uVar34 = uStack_154;
              uStack_154 = uVar37;
              break;
            }
            lVar24 = -(uint64_t)uVar37;
            puVar5 = (uint64_t *)((int64_t)puVar51 + 4);
            puVar26 = (uint64_t *)((int64_t)puVar51 + lVar24 + 4);
            if (puVar5 < puVar2) {
              if (*puVar26 == *puVar5) {
                lVar50 = 0;
                do {
                  puVar26 = (uint64_t *)((int64_t)puVar51 + lVar50 + 0xc);
                  if (puVar2 <= puVar26) {
                    puVar18 = (uint64_t *)((int64_t)puVar51 + lVar50 + 0xc);
                    puVar26 = (uint64_t *)((int64_t)puVar51 + lVar24 + lVar50 + 0xc);
                    if (puVar18 < puVar3) goto code_r0x7fffa5101409;
                    goto LAB_7fffa5101427;
                  }
                  uVar25 = *(uint64_t *)((int64_t)puVar51 + lVar50 + lVar24 + 0xc);
                  uVar53 = *puVar26;
                  lVar50 = lVar50 + 8;
                } while (uVar25 == uVar53);
                uVar34 = 0;
                for (uVar25 = uVar25 ^ uVar53; (uVar25 & 1) == 0;
                    uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                  uVar34 = uVar34 + 1;
                }
                uVar25 = (uint64_t)(uVar34 >> 3) + lVar50;
              }
              else {
                uVar34 = 0;
                for (uVar25 = *puVar26 ^ *puVar5; (uVar25 & 1) == 0;
                    uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                  uVar34 = uVar34 + 1;
                }
                uVar25 = (uint64_t)(uVar34 >> 3);
              }
            }
            else {
              puVar18 = puVar5;
              if (puVar5 < puVar3) {
code_r0x7fffa5101409:
                if ((int)*puVar26 == (int)*puVar18) {
                  puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
                  puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
                }
              }
LAB_7fffa5101427:
              if ((puVar18 < puStack_c0) && ((short)*puVar26 == (short)*puVar18)) {
                puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
                puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
              }
              if (puVar18 < puStack_c8) {
                puVar18 = (uint64_t *)
                          ((int64_t)puVar18 + (uint64_t)((char)*puVar26 == (char)*puVar18));
              }
              uVar25 = (int64_t)puVar18 - (int64_t)puVar5;
            }
            if (puVar51 <= puVar1) {
              uVar53 = puVar51[1];
              puVar5 = (uint64_t *)param_2[3];
              *puVar5 = *puVar51;
              puVar5[1] = uVar53;
            }
            *(uint16_t *)(param_2[1] + 4) = 0;
            *(uint32_t *)param_2[1] = 1;
            if (0xffff < uVar25 + 1) {
              *(uint32_t *)(param_2 + 9) = 2;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
            }
            *(short *)(param_2[1] + 6) = (short)(uVar25 + 1);
            param_2[1] = param_2[1] + 8;
            puVar51 = (uint64_t *)((int64_t)puVar51 + uVar25 + 4);
            param_4 = puVar51;
            uVar34 = uVar37;
            if (puVar6 < puVar51) {
              break;
            }
            uVar37 = uStack_154;
          } while (uStack_154 != 0);
        }
      }
      else {
        uVar25 = (int64_t)puVar51 - (int64_t)param_4;
        puVar51 = (uint64_t *)((int64_t)puVar51 + (uVar25 >> 8) + 1);
        *(uint32_t *)(param_1 + 300) = (uint32_t)(uStack_b4 * -0x66ea73e + 0xf6168435 < uVar25);
LAB_7fffa50fff4d:
      }
    } while (puVar51 < puVar6);
  }
  if (!bVar17) {
    uStack_a4 = 0;
  }
  uVar40 = uStack_a4;
  if (uVar34 != 0) {
    uVar40 = uVar44;
  }
  if (uVar44 <= uVar29) {
    uVar40 = uStack_a4;
    uVar44 = 0;
  }
  if (uVar34 != 0) {
    uVar44 = uVar34;
  }
  if (uStack_154 != 0) {
    uVar40 = uStack_154;
  }
  *param_3 = uVar44;
  param_3[1] = uVar40;
  return (int64_t)puStack_c8 - (int64_t)param_4;
}


// ============================================================================
// Function : FUN_7fffa5101720  |  RVA: 0x991720  |  Size: 936 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa5101d72) overlaps instruction at (ram,0x7fffa5101d70)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa5101d38) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101d49) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101d4e) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101d6d) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101d72) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101d7e) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101d92) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101dbd) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101dad) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101dc7) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101df9) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101dfe) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101e09) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101e0d) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101d85) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101e11) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101e18) */
/* WARNING: Removing unreachable block (ram,0x7fffa5101e23) */

void FUN_7fffa5101720(void)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t unaff_R12;
  uint32_t uVar6;
  
  uVar5 = CONCAT62((int6)((uint64_t)unaff_R12 >> 0x10),0xf562);
  uVar3 = (~(uVar5 | 0x7fffa5797f55) + (uVar5 | 0x7fffa5797f55)) * 0x52276147 +
          (~(uVar5 ^ 0x7fffa5795740) | 0x7fffa5793b15) * -0xaa0a1841 +
          ((uVar5 ^ 0x7fffa5795740) & 0xffff80005a86c4ea) * -0xaa0a1841;
  bVar1 = (uint8_t)uVar3 & 0xf;
  lVar4 = (int64_t)(short)(0x293U >> bVar1 | 0x293 << 0x10 - bVar1);
  *(uint8_t (*) [16])(lVar4 + 0x7fffa47a1dd8) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar4 + 0x7fffa47a1de8) = 0;
  bVar1 = (uint8_t)uVar3 & 0xf;
  *(uint64_t *)
   ((int64_t)(short)((0xd3bU >> bVar1 | 0xd3b << 0x10 - bVar1) * -0x5fcd) + 0x7fffa47a319f) =
       uVar3 + 0x1cf365ebcd8d5547;
  uVar5 = (uVar3 | 1) * 0x24f3a43c867b3519 + 0x1c4d69fe;
  uVar2 = (uint32_t)uVar3;
  *(uint64_t *)((int64_t)(int)(uVar2 + 0xa81cb1f5) + 0x7fffa47a5991) =
       uVar5 << 0x27 | uVar5 >> 0x19;
  *(uint64_t *)((int64_t)(short)(0x67c1 - (uint16_t)uVar3) + 0x7fffa47a11a9) =
       (uVar3 ^ 0x2036ee86c88bcd0) - 0x7ffe02d4;
  uVar6 = 0x7a2bd0e1 - uVar2 ^ 0xdccbc018;
  *(uint64_t *)((int64_t)(int)(uVar2 + 0xa81caecf) + 0x7fffa47a5cc7) =
       (uint64_t)((uVar2 | 1) * 0x3b2ede51 + 0xa5793b15 ^ 0x1c87) << 0x31 |
       ((uint64_t)(&UNK_7fffa578eddc + (int)((uVar2 | 1) * 0x43bdcde4 + 0x653e6618)) ^
       0x58415fea77150000) >> 0xf;
  uRam00007fffa479c288 =
       ((uint64_t)
        (&UNK_7fffa5796684 + (int)((uVar2 + 0x6aea8905) * 0x40000 | uVar2 + 0x6aea8905 >> 0xe)) ^
       0x9510292eb5c8abd6) * 0x1002004008000000 ^
       (uint64_t)
       (((-0x281dbbca - uVar2) * 2 | (uint32_t)((int)(-0x281dbbca - uVar2) < 0)) + 0xa5795740) << 0x36 ^
       ((uint64_t)(&UNK_7fffa579304c + (int)(uVar6 << 0x17 | uVar6 >> 9)) ^ 0x9510292eb5c8abd6) *
       0x80100200400801 ^ 0xf580000000000000;
  lVar4 = 0x38555621b2dfeb32 - lRam00007fffa4780fe8;
  uVar5 = 0xffe8180258746fb0;
  if ((uVar2 + 0x68f41dd4 ^ 0x231d1175) <=
      ((uVar2 ^ 0x25db3903) * 0x117b8000 | (uVar2 ^ 0x25db3903) * -0x2b59dd09 >> 0x11)) {
    uVar5 = 0xfffa598bf9757fb1;
  }
  uVar5 = (uVar5 << 0xe | uVar5 >> 0x32) ^ (uVar5 << 6 | uVar5 >> 0x3a) ^ uVar5;
  uVar5 = (uVar5 << 0xc | uVar5 >> 0x34) ^ (uVar5 << 0x1c | uVar5 >> 0x24) ^ uVar5;
  *(uint64_t *)((int64_t)(short)(((uint16_t)uVar3 | 1) * 0x5ea7) + 0x7fffa47a3ae3) =
       (uVar5 << 0x38 | uVar5 >> 8) ^ (uVar5 << 0x18 | uVar5 >> 0x28) ^ uVar5;
  *(int64_t *)
   (((int64_t)(int)((uVar2 ^ 0xa4f015bd) << 10 | (uVar2 ^ 0xa4f015bd) >> 0x16) ^
    0xffffffffb5722250U) + 0x7fffa47a84fc) = lVar4;
  uVar5 = uRam00007fffa4780d68 ^ 0x860977ed82e36a8c;
  uVar5 = (uVar5 << 0x17 | uVar5 >> 0x29) ^ (uVar5 << 5 | uVar5 >> 0x3b) ^ uVar5;
  uVar5 = (uVar5 << 10 | uVar5 >> 0x36) ^ (uVar5 << 0x2e | uVar5 >> 0x12) ^ uVar5;
  uVar5 = (uVar5 << 0x14 | uVar5 >> 0x2c) ^ (uVar5 << 0x1c | uVar5 >> 0x24) ^ uVar5;
  uVar5 = (uVar5 << 0x38 | uVar5 >> 8) ^ (uVar5 << 0x28 | uVar5 >> 0x18) ^ uVar5;
  *(uint64_t *)
   ((int64_t)(int)((uVar2 ^ 0xa838d185) << 0x1a | (uVar2 ^ 0xa838d185) >> 6) + 0x7fffa47a590b) =
       (uVar5 << 0x30 | uVar5 >> 0x10) ^ (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar5;
  return;
}


// ============================================================================
// Function : FUN_7fffa5101d40  |  RVA: 0x991d40  |  Size: 264 bytes
// Callers  : FUN_7fffa4ecf84c@0x75f84c
// Callees  : FUN_7fffa564c5c0@0xedc5c0, FUN_7fffa5488850@0xd18850, FUN_7fffa54e557c@0xd7557c
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5101d40(int param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  uint64_t uVar2;
  uint8_t auStack_88 [32];
  uint32_t *puStack_68;
  uint32_t uStack_60;
  uint32_t uStack_58;
  uint8_t uStack_48;
  uint8_t uStack_47;
  uint8_t uStack_46;
  int64_t lStack_40;
  int64_t *aplStack_38 [2];
  char cStack_28;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint64_t uStack_18;
  
  uStack_18 = _DAT_7fffa4780040 ^ (uint64_t)auStack_88;
  FUN_7fffa564c5c0(&lStack_40,param_3);
  if (0x100 < param_1 + 1U) {
    if (*(short *)(*aplStack_38[0] + (uint64_t)(param_1 >> 8 & 0xff) * 2) < 0) {
      uVar2 = 2;
      uStack_46 = 0;
      uStack_48 = (char)((uint32_t)param_1 >> 8);
      uStack_47 = (char)param_1;
    }
    else {
      uVar2 = 1;
      uStack_47 = 0;
      uStack_48 = (char)param_1;
    }
    uStack_58 = 1;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_60 = *(uint32_t *)((int64_t)aplStack_38[0] + 0xc);
    puStack_68 = &uStack_20;
    iVar1 = FUN_7fffa54e557c(aplStack_38,1,&uStack_48,uVar2);
    if (iVar1 == 0) {
      if (cStack_28 != '\0') {
        *(uint32_t *)(lStack_40 + 0x3a8) = *(uint32_t *)(lStack_40 + 0x3a8) & 0xfffffffd;
      }
      goto LAB_7fffa5101e23;
    }
  }
  if (cStack_28 != '\0') {
    *(uint32_t *)(lStack_40 + 0x3a8) = *(uint32_t *)(lStack_40 + 0x3a8) & 0xfffffffd;
  }
LAB_7fffa5101e23:
  FUN_7fffa5488850(uStack_18 ^ (uint64_t)auStack_88);
  return;
}


// ============================================================================
// Function : FUN_7fffa5101e50  |  RVA: 0x991e50  |  Size: 718 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5101f1e) */

void FUN_7fffa5101e50(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  bRam00007fffa47851fc = '\0';
  uRam00007fffa478521a = 0;
  uRam00007fffa4785222 = 0;
  uRam00007fffa478520a = 0;
  uRam00007fffa4785212 = 0;
  uRam00007fffa478522c = 0;
  uVar1 = rdtsc();
  lVar3 = 6;
  lVar2 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0xd7b5820e3165358;
  while( true ) {
    *(char *)(lVar3 + 0x7fffa47851f1) = (char)((uint64_t)(lVar2 * -0x7544276f2c5c0000) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47851f0) = (char)((uint64_t)(lVar2 * 0x115d7d8000) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47851ef) = (char)((uint64_t)(lVar2 * 0xa2e15b1000) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47851ee) = (char)((uint64_t)(lVar2 * 0xcd953ea600) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47851ed) = (char)((uint64_t)(lVar2 * 0xc07e422e40) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47851ec) = (char)((uint64_t)(lVar2 * 0x20e3165358) >> 0x20);
    if (lVar3 == 0x42) break;
    lVar3 = lVar3 + 6;
    lVar2 = lVar2 * -0x7544276f2c5c0000;
  }
  bRam00007fffa47851fc = bRam00007fffa47851fc + 1 & 3;
  *(uint64_t *)((uint64_t)bRam00007fffa47851fc * 8 + 0x7fffa478520a) = ~uRam00007fffa478522c;
  return;
}


// ============================================================================
// Function : FUN_7fffa5102120  |  RVA: 0x992120  |  Size: 38 bytes
// Callers  : FUN_7fffa52d8e60@0xb68e60, FUN_7fffa512f380@0x9bf380
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t FUN_7fffa5102120(void)

{
  if (_DAT_7fffa4780240 != -1) {
    (*(code *)&DAT_7ff84ea42440)();
    _DAT_7fffa4780240 = -1;
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5102150  |  RVA: 0x992150  |  Size: 633 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5102326) */

void FUN_7fffa5102150(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  bRam00007fffa4784c23 = 0;
  uRam00007fffa4784c4a = 0;
  uRam00007fffa4784c52 = 0;
  uRam00007fffa4784c3a = 0;
  uRam00007fffa4784c42 = 0;
  uRam00007fffa4784c2a = 0;
  uRam00007fffa4784c32 = 0;
  uRam00007fffa4784c69 = 0;
  uVar1 = rdtsc();
  lVar3 = (uVar1 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar1)) * 0xe82fb620a280116;
  lVar4 = 3;
  while( true ) {
    lVar3 = lVar3 * 0xe82fb620a280116 + 0xe82fb620a280116;
    lVar2 = lVar3 * 0xe82fb620a280116 + 0xe82fb620a280116;
    *(char *)(lVar4 + 0x7fffa4784c1e) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(lVar4 + 0x7fffa4784c1d) = (char)((uint64_t)lVar3 >> 0x20);
    if (lVar4 == 0x53) break;
    lVar3 = lVar2 * 0xe82fb620a280116 + 0xe82fb620a280116;
    *(char *)(lVar4 + 0x7fffa4784c1f) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0xe82fb620a280116 + 0xe82fb620a280116;
    *(char *)(lVar4 + 0x7fffa4784c20) = (char)((uint64_t)lVar3 >> 0x20);
    lVar4 = lVar4 + 4;
  }
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa4784c23 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)((uVar1 >> 0x20) * 8 + 0x7fffa4784c2a) = 0xffffffffffffffff;
  bRam00007fffa4784c23 = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa51023d0  |  RVA: 0x9923d0  |  Size: 53 bytes
// Callers  : FUN_7fffa517b810@0xa0b810
// Callees  : none
// ============================================================================
void FUN_7fffa51023d0(int *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                     int64_t param_5,int param_6,uint32_t param_7,uint64_t param_8)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint8_t *pbVar8;
  uint32_t uVar9;
  int *piVar10;
  uint64_t in_stack_ffffffffffffff50;
  uint32_t uVar11;
  uint64_t in_stack_ffffffffffffff58;
  uint8_t auStack_70 [8];
  int64_t lStack_68;
  uint64_t uStack_60;
  int64_t *plStack_58;
  uint32_t uStack_50;
  uint32_t uStack_40;
  
  uVar11 = (uint32_t)((uint64_t)in_stack_ffffffffffffff50 >> 0x20);
  if (*param_1 != -0x7ffffffd) {
    lVar5 = FUN_7fffa54539d0();
    if (*(int64_t *)(lVar5 + 0x10) != 0) {
      lVar5 = FUN_7fffa54539d0();
      lVar5 = *(int64_t *)(lVar5 + 0x10);
      lVar6 = (*(code *)&DAT_7ff850597e70)(0);
      if (((lVar5 != lVar6) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) {
        uVar7 = CONCAT44(uVar11,param_7);
        iVar4 = FUN_7fffa55abf60(param_1,param_2,param_3,param_4,param_5,uVar7,param_8,param_6);
        uVar11 = (uint32_t)((uint64_t)uVar7 >> 0x20);
        in_stack_ffffffffffffff58 = param_8;
        if (iVar4 != 0) {
          return;
        }
      }
    }
    uStack_60 = *(uint64_t *)(param_4 + 8);
    lStack_68 = param_5;
    if (*(int *)(param_5 + 0xc) == 0) {
      FUN_7fffa524fccc();
      pcVar3 = (code *)__debugbreak();
      (*pcVar3)();
      return;
    }
    FUN_7fffa507ef00(&plStack_58,&lStack_68,param_6,param_4,param_5,CONCAT44(uVar11,param_7));
    uVar9 = uStack_50;
    if (uStack_50 < uStack_40) {
      do {
        piVar10 = (int *)((int64_t)*(int *)(*plStack_58 + 0x10) + (uint64_t)uVar9 * 0x14 +
                         plStack_58[1]);
        iVar4 = *piVar10;
        if ((iVar4 <= param_6) && (param_6 <= piVar10[1])) {
          iVar1 = piVar10[2];
          pbVar8 = (uint8_t *)(*(int64_t *)(param_4 + 8) + -0x14 +
                           (int64_t)piVar10[4] + (uint64_t)(uint32_t)piVar10[3] * 0x14);
          iVar2 = *(int *)(pbVar8 + 4);
          if ((iVar2 != 0) && (lVar5 = FUN_7fffa55d63a0(), lVar5 + iVar2 != 0)) {
            iVar2 = *(int *)(pbVar8 + 4);
            if (iVar2 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = FUN_7fffa55d63a0();
              lVar5 = lVar5 + iVar2;
            }
            if (*(char *)(lVar5 + 0x10) != '\0') goto LAB_7fffa51025dd;
          }
          uVar11 = (uint32_t)((uint64_t)in_stack_ffffffffffffff58 >> 0x20);
          if ((*pbVar8 & 0x40) == 0) {
            uVar7 = FUN_7fffa4cf5490(param_2,param_4,param_5,auStack_70);
            lVar5 = FUN_7fffa55d63a0();
            in_stack_ffffffffffffff58 = CONCAT44(uVar11,iVar4);
            FUN_7fffa4a99500(param_2,param_1,param_3,uVar7,*(int *)(pbVar8 + 0xc) + lVar5,param_5,
                             in_stack_ffffffffffffff58,iVar1,pbVar8,param_4,0);
          }
        }
LAB_7fffa51025dd:
        uVar9 = uVar9 + 1;
      } while (uVar9 < uStack_40);
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5102405  |  RVA: 0x992405  |  Size: 519 bytes
// Callers  : none
// Callees  : FUN_7fffa55abf60@0xe3bf60, FUN_7fffa55d63a0@0xe663a0, FUN_7fffa507ef00@0x90ef00, FUN_7fffa4cf5490@0x585490, FUN_7fffa54539d0@0xce39d0, FUN_7fffa4a99500@0x329500
// ============================================================================
void FUN_7fffa5102405(void)

{
  code *pcVar1;
  int64_t *plVar2;
  int iVar3;
  int iVar4;
  int64_t in_RAX;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int *unaff_RSI;
  uint8_t *pbVar9;
  uint32_t uVar10;
  uint64_t unaff_RDI;
  int *piVar11;
  uint64_t unaff_R12;
  int64_t unaff_R14;
  uint64_t uStack0000000000000070;
  uint64_t in_stack_00000078;
  uint64_t uStack0000000000000080;
  uint32_t in_stack_00000088;
  uint32_t in_stack_00000098;
  uint64_t in_stack_000000e0;
  uint64_t in_stack_000000e8;
  uint64_t in_stack_000000f0;
  int64_t in_stack_00000100;
  int in_stack_00000108;
  uint32_t in_stack_00000110;
  uint64_t in_stack_00000118;
  
  *(uint64_t *)(in_RAX + -0x28) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x30) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R12;
  *(uint64_t *)(in_RAX + 0x20) = unaff_RBX;
  lVar5 = FUN_7fffa54539d0();
  iVar3 = in_stack_00000108;
  lVar7 = in_stack_00000100;
  if (*(int64_t *)(lVar5 + 0x10) != 0) {
    lVar5 = FUN_7fffa54539d0();
    lVar5 = *(int64_t *)(lVar5 + 0x10);
    lVar6 = (*(code *)&DAT_7ff850597e70)(0);
    if ((((lVar5 != lVar6) && (*unaff_RSI != -0x1fbcb0b3)) && (*unaff_RSI != -0x1fbcbcae)) &&
       (iVar4 = FUN_7fffa55abf60(), iVar4 != 0)) {
      return;
    }
  }
  in_stack_00000078 = *(uint64_t *)(unaff_R14 + 8);
  uStack0000000000000070 = lVar7;
  if (*(int *)(lVar7 + 0xc) == 0) {
    FUN_7fffa524fccc();
    pcVar1 = (code *)__debugbreak();
    (*pcVar1)();
    return;
  }
  FUN_7fffa507ef00(&uStack0000000000000080,&uStack0000000000000070,iVar3);
  plVar2 = uStack0000000000000080;
  uVar10 = in_stack_00000088;
  if (in_stack_00000088 < in_stack_00000098) {
    do {
      piVar11 = (int *)((int64_t)*(int *)(*plVar2 + 0x10) + (uint64_t)uVar10 * 0x14 + plVar2[1]);
      if ((*piVar11 <= iVar3) && (iVar3 <= piVar11[1])) {
        pbVar9 = (uint8_t *)(*(int64_t *)(unaff_R14 + 8) + -0x14 +
                         (int64_t)piVar11[4] + (uint64_t)(uint32_t)piVar11[3] * 0x14);
        iVar4 = *(int *)(pbVar9 + 4);
        if ((iVar4 != 0) && (lVar7 = FUN_7fffa55d63a0(), lVar7 + iVar4 != 0)) {
          iVar4 = *(int *)(pbVar9 + 4);
          if (iVar4 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = FUN_7fffa55d63a0();
            lVar7 = lVar7 + iVar4;
          }
          if (*(char *)(lVar7 + 0x10) != '\0') goto LAB_7fffa51025dd;
        }
        if ((*pbVar9 & 0x40) == 0) {
          uVar8 = FUN_7fffa4cf5490(in_stack_000000e8);
          lVar7 = FUN_7fffa55d63a0();
          FUN_7fffa4a99500(in_stack_000000e8,in_stack_000000e0,in_stack_000000f0,uVar8,
                           *(int *)(pbVar9 + 0xc) + lVar7);
        }
      }
LAB_7fffa51025dd:
      uVar10 = uVar10 + 1;
    } while (uVar10 < in_stack_00000098);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa510260c  |  RVA: 0x99260c  |  Size: 15 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa510260c(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa510261b  |  RVA: 0x99261b  |  Size: 6 bytes
// Callers  : none
// Callees  : FUN_7fffa524fccc@0xadfccc
// ============================================================================
void FUN_7fffa510261b(void)

{
  code *pcVar1;
  
  FUN_7fffa524fccc();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5102630  |  RVA: 0x992630  |  Size: 272 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5102630(void)

{
  puRam00007fffa4786088 = &UNK_7fffa56ee720;
  uRam00007fffa4786078 = 0x3f;
  uRam00007fffa4786080 = 1;
  uRam00007fffa4786090 = 0;
  uRam00007fffa4786098 = 0;
  uRam00007fffa47860a0 = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa5102740  |  RVA: 0x992740  |  Size: 145 bytes
// Callers  : FUN_7fffa507e880@0x90e880
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa517c9b4@0xa0c9b4, FUN_7fffa4ed9184@0x769184
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa5102740(uint32_t param_1)

{
  uint32_t *puVar1;
  uint64_t uVar2;
  uint32_t auStackX_8 [2];
  uint8_t auStackX_10 [8];
  uint32_t auStackX_18 [2];
  uint32_t auStackX_20 [2];
  uint32_t *apuStack_18 [3];
  
  auStackX_8[0] = param_1;
  if (param_1 == 0xfffffffe) {
    puVar1 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar1 = 9;
  }
  else {
    if (((-1 < (int)param_1) && (param_1 < _DAT_7fffa4782580)) &&
       ((*(uint8_t *)(*(int64_t *)(&DAT_7fffa4782180 + ((int64_t)(int)param_1 >> 6) * 8) + 0x38 +
                  (uint64_t)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      apuStack_18[0] = auStackX_8;
      auStackX_18[0] = param_1;
      auStackX_20[0] = param_1;
      uVar2 = FUN_7fffa517c9b4(auStackX_10,auStackX_20,apuStack_18,auStackX_18);
      return uVar2;
    }
    puVar1 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar1 = 9;
    FUN_7fffa55c8ce0();
  }
  return 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa51027e0  |  RVA: 0x9927e0  |  Size: 32 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa51027e0(void)

{
  uint32_t in_EAX;
  int in_R9D;
  uint64_t uStack_8;
  
  uStack_8 = CONCAT44((-0x55c7e63f - in_R9D) * 2 | (uint32_t)(-0x55c7e63f - in_R9D < 0),in_EAX);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa5102800  |  RVA: 0x992800  |  Size: 844 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5102800(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  int64_t lVar4;
  uint32_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint32_t unaff_EDI;
  uint8_t bVar8;
  int64_t lVar9;
  uint32_t unaff_R15D;
  
  uVar5 = (unaff_EDI ^ 0xffffffff) * -0x3ffffd12 +
          (unaff_R15D | unaff_EDI | ~unaff_R15D) * -0x1cf8651a + 0x710a33c + ~unaff_EDI * 0x3ffffd12
          + (~(unaff_R15D | unaff_EDI) & unaff_R15D) * 0x1cf8651a;
  uVar3 = (uint16_t)uVar5;
  *(uint8_t *)((int64_t)(short)(uVar3 + 0x7a8e) + 0x7fffa478e176) = 0;
  bVar2 = (uint8_t)uVar5 & 0x1f;
  lVar4 = (int64_t)(short)(~(uVar3 + 0x8084) << 3 | (uint16_t)~(uVar3 + 0x8084) >> 0xd);
  *(uint8_t (*) [16])(lVar4 + 0x7fffa478ab6c) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar4 + 0x7fffa478ab5c) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar4 + 0x7fffa478ab4c) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar4 + 0x7fffa478ab3c) = (uint8_t  [16])0x0;
  *(uint64_t *)((int64_t)(int)((uVar5 ^ 0x709cfcb) * 0xaae8ee3 + -0x47210e92) + 0x7fffa4795d0a) =
       (uint64_t)(0U >> bVar2 | 0 << 0x20 - bVar2);
  uVar1 = rdtsc();
  lVar4 = (uVar1 & 0xffffffff00000000 | CONCAT44((int)((uint64_t)lVar4 >> 0x20),(int)uVar1)) *
          0x542db8869cce8ce;
  lVar9 = 3;
  while( true ) {
    lVar4 = lVar4 * 0x542db8869cce8ce + 0x542db8869cce8ce;
    lVar7 = lVar4 * 0x542db8869cce8ce + 0x542db8869cce8ce;
    lVar6 = lVar7 * 0x542db8869cce8ce + 0x542db8869cce8ce;
    *(char *)(lVar9 + (int64_t)(short)(uVar3 + 0x823c) + 0x7fffa478d9bb) =
         (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar9 + (int64_t)(int)((uVar5 + 0xd8c2a3a9) * 0x400000 | uVar5 + 0xd8c2a3a9 >> 10) +
                      0x7fffa4793165) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar9 + (int64_t)(int)(0x24088420 - uVar5) + 0x7fffa478e884) =
         (char)((uint64_t)lVar7 >> 0x20);
    if (lVar9 == 0x6b) break;
    lVar4 = lVar6 * 0x542db8869cce8ce + 0x542db8869cce8ce;
    *(char *)(lVar9 + (int64_t)(int)((uVar5 + 0xf0a2cbe5) * -0x759ae625) + 0x7fffa47912d7) =
         (char)((uint64_t)lVar4 >> 0x20);
    lVar9 = lVar9 + 4;
  }
  bVar2 = (uint8_t)uVar5 & 0xf;
  bVar8 = *(char *)((int64_t)
                    (int)(((uVar5 + 0x1531a3d) * 0x400 | uVar5 + 0x1531a3d >> 0x16) ^ 0x8f75692e) +
                   0x7fffa4793e9f) + 1U & 7;
  *(uint64_t *)((int64_t)(short)((uVar3 | 1) * 0x6111) + 0x7fffa478dfa0 + (uint64_t)bVar8 * 8) =
       0xffffffffffffffff;
  *(uint8_t *)((int64_t)(short)(0x2704 << bVar2 | 0x2704U >> 0x10 - bVar2) + 0x7fffa478a351) = bVar8;
  return;
}


// ============================================================================
// Function : FUN_7fffa5102b50  |  RVA: 0x992b50  |  Size: 149 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5102b50(void)

{
  uint8_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t in_R10;
  
  uVar2 = (in_R10 << 0x1d | in_R10 >> 0x23) ^ (in_R10 << 0x23 | in_R10 >> 0x1d) ^ in_R10;
  uVar2 = (uVar2 << 0x3a | uVar2 >> 6) ^ (uVar2 << 6 | uVar2 >> 0x3a) ^ uVar2;
  uVar2 = (uVar2 << 0x34 | uVar2 >> 0xc) ^ (uVar2 << 0xc | uVar2 >> 0x34) ^ uVar2;
  uVar2 = (uVar2 << 0x18 | uVar2 >> 0x28) ^ (uVar2 << 0x28 | uVar2 >> 0x18) ^ uVar2;
  puVar3 = (uint64_t *)((uVar2 << 0x10 | uVar2 >> 0x30) ^ (uVar2 << 0x30 | uVar2 >> 0x10) ^ uVar2)
  ;
  uVar1 = (**(code **)puVar3[1])(puVar3[2] + 1);
  *(uint8_t *)*puVar3 = uVar1;
  return;
}


// ============================================================================
// Function : FUN_7fffa5102bf0  |  RVA: 0x992bf0  |  Size: 894 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5102bf0(void)

{
  uRam00007fffa47bb378 = 0x7a1cc5f7cef28910;
  uRam00007fffa47bb358 = 0;
  uRam00007fffa47bb360 = 0x77f38d3bd287733a;
  uRam00007fffa47bb380 = 0x592539e7778dd7dd;
  uRam00007fffa47bb388 = 0x69c44e3a1796d7d4;
  uRam00007fffa47bb370 = 0x5bcb2b79556f3600;
  uRam00007fffa47bb350 = 0xbf4bce5b96c11c88;
  uRam00007fffa47bb368 = 0x864e89a254861358;
  return;
}


// ============================================================================
// Function : FUN_7fffa5102fa0  |  RVA: 0x992fa0  |  Size: 19 bytes
// Callers  : FUN_7fffa53eebe0@0xc7ebe0, FUN_7fffa51ab910@0xa3b910, FUN_7fffa569dec0@0xf2dec0, FUN_7fffa548dad0@0xd1dad0, FUN_7fffa4e912d0@0x7212d0, FUN_7fffa50cb4f0@0x95b4f0, FUN_7fffa549c320@0xd2c320, FUN_7fffa52468b0@0xad68b0
// Callees  : FUN_7fffa53eceb0@0xc7ceb0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5102fa0(void)

{
  code *pcVar1;
  
  if (_DAT_7fffa47800e0 < 2) {
    FUN_7fffa53eceb0();
    return;
  }
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5102fc0  |  RVA: 0x992fc0  |  Size: 138 bytes
// Callers  : FUN_7fffa5697520@0xf27520, FUN_7fffa51817cd@0xa117cd, FUN_7fffa50c98ab@0x9598ab
// Callees  : none
// ============================================================================
void FUN_7fffa5102fc0(void)

{
  code *pcVar1;
  uint8_t **ppuStack_28;
  char *pcStack_20;
  uint64_t uStack_18;
  
  uStack_18 = 0;
  ppuStack_28 = &PTR_FUN_7fffa56f52d8;
  pcStack_20 = "bad array new length";
  FUN_7fffa4f41160(&ppuStack_28,&UNK_7fffa588cfc0);
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5103050  |  RVA: 0x993050  |  Size: 1838 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5103050(void) {
    /* +0x993050 */ __asm { PUSH R14 }
    /* +0x993052 */ __asm { PUSH R13 }
    /* +0x993054 */ __asm { PUSH RSI }
    /* +0x993055 */ __asm { PUSH RBX }
    /* +0x993056 */ __asm { PUSH R15 }
    /* +0x993058 */ __asm { PUSH R12 }
    /* +0x99305a */ __asm { PUSH RDI }
    /* +0x99305b */ __asm { PUSH RBP }
    /* +0x99305c */ __asm { SUB RSP,0x68 }
    /* +0x993060 */ __asm { MOV R14,R9 }
    /* +0x993063 */ __asm { MOV EDI,EAX }
    /* +0x993065 */ __asm { MOV RBP,RDX }
    /* +0x993068 */ __asm { MOV RBX,RCX }
    /* +0x99306b */ __asm { MOV ESI,R11D }
    /* +0x99306e */ __asm { MOV R12,qword ptr [RSP + 0xd8] }
    /* +0x993076 */ __asm { MOV R11,qword ptr [RSP + 0xd0] }
    /* +0x99307e */ __asm { MOV RDX,R11 }
    /* +0x993081 */ __asm { ROL RDX,0x10 }
    /* +0x993085 */ __asm { MOV R9D,0x6a923806 }
    /* +0x99308b */ __asm { MOV RAX,R11 }
    /* +0x99308e */ __asm { ROL RAX,0x1d }
    /* +0x993092 */ __asm { XOR RAX,RDX }
    /* +0x993095 */ __asm { XOR RAX,R11 }
    /* +0x993098 */ __asm { MOV RDX,RAX }
    /* +0x99309b */ __asm { ROL RDX,0x20 }
    /* +0x99309f */ __asm { MOV R11D,0x353f203c }
    /* +0x9930a5 */ __asm { MOV R10,RAX }
    /* +0x9930a8 */ __asm { ROL R10,0x3a }
    /* +0x9930ac */ __asm { XOR R10,RDX }
    /* +0x9930af */ __asm { ADD R9D,0xbeedfff1 }
    /* +0x9930b6 */ __asm { ADD R11D,0xe700ce20 }
    /* +0x9930bd */ __asm { MOV ECX,R14D }
    /* +0x9930c0 */ __asm { ROL R11D,CL }
    /* +0x9930c3 */ __asm { XOR R10,RAX }
    /* +0x9930c6 */ __asm { ROL R10,0xc }
    /* +0x9930ca */ __asm { MOVQ RDX,XMM5 }
    /* +0x9930cf */ __asm { MOV RAX,0x6974a18671e89d97 }
    /* +0x9930d9 */ __asm { IMUL RAX,RDX }
    /* +0x9930dd */ __asm { MOV RDX,-0x121b0b30afe8189c }
    /* +0x9930e7 */ __asm { ADD RDX,RAX }
    /* +0x9930ea */ __asm { MOV RAX,RDX }
    /* +0x9930ed */ __asm { SHR RAX,0x3a }
    /* +0x9930f1 */ __asm { XOR RAX,RDX }
    /* +0x9930f4 */ __asm { MOV RDX,RAX }
    /* +0x9930f7 */ __asm { ROL RDX,0x7 }
    /* +0x9930fb */ __asm { MOV RCX,RAX }
    /* +0x9930fe */ __asm { ROL RCX,0x3c }
    /* +0x993102 */ __asm { XOR RCX,RDX }
    /* +0x993105 */ __asm { XOR RCX,RAX }
    /* +0x993108 */ __asm { MOV RDX,RCX }
    /* +0x99310b */ __asm { ROL RDX,0xe }
    /* +0x99310f */ __asm { MOV RAX,RCX }
    /* +0x993112 */ __asm { ROL RAX,0x38 }
    /* +0x993116 */ __asm { XOR RAX,RDX }
    /* +0x993119 */ __asm { XOR RAX,RCX }
    /* +0x99311c */ __asm { MOV RDX,RAX }
    /* +0x99311f */ __asm { ROL RDX,0x1c }
    /* +0x993123 */ __asm { MOV RCX,RAX }
    /* +0x993126 */ __asm { ROL RCX,0x30 }
    /* +0x99312a */ __asm { XOR RCX,RDX }
    /* +0x99312d */ __asm { XOR RCX,RAX }
    /* +0x993130 */ __asm { MOV RDX,RCX }
    /* +0x993133 */ __asm { ROL RDX,0x38 }
    /* +0x993137 */ __asm { MOV R13,RCX }
    /* +0x99313a */ __asm { ROL R13,0x20 }
    /* +0x99313e */ __asm { XOR R13,RDX }
    /* +0x993141 */ __asm { XOR R13,RCX }
    /* +0x993144 */ __asm { ROL R13,0x10 }
    /* +0x993148 */ __asm { RDTSC }
    /* +0x99314a */ __asm { SHL RDX,0x20 }
    /* +0x99314e */ __asm { OR RDX,RAX }
    /* +0x993151 */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0x99315b */ __asm { IMUL RAX,RDX }
    /* +0x99315f */ __asm { MOV RDX,-0x22b18422c4a9c65e }
    /* +0x993169 */ __asm { ADD RDX,RAX }
    /* +0x99316c */ __asm { MOV RCX,RDX }
    /* +0x99316f */ __asm { SHR RCX,0x3b }
    /* +0x993173 */ __asm { MOV RAX,RDX }
    /* +0x993176 */ __asm { SHR RAX,0x2d }
    /* +0x99317a */ __asm { SHR RDX,0x1b }
    /* +0x99317e */ __asm { XOR EAX,EDX }
    /* +0x993180 */ __asm { ROR EAX,CL }
    /* +0x993182 */ __asm { MOV EDX,EAX }
    /* +0x993184 */ __asm { MOV ECX,R14D }
    /* +0x993187 */ __asm { ROR R9D,CL }
    /* +0x99318a */ __asm { XOR EDX,0x3 }
    /* +0x99318d */ __asm { AND EAX,0x3 }
    /* +0x993190 */ __asm { MOVSXD R9,R9D }
    /* +0x993193 */ __asm { CMP R9,R11 }
    /* +0x993196 */ __asm { CMOVC EAX,EDX }
    /* +0x993199 */ __asm { CMP EAX,0x2 }
    /* +0x99319c */ __asm { JGE 0x7fffa5103219 }
    /* +0x99319e */ __asm { CMP EAX,0x1 }
    /* +0x9931a1 */ __asm { JZ 0x7fffa510326b }
    /* +0x9931a7 */ __asm { MOV R11D,0x25f584fd }
    /* +0x9931ad */ __asm { MOV R9,qword ptr [R11 + 0x5a087b0b] }
    /* +0x9931b4 */ __asm { MOV R11,-0x4149dfa40d82a84f }
    /* +0x9931be */ __asm { MOV RAX,R9 }
    /* +0x9931c1 */ __asm { MUL R11 }
    /* +0x9931c4 */ __asm { MOV R11,RDX }
    /* +0x9931c7 */ __asm { MOV EDX,0x146becb }
    /* +0x9931cc */ __asm { MOV RAX,R9 }
    /* +0x9931cf */ __asm { MUL RDX }
    /* +0x9931d2 */ __asm { ADD RAX,R11 }
    /* +0x9931d5 */ __asm { ADC RDX,0x0 }
    /* +0x9931d9 */ __asm { TEST DL,0x1 }
    /* +0x9931dc */ __asm { JNZ 0x7fffa510360e }
    /* +0x9931e2 */ __asm { MOV R9,-0x7f2fbcc185078ad8 }
    /* +0x9931ec */ __asm { LEA R11,[0x7fffa47bf5a5] }
    /* +0x9931f3 */ __asm { XOR R9,R14 }
    /* +0x9931f6 */ __asm { ROR R9,0x1 }
    /* +0x9931f9 */ __asm { IMUL R9,R9,0x7ffe0015 }
    /* +0x993200 */ __asm { CMP R11,R9 }
    /* +0x993203 */ __asm { NOP }
    /* +0x993204 */ __asm { NOP }
    /* +0x993205 */ __asm { NOP }
    /* +0x993206 */ __asm { NOP }
    /* +0x993207 */ __asm { NOP }
    /* +0x993208 */ __asm { MOV qword ptr [RSP + 0x50],R9 }
    /* +0x99320d */ __asm { MOV EAX,dword ptr [R11 + -0x25d1] }
    /* +0x993214 */ __asm { JMP 0x7fffa5103b1f }
    /* +0x993219 */ __asm { MOV CX,0x429b }
    /* +0x99321d */ __asm { LEA R9D,[R14 + RCX*0x1] }
    /* +0x993221 */ __asm { ADD R9D,0xffffece6 }
    /* +0x993228 */ __asm { XOR R9D,0xcc61 }
    /* +0x99322f */ __asm { MOVZX R9D,R9W }
    /* +0x993233 */ __asm { CMP EAX,R9D }
    /* +0x993236 */ __asm { JGE 0x7fffa510355c }
    /* +0x99323c */ __asm { LEA R11,[0x7fffa47beef6] }
    /* +0x993243 */ __asm { MOV R9,0xb3bfdbe1d580c8a }
    /* +0x99324d */ __asm { CMP R11,R9 }
    /* +0x993250 */ __asm { NOP }
    /* +0x993251 */ __asm { NOP }
    /* +0x993252 */ __asm { NOP }
    /* +0x993253 */ __asm { NOP }
    /* +0x993254 */ __asm { NOP }
    /* +0x993255 */ __asm { NOP }
    /* +0x993256 */ __asm { NOP }
    /* +0x993257 */ __asm { NOP }
    /* +0x993258 */ __asm { NOP }
    /* +0x993259 */ __asm { NOP }
    /* +0x99325a */ __asm { MOV qword ptr [RSP + 0x50],R9 }
    /* +0x99325f */ __asm { MOV EAX,dword ptr [R11 + -0x2986] }
    /* +0x993266 */ __asm { JMP 0x7fffa5103b1f }
    /* +0x99326b */ __asm { RDTSC }
    /* +0x99326d */ __asm { SHL RDX,0x20 }
    /* +0x993271 */ __asm { OR RDX,RAX }
    /* +0x993274 */ __asm { MOV R9,-0x2ecbdabc217d106b }
    /* +0x99327e */ __asm { IMUL R9,RDX }
    /* +0x993282 */ __asm { MOV R11,0x5aab5aff2222d442 }
    /* +0x99328c */ __asm { ADD R11,R9 }
    /* +0x99328f */ __asm { MOV R9,R11 }
    /* +0x993292 */ __asm { SHR R9,0x2d }
    /* +0x993296 */ __asm { MOV RCX,R11 }
    /* +0x993299 */ __asm { SHR RCX,0x3b }
    /* +0x99329d */ __asm { SHR R11,0x1b }
    /* +0x9932a1 */ __asm { XOR R9D,R11D }
    /* +0x9932a4 */ __asm { ROR R9D,CL }
    /* +0x9932a7 */ __asm { MOV dword ptr [RSP + 0x50],0x9e8e9e43 }
    /* +0x9932af */ __asm { MOV ECX,dword ptr [RSP + 0x50] }
    /* +0x9932b3 */ __asm { CMP ECX,0x68c3bf05 }
    /* +0x9932b9 */ __asm { JBE 0x7fffa5103b5d }
    /* +0x9932bf */ __asm { MOV ECX,0xfee89def }
    /* +0x9932c4 */ __asm { XOR ECX,R14D }
    /* +0x9932c7 */ __asm { PUSHFQ }
    /* +0x9932c8 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x9932d0 */ __asm { POPFQ }
    /* +0x9932d1 */ __asm { ROL ECX,0x6 }
    /* +0x9932d4 */ __asm { CMP R9D,ECX }
    /* +0x9932d7 */ __asm { JNC 0x7fffa5103516 }
    /* +0x9932dd */ __asm { MOV dword ptr [RSP + 0x50],0x7d5affd9 }
    /* +0x9932e5 */ __asm { MOV R9D,dword ptr [RSP + 0x50] }
    /* +0x9932ea */ __asm { MOV R9D,0xa74a8d7 }
    /* +0x9932f0 */ __asm { ADD R9D,0x37acfbe }
    /* +0x9932f7 */ __asm { XOR R9D,0x74677a24 }
    /* +0x9932fe */ __asm { LEA R11,[0x7fffa47bdefb] }
    /* +0x993305 */ __asm { MOV RDX,-0x1c9b19aab24a18ff }
    /* +0x99330f */ __asm { CMP R11,RDX }
    /* +0x993312 */ __asm { SETZ AL }
    /* +0x993315 */ __asm { MOV ECX,0x7dc1d73b }
    /* +0x99331a */ __asm { NOT ECX }
    /* +0x99331c */ __asm { ADD ECX,R14D }
    /* +0x99331f */ __asm { MOVSXD RDX,ECX }
    /* +0x993322 */ __asm { CMP RDX,R9 }
    /* +0x993325 */ __asm { SETG R9B }
    /* +0x993329 */ __asm { CMP R9B,AL }
    /* +0x99332c */ __asm { NOP }
    /* +0x99332d */ __asm { NOP }
    /* +0x99332e */ __asm { NOP }
    /* +0x99332f */ __asm { NOP }
    /* +0x993330 */ __asm { NOP }
    /* +0x993331 */ __asm { NOP }
    /* +0x993332 */ __asm { NOP }
    /* +0x993333 */ __asm { NOP }
    /* +0x993334 */ __asm { MOV R9D,0x1cee071b }
    /* +0x99333a */ __asm { ADD R9D,0xe30df90d }
    /* +0x993341 */ __asm { MOV ECX,R14D }
    /* +0x993344 */ __asm { ROR R9D,CL }
    /* +0x993347 */ __asm { MOV CX,0x1ed1 }
    /* +0x99334b */ __asm { ADD ECX,0x92 }
    /* +0x993351 */ __asm { ROL CX,0x8 }
    /* +0x993355 */ __asm { ADD ECX,R14D }
    /* +0x993358 */ __asm { MOVZX EDX,CX }
    /* +0x99335b */ __asm { MOVZX ECX,uint8_t ptr [R11 + -0x186e] }
    /* +0x993363 */ __asm { MOVZX EAX,uint8_t ptr [R11 + RCX*0x4 + -0x185e] }
    /* +0x99336c */ __asm { ROL AL,0x4 }
    /* +0x99336f */ __asm { MOV uint8_t ptr [RSP + 0x50],AL }
    /* +0x993373 */ __asm { MOVZX EAX,uint8_t ptr [R11 + RCX*0x4 + -0x185d] }
    /* +0x99337c */ __asm { ROL AL,0x4 }
    /* +0x99337f */ __asm { MOV uint8_t ptr [RSP + 0x51],AL }
    /* +0x993383 */ __asm { MOVZX EAX,uint8_t ptr [R11 + RCX*0x4 + -0x185c] }
    /* +0x99338c */ __asm { ROL AL,0x4 }
    /* +0x99338f */ __asm { MOV uint8_t ptr [RSP + 0x52],AL }
    /* +0x993393 */ __asm { MOVZX EAX,uint8_t ptr [R11 + RCX*0x4 + -0x185b] }
    /* +0x99339c */ __asm { ROL AL,0x4 }
    /* +0x99339f */ __asm { MOV uint8_t ptr [RSP + 0x53],AL }
    /* +0x9933a3 */ __asm { MOVZX ECX,uint8_t ptr [R9] }
    /* +0x9933a7 */ __asm { MOV R9D,0x65e8ce72 }
    /* +0x9933ad */ __asm { MOV EAX,0x1 }
    /* +0x9933b2 */ __asm { SHL EAX,CL }
    /* +0x9933b4 */ __asm { XOR R9D,dword ptr [RSP + 0x50] }
    /* +0x9933b9 */ __asm { AND EAX,R9D }
    /* +0x9933bc */ __asm { CMP EAX,EDX }
    /* +0x9933be */ __asm { JZ 0x7fffa5103516 }
    /* +0x9933c4 */ __asm { NOP }
    /* +0x9933c6 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x9933cd */ __asm { MOV R11,0x0 }
    /* +0x9933d4 */ __asm { XORPS XMM2,XMM2 }
    /* +0x9933d7 */ __asm { MOVAPS xmmword ptr [RSP + 0x50],XMM2 }
    /* +0x9933dc */ __asm { MOV dword ptr [RSP + 0x60],0x20340001 }
    /* +0x9933e4 */ __asm { MOV R9D,dword ptr [RSP + 0x60] }
    /* +0x9933e9 */ __asm { MOV DX,0x363d }
    /* +0x9933ed */ __asm { ADD EDX,0xffff8cf1 }
    /* +0x9933f3 */ __asm { MOV ECX,R14D }
    /* +0x9933f6 */ __asm { ROL DX,CL }
    /* +0x9933f9 */ __asm { AND R9D,0x1 }
    /* +0x9933fd */ __asm { ADD EDX,0x79a3 }
    /* +0x993403 */ __asm { MOVZX ECX,DX }
    /* +0x993406 */ __asm { CMP R9D,ECX }
    /* +0x993409 */ __asm { JZ 0x7fffa5103b71 }
    /* +0x99340f */ __asm { MOV dword ptr [RSP + 0x50],0x0 }
    /* +0x993417 */ __asm { MOV R9,qword ptr [RSP + 0xa8] }
    /* +0x99341f */ __asm { MOV R9,qword ptr [R9 + -0xd20] }
    /* +0x993426 */ __asm { MOV R11,0x1388de6b890f5dc7 }
    /* +0x993430 */ __asm { MOV R11,-0x2e1070cced18e252 }
    /* +0x99343a */ __asm { CMP R9,R11 }
    /* +0x99343d */ __asm { NOP }
    /* +0x99343e */ __asm { NOP }
    /* +0x99343f */ __asm { NOP }
    /* +0x993440 */ __asm { NOP }
    /* +0x993441 */ __asm { NOP }
    /* +0x993442 */ __asm { NOP }
    /* +0x993443 */ __asm { NOP }
    /* +0x993444 */ __asm { NOP }
    /* +0x993445 */ __asm { NOP }
    /* +0x993446 */ __asm { MOV dword ptr [RSP + 0x60],0x7df97fbe }
    /* +0x99344e */ __asm { MOV R9D,dword ptr [RSP + 0x60] }
    /* +0x993453 */ __asm { MOV ECX,0x10ffddfb }
    /* +0x993458 */ __asm { ADD ECX,R14D }
    /* +0x99345b */ __asm { IMUL ECX,ECX,-0x1e8fa437 }
    /* +0x993461 */ __asm { CMP R9D,ECX }
    /* +0x993464 */ __asm { NOP }
    /* +0x993465 */ __asm { NOP }
    /* +0x993466 */ __asm { NOP }
    /* +0x993467 */ __asm { NOP }
    /* +0x993468 */ __asm { NOP }
    /* +0x993469 */ __asm { MOV R15,R10 }
    /* +0x99346c */ __asm { MOV R12,R8 }
    /* +0x99346f */ __asm { MOV R9,-0x40e6c37271235437 }
    /* +0x993479 */ __asm { XOR R9,0x7f81da1f }
    /* +0x993480 */ __asm { SUB R9,R14 }
    /* +0x993483 */ __asm { MOV RDX,-0x2d39a9fd54150824 }
    /* +0x99348d */ __asm { LEA R11,[0x7fffa47c17fa] }
    /* +0x993494 */ __asm { MOV RCX,R11 }
    /* +0x993497 */ __asm { ROL RCX,0xd }
    /* +0x99349b */ __asm { SUB RDX,R14 }
    /* +0x99349e */ __asm { ROL RDX,0x23 }
    /* +0x9934a2 */ __asm { IMUL RDX,RCX }
    /* +0x9934a6 */ __asm { MOV R10D,0xa541cd51 }
    /* +0x9934ac */ __asm { ADD R10,RDX }
    /* +0x9934af */ __asm { CMP R9,R10 }
    /* +0x9934b2 */ __asm { JZ 0x7fffa5103b79 }
    /* +0x9934b8 */ __asm { MOV R8W,0x5879 }
    /* +0x9934bd */ __asm { MOV R9D,0xae3f0536 }
    /* +0x9934c3 */ __asm { IMUL ECX,R9D,0x2d56cda5 }
    /* +0x9934ca */ __asm { ROL ECX,0x4 }
    /* +0x9934cd */ __asm { MOV qword ptr [RSP + 0x60],R9 }
    /* +0x9934d2 */ __asm { SUB ECX,R14D }
    /* +0x9934d5 */ __asm { MOV R10W,0xe40f }
    /* +0x9934da */ __asm { LEA R9D,[R14 + R10*0x1] }
    /* +0x9934de */ __asm { ADD R9D,0x7f20 }
    /* +0x9934e5 */ __asm { MOVZX R9D,R9W }
    /* +0x9934e9 */ __asm { MOV EDX,0xfffff542 }
    /* +0x9934ee */ __asm { SUB EDX,R8D }
    /* +0x9934f1 */ __asm { MOVSXD R10,ECX }
    /* +0x9934f4 */ __asm { XOR EDX,R14D }
    /* +0x9934f7 */ __asm { MOVZX EDX,DX }
    /* +0x9934fa */ __asm { MOV EAX,dword ptr [R11 + -0x4822] }
    /* +0x993501 */ __asm { LEA R8,[RSP + 0x50] }
    /* +0x993506 */ __asm { SYSCALL }
    /* +0x993508 */ __asm { MOV R8,R12 }
    /* +0x99350b */ __asm { MOV R10,R15 }
    /* +0x99350e */ __asm { MOV R12,qword ptr [RSP + 0xd8] }
    /* +0x993516 */ __asm { MOV R9D,0xb445ae78 }
    /* +0x99351c */ __asm { XOR R9D,0x34bd2d4c }
    /* +0x993523 */ __asm { LEA R11,[0x7fffa4783989] }
    /* +0x99352a */ __asm { ROR R9D,0x1 }
    /* +0x99352d */ __asm { MOVSXD R9,R9D }
    /* +0x993530 */ __asm { XOR R9,R11 }
    /* +0x993533 */ __asm { ADD R9,-0xc2cac03 }
    /* +0x99353a */ __asm { MOV RDX,0x32252e2d1a226b26 }
    /* +0x993544 */ __asm { CMP R9,RDX }
    /* +0x993547 */ __asm { NOP }
    /* +0x993548 */ __asm { NOP }
    /* +0x993549 */ __asm { NOP }
    /* +0x99354a */ __asm { NOP }
    /* +0x99354b */ __asm { MOV qword ptr [RSP + 0x50],R9 }
    /* +0x993550 */ __asm { MOV EAX,dword ptr [R11 + 0xc87] }
    /* +0x993557 */ __asm { JMP 0x7fffa5103b1f }
    /* +0x99355c */ __asm { MOV R11D,0x862d1e89 }
    /* +0x993562 */ __asm { MOV R9D,0xa18d7f0a }
    /* +0x993568 */ __asm { XOR R9D,R14D }
    /* +0x99356b */ __asm { ADD R9D,0x7aa892ff }
    /* +0x993572 */ __asm { ADD R9,R11 }
    /* +0x993575 */ __asm { ROR R9,0x1 }
    /* +0x993578 */ __asm { MOV EDX,0xc3b60f76 }
    /* +0x99357d */ __asm { ADD RDX,R9 }
    /* +0x993580 */ __asm { MOV R9,-0x29550db1ae778e7d }
    /* +0x99358a */ __asm { CMP RDX,R9 }
    /* +0x99358d */ __asm { NOP }
    /* +0x99358e */ __asm { NOP }
    /* +0x99358f */ __asm { NOP }
    /* +0x993590 */ __asm { NOP }
    /* +0x993591 */ __asm { NOP }
    /* +0x993592 */ __asm { NOP }
    /* +0x993593 */ __asm { NOP }
    /* +0x993594 */ __asm { NOP }
    /* +0x993595 */ __asm { NOP }
    /* +0x993596 */ __asm { NOP }
    /* +0x993597 */ __asm { NOP }
    /* +0x993598 */ __asm { NOP }
    /* +0x993599 */ __asm { NOP }
    /* +0x99359a */ __asm { NOP }
    /* +0x99359b */ __asm { NOP }
    /* +0x99359c */ __asm { NOP }
    /* +0x99359d */ __asm { NOP }
    /* +0x99360e */ __asm { RDTSC }
    /* +0x993610 */ __asm { SHL RDX,0x20 }
    /* +0x993614 */ __asm { OR RDX,RAX }
    /* +0x993617 */ __asm { MOV R9,-0x83d143f70980d4b }
    /* +0x993621 */ __asm { IMUL R9,RDX }
    /* +0x993625 */ __asm { MOV R11,0x7798a525f835556 }
    /* +0x99362f */ __asm { ADD R11,R9 }
    /* +0x993632 */ __asm { MOV RCX,R11 }
    /* +0x993635 */ __asm { SHR RCX,0x3b }
    /* +0x993639 */ __asm { MOV R9,R11 }
    /* +0x99363c */ __asm { SHR R9,0x1b }
    /* +0x993640 */ __asm { SHR R11,0x2d }
    /* +0x993644 */ __asm { XOR R9D,R11D }
    /* +0x993647 */ __asm { ROR R9D,CL }
    /* +0x99364a */ __asm { MOV dword ptr [RSP + 0x50],0x60abef11 }
    /* +0x993652 */ __asm { MOV ECX,dword ptr [RSP + 0x50] }
    /* +0x993656 */ __asm { CMP ECX,0x970e334 }
    /* +0x99365c */ __asm { NOP }
    /* +0x99365d */ __asm { NOP }
    /* +0x99365e */ __asm { NOP }
    /* +0x99365f */ __asm { NOP }
    /* +0x993660 */ __asm { NOP }
    /* +0x993661 */ __asm { NOP }
    /* +0x993662 */ __asm { NOP }
    /* +0x993663 */ __asm { NOP }
    /* +0x993664 */ __asm { NOP }
    /* +0x993665 */ __asm { NOP }
    /* +0x993666 */ __asm { NOP }
    /* +0x993667 */ __asm { NOP }
    /* +0x993668 */ __asm { NOP }
    /* +0x993669 */ __asm { CMP R9D,0x460d16 }
    /* +0x993670 */ __asm { JA 0x7fffa51038af }
    /* +0x993676 */ __asm { MOV R9D,0xa60b09ae }
    /* +0x99367c */ __asm { IMUL R9D,R9D,-0x7456f0a9 }
    /* +0x993683 */ __asm { SUB R9D,R14D }
    /* +0x993686 */ __asm { ADD R9D,0x158438f7 }
    /* +0x99368d */ __asm { MOV dword ptr [RSP + 0x50],R9D }
    /* +0x993692 */ __asm { MOV R9D,dword ptr [RSP + 0x50] }
    /* +0x993697 */ __asm { TEST R9B,0x1 }
    /* +0x99369b */ __asm { NOP }
    /* +0x99369c */ __asm { NOP }
    /* +0x99369d */ __asm { NOP }
    /* +0x99369e */ __asm { NOP }
    /* +0x99369f */ __asm { NOP }
    /* +0x9936a0 */ __asm { MOV R11D,0xdc58fc79 }
    /* +0x9936a6 */ __asm { MOV R9,0x4edb007c383d99dd }
    /* +0x9936b0 */ __asm { CMP R11,R9 }
    /* +0x9936b3 */ __asm { JZ 0x7fffa5103b82 }
    /* +0x9936b9 */ __asm { MOV R9D,0xe826ce68 }
    /* +0x9936bf */ __asm { IMUL R9D,R9D,0x33789b6d }
    /* +0x9936c6 */ __asm { MOV ECX,R14D }
    /* +0x9936c9 */ __asm { ROL R9D,CL }
    /* +0x9936cc */ __asm { MOVSXD R9,R9D }
    /* +0x9936cf */ __asm { MOV ECX,0xfd03e1df }
    /* +0x9936d4 */ __asm { ADD ECX,R14D }
    /* +0x9936d7 */ __asm { ROL ECX,0x1b }
    /* +0x9936da */ __asm { XOR ECX,0x76ec6c1e }
    /* +0x9936e0 */ __asm { CMP R9,RCX }
    /* +0x9936e3 */ __asm { JGE 0x7fffa51038af }
    /* +0x9936e9 */ __asm { MOV R9D,dword ptr [R11 + -0x5c5afa39] }
    /* +0x9936f0 */ __asm { AND R9D,0x1 }
    /* +0x9936f4 */ __asm { JNZ 0x7fffa51038af }
    /* +0x9936fa */ __asm { MOV R9D,R14D }
    /* +0x9936fd */ __asm { OR R9D,0x1 }
    /* +0x993701 */ __asm { XORPS XMM2,XMM2 }
    /* +0x993704 */ __asm { MOVAPS xmmword ptr [RSP + 0x50],XMM2 }
    /* +0x993709 */ __asm { MOV ECX,0x4868f77b }
    /* +0x99370e */ __asm { IMUL ECX,R9D }
    /* +0x993712 */ __asm { ADD ECX,0x4ad967a2 }
    /* +0x993718 */ __asm { MOV R9,qword ptr [RSP + 0xa8] }
    /* +0x993720 */ __asm { MOV R11,-0x1cc3e75f0d78c7cf }
    /* +0x99372a */ __asm { XOR EDX,EDX }
    /* +0x99372c */ __asm { CMP R9,R11 }
    /* +0x99372f */ __asm { SETZ DL }
    /* +0x993732 */ __asm { MOV R11,-0x1cc3e75f0d78c7ce }
    /* +0x99373c */ __asm { XOR EAX,EAX }
    /* +0x99373e */ __asm { CMP R9,R11 }
    /* +0x993741 */ __asm { SETC AL }
    /* +0x993744 */ __asm { MOV R9D,0xbd09878c }
    /* +0x99374a */ __asm { CMP RCX,R9 }
    /* +0x99374d */ __asm { CMOVZ EDX,EAX }
    /* +0x993750 */ __asm { CMP DL,0x1 }
    /* +0x993753 */ __asm { NOP }
    /* +0x993754 */ __asm { NOP }
    /* +0x993755 */ __asm { NOP }
    /* +0x993756 */ __asm { NOP }
    /* +0x993757 */ __asm { NOP }
    /* +0x993758 */ __asm { NOP }
    /* +0x993759 */ __asm { NOP }
    /* +0x99375a */ __asm { NOP }
    /* +0x99375b */ __asm { NOP }
    /* +0x99375c */ __asm { NOP }
    /* +0x99375d */ __asm { NOP }
    /* +0x99375e */ __asm { NOP }
    /* +0x99375f */ __asm { NOP }
    /* +0x993760 */ __asm { NOP }
    /* +0x993761 */ __asm { NOP }
    /* +0x993762 */ __asm { NOP }
    /* +0x993763 */ __asm { NOP }
    /* +0x9938af */ __asm { LEA R11,[0x7fffa4781861] }
    /* +0x9938b6 */ __asm { MOV R9,0x6d6f21471b2e18e6 }
    /* +0x9938c0 */ __asm { CMP R11,R9 }
    /* +0x9938c3 */ __asm { JZ 0x7fffa5103b67 }
    /* +0x9938c9 */ __asm { MOV qword ptr [RSP + 0x50],R9 }
    /* +0x9938ce */ __asm { MOV EAX,dword ptr [R11 + 0x2daf] }
    /* +0x9938d5 */ __asm { JMP 0x7fffa5103b1f }
    /* +0x993b1f */ __asm { MOV uint8_t ptr [RSP + 0x40],DIL }
    /* +0x993b24 */ __asm { MOV qword ptr [RSP + 0x38],R13 }
    /* +0x993b29 */ __asm { MOV qword ptr [RSP + 0x30],R12 }
    /* +0x993b2e */ __asm { MOV qword ptr [RSP + 0x28],RBP }
    /* +0x993b33 */ __asm { MOV R9,R8 }
    /* +0x993b36 */ __asm { MOV R8,RBX }
    /* +0x993b39 */ __asm { MOV EDX,ESI }
    /* +0x993b3b */ __asm { SYSCALL }
    /* +0x993b3d */ __asm { MOV ECX,EAX }
    /* +0x993b3f */ __asm { SHL ECX,0x1e }
    /* +0x993b42 */ __asm { XOR ECX,EAX }
    /* +0x993b44 */ __asm { ADD RSP,0x68 }
    /* +0x993b48 */ __asm { POP RBP }
    /* +0x993b49 */ __asm { POP RDI }
    /* +0x993b4a */ __asm { POP R12 }
    /* +0x993b4c */ __asm { POP R15 }
    /* +0x993b4e */ __asm { POP RBX }
    /* +0x993b4f */ __asm { POP RSI }
    /* +0x993b50 */ __asm { POP R13 }
    /* +0x993b52 */ __asm { POP R14 }
    /* +0x993b54 */ __asm { RET }
    /* +0x993b5d */ __asm { JO 0x7fffa5103b51 }
    /* +0x993b5f */ __asm { WAIT }
    /* +0x993b67 */ __asm { STD }
    /* +0x993b68 */ __asm { RETF }
    /* +0x993b71 */ __asm { IMUL EDI,dword ptr DS:[RDI + -0x76917],-0x8f0d101 }
    /* +0x993b7c */ __asm { TEST ECX,EBP }
    /* +0x993b7e */ __asm { STC }
    /* +0x993b82 */ __asm { CMP dword ptr [RCX + -0x4d017],0x5e4eaff }
    /* +0x993b8d */ __asm { MOV DH,0xe9 }
    /* +0x993b8f */ __asm { SAR CH,0xff }
    /* +0x993b92 */ __asm { DEC dword ptr [RCX + -0x39] }
    /* +0x993b95 */ __asm { RET }
}


// ============================================================================
// Function : FUN_7fffa5103bc0  |  RVA: 0x993bc0  |  Size: 533 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5103bc0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  bRam00007fffa47bd318 = '\0';
  uRam00007fffa47bd330 = 0;
  uRam00007fffa47bd338 = 0;
  uRam00007fffa47bd320 = 0;
  uRam00007fffa47bd328 = 0;
  uRam00007fffa47bd34d = 0;
  uVar1 = rdtsc();
  lVar3 = (uVar1 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar1)) * 0x2ccb53353bfe6fb;
  lVar2 = 3;
  while( true ) {
    *(char *)(lVar2 + 0x7fffa47bd314) = (char)((uint64_t)(lVar3 * 0xa33cf1fa19) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bd313) = (char)((uint64_t)(lVar3 * 0x3353bfe6fb) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bd315) = (char)((uint64_t)(lVar3 * 0x68db99ac83) >> 0x20);
    if (lVar2 == 0x3b) break;
    lVar3 = lVar3 * -0x74158357099298f;
    *(char *)(lVar2 + 0x7fffa47bd316) = (char)((uint64_t)lVar3 >> 0x20);
    lVar2 = lVar2 + 4;
  }
  bRam00007fffa47bd318 = bRam00007fffa47bd318 + 1 & 7;
  *(uint32_t *)((uint64_t)bRam00007fffa47bd318 * 4 + 0x7fffa47bd320) = 0x562d55c;
  return;
}


// ============================================================================
// Function : FUN_7fffa5103de0  |  RVA: 0x993de0  |  Size: 36681 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5103de0(void) {
    /* +0x993de0 */ __asm { PUSH RSI }
    /* +0x993de1 */ __asm { PUSH RBX }
    /* +0x993de2 */ __asm { PUSH RBP }
    /* +0x993de3 */ __asm { PUSH R14 }
    /* +0x993de5 */ __asm { PUSH R15 }
    /* +0x993de7 */ __asm { PUSH R13 }
    /* +0x993de9 */ __asm { PUSH RDI }
    /* +0x993dea */ __asm { PUSH R12 }
    /* +0x993dec */ __asm { SUB RSP,0x638 }
    /* +0x993df3 */ __asm { MOVAPS xmmword ptr [RSP + 0x620],XMM14 }
    /* +0x993dfc */ __asm { MOVAPS xmmword ptr [RSP + 0x610],XMM6 }
    /* +0x993e04 */ __asm { MOVAPS xmmword ptr [RSP + 0x600],XMM8 }
    /* +0x993e0d */ __asm { MOVAPS xmmword ptr [RSP + 0x5f0],XMM9 }
    /* +0x993e16 */ __asm { MOVAPS xmmword ptr [RSP + 0x5e0],XMM13 }
    /* +0x993e1f */ __asm { MOVDQA xmmword ptr [RSP + 0x5d0],XMM11 }
    /* +0x993e29 */ __asm { MOVAPS xmmword ptr [RSP + 0x5c0],XMM10 }
    /* +0x993e32 */ __asm { MOVAPS xmmword ptr [RSP + 0x5b0],XMM15 }
    /* +0x993e3b */ __asm { MOVAPS xmmword ptr [RSP + 0x5a0],XMM12 }
    /* +0x993e44 */ __asm { MOVAPS xmmword ptr [RSP + 0x590],XMM7 }
    /* +0x993e4c */ __asm { MOV RBP,RDX }
    /* +0x993e4f */ __asm { MOV ECX,0x58ae592d }
    /* +0x993e54 */ __asm { ADD ECX,0xb9b9f9ce }
    /* +0x993e5a */ __asm { ROL ECX,0x1a }
    /* +0x993e5d */ __asm { XOR ECX,EBP }
    /* +0x993e5f */ __asm { MOV dword ptr [RSP + 0x380],ECX }
    /* +0x993e66 */ __asm { MOV ECX,dword ptr [RSP + 0x380] }
    /* +0x993e6d */ __asm { CMP ECX,0x362a4f32 }
    /* +0x993e73 */ __asm { NOP }
    /* +0x993e74 */ __asm { NOP }
    /* +0x993e75 */ __asm { NOP }
    /* +0x993e76 */ __asm { NOP }
    /* +0x993e77 */ __asm { NOP }
    /* +0x993e78 */ __asm { PUSHFQ }
    /* +0x993e79 */ __asm { POP RAX }
    /* +0x993e7a */ __asm { MOV qword ptr [RSP + 0x4c0],RAX }
    /* +0x993e82 */ __asm { TEST EAX,0x100 }
    /* +0x993e87 */ __asm { JNZ 0x7fffa5103ea7 }
    /* +0x993e89 */ __asm { MOV CX,0xf880 }
    /* +0x993e8d */ __asm { MOV R10D,EBP }
    /* +0x993e90 */ __asm { OR R10D,0x1 }
    /* +0x993e94 */ __asm { IMUL R10D,ECX }
    /* +0x993e98 */ __asm { ROL R10W,0xe }
    /* +0x993e9d */ __asm { MOVZX EAX,R10W }
    /* +0x993ea1 */ __asm { MOV R9,qword ptr GS:[RAX] }
    /* +0x993ea5 */ __asm { JMP 0x7fffa5103ec6 }
    /* +0x993ea7 */ __asm { MOV CX,0xf7e7 }
    /* +0x993eab */ __asm { IMUL EBX,dword ptr CS:[RBP + 0x1787c969],-0xe7f0000 }
    /* +0x993eb6 */ __asm { CMP AL,uint8_t ptr [RAX] }
    /* +0x993eb9 */ __asm { ADD uint8_t ptr [RCX],CH }
    /* +0x993ebb */ __asm { JMP 0x80000ad1f5cf }
    /* +0x993ec6 */ __asm { MOV ECX,0x4b81cdb6 }
    /* +0x993ecb */ __asm { MOV EAX,EBP }
    /* +0x993ecd */ __asm { OR EAX,0x1 }
    /* +0x993ed0 */ __asm { IMUL ECX,EAX }
    /* +0x993ed3 */ __asm { ROL ECX,0x2 }
    /* +0x993ed6 */ __asm { ADD ECX,0x12b132f6 }
    /* +0x993edc */ __asm { MOV dword ptr [RSP + 0x380],ECX }
    /* +0x993ee3 */ __asm { MOV ECX,dword ptr [RSP + 0x380] }
    /* +0x993eea */ __asm { CMP ECX,0x77b84e9f }
    /* +0x993ef0 */ __asm { NOP }
    /* +0x993ef1 */ __asm { NOP }
    /* +0x993ef2 */ __asm { NOP }
    /* +0x993ef3 */ __asm { NOP }
    /* +0x993ef4 */ __asm { NOP }
    /* +0x993ef5 */ __asm { MOV qword ptr [RSP + 0xf0],RAX }
    /* +0x993efd */ __asm { MOV R9,qword ptr [R9 + 0x18] }
    /* +0x993f01 */ __asm { MOV dword ptr [RSP + 0x380],0x81a52989 }
    /* +0x993f0c */ __asm { MOV ECX,dword ptr [RSP + 0x380] }
    /* +0x993f13 */ __asm { CMP ECX,0xab922ea5 }
    /* +0x993f19 */ __asm { JNC 0x7fffa5117339 }
    /* +0x993f1f */ __asm { ADD R9,0x10 }
    /* +0x993f23 */ __asm { MOV R10,0x3dff5ca3479b8ab7 }
    /* +0x993f2d */ __asm { MOV R15,0x200000001d3 }
    /* +0x993f37 */ __asm { MOV EDI,EBP }
    /* +0x993f39 */ __asm { OR EDI,0x1 }
    /* +0x993f3c */ __asm { MOV RDX,-0x43173f397a6a132f }
    /* +0x993f46 */ __asm { MOV qword ptr [RSP + 0xc8],RDI }
    /* +0x993f4e */ __asm { NOP }
    /* +0x993f50 */ __asm { MOV R9,qword ptr [R9] }
    /* +0x993f53 */ __asm { MOV dword ptr [RSP + 0x380],0xabbf7fdb }
    /* +0x993f5e */ __asm { MOV ECX,dword ptr [RSP + 0x380] }
    /* +0x993f65 */ __asm { MOVZX R11D,word ptr [R9 + 0x58] }
    /* +0x993f6a */ __asm { CMP R11D,0x2 }
    /* +0x993f6e */ __asm { JNC 0x7fffa5103fa0 }
    /* +0x993f70 */ __asm { MOV CX,0x3335 }
    /* +0x993f74 */ __asm { MOV EAX,EBP }
    /* +0x993f76 */ __asm { XOR EAX,ECX }
    /* +0x993f78 */ __asm { MOV ECX,0xffff92a6 }
    /* +0x993f7d */ __asm { SUB ECX,EAX }
    /* +0x993f7f */ __asm { MOVZX ECX,CX }
    /* +0x993f82 */ __asm { MOV dword ptr [RSP + 0x380],ECX }
    /* +0x993f89 */ __asm { MOV ECX,dword ptr [RSP + 0x380] }
    /* +0x993f90 */ __asm { JMP 0x7fffa5104063 }
    /* +0x993fa0 */ __asm { MOV RAX,qword ptr [R9 + 0x60] }
    /* +0x993fa4 */ __asm { SHR R11D,0x1 }
    /* +0x993fa7 */ __asm { CMP R11W,0x1 }
    /* +0x993fac */ __asm { JZ 0x7fffa51040a0 }
    /* +0x993fb2 */ __asm { MOV EDI,R11D }
    /* +0x993fb5 */ __asm { AND EDI,0xfffffffe }
    /* +0x993fb8 */ __asm { MOV RBX,R10 }
    /* +0x993fbb */ __asm { XOR ESI,ESI }
    /* +0x993fbd */ __asm { NOP dword ptr [RAX] }
    /* +0x993fc0 */ __asm { LEA RCX,[RSI + 0x2] }
    /* +0x993fc4 */ __asm { MOVZX R8D,word ptr [RAX + RSI*0x2 + 0x2] }
    /* +0x993fca */ __asm { LEA R14D,[R8 + -0x41] }
    /* +0x993fce */ __asm { MOV R12D,R8D }
    /* +0x993fd1 */ __asm { OR R12D,0x20 }
    /* +0x993fd5 */ __asm { CMP R14W,0x1a }
    /* +0x993fda */ __asm { CMOVNC R12D,R8D }
    /* +0x993fde */ __asm { MOVZX R13D,R12B }
    /* +0x993fe2 */ __asm { MOVZX R8D,word ptr [RAX + RSI*0x2] }
    /* +0x993fe7 */ __asm { LEA R14D,[R8 + -0x41] }
    /* +0x993feb */ __asm { MOV ESI,R8D }
    /* +0x993fee */ __asm { OR ESI,0x20 }
    /* +0x993ff1 */ __asm { CMP R14W,0x1a }
    /* +0x993ff6 */ __asm { CMOVNC ESI,R8D }
    /* +0x993ffa */ __asm { MOVZX R8D,SIL }
    /* +0x993ffe */ __asm { XOR R8,RBX }
    /* +0x994001 */ __asm { IMUL R8,R15 }
    /* +0x994005 */ __asm { XOR R8,R13 }
    /* +0x994008 */ __asm { IMUL R8,R15 }
    /* +0x99400c */ __asm { MOV RBX,R8 }
    /* +0x99400f */ __asm { MOV RSI,RCX }
    /* +0x994012 */ __asm { CMP RDI,RCX }
    /* +0x994015 */ __asm { JNZ 0x7fffa5103fc0 }
    /* +0x994017 */ __asm { TEST R11B,0x1 }
    /* +0x99401b */ __asm { JZ 0x7fffa510403c }
    /* +0x99401d */ __asm { MOVZX EAX,word ptr [RAX + RCX*0x2] }
    /* +0x994021 */ __asm { MOV ECX,EAX }
    /* +0x994023 */ __asm { OR ECX,0x20 }
    /* +0x994026 */ __asm { LEA R11D,[RAX + -0x41] }
    /* +0x99402a */ __asm { CMP R11W,0x1a }
    /* +0x99402f */ __asm { CMOVNC ECX,EAX }
    /* +0x994032 */ __asm { MOVZX EAX,CL }
    /* +0x994035 */ __asm { XOR R8,RAX }
    /* +0x994038 */ __asm { IMUL R8,R15 }
    /* +0x99403c */ __asm { MOV CX,0xc125 }
    /* +0x994040 */ __asm { MOV RDI,qword ptr [RSP + 0xc8] }
    /* +0x994048 */ __asm { IMUL ECX,EDI }
    /* +0x99404b */ __asm { NOT ECX }
    /* +0x99404d */ __asm { MOVZX ECX,CX }
    /* +0x994050 */ __asm { MOV dword ptr [RSP + 0x380],ECX }
    /* +0x994057 */ __asm { MOV ECX,dword ptr [RSP + 0x380] }
    /* +0x99405e */ __asm { CMP R8,RDX }
    /* +0x994061 */ __asm { JZ 0x7fffa51040b1 }
    /* +0x994063 */ __asm { MOV dword ptr [RSP + 0x380],0xe6d42260 }
    /* +0x99406e */ __asm { MOV ECX,dword ptr [RSP + 0x380] }
    /* +0x994075 */ __asm { TEST CL,0x1 }
    /* +0x994078 */ __asm { NOP }
    /* +0x994079 */ __asm { NOP }
    /* +0x99407a */ __asm { NOP }
    /* +0x99407b */ __asm { NOP }
    /* +0x99407c */ __asm { NOP }
    /* +0x99407d */ __asm { NOP }
    /* +0x99407e */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x994085 */ __asm { MOV RCX,0x0 }
    /* +0x99408c */ __asm { JMP 0x7fffa5103f50 }
    /* +0x9940a0 */ __asm { MOV R8,R10 }
    /* +0x9940a3 */ __asm { XOR ECX,ECX }
    /* +0x9940a5 */ __asm { TEST R11B,0x1 }
    /* +0x9940a9 */ __asm { JNZ 0x7fffa510401d }
    /* +0x9940af */ __asm { JMP 0x7fffa510403c }
    /* +0x9940b1 */ __asm { MOV dword ptr [RSP + 0x380],0xfbe4163 }
    /* +0x9940bc */ __asm { MOV ECX,dword ptr [RSP + 0x380] }
    /* +0x9940c3 */ __asm { TEST CL,0x1 }
    /* +0x9940c6 */ __asm { JZ 0x7fffa5117341 }
    /* +0x9940cc */ __asm { MOV CX,0xe1c5 }
    /* +0x9940d0 */ __asm { MOV R9,qword ptr [R9 + 0x30] }
    /* +0x9940d4 */ __asm { MOV qword ptr [RSP + 0x2b8],R9 }
    /* +0x9940dc */ __asm { IMUL ECX,EDI }
    /* +0x9940df */ __asm { NOT ECX }
    /* +0x9940e1 */ __asm { ROR CX,0x1 }
    /* +0x9940e4 */ __asm { MOVZX EAX,CX }
    /* +0x9940e7 */ __asm { MOV R9,qword ptr GS:[RAX] }
    /* +0x9940eb */ __asm { MOV RDX,0x5eb69d1a6e6e33b3 }
    /* +0x9940f5 */ __asm { CMP qword ptr [R9 + 0x30],RDX }
    /* +0x9940f9 */ __asm { NOP }
    /* +0x9940fa */ __asm { NOP }
    /* +0x9940fb */ __asm { NOP }
    /* +0x9940fc */ __asm { NOP }
    /* +0x9940fd */ __asm { NOP }
    /* +0x9940fe */ __asm { NOP }
    /* +0x9940ff */ __asm { NOP }
    /* +0x994100 */ __asm { NOP }
    /* +0x994101 */ __asm { NOP }
    /* +0x994102 */ __asm { NOP }
    /* +0x994103 */ __asm { NOP }
    /* +0x994104 */ __asm { NOP }
    /* +0x994105 */ __asm { NOP }
    /* +0x994106 */ __asm { MOV EAX,0x8000000f }
    /* +0x99410b */ __asm { MOV ECX,0x0 }
    /* +0x994110 */ __asm { XCHG RBX,R11 }
    /* +0x994113 */ __asm { CPUID }
    /* +0x994115 */ __asm { XCHG RBX,R11 }
    /* +0x994118 */ __asm { MOV dword ptr [RSP + 0xa0],0x0 }
    /* +0x994123 */ __asm { MOV dword ptr [RSP + 0x244],0x0 }
    /* +0x99412e */ __asm { MOV dword ptr [RSP + 0x248],0x0 }
    /* +0x994139 */ __asm { MOV dword ptr [RSP + 0x2cc],0x0 }
    /* +0x994144 */ __asm { MOV dword ptr [RSP + 0x248],ECX }
    /* +0x99414b */ __asm { MOV dword ptr [RSP + 0xa0],EAX }
    /* +0x994152 */ __asm { MOV dword ptr [RSP + 0x2cc],EDX }
    /* +0x994159 */ __asm { MOV dword ptr [RSP + 0x244],R11D }
    /* +0x994161 */ __asm { TEST dword ptr [RSP + 0x4c0],0x100 }
    /* +0x99416c */ __asm { NOP }
    /* +0x99416d */ __asm { NOP }
    /* +0x99416e */ __asm { NOP }
    /* +0x99416f */ __asm { NOP }
    /* +0x994170 */ __asm { NOP }
    /* +0x994171 */ __asm { MOV ECX,0xdf3144b7 }
    /* +0x994176 */ __asm { IMUL ECX,ECX,0xa96c51d }
    /* +0x99417c */ __asm { ADD ECX,0xc94ad7a0 }
    /* +0x994182 */ __asm { MOV qword ptr [RSP + 0x250],RBP }
    /* +0x99418a */ __asm { XOR ECX,EBP }
    /* +0x99418c */ __asm { MOV dword ptr [RSP + 0x380],ECX }
    /* +0x994193 */ __asm { MOV ECX,dword ptr [RSP + 0x380] }
    /* +0x99419a */ __asm { CMP ECX,0x29491d8b }
    /* +0x9941a0 */ __asm { MOV R10,qword ptr [RSP + 0x2b8] }
    /* +0x9941a8 */ __asm { JBE 0x7fffa5117349 }
    /* +0x9941ae */ __asm { TEST R10,R10 }
    /* +0x9941b1 */ __asm { JZ 0x7fffa51061e5 }
    /* +0x9941b7 */ __asm { MOV CX,0xbecd }
    /* +0x9941bb */ __asm { ADD ECX,dword ptr [RSP + 0x250] }
    /* +0x9941c2 */ __asm { MOV EAX,dword ptr [R10 + 0x3c] }
    /* +0x9941c6 */ __asm { IMUL ECX,ECX,0x1eb1 }
    /* +0x9941cc */ __asm { MOVZX R11D,CX }
    /* +0x9941d0 */ __asm { ADD RAX,R10 }
    /* +0x9941d3 */ __asm { CMP RAX,R11 }
    /* +0x9941d6 */ __asm { JZ 0x7fffa51061e5 }
    /* +0x9941dc */ __asm { MOV CX,0x2566 }
    /* +0x9941e0 */ __asm { XOR ECX,0x6eeb }
    /* +0x9941e6 */ __asm { ADD ECX,0xfffff576 }
    /* +0x9941ec */ __asm { MOV R10,qword ptr [RSP + 0x250] }
    /* +0x9941f4 */ __asm { XOR ECX,R10D }
    /* +0x9941f7 */ __asm { MOVZX R11D,CX }
    /* +0x9941fb */ __asm { MOV R9,qword ptr GS:[R11] }
    /* +0x9941ff */ __asm { MOV R9,qword ptr [R9 + 0xfe8] }
    /* +0x994206 */ __asm { MOV CX,0x3a4d }
    /* +0x99420a */ __asm { ADD ECX,0x6b6 }
    /* +0x994210 */ __asm { XOR ECX,R10D }
    /* +0x994213 */ __asm { MOVZX R11D,CX }
    /* +0x994217 */ __asm { MOV RDX,qword ptr GS:[R11] }
    /* +0x99421b */ __asm { ADD R9,qword ptr [RDX + 0x370] }
    /* +0x994222 */ __asm { MOV RDX,-0x5d293fd390ef0015 }
    /* +0x99422c */ __asm { CMP R9,RDX }
    /* +0x99422f */ __asm { NOP }
    /* +0x994230 */ __asm { NOP }
    /* +0x994231 */ __asm { NOP }
    /* +0x994232 */ __asm { NOP }
    /* +0x994233 */ __asm { NOP }
    /* +0x994234 */ __asm { MOV R9,qword ptr [RAX + 0x88] }
    /* +0x99423b */ __asm { MOV RDX,0x1c9a4bcf5 }
    /* +0x994245 */ __asm { MOV EAX,0xffffffff }
    /* +0x99424a */ __asm { AND RAX,R9 }
    /* +0x99424d */ __asm { MOV R10,qword ptr [RSP + 0xf0] }
    /* +0x994255 */ __asm { JZ 0x7fffa51061e5 }
    /* +0x99425b */ __asm { XOR RDX,qword ptr [RSP + 0x250] }
    /* +0x994263 */ __asm { ADD RDX,-0x5040ccd6 }
    /* +0x99426a */ __asm { XOR RDX,0x1a930f0 }
    /* +0x994271 */ __asm { CMP R9,RDX }
    /* +0x994274 */ __asm { JC 0x7fffa51061e5 }
    /* +0x99427a */ __asm { TEST dword ptr [RSP + 0x4c0],0x100 }
    /* +0x994285 */ __asm { NOP }
    /* +0x994286 */ __asm { NOP }
    /* +0x994287 */ __asm { NOP }
    /* +0x994288 */ __asm { NOP }
    /* +0x994289 */ __asm { NOP }
    /* +0x99428a */ __asm { NOP }
    /* +0x99428b */ __asm { NOP }
    /* +0x99428c */ __asm { NOP }
    /* +0x99428d */ __asm { NOP }
    /* +0x99428e */ __asm { MOV dword ptr [RSP + 0x380],0xaa54569c }
    /* +0x994299 */ __asm { MOV R8D,dword ptr [RSP + 0x380] }
    /* +0x9942a1 */ __asm { MOV R9W,0x4133 }
    /* +0x9942a6 */ __asm { MOV EDX,0x6433905b }
    /* +0x9942ab */ __asm { MOV RCX,qword ptr [RSP + 0x250] }
    /* +0x9942b3 */ __asm { XOR R9D,ECX }
    /* +0x9942b6 */ __asm { MOV R11D,0xcc8519dd }
    /* +0x9942bc */ __asm { ADD R11D,0x3ffffd02 }
    /* +0x9942c3 */ __asm { ROL R11D,CL }
    /* +0x9942c6 */ __asm { ROL R9W,0xd }
    /* +0x9942cb */ __asm { MOV EDI,0x6089d74d }
    /* +0x9942d0 */ __asm { SUB EDI,EDX }
    /* +0x9942d2 */ __asm { IMUL EDI,R10D }
    /* +0x9942d6 */ __asm { MOVZX R10D,R9W }
    /* +0x9942da */ __asm { XOR R9D,R9D }
    /* +0x9942dd */ __asm { CMP R8D,R10D }
    /* +0x9942e0 */ __asm { SETA R9B }
    /* +0x9942e4 */ __asm { MOV DX,0xc481 }
    /* +0x9942e8 */ __asm { ADD EDX,0x699c }
    /* +0x9942ee */ __asm { ROR DX,CL }
    /* +0x9942f1 */ __asm { ADD EDX,0x5a3d }
    /* +0x9942f7 */ __asm { MOVZX R10D,DX }
    /* +0x9942fb */ __asm { XOR EDX,EDX }
    /* +0x9942fd */ __asm { CMP R8D,R10D }
    /* +0x994300 */ __asm { SETL DL }
    /* +0x994303 */ __asm { CMP R11,RDI }
    /* +0x994306 */ __asm { CMOVC EDX,R9D }
    /* +0x99430a */ __asm { TEST DL,DL }
    /* +0x99430c */ __asm { JZ 0x7fffa51179f4 }
    /* +0x994312 */ __asm { MOV R9,qword ptr [RSP + 0x2b8] }
    /* +0x99431a */ __asm { CMP dword ptr [R9 + RAX*0x1 + 0x1c],0x0 }
    /* +0x994320 */ __asm { JZ 0x7fffa51061d3 }
    /* +0x994326 */ __asm { CMP dword ptr [R9 + RAX*0x1 + 0x20],0x0 }
    /* +0x99432c */ __asm { JZ 0x7fffa51061d3 }
    /* +0x994332 */ __asm { CMP dword ptr [R9 + RAX*0x1 + 0x24],0x0 }
    /* +0x994338 */ __asm { JZ 0x7fffa51061d3 }
    /* +0x99433e */ __asm { MOV dword ptr [RSP + 0x380],0xb1676a98 }
    /* +0x994349 */ __asm { MOV R10D,dword ptr [RSP + 0x380] }
    /* +0x994351 */ __asm { MOV R11D,dword ptr [R9 + RAX*0x1 + 0x1c] }
    /* +0x994356 */ __asm { MOV dword ptr [RSP + 0x380],0x5d52e0ba }
    /* +0x994361 */ __asm { MOV R10D,dword ptr [RSP + 0x380] }
    /* +0x994369 */ __asm { CMP R10D,0xb5807139 }
    /* +0x994370 */ __asm { JNC 0x7fffa51179fc }
    /* +0x994376 */ __asm { MOV R8D,dword ptr [R9 + RAX*0x1 + 0x20] }
    /* +0x99437b */ __asm { MOV dword ptr [RSP + 0x380],0x7c0c5dd9 }
    /* +0x994386 */ __asm { MOV R10D,dword ptr [RSP + 0x380] }
    /* +0x99438e */ __asm { MOV R10D,0x60007ec1 }
    /* +0x994394 */ __asm { MOV R9D,0x87d67133 }
    /* +0x99439a */ __asm { IMUL R9D,R9D,-0x5d9e3635 }
    /* +0x9943a1 */ __asm { SUB R9D,ECX }
    /* +0x9943a4 */ __asm { MOV EDX,0xcd8e04bb }
    /* +0x9943a9 */ __asm { MOVSXD RBX,R9D }
    /* +0x9943ac */ __asm { MOV R9,qword ptr [RSP + 0x2b8] }
    /* +0x9943b4 */ __asm { MOVSXD RDI,dword ptr [R9 + RAX*0x1 + 0x24] }
    /* +0x9943b9 */ __asm { MOV R9D,EDI }
    /* +0x9943bc */ __asm { IMUL EDX,EDX,0x3f261b53 }
    /* +0x9943c2 */ __asm { MOV R13,qword ptr [RSP + 0xf0] }
    /* +0x9943ca */ __asm { IMUL R10D,R13D }
    /* +0x9943ce */ __asm { XOR R10D,0xdc59be62 }
    /* +0x9943d5 */ __asm { ROL R10D,0x2 }
    /* +0x9943d9 */ __asm { XOR EDX,ECX }
    /* +0x9943db */ __asm { MOVSXD RCX,R10D }
    /* +0x9943de */ __asm { CMP RCX,RDX }
    /* +0x9943e1 */ __asm { CMOVZ R9,RDI }
    /* +0x9943e5 */ __asm { MOV RDI,qword ptr [RSP + 0x2b8] }
    /* +0x9943ed */ __asm { MOV RDX,RDI }
    /* +0x9943f0 */ __asm { AND RDX,R9 }
    /* +0x9943f3 */ __asm { ADD R9,RDI }
    /* +0x9943f6 */ __asm { CMP RBX,-0x580d72c2 }
    /* +0x9943fd */ __asm { CMOVNZ R9,RDX }
    /* +0x994401 */ __asm { MOV dword ptr [RSP + 0x380],0x8645c168 }
    /* +0x99440c */ __asm { MOV ECX,dword ptr [RSP + 0x380] }
    /* +0x994413 */ __asm { MOV EDX,dword ptr [RDI + RAX*0x1 + 0x18] }
    /* +0x994417 */ __asm { TEST RDX,RDX }
    /* +0x99441a */ __asm { JZ 0x7fffa51061e5 }
    /* +0x994420 */ __asm { MOV R10,R13 }
    /* +0x994423 */ __asm { ADD R11,RDI }
    /* +0x994426 */ __asm { ADD R8,RDI }
    /* +0x994429 */ __asm { DEC RDX }
    /* +0x99442c */ __asm { XOR R12D,R12D }
    /* +0x99442f */ __asm { MOV qword ptr [RSP + 0x60],R11 }
    /* +0x994434 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0x994440 */ __asm { MOV EAX,0x10ce7466 }
    /* +0x994445 */ __asm { MOV ECX,0x98e9794e }
    /* +0x99444a */ __asm { MOV R13D,0x85a5c89d }
    /* +0x994450 */ __asm { SUB R13D,ECX }
    /* +0x994453 */ __asm { MOV ECX,dword ptr [R8 + R12*0x4] }
    /* +0x994457 */ __asm { MOV EBP,ECX }
    /* +0x994459 */ __asm { ADD RBP,RDI }
    /* +0x99445c */ __asm { TEST ECX,ECX }
    /* +0x99445e */ __asm { MOV ECX,0x0 }
    /* +0x994463 */ __asm { CMOVZ RBP,RCX }
    /* +0x994467 */ __asm { XOR R13D,dword ptr [RSP + 0x250] }
    /* +0x99446f */ __asm { MOVZX ECX,word ptr [R9 + R12*0x2] }
    /* +0x994474 */ __asm { MOVSX RSI,CX }
    /* +0x994478 */ __asm { IMUL EAX,R10D }
    /* +0x99447c */ __asm { ROL EAX,0x1a }
    /* +0x99447f */ __asm { ADD EAX,0x964dec09 }
    /* +0x994484 */ __asm { CMP RAX,R13 }
    /* +0x994487 */ __asm { CMOVGE RSI,RCX }
    /* +0x99448b */ __asm { MOV ESI,dword ptr [R11 + RSI*0x4] }
    /* +0x99448f */ __asm { MOV dword ptr [RSP + 0x380],0x19a3b682 }
    /* +0x99449a */ __asm { MOV ECX,dword ptr [RSP + 0x380] }
    /* +0x9944a1 */ __asm { TEST CL,0x1 }
    /* +0x9944a4 */ __asm { JNZ 0x7fffa510483d }
    /* +0x9944aa */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x9944b1 */ __asm { MOV RCX,0x0 }
    /* +0x9944b8 */ __asm { TEST RBP,RBP }
    /* +0x9944bb */ __asm { JZ 0x7fffa51046bd }
    /* +0x9944c1 */ __asm { MOVZX ECX,uint8_t ptr [RBP] }
    /* +0x9944c5 */ __asm { TEST RCX,RCX }
    /* +0x9944c8 */ __asm { JZ 0x7fffa5104610 }
    /* +0x9944ce */ __asm { MOV R10,0x28bdad1d5c5ed242 }
    /* +0x9944d8 */ __asm { MOV RBX,0x7ff67b2c6eb }
    /* +0x9944e2 */ __asm { MOVZX EAX,uint8_t ptr [RBP + 0x1] }
    /* +0x9944e6 */ __asm { MOV RDI,qword ptr [RSP + 0x250] }
    /* +0x9944ee */ __asm { ADD RBX,RDI }
    /* +0x9944f1 */ __asm { IMUL R10,R10,-0x7bb1275 }
    /* +0x9944f8 */ __asm { XOR R10,RDI }
    /* +0x9944fb */ __asm { XOR R10,RCX }
    /* +0x9944fe */ __asm { ROR RBX,0x1 }
    /* +0x994501 */ __asm { IMUL RBX,R10 }
    /* +0x994505 */ __asm { TEST RAX,RAX }
    /* +0x994508 */ __asm { JZ 0x7fffa51045f0 }
    /* +0x99450e */ __asm { MOV R10B,0xd6 }
    /* +0x994511 */ __asm { MOVZX ECX,uint8_t ptr [RBP + 0x2] }
    /* +0x994515 */ __asm { XOR R10B,0x1f }
    /* +0x994519 */ __asm { MOVZX R10D,R10B }
    /* +0x99451d */ __asm { LEA R10D,[R10 + R10*0x8] }
    /* +0x994521 */ __asm { LEA R10D,[R10 + R10*0x2] }
    /* +0x994525 */ __asm { SUB R10B,DIL }
    /* +0x994528 */ __asm { XOR RBX,RAX }
    /* +0x99452b */ __asm { MOV R14,0x4000000040f }
    /* +0x994535 */ __asm { IMUL RBX,R14 }
    /* +0x994539 */ __asm { CMP CL,R10B }
    /* +0x99453c */ __asm { JZ 0x7fffa51045f0 }
    /* +0x994542 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x994549 */ __asm { NOP }
    /* +0x99454a */ __asm { MOV R10,0x0 }
    /* +0x994551 */ __asm { XOR RBX,RCX }
    /* +0x994554 */ __asm { MOVZX EAX,uint8_t ptr [RBP + 0x3] }
    /* +0x994558 */ __asm { IMUL RBX,R14 }
    /* +0x99455c */ __asm { TEST RAX,RAX }
    /* +0x99455f */ __asm { JZ 0x7fffa51045f0 }
    /* +0x994565 */ __asm { MOVZX R13D,uint8_t ptr [RBP + 0x4] }
    /* +0x99456a */ __asm { MOV ECX,0x5d7bc1a7 }
    /* +0x99456f */ __asm { MOV R10D,0xfb7e2606 }
    /* +0x994575 */ __asm { SUB R10D,ECX }
    /* +0x994578 */ __asm { MOVSXD R10,R10D }
    /* +0x99457b */ __asm { MOV ECX,0xba2fea62 }
    /* +0x994580 */ __asm { MOV R11,R14 }
    /* +0x994583 */ __asm { IMUL R14D,ECX,0x6eb373a1 }
    /* +0x99458a */ __asm { MOV RDI,qword ptr [RSP + 0x250] }
    /* +0x994592 */ __asm { MOV ECX,EDI }
    /* +0x994594 */ __asm { ROL R14D,CL }
    /* +0x994597 */ __asm { MOV RCX,RBX }
    /* +0x99459a */ __asm { XOR RCX,RAX }
    /* +0x99459d */ __asm { IMUL RBX,RAX }
    /* +0x9945a1 */ __asm { CMP R14,R10 }
    /* +0x9945a4 */ __asm { CMOVBE RBX,RCX }
    /* +0x9945a8 */ __asm { IMUL RBX,R11 }
    /* +0x9945ac */ __asm { TEST R13,R13 }
    /* +0x9945af */ __asm { JZ 0x7fffa51046ce }
    /* +0x9945b5 */ __asm { MOV EAX,EDI }
    /* +0x9945b7 */ __asm { OR AL,0x1 }
    /* +0x9945b9 */ __asm { MOV CL,0xcd }
    /* +0x9945bb */ __asm { MUL CL }
    /* +0x9945bd */ __asm { ADD AL,0x29 }
    /* +0x9945bf */ __asm { MOVZX ECX,uint8_t ptr [RBP + 0x5] }
    /* +0x9945c3 */ __asm { XOR RBX,R13 }
    /* +0x9945c6 */ __asm { IMUL RBX,R11 }
    /* +0x9945ca */ __asm { CMP CL,AL }
    /* +0x9945cc */ __asm { MOV R10,qword ptr [RSP + 0xf0] }
    /* +0x9945d4 */ __asm { MOV R14,R11 }
    /* +0x9945d7 */ __asm { MOV R11,qword ptr [RSP + 0x60] }
    /* +0x9945dc */ __asm { JNZ 0x7fffa51046ea }
    /* +0x9945e2 */ __asm { XOR EAX,EAX }
    /* +0x9945e4 */ __asm { MOV RDI,qword ptr [RSP + 0x2b8] }
    /* +0x9945ec */ __asm { JMP 0x7fffa510461c }
    /* +0x9945f0 */ __asm { XOR EAX,EAX }
    /* +0x9945f2 */ __asm { MOV R10,qword ptr [RSP + 0xf0] }
    /* +0x9945fa */ __asm { MOV RDI,qword ptr [RSP + 0x2b8] }
    /* +0x994602 */ __asm { JMP 0x7fffa510461c }
    /* +0x994610 */ __asm { XOR EAX,EAX }
    /* +0x994612 */ __asm { MOV RBX,-0x36d53fedde19fd1b }
    /* +0x99461c */ __asm { PUSHFQ }
    /* +0x99461d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x994625 */ __asm { POPFQ }
    /* +0x994626 */ __asm { MOV dword ptr [RSP + 0x380],0x259e551d }
    /* +0x994631 */ __asm { MOV ECX,dword ptr [RSP + 0x380] }
    /* +0x994638 */ __asm { TEST ECX,ECX }
    /* +0x99463a */ __asm { NOP }
    /* +0x99463b */ __asm { NOP }
    /* +0x99463c */ __asm { NOP }
    /* +0x99463d */ __asm { NOP }
    /* +0x99463e */ __asm { NOP }
    /* +0x99463f */ __asm { NOP }
    /* +0x994640 */ __asm { NOP }
    /* +0x994641 */ __asm { NOP }
    /* +0x994642 */ __asm { NOP }
    /* +0x994643 */ __asm { NOP }
    /* +0x994644 */ __asm { NOP }
    /* +0x994645 */ __asm { NOP }
    /* +0x994646 */ __asm { NOP }
    /* +0x994647 */ __asm { XOR R13D,R13D }
    /* +0x99464a */ __asm { MOV RCX,-0x3a6f84f8af885818 }
    /* +0x994654 */ __asm { CMP RBX,RCX }
    /* +0x994657 */ __asm { SETL R13B }
    /* +0x99465b */ __asm { MOV EBP,0xd7e3d96e }
    /* +0x994660 */ __asm { IMUL EBP,R10D }
    /* +0x994664 */ __asm { ROL EBP,0xb }
    /* +0x994667 */ __asm { MOV R14,0x3a279c9408c50082 }
    /* +0x994671 */ __asm { MOV R10D,0x9e6c412b }
    /* +0x994677 */ __asm { IMUL R14,R10 }
    /* +0x99467b */ __asm { MOV ECX,0xdb9030d7 }
    /* +0x994680 */ __asm { MOV R10D,0xa807b529 }
    /* +0x994686 */ __asm { SUB R10D,ECX }
    /* +0x994689 */ __asm { MOVSXD R10,R10D }
    /* +0x99468c */ __asm { ADD R14,-0x18d59419 }
    /* +0x994693 */ __asm { MOV RCX,qword ptr [RSP + 0x250] }
    /* +0x99469b */ __asm { ROR R14,CL }
    /* +0x99469e */ __asm { XOR ECX,ECX }
    /* +0x9946a0 */ __asm { CMP RBX,R14 }
    /* +0x9946a3 */ __asm { SETZ CL }
    /* +0x9946a6 */ __asm { CMP R10,RBP }
    /* +0x9946a9 */ __asm { MOV R10,qword ptr [RSP + 0xf0] }
    /* +0x9946b1 */ __asm { CMOVC ECX,R13D }
    /* +0x9946b5 */ __asm { TEST AL,CL }
    /* +0x9946b7 */ __asm { JNZ 0x7fffa510484a }
    /* +0x9946bd */ __asm { CMP RDX,R12 }
}


// ============================================================================
// Function : FUN_7fffa511e794  |  RVA: 0x9ae794  |  Size: 165 bytes
// Callers  : FUN_7fffa5609524@0xe99524
// Callees  : FUN_7fffa5130600@0x9c0600, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa55b02f4@0xe402f4
// ============================================================================
uint64_t * FUN_7fffa511e794(void)

{
  uint64_t *puVar1;
  uint32_t uVar2;
  uint64_t *puVar3;
  uint8_t *puVar4;
  uint64_t *puVar5;
  
  puVar3 = (uint64_t *)FUN_7fffa5130600(0x40);
  puVar5 = (uint64_t *)0x0;
  if (puVar3 != (uint64_t *)0x0) {
    if (puVar3 != puVar3 + 0x240) {
      puVar5 = puVar3 + 6;
      do {
        FUN_7fffa55b02f4(puVar5 + -6,4000,0);
        puVar5[-1] = 0xffffffffffffffff;
        puVar4 = (uint8_t *)((int64_t)puVar5 + 0xe);
        *(uint8_t *)((int64_t)puVar5 + 0xd) = *(uint8_t *)((int64_t)puVar5 + 0xd) & 0xf8;
        uVar2 = 0;
        *puVar5 = 0;
        *(uint32_t *)(puVar5 + 1) = 0xa0a0000;
        *(uint8_t *)((int64_t)puVar5 + 0xc) = 10;
        do {
          *puVar4 = 0;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar2 < 5);
        puVar1 = puVar5 + 3;
        puVar5 = puVar5 + 9;
      } while (puVar1 != puVar3 + 0x240);
    }
    puVar5 = puVar3;
  }
  FUN_7fffa52d8dd0(0);
  return puVar5;
}


// ============================================================================
// Function : FUN_7fffa511e840  |  RVA: 0x9ae840  |  Size: 571 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa511e840(void) {
    /* +0x9ae840 */ __asm { PUSH RBP }
    /* +0x9ae841 */ __asm { PUSH RBX }
    /* +0x9ae842 */ __asm { PUSH RDI }
    /* +0x9ae843 */ __asm { PUSH RSI }
    /* +0x9ae844 */ __asm { PUSH R15 }
    /* +0x9ae846 */ __asm { PUSH R14 }
    /* +0x9ae848 */ __asm { PUSH R12 }
    /* +0x9ae84a */ __asm { PUSH R13 }
    /* +0x9ae84c */ __asm { SUB RSP,0x398 }
    /* +0x9ae853 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x9ae85b */ __asm { MOVDQA xmmword ptr [RBP + 0x300],XMM9 }
    /* +0x9ae864 */ __asm { MOVDQA xmmword ptr [RBP + 0x2f0],XMM13 }
    /* +0x9ae86d */ __asm { MOVDQA xmmword ptr [RBP + 0x2e0],XMM11 }
    /* +0x9ae876 */ __asm { MOVDQA xmmword ptr [RBP + 0x2d0],XMM14 }
    /* +0x9ae87f */ __asm { MOVDQA xmmword ptr [RBP + 0x2c0],XMM7 }
    /* +0x9ae887 */ __asm { MOVDQA xmmword ptr [RBP + 0x2b0],XMM10 }
    /* +0x9ae890 */ __asm { MOVDQA xmmword ptr [RBP + 0x2a0],XMM12 }
    /* +0x9ae899 */ __asm { MOVDQA xmmword ptr [RBP + 0x290],XMM8 }
    /* +0x9ae8a2 */ __asm { MOVDQA xmmword ptr [RBP + 0x280],XMM6 }
    /* +0x9ae8aa */ __asm { MOVDQA xmmword ptr [RBP + 0x270],XMM15 }
    /* +0x9ae8b3 */ __asm { MOV qword ptr [RBP + 0x268],-0x2 }
    /* +0x9ae8be */ __asm { MOV RBX,R10 }
    /* +0x9ae8c1 */ __asm { MOV qword ptr [RBP + 0xf0],RDX }
    /* +0x9ae8c8 */ __asm { MOV R10D,0x404b93c2 }
    /* +0x9ae8ce */ __asm { MOV R11D,0xe7fd6e08 }
    /* +0x9ae8d4 */ __asm { MOV R14D,EBX }
    /* +0x9ae8d7 */ __asm { OR R14D,0x1 }
    /* +0x9ae8db */ __asm { MOV R8,RAX }
    /* +0x9ae8de */ __asm { SHL R8,0x14 }
    /* +0x9ae8e2 */ __asm { XOR R8,RAX }
    /* +0x9ae8e5 */ __asm { IMUL R11D,R14D }
    /* +0x9ae8e9 */ __asm { MOV RAX,R8 }
    /* +0x9ae8ec */ __asm { MOVQ R9,XMM5 }
    /* +0x9ae8f1 */ __asm { ROL R9,0x16 }
    /* +0x9ae8f5 */ __asm { SHL RAX,0x28 }
    /* +0x9ae8f9 */ __asm { MOV RDX,R9 }
    /* +0x9ae8fc */ __asm { SHR RDX,0x11 }
    /* +0x9ae900 */ __asm { XOR RDX,R9 }
    /* +0x9ae903 */ __asm { MOV R9,RDX }
    /* +0x9ae906 */ __asm { SHL R9,0x5 }
    /* +0x9ae90a */ __asm { LEA R12,[R9 + RDX*0x2] }
    /* +0x9ae90e */ __asm { ADD R11D,0xabe82563 }
    /* +0x9ae915 */ __asm { PUSHFQ }
    /* +0x9ae916 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x9ae91e */ __asm { POPFQ }
    /* +0x9ae91f */ __asm { MOV R9,RDX }
    /* +0x9ae922 */ __asm { SHR R9,0x22 }
    /* +0x9ae926 */ __asm { MOVSXD R11,R11D }
    /* +0x9ae929 */ __asm { XOR RAX,R8 }
    /* +0x9ae92c */ __asm { NOT RAX }
    /* +0x9ae92f */ __asm { MOV RSI,0x1001001001001001 }
    /* +0x9ae939 */ __asm { IMUL RSI,RAX }
    /* +0x9ae93d */ __asm { MOV dword ptr [RBP + 0x14],R14D }
    /* +0x9ae941 */ __asm { IMUL R10D,R14D }
    /* +0x9ae945 */ __asm { NOT R10D }
    /* +0x9ae948 */ __asm { CMP R10,R11 }
    /* +0x9ae94b */ __asm { CMOVNC R9,R12 }
    /* +0x9ae94f */ __asm { XOR R9,RDX }
    /* +0x9ae952 */ __asm { MOV RDX,R9 }
    /* +0x9ae955 */ __asm { ROL RDX,0x29 }
    /* +0x9ae959 */ __asm { MOV R8,R9 }
    /* +0x9ae95c */ __asm { ROL R8,0x11 }
    /* +0x9ae960 */ __asm { XOR R8,RDX }
    /* +0x9ae963 */ __asm { XOR R8,R9 }
    /* +0x9ae966 */ __asm { MOV RDX,R8 }
    /* +0x9ae969 */ __asm { ROL RDX,0x22 }
    /* +0x9ae96d */ __asm { MOV R9,R8 }
    /* +0x9ae970 */ __asm { ROL R9,0x12 }
    /* +0x9ae974 */ __asm { XOR R9,RDX }
    /* +0x9ae977 */ __asm { XOR R9,R8 }
    /* +0x9ae97a */ __asm { MOV RDX,R9 }
    /* +0x9ae97d */ __asm { ROL RDX,0x24 }
    /* +0x9ae981 */ __asm { MOV R8,R9 }
    /* +0x9ae984 */ __asm { ROL R8,0x4 }
    /* +0x9ae988 */ __asm { XOR R8,RDX }
    /* +0x9ae98b */ __asm { XOR R8,R9 }
    /* +0x9ae98e */ __asm { MOV RDX,R8 }
    /* +0x9ae991 */ __asm { SHR RDX,0x11 }
    /* +0x9ae995 */ __asm { XOR RDX,R8 }
    /* +0x9ae998 */ __asm { MOVQ XMM5,RDX }
    /* +0x9ae99d */ __asm { SHR RDX,0x22 }
    /* +0x9ae9a1 */ __asm { MOVD XMM0,EDX }
    /* +0x9ae9a5 */ __asm { PXOR XMM0,XMM5 }
    /* +0x9ae9a9 */ __asm { MOVQ RAX,XMM0 }
    /* +0x9ae9ae */ __asm { MOV dword ptr [RBP + 0x230],0xa0bf98ab }
    /* +0x9ae9b8 */ __asm { MOV R11D,dword ptr [RBP + 0x230] }
    /* +0x9ae9bf */ __asm { LEA RDX,[0x7fffa4780590] }
    /* +0x9ae9c6 */ __asm { MOV R9,-0x22134017ec819207 }
    /* +0x9ae9d0 */ __asm { CMP RDX,R9 }
    /* +0x9ae9d3 */ __asm { JZ 0x7fffa5123a4a }
    /* +0x9ae9d9 */ __asm { MOV R8,0x0 }
    /* +0x9ae9e0 */ __asm { NOP }
    /* +0x9ae9e2 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x9ae9e9 */ __asm { MOVZX R9D,uint8_t ptr [RDX + 0x3fff] }
    /* +0x9ae9f1 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R9*0x4 + 0x4009] }
    /* +0x9ae9fa */ __asm { NOT R10B }
    /* +0x9ae9fd */ __asm { ROL R10B,0x3 }
    /* +0x9aea01 */ __asm { MOV uint8_t ptr [RBP + 0x230],R10B }
    /* +0x9aea08 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R9*0x4 + 0x400a] }
    /* +0x9aea11 */ __asm { NOT R10B }
    /* +0x9aea14 */ __asm { ROL R10B,0x3 }
    /* +0x9aea18 */ __asm { MOV uint8_t ptr [RBP + 0x231],R10B }
    /* +0x9aea1f */ __asm { MOVZX R10D,uint8_t ptr [RDX + R9*0x4 + 0x400b] }
    /* +0x9aea28 */ __asm { NOT R10B }
    /* +0x9aea2b */ __asm { ROL R10B,0x3 }
    /* +0x9aea2f */ __asm { MOV uint8_t ptr [RBP + 0x232],R10B }
    /* +0x9aea36 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R9*0x4 + 0x400c] }
    /* +0x9aea3f */ __asm { NOT R10B }
    /* +0x9aea42 */ __asm { ROL R10B,0x3 }
    /* +0x9aea46 */ __asm { MOV uint8_t ptr [RBP + 0x233],R10B }
    /* +0x9aea4d */ __asm { MOV R11D,0x97cd0fa7 }
    /* +0x9aea53 */ __asm { XOR R11D,dword ptr [RBP + 0x230] }
    /* +0x9aea5a */ __asm { BT R11D,R11D }
    /* +0x9aea5e */ __asm { NOP }
    /* +0x9aea5f */ __asm { NOP }
    /* +0x9aea60 */ __asm { NOP }
    /* +0x9aea61 */ __asm { NOP }
    /* +0x9aea62 */ __asm { NOP }
    /* +0x9aea63 */ __asm { NOP }
    /* +0x9aea64 */ __asm { NOP }
    /* +0x9aea65 */ __asm { NOP }
    /* +0x9aea66 */ __asm { NOP }
    /* +0x9aea67 */ __asm { NOP }
    /* +0x9aea68 */ __asm { NOP }
    /* +0x9aea69 */ __asm { NOP }
    /* +0x9aea6a */ __asm { NOP }
    /* +0x9aea6b */ __asm { NOP }
    /* +0x9aea6c */ __asm { NOP }
    /* +0x9aea6d */ __asm { NOP }
    /* +0x9aea6e */ __asm { NOP }
    /* +0x9b3a4a */ __asm { SUB dword ptr [R9 + RBP*0x8 + -0x5079],0x1b158d48 }
}


// ============================================================================
// Function : Unwind@7fffa512dcd0  |  RVA: 0x9bdcd0  |  Size: 269 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa512dcd0(uint64_t param_1,int64_t param_2)

{
  if (*(int64_t *)(param_2 + 0x2d0) != 0) {
    (*(code *)(&UNK_7fffa5085f5b + (short)((short)*(uint32_t *)(param_2 + 0xb0) + -0x4a81)))();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa512dde0  |  RVA: 0x9bdde0  |  Size: 2894 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa512dde0(void) {
    /* +0x9bdde0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x9bdde5 */ __asm { PUSH RBP }
    /* +0x9bdde6 */ __asm { PUSH RBX }
    /* +0x9bdde7 */ __asm { PUSH RDI }
    /* +0x9bdde8 */ __asm { PUSH RSI }
    /* +0x9bdde9 */ __asm { PUSH R15 }
    /* +0x9bddeb */ __asm { PUSH R14 }
    /* +0x9bdded */ __asm { PUSH R12 }
    /* +0x9bddef */ __asm { PUSH R13 }
    /* +0x9bddf1 */ __asm { SUB RSP,0xf8 }
    /* +0x9bddf8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x9bddff */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM9 }
    /* +0x9bde06 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x9bde0d */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM11 }
    /* +0x9bde14 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM14 }
    /* +0x9bde1e */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM7 }
    /* +0x9bde27 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM10 }
    /* +0x9bde31 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM12 }
    /* +0x9bde3b */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM8 }
    /* +0x9bde45 */ __asm { MOVDQA xmmword ptr [RSP + 0xd0],XMM6 }
    /* +0x9bde4e */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM15 }
    /* +0x9bde58 */ __asm { MOV R12,qword ptr [RBP + 0x120] }
    /* +0x9bde5f */ __asm { RDTSC }
    /* +0x9bde61 */ __asm { SHL RDX,0x20 }
    /* +0x9bde65 */ __asm { OR RDX,RAX }
    /* +0x9bde68 */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x9bde72 */ __asm { IMUL RCX,RDX }
    /* +0x9bde76 */ __asm { MOV RDX,-0x22b18422c4a9c65e }
    /* +0x9bde80 */ __asm { ADD RCX,RDX }
    /* +0x9bde83 */ __asm { MOV R10,RCX }
    /* +0x9bde86 */ __asm { SHR R10,0x2d }
    /* +0x9bde8a */ __asm { MOV R9,RCX }
    /* +0x9bde8d */ __asm { SHR R9,0x1b }
    /* +0x9bde91 */ __asm { XOR R10D,R9D }
    /* +0x9bde94 */ __asm { SHR RCX,0x3b }
    /* +0x9bde98 */ __asm { ROR R10D,CL }
    /* +0x9bde9b */ __asm { AND R10D,0x3 }
    /* +0x9bde9f */ __asm { CMP R10D,0x2 }
    /* +0x9bdea3 */ __asm { JC 0x7fffa512e0d1 }
    /* +0x9bdea9 */ __asm { MOV CX,0xd305 }
    /* +0x9bdead */ __asm { SUB ECX,dword ptr [RBP + 0x30] }
    /* +0x9bdeb0 */ __asm { ADD ECX,0x4824 }
    /* +0x9bdeb6 */ __asm { MOVZX ECX,CX }
    /* +0x9bdeb9 */ __asm { CMP R10D,ECX }
    /* +0x9bdebc */ __asm { JC 0x7fffa512e2bd }
    /* +0x9bdec2 */ __asm { LEA RDX,[0x7fffa47bcb69] }
    /* +0x9bdec9 */ __asm { MOV R9,0x2785f069d74535ad }
    /* +0x9bded3 */ __asm { MOV R11,-0x9543fbdf }
    /* +0x9bdedd */ __asm { SUB R11,R9 }
    /* +0x9bdee0 */ __asm { MOV RCX,qword ptr [RBP + 0x30] }
    /* +0x9bdee4 */ __asm { ROR R11,CL }
    /* +0x9bdee7 */ __asm { CMP RDX,R11 }
    /* +0x9bdeea */ __asm { NOP }
    /* +0x9bdeeb */ __asm { NOP }
    /* +0x9bdeec */ __asm { NOP }
    /* +0x9bdeed */ __asm { NOP }
    /* +0x9bdeee */ __asm { NOP }
    /* +0x9bdeef */ __asm { MOV R10D,0x6361953d }
    /* +0x9bdef5 */ __asm { IMUL R10D,dword ptr [RBP + 0x14] }
    /* +0x9bdefa */ __asm { MOV R9D,0xfdb02b5f }
    /* +0x9bdf00 */ __asm { XOR R9,R10 }
    /* +0x9bdf03 */ __asm { MOVZX EAX,uint8_t ptr [RDX + -0x4dc] }
    /* +0x9bdf0a */ __asm { MOV R10D,0xe23c26fb }
    /* +0x9bdf10 */ __asm { ADD R10D,0x90d3afbe }
    /* +0x9bdf17 */ __asm { MOV R8D,0xeecfe0ce }
    /* +0x9bdf1d */ __asm { MOV RDI,qword ptr [RBP + 0x30] }
    /* +0x9bdf21 */ __asm { XOR R8D,EDI }
    /* +0x9bdf24 */ __asm { MOVZX R11D,uint8_t ptr [RDX + RAX*0x4 + -0x4cc] }
    /* +0x9bdf2d */ __asm { ROL R11B,0x4 }
    /* +0x9bdf31 */ __asm { MOV uint8_t ptr [RBP + 0x180],R11B }
    /* +0x9bdf38 */ __asm { MOVZX R11D,uint8_t ptr [RDX + RAX*0x4 + -0x4cb] }
    /* +0x9bdf41 */ __asm { ROL R11B,0x4 }
    /* +0x9bdf45 */ __asm { MOV uint8_t ptr [RBP + 0x181],R11B }
    /* +0x9bdf4c */ __asm { MOVZX R11D,uint8_t ptr [RDX + RAX*0x4 + -0x4ca] }
    /* +0x9bdf55 */ __asm { ROL R11B,0x4 }
    /* +0x9bdf59 */ __asm { MOV uint8_t ptr [RBP + 0x182],R11B }
    /* +0x9bdf60 */ __asm { MOVZX EAX,uint8_t ptr [RDX + RAX*0x4 + -0x4c9] }
    /* +0x9bdf68 */ __asm { ROL AL,0x4 }
    /* +0x9bdf6b */ __asm { ADD R8D,0x733fd1b7 }
    /* +0x9bdf72 */ __asm { MOV uint8_t ptr [RBP + 0x183],AL }
    /* +0x9bdf78 */ __asm { MOV ECX,0x65e8ce72 }
    /* +0x9bdf7d */ __asm { XOR ECX,dword ptr [RBP + 0x180] }
    /* +0x9bdf83 */ __asm { MOV R11D,dword ptr [R9] }
    /* +0x9bdf86 */ __asm { XOR R10D,EDI }
    /* +0x9bdf89 */ __asm { MOV EAX,R11D }
    /* +0x9bdf8c */ __asm { NEG AL }
    /* +0x9bdf8e */ __asm { CMP R10,R8 }
    /* +0x9bdf91 */ __asm { MOVZX R10D,AL }
    /* +0x9bdf95 */ __asm { CMOVZ R10D,R11D }
    /* +0x9bdf99 */ __asm { BT ECX,R10D }
    /* +0x9bdf9d */ __asm { JNC 0x7fffa512e758 }
    /* +0x9bdfa3 */ __asm { MOV ECX,0xeee2144f }
    /* +0x9bdfa8 */ __asm { XOR ECX,dword ptr [RBP + 0x30] }
    /* +0x9bdfab */ __asm { ROL ECX,0xa }
    /* +0x9bdfae */ __asm { PXOR XMM5,XMM5 }
    /* +0x9bdfb2 */ __asm { MOVDQA xmmword ptr [RBP + 0x180],XMM5 }
    /* +0x9bdfba */ __asm { MOV dword ptr [RBP + 0x1a0],ECX }
    /* +0x9bdfc0 */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9bdfc6 */ __asm { MOV dword ptr [RBP + 0x180],0x0 }
    /* +0x9bdfd0 */ __asm { MOV dword ptr [RBP + 0x1a0],0x7ba3c715 }
    /* +0x9bdfda */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9bdfe0 */ __asm { TEST CL,0x1 }
    /* +0x9bdfe3 */ __asm { JNZ 0x7fffa512dfec }
    /* +0x9bdfe5 */ __asm { SUB ESP,dword ptr [RCX + 0x37c33259] }
    /* +0x9bdfeb */ __asm { CMPSB RDI,RSI }
    /* +0x9bdfec */ __asm { MOV dword ptr [RBP + 0x1a0],0xb7b087f3 }
    /* +0x9bdff6 */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9bdffc */ __asm { LEA RDX,[0x7fffa47c1251] }
    /* +0x9be003 */ __asm { MOV R9,-0xbca71b8f }
    /* +0x9be00d */ __asm { ADD R9,RDX }
    /* +0x9be010 */ __asm { MOV R11,0x800000002d5 }
    /* +0x9be01a */ __asm { XOR R11,R9 }
    /* +0x9be01d */ __asm { MOV R9,0x7746455ae2041256 }
    /* +0x9be027 */ __asm { MOV R10,qword ptr [RBP + 0x30] }
    /* +0x9be02b */ __asm { ADD R10,R9 }
    /* +0x9be02e */ __asm { XOR R10,R11 }
    /* +0x9be031 */ __asm { CMP R10,0x4bbd2a71 }
    /* +0x9be038 */ __asm { JZ 0x7fffa512eafc }
    /* +0x9be03e */ __asm { MOV qword ptr [RBP + 0x1a0],R8 }
    /* +0x9be045 */ __asm { LEA RDI,[0x7fffa477ce04] }
    /* +0x9be04c */ __asm { MOV R9,qword ptr [RBP + 0x30] }
    /* +0x9be050 */ __asm { MOV R14D,R9D }
    /* +0x9be053 */ __asm { OR R14D,0x1 }
    /* +0x9be057 */ __asm { XOR ECX,ECX }
    /* +0x9be059 */ __asm { MOV R11W,0xc1e3 }
    /* +0x9be05e */ __asm { MOV EAX,dword ptr [RDX + -0x4d89] }
    /* +0x9be064 */ __asm { MOV R10W,0x1a1d }
    /* +0x9be069 */ __asm { MOV R8D,0x1a2d }
    /* +0x9be06f */ __asm { SUB R8D,R10D }
    /* +0x9be072 */ __asm { MOVZX R9D,R8W }
    /* +0x9be076 */ __asm { IMUL R10D,ECX,-0x3a7 }
    /* +0x9be07d */ __asm { NOT R10D }
    /* +0x9be080 */ __asm { MOVSX R10,R10W }
    /* +0x9be084 */ __asm { IMUL R11D,R14D }
    /* +0x9be088 */ __asm { XOR R11D,0x7abd }
    /* +0x9be08f */ __asm { MOVZX EDX,R11W }
    /* +0x9be093 */ __asm { LEA R8,[RBP + 0x180] }
    /* +0x9be09a */ __asm { SYSCALL }
    /* +0x9be09c */ __asm { MOV RDX,-0x9794ca732a89d37 }
    /* +0x9be0a6 */ __asm { CMP RDI,RDX }
    /* +0x9be0a9 */ __asm { JZ 0x7fffa512eb09 }
    /* +0x9be0af */ __asm { MOV CX,0x5b69 }
    /* +0x9be0b3 */ __asm { MOV qword ptr [RBP + 0x180],RDX }
    /* +0x9be0ba */ __asm { IMUL ECX,R14D }
    /* +0x9be0be */ __asm { MOV EAX,dword ptr [RDI + 0x7880] }
    /* +0x9be0c4 */ __asm { ROL CX,0x3 }
    /* +0x9be0c8 */ __asm { MOVSX R10,CX }
    /* +0x9be0cc */ __asm { JMP 0x7fffa512ea03 }
    /* +0x9be0d1 */ __asm { CMP R10D,0x1 }
    /* +0x9be0d5 */ __asm { JNZ 0x7fffa512e420 }
    /* +0x9be0db */ __asm { MOV EDX,0x3cbe7baa }
    /* +0x9be0e0 */ __asm { MOV R9,-0x37a18c6d }
    /* +0x9be0e7 */ __asm { SUB R9,RDX }
    /* +0x9be0ea */ __asm { MOV R11,0x37d2db27435f2674 }
    /* +0x9be0f4 */ __asm { ADD R11,-0x7f6e602f }
    /* +0x9be0fb */ __asm { ROL R11,0x33 }
    /* +0x9be0ff */ __asm { XOR R11,qword ptr [RBP + 0x30] }
    /* +0x9be103 */ __asm { CMP R11,R9 }
    /* +0x9be106 */ __asm { JZ 0x7fffa512eb10 }
    /* +0x9be10c */ __asm { MOV R9D,0xa56675a9 }
    /* +0x9be112 */ __asm { ADD R9D,dword ptr [RBP + 0x30] }
    /* +0x9be116 */ __asm { ROL R9D,0x12 }
    /* +0x9be11a */ __asm { MOV R9,qword ptr [RDX + R9*0x1 + 0x8] }
    /* +0x9be11f */ __asm { MOV RDX,0x62e31555d768e06 }
    /* +0x9be129 */ __asm { MOV RAX,R9 }
    /* +0x9be12c */ __asm { MUL RDX }
    /* +0x9be12f */ __asm { MOV R11,RDX }
    /* +0x9be132 */ __asm { MOV EDX,0x146334f }
    /* +0x9be137 */ __asm { MOV RAX,R9 }
    /* +0x9be13a */ __asm { MUL RDX }
    /* +0x9be13d */ __asm { ADD RAX,R11 }
    /* +0x9be140 */ __asm { ADC RDX,0x0 }
    /* +0x9be144 */ __asm { PXOR XMM5,XMM5 }
    /* +0x9be148 */ __asm { TEST DL,0x1 }
    /* +0x9be14b */ __asm { JZ 0x7fffa512e5fc }
    /* +0x9be151 */ __asm { MOVDQA xmmword ptr [RBP + 0x180],XMM5 }
    /* +0x9be159 */ __asm { MOV dword ptr [RBP + 0x1a0],0xea4cdc8c }
    /* +0x9be163 */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9be169 */ __asm { TEST CL,0x1 }
    /* +0x9be16c */ __asm { NOP }
    /* +0x9be16d */ __asm { NOP }
    /* +0x9be16e */ __asm { NOP }
    /* +0x9be16f */ __asm { NOP }
    /* +0x9be170 */ __asm { NOP }
    /* +0x9be171 */ __asm { NOP }
    /* +0x9be172 */ __asm { NOP }
    /* +0x9be173 */ __asm { NOP }
    /* +0x9be174 */ __asm { NOP }
    /* +0x9be175 */ __asm { MOV dword ptr [RBP + 0x180],0x0 }
    /* +0x9be17f */ __asm { PUSHFQ }
    /* +0x9be180 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x9be188 */ __asm { POPFQ }
    /* +0x9be189 */ __asm { MOV dword ptr [RBP + 0x1a0],0x97f22b70 }
    /* +0x9be193 */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9be199 */ __asm { CMP ECX,0xcf1947cf }
    /* +0x9be19f */ __asm { NOP }
    /* +0x9be1a0 */ __asm { NOP }
    /* +0x9be1a1 */ __asm { NOP }
    /* +0x9be1a2 */ __asm { NOP }
    /* +0x9be1a3 */ __asm { NOP }
    /* +0x9be1a4 */ __asm { NOP }
    /* +0x9be1a5 */ __asm { NOP }
    /* +0x9be1a6 */ __asm { NOP }
    /* +0x9be1a7 */ __asm { NOP }
    /* +0x9be1a8 */ __asm { NOP }
    /* +0x9be1a9 */ __asm { NOP }
    /* +0x9be1aa */ __asm { NOP }
    /* +0x9be1ab */ __asm { NOP }
    /* +0x9be1ac */ __asm { NOP }
    /* +0x9be1ad */ __asm { NOP }
    /* +0x9be1ae */ __asm { NOP }
    /* +0x9be1af */ __asm { NOP }
    /* +0x9be2bd */ __asm { PXOR XMM5,XMM5 }
    /* +0x9be2c1 */ __asm { MOVDQA xmmword ptr [RBP + 0x180],XMM5 }
    /* +0x9be2c9 */ __asm { MOV dword ptr [RBP + 0x1a0],0x894dba88 }
    /* +0x9be2d3 */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9be2d9 */ __asm { TEST ECX,ECX }
    /* +0x9be2db */ __asm { NOP }
    /* +0x9be2dc */ __asm { NOP }
    /* +0x9be2dd */ __asm { NOP }
    /* +0x9be2de */ __asm { NOP }
    /* +0x9be2df */ __asm { NOP }
    /* +0x9be2e0 */ __asm { PUSHFQ }
    /* +0x9be2e1 */ __asm { POP RAX }
    /* +0x9be2e2 */ __asm { TEST EAX,0x100 }
    /* +0x9be2e7 */ __asm { NOP }
    /* +0x9be2e8 */ __asm { NOP }
    /* +0x9be2e9 */ __asm { NOP }
    /* +0x9be2ea */ __asm { NOP }
    /* +0x9be2eb */ __asm { NOP }
    /* +0x9be2ec */ __asm { MOV dword ptr [RBP + 0x180],0x0 }
    /* +0x9be2f6 */ __asm { MOV dword ptr [RBP + 0x1a0],0x7e34ac6 }
    /* +0x9be300 */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9be306 */ __asm { CMP ECX,0x4cab380f }
    /* +0x9be30c */ __asm { JNC 0x7fffa512eb2b }
    /* +0x9be312 */ __asm { MOV ECX,0x618edee7 }
    /* +0x9be317 */ __asm { SUB ECX,dword ptr [RBP + 0x30] }
    /* +0x9be31a */ __asm { XOR ECX,0x810e03b4 }
    /* +0x9be320 */ __asm { ROL ECX,0x9 }
    /* +0x9be323 */ __asm { MOV dword ptr [RBP + 0x1a0],ECX }
    /* +0x9be329 */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9be32f */ __asm { LEA RDX,[0x7fffa4780dac] }
    /* +0x9be336 */ __asm { MOV R9,-0x269c07d1e32e4171 }
    /* +0x9be340 */ __asm { IMUL R9,RDX }
    /* +0x9be344 */ __asm { MOV R11D,0x9c165413 }
    /* +0x9be34a */ __asm { ADD R11,R9 }
    /* +0x9be34d */ __asm { MOV R9,-0x33263c77f9e8ec85 }
    /* +0x9be357 */ __asm { CMP R11,R9 }
    /* +0x9be35a */ __asm { JZ 0x7fffa512eb33 }
    /* +0x9be360 */ __asm { LEA RDI,[0x7fffa4789850] }
    /* +0x9be367 */ __asm { MOV R10W,0xe4da }
    /* +0x9be36c */ __asm { MOV R9,-0x11751ccac3ff9d0c }
    /* +0x9be376 */ __asm { ADD R9,-0x3536a4c2 }
    /* +0x9be37d */ __asm { MOV R11,qword ptr [RBP + 0x30] }
    /* +0x9be381 */ __asm { ADD R10D,R11D }
    /* +0x9be384 */ __asm { MOV CX,0x7fc5 }
    /* +0x9be388 */ __asm { XOR ECX,R11D }
    /* +0x9be38b */ __asm { MOV qword ptr [RBP + 0x1a0],R8 }
    /* +0x9be392 */ __asm { NOT R10D }
    /* +0x9be395 */ __asm { MOVSX R10,R10W }
    /* +0x9be399 */ __asm { MOV R13,R11 }
    /* +0x9be39c */ __asm { XOR R13,R9 }
    /* +0x9be39f */ __asm { ADD R13,0x6c56851b }
    /* +0x9be3a6 */ __asm { MOV R9,-0xfaaeea06 }
    /* +0x9be3b0 */ __asm { ADD R9,RDI }
    /* +0x9be3b3 */ __asm { MOV R14,-0xb3ba804e }
    /* +0x9be3bd */ __asm { XOR R14,R9 }
    /* +0x9be3c0 */ __asm { MOV EAX,dword ptr [RDX + 0x3870] }
    /* +0x9be3c6 */ __asm { ROL CX,0x6 }
    /* +0x9be3ca */ __asm { XOR ECX,0x38f1 }
    /* +0x9be3d0 */ __asm { MOVZX EDX,CX }
    /* +0x9be3d3 */ __asm { MOV CX,0xc86d }
    /* +0x9be3d7 */ __asm { SUB ECX,R11D }
    /* +0x9be3da */ __asm { IMUL ECX,ECX,0x4fb7 }
    /* +0x9be3e0 */ __asm { ADD ECX,0x394f }
    /* +0x9be3e6 */ __asm { MOVZX R9D,CX }
    /* +0x9be3ea */ __asm { LEA R8,[RBP + 0x180] }
    /* +0x9be3f1 */ __asm { SYSCALL }
    /* +0x9be3f3 */ __asm { CMP R13,R14 }
    /* +0x9be3f6 */ __asm { JZ 0x7fffa512eb45 }
    /* +0x9be3fc */ __asm { MOV ECX,0xd44c4836 }
    /* +0x9be401 */ __asm { ADD ECX,0x41551333 }
    /* +0x9be407 */ __asm { IMUL ECX,dword ptr [RBP + 0x14] }
    /* +0x9be40b */ __asm { MOV qword ptr [RBP + 0x180],RDX }
    /* +0x9be412 */ __asm { MOVSXD R10,ECX }
    /* +0x9be415 */ __asm { MOV EAX,dword ptr [RDI + -0x4a98] }
    /* +0x9be41b */ __asm { JMP 0x7fffa512ea03 }
    /* +0x9be420 */ __asm { MOV RDX,0xff6185628e56cbe }
    /* +0x9be42a */ __asm { MOV R9D,0xc0000099 }
    /* +0x9be430 */ __asm { IMUL R9,RDX }
    /* +0x9be434 */ __asm { NOT R9 }
    /* +0x9be437 */ __asm { SUB R9,qword ptr [RBP + 0x30] }
    /* +0x9be43b */ __asm { LEA RDX,[0x7fffa47bde4e] }
    /* +0x9be442 */ __asm { CMP RDX,R9 }
    /* +0x9be445 */ __asm { NOP }
    /* +0x9be446 */ __asm { NOP }
    /* +0x9be447 */ __asm { NOP }
    /* +0x9be448 */ __asm { NOP }
    /* +0x9be449 */ __asm { NOP }
    /* +0x9be44a */ __asm { MOVZX R9D,uint8_t ptr [RDX + -0x1705] }
    /* +0x9be452 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R9*0x4 + -0x16ff] }
    /* +0x9be45b */ __asm { NOT R10B }
    /* +0x9be45e */ __asm { ROL R10B,0x5 }
    /* +0x9be462 */ __asm { MOV uint8_t ptr [RBP + 0x180],R10B }
    /* +0x9be469 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R9*0x4 + -0x16fe] }
    /* +0x9be472 */ __asm { NOT R10B }
    /* +0x9be475 */ __asm { ROL R10B,0x5 }
    /* +0x9be479 */ __asm { MOV uint8_t ptr [RBP + 0x181],R10B }
    /* +0x9be480 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R9*0x4 + -0x16fd] }
    /* +0x9be489 */ __asm { NOT R10B }
    /* +0x9be48c */ __asm { ROL R10B,0x5 }
    /* +0x9be490 */ __asm { MOV uint8_t ptr [RBP + 0x182],R10B }
    /* +0x9be497 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R9*0x4 + -0x16fc] }
    /* +0x9be4a0 */ __asm { NOT R10B }
    /* +0x9be4a3 */ __asm { ROL R10B,0x5 }
    /* +0x9be4a7 */ __asm { MOV uint8_t ptr [RBP + 0x183],R10B }
    /* +0x9be4ae */ __asm { MOV ECX,0x9102c3cc }
    /* +0x9be4b3 */ __asm { XOR ECX,dword ptr [RBP + 0x180] }
    /* +0x9be4b9 */ __asm { BT ECX,ECX }
    /* +0x9be4bc */ __asm { JNC 0x7fffa512e8ac }
    /* +0x9be4c2 */ __asm { PXOR XMM5,XMM5 }
    /* +0x9be4c6 */ __asm { MOVDQA xmmword ptr [RBP + 0x180],XMM5 }
    /* +0x9be4ce */ __asm { MOV dword ptr [RBP + 0x1a0],0xde78c0e4 }
    /* +0x9be4d8 */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9be4de */ __asm { MOV dword ptr [RBP + 0x180],0x0 }
    /* +0x9be4e8 */ __asm { MOV dword ptr [RBP + 0x1a0],0x3ad8f5ad }
    /* +0x9be4f2 */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9be4f8 */ __asm { MOV dword ptr [RBP + 0x1a0],0xab766c18 }
    /* +0x9be502 */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9be508 */ __asm { MOV R11D,0x5feca68a }
    /* +0x9be50e */ __asm { SUB R11D,dword ptr [RBP + 0x30] }
    /* +0x9be512 */ __asm { ADD R11D,0x646f4565 }
    /* +0x9be519 */ __asm { CMP ECX,R11D }
    /* +0x9be51c */ __asm { JBE 0x7fffa512eb55 }
    /* +0x9be522 */ __asm { LEA R8,[0x7fffa47c001e] }
    /* +0x9be529 */ __asm { MOV RDX,0x6adfd4847be26da3 }
    /* +0x9be533 */ __asm { IMUL RDX,R8 }
    /* +0x9be537 */ __asm { MOV R9,0x2000000085d }
    /* +0x9be541 */ __asm { XOR R9,RDX }
    /* +0x9be544 */ __asm { MOV RDX,0x69247933f09ec158 }
    /* +0x9be54e */ __asm { CMP R9,RDX }
    /* +0x9be551 */ __asm { NOP }
    /* +0x9be552 */ __asm { NOP }
    /* +0x9be553 */ __asm { NOP }
    /* +0x9be554 */ __asm { NOP }
    /* +0x9be555 */ __asm { NOP }
    /* +0x9be556 */ __asm { LEA RDI,[0x7fffa477cd7c] }
    /* +0x9be55d */ __asm { MOV CX,0xdaa4 }
    /* +0x9be561 */ __asm { IMUL R11D,ECX,0x6095 }
    /* +0x9be568 */ __asm { MOV CX,0x3e67 }
    /* +0x9be56c */ __asm { IMUL R10D,ECX,0x2a9 }
    /* +0x9be573 */ __asm { MOV RCX,qword ptr [RBP + 0x30] }
    /* +0x9be577 */ __asm { ROR R10W,CL }
    /* +0x9be57b */ __asm { MOV AX,0x67b5 }
    /* +0x9be57f */ __asm { MOV EDX,0x67dd }
    /* +0x9be584 */ __asm { SUB EDX,EAX }
    /* +0x9be586 */ __asm { MOVZX EDX,DX }
    /* +0x9be589 */ __asm { ADD R11D,0x59c2 }
    /* +0x9be590 */ __asm { XOR R11D,ECX }
    /* +0x9be593 */ __asm { MOVZX R9D,R11W }
    /* +0x9be597 */ __asm { MOV qword ptr [RBP + 0x1a0],RCX }
    /* +0x9be59e */ __asm { MOV EAX,dword ptr [R8 + -0x3046] }
    /* +0x9be5a5 */ __asm { MOVSX R10,R10W }
    /* +0x9be5a9 */ __asm { LEA R8,[RBP + 0x180] }
    /* +0x9be5b0 */ __asm { SYSCALL }
    /* +0x9be5b2 */ __asm { MOV RDX,0x48e936c829926c6d }
    /* +0x9be5bc */ __asm { CMP RDI,RDX }
    /* +0x9be5bf */ __asm { NOP }
    /* +0x9be5c0 */ __asm { NOP }
    /* +0x9be5c1 */ __asm { NOP }
    /* +0x9be5c2 */ __asm { NOP }
    /* +0x9be5c3 */ __asm { NOP }
    /* +0x9be5c4 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x9be5cb */ __asm { NOP }
    /* +0x9be5cc */ __asm { MOV RDX,0x0 }
    /* +0x9be5d3 */ __asm { MOV qword ptr [RBP + 0x180],RDX }
    /* +0x9be5da */ __asm { MOV DX,0xa91 }
    /* +0x9be5de */ __asm { MOV R9,qword ptr [RBP + 0x30] }
    /* +0x9be5e2 */ __asm { LEA R10D,[R9 + RDX*0x1] }
    /* +0x9be5e6 */ __asm { ADD R10D,0xffffda48 }
    /* +0x9be5ed */ __asm { MOVSX R10,R10W }
    /* +0x9be5f1 */ __asm { MOV EAX,dword ptr [RDI + 0x803c] }
    /* +0x9be5f7 */ __asm { JMP 0x7fffa512ea03 }
    /* +0x9be5fc */ __asm { MOVDQA xmmword ptr [RBP + 0x180],XMM5 }
    /* +0x9be604 */ __asm { MOV dword ptr [RBP + 0x1a0],0xffbffff2 }
    /* +0x9be60e */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9be614 */ __asm { CMP ECX,0xe04c4e24 }
    /* +0x9be61a */ __asm { JBE 0x7fffa512eb5d }
    /* +0x9be620 */ __asm { MOV dword ptr [RBP + 0x180],0x0 }
    /* +0x9be62a */ __asm { MOV dword ptr [RBP + 0x1a0],0xd3c34b4c }
    /* +0x9be634 */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9be63a */ __asm { CMP ECX,0x11beef6 }
    /* +0x9be640 */ __asm { NOP }
    /* +0x9be641 */ __asm { NOP }
    /* +0x9be642 */ __asm { NOP }
    /* +0x9be643 */ __asm { NOP }
    /* +0x9be644 */ __asm { NOP }
    /* +0x9be645 */ __asm { MOV R11D,0x57526b90 }
    /* +0x9be64b */ __asm { XOR R11D,0xa756fd8a }
    /* +0x9be652 */ __asm { MOV RCX,qword ptr [RBP + 0x30] }
    /* +0x9be656 */ __asm { ROL R11D,CL }
    /* +0x9be659 */ __asm { NOT R11D }
    /* +0x9be65c */ __asm { MOV dword ptr [RBP + 0x1a0],R11D }
    /* +0x9be663 */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9be669 */ __asm { TEST ECX,ECX }
    /* +0x9be66b */ __asm { NOP }
    /* +0x9be66c */ __asm { NOP }
    /* +0x9be66d */ __asm { NOP }
    /* +0x9be66e */ __asm { NOP }
    /* +0x9be66f */ __asm { NOP }
    /* +0x9be670 */ __asm { PUSHFQ }
    /* +0x9be671 */ __asm { POP RAX }
    /* +0x9be672 */ __asm { TEST EAX,0x100 }
    /* +0x9be677 */ __asm { JZ 0x7fffa512e692 }
    /* +0x9be679 */ __asm { MOV RDX,0x0 }
    /* +0x9be680 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x9be687 */ __asm { NOP }
    /* +0x9be688 */ __asm { MOV SS:[0x2df8477d21ba9762],AL }
    /* +0x9be692 */ __asm { LEA RDX,[0x7fffa47c15b8] }
    /* +0x9be699 */ __asm { MOV R9,0x6c2997a48add1daa }
    /* +0x9be6a3 */ __asm { CMP RDX,R9 }
    /* +0x9be6a6 */ __asm { JZ 0x7fffa512eb65 }
    /* +0x9be6ac */ __asm { MOV R11W,0x3a60 }
    /* +0x9be6b1 */ __asm { MOV RCX,qword ptr [RBP + 0x30] }
    /* +0x9be6b5 */ __asm { SUB R11D,ECX }
    /* +0x9be6b8 */ __asm { MOV R10D,0xd3aa8c7c }
    /* +0x9be6be */ __asm { ADD R10D,0x5f8eb78e }
    /* +0x9be6c5 */ __asm { ADD R11D,0xffffe0ee }
    /* +0x9be6cc */ __asm { MOV R8W,0x7168 }
    /* +0x9be6d1 */ __asm { XOR R8D,0xffff9582 }
    /* +0x9be6d8 */ __asm { ADD R8D,ECX }
    /* +0x9be6db */ __asm { MOVZX R9D,R8W }
    /* +0x9be6df */ __asm { ROL R10D,CL }
    /* +0x9be6e2 */ __asm { MOV qword ptr [RBP + 0x1a0],R8 }
    /* +0x9be6e9 */ __asm { ADD R10D,0x31aefd73 }
    /* +0x9be6f0 */ __asm { MOV EAX,dword ptr [RDX + -0x45e0] }
    /* +0x9be6f6 */ __asm { MOVSXD R10,R10D }
    /* +0x9be6f9 */ __asm { LEA R14,[0x7fffa47b6ccd] }
    /* +0x9be700 */ __asm { MOVZX EDX,R11W }
    /* +0x9be704 */ __asm { LEA R8,[RBP + 0x180] }
    /* +0x9be70b */ __asm { SYSCALL }
    /* +0x9be70d */ __asm { MOV RDX,-0x1256e1b9810bf0e2 }
    /* +0x9be717 */ __asm { CMP R14,RDX }
    /* +0x9be71a */ __asm { NOP }
    /* +0x9be71b */ __asm { NOP }
    /* +0x9be71c */ __asm { NOP }
    /* +0x9be71d */ __asm { NOP }
    /* +0x9be71e */ __asm { NOP }
    /* +0x9be71f */ __asm { MOV ECX,0x3baf1b26 }
    /* +0x9be724 */ __asm { MOV qword ptr [RBP + 0x180],RDX }
    /* +0x9be72b */ __asm { MOV R9D,0x701010d1 }
    /* +0x9be731 */ __asm { ADD R9D,0x7bce587d }
    /* +0x9be738 */ __asm { MOV R8,qword ptr [RBP + 0x30] }
    /* +0x9be73c */ __asm { XOR ECX,R8D }
    /* +0x9be73f */ __asm { NOT ECX }
    /* +0x9be741 */ __asm { MOVSXD R10,ECX }
    /* +0x9be744 */ __asm { ROL R9D,0x1a }
    /* +0x9be748 */ __asm { XOR R9D,R8D }
    /* +0x9be74b */ __asm { MOV EAX,dword ptr [R9 + R14*0x1 + 0x12c] }
    /* +0x9be753 */ __asm { JMP 0x7fffa512ea03 }
    /* +0x9be758 */ __asm { PXOR XMM5,XMM5 }
    /* +0x9be75c */ __asm { MOVDQA xmmword ptr [RBP + 0x180],XMM5 }
    /* +0x9be764 */ __asm { MOV dword ptr [RBP + 0x1a0],0xe4c1fe4d }
    /* +0x9be76e */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9be774 */ __asm { CMP ECX,0x1fa7b68e }
    /* +0x9be77a */ __asm { JA 0x7fffa512e77f }
    /* +0x9be77c */ __asm { INC uint8_t ptr [RSI + 0x77] }
    /* +0x9be77f */ __asm { MOV ECX,0x3a7edc28 }
    /* +0x9be784 */ __asm { MOV dword ptr [RBP + 0x180],0x0 }
    /* +0x9be78e */ __asm { MOV RDX,0x63c2eb786cc2e5ff }
    /* +0x9be798 */ __asm { ADD ECX,0x5afa29e4 }
    /* +0x9be79e */ __asm { IMUL ECX,dword ptr [RBP + 0x14] }
    /* +0x9be7a2 */ __asm { MOV dword ptr [RBP + 0x1a0],ECX }
    /* +0x9be7a8 */ __asm { MOV ECX,dword ptr [RBP + 0x1a0] }
    /* +0x9be7ae */ __asm { LEA R8,[0x7fffa47b59d2] }
    /* +0x9be7b5 */ __asm { MOV RDX,0x435db916db7149b1 }
    /* +0x9be7bf */ __asm { CMP R8,RDX }
    /* +0x9be7c2 */ __asm { NOP }
    /* +0x9be7c3 */ __asm { NOP }
    /* +0x9be7c4 */ __asm { NOP }
    /* +0x9be7c5 */ __asm { NOP }
    /* +0x9be7c6 */ __asm { NOP }
    /* +0x9be7c7 */ __asm { MOV CX,0x9700 }
    /* +0x9be7cb */ __asm { MOV R11W,0xf8da }
    /* +0x9be7d0 */ __asm { MOV R9,-0x5adbacc7f8daf9ba }
    /* +0x9be7da */ __asm { LEA RDI,[0x7fffa47b9269] }
    /* +0x9be7e1 */ __asm { MOV RAX,0x5adbacc89f327c73 }
    /* +0x9be7eb */ __asm { XOR EDX,EDX }
    /* +0x9be7ed */ __asm { CMP RDI,RAX }
    /* +0x9be7f0 */ __asm { SETZ DL }
    /* +0x9be7f3 */ __asm { MOV R10D,0x34928943 }
    /* +0x9be7f9 */ __asm { MOV R13,qword ptr [RBP + 0x30] }
    /* +0x9be7fd */ __asm { ADD R11D,R13D }
    /* +0x9be800 */ __asm { MOV EAX,0xa65782b9 }
    /* +0x9be805 */ __asm { SUB RAX,R9 }
    /* +0x9be808 */ __asm { XOR R14D,R14D }
    /* +0x9be80b */ __asm { CMP RDI,RAX }
    /* +0x9be80e */ __asm { SETNZ R14B }
    /* +0x9be812 */ __asm { ADD R10D,0x7407fd67 }
    /* +0x9be819 */ __asm { XOR R10D,R13D }
}


// ============================================================================
// Function : FUN_7fffa512eb70  |  RVA: 0x9beb70  |  Size: 1188 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa512eb70(void) {
    /* +0x9beb70 */ __asm { PUSH R12 }
    /* +0x9beb72 */ __asm { PUSH R14 }
    /* +0x9beb74 */ __asm { PUSH RSI }
    /* +0x9beb75 */ __asm { PUSH RDI }
    /* +0x9beb76 */ __asm { PUSH R13 }
    /* +0x9beb78 */ __asm { PUSH RBX }
    /* +0x9beb79 */ __asm { PUSH R15 }
    /* +0x9beb7b */ __asm { PUSH RBP }
    /* +0x9beb7c */ __asm { SUB RSP,0x18 }
    /* +0x9beb80 */ __asm { MOV R11D,0xb16c9bbf }
    /* +0x9beb86 */ __asm { LEA RDX,[0x7fffa4788308] }
    /* +0x9beb8d */ __asm { IMUL ECX,R11D,-0x3187a597 }
    /* +0x9beb94 */ __asm { MOV EAX,0x1253b534 }
    /* +0x9beb99 */ __asm { MOV R11D,0x4108a76e }
    /* +0x9beb9f */ __asm { MOV R9,RDX }
    /* +0x9beba2 */ __asm { MOV RDI,R9 }
    /* +0x9beba5 */ __asm { NOT RDI }
    /* +0x9beba8 */ __asm { IMUL R11D,R11D,0x792905f9 }
    /* +0x9bebaf */ __asm { MOV R10D,0x928e6d1d }
    /* +0x9bebb5 */ __asm { ADD R10D,0x310f9e29 }
    /* +0x9bebbc */ __asm { XOR R10D,0x33ea60d6 }
    /* +0x9bebc3 */ __asm { MOVSXD R8,R10D }
    /* +0x9bebc6 */ __asm { MOV R14,R14 }
    /* +0x9bebc9 */ __asm { MOV RBP,R14 }
    /* +0x9bebcc */ __asm { XOR RBP,R9 }
    /* +0x9bebcf */ __asm { MOV RBX,R14 }
    /* +0x9bebd2 */ __asm { AND RBX,R9 }
    /* +0x9bebd5 */ __asm { IMUL R8,RBX }
    /* +0x9bebd9 */ __asm { MOV R10,RBX }
    /* +0x9bebdc */ __asm { XOR R10,-0xf8b9470 }
    /* +0x9bebe3 */ __asm { NOT R14 }
    /* +0x9bebe6 */ __asm { AND R9,R14 }
    /* +0x9bebe9 */ __asm { MOV RSI,RDI }
    /* +0x9bebec */ __asm { OR RSI,R14 }
    /* +0x9bebef */ __asm { IMUL RSI,RSI,-0x22a2246b }
    /* +0x9bebf6 */ __asm { AND R14,RDI }
    /* +0x9bebf9 */ __asm { ADD R14,RBP }
    /* +0x9bebfc */ __asm { IMUL RBP,R14,0x504d13da }
    /* +0x9bec03 */ __asm { MOV R12D,0xfae459bb }
    /* +0x9bec09 */ __asm { SUB R12D,EAX }
    /* +0x9bec0c */ __asm { MOVSXD RAX,R12D }
    /* +0x9bec0f */ __asm { ADD RAX,0x176f5b79 }
    /* +0x9bec15 */ __asm { IMUL RAX,R9 }
    /* +0x9bec19 */ __asm { MOV R9D,0xf563434d }
    /* +0x9bec1f */ __asm { ADD R9D,0x3fc94d9a }
    /* +0x9bec26 */ __asm { CMP R9,RCX }
    /* +0x9bec29 */ __asm { CMOVL R10,R8 }
    /* +0x9bec2d */ __asm { IMUL RCX,RBX,0x3d3683df }
    /* +0x9bec34 */ __asm { ADD RCX,RSI }
    /* +0x9bec37 */ __asm { ADD RCX,RBP }
    /* +0x9bec3a */ __asm { ADD RCX,RAX }
    /* +0x9bec3d */ __asm { ADD RCX,R10 }
    /* +0x9bec40 */ __asm { ROR R11D,CL }
    /* +0x9bec43 */ __asm { MOV R8,-0x2149c331fa4f7a18 }
    /* +0x9bec4d */ __asm { LEA RAX,[0x7fffa47cab5a] }
    /* +0x9bec54 */ __asm { MOVSXD R11,R11D }
    /* +0x9bec57 */ __asm { XORPS XMM2,XMM2 }
    /* +0x9bec5a */ __asm { MOVUPS xmmword ptr [RAX + R11*0x1 + 0x30],XMM2 }
    /* +0x9bec60 */ __asm { MOVUPS xmmword ptr [RAX + R11*0x1 + 0x20],XMM2 }
    /* +0x9bec66 */ __asm { MOVUPS xmmword ptr [RAX + R11*0x1 + 0x10],XMM2 }
    /* +0x9bec6c */ __asm { MOVUPS xmmword ptr [RAX + R11*0x1],XMM2 }
    /* +0x9bec71 */ __asm { CMP RDX,R8 }
    /* +0x9bec74 */ __asm { JZ 0x7fffa512efe5 }
    /* +0x9bec7a */ __asm { MOV RBP,0x7a40d6ebbda825ed }
    /* +0x9bec84 */ __asm { LEA RDI,[0x7fffa56f959d] }
    /* +0x9bec8b */ __asm { MOV R11D,0x292801ba }
    /* +0x9bec91 */ __asm { MOVD XMM2,R11D }
    /* +0x9bec96 */ __asm { MOV R11,0x13f96bae5b74925c }
    /* +0x9beca0 */ __asm { LEA RAX,[0x7fffa4784330] }
    /* +0x9beca7 */ __asm { LEA R8,[0x7fffa47be082] }
    /* +0x9becae */ __asm { MOV R13W,0x9474 }
    /* +0x9becb3 */ __asm { ADD R13D,0xffff9433 }
    /* +0x9becba */ __asm { LEA R9,[0x7fffa56f31f3] }
    /* +0x9becc1 */ __asm { MOV R10,RCX }
    /* +0x9becc4 */ __asm { OR R10,0x1 }
    /* +0x9becc8 */ __asm { MOV SI,0xe74e }
    /* +0x9beccc */ __asm { ROR R13W,CL }
    /* +0x9becd0 */ __asm { MOV R12D,0xa808cf04 }
    /* +0x9becd6 */ __asm { XOR ESI,ECX }
    /* +0x9becd8 */ __asm { MOVSX R15,R13W }
    /* +0x9becdc */ __asm { ADD R15,RDI }
    /* +0x9becdf */ __asm { MOV RDI,-0x4ad26869143d334b }
    /* +0x9bece9 */ __asm { IMUL RDI,R15 }
    /* +0x9beced */ __asm { LEA R15,[0x7fffa57490e9] }
    /* +0x9becf4 */ __asm { IMUL R10,R11 }
    /* +0x9becf8 */ __asm { ROL R10,0x7 }
    /* +0x9becfc */ __asm { MOV R11D,ECX }
    /* +0x9becff */ __asm { OR R11D,0x1 }
    /* +0x9bed03 */ __asm { MOVD XMM4,R11D }
    /* +0x9bed08 */ __asm { PMULUDQ XMM4,XMM2 }
    /* +0x9bed0c */ __asm { MOVD R13D,XMM4 }
    /* +0x9bed11 */ __asm { XOR R13D,0x979d6f5 }
    /* +0x9bed18 */ __asm { MOVSXD R13,R13D }
    /* +0x9bed1b */ __asm { ADD R13,R15 }
    /* +0x9bed1e */ __asm { LEA R14,[0x7fffa56f47d4] }
    /* +0x9bed25 */ __asm { XOR RBP,RCX }
    /* +0x9bed28 */ __asm { MOV R15D,0xc00000ef }
    /* +0x9bed2e */ __asm { IMUL R15,RBP }
    /* +0x9bed32 */ __asm { LEA RBP,[0x7fffa4770000] }
    /* +0x9bed39 */ __asm { MOV RBX,0x0 }
    /* +0x9bed40 */ __asm { IMUL EBX,R12D,-0x6efc1409 }
    /* +0x9bed47 */ __asm { LEA R12D,[RBX + RCX*0x1] }
    /* +0x9bed4b */ __asm { ADD R12D,0x4615fd47 }
    /* +0x9bed52 */ __asm { MOVSXD RBP,R12D }
    /* +0x9bed55 */ __asm { ADD RBP,R14 }
    /* +0x9bed58 */ __asm { XOR RBP,R13 }
    /* +0x9bed5b */ __asm { ADD RBP,qword ptr [RDX + -0x6ff0] }
    /* +0x9bed62 */ __asm { MOV RDX,0x7bd089543112682a }
    /* +0x9bed6c */ __asm { ADD RDX,RBP }
    /* +0x9bed6f */ __asm { MOV R12W,0x50cb }
    /* +0x9bed74 */ __asm { IMUL R12D,R12D,0x1005 }
    /* +0x9bed7b */ __asm { MOV BX,0x8c92 }
    /* +0x9bed7f */ __asm { NOT EBX }
    /* +0x9bed81 */ __asm { ROL R12W,0xe }
    /* +0x9bed86 */ __asm { ROR R12W,CL }
    /* +0x9bed8a */ __asm { ROL SI,0x6 }
    /* +0x9bed8e */ __asm { ADD R9D,ESI }
    /* +0x9bed91 */ __asm { IMUL R9D,R9D,0x4cb5 }
    /* +0x9bed98 */ __asm { SHLD R9,RDI,0x31 }
    /* +0x9bed9d */ __asm { ROL R9,0x29 }
    /* +0x9beda1 */ __asm { ADD EBX,ECX }
    /* +0x9beda3 */ __asm { LEA RSI,[0x7fffa47c4502] }
    /* +0x9bedaa */ __asm { MOVSX RDI,BX }
    /* +0x9bedae */ __asm { MOV qword ptr [RSI + RDI*0x1 + 0x8],R15 }
    /* +0x9bedb3 */ __asm { MOVSX RDI,R12W }
    /* +0x9bedb7 */ __asm { MOV qword ptr [R8 + RDI*0x1],RDX }
    /* +0x9bedbb */ __asm { CMP RAX,R10 }
    /* +0x9bedbe */ __asm { JZ 0x7fffa512efed }
    /* +0x9bedc4 */ __asm { MOVQ XMM2,R9 }
    /* +0x9bedc9 */ __asm { MOV R9W,0x8470 }
    /* +0x9bedce */ __asm { LEA R8,[0x7fffa47c388e] }
    /* +0x9bedd5 */ __asm { LEA R10,[0x7fffa477f15c] }
    /* +0x9beddc */ __asm { MOV EDX,0x14e2 }
    /* +0x9bede1 */ __asm { SUB EDX,R9D }
    /* +0x9bede4 */ __asm { MOVSX RDX,DX }
    /* +0x9bede8 */ __asm { MOVQ XMM4,qword ptr [RAX + -0x2ff0] }
    /* +0x9bedf0 */ __asm { MOV R9,R10 }
    /* +0x9bedf3 */ __asm { ROR R9,0x1 }
    /* +0x9bedf6 */ __asm { MOV RAX,-0xbc623449 }
    /* +0x9bee00 */ __asm { ADD RAX,R9 }
    /* +0x9bee03 */ __asm { MOV R9,-0x248201ef16eaf744 }
    /* +0x9bee0d */ __asm { ADD R9,RCX }
    /* +0x9bee10 */ __asm { ROL R9,0x2e }
    /* +0x9bee14 */ __asm { MOV SI,0x3db9 }
    /* +0x9bee18 */ __asm { MOV EBX,0x241 }
    /* +0x9bee1d */ __asm { SUB EBX,ESI }
    /* +0x9bee1f */ __asm { LEA RSI,[0x7fffa47c0478] }
    /* +0x9bee26 */ __asm { MOVSX RDI,BX }
    /* +0x9bee2a */ __asm { MOV qword ptr [RSI + RDI*0x1 + 0x18],R9 }
    /* +0x9bee2f */ __asm { MOV R9,-0x314eba8b83b6e01b }
    /* +0x9bee39 */ __asm { PADDQ XMM4,XMM2 }
    /* +0x9bee3d */ __asm { MOVQ qword ptr [R8 + RDX*0x1 + 0x10],XMM4 }
    /* +0x9bee44 */ __asm { CMP RAX,R9 }
    /* +0x9bee47 */ __asm { JZ 0x7fffa512effe }
    /* +0x9bee4d */ __asm { MOV AX,0x1c5e }
    /* +0x9bee51 */ __asm { MOVD XMM2,EAX }
    /* +0x9bee55 */ __asm { LEA R8,[0x7fffa56f9708] }
    /* +0x9bee5c */ __asm { NOT R8 }
    /* +0x9bee5f */ __asm { BSWAP R8 }
    /* +0x9bee62 */ __asm { LEA RDX,[0x7fffa4783b83] }
    /* +0x9bee69 */ __asm { MOV RAX,0x227a9623005bcf81 }
    /* +0x9bee73 */ __asm { IMUL RAX,qword ptr [R10 + 0x1e6c] }
    /* +0x9bee7b */ __asm { MOV R9,RAX }
    /* +0x9bee7e */ __asm { SHR R9,0xb }
    /* +0x9bee82 */ __asm { XOR R9,RAX }
    /* +0x9bee85 */ __asm { MOV RAX,R9 }
    /* +0x9bee88 */ __asm { SHR RAX,0x16 }
    /* +0x9bee8c */ __asm { MOV R10D,ECX }
    /* +0x9bee8f */ __asm { OR R10D,0x1 }
    /* +0x9bee93 */ __asm { MOVD XMM4,R10D }
    /* +0x9bee98 */ __asm { PMULLW XMM4,XMM2 }
    /* +0x9bee9c */ __asm { MOVD R10D,XMM4 }
    /* +0x9beea1 */ __asm { XOR R10D,0xffffb6a9 }
    /* +0x9beea8 */ __asm { MOV RSI,R9 }
    /* +0x9beeab */ __asm { SHR RSI,0x2c }
    /* +0x9beeaf */ __asm { XOR RSI,RAX }
    /* +0x9beeb2 */ __asm { XOR RSI,R9 }
    /* +0x9beeb5 */ __asm { MOV RAX,-0x7ff001ffc007ff }
    /* +0x9beebf */ __asm { IMUL RAX,RSI }
    /* +0x9beec3 */ __asm { MOV R9,-0x7b39c0761df281de }
    /* +0x9beecd */ __asm { ADD R9,RAX }
    /* +0x9beed0 */ __asm { ROL R9,0x3 }
    /* +0x9beed4 */ __asm { MOV RAX,-0x71c71c71c71c71c7 }
    /* +0x9beede */ __asm { IMUL RAX,R9 }
    /* +0x9beee2 */ __asm { ROL RAX,0x39 }
    /* +0x9beee6 */ __asm { ADD R10D,0x3a37 }
    /* +0x9beeed */ __asm { MOV R9D,0x5aaaef13 }
    /* +0x9beef3 */ __asm { ADD R9D,ECX }
    /* +0x9beef6 */ __asm { ROL R9D,0x9 }
    /* +0x9beefa */ __asm { LEA RSI,[0x7fffa47c80a7] }
    /* +0x9bef01 */ __asm { LEA RBP,[0x7fffa47c4732] }
    /* +0x9bef08 */ __asm { MOVSXD R9,R9D }
    /* +0x9bef0b */ __asm { MOV qword ptr [RSI + R9*0x1 + 0x28],R8 }
    /* +0x9bef10 */ __asm { MOV R8,-0xfbc2ebf9f5604d1 }
    /* +0x9bef1a */ __asm { MOVSX R10,R10W }
    /* +0x9bef1e */ __asm { MOV qword ptr [RBP + R10*0x1 + 0x20],RAX }
    /* +0x9bef23 */ __asm { CMP RDX,R8 }
    /* +0x9bef26 */ __asm { NOP }
    /* +0x9bef27 */ __asm { NOP }
    /* +0x9bef28 */ __asm { NOP }
    /* +0x9bef29 */ __asm { NOP }
    /* +0x9bef2a */ __asm { NOP }
    /* +0x9bef2b */ __asm { LEA R9,[0x7fffa477cdff] }
    /* +0x9bef32 */ __asm { MOV EAX,0x2daaf913 }
    /* +0x9bef37 */ __asm { ADD EAX,ECX }
    /* +0x9bef39 */ __asm { NOT EAX }
    /* +0x9bef3b */ __asm { ROL EAX,0x4 }
    /* +0x9bef3e */ __asm { MOV R8,0x43933e9390830e94 }
    /* +0x9bef48 */ __asm { SUB R8,qword ptr [RDX + -0x270b] }
    /* +0x9bef4f */ __asm { CDQE }
    /* +0x9bef51 */ __asm { LEA RDX,[0x7fffa47c6341] }
    /* +0x9bef58 */ __asm { MOV qword ptr [RDX + RAX*0x1 + 0x30],R8 }
    /* +0x9bef5d */ __asm { MOV R8,-0x70e1fa19860a40cb }
    /* +0x9bef67 */ __asm { CMP R9,R8 }
    /* +0x9bef6a */ __asm { NOP }
    /* +0x9bef6b */ __asm { NOP }
    /* +0x9bef6c */ __asm { NOP }
    /* +0x9bef6d */ __asm { NOP }
    /* +0x9bef6e */ __asm { NOP }
    /* +0x9bef6f */ __asm { NOP }
    /* +0x9bef70 */ __asm { NOP }
    /* +0x9bef71 */ __asm { NOP }
    /* +0x9bef72 */ __asm { MOV R10D,0x199600e7 }
    /* +0x9bef78 */ __asm { MOV RDX,R9 }
    /* +0x9bef7b */ __asm { ADD RDX,0x43a9 }
    /* +0x9bef82 */ __asm { MOV R8D,0xbae7a269 }
    /* +0x9bef88 */ __asm { AND R9D,0x43a9 }
    /* +0x9bef8f */ __asm { IMUL R8D,R11D }
    /* +0x9bef93 */ __asm { NOT R8D }
    /* +0x9bef96 */ __asm { LEA RAX,[0x7fffa47c40b4] }
    /* +0x9bef9d */ __asm { MOV SI,0x3850 }
    /* +0x9befa1 */ __asm { XOR ECX,ESI }
    /* +0x9befa3 */ __asm { XOR R10D,0x86c5ec12 }
    /* +0x9befaa */ __asm { IMUL R10D,R11D }
    /* +0x9befae */ __asm { CMP R10,R8 }
    /* +0x9befb1 */ __asm { CMOVC R9,RDX }
    /* +0x9befb5 */ __asm { MOV R8,0xf431099c45de340 }
    /* +0x9befbf */ __asm { ADD R8,qword ptr [R9] }
    /* +0x9befc2 */ __asm { ADD ECX,0xffffe7d8 }
    /* +0x9befc8 */ __asm { ROR CX,0x1 }
    /* +0x9befcb */ __asm { MOVSX R11,CX }
    /* +0x9befcf */ __asm { MOV qword ptr [RAX + R11*0x1 + 0x38],R8 }
    /* +0x9befd4 */ __asm { ADD RSP,0x18 }
    /* +0x9befd8 */ __asm { POP RBP }
    /* +0x9befd9 */ __asm { POP R15 }
    /* +0x9befdb */ __asm { POP RBX }
    /* +0x9befdc */ __asm { POP R13 }
    /* +0x9befde */ __asm { POP RDI }
    /* +0x9befdf */ __asm { POP RSI }
    /* +0x9befe0 */ __asm { POP R14 }
    /* +0x9befe2 */ __asm { POP R12 }
    /* +0x9befe4 */ __asm { RET }
    /* +0x9befe5 */ __asm { OR dword ptr [0x7fffa50f7dd9],0x85d072ff }
    /* +0x9beff0 */ __asm { SUB AL,DH }
    /* +0x9beff2 */ __asm { OUT 0xb4,EAX }
    /* +0x9beff4 */ __asm { JO 0x7fffa512efad }
    /* +0x9beff7 */ __asm { SHL dword ptr [RDX],0xe9 }
    /* +0x9beffe */ __asm { MOV RDX,0x0 }
    /* +0x9bf005 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x9bf00c */ __asm { MOV AL,DS:[-0x333333000001c617] }
    /* +0x9bf017 */ __asm { INT3 }
}


// ============================================================================
// Function : FUN_7fffa512f020  |  RVA: 0x9bf020  |  Size: 1 bytes
// Callers  : FUN_7fffa52c6460@0xb56460
// Callees  : none
// ============================================================================
void FUN_7fffa512f020(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa512f030  |  RVA: 0x9bf030  |  Size: 620 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa512f030(void)

{
  uint64_t in_RAX;
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  
  bRam00007fffa47bc63f = 0;
  uRam00007fffa47bc645 = 0;
  uRam00007fffa47bc64d = 0;
  uRam00007fffa47bc655 = 0;
  uRam00007fffa47bc66d = 0;
  uVar1 = rdtsc();
  uVar2 = (uVar1 & 0xffffffff00000000 | CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar1)) *
          0xe068446318fce0c + 0xb;
  uVar1 = 0;
  do {
    bVar5 = uVar1 != 0x3c;
    lVar3 = uVar2 * 0xe068446318fce0c + 0xb;
    *(char *)(uVar1 + 0x7fffa47bc638) = (char)((uint64_t)lVar3 >> 0x20);
    lVar4 = lVar3 * 0x69496c386f3f5090 + -0x65b850fbded22571;
    uVar2 = lVar4 * 0xe068446318fce0c;
    *(char *)(uVar1 + 0x7fffa47bc63b) = (char)(uVar2 >> 0x20);
    *(char *)((uVar1 | 1) + 0x7fffa47bc638) = (char)((uint64_t)(lVar3 * 0x46318fce0c) >> 0x20);
    *(char *)(uVar1 + 0x7fffa47bc63a) = (char)((uint64_t)lVar4 >> 0x20);
    uVar2 = uVar2 | 0xb;
    uVar1 = uVar1 + 4;
  } while (bVar5);
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa47bc63f * 0x55555556 + 0x55555556) * 3;
  *(uint64_t *)((uVar1 >> 0x20) * 8 + 0x7fffa47bc645) = ~uRam00007fffa47bc66d;
  bRam00007fffa47bc63f = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa512f2a0  |  RVA: 0x9bf2a0  |  Size: 216 bytes
// Callers  : FUN_7fffa55f6f60@0xe86f60
// Callees  : FUN_7fffa52248c0@0xab48c0
// ============================================================================
int FUN_7fffa512f2a0(uint64_t *param_1,int param_2,int64_t param_3,int param_4,
                    uint64_t *param_5)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uStack_10;
  
  uVar1 = *(uint64_t *)(param_3 + 8);
  uVar2 = param_5[1];
  if ((uVar1 < uVar2) || (uStack_10 = param_1[1], uVar2 < uStack_10)) {
    return -1;
  }
  if ((int64_t)(uVar2 - uStack_10) < (int64_t)(uVar1 - uVar2)) {
    uVar3 = *param_1;
    param_4 = param_2;
    if (uStack_10 < uVar2) {
      do {
        FUN_7fffa52248c0(uVar3,&uStack_10);
        param_4 = param_4 + 1;
      } while (uStack_10 < (uint64_t)param_5[1]);
    }
  }
  else {
    uVar3 = *param_5;
    uStack_10 = uVar2;
    if (uVar2 < uVar1) {
      do {
        FUN_7fffa52248c0(uVar3,&uStack_10);
        param_4 = param_4 + -1;
      } while (uStack_10 < *(uint64_t *)(param_3 + 8));
    }
  }
  return param_4;
}


// ============================================================================
// Function : FUN_7fffa512f380  |  RVA: 0x9bf380  |  Size: 16 bytes
// Callers  : FUN_7fffa5605b20@0xe95b20
// Callees  : FUN_7fffa5102120@0x992120
// ============================================================================
uint8_t FUN_7fffa512f380(void)

{
  FUN_7fffa5102120();
  return 1;
}


// ============================================================================
// Function : FUN_7fffa512f3d0  |  RVA: 0x9bf3d0  |  Size: 104 bytes
// Callers  : none
// Callees  : FUN_7fffa507cef0@0x90cef0, FUN_7fffa5213cf0@0xaa3cf0
// ============================================================================
uint64_t FUN_7fffa512f3d0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  lVar1 = *(int64_t *)(param_4 + 0x38);
  FUN_7fffa5213cf0(param_2,param_4,lVar1 + 4);
  if ((*(uint32_t *)(lVar1 + 4) & ((*(uint8_t *)(param_1 + 4) & 0x66) != 0) + 1) == 0) {
    return 1;
  }
  uVar2 = FUN_7fffa507cef0(param_1,param_2,param_3,param_4);
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa512f440  |  RVA: 0x9bf440  |  Size: 96 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa512f85d) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fb2b) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fcdc) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fce0) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fdaa) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fdae) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fdd4) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fdd8) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fdee) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fdf2) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fe9e) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fea1) */
/* WARNING: Removing unreachable block (ram,0x7fffa512feb3) */
/* WARNING: Removing unreachable block (ram,0x7fffa512feb6) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fecc) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fed0) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fef1) */
/* WARNING: Removing unreachable block (ram,0x7fffa512fef5) */
/* WARNING: Removing unreachable block (ram,0x7fffa512ff42) */
/* WARNING: Removing unreachable block (ram,0x7fffa512ff50) */
/* WARNING: Removing unreachable block (ram,0x7fffa512ff89) */
/* WARNING: Removing unreachable block (ram,0x7fffa512ff8d) */
/* WARNING: Removing unreachable block (ram,0x7fffa512ffac) */
/* WARNING: Removing unreachable block (ram,0x7fffa512ffb4) */
/* WARNING: Removing unreachable block (ram,0x7fffa513000f) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130090) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130130) */
/* WARNING: Removing unreachable block (ram,0x7fffa513013d) */
/* WARNING: Removing unreachable block (ram,0x7fffa513018a) */
/* WARNING: Removing unreachable block (ram,0x7fffa513018e) */
/* WARNING: Removing unreachable block (ram,0x7fffa51301a6) */
/* WARNING: Removing unreachable block (ram,0x7fffa51301aa) */
/* WARNING: Removing unreachable block (ram,0x7fffa51301b8) */
/* WARNING: Removing unreachable block (ram,0x7fffa51301cf) */
/* WARNING: Removing unreachable block (ram,0x7fffa51301e8) */
/* WARNING: Removing unreachable block (ram,0x7fffa51301f0) */
/* WARNING: Removing unreachable block (ram,0x7fffa51301ff) */
/* WARNING: Removing unreachable block (ram,0x7fffa51302fa) */
/* WARNING: Removing unreachable block (ram,0x7fffa51302fd) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130210) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130218) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130221) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130228) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130230) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130239) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130242) */
/* WARNING: Removing unreachable block (ram,0x7fffa513024a) */
/* WARNING: Removing unreachable block (ram,0x7fffa513024f) */
/* WARNING: Removing unreachable block (ram,0x7fffa513025d) */
/* WARNING: Removing unreachable block (ram,0x7fffa51302ec) */
/* WARNING: Removing unreachable block (ram,0x7fffa51302ef) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130320) */
/* WARNING: Removing unreachable block (ram,0x7fffa513032e) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130345) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130361) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130377) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130380) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130390) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130498) */
/* WARNING: Removing unreachable block (ram,0x7fffa513049b) */
/* WARNING: Removing unreachable block (ram,0x7fffa513039d) */
/* WARNING: Removing unreachable block (ram,0x7fffa51303a0) */
/* WARNING: Removing unreachable block (ram,0x7fffa51303a7) */
/* WARNING: Removing unreachable block (ram,0x7fffa51303ad) */
/* WARNING: Removing unreachable block (ram,0x7fffa51303b5) */
/* WARNING: Removing unreachable block (ram,0x7fffa51303cb) */
/* WARNING: Removing unreachable block (ram,0x7fffa51303d3) */
/* WARNING: Removing unreachable block (ram,0x7fffa51303db) */
/* WARNING: Removing unreachable block (ram,0x7fffa51303e2) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130426) */
/* WARNING: Removing unreachable block (ram,0x7fffa513042a) */
/* WARNING: Removing unreachable block (ram,0x7fffa513042d) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130351) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130354) */
/* WARNING: Removing unreachable block (ram,0x7fffa513043e) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130441) */
/* WARNING: Removing unreachable block (ram,0x7fffa513009c) */
/* WARNING: Removing unreachable block (ram,0x7fffa51300b5) */
/* WARNING: Removing unreachable block (ram,0x7fffa513026a) */
/* WARNING: Removing unreachable block (ram,0x7fffa51300cc) */
/* WARNING: Removing unreachable block (ram,0x7fffa51300db) */
/* WARNING: Removing unreachable block (ram,0x7fffa51300f0) */
/* WARNING: Removing unreachable block (ram,0x7fffa513026d) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130274) */
/* WARNING: Removing unreachable block (ram,0x7fffa513027c) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130284) */
/* WARNING: Removing unreachable block (ram,0x7fffa513028b) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130295) */
/* WARNING: Removing unreachable block (ram,0x7fffa513029d) */
/* WARNING: Removing unreachable block (ram,0x7fffa51302a4) */
/* WARNING: Removing unreachable block (ram,0x7fffa51302c1) */
/* WARNING: Removing unreachable block (ram,0x7fffa51302cd) */
/* WARNING: Removing unreachable block (ram,0x7fffa51300f9) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130110) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130113) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130128) */
/* WARNING: Removing unreachable block (ram,0x7fffa51302d2) */
/* WARNING: Removing unreachable block (ram,0x7fffa51302d5) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130456) */
/* WARNING: Removing unreachable block (ram,0x7fffa51302e7) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130472) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130477) */
/* WARNING: Removing unreachable block (ram,0x7fffa51304a8) */
/* WARNING: Removing unreachable block (ram,0x7fffa513047c) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130496) */
/* WARNING: Removing unreachable block (ram,0x7fffa51304ab) */

uint64_t FUN_7fffa512f440(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  uRam00007fffa47bae88 = 0;
  uVar1 = (uRam00007fffa4781008 ^ 0x8e932b9393d6ee37) << 0xb ^
          uRam00007fffa4781008 ^ 0x8e932b9393d6ee37;
  uVar2 = (uVar1 << 0x16 ^ uVar1 << 0x2c ^ uVar1) * 0x80100200400801 - 0x7fffa58616a0;
  uVar2 = uVar2 * 0x80 ^ uVar2;
  uVar3 = uVar2 << 0xe ^ uVar2;
  uVar1 = lRam00007fffa4781030 * -0x5c64d815;
  uVar1 = (uVar1 & 0xffffffff) * 0x72181abf +
          ((uVar1 >> 0x20) * 0x72181abf + (uVar1 & 0xffffffff) * 0x10b38cf2 << 0x20) ^
          0x24483b28f63e1d9e;
  uVar1 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  uVar1 = (uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2;
  uVar1 = (uVar1 * 0x8000000 | uVar1 >> 0x25) ^ (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar1;
  uVar1 = (uVar1 << 0x1e | uVar1 >> 0x22) ^ (uVar1 << 0x36 | uVar1 >> 10) ^ uVar1;
  uVar1 = (uVar1 << 0x3c | uVar1 >> 4) ^ (uVar1 << 0x2c | uVar1 >> 0x14) ^ uVar1;
  uRam00007fffa47baea8 = 0xa83714d449518326;
  uVar1 = (uVar1 << 0x18 | uVar1 >> 0x28) ^ (uVar1 << 0x38 | uVar1 >> 8) ^ uVar1;
  uRam00007fffa47bae98 = uVar1 * 0x459bdecc7b792cc0 | uVar1 * 0x69166f7b31ede4b3 >> 0x3a;
  uRam00007fffa47baea0 = 0x6f55b11d82c1e971;
  uRam00007fffa47baeb8 = 0x90ae80c806caa07c;
  uVar4 = ((0x7108370984387f7bU - lRam00007fffa47816b0) * 0x8000 |
          0x7108370984387f7bU - lRam00007fffa47816b0 >> 0x31) * 0x34bf99ee5b615f09;
  uVar1 = uVar4 >> 0x3e ^ uVar4 >> 0x1f ^ uVar4;
  uVar1 = (uVar1 << 0x13 | uVar4 >> 0x2d) ^ (uVar1 << 0x1d | uVar4 >> 0x23) ^ uVar1;
  uVar1 = (uVar1 << 0x26 | uVar1 >> 0x1a) ^ (uVar1 << 0x3a | uVar1 >> 6) ^ uVar1;
  uVar1 = (uVar1 << 0x34 | uVar1 >> 0xc) ^ (uVar1 << 0xc | uVar1 >> 0x34) ^ uVar1;
  uVar1 = (uVar1 << 0x28 | uVar1 >> 0x18) ^ (uVar1 << 0x18 | uVar1 >> 0x28) ^ uVar1;
  uVar1 = (uVar1 << 0x30 | uVar1 >> 0x10) ^ (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar1;
  uVar1 = (uVar1 << 0xd | uVar1 >> 0x33) ^ (uVar1 << 0xf | uVar1 >> 0x31) ^ uVar1;
  uVar4 = (uVar1 << 0x1e | uVar1 >> 0x22) ^ (uVar1 << 0x1a | uVar1 >> 0x26);
  uVar1 = (~uVar1 & uVar4) * 0xc19d288e +
          (~uVar4 & uVar1) * -0x47604bdd + (~uVar1 & uVar4) * -0x108fd746b +
          (uVar1 ^ uVar4) * 0x47604bde;
  uVar1 = (uVar1 << 0x3c | uVar1 >> 4) ^ (uVar1 << 0x34 | uVar1 >> 0xc) ^ uVar1;
  uVar1 = (uVar1 << 0x38 | uVar1 >> 8) ^ (uVar1 << 0x28 | uVar1 >> 0x18) ^ uVar1;
  uVar1 = (uVar1 << 0x30 | uVar1 >> 0x10) ^ (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar1;
  uVar1 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  uVar4 = lRam00007fffa47814e8 + 0x4eb9b147484a1b48;
  lRam00007fffa47baec0 = (uVar4 << 0x2e ^ uVar4 * 0x800000 ^ uVar4) - lRam00007fffa4781628;
  uRam00007fffa47bae90 = uVar3 << 0x1c ^ uVar2 << 0x38 ^ uVar3;
  lRam00007fffa47baeb0 = (uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2;
  return 0xffffffffffff1f37;
}


// ============================================================================
// Function : FUN_7fffa512fb30  |  RVA: 0x9bfb30  |  Size: 2480 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa512fb30(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t *param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint8_t bVar9;
  uint32_t uVar10;
  bool bVar11;
  uint32_t uVar12;
  uint64_t *in_RAX;
  char *pcVar13;
  uint32_t uVar14;
  int64_t lVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  int64_t in_R10;
  uint64_t uVar25;
  uint32_t uVar26;
  int iVar27;
  uint32_t uVar28;
  uint32_t uVar29;
  uint32_t uVar30;
  uint32_t uVar31;
  uint32_t uVar32;
  uint64_t uVar33;
  uint64_t *puVar34;
  uint64_t uVar35;
  uint64_t *puVar36;
  uint32_t uVar37;
  uint64_t *puVar38;
  uint64_t *puVar39;
  
  uVar14 = (uint32_t)param_2;
  uVar30 = uVar14 | 1;
  uVar20 = in_R10 * -0x43a8aaf0be4d904b ^ in_R10 * 0x6c9bed400000000;
  param_3 = (param_3 << 0x13 | param_3 >> 0x2d) ^ (param_3 << 3 | param_3 >> 0x3d) ^ param_3;
  param_3 = (param_3 << 0x26 | param_3 >> 0x1a) ^ (param_3 << 6 | param_3 >> 0x3a) ^ param_3;
  uVar35 = param_3 << 0x30 | param_3 >> 0x10;
  uVar33 = param_3 | uVar35;
  uVar21 = ~uVar35;
  bVar9 = (uint8_t)param_2 & 0x1f;
  uVar25 = uVar33 ^ 0x4b400bed;
  if (0x4eba958e < (-0x78754267 << bVar9 | 0x878abd99U >> 0x20 - bVar9)) {
    uVar25 = ~uVar33 * -0x4b400bee;
  }
  uVar26 = 1 << (*(uint8_t *)(uVar20 + 0x104) & 0x1f);
  iVar27 = 1 << (*(uint8_t *)(uVar20 + 0x10c) & 0x1f);
  uVar28 = 1 << (*(uint8_t *)(uVar20 + 0x100) & 0x1f);
  uVar29 = 0x20 - *(int *)(uVar20 + 0x108);
  uVar23 = 0xffffffffffffffff;
  if ((uVar14 + 0x79c2e4ef ^ 0x8f079536) * -0x5ca4b6f3 < ~(uVar30 * -0x22a9148b)) {
    uVar23 = uVar35;
  }
  uVar22 = -(uVar23 + uVar33) - 2;
  uVar23 = uVar22 & 0xfffffffefcb3331b;
  if (uVar30 * -0x12f93af < (uVar30 * -0x6d240000 | uVar30 * 0x67bd25b8 >> 0x11)) {
    uVar23 = uVar22 * -0x1034ccce5;
  }
  uVar32 = *(uint32_t *)(uVar20 + 0x2c);
  uVar22 = (uint64_t)uVar32;
  if ((uVar30 * 0x23000000 | uVar30 * 0x3cab2323 >> 8) != 0x9db19657) {
    uVar22 = (int64_t)(int)uVar32;
  }
  uVar25 = (uVar25 + (uVar21 & param_3) * -0x4b400bed +
            (param_3 & uVar35) * -0xfd3ea847 + uVar35 * -0x60e249d + uVar21 * 0x4b400bee +
            ((uVar21 | param_3) - (uVar35 ^ uVar33)) * 0xfd3ea848 +
            (uVar21 ^ uVar33) * (uint64_t)(uVar14 ^ 0xcb9e82a3) + uVar23) -
           (int64_t)(int)(uVar14 + 0x2d3ee3aa);
  uVar25 = (uVar25 * 0x100 | uVar25 >> 0x38) ^ (uVar25 * 0x4000000 | uVar25 >> 0x26) ^ uVar25;
  uVar25 = (uVar25 << 0x10 | uVar25 >> 0x30) ^ (uVar25 << 0x34 | uVar25 >> 0xc) ^ uVar25;
  uVar25 = (uVar25 << 0x28 | uVar25 >> 0x18) ^ (uVar25 << 0x20 | uVar25 >> 0x20) ^ uVar25;
  lVar15 = *(int64_t *)(uVar20 + 0x70);
  puVar34 = (uint64_t *)(uVar25 << 0x30 | uVar25 >> 0x10);
  iVar5 = *(int *)(uVar20 + 300);
  uVar37 = *(uint32_t *)(uVar20 + 0x1c);
  lVar6 = *(int64_t *)(uVar20 + 8);
  lVar7 = *(int64_t *)(uVar20 + 0x10);
  lVar8 = *(int64_t *)(uVar20 + 0x80);
  uVar31 = (int)(uVar25 >> 0x10) - (int)lVar6;
  uVar18 = uVar31 - uVar26;
  if (uVar31 < uVar26) {
    uVar18 = 0;
  }
  uVar12 = uVar31;
  if (uVar31 < uVar32) {
    uVar12 = uVar32;
  }
  uVar32 = uVar31 - uVar28;
  if (uVar31 - uVar37 <= uVar28) {
    uVar32 = uVar37;
  }
  if (*(int *)(uVar20 + 0x28) != 0) {
    uVar32 = uVar37;
  }
  uVar37 = ~(-1 << (*(uint8_t *)(uVar20 + 0x104) & 0x1f));
  uVar28 = *(uint32_t *)(uVar20 + 0x18);
  pcVar13 = (char *)((uint64_t)uVar28 + lVar7);
  puVar4 = (uint64_t *)(lVar6 + (uint64_t)uVar28);
  for (; uVar12 != uVar22; uVar22 = uVar22 + 1) {
    uVar19 = (uint32_t)uVar22;
    uVar10 = uVar37 & uVar19;
    if (uVar30 * 0x45a809a2 < 0xda072181 - uVar14) {
      uVar10 = uVar37 ^ uVar19;
    }
    uVar25 = (uint64_t)((uint32_t)(*(int *)(lVar6 + uVar22) * -0x61c8864f) >> (uint64_t)uVar29);
    *(uint32_t *)(lVar8 + (uint64_t)uVar10 * 4) = *(uint32_t *)(lVar15 + uVar25 * 4);
    *(uint32_t *)(lVar15 + uVar25 * 4) = uVar19;
    if (iVar5 != 0) break;
  }
  *(uint32_t *)(uVar20 + 0x2c) = uVar31;
  uVar30 = *(uint32_t *)(lVar15 + (uint64_t)
                              ((uint32_t)((int)*puVar34 * -0x61c8864f) >> ((uint8_t)uVar29 & 0x1f)) * 4);
  uVar25 = 3;
  if (uVar32 <= uVar30) {
    puVar1 = (uint64_t *)((int64_t)puVar34 + 4);
    puVar2 = (uint64_t *)((int64_t)param_4 - 7);
    puVar3 = (uint64_t *)((int64_t)puVar34 + 0xc);
    uVar25 = 3;
    do {
      uVar20 = (uint64_t)uVar30;
      if (uVar30 < uVar28) {
        if (*(int *)(lVar7 + uVar20) != (int)*puVar34) goto LAB_7fffa5130472;
        puVar39 = (uint64_t *)(lVar7 + uVar20 + 4);
        puVar24 = (uint64_t *)(((int64_t)pcVar13 - (int64_t)puVar39) + (int64_t)puVar1);
        if (param_4 <= puVar24) {
          puVar24 = param_4;
        }
        puVar17 = (uint64_t *)((int64_t)puVar24 - 7);
        bVar11 = puVar1 < puVar17;
        if ((int64_t)
            (uint64_t)(((uVar14 ^ 0x3d8f44eb) << 6 | (uVar14 ^ 0x3d8f44eb) >> 0x1a) ^ 0x81967d6) <=
            (int64_t)(int)(-0x42953d93 - uVar14)) {
          bVar11 = (int64_t)puVar1 < (int64_t)puVar17;
        }
        puVar16 = puVar39;
        puVar38 = puVar1;
        if (bVar11) {
          if (*puVar39 == *puVar1) {
            puVar16 = (uint64_t *)(lVar7 + 0xc + uVar20);
            puVar36 = puVar3;
            puVar38 = puVar3;
            if (puVar3 < puVar17) {
LAB_7fffa51301f0:
              if (*puVar16 == *puVar38) goto code_r0x7fffa51301ff;
              uVar29 = 0;
              for (uVar20 = *puVar16 ^ *puVar38; (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar29 = uVar29 + 1;
              }
              uVar20 = (int64_t)puVar36 + ((uint64_t)(uVar29 >> 3) - (int64_t)puVar1);
              goto LAB_7fffa5130320;
            }
            goto LAB_7fffa5130218;
          }
          uVar29 = 0;
          for (uVar20 = *puVar1 ^ *puVar39; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar29 = uVar29 + 1;
          }
          uVar20 = (uint64_t)(uVar29 >> 3);
        }
        else {
LAB_7fffa5130218:
          if ((puVar38 < (uint64_t *)((int64_t)puVar24 - 3U)) && ((int)*puVar16 == (int)*puVar38))
          {
            puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
            puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
          }
          if ((puVar38 < (uint64_t *)((int64_t)puVar24 - 1U)) &&
             ((short)*puVar16 == (short)*puVar38)) {
            puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
            puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
          }
          if (puVar38 < puVar24) {
            puVar38 = (uint64_t *)
                      ((int64_t)puVar38 + (uint64_t)((char)*puVar16 == (char)*puVar38));
          }
          uVar20 = (int64_t)puVar38 - (int64_t)puVar1;
        }
LAB_7fffa5130320:
        if ((char *)((int64_t)puVar39 + uVar20) == pcVar13) {
          puVar24 = (uint64_t *)((int64_t)puVar1 + uVar20);
          puVar17 = puVar4;
          puVar39 = puVar24;
          if (puVar24 < puVar2) {
            if (*puVar4 == *puVar24) {
              puVar39 = (uint64_t *)((int64_t)puVar3 + uVar20);
              lVar15 = 8;
              if (puVar39 < puVar2) {
LAB_7fffa5130380:
                if (*(uint64_t *)((int64_t)puVar4 + lVar15) == *puVar39)
                goto code_r0x7fffa5130390;
                uVar29 = 0;
                for (uVar21 = *puVar39 ^ *(uint64_t *)((int64_t)puVar4 + lVar15);
                    (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                  uVar29 = uVar29 + 1;
                }
                uVar21 = (uint64_t)(uVar29 >> 3) + lVar15;
                goto LAB_7fffa513043e;
              }
LAB_7fffa513039d:
              puVar17 = (uint64_t *)(lVar15 + (int64_t)puVar4);
              goto LAB_7fffa51303a0;
            }
            uVar29 = 0;
            for (uVar21 = *puVar24 ^ *puVar4; (uVar21 & 1) == 0;
                uVar21 = uVar21 >> 1 | 0x8000000000000000) {
              uVar29 = uVar29 + 1;
            }
            uVar21 = (uint64_t)(uVar29 >> 3);
          }
          else {
LAB_7fffa51303a0:
            if ((puVar39 < (uint64_t *)((int64_t)param_4 - 3U)) &&
               ((int)*puVar17 == (int)*puVar39)) {
              puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
              puVar17 = (uint64_t *)((int64_t)puVar17 + 4);
            }
            if ((puVar39 < (uint64_t *)((int64_t)param_4 + -1)) &&
               ((short)*puVar17 == (short)*puVar39)) {
              puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
              puVar17 = (uint64_t *)((int64_t)puVar17 + 2);
            }
            if (puVar39 < param_4) {
              uVar33 = (uint64_t)((char)*puVar17 == (char)*puVar39);
              uVar21 = -uVar33;
              if ((int64_t)(int)(uVar14 + 0xe00631f8) < 0x3ffcd90a8e1 - param_2) {
                uVar21 = uVar33;
              }
              puVar39 = (uint64_t *)((int64_t)puVar39 + uVar21);
            }
            uVar21 = (int64_t)puVar39 - (int64_t)puVar24;
          }
LAB_7fffa513043e:
          uVar20 = uVar20 + uVar21;
        }
        uVar20 = uVar20 + 4;
joined_r0x7fffa51302e1:
        if (uVar25 < uVar20) {
          *in_RAX = (uint64_t)((uVar31 + 3) - uVar30);
          uVar25 = uVar20;
          if ((uint64_t *)((int64_t)puVar34 + uVar20) == param_4) break;
        }
      }
      else {
        puVar24 = (uint64_t *)(lVar6 + uVar20);
        if (*(int *)((uVar25 - 3) + (int64_t)puVar24) == *(int *)((int64_t)puVar34 + (uVar25 - 3))
           ) {
          puVar39 = puVar34;
          if (puVar34 < puVar2) {
            if (*puVar24 == *puVar34) {
              puVar24 = (uint64_t *)(lVar6 + 8 + uVar20);
              lVar15 = 0;
              do {
                puVar39 = puVar39 + 1;
                if (puVar2 <= puVar39) goto LAB_7fffa513026d;
                uVar20 = *puVar24;
                lVar15 = lVar15 + 8;
                puVar24 = puVar24 + 1;
              } while (uVar20 == *puVar39);
              uVar29 = 0;
              for (uVar20 = *puVar39 ^ uVar20; (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar29 = uVar29 + 1;
              }
              uVar20 = (uint64_t)(uVar29 >> 3) + lVar15;
            }
            else {
              uVar29 = 0;
              for (uVar20 = *puVar34 ^ *puVar24; (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar29 = uVar29 + 1;
              }
              uVar20 = (uint64_t)(uVar29 >> 3);
            }
          }
          else {
LAB_7fffa513026d:
            if ((puVar39 < (uint64_t *)((int64_t)param_4 - 3U)) &&
               ((int)*puVar24 == (int)*puVar39)) {
              puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
              puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
            }
            if ((puVar39 < (uint64_t *)((int64_t)param_4 + -1)) &&
               ((short)*puVar24 == (short)*puVar39)) {
              puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
              puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
            }
            if (puVar39 < param_4) {
              puVar39 = (uint64_t *)
                        ((int64_t)puVar39 + (uint64_t)((char)*puVar24 == (char)*puVar39));
            }
            uVar20 = (int64_t)puVar39 - (int64_t)puVar34;
          }
          goto joined_r0x7fffa51302e1;
        }
      }
LAB_7fffa5130472:
      if ((uVar30 <= uVar18) || (iVar27 = iVar27 + -1, iVar27 == 0)) {
        break;
      }
      uVar30 = *(uint32_t *)(lVar8 + (uint64_t)
                                 (uVar30 & (uVar26 + (uint32_t)(uVar14 != 0xcd90a63e) * 2) - 1) * 4);
    } while (uVar32 <= uVar30);
  }
  return (uint64_t)~(uVar14 + 0x726f59bd) ^
         (uVar25 << 0xb | uVar25 >> 0x35) ^ (uVar25 >> 1 | (uint64_t)((uVar25 & 1) != 0) << 0x3f) ^
         uVar25;
code_r0x7fffa51301ff:
  puVar38 = puVar38 + 1;
  puVar16 = puVar16 + 1;
  puVar36 = puVar36 + 1;
  if (puVar17 <= puVar38) goto LAB_7fffa5130218;
  goto LAB_7fffa51301f0;
code_r0x7fffa5130390:
  puVar39 = puVar39 + 1;
  lVar15 = lVar15 + 8;
  if (puVar2 <= puVar39) goto LAB_7fffa513039d;
  goto LAB_7fffa5130380;
}


// ============================================================================
// Function : FUN_7fffa51304f0  |  RVA: 0x9c04f0  |  Size: 250 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa51304f0(uint64_t param_1,uint64_t param_2,uint32_t param_3)

{
  uint64_t uVar1;
  code *pcVar2;
  uint64_t in_R10;
  int64_t lVar3;
  uint8_t (*pauVar4) [16];
  uint64_t uVar5;
  
  lVar3 = (in_R10 << 0x39 ^ in_R10) - (uint64_t)(0xb6aa01fa - param_3);
  pauVar4 = (uint8_t (*) [16])(lVar3 + 0x51bac0db);
  uVar5 = *(uint64_t *)*pauVar4;
  if (uVar5 != 0) {
    uVar1 = *(uint64_t *)(lVar3 + 0x51bac0e3);
    if (uVar5 != uVar1) {
      do {
        if (*(int64_t *)(uVar5 + 0x20) != 0) {
          (*(code *)((int64_t)
                     (int)((param_3 | 1) * 0x7f7d0000 | (param_3 | 1) * 0x3df77f7d >> 0x10) +
                    0x7fffa508b24c))();
        }
        uVar5 = uVar5 + 0x28;
      } while (uVar5 != uVar1);
      uVar5 = *(uint64_t *)*pauVar4;
    }
    pcVar2 = (code *)((int64_t)(int)(param_3 ^ 0x6383d838) + 0x7fffa569661d);
    (*pcVar2)(param_3 ^ 0x6383d838,pcVar2,uVar5 >> 0x3d ^ uVar5);
    *pauVar4 = (uint8_t  [16])0x0;
    *(uint64_t *)(lVar3 + 0x51bac0eb) = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5130600  |  RVA: 0x9c0600  |  Size: 117 bytes
// Callers  : FUN_7fffa56606b8@0xef06b8, FUN_7fffa548d338@0xd1d338, FUN_7fffa4ecd2c4@0x75d2c4, FUN_7fffa511e794@0x9ae794, FUN_7fffa52679b8@0xaf79b8, FUN_7fffa52106c8@0xaa06c8
// Callees  : FUN_7fffa50fecc0@0x98ecc0, FUN_7fffa4ed9184@0x769184, FUN_7fffa50030d0@0x8930d0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t FUN_7fffa5130600(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint32_t *puVar3;
  int64_t lVar4;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    lVar4 = param_1 * param_2;
    if (lVar4 == 0) {
      lVar4 = 1;
    }
    do {
      lVar2 = (*(code *)&DAT_7ff8504e1240)(_DAT_7fffa4782170,8,lVar4);
      if (lVar2 != 0) {
        return lVar2;
      }
      iVar1 = FUN_7fffa50030d0();
    } while ((iVar1 != 0) && (iVar1 = FUN_7fffa50fecc0(lVar4), iVar1 != 0));
  }
  puVar3 = (uint32_t *)FUN_7fffa4ed9184();
  *puVar3 = 0xc;
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5130680  |  RVA: 0x9c0680  |  Size: 32 bytes
// Callers  : none
// Callees  : FUN_7fffa4e91240@0x721240
// ============================================================================
void FUN_7fffa5130680(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa4e91240(param_1,*(uint64_t *)(param_2 + 0xd8),param_2 + 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa51306a1  |  RVA: 0x9c06a1  |  Size: 130 bytes
// Callers  : none
// Callees  : FUN_7fffa5491f30@0xd21f30, FUN_7fffa54991f0@0xd291f0, FUN_7fffa54539d0@0xce39d0, FUN_7fffa5488e60@0xd18e60
// ============================================================================
void FUN_7fffa51306a1(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  int64_t lVar2;
  int iVar3;
  
  FUN_7fffa5491f30(*(uint64_t *)(param_2 + 0x30));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xd8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = FUN_7fffa54991f0(*(uint64_t *)(piVar1 + 10));
    if (iVar3 != 0) {
      FUN_7fffa5488e60(piVar1,1);
    }
  }
  lVar2 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar2 + 0x20) = *(uint64_t *)(param_2 + 0x70);
  lVar2 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar2 + 0x28) = *(uint64_t *)(param_2 + 0x78);
  return;
}


// ============================================================================
// Function : FUN_7fffa5130724  |  RVA: 0x9c0724  |  Size: 65 bytes
// Callers  : FUN_7fffa548d338@0xd1d338, FUN_7fffa5178cfc@0xa08cfc, FUN_7fffa4ee8dec@0x778dec, FUN_7fffa549cd74@0xd2cd74
// Callees  : FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
void FUN_7fffa5130724(int64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  if (param_1 != (int64_t *)0x0) {
    lVar1 = *param_1;
    plVar2 = param_1;
    while (lVar1 != 0) {
      FUN_7fffa52d8dd0(lVar1);
      plVar2 = plVar2 + 1;
      lVar1 = *plVar2;
    }
    FUN_7fffa52d8dd0(param_1);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5130768  |  RVA: 0x9c0768  |  Size: 184 bytes
// Callers  : FUN_7fffa52d242c@0xb6242c, FUN_7fffa5281ce4@0xb11ce4
// Callees  : FUN_7fffa5476b88@0xd06b88, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa4f54478@0x7e4478, FUN_7fffa524fccc@0xadfccc
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa513088d) */
/* WARNING: Removing unreachable block (ram,0x7fffa51308aa) */
/* WARNING: Removing unreachable block (ram,0x7fffa51308ae) */
/* WARNING: Removing unreachable block (ram,0x7fffa51308b7) */
/* WARNING: Removing unreachable block (ram,0x7fffa51308bb) */
/* WARNING: Removing unreachable block (ram,0x7fffa5131412) */
/* WARNING: Removing unreachable block (ram,0x7fffa51313ed) */
/* WARNING: Removing unreachable block (ram,0x7fffa5131a40) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130f00) */
/* WARNING: Removing unreachable block (ram,0x7fffa5131d22) */
/* WARNING: Removing unreachable block (ram,0x7fffa513104a) */
/* WARNING: Removing unreachable block (ram,0x7fffa5131204) */
/* WARNING: Removing unreachable block (ram,0x7fffa513201c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_7fffa5130768(uint64_t param_1,int64_t *param_2,uint32_t *param_3,uint64_t *param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint8_t bVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int iVar15;
  int64_t *plVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t *puVar21;
  int *piVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint32_t uVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  uint32_t uVar31;
  uint64_t uVar32;
  uint32_t uVar33;
  uint64_t uVar34;
  uint64_t *puVar35;
  uint64_t uVar36;
  int64_t lVar37;
  uint64_t uVar38;
  bool bVar39;
  uint64_t uVar40;
  int64_t unaff_retaddr;
  uint64_t *puStack_1c8;
  uint64_t uStack_148;
  uint32_t uStack_13c;
  uint64_t uStack_138;
  uint8_t bStack_129;
  int64_t *plStack_128;
  uint32_t uStack_11c;
  uint64_t *puStack_118;
  uint64_t uStack_110;
  int64_t lStack_108;
  uint32_t uStack_fc;
  uint64_t *puStack_f8;
  uint32_t uStack_ec;
  int64_t lStack_e8;
  uint8_t bStack_dd;
  uint32_t uStack_dc;
  uint64_t *puStack_d8;
  uint64_t uStack_d0;
  uint32_t uStack_c4;
  uint32_t *puStack_c0;
  uint64_t uStack_b8;
  
  plVar16 = param_2;
  if (((*(uint32_t *)(param_1 + 0x3a8) & _DAT_7fffa4780900) == 0) ||
     (*(int64_t *)(param_1 + 0x90) == 0)) {
    FUN_7fffa5476b88(5);
    piVar22 = *(int **)(param_1 + 0x88);
    if (piVar22 != (int *)*param_2) {
      if (piVar22 != (int *)0x0) {
        LOCK();
        iVar15 = *piVar22;
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if ((iVar15 == 1) && (piVar22 != (int *)0x7fffa4780250)) {
          FUN_7fffa52d8dd0();
        }
      }
      piVar22 = (int *)*param_2;
      *(int **)(param_1 + 0x88) = piVar22;
      LOCK();
      *piVar22 = *piVar22 + 1;
      UNLOCK();
    }
    param_1 = 5;
    FUN_7fffa4f54478();
  }
  else {
    piVar22 = *(int **)(param_1 + 0x88);
  }
  if (piVar22 != (int *)0x0) {
    return piVar22;
  }
  FUN_7fffa524fccc();
  uVar28 = 6;
  if (*(uint32_t *)(param_1 + 0x110) < 6) {
    uVar28 = *(uint32_t *)(param_1 + 0x110);
  }
  uStack_ec = 4;
  if (4 < uVar28) {
    uStack_ec = uVar28;
  }
  uVar28 = *(uint32_t *)(param_1 + 0x18);
  uStack_fc = *param_3;
  uStack_13c = param_3[1];
  uVar31 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  uVar29 = (uint64_t)uVar28 + *(int64_t *)(param_1 + 8);
  puVar24 = (uint64_t *)((uint64_t)((int)param_4 == (int)uVar29) + (int64_t)param_4);
  iVar15 = (int)puVar24 - (int)*(int64_t *)(param_1 + 8);
  bStack_129 = uVar31 < iVar15 - uVar28;
  uStack_138 = (uint64_t)CONCAT31((int3)(iVar15 - uVar28 >> 8),bStack_129);
  bVar39 = *(int *)(param_1 + 0x28) == 0;
  bStack_dd = bVar39 && (bool)bStack_129;
  uStack_dc = iVar15 - uVar31;
  if (!bVar39 || !(bool)bStack_129) {
    uStack_dc = uVar28;
  }
  uStack_dc = iVar15 - uStack_dc;
  uVar36 = (uint64_t)uStack_fc;
  if (uStack_dc < uStack_fc) {
    uVar36 = 0;
  }
  uStack_c4 = uStack_13c;
  if (uStack_dc < uStack_13c) {
    uStack_c4 = 0;
  }
  puVar3 = (uint64_t *)((int64_t)param_4 + unaff_retaddr);
  puVar17 = (uint64_t *)((int64_t)param_4 + unaff_retaddr + -8);
  *(uint32_t *)(param_1 + 300) = 0;
  puVar35 = param_4;
  puStack_c0 = param_3;
  uVar32 = uVar36;
  if (puVar24 < puVar17) {
    puVar1 = (uint64_t *)((int64_t)puVar3 - 7);
    puVar2 = puVar3 + -4;
    puStack_118 = (uint64_t *)((int64_t)puVar3 - 1);
    puStack_f8 = (uint64_t *)((int64_t)puVar3 - 3);
    uStack_d0 = 0;
    lStack_108 = 0x2005a7e516a;
    uVar26 = ~(uint64_t)puStack_f8;
    plStack_128 = plVar16;
    uStack_b8 = uVar36;
    do {
      uVar20 = uStack_d0;
      bVar11 = bStack_dd;
      uStack_11c = (uint32_t)uVar32;
      lVar37 = -uVar32;
      bVar39 = *(int *)((int64_t)((int64_t)puVar24 + 1U) - uVar32) ==
               *(int *)((int64_t)puVar24 + 1);
      if (bVar39 && uStack_11c != 0) {
        puVar18 = (uint64_t *)((int64_t)puVar24 + 5);
        puVar12 = (uint64_t *)((int64_t)puVar24 + lVar37 + 5);
        puVar21 = puVar18;
        if (puVar18 < puVar1) {
          if (*puVar12 == *puVar18) {
            puVar21 = (uint64_t *)((int64_t)puVar24 + 0xd);
            lVar13 = (int64_t)puVar24 + 5;
            do {
              if (puVar1 <= puVar21) {
                puVar12 = (uint64_t *)(lVar37 + (int64_t)puVar21);
                goto joined_r0x7fffa5130c2b;
              }
              puVar12 = (uint64_t *)((int64_t)puVar21 + lVar37);
              uVar32 = *puVar21;
              puVar21 = puVar21 + 1;
              lVar13 = lVar13 + 8;
            } while (*puVar12 == uVar32);
            uVar28 = 0;
            for (uVar32 = *puVar12 ^ uVar32; (uVar32 & 1) == 0;
                uVar32 = uVar32 >> 1 | 0x8000000000000000) {
              uVar28 = uVar28 + 1;
            }
            uVar40 = ((uint64_t)(uVar28 >> 3) + lVar13) - (int64_t)puVar18;
          }
          else {
            uVar28 = 0;
            for (uVar32 = *puVar12 ^ *puVar18; (uVar32 & 1) == 0;
                uVar32 = uVar32 >> 1 | 0x8000000000000000) {
              uVar28 = uVar28 + 1;
            }
            uVar40 = (uint64_t)(uVar28 >> 3);
          }
        }
        else {
joined_r0x7fffa5130c2b:
          if ((puVar21 < puStack_f8) && ((int)*puVar12 == (int)*puVar21)) {
            puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
            puVar12 = (uint64_t *)((int64_t)puVar12 + 4);
          }
          if ((puVar21 < puStack_118) && ((short)*puVar12 == (short)*puVar21)) {
            puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
            puVar12 = (uint64_t *)((int64_t)puVar12 + 2);
          }
          if (puVar21 < puVar3) {
            puVar21 = (uint64_t *)
                      ((int64_t)puVar21 + (uint64_t)((char)*puVar12 == (char)*puVar21));
          }
          uVar40 = (int64_t)puVar21 - (int64_t)puVar18;
        }
        uVar40 = uVar40 + 4;
      }
      else {
        uVar40 = 0;
      }
      uStack_148 = 999999999;
      if ((int)uStack_ec < 5) {
        uStack_110 = ((int64_t)puVar3 << 0x36 | (uint64_t)puVar3 >> 10) ^
                     ((int64_t)puVar3 * 0x1000 | (uint64_t)puVar3 >> 0x34) ^ (uint64_t)puVar3;
        uVar32 = (uint64_t)bVar39;
        uVar27 = (uint64_t)bStack_dd;
        lStack_e8 = 0x26e8d834;
        puVar18 = (uint64_t *)~uStack_d0;
        uVar30 = (~(uint64_t)puVar1 | uVar32) * 0x4425390c +
                 ((uint64_t)puVar1 ^ uVar32) * -0xa2482c9c +
                 (~uVar32 & (uint64_t)puVar1) * 0x4425390c +
                 ((uint64_t)puVar1 ^ ~uVar32) * -0xa2482c9c;
        uVar38 = uStack_d0 ^ uVar27;
        puStack_d8 = puVar18;
        FUN_7fffa4a8a930(uStack_110,param_1,&uStack_148);
        uVar32 = uVar30 >> 0x27 ^ uVar30;
        uVar32 = (uVar32 << 0x16 | uVar30 >> 0x2a) ^ uVar32 ^ (uVar32 << 10 | uVar30 >> 0x36);
        uVar32 = (uVar32 << 0x2c | uVar32 >> 0x14) ^ (uVar32 << 0x14 | uVar32 >> 0x2c) ^ uVar32;
        uVar32 = (uVar32 << 0x18 | uVar32 >> 0x28) ^ (uVar32 << 0x28 | uVar32 >> 0x18) ^ uVar32;
        uVar32 = (uVar32 << 0x30 | uVar32 >> 0x10) ^ (uVar32 << 0x10 | uVar32 >> 0x30) ^ uVar32;
        uVar32 = (uVar32 << 0x1a | uVar32 >> 0x26) ^ (uVar32 << 0x36 | uVar32 >> 10) ^ uVar32;
        uVar14 = (uVar32 << 0x2c | uVar32 >> 0x14) ^ (uVar32 << 0x34 | uVar32 >> 0xc) ^ uVar32;
        uVar34 = uVar14 << 0x28 | uVar14 >> 0x18;
        uVar32 = uVar34 ^ uVar14;
        uVar19 = ~uVar27 & uVar32;
        uVar28 = (uint32_t)uVar32 & (uint32_t)bVar11;
        uVar34 = ~uVar34;
        uVar23 = uVar14 & uVar34;
        uVar31 = (uint32_t)uVar23 & (uint32_t)bVar11;
        uVar30 = uVar23 & ~uVar27;
        uVar20 = ((uint64_t)uVar31 & (uint64_t)puVar18) * lStack_108 +
                 (uVar20 ^ ((uint32_t)uVar34 | (uint32_t)uVar14) & (uint32_t)bVar11) * -0x20000000856 +
                 (uint64_t)((uint32_t)puStack_d8 & uVar28) * -0x20026e8e089 +
                 ((uVar28 | uVar20) - ((uVar23 | uVar27) & uVar20)) * 0x26e8d834 +
                 (uVar20 & uVar30) * 0x81672148 +
                 ((uVar27 | uVar32) & (uint64_t)puStack_d8) * lStack_e8 +
                 (uVar38 ^ uVar23) * 0x5a7e4914 +
                 (uint64_t)(uVar31 & (uint32_t)uVar20) * -0x2005a7e516a +
                 (uint64_t)((uint32_t)uVar20 & uVar28) * 0x20000000857 +
                 (uVar20 ^ (uVar27 | uVar32)) * 0x1ff7e98e70e + (uVar20 & uVar19) * 0x1ff7e98e70f +
                 ((uint64_t)puStack_d8 & uVar30) * -0x5a7e4914 +
                 (uVar19 & (uint64_t)puStack_d8) * -0x1ffa581bf41 ^
                 (uVar14 << 0x18 | uVar14 >> 0x28);
        uVar20 = (uVar20 << 0x30 | uVar20 >> 0x10) ^ (uVar20 << 0x10 | uVar20 >> 0x30) ^ uVar20;
      }
      else if (uStack_ec == 5) {
        uVar20 = (uint64_t)(uint32_t)bStack_129;
        uVar32 = param_1 >> 0x35 ^ param_1;
        uVar20 = (uVar20 ^ uVar32) * -0x1ab7369 +
                 (~uVar20 | uVar32) * -0x50eb59bc + (~uVar32 | uVar20) * -0x1ab7369 +
                 (uint64_t)((uint32_t)~uVar32 & (uint32_t)bStack_129) * -0x4f3fe653;
        FUN_7fffa5194b50((int64_t)puVar24 + 0x4f547d63,
                         (uVar32 << 0x1c | param_1 >> 0x24) ^ (uVar32 << 7 | param_1 >> 0x39) ^
                         uVar32);
        uVar20 = uVar20 ^ 0xffffffffd9381e6c;
      }
      else {
        puStack_d8 = (uint64_t *)
                     (((uint64_t)puVar24 ^ 0xf4a1d15d) >> 5 ^ (uint64_t)puVar24 ^ 0xf4a1d15d);
        uVar14 = ~uStack_138;
        uVar19 = uStack_138 & 0xfffffdffa581ae95;
        uVar32 = uVar19 & (uint64_t)param_4;
        uVar20 = ~(uint64_t)param_4;
        uStack_110 = (uVar14 ^ 0x2005a7e516a) & uVar20;
        lStack_e8 = (int64_t)param_4 + uVar19;
        uVar30 = uVar20 | uStack_138 & 0x2005a7e516a;
        lVar13 = uStack_110 - uVar30;
        lVar13 = FUN_7fffa5008340(uVar30,puVar3,lVar13,
                                  lVar13 * 0x6534dbda +
                                  ((uVar19 & uVar20) -
                                  ((uint64_t)param_4 & uVar14 & 0xfffffdffa581ae95)) * 0x18a25da4 +
                                  (uVar32 & 0xffffffff) * 0x16a8bbb0 +
                                  ((uVar32 >> 0x20) * 0x16a8bbb0 << 0x20) +
                                  ((uVar14 & 0xfffffdffa581ae95 & uVar20) +
                                  (uStack_138 & 0x2005a7e516a ^ (uint64_t)param_4)) * -0x4c927e36 +
                                  (uVar14 & 0x2005a7e516a ^ uVar20) * 0x18d21484 +
                                  (uVar14 & 0x2005a7e516a ^ (uint64_t)param_4) * 0x31747228 +
                                  uVar32 * -0x2f4b1954,(int64_t)&uStack_148 * 0x935015e3);
        uVar20 = lVar13 - 0x153598c5;
      }
      uVar30 = uVar40;
      if (uVar40 < uVar20) {
        uVar30 = uVar20;
      }
      uVar32 = (uint64_t)uStack_11c;
      if (uVar30 < 4) {
        *(uint32_t *)(param_1 + 300) =
             (uint32_t)(0x7ff < (uint64_t)((int64_t)puVar24 - (int64_t)puVar35));
        puVar24 = (uint64_t *)
                  ((int64_t)puVar24 + ((uint64_t)((int64_t)puVar24 - (int64_t)puVar35) >> 8) + 1
                  );
      }
      else {
        if (uVar40 < uVar20) {
          puVar18 = puVar24;
        }
        else {
          uStack_148 = 1;
          puVar18 = (uint64_t *)((int64_t)puVar24 + 1U);
        }
        puStack_d8 = (uint64_t *)((int64_t)puVar24 + 0xd);
        uVar28 = uStack_ec;
        do {
          puStack_1c8 = (uint64_t *)((int64_t)puVar24 + 1);
          if (uStack_148 == 0) {
            uVar20 = 0;
LAB_7fffa5131893:
            puVar21 = puVar18;
            uVar14 = uVar30;
          }
          else {
            if (((int)uVar32 == 0) ||
               (*(int *)puStack_1c8 != *(int *)((int64_t)puStack_1c8 + lVar37))) {
LAB_7fffa5131890:
              uVar20 = uStack_148;
              goto LAB_7fffa5131893;
            }
            puVar21 = (uint64_t *)((int64_t)puVar24 + lVar37 + 5);
            puVar25 = (uint64_t *)((int64_t)puVar24 + 5);
            uVar31 = (uint32_t)uStack_148;
            puVar12 = puVar25;
            if (puVar25 < puVar1) {
              puVar12 = puStack_d8;
              if (*puVar21 == *puVar25) {
LAB_7fffa5131770:
                if (puVar12 < puVar1) {
                  if (*(uint64_t *)((int64_t)puVar12 + lVar37) == *puVar12)
                  goto code_r0x7fffa5131786;
                  uVar33 = 0;
                  for (uVar20 = *(uint64_t *)((int64_t)puVar12 + lVar37) ^ *puVar12;
                      (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                    uVar33 = uVar33 + 1;
                  }
                  puVar12 = (uint64_t *)((int64_t)puVar12 + (uint64_t)(uVar33 >> 3));
                  goto LAB_7fffa5131830;
                }
                puVar21 = (uint64_t *)((int64_t)puVar12 + lVar37);
                goto joined_r0x7fffa51317a1;
              }
              uVar33 = 0;
              for (uVar20 = *puVar25 ^ *puVar21; (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar33 = uVar33 + 1;
              }
              uVar7 = 0x1f;
              if (uVar31 != 0) {
                for (; uVar31 >> uVar7 == 0; uVar7 = uVar7 - 1) {
                }
              }
              uVar40 = (uint64_t)(uVar33 >> 3);
            }
            else {
joined_r0x7fffa51317a1:
              if ((puVar12 < puStack_f8) && ((int)*puVar21 == (int)*puVar12)) {
                puVar12 = (uint64_t *)((int64_t)puVar12 + 4);
                puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
              }
              if ((puVar12 < puStack_118) && ((short)*puVar21 == (short)*puVar12)) {
                puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
                puVar12 = (uint64_t *)((int64_t)puVar12 + 2);
              }
              if (puVar12 < puVar3) {
                puVar12 = (uint64_t *)
                          ((int64_t)puVar12 + (uint64_t)((char)*puVar21 == (char)*puVar12));
              }
LAB_7fffa5131830:
              uVar40 = (int64_t)puVar12 - (int64_t)puVar25;
              if (0xfffffffffffffffb < uVar40) goto LAB_7fffa5131890;
              uVar7 = 0x1f;
              if (uVar31 != 0) {
                for (; uVar31 >> uVar7 == 0; uVar7 = uVar7 - 1) {
                }
              }
            }
            uVar20 = 1;
            puVar21 = puStack_1c8;
            uVar14 = uVar40 + 4;
            if ((int)(uVar40 + 4) * 3 <= (int)((uVar7 ^ 0x1f) + (int)uVar30 * 3 + -0x1e))
            goto LAB_7fffa5131890;
          }
          uStack_148 = 999999999;
          if (4 < (int)uVar28) {
            if (5 < (int)uVar28) {
              uVar40 = (uint64_t)puStack_1c8 ^ 0xf4a1d15d;
              lVar13 = FUN_7fffa5008340(uVar40,uVar40 >> 5 ^ uVar40,0,0x33c069b2,
                                        (int64_t)&uStack_148 * 0x935015e3);
              uVar30 = lVar13 - 0x153598c5;
              goto joined_r0x7fffa5131b94;
            }
            uVar40 = param_1 >> 0x35 ^ param_1;
            uVar30 = 0x5296cd25;
            FUN_7fffa5194b50((int *)((int64_t)puVar24 + 0x4f547d64),
                             (uVar40 << 7 | param_1 >> 0x39) ^ (uVar40 << 0x1c | param_1 >> 0x24) ^
                             uVar40);
            uVar30 = uVar30 ^ 0xffffffffd9381e6c;
            if (3 < uVar30) goto LAB_7fffa5131ca6;
LAB_7fffa5131da0:
            uStack_148 = uVar20;
            puStack_1c8 = puVar21;
            uVar30 = uVar14;
            uVar33 = (uint32_t)uVar32;
            uVar31 = uStack_c4;
            break;
          }
          uVar40 = ((~uStack_b8 ^ uVar26 | uVar36) + ((uVar26 ^ uStack_b8) & ~uVar36)) * 0x201dcac7
                   + ((uVar26 | uStack_b8) ^ ~uVar36) * -0x7e40be57 +
                     (uVar36 ^ (uVar26 | uStack_b8)) * -0x7e40be57;
          FUN_7fffa4a8a930(((int64_t)puVar3 * 0x1000 | (uint64_t)puVar3 >> 0x34) ^
                           ((int64_t)puVar3 << 0x36 | (uint64_t)puVar3 >> 10) ^ (uint64_t)puVar3,
                           param_1,&uStack_148);
          uVar32 = uVar40 >> 0x27 ^ uVar40;
          uVar32 = (uVar32 << 0x16 | uVar40 >> 0x2a) ^ (uVar32 << 10 | uVar40 >> 0x36) ^ uVar32;
          uVar32 = (uVar32 << 0x2c | uVar32 >> 0x14) ^ (uVar32 << 0x14 | uVar32 >> 0x2c) ^ uVar32;
          uVar32 = (uVar32 << 0x28 | uVar32 >> 0x18) ^ (uVar32 << 0x18 | uVar32 >> 0x28) ^ uVar32;
          uVar32 = (uVar32 << 0x30 | uVar32 >> 0x10) ^ (uVar32 << 0x10 | uVar32 >> 0x30) ^ uVar32;
          uVar32 = (uVar32 << 0x1a | uVar32 >> 0x26) ^ (uVar32 << 0x36 | uVar32 >> 10) ^ uVar32;
          uVar32 = (uVar32 << 0x34 | uVar32 >> 0xc) ^ (uVar32 << 0x2c | uVar32 >> 0x14) ^ uVar32;
          uVar40 = (uVar32 << 0x28 | uVar32 >> 0x18) ^ uVar32 ^ (uVar32 << 0x18 | uVar32 >> 0x28);
          uVar32 = (uint64_t)uStack_11c;
          uVar30 = uVar40 ^ (uVar40 << 0x10 | uVar40 >> 0x30) ^ (uVar40 << 0x30 | uVar40 >> 0x10);
          uVar28 = uStack_ec;
joined_r0x7fffa5131b94:
          if (uVar30 < 4) goto LAB_7fffa5131da0;
LAB_7fffa5131ca6:
          uVar31 = 0x1f;
          if ((uint32_t)uVar20 != 0) {
            for (; (uint32_t)uVar20 >> uVar31 == 0; uVar31 = uVar31 - 1) {
            }
          }
          iVar15 = 0x1f;
          if ((uint32_t)uStack_148 != 0) {
            for (; (uint32_t)uStack_148 >> iVar15 == 0; iVar15 = iVar15 + -1) {
            }
          }
          if ((int)uVar30 * 4 - iVar15 <= (int)((uVar31 ^ 0x1f) + (int)uVar14 * 4 + -0x1b))
          goto LAB_7fffa5131da0;
          puStack_d8 = (uint64_t *)((int64_t)puStack_d8 + 1);
          puVar24 = puStack_1c8;
          puVar18 = puStack_1c8;
          uVar33 = (uint32_t)uVar32;
          uVar31 = uStack_c4;
        } while (puStack_1c8 < puVar17);
        uStack_c4 = uVar33;
        if (uStack_148 < 4) {
          uStack_c4 = uVar31;
        }
        else {
          if ((puVar35 < puStack_1c8) && (uVar29 < (int64_t)puStack_1c8 + (3 - uStack_148))) {
            for (; *(char *)((int64_t)puStack_1c8 - 1) ==
                   *(char *)((int64_t)puStack_1c8 + (2 - uStack_148));
                puStack_1c8 = (uint64_t *)((int64_t)puStack_1c8 - 1U)) {
              if (((uint64_t *)((int64_t)puStack_1c8 - 1U) <= puVar35) ||
                 ((int64_t)puStack_1c8 + (2 - uStack_148) <= uVar29)) {
                uVar30 = uVar30 + 1;
                puStack_1c8 = (uint64_t *)((int64_t)puStack_1c8 - 1);
                break;
              }
              uVar30 = uVar30 + 1;
            }
          }
          uVar32 = (uint64_t)((int)uStack_148 - 3);
        }
        uVar20 = (int64_t)puStack_1c8 - (int64_t)puVar35;
        puVar24 = (uint64_t *)plStack_128[3];
        if (puVar2 < puStack_1c8) {
          puVar18 = puVar24;
          if (puVar35 <= puVar2) {
            puVar18 = (uint64_t *)((int64_t)puVar24 + ((int64_t)puVar2 - (int64_t)puVar35));
            uVar40 = puVar35[1];
            *puVar24 = *puVar35;
            puVar24[1] = uVar40;
            if (0x10 < (int64_t)puVar2 - (int64_t)puVar35) {
              puVar24 = puVar24 + 6;
              while( true ) {
                uVar40 = puVar35[3];
                puVar24[-4] = puVar35[2];
                puVar24[-3] = uVar40;
                uVar40 = puVar35[5];
                puVar24[-2] = puVar35[4];
                puVar24[-1] = uVar40;
                if (puVar18 <= puVar24) break;
                puVar24 = puVar24 + 4;
                puVar35 = puVar35 + 4;
              }
            }
            puVar35 = puVar2;
          }
          if (puVar35 < puStack_1c8) {
            uVar40 = (int64_t)puStack_1c8 - (int64_t)puVar35;
            if ((3 < uVar40) && (0x1f < (uint64_t)((int64_t)puVar18 - (int64_t)puVar35))) {
              if (uVar40 < 0x20) {
                uVar14 = 0;
              }
              else {
                uVar14 = uVar40 & 0xffffffffffffffe0;
                uVar19 = 0;
                do {
                  uVar8 = *(uint64_t *)((int64_t)puVar35 + uVar19);
                  uVar9 = ((uint64_t *)((int64_t)puVar35 + uVar19))[1];
                  puVar4 = (uint64_t *)((int64_t)puVar35 + uVar19 + 0x10);
                  uVar10 = puVar4[1];
                  puVar6 = (uint64_t *)((int64_t)puVar18 + uVar19 + 0x10);
                  *puVar6 = *puVar4;
                  puVar6[1] = uVar10;
                  *(uint64_t *)((int64_t)puVar18 + uVar19) = uVar8;
                  ((uint64_t *)((int64_t)puVar18 + uVar19))[1] = uVar9;
                  uVar19 = uVar19 + 0x20;
                } while (uVar14 != uVar19);
                if (uVar40 == uVar14) goto LAB_7fffa5132140;
                if ((uVar40 & 0x1c) == 0) {
                  puVar18 = (uint64_t *)((int64_t)puVar18 + uVar14);
                  puVar35 = (uint64_t *)((int64_t)puVar35 + uVar14);
                  goto LAB_7fffa5132084;
                }
              }
              uVar19 = uVar40 & 0xfffffffffffffffc;
              for (; *(uint32_t *)((int64_t)puVar18 + uVar14) =
                          *(uint32_t *)((int64_t)puVar35 + uVar14), uVar19 - 4 != uVar14;
                  uVar14 = uVar14 + 4) {
              }
              if (uVar40 == uVar19) goto LAB_7fffa5132140;
              puVar35 = (uint64_t *)((int64_t)puVar35 + uVar19);
              puVar18 = (uint64_t *)((int64_t)puVar18 + uVar19);
            }
LAB_7fffa5132084:
            uVar28 = (int)puStack_1c8 - (int)puVar35 & 7;
            uVar40 = (uint64_t)uVar28;
            puVar21 = puVar18;
            puVar24 = puVar35;
            if (uVar28 == 0) {
              puVar12 = puVar35;
            }
            else {
              do {
                uVar40 = uVar40 - 1;
                puVar18 = (uint64_t *)((int64_t)puVar21 + 1);
                *(char *)puVar21 = (char)*puVar24;
                puVar12 = (uint64_t *)((int64_t)puVar24 + 1);
                puVar21 = puVar18;
                puVar24 = (uint64_t *)((int64_t)puVar24 + 1);
              } while (uVar40 != 0);
            }
            if ((uint64_t)((int64_t)puVar35 - (int64_t)puStack_1c8) < 0xfffffffffffffff9) {
              lVar37 = 0;
              do {
                *(uint8_t *)((int64_t)puVar18 + lVar37) =
                     *(uint8_t *)((int64_t)puVar12 + lVar37);
                *(uint8_t *)((int64_t)puVar18 + lVar37 + 1) =
                     *(uint8_t *)((int64_t)puVar12 + lVar37 + 1);
                *(uint8_t *)((int64_t)puVar18 + lVar37 + 2) =
                     *(uint8_t *)((int64_t)puVar12 + lVar37 + 2);
                *(uint8_t *)((int64_t)puVar18 + lVar37 + 3) =
                     *(uint8_t *)((int64_t)puVar12 + lVar37 + 3);
                *(uint8_t *)((int64_t)puVar18 + lVar37 + 4) =
                     *(uint8_t *)((int64_t)puVar12 + lVar37 + 4);
                *(uint8_t *)((int64_t)puVar18 + lVar37 + 5) =
                     *(uint8_t *)((int64_t)puVar12 + lVar37 + 5);
                *(uint8_t *)((int64_t)puVar18 + lVar37 + 6) =
                     *(uint8_t *)((int64_t)puVar12 + lVar37 + 6);
                *(uint8_t *)((int64_t)puVar18 + lVar37 + 7) =
                     *(uint8_t *)((int64_t)puVar12 + lVar37 + 7);
                lVar13 = lVar37 + 8;
                lVar37 = lVar37 + 8;
              } while ((uint64_t *)((int64_t)puVar12 + lVar13) != puStack_1c8);
            }
          }
LAB_7fffa5132140:
          plStack_128[3] = plStack_128[3] + uVar20;
          lVar13 = plStack_128[1];
          if (0xffff < uVar20) {
            *(uint32_t *)(plStack_128 + 9) = 1;
            *(int *)((int64_t)plStack_128 + 0x4c) = (int)((uint64_t)(lVar13 - *plStack_128) >> 3);
          }
        }
        else {
          uVar40 = puVar35[1];
          *puVar24 = *puVar35;
          puVar24[1] = uVar40;
          lVar37 = plStack_128[3];
          if (0x10 < uVar20) {
            uVar40 = puVar35[3];
            *(uint64_t *)(lVar37 + 0x10) = puVar35[2];
            *(uint64_t *)(lVar37 + 0x18) = uVar40;
            if (0x20 < (int64_t)uVar20) {
              lVar13 = 0;
              do {
                puVar6 = (uint64_t *)((int64_t)puVar35 + lVar13 + 0x20);
                uVar8 = puVar6[1];
                puVar4 = (uint64_t *)(lVar37 + 0x20 + lVar13);
                *puVar4 = *puVar6;
                puVar4[1] = uVar8;
                puVar4 = (uint64_t *)((int64_t)puVar35 + lVar13 + 0x30);
                uVar8 = puVar4[1];
                puVar6 = (uint64_t *)(lVar37 + 0x30 + lVar13);
                *puVar6 = *puVar4;
                puVar6[1] = uVar8;
                lVar5 = lVar37 + 0x20 + lVar13;
                lVar13 = lVar13 + 0x20;
              } while (lVar5 + 0x20U < lVar37 + uVar20);
            }
            goto LAB_7fffa5132140;
          }
          lVar13 = plStack_128[1];
          plStack_128[3] = lVar37 + uVar20;
        }
        *(short *)(lVar13 + 4) = (short)uVar20;
        *(int *)plStack_128[1] = (int)uStack_148;
        if (0xffff < uVar30 - 3) {
          *(uint32_t *)(plStack_128 + 9) = 2;
          *(int *)((int64_t)plStack_128 + 0x4c) =
               (int)((uint64_t)(plStack_128[1] - *plStack_128) >> 3);
        }
        *(short *)(plStack_128[1] + 6) = (short)(uVar30 - 3);
        plStack_128[1] = plStack_128[1] + 8;
        if (*(int *)(param_1 + 300) != 0) {
          *(uint32_t *)(param_1 + 300) = 0;
        }
        puVar35 = (uint64_t *)((int64_t)puStack_1c8 + uVar30);
        puVar24 = puVar35;
        if ((uStack_c4 != 0) && (puVar35 <= puVar17)) {
          uVar20 = uVar32;
          uVar28 = uStack_c4;
          do {
            uVar32 = (uint64_t)uVar28;
            uStack_c4 = (uint32_t)uVar20;
            if ((int)*puVar35 != *(int *)((int64_t)puVar35 - uVar32)) {
              puVar24 = puVar35;
              uVar32 = uVar20;
              uStack_c4 = uVar28;
              break;
            }
            lVar37 = -uVar32;
            puVar24 = (uint64_t *)((int64_t)puVar35 + 4);
            puVar21 = (uint64_t *)((int64_t)puVar35 + lVar37 + 4);
            puVar18 = puVar24;
            if (puVar24 < puVar1) {
              if (*puVar21 == *puVar24) {
                lVar13 = 0;
                do {
                  puVar18 = (uint64_t *)((int64_t)puVar35 + lVar13 + 0xc);
                  if (puVar1 <= puVar18) {
                    puVar21 = (uint64_t *)((int64_t)puVar35 + lVar37 + lVar13 + 0xc);
                    puVar18 = (uint64_t *)((int64_t)puVar35 + lVar13 + 0xc);
                    goto joined_r0x7fffa5132280;
                  }
                  uVar20 = *puVar18;
                  uVar40 = *(uint64_t *)((int64_t)puVar35 + lVar13 + lVar37 + 0xc);
                  lVar13 = lVar13 + 8;
                } while (uVar40 == uVar20);
                uVar28 = 0;
                for (uVar40 = uVar40 ^ uVar20; (uVar40 & 1) == 0;
                    uVar40 = uVar40 >> 1 | 0x8000000000000000) {
                  uVar28 = uVar28 + 1;
                }
                uVar20 = (uint64_t)(uVar28 >> 3) + lVar13;
              }
              else {
                uVar28 = 0;
                for (uVar20 = *puVar21 ^ *puVar24; (uVar20 & 1) == 0;
                    uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                  uVar28 = uVar28 + 1;
                }
                uVar20 = (uint64_t)(uVar28 >> 3);
              }
            }
            else {
joined_r0x7fffa5132280:
              if ((puVar18 < puStack_f8) && ((int)*puVar21 == (int)*puVar18)) {
                puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
                puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
              }
              if ((puVar18 < puStack_118) && ((short)*puVar21 == (short)*puVar18)) {
                puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
                puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
              }
              if (puVar18 < puVar3) {
                puVar18 = (uint64_t *)
                          ((int64_t)puVar18 + (uint64_t)((char)*puVar21 == (char)*puVar18));
              }
              uVar20 = (int64_t)puVar18 - (int64_t)puVar24;
            }
            if (puVar35 <= puVar2) {
              uVar40 = puVar35[1];
              puVar24 = (uint64_t *)plStack_128[3];
              *puVar24 = *puVar35;
              puVar24[1] = uVar40;
            }
            *(uint16_t *)(plStack_128[1] + 4) = 0;
            *(uint32_t *)plStack_128[1] = 1;
            if (0xffff < uVar20 + 1) {
              *(uint32_t *)(plStack_128 + 9) = 2;
              *(int *)((int64_t)plStack_128 + 0x4c) =
                   (int)((uint64_t)(plStack_128[1] - *plStack_128) >> 3);
            }
            *(short *)(plStack_128[1] + 6) = (short)(uVar20 + 1);
            plStack_128[1] = plStack_128[1] + 8;
            puVar35 = (uint64_t *)((int64_t)puVar35 + uVar20 + 4);
            puVar24 = puVar35;
            if (puVar17 < puVar35) {
              break;
            }
            uVar20 = uVar32;
            uVar28 = uStack_c4;
          } while (uStack_c4 != 0);
        }
      }
    } while (puVar24 < puVar17);
  }
  if (uStack_13c <= uStack_dc) {
    uStack_13c = 0;
  }
  uVar31 = (uint32_t)uVar32;
  uVar28 = uStack_13c;
  if (uVar31 != 0) {
    uVar28 = uStack_fc;
  }
  if (uStack_fc <= uStack_dc) {
    uVar28 = uStack_13c;
  }
  uVar33 = 0;
  if (uStack_dc < uStack_fc) {
    uVar33 = uStack_fc;
  }
  if (uVar31 != 0) {
    uVar33 = uVar31;
  }
  *puStack_c0 = uVar33;
  if (uStack_c4 != 0) {
    uVar28 = uStack_c4;
  }
  puStack_c0[1] = uVar28;
  return (int *)((int64_t)puVar3 - (int64_t)puVar35);
code_r0x7fffa5131786:
  puVar12 = puVar12 + 1;
  goto LAB_7fffa5131770;
}


// ============================================================================
// Function : FUN_7fffa5130820  |  RVA: 0x9c0820  |  Size: 7258 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa513088d) */
/* WARNING: Removing unreachable block (ram,0x7fffa51308aa) */
/* WARNING: Removing unreachable block (ram,0x7fffa51308ae) */
/* WARNING: Removing unreachable block (ram,0x7fffa51308b7) */
/* WARNING: Removing unreachable block (ram,0x7fffa51308bb) */
/* WARNING: Removing unreachable block (ram,0x7fffa5131412) */
/* WARNING: Removing unreachable block (ram,0x7fffa51313ed) */
/* WARNING: Removing unreachable block (ram,0x7fffa5131a40) */
/* WARNING: Removing unreachable block (ram,0x7fffa5130f00) */
/* WARNING: Removing unreachable block (ram,0x7fffa5131d22) */
/* WARNING: Removing unreachable block (ram,0x7fffa513104a) */
/* WARNING: Removing unreachable block (ram,0x7fffa5131204) */
/* WARNING: Removing unreachable block (ram,0x7fffa513201c) */

int64_t FUN_7fffa5130820(uint64_t param_1,int64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint8_t bVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int iVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  uint64_t uVar21;
  uint64_t *puVar22;
  uint64_t *puVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint32_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint32_t uVar29;
  uint64_t uVar30;
  uint32_t uVar31;
  uint64_t uVar32;
  uint64_t *puVar33;
  uint64_t uVar34;
  int64_t lVar35;
  uint64_t uVar36;
  bool bVar37;
  uint64_t uVar38;
  uint64_t *puStack_1a0;
  uint64_t uStack_120;
  uint32_t uStack_114;
  uint64_t uStack_110;
  uint8_t bStack_101;
  int64_t *plStack_100;
  uint32_t uStack_f4;
  uint64_t *puStack_f0;
  uint64_t uStack_e8;
  int64_t lStack_e0;
  uint32_t uStack_d4;
  uint64_t *puStack_d0;
  uint32_t uStack_c4;
  int64_t lStack_c0;
  uint8_t bStack_b5;
  uint32_t uStack_b4;
  uint64_t *puStack_b0;
  uint64_t uStack_a8;
  uint32_t uStack_9c;
  uint32_t *puStack_98;
  uint64_t uStack_90;
  
  uVar26 = 6;
  if (*(uint32_t *)(param_1 + 0x110) < 6) {
    uVar26 = *(uint32_t *)(param_1 + 0x110);
  }
  uStack_c4 = 4;
  if (4 < uVar26) {
    uStack_c4 = uVar26;
  }
  uVar26 = *(uint32_t *)(param_1 + 0x18);
  uStack_d4 = *param_3;
  uStack_114 = param_3[1];
  uVar29 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  uVar27 = (uint64_t)uVar26 + *(int64_t *)(param_1 + 8);
  puVar22 = (uint64_t *)((uint64_t)((int)param_4 == (int)uVar27) + (int64_t)param_4);
  iVar15 = (int)puVar22 - (int)*(int64_t *)(param_1 + 8);
  bStack_101 = uVar29 < iVar15 - uVar26;
  uStack_110 = (uint64_t)CONCAT31((int3)(iVar15 - uVar26 >> 8),bStack_101);
  bVar37 = *(int *)(param_1 + 0x28) == 0;
  bStack_b5 = bVar37 && (bool)bStack_101;
  uStack_b4 = iVar15 - uVar29;
  if (!bVar37 || !(bool)bStack_101) {
    uStack_b4 = uVar26;
  }
  uStack_b4 = iVar15 - uStack_b4;
  uVar34 = (uint64_t)uStack_d4;
  if (uStack_b4 < uStack_d4) {
    uVar34 = 0;
  }
  uStack_9c = uStack_114;
  if (uStack_b4 < uStack_114) {
    uStack_9c = 0;
  }
  puVar3 = (uint64_t *)((int64_t)param_4 + param_5);
  puVar16 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  *(uint32_t *)(param_1 + 300) = 0;
  puVar33 = param_4;
  uVar30 = uVar34;
  if (puVar22 < puVar16) {
    puVar1 = (uint64_t *)((int64_t)puVar3 - 7);
    puVar2 = puVar3 + -4;
    puStack_f0 = (uint64_t *)((int64_t)puVar3 - 1);
    puStack_d0 = (uint64_t *)((int64_t)puVar3 - 3);
    uStack_a8 = 0;
    lStack_e0 = 0x2005a7e516a;
    uVar24 = ~(uint64_t)puStack_d0;
    plStack_100 = param_2;
    puStack_98 = param_3;
    uStack_90 = uVar34;
    do {
      uVar19 = uStack_a8;
      bVar11 = bStack_b5;
      uStack_f4 = (uint32_t)uVar30;
      lVar35 = -uVar30;
      bVar37 = *(int *)((int64_t)((int64_t)puVar22 + 1U) - uVar30) ==
               *(int *)((int64_t)puVar22 + 1);
      if (bVar37 && uStack_f4 != 0) {
        puVar17 = (uint64_t *)((int64_t)puVar22 + 5);
        puVar12 = (uint64_t *)((int64_t)puVar22 + lVar35 + 5);
        puVar20 = puVar17;
        if (puVar17 < puVar1) {
          if (*puVar12 == *puVar17) {
            puVar20 = (uint64_t *)((int64_t)puVar22 + 0xd);
            lVar13 = (int64_t)puVar22 + 5;
            do {
              if (puVar1 <= puVar20) {
                puVar12 = (uint64_t *)(lVar35 + (int64_t)puVar20);
                goto joined_r0x7fffa5130c2b;
              }
              puVar12 = (uint64_t *)((int64_t)puVar20 + lVar35);
              uVar30 = *puVar20;
              puVar20 = puVar20 + 1;
              lVar13 = lVar13 + 8;
            } while (*puVar12 == uVar30);
            uVar26 = 0;
            for (uVar30 = *puVar12 ^ uVar30; (uVar30 & 1) == 0;
                uVar30 = uVar30 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            uVar38 = ((uint64_t)(uVar26 >> 3) + lVar13) - (int64_t)puVar17;
          }
          else {
            uVar26 = 0;
            for (uVar30 = *puVar12 ^ *puVar17; (uVar30 & 1) == 0;
                uVar30 = uVar30 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            uVar38 = (uint64_t)(uVar26 >> 3);
          }
        }
        else {
joined_r0x7fffa5130c2b:
          if ((puVar20 < puStack_d0) && ((int)*puVar12 == (int)*puVar20)) {
            puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
            puVar12 = (uint64_t *)((int64_t)puVar12 + 4);
          }
          if ((puVar20 < puStack_f0) && ((short)*puVar12 == (short)*puVar20)) {
            puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
            puVar12 = (uint64_t *)((int64_t)puVar12 + 2);
          }
          if (puVar20 < puVar3) {
            puVar20 = (uint64_t *)
                      ((int64_t)puVar20 + (uint64_t)((char)*puVar12 == (char)*puVar20));
          }
          uVar38 = (int64_t)puVar20 - (int64_t)puVar17;
        }
        uVar38 = uVar38 + 4;
      }
      else {
        uVar38 = 0;
      }
      uStack_120 = 999999999;
      if ((int)uStack_c4 < 5) {
        uStack_e8 = ((int64_t)puVar3 << 0x36 | (uint64_t)puVar3 >> 10) ^
                    ((int64_t)puVar3 * 0x1000 | (uint64_t)puVar3 >> 0x34) ^ (uint64_t)puVar3;
        uVar30 = (uint64_t)bVar37;
        uVar25 = (uint64_t)bStack_b5;
        lStack_c0 = 0x26e8d834;
        puVar17 = (uint64_t *)~uStack_a8;
        uVar28 = (~(uint64_t)puVar1 | uVar30) * 0x4425390c +
                 ((uint64_t)puVar1 ^ uVar30) * -0xa2482c9c +
                 (~uVar30 & (uint64_t)puVar1) * 0x4425390c +
                 ((uint64_t)puVar1 ^ ~uVar30) * -0xa2482c9c;
        uVar36 = uStack_a8 ^ uVar25;
        puStack_b0 = puVar17;
        FUN_7fffa4a8a930(uStack_e8,param_1,&uStack_120);
        uVar30 = uVar28 >> 0x27 ^ uVar28;
        uVar30 = (uVar30 << 0x16 | uVar28 >> 0x2a) ^ uVar30 ^ (uVar30 << 10 | uVar28 >> 0x36);
        uVar30 = (uVar30 << 0x2c | uVar30 >> 0x14) ^ (uVar30 << 0x14 | uVar30 >> 0x2c) ^ uVar30;
        uVar30 = (uVar30 << 0x18 | uVar30 >> 0x28) ^ (uVar30 << 0x28 | uVar30 >> 0x18) ^ uVar30;
        uVar30 = (uVar30 << 0x30 | uVar30 >> 0x10) ^ (uVar30 << 0x10 | uVar30 >> 0x30) ^ uVar30;
        uVar30 = (uVar30 << 0x1a | uVar30 >> 0x26) ^ (uVar30 << 0x36 | uVar30 >> 10) ^ uVar30;
        uVar14 = (uVar30 << 0x2c | uVar30 >> 0x14) ^ (uVar30 << 0x34 | uVar30 >> 0xc) ^ uVar30;
        uVar32 = uVar14 << 0x28 | uVar14 >> 0x18;
        uVar30 = uVar32 ^ uVar14;
        uVar18 = ~uVar25 & uVar30;
        uVar26 = (uint32_t)uVar30 & (uint32_t)bVar11;
        uVar32 = ~uVar32;
        uVar21 = uVar14 & uVar32;
        uVar29 = (uint32_t)uVar21 & (uint32_t)bVar11;
        uVar28 = uVar21 & ~uVar25;
        uVar19 = ((uint64_t)uVar29 & (uint64_t)puVar17) * lStack_e0 +
                 (uVar19 ^ ((uint32_t)uVar32 | (uint32_t)uVar14) & (uint32_t)bVar11) * -0x20000000856 +
                 (uint64_t)((uint32_t)puStack_b0 & uVar26) * -0x20026e8e089 +
                 ((uVar26 | uVar19) - ((uVar21 | uVar25) & uVar19)) * 0x26e8d834 +
                 (uVar19 & uVar28) * 0x81672148 +
                 ((uVar25 | uVar30) & (uint64_t)puStack_b0) * lStack_c0 +
                 (uVar36 ^ uVar21) * 0x5a7e4914 +
                 (uint64_t)(uVar29 & (uint32_t)uVar19) * -0x2005a7e516a +
                 (uint64_t)((uint32_t)uVar19 & uVar26) * 0x20000000857 +
                 (uVar19 ^ (uVar25 | uVar30)) * 0x1ff7e98e70e + (uVar19 & uVar18) * 0x1ff7e98e70f +
                 ((uint64_t)puStack_b0 & uVar28) * -0x5a7e4914 +
                 (uVar18 & (uint64_t)puStack_b0) * -0x1ffa581bf41 ^
                 (uVar14 << 0x18 | uVar14 >> 0x28);
        uVar19 = (uVar19 << 0x30 | uVar19 >> 0x10) ^ (uVar19 << 0x10 | uVar19 >> 0x30) ^ uVar19;
      }
      else if (uStack_c4 == 5) {
        uVar19 = (uint64_t)(uint32_t)bStack_101;
        uVar30 = param_1 >> 0x35 ^ param_1;
        uVar19 = (uVar19 ^ uVar30) * -0x1ab7369 +
                 (~uVar19 | uVar30) * -0x50eb59bc + (~uVar30 | uVar19) * -0x1ab7369 +
                 (uint64_t)((uint32_t)~uVar30 & (uint32_t)bStack_101) * -0x4f3fe653;
        FUN_7fffa5194b50((int64_t)puVar22 + 0x4f547d63,
                         (uVar30 << 0x1c | param_1 >> 0x24) ^ (uVar30 << 7 | param_1 >> 0x39) ^
                         uVar30);
        uVar19 = uVar19 ^ 0xffffffffd9381e6c;
      }
      else {
        puStack_b0 = (uint64_t *)
                     (((uint64_t)puVar22 ^ 0xf4a1d15d) >> 5 ^ (uint64_t)puVar22 ^ 0xf4a1d15d);
        uVar14 = ~uStack_110;
        uVar18 = uStack_110 & 0xfffffdffa581ae95;
        uVar30 = uVar18 & (uint64_t)param_4;
        uVar19 = ~(uint64_t)param_4;
        uStack_e8 = (uVar14 ^ 0x2005a7e516a) & uVar19;
        lStack_c0 = (int64_t)param_4 + uVar18;
        uVar28 = uVar19 | uStack_110 & 0x2005a7e516a;
        lVar13 = uStack_e8 - uVar28;
        lVar13 = FUN_7fffa5008340(uVar28,puVar3,lVar13,
                                  lVar13 * 0x6534dbda +
                                  ((uVar18 & uVar19) -
                                  ((uint64_t)param_4 & uVar14 & 0xfffffdffa581ae95)) * 0x18a25da4 +
                                  (uVar30 & 0xffffffff) * 0x16a8bbb0 +
                                  ((uVar30 >> 0x20) * 0x16a8bbb0 << 0x20) +
                                  ((uVar14 & 0xfffffdffa581ae95 & uVar19) +
                                  (uStack_110 & 0x2005a7e516a ^ (uint64_t)param_4)) * -0x4c927e36 +
                                  (uVar14 & 0x2005a7e516a ^ uVar19) * 0x18d21484 +
                                  (uVar14 & 0x2005a7e516a ^ (uint64_t)param_4) * 0x31747228 +
                                  uVar30 * -0x2f4b1954,(int64_t)&uStack_120 * 0x935015e3);
        uVar19 = lVar13 - 0x153598c5;
      }
      uVar28 = uVar38;
      if (uVar38 < uVar19) {
        uVar28 = uVar19;
      }
      uVar30 = (uint64_t)uStack_f4;
      if (uVar28 < 4) {
        *(uint32_t *)(param_1 + 300) =
             (uint32_t)(0x7ff < (uint64_t)((int64_t)puVar22 - (int64_t)puVar33));
        puVar22 = (uint64_t *)
                  ((int64_t)puVar22 + ((uint64_t)((int64_t)puVar22 - (int64_t)puVar33) >> 8) + 1
                  );
      }
      else {
        if (uVar38 < uVar19) {
          puVar17 = puVar22;
        }
        else {
          uStack_120 = 1;
          puVar17 = (uint64_t *)((int64_t)puVar22 + 1U);
        }
        puStack_b0 = (uint64_t *)((int64_t)puVar22 + 0xd);
        uVar26 = uStack_c4;
        do {
          puStack_1a0 = (uint64_t *)((int64_t)puVar22 + 1);
          if (uStack_120 == 0) {
            uVar19 = 0;
LAB_7fffa5131893:
            puVar20 = puVar17;
            uVar14 = uVar28;
          }
          else {
            if (((int)uVar30 == 0) ||
               (*(int *)puStack_1a0 != *(int *)((int64_t)puStack_1a0 + lVar35))) {
LAB_7fffa5131890:
              uVar19 = uStack_120;
              goto LAB_7fffa5131893;
            }
            puVar20 = (uint64_t *)((int64_t)puVar22 + lVar35 + 5);
            puVar23 = (uint64_t *)((int64_t)puVar22 + 5);
            uVar29 = (uint32_t)uStack_120;
            puVar12 = puVar23;
            if (puVar23 < puVar1) {
              puVar12 = puStack_b0;
              if (*puVar20 == *puVar23) {
LAB_7fffa5131770:
                if (puVar12 < puVar1) {
                  if (*(uint64_t *)((int64_t)puVar12 + lVar35) == *puVar12)
                  goto code_r0x7fffa5131786;
                  uVar31 = 0;
                  for (uVar19 = *(uint64_t *)((int64_t)puVar12 + lVar35) ^ *puVar12;
                      (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                    uVar31 = uVar31 + 1;
                  }
                  puVar12 = (uint64_t *)((int64_t)puVar12 + (uint64_t)(uVar31 >> 3));
                  goto LAB_7fffa5131830;
                }
                puVar20 = (uint64_t *)((int64_t)puVar12 + lVar35);
                goto joined_r0x7fffa51317a1;
              }
              uVar31 = 0;
              for (uVar19 = *puVar23 ^ *puVar20; (uVar19 & 1) == 0;
                  uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                uVar31 = uVar31 + 1;
              }
              uVar7 = 0x1f;
              if (uVar29 != 0) {
                for (; uVar29 >> uVar7 == 0; uVar7 = uVar7 - 1) {
                }
              }
              uVar38 = (uint64_t)(uVar31 >> 3);
            }
            else {
joined_r0x7fffa51317a1:
              if ((puVar12 < puStack_d0) && ((int)*puVar20 == (int)*puVar12)) {
                puVar12 = (uint64_t *)((int64_t)puVar12 + 4);
                puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
              }
              if ((puVar12 < puStack_f0) && ((short)*puVar20 == (short)*puVar12)) {
                puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
                puVar12 = (uint64_t *)((int64_t)puVar12 + 2);
              }
              if (puVar12 < puVar3) {
                puVar12 = (uint64_t *)
                          ((int64_t)puVar12 + (uint64_t)((char)*puVar20 == (char)*puVar12));
              }
LAB_7fffa5131830:
              uVar38 = (int64_t)puVar12 - (int64_t)puVar23;
              if (0xfffffffffffffffb < uVar38) goto LAB_7fffa5131890;
              uVar7 = 0x1f;
              if (uVar29 != 0) {
                for (; uVar29 >> uVar7 == 0; uVar7 = uVar7 - 1) {
                }
              }
            }
            uVar19 = 1;
            puVar20 = puStack_1a0;
            uVar14 = uVar38 + 4;
            if ((int)(uVar38 + 4) * 3 <= (int)((uVar7 ^ 0x1f) + (int)uVar28 * 3 + -0x1e))
            goto LAB_7fffa5131890;
          }
          uStack_120 = 999999999;
          if (4 < (int)uVar26) {
            if (5 < (int)uVar26) {
              lVar13 = FUN_7fffa5008340((uint64_t)puStack_1a0 ^ 0xf4a1d15d,puVar3,0,0x33c069b2,
                                        (int64_t)&uStack_120 * 0x935015e3);
              uVar28 = lVar13 - 0x153598c5;
              goto joined_r0x7fffa5131b94;
            }
            uVar38 = param_1 >> 0x35 ^ param_1;
            uVar28 = 0x5296cd25;
            FUN_7fffa5194b50((int *)((int64_t)puVar22 + 0x4f547d64),
                             (uVar38 << 7 | param_1 >> 0x39) ^ (uVar38 << 0x1c | param_1 >> 0x24) ^
                             uVar38);
            uVar28 = uVar28 ^ 0xffffffffd9381e6c;
            if (3 < uVar28) goto LAB_7fffa5131ca6;
LAB_7fffa5131da0:
            uStack_120 = uVar19;
            puStack_1a0 = puVar20;
            uVar28 = uVar14;
            uVar31 = (uint32_t)uVar30;
            uVar29 = uStack_9c;
            break;
          }
          uVar38 = ((~uStack_90 ^ uVar24 | uVar34) + ((uVar24 ^ uStack_90) & ~uVar34)) * 0x201dcac7
                   + ((uVar24 | uStack_90) ^ ~uVar34) * -0x7e40be57 +
                     (uVar34 ^ (uVar24 | uStack_90)) * -0x7e40be57;
          FUN_7fffa4a8a930(((int64_t)puVar3 * 0x1000 | (uint64_t)puVar3 >> 0x34) ^
                           ((int64_t)puVar3 << 0x36 | (uint64_t)puVar3 >> 10) ^ (uint64_t)puVar3,
                           param_1,&uStack_120);
          uVar30 = uVar38 >> 0x27 ^ uVar38;
          uVar30 = (uVar30 << 0x16 | uVar38 >> 0x2a) ^ (uVar30 << 10 | uVar38 >> 0x36) ^ uVar30;
          uVar30 = (uVar30 << 0x2c | uVar30 >> 0x14) ^ (uVar30 << 0x14 | uVar30 >> 0x2c) ^ uVar30;
          uVar30 = (uVar30 << 0x28 | uVar30 >> 0x18) ^ (uVar30 << 0x18 | uVar30 >> 0x28) ^ uVar30;
          uVar30 = (uVar30 << 0x30 | uVar30 >> 0x10) ^ (uVar30 << 0x10 | uVar30 >> 0x30) ^ uVar30;
          uVar30 = (uVar30 << 0x1a | uVar30 >> 0x26) ^ (uVar30 << 0x36 | uVar30 >> 10) ^ uVar30;
          uVar30 = (uVar30 << 0x34 | uVar30 >> 0xc) ^ (uVar30 << 0x2c | uVar30 >> 0x14) ^ uVar30;
          uVar38 = (uVar30 << 0x28 | uVar30 >> 0x18) ^ uVar30 ^ (uVar30 << 0x18 | uVar30 >> 0x28);
          uVar30 = (uint64_t)uStack_f4;
          uVar28 = uVar38 ^ (uVar38 << 0x10 | uVar38 >> 0x30) ^ (uVar38 << 0x30 | uVar38 >> 0x10);
          uVar26 = uStack_c4;
joined_r0x7fffa5131b94:
          if (uVar28 < 4) goto LAB_7fffa5131da0;
LAB_7fffa5131ca6:
          uVar29 = 0x1f;
          if ((uint32_t)uVar19 != 0) {
            for (; (uint32_t)uVar19 >> uVar29 == 0; uVar29 = uVar29 - 1) {
            }
          }
          iVar15 = 0x1f;
          if ((uint32_t)uStack_120 != 0) {
            for (; (uint32_t)uStack_120 >> iVar15 == 0; iVar15 = iVar15 + -1) {
            }
          }
          if ((int)uVar28 * 4 - iVar15 <= (int)((uVar29 ^ 0x1f) + (int)uVar14 * 4 + -0x1b))
          goto LAB_7fffa5131da0;
          puStack_b0 = (uint64_t *)((int64_t)puStack_b0 + 1);
          puVar22 = puStack_1a0;
          puVar17 = puStack_1a0;
          uVar31 = (uint32_t)uVar30;
          uVar29 = uStack_9c;
        } while (puStack_1a0 < puVar16);
        uStack_9c = uVar31;
        if (uStack_120 < 4) {
          uStack_9c = uVar29;
        }
        else {
          if ((puVar33 < puStack_1a0) && (uVar27 < (int64_t)puStack_1a0 + (3 - uStack_120))) {
            for (; *(char *)((int64_t)puStack_1a0 - 1) ==
                   *(char *)((int64_t)puStack_1a0 + (2 - uStack_120));
                puStack_1a0 = (uint64_t *)((int64_t)puStack_1a0 - 1U)) {
              if (((uint64_t *)((int64_t)puStack_1a0 - 1U) <= puVar33) ||
                 ((int64_t)puStack_1a0 + (2 - uStack_120) <= uVar27)) {
                uVar28 = uVar28 + 1;
                puStack_1a0 = (uint64_t *)((int64_t)puStack_1a0 - 1);
                break;
              }
              uVar28 = uVar28 + 1;
            }
          }
          uVar30 = (uint64_t)((int)uStack_120 - 3);
        }
        uVar19 = (int64_t)puStack_1a0 - (int64_t)puVar33;
        puVar22 = (uint64_t *)plStack_100[3];
        if (puVar2 < puStack_1a0) {
          puVar17 = puVar22;
          if (puVar33 <= puVar2) {
            puVar17 = (uint64_t *)((int64_t)puVar22 + ((int64_t)puVar2 - (int64_t)puVar33));
            uVar38 = puVar33[1];
            *puVar22 = *puVar33;
            puVar22[1] = uVar38;
            if (0x10 < (int64_t)puVar2 - (int64_t)puVar33) {
              puVar22 = puVar22 + 6;
              while( true ) {
                uVar38 = puVar33[3];
                puVar22[-4] = puVar33[2];
                puVar22[-3] = uVar38;
                uVar38 = puVar33[5];
                puVar22[-2] = puVar33[4];
                puVar22[-1] = uVar38;
                if (puVar17 <= puVar22) break;
                puVar22 = puVar22 + 4;
                puVar33 = puVar33 + 4;
              }
            }
            puVar33 = puVar2;
          }
          if (puVar33 < puStack_1a0) {
            uVar38 = (int64_t)puStack_1a0 - (int64_t)puVar33;
            if ((3 < uVar38) && (0x1f < (uint64_t)((int64_t)puVar17 - (int64_t)puVar33))) {
              if (uVar38 < 0x20) {
                uVar14 = 0;
              }
              else {
                uVar14 = uVar38 & 0xffffffffffffffe0;
                uVar18 = 0;
                do {
                  uVar8 = *(uint64_t *)((int64_t)puVar33 + uVar18);
                  uVar9 = ((uint64_t *)((int64_t)puVar33 + uVar18))[1];
                  puVar4 = (uint64_t *)((int64_t)puVar33 + uVar18 + 0x10);
                  uVar10 = puVar4[1];
                  puVar6 = (uint64_t *)((int64_t)puVar17 + uVar18 + 0x10);
                  *puVar6 = *puVar4;
                  puVar6[1] = uVar10;
                  *(uint64_t *)((int64_t)puVar17 + uVar18) = uVar8;
                  ((uint64_t *)((int64_t)puVar17 + uVar18))[1] = uVar9;
                  uVar18 = uVar18 + 0x20;
                } while (uVar14 != uVar18);
                if (uVar38 == uVar14) goto LAB_7fffa5132140;
                if ((uVar38 & 0x1c) == 0) {
                  puVar17 = (uint64_t *)((int64_t)puVar17 + uVar14);
                  puVar33 = (uint64_t *)((int64_t)puVar33 + uVar14);
                  goto LAB_7fffa5132084;
                }
              }
              uVar18 = uVar38 & 0xfffffffffffffffc;
              for (; *(uint32_t *)((int64_t)puVar17 + uVar14) =
                          *(uint32_t *)((int64_t)puVar33 + uVar14), uVar18 - 4 != uVar14;
                  uVar14 = uVar14 + 4) {
              }
              if (uVar38 == uVar18) goto LAB_7fffa5132140;
              puVar33 = (uint64_t *)((int64_t)puVar33 + uVar18);
              puVar17 = (uint64_t *)((int64_t)puVar17 + uVar18);
            }
LAB_7fffa5132084:
            uVar26 = (int)puStack_1a0 - (int)puVar33 & 7;
            uVar38 = (uint64_t)uVar26;
            puVar20 = puVar17;
            puVar22 = puVar33;
            if (uVar26 == 0) {
              puVar12 = puVar33;
            }
            else {
              do {
                uVar38 = uVar38 - 1;
                puVar17 = (uint64_t *)((int64_t)puVar20 + 1);
                *(char *)puVar20 = (char)*puVar22;
                puVar12 = (uint64_t *)((int64_t)puVar22 + 1);
                puVar20 = puVar17;
                puVar22 = (uint64_t *)((int64_t)puVar22 + 1);
              } while (uVar38 != 0);
            }
            if ((uint64_t)((int64_t)puVar33 - (int64_t)puStack_1a0) < 0xfffffffffffffff9) {
              lVar35 = 0;
              do {
                *(uint8_t *)((int64_t)puVar17 + lVar35) =
                     *(uint8_t *)((int64_t)puVar12 + lVar35);
                *(uint8_t *)((int64_t)puVar17 + lVar35 + 1) =
                     *(uint8_t *)((int64_t)puVar12 + lVar35 + 1);
                *(uint8_t *)((int64_t)puVar17 + lVar35 + 2) =
                     *(uint8_t *)((int64_t)puVar12 + lVar35 + 2);
                *(uint8_t *)((int64_t)puVar17 + lVar35 + 3) =
                     *(uint8_t *)((int64_t)puVar12 + lVar35 + 3);
                *(uint8_t *)((int64_t)puVar17 + lVar35 + 4) =
                     *(uint8_t *)((int64_t)puVar12 + lVar35 + 4);
                *(uint8_t *)((int64_t)puVar17 + lVar35 + 5) =
                     *(uint8_t *)((int64_t)puVar12 + lVar35 + 5);
                *(uint8_t *)((int64_t)puVar17 + lVar35 + 6) =
                     *(uint8_t *)((int64_t)puVar12 + lVar35 + 6);
                *(uint8_t *)((int64_t)puVar17 + lVar35 + 7) =
                     *(uint8_t *)((int64_t)puVar12 + lVar35 + 7);
                lVar13 = lVar35 + 8;
                lVar35 = lVar35 + 8;
              } while ((uint64_t *)((int64_t)puVar12 + lVar13) != puStack_1a0);
            }
          }
LAB_7fffa5132140:
          plStack_100[3] = plStack_100[3] + uVar19;
          lVar13 = plStack_100[1];
          if (0xffff < uVar19) {
            *(uint32_t *)(plStack_100 + 9) = 1;
            *(int *)((int64_t)plStack_100 + 0x4c) = (int)((uint64_t)(lVar13 - *plStack_100) >> 3);
          }
        }
        else {
          uVar38 = puVar33[1];
          *puVar22 = *puVar33;
          puVar22[1] = uVar38;
          lVar35 = plStack_100[3];
          if (0x10 < uVar19) {
            uVar38 = puVar33[3];
            *(uint64_t *)(lVar35 + 0x10) = puVar33[2];
            *(uint64_t *)(lVar35 + 0x18) = uVar38;
            if (0x20 < (int64_t)uVar19) {
              lVar13 = 0;
              do {
                puVar6 = (uint64_t *)((int64_t)puVar33 + lVar13 + 0x20);
                uVar8 = puVar6[1];
                puVar4 = (uint64_t *)(lVar35 + 0x20 + lVar13);
                *puVar4 = *puVar6;
                puVar4[1] = uVar8;
                puVar4 = (uint64_t *)((int64_t)puVar33 + lVar13 + 0x30);
                uVar8 = puVar4[1];
                puVar6 = (uint64_t *)(lVar35 + 0x30 + lVar13);
                *puVar6 = *puVar4;
                puVar6[1] = uVar8;
                lVar5 = lVar35 + 0x20 + lVar13;
                lVar13 = lVar13 + 0x20;
              } while (lVar5 + 0x20U < lVar35 + uVar19);
            }
            goto LAB_7fffa5132140;
          }
          lVar13 = plStack_100[1];
          plStack_100[3] = lVar35 + uVar19;
        }
        *(short *)(lVar13 + 4) = (short)uVar19;
        *(int *)plStack_100[1] = (int)uStack_120;
        if (0xffff < uVar28 - 3) {
          *(uint32_t *)(plStack_100 + 9) = 2;
          *(int *)((int64_t)plStack_100 + 0x4c) =
               (int)((uint64_t)(plStack_100[1] - *plStack_100) >> 3);
        }
        *(short *)(plStack_100[1] + 6) = (short)(uVar28 - 3);
        plStack_100[1] = plStack_100[1] + 8;
        if (*(int *)(param_1 + 300) != 0) {
          *(uint32_t *)(param_1 + 300) = 0;
        }
        puVar33 = (uint64_t *)((int64_t)puStack_1a0 + uVar28);
        puVar22 = puVar33;
        if ((uStack_9c != 0) && (puVar33 <= puVar16)) {
          uVar19 = uVar30;
          uVar26 = uStack_9c;
          do {
            uVar30 = (uint64_t)uVar26;
            uStack_9c = (uint32_t)uVar19;
            if ((int)*puVar33 != *(int *)((int64_t)puVar33 - uVar30)) {
              puVar22 = puVar33;
              uVar30 = uVar19;
              uStack_9c = uVar26;
              break;
            }
            lVar35 = -uVar30;
            puVar22 = (uint64_t *)((int64_t)puVar33 + 4);
            puVar20 = (uint64_t *)((int64_t)puVar33 + lVar35 + 4);
            puVar17 = puVar22;
            if (puVar22 < puVar1) {
              if (*puVar20 == *puVar22) {
                lVar13 = 0;
                do {
                  puVar17 = (uint64_t *)((int64_t)puVar33 + lVar13 + 0xc);
                  if (puVar1 <= puVar17) {
                    puVar20 = (uint64_t *)((int64_t)puVar33 + lVar35 + lVar13 + 0xc);
                    puVar17 = (uint64_t *)((int64_t)puVar33 + lVar13 + 0xc);
                    goto joined_r0x7fffa5132280;
                  }
                  uVar19 = *puVar17;
                  uVar38 = *(uint64_t *)((int64_t)puVar33 + lVar13 + lVar35 + 0xc);
                  lVar13 = lVar13 + 8;
                } while (uVar38 == uVar19);
                uVar26 = 0;
                for (uVar38 = uVar38 ^ uVar19; (uVar38 & 1) == 0;
                    uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                  uVar26 = uVar26 + 1;
                }
                uVar19 = (uint64_t)(uVar26 >> 3) + lVar13;
              }
              else {
                uVar26 = 0;
                for (uVar19 = *puVar20 ^ *puVar22; (uVar19 & 1) == 0;
                    uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                  uVar26 = uVar26 + 1;
                }
                uVar19 = (uint64_t)(uVar26 >> 3);
              }
            }
            else {
joined_r0x7fffa5132280:
              if ((puVar17 < puStack_d0) && ((int)*puVar20 == (int)*puVar17)) {
                puVar17 = (uint64_t *)((int64_t)puVar17 + 4);
                puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
              }
              if ((puVar17 < puStack_f0) && ((short)*puVar20 == (short)*puVar17)) {
                puVar17 = (uint64_t *)((int64_t)puVar17 + 2);
                puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
              }
              if (puVar17 < puVar3) {
                puVar17 = (uint64_t *)
                          ((int64_t)puVar17 + (uint64_t)((char)*puVar20 == (char)*puVar17));
              }
              uVar19 = (int64_t)puVar17 - (int64_t)puVar22;
            }
            if (puVar33 <= puVar2) {
              uVar38 = puVar33[1];
              puVar22 = (uint64_t *)plStack_100[3];
              *puVar22 = *puVar33;
              puVar22[1] = uVar38;
            }
            *(uint16_t *)(plStack_100[1] + 4) = 0;
            *(uint32_t *)plStack_100[1] = 1;
            if (0xffff < uVar19 + 1) {
              *(uint32_t *)(plStack_100 + 9) = 2;
              *(int *)((int64_t)plStack_100 + 0x4c) =
                   (int)((uint64_t)(plStack_100[1] - *plStack_100) >> 3);
            }
            *(short *)(plStack_100[1] + 6) = (short)(uVar19 + 1);
            plStack_100[1] = plStack_100[1] + 8;
            puVar33 = (uint64_t *)((int64_t)puVar33 + uVar19 + 4);
            puVar22 = puVar33;
            if (puVar16 < puVar33) {
              break;
            }
            uVar19 = uVar30;
            uVar26 = uStack_9c;
          } while (uStack_9c != 0);
        }
      }
    } while (puVar22 < puVar16);
    param_3 = puStack_98;
  }
  if (uStack_114 <= uStack_b4) {
    uStack_114 = 0;
  }
  uVar29 = (uint32_t)uVar30;
  uVar26 = uStack_114;
  if (uVar29 != 0) {
    uVar26 = uStack_d4;
  }
  if (uStack_d4 <= uStack_b4) {
    uVar26 = uStack_114;
  }
  uVar31 = 0;
  if (uStack_b4 < uStack_d4) {
    uVar31 = uStack_d4;
  }
  if (uVar29 != 0) {
    uVar31 = uVar29;
  }
  *param_3 = uVar31;
  if (uStack_9c != 0) {
    uVar26 = uStack_9c;
  }
  param_3[1] = uVar26;
  return (int64_t)puVar3 - (int64_t)puVar33;
code_r0x7fffa5131786:
  puVar12 = puVar12 + 1;
  goto LAB_7fffa5131770;
}


// ============================================================================
// Function : FUN_7fffa51324e0  |  RVA: 0x9c24e0  |  Size: 863 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa51325b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa51324e0(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  int64_t lVar4;
  uint16_t uVar5;
  int64_t lVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint64_t unaff_R15;
  uint8_t bVar9;
  uint8_t bVar10;
  uint16_t uVar11;
  uint8_t bVar12;
  uint16_t uVar13;
  uint8_t bVar14;
  uint16_t uVar15;
  
  lVar4 = (unaff_R15 ^ 0xec1288a8) * -0x3942d718 + ~(unaff_R15 ^ 0xec1288a8) * -0x3942d718;
  uVar3 = (uint32_t)lVar4;
  uVar5 = 0xe5c5U - (short)lVar4 ^ 0x5f56;
  bVar2 = (uint8_t)lVar4;
  *(uint8_t *)((int64_t)(short)(uVar5 << 9 | uVar5 >> 7) + 0x7fffa4786204) = '\x18' - bVar2;
  uVar7 = uVar3 | 1;
  lVar6 = (int64_t)(int)(-0xf97301 << (bVar2 & 0x1f) | 0xff068cffU >> 0x20 - (bVar2 & 0x1f));
  *(uint64_t *)(lVar6 + 0x7fffa479522d) = 0;
  *(uint64_t *)(lVar6 + 0x7fffa4795235) = 0;
  *(uint64_t *)(lVar6 + 0x7fffa4795221) = 0;
  *(uint64_t *)(lVar6 + 0x7fffa4795229) = 0;
  *(uint32_t *)((int64_t)(int)(uVar7 * -0x1f4197b7) + 0x7fffa478daaf) = 0;
  uVar1 = rdtsc();
  lVar6 = (uVar1 & 0xffffffff00000000 | CONCAT44((int)(uVar7 * -0x1f4197b7) >> 0x1f,(int)uVar1)) *
          (lVar4 + 0xd2a8d02b27f3679) + 1;
  lVar4 = 3;
  while( true ) {
    lVar6 = lVar6 * 0xd2a8d02ebc20d91 + 1;
    *(char *)(lVar4 + (int64_t)(short)(0x499fU >> (bVar2 & 0xf) | 0x499f << 0x10 - (bVar2 & 0xf)) +
                      0x7fffa478b94b) = (char)((uint64_t)lVar6 >> 0x20);
    if (lVar4 == 0x3f) break;
    lVar6 = lVar6 * 0xd2a8d02ebc20d91 + 1;
    *(char *)(lVar4 + (int64_t)(int)(0x3941eb94 - uVar3) + 0x7fffa4794419) =
         (char)((uint64_t)lVar6 >> 0x20);
    lVar6 = lVar6 * 0xd2a8d02ebc20d91 + 1;
    *(char *)(lVar4 + (int64_t)(int)(0x394218cc - uVar3) + 0x7fffa47916e2) =
         (char)((uint64_t)lVar6 >> 0x20);
    uVar8 = uVar7 * -0x1e545b0f ^ 0x9f96b8aa;
    lVar6 = lVar6 * 0xd2a8d02ebc20d91 + 1;
    *(char *)(lVar4 + (int64_t)(int)(uVar8 << 0x1e | uVar8 >> 2) + 0x7fffa4790a0f) =
         (char)((uint64_t)lVar6 >> 0x20);
    lVar4 = lVar4 + 4;
  }
  lVar4 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(int)~(uVar3 + 0xc6bdc37a) + 0x7fffa478f33a) * 0x24924925 +
          0x24924925) * 7;
  uVar7 = *(uint32_t *)((int64_t)(short)((short)uVar7 * -0x50ee + -0x67c6) + 0x7fffa47889d4);
  if (~(uVar3 ^ 0xbc6424d6) < 0xf92d236f - uVar3) {
    uVar7 = uVar7 ^ (uint32_t)DAT_7fffa5784930;
  }
  else {
    bVar9 = (char)uVar7 * '|';
    bVar10 = (char)(uVar7 >> 8) * -0x70;
    bVar12 = (char)(uVar7 >> 0x10) * '4';
    bVar14 = (char)(uVar7 >> 0x18) * -0x18;
    uVar5 = (uint16_t)bVar9;
    uVar11 = (uint16_t)bVar10;
    uVar13 = (uint16_t)bVar12;
    uVar15 = (uint16_t)bVar14;
    uVar7 = CONCAT13((uVar15 != 0) * (uVar15 < 0x100) * bVar14 - (0xff < uVar15),
                     CONCAT12((uVar13 != 0) * (uVar13 < 0x100) * bVar12 - (0xff < uVar13),
                              CONCAT11((uVar11 != 0) * (uVar11 < 0x100) * bVar10 - (0xff < uVar11),
                                       (uVar5 != 0) * (uVar5 < 0x100) * bVar9 - (0xff < uVar5))));
  }
  *(uint32_t *)((uint64_t)(uint32_t)((int)((uint64_t)lVar4 >> 0x20) * 4) +
           (int64_t)(short)(0xa6a1U >> (bVar2 & 0xf) | -0x595f << 0x10 - (bVar2 & 0xf)) +
           0x7fffa478b707) = uVar7;
  *(char *)((int64_t)(int)((uVar3 ^ 0xc6b85b97) >> 3 | 0xe0000000) + 0x7fffa4790716) =
       (char)((uint64_t)lVar4 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5132840  |  RVA: 0x9c2840  |  Size: 18453 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5132840(void) {
    /* +0x9c2840 */ __asm { PUSH RBP }
    /* +0x9c2841 */ __asm { PUSH RSI }
    /* +0x9c2842 */ __asm { PUSH R15 }
    /* +0x9c2844 */ __asm { PUSH R12 }
    /* +0x9c2846 */ __asm { PUSH R14 }
    /* +0x9c2848 */ __asm { PUSH R13 }
    /* +0x9c284a */ __asm { PUSH RBX }
    /* +0x9c284b */ __asm { PUSH RDI }
    /* +0x9c284c */ __asm { SUB RSP,0x208 }
    /* +0x9c2853 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x9c285b */ __asm { MOVAPS xmmword ptr [RBP + 0x170],XMM10 }
    /* +0x9c2863 */ __asm { MOVDQA xmmword ptr [RBP + 0x160],XMM8 }
    /* +0x9c286c */ __asm { MOVDQA xmmword ptr [RBP + 0x150],XMM12 }
    /* +0x9c2875 */ __asm { MOVDQA xmmword ptr [RBP + 0x140],XMM15 }
    /* +0x9c287e */ __asm { MOVAPS xmmword ptr [RBP + 0x130],XMM6 }
    /* +0x9c2885 */ __asm { MOVDQA xmmword ptr [RBP + 0x120],XMM7 }
    /* +0x9c288d */ __asm { MOVDQA xmmword ptr [RBP + 0x110],XMM11 }
    /* +0x9c2896 */ __asm { MOVAPS xmmword ptr [RBP + 0x100],XMM9 }
    /* +0x9c289e */ __asm { MOVAPS xmmword ptr [RBP + 0xf0],XMM13 }
    /* +0x9c28a6 */ __asm { MOVAPS xmmword ptr [RBP + 0xe0],XMM14 }
    /* +0x9c28ae */ __asm { MOV qword ptr [RBP + 0xd8],-0x2 }
    /* +0x9c28b9 */ __asm { PUSHFQ }
    /* +0x9c28ba */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x9c28c2 */ __asm { POPFQ }
    /* +0x9c28c3 */ __asm { MOV EBX,ECX }
    /* +0x9c28c5 */ __asm { MOV dword ptr [RBP + 0x70],0xf023afa0 }
    /* +0x9c28cc */ __asm { MOV R9D,dword ptr [RBP + 0x70] }
    /* +0x9c28d0 */ __asm { MOV R9D,0xa56ccc20 }
    /* +0x9c28d6 */ __asm { IMUL R9D,R9D,-0x59da0b1f }
    /* +0x9c28dd */ __asm { ROL R9D,0x1e }
    /* +0x9c28e1 */ __asm { ADD R9D,ECX }
    /* +0x9c28e4 */ __asm { MOV dword ptr [RBP + 0x70],R9D }
    /* +0x9c28e8 */ __asm { MOV R9D,dword ptr [RBP + 0x70] }
    /* +0x9c28ec */ __asm { MOV R9D,0x53f12ba5 }
    /* +0x9c28f2 */ __asm { ADD R9D,0x34e3f92f }
    /* +0x9c28f9 */ __asm { ROL R9D,CL }
    /* +0x9c28fc */ __asm { OR EBX,0x1 }
    /* +0x9c28ff */ __asm { IMUL R9D,R9D,-0x3e13ad71 }
    /* +0x9c2906 */ __asm { MOV dword ptr [RBP + 0x70],R9D }
    /* +0x9c290a */ __asm { MOV R9D,dword ptr [RBP + 0x70] }
    /* +0x9c290e */ __asm { MOV RAX,0x2d05ddcc6c609094 }
    /* +0x9c2918 */ __asm { LEA R11,[RBP + 0x70] }
    /* +0x9c291c */ __asm { MOV R9,-0x7c9a946e3deb3da2 }
    /* +0x9c2926 */ __asm { MOV R8W,0x8f87 }
    /* +0x9c292b */ __asm { MOV R10,-0x7c9a946e51875990 }
    /* +0x9c2935 */ __asm { MOV RDX,0x1f36b4bc0d13e4e3 }
    /* +0x9c293f */ __asm { IMUL R8D,EBX }
    /* +0x9c2943 */ __asm { ADD R8D,0xffffb911 }
    /* +0x9c294a */ __asm { MOVZX R8D,R8W }
    /* +0x9c294e */ __asm { MOV qword ptr [RBP + 0x58],R9 }
    /* +0x9c2952 */ __asm { MOV qword ptr [RBP + 0x50],RAX }
    /* +0x9c2956 */ __asm { MOVAPS XMM5,xmmword ptr [RBP + 0x50] }
    /* +0x9c295a */ __asm { MOV qword ptr [RBP + 0x78],R10 }
    /* +0x9c295e */ __asm { MOV qword ptr [RBP + 0x70],RDX }
    /* +0x9c2962 */ __asm { XORPS XMM5,xmmword ptr [R11] }
    /* +0x9c2966 */ __asm { MOVAPS xmmword ptr [RBP + 0x50],XMM5 }
    /* +0x9c296a */ __asm { MOV R11,qword ptr GS:[R8] }
    /* +0x9c296e */ __asm { MOV R8W,0xc709 }
    /* +0x9c2973 */ __asm { ADD R8D,0xffffe49f }
    /* +0x9c297a */ __asm { IMUL R8D,EBX }
    /* +0x9c297e */ __asm { LEA R9,[0x7fffa4789da7] }
    /* +0x9c2985 */ __asm { MOVD XMM9,ECX }
    /* +0x9c298a */ __asm { MOVSX RAX,R8W }
    /* +0x9c298e */ __asm { MOV R11,qword ptr [R11 + 0x48] }
    /* +0x9c2992 */ __asm { MOV R8W,0x80ba }
    /* +0x9c2997 */ __asm { MOVD XMM5,R8D }
    /* +0x9c299c */ __asm { PADDW XMM5,XMM9 }
    /* +0x9c29a1 */ __asm { MOVD R8D,XMM5 }
    /* +0x9c29a6 */ __asm { IMUL R8D,R8D,0x271 }
    /* +0x9c29ad */ __asm { ROL R8W,0x8 }
    /* +0x9c29b2 */ __asm { MOVSX RDX,R8W }
    /* +0x9c29b6 */ __asm { MOVZX EDX,uint8_t ptr [R9 + RDX*0x1 + 0x10] }
    /* +0x9c29bc */ __asm { LEA R9,[0x7fffa4785712] }
    /* +0x9c29c3 */ __asm { ADD R9,RAX }
    /* +0x9c29c6 */ __asm { MOVZX R10D,uint8_t ptr [R9 + RDX*0x8 + 0x1f] }
    /* +0x9c29cc */ __asm { NOT R10B }
    /* +0x9c29cf */ __asm { ROL R10B,0x1 }
    /* +0x9c29d2 */ __asm { MOV uint8_t ptr [RBP + 0x73],R10B }
    /* +0x9c29d6 */ __asm { MOVZX EAX,uint8_t ptr [R9 + RDX*0x8 + 0x1c] }
    /* +0x9c29dc */ __asm { MOVZX R10D,uint8_t ptr [R9 + RDX*0x8 + 0x20] }
    /* +0x9c29e2 */ __asm { NOT AL }
    /* +0x9c29e4 */ __asm { ROL AL,0x1 }
    /* +0x9c29e6 */ __asm { NOT R10B }
    /* +0x9c29e9 */ __asm { ROL R10B,0x1 }
    /* +0x9c29ec */ __asm { MOV uint8_t ptr [RBP + 0x70],AL }
    /* +0x9c29ef */ __asm { MOVZX EAX,uint8_t ptr [R9 + RDX*0x8 + 0x23] }
    /* +0x9c29f5 */ __asm { NOT AL }
    /* +0x9c29f7 */ __asm { ROL AL,0x1 }
    /* +0x9c29f9 */ __asm { MOV uint8_t ptr [RBP + 0x77],AL }
    /* +0x9c29fc */ __asm { MOVZX EAX,uint8_t ptr [R9 + RDX*0x8 + 0x21] }
    /* +0x9c2a02 */ __asm { NOT AL }
    /* +0x9c2a04 */ __asm { ROL AL,0x1 }
    /* +0x9c2a06 */ __asm { MOV uint8_t ptr [RBP + 0x75],AL }
    /* +0x9c2a09 */ __asm { MOVZX EAX,uint8_t ptr [R9 + RDX*0x8 + 0x1e] }
    /* +0x9c2a0f */ __asm { MOVZX R8D,uint8_t ptr [R9 + RDX*0x8 + 0x22] }
    /* +0x9c2a15 */ __asm { NOT R8B }
    /* +0x9c2a18 */ __asm { ROL R8B,0x1 }
    /* +0x9c2a1b */ __asm { MOV uint8_t ptr [RBP + 0x76],R8B }
    /* +0x9c2a1f */ __asm { MOVZX R9D,uint8_t ptr [R9 + RDX*0x8 + 0x1d] }
    /* +0x9c2a25 */ __asm { NOT R9B }
    /* +0x9c2a28 */ __asm { MOV uint8_t ptr [RBP + 0x74],R10B }
    /* +0x9c2a2c */ __asm { ROL R9B,0x1 }
    /* +0x9c2a2f */ __asm { MOV uint8_t ptr [RBP + 0x71],R9B }
    /* +0x9c2a33 */ __asm { NOT AL }
    /* +0x9c2a35 */ __asm { ROL AL,0x1 }
    /* +0x9c2a37 */ __asm { MOV uint8_t ptr [RBP + 0x72],AL }
    /* +0x9c2a3a */ __asm { CMP R11,qword ptr [RBP + 0x70] }
    /* +0x9c2a3e */ __asm { JZ 0x7fffa5132a4a }
    /* +0x9c2a40 */ __asm { MOV qword ptr [RBP + 0x48],0x0 }
    /* +0x9c2a48 */ __asm { JMP 0x7fffa5132ac2 }
    /* +0x9c2a4a */ __asm { MOV R9D,0xb96dec5c }
    /* +0x9c2a50 */ __asm { MOVD XMM5,R9D }
    /* +0x9c2a55 */ __asm { PSUBD XMM5,XMM9 }
    /* +0x9c2a5a */ __asm { MOVD R8D,XMM5 }
    /* +0x9c2a5f */ __asm { ADD R8D,0x411e114d }
    /* +0x9c2a66 */ __asm { ROL R8D,0x7 }
    /* +0x9c2a6a */ __asm { MOV R11,qword ptr [R8] }
    /* +0x9c2a6d */ __asm { MOV R8D,0x56380ad4 }
    /* +0x9c2a73 */ __asm { XOR R8D,0x4604b944 }
    /* +0x9c2a7a */ __asm { ROL R8D,0xd }
    /* +0x9c2a7e */ __asm { ADD R8D,ECX }
    /* +0x9c2a81 */ __asm { MOV R9,qword ptr [R8] }
    /* +0x9c2a84 */ __asm { LEA RAX,[0x7fffa479568c] }
    /* +0x9c2a8b */ __asm { MOV R8D,0x4073fc79 }
    /* +0x9c2a91 */ __asm { ADD R8D,ECX }
    /* +0x9c2a94 */ __asm { ROL R8D,0x7 }
    /* +0x9c2a98 */ __asm { MOVSXD RDX,R8D }
    /* +0x9c2a9b */ __asm { MOV R8,qword ptr [RAX + RDX*0x1] }
    /* +0x9c2a9f */ __asm { TEST R8,R8 }
    /* +0x9c2aa2 */ __asm { JZ 0x7fffa5132aa9 }
    /* +0x9c2aa4 */ __asm { MOV R8,qword ptr [R8] }
    /* +0x9c2aa7 */ __asm { JMP 0x7fffa5132aac }
    /* +0x9c2aa9 */ __asm { XOR R8D,R8D }
    /* +0x9c2aac */ __asm { ADD R8,R9 }
    /* +0x9c2aaf */ __asm { MOVQ XMM5,R11 }
    /* +0x9c2ab4 */ __asm { MOVQ XMM0,R8 }
    /* +0x9c2ab9 */ __asm { PSUBQ XMM5,XMM0 }
    /* +0x9c2abd */ __asm { MOVQ qword ptr [RBP + 0x48],XMM5 }
    /* +0x9c2ac2 */ __asm { MOV R9D,0x7f4627df }
    /* +0x9c2ac8 */ __asm { LEA R11,[0x7fffa47c96a6] }
    /* +0x9c2acf */ __asm { XOR R9D,0x96cd0ac1 }
    /* +0x9c2ad6 */ __asm { MOV R8D,0x619ef105 }
    /* +0x9c2adc */ __asm { XOR R8D,0x881593a0 }
    /* +0x9c2ae3 */ __asm { MOVD XMM5,R8D }
    /* +0x9c2ae8 */ __asm { LEA RAX,[0x7fffa47ccc2d] }
    /* +0x9c2aef */ __asm { MOV R8D,0x16f1fe2c }
    /* +0x9c2af5 */ __asm { ADD R8D,0x8001ffec }
    /* +0x9c2afc */ __asm { XOR R8D,ECX }
    /* +0x9c2aff */ __asm { MOV qword ptr [RBP + 0x68],RCX }
    /* +0x9c2b03 */ __asm { SUB R9D,ECX }
    /* +0x9c2b06 */ __asm { MOVSXD RDX,R9D }
    /* +0x9c2b09 */ __asm { LEA R9,[0x7fffa47c94a4] }
    /* +0x9c2b10 */ __asm { ROL R8D,0x9 }
    /* +0x9c2b14 */ __asm { MOVSXD R8,R8D }
    /* +0x9c2b17 */ __asm { ADD R8,R9 }
    /* +0x9c2b1a */ __asm { MOVZX EDX,uint8_t ptr [RAX + RDX*0x1 + 0x5] }
    /* +0x9c2b1f */ __asm { MOV R9,qword ptr [R8 + RDX*0x8 + 0xf] }
    /* +0x9c2b24 */ __asm { PSUBD XMM5,XMM9 }
    /* +0x9c2b29 */ __asm { MOVD R8D,XMM5 }
    /* +0x9c2b2e */ __asm { MOVSXD RDX,R8D }
    /* +0x9c2b31 */ __asm { XOR R9,qword ptr [R11 + RDX*0x1 + 0x3e] }
    /* +0x9c2b36 */ __asm { MOV qword ptr [RBP + 0x70],R9 }
    /* +0x9c2b3a */ __asm { MOV R14,qword ptr [RBP + 0x70] }
    /* +0x9c2b3e */ __asm { MOVD XMM5,EBX }
    /* +0x9c2b42 */ __asm { MOVDQA xmmword ptr [RBP + 0xb0],XMM5 }
    /* +0x9c2b4a */ __asm { TEST R14,R14 }
    /* +0x9c2b4d */ __asm { MOV dword ptr [RBP + 0x94],EBX }
    /* +0x9c2b53 */ __asm { JZ 0x7fffa513385f }
    /* +0x9c2b59 */ __asm { LEA RCX,[RBP + 0x50] }
    /* +0x9c2b5d */ __asm { XOR EDX,EDX }
    /* +0x9c2b5f */ __asm { MOV R8D,0x800 }
    /* +0x9c2b65 */ __asm { CALL R14 }
    /* +0x9c2b68 */ __asm { MOV R15,qword ptr [RBP + 0x68] }
    /* +0x9c2b6c */ __asm { MOVQ XMM5,R15 }
    /* +0x9c2b71 */ __asm { MOVDQA xmmword ptr [RBP + 0x30],XMM5 }
    /* +0x9c2b76 */ __asm { TEST RAX,RAX }
    /* +0x9c2b79 */ __asm { JZ 0x7fffa5132b84 }
    /* +0x9c2b7b */ __asm { MOV qword ptr [RBP + 0xc8],RAX }
    /* +0x9c2b82 */ __asm { JMP 0x7fffa5132ba7 }
    /* +0x9c2b84 */ __asm { LEA RCX,[RBP + 0x50] }
    /* +0x9c2b88 */ __asm { XOR EDX,EDX }
    /* +0x9c2b8a */ __asm { MOV R8D,0x1000 }
    /* +0x9c2b90 */ __asm { CALL R14 }
    /* +0x9c2b93 */ __asm { TEST RAX,RAX }
    /* +0x9c2b96 */ __asm { JZ 0x7fffa5133287 }
    /* +0x9c2b9c */ __asm { MOV qword ptr [RBP + 0xc8],RAX }
    /* +0x9c2ba3 */ __asm { MOV R15,qword ptr [RBP + 0x68] }
    /* +0x9c2ba7 */ __asm { LEA R11,[0x7fffa47bb378] }
    /* +0x9c2bae */ __asm { MOV EAX,0x17a22b14 }
    /* +0x9c2bb3 */ __asm { MOV CX,0xe6d8 }
    /* +0x9c2bb7 */ __asm { LEA R9,[0x7fffa47c17ee] }
    /* +0x9c2bbe */ __asm { MOV R8D,0x3cd22235 }
    /* +0x9c2bc4 */ __asm { ADD R8D,0x2be8f54d }
    /* +0x9c2bcb */ __asm { MOV R10W,0x398b }
    /* +0x9c2bd0 */ __asm { MOVD XMM5,R10D }
    /* +0x9c2bd5 */ __asm { MOVD XMM0,R15D }
    /* +0x9c2bda */ __asm { PXOR XMM0,XMM5 }
    /* +0x9c2bde */ __asm { MOVD XMM5,EAX }
    /* +0x9c2be2 */ __asm { MOVD EDX,XMM0 }
    /* +0x9c2be6 */ __asm { IMUL ECX,ECX,0xfd }
    /* +0x9c2bec */ __asm { LEA R10D,[R15 + RCX*0x1] }
    /* +0x9c2bf0 */ __asm { ADD R10D,0x7221 }
    /* +0x9c2bf7 */ __asm { MOVSX R10,R10W }
    /* +0x9c2bfb */ __asm { PADDD XMM5,XMM9 }
    /* +0x9c2c00 */ __asm { MOVD EAX,XMM5 }
    /* +0x9c2c04 */ __asm { XOR EAX,0xb1578690 }
    /* +0x9c2c09 */ __asm { CDQE }
    /* +0x9c2c0b */ __asm { IMUL R8D,EBX }
    /* +0x9c2c0f */ __asm { ROL DX,0x5 }
    /* +0x9c2c13 */ __asm { NOT EDX }
    /* +0x9c2c15 */ __asm { MOVSX RCX,DX }
    /* +0x9c2c19 */ __asm { ADD RCX,R11 }
    /* +0x9c2c1c */ __asm { MOVSX RDX,uint8_t ptr [R9 + R10*0x1 + 0x9] }
    /* +0x9c2c22 */ __asm { CMP R8,RAX }
    /* +0x9c2c25 */ __asm { MOVZX R11D,DL }
    /* +0x9c2c29 */ __asm { CMOVA R11,RDX }
    /* +0x9c2c2d */ __asm { MOVZX R9D,uint8_t ptr [RCX + R11*0x8 + 0x13] }
    /* +0x9c2c33 */ __asm { ROL R9B,0x3 }
    /* +0x9c2c37 */ __asm { MOVZX EDX,uint8_t ptr [RCX + R11*0x8 + 0x11] }
    /* +0x9c2c3d */ __asm { ROL DL,0x3 }
    /* +0x9c2c40 */ __asm { MOV uint8_t ptr [RBP + 0x74],R9B }
    /* +0x9c2c44 */ __asm { MOVZX R9D,uint8_t ptr [RCX + R11*0x8 + 0xf] }
    /* +0x9c2c4a */ __asm { MOVZX R10D,uint8_t ptr [RCX + R11*0x8 + 0x15] }
    /* +0x9c2c50 */ __asm { ROL R10B,0x3 }
    /* +0x9c2c54 */ __asm { ROL R9B,0x3 }
    /* +0x9c2c58 */ __asm { MOV uint8_t ptr [RBP + 0x70],R9B }
    /* +0x9c2c5c */ __asm { MOVZX R9D,uint8_t ptr [RCX + R11*0x8 + 0x14] }
    /* +0x9c2c62 */ __asm { ROL R9B,0x3 }
    /* +0x9c2c66 */ __asm { MOV uint8_t ptr [RBP + 0x75],R9B }
    /* +0x9c2c6a */ __asm { MOVZX R9D,uint8_t ptr [RCX + R11*0x8 + 0x12] }
    /* +0x9c2c70 */ __asm { ROL R9B,0x3 }
    /* +0x9c2c74 */ __asm { MOV uint8_t ptr [RBP + 0x73],R9B }
    /* +0x9c2c78 */ __asm { MOV uint8_t ptr [RBP + 0x76],R10B }
    /* +0x9c2c7c */ __asm { MOVZX R9D,uint8_t ptr [RCX + R11*0x8 + 0x10] }
    /* +0x9c2c82 */ __asm { MOV uint8_t ptr [RBP + 0x72],DL }
    /* +0x9c2c85 */ __asm { ROL R9B,0x3 }
    /* +0x9c2c89 */ __asm { MOV uint8_t ptr [RBP + 0x71],R9B }
    /* +0x9c2c8d */ __asm { MOVZX R9D,uint8_t ptr [RCX + R11*0x8 + 0x16] }
    /* +0x9c2c93 */ __asm { ROL R9B,0x3 }
    /* +0x9c2c97 */ __asm { MOV uint8_t ptr [RBP + 0x77],R9B }
    /* +0x9c2c9b */ __asm { MOV R8,qword ptr [RBP + 0x70] }
    /* +0x9c2c9f */ __asm { PUSHFQ }
    /* +0x9c2ca0 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x9c2ca8 */ __asm { POPFQ }
    /* +0x9c2ca9 */ __asm { MOV dword ptr [RBP + 0x70],0x1b264a56 }
    /* +0x9c2cb0 */ __asm { MOV R9D,dword ptr [RBP + 0x70] }
    /* +0x9c2cb4 */ __asm { CMP R9D,0x90dba0a2 }
    /* +0x9c2cbb */ __asm { NOP }
    /* +0x9c2cbc */ __asm { NOP }
    /* +0x9c2cbd */ __asm { NOP }
    /* +0x9c2cbe */ __asm { NOP }
    /* +0x9c2cbf */ __asm { NOP }
    /* +0x9c2cc0 */ __asm { TEST R8,R8 }
    /* +0x9c2cc3 */ __asm { JZ 0x7fffa51338ed }
    /* +0x9c2cc9 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x9c2cd0 */ __asm { MOV RAX,0x0 }
    /* +0x9c2cd7 */ __asm { NOP }
    /* +0x9c2cd8 */ __asm { MOV ECX,0x1 }
    /* +0x9c2cdd */ __asm { MOV R13,qword ptr [RBP + 0xc8] }
    /* +0x9c2ce4 */ __asm { MOV RDX,R13 }
    /* +0x9c2ce7 */ __asm { CALL R8 }
    /* +0x9c2cea */ __asm { MOV R10,R13 }
    /* +0x9c2ced */ __asm { MOV R13,qword ptr [RBP + 0x48] }
    /* +0x9c2cf1 */ __asm { TEST R13,R13 }
    /* +0x9c2cf4 */ __asm { MOV RCX,qword ptr [RBP + 0x68] }
    /* +0x9c2cf8 */ __asm { MOV qword ptr [RBP + 0xc8],R10 }
    /* +0x9c2cff */ __asm { JZ 0x7fffa5132da3 }
    /* +0x9c2d05 */ __asm { MOV R9D,0x1dbfd500 }
    /* +0x9c2d0b */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x9c2d12 */ __asm { NOP }
    /* +0x9c2d13 */ __asm { MOV RAX,0x0 }
    /* +0x9c2d1a */ __asm { IMUL R8D,R9D,0x79a866b3 }
    /* +0x9c2d21 */ __asm { NOT R8D }
    /* +0x9c2d24 */ __asm { ROR R8D,CL }
    /* +0x9c2d27 */ __asm { MOV R11,qword ptr [R8] }
    /* +0x9c2d2a */ __asm { MOV R9D,0x5cd53a7 }
    /* +0x9c2d30 */ __asm { ADD R9D,ECX }
    /* +0x9c2d33 */ __asm { IMUL R8D,R9D,0x89b9f4f }
    /* +0x9c2d3a */ __asm { MOV R9,qword ptr [R8] }
    /* +0x9c2d3d */ __asm { LEA R10,[0x7fffa47927ce] }
    /* +0x9c2d44 */ __asm { MOV R8D,0xf71c5d8f }
    /* +0x9c2d4a */ __asm { MOV EAX,0xf71b9d61 }
    /* +0x9c2d4f */ __asm { SUB EAX,R8D }
    /* +0x9c2d52 */ __asm { MOVSXD RDX,EAX }
    /* +0x9c2d55 */ __asm { MOV R8,qword ptr [R10 + RDX*0x1] }
    /* +0x9c2d59 */ __asm { TEST R8,R8 }
    /* +0x9c2d5c */ __asm { JZ 0x7fffa5132d63 }
    /* +0x9c2d5e */ __asm { MOV R8,qword ptr [R8] }
    /* +0x9c2d61 */ __asm { JMP 0x7fffa5132d66 }
    /* +0x9c2d63 */ __asm { XOR R8D,R8D }
    /* +0x9c2d66 */ __asm { LEA RAX,[0x7fffa47c4ec0] }
    /* +0x9c2d6d */ __asm { MOVQ XMM5,R13 }
    /* +0x9c2d72 */ __asm { MOV DX,0xdd01 }
    /* +0x9c2d76 */ __asm { MOVQ XMM0,R9 }
    /* +0x9c2d7b */ __asm { PADDQ XMM0,XMM5 }
    /* +0x9c2d7f */ __asm { MOVQ R9,XMM0 }
    /* +0x9c2d84 */ __asm { ADD R9,R8 }
    /* +0x9c2d87 */ __asm { SUB R11,R9 }
    /* +0x9c2d8a */ __asm { SUB EDX,ECX }
    /* +0x9c2d8c */ __asm { MOVSX RDX,DX }
    /* +0x9c2d90 */ __asm { XOR RDX,0x7e30 }
    /* +0x9c2d97 */ __asm { ADD.LOCK qword ptr [RAX + RDX*0x1],R11 }
    /* +0x9c2d9c */ __asm { MOV R10,qword ptr [RBP + 0xc8] }
    /* +0x9c2da3 */ __asm { TEST R10,R10 }
    /* +0x9c2da6 */ __asm { JZ 0x7fffa51331e0 }
    /* +0x9c2dac */ __asm { MOV R9D,0x10fe371a }
    /* +0x9c2db2 */ __asm { MOVD XMM5,R9D }
    /* +0x9c2db7 */ __asm { PSUBD XMM5,XMM9 }
    /* +0x9c2dbc */ __asm { MOVD R9D,XMM5 }
    /* +0x9c2dc1 */ __asm { ADD R9D,0xe0b44a93 }
    /* +0x9c2dc8 */ __asm { ROL R9D,0x1c }
    /* +0x9c2dcc */ __asm { MOV dword ptr [RBP + 0x70],R9D }
    /* +0x9c2dd0 */ __asm { MOV R9D,dword ptr [RBP + 0x70] }
    /* +0x9c2dd4 */ __asm { MOV R9W,0xc86f }
    /* +0x9c2dd9 */ __asm { SUB R9D,ECX }
    /* +0x9c2ddc */ __asm { ADD R9D,0x399a }
    /* +0x9c2de3 */ __asm { MOVZX R8D,R9W }
    /* +0x9c2de7 */ __asm { MOV R11,qword ptr GS:[R8] }
    /* +0x9c2deb */ __asm { MOV R8D,dword ptr [R10 + 0x3c] }
    /* +0x9c2def */ __asm { MOVQ XMM12,R10 }
    /* +0x9c2df4 */ __asm { ADD R8,R10 }
    /* +0x9c2df7 */ __asm { JZ 0x7fffa51340e0 }
    /* +0x9c2dfd */ __asm { MOV R9W,0xc3d3 }
    /* +0x9c2e02 */ __asm { XOR R9D,0xd7a8 }
    /* +0x9c2e09 */ __asm { ROR R9W,CL }
    /* +0x9c2e0d */ __asm { MOVZX EDX,R9W }
    /* +0x9c2e11 */ __asm { XOR RDX,0x3dba }
    /* +0x9c2e18 */ __asm { MOV R11,qword ptr GS:[RDX] }
    /* +0x9c2e1c */ __asm { MOV R11,qword ptr [R11 + 0xfe8] }
    /* +0x9c2e23 */ __asm { MOV R9W,0xae33 }
    /* +0x9c2e28 */ __asm { ADD R9D,0xffffb5d3 }
    /* +0x9c2e2f */ __asm { ROL R9W,0x6 }
    /* +0x9c2e34 */ __asm { XOR R9D,ECX }
    /* +0x9c2e37 */ __asm { MOVZX EDX,R9W }
    /* +0x9c2e3b */ __asm { MOV R9,qword ptr GS:[RDX] }
    /* +0x9c2e3f */ __asm { ADD R11,qword ptr [R9 + 0x370] }
    /* +0x9c2e46 */ __asm { ROL R11,0x21 }
    /* +0x9c2e4a */ __asm { MOV R9D,0xce6532fd }
    /* +0x9c2e50 */ __asm { XOR R9,R11 }
    /* +0x9c2e53 */ __asm { MOV R11,-0x21de002874374d5b }
    /* +0x9c2e5d */ __asm { CMP R9,R11 }
    /* +0x9c2e60 */ __asm { NOP }
    /* +0x9c2e61 */ __asm { NOP }
    /* +0x9c2e62 */ __asm { NOP }
    /* +0x9c2e63 */ __asm { NOP }
    /* +0x9c2e64 */ __asm { NOP }
    /* +0x9c2e65 */ __asm { MOV R11,qword ptr [R8 + 0x88] }
    /* +0x9c2e6c */ __asm { XOR ESI,ESI }
    /* +0x9c2e6e */ __asm { MOV R8D,0xffffffff }
    /* +0x9c2e74 */ __asm { AND R8,R11 }
    /* +0x9c2e77 */ __asm { MOV qword ptr [RBP + 0x98],R11 }
    /* +0x9c2e7e */ __asm { JZ 0x7fffa51340ff }
    /* +0x9c2e84 */ __asm { SHR R11,0x20 }
    /* +0x9c2e88 */ __asm { JZ 0x7fffa51340ff }
    /* +0x9c2e8e */ __asm { MOVD XMM5,R8D }
    /* +0x9c2e93 */ __asm { PADDQ XMM5,XMM12 }
    /* +0x9c2e98 */ __asm { PUSHFQ }
    /* +0x9c2e99 */ __asm { POP R8 }
    /* +0x9c2e9b */ __asm { TEST R8D,0x100 }
    /* +0x9c2ea2 */ __asm { NOP }
    /* +0x9c2ea3 */ __asm { NOP }
    /* +0x9c2ea4 */ __asm { NOP }
    /* +0x9c2ea5 */ __asm { NOP }
    /* +0x9c2ea6 */ __asm { NOP }
    /* +0x9c2ea7 */ __asm { NOP }
    /* +0x9c2ea8 */ __asm { NOP }
    /* +0x9c2ea9 */ __asm { NOP }
    /* +0x9c2eaa */ __asm { NOP }
    /* +0x9c2eab */ __asm { MOVQ R11,XMM5 }
    /* +0x9c2eb0 */ __asm { MOV dword ptr [RBP + 0x70],0xaa54569c }
    /* +0x9c2eb7 */ __asm { MOV R9D,dword ptr [RBP + 0x70] }
    /* +0x9c2ebb */ __asm { TEST R9D,R9D }
    /* +0x9c2ebe */ __asm { JNS 0x7fffa51340e4 }
    /* +0x9c2ec4 */ __asm { CMP dword ptr [R11 + 0x1c],0x0 }
    /* +0x9c2ec9 */ __asm { JZ 0x7fffa51340f2 }
    /* +0x9c2ecf */ __asm { CMP dword ptr [R11 + 0x20],0x0 }
    /* +0x9c2ed4 */ __asm { JZ 0x7fffa51340f2 }
    /* +0x9c2eda */ __asm { CMP dword ptr [R11 + 0x24],0x0 }
    /* +0x9c2edf */ __asm { JZ 0x7fffa51340f2 }
    /* +0x9c2ee5 */ __asm { MOV dword ptr [RBP + 0x70],0xb1676a98 }
    /* +0x9c2eec */ __asm { MOV R9D,dword ptr [RBP + 0x70] }
    /* +0x9c2ef0 */ __asm { MOVD XMM5,dword ptr [R11 + 0x1c] }
    /* +0x9c2ef6 */ __asm { PADDQ XMM5,XMM12 }
    /* +0x9c2efb */ __asm { MOVQ qword ptr [RBP + 0x48],XMM5 }
    /* +0x9c2f00 */ __asm { MOV dword ptr [RBP + 0x70],0x5d52e0ba }
    /* +0x9c2f07 */ __asm { MOV R9D,dword ptr [RBP + 0x70] }
    /* +0x9c2f0b */ __asm { CMP R9D,0xb5807139 }
    /* +0x9c2f12 */ __asm { JNC 0x7fffa5134104 }
    /* +0x9c2f18 */ __asm { MOVD XMM5,dword ptr [R11 + 0x20] }
    /* +0x9c2f1e */ __asm { PADDQ XMM5,XMM12 }
    /* +0x9c2f23 */ __asm { MOVQ RBX,XMM5 }
    /* +0x9c2f28 */ __asm { MOV dword ptr [RBP + 0x70],0x7c0c5dd9 }
    /* +0x9c2f2f */ __asm { MOV R9D,dword ptr [RBP + 0x70] }
    /* +0x9c2f33 */ __asm { MOVSXD R8,dword ptr [R11 + 0x24] }
    /* +0x9c2f37 */ __asm { MOV EDX,0x75f13972 }
    /* +0x9c2f3c */ __asm { MOV R9D,0x6c5ceb1a }
    /* +0x9c2f42 */ __asm { ADD EDX,0xaedc9a7e }
    /* +0x9c2f48 */ __asm { ROR EDX,CL }
    /* +0x9c2f4a */ __asm { MOV R12D,R8D }
    /* +0x9c2f4d */ __asm { ADD EDX,0xd06278dd }
    /* +0x9c2f53 */ __asm { IMUL R9D,R9D,-0x32f73a9b }
    /* +0x9c2f5a */ __asm { ROL R9D,CL }
    /* +0x9c2f5d */ __asm { MOVSXD R9,R9D }
    /* +0x9c2f60 */ __asm { CMP R9,RDX }
    /* +0x9c2f63 */ __asm { CMOVBE R12,R8 }
    /* +0x9c2f67 */ __asm { ADD R12,R10 }
    /* +0x9c2f6a */ __asm { MOV dword ptr [RBP + 0x70],0x8645c168 }
    /* +0x9c2f71 */ __asm { MOV R9D,dword ptr [RBP + 0x70] }
    /* +0x9c2f75 */ __asm { MOV EDI,dword ptr [R11 + 0x10] }
    /* +0x9c2f79 */ __asm { MOV ESI,dword ptr [R11 + 0x18] }
    /* +0x9c2f7d */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x9c2f84 */ __asm { NOP }
    /* +0x9c2f85 */ __asm { MOV RAX,0x0 }
    /* +0x9c2f8c */ __asm { MOV RCX,qword ptr [RBP + 0x98] }
    /* +0x9c2f93 */ __asm { MOVD XMM5,ECX }
    /* +0x9c2f97 */ __asm { MOV R8,RCX }
    /* +0x9c2f9a */ __asm { SHR R8,0x20 }
    /* +0x9c2f9e */ __asm { MOVD XMM0,R8D }
    /* +0x9c2fa3 */ __asm { PADDD XMM0,XMM5 }
    /* +0x9c2fa7 */ __asm { MOVD R13D,XMM0 }
    /* +0x9c2fac */ __asm { XOR R14D,R14D }
    /* +0x9c2faf */ __asm { MOV qword ptr [RBP + 0x20],0x0 }
    /* +0x9c2fb7 */ __asm { MOV RAX,qword ptr [RBP + 0xc8] }
    /* +0x9c2fbe */ __asm { JMP 0x7fffa5132fda }
    /* +0x9c2fc0 */ __asm { MOV dword ptr [RBP + 0x50],0xe74f1127 }
    /* +0x9c2fc7 */ __asm { MOV R9D,dword ptr [RBP + 0x50] }
    /* +0x9c2fcb */ __asm { XOR R15D,R15D }
    /* +0x9c2fce */ __asm { INC R14 }
    /* +0x9c2fd1 */ __asm { TEST R15,R15 }
    /* +0x9c2fd4 */ __asm { JNZ 0x7fffa5134ce2 }
    /* +0x9c2fda */ __asm { CMP R14,RSI }
    /* +0x9c2fdd */ __asm { JZ 0x7fffa51331f9 }
    /* +0x9c2fe3 */ __asm { MOVZX R11D,word ptr [R12 + R14*0x2] }
    /* +0x9c2fe8 */ __asm { MOV R8D,dword ptr [RBX + R14*0x4] }
    /* +0x9c2fec */ __asm { LEA R9,[R8 + RAX*0x1] }
    /* +0x9c2ff0 */ __asm { TEST R8,R8 }
    /* +0x9c2ff3 */ __asm { CMOVZ R9,R8 }
    /* +0x9c2ff7 */ __asm { LEA R8D,[RDI + R11*0x1] }
    /* +0x9c2ffb */ __asm { MOV dword ptr [RBP + 0x80],R8D }
    /* +0x9c3002 */ __asm { MOV qword ptr [RBP + 0x78],R9 }
    /* +0x9c3006 */ __asm { MOV R8,qword ptr [RBP + 0x48] }
    /* +0x9c300a */ __asm { MOV R11D,dword ptr [R8 + R11*0x4] }
    /* +0x9c300e */ __asm { CMP R11D,ECX }
    /* +0x9c3011 */ __asm { SETNC DL }
    /* +0x9c3014 */ __asm { CMP R11D,R13D }
    /* +0x9c3017 */ __asm { SETC R10B }
    /* +0x9c301b */ __asm { AND R10B,DL }
    /* +0x9c301e */ __asm { MOVD XMM5,R11D }
    /* +0x9c3023 */ __asm { MOV uint8_t ptr [RBP + 0x84],R10B }
    /* +0x9c302a */ __asm { PADDQ XMM5,XMM12 }
    /* +0x9c302f */ __asm { MOVQ qword ptr [RBP + 0x70],XMM5 }
    /* +0x9c3034 */ __asm { TEST R9,R9 }
    /* +0x9c3037 */ __asm { JZ 0x7fffa5132fc0 }
    /* +0x9c3039 */ __asm { MOV dword ptr [RBP + 0x50],0x52658ddc }
    /* +0x9c3040 */ __asm { MOV R9D,dword ptr [RBP + 0x50] }
    /* +0x9c3044 */ __asm { MOV R11,qword ptr [RBP + 0x78] }
    /* +0x9c3048 */ __asm { MOVZX R9D,uint8_t ptr [R11] }
    /* +0x9c304c */ __asm { MOV DL,0xa9 }
    /* +0x9c304e */ __asm { ADD DL,0x57 }
    /* +0x9c3051 */ __asm { ROL DL,0x4 }
    /* +0x9c3054 */ __asm { MOV RCX,qword ptr [RBP + 0x68] }
    /* +0x9c3058 */ __asm { ROR DL,CL }
    /* +0x9c305a */ __asm { CMP R9B,DL }
    /* +0x9c305d */ __asm { JZ 0x7fffa51330b0 }
    /* +0x9c305f */ __asm { LEA RDX,[R11 + 0x1] }
    /* +0x9c3063 */ __asm { MOV R8D,0xb5383f }
    /* +0x9c3069 */ __asm { NOP dword ptr [RAX] }
    /* +0x9c3070 */ __asm { MOVZX R9D,R9B }
    /* +0x9c3074 */ __asm { MOVD XMM5,R8D }
    /* +0x9c3079 */ __asm { MOVD XMM0,R9D }
    /* +0x9c307e */ __asm { PXOR XMM0,XMM5 }
    /* +0x9c3082 */ __asm { MOVD R8D,XMM0 }
    /* +0x9c3087 */ __asm { MOVZX R9D,uint8_t ptr [RDX] }
    /* +0x9c308b */ __asm { IMUL R8D,R8D,0x10001ab }
    /* +0x9c3092 */ __asm { TEST R9B,R9B }
    /* +0x9c3095 */ __asm { JZ 0x7fffa51330a0 }
    /* +0x9c3097 */ __asm { INC RDX }
    /* +0x9c309a */ __asm { JMP 0x7fffa5133070 }
    /* +0x9c30a0 */ __asm { AND R8D,0x7fffffff }
    /* +0x9c30a7 */ __asm { CMP R8D,0x7401dd63 }
    /* +0x9c30ae */ __asm { JZ 0x7fffa5133122 }
    /* +0x9c30b0 */ __asm { MOV R11W,0x2d91 }
    /* +0x9c30b5 */ __asm { LEA R9D,[RCX + R11*0x1] }
    /* +0x9c30b9 */ __asm { ADD R9D,0xffffd126 }
    /* +0x9c30c0 */ __asm { MOVZX R8D,R9W }
    /* +0x9c30c4 */ __asm { MOV R11,qword ptr GS:[R8] }
    /* +0x9c30c8 */ __asm { MOV R11,qword ptr [R11 + 0xc00] }
    /* +0x9c30cf */ __asm { MOV R9W,0x67e2 }
    /* +0x9c30d4 */ __asm { SUB R9D,ECX }
    /* +0x9c30d7 */ __asm { ADD R9D,0xffff99cd }
    /* +0x9c30de */ __asm { ROL R9W,0x3 }
    /* +0x9c30e3 */ __asm { MOVZX R8D,R9W }
    /* +0x9c30e7 */ __asm { MOV R9,-0x1b967edf7d0b13a0 }
    /* +0x9c30f1 */ __asm { MOV ECX,0x5fc0597b }
    /* +0x9c30f6 */ __asm { SUB RCX,R9 }
    /* +0x9c30f9 */ __asm { MOV R9,qword ptr GS:[R8] }
    /* +0x9c30fd */ __asm { MOV R8D,0x6a8 }
    /* +0x9c3103 */ __asm { ADD R9,R8 }
    /* +0x9c3106 */ __asm { IMUL R9,R11 }
    /* +0x9c310a */ __asm { CMP R9,RCX }
}


// ============================================================================
// Function : Unwind@7fffa5138a30  |  RVA: 0x9c8a30  |  Size: 354 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5138a30(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  
  if (*(int64_t *)(param_2 + 200) != 0) {
    iVar2 = (int)*(uint64_t *)(param_2 + 0xe8);
    plVar1 = *(int64_t **)
              ((int64_t)(int)((iVar2 + 0xc693fe42U) * 0x800 | iVar2 + 0xc693fe42U >> 0x15) +
              0x7fffa4790a20);
    if (plVar1 == (int64_t *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar1;
    }
    LOCK();
    plVar1 = (int64_t *)((int64_t)(int)~(*(uint32_t *)(param_2 + 0xe8) ^ 0xe98cabed) + 0x7fffa47c9e6d)
    ;
    *plVar1 = *plVar1 + (*(int64_t *)(uint64_t)(iVar2 + 0x9671fe5f) -
                        (*(int64_t *)(param_2 + 200) + *(int64_t *)(uint64_t)(0x698a0559 - iVar2)
                        + lVar3));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5138ba0  |  RVA: 0x9c8ba0  |  Size: 547 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5138ba0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  bRam00007fffa4784bca = 0;
  uRam00007fffa4784be8 = 0;
  uRam00007fffa4784bf0 = 0;
  uRam00007fffa4784bd8 = 0;
  uRam00007fffa4784be0 = 0;
  uRam00007fffa4784bf8 = 0;
  uRam00007fffa4784c0b = 0;
  lVar3 = rdtsc();
  lVar3 = lVar3 * 0x8f11de8654eb5c0;
  lVar2 = 3;
  while( true ) {
    *(char *)(lVar2 + 0x7fffa4784bbf) = (char)((uint64_t)(lVar3 * 0x9cc2091000) >> 0x20);
    *(char *)(lVar2 + 0x7fffa4784bbe) = (char)((uint64_t)(lVar3 * 0xe8654eb5c0) >> 0x20);
    *(char *)(lVar2 + 0x7fffa4784bc0) = (char)((uint64_t)(lVar3 * 0x1d4cf1c0000) >> 0x20);
    if (lVar2 == 0x5b) break;
    lVar3 = lVar3 * -0x2c36ddf000000;
    *(char *)(lVar2 + 0x7fffa4784bc1) = (char)((uint64_t)lVar3 >> 0x20);
    lVar2 = lVar2 + 4;
  }
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa4784bca * 0x33333334 + 0x33333334) * 5;
  *(uint64_t *)((uVar1 >> 0x20) * 8 + 0x7fffa4784bd8) = 0;
  bRam00007fffa4784bca = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5138dd0  |  RVA: 0x9c8dd0  |  Size: 728 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa513909c) */

void FUN_7fffa5138dd0(void)

{
  uRam00007fffa4786448 = 0x9ebafdecc22416ea;
  uRam00007fffa4786438 = 0x98486528fb5368ff;
  uRam00007fffa4786430 = 0x5bcb77885aec342;
  uRam00007fffa4786428 = 0x17424595149c9e2f;
  lRam00007fffa4786410 = -0x1bec1acf824df4b5 - lRam00007fffa4781330;
  uRam00007fffa4786440 = 0xfffffffffff301c8;
  uRam00007fffa4786420 = 0x61140b7c06e60488;
  uRam00007fffa4786418 = 0x7eebc8a074fd3be3;
  return;
}


// ============================================================================
// Function : FUN_7fffa51449e0  |  RVA: 0x9d49e0  |  Size: 138 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa51449e0(void)

{
  FUN_7fffa548da80();
  return;
}


// ============================================================================
// Function : FUN_7fffa5144a70  |  RVA: 0x9d4a70  |  Size: 178 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5144af0) */
/* WARNING: Removing unreachable block (ram,0x7fffa5144ae2) */
/* WARNING: Removing unreachable block (ram,0x7fffa5144a87) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa5144a70(void)

{
  int64_t lVar1;
  int *piVar2;
  uint64_t uVar3;
  uint8_t in_XCR0;
  
  _DAT_7fffa478264c = 0;
  _DAT_7fffa4782650 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint32_t *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (uint8_t)uVar3 & 6) == 6) {
      _DAT_7fffa478264c = 1;
      _DAT_7fffa4782650 = 1;
    }
    else {
      _DAT_7fffa478264c = 0;
    }
  }
  if ((_DAT_7fffa478264c != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint32_t *)(lVar1 + 4) & 0x20) != 0) {
      _DAT_7fffa4782650 = 3;
      _DAT_7fffa478264c = 3;
      return 0;
    }
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5144b30  |  RVA: 0x9d4b30  |  Size: 1359 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5144b30(void)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  uint8_t bVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint32_t uVar10;
  uint64_t in_R10;
  int64_t lVar11;
  uint64_t unaff_R15;
  int64_t lVar12;
  
  uVar7 = (~in_R10 | in_R10 ^ unaff_R15) * -0xaa644a1d +
          ((in_R10 ^ unaff_R15) & ~in_R10) * 0x1a068255d + unaff_R15 * -0x1a068255d +
          ((in_R10 ^ ~unaff_R15) & in_R10) * 0xf603db40;
  uVar6 = (uint32_t)uVar7;
  bVar5 = (uint8_t)uVar7;
  uVar4 = (uint16_t)uVar7;
  lVar8 = (int64_t)(short)((uVar4 ^ 0x6efa) + 0x5f25);
  *(uint8_t *)((int64_t)
            (int)((0x843ca2f7U >> (bVar5 & 0x1f) | -0x7bc35d09 << 0x20 - (bVar5 & 0x1f)) +
                 0xde1a384d) + 0x7fffa47c60ad) = (bVar5 ^ 0x68) + 0x8b;
  *(uint8_t (*) [16])(lVar8 + 0x7fffa47c2cac) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar8 + 0x7fffa47c2cbc) = 0;
  *(uint64_t *)
   ((int64_t)(short)(uVar4 * -0x4000 | (uint16_t)(0xd9bc - uVar4) >> 2) + 0x7fffa47bccea) =
       (uint64_t)(uVar6 ^ 0xaa644a1d);
  lVar8 = rdtsc();
  lVar8 = lVar8 * (uVar7 ^ 0xe7fdb6bd709515d0) * 0x23d9416d + 0xb;
  uVar9 = 0;
  while( true ) {
    uVar10 = 0x9000 << (bVar5 & 0x1f) | 0x9000U >> 0x20 - (bVar5 & 0x1f);
    lVar8 = (-0x2afd8af40450ac00 - uVar7) * lVar8 * -0xf9bee1d + 0xb;
    *(char *)(uVar9 + (int64_t)
                      (int)~(0x782b0 << (bVar5 & 0x1f) | 0x782b0U >> 0x20 - (bVar5 & 0x1f)) +
                      0x7fffa47ca10b) = (char)((uint64_t)lVar8 >> 0x20);
    if (uVar9 == (uVar10 << 0x19 | uVar10 >> 7)) break;
    lVar12 = lVar8 * 0xe4a9a20bdddd749 + 0xb;
    lVar11 = ~(uVar7 + 0xf1b565de97bdde99) * lVar12 + 0xb;
    lVar8 = lVar11 * 0xe4a9a20bdddd749 + 0xb;
    *(char *)(uVar9 + 0x7fffa47bb0b7) = (char)((uint64_t)lVar8 >> 0x20);
    *(char *)((uVar9 | 1) + (int64_t)(int)(uVar6 + 0x559b0041) + 0x7fffa47c6656) =
         (char)((uint64_t)lVar12 >> 0x20);
    *(char *)(uVar9 + (int64_t)(short)((uVar4 | 1) * 0x62ab) + 0x7fffa47c1557) =
         (char)((uint64_t)lVar11 >> 0x20);
    uVar9 = uVar9 + 4;
  }
  lVar8 = (int64_t)(int)~(0xc00010c6U >> (bVar5 & 0x1f) | -0x3fffef3a << 0x20 - (bVar5 & 0x1f));
  uVar7 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(int)((0x328b6868 - uVar6) * -0x6096c27d) + 0x7fffa47c5155) *
           0x55555556 + 0x55555556) * 3;
  uVar9 = uVar7 >> 0x20;
  bVar1 = *(uint8_t *)((int64_t)(int)((uVar6 | 1) * 0x14390a4 + -0x148755ae) + 0x7fffa47c3bef);
  uVar10 = 0x8e4bfffcU >> (bVar5 & 0x1f) | -0x71b40004 << 0x20 - (bVar5 & 0x1f);
  bVar5 = *(uint8_t *)((int64_t)
                    (short)((uint16_t)(uVar4 + 0xd380) >> 1 |
                           (uint16_t)((uVar4 + 0xd380 & 1) != 0) << 0xf) + 0x7fffa47c220a);
  bVar2 = *(uint8_t *)((int64_t)(int)(uVar10 << 0xb | uVar10 >> 0x15) + 0x7fffa47c8d40);
  *(uint8_t *)(lVar8 + 0x7fffa47c36f4 + uVar9 * 8) =
       bRam00007fffa47bb0d6 << 6 | bRam00007fffa47bb0d6 >> 2;
  bVar3 = *(uint8_t *)((int64_t)&g_api_ntdll_dll_KiUserExceptionDispatcher +
                   (int64_t)(short)((0x99b - uVar4 ^ 0x94) + 0x2065) + 2);
  *(uint8_t *)(lVar8 + 0x7fffa47c36ef + uVar9 * 8) = bVar3 << 6 | bVar3 >> 2;
  *(uint8_t *)(lVar8 + 0x7fffa47c36f0 + uVar9 * 8) = bVar2 << 6 | bVar2 >> 2;
  bVar2 = *(uint8_t *)((int64_t)(short)((uVar4 | 1) * 0x4c04) + 0x7fffa47bec63);
  *(uint8_t *)(lVar8 + 0x7fffa47c36f5 + uVar9 * 8) = bVar2 << 6 | bVar2 >> 2;
  bVar2 = *(uint8_t *)((int64_t)(short)(uVar4 + 0x9bae) + 0x7fffa47bcb08);
  *(uint8_t *)(lVar8 + 0x7fffa47c36f1 + uVar9 * 8) = bVar2 << 6 | bVar2 >> 2;
  bVar2 = *(uint8_t *)((int64_t)(int)((uVar6 ^ 0xda29ca96) + 0x8fb1e3e6) + 0x7fffa47c4c63);
  *(uint8_t *)(lVar8 + 0x7fffa47c36f3 + uVar9 * 8) = bVar1 << 6 | bVar1 >> 2;
  *(uint8_t *)(lVar8 + 0x7fffa47c36f2 + uVar9 * 8) = bVar2 << 6 | bVar2 >> 2;
  *(uint8_t *)(lVar8 + 0x7fffa47c36f6 + uVar9 * 8) = bVar5 << 6 | bVar5 >> 2;
  *(char *)((int64_t)(int)~((uVar6 | 1) * -0x28fb2c5e) + 0x7fffa47c7e11) = (char)(uVar7 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5145080  |  RVA: 0x9d5080  |  Size: 93 bytes
// Callers  : FUN_7fffa56a0618@0xf30618
// Callees  : _guard_dispatch_icall@0xf30810, FUN_7fffa5488ca4@0xd18ca4, FUN_7fffa524fccc@0xadfccc
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_7fffa5145080(uint64_t param_1,uint32_t param_2)

{
  code *pcVar1;
  
  if (g_api_cryptbase_dll_SystemFunction036 == (uint8_t *)0xffffffffffffffff) {
LAB_7fffa51450d7:
    FUN_7fffa524fccc();
    pcVar1 = (code *)__debugbreak();
    (*pcVar1)();
    return;
  }
  pcVar1 = (code *)g_api_cryptbase_dll_SystemFunction036;
  if (g_api_cryptbase_dll_SystemFunction036 == (uint8_t *)0x0) {
    pcVar1 = (code *)FUN_7fffa5488ca4(0x1f,"SystemFunction036",&UNK_7fffa56b3ea0,
                                      &FuncInfo_7fffa56b3ea8);
    if (pcVar1 == (code *)0x0) goto LAB_7fffa51450d7;
  }
  (*pcVar1)(param_1,param_2);
  return;
}


// ============================================================================
// Function : FUN_7fffa51450e0  |  RVA: 0x9d50e0  |  Size: 289 bytes
// Callers  : FUN_7fffa56606b8@0xef06b8, FUN_7fffa4f445c0@0x7d45c0
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184
// ============================================================================
uint32_t FUN_7fffa51450e0(char *param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
  char cVar1;
  uint32_t *puVar2;
  int64_t lVar3;
  char *pcVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_7fffa5145139;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_7fffa5145139;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = '\0';
      return 0;
    }
    if (param_3 != 0) {
      pcVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          cVar1 = pcVar4[param_3 - (int64_t)param_1];
          *pcVar4 = cVar1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
          pcVar4 = pcVar4 + 1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          cVar1 = pcVar4[param_3 - (int64_t)param_1];
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *pcVar4 = '\0';
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 == -1) {
        param_1[param_2 + -1] = '\0';
        return 0x50;
      }
      *param_1 = '\0';
      puVar2 = (uint32_t *)FUN_7fffa4ed9184();
      *puVar2 = 0x22;
      FUN_7fffa55c8ce0();
      return 0x22;
    }
    *param_1 = '\0';
  }
LAB_7fffa5145139:
  puVar2 = (uint32_t *)FUN_7fffa4ed9184();
  *puVar2 = 0x16;
  FUN_7fffa55c8ce0();
  return 0x16;
}


// ============================================================================
// Function : FUN_7fffa5145210  |  RVA: 0x9d5210  |  Size: 4851 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5145ea1) */
/* WARNING: Removing unreachable block (ram,0x7fffa51458f7) */
/* WARNING: Removing unreachable block (ram,0x7fffa5146432) */
/* WARNING: Removing unreachable block (ram,0x7fffa51458c1) */

int64_t FUN_7fffa5145210(uint64_t param_1,int64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  bool bVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  uint32_t uVar21;
  int64_t lVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  uint64_t *puVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint32_t uVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t *puVar32;
  uint32_t uVar33;
  int *piVar34;
  int64_t lVar35;
  uint64_t *puVar36;
  uint64_t *puVar37;
  uint64_t uVar38;
  bool bVar39;
  uint32_t uStack_144;
  uint64_t uStack_d0;
  uint32_t uStack_c4;
  code *pcStack_c0;
  int64_t *plStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  int64_t lStack_a0;
  uint64_t *puStack_98;
  int64_t lStack_90;
  int iStack_84;
  uint64_t *puStack_80;
  
  puVar8 = *(uint64_t **)(param_1 + 0xf8);
  uVar6 = *(uint32_t *)(param_1 + 0x110);
  lVar35 = *(int64_t *)(param_1 + 8);
  puVar9 = (uint64_t *)*puVar8;
  uVar10 = puVar8[1];
  uVar7 = *(uint32_t *)(param_1 + 0x18);
  uVar21 = 6;
  if (uVar6 < 6) {
    uVar21 = uVar6;
  }
  if (uVar21 < 5) {
    uVar21 = 4;
  }
  puVar3 = (uint64_t *)(lVar35 + (uint64_t)uVar7);
  puVar15 = (uint64_t *)((uint32_t)puVar8[3] + uVar10);
  bVar39 = (int)param_4 + (int)puVar9 == (int)puVar15 + (int)puVar3;
  puVar8 = (uint64_t *)((int64_t)param_4 + param_5);
  puStack_80 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  uStack_144 = *param_3;
  uVar33 = param_3[1];
  uVar30 = (uint64_t)uVar33;
  *(uint32_t *)(param_1 + 300) = 0;
  uVar27 = (uint64_t)bVar39;
  puVar26 = (uint64_t *)((int64_t)param_4 + uVar27);
  if (puVar26 < puStack_80) {
    uVar29 = ((int)uVar10 - (int)puVar9) + uVar7;
    uStack_a8 = (uint64_t)uVar29;
    puVar1 = (uint64_t *)((int64_t)puVar8 - 7);
    puVar2 = puVar8 + -4;
    lVar16 = uVar10 - uStack_a8;
    iStack_84 = uVar21 << 1;
    uVar31 = uVar30;
    plStack_b8 = param_2;
    puStack_98 = puVar3;
    lStack_90 = lVar35;
    do {
      uVar21 = (((int)puVar26 - (int)lVar35) - uStack_144) + 1;
      piVar34 = (int *)((uVar21 - uVar29) + uVar10);
      if (uVar7 <= uVar21) {
        piVar34 = (int *)((uint64_t)uVar21 + lVar35);
      }
      if ((uVar21 - uVar7 < 0xfffffffd) &&
         (puVar18 = (uint64_t *)((int64_t)puVar26 + 1), *piVar34 == *(int *)puVar18)) {
        puVar32 = (uint64_t *)(piVar34 + 1);
        puVar20 = (uint64_t *)((int64_t)puVar26 + 5);
        puVar25 = puVar8;
        if (uVar21 < uVar7) {
          puVar25 = puVar9;
        }
        puVar37 = (uint64_t *)((int64_t)puVar26 + (int64_t)puVar25 + (5 - (int64_t)puVar32));
        if (puVar8 <= puVar37) {
          puVar37 = puVar8;
        }
        puVar24 = puVar20;
        puVar36 = puVar32;
        if (puVar20 < (uint64_t *)((int64_t)puVar37 - 7U)) {
          lVar35 = lStack_90;
          if (*puVar20 == *puVar32) {
            lVar22 = 0;
            do {
              puVar24 = (uint64_t *)((int64_t)puVar26 + lVar22 + 0xd);
              if ((uint64_t *)((int64_t)puVar37 - 7U) <= puVar24) {
                puVar24 = (uint64_t *)((int64_t)puVar26 + lVar22 + 0xd);
                puVar36 = (uint64_t *)((int64_t)piVar34 + lVar22 + 0xc);
                goto LAB_7fffa5145bb6;
              }
              uVar23 = *puVar24;
              uVar19 = *(uint64_t *)((int64_t)piVar34 + lVar22 + 0xc);
              lVar22 = lVar22 + 8;
            } while (uVar19 == uVar23);
            uVar21 = 0;
            for (uVar23 = uVar23 ^ uVar19; (uVar23 & 1) == 0;
                uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar23 = (uint64_t)(uVar21 >> 3) + lVar22;
          }
          else {
            uVar21 = 0;
            for (uVar23 = *puVar32 ^ *puVar20; (uVar23 & 1) == 0;
                uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar23 = (uint64_t)(uVar21 >> 3);
          }
        }
        else {
LAB_7fffa5145bb6:
          if ((puVar24 < (uint64_t *)((int64_t)puVar37 - 3U)) && ((int)*puVar36 == (int)*puVar24))
          {
            puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
            puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
          }
          if ((puVar24 < (uint64_t *)((int64_t)puVar37 - 1U)) &&
             ((short)*puVar36 == (short)*puVar24)) {
            puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
            puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
          }
          if (puVar24 < puVar37) {
            puVar24 = (uint64_t *)
                      ((int64_t)puVar24 + (uint64_t)((char)*puVar36 == (char)*puVar24));
          }
          uVar23 = (int64_t)puVar24 - (int64_t)puVar20;
        }
        if ((uint64_t *)((int64_t)puVar32 + uVar23) == puVar25) {
          puVar20 = (uint64_t *)((int64_t)puVar20 + uVar23);
          puVar32 = puStack_98;
          puVar25 = puVar20;
          if (puVar20 < puVar1) {
            if (*puStack_98 == *puVar20) {
              lVar22 = 0;
              do {
                puVar32 = (uint64_t *)((int64_t)puVar26 + lVar22 + uVar23 + 0xd);
                if (puVar1 <= puVar32) {
                  puVar25 = (uint64_t *)((int64_t)puVar26 + lVar22 + uVar23 + 0xd);
                  puVar32 = (uint64_t *)((int64_t)puVar3 + lVar22 + 8);
                  goto LAB_7fffa5145ca7;
                }
                uVar19 = *(uint64_t *)((int64_t)puVar3 + lVar22 + 8);
                uVar17 = *puVar32;
                lVar22 = lVar22 + 8;
              } while (uVar19 == uVar17);
              uVar21 = 0;
              for (uVar19 = uVar19 ^ uVar17; (uVar19 & 1) == 0;
                  uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                uVar21 = uVar21 + 1;
              }
              uVar19 = (uint64_t)(uVar21 >> 3) + lVar22;
            }
            else {
              uVar21 = 0;
              for (uVar19 = *puStack_98 ^ *puVar20; (uVar19 & 1) == 0;
                  uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                uVar21 = uVar21 + 1;
              }
              uVar19 = (uint64_t)(uVar21 >> 3);
            }
          }
          else {
LAB_7fffa5145ca7:
            if ((puVar25 < (uint64_t *)((int64_t)puVar8 - 3U)) && ((int)*puVar32 == (int)*puVar25)
               ) {
              puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
              puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
            }
            if ((puVar25 < (uint64_t *)((int64_t)puVar8 - 1U)) &&
               ((short)*puVar32 == (short)*puVar25)) {
              puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
            }
            if (puVar25 < puVar8) {
              puVar25 = (uint64_t *)
                        ((int64_t)puVar25 + (uint64_t)((char)*puVar32 == (char)*puVar25));
            }
            uVar19 = (int64_t)puVar25 - (int64_t)puVar20;
          }
          uVar23 = uVar23 + uVar19;
        }
        uVar23 = uVar23 + 4;
        uStack_d0 = 1;
LAB_7fffa5145d46:
        puVar26 = (uint64_t *)plStack_b8[3];
        uVar19 = (int64_t)puVar18 - (int64_t)param_4;
        if (puVar2 < puVar18) {
          puVar20 = param_4;
          puVar32 = puVar26;
          if (param_4 <= puVar2) {
            puVar32 = (uint64_t *)((int64_t)puVar26 + ((int64_t)puVar2 - (int64_t)param_4));
            uVar17 = param_4[1];
            *puVar26 = *param_4;
            puVar26[1] = uVar17;
            puVar20 = puVar2;
            if (0x10 < (int64_t)puVar2 - (int64_t)param_4) {
              puVar26 = puVar26 + 6;
              while( true ) {
                uVar17 = param_4[3];
                puVar26[-4] = param_4[2];
                puVar26[-3] = uVar17;
                uVar17 = param_4[5];
                puVar26[-2] = param_4[4];
                puVar26[-1] = uVar17;
                if (puVar32 <= puVar26) break;
                puVar26 = puVar26 + 4;
                param_4 = param_4 + 4;
              }
            }
          }
          if (puVar20 < puVar18) {
            uVar17 = (int64_t)puVar18 - (int64_t)puVar20;
            if (uVar17 < 4 || (uint64_t)((int64_t)puVar32 - (int64_t)puVar20) < 0x20) {
LAB_7fffa5145eb2:
              puVar26 = puVar32;
            }
            else {
              if (uVar17 < 0x20) {
                uVar28 = 0;
              }
              else {
                uVar28 = uVar17 & 0xffffffffffffffe0;
                lVar35 = 0;
                while( true ) {
                  uVar12 = *(uint64_t *)((int64_t)puVar20 + lVar35);
                  uVar13 = ((uint64_t *)((int64_t)puVar20 + lVar35))[1];
                  puVar4 = (uint64_t *)((int64_t)puVar20 + lVar35 + 0x10);
                  uVar14 = puVar4[1];
                  puVar5 = (uint64_t *)((int64_t)puVar32 + lVar35 + 0x10);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar14;
                  *(uint64_t *)((int64_t)puVar32 + lVar35) = uVar12;
                  ((uint64_t *)((int64_t)puVar32 + lVar35))[1] = uVar13;
                  if (uVar28 - 0x20 == lVar35) break;
                  lVar35 = lVar35 + 0x20;
                }
                lVar35 = lStack_90;
                if (uVar17 == uVar28) goto LAB_7fffa5145ff0;
                if ((uVar17 & 0x1c) == 0) {
                  puVar32 = (uint64_t *)((int64_t)puVar32 + uVar28);
                  puVar20 = (uint64_t *)((int64_t)puVar20 + uVar28);
                  goto LAB_7fffa5145eb2;
                }
              }
              uVar38 = uVar17 & 0xfffffffffffffffc;
              puVar26 = (uint64_t *)((int64_t)puVar32 + uVar38);
              for (; *(uint32_t *)((int64_t)puVar32 + uVar28) =
                          *(uint32_t *)((int64_t)puVar20 + uVar28), uVar38 - 4 != uVar28;
                  uVar28 = uVar28 + 4) {
              }
              lVar35 = lStack_90;
              if (uVar17 == uVar38) goto LAB_7fffa5145ff0;
              puVar20 = (uint64_t *)((int64_t)puVar20 + uVar38);
            }
            uVar21 = (int)puVar18 - (int)puVar20 & 7;
            uVar17 = (uint64_t)uVar21;
            puVar25 = puVar26;
            puVar32 = puVar20;
            if (uVar21 == 0) {
              puVar37 = puVar20;
            }
            else {
              do {
                uVar17 = uVar17 - 1;
                puVar26 = (uint64_t *)((int64_t)puVar25 + 1);
                *(char *)puVar25 = (char)*puVar32;
                puVar37 = (uint64_t *)((int64_t)puVar32 + 1);
                puVar25 = puVar26;
                puVar32 = (uint64_t *)((int64_t)puVar32 + 1);
              } while (uVar17 != 0);
            }
            lVar35 = lStack_90;
            if ((uint64_t)((int64_t)puVar20 - (int64_t)puVar18) < 0xfffffffffffffff9) {
              lVar22 = 0;
              while( true ) {
                *(uint8_t *)((int64_t)puVar26 + lVar22) =
                     *(uint8_t *)((int64_t)puVar37 + lVar22);
                *(uint8_t *)((int64_t)puVar26 + lVar22 + 1) =
                     *(uint8_t *)((int64_t)puVar37 + lVar22 + 1);
                *(uint8_t *)((int64_t)puVar26 + lVar22 + 2) =
                     *(uint8_t *)((int64_t)puVar37 + lVar22 + 2);
                *(uint8_t *)((int64_t)puVar26 + lVar22 + 3) =
                     *(uint8_t *)((int64_t)puVar37 + lVar22 + 3);
                *(uint8_t *)((int64_t)puVar26 + lVar22 + 4) =
                     *(uint8_t *)((int64_t)puVar37 + lVar22 + 4);
                *(uint8_t *)((int64_t)puVar26 + lVar22 + 5) =
                     *(uint8_t *)((int64_t)puVar37 + lVar22 + 5);
                *(uint8_t *)((int64_t)puVar26 + lVar22 + 6) =
                     *(uint8_t *)((int64_t)puVar37 + lVar22 + 6);
                *(uint8_t *)((int64_t)puVar26 + lVar22 + 7) =
                     *(uint8_t *)((int64_t)puVar37 + lVar22 + 7);
                if ((uint64_t *)((int64_t)puVar37 + lVar22 + 8) == puVar18) break;
                lVar22 = lVar22 + 8;
              }
            }
          }
LAB_7fffa5145ff0:
          lVar22 = plStack_b8[1];
          plStack_b8[3] = plStack_b8[3] + uVar19;
          if (0xffff < uVar19) {
            *(uint32_t *)(plStack_b8 + 9) = 1;
            *(int *)((int64_t)plStack_b8 + 0x4c) = (int)((uint64_t)(lVar22 - *plStack_b8) >> 3);
          }
        }
        else {
          uVar17 = param_4[1];
          *puVar26 = *param_4;
          puVar26[1] = uVar17;
          if (0x10 < uVar19) {
            lVar22 = plStack_b8[3];
            uVar17 = param_4[3];
            *(uint64_t *)(lVar22 + 0x10) = param_4[2];
            *(uint64_t *)(lVar22 + 0x18) = uVar17;
            if (0x20 < (int64_t)uVar19) {
              uVar17 = lVar22 + 0x40;
              param_4 = param_4 + 6;
              while( true ) {
                uVar28 = param_4[-1];
                *(uint64_t *)(uVar17 - 0x20) = param_4[-2];
                *(uint64_t *)(uVar17 - 0x18) = uVar28;
                uVar28 = param_4[1];
                *(uint64_t *)(uVar17 - 0x10) = *param_4;
                *(uint64_t *)(uVar17 - 8) = uVar28;
                if (lVar22 + uVar19 <= uVar17) break;
                uVar17 = uVar17 + 0x20;
                param_4 = param_4 + 4;
              }
            }
            goto LAB_7fffa5145ff0;
          }
          lVar22 = plStack_b8[1];
          plStack_b8[3] = plStack_b8[3] + uVar19;
        }
        *(short *)(lVar22 + 4) = (short)uVar19;
        *(int *)plStack_b8[1] = (int)uStack_d0;
        if (0xffff < uVar23 - 3) {
          *(uint32_t *)(plStack_b8 + 9) = 2;
          *(int *)((int64_t)plStack_b8 + 0x4c) =
               (int)((uint64_t)(plStack_b8[1] - *plStack_b8) >> 3);
        }
        *(short *)(plStack_b8[1] + 6) = (short)(uVar23 - 3);
        plStack_b8[1] = plStack_b8[1] + 8;
        if (*(int *)(param_1 + 300) != 0) {
          *(uint32_t *)(param_1 + 300) = 0;
        }
        param_4 = (uint64_t *)((int64_t)puVar18 + uVar23);
        if (puStack_80 < param_4) {
          puVar26 = param_4;
        }
        else {
          do {
            uVar21 = (uint32_t)uVar31;
            uVar33 = ((int)param_4 - (int)lVar35) - uVar21;
            lVar22 = lVar35;
            if (uVar33 < uVar7) {
              lVar22 = lVar16;
            }
            if ((0xfffffffc < uVar33 - uVar7) ||
               (piVar34 = (int *)((uint64_t)uVar33 + lVar22), *piVar34 != (int)*param_4)) {
              puVar26 = param_4;
              break;
            }
            puVar26 = puVar8;
            if (uVar33 < uVar7) {
              puVar26 = puVar9;
            }
            puVar18 = (uint64_t *)((int64_t)param_4 + 4);
            puVar32 = (uint64_t *)(piVar34 + 1);
            puVar20 = (uint64_t *)((int64_t)param_4 + (int64_t)puVar26 + (4 - (int64_t)puVar32))
            ;
            if (puVar8 <= puVar20) {
              puVar20 = puVar8;
            }
            puVar25 = puVar18;
            puVar37 = puVar32;
            if (puVar18 < (uint64_t *)((int64_t)puVar20 - 7U)) {
              if (*puVar32 == *puVar18) {
                lVar35 = 0;
                do {
                  puVar25 = (uint64_t *)((int64_t)param_4 + lVar35 + 0xc);
                  if ((uint64_t *)((int64_t)puVar20 - 7U) <= puVar25) {
                    puVar25 = (uint64_t *)((int64_t)param_4 + lVar35 + 0xc);
                    puVar37 = (uint64_t *)((int64_t)piVar34 + lVar35 + 0xc);
                    lVar35 = lStack_90;
                    goto LAB_7fffa514623f;
                  }
                  uVar31 = *(uint64_t *)((uint64_t)uVar33 + lVar22 + 0xc + lVar35);
                  uVar23 = *puVar25;
                  lVar35 = lVar35 + 8;
                } while (uVar31 == uVar23);
                uVar33 = 0;
                for (uVar23 = uVar23 ^ uVar31; (uVar23 & 1) == 0;
                    uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                  uVar33 = uVar33 + 1;
                }
                uVar31 = (uint64_t)(uVar33 >> 3) + lVar35;
                lVar35 = lStack_90;
              }
              else {
                uVar33 = 0;
                for (uVar31 = *puVar32 ^ *puVar18; (uVar31 & 1) == 0;
                    uVar31 = uVar31 >> 1 | 0x8000000000000000) {
                  uVar33 = uVar33 + 1;
                }
                uVar31 = (uint64_t)(uVar33 >> 3);
              }
            }
            else {
LAB_7fffa514623f:
              if ((puVar25 < (uint64_t *)((int64_t)puVar20 - 3U)) &&
                 ((int)*puVar37 == (int)*puVar25)) {
                puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
                puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
              }
              if ((puVar25 < (uint64_t *)((int64_t)puVar20 - 1U)) &&
                 ((short)*puVar37 == (short)*puVar25)) {
                puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
                puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
              }
              if (puVar25 < puVar20) {
                puVar25 = (uint64_t *)
                          ((int64_t)puVar25 + (uint64_t)((char)*puVar37 == (char)*puVar25));
              }
              uVar31 = (int64_t)puVar25 - (int64_t)puVar18;
            }
            if ((uint64_t *)((int64_t)puVar32 + uVar31) == puVar26) {
              puVar18 = (uint64_t *)((int64_t)puVar18 + uVar31);
              puVar26 = puStack_98;
              puVar32 = puVar18;
              if (puVar18 < puVar1) {
                if (*puStack_98 == *puVar18) {
                  lVar22 = 0;
                  do {
                    puVar26 = (uint64_t *)((int64_t)param_4 + lVar22 + uVar31 + 0xc);
                    if (puVar1 <= puVar26) {
                      puVar32 = (uint64_t *)((int64_t)param_4 + lVar22 + uVar31 + 0xc);
                      puVar26 = (uint64_t *)((int64_t)puVar3 + lVar22 + 8);
                      goto LAB_7fffa51463b9;
                    }
                    uVar23 = *(uint64_t *)((int64_t)puVar3 + lVar22 + 8);
                    uVar19 = *puVar26;
                    lVar22 = lVar22 + 8;
                  } while (uVar23 == uVar19);
                  uVar33 = 0;
                  for (uVar19 = uVar19 ^ uVar23; (uVar19 & 1) == 0;
                      uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                    uVar33 = uVar33 + 1;
                  }
                  uVar23 = (uint64_t)(uVar33 >> 3) + lVar22;
                }
                else {
                  uVar33 = 0;
                  for (uVar23 = *puVar18 ^ *puStack_98; (uVar23 & 1) == 0;
                      uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                    uVar33 = uVar33 + 1;
                  }
                  uVar23 = (uint64_t)(uVar33 >> 3);
                }
              }
              else {
LAB_7fffa51463b9:
                if ((puVar32 < (uint64_t *)((int64_t)puVar8 - 3U)) &&
                   ((int)*puVar26 == (int)*puVar32)) {
                  puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
                  puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
                }
                if ((puVar32 < (uint64_t *)((int64_t)puVar8 - 1U)) &&
                   ((short)*puVar26 == (short)*puVar32)) {
                  puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
                  puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
                }
                if (puVar32 < puVar8) {
                  puVar32 = (uint64_t *)
                            ((int64_t)puVar32 + (uint64_t)((char)*puVar26 == (char)*puVar32));
                }
                uVar23 = (int64_t)puVar32 - (int64_t)puVar18;
                lVar35 = lStack_90;
              }
              uVar31 = uVar31 + uVar23;
            }
            if (param_4 <= puVar2) {
              uVar23 = param_4[1];
              puVar26 = (uint64_t *)plStack_b8[3];
              *puVar26 = *param_4;
              puVar26[1] = uVar23;
            }
            *(uint16_t *)(plStack_b8[1] + 4) = 0;
            *(uint32_t *)plStack_b8[1] = 1;
            if (0xffff < uVar31 + 1) {
              *(uint32_t *)(plStack_b8 + 9) = 2;
              *(int *)((int64_t)plStack_b8 + 0x4c) =
                   (int)((uint64_t)(plStack_b8[1] - *plStack_b8) >> 3);
            }
            *(short *)(plStack_b8[1] + 6) = (short)(uVar31 + 1);
            plStack_b8[1] = plStack_b8[1] + 8;
            param_4 = (uint64_t *)((int64_t)param_4 + uVar31 + 4);
            uVar31 = (uint64_t)uStack_144;
            puVar26 = param_4;
            uStack_144 = uVar21;
          } while (param_4 <= puStack_80);
        }
      }
      else {
        uStack_d0 = 999999999;
        if (uVar6 < 6) {
          if (iStack_84 == 10) {
            lVar22 = (~uVar30 & (uint64_t)puVar8) * -0xe37c189d +
                     (~(uint64_t)puVar8 | uVar30) * -0xbdf70962 +
                     ((uint64_t)puVar8 ^ uVar30) * 0x25850f3b +
                     ((uint64_t)puVar8 | ~uVar30) * 0x85f4853c +
                     (uVar30 & ~(uint64_t)puVar8) * 0x606f7601;
            FUN_7fffa4d04470(((int64_t)puVar8 - ((int64_t)puVar8 << 0x28) ^
                             (int64_t)puVar8 * -0x7fffffffff800000) * -3,lVar22,param_1,&uStack_d0)
            ;
            uVar23 = lVar22 * 0x3fffffff80000001;
          }
          else {
            uVar23 = (int64_t)puVar26 - 0x98cea511;
            uVar19 = (param_1 << 0x23 | param_1 >> 0x1d) ^
                     (param_1 >> 1 | (uint64_t)((param_1 & 1) != 0) << 0x3f) ^ param_1;
            FUN_7fffa56ae4b0(0x763d5b0b,
                             (((uVar23 * 4 | uVar23 >> 0x3e) ^ uVar23 >> 9 ^ uVar23) & 0xffffffff) *
                             0xc5def21d,&uStack_d0);
            uVar23 = uVar19 << 0xf ^ uVar19;
            uVar23 = (uVar23 << 0x2b) + (uVar19 << 0x3c ^ uVar23 ^ uVar23 << 0x1e);
          }
        }
        else {
          uStack_b0 = ~uVar27;
          uVar19 = param_1 << 0x3e ^ param_1;
          pcStack_c0 = FUN_7fffa52d26d0;
          uVar23 = (~uStack_a8 | (uint64_t)((uint32_t)bVar39 & ~(uint32_t)puStack_98)) * 0x5eff0df1;
          lStack_a0 = (~(uVar27 | (uint64_t)puStack_98) & ~uStack_a8) * 0x5df21caf;
          uStack_c4 = (uint32_t)uVar31;
          uVar31 = FUN_7fffa52d26d0((param_1 << 0x1f | uVar19 >> 0x21) ^
                                    (param_1 << 2 | uVar19 >> 0x3e) ^ uVar19,
                                    (uVar23 & 0xffffffff) * 0x3d2d7d0b +
                                    ((uVar23 >> 0x20) * 0x3d2d7d0b +
                                     (uVar23 & 0xffffffff) * 0xd2a17281 << 0x20),0xffffffffac104ba5,
                                    (uStack_b0 | (uint64_t)puVar3 | uStack_a8) * -0x11df21d38,
                                    ((int64_t)puVar26 << 0x17 ^ (uint64_t)puVar26) * 0x8001);
          uVar31 = (uVar31 << 0x24 | uVar31 >> 0x1c) ^ (uVar31 << 0x35 | uVar31 >> 0xb) ^ uVar31;
          uVar31 = (uVar31 << 8 | uVar31 >> 0x38) ^ (uVar31 << 0x2a | uVar31 >> 0x16) ^ uVar31;
          uVar23 = (uVar31 << 0x14 | uVar31 >> 0x2c) ^ uVar31 ^ (uVar31 << 0x10 | uVar31 >> 0x30);
          uVar23 = (uVar23 << 0x28 | uVar23 >> 0x18) ^ (uVar23 << 0x20 | uVar23 >> 0x20) ^ uVar23;
          uVar31 = (uint64_t)uStack_c4;
          uVar23 = (uVar23 << 0x10 | uVar23 >> 0x30) << 0x20 | (uVar23 & 0xffffffffffff) >> 0x10;
          lVar35 = lStack_90;
        }
        if (3 < uVar23) {
          if (uStack_d0 < 4) {
            puVar18 = puVar26;
          }
          else {
            uVar31 = (int64_t)puVar26 + ((-0xfffffffd - uStack_d0) - lVar35);
            lVar22 = lVar35;
            puVar18 = puStack_98;
            if ((uint32_t)uVar31 < uVar7) {
              lVar22 = lVar16;
              puVar18 = puVar15;
            }
            if ((param_4 < puVar26) &&
               (uVar31 = uVar31 & 0xffffffff, puVar18 < (uint64_t *)(lVar22 + uVar31))) {
              puVar32 = (uint64_t *)(lVar22 + uVar31);
              puVar26 = (uint64_t *)((int64_t)puVar26 + -1);
              do {
                puVar32 = (uint64_t *)((int64_t)puVar32 + -1);
                if ((char)*puVar26 != *(char *)puVar32) break;
                uVar23 = uVar23 + 1;
                bVar11 = param_4 < puVar26;
                puVar26 = (uint64_t *)((int64_t)puVar26 + -1);
              } while (bVar11 && puVar18 < puVar32);
              puVar26 = (uint64_t *)((int64_t)puVar26 + 1);
            }
            uVar31 = (uint64_t)uStack_144;
            uStack_144 = (int)uStack_d0 - 3;
            puVar18 = puVar26;
          }
          goto LAB_7fffa5145d46;
        }
        uVar23 = (int64_t)puVar26 - (int64_t)param_4;
        puVar26 = (uint64_t *)((int64_t)puVar26 + (uVar23 >> 8) + 1);
        *(uint32_t *)(param_1 + 300) = (uint32_t)(0x7ff < uVar23);
      }
      uVar33 = (uint32_t)uVar31;
    } while (puVar26 < puStack_80);
  }
  param_3[1] = uVar33;
  *param_3 = uStack_144;
  return (int64_t)puVar8 - (int64_t)param_4;
}


// ============================================================================
// Function : FUN_7fffa5146560  |  RVA: 0x9d6560  |  Size: 1 bytes
// Callers  : FUN_7fffa52c6460@0xb56460, FUN_7fffa5697680@0xf27680
// Callees  : none
// ============================================================================
void FUN_7fffa5146560(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5146570  |  RVA: 0x9d6570  |  Size: 1117 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5146570(uint64_t param_1,uint32_t param_2,uint64_t param_3,uint32_t param_4,
                     uint64_t param_5,uint32_t param_6)

{
  uint32_t uVar1;
  uint64_t uVar2;
  int iVar3;
  code *pcVar4;
  int64_t lVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint32_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint32_t uVar13;
  
  uVar13 = (param_4 << 0x15 | param_4 >> 0xb) ^ (param_4 << 2 | param_4 >> 0x1e) ^
           (param_4 << 5 | param_4 >> 0x1b);
  uVar13 = uVar13 << 6 | uVar13 >> 0x1a;
  param_5 = (param_5 << 0x33 | param_5 >> 0xd) ^ (param_5 << 0x32 | param_5 >> 0xe) ^ param_5;
  param_5 = (param_5 << 0x24 | param_5 >> 0x1c) ^ (param_5 << 0x26 | param_5 >> 0x1a) ^ param_5;
  param_5 = (param_5 << 0xc | param_5 >> 0x34) ^ (param_5 << 8 | param_5 >> 0x38) ^ param_5;
  iVar3 = param_6 - uVar13;
  param_5 = (param_5 << 0x10 | param_5 >> 0x30) ^ (param_5 << 0x18 | param_5 >> 0x28) ^ param_5;
  param_5 = (param_5 << 0x20 | param_5 >> 0x20) ^ (param_5 << 0x30 | param_5 >> 0x10) ^ param_5;
  uVar11 = param_5 << 0x20 | param_5 >> 0x20;
  uVar11 = uVar11 >> 0xe ^ uVar11;
  uVar11 = uVar11 >> 0x1c ^ (param_5 & 0xffffffff) >> 0x18 ^ uVar11;
  if (iVar3 < 8) {
    if (0 < iVar3) {
      lVar5 = (int64_t)(int)uVar13 * 8 + uVar11;
      uVar11 = 1;
      lVar9 = 0x100000000;
      do {
        uVar2 = *(uint64_t *)(lVar5 + uVar11 * 8);
        uVar13 = *(uint32_t *)(lVar5 + -8 + uVar11 * 8);
        lVar10 = lVar9;
        uVar12 = uVar11;
        while (uVar13 < (uint32_t)uVar2) {
          *(uint64_t *)(lVar5 + uVar12 * 8) = *(uint64_t *)(lVar5 + -8 + uVar12 * 8);
          if ((int64_t)uVar12 < 2) {
            lVar10 = 0;
            goto LAB_7fffa5146984;
          }
          lVar10 = lVar10 + -0x100000000;
          uVar12 = uVar12 - 1;
          uVar13 = *(uint32_t *)(lVar5 + -8 + uVar12 * 8);
        }
        lVar10 = lVar10 >> 0x1d;
LAB_7fffa5146984:
        uVar11 = uVar11 + 1;
        *(uint64_t *)(lVar5 + lVar10) = uVar2;
        lVar9 = lVar9 + 0x100000000;
      } while (uVar11 != iVar3 + 1);
    }
  }
  else {
    do {
      while( true ) {
        uVar6 = uVar13 - 1;
        lVar9 = (int64_t)(int)param_6;
        uVar8 = *(uint32_t *)(uVar11 + lVar9 * 8);
        uVar12 = (uint64_t)(int)uVar13;
        if ((param_6 - uVar13 & 1) == 0) {
          uVar7 = uVar12;
        }
        else {
          if (uVar8 < *(uint32_t *)(uVar11 + uVar12 * 8)) {
            uVar6 = uVar13;
          }
          uVar7 = uVar12 ^ 1;
          if ((param_2 + 0x8726a34f ^ 0x17bdd543) <= param_2 + 0x76ffc7f0) {
            uVar7 = uVar12 + 1;
          }
        }
        if (lVar9 - 1U != uVar12) {
          while( true ) {
            if (uVar8 < *(uint32_t *)(uVar11 + uVar7 * 8)) {
              lVar5 = (int64_t)(int)uVar6;
              uVar6 = uVar6 + 1;
              uVar2 = *(uint64_t *)(uVar11 + 8 + lVar5 * 8);
              *(uint64_t *)(uVar11 + 8 + lVar5 * 8) = *(uint64_t *)(uVar11 + uVar7 * 8);
              *(uint64_t *)(uVar11 + uVar7 * 8) = uVar2;
              uVar1 = *(uint32_t *)(uVar11 + 8 + uVar7 * 8);
            }
            else {
              uVar1 = *(uint32_t *)(uVar11 + 8 + uVar7 * 8);
            }
            if (uVar8 < uVar1) {
              uVar6 = uVar6 + ((param_2 ^ 0x97165f74) < ~((param_2 | 1) * -0x1a44b6a7));
              uVar2 = *(uint64_t *)(uVar11 + (int64_t)(int)uVar6 * 8);
              *(uint64_t *)(uVar11 + (int64_t)(int)uVar6 * 8) =
                   *(uint64_t *)(uVar11 + 8 + uVar7 * 8);
              *(uint64_t *)(uVar11 + 8 + uVar7 * 8) = uVar2;
            }
            if (lVar9 - 2U == uVar7) break;
            uVar7 = uVar7 + 2;
          }
        }
        uVar2 = *(uint64_t *)(uVar11 + 8 + (int64_t)(int)uVar6 * 8);
        *(uint64_t *)(uVar11 + 8 + (int64_t)(int)uVar6 * 8) = *(uint64_t *)(uVar11 + lVar9 * 8)
        ;
        *(uint64_t *)(uVar11 + lVar9 * 8) = uVar2;
        if ((int)(param_6 - (uVar6 + 1)) <= (int)((uVar6 + 1) - uVar13)) break;
        uVar8 = (uVar13 << 0x10 | uVar13 >> 0x10) ^ (uVar13 << 0x1d | uVar13 >> 3) ^ uVar13;
        uVar13 = (~param_6 & uVar6) * 0x32e83298 + (uVar6 & param_6) * -0x32e83298 +
                 (~uVar6 | param_6) * 0x32e83297 + (~uVar6 | ~param_6) * -0x32e83299;
        uVar7 = uVar11 >> 0xe ^ uVar11;
        uVar12 = uVar7 << 0x33 | uVar7 >> 0xd;
        FUN_7fffa5146570(uVar12,0x57165f72,uVar7,uVar8 << 0x1b | uVar8 >> 5,
                         (uVar7 << 0x32 | uVar7 >> 0xe) ^ uVar12 ^ uVar7,uVar6);
        if ((int)param_6 <= (int)uVar13) {
          return;
        }
      }
      uVar8 = uVar6 + 2;
      uVar8 = (uVar8 * 0x20000000 | uVar8 >> 3) ^ (uVar8 * 0x10000 | uVar8 >> 0x10) ^ uVar8;
      uVar12 = uVar11 >> 0xe ^ uVar11;
      uVar12 = (uVar12 << 0x32 | uVar12 >> 0xe) ^ (uVar12 << 0x33 | uVar12 >> 0xd) ^ uVar12;
      pcVar4 = (code *)((int64_t)(short)(((uint16_t)param_2 ^ 0x16c5) * -0x4afb) + 0x7fffa51491dd);
      (*pcVar4)(pcVar4,0x57165f72,uVar12,uVar8 << 0x1b | uVar8 >> 5,uVar12,param_6);
      param_6 = uVar6;
    } while ((int)uVar13 < (int)uVar6);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5146a00  |  RVA: 0x9d6a00  |  Size: 640 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5146a00(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint8_t bVar3;
  code *pcVar4;
  bool bVar5;
  uint64_t in_RAX;
  int64_t lVar6;
  uint64_t uVar7;
  uint32_t in_R11D;
  int64_t *plVar8;
  
  plVar8 = (int64_t *)(in_RAX ^ 0xb25392fa);
  uVar1 = plVar8[0xf];
  if (0xf < uVar1) {
    lVar2 = plVar8[0xc];
    uVar7 = ((uint64_t)
             ((uint64_t)(0xc844eb92 - in_R11D ^ 0x9858a7cd) <
             (uint64_t)(int64_t)(int)(in_R11D ^ 0x95e3deb6)) - 1 | 1) + uVar1;
    bVar5 = uVar7 < 0xfff;
    if (in_R11D == 0x6fec43a7) {
      bVar5 = 0xfff < uVar7;
    }
    lVar6 = lVar2;
    if (bVar5) {
      lVar6 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (uint64_t)((lVar2 + -8) - lVar6)) goto LAB_7fffa5146c7e;
      uVar7 = uVar1 + 0x28;
    }
    (*(code *)((int64_t)(short)(0x1949 - (uint16_t)in_R11D) + 0x7fffa5085a5e))(lVar6,uVar7);
  }
  plVar8[0xf] = 0xf;
  uVar1 = plVar8[0xb];
  plVar8[0xe] = 0;
  *(uint8_t *)(plVar8 + 0xc) = 0;
  if (in_R11D + 0x9013bc68 < uVar1) {
    uVar7 = uVar1 + 1;
    lVar2 = plVar8[8];
    lVar6 = lVar2;
    if (0xfff < uVar7) {
      lVar6 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (uint64_t)((lVar2 + -8) - lVar6)) goto LAB_7fffa5146c7e;
      uVar7 = uVar1 + 0x28;
    }
    thunk_FUN_7fffa55eeda0(lVar6,uVar7);
  }
  plVar8[10] = 0;
  uVar1 = plVar8[7];
  *(uint8_t *)(plVar8 + 8) = 0;
  plVar8[0xb] = 0xf;
  if (0xf < uVar1) {
    lVar2 = plVar8[4];
    uVar7 = uVar1 + 1;
    lVar6 = lVar2;
    if (0xfff < uVar7) {
      lVar6 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (uint64_t)((lVar2 + -8) - lVar6)) goto LAB_7fffa5146c7e;
      uVar7 = uVar1 + 0x28;
    }
    bVar3 = (uint8_t)in_R11D & 0x1f;
    (*(code *)(&UNK_7fffa509287f + (int)(0xff83c0ffU >> bVar3 | -0x7c3f01 << 0x20 - bVar3)))
              (lVar6,uVar7);
  }
  plVar8[7] = 0xf;
  *(uint8_t *)(plVar8 + 4) = 0;
  uVar1 = plVar8[3];
  plVar8[6] = 0;
  if (0xf < uVar1) {
    lVar2 = *plVar8;
    uVar7 = uVar1 + 1;
    lVar6 = lVar2;
    if (0xfff < uVar7) {
      lVar6 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (uint64_t)((lVar2 + -8) - lVar6)) {
LAB_7fffa5146c7e:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar7 = uVar1 + 0x28;
    }
    (*(code *)((int64_t)(short)(((uint16_t)in_R11D | 1) * -0x2851) + 0x7fffa508afd7))(lVar6,uVar7);
  }
  plVar8[3] = 0xf;
  *(uint8_t *)plVar8 = 0;
  plVar8[2] = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa5146c80  |  RVA: 0x9d6c80  |  Size: 1203 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5146c80(uint64_t param_1,uint32_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint64_t in_RAX;
  uint64_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint32_t uVar7;
  uint8_t bVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint8_t in_R10B;
  uint64_t uVar12;
  uint8_t *pbVar13;
  uint8_t bVar14;
  int64_t in_R11;
  uint8_t bVar15;
  uint8_t bVar16;
  uint32_t uVar17;
  
  uVar4 = param_1 << 0x2c | param_1 >> 0x14;
  uVar11 = (uint64_t)in_R10B;
  uVar6 = (in_RAX << 4 | in_RAX >> 0x3c) ^ (in_RAX << 0x32 | in_RAX >> 0xe) ^ in_RAX;
  uVar12 = (int64_t)uVar4 >> 1;
  if (((param_2 ^ 0x5b9c5c5a) << 0x18 | (param_2 ^ 0x5b9c5c5a) >> 8) == 0x9a8c537) {
    uVar12 = uVar4 * 2;
  }
  uVar12 = (uVar12 ^ uVar4) * 4 ^ uVar12 ^ uVar4;
  uVar12 = uVar12 << 4 ^ uVar12;
  uVar4 = uVar12 << 8 ^ uVar12;
  uVar4 = uVar4 << 0x10 ^ uVar4;
  pbVar13 = (uint8_t *)(uVar4 << 0x20 ^ uVar4);
  uVar6 = (uVar6 << 0x24 | uVar6 >> 0x1c) ^ (uVar6 << 8 | uVar6 >> 0x38) ^ uVar6;
  uVar6 = (uVar6 << 0x10 | uVar6 >> 0x30) ^ (uVar6 << 8 | uVar6 >> 0x38) ^ uVar6;
  uVar6 = (uVar6 << 0x20 | uVar6 >> 0x20) ^ (uVar6 << 0x10 | uVar6 >> 0x30) ^ uVar6;
  uVar4 = (uVar6 << 0x20 | uVar6 >> 0x20) + (int64_t)(int)((param_2 ^ 0xb2d3f3cb) * -0x7f52a9bd);
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) ^ (uVar4 << 0x2e | uVar4 >> 0x12) ^ uVar4;
  uVar4 = uVar4 << 0x24 | uVar4 >> 0x1c;
  if ((uVar11 + 2 <= uVar4) &&
     ((((*pbVar13 & 3) == 2 || (0xbf < *(uint8_t *)(in_R11 + 1 + uVar11))) && (uVar11 + 3 <= uVar4))))
  {
    bVar14 = pbVar13[5];
    if ((((uint8_t)(bVar14 & 0x20) == (uint8_t)(('S' - (uint8_t)param_2) * -0x3d)) && (-1 < (char)bVar14)) &&
       (((pbVar13[6] | bVar14) & 3) == 0)) {
      uVar17 = ~((param_2 | 1) * 0x593346cd);
      if ((param_2 + 0x8e2e6957 ^ 0x9de70388) == (uVar17 << 0x1e | uVar17 >> 2)) {
        uVar17 = *(uint32_t *)(pbVar13 + 0x18);
        bVar16 = pbVar13[0xb] + 3;
        uVar3 = 0xb9715dd6;
        pbVar13[5] = bVar14 | 4;
        pbVar13[2] = pbVar13[2] & 0xc0 | 0x12;
        pbVar13[0x20] = *(uint8_t *)(in_R11 + uVar11);
        bVar8 = *(uint8_t *)(in_R11 + 1 + uVar11);
        pbVar13[0x21] = bVar8;
        if ((uint64_t)((param_2 + 0xf66ba409) * 0x8000000 | param_2 + 0xf66ba409 >> 5) <=
            (uint64_t)
            (int64_t)
            (int)(((param_2 + 0x55e9600e) * 0x2000000 | param_2 + 0x55e9600e >> 7) + 0xf8f96d38)) {
        }
      }
      else {
        bVar15 = ~bVar14;
        bVar1 = (uint8_t)uVar12;
        bVar2 = ~bVar1;
        uVar17 = *(uint32_t *)(pbVar13 + 0x18);
        bVar8 = *(uint8_t *)(in_R11 + 1 + uVar11);
        uVar3 = (param_2 ^ 0x22edc2e0) + 0x818422d0;
        uVar3 = uVar3 * 0x1000 | uVar3 >> 0x14;
        pbVar13[0x20] = *(uint8_t *)(in_R11 + uVar11);
        pbVar13[0x21] = bVar8;
        pbVar13[2] = pbVar13[2] & 0xc0 | 0x12;
        bVar16 = pbVar13[0xb] + 3;
        pbVar13[5] = ((((bVar14 | 0xfb) & bVar2) * -0x73 + (bVar14 & bVar2 & 0xfb) * 't' +
                      (bVar15 | bVar1 | 4) * 'J' + ((bVar15 | 0xfb) & bVar1) * -0x2a +
                      (bVar14 ^ bVar1 ^ 0xfb) *
                      ((uint8_t)((param_2 ^ 0x93596bc6) << 1) | (int)(param_2 ^ 0x93596bc6) < 0) +
                      (bVar15 & 4 | bVar1) * -0x49) - (bVar15 & 0xfb & bVar2)) +
                     (bVar15 & 0xfb & bVar1) * ((uint8_t)((param_2 | 1) * -0x574588fe >> 0x10) ^ 0xcd);
      }
      if ((uint64_t)~((0x73855487 - uVar3) * 0x4000000 | 0x73855487 - uVar3 >> 6) <
          (uint64_t)(int64_t)(int)((uVar3 ^ 0x99731ce) - param_2)) {
        bVar14 = *(uint8_t *)(in_R11 + 2 + uVar11);
        pbVar13[0xb] = bVar16;
      }
      else {
        pbVar13[0xb] = bVar16;
        bVar14 = *(uint8_t *)(in_R11 + 2 + uVar11);
      }
      uVar5 = (param_2 ^ 0xa7b8c958) * 0xb238f01 + 0xc0478b9c;
      bVar1 = (uint8_t)uVar3 & 0x1f;
      uVar9 = (uint32_t)(bVar14 & 3) << 7;
      bVar16 = (uint8_t)uVar3 & 0x1f;
      uVar10 = 0xc498180bU >> bVar16 | -0x3b67e7f5 << 0x20 - bVar16;
      bVar16 = (uint8_t)param_2 & 0x1f;
      uVar3 = ((uint32_t)(uint8_t)((bVar8 >> 2 & 8 | bVar8 >> 4 & 4) ^ 0xc) | (uint32_t)(-1 < (char)bVar8) * 2
               | (uint32_t)(bVar14 >> 2 & 1) << 0xe | (uint32_t)(bVar8 & 0x1f) << 9 | uVar17 & 0xfff00070) +
              (uint32_t)(bVar14 >> 7);
      uVar7 = (uint32_t)((uint8_t)~bVar14 >> 3 & 0xf) << 0x10;
      uVar17 = uVar3 & 0xfff07ff7 | uVar9;
      if ((uint64_t)(int64_t)(int)(uVar5 >> bVar1 | uVar5 << 0x20 - bVar1) <
          (uint64_t)(uVar10 << bVar16 | uVar10 >> 0x20 - bVar16)) {
        uVar17 = uVar3 | 0xfff07ff7;
      }
      uVar17 = uVar17 | uVar7 & 0x70000;
      if ((*pbVar13 & 3) == 2) {
        uVar17 = uVar3 | uVar9 | uVar7;
      }
      *(uint32_t *)(pbVar13 + 0x18) = uVar17;
      pbVar13[0x22] = bVar14;
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5147134  |  RVA: 0x9d7134  |  Size: 242 bytes
// Callers  : FUN_7fffa55d55c0@0xe655c0, FUN_7fffa5488508@0xd18508
// Callees  : _guard_dispatch_icall@0xf30810, FUN_7fffa5008150@0x898150, FUN_7fffa5488ca4@0xd18ca4
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_7fffa5147134(uint64_t param_1,uint32_t param_2,uint64_t param_3,uint32_t param_4,
                     uint64_t param_5,uint32_t param_6,uint64_t param_7,uint64_t param_8,
                     uint64_t param_9)

{
  uint32_t uVar1;
  code *pcVar2;
  
  if (g_api_KERNELBASE_dll_LCMapStringEx == (uint8_t *)0xffffffffffffffff) {
LAB_7fffa51471df:
    uVar1 = FUN_7fffa5008150(param_1,0);
    (*(code *)&DAT_7ff84ea32590)(uVar1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar2 = (code *)g_api_KERNELBASE_dll_LCMapStringEx;
    if (g_api_KERNELBASE_dll_LCMapStringEx == (uint8_t *)0x0) {
      pcVar2 = (code *)FUN_7fffa5488ca4(0x12,"LCMapStringEx",&UNK_7fffa56b3e88,&UNK_7fffa56b3e90);
      if (pcVar2 == (code *)0x0) goto LAB_7fffa51471df;
    }
    (*pcVar2)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5147230  |  RVA: 0x9d7230  |  Size: 1133 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa51474b4) */

void FUN_7fffa5147230(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  int64_t lVar7;
  int64_t lVar8;
  
  bRam00007fffa4786227 = '\0';
  uRam00007fffa4786259 = 0;
  uRam00007fffa4786261 = 0;
  uRam00007fffa4786249 = 0;
  uRam00007fffa4786251 = 0;
  uRam00007fffa4786239 = 0;
  uRam00007fffa4786241 = 0;
  uRam00007fffa4786229 = 0;
  uRam00007fffa4786231 = 0;
  _uRam00007fffa4786272 = 0;
  uVar1 = rdtsc();
  lVar8 = (uVar1 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar1)) * 0x723084036b18df2;
  for (lVar7 = 3;
      *(char *)(lVar7 + 0x7fffa4786214) = (char)((uint64_t)(lVar8 * 0x4036b18df2) >> 0x20),
      lVar7 != 0x67; lVar7 = lVar7 + 4) {
    *(char *)(lVar7 + 0x7fffa4786217) = (char)((uint64_t)(lVar8 * 0x41768e6737b85610) >> 0x20);
    *(char *)(lVar7 + 0x7fffa4786216) = (char)((uint64_t)(lVar8 * 0x7c53aa1d48) >> 0x20);
    *(char *)(lVar7 + 0x7fffa4786215) = (char)((uint64_t)(lVar8 * 0x7af5878c4) >> 0x20);
    lVar8 = lVar8 * 0x41768e6737b85610;
  }
  bVar3 = bRam00007fffa4786276;
  bVar2 = bRam00007fffa4786275;
  bRam00007fffa4786227 = bRam00007fffa4786227 + 1 & 7;
  lVar8 = (uint64_t)bRam00007fffa4786227 * 8;
  bVar5 = bRam00007fffa4786278;
  bVar6 = bRam00007fffa4786279;
  *(uint8_t *)(lVar8 + 0x7fffa478622b) = bRam00007fffa4786274 << 3 | bRam00007fffa4786274 >> 5;
  bVar4 = bRam00007fffa4786277;
  *(uint8_t *)(lVar8 + 0x7fffa4786230) = bVar6 << 3 | bVar6 >> 5;
  *(uint8_t *)(lVar8 + 0x7fffa478622c) = bVar2 << 3 | bVar2 >> 5;
  bVar2 = uRam00007fffa4786272._1_1_;
  *(uint8_t *)(lVar8 + 0x7fffa478622d) = bVar3 << 3 | bVar3 >> 5;
  *(uint8_t *)(lVar8 + 0x7fffa478622a) = bVar2 << 3 | bVar2 >> 5;
  bVar2 = (uint8_t)uRam00007fffa4786272;
  *(uint8_t *)(lVar8 + 0x7fffa478622e) = bVar4 << 3 | bVar4 >> 5;
  *(uint8_t *)(lVar8 + 0x7fffa478622f) = bVar5 << 3 | bVar5 >> 5;
  *(uint8_t *)(lVar8 + 0x7fffa4786229) = bVar2 << 3 | bVar2 >> 5;
  return;
}


// ============================================================================
// Function : FUN_7fffa51476a0  |  RVA: 0x9d76a0  |  Size: 270 bytes
// Callers  : FUN_7fffa52444e0@0xad44e0
// Callees  : FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa56a65a0@0xf365a0, FUN_7fffa5657488@0xee7488
// ============================================================================
int64_t FUN_7fffa51476a0(void)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int64_t lVar5;
  int64_t lVar4;
  short *psVar6;
  uint64_t uVar7;
  
  psVar3 = (short *)(*(code *)&DAT_7ff84ea41b40)();
  if (psVar3 != (short *)0x0) {
    sVar1 = *psVar3;
    psVar6 = psVar3;
    while (sVar1 != 0) {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (psVar6[lVar4] != 0);
      psVar6 = psVar6 + lVar5 + 2;
      sVar1 = *psVar6;
    }
    uVar7 = (int64_t)psVar6 + (2 - (int64_t)psVar3) >> 1;
    iVar2 = FUN_7fffa5657488(0,0,psVar3,uVar7 & 0xffffffff,0,0,0,0);
    if (iVar2 != 0) {
      lVar4 = FUN_7fffa56a65a0((int64_t)iVar2);
      if (lVar4 != 0) {
        iVar2 = FUN_7fffa5657488(0,0,psVar3,uVar7 & 0xffffffff,lVar4,iVar2,0,0);
        if (iVar2 == 0) {
          FUN_7fffa52d8dd0(lVar4);
          lVar4 = 0;
        }
        else {
          FUN_7fffa52d8dd0(0);
        }
        (*(code *)&DAT_7ff84ea42480)(psVar3);
        return lVar4;
      }
      FUN_7fffa52d8dd0(0);
    }
    (*(code *)&DAT_7ff84ea42480)(psVar3);
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa51477b0  |  RVA: 0x9d77b0  |  Size: 42299 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa51477b0(void) {
    /* +0x9d77b0 */ __asm { PUSH RBP }
    /* +0x9d77b1 */ __asm { PUSH RDI }
    /* +0x9d77b2 */ __asm { PUSH R15 }
    /* +0x9d77b4 */ __asm { PUSH R12 }
    /* +0x9d77b6 */ __asm { PUSH RBX }
    /* +0x9d77b7 */ __asm { PUSH R13 }
    /* +0x9d77b9 */ __asm { PUSH R14 }
    /* +0x9d77bb */ __asm { PUSH RSI }
    /* +0x9d77bc */ __asm { SUB RSP,0x9e8 }
    /* +0x9d77c3 */ __asm { MOVDQA xmmword ptr [RSP + 0x9d0],XMM13 }
    /* +0x9d77cd */ __asm { MOVDQA xmmword ptr [RSP + 0x9c0],XMM9 }
    /* +0x9d77d7 */ __asm { MOVAPS xmmword ptr [RSP + 0x9b0],XMM10 }
    /* +0x9d77e0 */ __asm { MOVDQA xmmword ptr [RSP + 0x9a0],XMM8 }
    /* +0x9d77ea */ __asm { MOVDQA xmmword ptr [RSP + 0x990],XMM7 }
    /* +0x9d77f3 */ __asm { MOVDQA xmmword ptr [RSP + 0x980],XMM15 }
    /* +0x9d77fd */ __asm { MOVDQA xmmword ptr [RSP + 0x970],XMM14 }
    /* +0x9d7807 */ __asm { MOVDQA xmmword ptr [RSP + 0x960],XMM12 }
    /* +0x9d7811 */ __asm { MOVDQA xmmword ptr [RSP + 0x950],XMM11 }
    /* +0x9d781b */ __asm { MOVDQA xmmword ptr [RSP + 0x940],XMM6 }
    /* +0x9d7824 */ __asm { MOV qword ptr [RSP + 0x690],R10 }
    /* +0x9d782c */ __asm { MOV ESI,R8D }
    /* +0x9d782f */ __asm { MOV R10,qword ptr [RSP + 0xa50] }
    /* +0x9d7837 */ __asm { MOV R9,R10 }
    /* +0x9d783a */ __asm { ROL R9,0x10 }
    /* +0x9d783e */ __asm { MOV R12,qword ptr [RSP + 0xa58] }
    /* +0x9d7846 */ __asm { MOV R11,R10 }
    /* +0x9d7849 */ __asm { ROL R11,0x2d }
    /* +0x9d784d */ __asm { MOV EBX,0x87005d75 }
    /* +0x9d7852 */ __asm { MOV R8,RCX }
    /* +0x9d7855 */ __asm { ROL R8,0x1d }
    /* +0x9d7859 */ __asm { MOV RDI,RCX }
    /* +0x9d785c */ __asm { AND RDI,R8 }
    /* +0x9d785f */ __asm { XOR R8,RCX }
    /* +0x9d7862 */ __asm { ROL RCX,0x1e }
    /* +0x9d7866 */ __asm { MOV EBP,R12D }
    /* +0x9d7869 */ __asm { SUB EBX,R12D }
    /* +0x9d786c */ __asm { ROL EBX,0x7 }
    /* +0x9d786f */ __asm { XOR R11,R9 }
    /* +0x9d7872 */ __asm { XOR R11,R10 }
    /* +0x9d7875 */ __asm { MOV R10,R11 }
    /* +0x9d7878 */ __asm { ROL R10,0x1a }
    /* +0x9d787c */ __asm { OR EBP,0x1 }
    /* +0x9d787f */ __asm { MOV R14,R11 }
    /* +0x9d7882 */ __asm { ROL R14,0x20 }
    /* +0x9d7886 */ __asm { XOR R14,R10 }
    /* +0x9d7889 */ __asm { MOV R9D,0xaa309b5 }
    /* +0x9d788f */ __asm { ADD R9D,0x62b122e8 }
    /* +0x9d7896 */ __asm { ROR R9D,0x1 }
    /* +0x9d7899 */ __asm { IMUL R9D,EBP }
    /* +0x9d789d */ __asm { XOR R14,R11 }
    /* +0x9d78a0 */ __asm { ROL R14,0xc }
    /* +0x9d78a4 */ __asm { CMP RBX,R9 }
    /* +0x9d78a7 */ __asm { CMOVG R8,RDI }
    /* +0x9d78ab */ __asm { XOR R8,RCX }
    /* +0x9d78ae */ __asm { MOV R11,R8 }
    /* +0x9d78b1 */ __asm { ROL R11,0x3c }
    /* +0x9d78b5 */ __asm { MOV RCX,R8 }
    /* +0x9d78b8 */ __asm { ROL RCX,0x3a }
    /* +0x9d78bc */ __asm { XOR RCX,R11 }
    /* +0x9d78bf */ __asm { XOR RCX,R8 }
    /* +0x9d78c2 */ __asm { MOV R8,RCX }
    /* +0x9d78c5 */ __asm { ROL R8,0x38 }
    /* +0x9d78c9 */ __asm { MOV R11,RCX }
    /* +0x9d78cc */ __asm { ROL R11,0x34 }
    /* +0x9d78d0 */ __asm { XOR R11,R8 }
    /* +0x9d78d3 */ __asm { XOR R11,RCX }
    /* +0x9d78d6 */ __asm { MOV R8,R11 }
    /* +0x9d78d9 */ __asm { ROL R8,0x28 }
    /* +0x9d78dd */ __asm { MOV RCX,R11 }
    /* +0x9d78e0 */ __asm { ROL RCX,0x30 }
    /* +0x9d78e4 */ __asm { XOR RCX,R8 }
    /* +0x9d78e7 */ __asm { XOR RCX,R11 }
    /* +0x9d78ea */ __asm { MOV R8,RCX }
    /* +0x9d78ed */ __asm { ROL R8,0x20 }
    /* +0x9d78f1 */ __asm { MOV R11,RCX }
    /* +0x9d78f4 */ __asm { ROL R11,0x10 }
    /* +0x9d78f8 */ __asm { XOR R11,R8 }
    /* +0x9d78fb */ __asm { XOR R11,RCX }
    /* +0x9d78fe */ __asm { ROL R11,0x20 }
    /* +0x9d7902 */ __asm { MOV RDI,R11 }
    /* +0x9d7905 */ __asm { SHL RDI,0x39 }
    /* +0x9d7909 */ __asm { ADD R11,RDI }
    /* +0x9d790c */ __asm { MOVD XMM4,EBP }
    /* +0x9d7910 */ __asm { MOVDQA xmmword ptr [RSP + 0x580],XMM4 }
    /* +0x9d7919 */ __asm { MOVD XMM10,R12D }
    /* +0x9d791e */ __asm { CMP R11,0x1000 }
    /* +0x9d7925 */ __asm { MOV dword ptr [RSP + 0x774],EBP }
    /* +0x9d792c */ __asm { MOVDQA xmmword ptr [RSP + 0x5e0],XMM10 }
    /* +0x9d7936 */ __asm { MOV qword ptr [RSP + 0x670],RAX }
    /* +0x9d793e */ __asm { MOV dword ptr [RSP + 0x4fc],ESI }
    /* +0x9d7945 */ __asm { JBE 0x7fffa5147b38 }
    /* +0x9d794b */ __asm { MOV R10,0x0 }
    /* +0x9d7952 */ __asm { NOP }
    /* +0x9d7954 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x9d795b */ __asm { LEA RCX,[0x7fffa5149df9] }
    /* +0x9d7962 */ __asm { MOV R9D,0x60698de0 }
    /* +0x9d7968 */ __asm { MOV dword ptr [RSP + 0x470],R9D }
    /* +0x9d7970 */ __asm { MOV RBP,R14 }
    /* +0x9d7973 */ __asm { ROL RBP,0x2d }
    /* +0x9d7977 */ __asm { MOV R8D,0x66195bfc }
    /* +0x9d797d */ __asm { MOV R9D,0x287f4e51 }
    /* +0x9d7983 */ __asm { SUB R9D,R8D }
    /* +0x9d7986 */ __asm { LEA R8,[0x7fffa5155fbb] }
    /* +0x9d798d */ __asm { MOV R10D,0xd5e46480 }
    /* +0x9d7993 */ __asm { XOR R10D,R12D }
    /* +0x9d7996 */ __asm { IMUL R10D,R10D,0x2b823619 }
    /* +0x9d799d */ __asm { MOVSXD R10,R10D }
    /* +0x9d79a0 */ __asm { MOVQ XMM1,RBP }
    /* +0x9d79a5 */ __asm { MOV RBP,R14 }
    /* +0x9d79a8 */ __asm { ROL RBP,0x10 }
    /* +0x9d79ac */ __asm { MOVQ XMM4,RBP }
    /* +0x9d79b1 */ __asm { MOV R15W,0x4621 }
    /* +0x9d79b6 */ __asm { LEA RBP,[R11 + -0x1] }
    /* +0x9d79ba */ __asm { ADD R15D,R12D }
    /* +0x9d79bd */ __asm { IMUL R15D,R15D,0x1a7 }
    /* +0x9d79c4 */ __asm { MOV RBX,R14 }
    /* +0x9d79c7 */ __asm { MOVSX R14,R15W }
    /* +0x9d79cb */ __asm { ADD R14,RCX }
    /* +0x9d79ce */ __asm { SHR RBP,0xa }
    /* +0x9d79d2 */ __asm { OR RBP,0x1 }
    /* +0x9d79d6 */ __asm { BSR RCX,RBP }
    /* +0x9d79da */ __asm { MOV EBP,0x400 }
    /* +0x9d79df */ __asm { SHL RBP,CL }
    /* +0x9d79e2 */ __asm { PXOR XMM4,XMM1 }
    /* +0x9d79e6 */ __asm { MOV R13D,ESI }
    /* +0x9d79e9 */ __asm { MOV RSI,RBP }
    /* +0x9d79ec */ __asm { ROL RSI,0x1d }
    /* +0x9d79f0 */ __asm { MOVQ RAX,XMM4 }
    /* +0x9d79f5 */ __asm { MOV RCX,RBP }
    /* +0x9d79f8 */ __asm { ROL RCX,0x1e }
    /* +0x9d79fc */ __asm { XOR RAX,RBX }
    /* +0x9d79ff */ __asm { XOR RCX,RSI }
    /* +0x9d7a02 */ __asm { ADD RDI,RBP }
    /* +0x9d7a05 */ __asm { SUB R11,RDI }
    /* +0x9d7a08 */ __asm { MOV R15,R11 }
    /* +0x9d7a0b */ __asm { ROL R15,0x1d }
    /* +0x9d7a0f */ __asm { MOV RSI,R11 }
    /* +0x9d7a12 */ __asm { ROL RSI,0x1e }
    /* +0x9d7a16 */ __asm { XOR RSI,R15 }
    /* +0x9d7a19 */ __asm { LEA RDI,[RDX + RBP*0x1] }
    /* +0x9d7a1d */ __asm { MOV qword ptr [RSP + 0x8f0],RDI }
    /* +0x9d7a25 */ __asm { XOR RCX,RBP }
    /* +0x9d7a28 */ __asm { XOR RSI,R11 }
    /* +0x9d7a2b */ __asm { SHR RBP,0xa }
    /* +0x9d7a2f */ __asm { ADD RBP,RBX }
    /* +0x9d7a32 */ __asm { MOV R15,RBP }
    /* +0x9d7a35 */ __asm { ROL R15,0x2d }
    /* +0x9d7a39 */ __asm { MOV RBX,R12 }
    /* +0x9d7a3c */ __asm { MOV R12,RBP }
    /* +0x9d7a3f */ __asm { ROL R12,0x10 }
    /* +0x9d7a43 */ __asm { XOR R12,R15 }
    /* +0x9d7a46 */ __asm { XOR R12,RBP }
    /* +0x9d7a49 */ __asm { IMUL R11D,dword ptr [RSP + 0x470],0x34d2df9b }
    /* +0x9d7a55 */ __asm { SUB R11D,EBX }
    /* +0x9d7a58 */ __asm { IMUL R9D,R9D,-0x1e5790df }
    /* +0x9d7a5f */ __asm { MOVSXD RDI,R9D }
    /* +0x9d7a62 */ __asm { ADD RDI,R8 }
    /* +0x9d7a65 */ __asm { MOVSXD RBX,R11D }
    /* +0x9d7a68 */ __asm { MOV qword ptr [RSP + 0x28],R10 }
    /* +0x9d7a6d */ __asm { MOV qword ptr [RSP + 0x20],RAX }
    /* +0x9d7a72 */ __asm { MOVZX R15D,R13B }
    /* +0x9d7a76 */ __asm { LEA R10,[RSP + 0x40] }
    /* +0x9d7a7b */ __asm { MOV R8D,R15D }
    /* +0x9d7a7e */ __asm { MOV RBP,qword ptr [RSP + 0x670] }
    /* +0x9d7a86 */ __asm { MOV RAX,RBP }
    /* +0x9d7a89 */ __asm { CALL R14 }
    /* +0x9d7a8c */ __asm { MOV R13,R10 }
    /* +0x9d7a8f */ __asm { MOV R14,R10 }
    /* +0x9d7a92 */ __asm { SHR R14,0x13 }
    /* +0x9d7a96 */ __asm { MOV qword ptr [RSP + 0x28],RBX }
    /* +0x9d7a9b */ __asm { MOV qword ptr [RSP + 0x20],R12 }
    /* +0x9d7aa0 */ __asm { MOV RCX,RSI }
    /* +0x9d7aa3 */ __asm { MOV R8D,R15D }
    /* +0x9d7aa6 */ __asm { MOV RDX,qword ptr [RSP + 0x8f0] }
    /* +0x9d7aae */ __asm { LEA R10,[RSP + 0xc0] }
    /* +0x9d7ab6 */ __asm { MOV RAX,RBP }
    /* +0x9d7ab9 */ __asm { CALL RDI }
    /* +0x9d7abb */ __asm { XOR R14,R13 }
    /* +0x9d7abe */ __asm { MOV RDX,R14 }
    /* +0x9d7ac1 */ __asm { SHR RDX,0x26 }
    /* +0x9d7ac5 */ __asm { XOR RDX,R14 }
    /* +0x9d7ac8 */ __asm { CMP RDX,0x1 }
    /* +0x9d7acc */ __asm { JZ 0x7fffa5147b64 }
    /* +0x9d7ad2 */ __asm { MOV R8,R10 }
    /* +0x9d7ad5 */ __asm { SHR R8,0x13 }
    /* +0x9d7ad9 */ __asm { XOR R8,R10 }
    /* +0x9d7adc */ __asm { MOV R11,R8 }
    /* +0x9d7adf */ __asm { SHR R11,0x26 }
    /* +0x9d7ae3 */ __asm { XOR R11,R8 }
    /* +0x9d7ae6 */ __asm { ADD RDX,R11 }
    /* +0x9d7ae9 */ __asm { CMP RDX,0x2 }
    /* +0x9d7aed */ __asm { JC 0x7fffa5147c28 }
    /* +0x9d7af3 */ __asm { MOV qword ptr [RSP + 0x708],RDX }
    /* +0x9d7afb */ __asm { LEA R8,[RDX + -0x2] }
    /* +0x9d7aff */ __asm { MOV R11,R8 }
    /* +0x9d7b02 */ __asm { SHR R11,0x1 }
    /* +0x9d7b05 */ __asm { LEA RDX,[R11 + 0x1] }
    /* +0x9d7b09 */ __asm { CMP R8,0x6 }
    /* +0x9d7b0d */ __asm { MOV qword ptr [RSP + 0x938],RDX }
    /* +0x9d7b15 */ __asm { JNC 0x7fffa514dda9 }
    /* +0x9d7b1b */ __asm { XOR EAX,EAX }
    /* +0x9d7b1d */ __asm { MOV EBX,dword ptr [RSP + 0x4fc] }
    /* +0x9d7b24 */ __asm { MOV RSI,qword ptr [RSP + 0xa58] }
    /* +0x9d7b2c */ __asm { MOV EDI,dword ptr [RSP + 0x774] }
    /* +0x9d7b33 */ __asm { JMP 0x7fffa514de50 }
    /* +0x9d7b38 */ __asm { MOV qword ptr [RSP + 0x668],RDX }
    /* +0x9d7b40 */ __asm { CMP R11,0x400 }
    /* +0x9d7b47 */ __asm { JNC 0x7fffa5147ba6 }
    /* +0x9d7b49 */ __asm { XOR EDX,EDX }
    /* +0x9d7b4b */ __asm { XOR R8D,R8D }
    /* +0x9d7b4e */ __asm { MOV qword ptr [RSP + 0x8e8],R11 }
    /* +0x9d7b56 */ __asm { CMP R11,RDX }
    /* +0x9d7b59 */ __asm { JA 0x7fffa514c0b2 }
    /* +0x9d7b5f */ __asm { JMP 0x7fffa5151e2b }
    /* +0x9d7b64 */ __asm { MOVDQA XMM4,xmmword ptr [RSP + 0x40] }
    /* +0x9d7b6a */ __asm { MOVDQA XMM1,xmmword ptr [RSP + 0x50] }
    /* +0x9d7b70 */ __asm { MOVDQA XMM0,xmmword ptr [RSP + 0x60] }
    /* +0x9d7b76 */ __asm { MOVDQA XMM3,xmmword ptr [RSP + 0x70] }
    /* +0x9d7b7c */ __asm { MOV R8,qword ptr [RSP + 0x690] }
    /* +0x9d7b84 */ __asm { MOVDQU xmmword ptr [R8 + 0x30],XMM3 }
    /* +0x9d7b8a */ __asm { MOVDQU xmmword ptr [R8 + 0x20],XMM0 }
    /* +0x9d7b90 */ __asm { MOVDQU xmmword ptr [R8 + 0x10],XMM1 }
    /* +0x9d7b96 */ __asm { MOVDQU xmmword ptr [R8],XMM4 }
    /* +0x9d7b9b */ __asm { MOV R8D,0x2 }
    /* +0x9d7ba1 */ __asm { JMP 0x7fffa5151e2b }
    /* +0x9d7ba6 */ __asm { MOV EDX,0x6fdbc17d }
    /* +0x9d7bab */ __asm { SUB EDX,R12D }
    /* +0x9d7bae */ __asm { MOV R8,R11 }
    /* +0x9d7bb1 */ __asm { MOV R11D,0xfa779da7 }
    /* +0x9d7bb7 */ __asm { IMUL R9D,R11D,-0x291f7a51 }
    /* +0x9d7bbe */ __asm { ADD R9D,0x5e17cb00 }
    /* +0x9d7bc5 */ __asm { NOP }
    /* +0x9d7bc6 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x9d7bcd */ __asm { MOV R10,0x0 }
    /* +0x9d7bd4 */ __asm { MOV ECX,R12D }
    /* +0x9d7bd7 */ __asm { ROR R9D,CL }
    /* +0x9d7bda */ __asm { MOV qword ptr [RSP + 0x728],R8 }
    /* +0x9d7be2 */ __asm { ADD R8,-0x400 }
    /* +0x9d7be9 */ __asm { MOV R11,R8 }
    /* +0x9d7bec */ __asm { SHR R11,0xa }
    /* +0x9d7bf0 */ __asm { CMP R8,0xc00 }
    /* +0x9d7bf7 */ __asm { SETC AL }
    /* +0x9d7bfa */ __asm { ADD EDX,0xdeaa52c3 }
    /* +0x9d7c00 */ __asm { LEA R10,[R11 + 0x1] }
    /* +0x9d7c04 */ __asm { CMP R9,RDX }
    /* +0x9d7c07 */ __asm { SETA CL }
    /* +0x9d7c0a */ __asm { XOR CL,AL }
    /* +0x9d7c0c */ __asm { MOV qword ptr [RSP + 0x938],R10 }
    /* +0x9d7c14 */ __asm { JZ 0x7fffa5147c32 }
    /* +0x9d7c16 */ __asm { XOR EAX,EAX }
    /* +0x9d7c18 */ __asm { XOR R10D,R10D }
    /* +0x9d7c1b */ __asm { MOV RCX,qword ptr [RSP + 0x668] }
    /* +0x9d7c23 */ __asm { JMP 0x7fffa5147cf6 }
    /* +0x9d7c28 */ __asm { XOR R8D,R8D }
    /* +0x9d7c2b */ __asm { XOR ECX,ECX }
    /* +0x9d7c2d */ __asm { JMP 0x7fffa5151da5 }
    /* +0x9d7c32 */ __asm { MOV RDX,0x25970dacdeaf113 }
    /* +0x9d7c3c */ __asm { MOV RCX,R12 }
    /* +0x9d7c3f */ __asm { OR RCX,0x1 }
    /* +0x9d7c43 */ __asm { IMUL RCX,RDX }
    /* +0x9d7c47 */ __asm { NOT RCX }
    /* +0x9d7c4a */ __asm { AND RCX,R10 }
    /* +0x9d7c4d */ __asm { MOV R10,RCX }
    /* +0x9d7c50 */ __asm { MOVDQA XMM4,xmmword ptr [0x7fffa56bc3a0] }
    /* +0x9d7c58 */ __asm { XOR EAX,EAX }
    /* +0x9d7c5a */ __asm { MOVQ XMM1,qword ptr [RSP + 0x668] }
    /* +0x9d7c63 */ __asm { PSHUFD XMM1,XMM1,0x44 }
    /* +0x9d7c68 */ __asm { MOVDQA XMM0,xmmword ptr [0x7fffa56bbf00] }
    /* +0x9d7c70 */ __asm { MOVDQA XMM3,xmmword ptr [0x7fffa56bafe0] }
    /* +0x9d7c78 */ __asm { JMP 0x7fffa5147c84 }
    /* +0x9d7c80 */ __asm { PADDQ XMM4,XMM3 }
    /* +0x9d7c84 */ __asm { MOVDQA XMM5,XMM1 }
    /* +0x9d7c88 */ __asm { PADDQ XMM5,XMM4 }
    /* +0x9d7c8c */ __asm { MOVDQA XMM2,XMM5 }
    /* +0x9d7c90 */ __asm { PADDQ XMM2,XMM0 }
    /* +0x9d7c94 */ __asm { MOVDQA xmmword ptr [RSP + RAX*0x8 + 0x50],XMM2 }
    /* +0x9d7c9a */ __asm { MOVDQA xmmword ptr [RSP + RAX*0x8 + 0x40],XMM5 }
    /* +0x9d7ca0 */ __asm { ADD RAX,0x4 }
    /* +0x9d7ca4 */ __asm { CMP RAX,R10 }
    /* +0x9d7ca7 */ __asm { JZ 0x7fffa5147cda }
    /* +0x9d7ca9 */ __asm { MOV R9D,0xff701daf }
    /* +0x9d7caf */ __asm { IMUL EDX,R9D,0x519a297f }
    /* +0x9d7cb6 */ __asm { MOV R9D,0x7819f343 }
    /* +0x9d7cbc */ __asm { SUB EDX,R12D }
    /* +0x9d7cbf */ __asm { ADD EDX,0x1391e179 }
    /* +0x9d7cc5 */ __asm { IMUL ECX,R9D,-0x40b826bd }
    /* +0x9d7ccc */ __asm { XOR ECX,R12D }
    /* +0x9d7ccf */ __asm { CMP RCX,RDX }
    /* +0x9d7cd2 */ __asm { JGE 0x7fffa5147c80 }
    /* +0x9d7cd4 */ __asm { PAND XMM4,XMM3 }
    /* +0x9d7cd8 */ __asm { JMP 0x7fffa5147c84 }
    /* +0x9d7cda */ __asm { SHL R10,0xa }
    /* +0x9d7cde */ __asm { MOV EAX,0x4 }
    /* +0x9d7ce3 */ __asm { CMP qword ptr [RSP + 0x938],0x4 }
    /* +0x9d7cec */ __asm { MOV RCX,qword ptr [RSP + 0x668] }
    /* +0x9d7cf4 */ __asm { JZ 0x7fffa5147d2c }
    /* +0x9d7cf6 */ __asm { MOV R9,R10 }
    /* +0x9d7cf9 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x9d7d00 */ __asm { MOV R10,0x0 }
    /* +0x9d7d07 */ __asm { NOP }
    /* +0x9d7d08 */ __asm { MOV R10,R9 }
    /* +0x9d7d0b */ __asm { NOP dword ptr [RAX + RAX*0x1] }
    /* +0x9d7d10 */ __asm { LEA RDX,[RCX + R10*0x1] }
    /* +0x9d7d14 */ __asm { ADD R10,0x400 }
    /* +0x9d7d1b */ __asm { MOV qword ptr [RSP + RAX*0x8 + 0x40],RDX }
    /* +0x9d7d20 */ __asm { LEA RDX,[RAX + 0x1] }
    /* +0x9d7d24 */ __asm { CMP RAX,R11 }
    /* +0x9d7d27 */ __asm { MOV RAX,RDX }
    /* +0x9d7d2a */ __asm { JNZ 0x7fffa5147d10 }
    /* +0x9d7d2c */ __asm { MOV R11D,0xcfff1bab }
    /* +0x9d7d32 */ __asm { MOV R9D,0x37176048 }
    /* +0x9d7d38 */ __asm { XOR R9D,R12D }
    /* +0x9d7d3b */ __asm { ROL R9D,0x16 }
    /* +0x9d7d3f */ __asm { MOV RAX,R10 }
    /* +0x9d7d42 */ __asm { MOV R10,qword ptr [RSP + 0x728] }
    /* +0x9d7d4a */ __asm { MOV RDX,R10 }
    /* +0x9d7d4d */ __asm { IMUL RDX,RAX }
    /* +0x9d7d51 */ __asm { MOVSXD RCX,R9D }
    /* +0x9d7d54 */ __asm { MOVQ XMM4,R10 }
    /* +0x9d7d59 */ __asm { MOV qword ptr [RSP + 0x660],RAX }
    /* +0x9d7d61 */ __asm { MOVQ XMM1,RAX }
    /* +0x9d7d66 */ __asm { PSUBQ XMM4,XMM1 }
    /* +0x9d7d6a */ __asm { MOVQ R10,XMM4 }
    /* +0x9d7d6f */ __asm { XOR R11D,R12D }
    /* +0x9d7d72 */ __asm { ROL R11D,0x1e }
    /* +0x9d7d76 */ __asm { IMUL R11D,R11D,-0x210d01f7 }
    /* +0x9d7d7d */ __asm { CMP RCX,R11 }
    /* +0x9d7d80 */ __asm { CMOVC R10,RDX }
    /* +0x9d7d84 */ __asm { MOV qword ptr [RSP + 0x8e8],R10 }
    /* +0x9d7d8c */ __asm { CMP R8,0xbff }
    /* +0x9d7d93 */ __asm { JBE 0x7fffa514b315 }
    /* +0x9d7d99 */ __asm { MOV R8D,0x963419d7 }
    /* +0x9d7d9f */ __asm { MOV EAX,ESI }
    /* +0x9d7da1 */ __asm { OR AL,0x1 }
    /* +0x9d7da3 */ __asm { MOV uint8_t ptr [RSP + 0x3f],AL }
    /* +0x9d7da7 */ __asm { LEA R9,[RSP + 0x40] }
    /* +0x9d7dac */ __asm { ADD R8,0x2fa7e8c1 }
    /* +0x9d7db3 */ __asm { MOV qword ptr [RSP + 0x558],R8 }
    /* +0x9d7dbb */ __asm { MOV R8,qword ptr [RSP + 0x938] }
    /* +0x9d7dc3 */ __asm { MOV qword ptr [RSP + 0x650],R8 }
    /* +0x9d7dcb */ __asm { MOV R8,qword ptr [RSP + 0x690] }
    /* +0x9d7dd3 */ __asm { MOV qword ptr [RSP + 0x778],R8 }
    /* +0x9d7ddb */ __asm { MOV RDX,R14 }
    /* +0x9d7dde */ __asm { MOV qword ptr [RSP + 0x678],R14 }
    /* +0x9d7de6 */ __asm { JMP 0x7fffa5147ef9 }
    /* +0x9d7df0 */ __asm { MOVDQA XMM1,XMM12 }
    /* +0x9d7df5 */ __asm { PUNPCKLDQ XMM1,XMM13 }
    /* +0x9d7dfa */ __asm { MOVDQA XMM3,XMM15 }
    /* +0x9d7dff */ __asm { MOVDQA XMM4,XMM5 }
    /* +0x9d7e03 */ __asm { MOVDQA XMM5,xmmword ptr [RSP + 0x8f0] }
    /* +0x9d7e0c */ __asm { PUNPCKLDQ XMM3,XMM5 }
    /* +0x9d7e10 */ __asm { MOV R9,qword ptr [RSP + 0x908] }
    /* +0x9d7e18 */ __asm { ADD R9,0x20 }
    /* +0x9d7e1c */ __asm { MOVDQA XMM8,xmmword ptr [RSP + 0x450] }
    /* +0x9d7e26 */ __asm { MOVDQA XMM2,XMM8 }
    /* +0x9d7e2b */ __asm { PUNPCKLDQ XMM2,XMM4 }
    /* +0x9d7e2f */ __asm { MOV R11,qword ptr [RSP + 0x650] }
    /* +0x9d7e37 */ __asm { ADD R11,-0x4 }
    /* +0x9d7e3b */ __asm { MOVDQA XMM10,XMM0 }
    /* +0x9d7e40 */ __asm { PUNPCKLDQ XMM10,XMM6 }
    /* +0x9d7e45 */ __asm { PUNPCKHDQ XMM12,XMM13 }
    /* +0x9d7e4a */ __asm { PUNPCKHDQ XMM0,XMM6 }
    /* +0x9d7e4e */ __asm { MOV RCX,qword ptr [RSP + 0x778] }
    /* +0x9d7e56 */ __asm { LEA R8,[RCX + 0x80] }
    /* +0x9d7e5d */ __asm { MOV RDX,qword ptr [RSP + 0x848] }
    /* +0x9d7e65 */ __asm { ADD RDX,0x4 }
    /* +0x9d7e69 */ __asm { PUNPCKHDQ XMM8,XMM4 }
    /* +0x9d7e6e */ __asm { MOVDQA XMM14,XMM12 }
    /* +0x9d7e73 */ __asm { PUNPCKHQDQ XMM14,XMM0 }
    /* +0x9d7e78 */ __asm { PUNPCKLQDQ XMM12,XMM0 }
    /* +0x9d7e7d */ __asm { MOVDQU xmmword ptr [RCX + 0x50],XMM12 }
    /* +0x9d7e83 */ __asm { MOVDQU xmmword ptr [RCX + 0x70],XMM14 }
    /* +0x9d7e89 */ __asm { MOVDQA XMM0,XMM1 }
    /* +0x9d7e8d */ __asm { PUNPCKHQDQ XMM0,XMM10 }
    /* +0x9d7e92 */ __asm { MOVDQU xmmword ptr [RCX + 0x30],XMM0 }
    /* +0x9d7e97 */ __asm { PUNPCKHDQ XMM15,XMM5 }
    /* +0x9d7e9c */ __asm { MOVDQA XMM0,XMM8 }
    /* +0x9d7ea1 */ __asm { PUNPCKLQDQ XMM0,XMM15 }
    /* +0x9d7ea6 */ __asm { MOVDQU xmmword ptr [RCX + 0x40],XMM0 }
    /* +0x9d7eab */ __asm { PUNPCKHQDQ XMM8,XMM15 }
    /* +0x9d7eb0 */ __asm { MOVDQU xmmword ptr [RCX + 0x60],XMM8 }
    /* +0x9d7eb6 */ __asm { MOVDQA XMM4,XMM2 }
    /* +0x9d7eba */ __asm { PUNPCKLQDQ XMM4,XMM3 }
    /* +0x9d7ebe */ __asm { MOVDQU xmmword ptr [RCX],XMM4 }
    /* +0x9d7ec2 */ __asm { PUNPCKHQDQ XMM2,XMM3 }
    /* +0x9d7ec6 */ __asm { MOVDQU xmmword ptr [RCX + 0x20],XMM2 }
    /* +0x9d7ecb */ __asm { PUNPCKLQDQ XMM1,XMM10 }
    /* +0x9d7ed0 */ __asm { MOVDQU xmmword ptr [RCX + 0x10],XMM1 }
    /* +0x9d7ed5 */ __asm { MOV qword ptr [RSP + 0x778],R8 }
    /* +0x9d7edd */ __asm { MOV qword ptr [RSP + 0x650],R11 }
    /* +0x9d7ee5 */ __asm { CMP R11,0x3 }
    /* +0x9d7ee9 */ __asm { MOVDQA XMM10,xmmword ptr [RSP + 0x5e0] }
    /* +0x9d7ef3 */ __asm { JBE 0x7fffa514b33f }
    /* +0x9d7ef9 */ __asm { MOV qword ptr [RSP + 0x908],R9 }
    /* +0x9d7f01 */ __asm { MOV R13,qword ptr [R9] }
    /* +0x9d7f04 */ __asm { MOV RDI,qword ptr [R9 + 0x8] }
    /* +0x9d7f08 */ __asm { MOV R15,qword ptr [R9 + 0x10] }
    /* +0x9d7f0c */ __asm { MOV R8,qword ptr [RSP + 0x670] }
    /* +0x9d7f14 */ __asm { MOVD XMM4,dword ptr [R8 + 0x4] }
    /* +0x9d7f1a */ __asm { PSHUFD XMM5,XMM4,0x0 }
    /* +0x9d7f1f */ __asm { MOVD XMM4,dword ptr [R8 + 0x1c] }
    /* +0x9d7f25 */ __asm { PSHUFD XMM6,XMM4,0x0 }
    /* +0x9d7f2a */ __asm { MOV RSI,qword ptr [R9 + 0x18] }
    /* +0x9d7f2e */ __asm { MOVD XMM4,dword ptr [R8 + 0x10] }
    /* +0x9d7f34 */ __asm { PSHUFD XMM12,XMM4,0x0 }
    /* +0x9d7f3a */ __asm { MOVD XMM4,EDX }
    /* +0x9d7f3e */ __asm { PSHUFD XMM4,XMM4,0x0 }
    /* +0x9d7f43 */ __asm { PADDD XMM4,xmmword ptr [0x7fffa56bc2d0] }
    /* +0x9d7f4b */ __asm { MOVDQA xmmword ptr [RSP + 0x890],XMM4 }
    /* +0x9d7f54 */ __asm { PXOR XMM4,xmmword ptr [0x7fffa56b26a0] }
    /* +0x9d7f5c */ __asm { MOVDQA XMM1,xmmword ptr [0x7fffa56bc3b0] }
    /* +0x9d7f64 */ __asm { PCMPGTD XMM1,XMM4 }
    /* +0x9d7f68 */ __asm { MOVD XMM4,dword ptr [R8 + 0xc] }
    /* +0x9d7f6e */ __asm { PSHUFD XMM4,XMM4,0x0 }
    /* +0x9d7f73 */ __asm { MOVDQA xmmword ptr [RSP + 0x8f0],XMM4 }
    /* +0x9d7f7c */ __asm { MOV qword ptr [RSP + 0x848],RDX }
    /* +0x9d7f84 */ __asm { SHR RDX,0x20 }
    /* +0x9d7f88 */ __asm { MOVD XMM4,EDX }
    /* +0x9d7f8c */ __asm { PSHUFD XMM4,XMM4,0x0 }
    /* +0x9d7f91 */ __asm { PSUBD XMM4,XMM1 }
    /* +0x9d7f95 */ __asm { MOVDQA xmmword ptr [RSP + 0x540],XMM4 }
    /* +0x9d7f9e */ __asm { MOVD XMM4,dword ptr [R8 + 0x18] }
    /* +0x9d7fa4 */ __asm { PSHUFD XMM0,XMM4,0x0 }
    /* +0x9d7fa9 */ __asm { MOVD XMM4,dword ptr [R8 + 0x8] }
    /* +0x9d7faf */ __asm { PSHUFD XMM4,XMM4,0x0 }
    /* +0x9d7fb4 */ __asm { MOVDQA xmmword ptr [RSP + 0x4b0],XMM4 }
    /* +0x9d7fbd */ __asm { MOVD XMM1,dword ptr [R8] }
    /* +0x9d7fc2 */ __asm { PSHUFD XMM4,XMM1,0x0 }
    /* +0x9d7fc7 */ __asm { MOVDQA xmmword ptr [RSP + 0x450],XMM4 }
    /* +0x9d7fd0 */ __asm { MOVD XMM1,dword ptr [R8 + 0x14] }
    /* +0x9d7fd6 */ __asm { PSHUFD XMM13,XMM1,0x0 }
    /* +0x9d7fdc */ __asm { MOV R10,-0x20 }
    /* +0x9d7fe3 */ __asm { MOVZX EBX,uint8_t ptr [RSP + 0x3f] }
    /* +0x9d7fe8 */ __asm { MOV qword ptr [RSP + 0x638],R13 }
    /* +0x9d7ff0 */ __asm { MOV qword ptr [RSP + 0x748],RDI }
    /* +0x9d7ff8 */ __asm { MOV qword ptr [RSP + 0x4a8],R15 }
    /* +0x9d8000 */ __asm { MOV qword ptr [RSP + 0x448],RSI }
    /* +0x9d8008 */ __asm { NOP dword ptr [RAX + RAX*0x1] }
    /* +0x9d8010 */ __asm { MOVDQA xmmword ptr [RSP + 0x470],XMM5 }
    /* +0x9d8019 */ __asm { MOV R9D,0x9418684b }
    /* +0x9d801f */ __asm { MOV R11D,0xa2393ec0 }
    /* +0x9d8025 */ __asm { SUB R9D,R12D }
    /* +0x9d8028 */ __asm { IMUL R9D,R9D,0x16c424db }
    /* +0x9d802f */ __asm { MOVSXD R8,R9D }
    /* +0x9d8032 */ __asm { MOV EDX,0x792ab86 }
    /* +0x9d8037 */ __asm { XOR EDX,0x54ff9df8 }
    /* +0x9d803d */ __asm { MOV ECX,R12D }
    /* +0x9d8040 */ __asm { ROL EDX,CL }
    /* +0x9d8042 */ __asm { ROL EDX,0xa }
    /* +0x9d8045 */ __asm { CMP R10,0x3a0 }
    /* +0x9d804c */ __asm { SETZ AL }
    /* +0x9d804f */ __asm { NOT R11D }
    /* +0x9d8052 */ __asm { MOV ECX,0xe89a1c56 }
    /* +0x9d8057 */ __asm { ADD ECX,0xc0000098 }
    /* +0x9d805d */ __asm { ROL ECX,0x8 }
    /* +0x9d8060 */ __asm { MOVD XMM1,R11D }
    /* +0x9d8065 */ __asm { IMUL ECX,EBP }
    /* +0x9d8068 */ __asm { LEA R14,[R10 + 0x40] }
    /* +0x9d806c */ __asm { PADDD XMM1,XMM10 }
    /* +0x9d8071 */ __asm { MOVD R11D,XMM1 }
    /* +0x9d8076 */ __asm { ADD R11D,0x20436fbb }
    /* +0x9d807d */ __asm { CMP RDX,R11 }
    /* +0x9d8080 */ __asm { MOV R11,R14 }
    /* +0x9d8083 */ __asm { CMOVLE R11,R10 }
    /* +0x9d8087 */ __asm { MOVDQU XMM15,xmmword ptr [RSI + R10*0x1 + 0x50] }
    /* +0x9d808e */ __asm { MOVDQU XMM11,xmmword ptr [R13 + R10*0x1 + 0x20] }
    /* +0x9d8095 */ __asm { MOVDQU XMM4,xmmword ptr [R15 + R10*0x1 + 0x50] }
    /* +0x9d809c */ __asm { MOVDQU XMM14,xmmword ptr [R15 + R11*0x1] }
    /* +0x9d80a2 */ __asm { MOVDQU XMM9,xmmword ptr [R13 + R11*0x1] }
    /* +0x9d80a9 */ __asm { MOVDQU XMM1,xmmword ptr [RSI + R11*0x1] }
    /* +0x9d80af */ __asm { CMP RCX,R8 }
    /* +0x9d80b2 */ __asm { MOV uint8_t ptr [RSP + 0x560],AL }
    /* +0x9d80b9 */ __asm { JA 0x7fffa5148160 }
    /* +0x9d80bf */ __asm { MOVDQU XMM2,xmmword ptr [RDI + R11*0x1] }
    /* +0x9d80c5 */ __asm { MOV R11D,0x173659d6 }
    /* +0x9d80cb */ __asm { MOVDQA XMM3,XMM14 }
    /* +0x9d80d0 */ __asm { PUNPCKHDQ XMM3,XMM1 }
    /* +0x9d80d4 */ __asm { MOVDQA xmmword ptr [RSP + 0x6f0],XMM3 }
    /* +0x9d80dd */ __asm { MOVDQU XMM10,xmmword ptr [R15 + R10*0x1 + 0x30] }
    /* +0x9d80e4 */ __asm { MOVDQU XMM3,xmmword ptr [RSI + R10*0x1 + 0x30] }
    /* +0x9d80eb */ __asm { MOVDQA XMM5,XMM10 }
    /* +0x9d80f0 */ __asm { PUNPCKLDQ XMM5,XMM3 }
    /* +0x9d80f4 */ __asm { MOVDQA xmmword ptr [RSP + 0x5c0],XMM5 }
    /* +0x9d80fd */ __asm { MOVDQA XMM5,XMM9 }
    /* +0x9d8102 */ __asm { IMUL R11D,R11D,-0x24d629 }
    /* +0x9d8109 */ __asm { ROL R11D,0x9 }
    /* +0x9d810d */ __asm { PUNPCKHDQ XMM5,XMM2 }
    /* +0x9d8111 */ __asm { MOVDQA xmmword ptr [RSP + 0x710],XMM5 }
    /* +0x9d811a */ __asm { NOT R11D }
    /* +0x9d811d */ __asm { MOVSXD RAX,R11D }
    /* +0x9d8120 */ __asm { PUNPCKHDQ XMM10,XMM3 }
    /* +0x9d8125 */ __asm { MOVDQA xmmword ptr [RSP + 0x5a0],XMM10 }
    /* +0x9d812f */ __asm { MOVDQU XMM3,xmmword ptr [RDI + R10*0x1 + 0x20] }
    /* +0x9d8136 */ __asm { MOVDQA XMM7,XMM11 }
    /* +0x9d813b */ __asm { MOVDQA XMM5,XMM11 }
    /* +0x9d8140 */ __asm { PUNPCKHDQ XMM5,XMM3 }
    /* +0x9d8144 */ __asm { MOVDQA xmmword ptr [RSP + 0x620],XMM5 }
    /* +0x9d814d */ __asm { JMP 0x7fffa51481e5 }
    /* +0x9d8160 */ __asm { MOVDQU XMM3,xmmword ptr [RDI + R10*0x1 + 0x20] }
    /* +0x9d8167 */ __asm { MOVDQA XMM7,XMM11 }
}


// ============================================================================
// Function : FUN_7fffa5151eb0  |  RVA: 0x9e1eb0  |  Size: 55 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5151eb0(void)

{
  FUN_7fffa4d25c20();
  return;
}


// ============================================================================
// Function : FUN_7fffa5151ef0  |  RVA: 0x9e1ef0  |  Size: 88 bytes
// Callers  : FUN_7fffa569b130@0xf2b130, FUN_7fffa5496490@0xd26490
// Callees  : none
// ============================================================================
int FUN_7fffa5151ef0(uint16_t *param_1,uint16_t *param_2,int64_t param_3)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
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
  } while (((uVar3 - uVar4 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  return uVar3 - uVar4;
}


// ============================================================================
// Function : FUN_7fffa5151f60  |  RVA: 0x9e1f60  |  Size: 232 bytes
// Callers  : FUN_7fffa5215120@0xaa5120
// Callees  : none
// ============================================================================
int FUN_7fffa5151f60(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint32_t uVar2;
  int iVar3;
  uint8_t *pbVar4;
  uint8_t *pbVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    lVar1 = *(int64_t *)(param_2 + 8);
    uVar2 = *(uint8_t *)(lVar1 + iVar3) & 0xf;
    pbVar4 = (uint8_t *)((lVar1 + iVar3) - (int64_t)(char)(&UNK_7fffa56b3150)[uVar2]);
    uVar2 = *(uint32_t *)(pbVar4 + -4) >> ((&UNK_7fffa56b3160)[uVar2] & 0x1f);
    if (uVar2 != 0) {
      uVar6 = 0;
      uVar7 = 0;
      iVar3 = -1;
      do {
        pbVar5 = pbVar4 + -(int64_t)(char)(&UNK_7fffa56b3150)[*pbVar4 & 0xf];
        uVar7 = uVar7 + (*(uint32_t *)(pbVar5 + -4) >> ((&UNK_7fffa56b3160)[*pbVar4 & 0xf] & 0x1f));
        if (param_3 < (uint64_t)uVar7 + (uint64_t)**(uint32_t **)(param_2 + 0x10) + lVar1) break;
        uVar6 = uVar6 + 1;
        pbVar4 = pbVar5 + -(int64_t)(char)(&UNK_7fffa56b3150)[*pbVar5 & 0xf];
        iVar3 = (*(uint32_t *)(pbVar4 + -4) >> ((&UNK_7fffa56b3160)[*pbVar5 & 0xf] & 0x1f)) - 1;
      } while (uVar6 < uVar2);
      if (uVar6 == 0) {
        iVar3 = -1;
      }
      return iVar3;
    }
  }
  return -1;
}


// ============================================================================
// Function : FUN_7fffa5152050  |  RVA: 0x9e2050  |  Size: 70 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

uint64_t FUN_7fffa5152050(int64_t *param_1,uint32_t param_2,int *param_3)

{
  int *piVar1;
  uint8_t auStack_18 [16];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_1,auStack_18,param_2);
  if ((*(int64_t *)(*(int64_t *)(piVar1 + 2) + 8) == *(int64_t *)(*(int64_t *)(param_3 + 2) + 8)
      ) && (*piVar1 == *param_3)) {
    return 1;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa51520a0  |  RVA: 0x9e20a0  |  Size: 4819 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_7fffa51520a0(uint64_t param_1,uint64_t param_2)

{
  uint8_t *pbVar1;
  uint8_t bVar2;
  uint64_t in_RAX;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  code *pcVar9;
  uint16_t uVar10;
  uint32_t uVar11;
  uint64_t uVar12;
  uint8_t *pbVar13;
  uint32_t uVar14;
  uint64_t uVar15;
  int iVar16;
  uint32_t uVar17;
  uint64_t *puVar18;
  uint32_t uVar19;
  uint64_t in_R11;
  uint64_t uVar20;
  uint8_t bVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint32_t uVar24;
  int64_t lVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint64_t *puVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t *puVar32;
  bool bVar33;
  uint8_t auVar34 [16];
  uint16_t uVar35;
  
  uVar11 = (uint32_t)in_RAX;
  uVar19 = uVar11 | 1;
  param_2 = -(uint64_t)(((uVar11 + 0x8528b73a) * 0x20 | uVar11 + 0x8528b73a >> 0x1b) != 0xbbeaa288)
            ^ param_2;
  uVar28 = param_1 << 0xc | param_1 >> 0x34;
  uVar31 = param_2 >> 0x1c ^ param_2;
  if ((in_RAX ^ 0xfffffdff02fad707) - 0xd6c2f87c <= (uint64_t)(uVar19 * 0x597940e7)) {
    uVar31 = param_2 >> 0x1c & param_2;
  }
  pbVar13 = (uint8_t *)(uVar31 >> 0x38 ^ uVar31);
  lVar7 = (in_R11 & 0xffffffff) * 0x20;
  uVar17 = *(uint32_t *)(pbVar13 + lVar7 + 0x44);
  uVar20 = (uint64_t)uVar17;
  uVar31 = (param_1 << 0xd | param_1 >> 0x33) ^ param_1 ^ uVar28;
  uVar31 = (uVar31 << 0x18 | uVar31 >> 0x28) ^ (uVar31 << 0x1a | uVar31 >> 0x26) ^ uVar31;
  uVar31 = (uVar31 << 0x30 | uVar31 >> 0x10) ^ (uVar31 << 0x34 | uVar31 >> 0xc) ^ uVar31;
  uVar31 = (uVar31 << 0x28 | uVar31 >> 0x18) ^ (uVar31 << 0x20 | uVar31 >> 0x20) ^ uVar31;
  uVar31 = (uVar31 & 0x7fffffffffff) >> 1 ^ (uVar31 << 0x11 | uVar31 >> 0x2f);
  puVar18 = (uint64_t *)(uVar31 >> 0x24 ^ uVar31);
  *(uint32_t *)(puVar18 + 8) = uVar17;
  uVar24 = 8;
  if (((uVar11 ^ 0xc439) - 0x29ed & 0xffff) < uVar17) goto LAB_7fffa5152ffd;
  bVar3 = pbVar13[lVar7 + 0x40] & 0xf;
  if (bVar3 < 3) {
    uVar10 = (uint16_t)in_RAX;
    bVar21 = (uint8_t)in_RAX;
    if (bVar3 == 2) {
      bVar3 = pbVar13[lVar7 + 0x48];
      if ((bVar3 & 2) == 0) {
        uVar31 = 0;
      }
      else {
        bVar5 = pbVar13[lVar7 + 0x4a];
        bVar4 = pbVar13[lVar7 + 0x52] >> 3;
        if (((uVar11 ^ 0x8b45f111) << 0x10 | (uVar11 ^ 0x8b45f111) >> 0x10) * 0x43cd8b83 <
            ((0x46546d86 - uVar11) * 0x10000000 | 0x46546d86 - uVar11 >> 4)) {
          bVar4 = pbVar13[lVar7 + 0x52] ^ 3;
        }
        uVar31 = *(uint64_t *)(pbVar13 + (uint64_t)bVar4 * 8 + 0x1e0);
        if ((char)bVar5 < '\x02') {
          bVar33 = bVar5 == 1;
          uVar28 = uVar31 & 0xff;
        }
        else {
          bVar33 = bVar5 == 4;
          if ((char)bVar5 < '\x04') {
            if (bVar5 == (uint8_t)(0x16 - bVar21)) {
              uVar12 = ~uVar28;
              uVar26 = uVar31 ^ 0xffff;
              uVar27 = uVar31 & 0xffff ^ 0x6a4e1d90;
              uVar6 = uVar31 + 1;
              if ((-0x7b451ea6 << (bVar21 & 0x1f) | 0x84bae15aU >> 0x20 - (bVar21 & 0x1f)) <
                  0xc9b49dc8) {
                uVar6 = ~uVar31;
              }
              uVar15 = uVar31 & (uint64_t)DAT_7fffa56bc590;
              uVar30 = uVar28;
              if ((int64_t)(int)(0x6a4e1d90 - uVar11) < (int64_t)(uint64_t)~(uVar11 ^ 0xd8a6fe6f)
                 ) {
                uVar30 = uVar12;
              }
              uVar8 = 0xffff;
              if (0xc034a529 - uVar11 <=
                  (0x4c5b3fb0 << (bVar21 & 0x1f) | 0x4c5b3fb0U >> 0x20 - (bVar21 & 0x1f))) {
                uVar8 = 0xffffffffffff0000;
              }
              uVar22 = 0xffffffff95b1e26f;
              if (((uVar11 ^ 0xfb9cf0bd) << 3 | (uVar11 ^ 0xfb9cf0bd) >> 0x1d) < uVar11 + 0x633a9089
                 ) {
                uVar22 = 0x6a4e1d90;
              }
              uVar23 = uVar22 + (uVar8 & uVar6);
              if (0x42debef1 - uVar11 <
                  ~(0x4f1eb00c << (bVar21 & 0x1f) | 0x4f1eb00cU >> 0x20 - (bVar21 & 0x1f))) {
                uVar23 = uVar8 & uVar6 & uVar22;
              }
              uVar31 = (uVar23 & uVar12) * -0xde1fb16b +
                       (uint64_t)(0x23999e2d - uVar11) * ((uVar15 | 0x6a4e1d90) & uVar12) +
                       (uVar27 ^ uVar12) * (uint64_t)(uVar11 ^ 0x5af9ef44) +
                       ((((uVar26 | 0x6a4e1d90) ^ uVar28) - (uVar15 & uVar12 & 0xffffffff95b1e26f))
                       + (uVar28 ^ uVar27)) * 0x4f5fb019 +
                       (uVar30 | 0xffffffff95b1e26f | uVar31 | 0xffff) *
                       (int64_t)(int)((uVar11 ^ 0x91bcec6b) << 5 | (uVar11 ^ 0x91bcec6b) >> 0x1b) +
                       (~(uVar28 | 0x6a4e1d90) & (uVar31 ^ 0xffffffffffff0000)) *
                       (uint64_t)
                       ~(0xfcc61409U >> (bVar21 & 0x1f) | -0x339ebf7 << 0x20 - (bVar21 & 0x1f)) +
                       (uVar28 & 0xffffffff95b1e26f & (~uVar31 | 0xffffffffffff0000)) * 0x8ec0014f +
                       (((uVar31 | 0xffff) ^ 0x6a4e1d90) & uVar28) * -0x8ec00150 +
                       (uVar28 & uVar26 & 0x6a4e1d90) * -0x3f605138 +
                       ((uVar31 | 0x6a4effff) ^ uVar28) * -0xde1fb169 +
                       (uVar12 & uVar27) * 0x3f605136 +
                       (uVar26 & uVar12 & 0xffffffff95b1e26f) * 0x4f5fb018;
            }
            goto joined_r0x7fffa5152c9f;
          }
          uVar28 = uVar31 & 0xffffffff;
        }
        if (bVar33) {
          uVar31 = uVar28;
        }
      }
joined_r0x7fffa5152c9f:
      if ((bVar3 & 4) != 0) {
        if ((0x24c0000U >> (bVar21 & 0x1f) | 0x24c0000 << 0x20 - (bVar21 & 0x1f)) <
            (-0x2d093903 << (bVar21 & 0x1f) | 0xd2f6c6fdU >> 0x20 - (bVar21 & 0x1f))) {
          bVar4 = (uint8_t)((uint8_t)(in_RAX >> 0x18) ^ 0x15) >> 3;
          bVar5 = pbVar13[lVar7 + 0x53];
        }
        else {
          bVar5 = pbVar13[lVar7 + 0x53];
          bVar4 = ~((char)uVar19 * '\t');
        }
        bVar2 = pbVar13[lVar7 + 0x4b];
        uVar28 = *(uint64_t *)(pbVar13 + (uint64_t)bVar5 * 8 + 0x1e0);
        if ((char)bVar2 < '\x02') {
          if (bVar2 == 1) {
            uVar28 = uVar28 & 0xff;
          }
        }
        else if ((char)bVar2 <
                 (char)~((bVar21 ^ 0xfb) >> (bVar4 & 7) | (bVar21 ^ 0xfb) << 8 - (bVar4 & 7))) {
          if ((uint8_t)(bVar2 << 4 | (bVar2 & 0x7f) >> 4) == 0x20) {
            uVar28 = uVar28 & 0xffff;
          }
        }
        else if (bVar2 == (uint8_t)((0xa3U >> (bVar4 & 7) | -0x5d << 8 - (bVar4 & 7)) + 0x28 ^ bVar21))
        {
          uVar28 = uVar28 & 0xffffffff;
        }
        uVar31 = (pbVar13[lVar7 + 0x54] & 0xf) * uVar28 + uVar31;
      }
      iVar16 = uVar19 * 0x43a271fa + 0x10c88b4f;
      bVar5 = bVar3 * '\b';
      if ((int64_t)(int)(uVar19 * -0x6b080000 | uVar19 * 0x486d729f >> 0xd) <
          (int64_t)(uint64_t)(iVar16 * 2 | (uint32_t)(iVar16 < 0))) {
        bVar5 = bVar3 & 8;
      }
      if (bVar5 != 0) {
        uVar31 = uVar31 + *(int64_t *)(pbVar13 + lVar7 + 0x58);
      }
      if ((bVar3 & 0x40) != 0) {
        uVar31 = uVar31 + *(int64_t *)(pbVar13 + 0x260);
      }
      if ((pbVar13[lVar7 + 0x49] & 8) != 0) {
        uVar6 = (uint64_t)*(uint32_t *)(pbVar13 + 0x44);
        uVar26 = 0xffffffffffffffff >> ((char)*(uint32_t *)(pbVar13 + 100) * -8 & 0x3fU);
        uVar28 = 0;
        if ((*(uint64_t *)(pbVar13 + (uint64_t)*(uint32_t *)(pbVar13 + 0x70) * 8 + 0x1e0) >>
             (uint64_t)*(uint32_t *)(pbVar13 + 100) * 8 + -1 & 1) != 0) {
          uVar28 = ~uVar26;
        }
        uVar28 = uVar28 | *(uint64_t *)(pbVar13 + (uint64_t)*(uint32_t *)(pbVar13 + 0x70) * 8 + 0x1e0)
                          & uVar26;
        bVar33 = (int64_t)uVar28 < -1;
        if (((uint64_t)uVar19 * 0xd9b7a71c >> 1 & 0x7fffffff) != 0x3a65af24) {
          bVar33 = -1 < (int64_t)uVar28;
        }
        if (bVar33) {
          uVar31 = (uVar28 >> 3 & -uVar6) + uVar31;
        }
        else {
          uVar26 = ~uVar28;
          if ((uVar11 ^ 0xbe5a342f) + 0x159a2835 <= uVar11 + 0x76c3afb7) {
            uVar26 = uVar28 - 1;
          }
          uVar31 = uVar31 - ((uVar26 >> 3 & -uVar6) + uVar6);
        }
      }
      if (((char)bVar3 < '\0') && ((pbVar13[lVar7 + 0x41] & 10) != 0)) {
        uVar31 = uVar31 - uVar20;
      }
      if (*pbVar13 < 0x40) {
        uVar31 = uVar31 & 0xffff;
      }
      else if ((*pbVar13 & 0xc0) == 0x40) {
        uVar31 = uVar31 & 0xffffffff;
      }
      uVar28 = uVar31;
      if ((uint8_t)((bVar21 * -0x40 | (uint8_t)(0x94 - bVar21) >> 2) ^ bVar3 & 1) != 0x20) {
        if ((~pbVar13[lVar7 + 0x52] & 6) == 0) {
          lVar25 = 0;
        }
        else {
          lVar25 = *(int64_t *)
                    (pbVar13 +
                    (uint64_t)(uint16_t)((uVar10 ^ 0xae15) << 9 | (uVar10 ^ 0xae15) >> 7) +
                    (uint64_t)(uint8_t)(pbVar13[lVar7 + 0x52] << 5));
        }
        uVar28 = lVar25 + uVar31 & 0xffffffff;
        if (pbVar13[0x542] == 2) {
          uVar28 = lVar25 + uVar31;
        }
      }
      if ((pbVar13[lVar7 + 0x49] & 0x10) == 0) {
        uVar14 = uVar17;
        if ((uVar28 & 0xfffffffffffff000) == (uint64_t)(uVar19 * 0x285d5508 ^ 0xdc8369a8)) {
          pbVar13[0x551] = pbVar13[0x551] | 2;
          uVar14 = (uint32_t)puVar18[8];
        }
        if (uVar17 < uVar14) {
          uVar14 = uVar17;
        }
        uVar31 = (**(code **)(pbVar13 + 0x560))
                           (pbVar13,uVar28,(uint64_t)uVar14,puVar18,(uVar10 + 0x11ec) * -0x4f4b);
        uVar24 = 1;
        if (uVar31 == uVar14) {
          if ((char)pbVar13[lVar7 + 0x48] < '\0') {
            uVar31 = *(uint64_t *)(pbVar13 + 0x200);
            bVar3 = *pbVar13 >> 4 & 3;
            if (bVar3 == 0) {
              uVar31 = uVar31 & 0xffff;
            }
            else if (bVar3 == 1) {
              uVar31 = uVar31 & 0xffffffff;
            }
            pcVar9 = (code *)((int64_t)(short)((uVar10 + 0x79e7) * 0x456f) + 0x7fffa56a3acb);
            auVar34._4_12_ = SUB1612((uint8_t  [16])0x0,4);
            auVar34._0_4_ = (uVar11 ^ 0x722cf157) + 0x66b6f9dc;
            uVar19 = 0x632e4a55 << bVar3 + 1;
            (*pcVar9)(((uVar19 << 0x1a | uVar19 >> 6) ^ (uVar19 << 0x1d | uVar19 >> 3) ^ uVar19) * 3
                      ,pcVar9,4,
                      (*(uint32_t *)(pbVar13 + lVar7 + 0x44) + uVar31 ^ auVar34._0_8_) + 0x534da2d9);
          }
          uVar24 = 0;
          if ((pbVar13[lVar7 + 0x49] & 1) != 0) {
            bVar3 = pbVar13[lVar7 + 0x4a];
            uVar31 = *(uint64_t *)
                      (pbVar13 + (uint64_t)(pbVar13[lVar7 + 0x52] & 0xfffffff8) + 0x1e0);
            uVar19 = (uint32_t)bVar3;
            if ((char)bVar3 < '\x02') {
              uVar28 = uVar31 & 0xff;
              bVar33 = uVar19 == 1;
            }
            else if ((char)bVar3 < (char)('|' - (bVar21 + 100))) {
              bVar33 = uVar19 == 2;
              uVar28 = uVar31 & 0xffff;
            }
            else {
              bVar33 = uVar19 == 4;
              uVar28 = uVar31 & 0xffffffff;
            }
            if (!bVar33) {
              uVar28 = uVar31;
            }
            uVar17 = uVar19 * 0x632e4a55;
            uVar31 = -(uint64_t)*(uint32_t *)(pbVar13 + lVar7 + 0x44);
            if ((*(uint32_t *)(pbVar13 + 0x268) & 0x400) == 0) {
              uVar31 = (uint64_t)*(uint32_t *)(pbVar13 + lVar7 + 0x44);
            }
            (*(code *)(&UNK_7fffa56a83a8 + (int)~(uVar11 + 0x2bc69df3)))
                      (((uVar19 * -0x60000000 | uVar17 >> 3) ^ (uVar19 * 0x54000000 | uVar17 >> 6) ^
                       uVar17) * 3,&UNK_7fffa56a83a8 + (int)~(uVar11 + 0x2bc69df3),
                       pbVar13[lVar7 + 0x52] >> 3,(uVar31 + uVar28 ^ 0xccc191f) + 0x534da2d9);
          }
        }
        goto LAB_7fffa5152ffd;
      }
LAB_7fffa5152ff7:
      *puVar18 = uVar28;
    }
    else {
      uVar24 = 3;
      if (bVar3 != 1) goto LAB_7fffa5152ffd;
      uVar14 = *(uint32_t *)(pbVar13 + lVar7 + 0x48);
      if ((int)uVar14 < 5) {
        uVar24 = 6;
        if ((int)(uint32_t)(uint16_t)(0xee16 - uVar10) <= (int)uVar14) {
          if (uVar14 == 2) {
            uVar24 = 0;
            if ((uint64_t)*(uint32_t *)(pbVar13 + lVar7 + 0x50) < 6) {
              uVar31 = *(uint64_t *)
                        (pbVar13 + (uint64_t)*(uint32_t *)(pbVar13 + lVar7 + 0x50) * 0x20 + 0x290);
            }
            else {
              uVar31 = 0;
            }
            *puVar18 = uVar31;
          }
          goto LAB_7fffa5152ffd;
        }
        if (uVar14 != 1) goto LAB_7fffa5152ffd;
        bVar3 = pbVar13[lVar7 + 0x55];
        bVar21 = (bVar3 & 1) << 6 | bVar3 * '\b' & 8 | bVar3 & 1;
        bVar21 = bVar21 >> 1 ^ bVar21;
        uVar31 = (int64_t)pbVar13 * 0x400;
        FUN_7fffa560e0a0(((bVar3 & 1) << 6 | bVar21 >> 2) ^ (bVar21 << 4 | bVar21 >> 4) ^ bVar21,
                         (int64_t)pbVar13 * -0x3ff + 0xe7c41b2b,uVar31,puVar18,uVar17);
        *puVar18 = uVar31 << 0x34 ^ uVar31;
        goto LAB_7fffa5152ffa;
      }
      if (0x12 < (int)uVar14) {
        if (uVar14 != 0x13) {
          uVar24 = 6;
          if (uVar14 == (uint16_t)((uVar10 ^ 0x5fd4) * 0x3000 |
                                (uint16_t)((uVar10 ^ 0x5fd4) * -0x3d2d) >> 4)) {
            bVar3 = (char)uVar17 * -8 + 0x40;
            uVar24 = 0;
            if (((uVar11 + 0xc268a6c7) * 0x10000000 | uVar11 + 0xc268a6c7 >> 4) <=
                (-0x15c28ad7 - uVar11) * 0x57e081c1) {
              bVar3 = 0;
            }
            *puVar18 = (uint64_t)(*(int64_t *)(pbVar13 + 0x260) << (bVar3 & 0x3f)) >>
                       (bVar3 & 0x3f);
          }
          goto LAB_7fffa5152ffd;
        }
        bVar3 = 0;
        if ((uVar11 ^ 0xb86a8429) * -0x289f4401 + 0x186e9f42 <= (uVar11 ^ 0xb420ae82)) {
          bVar3 = (char)uVar17 * -8 + 0x40;
        }
        uVar28 = (uint64_t)(*(int64_t *)(pbVar13 + 0x268) << (bVar3 & 0x3f)) >> (bVar3 & 0x3f);
        goto LAB_7fffa5152ff7;
      }
      uVar24 = 6;
      if ((uVar14 - ((0xa5664456U >> (bVar21 & 0x1f) | -0x5a99bbaa << 0x20 - (bVar21 & 0x1f)) ^
                    0x66c07f0d) ^ 0x8a17c6e) -
          (~(uVar19 * 0x623e0642) << 4 | ~(uVar19 * 0x623e0642) >> 0x1c) != 0x4f798d71)
      goto LAB_7fffa5152ffd;
      uVar31 = (int64_t)(int)*(uint32_t *)(pbVar13 + lVar7 + 0x50);
      if ((uint64_t)
          ((0x8841aa83U >> (bVar21 & 0x1f) | -0x77be557d << 0x20 - (bVar21 & 0x1f)) - uVar14) <=
          (uint64_t)(int64_t)(int)(-0x6a60f992 - (uVar11 + 0x3a6a8af5))) {
        uVar31 = (uint64_t)*(uint32_t *)(pbVar13 + lVar7 + 0x50);
      }
      if (uVar17 != 0) {
        lVar7 = uVar31 * 0x20;
        puVar32 = (uint64_t *)(pbVar13 + lVar7 + 0x340);
        uVar35 = (uVar10 | 1) * -0x6cd5;
        if (uVar17 < (uint16_t)(~(uVar35 >> 1 | (uint16_t)((uVar35 & 1) != 0) << 0xf) * 0x8f)) {
LAB_7fffa515246d:
          uVar31 = 0;
LAB_7fffa515246f:
          puVar29 = puVar18;
        }
        else {
          lVar25 = -0x20;
          if ((uint64_t)(~(uVar11 + 0xe8be3c70) * (uVar14 | 1)) == 0xffffffffbcc1c9b4) {
            lVar25 = -5;
          }
          if ((uint8_t *)((int64_t)puVar18 + uVar31 * lVar25 + (-0x340 - (int64_t)pbVar13)) <
              (uint8_t *)(uint64_t)((0x2bd17b3f - uVar11 ^ 0x57978d30) + uVar14))
          goto LAB_7fffa515246d;
          if (0x1f < uVar17) {
            uVar31 = (uint64_t)(uVar17 & 0x60);
            uVar28 = *(uint64_t *)(pbVar13 + lVar7 + 0x348);
            uVar20 = *(uint64_t *)(pbVar13 + lVar7 + 0x350);
            uVar6 = *(uint64_t *)(pbVar13 + lVar7 + 0x358);
            *puVar18 = *puVar32;
            puVar18[1] = uVar28;
            puVar18[2] = uVar20;
            puVar18[3] = uVar6;
            if (uVar31 != 0x20) {
              uVar28 = *(uint64_t *)(pbVar13 + lVar7 + 0x360);
              uVar20 = *(uint64_t *)(pbVar13 + lVar7 + 0x368);
              uVar6 = *(uint64_t *)(pbVar13 + lVar7 + 0x378);
              puVar18[6] = *(uint64_t *)(pbVar13 + lVar7 + 0x370);
              puVar18[7] = uVar6;
              puVar18[4] = uVar28;
              puVar18[5] = uVar20;
            }
            if ((uVar17 & 0x60) == uVar17) goto LAB_7fffa515335b;
            uVar28 = uVar31;
            if ((uVar17 & 0x1c) != 0) goto LAB_7fffa515331a;
            uVar20 = (uint64_t)(uVar17 & 0x1f);
            puVar18 = (uint64_t *)((int64_t)puVar18 + uVar31);
            goto LAB_7fffa515246f;
          }
          uVar28 = 0;
LAB_7fffa515331a:
          uVar31 = (uint64_t)(uVar17 & 0x7c);
          puVar29 = (uint64_t *)((int64_t)puVar18 + uVar31);
          for (; *(uint32_t *)((int64_t)puVar18 + uVar28) =
                      *(uint32_t *)((int64_t)puVar32 + uVar28), uVar31 - 4 != uVar28;
              uVar28 = uVar28 + 4) {
          }
          if ((uVar17 & 0x7c) == uVar17) goto LAB_7fffa515335b;
          uVar20 = (uint64_t)(uVar17 & 3);
        }
        uVar28 = uVar20 - 1;
        uVar6 = uVar20 & 3;
        if (uVar6 != 0) {
          uVar20 = (uint64_t)((uint32_t)uVar20 & 0x7ffffffc);
          uVar26 = 0;
          do {
            uVar26 = uVar26 + 1;
            pbVar1 = (uint8_t *)((int64_t)puVar32 + uVar31);
            uVar31 = uVar31 + 1;
            *(uint8_t *)puVar29 = *pbVar1;
            puVar29 = (uint64_t *)((int64_t)puVar29 + 1);
          } while (uVar26 != uVar6);
        }
        uVar10 = (uVar10 | 1) * -0x293d;
        bVar3 = (uint8_t)uVar14;
        if ((uint16_t)~(uVar10 << (bVar3 & 0xf) | uVar10 >> 0x10 - (bVar3 & 0xf)) <= uVar28) {
          uVar28 = uVar20 - 4;
          uVar11 = 0U >> (bVar3 & 0x1f) | 0 << 0x20 - (bVar3 & 0x1f);
          if (((uint32_t)uVar28 & 4) == (uVar11 << (bVar21 & 0x1f) | uVar11 >> 0x20 - (bVar21 & 0x1f)))
          {
            uVar20 = uVar31 * 4;
            *(uint8_t *)puVar29 = *(uint8_t *)((int64_t)puVar32 + uVar31);
            *(uint8_t *)((int64_t)puVar29 + 1) = pbVar13[uVar31 + lVar7 + 0x341];
            *(uint8_t *)((int64_t)puVar29 + 2) = pbVar13[uVar31 + lVar7 + 0x342];
            lVar25 = uVar31 + lVar7 + 0x343;
            uVar31 = uVar31 + 4;
            if ((uVar19 * 0x1ec83893 >> (bVar3 & 0x1f) |
                uVar19 * 0x1ec83893 << 0x20 - (bVar3 & 0x1f)) <=
                (0x6eb272dcU >> (bVar3 & 0x1f) | 0x6eb272dc << 0x20 - (bVar3 & 0x1f)) * uVar19) {
              uVar31 = uVar20;
            }
            *(uint8_t *)((int64_t)puVar29 + 3) = pbVar13[lVar25];
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            uVar20 = uVar28;
          }
          if (3 < uVar28) {
            lVar7 = uVar31 + lVar7;
            lVar25 = 0;
            while( true ) {
              *(uint8_t *)((int64_t)puVar29 + lVar25) = pbVar13[lVar25 + lVar7 + 0x340];
              *(uint8_t *)((int64_t)puVar29 + lVar25 + 1) = pbVar13[lVar25 + lVar7 + 0x341];
              *(uint8_t *)((int64_t)puVar29 + lVar25 + 2) = pbVar13[lVar25 + lVar7 + 0x342];
              *(uint8_t *)((int64_t)puVar29 + lVar25 + 3) = pbVar13[lVar25 + lVar7 + 0x343];
              *(uint8_t *)((int64_t)puVar29 + lVar25 + 4) = pbVar13[lVar25 + lVar7 + 0x344];
              *(uint8_t *)((int64_t)puVar29 + lVar25 + 5) = pbVar13[lVar25 + lVar7 + 0x345];
              *(uint8_t *)((int64_t)puVar29 + lVar25 + 6) = pbVar13[lVar25 + lVar7 + 0x346];
              *(uint8_t *)((int64_t)puVar29 + lVar25 + 7) = pbVar13[lVar25 + lVar7 + 0x347];
              uVar20 = uVar20 - 8;
              if (uVar20 == 0) break;
              lVar25 = lVar25 + 8;
            }
          }
        }
      }
LAB_7fffa515335b:
      pbVar13[0x552] = pbVar13[0x552] | 0x20;
    }
  }
  else {
    if (bVar3 != 3) {
      if (bVar3 < 7) {
        uVar24 = 3;
        if ((pbVar13[lVar7 + 0x40] & 0xf) != 4) goto LAB_7fffa5152ffd;
      }
      else {
        uVar24 = 3;
        if (bVar3 != 7) goto LAB_7fffa5152ffd;
      }
    }
    *puVar18 = *(uint64_t *)(pbVar13 + lVar7 + 0x48);
  }
LAB_7fffa5152ffa:
  uVar24 = 0;
LAB_7fffa5152ffd:
  return (uVar24 << 0x15 | uVar24) ^ (uVar24 >> 1 | (uint32_t)((uVar24 & 1) != 0) << 0x1f);
}


// ============================================================================
// Function : FUN_7fffa5153380  |  RVA: 0x9e3380  |  Size: 36 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5153380(uint64_t *param_1,uint64_t param_2,uint32_t *param_3)

{
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uStack_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  (*(code *)*param_1)(param_2,&uStack_18);
  return;
}


// ============================================================================
// Function : FUN_7fffa51533b0  |  RVA: 0x9e33b0  |  Size: 1129 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa51537e0) */
/* WARNING: Removing unreachable block (ram,0x7fffa515377b) */

void FUN_7fffa51533b0(void)

{
  uRam00007fffa47bbc90 = 0x6198d86e3d7242f5;
  uRam00007fffa47bbc78 = 0xdd8cbb783d5be04d;
  uRam00007fffa47bbc88 = 0xf6352fed8e33abcc;
  uRam00007fffa47bbc80 = 0x7871bb9d534a8d9c;
  uRam00007fffa47bbc70 = 0x60b0fbe070ff0a1d;
  uRam00007fffa47bbca0 = 0xd01737b2589d37ee;
  uRam00007fffa47bbc98 = 0x8e2ad2e9260eefd6;
  lRam00007fffa47bbca8 = (uRam00007fffa4781178 ^ 0xb5e5f21ac8ae5064) * -0x7ff001ffc007ff;
  return;
}


// ============================================================================
// Function : FUN_7fffa5153820  |  RVA: 0x9e3820  |  Size: 885 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5153820(void)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint64_t uVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint64_t uVar6;
  short sVar7;
  uint16_t uVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  
  uRam00007fffa47bc77a = 0;
  uRam00007fffa47bc798 = 0;
  _uRam00007fffa47bc7a0 = 0;
  uRam00007fffa47bc788 = 0;
  uRam00007fffa47bc790 = 0;
  uVar3 = rdtsc();
  lVar12 = (CONCAT44(0x7fff,(int)((uint64_t)uVar3 >> 0x20)) << 0x20 |
           CONCAT44(0xffffffff,(int)uVar3)) * 0x44a224ef7419969 + 1;
  lVar13 = 0;
  do {
    lVar11 = lVar13;
    lVar12 = lVar12 * 0x44a224ef7419969 + 1;
    lVar13 = lVar12 * 0x44a224ef7419969 + 1;
    *(char *)(lVar11 + 0x7fffa47bc779) = (char)((uint64_t)lVar13 >> 0x20);
    lVar13 = lVar13 * 0x44a224ef7419969 + 1;
    *(char *)(lVar11 + 0x7fffa47bc778) = (char)((uint64_t)lVar12 >> 0x20);
    lVar12 = lVar13 * 0x44a224ef7419969 + 1;
    *(char *)(lVar11 + 0x7fffa47bc77b) = (char)((uint64_t)lVar12 >> 0x20);
    *(char *)(lVar11 + 0x7fffa47bc77a) = (char)((uint64_t)lVar13 >> 0x20);
    lVar13 = lVar11 + 4;
  } while ((-5 - lVar11) * 0x5b264c12d352d8e5 != 0x2112401a3fd91897);
  iVar10 = (int)lVar13;
  uVar8 = (uint16_t)lVar13;
  lVar12 = (int64_t)(short)(((uVar8 ^ 0x2bde) >> 1) + 0x9964);
  bVar4 = (uint8_t)lVar13 & 0xf;
  bVar5 = (uint8_t)lVar13 & 0x1f;
  uVar6 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)
                           (int)((-iVar10 - 0x7b465U) * 0x20000000 | -iVar10 - 0x7b465U >> 3) +
                          0x7fffa47cbe0e) * 0x55555556 + 0x55555556) * 3;
  uVar9 = uVar6 >> 0x20;
  bVar5 = *(uint8_t *)((int64_t)(int)(0x535ffff4U >> bVar5 | 0x535ffff4 << 0x20 - bVar5) +
                   0x7fffa47c826b);
  bVar4 = *(uint8_t *)((int64_t)(short)(0x98daU >> bVar4 | -0x6726 << 0x10 - bVar4) + 0x7fffa47c1e14);
  bVar1 = *(uint8_t *)((int64_t)(short)((0x3730 - uVar8) * 0x40 | (uint16_t)(0x3730 - uVar8) >> 10) +
                   0x7fffa47c0899);
  bVar2 = *(uint8_t *)((int64_t)(iVar10 + -0xef56) + 0x7fffa47cb6c7);
  *(uint8_t *)(lVar12 + 0x7fffa47c1830 + uVar9 * 8) = bVar4 << 6 | bVar4 >> 2;
  *(uint8_t *)(lVar12 + 0x7fffa47c182f + uVar9 * 8) = bVar5 << 6 | bVar5 >> 2;
  bVar5 = *(uint8_t *)((int64_t)(short)(((uVar8 ^ 0x2651) << 3 | (uVar8 ^ 0x2651) >> 0xd) + 0x5b4a) +
                   0x7fffa47c3930);
  *(uint8_t *)(lVar12 + 0x7fffa47c1833 + uVar9 * 8) =
       uRam00007fffa47bc7a0._4_1_ << 6 | uRam00007fffa47bc7a0._4_1_ >> 2;
  *(uint8_t *)(lVar12 + 0x7fffa47c1832 + uVar9 * 8) = bVar5 << 6 | bVar5 >> 2;
  sVar7 = (short)lVar11 + 5;
  bVar5 = *(uint8_t *)((int64_t)(short)~(sVar7 * -0x71b6) + 0x7fffa47c3cfa);
  *(uint8_t *)(lVar12 + 0x7fffa47c1836 + uVar9 * 8) = bVar5 << 6 | bVar5 >> 2;
  *(uint8_t *)(lVar12 + 0x7fffa47c1835 + uVar9 * 8) = bVar1 << 6 | bVar1 >> 2;
  bVar5 = *(uint8_t *)((int64_t)(short)(sVar7 * -0x4e71) + 0x7fffa47c0507);
  *(uint8_t *)(lVar12 + 0x7fffa47c1831 + uVar9 * 8) = bVar5 << 6 | bVar5 >> 2;
  *(uint8_t *)(lVar12 + 0x7fffa47c1834 + uVar9 * 8) = bVar2 << 6 | bVar2 >> 2;
  *(char *)(((int64_t)(iVar10 + 0x443700b6) ^ 0xffffffffbbc84463U) + 0x7fffa47c82f1) =
       (char)(uVar6 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5153ba0  |  RVA: 0x9e3ba0  |  Size: 3170 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5153ba0(void) {
    /* +0x9e3ba0 */ __asm { PUSH RSI }
    /* +0x9e3ba1 */ __asm { PUSH R14 }
    /* +0x9e3ba3 */ __asm { PUSH R13 }
    /* +0x9e3ba5 */ __asm { PUSH RDI }
    /* +0x9e3ba6 */ __asm { PUSH RBP }
    /* +0x9e3ba7 */ __asm { SUB RSP,0x60 }
    /* +0x9e3bab */ __asm { MOV RDI,R11 }
    /* +0x9e3bae */ __asm { MOV EAX,0xdf37fe06 }
    /* +0x9e3bb3 */ __asm { MOV EBP,EDI }
    /* +0x9e3bb5 */ __asm { OR EBP,0x1 }
    /* +0x9e3bb8 */ __asm { ADD EAX,0x66ccc5f3 }
    /* +0x9e3bbd */ __asm { XOR EAX,0xc68053be }
    /* +0x9e3bc2 */ __asm { IMUL EAX,EBP }
    /* +0x9e3bc5 */ __asm { MOV dword ptr [RSP + 0x40],EAX }
    /* +0x9e3bc9 */ __asm { MOV EAX,dword ptr [RSP + 0x40] }
    /* +0x9e3bcd */ __asm { CMP EAX,0x9b3adb8c }
    /* +0x9e3bd2 */ __asm { JNC 0x7fffa5154a4a }
    /* +0x9e3bd8 */ __asm { RDTSC }
    /* +0x9e3bda */ __asm { SHL RDX,0x20 }
    /* +0x9e3bde */ __asm { OR RDX,RAX }
    /* +0x9e3be1 */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0x9e3beb */ __asm { IMUL RDX,R11 }
    /* +0x9e3bef */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0x9e3bf9 */ __asm { ADD RAX,RDX }
    /* +0x9e3bfc */ __asm { MOV RCX,RAX }
    /* +0x9e3bff */ __asm { SHR RCX,0x3b }
    /* +0x9e3c03 */ __asm { MOVQ XMM2,RAX }
    /* +0x9e3c08 */ __asm { PSRLQ XMM2,0x1b }
    /* +0x9e3c0d */ __asm { MOV R9W,0xa1a1 }
    /* +0x9e3c12 */ __asm { ADD R9D,0xffffbfd7 }
    /* +0x9e3c19 */ __asm { SHR RAX,0x2d }
    /* +0x9e3c1d */ __asm { MOVD XMM0,EAX }
    /* +0x9e3c21 */ __asm { PXOR XMM0,XMM2 }
    /* +0x9e3c25 */ __asm { MOVD EAX,XMM0 }
    /* +0x9e3c29 */ __asm { ROR EAX,CL }
    /* +0x9e3c2b */ __asm { XOR R9D,EDI }
    /* +0x9e3c2e */ __asm { MOVZX ECX,R9W }
    /* +0x9e3c32 */ __asm { AND EAX,0x3 }
    /* +0x9e3c35 */ __asm { CMP EAX,ECX }
    /* +0x9e3c37 */ __asm { JNC 0x7fffa5153e82 }
    /* +0x9e3c3d */ __asm { MOV CX,0xcf0f }
    /* +0x9e3c41 */ __asm { MOVD XMM2,ECX }
    /* +0x9e3c45 */ __asm { MOVD XMM0,EDI }
    /* +0x9e3c49 */ __asm { PXOR XMM0,XMM2 }
    /* +0x9e3c4d */ __asm { MOVD ECX,XMM0 }
    /* +0x9e3c51 */ __asm { IMUL ECX,ECX,0x31dd }
    /* +0x9e3c57 */ __asm { MOVZX ECX,CX }
    /* +0x9e3c5a */ __asm { CMP EAX,ECX }
    /* +0x9e3c5c */ __asm { JZ 0x7fffa515405b }
    /* +0x9e3c62 */ __asm { RDTSC }
    /* +0x9e3c64 */ __asm { SHL RDX,0x20 }
    /* +0x9e3c68 */ __asm { OR RDX,RAX }
    /* +0x9e3c6b */ __asm { MOV R9D,0xf2758f95 }
    /* +0x9e3c71 */ __asm { MOV R11,-0x4b061743ec0c107b }
    /* +0x9e3c7b */ __asm { IMUL R11,RDX }
    /* +0x9e3c7f */ __asm { MOV RAX,0x27fb57e44e74ec6a }
    /* +0x9e3c89 */ __asm { ADD RAX,R11 }
    /* +0x9e3c8c */ __asm { MOV R11,RAX }
    /* +0x9e3c8f */ __asm { SHR R11,0x1b }
    /* +0x9e3c93 */ __asm { MOV RCX,RAX }
    /* +0x9e3c96 */ __asm { SHR RCX,0x3b }
    /* +0x9e3c9a */ __asm { SHR RAX,0x2d }
    /* +0x9e3c9e */ __asm { XOR EAX,R11D }
    /* +0x9e3ca1 */ __asm { MOV EDX,0x13598c3d }
    /* +0x9e3ca6 */ __asm { SUB EDX,R9D }
    /* +0x9e3ca9 */ __asm { ROR EAX,CL }
    /* +0x9e3cab */ __asm { IMUL EBP,EDX }
    /* +0x9e3cae */ __asm { MOV R11,-0x410c0fd6c8dfb2cf }
    /* +0x9e3cb8 */ __asm { CMP qword ptr [RBP],R11 }
    /* +0x9e3cbc */ __asm { NOP }
    /* +0x9e3cbd */ __asm { NOP }
    /* +0x9e3cbe */ __asm { NOP }
    /* +0x9e3cbf */ __asm { NOP }
    /* +0x9e3cc0 */ __asm { NOP }
    /* +0x9e3cc1 */ __asm { NOP }
    /* +0x9e3cc2 */ __asm { NOP }
    /* +0x9e3cc3 */ __asm { NOP }
    /* +0x9e3cc4 */ __asm { NOP }
    /* +0x9e3cc5 */ __asm { NOP }
    /* +0x9e3cc6 */ __asm { NOP }
    /* +0x9e3cc7 */ __asm { NOP }
    /* +0x9e3cc8 */ __asm { NOP }
    /* +0x9e3cc9 */ __asm { NOP }
    /* +0x9e3cca */ __asm { NOP }
    /* +0x9e3ccb */ __asm { NOP }
    /* +0x9e3ccc */ __asm { NOP }
    /* +0x9e3e82 */ __asm { MOV CX,0x6d7a }
    /* +0x9e3e86 */ __asm { MOVD XMM2,ECX }
    /* +0x9e3e8a */ __asm { MOVD XMM0,EDI }
    /* +0x9e3e8e */ __asm { PSUBW XMM2,XMM0 }
    /* +0x9e3e92 */ __asm { MOVD ECX,XMM2 }
    /* +0x9e3e96 */ __asm { ROL CX,0x6 }
    /* +0x9e3e9a */ __asm { MOVZX ECX,CX }
    /* +0x9e3e9d */ __asm { MOVD XMM2,EDI }
    /* +0x9e3ea1 */ __asm { CMP EAX,ECX }
    /* +0x9e3ea3 */ __asm { JNC 0x7fffa5154120 }
    /* +0x9e3ea9 */ __asm { MOV EAX,0x29cd09ac }
    /* +0x9e3eae */ __asm { MOVD XMM0,EAX }
    /* +0x9e3eb2 */ __asm { LEA RCX,[0x7fffa47b6820] }
    /* +0x9e3eb9 */ __asm { MOV R8,-0x59e11f6726a81b9b }
    /* +0x9e3ec3 */ __asm { MOV EDX,0xc36f46e9 }
    /* +0x9e3ec8 */ __asm { IMUL RDX,R8 }
    /* +0x9e3ecc */ __asm { MOV R8,-0x4db9f88aa9ad0c54 }
    /* +0x9e3ed6 */ __asm { ADD R8,RDI }
    /* +0x9e3ed9 */ __asm { MOV RAX,RCX }
    /* +0x9e3edc */ __asm { ROL RAX,0x39 }
    /* +0x9e3ee0 */ __asm { ADD R8,RDX }
    /* +0x9e3ee3 */ __asm { PADDD XMM0,XMM2 }
    /* +0x9e3ee7 */ __asm { MOVD R9D,XMM0 }
    /* +0x9e3eec */ __asm { MOV R10D,0xb649dfdc }
    /* +0x9e3ef2 */ __asm { SUB R10D,R9D }
    /* +0x9e3ef5 */ __asm { ADD R10,RAX }
    /* +0x9e3ef8 */ __asm { CMP R8,R10 }
    /* +0x9e3efb */ __asm { NOP }
    /* +0x9e3efc */ __asm { NOP }
    /* +0x9e3efd */ __asm { NOP }
    /* +0x9e3efe */ __asm { NOP }
    /* +0x9e3eff */ __asm { NOP }
    /* +0x9e3f00 */ __asm { NOP }
    /* +0x9e3f01 */ __asm { MOV RAX,0x0 }
    /* +0x9e3f08 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x9e3f0f */ __asm { MOV EAX,0x50d11ad3 }
    /* +0x9e3f14 */ __asm { IMUL EAX,EAX,0x23811def }
    /* +0x9e3f1a */ __asm { NOT EAX }
    /* +0x9e3f1c */ __asm { MOVZX R8D,uint8_t ptr [RCX + 0x5f29] }
    /* +0x9e3f24 */ __asm { MOVZX EDX,uint8_t ptr [RCX + R8*0x4 + 0x5f2f] }
    /* +0x9e3f2d */ __asm { NOT DL }
    /* +0x9e3f2f */ __asm { ROL DL,0x5 }
    /* +0x9e3f32 */ __asm { MOV uint8_t ptr [RSP + 0x40],DL }
    /* +0x9e3f36 */ __asm { MOVZX R9D,uint8_t ptr [RCX + R8*0x4 + 0x5f30] }
    /* +0x9e3f3f */ __asm { LEA EDX,[R9 + 0x1] }
    /* +0x9e3f43 */ __asm { NOT R9B }
    /* +0x9e3f46 */ __asm { CMP RAX,0x7f6b0e02 }
    /* +0x9e3f4c */ __asm { MOVZX EAX,R9B }
    /* +0x9e3f50 */ __asm { MOVZX R9D,DL }
    /* +0x9e3f54 */ __asm { CMOVZ R9D,EAX }
    /* +0x9e3f58 */ __asm { ROL R9B,0x5 }
    /* +0x9e3f5c */ __asm { MOV uint8_t ptr [RSP + 0x41],R9B }
    /* +0x9e3f61 */ __asm { MOVZX EDX,uint8_t ptr [RCX + R8*0x4 + 0x5f31] }
    /* +0x9e3f6a */ __asm { NOT DL }
    /* +0x9e3f6c */ __asm { ROL DL,0x5 }
    /* +0x9e3f6f */ __asm { MOV uint8_t ptr [RSP + 0x42],DL }
    /* +0x9e3f73 */ __asm { MOVZX EDX,uint8_t ptr [RCX + R8*0x4 + 0x5f32] }
    /* +0x9e3f7c */ __asm { NOT DL }
    /* +0x9e3f7e */ __asm { ROL DL,0x5 }
    /* +0x9e3f81 */ __asm { MOV uint8_t ptr [RSP + 0x43],DL }
    /* +0x9e3f85 */ __asm { MOV ECX,0x9102c3cc }
    /* +0x9e3f8a */ __asm { XOR ECX,dword ptr [RSP + 0x40] }
    /* +0x9e3f8e */ __asm { MOVD XMM2,ECX }
    /* +0x9e3f92 */ __asm { MOV EAX,0x1 }
    /* +0x9e3f97 */ __asm { SHL EAX,CL }
    /* +0x9e3f99 */ __asm { MOVD XMM0,EAX }
    /* +0x9e3f9d */ __asm { PAND XMM0,XMM2 }
    /* +0x9e3fa1 */ __asm { MOVD EAX,XMM0 }
    /* +0x9e3fa5 */ __asm { TEST EAX,EAX }
    /* +0x9e3fa7 */ __asm { JZ 0x7fffa51547ec }
    /* +0x9e3fad */ __asm { MOV EAX,0x21734f6f }
    /* +0x9e3fb2 */ __asm { ADD EAX,0x81557f4a }
    /* +0x9e3fb7 */ __asm { LEA R11,[0x7fffa47b6f7d] }
    /* +0x9e3fbe */ __asm { MOV R10,R11 }
    /* +0x9e3fc1 */ __asm { ROL R10,0x1d }
    /* +0x9e3fc5 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x9e3fcc */ __asm { MOV RCX,0x0 }
    /* +0x9e3fd3 */ __asm { MOV ECX,EDI }
    /* +0x9e3fd5 */ __asm { ROL EAX,CL }
    /* +0x9e3fd7 */ __asm { MOVSXD R8,EAX }
    /* +0x9e3fda */ __asm { SUB R10,R8 }
    /* +0x9e3fdd */ __asm { MOV R8,-0x12646b7469720609 }
    /* +0x9e3fe7 */ __asm { ADD R8,RDI }
    /* +0x9e3fea */ __asm { XOR R8,R10 }
    /* +0x9e3fed */ __asm { CMP R8,-0x1 }
    /* +0x9e3ff1 */ __asm { JNZ 0x7fffa5153ff6 }
    /* +0x9e3ff3 */ __asm { OR AL,0x62 }
    /* +0x9e3ff5 */ __asm { XCHG EAX,EBP }
    /* +0x9e3ff6 */ __asm { MOVD XMM2,EDI }
    /* +0x9e3ffa */ __asm { MOV CX,0x6159 }
    /* +0x9e3ffe */ __asm { MOV R8D,0x58d82020 }
    /* +0x9e4004 */ __asm { ADD R8D,0x25d8d90 }
    /* +0x9e400b */ __asm { NOT ECX }
    /* +0x9e400d */ __asm { MOV qword ptr [RSP + 0x38],RAX }
    /* +0x9e4012 */ __asm { MOV R10W,0x20ac }
    /* +0x9e4017 */ __asm { MOV AX,0x1f42 }
    /* +0x9e401b */ __asm { ADD EAX,0xffff8c85 }
    /* +0x9e4020 */ __asm { XOR EAX,EDI }
    /* +0x9e4022 */ __asm { ADD R10D,0x7dd8 }
    /* +0x9e4029 */ __asm { XOR R10D,EDI }
    /* +0x9e402c */ __asm { IMUL EAX,EAX,0x95 }
    /* +0x9e4032 */ __asm { ROL R8D,0x18 }
    /* +0x9e4036 */ __asm { MOVZX EDX,AX }
    /* +0x9e4039 */ __asm { XOR R8D,EDI }
    /* +0x9e403c */ __asm { MOV EAX,dword ptr [R11 + R8*0x1 + 0xe4] }
    /* +0x9e4044 */ __asm { MOVSX R10,R10W }
    /* +0x9e4048 */ __asm { MOVD XMM0,ECX }
    /* +0x9e404c */ __asm { PADDW XMM0,XMM2 }
    /* +0x9e4050 */ __asm { PEXTRW R9D,XMM0,0x0 }
    /* +0x9e4056 */ __asm { JMP 0x7fffa5154acf }
    /* +0x9e405b */ __asm { MOV EAX,0xe72ff79 }
    /* +0x9e4060 */ __asm { MOVD XMM2,EAX }
    /* +0x9e4064 */ __asm { MOVD XMM0,EBP }
    /* +0x9e4068 */ __asm { PMULUDQ XMM0,XMM2 }
    /* +0x9e406c */ __asm { MOVD ECX,XMM0 }
    /* +0x9e4070 */ __asm { NOT ECX }
    /* +0x9e4072 */ __asm { MOV R11D,0xa00c3af5 }
    /* +0x9e4078 */ __asm { MOV RAX,R11 }
    /* +0x9e407b */ __asm { SUB RAX,RCX }
    /* +0x9e407e */ __asm { XOR RAX,0x48c3d65f }
    /* +0x9e4084 */ __asm { MOV R8,-0x1fbb30916dc4b23 }
    /* +0x9e408e */ __asm { CMP RAX,R8 }
    /* +0x9e4091 */ __asm { JZ 0x7fffa5154a62 }
    /* +0x9e4097 */ __asm { TEST uint8_t ptr [R11 + -0x200e38b5],0x1 }
    /* +0x9e409f */ __asm { JZ 0x7fffa5154a73 }
    /* +0x9e40a5 */ __asm { LEA R11,[0x7fffa47bfe28] }
    /* +0x9e40ac */ __asm { MOV R8,-0x70b5c707996765ef }
    /* +0x9e40b6 */ __asm { CMP R11,R8 }
    /* +0x9e40b9 */ __asm { NOP }
    /* +0x9e40ba */ __asm { NOP }
    /* +0x9e40bb */ __asm { NOP }
    /* +0x9e40bc */ __asm { NOP }
    /* +0x9e40bd */ __asm { NOP }
    /* +0x9e40be */ __asm { MOV AX,0xb8c6 }
    /* +0x9e40c2 */ __asm { MOV CX,0xadf8 }
    /* +0x9e40c6 */ __asm { IMUL ECX,ECX,-0x6b7f }
    /* +0x9e40cc */ __asm { XOR ECX,EDI }
    /* +0x9e40ce */ __asm { ADD ECX,0xffff977c }
    /* +0x9e40d4 */ __asm { MOV qword ptr [RSP + 0x38],R10 }
    /* +0x9e40d9 */ __asm { MOV R9W,0xc56d }
    /* +0x9e40de */ __asm { ADD R9D,0xffff9046 }
    /* +0x9e40e5 */ __asm { MOVD XMM2,R9D }
    /* +0x9e40ea */ __asm { MOV R9D,EDI }
    /* +0x9e40ed */ __asm { OR R9D,0x1 }
    /* +0x9e40f1 */ __asm { IMUL EAX,R9D }
    /* +0x9e40f5 */ __asm { ROL AX,0x3 }
    /* +0x9e40f9 */ __asm { MOVD XMM0,R9D }
    /* +0x9e40fe */ __asm { PMULLW XMM0,XMM2 }
    /* +0x9e4102 */ __asm { PEXTRW EDX,XMM0,0x0 }
    /* +0x9e4107 */ __asm { MOVSX R10,CX }
    /* +0x9e410b */ __asm { ADD EAX,0xffff970a }
    /* +0x9e4110 */ __asm { MOVZX R9D,AX }
    /* +0x9e4114 */ __asm { MOV EAX,dword ptr [R11 + -0x38f0] }
    /* +0x9e411b */ __asm { JMP 0x7fffa5154acf }
    /* +0x9e4120 */ __asm { LEA R11,[0x7fffa47c2af1] }
    /* +0x9e4127 */ __asm { MOV R8,-0x1310cc68b27a705f }
    /* +0x9e4131 */ __asm { CMP R11,R8 }
    /* +0x9e4134 */ __asm { NOP }
    /* +0x9e4135 */ __asm { NOP }
    /* +0x9e4136 */ __asm { NOP }
    /* +0x9e4137 */ __asm { NOP }
    /* +0x9e4138 */ __asm { NOP }
    /* +0x9e4139 */ __asm { ADD R11,-0x6472 }
    /* +0x9e4140 */ __asm { MOV ECX,0x76190652 }
    /* +0x9e4145 */ __asm { XOR ECX,0x396cf119 }
    /* +0x9e414b */ __asm { IMUL ECX,EBP }
    /* +0x9e414e */ __asm { MOV EAX,0x19196e5a }
    /* +0x9e4153 */ __asm { MOVD XMM0,EAX }
    /* +0x9e4157 */ __asm { PSUBD XMM0,XMM2 }
    /* +0x9e415b */ __asm { MOVD EAX,XMM0 }
    /* +0x9e415f */ __asm { XOR EAX,0x2b46ea9a }
    /* +0x9e4164 */ __asm { ADD EAX,0xa0a42e65 }
    /* +0x9e4169 */ __asm { MOVSXD R8,EAX }
    /* +0x9e416c */ __asm { CMP RCX,R8 }
    /* +0x9e416f */ __asm { JLE 0x7fffa51541a4 }
    /* +0x9e4171 */ __asm { MOV EAX,0x35f89073 }
    /* +0x9e4176 */ __asm { MOVZX R8D,uint8_t ptr [R11 + 0xe] }
    /* +0x9e417b */ __asm { LEA R11,[R11 + R8*0x4] }
    /* +0x9e417f */ __asm { ADD R11,0x1e }
    /* +0x9e4183 */ __asm { MOVD XMM2,EAX }
    /* +0x9e4187 */ __asm { MOVD XMM0,EBP }
    /* +0x9e418b */ __asm { PMULUDQ XMM0,XMM2 }
    /* +0x9e418f */ __asm { MOVD R13D,XMM0 }
    /* +0x9e4194 */ __asm { ADD R13D,0x21ce0ec0 }
    /* +0x9e419b */ __asm { XOR R13D,0x82fb7a1b }
    /* +0x9e41a2 */ __asm { JMP 0x7fffa51541c2 }
    /* +0x9e41a4 */ __asm { MOV EAX,0x3f07a2ed }
    /* +0x9e41a9 */ __asm { XOR EAX,0xa193e096 }
    /* +0x9e41ae */ __asm { MOV ECX,EDI }
    /* +0x9e41b0 */ __asm { ROL EAX,CL }
    /* +0x9e41b2 */ __asm { MOVSXD R13,EAX }
    /* +0x9e41b5 */ __asm { MOVZX R8D,uint8_t ptr [R11 + 0xe] }
    /* +0x9e41ba */ __asm { LEA R11,[R11 + R8*0x4] }
    /* +0x9e41be */ __asm { ADD R11,0x1e }
    /* +0x9e41c2 */ __asm { MOVD XMM1,EDI }
    /* +0x9e41c6 */ __asm { POR XMM1,xmmword ptr [0x7fffa56b2670] }
    /* +0x9e41ce */ __asm { MOV EAX,0x7c4f6b6b }
    /* +0x9e41d3 */ __asm { MOVD XMM2,R13D }
    /* +0x9e41d8 */ __asm { MOVZX R10D,uint8_t ptr [R11 + 0x2] }
    /* +0x9e41dd */ __asm { ROL R10B,0x4 }
    /* +0x9e41e1 */ __asm { MOV ESI,R13D }
    /* +0x9e41e4 */ __asm { OR ESI,0x1 }
    /* +0x9e41e7 */ __asm { MOVD XMM0,ESI }
    /* +0x9e41eb */ __asm { MOVD R14D,XMM1 }
    /* +0x9e41f0 */ __asm { MOVD XMM4,EAX }
    /* +0x9e41f4 */ __asm { MOVZX EDX,uint8_t ptr [R11] }
    /* +0x9e41f8 */ __asm { MOVZX EAX,uint8_t ptr [R11 + 0x1] }
    /* +0x9e41fd */ __asm { ROL AL,0x4 }
    /* +0x9e4200 */ __asm { MOV uint8_t ptr [RSP + 0x42],R10B }
    /* +0x9e4205 */ __asm { MOV CX,0x4721 }
    /* +0x9e4209 */ __asm { XOR ECX,0x17cc }
    /* +0x9e420f */ __asm { MOVD XMM3,ECX }
    /* +0x9e4213 */ __asm { PMULLW XMM3,XMM0 }
    /* +0x9e4217 */ __asm { MOVD ECX,XMM3 }
    /* +0x9e421b */ __asm { NOT ECX }
    /* +0x9e421d */ __asm { MOVD XMM0,ECX }
    /* +0x9e4221 */ __asm { PMULLW XMM0,XMM1 }
    /* +0x9e4225 */ __asm { MOV uint8_t ptr [RSP + 0x41],AL }
    /* +0x9e4229 */ __asm { PSUBD XMM4,XMM2 }
    /* +0x9e422d */ __asm { MOVD ECX,XMM4 }
    /* +0x9e4231 */ __asm { IMUL ECX,EBP }
    /* +0x9e4234 */ __asm { NOT ECX }
    /* +0x9e4236 */ __asm { ROL DL,0x4 }
    /* +0x9e4239 */ __asm { MOV uint8_t ptr [RSP + 0x40],DL }
    /* +0x9e423d */ __asm { MOVZX EDX,uint8_t ptr [R11 + 0x3] }
    /* +0x9e4242 */ __asm { ROL DL,0x4 }
    /* +0x9e4245 */ __asm { MOV uint8_t ptr [RSP + 0x43],DL }
    /* +0x9e4249 */ __asm { MOVZX ECX,uint8_t ptr [RCX] }
    /* +0x9e424c */ __asm { MOV R9D,0x65e8ce72 }
    /* +0x9e4252 */ __asm { XOR R9D,dword ptr [RSP + 0x40] }
    /* +0x9e4257 */ __asm { RDTSC }
    /* +0x9e4259 */ __asm { SHL RDX,0x20 }
    /* +0x9e425d */ __asm { OR RDX,RAX }
    /* +0x9e4260 */ __asm { MOV EAX,0x1 }
    /* +0x9e4265 */ __asm { SHL EAX,CL }
    /* +0x9e4267 */ __asm { PEXTRW ECX,XMM0,0x0 }
    /* +0x9e426c */ __asm { AND EAX,R9D }
    /* +0x9e426f */ __asm { CMP EAX,ECX }
    /* +0x9e4271 */ __asm { JZ 0x7fffa5154500 }
    /* +0x9e4277 */ __asm { NOP }
    /* +0x9e4278 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x9e427f */ __asm { MOV R11,0x0 }
    /* +0x9e4286 */ __asm { MOV R11,-0x377c966485c600f3 }
    /* +0x9e4290 */ __asm { MOV R8,-0x4b061743ec0c107b }
    /* +0x9e429a */ __asm { IMUL RDX,R8 }
    /* +0x9e429e */ __asm { MOV R8,RDI }
    /* +0x9e42a1 */ __asm { OR R8,0x1 }
    /* +0x9e42a5 */ __asm { IMUL R8,R11 }
    /* +0x9e42a9 */ __asm { ADD R8,0x6ee29ae5 }
    /* +0x9e42b0 */ __asm { XOR R8,R13 }
    /* +0x9e42b3 */ __asm { LEA RCX,[R8 + RDX*0x1] }
    /* +0x9e42b7 */ __asm { ADD RCX,0x40a7a984 }
    /* +0x9e42be */ __asm { MOVQ XMM0,RCX }
    /* +0x9e42c3 */ __asm { PSRLQ XMM0,0x1b }
    /* +0x9e42c8 */ __asm { MOV RAX,RCX }
    /* +0x9e42cb */ __asm { SHR RAX,0x2d }
    /* +0x9e42cf */ __asm { MOVD XMM1,EAX }
    /* +0x9e42d3 */ __asm { PXOR XMM1,XMM0 }
    /* +0x9e42d7 */ __asm { MOVD EAX,XMM1 }
    /* +0x9e42db */ __asm { SHR RCX,0x3b }
    /* +0x9e42df */ __asm { ROR EAX,CL }
    /* +0x9e42e1 */ __asm { MOV dword ptr [RSP + 0x40],0x9f2f09fd }
    /* +0x9e42e9 */ __asm { MOV ECX,dword ptr [RSP + 0x40] }
    /* +0x9e42ed */ __asm { CMP EAX,0x10e590c }
    /* +0x9e42f2 */ __asm { JA 0x7fffa515448d }
    /* +0x9e42f8 */ __asm { MOV EAX,0xa977a235 }
    /* +0x9e42fd */ __asm { MOVD XMM0,EAX }
    /* +0x9e4301 */ __asm { PSUBD XMM0,XMM2 }
    /* +0x9e4305 */ __asm { MOVD EAX,XMM0 }
    /* +0x9e4309 */ __asm { XOR EAX,EDI }
    /* +0x9e430b */ __asm { ROL EAX,0x3 }
    /* +0x9e430e */ __asm { ADD EAX,0x652554ea }
    /* +0x9e4313 */ __asm { MOV dword ptr [RSP + 0x40],EAX }
    /* +0x9e4317 */ __asm { MOV EAX,dword ptr [RSP + 0x40] }
    /* +0x9e431b */ __asm { TEST AL,0x1 }
    /* +0x9e431d */ __asm { NOP }
    /* +0x9e431e */ __asm { NOP }
    /* +0x9e431f */ __asm { NOP }
    /* +0x9e4320 */ __asm { NOP }
    /* +0x9e4321 */ __asm { NOP }
    /* +0x9e4322 */ __asm { NOP }
    /* +0x9e4323 */ __asm { NOP }
    /* +0x9e4324 */ __asm { NOP }
    /* +0x9e4325 */ __asm { NOP }
    /* +0x9e4326 */ __asm { NOP }
    /* +0x9e4327 */ __asm { NOP }
    /* +0x9e4328 */ __asm { NOP }
    /* +0x9e4329 */ __asm { NOP }
    /* +0x9e432a */ __asm { NOP }
    /* +0x9e432b */ __asm { NOP }
    /* +0x9e432c */ __asm { NOP }
    /* +0x9e432d */ __asm { MOV R11D,0x533eef1a }
    /* +0x9e4333 */ __asm { MOV R8,-0x201382984cec21f6 }
    /* +0x9e433d */ __asm { CMP R11,R8 }
    /* +0x9e4340 */ __asm { JNZ 0x7fffa5154347 }
    /* +0x9e4342 */ __asm { JP 0x7fffa51542e0 }
    /* +0x9e4345 */ __asm { NOP }
    /* +0x9e4346 */ __asm { NOP }
    /* +0x9e4347 */ __asm { NOP }
    /* +0x9e4348 */ __asm { NOP }
    /* +0x9e4349 */ __asm { NOP }
    /* +0x9e434a */ __asm { NOP }
    /* +0x9e434b */ __asm { NOP }
    /* +0x9e434c */ __asm { NOP }
    /* +0x9e434d */ __asm { NOP }
    /* +0x9e434e */ __asm { NOP }
    /* +0x9e434f */ __asm { NOP }
    /* +0x9e4350 */ __asm { NOP }
    /* +0x9e4351 */ __asm { NOP }
    /* +0x9e4352 */ __asm { NOP }
    /* +0x9e4353 */ __asm { NOP }
    /* +0x9e4354 */ __asm { NOP }
    /* +0x9e4355 */ __asm { NOP }
    /* +0x9e448d */ __asm { LEA R11,[0x7fffa478253f] }
    /* +0x9e4494 */ __asm { MOV R8,-0x49cde97073914fc8 }
    /* +0x9e449e */ __asm { CMP R11,R8 }
    /* +0x9e44a1 */ __asm { JZ 0x7fffa5154bc7 }
    /* +0x9e44a7 */ __asm { MOV AX,0x268b }
    /* +0x9e44ab */ __asm { IMUL R14D,EAX }
    /* +0x9e44af */ __asm { XOR R14D,0xfc50 }
    /* +0x9e44b6 */ __asm { ROL R14W,0x5 }
    /* +0x9e44bb */ __asm { MOV EAX,0x6868ef8f }
    /* +0x9e44c0 */ __asm { IMUL EAX,EBP }
    /* +0x9e44c3 */ __asm { MOV ECX,R13D }
    /* +0x9e44c6 */ __asm { ROR EAX,CL }
    /* +0x9e44c8 */ __asm { IMUL EAX,EAX,-0x6b094ae9 }
    /* +0x9e44ce */ __asm { ROL EAX,0xd }
    /* +0x9e44d1 */ __asm { MOVSXD R10,EAX }
    /* +0x9e44d4 */ __asm { MOV qword ptr [RSP + 0x38],RCX }
    /* +0x9e44d9 */ __asm { XOR R14D,R13D }
    /* +0x9e44dc */ __asm { MOVZX R9D,R14W }
    /* +0x9e44e0 */ __asm { MOV EAX,dword ptr [R11 + 0x20e9] }
    /* +0x9e44e7 */ __asm { MOV CX,0xa66e }
    /* +0x9e44eb */ __asm { XOR ECX,R13D }
    /* +0x9e44ee */ __asm { ADD ECX,0xffff8c07 }
    /* +0x9e44f4 */ __asm { MOV EDX,EDI }
    /* +0x9e44f6 */ __asm { XOR EDX,ECX }
    /* +0x9e44f8 */ __asm { MOVZX EDX,DX }
    /* +0x9e44fb */ __asm { JMP 0x7fffa5154acf }
    /* +0x9e4500 */ __asm { MOVD XMM0,ESI }
    /* +0x9e4504 */ __asm { MOV AX,0xb66a }
    /* +0x9e4508 */ __asm { XOR EAX,0xffff9396 }
    /* +0x9e450d */ __asm { MOV R8,R13 }
    /* +0x9e4510 */ __asm { MOV RCX,-0x7a65e62e0fb4116b }
    /* +0x9e451a */ __asm { MOVD XMM1,EAX }
    /* +0x9e451e */ __asm { MOVDQA XMM4,xmmword ptr [0x7fffa5873010] }
    /* +0x9e4526 */ __asm { PSUBW XMM4,XMM1 }
    /* +0x9e452a */ __asm { PMULLW XMM4,XMM0 }
    /* +0x9e452e */ __asm { PEXTRW R11D,XMM4,0x0 }
    /* +0x9e4534 */ __asm { XOR RCX,-0x17aa417 }
    /* +0x9e453b */ __asm { ROL RCX,0x24 }
    /* +0x9e453f */ __asm { OR R8,0x1 }
    /* +0x9e4543 */ __asm { IMUL RCX,R8 }
    /* +0x9e4547 */ __asm { MOV R8,-0x158b4ad174161d9b }
    /* +0x9e4551 */ __asm { IMUL RDX,R8 }
    /* +0x9e4555 */ __asm { SUB RCX,RDI }
    /* +0x9e4558 */ __asm { ADD RCX,RDX }
    /* +0x9e455b */ __asm { MOV R8,RCX }
    /* +0x9e455e */ __asm { SHR R8,0x2d }
    /* +0x9e4562 */ __asm { MOV RAX,RCX }
    /* +0x9e4565 */ __asm { SHR RAX,0x1b }
    /* +0x9e4569 */ __asm { XOR EAX,R8D }
    /* +0x9e456c */ __asm { SHR RCX,0x3b }
    /* +0x9e4570 */ __asm { ROR EAX,CL }
    /* +0x9e4572 */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0x9e4576 */ __asm { MOV R8,0x4709b9ccddc96169 }
    /* +0x9e4580 */ __asm { CMP R11,R8 }
    /* +0x9e4583 */ __asm { JNZ 0x7fffa5154593 }
    /* +0x9e4585 */ __asm { XCHG EAX,ESI }
    /* +0x9e4586 */ __asm { MOV AL,[0xec18d2675e55ec59] }
    /* +0x9e458f */ __asm { HLT }
    /* +0x9e4593 */ __asm { CMP EAX,0x1013ee }
    /* +0x9e4598 */ __asm { JA 0x7fffa515474d }
    /* +0x9e459e */ __asm { MOV EAX,0xe2b6d466 }
    /* +0x9e45a3 */ __asm { IMUL EAX,EAX,-0x32bf9fa3 }
    /* +0x9e45a9 */ __asm { NOT EAX }
    /* +0x9e45ab */ __asm { ADD EAX,R13D }
    /* +0x9e45ae */ __asm { IMUL EAX,EAX,-0x19a8f7e1 }
    /* +0x9e45b4 */ __asm { MOV dword ptr [RSP + 0x40],EAX }
    /* +0x9e45b8 */ __asm { MOV EAX,dword ptr [RSP + 0x40] }
    /* +0x9e45bc */ __asm { TEST AL,0x1 }
    /* +0x9e45be */ __asm { NOP }
    /* +0x9e45bf */ __asm { NOP }
    /* +0x9e45c0 */ __asm { NOP }
    /* +0x9e45c1 */ __asm { NOP }
    /* +0x9e45c2 */ __asm { NOP }
    /* +0x9e45c3 */ __asm { NOP }
    /* +0x9e45c4 */ __asm { NOP }
    /* +0x9e45c5 */ __asm { NOP }
    /* +0x9e45c6 */ __asm { NOP }
    /* +0x9e45c7 */ __asm { NOP }
    /* +0x9e45c8 */ __asm { NOP }
    /* +0x9e45c9 */ __asm { NOP }
    /* +0x9e45ca */ __asm { NOP }
    /* +0x9e45cb */ __asm { NOP }
    /* +0x9e45cc */ __asm { NOP }
    /* +0x9e45cd */ __asm { MOV R11D,0xba6a0b12 }
    /* +0x9e45d3 */ __asm { MOV R8,-0x13410daad4933d56 }
    /* +0x9e45dd */ __asm { CMP R11,R8 }
    /* +0x9e45e0 */ __asm { JZ 0x7fffa5154bed }
    /* +0x9e45e6 */ __asm { MOV EAX,0xfc45c96b }
    /* +0x9e45eb */ __asm { MOVD XMM0,EAX }
    /* +0x9e45ef */ __asm { PSUBD XMM0,XMM2 }
    /* +0x9e45f3 */ __asm { MOVD EAX,XMM0 }
    /* +0x9e45f7 */ __asm { ROL EAX,0x1e }
    /* +0x9e45fa */ __asm { XOR EAX,EDI }
    /* +0x9e45fc */ __asm { MOVSXD R8,EAX }
    /* +0x9e45ff */ __asm { MOV ECX,dword ptr [R11 + R8*0x1 + 0x2c4] }
    /* +0x9e4607 */ __asm { MOV R11,0x5555555555555556 }
    /* +0x9e4611 */ __asm { IMUL R11,RCX }
    /* +0x9e4615 */ __asm { MOV R8,0x5555555555555555 }
    /* +0x9e461f */ __asm { CMP R11,R8 }
    /* +0x9e4622 */ __asm { JA 0x7fffa515474d }
    /* +0x9e4628 */ __asm { MOV AX,0x322e }
}


// ============================================================================
// Function : FUN_7fffa5154c30  |  RVA: 0x9e4c30  |  Size: 15 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5154c30(void)

{
  uint64_t auStackX_8 [4];
  
  (*(code *)&DAT_7ff84ea23480)(auStackX_8);
  return auStackX_8[0];
}


// ============================================================================
// Function : FUN_7fffa5154c50  |  RVA: 0x9e4c50  |  Size: 1491 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa5155257) overlaps instruction at (ram,0x7fffa5155254)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa515524c) */
/* WARNING: Removing unreachable block (ram,0x7fffa5155244) */
/* WARNING: Removing unreachable block (ram,0x7fffa515526f) */
/* WARNING: Removing unreachable block (ram,0x7fffa5155254) */

uint64_t FUN_7fffa5154c50(uint32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint64_t uVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  uint32_t extraout_var;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint8_t bVar10;
  uint8_t bVar11;
  uint8_t bVar12;
  uint8_t bVar13;
  uint64_t *unaff_R13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint8_t in_AF;
  uint8_t in_TF;
  uint8_t in_IF;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_VIF;
  uint8_t in_VIP;
  uint8_t in_ID;
  uint64_t uStack_e0;
  uint8_t auStack_d8 [40];
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t *puStack_a0;
  uint64_t *puStack_98;
  uint64_t *puStack_90;
  uint64_t *puStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint32_t uStack_64;
  uint64_t auStack_60 [4];
  
  uStack_70 = 0;
  uStack_b0 = param_2;
  uStack_80 = param_4;
  uStack_64 = param_1;
  auStack_60[0] = param_3;
  if (param_3 != 0) {
    unaff_R13 = &uStack_70;
    uStack_78 = param_2;
    do {
      uStack_e0 = 0x7fffa5154d14;
      uStack_a8 = &uStack_78;
      puStack_a0 = unaff_R13;
      (*(code *)&UNK_7fffa5697470)
                (((int64_t)&uStack_a8 << 0x29 | (uint64_t)&uStack_a8 >> 0x17) ^
                 ((int64_t)&uStack_a8 * 0x8000 | (uint64_t)&uStack_a8 >> 0x31) ^
                 (uint64_t)&uStack_a8);
      uStack_70 = uStack_70 + 1;
    } while (uStack_70 < param_3);
  }
  uStack_70 = 0;
  uVar7 = ~(uint64_t)unaff_R13;
  uStack_78 = uStack_80;
  do {
    puStack_a0 = &uStack_70;
    uVar4 = (uint64_t)&uStack_a8 >> 0x17;
    uVar14 = ((int64_t)&uStack_a8 * 0x8000 | (uint64_t)&uStack_a8 >> 0x31) ^ (uint64_t)&uStack_a8
    ;
    uStack_a8 = &uStack_78;
    uVar8 = ~uVar4;
    uVar15 = uVar14 & uVar8;
    uStack_e0 = 0x7fffa5154eb1;
    (*(code *)&UNK_7fffa5697470)
              ((((uVar4 & uVar14 | uVar7) +
                (((uVar4 | uVar14) ^ (uint64_t)unaff_R13) - ((uint64_t)unaff_R13 | uVar4 | uVar14)
                )) * 0xd4f3e6c9 +
               (uVar4 ^ uVar14 | uVar7) * 0xcea9e531 + (uVar7 ^ uVar15) * -0xb9b5fe8d +
               (uVar15 & (uint64_t)unaff_R13) * 0xc0000026 +
               ((uVar8 | uVar14) ^ (uint64_t)unaff_R13) * 0x64a0199 +
               ((uVar8 ^ uVar14) & uVar7) * -0xf031cf06 + ((uVar4 ^ uVar14) & uVar7) * -0xe9e7cd6c +
               (uVar15 & uVar7) * -0xc0000026) * 0x20000000);
    uStack_70 = uStack_70 + 1;
  } while (uStack_70 < 8);
  uVar3 = rdtsc();
  uVar7 = (CONCAT44(0x7fff,(int)((uint64_t)uVar3 >> 0x20)) << 0x20 |
          CONCAT44(extraout_var,(int)uVar3)) * -0x5a46117eacb056b3 + 0xaff7ab3bfcc4d42a;
  uVar5 = (uint32_t)(uVar7 >> 0x1b) ^ (uint32_t)(uVar7 >> 0x2d);
  bVar10 = (uint8_t)(uVar7 >> 0x3b);
  puVar6 = (uint64_t *)auStack_d8;
  if ((uVar5 >> bVar10 | uVar5 << 0x20 - bVar10) < 0x415f12) {
    uVar7 = (uint64_t)bRam00007fffa47bc749;
    bVar10 = ~*(uint8_t *)(uVar7 * 4 + 0x7fffa47bc74f);
    bVar11 = ~*(uint8_t *)(uVar7 * 4 + 0x7fffa47bc750);
    bVar12 = ~*(uint8_t *)(uVar7 * 4 + 0x7fffa47bc751);
    bVar13 = ~*(uint8_t *)(uVar7 * 4 + 0x7fffa47bc752);
    uStack_a8._0_4_ =
         CONCAT13(bVar13 << 5 | bVar13 >> 3,
                  CONCAT12(bVar12 << 5 | bVar12 >> 3,
                           CONCAT11(bVar11 << 5 | bVar11 >> 3,bVar10 << 5 | bVar10 >> 3)));
    puVar6 = (uint64_t *)auStack_d8;
    if ((((uint32_t)uStack_a8 ^ 0x9102c3cc) >> (((uint32_t)uStack_a8 ^ 0x9102c3cc) & 0x1f) & 1) != 0) {
      lVar9 = 0x1e9480;
      puVar6 = (uint64_t *)&UNK_7fffa4a03560;
      uVar7 = SUB168(ZEXT816(0x847094ba) * ZEXT816(0x8ddc686),8);
      uStack_e0 = (uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)(uVar7 != 0) * 0x800 |
                  (uint64_t)(in_IF & 1) * 0x200 | (uint64_t)(in_TF & 1) * 0x100 | 0x80 |
                  (uint64_t)(in_AF & 1) * 0x10 | (uint64_t)(uVar7 != 0) |
                  (uint64_t)(in_ID & 1) * 0x200000 | (uint64_t)(in_VIP & 1) * 0x100000 |
                  (uint64_t)(in_VIF & 1) * 0x80000 | (uint64_t)(in_AC & 1) * 0x40000;
      uVar7 = uVar7 ^ 0x847094ba ^ SUB168(ZEXT816(0x847094ba) * ZEXT816(0x8ddc686),0) ^ 0x8ddc686;
      while( true ) {
        uVar7 = uVar7 ^ puVar6[1] ^ 0x846e003a;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = *puVar6 ^ 0x9b5eda78;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar7;
        uVar7 = SUB168(auVar1 * auVar2,0) ^ *puVar6 ^ 0x9b5eda78 ^ SUB168(auVar1 * auVar2,8) ^ uVar7
        ;
        lVar9 = lVar9 + -0x10;
        if (lVar9 == 0) break;
        puVar6 = puVar6 + 2;
      }
      puVar6 = (uint64_t *)auStack_d8;
      if (uVar7 != 0x2529678c9d6e2da3) {
        puVar6 = &uStack_e0;
      }
    }
  }
  uStack_78 = CONCAT44(uStack_78._4_4_,0xb);
  puStack_a0 = &uStack_78;
  puStack_90 = auStack_60;
  puStack_88 = &uStack_80;
  uStack_a8 = (uint64_t *)&uStack_64;
  puStack_98 = &uStack_b0;
  *(uint64_t *)((int64_t)puVar6 + -8) = 0x7fffa5155229;
  FUN_7fffa4ee9680(0x5b4706b9,0x4159139e,0x32b0016f);
  return uStack_78 & 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa5155280  |  RVA: 0x9e5280  |  Size: 57 bytes
// Callers  : FUN_7fffa5155790@0x9e5790
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

uint64_t FUN_7fffa5155280(int64_t param_1)

{
  uint32_t *puVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint32_t *)FUN_7fffa4ed9184();
  *puVar1 = 0x16;
  FUN_7fffa55c8ce0();
  return 0xffffffffffffffff;
}


// ============================================================================
// Function : FUN_7fffa51552c8  |  RVA: 0x9e52c8  |  Size: 372 bytes
// Callers  : FUN_7fffa50c9360@0x959360
// Callees  : FUN_7fffa5488850@0xd18850, FUN_7fffa565caf0@0xeecaf0, FUN_7fffa5657488@0xee7488
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa51552c8(uint64_t *param_1,uint32_t param_2,short *param_3,uint64_t param_4,
                     uint8_t param_5)

{
  short sVar1;
  uint64_t uVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t uVar5;
  int64_t lVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  uint64_t uStackX_10;
  uint64_t uStack_30;
  
  uStack_30 = 0x7fffa51552e4;
  lVar6 = FUN_7fffa565caf0();
  lVar6 = -lVar6;
  *(uint64_t *)((int64_t)register0x00000020 + lVar6 + 0x1438) =
       _DAT_7fffa4780040 ^ (int64_t)register0x00000020 + lVar6 + -0x28;
  psVar11 = (short *)((param_4 & 0xffffffff) + (int64_t)param_3);
  uVar2 = *(uint64_t *)
           (*(int64_t *)(&DAT_7fffa4782180 + ((int64_t)(int)param_2 >> 6) * 8) + 0x28 +
           (uint64_t)(param_2 & 0x3f) * 0x48);
  *param_1 = 0;
  *(uint32_t *)(param_1 + 1) = 0;
  psVar9 = param_3;
  do {
    if (psVar11 <= psVar9) {
LAB_7fffa515540d:
      uVar8 = *(uint64_t *)((int64_t)register0x00000020 + lVar6 + 0x1438);
      *(uint64_t *)((int64_t)&uStack_30 + lVar6) = 0x7fffa5155420;
      FUN_7fffa5488850(uVar8 ^ (int64_t)register0x00000020 + lVar6 + -0x28);
      return;
    }
    psVar10 = (short *)(&param_5 + lVar6);
    do {
      if (psVar11 <= psVar9) break;
      sVar1 = *psVar9;
      psVar9 = psVar9 + 1;
      if (sVar1 == 10) {
        *psVar10 = 0xd;
        psVar10 = psVar10 + 1;
      }
      *psVar10 = sVar1;
      psVar10 = psVar10 + 1;
    } while (psVar10 < (short *)((int64_t)register0x00000020 + lVar6 + 0x6d0));
    *(uint64_t *)((int64_t)&uStackX_10 + lVar6) = 0;
    *(uint64_t *)((int64_t)register0x00000020 + lVar6 + 8) = 0;
    *(uint32_t *)((int64_t)register0x00000020 + lVar6) = 0xd55;
    *(int64_t *)((int64_t)register0x00000020 + lVar6 + -8) =
         (int64_t)register0x00000020 + lVar6 + 0x6d8;
    *(uint64_t *)((int64_t)&uStack_30 + lVar6) = 0x7fffa51553ae;
    uVar3 = FUN_7fffa5657488(0xfde9,0,&param_5 + lVar6,
                             (int64_t)psVar10 - (int64_t)(&param_5 + lVar6) >> 1);
    if (uVar3 == 0) {
LAB_7fffa5155405:
      *(uint64_t *)((int64_t)&uStack_30 + lVar6) = 0x7fffa515540b;
      uVar5 = (*(code *)&DAT_7ff84ea18640)();
      *(uint32_t *)param_1 = uVar5;
      goto LAB_7fffa515540d;
    }
    uVar8 = 0;
    if (uVar3 != 0) {
      do {
        *(uint32_t *)((int64_t)register0x00000020 + lVar6 + 0x18) = 0;
        *(uint64_t *)((int64_t)register0x00000020 + lVar6 + -8) = 0;
        *(uint64_t *)((int64_t)&uStack_30 + lVar6) = 0x7fffa51553e6;
        iVar4 = (*(code *)&DAT_7ff84ea57790)
                          (uVar2,(int64_t)register0x00000020 + uVar8 + lVar6 + 0x6d8,
                           uVar3 - (int)uVar8,(int64_t)register0x00000020 + lVar6 + 0x18);
        if (iVar4 == 0) goto LAB_7fffa5155405;
        uVar7 = (int)uVar8 + *(int *)((int64_t)register0x00000020 + lVar6 + 0x18);
        uVar8 = (uint64_t)uVar7;
      } while (uVar7 < uVar3);
    }
    *(int *)((int64_t)param_1 + 4) = (int)psVar9 - (int)param_3;
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa5155440  |  RVA: 0x9e5440  |  Size: 16 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5155440(uint8_t *param_1,uint8_t *param_2,int64_t param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5155450  |  RVA: 0x9e5450  |  Size: 57 bytes
// Callers  : FUN_7fffa5182a30@0xa12a30, FUN_7fffa564c680@0xedc680
// Callees  : FUN_7fffa52c3bf0@0xb53bf0
// ============================================================================
void FUN_7fffa5155450(uint64_t *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    *(uint8_t *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  FUN_7fffa52c3bf0(*param_1);
  *(uint8_t *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa5155490  |  RVA: 0x9e5490  |  Size: 757 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5155490(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint16_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t in_R9;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint32_t in_stack_00000028;
  
  in_R9 = ~in_R9;
  in_R9 = (in_R9 << 4 | in_R9 >> 0x3c) ^ (in_R9 << 0x1d | in_R9 >> 0x23) ^ in_R9;
  in_R9 = (in_R9 << 0x3a | in_R9 >> 6) ^ (in_R9 << 8 | in_R9 >> 0x38) ^ in_R9;
  in_R9 = (in_R9 << 0x34 | in_R9 >> 0xc) ^ (in_R9 << 0x10 | in_R9 >> 0x30) ^ in_R9;
  in_R9 = (in_R9 << 0x28 | in_R9 >> 0x18) ^ (in_R9 << 0x20 | in_R9 >> 0x20) ^ in_R9;
  plVar8 = (int64_t *)(in_R9 << 0x30 | in_R9 >> 0x10);
  uVar1 = plVar8[2];
  uVar2 = plVar8[3];
  if (uVar1 < 3) {
    uVar5 = 3 - uVar1;
    if (uVar2 - uVar1 < uVar5) {
      uVar6 = uVar2 >> (((in_stack_00000028 ^ 0x2a3737be) << 5 |
                        (in_stack_00000028 ^ 0x2a3737be) >> 0x1b) != 0x6848c044);
      uVar7 = uVar6 + uVar2;
      uVar9 = 0xf;
      if (0xf < uVar7) {
        uVar9 = uVar7;
      }
      if ((uVar6 ^ 0x7fffffffffffffff) < uVar2) {
        uVar9 = 0x7fffffffffffffff;
      }
      uVar6 = uVar9 + 1;
      (*(code *)((int64_t)(int)~(in_stack_00000028 ^ 0xaa915de5) + 0x7fffa5277576))();
      lVar4 = (uVar6 << 0x2c | uVar6 >> 0x14) - ((uVar6 >> 0x14) << 0x36);
      plVar8[2] = 3;
      plVar8[3] = uVar9;
      if (uVar2 < 0x10) {
        FUN_7fffa56a5f20(lVar4,plVar8,uVar1);
        FUN_7fffa4ecf8e0(uVar1 + lVar4,0,uVar5);
        *(uint8_t *)(lVar4 + 3) = 0;
      }
      else {
        FUN_7fffa56a5f20(lVar4,*plVar8,uVar1);
        uVar3 = (uint16_t)DAT_7fffa56b2670;
        FUN_7fffa4ecf8e0(uVar1 + lVar4,0,uVar5);
        *(uint8_t *)(lVar4 + 3) = 0;
        (*(code *)((int64_t)(short)(((uint16_t)in_stack_00000028 | uVar3) * -0x250d) + 0x7fffa568eddd
                  ))();
      }
      *plVar8 = lVar4;
    }
    else {
      plVar8[2] = 3;
      if (0xf < uVar2) {
        plVar8 = (int64_t *)*plVar8;
      }
      FUN_7fffa4ecf8e0(uVar1 + (int64_t)plVar8,0,uVar5);
      *(uint8_t *)((int64_t)plVar8 + 3) = 0;
    }
  }
  else {
    plVar8[2] = 3;
    if (0xf < uVar2) {
      plVar8 = (int64_t *)*plVar8;
    }
    *(uint8_t *)((int64_t)plVar8 + 3) = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5155790  |  RVA: 0x9e5790  |  Size: 149 bytes
// Callers  : FUN_7fffa56606b8@0xef06b8
// Callees  : FUN_7fffa5155280@0x9e5280, FUN_7fffa4ed9184@0x769184, FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa569faf0@0xf2faf0
// ============================================================================
int64_t FUN_7fffa5155790(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint32_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  uVar3 = 0;
  if ((param_2 == 0) ||
     (uVar3 = 0xffffffffffffffe0 % param_2, param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_7fffa5155280(param_1,uVar3);
    }
    param_2 = param_2 * param_3;
    lVar2 = FUN_7fffa569faf0(param_1,param_2);
    if ((lVar2 != 0) && (uVar3 < param_2)) {
      FUN_7fffa4ecf8e0(lVar2 + uVar3,0,param_2 - uVar3);
    }
  }
  else {
    puVar1 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar1 = 0xc;
    lVar2 = 0;
  }
  return lVar2;
}


// ============================================================================
// Function : FUN_7fffa5155840  |  RVA: 0x9e5840  |  Size: 91 bytes
// Callers  : FUN_7fffa54037a0@0xc937a0
// Callees  : FUN_7fffa55d63a0@0xe663a0
// ============================================================================
uint64_t FUN_7fffa5155840(int64_t param_1,uint8_t *param_2,uint32_t *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  char *pcVar7;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    return 1;
  }
  lVar5 = FUN_7fffa55d63a0();
  if (lVar5 + iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 8);
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
  if (((*(uint8_t *)(param_1 + 4) & 0x80) != 0) && ((*param_2 & 0x10) != 0)) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_7fffa55d63a0();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_7fffa5246e30();
  if (lVar5 != *(int *)(param_2 + 4) + lVar6) {
    iVar3 = *(int *)(param_1 + 8);
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
  if ((((((*param_2 & 2) == 0) || ((*(uint8_t *)(param_1 + 4) & 8) != 0)) &&
       ((uVar4 = *param_3, (uVar4 & 1) == 0 || ((*(uint8_t *)(param_1 + 4) & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*(uint8_t *)(param_1 + 4) & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*(uint8_t *)(param_1 + 4) & 2) != 0)))) {
    return 1;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa515589b  |  RVA: 0x9e589b  |  Size: 127 bytes
// Callers  : none
// Callees  : FUN_7fffa55d63a0@0xe663a0, FUN_7fffa5246e30@0xad6e30
// ============================================================================
uint64_t FUN_7fffa515589b(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  char *pcVar7;
  uint8_t *unaff_RBP;
  int64_t unaff_RDI;
  uint32_t *unaff_R14;
  
  iVar3 = *(int *)(unaff_RDI + 8);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_7fffa55d63a0();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_7fffa5246e30();
  if (lVar5 != *(int *)(unaff_RBP + 4) + lVar6) {
    iVar3 = *(int *)(unaff_RDI + 8);
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
  if ((((((*unaff_RBP & 2) == 0) || ((*(uint8_t *)(unaff_RDI + 4) & 8) != 0)) &&
       ((uVar4 = *unaff_R14, (uVar4 & 1) == 0 || ((*(uint8_t *)(unaff_RDI + 4) & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*(uint8_t *)(unaff_RDI + 4) & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*(uint8_t *)(unaff_RDI + 4) & 2) != 0)))) {
    return 1;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa515591a  |  RVA: 0x9e591a  |  Size: 65 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa515591a(void)

{
  uint32_t uVar1;
  uint8_t *unaff_RBP;
  int64_t unaff_RDI;
  uint32_t *unaff_R14;
  
  if ((((((*unaff_RBP & 2) == 0) || ((*(uint8_t *)(unaff_RDI + 4) & 8) != 0)) &&
       ((uVar1 = *unaff_R14, (uVar1 & 1) == 0 || ((*(uint8_t *)(unaff_RDI + 4) & 1) != 0)))) &&
      (((uVar1 & 4) == 0 || ((*(uint8_t *)(unaff_RDI + 4) & 4) != 0)))) &&
     (((uVar1 & 2) == 0 || ((*(uint8_t *)(unaff_RDI + 4) & 2) != 0)))) {
    return 1;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa515595b  |  RVA: 0x9e595b  |  Size: 15 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa515595b(void)

{
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5155970  |  RVA: 0x9e5970  |  Size: 2152 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa51561d9) overlaps instruction at (ram,0x7fffa51561d4)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5155970(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  char *pcVar1;
  uint32_t uVar2;
  uint8_t auVar3 [16];
  uint16_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint16_t uVar7;
  uint8_t bVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  code *pcVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  int iVar19;
  int64_t lVar20;
  uint64_t uVar21;
  int64_t *plVar22;
  char cVar23;
  char cVar26;
  char cVar27;
  uint8_t bVar28;
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint64_t in_XMM1_Qa;
  uint8_t auVar29 [16];
  int64_t unaff_retaddr;
  uint64_t uStack_d8;
  uint32_t uStack_cc;
  code *apcStack_c8 [3];
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  int64_t lStack_a0;
  uint64_t uStack_98;
  int64_t lStack_90;
  uint8_t *pbStack_88;
  uint64_t uStack_80;
  
  uVar18 = (uint32_t)param_3;
  uVar17 = uVar18 | 1;
  uVar11 = in_XMM1_Qa ^ 0xd274a45;
  uVar9 = uVar11 << 0x24 | in_XMM1_Qa >> 0x1c;
  uVar10 = uVar9 ^ uVar11;
  if (uVar17 * -0x58cd7652 <= (uVar18 ^ 0x17102dcd) + 0x868f51e9) {
    uVar10 = uVar11 - uVar9;
  }
  uVar10 = uVar10 ^ (uVar11 << 0x26 | uVar11 >> 0x1a);
  uVar10 = (uVar10 << 8 | uVar10 >> 0x38) ^ (uVar10 << 0xc | uVar10 >> 0x34) ^ uVar10;
  uVar10 = (uVar10 << 0x18 | uVar10 >> 0x28) ^ (uVar10 << 0x10 | uVar10 >> 0x30) ^ uVar10;
  uVar10 = (uVar10 << 0x20 | uVar10 >> 0x20) ^ (uVar10 << 0x30 | uVar10 >> 0x10) ^ uVar10;
  uStack_b0 = uVar10 << 0x20 | uVar10 >> 0x20;
  pbStack_88 = (uint8_t *)(param_1 * 0x40000008000001 + 0x36701561);
  if (uStack_b0 < 0x20) {
    if ((uVar17 * -0x66400000 | uVar17 * 0x585199c0 >> 0x10) < 0x11f706c3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar7 = (uint16_t)param_3;
    bVar8 = (uint8_t)param_3;
    uVar10 = *(uint64_t *)
              ((int64_t)(int)(0x3bfffc7U >> (bVar8 & 0x1f) | 0x3bfffc7 << 0x20 - (bVar8 & 0x1f)) +
               0x7fffa4792bf2 +
              (uint64_t)
              *(uint8_t *)((int64_t)(int)(uVar17 * 0x3a9c4c50 + 0x7ffffffb) + 0x7fffa4791acb) * 8) ^
             *(uint64_t *)
              ((int64_t)(short)((uVar7 | 1) * 0x2800 | (uint16_t)((uVar7 | 1) * 0x79ca) >> 6) +
              0x7fffa478afb2);
    apcStack_c8[0] =
         (code *)(CONCAT26((uint16_t)(uVar10 >> 0x37),
                           CONCAT24((uint16_t)(uVar10 >> 0x20) >> 7,
                                    CONCAT22((uint16_t)(uVar10 >> 0x10) >> 7,(uint16_t)uVar10 >> 7))) &
                  (uint64_t)DAT_7fffa56b2680 |
                 CONCAT17((char)(uVar10 >> 0x38) * '\x02',
                          CONCAT16((char)(uVar10 >> 0x30) * '\x02',
                                   CONCAT15((char)(uVar10 >> 0x28) * '\x02',
                                            CONCAT14((char)(uVar10 >> 0x20) * '\x02',
                                                     CONCAT13((char)(uVar10 >> 0x18) * '\x02',
                                                              CONCAT12((char)(uVar10 >> 0x10) *
                                                                       '\x02',CONCAT11((char)(uVar10
                                                                                             >> 8) *
                                                                                       '\x02',(char)
                                                  uVar10 * '\x02'))))))));
    uStack_a8 = param_2;
    uStack_d8 = (*apcStack_c8[0])(param_2,0,0,0);
    if (uStack_d8 != 0) {
      uStack_b0 = uStack_b0 + 1;
      uStack_98 = 0;
      uStack_cc = uVar17;
      lStack_a0 = unaff_retaddr;
      do {
        uVar10 = uStack_d8;
        iVar19 = uVar17 * 0x1c04e921;
        lVar15 = *(int64_t *)(pbStack_88 + 0x10);
        lStack_90 = *(int64_t *)(pbStack_88 + 0x18);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (uStack_d8 >> 3) + uStack_d8;
        uVar14 = SUB168(auVar3 * ZEXT816(0x9e3779b97f4a7c15),8) ^
                 SUB168(auVar3 * ZEXT816(0x9e3779b97f4a7c15),0);
        uVar11 = uVar14 >> (*pbStack_88 & 0x3f);
        uVar2 = *(uint32_t *)
                 (&UNK_7fffa5832337 +
                 (uVar14 & 0xff) * 4 + (int64_t)(short)((-0x21d7 - uVar7) * -0x43cd));
        uVar21 = 0;
        uVar9 = uVar11;
        do {
          pcVar1 = (char *)(lVar15 + uVar9 * 0x10);
          cVar23 = (char)uVar2;
          auVar29[0] = -(*pcVar1 == cVar23);
          cVar26 = (char)((uint32_t)uVar2 >> 8);
          auVar29[1] = -(pcVar1[1] == cVar26);
          cVar27 = (char)((uint32_t)uVar2 >> 0x10);
          auVar29[2] = -(pcVar1[2] == cVar27);
          bVar28 = (uint8_t)((uint32_t)uVar2 >> 0x18);
          auVar29[3] = -(pcVar1[3] == bVar28);
          auVar29[4] = -(pcVar1[4] == cVar23);
          auVar29[5] = -(pcVar1[5] == cVar26);
          auVar29[6] = -(pcVar1[6] == cVar27);
          auVar29[7] = -(pcVar1[7] == bVar28);
          auVar29[8] = -(pcVar1[8] == cVar23);
          auVar29[9] = -(pcVar1[9] == cVar26);
          auVar29[10] = -(pcVar1[10] == cVar27);
          auVar29[0xb] = -(pcVar1[0xb] == bVar28);
          auVar29[0xc] = -(pcVar1[0xc] == cVar23);
          auVar29[0xd] = -(pcVar1[0xd] == cVar26);
          auVar29[0xe] = -(pcVar1[0xe] == cVar27);
          auVar29[0xf] = -(pcVar1[0xf] == bVar28);
          uVar4 = (uint16_t)(SUB161(auVar29 >> 7,0) & 1) | (uint16_t)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                  | (uint16_t)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
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
                  (uint16_t)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe;
          uVar17 = uStack_cc;
          uStack_80 = uStack_d8;
          if ((0xebe97126 < (-0x478f530d << (bVar8 & 0x1f) | 0xb870acf3U >> 0x20 - (bVar8 & 0x1f)))
             || (uVar4 != 0)) {
            uVar16 = (uint32_t)uVar4;
            do {
              uVar5 = 0;
              for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              if (uStack_d8 == **(uint64_t **)(lStack_90 + uVar9 * 0x78 + (uint64_t)uVar5 * 8))
              goto LAB_7fffa5155e7d;
              uVar16 = uVar16 - 1 & uVar16;
            } while (uVar16 != (uint16_t)((0x1bbU >> (bVar8 & 0xf) | 0x1bb << 0x10 - (bVar8 & 0xf)) ^
                                       0xec06));
          }
          if ((*(uint8_t *)((int64_t)(iVar19 + 0x5a96a0b9) + 0x7fffa587a6d8 +
                        (uint64_t)((uint32_t)uVar14 & 7)) & pcVar1[0xf]) == 0) break;
          lVar20 = uVar9 + uVar21;
          uVar21 = uVar21 + 1;
          uVar9 = lVar20 + 1U & *(uint64_t *)(pbStack_88 + 8);
        } while (uVar21 <= *(uint64_t *)(pbStack_88 + 8));
        if (*(uint64_t *)(pbStack_88 + 0x28) < *(uint64_t *)(pbStack_88 + 0x20)) {
          lVar20 = lVar15 + uVar11 * 0x10;
          pcVar1 = (char *)(lVar15 + uVar11 * 0x10);
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
          uVar4 = (uint16_t)(SUB161(auVar24 >> 7,0) & 1) | (uint16_t)(SUB161(auVar24 >> 0xf,0) & 1) << 1
                  | (uint16_t)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
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
                  (uint16_t)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe;
          uVar16 = (uint32_t)uVar4;
          if (uVar4 == (uint16_t)((uVar7 + 0x3d4a) * 0x2000 | (uint16_t)(uVar7 + 0x3d4a) >> 3)) {
            lVar15 = 1;
            do {
              *(uint8_t *)(lVar20 + 0xf) = *(uint8_t *)(lVar20 + 0xf) | '\x01' << ((uint8_t)uVar14 & 7);
              uVar11 = uVar11 + lVar15 & *(uint64_t *)(pbStack_88 + 8);
              lVar20 = *(int64_t *)(pbStack_88 + 0x10) + uVar11 * 0x10;
              pcVar1 = (char *)(*(int64_t *)(pbStack_88 + 0x10) + uVar11 * 0x10);
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
              uVar16 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar25 >> 7,0) & 1) |
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
              lVar15 = lVar15 + 1;
            } while (uVar16 == 0);
            lStack_90 = *(int64_t *)(pbStack_88 + 0x18);
          }
          uVar5 = 0;
          for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          pcVar12 = FUN_7fffa526aab0;
          FUN_7fffa526aab0();
          puVar13 = (uint64_t *)
                    (((int64_t)pcVar12 << 0x2c | (uint64_t)pcVar12 >> 0x14) -
                    (((uint64_t)pcVar12 >> 0x14) << 0x36));
          *(uint64_t **)(uVar11 * 0x78 + lStack_90 + (uint64_t)uVar5 * 8) = puVar13;
          *puVar13 = uVar10;
          *(char *)(lVar20 + (uint64_t)uVar5) = cVar23;
          *(int64_t *)(pbStack_88 + 0x28) = *(int64_t *)(pbStack_88 + 0x28) + 1;
        }
        else {
          (*(code *)(&UNK_7fffa5497760 +
                    (int)((uVar18 + 0x1a43cfb) * 0x200 | uVar18 + 0x1a43cfb >> 0x17)))
                    (&uStack_d8,apcStack_c8,0xffffffffa6814ef8,pbStack_88);
          uVar10 = uStack_80;
          uVar17 = uStack_cc;
        }
LAB_7fffa5155e7d:
        (*(code *)((int64_t)
                   (int)(-0x3b0ac01 << (bVar8 & 0x1f) | 0xfc4f53ffU >> 0x20 - (bVar8 & 0x1f)) +
                  0x7fffa516459c))
                  ((int64_t)pbStack_88 * -0x7ffffff + 0x1b380aad18fea9f,uVar10,
                   (int64_t)
                   (int)(0x6f0adadb << (bVar8 & 0x1f) | 0x6f0adadbU >> 0x20 - (bVar8 & 0x1f)));
        uVar9 = *(uint64_t *)
                 ((int64_t)
                  (int)(-0x3124001 << (bVar8 & 0x1f) | 0xfcedbfffU >> 0x20 - (bVar8 & 0x1f)) +
                 0x7fffa4790cd0) ^
                *(uint64_t *)
                 ((uint64_t)
                  *(uint8_t *)((int64_t)
                            (short)(((uVar7 + 0x6c8e) * 0x20 | (uint16_t)(uVar7 + 0x6c8e) >> 0xb) +
                                   0x9bd2) + 0x7fffa478c39f) * 8 + 0x7fffa4784800);
        apcStack_c8[0] =
             (code *)(CONCAT26((uint16_t)(uVar9 >> 0x37),
                               CONCAT24((uint16_t)(uVar9 >> 0x20) >> 7,
                                        CONCAT22((uint16_t)(uVar9 >> 0x10) >> 7,(uint16_t)uVar9 >> 7)))
                      & 0x101010101010101 |
                     CONCAT17((char)(uVar9 >> 0x38) * '\x02',
                              CONCAT16((char)(uVar9 >> 0x30) * '\x02',
                                       CONCAT15((char)(uVar9 >> 0x28) * '\x02',
                                                CONCAT14((char)(uVar9 >> 0x20) * '\x02',
                                                         CONCAT13((char)(uVar9 >> 0x18) * '\x02',
                                                                  CONCAT12((char)(uVar9 >> 0x10) *
                                                                           '\x02',CONCAT11((char)(
                                                  uVar9 >> 8) * '\x02',(char)uVar9 * '\x02'))))))));
        uStack_d8 = (*apcStack_c8[0])(uStack_a8,uVar10,0,0);
        if (uStack_98 ==
            (uint16_t)((0x2bd6 << (bVar8 & 0xf) | 0x2bd6U >> 0x10 - (bVar8 & 0xf)) ^ 0xf245)) {
          return;
        }
        uStack_98 = uStack_98 + 1;
        unaff_retaddr = lStack_a0;
      } while (uStack_d8 != 0);
    }
    uVar18 = 0x5a640e8dU >> (bVar8 & 0x1f) | 0x5a640e8d << 0x20 - (bVar8 & 0x1f);
    plVar22 = (int64_t *)(unaff_retaddr + -0x878);
    if ((int64_t)(uint64_t)(0x44a48288U >> (bVar8 & 0x1f) | 0x44a48288 << 0x20 - (bVar8 & 0x1f))
        <= (int64_t)(int)(uVar17 * 0x1941fa00 | uVar17 * 0x430ca0fd >> 0x17)) {
      plVar22 = (int64_t *)(unaff_retaddr * -0x878);
    }
    if ((*plVar22 - (uint64_t)(uVar18 << 0x1b | uVar18 >> 5)) * (param_3 + -0x5a8e6cfda7840801) ==
        0x66a117b62706f3de) {
      cRam66a117b62706f3de = cRam66a117b62706f3de + -0x22;
    }
  }
                    /* WARNING: Read-only address (ram,0x7fffa56b2680) is written */
  return;
}


// ============================================================================
// Function : FUN_7fffa515625c  |  RVA: 0x9e625c  |  Size: 55 bytes
// Callers  : FUN_7fffa54e6918@0xd76918
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa515625c(void)

{
  uint64_t uVar1;
  
  uVar1 = (uint64_t)_DAT_7fffa4782168;
  while ((int)uVar1 != 0) {
    uVar1 = (uint64_t)((int)uVar1 - 1);
    (*(code *)&DAT_7ff850519980)(uVar1 * 0x28 + 0x7fffa4781f10);
    _DAT_7fffa4782168 = _DAT_7fffa4782168 - 1;
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa51562d4  |  RVA: 0x9e62d4  |  Size: 156 bytes
// Callers  : FUN_7fffa55ce1b8@0xe5e1b8
// Callees  : FUN_7fffa4fcf020@0x85f020, FUN_7fffa507b150@0x90b150, FUN_7fffa507e880@0x90e880
// ============================================================================
void FUN_7fffa51562d4(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4
                     )

{
  uint32_t uVar1;
  int iVar2;
  
  FUN_7fffa507b150(*param_2);
  if ((*(int64_t *)*param_3 != 0) &&
     (uVar1 = *(uint32_t *)(*(int64_t *)*param_3 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((uint8_t)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint32_t *)(*(int64_t *)*param_3 + 0x14) >> 1 & 1) != 0)
         ) {
        iVar2 = FUN_7fffa507e880(*(uint64_t *)*param_3);
        if (iVar2 == -1) {
          *(uint32_t *)param_3[3] = 0xffffffff;
        }
        else {
          *(int *)param_3[1] = *(int *)param_3[1] + 1;
        }
      }
    }
    else {
      *(int *)param_3[1] = *(int *)param_3[1] + 1;
    }
  }
  FUN_7fffa4fcf020(*param_4);
  return;
}


// ============================================================================
// Function : FUN_7fffa5159a40  |  RVA: 0x9e9a40  |  Size: 58584 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5159a40(void) {
    /* +0x9e9a40 */ __asm { PUSH RBX }
    /* +0x9e9a41 */ __asm { PUSH R15 }
    /* +0x9e9a43 */ __asm { PUSH R13 }
    /* +0x9e9a45 */ __asm { PUSH RBP }
    /* +0x9e9a46 */ __asm { PUSH R12 }
    /* +0x9e9a48 */ __asm { PUSH R14 }
    /* +0x9e9a4a */ __asm { PUSH RSI }
    /* +0x9e9a4b */ __asm { PUSH RDI }
    /* +0x9e9a4c */ __asm { SUB RSP,0x538 }
    /* +0x9e9a53 */ __asm { MOVDQA xmmword ptr [RSP + 0x520],XMM12 }
    /* +0x9e9a5d */ __asm { MOVDQA xmmword ptr [RSP + 0x510],XMM15 }
    /* +0x9e9a67 */ __asm { MOVDQA xmmword ptr [RSP + 0x500],XMM8 }
    /* +0x9e9a71 */ __asm { MOVDQA xmmword ptr [RSP + 0x4f0],XMM7 }
    /* +0x9e9a7a */ __asm { MOVDQA xmmword ptr [RSP + 0x4e0],XMM10 }
    /* +0x9e9a84 */ __asm { MOV qword ptr [RSP + 0x2e8],RCX }
    /* +0x9e9a8c */ __asm { MOV R13,qword ptr [RSP + 0x5c0] }
    /* +0x9e9a94 */ __asm { MOV R10D,0x1e1b6e47 }
    /* +0x9e9a9a */ __asm { MOV RCX,0x1010100e998f99c }
    /* +0x9e9aa4 */ __asm { MOV qword ptr [RSP + 0x2d8],RCX }
    /* +0x9e9aac */ __asm { TEST R8D,R8D }
    /* +0x9e9aaf */ __asm { SETZ R14B }
    /* +0x9e9ab3 */ __asm { ADD R10D,R13D }
    /* +0x9e9ab6 */ __asm { MOV R8D,0xdfd630f2 }
    /* +0x9e9abc */ __asm { XOR R10D,0xbe5e7581 }
    /* +0x9e9ac3 */ __asm { SUB R8D,R13D }
    /* +0x9e9ac6 */ __asm { XOR R8D,0x5f58fd1b }
    /* +0x9e9acd */ __asm { MOV ECX,0xba083239 }
    /* +0x9e9ad2 */ __asm { IMUL ECX,ECX,-0x6fe41c5 }
    /* +0x9e9ad8 */ __asm { SUB ECX,R13D }
    /* +0x9e9adb */ __asm { XOR RCX,R9 }
    /* +0x9e9ade */ __asm { MOV R9,RCX }
    /* +0x9e9ae1 */ __asm { ROL R9,0x32 }
    /* +0x9e9ae5 */ __asm { MOV R13,RCX }
    /* +0x9e9ae8 */ __asm { ROL R13,0x3 }
    /* +0x9e9aec */ __asm { XOR R13,R9 }
    /* +0x9e9aef */ __asm { XOR R13,RCX }
    /* +0x9e9af2 */ __asm { MOV R9,R13 }
    /* +0x9e9af5 */ __asm { ROL R9,0x24 }
    /* +0x9e9af9 */ __asm { MOV qword ptr [RSP + 0x358],R11 }
    /* +0x9e9b01 */ __asm { MOVQ XMM0,R13 }
    /* +0x9e9b06 */ __asm { ROL R13,0x6 }
    /* +0x9e9b0a */ __asm { MOV qword ptr [RSP + 0x460],RAX }
    /* +0x9e9b12 */ __asm { XOR R13,R9 }
    /* +0x9e9b15 */ __asm { MOVQ XMM4,R13 }
    /* +0x9e9b1a */ __asm { PXOR XMM4,XMM0 }
    /* +0x9e9b1e */ __asm { MOVQ R11,XMM4 }
    /* +0x9e9b23 */ __asm { MOV RAX,R11 }
    /* +0x9e9b26 */ __asm { ROL RAX,0x8 }
    /* +0x9e9b2a */ __asm { MOV R9,R11 }
    /* +0x9e9b2d */ __asm { ROL R9,0xc }
    /* +0x9e9b31 */ __asm { XOR R9,RAX }
    /* +0x9e9b34 */ __asm { XOR R9,R11 }
    /* +0x9e9b37 */ __asm { MOV R11,R9 }
    /* +0x9e9b3a */ __asm { ROL R11,0x10 }
    /* +0x9e9b3e */ __asm { CMP R10,R8 }
    /* +0x9e9b41 */ __asm { SETC AL }
    /* +0x9e9b44 */ __asm { XOR AL,R14B }
    /* +0x9e9b47 */ __asm { MOV R10D,dword ptr [RDX + 0x8] }
    /* +0x9e9b4b */ __asm { MOV dword ptr [RSP + 0x368],R10D }
    /* +0x9e9b53 */ __asm { MOV RCX,qword ptr [RDX] }
    /* +0x9e9b56 */ __asm { MOV qword ptr [RSP + 0x360],RCX }
    /* +0x9e9b5e */ __asm { MOV RCX,R9 }
    /* +0x9e9b61 */ __asm { ROL RCX,0x18 }
    /* +0x9e9b65 */ __asm { XOR RCX,R11 }
    /* +0x9e9b68 */ __asm { XOR RCX,R9 }
    /* +0x9e9b6b */ __asm { MOV R11,RCX }
    /* +0x9e9b6e */ __asm { ROL R11,0x30 }
    /* +0x9e9b72 */ __asm { MOV R9,RCX }
    /* +0x9e9b75 */ __asm { ROL R9,0x20 }
    /* +0x9e9b79 */ __asm { XOR R9,R11 }
    /* +0x9e9b7c */ __asm { MOV qword ptr [RSP + 0x450],RCX }
    /* +0x9e9b84 */ __asm { XOR R9,RCX }
    /* +0x9e9b87 */ __asm { ROL R9,0x20 }
    /* +0x9e9b8b */ __asm { MOV R11,R9 }
    /* +0x9e9b8e */ __asm { SHL R11,0x3a }
    /* +0x9e9b92 */ __asm { SUB R9,R11 }
    /* +0x9e9b95 */ __asm { MOV qword ptr [RSP + 0x2f8],R9 }
    /* +0x9e9b9d */ __asm { TEST AL,AL }
    /* +0x9e9b9f */ __asm { MOV qword ptr [RSP + 0x4c0],RDX }
    /* +0x9e9ba7 */ __asm { JNZ 0x7fffa5159e0e }
    /* +0x9e9bad */ __asm { MOV R11,qword ptr [RSP + 0x358] }
    /* +0x9e9bb5 */ __asm { MOV R10,qword ptr [R11 + 0x8] }
    /* +0x9e9bb9 */ __asm { SUB R10,qword ptr [R11] }
    /* +0x9e9bbc */ __asm { SHR R10,0x3 }
    /* +0x9e9bc0 */ __asm { CMP dword ptr [R11 + 0x48],0x1 }
    /* +0x9e9bc5 */ __asm { MOV EAX,R10D }
    /* +0x9e9bc8 */ __asm { JNZ 0x7fffa5159bce }
    /* +0x9e9bca */ __asm { MOV EAX,dword ptr [R11 + 0x4c] }
    /* +0x9e9bce */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x9e9bd5 */ __asm { MOV R8,0x0 }
    /* +0x9e9bdc */ __asm { NOP }
    /* +0x9e9bdd */ __asm { TEST R10D,R10D }
    /* +0x9e9be0 */ __asm { JZ 0x7fffa5159e0e }
    /* +0x9e9be6 */ __asm { MOV R11,qword ptr [RSP + 0x5a0] }
    /* +0x9e9bee */ __asm { MOV R10D,R10D }
    /* +0x9e9bf1 */ __asm { MOV R9D,EAX }
    /* +0x9e9bf4 */ __asm { LEA RAX,[RDX + 0x8] }
    /* +0x9e9bf8 */ __asm { LEA RCX,[R11 + 0x4] }
    /* +0x9e9bfc */ __asm { MOV qword ptr [RSP + 0x470],RCX }
    /* +0x9e9c04 */ __asm { LEA RCX,[R11 + 0x8] }
    /* +0x9e9c08 */ __asm { MOV qword ptr [RSP + 0x2c8],RCX }
    /* +0x9e9c10 */ __asm { LEA R13,[RDX + 0x4] }
    /* +0x9e9c14 */ __asm { DEC R10 }
    /* +0x9e9c17 */ __asm { XOR R12D,R12D }
    /* +0x9e9c1a */ __asm { MOV RCX,qword ptr [RSP + 0x5c0] }
    /* +0x9e9c22 */ __asm { OR ECX,0x1 }
    /* +0x9e9c25 */ __asm { MOV dword ptr [RSP + 0x280],ECX }
    /* +0x9e9c2c */ __asm { NOP dword ptr [RAX] }
    /* +0x9e9c30 */ __asm { CMP R9,R12 }
    /* +0x9e9c33 */ __asm { SETNZ R8B }
    /* +0x9e9c37 */ __asm { MOV RCX,qword ptr [RSP + 0x358] }
    /* +0x9e9c3f */ __asm { MOV RSI,qword ptr [RCX] }
    /* +0x9e9c42 */ __asm { MOV R15W,0xa2a2 }
    /* +0x9e9c47 */ __asm { ADD R15D,0x5d8e }
    /* +0x9e9c4e */ __asm { CMP word ptr [RSI + R12*0x8 + 0x4],0x0 }
    /* +0x9e9c55 */ __asm { SETZ BPL }
    /* +0x9e9c59 */ __asm { AND BPL,R8B }
    /* +0x9e9c5c */ __asm { MOVZX R14D,BPL }
    /* +0x9e9c60 */ __asm { MOV EBX,dword ptr [RSI + R12*0x8] }
    /* +0x9e9c64 */ __asm { MOV RCX,qword ptr [RSP + 0x5c0] }
    /* +0x9e9c6c */ __asm { ROR R15W,CL }
    /* +0x9e9c70 */ __asm { LEA ECX,[RBX + -0x1] }
    /* +0x9e9c73 */ __asm { MOVZX R8D,R15W }
    /* +0x9e9c77 */ __asm { MOV R15D,EBX }
    /* +0x9e9c7a */ __asm { CMP ECX,R8D }
    /* +0x9e9c7d */ __asm { JNC 0x7fffa5159ce5 }
    /* +0x9e9c7f */ __asm { LEA R8D,[RCX + R14*0x1] }
    /* +0x9e9c83 */ __asm { MOV R15W,0xf3ec }
    /* +0x9e9c88 */ __asm { ADD R15D,0xffffec2b }
    /* +0x9e9c8f */ __asm { IMUL R15D,dword ptr [RSP + 0x280] }
    /* +0x9e9c98 */ __asm { ADD R15D,0x1e50 }
    /* +0x9e9c9f */ __asm { MOVZX R15D,R15W }
    /* +0x9e9ca3 */ __asm { CMP R8D,R15D }
    /* +0x9e9ca6 */ __asm { JZ 0x7fffa5159cc0 }
    /* +0x9e9ca8 */ __asm { MOV EDI,R8D }
    /* +0x9e9cab */ __asm { MOV R8,qword ptr [RSP + 0x4c0] }
    /* +0x9e9cb3 */ __asm { MOV R8D,dword ptr [R8 + RDI*0x4] }
    /* +0x9e9cb7 */ __asm { MOV EDI,dword ptr [R11 + RDI*0x4] }
    /* +0x9e9cbb */ __asm { JMP 0x7fffa5159cd3 }
    /* +0x9e9cc0 */ __asm { MOV R8,qword ptr [RSP + 0x4c0] }
    /* +0x9e9cc8 */ __asm { MOV R8D,dword ptr [R8] }
    /* +0x9e9ccb */ __asm { DEC R8D }
    /* +0x9e9cce */ __asm { MOV EDI,dword ptr [R11] }
    /* +0x9e9cd1 */ __asm { DEC EDI }
    /* +0x9e9cd3 */ __asm { MOV R15D,EBX }
    /* +0x9e9cd6 */ __asm { CMP R8D,EDI }
    /* +0x9e9cd9 */ __asm { JZ 0x7fffa5159ceb }
    /* +0x9e9cdb */ __asm { ADD EDI,0x3 }
    /* +0x9e9cde */ __asm { MOV dword ptr [RSI + R12*0x8],EDI }
    /* +0x9e9ce2 */ __asm { MOV R15D,EDI }
    /* +0x9e9ce5 */ __asm { CMP R15D,0x4 }
    /* +0x9e9ce9 */ __asm { JNC 0x7fffa5159d20 }
    /* +0x9e9ceb */ __asm { XOR BPL,0x1 }
    /* +0x9e9cef */ __asm { MOVZX R8D,BPL }
    /* +0x9e9cf3 */ __asm { SUB R15D,R8D }
    /* +0x9e9cf6 */ __asm { CMP R15D,0x2 }
    /* +0x9e9cfa */ __asm { JG 0x7fffa5159d40 }
    /* +0x9e9cfc */ __asm { TEST R15D,R15D }
    /* +0x9e9cff */ __asm { MOV RDX,qword ptr [RSP + 0x4c0] }
    /* +0x9e9d07 */ __asm { JZ 0x7fffa5159d6e }
    /* +0x9e9d09 */ __asm { MOV R8D,R15D }
    /* +0x9e9d0c */ __asm { MOV EBP,dword ptr [RDX + R8*0x4] }
    /* +0x9e9d10 */ __asm { MOV R8D,dword ptr [RDX] }
    /* +0x9e9d13 */ __asm { JMP 0x7fffa5159d4f }
    /* +0x9e9d20 */ __asm { MOV RDX,qword ptr [RSP + 0x4c0] }
    /* +0x9e9d28 */ __asm { MOV R8,qword ptr [RDX] }
    /* +0x9e9d2b */ __asm { MOV qword ptr [RDX + 0x4],R8 }
    /* +0x9e9d2f */ __asm { ADD R15D,-0x3 }
    /* +0x9e9d33 */ __asm { MOV EBP,R15D }
    /* +0x9e9d36 */ __asm { JMP 0x7fffa5159d6c }
    /* +0x9e9d40 */ __asm { MOV R8,qword ptr [RSP + 0x4c0] }
    /* +0x9e9d48 */ __asm { MOV R8D,dword ptr [R8] }
    /* +0x9e9d4b */ __asm { LEA EBP,[R8 + -0x1] }
    /* +0x9e9d4f */ __asm { CMP R15D,0x1 }
    /* +0x9e9d53 */ __asm { MOV RSI,R13 }
    /* +0x9e9d56 */ __asm { CMOVZ RSI,RAX }
    /* +0x9e9d5a */ __asm { MOV R15D,dword ptr [RSI] }
    /* +0x9e9d5d */ __asm { MOV dword ptr [RAX],R15D }
    /* +0x9e9d60 */ __asm { MOV dword ptr [R13],R8D }
    /* +0x9e9d64 */ __asm { MOV RDX,qword ptr [RSP + 0x4c0] }
    /* +0x9e9d6c */ __asm { MOV dword ptr [RDX],EBP }
    /* +0x9e9d6e */ __asm { LEA RDI,[0x7fffa4770000] }
    /* +0x9e9d75 */ __asm { MOV R8,0x0 }
    /* +0x9e9d7c */ __asm { NOP }
    /* +0x9e9d7d */ __asm { CMP EBX,0x4 }
    /* +0x9e9d80 */ __asm { JC 0x7fffa5159d90 }
    /* +0x9e9d82 */ __asm { MOV RCX,qword ptr [R11] }
    /* +0x9e9d85 */ __asm { MOV qword ptr [R11 + 0x4],RCX }
    /* +0x9e9d89 */ __asm { ADD EBX,-0x3 }
    /* +0x9e9d8c */ __asm { JMP 0x7fffa5159dfe }
    /* +0x9e9d90 */ __asm { ADD R14D,ECX }
    /* +0x9e9d93 */ __asm { CMP R14D,0x2 }
    /* +0x9e9d97 */ __asm { JG 0x7fffa5159db0 }
    /* +0x9e9d99 */ __asm { TEST R14D,R14D }
    /* +0x9e9d9c */ __asm { JZ 0x7fffa5159e01 }
    /* +0x9e9d9e */ __asm { MOV R8D,R14D }
    /* +0x9e9da1 */ __asm { MOV ECX,dword ptr [R11] }
    /* +0x9e9da4 */ __asm { MOV EBX,dword ptr [R11 + R8*0x4] }
    /* +0x9e9da8 */ __asm { JMP 0x7fffa5159db6 }
    /* +0x9e9db0 */ __asm { MOV ECX,dword ptr [R11] }
    /* +0x9e9db3 */ __asm { LEA EBX,[RCX + -0x1] }
    /* +0x9e9db6 */ __asm { MOV R8W,0x10c6 }
    /* +0x9e9dbb */ __asm { XOR R8D,0x3 }
    /* +0x9e9dbf */ __asm { MOV RSI,qword ptr [RSP + 0x5c0] }
    /* +0x9e9dc7 */ __asm { SUB R8D,ESI }
    /* +0x9e9dca */ __asm { MOVZX R8D,R8W }
    /* +0x9e9dce */ __asm { CMP R14D,R8D }
    /* +0x9e9dd1 */ __asm { MOV RDX,qword ptr [RSP + 0x470] }
    /* +0x9e9dd9 */ __asm { MOV R8,RDX }
    /* +0x9e9ddc */ __asm { MOV RSI,qword ptr [RSP + 0x2c8] }
    /* +0x9e9de4 */ __asm { CMOVZ R8,RSI }
    /* +0x9e9de8 */ __asm { MOV RDI,0x0 }
    /* +0x9e9def */ __asm { LEA RBP,[0x7fffa4770000] }
    /* +0x9e9df6 */ __asm { MOV R8D,dword ptr [R8] }
    /* +0x9e9df9 */ __asm { MOV dword ptr [RDX],ECX }
    /* +0x9e9dfb */ __asm { MOV dword ptr [RSI],R8D }
    /* +0x9e9dfe */ __asm { MOV dword ptr [R11],EBX }
    /* +0x9e9e01 */ __asm { CMP R10,R12 }
    /* +0x9e9e04 */ __asm { JZ 0x7fffa5159e0e }
    /* +0x9e9e06 */ __asm { INC R12 }
    /* +0x9e9e09 */ __asm { JMP 0x7fffa5159c30 }
    /* +0x9e9e0e */ __asm { MOV R14,-0x46 }
    /* +0x9e9e15 */ __asm { CMP qword ptr [RSP + 0x5a8],0x3 }
    /* +0x9e9e1e */ __asm { JC 0x7fffa5166e3e }
    /* +0x9e9e24 */ __asm { MOV R14,qword ptr [RSP + 0x2d8] }
    /* +0x9e9e2c */ __asm { ADD R14,0x3a5e1829 }
    /* +0x9e9e33 */ __asm { MOV R15,qword ptr [RSP + 0x5c0] }
    /* +0x9e9e3b */ __asm { XOR R14,R15 }
    /* +0x9e9e3e */ __asm { IMUL R14,qword ptr [RSP + 0x5b8] }
    /* +0x9e9e47 */ __asm { MOV R11,qword ptr [RSP + 0x358] }
    /* +0x9e9e4f */ __asm { MOV RDX,qword ptr [R11] }
    /* +0x9e9e52 */ __asm { MOV R13,qword ptr [R11 + 0x8] }
    /* +0x9e9e56 */ __asm { MOV RCX,qword ptr [RSP + 0x460] }
    /* +0x9e9e5e */ __asm { MOV R9,qword ptr [RCX + 0xc88] }
    /* +0x9e9e65 */ __asm { MOV AX,0x4bd0 }
    /* +0x9e9e69 */ __asm { MOV dword ptr [RSP + 0x4b8],EAX }
    /* +0x9e9e70 */ __asm { MOV R8,R13 }
    /* +0x9e9e73 */ __asm { SUB R8,RDX }
    /* +0x9e9e76 */ __asm { MOV R10,qword ptr [R11 + 0x10] }
    /* +0x9e9e7a */ __asm { MOV RAX,qword ptr [R11 + 0x18] }
    /* +0x9e9e7e */ __asm { MOV qword ptr [RSP + 0x470],R10 }
    /* +0x9e9e86 */ __asm { SUB RAX,R10 }
    /* +0x9e9e89 */ __asm { MOV R10,qword ptr [RCX + 0xdc0] }
    /* +0x9e9e90 */ __asm { MOV qword ptr [RSP + 0x280],R10 }
    /* +0x9e9e98 */ __asm { SAR R8,0x3 }
    /* +0x9e9e9c */ __asm { MOV R10,qword ptr [R11 + 0x20] }
    /* +0x9e9ea0 */ __asm { MOV qword ptr [RSP + 0x300],R10 }
    /* +0x9e9ea8 */ __asm { MOV R10,qword ptr [R11 + 0x30] }
    /* +0x9e9eac */ __asm { MOV qword ptr [RSP + 0x438],R10 }
    /* +0x9e9eb4 */ __asm { MOV R10D,dword ptr [RCX + 0x8] }
    /* +0x9e9eb8 */ __asm { MOV dword ptr [RSP + 0x458],R10D }
    /* +0x9e9ec0 */ __asm { MOV R12D,dword ptr [RCX + 0x104] }
    /* +0x9e9ec7 */ __asm { MOV R11,qword ptr [R11 + 0x28] }
    /* +0x9e9ecb */ __asm { MOV qword ptr [RSP + 0x2a8],R11 }
    /* +0x9e9ed3 */ __asm { MOV RBX,qword ptr [RCX + 0xc80] }
    /* +0x9e9eda */ __asm { MOV qword ptr [RSP + 0x288],RDX }
    /* +0x9e9ee2 */ __asm { CMP R13,RDX }
    /* +0x9e9ee5 */ __asm { MOV qword ptr [RSP + 0x78],RAX }
    /* +0x9e9eea */ __asm { JZ 0x7fffa5159eff }
    /* +0x9e9eec */ __asm { MOV R10,RAX }
    /* +0x9e9eef */ __asm { OR R10,R8 }
    /* +0x9e9ef2 */ __asm { SHR R10,0x20 }
    /* +0x9e9ef6 */ __asm { JZ 0x7fffa5159f06 }
    /* +0x9e9ef8 */ __asm { XOR EDX,EDX }
    /* +0x9e9efa */ __asm { DIV R8 }
    /* +0x9e9efd */ __asm { JMP 0x7fffa5159f0b }
    /* +0x9e9eff */ __asm { MOV ESI,0x8 }
    /* +0x9e9f04 */ __asm { JMP 0x7fffa5159f18 }
    /* +0x9e9f06 */ __asm { XOR EDX,EDX }
    /* +0x9e9f08 */ __asm { DIV R8D }
    /* +0x9e9f0b */ __asm { XOR ESI,ESI }
    /* +0x9e9f0d */ __asm { CMP RAX,0x14 }
    /* +0x9e9f11 */ __asm { SETNC SIL }
    /* +0x9e9f15 */ __asm { SHL ESI,0x3 }
    /* +0x9e9f18 */ __asm { MOV R10,R14 }
    /* +0x9e9f1b */ __asm { SHL R10,0x32 }
    /* +0x9e9f1f */ __asm { MOV R11D,dword ptr [RCX + 0x130] }
    /* +0x9e9f26 */ __asm { CMP R11D,0x2 }
    /* +0x9e9f2a */ __asm { MOV qword ptr [RSP + 0x380],R9 }
    /* +0x9e9f32 */ __asm { MOV qword ptr [RSP + 0x388],R8 }
    /* +0x9e9f3a */ __asm { MOV dword ptr [RSP + 0x318],R12D }
    /* +0x9e9f42 */ __asm { MOV qword ptr [RSP + 0x2c8],R13 }
    /* +0x9e9f4a */ __asm { JGE 0x7fffa5159f65 }
    /* +0x9e9f4c */ __asm { CMP R11D,0x1 }
    /* +0x9e9f50 */ __asm { SETNZ AL }
    /* +0x9e9f53 */ __asm { CMP R12D,0x1 }
    /* +0x9e9f57 */ __asm { SETZ R9B }
    /* +0x9e9f5b */ __asm { MOV R13B,0x1 }
    /* +0x9e9f5e */ __asm { TEST AL,R9B }
    /* +0x9e9f61 */ __asm { JNZ 0x7fffa5159f75 }
    /* +0x9e9f63 */ __asm { JMP 0x7fffa5159f80 }
    /* +0x9e9f65 */ __asm { JNZ 0x7fffa5159f6c }
    /* +0x9e9f67 */ __asm { XOR R13D,R13D }
    /* +0x9e9f6a */ __asm { JMP 0x7fffa5159f80 }
    /* +0x9e9f6c */ __asm { MOV R13B,0x1 }
    /* +0x9e9f6f */ __asm { CMP R12D,0x1 }
    /* +0x9e9f73 */ __asm { JNZ 0x7fffa5159f80 }
    /* +0x9e9f75 */ __asm { CMP dword ptr [RCX + 0x100],0x0 }
    /* +0x9e9f7c */ __asm { SETZ R13B }
    /* +0x9e9f80 */ __asm { MOV EBP,R15D }
    /* +0x9e9f83 */ __asm { OR EBP,0x1 }
    /* +0x9e9f86 */ __asm { XOR R10,R14 }
    /* +0x9e9f89 */ __asm { MOV qword ptr [RSP + 0x4b0],R10 }
    /* +0x9e9f91 */ __asm { MOV R11,qword ptr [RSP + 0x5a8] }
    /* +0x9e9f99 */ __asm { LEA R12,[R11 + -0x3] }
    /* +0x9e9f9d */ __asm { MOV R11,qword ptr [RSP + 0x2f8] }
    /* +0x9e9fa5 */ __asm { ADD R11,0x3 }
    /* +0x9e9fa9 */ __asm { MOV qword ptr [RSP + 0x60],R11 }
    /* +0x9e9fae */ __asm { MOV R11,qword ptr [RSP + 0x280] }
    /* +0x9e9fb6 */ __asm { ADD R11,0xd4 }
    /* +0x9e9fbd */ __asm { MOV qword ptr [RSP + 0x4c8],R11 }
    /* +0x9e9fc5 */ __asm { MOV R8,0x0 }
    /* +0x9e9fcc */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x9e9fd3 */ __asm { NOP }
    /* +0x9e9fd5 */ __asm { MOV R8D,0x810 }
    /* +0x9e9fdb */ __asm { MOV RCX,qword ptr [RSP + 0x380] }
    /* +0x9e9fe3 */ __asm { MOV RDX,RBX }
    /* +0x9e9fe6 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x9e9feb */ __asm { XOR EDI,EDI }
    /* +0x9e9fed */ __asm { MOV RDX,qword ptr [RSP + 0x78] }
    /* +0x9e9ff2 */ __asm { CMP RDX,0x4000 }
    /* +0x9e9ff9 */ __asm { SETNC DIL }
    /* +0x9e9ffd */ __asm { CMP RDX,0x400 }
    /* +0x9ea004 */ __asm { SBB RDI,0x0 }
    /* +0x9ea008 */ __asm { TEST R13B,R13B }
    /* +0x9ea00b */ __asm { MOV dword ptr [RSP + 0x47c],EBP }
    /* +0x9ea012 */ __asm { MOV qword ptr [RSP + 0x2d8],R14 }
    /* +0x9ea01a */ __asm { MOV qword ptr [RSP + 0x498],R12 }
    /* +0x9ea022 */ __asm { JZ 0x7fffa515a0d1 }
    /* +0x9ea028 */ __asm { MOV R11D,0x9 }
    /* +0x9ea02e */ __asm { SUB R11D,dword ptr [RSP + 0x318] }
    /* +0x9ea036 */ __asm { CMP R11D,0x3 }
    /* +0x9ea03a */ __asm { MOV ECX,0x3 }
    /* +0x9ea03f */ __asm { CMOVL ECX,R11D }
    /* +0x9ea043 */ __asm { MOV qword ptr [RSP + 0x420],RBX }
    /* +0x9ea04b */ __asm { MOV EAX,dword ptr [RBX + 0x808] }
    /* +0x9ea051 */ __asm { MOV R11W,0xd9e }
    /* +0x9ea056 */ __asm { SUB R11D,R15D }
    /* +0x9ea059 */ __asm { ADD R11D,0x328 }
    /* +0x9ea060 */ __asm { MOVZX R11D,R11W }
    /* +0x9ea064 */ __asm { MOV R9D,0x8 }
    /* +0x9ea06a */ __asm { SHL R9,CL }
    /* +0x9ea06d */ __asm { CMP EAX,R11D }
    /* +0x9ea070 */ __asm { MOV ECX,0x6 }
    /* +0x9ea075 */ __asm { CMOVNZ RCX,R9 }
    /* +0x9ea079 */ __asm { CMP RDX,RCX }
    /* +0x9ea07c */ __asm { JNC 0x7fffa515a135 }
    /* +0x9ea082 */ __asm { MOV R10D,0xdd09ef1c }
    /* +0x9ea088 */ __asm { ADD R10D,R15D }
    /* +0x9ea08b */ __asm { NOT R10D }
    /* +0x9ea08e */ __asm { XOR ECX,ECX }
    /* +0x9ea090 */ __asm { CMP RDX,0x1000 }
    /* +0x9ea097 */ __asm { SETNC CL }
    /* +0x9ea09a */ __asm { CMP R10,RDX }
    /* +0x9ea09d */ __asm { ADC ECX,-0x1 }
    /* +0x9ea0a0 */ __asm { ADD ECX,0x2 }
    /* +0x9ea0a3 */ __asm { LEA R13,[RCX + RDX*0x1] }
    /* +0x9ea0a7 */ __asm { MOV R15,-0x46 }
    /* +0x9ea0ae */ __asm { CMP R13,R12 }
    /* +0x9ea0b1 */ __asm { MOV RSI,qword ptr [RSP + 0x280] }
    /* +0x9ea0b9 */ __asm { MOV R14,qword ptr [RSP + 0x420] }
    /* +0x9ea0c1 */ __asm { JA 0x7fffa516675d }
    /* +0x9ea0c7 */ __asm { CMP ECX,0x2 }
    /* +0x9ea0ca */ __asm { JBE 0x7fffa515a112 }
    /* +0x9ea0cc */ __asm { JMP 0x7fffa515a48d }
    /* +0x9ea0d1 */ __asm { XOR ECX,ECX }
    /* +0x9ea0d3 */ __asm { CMP RDX,0x20 }
    /* +0x9ea0d7 */ __asm { SETNC CL }
    /* +0x9ea0da */ __asm { CMP RDX,0x1000 }
    /* +0x9ea0e1 */ __asm { SBB ECX,-0x1 }
    /* +0x9ea0e4 */ __asm { LEA R13,[RDX + RCX*0x1] }
    /* +0x9ea0e8 */ __asm { INC R13 }
    /* +0x9ea0eb */ __asm { MOV R15,-0x46 }
    /* +0x9ea0f2 */ __asm { CMP R13,R12 }
    /* +0x9ea0f5 */ __asm { MOV RSI,qword ptr [RSP + 0x280] }
    /* +0x9ea0fd */ __asm { JA 0x7fffa516675d }
    /* +0x9ea103 */ __asm { MOV R14,RBX }
    /* +0x9ea106 */ __asm { INC RCX }
    /* +0x9ea109 */ __asm { CMP ECX,0x2 }
    /* +0x9ea10c */ __asm { JA 0x7fffa515a48d }
    /* +0x9ea112 */ __asm { CMP ECX,0x2 }
    /* +0x9ea115 */ __asm { MOV R8,qword ptr [RSP + 0x78] }
    /* +0x9ea11a */ __asm { JZ 0x7fffa515a477 }
    /* +0x9ea120 */ __asm { LEA R11D,[R8*0x8] }
    /* +0x9ea128 */ __asm { MOV RAX,qword ptr [RSP + 0x60] }
    /* +0x9ea12d */ __asm { MOV uint8_t ptr [RAX],R11B }
    /* +0x9ea130 */ __asm { JMP 0x7fffa515a4a5 }
    /* +0x9ea135 */ __asm { ADD RDI,0x4 }
    /* +0x9ea139 */ __asm { MOV R15,-0x46 }
    /* +0x9ea140 */ __asm { MOV RDX,R12 }
    /* +0x9ea143 */ __asm { SUB RDX,RDI }
    /* +0x9ea146 */ __asm { JBE 0x7fffa516675d }
    /* +0x9ea14c */ __asm { CMP EAX,R11D }
    /* +0x9ea14f */ __asm { SETNZ uint8_t ptr [RSP + 0x2f0] }
    /* +0x9ea157 */ __asm { MOV RBX,qword ptr [RSP + 0x78] }
    /* +0x9ea15c */ __asm { CMP RBX,0x100 }
    /* +0x9ea163 */ __asm { SETNC uint8_t ptr [RSP + 0x4a0] }
    /* +0x9ea16b */ __asm { XOR R10D,R10D }
    /* +0x9ea16e */ __asm { CMP dword ptr [RSP + 0x458],0x0 }
    /* +0x9ea176 */ __asm { SETNZ R10B }
    /* +0x9ea17a */ __asm { MOV qword ptr [RSP + 0x430],R10 }
    /* +0x9ea182 */ __asm { MOV ECX,dword ptr [RSP + 0x318] }
    /* +0x9ea189 */ __asm { CMP ECX,0x4 }
    /* +0x9ea18c */ __asm { SETL uint8_t ptr [RSP + 0x2e0] }
    /* +0x9ea194 */ __asm { CMP RBX,0x401 }
    /* +0x9ea19b */ __asm { SETC R14B }
    /* +0x9ea19f */ __asm { XOR R10D,R10D }
    /* +0x9ea1a2 */ __asm { CMP ECX,0x8 }
    /* +0x9ea1a5 */ __asm { SETGE R10B }
    /* +0x9ea1a9 */ __asm { MOV qword ptr [RSP + 0x2d0],R10 }
    /* +0x9ea1b1 */ __asm { LEA R13,[0x7fffa54a0cbb] }
    /* +0x9ea1b8 */ __asm { MOV R9W,0xefc4 }
    /* +0x9ea1bd */ __asm { LEA R10,[0x7fffa53f10f2] }
    /* +0x9ea1c4 */ __asm { MOV R8D,0x541303c6 }
    /* +0x9ea1ca */ __asm { MOV R11D,0x7 }
    /* +0x9ea1d0 */ __asm { CMOVGE R11D,ECX }
    /* +0x9ea1d4 */ __asm { MOV R12W,0x31df }
    /* +0x9ea1d9 */ __asm { ADD R8D,0xcdf0fc3a }
    /* +0x9ea1e0 */ __asm { ROL R8D,0xc }
    /* +0x9ea1e4 */ __asm { CMP RDI,0x3 }
    /* +0x9ea1e8 */ __asm { SETNZ R15B }
    /* +0x9ea1ec */ __asm { MOV BP,0x4d66 }
    /* +0x9ea1f0 */ __asm { MOV RCX,qword ptr [RSP + 0x5c0] }
    /* +0x9ea1f8 */ __asm { ADD EBP,ECX }
    /* +0x9ea1fa */ __asm { NOT EBP }
    /* +0x9ea1fc */ __asm { MOVSX RBP,BP }
    /* +0x9ea200 */ __asm { ADD RBP,R13 }
    /* +0x9ea203 */ __asm { OR R15B,uint8_t ptr [RSP + 0x2f0] }
    /* +0x9ea20b */ __asm { AND R15B,uint8_t ptr [RSP + 0x4a0] }
    /* +0x9ea213 */ __asm { AND R14B,uint8_t ptr [RSP + 0x2e0] }
    /* +0x9ea21b */ __asm { ROL R8D,CL }
    /* +0x9ea21e */ __asm { DEC R11B }
    /* +0x9ea221 */ __asm { MOV dword ptr [RSP + 0x80],EAX }
    /* +0x9ea228 */ __asm { MOV AX,0xe8eb }
    /* +0x9ea22c */ __asm { IMUL EAX,EAX,0x3b43 }
    /* +0x9ea232 */ __asm { NOT EAX }
    /* +0x9ea234 */ __asm { MOVSX RAX,AX }
    /* +0x9ea238 */ __asm { ADD RAX,R10 }
    /* +0x9ea23b */ __asm { MOV R13,RBX }
    /* +0x9ea23e */ __asm { MOV ECX,R11D }
    /* +0x9ea241 */ __asm { SHR R13,CL }
    /* +0x9ea244 */ __asm { IMUL R11D,R12D,-0x67 }
    /* +0x9ea248 */ __asm { MOV R12,qword ptr [RSP + 0x5c0] }
    /* +0x9ea250 */ __asm { ADD R11D,R12D }
    /* +0x9ea253 */ __asm { NEG R13 }
    /* +0x9ea256 */ __asm { XOR R9D,R12D }
    /* +0x9ea259 */ __asm { TEST R15B,R15B }
    /* +0x9ea25c */ __asm { CMOVZ RAX,RBP }
    /* +0x9ea260 */ __asm { MOVZX ECX,R14B }
    /* +0x9ea264 */ __asm { MOVD XMM0,ECX }
    /* +0x9ea268 */ __asm { MOV RCX,qword ptr [RSP + 0x430] }
    /* +0x9ea270 */ __asm { MOV R10,qword ptr [RSP + 0x2d0] }
    /* +0x9ea278 */ __asm { LEA R10D,[RCX + R10*0x2] }
    /* +0x9ea27c */ __asm { PSLLD XMM0,0x2 }
    /* +0x9ea281 */ __asm { MOVD XMM4,R10D }
    /* +0x9ea286 */ __asm { POR XMM4,XMM0 }
    /* +0x9ea28a */ __asm { MOVD R10D,XMM4 }
    /* +0x9ea28f */ __asm { OR R10D,ESI }
    /* +0x9ea292 */ __asm { MOV RCX,qword ptr [RSP + 0x60] }
    /* +0x9ea297 */ __asm { ADD RCX,RDI }
    /* +0x9ea29a */ __asm { LEA R13,[RBX + R13*0x1 + -0x2] }
    /* +0x9ea29f */ __asm { NOT R9D }
    /* +0x9ea2a2 */ __asm { MOVZX R9D,R9W }
    /* +0x9ea2a6 */ __asm { MOVZX R11D,R11W }
    /* +0x9ea2aa */ __asm { LEA RSI,[RSP + 0x80] }
    /* +0x9ea2b2 */ __asm { MOV qword ptr [RSP + 0x48],RSI }
    /* +0x9ea2b7 */ __asm { MOV R14,qword ptr [RSP + 0x380] }
    /* +0x9ea2bf */ __asm { MOV qword ptr [RSP + 0x40],R14 }
    /* +0x9ea2c4 */ __asm { MOV RSI,qword ptr [RSP + 0x4c8] }
    /* +0x9ea2cc */ __asm { MOV qword ptr [RSP + 0x30],RSI }
    /* +0x9ea2d1 */ __asm { MOV qword ptr [RSP + 0x38],R8 }
    /* +0x9ea2d6 */ __asm { MOV dword ptr [RSP + 0x28],R11D }
    /* +0x9ea2db */ __asm { MOV dword ptr [RSP + 0x20],R9D }
    /* +0x9ea2e0 */ __asm { MOV dword ptr [RSP + 0x50],R10D }
    /* +0x9ea2e5 */ __asm { MOV R9,RBX }
    /* +0x9ea2e8 */ __asm { MOV R8,qword ptr [RSP + 0x470] }
    /* +0x9ea2f0 */ __asm { CALL RAX }
    /* +0x9ea2f2 */ __asm { CMP RAX,R13 }
    /* +0x9ea2f5 */ __asm { SETC R9B }
    /* +0x9ea2f9 */ __asm { MOV R13D,dword ptr [RSP + 0x80] }
    /* +0x9ea301 */ __asm { CMP R13D,0x1 }
    /* +0x9ea305 */ __asm { MOV R11D,0x3 }
    /* +0x9ea30b */ __asm { SBB R11D,0x0 }
    /* +0x9ea30f */ __asm { LEA RCX,[RAX + -0x1] }
    /* +0x9ea313 */ __asm { CMP RCX,-0x78 }
    /* +0x9ea317 */ __asm { SETC DL }
    /* +0x9ea31a */ __asm { TEST DL,R9B }
    /* +0x9ea31d */ __asm { JZ 0x7fffa515a38e }
    /* +0x9ea31f */ __asm { CMP RAX,0x1 }
    /* +0x9ea323 */ __asm { MOV EBP,dword ptr [RSP + 0x47c] }
    /* +0x9ea32a */ __asm { JZ 0x7fffa515a5ac }
    /* +0x9ea330 */ __asm { TEST R13D,R13D }
    /* +0x9ea333 */ __asm { MOV R9,qword ptr [RSP + 0x380] }
    /* +0x9ea33b */ __asm { JNZ 0x7fffa515a348 }
    /* +0x9ea33d */ __asm { MOV dword ptr [R9 + 0x808],0x1 }
    /* +0x9ea348 */ __asm { CMP RDI,0x4 }
    /* +0x9ea34c */ __asm { MOV RSI,qword ptr [RSP + 0x280] }
    /* +0x9ea354 */ __asm { JBE 0x7fffa515abc5 }
    /* +0x9ea35a */ __asm { MOV R9D,EAX }
    /* +0x9ea35d */ __asm { SHR R9D,0xa }
}


// ============================================================================
// Function : FUN_7fffa5167fa0  |  RVA: 0x9f7fa0  |  Size: 480 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5167fa0(uint8_t (*param_1) [64],uint8_t (*param_2) [64],uint64_t param_3)

{
  uint8_t *puVar1;
  uint8_t auVar2 [32];
  bool bVar3;
  uint8_t bVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  uint8_t uVar7;
  uint8_t uVar8;
  uint8_t uVar9;
  uint8_t uVar10;
  uint8_t uVar11;
  uint8_t uVar12;
  uint8_t uVar13;
  uint8_t uVar14;
  uint8_t uVar15;
  uint8_t uVar16;
  uint8_t uVar17;
  uint8_t uVar18;
  uint8_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint8_t (*pauVar25) [64];
  uint8_t (*pauVar26) [64];
  uint8_t *puVar27;
  uint8_t *puVar28;
  uint8_t *puVar29;
  uint8_t (*pauVar30) [64];
  uint64_t uVar31;
  int64_t lVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  uint8_t auVar35 [30];
  uint8_t auVar36 [64];
  uint8_t auVar38 [64];
  uint8_t auVar37 [64];
  uint8_t auVar39 [64];
  uint8_t auVar40 [64];
  uint8_t auVar41 [64];
  char in_XMM0_Ba;
  uint8_t uVar42;
  char in_XMM0_Bb;
  uint8_t uVar43;
  char in_XMM0_Bc;
  uint8_t uVar44;
  char in_XMM0_Bd;
  uint8_t uVar45;
  char in_XMM0_Be;
  uint8_t uVar46;
  char in_XMM0_Bf;
  uint8_t uVar47;
  char in_XMM0_Bg;
  uint8_t uVar48;
  char in_XMM0_Bh;
  uint8_t uVar49;
  char in_XMM0_Bi;
  uint8_t uVar50;
  char in_XMM0_Bj;
  uint8_t uVar51;
  char in_XMM0_Bk;
  uint8_t uVar52;
  char in_XMM0_Bl;
  uint8_t uVar53;
  char in_XMM0_Bm;
  uint8_t uVar54;
  char in_XMM0_Bn;
  uint8_t uVar55;
  char in_XMM0_Bo;
  uint8_t uVar56;
  char in_XMM0_Bp;
  uint8_t uVar57;
  char in_YMM0_H;
  char in_register_00001211;
  char in_register_00001212;
  char in_register_00001213;
  char in_register_00001214;
  char in_register_00001215;
  char in_register_00001216;
  char in_register_00001217;
  char in_register_00001218;
  char in_register_00001219;
  char in_register_0000121a;
  char in_register_0000121b;
  char in_register_0000121c;
  char in_register_0000121d;
  char in_register_0000121e;
  char in_register_0000121f;
  char in_register_00001220;
  char in_register_00001221;
  char in_register_00001222;
  char in_register_00001223;
  char in_register_00001224;
  char in_register_00001225;
  char in_register_00001226;
  char in_register_00001227;
  char in_register_00001228;
  char in_register_00001229;
  char in_register_0000122a;
  char in_register_0000122b;
  char in_register_0000122c;
  char in_register_0000122d;
  char in_register_0000122e;
  char in_register_0000122f;
  char in_register_00001230;
  char in_register_00001231;
  char in_register_00001232;
  char in_register_00001233;
  char in_register_00001234;
  char in_register_00001235;
  char in_register_00001236;
  char in_register_00001237;
  char in_register_00001238;
  char in_register_00001239;
  char in_register_0000123a;
  char in_register_0000123b;
  char in_register_0000123c;
  char in_register_0000123d;
  char in_register_0000123e;
  char in_register_0000123f;
  char in_XMM1_Ba;
  char in_XMM1_Bb;
  char in_XMM1_Bc;
  char in_XMM1_Bd;
  char in_XMM1_Be;
  char in_XMM1_Bf;
  char in_XMM1_Bg;
  char in_XMM1_Bh;
  char in_XMM1_Bi;
  char in_XMM1_Bj;
  char in_XMM1_Bk;
  char in_XMM1_Bl;
  char in_XMM1_Bm;
  char in_XMM1_Bn;
  char in_XMM1_Bo;
  char in_XMM1_Bp;
  char in_YMM1_H;
  char in_register_00001251;
  char in_register_00001252;
  char in_register_00001253;
  char in_register_00001254;
  char in_register_00001255;
  char in_register_00001256;
  char in_register_00001257;
  char in_register_00001258;
  char in_register_00001259;
  char in_register_0000125a;
  char in_register_0000125b;
  char in_register_0000125c;
  char in_register_0000125d;
  char in_register_0000125e;
  char in_register_0000125f;
  char in_register_00001260;
  char in_register_00001261;
  char in_register_00001262;
  char in_register_00001263;
  char in_register_00001264;
  char in_register_00001265;
  char in_register_00001266;
  char in_register_00001267;
  char in_register_00001268;
  char in_register_00001269;
  char in_register_0000126a;
  char in_register_0000126b;
  char in_register_0000126c;
  char in_register_0000126d;
  char in_register_0000126e;
  char in_register_0000126f;
  char in_register_00001270;
  char in_register_00001271;
  char in_register_00001272;
  char in_register_00001273;
  char in_register_00001274;
  char in_register_00001275;
  char in_register_00001276;
  char in_register_00001277;
  char in_register_00001278;
  char in_register_00001279;
  char in_register_0000127a;
  char in_register_0000127b;
  char in_register_0000127c;
  char in_register_0000127d;
  char in_register_0000127e;
  char in_register_0000127f;
  char in_XMM2_Ba;
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
  char in_YMM2_H;
  char in_register_00001291;
  char in_register_00001292;
  char in_register_00001293;
  char in_register_00001294;
  char in_register_00001295;
  char in_register_00001296;
  char in_register_00001297;
  char in_register_00001298;
  char in_register_00001299;
  char in_register_0000129a;
  char in_register_0000129b;
  char in_register_0000129c;
  char in_register_0000129d;
  char in_register_0000129e;
  char in_register_0000129f;
  char in_register_000012a0;
  char in_register_000012a1;
  char in_register_000012a2;
  char in_register_000012a3;
  char in_register_000012a4;
  char in_register_000012a5;
  char in_register_000012a6;
  char in_register_000012a7;
  char in_register_000012a8;
  char in_register_000012a9;
  char in_register_000012aa;
  char in_register_000012ab;
  char in_register_000012ac;
  char in_register_000012ad;
  char in_register_000012ae;
  char in_register_000012af;
  char in_register_000012b0;
  char in_register_000012b1;
  char in_register_000012b2;
  char in_register_000012b3;
  char in_register_000012b4;
  char in_register_000012b5;
  char in_register_000012b6;
  char in_register_000012b7;
  char in_register_000012b8;
  char in_register_000012b9;
  char in_register_000012ba;
  char in_register_000012bb;
  char in_register_000012bc;
  char in_register_000012bd;
  char in_register_000012be;
  char in_register_000012bf;
  
  if (param_3 < 0x41) {
    uVar31 = *(uint64_t *)(&UNK_7fffa58944a8 + param_3 * 8);
    auVar36 = vmovdqu8_avx512bw(*param_2);
    bVar3 = (bool)((uint8_t)uVar31 & 1);
    auVar37[0] = bVar3 * auVar36[0] | !bVar3 * in_XMM1_Ba;
    bVar3 = (bool)((uint8_t)(uVar31 >> 1) & 1);
    auVar37[1] = bVar3 * auVar36[1] | !bVar3 * in_XMM1_Bb;
    bVar3 = (bool)((uint8_t)(uVar31 >> 2) & 1);
    auVar37[2] = bVar3 * auVar36[2] | !bVar3 * in_XMM1_Bc;
    bVar3 = (bool)((uint8_t)(uVar31 >> 3) & 1);
    auVar37[3] = bVar3 * auVar36[3] | !bVar3 * in_XMM1_Bd;
    bVar3 = (bool)((uint8_t)(uVar31 >> 4) & 1);
    auVar37[4] = bVar3 * auVar36[4] | !bVar3 * in_XMM1_Be;
    bVar3 = (bool)((uint8_t)(uVar31 >> 5) & 1);
    auVar37[5] = bVar3 * auVar36[5] | !bVar3 * in_XMM1_Bf;
    bVar3 = (bool)((uint8_t)(uVar31 >> 6) & 1);
    auVar37[6] = bVar3 * auVar36[6] | !bVar3 * in_XMM1_Bg;
    bVar3 = (bool)((uint8_t)(uVar31 >> 7) & 1);
    auVar37[7] = bVar3 * auVar36[7] | !bVar3 * in_XMM1_Bh;
    bVar3 = (bool)((uint8_t)(uVar31 >> 8) & 1);
    auVar37[8] = bVar3 * auVar36[8] | !bVar3 * in_XMM1_Bi;
    bVar3 = (bool)((uint8_t)(uVar31 >> 9) & 1);
    auVar37[9] = bVar3 * auVar36[9] | !bVar3 * in_XMM1_Bj;
    bVar3 = (bool)((uint8_t)(uVar31 >> 10) & 1);
    auVar37[10] = bVar3 * auVar36[10] | !bVar3 * in_XMM1_Bk;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0xb) & 1);
    auVar37[0xb] = bVar3 * auVar36[0xb] | !bVar3 * in_XMM1_Bl;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0xc) & 1);
    auVar37[0xc] = bVar3 * auVar36[0xc] | !bVar3 * in_XMM1_Bm;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0xd) & 1);
    auVar37[0xd] = bVar3 * auVar36[0xd] | !bVar3 * in_XMM1_Bn;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0xe) & 1);
    auVar37[0xe] = bVar3 * auVar36[0xe] | !bVar3 * in_XMM1_Bo;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0xf) & 1);
    auVar37[0xf] = bVar3 * auVar36[0xf] | !bVar3 * in_XMM1_Bp;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x10) & 1);
    auVar37[0x10] = bVar3 * auVar36[0x10] | !bVar3 * in_YMM1_H;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x11) & 1);
    auVar37[0x11] = bVar3 * auVar36[0x11] | !bVar3 * in_register_00001251;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x12) & 1);
    auVar37[0x12] = bVar3 * auVar36[0x12] | !bVar3 * in_register_00001252;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x13) & 1);
    auVar37[0x13] = bVar3 * auVar36[0x13] | !bVar3 * in_register_00001253;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x14) & 1);
    auVar37[0x14] = bVar3 * auVar36[0x14] | !bVar3 * in_register_00001254;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x15) & 1);
    auVar37[0x15] = bVar3 * auVar36[0x15] | !bVar3 * in_register_00001255;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x16) & 1);
    auVar37[0x16] = bVar3 * auVar36[0x16] | !bVar3 * in_register_00001256;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x17) & 1);
    auVar37[0x17] = bVar3 * auVar36[0x17] | !bVar3 * in_register_00001257;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x18) & 1);
    auVar37[0x18] = bVar3 * auVar36[0x18] | !bVar3 * in_register_00001258;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x19) & 1);
    auVar37[0x19] = bVar3 * auVar36[0x19] | !bVar3 * in_register_00001259;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x1a) & 1);
    auVar37[0x1a] = bVar3 * auVar36[0x1a] | !bVar3 * in_register_0000125a;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x1b) & 1);
    auVar37[0x1b] = bVar3 * auVar36[0x1b] | !bVar3 * in_register_0000125b;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x1c) & 1);
    auVar37[0x1c] = bVar3 * auVar36[0x1c] | !bVar3 * in_register_0000125c;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x1d) & 1);
    auVar37[0x1d] = bVar3 * auVar36[0x1d] | !bVar3 * in_register_0000125d;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x1e) & 1);
    auVar37[0x1e] = bVar3 * auVar36[0x1e] | !bVar3 * in_register_0000125e;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x1f) & 1);
    auVar37[0x1f] = bVar3 * auVar36[0x1f] | !bVar3 * in_register_0000125f;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x20) & 1);
    auVar37[0x20] = bVar3 * auVar36[0x20] | !bVar3 * in_register_00001260;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x21) & 1);
    auVar37[0x21] = bVar3 * auVar36[0x21] | !bVar3 * in_register_00001261;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x22) & 1);
    auVar37[0x22] = bVar3 * auVar36[0x22] | !bVar3 * in_register_00001262;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x23) & 1);
    auVar37[0x23] = bVar3 * auVar36[0x23] | !bVar3 * in_register_00001263;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x24) & 1);
    auVar37[0x24] = bVar3 * auVar36[0x24] | !bVar3 * in_register_00001264;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x25) & 1);
    auVar37[0x25] = bVar3 * auVar36[0x25] | !bVar3 * in_register_00001265;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x26) & 1);
    auVar37[0x26] = bVar3 * auVar36[0x26] | !bVar3 * in_register_00001266;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x27) & 1);
    auVar37[0x27] = bVar3 * auVar36[0x27] | !bVar3 * in_register_00001267;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x28) & 1);
    auVar37[0x28] = bVar3 * auVar36[0x28] | !bVar3 * in_register_00001268;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x29) & 1);
    auVar37[0x29] = bVar3 * auVar36[0x29] | !bVar3 * in_register_00001269;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x2a) & 1);
    auVar37[0x2a] = bVar3 * auVar36[0x2a] | !bVar3 * in_register_0000126a;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x2b) & 1);
    auVar37[0x2b] = bVar3 * auVar36[0x2b] | !bVar3 * in_register_0000126b;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x2c) & 1);
    auVar37[0x2c] = bVar3 * auVar36[0x2c] | !bVar3 * in_register_0000126c;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x2d) & 1);
    auVar37[0x2d] = bVar3 * auVar36[0x2d] | !bVar3 * in_register_0000126d;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x2e) & 1);
    auVar37[0x2e] = bVar3 * auVar36[0x2e] | !bVar3 * in_register_0000126e;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x2f) & 1);
    auVar37[0x2f] = bVar3 * auVar36[0x2f] | !bVar3 * in_register_0000126f;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x30) & 1);
    auVar37[0x30] = bVar3 * auVar36[0x30] | !bVar3 * in_register_00001270;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x31) & 1);
    auVar37[0x31] = bVar3 * auVar36[0x31] | !bVar3 * in_register_00001271;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x32) & 1);
    auVar37[0x32] = bVar3 * auVar36[0x32] | !bVar3 * in_register_00001272;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x33) & 1);
    auVar37[0x33] = bVar3 * auVar36[0x33] | !bVar3 * in_register_00001273;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x34) & 1);
    auVar37[0x34] = bVar3 * auVar36[0x34] | !bVar3 * in_register_00001274;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x35) & 1);
    auVar37[0x35] = bVar3 * auVar36[0x35] | !bVar3 * in_register_00001275;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x36) & 1);
    auVar37[0x36] = bVar3 * auVar36[0x36] | !bVar3 * in_register_00001276;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x37) & 1);
    auVar37[0x37] = bVar3 * auVar36[0x37] | !bVar3 * in_register_00001277;
    bVar4 = (uint8_t)(uVar31 >> 0x38);
    auVar37[0x38] = (bVar4 & 1) * auVar36[0x38] | !(bool)(bVar4 & 1) * in_register_00001278;
    bVar3 = (bool)(bVar4 >> 1 & 1);
    auVar37[0x39] = bVar3 * auVar36[0x39] | !bVar3 * in_register_00001279;
    bVar3 = (bool)(bVar4 >> 2 & 1);
    auVar37[0x3a] = bVar3 * auVar36[0x3a] | !bVar3 * in_register_0000127a;
    bVar3 = (bool)(bVar4 >> 3 & 1);
    auVar37[0x3b] = bVar3 * auVar36[0x3b] | !bVar3 * in_register_0000127b;
    bVar3 = (bool)(bVar4 >> 4 & 1);
    auVar37[0x3c] = bVar3 * auVar36[0x3c] | !bVar3 * in_register_0000127c;
    bVar3 = (bool)(bVar4 >> 5 & 1);
    auVar37[0x3d] = bVar3 * auVar36[0x3d] | !bVar3 * in_register_0000127d;
    bVar3 = (bool)(bVar4 >> 6 & 1);
    auVar37[0x3e] = bVar3 * auVar36[0x3e] | !bVar3 * in_register_0000127e;
    auVar37[0x3f] =
         -((char)bVar4 >> 7) * auVar36[0x3f] | !(bool)-((char)bVar4 >> 7) * in_register_0000127f;
    auVar36 = vmovdqu8_avx512bw(auVar37);
    *param_1 = auVar36;
    return;
  }
  if (param_3 < 0x81) {
    uVar31 = *(uint64_t *)(&UNK_7fffa58944a8 + (param_3 - 0x40) * 8);
    auVar36 = vmovdqu8_avx512bw(*param_2);
    auVar37 = vmovdqu8_avx512bw(param_2[1]);
    bVar3 = (bool)((uint8_t)uVar31 & 1);
    auVar38[0] = bVar3 * auVar37[0] | !bVar3 * in_XMM2_Ba;
    bVar3 = (bool)((uint8_t)(uVar31 >> 1) & 1);
    auVar38[1] = bVar3 * auVar37[1] | !bVar3 * in_XMM2_Bb;
    bVar3 = (bool)((uint8_t)(uVar31 >> 2) & 1);
    auVar38[2] = bVar3 * auVar37[2] | !bVar3 * in_XMM2_Bc;
    bVar3 = (bool)((uint8_t)(uVar31 >> 3) & 1);
    auVar38[3] = bVar3 * auVar37[3] | !bVar3 * in_XMM2_Bd;
    bVar3 = (bool)((uint8_t)(uVar31 >> 4) & 1);
    auVar38[4] = bVar3 * auVar37[4] | !bVar3 * in_XMM2_Be;
    bVar3 = (bool)((uint8_t)(uVar31 >> 5) & 1);
    auVar38[5] = bVar3 * auVar37[5] | !bVar3 * in_XMM2_Bf;
    bVar3 = (bool)((uint8_t)(uVar31 >> 6) & 1);
    auVar38[6] = bVar3 * auVar37[6] | !bVar3 * in_XMM2_Bg;
    bVar3 = (bool)((uint8_t)(uVar31 >> 7) & 1);
    auVar38[7] = bVar3 * auVar37[7] | !bVar3 * in_XMM2_Bh;
    bVar3 = (bool)((uint8_t)(uVar31 >> 8) & 1);
    auVar38[8] = bVar3 * auVar37[8] | !bVar3 * in_XMM2_Bi;
    bVar3 = (bool)((uint8_t)(uVar31 >> 9) & 1);
    auVar38[9] = bVar3 * auVar37[9] | !bVar3 * in_XMM2_Bj;
    bVar3 = (bool)((uint8_t)(uVar31 >> 10) & 1);
    auVar38[10] = bVar3 * auVar37[10] | !bVar3 * in_XMM2_Bk;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0xb) & 1);
    auVar38[0xb] = bVar3 * auVar37[0xb] | !bVar3 * in_XMM2_Bl;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0xc) & 1);
    auVar38[0xc] = bVar3 * auVar37[0xc] | !bVar3 * in_XMM2_Bm;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0xd) & 1);
    auVar38[0xd] = bVar3 * auVar37[0xd] | !bVar3 * in_XMM2_Bn;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0xe) & 1);
    auVar38[0xe] = bVar3 * auVar37[0xe] | !bVar3 * in_XMM2_Bo;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0xf) & 1);
    auVar38[0xf] = bVar3 * auVar37[0xf] | !bVar3 * in_XMM2_Bp;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x10) & 1);
    auVar38[0x10] = bVar3 * auVar37[0x10] | !bVar3 * in_YMM2_H;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x11) & 1);
    auVar38[0x11] = bVar3 * auVar37[0x11] | !bVar3 * in_register_00001291;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x12) & 1);
    auVar38[0x12] = bVar3 * auVar37[0x12] | !bVar3 * in_register_00001292;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x13) & 1);
    auVar38[0x13] = bVar3 * auVar37[0x13] | !bVar3 * in_register_00001293;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x14) & 1);
    auVar38[0x14] = bVar3 * auVar37[0x14] | !bVar3 * in_register_00001294;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x15) & 1);
    auVar38[0x15] = bVar3 * auVar37[0x15] | !bVar3 * in_register_00001295;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x16) & 1);
    auVar38[0x16] = bVar3 * auVar37[0x16] | !bVar3 * in_register_00001296;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x17) & 1);
    auVar38[0x17] = bVar3 * auVar37[0x17] | !bVar3 * in_register_00001297;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x18) & 1);
    auVar38[0x18] = bVar3 * auVar37[0x18] | !bVar3 * in_register_00001298;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x19) & 1);
    auVar38[0x19] = bVar3 * auVar37[0x19] | !bVar3 * in_register_00001299;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x1a) & 1);
    auVar38[0x1a] = bVar3 * auVar37[0x1a] | !bVar3 * in_register_0000129a;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x1b) & 1);
    auVar38[0x1b] = bVar3 * auVar37[0x1b] | !bVar3 * in_register_0000129b;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x1c) & 1);
    auVar38[0x1c] = bVar3 * auVar37[0x1c] | !bVar3 * in_register_0000129c;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x1d) & 1);
    auVar38[0x1d] = bVar3 * auVar37[0x1d] | !bVar3 * in_register_0000129d;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x1e) & 1);
    auVar38[0x1e] = bVar3 * auVar37[0x1e] | !bVar3 * in_register_0000129e;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x1f) & 1);
    auVar38[0x1f] = bVar3 * auVar37[0x1f] | !bVar3 * in_register_0000129f;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x20) & 1);
    auVar38[0x20] = bVar3 * auVar37[0x20] | !bVar3 * in_register_000012a0;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x21) & 1);
    auVar38[0x21] = bVar3 * auVar37[0x21] | !bVar3 * in_register_000012a1;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x22) & 1);
    auVar38[0x22] = bVar3 * auVar37[0x22] | !bVar3 * in_register_000012a2;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x23) & 1);
    auVar38[0x23] = bVar3 * auVar37[0x23] | !bVar3 * in_register_000012a3;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x24) & 1);
    auVar38[0x24] = bVar3 * auVar37[0x24] | !bVar3 * in_register_000012a4;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x25) & 1);
    auVar38[0x25] = bVar3 * auVar37[0x25] | !bVar3 * in_register_000012a5;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x26) & 1);
    auVar38[0x26] = bVar3 * auVar37[0x26] | !bVar3 * in_register_000012a6;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x27) & 1);
    auVar38[0x27] = bVar3 * auVar37[0x27] | !bVar3 * in_register_000012a7;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x28) & 1);
    auVar38[0x28] = bVar3 * auVar37[0x28] | !bVar3 * in_register_000012a8;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x29) & 1);
    auVar38[0x29] = bVar3 * auVar37[0x29] | !bVar3 * in_register_000012a9;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x2a) & 1);
    auVar38[0x2a] = bVar3 * auVar37[0x2a] | !bVar3 * in_register_000012aa;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x2b) & 1);
    auVar38[0x2b] = bVar3 * auVar37[0x2b] | !bVar3 * in_register_000012ab;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x2c) & 1);
    auVar38[0x2c] = bVar3 * auVar37[0x2c] | !bVar3 * in_register_000012ac;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x2d) & 1);
    auVar38[0x2d] = bVar3 * auVar37[0x2d] | !bVar3 * in_register_000012ad;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x2e) & 1);
    auVar38[0x2e] = bVar3 * auVar37[0x2e] | !bVar3 * in_register_000012ae;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x2f) & 1);
    auVar38[0x2f] = bVar3 * auVar37[0x2f] | !bVar3 * in_register_000012af;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x30) & 1);
    auVar38[0x30] = bVar3 * auVar37[0x30] | !bVar3 * in_register_000012b0;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x31) & 1);
    auVar38[0x31] = bVar3 * auVar37[0x31] | !bVar3 * in_register_000012b1;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x32) & 1);
    auVar38[0x32] = bVar3 * auVar37[0x32] | !bVar3 * in_register_000012b2;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x33) & 1);
    auVar38[0x33] = bVar3 * auVar37[0x33] | !bVar3 * in_register_000012b3;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x34) & 1);
    auVar38[0x34] = bVar3 * auVar37[0x34] | !bVar3 * in_register_000012b4;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x35) & 1);
    auVar38[0x35] = bVar3 * auVar37[0x35] | !bVar3 * in_register_000012b5;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x36) & 1);
    auVar38[0x36] = bVar3 * auVar37[0x36] | !bVar3 * in_register_000012b6;
    bVar3 = (bool)((uint8_t)(uVar31 >> 0x37) & 1);
    auVar38[0x37] = bVar3 * auVar37[0x37] | !bVar3 * in_register_000012b7;
    bVar4 = (uint8_t)(uVar31 >> 0x38);
    auVar38[0x38] = (bVar4 & 1) * auVar37[0x38] | !(bool)(bVar4 & 1) * in_register_000012b8;
    bVar3 = (bool)(bVar4 >> 1 & 1);
    auVar38[0x39] = bVar3 * auVar37[0x39] | !bVar3 * in_register_000012b9;
    bVar3 = (bool)(bVar4 >> 2 & 1);
    auVar38[0x3a] = bVar3 * auVar37[0x3a] | !bVar3 * in_register_000012ba;
    bVar3 = (bool)(bVar4 >> 3 & 1);
    auVar38[0x3b] = bVar3 * auVar37[0x3b] | !bVar3 * in_register_000012bb;
    bVar3 = (bool)(bVar4 >> 4 & 1);
    auVar38[0x3c] = bVar3 * auVar37[0x3c] | !bVar3 * in_register_000012bc;
    bVar3 = (bool)(bVar4 >> 5 & 1);
    auVar38[0x3d] = bVar3 * auVar37[0x3d] | !bVar3 * in_register_000012bd;
    bVar3 = (bool)(bVar4 >> 6 & 1);
    auVar38[0x3e] = bVar3 * auVar37[0x3e] | !bVar3 * in_register_000012be;
    auVar38[0x3f] =
         -((char)bVar4 >> 7) * auVar37[0x3f] | !(bool)-((char)bVar4 >> 7) * in_register_000012bf;
    auVar36 = vmovdqu8_avx512bw(auVar36);
    *param_1 = auVar36;
    auVar36 = vmovdqu8_avx512bw(auVar38);
    param_1[1] = auVar36;
    return;
  }
  pauVar25 = (uint8_t (*) [64])(*param_2 + param_3);
  if (param_1 <= param_2) {
    pauVar25 = param_1;
  }
  if (param_1 < pauVar25) {
    uVar20 = *(uint64_t *)*param_2;
    uVar21 = *(uint64_t *)(*param_2 + 8);
    lVar32 = (int64_t)param_2 - (int64_t)param_1;
    puVar29 = (uint8_t *)((int64_t)param_1 + lVar32 + (param_3 - 0x10));
    uVar5 = puVar29[1];
    uVar6 = puVar29[2];
    uVar7 = puVar29[3];
    uVar8 = puVar29[4];
    uVar9 = puVar29[5];
    uVar10 = puVar29[6];
    uVar11 = puVar29[7];
    uVar12 = puVar29[8];
    uVar13 = puVar29[9];
    uVar14 = puVar29[10];
    uVar15 = puVar29[0xb];
    uVar16 = puVar29[0xc];
    uVar17 = puVar29[0xd];
    uVar18 = puVar29[0xe];
    uVar19 = puVar29[0xf];
    puVar27 = param_1[-1] + param_3 + 0x30;
    uVar31 = param_3 - 0x10;
    puVar28 = puVar27;
    uVar42 = *puVar29;
    uVar43 = uVar5;
    uVar44 = uVar6;
    uVar45 = uVar7;
    uVar46 = uVar8;
    uVar47 = uVar9;
    uVar48 = uVar10;
    uVar49 = uVar11;
    uVar50 = uVar12;
    uVar51 = uVar13;
    uVar52 = uVar14;
    uVar53 = uVar15;
    uVar54 = uVar16;
    uVar55 = uVar17;
    uVar56 = uVar18;
    uVar57 = uVar19;
    if (((uint64_t)puVar27 & 0xf) != 0) {
      puVar28 = (uint8_t *)((uint64_t)puVar27 & 0xfffffffffffffff0);
      puVar1 = puVar28 + lVar32;
      uVar42 = *puVar1;
      uVar43 = puVar1[1];
      uVar44 = puVar1[2];
      uVar45 = puVar1[3];
      uVar46 = puVar1[4];
      uVar47 = puVar1[5];
      uVar48 = puVar1[6];
      uVar49 = puVar1[7];
      uVar50 = puVar1[8];
      uVar51 = puVar1[9];
      uVar52 = puVar1[10];
      uVar53 = puVar1[0xb];
      uVar54 = puVar1[0xc];
      uVar55 = puVar1[0xd];
      uVar56 = puVar1[0xe];
      uVar57 = puVar1[0xf];
      *puVar27 = *puVar29;
      param_1[-1][param_3 + 0x31] = uVar5;
      param_1[-1][param_3 + 0x32] = uVar6;
      param_1[-1][param_3 + 0x33] = uVar7;
      param_1[-1][param_3 + 0x34] = uVar8;
      param_1[-1][param_3 + 0x35] = uVar9;
      param_1[-1][param_3 + 0x36] = uVar10;
      param_1[-1][param_3 + 0x37] = uVar11;
      param_1[-1][param_3 + 0x38] = uVar12;
      param_1[-1][param_3 + 0x39] = uVar13;
      param_1[-1][param_3 + 0x3a] = uVar14;
      param_1[-1][param_3 + 0x3b] = uVar15;
      param_1[-1][param_3 + 0x3c] = uVar16;
      param_1[-1][param_3 + 0x3d] = uVar17;
      param_1[-1][param_3 + 0x3e] = uVar18;
      param_1[-1][param_3 + 0x3f] = uVar19;
      uVar31 = (int64_t)puVar28 - (int64_t)param_1;
    }
    uVar34 = uVar31 >> 7;
    if (uVar34 != 0) {
      *puVar28 = uVar42;
      puVar28[1] = uVar43;
      puVar28[2] = uVar44;
      puVar28[3] = uVar45;
      puVar28[4] = uVar46;
      puVar28[5] = uVar47;
      puVar28[6] = uVar48;
      puVar28[7] = uVar49;
      puVar28[8] = uVar50;
      puVar28[9] = uVar51;
      puVar28[10] = uVar52;
      puVar28[0xb] = uVar53;
      puVar28[0xc] = uVar54;
      puVar28[0xd] = uVar55;
      puVar28[0xe] = uVar56;
      puVar28[0xf] = uVar57;
      puVar29 = puVar28;
      while( true ) {
        uVar22 = *(uint64_t *)((int64_t)(puVar29 + lVar32 + -0x10) + 8);
        uVar23 = *(uint64_t *)(puVar29 + lVar32 + -0x20);
        uVar24 = *(uint64_t *)((int64_t)(puVar29 + lVar32 + -0x20) + 8);
        puVar28 = puVar29 + -0x80;
        *(uint64_t *)(puVar29 + -0x10) = *(uint64_t *)(puVar29 + lVar32 + -0x10);
        *(uint64_t *)(puVar29 + -8) = uVar22;
        *(uint64_t *)(puVar29 + -0x20) = uVar23;
        *(uint64_t *)(puVar29 + -0x18) = uVar24;
        uVar22 = *(uint64_t *)((int64_t)(puVar29 + lVar32 + -0x30) + 8);
        uVar23 = *(uint64_t *)(puVar29 + lVar32 + -0x40);
        uVar24 = *(uint64_t *)((int64_t)(puVar29 + lVar32 + -0x40) + 8);
        uVar34 = uVar34 - 1;
        *(uint64_t *)(puVar29 + -0x30) = *(uint64_t *)(puVar29 + lVar32 + -0x30);
        *(uint64_t *)(puVar29 + -0x28) = uVar22;
        *(uint64_t *)(puVar29 + -0x40) = uVar23;
        *(uint64_t *)(puVar29 + -0x38) = uVar24;
        uVar22 = *(uint64_t *)((int64_t)(puVar29 + lVar32 + -0x50) + 8);
        uVar23 = *(uint64_t *)(puVar29 + lVar32 + -0x60);
        uVar24 = *(uint64_t *)((int64_t)(puVar29 + lVar32 + -0x60) + 8);
        *(uint64_t *)(puVar29 + -0x50) = *(uint64_t *)(puVar29 + lVar32 + -0x50);
        *(uint64_t *)(puVar29 + -0x48) = uVar22;
        *(uint64_t *)(puVar29 + -0x60) = uVar23;
        *(uint64_t *)(puVar29 + -0x58) = uVar24;
        uVar22 = *(uint64_t *)(puVar29 + lVar32 + -0x70);
        uVar23 = *(uint64_t *)((int64_t)(puVar29 + lVar32 + -0x70) + 8);
        puVar27 = puVar28 + lVar32;
        uVar42 = *puVar27;
        uVar43 = puVar27[1];
        uVar44 = puVar27[2];
        uVar45 = puVar27[3];
        uVar46 = puVar27[4];
        uVar47 = puVar27[5];
        uVar48 = puVar27[6];
        uVar49 = puVar27[7];
        uVar50 = puVar27[8];
        uVar51 = puVar27[9];
        uVar52 = puVar27[10];
        uVar53 = puVar27[0xb];
        uVar54 = puVar27[0xc];
        uVar55 = puVar27[0xd];
        uVar56 = puVar27[0xe];
        uVar57 = puVar27[0xf];
        if (uVar34 == 0) break;
        *(uint64_t *)(puVar29 + -0x70) = uVar22;
        *(uint64_t *)(puVar29 + -0x68) = uVar23;
        *puVar28 = uVar42;
        puVar29[-0x7f] = uVar43;
        puVar29[-0x7e] = uVar44;
        puVar29[-0x7d] = uVar45;
        puVar29[-0x7c] = uVar46;
        puVar29[-0x7b] = uVar47;
        puVar29[-0x7a] = uVar48;
        puVar29[-0x79] = uVar49;
        puVar29[-0x78] = uVar50;
        puVar29[-0x77] = uVar51;
        puVar29[-0x76] = uVar52;
        puVar29[-0x75] = uVar53;
        puVar29[-0x74] = uVar54;
        puVar29[-0x73] = uVar55;
        puVar29[-0x72] = uVar56;
        puVar29[-0x71] = uVar57;
        puVar29 = puVar28;
      }
      *(uint64_t *)(puVar29 + -0x70) = uVar22;
      *(uint64_t *)(puVar29 + -0x68) = uVar23;
      uVar31 = uVar31 & 0x7f;
    }
    for (uVar34 = uVar31 >> 4; uVar34 != 0; uVar34 = uVar34 - 1) {
      *puVar28 = uVar42;
      puVar28[1] = uVar43;
      puVar28[2] = uVar44;
      puVar28[3] = uVar45;
      puVar28[4] = uVar46;
      puVar28[5] = uVar47;
      puVar28[6] = uVar48;
      puVar28[7] = uVar49;
      puVar28[8] = uVar50;
      puVar28[9] = uVar51;
      puVar28[10] = uVar52;
      puVar28[0xb] = uVar53;
      puVar28[0xc] = uVar54;
      puVar28[0xd] = uVar55;
      puVar28[0xe] = uVar56;
      puVar28[0xf] = uVar57;
      puVar28 = puVar28 + -0x10;
      puVar29 = puVar28 + lVar32;
      uVar42 = *puVar29;
      uVar43 = puVar29[1];
      uVar44 = puVar29[2];
      uVar45 = puVar29[3];
      uVar46 = puVar29[4];
      uVar47 = puVar29[5];
      uVar48 = puVar29[6];
      uVar49 = puVar29[7];
      uVar50 = puVar29[8];
      uVar51 = puVar29[9];
      uVar52 = puVar29[10];
      uVar53 = puVar29[0xb];
      uVar54 = puVar29[0xc];
      uVar55 = puVar29[0xd];
      uVar56 = puVar29[0xe];
      uVar57 = puVar29[0xf];
    }
    if ((uVar31 & 0xf) != 0) {
      *(uint64_t *)*param_1 = uVar20;
      *(uint64_t *)(*param_1 + 8) = uVar21;
    }
    *puVar28 = uVar42;
    puVar28[1] = uVar43;
    puVar28[2] = uVar44;
    puVar28[3] = uVar45;
    puVar28[4] = uVar46;
    puVar28[5] = uVar47;
    puVar28[6] = uVar48;
    puVar28[7] = uVar49;
    puVar28[8] = uVar50;
    puVar28[9] = uVar51;
    puVar28[10] = uVar52;
    puVar28[0xb] = uVar53;
    puVar28[0xc] = uVar54;
    puVar28[0xd] = uVar55;
    puVar28[0xe] = uVar56;
    puVar28[0xf] = uVar57;
    return;
  }
  if ((param_3 < 0x180000) && (0x4000 < param_3)) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      (*param_1)[0] = (*param_2)[0];
      param_2 = (uint8_t (*) [64])(*param_2 + 1);
      param_1 = (uint8_t (*) [64])(*param_1 + 1);
    }
    return;
  }
  lVar32 = ((uint64_t)(param_1 + 1) & 0xffffffffffffffc0) - (int64_t)param_1;
  uVar31 = *(uint64_t *)(&UNK_7fffa58944a8 + lVar32 * 8);
  auVar36 = vmovdqu8_avx512bw(*param_2);
  bVar3 = (bool)((uint8_t)uVar31 & 1);
  auVar39[0] = bVar3 * auVar36[0] | !bVar3 * in_XMM0_Ba;
  bVar3 = (bool)((uint8_t)(uVar31 >> 1) & 1);
  auVar39[1] = bVar3 * auVar36[1] | !bVar3 * in_XMM0_Bb;
  bVar3 = (bool)((uint8_t)(uVar31 >> 2) & 1);
  auVar39[2] = bVar3 * auVar36[2] | !bVar3 * in_XMM0_Bc;
  bVar3 = (bool)((uint8_t)(uVar31 >> 3) & 1);
  auVar39[3] = bVar3 * auVar36[3] | !bVar3 * in_XMM0_Bd;
  bVar3 = (bool)((uint8_t)(uVar31 >> 4) & 1);
  auVar39[4] = bVar3 * auVar36[4] | !bVar3 * in_XMM0_Be;
  bVar3 = (bool)((uint8_t)(uVar31 >> 5) & 1);
  auVar39[5] = bVar3 * auVar36[5] | !bVar3 * in_XMM0_Bf;
  bVar3 = (bool)((uint8_t)(uVar31 >> 6) & 1);
  auVar39[6] = bVar3 * auVar36[6] | !bVar3 * in_XMM0_Bg;
  bVar3 = (bool)((uint8_t)(uVar31 >> 7) & 1);
  auVar39[7] = bVar3 * auVar36[7] | !bVar3 * in_XMM0_Bh;
  bVar3 = (bool)((uint8_t)(uVar31 >> 8) & 1);
  auVar39[8] = bVar3 * auVar36[8] | !bVar3 * in_XMM0_Bi;
  bVar3 = (bool)((uint8_t)(uVar31 >> 9) & 1);
  auVar39[9] = bVar3 * auVar36[9] | !bVar3 * in_XMM0_Bj;
  bVar3 = (bool)((uint8_t)(uVar31 >> 10) & 1);
  auVar39[10] = bVar3 * auVar36[10] | !bVar3 * in_XMM0_Bk;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0xb) & 1);
  auVar39[0xb] = bVar3 * auVar36[0xb] | !bVar3 * in_XMM0_Bl;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0xc) & 1);
  auVar39[0xc] = bVar3 * auVar36[0xc] | !bVar3 * in_XMM0_Bm;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0xd) & 1);
  auVar39[0xd] = bVar3 * auVar36[0xd] | !bVar3 * in_XMM0_Bn;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0xe) & 1);
  auVar39[0xe] = bVar3 * auVar36[0xe] | !bVar3 * in_XMM0_Bo;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0xf) & 1);
  auVar39[0xf] = bVar3 * auVar36[0xf] | !bVar3 * in_XMM0_Bp;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x10) & 1);
  auVar39[0x10] = bVar3 * auVar36[0x10] | !bVar3 * in_YMM0_H;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x11) & 1);
  auVar39[0x11] = bVar3 * auVar36[0x11] | !bVar3 * in_register_00001211;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x12) & 1);
  auVar39[0x12] = bVar3 * auVar36[0x12] | !bVar3 * in_register_00001212;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x13) & 1);
  auVar39[0x13] = bVar3 * auVar36[0x13] | !bVar3 * in_register_00001213;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x14) & 1);
  auVar39[0x14] = bVar3 * auVar36[0x14] | !bVar3 * in_register_00001214;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x15) & 1);
  auVar39[0x15] = bVar3 * auVar36[0x15] | !bVar3 * in_register_00001215;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x16) & 1);
  auVar39[0x16] = bVar3 * auVar36[0x16] | !bVar3 * in_register_00001216;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x17) & 1);
  auVar39[0x17] = bVar3 * auVar36[0x17] | !bVar3 * in_register_00001217;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x18) & 1);
  auVar39[0x18] = bVar3 * auVar36[0x18] | !bVar3 * in_register_00001218;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x19) & 1);
  auVar39[0x19] = bVar3 * auVar36[0x19] | !bVar3 * in_register_00001219;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x1a) & 1);
  auVar39[0x1a] = bVar3 * auVar36[0x1a] | !bVar3 * in_register_0000121a;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x1b) & 1);
  auVar39[0x1b] = bVar3 * auVar36[0x1b] | !bVar3 * in_register_0000121b;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x1c) & 1);
  auVar39[0x1c] = bVar3 * auVar36[0x1c] | !bVar3 * in_register_0000121c;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x1d) & 1);
  auVar39[0x1d] = bVar3 * auVar36[0x1d] | !bVar3 * in_register_0000121d;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x1e) & 1);
  auVar39[0x1e] = bVar3 * auVar36[0x1e] | !bVar3 * in_register_0000121e;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x1f) & 1);
  auVar39[0x1f] = bVar3 * auVar36[0x1f] | !bVar3 * in_register_0000121f;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x20) & 1);
  auVar39[0x20] = bVar3 * auVar36[0x20] | !bVar3 * in_register_00001220;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x21) & 1);
  auVar39[0x21] = bVar3 * auVar36[0x21] | !bVar3 * in_register_00001221;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x22) & 1);
  auVar39[0x22] = bVar3 * auVar36[0x22] | !bVar3 * in_register_00001222;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x23) & 1);
  auVar39[0x23] = bVar3 * auVar36[0x23] | !bVar3 * in_register_00001223;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x24) & 1);
  auVar39[0x24] = bVar3 * auVar36[0x24] | !bVar3 * in_register_00001224;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x25) & 1);
  auVar39[0x25] = bVar3 * auVar36[0x25] | !bVar3 * in_register_00001225;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x26) & 1);
  auVar39[0x26] = bVar3 * auVar36[0x26] | !bVar3 * in_register_00001226;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x27) & 1);
  auVar39[0x27] = bVar3 * auVar36[0x27] | !bVar3 * in_register_00001227;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x28) & 1);
  auVar39[0x28] = bVar3 * auVar36[0x28] | !bVar3 * in_register_00001228;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x29) & 1);
  auVar39[0x29] = bVar3 * auVar36[0x29] | !bVar3 * in_register_00001229;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x2a) & 1);
  auVar39[0x2a] = bVar3 * auVar36[0x2a] | !bVar3 * in_register_0000122a;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x2b) & 1);
  auVar39[0x2b] = bVar3 * auVar36[0x2b] | !bVar3 * in_register_0000122b;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x2c) & 1);
  auVar39[0x2c] = bVar3 * auVar36[0x2c] | !bVar3 * in_register_0000122c;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x2d) & 1);
  auVar39[0x2d] = bVar3 * auVar36[0x2d] | !bVar3 * in_register_0000122d;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x2e) & 1);
  auVar39[0x2e] = bVar3 * auVar36[0x2e] | !bVar3 * in_register_0000122e;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x2f) & 1);
  auVar39[0x2f] = bVar3 * auVar36[0x2f] | !bVar3 * in_register_0000122f;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x30) & 1);
  auVar39[0x30] = bVar3 * auVar36[0x30] | !bVar3 * in_register_00001230;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x31) & 1);
  auVar39[0x31] = bVar3 * auVar36[0x31] | !bVar3 * in_register_00001231;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x32) & 1);
  auVar39[0x32] = bVar3 * auVar36[0x32] | !bVar3 * in_register_00001232;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x33) & 1);
  auVar39[0x33] = bVar3 * auVar36[0x33] | !bVar3 * in_register_00001233;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x34) & 1);
  auVar39[0x34] = bVar3 * auVar36[0x34] | !bVar3 * in_register_00001234;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x35) & 1);
  auVar39[0x35] = bVar3 * auVar36[0x35] | !bVar3 * in_register_00001235;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x36) & 1);
  auVar39[0x36] = bVar3 * auVar36[0x36] | !bVar3 * in_register_00001236;
  bVar3 = (bool)((uint8_t)(uVar31 >> 0x37) & 1);
  auVar39[0x37] = bVar3 * auVar36[0x37] | !bVar3 * in_register_00001237;
  bVar4 = (uint8_t)(uVar31 >> 0x38);
  auVar39[0x38] = (bVar4 & 1) * auVar36[0x38] | !(bool)(bVar4 & 1) * in_register_00001238;
  bVar3 = (bool)(bVar4 >> 1 & 1);
  auVar39[0x39] = bVar3 * auVar36[0x39] | !bVar3 * in_register_00001239;
  bVar3 = (bool)(bVar4 >> 2 & 1);
  auVar39[0x3a] = bVar3 * auVar36[0x3a] | !bVar3 * in_register_0000123a;
  bVar3 = (bool)(bVar4 >> 3 & 1);
  auVar39[0x3b] = bVar3 * auVar36[0x3b] | !bVar3 * in_register_0000123b;
  bVar3 = (bool)(bVar4 >> 4 & 1);
  auVar39[0x3c] = bVar3 * auVar36[0x3c] | !bVar3 * in_register_0000123c;
  bVar3 = (bool)(bVar4 >> 5 & 1);
  auVar39[0x3d] = bVar3 * auVar36[0x3d] | !bVar3 * in_register_0000123d;
  bVar3 = (bool)(bVar4 >> 6 & 1);
  auVar39[0x3e] = bVar3 * auVar36[0x3e] | !bVar3 * in_register_0000123e;
  auVar39[0x3f] =
       -((char)bVar4 >> 7) * auVar36[0x3f] | !(bool)-((char)bVar4 >> 7) * in_register_0000123f;
  pauVar25 = (uint8_t (*) [64])((int64_t)param_1 + lVar32);
  param_2 = (uint8_t (*) [64])((int64_t)param_2 + lVar32);
  param_3 = param_3 - lVar32;
  if (0x100 < param_3) {
    if (0x180000 < param_3) {
      do {
        uVar31 = param_3;
        pauVar30 = param_2;
        pauVar26 = pauVar25;
        auVar36 = vmovdqu8_avx512bw(*pauVar30);
        auVar35 = auVar36._0_30_;
        auVar37 = vmovdqu8_avx512bw(pauVar30[1]);
        auVar40 = vmovdqu8_avx512bw(pauVar30[2]);
        auVar41 = vmovdqu8_avx512bw(pauVar30[3]);
        auVar36 = vmovntdq_avx512f(auVar36);
        *pauVar26 = auVar36;
        auVar36 = vmovntdq_avx512f(auVar37);
        pauVar26[1] = auVar36;
        auVar36 = vmovntdq_avx512f(auVar40);
        pauVar26[2] = auVar36;
        auVar36 = vmovntdq_avx512f(auVar41);
        pauVar26[3] = auVar36;
        param_3 = uVar31 - 0x100;
        pauVar25 = pauVar26 + 4;
        param_2 = pauVar30 + 4;
      } while (0xff < param_3);
      uVar33 = uVar31 - 0xe1 & 0xffffffffffffffe0;
      uVar34 = *(uint64_t *)(&UNK_7fffa58944a8 + (0x20 - (uVar33 - param_3)) * 8);
      switch(uVar31) {
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
        auVar41._0_32_ = vmovdqu8_avx512vl(*(uint8_t (*) [32])(*pauVar30 + uVar33));
        auVar2 = vmovntdq_avx(auVar41._0_32_);
        *(uint8_t (*) [32])(*pauVar26 + uVar33) = auVar2;
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
        auVar41._0_32_ = vmovdqu8_avx512vl(*(uint8_t (*) [32])(*pauVar30 + uVar33 + 0x20));
        auVar2 = vmovntdq_avx(auVar41._0_32_);
        *(uint8_t (*) [32])(*pauVar26 + uVar33 + 0x20) = auVar2;
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
        auVar41._0_32_ = vmovdqu8_avx512vl(*(uint8_t (*) [32])(pauVar30[1] + uVar33));
        auVar2 = vmovntdq_avx(auVar41._0_32_);
        *(uint8_t (*) [32])(pauVar26[1] + uVar33) = auVar2;
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
        auVar41._0_32_ = vmovdqu8_avx512vl(*(uint8_t (*) [32])(pauVar30[1] + uVar33 + 0x20));
        auVar2 = vmovntdq_avx(auVar41._0_32_);
        *(uint8_t (*) [32])(pauVar26[1] + uVar33 + 0x20) = auVar2;
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
        auVar41._0_32_ = vmovdqu8_avx512vl(*(uint8_t (*) [32])(pauVar30[2] + uVar33));
        auVar2 = vmovntdq_avx(auVar41._0_32_);
        *(uint8_t (*) [32])(pauVar26[2] + uVar33) = auVar2;
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
        auVar41._0_32_ = vmovdqu8_avx512vl(*(uint8_t (*) [32])(pauVar30[2] + uVar33 + 0x20));
        auVar2 = vmovntdq_avx(auVar41._0_32_);
        *(uint8_t (*) [32])(pauVar26[2] + uVar33 + 0x20) = auVar2;
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
        auVar41._0_32_ = vmovdqu8_avx512vl(*(uint8_t (*) [32])(pauVar30[3] + uVar33));
        auVar35 = auVar41._0_30_;
        auVar2 = vmovntdq_avx(auVar41._0_32_);
        *(uint8_t (*) [32])(pauVar26[3] + uVar33) = auVar2;
      default:
        auVar36._32_32_ = auVar41._32_32_;
        auVar36._0_32_ = vmovdqu8_avx512vl(*(uint8_t (*) [32])(pauVar30[3] + uVar33 + 0x20));
        bVar3 = (bool)((uint8_t)uVar34 & 1);
        auVar40[0] = bVar3 * auVar36[0] | !bVar3 * auVar35[0];
        bVar3 = (bool)((uint8_t)(uVar34 >> 1) & 1);
        auVar40[1] = bVar3 * auVar36[1] | !bVar3 * auVar35[1];
        bVar3 = (bool)((uint8_t)(uVar34 >> 2) & 1);
        auVar40[2] = bVar3 * auVar36[2] | !bVar3 * auVar35[2];
        bVar3 = (bool)((uint8_t)(uVar34 >> 3) & 1);
        auVar40[3] = bVar3 * auVar36[3] | !bVar3 * auVar35[3];
        bVar3 = (bool)((uint8_t)(uVar34 >> 4) & 1);
        auVar40[4] = bVar3 * auVar36[4] | !bVar3 * auVar35[4];
        bVar3 = (bool)((uint8_t)(uVar34 >> 5) & 1);
        auVar40[5] = bVar3 * auVar36[5] | !bVar3 * auVar35[5];
        bVar3 = (bool)((uint8_t)(uVar34 >> 6) & 1);
        auVar40[6] = bVar3 * auVar36[6] | !bVar3 * auVar35[6];
        bVar3 = (bool)((uint8_t)(uVar34 >> 7) & 1);
        auVar40[7] = bVar3 * auVar36[7] | !bVar3 * auVar35[7];
        bVar3 = (bool)((uint8_t)(uVar34 >> 8) & 1);
        auVar40[8] = bVar3 * auVar36[8] | !bVar3 * auVar35[8];
        bVar3 = (bool)((uint8_t)(uVar34 >> 9) & 1);
        auVar40[9] = bVar3 * auVar36[9] | !bVar3 * auVar35[9];
        bVar3 = (bool)((uint8_t)(uVar34 >> 10) & 1);
        auVar40[10] = bVar3 * auVar36[10] | !bVar3 * auVar35[10];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0xb) & 1);
        auVar40[0xb] = bVar3 * auVar36[0xb] | !bVar3 * auVar35[0xb];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0xc) & 1);
        auVar40[0xc] = bVar3 * auVar36[0xc] | !bVar3 * auVar35[0xc];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0xd) & 1);
        auVar40[0xd] = bVar3 * auVar36[0xd] | !bVar3 * auVar35[0xd];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0xe) & 1);
        auVar40[0xe] = bVar3 * auVar36[0xe] | !bVar3 * auVar35[0xe];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0xf) & 1);
        auVar40[0xf] = bVar3 * auVar36[0xf] | !bVar3 * auVar35[0xf];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x10) & 1);
        auVar40[0x10] = bVar3 * auVar36[0x10] | !bVar3 * auVar35[0x10];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x11) & 1);
        auVar40[0x11] = bVar3 * auVar36[0x11] | !bVar3 * auVar35[0x11];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x12) & 1);
        auVar40[0x12] = bVar3 * auVar36[0x12] | !bVar3 * auVar35[0x12];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x13) & 1);
        auVar40[0x13] = bVar3 * auVar36[0x13] | !bVar3 * auVar35[0x13];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x14) & 1);
        auVar40[0x14] = bVar3 * auVar36[0x14] | !bVar3 * auVar35[0x14];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x15) & 1);
        auVar40[0x15] = bVar3 * auVar36[0x15] | !bVar3 * auVar35[0x15];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x16) & 1);
        auVar40[0x16] = bVar3 * auVar36[0x16] | !bVar3 * auVar35[0x16];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x17) & 1);
        auVar40[0x17] = bVar3 * auVar36[0x17] | !bVar3 * auVar35[0x17];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x18) & 1);
        auVar40[0x18] = bVar3 * auVar36[0x18] | !bVar3 * auVar35[0x18];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x19) & 1);
        auVar40[0x19] = bVar3 * auVar36[0x19] | !bVar3 * auVar35[0x19];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x1a) & 1);
        auVar40[0x1a] = bVar3 * auVar36[0x1a] | !bVar3 * auVar35[0x1a];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x1b) & 1);
        auVar40[0x1b] = bVar3 * auVar36[0x1b] | !bVar3 * auVar35[0x1b];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x1c) & 1);
        auVar40[0x1c] = bVar3 * auVar36[0x1c] | !bVar3 * auVar35[0x1c];
        bVar3 = (bool)((uint8_t)(uVar34 >> 0x1d) & 1);
        auVar40._30_34_ = auVar36._30_34_;
        auVar40[0x1d] = bVar3 * auVar36[0x1d] | !bVar3 * auVar35[0x1d];
        auVar2 = vmovdqu8_avx512vl(auVar40._0_32_);
        *(uint8_t (*) [32])(pauVar26[3] + uVar33 + 0x20) = auVar2;
      case 0x100:
        auVar36 = vmovdqu8_avx512bw(auVar39);
        *param_1 = auVar36;
        return;
      }
    }
    do {
      auVar36 = vmovdqu8_avx512bw(*param_2);
      auVar37 = vmovdqu8_avx512bw(param_2[1]);
      auVar39 = vmovdqu8_avx512bw(param_2[2]);
      auVar40 = vmovdqu8_avx512bw(param_2[3]);
      auVar36 = vmovdqu8_avx512bw(auVar36);
      *pauVar25 = auVar36;
      auVar36 = vmovdqu8_avx512bw(auVar37);
      pauVar25[1] = auVar36;
      auVar36 = vmovdqu8_avx512bw(auVar39);
      pauVar25[2] = auVar36;
      auVar36 = vmovdqu8_avx512bw(auVar40);
      pauVar25[3] = auVar36;
      pauVar25 = pauVar25 + 4;
      param_2 = param_2 + 4;
      param_3 = param_3 - 0x100;
    } while (0xff < param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x7fffa51680f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_7fffa4770000.e_magic +
            *(uint32_t *)(&UNK_7fffa5894460 + (param_3 + 0x1f >> 5) * 4)))();
  return;
}


// ============================================================================
// Function : FUN_7fffa51682b0  |  RVA: 0x9f82b0  |  Size: 173 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa516924a) overlaps instruction at (ram,0x7fffa5169242)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa51689aa) */
/* WARNING: Removing unreachable block (ram,0x7fffa5169252) */
/* WARNING: Removing unreachable block (ram,0x7fffa5169242) */
/* WARNING: Removing unreachable block (ram,0x7fffa5168882) */
/* WARNING: Removing unreachable block (ram,0x7fffa516924a) */
/* WARNING: Removing unreachable block (ram,0x7fffa5169233) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00ff000002ec : 0x7fffa5168a1b */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7fffa51682b0(uint16_t *param_1,uint64_t param_2,uint64_t param_3)

{
  uint8_t *pbVar1;
  char *pcVar2;
  uint16_t uVar3;
  uint64_t uVar4;
  code *pcVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  uint64_t uVar9;
  bool bVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint64_t *puVar16;
  uint8_t *puVar17;
  uint32_t uVar18;
  uint64_t *puVar19;
  uint64_t uVar20;
  int iVar21;
  uint64_t uVar22;
  uint64_t *puVar23;
  uint64_t uVar24;
  int64_t lVar25;
  int iVar26;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar27;
  uint64_t uVar28;
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  int64_t *plStack_b8;
  uint64_t uStack_a8;
  uint64_t *puStack_78;
  
  uVar20 = *(int64_t *)((int64_t)ProcessEnvironmentBlock + 0x30) * 0x63f9a4d2099650e9;
  uVar3 = *param_1;
  uVar20 = FUN_7fffa5497d30(param_1 + 1,0x7fffa5498b3b,param_3,uVar20 << 0x20 | uVar20 >> 0x20);
  iVar8 = iRam00007fffa4785e18;
  uVar24 = (uint64_t)uVar3;
  if ((bRam00007fffa47bbbdd & 1) == 0) {
    iVar26 = (int)ClientId.UniqueThread;
    uVar27 = extraout_XMM0_Qa;
    if (iRam00007fffa4785e18 != iVar26) {
      uVar27 = (*(code *)&DAT_7ff8504ead30)(0x7fffa4785e20);
      LOCK();
      UNLOCK();
      iRam00007fffa4785e18 = iVar26;
    }
    iVar21 = iRam00007fffa4785e1c + 1;
    if ((bRam00007fffa47bbbdd & 1) == 0) {
      uVar14 = 0x6a99b4b1f77dd0fb >> (bRam00007fffa47bae48 & 0x3f);
      uStack_a8 = 0;
      uVar22 = uVar14;
      uVar11 = uVar24;
      while( true ) {
        pcVar2 = (char *)(puRam00007fffa47bae58 + uVar22 * 2);
        auVar31[0] = -(*pcVar2 == -5);
        auVar31[1] = -(pcVar2[1] == -5);
        auVar31[2] = -(pcVar2[2] == -5);
        auVar31[3] = -(pcVar2[3] == -5);
        auVar31[4] = -(pcVar2[4] == -5);
        auVar31[5] = -(pcVar2[5] == -5);
        auVar31[6] = -(pcVar2[6] == -5);
        auVar31[7] = -(pcVar2[7] == -5);
        auVar31[8] = -(pcVar2[8] == -5);
        auVar31[9] = -(pcVar2[9] == -5);
        auVar31[10] = -(pcVar2[10] == -5);
        auVar31[0xb] = -(pcVar2[0xb] == -5);
        auVar31[0xc] = -(pcVar2[0xc] == -5);
        auVar31[0xd] = -(pcVar2[0xd] == -5);
        auVar31[0xe] = -(pcVar2[0xe] == -5);
        auVar31[0xf] = -(pcVar2[0xf] == 0xfbU);
        uVar3 = (uint16_t)(SUB161(auVar31 >> 7,0) & 1) | (uint16_t)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
        iRam00007fffa4785e1c = iVar21;
        if (uVar3 != 0) {
          uVar11 = lRam00007fffa47bae60 + uVar22 * 0x78;
          uVar18 = (uint32_t)uVar3;
          do {
            uVar6 = 0;
            for (uVar7 = uVar18; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            if (**(char **)(uVar11 + (uint64_t)uVar6 * 8) == '\f') {
              plStack_b8 = (int64_t *)(uVar11 + (uint64_t)uVar6 * 8);
              puVar12 = puRam00007fffa47bae58;
              goto code_r0x7fffa5168b9f;
            }
            uVar18 = uVar18 - 1 & uVar18;
          } while (uVar18 != 0);
        }
        if (((pcVar2[0xf] & 8U) == 0) || (uVar9 = uStack_a8 + 1, uRam00007fffa47bae50 < uVar9))
        break;
        uVar22 = uVar22 + uVar9 & uRam00007fffa47bae50;
        uStack_a8 = uVar9;
      }
      if (uRam00007fffa47bae70 < uRam00007fffa47bae68) {
        puStack_78 = puRam00007fffa47bae58 + uVar14 * 2;
        pcVar2 = (char *)(puRam00007fffa47bae58 + uVar14 * 2);
        auVar29[0] = -(*pcVar2 == '\0');
        auVar29[1] = -(pcVar2[1] == '\0');
        auVar29[2] = -(pcVar2[2] == '\0');
        auVar29[3] = -(pcVar2[3] == '\0');
        auVar29[4] = -(pcVar2[4] == '\0');
        auVar29[5] = -(pcVar2[5] == '\0');
        auVar29[6] = -(pcVar2[6] == '\0');
        auVar29[7] = -(pcVar2[7] == '\0');
        auVar29[8] = -(pcVar2[8] == '\0');
        auVar29[9] = -(pcVar2[9] == '\0');
        auVar29[10] = -(pcVar2[10] == '\0');
        auVar29[0xb] = -(pcVar2[0xb] == '\0');
        auVar29[0xc] = -(pcVar2[0xc] == '\0');
        auVar29[0xd] = -(pcVar2[0xd] == '\0');
        auVar29[0xe] = -(pcVar2[0xe] == '\0');
        auVar29[0xf] = -(pcVar2[0xf] == '\0');
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
          lVar25 = 1;
          while( true ) {
            *(uint8_t *)((int64_t)puStack_78 + 0xf) = *(uint8_t *)((int64_t)puStack_78 + 0xf) | 8;
            uVar14 = uVar14 + lVar25 & uRam00007fffa47bae50;
            puStack_78 = puRam00007fffa47bae58 + uVar14 * 2;
            pcVar2 = (char *)(puRam00007fffa47bae58 + uVar14 * 2);
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
            uVar18 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar30 >> 7,0) & 1) |
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
            if (uVar18 != 0) break;
            lVar25 = lVar25 + 1;
          }
        }
        uVar6 = 0;
        for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar22 = (uint64_t)uVar6;
        uVar11 = 0xffffffffffff8706;
        lVar25 = uVar14 * 0x78 + lRam00007fffa47bae60;
        plStack_b8 = (int64_t *)(lVar25 + uVar22 * 8);
        FUN_7fffa526aab0(0xffffffffffff8706,FUN_7fffa526aab0);
        puVar17 = (uint8_t *)((uVar11 << 0x2c | uVar11 >> 0x14) - ((uVar11 >> 0x14) << 0x36));
        *(uint8_t **)(lVar25 + uVar22 * 8) = puVar17;
        *puVar17 = 0xc;
        *(uint8_t (*) [16])(puVar17 + 0x18) = (uint8_t  [16])0x0;
        *(uint8_t (*) [16])(puVar17 + 8) = (uint8_t  [16])0x0;
        *(uint64_t *)(puVar17 + 0x28) = 0;
        uVar27 = FUN_7fffa526aab0();
        puVar12 = (uint64_t *)((uVar11 << 0x2c | uVar11 >> 0x14) - ((uVar11 >> 0x14) << 0x36));
        *(uint64_t **)(puVar17 + 8) = puVar12;
        puVar12[1] = 0;
        *puVar12 = puVar17 + 8;
        *(uint8_t *)((int64_t)puStack_78 + uVar22) = 0xfb;
        uRam00007fffa47bae70 = uRam00007fffa47bae70 + 1;
      }
      else {
        uVar22 = (uint64_t)(iVar8 == iVar26);
        puVar12 = (uint64_t *)0xbc4b14b134ea8d8b;
        uVar27 = FUN_7fffa569fbd0(0xbc4b14b134ea8d8b,0xc,FUN_7fffa569fbd0,
                                  (uVar11 ^ uVar22) * -0xbeb2a276 +
                                  (~uVar22 ^ uVar11) * -0x876cd26a +
                                  (~uVar11 | uVar22) * 0x76ed262 +
                                  (uint64_t)((uint32_t)(iVar8 == iVar26) & (uint32_t)~uVar11) * 0x3745d00c
                                  + (uVar11 & ~uVar22) * 0x3eb4a26e);
      }
code_r0x7fffa5168b9f:
      lVar25 = *plStack_b8;
      uVar11 = *(uint64_t *)(lVar25 + 0x28);
      if (uVar11 < 0x60) {
        uVar22 = *(uint64_t *)(lVar25 + 0x18);
        if (uVar11 + 1 < uVar22) {
          puVar13 = *(uint64_t **)(lVar25 + 0x10);
        }
        else {
          uVar14 = uVar22 + (uVar22 == 0);
          do {
            uVar9 = uVar14;
            if (0x7ffffffffffffff - uVar9 < uVar9) {
              FUN_7fffa5287fa0(0x7ffe0320,&UNK_7fffa5292b1f,0);
              pbVar1 = (uint8_t *)(uVar22 - 0x47);
              *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
              pcVar5 = (code *)swi(1);
              (*pcVar5)();
              return;
            }
            uVar14 = uVar9 * 2;
            bVar10 = uVar14 == uVar22 || uVar14 < 8;
            puVar12 = (uint64_t *)CONCAT71((int7)((uint64_t)puVar12 >> 8),bVar10);
          } while (bVar10);
          uVar4 = *(uint64_t *)(lVar25 + 0x20);
          FUN_7fffa526aab0(puVar12,0xffffffffffffb540);
          puVar13 = (uint64_t *)
                    (((int64_t)puVar12 << 0x2c | (uint64_t)puVar12 >> 0x14) -
                    (((uint64_t)puVar12 >> 0x14) << 0x36));
          do {
            uVar28 = uVar14;
            uVar14 = uVar28 * 2;
          } while (uVar28 <= (uVar9 & 0x7fffffffffffffff));
          puVar23 = (uint64_t *)(uVar4 * 8);
          uVar14 = *(uint64_t *)(lVar25 + 0x10);
          FUN_7fffa56a5f20(puVar13 + uVar4,uVar14 + uVar4 * 8,(uVar22 - uVar4) * 8);
          puVar12 = puVar13 + uVar4 + (uVar22 - uVar4);
          uVar28 = uVar28 - uVar22;
          if (uVar28 < uVar4) {
            puVar19 = (uint64_t *)(uVar28 * 8);
            FUN_7fffa56a5f20(puVar12,uVar14,puVar19);
            FUN_7fffa56a5f20(puVar13,uVar14 + uVar28 * 8,puVar23 + -uVar28);
            puVar12 = (uint64_t *)((int64_t)(puVar23 + -uVar28) + (int64_t)puVar13);
            puVar23 = puVar12;
          }
          else {
            FUN_7fffa56a5f20(puVar12,uVar14,puVar23);
            FUN_7fffa4ecf8e0(puVar12 + uVar4,0,(uVar28 - uVar4) * 8);
            puVar12 = puVar13;
            puVar19 = puVar23;
          }
          uVar27 = FUN_7fffa4ecf8e0(puVar12,0,puVar19);
          if (uVar14 != 0) {
            uVar22 = ~uStack_a8;
            uVar11 = (uint64_t)puVar23 ^ 0xffffffffffffffff;
            uVar9 = (uint64_t)puVar13 | uStack_a8;
            puVar12 = (uint64_t *)0xd87710ae;
            lVar15 = ((~(uint64_t)puVar23 & ~uVar9) + (uVar9 ^ (uint64_t)puVar23)) * 0x1990a1f3 +
                     (uVar9 & (uint64_t)puVar23) * 0x1990a1f3 +
                     (((uVar22 | (uint64_t)puVar13) ^ (uint64_t)puVar23) -
                     (uVar22 & (uint64_t)puVar13 & uVar11)) * 0xfa5d52aa +
                     (((uint64_t)puVar13 ^ uStack_a8) & (uint64_t)puVar23) * -0xcc185842 +
                     (uVar11 ^ (uint64_t)puVar13 ^ uStack_a8) * -0x6bc0b16 +
                     (((uint64_t)puVar13 ^ uVar22) & uVar11) * -0xf3a14794;
            uVar27 = FUN_7fffa5687c30(0xd87710ae,lVar15,uVar14 >> 0x3d ^ uVar14,
                                      lVar15 + ((uint64_t)puVar23 & uStack_a8 & ~(uint64_t)puVar13
                                               ) * -0x2788ef52);
            uVar22 = *(uint64_t *)(lVar25 + 0x18);
            uVar11 = *(uint64_t *)(lVar25 + 0x28);
          }
          *(uint64_t **)(lVar25 + 0x10) = puVar13;
          uVar22 = uVar28 + uVar22;
          *(uint64_t *)(lVar25 + 0x18) = uVar22;
        }
        uVar14 = *(uint64_t *)(lVar25 + 0x20) & uVar22 - 1;
        uVar11 = uVar14 + uVar11;
        uVar22 = uVar22 - 1 & uVar11;
        *(uint64_t *)(lVar25 + 0x20) = uVar14;
        puVar16 = (uint64_t *)puVar13[uVar22];
        if (puVar16 == (uint64_t *)0x0) {
          FUN_7fffa526aab0(uVar27,0x7fffa527a1c5,&IMAGE_DOS_HEADER_7fffa4770000,0);
          puVar13[uVar22] =
               ((int64_t)puVar12 << 0x2c | (uint64_t)puVar12 >> 0x14) -
               (((uint64_t)puVar12 >> 0x14) << 0x36);
          puVar16 = *(uint64_t **)
                     (*(int64_t *)(lVar25 + 0x10) +
                     (uVar11 & *(int64_t *)(lVar25 + 0x18) - 1U) * 8);
        }
        puVar16[2] = 0;
        puVar16[3] = 0;
        puVar16[1] = uVar20;
        *puVar16 = uVar24;
        *(int64_t *)(lVar25 + 0x28) = *(int64_t *)(lVar25 + 0x28) + 1;
      }
      iRam00007fffa4785e1c = iRam00007fffa4785e1c + -1;
      if (iRam00007fffa4785e1c == 0) {
        LOCK();
        iRam00007fffa4785e18 = 0;
        UNLOCK();
        (*(code *)&DAT_7ff8504eba90)(0x7fffa4785e20);
      }
      goto code_r0x7fffa51690c1;
    }
    if (iRam00007fffa4785e1c == 0) {
      LOCK();
      iRam00007fffa4785e18 = 0;
      UNLOCK();
      (*(code *)&DAT_7ff8504eba90)(0x7fffa4785e20);
    }
  }
  bRam000000ff000002ec = bRam000000ff000002ec | 4;
  (*(code *)((*(uint64_t *)((uint64_t)bRam00007fffa478681c * 8 + 0x7fffa4786826) ^
             uRam00007fffa4786870) + 0x4e511c0))(uVar24,uVar20,&IMAGE_DOS_HEADER_7fffa4770000,0);
  bRam000000ff000002ec = bRam000000ff000002ec & 0xfb;
code_r0x7fffa51690c1:
  thunk_FUN_7fffa55eeda0(param_1,0x7fffa50895dd,&IMAGE_DOS_HEADER_7fffa4770000,0);
  return;
}


// ============================================================================
// Function : Unwind@7fffa51692f0  |  RVA: 0x9f92f0  |  Size: 202 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa51692f0(void)

{
  iRam00007fffa4785e1c = iRam00007fffa4785e1c + -1;
  if (iRam00007fffa4785e1c == 0) {
    LOCK();
    uRam00007fffa4785e18 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(0x7fffa4785e20,0x7fffa4788c7e,0);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa51693c0  |  RVA: 0x9f93c0  |  Size: 67 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa51693c0(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  
  pbVar1 = (uint8_t *)(*(int64_t *)(param_2 + 0x38) + 0x2ec);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}


// ============================================================================
// Function : FUN_7fffa5169410  |  RVA: 0x9f9410  |  Size: 855 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa5169708) */
/* WARNING: Removing unreachable block (ram,0x7fffa5169702) */

void FUN_7fffa5169410(void)

{
  uint64_t uVar1;
  
  uRam00007fffa47858f0 = 0x51dada3e00df7ac3;
  uRam00007fffa47858e8 = 0xffff80005a9141b8;
  uRam00007fffa47858f8 = 0xeab7ce11c07558f7;
  uRam00007fffa4785900 = 0x8a47cf936c0e5ce0;
  lRam00007fffa4785908 = lRam00007fffa4781060 * -0x4d445b7c8ed6042d + -0x51acca145edcd924;
  uRam00007fffa4785920 = 0xfe98ebeea234043d;
  uVar1 = (lRam00007fffa47810e8 - 0x7fffa56f7080U) * 0x80000000 |
          lRam00007fffa47810e8 - 0x7fffa56f7080U >> 0x21;
  uVar1 = uVar1 >> 3 ^ uVar1;
  uVar1 = uVar1 >> 6 ^ uVar1;
  uVar1 = uVar1 >> 0xc ^ uVar1;
  uRam00007fffa4785910 = uVar1 >> 0x30 ^ uVar1 >> 0x18 ^ uVar1;
  uRam00007fffa4785918 = 0xe71a980bdcec83a4;
  return;
}

