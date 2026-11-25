// Subsystem: Internal Routines Cluster 12 (0xb65b14 .. 0xc94ee0)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : FUN_7fffa52d5b14  |  RVA: 0xb65b14  |  Size: 155 bytes
// Callers  : FUN_7fffa55c8ce0@0xe58ce0
// Callees  : FUN_7fffa5668bc0@0xef8bc0, FUN_7fffa5181628@0xa11628
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa52d5b14(void)

{
  int64_t lVar1;
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
  FUN_7fffa5668bc0();
  if (cStack_20 == '\x02') {
    *(uint32_t *)(alStack_48[0] + 0x3a8) = *(uint32_t *)(alStack_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (cStack_18 != '\0') {
    lVar1 = FUN_7fffa5181628(alStack_48);
    *(uint32_t *)(lVar1 + 0x20) = uStack_1c;
  }
  if (cStack_10 != '\0') {
    lVar1 = FUN_7fffa5181628(alStack_48);
    *(uint32_t *)(lVar1 + 0x24) = uStack_14;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52d5bb0  |  RVA: 0xb65bb0  |  Size: 35 bytes
// Callers  : FUN_7fffa51817f8@0xa117f8, FUN_7fffa517c9b4@0xa0c9b4, FUN_7fffa55f0084@0xe80084, FUN_7fffa522524c@0xab524c
// Callees  : FUN_7fffa4f5c658@0x7ec658
// ============================================================================
int64_t FUN_7fffa52d5bb0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = FUN_7fffa4f5c658();
  lVar2 = lVar1 + 0x24;
  if (lVar1 == 0) {
    lVar2 = 0x7fffa478022c;
  }
  return lVar2;
}


// ============================================================================
// Function : FUN_7fffa52d5c40  |  RVA: 0xb65c40  |  Size: 3312 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa52d7886) overlaps instruction at (ram,0x7fffa52d7883)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa52d78b1) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d786b) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d5ccf) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d7873) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d787b) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d7883) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d65be) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d63a6) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d5df2) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d5f51) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d655a) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d6755) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d78a6) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d729d) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d70ec) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d727c) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d782f) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x7ffe0004 : 0x7fffa52d67fe */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint64_t FUN_7fffa52d5c40(int param_1)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint64_t uVar10;
  uint64_t uVar11;
  uint8_t bVar12;
  uint8_t bVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint32_t uVar17;
  int64_t lVar18;
  uint64_t uVar19;
  uint32_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  
  if (param_1 == 0x13) {
    uVar14 = (uRam000000007ffe0320 & 0xffffffff) * (uint64_t)uRam000000007ffe0004;
    bRam00007fffa47bb25c = bRam00007fffa47bb25c + 1 & 3;
    uVar16 = (uVar14 >> 0x18) +
             (uRam000000007ffe0320 >> 0x18 & 0xffffffffffffff00) * (uint64_t)uRam000000007ffe0004 +
             0xc00;
    *(uint64_t *)((uint64_t)bRam00007fffa47bb25c * 8 + 0x7fffa47bb25f) =
         CONCAT26((uint16_t)(uVar16 >> 0x30) & 0xff | (uint16_t)((uVar16 >> 0x38) << 8),
                  CONCAT24((uint16_t)(uint8_t)(uVar16 >> 0x20) |
                           (uint16_t)((uVar16 & 0xffffff00ff000000) >> 0x20),
                           (uint32_t)(uVar16 & 0xffffff00ff000000) |
                           (uint32_t)uVar16 & 0xff0000 |
                           (uint32_t)(uint8_t)(uVar14 >> 0x18) | (uint32_t)uVar16 & 0xff00)) ^
         uRam00007fffa47bb28d;
    uVar14 = rdtsc();
    uVar14 = (uVar14 & 0xffffffff00000000 |
             (uint64_t)CONCAT14((char)(uRam000000007ffe0320 >> 0x38),(int)uVar14)) *
             -0x5a46117eacb056b3 + 0xa4ddbde22237f202;
    do {
      uVar17 = (uint32_t)(uVar14 >> 0x1b) ^ (uint32_t)(uVar14 >> 0x2d);
      bVar12 = (uint8_t)(uVar14 >> 0x3b);
      uVar16 = uVar14 * -0x5a46117eacb056b3 + 0x1a2ef217;
      uVar20 = (uint32_t)(uVar16 >> 0x2d) ^ (uint32_t)(uVar16 >> 0x1b);
      uVar14 = uVar16 * -0x5a46117eacb056b3 + 0x1a2ef217;
      bVar13 = (uint8_t)(uVar16 >> 0x3b);
      uVar16 = CONCAT44(uVar17 >> bVar12 | uVar17 << 0x20 - bVar12,
                        uVar20 >> bVar13 | uVar20 << 0x20 - bVar13);
    } while (uVar16 < 0x601);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar16;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16 * 0x1ffc007ff001ff + SUB168(auVar1 * ZEXT816(0xc007ff001ffc0080),8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = SUB168(auVar1 * ZEXT816(0xc007ff001ffc0080),0);
    lVar18 = ((uRam000000007ffe0320 & 0xffffffff) * (uint64_t)uRam000000007ffe0004 >> 0x18) +
             SUB168(auVar2 * ZEXT816(0x801),8) +
             (uint64_t)CARRY8(SUB168(auVar3 * ZEXT816(0x801),8),SUB168(auVar2 * ZEXT816(0x801),0));
    lVar15 = lVar18 + (uRam000000007ffe0320 >> 0x18 & 0xffffffff00) *
                      (uint64_t)uRam000000007ffe0004 + 0x1000;
    uVar21 = lVar15 - 0x800;
    uVar14 = uVar21 >> 0x38 | (uVar21 & 0xff000000000000) >> 0x28 |
             (uVar21 & 0xff0000000000) >> 0x18 | (uVar21 & 0xff00000000) >> 8 |
             (uVar21 & 0xff000000) << 8 | (uVar21 & 0xff0000) << 0x18 | (uVar21 & 0xff00) << 0x28 |
             lVar18 << 0x38;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f) << 4 | uVar14 >> 4 & 0xf0f0f0f0f0f0f0f;
    uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333) * 4;
    uVar14 = (uVar14 >> 1 & 0x5555555555555555) + (uVar14 & 0x5555555555555555) * 2;
    uVar14 = uVar14 * 0x80000 ^ uVar14;
    uVar11 = ~uVar21;
    uVar16 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28;
    uVar11 = uVar16 | uVar11 << 0x38;
    uVar19 = lVar15 + 0x632b6a2cebf88401U ^ 0xfc7b3b57b6ed85e9;
    lRam00007fffa47bb0f8 = (uVar16 << 0xb | uVar11 >> 0x35) + 0xb9c7c7ce4115256a;
    uVar14 = uVar14 << 0x26 ^ uVar14;
    uVar22 = uVar14 * 0x19a63735bd8df800 ^ uVar14 * -0x637ccb3919484e41;
    uVar14 = (uVar11 & 0xf0f0f0f0f0f0f0f) << 4 | uVar11 >> 4 & 0xf0f0f0f0f0f0f0f;
    uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333) * 4;
    lRam00007fffa47bb0e0 =
         ((uVar14 >> 1 & 0x5555555555555555) + (uVar14 & 0x5555555555555555) * 2) *
         -0x7ff001ffc007ff + -0x6ff7c8205ff39cdb;
    uVar11 = (uVar19 << 0xf | uVar19 >> 0x31) ^ 0xf55bdbc641bfb9a8;
    uVar14 = (lVar15 + 0x8adb0) * 0x200004000080001 + 0x6a4009a123b1c8a9;
    uVar14 = (uVar14 * 0x200000 | uVar14 >> 0x2b) ^ (uVar14 * 0x80000 | uVar14 >> 0x2d) ^ uVar14;
    uVar14 = (uVar14 << 0x2a | uVar14 >> 0x16) ^ (uVar14 << 0x26 | uVar14 >> 0x1a) ^ uVar14;
    uVar14 = (uVar14 << 0x14 | uVar14 >> 0x2c) ^ (uVar14 << 0xc | uVar14 >> 0x34) ^ uVar14;
    uVar14 = (uVar14 << 0x18 | uVar14 >> 0x28) ^ (uVar14 << 0x28 | uVar14 >> 0x18) ^ uVar14;
    uVar16 = uVar11 << 0xf ^ uVar11;
    uRam00007fffa47bb0e8 =
         ~((uVar14 << 0x30 | uVar14 >> 0x10) ^ (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar14);
    lRam00007fffa47bb0f0 = (uVar22 << 0x16 ^ uVar22 << 0x2c ^ uVar22) + 0x3705562759a58349;
    uVar19 = lVar15 + 0x5a74fa7d6582a27fU >> 0x13 ^ lVar15 + 0x5a74fa7d6582a27fU;
    uVar14 = (uVar21 ^ 0x30a8f6b3d7d919c0) * 0x2113044b4aebe283 + 0x97feee222647b610;
    lRam00007fffa47bb118 = (uVar14 * 0x800 | uVar14 >> 0x35) * -0x7f01fc07f01fc07f;
    lRam00007fffa47bb100 =
         (uVar11 << 0x3c ^ uVar16 << 0x1e ^ uVar16) * -0x7ff001ffc007ff - lRam00007fffa47814f8;
    uVar14 = (uVar19 >> 0x26 ^ uVar19) * 0x200004000080001;
    uVar16 = (uVar14 << 0x35 | uVar14 >> 0xb) + 0xabe81fb593d60874;
    uVar14 = uVar16 >> 3;
    uVar19 = (uVar21 * -0x3a9eaee5f567ac8b ^ 0x7302190391efd183) * 0x4440000088000001;
    uVar11 = uVar19 ^ 0x349eae14687f51d3;
    uRam00007fffa47bb108 = uVar14 << 7 | (uVar16 << 0x3d | uVar14) >> 0x39;
    lRam00007fffa47bb110 = (uVar19 >> 0x3e ^ uVar11 >> 0x1f ^ uVar11) * -0x364ad0b01ddebb03;
    lVar15 = rdtsc();
    uVar14 = lVar15 * -0x5a46117eacb056b3 + 0xa4ddbde22237f202;
    while( true ) {
      uVar16 = uVar14 * -0x5a46117eacb056b3 + 0x1a2ef217;
      uVar20 = (uint32_t)(uVar16 >> 0x1b) ^ (uint32_t)(uVar16 >> 0x2d);
      uVar17 = (uint32_t)(uVar14 >> 0x1b) ^ (uint32_t)(uVar14 >> 0x2d);
      bVar12 = (uint8_t)(uVar14 >> 0x3b);
      bVar13 = (uint8_t)(uVar16 >> 0x3b);
      uVar14 = CONCAT44(uVar17 >> bVar12 | uVar17 << 0x20 - bVar12,
                        uVar20 >> bVar13 | uVar20 << 0x20 - bVar13);
      if (0x600 < uVar14) break;
      uVar14 = uVar16 * -0x5a46117eacb056b3 + 0x1a2ef217;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar14;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar14 * 0x1ffc007ff001ff + SUB168(auVar4 * ZEXT816(0xc007ff001ffc0080),8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = SUB168(auVar4 * ZEXT816(0xc007ff001ffc0080),0);
    lVar15 = ((uRam000000007ffe0320 & 0xffffffff) * (uint64_t)uRam000000007ffe0004 >> 0x18) +
             (uRam000000007ffe0320 >> 0x18 & 0xffffffff00) * (uint64_t)uRam000000007ffe0004 +
             SUB168(auVar5 * ZEXT816(0x801),8) +
             (uint64_t)CARRY8(SUB168(auVar6 * ZEXT816(0x801),8),SUB168(auVar5 * ZEXT816(0x801),0));
    uVar19 = lVar15 + 0x800;
    uVar11 = uVar19 >> 0x38 | (uVar19 & 0xff000000000000) >> 0x28 |
             (uVar19 & 0xff0000000000) >> 0x18 | (uVar19 & 0xff00000000) >> 8 |
             (uVar19 & 0xff000000) << 8 | (uVar19 & 0xff0000) << 0x18 | (uVar19 & 0xff00) << 0x28 |
             lVar15 << 0x38;
    uVar14 = uVar11 * -0x7ff001ffc007ff + 0x475ac0048bf4c7c1;
    uVar14 = uVar14 * 0x80000 ^ uVar14;
    uVar16 = (uVar14 << 0x26 ^ uVar14) + 0xe3090af9adff211f;
    uVar16 = (uVar16 * 0x2000 | uVar16 >> 0x33) ^ (uVar16 * 0x8000000 | uVar16 >> 0x25) ^ uVar16;
    uVar16 = (uVar16 << 0x36 | uVar16 >> 10) ^ (uVar16 << 0x1a | uVar16 >> 0x26) ^ uVar16;
    uVar16 = (uVar16 << 0x34 | uVar16 >> 0xc) ^ (uVar16 << 0x2c | uVar16 >> 0x14) ^ uVar16;
    uVar16 = (uVar16 << 0x18 | uVar16 >> 0x28) ^ (uVar16 << 0x28 | uVar16 >> 0x18) ^ uVar16;
    uVar14 = (uVar11 & 0xf0f0f0f0f0f0f0f) << 4 | uVar11 >> 4 & 0xf0f0f0f0f0f0f0f;
    uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333) * 4;
    lRam00007fffa4786448 = (uVar19 * 0x1000200040008001 ^ 0xf1e6ad7b9610a19a) * 0x7d122e5cfe9b0549;
    lRam00007fffa4786410 =
         ((uVar16 << 0x10 | uVar16 >> 0x30) ^ (uVar16 << 0x30 | uVar16 >> 0x10) ^ uVar16) -
         lRam00007fffa4781330;
    uVar11 = uVar19 * -0x6d6dedbdbfb7f7ff;
    uVar11 = (uVar19 * 0x4848090100200000 | uVar11 >> 0x2b) ^
             (uVar19 * 0x1202404008000000 | uVar11 >> 0x25) ^ uVar11;
    uVar11 = (uVar11 << 0x36 | uVar11 >> 10) ^ (uVar11 << 0x2a | uVar11 >> 0x16) ^ uVar11;
    uVar21 = uVar19 * -0x55987c557fe2616d ^ 0x4b8e115fe240f6db;
    uVar21 = (uVar21 << 0x1b | uVar21 >> 0x25) ^ (uVar21 << 0xf | uVar21 >> 0x31) ^ uVar21;
    uRam00007fffa4786420 = uVar19 * -0x25a8b810138d1449 + 0x482da8fb7ece4d1;
    uRam00007fffa4786420 = uRam00007fffa4786420 * 8 ^ uRam00007fffa4786420;
    uRam00007fffa4786420 = uRam00007fffa4786420 << 6 ^ uRam00007fffa4786420;
    uRam00007fffa4786420 = uRam00007fffa4786420 << 0xc ^ uRam00007fffa4786420;
    uRam00007fffa4786420 =
         uRam00007fffa4786420 << 0x18 ^ uRam00007fffa4786420 << 0x30 ^ uRam00007fffa4786420;
    uRam00007fffa4786420 = uRam00007fffa4786420 >> 3 ^ uRam00007fffa4786420;
    uRam00007fffa4786420 = uRam00007fffa4786420 >> 6 ^ uRam00007fffa4786420;
    uRam00007fffa4786420 = uRam00007fffa4786420 >> 0xc ^ uRam00007fffa4786420;
    uRam00007fffa4786420 =
         uRam00007fffa4786420 >> 0x18 ^ uRam00007fffa4786420 >> 0x30 ^ uRam00007fffa4786420;
    uVar11 = (uVar11 << 0x2c | uVar11 >> 0x14) ^ (uVar11 << 0x14 | uVar11 >> 0x2c) ^ uVar11;
    uVar14 = ((uVar14 >> 1 & 0x5555555555555555) + (uVar14 & 0x5555555555555555) * 2) *
             -0x36eddbb76fdfbf7f + 0xff16cadf14a61219;
    uVar11 = (uVar11 << 0x28 | uVar11 >> 0x18) ^ (uVar11 << 0x18 | uVar11 >> 0x28) ^ uVar11;
    uVar14 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
             (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
             (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 | (uVar14 & 0xff00) << 0x28 |
             uVar14 << 0x38;
    uVar16 = (uVar14 & 0xf0f0f0f0f0f0f0f) << 4 | uVar14 >> 4 & 0xf0f0f0f0f0f0f0f;
    uVar14 = ((uVar11 << 0x10 | uVar11 >> 0x30) ^ (uVar11 << 0x30 | uVar11 >> 0x10) ^ uVar11) *
             -0x6db6db6db6db6db7;
    uVar14 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
             (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
             (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 | (uVar14 & 0xff00) << 0x28 |
             uVar14 << 0x38;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f) << 4 | uVar14 >> 4 & 0xf0f0f0f0f0f0f0f;
    uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333) * 4;
    uVar14 = (uVar14 >> 1 & 0x5555555555555555) + (uVar14 & 0x5555555555555555) * 2;
    uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333) * 4;
    lRam00007fffa4786440 = (uVar14 * 0x80000 | uVar14 >> 0x2d) - 0xcfe38;
    uVar14 = uVar19 >> 3 ^ uVar19;
    uVar14 = uVar14 >> 6 ^ uVar14;
    uVar11 = uVar14 >> 0xc ^ uVar14;
    uVar11 = uVar11 >> 0x30 ^ uVar11 >> 0x18 ^ uVar11;
    uVar11 = uVar11 >> 0x1f ^ uVar19 >> 0x3e ^ uVar11;
    uVar21 = (uVar21 << 0x1e | uVar21 >> 0x22) ^ (uVar21 << 0x36 | uVar21 >> 10) ^ uVar21;
    uVar21 = (uVar21 << 0x2c | uVar21 >> 0x14) ^ (uVar21 << 0x3c | uVar21 >> 4) ^ uVar21;
    lRam00007fffa4786430 =
         ((uVar21 << 0x18 | uVar21 >> 0x28) ^ (uVar21 << 0x38 | uVar21 >> 8) ^ uVar21) *
         0x3ffffff8000001;
    lRam00007fffa4786418 = uVar19 * -0x11c9b7c1129425f1 + 0x7eebc8a074fd3be3;
    uVar14 = uVar14 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
             uVar11 << 0x38;
    uVar14 = uVar14 >> 7 ^ uVar14;
    uVar11 = uVar14 >> 0xe ^ uVar14;
    uVar11 = uVar11 >> 0x1c ^ uVar14 >> 0x38 ^ uVar11;
    lRam00007fffa4786428 = 0x17424595149c9e2f - (uVar11 << 0x25 | uVar11 >> 0x1b);
    lRam00007fffa4786438 = (uVar16 >> 1 & 0x5555555555555555) + (uVar16 & 0x5555555555555555) * 2;
    lVar15 = rdtsc();
    uVar14 = lVar15 * -0x5a46117eacb056b3 + 0xa4ddbde22237f202;
    do {
      uVar20 = (uint32_t)(uVar14 >> 0x1b) ^ (uint32_t)(uVar14 >> 0x2d);
      bVar13 = (uint8_t)(uVar14 >> 0x3b);
      uVar14 = uVar14 * -0x5a46117eacb056b3 + 0x1a2ef217;
      uVar17 = (uint32_t)(uVar14 >> 0x2d) ^ (uint32_t)(uVar14 >> 0x1b);
      bVar12 = (uint8_t)(uVar14 >> 0x3b);
      uVar14 = uVar14 * -0x5a46117eacb056b3 + 0x1a2ef217;
      uVar16 = CONCAT44(uVar20 >> bVar13 | uVar20 << 0x20 - bVar13,
                        uVar17 >> bVar12 | uVar17 << 0x20 - bVar12);
    } while (uVar16 < 0x601);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = SUB168(auVar7 * ZEXT816(0xc007ff001ffc0080),0);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar16 * 0x1ffc007ff001ff + SUB168(auVar7 * ZEXT816(0xc007ff001ffc0080),8);
    uVar19 = (uRam000000007ffe0320 >> 0x18 & 0xffffffff00) * (uint64_t)uRam000000007ffe0004 + 0x800
             + ((uRam000000007ffe0320 & 0xffffffff) * (uint64_t)uRam000000007ffe0004 >> 0x18) +
             SUB168(ZEXT816(0x801) * auVar9,8) +
             (uint64_t)CARRY8(SUB168(ZEXT816(0x801) * auVar9,0),SUB168(ZEXT816(0x801) * auVar8,8));
    uVar14 = (uVar19 & 0xf0f0f0f0f0f0f0f) << 4 | uVar19 >> 4 & 0xf0f0f0f0f0f0f0f;
    uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333) * 4;
    uRam00007fffa47bcf10 =
         ((uVar14 >> 1 & 0x5555555555555555) + (uVar14 & 0x5555555555555555) * 2) *
         0x72d012932d38e301 ^ uRam00007fffa4780fd8;
    uVar14 = uVar19 * 0x80 | uVar19 >> 0x39;
    uVar16 = uVar19 * 0x40000008000001 - lRam00007fffa47811d8;
    lRam00007fffa47bcf18 = (uVar16 << 0x3d | uVar16 >> 3) - 0x7fffa5851ee8;
    uVar16 = uVar19 >> 0xf ^ uVar19;
    lRam00007fffa47bcf20 =
         (uVar16 >> 0x1e ^ uVar19 >> 0x3c ^ uVar16) * -0x492db6db6edb6db7 + 0x5677199bab767331;
    uVar14 = (uVar14 * 0x1ffffc000080000 | uVar14 * -0x1ffffc00007ffff >> 0x2d) +
             lRam00007fffa4780bf0;
    uRam00007fffa47bcf28 = uVar14 << 0x25 | uVar14 >> 0x1b;
    uVar16 = uVar19 * -0xdefedfb2e80000 ^ uVar19 * 0x5937bfe4202409a3;
    uVar16 = uVar16 << 0x26 ^ uVar16;
    uVar16 = uVar16 >> 3 ^ uVar16;
    uVar16 = uVar16 >> 6 ^ uVar16;
    uVar16 = uVar16 >> 0xc ^ uVar16;
    uVar14 = ~(uVar19 << 0x39 | uVar19 >> 7);
    uVar14 = (uVar14 << 0x1f | uVar14 >> 0x21) ^ (uVar14 << 0x17 | uVar14 >> 0x29) ^ uVar14;
    uVar14 = uVar14 ^ (uVar14 << 0x3e | uVar14 >> 2) ^ (uVar14 << 0x2e | uVar14 >> 0x12);
    uVar11 = (uVar19 * 8 | uVar19 >> 0x3d) * -0x7efdfbf7efdfbf7f + 0x52a256012e6eb811;
    uVar11 = uVar11 >> 0x13 ^ uVar11;
    uVar16 = (uVar16 >> 0x18 ^ uVar16 >> 0x30 ^ uVar16) * 0x73aa21e005c96bc9 ^ uRam00007fffa4780fa0;
    uVar19 = (uVar19 >> 0x38 | (uVar19 & 0xff000000000000) >> 0x28 |
              (uVar19 & 0xff0000000000) >> 0x18 | (uVar19 & 0xff00000000) >> 8 |
              (uVar19 & 0xff000000) << 8 | (uVar19 & 0xff0000) << 0x18 | (uVar19 & 0xff00) << 0x28 |
             uVar19 << 0x38) + 0x986cadfc835c89f0;
    lRam00007fffa47bcf48 = (uVar19 << 0x31 | uVar19 >> 0xf) * -0x17fcffe004007ff;
    uRam00007fffa47bcf30 = uVar16 << 0x3d | uVar16 >> 3;
    uVar14 = (uVar14 << 0x3c | uVar14 >> 4) ^ (uVar14 << 0x1c | uVar14 >> 0x24) ^ uVar14;
    uRam00007fffa47bcf40 = uVar14 << 0x3e ^ uVar14 * 0x4000080000000 ^ uVar14 * 0x200004000080001;
    uVar14 = (int64_t)(&UNK_7fffa56fcd10 + (uVar11 >> 0x26 ^ uVar11)) * -0x1ffffc00007ffff ^
             0xd0187c824a78d832;
    uRam00007fffa47bcf38 =
         uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 | (uVar14 & 0xff0000000000) >> 0x18 |
         (uVar14 & 0xff00000000) >> 8 | (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 |
         (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
    uVar10 = 0;
  }
  else {
    (*(code *)&UNK_7fffa55b0300)(0x7fdf16c7);
    uVar10 = 2;
  }
  return uVar10;
}


// ============================================================================
// Function : FUN_7fffa52d78c0  |  RVA: 0xb678c0  |  Size: 826 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa52d7af0) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d7beb) */

void FUN_7fffa52d78c0(void)

{
  uint64_t uVar1;
  
  uRam00007fffa4785078 = 0xa2ee1dcfc41f3d59;
  uRam00007fffa4785080 = 0x7e1e0d3642c384bb;
  lRam00007fffa4785088 = lRam00007fffa4780b40 + 0x449312fc5c406eec;
  uVar1 = (uRam00007fffa4781558 ^ 0xbd0865ae58769620) * -0x67dcd534da5afd33;
  uRam00007fffa4785090 = uVar1 >> 0x1b ^ uVar1 >> 0x36 ^ uVar1;
  uRam00007fffa47850a8 = 0x169f98e6fcff40e4;
  uRam00007fffa47850a0 = 0;
  uRam00007fffa47850b0 = 0xa73992795871a4d6;
  uRam00007fffa4785098 = lRam00007fffa4781140 * -0x7ff001ffc007ff ^ 0x7fffa56bdf98;
  return;
}


// ============================================================================
// Function : FUN_7fffa52d7c04  |  RVA: 0xb67c04  |  Size: 1 bytes
// Callers  : FUN_7fffa52c4078@0xb54078
// Callees  : none
// ============================================================================
void FUN_7fffa52d7c04(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa52d8dd0  |  RVA: 0xb68dd0  |  Size: 60 bytes
// Callers  : FUN_7fffa5130768@0x9c0768, FUN_7fffa507ecd4@0x90ecd4, FUN_7fffa511e794@0x9ae794, FUN_7fffa4ee8e08@0x778e08, FUN_7fffa5426fbc@0xcb6fbc, FUN_7fffa56aab2c@0xf3ab2c, FUN_7fffa5605d30@0xe95d30, FUN_7fffa545124c@0xce124c
// Callees  : FUN_7fffa5002cfc@0x892cfc, FUN_7fffa4ed9184@0x769184
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa52d8dd0(int64_t param_1)

{
  uint32_t *puVar1;
  int iVar2;
  uint32_t uVar3;
  
  if ((param_1 != 0) &&
     (iVar2 = (*(code *)&DAT_7ff84ea23e50)(_DAT_7fffa4782170,0,param_1), iVar2 == 0)) {
    uVar3 = (*(code *)&DAT_7ff84ea18640)();
    uVar3 = FUN_7fffa5002cfc(uVar3);
    puVar1 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar1 = uVar3;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52d8e30  |  RVA: 0xb68e30  |  Size: 34 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa52d8e30(int64_t param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x4c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(uint32_t *)(param_1 + 0x48) = 0xffffffff;
    (*(code *)&DAT_7ff8504eba90)(param_1 + 0x10);
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa52d8e60  |  RVA: 0xb68e60  |  Size: 25 bytes
// Callers  : FUN_7fffa5400390@0xc90390, FUN_7fffa5267c30@0xaf7c30
// Callees  : FUN_7fffa5102120@0x992120, FUN_7fffa55ce2a0@0xe5e2a0
// ============================================================================
uint8_t FUN_7fffa52d8e60(char param_1)

{
  if (param_1 == '\0') {
    FUN_7fffa5102120();
    FUN_7fffa55ce2a0();
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa52d8e80  |  RVA: 0xb68e80  |  Size: 531 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa52d8fb6) */

void FUN_7fffa52d8e80(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar2 = 0;
  bRam00007fffa47baad5 = '\0';
  uRam00007fffa47baaea = 0;
  uRam00007fffa47baaf2 = 0;
  uRam00007fffa47baada = 0;
  uRam00007fffa47baae2 = 0;
  uRam00007fffa47baafd = 0;
  uVar1 = rdtsc();
  lVar3 = (uVar1 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar1)) * 0x82388eeabe2c733 + 0xb;
  do {
    lVar3 = lVar3 * 0x82388eeabe2c733 + 0xb;
    *(char *)(lVar2 + 0x7fffa47baad2) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0x82388eeabe2c733 + 0xb;
    *(char *)(lVar2 + 0x7fffa47baad3) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0x82388eeabe2c733 + 0xb;
    *(char *)(lVar2 + 0x7fffa47baad4) = (char)((uint64_t)lVar3 >> 0x20);
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x33);
  bRam00007fffa47baad5 = bRam00007fffa47baad5 + 1 & 7;
  *(uint32_t *)((uint64_t)bRam00007fffa47baad5 * 4 + 0x7fffa47baada) =
       uRam00007fffa47baafd ^ 0xaf5a2b01;
  return;
}


// ============================================================================
// Function : FUN_7fffa52d9094  |  RVA: 0xb69094  |  Size: 74 bytes
// Callers  : FUN_7fffa55ca84c@0xe5a84c, FUN_7fffa55d6410@0xe66410
// Callees  : _guard_dispatch_icall@0xf30810, FUN_7fffa5488ca4@0xd18ca4
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

uint64_t FUN_7fffa52d9094(void)

{
  code *pcVar1;
  uint64_t uVar2;
  
  if (g_api_KERNEL32_DLL_AreFileApisANSI == (uint8_t *)0xffffffffffffffff) {
    return 1;
  }
  pcVar1 = (code *)g_api_KERNEL32_DLL_AreFileApisANSI;
  if ((g_api_KERNEL32_DLL_AreFileApisANSI == (uint8_t *)0x0) &&
     (pcVar1 = (code *)FUN_7fffa5488ca4(0,"AreFileApisANSI",&UNK_7fffa56b3e78,&UNK_7fffa56b3e7c),
     pcVar1 == (code *)0x0)) {
    return 1;
  }
  uVar2 = (*pcVar1)();
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa52d90e0  |  RVA: 0xb690e0  |  Size: 514 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52d90e0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  uVar3 = 0;
  bRam00007fffa478475b = '\0';
  uRam00007fffa478478e = 0;
  uRam00007fffa4784796 = 0;
  uRam00007fffa478477e = 0;
  uRam00007fffa4784786 = 0;
  uRam00007fffa478476e = 0;
  uRam00007fffa4784776 = 0;
  uRam00007fffa478475e = 0;
  uRam00007fffa4784766 = 0;
  uRam00007fffa478479e = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0x7fff,(int)uVar1)) * 0x966d4c4a530ac3f + 1;
  while( true ) {
    lVar2 = lVar2 * 0x966d4c4a530ac3f + 1;
    *(char *)(uVar3 + 0x7fffa478474f) = (char)((uint64_t)lVar2 >> 0x20);
    lVar2 = lVar2 * 0x966d4c4a530ac3f + 1;
    *(char *)(uVar3 + 0x7fffa4784750) = (char)((uint64_t)lVar2 >> 0x20);
    lVar2 = lVar2 * 0x966d4c4a530ac3f + 1;
    *(char *)(uVar3 + 0x7fffa4784751) = (char)((uint64_t)lVar2 >> 0x20);
    lVar2 = lVar2 * 0x966d4c4a530ac3f + 1;
    *(char *)((uVar3 | 3) + 0x7fffa478474f) = (char)((uint64_t)lVar2 >> 0x20);
    if (uVar3 == 0x54) break;
    uVar3 = uVar3 + 4;
  }
  bRam00007fffa478475b = bRam00007fffa478475b + 1 & 7;
  *(uint64_t *)((uint64_t)bRam00007fffa478475b * 8 + 0x7fffa478475e) = uRam00007fffa478479e;
  return;
}


// ============================================================================
// Function : FUN_7fffa52d92f0  |  RVA: 0xb692f0  |  Size: 617 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52d92f0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  bRam00007fffa4785ab6 = 0;
  uRam00007fffa4785ad9 = 0;
  uRam00007fffa4785ae1 = 0;
  uRam00007fffa4785ac9 = 0;
  uRam00007fffa4785ad1 = 0;
  uRam00007fffa4785ab9 = 0;
  uRam00007fffa4785ac1 = 0;
  uRam00007fffa4785ae9 = 0;
  uRam00007fffa4785af6 = 0;
  uVar3 = rdtsc();
  lVar1 = (uVar3 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar3)) * 0x8b8cd5afb81c73a;
  uVar3 = 0;
  while( true ) {
    lVar1 = lVar1 * 0x8b8cd5afb81c73a + 0x8b8cd5afb81c73a;
    *(char *)(uVar3 + 0x7fffa4785aa8) = (char)((uint64_t)lVar1 >> 0x20);
    if (uVar3 == 100) break;
    lVar2 = lVar1 * 0x8b8cd5afb81c73a + 0x8b8cd5afb81c73a;
    lVar4 = lVar2 * 0x8b8cd5afb81c73a + 0x8b8cd5afb81c73a;
    lVar1 = lVar4 * 0x8b8cd5afb81c73a + 0x8b8cd5afb81c73a;
    *(char *)(uVar3 + 0x7fffa4785aa9) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(uVar3 + 0x7fffa4785aab) = (char)((uint64_t)lVar1 >> 0x20);
    *(char *)((uVar3 | 2) + 0x7fffa4785aa8) = (char)((uint64_t)lVar4 >> 0x20);
    uVar3 = uVar3 + 4;
  }
  uVar3 = (uint64_t)((uint32_t)bRam00007fffa4785ab6 * 0x24924925 + 0x24924925) * 7;
  *(uint64_t *)((uVar3 >> 0x20) * 8 + 0x7fffa4785ab9) = uRam00007fffa4785af6;
  bRam00007fffa4785ab6 = (char)(uVar3 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa52d9560  |  RVA: 0xb69560  |  Size: 230 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52d9560(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  uint32_t in_EAX;
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t in_XMM4_Qa;
  
  param_2 = param_2 * 8 ^ param_2;
  param_2 = param_2 << 6 ^ param_2;
  uVar2 = (in_XMM4_Qa ^ 0x611bbe5a) + 0xfeffffffefffffff;
  if ((uint64_t)((in_EAX | 1) * 0x2b0714fd) <
      (uint64_t)(int64_t)(int)((0xd7028737 - in_EAX) * 0x20000 | 0xd7028737 - in_EAX >> 0xf)) {
    uVar2 = (in_XMM4_Qa ^ 0x611bbe5a) * 0x100000010000001;
  }
  param_2 = param_2 << 0xc ^ param_2;
  uVar1 = uVar2 ^ 0xffc0000000000001;
  if ((in_EAX | 1) * 0x5b05a397 == 0x4375fd77) {
    uVar1 = uVar2 - (uVar2 << 0x36);
  }
  (*(code *)*param_3)(param_2 << 0x30 ^ param_2 << 0x18 ^ param_2,uVar1);
  return;
}


// ============================================================================
// Function : FUN_7fffa52d9650  |  RVA: 0xb69650  |  Size: 18057 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52d9650(void) {
    /* +0xb69650 */ __asm { PUSH RBP }
    /* +0xb69651 */ __asm { PUSH R14 }
    /* +0xb69653 */ __asm { PUSH R13 }
    /* +0xb69655 */ __asm { PUSH RDI }
    /* +0xb69656 */ __asm { PUSH RSI }
    /* +0xb69657 */ __asm { PUSH RBX }
    /* +0xb69658 */ __asm { PUSH R12 }
    /* +0xb6965a */ __asm { PUSH R15 }
    /* +0xb6965c */ __asm { SUB RSP,0x398 }
    /* +0xb69663 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xb6966b */ __asm { MOVDQA xmmword ptr [RBP + 0x300],XMM12 }
    /* +0xb69674 */ __asm { MOVDQA xmmword ptr [RBP + 0x2f0],XMM15 }
    /* +0xb6967d */ __asm { MOVDQA xmmword ptr [RBP + 0x2e0],XMM14 }
    /* +0xb69686 */ __asm { MOVDQA xmmword ptr [RBP + 0x2d0],XMM11 }
    /* +0xb6968f */ __asm { MOVAPS xmmword ptr [RBP + 0x2c0],XMM7 }
    /* +0xb69696 */ __asm { MOVDQA xmmword ptr [RBP + 0x2b0],XMM8 }
    /* +0xb6969f */ __asm { MOVDQA xmmword ptr [RBP + 0x2a0],XMM6 }
    /* +0xb696a7 */ __asm { MOVDQA xmmword ptr [RBP + 0x290],XMM13 }
    /* +0xb696b0 */ __asm { MOVDQA xmmword ptr [RBP + 0x280],XMM10 }
    /* +0xb696b9 */ __asm { MOVAPS xmmword ptr [RBP + 0x270],XMM9 }
    /* +0xb696c1 */ __asm { MOV qword ptr [RBP + 0x268],-0x2 }
    /* +0xb696cc */ __asm { MOV R14,R11 }
    /* +0xb696cf */ __asm { MOV RDI,qword ptr [RBP + 0x380] }
    /* +0xb696d6 */ __asm { MOV R10W,0x3903 }
    /* +0xb696db */ __asm { MOV RCX,R8 }
    /* +0xb696de */ __asm { ROL RCX,0x17 }
    /* +0xb696e2 */ __asm { MOVD XMM9,EDI }
    /* +0xb696e7 */ __asm { MOVD XMM4,R10D }
    /* +0xb696ec */ __asm { MOV R10,R8 }
    /* +0xb696ef */ __asm { ROL R10,0x23 }
    /* +0xb696f3 */ __asm { MOV R11D,0xd6cc1734 }
    /* +0xb696f9 */ __asm { ADD R11,RDX }
    /* +0xb696fc */ __asm { MOV R9,R11 }
    /* +0xb696ff */ __asm { ROL R9,0x17 }
    /* +0xb69703 */ __asm { MOVQ XMM3,R11 }
    /* +0xb69708 */ __asm { ROL R11,0x3 }
    /* +0xb6970c */ __asm { XOR R11,R9 }
    /* +0xb6970f */ __asm { ROL R8,0x19 }
    /* +0xb69713 */ __asm { XOR R8,R10 }
    /* +0xb69716 */ __asm { XOR R8,RCX }
    /* +0xb69719 */ __asm { MOV RCX,R8 }
    /* +0xb6971c */ __asm { ROL RCX,0x18 }
    /* +0xb69720 */ __asm { MOV R10,R8 }
    /* +0xb69723 */ __asm { ROL R10,0x4 }
    /* +0xb69727 */ __asm { MOVQ XMM1,R10 }
    /* +0xb6972c */ __asm { PSUBW XMM4,XMM9 }
    /* +0xb69731 */ __asm { MOVD EDX,XMM4 }
    /* +0xb69735 */ __asm { MOVQ XMM4,R11 }
    /* +0xb6973a */ __asm { PXOR XMM4,XMM3 }
    /* +0xb6973e */ __asm { MOVQ XMM3,RCX }
    /* +0xb69743 */ __asm { MOVQ RCX,XMM4 }
    /* +0xb69748 */ __asm { MOV R10,RCX }
    /* +0xb6974b */ __asm { ROL R10,0x6 }
    /* +0xb6974f */ __asm { MOV R11,RCX }
    /* +0xb69752 */ __asm { ROL R11,0x2e }
    /* +0xb69756 */ __asm { XOR R11,R10 }
    /* +0xb69759 */ __asm { XOR R11,RCX }
    /* +0xb6975c */ __asm { MOV RCX,R11 }
    /* +0xb6975f */ __asm { ROL RCX,0xc }
    /* +0xb69763 */ __asm { MOV R10,R11 }
    /* +0xb69766 */ __asm { ROL R10,0x1c }
    /* +0xb6976a */ __asm { XOR R10,RCX }
    /* +0xb6976d */ __asm { XOR R10,R11 }
    /* +0xb69770 */ __asm { MOV RCX,R10 }
    /* +0xb69773 */ __asm { ROL RCX,0x38 }
    /* +0xb69777 */ __asm { PXOR XMM3,XMM1 }
    /* +0xb6977b */ __asm { MOV R11,R10 }
    /* +0xb6977e */ __asm { ROL R11,0x18 }
    /* +0xb69782 */ __asm { XOR R11,RCX }
    /* +0xb69785 */ __asm { XOR R11,R10 }
    /* +0xb69788 */ __asm { MOVQ RCX,XMM3 }
    /* +0xb6978d */ __asm { XOR RCX,R8 }
    /* +0xb69790 */ __asm { MOV R10,RCX }
    /* +0xb69793 */ __asm { ROL R10,0x30 }
    /* +0xb69797 */ __asm { MOV R9,RCX }
    /* +0xb6979a */ __asm { ROL R9,0x8 }
    /* +0xb6979e */ __asm { XOR R9,R10 }
    /* +0xb697a1 */ __asm { MOV R8,0x200004000080001 }
    /* +0xb697ab */ __asm { XOR R9,RCX }
    /* +0xb697ae */ __asm { MOV RCX,R9 }
    /* +0xb697b1 */ __asm { ROL RCX,0x20 }
    /* +0xb697b5 */ __asm { IMUL R8,R11 }
    /* +0xb697b9 */ __asm { MOV R10,R9 }
    /* +0xb697bc */ __asm { ROL R10,0x10 }
    /* +0xb697c0 */ __asm { XOR R10,RCX }
    /* +0xb697c3 */ __asm { XOR R10,R9 }
    /* +0xb697c6 */ __asm { ROL R10,0x20 }
    /* +0xb697ca */ __asm { MOV qword ptr [RBP + 0xe8],R8 }
    /* +0xb697d1 */ __asm { MOV R11,0x1111111111111111 }
    /* +0xb697db */ __asm { IMUL R11,R10 }
    /* +0xb697df */ __asm { IMUL EDX,EDX,0x2e5 }
    /* +0xb697e5 */ __asm { MOVZX R8D,DX }
    /* +0xb697e9 */ __asm { MOV EDX,0x84ff59c0 }
    /* +0xb697ee */ __asm { MOV R10D,0x8001fc27 }
    /* +0xb697f4 */ __asm { SUB R10D,EDX }
    /* +0xb697f7 */ __asm { IMUL EBX,R10D,0x172ed07d }
    /* +0xb697fe */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0xb69802 */ __asm { MOV R10D,0x3949bdbd }
    /* +0xb69808 */ __asm { XOR R10,qword ptr [RCX + 0x18] }
    /* +0xb6980c */ __asm { MOV qword ptr [RBP + 0x140],RAX }
    /* +0xb69813 */ __asm { MOV RCX,-0x1146d7b96f3e8b27 }
    /* +0xb6981d */ __asm { IMUL RCX,R10 }
    /* +0xb69821 */ __asm { MOV R10,-0x41e2fc536093508e }
    /* +0xb6982b */ __asm { ADD R10,RCX }
    /* +0xb6982e */ __asm { MOV RCX,-0x7e6eaaacf01ec36 }
    /* +0xb69838 */ __asm { CMP R10,RCX }
    /* +0xb6983b */ __asm { NOP }
    /* +0xb6983c */ __asm { NOP }
    /* +0xb6983d */ __asm { NOP }
    /* +0xb6983e */ __asm { NOP }
    /* +0xb6983f */ __asm { NOP }
    /* +0xb69840 */ __asm { NOP }
    /* +0xb69841 */ __asm { NOP }
    /* +0xb69842 */ __asm { NOP }
    /* +0xb69843 */ __asm { NOP }
    /* +0xb69844 */ __asm { RDTSC }
    /* +0xb69846 */ __asm { SHL RDX,0x20 }
    /* +0xb6984a */ __asm { OR RDX,RAX }
    /* +0xb6984d */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0xb69857 */ __asm { IMUL RDX,RCX }
    /* +0xb6985b */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xb69865 */ __asm { ADD RDX,RCX }
    /* +0xb69868 */ __asm { MOV RCX,RDX }
    /* +0xb6986b */ __asm { SHR RCX,0x3b }
    /* +0xb6986f */ __asm { MOV R8,RDX }
    /* +0xb69872 */ __asm { SHR R8,0x1b }
    /* +0xb69876 */ __asm { SHR RDX,0x2d }
    /* +0xb6987a */ __asm { XOR EDX,R8D }
    /* +0xb6987d */ __asm { ROR EDX,CL }
    /* +0xb6987f */ __asm { AND EDX,0x3 }
    /* +0xb69882 */ __asm { CMP EDX,0x2 }
    /* +0xb69885 */ __asm { MOV qword ptr [RBP + 0x100],R11 }
    /* +0xb6988c */ __asm { JNC 0x7fffa52d9a0b }
    /* +0xb69892 */ __asm { CMP EDX,0x1 }
    /* +0xb69895 */ __asm { JZ 0x7fffa52d9b51 }
    /* +0xb6989b */ __asm { MOV R11D,0xfcffe8 }
    /* +0xb698a1 */ __asm { MOV R9,R11 }
    /* +0xb698a4 */ __asm { ROL R9,0x1c }
    /* +0xb698a8 */ __asm { MOV RCX,-0x2c5edc767ef34f95 }
    /* +0xb698b2 */ __asm { IMUL RCX,R9 }
    /* +0xb698b6 */ __asm { MOV R9,0x0 }
    /* +0xb698bd */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xb698c4 */ __asm { NOP }
    /* +0xb698c6 */ __asm { MOV R10,0x5435b9f19ea09fc }
    /* +0xb698d0 */ __asm { CMP RCX,R10 }
    /* +0xb698d3 */ __asm { NOP }
    /* +0xb698d4 */ __asm { NOP }
    /* +0xb698d5 */ __asm { NOP }
    /* +0xb698d6 */ __asm { NOP }
    /* +0xb698d7 */ __asm { NOP }
    /* +0xb698d8 */ __asm { NOP }
    /* +0xb698d9 */ __asm { NOP }
    /* +0xb698da */ __asm { NOP }
    /* +0xb698db */ __asm { NOP }
    /* +0xb698dc */ __asm { NOP }
    /* +0xb698dd */ __asm { NOP }
    /* +0xb698de */ __asm { NOP }
    /* +0xb698df */ __asm { NOP }
    /* +0xb698e0 */ __asm { MOV DX,0x725b }
    /* +0xb698e4 */ __asm { IMUL EDX,EDX,0x63d9 }
    /* +0xb698ea */ __asm { SUB EDX,EDI }
    /* +0xb698ec */ __asm { MOVZX EDX,DX }
    /* +0xb698ef */ __asm { MOV R10D,dword ptr [R11 + 0x7f010258] }
    /* +0xb698f6 */ __asm { AND R10D,0x1 }
    /* +0xb698fa */ __asm { CMP R10D,EDX }
    /* +0xb698fd */ __asm { JNZ 0x7fffa52d9f2a }
    /* +0xb69903 */ __asm { RDTSC }
    /* +0xb69905 */ __asm { SHL RDX,0x20 }
    /* +0xb69909 */ __asm { OR RDX,RAX }
    /* +0xb6990c */ __asm { MOV RCX,0x7facc0f7a00541bd }
    /* +0xb69916 */ __asm { IMUL RCX,RDX }
    /* +0xb6991a */ __asm { MOV DX,0xbea9 }
    /* +0xb6991e */ __asm { MOV R10D,0xffffbf09 }
    /* +0xb69924 */ __asm { SUB R10D,EDX }
    /* +0xb69927 */ __asm { MOVZX EAX,R10W }
    /* +0xb6992b */ __asm { MOV R9,-0x4efbf45503e9f3f2 }
    /* +0xb69935 */ __asm { ADD R9,RCX }
    /* +0xb69938 */ __asm { MOV RCX,R9 }
    /* +0xb6993b */ __asm { SHR RCX,0x3b }
    /* +0xb6993f */ __asm { MOV R8,R9 }
    /* +0xb69942 */ __asm { SHR R8,0x1b }
    /* +0xb69946 */ __asm { SHR R9,0x2d }
    /* +0xb6994a */ __asm { XOR R8D,R9D }
    /* +0xb6994d */ __asm { ROR R8D,CL }
    /* +0xb69950 */ __asm { MOV RCX,qword ptr GS:[RAX] }
    /* +0xb69954 */ __asm { MOV R10D,0x17347790 }
    /* +0xb6995a */ __asm { ADD R10,qword ptr [RCX + 0x30] }
    /* +0xb6995e */ __asm { ROL R10,0x23 }
    /* +0xb69962 */ __asm { MOV RCX,-0x2e77c792ab2afadd }
    /* +0xb6996c */ __asm { IMUL RCX,R10 }
    /* +0xb69970 */ __asm { MOV R10,-0x2dbbb6af811257ef }
    /* +0xb6997a */ __asm { CMP RCX,R10 }
    /* +0xb6997d */ __asm { NOP }
    /* +0xb6997e */ __asm { NOP }
    /* +0xb6997f */ __asm { NOP }
    /* +0xb69980 */ __asm { NOP }
    /* +0xb69981 */ __asm { NOP }
    /* +0xb69982 */ __asm { NOP }
    /* +0xb69983 */ __asm { NOP }
    /* +0xb69984 */ __asm { NOP }
    /* +0xb69985 */ __asm { NOP }
    /* +0xb69986 */ __asm { CMP R8D,0x1041c7 }
    /* +0xb6998d */ __asm { NOP }
    /* +0xb6998e */ __asm { NOP }
    /* +0xb6998f */ __asm { NOP }
    /* +0xb69990 */ __asm { NOP }
    /* +0xb69991 */ __asm { NOP }
    /* +0xb69992 */ __asm { NOP }
    /* +0xb69993 */ __asm { NOP }
    /* +0xb69994 */ __asm { NOP }
    /* +0xb69995 */ __asm { NOP }
    /* +0xb69996 */ __asm { NOP }
    /* +0xb69997 */ __asm { NOP }
    /* +0xb69998 */ __asm { NOP }
    /* +0xb69999 */ __asm { NOP }
    /* +0xb6999a */ __asm { NOP }
    /* +0xb6999b */ __asm { NOP }
    /* +0xb6999c */ __asm { NOP }
    /* +0xb6999d */ __asm { NOP }
    /* +0xb69a0b */ __asm { CMP EDX,0x3 }
    /* +0xb69a0e */ __asm { JNZ 0x7fffa52d9e74 }
    /* +0xb69a14 */ __asm { MOV EDX,0x8b14765c }
    /* +0xb69a19 */ __asm { IMUL EDX,EDX,-0x8fdd26b }
    /* +0xb69a1f */ __asm { SUB EDX,EDI }
    /* +0xb69a21 */ __asm { ADD EDX,0x9990794d }
    /* +0xb69a27 */ __asm { MOVD XMM4,EDX }
    /* +0xb69a2b */ __asm { LEA R11,[0x7fffa47b570a] }
    /* +0xb69a32 */ __asm { MOVQ XMM3,R11 }
    /* +0xb69a37 */ __asm { MOV EDX,0x7fbcfa7d }
    /* +0xb69a3c */ __asm { ADD EDX,EDI }
    /* +0xb69a3e */ __asm { ROL EDX,0x5 }
    /* +0xb69a41 */ __asm { MOVD XMM1,EDX }
    /* +0xb69a45 */ __asm { PCMPEQD XMM0,XMM0 }
    /* +0xb69a49 */ __asm { PXOR XMM0,XMM3 }
    /* +0xb69a4d */ __asm { PXOR XMM0,XMM1 }
    /* +0xb69a51 */ __asm { PADDQ XMM0,XMM4 }
    /* +0xb69a55 */ __asm { MOVQ RCX,XMM0 }
    /* +0xb69a5a */ __asm { MOV R10,0x26e33858ba271e6 }
    /* +0xb69a64 */ __asm { CMP RCX,R10 }
    /* +0xb69a67 */ __asm { NOP }
    /* +0xb69a68 */ __asm { NOP }
    /* +0xb69a69 */ __asm { NOP }
    /* +0xb69a6a */ __asm { NOP }
    /* +0xb69a6b */ __asm { NOP }
    /* +0xb69a6c */ __asm { NOP }
    /* +0xb69a6d */ __asm { NOP }
    /* +0xb69a6e */ __asm { NOP }
    /* +0xb69a6f */ __asm { NOP }
    /* +0xb69a70 */ __asm { NOP }
    /* +0xb69a71 */ __asm { NOP }
    /* +0xb69a72 */ __asm { NOP }
    /* +0xb69a73 */ __asm { NOP }
    /* +0xb69a74 */ __asm { NOP }
    /* +0xb69a75 */ __asm { MOV EDX,0x251e7737 }
    /* +0xb69a7a */ __asm { MOVZX R9D,uint8_t ptr [R11 + 0x6f83] }
    /* +0xb69a82 */ __asm { MOVZX ECX,uint8_t ptr [R11 + R9*0x4 + 0x6f93] }
    /* +0xb69a8b */ __asm { MOV R8D,EDI }
    /* +0xb69a8e */ __asm { OR R8D,0x1 }
    /* +0xb69a92 */ __asm { IMUL R8D,EDX }
    /* +0xb69a96 */ __asm { ROL CL,0x4 }
    /* +0xb69a99 */ __asm { MOV uint8_t ptr [RBP + -0x40],CL }
    /* +0xb69a9c */ __asm { MOVZX ECX,uint8_t ptr [R11 + R9*0x4 + 0x6f94] }
    /* +0xb69aa5 */ __asm { ROL CL,0x4 }
    /* +0xb69aa8 */ __asm { MOV uint8_t ptr [RBP + -0x3f],CL }
    /* +0xb69aab */ __asm { MOVZX ECX,uint8_t ptr [R11 + R9*0x4 + 0x6f95] }
    /* +0xb69ab4 */ __asm { ROL CL,0x4 }
    /* +0xb69ab7 */ __asm { MOV uint8_t ptr [RBP + -0x3e],CL }
    /* +0xb69aba */ __asm { MOVZX ECX,uint8_t ptr [R11 + R9*0x4 + 0x6f96] }
    /* +0xb69ac3 */ __asm { ROL CL,0x4 }
    /* +0xb69ac6 */ __asm { ADD R8D,0xeb84d38f }
    /* +0xb69acd */ __asm { MOV uint8_t ptr [RBP + -0x3d],CL }
    /* +0xb69ad0 */ __asm { MOV EDX,dword ptr [R8] }
    /* +0xb69ad3 */ __asm { MOV R10D,0x65e8ce72 }
    /* +0xb69ad9 */ __asm { XOR R10D,dword ptr [RBP + -0x40] }
    /* +0xb69add */ __asm { BT R10D,EDX }
    /* +0xb69ae1 */ __asm { JNC 0x7fffa52da16e }
    /* +0xb69ae7 */ __asm { LEA R11,[0x7fffa47bf4d7] }
    /* +0xb69aee */ __asm { MOV RCX,0x70e567f4c1d3a3bc }
    /* +0xb69af8 */ __asm { CMP R11,RCX }
    /* +0xb69afb */ __asm { NOP }
    /* +0xb69afc */ __asm { NOP }
    /* +0xb69afd */ __asm { NOP }
    /* +0xb69afe */ __asm { NOP }
    /* +0xb69aff */ __asm { NOP }
    /* +0xb69b00 */ __asm { NOP }
    /* +0xb69b01 */ __asm { NOP }
    /* +0xb69b02 */ __asm { NOP }
    /* +0xb69b03 */ __asm { NOP }
    /* +0xb69b04 */ __asm { NOP }
    /* +0xb69b05 */ __asm { MOV DX,0xbb7c }
    /* +0xb69b09 */ __asm { MOV qword ptr [RBP + -0x40],R9 }
    /* +0xb69b0d */ __asm { IMUL EDX,EDX,-0xc61 }
    /* +0xb69b13 */ __asm { MOV ECX,EDI }
    /* +0xb69b15 */ __asm { ROR DX,CL }
    /* +0xb69b18 */ __asm { MOV R10W,0x85df }
    /* +0xb69b1d */ __asm { IMUL EDX,EDX,-0x17e5 }
    /* +0xb69b23 */ __asm { MOVZX R8D,DX }
    /* +0xb69b27 */ __asm { MOVD XMM4,EDI }
    /* +0xb69b2b */ __asm { ADD R10D,0xa32 }
    /* +0xb69b32 */ __asm { ROL R10W,0x1 }
    /* +0xb69b36 */ __asm { MOVD XMM3,R10D }
    /* +0xb69b3b */ __asm { PXOR XMM3,XMM4 }
    /* +0xb69b3f */ __asm { PEXTRW R10D,XMM3,0x0 }
    /* +0xb69b45 */ __asm { MOV EAX,dword ptr [R11 + -0x253b] }
    /* +0xb69b4c */ __asm { JMP 0x7fffa52da54c }
    /* +0xb69b51 */ __asm { MOV R11D,0xdc94f64d }
    /* +0xb69b57 */ __asm { MOVQ XMM4,R11 }
    /* +0xb69b5c */ __asm { MOV R10,-0x3753ce70bc9fe6b3 }
    /* +0xb69b66 */ __asm { ADD R10,0x273a7350 }
    /* +0xb69b6d */ __asm { MOV ECX,EDI }
    /* +0xb69b6f */ __asm { ROR R10,CL }
    /* +0xb69b72 */ __asm { MOVQ XMM3,R10 }
    /* +0xb69b77 */ __asm { PXOR XMM3,XMM4 }
    /* +0xb69b7b */ __asm { MOVQ RCX,XMM3 }
    /* +0xb69b80 */ __asm { CMP RCX,-0x1 }
    /* +0xb69b84 */ __asm { NOP }
    /* +0xb69b85 */ __asm { NOP }
    /* +0xb69b86 */ __asm { NOP }
    /* +0xb69b87 */ __asm { NOP }
    /* +0xb69b88 */ __asm { NOP }
    /* +0xb69b89 */ __asm { NOP }
    /* +0xb69b8a */ __asm { NOP }
    /* +0xb69b8c */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xb69b93 */ __asm { MOV R9,0x0 }
    /* +0xb69b9a */ __asm { MOV ECX,0xc4d82023 }
    /* +0xb69b9f */ __asm { SUB ECX,EDI }
    /* +0xb69ba1 */ __asm { MOV R10,qword ptr [R11 + -0x5c96f645] }
    /* +0xb69ba8 */ __asm { RDTSC }
    /* +0xb69baa */ __asm { MOV R9,RDX }
    /* +0xb69bad */ __asm { SHL R9,0x20 }
    /* +0xb69bb1 */ __asm { OR R9,RAX }
    /* +0xb69bb4 */ __asm { MOV R11,0x6d74f0cf0a97f6bb }
    /* +0xb69bbe */ __asm { MOV RAX,R10 }
    /* +0xb69bc1 */ __asm { MUL R11 }
    /* +0xb69bc4 */ __asm { MOV R11,RDX }
    /* +0xb69bc7 */ __asm { MOV R8D,0x1461602 }
    /* +0xb69bcd */ __asm { MOV RAX,R10 }
    /* +0xb69bd0 */ __asm { MUL R8 }
    /* +0xb69bd3 */ __asm { IMUL R8D,ECX,-0x65c5cc81 }
    /* +0xb69bda */ __asm { ADD RAX,R11 }
    /* +0xb69bdd */ __asm { ADC RDX,0x0 }
    /* +0xb69be1 */ __asm { AND EDX,0x1 }
    /* +0xb69be4 */ __asm { OR R8,RDX }
    /* +0xb69be7 */ __asm { JZ 0x7fffa52d9f8d }
    /* +0xb69bed */ __asm { MOV RCX,-0x4a9b10dd1385131b }
    /* +0xb69bf7 */ __asm { IMUL R9,RCX }
    /* +0xb69bfb */ __asm { MOV EDX,0xfdbfaed }
    /* +0xb69c00 */ __asm { MOVD XMM4,EDX }
    /* +0xb69c04 */ __asm { PXOR XMM4,XMM9 }
    /* +0xb69c09 */ __asm { MOVD EDX,XMM4 }
    /* +0xb69c0d */ __asm { MOV R8,0x79cb8b81172531e6 }
    /* +0xb69c17 */ __asm { ADD R8,R9 }
    /* +0xb69c1a */ __asm { MOV RAX,R8 }
    /* +0xb69c1d */ __asm { SHR RAX,0x1b }
    /* +0xb69c21 */ __asm { MOV RCX,R8 }
    /* +0xb69c24 */ __asm { SHR RCX,0x3b }
    /* +0xb69c28 */ __asm { SHR R8,0x2d }
    /* +0xb69c2c */ __asm { XOR R8D,EAX }
    /* +0xb69c2f */ __asm { ROR R8D,CL }
    /* +0xb69c32 */ __asm { ADD EDX,0xcc34554c }
    /* +0xb69c38 */ __asm { MOV dword ptr [RBP + -0x40],EDX }
    /* +0xb69c3b */ __asm { MOV EDX,dword ptr [RBP + -0x40] }
    /* +0xb69c3e */ __asm { CMP EDX,0x8f8e6f55 }
    /* +0xb69c44 */ __asm { NOP }
    /* +0xb69c45 */ __asm { NOP }
    /* +0xb69c46 */ __asm { NOP }
    /* +0xb69c47 */ __asm { NOP }
    /* +0xb69c48 */ __asm { PUSHFQ }
    /* +0xb69c49 */ __asm { POP R9 }
    /* +0xb69c4b */ __asm { TEST R9D,0x100 }
    /* +0xb69c52 */ __asm { NOP }
    /* +0xb69c53 */ __asm { NOP }
    /* +0xb69c54 */ __asm { NOP }
    /* +0xb69c55 */ __asm { NOP }
    /* +0xb69c56 */ __asm { NOP }
    /* +0xb69c57 */ __asm { NOP }
    /* +0xb69c58 */ __asm { NOP }
    /* +0xb69c59 */ __asm { NOP }
    /* +0xb69c5a */ __asm { NOP }
    /* +0xb69c5b */ __asm { NOP }
    /* +0xb69c5c */ __asm { NOP }
    /* +0xb69c5d */ __asm { NOP }
    /* +0xb69c5e */ __asm { NOP }
    /* +0xb69c5f */ __asm { NOP }
    /* +0xb69c60 */ __asm { NOP }
    /* +0xb69c61 */ __asm { NOP }
    /* +0xb69c62 */ __asm { NOP }
    /* +0xb69d33 */ __asm { NOP }
    /* +0xb69d35 */ __asm { MOV R11,0x0 }
    /* +0xb69d3c */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xb69d43 */ __asm { MOV DX,0x782e }
    /* +0xb69d47 */ __asm { SUB EDX,EDI }
    /* +0xb69d49 */ __asm { ADD EDX,0xffffa8b5 }
    /* +0xb69d4f */ __asm { ROR DX,0x1 }
    /* +0xb69d52 */ __asm { MOVZX R8D,DX }
    /* +0xb69d56 */ __asm { MOV dword ptr [RBP + -0x40],0x0 }
    /* +0xb69d5d */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0xb69d61 */ __asm { MOV R10,0x7f3f7df539c73d18 }
    /* +0xb69d6b */ __asm { MOV RCX,qword ptr [RCX + 0x30] }
    /* +0xb69d6f */ __asm { NOT R10 }
    /* +0xb69d72 */ __asm { ADD R10,RDI }
    /* +0xb69d75 */ __asm { MOV R11,-0x642d1c4f3f1f1431 }
    /* +0xb69d7f */ __asm { CMP RCX,R10 }
    /* +0xb69d82 */ __asm { NOP }
    /* +0xb69d83 */ __asm { NOP }
    /* +0xb69d84 */ __asm { NOP }
    /* +0xb69d85 */ __asm { NOP }
    /* +0xb69d86 */ __asm { NOP }
    /* +0xb69d87 */ __asm { TEST R9D,0x100 }
    /* +0xb69d8e */ __asm { JZ 0x7fffa52d9d92 }
    /* +0xb69d90 */ __asm { MOV DL,0x1 }
    /* +0xb69d92 */ __asm { MOV dword ptr [RBP + 0xc0],0xaccce17f }
    /* +0xb69d9c */ __asm { MOV EDX,dword ptr [RBP + 0xc0] }
    /* +0xb69da2 */ __asm { MOV R10W,0x990d }
    /* +0xb69da7 */ __asm { IMUL R10D,R10D,0x4367 }
    /* +0xb69dae */ __asm { SUB R10D,EDI }
    /* +0xb69db1 */ __asm { ADD R10D,0x24e8 }
    /* +0xb69db8 */ __asm { MOVZX R10D,R10W }
    /* +0xb69dbc */ __asm { CMP EDX,R10D }
    /* +0xb69dbf */ __asm { JGE 0x7fffa52e59a7 }
    /* +0xb69dc5 */ __asm { MOV DX,0x9dfb }
    /* +0xb69dc9 */ __asm { LEA R11,[0x7fffa477ed4f] }
    /* +0xb69dd0 */ __asm { IMUL R9D,EDX,-0x3863 }
    /* +0xb69dd7 */ __asm { MOV DX,0xaabb }
    /* +0xb69ddb */ __asm { SUB EDX,EDI }
    /* +0xb69ddd */ __asm { MOV qword ptr [RBP + 0xc0],R8 }
    /* +0xb69de4 */ __asm { IMUL EDX,EDX,-0x19b9 }
    /* +0xb69dea */ __asm { MOVZX EDX,DX }
    /* +0xb69ded */ __asm { MOV EAX,dword ptr [R11 + 0x613d] }
    /* +0xb69df4 */ __asm { MOV R10D,0xc8fa0c4c }
    /* +0xb69dfa */ __asm { IMUL R10D,R10D,0x7a47700d }
    /* +0xb69e01 */ __asm { XOR R10D,EDI }
    /* +0xb69e04 */ __asm { MOVSXD R10,R10D }
    /* +0xb69e07 */ __asm { NOT R9D }
    /* +0xb69e0a */ __asm { MOVZX R9D,R9W }
    /* +0xb69e0e */ __asm { LEA R8,[RBP + -0x40] }
    /* +0xb69e12 */ __asm { SYSCALL }
    /* +0xb69e14 */ __asm { LEA R11,[0x7fffa478469b] }
    /* +0xb69e1b */ __asm { MOV RCX,-0x7e6ef3c64ba702b4 }
    /* +0xb69e25 */ __asm { CMP R11,RCX }
    /* +0xb69e28 */ __asm { NOP }
    /* +0xb69e29 */ __asm { NOP }
    /* +0xb69e2a */ __asm { NOP }
    /* +0xb69e2b */ __asm { NOP }
    /* +0xb69e2c */ __asm { NOP }
    /* +0xb69e2d */ __asm { MOV DX,0x10c8 }
    /* +0xb69e31 */ __asm { ADD EDX,0xfffffce0 }
    /* +0xb69e37 */ __asm { MOV ECX,EDI }
    /* +0xb69e39 */ __asm { ROL DX,CL }
    /* +0xb69e3c */ __asm { IMUL EDX,EDX,-0x5363 }
    /* +0xb69e42 */ __asm { MOVZX R8D,DX }
    /* +0xb69e46 */ __asm { MOV EDX,EDI }
    /* +0xb69e48 */ __asm { OR EDX,0x1 }
    /* +0xb69e4b */ __asm { MOV R10W,0xc841 }
    /* +0xb69e50 */ __asm { ADD R10D,0x37bf }
    /* +0xb69e57 */ __asm { ROL R10W,0x3 }
    /* +0xb69e5c */ __asm { MOV qword ptr [RBP + -0x40],R9 }
    /* +0xb69e60 */ __asm { IMUL R10D,EDX }
    /* +0xb69e64 */ __asm { MOVZX R10D,R10W }
    /* +0xb69e68 */ __asm { MOV EAX,dword ptr [R11 + 0x6f5] }
    /* +0xb69e6f */ __asm { JMP 0x7fffa52da54c }
    /* +0xb69e74 */ __asm { MOV R11,0x0 }
    /* +0xb69e7b */ __asm { NOP }
    /* +0xb69e7d */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xb69e84 */ __asm { MOV R11D,0x93601d06 }
    /* +0xb69e8a */ __asm { MOV RCX,-0x4a99bd99ee6a6fc1 }
    /* +0xb69e94 */ __asm { CMP R11,RCX }
    /* +0xb69e97 */ __asm { NOP }
    /* +0xb69e98 */ __asm { NOP }
    /* +0xb69e99 */ __asm { NOP }
    /* +0xb69e9a */ __asm { NOP }
    /* +0xb69e9b */ __asm { NOP }
    /* +0xb69e9c */ __asm { TEST uint8_t ptr [R11 + -0x13621ac6],0x1 }
    /* +0xb69ea4 */ __asm { JZ 0x7fffa52da35a }
    /* +0xb69eaa */ __asm { LEA R11,[0x7fffa47bfe26] }
    /* +0xb69eb1 */ __asm { MOV R9,R11 }
    /* +0xb69eb4 */ __asm { XOR R9,0x4c82904 }
    /* +0xb69ebb */ __asm { MOV RCX,-0x1ff1b815215 }
    /* +0xb69ec5 */ __asm { ADD RCX,R9 }
    /* +0xb69ec8 */ __asm { MOV R10,-0x624a2850cab4515d }
    /* +0xb69ed2 */ __asm { CMP RCX,R10 }
    /* +0xb69ed5 */ __asm { JZ 0x7fffa52e5926 }
    /* +0xb69edb */ __asm { MOV DX,0x2540 }
    /* +0xb69edf */ __asm { ADD EDX,0xc50 }
    /* +0xb69ee5 */ __asm { MOV qword ptr [RBP + -0x40],R9 }
    /* +0xb69ee9 */ __asm { MOV R9W,0x3945 }
    /* +0xb69eee */ __asm { MOVSX RCX,R9W }
    /* +0xb69ef2 */ __asm { XOR RCX,-0x95 }
    /* +0xb69ef9 */ __asm { MOV R10W,0xb783 }
    /* +0xb69efe */ __asm { IMUL R10D,R10D,0x70d5 }
    /* +0xb69f05 */ __asm { NOT R10D }
    /* +0xb69f08 */ __asm { IMUL R10D,R10D,0x7e1f }
    /* +0xb69f0f */ __asm { ROL DX,0x9 }
    /* +0xb69f13 */ __asm { MOVZX R10D,R10W }
    /* +0xb69f17 */ __asm { XOR EDX,EDI }
    /* +0xb69f19 */ __asm { MOVZX R8D,DX }
    /* +0xb69f1d */ __asm { MOV EAX,dword ptr [RCX + R11*0x1 + 0x10c] }
    /* +0xb69f25 */ __asm { JMP 0x7fffa52da54c }
    /* +0xb69f2a */ __asm { MOV R10,0x485db95d91f0161c }
    /* +0xb69f34 */ __asm { ADD R10,0x291ff2b2 }
}


// ============================================================================
// Function : Unwind@7fffa52e5c10  |  RVA: 0xb75c10  |  Size: 240 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa52e5c10(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  
  piVar1 = (int *)(*(int64_t *)(param_2 + 0x218) + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar3 = *(uint32_t **)(param_2 + 0x218);
    LOCK();
    uVar2 = *puVar3;
    *puVar3 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar3 + 2,uVar2);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52e5d07  |  RVA: 0xb75d07  |  Size: 25 bytes
// Callers  : none
// Callees  : FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa52e5d07(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa4f54478(**(uint32_t **)(param_2 + 0x68));
  return;
}


// ============================================================================
// Function : FUN_7fffa52e8554  |  RVA: 0xb78554  |  Size: 2564 bytes
// Callers  : FUN_7fffa5342825@0xbd2825
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52e8554(void) {
    /* +0xb78554 */ __asm { MOV R11D,ESI }
    /* +0xb78557 */ __asm { OR R11D,0x1 }
    /* +0xb7855b */ __asm { MOV AX,0x75b2 }
    /* +0xb7855f */ __asm { IMUL EAX,R11D }
    /* +0xb78563 */ __asm { NOP }
    /* +0xb78564 */ __asm { MOV R11,0x0 }
    /* +0xb7856b */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xb78572 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb78579 */ __asm { ROL AX,CL }
    /* +0xb7857c */ __asm { ADD EAX,0x2f0a }
    /* +0xb78581 */ __asm { MOV ECX,EDI }
    /* +0xb78583 */ __asm { ROR AX,CL }
    /* +0xb78586 */ __asm { MOV R11D,dword ptr [R8 + 0x111c0666] }
    /* +0xb7858d */ __asm { AND R11D,0x1 }
    /* +0xb78591 */ __asm { MOVZX EAX,AX }
    /* +0xb78594 */ __asm { CMP R11D,EAX }
    /* +0xb78597 */ __asm { MOV R15,qword ptr [RBP + 0xd0] }
    /* +0xb7859e */ __asm { JNZ 0x7fffa52e8797 }
    /* +0xb785a4 */ __asm { MOV dword ptr [RBP + 0x5e0],0x1189033b }
    /* +0xb785ae */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb785b5 */ __asm { MOV R9,0x1df100 }
    /* +0xb785bc */ __asm { LEA RSI,[0x7fffa4aac4c0] }
    /* +0xb785c3 */ __asm { NOP }
    /* +0xb785c4 */ __asm { MOV R11,-0x13cb123b234f2f5a }
    /* +0xb785ce */ __asm { CMP RSI,R11 }
    /* +0xb785d1 */ __asm { NOP }
    /* +0xb785d2 */ __asm { NOP }
    /* +0xb785d3 */ __asm { NOP }
    /* +0xb785d4 */ __asm { NOP }
    /* +0xb785d5 */ __asm { NOP }
    /* +0xb785d6 */ __asm { NOP }
    /* +0xb785d7 */ __asm { NOP }
    /* +0xb785d8 */ __asm { TEST R10D,0x100 }
    /* +0xb785df */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb785e6 */ __asm { MOV RDX,qword ptr [RBP + 0x1298] }
    /* +0xb785ed */ __asm { JZ 0x7fffa52e85f2 }
    /* +0xb785ef */ __asm { NOP }
    /* +0xb785f0 */ __asm { NOP }
    /* +0xb785f1 */ __asm { NOP }
    /* +0xb785f2 */ __asm { NOP }
    /* +0xb785f3 */ __asm { NOP }
    /* +0xb785f4 */ __asm { NOP }
    /* +0xb785f5 */ __asm { NOP }
    /* +0xb785f6 */ __asm { NOP }
    /* +0xb785f7 */ __asm { NOP }
    /* +0xb785f8 */ __asm { NOP }
    /* +0xb785f9 */ __asm { NOP }
    /* +0xb785fa */ __asm { NOP }
    /* +0xb785fb */ __asm { NOP }
    /* +0xb785fc */ __asm { NOP }
    /* +0xb785fd */ __asm { NOP }
    /* +0xb785fe */ __asm { NOP }
    /* +0xb785ff */ __asm { NOP }
    /* +0xb78797 */ __asm { RDTSC }
    /* +0xb78799 */ __asm { SHL RDX,0x20 }
    /* +0xb7879d */ __asm { OR RDX,RAX }
    /* +0xb787a0 */ __asm { MOV R9,-0x2ecbdabc217d106b }
    /* +0xb787aa */ __asm { IMUL RDX,R9 }
    /* +0xb787ae */ __asm { MOV R10,-0x4e619f6b21897eca }
    /* +0xb787b8 */ __asm { ADD R10,RDX }
    /* +0xb787bb */ __asm { MOV RCX,R10 }
    /* +0xb787be */ __asm { SHR RCX,0x3b }
    /* +0xb787c2 */ __asm { MOV RDX,R10 }
    /* +0xb787c5 */ __asm { SHR RDX,0x1b }
    /* +0xb787c9 */ __asm { SHR R10,0x2d }
    /* +0xb787cd */ __asm { XOR R10D,EDX }
    /* +0xb787d0 */ __asm { MOV qword ptr [RBP + 0x320],RCX }
    /* +0xb787d7 */ __asm { ROR R10D,CL }
    /* +0xb787da */ __asm { CMP R10D,0x29ac8fb }
    /* +0xb787e1 */ __asm { JA 0x7fffa52e8b5c }
    /* +0xb787e7 */ __asm { MOV dword ptr [RBP + 0x5e0],0xbcd9cc0d }
    /* +0xb787f1 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb787f8 */ __asm { MOV dword ptr [RBP + 0x5e0],0xebefbfe7 }
    /* +0xb78802 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb78809 */ __asm { LEA R8,[0x7fffa477ec36] }
    /* +0xb78810 */ __asm { MOV R11,R8 }
    /* +0xb78813 */ __asm { ROL R11,0x30 }
    /* +0xb78817 */ __asm { MOV EDX,0xe0c42717 }
    /* +0xb7881c */ __asm { XOR RDX,R11 }
    /* +0xb7881f */ __asm { MOV R11,-0xea12b4c51730f31 }
    /* +0xb78829 */ __asm { CMP RDX,R11 }
    /* +0xb7882c */ __asm { NOP }
    /* +0xb7882d */ __asm { NOP }
    /* +0xb7882e */ __asm { NOP }
    /* +0xb7882f */ __asm { NOP }
    /* +0xb78830 */ __asm { NOP }
    /* +0xb78831 */ __asm { NOP }
    /* +0xb78832 */ __asm { NOP }
    /* +0xb78833 */ __asm { NOP }
    /* +0xb78834 */ __asm { NOP }
    /* +0xb78835 */ __asm { NOP }
    /* +0xb78836 */ __asm { NOP }
    /* +0xb78837 */ __asm { NOP }
    /* +0xb78838 */ __asm { NOP }
    /* +0xb78839 */ __asm { NOP }
    /* +0xb7883a */ __asm { NOP }
    /* +0xb7883b */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x5959] }
    /* +0xb78843 */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + 0x5963] }
    /* +0xb7884c */ __asm { NOT R10B }
    /* +0xb7884f */ __asm { ROL R10B,0x3 }
    /* +0xb78853 */ __asm { MOV uint8_t ptr [RBP + 0x5e0],R10B }
    /* +0xb7885a */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + 0x5964] }
    /* +0xb78863 */ __asm { NOT R10B }
    /* +0xb78866 */ __asm { ROL R10B,0x3 }
    /* +0xb7886a */ __asm { MOV uint8_t ptr [RBP + 0x5e1],R10B }
    /* +0xb78871 */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + 0x5965] }
    /* +0xb7887a */ __asm { NOT R10B }
    /* +0xb7887d */ __asm { ROL R10B,0x3 }
    /* +0xb78881 */ __asm { MOV uint8_t ptr [RBP + 0x5e2],R10B }
    /* +0xb78888 */ __asm { MOVZX ECX,uint8_t ptr [R8 + RCX*0x4 + 0x5966] }
    /* +0xb78891 */ __asm { NOT CL }
    /* +0xb78893 */ __asm { ROL CL,0x3 }
    /* +0xb78896 */ __asm { MOV uint8_t ptr [RBP + 0x5e3],CL }
    /* +0xb7889c */ __asm { MOV R11D,0x97cd0fa7 }
    /* +0xb788a2 */ __asm { XOR R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb788a9 */ __asm { BT R11D,R11D }
    /* +0xb788ad */ __asm { JC 0x7fffa52e8b5c }
    /* +0xb788b3 */ __asm { MOV dword ptr [RBP + 0x5e0],0x7e797cef }
    /* +0xb788bd */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb788c4 */ __asm { TEST R11D,R11D }
    /* +0xb788c7 */ __asm { NOP }
    /* +0xb788c8 */ __asm { NOP }
    /* +0xb788c9 */ __asm { NOP }
    /* +0xb788ca */ __asm { NOP }
    /* +0xb788cb */ __asm { NOP }
    /* +0xb788cc */ __asm { NOP }
    /* +0xb788ce */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb788d5 */ __asm { MOV R8,0x0 }
    /* +0xb788dc */ __asm { PUSHFQ }
    /* +0xb788dd */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb788e5 */ __asm { POPFQ }
    /* +0xb788e6 */ __asm { RDTSC }
    /* +0xb788e8 */ __asm { SHL RDX,0x20 }
    /* +0xb788ec */ __asm { OR RDX,RAX }
    /* +0xb788ef */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xb788f9 */ __asm { IMUL R11,RDX }
    /* +0xb788fd */ __asm { MOV R10,-0x74b51195010dc9e2 }
    /* +0xb78907 */ __asm { ADD R10,R11 }
    /* +0xb7890a */ __asm { MOV RDX,R10 }
    /* +0xb7890d */ __asm { SHR RDX,0x2d }
    /* +0xb78911 */ __asm { MOV RCX,R10 }
    /* +0xb78914 */ __asm { SHR RCX,0x3b }
    /* +0xb78918 */ __asm { SHR R10,0x1b }
    /* +0xb7891c */ __asm { XOR R10D,EDX }
    /* +0xb7891f */ __asm { ROR R10D,CL }
    /* +0xb78922 */ __asm { AND R10D,0x3 }
    /* +0xb78926 */ __asm { CMP R10D,0x2 }
    /* +0xb7892a */ __asm { MOV RAX,qword ptr [RBP + 0x1298] }
    /* +0xb78931 */ __asm { JNC 0x7fffa52e898c }
    /* +0xb78933 */ __asm { MOV R14,R9 }
    /* +0xb78936 */ __asm { CMP R10D,0x1 }
    /* +0xb7893a */ __asm { JZ 0x7fffa52e8a16 }
    /* +0xb78940 */ __asm { MOV dword ptr [RBP + 0x5e0],0xddabfd7f }
    /* +0xb7894a */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb78951 */ __asm { CMP R11D,0xc6ba33cb }
    /* +0xb78958 */ __asm { NOP }
    /* +0xb78959 */ __asm { NOP }
    /* +0xb7895a */ __asm { NOP }
    /* +0xb7895b */ __asm { NOP }
    /* +0xb7895c */ __asm { NOP }
    /* +0xb7895d */ __asm { MOV R11D,0xf94d1e8f }
    /* +0xb78963 */ __asm { ADD R11D,dword ptr [RBP + 0x480] }
    /* +0xb7896a */ __asm { MOV R10D,0x42012904 }
    /* +0xb78970 */ __asm { SUB R10D,R11D }
    /* +0xb78973 */ __asm { MOV ECX,EAX }
    /* +0xb78975 */ __asm { ROR R10D,CL }
    /* +0xb78978 */ __asm { MOVSXD R11,R10D }
    /* +0xb7897b */ __asm { LEA RDX,[0x7fffa52d8d87] }
    /* +0xb78982 */ __asm { ADD RDX,R11 }
    /* +0xb78985 */ __asm { CALL RDX }
    /* +0xb78987 */ __asm { JMP 0x7fffa52e8af5 }
    /* +0xb7898c */ __asm { CMP R10D,0x3 }
    /* +0xb78990 */ __asm { JNZ 0x7fffa52e8a81 }
    /* +0xb78996 */ __asm { MOV dword ptr [RBP + 0x5e0],0x34c7ccda }
    /* +0xb789a0 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb789a7 */ __asm { TEST R11D,R11D }
    /* +0xb789aa */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb789b1 */ __asm { JS 0x7fffa5352c53 }
    /* +0xb789b7 */ __asm { MOV R14,R9 }
    /* +0xb789ba */ __asm { MOV R11W,0x2028 }
    /* +0xb789bf */ __asm { ADD R11D,0xb85 }
    /* +0xb789c6 */ __asm { ROL R11W,0x1 }
    /* +0xb789ca */ __asm { SUB R11D,EDI }
    /* +0xb789cd */ __asm { XOR R11D,EAX }
    /* +0xb789d0 */ __asm { ROL R11W,CL }
    /* +0xb789d4 */ __asm { PUSHFQ }
    /* +0xb789d5 */ __asm { POP RDX }
    /* +0xb789d6 */ __asm { AND EDX,0x100 }
    /* +0xb789dc */ __asm { MOVZX R11D,R11W }
    /* +0xb789e0 */ __asm { CMP EDX,R11D }
    /* +0xb789e3 */ __asm { NOP }
    /* +0xb789e4 */ __asm { NOP }
    /* +0xb789e5 */ __asm { NOP }
    /* +0xb789e6 */ __asm { NOP }
    /* +0xb789e7 */ __asm { MOV R11W,0x87f6 }
    /* +0xb789ec */ __asm { ADD R11D,ECX }
    /* +0xb789ef */ __asm { NOT R11D }
    /* +0xb789f2 */ __asm { IMUL R11D,R11D,0x6281 }
    /* +0xb789f9 */ __asm { SUB R11D,EAX }
    /* +0xb789fc */ __asm { ROL R11W,0x7 }
    /* +0xb78a01 */ __asm { MOVSX R11,R11W }
    /* +0xb78a05 */ __asm { LEA RDX,[0x7fffa50cafbc] }
    /* +0xb78a0c */ __asm { ADD RDX,R11 }
    /* +0xb78a0f */ __asm { CALL RDX }
    /* +0xb78a11 */ __asm { JMP 0x7fffa52e8af5 }
    /* +0xb78a16 */ __asm { MOV R11W,0x12c2 }
    /* +0xb78a1b */ __asm { XOR R11D,dword ptr [RBP + 0x480] }
    /* +0xb78a22 */ __asm { IMUL R11D,R11D,-0x225f }
    /* +0xb78a29 */ __asm { MOV R10D,EDI }
    /* +0xb78a2c */ __asm { XOR R10D,R11D }
    /* +0xb78a2f */ __asm { SUB R10D,EAX }
    /* +0xb78a32 */ __asm { MOVZX R10D,R10W }
    /* +0xb78a36 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xb78a3a */ __asm { MOV RDX,0xe4bb16dfef79bcd }
    /* +0xb78a44 */ __asm { CMP R11,RDX }
    /* +0xb78a47 */ __asm { JNZ 0x7fffa52e8a55 }
    /* +0xb78a49 */ __asm { TEST uint8_t ptr [RSI + RDX*0x1],CL }
    /* +0xb78a4c */ __asm { STC }
    /* +0xb78a4d */ __asm { POP RBX }
    /* +0xb78a4e */ __asm { JMP 0x7fffa52e8a8e }
    /* +0xb78a55 */ __asm { LEA R11,[0x7fffa562878a] }
    /* +0xb78a5c */ __asm { MOV R10D,0xd5f677c5 }
    /* +0xb78a62 */ __asm { IMUL R10D,EBX }
    /* +0xb78a66 */ __asm { ADD R10D,EAX }
    /* +0xb78a69 */ __asm { XOR R10D,0xc0000026 }
    /* +0xb78a70 */ __asm { ADD R10D,dword ptr [RBP + 0x480] }
    /* +0xb78a77 */ __asm { MOVSXD RDX,R10D }
    /* +0xb78a7a */ __asm { ADD RDX,R11 }
    /* +0xb78a7d */ __asm { CALL RDX }
    /* +0xb78a7f */ __asm { JMP 0x7fffa52e8af5 }
    /* +0xb78a81 */ __asm { MOV R14,R9 }
    /* +0xb78a84 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb78a8b */ __asm { NOP }
    /* +0xb78a8d */ __asm { MOV R8,0x0 }
    /* +0xb78a94 */ __asm { MOV dword ptr [RBP + 0x5e0],0x988a8cd }
    /* +0xb78a9e */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb78aa5 */ __asm { TEST R11B,0x1 }
    /* +0xb78aa9 */ __asm { MOV R10,qword ptr [RBP + 0x480] }
    /* +0xb78ab0 */ __asm { JZ 0x7fffa5352c5b }
    /* +0xb78ab6 */ __asm { NOP }
    /* +0xb78ab8 */ __asm { MOV R8,0x0 }
    /* +0xb78abf */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb78ac6 */ __asm { MOV R11D,0xb6f895ee }
    /* +0xb78acc */ __asm { IMUL R11D,R11D,-0x78c36c7b }
    /* +0xb78ad3 */ __asm { LEA RDX,[0x7fffa55a35ec] }
    /* +0xb78ada */ __asm { XOR R11D,R10D }
    /* +0xb78add */ __asm { NOT R11D }
    /* +0xb78ae0 */ __asm { MOV ECX,EAX }
    /* +0xb78ae2 */ __asm { ROL R11D,CL }
    /* +0xb78ae5 */ __asm { ADD R11D,0xddf646a6 }
    /* +0xb78aec */ __asm { MOVSXD R11,R11D }
    /* +0xb78aef */ __asm { ADD R11,RDX }
    /* +0xb78af2 */ __asm { CALL R11 }
    /* +0xb78af5 */ __asm { MOV R11D,0x545048ce }
    /* +0xb78afb */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xb78b02 */ __asm { ADD R11D,EDI }
    /* +0xb78b05 */ __asm { ROL R11D,0x15 }
    /* +0xb78b09 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb78b10 */ __asm { ROL R11D,CL }
    /* +0xb78b13 */ __asm { ADD R11D,dword ptr [RBP + 0x480] }
    /* +0xb78b1a */ __asm { XOR R11D,0x6e4e97de }
    /* +0xb78b21 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb78b28 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb78b2f */ __asm { CMP R11D,0x2ff6610a }
    /* +0xb78b36 */ __asm { MOV R9,R14 }
    /* +0xb78b39 */ __asm { JC 0x7fffa52e8b47 }
    /* +0xb78b3b */ __asm { MOV CL,0x1c }
    /* +0xb78b3d */ __asm { POP RSI }
    /* +0xb78b3e */ __asm { MOV EAX,[0x22c981a2bdc2af4a] }
    /* +0xb78b47 */ __asm { MOV R15,qword ptr [RBP + 0xd0] }
    /* +0xb78b4e */ __asm { MOV RBX,qword ptr [RBP + 0xe8] }
    /* +0xb78b55 */ __asm { MOV R14,qword ptr [RBP + 0x11d8] }
    /* +0xb78b5c */ __asm { MOV R11,qword ptr [RBP + 0x5b0] }
    /* +0xb78b63 */ __asm { LEA R8,[R11 + 0xb0] }
    /* +0xb78b6a */ __asm { ADD R11,0x30 }
    /* +0xb78b6e */ __asm { PUSH RBP }
    /* +0xb78b6f */ __asm { PUSH RAX }
    /* +0xb78b70 */ __asm { MOV R10,RSP }
    /* +0xb78b73 */ __asm { XOR RBP,RSP }
    /* +0xb78b76 */ __asm { XOR RSP,RSP }
    /* +0xb78b79 */ __asm { MOV RSP,qword ptr [R11] }
    /* +0xb78b7c */ __asm { ADD R11,0x8 }
    /* +0xb78b80 */ __asm { CMP R8,R11 }
    /* +0xb78b83 */ __asm { JNZ 0x7fffa52e8b79 }
    /* +0xb78b85 */ __asm { MOV RSP,R10 }
    /* +0xb78b88 */ __asm { XOR RBP,RSP }
    /* +0xb78b8b */ __asm { ADD RSP,0x8 }
    /* +0xb78b8f */ __asm { POP RBP }
    /* +0xb78b90 */ __asm { PUSHFQ }
    /* +0xb78b91 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb78b99 */ __asm { POPFQ }
    /* +0xb78b9a */ __asm { MOV dword ptr [RBP + 0x5e0],0x46b95dfb }
    /* +0xb78ba4 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb78bab */ __asm { MOV R10W,0x6822 }
    /* +0xb78bb0 */ __asm { IMUL R8D,R10D,-0x6319 }
    /* +0xb78bb7 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb78bbe */ __asm { ROR R8W,CL }
    /* +0xb78bc2 */ __asm { NOT R8D }
    /* +0xb78bc5 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb78bcc */ __asm { ROR R8W,CL }
    /* +0xb78bd0 */ __asm { LEA R10D,[RDI + R8*0x1] }
    /* +0xb78bd4 */ __asm { MOVSX R10D,R10W }
    /* +0xb78bd8 */ __asm { CMP R11D,R10D }
    /* +0xb78bdb */ __asm { JLE 0x7fffa53505df }
    /* +0xb78be1 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb78be8 */ __asm { MOV R8,0x0 }
    /* +0xb78bef */ __asm { NOP }
    /* +0xb78bf1 */ __asm { RDTSC }
    /* +0xb78bf3 */ __asm { SHL RDX,0x20 }
    /* +0xb78bf7 */ __asm { OR RDX,RAX }
    /* +0xb78bfa */ __asm { IMUL RDX,R9 }
    /* +0xb78bfe */ __asm { MOV R10,0x39bc5a82b679536a }
    /* +0xb78c08 */ __asm { ADD R10,RDX }
    /* +0xb78c0b */ __asm { MOV RCX,R10 }
    /* +0xb78c0e */ __asm { SHR RCX,0x3b }
    /* +0xb78c12 */ __asm { MOV RDX,R10 }
    /* +0xb78c15 */ __asm { SHR RDX,0x2d }
    /* +0xb78c19 */ __asm { SHR R10,0x1b }
    /* +0xb78c1d */ __asm { XOR R10D,EDX }
    /* +0xb78c20 */ __asm { ROR R10D,CL }
    /* +0xb78c23 */ __asm { CMP R10D,0xe4b09d }
    /* +0xb78c2a */ __asm { JA 0x7fffa52ea115 }
    /* +0xb78c30 */ __asm { MOV uint8_t ptr [RBP + 0x1210],0x0 }
    /* +0xb78c37 */ __asm { MOV dword ptr [RBP + 0x120],0x0 }
    /* +0xb78c41 */ __asm { MOV dword ptr [RBP + 0x5e0],0xd47e1044 }
    /* +0xb78c4b */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb78c52 */ __asm { MOV dword ptr [RBP + 0x5e0],0x7e262690 }
    /* +0xb78c5c */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb78c63 */ __asm { CMP R11D,0xca201b76 }
    /* +0xb78c6a */ __asm { NOP }
    /* +0xb78c6b */ __asm { NOP }
    /* +0xb78c6c */ __asm { NOP }
    /* +0xb78c6d */ __asm { NOP }
    /* +0xb78c6e */ __asm { NOP }
    /* +0xb78c6f */ __asm { LEA RDX,[0x7fffa4782495] }
    /* +0xb78c76 */ __asm { MOV R11D,0x3fcb4742 }
    /* +0xb78c7c */ __asm { MOV R10D,0x32c40a44 }
    /* +0xb78c82 */ __asm { MOV EAX,0x95409d7f }
    /* +0xb78c87 */ __asm { LEA R8,[0x7fffa478ef31] }
    /* +0xb78c8e */ __asm { MOV R9D,0xecb97383 }
    /* +0xb78c94 */ __asm { MOV R12,qword ptr [RBP + 0x1298] }
    /* +0xb78c9b */ __asm { ADD R9D,R12D }
    /* +0xb78c9e */ __asm { XOR R9D,0x7d72bf10 }
    /* +0xb78ca5 */ __asm { MOV R13,qword ptr [RBP + 0x480] }
    /* +0xb78cac */ __asm { MOV ECX,R13D }
    /* +0xb78caf */ __asm { ROR R9D,CL }
    /* +0xb78cb2 */ __asm { XOR EAX,0x65510c5b }
    /* +0xb78cb7 */ __asm { SUB R11D,EDI }
    /* +0xb78cba */ __asm { MOV ECX,R12D }
    /* +0xb78cbd */ __asm { ROL EAX,CL }
    /* +0xb78cbf */ __asm { IMUL EAX,EBX }
    /* +0xb78cc2 */ __asm { MOV R15D,0x4fc4de64 }
    /* +0xb78cc8 */ __asm { IMUL R11D,R11D,-0x3fbbd2c3 }
    /* +0xb78ccf */ __asm { ADD R11D,0x7ffffffc }
    /* +0xb78cd6 */ __asm { XOR R11D,R13D }
    /* +0xb78cd9 */ __asm { MOV RSI,qword ptr [RBP + 0xd0] }
    /* +0xb78ce0 */ __asm { IMUL R11D,ESI }
    /* +0xb78ce4 */ __asm { MOVSXD RCX,R11D }
    /* +0xb78ce7 */ __asm { LEA R11,[0x7fffa478b289] }
    /* +0xb78cee */ __asm { MOV R11,qword ptr [R11 + RCX*0x1 + 0x40] }
    /* +0xb78cf3 */ __asm { XOR EAX,0xf9074804 }
    /* +0xb78cf8 */ __asm { CDQE }
    /* +0xb78cfa */ __asm { XOR R15D,0xfdf4e0ea }
    /* +0xb78d01 */ __asm { IMUL R15D,R14D }
    /* +0xb78d05 */ __asm { NOT R15D }
    /* +0xb78d08 */ __asm { MOV ECX,R12D }
    /* +0xb78d0b */ __asm { ROL R15D,CL }
    /* +0xb78d0e */ __asm { MOVSXD RCX,R15D }
    /* +0xb78d11 */ __asm { MOVZX ECX,uint8_t ptr [R8 + RCX*0x1 + 0x30] }
    /* +0xb78d17 */ __asm { MOV R8,-0x42ad7ee3f392fec5 }
    /* +0xb78d21 */ __asm { MOV RBX,R8 }
    /* +0xb78d24 */ __asm { SHR RBX,CL }
    /* +0xb78d27 */ __asm { SHL R8,CL }
    /* +0xb78d2a */ __asm { MOV R15D,R13D }
    /* +0xb78d2d */ __asm { OR R15D,0x1 }
    /* +0xb78d31 */ __asm { CMP R9,RAX }
    /* +0xb78d34 */ __asm { LEA RAX,[0x7fffa478c244] }
    /* +0xb78d3b */ __asm { CMOVG R8,RBX }
    /* +0xb78d3f */ __asm { MOV R14W,0xe737 }
    /* +0xb78d44 */ __asm { MOVZX R9D,SI }
    /* +0xb78d48 */ __asm { IMUL R14D,R9D }
    /* +0xb78d4c */ __asm { NOT R14D }
    /* +0xb78d4f */ __asm { IMUL R14D,R15D }
    /* +0xb78d53 */ __asm { ROL R14W,0x6 }
    /* +0xb78d58 */ __asm { SUB R10D,R12D }
    /* +0xb78d5b */ __asm { MOV ECX,R13D }
    /* +0xb78d5e */ __asm { ROR R10D,CL }
    /* +0xb78d61 */ __asm { MOVSX RCX,R14W }
    /* +0xb78d65 */ __asm { MOV RDX,qword ptr [RDX + RCX*0x1 + 0x48] }
    /* +0xb78d6a */ __asm { ADD R10D,0xb4cb0862 }
    /* +0xb78d71 */ __asm { XOR R10D,EDI }
    /* +0xb78d74 */ __asm { MOVSXD RCX,R10D }
    /* +0xb78d77 */ __asm { MOV RCX,qword ptr [RAX + RCX*0x1 + 0x38] }
    /* +0xb78d7c */ __asm { XOR R10D,R10D }
    /* +0xb78d7f */ __asm { MOVDQA XMM0,xmmword ptr [0x7fffa56bb040] }
    /* +0xb78d87 */ __asm { MOV RAX,R8 }
    /* +0xb78d8a */ __asm { SHL RAX,0x4 }
    /* +0xb78d8e */ __asm { MOVDQA XMM2,xmmword ptr [R11 + RAX*0x1] }
    /* +0xb78d94 */ __asm { MOVDQA xmmword ptr [RBP + 0x3e0],XMM2 }
    /* +0xb78d9c */ __asm { MOVZX R12D,uint8_t ptr [RBP + 0x3ef] }
    /* +0xb78da4 */ __asm { PCMPEQB XMM2,XMM0 }
    /* +0xb78da8 */ __asm { PMOVMSKB EAX,XMM2 }
    /* +0xb78dac */ __asm { AND EAX,0x7fff }
    /* +0xb78db1 */ __asm { JZ 0x7fffa52e8de5 }
    /* +0xb78db3 */ __asm { IMUL R13,R8,0x78 }
    /* +0xb78db7 */ __asm { LEA RBX,[RDX + R13*0x1] }
    /* +0xb78dbb */ __asm { NOP dword ptr [RDX + R13*0x1] }
    /* +0xb78dc0 */ __asm { MOVZX R13D,AX }
    /* +0xb78dc4 */ __asm { TZCNT EAX,R13D }
    /* +0xb78dc9 */ __asm { MOV RAX,qword ptr [RBX + RAX*0x8] }
    /* +0xb78dcd */ __asm { CMP dword ptr [RAX],0xa3 }
    /* +0xb78dd3 */ __asm { JZ 0x7fffa52e8ec6 }
    /* +0xb78dd9 */ __asm { LEA EAX,[R13 + -0x1] }
    /* +0xb78ddd */ __asm { AND EAX,R13D }
    /* +0xb78de0 */ __asm { MOV R13D,EAX }
    /* +0xb78de3 */ __asm { JNZ 0x7fffa52e8dc4 }
    /* +0xb78de5 */ __asm { TEST R12B,0x8 }
    /* +0xb78de9 */ __asm { JZ 0x7fffa52e8e0e }
    /* +0xb78deb */ __asm { LEA RSI,[0x7fffa4770000] }
    /* +0xb78df2 */ __asm { MOV RAX,0x0 }
    /* +0xb78df9 */ __asm { ADD R8,R10 }
    /* +0xb78dfc */ __asm { INC R8 }
    /* +0xb78dff */ __asm { INC R10 }
    /* +0xb78e02 */ __asm { AND R8,RCX }
    /* +0xb78e05 */ __asm { CMP R10,RCX }
    /* +0xb78e08 */ __asm { JBE 0x7fffa52e8d87 }
    /* +0xb78e0e */ __asm { MOV R10D,0xf2556012 }
    /* +0xb78e14 */ __asm { SUB R10D,EDI }
    /* +0xb78e17 */ __asm { XOR R10D,0x36b7ce00 }
    /* +0xb78e1e */ __asm { MOV R12,qword ptr [RBP + 0x1298] }
    /* +0xb78e25 */ __asm { MOV ECX,R12D }
    /* +0xb78e28 */ __asm { ROR R10D,CL }
    /* +0xb78e2b */ __asm { NOT R10D }
    /* +0xb78e2e */ __asm { MOV R11D,0xeb470d2b }
    /* +0xb78e34 */ __asm { ADD R11D,EDI }
    /* +0xb78e37 */ __asm { NOT R11D }
    /* +0xb78e3a */ __asm { ADD R11D,R12D }
    /* +0xb78e3d */ __asm { MOV RBX,qword ptr [RBP + 0x480] }
    /* +0xb78e44 */ __asm { MOV ECX,EBX }
    /* +0xb78e46 */ __asm { ROL R11D,CL }
    /* +0xb78e49 */ __asm { MOVSXD R11,R11D }
    /* +0xb78e4c */ __asm { CMP R10,R11 }
    /* +0xb78e4f */ __asm { MOV R8,RDI }
    /* +0xb78e52 */ __asm { JLE 0x7fffa52e9061 }
    /* +0xb78e58 */ __asm { MOV EDI,0x3d30f12c }
    /* +0xb78e5d */ __asm { MOV R14,qword ptr [RBP + 0x11d8] }
    /* +0xb78e64 */ __asm { IMUL EDI,R14D }
    /* +0xb78e68 */ __asm { ROR EDI,0x1 }
    /* +0xb78e6a */ __asm { ADD EDI,R8D }
    /* +0xb78e6d */ __asm { IMUL EDI,dword ptr [RBP + 0xd0] }
    /* +0xb78e74 */ __asm { MOV dword ptr [RBP + 0x20c],0xb65bee60 }
    /* +0xb78e7e */ __asm { MOV R11D,dword ptr [RBP + 0x20c] }
    /* +0xb78e85 */ __asm { RDTSC }
    /* +0xb78e87 */ __asm { SHL RDX,0x20 }
    /* +0xb78e8b */ __asm { OR RDX,RAX }
    /* +0xb78e8e */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xb78e98 */ __asm { IMUL R11,RDX }
    /* +0xb78e9c */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xb78ea6 */ __asm { ADD RCX,R11 }
    /* +0xb78ea9 */ __asm { MOV RDX,RCX }
    /* +0xb78eac */ __asm { SHR RDX,0x2d }
    /* +0xb78eb0 */ __asm { MOV R10,RCX }
    /* +0xb78eb3 */ __asm { SHR R10,0x1b }
    /* +0xb78eb7 */ __asm { SHR RCX,0x3b }
    /* +0xb78ebb */ __asm { XOR R10D,EDX }
    /* +0xb78ebe */ __asm { ROR R10D,CL }
    /* +0xb78ec1 */ __asm { JMP 0x7fffa52e90d2 }
    /* +0xb78ec6 */ __asm { MOV dword ptr [RBP + 0x5e0],0xae16eeea }
    /* +0xb78ed0 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb78ed7 */ __asm { TEST R11D,R11D }
    /* +0xb78eda */ __asm { MOV R14,qword ptr [RBP + 0x11d8] }
    /* +0xb78ee1 */ __asm { NOP }
    /* +0xb78ee2 */ __asm { NOP }
    /* +0xb78ee3 */ __asm { NOP }
    /* +0xb78ee4 */ __asm { NOP }
    /* +0xb78ee5 */ __asm { NOP }
    /* +0xb78ee6 */ __asm { NOP }
    /* +0xb78ee7 */ __asm { NOP }
    /* +0xb78ee8 */ __asm { NOP }
    /* +0xb78ee9 */ __asm { NOP }
    /* +0xb78eea */ __asm { NOP }
    /* +0xb78eeb */ __asm { NOP }
    /* +0xb78eec */ __asm { NOP }
    /* +0xb78eed */ __asm { PUSHFQ }
    /* +0xb78eee */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb78ef6 */ __asm { POPFQ }
    /* +0xb78ef7 */ __asm { MOV R11D,dword ptr [RAX + 0x10] }
    /* +0xb78efb */ __asm { SUB R11D,dword ptr [RAX + 0x8] }
    /* +0xb78eff */ __asm { MOV dword ptr [RBP + 0x120],R11D }
    /* +0xb78f06 */ __asm { MOV dword ptr [RBP + 0x5e0],0xfa5abcc2 }
    /* +0xb78f10 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb78f17 */ __asm { TEST R11B,0x1 }
    /* +0xb78f1b */ __asm { MOV R12,qword ptr [RBP + 0x1298] }
    /* +0xb78f22 */ __asm { MOV RBX,qword ptr [RBP + 0x480] }
    /* +0xb78f29 */ __asm { JNZ 0x7fffa5351045 }
    /* +0xb78f2f */ __asm { MOV R11W,0xfdb3 }
    /* +0xb78f34 */ __asm { MOV R8,0x0 }
    /* +0xb78f3b */ __asm { NOP }
    /* +0xb78f3d */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb78f44 */ __asm { MOV RDX,qword ptr [RAX + 0x10] }
}


// ============================================================================
// Function : FUN_7fffa52e9279  |  RVA: 0xb79279  |  Size: 748 bytes
// Callers  : FUN_7fffa5333440@0xbc3440
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52e9279(void) {
    /* +0xb79279 */ __asm { MOV R8D,0x2e5c0704 }
    /* +0xb7927f */ __asm { MOV R11,-0x228f540539855b8f }
    /* +0xb79289 */ __asm { IMUL R11,R8 }
    /* +0xb7928d */ __asm { ROL R11,0x25 }
    /* +0xb79291 */ __asm { MOV RDX,0x104d002c66aad5a7 }
    /* +0xb7929b */ __asm { IMUL RDX,R11 }
    /* +0xb7929f */ __asm { MOV R11,-0x2523926ab69c8d0e }
    /* +0xb792a9 */ __asm { CMP RDX,R11 }
    /* +0xb792ac */ __asm { JZ 0x7fffa536842b }
    /* +0xb792b2 */ __asm { MOV R10D,dword ptr [R8 + 0x51a1fbc0] }
    /* +0xb792b9 */ __asm { MOV R11,0x5555555555555556 }
    /* +0xb792c3 */ __asm { IMUL R11,R10 }
    /* +0xb792c7 */ __asm { MOV RDX,0x5555555555555555 }
    /* +0xb792d1 */ __asm { CMP R11,RDX }
    /* +0xb792d4 */ __asm { JA 0x7fffa52e93f0 }
    /* +0xb792da */ __asm { PXOR XMM0,XMM0 }
    /* +0xb792de */ __asm { MOVDQA xmmword ptr [RBP + 0x5e0],XMM0 }
    /* +0xb792e6 */ __asm { MOV dword ptr [RBP + 0x1070],0x21a8f7a7 }
    /* +0xb792f0 */ __asm { MOV R11D,dword ptr [RBP + 0x1070] }
    /* +0xb792f7 */ __asm { MOV dword ptr [RBP + 0x5e0],0x0 }
    /* +0xb79301 */ __asm { MOV dword ptr [RBP + 0x1070],0x4080012a }
    /* +0xb7930b */ __asm { MOV R11D,dword ptr [RBP + 0x1070] }
    /* +0xb79312 */ __asm { CMP R11D,0xf03002b2 }
    /* +0xb79319 */ __asm { JNC 0x7fffa5371bcb }
    /* +0xb7931f */ __asm { MOV dword ptr [RBP + 0x1070],0x2a497101 }
    /* +0xb79329 */ __asm { MOV R11D,dword ptr [RBP + 0x1070] }
    /* +0xb79330 */ __asm { CMP R11D,0x1a16149d }
    /* +0xb79337 */ __asm { NOP }
    /* +0xb79338 */ __asm { NOP }
    /* +0xb79339 */ __asm { NOP }
    /* +0xb7933a */ __asm { NOP }
    /* +0xb7933b */ __asm { NOP }
    /* +0xb7933c */ __asm { LEA R8,[0x7fffa477d844] }
    /* +0xb79343 */ __asm { MOV R11,0x7b16043a0d1da145 }
    /* +0xb7934d */ __asm { CMP R8,R11 }
    /* +0xb79350 */ __asm { NOP }
    /* +0xb79351 */ __asm { NOP }
    /* +0xb79352 */ __asm { NOP }
    /* +0xb79353 */ __asm { NOP }
    /* +0xb79354 */ __asm { NOP }
    /* +0xb79355 */ __asm { NOP }
    /* +0xb79356 */ __asm { NOP }
    /* +0xb79357 */ __asm { NOP }
    /* +0xb79358 */ __asm { NOP }
    /* +0xb79359 */ __asm { NOP }
    /* +0xb7935a */ __asm { NOP }
    /* +0xb7935b */ __asm { NOP }
    /* +0xb7935c */ __asm { NOP }
    /* +0xb7935d */ __asm { NOP }
    /* +0xb7935e */ __asm { NOP }
    /* +0xb7935f */ __asm { NOP }
    /* +0xb79360 */ __asm { NOP }
    /* +0xb793f0 */ __asm { LEA R8,[0x7fffa47841a0] }
    /* +0xb793f7 */ __asm { MOV R11,0x3b24cf1046b401cd }
    /* +0xb79401 */ __asm { CMP R8,R11 }
    /* +0xb79404 */ __asm { JZ 0x7fffa5355ff0 }
    /* +0xb7940a */ __asm { MOV R11W,0xf153 }
    /* +0xb7940f */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xb79416 */ __asm { MOV R10D,EDX }
    /* +0xb79419 */ __asm { SUB R10D,R12D }
    /* +0xb7941c */ __asm { MOV CX,0x7497 }
    /* +0xb79420 */ __asm { ADD ECX,R10D }
    /* +0xb79423 */ __asm { ADD ECX,0x6910 }
    /* +0xb79429 */ __asm { ROR CX,0x1 }
    /* +0xb7942c */ __asm { XOR R11D,EDX }
    /* +0xb7942f */ __asm { IMUL R11D,R11D,-0x5425 }
    /* +0xb79436 */ __asm { XOR R11D,EDI }
    /* +0xb79439 */ __asm { MOV RDI,RDX }
    /* +0xb7943c */ __asm { MOV qword ptr [RBP + 0x5e0],R10 }
    /* +0xb79443 */ __asm { LEA R10D,[RBX + RCX*0x1] }
    /* +0xb79447 */ __asm { ROL R11W,0x3 }
    /* +0xb7944c */ __asm { MOVZX R10D,R10W }
    /* +0xb79450 */ __asm { ADD R11D,R12D }
    /* +0xb79453 */ __asm { MOV EAX,dword ptr [R8 + 0xbf0] }
    /* +0xb7945a */ __asm { JMP 0x7fffa52e9668 }
    /* +0xb79668 */ __asm { MOVZX R8D,R11W }
    /* +0xb7966c */ __asm { JMP 0x7fffa52e9ada }
    /* +0xb79859 */ __asm { PUSHFQ }
    /* +0xb7985a */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb79862 */ __asm { POPFQ }
    /* +0xb79863 */ __asm { LEA R8,[0x7fffa47889ac] }
    /* +0xb7986a */ __asm { MOV R11,-0x4688fe50ac058e63 }
    /* +0xb79874 */ __asm { CMP R8,R11 }
    /* +0xb79877 */ __asm { NOP }
    /* +0xb79878 */ __asm { NOP }
    /* +0xb79879 */ __asm { NOP }
    /* +0xb7987a */ __asm { NOP }
    /* +0xb7987b */ __asm { NOP }
    /* +0xb7987c */ __asm { MOV qword ptr [RBP + 0x5e0],R11 }
    /* +0xb79883 */ __asm { MOV R11W,0x66d1 }
    /* +0xb79888 */ __asm { MOV EAX,dword ptr [R8 + -0x3c1c] }
    /* +0xb7988f */ __asm { MOV R10W,0xf405 }
    /* +0xb79894 */ __asm { XOR R10D,EDI }
    /* +0xb79897 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xb7989e */ __asm { ADD R10D,EDI }
    /* +0xb798a1 */ __asm { ADD R10D,0xe1b }
    /* +0xb798a8 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb798af */ __asm { ROR R10W,CL }
    /* +0xb798b3 */ __asm { ADD R11D,0x194a }
    /* +0xb798ba */ __asm { MOVZX R8D,R10W }
    /* +0xb798be */ __asm { IMUL R9D,R11D }
    /* +0xb798c2 */ __asm { MOV ECX,EBX }
    /* +0xb798c4 */ __asm { ROR R9W,CL }
    /* +0xb798c8 */ __asm { MOV ECX,EDI }
    /* +0xb798ca */ __asm { ROL R9W,CL }
    /* +0xb798ce */ __asm { MOVZX R10D,R9W }
    /* +0xb798d2 */ __asm { JMP 0x7fffa52e9ada }
    /* +0xb79ada */ __asm { LEA R9,[RBP + 0x120] }
    /* +0xb79ae1 */ __asm { LEA RDX,[RBP + 0x1210] }
    /* +0xb79ae8 */ __asm { SYSCALL }
    /* +0xb79aea */ __asm { MOV R10B,0xc2 }
    /* +0xb79aed */ __asm { ADD R10B,BL }
    /* +0xb79af0 */ __asm { ROL R10B,0x6 }
    /* +0xb79af4 */ __asm { ADD R10B,0xc6 }
    /* +0xb79af8 */ __asm { MOV ECX,EDI }
    /* +0xb79afa */ __asm { ROL R10B,CL }
    /* +0xb79afd */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb79b04 */ __asm { ROR R10B,CL }
    /* +0xb79b07 */ __asm { TEST EAX,EAX }
    /* +0xb79b09 */ __asm { JS 0x7fffa52e9bd1 }
    /* +0xb79b0f */ __asm { CMP uint8_t ptr [RBP + 0x1210],R10B }
    /* +0xb79b16 */ __asm { JZ 0x7fffa52e9bd1 }
    /* +0xb79b1c */ __asm { MOV R11W,0x8e00 }
    /* +0xb79b21 */ __asm { ADD R11D,R12D }
    /* +0xb79b24 */ __asm { ROL R11W,0x5 }
    /* +0xb79b29 */ __asm { IMUL R11D,R15D }
    /* +0xb79b2d */ __asm { XOR R11D,EDI }
    /* +0xb79b30 */ __asm { MOVZX R10D,R11W }
    /* +0xb79b34 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xb79b38 */ __asm { MOV R10W,0xdc84 }
    /* +0xb79b3d */ __asm { ADD R10D,EDI }
    /* +0xb79b40 */ __asm { ROL R10W,0xd }
    /* +0xb79b45 */ __asm { XOR R10D,EBX }
    /* +0xb79b48 */ __asm { ADD R10D,R12D }
    /* +0xb79b4b */ __asm { MOVZX R10D,R10W }
    /* +0xb79b4f */ __asm { MOV EDX,0x2c8 }
    /* +0xb79b54 */ __asm { ADD RDX,qword ptr GS:[R10] }
    /* +0xb79b58 */ __asm { IMUL RDX,qword ptr [R11 + 0x3d0] }
    /* +0xb79b60 */ __asm { MOV R11,0x52768d1ccd21fa05 }
    /* +0xb79b6a */ __asm { CMP RDX,R11 }
    /* +0xb79b6d */ __asm { JNZ 0x7fffa52e9b7d }
    /* +0xb79b6f */ __asm { RET 0xa332 }
    /* +0xb79b7d */ __asm { MOV dword ptr [RBP + 0x5e0],0xde16ddac }
    /* +0xb79b87 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb79b8e */ __asm { MOV dword ptr [RBP + 0x5e0],0x342d077a }
    /* +0xb79b98 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb79b9f */ __asm { CMP R11D,0xc01dd97a }
    /* +0xb79ba6 */ __asm { JNC 0x7fffa53517fa }
    /* +0xb79bac */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb79bb3 */ __asm { MOV R8,0x0 }
    /* +0xb79bba */ __asm { NOP }
    /* +0xb79bbc */ __asm { MOV dword ptr [RBP + 0x5e0],0x64890b2a }
    /* +0xb79bc6 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb79bcd */ __asm { SUB RSP,0x20 }
    /* +0xb79bd1 */ __asm { MOV R11,-0x3d476109c8f51abd }
    /* +0xb79bdb */ __asm { CMP qword ptr [RBP + 0x190],R11 }
    /* +0xb79be2 */ __asm { NOP }
    /* +0xb79be3 */ __asm { NOP }
    /* +0xb79be4 */ __asm { NOP }
    /* +0xb79be5 */ __asm { NOP }
    /* +0xb79be6 */ __asm { NOP }
    /* +0xb79be7 */ __asm { NOP }
    /* +0xb79be8 */ __asm { NOP }
    /* +0xb79be9 */ __asm { NOP }
    /* +0xb79bea */ __asm { NOP }
    /* +0xb79beb */ __asm { NOP }
    /* +0xb79bec */ __asm { NOP }
    /* +0xb79bed */ __asm { NOP }
    /* +0xb79bee */ __asm { NOP }
    /* +0xb79bef */ __asm { NOP }
    /* +0xb79bf0 */ __asm { NOP }
    /* +0xb79bf1 */ __asm { NOP }
    /* +0xb79bf2 */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa52eb8bb  |  RVA: 0xb7b8bb  |  Size: 22737 bytes
// Callers  : FUN_7fffa5302a29@0xb92a29
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52eb8bb(void) {
    /* +0xb7b8bb */ __asm { MOV R10D,0x6c1d9adb }
    /* +0xb7b8c1 */ __asm { IMUL R10D,R14D }
    /* +0xb7b8c5 */ __asm { ROL R10D,0xa }
    /* +0xb7b8c9 */ __asm { MOV ECX,R12D }
    /* +0xb7b8cc */ __asm { ROR R10D,CL }
    /* +0xb7b8cf */ __asm { MOV ECX,EDI }
    /* +0xb7b8d1 */ __asm { ROL R10D,CL }
    /* +0xb7b8d4 */ __asm { XOR R10D,0xa4957f0a }
    /* +0xb7b8db */ __asm { MOV dword ptr [RBP + 0x5e0],R10D }
    /* +0xb7b8e2 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb7b8e9 */ __asm { IMUL R11D,R11D,0x5800 }
    /* +0xb7b8f0 */ __asm { OR R11D,0x400 }
    /* +0xb7b8f7 */ __asm { MOV dword ptr [RBP + 0x5e0],0x551a0000 }
    /* +0xb7b901 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb7b908 */ __asm { TEST R10D,R10D }
    /* +0xb7b90b */ __asm { JS 0x7fffa5352ca2 }
    /* +0xb7b911 */ __asm { MOV R10D,EAX }
    /* +0xb7b914 */ __asm { SUB R10D,dword ptr [RBP + 0x12e0] }
    /* +0xb7b91b */ __asm { SETA CL }
    /* +0xb7b91e */ __asm { CMP R10D,R11D }
    /* +0xb7b921 */ __asm { SETA R10B }
    /* +0xb7b925 */ __asm { AND R10B,CL }
    /* +0xb7b928 */ __asm { CMP R10B,0x1 }
    /* +0xb7b92c */ __asm { JZ 0x7fffa531354c }
    /* +0xb7b932 */ __asm { LEA R8,[0x7fffa47b791e] }
    /* +0xb7b939 */ __asm { MOV R11,-0x3051a677f5ee620a }
    /* +0xb7b943 */ __asm { CMP R8,R11 }
    /* +0xb7b946 */ __asm { JZ 0x7fffa5352caa }
    /* +0xb7b94c */ __asm { MOV R11W,0xa2a6 }
    /* +0xb7b951 */ __asm { XOR R11D,0xffffa2bc }
    /* +0xb7b958 */ __asm { ADD R11D,-0x17 }
    /* +0xb7b95c */ __asm { MOVZX R9D,uint8_t ptr [R8 + 0x5262] }
    /* +0xb7b964 */ __asm { XOR R11D,EDI }
    /* +0xb7b967 */ __asm { MOV ECX,R12D }
    /* +0xb7b96a */ __asm { ROL R11W,CL }
    /* +0xb7b96e */ __asm { MOVZX ECX,uint8_t ptr [R8 + R9*0x4 + 0x526b] }
    /* +0xb7b977 */ __asm { MOVZX R10D,uint8_t ptr [R8 + 0x528e] }
    /* +0xb7b97f */ __asm { XOR CL,uint8_t ptr [R8 + 0x528c] }
    /* +0xb7b986 */ __asm { ROL CL,0x1 }
    /* +0xb7b988 */ __asm { MOV uint8_t ptr [RBP + 0x5e0],CL }
    /* +0xb7b98e */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x528d] }
    /* +0xb7b996 */ __asm { XOR CL,uint8_t ptr [R8 + R9*0x4 + 0x526c] }
    /* +0xb7b99e */ __asm { ROL CL,0x1 }
    /* +0xb7b9a0 */ __asm { MOVZX EDX,uint8_t ptr [R8 + 0x528f] }
    /* +0xb7b9a8 */ __asm { MOV uint8_t ptr [RBP + 0x5e1],CL }
    /* +0xb7b9ae */ __asm { XOR R10B,uint8_t ptr [R8 + R9*0x4 + 0x526d] }
    /* +0xb7b9b6 */ __asm { ROL R10B,0x1 }
    /* +0xb7b9b9 */ __asm { MOV uint8_t ptr [RBP + 0x5e2],R10B }
    /* +0xb7b9c0 */ __asm { XOR DL,uint8_t ptr [R8 + R9*0x4 + 0x526e] }
    /* +0xb7b9c8 */ __asm { ROL DL,0x1 }
    /* +0xb7b9ca */ __asm { MOV uint8_t ptr [RBP + 0x5e3],DL }
    /* +0xb7b9d0 */ __asm { MOV R10D,0x4000000 }
    /* +0xb7b9d6 */ __asm { AND R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb7b9dd */ __asm { MOVZX R11D,R11W }
    /* +0xb7b9e1 */ __asm { CMP R10D,R11D }
    /* +0xb7b9e4 */ __asm { JNZ 0x7fffa52eba2d }
    /* +0xb7b9e6 */ __asm { MOV dword ptr [RBP + 0x5e0],0xadf6a58c }
    /* +0xb7b9f0 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb7b9f7 */ __asm { CMP R11D,0x23aa0cc }
    /* +0xb7b9fe */ __asm { NOP }
    /* +0xb7b9ff */ __asm { NOP }
    /* +0xb7ba00 */ __asm { NOP }
    /* +0xb7ba01 */ __asm { NOP }
    /* +0xb7ba02 */ __asm { NOP }
    /* +0xb7ba03 */ __asm { NOP }
    /* +0xb7ba04 */ __asm { NOP }
    /* +0xb7ba05 */ __asm { NOP }
    /* +0xb7ba06 */ __asm { NOP }
    /* +0xb7ba07 */ __asm { NOP }
    /* +0xb7ba08 */ __asm { NOP }
    /* +0xb7ba09 */ __asm { NOP }
    /* +0xb7ba0a */ __asm { NOP }
    /* +0xb7ba0b */ __asm { NOP }
    /* +0xb7ba0c */ __asm { NOP }
    /* +0xb7ba0d */ __asm { NOP }
    /* +0xb7ba0e */ __asm { NOP }
    /* +0xb7ba2d */ __asm { MOV R11D,0x826281f2 }
    /* +0xb7ba33 */ __asm { SUB R11D,EDI }
    /* +0xb7ba36 */ __asm { ADD R11D,0x682e8432 }
    /* +0xb7ba3d */ __asm { IMUL R11D,R14D }
    /* +0xb7ba41 */ __asm { XOR R11D,0xc6a413b7 }
    /* +0xb7ba48 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb7ba4f */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb7ba56 */ __asm { TEST R11B,0x1 }
    /* +0xb7ba5a */ __asm { JNZ 0x7fffa5352cb9 }
    /* +0xb7ba60 */ __asm { MOV R11D,0xb19efd22 }
    /* +0xb7ba66 */ __asm { MOV dword ptr [RBP + 0x3b0],R11D }
    /* +0xb7ba6d */ __asm { MOVD XMM0,R12D }
    /* +0xb7ba72 */ __asm { MOV R8D,0xcf257a6 }
    /* +0xb7ba78 */ __asm { MOV R10D,0xe0dae11a }
    /* +0xb7ba7e */ __asm { MOV EAX,0xdc878880 }
    /* +0xb7ba83 */ __asm { ADD EAX,R13D }
    /* +0xb7ba86 */ __asm { LEA R11,[0x7fffa47bfb5e] }
    /* +0xb7ba8d */ __asm { MOVD XMM5,R10D }
    /* +0xb7ba92 */ __asm { MOV DX,0xbff4 }
    /* +0xb7ba96 */ __asm { IMUL EDX,R15D }
    /* +0xb7ba9a */ __asm { NOT EDX }
    /* +0xb7ba9c */ __asm { MOV R10D,0x2e0c7206 }
    /* +0xb7baa2 */ __asm { ADD R8D,R13D }
    /* +0xb7baa5 */ __asm { IMUL ECX,R8D,-0x7d8dc397 }
    /* +0xb7baac */ __asm { MOVDQA XMM1,XMM0 }
    /* +0xb7bab0 */ __asm { PSUBD XMM1,XMM6 }
    /* +0xb7bab4 */ __asm { NOT EAX }
    /* +0xb7bab6 */ __asm { IMUL R8D,EAX,0x234874bb }
    /* +0xb7babd */ __asm { XOR R8D,EDI }
    /* +0xb7bac0 */ __asm { IMUL R8D,EBX }
    /* +0xb7bac4 */ __asm { SUB EDX,R13D }
    /* +0xb7bac7 */ __asm { MOVD R15D,XMM1 }
    /* +0xb7bacc */ __asm { ADD R15D,ECX }
    /* +0xb7bacf */ __asm { MOV ECX,R12D }
    /* +0xb7bad2 */ __asm { ROL DX,CL }
    /* +0xb7bad5 */ __asm { ADD EDX,0xffffbc1e }
    /* +0xb7badb */ __asm { MOVSX RCX,DX }
    /* +0xb7badf */ __asm { MOV RDI,qword ptr [R11 + RCX*0x1] }
    /* +0xb7bae3 */ __asm { MOV R11,RDI }
    /* +0xb7bae6 */ __asm { SHR R11,0x1c }
    /* +0xb7baea */ __asm { MOV RAX,RDI }
    /* +0xb7baed */ __asm { SHR RAX,0x22 }
    /* +0xb7baf1 */ __asm { AND EAX,0x20000000 }
    /* +0xb7baf6 */ __asm { MOV R9,RDI }
    /* +0xb7baf9 */ __asm { SHR R9,0x1f }
    /* +0xb7bafd */ __asm { MOV RDX,RDI }
    /* +0xb7bb00 */ __asm { SHR RDX,0xe }
    /* +0xb7bb04 */ __asm { MOV qword ptr [RBP + 0x590],RDX }
    /* +0xb7bb0b */ __asm { MOV ECX,EDX }
    /* +0xb7bb0d */ __asm { AND ECX,0x10 }
    /* +0xb7bb10 */ __asm { MOVD XMM3,ECX }
    /* +0xb7bb14 */ __asm { AND R11D,0x380000 }
    /* +0xb7bb1b */ __asm { AND R9D,0x400000 }
    /* +0xb7bb22 */ __asm { OR R9D,R11D }
    /* +0xb7bb25 */ __asm { OR R9D,EAX }
    /* +0xb7bb28 */ __asm { MOV RSI,RDI }
    /* +0xb7bb2b */ __asm { SHR RSI,0x3 }
    /* +0xb7bb2f */ __asm { MOV dword ptr [RBP + 0x12e0],ESI }
    /* +0xb7bb35 */ __asm { AND ESI,0x80 }
    /* +0xb7bb3b */ __asm { MOV RCX,RDI }
    /* +0xb7bb3e */ __asm { SHR RCX,0x18 }
    /* +0xb7bb42 */ __asm { AND ECX,R15D }
    /* +0xb7bb45 */ __asm { MOV qword ptr [RBP + 0x5d8],RCX }
    /* +0xb7bb4c */ __asm { MOV EAX,EDI }
    /* +0xb7bb4e */ __asm { AND EAX,0x1 }
    /* +0xb7bb51 */ __asm { MOV RDX,RDI }
    /* +0xb7bb54 */ __asm { SHR RDX,0x20 }
    /* +0xb7bb58 */ __asm { AND EDX,0x18000000 }
    /* +0xb7bb5e */ __asm { OR EDX,R9D }
    /* +0xb7bb61 */ __asm { MOVQ XMM1,RDI }
    /* +0xb7bb66 */ __asm { PSHUFD XMM4,XMM1,0x44 }
    /* +0xb7bb6b */ __asm { MOVDQA XMM1,XMM4 }
    /* +0xb7bb6f */ __asm { MOV R11,RDI }
    /* +0xb7bb72 */ __asm { SHR R11,0x14 }
    /* +0xb7bb76 */ __asm { MOV EBX,R11D }
    /* +0xb7bb79 */ __asm { MOV R9,R11 }
    /* +0xb7bb7c */ __asm { AND EBX,0x6000 }
    /* +0xb7bb82 */ __asm { OR EBX,EDX }
    /* +0xb7bb84 */ __asm { MOV R11D,EDI }
    /* +0xb7bb87 */ __asm { SHR R11D,0x4 }
    /* +0xb7bb8b */ __asm { AND R11D,0x700 }
    /* +0xb7bb92 */ __asm { OR R11D,EAX }
    /* +0xb7bb95 */ __asm { OR R11D,ESI }
    /* +0xb7bb98 */ __asm { MOV dword ptr [RBP + 0x560],R11D }
    /* +0xb7bb9f */ __asm { MOVDQA XMM13,XMM4 }
    /* +0xb7bba4 */ __asm { PSRLQ XMM13,0x14 }
    /* +0xb7bbaa */ __asm { PAND XMM13,xmmword ptr [0x7fffa56b84f0] }
    /* +0xb7bbb3 */ __asm { PSHUFD XMM14,XMM13,0xee }
    /* +0xb7bbb9 */ __asm { POR XMM14,XMM13 }
    /* +0xb7bbbe */ __asm { PSUBD XMM5,XMM2 }
    /* +0xb7bbc2 */ __asm { PSRLQ XMM4,0x20 }
    /* +0xb7bbc7 */ __asm { PAND XMM4,xmmword ptr [0x7fffa56b84e0] }
    /* +0xb7bbcf */ __asm { PSHUFD XMM13,XMM4,0xee }
    /* +0xb7bbd5 */ __asm { POR XMM13,XMM4 }
    /* +0xb7bbda */ __asm { MOVD R14D,XMM13 }
    /* +0xb7bbdf */ __asm { MOVD R11D,XMM14 }
    /* +0xb7bbe4 */ __asm { MOV EAX,R11D }
    /* +0xb7bbe7 */ __asm { SUB EAX,R14D }
    /* +0xb7bbea */ __asm { MOV dword ptr [RBP + 0x110],EAX }
    /* +0xb7bbf0 */ __asm { OR R14D,R11D }
    /* +0xb7bbf3 */ __asm { MOV RCX,RDI }
    /* +0xb7bbf6 */ __asm { SHR RCX,0x1e }
    /* +0xb7bbfa */ __asm { AND ECX,R8D }
    /* +0xb7bbfd */ __asm { MOV qword ptr [RBP + 0x4d0],RCX }
    /* +0xb7bc04 */ __asm { MOVD R11D,XMM5 }
    /* +0xb7bc09 */ __asm { MOV RDX,R13 }
    /* +0xb7bc0c */ __asm { IMUL R13D,R11D,0x46c8cc2d }
    /* +0xb7bc13 */ __asm { ADD R13D,R12D }
    /* +0xb7bc16 */ __asm { IMUL R13D,dword ptr [RBP + 0xd0] }
    /* +0xb7bc1e */ __asm { XOR R13D,0x218b5ce6 }
    /* +0xb7bc25 */ __asm { MOV R8,-0x48b7a538c0b01b3b }
    /* +0xb7bc2f */ __asm { MOV RCX,RDI }
    /* +0xb7bc32 */ __asm { SHR RCX,0x12 }
    /* +0xb7bc36 */ __asm { MOV EAX,ECX }
    /* +0xb7bc38 */ __asm { AND ECX,0x180 }
    /* +0xb7bc3e */ __asm { OR EBX,ECX }
    /* +0xb7bc40 */ __asm { MOV RCX,RDI }
    /* +0xb7bc43 */ __asm { SHR RCX,0x15 }
    /* +0xb7bc47 */ __asm { AND ECX,0x10000 }
    /* +0xb7bc4d */ __asm { OR EBX,ECX }
    /* +0xb7bc4f */ __asm { MOV RCX,RDI }
    /* +0xb7bc52 */ __asm { SHR RCX,0x1b }
    /* +0xb7bc56 */ __asm { AND ECX,0x40000 }
    /* +0xb7bc5c */ __asm { MOV R11D,R9D }
    /* +0xb7bc5f */ __asm { MOV R12,R9 }
    /* +0xb7bc62 */ __asm { AND R11D,0x8000 }
    /* +0xb7bc69 */ __asm { OR R11D,ECX }
    /* +0xb7bc6c */ __asm { MOV RCX,RDI }
    /* +0xb7bc6f */ __asm { SHR RCX,0x1a }
    /* +0xb7bc73 */ __asm { AND ECX,0x20000 }
    /* +0xb7bc79 */ __asm { OR R11D,ECX }
    /* +0xb7bc7c */ __asm { OR R11D,EBX }
    /* +0xb7bc7f */ __asm { MOVD XMM5,R11D }
    /* +0xb7bc84 */ __asm { MOV R11D,EDI }
    /* +0xb7bc87 */ __asm { SHR R11D,0xc }
    /* +0xb7bc8b */ __asm { AND R11D,0x8 }
    /* +0xb7bc8f */ __asm { POR XMM5,XMM3 }
    /* +0xb7bc93 */ __asm { MOVD R8D,XMM5 }
    /* +0xb7bc98 */ __asm { OR R8D,R11D }
    /* +0xb7bc9b */ __asm { MOV dword ptr [RBP + 0x290],R8D }
    /* +0xb7bca2 */ __asm { MOV R11D,EDI }
    /* +0xb7bca5 */ __asm { SHR R11D,0x9 }
    /* +0xb7bca9 */ __asm { AND R11D,0x4 }
    /* +0xb7bcad */ __asm { MOV RCX,qword ptr [RBP + 0x590] }
    /* +0xb7bcb4 */ __asm { AND ECX,0x20 }
    /* +0xb7bcb7 */ __asm { OR ECX,R11D }
    /* +0xb7bcba */ __asm { MOV RBX,RDI }
    /* +0xb7bcbd */ __asm { SHR RBX,0x1 }
    /* +0xb7bcc0 */ __asm { MOV R11D,EBX }
    /* +0xb7bcc3 */ __asm { AND R11D,0x1 }
    /* +0xb7bcc7 */ __asm { OR ECX,R11D }
    /* +0xb7bcca */ __asm { MOV R11D,EDI }
    /* +0xb7bccd */ __asm { SHR R11D,0x6 }
    /* +0xb7bcd1 */ __asm { AND R11D,0x2 }
    /* +0xb7bcd5 */ __asm { OR ECX,R11D }
    /* +0xb7bcd8 */ __asm { MOV qword ptr [RBP + 0x590],RCX }
    /* +0xb7bcdf */ __asm { XOR dword ptr [RBP + 0x3b0],EDX }
    /* +0xb7bce5 */ __asm { ADD R10D,dword ptr [RBP + 0x1298] }
    /* +0xb7bcec */ __asm { IMUL R10D,R10D,0x60b1bccb }
    /* +0xb7bcf3 */ __asm { ADD R10D,EDX }
    /* +0xb7bcf6 */ __asm { XOR R10D,0xe9eb7b68 }
    /* +0xb7bcfd */ __asm { MOV RSI,RDI }
    /* +0xb7bd00 */ __asm { SHR RSI,0x11 }
    /* +0xb7bd04 */ __asm { MOV R15,RDI }
    /* +0xb7bd07 */ __asm { SHR R15,0x17 }
    /* +0xb7bd0b */ __asm { AND R15D,0x38000000 }
    /* +0xb7bd12 */ __asm { AND ESI,0x80000 }
    /* +0xb7bd18 */ __asm { MOV R9D,EDI }
    /* +0xb7bd1b */ __asm { SHR R9D,0x2 }
    /* +0xb7bd1f */ __asm { AND R9D,0x1c }
    /* +0xb7bd23 */ __asm { MOV R8D,EDI }
    /* +0xb7bd26 */ __asm { SHR R8D,0x5 }
    /* +0xb7bd2a */ __asm { AND R8D,0x1800 }
    /* +0xb7bd31 */ __asm { AND EAX,0x1000000 }
    /* +0xb7bd36 */ __asm { MOV dword ptr [RBP + 0x358],EAX }
    /* +0xb7bd3c */ __asm { MOV ECX,EDI }
    /* +0xb7bd3e */ __asm { SHR ECX,0xa }
    /* +0xb7bd41 */ __asm { AND ECX,0x60000 }
    /* +0xb7bd47 */ __asm { MOV RDX,RDI }
    /* +0xb7bd4a */ __asm { SHR RDX,0x13 }
    /* +0xb7bd4e */ __asm { AND EDX,0x2000000 }
    /* +0xb7bd54 */ __asm { MOV R11D,EDI }
    /* +0xb7bd57 */ __asm { SHR R11D,0x10 }
    /* +0xb7bd5b */ __asm { AND R11D,0x40 }
    /* +0xb7bd5f */ __asm { AND dword ptr [RBP + 0x12e0],0x60 }
    /* +0xb7bd66 */ __asm { MOV EAX,EDI }
    /* +0xb7bd68 */ __asm { SHR EAX,0x8 }
    /* +0xb7bd6b */ __asm { AND EAX,0x18000 }
    /* +0xb7bd70 */ __asm { AND EBX,0x2 }
    /* +0xb7bd73 */ __asm { AND R12D,0x4000000 }
    /* +0xb7bd7a */ __asm { MOV qword ptr [RBP + 0xf50],R12 }
    /* +0xb7bd81 */ __asm { MOV R12D,0x802e7057 }
    /* +0xb7bd87 */ __asm { CMP R13,R12 }
    /* +0xb7bd8a */ __asm { MOV R12,qword ptr [RBP + 0x1298] }
    /* +0xb7bd91 */ __asm { MOVD XMM5,dword ptr [RBP + 0x3b0] }
    /* +0xb7bd99 */ __asm { MOVD XMM3,R10D }
    /* +0xb7bd9e */ __asm { MOVD XMM4,R11D }
    /* +0xb7bda3 */ __asm { MOVD XMM13,dword ptr [RBP + 0x290] }
    /* +0xb7bdac */ __asm { CMOVNZ R14D,dword ptr [RBP + 0x110] }
    /* +0xb7bdb4 */ __asm { OR R14D,dword ptr [RBP + 0x590] }
    /* +0xb7bdbb */ __asm { POR XMM13,XMM4 }
    /* +0xb7bdc0 */ __asm { MOVD R11D,XMM13 }
    /* +0xb7bdc5 */ __asm { OR R14D,R11D }
    /* +0xb7bdc8 */ __asm { MOV R11D,EDI }
    /* +0xb7bdcb */ __asm { SHR R11D,0x7 }
    /* +0xb7bdcf */ __asm { AND R11D,0x6000 }
    /* +0xb7bdd6 */ __asm { ADD R11D,dword ptr [RBP + 0x560] }
    /* +0xb7bddd */ __asm { OR R11D,R8D }
    /* +0xb7bde0 */ __asm { ADD R11D,dword ptr [RBP + 0x12e0] }
    /* +0xb7bde7 */ __asm { OR R11D,R9D }
    /* +0xb7bdea */ __asm { OR EBX,ECX }
    /* +0xb7bdec */ __asm { OR EBX,EAX }
    /* +0xb7bdee */ __asm { OR EBX,dword ptr [RBP + 0x358] }
    /* +0xb7bdf4 */ __asm { OR EBX,ESI }
    /* +0xb7bdf6 */ __asm { OR EBX,dword ptr [RBP + 0xf50] }
    /* +0xb7bdfc */ __asm { OR EBX,EDX }
    /* +0xb7bdfe */ __asm { OR EBX,R11D }
    /* +0xb7be01 */ __asm { OR EBX,R15D }
    /* +0xb7be04 */ __asm { PADDD XMM3,XMM0 }
    /* +0xb7be08 */ __asm { OR EBX,dword ptr [RBP + 0x5d8] }
    /* +0xb7be0e */ __asm { MOVD R10D,XMM3 }
    /* +0xb7be13 */ __asm { PSRLQ XMM1,0x12 }
    /* +0xb7be18 */ __asm { PAND XMM1,xmmword ptr [0x7fffa56b84d0] }
    /* +0xb7be20 */ __asm { PSHUFD XMM3,XMM1,0xee }
    /* +0xb7be25 */ __asm { POR XMM3,XMM1 }
    /* +0xb7be29 */ __asm { PADDD XMM5,XMM0 }
    /* +0xb7be2d */ __asm { OR EBX,dword ptr [RBP + 0x4d0] }
    /* +0xb7be33 */ __asm { MOVD R11D,XMM3 }
    /* +0xb7be38 */ __asm { OR R11D,EBX }
    /* +0xb7be3b */ __asm { MOVD EAX,XMM5 }
    /* +0xb7be3f */ __asm { ADD R10D,R11D }
    /* +0xb7be42 */ __asm { SHR R10D,0x2 }
    /* +0xb7be46 */ __asm { XOR R10D,EAX }
    /* +0xb7be49 */ __asm { XOR R10D,R12D }
    /* +0xb7be4c */ __asm { XOR R10D,R14D }
    /* +0xb7be4f */ __asm { CMP R10D,0x701a2f2 }
    /* +0xb7be56 */ __asm { JNZ 0x7fffa530ee7f }
    /* +0xb7be5c */ __asm { MOV R13,RDI }
    /* +0xb7be5f */ __asm { MOV R10D,0xa6a1626c }
    /* +0xb7be65 */ __asm { XOR R10D,0x6f6593ac }
    /* +0xb7be6c */ __asm { MOV R8,0x4b28304de3716f77 }
    /* +0xb7be76 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xb7be7d */ __asm { MOV ECX,EDI }
    /* +0xb7be7f */ __asm { ROL R10D,CL }
    /* +0xb7be82 */ __asm { MOV R14,qword ptr [RBP + 0x480] }
    /* +0xb7be89 */ __asm { MOV ECX,R14D }
    /* +0xb7be8c */ __asm { ROR R10D,CL }
    /* +0xb7be8f */ __asm { MOV EAX,0xe87bad3 }
    /* +0xb7be94 */ __asm { SUB EAX,R14D }
    /* +0xb7be97 */ __asm { XOR EAX,0xdf70e997 }
    /* +0xb7be9c */ __asm { MOV ECX,EDI }
    /* +0xb7be9e */ __asm { ROR EAX,CL }
    /* +0xb7bea0 */ __asm { NOT EAX }
    /* +0xb7bea2 */ __asm { MOV R15,qword ptr [RBP + 0xd0] }
    /* +0xb7bea9 */ __asm { IMUL EAX,R15D }
    /* +0xb7bead */ __asm { MOVSXD RDX,EAX }
    /* +0xb7beb0 */ __asm { MOV AX,0xa9d4 }
    /* +0xb7beb4 */ __asm { MOV R8,qword ptr [RBP + 0x188] }
    /* +0xb7bebb */ __asm { IMUL R8D,EAX }
    /* +0xb7bebf */ __asm { XOR R8D,R12D }
    /* +0xb7bec2 */ __asm { NOT R8D }
    /* +0xb7bec5 */ __asm { ADD R8D,EDI }
    /* +0xb7bec8 */ __asm { MOVZX EAX,R8W }
    /* +0xb7becc */ __asm { MOV R9D,0xb9ccbaa1 }
    /* +0xb7bed2 */ __asm { ADD R9D,R12D }
    /* +0xb7bed5 */ __asm { ROR R9D,0x1 }
    /* +0xb7bed8 */ __asm { MOV ECX,R14D }
    /* +0xb7bedb */ __asm { ROL R9D,CL }
    /* +0xb7bede */ __asm { XOR R9D,EDI }
    /* +0xb7bee1 */ __asm { MOV R8D,dword ptr [R9] }
    /* +0xb7bee4 */ __asm { CMP R8D,0x5 }
    /* +0xb7bee8 */ __asm { SETNC R9B }
    /* +0xb7beec */ __asm { XOR R10D,R12D }
    /* +0xb7beef */ __asm { CMP RDX,R10 }
    /* +0xb7bef2 */ __asm { SETL CL }
    /* +0xb7bef5 */ __asm { XOR CL,R9B }
    /* +0xb7bef8 */ __asm { JNZ 0x7fffa52ebf4b }
    /* +0xb7befa */ __asm { CMP R8D,EAX }
    /* +0xb7befd */ __asm { JC 0x7fffa52ebf4b }
    /* +0xb7beff */ __asm { MOV dword ptr [RBP + 0x5e0],0x823ec3ce }
    /* +0xb7bf09 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb7bf10 */ __asm { AND R10D,0x1 }
    /* +0xb7bf14 */ __asm { MOV R8W,0xb6d1 }
    /* +0xb7bf19 */ __asm { NOT R8D }
    /* +0xb7bf1c */ __asm { LEA EAX,[RDI + R8*0x1] }
    /* +0xb7bf20 */ __asm { ROL AX,0x6 }
    /* +0xb7bf24 */ __asm { ADD EAX,0xffffde98 }
    /* +0xb7bf29 */ __asm { IMUL EAX,dword ptr [RBP + 0x4a0] }
    /* +0xb7bf30 */ __asm { MOVZX EAX,AX }
    /* +0xb7bf33 */ __asm { CMP R10D,EAX }
    /* +0xb7bf36 */ __asm { MOV RSI,qword ptr [RBP + 0xe8] }
    /* +0xb7bf3d */ __asm { JNZ 0x7fffa5358e77 }
    /* +0xb7bf43 */ __asm { MOV R10D,0x1 }
    /* +0xb7bf49 */ __asm { JMP 0x7fffa52ebfc4 }
    /* +0xb7bf4b */ __asm { TEST CL,CL }
    /* +0xb7bf4d */ __asm { MOV RSI,qword ptr [RBP + 0xe8] }
    /* +0xb7bf54 */ __asm { JNZ 0x7fffa52ebf74 }
    /* +0xb7bf56 */ __asm { CMP R8D,EAX }
    /* +0xb7bf59 */ __asm { JNC 0x7fffa52ebf74 }
    /* +0xb7bf5b */ __asm { MOV dword ptr [RBP + 0x5e0],0xdde25f25 }
    /* +0xb7bf65 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb7bf6c */ __asm { MOV R10D,0x2 }
    /* +0xb7bf72 */ __asm { JMP 0x7fffa52ebfc4 }
    /* +0xb7bf74 */ __asm { MOV R10W,0x243e }
    /* +0xb7bf79 */ __asm { XOR R10D,R14D }
    /* +0xb7bf7c */ __asm { ADD R10D,EDI }
    /* +0xb7bf7f */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb7bf86 */ __asm { ROR R10W,CL }
    /* +0xb7bf8a */ __asm { ADD R10D,0x3cd3 }
    /* +0xb7bf91 */ __asm { ROL R10W,0x8 }
    /* +0xb7bf96 */ __asm { MOVZX R10D,R10W }
    /* +0xb7bf9a */ __asm { MOV RDX,qword ptr GS:[R10] }
    /* +0xb7bf9e */ __asm { MOV R8,-0x58bfded50c2b58c5 }
    /* +0xb7bfa8 */ __asm { SUB RDX,R8 }
    /* +0xb7bfab */ __asm { MOV R10D,0x4 }
    /* +0xb7bfb1 */ __asm { MOV R8,0x46415ac267f7a46b }
    /* +0xb7bfbb */ __asm { CMP RDX,R8 }
    /* +0xb7bfbe */ __asm { JZ 0x7fffa531d1d3 }
    /* +0xb7bfc4 */ __asm { MOV dword ptr [RBP + 0x5e0],0x95e93402 }
    /* +0xb7bfce */ __asm { MOV EAX,dword ptr [RBP + 0x5e0] }
    /* +0xb7bfd4 */ __asm { MOV RCX,qword ptr [RBP + 0x1350] }
    /* +0xb7bfdb */ __asm { CMP dword ptr [RBP + 0x1b0],ECX }
    /* +0xb7bfe1 */ __asm { NOP }
    /* +0xb7bfe2 */ __asm { NOP }
    /* +0xb7bfe3 */ __asm { NOP }
    /* +0xb7bfe4 */ __asm { NOP }
    /* +0xb7bfe5 */ __asm { NOP }
    /* +0xb7bfe6 */ __asm { NOP }
    /* +0xb7bfe7 */ __asm { NOP }
    /* +0xb7bfe8 */ __asm { NOP }
    /* +0xb7bfe9 */ __asm { NOP }
    /* +0xb7bfea */ __asm { NOP }
    /* +0xb7bfeb */ __asm { NOP }
    /* +0xb7bfec */ __asm { NOP }
    /* +0xb7bfed */ __asm { NOP }
    /* +0xb7bfee */ __asm { NOP }
    /* +0xb7bfef */ __asm { NOP }
    /* +0xb7bff0 */ __asm { NOP }
    /* +0xb7bff1 */ __asm { NOP }
    /* +0xb80cd6 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5a75e5e5 }
    /* +0xb80ce0 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb80ce7 */ __asm { TEST R11B,0x1 }
    /* +0xb80ceb */ __asm { NOP }
    /* +0xb80cec */ __asm { NOP }
    /* +0xb80ced */ __asm { NOP }
    /* +0xb80cee */ __asm { NOP }
    /* +0xb80cef */ __asm { NOP }
    /* +0xb80cf0 */ __asm { RDTSC }
    /* +0xb80cf2 */ __asm { SHL RDX,0x20 }
    /* +0xb80cf6 */ __asm { OR RDX,RAX }
    /* +0xb80cf9 */ __asm { MOV R11,-0x5a46117eacb056b3 }
    /* +0xb80d03 */ __asm { IMUL RDX,R11 }
    /* +0xb80d07 */ __asm { MOV R10,-0x399535dde73fd72 }
    /* +0xb80d11 */ __asm { ADD R10,RDX }
    /* +0xb80d14 */ __asm { MOV RDX,R10 }
    /* +0xb80d17 */ __asm { SHR RDX,0x1b }
    /* +0xb80d1b */ __asm { MOV RCX,R10 }
    /* +0xb80d1e */ __asm { SHR RCX,0x3b }
    /* +0xb80d22 */ __asm { SHR R10,0x2d }
    /* +0xb80d26 */ __asm { XOR R10D,EDX }
    /* +0xb80d29 */ __asm { ROR R10D,CL }
    /* +0xb80d2c */ __asm { CMP R10D,0xdaa682 }
    /* +0xb80d33 */ __asm { JA 0x7fffa52f1163 }
    /* +0xb80d39 */ __asm { MOV R11D,0x9e858456 }
    /* +0xb80d3f */ __asm { LEA RDX,[0x7fffa549e534] }
    /* +0xb80d46 */ __asm { SUB R11D,dword ptr [RBP + 0x480] }
    /* +0xb80d4d */ __asm { IMUL R11D,R11D,0x79cb9c7b }
    /* +0xb80d54 */ __asm { SUB R11D,dword ptr [RBP + 0x1298] }
    /* +0xb80d5b */ __asm { ADD R11D,0x88c880c7 }
    /* +0xb80d62 */ __asm { IMUL R11D,EBX }
    /* +0xb80d66 */ __asm { MOVSXD R11,R11D }
    /* +0xb80d69 */ __asm { ADD R11,RDX }
    /* +0xb80d6c */ __asm { MOV EAX,0x91257b20 }
    /* +0xb80d71 */ __asm { CALL R11 }
    /* +0xb80d74 */ __asm { TEST R8B,R8B }
    /* +0xb80d77 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xb80d7e */ __asm { MOV R13,qword ptr [RBP + 0x1298] }
    /* +0xb80d85 */ __asm { MOV R9,qword ptr [RBP + 0xe8] }
    /* +0xb80d8c */ __asm { MOV R12,qword ptr [RBP + 0x11d8] }
    /* +0xb80d93 */ __asm { JZ 0x7fffa52f0e7e }
    /* +0xb80d99 */ __asm { MOV R11W,0x899e }
    /* +0xb80d9e */ __asm { MOV RAX,qword ptr [RBP + 0x4a0] }
    /* +0xb80da5 */ __asm { IMUL R11D,EAX }
    /* +0xb80da9 */ __asm { MOV RDX,qword ptr [RBP + 0x480] }
    /* +0xb80db0 */ __asm { ADD R11D,EDX }
    /* +0xb80db3 */ __asm { MOV ECX,EDI }
    /* +0xb80db5 */ __asm { ROR R11W,CL }
    /* +0xb80db9 */ __asm { ROL R11W,0x4 }
    /* +0xb80dbe */ __asm { MOVZX R10D,R11W }
    /* +0xb80dc2 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xb80dc6 */ __asm { MOV R10W,0xcb0f }
    /* +0xb80dcb */ __asm { IMUL R10D,EAX }
    /* +0xb80dcf */ __asm { ADD R10D,0xffffd064 }
    /* +0xb80dd6 */ __asm { XOR R10D,EDX }
    /* +0xb80dd9 */ __asm { SUB R10D,EDI }
    /* +0xb80ddc */ __asm { MOVZX R10D,R10W }
    /* +0xb80de0 */ __asm { MOV EDX,0x2c8 }
    /* +0xb80de5 */ __asm { ADD RDX,qword ptr GS:[R10] }
    /* +0xb80de9 */ __asm { IMUL RDX,qword ptr [R11 + 0x3d0] }
    /* +0xb80df1 */ __asm { MOV R11,0x52768d1ccd21fa05 }
    /* +0xb80dfb */ __asm { CMP RDX,R11 }
    /* +0xb80dfe */ __asm { MOV RDX,qword ptr [RBP + 0x1348] }
    /* +0xb80e05 */ __asm { JNZ 0x7fffa52f0e15 }
    /* +0xb80e07 */ __asm { RET 0xa332 }
    /* +0xb80e15 */ __asm { MOV dword ptr [RBP + 0x5e0],0xde16ddac }
    /* +0xb80e1f */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb80e26 */ __asm { MOV dword ptr [RBP + 0x5e0],0x342d077a }
    /* +0xb80e30 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb80e37 */ __asm { MOV R10D,0x7f0e940e }
    /* +0xb80e3d */ __asm { ADD R10D,R13D }
    /* +0xb80e40 */ __asm { MOV EAX,0x8001fc27 }
    /* +0xb80e45 */ __asm { SUB EAX,R10D }
    /* +0xb80e48 */ __asm { IMUL EAX,R9D }
    /* +0xb80e4c */ __asm { CMP R11D,EAX }
    /* +0xb80e4f */ __asm { JNC 0x7fffa5352c15 }
    /* +0xb80e55 */ __asm { MOV R8D,0x18bff25a }
    /* +0xb80e5b */ __asm { LEA R11D,[RDX + R8*0x1] }
    /* +0xb80e5f */ __asm { ADD R11D,0x317f203c }
    /* +0xb80e66 */ __asm { MOV ECX,R13D }
    /* +0xb80e69 */ __asm { ROL R11D,CL }
    /* +0xb80e6c */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb80e73 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb80e7a */ __asm { SUB RSP,0x10 }
    /* +0xb80e7e */ __asm { MOV dword ptr [RBP + 0x5e0],0x5ef3a941 }
}


// ============================================================================
// Function : FUN_7fffa52edd75  |  RVA: 0xb7dd75  |  Size: 219 bytes
// Callers  : FUN_7fffa5315660@0xba5660
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52edd75(void) {
    /* +0xb7dd75 */ __asm { LEA R8,[0x7fffa47c35b1] }
    /* +0xb7dd7c */ __asm { MOV R11,0x7c5643773aefefb5 }
    /* +0xb7dd86 */ __asm { CMP R8,R11 }
    /* +0xb7dd89 */ __asm { NOP }
    /* +0xb7dd8a */ __asm { NOP }
    /* +0xb7dd8b */ __asm { NOP }
    /* +0xb7dd8c */ __asm { NOP }
    /* +0xb7dd8d */ __asm { NOP }
    /* +0xb7dd8e */ __asm { NOP }
    /* +0xb7dd8f */ __asm { NOP }
    /* +0xb7dd90 */ __asm { NOP }
    /* +0xb7dd91 */ __asm { NOP }
    /* +0xb7dd92 */ __asm { NOP }
    /* +0xb7dd93 */ __asm { NOP }
    /* +0xb7dd94 */ __asm { NOP }
    /* +0xb7dd95 */ __asm { NOP }
    /* +0xb7dd96 */ __asm { NOP }
    /* +0xb7dd97 */ __asm { NOP }
    /* +0xb7dd98 */ __asm { NOP }
    /* +0xb7dd99 */ __asm { MOV R10W,0x7216 }
    /* +0xb7dd9e */ __asm { IMUL R10D,dword ptr [RBP + 0x498] }
    /* +0xb7dda6 */ __asm { MOVZX R9D,uint8_t ptr [R8 + -0x6a31] }
    /* +0xb7ddae */ __asm { MOV R11D,0x6557 }
    /* +0xb7ddb4 */ __asm { SUB R11D,R10D }
    /* +0xb7ddb7 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb7ddbe */ __asm { ROL R11W,CL }
    /* +0xb7ddc2 */ __asm { MOVZX ECX,uint8_t ptr [R8 + R9*0x4 + -0x6a28] }
    /* +0xb7ddcb */ __asm { MOVZX R10D,uint8_t ptr [R8 + -0x6a04] }
    /* +0xb7ddd3 */ __asm { MOVZX EDX,uint8_t ptr [R8 + -0x6a06] }
    /* +0xb7dddb */ __asm { XOR CL,uint8_t ptr [R8 + -0x6a07] }
    /* +0xb7dde2 */ __asm { ROL CL,0x1 }
    /* +0xb7dde4 */ __asm { MOVZX EAX,uint8_t ptr [R8 + -0x6a05] }
    /* +0xb7ddec */ __asm { MOV uint8_t ptr [RBP + 0x5e0],CL }
    /* +0xb7ddf2 */ __asm { XOR DL,uint8_t ptr [R8 + R9*0x4 + -0x6a27] }
    /* +0xb7ddfa */ __asm { ADD R11D,dword ptr [RBP + 0x3b0] }
    /* +0xb7de01 */ __asm { ROL DL,0x1 }
    /* +0xb7de03 */ __asm { MOV uint8_t ptr [RBP + 0x5e1],DL }
    /* +0xb7de09 */ __asm { XOR AL,uint8_t ptr [R8 + R9*0x4 + -0x6a26] }
    /* +0xb7de11 */ __asm { ROL AL,0x1 }
    /* +0xb7de13 */ __asm { MOVZX R11D,R11W }
    /* +0xb7de17 */ __asm { MOV uint8_t ptr [RBP + 0x5e2],AL }
    /* +0xb7de1d */ __asm { XOR R10B,uint8_t ptr [R8 + R9*0x4 + -0x6a25] }
    /* +0xb7de25 */ __asm { ROL R10B,0x1 }
    /* +0xb7de28 */ __asm { MOV uint8_t ptr [RBP + 0x5e3],R10B }
    /* +0xb7de2f */ __asm { MOV R10D,0x4000000 }
    /* +0xb7de35 */ __asm { AND R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb7de3c */ __asm { CMP R10D,R11D }
    /* +0xb7de3f */ __asm { NOP }
    /* +0xb7de40 */ __asm { NOP }
    /* +0xb7de41 */ __asm { NOP }
    /* +0xb7de42 */ __asm { NOP }
    /* +0xb7de43 */ __asm { NOP }
    /* +0xb7de44 */ __asm { NOP }
    /* +0xb7de45 */ __asm { NOP }
    /* +0xb7de46 */ __asm { NOP }
    /* +0xb7de47 */ __asm { NOP }
    /* +0xb7de48 */ __asm { NOP }
    /* +0xb7de49 */ __asm { NOP }
    /* +0xb7de4a */ __asm { NOP }
    /* +0xb7de4b */ __asm { NOP }
    /* +0xb7de4c */ __asm { NOP }
    /* +0xb7de4d */ __asm { NOP }
    /* +0xb7de4e */ __asm { NOP }
    /* +0xb7de4f */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa52f2071  |  RVA: 0xb82071  |  Size: 25306 bytes
// Callers  : FUN_7fffa5397bd1@0xc27bd1
// Callees  : FUN_7fffa52fbd4f@0xb8bd4f
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52f2071(void) {
    /* +0xb82071 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb82078 */ __asm { SUB ECX,ESI }
    /* +0xb8207a */ __asm { MOV R11D,0x1aced098 }
    /* +0xb82080 */ __asm { MOV R10D,0x679f824c }
    /* +0xb82086 */ __asm { SUB R10D,R11D }
    /* +0xb82089 */ __asm { XOR R10D,EDI }
    /* +0xb8208c */ __asm { MOV qword ptr [RBP + 0xfe0],RCX }
    /* +0xb82093 */ __asm { ADD R10D,ECX }
    /* +0xb82096 */ __asm { MOV dword ptr [RBP + 0x5e0],R10D }
    /* +0xb8209d */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb820a4 */ __asm { CMP R11D,0xf09ab5d3 }
    /* +0xb820ab */ __asm { JNC 0x7fffa53517a6 }
    /* +0xb820b1 */ __asm { MOV R10,qword ptr [RBP + 0x1260] }
    /* +0xb820b8 */ __asm { CMP dword ptr [RBP + 0x4b0],R10D }
    /* +0xb820bf */ __asm { NOP }
    /* +0xb820c0 */ __asm { NOP }
    /* +0xb820c1 */ __asm { NOP }
    /* +0xb820c2 */ __asm { NOP }
    /* +0xb820c3 */ __asm { NOP }
    /* +0xb820c4 */ __asm { NOP }
    /* +0xb820c5 */ __asm { NOP }
    /* +0xb820c6 */ __asm { NOP }
    /* +0xb820c7 */ __asm { NOP }
    /* +0xb820c8 */ __asm { NOP }
    /* +0xb820c9 */ __asm { NOP }
    /* +0xb820ca */ __asm { NOP }
    /* +0xb820cb */ __asm { NOP }
    /* +0xb820cc */ __asm { NOP }
    /* +0xb820cd */ __asm { NOP }
    /* +0xb820ce */ __asm { CMP uint8_t ptr [RBP + 0x1b0],0x0 }
    /* +0xb820d5 */ __asm { JNZ 0x7fffa52f25bf }
    /* +0xb820db */ __asm { MOV dword ptr [RBP + 0x5e0],0xdffa777d }
    /* +0xb820e5 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb820ec */ __asm { TEST R11B,0x1 }
    /* +0xb820f0 */ __asm { NOP }
    /* +0xb820f1 */ __asm { NOP }
    /* +0xb820f2 */ __asm { NOP }
    /* +0xb820f3 */ __asm { NOP }
    /* +0xb820f4 */ __asm { NOP }
    /* +0xb820f5 */ __asm { MOV R10,qword ptr [RBP + 0x1260] }
    /* +0xb820fc */ __asm { CMP dword ptr [RBP + 0x4b0],R10D }
    /* +0xb82103 */ __asm { NOP }
    /* +0xb82104 */ __asm { NOP }
    /* +0xb82105 */ __asm { NOP }
    /* +0xb82106 */ __asm { NOP }
    /* +0xb82107 */ __asm { NOP }
    /* +0xb82108 */ __asm { NOP }
    /* +0xb82109 */ __asm { NOP }
    /* +0xb8210a */ __asm { NOP }
    /* +0xb8210b */ __asm { NOP }
    /* +0xb8210c */ __asm { NOP }
    /* +0xb8210d */ __asm { NOP }
    /* +0xb8210e */ __asm { NOP }
    /* +0xb8210f */ __asm { NOP }
    /* +0xb82110 */ __asm { MOV dword ptr [RBP + 0x5e0],0x2b9dff09 }
    /* +0xb8211a */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb82121 */ __asm { TEST R11D,R11D }
    /* +0xb82124 */ __asm { JS 0x7fffa53522f4 }
    /* +0xb8212a */ __asm { MOV R11D,0x4b70af9b }
    /* +0xb82130 */ __asm { MOV RDX,qword ptr [RBP + 0xf68] }
    /* +0xb82137 */ __asm { IMUL R11D,R15D }
    /* +0xb8213b */ __asm { SUB R11D,dword ptr [RBP + 0x480] }
    /* +0xb82142 */ __asm { ADD R11D,EDI }
    /* +0xb82145 */ __asm { ROL R11D,0x1 }
    /* +0xb82148 */ __asm { CMP dword ptr [RDX],R11D }
    /* +0xb8214b */ __asm { NOP }
    /* +0xb8214c */ __asm { NOP }
    /* +0xb8214d */ __asm { NOP }
    /* +0xb8214e */ __asm { NOP }
    /* +0xb8214f */ __asm { NOP }
    /* +0xb82150 */ __asm { NOP }
    /* +0xb82151 */ __asm { NOP }
    /* +0xb82152 */ __asm { NOP }
    /* +0xb82153 */ __asm { NOP }
    /* +0xb82154 */ __asm { NOP }
    /* +0xb82155 */ __asm { NOP }
    /* +0xb82156 */ __asm { NOP }
    /* +0xb82157 */ __asm { NOP }
    /* +0xb82158 */ __asm { NOP }
    /* +0xb82159 */ __asm { NOP }
    /* +0xb8215a */ __asm { NOP }
    /* +0xb8215b */ __asm { NOP }
    /* +0xb825bf */ __asm { MOV dword ptr [RBP + 0x5e0],0x825daf94 }
    /* +0xb825c9 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb825d0 */ __asm { MOV R10D,0xb03c3f64 }
    /* +0xb825d6 */ __asm { XOR R10D,0xee5d6024 }
    /* +0xb825dd */ __asm { SUB R10D,dword ptr [RBP + 0x480] }
    /* +0xb825e4 */ __asm { XOR R10D,ESI }
    /* +0xb825e7 */ __asm { ROL R10D,0x8 }
    /* +0xb825eb */ __asm { XOR R10D,EDI }
    /* +0xb825ee */ __asm { CMP R11D,R10D }
    /* +0xb825f1 */ __asm { NOP }
    /* +0xb825f2 */ __asm { NOP }
    /* +0xb825f3 */ __asm { NOP }
    /* +0xb825f4 */ __asm { NOP }
    /* +0xb825f5 */ __asm { NOP }
    /* +0xb825f6 */ __asm { NOP }
    /* +0xb825f7 */ __asm { NOP }
    /* +0xb825f8 */ __asm { NOP }
    /* +0xb825f9 */ __asm { NOP }
    /* +0xb825fa */ __asm { NOP }
    /* +0xb825fb */ __asm { LEA R11,[0x7fffa4794517] }
    /* +0xb82602 */ __asm { MOV R8D,0x2227f1e3 }
    /* +0xb82608 */ __asm { LEA R10D,[RDI + R8*0x1] }
    /* +0xb8260c */ __asm { ADD R10D,0x786c2e19 }
    /* +0xb82613 */ __asm { MOV R13,qword ptr [RBP + 0x480] }
    /* +0xb8261a */ __asm { XOR R10D,R13D }
    /* +0xb8261d */ __asm { MOV ECX,ESI }
    /* +0xb8261f */ __asm { ROL R10D,CL }
    /* +0xb82622 */ __asm { ADD R10D,0xbdce91f8 }
    /* +0xb82629 */ __asm { MOVSXD R8,R10D }
    /* +0xb8262c */ __asm { CMP uint8_t ptr [R11 + R8*0x1],0x0 }
    /* +0xb82631 */ __asm { JZ 0x7fffa533eaeb }
    /* +0xb82637 */ __asm { MOV R10D,0xec9e896a }
    /* +0xb8263d */ __asm { SUB R10D,EDI }
    /* +0xb82640 */ __asm { ROL R10D,0x3 }
    /* +0xb82644 */ __asm { XOR R10D,0x41bc850 }
    /* +0xb8264b */ __asm { MOV ECX,ESI }
    /* +0xb8264d */ __asm { ROR R10D,CL }
    /* +0xb82650 */ __asm { SUB R10D,R13D }
    /* +0xb82653 */ __asm { RDTSC }
    /* +0xb82655 */ __asm { SHL RDX,0x20 }
    /* +0xb82659 */ __asm { OR RDX,RAX }
    /* +0xb8265c */ __asm { MOV R11,0x7facc0f7a00541bd }
    /* +0xb82666 */ __asm { IMUL RDX,R11 }
    /* +0xb8266a */ __asm { MOV R8,0x48052a8e57101656 }
    /* +0xb82674 */ __asm { LEA R11,[RDX + R8*0x1] }
    /* +0xb82678 */ __asm { AND RDX,R8 }
    /* +0xb8267b */ __asm { MOV EAX,0x12232082 }
    /* +0xb82680 */ __asm { IMUL R9D,EAX,0x7ffe0329 }
    /* +0xb82687 */ __asm { ROR R9D,0x1 }
    /* +0xb8268a */ __asm { NOT R9D }
    /* +0xb8268d */ __asm { SUB R9D,ESI }
    /* +0xb82690 */ __asm { MOV ECX,EDI }
    /* +0xb82692 */ __asm { ROR R9D,CL }
    /* +0xb82695 */ __asm { CMP R10,R9 }
    /* +0xb82698 */ __asm { CMOVNC RDX,R11 }
    /* +0xb8269c */ __asm { MOV RCX,RDX }
    /* +0xb8269f */ __asm { SHR RCX,0x3b }
    /* +0xb826a3 */ __asm { MOV R10,RDX }
    /* +0xb826a6 */ __asm { SHR R10,0x1b }
    /* +0xb826aa */ __asm { SHR RDX,0x2d }
    /* +0xb826ae */ __asm { XOR R10D,EDX }
    /* +0xb826b1 */ __asm { ROR R10D,CL }
    /* +0xb826b4 */ __asm { CMP R10D,0x45fa839 }
    /* +0xb826bb */ __asm { MOV ESI,dword ptr [RBP + 0x1b0] }
    /* +0xb826c1 */ __asm { JA 0x7fffa52f27d5 }
    /* +0xb826c7 */ __asm { LEA R8,[0x7fffa478739e] }
    /* +0xb826ce */ __asm { MOV R11,-0x5d69f5628e2be680 }
    /* +0xb826d8 */ __asm { CMP R8,R11 }
    /* +0xb826db */ __asm { JZ 0x7fffa53522fc }
    /* +0xb826e1 */ __asm { MOV R11W,0xce10 }
    /* +0xb826e6 */ __asm { XOR R11D,0x31ed }
    /* +0xb826ed */ __asm { ADD R11D,dword ptr [RBP + 0x1298] }
    /* +0xb826f4 */ __asm { MOV ECX,EDI }
    /* +0xb826f6 */ __asm { ROL R11W,CL }
    /* +0xb826fa */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb82701 */ __asm { ROR R11W,CL }
    /* +0xb82705 */ __asm { MOVZX ECX,uint8_t ptr [R8 + -0x14ba] }
    /* +0xb8270d */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + -0x14ad] }
    /* +0xb82716 */ __asm { NOT R10B }
    /* +0xb82719 */ __asm { MOV uint8_t ptr [RBP + 0x5e0],R10B }
    /* +0xb82720 */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + -0x14ac] }
    /* +0xb82729 */ __asm { NOT R10B }
    /* +0xb8272c */ __asm { MOV uint8_t ptr [RBP + 0x5e1],R10B }
    /* +0xb82733 */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + -0x14ab] }
    /* +0xb8273c */ __asm { NOT R10B }
    /* +0xb8273f */ __asm { MOV uint8_t ptr [RBP + 0x5e2],R10B }
    /* +0xb82746 */ __asm { MOVZX ECX,uint8_t ptr [R8 + RCX*0x4 + -0x14aa] }
    /* +0xb8274f */ __asm { NOT CL }
    /* +0xb82751 */ __asm { MOV uint8_t ptr [RBP + 0x5e3],CL }
    /* +0xb82757 */ __asm { MOV ECX,0xba0d1c9 }
    /* +0xb8275c */ __asm { XOR ECX,dword ptr [RBP + 0x5e0] }
    /* +0xb82762 */ __asm { MOV R10D,0x1 }
    /* +0xb82768 */ __asm { SHL R10D,CL }
    /* +0xb8276b */ __asm { MOVZX R11D,R11W }
    /* +0xb8276f */ __asm { AND R10D,ECX }
    /* +0xb82772 */ __asm { CMP R10D,R11D }
    /* +0xb82775 */ __asm { JZ 0x7fffa52f27d5 }
    /* +0xb82777 */ __asm { MOV R11D,0x7a6d271f }
    /* +0xb8277d */ __asm { ADD R11D,0x88f118f1 }
    /* +0xb82784 */ __asm { IMUL R11D,EBX }
    /* +0xb82788 */ __asm { SUB R11D,dword ptr [RBP + 0x480] }
    /* +0xb8278f */ __asm { ROL R11D,0x11 }
    /* +0xb82793 */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xb8279a */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb827a1 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb827a8 */ __asm { MOV R8,qword ptr [RBP + 0x5b0] }
    /* +0xb827af */ __asm { ADD qword ptr [R8 + 0x98],-0x10 }
    /* +0xb827b7 */ __asm { MOV dword ptr [RBP + 0x5e0],0x2bef2feb }
    /* +0xb827c1 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb827c8 */ __asm { CMP R11D,0x3291ed86 }
    /* +0xb827cf */ __asm { JNC 0x7fffa5352c43 }
    /* +0xb827d5 */ __asm { MOV dword ptr [RBP + 0x5e0],0x740174f4 }
    /* +0xb827df */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb827e6 */ __asm { CMP R11D,0xb5b81804 }
    /* +0xb827ed */ __asm { NOP }
    /* +0xb827ee */ __asm { NOP }
    /* +0xb827ef */ __asm { NOP }
    /* +0xb827f0 */ __asm { NOP }
    /* +0xb827f1 */ __asm { NOP }
    /* +0xb827f2 */ __asm { MOV R10,qword ptr [RBP + 0x1260] }
    /* +0xb827f9 */ __asm { CMP dword ptr [RBP + 0x4b0],R10D }
    /* +0xb82800 */ __asm { NOP }
    /* +0xb82801 */ __asm { NOP }
    /* +0xb82802 */ __asm { NOP }
    /* +0xb82803 */ __asm { NOP }
    /* +0xb82804 */ __asm { NOP }
    /* +0xb82805 */ __asm { MOV dword ptr [RBP + 0x5e0],0xa6517978 }
    /* +0xb8280f */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb82816 */ __asm { TEST SIL,SIL }
    /* +0xb82819 */ __asm { JNZ 0x7fffa532940b }
    /* +0xb8281f */ __asm { MOV dword ptr [RBP + 0x5e0],0x4321d813 }
    /* +0xb82829 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb82830 */ __asm { MOV R10D,0x9d231f0e }
    /* +0xb82836 */ __asm { ADD R10D,dword ptr [RBP + 0x480] }
    /* +0xb8283d */ __asm { MOV EAX,0xa63476af }
    /* +0xb82842 */ __asm { SUB EAX,R10D }
    /* +0xb82845 */ __asm { MOV ECX,EDI }
    /* +0xb82847 */ __asm { ROR EAX,CL }
    /* +0xb82849 */ __asm { CMP R11D,EAX }
    /* +0xb8284c */ __asm { NOP }
    /* +0xb8284d */ __asm { NOP }
    /* +0xb8284e */ __asm { NOP }
    /* +0xb8284f */ __asm { NOP }
    /* +0xb82850 */ __asm { NOP }
    /* +0xb82851 */ __asm { MOV R11D,0x3113d909 }
    /* +0xb82857 */ __asm { IMUL R11D,R15D }
    /* +0xb8285b */ __asm { ROL R11D,0x3 }
    /* +0xb8285f */ __asm { IMUL R11D,R11D,0x2bc89cd3 }
    /* +0xb82866 */ __asm { MOV R13,qword ptr [RBP + 0x480] }
    /* +0xb8286d */ __asm { MOV ECX,R13D }
    /* +0xb82870 */ __asm { ROR R11D,CL }
    /* +0xb82873 */ __asm { IMUL R11D,EBX }
    /* +0xb82877 */ __asm { PUSHFQ }
    /* +0xb82878 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb82880 */ __asm { POPFQ }
    /* +0xb82881 */ __asm { MOV RDX,qword ptr [RBP + 0xf68] }
    /* +0xb82888 */ __asm { CMP dword ptr [RDX],R11D }
    /* +0xb8288b */ __asm { JNZ 0x7fffa52f290c }
    /* +0xb8288d */ __asm { MOV R10D,0x9f93cfdb }
    /* +0xb82893 */ __asm { MOV R11D,0x1da8daf3 }
    /* +0xb82899 */ __asm { XOR R10D,0x178e506f }
    /* +0xb828a0 */ __asm { IMUL EDX,R11D,-0x7ffe02e5 }
    /* +0xb828a7 */ __asm { ADD EDX,0xea5cb0e7 }
    /* +0xb828ad */ __asm { XOR EDX,EDI }
    /* +0xb828af */ __asm { MOV ECX,EDI }
    /* +0xb828b1 */ __asm { ROL R10D,CL }
    /* +0xb828b4 */ __asm { ADD R10D,R13D }
    /* +0xb828b7 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb828be */ __asm { ROL R10D,CL }
    /* +0xb828c1 */ __asm { ADD EDX,R13D }
    /* +0xb828c4 */ __asm { CMP R10,RDX }
    /* +0xb828c7 */ __asm { JNC 0x7fffa52f2934 }
    /* +0xb828c9 */ __asm { MOV ESI,0xb82157d7 }
    /* +0xb828ce */ __asm { XOR ESI,EDI }
    /* +0xb828d0 */ __asm { ADD ESI,0xcfb61375 }
    /* +0xb828d6 */ __asm { XOR ESI,ECX }
    /* +0xb828d8 */ __asm { ROR ESI,0x1 }
    /* +0xb828da */ __asm { XOR ESI,R13D }
    /* +0xb828dd */ __asm { MOV dword ptr [RBP + 0x5e0],0xa957b1e8 }
    /* +0xb828e7 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb828ee */ __asm { MOV R11,qword ptr [RBP + 0xf68] }
    /* +0xb828f5 */ __asm { MOV R12,qword ptr [R11 + 0x10] }
    /* +0xb828f9 */ __asm { MOV dword ptr [RBP + 0x1070],0x4a5174ee }
    /* +0xb82903 */ __asm { MOV R11D,dword ptr [RBP + 0x1070] }
    /* +0xb8290a */ __asm { JMP 0x7fffa52f2970 }
    /* +0xb8290c */ __asm { MOV dword ptr [RBP + 0x5e0],0x575fa6cc }
    /* +0xb82916 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8291d */ __asm { TEST R11D,R11D }
    /* +0xb82920 */ __asm { NOP }
    /* +0xb82921 */ __asm { NOP }
    /* +0xb82922 */ __asm { NOP }
    /* +0xb82923 */ __asm { NOP }
    /* +0xb82924 */ __asm { NOP }
    /* +0xb82925 */ __asm { PUSHFQ }
    /* +0xb82926 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8292e */ __asm { POPFQ }
    /* +0xb8292f */ __asm { JMP 0x7fffa532940b }
    /* +0xb82934 */ __asm { MOV ESI,0x607bade7 }
    /* +0xb82939 */ __asm { SUB ESI,ECX }
    /* +0xb8293b */ __asm { IMUL ESI,R14D }
    /* +0xb8293f */ __asm { NOT ESI }
    /* +0xb82941 */ __asm { ADD ESI,EDI }
    /* +0xb82943 */ __asm { MOV R11D,dword ptr [RBP + 0x1070] }
    /* +0xb8294a */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb82951 */ __asm { MOV dword ptr [RBP + 0x1070],0x4a5174ee }
    /* +0xb8295b */ __asm { MOV dword ptr [RBP + 0x5e0],0xa957b1e8 }
    /* +0xb82965 */ __asm { MOV R11,qword ptr [RBP + 0xf68] }
    /* +0xb8296c */ __asm { MOV R12,qword ptr [R11 + 0x10] }
    /* +0xb82970 */ __asm { LEA RAX,[0x7fffa478cb3d] }
    /* +0xb82977 */ __asm { MOV R11W,0x5780 }
    /* +0xb8297c */ __asm { LEA R8,[0x7fffa4795a29] }
    /* +0xb82983 */ __asm { MOV R10D,0x60ca3ebc }
    /* +0xb82989 */ __asm { MOV EDX,0xfddba82d }
    /* +0xb8298e */ __asm { XOR EDX,ESI }
    /* +0xb82990 */ __asm { XOR EDX,0xfa6b61c5 }
    /* +0xb82996 */ __asm { MOV R9W,0x2aef }
    /* +0xb8299b */ __asm { SUB R9D,R13D }
    /* +0xb8299e */ __asm { XOR R9D,0xffffd88a }
    /* +0xb829a5 */ __asm { ADD R9D,EDI }
    /* +0xb829a8 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb829af */ __asm { ROL R9W,CL }
    /* +0xb829b3 */ __asm { ADD R10D,EDI }
    /* +0xb829b6 */ __asm { MOVSX R9,R9W }
    /* +0xb829ba */ __asm { ADD R9,RAX }
    /* +0xb829bd */ __asm { IMUL R10D,R15D }
    /* +0xb829c1 */ __asm { NOT R10D }
    /* +0xb829c4 */ __asm { ROL R10D,0x13 }
    /* +0xb829c8 */ __asm { LEA RAX,[0x7fffa478de4d] }
    /* +0xb829cf */ __asm { SUB R11D,EDI }
    /* +0xb829d2 */ __asm { XOR R11D,0x4e35 }
    /* +0xb829d9 */ __asm { ROL R11W,CL }
    /* +0xb829dd */ __asm { MOV ECX,R13D }
    /* +0xb829e0 */ __asm { ROR R11W,CL }
    /* +0xb829e4 */ __asm { MOV ECX,0xffc9afc6 }
    /* +0xb829e9 */ __asm { NEG ECX }
    /* +0xb829eb */ __asm { LEA R15D,[RDI + RCX*0x1] }
    /* +0xb829ef */ __asm { ADD R15D,0xb9603a2b }
    /* +0xb829f6 */ __asm { MOV RCX,RSI }
    /* +0xb829f9 */ __asm { MOV qword ptr [RBP + 0x5d8],RSI }
    /* +0xb82a00 */ __asm { ROR R15D,CL }
    /* +0xb82a03 */ __asm { MOVSXD RCX,R15D }
    /* +0xb82a06 */ __asm { MOVZX R8D,uint8_t ptr [R8 + RCX*0x1 + 0xc] }
    /* +0xb82a0c */ __asm { MOVSX RCX,R11W }
    /* +0xb82a10 */ __asm { MOV R11,qword ptr [R9 + R8*0x8 + 0x16] }
    /* +0xb82a15 */ __asm { XOR R11,qword ptr [RAX + RCX*0x1 + 0x60] }
    /* +0xb82a1a */ __asm { MOV qword ptr [RBP + 0x5e0],R11 }
    /* +0xb82a21 */ __asm { MOV R11,qword ptr [RBP + 0x5e0] }
    /* +0xb82a28 */ __asm { LEA R8,[R11 + 0x9368000] }
    /* +0xb82a2f */ __asm { XOR EAX,EAX }
    /* +0xb82a31 */ __asm { XOR ECX,ECX }
    /* +0xb82a33 */ __asm { CMP R12,R8 }
    /* +0xb82a36 */ __asm { SETC AL }
    /* +0xb82a39 */ __asm { SETL CL }
    /* +0xb82a3c */ __asm { CMP R10,RDX }
    /* +0xb82a3f */ __asm { CMOVL EAX,ECX }
    /* +0xb82a42 */ __asm { CMP AL,0x1 }
    /* +0xb82a44 */ __asm { JNZ 0x7fffa52f2b3e }
    /* +0xb82a4a */ __asm { MOV RDX,R12 }
    /* +0xb82a4d */ __asm { MOV R8,R12 }
    /* +0xb82a50 */ __asm { SUB R8,R11 }
    /* +0xb82a53 */ __asm { JC 0x7fffa52f2b3e }
    /* +0xb82a59 */ __asm { MOV qword ptr [RBP + 0x3b0],R8 }
    /* +0xb82a60 */ __asm { MOV qword ptr [RBP + 0x1060],RDX }
    /* +0xb82a67 */ __asm { PUSHFQ }
    /* +0xb82a68 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb82a70 */ __asm { POPFQ }
    /* +0xb82a71 */ __asm { MOV dword ptr [RBP + 0x5e0],0x767fb6c5 }
    /* +0xb82a7b */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb82a82 */ __asm { MOV R8W,0xbdfe }
    /* +0xb82a87 */ __asm { XOR R8D,dword ptr [RBP + 0x1298] }
    /* +0xb82a8e */ __asm { ROL R8W,0xb }
    /* +0xb82a93 */ __asm { LEA R10D,[RDI + R8*0x1] }
    /* +0xb82a97 */ __asm { XOR R10D,0x2a9a }
    /* +0xb82a9e */ __asm { MOV R15,qword ptr [RBP + 0x5d8] }
    /* +0xb82aa5 */ __asm { SUB R10D,R15D }
    /* +0xb82aa8 */ __asm { MOVSX R10D,R10W }
    /* +0xb82aac */ __asm { CMP R11D,R10D }
    /* +0xb82aaf */ __asm { MOV RSI,qword ptr [RBP + 0x4a0] }
    /* +0xb82ab6 */ __asm { JLE 0x7fffa5355fd4 }
    /* +0xb82abc */ __asm { MOV R8D,0x5639 }
    /* +0xb82ac2 */ __asm { XOR R9D,R9D }
    /* +0xb82ac5 */ __asm { LEA R11,[0x7fffa579184d] }
    /* +0xb82acc */ __asm { JMP 0x7fffa52f2af0 }
    /* +0xb82ace */ __asm { LEA RDX,[0x1 + R9*0x2] }
    /* +0xb82ad6 */ __asm { MOV R8,R9 }
    /* +0xb82ad9 */ __asm { IMUL R10D,ESI }
    /* +0xb82add */ __asm { ADD R10D,R15D }
    /* +0xb82ae0 */ __asm { MOVZX R10D,R10W }
    /* +0xb82ae4 */ __asm { MOV R9,RDX }
    /* +0xb82ae7 */ __asm { CMP RDX,R10 }
    /* +0xb82aea */ __asm { JNC 0x7fffa52f2b88 }
    /* +0xb82af0 */ __asm { MOV RDX,R11 }
    /* +0xb82af3 */ __asm { MOV R10W,0xd5d4 }
    /* +0xb82af8 */ __asm { IMUL R10D,R10D,0x2261 }
    /* +0xb82aff */ __asm { MOV AX,0xbb15 }
    /* +0xb82b03 */ __asm { SUB EAX,R15D }
    /* +0xb82b06 */ __asm { ADD R10D,0xffffbc9a }
    /* +0xb82b0d */ __asm { MOV ECX,EDI }
    /* +0xb82b0f */ __asm { ROL R10W,CL }
    /* +0xb82b13 */ __asm { XOR EAX,dword ptr [RBP + 0x1298] }
    /* +0xb82b19 */ __asm { ROL AX,CL }
    /* +0xb82b1c */ __asm { ROL AX,0x5 }
    /* +0xb82b20 */ __asm { MOVSX RAX,AX }
    /* +0xb82b24 */ __asm { ADD RAX,RDX }
    /* +0xb82b27 */ __asm { MOV RCX,qword ptr [RBP + 0x3b0] }
    /* +0xb82b2e */ __asm { CMP dword ptr [RAX + R9*0x4],ECX }
    /* +0xb82b32 */ __asm { JNC 0x7fffa52f2ace }
    /* +0xb82b34 */ __asm { LEA RDX,[0x2 + R9*0x2] }
    /* +0xb82b3c */ __asm { JMP 0x7fffa52f2ad9 }
    /* +0xb82b3e */ __asm { MOV dword ptr [RBP + 0x5e0],0xd5c07912 }
    /* +0xb82b48 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb82b4f */ __asm { TEST R11D,R11D }
    /* +0xb82b52 */ __asm { NOP }
    /* +0xb82b53 */ __asm { NOP }
    /* +0xb82b54 */ __asm { NOP }
    /* +0xb82b55 */ __asm { NOP }
    /* +0xb82b56 */ __asm { NOP }
    /* +0xb82b57 */ __asm { PUSHFQ }
    /* +0xb82b58 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb82b60 */ __asm { POPFQ }
    /* +0xb82b61 */ __asm { MOV R15,qword ptr [RBP + 0xd0] }
    /* +0xb82b68 */ __asm { MOV R10D,dword ptr [RBP + 0x1b0] }
    /* +0xb82b6f */ __asm { MOV dword ptr [RBP + 0x5e0],0x738628fd }
    /* +0xb82b79 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb82b80 */ __asm { MOV ESI,R10D }
    /* +0xb82b83 */ __asm { JMP 0x7fffa532940b }
    /* +0xb82b88 */ __asm { LEA R11,[0x7fffa578dc77] }
    /* +0xb82b8f */ __asm { MOV R10W,0x7345 }
    /* +0xb82b94 */ __asm { ADD R10D,0xffffa281 }
    /* +0xb82b9b */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb82ba2 */ __asm { ROL R10W,CL }
    /* +0xb82ba6 */ __asm { NOT R10D }
    /* +0xb82ba9 */ __asm { MOV RCX,qword ptr [RBP + 0x188] }
    /* +0xb82bb0 */ __asm { IMUL ECX,R10D }
    /* +0xb82bb4 */ __asm { MOVSX RDX,CX }
    /* +0xb82bb8 */ __asm { ADD RDX,R11 }
    /* +0xb82bbb */ __asm { MOV R11D,dword ptr [RDX + R8*0x4] }
    /* +0xb82bbf */ __asm { MOV RSI,qword ptr [RBP + 0x3b0] }
    /* +0xb82bc6 */ __asm { MOV dword ptr [RBP + 0x100],R11D }
    /* +0xb82bcd */ __asm { CMP R11D,ESI }
    /* +0xb82bd0 */ __asm { JNZ 0x7fffa52f2c5d }
    /* +0xb82bd6 */ __asm { LEA RDX,[0x7fffa4795e32] }
    /* +0xb82bdd */ __asm { LEA R9,[0x7fffa585dd96] }
    /* +0xb82be4 */ __asm { MOV R10D,0x2523bf3 }
    /* +0xb82bea */ __asm { MOV R11D,R15D }
    /* +0xb82bed */ __asm { SUB R11D,EDI }
    /* +0xb82bf0 */ __asm { LEA RAX,[0x7fffa56cd47d] }
    /* +0xb82bf7 */ __asm { ADD R10D,EDI }
    /* +0xb82bfa */ __asm { NOT R10D }
    /* +0xb82bfd */ __asm { MOV R12,qword ptr [RBP + 0x1298] }
    /* +0xb82c04 */ __asm { ADD R10D,R12D }
    /* +0xb82c07 */ __asm { MOV ECX,0x92b628f2 }
    /* +0xb82c0c */ __asm { MOV RSI,R15 }
    /* +0xb82c0f */ __asm { MOV R15D,0xfd8bd807 }
    /* +0xb82c15 */ __asm { ADD R15D,R11D }
    /* +0xb82c18 */ __asm { IMUL R11D,R15D,0x2f50ad53 }
    /* +0xb82c1f */ __asm { ADD R11D,R12D }
    /* +0xb82c22 */ __asm { MOVSXD R11,R11D }
    /* +0xb82c25 */ __asm { ADD R11,R9 }
    /* +0xb82c28 */ __asm { ADD R11,R8 }
    /* +0xb82c2b */ __asm { ADD ECX,R12D }
    /* +0xb82c2e */ __asm { IMUL ECX,EBX }
    /* +0xb82c31 */ __asm { ROL ECX,0x10 }
    /* +0xb82c34 */ __asm { SUB ECX,ESI }
    /* +0xb82c36 */ __asm { MOVSXD R9,ECX }
    /* +0xb82c39 */ __asm { ADD R9,RAX }
    /* +0xb82c3c */ __asm { LEA RAX,[R9 + R8*0x8] }
    /* +0xb82c40 */ __asm { XOR R10D,dword ptr [RBP + 0x480] }
    /* +0xb82c47 */ __asm { MOVSXD R9,R10D }
    /* +0xb82c4a */ __asm { ADD R9,RDX }
    /* +0xb82c4d */ __asm { LEA RSI,[R9 + R8*0x4] }
    /* +0xb82c51 */ __asm { MOV R15,qword ptr [RBP + 0xd0] }
    /* +0xb82c58 */ __asm { JMP 0x7fffa52f2d81 }
    /* +0xb82c5d */ __asm { MOV R8D,0x79e0 }
    /* +0xb82c63 */ __asm { XOR R9D,R9D }
    /* +0xb82c66 */ __asm { LEA R11,[0x7fffa5839e29] }
    /* +0xb82c6d */ __asm { MOV RDX,R11 }
    /* +0xb82c70 */ __asm { MOV R10D,0xc440b0ec }
    /* +0xb82c76 */ __asm { ADD R10D,0x3be0b514 }
    /* +0xb82c7d */ __asm { MOV ECX,EDI }
    /* +0xb82c7f */ __asm { ROL R10D,CL }
    /* +0xb82c82 */ __asm { MOV ECX,R15D }
    /* +0xb82c85 */ __asm { ROR R10D,CL }
    /* +0xb82c88 */ __asm { NOT R10D }
    /* +0xb82c8b */ __asm { MOVSXD RAX,R10D }
    /* +0xb82c8e */ __asm { ADD RAX,RDX }
    /* +0xb82c91 */ __asm { CMP dword ptr [RAX + R9*0x4],ESI }
    /* +0xb82c95 */ __asm { CMOVNC R8,R9 }
    /* +0xb82c99 */ __asm { LEA RDX,[R9 + R9*0x1 + 0x2] }
    /* +0xb82c9e */ __asm { LEA R9,[R9 + R9*0x1 + 0x1] }
    /* +0xb82ca3 */ __asm { CMOVC R9,RDX }
    /* +0xb82ca7 */ __asm { CMP R9,0x79e0 }
    /* +0xb82cae */ __asm { JC 0x7fffa52f2c6d }
    /* +0xb82cb0 */ __asm { MOV R11D,0x1c60e732 }
    /* +0xb82cb6 */ __asm { MOV R12,qword ptr [RBP + 0x1298] }
    /* +0xb82cbd */ __asm { MOV R10D,R12D }
    /* +0xb82cc0 */ __asm { SUB R10D,R15D }
    /* +0xb82cc3 */ __asm { ADD R10D,R11D }
    /* +0xb82cc6 */ __asm { ROL R10D,0xd }
    /* +0xb82cca */ __asm { LEA R11,[0x7fffa583b64b] }
    /* +0xb82cd1 */ __asm { IMUL R10D,EBX }
    /* +0xb82cd5 */ __asm { MOVSXD RDX,R10D }
    /* +0xb82cd8 */ __asm { ADD RDX,R11 }
    /* +0xb82cdb */ __asm { CMP dword ptr [RDX + R8*0x4],ESI }
    /* +0xb82cdf */ __asm { MOV RSI,R15 }
    /* +0xb82ce2 */ __asm { MOV R15,qword ptr [RBP + 0xd0] }
    /* +0xb82ce9 */ __asm { JZ 0x7fffa52f2d01 }
    /* +0xb82ceb */ __asm { MOV dword ptr [RBP + 0x5e0],0x22af4881 }
    /* +0xb82cf5 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb82cfc */ __asm { JMP 0x7fffa52f2b68 }
    /* +0xb82d01 */ __asm { LEA RAX,[0x7fffa47ac00f] }
    /* +0xb82d08 */ __asm { LEA RDX,[0x7fffa570ad19] }
    /* +0xb82d0f */ __asm { MOV R11D,ESI }
    /* +0xb82d12 */ __asm { OR R11D,0x1 }
    /* +0xb82d16 */ __asm { MOV ECX,0x503056ec }
    /* +0xb82d1b */ __asm { XOR ECX,R12D }
    /* +0xb82d1e */ __asm { SUB ECX,EDI }
    /* +0xb82d20 */ __asm { XOR ECX,0xbc006c0d }
}


// ============================================================================
// Function : FUN_7fffa52f959c  |  RVA: 0xb8959c  |  Size: 9992 bytes
// Callers  : FUN_7fffa54ad470@0xd3d470
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52f959c(void) {
    /* +0xb8959c */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb895a3 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb895aa */ __asm { TEST R11D,R11D }
    /* +0xb895ad */ __asm { JS 0x7fffa5387903 }
    /* +0xb895b3 */ __asm { MOV R11,-0x1bc034a0cd5f35ac }
    /* +0xb895bd */ __asm { PUSHFQ }
    /* +0xb895be */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb895c6 */ __asm { POPFQ }
    /* +0xb895c7 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb895d1 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb895d8 */ __asm { TEST R10D,R10D }
    /* +0xb895db */ __asm { JS 0x7fffa538790b }
    /* +0xb895e1 */ __asm { PUSHFQ }
    /* +0xb895e2 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb895ea */ __asm { POPFQ }
    /* +0xb895eb */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb895f5 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb895fc */ __asm { MOV AX,0x3 }
    /* +0xb89600 */ __asm { SUB EAX,dword ptr [RBP + 0x1298] }
    /* +0xb89606 */ __asm { ROL AX,0x7 }
    /* +0xb8960a */ __asm { NOT EAX }
    /* +0xb8960c */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb89613 */ __asm { ROR AX,CL }
    /* +0xb89616 */ __asm { XOR R8,R11 }
    /* +0xb89619 */ __asm { MOVSX R11D,AX }
    /* +0xb8961d */ __asm { CMP R10D,R11D }
    /* +0xb89620 */ __asm { JLE 0x7fffa5387913 }
    /* +0xb89626 */ __asm { BSWAP R8 }
    /* +0xb89629 */ __asm { MOV qword ptr [RBP + 0xfa8],R8 }
    /* +0xb89630 */ __asm { MOV RCX,qword ptr [RBP + 0x458] }
    /* +0xb89637 */ __asm { MOV R11D,ECX }
    /* +0xb8963a */ __asm { SHR R11D,0x7 }
    /* +0xb8963e */ __asm { MOV R10D,ECX }
    /* +0xb89641 */ __asm { SHR R10D,0x6 }
    /* +0xb89645 */ __asm { SHR ECX,0xb }
    /* +0xb89648 */ __asm { XOR ECX,R11D }
    /* +0xb8964b */ __asm { OR ECX,R10D }
    /* +0xb8964e */ __asm { XOR CL,0x1 }
    /* +0xb89651 */ __asm { MOV qword ptr [RBP + 0x458],RCX }
    /* +0xb89658 */ __asm { MOV R11B,0xf }
    /* +0xb8965b */ __asm { JMP 0x7fffa5306171 }
    /* +0xb89660 */ __asm { XOR R9B,0xfa }
    /* +0xb89664 */ __asm { CMP R9B,0x5b }
    /* +0xb89668 */ __asm { JNZ 0x7fffa5302117 }
    /* +0xb8966e */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89678 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8967f */ __asm { MOV R10W,0x95ca }
    /* +0xb89684 */ __asm { ADD R10D,0xfffffc80 }
    /* +0xb8968b */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb89692 */ __asm { ROL R10W,CL }
    /* +0xb89696 */ __asm { MOVZX EAX,word ptr [RBP + 0x4d0] }
    /* +0xb8969d */ __asm { XOR EAX,R10D }
    /* +0xb896a0 */ __asm { IMUL EAX,dword ptr [RBP + 0x498] }
    /* +0xb896a7 */ __asm { ADD EAX,0xffffad4c }
    /* +0xb896ac */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb896b3 */ __asm { ROL AX,CL }
    /* +0xb896b6 */ __asm { MOVSX R10D,AX }
    /* +0xb896ba */ __asm { CMP R11D,R10D }
    /* +0xb896bd */ __asm { JLE 0x7fffa538791b }
    /* +0xb896c3 */ __asm { PUSHFQ }
    /* +0xb896c4 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb896cc */ __asm { POPFQ }
    /* +0xb896cd */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb896d7 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb896de */ __asm { TEST R11D,R11D }
    /* +0xb896e1 */ __asm { JS 0x7fffa5387923 }
    /* +0xb896e7 */ __asm { MOV RCX,R8 }
    /* +0xb896ea */ __asm { SHL RCX,0x1f }
    /* +0xb896ee */ __asm { SUB R8,RCX }
    /* +0xb896f1 */ __asm { MOV R11,0x70a37117f8b0294b }
    /* +0xb896fb */ __asm { ADD R11,R8 }
    /* +0xb896fe */ __asm { SHR R11,0xb }
    /* +0xb89702 */ __asm { MOV RDX,0x6b0373c71dad474e }
    /* +0xb8970c */ __asm { MOV qword ptr [RBP + 0xfa8],RDX }
    /* +0xb89713 */ __asm { PUSHFQ }
    /* +0xb89714 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8971c */ __asm { POPFQ }
    /* +0xb8971d */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89727 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb8972e */ __asm { TEST R10D,R10D }
    /* +0xb89731 */ __asm { JS 0x7fffa538793b }
    /* +0xb89737 */ __asm { SUB qword ptr [RBP + 0xfa8],R11 }
    /* +0xb8973e */ __asm { JMP 0x7fffa52fbd56 }
    /* +0xb89743 */ __asm { CMP R9B,0x53 }
    /* +0xb89747 */ __asm { JNZ 0x7fffa53022f7 }
    /* +0xb8974d */ __asm { MOV R11,0x0 }
    /* +0xb89754 */ __asm { NOP }
    /* +0xb89756 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb8975d */ __asm { MOV R11D,0xa03b6ec6 }
    /* +0xb89763 */ __asm { SUB R11D,dword ptr [RBP + 0x1298] }
    /* +0xb8976a */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb89771 */ __asm { ROL R11D,CL }
    /* +0xb89774 */ __asm { SUB R11D,dword ptr [RBP + 0x5d8] }
    /* +0xb8977b */ __asm { ADD R11D,0xd17c6238 }
    /* +0xb89782 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb89789 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89790 */ __asm { TEST R11D,R11D }
    /* +0xb89793 */ __asm { JS 0x7fffa5387943 }
    /* +0xb89799 */ __asm { PUSHFQ }
    /* +0xb8979a */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb897a2 */ __asm { POPFQ }
    /* +0xb897a3 */ __asm { MOV R11,R8 }
    /* +0xb897a6 */ __asm { SHL R11,0x17 }
    /* +0xb897aa */ __asm { ADD R11,R8 }
    /* +0xb897ad */ __asm { SHR R11,0x7 }
    /* +0xb897b1 */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb897b8 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb897c2 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb897c9 */ __asm { TEST R11D,R11D }
    /* +0xb897cc */ __asm { JS 0x7fffa538794b }
    /* +0xb897d2 */ __asm { MOV R8,qword ptr [RBP + 0xfa8] }
    /* +0xb897d9 */ __asm { SHL R8,0x1b }
    /* +0xb897dd */ __asm { PUSHFQ }
    /* +0xb897de */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb897e6 */ __asm { POPFQ }
    /* +0xb897e7 */ __asm { TEST uint8_t ptr [RBP + 0x458],0x41 }
    /* +0xb897ee */ __asm { SETNZ R10B }
    /* +0xb897f2 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb897f9 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89803 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8980a */ __asm { TEST R11D,R11D }
    /* +0xb8980d */ __asm { JS 0x7fffa5387953 }
    /* +0xb89813 */ __asm { ADD qword ptr [RBP + 0xfa8],R8 }
    /* +0xb8981a */ __asm { MOV R11B,0x6 }
    /* +0xb8981d */ __asm { JMP 0x7fffa5306171 }
    /* +0xb89822 */ __asm { CMP R9B,0xf4 }
    /* +0xb89826 */ __asm { JZ 0x7fffa5302452 }
    /* +0xb8982c */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89836 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8983d */ __asm { MOV R10W,0xe070 }
    /* +0xb89842 */ __asm { ADD R10D,0x74e5 }
    /* +0xb89849 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb89850 */ __asm { ROR R10W,CL }
    /* +0xb89854 */ __asm { NOT R10D }
    /* +0xb89857 */ __asm { IMUL R10D,dword ptr [RBP + 0x4a0] }
    /* +0xb8985f */ __asm { MOVSX R10D,R10W }
    /* +0xb89863 */ __asm { CMP R11D,R10D }
    /* +0xb89866 */ __asm { JLE 0x7fffa538795b }
    /* +0xb8986c */ __asm { MOV R11,0x0 }
    /* +0xb89873 */ __asm { NOP }
    /* +0xb89875 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb8987c */ __asm { PUSHFQ }
    /* +0xb8987d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89885 */ __asm { POPFQ }
    /* +0xb89886 */ __asm { TEST dword ptr [RBP + 0x458],0x800 }
    /* +0xb89890 */ __asm { SETZ R10B }
    /* +0xb89894 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb8989b */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb898a5 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb898ac */ __asm { TEST R11D,R11D }
    /* +0xb898af */ __asm { JS 0x7fffa5387963 }
    /* +0xb898b5 */ __asm { PUSHFQ }
    /* +0xb898b6 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb898be */ __asm { POPFQ }
    /* +0xb898bf */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb898c9 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb898d0 */ __asm { TEST R11D,R11D }
    /* +0xb898d3 */ __asm { JS 0x7fffa538796b }
    /* +0xb898d9 */ __asm { NOP }
    /* +0xb898db */ __asm { MOV R11,0x0 }
    /* +0xb898e2 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb898e9 */ __asm { MOV R11,-0x1e5466a975588590 }
    /* +0xb898f3 */ __asm { ADD R11,qword ptr [RBP + 0x1038] }
    /* +0xb898fa */ __asm { MOV RDX,-0x1b1574868723fd1d }
    /* +0xb89904 */ __asm { ADD R8,RDX }
    /* +0xb89907 */ __asm { BSWAP R8 }
    /* +0xb8990a */ __asm { MOV RCX,qword ptr [RBP + 0x5d8] }
    /* +0xb89911 */ __asm { ROR R11,CL }
    /* +0xb89914 */ __asm { SHR R11,0x1f }
    /* +0xb89918 */ __asm { SUB R11,qword ptr [RBP + 0x1298] }
    /* +0xb8991f */ __asm { XOR R11,R8 }
    /* +0xb89922 */ __asm { SHL R8,0x7 }
    /* +0xb89926 */ __asm { XOR R8,R11 }
    /* +0xb89929 */ __asm { MOV qword ptr [RBP + 0xfa8],R8 }
    /* +0xb89930 */ __asm { JMP 0x7fffa5305ae2 }
    /* +0xb89935 */ __asm { CMP R9B,0x1a }
    /* +0xb89939 */ __asm { JLE 0x7fffa5302526 }
    /* +0xb8993f */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89949 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89950 */ __asm { TEST R11D,R11D }
    /* +0xb89953 */ __asm { JS 0x7fffa5387973 }
    /* +0xb89959 */ __asm { PUSHFQ }
    /* +0xb8995a */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89962 */ __asm { POPFQ }
    /* +0xb89963 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8996d */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89974 */ __asm { TEST R11D,R11D }
    /* +0xb89977 */ __asm { JS 0x7fffa538797b }
    /* +0xb8997d */ __asm { PUSHFQ }
    /* +0xb8997e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89986 */ __asm { POPFQ }
    /* +0xb89987 */ __asm { MOV R11,-0x582fc2ba922e374a }
    /* +0xb89991 */ __asm { IMUL R11,qword ptr [RBP + 0x28] }
    /* +0xb89996 */ __asm { MOV EDX,0xcaac56de }
    /* +0xb8999b */ __asm { ADD RDX,R11 }
    /* +0xb8999e */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb899a5 */ __asm { ROL RDX,CL }
    /* +0xb899a8 */ __asm { XOR R8,RDX }
    /* +0xb899ab */ __asm { MOV R11,-0x4261acb37e686443 }
    /* +0xb899b5 */ __asm { IMUL R11,R8 }
    /* +0xb899b9 */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb899c0 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb899ca */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb899d1 */ __asm { TEST R11D,R11D }
    /* +0xb899d4 */ __asm { JNS 0x7fffa52fc59f }
    /* +0xb899e2 */ __asm { CMP R9B,0x8b }
    /* +0xb899e6 */ __asm { JNZ 0x7fffa530260d }
    /* +0xb899ec */ __asm { MOV R11D,0xcd3e15d2 }
    /* +0xb899f2 */ __asm { IMUL R11D,dword ptr [RBP + 0xd0] }
    /* +0xb899fa */ __asm { SUB R11D,dword ptr [RBP + 0x5d8] }
    /* +0xb89a01 */ __asm { ADD R11D,0xbc7a0e42 }
    /* +0xb89a08 */ __asm { ROR R11D,0x1 }
    /* +0xb89a0b */ __asm { NOT R11D }
    /* +0xb89a0e */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb89a15 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89a1c */ __asm { MOV R10W,0xb84d }
    /* +0xb89a21 */ __asm { IMUL R10D,R10D,0x2033 }
    /* +0xb89a28 */ __asm { SUB R10D,dword ptr [RBP + 0x1038] }
    /* +0xb89a2f */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb89a36 */ __asm { ROR R10W,CL }
    /* +0xb89a3a */ __asm { NOT R10D }
    /* +0xb89a3d */ __asm { MOVSX R10D,R10W }
    /* +0xb89a41 */ __asm { CMP R11D,R10D }
    /* +0xb89a44 */ __asm { JLE 0x7fffa5387983 }
    /* +0xb89a4a */ __asm { PUSHFQ }
    /* +0xb89a4b */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89a53 */ __asm { POPFQ }
    /* +0xb89a54 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89a5e */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89a65 */ __asm { MOV R10D,0xad52c773 }
    /* +0xb89a6b */ __asm { MOV ECX,0x731a82c9 }
    /* +0xb89a70 */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xb89a77 */ __asm { XOR R10D,EDX }
    /* +0xb89a7a */ __asm { ADD R10D,dword ptr [RBP + 0x5d8] }
    /* +0xb89a81 */ __asm { ROL R10D,0x7 }
    /* +0xb89a85 */ __asm { MOV RAX,qword ptr [RBP + 0x1298] }
    /* +0xb89a8c */ __asm { ADD R10D,EAX }
    /* +0xb89a8f */ __asm { TEST R11D,R11D }
    /* +0xb89a92 */ __asm { SETNS R9B }
    /* +0xb89a96 */ __asm { XOR ECX,EDX }
    /* +0xb89a98 */ __asm { NEG ECX }
    /* +0xb89a9a */ __asm { LEA R11D,[RAX + RCX*0x1] }
    /* +0xb89a9e */ __asm { ADD R11D,0x162325c7 }
    /* +0xb89aa5 */ __asm { MOVSXD R11,R11D }
    /* +0xb89aa8 */ __asm { CMP R11,R10 }
    /* +0xb89aab */ __asm { SETA CL }
    /* +0xb89aae */ __asm { TEST CL,R9B }
    /* +0xb89ab1 */ __asm { JZ 0x7fffa538799b }
    /* +0xb89ab7 */ __asm { MOV R11D,0x3b057bcd }
    /* +0xb89abd */ __asm { ADD R11D,dword ptr [RBP + 0x1038] }
    /* +0xb89ac4 */ __asm { IMUL R11D,R11D,-0x1e884725 }
    /* +0xb89acb */ __asm { PUSHFQ }
    /* +0xb89acc */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89ad4 */ __asm { POPFQ }
    /* +0xb89ad5 */ __asm { ADD R11D,dword ptr [RBP + 0x1298] }
    /* +0xb89adc */ __asm { XOR R11D,dword ptr [RBP + 0x5d8] }
    /* +0xb89ae3 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb89aea */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89af1 */ __asm { TEST R11D,R11D }
    /* +0xb89af4 */ __asm { JS 0x7fffa53879a3 }
    /* +0xb89afa */ __asm { NOT R8 }
    /* +0xb89afd */ __asm { MOV qword ptr [RBP + 0xfa8],R8 }
    /* +0xb89b04 */ __asm { JMP 0x7fffa5302fe4 }
    /* +0xb89b09 */ __asm { CMP R9B,0x71 }
    /* +0xb89b0d */ __asm { JNZ 0x7fffa53026cb }
    /* +0xb89b13 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89b1d */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89b24 */ __asm { TEST R11D,R11D }
    /* +0xb89b27 */ __asm { JS 0x7fffa53879ab }
    /* +0xb89b2d */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb89b34 */ __asm { NOP }
    /* +0xb89b36 */ __asm { MOV R11,0x0 }
    /* +0xb89b3d */ __asm { MOV R11D,0xf40af9c9 }
    /* +0xb89b43 */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xb89b4a */ __asm { SUB R11D,dword ptr [RBP + 0x5d8] }
    /* +0xb89b51 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb89b58 */ __asm { ROL R11D,CL }
    /* +0xb89b5b */ __asm { ADD R11D,0xe252cce }
    /* +0xb89b62 */ __asm { PUSHFQ }
    /* +0xb89b63 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89b6b */ __asm { POPFQ }
    /* +0xb89b6c */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb89b73 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89b7a */ __asm { TEST R11D,R11D }
    /* +0xb89b7d */ __asm { JS 0x7fffa53879b3 }
    /* +0xb89b83 */ __asm { MOV R11D,0xa3288469 }
    /* +0xb89b89 */ __asm { IMUL R11D,dword ptr [RBP + 0x11d8] }
    /* +0xb89b91 */ __asm { ADD R11D,dword ptr [RBP + 0x1298] }
    /* +0xb89b98 */ __asm { MOV RDX,qword ptr [RBP + 0x458] }
    /* +0xb89b9f */ __asm { MOV R10D,EDX }
    /* +0xb89ba2 */ __asm { SHR R10D,0xb }
    /* +0xb89ba6 */ __asm { PUSHFQ }
    /* +0xb89ba7 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89baf */ __asm { POPFQ }
    /* +0xb89bb0 */ __asm { ROL R11D,0x1a }
    /* +0xb89bb4 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb89bbb */ __asm { ROR R11D,CL }
    /* +0xb89bbe */ __asm { SHR EDX,0x7 }
    /* +0xb89bc1 */ __asm { XOR EDX,R10D }
    /* +0xb89bc4 */ __asm { MOV qword ptr [RBP + 0x458],RDX }
    /* +0xb89bcb */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb89bd2 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89bd9 */ __asm { TEST R11D,R11D }
    /* +0xb89bdc */ __asm { JS 0x7fffa53879bb }
    /* +0xb89be2 */ __asm { MOV R11,0x7687d87b14278151 }
    /* +0xb89bec */ __asm { MOV R10,qword ptr [RBP + 0x5d8] }
    /* +0xb89bf3 */ __asm { OR R10,0x1 }
    /* +0xb89bf7 */ __asm { XOR R11,qword ptr [RBP + 0x1298] }
    /* +0xb89bfe */ __asm { NOT R11 }
    /* +0xb89c01 */ __asm { IMUL R11,R10 }
    /* +0xb89c05 */ __asm { SHR R11,0x12 }
    /* +0xb89c09 */ __asm { IMUL R8,R11 }
    /* +0xb89c0d */ __asm { MOV R11,0x5a1ffe31bb8f5b78 }
    /* +0xb89c17 */ __asm { ADD R11,R8 }
    /* +0xb89c1a */ __asm { JMP 0x7fffa5302d52 }
    /* +0xb89c1f */ __asm { CMP R9B,0xdd }
    /* +0xb89c23 */ __asm { JNZ 0x7fffa530279d }
    /* +0xb89c29 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89c33 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89c3a */ __asm { TEST R11D,R11D }
    /* +0xb89c3d */ __asm { JS 0x7fffa53879c3 }
    /* +0xb89c43 */ __asm { MOV R11,0x98f2020f853b09c }
    /* +0xb89c4d */ __asm { ADD R8,R11 }
    /* +0xb89c50 */ __asm { MOV R11,R8 }
    /* +0xb89c53 */ __asm { SHR R11,0xf }
    /* +0xb89c57 */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb89c5e */ __asm { PUSHFQ }
    /* +0xb89c5f */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89c67 */ __asm { POPFQ }
    /* +0xb89c68 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89c72 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89c79 */ __asm { TEST R11D,R11D }
    /* +0xb89c7c */ __asm { JS 0x7fffa53879cb }
    /* +0xb89c82 */ __asm { XOR qword ptr [RBP + 0xfa8],R8 }
    /* +0xb89c89 */ __asm { MOV R11,-0x3c2fa1ec9c2e844e }
    /* +0xb89c93 */ __asm { PUSHFQ }
    /* +0xb89c94 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89c9c */ __asm { POPFQ }
    /* +0xb89c9d */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89ca7 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb89cae */ __asm { TEST R10D,R10D }
    /* +0xb89cb1 */ __asm { JS 0x7fffa53879d3 }
    /* +0xb89cb7 */ __asm { ADD qword ptr [RBP + 0xfa8],R11 }
    /* +0xb89cbe */ __asm { JMP 0x7fffa53041f0 }
    /* +0xb89cc3 */ __asm { MOV CL,0xf5 }
    /* +0xb89cc5 */ __asm { MOVZX R11D,CL }
    /* +0xb89cc9 */ __asm { IMUL R11D,R11D,0x67 }
    /* +0xb89ccd */ __asm { XOR R11B,uint8_t ptr [RBP + 0x5d8] }
    /* +0xb89cd4 */ __asm { ADD R11B,0x62 }
    /* +0xb89cd8 */ __asm { XOR R11B,uint8_t ptr [RBP + 0x1038] }
    /* +0xb89cdf */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb89ce6 */ __asm { ROL R11B,CL }
    /* +0xb89ce9 */ __asm { CMP R9B,R11B }
    /* +0xb89cec */ __asm { JL 0x7fffa53028bd }
    /* +0xb89cf2 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89cfc */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89d03 */ __asm { TEST R11D,R11D }
    /* +0xb89d06 */ __asm { JS 0x7fffa53879db }
    /* +0xb89d0c */ __asm { NOP }
    /* +0xb89d0e */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb89d15 */ __asm { MOV R11,0x0 }
    /* +0xb89d1c */ __asm { LEA R11,[R8*0x8] }
    /* +0xb89d24 */ __asm { SUB R8,R11 }
    /* +0xb89d27 */ __asm { MOV R11,-0x1b345dcc7a11258c }
    /* +0xb89d31 */ __asm { ADD R11,R8 }
    /* +0xb89d34 */ __asm { BSWAP R11 }
    /* +0xb89d37 */ __asm { MOV RDX,R11 }
    /* +0xb89d3a */ __asm { SHR RDX,0x4 }
    /* +0xb89d3e */ __asm { MOV R8,0xf0f0f0f0f0f0f0f }
    /* +0xb89d48 */ __asm { AND RDX,R8 }
    /* +0xb89d4b */ __asm { AND R11,R8 }
    /* +0xb89d4e */ __asm { SHL R11,0x4 }
    /* +0xb89d52 */ __asm { OR R11,RDX }
    /* +0xb89d55 */ __asm { MOV RDX,0x3333333333333333 }
    /* +0xb89d5f */ __asm { MOV R8,R11 }
    /* +0xb89d62 */ __asm { AND R8,RDX }
    /* +0xb89d65 */ __asm { SHR R11,0x2 }
    /* +0xb89d69 */ __asm { AND R11,RDX }
    /* +0xb89d6c */ __asm { LEA R8,[R11 + R8*0x4] }
    /* +0xb89d70 */ __asm { MOV RDX,0x5555555555555555 }
    /* +0xb89d7a */ __asm { MOV R11,R8 }
    /* +0xb89d7d */ __asm { PUSHFQ }
    /* +0xb89d7e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89d86 */ __asm { POPFQ }
    /* +0xb89d87 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89d91 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb89d98 */ __asm { MOV AX,0x7bf2 }
    /* +0xb89d9c */ __asm { SUB EAX,dword ptr [RBP + 0x1298] }
    /* +0xb89da2 */ __asm { IMUL EAX,EAX,-0x6d45 }
    /* +0xb89da8 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb89daf */ __asm { ROR AX,CL }
    /* +0xb89db2 */ __asm { SHR R11,0x1 }
    /* +0xb89db5 */ __asm { SUB EAX,dword ptr [RBP + 0x1038] }
    /* +0xb89dbb */ __asm { CWDE }
    /* +0xb89dbc */ __asm { CMP R10D,EAX }
    /* +0xb89dbf */ __asm { JLE 0x7fffa53879e3 }
    /* +0xb89dc5 */ __asm { AND R8,RDX }
    /* +0xb89dc8 */ __asm { AND R11,RDX }
    /* +0xb89dcb */ __asm { MOV R10D,0x1807d679 }
    /* +0xb89dd1 */ __asm { ADD R10D,dword ptr [RBP + 0x480] }
    /* +0xb89dd8 */ __asm { IMUL R10D,dword ptr [RBP + 0xd0] }
    /* +0xb89de0 */ __asm { ADD R10D,0xedd66e2d }
    /* +0xb89de7 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb89dee */ __asm { ROL R10D,CL }
    /* +0xb89df1 */ __asm { PUSHFQ }
    /* +0xb89df2 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89dfa */ __asm { POPFQ }
    /* +0xb89dfb */ __asm { MOV dword ptr [RBP + 0x5e0],R10D }
    /* +0xb89e02 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb89e09 */ __asm { TEST R10D,R10D }
    /* +0xb89e0c */ __asm { JNS 0x7fffa530491b }
    /* +0xb89e12 */ __asm { MOV qword ptr [R14 + 0xab01e9],-0x67fbf00 }
    /* +0xb89e1d */ __asm { MOV EAX,0x8beb850f }
    /* +0xb89e22 */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0xb89e24 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89e2e */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89e35 */ __asm { TEST R11D,R11D }
    /* +0xb89e38 */ __asm { JS 0x7fffa53879eb }
    /* +0xb89e3e */ __asm { PUSHFQ }
    /* +0xb89e3f */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89e47 */ __asm { POPFQ }
    /* +0xb89e48 */ __asm { TEST uint8_t ptr [RBP + 0x458],0x41 }
    /* +0xb89e4f */ __asm { SETZ R10B }
    /* +0xb89e53 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb89e5a */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89e64 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89e6b */ __asm { TEST R11D,R11D }
    /* +0xb89e6e */ __asm { JS 0x7fffa53879f3 }
    /* +0xb89e74 */ __asm { PUSHFQ }
    /* +0xb89e75 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89e7d */ __asm { POPFQ }
    /* +0xb89e7e */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89e88 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89e8f */ __asm { TEST R11D,R11D }
    /* +0xb89e92 */ __asm { JS 0x7fffa53879fb }
    /* +0xb89e98 */ __asm { MOV R11,-0x5458e523ffc87f86 }
    /* +0xb89ea2 */ __asm { XOR R11,qword ptr [RBP + 0x480] }
    /* +0xb89ea9 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb89eb0 */ __asm { ROL R11,CL }
    /* +0xb89eb3 */ __asm { ROL R11,0x34 }
    /* +0xb89eb7 */ __asm { IMUL R11,qword ptr [RBP + 0x50] }
    /* +0xb89ebc */ __asm { ADD R8,R11 }
    /* +0xb89ebf */ __asm { ROL R8,0xb }
    /* +0xb89ec3 */ __asm { MOV R11,R8 }
    /* +0xb89ec6 */ __asm { SHR R11,0x3 }
    /* +0xb89eca */ __asm { XOR R11,R8 }
    /* +0xb89ecd */ __asm { ROL R11,0x13 }
    /* +0xb89ed1 */ __asm { JMP 0x7fffa5304e50 }
    /* +0xb89ed6 */ __asm { CMP R9B,0x47 }
    /* +0xb89eda */ __asm { JZ 0x7fffa5302acd }
    /* +0xb89ee0 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89eea */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89ef1 */ __asm { TEST R11D,R11D }
    /* +0xb89ef4 */ __asm { JS 0x7fffa5387a03 }
    /* +0xb89efa */ __asm { TEST uint8_t ptr [RBP + 0x458],0x40 }
    /* +0xb89f01 */ __asm { SETZ R10B }
    /* +0xb89f05 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb89f0c */ __asm { PUSHFQ }
    /* +0xb89f0d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89f15 */ __asm { POPFQ }
    /* +0xb89f16 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89f20 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89f27 */ __asm { TEST R11D,R11D }
    /* +0xb89f2a */ __asm { JS 0x7fffa5387a0b }
    /* +0xb89f30 */ __asm { MOV R10D,0x343bef28 }
    /* +0xb89f36 */ __asm { ADD R10D,dword ptr [RBP + 0x1298] }
    /* +0xb89f3d */ __asm { NOT R10D }
    /* +0xb89f40 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb89f47 */ __asm { ROR R10D,CL }
    /* +0xb89f4a */ __asm { IMUL R10D,dword ptr [RBP + 0x11d8] }
    /* +0xb89f52 */ __asm { MOV RCX,R8 }
    /* +0xb89f55 */ __asm { ROL RCX,0x30 }
    /* +0xb89f59 */ __asm { MOV R9,R8 }
    /* +0xb89f5c */ __asm { ROL R9,0xf }
    /* +0xb89f60 */ __asm { ROL R8,0xd }
    /* +0xb89f64 */ __asm { XOR R8,R9 }
    /* +0xb89f67 */ __asm { MOV R11,-0x223fa3e2c35ab0ef }
    /* +0xb89f71 */ __asm { XOR R11,RCX }
    /* +0xb89f74 */ __asm { XOR R11,R8 }
    /* +0xb89f77 */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb89f7e */ __asm { PUSHFQ }
    /* +0xb89f7f */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb89f87 */ __asm { POPFQ }
    /* +0xb89f88 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb89f92 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb89f99 */ __asm { TEST R11D,R11D }
    /* +0xb89f9c */ __asm { JS 0x7fffa5387a13 }
    /* +0xb89fa2 */ __asm { MOV R11,qword ptr [RBP + 0xfa8] }
    /* +0xb89fa9 */ __asm { IMUL R11,R10 }
    /* +0xb89fad */ __asm { JMP 0x7fffa5304a6b }
    /* +0xb89fb2 */ __asm { CMP R9B,0xe1 }
    /* +0xb89fb6 */ __asm { JZ 0x7fffa5302beb }
    /* +0xb89fbc */ __asm { MOV R11D,0x90a6fad3 }
    /* +0xb89fc2 */ __asm { SUB R11D,dword ptr [RBP + 0x1038] }
    /* +0xb89fc9 */ __asm { IMUL R11D,R11D,0x31a09b37 }
    /* +0xb89fd0 */ __asm { NOT R11D }
    /* +0xb89fd3 */ __asm { IMUL R11D,R11D,0x4f4b0757 }
    /* +0xb89fda */ __asm { NOT R11D }
    /* +0xb89fdd */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb89fe4 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
}


// ============================================================================
// Function : FUN_7fffa52fbd4f  |  RVA: 0xb8bd4f  |  Size: 7251 bytes
// Callers  : FUN_7fffa52f2071@0xb82071
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52fbd4f(void) {
    /* +0xb8bd4f */ __asm { MOV qword ptr [RBP + 0xfa8],R8 }
    /* +0xb8bd56 */ __asm { TEST uint8_t ptr [RBP + 0x458],0x41 }
    /* +0xb8bd5d */ __asm { SETNZ R10B }
    /* +0xb8bd61 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb8bd68 */ __asm { MOV R11B,0x6 }
    /* +0xb8bd6b */ __asm { JMP 0x7fffa5306171 }
    /* +0xb8bd70 */ __asm { CMP R9B,0x8f }
    /* +0xb8bd74 */ __asm { JGE 0x7fffa53046f4 }
    /* +0xb8bd7a */ __asm { MOV R11D,0xc4734b5a }
    /* +0xb8bd80 */ __asm { IMUL R11D,R11D,0x7ffe0031 }
    /* +0xb8bd87 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb8bd8e */ __asm { ROL R11D,CL }
    /* +0xb8bd91 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb8bd98 */ __asm { ROR R11D,CL }
    /* +0xb8bd9b */ __asm { ADD R11D,dword ptr [RBP + 0x5d8] }
    /* +0xb8bda2 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb8bda9 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8bdb0 */ __asm { TEST R11D,R11D }
    /* +0xb8bdb3 */ __asm { JS 0x7fffa5387d62 }
    /* +0xb8bdb9 */ __asm { PUSHFQ }
    /* +0xb8bdba */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8bdc2 */ __asm { POPFQ }
    /* +0xb8bdc3 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8bdcd */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8bdd4 */ __asm { TEST R11D,R11D }
    /* +0xb8bdd7 */ __asm { JS 0x7fffa5387d6a }
    /* +0xb8bddd */ __asm { PUSHFQ }
    /* +0xb8bdde */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8bde6 */ __asm { POPFQ }
    /* +0xb8bde7 */ __asm { TEST uint8_t ptr [RBP + 0x458],0x40 }
    /* +0xb8bdee */ __asm { SETZ R10B }
    /* +0xb8bdf2 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb8bdf9 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8be03 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8be0a */ __asm { TEST R11D,R11D }
    /* +0xb8be0d */ __asm { JS 0x7fffa5387d72 }
    /* +0xb8be13 */ __asm { NOT R8 }
    /* +0xb8be16 */ __asm { MOV R11,R8 }
    /* +0xb8be19 */ __asm { SHL R11,0x1b }
    /* +0xb8be1d */ __asm { ADD R11,R8 }
    /* +0xb8be20 */ __asm { ROL R11,0x3 }
    /* +0xb8be24 */ __asm { JMP 0x7fffa5304a6b }
    /* +0xb8bf1e */ __asm { MOV AL,0x18 }
    /* +0xb8bf20 */ __asm { MOV R10,qword ptr [RBP + 0x1048] }
    /* +0xb8bf27 */ __asm { MOV ECX,R10D }
    /* +0xb8bf2a */ __asm { OR CL,0x1 }
    /* +0xb8bf2d */ __asm { MUL CL }
    /* +0xb8bf2f */ __asm { ROL AL,0x1 }
    /* +0xb8bf31 */ __asm { SUB AL,uint8_t ptr [RBP + 0x5d8] }
    /* +0xb8bf37 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb8bf3e */ __asm { ROL AL,CL }
    /* +0xb8bf40 */ __asm { CMP R9B,AL }
    /* +0xb8bf43 */ __asm { JL 0x7fffa5304940 }
    /* +0xb8bf49 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8bf53 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8bf5a */ __asm { MOV R10W,0x1e41 }
    /* +0xb8bf5f */ __asm { XOR R10D,dword ptr [RBP + 0x1298] }
    /* +0xb8bf66 */ __asm { IMUL R10D,dword ptr [RBP + 0x498] }
    /* +0xb8bf6e */ __asm { MOV EAX,0xffffb66d }
    /* +0xb8bf73 */ __asm { SUB EAX,R10D }
    /* +0xb8bf76 */ __asm { MOVSX R10D,AX }
    /* +0xb8bf7a */ __asm { CMP R11D,R10D }
    /* +0xb8bf7d */ __asm { JLE 0x7fffa5387d92 }
    /* +0xb8bf83 */ __asm { MOV RDX,qword ptr [RBP + 0x458] }
    /* +0xb8bf8a */ __asm { MOV R11D,EDX }
    /* +0xb8bf8d */ __asm { SHR R11D,0x7 }
    /* +0xb8bf91 */ __asm { MOV R10D,EDX }
    /* +0xb8bf94 */ __asm { SHR EDX,0xb }
    /* +0xb8bf97 */ __asm { PUSHFQ }
    /* +0xb8bf98 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8bfa0 */ __asm { POPFQ }
    /* +0xb8bfa1 */ __asm { XOR EDX,R11D }
    /* +0xb8bfa4 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8bfae */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8bfb5 */ __asm { MOV AX,0x8acc }
    /* +0xb8bfb9 */ __asm { MOV R9D,0xffff8acb }
    /* +0xb8bfbf */ __asm { SUB R9D,EAX }
    /* +0xb8bfc2 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb8bfc9 */ __asm { ROR R9W,CL }
    /* +0xb8bfcd */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb8bfd4 */ __asm { ROL R9W,CL }
    /* +0xb8bfd8 */ __asm { SHR R10D,0x6 }
    /* +0xb8bfdc */ __asm { OR EDX,R10D }
    /* +0xb8bfdf */ __asm { MOV qword ptr [RBP + 0x458],RDX }
    /* +0xb8bfe6 */ __asm { MOVSX R10D,R9W }
    /* +0xb8bfea */ __asm { CMP R11D,R10D }
    /* +0xb8bfed */ __asm { JLE 0x7fffa5387d9a }
    /* +0xb8bff3 */ __asm { MOV R11,-0x400007ff7ffff }
    /* +0xb8bffd */ __asm { IMUL R8,R11 }
    /* +0xb8c001 */ __asm { MOV R11,-0x2884ca2ad682b919 }
    /* +0xb8c00b */ __asm { XOR R11,qword ptr [RBP + 0x1038] }
    /* +0xb8c012 */ __asm { MOV R9,qword ptr [RBP + 0x1298] }
    /* +0xb8c019 */ __asm { OR R9,0x1 }
    /* +0xb8c01d */ __asm { IMUL R9,R11 }
    /* +0xb8c021 */ __asm { XOR R9,-0x1262c73c }
    /* +0xb8c028 */ __asm { MOV RCX,qword ptr [RBP + 0x5d8] }
    /* +0xb8c02f */ __asm { ROR R9,CL }
    /* +0xb8c032 */ __asm { PUSHFQ }
    /* +0xb8c033 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c03b */ __asm { POPFQ }
    /* +0xb8c03c */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c046 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c04d */ __asm { TEST R11D,R11D }
    /* +0xb8c050 */ __asm { JS 0x7fffa5387db2 }
    /* +0xb8c056 */ __asm { MOV R10,qword ptr [RBP + 0x458] }
    /* +0xb8c05d */ __asm { XOR R10B,0x1 }
    /* +0xb8c061 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb8c068 */ __asm { ADD R8,R9 }
    /* +0xb8c06b */ __asm { JMP 0x7fffa52fef03 }
    /* +0xb8c070 */ __asm { CMP R9B,0x38 }
    /* +0xb8c074 */ __asm { JNZ 0x7fffa5304a7a }
    /* +0xb8c07a */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c084 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c08b */ __asm { TEST R11D,R11D }
    /* +0xb8c08e */ __asm { JS 0x7fffa5387dba }
    /* +0xb8c094 */ __asm { TEST uint8_t ptr [RBP + 0x458],0x41 }
    /* +0xb8c09b */ __asm { SETZ R10B }
    /* +0xb8c09f */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb8c0a6 */ __asm { PUSHFQ }
    /* +0xb8c0a7 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c0af */ __asm { POPFQ }
    /* +0xb8c0b0 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c0ba */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c0c1 */ __asm { MOV R10W,0xedfb }
    /* +0xb8c0c6 */ __asm { IMUL R10D,R10D,0x4955 }
    /* +0xb8c0cd */ __asm { SUB R10D,dword ptr [RBP + 0x1038] }
    /* +0xb8c0d4 */ __asm { MOV RCX,qword ptr [RBP + 0x5d8] }
    /* +0xb8c0db */ __asm { ROR R10W,CL }
    /* +0xb8c0df */ __asm { SUB R10D,dword ptr [RBP + 0x1298] }
    /* +0xb8c0e6 */ __asm { MOVSX R10D,R10W }
    /* +0xb8c0ea */ __asm { CMP R11D,R10D }
    /* +0xb8c0ed */ __asm { JLE 0x7fffa5387dc2 }
    /* +0xb8c0f3 */ __asm { PUSHFQ }
    /* +0xb8c0f4 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c0fc */ __asm { POPFQ }
    /* +0xb8c0fd */ __asm { MOV R11,0x331564838b676a18 }
    /* +0xb8c107 */ __asm { XOR R8,R11 }
    /* +0xb8c10a */ __asm { MOV R11,R8 }
    /* +0xb8c10d */ __asm { SHR R11,0x7 }
    /* +0xb8c111 */ __asm { XOR R11,R8 }
    /* +0xb8c114 */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb8c11b */ __asm { MOV R8,R11 }
    /* +0xb8c11e */ __asm { SHL R8,0xb }
    /* +0xb8c122 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c12c */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c133 */ __asm { TEST R11D,R11D }
    /* +0xb8c136 */ __asm { JS 0x7fffa5387dca }
    /* +0xb8c13c */ __asm { SUB qword ptr [RBP + 0xfa8],R8 }
    /* +0xb8c143 */ __asm { MOV R11B,0x7 }
    /* +0xb8c146 */ __asm { JMP 0x7fffa5306171 }
    /* +0xb8c14b */ __asm { JZ 0x7fffa5304b91 }
    /* +0xb8c151 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c15b */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c162 */ __asm { MOV R10W,0x3e3d }
    /* +0xb8c167 */ __asm { ADD R10D,0x7c75 }
    /* +0xb8c16e */ __asm { MOV RCX,qword ptr [RBP + 0x5d8] }
    /* +0xb8c175 */ __asm { ROL R10W,CL }
    /* +0xb8c179 */ __asm { SUB R10D,dword ptr [RBP + 0x1038] }
    /* +0xb8c180 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb8c187 */ __asm { ROR R10W,CL }
    /* +0xb8c18b */ __asm { MOVSX R10D,R10W }
    /* +0xb8c18f */ __asm { CMP R11D,R10D }
    /* +0xb8c192 */ __asm { JLE 0x7fffa5387dd2 }
    /* +0xb8c198 */ __asm { PUSHFQ }
    /* +0xb8c199 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c1a1 */ __asm { POPFQ }
    /* +0xb8c1a2 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c1ac */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c1b3 */ __asm { TEST R11D,R11D }
    /* +0xb8c1b6 */ __asm { JS 0x7fffa5387dda }
    /* +0xb8c1bc */ __asm { PUSHFQ }
    /* +0xb8c1bd */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c1c5 */ __asm { POPFQ }
    /* +0xb8c1c6 */ __asm { MOV RDX,qword ptr [RBP + 0x458] }
    /* +0xb8c1cd */ __asm { MOV R11D,EDX }
    /* +0xb8c1d0 */ __asm { SHR R11D,0x7 }
    /* +0xb8c1d4 */ __asm { MOV R10D,EDX }
    /* +0xb8c1d7 */ __asm { SHR R10D,0xb }
    /* +0xb8c1db */ __asm { XOR R10D,R11D }
    /* +0xb8c1de */ __asm { SHR EDX,0x6 }
    /* +0xb8c1e1 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c1eb */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c1f2 */ __asm { MOV AX,0x1995 }
    /* +0xb8c1f6 */ __asm { ADD EAX,0xffffd74f }
    /* +0xb8c1fb */ __asm { IMUL EAX,dword ptr [RBP + 0x4a0] }
    /* +0xb8c202 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb8c209 */ __asm { ROL AX,CL }
    /* +0xb8c20c */ __asm { OR EDX,R10D }
    /* +0xb8c20f */ __asm { MOV qword ptr [RBP + 0x458],RDX }
    /* +0xb8c216 */ __asm { IMUL EAX,dword ptr [RBP + 0x188] }
    /* +0xb8c21d */ __asm { MOVSX R10D,AX }
    /* +0xb8c221 */ __asm { CMP R11D,R10D }
    /* +0xb8c224 */ __asm { JLE 0x7fffa5387df2 }
    /* +0xb8c22a */ __asm { ROL R8,0x21 }
    /* +0xb8c22e */ __asm { MOV R10,qword ptr [RBP + 0x458] }
    /* +0xb8c235 */ __asm { XOR R10B,0x1 }
    /* +0xb8c239 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb8c240 */ __asm { MOV RCX,R8 }
    /* +0xb8c243 */ __asm { SHL RCX,0xb }
    /* +0xb8c247 */ __asm { XOR RCX,R8 }
    /* +0xb8c24a */ __asm { MOV R8,RCX }
    /* +0xb8c24d */ __asm { ROL R8,0xf }
    /* +0xb8c251 */ __asm { MOV R9,RCX }
    /* +0xb8c254 */ __asm { ROL R9,0x5 }
    /* +0xb8c258 */ __asm { XOR R9,R8 }
    /* +0xb8c25b */ __asm { XOR R9,RCX }
    /* +0xb8c25e */ __asm { MOV R11,-0x531c05b27335f233 }
    /* +0xb8c268 */ __asm { ADD R11,R9 }
    /* +0xb8c26b */ __asm { JMP 0x7fffa53025fe }
    /* +0xb8c270 */ __asm { CMP R9B,0x41 }
    /* +0xb8c274 */ __asm { JZ 0x7fffa5304c74 }
    /* +0xb8c27a */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c284 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c28b */ __asm { TEST R11D,R11D }
    /* +0xb8c28e */ __asm { JS 0x7fffa5387dfa }
    /* +0xb8c294 */ __asm { PUSHFQ }
    /* +0xb8c295 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c29d */ __asm { POPFQ }
    /* +0xb8c29e */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c2a8 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c2af */ __asm { TEST R11D,R11D }
    /* +0xb8c2b2 */ __asm { JS 0x7fffa5387e02 }
    /* +0xb8c2b8 */ __asm { MOV R11,0x200800c01001 }
    /* +0xb8c2c2 */ __asm { IMUL R8,R11 }
    /* +0xb8c2c6 */ __asm { MOV R11,0x1ab9e4f4555b5668 }
    /* +0xb8c2d0 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb8c2d7 */ __asm { OR RCX,0x1 }
    /* +0xb8c2db */ __asm { XOR R11,qword ptr [RBP + 0x480] }
    /* +0xb8c2e2 */ __asm { ROL R11,0x8 }
    /* +0xb8c2e6 */ __asm { PUSHFQ }
    /* +0xb8c2e7 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c2ef */ __asm { POPFQ }
    /* +0xb8c2f0 */ __asm { ADD R11,qword ptr [RBP + 0x1038] }
    /* +0xb8c2f7 */ __asm { IMUL R11,RCX }
    /* +0xb8c2fb */ __asm { XOR R11,R8 }
    /* +0xb8c2fe */ __asm { BSWAP R11 }
    /* +0xb8c301 */ __asm { MOV RDX,R11 }
    /* +0xb8c304 */ __asm { SHR RDX,0x4 }
    /* +0xb8c308 */ __asm { MOV R8,0xf0f0f0f0f0f0f0f }
    /* +0xb8c312 */ __asm { AND RDX,R8 }
    /* +0xb8c315 */ __asm { AND R11,R8 }
    /* +0xb8c318 */ __asm { SHL R11,0x4 }
    /* +0xb8c31c */ __asm { OR R11,RDX }
    /* +0xb8c31f */ __asm { MOV RDX,0x3333333333333333 }
    /* +0xb8c329 */ __asm { MOV R8,R11 }
    /* +0xb8c32c */ __asm { AND R8,RDX }
    /* +0xb8c32f */ __asm { SHR R11,0x2 }
    /* +0xb8c333 */ __asm { AND R11,RDX }
    /* +0xb8c336 */ __asm { LEA R11,[R11 + R8*0x4] }
    /* +0xb8c33a */ __asm { MOV R8,0x5555555555554000 }
    /* +0xb8c344 */ __asm { AND R8,R11 }
    /* +0xb8c347 */ __asm { SHR R11,0x1 }
    /* +0xb8c34a */ __asm { MOV RDX,0x5555555555550000 }
    /* +0xb8c354 */ __asm { AND RDX,R11 }
    /* +0xb8c357 */ __asm { LEA R11,[RDX + R8*0x2] }
    /* +0xb8c35b */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb8c362 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c36c */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c373 */ __asm { TEST R11D,R11D }
    /* +0xb8c376 */ __asm { JS 0x7fffa5387e0a }
    /* +0xb8c37c */ __asm { SHR qword ptr [RBP + 0xfa8],0xf }
    /* +0xb8c384 */ __asm { MOV R10,qword ptr [RBP + 0x458] }
    /* +0xb8c38b */ __asm { NOT R10B }
    /* +0xb8c38e */ __asm { SHR R10B,0x7 }
    /* +0xb8c392 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb8c399 */ __asm { NOP }
    /* +0xb8c39b */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb8c3a2 */ __asm { MOV R8,0x0 }
    /* +0xb8c3a9 */ __asm { MOV R11B,0x9 }
    /* +0xb8c3ac */ __asm { JMP 0x7fffa5306171 }
    /* +0xb8c3b1 */ __asm { CMP R9B,0xe4 }
    /* +0xb8c3b5 */ __asm { JLE 0x7fffa5304d55 }
    /* +0xb8c3bb */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c3c5 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c3cc */ __asm { TEST R11D,R11D }
    /* +0xb8c3cf */ __asm { JS 0x7fffa5387e12 }
    /* +0xb8c3d5 */ __asm { PUSHFQ }
    /* +0xb8c3d6 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c3de */ __asm { POPFQ }
    /* +0xb8c3df */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c3e9 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c3f0 */ __asm { MOV R10W,0x5065 }
    /* +0xb8c3f5 */ __asm { SUB R10D,dword ptr [RBP + 0x480] }
    /* +0xb8c3fc */ __asm { ADD R10D,0x15c1 }
    /* +0xb8c403 */ __asm { ROL R10W,0x2 }
    /* +0xb8c408 */ __asm { NOT R10D }
    /* +0xb8c40b */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb8c412 */ __asm { ROR R10W,CL }
    /* +0xb8c416 */ __asm { MOVSX R10D,R10W }
    /* +0xb8c41a */ __asm { CMP R11D,R10D }
    /* +0xb8c41d */ __asm { JLE 0x7fffa5387e1a }
    /* +0xb8c423 */ __asm { MOV R11,0x0 }
    /* +0xb8c42a */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb8c431 */ __asm { NOP }
    /* +0xb8c433 */ __asm { PUSHFQ }
    /* +0xb8c434 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c43c */ __asm { POPFQ }
    /* +0xb8c43d */ __asm { MOV R9,R8 }
    /* +0xb8c440 */ __asm { ROL R9,0xf }
    /* +0xb8c444 */ __asm { MOV RDX,-0x7d104bc65a77dc3c }
    /* +0xb8c44e */ __asm { MOV RAX,R8 }
    /* +0xb8c451 */ __asm { ROL RAX,0x22 }
    /* +0xb8c455 */ __asm { ROL R8,0x2c }
    /* +0xb8c459 */ __asm { IMUL RDX,qword ptr [RBP + 0x50] }
    /* +0xb8c45e */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb8c465 */ __asm { ROR RDX,CL }
    /* +0xb8c468 */ __asm { XOR R8,RAX }
    /* +0xb8c46b */ __asm { MOV R11D,0xc000013b }
    /* +0xb8c471 */ __asm { IMUL R11,RDX }
    /* +0xb8c475 */ __asm { XOR R11,qword ptr [RBP + 0x1298] }
    /* +0xb8c47c */ __asm { SHR R11,0x1 }
    /* +0xb8c47f */ __asm { XOR R11,R9 }
    /* +0xb8c482 */ __asm { XOR R11,R8 }
    /* +0xb8c485 */ __asm { BSWAP R11 }
    /* +0xb8c488 */ __asm { MOV RDX,R11 }
    /* +0xb8c48b */ __asm { SHR RDX,0x4 }
    /* +0xb8c48f */ __asm { MOV R8,0xf0f0f0f0f0f0f0f }
    /* +0xb8c499 */ __asm { AND RDX,R8 }
    /* +0xb8c49c */ __asm { AND R11,R8 }
    /* +0xb8c49f */ __asm { SHL R11,0x4 }
    /* +0xb8c4a3 */ __asm { OR R11,RDX }
    /* +0xb8c4a6 */ __asm { MOV RDX,0x3333333333333333 }
    /* +0xb8c4b0 */ __asm { MOV R8,R11 }
    /* +0xb8c4b3 */ __asm { AND R8,RDX }
    /* +0xb8c4b6 */ __asm { SHR R11,0x2 }
    /* +0xb8c4ba */ __asm { AND R11,RDX }
    /* +0xb8c4bd */ __asm { LEA R11,[R11 + R8*0x4] }
    /* +0xb8c4c1 */ __asm { MOV R8,0x5555555555540000 }
    /* +0xb8c4cb */ __asm { AND R8,R11 }
    /* +0xb8c4ce */ __asm { SHR R11,0x1 }
    /* +0xb8c4d1 */ __asm { MOV RDX,0x5555555555500000 }
    /* +0xb8c4db */ __asm { AND RDX,R11 }
    /* +0xb8c4de */ __asm { LEA R11,[RDX + R8*0x2] }
    /* +0xb8c4e2 */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb8c4e9 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c4f3 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c4fa */ __asm { TEST R11D,R11D }
    /* +0xb8c4fd */ __asm { JS 0x7fffa5387e22 }
    /* +0xb8c503 */ __asm { SHR qword ptr [RBP + 0xfa8],0x13 }
    /* +0xb8c50b */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb8c512 */ __asm { MOV R8,0x0 }
    /* +0xb8c519 */ __asm { NOP }
    /* +0xb8c51b */ __asm { MOV R11B,0x2 }
    /* +0xb8c51e */ __asm { JMP 0x7fffa5306171 }
    /* +0xb8c523 */ __asm { JZ 0x7fffa5304e5f }
    /* +0xb8c529 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c533 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c53a */ __asm { TEST R11D,R11D }
    /* +0xb8c53d */ __asm { JS 0x7fffa5387e2a }
    /* +0xb8c543 */ __asm { PUSHFQ }
    /* +0xb8c544 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c54c */ __asm { POPFQ }
    /* +0xb8c54d */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c557 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c55e */ __asm { TEST R11D,R11D }
    /* +0xb8c561 */ __asm { JS 0x7fffa5387e32 }
    /* +0xb8c567 */ __asm { PUSHFQ }
    /* +0xb8c568 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c570 */ __asm { POPFQ }
    /* +0xb8c571 */ __asm { BSWAP R8 }
    /* +0xb8c574 */ __asm { MOV R11,R8 }
    /* +0xb8c577 */ __asm { SHR R11,0x7 }
    /* +0xb8c57b */ __asm { XOR R11,R8 }
    /* +0xb8c57e */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb8c585 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c58f */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c596 */ __asm { TEST R11D,R11D }
    /* +0xb8c599 */ __asm { JS 0x7fffa5387e3a }
    /* +0xb8c59f */ __asm { NOT qword ptr [RBP + 0xfa8] }
    /* +0xb8c5a6 */ __asm { JMP 0x7fffa5305737 }
    /* +0xb8c5ab */ __asm { CMP R9B,0x9f }
    /* +0xb8c5af */ __asm { JGE 0x7fffa5304f11 }
    /* +0xb8c5b5 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c5bf */ __asm { MOV EAX,dword ptr [RBP + 0x5e0] }
    /* +0xb8c5c5 */ __asm { MOV R9D,0x406530b8 }
    /* +0xb8c5cb */ __asm { XOR R11D,R11D }
    /* +0xb8c5ce */ __asm { CMP EAX,-0x1 }
    /* +0xb8c5d1 */ __asm { SETZ R11B }
    /* +0xb8c5d5 */ __asm { XOR R10D,R10D }
    /* +0xb8c5d8 */ __asm { TEST EAX,EAX }
    /* +0xb8c5da */ __asm { SETNS R10B }
    /* +0xb8c5de */ __asm { SUB R9D,dword ptr [RBP + 0x1298] }
    /* +0xb8c5e5 */ __asm { MOV RCX,qword ptr [RBP + 0x5d8] }
    /* +0xb8c5ec */ __asm { XOR R9D,ECX }
    /* +0xb8c5ef */ __asm { NOT R9D }
    /* +0xb8c5f2 */ __asm { IMUL EDX,R9D,0x635ea44d }
    /* +0xb8c5f9 */ __asm { NOT EDX }
    /* +0xb8c5fb */ __asm { MOV R9D,0xf3b5d41 }
    /* +0xb8c601 */ __asm { SUB R9D,dword ptr [RBP + 0x1038] }
    /* +0xb8c608 */ __asm { ADD R9D,0x438b0c85 }
    /* +0xb8c60f */ __asm { ROL R9D,CL }
    /* +0xb8c612 */ __asm { ADD R9D,0x91f0862 }
    /* +0xb8c619 */ __asm { IMUL R9D,dword ptr [RBP + 0xd0] }
    /* +0xb8c621 */ __asm { CMP RDX,R9 }
    /* +0xb8c624 */ __asm { CMOVBE R11D,R10D }
    /* +0xb8c628 */ __asm { TEST R11B,R11B }
    /* +0xb8c62b */ __asm { JZ 0x7fffa5387e42 }
    /* +0xb8c631 */ __asm { MOV R11,0x3220934ea7e898f7 }
    /* +0xb8c63b */ __asm { PUSHFQ }
    /* +0xb8c63c */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c644 */ __asm { POPFQ }
    /* +0xb8c645 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c64f */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c656 */ __asm { TEST R10D,R10D }
    /* +0xb8c659 */ __asm { JS 0x7fffa5387e4a }
    /* +0xb8c65f */ __asm { IMUL R8,R11 }
    /* +0xb8c663 */ __asm { NOP }
    /* +0xb8c665 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb8c66c */ __asm { MOV R11,0x0 }
    /* +0xb8c673 */ __asm { MOV R10D,0x3ef70b22 }
    /* +0xb8c679 */ __asm { XOR R10D,0x207db0f0 }
    /* +0xb8c680 */ __asm { ROL R10D,0x3 }
    /* +0xb8c684 */ __asm { MOV R11,0x721dbe487c179d14 }
    /* +0xb8c68e */ __asm { XOR R10D,dword ptr [RBP + 0x1038] }
    /* +0xb8c695 */ __asm { PUSHFQ }
    /* +0xb8c696 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c69e */ __asm { POPFQ }
    /* +0xb8c69f */ __asm { ADD R10D,dword ptr [RBP + 0x480] }
    /* +0xb8c6a6 */ __asm { NOT R10D }
    /* +0xb8c6a9 */ __asm { MOV dword ptr [RBP + 0x5e0],R10D }
    /* +0xb8c6b0 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c6b7 */ __asm { TEST R10D,R10D }
    /* +0xb8c6ba */ __asm { JS 0x7fffa5387e52 }
    /* +0xb8c6c0 */ __asm { ADD R8,R11 }
    /* +0xb8c6c3 */ __asm { MOV qword ptr [RBP + 0xfa8],R8 }
    /* +0xb8c6ca */ __asm { MOV R8,0x0 }
    /* +0xb8c6d1 */ __asm { NOP }
    /* +0xb8c6d3 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb8c6da */ __asm { JMP 0x7fffa52fec8a }
    /* +0xb8c6df */ __asm { MOV R10,qword ptr [RBP + 0x5d8] }
    /* +0xb8c6e6 */ __asm { MOV ECX,R10D }
    /* +0xb8c6e9 */ __asm { SUB CL,uint8_t ptr [RBP + 0x1038] }
    /* +0xb8c6ef */ __asm { MOV R10B,0x2e }
    /* +0xb8c6f2 */ __asm { ADD R10B,CL }
    /* +0xb8c6f5 */ __asm { ROL R10B,0x6 }
    /* +0xb8c6f9 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb8c700 */ __asm { ROL R10B,CL }
    /* +0xb8c703 */ __asm { CMP R9B,R10B }
    /* +0xb8c706 */ __asm { JL 0x7fffa5304fbb }
    /* +0xb8c70c */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c716 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c71d */ __asm { TEST R11D,R11D }
    /* +0xb8c720 */ __asm { JS 0x7fffa5387e5a }
    /* +0xb8c726 */ __asm { PUSHFQ }
    /* +0xb8c727 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c72f */ __asm { POPFQ }
    /* +0xb8c730 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c73a */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c741 */ __asm { TEST R11D,R11D }
    /* +0xb8c744 */ __asm { JS 0x7fffa5387e62 }
    /* +0xb8c74a */ __asm { PUSHFQ }
    /* +0xb8c74b */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c753 */ __asm { POPFQ }
    /* +0xb8c754 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c75e */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c765 */ __asm { TEST R11D,R11D }
    /* +0xb8c768 */ __asm { JS 0x7fffa5387e6a }
    /* +0xb8c76e */ __asm { MOV RCX,R8 }
    /* +0xb8c771 */ __asm { SHR RCX,0x13 }
    /* +0xb8c775 */ __asm { XOR RCX,R8 }
    /* +0xb8c778 */ __asm { BSWAP RCX }
    /* +0xb8c77b */ __asm { MOV R11,-0x7b94b24a4591603b }
    /* +0xb8c785 */ __asm { IMUL R11,RCX }
    /* +0xb8c789 */ __asm { MOV RDX,0x6dadd374fe280000 }
    /* +0xb8c793 */ __asm { IMUL RDX,RCX }
    /* +0xb8c797 */ __asm { XOR RDX,R11 }
    /* +0xb8c79a */ __asm { JMP 0x7fffa5302fdd }
    /* +0xb8c79f */ __asm { MOV R10,qword ptr [RBP + 0x1048] }
    /* +0xb8c7a6 */ __asm { MOV EAX,R10D }
    /* +0xb8c7a9 */ __asm { OR AL,0x1 }
    /* +0xb8c7ab */ __asm { MOV CL,0xbb }
    /* +0xb8c7ad */ __asm { XOR CL,uint8_t ptr [RBP + 0x5d8] }
    /* +0xb8c7b3 */ __asm { MUL CL }
    /* +0xb8c7b5 */ __asm { XOR AL,uint8_t ptr [RBP + 0x1038] }
    /* +0xb8c7bb */ __asm { ADD AL,0x60 }
    /* +0xb8c7bd */ __asm { CMP R9B,AL }
    /* +0xb8c7c0 */ __asm { JL 0x7fffa53050e3 }
    /* +0xb8c7c6 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8c7d0 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c7d7 */ __asm { TEST R11D,R11D }
    /* +0xb8c7da */ __asm { JS 0x7fffa5387e72 }
    /* +0xb8c7e0 */ __asm { PUSHFQ }
    /* +0xb8c7e1 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c7e9 */ __asm { POPFQ }
    /* +0xb8c7ea */ __asm { MOV R11D,0xefffc3a2 }
    /* +0xb8c7f0 */ __asm { XOR R11D,dword ptr [RBP + 0x480] }
    /* +0xb8c7f7 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb8c7fe */ __asm { ROR R11D,CL }
    /* +0xb8c801 */ __asm { ADD R11D,0x7bbd06c3 }
    /* +0xb8c808 */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xb8c80f */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb8c816 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8c81d */ __asm { TEST R11D,R11D }
    /* +0xb8c820 */ __asm { JS 0x7fffa5387e7a }
    /* +0xb8c826 */ __asm { MOV R10,qword ptr [RBP + 0x458] }
    /* +0xb8c82d */ __asm { NOT R10B }
    /* +0xb8c830 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb8c837 */ __asm { PUSHFQ }
    /* +0xb8c838 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8c840 */ __asm { POPFQ }
}


// ============================================================================
// Function : FUN_7fffa52fdac3  |  RVA: 0xb8dac3  |  Size: 19761 bytes
// Callers  : FUN_7fffa5381000@0xc11000
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52fdac3(void) {
    /* +0xb8dac3 */ __asm { BSWAP R8 }
    /* +0xb8dac6 */ __asm { PUSHFQ }
    /* +0xb8dac7 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8dacf */ __asm { POPFQ }
    /* +0xb8dad0 */ __asm { MOV RCX,R8 }
    /* +0xb8dad3 */ __asm { SHL RCX,0x13 }
    /* +0xb8dad7 */ __asm { MOV R11,-0x3ffff8000000 }
    /* +0xb8dae1 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8daeb */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb8daf2 */ __asm { TEST R10D,R10D }
    /* +0xb8daf5 */ __asm { JS 0x7fffa5387fe9 }
    /* +0xb8dafb */ __asm { MOV RDX,R8 }
    /* +0xb8dafe */ __asm { SUB RDX,RCX }
    /* +0xb8db01 */ __asm { MOV qword ptr [RBP + 0xfa8],RDX }
    /* +0xb8db08 */ __asm { IMUL R11,R8 }
    /* +0xb8db0c */ __asm { MOV R10,qword ptr [RBP + 0x5d8] }
    /* +0xb8db13 */ __asm { SUB R10D,dword ptr [RBP + 0x1298] }
    /* +0xb8db1a */ __asm { PUSHFQ }
    /* +0xb8db1b */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8db23 */ __asm { POPFQ }
    /* +0xb8db24 */ __asm { MOV R8D,0x802e5752 }
    /* +0xb8db2a */ __asm { IMUL R8D,dword ptr [RBP + 0xe8] }
    /* +0xb8db32 */ __asm { ADD R10D,R8D }
    /* +0xb8db35 */ __asm { ADD R10D,0x4ab5155a }
    /* +0xb8db3c */ __asm { MOV dword ptr [RBP + 0x5e0],R10D }
    /* +0xb8db43 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb8db4a */ __asm { TEST R10D,R10D }
    /* +0xb8db4d */ __asm { JS 0x7fffa5387ff1 }
    /* +0xb8db53 */ __asm { XOR qword ptr [RBP + 0xfa8],R11 }
    /* +0xb8db5a */ __asm { MOV RCX,qword ptr [RBP + 0x458] }
    /* +0xb8db61 */ __asm { MOV R11D,ECX }
    /* +0xb8db64 */ __asm { SHR R11D,0x6 }
    /* +0xb8db68 */ __asm { MOV R8,0x0 }
    /* +0xb8db6f */ __asm { NOP }
    /* +0xb8db71 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb8db78 */ __asm { MOV R10D,ECX }
    /* +0xb8db7b */ __asm { SHR R10D,0xb }
    /* +0xb8db7f */ __asm { SHR ECX,0x7 }
    /* +0xb8db82 */ __asm { XOR ECX,R10D }
    /* +0xb8db85 */ __asm { OR ECX,R11D }
    /* +0xb8db88 */ __asm { JMP 0x7fffa5302a00 }
    /* +0xb8db8d */ __asm { MOV R11W,0x72d5 }
    /* +0xb8db92 */ __asm { NOT R11D }
    /* +0xb8db95 */ __asm { MOV R10,qword ptr [RBP + 0x1298] }
    /* +0xb8db9c */ __asm { ADD R10D,R11D }
    /* +0xb8db9f */ __asm { SUB R10D,dword ptr [RBP + 0x480] }
    /* +0xb8dba6 */ __asm { ADD R10D,0xffffd959 }
    /* +0xb8dbad */ __asm { MOVZX R10D,R10W }
    /* +0xb8dbb1 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xb8dbb5 */ __asm { MOV RDX,0x627319838dbbe607 }
    /* +0xb8dbbf */ __asm { CMP qword ptr [R11 + 0x18],RDX }
    /* +0xb8dbc3 */ __asm { JNZ 0x7fffa52fdbcd }
    /* +0xb8dbc5 */ __asm { MOV EBP,0x901d3fca }
    /* +0xb8dbca */ __asm { XLAT RBX }
    /* +0xb8dbcb */ __asm { JL 0x7fffa52fdbb2 }
    /* +0xb8dbcd */ __asm { XOR ECX,ECX }
    /* +0xb8dbcf */ __asm { INT 0x29 }
    /* +0xb8dbd1 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8dbdb */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8dbe2 */ __asm { MOV R10W,0x4c13 }
    /* +0xb8dbe7 */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xb8dbee */ __asm { MOV EAX,EDX }
    /* +0xb8dbf0 */ __asm { XOR EAX,R10D }
    /* +0xb8dbf3 */ __asm { NOT EAX }
    /* +0xb8dbf5 */ __asm { IMUL EAX,dword ptr [RBP + 0x4a0] }
    /* +0xb8dbfc */ __asm { ADD EAX,0x51ce }
    /* +0xb8dc01 */ __asm { MOVSX R10D,AX }
    /* +0xb8dc05 */ __asm { CMP R11D,R10D }
    /* +0xb8dc08 */ __asm { JLE 0x7fffa5387ff9 }
    /* +0xb8dc0e */ __asm { PUSHFQ }
    /* +0xb8dc0f */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8dc17 */ __asm { POPFQ }
    /* +0xb8dc18 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8dc22 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8dc29 */ __asm { TEST R11D,R11D }
    /* +0xb8dc2c */ __asm { JS 0x7fffa5388001 }
    /* +0xb8dc32 */ __asm { MOV R10D,0xf0e4c1f6 }
    /* +0xb8dc38 */ __asm { PUSHFQ }
    /* +0xb8dc39 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8dc41 */ __asm { POPFQ }
    /* +0xb8dc42 */ __asm { ADD R10D,dword ptr [RBP + 0x480] }
    /* +0xb8dc49 */ __asm { MOV R11,-0x20b4431ac0123b97 }
    /* +0xb8dc53 */ __asm { MOV R9,qword ptr [RBP + 0x1038] }
    /* +0xb8dc5a */ __asm { MOV ECX,R9D }
    /* +0xb8dc5d */ __asm { ROR R10D,CL }
    /* +0xb8dc60 */ __asm { ADD R10D,0xe28cc499 }
    /* +0xb8dc67 */ __asm { MOV RDI,qword ptr [RBP + 0x1298] }
    /* +0xb8dc6e */ __asm { MOV ECX,EDI }
    /* +0xb8dc70 */ __asm { ROR R10D,CL }
    /* +0xb8dc73 */ __asm { XOR R11,R8 }
    /* +0xb8dc76 */ __asm { MOV EDX,0x1272b377 }
    /* +0xb8dc7b */ __asm { MOV RAX,0x469f5674bf5cbba8 }
    /* +0xb8dc85 */ __asm { ADD RAX,-0x3f88bccc }
    /* +0xb8dc8b */ __asm { MOV ECX,R9D }
    /* +0xb8dc8e */ __asm { ROR RAX,CL }
    /* +0xb8dc91 */ __asm { MOV RCX,qword ptr [RBP + 0x5d8] }
    /* +0xb8dc98 */ __asm { SUB EDX,ECX }
    /* +0xb8dc9a */ __asm { ROL EDX,0xe }
    /* +0xb8dc9d */ __asm { SUB R8,RDI }
    /* +0xb8dca0 */ __asm { IMUL EDX,dword ptr [RBP + 0xd0] }
    /* +0xb8dca7 */ __asm { ADD EDX,R9D }
    /* +0xb8dcaa */ __asm { MOV R9D,0xa5459f63 }
    /* +0xb8dcb0 */ __asm { XOR R9,RAX }
    /* +0xb8dcb3 */ __asm { ROR R9,CL }
    /* +0xb8dcb6 */ __asm { ADD R9,R8 }
    /* +0xb8dcb9 */ __asm { CMP R10,RDX }
    /* +0xb8dcbc */ __asm { CMOVG R9,R11 }
    /* +0xb8dcc0 */ __asm { ROL R9,0x35 }
    /* +0xb8dcc4 */ __asm { MOV R11,-0xd711532b9e1a499 }
    /* +0xb8dcce */ __asm { ADD R11,R9 }
    /* +0xb8dcd1 */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb8dcd8 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8dce2 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8dce9 */ __asm { TEST R11D,R11D }
    /* +0xb8dcec */ __asm { JS 0x7fffa5388009 }
    /* +0xb8dcf2 */ __asm { MOV R11,qword ptr [RBP + 0xfa8] }
    /* +0xb8dcf9 */ __asm { BSWAP R11 }
    /* +0xb8dcfc */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb8dd03 */ __asm { JMP 0x7fffa52ff6df }
    /* +0xb8dd08 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8dd12 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8dd19 */ __asm { TEST R11D,R11D }
    /* +0xb8dd1c */ __asm { JS 0x7fffa5388011 }
    /* +0xb8dd22 */ __asm { ROL R8,0x1f }
    /* +0xb8dd26 */ __asm { MOV R11,0x0 }
    /* +0xb8dd2d */ __asm { NOP }
    /* +0xb8dd2f */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb8dd36 */ __asm { MOV R11,0x69c65a83fe5826dd }
    /* +0xb8dd40 */ __asm { IMUL R11,R8 }
    /* +0xb8dd44 */ __asm { PUSHFQ }
    /* +0xb8dd45 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8dd4d */ __asm { POPFQ }
    /* +0xb8dd4e */ __asm { MOV RDX,0x1ff2c136e8000000 }
    /* +0xb8dd58 */ __asm { IMUL RDX,R8 }
    /* +0xb8dd5c */ __asm { XOR RDX,R11 }
    /* +0xb8dd5f */ __asm { MOV qword ptr [RBP + 0xfa8],RDX }
    /* +0xb8dd66 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8dd70 */ __asm { MOV EAX,dword ptr [RBP + 0x5e0] }
    /* +0xb8dd76 */ __asm { MOV R8D,0x3e21eccb }
    /* +0xb8dd7c */ __asm { XOR R11D,R11D }
    /* +0xb8dd7f */ __asm { CMP EAX,-0x1 }
    /* +0xb8dd82 */ __asm { SETL R11B }
    /* +0xb8dd86 */ __asm { MOV EDX,0x90eb5c6c }
    /* +0xb8dd8b */ __asm { MOV RCX,qword ptr [RBP + 0x5d8] }
    /* +0xb8dd92 */ __asm { ADD EDX,ECX }
    /* +0xb8dd94 */ __asm { XOR R10D,R10D }
    /* +0xb8dd97 */ __asm { TEST EAX,EAX }
    /* +0xb8dd99 */ __asm { SETNS R10B }
    /* +0xb8dd9d */ __asm { MOV RAX,qword ptr [RBP + 0x1298] }
    /* +0xb8dda4 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xb8ddab */ __asm { SUB EAX,EDI }
    /* +0xb8ddad */ __asm { XOR EDX,0x6986edcc }
    /* +0xb8ddb3 */ __asm { ADD EDX,EAX }
    /* +0xb8ddb5 */ __asm { IMUL R9D,R8D,-0x3fffffe9 }
    /* +0xb8ddbc */ __asm { XOR R9D,EDI }
    /* +0xb8ddbf */ __asm { IMUL R9D,dword ptr [RBP + 0xd0] }
    /* +0xb8ddc7 */ __asm { NOT R9D }
    /* +0xb8ddca */ __asm { ROL R9D,CL }
    /* +0xb8ddcd */ __asm { CMP RDX,R9 }
    /* +0xb8ddd0 */ __asm { CMOVC R10D,R11D }
    /* +0xb8ddd4 */ __asm { TEST R10B,R10B }
    /* +0xb8ddd7 */ __asm { JZ 0x7fffa5388019 }
    /* +0xb8dddd */ __asm { ROL qword ptr [RBP + 0xfa8],0x13 }
    /* +0xb8dde5 */ __asm { MOV RDX,0x11084a7ee700595a }
    /* +0xb8ddef */ __asm { MOV RCX,qword ptr [RBP + 0x458] }
    /* +0xb8ddf6 */ __asm { MOV R10D,ECX }
    /* +0xb8ddf9 */ __asm { SHR R10D,0x7 }
    /* +0xb8ddfd */ __asm { MOV R11D,ECX }
    /* +0xb8de00 */ __asm { SHR R11D,0xb }
    /* +0xb8de04 */ __asm { PUSHFQ }
    /* +0xb8de05 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8de0d */ __asm { POPFQ }
    /* +0xb8de0e */ __asm { SHR ECX,0x6 }
    /* +0xb8de11 */ __asm { XOR R11D,R10D }
    /* +0xb8de14 */ __asm { OR R11D,ECX }
    /* +0xb8de17 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8de21 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb8de28 */ __asm { TEST R10D,R10D }
    /* +0xb8de2b */ __asm { JS 0x7fffa5388021 }
    /* +0xb8de31 */ __asm { XOR qword ptr [RBP + 0xfa8],RDX }
    /* +0xb8de38 */ __asm { JMP 0x7fffa52fdfd2 }
    /* +0xb8de3d */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8de47 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8de4e */ __asm { MOV R10W,0xd5fc }
    /* +0xb8de53 */ __asm { ADD R10D,dword ptr [RBP + 0x1298] }
    /* +0xb8de5a */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xb8de61 */ __asm { MOV EAX,EDX }
    /* +0xb8de63 */ __asm { SUB EAX,R10D }
    /* +0xb8de66 */ __asm { ADD EAX,0x7ea7 }
    /* +0xb8de6b */ __asm { MOVSX R10D,AX }
    /* +0xb8de6f */ __asm { CMP R11D,R10D }
    /* +0xb8de72 */ __asm { JLE 0x7fffa5388029 }
    /* +0xb8de78 */ __asm { BSWAP R8 }
    /* +0xb8de7b */ __asm { MOV RCX,R8 }
    /* +0xb8de7e */ __asm { SHR RCX,0x4 }
    /* +0xb8de82 */ __asm { MOV R11,0xf0f0f0f0f0f0f0f }
    /* +0xb8de8c */ __asm { AND RCX,R11 }
    /* +0xb8de8f */ __asm { AND R8,R11 }
    /* +0xb8de92 */ __asm { SHL R8,0x4 }
    /* +0xb8de96 */ __asm { OR R8,RCX }
    /* +0xb8de99 */ __asm { MOV R11,0x3333333333333333 }
    /* +0xb8dea3 */ __asm { MOV RCX,R8 }
    /* +0xb8dea6 */ __asm { AND RCX,R11 }
    /* +0xb8dea9 */ __asm { SHR R8,0x2 }
    /* +0xb8dead */ __asm { AND R8,R11 }
    /* +0xb8deb0 */ __asm { LEA R11,[R8 + RCX*0x4] }
    /* +0xb8deb4 */ __asm { MOV RDX,0x5555555555555555 }
    /* +0xb8debe */ __asm { MOV R8,R11 }
    /* +0xb8dec1 */ __asm { AND R8,RDX }
    /* +0xb8dec4 */ __asm { SHR R11,0x1 }
    /* +0xb8dec7 */ __asm { AND R11,RDX }
    /* +0xb8deca */ __asm { LEA R11,[R11 + R8*0x2] }
    /* +0xb8dece */ __asm { MOV R10D,0xe011f613 }
    /* +0xb8ded4 */ __asm { XOR R10D,0x953c3126 }
    /* +0xb8dedb */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb8dee2 */ __asm { MOV R9,qword ptr [RBP + 0x5d8] }
    /* +0xb8dee9 */ __asm { SUB R10D,ECX }
    /* +0xb8deec */ __asm { SUB R10D,R9D }
    /* +0xb8deef */ __asm { MOV R8D,0x49cef52 }
    /* +0xb8def5 */ __asm { LEA EDX,[R9 + R8*0x1] }
    /* +0xb8def9 */ __asm { ADD EDX,0xcd1fa751 }
    /* +0xb8deff */ __asm { ROL EDX,CL }
    /* +0xb8df01 */ __asm { IMUL R10,R11 }
    /* +0xb8df05 */ __asm { SUB EDX,dword ptr [RBP + 0x1298] }
    /* +0xb8df0b */ __asm { IMUL RDX,R11 }
    /* +0xb8df0f */ __asm { XOR RDX,R10 }
    /* +0xb8df12 */ __asm { MOV qword ptr [RBP + 0xfa8],RDX }
    /* +0xb8df19 */ __asm { PUSHFQ }
    /* +0xb8df1a */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8df22 */ __asm { POPFQ }
    /* +0xb8df23 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8df2d */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8df34 */ __asm { TEST R11D,R11D }
    /* +0xb8df37 */ __asm { JS 0x7fffa5388031 }
    /* +0xb8df3d */ __asm { SHR qword ptr [RBP + 0xfa8],0x1f }
    /* +0xb8df45 */ __asm { MOV R10D,0x852e39a8 }
    /* +0xb8df4b */ __asm { MOV R9,qword ptr [RBP + 0x458] }
    /* +0xb8df52 */ __asm { MOV R11D,R9D }
    /* +0xb8df55 */ __asm { SHR R11D,0xb }
    /* +0xb8df59 */ __asm { MOV EAX,0x7121a826 }
    /* +0xb8df5e */ __asm { MOV RDX,qword ptr [RBP + 0x1298] }
    /* +0xb8df65 */ __asm { XOR EAX,EDX }
    /* +0xb8df67 */ __asm { XOR EAX,dword ptr [RBP + 0x1038] }
    /* +0xb8df6d */ __asm { MOV ECX,0x3fffff72 }
    /* +0xb8df72 */ __asm { SUB ECX,EAX }
    /* +0xb8df74 */ __asm { ROL ECX,0xe }
    /* +0xb8df77 */ __asm { IMUL R10D,dword ptr [RBP + 0xe8] }
    /* +0xb8df7f */ __asm { ADD R10D,dword ptr [RBP + 0x480] }
    /* +0xb8df86 */ __asm { XOR R10D,EDX }
    /* +0xb8df89 */ __asm { MOV EAX,R9D }
    /* +0xb8df8c */ __asm { SHR EAX,0x7 }
    /* +0xb8df8f */ __asm { ROL R10D,0xa }
    /* +0xb8df93 */ __asm { XOR EAX,R11D }
    /* +0xb8df96 */ __asm { MOV R11D,R9D }
    /* +0xb8df99 */ __asm { SHR R11D,0x6 }
    /* +0xb8df9d */ __asm { PUSHFQ }
    /* +0xb8df9e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8dfa6 */ __asm { POPFQ }
    /* +0xb8dfa7 */ __asm { CMP R10,RCX }
    /* +0xb8dfaa */ __asm { CMOVLE R11D,R9D }
    /* +0xb8dfae */ __asm { OR R11D,EAX }
    /* +0xb8dfb1 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8dfbb */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb8dfc2 */ __asm { TEST R10D,R10D }
    /* +0xb8dfc5 */ __asm { JS 0x7fffa5388049 }
    /* +0xb8dfcb */ __asm { NOT qword ptr [RBP + 0xfa8] }
    /* +0xb8dfd2 */ __asm { MOV R10B,0xe }
    /* +0xb8dfd5 */ __asm { MOV dword ptr [RBP + 0x4b8],R10D }
    /* +0xb8dfdc */ __asm { MOV dword ptr [RBP + 0x210],0x0 }
    /* +0xb8dfe6 */ __asm { MOV R10D,R11D }
    /* +0xb8dfe9 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb8dff0 */ __asm { JMP 0x7fffa5306182 }
    /* +0xb8dff5 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8dfff */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e006 */ __asm { MOV R10W,0xe28b }
    /* +0xb8e00b */ __asm { SUB R10D,dword ptr [RBP + 0x5d8] }
    /* +0xb8e012 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb8e019 */ __asm { ROL R10W,CL }
    /* +0xb8e01d */ __asm { MOV EAX,0x5738 }
    /* +0xb8e022 */ __asm { SUB EAX,R10D }
    /* +0xb8e025 */ __asm { MOVSX R10D,AX }
    /* +0xb8e029 */ __asm { CMP R11D,R10D }
    /* +0xb8e02c */ __asm { JLE 0x7fffa5388051 }
    /* +0xb8e032 */ __asm { MOV R11D,0x38818be0 }
    /* +0xb8e038 */ __asm { IMUL R11D,dword ptr [RBP + 0xd0] }
    /* +0xb8e040 */ __asm { ADD R11D,dword ptr [RBP + 0x1038] }
    /* +0xb8e047 */ __asm { ROL R11D,0x3 }
    /* +0xb8e04b */ __asm { NOT R11D }
    /* +0xb8e04e */ __asm { ROL R11D,0xd }
    /* +0xb8e052 */ __asm { PUSHFQ }
    /* +0xb8e053 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8e05b */ __asm { POPFQ }
    /* +0xb8e05c */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb8e063 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e06a */ __asm { TEST R11D,R11D }
    /* +0xb8e06d */ __asm { JS 0x7fffa5388059 }
    /* +0xb8e073 */ __asm { MOV R10,qword ptr [RBP + 0x458] }
    /* +0xb8e07a */ __asm { SHR R10D,0xb }
    /* +0xb8e07e */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb8e085 */ __asm { PUSHFQ }
    /* +0xb8e086 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8e08e */ __asm { POPFQ }
    /* +0xb8e08f */ __asm { NOT R8 }
    /* +0xb8e092 */ __asm { BSWAP R8 }
    /* +0xb8e095 */ __asm { MOV R11,R8 }
    /* +0xb8e098 */ __asm { SHR R11,0xb }
    /* +0xb8e09c */ __asm { XOR R11,R8 }
    /* +0xb8e09f */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb8e0a6 */ __asm { MOV R8,R11 }
    /* +0xb8e0a9 */ __asm { SHR R8,0x3 }
    /* +0xb8e0ad */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e0b7 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e0be */ __asm { TEST R11D,R11D }
    /* +0xb8e0c1 */ __asm { JS 0x7fffa5388061 }
    /* +0xb8e0c7 */ __asm { XOR qword ptr [RBP + 0xfa8],R8 }
    /* +0xb8e0ce */ __asm { NOP }
    /* +0xb8e0d0 */ __asm { MOV R8,0x0 }
    /* +0xb8e0d7 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb8e0de */ __asm { JMP 0x7fffa53050ca }
    /* +0xb8e0e3 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e0ed */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e0f4 */ __asm { TEST R11D,R11D }
    /* +0xb8e0f7 */ __asm { JS 0x7fffa5388079 }
    /* +0xb8e0fd */ __asm { PUSHFQ }
    /* +0xb8e0fe */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8e106 */ __asm { POPFQ }
    /* +0xb8e107 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e111 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e118 */ __asm { TEST R11D,R11D }
    /* +0xb8e11b */ __asm { JS 0x7fffa5388081 }
    /* +0xb8e121 */ __asm { PUSHFQ }
    /* +0xb8e122 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8e12a */ __asm { POPFQ }
    /* +0xb8e12b */ __asm { ROL R8,0x25 }
    /* +0xb8e12f */ __asm { MOV R11,-0xafdb3f1c339cfef }
    /* +0xb8e139 */ __asm { XOR R11,R8 }
    /* +0xb8e13c */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb8e143 */ __asm { MOV R11D,0x7a7e2bcb }
    /* +0xb8e149 */ __asm { IMUL R11D,R11D,-0x5cd02b4d }
    /* +0xb8e150 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb8e157 */ __asm { ROL R11D,CL }
    /* +0xb8e15a */ __asm { IMUL R11D,dword ptr [RBP + 0xe8] }
    /* +0xb8e162 */ __asm { NOT R11D }
    /* +0xb8e165 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb8e16c */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e173 */ __asm { TEST R11D,R11D }
    /* +0xb8e176 */ __asm { JS 0x7fffa5388089 }
    /* +0xb8e17c */ __asm { ROL qword ptr [RBP + 0xfa8],0x1b }
    /* +0xb8e184 */ __asm { JMP 0x7fffa53041f0 }
    /* +0xb8e189 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e193 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e19a */ __asm { TEST R11D,R11D }
    /* +0xb8e19d */ __asm { JS 0x7fffa5388091 }
    /* +0xb8e1a3 */ __asm { PUSHFQ }
    /* +0xb8e1a4 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8e1ac */ __asm { POPFQ }
    /* +0xb8e1ad */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e1b7 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e1be */ __asm { TEST R11D,R11D }
    /* +0xb8e1c1 */ __asm { JS 0x7fffa5388099 }
    /* +0xb8e1c7 */ __asm { PUSHFQ }
    /* +0xb8e1c8 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8e1d0 */ __asm { POPFQ }
    /* +0xb8e1d1 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e1db */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e1e2 */ __asm { TEST R11D,R11D }
    /* +0xb8e1e5 */ __asm { JS 0x7fffa53880a1 }
    /* +0xb8e1eb */ __asm { MOV R10,qword ptr [RBP + 0x458] }
    /* +0xb8e1f2 */ __asm { XOR R10B,0x1 }
    /* +0xb8e1f6 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb8e1fd */ __asm { MOV RCX,R8 }
    /* +0xb8e200 */ __asm { SHL RCX,0x13 }
    /* +0xb8e204 */ __asm { MOV R11,qword ptr [RBP + 0x5d8] }
    /* +0xb8e20b */ __asm { MOV R10D,R11D }
    /* +0xb8e20e */ __asm { OR R10D,0x1 }
    /* +0xb8e212 */ __asm { MOV R11D,0x6649c5fa }
    /* +0xb8e218 */ __asm { XOR RCX,R8 }
    /* +0xb8e21b */ __asm { MOV R8,RCX }
    /* +0xb8e21e */ __asm { SHL R8,0x17 }
    /* +0xb8e222 */ __asm { XOR R8,RCX }
    /* +0xb8e225 */ __asm { MOV RDX,-0x6a98d0587f4b470 }
    /* +0xb8e22f */ __asm { SUB RDX,R8 }
    /* +0xb8e232 */ __asm { MOV R8,RDX }
    /* +0xb8e235 */ __asm { ROL R8,0xb }
    /* +0xb8e239 */ __asm { MOV R9,RDX }
    /* +0xb8e23c */ __asm { ROL R9,0x1f }
    /* +0xb8e240 */ __asm { XOR R9,R8 }
    /* +0xb8e243 */ __asm { XOR R9,RDX }
    /* +0xb8e246 */ __asm { MOV R8,0x1aec9c46b1c72fb1 }
    /* +0xb8e250 */ __asm { MOV RDX,R9 }
    /* +0xb8e253 */ __asm { XOR RDX,R8 }
    /* +0xb8e256 */ __asm { IMUL R9,R8 }
    /* +0xb8e25a */ __asm { MOV EAX,0xb245b9c9 }
    /* +0xb8e25f */ __asm { XOR EAX,0x3ba69d22 }
    /* +0xb8e264 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb8e26b */ __asm { ROR EAX,CL }
    /* +0xb8e26d */ __asm { IMUL R11D,R10D }
    /* +0xb8e271 */ __asm { NOT R11D }
    /* +0xb8e274 */ __asm { ADD R11D,ECX }
    /* +0xb8e277 */ __asm { MOV R10,qword ptr [RBP + 0x1298] }
    /* +0xb8e27e */ __asm { SUB R11D,R10D }
    /* +0xb8e281 */ __asm { ADD R11D,0x43cb1442 }
    /* +0xb8e288 */ __asm { MOVSXD R11,R11D }
    /* +0xb8e28b */ __asm { XOR EAX,R10D }
    /* +0xb8e28e */ __asm { MOV R10D,0x51132c2e }
    /* +0xb8e294 */ __asm { SUB R10D,EAX }
    /* +0xb8e297 */ __asm { CMP R11,R10 }
    /* +0xb8e29a */ __asm { CMOVNC R9,RDX }
    /* +0xb8e29e */ __asm { MOV qword ptr [RBP + 0xfa8],R9 }
    /* +0xb8e2a5 */ __asm { MOV R11B,0x3 }
    /* +0xb8e2a8 */ __asm { JMP 0x7fffa5306171 }
    /* +0xb8e2ad */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e2b7 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e2be */ __asm { TEST R11D,R11D }
    /* +0xb8e2c1 */ __asm { JS 0x7fffa53880a9 }
    /* +0xb8e2c7 */ __asm { PUSHFQ }
    /* +0xb8e2c8 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8e2d0 */ __asm { POPFQ }
    /* +0xb8e2d1 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e2db */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e2e2 */ __asm { TEST R11D,R11D }
    /* +0xb8e2e5 */ __asm { JS 0x7fffa53880b1 }
    /* +0xb8e2eb */ __asm { MOV R11,-0x51a98411891df5e3 }
    /* +0xb8e2f5 */ __asm { IMUL R8,R11 }
    /* +0xb8e2f9 */ __asm { MOV R11,-0x48dacabc1494f3d7 }
    /* +0xb8e303 */ __asm { ADD R11,R8 }
    /* +0xb8e306 */ __asm { MOV RDX,R11 }
    /* +0xb8e309 */ __asm { ROL RDX,0x17 }
    /* +0xb8e30d */ __asm { PUSHFQ }
    /* +0xb8e30e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8e316 */ __asm { POPFQ }
    /* +0xb8e317 */ __asm { MOV R8,R11 }
    /* +0xb8e31a */ __asm { ROL R8,0x13 }
    /* +0xb8e31e */ __asm { XOR R8,RDX }
    /* +0xb8e321 */ __asm { XOR R8,R11 }
    /* +0xb8e324 */ __asm { MOV qword ptr [RBP + 0xfa8],R8 }
    /* +0xb8e32b */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e335 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e33c */ __asm { TEST R11D,R11D }
    /* +0xb8e33f */ __asm { JS 0x7fffa53880b9 }
    /* +0xb8e345 */ __asm { MOV R10,qword ptr [RBP + 0x458] }
    /* +0xb8e34c */ __asm { SHR R10B,0x2 }
    /* +0xb8e350 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb8e357 */ __asm { ROL qword ptr [RBP + 0xfa8],0x7 }
    /* +0xb8e35f */ __asm { MOV R11B,0xa }
    /* +0xb8e362 */ __asm { JMP 0x7fffa5306171 }
    /* +0xb8e367 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e371 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e378 */ __asm { TEST R11D,R11D }
    /* +0xb8e37b */ __asm { JS 0x7fffa53880c1 }
    /* +0xb8e381 */ __asm { MOV R11,0x1ea943eea765aa67 }
    /* +0xb8e38b */ __asm { XOR R8,R11 }
    /* +0xb8e38e */ __asm { BSWAP R8 }
    /* +0xb8e391 */ __asm { MOV RCX,R8 }
    /* +0xb8e394 */ __asm { SHL RCX,0x1b }
    /* +0xb8e398 */ __asm { PUSHFQ }
    /* +0xb8e399 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8e3a1 */ __asm { POPFQ }
    /* +0xb8e3a2 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e3ac */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e3b3 */ __asm { TEST R11D,R11D }
    /* +0xb8e3b6 */ __asm { JS 0x7fffa53880c9 }
    /* +0xb8e3bc */ __asm { SUB R8,RCX }
    /* +0xb8e3bf */ __asm { MOV R11,0x17cb481a0b7576d3 }
    /* +0xb8e3c9 */ __asm { PUSHFQ }
    /* +0xb8e3ca */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8e3d2 */ __asm { POPFQ }
    /* +0xb8e3d3 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e3dd */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e3e4 */ __asm { TEST R10D,R10D }
    /* +0xb8e3e7 */ __asm { JS 0x7fffa53880d1 }
    /* +0xb8e3ed */ __asm { ADD R8,R11 }
    /* +0xb8e3f0 */ __asm { MOV qword ptr [RBP + 0xfa8],R8 }
    /* +0xb8e3f7 */ __asm { JMP 0x7fffa53029e2 }
    /* +0xb8e3fc */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e406 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e40d */ __asm { TEST R11D,R11D }
    /* +0xb8e410 */ __asm { JS 0x7fffa53880d9 }
    /* +0xb8e416 */ __asm { PUSHFQ }
    /* +0xb8e417 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb8e41f */ __asm { POPFQ }
    /* +0xb8e420 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb8e42a */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb8e431 */ __asm { TEST R11D,R11D }
    /* +0xb8e434 */ __asm { JS 0x7fffa53880e1 }
    /* +0xb8e43a */ __asm { ROL R8,0xb }
    /* +0xb8e43e */ __asm { MOV R11,0x4c62600d07ce6809 }
    /* +0xb8e448 */ __asm { IMUL R11,R11,0x3351342b }
    /* +0xb8e44f */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb8e456 */ __asm { ROL R11,CL }
    /* +0xb8e459 */ __asm { IMUL R11,R11,0x14e6affd }
    /* +0xb8e460 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb8e467 */ __asm { ROL R11,CL }
    /* +0xb8e46a */ __asm { MOV RCX,qword ptr [RBP + 0x5d8] }
    /* +0xb8e471 */ __asm { ROR R11,CL }
    /* +0xb8e474 */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb8e47b */ __asm { MOV RCX,R8 }
    /* +0xb8e47e */ __asm { SHR RCX,0x13 }
    /* +0xb8e482 */ __asm { XOR RCX,R8 }
    /* +0xb8e485 */ __asm { MOV RDX,-0x19d65aeb0d1e735b }
}


// ============================================================================
// Function : FUN_7fffa5302a29  |  RVA: 0xb92a29  |  Size: 44729 bytes
// Callers  : FUN_7fffa5381000@0xc11000
// Callees  : FUN_7fffa52eb8bb@0xb7b8bb
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5302a29(void) {
    /* +0xb92a29 */ __asm { MOV R11D,0x5ac15bd9 }
    /* +0xb92a2f */ __asm { NOP }
    /* +0xb92a30 */ __asm { MOV R10,0x0 }
    /* +0xb92a37 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xb92a3e */ __asm { SUB R11D,dword ptr [RBP + 0x480] }
    /* +0xb92a45 */ __asm { ROL R11D,0x15 }
    /* +0xb92a49 */ __asm { ADD R11D,dword ptr [RBP + 0x1298] }
    /* +0xb92a50 */ __asm { NOT R11D }
    /* +0xb92a53 */ __asm { IMUL R11D,dword ptr [RBP + 0xe8] }
    /* +0xb92a5b */ __asm { PUSHFQ }
    /* +0xb92a5c */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb92a64 */ __asm { POPFQ }
    /* +0xb92a65 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb92a6c */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92a73 */ __asm { TEST R11D,R11D }
    /* +0xb92a76 */ __asm { JS 0x7fffa5388857 }
    /* +0xb92a7c */ __asm { MOV R11,0xb271e23c4a263ea }
    /* +0xb92a86 */ __asm { MOV RCX,qword ptr [RBP + 0x458] }
    /* +0xb92a8d */ __asm { MOV R10D,ECX }
    /* +0xb92a90 */ __asm { SHR R10D,0x7 }
    /* +0xb92a94 */ __asm { SHR ECX,0xb }
    /* +0xb92a97 */ __asm { XOR ECX,R10D }
    /* +0xb92a9a */ __asm { MOV qword ptr [RBP + 0x458],RCX }
    /* +0xb92aa1 */ __asm { PUSHFQ }
    /* +0xb92aa2 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb92aaa */ __asm { POPFQ }
    /* +0xb92aab */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb92ab5 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb92abc */ __asm { TEST R10D,R10D }
    /* +0xb92abf */ __asm { JS 0x7fffa538885f }
    /* +0xb92ac5 */ __asm { ADD R8,R11 }
    /* +0xb92ac8 */ __asm { JMP 0x7fffa5303bde }
    /* +0xb92acd */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb92ad7 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92ade */ __asm { MOV R10W,0xc87f }
    /* +0xb92ae3 */ __asm { MOV EAX,0xfffff7f2 }
    /* +0xb92ae8 */ __asm { SUB EAX,R10D }
    /* +0xb92aeb */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb92af2 */ __asm { ROL AX,CL }
    /* +0xb92af5 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb92afc */ __asm { ROR AX,CL }
    /* +0xb92aff */ __asm { IMUL EAX,dword ptr [RBP + 0x498] }
    /* +0xb92b06 */ __asm { MOVSX R10D,AX }
    /* +0xb92b0a */ __asm { CMP R11D,R10D }
    /* +0xb92b0d */ __asm { JLE 0x7fffa5388867 }
    /* +0xb92b13 */ __asm { PUSHFQ }
    /* +0xb92b14 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb92b1c */ __asm { POPFQ }
    /* +0xb92b1d */ __asm { MOV R11D,0x65a51532 }
    /* +0xb92b23 */ __asm { IMUL R11D,R11D,-0x5b809749 }
    /* +0xb92b2a */ __asm { ADD R11D,dword ptr [RBP + 0x5d8] }
    /* +0xb92b31 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb92b38 */ __asm { ROR R11D,CL }
    /* +0xb92b3b */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xb92b42 */ __asm { ADD R11D,0xa33ad92e }
    /* +0xb92b49 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb92b50 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92b57 */ __asm { TEST R11D,R11D }
    /* +0xb92b5a */ __asm { JS 0x7fffa538886f }
    /* +0xb92b60 */ __asm { MOV R11D,0x55162442 }
    /* +0xb92b66 */ __asm { XOR R11D,dword ptr [RBP + 0x5d8] }
    /* +0xb92b6d */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb92b74 */ __asm { ROL R11D,CL }
    /* +0xb92b77 */ __asm { PUSHFQ }
    /* +0xb92b78 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb92b80 */ __asm { POPFQ }
    /* +0xb92b81 */ __asm { IMUL R11D,R11D,0x465a97eb }
    /* +0xb92b88 */ __asm { SUB R11D,dword ptr [RBP + 0x1038] }
    /* +0xb92b8f */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb92b96 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92b9d */ __asm { TEST R11D,R11D }
    /* +0xb92ba0 */ __asm { JS 0x7fffa5388877 }
    /* +0xb92ba6 */ __asm { MOV R11,0x6b24b006d9e727f1 }
    /* +0xb92bb0 */ __asm { IMUL R8,R11 }
    /* +0xb92bb4 */ __asm { SHR R8,0x3 }
    /* +0xb92bb8 */ __asm { MOV RCX,R8 }
    /* +0xb92bbb */ __asm { SHL RCX,0x1b }
    /* +0xb92bbf */ __asm { ADD RCX,R8 }
    /* +0xb92bc2 */ __asm { MOV R11,-0x7a13ce508182aafd }
    /* +0xb92bcc */ __asm { XOR R11,RCX }
    /* +0xb92bcf */ __asm { MOV RDX,0x114b0f52eef99e36 }
    /* +0xb92bd9 */ __asm { ADD RDX,R11 }
    /* +0xb92bdc */ __asm { MOV qword ptr [RBP + 0xfa8],RDX }
    /* +0xb92be3 */ __asm { MOV R11B,0x2 }
    /* +0xb92be6 */ __asm { JMP 0x7fffa5306171 }
    /* +0xb92beb */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb92bf5 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92bfc */ __asm { TEST R11D,R11D }
    /* +0xb92bff */ __asm { JS 0x7fffa538887f }
    /* +0xb92c05 */ __asm { MOV RCX,R8 }
    /* +0xb92c08 */ __asm { ROL RCX,0x1d }
    /* +0xb92c0c */ __asm { MOV R11,R8 }
    /* +0xb92c0f */ __asm { ROL R11,0x1f }
    /* +0xb92c13 */ __asm { XOR R11,RCX }
    /* +0xb92c16 */ __asm { XOR R11,R8 }
    /* +0xb92c19 */ __asm { SHR R11,0xb }
    /* +0xb92c1d */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb92c24 */ __asm { PUSHFQ }
    /* +0xb92c25 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb92c2d */ __asm { POPFQ }
    /* +0xb92c2e */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb92c38 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92c3f */ __asm { TEST R11D,R11D }
    /* +0xb92c42 */ __asm { JS 0x7fffa5388887 }
    /* +0xb92c48 */ __asm { MOV R8,qword ptr [RBP + 0xfa8] }
    /* +0xb92c4f */ __asm { SHL R8,0x17 }
    /* +0xb92c53 */ __asm { PUSHFQ }
    /* +0xb92c54 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb92c5c */ __asm { POPFQ }
    /* +0xb92c5d */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb92c67 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92c6e */ __asm { TEST R11D,R11D }
    /* +0xb92c71 */ __asm { JS 0x7fffa538888f }
    /* +0xb92c77 */ __asm { SUB qword ptr [RBP + 0xfa8],R8 }
    /* +0xb92c7e */ __asm { JMP 0x7fffa5302fe4 }
    /* +0xb92c83 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb92c8d */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92c94 */ __asm { TEST R11D,R11D }
    /* +0xb92c97 */ __asm { JS 0x7fffa5388897 }
    /* +0xb92c9d */ __asm { PUSHFQ }
    /* +0xb92c9e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb92ca6 */ __asm { POPFQ }
    /* +0xb92ca7 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb92cb1 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92cb8 */ __asm { TEST R11D,R11D }
    /* +0xb92cbb */ __asm { JS 0x7fffa538889f }
    /* +0xb92cc1 */ __asm { MOV R11,qword ptr [RBP + 0x1038] }
    /* +0xb92cc8 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb92ccf */ __asm { ADD ECX,R11D }
    /* +0xb92cd2 */ __asm { MOV RDX,qword ptr [RBP + 0x458] }
    /* +0xb92cd9 */ __asm { MOV R11D,EDX }
    /* +0xb92cdc */ __asm { SHR R11D,0x7 }
    /* +0xb92ce0 */ __asm { MOV R10D,0x70925826 }
    /* +0xb92ce6 */ __asm { PUSHFQ }
    /* +0xb92ce7 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb92cef */ __asm { POPFQ }
    /* +0xb92cf0 */ __asm { SHR EDX,0xb }
    /* +0xb92cf3 */ __asm { XOR EDX,R11D }
    /* +0xb92cf6 */ __asm { MOV qword ptr [RBP + 0x458],RDX }
    /* +0xb92cfd */ __asm { LEA R11D,[R10 + RCX*0x1] }
    /* +0xb92d01 */ __asm { ADD R11D,0xd0dcc2ad }
    /* +0xb92d08 */ __asm { IMUL R11D,dword ptr [RBP + 0x11d8] }
    /* +0xb92d10 */ __asm { ADD R11D,0x6b1bd37 }
    /* +0xb92d17 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb92d1e */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92d25 */ __asm { TEST R11D,R11D }
    /* +0xb92d28 */ __asm { JS 0x7fffa53888a7 }
    /* +0xb92d2e */ __asm { MOV RCX,R8 }
    /* +0xb92d31 */ __asm { NOT RCX }
    /* +0xb92d34 */ __asm { MOV R9,RCX }
    /* +0xb92d37 */ __asm { ROL R9,0xb }
    /* +0xb92d3b */ __asm { ROL RCX,0x1f }
    /* +0xb92d3f */ __asm { XOR RCX,R9 }
    /* +0xb92d42 */ __asm { MOV R11,-0x2efea13a97d8e466 }
    /* +0xb92d4c */ __asm { XOR R11,R8 }
    /* +0xb92d4f */ __asm { XOR R11,RCX }
    /* +0xb92d52 */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb92d59 */ __asm { MOV R11B,0xc }
    /* +0xb92d5c */ __asm { JMP 0x7fffa5306171 }
    /* +0xb92d61 */ __asm { MOV R11D,0x8e4a28d6 }
    /* +0xb92d67 */ __asm { ADD R11D,dword ptr [RBP + 0x1038] }
    /* +0xb92d6e */ __asm { XOR R11D,dword ptr [RBP + 0x5d8] }
    /* +0xb92d75 */ __asm { NOT R11D }
    /* +0xb92d78 */ __asm { ADD R11D,dword ptr [RBP + 0x1298] }
    /* +0xb92d7f */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb92d86 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92d8d */ __asm { TEST R11D,R11D }
    /* +0xb92d90 */ __asm { JS 0x7fffa53888bf }
    /* +0xb92d96 */ __asm { MOV R11D,0x14e32f5e }
    /* +0xb92d9c */ __asm { SUB R11D,dword ptr [RBP + 0x5d8] }
    /* +0xb92da3 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb92daa */ __asm { ROL R11D,CL }
    /* +0xb92dad */ __asm { IMUL R11D,dword ptr [RBP + 0xd0] }
    /* +0xb92db5 */ __asm { IMUL R11D,R11D,0x7208607d }
    /* +0xb92dbc */ __asm { ADD R11D,0x4c6bebe9 }
    /* +0xb92dc3 */ __asm { PUSHFQ }
    /* +0xb92dc4 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb92dcc */ __asm { POPFQ }
    /* +0xb92dcd */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb92dd4 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92ddb */ __asm { TEST R11D,R11D }
    /* +0xb92dde */ __asm { JS 0x7fffa53888c7 }
    /* +0xb92de4 */ __asm { MOV R11D,0xeb9fb5b4 }
    /* +0xb92dea */ __asm { MOV R10,qword ptr [RBP + 0x1298] }
    /* +0xb92df1 */ __asm { XOR R11D,R10D }
    /* +0xb92df4 */ __asm { IMUL R11D,R11D,0x4b66c9bb }
    /* +0xb92dfb */ __asm { PUSHFQ }
    /* +0xb92dfc */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb92e04 */ __asm { POPFQ }
    /* +0xb92e05 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb92e0c */ __asm { ROL R11D,CL }
    /* +0xb92e0f */ __asm { MOV R9,qword ptr [RBP + 0x5d8] }
    /* +0xb92e16 */ __asm { ADD R11D,R9D }
    /* +0xb92e19 */ __asm { MOV RCX,R8 }
    /* +0xb92e1c */ __asm { SHL RCX,0x13 }
    /* +0xb92e20 */ __asm { XOR RCX,R8 }
    /* +0xb92e23 */ __asm { LEA RDX,[RCX*0x8] }
    /* +0xb92e2b */ __asm { XOR RDX,RCX }
    /* +0xb92e2e */ __asm { IMUL R8,RDX,0x20080080 }
    /* +0xb92e35 */ __asm { MOV ECX,0x52b234c3 }
    /* +0xb92e3a */ __asm { ADD ECX,0x584a7391 }
    /* +0xb92e40 */ __asm { IMUL ECX,dword ptr [RBP + 0xe8] }
    /* +0xb92e47 */ __asm { ADD ECX,R10D }
    /* +0xb92e4a */ __asm { ROL ECX,0xb }
    /* +0xb92e4d */ __asm { XOR ECX,R9D }
    /* +0xb92e50 */ __asm { IMUL RCX,RDX }
    /* +0xb92e54 */ __asm { XOR RCX,R8 }
    /* +0xb92e57 */ __asm { MOV qword ptr [RBP + 0xfa8],RCX }
    /* +0xb92e5e */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb92e65 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92e6c */ __asm { TEST R11D,R11D }
    /* +0xb92e6f */ __asm { JS 0x7fffa53888cf }
    /* +0xb92e75 */ __asm { MOV R11W,0xb56c }
    /* +0xb92e7a */ __asm { IMUL R11D,dword ptr [RBP + 0x4a0] }
    /* +0xb92e82 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb92e89 */ __asm { ROR R11W,CL }
    /* +0xb92e8d */ __asm { ADD R11D,0xffffef7f }
    /* +0xb92e94 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb92e9b */ __asm { ROR R11W,CL }
    /* +0xb92e9f */ __asm { ROL qword ptr [RBP + 0xfa8],0xb }
    /* +0xb92ea7 */ __asm { MOVZX R11D,R11W }
    /* +0xb92eab */ __asm { MOV R10,qword ptr [RBP + 0x458] }
    /* +0xb92eb2 */ __asm { AND R10D,0x40 }
    /* +0xb92eb6 */ __asm { CMP R10D,R11D }
    /* +0xb92eb9 */ __asm { JMP 0x7fffa5304825 }
    /* +0xb92ebe */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb92ec8 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92ecf */ __asm { TEST R11D,R11D }
    /* +0xb92ed2 */ __asm { JS 0x7fffa53888d7 }
    /* +0xb92ed8 */ __asm { MOV R11,0x0 }
    /* +0xb92edf */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb92ee6 */ __asm { NOP }
    /* +0xb92ee8 */ __asm { PUSHFQ }
    /* +0xb92ee9 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb92ef1 */ __asm { POPFQ }
    /* +0xb92ef2 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb92efc */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92f03 */ __asm { MOV R10W,0xf560 }
    /* +0xb92f08 */ __asm { NOT R10D }
    /* +0xb92f0b */ __asm { ADD R10D,dword ptr [RBP + 0x1298] }
    /* +0xb92f12 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb92f19 */ __asm { ROL R10W,CL }
    /* +0xb92f1d */ __asm { ADD R10D,0xffffaefa }
    /* +0xb92f24 */ __asm { MOVSX R10D,R10W }
    /* +0xb92f28 */ __asm { CMP R11D,R10D }
    /* +0xb92f2b */ __asm { JLE 0x7fffa53888df }
    /* +0xb92f31 */ __asm { PUSHFQ }
    /* +0xb92f32 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb92f3a */ __asm { POPFQ }
    /* +0xb92f3b */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb92f45 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb92f4c */ __asm { TEST R11D,R11D }
    /* +0xb92f4f */ __asm { JS 0x7fffa53888f7 }
    /* +0xb92f55 */ __asm { MOV R11,0x67d187c47d629ba1 }
    /* +0xb92f5f */ __asm { IMUL R8,R11 }
    /* +0xb92f63 */ __asm { MOV R11,0x490141e10e3a234b }
    /* +0xb92f6d */ __asm { XOR R11,R8 }
    /* +0xb92f70 */ __asm { BSWAP R11 }
    /* +0xb92f73 */ __asm { MOV RDX,R11 }
    /* +0xb92f76 */ __asm { SHR RDX,0x4 }
    /* +0xb92f7a */ __asm { MOV R8,0xf0f0f0f0f0f0f0f }
    /* +0xb92f84 */ __asm { AND RDX,R8 }
    /* +0xb92f87 */ __asm { AND R11,R8 }
    /* +0xb92f8a */ __asm { SHL R11,0x4 }
    /* +0xb92f8e */ __asm { OR R11,RDX }
    /* +0xb92f91 */ __asm { MOV RDX,0x3333333333333333 }
    /* +0xb92f9b */ __asm { MOV R8,R11 }
    /* +0xb92f9e */ __asm { AND R8,RDX }
    /* +0xb92fa1 */ __asm { SHR R11,0x2 }
    /* +0xb92fa5 */ __asm { AND R11,RDX }
    /* +0xb92fa8 */ __asm { LEA R11,[R11 + R8*0x4] }
    /* +0xb92fac */ __asm { MOV RDX,0x5555555555555555 }
    /* +0xb92fb6 */ __asm { MOV R8,R11 }
    /* +0xb92fb9 */ __asm { AND R8,RDX }
    /* +0xb92fbc */ __asm { SHR R11,0x1 }
    /* +0xb92fbf */ __asm { AND R11,RDX }
    /* +0xb92fc2 */ __asm { LEA R11,[R11 + R8*0x2] }
    /* +0xb92fc6 */ __asm { MOV RDX,R11 }
    /* +0xb92fc9 */ __asm { SHL RDX,0xb }
    /* +0xb92fcd */ __asm { SUB R11,RDX }
    /* +0xb92fd0 */ __asm { MOV RDX,-0x20e04c799054aa3b }
    /* +0xb92fda */ __asm { ADD RDX,R11 }
    /* +0xb92fdd */ __asm { MOV qword ptr [RBP + 0xfa8],RDX }
    /* +0xb92fe4 */ __asm { MOV R11B,0x1 }
    /* +0xb92fe7 */ __asm { MOV dword ptr [RBP + 0x210],R11D }
    /* +0xb92fee */ __asm { MOV R11B,0xb }
    /* +0xb92ff1 */ __asm { MOV dword ptr [RBP + 0x4b8],R11D }
    /* +0xb92ff8 */ __asm { MOV R10B,0x1 }
    /* +0xb92ffb */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb93002 */ __asm { JMP 0x7fffa5306182 }
    /* +0xb93007 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb93011 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb93018 */ __asm { MOV R10W,0x6263 }
    /* +0xb9301d */ __asm { ADD R10D,dword ptr [RBP + 0x1298] }
    /* +0xb93024 */ __asm { NOT R10D }
    /* +0xb93027 */ __asm { ROL R10W,0xc }
    /* +0xb9302c */ __asm { XOR R10D,dword ptr [RBP + 0x480] }
    /* +0xb93033 */ __asm { MOVSX R10D,R10W }
    /* +0xb93037 */ __asm { CMP R11D,R10D }
    /* +0xb9303a */ __asm { JLE 0x7fffa53888ff }
    /* +0xb93040 */ __asm { MOV R11,qword ptr [RBP + 0x5d8] }
    /* +0xb93047 */ __asm { OR R11D,0x1 }
    /* +0xb9304b */ __asm { MOV R10D,0xe9364fd1 }
    /* +0xb93051 */ __asm { TEST uint8_t ptr [RBP + 0x458],0x41 }
    /* +0xb93058 */ __asm { SETNZ CL }
    /* +0xb9305b */ __asm { MOV qword ptr [RBP + 0x458],RCX }
    /* +0xb93062 */ __asm { XOR R10D,0x24d7e88 }
    /* +0xb93069 */ __asm { PUSHFQ }
    /* +0xb9306a */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb93072 */ __asm { POPFQ }
    /* +0xb93073 */ __asm { ADD R10D,0xb6928b9f }
    /* +0xb9307a */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb93081 */ __asm { ROL R10D,CL }
    /* +0xb93084 */ __asm { NOT R10D }
    /* +0xb93087 */ __asm { IMUL R10D,R11D }
    /* +0xb9308b */ __asm { MOV dword ptr [RBP + 0x5e0],R10D }
    /* +0xb93092 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb93099 */ __asm { TEST R11D,R11D }
    /* +0xb9309c */ __asm { JS 0x7fffa5388907 }
    /* +0xb930a2 */ __asm { NOT R8 }
    /* +0xb930a5 */ __asm { MOV R11,-0x541f87f42fd51c95 }
    /* +0xb930af */ __asm { IMUL R11,R11,0x56aec233 }
    /* +0xb930b6 */ __asm { MOV RDX,0x3da38235c906d22f }
    /* +0xb930c0 */ __asm { IMUL RDX,R8 }
    /* +0xb930c4 */ __asm { PUSHFQ }
    /* +0xb930c5 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb930cd */ __asm { POPFQ }
    /* +0xb930ce */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb930d5 */ __asm { ROL R11,CL }
    /* +0xb930d8 */ __asm { IMUL R11,R11,-0x83e7ba3 }
    /* +0xb930df */ __asm { XOR R11,qword ptr [RBP + 0x1038] }
    /* +0xb930e6 */ __asm { SUB R11,qword ptr [RBP + 0x5d8] }
    /* +0xb930ed */ __asm { XOR R11,RDX }
    /* +0xb930f0 */ __asm { MOV RDX,R11 }
    /* +0xb930f3 */ __asm { SHL RDX,0x13 }
    /* +0xb930f7 */ __asm { XOR RDX,R11 }
    /* +0xb930fa */ __asm { MOV qword ptr [RBP + 0xfa8],RDX }
    /* +0xb93101 */ __asm { MOV R11,RDX }
    /* +0xb93104 */ __asm { SHL R11,0xf }
    /* +0xb93108 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb93112 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb93119 */ __asm { TEST R10D,R10D }
    /* +0xb9311c */ __asm { JS 0x7fffa538891f }
    /* +0xb93122 */ __asm { XOR qword ptr [RBP + 0xfa8],R11 }
    /* +0xb93129 */ __asm { MOV R11B,0x6 }
    /* +0xb9312c */ __asm { JMP 0x7fffa5306171 }
    /* +0xb93131 */ __asm { MOV R11,0x0 }
    /* +0xb93138 */ __asm { NOP }
    /* +0xb9313a */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb93141 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb9314b */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb93152 */ __asm { TEST R11D,R11D }
    /* +0xb93155 */ __asm { JS 0x7fffa5388927 }
    /* +0xb9315b */ __asm { PUSHFQ }
    /* +0xb9315c */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb93164 */ __asm { POPFQ }
    /* +0xb93165 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb9316f */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb93176 */ __asm { TEST R11D,R11D }
    /* +0xb93179 */ __asm { JS 0x7fffa538892f }
    /* +0xb9317f */ __asm { MOV R10,qword ptr [RBP + 0x458] }
    /* +0xb93186 */ __asm { SHR R10D,0xb }
    /* +0xb9318a */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb93191 */ __asm { PUSHFQ }
    /* +0xb93192 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb9319a */ __asm { POPFQ }
    /* +0xb9319b */ __asm { MOV R11D,0x357d682b }
    /* +0xb931a1 */ __asm { SUB R11D,dword ptr [RBP + 0x480] }
    /* +0xb931a8 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb931af */ __asm { XOR R11D,ECX }
    /* +0xb931b2 */ __asm { MOV R10D,0xf996abf7 }
    /* +0xb931b8 */ __asm { MOV RDI,qword ptr [RBP + 0x1298] }
    /* +0xb931bf */ __asm { ADD R10D,EDI }
    /* +0xb931c2 */ __asm { XOR R10D,ECX }
    /* +0xb931c5 */ __asm { XOR R10D,0x3ffffcac }
    /* +0xb931cc */ __asm { ROL R11D,0x10 }
    /* +0xb931d0 */ __asm { IMUL R11D,dword ptr [RBP + 0xd0] }
    /* +0xb931d8 */ __asm { MOVSXD R11,R11D }
    /* +0xb931db */ __asm { IMUL R8,R11 }
    /* +0xb931df */ __asm { BSWAP R8 }
    /* +0xb931e2 */ __asm { MOV R9,R8 }
    /* +0xb931e5 */ __asm { SHR R9,0x4 }
    /* +0xb931e9 */ __asm { MOV R11,0xf0f0f0f0f0f0f0f }
    /* +0xb931f3 */ __asm { AND R9,R11 }
    /* +0xb931f6 */ __asm { AND R8,R11 }
    /* +0xb931f9 */ __asm { SHL R8,0x4 }
    /* +0xb931fd */ __asm { OR R8,R9 }
    /* +0xb93200 */ __asm { MOV R11,0x3333333333333333 }
    /* +0xb9320a */ __asm { MOV R9,R8 }
    /* +0xb9320d */ __asm { AND R9,R11 }
    /* +0xb93210 */ __asm { SHR R8,0x2 }
    /* +0xb93214 */ __asm { AND R8,R11 }
    /* +0xb93217 */ __asm { LEA R11,[R8 + R9*0x4] }
    /* +0xb9321b */ __asm { MOV RDX,0x5555555555555555 }
    /* +0xb93225 */ __asm { MOV R8,R11 }
    /* +0xb93228 */ __asm { AND R8,RDX }
    /* +0xb9322b */ __asm { SHR R11,0x1 }
    /* +0xb9322e */ __asm { AND R11,RDX }
    /* +0xb93231 */ __asm { LEA R11,[R11 + R8*0x2] }
    /* +0xb93235 */ __asm { IMUL R11,R10 }
    /* +0xb93239 */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb93240 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb9324a */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb93251 */ __asm { MOV R10D,0x385e0bd6 }
    /* +0xb93257 */ __asm { MOV EAX,0xc6b140dd }
    /* +0xb9325c */ __asm { XOR EAX,ECX }
    /* +0xb9325e */ __asm { NOT EAX }
    /* +0xb93260 */ __asm { IMUL EDX,EAX,-0x4d0b6e3b }
    /* +0xb93266 */ __asm { SUB EDX,EDI }
    /* +0xb93268 */ __asm { TEST R11D,R11D }
    /* +0xb9326b */ __asm { SETNS R9B }
    /* +0xb9326f */ __asm { XOR R10D,0xccc7acaf }
    /* +0xb93276 */ __asm { ROL R10D,CL }
    /* +0xb93279 */ __asm { NOT R10D }
    /* +0xb9327c */ __asm { SUB R10D,EDI }
    /* +0xb9327f */ __asm { CMP R10,RDX }
    /* +0xb93282 */ __asm { SETG CL }
    /* +0xb93285 */ __asm { XOR CL,R9B }
    /* +0xb93288 */ __asm { JZ 0x7fffa5388937 }
    /* +0xb9328e */ __asm { NOT qword ptr [RBP + 0xfa8] }
    /* +0xb93295 */ __asm { JMP 0x7fffa53050ca }
    /* +0xb9329a */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb932a4 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb932ab */ __asm { TEST R11D,R11D }
    /* +0xb932ae */ __asm { JS 0x7fffa538893f }
    /* +0xb932b4 */ __asm { MOV RCX,R8 }
    /* +0xb932b7 */ __asm { SHL RCX,0xb }
    /* +0xb932bb */ __asm { SUB R8,RCX }
    /* +0xb932be */ __asm { NOT R8 }
    /* +0xb932c1 */ __asm { MOV R11,R8 }
    /* +0xb932c4 */ __asm { ROL R11,0xc }
    /* +0xb932c8 */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb932cf */ __asm { MOV R9,R8 }
    /* +0xb932d2 */ __asm { ROL R9,0x3c }
    /* +0xb932d6 */ __asm { PUSHFQ }
    /* +0xb932d7 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb932df */ __asm { POPFQ }
    /* +0xb932e0 */ __asm { MOV R11D,0x7c8126d }
    /* +0xb932e6 */ __asm { XOR R11D,0x45cc162c }
    /* +0xb932ed */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb932f4 */ __asm { ROR R11D,CL }
    /* +0xb932f7 */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xb932fe */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb93305 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb9330c */ __asm { TEST R11D,R11D }
    /* +0xb9330f */ __asm { JS 0x7fffa5388947 }
    /* +0xb93315 */ __asm { ROL R8,0x35 }
    /* +0xb93319 */ __asm { XOR qword ptr [RBP + 0xfa8],R9 }
    /* +0xb93320 */ __asm { PUSHFQ }
    /* +0xb93321 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb93329 */ __asm { POPFQ }
    /* +0xb9332a */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb93334 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb9333b */ __asm { TEST R11D,R11D }
    /* +0xb9333e */ __asm { JS 0x7fffa538894f }
    /* +0xb93344 */ __asm { XOR qword ptr [RBP + 0xfa8],R8 }
    /* +0xb9334b */ __asm { JMP 0x7fffa53041f0 }
    /* +0xb93350 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb9335a */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb93361 */ __asm { MOV R10W,0x8df6 }
    /* +0xb93366 */ __asm { SUB R10D,dword ptr [RBP + 0x1038] }
    /* +0xb9336d */ __asm { MOV RDX,qword ptr [RBP + 0x5d8] }
    /* +0xb93374 */ __asm { MOV EAX,EDX }
    /* +0xb93376 */ __asm { XOR EAX,R10D }
    /* +0xb93379 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb93380 */ __asm { ROL AX,CL }
    /* +0xb93383 */ __asm { ADD EAX,0x35ed }
    /* +0xb93388 */ __asm { MOVSX R10D,AX }
    /* +0xb9338c */ __asm { CMP R11D,R10D }
    /* +0xb9338f */ __asm { JLE 0x7fffa5388957 }
    /* +0xb93395 */ __asm { PUSHFQ }
    /* +0xb93396 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb9339e */ __asm { POPFQ }
    /* +0xb9339f */ __asm { MOV R10,qword ptr [RBP + 0x458] }
    /* +0xb933a6 */ __asm { MOV R11D,R10D }
    /* +0xb933a9 */ __asm { SHR R11D,0xb }
    /* +0xb933ad */ __asm { SHR R10D,0x7 }
    /* +0xb933b1 */ __asm { XOR R10D,R11D }
    /* +0xb933b4 */ __asm { MOV qword ptr [RBP + 0x458],R10 }
    /* +0xb933bb */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb933c5 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb933cc */ __asm { TEST R11D,R11D }
    /* +0xb933cf */ __asm { JS 0x7fffa538895f }
    /* +0xb933d5 */ __asm { BSWAP R8 }
    /* +0xb933d8 */ __asm { MOV RCX,0x6665fdde634e6983 }
    /* +0xb933e2 */ __asm { IMUL RCX,R8 }
    /* +0xb933e6 */ __asm { ADD RCX,qword ptr [RBP + 0x1038] }
    /* +0xb933ed */ __asm { MOV R11,0x1ff7a762e73f2432 }
    /* +0xb933f7 */ __asm { ADD R11,qword ptr [RBP + 0x480] }
    /* +0xb933fe */ __asm { XOR R11,qword ptr [RBP + 0x1298] }
    /* +0xb93405 */ __asm { ADD R11,RCX }
    /* +0xb93408 */ __asm { ADD R11,-0x3c1de09b }
    /* +0xb9340f */ __asm { MOV qword ptr [RBP + 0xfa8],R11 }
    /* +0xb93416 */ __asm { PUSHFQ }
    /* +0xb93417 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb9341f */ __asm { POPFQ }
    /* +0xb93420 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5081012 }
    /* +0xb9342a */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb93431 */ __asm { TEST R11D,R11D }
    /* +0xb93434 */ __asm { JS 0x7fffa5388967 }
}


// ============================================================================
// Function : FUN_7fffa530f3ed  |  RVA: 0xb9f3ed  |  Size: 316 bytes
// Callers  : FUN_7fffa5381000@0xc11000
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa530f3ed(void) {
    /* +0xb9f3ed */ __asm { MOV R8,-0x7c9a946e51875990 }
    /* +0xb9f3f7 */ __asm { MOV qword ptr [RBP + 0x3b0],R8 }
    /* +0xb9f3fe */ __asm { MOV R10D,0x97bb9f93 }
    /* +0xb9f404 */ __asm { MOV RDX,0x1f59b4ce0d61e4a6 }
    /* +0xb9f40e */ __asm { MOV EAX,0xcb5ea58f }
    /* +0xb9f413 */ __asm { MOV R8,0x1f36b4bc0d13e4e3 }
    /* +0xb9f41d */ __asm { MOV qword ptr [RBP + 0x12e0],R8 }
    /* +0xb9f424 */ __asm { MOV R11,qword ptr [RBP + 0x1038] }
    /* +0xb9f42b */ __asm { ADD EAX,R11D }
    /* +0xb9f42e */ __asm { IMUL EAX,EAX,-0x21697e71 }
    /* +0xb9f434 */ __asm { XOR EAX,dword ptr [RBP + 0x480] }
    /* +0xb9f43a */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb9f441 */ __asm { ROL EAX,CL }
    /* +0xb9f443 */ __asm { ADD R10D,0x40a4c589 }
    /* +0xb9f44a */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xb9f451 */ __asm { CDQE }
    /* +0xb9f453 */ __asm { MOV RSI,-0x7c9a946e518759fe }
    /* +0xb9f45d */ __asm { XOR R10D,0x7ffe03c0 }
    /* +0xb9f464 */ __asm { SUB R10D,ECX }
    /* +0xb9f467 */ __asm { MOV ECX,R11D }
    /* +0xb9f46a */ __asm { ROR R10D,CL }
    /* +0xb9f46d */ __asm { NOT R10D }
    /* +0xb9f470 */ __asm { MOVSXD RCX,R10D }
    /* +0xb9f473 */ __asm { CMP RAX,RCX }
    /* +0xb9f476 */ __asm { JC 0x7fffa5314868 }
    /* +0xb9f47c */ __asm { MOV R11,qword ptr [RBP + 0x1038] }
    /* +0xb9f483 */ __asm { MOV R10D,R11D }
    /* +0xb9f486 */ __asm { SUB R10D,dword ptr [RBP + 0x480] }
    /* +0xb9f48d */ __asm { MOV qword ptr [RBP + 0x1050],RDX }
    /* +0xb9f494 */ __asm { MOV qword ptr [RBP + 0x1058],RSI }
    /* +0xb9f49b */ __asm { MOVAPS XMM0,xmmword ptr [RBP + 0x1050] }
    /* +0xb9f4a2 */ __asm { MOV R8,qword ptr [RBP + 0x3b0] }
    /* +0xb9f4a9 */ __asm { MOV qword ptr [RBP + 0x5e8],R8 }
    /* +0xb9f4b0 */ __asm { MOV EDX,0x59f8957f }
    /* +0xb9f4b5 */ __asm { ADD EDX,R10D }
    /* +0xb9f4b8 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb9f4bf */ __asm { ROR EDX,CL }
    /* +0xb9f4c1 */ __asm { XOR EDX,0x5f51d141 }
    /* +0xb9f4c7 */ __asm { MOV qword ptr [RBP + 0x590],RDX }
    /* +0xb9f4ce */ __asm { MOV R8,qword ptr [RBP + 0x12e0] }
    /* +0xb9f4d5 */ __asm { MOV qword ptr [RBP + 0x5e0],R8 }
    /* +0xb9f4dc */ __asm { XORPS XMM0,xmmword ptr [R9] }
    /* +0xb9f4e0 */ __asm { MOVAPS xmmword ptr [RBP + 0x1050],XMM0 }
    /* +0xb9f4e7 */ __asm { MOV dword ptr [RBP + 0x5e0],0x80dffe25 }
    /* +0xb9f4f1 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb9f4f8 */ __asm { MOV R8,-0x7e6df35855008406 }
    /* +0xb9f502 */ __asm { MOV qword ptr [RBP + 0x5d8],R8 }
    /* +0xb9f509 */ __asm { MOV RAX,0x3122cb69ea9ed30a }
    /* +0xb9f513 */ __asm { MOV R8,0x2c9695b40925c98b }
    /* +0xb9f51d */ __asm { MOV qword ptr [RBP + 0x580],R8 }
    /* +0xb9f524 */ __asm { JMP 0x7fffa531492e }
}


// ============================================================================
// Function : FUN_7fffa5310571  |  RVA: 0xba0571  |  Size: 5139 bytes
// Callers  : FUN_7fffa5342825@0xbd2825
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5310571(void) {
    /* +0xba0571 */ __asm { MOV R11D,0x11baa245 }
    /* +0xba0577 */ __asm { ADD R11D,dword ptr [RBP + 0x1038] }
    /* +0xba057e */ __asm { NOT R11D }
    /* +0xba0581 */ __asm { IMUL R10D,R11D,0x45473243 }
    /* +0xba0588 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xba058f */ __asm { ROR R10D,CL }
    /* +0xba0592 */ __asm { SUB R10D,dword ptr [RBP + 0x480] }
    /* +0xba0599 */ __asm { XOR R10D,dword ptr [RBP + 0x3b0] }
    /* +0xba05a0 */ __asm { MOV R11,qword ptr [R10] }
    /* +0xba05a3 */ __asm { NOT R11 }
    /* +0xba05a6 */ __asm { ROL R11,0x1 }
    /* +0xba05a9 */ __asm { MOV RDX,-0x29d0f9c93e106bd9 }
    /* +0xba05b3 */ __asm { IMUL RDX,R11 }
    /* +0xba05b7 */ __asm { MOV R11,0x9d3ffaae4781e14 }
    /* +0xba05c1 */ __asm { CMP RDX,R11 }
    /* +0xba05c4 */ __asm { NOP }
    /* +0xba05c5 */ __asm { NOP }
    /* +0xba05c6 */ __asm { NOP }
    /* +0xba05c7 */ __asm { NOP }
    /* +0xba05c8 */ __asm { NOP }
    /* +0xba05c9 */ __asm { MOV RCX,0x1f36b4bc0d13e4e3 }
    /* +0xba05d3 */ __asm { MOV R8,0x1f59b4ce0d61e4a6 }
    /* +0xba05dd */ __asm { MOV R11,-0x7c9a946e518759fe }
    /* +0xba05e7 */ __asm { MOV qword ptr [RBP + 0x1058],R11 }
    /* +0xba05ee */ __asm { LEA R10,[RBP + 0x5e0] }
    /* +0xba05f5 */ __asm { MOV qword ptr [RBP + 0x1050],R8 }
    /* +0xba05fc */ __asm { MOV R8,-0x7c9a946e51875990 }
    /* +0xba0606 */ __asm { MOV qword ptr [RBP + 0x580],RCX }
    /* +0xba060d */ __asm { MOV qword ptr [RBP + 0x5e0],RCX }
    /* +0xba0614 */ __asm { MOVAPS XMM0,xmmword ptr [RBP + 0x1050] }
    /* +0xba061b */ __asm { MOV qword ptr [RBP + 0x5b0],R8 }
    /* +0xba0622 */ __asm { MOV qword ptr [RBP + 0x5e8],R8 }
    /* +0xba0629 */ __asm { XORPS XMM0,xmmword ptr [R10] }
    /* +0xba062d */ __asm { MOVAPS xmmword ptr [RBP + 0x1050],XMM0 }
    /* +0xba0634 */ __asm { MOV dword ptr [RBP + 0x5e0],0x8fe1e37a }
    /* +0xba063e */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xba0645 */ __asm { MOV AX,0xc2ed }
    /* +0xba0649 */ __asm { XOR EAX,dword ptr [RBP + 0x1298] }
    /* +0xba064f */ __asm { ADD EAX,0x50d0 }
    /* +0xba0654 */ __asm { XOR EAX,dword ptr [RBP + 0x480] }
    /* +0xba065a */ __asm { IMUL EAX,dword ptr [RBP + 0x290] }
    /* +0xba0661 */ __asm { MOV R11,qword ptr [RBP + 0x1038] }
    /* +0xba0668 */ __asm { MOV R8D,R11D }
    /* +0xba066b */ __asm { XOR R8D,EAX }
    /* +0xba066e */ __asm { NOT R8D }
    /* +0xba0671 */ __asm { MOVZX EAX,R8W }
    /* +0xba0675 */ __asm { CMP R10D,EAX }
    /* +0xba0678 */ __asm { JGE 0x7fffa53893c3 }
    /* +0xba067e */ __asm { MOV R8,-0x4fa0cad969fb0e4f }
    /* +0xba0688 */ __asm { MOV qword ptr [RBP + 0x1f0],R8 }
    /* +0xba068f */ __asm { MOV RSI,0x1906572d09b50917 }
    /* +0xba0699 */ __asm { MOV R15,0x4fdf0ffa8fef72ec }
    /* +0xba06a3 */ __asm { MOV R8,0x2c9695b40925c98b }
    /* +0xba06ad */ __asm { MOV qword ptr [RBP + 0x560],R8 }
    /* +0xba06b4 */ __asm { LEA RDX,[RBP + 0x5e0] }
    /* +0xba06bb */ __asm { MOV R8,0x4fab0fda8f9c728d }
    /* +0xba06c5 */ __asm { MOV qword ptr [RBP + 0x11e8],R8 }
    /* +0xba06cc */ __asm { MOV R9,-0x7e6df35855008406 }
    /* +0xba06d6 */ __asm { MOV R13,-0x4fc5caab69db0e38 }
    /* +0xba06e0 */ __asm { MOV RDI,0x2cf195da094cc9ff }
    /* +0xba06ea */ __asm { MOV R12,-0x16774856e5b60488 }
    /* +0xba06f4 */ __asm { MOV RBX,-0x14b01ead66c54813 }
    /* +0xba06fe */ __asm { MOV R14,0x1972575809da0937 }
    /* +0xba0708 */ __asm { MOV RAX,-0x7cf2944e51ff59e1 }
    /* +0xba0712 */ __asm { MOV R10,0x3122cb69ea9ed30a }
    /* +0xba071c */ __asm { MOV R11,-0x16774856e5b604aa }
    /* +0xba0726 */ __asm { MOV R8,0x1f5ab4de0d7ce4b1 }
    /* +0xba0730 */ __asm { MOV RCX,-0x14c21ecc66b14862 }
    /* +0xba073a */ __asm { PUSHFQ }
    /* +0xba073b */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xba0743 */ __asm { POPFQ }
    /* +0xba0744 */ __asm { MOV qword ptr [RBP + 0x1080],R15 }
    /* +0xba074b */ __asm { MOV qword ptr [RBP + 0x1090],RSI }
    /* +0xba0752 */ __asm { MOV qword ptr [RBP + 0x1070],R8 }
    /* +0xba0759 */ __asm { MOV qword ptr [RBP + 0x10b0],RDI }
    /* +0xba0760 */ __asm { MOV qword ptr [RBP + 0x10b8],R11 }
    /* +0xba0767 */ __asm { MOV qword ptr [RBP + 0x1098],R10 }
    /* +0xba076e */ __asm { MOV qword ptr [RBP + 0x10a8],RBX }
    /* +0xba0775 */ __asm { MOV qword ptr [RBP + 0x10a0],R13 }
    /* +0xba077c */ __asm { MOV qword ptr [RBP + 0x1078],RAX }
    /* +0xba0783 */ __asm { MOV R8,0x3150cb3deabed324 }
    /* +0xba078d */ __asm { MOV R11,-0x7e09f33d556d846d }
    /* +0xba0797 */ __asm { MOV qword ptr [RBP + 0x1088],R11 }
    /* +0xba079e */ __asm { MOV R11,qword ptr [RBP + 0x11e8] }
    /* +0xba07a5 */ __asm { MOV qword ptr [RBP + 0x5f0],R11 }
    /* +0xba07ac */ __asm { MOV R11,qword ptr [RBP + 0x580] }
    /* +0xba07b3 */ __asm { MOV qword ptr [RBP + 0x5e0],R11 }
    /* +0xba07ba */ __asm { MOV qword ptr [RBP + 0x618],RCX }
    /* +0xba07c1 */ __asm { MOV qword ptr [RBP + 0x5f8],R9 }
    /* +0xba07c8 */ __asm { MOV qword ptr [RBP + 0x628],R12 }
    /* +0xba07cf */ __asm { MOV qword ptr [RBP + 0x608],R8 }
    /* +0xba07d6 */ __asm { MOV R8,qword ptr [RBP + 0x560] }
    /* +0xba07dd */ __asm { MOV qword ptr [RBP + 0x620],R8 }
    /* +0xba07e4 */ __asm { MOVDQA XMM0,xmmword ptr [RBP + 0x10b0] }
    /* +0xba07ec */ __asm { PXOR XMM0,xmmword ptr [RDX + 0x40] }
    /* +0xba07f1 */ __asm { MOV qword ptr [RBP + 0x600],R14 }
    /* +0xba07f8 */ __asm { MOV R8,qword ptr [RBP + 0x1f0] }
    /* +0xba07ff */ __asm { MOV qword ptr [RBP + 0x610],R8 }
    /* +0xba0806 */ __asm { MOVAPS XMM2,xmmword ptr [RBP + 0x1080] }
    /* +0xba080d */ __asm { XORPS XMM2,xmmword ptr [RDX + 0x10] }
    /* +0xba0811 */ __asm { MOV R8,qword ptr [RBP + 0x5b0] }
    /* +0xba0818 */ __asm { MOV qword ptr [RBP + 0x5e8],R8 }
    /* +0xba081f */ __asm { MOVAPS XMM5,xmmword ptr [RBP + 0x1090] }
    /* +0xba0826 */ __asm { MOVAPS XMM1,xmmword ptr [RDX] }
    /* +0xba0829 */ __asm { XORPS XMM1,xmmword ptr [RBP + 0x1070] }
    /* +0xba0830 */ __asm { MOVAPS xmmword ptr [RBP + 0x1080],XMM2 }
    /* +0xba0837 */ __asm { MOVAPS xmmword ptr [RBP + 0x1070],XMM1 }
    /* +0xba083e */ __asm { MOVDQA XMM2,xmmword ptr [RDX + 0x30] }
    /* +0xba0843 */ __asm { XORPS XMM5,xmmword ptr [RDX + 0x20] }
    /* +0xba0847 */ __asm { PXOR XMM2,xmmword ptr [RBP + 0x10a0] }
    /* +0xba084f */ __asm { MOVDQA xmmword ptr [RBP + 0x10b0],XMM0 }
    /* +0xba0857 */ __asm { MOVAPS xmmword ptr [RBP + 0x1090],XMM5 }
    /* +0xba085e */ __asm { MOVDQA xmmword ptr [RBP + 0x10a0],XMM2 }
    /* +0xba0866 */ __asm { MOV dword ptr [RBP + 0x5e0],0x79590763 }
    /* +0xba0870 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xba0877 */ __asm { TEST R11B,0x1 }
    /* +0xba087b */ __asm { NOP }
    /* +0xba087c */ __asm { NOP }
    /* +0xba087d */ __asm { NOP }
    /* +0xba087e */ __asm { NOP }
    /* +0xba087f */ __asm { NOP }
    /* +0xba0880 */ __asm { MOV dword ptr [RBP + 0x280],0x0 }
    /* +0xba088a */ __asm { MOV dword ptr [RBP + 0x1210],0xa000a }
    /* +0xba0894 */ __asm { LEA R11,[RBP + 0x1050] }
    /* +0xba089b */ __asm { MOV qword ptr [RBP + 0x1218],R11 }
    /* +0xba08a2 */ __asm { LEA R11,[RBP + 0x1070] }
    /* +0xba08a9 */ __asm { MOV qword ptr [RBP + 0x4e8],R11 }
    /* +0xba08b0 */ __asm { MOV dword ptr [RBP + 0x4e0],0x4a004a }
    /* +0xba08ba */ __asm { MOV dword ptr [RBP + 0x5e0],0xcf517c7 }
    /* +0xba08c4 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xba08cb */ __asm { CMP R11D,0xa6db895b }
    /* +0xba08d2 */ __asm { JNC 0x7fffa53893cb }
    /* +0xba08d8 */ __asm { MOV R11W,0x50d3 }
    /* +0xba08dd */ __asm { MOV RAX,qword ptr [RBP + 0x1298] }
    /* +0xba08e4 */ __asm { SUB R11D,EAX }
    /* +0xba08e7 */ __asm { MOV R12,qword ptr [RBP + 0x590] }
    /* +0xba08ee */ __asm { XOR R11D,R12D }
    /* +0xba08f1 */ __asm { MOV qword ptr [RBP + 0x5f8],0x1388 }
    /* +0xba08fc */ __asm { NOT R11D }
    /* +0xba08ff */ __asm { MOV qword ptr [RBP + 0x5f0],0x10 }
    /* +0xba090a */ __asm { MOV R9,qword ptr [RBP + 0x1038] }
    /* +0xba0911 */ __asm { MOV ECX,R9D }
    /* +0xba0914 */ __asm { ROR R11W,CL }
    /* +0xba0918 */ __asm { LEA RDX,[RBP + 0x1210] }
    /* +0xba091f */ __asm { MOV qword ptr [RBP + 0x5e8],RDX }
    /* +0xba0926 */ __asm { MOV RDI,qword ptr [RBP + 0x480] }
    /* +0xba092d */ __asm { MOV R10D,EDI }
    /* +0xba0930 */ __asm { XOR R10D,R11D }
    /* +0xba0933 */ __asm { MOV EDX,0x1215bb0b }
    /* +0xba0938 */ __asm { MOV RSI,qword ptr [RBP + 0x3b0] }
    /* +0xba093f */ __asm { ADD EDX,ESI }
    /* +0xba0941 */ __asm { MOV ECX,EAX }
    /* +0xba0943 */ __asm { ROL EDX,CL }
    /* +0xba0945 */ __asm { MOV ECX,R9D }
    /* +0xba0948 */ __asm { ROR EDX,CL }
    /* +0xba094a */ __asm { SUB EDX,R12D }
    /* +0xba094d */ __asm { MOV ECX,EDI }
    /* +0xba094f */ __asm { ROL EDX,CL }
    /* +0xba0951 */ __asm { XOR RDX,0x7893cb15 }
    /* +0xba0958 */ __asm { LEA R11,[RBP + 0x4e0] }
    /* +0xba095f */ __asm { MOV qword ptr [RBP + 0x5e0],R11 }
    /* +0xba0966 */ __asm { MOV R11,qword ptr [RDX] }
    /* +0xba0969 */ __asm { NOT R10D }
    /* +0xba096c */ __asm { MOVZX R10D,R10W }
    /* +0xba0970 */ __asm { MOV R8,qword ptr GS:[R10] }
    /* +0xba0974 */ __asm { MOV R10D,0x7b86460e }
    /* +0xba097a */ __asm { MOV RDX,RSI }
    /* +0xba097d */ __asm { ADD R10D,R12D }
    /* +0xba0980 */ __asm { MOV ECX,EAX }
    /* +0xba0982 */ __asm { ROR R10D,CL }
    /* +0xba0985 */ __asm { XOR R10D,ESI }
    /* +0xba0988 */ __asm { MOV ECX,R9D }
    /* +0xba098b */ __asm { ROR R10D,CL }
    /* +0xba098e */ __asm { OR RDX,0x1 }
    /* +0xba0992 */ __asm { IMUL R10D,dword ptr [RBP + 0x11d8] }
    /* +0xba099a */ __asm { ROL R10D,0x16 }
    /* +0xba099e */ __asm { IMUL R11,qword ptr [R8 + 0x30] }
    /* +0xba09a3 */ __asm { MOV R8,0x67031b1b67ab4b87 }
    /* +0xba09ad */ __asm { IMUL R8,qword ptr [RBP + 0x50] }
    /* +0xba09b2 */ __asm { ROL R8,0x39 }
    /* +0xba09b6 */ __asm { IMUL R8,RDX }
    /* +0xba09ba */ __asm { MOV ECX,R12D }
    /* +0xba09bd */ __asm { ROL R8,CL }
    /* +0xba09c0 */ __asm { IMUL RDX,R8,0x3d79cc47 }
    /* +0xba09c7 */ __asm { NOT RDX }
    /* +0xba09ca */ __asm { MOV RAX,-0x2b74c158530fffdf }
    /* +0xba09d4 */ __asm { IMUL RAX,R11 }
    /* +0xba09d8 */ __asm { ROL RAX,0x37 }
    /* +0xba09dc */ __asm { ADD RDI,RDX }
    /* +0xba09df */ __asm { SUB RAX,R10 }
    /* +0xba09e2 */ __asm { CMP RDI,RAX }
    /* +0xba09e5 */ __asm { NOP }
    /* +0xba09e6 */ __asm { NOP }
    /* +0xba09e7 */ __asm { NOP }
    /* +0xba09e8 */ __asm { NOP }
    /* +0xba09e9 */ __asm { NOP }
    /* +0xba09ea */ __asm { RDTSC }
    /* +0xba09ec */ __asm { SHL RDX,0x20 }
    /* +0xba09f0 */ __asm { OR RDX,RAX }
    /* +0xba09f3 */ __asm { MOV R8,-0x30ebf64fafbc6efb }
    /* +0xba09fd */ __asm { MOV R11,RDX }
    /* +0xba0a00 */ __asm { IMUL R11,R8 }
    /* +0xba0a04 */ __asm { XOR RDX,R8 }
    /* +0xba0a07 */ __asm { MOV R10D,0x36a23c57 }
    /* +0xba0a0d */ __asm { MOV R9,qword ptr [RBP + 0x1038] }
    /* +0xba0a14 */ __asm { XOR R10D,R9D }
    /* +0xba0a17 */ __asm { MOV RDI,qword ptr [RBP + 0x3b0] }
    /* +0xba0a1e */ __asm { SUB R10D,EDI }
    /* +0xba0a21 */ __asm { IMUL R10D,dword ptr [RBP + 0x12e0] }
    /* +0xba0a29 */ __asm { ADD R10D,0x288e4ce5 }
    /* +0xba0a30 */ __asm { IMUL R10D,dword ptr [RBP + 0x11d8] }
    /* +0xba0a38 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xba0a3f */ __asm { ROR R10D,CL }
    /* +0xba0a42 */ __asm { MOV R8D,0x81710767 }
    /* +0xba0a48 */ __asm { XOR R8D,R9D }
    /* +0xba0a4b */ __asm { MOV RAX,qword ptr [RBP + 0x480] }
    /* +0xba0a52 */ __asm { LEA R9D,[RAX + R8*0x1] }
    /* +0xba0a56 */ __asm { ADD R9D,0x7567f17d }
    /* +0xba0a5d */ __asm { ROL R9D,0x1a }
    /* +0xba0a61 */ __asm { XOR R9D,dword ptr [RBP + 0x590] }
    /* +0xba0a68 */ __asm { NOT R9D }
    /* +0xba0a6b */ __asm { MOV ECX,EDI }
    /* +0xba0a6d */ __asm { ROR R9D,CL }
    /* +0xba0a70 */ __asm { CMP R9,R10 }
    /* +0xba0a73 */ __asm { CMOVG RDX,R11 }
    /* +0xba0a77 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xba0a81 */ __asm { ADD R9,RDX }
    /* +0xba0a84 */ __asm { MOV RCX,R9 }
    /* +0xba0a87 */ __asm { SHR RCX,0x3b }
    /* +0xba0a8b */ __asm { MOV R10,R9 }
    /* +0xba0a8e */ __asm { SHR R10,0x2d }
    /* +0xba0a92 */ __asm { SHR R9,0x1b }
    /* +0xba0a96 */ __asm { XOR R10D,R9D }
    /* +0xba0a99 */ __asm { ROR R10D,CL }
    /* +0xba0a9c */ __asm { AND R10D,0x3 }
    /* +0xba0aa0 */ __asm { CMP R10D,0x2 }
    /* +0xba0aa4 */ __asm { JNC 0x7fffa5318ec8 }
    /* +0xba0aaa */ __asm { CMP R10D,0x1 }
    /* +0xba0aae */ __asm { JZ 0x7fffa531e2dd }
    /* +0xba0ab4 */ __asm { LEA R8,[0x7fffa47b70a1] }
    /* +0xba0abb */ __asm { MOV R11,0x6bbf25864cc02532 }
    /* +0xba0ac5 */ __asm { CMP R8,R11 }
    /* +0xba0ac8 */ __asm { NOP }
    /* +0xba0ac9 */ __asm { NOP }
    /* +0xba0aca */ __asm { NOP }
    /* +0xba0acb */ __asm { NOP }
    /* +0xba0acc */ __asm { MOV R11W,0x1ade }
    /* +0xba0ad1 */ __asm { SUB R11D,dword ptr [RBP + 0x3b0] }
    /* +0xba0ad8 */ __asm { XOR R11D,dword ptr [RBP + 0x1038] }
    /* +0xba0adf */ __asm { MOV RCX,qword ptr [RBP + 0x590] }
    /* +0xba0ae6 */ __asm { ROR R11W,CL }
    /* +0xba0aea */ __asm { MOV RDX,qword ptr [RBP + 0x480] }
    /* +0xba0af1 */ __asm { MOV R10D,EDX }
    /* +0xba0af4 */ __asm { SUB R10D,dword ptr [RBP + 0x1298] }
    /* +0xba0afb */ __asm { ADD R10D,R11D }
    /* +0xba0afe */ __asm { ROL R10W,0xc }
    /* +0xba0b03 */ __asm { MOVZX ECX,R10W }
    /* +0xba0b07 */ __asm { MOV R11,R8 }
    /* +0xba0b0a */ __asm { ADD R11,RCX }
    /* +0xba0b0d */ __asm { MOVZX R8D,uint8_t ptr [R8 + RCX*0x1 + 0x9] }
    /* +0xba0b13 */ __asm { MOVZX ECX,uint8_t ptr [R11 + R8*0x4 + 0xf] }
    /* +0xba0b19 */ __asm { NOT CL }
    /* +0xba0b1b */ __asm { ROL CL,0x5 }
    /* +0xba0b1e */ __asm { MOV uint8_t ptr [RBP + 0x120],CL }
    /* +0xba0b24 */ __asm { MOVZX ECX,uint8_t ptr [R11 + R8*0x4 + 0x10] }
    /* +0xba0b2a */ __asm { NOT CL }
    /* +0xba0b2c */ __asm { ROL CL,0x5 }
    /* +0xba0b2f */ __asm { MOV uint8_t ptr [RBP + 0x121],CL }
    /* +0xba0b35 */ __asm { MOVZX ECX,uint8_t ptr [R11 + R8*0x4 + 0x11] }
    /* +0xba0b3b */ __asm { NOT CL }
    /* +0xba0b3d */ __asm { ROL CL,0x5 }
    /* +0xba0b40 */ __asm { MOV uint8_t ptr [RBP + 0x122],CL }
    /* +0xba0b46 */ __asm { MOVZX ECX,uint8_t ptr [R11 + R8*0x4 + 0x12] }
    /* +0xba0b4c */ __asm { NOT CL }
    /* +0xba0b4e */ __asm { ROL CL,0x5 }
    /* +0xba0b51 */ __asm { MOV uint8_t ptr [RBP + 0x123],CL }
    /* +0xba0b57 */ __asm { MOV R11D,0x9102c3cc }
    /* +0xba0b5d */ __asm { XOR R11D,dword ptr [RBP + 0x120] }
    /* +0xba0b64 */ __asm { BT R11D,R11D }
    /* +0xba0b68 */ __asm { JNC 0x7fffa5322971 }
    /* +0xba0b6e */ __asm { RDTSC }
    /* +0xba0b70 */ __asm { SHL RDX,0x20 }
    /* +0xba0b74 */ __asm { OR RDX,RAX }
    /* +0xba0b77 */ __asm { MOV R11,-0x2ecbdabc217d106b }
    /* +0xba0b81 */ __asm { IMUL RDX,R11 }
    /* +0xba0b85 */ __asm { MOV R10,-0x6cea0000e5b222 }
    /* +0xba0b8f */ __asm { ADD R10,RDX }
    /* +0xba0b92 */ __asm { MOV RDX,R10 }
    /* +0xba0b95 */ __asm { SHR RDX,0x1b }
    /* +0xba0b99 */ __asm { MOV RCX,R10 }
    /* +0xba0b9c */ __asm { SHR RCX,0x3b }
    /* +0xba0ba0 */ __asm { SHR R10,0x2d }
    /* +0xba0ba4 */ __asm { XOR R10D,EDX }
    /* +0xba0ba7 */ __asm { ROR R10D,CL }
    /* +0xba0baa */ __asm { MOV dword ptr [RBP + 0x120],0xf3e3ca66 }
    /* +0xba0bb4 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xba0bbb */ __asm { CMP R11D,0xccaf85de }
    /* +0xba0bc2 */ __asm { NOP }
    /* +0xba0bc3 */ __asm { NOP }
    /* +0xba0bc4 */ __asm { NOP }
    /* +0xba0bc5 */ __asm { NOP }
    /* +0xba0bc6 */ __asm { NOP }
    /* +0xba0bc7 */ __asm { CMP R10D,0x4279d39 }
    /* +0xba0bce */ __asm { JA 0x7fffa5310ef3 }
    /* +0xba0bd4 */ __asm { MOV R10,qword ptr [RBP + 0x1350] }
    /* +0xba0bdb */ __asm { CMP dword ptr [RBP + 0x1b0],R10D }
    /* +0xba0be2 */ __asm { NOP }
    /* +0xba0be3 */ __asm { NOP }
    /* +0xba0be4 */ __asm { NOP }
    /* +0xba0be5 */ __asm { NOP }
    /* +0xba0be6 */ __asm { NOP }
    /* +0xba0be7 */ __asm { MOV R8D,0xaf28b86c }
    /* +0xba0bed */ __asm { XOR R8D,dword ptr [RBP + 0x590] }
    /* +0xba0bf4 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xba0bfb */ __asm { ROL R8D,CL }
    /* +0xba0bfe */ __asm { IMUL R8D,dword ptr [RBP + 0x5d8] }
    /* +0xba0c06 */ __asm { MOV R11,qword ptr [RBP + 0x1298] }
    /* +0xba0c0d */ __asm { ADD R11D,R8D }
    /* +0xba0c10 */ __asm { ADD R11D,0xf1a05153 }
    /* +0xba0c17 */ __asm { ROL R11D,0x1 }
    /* +0xba0c1a */ __asm { IMUL R11D,dword ptr [RBP + 0x11d8] }
    /* +0xba0c22 */ __asm { MOV dword ptr [RBP + 0x120],R11D }
    /* +0xba0c29 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xba0c30 */ __asm { CMP R11D,0x2058b89d }
    /* +0xba0c37 */ __asm { JBE 0x7fffa53893d6 }
    /* +0xba0c3d */ __asm { LEA R8,[0x7fffa47c42d9] }
    /* +0xba0c44 */ __asm { MOV R11,-0x79111effb8fa0886 }
    /* +0xba0c4e */ __asm { CMP R8,R11 }
    /* +0xba0c51 */ __asm { NOP }
    /* +0xba0c52 */ __asm { NOP }
    /* +0xba0c53 */ __asm { NOP }
    /* +0xba0c54 */ __asm { NOP }
    /* +0xba0c55 */ __asm { NOP }
    /* +0xba0c56 */ __asm { NOP }
    /* +0xba0c57 */ __asm { NOP }
    /* +0xba0c58 */ __asm { NOP }
    /* +0xba0c59 */ __asm { NOP }
    /* +0xba0c5a */ __asm { NOP }
    /* +0xba0c5b */ __asm { NOP }
    /* +0xba0c5c */ __asm { NOP }
    /* +0xba0c5d */ __asm { NOP }
    /* +0xba0c5e */ __asm { NOP }
    /* +0xba0c5f */ __asm { NOP }
    /* +0xba0c60 */ __asm { NOP }
    /* +0xba0c61 */ __asm { NOP }
    /* +0xba0ef3 */ __asm { MOV EAX,0xa721842 }
    /* +0xba0ef8 */ __asm { MOV R10D,0x3eba18e1 }
    /* +0xba0efe */ __asm { IMUL R10D,dword ptr [RBP + 0xd0] }
    /* +0xba0f06 */ __asm { XOR R10D,dword ptr [RBP + 0x480] }
    /* +0xba0f0d */ __asm { MOV RDX,qword ptr [RBP + 0x3b0] }
    /* +0xba0f14 */ __asm { MOV ECX,EDX }
    /* +0xba0f16 */ __asm { ROR R10D,CL }
    /* +0xba0f19 */ __asm { LEA R11,[0x7fffa4786f21] }
    /* +0xba0f20 */ __asm { NOT R10D }
    /* +0xba0f23 */ __asm { MOV RCX,qword ptr [RBP + 0x590] }
    /* +0xba0f2a */ __asm { ROR R10D,CL }
    /* +0xba0f2d */ __asm { ADD EAX,0xd1dc988 }
    /* +0xba0f32 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xba0f39 */ __asm { ROL EAX,CL }
    /* +0xba0f3b */ __asm { NOT R10D }
    /* +0xba0f3e */ __asm { IMUL R10D,dword ptr [RBP + 0xe8] }
    /* +0xba0f46 */ __asm { XOR EAX,EDX }
    /* +0xba0f48 */ __asm { NOT EAX }
    /* +0xba0f4a */ __asm { MOV RCX,qword ptr [RBP + 0x12e0] }
    /* +0xba0f51 */ __asm { IMUL ECX,EAX }
    /* +0xba0f54 */ __asm { XOR ECX,dword ptr [RBP + 0x1038] }
    /* +0xba0f5a */ __asm { NOT ECX }
    /* +0xba0f5c */ __asm { XOR RCX,R11 }
    /* +0xba0f5f */ __asm { ADD RCX,R10 }
    /* +0xba0f62 */ __asm { MOV RDX,-0x6c0aaac01eeb8b8a }
    /* +0xba0f6c */ __asm { CMP RCX,RDX }
    /* +0xba0f6f */ __asm { NOP }
    /* +0xba0f70 */ __asm { NOP }
    /* +0xba0f71 */ __asm { NOP }
    /* +0xba0f72 */ __asm { NOP }
    /* +0xba0f73 */ __asm { NOP }
    /* +0xba0f74 */ __asm { NOP }
    /* +0xba0f75 */ __asm { NOP }
    /* +0xba0f76 */ __asm { NOP }
    /* +0xba0f77 */ __asm { NOP }
    /* +0xba0f78 */ __asm { NOP }
    /* +0xba0f79 */ __asm { NOP }
    /* +0xba0f7a */ __asm { NOP }
    /* +0xba0f7b */ __asm { NOP }
    /* +0xba0f7c */ __asm { NOP }
    /* +0xba0f7d */ __asm { NOP }
    /* +0xba0f7e */ __asm { NOP }
    /* +0xba0f7f */ __asm { NOP }
    /* +0xbae2dd */ __asm { LEA R8,[0x7fffa47c02c7] }
    /* +0xbae2e4 */ __asm { MOV R11,R8 }
    /* +0xbae2e7 */ __asm { NOT R11 }
    /* +0xbae2ea */ __asm { MOV RDX,0x17ada6bf73202c0d }
    /* +0xbae2f4 */ __asm { IMUL RDX,R11 }
    /* +0xbae2f8 */ __asm { MOV R11,0x3046fd751ac4a638 }
    /* +0xbae302 */ __asm { CMP RDX,R11 }
    /* +0xbae305 */ __asm { JZ 0x7fffa538c668 }
    /* +0xbae30b */ __asm { MOVZX ECX,uint8_t ptr [R8 + -0x3b7e] }
    /* +0xbae313 */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + -0x3b78] }
    /* +0xbae31c */ __asm { NOT R10B }
    /* +0xbae31f */ __asm { ROL R10B,0x5 }
    /* +0xbae323 */ __asm { MOV uint8_t ptr [RBP + 0x120],R10B }
    /* +0xbae32a */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + -0x3b77] }
    /* +0xbae333 */ __asm { NOT R10B }
    /* +0xbae336 */ __asm { ROL R10B,0x5 }
    /* +0xbae33a */ __asm { MOV uint8_t ptr [RBP + 0x121],R10B }
    /* +0xbae341 */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + -0x3b76] }
    /* +0xbae34a */ __asm { NOT R10B }
    /* +0xbae34d */ __asm { ROL R10B,0x5 }
    /* +0xbae351 */ __asm { MOV uint8_t ptr [RBP + 0x122],R10B }
    /* +0xbae358 */ __asm { MOVZX ECX,uint8_t ptr [R8 + RCX*0x4 + -0x3b75] }
    /* +0xbae361 */ __asm { NOT CL }
    /* +0xbae363 */ __asm { ROL CL,0x5 }
    /* +0xbae366 */ __asm { MOV uint8_t ptr [RBP + 0x123],CL }
    /* +0xbae36c */ __asm { MOV R11D,0x9102c3cc }
    /* +0xbae372 */ __asm { XOR R11D,dword ptr [RBP + 0x120] }
    /* +0xbae379 */ __asm { BT R11D,R11D }
    /* +0xbae37d */ __asm { JC 0x7fffa5322a63 }
    /* +0xbae383 */ __asm { RDTSC }
    /* +0xbae385 */ __asm { SHL RDX,0x20 }
    /* +0xbae389 */ __asm { OR RDX,RAX }
    /* +0xbae38c */ __asm { MOV R11,-0x158b4ad174161d9b }
    /* +0xbae396 */ __asm { IMUL R11,RDX }
    /* +0xbae39a */ __asm { MOV R10,-0x17d6804bb4b89ba2 }
    /* +0xbae3a4 */ __asm { ADD R10,R11 }
    /* +0xbae3a7 */ __asm { MOV RCX,R10 }
    /* +0xbae3aa */ __asm { SHR RCX,0x3b }
    /* +0xbae3ae */ __asm { MOV RDX,R10 }
    /* +0xbae3b1 */ __asm { SHR RDX,0x1b }
    /* +0xbae3b5 */ __asm { SHR R10,0x2d }
    /* +0xbae3b9 */ __asm { XOR R10D,EDX }
    /* +0xbae3bc */ __asm { ROR R10D,CL }
    /* +0xbae3bf */ __asm { MOV dword ptr [RBP + 0x120],0x42e001 }
    /* +0xbae3c9 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbae3d0 */ __asm { CMP R11D,0x4cac7ce7 }
    /* +0xbae3d7 */ __asm { NOP }
    /* +0xbae3d8 */ __asm { NOP }
    /* +0xbae3d9 */ __asm { NOP }
    /* +0xbae3da */ __asm { NOP }
    /* +0xbae3db */ __asm { NOP }
    /* +0xbae3dc */ __asm { NOP }
    /* +0xbae3dd */ __asm { NOP }
    /* +0xbae3de */ __asm { NOP }
    /* +0xbae3df */ __asm { NOP }
    /* +0xbae3e0 */ __asm { NOP }
    /* +0xbae3e1 */ __asm { CMP R10D,0x462e15 }
    /* +0xbae3e8 */ __asm { JA 0x7fffa531e6fe }
    /* +0xbae3ee */ __asm { MOV R10D,0x33441533 }
    /* +0xbae3f4 */ __asm { ADD R10D,dword ptr [RBP + 0x1298] }
    /* +0xbae3fb */ __asm { ROL R10D,0x13 }
    /* +0xbae3ff */ __asm { NOT R10D }
    /* +0xbae402 */ __asm { ADD R10D,dword ptr [RBP + 0x1038] }
    /* +0xbae409 */ __asm { SUB R10D,dword ptr [RBP + 0x3b0] }
    /* +0xbae410 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xbae417 */ __asm { ROR R10D,CL }
    /* +0xbae41a */ __asm { MOV R11,-0x20eaf190866bac63 }
    /* +0xbae424 */ __asm { CMP qword ptr [R10],R11 }
    /* +0xbae427 */ __asm { NOP }
    /* +0xbae428 */ __asm { NOP }
    /* +0xbae429 */ __asm { NOP }
    /* +0xbae42a */ __asm { NOP }
    /* +0xbae42b */ __asm { MOV R8D,0xfeae642d }
    /* +0xbae431 */ __asm { MOV R11,0x4ff7c57a40ec66c4 }
    /* +0xbae43b */ __asm { CMP R8,R11 }
    /* +0xbae43e */ __asm { JNZ 0x7fffa531e448 }
    /* +0xbae440 */ __asm { OUT DX,EAX }
    /* +0xbae441 */ __asm { ADC ESP,ESP }
    /* +0xbae443 */ __asm { ADD EAX,0x114e8be7 }
    /* +0xbae448 */ __asm { MOV R10D,0x498e63c2 }
    /* +0xbae44e */ __asm { MOV R8,qword ptr [R8 + -0x7eb06425] }
    /* +0xbae455 */ __asm { MOV R11D,0x62378838 }
    /* +0xbae45b */ __asm { MOV RDX,qword ptr [RBP + 0x590] }
    /* +0xbae462 */ __asm { SUB R11D,EDX }
    /* +0xbae465 */ __asm { MOV RSI,qword ptr [RBP + 0x480] }
    /* +0xbae46c */ __asm { MOV ECX,ESI }
    /* +0xbae46e */ __asm { ROR R11D,CL }
    /* +0xbae471 */ __asm { ADD R11D,dword ptr [RBP + 0x1298] }
    /* +0xbae478 */ __asm { IMUL EDI,R11D,-0x7128aae5 }
    /* +0xbae47f */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbae486 */ __asm { SUB EDI,ECX }
    /* +0xbae488 */ __asm { ADD R10D,0xbfcdf8a1 }
    /* +0xbae48f */ __asm { ROL R10D,0x9 }
    /* +0xbae493 */ __asm { XOR R10D,ECX }
    /* +0xbae496 */ __asm { NOT R10D }
    /* +0xbae499 */ __asm { MOV ECX,EDX }
    /* +0xbae49b */ __asm { ROL R10D,CL }
    /* +0xbae49e */ __asm { MOV R11,-0x7daaa241190ab458 }
    /* +0xbae4a8 */ __asm { MOV RAX,R8 }
    /* +0xbae4ab */ __asm { MUL R11 }
    /* +0xbae4ae */ __asm { MOV R11,RAX }
    /* +0xbae4b1 */ __asm { MOV R9,RDX }
    /* +0xbae4b4 */ __asm { IMUL EDI,dword ptr [RBP + 0x5d8] }
    /* +0xbae4bb */ __asm { MOV EDX,0x1461fa8 }
    /* +0xbae4c0 */ __asm { MOV RAX,R8 }
    /* +0xbae4c3 */ __asm { MUL RDX }
    /* +0xbae4c6 */ __asm { ADD RAX,R9 }
    /* +0xbae4c9 */ __asm { ADC RDX,0x0 }
    /* +0xbae4cd */ __asm { MOV R9D,EDX }
    /* +0xbae4d0 */ __asm { AND R9D,0x1 }
    /* +0xbae4d4 */ __asm { SUB R10D,ESI }
    /* +0xbae4d7 */ __asm { MOV RCX,qword ptr [RBP + 0x3b0] }
}


// ============================================================================
// Function : FUN_7fffa53150d0  |  RVA: 0xba50d0  |  Size: 476 bytes
// Callers  : FUN_7fffa5381000@0xc11000
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa53150d0(void) {
    /* +0xba50d0 */ __asm { MOV R10,qword ptr [RBP + 0x1350] }
    /* +0xba50d7 */ __asm { CMP dword ptr [RBP + 0x1b0],R10D }
    /* +0xba50de */ __asm { JZ 0x7fffa53150ea }
    /* +0xba50e0 */ __asm { JO 0x7fffa531512d }
    /* +0xba50e2 */ __asm { INT3 }
    /* +0xba50ea */ __asm { MOV R11,-0x47b36fe5b7d77e0d }
    /* +0xba50f4 */ __asm { XOR R11,qword ptr [RBP + 0x590] }
    /* +0xba50fb */ __asm { ADD R11,-0x5e330fa8 }
    /* +0xba5102 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xba5109 */ __asm { ROL R11,CL }
    /* +0xba510c */ __asm { MOV RDX,qword ptr [RBP + 0x1258] }
    /* +0xba5113 */ __asm { IMUL RDX,R11 }
    /* +0xba5117 */ __asm { LEA R8,[0x7fffa478ace7] }
    /* +0xba511e */ __asm { CMP R8,RDX }
    /* +0xba5121 */ __asm { JZ 0x7fffa53894a1 }
    /* +0xba5127 */ __asm { MOV R11W,0x4346 }
    /* +0xba512c */ __asm { IMUL R11D,dword ptr [RBP + 0x498] }
    /* +0xba5134 */ __asm { MOV RDX,qword ptr [RBP + 0x590] }
    /* +0xba513b */ __asm { MOV ECX,EDX }
    /* +0xba513d */ __asm { ROR R11W,CL }
    /* +0xba5141 */ __asm { XOR R11D,0x2891 }
    /* +0xba5148 */ __asm { ADD R11D,0x4234 }
    /* +0xba514f */ __asm { MOV AX,0x5916 }
    /* +0xba5153 */ __asm { ADD EAX,dword ptr [RBP + 0x480] }
    /* +0xba5159 */ __asm { IMUL EAX,dword ptr [RBP + 0x4a0] }
    /* +0xba5160 */ __asm { MOV R10D,0xa255d559 }
    /* +0xba5166 */ __asm { ADD R10D,0xc0000026 }
    /* +0xba516d */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xba5174 */ __asm { ROL R10D,CL }
    /* +0xba5177 */ __asm { ADD R10D,0xc0000091 }
    /* +0xba517e */ __asm { MOV ECX,EDX }
    /* +0xba5180 */ __asm { ROL R10D,CL }
    /* +0xba5183 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xba518a */ __asm { SUB R10D,ECX }
    /* +0xba518d */ __asm { MOVSXD R10,R10D }
    /* +0xba5190 */ __asm { ADD EAX,0xffffd64c }
    /* +0xba5195 */ __asm { ROR AX,CL }
    /* +0xba5198 */ __asm { MOVZX EDX,AX }
    /* +0xba519b */ __asm { MOV qword ptr [RBP + 0x2b0],RCX }
    /* +0xba51a2 */ __asm { MOV EAX,dword ptr [R8 + -0x5e5b] }
    /* +0xba51a9 */ __asm { MOVZX R9D,R11W }
    /* +0xba51ad */ __asm { LEA R8,[RBP + 0x120] }
    /* +0xba51b4 */ __asm { SYSCALL }
    /* +0xba51b6 */ __asm { LEA R8,[0x7fffa4784faf] }
    /* +0xba51bd */ __asm { MOV R11,R8 }
    /* +0xba51c0 */ __asm { ADD R11,0x4638ce6b }
    /* +0xba51c7 */ __asm { MOV EDX,0xa494f48a }
    /* +0xba51cc */ __asm { XOR RDX,R11 }
    /* +0xba51cf */ __asm { MOV R11,0x702c045d7da53127 }
    /* +0xba51d9 */ __asm { CMP RDX,R11 }
    /* +0xba51dc */ __asm { JZ 0x7fffa53894a9 }
    /* +0xba51e2 */ __asm { MOV RDX,qword ptr [RBP + 0x1298] }
    /* +0xba51e9 */ __asm { MOV R11D,EDX }
    /* +0xba51ec */ __asm { MOV R9,qword ptr [RBP + 0x1038] }
    /* +0xba51f3 */ __asm { SUB R11D,R9D }
    /* +0xba51f6 */ __asm { MOV qword ptr [RBP + 0x120],R10 }
    /* +0xba51fd */ __asm { MOV R10,qword ptr [RBP + 0x590] }
    /* +0xba5204 */ __asm { MOV EAX,R10D }
    /* +0xba5207 */ __asm { OR EAX,0x1 }
    /* +0xba520a */ __asm { MOV ECX,0x1751177d }
    /* +0xba520f */ __asm { MOV R15W,0x82e6 }
    /* +0xba5214 */ __asm { IMUL R15D,EAX }
    /* +0xba5218 */ __asm { ADD R15D,R9D }
    /* +0xba521b */ __asm { IMUL R15D,dword ptr [RBP + 0x4a0] }
    /* +0xba5223 */ __asm { MOV AX,0xaea6 }
    /* +0xba5227 */ __asm { XOR EAX,R10D }
    /* +0xba522a */ __asm { SUB EAX,EDX }
    /* +0xba522c */ __asm { MOV R10,qword ptr [RBP + 0x498] }
    /* +0xba5233 */ __asm { IMUL R10D,EAX }
    /* +0xba5237 */ __asm { ADD R10D,0xffffd562 }
    /* +0xba523e */ __asm { MOVZX EDX,R10W }
    /* +0xba5242 */ __asm { MOV EAX,dword ptr [R8 + -0x96f] }
    /* +0xba5249 */ __asm { ADD R15D,0xffffa700 }
    /* +0xba5250 */ __asm { XOR ECX,0x28a7cf46 }
    /* +0xba5256 */ __asm { IMUL R8D,ECX,-0x2e16c17 }
    /* +0xba525d */ __asm { SUB R8D,R9D }
    /* +0xba5260 */ __asm { MOV R10,qword ptr [RBP + 0xd0] }
    /* +0xba5267 */ __asm { IMUL R10D,R8D }
    /* +0xba526b */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xba5272 */ __asm { ROR R10D,CL }
    /* +0xba5275 */ __asm { MOV R8W,0x80e3 }
    /* +0xba527a */ __asm { MOV RCX,qword ptr [RBP + 0x188] }
    /* +0xba5281 */ __asm { IMUL ECX,R8D }
    /* +0xba5285 */ __asm { ROL CX,0xb }
    /* +0xba5289 */ __asm { MOVZX R8D,R15W }
    /* +0xba528d */ __asm { NOT ECX }
    /* +0xba528f */ __asm { ADD ECX,R11D }
    /* +0xba5292 */ __asm { MOVZX R11D,CX }
    /* +0xba5296 */ __asm { LEA R9,[RBP + 0x280] }
    /* +0xba529d */ __asm { MOV qword ptr [RSP + 0x30],R9 }
    /* +0xba52a2 */ __asm { MOV dword ptr [RSP + 0x28],R11D }
    /* +0xba52a7 */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xba52ae */ __asm { JMP 0x7fffa5321b5a }
}


// ============================================================================
// Function : FUN_7fffa5315660  |  RVA: 0xba5660  |  Size: 12811 bytes
// Callers  : FUN_7fffa53819b7@0xc119b7
// Callees  : FUN_7fffa52edd75@0xb7dd75
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5315660(void) {
    /* +0xba5660 */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x3b0e] }
    /* +0xba5668 */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + 0x3b18] }
    /* +0xba5671 */ __asm { NOT R10B }
    /* +0xba5674 */ __asm { ROL R10B,0x3 }
    /* +0xba5678 */ __asm { MOV uint8_t ptr [RBP + 0x5e0],R10B }
    /* +0xba567f */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + 0x3b19] }
    /* +0xba5688 */ __asm { NOT R10B }
    /* +0xba568b */ __asm { ROL R10B,0x3 }
    /* +0xba568f */ __asm { MOV uint8_t ptr [RBP + 0x5e1],R10B }
    /* +0xba5696 */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + 0x3b1a] }
    /* +0xba569f */ __asm { NOT R10B }
    /* +0xba56a2 */ __asm { ROL R10B,0x3 }
    /* +0xba56a6 */ __asm { MOV uint8_t ptr [RBP + 0x5e2],R10B }
    /* +0xba56ad */ __asm { MOVZX ECX,uint8_t ptr [R8 + RCX*0x4 + 0x3b1b] }
    /* +0xba56b6 */ __asm { NOT CL }
    /* +0xba56b8 */ __asm { ROL CL,0x3 }
    /* +0xba56bb */ __asm { MOV uint8_t ptr [RBP + 0x5e3],CL }
    /* +0xba56c1 */ __asm { MOV R11D,0x97cd0fa7 }
    /* +0xba56c7 */ __asm { XOR R11D,dword ptr [RBP + 0x5e0] }
    /* +0xba56ce */ __asm { BT R11D,R11D }
    /* +0xba56d2 */ __asm { JNC 0x7fffa53159c5 }
    /* +0xba56d8 */ __asm { MOV dword ptr [RBP + 0x5e0],0x84040014 }
    /* +0xba56e2 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xba56e9 */ __asm { MOV R11W,0x58f6 }
    /* +0xba56ee */ __asm { MOV R10D,0x161ce574 }
    /* +0xba56f4 */ __asm { LEA RDX,[0x7fffa568dedc] }
    /* +0xba56fb */ __asm { ADD R10D,dword ptr [RBP + 0x1298] }
    /* +0xba5702 */ __asm { IMUL R8D,R10D,0x6f8f0ec1 }
    /* +0xba5709 */ __asm { ADD R8D,EDI }
    /* +0xba570c */ __asm { MOV R10,qword ptr [RBP + 0x480] }
    /* +0xba5713 */ __asm { XOR R8D,R10D }
    /* +0xba5716 */ __asm { PXOR XMM0,XMM0 }
    /* +0xba571a */ __asm { MOVDQA xmmword ptr [RBP + 0x600],XMM0 }
    /* +0xba5722 */ __asm { MOVDQA xmmword ptr [RBP + 0x5f0],XMM0 }
    /* +0xba572a */ __asm { MOVDQA xmmword ptr [RBP + 0x5e0],XMM0 }
    /* +0xba5732 */ __asm { LEA RAX,[RBP + 0x5e0] }
    /* +0xba5739 */ __asm { ADD RAX,-0x2b82ceb }
    /* +0xba573f */ __asm { MOVQ XMM0,RAX }
    /* +0xba5744 */ __asm { PSHUFD XMM1,XMM0,0x44 }
    /* +0xba5749 */ __asm { MOVDQA XMM2,XMM0 }
    /* +0xba574d */ __asm { PSRLQ XMM2,0x7 }
    /* +0xba5752 */ __asm { MOVDQA XMM5,XMM1 }
    /* +0xba5756 */ __asm { PSRLQ XMM5,0x3f }
    /* +0xba575b */ __asm { MOVSD XMM5,XMM2 }
    /* +0xba575f */ __asm { PSLLQ XMM0,0x39 }
    /* +0xba5764 */ __asm { PADDQ XMM1,XMM1 }
    /* +0xba5768 */ __asm { ADD R11D,0x6e86 }
    /* +0xba576f */ __asm { IMUL R11D,dword ptr [RBP + 0x498] }
    /* +0xba5777 */ __asm { MOV ECX,R12D }
    /* +0xba577a */ __asm { ROL R11W,CL }
    /* +0xba577e */ __asm { MOV ECX,R10D }
    /* +0xba5781 */ __asm { ROR R11W,CL }
    /* +0xba5785 */ __asm { MOVSD XMM1,XMM0 }
    /* +0xba5789 */ __asm { ORPD XMM1,XMM5 }
    /* +0xba578d */ __asm { MOVSX R11,R11W }
    /* +0xba5791 */ __asm { ADD R11,RDX }
    /* +0xba5794 */ __asm { CALL R11 }
    /* +0xba5797 */ __asm { NOP }
    /* +0xba5799 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xba57a0 */ __asm { MOV R8,0x0 }
    /* +0xba57a7 */ __asm { MOV dword ptr [RBP + 0x1070],0x29e8d209 }
    /* +0xba57b1 */ __asm { MOV R11D,dword ptr [RBP + 0x1070] }
    /* +0xba57b8 */ __asm { LEA R11,[0x7fffa5630648] }
    /* +0xba57bf */ __asm { MOV R10D,0xc0a01a2d }
    /* +0xba57c5 */ __asm { XOR R10D,dword ptr [RBP + 0x1038] }
    /* +0xba57cc */ __asm { XOR R10D,0xe938113c }
    /* +0xba57d3 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xba57da */ __asm { ROR R10D,CL }
    /* +0xba57dd */ __asm { ADD R10D,0x32012b60 }
    /* +0xba57e4 */ __asm { MOVSXD RDX,R10D }
    /* +0xba57e7 */ __asm { ADD RDX,R11 }
    /* +0xba57ea */ __asm { LEA RBX,[RBP + 0x5e0] }
    /* +0xba57f1 */ __asm { MOV RCX,RBX }
    /* +0xba57f4 */ __asm { CALL RDX }
    /* +0xba57f6 */ __asm { CMP RAX,0x7 }
    /* +0xba57fa */ __asm { JC 0x7fffa5315917 }
    /* +0xba5800 */ __asm { LEA R11,[RAX + RBP*0x1] }
    /* +0xba5804 */ __asm { ADD R11,0x5da }
    /* +0xba580b */ __asm { CMP RBX,R11 }
    /* +0xba580e */ __asm { JNC 0x7fffa5315917 }
    /* +0xba5814 */ __asm { MOV R8D,0x6 }
    /* +0xba581a */ __asm { MOVZX ECX,uint8_t ptr [RBP + 0x5e0] }
    /* +0xba5821 */ __asm { MOV R12,0x3e149def2df35f59 }
    /* +0xba582b */ __asm { MOV RDX,0x8000000081b }
    /* +0xba5835 */ __asm { MOV R9,-0x35688a27dc4ace78 }
    /* +0xba583f */ __asm { MOV R14D,0xbac44e80 }
    /* +0xba5845 */ __asm { MOVZX EBX,uint8_t ptr [RBP + R8*0x1 + 0x5de] }
    /* +0xba584e */ __asm { MOVZX R10D,uint8_t ptr [RBP + R8*0x1 + 0x5db] }
    /* +0xba5857 */ __asm { MOVZX EDI,CL }
    /* +0xba585a */ __asm { MOVZX ESI,uint8_t ptr [RBP + R8*0x1 + 0x5e0] }
    /* +0xba5863 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xba586a */ __asm { XOR R14D,ECX }
    /* +0xba586d */ __asm { NOT R14D }
    /* +0xba5870 */ __asm { IMUL R14D,R14D,-0x3e3c047b }
    /* +0xba5877 */ __asm { MOVZX R13D,uint8_t ptr [RBP + R8*0x1 + 0x5dc] }
    /* +0xba5880 */ __asm { MOV R11D,0xe6104093 }
    /* +0xba5886 */ __asm { IMUL R11D,R11D,-0x658b708f }
    /* +0xba588d */ __asm { ROR R11D,CL }
    /* +0xba5890 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xba5897 */ __asm { ROL R11D,CL }
    /* +0xba589a */ __asm { ADD R14D,0x8c559308 }
    /* +0xba58a1 */ __asm { XOR R11D,dword ptr [RBP + 0x1038] }
    /* +0xba58a8 */ __asm { MOVSXD RCX,R11D }
    /* +0xba58ab */ __asm { XOR RDI,R12 }
    /* +0xba58ae */ __asm { IMUL RDI,RDX }
    /* +0xba58b2 */ __asm { XOR RDI,R10 }
    /* +0xba58b5 */ __asm { IMUL RDI,RDX }
    /* +0xba58b9 */ __asm { XOR RDI,R13 }
    /* +0xba58bc */ __asm { MOVZX R11D,uint8_t ptr [RBP + R8*0x1 + 0x5dd] }
    /* +0xba58c5 */ __asm { IMUL R14D,dword ptr [RBP + 0xe8] }
    /* +0xba58cd */ __asm { IMUL RDI,RDX }
    /* +0xba58d1 */ __asm { XOR RDI,R11 }
    /* +0xba58d4 */ __asm { MOVZX R11D,uint8_t ptr [RBP + R8*0x1 + 0x5df] }
    /* +0xba58dd */ __asm { IMUL RDI,RDX }
    /* +0xba58e1 */ __asm { XOR RDI,RBX }
    /* +0xba58e4 */ __asm { IMUL RDI,RDX }
    /* +0xba58e8 */ __asm { MOV RBX,RDI }
    /* +0xba58eb */ __asm { XOR RBX,R11 }
    /* +0xba58ee */ __asm { OR RDI,R11 }
    /* +0xba58f1 */ __asm { CMP RCX,R14 }
    /* +0xba58f4 */ __asm { CMOVNC RDI,RBX }
    /* +0xba58f8 */ __asm { IMUL RDI,RDX }
    /* +0xba58fc */ __asm { XOR RDI,RSI }
    /* +0xba58ff */ __asm { IMUL RDI,RDX }
    /* +0xba5903 */ __asm { CMP RDI,R9 }
    /* +0xba5906 */ __asm { JZ 0x7fffa5315984 }
    /* +0xba5908 */ __asm { INC R8 }
    /* +0xba590b */ __asm { MOV ECX,R10D }
    /* +0xba590e */ __asm { CMP RAX,R8 }
    /* +0xba5911 */ __asm { JNZ 0x7fffa531583f }
    /* +0xba5917 */ __asm { PUSHFQ }
    /* +0xba5918 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xba5920 */ __asm { POPFQ }
    /* +0xba5921 */ __asm { MOV dword ptr [RBP + 0x1070],0x11200015 }
    /* +0xba592b */ __asm { MOV R11D,dword ptr [RBP + 0x1070] }
    /* +0xba5932 */ __asm { CMP R11D,0xe6c6971b }
    /* +0xba5939 */ __asm { JNC 0x7fffa53858b2 }
    /* +0xba593f */ __asm { LEA R8,[0x7fffa4788eae] }
    /* +0xba5946 */ __asm { MOV R11,0x5472acd459019e1b }
    /* +0xba5950 */ __asm { CMP R8,R11 }
    /* +0xba5953 */ __asm { NOP }
    /* +0xba5954 */ __asm { NOP }
    /* +0xba5955 */ __asm { NOP }
    /* +0xba5956 */ __asm { NOP }
    /* +0xba5957 */ __asm { NOP }
    /* +0xba5958 */ __asm { MOVZX ECX,uint8_t ptr [R8 + -0x2be1] }
    /* +0xba5960 */ __asm { INC CL }
    /* +0xba5962 */ __asm { AND CL,0x7 }
    /* +0xba5965 */ __asm { MOVZX ECX,CL }
    /* +0xba5968 */ __asm { MOV R11D,0xb7b088f3 }
    /* +0xba596e */ __asm { XOR R11D,dword ptr [R8 + -0x2ba7] }
    /* +0xba5975 */ __asm { MOV dword ptr [R8 + RCX*0x4 + -0x2bd2],R11D }
    /* +0xba597d */ __asm { MOV uint8_t ptr [R8 + -0x2be1],CL }
    /* +0xba5984 */ __asm { MOV dword ptr [RBP + 0x1070],0xf4d6ac66 }
    /* +0xba598e */ __asm { MOV R11D,dword ptr [RBP + 0x1070] }
    /* +0xba5995 */ __asm { CMP R11D,0xedf597b6 }
    /* +0xba599c */ __asm { JBE 0x7fffa5384c99 }
    /* +0xba59a2 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xba59a9 */ __asm { MOV R12,qword ptr [RBP + 0x1048] }
    /* +0xba59b0 */ __asm { MOV R15,qword ptr [RBP + 0xd0] }
    /* +0xba59b7 */ __asm { MOV RBX,qword ptr [RBP + 0xe8] }
    /* +0xba59be */ __asm { MOV R14,qword ptr [RBP + 0x11d8] }
    /* +0xba59c5 */ __asm { RDTSC }
    /* +0xba59c7 */ __asm { SHL RDX,0x20 }
    /* +0xba59cb */ __asm { OR RDX,RAX }
    /* +0xba59ce */ __asm { MOV R11,-0x158b4ad174161d9b }
    /* +0xba59d8 */ __asm { IMUL RDX,R11 }
    /* +0xba59dc */ __asm { MOV R9,0x3dc1b396d5b02f86 }
    /* +0xba59e6 */ __asm { ADD R9,RDX }
    /* +0xba59e9 */ __asm { MOV R10,R9 }
    /* +0xba59ec */ __asm { SHR R10,0x2d }
    /* +0xba59f0 */ __asm { MOV R11D,0x14fa2d58 }
    /* +0xba59f6 */ __asm { ADD R11D,0x1a15a9e0 }
    /* +0xba59fd */ __asm { IMUL R11D,R14D }
    /* +0xba5a01 */ __asm { ROL R11D,0x19 }
    /* +0xba5a05 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xba5a0c */ __asm { ROR R11D,CL }
    /* +0xba5a0f */ __asm { MOV RCX,R9 }
    /* +0xba5a12 */ __asm { SHR RCX,0x3b }
    /* +0xba5a16 */ __asm { SHR R9,0x1b }
    /* +0xba5a1a */ __asm { XOR R10D,R9D }
    /* +0xba5a1d */ __asm { ROR R10D,CL }
    /* +0xba5a20 */ __asm { NOT R11D }
    /* +0xba5a23 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xba5a2a */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xba5a31 */ __asm { CMP R10D,0x20c1ea }
    /* +0xba5a38 */ __asm { MOV RDX,qword ptr [RBP + 0x590] }
    /* +0xba5a3f */ __asm { JA 0x7fffa5315cf1 }
    /* +0xba5a45 */ __asm { MOV R10,qword ptr [RBP + 0x1260] }
    /* +0xba5a4c */ __asm { CMP dword ptr [RBP + 0x4b0],R10D }
    /* +0xba5a53 */ __asm { NOP }
    /* +0xba5a54 */ __asm { NOP }
    /* +0xba5a55 */ __asm { NOP }
    /* +0xba5a56 */ __asm { NOP }
    /* +0xba5a57 */ __asm { NOP }
    /* +0xba5a58 */ __asm { MOV dword ptr [RBP + 0x5e0],0xef980b5c }
    /* +0xba5a62 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xba5a69 */ __asm { CMP R11D,0x4195c92f }
    /* +0xba5a70 */ __asm { JBE 0x7fffa537b85b }
    /* +0xba5a76 */ __asm { MOV R8D,0xb219e1db }
    /* +0xba5a7c */ __asm { MOV R11,0x43ad3846ea1e494c }
    /* +0xba5a86 */ __asm { CMP R8,R11 }
    /* +0xba5a89 */ __asm { JZ 0x7fffa537b86e }
    /* +0xba5a8f */ __asm { CMP dword ptr [R8 + -0x321bde1b],0xc }
    /* +0xba5a97 */ __asm { JA 0x7fffa5315cf1 }
    /* +0xba5a9d */ __asm { MOV R11D,0x1b38ccbc }
    /* +0xba5aa3 */ __asm { IMUL R11D,R15D }
    /* +0xba5aa7 */ __asm { XOR R11D,EDI }
    /* +0xba5aaa */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xba5ab1 */ __asm { ROL R11D,CL }
    /* +0xba5ab4 */ __asm { ADD R11D,0xf2b9128 }
    /* +0xba5abb */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xba5ac2 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xba5ac9 */ __asm { CMP R11D,0x88eb9476 }
    /* +0xba5ad0 */ __asm { NOP }
    /* +0xba5ad1 */ __asm { NOP }
    /* +0xba5ad2 */ __asm { NOP }
    /* +0xba5ad3 */ __asm { NOP }
    /* +0xba5ad4 */ __asm { NOP }
    /* +0xba5ad5 */ __asm { NOP }
    /* +0xba5ad6 */ __asm { NOP }
    /* +0xba5ad7 */ __asm { NOP }
    /* +0xba5ad8 */ __asm { NOP }
    /* +0xba5ad9 */ __asm { NOP }
    /* +0xba5ada */ __asm { NOP }
    /* +0xba5adb */ __asm { NOP }
    /* +0xba5adc */ __asm { NOP }
    /* +0xba5add */ __asm { LEA R10,[0x7fffa4994080] }
    /* +0xba5ae4 */ __asm { NOP }
    /* +0xba5ae6 */ __asm { MOV R9,0x1e82e0 }
    /* +0xba5aed */ __asm { MOV R11,0x1b09e68added09e7 }
    /* +0xba5af7 */ __asm { CMP R10,R11 }
    /* +0xba5afa */ __asm { JZ 0x7fffa538206b }
    /* +0xba5b00 */ __asm { MOV R11W,0xc2ff }
    /* +0xba5b05 */ __asm { IMUL R11D,dword ptr [RBP + 0x188] }
    /* +0xba5b0d */ __asm { ADD R11D,dword ptr [RBP + 0x1298] }
    /* +0xba5b14 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xba5b1b */ __asm { MOV ECX,EDI }
    /* +0xba5b1d */ __asm { ROR R11W,CL }
    /* +0xba5b21 */ __asm { MOVZX ECX,R11W }
    /* +0xba5b25 */ __asm { XOR RCX,0xb8fd }
    /* +0xba5b2c */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0xba5b30 */ __asm { MOV R11,qword ptr [R11 + 0x8c8] }
    /* +0xba5b37 */ __asm { MOV R8,-0x400f97fd661dce1d }
    /* +0xba5b41 */ __asm { XOR R8,R11 }
    /* +0xba5b44 */ __asm { MOV R11,-0x440b07c9bcc2e15d }
    /* +0xba5b4e */ __asm { CMP R8,R11 }
    /* +0xba5b51 */ __asm { NOP }
    /* +0xba5b52 */ __asm { NOP }
    /* +0xba5b53 */ __asm { NOP }
    /* +0xba5b54 */ __asm { NOP }
    /* +0xba5b55 */ __asm { NOP }
    /* +0xba5b57 */ __asm { MOV R8,0x0 }
    /* +0xba5b5e */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xba5b65 */ __asm { MOV R11,-0x71ff54b9c2ba7bfd }
    /* +0xba5b6f */ __asm { MOV R8,R9 }
    /* +0xba5b72 */ __asm { SUB R11,RDI }
    /* +0xba5b75 */ __asm { MOV R12,qword ptr [RBP + 0x480] }
    /* +0xba5b7c */ __asm { ADD R11,R12 }
    /* +0xba5b7f */ __asm { ROL R11,0x22 }
    /* +0xba5b83 */ __asm { XOR R8,0x540c91de }
    /* +0xba5b8a */ __asm { MOV EDX,0xf1e270c1 }
    /* +0xba5b8f */ __asm { ADD RDX,R11 }
    /* +0xba5b92 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xba5b99 */ __asm { ROR RDX,CL }
    /* +0xba5b9c */ __asm { CMP qword ptr [RBP + 0x190],RDX }
    /* +0xba5ba3 */ __asm { NOP }
    /* +0xba5ba4 */ __asm { NOP }
    /* +0xba5ba5 */ __asm { NOP }
    /* +0xba5ba6 */ __asm { NOP }
    /* +0xba5ba7 */ __asm { NOP }
    /* +0xba5ba8 */ __asm { MOV R11D,0x86e0b4d3 }
    /* +0xba5bae */ __asm { MOV RAX,R8 }
    /* +0xba5bb1 */ __asm { MUL R11 }
    /* +0xba5bb4 */ __asm { XOR RDX,R8 }
    /* +0xba5bb7 */ __asm { MOV R8W,0xdd5d }
    /* +0xba5bbc */ __asm { MOV RSI,qword ptr [RBP + 0x1298] }
    /* +0xba5bc3 */ __asm { XOR R8D,ESI }
    /* +0xba5bc6 */ __asm { NOT R8D }
    /* +0xba5bc9 */ __asm { MOV ECX,R12D }
    /* +0xba5bcc */ __asm { ROL R8W,CL }
    /* +0xba5bd0 */ __asm { NOT R8D }
    /* +0xba5bd3 */ __asm { SUB R8D,EDI }
    /* +0xba5bd6 */ __asm { MOVZX ECX,R8W }
    /* +0xba5bda */ __asm { SBB R8,R11 }
    /* +0xba5bdd */ __asm { SUB R8,RDX }
    /* +0xba5be0 */ __asm { MOV R8,qword ptr GS:[RCX] }
    /* +0xba5be4 */ __asm { MOV CX,0xd6fc }
    /* +0xba5be8 */ __asm { MOV R8,qword ptr [R8 + 0x30] }
    /* +0xba5bec */ __asm { SUB ECX,EDI }
    /* +0xba5bee */ __asm { IMUL ECX,dword ptr [RBP + 0x188] }
    /* +0xba5bf5 */ __asm { SUB ECX,ESI }
    /* +0xba5bf7 */ __asm { IMUL ECX,ECX,0x1b83 }
    /* +0xba5bfd */ __asm { MOVZX ECX,CX }
    /* +0xba5c00 */ __asm { MOV RCX,qword ptr GS:[RCX] }
    /* +0xba5c04 */ __asm { XOR R8,qword ptr [RCX + 0x18] }
    /* +0xba5c08 */ __asm { MOV RCX,-0x39b87891c85716e7 }
    /* +0xba5c12 */ __asm { CMP R8,RCX }
    /* +0xba5c15 */ __asm { JZ 0x7fffa532548e }
    /* +0xba5c1b */ __asm { XOR RAX,RDX }
    /* +0xba5c1e */ __asm { MOV RDX,-0x966e65b4ae6d8ee }
    /* +0xba5c28 */ __asm { CMP R10,RDX }
    /* +0xba5c2b */ __asm { JZ 0x7fffa5382077 }
    /* +0xba5c31 */ __asm { XOR RAX,R11 }
    /* +0xba5c34 */ __asm { ADD R9,-0x10 }
    /* +0xba5c38 */ __asm { XOR ECX,ECX }
    /* +0xba5c3a */ __asm { MOV EBX,0x53dff865 }
    /* +0xba5c3f */ __asm { MOV R8,qword ptr [R10 + RCX*0x1] }
    /* +0xba5c43 */ __asm { SBB R11,RAX }
    /* +0xba5c46 */ __asm { MOV RDI,RAX }
    /* +0xba5c49 */ __asm { XOR RDI,qword ptr [R10 + RCX*0x1 + 0x8] }
    /* +0xba5c4e */ __asm { XOR R8,RBX }
    /* +0xba5c51 */ __asm { MOV R11,RAX }
    /* +0xba5c54 */ __asm { XOR RDI,0x540c91de }
    /* +0xba5c5b */ __asm { MOV RAX,R8 }
    /* +0xba5c5e */ __asm { MUL RDI }
    /* +0xba5c61 */ __asm { MOV R11,RAX }
    /* +0xba5c64 */ __asm { XOR R11,R8 }
    /* +0xba5c67 */ __asm { OR R8,R8 }
    /* +0xba5c6a */ __asm { XOR RDX,RDI }
    /* +0xba5c6d */ __asm { MOV RAX,R11 }
    /* +0xba5c70 */ __asm { XOR RAX,RDX }
    /* +0xba5c73 */ __asm { ADD R8,RDX }
    /* +0xba5c76 */ __asm { ADD R8,RAX }
    /* +0xba5c79 */ __asm { CMP R9,RCX }
    /* +0xba5c7c */ __asm { JZ 0x7fffa5315c84 }
    /* +0xba5c7e */ __asm { ADD RCX,0x10 }
    /* +0xba5c82 */ __asm { JMP 0x7fffa5315c3f }
    /* +0xba5c84 */ __asm { CMP R11,RDX }
    /* +0xba5c87 */ __asm { NOP }
    /* +0xba5c88 */ __asm { NOP }
    /* +0xba5c89 */ __asm { NOP }
    /* +0xba5c8a */ __asm { NOP }
    /* +0xba5c8b */ __asm { NOP }
    /* +0xba5c8c */ __asm { NOP }
    /* +0xba5c8d */ __asm { NOP }
    /* +0xba5c8e */ __asm { NOP }
    /* +0xba5c8f */ __asm { NOP }
    /* +0xba5c90 */ __asm { NOP }
    /* +0xba5c91 */ __asm { NOP }
    /* +0xba5c92 */ __asm { NOP }
    /* +0xba5c93 */ __asm { NOP }
    /* +0xba5c94 */ __asm { NOP }
    /* +0xba5c95 */ __asm { NOP }
    /* +0xba5c96 */ __asm { NOP }
    /* +0xba5c97 */ __asm { NOP }
    /* +0xba5cc6 */ __asm { PUSH RDI }
    /* +0xba5cc7 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xba5cce */ __asm { MOV R12,qword ptr [RBP + 0x1048] }
    /* +0xba5cd5 */ __asm { MOV R15,qword ptr [RBP + 0xd0] }
    /* +0xba5cdc */ __asm { MOV RBX,qword ptr [RBP + 0xe8] }
    /* +0xba5ce3 */ __asm { MOV R14,qword ptr [RBP + 0x11d8] }
    /* +0xba5cea */ __asm { MOV RDX,qword ptr [RBP + 0x590] }
    /* +0xba5cf1 */ __asm { MOV dword ptr [RBP + 0x5e0],0xb10caeb1 }
    /* +0xba5cfb */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xba5d02 */ __asm { MOV R10W,0x3171 }
    /* +0xba5d07 */ __asm { XOR R10D,dword ptr [RBP + 0x480] }
    /* +0xba5d0e */ __asm { SUB R10D,EDI }
    /* +0xba5d11 */ __asm { AND R11D,0x1 }
    /* +0xba5d15 */ __asm { MOVZX R10D,R10W }
    /* +0xba5d19 */ __asm { CMP R11D,R10D }
    /* +0xba5d1c */ __asm { NOP }
    /* +0xba5d1d */ __asm { NOP }
    /* +0xba5d1e */ __asm { NOP }
    /* +0xba5d1f */ __asm { NOP }
    /* +0xba5d20 */ __asm { NOP }
    /* +0xba5d21 */ __asm { NOP }
    /* +0xba5d23 */ __asm { MOV R8,0x0 }
    /* +0xba5d2a */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xba5d31 */ __asm { MOV R11,qword ptr [RBP + 0x12e0] }
    /* +0xba5d38 */ __asm { MOV R11,qword ptr [R11 + 0x10] }
    /* +0xba5d3c */ __asm { MOV qword ptr [RBP + 0x1b0],R11 }
    /* +0xba5d43 */ __asm { CMP R11,qword ptr [RDX + 0xf8] }
    /* +0xba5d4a */ __asm { JZ 0x7fffa5315d9e }
    /* +0xba5d4c */ __asm { PUSHFQ }
    /* +0xba5d4d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xba5d55 */ __asm { POPFQ }
    /* +0xba5d56 */ __asm { MOV dword ptr [RBP + 0x5e0],0x53d21791 }
    /* +0xba5d60 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xba5d67 */ __asm { MOV R10D,0x1b15fcf6 }
    /* +0xba5d6d */ __asm { XOR R10D,dword ptr [RBP + 0x480] }
    /* +0xba5d74 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xba5d7b */ __asm { MOV RSI,RCX }
    /* +0xba5d7e */ __asm { SUB R10D,ECX }
    /* +0xba5d81 */ __asm { MOV ECX,EDI }
    /* +0xba5d83 */ __asm { ROL R10D,CL }
    /* +0xba5d86 */ __asm { XOR R10D,0xad8f6687 }
    /* +0xba5d8d */ __asm { CMP R11D,R10D }
    /* +0xba5d90 */ __asm { JC 0x7fffa52f1ae1 }
    /* +0xba5d96 */ __asm { SBB dword ptr [RBP + -0x242bc17],0xe085c7ff }
    /* +0xba5da1 */ __asm { ADD EAX,0xc51c0000 }
    /* +0xba5da6 */ __asm { SBB EDX,dword ptr [RSP + RAX*0x2] }
    /* +0xba5da9 */ __asm { MOV EBX,dword ptr [RBP + 0x5e0] }
    /* +0xba5daf */ __asm { MOV R11W,0x8b25 }
    /* +0xba5db4 */ __asm { MOV R15,qword ptr [RBP + 0x1298] }
    /* +0xba5dbb */ __asm { ADD R11D,R15D }
    /* +0xba5dbe */ __asm { XOR R11D,0xff69 }
    /* +0xba5dc5 */ __asm { MOV ECX,EDI }
    /* +0xba5dc7 */ __asm { ROR R11W,CL }
    /* +0xba5dcb */ __asm { IMUL R11D,R11D,-0x7c63 }
    /* +0xba5dd2 */ __asm { MOVZX R10D,R11W }
    /* +0xba5dd6 */ __asm { MOV RSI,qword ptr GS:[R10] }
    /* +0xba5dda */ __asm { LEA R11,[0x7fffa4787ebf] }
    /* +0xba5de1 */ __asm { MOV R10W,0xa515 }
    /* +0xba5de6 */ __asm { ADD R10D,EDI }
    /* +0xba5de9 */ __asm { ROL R10W,0xd }
    /* +0xba5dee */ __asm { MOV R13,qword ptr [RBP + 0x480] }
    /* +0xba5df5 */ __asm { SUB R10D,R13D }
    /* +0xba5df8 */ __asm { MOV ECX,R12D }
    /* +0xba5dfb */ __asm { ROL R10W,CL }
    /* +0xba5dff */ __asm { MOVSX R8,R10W }
    /* +0xba5e03 */ __asm { MOV R11D,dword ptr [R11 + R8*0x1] }
    /* +0xba5e07 */ __asm { CMP R11D,ESI }
    /* +0xba5e0a */ __asm { JZ 0x7fffa5315e6d }
    /* +0xba5e0c */ __asm { LEA R11,[0x7fffa4786e05] }
    /* +0xba5e13 */ __asm { LEA RBX,[0x7fffa478951c] }
    /* +0xba5e1a */ __asm { MOV R14W,0x4db }
    /* +0xba5e1f */ __asm { MOV R10W,0x7909 }
    /* +0xba5e24 */ __asm { SUB R10D,EDI }
    /* +0xba5e27 */ __asm { XOR R10D,R15D }
    /* +0xba5e2a */ __asm { MOV ECX,R13D }
    /* +0xba5e2d */ __asm { ROL R10W,CL }
    /* +0xba5e31 */ __asm { SUB R14D,R13D }
    /* +0xba5e34 */ __asm { ADD R10D,0x6fab }
    /* +0xba5e3b */ __asm { MOVSX R8,R10W }
    /* +0xba5e3f */ __asm { LEA RCX,[R11 + R8*0x1] }
    /* +0xba5e43 */ __asm { ADD RCX,0x8 }
    /* +0xba5e47 */ __asm { CALL qword ptr [0x7fffa5877480] }
    /* +0xba5e4d */ __asm { XOR R14D,EDI }
    /* +0xba5e50 */ __asm { MOV ECX,R12D }
    /* +0xba5e53 */ __asm { ROR R14W,CL }
    /* +0xba5e57 */ __asm { IMUL R10D,R14D,-0x5767 }
    /* +0xba5e5e */ __asm { MOVSX R8,R10W }
    /* +0xba5e62 */ __asm { XCHG dword ptr [RBX + R8*0x1],ESI }
    /* +0xba5e66 */ __asm { MOV RBX,qword ptr [RBP + 0xe8] }
    /* +0xba5e6d */ __asm { LEA RDX,[0x7fffa478d992] }
    /* +0xba5e74 */ __asm { LEA R8,[0x7fffa4793ede] }
    /* +0xba5e7b */ __asm { MOV R11D,0x2862dbdb }
    /* +0xba5e81 */ __asm { MOV R12,qword ptr [RBP + 0xd0] }
    /* +0xba5e88 */ __asm { IMUL R11D,R12D }
    /* +0xba5e8c */ __asm { MOV CX,0x5b67 }
    /* +0xba5e90 */ __asm { LEA RAX,[0x7fffa47c3c49] }
    /* +0xba5e97 */ __asm { MOV R10D,0xda695b27 }
    /* +0xba5e9d */ __asm { ADD R10D,R15D }
    /* +0xba5ea0 */ __asm { MOV R14D,0xc84725ee }
    /* +0xba5ea6 */ __asm { ADD R14D,R15D }
    /* +0xba5ea9 */ __asm { ADD ECX,R15D }
    /* +0xba5eac */ __asm { MOV R9D,0xfffff657 }
    /* +0xba5eb2 */ __asm { SUB R9D,ECX }
    /* +0xba5eb5 */ __asm { ROL R9W,0x9 }
    /* +0xba5eba */ __asm { SUB R9D,EDI }
    /* +0xba5ebd */ __asm { MOVSX R9,R9W }
    /* +0xba5ec1 */ __asm { ROL R14D,0x19 }
    /* +0xba5ec5 */ __asm { SUB R14D,R13D }
    /* +0xba5ec8 */ __asm { LEA RCX,[0x7fffa4792cce] }
    /* +0xba5ecf */ __asm { IMUL R14D,R14D,-0x78884287 }
    /* +0xba5ed6 */ __asm { XOR R14D,EDI }
    /* +0xba5ed9 */ __asm { MOVSXD R13,R14D }
    /* +0xba5edc */ __asm { MOV R14D,dword ptr [RCX + R13*0x1 + 0x4] }
    /* +0xba5ee1 */ __asm { MOV RSI,qword ptr [RBP + 0x480] }
    /* +0xba5ee8 */ __asm { INC R14D }
    /* +0xba5eeb */ __asm { MOV ECX,EDI }
    /* +0xba5eed */ __asm { ROL R11D,CL }
    /* +0xba5ef0 */ __asm { XOR R11D,0x7ffe0030 }
    /* +0xba5ef7 */ __asm { ADD R11D,ESI }
    /* +0xba5efa */ __asm { ROL R11D,0x1e }
    /* +0xba5efe */ __asm { MOVSXD RCX,R11D }
    /* +0xba5f01 */ __asm { MOV R11,qword ptr [RAX + RCX*0x1] }
    /* +0xba5f05 */ __asm { NOT R10D }
    /* +0xba5f08 */ __asm { ADD R10D,EDI }
    /* +0xba5f0b */ __asm { MOV R15,RSI }
    /* +0xba5f0e */ __asm { MOV ECX,ESI }
    /* +0xba5f10 */ __asm { ROL R10D,CL }
    /* +0xba5f13 */ __asm { MOVSXD RCX,R10D }
    /* +0xba5f16 */ __asm { MOV RDX,qword ptr [RDX + R9*0x1] }
    /* +0xba5f1a */ __asm { MOV dword ptr [R8 + RCX*0x1 + 0x4],R14D }
    /* +0xba5f1f */ __asm { CMP R11,RDX }
    /* +0xba5f22 */ __asm { MOV R14,qword ptr [RBP + 0x1b0] }
    /* +0xba5f29 */ __asm { JNZ 0x7fffa531662a }
    /* +0xba5f2f */ __asm { MOV dword ptr [RBP + 0x5e0],0xfdcdd73d }
    /* +0xba5f39 */ __asm { LEA R8,[0x7fffa4788c5e] }
    /* +0xba5f40 */ __asm { MOV R11,R8 }
    /* +0xba5f43 */ __asm { XOR R11,-0x28dcf849 }
    /* +0xba5f4a */ __asm { ROL R11,0x23 }
    /* +0xba5f4e */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xba5f55 */ __asm { MOV R10D,0x91375a90 }
    /* +0xba5f5b */ __asm { MOV ECX,R15D }
    /* +0xba5f5e */ __asm { SUB ECX,R10D }
    /* +0xba5f61 */ __asm { ADD ECX,0x3fffff73 }
    /* +0xba5f67 */ __asm { IMUL ECX,EBX }
    /* +0xba5f6a */ __asm { XOR ECX,0xa74bda6a }
    /* +0xba5f70 */ __asm { XOR RCX,R11 }
    /* +0xba5f73 */ __asm { MOV R11,-0x680dcd8fc73a3b14 }
    /* +0xba5f7d */ __asm { CMP RCX,R11 }
    /* +0xba5f80 */ __asm { JZ 0x7fffa5382063 }
    /* +0xba5f86 */ __asm { MOVZX ECX,uint8_t ptr [R8 + -0x46cf] }
    /* +0xba5f8e */ __asm { MOV R10D,0xb0e3bbbe }
    /* +0xba5f94 */ __asm { IMUL R10D,EBX }
    /* +0xba5f98 */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + -0x46c5] }
    /* +0xba5fa1 */ __asm { NOT R9B }
}


// ============================================================================
// Function : FUN_7fffa5322d86  |  RVA: 0xbb2d86  |  Size: 1685 bytes
// Callers  : FUN_7fffa5381000@0xc11000
// Callees  : FUN_7fffa53236d1@0xbb36d1
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5322d86(void) {
    /* +0xbb2d86 */ __asm { MOV R10W,0x33c6 }
    /* +0xbb2d8b */ __asm { ADD R10D,0x7214 }
    /* +0xbb2d92 */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xbb2d99 */ __asm { MOV ECX,EDX }
    /* +0xbb2d9b */ __asm { ROR R10W,CL }
    /* +0xbb2d9f */ __asm { MOV qword ptr [RBP + 0x2b0],R11 }
    /* +0xbb2da6 */ __asm { NOT R10D }
    /* +0xbb2da9 */ __asm { SUB R10D,dword ptr [RBP + 0x590] }
    /* +0xbb2db0 */ __asm { MOV R11,qword ptr [RBP + 0x188] }
    /* +0xbb2db7 */ __asm { IMUL R11D,R10D }
    /* +0xbb2dbb */ __asm { MOV R10D,0x8cd4a3c9 }
    /* +0xbb2dc1 */ __asm { XOR R10D,dword ptr [RBP + 0x3b0] }
    /* +0xbb2dc8 */ __asm { MOV RDI,qword ptr [RBP + 0x12e0] }
    /* +0xbb2dcf */ __asm { IMUL EDI,R10D }
    /* +0xbb2dd3 */ __asm { MOV RAX,qword ptr [RBP + 0x480] }
    /* +0xbb2dda */ __asm { ADD EDI,EAX }
    /* +0xbb2ddc */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbb2de3 */ __asm { ROR EDI,CL }
    /* +0xbb2de5 */ __asm { ADD EDI,0xea7dd1aa }
    /* +0xbb2deb */ __asm { XOR EDI,0xf7892ef5 }
    /* +0xbb2df1 */ __asm { MOV R10W,0x7103 }
    /* +0xbb2df6 */ __asm { MOV R9,qword ptr [RBP + 0x290] }
    /* +0xbb2dfd */ __asm { IMUL R9D,R10D }
    /* +0xbb2e01 */ __asm { ADD R9D,EAX }
    /* +0xbb2e04 */ __asm { XOR R9D,ECX }
    /* +0xbb2e07 */ __asm { ADD R9D,-0x1d }
    /* +0xbb2e0b */ __asm { MOV ECX,EDX }
    /* +0xbb2e0d */ __asm { ROR R9W,CL }
    /* +0xbb2e11 */ __asm { MOVSXD R10,EDI }
    /* +0xbb2e14 */ __asm { IMUL R9D,dword ptr [RBP + 0x460] }
    /* +0xbb2e1c */ __asm { ROL R9W,0xb }
    /* +0xbb2e21 */ __asm { MOV EAX,dword ptr [R8 + 0x7d4a] }
    /* +0xbb2e28 */ __asm { MOVZX R9D,R9W }
    /* +0xbb2e2c */ __asm { NOT R11D }
    /* +0xbb2e2f */ __asm { MOVZX EDX,R11W }
    /* +0xbb2e33 */ __asm { LEA R8,[RBP + 0x120] }
    /* +0xbb2e3a */ __asm { SYSCALL }
    /* +0xbb2e3c */ __asm { LEA R9,[0x7fffa477f14d] }
    /* +0xbb2e43 */ __asm { MOV R8,R9 }
    /* +0xbb2e46 */ __asm { ROL R8,0x31 }
    /* +0xbb2e4a */ __asm { ADD R8,0x511594bf }
    /* +0xbb2e51 */ __asm { MOV R11,0xf951b4a7b7bbbf3 }
    /* +0xbb2e5b */ __asm { CMP R8,R11 }
    /* +0xbb2e5e */ __asm { JZ 0x7fffa538cd33 }
    /* +0xbb2e64 */ __asm { MOV R11D,0xd7bb964a }
    /* +0xbb2e6a */ __asm { IMUL R11D,R11D,-0x3ffffdd3 }
    /* +0xbb2e71 */ __asm { MOV RDI,qword ptr [RBP + 0x1298] }
    /* +0xbb2e78 */ __asm { ADD R11D,EDI }
    /* +0xbb2e7b */ __asm { MOV DX,0x7c4b }
    /* +0xbb2e7f */ __asm { MOV R14,qword ptr [RBP + 0x290] }
    /* +0xbb2e86 */ __asm { IMUL EDX,R14D }
    /* +0xbb2e8a */ __asm { MOV R10,qword ptr [RBP + 0xe8] }
    /* +0xbb2e91 */ __asm { IMUL R10D,R11D }
    /* +0xbb2e95 */ __asm { MOV R12,qword ptr [RBP + 0x3b0] }
    /* +0xbb2e9c */ __asm { MOV ECX,R12D }
    /* +0xbb2e9f */ __asm { ROR R10D,CL }
    /* +0xbb2ea2 */ __asm { MOV RSI,qword ptr [RBP + 0x480] }
    /* +0xbb2ea9 */ __asm { XOR R10D,ESI }
    /* +0xbb2eac */ __asm { MOV qword ptr [RBP + 0x120],R8 }
    /* +0xbb2eb3 */ __asm { MOV RBX,qword ptr [RBP + 0x590] }
    /* +0xbb2eba */ __asm { MOV ECX,EBX }
    /* +0xbb2ebc */ __asm { ROL R10D,CL }
    /* +0xbb2ebf */ __asm { MOV R15W,0xe6eb }
    /* +0xbb2ec4 */ __asm { MOV R11W,0xf67b }
    /* +0xbb2ec9 */ __asm { MOV R13,qword ptr [RBP + 0x1038] }
    /* +0xbb2ed0 */ __asm { LEA EAX,[RDX + R13*0x1] }
    /* +0xbb2ed4 */ __asm { ADD EAX,0x42f4 }
    /* +0xbb2ed9 */ __asm { XOR R11D,ESI }
    /* +0xbb2edc */ __asm { NOT R11D }
    /* +0xbb2edf */ __asm { SUB R11D,EDI }
    /* +0xbb2ee2 */ __asm { XOR R11D,R12D }
    /* +0xbb2ee5 */ __asm { MOV ECX,ESI }
    /* +0xbb2ee7 */ __asm { ROR AX,CL }
    /* +0xbb2eea */ __asm { MOV RDX,qword ptr [RBP + 0x460] }
    /* +0xbb2ef1 */ __asm { MOV R8D,EDX }
    /* +0xbb2ef4 */ __asm { MOV ECX,0x74d6f60b }
    /* +0xbb2ef9 */ __asm { XOR ECX,EDI }
    /* +0xbb2efb */ __asm { XOR ECX,EBX }
    /* +0xbb2efd */ __asm { NOT ECX }
    /* +0xbb2eff */ __asm { ROL ECX,0xc }
    /* +0xbb2f02 */ __asm { IMUL R8D,EAX }
    /* +0xbb2f06 */ __asm { SUB ECX,R13D }
    /* +0xbb2f09 */ __asm { MOV RDX,qword ptr [RBP + 0x5d8] }
    /* +0xbb2f10 */ __asm { IMUL EDX,ECX }
    /* +0xbb2f13 */ __asm { MOV EAX,dword ptr [RDX + R9*0x1 + 0x7c] }
    /* +0xbb2f18 */ __asm { MOV RDX,qword ptr [RBP + 0x188] }
    /* +0xbb2f1f */ __asm { MOV R9D,EDX }
    /* +0xbb2f22 */ __asm { IMUL R9D,R15D }
    /* +0xbb2f26 */ __asm { ROL R11W,0xb }
    /* +0xbb2f2b */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xbb2f32 */ __asm { ROL R8W,CL }
    /* +0xbb2f36 */ __asm { MOVZX R8D,R8W }
    /* +0xbb2f3a */ __asm { XOR R11D,0x45f3 }
    /* +0xbb2f41 */ __asm { MOVZX R11D,R11W }
    /* +0xbb2f45 */ __asm { MOV ECX,R13D }
    /* +0xbb2f48 */ __asm { ROL R9W,CL }
    /* +0xbb2f4c */ __asm { XOR R9D,0xffff954f }
    /* +0xbb2f53 */ __asm { IMUL R9D,R14D }
    /* +0xbb2f57 */ __asm { NOT R9D }
    /* +0xbb2f5a */ __asm { SUB R9D,EBX }
    /* +0xbb2f5d */ __asm { MOVZX EDX,R9W }
    /* +0xbb2f61 */ __asm { LEA R9,[RBP + 0x280] }
    /* +0xbb2f68 */ __asm { MOV qword ptr [RSP + 0x30],R9 }
    /* +0xbb2f6d */ __asm { MOV dword ptr [RSP + 0x28],R11D }
    /* +0xbb2f72 */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xbb2f79 */ __asm { SYSCALL }
    /* +0xbb2f7b */ __asm { MOV R11W,0x968c }
    /* +0xbb2f80 */ __asm { MOV R9,qword ptr [RBP + 0x290] }
    /* +0xbb2f87 */ __asm { IMUL R11D,R9D }
    /* +0xbb2f8b */ __asm { SUB R11D,dword ptr [RBP + 0x590] }
    /* +0xbb2f92 */ __asm { MOV R10,qword ptr [RBP + 0x188] }
    /* +0xbb2f99 */ __asm { IMUL R10D,R11D }
    /* +0xbb2f9d */ __asm { ROL R10W,0xb }
    /* +0xbb2fa2 */ __asm { MOV RDX,qword ptr [RBP + 0x1298] }
    /* +0xbb2fa9 */ __asm { XOR R10D,EDX }
    /* +0xbb2fac */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbb2fb3 */ __asm { SUB R10D,ECX }
    /* +0xbb2fb6 */ __asm { ADD R10D,0xffff9823 }
    /* +0xbb2fbd */ __asm { MOVZX R10D,R10W }
    /* +0xbb2fc1 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xbb2fc8 */ __asm { NOP }
    /* +0xbb2fca */ __asm { MOV R8,0x0 }
    /* +0xbb2fd1 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xbb2fd5 */ __asm { MOV R10W,0x8317 }
    /* +0xbb2fda */ __asm { ADD R10D,EDX }
    /* +0xbb2fdd */ __asm { NOT R10D }
    /* +0xbb2fe0 */ __asm { ROL R10W,CL }
    /* +0xbb2fe4 */ __asm { MOV R8,qword ptr [RBP + 0x460] }
    /* +0xbb2feb */ __asm { IMUL R8D,R10D }
    /* +0xbb2fef */ __asm { MOV RDX,qword ptr [RBP + 0x480] }
    /* +0xbb2ff6 */ __asm { LEA R10D,[RDX + R8*0x1] }
    /* +0xbb2ffa */ __asm { IMUL R10D,R9D }
    /* +0xbb2ffe */ __asm { MOVZX R10D,R10W }
    /* +0xbb3002 */ __asm { MOV RDX,qword ptr GS:[R10] }
    /* +0xbb3006 */ __asm { MOV RDX,-0x6d88bd32f3c64eef }
    /* +0xbb3010 */ __asm { CMP qword ptr [R11 + 0x30],RDX }
    /* +0xbb3014 */ __asm { JZ 0x7fffa53464c4 }
    /* +0xbb301a */ __asm { MOV dword ptr [RBP + 0x5e0],0xfdd85dd2 }
    /* +0xbb3024 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbb302b */ __asm { MOV dword ptr [RBP + 0x5e0],0xeb73a0f5 }
    /* +0xbb3035 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbb303c */ __asm { MOV ECX,0x5 }
    /* +0xbb3041 */ __asm { INT 0x29 }
    /* +0xbb3043 */ __asm { RDTSC }
    /* +0xbb3045 */ __asm { SHL RDX,0x20 }
    /* +0xbb3049 */ __asm { OR RDX,RAX }
    /* +0xbb304c */ __asm { MOV R11,-0x4a9b10dd1385131b }
    /* +0xbb3056 */ __asm { IMUL R11,RDX }
    /* +0xbb305a */ __asm { MOV RCX,-0x233bb5fe3ee3d692 }
    /* +0xbb3064 */ __asm { ADD RCX,R11 }
    /* +0xbb3067 */ __asm { MOV R10,RCX }
    /* +0xbb306a */ __asm { SHR R10,0x2d }
    /* +0xbb306e */ __asm { MOV RDX,RCX }
    /* +0xbb3071 */ __asm { SHR RDX,0x1b }
    /* +0xbb3075 */ __asm { XOR EDX,R10D }
    /* +0xbb3078 */ __asm { SHR RCX,0x3b }
    /* +0xbb307c */ __asm { ROR EDX,CL }
    /* +0xbb307e */ __asm { MOV dword ptr [RBP + 0x120],0x4ceb3edb }
    /* +0xbb3088 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbb308f */ __asm { CMP EDX,0x1087b8b }
    /* +0xbb3095 */ __asm { JA 0x7fffa53232ef }
    /* +0xbb309b */ __asm { MOV R11D,0x2c30625 }
    /* +0xbb30a1 */ __asm { XOR R11D,dword ptr [RBP + 0x3b0] }
    /* +0xbb30a8 */ __asm { XOR R11D,dword ptr [RBP + 0x480] }
    /* +0xbb30af */ __asm { NOT R11D }
    /* +0xbb30b2 */ __asm { MOV RCX,qword ptr [RBP + 0x590] }
    /* +0xbb30b9 */ __asm { ROR R11D,CL }
    /* +0xbb30bc */ __asm { NOT R11D }
    /* +0xbb30bf */ __asm { IMUL R11D,dword ptr [RBP + 0xe8] }
    /* +0xbb30c7 */ __asm { MOV dword ptr [RBP + 0x120],R11D }
    /* +0xbb30ce */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbb30d5 */ __asm { LEA R8,[0x7fffa47b909a] }
    /* +0xbb30dc */ __asm { MOV R11,0x6bb973d08b0a6a8d }
    /* +0xbb30e6 */ __asm { CMP R8,R11 }
    /* +0xbb30e9 */ __asm { JZ 0x7fffa538cd3b }
    /* +0xbb30ef */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x35f3] }
    /* +0xbb30f7 */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + 0x3603] }
    /* +0xbb3100 */ __asm { ROL R10B,0x4 }
    /* +0xbb3104 */ __asm { MOV uint8_t ptr [RBP + 0x120],R10B }
    /* +0xbb310b */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + 0x3604] }
    /* +0xbb3114 */ __asm { ROL R10B,0x4 }
    /* +0xbb3118 */ __asm { MOV uint8_t ptr [RBP + 0x121],R10B }
    /* +0xbb311f */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + 0x3605] }
    /* +0xbb3128 */ __asm { ROL R10B,0x4 }
    /* +0xbb312c */ __asm { MOV uint8_t ptr [RBP + 0x122],R10B }
    /* +0xbb3133 */ __asm { MOVZX ECX,uint8_t ptr [R8 + RCX*0x4 + 0x3606] }
    /* +0xbb313c */ __asm { ROL CL,0x4 }
    /* +0xbb313f */ __asm { MOV uint8_t ptr [RBP + 0x123],CL }
    /* +0xbb3145 */ __asm { MOV R11D,0x65e8ce72 }
    /* +0xbb314b */ __asm { XOR R11D,dword ptr [RBP + 0x120] }
    /* +0xbb3152 */ __asm { MOV R10D,0xca92acf4 }
    /* +0xbb3158 */ __asm { XOR R10D,dword ptr [RBP + 0x590] }
    /* +0xbb315f */ __asm { MOV EDX,0x3ef664a }
    /* +0xbb3164 */ __asm { SUB EDX,R10D }
    /* +0xbb3167 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbb316e */ __asm { ROL EDX,CL }
    /* +0xbb3170 */ __asm { NOT EDX }
    /* +0xbb3172 */ __asm { ADD EDX,R15D }
    /* +0xbb3175 */ __asm { IMUL EDX,dword ptr [RBP + 0xd0] }
    /* +0xbb317c */ __asm { MOV R10D,dword ptr [RDX] }
    /* +0xbb317f */ __asm { BT R11D,R10D }
    /* +0xbb3183 */ __asm { JNC 0x7fffa53232ef }
    /* +0xbb3189 */ __asm { XORPS XMM0,XMM0 }
    /* +0xbb318c */ __asm { MOVAPS xmmword ptr [RBP + 0x120],XMM0 }
    /* +0xbb3193 */ __asm { MOV dword ptr [RBP + 0x2b0],0xb5a30d42 }
    /* +0xbb319d */ __asm { MOV R11D,dword ptr [RBP + 0x2b0] }
    /* +0xbb31a4 */ __asm { CMP R11D,0x84bf9289 }
    /* +0xbb31ab */ __asm { JBE 0x7fffa538cd43 }
    /* +0xbb31b1 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xbb31b8 */ __asm { MOV R8,0x0 }
    /* +0xbb31bf */ __asm { NOP }
    /* +0xbb31c1 */ __asm { MOV dword ptr [RBP + 0x120],0x0 }
    /* +0xbb31cb */ __asm { PUSHFQ }
    /* +0xbb31cc */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xbb31d4 */ __asm { POPFQ }
    /* +0xbb31d5 */ __asm { MOV dword ptr [RBP + 0x2b0],0x1f765c5d }
    /* +0xbb31df */ __asm { MOV R11D,dword ptr [RBP + 0x2b0] }
    /* +0xbb31e6 */ __asm { TEST R11D,R11D }
    /* +0xbb31e9 */ __asm { NOP }
    /* +0xbb31ea */ __asm { NOP }
    /* +0xbb31eb */ __asm { NOP }
    /* +0xbb31ec */ __asm { NOP }
    /* +0xbb31ed */ __asm { NOP }
    /* +0xbb31ee */ __asm { MOV dword ptr [RBP + 0x2b0],0x54dcb709 }
    /* +0xbb31f8 */ __asm { MOV R11D,dword ptr [RBP + 0x2b0] }
    /* +0xbb31ff */ __asm { LEA R10,[0x7fffa47b5380] }
    /* +0xbb3206 */ __asm { MOV R8,R10 }
    /* +0xbb3209 */ __asm { ROL R8,0x1e }
    /* +0xbb320d */ __asm { ADD R8,0x2b012d91 }
    /* +0xbb3214 */ __asm { MOV R11,-0x305c97b558ccfede }
    /* +0xbb321e */ __asm { CMP R8,R11 }
    /* +0xbb3221 */ __asm { NOP }
    /* +0xbb3222 */ __asm { NOP }
    /* +0xbb3223 */ __asm { NOP }
    /* +0xbb3224 */ __asm { NOP }
    /* +0xbb3225 */ __asm { NOP }
    /* +0xbb3226 */ __asm { NOP }
    /* +0xbb3227 */ __asm { MOV R11W,0xac2a }
    /* +0xbb322c */ __asm { MOV AX,0x286e }
    /* +0xbb3230 */ __asm { MOV RDX,qword ptr [RBP + 0x290] }
    /* +0xbb3237 */ __asm { MOV R8D,EDX }
    /* +0xbb323a */ __asm { IMUL R8D,EAX }
    /* +0xbb323e */ __asm { ADD R8D,0xffff8f7d }
    /* +0xbb3245 */ __asm { MOV RDX,qword ptr [RBP + 0x480] }
    /* +0xbb324c */ __asm { MOV ECX,EDX }
    /* +0xbb324e */ __asm { ROR R8W,CL }
    /* +0xbb3252 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xbb3259 */ __asm { MOV RCX,0x0 }
    /* +0xbb3260 */ __asm { MOV qword ptr [RBP + 0x2b0],RCX }
    /* +0xbb3267 */ __asm { MOV EAX,dword ptr [R10 + 0x7148] }
    /* +0xbb326e */ __asm { MOV R10W,0x7cbe }
    /* +0xbb3273 */ __asm { MOV R9,qword ptr [RBP + 0x498] }
    /* +0xbb327a */ __asm { IMUL R10D,R9D }
    /* +0xbb327e */ __asm { MOV RCX,qword ptr [RBP + 0x3b0] }
    /* +0xbb3285 */ __asm { ROR R10W,CL }
    /* +0xbb3289 */ __asm { XOR R10D,EDX }
    /* +0xbb328c */ __asm { NOT R10D }
    /* +0xbb328f */ __asm { IMUL R10D,dword ptr [RBP + 0x4a0] }
    /* +0xbb3297 */ __asm { ROL R10W,0xe }
    /* +0xbb329c */ __asm { IMUL R10D,R10D,0x6d69 }
    /* +0xbb32a3 */ __asm { MOVSX R10,R10W }
    /* +0xbb32a7 */ __asm { MOV RDI,qword ptr [RBP + 0x590] }
    /* +0xbb32ae */ __asm { SUB R11D,EDI }
    /* +0xbb32b1 */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xbb32b8 */ __asm { IMUL R11D,R9D }
    /* +0xbb32bc */ __asm { ROL R11W,CL }
    /* +0xbb32c0 */ __asm { XOR R11D,0x17f7 }
    /* +0xbb32c7 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbb32ce */ __asm { ROL R8W,CL }
    /* +0xbb32d2 */ __asm { MOV ECX,EDI }
    /* +0xbb32d4 */ __asm { ROR R8W,CL }
    /* +0xbb32d8 */ __asm { ADD R11D,EDX }
    /* +0xbb32db */ __asm { MOVZX R9D,R11W }
    /* +0xbb32df */ __asm { NOT R8D }
    /* +0xbb32e2 */ __asm { MOVZX EDX,R8W }
    /* +0xbb32e6 */ __asm { LEA R8,[RBP + 0x120] }
    /* +0xbb32ed */ __asm { SYSCALL }
    /* +0xbb32ef */ __asm { OR R15D,0x1 }
    /* +0xbb32f3 */ __asm { NOP }
    /* +0xbb32f5 */ __asm { MOV R8,0x0 }
    /* +0xbb32fc */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xbb3303 */ __asm { LEA R9,[0x7fffa47885f8] }
    /* +0xbb330a */ __asm { MOV R11,-0x585faee1a538bee7 }
    /* +0xbb3314 */ __asm { CMP R9,R11 }
    /* +0xbb3317 */ __asm { JNZ 0x7fffa5323327 }
    /* +0xbb3319 */ __asm { MOV dword ptr [RDX + -0x2f911b28],ESP }
    /* +0xbb331f */ __asm { IMUL EAX,EBX,-0x41bae9d9 }
    /* +0xbb3325 */ __asm { MOV CL,0x11 }
    /* +0xbb3327 */ __asm { MOV DX,0xb440 }
    /* +0xbb332b */ __asm { MOV AX,0x1974 }
    /* +0xbb332f */ __asm { MOV R8W,0x4e48 }
    /* +0xbb3334 */ __asm { MOV R11W,0x8ec5 }
    /* +0xbb3339 */ __asm { MOV R10D,0x1b78ae5b }
    /* +0xbb333f */ __asm { MOV RSI,qword ptr [RBP + 0x1298] }
    /* +0xbb3346 */ __asm { ADD R10D,ESI }
    /* +0xbb3349 */ __asm { IMUL R10D,R15D }
    /* +0xbb334d */ __asm { ADD EDX,dword ptr [RBP + 0x480] }
    /* +0xbb3353 */ __asm { MOV RBX,qword ptr [RBP + 0x3b0] }
    /* +0xbb335a */ __asm { MOV R15D,EBX }
    /* +0xbb335d */ __asm { MOV R14,qword ptr [RBP + 0x590] }
    /* +0xbb3364 */ __asm { SUB R15D,R14D }
    /* +0xbb3367 */ __asm { SUB R8D,EBX }
    /* +0xbb336a */ __asm { MOV R13,qword ptr [RBP + 0x50] }
    /* +0xbb336e */ __asm { MOV ECX,R13D }
    /* +0xbb3371 */ __asm { ROL R8W,CL }
    /* +0xbb3375 */ __asm { ADD R10D,0xe57a1133 }
    /* +0xbb337c */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xbb3383 */ __asm { MOV ECX,EDI }
    /* +0xbb3385 */ __asm { ROR R10D,CL }
    /* +0xbb3388 */ __asm { XOR R11D,0xffffebf1 }
    /* +0xbb338f */ __asm { SUB R11D,EBX }
    /* +0xbb3392 */ __asm { ROL DX,0x6 }
    /* +0xbb3396 */ __asm { ADD R11D,R14D }
    /* +0xbb3399 */ __asm { ADD EDX,EDI }
    /* +0xbb339b */ __asm { MOV R12,qword ptr [RBP + 0x4a0] }
    /* +0xbb33a2 */ __asm { IMUL EDX,R12D }
    /* +0xbb33a6 */ __asm { MOV ECX,EBX }
    /* +0xbb33a8 */ __asm { ROL DX,CL }
    /* +0xbb33ab */ __asm { MOV ECX,EDI }
    /* +0xbb33ad */ __asm { ROL R11W,CL }
    /* +0xbb33b1 */ __asm { XOR R11D,ESI }
    /* +0xbb33b4 */ __asm { MOV ECX,R13D }
    /* +0xbb33b7 */ __asm { ROR R11W,CL }
    /* +0xbb33bb */ __asm { ADD R10D,R15D }
    /* +0xbb33be */ __asm { IMUL R8D,R8D,0x39cf }
    /* +0xbb33c5 */ __asm { ROL R8W,0xc }
    /* +0xbb33ca */ __asm { MOV ECX,EDI }
    /* +0xbb33cc */ __asm { ROR R8W,CL }
    /* +0xbb33d0 */ __asm { SUB ESI,R14D }
    /* +0xbb33d3 */ __asm { ADD ESI,EAX }
    /* +0xbb33d5 */ __asm { NOT ESI }
    /* +0xbb33d7 */ __asm { IMUL ESI,dword ptr [RBP + 0x290] }
    /* +0xbb33de */ __asm { ROL SI,CL }
    /* +0xbb33e1 */ __asm { MOV RDI,qword ptr [RBP + 0x188] }
    /* +0xbb33e8 */ __asm { IMUL EDI,ESI }
    /* +0xbb33eb */ __asm { MOV qword ptr [RBP + 0x120],RCX }
    /* +0xbb33f2 */ __asm { ADD EDX,R14D }
    /* +0xbb33f5 */ __asm { MOVSX RDX,DX }
    /* +0xbb33f9 */ __asm { MOV EAX,dword ptr [RDX + R9*0x1 + 0x7c] }
    /* +0xbb33fe */ __asm { MOVZX R11D,R11W }
    /* +0xbb3402 */ __asm { SUB R8D,R14D }
    /* +0xbb3405 */ __asm { IMUL R8D,R12D }
    /* +0xbb3409 */ __asm { MOVZX R8D,R8W }
    /* +0xbb340d */ __asm { ADD EDI,0xffffb339 }
    /* +0xbb3413 */ __asm { MOVZX EDX,DI }
    /* +0xbb3416 */ __asm { JMP 0x7fffa53236d1 }
}


// ============================================================================
// Function : FUN_7fffa532595c  |  RVA: 0xbb595c  |  Size: 4236 bytes
// Callers  : FUN_7fffa5381000@0xc11000
// Callees  : FUN_7fffa53280f9@0xbb80f9
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa532595c(void) {
    /* +0xbb595c */ __asm { MOV R11D,0x769e770f }
    /* +0xbb5962 */ __asm { XOR R10D,R11D }
    /* +0xbb5965 */ __asm { SUB R10D,dword ptr [RBP + 0x590] }
    /* +0xbb596c */ __asm { IMUL R10D,dword ptr [RBP + 0xd0] }
    /* +0xbb5974 */ __asm { MOV RCX,qword ptr [RBP + 0x3b0] }
    /* +0xbb597b */ __asm { ROL R10D,CL }
    /* +0xbb597e */ __asm { IMUL R10D,dword ptr [RBP + 0xf50] }
    /* +0xbb5986 */ __asm { ROL R10D,0x18 }
    /* +0xbb598a */ __asm { SUB R10D,dword ptr [RBP + 0x1038] }
    /* +0xbb5991 */ __asm { MOV dword ptr [RBP + 0x2b0],R10D }
    /* +0xbb5998 */ __asm { MOV R11D,dword ptr [RBP + 0x2b0] }
    /* +0xbb599f */ __asm { LEA R10,[0x7fffa47b5baf] }
    /* +0xbb59a6 */ __asm { MOV R11,-0x5026839b15fddef9 }
    /* +0xbb59b0 */ __asm { CMP R10,R11 }
    /* +0xbb59b3 */ __asm { JZ 0x7fffa538ce24 }
    /* +0xbb59b9 */ __asm { MOV AX,0x4190 }
    /* +0xbb59bd */ __asm { MOV R11W,0xd7b9 }
    /* +0xbb59c2 */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xbb59c9 */ __asm { SUB R11D,EDX }
    /* +0xbb59cc */ __asm { MOV RDI,qword ptr [RBP + 0x290] }
    /* +0xbb59d3 */ __asm { IMUL EDI,R11D }
    /* +0xbb59d7 */ __asm { MOV R8D,0x2947b407 }
    /* +0xbb59dd */ __asm { MOV RSI,qword ptr [RBP + 0x560] }
    /* +0xbb59e4 */ __asm { MOV R11D,ESI }
    /* +0xbb59e7 */ __asm { XOR R11D,R8D }
    /* +0xbb59ea */ __asm { MOV ECX,EDX }
    /* +0xbb59ec */ __asm { ROL R11D,CL }
    /* +0xbb59ef */ __asm { MOV qword ptr [RBP + 0x2b0],R8 }
    /* +0xbb59f6 */ __asm { MOV R8,qword ptr [RBP + 0x11e8] }
    /* +0xbb59fd */ __asm { XOR R8D,EAX }
    /* +0xbb5a00 */ __asm { NOT R8D }
    /* +0xbb5a03 */ __asm { MOV R9,qword ptr [RBP + 0x590] }
    /* +0xbb5a0a */ __asm { MOV ECX,R9D }
    /* +0xbb5a0d */ __asm { ROL R8W,CL }
    /* +0xbb5a11 */ __asm { NOT R8D }
    /* +0xbb5a14 */ __asm { MOV ECX,EDX }
    /* +0xbb5a16 */ __asm { ROR R8W,CL }
    /* +0xbb5a1a */ __asm { MOV EAX,dword ptr [R10 + 0x6919] }
    /* +0xbb5a21 */ __asm { MOV R10D,0xffffcb35 }
    /* +0xbb5a27 */ __asm { SUB R10D,R8D }
    /* +0xbb5a2a */ __asm { MOVZX EDX,R10W }
    /* +0xbb5a2e */ __asm { MOV ECX,ESI }
    /* +0xbb5a30 */ __asm { ROR DI,CL }
    /* +0xbb5a33 */ __asm { SUB EDI,R9D }
    /* +0xbb5a36 */ __asm { XOR EDI,0x7be2 }
    /* +0xbb5a3c */ __asm { MOV R10,qword ptr [RBP + 0x1298] }
    /* +0xbb5a43 */ __asm { SUB EDI,R10D }
    /* +0xbb5a46 */ __asm { SUB R11D,R9D }
    /* +0xbb5a49 */ __asm { MOV RCX,qword ptr [RBP + 0x3b0] }
    /* +0xbb5a50 */ __asm { ROR R11D,CL }
    /* +0xbb5a53 */ __asm { MOV RCX,qword ptr [RBP + 0x188] }
    /* +0xbb5a5a */ __asm { IMUL ECX,EDI }
    /* +0xbb5a5d */ __asm { MOVZX R9D,CX }
    /* +0xbb5a61 */ __asm { ADD R11D,R10D }
    /* +0xbb5a64 */ __asm { XOR R11D,dword ptr [RBP + 0x328] }
    /* +0xbb5a6b */ __asm { ADD R11D,0xad5e7384 }
    /* +0xbb5a72 */ __asm { ROL R11D,0x19 }
    /* +0xbb5a76 */ __asm { MOVSXD R10,R11D }
    /* +0xbb5a79 */ __asm { LEA R8,[RBP + 0x120] }
    /* +0xbb5a80 */ __asm { SYSCALL }
    /* +0xbb5a82 */ __asm { LEA R8,[0x7fffa477ed6a] }
    /* +0xbb5a89 */ __asm { MOV R11,0x7b0b1215f835c87a }
    /* +0xbb5a93 */ __asm { CMP R8,R11 }
    /* +0xbb5a96 */ __asm { JZ 0x7fffa538ce2c }
    /* +0xbb5a9c */ __asm { MOV R11W,0x5d3a }
    /* +0xbb5aa1 */ __asm { MOV qword ptr [RBP + 0x120],R10 }
    /* +0xbb5aa8 */ __asm { MOV RSI,qword ptr [RBP + 0x3b0] }
    /* +0xbb5aaf */ __asm { MOV R15D,ESI }
    /* +0xbb5ab2 */ __asm { IMUL R11D,R11D,-0x74c1 }
    /* +0xbb5ab9 */ __asm { ADD R11D,0xffffa073 }
    /* +0xbb5ac0 */ __asm { MOV R12,qword ptr [RBP + 0x590] }
    /* +0xbb5ac7 */ __asm { MOV ECX,R12D }
    /* +0xbb5aca */ __asm { ROR R11W,CL }
    /* +0xbb5ace */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xbb5ad5 */ __asm { MOV ECX,EDX }
    /* +0xbb5ad7 */ __asm { ROL R11W,CL }
    /* +0xbb5adb */ __asm { MOV RBX,qword ptr [RBP + 0x328] }
    /* +0xbb5ae2 */ __asm { SUB R15D,EBX }
    /* +0xbb5ae5 */ __asm { MOV R10,qword ptr [RBP + 0x110] }
    /* +0xbb5aec */ __asm { OR R10D,0x1 }
    /* +0xbb5af0 */ __asm { IMUL R11D,R10D }
    /* +0xbb5af4 */ __asm { MOV EAX,0xdc7a4132 }
    /* +0xbb5af9 */ __asm { MOV RDI,qword ptr [RBP + 0x1298] }
    /* +0xbb5b00 */ __asm { ADD EAX,EDI }
    /* +0xbb5b02 */ __asm { NOT EAX }
    /* +0xbb5b04 */ __asm { MOV ECX,ESI }
    /* +0xbb5b06 */ __asm { ROR R11W,CL }
    /* +0xbb5b0a */ __asm { MOV ECX,EDX }
    /* +0xbb5b0c */ __asm { ROR EAX,CL }
    /* +0xbb5b0e */ __asm { ADD EAX,0xb1229216 }
    /* +0xbb5b13 */ __asm { MOV R10,qword ptr [RBP + 0xf50] }
    /* +0xbb5b1a */ __asm { IMUL R10D,EAX }
    /* +0xbb5b1e */ __asm { MOV AX,0x4210 }
    /* +0xbb5b22 */ __asm { SUB EAX,R12D }
    /* +0xbb5b25 */ __asm { IMUL R9D,EAX,-0x6d8f }
    /* +0xbb5b2c */ __asm { ADD R9D,EDI }
    /* +0xbb5b2f */ __asm { NOT R9D }
    /* +0xbb5b32 */ __asm { MOV R14D,dword ptr [RBP + 0x1f0] }
    /* +0xbb5b39 */ __asm { IMUL R9D,R14D }
    /* +0xbb5b3d */ __asm { ADD R10D,R15D }
    /* +0xbb5b40 */ __asm { MOV AX,0xdc6b }
    /* +0xbb5b44 */ __asm { MOV CX,0xfa2f }
    /* +0xbb5b48 */ __asm { IMUL ECX,R14D }
    /* +0xbb5b4c */ __asm { MOV R15D,R12D }
    /* +0xbb5b4f */ __asm { SUB R15D,ESI }
    /* +0xbb5b52 */ __asm { ADD R15D,ECX }
    /* +0xbb5b55 */ __asm { ADD R15D,0xffffa6b3 }
    /* +0xbb5b5c */ __asm { IMUL R15D,dword ptr [RBP + 0x4a0] }
    /* +0xbb5b64 */ __asm { SUB R15D,dword ptr [RBP + 0x480] }
    /* +0xbb5b6b */ __asm { XOR R11D,EDI }
    /* +0xbb5b6e */ __asm { SUB EDI,EDX }
    /* +0xbb5b70 */ __asm { ADD EDI,EAX }
    /* +0xbb5b72 */ __asm { NOT R11D }
    /* +0xbb5b75 */ __asm { MOV ECX,EDX }
    /* +0xbb5b77 */ __asm { ROL R15W,CL }
    /* +0xbb5b7b */ __asm { MOVZX EAX,R11W }
    /* +0xbb5b7f */ __asm { MOV RCX,qword ptr [RBP + 0x560] }
    /* +0xbb5b86 */ __asm { ROL DI,CL }
    /* +0xbb5b89 */ __asm { MOV ECX,EBX }
    /* +0xbb5b8b */ __asm { ROR DI,CL }
    /* +0xbb5b8e */ __asm { MOV EAX,dword ptr [R8 + RAX*0x1 + 0xb4] }
    /* +0xbb5b96 */ __asm { XOR EDI,R12D }
    /* +0xbb5b99 */ __asm { XOR R9D,ESI }
    /* +0xbb5b9c */ __asm { NOT EDI }
    /* +0xbb5b9e */ __asm { ADD EDI,ESI }
    /* +0xbb5ba0 */ __asm { MOVZX EDX,R9W }
    /* +0xbb5ba4 */ __asm { MOVZX R11D,R15W }
    /* +0xbb5ba8 */ __asm { MOVZX R8D,DI }
    /* +0xbb5bac */ __asm { LEA R9,[RBP + 0x280] }
    /* +0xbb5bb3 */ __asm { MOV qword ptr [RSP + 0x30],R9 }
    /* +0xbb5bb8 */ __asm { MOV dword ptr [RSP + 0x28],R11D }
    /* +0xbb5bbd */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xbb5bc4 */ __asm { SYSCALL }
    /* +0xbb5bc6 */ __asm { MOV dword ptr [RBP + 0x120],0x38d55470 }
    /* +0xbb5bd0 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbb5bd7 */ __asm { MOV R10,qword ptr [RBP + 0x1350] }
    /* +0xbb5bde */ __asm { CMP dword ptr [RBP + 0x1b0],R10D }
    /* +0xbb5be5 */ __asm { NOP }
    /* +0xbb5be6 */ __asm { NOP }
    /* +0xbb5be7 */ __asm { NOP }
    /* +0xbb5be8 */ __asm { NOP }
    /* +0xbb5be9 */ __asm { NOP }
    /* +0xbb5bea */ __asm { NOP }
    /* +0xbb5beb */ __asm { NOP }
    /* +0xbb5bec */ __asm { NOP }
    /* +0xbb5bed */ __asm { MOV dword ptr [RBP + 0x5e0],0x308d9600 }
    /* +0xbb5bf7 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbb5bfe */ __asm { TEST R11D,R11D }
    /* +0xbb5c01 */ __asm { JS 0x7fffa538ce40 }
    /* +0xbb5c07 */ __asm { MOV ECX,0x5 }
    /* +0xbb5c0c */ __asm { INT 0x29 }
    /* +0xbb5c0e */ __asm { MOV R10D,0x9ed5bcc7 }
    /* +0xbb5c14 */ __asm { XOR R10D,0xe8534106 }
    /* +0xbb5c1b */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbb5c22 */ __asm { SUB R10D,ECX }
    /* +0xbb5c25 */ __asm { MOV EAX,0xca0917fa }
    /* +0xbb5c2a */ __asm { IMUL EDX,EAX,-0x19b3e45 }
    /* +0xbb5c30 */ __asm { MOV R8,qword ptr [RBP + 0x590] }
    /* +0xbb5c37 */ __asm { MOV RAX,R8 }
    /* +0xbb5c3a */ __asm { XOR RAX,-0x1600000 }
    /* +0xbb5c40 */ __asm { ADD R8,-0x1401000 }
    /* +0xbb5c47 */ __asm { NOT EDX }
    /* +0xbb5c49 */ __asm { ROL EDX,0xa }
    /* +0xbb5c4c */ __asm { ROL EDX,CL }
    /* +0xbb5c4e */ __asm { NOT EDX }
    /* +0xbb5c50 */ __asm { IMUL R10D,dword ptr [RBP + 0x110] }
    /* +0xbb5c58 */ __asm { XOR R10D,0x1ac80a02 }
    /* +0xbb5c5f */ __asm { CMP R10,RDX }
    /* +0xbb5c62 */ __asm { CMOVGE R8,RAX }
    /* +0xbb5c66 */ __asm { CMP R8,0x1fffff }
    /* +0xbb5c6d */ __asm { JA 0x7fffa533e6ab }
    /* +0xbb5c73 */ __asm { PSHUFD XMM5,XMM0,0x44 }
    /* +0xbb5c78 */ __asm { PSHUFD XMM1,XMM2,0xee }
    /* +0xbb5c7d */ __asm { PSHUFD XMM2,XMM2,0x44 }
    /* +0xbb5c82 */ __asm { MOV ECX,R9D }
    /* +0xbb5c85 */ __asm { PSHUFD XMM0,XMM0,0xee }
    /* +0xbb5c8a */ __asm { MOVDQA XMM3,XMM0 }
    /* +0xbb5c8e */ __asm { PXOR XMM3,XMM5 }
    /* +0xbb5c92 */ __asm { MOV R10,qword ptr [RBP + 0x590] }
    /* +0xbb5c99 */ __asm { SHR R10D,0xc }
    /* +0xbb5c9d */ __asm { MOVZX R10D,R10W }
    /* +0xbb5ca1 */ __asm { SHL R10,0x2c }
    /* +0xbb5ca5 */ __asm { OR R10,RCX }
    /* +0xbb5ca8 */ __asm { MOV RDX,R10 }
    /* +0xbb5cab */ __asm { NOT RDX }
    /* +0xbb5cae */ __asm { MOV R8,qword ptr [RBP + 0xc0] }
    /* +0xbb5cb5 */ __asm { ADD R8,0x10 }
    /* +0xbb5cb9 */ __asm { MOV RAX,-0x2 }
    /* +0xbb5cc0 */ __asm { MOV R9,qword ptr [RBP + 0x1038] }
    /* +0xbb5cc7 */ __asm { SUB R9D,dword ptr [RBP + 0x480] }
    /* +0xbb5cce */ __asm { MOVDQA XMM4,XMM0 }
    /* +0xbb5cd2 */ __asm { PSRLQ XMM4,0x20 }
    /* +0xbb5cd7 */ __asm { MOVDQA XMM14,XMM1 }
    /* +0xbb5cdc */ __asm { PSRLQ XMM14,0x20 }
    /* +0xbb5ce2 */ __asm { MOVDQA XMM12,XMM2 }
    /* +0xbb5ce7 */ __asm { PSRLQ XMM12,0x20 }
    /* +0xbb5ced */ __asm { MOV RBX,-0x2000000000 }
    /* +0xbb5cf7 */ __asm { JMP 0x7fffa5325e5e }
    /* +0xbb5cfc */ __asm { PAND XMM11,XMM13 }
    /* +0xbb5d01 */ __asm { MOVQ XMM8,R10 }
    /* +0xbb5d06 */ __asm { MOVQ XMM13,RDX }
    /* +0xbb5d0b */ __asm { PUNPCKLQDQ XMM13,XMM8 }
    /* +0xbb5d10 */ __asm { MOVDQA XMM8,XMM11 }
    /* +0xbb5d15 */ __asm { PSRLQ XMM8,0x8 }
    /* +0xbb5d1b */ __asm { MOVDQA XMM9,XMM11 }
    /* +0xbb5d20 */ __asm { PSLLQ XMM9,0x38 }
    /* +0xbb5d26 */ __asm { POR XMM9,XMM8 }
    /* +0xbb5d2b */ __asm { MOVDQA XMM8,XMM2 }
    /* +0xbb5d30 */ __asm { PXOR XMM8,XMM11 }
    /* +0xbb5d35 */ __asm { MOVDQA XMM10,XMM5 }
    /* +0xbb5d3a */ __asm { PSRLQ XMM10,0x20 }
    /* +0xbb5d40 */ __asm { PMULUDQ XMM10,XMM8 }
    /* +0xbb5d45 */ __asm { MOVDQA XMM7,XMM5 }
    /* +0xbb5d49 */ __asm { PMULUDQ XMM7,XMM8 }
    /* +0xbb5d4e */ __asm { PSRLQ XMM8,0x20 }
    /* +0xbb5d54 */ __asm { PMULUDQ XMM8,XMM5 }
    /* +0xbb5d59 */ __asm { PADDQ XMM8,XMM10 }
    /* +0xbb5d5e */ __asm { PSLLQ XMM8,0x20 }
    /* +0xbb5d64 */ __asm { PADDQ XMM8,XMM7 }
    /* +0xbb5d69 */ __asm { PSUBQ XMM8,XMM9 }
    /* +0xbb5d6e */ __asm { PXOR XMM15,XMM8 }
    /* +0xbb5d73 */ __asm { MOVDQA XMM9,XMM15 }
    /* +0xbb5d78 */ __asm { PSRLQ XMM9,0x4 }
    /* +0xbb5d7e */ __asm { MOVDQA XMM8,XMM15 }
    /* +0xbb5d83 */ __asm { PSLLQ XMM8,0x3c }
    /* +0xbb5d89 */ __asm { POR XMM8,XMM9 }
    /* +0xbb5d8e */ __asm { PSUBQ XMM8,XMM1 }
    /* +0xbb5d93 */ __asm { MOVDQA XMM9,XMM8 }
    /* +0xbb5d98 */ __asm { PMULUDQ XMM9,XMM12 }
    /* +0xbb5d9d */ __asm { MOVDQA XMM10,XMM8 }
    /* +0xbb5da2 */ __asm { PSRLQ XMM10,0x20 }
    /* +0xbb5da8 */ __asm { PMULUDQ XMM10,XMM2 }
    /* +0xbb5dad */ __asm { PADDQ XMM10,XMM9 }
    /* +0xbb5db2 */ __asm { PSLLQ XMM10,0x20 }
    /* +0xbb5db8 */ __asm { PMULUDQ XMM8,XMM2 }
    /* +0xbb5dbd */ __asm { PADDQ XMM8,XMM10 }
    /* +0xbb5dc2 */ __asm { PXOR XMM8,XMM11 }
    /* +0xbb5dc7 */ __asm { MOVDQA XMM11,XMM1 }
    /* +0xbb5dcc */ __asm { PXOR XMM11,XMM8 }
    /* +0xbb5dd1 */ __asm { MOVDQA XMM9,XMM12 }
    /* +0xbb5dd6 */ __asm { PMULUDQ XMM9,XMM11 }
    /* +0xbb5ddb */ __asm { MOVDQA XMM10,XMM2 }
    /* +0xbb5de0 */ __asm { PMULUDQ XMM10,XMM11 }
    /* +0xbb5de5 */ __asm { PSRLQ XMM11,0x20 }
    /* +0xbb5deb */ __asm { PMULUDQ XMM11,XMM2 }
    /* +0xbb5df0 */ __asm { PADDQ XMM11,XMM9 }
    /* +0xbb5df5 */ __asm { PSLLQ XMM11,0x20 }
    /* +0xbb5dfb */ __asm { PADDQ XMM11,XMM10 }
    /* +0xbb5e00 */ __asm { MOVDQA XMM9,XMM8 }
    /* +0xbb5e05 */ __asm { PXOR XMM9,XMM13 }
    /* +0xbb5e0a */ __asm { MOVDQA xmmword ptr [R8],XMM9 }
    /* +0xbb5e0f */ __asm { MOVDQA XMM9,XMM8 }
    /* +0xbb5e14 */ __asm { PSRLQ XMM9,0x9 }
    /* +0xbb5e1a */ __asm { PSLLQ XMM8,0x37 }
    /* +0xbb5e20 */ __asm { POR XMM8,XMM9 }
    /* +0xbb5e25 */ __asm { PSUBQ XMM11,XMM8 }
    /* +0xbb5e2a */ __asm { PXOR XMM15,XMM13 }
    /* +0xbb5e2f */ __asm { PXOR XMM15,XMM11 }
    /* +0xbb5e34 */ __asm { MOVDQA xmmword ptr [R8 + -0x10],XMM15 }
    /* +0xbb5e3a */ __asm { MOV RCX,0x2000000000 }
    /* +0xbb5e44 */ __asm { ADD R10,RCX }
    /* +0xbb5e47 */ __asm { ADD RDX,RBX }
    /* +0xbb5e4a */ __asm { ADD R8,0x20 }
    /* +0xbb5e4e */ __asm { ADD RAX,0x2 }
    /* +0xbb5e52 */ __asm { CMP RAX,0xfd }
    /* +0xbb5e58 */ __asm { JA 0x7fffa530aab0 }
    /* +0xbb5e5e */ __asm { MOV ECX,0xa0f0368f }
    /* +0xbb5e63 */ __asm { MOV EDI,0xaaa7141c }
    /* +0xbb5e68 */ __asm { ADD EDI,R9D }
    /* +0xbb5e6b */ __asm { ADD ECX,R11D }
    /* +0xbb5e6e */ __asm { MOV R15D,0x77c2dbb7 }
    /* +0xbb5e74 */ __asm { SUB R15D,ECX }
    /* +0xbb5e77 */ __asm { MOVDQA XMM13,xmmword ptr [R8 + -0x10] }
    /* +0xbb5e7d */ __asm { MOVDQA XMM15,XMM13 }
    /* +0xbb5e82 */ __asm { PSRLQ XMM15,0xd }
    /* +0xbb5e88 */ __asm { MOVDQA XMM11,XMM13 }
    /* +0xbb5e8d */ __asm { PSLLQ XMM11,0x33 }
    /* +0xbb5e93 */ __asm { POR XMM11,XMM15 }
    /* +0xbb5e98 */ __asm { MOVDQA XMM8,XMM13 }
    /* +0xbb5e9d */ __asm { PSUBQ XMM8,XMM1 }
    /* +0xbb5ea2 */ __asm { MOVDQA XMM15,XMM8 }
    /* +0xbb5ea7 */ __asm { PSRLQ XMM15,0x4 }
    /* +0xbb5ead */ __asm { PSLLQ XMM8,0x3c }
    /* +0xbb5eb3 */ __asm { POR XMM8,XMM15 }
    /* +0xbb5eb8 */ __asm { PSRLQ XMM8,0x20 }
    /* +0xbb5ebe */ __asm { PMULUDQ XMM8,XMM0 }
    /* +0xbb5ec3 */ __asm { MOVDQA XMM9,XMM4 }
    /* +0xbb5ec8 */ __asm { PMULUDQ XMM9,XMM15 }
    /* +0xbb5ecd */ __asm { PADDQ XMM9,XMM8 }
    /* +0xbb5ed2 */ __asm { PSLLQ XMM9,0x20 }
    /* +0xbb5ed8 */ __asm { PMULUDQ XMM15,XMM0 }
    /* +0xbb5edd */ __asm { PADDQ XMM15,XMM9 }
    /* +0xbb5ee2 */ __asm { PSUBQ XMM15,XMM11 }
    /* +0xbb5ee7 */ __asm { PXOR XMM15,xmmword ptr [R8] }
    /* +0xbb5eec */ __asm { MOVDQA XMM11,XMM15 }
    /* +0xbb5ef1 */ __asm { PSRLQ XMM11,0x7 }
    /* +0xbb5ef7 */ __asm { MOVDQA XMM8,XMM15 }
    /* +0xbb5efc */ __asm { PSLLQ XMM8,0x39 }
    /* +0xbb5f02 */ __asm { POR XMM8,XMM11 }
    /* +0xbb5f07 */ __asm { PSUBQ XMM8,XMM5 }
    /* +0xbb5f0c */ __asm { MOVDQA XMM11,XMM8 }
    /* +0xbb5f11 */ __asm { PMULUDQ XMM11,XMM14 }
    /* +0xbb5f16 */ __asm { MOVDQA XMM9,XMM8 }
    /* +0xbb5f1b */ __asm { PSRLQ XMM9,0x20 }
    /* +0xbb5f21 */ __asm { PMULUDQ XMM9,XMM1 }
    /* +0xbb5f26 */ __asm { PADDQ XMM9,XMM11 }
    /* +0xbb5f2b */ __asm { PSLLQ XMM9,0x20 }
    /* +0xbb5f31 */ __asm { PMULUDQ XMM8,XMM1 }
    /* +0xbb5f36 */ __asm { PADDQ XMM8,XMM9 }
    /* +0xbb5f3b */ __asm { PXOR XMM8,XMM13 }
    /* +0xbb5f40 */ __asm { MOVDQA XMM13,XMM8 }
    /* +0xbb5f45 */ __asm { PXOR XMM13,XMM1 }
    /* +0xbb5f4a */ __asm { MOVDQA XMM11,XMM2 }
    /* +0xbb5f4f */ __asm { PSUBQ XMM11,XMM13 }
    /* +0xbb5f54 */ __asm { PXOR XMM11,XMM15 }
    /* +0xbb5f59 */ __asm { MOVDQA XMM15,XMM11 }
    /* +0xbb5f5e */ __asm { PSRLQ XMM15,0xc }
    /* +0xbb5f64 */ __asm { MOVDQA XMM13,XMM11 }
    /* +0xbb5f69 */ __asm { PXOR XMM13,XMM5 }
    /* +0xbb5f6e */ __asm { MOVDQA XMM9,XMM12 }
    /* +0xbb5f73 */ __asm { PMULUDQ XMM9,XMM13 }
    /* +0xbb5f78 */ __asm { MOVDQA XMM10,XMM2 }
    /* +0xbb5f7d */ __asm { PMULUDQ XMM10,XMM13 }
    /* +0xbb5f82 */ __asm { PSRLQ XMM13,0x20 }
    /* +0xbb5f88 */ __asm { PMULUDQ XMM13,XMM2 }
    /* +0xbb5f8d */ __asm { PADDQ XMM13,XMM9 }
    /* +0xbb5f92 */ __asm { PSLLQ XMM13,0x20 }
    /* +0xbb5f98 */ __asm { PADDQ XMM13,XMM10 }
    /* +0xbb5f9d */ __asm { PXOR XMM15,XMM8 }
    /* +0xbb5fa2 */ __asm { PXOR XMM15,XMM13 }
    /* +0xbb5fa7 */ __asm { MOVDQA XMM13,XMM15 }
    /* +0xbb5fac */ __asm { MOV RCX,qword ptr [RBP + 0x510] }
    /* +0xbb5fb3 */ __asm { ROR R15D,CL }
    /* +0xbb5fb6 */ __asm { PXOR XMM13,XMM3 }
    /* +0xbb5fbb */ __asm { MOVSXD RCX,R15D }
    /* +0xbb5fbe */ __asm { XOR EDI,dword ptr [RBP + 0x1298] }
    /* +0xbb5fc4 */ __asm { ROL EDI,0x1c }
    /* +0xbb5fc7 */ __asm { CMP RDI,RCX }
    /* +0xbb5fca */ __asm { JA 0x7fffa5325cfc }
    /* +0xbb5fd0 */ __asm { PXOR XMM11,XMM13 }
    /* +0xbb5fd5 */ __asm { JMP 0x7fffa5325d01 }
    /* +0xbb63f3 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xbb63fa */ __asm { MOV R8,0x0 }
    /* +0xbb6401 */ __asm { NOP }
    /* +0xbb6403 */ __asm { MOV dword ptr [RBP + 0x5e0],0x492e18f4 }
    /* +0xbb640d */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbb6414 */ __asm { TEST R11B,0x1 }
    /* +0xbb6418 */ __asm { JNZ 0x7fffa538ce48 }
    /* +0xbb641e */ __asm { RDTSC }
    /* +0xbb6420 */ __asm { SHL RDX,0x20 }
    /* +0xbb6424 */ __asm { OR RDX,RAX }
    /* +0xbb6427 */ __asm { MOV R11,-0x4a9b10dd1385131b }
    /* +0xbb6431 */ __asm { IMUL R11,RDX }
    /* +0xbb6435 */ __asm { MOV RCX,-0x77c43d998429de }
    /* +0xbb643f */ __asm { ADD RCX,R11 }
    /* +0xbb6442 */ __asm { MOV R10,RCX }
    /* +0xbb6445 */ __asm { SHR R10,0x2d }
    /* +0xbb6449 */ __asm { MOV R9,RCX }
    /* +0xbb644c */ __asm { SHR R9,0x1b }
    /* +0xbb6450 */ __asm { XOR R9D,R10D }
    /* +0xbb6453 */ __asm { SHR RCX,0x3b }
    /* +0xbb6457 */ __asm { ROR R9D,CL }
    /* +0xbb645a */ __asm { JMP 0x7fffa530948d }
    /* +0xbb688e */ __asm { MOV R11W,0x63a }
    /* +0xbb6893 */ __asm { XOR R11D,dword ptr [RBP + 0x5d8] }
    /* +0xbb689a */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbb68a1 */ __asm { ROR R11W,CL }
    /* +0xbb68a5 */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xbb68ac */ __asm { IMUL R11D,R11D,0x72af }
    /* +0xbb68b3 */ __asm { MOVZX R10D,R11W }
    /* +0xbb68b7 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xbb68bb */ __asm { MOV RDX,-0x5cd84052f865ba9d }
    /* +0xbb68c5 */ __asm { CMP qword ptr [R11 + 0x60],RDX }
    /* +0xbb68c9 */ __asm { NOP }
    /* +0xbb68ca */ __asm { NOP }
    /* +0xbb68cb */ __asm { NOP }
    /* +0xbb68cc */ __asm { NOP }
    /* +0xbb68cd */ __asm { NOP }
    /* +0xbb68ce */ __asm { NOP }
    /* +0xbb68cf */ __asm { NOP }
    /* +0xbb68d0 */ __asm { NOP }
    /* +0xbb68d1 */ __asm { NOP }
    /* +0xbb68d2 */ __asm { NOP }
    /* +0xbb68d3 */ __asm { NOP }
    /* +0xbb68d4 */ __asm { NOP }
    /* +0xbb68d5 */ __asm { NOP }
    /* +0xbb68d6 */ __asm { NOP }
    /* +0xbb68d7 */ __asm { NOP }
    /* +0xbb68d8 */ __asm { NOP }
    /* +0xbb68d9 */ __asm { NOP }
    /* +0xbb7102 */ __asm { MOV R8D,0x1000 }
    /* +0xbb7108 */ __asm { MOV RCX,-0x1 }
    /* +0xbb710f */ __asm { MOV RDX,qword ptr [RBP + 0xa0] }
    /* +0xbb7116 */ __asm { CALL R12 }
    /* +0xbb7119 */ __asm { MOV R8D,0x1000 }
    /* +0xbb711f */ __asm { MOV RCX,-0x1 }
    /* +0xbb7126 */ __asm { MOV RDX,qword ptr [RBP + 0x12e0] }
    /* +0xbb712d */ __asm { CALL R12 }
    /* +0xbb7130 */ __asm { MOV dword ptr [RBP + 0x5e0],0xa7c6714e }
    /* +0xbb713a */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbb7141 */ __asm { MOV R11D,0x76bbe1eb }
    /* +0xbb7147 */ __asm { IMUL R11D,dword ptr [RBP + 0xe8] }
    /* +0xbb714f */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbb7156 */ __asm { ROL R11D,CL }
    /* +0xbb7159 */ __asm { ADD R11D,dword ptr [RBP + 0x5d8] }
    /* +0xbb7160 */ __asm { ROL R11D,0x1c }
    /* +0xbb7164 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xbb716b */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbb7172 */ __asm { MOV R11,qword ptr [RBP + 0xa0] }
    /* +0xbb7179 */ __asm { MOV qword ptr [RBP + 0x120],R11 }
    /* +0xbb7180 */ __asm { MOV qword ptr [RBP + 0x1210],0x1000 }
    /* +0xbb718b */ __asm { MOV dword ptr [RBP + 0x4e0],0x0 }
    /* +0xbb7195 */ __asm { RDTSC }
    /* +0xbb7197 */ __asm { SHL RDX,0x20 }
    /* +0xbb719b */ __asm { OR RDX,RAX }
    /* +0xbb719e */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xbb71a8 */ __asm { IMUL RDX,R11 }
    /* +0xbb71ac */ __asm { MOV R10,-0x22b18422c4a9c65e }
    /* +0xbb71b6 */ __asm { ADD R10,RDX }
    /* +0xbb71b9 */ __asm { MOV RCX,R10 }
    /* +0xbb71bc */ __asm { SHR RCX,0x3b }
    /* +0xbb71c0 */ __asm { MOV RDX,R10 }
    /* +0xbb71c3 */ __asm { SHR RDX,0x1b }
    /* +0xbb71c7 */ __asm { SHR R10,0x2d }
    /* +0xbb71cb */ __asm { XOR R10D,EDX }
    /* +0xbb71ce */ __asm { ROR R10D,CL }
    /* +0xbb71d1 */ __asm { AND R10D,0x3 }
    /* +0xbb71d5 */ __asm { CMP R10D,0x2 }
    /* +0xbb71d9 */ __asm { JNC 0x7fffa53273f3 }
    /* +0xbb71df */ __asm { CMP R10D,0x1 }
    /* +0xbb71e3 */ __asm { JZ 0x7fffa532767e }
    /* +0xbb71e9 */ __asm { PXOR XMM0,XMM0 }
    /* +0xbb71ed */ __asm { MOVDQA xmmword ptr [RBP + 0x5e0],XMM0 }
    /* +0xbb71f5 */ __asm { MOV dword ptr [RBP + 0x1070],0x6792b6a0 }
    /* +0xbb71ff */ __asm { MOV R11D,dword ptr [RBP + 0x1070] }
    /* +0xbb7206 */ __asm { PUSHFQ }
    /* +0xbb7207 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xbb720f */ __asm { POPFQ }
    /* +0xbb7210 */ __asm { MOV dword ptr [RBP + 0x5e0],0x0 }
    /* +0xbb721a */ __asm { MOV dword ptr [RBP + 0x1070],0xaf63e3e4 }
    /* +0xbb7224 */ __asm { MOV R11D,dword ptr [RBP + 0x1070] }
    /* +0xbb722b */ __asm { TEST R11D,R11D }
    /* +0xbb722e */ __asm { JNS 0x7fffa538cf0e }
    /* +0xbb7234 */ __asm { MOV R10,qword ptr [RBP + 0x1260] }
    /* +0xbb723b */ __asm { CMP dword ptr [RBP + 0x4b0],R10D }
    /* +0xbb7242 */ __asm { NOP }
    /* +0xbb7243 */ __asm { NOP }
    /* +0xbb7244 */ __asm { NOP }
    /* +0xbb7245 */ __asm { NOP }
    /* +0xbb7246 */ __asm { NOP }
    /* +0xbb7247 */ __asm { MOV dword ptr [RBP + 0x1070],0x92410210 }
    /* +0xbb7251 */ __asm { MOV R11D,dword ptr [RBP + 0x1070] }
    /* +0xbb7258 */ __asm { CMP R11D,0xfb3e3d6 }
    /* +0xbb725f */ __asm { NOP }
    /* +0xbb7260 */ __asm { NOP }
    /* +0xbb7261 */ __asm { NOP }
    /* +0xbb7262 */ __asm { NOP }
    /* +0xbb7263 */ __asm { NOP }
    /* +0xbb7264 */ __asm { LEA R8,[0x7fffa47c0309] }
    /* +0xbb726b */ __asm { MOV R11,-0x1b51cbf7817a5f2 }
    /* +0xbb7275 */ __asm { CMP R8,R11 }
    /* +0xbb7278 */ __asm { JZ 0x7fffa538cf14 }
    /* +0xbb727e */ __asm { MOV R11D,0x780abddd }
    /* +0xbb7284 */ __asm { MOV RSI,qword ptr [RBP + 0x1038] }
    /* +0xbb728b */ __asm { SUB R11D,ESI }
    /* +0xbb728e */ __asm { MOV RAX,-0x536dfb0727767142 }
    /* +0xbb7298 */ __asm { MOV R9W,0x7a8c }
    /* +0xbb729d */ __asm { MOV R10W,0x99b4 }
    /* +0xbb72a2 */ __asm { MOV EDX,0x97966995 }
    /* +0xbb72a7 */ __asm { ADD RDX,RAX }
    /* +0xbb72aa */ __asm { MOV EAX,0xffffbffa }
    /* +0xbb72af */ __asm { SUB EAX,R10D }
    /* +0xbb72b2 */ __asm { MOV RCX,qword ptr [RBP + 0x188] }
    /* +0xbb72b9 */ __asm { MOV R10D,ECX }
    /* +0xbb72bc */ __asm { IMUL R10D,EAX }
    /* +0xbb72c0 */ __asm { MOV RAX,qword ptr [RBP + 0x1f0] }
    /* +0xbb72c7 */ __asm { ROL R11D,0x2 }
    /* +0xbb72cb */ __asm { SUB EAX,dword ptr [RBP + 0x1298] }
    /* +0xbb72d1 */ __asm { ADD R11D,EAX }
    /* +0xbb72d4 */ __asm { LEA RDI,[0x7fffa47bbad5] }
    /* +0xbb72db */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xbb72e2 */ __asm { ROR RDX,CL }
    /* +0xbb72e5 */ __asm { ROL R10W,0x8 }
    /* +0xbb72ea */ __asm { MOV RBX,qword ptr [RBP + 0x4d8] }
    /* +0xbb72f1 */ __asm { ADD RBX,RDX }
    /* +0xbb72f4 */ __asm { MOV qword ptr [RBP + 0x1070],RCX }
    /* +0xbb72fb */ __asm { MOV RCX,qword ptr [RBP + 0x4a0] }
    /* +0xbb7302 */ __asm { IMUL R10D,ECX }
    /* +0xbb7306 */ __asm { MOVZX EDX,R10W }
    /* +0xbb730a */ __asm { NOT R11D }
    /* +0xbb730d */ __asm { MOVSXD R10,R11D }
    /* +0xbb7310 */ __asm { MOV RAX,qword ptr [RBP + 0x5d8] }
    /* +0xbb7317 */ __asm { LEA R11D,[R9 + RAX*0x1] }
    /* +0xbb731b */ __asm { ADD R11D,0xfffffd94 }
    /* +0xbb7322 */ __asm { ROL R11W,0x8 }
    /* +0xbb7327 */ __asm { XOR R11D,ESI }
    /* +0xbb732a */ __asm { IMUL R11D,ECX }
    /* +0xbb732e */ __asm { MOVZX R9D,R11W }
    /* +0xbb7332 */ __asm { MOV EAX,dword ptr [R8 + -0x3e41] }
    /* +0xbb7339 */ __asm { LEA R8,[RBP + 0x5e0] }
}


// ============================================================================
// Function : FUN_7fffa5327fcc  |  RVA: 0xbb7fcc  |  Size: 37 bytes
// Callers  : FUN_7fffa5381000@0xc11000
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5327fcc(void) {
    /* +0xbb7fcc */ __asm { LEA R8,[0x7fffa4789613] }
    /* +0xbb7fd3 */ __asm { MOV R11,0x34cd010095898357 }
    /* +0xbb7fdd */ __asm { CMP R8,R11 }
    /* +0xbb7fe0 */ __asm { NOP }
    /* +0xbb7fe1 */ __asm { NOP }
    /* +0xbb7fe2 */ __asm { NOP }
    /* +0xbb7fe3 */ __asm { NOP }
    /* +0xbb7fe4 */ __asm { NOP }
    /* +0xbb7fe5 */ __asm { NOP }
    /* +0xbb7fe6 */ __asm { NOP }
    /* +0xbb7fe7 */ __asm { NOP }
    /* +0xbb7fe8 */ __asm { NOP }
    /* +0xbb7fe9 */ __asm { NOP }
    /* +0xbb7fea */ __asm { NOP }
    /* +0xbb7feb */ __asm { NOP }
    /* +0xbb7fec */ __asm { NOP }
    /* +0xbb7fed */ __asm { NOP }
    /* +0xbb7fee */ __asm { NOP }
    /* +0xbb7fef */ __asm { NOP }
    /* +0xbb7ff0 */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa53280f9  |  RVA: 0xbb80f9  |  Size: 8228 bytes
// Callers  : FUN_7fffa532595c@0xbb595c
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa53280f9(void) {
    /* +0xbb80f9 */ __asm { MOVZX R9D,R11W }
    /* +0xbb80fd */ __asm { LEA R11,[RBP + 0x4e0] }
    /* +0xbb8104 */ __asm { MOV qword ptr [RSP + 0x28],R11 }
    /* +0xbb8109 */ __asm { LEA RDX,[RBP + 0x120] }
    /* +0xbb8110 */ __asm { LEA R8,[RBP + 0x1210] }
    /* +0xbb8117 */ __asm { SYSCALL }
    /* +0xbb8119 */ __asm { TEST EAX,EAX }
    /* +0xbb811b */ __asm { JS 0x7fffa5328487 }
    /* +0xbb8121 */ __asm { MOV dword ptr [RBP + 0x5e0],0x398dc00 }
    /* +0xbb812b */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbb8132 */ __asm { TEST R11D,R11D }
    /* +0xbb8135 */ __asm { JS 0x7fffa538cfbb }
    /* +0xbb813b */ __asm { MOV R11D,0x212c0f70 }
    /* +0xbb8141 */ __asm { PUSHFQ }
    /* +0xbb8142 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xbb814a */ __asm { POPFQ }
    /* +0xbb814b */ __asm { MOV R8,qword ptr [RBP + 0x1038] }
    /* +0xbb8152 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbb8159 */ __asm { LEA R10D,[RCX + R8*0x1] }
    /* +0xbb815d */ __asm { SUB R10D,dword ptr [RBP + 0x1350] }
    /* +0xbb8164 */ __asm { ADD R10D,R11D }
    /* +0xbb8167 */ __asm { MOV R11D,0xd8e4b811 }
    /* +0xbb816d */ __asm { XOR R11,R10 }
    /* +0xbb8170 */ __asm { MOV R10,qword ptr [R11] }
    /* +0xbb8173 */ __asm { MOV R9D,0x32283a29 }
    /* +0xbb8179 */ __asm { SUB R9D,dword ptr [RBP + 0x5d8] }
    /* +0xbb8180 */ __asm { ADD R9D,0x3b5fef46 }
    /* +0xbb8187 */ __asm { ROR R9D,CL }
    /* +0xbb818a */ __asm { MOV EDX,R10D }
    /* +0xbb818d */ __asm { IMUL R9D,dword ptr [RBP + 0xe8] }
    /* +0xbb8195 */ __asm { ROL R9D,0x10 }
    /* +0xbb8199 */ __asm { SHR R10,0x18 }
    /* +0xbb819d */ __asm { AND R10,-0x100 }
    /* +0xbb81a4 */ __asm { MOV ECX,dword ptr [R9] }
    /* +0xbb81a7 */ __asm { IMUL R10,RCX }
    /* +0xbb81ab */ __asm { IMUL RDX,RCX }
    /* +0xbb81af */ __asm { SHR RDX,0x18 }
    /* +0xbb81b3 */ __asm { MOV R13,RDX }
    /* +0xbb81b6 */ __asm { ADD R10,RDX }
    /* +0xbb81b9 */ __asm { MOV RBX,R10 }
    /* +0xbb81bc */ __asm { CMP qword ptr [RBP + 0xf60],0x0 }
    /* +0xbb81c4 */ __asm { JZ 0x7fffa5328293 }
    /* +0xbb81ca */ __asm { MOV R9D,0xe5557626 }
    /* +0xbb81d0 */ __asm { ADD R9D,0xaf083469 }
    /* +0xbb81d7 */ __asm { MOV RAX,RBX }
    /* +0xbb81da */ __asm { SUB RAX,qword ptr [RBP + 0xf60] }
    /* +0xbb81e1 */ __asm { MOV R8D,0x962e89b0 }
    /* +0xbb81e7 */ __asm { ADD R8D,dword ptr [RBP + 0x5d8] }
    /* +0xbb81ee */ __asm { MOV R11D,EAX }
    /* +0xbb81f1 */ __asm { SHR R11D,0x8 }
    /* +0xbb81f5 */ __asm { MOV R15D,EAX }
    /* +0xbb81f8 */ __asm { SHR R15D,0x18 }
    /* +0xbb81fc */ __asm { NOT R8D }
    /* +0xbb81ff */ __asm { MOV RSI,qword ptr [RBP + 0x1298] }
    /* +0xbb8206 */ __asm { MOV ECX,ESI }
    /* +0xbb8208 */ __asm { ROR R8D,CL }
    /* +0xbb820b */ __asm { MOV R12D,EAX }
    /* +0xbb820e */ __asm { NOT R12B }
    /* +0xbb8211 */ __asm { ROR R12B,0x1 }
    /* +0xbb8214 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xbb821b */ __asm { XOR R9D,EDI }
    /* +0xbb821e */ __asm { ROL R9D,CL }
    /* +0xbb8221 */ __asm { NOT R11B }
    /* +0xbb8224 */ __asm { XOR R8D,EDI }
    /* +0xbb8227 */ __asm { MOV RDX,qword ptr [RBP + 0x560] }
    /* +0xbb822e */ __asm { MOVZX ECX,uint8_t ptr [RDX + 0xdf] }
    /* +0xbb8235 */ __asm { INC CL }
    /* +0xbb8237 */ __asm { XOR R9D,0x41d16c4a }
    /* +0xbb823e */ __asm { SUB R9D,dword ptr [RBP + 0x1350] }
    /* +0xbb8245 */ __asm { MOV R14D,EAX }
    /* +0xbb8248 */ __asm { SHR R14D,0x10 }
    /* +0xbb824c */ __asm { NOT R14B }
    /* +0xbb824f */ __asm { ROR R14B,0x1 }
    /* +0xbb8252 */ __asm { ROR R11B,0x1 }
    /* +0xbb8255 */ __asm { OR AL,0x18 }
    /* +0xbb8257 */ __asm { CMP R9,R8 }
    /* +0xbb825a */ __asm { MOVZX EAX,AL }
    /* +0xbb825d */ __asm { CMOVNC EAX,R15D }
    /* +0xbb8261 */ __asm { NOT AL }
    /* +0xbb8263 */ __asm { ROR AL,0x1 }
    /* +0xbb8265 */ __asm { AND CL,0x3 }
    /* +0xbb8268 */ __asm { MOVZX R8D,CL }
    /* +0xbb826c */ __asm { MOV uint8_t ptr [RDX + R8*0x4 + 0xf2],R14B }
    /* +0xbb8274 */ __asm { MOV uint8_t ptr [RDX + R8*0x4 + 0xf3],AL }
    /* +0xbb827c */ __asm { MOV uint8_t ptr [RDX + R8*0x4 + 0xf0],R12B }
    /* +0xbb8284 */ __asm { MOV uint8_t ptr [RDX + R8*0x4 + 0xf1],R11B }
    /* +0xbb828c */ __asm { MOV uint8_t ptr [RDX + 0xdf],R8B }
    /* +0xbb8293 */ __asm { MOV dword ptr [RBP + 0x5e0],0x44227e91 }
    /* +0xbb829d */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbb82a4 */ __asm { MOV R8D,0xb3af8ac0 }
    /* +0xbb82aa */ __asm { MOV R10,qword ptr [RBP + 0x1350] }
    /* +0xbb82b1 */ __asm { MOV R15D,R10D }
    /* +0xbb82b4 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbb82bb */ __asm { SUB R15D,ECX }
    /* +0xbb82be */ __asm { MOV RDX,RBX }
    /* +0xbb82c1 */ __asm { MOV R11D,EDX }
    /* +0xbb82c4 */ __asm { SHR R11D,0x10 }
    /* +0xbb82c8 */ __asm { ROR R11B,0x1 }
    /* +0xbb82cb */ __asm { MOV dword ptr [RBP + 0x590],R11D }
    /* +0xbb82d2 */ __asm { MOV RBX,qword ptr [RBP + 0x1038] }
    /* +0xbb82d9 */ __asm { XOR R8D,EBX }
    /* +0xbb82dc */ __asm { MOV R11,RDX }
    /* +0xbb82df */ __asm { SHR R11,0x30 }
    /* +0xbb82e3 */ __asm { MOV R12D,0x82ede9b1 }
    /* +0xbb82e9 */ __asm { MOV EAX,0x51cf1229 }
    /* +0xbb82ee */ __asm { SUB EAX,EBX }
    /* +0xbb82f0 */ __asm { XOR EAX,ECX }
    /* +0xbb82f2 */ __asm { SUB EAX,dword ptr [RBP + 0x480] }
    /* +0xbb82f8 */ __asm { MOV R14D,R10D }
    /* +0xbb82fb */ __asm { OR R14D,0x1 }
    /* +0xbb82ff */ __asm { IMUL R14D,R12D }
    /* +0xbb8303 */ __asm { ROL R14D,CL }
    /* +0xbb8306 */ __asm { MOV R12D,0x1e35218a }
    /* +0xbb830c */ __asm { ROR R8D,0x1 }
    /* +0xbb830f */ __asm { IMUL R9D,R8D,0x5121a783 }
    /* +0xbb8316 */ __asm { ADD R9D,R15D }
    /* +0xbb8319 */ __asm { MOV qword ptr [RBP + 0x1b0],R9 }
    /* +0xbb8320 */ __asm { XOR R12D,ECX }
    /* +0xbb8323 */ __asm { IMUL EDI,R12D,0x8748649 }
    /* +0xbb832a */ __asm { MOV ECX,EBX }
    /* +0xbb832c */ __asm { ROL EDI,CL }
    /* +0xbb832e */ __asm { MOV R8,RDX }
    /* +0xbb8331 */ __asm { MOV ECX,R8D }
    /* +0xbb8334 */ __asm { SHR ECX,0x18 }
    /* +0xbb8337 */ __asm { ADD EDI,0xe2714bc2 }
    /* +0xbb833d */ __asm { XOR EDI,R10D }
    /* +0xbb8340 */ __asm { MOV RSI,RDX }
    /* +0xbb8343 */ __asm { SHR RSI,0x28 }
    /* +0xbb8347 */ __asm { ROR SIL,0x1 }
    /* +0xbb834a */ __asm { MOV RDX,qword ptr [RBP + 0x560] }
    /* +0xbb8351 */ __asm { MOVZX R15D,uint8_t ptr [RDX + 0x4c] }
    /* +0xbb8356 */ __asm { IMUL R12D,R15D,0x2aaaaaab }
    /* +0xbb835d */ __asm { ADD R12D,0x2aaaaaab }
    /* +0xbb8364 */ __asm { ADD EAX,0x66bd582b }
    /* +0xbb8369 */ __asm { ROL EAX,0x13 }
    /* +0xbb836c */ __asm { ROR CL,0x1 }
    /* +0xbb836e */ __asm { MOV R10,R13 }
    /* +0xbb8371 */ __asm { ROR R10B,0x1 }
    /* +0xbb8374 */ __asm { MOVZX R9D,uint8_t ptr [RBP + 0x510] }
    /* +0xbb837c */ __asm { AND R9B,0xfe }
    /* +0xbb8380 */ __asm { ADD R14D,EBX }
    /* +0xbb8383 */ __asm { IMUL R15D,R14D,-0xfe281b }
    /* +0xbb838a */ __asm { MOVSXD RBX,R15D }
    /* +0xbb838d */ __asm { MOV R13,R8 }
    /* +0xbb8390 */ __asm { SHR R13,0x38 }
    /* +0xbb8394 */ __asm { LEA R14,[R12 + -0x6] }
    /* +0xbb8399 */ __asm { ADD R12,R12 }
    /* +0xbb839c */ __asm { MOV R15D,R8D }
    /* +0xbb839f */ __asm { SHR R15D,0x8 }
    /* +0xbb83a3 */ __asm { ROR R15B,0x1 }
    /* +0xbb83a6 */ __asm { ROR R11B,0x1 }
    /* +0xbb83a9 */ __asm { CMP RBX,RAX }
    /* +0xbb83ac */ __asm { LEA RAX,[R12 + R12*0x2] }
    /* +0xbb83b0 */ __asm { CMOVC RAX,R14 }
    /* +0xbb83b4 */ __asm { MOV RBX,qword ptr [RBP + 0x1b0] }
    /* +0xbb83bb */ __asm { SHR RAX,0x20 }
    /* +0xbb83bf */ __asm { ROR R13B,0x1 }
    /* +0xbb83c2 */ __asm { MOV R12,qword ptr [RBP + 0x110] }
    /* +0xbb83c9 */ __asm { XOR R13B,uint8_t ptr [RDX + R12*0x1] }
    /* +0xbb83cd */ __asm { XOR CL,uint8_t ptr [RDX + 0x8a] }
    /* +0xbb83d3 */ __asm { XOR R15B,uint8_t ptr [RDX + 0x88] }
    /* +0xbb83da */ __asm { NOT R15B }
    /* +0xbb83dd */ __asm { XOR SIL,uint8_t ptr [RDX + 0x8c] }
    /* +0xbb83e4 */ __asm { XOR R11B,uint8_t ptr [RDX + 0x8d] }
    /* +0xbb83eb */ __asm { MOV uint8_t ptr [RDX + RAX*0x8 + 0x58],R15B }
    /* +0xbb83f0 */ __asm { NOT R11B }
    /* +0xbb83f3 */ __asm { MOV R15D,dword ptr [RBP + 0x590] }
    /* +0xbb83fa */ __asm { XOR R15B,uint8_t ptr [RDX + 0x89] }
    /* +0xbb8401 */ __asm { MOV uint8_t ptr [RDX + RAX*0x8 + 0x5d],R11B }
    /* +0xbb8406 */ __asm { SHR R8,0x20 }
    /* +0xbb840a */ __asm { ROR R8B,0x1 }
    /* +0xbb840d */ __asm { NOT CL }
    /* +0xbb840f */ __asm { XOR R8B,uint8_t ptr [RDX + 0x8b] }
    /* +0xbb8416 */ __asm { MOV R12,R8 }
    /* +0xbb8419 */ __asm { MOV uint8_t ptr [RDX + RAX*0x8 + 0x5a],CL }
    /* +0xbb841d */ __asm { NOT SIL }
    /* +0xbb8420 */ __asm { MOV uint8_t ptr [RDX + RAX*0x8 + 0x5c],SIL }
    /* +0xbb8425 */ __asm { MOV R11D,R15D }
    /* +0xbb8428 */ __asm { NOT R11B }
    /* +0xbb842b */ __asm { MOV uint8_t ptr [RDX + RAX*0x8 + 0x59],R11B }
    /* +0xbb8430 */ __asm { XOR R10B,uint8_t ptr [RDX + 0x87] }
    /* +0xbb8437 */ __asm { CMP RDI,RBX }
    /* +0xbb843a */ __asm { NOT R10B }
    /* +0xbb843d */ __asm { MOV uint8_t ptr [RDX + RAX*0x8 + 0x57],R10B }
    /* +0xbb8442 */ __asm { LEA R11D,[R13 + 0x1] }
    /* +0xbb8446 */ __asm { NOT R13B }
    /* +0xbb8449 */ __asm { MOVZX R11D,R11B }
    /* +0xbb844d */ __asm { MOVZX R8D,R13B }
    /* +0xbb8451 */ __asm { CMOVBE R8D,R11D }
    /* +0xbb8455 */ __asm { MOV uint8_t ptr [RDX + RAX*0x8 + 0x5e],R8B }
    /* +0xbb845a */ __asm { NOT R12B }
    /* +0xbb845d */ __asm { MOV uint8_t ptr [RDX + RAX*0x8 + 0x5b],R12B }
    /* +0xbb8462 */ __asm { MOVZX ECX,uint8_t ptr [RDX + 0x16] }
    /* +0xbb8466 */ __asm { MOV uint8_t ptr [RDX + 0x4c],AL }
    /* +0xbb8469 */ __asm { INC CL }
    /* +0xbb846b */ __asm { MOVZX R8D,CL }
    /* +0xbb846f */ __asm { AND R8D,0x3 }
    /* +0xbb8473 */ __asm { XOR R9B,uint8_t ptr [RDX + 0x30] }
    /* +0xbb8477 */ __asm { NOT R9B }
    /* +0xbb847a */ __asm { ROL R9B,0x2 }
    /* +0xbb847e */ __asm { MOV uint8_t ptr [RDX + R8*0x1 + 0x1c],R9B }
    /* +0xbb8483 */ __asm { MOV uint8_t ptr [RDX + 0x16],R8B }
    /* +0xbb8487 */ __asm { MOV RAX,qword ptr [RBP + 0x290] }
    /* +0xbb848e */ __asm { MOVDQA XMM13,xmmword ptr [RBP + 0x250] }
    /* +0xbb8497 */ __asm { MOV R11,qword ptr [RBP + 0x3b0] }
    /* +0xbb849e */ __asm { AND R11D,0xfffff000 }
    /* +0xbb84a5 */ __asm { MOV RDX,qword ptr [RBP + 0xf50] }
    /* +0xbb84ac */ __asm { AND EDX,0xfffff000 }
    /* +0xbb84b2 */ __asm { MOV R15,qword ptr [RBP + 0x5d8] }
    /* +0xbb84b9 */ __asm { MOV qword ptr [RBP + 0x510],R11 }
    /* +0xbb84c0 */ __asm { MOV qword ptr [RBP + 0xf50],RDX }
    /* +0xbb84c7 */ __asm { MOV R11W,0xda75 }
    /* +0xbb84cc */ __asm { MOV R8,qword ptr [RBP + 0x1038] }
    /* +0xbb84d3 */ __asm { MOV R10D,R8D }
    /* +0xbb84d6 */ __asm { XOR R10D,R11D }
    /* +0xbb84d9 */ __asm { ADD R10D,R15D }
    /* +0xbb84dc */ __asm { NOT R10D }
    /* +0xbb84df */ __asm { MOV RSI,qword ptr [RBP + 0x1048] }
    /* +0xbb84e6 */ __asm { MOV ECX,ESI }
    /* +0xbb84e8 */ __asm { ROR R10W,CL }
    /* +0xbb84ec */ __asm { MOVZX R10D,R10W }
    /* +0xbb84f0 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xbb84f4 */ __asm { MOV RDX,0x5a6d21c56991e812 }
    /* +0xbb84fe */ __asm { MOV R9,qword ptr [RBP + 0x1298] }
    /* +0xbb8505 */ __asm { SUB RDX,R9 }
    /* +0xbb8508 */ __asm { XOR RDX,0x761d2a88 }
    /* +0xbb850f */ __asm { MOV ECX,R15D }
    /* +0xbb8512 */ __asm { ROL RDX,CL }
    /* +0xbb8515 */ __asm { XOR RDX,R8 }
    /* +0xbb8518 */ __asm { CMP qword ptr [R11 + 0xf40],RDX }
    /* +0xbb851f */ __asm { MOV R8,qword ptr [RBP + 0x1c0] }
    /* +0xbb8526 */ __asm { NOP }
    /* +0xbb8527 */ __asm { NOP }
    /* +0xbb8528 */ __asm { NOP }
    /* +0xbb8529 */ __asm { NOP }
    /* +0xbb852a */ __asm { NOP }
    /* +0xbb852b */ __asm { MOV R10,qword ptr [RBP + 0x3b0] }
    /* +0xbb8532 */ __asm { MOV ECX,R10D }
    /* +0xbb8535 */ __asm { MOV qword ptr [RBP + 0x590],RCX }
    /* +0xbb853c */ __asm { CMP uint8_t ptr [RBP + 0x210],0x0 }
    /* +0xbb8543 */ __asm { MOV RBX,qword ptr [RBP + 0xe8] }
    /* +0xbb854a */ __asm { MOV qword ptr [RBP + 0x290],RAX }
    /* +0xbb8551 */ __asm { MOV RAX,qword ptr [RBP + 0x1270] }
    /* +0xbb8558 */ __asm { JZ 0x7fffa5328575 }
    /* +0xbb855a */ __asm { MOV CL,0xeb }
    /* +0xbb855c */ __asm { CMP dword ptr [RBP + 0x100],R10D }
    /* +0xbb8563 */ __asm { JZ 0x7fffa532859b }
    /* +0xbb8565 */ __asm { MOV uint8_t ptr [RBP + 0x120],0xe9 }
    /* +0xbb856c */ __asm { LEA R11,[RBP + 0x121] }
    /* +0xbb8573 */ __asm { JMP 0x7fffa53285da }
    /* +0xbb8575 */ __asm { CMP dword ptr [RBP + 0x100],R10D }
    /* +0xbb857c */ __asm { JNZ 0x7fffa53285b9 }
    /* +0xbb857e */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xbb8585 */ __asm { MOV R10,0x0 }
    /* +0xbb858c */ __asm { NOP }
    /* +0xbb858e */ __asm { MOV R11D,dword ptr [RBP + 0x4b8] }
    /* +0xbb8595 */ __asm { MOV ECX,R11D }
    /* +0xbb8598 */ __asm { OR CL,0x70 }
    /* +0xbb859b */ __asm { MOV uint8_t ptr [RBP + 0x120],CL }
    /* +0xbb85a1 */ __asm { DEC EAX }
    /* +0xbb85a3 */ __asm { MOV R10,qword ptr [RBP + 0x1250] }
    /* +0xbb85aa */ __asm { MOV uint8_t ptr [RBP + 0x121],R10B }
    /* +0xbb85b1 */ __asm { XOR R12D,R12D }
    /* +0xbb85b4 */ __asm { JMP 0x7fffa5328659 }
    /* +0xbb85b9 */ __asm { MOV R11D,dword ptr [RBP + 0x4b8] }
    /* +0xbb85c0 */ __asm { MOV ECX,R11D }
    /* +0xbb85c3 */ __asm { OR CL,0x80 }
    /* +0xbb85c6 */ __asm { MOV uint8_t ptr [RBP + 0x120],0xf }
    /* +0xbb85cd */ __asm { MOV uint8_t ptr [RBP + 0x121],CL }
    /* +0xbb85d3 */ __asm { LEA R11,[RBP + 0x122] }
    /* +0xbb85da */ __asm { MOV R10,qword ptr [RBP + 0x1250] }
    /* +0xbb85e1 */ __asm { DEC EAX }
    /* +0xbb85e3 */ __asm { MOV dword ptr [R11],R10D }
    /* +0xbb85e6 */ __asm { MOV R10D,R8D }
    /* +0xbb85e9 */ __asm { AND R10D,0xfffffffc }
    /* +0xbb85ed */ __asm { NEG R10 }
    /* +0xbb85f0 */ __asm { MOV R11,qword ptr [RBP + 0x590] }
    /* +0xbb85f7 */ __asm { ADD R11,RAX }
    /* +0xbb85fa */ __asm { ADD R11,qword ptr [RBP + 0x1300] }
    /* +0xbb8601 */ __asm { MOV RDI,RAX }
    /* +0xbb8604 */ __asm { LEA RDX,[RAX + RBP*0x1] }
    /* +0xbb8608 */ __asm { ADD RDX,0x120 }
    /* +0xbb860f */ __asm { XOR R12D,R12D }
    /* +0xbb8612 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xbb8619 */ __asm { MOV RCX,0x0 }
    /* +0xbb8620 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R12*0x1] }
    /* +0xbb8625 */ __asm { MOV uint8_t ptr [R11 + R12*0x1],CL }
    /* +0xbb8629 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R12*0x1 + -0x1] }
    /* +0xbb862f */ __asm { MOV uint8_t ptr [R11 + R12*0x1 + -0x1],CL }
    /* +0xbb8634 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R12*0x1 + -0x2] }
    /* +0xbb863a */ __asm { MOV uint8_t ptr [R11 + R12*0x1 + -0x2],CL }
    /* +0xbb863f */ __asm { MOVZX ECX,uint8_t ptr [RDX + R12*0x1 + -0x3] }
    /* +0xbb8645 */ __asm { MOV uint8_t ptr [R11 + R12*0x1 + -0x3],CL }
    /* +0xbb864a */ __asm { ADD R12,-0x4 }
    /* +0xbb864e */ __asm { CMP R10,R12 }
    /* +0xbb8651 */ __asm { JNZ 0x7fffa5328612 }
    /* +0xbb8653 */ __asm { NEG R12 }
    /* +0xbb8656 */ __asm { MOV RAX,RDI }
    /* +0xbb8659 */ __asm { MOV R11,qword ptr [RBP + 0x590] }
    /* +0xbb8660 */ __asm { ADD R11,qword ptr [RBP + 0x1300] }
    /* +0xbb8667 */ __asm { MOV qword ptr [RBP + 0x590],R11 }
    /* +0xbb866e */ __asm { MOV R10D,R8D }
    /* +0xbb8671 */ __asm { AND R10D,0x3 }
    /* +0xbb8675 */ __asm { MOV R11D,0xd1bb9020 }
    /* +0xbb867b */ __asm { XOR R11D,R15D }
    /* +0xbb867e */ __asm { ADD R11D,R9D }
    /* +0xbb8681 */ __asm { IMUL ECX,R11D,-0x7bcc18f7 }
    /* +0xbb8688 */ __asm { CMP R10,RCX }
    /* +0xbb868b */ __asm { JNZ 0x7fffa5328d5d }
    /* +0xbb8691 */ __asm { MOV R11D,0x8447c336 }
    /* +0xbb8697 */ __asm { IMUL R11D,EBX }
    /* +0xbb869b */ __asm { ROL R11D,0x1d }
    /* +0xbb869f */ __asm { ADD R11D,dword ptr [RBP + 0x1f0] }
    /* +0xbb86a6 */ __asm { XOR R11D,R9D }
    /* +0xbb86a9 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xbb86b0 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbb86b7 */ __asm { CMP R11D,0xcfb187f7 }
    /* +0xbb86be */ __asm { JNC 0x7fffa5371630 }
    /* +0xbb86c4 */ __asm { MOV R10,qword ptr [RBP + 0x1260] }
    /* +0xbb86cb */ __asm { CMP dword ptr [RBP + 0x4b0],R10D }
    /* +0xbb86d2 */ __asm { MOV R15D,dword ptr [RBP + 0x458] }
    /* +0xbb86d9 */ __asm { NOP }
    /* +0xbb86da */ __asm { NOP }
    /* +0xbb86db */ __asm { NOP }
    /* +0xbb86dc */ __asm { NOP }
    /* +0xbb86dd */ __asm { NOP }
    /* +0xbb86de */ __asm { LEA RAX,[0x7fffa4785f06] }
    /* +0xbb86e5 */ __asm { MOV R11,0x136070c5e37c81f2 }
    /* +0xbb86ef */ __asm { CMP RAX,R11 }
    /* +0xbb86f2 */ __asm { JZ 0x7fffa537163c }
    /* +0xbb86f8 */ __asm { MOVZX ECX,uint8_t ptr [RAX + -0x1977] }
    /* +0xbb86ff */ __asm { MOVZX R10D,uint8_t ptr [RAX + RCX*0x4 + -0x196d] }
    /* +0xbb8708 */ __asm { NOT R10B }
    /* +0xbb870b */ __asm { ROL R10B,0x3 }
    /* +0xbb870f */ __asm { MOV uint8_t ptr [RBP + 0x5e0],R10B }
    /* +0xbb8716 */ __asm { MOVZX R10D,uint8_t ptr [RAX + RCX*0x4 + -0x196c] }
    /* +0xbb871f */ __asm { NOT R10B }
    /* +0xbb8722 */ __asm { ROL R10B,0x3 }
    /* +0xbb8726 */ __asm { MOV uint8_t ptr [RBP + 0x5e1],R10B }
    /* +0xbb872d */ __asm { MOVZX R10D,uint8_t ptr [RAX + RCX*0x4 + -0x196b] }
    /* +0xbb8736 */ __asm { NOT R10B }
    /* +0xbb8739 */ __asm { ROL R10B,0x3 }
    /* +0xbb873d */ __asm { MOV uint8_t ptr [RBP + 0x5e2],R10B }
    /* +0xbb8744 */ __asm { MOVZX ECX,uint8_t ptr [RAX + RCX*0x4 + -0x196a] }
    /* +0xbb874c */ __asm { NOT CL }
    /* +0xbb874e */ __asm { ROL CL,0x3 }
    /* +0xbb8751 */ __asm { MOV uint8_t ptr [RBP + 0x5e3],CL }
    /* +0xbb8757 */ __asm { MOV R11D,0x97cd0fa7 }
    /* +0xbb875d */ __asm { XOR R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbb8764 */ __asm { BT R11D,R11D }
    /* +0xbb8768 */ __asm { JNC 0x7fffa5328954 }
    /* +0xbb876e */ __asm { MOV R10,qword ptr [RBP + 0x1260] }
    /* +0xbb8775 */ __asm { CMP dword ptr [RBP + 0x4b0],R10D }
    /* +0xbb877c */ __asm { MOV R9,qword ptr [RBP + 0x1298] }
    /* +0xbb8783 */ __asm { NOP }
    /* +0xbb8784 */ __asm { NOP }
    /* +0xbb8785 */ __asm { NOP }
    /* +0xbb8786 */ __asm { NOP }
    /* +0xbb8787 */ __asm { NOP }
    /* +0xbb8788 */ __asm { MOV dword ptr [RBP + 0x5e0],0x82b44318 }
    /* +0xbb8792 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbb8799 */ __asm { TEST R11D,R11D }
    /* +0xbb879c */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xbb87a3 */ __asm { JNS 0x7fffa5374ac7 }
    /* +0xbb87a9 */ __asm { LEA RDX,[0x7fffa478c5fd] }
    /* +0xbb87b0 */ __asm { MOV R10W,0x3dd }
    /* +0xbb87b5 */ __asm { MOV R11W,0x5294 }
    /* +0xbb87ba */ __asm { MOV RAX,qword ptr [RBP + 0x498] }
    /* +0xbb87c1 */ __asm { IMUL R11D,EAX }
    /* +0xbb87c5 */ __asm { MOV EDI,0xffffa173 }
    /* +0xbb87ca */ __asm { SUB EDI,R11D }
    /* +0xbb87cd */ __asm { IMUL EDI,R15D }
    /* +0xbb87d1 */ __asm { XOR EDI,R9D }
    /* +0xbb87d4 */ __asm { MOVSX R11,DI }
    /* +0xbb87d8 */ __asm { ADD R10D,dword ptr [RBP + 0x1038] }
    /* +0xbb87df */ __asm { XOR R10D,R9D }
    /* +0xbb87e2 */ __asm { IMUL R10D,R10D,-0x4445 }
    /* +0xbb87e9 */ __asm { XOR R10D,0xa791 }
    /* +0xbb87f0 */ __asm { ROR R10W,CL }
    /* +0xbb87f4 */ __asm { MOV RDI,RCX }
    /* +0xbb87f7 */ __asm { LEA RBX,[0x7fffa4786fff] }
    /* +0xbb87fe */ __asm { ADD R11,RDX }
    /* +0xbb8801 */ __asm { MOVSX R9,R10W }
    /* +0xbb8805 */ __asm { MOV R10W,0x9999 }
    /* +0xbb880a */ __asm { XOR R10D,0xca18 }
    /* +0xbb8811 */ __asm { MOV ECX,ESI }
    /* +0xbb8813 */ __asm { ROR R10W,CL }
    /* +0xbb8817 */ __asm { ADD R10D,0x6c17 }
    /* +0xbb881e */ __asm { MOV ECX,EDI }
    /* +0xbb8820 */ __asm { ROL R10W,CL }
    /* +0xbb8824 */ __asm { IMUL R10D,EAX }
    /* +0xbb8828 */ __asm { LEA RDX,[0x7fffa47889d2] }
    /* +0xbb882f */ __asm { MOVZX ECX,uint8_t ptr [RBX + R9*0x1 + 0x7] }
    /* +0xbb8835 */ __asm { MOVQ XMM0,qword ptr [R11 + RCX*0x8 + 0x16] }
    /* +0xbb883c */ __asm { PCMPEQD XMM2,XMM2 }
    /* +0xbb8840 */ __asm { PXOR XMM0,XMM2 }
    /* +0xbb8844 */ __asm { MOVDQA XMM5,XMM0 }
    /* +0xbb8848 */ __asm { PSRLW XMM5,0x3 }
    /* +0xbb884d */ __asm { PAND XMM5,xmmword ptr [0x7fffa56bb100] }
    /* +0xbb8855 */ __asm { MOVSX RCX,R10W }
    /* +0xbb8859 */ __asm { PSLLW XMM0,0x5 }
    /* +0xbb885e */ __asm { PAND XMM0,xmmword ptr [0x7fffa56bb110] }
    /* +0xbb8866 */ __asm { MOVQ XMM1,qword ptr [RDX + RCX*0x1 + 0x5a] }
    /* +0xbb886c */ __asm { POR XMM0,XMM5 }
    /* +0xbb8870 */ __asm { PXOR XMM1,XMM2 }
    /* +0xbb8874 */ __asm { PXOR XMM1,XMM0 }
    /* +0xbb8878 */ __asm { MOVQ qword ptr [RBP + 0x5e0],XMM1 }
    /* +0xbb8880 */ __asm { MOV R15,qword ptr [RBP + 0x5e0] }
    /* +0xbb8887 */ __asm { TEST R15,R15 }
    /* +0xbb888a */ __asm { JZ 0x7fffa5374ad5 }
    /* +0xbb8890 */ __asm { MOV RCX,-0x1 }
    /* +0xbb8897 */ __asm { MOV RDX,qword ptr [RBP + 0x1060] }
    /* +0xbb889e */ __asm { CALL R15 }
    /* +0xbb88a1 */ __asm { MOV RCX,-0x1 }
    /* +0xbb88a8 */ __asm { MOV RDX,qword ptr [RBP + 0x590] }
    /* +0xbb88af */ __asm { MOV R8,qword ptr [RBP + 0x1c0] }
    /* +0xbb88b6 */ __asm { CALL R15 }
    /* +0xbb88b9 */ __asm { MOV R11W,0xe806 }
    /* +0xbb88be */ __asm { XOR R11D,0x5372 }
    /* +0xbb88c5 */ __asm { IMUL R11D,dword ptr [RBP + 0x4a0] }
    /* +0xbb88cd */ __asm { XOR R11D,dword ptr [RBP + 0x1f0] }
    /* +0xbb88d4 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbb88db */ __asm { SUB R11D,ECX }
    /* +0xbb88de */ __asm { MOVZX R10D,R11W }
    /* +0xbb88e2 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xbb88e6 */ __asm { MOV R10W,0x859f }
    /* +0xbb88eb */ __asm { ADD R10D,ECX }
    /* +0xbb88ee */ __asm { XOR R10D,0xa7a }
    /* +0xbb88f5 */ __asm { ROL R10W,0xd }
    /* +0xbb88fa */ __asm { MOV AX,0x71d1 }
    /* +0xbb88fe */ __asm { MOV R8D,0x71ca }
    /* +0xbb8904 */ __asm { SUB R8D,EAX }
    /* +0xbb8907 */ __asm { ROL R8W,CL }
    /* +0xbb890b */ __asm { XOR R10D,dword ptr [RBP + 0x480] }
    /* +0xbb8912 */ __asm { NOT R10D }
    /* +0xbb8915 */ __asm { MOVZX R9D,R10W }
    /* +0xbb8919 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xbb8920 */ __asm { ROR R8W,CL }
    /* +0xbb8924 */ __asm { MOV R11,qword ptr [R11 + R9*0x1] }
    /* +0xbb8928 */ __asm { NOT R8D }
    /* +0xbb892b */ __asm { MOVZX R10D,R8W }
    /* +0xbb892f */ __asm { MOV RDX,qword ptr GS:[R10] }
    /* +0xbb8933 */ __asm { XOR R11,qword ptr [RDX + 0x5a8] }
    /* +0xbb893a */ __asm { MOV RDX,-0x10ed1e0fa85e976b }
    /* +0xbb8944 */ __asm { CMP R11,RDX }
    /* +0xbb8947 */ __asm { MOV RBX,qword ptr [RBP + 0xe8] }
    /* +0xbb894e */ __asm { JZ 0x7fffa533e684 }
    /* +0xbb8954 */ __asm { MOV dword ptr [RBP + 0x5e0],0x4bbc9e46 }
    /* +0xbb895e */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbb8965 */ __asm { CMP qword ptr [RBP + 0x290],0x0 }
    /* +0xbb896d */ __asm { JZ 0x7fffa53290e8 }
    /* +0xbb8973 */ __asm { MOV R8,qword ptr [RBP + 0x1300] }
    /* +0xbb897a */ __asm { MOV R11,qword ptr [RBP + 0xf50] }
    /* +0xbb8981 */ __asm { LEA R12,[R11 + R8*0x1] }
    /* +0xbb8985 */ __asm { ADD R12,0x58 }
    /* +0xbb8989 */ __asm { ADD R11,R8 }
    /* +0xbb898c */ __asm { MOV qword ptr [RBP + 0xf50],R11 }
    /* +0xbb8993 */ __asm { MOV R15D,0x1000 }
    /* +0xbb8999 */ __asm { MOV RDX,0x5d800f37eeb601e5 }
    /* +0xbb89a3 */ __asm { MOV R11,qword ptr [RBP + 0x1038] }
    /* +0xbb89aa */ __asm { MOV R10,qword ptr [RBP + 0x1298] }
    /* +0xbb89b1 */ __asm { SUB R11D,R10D }
    /* +0xbb89b4 */ __asm { MOV dword ptr [RBP + 0x560],R11D }
    /* +0xbb89bb */ __asm { MOV R14,0x6e357b6babd41bd }
    /* +0xbb89c5 */ __asm { MOV R9,0x5627cc3d0d37eb6d }
    /* +0xbb89cf */ __asm { OR R10,0x1 }
    /* +0xbb89d3 */ __asm { MOV qword ptr [RBP + 0x390],R10 }
    /* +0xbb89da */ __asm { MOV RSI,0x1e4ba8e010c8eaa3 }
    /* +0xbb89e4 */ __asm { MOV R11,qword ptr [RBP + 0x1f0] }
    /* +0xbb89eb */ __asm { OR R11D,0x1 }
    /* +0xbb89ef */ __asm { MOV dword ptr [RBP + 0xa0],R11D }
    /* +0xbb89f6 */ __asm { MOV qword ptr [RBP + 0x590],RDX }
    /* +0xbb89fd */ __asm { MOV R8,RDX }
    /* +0xbb8a00 */ __asm { JMP 0x7fffa5328b6b }
    /* +0xbb8a10 */ __asm { MOV RBX,qword ptr [R12 + -0x8] }
    /* +0xbb8a15 */ __asm { XOR RBX,R9 }
    /* +0xbb8a18 */ __asm { MOV R11,0xa19384adcd1333a }
    /* +0xbb8a22 */ __asm { XOR R15,RDX }
    /* +0xbb8a25 */ __asm { MOV qword ptr [RBP + 0x1b0],R15 }
    /* +0xbb8a2c */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xbb8a33 */ __asm { SUB R11,RDI }
    /* +0xbb8a36 */ __asm { ADD R11,-0xd2f3ed9 }
    /* +0xbb8a3d */ __asm { XOR R11,qword ptr [RBP + 0x1f0] }
    /* +0xbb8a44 */ __asm { IMUL R11,qword ptr [RBP + 0x390] }
    /* +0xbb8a4c */ __asm { XOR R13,R11 }
    /* +0xbb8a4f */ __asm { MOV qword ptr [RBP + 0x1350],R13 }
    /* +0xbb8a56 */ __asm { XOR R13D,R13D }
    /* +0xbb8a59 */ __asm { MOV RSI,qword ptr [RBP + 0x5d8] }
    /* +0xbb8a60 */ __asm { MOV R15,qword ptr [RBP + 0x3b0] }
    /* +0xbb8a67 */ __asm { MOV R14,0x6e357b6babd41bd }
    /* +0xbb8a71 */ __asm { XOR RAX,R14 }
    /* +0xbb8a74 */ __asm { MOV R10D,0x84564150 }
    /* +0xbb8a7a */ __asm { MOV R11,qword ptr [R12 + -0x18] }
    /* +0xbb8a7f */ __asm { SUB R10D,dword ptr [RBP + 0x1298] }
    /* +0xbb8a86 */ __asm { XOR R10D,EDI }
    /* +0xbb8a89 */ __asm { MOV ECX,ESI }
    /* +0xbb8a8b */ __asm { ROR R10D,CL }
    /* +0xbb8a8e */ __asm { XOR R10D,0x176297c }
    /* +0xbb8a95 */ __asm { MOV RCX,RDI }
    /* +0xbb8a98 */ __asm { MOV EDI,0x8f4d7ea5 }
}


// ============================================================================
// Function : FUN_7fffa5332adf  |  RVA: 0xbc2adf  |  Size: 452 bytes
// Callers  : FUN_7fffa53819b7@0xc119b7
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5332adf(void) {
    /* +0xbc2adf */ __asm { MOV dword ptr [RBP + 0x1070],0xe4e2a814 }
    /* +0xbc2ae9 */ __asm { MOV R11D,dword ptr [RBP + 0x1070] }
    /* +0xbc2af0 */ __asm { LEA R8,[0x7fffa47ba649] }
    /* +0xbc2af7 */ __asm { MOV R11,-0x522dd3de727a88e9 }
    /* +0xbc2b01 */ __asm { CMP R8,R11 }
    /* +0xbc2b04 */ __asm { NOP }
    /* +0xbc2b05 */ __asm { NOP }
    /* +0xbc2b06 */ __asm { NOP }
    /* +0xbc2b07 */ __asm { NOP }
    /* +0xbc2b08 */ __asm { MOV R12,-0x3d85e27b3073b842 }
    /* +0xbc2b12 */ __asm { LEA RSI,[0x7fffa47b9a3e] }
    /* +0xbc2b19 */ __asm { MOV R11D,0xff64d6be }
    /* +0xbc2b1f */ __asm { MOV R9W,0x212a }
    /* +0xbc2b24 */ __asm { MOV R10D,0x1610ac8e }
    /* +0xbc2b2a */ __asm { MOV R15W,0x3873 }
    /* +0xbc2b2f */ __asm { MOV qword ptr [RBP + 0x1070],RCX }
    /* +0xbc2b36 */ __asm { MOV RDX,-0x8d53fd2c }
    /* +0xbc2b40 */ __asm { MOV RBX,qword ptr [RBP + 0x480] }
    /* +0xbc2b47 */ __asm { XOR R10D,EBX }
    /* +0xbc2b4a */ __asm { MOV RAX,qword ptr [RBP + 0x1038] }
    /* +0xbc2b51 */ __asm { SUB R10D,EAX }
    /* +0xbc2b54 */ __asm { IMUL EDI,R10D,0x6eed8b55 }
    /* +0xbc2b5b */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbc2b62 */ __asm { ROR EDI,CL }
    /* +0xbc2b64 */ __asm { ADD RDX,RSI }
    /* +0xbc2b67 */ __asm { XOR RDI,RDX }
    /* +0xbc2b6a */ __asm { ADD R12,RCX }
    /* +0xbc2b6d */ __asm { IMUL R11D,R11D,0x7ffe0321 }
    /* +0xbc2b74 */ __asm { XOR R9D,0xcfa }
    /* +0xbc2b7b */ __asm { ADD R9D,0x7b02 }
    /* +0xbc2b82 */ __asm { XOR R9D,ECX }
    /* +0xbc2b85 */ __asm { LEA R10D,[RAX + R9*0x1] }
    /* +0xbc2b89 */ __asm { MOVZX EDX,R10W }
    /* +0xbc2b8d */ __asm { IMUL R15D,dword ptr [RBP + 0x4a0] }
    /* +0xbc2b95 */ __asm { ROL R15W,0x8 }
    /* +0xbc2b9a */ __asm { SUB R11D,ECX }
    /* +0xbc2b9d */ __asm { IMUL R11D,dword ptr [RBP + 0xe8] }
    /* +0xbc2ba5 */ __asm { ROL R11D,0x1d }
    /* +0xbc2ba9 */ __asm { XOR R11D,EBX }
    /* +0xbc2bac */ __asm { MOVSXD R10,R11D }
    /* +0xbc2baf */ __asm { MOV EAX,dword ptr [R8 + 0x1e7f] }
    /* +0xbc2bb6 */ __asm { ROL R12,0xc }
    /* +0xbc2bba */ __asm { IMUL R11D,R15D,-0x6cdf }
    /* +0xbc2bc1 */ __asm { ADD R11D,EBX }
    /* +0xbc2bc4 */ __asm { MOV ECX,EBX }
    /* +0xbc2bc6 */ __asm { ROR R12,CL }
    /* +0xbc2bc9 */ __asm { ADD R12,-0x4acc4438 }
    /* +0xbc2bd0 */ __asm { IMUL R12,qword ptr [RBP + 0x50] }
    /* +0xbc2bd5 */ __asm { NOT R11D }
    /* +0xbc2bd8 */ __asm { MOVZX R9D,R11W }
    /* +0xbc2bdc */ __asm { LEA R8,[RBP + 0x5e0] }
    /* +0xbc2be3 */ __asm { SYSCALL }
    /* +0xbc2be5 */ __asm { CMP R12,RDI }
    /* +0xbc2be8 */ __asm { NOP }
    /* +0xbc2be9 */ __asm { NOP }
    /* +0xbc2bea */ __asm { NOP }
    /* +0xbc2beb */ __asm { NOP }
    /* +0xbc2bec */ __asm { NOP }
    /* +0xbc2bed */ __asm { MOV R8W,0xc81 }
    /* +0xbc2bf2 */ __asm { MOV RDI,qword ptr [RBP + 0x1298] }
    /* +0xbc2bf9 */ __asm { MOV EDX,EDI }
    /* +0xbc2bfb */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbc2c02 */ __asm { SUB EDX,ECX }
    /* +0xbc2c04 */ __asm { MOV R9W,0xdc25 }
    /* +0xbc2c09 */ __asm { MOV qword ptr [RBP + 0x1070],R11 }
    /* +0xbc2c10 */ __asm { LEA R11D,[RCX + R8*0x1] }
    /* +0xbc2c14 */ __asm { ADD R11D,0xffffef56 }
    /* +0xbc2c1b */ __asm { IMUL R11D,dword ptr [RBP + 0x188] }
    /* +0xbc2c23 */ __asm { NOT R11D }
    /* +0xbc2c26 */ __asm { MOV EAX,dword ptr [RSI + 0x2aa2] }
    /* +0xbc2c2c */ __asm { MOV R10D,0xb7449dda }
    /* +0xbc2c32 */ __asm { MOV R13,qword ptr [RBP + 0x480] }
    /* +0xbc2c39 */ __asm { ADD R10D,R13D }
    /* +0xbc2c3c */ __asm { ROL R10D,CL }
    /* +0xbc2c3f */ __asm { ADD R11D,EDI }
    /* +0xbc2c42 */ __asm { SUB R10D,EDI }
    /* +0xbc2c45 */ __asm { ROL R10D,0xa }
    /* +0xbc2c49 */ __asm { MOVZX R8D,R11W }
    /* +0xbc2c4d */ __asm { MOVSXD R10,R10D }
    /* +0xbc2c50 */ __asm { LEA R11D,[RDX + R9*0x1] }
    /* +0xbc2c54 */ __asm { ADD R11D,0x3b2f }
    /* +0xbc2c5b */ __asm { MOV ECX,R13D }
    /* +0xbc2c5e */ __asm { ROL R11W,CL }
    /* +0xbc2c62 */ __asm { MOVZX ECX,R11W }
    /* +0xbc2c66 */ __asm { MOV qword ptr [RSP + 0x28],RCX }
    /* +0xbc2c6b */ __asm { MOV qword ptr [RSP + 0x30],0x0 }
    /* +0xbc2c74 */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xbc2c7b */ __asm { MOV RDX,qword ptr [RBP + 0x458] }
    /* +0xbc2c82 */ __asm { SYSCALL }
    /* +0xbc2c84 */ __asm { MOV R12,qword ptr [RBP + 0x1048] }
    /* +0xbc2c8b */ __asm { JMP 0x7fffa5333178 }
    /* +0xbc3178 */ __asm { MOV RBX,qword ptr [RBP + 0xe8] }
    /* +0xbc317f */ __asm { MOV R15,qword ptr [RBP + 0x4a0] }
    /* +0xbc3186 */ __asm { JMP 0x7fffa5333449 }
}


// ============================================================================
// Function : FUN_7fffa5333440  |  RVA: 0xbc3440  |  Size: 80982 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa5395888@0xc25888, FUN_7fffa52e9279@0xb79279, FUN_7fffa535d810@0xbed810, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5333440(void) {
    /* +0xbc3440 */ __asm { SYSCALL }
    /* +0xbc3442 */ __asm { MOV RBX,qword ptr [RBP + 0xe8] }
    /* +0xbc3449 */ __asm { MOV R11W,0xd036 }
    /* +0xbc344e */ __asm { XOR R11D,R13D }
    /* +0xbc3451 */ __asm { ADD R11D,0x49ef }
    /* +0xbc3458 */ __asm { MOV ECX,R12D }
    /* +0xbc345b */ __asm { ROL R11W,CL }
    /* +0xbc345f */ __asm { NOT R11D }
    /* +0xbc3462 */ __asm { MOVZX R11D,R11W }
    /* +0xbc3466 */ __asm { CMP EAX,R11D }
    /* +0xbc3469 */ __asm { JL 0x7fffa537174e }
    /* +0xbc346f */ __asm { NOP }
    /* +0xbc3471 */ __asm { MOV R8,0x0 }
    /* +0xbc3478 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xbc347f */ __asm { MOV R11,qword ptr [RBP + 0x458] }
    /* +0xbc3486 */ __asm { MOV qword ptr [RBP + 0x1210],R11 }
    /* +0xbc348d */ __asm { MOV qword ptr [RBP + 0x4e0],0x1000 }
    /* +0xbc3498 */ __asm { MOV dword ptr [RBP + 0x1050],0x0 }
    /* +0xbc34a2 */ __asm { MOV R11D,dword ptr [RBP + 0x604] }
    /* +0xbc34a9 */ __asm { TEST R11B,0x4 }
    /* +0xbc34ad */ __asm { JZ 0x7fffa53334d8 }
    /* +0xbc34af */ __asm { AND R11D,0xffffffbb }
    /* +0xbc34b3 */ __asm { OR R11D,0x40 }
    /* +0xbc34b7 */ __asm { MOV dword ptr [RBP + 0x590],R11D }
    /* +0xbc34be */ __asm { MOV RDI,qword ptr [RBP + 0x1298] }
    /* +0xbc34c5 */ __asm { MOV R10,qword ptr [RBP + 0x480] }
    /* +0xbc34cc */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xbc34d6 */ __asm { JMP 0x7fffa533351b }
    /* +0xbc34d8 */ __asm { TEST R11B,0x8 }
    /* +0xbc34dc */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xbc34e6 */ __asm { JNZ 0x7fffa53334f8 }
    /* +0xbc34e8 */ __asm { TEST R11B,0x2 }
    /* +0xbc34ec */ __asm { JZ 0x7fffa5333506 }
    /* +0xbc34ee */ __asm { AND R11D,0xffffffd1 }
    /* +0xbc34f2 */ __asm { OR R11D,0x20 }
    /* +0xbc34f6 */ __asm { JMP 0x7fffa5333506 }
    /* +0xbc34f8 */ __asm { AND R11D,0xffffff73 }
    /* +0xbc34ff */ __asm { OR R11D,0x80 }
    /* +0xbc3506 */ __asm { MOV dword ptr [RBP + 0x590],R11D }
    /* +0xbc350d */ __asm { MOV RDI,qword ptr [RBP + 0x1298] }
    /* +0xbc3514 */ __asm { MOV R10,qword ptr [RBP + 0x480] }
    /* +0xbc351b */ __asm { MOV R11D,0x92a4f11a }
    /* +0xbc3521 */ __asm { SUB R11D,EDI }
    /* +0xbc3524 */ __asm { XOR R11D,R10D }
    /* +0xbc3527 */ __asm { XOR R11D,0x7cbb4c42 }
    /* +0xbc352e */ __asm { RDTSC }
    /* +0xbc3530 */ __asm { SHL RDX,0x20 }
    /* +0xbc3534 */ __asm { OR RDX,RAX }
    /* +0xbc3537 */ __asm { MOV R8,-0x30ebf64fafbc6efb }
    /* +0xbc3541 */ __asm { IMUL RDX,R8 }
    /* +0xbc3545 */ __asm { ADD RDX,R9 }
    /* +0xbc3548 */ __asm { MOV RCX,RDX }
    /* +0xbc354b */ __asm { SHR RCX,0x3b }
    /* +0xbc354f */ __asm { MOV R10,RDX }
    /* +0xbc3552 */ __asm { SHR R10,0x2d }
    /* +0xbc3556 */ __asm { SHR RDX,0x1b }
    /* +0xbc355a */ __asm { XOR R10D,EDX }
    /* +0xbc355d */ __asm { ROR R10D,CL }
    /* +0xbc3560 */ __asm { IMUL R13D,R11D,-0x3692fb3d }
    /* +0xbc3567 */ __asm { AND R10D,0x3 }
    /* +0xbc356b */ __asm { CMP R10D,0x2 }
    /* +0xbc356f */ __asm { JC 0x7fffa53337d8 }
    /* +0xbc3575 */ __asm { CMP R10D,0x3 }
    /* +0xbc3579 */ __asm { JNZ 0x7fffa53339cc }
    /* +0xbc357f */ __asm { MOV R8D,0x21655d6b }
    /* +0xbc3585 */ __asm { MOV R11,-0x2a0d7101b835285f }
    /* +0xbc358f */ __asm { IMUL R11,R8 }
    /* +0xbc3593 */ __asm { XOR R11,-0xc958b77 }
    /* +0xbc359a */ __asm { MOV RDX,0x1967b9e8402445c9 }
    /* +0xbc35a4 */ __asm { CMP R11,RDX }
    /* +0xbc35a7 */ __asm { JZ 0x7fffa5381d9f }
    /* +0xbc35ad */ __asm { MOV R11,0x555555582d74d097 }
    /* +0xbc35b7 */ __asm { MOV R9,qword ptr [RBP + 0x1038] }
    /* +0xbc35be */ __asm { MOV RCX,R9 }
    /* +0xbc35c1 */ __asm { SUB RCX,R11 }
    /* +0xbc35c4 */ __asm { MOV R11D,0xd67d14c2 }
    /* +0xbc35ca */ __asm { ADD R11,RCX }
    /* +0xbc35cd */ __asm { MOV ECX,EDI }
    /* +0xbc35cf */ __asm { ROR R11,CL }
    /* +0xbc35d2 */ __asm { XOR R11,qword ptr [RBP + 0x480] }
    /* +0xbc35d9 */ __asm { MOV R10D,dword ptr [R8 + 0x5e98a559] }
    /* +0xbc35e0 */ __asm { MOV RDX,0x5555555555555556 }
    /* +0xbc35ea */ __asm { IMUL RDX,R10 }
    /* +0xbc35ee */ __asm { PXOR XMM0,XMM0 }
    /* +0xbc35f2 */ __asm { CMP RDX,R11 }
    /* +0xbc35f5 */ __asm { JC 0x7fffa5333dbd }
    /* +0xbc35fb */ __asm { MOVDQA xmmword ptr [RBP + 0x1070],XMM0 }
    /* +0xbc3603 */ __asm { MOV dword ptr [RBP + 0x120],0xe5d4ce58 }
    /* +0xbc360d */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbc3614 */ __asm { MOV dword ptr [RBP + 0x1070],0x0 }
    /* +0xbc361e */ __asm { MOV R11W,0xbfdd }
    /* +0xbc3623 */ __asm { XOR R11D,dword ptr [RBP + 0x480] }
    /* +0xbc362a */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xbc3631 */ __asm { ROL R11W,CL }
    /* +0xbc3635 */ __asm { MOV R10D,R13D }
    /* +0xbc3638 */ __asm { OR R10D,0x1 }
    /* +0xbc363c */ __asm { IMUL R10D,R11D }
    /* +0xbc3640 */ __asm { SUB R10D,R9D }
    /* +0xbc3643 */ __asm { ADD R10D,0x458 }
    /* +0xbc364a */ __asm { MOVZX R10D,R10W }
    /* +0xbc364e */ __asm { XOR R10,0x809f }
    /* +0xbc3655 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xbc3659 */ __asm { MOV R11,qword ptr [R11 + 0x60] }
    /* +0xbc365d */ __asm { MOV R8,-0x69f1bb5000028be1 }
    /* +0xbc3667 */ __asm { SUB R11,R8 }
    /* +0xbc366a */ __asm { MOV RDX,0x3656a2eaaa68f6d7 }
    /* +0xbc3674 */ __asm { CMP R11,RDX }
    /* +0xbc3677 */ __asm { NOP }
    /* +0xbc3678 */ __asm { NOP }
    /* +0xbc3679 */ __asm { NOP }
    /* +0xbc367a */ __asm { NOP }
    /* +0xbc367b */ __asm { NOP }
    /* +0xbc367c */ __asm { NOP }
    /* +0xbc367d */ __asm { NOP }
    /* +0xbc367e */ __asm { NOP }
    /* +0xbc367f */ __asm { NOP }
    /* +0xbc3680 */ __asm { NOP }
    /* +0xbc3681 */ __asm { NOP }
    /* +0xbc3682 */ __asm { NOP }
    /* +0xbc3683 */ __asm { MOV R8D,0x80146af3 }
    /* +0xbc3689 */ __asm { IMUL R8D,dword ptr [RBP + 0xe8] }
    /* +0xbc3691 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbc3698 */ __asm { ROL R8D,CL }
    /* +0xbc369b */ __asm { LEA R11D,[R8 + R13*0x1] }
    /* +0xbc369f */ __asm { ADD R11D,0xa691b153 }
    /* +0xbc36a6 */ __asm { XOR R11D,0xa6b6af2f }
    /* +0xbc36ad */ __asm { MOV dword ptr [RBP + 0x120],R11D }
    /* +0xbc36b4 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbc36bb */ __asm { LEA R8,[0x7fffa4787c61] }
    /* +0xbc36c2 */ __asm { MOV R11,0xab7d3816b6b2c3c }
    /* +0xbc36cc */ __asm { CMP R8,R11 }
    /* +0xbc36cf */ __asm { JZ 0x7fffa53848f7 }
    /* +0xbc36d5 */ __asm { LEA RSI,[0x7fffa478869d] }
    /* +0xbc36dc */ __asm { MOV R11W,0x7497 }
    /* +0xbc36e1 */ __asm { SUB R11D,R13D }
    /* +0xbc36e4 */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xbc36eb */ __asm { MOV ECX,EDX }
    /* +0xbc36ed */ __asm { ROL R11W,CL }
    /* +0xbc36f1 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xbc36f8 */ __asm { ROR R11W,CL }
    /* +0xbc36fc */ __asm { MOV RDI,qword ptr [RBP + 0x1298] }
    /* +0xbc3703 */ __asm { ADD R11D,EDI }
    /* +0xbc3706 */ __asm { ROL R11W,0xe }
    /* +0xbc370b */ __asm { MOVSX R10,R11W }
    /* +0xbc370f */ __asm { MOV R11W,0xb438 }
    /* +0xbc3714 */ __asm { ADD R11D,ECX }
    /* +0xbc3717 */ __asm { MOV R9D,R13D }
    /* +0xbc371a */ __asm { SUB R9D,EDX }
    /* +0xbc371d */ __asm { MOV qword ptr [RBP + 0x120],RCX }
    /* +0xbc3724 */ __asm { MOV EAX,dword ptr [R8 + -0x3645] }
    /* +0xbc372b */ __asm { MOV R8W,0xa4f9 }
    /* +0xbc3730 */ __asm { ADD R8D,EDI }
    /* +0xbc3733 */ __asm { XOR R11D,R13D }
    /* +0xbc3736 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xbc373d */ __asm { ROL R11W,CL }
    /* +0xbc3741 */ __asm { MOV RCX,qword ptr [RBP + 0x188] }
    /* +0xbc3748 */ __asm { IMUL ECX,R8D }
    /* +0xbc374c */ __asm { SUB R11D,EDX }
    /* +0xbc374f */ __asm { IMUL R11D,R11D,-0x41b7 }
    /* +0xbc3756 */ __asm { MOVZX EDX,R11W }
    /* +0xbc375a */ __asm { LEA R11D,[R9 + RCX*0x1] }
    /* +0xbc375e */ __asm { ADD R11D,0xffffdc22 }
    /* +0xbc3765 */ __asm { XOR R11D,0x3d8 }
    /* +0xbc376c */ __asm { MOVZX R9D,R11W }
    /* +0xbc3770 */ __asm { LEA R8,[RBP + 0x1070] }
    /* +0xbc3777 */ __asm { SYSCALL }
    /* +0xbc3779 */ __asm { MOV R11,0x4a474fc684bf48f8 }
    /* +0xbc3783 */ __asm { CMP RSI,R11 }
    /* +0xbc3786 */ __asm { NOP }
    /* +0xbc3787 */ __asm { NOP }
    /* +0xbc3788 */ __asm { NOP }
    /* +0xbc3789 */ __asm { NOP }
    /* +0xbc378a */ __asm { NOP }
    /* +0xbc378b */ __asm { NOP }
    /* +0xbc378c */ __asm { NOP }
    /* +0xbc378d */ __asm { NOP }
    /* +0xbc378e */ __asm { NOP }
    /* +0xbc378f */ __asm { NOP }
    /* +0xbc3790 */ __asm { NOP }
    /* +0xbc3791 */ __asm { NOP }
    /* +0xbc3792 */ __asm { NOP }
    /* +0xbc3793 */ __asm { NOP }
    /* +0xbc3794 */ __asm { NOP }
    /* +0xbc3795 */ __asm { NOP }
    /* +0xbc3796 */ __asm { NOP }
    /* +0xbc37d8 */ __asm { CMP R10D,0x1 }
    /* +0xbc37dc */ __asm { JZ 0x7fffa5333b82 }
    /* +0xbc37e2 */ __asm { MOV R8D,0x7a26a354 }
    /* +0xbc37e8 */ __asm { MOV R11,0x63523090aa4cf664 }
    /* +0xbc37f2 */ __asm { CMP R8,R11 }
    /* +0xbc37f5 */ __asm { JZ 0x7fffa5381da7 }
    /* +0xbc37fb */ __asm { MOV R11,qword ptr [R8 + 0x5d75cb4] }
    /* +0xbc3802 */ __asm { MOV RDX,-0x5dd7f39a2c496963 }
    /* +0xbc380c */ __asm { MOV RAX,R11 }
    /* +0xbc380f */ __asm { MUL RDX }
    /* +0xbc3812 */ __asm { MOV R8,RDX }
    /* +0xbc3815 */ __asm { MOV EDX,0x1465d61 }
    /* +0xbc381a */ __asm { MOV RAX,R11 }
    /* +0xbc381d */ __asm { MUL RDX }
    /* +0xbc3820 */ __asm { ADD RAX,R8 }
    /* +0xbc3823 */ __asm { ADC RDX,0x0 }
    /* +0xbc3827 */ __asm { TEST DL,0x1 }
    /* +0xbc382a */ __asm { JNZ 0x7fffa5333f6d }
    /* +0xbc3830 */ __asm { PXOR XMM0,XMM0 }
    /* +0xbc3834 */ __asm { MOVDQA xmmword ptr [RBP + 0x1070],XMM0 }
    /* +0xbc383c */ __asm { MOV dword ptr [RBP + 0x120],0x68546eed }
    /* +0xbc3846 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbc384d */ __asm { MOV dword ptr [RBP + 0x1070],0x0 }
    /* +0xbc3857 */ __asm { MOV dword ptr [RBP + 0x120],0x76edffd6 }
    /* +0xbc3861 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbc3868 */ __asm { MOV R10,qword ptr [RBP + 0x1260] }
    /* +0xbc386f */ __asm { CMP dword ptr [RBP + 0x4b0],R10D }
    /* +0xbc3876 */ __asm { NOP }
    /* +0xbc3877 */ __asm { NOP }
    /* +0xbc3878 */ __asm { NOP }
    /* +0xbc3879 */ __asm { NOP }
    /* +0xbc387a */ __asm { NOP }
    /* +0xbc387b */ __asm { NOP }
    /* +0xbc387c */ __asm { NOP }
    /* +0xbc387d */ __asm { NOP }
    /* +0xbc387e */ __asm { NOP }
    /* +0xbc387f */ __asm { NOP }
    /* +0xbc3880 */ __asm { NOP }
    /* +0xbc3881 */ __asm { MOV dword ptr [RBP + 0x120],0x31dce1d9 }
    /* +0xbc388b */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbc3892 */ __asm { TEST R11D,R11D }
    /* +0xbc3895 */ __asm { NOP }
    /* +0xbc3896 */ __asm { NOP }
    /* +0xbc3897 */ __asm { NOP }
    /* +0xbc3898 */ __asm { NOP }
    /* +0xbc3899 */ __asm { NOP }
    /* +0xbc389a */ __asm { LEA R10,[0x7fffa47beaea] }
    /* +0xbc38a1 */ __asm { MOV R11,0x4c9aade9411c42ff }
    /* +0xbc38ab */ __asm { CMP R10,R11 }
    /* +0xbc38ae */ __asm { NOP }
    /* +0xbc38af */ __asm { NOP }
    /* +0xbc38b0 */ __asm { NOP }
    /* +0xbc38b1 */ __asm { NOP }
    /* +0xbc38b2 */ __asm { NOP }
    /* +0xbc38b3 */ __asm { NOP }
    /* +0xbc38b4 */ __asm { NOP }
    /* +0xbc38b5 */ __asm { NOP }
    /* +0xbc38b6 */ __asm { NOP }
    /* +0xbc38b7 */ __asm { NOP }
    /* +0xbc38b8 */ __asm { NOP }
    /* +0xbc38b9 */ __asm { NOP }
    /* +0xbc38ba */ __asm { NOP }
    /* +0xbc38bb */ __asm { NOP }
    /* +0xbc38bc */ __asm { NOP }
    /* +0xbc38bd */ __asm { NOP }
    /* +0xbc38be */ __asm { NOP }
    /* +0xbc39cc */ __asm { MOV R8W,0x37f6 }
    /* +0xbc39d1 */ __asm { PXOR XMM0,XMM0 }
    /* +0xbc39d5 */ __asm { MOVDQA xmmword ptr [RBP + 0x1070],XMM0 }
    /* +0xbc39dd */ __asm { MOV R11,qword ptr [RBP + 0x480] }
    /* +0xbc39e4 */ __asm { ADD R11D,R8D }
    /* +0xbc39e7 */ __asm { ADD R11D,0xffff9739 }
    /* +0xbc39ee */ __asm { IMUL R11D,R15D }
    /* +0xbc39f2 */ __asm { MOV ECX,R13D }
    /* +0xbc39f5 */ __asm { ROR R11W,CL }
    /* +0xbc39f9 */ __asm { NOT R11D }
    /* +0xbc39fc */ __asm { MOVZX R10D,R11W }
    /* +0xbc3a00 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xbc3a04 */ __asm { MOV RDX,-0x6bed4b165720f2c2 }
    /* +0xbc3a0e */ __asm { CMP R11,RDX }
    /* +0xbc3a11 */ __asm { NOP }
    /* +0xbc3a12 */ __asm { NOP }
    /* +0xbc3a13 */ __asm { NOP }
    /* +0xbc3a14 */ __asm { NOP }
    /* +0xbc3a15 */ __asm { NOP }
    /* +0xbc3a16 */ __asm { MOV dword ptr [RBP + 0x1070],0x0 }
    /* +0xbc3a20 */ __asm { MOV dword ptr [RBP + 0x120],0x489337c4 }
    /* +0xbc3a2a */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbc3a31 */ __asm { MOV dword ptr [RBP + 0x120],0xf5eee9a7 }
    /* +0xbc3a3b */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbc3a42 */ __asm { TEST R11B,0x1 }
    /* +0xbc3a46 */ __asm { NOP }
    /* +0xbc3a47 */ __asm { NOP }
    /* +0xbc3a48 */ __asm { NOP }
    /* +0xbc3a49 */ __asm { NOP }
    /* +0xbc3a4a */ __asm { NOP }
    /* +0xbc3a4b */ __asm { LEA R11,[0x7fffa47bef11] }
    /* +0xbc3a52 */ __asm { MOV RDX,-0x48c7ab069a3356cc }
    /* +0xbc3a5c */ __asm { MOV R8,-0xd9270a75 }
    /* +0xbc3a66 */ __asm { ADD R8,RDX }
    /* +0xbc3a69 */ __asm { MOV RSI,qword ptr [RBP + 0x1298] }
    /* +0xbc3a70 */ __asm { MOV ECX,ESI }
    /* +0xbc3a72 */ __asm { ROR R8,CL }
    /* +0xbc3a75 */ __asm { IMUL R8,qword ptr [RBP + 0x50] }
    /* +0xbc3a7a */ __asm { MOV R15,qword ptr [RBP + 0x480] }
    /* +0xbc3a81 */ __asm { SUB R8,R15 }
    /* +0xbc3a84 */ __asm { MOV ECX,R13D }
    /* +0xbc3a87 */ __asm { ROL R8,CL }
    /* +0xbc3a8a */ __asm { CMP R11,R8 }
    /* +0xbc3a8d */ __asm { JZ 0x7fffa5381daf }
    /* +0xbc3a93 */ __asm { MOV qword ptr [RBP + 0x120],R8 }
    /* +0xbc3a9a */ __asm { MOV R10D,0x85487060 }
    /* +0xbc3aa0 */ __asm { LEA R12,[0x7fffa47ba648] }
    /* +0xbc3aa7 */ __asm { MOV EAX,0xb8c98ef8 }
    /* +0xbc3aac */ __asm { MOV R8W,0x615f }
    /* +0xbc3ab1 */ __asm { ADD R8D,R15D }
    /* +0xbc3ab4 */ __asm { NOT R8D }
    /* +0xbc3ab7 */ __asm { ROL R8W,0x9 }
    /* +0xbc3abc */ __asm { NOT R8D }
    /* +0xbc3abf */ __asm { ADD R8D,R13D }
    /* +0xbc3ac2 */ __asm { MOVZX EDX,R8W }
    /* +0xbc3ac6 */ __asm { MOV R8W,0x31b5 }
    /* +0xbc3acb */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xbc3ad2 */ __asm { XOR R8D,EDI }
    /* +0xbc3ad5 */ __asm { ROL R8W,0x6 }
    /* +0xbc3ada */ __asm { XOR R8D,R13D }
    /* +0xbc3add */ __asm { MOV ECX,R15D }
    /* +0xbc3ae0 */ __asm { ROL R8W,CL }
    /* +0xbc3ae4 */ __asm { SUB R8D,ESI }
    /* +0xbc3ae7 */ __asm { MOVZX R9D,R8W }
    /* +0xbc3aeb */ __asm { MOV R8D,ESI }
    /* +0xbc3aee */ __asm { SUB R8D,R13D }
    /* +0xbc3af1 */ __asm { ADD R8D,R10D }
    /* +0xbc3af4 */ __asm { NOT R8D }
    /* +0xbc3af7 */ __asm { SUB R8D,R15D }
    /* +0xbc3afa */ __asm { SUB EAX,R13D }
    /* +0xbc3afd */ __asm { ROL EAX,CL }
    /* +0xbc3aff */ __asm { IMUL R10D,R8D,0x25a6ef11 }
    /* +0xbc3b06 */ __asm { NOT EAX }
    /* +0xbc3b08 */ __asm { ROL EAX,0x4 }
    /* +0xbc3b0b */ __asm { MOVSXD R10,R10D }
    /* +0xbc3b0e */ __asm { XOR EAX,EDI }
    /* +0xbc3b10 */ __asm { MOVSXD R8,EAX }
    /* +0xbc3b13 */ __asm { MOV EAX,dword ptr [R8 + R11*0x1 + 0x74] }
    /* +0xbc3b18 */ __asm { LEA R8,[RBP + 0x1070] }
    /* +0xbc3b1f */ __asm { SYSCALL }
    /* +0xbc3b21 */ __asm { MOV R11,0x42a3341b42899cf1 }
    /* +0xbc3b2b */ __asm { CMP R12,R11 }
    /* +0xbc3b2e */ __asm { JZ 0x7fffa5381db7 }
    /* +0xbc3b34 */ __asm { MOV R10W,0xf04f }
    /* +0xbc3b39 */ __asm { MOV EAX,R15D }
    /* +0xbc3b3c */ __asm { SUB EAX,ESI }
    /* +0xbc3b3e */ __asm { SUB EAX,R13D }
    /* +0xbc3b41 */ __asm { MOV ECX,EDI }
    /* +0xbc3b43 */ __asm { XOR ECX,R10D }
    /* +0xbc3b46 */ __asm { ROL CX,0x4 }
    /* +0xbc3b4a */ __asm { NOT ECX }
    /* +0xbc3b4c */ __asm { ADD ECX,EAX }
    /* +0xbc3b4e */ __asm { MOVSX R10,CX }
    /* +0xbc3b52 */ __asm { MOV qword ptr [RBP + 0x1070],R8 }
    /* +0xbc3b59 */ __asm { MOV R11D,0xbb26a096 }
    /* +0xbc3b5f */ __asm { SUB R11D,R13D }
    /* +0xbc3b62 */ __asm { IMUL R11D,dword ptr [RBP + 0xd0] }
    /* +0xbc3b6a */ __asm { ADD R11D,R15D }
    /* +0xbc3b6d */ __asm { MOV ECX,0xc0478829 }
    /* +0xbc3b72 */ __asm { SUB ECX,R11D }
    /* +0xbc3b75 */ __asm { MOV EAX,dword ptr [RCX + R12*0x1 + 0xf4] }
    /* +0xbc3b7d */ __asm { JMP 0x7fffa5334460 }
    /* +0xbc3b82 */ __asm { MOV R8D,0x20c7bcf0 }
    /* +0xbc3b88 */ __asm { MOV R11,-0x59e9111128eeb66f }
    /* +0xbc3b92 */ __asm { CMP R8,R11 }
    /* +0xbc3b95 */ __asm { JNZ 0x7fffa5333b98 }
    /* +0xbc3b97 */ __asm { OUTSB DX,RSI }
    /* +0xbc3b98 */ __asm { CMP dword ptr [R8 + 0x5f3646d0],0xd }
    /* +0xbc3ba0 */ __asm { JNC 0x7fffa5334267 }
    /* +0xbc3ba6 */ __asm { PXOR XMM0,XMM0 }
    /* +0xbc3baa */ __asm { MOVDQA xmmword ptr [RBP + 0x1070],XMM0 }
    /* +0xbc3bb2 */ __asm { MOV R11,qword ptr [RBP + 0x190] }
    /* +0xbc3bb9 */ __asm { ADD R11,-0xe98 }
    /* +0xbc3bc0 */ __asm { MOV R8,-0x3d0d529b1e6cde5b }
    /* +0xbc3bca */ __asm { OR R8,R11 }
    /* +0xbc3bcd */ __asm { MOV R11,0x53c23a4559355973 }
    /* +0xbc3bd7 */ __asm { CMP R8,R11 }
    /* +0xbc3bda */ __asm { JNZ 0x7fffa5333be3 }
    /* +0xbc3bdc */ __asm { ADC dword ptr [RSI + -0x4892f4ae],ECX }
    /* +0xbc3be2 */ __asm { IRETD }
    /* +0xbc3be3 */ __asm { MOV R11,qword ptr [RBP + 0x480] }
    /* +0xbc3bea */ __asm { SUB R11D,dword ptr [RBP + 0x1038] }
    /* +0xbc3bf1 */ __asm { MOV R10W,0xf174 }
    /* +0xbc3bf6 */ __asm { ADD R10D,0xffffd30b }
    /* +0xbc3bfd */ __asm { NOP }
    /* +0xbc3bfe */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xbc3c05 */ __asm { MOV R8,0x0 }
    /* +0xbc3c0c */ __asm { MOV dword ptr [RBP + 0x1070],0x0 }
    /* +0xbc3c16 */ __asm { XOR R10D,R13D }
    /* +0xbc3c19 */ __asm { ADD R10D,R11D }
    /* +0xbc3c1c */ __asm { XOR R10D,dword ptr [RBP + 0x1298] }
    /* +0xbc3c23 */ __asm { ROL R10W,0x2 }
    /* +0xbc3c28 */ __asm { MOVSX R8,R10W }
    /* +0xbc3c2c */ __asm { MOV R11,qword ptr [RBP + 0x190] }
    /* +0xbc3c33 */ __asm { MOV R11,qword ptr [R11 + R8*0x1] }
    /* +0xbc3c37 */ __asm { NOT R11 }
    /* +0xbc3c3a */ __asm { ROL R11,0x14 }
    /* +0xbc3c3e */ __asm { XOR R11,0x578ef53a }
    /* +0xbc3c45 */ __asm { MOV RDX,0x7ed8ebcd2106283a }
    /* +0xbc3c4f */ __asm { CMP R11,RDX }
    /* +0xbc3c52 */ __asm { JZ 0x7fffa533e697 }
    /* +0xbc3c58 */ __asm { MOV dword ptr [RBP + 0x120],0xe77200de }
    /* +0xbc3c62 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbc3c69 */ __asm { TEST R11B,0x1 }
    /* +0xbc3c6d */ __asm { JNZ 0x7fffa53848ff }
    /* +0xbc3c73 */ __asm { LEA R8,[0x7fffa47b9e00] }
    /* +0xbc3c7a */ __asm { MOV R11,qword ptr [RBP + 0x1298] }
    /* +0xbc3c81 */ __asm { SUB R11D,dword ptr [RBP + 0x1038] }
    /* +0xbc3c88 */ __asm { MOV R10D,0xb93477f8 }
    /* +0xbc3c8e */ __asm { XOR R10D,R13D }
    /* +0xbc3c91 */ __asm { XOR R10D,dword ptr [RBP + 0x480] }
    /* +0xbc3c98 */ __asm { NOT R10D }
    /* +0xbc3c9b */ __asm { ADD R10D,R11D }
    /* +0xbc3c9e */ __asm { MOVSXD R11,R10D }
    /* +0xbc3ca1 */ __asm { MOV R10,R8 }
    /* +0xbc3ca4 */ __asm { ROL R10,0x8 }
    /* +0xbc3ca8 */ __asm { XOR R10,R11 }
    /* +0xbc3cab */ __asm { MOV R11,-0x3cf2316470279a4f }
    /* +0xbc3cb5 */ __asm { CMP R10,R11 }
    /* +0xbc3cb8 */ __asm { JZ 0x7fffa5384907 }
    /* +0xbc3cbe */ __asm { LEA RSI,[0x7fffa4780116] }
    /* +0xbc3cc5 */ __asm { MOV qword ptr [RBP + 0x120],R11 }
    /* +0xbc3ccc */ __asm { MOV R9D,R13D }
    /* +0xbc3ccf */ __asm { OR R9D,0x1 }
    /* +0xbc3cd3 */ __asm { MOV R10W,0x68e2 }
    /* +0xbc3cd8 */ __asm { MOV EAX,dword ptr [R8 + 0x26c8] }
    /* +0xbc3cdf */ __asm { MOV R11W,0x73df }
    /* +0xbc3ce4 */ __asm { IMUL R11D,dword ptr [RBP + 0x4a0] }
    /* +0xbc3cec */ __asm { MOV RDX,qword ptr [RBP + 0x1298] }
    /* +0xbc3cf3 */ __asm { XOR R10D,EDX }
    /* +0xbc3cf6 */ __asm { ROL R10W,0x7 }
    /* +0xbc3cfb */ __asm { IMUL R10D,dword ptr [RBP + 0x188] }
    /* +0xbc3d03 */ __asm { XOR R11D,0x600d }
    /* +0xbc3d0a */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbc3d11 */ __asm { ADD R11D,ECX }
    /* +0xbc3d14 */ __asm { ADD R10D,0x4884 }
    /* +0xbc3d1b */ __asm { ROR R10W,CL }
    /* +0xbc3d1f */ __asm { MOV RDI,qword ptr [RBP + 0x480] }
    /* +0xbc3d26 */ __asm { XOR R11D,EDI }
    /* +0xbc3d29 */ __asm { SUB R11D,R13D }
    /* +0xbc3d2c */ __asm { IMUL R10D,R9D }
    /* +0xbc3d30 */ __asm { MOV R8W,0x6588 }
    /* +0xbc3d35 */ __asm { XOR R8D,EDX }
    /* +0xbc3d38 */ __asm { SUB R8D,ECX }
    /* +0xbc3d3b */ __asm { XOR R8D,EDI }
    /* +0xbc3d3e */ __asm { MOV ECX,R13D }
    /* +0xbc3d41 */ __asm { ROL R8W,CL }
    /* +0xbc3d45 */ __asm { MOVZX EDX,R11W }
    /* +0xbc3d49 */ __asm { MOVSX R10,R10W }
    /* +0xbc3d4d */ __asm { IMUL R11D,R8D,0x1685 }
    /* +0xbc3d54 */ __asm { MOVZX R9D,R11W }
    /* +0xbc3d58 */ __asm { LEA R8,[RBP + 0x1070] }
    /* +0xbc3d5f */ __asm { SYSCALL }
    /* +0xbc3d61 */ __asm { MOV R11,-0x115605361e02e763 }
    /* +0xbc3d6b */ __asm { CMP RSI,R11 }
    /* +0xbc3d6e */ __asm { NOP }
    /* +0xbc3d6f */ __asm { NOP }
    /* +0xbc3d70 */ __asm { NOP }
    /* +0xbc3d71 */ __asm { NOP }
    /* +0xbc3d72 */ __asm { NOP }
    /* +0xbc3d73 */ __asm { NOP }
    /* +0xbc3d74 */ __asm { NOP }
    /* +0xbc3d75 */ __asm { NOP }
    /* +0xbc3d76 */ __asm { NOP }
    /* +0xbc3d77 */ __asm { NOP }
    /* +0xbc3d78 */ __asm { NOP }
    /* +0xbc3d79 */ __asm { NOP }
    /* +0xbc3d7a */ __asm { NOP }
    /* +0xbc3d7b */ __asm { MOV qword ptr [RBP + 0x1070],R8 }
    /* +0xbc3d82 */ __asm { MOV R8W,0x981 }
    /* +0xbc3d87 */ __asm { MOV R11,qword ptr [RBP + 0x480] }
    /* +0xbc3d8e */ __asm { ADD R11D,R8D }
    /* +0xbc3d91 */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xbc3d98 */ __asm { MOV EAX,dword ptr [RSI + 0x4536] }
    /* +0xbc3d9e */ __asm { IMUL R11D,dword ptr [RBP + 0x498] }
    /* +0xbc3da6 */ __asm { XOR R11D,0x5343 }
    /* +0xbc3dad */ __asm { MOV ECX,R13D }
    /* +0xbc3db0 */ __asm { ROL R11W,CL }
    /* +0xbc3db4 */ __asm { MOVSX R10,R11W }
    /* +0xbc3db8 */ __asm { JMP 0x7fffa5334460 }
    /* +0xbc3dbd */ __asm { MOVDQA xmmword ptr [RBP + 0x1070],XMM0 }
    /* +0xbc3dc5 */ __asm { MOV dword ptr [RBP + 0x120],0x4f727cff }
    /* +0xbc3dcf */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbc3dd6 */ __asm { TEST R11D,R11D }
    /* +0xbc3dd9 */ __asm { NOP }
    /* +0xbc3dda */ __asm { NOP }
    /* +0xbc3ddb */ __asm { NOP }
    /* +0xbc3ddc */ __asm { NOP }
    /* +0xbc3ddd */ __asm { NOP }
    /* +0xbc3dde */ __asm { MOV R10,qword ptr [RBP + 0x1260] }
    /* +0xbc3de5 */ __asm { CMP dword ptr [RBP + 0x4b0],R10D }
    /* +0xbc3dec */ __asm { NOP }
    /* +0xbc3ded */ __asm { NOP }
    /* +0xbc3dee */ __asm { NOP }
    /* +0xbc3def */ __asm { NOP }
    /* +0xbc3df0 */ __asm { NOP }
    /* +0xbc3df1 */ __asm { MOV dword ptr [RBP + 0x1070],0x0 }
    /* +0xbc3dfb */ __asm { MOV dword ptr [RBP + 0x120],0xba80f9ae }
    /* +0xbc3e05 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbc3e0c */ __asm { MOV R11D,0xb81519e6 }
    /* +0xbc3e12 */ __asm { XOR R11D,dword ptr [RBP + 0x480] }
    /* +0xbc3e19 */ __asm { SUB R11D,dword ptr [RBP + 0x1298] }
    /* +0xbc3e20 */ __asm { XOR R11D,R13D }
    /* +0xbc3e23 */ __asm { ADD R11D,0x20faa7f1 }
    /* +0xbc3e2a */ __asm { MOV dword ptr [RBP + 0x120],R11D }
    /* +0xbc3e31 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbc3e38 */ __asm { LEA R8,[0x7fffa4783f59] }
    /* +0xbc3e3f */ __asm { MOV R11,-0x791f476358fa13ef }
    /* +0xbc3e49 */ __asm { CMP R8,R11 }
}


// ============================================================================
// Function : FUN_7fffa5342825  |  RVA: 0xbd2825  |  Size: 38126 bytes
// Callers  : none
// Callees  : FUN_7fffa5310571@0xba0571, FUN_7fffa52e8554@0xb78554
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5342825(void) {
    /* +0xbd2825 */ __asm { MOV R11W,0x51a2 }
    /* +0xbd282a */ __asm { IMUL R11D,R11D,-0x63f }
    /* +0xbd2831 */ __asm { MOV R9,qword ptr [RBP + 0x1038] }
    /* +0xbd2838 */ __asm { MOV ECX,R9D }
    /* +0xbd283b */ __asm { ROL R11W,CL }
    /* +0xbd283f */ __asm { IMUL R11D,R11D,0x3d37 }
    /* +0xbd2846 */ __asm { MOV RAX,qword ptr [RBP + 0x1298] }
    /* +0xbd284d */ __asm { XOR R11D,EAX }
    /* +0xbd2850 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xbd2857 */ __asm { ROL R11W,CL }
    /* +0xbd285b */ __asm { MOVZX R10D,R11W }
    /* +0xbd285f */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xbd2863 */ __asm { MOV R11W,0x83a }
    /* +0xbd2868 */ __asm { IMUL R11D,R11D,0xe3b }
    /* +0xbd286f */ __asm { ROL R11W,CL }
    /* +0xbd2873 */ __asm { XOR R11D,EAX }
    /* +0xbd2876 */ __asm { SUB R11D,R9D }
    /* +0xbd2879 */ __asm { MOVZX R10D,R11W }
    /* +0xbd287d */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xbd2881 */ __asm { MOV R11W,0x92af }
    /* +0xbd2886 */ __asm { LEA RDX,[0x7fffa47c106b] }
    /* +0xbd288d */ __asm { MOV R10,qword ptr [RBP + 0x188] }
    /* +0xbd2894 */ __asm { IMUL R10D,R11D }
    /* +0xbd2898 */ __asm { MOV ECX,R9D }
    /* +0xbd289b */ __asm { ROL R10W,CL }
    /* +0xbd289f */ __asm { ADD R10D,EAX }
    /* +0xbd28a2 */ __asm { NOT R10D }
    /* +0xbd28a5 */ __asm { MOVSX R8,R10W }
    /* +0xbd28a9 */ __asm { CMP uint8_t ptr [RDX + R8*0x1],0x0 }
    /* +0xbd28ae */ __asm { JNZ 0x7fffa538d266 }
    /* +0xbd28b4 */ __asm { NOP }
    /* +0xbd28b6 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xbd28bd */ __asm { MOV R8,0x0 }
    /* +0xbd28c4 */ __asm { MOV dword ptr [RBP + 0x5e0],0x561125f8 }
    /* +0xbd28ce */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbd28d5 */ __asm { CMP R11D,0xc45d612b }
    /* +0xbd28dc */ __asm { NOP }
    /* +0xbd28dd */ __asm { NOP }
    /* +0xbd28de */ __asm { NOP }
    /* +0xbd28df */ __asm { NOP }
    /* +0xbd28e0 */ __asm { MOV R11W,0x5eab }
    /* +0xbd28e5 */ __asm { MOV RDX,qword ptr [RBP + 0x480] }
    /* +0xbd28ec */ __asm { ADD R11D,EDX }
    /* +0xbd28ef */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xbd28f6 */ __asm { ROR R11W,CL }
    /* +0xbd28fa */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbd2901 */ __asm { ROL R11W,CL }
    /* +0xbd2905 */ __asm { IMUL R10D,R11D,-0x69f5 }
    /* +0xbd290c */ __asm { MOVSX R8,R10W }
    /* +0xbd2910 */ __asm { LEA R11,[0x7fffa47c03aa] }
    /* +0xbd2917 */ __asm { MOV uint8_t ptr [R11 + R8*0x1],0x1 }
    /* +0xbd291c */ __asm { MOV dword ptr [RBP + 0x5e0],0x9026c5fc }
    /* +0xbd2926 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbd292d */ __asm { MOV R11D,0xe439957c }
    /* +0xbd2933 */ __asm { SUB R11D,EDX }
    /* +0xbd2936 */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xbd293d */ __asm { IMUL R11D,R11D,0x4a8252f7 }
    /* +0xbd2944 */ __asm { XOR R11D,0x42ad35ec }
    /* +0xbd294b */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xbd2952 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbd2959 */ __asm { TEST R11B,0x1 }
    /* +0xbd295d */ __asm { JZ 0x7fffa538d011 }
    /* +0xbd2963 */ __asm { MOV dword ptr [RBP + 0x5e0],0xcf84cc93 }
    /* +0xbd296d */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbd2974 */ __asm { CMP R11D,0x351bdb67 }
    /* +0xbd297b */ __asm { JBE 0x7fffa538d019 }
    /* +0xbd2981 */ __asm { MOV R11D,0x4ed3f67c }
    /* +0xbd2987 */ __asm { MOV R10D,0x114dd6ac }
    /* +0xbd298d */ __asm { IMUL R11D,dword ptr [RBP + 0xe8] }
    /* +0xbd2995 */ __asm { XOR R11D,dword ptr [RBP + 0x480] }
    /* +0xbd299c */ __asm { ADD R11D,0x338fbd18 }
    /* +0xbd29a3 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbd29aa */ __asm { ROL R11D,CL }
    /* +0xbd29ad */ __asm { IMUL R10D,dword ptr [RBP + 0x11d8] }
    /* +0xbd29b5 */ __asm { ADD R11D,0x695682ba }
    /* +0xbd29bc */ __asm { MOVSXD R11,R11D }
    /* +0xbd29bf */ __asm { ROL R10D,CL }
    /* +0xbd29c2 */ __asm { NOT R10D }
    /* +0xbd29c5 */ __asm { IMUL R10D,R10D,0x223bce7b }
    /* +0xbd29cc */ __asm { ROL R10D,0x4 }
    /* +0xbd29d0 */ __asm { MOVSXD RDX,R10D }
    /* +0xbd29d3 */ __asm { CMP RDX,R11 }
    /* +0xbd29d6 */ __asm { JBE 0x7fffa5342a61 }
    /* +0xbd29dc */ __asm { MOV R9D,0xa4b63e7d }
    /* +0xbd29e2 */ __asm { SUB R9D,dword ptr [RBP + 0x1038] }
    /* +0xbd29e9 */ __asm { MOV R8,0x3161cb08ea86d37b }
    /* +0xbd29f3 */ __asm { MOV R11,-0x4f91cae969ce0e77 }
    /* +0xbd29fd */ __asm { MOV R10,-0x14c21efc66824856 }
    /* +0xbd2a07 */ __asm { MOV RAX,0x4fc20fae8ff372c3 }
    /* +0xbd2a11 */ __asm { MOV RDX,0x191c573709b30943 }
    /* +0xbd2a1b */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbd2a22 */ __asm { ROR R9D,CL }
    /* +0xbd2a25 */ __asm { MOV qword ptr [RBP + 0x10a0],R11 }
    /* +0xbd2a2c */ __asm { NOT R9D }
    /* +0xbd2a2f */ __asm { MOV R11,qword ptr [RBP + 0x480] }
    /* +0xbd2a36 */ __asm { ADD R11D,R9D }
    /* +0xbd2a39 */ __asm { ADD R11D,0x2cf8133d }
    /* +0xbd2a40 */ __asm { MOV qword ptr [RBP + 0x1090],RDX }
    /* +0xbd2a47 */ __asm { MOVSXD RDI,R11D }
    /* +0xbd2a4a */ __asm { MOV qword ptr [RBP + 0x1080],RAX }
    /* +0xbd2a51 */ __asm { MOV qword ptr [RBP + 0x1098],R8 }
    /* +0xbd2a58 */ __asm { MOV qword ptr [RBP + 0x10a8],R10 }
    /* +0xbd2a5f */ __asm { JMP 0x7fffa5342ad3 }
    /* +0xbd2a61 */ __asm { MOV R8,0x4fc20fae8ff372c3 }
    /* +0xbd2a6b */ __asm { MOV EDI,0x382c3056 }
    /* +0xbd2a70 */ __asm { XOR EDI,dword ptr [RBP + 0x1298] }
    /* +0xbd2a76 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xbd2a7d */ __asm { ROR EDI,CL }
    /* +0xbd2a7f */ __asm { MOV R11,-0x14c21efc66824856 }
    /* +0xbd2a89 */ __asm { NOT EDI }
    /* +0xbd2a8b */ __asm { IMUL EDI,dword ptr [RBP + 0xe8] }
    /* +0xbd2a92 */ __asm { MOV R10,-0x4f91cae969ce0e77 }
    /* +0xbd2a9c */ __asm { MOV RCX,0x191c573709b30943 }
    /* +0xbd2aa6 */ __asm { MOV RAX,0x3161cb08ea86d37b }
    /* +0xbd2ab0 */ __asm { MOV qword ptr [RBP + 0x10a8],R11 }
    /* +0xbd2ab7 */ __asm { MOV qword ptr [RBP + 0x10a0],R10 }
    /* +0xbd2abe */ __asm { MOV qword ptr [RBP + 0x1080],R8 }
    /* +0xbd2ac5 */ __asm { MOV qword ptr [RBP + 0x1098],RAX }
    /* +0xbd2acc */ __asm { MOV qword ptr [RBP + 0x1090],RCX }
    /* +0xbd2ad3 */ __asm { MOV R11D,0x68084530 }
    /* +0xbd2ad9 */ __asm { MOV R8,0x1f52b4d20d7ae4b4 }
    /* +0xbd2ae3 */ __asm { MOV R10,-0x7cc5941d51f059e1 }
    /* +0xbd2aed */ __asm { MOV qword ptr [RBP + 0x1078],R10 }
    /* +0xbd2af4 */ __asm { MOV qword ptr [RBP + 0x1070],R8 }
    /* +0xbd2afb */ __asm { SUB R11D,dword ptr [RBP + 0x480] }
    /* +0xbd2b02 */ __asm { ROL R11D,0x5 }
    /* +0xbd2b06 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbd2b0d */ __asm { ROR R11D,CL }
    /* +0xbd2b10 */ __asm { IMUL R11D,dword ptr [RBP + 0xe8] }
    /* +0xbd2b18 */ __asm { XOR R11D,0xb1d15497 }
    /* +0xbd2b1f */ __asm { MOV R8,-0x7e0cf33b55698464 }
    /* +0xbd2b29 */ __asm { MOV qword ptr [RBP + 0x1088],R8 }
    /* +0xbd2b30 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xbd2b37 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbd2b3e */ __asm { MOV R10D,0xfe9a5e97 }
    /* +0xbd2b44 */ __asm { MOV EAX,0xfffffefa }
    /* +0xbd2b49 */ __asm { SUB EAX,R10D }
    /* +0xbd2b4c */ __asm { ROL EAX,0x1d }
    /* +0xbd2b4f */ __asm { NOT EAX }
    /* +0xbd2b51 */ __asm { SUB EAX,ECX }
    /* +0xbd2b53 */ __asm { CMP R11D,EAX }
    /* +0xbd2b56 */ __asm { JC 0x7fffa5342b60 }
    /* +0xbd2b58 */ __asm { OR uint8_t ptr [RDX + -0x3d],AH }
    /* +0xbd2b5b */ __asm { XCHG EAX,ESI }
    /* +0xbd2b5c */ __asm { XCHG uint8_t ptr DS:[RDI],DH }
    /* +0xbd2b5f */ __asm { INT1 }
    /* +0xbd2b60 */ __asm { PUSHFQ }
    /* +0xbd2b61 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xbd2b69 */ __asm { POPFQ }
    /* +0xbd2b6a */ __asm { MOV word ptr [RBP + 0x1210],0x0 }
    /* +0xbd2b73 */ __asm { MOV dword ptr [RBP + 0x5e0],0xa814db9f }
    /* +0xbd2b7d */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbd2b84 */ __asm { TEST R11D,R11D }
    /* +0xbd2b87 */ __asm { JNS 0x7fffa538d021 }
    /* +0xbd2b8d */ __asm { MOV R11,0x4fab0fda8f9c728d }
    /* +0xbd2b97 */ __asm { MOV R10,-0x14c21ecc66b14862 }
    /* +0xbd2ba1 */ __asm { MOV ESI,0xacef28ff }
    /* +0xbd2ba6 */ __asm { ADD ESI,dword ptr [RBP + 0x1038] }
    /* +0xbd2bac */ __asm { MOV RAX,0x3150cb3deabed324 }
    /* +0xbd2bb6 */ __asm { MOV RDX,-0x4fa0cad969fb0e4f }
    /* +0xbd2bc0 */ __asm { NOP }
    /* +0xbd2bc1 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xbd2bc8 */ __asm { MOV R8,0x0 }
    /* +0xbd2bcf */ __asm { MOV R15D,0x8bdd594d }
    /* +0xbd2bd5 */ __asm { MOV R9,-0x7c9a946e51875990 }
    /* +0xbd2bdf */ __asm { LEA R8,[RBP + 0x5e0] }
    /* +0xbd2be6 */ __asm { XOR R15D,EDI }
    /* +0xbd2be9 */ __asm { ADD R15D,0x1d8e7c99 }
    /* +0xbd2bf0 */ __asm { MOV ECX,EDI }
    /* +0xbd2bf2 */ __asm { ROL ESI,CL }
    /* +0xbd2bf4 */ __asm { ADD ESI,0xe04f98ef }
    /* +0xbd2bfa */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbd2c01 */ __asm { ROR ESI,CL }
    /* +0xbd2c03 */ __asm { IMUL R15D,dword ptr [RBP + 0xd0] }
    /* +0xbd2c0b */ __asm { ROL R15D,0x1 }
    /* +0xbd2c0e */ __asm { IMUL R15D,dword ptr [RBP + 0xe8] }
    /* +0xbd2c16 */ __asm { MOVSXD RCX,R15D }
    /* +0xbd2c19 */ __asm { CMP RCX,RSI }
    /* +0xbd2c1c */ __asm { JA 0x7fffa5342cae }
    /* +0xbd2c22 */ __asm { MOV ECX,0x595b4c7d }
    /* +0xbd2c27 */ __asm { MOVDQA XMM0,xmmword ptr [RBP + 0x1070] }
    /* +0xbd2c2f */ __asm { MOVDQA XMM1,xmmword ptr [RBP + 0x1080] }
    /* +0xbd2c37 */ __asm { MOVDQA XMM2,xmmword ptr [RBP + 0x1090] }
    /* +0xbd2c3f */ __asm { MOVDQA XMM5,xmmword ptr [RBP + 0x10a0] }
    /* +0xbd2c47 */ __asm { MOV qword ptr [RBP + 0x5e8],R9 }
    /* +0xbd2c4e */ __asm { ADD ECX,dword ptr [RBP + 0x1038] }
    /* +0xbd2c54 */ __asm { MOV qword ptr [RBP + 0x610],RDX }
    /* +0xbd2c5b */ __asm { MOV qword ptr [RBP + 0x618],R10 }
    /* +0xbd2c62 */ __asm { PXOR XMM5,xmmword ptr [R8 + 0x30] }
    /* +0xbd2c68 */ __asm { MOV qword ptr [RBP + 0x608],RAX }
    /* +0xbd2c6f */ __asm { IMUL R10D,ECX,-0x625477c1 }
    /* +0xbd2c76 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xbd2c7d */ __asm { ROL R10D,CL }
    /* +0xbd2c80 */ __asm { ADD R10D,dword ptr [RBP + 0x1298] }
    /* +0xbd2c87 */ __asm { IMUL R10D,R10D,0x7ffe0241 }
    /* +0xbd2c8e */ __asm { MOVSXD R12,R10D }
    /* +0xbd2c91 */ __asm { MOV R10,0x1972575809da0937 }
    /* +0xbd2c9b */ __asm { MOV qword ptr [RBP + 0x600],R10 }
    /* +0xbd2ca2 */ __asm { MOV qword ptr [RBP + 0x5f0],R11 }
    /* +0xbd2ca9 */ __asm { JMP 0x7fffa5342d2f }
    /* +0xbd2cae */ __asm { MOV RCX,0x1972575809da0937 }
    /* +0xbd2cb8 */ __asm { MOV qword ptr [RBP + 0x5f0],R11 }
    /* +0xbd2cbf */ __asm { MOVDQA XMM0,xmmword ptr [RBP + 0x1070] }
    /* +0xbd2cc7 */ __asm { MOVDQA XMM1,xmmword ptr [RBP + 0x1080] }
    /* +0xbd2ccf */ __asm { MOVDQA XMM2,xmmword ptr [RBP + 0x1090] }
    /* +0xbd2cd7 */ __asm { MOVDQA XMM5,xmmword ptr [RBP + 0x10a0] }
    /* +0xbd2cdf */ __asm { MOV qword ptr [RBP + 0x608],RAX }
    /* +0xbd2ce6 */ __asm { MOV qword ptr [RBP + 0x600],RCX }
    /* +0xbd2ced */ __asm { MOV qword ptr [RBP + 0x618],R10 }
    /* +0xbd2cf4 */ __asm { MOV qword ptr [RBP + 0x5e8],R9 }
    /* +0xbd2cfb */ __asm { MOV qword ptr [RBP + 0x610],RDX }
    /* +0xbd2d02 */ __asm { MOV R11D,0x40b2d7d8 }
    /* +0xbd2d08 */ __asm { IMUL R11D,R11D,0xd2c34c3 }
    /* +0xbd2d0f */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbd2d16 */ __asm { ROR R11D,CL }
    /* +0xbd2d19 */ __asm { MOV R12D,0x39d826bf }
    /* +0xbd2d1f */ __asm { SUB R12D,R11D }
    /* +0xbd2d22 */ __asm { XOR R12D,dword ptr [RBP + 0x1298] }
    /* +0xbd2d29 */ __asm { PXOR XMM5,xmmword ptr [R8 + 0x30] }
    /* +0xbd2d2f */ __asm { MOV R11,0x1f36b4bc0d13e4e3 }
    /* +0xbd2d39 */ __asm { MOV qword ptr [RBP + 0x5e0],R11 }
    /* +0xbd2d40 */ __asm { MOV R11,-0x7e6df35855008406 }
    /* +0xbd2d4a */ __asm { MOV qword ptr [RBP + 0x5f8],R11 }
    /* +0xbd2d51 */ __asm { PXOR XMM0,xmmword ptr [R8] }
    /* +0xbd2d56 */ __asm { PXOR XMM1,xmmword ptr [R8 + 0x10] }
    /* +0xbd2d5c */ __asm { MOVDQA xmmword ptr [RBP + 0x1080],XMM1 }
    /* +0xbd2d64 */ __asm { PXOR XMM2,xmmword ptr [R8 + 0x20] }
    /* +0xbd2d6a */ __asm { MOVDQA xmmword ptr [RBP + 0x1090],XMM2 }
    /* +0xbd2d72 */ __asm { MOVDQA xmmword ptr [RBP + 0x10a0],XMM5 }
    /* +0xbd2d7a */ __asm { MOVDQA xmmword ptr [RBP + 0x1070],XMM0 }
    /* +0xbd2d82 */ __asm { RDTSC }
    /* +0xbd2d84 */ __asm { SHL RDX,0x20 }
    /* +0xbd2d88 */ __asm { OR RDX,RAX }
    /* +0xbd2d8b */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xbd2d95 */ __asm { IMUL RDX,R11 }
    /* +0xbd2d99 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xbd2da3 */ __asm { ADD RCX,RDX }
    /* +0xbd2da6 */ __asm { MOV R10,RCX }
    /* +0xbd2da9 */ __asm { SHR R10,0x1b }
    /* +0xbd2dad */ __asm { MOV RDX,RCX }
    /* +0xbd2db0 */ __asm { SHR RDX,0x2d }
    /* +0xbd2db4 */ __asm { XOR R10D,EDX }
    /* +0xbd2db7 */ __asm { SHR RCX,0x3b }
    /* +0xbd2dbb */ __asm { ROR R10D,CL }
    /* +0xbd2dbe */ __asm { AND R10D,0x3 }
    /* +0xbd2dc2 */ __asm { CMP R10D,0x2 }
    /* +0xbd2dc6 */ __asm { JC 0x7fffa5342ed5 }
    /* +0xbd2dcc */ __asm { CMP R10D,0x3 }
    /* +0xbd2dd0 */ __asm { JNZ 0x7fffa534334f }
    /* +0xbd2dd6 */ __asm { LEA R8,[0x7fffa47bb495] }
    /* +0xbd2ddd */ __asm { MOV R11,-0x3c8a5cb886456da9 }
    /* +0xbd2de7 */ __asm { CMP R8,R11 }
    /* +0xbd2dea */ __asm { JZ 0x7fffa538d039 }
    /* +0xbd2df0 */ __asm { MOV R11D,0xe95c8cca }
    /* +0xbd2df6 */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x11f8] }
    /* +0xbd2dfe */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + 0x1208] }
    /* +0xbd2e07 */ __asm { ROL R10B,0x4 }
    /* +0xbd2e0b */ __asm { MOV uint8_t ptr [RBP + 0x5e0],R10B }
    /* +0xbd2e12 */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + 0x1209] }
    /* +0xbd2e1b */ __asm { ROL R10B,0x4 }
    /* +0xbd2e1f */ __asm { MOV uint8_t ptr [RBP + 0x5e1],R10B }
    /* +0xbd2e26 */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + 0x120a] }
    /* +0xbd2e2f */ __asm { ROL R10B,0x4 }
    /* +0xbd2e33 */ __asm { MOV uint8_t ptr [RBP + 0x5e2],R10B }
    /* +0xbd2e3a */ __asm { MOVZX ECX,uint8_t ptr [R8 + RCX*0x4 + 0x120b] }
    /* +0xbd2e43 */ __asm { ROL CL,0x4 }
    /* +0xbd2e46 */ __asm { MOV uint8_t ptr [RBP + 0x5e3],CL }
    /* +0xbd2e4c */ __asm { MOV R10D,0x65e8ce72 }
    /* +0xbd2e52 */ __asm { XOR R10D,dword ptr [RBP + 0x5e0] }
    /* +0xbd2e59 */ __asm { SUB R11D,dword ptr [RBP + 0x1038] }
    /* +0xbd2e60 */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xbd2e67 */ __asm { IMUL ECX,R11D,-0x7eaf1499 }
    /* +0xbd2e6e */ __asm { ADD ECX,EDI }
    /* +0xbd2e70 */ __asm { XOR RCX,0x4b165036 }
    /* +0xbd2e77 */ __asm { MOV R11D,dword ptr [RCX] }
    /* +0xbd2e7a */ __asm { BT R10D,R11D }
    /* +0xbd2e7e */ __asm { JNC 0x7fffa5343459 }
    /* +0xbd2e84 */ __asm { LEA R8,[0x7fffa47b66e2] }
    /* +0xbd2e8b */ __asm { MOV R11,-0x1add0620eb718e62 }
    /* +0xbd2e95 */ __asm { CMP R8,R11 }
    /* +0xbd2e98 */ __asm { JZ 0x7fffa538d041 }
    /* +0xbd2e9e */ __asm { MOV R11D,EDI }
    /* +0xbd2ea1 */ __asm { SUB R11D,dword ptr [RBP + 0x1298] }
    /* +0xbd2ea8 */ __asm { MOV qword ptr [RBP + 0x5e0],R10 }
    /* +0xbd2eaf */ __asm { MOV R10W,0x1d16 }
    /* +0xbd2eb4 */ __asm { ADD R10D,R11D }
    /* +0xbd2eb7 */ __asm { MOV EAX,dword ptr [R8 + 0x5df2] }
    /* +0xbd2ebe */ __asm { XOR R10D,0x225 }
    /* +0xbd2ec5 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbd2ecc */ __asm { ROR R10W,CL }
    /* +0xbd2ed0 */ __asm { JMP 0x7fffa538d164 }
    /* +0xbd2ed5 */ __asm { CMP R10D,0x1 }
    /* +0xbd2ed9 */ __asm { JNZ 0x7fffa53433df }
    /* +0xbd2edf */ __asm { LEA R8,[0x7fffa47b6047] }
    /* +0xbd2ee6 */ __asm { MOV R11,-0x2061a3e086daba70 }
    /* +0xbd2ef0 */ __asm { CMP R8,R11 }
    /* +0xbd2ef3 */ __asm { JZ 0x7fffa538d04d }
    /* +0xbd2ef9 */ __asm { MOV R11D,0xe94721fb }
    /* +0xbd2eff */ __asm { ADD R11D,dword ptr [RBP + 0x1038] }
    /* +0xbd2f06 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbd2f0d */ __asm { ROL R11D,CL }
    /* +0xbd2f10 */ __asm { IMUL R10D,R11D,0x4b2088bb }
    /* +0xbd2f17 */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x6646] }
    /* +0xbd2f1f */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + 0x6656] }
    /* +0xbd2f28 */ __asm { ROL R9B,0x4 }
    /* +0xbd2f2c */ __asm { MOV uint8_t ptr [RBP + 0x5e0],R9B }
    /* +0xbd2f33 */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + 0x6657] }
    /* +0xbd2f3c */ __asm { ROL R9B,0x4 }
    /* +0xbd2f40 */ __asm { MOV uint8_t ptr [RBP + 0x5e1],R9B }
    /* +0xbd2f47 */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + 0x6658] }
    /* +0xbd2f50 */ __asm { ROL R9B,0x4 }
    /* +0xbd2f54 */ __asm { MOV uint8_t ptr [RBP + 0x5e2],R9B }
    /* +0xbd2f5b */ __asm { MOVZX ECX,uint8_t ptr [R8 + RCX*0x4 + 0x6659] }
    /* +0xbd2f64 */ __asm { ROL CL,0x4 }
    /* +0xbd2f67 */ __asm { NOT R10D }
    /* +0xbd2f6a */ __asm { MOV uint8_t ptr [RBP + 0x5e3],CL }
    /* +0xbd2f70 */ __asm { MOV R11D,0x65e8ce72 }
    /* +0xbd2f76 */ __asm { XOR R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbd2f7d */ __asm { MOV R10D,dword ptr [R10] }
    /* +0xbd2f80 */ __asm { BT R11D,R10D }
    /* +0xbd2f84 */ __asm { JNC 0x7fffa53434a8 }
    /* +0xbd2f8a */ __asm { RDTSC }
    /* +0xbd2f8c */ __asm { SHL RDX,0x20 }
    /* +0xbd2f90 */ __asm { OR RDX,RAX }
    /* +0xbd2f93 */ __asm { MOV R11,-0x6bdeac2e46be109b }
    /* +0xbd2f9d */ __asm { MOV R8,RDX }
    /* +0xbd2fa0 */ __asm { IMUL R8,R11 }
    /* +0xbd2fa4 */ __asm { MOV R10D,EDI }
    /* +0xbd2fa7 */ __asm { ADD R11,RDX }
    /* +0xbd2faa */ __asm { MOV EAX,0x953e98a5 }
    /* +0xbd2faf */ __asm { IMUL EAX,EAX,0x4209ba7d }
    /* +0xbd2fb5 */ __asm { ADD EAX,0xd3ce089c }
    /* +0xbd2fba */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbd2fc1 */ __asm { ROL EAX,CL }
    /* +0xbd2fc3 */ __asm { MOV R9,qword ptr [RBP + 0x1298] }
    /* +0xbd2fca */ __asm { MOV ECX,R9D }
    /* +0xbd2fcd */ __asm { ROR EAX,CL }
    /* +0xbd2fcf */ __asm { OR R10D,0x1 }
    /* +0xbd2fd3 */ __asm { IMUL EAX,R10D }
    /* +0xbd2fd7 */ __asm { MOVSXD RDX,EAX }
    /* +0xbd2fda */ __asm { CMP RDX,0x40bb37b8 }
    /* +0xbd2fe1 */ __asm { CMOVNZ R11,R8 }
    /* +0xbd2fe5 */ __asm { MOV RCX,0x48fea276b11e661e }
    /* +0xbd2fef */ __asm { ADD RCX,R11 }
    /* +0xbd2ff2 */ __asm { MOV R10,RCX }
    /* +0xbd2ff5 */ __asm { SHR R10,0x1b }
    /* +0xbd2ff9 */ __asm { MOV RDX,RCX }
    /* +0xbd2ffc */ __asm { SHR RDX,0x2d }
    /* +0xbd3000 */ __asm { XOR R10D,EDX }
    /* +0xbd3003 */ __asm { SHR RCX,0x3b }
    /* +0xbd3007 */ __asm { ROR R10D,CL }
    /* +0xbd300a */ __asm { MOV dword ptr [RBP + 0x5e0],0x6d6661c5 }
    /* +0xbd3014 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbd301b */ __asm { MOV R11D,0x765540f1 }
    /* +0xbd3021 */ __asm { ADD R11D,R9D }
    /* +0xbd3024 */ __asm { MOV ECX,R12D }
    /* +0xbd3027 */ __asm { ROR R11D,CL }
    /* +0xbd302a */ __asm { XOR R11D,0x980efe5a }
    /* +0xbd3031 */ __asm { IMUL R11D,dword ptr [RBP + 0xe8] }
    /* +0xbd3039 */ __asm { CMP R10D,R11D }
    /* +0xbd303c */ __asm { JNC 0x7fffa534325b }
    /* +0xbd3042 */ __asm { MOV R11D,0x6a8531d7 }
    /* +0xbd3048 */ __asm { ADD R11D,0x9db81da0 }
    /* +0xbd304f */ __asm { MOV ECX,EDI }
    /* +0xbd3051 */ __asm { ROR R11D,CL }
    /* +0xbd3054 */ __asm { NOT R11D }
    /* +0xbd3057 */ __asm { IMUL R11D,dword ptr [RBP + 0xd0] }
    /* +0xbd305f */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xbd3066 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbd306d */ __asm { LEA R8,[0x7fffa47c31c5] }
    /* +0xbd3074 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbd307b */ __asm { OR RCX,0x1 }
    /* +0xbd307f */ __asm { MOV R11,0x4b4dfb47fe9ab499 }
    /* +0xbd3089 */ __asm { XOR R11,qword ptr [RBP + 0x1038] }
    /* +0xbd3090 */ __asm { MOV RDX,-0xe15ee05c }
    /* +0xbd309a */ __asm { ADD RDX,R11 }
    /* +0xbd309d */ __asm { IMUL RDX,RCX }
    /* +0xbd30a1 */ __asm { SUB RDX,qword ptr [RBP + 0x480] }
    /* +0xbd30a8 */ __asm { CMP R8,RDX }
    /* +0xbd30ab */ __asm { NOP }
    /* +0xbd30ac */ __asm { NOP }
    /* +0xbd30ad */ __asm { NOP }
    /* +0xbd30ae */ __asm { MOV R11D,0x6b9fd9da }
    /* +0xbd30b4 */ __asm { SUB R11D,dword ptr [RBP + 0x1298] }
    /* +0xbd30bb */ __asm { IMUL R11D,R11D,0x2a3d6691 }
    /* +0xbd30c2 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbd30c9 */ __asm { ROL R11D,CL }
    /* +0xbd30cc */ __asm { IMUL R10D,R11D,-0x675326bf }
    /* +0xbd30d3 */ __asm { MOVZX ECX,uint8_t ptr [R8 + -0x6b38] }
    /* +0xbd30db */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + -0x6b28] }
    /* +0xbd30e4 */ __asm { ROL R9B,0x4 }
    /* +0xbd30e8 */ __asm { MOV uint8_t ptr [RBP + 0x5e0],R9B }
    /* +0xbd30ef */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + -0x6b27] }
    /* +0xbd30f8 */ __asm { ROL R9B,0x4 }
    /* +0xbd30fc */ __asm { MOV uint8_t ptr [RBP + 0x5e1],R9B }
    /* +0xbd3103 */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + -0x6b26] }
    /* +0xbd310c */ __asm { ROL R9B,0x4 }
    /* +0xbd3110 */ __asm { MOV uint8_t ptr [RBP + 0x5e2],R9B }
    /* +0xbd3117 */ __asm { MOVZX ECX,uint8_t ptr [R8 + RCX*0x4 + -0x6b25] }
    /* +0xbd3120 */ __asm { ROL CL,0x4 }
    /* +0xbd3123 */ __asm { XOR R10D,EDI }
    /* +0xbd3126 */ __asm { MOV uint8_t ptr [RBP + 0x5e3],CL }
    /* +0xbd312c */ __asm { MOV R11D,0x65e8ce72 }
    /* +0xbd3132 */ __asm { XOR R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbd3139 */ __asm { MOV R10D,dword ptr [R10] }
    /* +0xbd313c */ __asm { BT R11D,R10D }
    /* +0xbd3140 */ __asm { JNC 0x7fffa534325b }
    /* +0xbd3146 */ __asm { PXOR XMM0,XMM0 }
    /* +0xbd314a */ __asm { MOVDQA xmmword ptr [RBP + 0x5e0],XMM0 }
    /* +0xbd3152 */ __asm { MOV dword ptr [RBP + 0x120],0x64c442df }
    /* +0xbd315c */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbd3163 */ __asm { CMP R11D,0x807f561 }
    /* +0xbd316a */ __asm { NOP }
    /* +0xbd316b */ __asm { NOP }
    /* +0xbd316c */ __asm { NOP }
    /* +0xbd316d */ __asm { NOP }
    /* +0xbd316e */ __asm { NOP }
    /* +0xbd316f */ __asm { NOP }
    /* +0xbd3170 */ __asm { NOP }
    /* +0xbd3171 */ __asm { MOV dword ptr [RBP + 0x5e0],0x0 }
    /* +0xbd317b */ __asm { MOV dword ptr [RBP + 0x120],0xfbbf5fbf }
    /* +0xbd3185 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbd318c */ __asm { MOV R10,qword ptr [RBP + 0x1260] }
    /* +0xbd3193 */ __asm { CMP dword ptr [RBP + 0x4b0],R10D }
    /* +0xbd319a */ __asm { NOP }
    /* +0xbd319b */ __asm { NOP }
    /* +0xbd319c */ __asm { NOP }
    /* +0xbd319d */ __asm { NOP }
    /* +0xbd319e */ __asm { NOP }
    /* +0xbd319f */ __asm { MOV dword ptr [RBP + 0x120],0x946266f }
    /* +0xbd31a9 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbd31b0 */ __asm { CMP R11D,0x93416cd4 }
    /* +0xbd31b7 */ __asm { JNC 0x7fffa538d058 }
    /* +0xbd31bd */ __asm { LEA R8,[0x7fffa47b4489] }
    /* +0xbd31c4 */ __asm { MOV R11,0x2bfb2e110cef2f48 }
    /* +0xbd31ce */ __asm { CMP R8,R11 }
    /* +0xbd31d1 */ __asm { NOP }
    /* +0xbd31d2 */ __asm { NOP }
    /* +0xbd31d3 */ __asm { NOP }
    /* +0xbd31d4 */ __asm { NOP }
    /* +0xbd31d5 */ __asm { NOP }
    /* +0xbd31d6 */ __asm { NOP }
    /* +0xbd31d7 */ __asm { MOV R11W,0x5617 }
    /* +0xbd31dc */ __asm { MOV R10W,0x4d40 }
    /* +0xbd31e1 */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xbd31e8 */ __asm { XOR R10D,EDX }
    /* +0xbd31eb */ __asm { MOV RSI,qword ptr [RBP + 0x1298] }
    /* +0xbd31f2 */ __asm { ADD R10D,ESI }
    /* +0xbd31f5 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xbd31fc */ __asm { ROL R10W,CL }
    /* +0xbd3200 */ __asm { XOR R10D,0x684 }
    /* +0xbd3207 */ __asm { ROL R10W,0x4 }
    /* +0xbd320c */ __asm { XOR R11D,EDX }
    /* +0xbd320f */ __asm { MOVZX EDX,R10W }
    /* +0xbd3213 */ __asm { MOV qword ptr [RBP + 0x120],R10 }
    /* +0xbd321a */ __asm { ROR R11W,CL }
    /* +0xbd321e */ __asm { MOV EAX,dword ptr [R8 + 0x803f] }
    /* +0xbd3225 */ __asm { ADD R11D,ESI }
    /* +0xbd3228 */ __asm { ROL R11W,0x1 }
    /* +0xbd322c */ __asm { MOVZX R9D,R11W }
    /* +0xbd3230 */ __asm { MOV R11D,0x11577658 }
    /* +0xbd3236 */ __asm { IMUL R11D,dword ptr [RBP + 0xe8] }
    /* +0xbd323e */ __asm { ADD R11D,ESI }
    /* +0xbd3241 */ __asm { MOV R10D,0x38091fea }
    /* +0xbd3247 */ __asm { SUB R10D,R11D }
    /* +0xbd324a */ __asm { MOV ECX,EDI }
    /* +0xbd324c */ __asm { ROR R10D,CL }
    /* +0xbd324f */ __asm { MOVSXD R10,R10D }
    /* +0xbd3252 */ __asm { LEA R8,[RBP + 0x5e0] }
    /* +0xbd3259 */ __asm { SYSCALL }
    /* +0xbd325b */ __asm { LEA R8,[0x7fffa477f4e7] }
    /* +0xbd3262 */ __asm { MOV RCX,-0x47f258458720e3df }
    /* +0xbd326c */ __asm { MOV R10D,0xc5f476cf }
    /* +0xbd3272 */ __asm { XOR R10D,R12D }
    /* +0xbd3275 */ __asm { ADD R10D,0x3a161311 }
    /* +0xbd327c */ __asm { MOV RSI,qword ptr [RBP + 0x1038] }
    /* +0xbd3283 */ __asm { XOR R10D,ESI }
    /* +0xbd3286 */ __asm { MOV EAX,R12D }
    /* +0xbd3289 */ __asm { OR EAX,0x1 }
    /* +0xbd328c */ __asm { MOV R9D,0x98365bd4 }
    /* +0xbd3292 */ __asm { MOV R11,-0x1080bac3cadeb22f }
    /* +0xbd329c */ __asm { XOR R11,RSI }
    /* +0xbd329f */ __asm { ROL R11,0x38 }
    /* +0xbd32a3 */ __asm { MOV EDX,0xd3906a3c }
    /* +0xbd32a8 */ __asm { ADD EDX,EDI }
    /* +0xbd32aa */ __asm { XOR EDX,0xc0000420 }
    /* +0xbd32b0 */ __asm { SUB EDX,ESI }
    /* +0xbd32b2 */ __asm { MOV R15,qword ptr [RBP + 0x1298] }
    /* +0xbd32b9 */ __asm { XOR EDX,R15D }
    /* +0xbd32bc */ __asm { MOVSXD RDX,EDX }
    /* +0xbd32bf */ __asm { IMUL R9D,R9D,-0x3fffff45 }
    /* +0xbd32c6 */ __asm { XOR R9D,ESI }
    /* +0xbd32c9 */ __asm { ADD R9D,R15D }
    /* +0xbd32cc */ __asm { XOR R9D,0x3446db54 }
    /* +0xbd32d3 */ __asm { IMUL R9D,EAX }
    /* +0xbd32d7 */ __asm { MOV RAX,R8 }
    /* +0xbd32da */ __asm { IMUL RAX,RCX }
    /* +0xbd32de */ __asm { CMP RDX,R9 }
    /* +0xbd32e1 */ __asm { LEA RDX,[R8 + RCX*0x1] }
    /* +0xbd32e5 */ __asm { CMOVGE RAX,RDX }
}


// ============================================================================
// Function : FUN_7fffa535699f  |  RVA: 0xbe699f  |  Size: 3338 bytes
// Callers  : none
// Callees  : FUN_7fffa537b24b@0xc0b24b
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa535699f(void) {
    /* +0xbe699f */ __asm { MOV R11,qword ptr [RBP + 0x480] }
    /* +0xbe69a6 */ __asm { SUB R11D,dword ptr [RBP + 0x1298] }
    /* +0xbe69ad */ __asm { MOV R10W,0xa303 }
    /* +0xbe69b2 */ __asm { XOR R10D,0x633f }
    /* +0xbe69b9 */ __asm { IMUL R10D,R10D,0x2d9f }
    /* +0xbe69c0 */ __asm { ADD R10D,R11D }
    /* +0xbe69c3 */ __asm { XOR R10D,dword ptr [RBP + 0x1038] }
    /* +0xbe69ca */ __asm { MOVZX R10D,R10W }
    /* +0xbe69ce */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xbe69d2 */ __asm { MOV R8,-0x1430b3f2d6178579 }
    /* +0xbe69dc */ __asm { MOV RDX,-0x6501c39d8894e085 }
    /* +0xbe69e6 */ __asm { CMP R11,RDX }
    /* +0xbe69e9 */ __asm { JNZ 0x7fffa53569f5 }
    /* +0xbe69eb */ __asm { INT3 }
    /* +0xbe69f5 */ __asm { NOP }
    /* +0xbe69f7 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xbe69fe */ __asm { MOV R8,0x0 }
    /* +0xbe6a05 */ __asm { MOV RCX,-0x7c9a946e51875990 }
    /* +0xbe6a0f */ __asm { MOV R8,0x1f59b4ce0d61e4a6 }
    /* +0xbe6a19 */ __asm { LEA R10,[RBP + 0x5e0] }
    /* +0xbe6a20 */ __asm { MOV R11,-0x7c9a946e518759fe }
    /* +0xbe6a2a */ __asm { MOV qword ptr [RBP + 0x1058],R11 }
    /* +0xbe6a31 */ __asm { MOV R11,0x1f36b4bc0d13e4e3 }
    /* +0xbe6a3b */ __asm { MOV qword ptr [RBP + 0x1050],R8 }
    /* +0xbe6a42 */ __asm { MOV qword ptr [RBP + 0x50],RCX }
    /* +0xbe6a46 */ __asm { MOV qword ptr [RBP + 0x5e8],RCX }
    /* +0xbe6a4d */ __asm { MOV qword ptr [RBP + 0x5e0],R11 }
    /* +0xbe6a54 */ __asm { MOVAPS XMM0,xmmword ptr [R10] }
    /* +0xbe6a58 */ __asm { XORPS XMM0,xmmword ptr [RBP + 0x1050] }
    /* +0xbe6a5f */ __asm { MOVAPS xmmword ptr [RBP + 0x1050],XMM0 }
    /* +0xbe6a66 */ __asm { MOV dword ptr [RBP + 0x5e0],0x9e63865c }
    /* +0xbe6a70 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xbe6a77 */ __asm { MOV R8,-0x7e6df35855008406 }
    /* +0xbe6a81 */ __asm { MOV qword ptr [RBP + 0x590],R8 }
    /* +0xbe6a88 */ __asm { MOV R8,-0x16774856e5b60488 }
    /* +0xbe6a92 */ __asm { MOV qword ptr [RBP + 0x1b0],R8 }
    /* +0xbe6a99 */ __asm { MOV R13,-0x16774856e5b604aa }
    /* +0xbe6aa3 */ __asm { MOV R12,0x1f5ab4de0d7ce4b1 }
    /* +0xbe6aad */ __asm { MOV R8,-0x7cf2944e51ff59e1 }
    /* +0xbe6ab7 */ __asm { MOV qword ptr [RBP + 0x12e0],R8 }
    /* +0xbe6abe */ __asm { MOV R8,0x2c9695b40925c98b }
    /* +0xbe6ac8 */ __asm { MOV qword ptr [RBP + 0x3b0],R8 }
    /* +0xbe6acf */ __asm { MOV RBX,-0x4fc5caab69db0e38 }
    /* +0xbe6ad9 */ __asm { MOV RDI,-0x14b01ead66c54813 }
    /* +0xbe6ae3 */ __asm { MOV R8,0x3150cb3deabed324 }
    /* +0xbe6aed */ __asm { MOV qword ptr [RBP + 0x1350],R8 }
    /* +0xbe6af4 */ __asm { MOV R10D,0x7ed9d992 }
    /* +0xbe6afa */ __asm { SUB R10D,dword ptr [RBP + 0x480] }
    /* +0xbe6b01 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbe6b08 */ __asm { ROL R10D,CL }
    /* +0xbe6b0b */ __asm { IMUL R10D,dword ptr [RBP + 0xe8] }
    /* +0xbe6b13 */ __asm { ROL R10D,0x3 }
    /* +0xbe6b17 */ __asm { MOV RDX,0x4fdf0ffa8fef72ec }
    /* +0xbe6b21 */ __asm { MOV RCX,0x2cf195da094cc9ff }
    /* +0xbe6b2b */ __asm { MOV R9,0x3122cb69ea9ed30a }
    /* +0xbe6b35 */ __asm { LEA R15,[RBP + 0x5e0] }
    /* +0xbe6b3c */ __asm { MOV R14,-0x4fa0cad969fb0e4f }
    /* +0xbe6b46 */ __asm { MOV R8,-0x7e09f33d556d846d }
    /* +0xbe6b50 */ __asm { CMP R10,0x6b0627b9 }
    /* +0xbe6b57 */ __asm { JZ 0x7fffa5368b92 }
    /* +0xbe6b5d */ __asm { MOV qword ptr [RBP + 0x10b8],R13 }
    /* +0xbe6b64 */ __asm { MOV R10,0x1972575809da0937 }
    /* +0xbe6b6e */ __asm { MOV RAX,-0x14c21ecc66b14862 }
    /* +0xbe6b78 */ __asm { MOV qword ptr [RBP + 0x1098],R9 }
    /* +0xbe6b7f */ __asm { MOV qword ptr [RBP + 0x1088],R8 }
    /* +0xbe6b86 */ __asm { MOV qword ptr [RBP + 0x10a0],RBX }
    /* +0xbe6b8d */ __asm { MOV qword ptr [RBP + 0x1080],RDX }
    /* +0xbe6b94 */ __asm { MOV RDX,0x4fab0fda8f9c728d }
    /* +0xbe6b9e */ __asm { MOV qword ptr [RBP + 0x10a8],RDI }
    /* +0xbe6ba5 */ __asm { MOV R8,0x1906572d09b50917 }
    /* +0xbe6baf */ __asm { MOV qword ptr [RBP + 0x1090],R8 }
    /* +0xbe6bb6 */ __asm { MOV qword ptr [RBP + 0x1070],R12 }
    /* +0xbe6bbd */ __asm { MOV R8D,0x6b57504c }
    /* +0xbe6bc3 */ __asm { IMUL R8D,dword ptr [RBP + 0xe8] }
    /* +0xbe6bcb */ __asm { SUB R8D,dword ptr [RBP + 0x1298] }
    /* +0xbe6bd2 */ __asm { IMUL EDI,R8D,-0x7e22e29f }
    /* +0xbe6bd9 */ __asm { ROL EDI,0x5 }
    /* +0xbe6bdc */ __asm { ADD EDI,dword ptr [RBP + 0x480] }
    /* +0xbe6be2 */ __asm { JMP 0x7fffa5368c0e }
    /* +0xbf8b92 */ __asm { MOV ESI,0xba5299ee }
    /* +0xbf8b97 */ __asm { MOV qword ptr [RBP + 0x10a0],RBX }
    /* +0xbf8b9e */ __asm { MOV qword ptr [RBP + 0x1088],R8 }
    /* +0xbf8ba5 */ __asm { MOV qword ptr [RBP + 0x1070],R12 }
    /* +0xbf8bac */ __asm { SUB ESI,dword ptr [RBP + 0x1038] }
    /* +0xbf8bb2 */ __asm { MOV qword ptr [RBP + 0x1080],RDX }
    /* +0xbf8bb9 */ __asm { MOV RAX,-0x14c21ecc66b14862 }
    /* +0xbf8bc3 */ __asm { ROL ESI,0x8 }
    /* +0xbf8bc6 */ __asm { NOT ESI }
    /* +0xbf8bc8 */ __asm { MOV qword ptr [RBP + 0x1098],R9 }
    /* +0xbf8bcf */ __asm { MOV RDX,0x4fab0fda8f9c728d }
    /* +0xbf8bd9 */ __asm { MOV qword ptr [RBP + 0x10a8],RDI }
    /* +0xbf8be0 */ __asm { MOV R10,0x1972575809da0937 }
    /* +0xbf8bea */ __asm { MOV qword ptr [RBP + 0x10b8],R13 }
    /* +0xbf8bf1 */ __asm { MOV R8,0x1906572d09b50917 }
    /* +0xbf8bfb */ __asm { IMUL ESI,dword ptr [RBP + 0xd0] }
    /* +0xbf8c02 */ __asm { NOT ESI }
    /* +0xbf8c04 */ __asm { MOVSXD RDI,ESI }
    /* +0xbf8c07 */ __asm { MOV qword ptr [RBP + 0x1090],R8 }
    /* +0xbf8c0e */ __asm { MOV R8W,0xd58b }
    /* +0xbf8c13 */ __asm { MOV R9,qword ptr [RBP + 0x12e0] }
    /* +0xbf8c1a */ __asm { MOV qword ptr [RBP + 0x1078],R9 }
    /* +0xbf8c21 */ __asm { MOV qword ptr [RBP + 0x10b0],RCX }
    /* +0xbf8c28 */ __asm { MOV RCX,qword ptr [RBP + 0x50] }
    /* +0xbf8c2c */ __asm { MOV qword ptr [RBP + 0x5e8],RCX }
    /* +0xbf8c33 */ __asm { MOV RCX,qword ptr [RBP + 0x590] }
    /* +0xbf8c3a */ __asm { MOV qword ptr [RBP + 0x5f8],RCX }
    /* +0xbf8c41 */ __asm { MOV qword ptr [RBP + 0x5f0],RDX }
    /* +0xbf8c48 */ __asm { MOV qword ptr [RBP + 0x610],R14 }
    /* +0xbf8c4f */ __asm { MOV qword ptr [RBP + 0x5e0],R11 }
    /* +0xbf8c56 */ __asm { MOV R11,qword ptr [RBP + 0x1b0] }
    /* +0xbf8c5d */ __asm { MOV qword ptr [RBP + 0x628],R11 }
    /* +0xbf8c64 */ __asm { MOV R11,qword ptr [RBP + 0x1350] }
    /* +0xbf8c6b */ __asm { MOV qword ptr [RBP + 0x608],R11 }
    /* +0xbf8c72 */ __asm { MOV qword ptr [RBP + 0x618],RAX }
    /* +0xbf8c79 */ __asm { MOV R11,qword ptr [RBP + 0x3b0] }
    /* +0xbf8c80 */ __asm { MOV qword ptr [RBP + 0x620],R11 }
    /* +0xbf8c87 */ __asm { MOVAPS XMM0,xmmword ptr [R15 + 0x30] }
    /* +0xbf8c8c */ __asm { MOV qword ptr [RBP + 0x600],R10 }
    /* +0xbf8c93 */ __asm { ADD R8D,dword ptr [RBP + 0x1298] }
    /* +0xbf8c9a */ __asm { ROL R8W,0x5 }
    /* +0xbf8c9f */ __asm { MOV R11,qword ptr [RBP + 0x480] }
    /* +0xbf8ca6 */ __asm { ADD R11D,R8D }
    /* +0xbf8ca9 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf8cb0 */ __asm { ROR R11W,CL }
    /* +0xbf8cb4 */ __asm { MOVZX R10D,R11W }
    /* +0xbf8cb8 */ __asm { MOVAPS XMM2,xmmword ptr [RBP + 0x10b0] }
    /* +0xbf8cbf */ __asm { XORPS XMM0,xmmword ptr [RBP + 0x10a0] }
    /* +0xbf8cc6 */ __asm { MOVAPS XMM5,xmmword ptr [R15] }
    /* +0xbf8cca */ __asm { MOVAPS XMM1,xmmword ptr [R15 + 0x10] }
    /* +0xbf8ccf */ __asm { XORPS XMM5,xmmword ptr [RBP + 0x1070] }
    /* +0xbf8cd6 */ __asm { MOVAPS XMM3,xmmword ptr [R15 + 0x20] }
    /* +0xbf8cdb */ __asm { XORPS XMM3,xmmword ptr [RBP + 0x1090] }
    /* +0xbf8ce2 */ __asm { MOVAPS xmmword ptr [RBP + 0x1090],XMM3 }
    /* +0xbf8ce9 */ __asm { MOVAPS xmmword ptr [RBP + 0x10a0],XMM0 }
    /* +0xbf8cf0 */ __asm { MOVAPS xmmword ptr [RBP + 0x1070],XMM5 }
    /* +0xbf8cf7 */ __asm { XORPS XMM2,xmmword ptr [R15 + 0x40] }
    /* +0xbf8cfc */ __asm { MOVAPS xmmword ptr [RBP + 0x10b0],XMM2 }
    /* +0xbf8d03 */ __asm { XORPS XMM1,xmmword ptr [RBP + 0x1080] }
    /* +0xbf8d0a */ __asm { MOVAPS xmmword ptr [RBP + 0x1080],XMM1 }
    /* +0xbf8d11 */ __asm { MOV R11D,0x4b0 }
    /* +0xbf8d17 */ __asm { ADD R11,qword ptr GS:[R10] }
    /* +0xbf8d1b */ __asm { MOV R8,-0x4495a4aaca2f27bb }
    /* +0xbf8d25 */ __asm { IMUL R8,R11 }
    /* +0xbf8d29 */ __asm { ROL R8,0x2f }
    /* +0xbf8d2d */ __asm { ADD R8,-0x42d09f1a }
    /* +0xbf8d34 */ __asm { MOV R11,-0x2e006a42d8f8d004 }
    /* +0xbf8d3e */ __asm { CMP R8,R11 }
    /* +0xbf8d41 */ __asm { JZ 0x7fffa539555b }
    /* +0xbf8d47 */ __asm { MOV dword ptr [RBP + 0xf68],0x0 }
    /* +0xbf8d51 */ __asm { LEA R11,[RBP + 0x1050] }
    /* +0xbf8d58 */ __asm { MOV qword ptr [RBP + 0x1218],R11 }
    /* +0xbf8d5f */ __asm { MOV dword ptr [RBP + 0x1210],0xa000a }
    /* +0xbf8d69 */ __asm { LEA R11,[RBP + 0x1070] }
    /* +0xbf8d70 */ __asm { MOV qword ptr [RBP + 0x4e8],R11 }
    /* +0xbf8d77 */ __asm { MOV dword ptr [RBP + 0x4e0],0x4a004a }
    /* +0xbf8d81 */ __asm { MOV dword ptr [RBP + 0x5e0],0x33edb156 }
    /* +0xbf8d8b */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf8d92 */ __asm { CMP R11D,0x85f4cf8 }
    /* +0xbf8d99 */ __asm { NOP }
    /* +0xbf8d9a */ __asm { NOP }
    /* +0xbf8d9b */ __asm { NOP }
    /* +0xbf8d9c */ __asm { NOP }
    /* +0xbf8d9d */ __asm { NOP }
    /* +0xbf8d9e */ __asm { NOP }
    /* +0xbf8d9f */ __asm { MOV R11D,0x7d06bb8e }
    /* +0xbf8da5 */ __asm { LEA RDX,[RBP + 0x4e0] }
    /* +0xbf8dac */ __asm { MOV qword ptr [RBP + 0x5e0],RDX }
    /* +0xbf8db3 */ __asm { LEA RDX,[RBP + 0x1210] }
    /* +0xbf8dba */ __asm { MOV qword ptr [RBP + 0x5e8],RDX }
    /* +0xbf8dc1 */ __asm { ADD R11D,dword ptr [RBP + 0x1298] }
    /* +0xbf8dc8 */ __asm { IMUL R11D,R11D,-0xd42ed71 }
    /* +0xbf8dcf */ __asm { NOT R11D }
    /* +0xbf8dd2 */ __asm { MOV ECX,EDI }
    /* +0xbf8dd4 */ __asm { ROL R11D,CL }
    /* +0xbf8dd7 */ __asm { MOV qword ptr [RBP + 0x5f0],0x10 }
    /* +0xbf8de2 */ __asm { MOV qword ptr [RBP + 0x5f8],0x1388 }
    /* +0xbf8ded */ __asm { MOV dword ptr [RBP + 0x120],R11D }
    /* +0xbf8df4 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbf8dfb */ __asm { CMP R11D,0xbee9ea6d }
    /* +0xbf8e02 */ __asm { NOP }
    /* +0xbf8e03 */ __asm { NOP }
    /* +0xbf8e04 */ __asm { NOP }
    /* +0xbf8e05 */ __asm { NOP }
    /* +0xbf8e06 */ __asm { NOP }
    /* +0xbf8e07 */ __asm { NOP }
    /* +0xbf8e08 */ __asm { NOP }
    /* +0xbf8e09 */ __asm { NOP }
    /* +0xbf8e0a */ __asm { NOP }
    /* +0xbf8e0b */ __asm { NOP }
    /* +0xbf8e0c */ __asm { NOP }
    /* +0xbf8e0d */ __asm { NOP }
    /* +0xbf8e0e */ __asm { NOP }
    /* +0xbf8e0f */ __asm { NOP }
    /* +0xbf8e10 */ __asm { NOP }
    /* +0xbf8e11 */ __asm { NOP }
    /* +0xbf8e12 */ __asm { RDTSC }
    /* +0xbf8e14 */ __asm { SHL RDX,0x20 }
    /* +0xbf8e18 */ __asm { OR RDX,RAX }
    /* +0xbf8e1b */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xbf8e25 */ __asm { IMUL RDX,R11 }
    /* +0xbf8e29 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xbf8e33 */ __asm { ADD R9,RDX }
    /* +0xbf8e36 */ __asm { MOV RCX,R9 }
    /* +0xbf8e39 */ __asm { SHR RCX,0x3b }
    /* +0xbf8e3d */ __asm { MOV R10,R9 }
    /* +0xbf8e40 */ __asm { SHR R10,0x2d }
    /* +0xbf8e44 */ __asm { SHR R9,0x1b }
    /* +0xbf8e48 */ __asm { XOR R10D,R9D }
    /* +0xbf8e4b */ __asm { ROR R10D,CL }
    /* +0xbf8e4e */ __asm { AND R10D,0x3 }
    /* +0xbf8e52 */ __asm { CMP R10D,0x2 }
    /* +0xbf8e56 */ __asm { JNC 0x7fffa5369115 }
    /* +0xbf8e5c */ __asm { CMP R10D,0x1 }
    /* +0xbf8e60 */ __asm { JZ 0x7fffa53720c0 }
    /* +0xbf8e66 */ __asm { MOV R10W,0x3ed7 }
    /* +0xbf8e6b */ __asm { ADD R10D,dword ptr [RBP + 0x1038] }
    /* +0xbf8e72 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xbf8e79 */ __asm { ROR R10W,CL }
    /* +0xbf8e7d */ __asm { MOVZX R9D,R10W }
    /* +0xbf8e81 */ __asm { XOR R9,0xd2f5 }
    /* +0xbf8e88 */ __asm { RDTSC }
    /* +0xbf8e8a */ __asm { SHL RDX,0x20 }
    /* +0xbf8e8e */ __asm { OR RDX,RAX }
    /* +0xbf8e91 */ __asm { IMUL RDX,R11 }
    /* +0xbf8e95 */ __asm { MOV R11,0x6cfabc17010fdc16 }
    /* +0xbf8e9f */ __asm { ADD R11,RDX }
    /* +0xbf8ea2 */ __asm { MOV R10,R11 }
    /* +0xbf8ea5 */ __asm { SHR R10,0x2d }
    /* +0xbf8ea9 */ __asm { MOV RCX,R11 }
    /* +0xbf8eac */ __asm { SHR RCX,0x3b }
    /* +0xbf8eb0 */ __asm { SHR R11,0x1b }
    /* +0xbf8eb4 */ __asm { XOR R10D,R11D }
    /* +0xbf8eb7 */ __asm { ROR R10D,CL }
    /* +0xbf8eba */ __asm { MOV R11,qword ptr GS:[R9] }
    /* +0xbf8ebe */ __asm { MOV RDX,0x53a2c4fe8e1596db }
    /* +0xbf8ec8 */ __asm { CMP qword ptr [R11 + 0x28],RDX }
    /* +0xbf8ecc */ __asm { NOP }
    /* +0xbf8ecd */ __asm { NOP }
    /* +0xbf8ece */ __asm { NOP }
    /* +0xbf8ecf */ __asm { NOP }
    /* +0xbf8ed0 */ __asm { NOP }
    /* +0xbf8ed1 */ __asm { NOP }
    /* +0xbf8ed2 */ __asm { NOP }
    /* +0xbf8ed3 */ __asm { NOP }
    /* +0xbf8ed4 */ __asm { NOP }
    /* +0xbf8ed5 */ __asm { NOP }
    /* +0xbf8ed6 */ __asm { NOP }
    /* +0xbf8ed7 */ __asm { NOP }
    /* +0xbf8ed8 */ __asm { NOP }
    /* +0xbf8ed9 */ __asm { NOP }
    /* +0xbf8eda */ __asm { NOP }
    /* +0xbf8edb */ __asm { MOV R11D,0x1bba4658 }
    /* +0xbf8ee1 */ __asm { ADD R11D,0x55ce3027 }
    /* +0xbf8ee8 */ __asm { MOV RCX,qword ptr [RBP + 0xe8] }
    /* +0xbf8eef */ __asm { IMUL ECX,R11D }
    /* +0xbf8ef3 */ __asm { XOR ECX,dword ptr [RBP + 0x1298] }
    /* +0xbf8ef9 */ __asm { SUB ECX,dword ptr [RBP + 0x480] }
    /* +0xbf8eff */ __asm { CMP R10D,ECX }
    /* +0xbf8f02 */ __asm { JNC 0x7fffa5368f4a }
    /* +0xbf8f04 */ __asm { MOV R11D,EDI }
    /* +0xbf8f07 */ __asm { OR R11D,0x1 }
    /* +0xbf8f0b */ __asm { MOV R10D,0xef841815 }
    /* +0xbf8f11 */ __asm { IMUL R10D,R11D }
    /* +0xbf8f15 */ __asm { NOT R10D }
    /* +0xbf8f18 */ __asm { ROL R10D,0x18 }
    /* +0xbf8f1c */ __asm { XOR R10D,dword ptr [RBP + 0x1038] }
    /* +0xbf8f23 */ __asm { NOT R10D }
    /* +0xbf8f26 */ __asm { PUSHFQ }
    /* +0xbf8f27 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xbf8f2f */ __asm { POPFQ }
    /* +0xbf8f30 */ __asm { MOV dword ptr [RBP + 0x120],R10D }
    /* +0xbf8f37 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbf8f3e */ __asm { CMP R11D,0xd3ca165c }
    /* +0xbf8f45 */ __asm { NOP }
    /* +0xbf8f46 */ __asm { NOP }
    /* +0xbf8f47 */ __asm { NOP }
    /* +0xbf8f48 */ __asm { NOP }
    /* +0xbf8f49 */ __asm { NOP }
    /* +0xbf8f4a */ __asm { LEA R8,[0x7fffa4782b26] }
    /* +0xbf8f51 */ __asm { MOV R11,-0x3887159f4ea39e21 }
    /* +0xbf8f5b */ __asm { CMP R8,R11 }
    /* +0xbf8f5e */ __asm { NOP }
    /* +0xbf8f5f */ __asm { NOP }
    /* +0xbf8f60 */ __asm { NOP }
    /* +0xbf8f61 */ __asm { NOP }
    /* +0xbf8f62 */ __asm { NOP }
    /* +0xbf8f63 */ __asm { MOV R11W,0x8a58 }
    /* +0xbf8f68 */ __asm { MOV R10D,0xf949223e }
    /* +0xbf8f6e */ __asm { MOV RSI,qword ptr [RBP + 0x1038] }
    /* +0xbf8f75 */ __asm { ADD R10D,ESI }
    /* +0xbf8f78 */ __asm { MOV AX,0xf192 }
    /* +0xbf8f7c */ __asm { SUB EAX,ESI }
    /* +0xbf8f7e */ __asm { MOV R12,qword ptr [RBP + 0x480] }
    /* +0xbf8f85 */ __asm { ADD R11D,R12D }
    /* +0xbf8f88 */ __asm { MOV ECX,R12D }
    /* +0xbf8f8b */ __asm { OR ECX,0x1 }
    /* +0xbf8f8e */ __asm { IMUL ECX,EAX }
    /* +0xbf8f91 */ __asm { MOV R9,qword ptr [RBP + 0x1298] }
    /* +0xbf8f98 */ __asm { ADD ECX,R9D }
    /* +0xbf8f9b */ __asm { ROL CX,0xa }
    /* +0xbf8f9f */ __asm { MOVZX EDX,CX }
    /* +0xbf8fa2 */ __asm { MOV AX,0x971 }
    /* +0xbf8fa6 */ __asm { NOT R10D }
    /* +0xbf8fa9 */ __asm { IMUL R10D,dword ptr [RBP + 0xd0] }
    /* +0xbf8fb1 */ __asm { XOR R11D,R9D }
    /* +0xbf8fb4 */ __asm { MOV R9D,ESI }
    /* +0xbf8fb7 */ __asm { OR R9D,0x1 }
    /* +0xbf8fbb */ __asm { IMUL R9D,EAX }
    /* +0xbf8fbf */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xbf8fc6 */ __asm { ROL R9W,CL }
    /* +0xbf8fca */ __asm { MOV qword ptr [RBP + 0x120],RCX }
    /* +0xbf8fd1 */ __asm { IMUL EAX,R9D,-0x52f3 }
    /* +0xbf8fd8 */ __asm { XOR EAX,0x160b }
    /* +0xbf8fdd */ __asm { MOVZX R9D,AX }
    /* +0xbf8fe1 */ __asm { IMUL R11D,R11D,0x66ff }
    /* +0xbf8fe8 */ __asm { ROL R10D,0x3 }
    /* +0xbf8fec */ __asm { MOV ECX,ESI }
    /* +0xbf8fee */ __asm { ROL R11W,CL }
    /* +0xbf8ff2 */ __asm { MOV EAX,dword ptr [R8 + 0x1b1a] }
    /* +0xbf8ff9 */ __asm { ADD R10D,R12D }
    /* +0xbf8ffc */ __asm { XOR R11D,0x41ae }
    /* +0xbf9003 */ __asm { MOVZX R8D,R11W }
    /* +0xbf9007 */ __asm { JMP 0x7fffa537b24b }
    /* +0xbf9115 */ __asm { MOV AX,0x3924 }
    /* +0xbf9119 */ __asm { SUB EAX,EDI }
    /* +0xbf911b */ __asm { XOR EAX,dword ptr [RBP + 0x1298] }
    /* +0xbf9121 */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xbf9128 */ __asm { MOV R9D,EDX }
    /* +0xbf912b */ __asm { OR R9D,0x1 }
    /* +0xbf912f */ __asm { NOT EAX }
    /* +0xbf9131 */ __asm { IMUL EAX,R9D }
    /* +0xbf9135 */ __asm { MOVZX EAX,AX }
    /* +0xbf9138 */ __asm { CMP R10D,EAX }
    /* +0xbf913b */ __asm { JC 0x7fffa537222a }
    /* +0xbf9141 */ __asm { MOV R8W,0xfe7c }
    /* +0xbf9146 */ __asm { ADD R8D,dword ptr [RBP + 0x1298] }
    /* +0xbf914d */ __asm { RDTSC }
    /* +0xbf914f */ __asm { SHL RDX,0x20 }
    /* +0xbf9153 */ __asm { OR RDX,RAX }
    /* +0xbf9156 */ __asm { IMUL RDX,R11 }
    /* +0xbf915a */ __asm { MOV R11,-0x6375c904b64b5ee6 }
    /* +0xbf9164 */ __asm { ADD R11,RDX }
    /* +0xbf9167 */ __asm { MOV RDX,R11 }
    /* +0xbf916a */ __asm { SHR RDX,0x2d }
    /* +0xbf916e */ __asm { MOV R10,R11 }
    /* +0xbf9171 */ __asm { SHR R10,0x3b }
    /* +0xbf9175 */ __asm { ROL R8W,0x3 }
    /* +0xbf917a */ __asm { MOV ECX,EDI }
    /* +0xbf917c */ __asm { ROL R8W,CL }
    /* +0xbf9180 */ __asm { NOT R8D }
    /* +0xbf9183 */ __asm { MOVZX EAX,R8W }
    /* +0xbf9187 */ __asm { SHR R11,0x1b }
    /* +0xbf918b */ __asm { XOR EDX,R11D }
    /* +0xbf918e */ __asm { MOV ECX,R10D }
    /* +0xbf9191 */ __asm { ROR EDX,CL }
    /* +0xbf9193 */ __asm { MOV R11,qword ptr GS:[RAX] }
    /* +0xbf9197 */ __asm { MOV R8,0x462e13883e7b51e5 }
    /* +0xbf91a1 */ __asm { CMP qword ptr [R11 + 0x18],R8 }
    /* +0xbf91a5 */ __asm { JZ 0x7fffa5395563 }
    /* +0xbf91ab */ __asm { CMP EDX,0x1066c5 }
    /* +0xbf91b1 */ __asm { JA 0x7fffa53693c6 }
    /* +0xbf91b7 */ __asm { MOV R11W,0x9753 }
    /* +0xbf91bc */ __asm { SUB R11D,dword ptr [RBP + 0x1038] }
    /* +0xbf91c3 */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xbf91ca */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xbf91d1 */ __asm { ROL R11W,CL }
    /* +0xbf91d5 */ __asm { NOT R11D }
    /* +0xbf91d8 */ __asm { MOVZX R10D,R11W }
    /* +0xbf91dc */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xbf91e0 */ __asm { MOV RDX,-0x70b5c8c9f498092d }
    /* +0xbf91ea */ __asm { CMP qword ptr [R11 + 0x978],RDX }
    /* +0xbf91f1 */ __asm { JNZ 0x7fffa53691f7 }
    /* +0xbf91f3 */ __asm { JL 0x7fffa536920d }
    /* +0xbf91f5 */ __asm { MOV DH,0x99 }
    /* +0xbf91f7 */ __asm { MOV R8D,0xe50cb70 }
    /* +0xbf91fd */ __asm { MOV R11,-0x6a35fa692f558857 }
    /* +0xbf9207 */ __asm { CMP R8,R11 }
    /* +0xbf920a */ __asm { JNZ 0x7fffa536921a }
    /* +0xbf920c */ __asm { STOSB RDI }
    /* +0xbf920d */ __asm { RCL dword ptr [RSI + 0x5f9df652],CL }
    /* +0xbf9213 */ __asm { TEST dword ptr [RCX + 0x4eae4e33],ESP }
    /* +0xbf9219 */ __asm { IN EAX,DX }
    /* +0xbf921a */ __asm { MOV R11,qword ptr [R8 + 0x71ad3498] }
    /* +0xbf9221 */ __asm { MOV RDX,-0x53ced74302d7c853 }
    /* +0xbf922b */ __asm { MOV RAX,R11 }
    /* +0xbf922e */ __asm { MUL RDX }
    /* +0xbf9231 */ __asm { MOV R8,RDX }
    /* +0xbf9234 */ __asm { MOV EDX,0x1469b69 }
    /* +0xbf9239 */ __asm { MOV RAX,R11 }
    /* +0xbf923c */ __asm { MUL RDX }
    /* +0xbf923f */ __asm { ADD RAX,R8 }
    /* +0xbf9242 */ __asm { ADC RDX,0x0 }
    /* +0xbf9246 */ __asm { TEST DL,0x1 }
    /* +0xbf9249 */ __asm { JZ 0x7fffa53693c6 }
    /* +0xbf924f */ __asm { XORPS XMM0,XMM0 }
    /* +0xbf9252 */ __asm { MOVAPS xmmword ptr [RBP + 0x120],XMM0 }
    /* +0xbf9259 */ __asm { MOV R11D,0x4a6d4606 }
    /* +0xbf925f */ __asm { ADD R11D,dword ptr [RBP + 0x1038] }
    /* +0xbf9266 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbf926d */ __asm { ROR R11D,CL }
    /* +0xbf9270 */ __asm { IMUL R11D,R11D,-0x77a6e181 }
    /* +0xbf9277 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xbf927e */ __asm { ROR R11D,CL }
    /* +0xbf9281 */ __asm { ADD R11D,0x4d301879 }
    /* +0xbf9288 */ __asm { MOV dword ptr [RBP + 0x2b0],R11D }
    /* +0xbf928f */ __asm { MOV R11D,dword ptr [RBP + 0x2b0] }
    /* +0xbf9296 */ __asm { TEST R11B,0x1 }
    /* +0xbf929a */ __asm { JNZ 0x7fffa539557f }
    /* +0xbf92a0 */ __asm { MOV R11W,0xa9d6 }
    /* +0xbf92a5 */ __asm { ADD R11D,dword ptr [RBP + 0x1298] }
    /* +0xbf92ac */ __asm { MOV dword ptr [RBP + 0x120],0x0 }
    /* +0xbf92b6 */ __asm { MOV R8,0x6aa3b004bf33e4d7 }
    /* +0xbf92c0 */ __asm { MOV R10,qword ptr [RBP + 0x480] }
    /* +0xbf92c7 */ __asm { XOR R10D,R11D }
    /* +0xbf92ca */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf92d1 */ __asm { ROR R10W,CL }
    /* +0xbf92d5 */ __asm { NOT R10D }
    /* +0xbf92d8 */ __asm { MOVZX R10D,R10W }
    /* +0xbf92dc */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xbf92e0 */ __asm { MOV R11,qword ptr [R11 + 0x30] }
    /* +0xbf92e4 */ __asm { MOV R8,0x168827b4045ba6b7 }
    /* +0xbf92ee */ __asm { IMUL R8,R11 }
    /* +0xbf92f2 */ __asm { MOV R11,0x4eb7ea40d2ffc16b }
    /* +0xbf92fc */ __asm { CMP R8,R11 }
    /* +0xbf92ff */ __asm { NOP }
    /* +0xbf9300 */ __asm { NOP }
    /* +0xbf9301 */ __asm { NOP }
    /* +0xbf9302 */ __asm { NOP }
    /* +0xbf9303 */ __asm { NOP }
    /* +0xbf9304 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbf930b */ __asm { OR RCX,0x1 }
    /* +0xbf930f */ __asm { LEA R8,[0x7fffa47c150a] }
    /* +0xbf9316 */ __asm { MOV R11,-0xf499acfca0283ee }
    /* +0xbf9320 */ __asm { IMUL R11,RCX }
    /* +0xbf9324 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf932b */ __asm { ROR R11,CL }
    /* +0xbf932e */ __asm { IMUL R11,R11,0x40c11c9b }
    /* +0xbf9335 */ __asm { XOR R11,R8 }
    /* +0xbf9338 */ __asm { CMP R11,-0x1 }
    /* +0xbf933c */ __asm { JZ 0x7fffa539559f }
    /* +0xbf9342 */ __asm { MOV R11W,0x2941 }
    /* +0xbf9347 */ __asm { IMUL R11D,R9D }
    /* +0xbf934b */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbf9352 */ __asm { MOV R10D,ECX }
    /* +0xbf9355 */ __asm { SUB R10D,R11D }
    /* +0xbf9358 */ __asm { ADD R10D,0x1c3c }
    /* +0xbf935f */ __asm { MOVZX EDX,R10W }
    /* +0xbf9363 */ __asm { MOV R10D,0x87778864 }
    /* +0xbf9369 */ __asm { MOV qword ptr [RBP + 0x2b0],R11 }
    /* +0xbf9370 */ __asm { MOV R11W,0xb79d }
    /* +0xbf9375 */ __asm { ADD R10D,ECX }
    /* +0xbf9378 */ __asm { ADD R10D,0xad8466c4 }
    /* +0xbf937f */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf9386 */ __asm { ROR R10D,CL }
    /* +0xbf9389 */ __asm { MOV EAX,dword ptr [R8 + -0x5042] }
    /* +0xbf9390 */ __asm { MOV RCX,qword ptr [RBP + 0x11d8] }
    /* +0xbf9397 */ __asm { IMUL ECX,R10D }
    /* +0xbf939b */ __asm { MOVSXD R10,ECX }
    /* +0xbf939e */ __asm { MOVZX R8D,word ptr [RBP + 0xd0] }
    /* +0xbf93a6 */ __asm { IMUL R8D,R11D }
    /* +0xbf93aa */ __asm { MOV R11D,EDI }
    /* +0xbf93ad */ __asm { XOR R11D,R8D }
    /* +0xbf93b0 */ __asm { ROL R11W,0x7 }
    /* +0xbf93b5 */ __asm { IMUL R11D,R9D }
    /* +0xbf93b9 */ __asm { MOVZX R9D,R11W }
    /* +0xbf93bd */ __asm { LEA R8,[RBP + 0x120] }
    /* +0xbf93c4 */ __asm { SYSCALL }
    /* +0xbf93c6 */ __asm { MOV R9W,0x99af }
    /* +0xbf93cb */ __asm { MOV R11D,EDI }
    /* +0xbf93ce */ __asm { MOV AX,0x7236 }
    /* +0xbf93d2 */ __asm { MOV R10W,0x5ae7 }
    /* +0xbf93d7 */ __asm { IMUL R8D,R10D,0x4461 }
    /* +0xbf93de */ __asm { NOT R8D }
    /* +0xbf93e1 */ __asm { MOV R12,qword ptr [RBP + 0x1298] }
    /* +0xbf93e8 */ __asm { ADD R8D,R12D }
    /* +0xbf93eb */ __asm { MOV RSI,qword ptr [RBP + 0x1038] }
    /* +0xbf93f2 */ __asm { MOV ECX,ESI }
    /* +0xbf93f4 */ __asm { ROR R8W,CL }
    /* +0xbf93f8 */ __asm { OR R11D,0x1 }
    /* +0xbf93fc */ __asm { XOR R8D,0xf667 }
    /* +0xbf9403 */ __asm { SUB EAX,EDI }
    /* +0xbf9405 */ __asm { MOV R10D,0x35529a7a }
    /* +0xbf940b */ __asm { MOV qword ptr [RBP + 0x120],RCX }
    /* +0xbf9412 */ __asm { IMUL R9D,R9D,0x3d9 }
    /* +0xbf9419 */ __asm { MOV R15,qword ptr [RBP + 0x1048] }
    /* +0xbf9420 */ __asm { MOV ECX,R15D }
    /* +0xbf9423 */ __asm { ROL R9W,CL }
    /* +0xbf9427 */ __asm { MOV ECX,EDI }
    /* +0xbf9429 */ __asm { ROR R9W,CL }
    /* +0xbf942d */ __asm { NOT R9D }
    /* +0xbf9430 */ __asm { ADD R9D,ESI }
    /* +0xbf9433 */ __asm { ROL AX,0x9 }
    /* +0xbf9437 */ __asm { MOVZX EDX,R9W }
    /* +0xbf943b */ __asm { XOR EAX,ESI }
    /* +0xbf943d */ __asm { IMUL EAX,EAX,0x6d09 }
    /* +0xbf9443 */ __asm { MOV ECX,R15D }
    /* +0xbf9446 */ __asm { ROL AX,CL }
    /* +0xbf9449 */ __asm { MOVZX ECX,AX }
    /* +0xbf944c */ __asm { MOVZX R8D,R8W }
    /* +0xbf9450 */ __asm { LEA RAX,[0x7fffa477f89f] }
}


// ============================================================================
// Function : FUN_7fffa5357654  |  RVA: 0xbe7654  |  Size: 3370 bytes
// Callers  : FUN_7fffa5381000@0xc11000
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5357654(void) {
    /* +0xbe7654 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5d7343f0 }
    /* +0xbe765e */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbe7665 */ __asm { CMP R11D,0x8d9694d5 }
    /* +0xbe766c */ __asm { JC 0x7fffa5357670 }
    /* +0xbe766e */ __asm { STD }
    /* +0xbe766f */ __asm { STOSD RDI }
    /* +0xbe7670 */ __asm { MOV R10,qword ptr [RBP + 0x1350] }
    /* +0xbe7677 */ __asm { CMP dword ptr [RBP + 0x1b0],R10D }
    /* +0xbe767e */ __asm { JZ 0x7fffa5357687 }
    /* +0xbe7680 */ __asm { OR BL,uint8_t ptr [RSI + 0xb] }
    /* +0xbe7683 */ __asm { CMPSB RDI,RSI }
    /* +0xbe7684 */ __asm { MOV DH,0xbb }
    /* +0xbe7686 */ __asm { XCHG EAX,EBX }
    /* +0xbe7687 */ __asm { MOV R10,-0x7c9a946e518759fe }
    /* +0xbe7691 */ __asm { MOV R8,0x1f36b4bc0d13e4e3 }
    /* +0xbe769b */ __asm { MOV EAX,0xf3e4f79d }
    /* +0xbe76a0 */ __asm { MOV R11,0x1f59b4ce0d61e4a6 }
    /* +0xbe76aa */ __asm { MOV qword ptr [RBP + 0x1050],R11 }
    /* +0xbe76b1 */ __asm { LEA RCX,[RBP + 0x5e0] }
    /* +0xbe76b8 */ __asm { MOV R11,-0x7c9a946e51875990 }
    /* +0xbe76c2 */ __asm { MOV qword ptr [RBP + 0x1058],R10 }
    /* +0xbe76c9 */ __asm { MOV qword ptr [RBP + 0x5e8],R11 }
    /* +0xbe76d0 */ __asm { MOV qword ptr [RBP + 0x5e0],R8 }
    /* +0xbe76d7 */ __asm { MOVAPS XMM2,xmmword ptr [RCX] }
    /* +0xbe76da */ __asm { MOVAPS XMM0,xmmword ptr [RBP + 0x1050] }
    /* +0xbe76e1 */ __asm { MOV R10D,0xb1c8606f }
    /* +0xbe76e7 */ __asm { SUB R10D,dword ptr [RBP + 0x480] }
    /* +0xbe76ee */ __asm { IMUL ECX,EAX,-0x26b2a207 }
    /* +0xbe76f4 */ __asm { ROL ECX,0xc }
    /* +0xbe76f7 */ __asm { NOT ECX }
    /* +0xbe76f9 */ __asm { IMUL ECX,dword ptr [RBP + 0x11d8] }
    /* +0xbe7700 */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xbe7707 */ __asm { ADD ECX,EDX }
    /* +0xbe7709 */ __asm { ADD R10D,0x75f2e180 }
    /* +0xbe7710 */ __asm { XOR R10D,EDX }
    /* +0xbe7713 */ __asm { ROL R10D,0x1c }
    /* +0xbe7717 */ __asm { ADD R10D,dword ptr [RBP + 0x1298] }
    /* +0xbe771e */ __asm { MOVSXD RDX,R10D }
    /* +0xbe7721 */ __asm { CMP RDX,RCX }
    /* +0xbe7724 */ __asm { JBE 0x7fffa5369ea5 }
    /* +0xbe772a */ __asm { MOV R10D,0xbeee745b }
    /* +0xbe7730 */ __asm { ADD R10D,dword ptr [RBP + 0x1298] }
    /* +0xbe7737 */ __asm { XORPS XMM2,XMM0 }
    /* +0xbe773a */ __asm { ROL R10D,0xe }
    /* +0xbe773e */ __asm { ADD R10D,0xa3cd5ef0 }
    /* +0xbe7745 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbe774c */ __asm { ROL R10D,CL }
    /* +0xbe774f */ __asm { MOVAPS xmmword ptr [RBP + 0x1050],XMM2 }
    /* +0xbe7756 */ __asm { NOT R10D }
    /* +0xbe7759 */ __asm { MOV EAX,0x608748a5 }
    /* +0xbe775e */ __asm { IMUL EAX,EAX,0x152938b }
    /* +0xbe7764 */ __asm { XOR EAX,0x3ffffed5 }
    /* +0xbe7769 */ __asm { ADD EAX,ECX }
    /* +0xbe776b */ __asm { IMUL EAX,dword ptr [RBP + 0x11d8] }
    /* +0xbe7772 */ __asm { MOVSXD R13,EAX }
    /* +0xbe7775 */ __asm { MOV dword ptr [RBP + 0x1070],R10D }
    /* +0xbe777c */ __asm { MOV R10D,dword ptr [RBP + 0x1070] }
    /* +0xbe7783 */ __asm { MOV RCX,0x2cf195da094cc9ff }
    /* +0xbe778d */ __asm { MOV R10,-0x16774856e5b60488 }
    /* +0xbe7797 */ __asm { MOV RDX,-0x16774856e5b604aa }
    /* +0xbe77a1 */ __asm { MOV RAX,0x1f5ab4de0d7ce4b1 }
    /* +0xbe77ab */ __asm { JMP 0x7fffa5369f2e }
    /* +0xbf9ea5 */ __asm { MOV R10,-0x16774856e5b60488 }
    /* +0xbf9eaf */ __asm { MOV RAX,0x1f5ab4de0d7ce4b1 }
    /* +0xbf9eb9 */ __asm { MOV ECX,dword ptr [RBP + 0x1070] }
    /* +0xbf9ebf */ __asm { MOV ECX,0x78f2242 }
    /* +0xbf9ec4 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xbf9ecb */ __asm { SUB ECX,EDI }
    /* +0xbf9ecd */ __asm { IMUL R9D,ECX,-0x454caadb }
    /* +0xbf9ed4 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbf9edb */ __asm { ROR R9D,CL }
    /* +0xbf9ede */ __asm { XOR R9D,dword ptr [RBP + 0x480] }
    /* +0xbf9ee5 */ __asm { MOV dword ptr [RBP + 0x1070],R9D }
    /* +0xbf9eec */ __asm { XORPS XMM0,XMM2 }
    /* +0xbf9eef */ __asm { MOV RDX,-0x16774856e5b604aa }
    /* +0xbf9ef9 */ __asm { MOV R13D,0x8fc62814 }
    /* +0xbf9eff */ __asm { MOV RCX,0x2cf195da094cc9ff }
    /* +0xbf9f09 */ __asm { IMUL R13D,dword ptr [RBP + 0xd0] }
    /* +0xbf9f11 */ __asm { ADD R13D,0xf02b1242 }
    /* +0xbf9f18 */ __asm { ROL R13D,0x11 }
    /* +0xbf9f1c */ __asm { MOVAPS xmmword ptr [RBP + 0x1050],XMM0 }
    /* +0xbf9f23 */ __asm { XOR R13D,EDI }
    /* +0xbf9f26 */ __asm { IMUL R13D,dword ptr [RBP + 0x11d8] }
    /* +0xbf9f2e */ __asm { MOV R12,0x4fdf0ffa8fef72ec }
    /* +0xbf9f38 */ __asm { MOV R9,0x2c9695b40925c98b }
    /* +0xbf9f42 */ __asm { MOV R14,-0x7cf2944e51ff59e1 }
    /* +0xbf9f4c */ __asm { MOV R15,0x3150cb3deabed324 }
    /* +0xbf9f56 */ __asm { MOV RDI,0x1906572d09b50917 }
    /* +0xbf9f60 */ __asm { LEA RSI,[RBP + 0x5e0] }
    /* +0xbf9f67 */ __asm { MOV qword ptr [RBP + 0x1090],RDI }
    /* +0xbf9f6e */ __asm { MOV RDI,0x3122cb69ea9ed30a }
    /* +0xbf9f78 */ __asm { MOV qword ptr [RBP + 0x1078],R14 }
    /* +0xbf9f7f */ __asm { MOV R14,-0x14c21ecc66b14862 }
    /* +0xbf9f89 */ __asm { MOV qword ptr [RBP + 0x1070],RAX }
    /* +0xbf9f90 */ __asm { MOV qword ptr [RBP + 0x1098],RDI }
    /* +0xbf9f97 */ __asm { MOV qword ptr [RBP + 0x10b8],RDX }
    /* +0xbf9f9e */ __asm { MOV qword ptr [RBP + 0x10b0],RCX }
    /* +0xbf9fa5 */ __asm { MOV RCX,-0x14b01ead66c54813 }
    /* +0xbf9faf */ __asm { MOV qword ptr [RBP + 0x10a8],RCX }
    /* +0xbf9fb6 */ __asm { MOV RAX,0x4fab0fda8f9c728d }
    /* +0xbf9fc0 */ __asm { MOV qword ptr [RBP + 0x1080],R12 }
    /* +0xbf9fc7 */ __asm { MOV RCX,-0x4fa0cad969fb0e4f }
    /* +0xbf9fd1 */ __asm { MOV RDX,-0x4fc5caab69db0e38 }
    /* +0xbf9fdb */ __asm { MOV R12,0x1972575809da0937 }
    /* +0xbf9fe5 */ __asm { MOV RDI,-0x7e09f33d556d846d }
    /* +0xbf9fef */ __asm { MOV qword ptr [RBP + 0x1088],RDI }
    /* +0xbf9ff6 */ __asm { MOV qword ptr [RBP + 0x10a0],RDX }
    /* +0xbf9ffd */ __asm { MOV qword ptr [RBP + 0x608],R15 }
    /* +0xbfa004 */ __asm { MOV qword ptr [RBP + 0x5e8],R11 }
    /* +0xbfa00b */ __asm { MOV qword ptr [RBP + 0x5f0],RAX }
    /* +0xbfa012 */ __asm { MOV qword ptr [RBP + 0x5e0],R8 }
    /* +0xbfa019 */ __asm { MOV qword ptr [RBP + 0x600],R12 }
    /* +0xbfa020 */ __asm { MOV qword ptr [RBP + 0x610],RCX }
    /* +0xbfa027 */ __asm { MOV qword ptr [RBP + 0x618],R14 }
    /* +0xbfa02e */ __asm { MOV qword ptr [RBP + 0x628],R10 }
    /* +0xbfa035 */ __asm { MOV R8,-0x7e6df35855008406 }
    /* +0xbfa03f */ __asm { MOVAPS XMM0,xmmword ptr [RBP + 0x10a0] }
    /* +0xbfa046 */ __asm { MOVAPS XMM2,xmmword ptr [RBP + 0x10b0] }
    /* +0xbfa04d */ __asm { MOV qword ptr [RBP + 0x620],R9 }
    /* +0xbfa054 */ __asm { MOVAPS XMM5,xmmword ptr [RSI + 0x20] }
    /* +0xbfa058 */ __asm { XORPS XMM2,xmmword ptr [RSI + 0x40] }
    /* +0xbfa05c */ __asm { XORPS XMM5,xmmword ptr [RBP + 0x1090] }
    /* +0xbfa063 */ __asm { XORPS XMM0,xmmword ptr [RSI + 0x30] }
    /* +0xbfa067 */ __asm { MOV qword ptr [RBP + 0x5f8],R8 }
    /* +0xbfa06e */ __asm { MOVAPS XMM1,xmmword ptr [RSI + 0x10] }
    /* +0xbfa072 */ __asm { XORPS XMM1,xmmword ptr [RBP + 0x1080] }
    /* +0xbfa079 */ __asm { MOVAPS XMM3,xmmword ptr [RBP + 0x1070] }
    /* +0xbfa080 */ __asm { XORPS XMM3,xmmword ptr [RSI] }
    /* +0xbfa083 */ __asm { MOVAPS xmmword ptr [RBP + 0x1070],XMM3 }
    /* +0xbfa08a */ __asm { MOVAPS xmmword ptr [RBP + 0x10b0],XMM2 }
    /* +0xbfa091 */ __asm { MOVAPS xmmword ptr [RBP + 0x1090],XMM5 }
    /* +0xbfa098 */ __asm { MOVAPS xmmword ptr [RBP + 0x10a0],XMM0 }
    /* +0xbfa09f */ __asm { MOVAPS xmmword ptr [RBP + 0x1080],XMM1 }
    /* +0xbfa0a6 */ __asm { MOV dword ptr [RBP + 0x5e0],0x39bb41cd }
    /* +0xbfa0b0 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbfa0b7 */ __asm { MOV R11W,0xead1 }
    /* +0xbfa0bc */ __asm { MOV R10D,R13D }
    /* +0xbfa0bf */ __asm { OR R10D,0x1 }
    /* +0xbfa0c3 */ __asm { IMUL R10D,R11D }
    /* +0xbfa0c7 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbfa0ce */ __asm { ROL R10W,CL }
    /* +0xbfa0d2 */ __asm { ADD R10D,0xffffeb18 }
    /* +0xbfa0d9 */ __asm { IMUL R10D,dword ptr [RBP + 0x4a0] }
    /* +0xbfa0e1 */ __asm { ROL R10W,0x5 }
    /* +0xbfa0e6 */ __asm { MOVZX R10D,R10W }
    /* +0xbfa0ea */ __asm { MOV dword ptr [RBP + 0x280],0x0 }
    /* +0xbfa0f4 */ __asm { LEA R11,[RBP + 0x1050] }
    /* +0xbfa0fb */ __asm { MOV qword ptr [RBP + 0x1218],R11 }
    /* +0xbfa102 */ __asm { MOV dword ptr [RBP + 0x1210],0xa000a }
    /* +0xbfa10c */ __asm { MOV dword ptr [RBP + 0x4e0],0x4a004a }
    /* +0xbfa116 */ __asm { LEA R11,[RBP + 0x1070] }
    /* +0xbfa11d */ __asm { MOV qword ptr [RBP + 0x4e8],R11 }
    /* +0xbfa124 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xbfa128 */ __asm { MOV R10W,0x69e8 }
    /* +0xbfa12d */ __asm { MOV R8,qword ptr [RBP + 0x1298] }
    /* +0xbfa134 */ __asm { SUB R10D,ECX }
    /* +0xbfa137 */ __asm { SUB R10D,R8D }
    /* +0xbfa13a */ __asm { ADD R10D,0xfffff7ea }
    /* +0xbfa141 */ __asm { XOR R10D,R13D }
    /* +0xbfa144 */ __asm { ADD R10D,0x4629 }
    /* +0xbfa14b */ __asm { MOVZX R10D,R10W }
    /* +0xbfa14f */ __asm { MOV RDX,qword ptr GS:[R10] }
    /* +0xbfa153 */ __asm { MOV RDX,0x6cac3611625ad420 }
    /* +0xbfa15d */ __asm { CMP qword ptr [R11 + 0x60],RDX }
    /* +0xbfa161 */ __asm { NOP }
    /* +0xbfa162 */ __asm { NOP }
    /* +0xbfa163 */ __asm { NOP }
    /* +0xbfa164 */ __asm { NOP }
    /* +0xbfa165 */ __asm { NOP }
    /* +0xbfa166 */ __asm { LEA R11,[RBP + 0x4e0] }
    /* +0xbfa16d */ __asm { MOV qword ptr [RBP + 0x5e0],R11 }
    /* +0xbfa174 */ __asm { MOV qword ptr [RBP + 0x5f0],0x10 }
    /* +0xbfa17f */ __asm { LEA R11,[RBP + 0x1210] }
    /* +0xbfa186 */ __asm { MOV qword ptr [RBP + 0x5e8],R11 }
    /* +0xbfa18d */ __asm { MOV qword ptr [RBP + 0x5f8],0x1388 }
    /* +0xbfa198 */ __asm { MOV dword ptr [RBP + 0x120],0x220266d7 }
    /* +0xbfa1a2 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xbfa1a9 */ __asm { RDTSC }
    /* +0xbfa1ab */ __asm { SHL RDX,0x20 }
    /* +0xbfa1af */ __asm { OR RDX,RAX }
    /* +0xbfa1b2 */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xbfa1bc */ __asm { IMUL R11,RDX }
    /* +0xbfa1c0 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xbfa1ca */ __asm { ADD RCX,R11 }
    /* +0xbfa1cd */ __asm { MOV RDX,RCX }
    /* +0xbfa1d0 */ __asm { SHR RDX,0x2d }
    /* +0xbfa1d4 */ __asm { MOV R10,RCX }
    /* +0xbfa1d7 */ __asm { SHR R10,0x1b }
    /* +0xbfa1db */ __asm { XOR R10D,EDX }
    /* +0xbfa1de */ __asm { SHR RCX,0x3b }
    /* +0xbfa1e2 */ __asm { ROR R10D,CL }
    /* +0xbfa1e5 */ __asm { AND R10D,0x3 }
    /* +0xbfa1e9 */ __asm { CMP R10D,0x2 }
    /* +0xbfa1ed */ __asm { JC 0x7fffa536b054 }
    /* +0xbfa1f3 */ __asm { CMP R10D,0x3 }
    /* +0xbfa1f7 */ __asm { JNZ 0x7fffa5373445 }
    /* +0xbfa1fd */ __asm { MOV R8D,0x2787daa2 }
    /* +0xbfa203 */ __asm { MOV R11,R8 }
    /* +0xbfa206 */ __asm { ROL R11,0x2e }
    /* +0xbfa20a */ __asm { MOV RDX,-0x309c75d5a55b1901 }
    /* +0xbfa214 */ __asm { MOV RAX,0x2a70c329f619127d }
    /* +0xbfa21e */ __asm { IMUL RAX,R11 }
    /* +0xbfa222 */ __asm { MOV R11,-0x3890db360d65b05f }
    /* +0xbfa22c */ __asm { ADD R11,RAX }
    /* +0xbfa22f */ __asm { MOV R9,qword ptr [RBP + 0x1038] }
    /* +0xbfa236 */ __asm { ADD R9,RDX }
    /* +0xbfa239 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xbfa240 */ __asm { ROR R9,CL }
    /* +0xbfa243 */ __asm { XOR R9,R11 }
    /* +0xbfa246 */ __asm { XOR R9,R13 }
    /* +0xbfa249 */ __asm { CMP R9,-0x1 }
    /* +0xbfa24d */ __asm { JZ 0x7fffa539597a }
    /* +0xbfa253 */ __asm { MOV R11,qword ptr [R8 + 0x58762566] }
    /* +0xbfa25a */ __asm { MOV RDX,-0x6049351290dcc205 }
    /* +0xbfa264 */ __asm { MOV RAX,R11 }
    /* +0xbfa267 */ __asm { MUL RDX }
    /* +0xbfa26a */ __asm { MOV R8,RDX }
    /* +0xbfa26d */ __asm { MOV EDX,0x146c897 }
    /* +0xbfa272 */ __asm { MOV RAX,R11 }
    /* +0xbfa275 */ __asm { MUL RDX }
    /* +0xbfa278 */ __asm { ADD RAX,R8 }
    /* +0xbfa27b */ __asm { ADC RDX,0x0 }
    /* +0xbfa27f */ __asm { TEST DL,0x1 }
    /* +0xbfa282 */ __asm { JZ 0x7fffa537c045 }
    /* +0xbfa288 */ __asm { LEA R11,[0x7fffa47bb40f] }
    /* +0xbfa28f */ __asm { MOV R8,R11 }
    /* +0xbfa292 */ __asm { NOT R8 }
    /* +0xbfa295 */ __asm { MOV RDX,0x3c28de90f610f0eb }
    /* +0xbfa29f */ __asm { IMUL RDX,R8 }
    /* +0xbfa2a3 */ __asm { MOV R8,0x3c0f1de2959fa62e }
    /* +0xbfa2ad */ __asm { CMP RDX,R8 }
    /* +0xbfa2b0 */ __asm { JZ 0x7fffa5395985 }
    /* +0xbfa2b6 */ __asm { MOV R9W,0x80cc }
    /* +0xbfa2bb */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xbfa2c2 */ __asm { SUB R9D,EDX }
    /* +0xbfa2c5 */ __asm { ADD R9D,0x8e }
    /* +0xbfa2cc */ __asm { MOV qword ptr [RBP + 0x120],R8 }
    /* +0xbfa2d3 */ __asm { MOV R8D,0x1669574c }
    /* +0xbfa2d9 */ __asm { MOV AX,0xa04e }
    /* +0xbfa2dd */ __asm { NOT EAX }
    /* +0xbfa2df */ __asm { ADD EAX,R13D }
    /* +0xbfa2e2 */ __asm { MOV ECX,R13D }
    /* +0xbfa2e5 */ __asm { ROR R9W,CL }
    /* +0xbfa2e9 */ __asm { ADD R9D,0xbfa }
    /* +0xbfa2f0 */ __asm { MOV RDI,qword ptr [RBP + 0x1048] }
    /* +0xbfa2f7 */ __asm { MOV ECX,EDI }
    /* +0xbfa2f9 */ __asm { ROL R9W,CL }
    /* +0xbfa2fd */ __asm { MOV ECX,EDX }
    /* +0xbfa2ff */ __asm { ROL AX,CL }
    /* +0xbfa302 */ __asm { XOR R8D,EDX }
    /* +0xbfa305 */ __asm { MOV R10,qword ptr [RBP + 0x1298] }
    /* +0xbfa30c */ __asm { XOR R10D,R8D }
    /* +0xbfa30f */ __asm { ROR AX,0x1 }
    /* +0xbfa312 */ __asm { MOVZX R8D,R9W }
    /* +0xbfa316 */ __asm { MOV R9W,0xcac4 }
    /* +0xbfa31b */ __asm { SUB R9D,EDX }
    /* +0xbfa31e */ __asm { MOV ECX,EDI }
    /* +0xbfa320 */ __asm { ROR R9W,CL }
    /* +0xbfa324 */ __asm { MOVZX EDX,AX }
    /* +0xbfa327 */ __asm { MOV EAX,dword ptr [R11 + 0x1bad] }
    /* +0xbfa32e */ __asm { XOR R9D,0xafad }
    /* +0xbfa335 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xbfa33c */ __asm { ROR R9W,CL }
    /* +0xbfa340 */ __asm { MOVZX R11D,R9W }
    /* +0xbfa344 */ __asm { LEA R9,[RBP + 0x280] }
    /* +0xbfa34b */ __asm { MOV qword ptr [RSP + 0x30],R9 }
    /* +0xbfa350 */ __asm { MOV dword ptr [RSP + 0x28],R11D }
    /* +0xbfa355 */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xbfa35c */ __asm { JMP 0x7fffa537c15c }
    /* +0xbfb054 */ __asm { MOV R11W,0xed7b }
    /* +0xbfb059 */ __asm { IMUL R11D,R11D,-0x6cef }
    /* +0xbfb060 */ __asm { MOV RDX,qword ptr [RBP + 0x1298] }
    /* +0xbfb067 */ __asm { MOV EAX,EDX }
    /* +0xbfb069 */ __asm { SUB EAX,dword ptr [RBP + 0x480] }
    /* +0xbfb06f */ __asm { ADD EAX,R11D }
    /* +0xbfb072 */ __asm { ROL AX,0x4 }
    /* +0xbfb076 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbfb07d */ __asm { ROR AX,CL }
    /* +0xbfb080 */ __asm { MOVZX R11D,AX }
    /* +0xbfb084 */ __asm { CMP R10D,R11D }
    /* +0xbfb087 */ __asm { JNZ 0x7fffa5373a20 }
    /* +0xbfb08d */ __asm { MOV R9D,0xd3106dc1 }
    /* +0xbfb093 */ __asm { MOV R11,0x3d60ed07d1b1c876 }
    /* +0xbfb09d */ __asm { CMP R9,R11 }
    /* +0xbfb0a0 */ __asm { NOP }
    /* +0xbfb0a1 */ __asm { NOP }
    /* +0xbfb0a2 */ __asm { NOP }
    /* +0xbfb0a3 */ __asm { NOP }
    /* +0xbfb0a4 */ __asm { NOP }
    /* +0xbfb0a5 */ __asm { MOV R11D,0x54d3e554 }
    /* +0xbfb0ab */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xbfb0b2 */ __asm { ADD R11D,0xc0000096 }
    /* +0xbfb0b9 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbfb0c0 */ __asm { ROR R11D,CL }
    /* +0xbfb0c3 */ __asm { IMUL R11D,dword ptr [RBP + 0x11d8] }
    /* +0xbfb0cb */ __asm { MOVSXD R11,R11D }
    /* +0xbfb0ce */ __asm { TEST uint8_t ptr [R11 + R9*0x1 + 0x240],0x1 }
    /* +0xbfb0d7 */ __asm { JNZ 0x7fffa537c877 }
    /* +0xbfb0dd */ __asm { LEA R11,[0x7fffa47b51d2] }
    /* +0xbfb0e4 */ __asm { MOV RDX,-0x31c674c521f6ddc9 }
    /* +0xbfb0ee */ __asm { CMP R11,RDX }
    /* +0xbfb0f1 */ __asm { NOP }
    /* +0xbfb0f2 */ __asm { NOP }
    /* +0xbfb0f3 */ __asm { NOP }
    /* +0xbfb0f4 */ __asm { NOP }
    /* +0xbfb0f5 */ __asm { NOP }
    /* +0xbfb0f6 */ __asm { MOV R10W,0xf12e }
    /* +0xbfb0fb */ __asm { MOV RDI,qword ptr [RBP + 0x1298] }
    /* +0xbfb102 */ __asm { MOV EAX,EDI }
    /* +0xbfb104 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbfb10b */ __asm { SUB EAX,ECX }
    /* +0xbfb10d */ __asm { ADD EAX,R10D }
    /* +0xbfb110 */ __asm { XOR EAX,dword ptr [RBP + 0x480] }
    /* +0xbfb116 */ __asm { NOT EAX }
    /* +0xbfb118 */ __asm { MOVZX R8D,AX }
    /* +0xbfb11c */ __asm { MOV R10W,0xbfdf }
    /* +0xbfb121 */ __asm { XOR R10D,R13D }
    /* +0xbfb124 */ __asm { NOT R10D }
    /* +0xbfb127 */ __asm { MOV RDX,0x0 }
    /* +0xbfb12e */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xbfb135 */ __asm { MOV qword ptr [RBP + 0x120],RAX }
    /* +0xbfb13c */ __asm { MOV EAX,dword ptr [R11 + 0x72ba] }
    /* +0xbfb143 */ __asm { SUB R10D,ECX }
    /* +0xbfb146 */ __asm { ADD R10D,0x66ef }
    /* +0xbfb14d */ __asm { MOV R11D,0x298bd908 }
    /* +0xbfb153 */ __asm { MOV DX,0xd5b0 }
    /* +0xbfb157 */ __asm { SUB EDX,R13D }
    /* +0xbfb15a */ __asm { XOR EDX,ECX }
    /* +0xbfb15c */ __asm { XOR EDX,0x7336 }
    /* +0xbfb162 */ __asm { ROL DX,0xa }
    /* +0xbfb166 */ __asm { MOVZX R9D,R10W }
    /* +0xbfb16a */ __asm { MOVZX EDX,DX }
    /* +0xbfb16d */ __asm { IMUL R10D,R11D,-0x4697f233 }
    /* +0xbfb174 */ __asm { ROR R10D,CL }
    /* +0xbfb177 */ __asm { ADD R10D,0x7d1e2f5c }
    /* +0xbfb17e */ __asm { MOV ECX,EDI }
    /* +0xbfb180 */ __asm { ROR R10D,CL }
    /* +0xbfb183 */ __asm { MOV ECX,R13D }
    /* +0xbfb186 */ __asm { ROL R10D,CL }
    /* +0xbfb189 */ __asm { JMP 0x7fffa537c144 }
    /* +0xc03445 */ __asm { LEA R11,[0x7fffa47b6808] }
    /* +0xc0344c */ __asm { MOV R10,R13 }
    /* +0xc0344f */ __asm { OR R10,0x1 }
    /* +0xc03453 */ __asm { MOV RDX,-0x6cf96140a5e23e6d }
    /* +0xc0345d */ __asm { XOR RDX,qword ptr [RBP + 0x1298] }
    /* +0xc03464 */ __asm { IMUL RDX,R10 }
    /* +0xc03468 */ __asm { XOR RDX,R11 }
    /* +0xc0346b */ __asm { CMP RDX,-0x4e519540 }
    /* +0xc03472 */ __asm { NOP }
    /* +0xc03473 */ __asm { NOP }
    /* +0xc03474 */ __asm { NOP }
    /* +0xc03475 */ __asm { NOP }
    /* +0xc03476 */ __asm { NOP }
    /* +0xc03477 */ __asm { MOV R10D,0xae4870c }
    /* +0xc0347d */ __asm { MOV R8W,0x326f }
    /* +0xc03482 */ __asm { MOV R9,qword ptr [RBP + 0x1038] }
    /* +0xc03489 */ __asm { LEA EAX,[R9 + R8*0x1] }
    /* +0xc0348d */ __asm { MOV RSI,qword ptr [RBP + 0x1048] }
    /* +0xc03494 */ __asm { MOV ECX,ESI }
    /* +0xc03496 */ __asm { ROL AX,CL }
    /* +0xc03499 */ __asm { XOR EAX,0xfffffe67 }
    /* +0xc0349e */ __asm { SUB EAX,R13D }
    /* +0xc034a1 */ __asm { MOVZX EDX,AX }
    /* +0xc034a4 */ __asm { MOV AX,0x159e }
    /* +0xc034a8 */ __asm { ADD EAX,0x11ea }
    /* +0xc034ad */ __asm { MOV ECX,R9D }
    /* +0xc034b0 */ __asm { ROR AX,CL }
    /* +0xc034b3 */ __asm { MOV R8W,0xe58b }
    /* +0xc034b8 */ __asm { MOV RDI,qword ptr [RBP + 0x1298] }
    /* +0xc034bf */ __asm { ADD R8D,EDI }
    /* +0xc034c2 */ __asm { XOR R8D,0x6463 }
    /* +0xc034c9 */ __asm { SUB R8D,R13D }
    /* +0xc034cc */ __asm { ROL R8W,0x8 }
    /* +0xc034d1 */ __asm { MOV R9,qword ptr [RBP + 0x498] }
    /* +0xc034d8 */ __asm { IMUL R9D,R8D }
    /* +0xc034dc */ __asm { SUB EAX,R13D }
    /* +0xc034df */ __asm { MOV ECX,ESI }
    /* +0xc034e1 */ __asm { ROL AX,CL }
    /* +0xc034e4 */ __asm { MOVZX R9D,R9W }
    /* +0xc034e8 */ __asm { MOVZX R8D,AX }
    /* +0xc034ec */ __asm { MOV qword ptr [RBP + 0x120],RCX }
    /* +0xc034f3 */ __asm { MOV EAX,dword ptr [R11 + 0x67b4] }
    /* +0xc034fa */ __asm { SUB R10D,dword ptr [RBP + 0x480] }
    /* +0xc03501 */ __asm { IMUL R10D,dword ptr [RBP + 0xe8] }
    /* +0xc03509 */ __asm { MOV ECX,EDI }
    /* +0xc0350b */ __asm { ROL R10D,CL }
    /* +0xc0350e */ __asm { XOR R10D,0x93f2c14a }
    /* +0xc03515 */ __asm { JMP 0x7fffa537c144 }
    /* +0xc03a20 */ __asm { LEA R11,[0x7fffa47b63c0] }
    /* +0xc03a27 */ __asm { MOV RDX,0x75f7aaccd76fdb43 }
    /* +0xc03a31 */ __asm { CMP R11,RDX }
    /* +0xc03a34 */ __asm { NOP }
    /* +0xc03a35 */ __asm { NOP }
    /* +0xc03a36 */ __asm { NOP }
    /* +0xc03a37 */ __asm { NOP }
    /* +0xc03a38 */ __asm { NOP }
    /* +0xc03a39 */ __asm { NOP }
    /* +0xc03a3a */ __asm { NOP }
    /* +0xc03a3b */ __asm { NOP }
    /* +0xc03a3c */ __asm { NOP }
    /* +0xc03a3d */ __asm { NOP }
    /* +0xc03a3e */ __asm { NOP }
    /* +0xc03a3f */ __asm { NOP }
    /* +0xc03a40 */ __asm { NOP }
    /* +0xc03a41 */ __asm { NOP }
    /* +0xc03a42 */ __asm { NOP }
    /* +0xc03a43 */ __asm { NOP }
    /* +0xc03a44 */ __asm { NOP }
    /* +0xc0c045 */ __asm { MOV RDX,0x619779f0417e3fa6 }
    /* +0xc0c04f */ __asm { MOV R11D,0x275072e }
    /* +0xc0c055 */ __asm { SUB R11,RDX }
    /* +0xc0c058 */ __asm { LEA R8,[0x7fffa47b4a3b] }
    /* +0xc0c05f */ __asm { XOR R11,qword ptr [RBP + 0x1298] }
    /* +0xc0c066 */ __asm { MOV ECX,R13D }
    /* +0xc0c069 */ __asm { ROL R11,CL }
    /* +0xc0c06c */ __asm { MOV R9D,0xa49428bd }
    /* +0xc0c072 */ __asm { MOV R10,R8 }
    /* +0xc0c075 */ __asm { ROL R10,0x23 }
    /* +0xc0c079 */ __asm { ADD R9D,0x61681e7 }
    /* +0xc0c080 */ __asm { ROL R9D,0xd }
    /* +0xc0c084 */ __asm { IMUL R9D,dword ptr [RBP + 0xd0] }
    /* +0xc0c08c */ __asm { ROR R9D,CL }
    /* +0xc0c08f */ __asm { NOT R9D }
    /* +0xc0c092 */ __asm { LEA RDX,[R10 + R9*0x1] }
    /* +0xc0c096 */ __asm { ADD RDX,0x42ede166 }
    /* +0xc0c09d */ __asm { CMP R11,RDX }
    /* +0xc0c0a0 */ __asm { JZ 0x7fffa53978c5 }
    /* +0xc0c0a6 */ __asm { MOV R10D,0x2209bf1f }
    /* +0xc0c0ac */ __asm { MOV R11W,0xd767 }
    /* +0xc0c0b1 */ __asm { MOV qword ptr [RBP + 0x120],RCX }
    /* +0xc0c0b8 */ __asm { MOV RDX,qword ptr [RBP + 0x480] }
    /* +0xc0c0bf */ __asm { SUB R11D,EDX }
    /* +0xc0c0c2 */ __asm { MOV RDI,qword ptr [RBP + 0x1048] }
    /* +0xc0c0c9 */ __asm { MOV ECX,EDI }
    /* +0xc0c0cb */ __asm { ROR R11W,CL }
    /* +0xc0c0cf */ __asm { MOV AX,0x62a2 }
    /* +0xc0c0d3 */ __asm { SUB EAX,EDX }
    /* +0xc0c0d5 */ __asm { MOV R9,qword ptr [RBP + 0x1298] }
    /* +0xc0c0dc */ __asm { XOR R9D,EAX }
    /* +0xc0c0df */ __asm { NOT R9D }
    /* +0xc0c0e2 */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xc0c0e9 */ __asm { MOV ECX,EDX }
    /* +0xc0c0eb */ __asm { ROR R9W,CL }
    /* +0xc0c0ef */ __asm { SUB R11D,EDX }
    /* +0xc0c0f2 */ __asm { OR R13D,0x1 }
    /* +0xc0c0f6 */ __asm { IMUL R13D,R10D }
    /* +0xc0c0fa */ __asm { ROL R13D,0x11 }
    /* +0xc0c0fe */ __asm { IMUL R10D,R13D,0x65b92573 }
    /* +0xc0c105 */ __asm { MOV AX,0x8274 }
    /* +0xc0c109 */ __asm { MOV RSI,qword ptr [RBP + 0x188] }
    /* +0xc0c110 */ __asm { IMUL ESI,EAX }
    /* +0xc0c113 */ __asm { ROL SI,0xb }
    /* +0xc0c117 */ __asm { MOV ECX,EDI }
    /* +0xc0c119 */ __asm { ROL SI,CL }
    /* +0xc0c11c */ __asm { ADD R11D,0x2933 }
    /* +0xc0c123 */ __asm { MOV EAX,dword ptr [R8 + 0x7a51] }
    /* +0xc0c12a */ __asm { MOVZX R9D,R9W }
    /* +0xc0c12e */ __asm { ADD ESI,0x15 }
    /* +0xc0c131 */ __asm { MOV ECX,EDX }
    /* +0xc0c133 */ __asm { ROL SI,CL }
    /* +0xc0c136 */ __asm { XOR R10D,EDX }
    /* +0xc0c139 */ __asm { NOT R10D }
    /* +0xc0c13c */ __asm { MOVZX R8D,SI }
    /* +0xc0c140 */ __asm { MOVZX EDX,R11W }
    /* +0xc0c144 */ __asm { LEA R11,[RBP + 0x280] }
    /* +0xc0c14b */ __asm { MOV qword ptr [RSP + 0x30],R11 }
    /* +0xc0c150 */ __asm { MOV dword ptr [RSP + 0x28],R9D }
    /* +0xc0c155 */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xc0c15c */ __asm { SYSCALL }
    /* +0xc0c15e */ __asm { MOV dword ptr [RBP + 0x120],0x96db0cfd }
    /* +0xc0c168 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xc0c16f */ __asm { MOV R10,qword ptr [RBP + 0x1350] }
    /* +0xc0c176 */ __asm { CMP dword ptr [RBP + 0x1b0],R10D }
    /* +0xc0c17d */ __asm { NOP }
    /* +0xc0c17e */ __asm { NOP }
    /* +0xc0c17f */ __asm { NOP }
    /* +0xc0c180 */ __asm { NOP }
    /* +0xc0c181 */ __asm { NOP }
    /* +0xc0c182 */ __asm { NOP }
    /* +0xc0c183 */ __asm { NOP }
    /* +0xc0c184 */ __asm { NOP }
    /* +0xc0c185 */ __asm { NOP }
    /* +0xc0c186 */ __asm { NOP }
    /* +0xc0c187 */ __asm { NOP }
    /* +0xc0c188 */ __asm { NOP }
    /* +0xc0c189 */ __asm { NOP }
    /* +0xc0c18a */ __asm { NOP }
    /* +0xc0c18b */ __asm { NOP }
    /* +0xc0c18c */ __asm { NOP }
    /* +0xc0c18d */ __asm { NOP }
    /* +0xc0c877 */ __asm { NOP }
    /* +0xc0c879 */ __asm { MOV R8,0x0 }
    /* +0xc0c880 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xc0c887 */ __asm { RDTSC }
    /* +0xc0c889 */ __asm { SHL RDX,0x20 }
    /* +0xc0c88d */ __asm { OR RDX,RAX }
    /* +0xc0c890 */ __asm { MOV R11,-0x583f2dd720db9bdb }
    /* +0xc0c89a */ __asm { IMUL R11,RDX }
    /* +0xc0c89e */ __asm { MOV R10,0xcdb368cd5fe9312 }
    /* +0xc0c8a8 */ __asm { ADD R10,R11 }
}


// ============================================================================
// Function : FUN_7fffa535d810  |  RVA: 0xbed810  |  Size: 72 bytes
// Callers  : FUN_7fffa5333440@0xbc3440
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa535d810(void) {
    /* +0xbed810 */ __asm { MOV RCX,qword ptr [RBP + 0x4b8] }
    /* +0xbed817 */ __asm { DEC dword ptr [RCX + 0x4] }
    /* +0xbed81a */ __asm { JNZ 0x7fffa535d836 }
    /* +0xbed81c */ __asm { XOR R11D,R11D }
    /* +0xbed81f */ __asm { XCHG dword ptr [RCX],R11D }
    /* +0xbed822 */ __asm { ADD RCX,0x8 }
    /* +0xbed826 */ __asm { CALL qword ptr [0x7fffa5877640] }
    /* +0xbed82c */ __asm { MOV R9,-0x2ecbdabc217d106b }
    /* +0xbed836 */ __asm { TEST R15B,R15B }
    /* +0xbed839 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xbed840 */ __asm { MOV R15,qword ptr [RBP + 0xd0] }
    /* +0xbed847 */ __asm { NOP }
    /* +0xbed848 */ __asm { NOP }
    /* +0xbed849 */ __asm { NOP }
    /* +0xbed84a */ __asm { NOP }
    /* +0xbed84b */ __asm { NOP }
    /* +0xbed84c */ __asm { NOP }
    /* +0xbed84d */ __asm { NOP }
    /* +0xbed84e */ __asm { NOP }
    /* +0xbed84f */ __asm { NOP }
    /* +0xbed850 */ __asm { NOP }
    /* +0xbed851 */ __asm { NOP }
    /* +0xbed852 */ __asm { NOP }
    /* +0xbed853 */ __asm { NOP }
    /* +0xbed854 */ __asm { NOP }
    /* +0xbed855 */ __asm { NOP }
    /* +0xbed856 */ __asm { NOP }
    /* +0xbed857 */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa5364e53  |  RVA: 0xbf4e53  |  Size: 8790 bytes
// Callers  : FUN_7fffa5397bd1@0xc27bd1
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5364e53(void) {
    /* +0xbf4e53 */ __asm { LEA R11,[0x7fffa563044b] }
    /* +0xbf4e5a */ __asm { MOV R10D,0xa9623d41 }
    /* +0xbf4e60 */ __asm { ADD R10D,0x148a51d }
    /* +0xbf4e67 */ __asm { IMUL R10D,dword ptr [RBP + 0xd0] }
    /* +0xbf4e6f */ __asm { NOT R10D }
    /* +0xbf4e72 */ __asm { ROL R10D,0x1a }
    /* +0xbf4e76 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xbf4e7d */ __asm { ROL R10D,CL }
    /* +0xbf4e80 */ __asm { MOVSXD RDX,R10D }
    /* +0xbf4e83 */ __asm { ADD RDX,R11 }
    /* +0xbf4e86 */ __asm { MOV RBX,qword ptr [RBP + 0xa0] }
    /* +0xbf4e8d */ __asm { MOV RCX,RBX }
    /* +0xbf4e90 */ __asm { CALL RDX }
    /* +0xbf4e92 */ __asm { MOV qword ptr [RBP + 0x5e8],RBX }
    /* +0xbf4e99 */ __asm { MOV R11D,EAX }
    /* +0xbf4e9c */ __asm { INC R11D }
    /* +0xbf4e9f */ __asm { MOV word ptr [RBP + 0x5e2],R11W }
    /* +0xbf4ea7 */ __asm { MOV word ptr [RBP + 0x5e0],AX }
    /* +0xbf4eae */ __asm { LEA RDX,[RBP + 0x5e0] }
    /* +0xbf4eb5 */ __asm { LEA R9,[RBP + 0x1070] }
    /* +0xbf4ebc */ __asm { MOV RCX,qword ptr [RBP + 0x590] }
    /* +0xbf4ec3 */ __asm { XOR R8D,R8D }
    /* +0xbf4ec6 */ __asm { CALL RSI }
    /* +0xbf4ec8 */ __asm { MOV RCX,qword ptr [RBP + 0x1070] }
    /* +0xbf4ecf */ __asm { TEST RCX,RCX }
    /* +0xbf4ed2 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xbf4ed9 */ __asm { MOV R15,qword ptr [RBP + 0xd0] }
    /* +0xbf4ee0 */ __asm { MOV RBX,qword ptr [RBP + 0xe8] }
    /* +0xbf4ee7 */ __asm { MOV R14,qword ptr [RBP + 0x11d8] }
    /* +0xbf4eee */ __asm { MOV R11,qword ptr [RBP + 0x1350] }
    /* +0xbf4ef5 */ __asm { JNZ 0x7fffa535faa4 }
    /* +0xbf4efb */ __asm { JMP 0x7fffa535fa50 }
    /* +0xbf4f00 */ __asm { MOV RCX,qword ptr [RBP + 0x5b0] }
    /* +0xbf4f07 */ __asm { MOV EDX,0x1 }
    /* +0xbf4f0c */ __asm { PUSH RDX }
    /* +0xbf4f0d */ __asm { MOV EAX,dword ptr [RCX + 0x30] }
    /* +0xbf4f10 */ __asm { AND EAX,0x100040 }
    /* +0xbf4f15 */ __asm { CMP EAX,0x100040 }
    /* +0xbf4f1a */ __asm { JNZ 0x7fffa5364f51 }
    /* +0xbf4f1c */ __asm { MOV R8D,dword ptr [RCX + 0x34] }
    /* +0xbf4f20 */ __asm { MOVSXD RAX,dword ptr [RCX + 0x4e0] }
    /* +0xbf4f27 */ __asm { LEA RBX,[RCX + 0x2d0] }
    /* +0xbf4f2e */ __asm { ADD RBX,RAX }
    /* +0xbf4f31 */ __asm { XCHG dword ptr [RBX + 0x18],R8D }
    /* +0xbf4f35 */ __asm { MOV RAX,0x7ffe03e0 }
    /* +0xbf4f3c */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0xbf4f3f */ __asm { AND RAX,-0x4 }
    /* +0xbf4f43 */ __asm { MOV RDX,RAX }
    /* +0xbf4f46 */ __asm { SHR RDX,0x20 }
    /* +0xbf4f4a */ __asm { XRSTOR [RBX] }
    /* +0xbf4f4d */ __asm { MOV dword ptr [RBX + 0x18],R8D }
    /* +0xbf4f51 */ __asm { FXRSTOR [RCX + 0x100] }
    /* +0xbf4f58 */ __asm { MOVAPS XMM0,xmmword ptr [RCX + 0x1a0] }
    /* +0xbf4f5f */ __asm { MOVAPS XMM1,xmmword ptr [RCX + 0x1b0] }
    /* +0xbf4f66 */ __asm { MOVAPS XMM2,xmmword ptr [RCX + 0x1c0] }
    /* +0xbf4f6d */ __asm { MOVAPS XMM3,xmmword ptr [RCX + 0x1d0] }
    /* +0xbf4f74 */ __asm { MOVAPS XMM4,xmmword ptr [RCX + 0x1e0] }
    /* +0xbf4f7b */ __asm { MOVAPS XMM5,xmmword ptr [RCX + 0x1f0] }
    /* +0xbf4f82 */ __asm { MOVAPS XMM6,xmmword ptr [RCX + 0x200] }
    /* +0xbf4f89 */ __asm { MOVAPS XMM7,xmmword ptr [RCX + 0x210] }
    /* +0xbf4f90 */ __asm { MOVAPS XMM8,xmmword ptr [RCX + 0x220] }
    /* +0xbf4f98 */ __asm { MOVAPS XMM9,xmmword ptr [RCX + 0x230] }
    /* +0xbf4fa0 */ __asm { MOVAPS XMM10,xmmword ptr [RCX + 0x240] }
    /* +0xbf4fa8 */ __asm { MOVAPS XMM11,xmmword ptr [RCX + 0x250] }
    /* +0xbf4fb0 */ __asm { MOVAPS XMM12,xmmword ptr [RCX + 0x260] }
    /* +0xbf4fb8 */ __asm { MOVAPS XMM13,xmmword ptr [RCX + 0x270] }
    /* +0xbf4fc0 */ __asm { MOVAPS XMM14,xmmword ptr [RCX + 0x280] }
    /* +0xbf4fc8 */ __asm { MOVAPS XMM15,xmmword ptr [RCX + 0x290] }
    /* +0xbf4fd0 */ __asm { LDMXCSR dword ptr [RCX + 0x34] }
    /* +0xbf4fd4 */ __asm { POP RDX }
    /* +0xbf4fd5 */ __asm { SUB RSP,0x28 }
    /* +0xbf4fd9 */ __asm { MOV AX,word ptr [RCX + 0x42] }
    /* +0xbf4fdd */ __asm { MOV word ptr [RSP + 0x20],AX }
    /* +0xbf4fe2 */ __asm { MOV RAX,qword ptr [RCX + 0x98] }
    /* +0xbf4fe9 */ __asm { MOV qword ptr [RSP + 0x18],RAX }
    /* +0xbf4fee */ __asm { MOV EAX,dword ptr [RCX + 0x44] }
    /* +0xbf4ff1 */ __asm { MOV dword ptr [RSP + 0x10],EAX }
    /* +0xbf4ff5 */ __asm { MOV AX,word ptr [RCX + 0x38] }
    /* +0xbf4ff9 */ __asm { MOV word ptr [RSP + 0x8],AX }
    /* +0xbf4ffe */ __asm { MOV RAX,qword ptr [RCX + 0xf8] }
    /* +0xbf5005 */ __asm { MOV qword ptr [RSP],RAX }
    /* +0xbf5009 */ __asm { MOV RAX,qword ptr [RCX + 0x78] }
    /* +0xbf500d */ __asm { MOV RDX,qword ptr [RCX + 0x88] }
    /* +0xbf5014 */ __asm { MOV R8,qword ptr [RCX + 0xb8] }
    /* +0xbf501b */ __asm { MOV R9,qword ptr [RCX + 0xc0] }
    /* +0xbf5022 */ __asm { MOV R10,qword ptr [RCX + 0xc8] }
    /* +0xbf5029 */ __asm { MOV R11,qword ptr [RCX + 0xd0] }
    /* +0xbf5030 */ __asm { MOV RBX,qword ptr [RCX + 0x90] }
    /* +0xbf5037 */ __asm { MOV RSI,qword ptr [RCX + 0xa8] }
    /* +0xbf503e */ __asm { MOV RDI,qword ptr [RCX + 0xb0] }
    /* +0xbf5045 */ __asm { MOV RBP,qword ptr [RCX + 0xa0] }
    /* +0xbf504c */ __asm { MOV R12,qword ptr [RCX + 0xd8] }
    /* +0xbf5053 */ __asm { MOV R13,qword ptr [RCX + 0xe0] }
    /* +0xbf505a */ __asm { MOV R14,qword ptr [RCX + 0xe8] }
    /* +0xbf5061 */ __asm { MOV R15,qword ptr [RCX + 0xf0] }
    /* +0xbf5068 */ __asm { MOV RCX,qword ptr [RCX + 0x80] }
    /* +0xbf506f */ __asm { IRETQ }
    /* +0xbf536a */ __asm { MOV R8D,R10D }
    /* +0xbf536d */ __asm { OR R8D,0x1 }
    /* +0xbf5371 */ __asm { MOV R11D,0x2ca68f89 }
    /* +0xbf5377 */ __asm { MOV dword ptr [RBP + 0x1b0],R8D }
    /* +0xbf537e */ __asm { IMUL R11D,R8D }
    /* +0xbf5382 */ __asm { ROR R11D,0x1 }
    /* +0xbf5385 */ __asm { ADD R11D,0x340384bd }
    /* +0xbf538c */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf5393 */ __asm { ROR R11D,CL }
    /* +0xbf5396 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xbf539d */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf53a4 */ __asm { MOV RBX,qword ptr [RAX + 0x30] }
    /* +0xbf53a8 */ __asm { TEST RBX,RBX }
    /* +0xbf53ab */ __asm { JZ 0x7fffa5386173 }
    /* +0xbf53b1 */ __asm { MOV R9D,dword ptr [RBX + 0x3c] }
    /* +0xbf53b5 */ __asm { ADD R9,RBX }
    /* +0xbf53b8 */ __asm { JZ 0x7fffa5386173 }
    /* +0xbf53be */ __asm { MOV R11W,0xb719 }
    /* +0xbf53c3 */ __asm { MOV EAX,dword ptr [RBP + 0x50] }
    /* +0xbf53c6 */ __asm { IMUL EAX,R11D }
    /* +0xbf53ca */ __asm { ADD EAX,0x204 }
    /* +0xbf53cf */ __asm { ROL AX,0x6 }
    /* +0xbf53d3 */ __asm { NOT EAX }
    /* +0xbf53d5 */ __asm { MOVZX ECX,AX }
    /* +0xbf53d8 */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0xbf53dc */ __asm { MOV AX,0xf9e0 }
    /* +0xbf53e0 */ __asm { MOV R11,qword ptr [R11 + 0xfe8] }
    /* +0xbf53e7 */ __asm { IMUL EAX,dword ptr [RBP + 0x1298] }
    /* +0xbf53ee */ __asm { NOT EAX }
    /* +0xbf53f0 */ __asm { ROL AX,0x5 }
    /* +0xbf53f4 */ __asm { ADD EAX,R10D }
    /* +0xbf53f7 */ __asm { MOVZX ECX,AX }
    /* +0xbf53fa */ __asm { MOV R8,qword ptr GS:[RCX] }
    /* +0xbf53fe */ __asm { ADD R11,qword ptr [R8 + 0x370] }
    /* +0xbf5405 */ __asm { NOT R11 }
    /* +0xbf5408 */ __asm { ROL R11,0x18 }
    /* +0xbf540c */ __asm { ADD R11,0x3cc3451f }
    /* +0xbf5413 */ __asm { MOV R8,-0x2c6f10ffaedf91a2 }
    /* +0xbf541d */ __asm { CMP R11,R8 }
    /* +0xbf5420 */ __asm { NOP }
    /* +0xbf5421 */ __asm { NOP }
    /* +0xbf5422 */ __asm { NOP }
    /* +0xbf5423 */ __asm { NOP }
    /* +0xbf5424 */ __asm { NOP }
    /* +0xbf5425 */ __asm { MOV R11,0x22f9c2262769bce }
    /* +0xbf542f */ __asm { MOV AX,0xa13f }
    /* +0xbf5433 */ __asm { ADD R11,R10 }
    /* +0xbf5436 */ __asm { MOV R8,0x0 }
    /* +0xbf543d */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xbf5444 */ __asm { NOP }
    /* +0xbf5445 */ __asm { XOR EAX,0x683a }
    /* +0xbf544a */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf5451 */ __asm { MOV R8,RCX }
    /* +0xbf5454 */ __asm { OR R8,0x1 }
    /* +0xbf5458 */ __asm { MOV R15D,dword ptr [RBP + 0x50] }
    /* +0xbf545c */ __asm { IMUL R15D,EAX }
    /* +0xbf5460 */ __asm { NOT R15D }
    /* +0xbf5463 */ __asm { ROL R11,0x5 }
    /* +0xbf5467 */ __asm { ROR R15W,CL }
    /* +0xbf546b */ __asm { IMUL R11,R8 }
    /* +0xbf546f */ __asm { MOV RCX,qword ptr [R9 + 0x88] }
    /* +0xbf5476 */ __asm { MOV qword ptr [RBP + 0x3b0],0x0 }
    /* +0xbf5481 */ __asm { CMP RCX,R11 }
    /* +0xbf5484 */ __asm { JC 0x7fffa536599c }
    /* +0xbf548a */ __asm { MOV EAX,R15D }
    /* +0xbf548d */ __asm { MOVZX R9D,AX }
    /* +0xbf5491 */ __asm { MOV ECX,ECX }
    /* +0xbf5493 */ __asm { CMP ECX,R9D }
    /* +0xbf5496 */ __asm { JZ 0x7fffa536599c }
    /* +0xbf549c */ __asm { PUSHFQ }
    /* +0xbf549d */ __asm { POP R11 }
    /* +0xbf549f */ __asm { MOV qword ptr [RBP + 0x590],R11 }
    /* +0xbf54a6 */ __asm { TEST R11D,0x100 }
    /* +0xbf54ad */ __asm { NOP }
    /* +0xbf54ae */ __asm { NOP }
    /* +0xbf54af */ __asm { NOP }
    /* +0xbf54b0 */ __asm { NOP }
    /* +0xbf54b1 */ __asm { NOP }
    /* +0xbf54b2 */ __asm { NOP }
    /* +0xbf54b3 */ __asm { NOP }
    /* +0xbf54b4 */ __asm { NOP }
    /* +0xbf54b5 */ __asm { NOP }
    /* +0xbf54b6 */ __asm { MOV dword ptr [RBP + 0x5e0],0xaa54569c }
    /* +0xbf54c0 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf54c7 */ __asm { TEST R11D,R11D }
    /* +0xbf54ca */ __asm { JNS 0x7fffa5394b99 }
    /* +0xbf54d0 */ __asm { MOV R11D,0x894d6001 }
    /* +0xbf54d6 */ __asm { MOV EAX,0x4b73920e }
    /* +0xbf54db */ __asm { MOV R9D,0x660e5ce7 }
    /* +0xbf54e1 */ __asm { SUB R9D,EAX }
    /* +0xbf54e4 */ __asm { IMUL R9D,dword ptr [RBP + 0x480] }
    /* +0xbf54ec */ __asm { XOR EAX,EAX }
    /* +0xbf54ee */ __asm { XOR R8D,R8D }
    /* +0xbf54f1 */ __asm { CMP dword ptr [RBX + RCX*0x1 + 0x1c],0x0 }
    /* +0xbf54f6 */ __asm { SETZ AL }
    /* +0xbf54f9 */ __asm { SETNS R8B }
    /* +0xbf54fd */ __asm { IMUL R11D,R11D,0x6aa11825 }
    /* +0xbf5504 */ __asm { NOT R11D }
    /* +0xbf5507 */ __asm { ROL R11D,0xa }
    /* +0xbf550b */ __asm { ADD R11D,R10D }
    /* +0xbf550e */ __asm { MOVSXD R11,R11D }
    /* +0xbf5511 */ __asm { CMP R9,R11 }
    /* +0xbf5514 */ __asm { CMOVGE R8D,EAX }
    /* +0xbf5518 */ __asm { TEST R8B,R8B }
    /* +0xbf551b */ __asm { JNZ 0x7fffa5394ba1 }
    /* +0xbf5521 */ __asm { NOP }
    /* +0xbf5523 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xbf552a */ __asm { MOV R8,0x0 }
    /* +0xbf5531 */ __asm { CMP dword ptr [RBX + RCX*0x1 + 0x20],0x0 }
    /* +0xbf5536 */ __asm { JZ 0x7fffa5394ba1 }
    /* +0xbf553c */ __asm { CMP dword ptr [RBX + RCX*0x1 + 0x24],0x0 }
    /* +0xbf5541 */ __asm { JZ 0x7fffa5394ba1 }
    /* +0xbf5547 */ __asm { MOV dword ptr [RBP + 0x5e0],0xb1676a98 }
    /* +0xbf5551 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf5558 */ __asm { MOV R9D,dword ptr [RBX + RCX*0x1 + 0x1c] }
    /* +0xbf555d */ __asm { MOV qword ptr [RBP + 0x480],R9 }
    /* +0xbf5564 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5d52e0ba }
    /* +0xbf556e */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf5575 */ __asm { CMP R11D,0xb5807139 }
    /* +0xbf557c */ __asm { JNC 0x7fffa5394bc2 }
    /* +0xbf5582 */ __asm { MOV R8,0x0 }
    /* +0xbf5589 */ __asm { NOP }
    /* +0xbf558b */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xbf5592 */ __asm { MOV ESI,dword ptr [RBX + RCX*0x1 + 0x20] }
    /* +0xbf5596 */ __asm { MOV dword ptr [RBP + 0x5e0],0x7c0c5dd9 }
    /* +0xbf55a0 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf55a7 */ __asm { MOV R9D,dword ptr [RBX + RCX*0x1 + 0x24] }
    /* +0xbf55ac */ __asm { MOV qword ptr [RBP + 0x50],R9 }
    /* +0xbf55b0 */ __asm { MOV dword ptr [RBP + 0x5e0],0x8645c168 }
    /* +0xbf55ba */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf55c1 */ __asm { MOV R15D,dword ptr [RBX + RCX*0x1 + 0x18] }
    /* +0xbf55c6 */ __asm { TEST R15,R15 }
    /* +0xbf55c9 */ __asm { JZ 0x7fffa5386173 }
    /* +0xbf55cf */ __asm { ADD qword ptr [RBP + 0x480],RBX }
    /* +0xbf55d6 */ __asm { ADD RSI,RBX }
    /* +0xbf55d9 */ __asm { ADD qword ptr [RBP + 0x50],RBX }
    /* +0xbf55dd */ __asm { MOV R13D,0x1 }
    /* +0xbf55e3 */ __asm { MOV R14,0x7ffdd1677d5 }
    /* +0xbf55ed */ __asm { MOV RAX,-0xf6f69a45 }
    /* +0xbf55f7 */ __asm { MOV qword ptr [RBP + 0x3b0],0x0 }
    /* +0xbf5602 */ __asm { MOV R12,qword ptr [RBP + 0x590] }
    /* +0xbf5609 */ __asm { NOP dword ptr [RAX] }
    /* +0xbf5610 */ __asm { NOP }
    /* +0xbf5612 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xbf5619 */ __asm { MOV R8,0x0 }
    /* +0xbf5620 */ __asm { MOV R11D,dword ptr [RSI + R13*0x4 + -0x4] }
    /* +0xbf5625 */ __asm { TEST R11D,R11D }
    /* +0xbf5628 */ __asm { JZ 0x7fffa53658fa }
    /* +0xbf562e */ __asm { MOV R8D,R11D }
    /* +0xbf5631 */ __asm { ADD R8,RBX }
    /* +0xbf5634 */ __asm { JZ 0x7fffa53658fa }
    /* +0xbf563a */ __asm { MOV R11,qword ptr [RBP + 0x50] }
    /* +0xbf563e */ __asm { MOVZX ECX,word ptr [R11 + R13*0x2 + -0x2] }
    /* +0xbf5644 */ __asm { MOV R11,qword ptr [RBP + 0x480] }
    /* +0xbf564b */ __asm { MOV R9D,dword ptr [R11 + RCX*0x4] }
    /* +0xbf564f */ __asm { MOVZX EDI,uint8_t ptr [R8] }
    /* +0xbf5653 */ __asm { TEST RDI,RDI }
    /* +0xbf5656 */ __asm { JZ 0x7fffa53658a8 }
    /* +0xbf565c */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xbf5663 */ __asm { MOV R11,0x0 }
    /* +0xbf566a */ __asm { NOP }
    /* +0xbf566b */ __asm { MOV R11,-0xca582439299b156 }
    /* +0xbf5675 */ __asm { SUB R11,R10 }
    /* +0xbf5678 */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x1] }
    /* +0xbf567d */ __asm { ROL R11,0x22 }
    /* +0xbf5681 */ __asm { XOR R11,0x1d8fda7a }
    /* +0xbf5688 */ __asm { SUB R11,qword ptr [RBP + 0x1038] }
    /* +0xbf568f */ __asm { XOR RDI,R11 }
    /* +0xbf5692 */ __asm { IMUL RDI,RDX }
    /* +0xbf5696 */ __asm { TEST RCX,RCX }
    /* +0xbf5699 */ __asm { JZ 0x7fffa536589a }
    /* +0xbf569f */ __asm { XOR RDI,RCX }
    /* +0xbf56a2 */ __asm { IMUL RDI,RDX }
    /* +0xbf56a6 */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x2] }
    /* +0xbf56ab */ __asm { TEST RCX,RCX }
    /* +0xbf56ae */ __asm { JZ 0x7fffa536589a }
    /* +0xbf56b4 */ __asm { XOR RDI,RCX }
    /* +0xbf56b7 */ __asm { IMUL RDI,RDX }
    /* +0xbf56bb */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x3] }
    /* +0xbf56c0 */ __asm { TEST RCX,RCX }
    /* +0xbf56c3 */ __asm { JZ 0x7fffa536589a }
    /* +0xbf56c9 */ __asm { MOVZX R11D,uint8_t ptr [R8 + 0x4] }
    /* +0xbf56ce */ __asm { XOR RDI,RCX }
    /* +0xbf56d1 */ __asm { IMUL RDI,RDX }
    /* +0xbf56d5 */ __asm { TEST R11,R11 }
    /* +0xbf56d8 */ __asm { JZ 0x7fffa536589a }
    /* +0xbf56de */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x5] }
    /* +0xbf56e3 */ __asm { XOR RDI,R11 }
    /* +0xbf56e6 */ __asm { IMUL RDI,RDX }
    /* +0xbf56ea */ __asm { TEST RCX,RCX }
    /* +0xbf56ed */ __asm { JZ 0x7fffa536589a }
    /* +0xbf56f3 */ __asm { LEA R12,[0x7fffa4770000] }
    /* +0xbf56fa */ __asm { MOV R11,0x0 }
    /* +0xbf5701 */ __asm { NOP }
    /* +0xbf5703 */ __asm { MOV R12,RDI }
    /* +0xbf5706 */ __asm { XOR R12,RCX }
    /* +0xbf5709 */ __asm { MOVZX R11D,uint8_t ptr [R8 + 0x6] }
    /* +0xbf570e */ __asm { MOV RDI,-0x400e6b9599a }
    /* +0xbf5718 */ __asm { XOR RDI,-0x48a11d4f }
    /* +0xbf571f */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf5726 */ __asm { SUB RDI,RCX }
    /* +0xbf5729 */ __asm { ADD RDI,-0x67aee897 }
    /* +0xbf5730 */ __asm { IMUL RDI,R12 }
    /* +0xbf5734 */ __asm { TEST R11,R11 }
    /* +0xbf5737 */ __asm { JZ 0x7fffa5365942 }
    /* +0xbf573d */ __asm { MOV R12,RDI }
    /* +0xbf5740 */ __asm { MOV RDI,0x9d2005b6bfc95 }
    /* +0xbf574a */ __asm { XOR RDI,-0x5b63fc96 }
    /* +0xbf5751 */ __asm { ROL RDI,CL }
    /* +0xbf5754 */ __asm { XOR R12,R11 }
    /* +0xbf5757 */ __asm { NOT RDI }
    /* +0xbf575a */ __asm { IMUL RDI,R12 }
    /* +0xbf575e */ __asm { MOV R11,0x0 }
    /* +0xbf5765 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xbf576c */ __asm { NOP }
    /* +0xbf576d */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x7] }
    /* +0xbf5772 */ __asm { TEST RCX,RCX }
    /* +0xbf5775 */ __asm { JZ 0x7fffa5365942 }
    /* +0xbf577b */ __asm { XOR RDI,RCX }
    /* +0xbf577e */ __asm { IMUL RDI,RDX }
    /* +0xbf5782 */ __asm { MOVZX R11D,uint8_t ptr [R8 + 0x8] }
    /* +0xbf5787 */ __asm { TEST R11,R11 }
    /* +0xbf578a */ __asm { MOV R12,qword ptr [RBP + 0x590] }
    /* +0xbf5791 */ __asm { JZ 0x7fffa536589a }
    /* +0xbf5797 */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x9] }
    /* +0xbf579c */ __asm { XOR RDI,R11 }
    /* +0xbf579f */ __asm { IMUL RDI,RDX }
    /* +0xbf57a3 */ __asm { TEST RCX,RCX }
    /* +0xbf57a6 */ __asm { JZ 0x7fffa536589a }
    /* +0xbf57ac */ __asm { MOVZX R11D,uint8_t ptr [R8 + 0xa] }
    /* +0xbf57b1 */ __asm { XOR RDI,RCX }
    /* +0xbf57b4 */ __asm { IMUL RDI,RDX }
    /* +0xbf57b8 */ __asm { TEST R11,R11 }
    /* +0xbf57bb */ __asm { JZ 0x7fffa536589a }
    /* +0xbf57c1 */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0xb] }
    /* +0xbf57c6 */ __asm { XOR RDI,R11 }
    /* +0xbf57c9 */ __asm { IMUL RDI,RDX }
    /* +0xbf57cd */ __asm { TEST RCX,RCX }
    /* +0xbf57d0 */ __asm { JZ 0x7fffa536589a }
    /* +0xbf57d6 */ __asm { MOVZX R11D,uint8_t ptr [R8 + 0xc] }
    /* +0xbf57db */ __asm { XOR RDI,RCX }
    /* +0xbf57de */ __asm { IMUL RDI,RDX }
    /* +0xbf57e2 */ __asm { TEST R11,R11 }
    /* +0xbf57e5 */ __asm { JZ 0x7fffa536589a }
    /* +0xbf57eb */ __asm { XOR RDI,R11 }
    /* +0xbf57ee */ __asm { IMUL RDI,RDX }
    /* +0xbf57f2 */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0xd] }
    /* +0xbf57f7 */ __asm { TEST RCX,RCX }
    /* +0xbf57fa */ __asm { JZ 0x7fffa536589a }
    /* +0xbf5800 */ __asm { LEA R12,[0x7fffa4770000] }
    /* +0xbf5807 */ __asm { NOP }
    /* +0xbf5809 */ __asm { MOV R11,0x0 }
    /* +0xbf5810 */ __asm { XOR RDI,RCX }
    /* +0xbf5813 */ __asm { IMUL RDI,RDX }
    /* +0xbf5817 */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0xe] }
    /* +0xbf581c */ __asm { TEST RCX,RCX }
    /* +0xbf581f */ __asm { JZ 0x7fffa5365942 }
    /* +0xbf5825 */ __asm { XOR RDI,RCX }
    /* +0xbf5828 */ __asm { IMUL RDI,RDX }
    /* +0xbf582c */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0xf] }
    /* +0xbf5831 */ __asm { TEST RCX,RCX }
    /* +0xbf5834 */ __asm { JZ 0x7fffa5365942 }
    /* +0xbf583a */ __asm { MOVZX R11D,uint8_t ptr [R8 + 0x10] }
    /* +0xbf583f */ __asm { XOR RDI,RCX }
    /* +0xbf5842 */ __asm { IMUL RDI,RDX }
    /* +0xbf5846 */ __asm { TEST R11,R11 }
    /* +0xbf5849 */ __asm { JZ 0x7fffa5365942 }
    /* +0xbf584f */ __asm { CMP uint8_t ptr [R8 + 0x11],0x0 }
    /* +0xbf5854 */ __asm { MOV R12,qword ptr [RBP + 0x590] }
    /* +0xbf585b */ __asm { JNZ 0x7fffa53658fa }
    /* +0xbf5861 */ __asm { MOV R12,-0x9d1ff2a7e9bcf }
    /* +0xbf586b */ __asm { NOT R12 }
    /* +0xbf586e */ __asm { ADD R12,R10 }
    /* +0xbf5871 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf5878 */ __asm { ROL R12,CL }
    /* +0xbf587b */ __asm { XOR R11,RDI }
    /* +0xbf587e */ __asm { IMUL R12,R11 }
    /* +0xbf5882 */ __asm { MOV R8B,0x1 }
    /* +0xbf5885 */ __asm { MOV RDI,R12 }
    /* +0xbf5888 */ __asm { MOV R12,qword ptr [RBP + 0x590] }
    /* +0xbf588f */ __asm { TEST R12D,0x100 }
    /* +0xbf5896 */ __asm { JZ 0x7fffa53658cc }
    /* +0xbf5898 */ __asm { JMP 0x7fffa53658be }
    /* +0xbf589a */ __asm { XOR R8D,R8D }
    /* +0xbf589d */ __asm { TEST R12D,0x100 }
    /* +0xbf58a4 */ __asm { JZ 0x7fffa53658cc }
    /* +0xbf58a6 */ __asm { JMP 0x7fffa53658be }
    /* +0xbf58a8 */ __asm { XOR R8D,R8D }
    /* +0xbf58ab */ __asm { MOV RDI,0x5f73a9e38a7cd53d }
    /* +0xbf58b5 */ __asm { TEST R12D,0x100 }
    /* +0xbf58bc */ __asm { JZ 0x7fffa53658cc }
    /* +0xbf58be */ __asm { ADD EAX,0xc7b6136c }
    /* +0xbf58c3 */ __asm { LOOPZ 0x7fffa5365874 }
    /* +0xbf58c5 */ __asm { RET }
    /* +0xbf58cc */ __asm { MOV dword ptr [RBP + 0x5e0],0x2bc2f6ea }
    /* +0xbf58d6 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf58dd */ __asm { TEST R11D,R11D }
    /* +0xbf58e0 */ __asm { NOP }
    /* +0xbf58e1 */ __asm { NOP }
    /* +0xbf58e2 */ __asm { NOP }
    /* +0xbf58e3 */ __asm { NOP }
    /* +0xbf58e4 */ __asm { NOP }
    /* +0xbf58e5 */ __asm { MOV R11,-0x1f43144d5ee4d240 }
    /* +0xbf58ef */ __asm { CMP RDI,R11 }
    /* +0xbf58f2 */ __asm { SETZ CL }
    /* +0xbf58f5 */ __asm { TEST R8B,CL }
    /* +0xbf58f8 */ __asm { JNZ 0x7fffa536596a }
    /* +0xbf58fa */ __asm { MOV R11,R14 }
    /* +0xbf58fd */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf5904 */ __asm { ADD R11,RCX }
    /* +0xbf5907 */ __asm { XOR R11,R10 }
    /* +0xbf590a */ __asm { ADD R11,RAX }
    /* +0xbf590d */ __asm { MOV R8D,0xd7892432 }
    /* +0xbf5913 */ __asm { XOR R8D,R10D }
    /* +0xbf5916 */ __asm { NOT R8D }
    /* +0xbf5919 */ __asm { SUB R8D,ECX }
    /* +0xbf591c */ __asm { MOVSXD R8,R8D }
    /* +0xbf591f */ __asm { XOR ECX,ECX }
    /* +0xbf5921 */ __asm { XOR R9D,R9D }
    /* +0xbf5924 */ __asm { CMP R15,R13 }
    /* +0xbf5927 */ __asm { SETZ CL }
    /* +0xbf592a */ __asm { SETBE R9B }
    /* +0xbf592e */ __asm { CMP R8,R11 }
    /* +0xbf5931 */ __asm { CMOVLE R9D,ECX }
    /* +0xbf5935 */ __asm { TEST R9B,R9B }
    /* +0xbf5938 */ __asm { JNZ 0x7fffa536599c }
    /* +0xbf593a */ __asm { INC R13 }
    /* +0xbf593d */ __asm { JMP 0x7fffa5365610 }
    /* +0xbf5942 */ __asm { XOR R8D,R8D }
    /* +0xbf5945 */ __asm { MOV R12,qword ptr [RBP + 0x590] }
    /* +0xbf594c */ __asm { TEST R12D,0x100 }
    /* +0xbf5953 */ __asm { JZ 0x7fffa53658cc }
    /* +0xbf5959 */ __asm { JMP 0x7fffa53658be }
    /* +0xbf596a */ __asm { MOV dword ptr [RBP + 0x5e0],0x88180131 }
    /* +0xbf5974 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf597b */ __asm { TEST R11D,R11D }
    /* +0xbf597e */ __asm { NOP }
    /* +0xbf597f */ __asm { NOP }
    /* +0xbf5980 */ __asm { NOP }
    /* +0xbf5981 */ __asm { NOP }
    /* +0xbf5982 */ __asm { NOP }
    /* +0xbf5983 */ __asm { ADD RBX,R9 }
    /* +0xbf5986 */ __asm { TEST dword ptr [RBP + 0x590],0x100 }
    /* +0xbf5990 */ __asm { NOP }
    /* +0xbf5991 */ __asm { NOP }
    /* +0xbf5992 */ __asm { NOP }
    /* +0xbf5993 */ __asm { NOP }
    /* +0xbf5994 */ __asm { NOP }
    /* +0xbf5995 */ __asm { MOV qword ptr [RBP + 0x3b0],RBX }
    /* +0xbf599c */ __asm { MOV EBX,0xb6694b16 }
    /* +0xbf59a1 */ __asm { MOV SI,0x24cd }
    /* +0xbf59a5 */ __asm { LEA R11,[0x7fffa47c8d4b] }
    /* +0xbf59ac */ __asm { MOV qword ptr [RBP + 0x1350],R11 }
    /* +0xbf59b3 */ __asm { LEA R11,[0x7fffa47c6837] }
    /* +0xbf59ba */ __asm { MOV qword ptr [RBP + 0x480],R11 }
    /* +0xbf59c1 */ __asm { LEA R11,[0x7fffa47c72dc] }
    /* +0xbf59c8 */ __asm { MOV qword ptr [RBP + 0x590],R11 }
    /* +0xbf59cf */ __asm { LEA R11,[0x7fffa47be2a7] }
    /* +0xbf59d6 */ __asm { MOV qword ptr [RBP + 0x50],R11 }
    /* +0xbf59da */ __asm { LEA R11,[0x7fffa47c112e] }
    /* +0xbf59e1 */ __asm { MOV qword ptr [RBP + 0x11d8],R11 }
    /* +0xbf59e8 */ __asm { MOV EAX,0x4034f757 }
    /* +0xbf59ed */ __asm { LEA R11,[0x7fffa47c7506] }
    /* +0xbf59f4 */ __asm { MOV qword ptr [RBP + 0xd0],R11 }
    /* +0xbf59fb */ __asm { MOV R8W,0xe94 }
    /* +0xbf5a00 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xbf5a07 */ __asm { ADD R8D,EDI }
    /* +0xbf5a0a */ __asm { MOV ECX,0x1660 }
    /* +0xbf5a0f */ __asm { SUB ECX,R8D }
    /* +0xbf5a12 */ __asm { SUB EAX,R10D }
    /* +0xbf5a15 */ __asm { IMUL R9D,EAX,-0x2a889b0b }
    /* +0xbf5a1c */ __asm { LEA R11,[0x7fffa47c87e2] }
    /* +0xbf5a23 */ __asm { MOV qword ptr [RBP + 0xe8],R11 }
    /* +0xbf5a2a */ __asm { MOV AX,0x8bf3 }
    /* +0xbf5a2e */ __asm { LEA R11,[0x7fffa47bee8d] }
    /* +0xbf5a35 */ __asm { MOV qword ptr [RBP + 0x1048],R11 }
    /* +0xbf5a3c */ __asm { MOV EDX,0x85b24e19 }
    /* +0xbf5a41 */ __asm { SUB EDX,EDI }
    /* +0xbf5a43 */ __asm { XOR EDX,0xdf74ef5 }
    /* +0xbf5a49 */ __asm { MOV R12D,dword ptr [RBP + 0x1b0] }
    /* +0xbf5a50 */ __asm { IMUL EDX,R12D }
    /* +0xbf5a54 */ __asm { MOV qword ptr [RBP + 0x12e0],RDX }
    /* +0xbf5a5b */ __asm { SUB R9D,EDI }
    /* +0xbf5a5e */ __asm { MOV qword ptr [RBP + 0x580],R9 }
    /* +0xbf5a65 */ __asm { MOVSX RDX,CX }
    /* +0xbf5a69 */ __asm { MOV R13W,0x71c1 }
    /* +0xbf5a6e */ __asm { MOV ECX,0x7ab8d742 }
    /* +0xbf5a73 */ __asm { MOV R8D,0xb996ab68 }
    /* +0xbf5a79 */ __asm { LEA R11,[0x7fffa47c07b7] }
    /* +0xbf5a80 */ __asm { MOV qword ptr [RBP + 0x5d8],R11 }
    /* +0xbf5a87 */ __asm { MOV R9W,0xb090 }
    /* +0xbf5a8c */ __asm { MOV R14D,0x1ab5c6c5 }
    /* +0xbf5a92 */ __asm { LEA R11,[0x7fffa47c1363] }
    /* +0xbf5a99 */ __asm { MOVZX EDX,uint8_t ptr [R11 + RDX*0x1 + 0x6] }
    /* +0xbf5a9f */ __asm { MOV uint8_t ptr [RBP + 0x11e8],DL }
    /* +0xbf5aa5 */ __asm { ADD ECX,0x6be729e2 }
    /* +0xbf5aab */ __asm { XOR EAX,R10D }
    /* +0xbf5aae */ __asm { ROL AX,0xe }
    /* +0xbf5ab2 */ __asm { MOVD XMM0,ECX }
    /* +0xbf5ab6 */ __asm { MOV ECX,0x2e9a }
    /* +0xbf5abb */ __asm { SUB ECX,EAX }
    /* +0xbf5abd */ __asm { MOV qword ptr [RBP + 0x560],RCX }
    /* +0xbf5ac4 */ __asm { ADD R8D,EDI }
}


// ============================================================================
// Function : FUN_7fffa5367aa0  |  RVA: 0xbf7aa0  |  Size: 2139 bytes
// Callers  : FUN_7fffa5381000@0xc11000
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5367aa0(void) {
    /* +0xbf7aa0 */ __asm { MOV R11D,dword ptr [RDX + R9*0x1 + 0x1c] }
    /* +0xbf7aa5 */ __asm { MOV R10W,0x2458 }
    /* +0xbf7aaa */ __asm { ADD R10D,0xffffdba8 }
    /* +0xbf7ab1 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf7ab8 */ __asm { ROL R10W,CL }
    /* +0xbf7abc */ __asm { MOVZX R10D,R10W }
    /* +0xbf7ac0 */ __asm { CMP R11D,R10D }
    /* +0xbf7ac3 */ __asm { JZ 0x7fffa5394c03 }
    /* +0xbf7ac9 */ __asm { CMP dword ptr [RDX + R9*0x1 + 0x20],0x0 }
    /* +0xbf7acf */ __asm { JZ 0x7fffa5394c03 }
    /* +0xbf7ad5 */ __asm { CMP dword ptr [RDX + R9*0x1 + 0x24],0x0 }
    /* +0xbf7adb */ __asm { JZ 0x7fffa5394c03 }
    /* +0xbf7ae1 */ __asm { MOV dword ptr [RBP + 0x5e0],0xb1676a98 }
    /* +0xbf7aeb */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf7af2 */ __asm { MOV R10D,dword ptr [RDX + R9*0x1 + 0x1c] }
    /* +0xbf7af7 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5d52e0ba }
    /* +0xbf7b01 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf7b08 */ __asm { CMP R11D,0xb5807139 }
    /* +0xbf7b0f */ __asm { JNC 0x7fffa5394c24 }
    /* +0xbf7b15 */ __asm { MOV R8,0x0 }
    /* +0xbf7b1c */ __asm { NOP }
    /* +0xbf7b1e */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xbf7b25 */ __asm { MOV R8D,dword ptr [RDX + R9*0x1 + 0x20] }
    /* +0xbf7b2a */ __asm { MOV dword ptr [RBP + 0x5e0],0x7c0c5dd9 }
    /* +0xbf7b34 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf7b3b */ __asm { MOV EDI,dword ptr [RDX + R9*0x1 + 0x24] }
    /* +0xbf7b40 */ __asm { MOV dword ptr [RBP + 0x5e0],0x8645c168 }
    /* +0xbf7b4a */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf7b51 */ __asm { MOV ESI,dword ptr [RDX + R9*0x1 + 0x18] }
    /* +0xbf7b56 */ __asm { TEST RSI,RSI }
    /* +0xbf7b59 */ __asm { JZ 0x7fffa5386193 }
    /* +0xbf7b5f */ __asm { MOV R9,R10 }
    /* +0xbf7b62 */ __asm { ADD R9,RDX }
    /* +0xbf7b65 */ __asm { ADD R8,RDX }
    /* +0xbf7b68 */ __asm { ADD RDI,RDX }
    /* +0xbf7b6b */ __asm { MOV qword ptr [RBP + 0x590],0x0 }
    /* +0xbf7b76 */ __asm { MOV R14,0x5f73a9e38a7cd53d }
    /* +0xbf7b80 */ __asm { XOR R13D,R13D }
    /* +0xbf7b83 */ __asm { MOV RAX,0x400000004e9 }
    /* +0xbf7b8d */ __asm { MOV R10,qword ptr [RBP + 0x1298] }
    /* +0xbf7b94 */ __asm { MOV qword ptr [RBP + 0x480],R9 }
    /* +0xbf7b9b */ __asm { JMP 0x7fffa5367bc3 }
    /* +0xbf7b9d */ __asm { MOV R11,-0x1f43144d5ee4d240 }
    /* +0xbf7ba7 */ __asm { CMP RBX,R11 }
    /* +0xbf7baa */ __asm { SETZ R11B }
    /* +0xbf7bae */ __asm { TEST CL,R11B }
    /* +0xbf7bb1 */ __asm { JNZ 0x7fffa5367f03 }
    /* +0xbf7bb7 */ __asm { INC R13 }
    /* +0xbf7bba */ __asm { CMP RSI,R13 }
    /* +0xbf7bbd */ __asm { JZ 0x7fffa5367f45 }
    /* +0xbf7bc3 */ __asm { MOV R15D,dword ptr [R8 + R13*0x4] }
    /* +0xbf7bc7 */ __asm { MOV ECX,R15D }
    /* +0xbf7bca */ __asm { ADD RCX,RDX }
    /* +0xbf7bcd */ __asm { JZ 0x7fffa5367bb7 }
    /* +0xbf7bcf */ __asm { TEST R15D,R15D }
    /* +0xbf7bd2 */ __asm { JZ 0x7fffa5367bb7 }
    /* +0xbf7bd4 */ __asm { MOVZX R11D,word ptr [RDI + R13*0x2] }
    /* +0xbf7bd9 */ __asm { MOV R15D,dword ptr [R9 + R11*0x4] }
    /* +0xbf7bdd */ __asm { NOP }
    /* +0xbf7bdf */ __asm { LEA R12,[0x7fffa4770000] }
    /* +0xbf7be6 */ __asm { MOV R11,0x0 }
    /* +0xbf7bed */ __asm { MOVZX EBX,uint8_t ptr [RCX] }
    /* +0xbf7bf0 */ __asm { TEST RBX,RBX }
    /* +0xbf7bf3 */ __asm { JZ 0x7fffa5367e3f }
    /* +0xbf7bf9 */ __asm { MOVZX R12D,uint8_t ptr [RCX + 0x1] }
    /* +0xbf7bfe */ __asm { XOR RBX,R14 }
    /* +0xbf7c01 */ __asm { IMUL RBX,RAX }
    /* +0xbf7c05 */ __asm { TEST R12,R12 }
    /* +0xbf7c08 */ __asm { JZ 0x7fffa5367e3b }
    /* +0xbf7c0e */ __asm { XOR RBX,R12 }
    /* +0xbf7c11 */ __asm { IMUL RBX,RAX }
    /* +0xbf7c15 */ __asm { MOVZX R12D,uint8_t ptr [RCX + 0x2] }
    /* +0xbf7c1a */ __asm { TEST R12,R12 }
    /* +0xbf7c1d */ __asm { JZ 0x7fffa5367e3b }
    /* +0xbf7c23 */ __asm { MOVSX R11,R12B }
    /* +0xbf7c27 */ __asm { MOVZX R14D,uint8_t ptr [RCX + 0x3] }
    /* +0xbf7c2c */ __asm { MOV R9D,0x4819bd77 }
    /* +0xbf7c32 */ __asm { MOV R10,qword ptr [RBP + 0x1038] }
    /* +0xbf7c39 */ __asm { ADD R9D,R10D }
    /* +0xbf7c3c */ __asm { ADD R9D,0x6986ad31 }
    /* +0xbf7c43 */ __asm { ROL R9D,0x16 }
    /* +0xbf7c47 */ __asm { MOV EAX,0xd618d50a }
    /* +0xbf7c4c */ __asm { XOR EAX,0x48ace4b4 }
    /* +0xbf7c51 */ __asm { ADD EAX,R10D }
    /* +0xbf7c54 */ __asm { CDQE }
    /* +0xbf7c56 */ __asm { CMP RAX,R9 }
    /* +0xbf7c59 */ __asm { MOV RAX,0x400000004e9 }
    /* +0xbf7c63 */ __asm { CMOVNC R11,R12 }
    /* +0xbf7c67 */ __asm { XOR RBX,R11 }
    /* +0xbf7c6a */ __asm { IMUL RBX,RAX }
    /* +0xbf7c6e */ __asm { TEST R14,R14 }
    /* +0xbf7c71 */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7c77 */ __asm { MOVZX R12D,uint8_t ptr [RCX + 0x4] }
    /* +0xbf7c7c */ __asm { XOR RBX,R14 }
    /* +0xbf7c7f */ __asm { IMUL RBX,RAX }
    /* +0xbf7c83 */ __asm { TEST R12,R12 }
    /* +0xbf7c86 */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7c8c */ __asm { MOVZX R14D,uint8_t ptr [RCX + 0x5] }
    /* +0xbf7c91 */ __asm { XOR RBX,R12 }
    /* +0xbf7c94 */ __asm { IMUL RBX,RAX }
    /* +0xbf7c98 */ __asm { TEST R14,R14 }
    /* +0xbf7c9b */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7ca1 */ __asm { MOVZX R12D,uint8_t ptr [RCX + 0x6] }
    /* +0xbf7ca6 */ __asm { XOR RBX,R14 }
    /* +0xbf7ca9 */ __asm { IMUL RBX,RAX }
    /* +0xbf7cad */ __asm { TEST R12,R12 }
    /* +0xbf7cb0 */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7cb6 */ __asm { MOV R11,0x2aae7e08c46dda76 }
    /* +0xbf7cc0 */ __asm { XOR R12,RBX }
    /* +0xbf7cc3 */ __asm { MOVZX R14D,uint8_t ptr [RCX + 0x7] }
    /* +0xbf7cc8 */ __asm { IMUL RBX,R11,-0x555e8453 }
    /* +0xbf7ccf */ __asm { XOR RBX,qword ptr [RBP + 0x1038] }
    /* +0xbf7cd6 */ __asm { IMUL RBX,R12 }
    /* +0xbf7cda */ __asm { TEST R14,R14 }
    /* +0xbf7cdd */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7ce3 */ __asm { MOVZX R12D,uint8_t ptr [RCX + 0x8] }
    /* +0xbf7ce8 */ __asm { XOR RBX,R14 }
    /* +0xbf7ceb */ __asm { IMUL RBX,RAX }
    /* +0xbf7cef */ __asm { TEST R12,R12 }
    /* +0xbf7cf2 */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7cf8 */ __asm { MOVZX R14D,uint8_t ptr [RCX + 0x9] }
    /* +0xbf7cfd */ __asm { XOR RBX,R12 }
    /* +0xbf7d00 */ __asm { IMUL RBX,RAX }
    /* +0xbf7d04 */ __asm { TEST R14,R14 }
    /* +0xbf7d07 */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7d0d */ __asm { XOR RBX,R14 }
    /* +0xbf7d10 */ __asm { MOV R9B,0x56 }
    /* +0xbf7d13 */ __asm { NOT R9B }
    /* +0xbf7d16 */ __asm { ADD R9B,uint8_t ptr [RBP + 0x1038] }
    /* +0xbf7d1d */ __asm { IMUL RBX,RAX }
    /* +0xbf7d21 */ __asm { MOVZX R14D,uint8_t ptr [RCX + 0xa] }
    /* +0xbf7d26 */ __asm { CMP R14B,R9B }
    /* +0xbf7d29 */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7d2f */ __asm { MOVZX R12D,uint8_t ptr [RCX + 0xb] }
    /* +0xbf7d34 */ __asm { XOR RBX,R14 }
    /* +0xbf7d37 */ __asm { IMUL RBX,RAX }
    /* +0xbf7d3b */ __asm { MOV R9B,0x55 }
    /* +0xbf7d3e */ __asm { MOV R11,qword ptr [RBP + 0x1038] }
    /* +0xbf7d45 */ __asm { SUB R11B,R9B }
    /* +0xbf7d48 */ __asm { ADD R11B,0xfe }
    /* +0xbf7d4c */ __asm { CMP R12B,R11B }
    /* +0xbf7d4f */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7d55 */ __asm { MOVZX R14D,uint8_t ptr [RCX + 0xc] }
    /* +0xbf7d5a */ __asm { XOR RBX,R12 }
    /* +0xbf7d5d */ __asm { IMUL RBX,RAX }
    /* +0xbf7d61 */ __asm { TEST R14,R14 }
    /* +0xbf7d64 */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7d6a */ __asm { MOVZX R12D,uint8_t ptr [RCX + 0xd] }
    /* +0xbf7d6f */ __asm { XOR RBX,R14 }
    /* +0xbf7d72 */ __asm { MOV R11,0x400000004e9 }
    /* +0xbf7d7c */ __asm { IMUL RBX,R11 }
    /* +0xbf7d80 */ __asm { TEST R12,R12 }
    /* +0xbf7d83 */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7d89 */ __asm { MOVZX R14D,uint8_t ptr [RCX + 0xe] }
    /* +0xbf7d8e */ __asm { XOR RBX,R12 }
    /* +0xbf7d91 */ __asm { IMUL RBX,R11 }
    /* +0xbf7d95 */ __asm { TEST R14,R14 }
    /* +0xbf7d98 */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7d9e */ __asm { XOR RBX,R14 }
    /* +0xbf7da1 */ __asm { IMUL RBX,R11 }
    /* +0xbf7da5 */ __asm { MOVZX R12D,uint8_t ptr [RCX + 0xf] }
    /* +0xbf7daa */ __asm { TEST R12,R12 }
    /* +0xbf7dad */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7db3 */ __asm { XOR RBX,R12 }
    /* +0xbf7db6 */ __asm { IMUL RBX,R11 }
    /* +0xbf7dba */ __asm { MOVZX R10D,uint8_t ptr [RCX + 0x10] }
    /* +0xbf7dbf */ __asm { MOV qword ptr [RBP + 0x50],R10 }
    /* +0xbf7dc3 */ __asm { TEST R10,R10 }
    /* +0xbf7dc6 */ __asm { JZ 0x7fffa5367e46 }
    /* +0xbf7dc8 */ __asm { MOV R9D,0x7803fd56 }
    /* +0xbf7dce */ __asm { MOV R11D,0x4aa943bd }
    /* +0xbf7dd4 */ __asm { XOR R12D,R12D }
    /* +0xbf7dd7 */ __asm { XOR R14D,R14D }
    /* +0xbf7dda */ __asm { CMP uint8_t ptr [RCX + 0x11],0x0 }
    /* +0xbf7dde */ __asm { SETLE R12B }
    /* +0xbf7de2 */ __asm { SETZ R14B }
    /* +0xbf7de6 */ __asm { XOR R9D,0xf880b863 }
    /* +0xbf7ded */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf7df4 */ __asm { ROL R9D,CL }
    /* +0xbf7df7 */ __asm { NOT R9D }
    /* +0xbf7dfa */ __asm { SUB R11D,ECX }
    /* +0xbf7dfd */ __asm { ROL R11D,0x8 }
    /* +0xbf7e01 */ __asm { CMP R9,R11 }
    /* +0xbf7e04 */ __asm { CMOVL R14D,R12D }
    /* +0xbf7e08 */ __asm { TEST R14B,R14B }
    /* +0xbf7e0b */ __asm { MOV R10,qword ptr [RBP + 0x1298] }
    /* +0xbf7e12 */ __asm { MOV R9,qword ptr [RBP + 0x480] }
    /* +0xbf7e19 */ __asm { MOV R14,0x5f73a9e38a7cd53d }
    /* +0xbf7e23 */ __asm { JZ 0x7fffa5367bb7 }
    /* +0xbf7e29 */ __asm { MOV R11,qword ptr [RBP + 0x50] }
    /* +0xbf7e2d */ __asm { XOR R11,RBX }
    /* +0xbf7e30 */ __asm { IMUL R11,RAX }
    /* +0xbf7e34 */ __asm { MOV CL,0x1 }
    /* +0xbf7e36 */ __asm { MOV RBX,R11 }
    /* +0xbf7e39 */ __asm { JMP 0x7fffa5367e60 }
    /* +0xbf7e3b */ __asm { XOR ECX,ECX }
    /* +0xbf7e3d */ __asm { JMP 0x7fffa5367e60 }
    /* +0xbf7e3f */ __asm { XOR ECX,ECX }
    /* +0xbf7e41 */ __asm { MOV RBX,R14 }
    /* +0xbf7e44 */ __asm { JMP 0x7fffa5367e60 }
    /* +0xbf7e46 */ __asm { XOR ECX,ECX }
    /* +0xbf7e48 */ __asm { MOV R10,qword ptr [RBP + 0x1298] }
    /* +0xbf7e4f */ __asm { MOV R9,qword ptr [RBP + 0x480] }
    /* +0xbf7e56 */ __asm { MOV R14,0x5f73a9e38a7cd53d }
    /* +0xbf7e60 */ __asm { LEA R12,[0x7fffa4770000] }
    /* +0xbf7e67 */ __asm { NOP }
    /* +0xbf7e69 */ __asm { MOV R11,0x0 }
    /* +0xbf7e70 */ __asm { TEST R10D,0x100 }
    /* +0xbf7e77 */ __asm { JZ 0x7fffa5367e97 }
    /* +0xbf7e79 */ __asm { MOV R11,0x0 }
    /* +0xbf7e80 */ __asm { NOP }
    /* +0xbf7e82 */ __asm { LEA R12,[0x7fffa4770000] }
    /* +0xbf7e89 */ __asm { ADD EAX,0xc7b6136c }
    /* +0xbf7e8e */ __asm { LOOPZ 0x7fffa5367e3f }
    /* +0xbf7e90 */ __asm { RET }
    /* +0xbf7e97 */ __asm { LEA R12,[0x7fffa4770000] }
    /* +0xbf7e9e */ __asm { NOP }
    /* +0xbf7ea0 */ __asm { MOV R11,0x0 }
    /* +0xbf7ea7 */ __asm { MOV dword ptr [RBP + 0x5e0],0x2bc2f6ea }
    /* +0xbf7eb1 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf7eb8 */ __asm { TEST R11D,R11D }
    /* +0xbf7ebb */ __asm { JNS 0x7fffa5367b9d }
    /* +0xbf7f03 */ __asm { MOV dword ptr [RBP + 0x5e0],0x88180131 }
    /* +0xbf7f0d */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xbf7f14 */ __asm { TEST R11D,R11D }
    /* +0xbf7f17 */ __asm { NOP }
    /* +0xbf7f18 */ __asm { NOP }
    /* +0xbf7f19 */ __asm { NOP }
    /* +0xbf7f1a */ __asm { NOP }
    /* +0xbf7f1b */ __asm { NOP }
    /* +0xbf7f1c */ __asm { ADD RDX,R15 }
    /* +0xbf7f1f */ __asm { TEST dword ptr [RBP + 0x1298],0x100 }
    /* +0xbf7f29 */ __asm { NOP }
    /* +0xbf7f2a */ __asm { NOP }
    /* +0xbf7f2b */ __asm { NOP }
    /* +0xbf7f2c */ __asm { NOP }
    /* +0xbf7f2d */ __asm { NOP }
    /* +0xbf7f2e */ __asm { NOP }
    /* +0xbf7f2f */ __asm { NOP }
    /* +0xbf7f30 */ __asm { NOP }
    /* +0xbf7f31 */ __asm { NOP }
    /* +0xbf7f32 */ __asm { NOP }
    /* +0xbf7f33 */ __asm { NOP }
    /* +0xbf7f34 */ __asm { NOP }
    /* +0xbf7f35 */ __asm { NOP }
    /* +0xbf7f36 */ __asm { NOP }
    /* +0xbf7f37 */ __asm { NOP }
    /* +0xbf7f38 */ __asm { NOP }
    /* +0xbf7f39 */ __asm { NOP }
    /* +0xbf7f45 */ __asm { NOP }
    /* +0xbf7f47 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xbf7f4e */ __asm { MOV R8,0x0 }
    /* +0xbf7f55 */ __asm { MOV R11D,0x3c544d00 }
    /* +0xbf7f5b */ __asm { XOR R11D,0x7a3cc8eb }
    /* +0xbf7f62 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf7f69 */ __asm { SUB R11D,ECX }
    /* +0xbf7f6c */ __asm { MOVSXD R8,R11D }
    /* +0xbf7f6f */ __asm { MOV R11D,0xcfb73c5c }
    /* +0xbf7f75 */ __asm { ADD R11D,0x927e6f37 }
    /* +0xbf7f7c */ __asm { LEA RDX,[0x7fffa47c9544] }
    /* +0xbf7f83 */ __asm { MOVZX R9D,uint8_t ptr [RDX + R8*0x1 + 0x6] }
    /* +0xbf7f89 */ __asm { INC R9B }
    /* +0xbf7f8c */ __asm { MOV R10D,0x42a1c34e }
    /* +0xbf7f92 */ __asm { IMUL R10D,dword ptr [RBP + 0x3b0] }
    /* +0xbf7f9a */ __asm { ROL R11D,CL }
    /* +0xbf7f9d */ __asm { AND R9B,0x7 }
    /* +0xbf7fa1 */ __asm { MOV uint8_t ptr [RBP + 0x1298],R9B }
    /* +0xbf7fa8 */ __asm { IMUL ECX,R11D,-0x2be8c547 }
    /* +0xbf7faf */ __asm { MOV R15,qword ptr [RBP + 0x590] }
    /* +0xbf7fb6 */ __asm { MOV R11,R15 }
    /* +0xbf7fb9 */ __asm { SHR R11,0x28 }
    /* +0xbf7fbd */ __asm { MOV qword ptr [RBP + 0x1b0],R11 }
    /* +0xbf7fc4 */ __asm { MOV R11,R15 }
    /* +0xbf7fc7 */ __asm { SHR R11,0x30 }
    /* +0xbf7fcb */ __asm { MOV qword ptr [RBP + 0x50],R11 }
    /* +0xbf7fcf */ __asm { MOV EAX,R15D }
    /* +0xbf7fd2 */ __asm { SHR EAX,0x18 }
    /* +0xbf7fd5 */ __asm { MOV R11D,R15D }
    /* +0xbf7fd8 */ __asm { ROL AL,0x3 }
    /* +0xbf7fdb */ __asm { MOV dword ptr [RBP + 0x1350],EAX }
    /* +0xbf7fe1 */ __asm { SHR R11D,0x8 }
    /* +0xbf7fe5 */ __asm { ROL R11B,0x3 }
    /* +0xbf7fe9 */ __asm { MOV dword ptr [RBP + 0x480],R11D }
    /* +0xbf7ff0 */ __asm { MOV R9D,R15D }
    /* +0xbf7ff3 */ __asm { ROL R9B,0x3 }
    /* +0xbf7ff7 */ __asm { MOV uint8_t ptr [RBP + 0x11d8],R9B }
    /* +0xbf7ffe */ __asm { SHR R15,0x38 }
    /* +0xbf8002 */ __asm { ROL R10D,0x15 }
    /* +0xbf8006 */ __asm { CMP R10,RCX }
    /* +0xbf8009 */ __asm { JG 0x7fffa53680b0 }
    /* +0xbf800f */ __asm { LEA RDX,[0x7fffa47c5941] }
    /* +0xbf8016 */ __asm { LEA RAX,[0x7fffa47bd940] }
    /* +0xbf801d */ __asm { MOV R10D,0xbc27bad5 }
    /* +0xbf8023 */ __asm { XOR R10D,0x71950d87 }
    /* +0xbf802a */ __asm { ROL R10D,0x5 }
    /* +0xbf802e */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf8035 */ __asm { XOR R10D,ECX }
    /* +0xbf8038 */ __asm { MOV R11W,0xca11 }
    /* +0xbf803d */ __asm { IMUL R14D,R11D,-0x387b }
    /* +0xbf8044 */ __asm { ROL R14W,CL }
    /* +0xbf8048 */ __asm { MOVSX R11,R14W }
    /* +0xbf804c */ __asm { ADD R11,RAX }
    /* +0xbf804f */ __asm { MOVZX EAX,uint8_t ptr [RBP + 0x1298] }
    /* +0xbf8056 */ __asm { LEA R12,[0x7fffa47c8d92] }
    /* +0xbf805d */ __asm { MOV R14D,0x6953c1a0 }
    /* +0xbf8063 */ __asm { IMUL R14D,R14D,-0x71a47d6d }
    /* +0xbf806a */ __asm { SUB R14D,ECX }
    /* +0xbf806d */ __asm { IMUL R14D,R14D,0x4204c91f }
    /* +0xbf8074 */ __asm { MOVSXD R13,R14D }
    /* +0xbf8077 */ __asm { MOVZX R9D,uint8_t ptr [RDX + R13*0x1 + 0x61] }
    /* +0xbf807d */ __asm { MOV uint8_t ptr [RBP + 0xd0],R9B }
    /* +0xbf8084 */ __asm { MOV EDX,0xc53f5afc }
    /* +0xbf8089 */ __asm { SUB EDX,ECX }
    /* +0xbf808b */ __asm { ROL EDX,0xd }
    /* +0xbf808e */ __asm { LEA RBX,[R11 + RAX*0x8] }
    /* +0xbf8092 */ __asm { ADD RBX,0x12 }
    /* +0xbf8096 */ __asm { IMUL EAX,EDX,0x6bd73d4f }
    /* +0xbf809c */ __asm { MOVSXD RCX,EAX }
    /* +0xbf809f */ __asm { MOVZX ECX,uint8_t ptr [R12 + RCX*0x1 + 0x63] }
    /* +0xbf80a5 */ __asm { MOV uint8_t ptr [RBP + 0x3b0],CL }
    /* +0xbf80ab */ __asm { JMP 0x7fffa5368150 }
    /* +0xbf80b0 */ __asm { MOV EAX,0x49157074 }
    /* +0xbf80b5 */ __asm { MOV R10D,0xbc38aa47 }
    /* +0xbf80bb */ __asm { LEA RDX,[0x7fffa47c8406] }
    /* +0xbf80c2 */ __asm { MOV ECX,0xdef7769a }
    /* +0xbf80c7 */ __asm { ADD ECX,0x421adf79 }
    /* +0xbf80cd */ __asm { IMUL ECX,dword ptr [RBP + 0x3b0] }
    /* +0xbf80d4 */ __asm { ADD ECX,0x7b86cd6 }
    /* +0xbf80da */ __asm { LEA RBX,[0x7fffa47ca18d] }
    /* +0xbf80e1 */ __asm { IMUL EAX,EAX,0x5a5891d }
    /* +0xbf80e7 */ __asm { ADD EAX,0x809f6eae }
    /* +0xbf80ec */ __asm { MOVSXD R12,ECX }
    /* +0xbf80ef */ __asm { ADD R12,RBX }
    /* +0xbf80f2 */ __asm { MOVZX R13D,uint8_t ptr [RBP + 0x1298] }
    /* +0xbf80fa */ __asm { LEA RBX,[R12 + R13*0x8] }
    /* +0xbf80fe */ __asm { ADD RBX,0x12 }
    /* +0xbf8102 */ __asm { MOVSXD RCX,EAX }
    /* +0xbf8105 */ __asm { MOVZX ECX,uint8_t ptr [RDX + RCX*0x1 + 0x63] }
    /* +0xbf810a */ __asm { MOV uint8_t ptr [RBP + 0x3b0],CL }
    /* +0xbf8110 */ __asm { LEA RDX,[0x7fffa47caf77] }
    /* +0xbf8117 */ __asm { XOR R10D,0x80000004 }
    /* +0xbf811e */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xbf8125 */ __asm { ROR R10D,CL }
    /* +0xbf8128 */ __asm { ADD R10D,0x8eaa8de9 }
    /* +0xbf812f */ __asm { MOVSXD R8,R10D }
    /* +0xbf8132 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R8*0x1 + 0x61] }
    /* +0xbf8138 */ __asm { MOV uint8_t ptr [RBP + 0xd0],R10B }
    /* +0xbf813f */ __asm { MOV R8D,0xc115c5ae }
    /* +0xbf8145 */ __asm { LEA R10D,[RCX + R8*0x1] }
    /* +0xbf8149 */ __asm { ADD R10D,0x7bbd3b46 }
    /* +0xbf8150 */ __asm { LEA R11,[0x7fffa47c8cea] }
    /* +0xbf8157 */ __asm { MOV qword ptr [RBP + 0x5d8],R11 }
    /* +0xbf815e */ __asm { LEA R11,[0x7fffa47c2d93] }
    /* +0xbf8165 */ __asm { MOV qword ptr [RBP + 0x12e0],R11 }
    /* +0xbf816c */ __asm { MOV R14W,0xabc4 }
    /* +0xbf8171 */ __asm { LEA R11,[0x7fffa47c23e9] }
    /* +0xbf8178 */ __asm { MOV qword ptr [RBP + 0x580],R11 }
    /* +0xbf817f */ __asm { MOV EAX,0x6c3a3dd2 }
    /* +0xbf8184 */ __asm { LEA R13,[0x7fffa47ca624] }
    /* +0xbf818b */ __asm { MOV SI,0x54b5 }
    /* +0xbf818f */ __asm { LEA R11,[0x7fffa47c584f] }
    /* +0xbf8196 */ __asm { MOV qword ptr [RBP + 0xe8],R11 }
    /* +0xbf819d */ __asm { LEA R11,[0x7fffa47bd6d2] }
    /* +0xbf81a4 */ __asm { MOV qword ptr [RBP + 0x1048],R11 }
    /* +0xbf81ab */ __asm { MOV R12D,0xe7f14678 }
    /* +0xbf81b1 */ __asm { MOV EDX,0x161f6131 }
    /* +0xbf81b6 */ __asm { ADD EDX,0xe7f5bece }
    /* +0xbf81bc */ __asm { MOV ECX,R10D }
    /* +0xbf81bf */ __asm { ROL EDX,CL }
    /* +0xbf81c1 */ __asm { MOV R8,qword ptr [RBP + 0x1038] }
    /* +0xbf81c8 */ __asm { MOV ECX,R8D }
    /* +0xbf81cb */ __asm { ROR EDX,CL }
    /* +0xbf81cd */ __asm { ROL R15B,0x3 }
    /* +0xbf81d1 */ __asm { MOVSXD RCX,EDX }
    /* +0xbf81d4 */ __asm { MOV DX,0x5e4a }
    /* +0xbf81d8 */ __asm { MOV R11D,0xbebe8fc0 }
    /* +0xbf81de */ __asm { LEA R9,[0x7fffa47cb949] }
    /* +0xbf81e5 */ __asm { XOR R15B,uint8_t ptr [R9 + RCX*0x1 + 0x68] }
    /* +0xbf81ea */ __asm { XOR R11D,0xc0000420 }
    /* +0xbf81f1 */ __asm { MOV ECX,R8D }
    /* +0xbf81f4 */ __asm { ROL R11D,CL }
    /* +0xbf81f7 */ __asm { MOV RDI,qword ptr [RBP + 0x50] }
    /* +0xbf81fb */ __asm { ROL DIL,0x3 }
    /* +0xbf81ff */ __asm { XOR R11D,R10D }
    /* +0xbf8202 */ __asm { NOT R11D }
    /* +0xbf8205 */ __asm { MOVSXD RCX,R11D }
    /* +0xbf8208 */ __asm { XOR DIL,uint8_t ptr [R13 + RCX*0x1 + 0x67] }
    /* +0xbf820d */ __asm { ADD ESI,R10D }
    /* +0xbf8210 */ __asm { MOV ECX,0xffffb1b2 }
    /* +0xbf8215 */ __asm { SUB ECX,ESI }
    /* +0xbf8217 */ __asm { MOVSX RCX,CX }
    /* +0xbf821b */ __asm { MOV R9D,dword ptr [RBP + 0x1350] }
    /* +0xbf8222 */ __asm { MOV R11,qword ptr [RBP + 0x580] }
    /* +0xbf8229 */ __asm { XOR R9B,uint8_t ptr [R11 + RCX*0x1 + 0x64] }
    /* +0xbf822e */ __asm { XOR R12D,0x17cfb584 }
    /* +0xbf8235 */ __asm { SUB R12D,R10D }
    /* +0xbf8238 */ __asm { MOVSXD RCX,R12D }
    /* +0xbf823b */ __asm { MOV R12D,dword ptr [RBP + 0x480] }
    /* +0xbf8242 */ __asm { MOV R11,qword ptr [RBP + 0x5d8] }
    /* +0xbf8249 */ __asm { XOR R12B,uint8_t ptr [R11 + RCX*0x1 + 0x62] }
    /* +0xbf824e */ __asm { MOV R11D,R10D }
    /* +0xbf8251 */ __asm { SUB R11D,R8D }
    /* +0xbf8254 */ __asm { ADD R14D,R11D }
    /* +0xbf8257 */ __asm { NOT R9B }
    /* +0xbf825a */ __asm { MOV uint8_t ptr [RBX + 0x3],R9B }
    /* +0xbf825e */ __asm { IMUL ECX,EDX,-0x4843 }
    /* +0xbf8264 */ __asm { SUB ECX,R8D }
    /* +0xbf8267 */ __asm { XOR ECX,R10D }
    /* +0xbf826a */ __asm { MOVSX RCX,CX }
    /* +0xbf826e */ __asm { MOV R11,qword ptr [RBP + 0x12e0] }
    /* +0xbf8275 */ __asm { MOVZX R11D,uint8_t ptr [R11 + RCX*0x1 + 0x66] }
    /* +0xbf827b */ __asm { MOVZX ECX,uint8_t ptr [RBP + 0x11d8] }
    /* +0xbf8282 */ __asm { XOR CL,uint8_t ptr [RBP + 0xd0] }
    /* +0xbf8288 */ __asm { NOT CL }
    /* +0xbf828a */ __asm { MOV uint8_t ptr [RBX],CL }
    /* +0xbf828c */ __asm { MOV RDX,qword ptr [RBP + 0x590] }
    /* +0xbf8293 */ __asm { MOV RCX,RDX }
    /* +0xbf8296 */ __asm { SHR RCX,0x20 }
    /* +0xbf829a */ __asm { ROL CL,0x3 }
    /* +0xbf829d */ __asm { XOR R14D,0x7fab }
    /* +0xbf82a4 */ __asm { ROL R14W,0x4 }
    /* +0xbf82a9 */ __asm { MOVSX R9,R14W }
    /* +0xbf82ad */ __asm { MOV R14,qword ptr [RBP + 0x1048] }
    /* +0xbf82b4 */ __asm { XOR CL,uint8_t ptr [R14 + R9*0x1 + 0x65] }
    /* +0xbf82b9 */ __asm { MOV R9,qword ptr [RBP + 0x1b0] }
    /* +0xbf82c0 */ __asm { ROL R9B,0x3 }
    /* +0xbf82c4 */ __asm { MOVZX R9D,R9B }
    /* +0xbf82c8 */ __asm { MOVD XMM0,R9D }
    /* +0xbf82cd */ __asm { ADD EAX,R10D }
    /* +0xbf82d0 */ __asm { IMUL R10D,EAX,0x2fda73c1 }
    /* +0xbf82d7 */ __asm { SUB R10D,R8D }
    /* +0xbf82da */ __asm { MOVD XMM2,R11D }
    /* +0xbf82df */ __asm { NOT R15B }
    /* +0xbf82e2 */ __asm { MOV uint8_t ptr [RBX + 0x7],R15B }
    /* +0xbf82e6 */ __asm { NOT DIL }
    /* +0xbf82e9 */ __asm { MOV uint8_t ptr [RBX + 0x6],DIL }
    /* +0xbf82ed */ __asm { NOT CL }
    /* +0xbf82ef */ __asm { MOV uint8_t ptr [RBX + 0x4],CL }
    /* +0xbf82f2 */ __asm { PXOR XMM2,XMM0 }
    /* +0xbf82f6 */ __asm { NOT R12B }
    /* +0xbf82f9 */ __asm { MOV uint8_t ptr [RBX + 0x1],R12B }
    /* +0xbf82fd */ __asm { MOVD R11D,XMM2 }
    /* +0xbf8302 */ __asm { NOT R11B }
    /* +0xbf8305 */ __asm { MOV uint8_t ptr [RBX + 0x5],R11B }
    /* +0xbf8309 */ __asm { MOV R11D,EDX }
    /* +0xbf830c */ __asm { SHR R11D,0x10 }
    /* +0xbf8310 */ __asm { ROL R11B,0x3 }
    /* +0xbf8314 */ __asm { XOR R11B,uint8_t ptr [RBP + 0x3b0] }
    /* +0xbf831b */ __asm { NOT R11B }
    /* +0xbf831e */ __asm { MOV uint8_t ptr [RBX + 0x2],R11B }
    /* +0xbf8322 */ __asm { MOVSXD R8,R10D }
    /* +0xbf8325 */ __asm { MOVZX ECX,uint8_t ptr [RBP + 0x1298] }
    /* +0xbf832c */ __asm { MOV R11,qword ptr [RBP + 0xe8] }
    /* +0xbf8333 */ __asm { MOV uint8_t ptr [R11 + R8*0x1 + 0x6],CL }
    /* +0xbf8338 */ __asm { XOR EDX,EDX }
    /* +0xbf833a */ __asm { MOV RCX,qword ptr [RBP + 0x5b0] }
    /* +0xbf8341 */ __asm { CALL qword ptr [RBP + 0x590] }
    /* +0xbf8347 */ __asm { NOP }
    /* +0xbf8348 */ __asm { JMP 0x7fffa52ebf26 }
}


// ============================================================================
// Function : FUN_7fffa53736c2  |  RVA: 0xc036c2  |  Size: 86 bytes
// Callers  : FUN_7fffa5395888@0xc25888
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa53736c2(void) {
    /* +0xc036c2 */ __asm { MOV R8D,0x1a9e04a5 }
    /* +0xc036c8 */ __asm { MOV R11,-0x40f752b692d11d26 }
    /* +0xc036d2 */ __asm { MOV RDX,qword ptr [RBP + 0x368] }
    /* +0xc036d9 */ __asm { ADD RDX,R11 }
    /* +0xc036dc */ __asm { MOV R9,qword ptr [RBP + 0x1038] }
    /* +0xc036e3 */ __asm { XOR R9,RDX }
    /* +0xc036e6 */ __asm { MOV RCX,qword ptr [RBP + 0x3b0] }
    /* +0xc036ed */ __asm { ROR R9,CL }
    /* +0xc036f0 */ __asm { NOT R9 }
    /* +0xc036f3 */ __asm { MOV R11,qword ptr [RBP + 0x480] }
    /* +0xc036fa */ __asm { ADD R11,R9 }
    /* +0xc036fd */ __asm { ADD R11,-0x529b15b8 }
    /* +0xc03704 */ __asm { CMP R8,R11 }
    /* +0xc03707 */ __asm { NOP }
    /* +0xc03708 */ __asm { NOP }
    /* +0xc03709 */ __asm { NOP }
    /* +0xc0370a */ __asm { NOP }
    /* +0xc0370b */ __asm { NOP }
    /* +0xc0370c */ __asm { NOP }
    /* +0xc0370d */ __asm { NOP }
    /* +0xc0370e */ __asm { NOP }
    /* +0xc0370f */ __asm { NOP }
    /* +0xc03710 */ __asm { NOP }
    /* +0xc03711 */ __asm { NOP }
    /* +0xc03712 */ __asm { NOP }
    /* +0xc03713 */ __asm { NOP }
    /* +0xc03714 */ __asm { NOP }
    /* +0xc03715 */ __asm { NOP }
    /* +0xc03716 */ __asm { NOP }
    /* +0xc03717 */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa5375ea0  |  RVA: 0xc05ea0  |  Size: 141 bytes
// Callers  : none
// Callees  : FUN_7fffa5377657@0xc07657
// ============================================================================
void FUN_7fffa5375ea0(void)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint64_t in_RAX;
  uint16_t uVar3;
  int64_t unaff_RBP;
  uint32_t uVar4;
  int unaff_R14D;
  uint32_t uStack0000000000000028;
  int64_t lStack0000000000000030;
  
  uVar4 = (uint32_t)*(uint64_t *)(unaff_RBP + 0x480);
  uVar2 = (int)CONCAT62((int6)((uint64_t)in_RAX >> 0x10),0x578d) + 0xe94U ^ uVar4;
  uVar3 = (short)*(uint64_t *)(unaff_RBP + 0x1298) + 0xb90a;
  bVar1 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1038) & 0xf;
  *(uint64_t *)(unaff_RBP + 0x120) = (uint64_t)uVar2;
  lStack0000000000000030 = unaff_RBP + 0xf68;
  uStack0000000000000028 = uVar2 & 0xffff;
  FUN_7fffa5377657((short)uVar2,
                   ((uint32_t)(uint16_t)(uVar3 >> bVar1 | uVar3 << 0x10 - bVar1) * 0x3c19 ^ uVar4) &
                   0xffff,unaff_R14D * -0xcaf +
                          ((int)*(uint64_t *)(unaff_RBP + 0x1298) -
                          (int)*(uint64_t *)(unaff_RBP + 0x1038)) & 0xffff);
  return;
}


// ============================================================================
// Function : FUN_7fffa53770b4  |  RVA: 0xc070b4  |  Size: 6660 bytes
// Callers  : none
// Callees  : FUN_7fffa5395888@0xc25888
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa53770b4(void) {
    /* +0xc070b4 */ __asm { MOV R10D,0xf224dbea }
    /* +0xc070ba */ __asm { SUB R10D,dword ptr [RBP + 0x1038] }
    /* +0xc070c1 */ __asm { XOR R10D,0x7a55e36e }
    /* +0xc070c8 */ __asm { MOVZX R9D,uint8_t ptr [R8 + -0x69f6] }
    /* +0xc070d0 */ __asm { MOVZX ECX,uint8_t ptr [R8 + R9*0x4 + -0x69e6] }
    /* +0xc070d9 */ __asm { ROL CL,0x4 }
    /* +0xc070dc */ __asm { MOV uint8_t ptr [RBP + 0x120],CL }
    /* +0xc070e2 */ __asm { MOVZX ECX,uint8_t ptr [R8 + R9*0x4 + -0x69e5] }
    /* +0xc070eb */ __asm { ROL CL,0x4 }
    /* +0xc070ee */ __asm { MOV uint8_t ptr [RBP + 0x121],CL }
    /* +0xc070f4 */ __asm { MOVZX ECX,uint8_t ptr [R8 + R9*0x4 + -0x69e4] }
    /* +0xc070fd */ __asm { ROL CL,0x4 }
    /* +0xc07100 */ __asm { MOV uint8_t ptr [RBP + 0x122],CL }
    /* +0xc07106 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xc0710d */ __asm { ROL R10D,CL }
    /* +0xc07110 */ __asm { MOVZX ECX,uint8_t ptr [R8 + R9*0x4 + -0x69e3] }
    /* +0xc07119 */ __asm { ADD R10D,0x3fffffde }
    /* +0xc07120 */ __asm { ROL CL,0x4 }
    /* +0xc07123 */ __asm { IMUL R10D,dword ptr [RBP + 0x11d8] }
    /* +0xc0712b */ __asm { MOV uint8_t ptr [RBP + 0x123],CL }
    /* +0xc07131 */ __asm { MOV R11D,0x65e8ce72 }
    /* +0xc07137 */ __asm { XOR R11D,dword ptr [RBP + 0x120] }
    /* +0xc0713e */ __asm { MOV R10D,dword ptr [R10] }
    /* +0xc07141 */ __asm { BT R11D,R10D }
    /* +0xc07145 */ __asm { JC 0x7fffa5383031 }
    /* +0xc0714b */ __asm { LEA R8,[0x7fffa47bcef5] }
    /* +0xc07152 */ __asm { MOV R11,R8 }
    /* +0xc07155 */ __asm { XOR R11,0x4380a29f }
    /* +0xc0715c */ __asm { MOV RDX,-0x7a7d2e79f84c25cc }
    /* +0xc07166 */ __asm { CMP R11,RDX }
    /* +0xc07169 */ __asm { NOP }
    /* +0xc0716a */ __asm { NOP }
    /* +0xc0716b */ __asm { NOP }
    /* +0xc0716c */ __asm { NOP }
    /* +0xc0716d */ __asm { NOP }
    /* +0xc0716e */ __asm { NOP }
    /* +0xc0716f */ __asm { NOP }
    /* +0xc07170 */ __asm { MOV R11D,0xcddcc384 }
    /* +0xc07176 */ __asm { MOV AX,0x4647 }
    /* +0xc0717a */ __asm { MOV R10W,0xaab0 }
    /* +0xc0717f */ __asm { MOV RDX,qword ptr [RBP + 0x1298] }
    /* +0xc07186 */ __asm { MOV ECX,EDX }
    /* +0xc07188 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xc0718f */ __asm { SUB ECX,EDI }
    /* +0xc07191 */ __asm { MOV R9W,0x124f }
    /* +0xc07196 */ __asm { XOR R9D,0x4518 }
    /* +0xc0719d */ __asm { ADD R9D,ECX }
    /* +0xc071a0 */ __asm { IMUL R10D,dword ptr [RBP + 0x1348] }
    /* +0xc071a8 */ __asm { NOT R10D }
    /* +0xc071ab */ __asm { MOV qword ptr [RBP + 0x120],RCX }
    /* +0xc071b2 */ __asm { MOV RDX,qword ptr [RBP + 0x590] }
    /* +0xc071b9 */ __asm { IMUL EDX,EAX }
    /* +0xc071bc */ __asm { ROL DX,0x3 }
    /* +0xc071c0 */ __asm { IMUL EDX,dword ptr [RBP + 0x188] }
    /* +0xc071c7 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xc071ce */ __asm { ROR DX,CL }
    /* +0xc071d1 */ __asm { MOV EAX,dword ptr [R8 + 0xc7] }
    /* +0xc071d8 */ __asm { MOVZX R15D,DX }
    /* +0xc071dc */ __asm { ROL R10W,0xe }
    /* +0xc071e1 */ __asm { NOT R10D }
    /* +0xc071e4 */ __asm { MOVZX EDX,R10W }
    /* +0xc071e8 */ __asm { MOVZX R8D,R9W }
    /* +0xc071ec */ __asm { ADD R11D,0x975b2c02 }
    /* +0xc071f3 */ __asm { MOV ECX,EDI }
    /* +0xc071f5 */ __asm { ROL R11D,CL }
    /* +0xc071f8 */ __asm { ROL R11D,0x2 }
    /* +0xc071fc */ __asm { XOR R14D,R11D }
    /* +0xc071ff */ __asm { NOT R14D }
    /* +0xc07202 */ __asm { LEA R11,[RBP + 0xf68] }
    /* +0xc07209 */ __asm { MOV qword ptr [RSP + 0x30],R11 }
    /* +0xc0720e */ __asm { MOV dword ptr [RSP + 0x28],R15D }
    /* +0xc07213 */ __asm { JMP 0x7fffa53828f7 }
    /* +0xc09580 */ __asm { MOVQ R11,XMM0 }
    /* +0xc09585 */ __asm { PSHUFD XMM5,XMM2,0x44 }
    /* +0xc0958a */ __asm { MOVQ RDX,XMM2 }
    /* +0xc0958f */ __asm { ADD RDX,R11 }
    /* +0xc09592 */ __asm { PSHUFD XMM1,XMM0,0xee }
    /* +0xc09597 */ __asm { PSHUFD XMM0,XMM0,0x44 }
    /* +0xc0959c */ __asm { PSHUFD XMM2,XMM2,0xee }
    /* +0xc095a1 */ __asm { MOVQ XMM3,RDX }
    /* +0xc095a6 */ __asm { PSHUFD XMM3,XMM3,0x44 }
    /* +0xc095ab */ __asm { MOV ECX,R9D }
    /* +0xc095ae */ __asm { MOV R10,qword ptr [RBP + 0x590] }
    /* +0xc095b5 */ __asm { SHR R10D,0xc }
    /* +0xc095b9 */ __asm { MOVZX R10D,R10W }
    /* +0xc095bd */ __asm { SHL R10,0x2c }
    /* +0xc095c1 */ __asm { OR R10,RCX }
    /* +0xc095c4 */ __asm { MOV R11,R10 }
    /* +0xc095c7 */ __asm { NOT R11 }
    /* +0xc095ca */ __asm { MOV RDX,qword ptr [RBP + 0xc0] }
    /* +0xc095d1 */ __asm { ADD RDX,0x10 }
    /* +0xc095d5 */ __asm { XOR R9D,R9D }
    /* +0xc095d8 */ __asm { MOVDQA XMM4,XMM1 }
    /* +0xc095dc */ __asm { PSRLQ XMM4,0x20 }
    /* +0xc095e1 */ __asm { MOVDQA XMM14,XMM0 }
    /* +0xc095e6 */ __asm { PSRLQ XMM14,0x20 }
    /* +0xc095ec */ __asm { PCMPEQD XMM12,XMM12 }
    /* +0xc095f1 */ __asm { MOV R8,-0x2000000000 }
    /* +0xc095fb */ __asm { MOV EAX,0x946a60c4 }
    /* +0xc09600 */ __asm { MOV R15D,0x6a15cc46 }
    /* +0xc09606 */ __asm { ADD R15D,0x1db86f93 }
    /* +0xc0960d */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc09614 */ __asm { ROR R15D,CL }
    /* +0xc09617 */ __asm { MOVDQA XMM13,xmmword ptr [RDX + -0x10] }
    /* +0xc0961d */ __asm { MOVDQA XMM11,XMM13 }
    /* +0xc09622 */ __asm { PSUBQ XMM11,XMM0 }
    /* +0xc09627 */ __asm { ADD EAX,0xad0bb725 }
    /* +0xc0962c */ __asm { XOR EAX,dword ptr [RBP + 0x1298] }
    /* +0xc09632 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xc09639 */ __asm { ROL EAX,CL }
    /* +0xc0963b */ __asm { MOVDQA XMM15,XMM13 }
    /* +0xc09640 */ __asm { PSRLQ XMM15,0xe }
    /* +0xc09646 */ __asm { NOT EAX }
    /* +0xc09648 */ __asm { CDQE }
    /* +0xc0964a */ __asm { NOT R15D }
    /* +0xc0964d */ __asm { ROL R15D,0x10 }
    /* +0xc09651 */ __asm { NOT R15D }
    /* +0xc09654 */ __asm { MOVSXD RCX,R15D }
    /* +0xc09657 */ __asm { MOVDQA XMM8,XMM11 }
    /* +0xc0965c */ __asm { PMULUDQ XMM8,XMM4 }
    /* +0xc09661 */ __asm { MOVDQA XMM9,XMM11 }
    /* +0xc09666 */ __asm { PSRLQ XMM9,0x20 }
    /* +0xc0966c */ __asm { PMULUDQ XMM9,XMM1 }
    /* +0xc09671 */ __asm { PADDQ XMM9,XMM8 }
    /* +0xc09676 */ __asm { PSLLQ XMM9,0x20 }
    /* +0xc0967c */ __asm { PMULUDQ XMM11,XMM1 }
    /* +0xc09681 */ __asm { PADDQ XMM11,XMM9 }
    /* +0xc09686 */ __asm { PSUBQ XMM11,XMM15 }
    /* +0xc0968b */ __asm { PXOR XMM11,xmmword ptr [RDX] }
    /* +0xc09690 */ __asm { MOVDQA XMM15,XMM11 }
    /* +0xc09695 */ __asm { PSUBQ XMM15,XMM5 }
    /* +0xc0969a */ __asm { MOVDQA XMM8,XMM15 }
    /* +0xc0969f */ __asm { PSRLQ XMM8,0xd }
    /* +0xc096a5 */ __asm { PSLLQ XMM15,0x33 }
    /* +0xc096ab */ __asm { POR XMM15,XMM8 }
    /* +0xc096b0 */ __asm { PSRLQ XMM15,0x20 }
    /* +0xc096b6 */ __asm { PMULUDQ XMM15,XMM0 }
    /* +0xc096bb */ __asm { MOVDQA XMM10,XMM14 }
    /* +0xc096c0 */ __asm { PMULUDQ XMM10,XMM8 }
    /* +0xc096c5 */ __asm { PADDQ XMM10,XMM15 }
    /* +0xc096ca */ __asm { PSLLQ XMM10,0x20 }
    /* +0xc096d0 */ __asm { PMULUDQ XMM8,XMM0 }
    /* +0xc096d5 */ __asm { MOVDQA XMM15,XMM11 }
    /* +0xc096da */ __asm { PSRLQ XMM15,0x4 }
    /* +0xc096e0 */ __asm { MOVDQA XMM9,XMM11 }
    /* +0xc096e5 */ __asm { PSLLQ XMM9,0x3c }
    /* +0xc096eb */ __asm { POR XMM9,XMM15 }
    /* +0xc096f0 */ __asm { PADDQ XMM9,XMM8 }
    /* +0xc096f5 */ __asm { PADDQ XMM9,XMM10 }
    /* +0xc096fa */ __asm { CMP RCX,RAX }
    /* +0xc096fd */ __asm { JGE 0x7fffa5379706 }
    /* +0xc096ff */ __asm { PADDQ XMM9,XMM13 }
    /* +0xc09704 */ __asm { JMP 0x7fffa537970b }
    /* +0xc09706 */ __asm { PXOR XMM9,XMM13 }
    /* +0xc0970b */ __asm { MOVQ XMM13,R10 }
    /* +0xc09710 */ __asm { MOVQ XMM15,R11 }
    /* +0xc09715 */ __asm { PUNPCKLQDQ XMM15,XMM13 }
    /* +0xc0971a */ __asm { MOVDQA XMM8,XMM9 }
    /* +0xc0971f */ __asm { PXOR XMM8,XMM12 }
    /* +0xc09724 */ __asm { MOVDQA XMM13,XMM8 }
    /* +0xc09729 */ __asm { PSRLQ XMM13,0xf }
    /* +0xc0972f */ __asm { PSLLQ XMM8,0x31 }
    /* +0xc09735 */ __asm { POR XMM8,XMM13 }
    /* +0xc0973a */ __asm { PADDQ XMM8,XMM2 }
    /* +0xc0973f */ __asm { MOVDQA XMM13,XMM8 }
    /* +0xc09744 */ __asm { PMULUDQ XMM13,XMM4 }
    /* +0xc09749 */ __asm { MOVDQA XMM10,XMM8 }
    /* +0xc0974e */ __asm { PSRLQ XMM10,0x20 }
    /* +0xc09754 */ __asm { PMULUDQ XMM10,XMM1 }
    /* +0xc09759 */ __asm { PADDQ XMM10,XMM13 }
    /* +0xc0975e */ __asm { PSLLQ XMM10,0x20 }
    /* +0xc09764 */ __asm { PMULUDQ XMM8,XMM1 }
    /* +0xc09769 */ __asm { PADDQ XMM8,XMM10 }
    /* +0xc0976e */ __asm { PXOR XMM8,XMM11 }
    /* +0xc09773 */ __asm { MOVDQA XMM13,XMM8 }
    /* +0xc09778 */ __asm { PSRLQ XMM13,0xd }
    /* +0xc0977e */ __asm { MOVDQA XMM11,XMM8 }
    /* +0xc09783 */ __asm { PSLLQ XMM11,0x33 }
    /* +0xc09789 */ __asm { POR XMM11,XMM13 }
    /* +0xc0978e */ __asm { MOVDQA XMM13,XMM8 }
    /* +0xc09793 */ __asm { PSUBQ XMM13,XMM1 }
    /* +0xc09798 */ __asm { MOVDQA XMM10,XMM13 }
    /* +0xc0979d */ __asm { PSRLQ XMM10,0x1f }
    /* +0xc097a3 */ __asm { PSLLQ XMM13,0x21 }
    /* +0xc097a9 */ __asm { POR XMM13,XMM10 }
    /* +0xc097ae */ __asm { PSRLQ XMM13,0x20 }
    /* +0xc097b4 */ __asm { PMULUDQ XMM13,XMM5 }
    /* +0xc097b9 */ __asm { MOVDQA XMM7,XMM5 }
    /* +0xc097bd */ __asm { PSRLQ XMM7,0x20 }
    /* +0xc097c2 */ __asm { PMULUDQ XMM7,XMM10 }
    /* +0xc097c7 */ __asm { PADDQ XMM7,XMM13 }
    /* +0xc097cc */ __asm { PSLLQ XMM7,0x20 }
    /* +0xc097d1 */ __asm { PMULUDQ XMM10,XMM5 }
    /* +0xc097d6 */ __asm { PADDQ XMM10,XMM7 }
    /* +0xc097db */ __asm { PXOR XMM11,XMM9 }
    /* +0xc097e0 */ __asm { PXOR XMM11,XMM10 }
    /* +0xc097e5 */ __asm { MOVDQA XMM9,XMM1 }
    /* +0xc097ea */ __asm { PSUBQ XMM9,XMM11 }
    /* +0xc097ef */ __asm { MOVDQA XMM13,XMM9 }
    /* +0xc097f4 */ __asm { PSRLQ XMM13,0x15 }
    /* +0xc097fa */ __asm { PSLLQ XMM9,0x2b }
    /* +0xc09800 */ __asm { POR XMM9,XMM13 }
    /* +0xc09805 */ __asm { PSRLQ XMM9,0x20 }
    /* +0xc0980b */ __asm { PMULUDQ XMM9,XMM1 }
    /* +0xc09810 */ __asm { MOVDQA XMM10,XMM4 }
    /* +0xc09815 */ __asm { PMULUDQ XMM10,XMM13 }
    /* +0xc0981a */ __asm { PADDQ XMM10,XMM9 }
    /* +0xc0981f */ __asm { PSLLQ XMM10,0x20 }
    /* +0xc09825 */ __asm { PMULUDQ XMM13,XMM1 }
    /* +0xc0982a */ __asm { PADDQ XMM13,XMM10 }
    /* +0xc0982f */ __asm { MOVDQA XMM9,XMM11 }
    /* +0xc09834 */ __asm { PSRLQ XMM9,0xa }
    /* +0xc0983a */ __asm { MOVDQA XMM10,XMM11 }
    /* +0xc0983f */ __asm { PSLLQ XMM10,0x36 }
    /* +0xc09845 */ __asm { POR XMM10,XMM9 }
    /* +0xc0984a */ __asm { PSUBQ XMM13,XMM10 }
    /* +0xc0984f */ __asm { PXOR XMM13,XMM8 }
    /* +0xc09854 */ __asm { MOVDQA XMM9,XMM5 }
    /* +0xc09859 */ __asm { PXOR XMM9,XMM13 }
    /* +0xc0985e */ __asm { PSRLQ XMM13,0x3 }
    /* +0xc09864 */ __asm { MOVDQA XMM10,XMM9 }
    /* +0xc09869 */ __asm { PSRLQ XMM10,0x3d }
    /* +0xc0986f */ __asm { MOVDQA XMM8,XMM9 }
    /* +0xc09874 */ __asm { PSLLQ XMM8,0x3 }
    /* +0xc0987a */ __asm { POR XMM10,XMM8 }
    /* +0xc0987f */ __asm { MOVDQA XMM7,XMM0 }
    /* +0xc09883 */ __asm { PMULUDQ XMM7,XMM10 }
    /* +0xc09888 */ __asm { PADDQ XMM7,XMM13 }
    /* +0xc0988d */ __asm { PMULUDQ XMM10,XMM14 }
    /* +0xc09892 */ __asm { PSRLQ XMM8,0x20 }
    /* +0xc09898 */ __asm { PMULUDQ XMM8,XMM0 }
    /* +0xc0989d */ __asm { PADDQ XMM8,XMM10 }
    /* +0xc098a2 */ __asm { PSLLQ XMM8,0x20 }
    /* +0xc098a8 */ __asm { PADDQ XMM8,XMM7 }
    /* +0xc098ad */ __asm { PXOR XMM8,XMM11 }
    /* +0xc098b2 */ __asm { MOVDQA XMM13,XMM8 }
    /* +0xc098b7 */ __asm { PSUBQ XMM13,XMM2 }
    /* +0xc098bc */ __asm { PXOR XMM13,XMM9 }
    /* +0xc098c1 */ __asm { MOVDQA XMM11,XMM13 }
    /* +0xc098c6 */ __asm { PSUBQ XMM11,XMM3 }
    /* +0xc098cb */ __asm { PXOR XMM11,XMM15 }
    /* +0xc098d0 */ __asm { PXOR XMM13,XMM15 }
    /* +0xc098d5 */ __asm { MOVDQA xmmword ptr [RDX],XMM13 }
    /* +0xc098da */ __asm { PXOR XMM11,XMM8 }
    /* +0xc098df */ __asm { MOVDQA xmmword ptr [RDX + -0x10],XMM11 }
    /* +0xc098e5 */ __asm { CMP R9,0xfd }
    /* +0xc098ec */ __asm { JA 0x7fffa530aab0 }
    /* +0xc098f2 */ __asm { ADD R9,0x2 }
    /* +0xc098f6 */ __asm { MOV RAX,0x2000000000 }
    /* +0xc09900 */ __asm { ADD R10,RAX }
    /* +0xc09903 */ __asm { ADD R11,R8 }
    /* +0xc09906 */ __asm { ADD RDX,0x20 }
    /* +0xc0990a */ __asm { JMP 0x7fffa53795fb }
    /* +0xc0990f */ __asm { MOV R11,qword ptr [RBP + 0x1b0] }
    /* +0xc09916 */ __asm { ADD R11,-0x3601000 }
    /* +0xc0991d */ __asm { CMP R11,0x1fffff }
    /* +0xc09924 */ __asm { JA 0x7fffa53814d6 }
    /* +0xc0992a */ __asm { PSHUFD XMM5,XMM0,0xee }
    /* +0xc0992f */ __asm { PSHUFD XMM1,XMM2,0x44 }
    /* +0xc09934 */ __asm { MOVQ RDX,XMM2 }
    /* +0xc09939 */ __asm { MOVSXD R11,R9D }
    /* +0xc0993c */ __asm { MOVQ R8,XMM0 }
    /* +0xc09941 */ __asm { ADD R8,RDX }
    /* +0xc09944 */ __asm { MOVQ XMM3,R8 }
    /* +0xc09949 */ __asm { MOV R10D,0xc1163ade }
    /* +0xc0994f */ __asm { ADD R10D,0x3b823a62 }
    /* +0xc09956 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc0995d */ __asm { ROR R10D,CL }
    /* +0xc09960 */ __asm { PSHUFD XMM3,XMM3,0x44 }
    /* +0xc09965 */ __asm { MOV RDI,qword ptr [RBP + 0x1f0] }
    /* +0xc0996c */ __asm { XOR R10D,EDI }
    /* +0xc0996f */ __asm { MOV RDX,qword ptr [RBP + 0x1298] }
    /* +0xc09976 */ __asm { ADD R10D,EDX }
    /* +0xc09979 */ __asm { MOV EAX,0xb5459541 }
    /* +0xc0997e */ __asm { IMUL EAX,EAX,-0x41f1cbb7 }
    /* +0xc09984 */ __asm { XOR EAX,EDX }
    /* +0xc09986 */ __asm { ROR EAX,CL }
    /* +0xc09988 */ __asm { MOV R9D,R9D }
    /* +0xc0998b */ __asm { ADD EAX,EDI }
    /* +0xc0998d */ __asm { MOVSXD RDX,EAX }
    /* +0xc09990 */ __asm { CMP RDX,R10 }
    /* +0xc09993 */ __asm { CMOVBE R9,R11 }
    /* +0xc09997 */ __asm { PSHUFD XMM2,XMM2,0xee }
    /* +0xc0999c */ __asm { PSHUFD XMM0,XMM0,0x44 }
    /* +0xc099a1 */ __asm { MOV R10,qword ptr [RBP + 0x1b0] }
    /* +0xc099a8 */ __asm { SHR R10D,0xc }
    /* +0xc099ac */ __asm { MOVZX R10D,R10W }
    /* +0xc099b0 */ __asm { SHL R10,0x2c }
    /* +0xc099b4 */ __asm { ADD R10,R9 }
    /* +0xc099b7 */ __asm { MOV R11,R10 }
    /* +0xc099ba */ __asm { NOT R11 }
    /* +0xc099bd */ __asm { MOV RDX,qword ptr [RBP + 0x12e0] }
    /* +0xc099c4 */ __asm { ADD RDX,0x10 }
    /* +0xc099c8 */ __asm { MOV R8,-0x2 }
    /* +0xc099cf */ __asm { MOV EAX,EDI }
    /* +0xc099d1 */ __asm { SUB EAX,ECX }
    /* +0xc099d3 */ __asm { MOVDQA XMM4,XMM2 }
    /* +0xc099d7 */ __asm { PSRLQ XMM4,0x20 }
    /* +0xc099dc */ __asm { MOVDQA XMM14,XMM1 }
    /* +0xc099e1 */ __asm { PSRLQ XMM14,0x20 }
    /* +0xc099e7 */ __asm { PCMPEQD XMM12,XMM12 }
    /* +0xc099ec */ __asm { MOVDQA XMM15,XMM0 }
    /* +0xc099f1 */ __asm { PSRLQ XMM15,0x20 }
    /* +0xc099f7 */ __asm { MOV R9,-0x2000000000 }
    /* +0xc09a01 */ __asm { MOV R13,qword ptr [RBP + 0x1298] }
    /* +0xc09a08 */ __asm { MOV R12,qword ptr [RBP + 0x1038] }
    /* +0xc09a0f */ __asm { JMP 0x7fffa5379a4b }
    /* +0xc09a11 */ __asm { PSUBQ XMM8,XMM3 }
    /* +0xc09a16 */ __asm { PXOR XMM13,XMM8 }
    /* +0xc09a1b */ __asm { PXOR XMM9,XMM13 }
    /* +0xc09a20 */ __asm { MOVDQA xmmword ptr [RDX + -0x10],XMM9 }
    /* +0xc09a26 */ __asm { MOV RCX,0x2000000000 }
    /* +0xc09a30 */ __asm { ADD R10,RCX }
    /* +0xc09a33 */ __asm { ADD R11,R9 }
    /* +0xc09a36 */ __asm { ADD RDX,0x20 }
    /* +0xc09a3a */ __asm { ADD R8,0x2 }
    /* +0xc09a3e */ __asm { CMP R8,0xfe }
    /* +0xc09a45 */ __asm { JNC 0x7fffa532688e }
    /* +0xc09a4b */ __asm { MOV ECX,0x82396537 }
    /* +0xc09a50 */ __asm { IMUL R14D,ECX,-0x4b26e5f1 }
    /* +0xc09a57 */ __asm { ADD R14D,EAX }
    /* +0xc09a5a */ __asm { MOV ECX,R13D }
    /* +0xc09a5d */ __asm { ROR R14D,CL }
    /* +0xc09a60 */ __asm { XOR R14D,0x655ff994 }
    /* +0xc09a67 */ __asm { MOV R15D,0xcfee2f40 }
    /* +0xc09a6d */ __asm { MOVSXD RBX,R14D }
    /* +0xc09a70 */ __asm { MOV ESI,0x5573c164 }
    /* +0xc09a75 */ __asm { ADD ESI,R12D }
    /* +0xc09a78 */ __asm { IMUL ESI,dword ptr [RBP + 0xd0] }
    /* +0xc09a7f */ __asm { MOV RCX,qword ptr [RBP + 0x5d8] }
    /* +0xc09a86 */ __asm { ROL ESI,CL }
    /* +0xc09a88 */ __asm { ADD ESI,0x1bdd9375 }
    /* +0xc09a8e */ __asm { MOVDQA XMM13,xmmword ptr [RDX + -0x10] }
    /* +0xc09a94 */ __asm { MOVDQA XMM8,XMM13 }
    /* +0xc09a99 */ __asm { PSUBQ XMM8,XMM1 }
    /* +0xc09a9e */ __asm { MOVDQA XMM11,XMM8 }
    /* +0xc09aa3 */ __asm { PMULUDQ XMM11,XMM4 }
    /* +0xc09aa8 */ __asm { MOVDQA XMM9,XMM8 }
    /* +0xc09aad */ __asm { PSRLQ XMM9,0x20 }
    /* +0xc09ab3 */ __asm { PMULUDQ XMM9,XMM2 }
    /* +0xc09ab8 */ __asm { PADDQ XMM9,XMM11 }
    /* +0xc09abd */ __asm { PSLLQ XMM9,0x20 }
    /* +0xc09ac3 */ __asm { PMULUDQ XMM8,XMM2 }
    /* +0xc09ac8 */ __asm { PADDQ XMM8,XMM9 }
    /* +0xc09acd */ __asm { MOVDQA XMM11,XMM13 }
    /* +0xc09ad2 */ __asm { PSRLQ XMM11,0xe }
    /* +0xc09ad8 */ __asm { MOV EDI,0xac0bc14e }
    /* +0xc09add */ __asm { XOR EDI,0xee70cdf7 }
    /* +0xc09ae3 */ __asm { ROL EDI,0xd }
    /* +0xc09ae6 */ __asm { ROR EDI,CL }
    /* +0xc09ae8 */ __asm { MOV ECX,R13D }
    /* +0xc09aeb */ __asm { ROL EDI,CL }
    /* +0xc09aed */ __asm { PSUBQ XMM8,XMM11 }
    /* +0xc09af2 */ __asm { SUB EDI,R12D }
    /* +0xc09af5 */ __asm { IMUL R15D,dword ptr [RBP + 0xe8] }
    /* +0xc09afd */ __asm { SUB R15D,R13D }
    /* +0xc09b00 */ __asm { ROL R15D,0xb }
    /* +0xc09b04 */ __asm { IMUL R15D,dword ptr [RBP + 0x390] }
    /* +0xc09b0c */ __asm { MOVSXD RCX,R15D }
    /* +0xc09b0f */ __asm { PXOR XMM8,xmmword ptr [RDX] }
    /* +0xc09b14 */ __asm { MOVDQA XMM11,XMM8 }
    /* +0xc09b19 */ __asm { PSUBQ XMM11,XMM0 }
    /* +0xc09b1e */ __asm { MOVDQA XMM10,XMM11 }
    /* +0xc09b23 */ __asm { PSRLQ XMM10,0xd }
    /* +0xc09b29 */ __asm { PSLLQ XMM11,0x33 }
    /* +0xc09b2f */ __asm { POR XMM11,XMM10 }
    /* +0xc09b34 */ __asm { PSRLQ XMM11,0x20 }
    /* +0xc09b3a */ __asm { PMULUDQ XMM11,XMM1 }
    /* +0xc09b3f */ __asm { MOVDQA XMM7,XMM10 }
    /* +0xc09b44 */ __asm { PMULUDQ XMM7,XMM14 }
    /* +0xc09b49 */ __asm { PADDQ XMM7,XMM11 }
    /* +0xc09b4e */ __asm { PSLLQ XMM7,0x20 }
    /* +0xc09b53 */ __asm { PMULUDQ XMM10,XMM1 }
    /* +0xc09b58 */ __asm { MOVDQA XMM11,XMM8 }
    /* +0xc09b5d */ __asm { PSRLQ XMM11,0x4 }
    /* +0xc09b63 */ __asm { MOVDQA XMM9,XMM8 }
    /* +0xc09b68 */ __asm { PSLLQ XMM9,0x3c }
    /* +0xc09b6e */ __asm { POR XMM9,XMM11 }
    /* +0xc09b73 */ __asm { PADDQ XMM9,XMM10 }
    /* +0xc09b78 */ __asm { PADDQ XMM9,XMM7 }
    /* +0xc09b7d */ __asm { PXOR XMM9,XMM13 }
    /* +0xc09b82 */ __asm { MOVDQA XMM11,XMM9 }
    /* +0xc09b87 */ __asm { PXOR XMM11,XMM12 }
    /* +0xc09b8c */ __asm { MOVDQA XMM13,XMM11 }
    /* +0xc09b91 */ __asm { PSRLQ XMM13,0xf }
    /* +0xc09b97 */ __asm { PSLLQ XMM11,0x31 }
    /* +0xc09b9d */ __asm { POR XMM11,XMM13 }
    /* +0xc09ba2 */ __asm { PADDQ XMM11,XMM5 }
    /* +0xc09ba7 */ __asm { MOVDQA XMM13,XMM4 }
    /* +0xc09bac */ __asm { PMULUDQ XMM13,XMM11 }
    /* +0xc09bb1 */ __asm { MOVDQA XMM10,XMM2 }
    /* +0xc09bb6 */ __asm { PMULUDQ XMM10,XMM11 }
    /* +0xc09bbb */ __asm { PSRLQ XMM11,0x20 }
    /* +0xc09bc1 */ __asm { PMULUDQ XMM11,XMM2 }
    /* +0xc09bc6 */ __asm { PADDQ XMM11,XMM13 }
    /* +0xc09bcb */ __asm { PSLLQ XMM11,0x20 }
    /* +0xc09bd1 */ __asm { PADDQ XMM11,XMM10 }
    /* +0xc09bd6 */ __asm { PXOR XMM11,XMM8 }
    /* +0xc09bdb */ __asm { MOVDQA XMM13,XMM11 }
    /* +0xc09be0 */ __asm { PSUBQ XMM13,XMM2 }
    /* +0xc09be5 */ __asm { MOVDQA XMM8,XMM13 }
    /* +0xc09bea */ __asm { PSRLQ XMM8,0x1f }
    /* +0xc09bf0 */ __asm { PSLLQ XMM13,0x21 }
    /* +0xc09bf6 */ __asm { POR XMM13,XMM8 }
    /* +0xc09bfb */ __asm { MOVDQA XMM10,XMM11 }
    /* +0xc09c00 */ __asm { PSRLQ XMM10,0xd }
    /* +0xc09c06 */ __asm { MOVDQA XMM7,XMM11 }
    /* +0xc09c0b */ __asm { PSLLQ XMM7,0x33 }
    /* +0xc09c10 */ __asm { POR XMM7,XMM10 }
    /* +0xc09c15 */ __asm { PSRLQ XMM13,0x20 }
    /* +0xc09c1b */ __asm { PMULUDQ XMM13,XMM0 }
    /* +0xc09c20 */ __asm { MOVDQA XMM10,XMM8 }
    /* +0xc09c25 */ __asm { PMULUDQ XMM10,XMM15 }
    /* +0xc09c2a */ __asm { PADDQ XMM10,XMM13 }
    /* +0xc09c2f */ __asm { PSLLQ XMM10,0x20 }
    /* +0xc09c35 */ __asm { PMULUDQ XMM8,XMM0 }
    /* +0xc09c3a */ __asm { PADDQ XMM8,XMM10 }
    /* +0xc09c3f */ __asm { PXOR XMM8,XMM7 }
    /* +0xc09c44 */ __asm { PXOR XMM8,XMM9 }
    /* +0xc09c49 */ __asm { MOVDQA XMM9,XMM8 }
    /* +0xc09c4e */ __asm { PSRLQ XMM9,0xa }
    /* +0xc09c54 */ __asm { MOVDQA XMM13,XMM8 }
    /* +0xc09c59 */ __asm { PSLLQ XMM13,0x36 }
    /* +0xc09c5f */ __asm { POR XMM13,XMM9 }
    /* +0xc09c64 */ __asm { MOVDQA XMM10,XMM2 }
    /* +0xc09c69 */ __asm { PSUBQ XMM10,XMM8 }
    /* +0xc09c6e */ __asm { MOVDQA XMM9,XMM10 }
    /* +0xc09c73 */ __asm { PSRLQ XMM9,0x15 }
    /* +0xc09c79 */ __asm { PSLLQ XMM10,0x2b }
    /* +0xc09c7f */ __asm { POR XMM10,XMM9 }
    /* +0xc09c84 */ __asm { PSRLQ XMM10,0x20 }
    /* +0xc09c8a */ __asm { PMULUDQ XMM10,XMM2 }
    /* +0xc09c8f */ __asm { MOVDQA XMM7,XMM9 }
    /* +0xc09c94 */ __asm { PMULUDQ XMM7,XMM4 }
    /* +0xc09c98 */ __asm { PADDQ XMM7,XMM10 }
    /* +0xc09c9d */ __asm { PSLLQ XMM7,0x20 }
    /* +0xc09ca2 */ __asm { PMULUDQ XMM9,XMM2 }
    /* +0xc09ca7 */ __asm { PADDQ XMM9,XMM7 }
    /* +0xc09cac */ __asm { CMP RSI,RCX }
    /* +0xc09caf */ __asm { JA 0x7fffa5379cb8 }
    /* +0xc09cb1 */ __asm { PSUBQ XMM9,XMM13 }
    /* +0xc09cb6 */ __asm { JMP 0x7fffa5379cbd }
    /* +0xc09cb8 */ __asm { POR XMM9,XMM13 }
    /* +0xc09cbd */ __asm { MOVQ XMM10,R10 }
    /* +0xc09cc2 */ __asm { MOVQ XMM13,R11 }
    /* +0xc09cc7 */ __asm { PUNPCKLQDQ XMM13,XMM10 }
    /* +0xc09ccc */ __asm { PXOR XMM11,XMM9 }
    /* +0xc09cd1 */ __asm { MOVDQA XMM10,XMM11 }
    /* +0xc09cd6 */ __asm { PXOR XMM10,XMM0 }
    /* +0xc09cdb */ __asm { MOVDQA XMM9,XMM10 }
    /* +0xc09ce0 */ __asm { PSRLQ XMM9,0x3d }
    /* +0xc09ce6 */ __asm { PSLLQ XMM10,0x3 }
    /* +0xc09cec */ __asm { POR XMM9,XMM10 }
    /* +0xc09cf1 */ __asm { MOVDQA XMM7,XMM9 }
    /* +0xc09cf6 */ __asm { PMULUDQ XMM7,XMM1 }
    /* +0xc09cfa */ __asm { PMULUDQ XMM9,XMM14 }
    /* +0xc09cff */ __asm { PSRLQ XMM10,0x20 }
    /* +0xc09d05 */ __asm { PMULUDQ XMM10,XMM1 }
    /* +0xc09d0a */ __asm { PADDQ XMM10,XMM9 }
    /* +0xc09d0f */ __asm { PSLLQ XMM10,0x20 }
    /* +0xc09d15 */ __asm { MOVDQA XMM9,XMM11 }
    /* +0xc09d1a */ __asm { PSRLQ XMM9,0x3 }
    /* +0xc09d20 */ __asm { PADDQ XMM9,XMM7 }
    /* +0xc09d25 */ __asm { PADDQ XMM9,XMM10 }
    /* +0xc09d2a */ __asm { PXOR XMM9,XMM8 }
    /* +0xc09d2f */ __asm { MOVDQA XMM8,XMM9 }
    /* +0xc09d34 */ __asm { PSUBQ XMM8,XMM5 }
    /* +0xc09d39 */ __asm { PXOR XMM8,XMM0 }
    /* +0xc09d3e */ __asm { PXOR XMM8,XMM11 }
    /* +0xc09d43 */ __asm { MOVDQA XMM11,XMM13 }
    /* +0xc09d48 */ __asm { PXOR XMM11,XMM8 }
    /* +0xc09d4d */ __asm { MOVDQA xmmword ptr [RDX],XMM11 }
    /* +0xc09d52 */ __asm { CMP RDI,RBX }
    /* +0xc09d55 */ __asm { JG 0x7fffa5379a11 }
    /* +0xc09d5b */ __asm { POR XMM8,XMM3 }
    /* +0xc09d60 */ __asm { JMP 0x7fffa5379a16 }
    /* +0xc09d65 */ __asm { CMP R10D,0x1 }
    /* +0xc09d69 */ __asm { JZ 0x7fffa5381f6b }
    /* +0xc09d6f */ __asm { MOV R8D,0x11aa3bc9 }
    /* +0xc09d75 */ __asm { MOV R11,-0x4364deb119f5a504 }
    /* +0xc09d7f */ __asm { CMP R8,R11 }
    /* +0xc09d82 */ __asm { NOP }
    /* +0xc09d83 */ __asm { NOP }
    /* +0xc09d84 */ __asm { NOP }
    /* +0xc09d85 */ __asm { NOP }
    /* +0xc09d86 */ __asm { NOP }
    /* +0xc09d87 */ __asm { TEST uint8_t ptr [R8 + 0x6e53c677],0x1 }
    /* +0xc09d8f */ __asm { JNZ 0x7fffa538494d }
    /* +0xc09d95 */ __asm { MOV R11,0x5cb101c9f728fb21 }
    /* +0xc09d9f */ __asm { XOR R11,qword ptr [RBP + 0x1298] }
    /* +0xc09da6 */ __asm { XOR R11,qword ptr [RBP + 0x1038] }
    /* +0xc09dad */ __asm { NOT R11 }
    /* +0xc09db0 */ __asm { IMUL R11,R11,0x1e09bab }
    /* +0xc09db7 */ __asm { LEA R8,[0x7fffa47bc402] }
    /* +0xc09dbe */ __asm { CMP R8,R11 }
    /* +0xc09dc1 */ __asm { NOP }
    /* +0xc09dc2 */ __asm { NOP }
    /* +0xc09dc3 */ __asm { NOP }
    /* +0xc09dc4 */ __asm { NOP }
    /* +0xc09dc5 */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa5377657  |  RVA: 0xc07657  |  Size: 12 bytes
// Callers  : FUN_7fffa5375ea0@0xc05ea0
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5377657(void) {
    /* +0xc07657 */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xc0765e */ __asm { JMP 0x7fffa5377c5e }
}


// ============================================================================
// Function : FUN_7fffa5377bb5  |  RVA: 0xc07bb5  |  Size: 1729 bytes
// Callers  : none
// Callees  : FUN_7fffa5378e0b@0xc08e0b
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5377bb5(void) {
    /* +0xc07bb5 */ __asm { MOV R11D,0x2af59757 }
    /* +0xc07bbb */ __asm { MOV qword ptr [RBP + 0x120],R10 }
    /* +0xc07bc2 */ __asm { MOV R10W,0x79d9 }
    /* +0xc07bc7 */ __asm { MOV RSI,qword ptr [RBP + 0x480] }
    /* +0xc07bce */ __asm { ADD R10D,ESI }
    /* +0xc07bd1 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xc07bd8 */ __asm { ROL R10W,CL }
    /* +0xc07bdc */ __asm { MOV R9,qword ptr [RBP + 0x1038] }
    /* +0xc07be3 */ __asm { XOR R11D,R9D }
    /* +0xc07be6 */ __asm { ROL R10W,0x2 }
    /* +0xc07beb */ __asm { MOV EAX,dword ptr [R8 + -0x287b] }
    /* +0xc07bf2 */ __asm { MOV R8W,0xf816 }
    /* +0xc07bf7 */ __asm { MOV RDI,qword ptr [RBP + 0x1298] }
    /* +0xc07bfe */ __asm { XOR R8D,EDI }
    /* +0xc07c01 */ __asm { MOV EDX,0xffffc69f }
    /* +0xc07c06 */ __asm { SUB EDX,R8D }
    /* +0xc07c09 */ __asm { XOR EDX,ESI }
    /* +0xc07c0b */ __asm { ADD EDX,R9D }
    /* +0xc07c0e */ __asm { MOVZX R8D,DX }
    /* +0xc07c12 */ __asm { NOT R10D }
    /* +0xc07c15 */ __asm { MOVZX EDX,R10W }
    /* +0xc07c19 */ __asm { MOV R15W,0x2413 }
    /* +0xc07c1e */ __asm { ROL R11D,0x3 }
    /* +0xc07c22 */ __asm { XOR R11D,EDI }
    /* +0xc07c25 */ __asm { SUB R15D,R9D }
    /* +0xc07c28 */ __asm { ROR R15W,0x1 }
    /* +0xc07c2c */ __asm { SUB R15D,ESI }
    /* +0xc07c2f */ __asm { ROR R15W,CL }
    /* +0xc07c33 */ __asm { MOV R10,qword ptr [RBP + 0x11d8] }
    /* +0xc07c3a */ __asm { IMUL R10D,R11D }
    /* +0xc07c3e */ __asm { MOVZX R11D,R15W }
    /* +0xc07c42 */ __asm { ROL R10D,0xb }
    /* +0xc07c46 */ __asm { LEA R9,[RBP + 0xf68] }
    /* +0xc07c4d */ __asm { MOV qword ptr [RSP + 0x30],R9 }
    /* +0xc07c52 */ __asm { MOV dword ptr [RSP + 0x28],R11D }
    /* +0xc07c57 */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xc07c5e */ __asm { SYSCALL }
    /* +0xc07c60 */ __asm { MOV RAX,qword ptr [RBP + 0x1298] }
    /* +0xc07c67 */ __asm { MOV R11D,EAX }
    /* +0xc07c6a */ __asm { MOV RDX,qword ptr [RBP + 0x480] }
    /* +0xc07c71 */ __asm { SUB R11D,EDX }
    /* +0xc07c74 */ __asm { MOV R10W,0x2623 }
    /* +0xc07c79 */ __asm { ADD R10D,R11D }
    /* +0xc07c7c */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc07c83 */ __asm { ROR R10W,CL }
    /* +0xc07c87 */ __asm { ROL R10W,0xd }
    /* +0xc07c8c */ __asm { MOVZX R10D,R10W }
    /* +0xc07c90 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xc07c97 */ __asm { NOP }
    /* +0xc07c99 */ __asm { MOV R8,0x0 }
    /* +0xc07ca0 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xc07ca4 */ __asm { MOV R8,RDX }
    /* +0xc07ca7 */ __asm { SUB R8,RCX }
    /* +0xc07caa */ __asm { MOV RDX,-0x498ff901a723ae67 }
    /* +0xc07cb4 */ __asm { XOR RDX,RAX }
    /* +0xc07cb7 */ __asm { IMUL RDX,RDX,0x6d03f03b }
    /* +0xc07cbe */ __asm { ADD RDX,R8 }
    /* +0xc07cc1 */ __asm { CMP R11,RDX }
    /* +0xc07cc4 */ __asm { JZ 0x7fffa5397373 }
    /* +0xc07cca */ __asm { MOV R11W,0x2626 }
    /* +0xc07ccf */ __asm { XOR R11D,dword ptr [RBP + 0x480] }
    /* +0xc07cd6 */ __asm { IMUL R11D,R11D,-0x4b57 }
    /* +0xc07cdd */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc07ce4 */ __asm { ROL R11W,CL }
    /* +0xc07ce8 */ __asm { MOV R10D,dword ptr [RBP + 0x50] }
    /* +0xc07cec */ __asm { IMUL R10D,R11D }
    /* +0xc07cf0 */ __asm { MOVZX R10D,R10W }
    /* +0xc07cf4 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xc07cf8 */ __asm { MOV RDX,0x4eb18f58746044b1 }
    /* +0xc07d02 */ __asm { CMP qword ptr [R11 + 0x18],RDX }
    /* +0xc07d06 */ __asm { NOP }
    /* +0xc07d07 */ __asm { NOP }
    /* +0xc07d08 */ __asm { NOP }
    /* +0xc07d09 */ __asm { NOP }
    /* +0xc07d0a */ __asm { NOP }
    /* +0xc07d0b */ __asm { MOV R11D,0x8b6be282 }
    /* +0xc07d11 */ __asm { MOV R8,qword ptr [RBP + 0x1298] }
    /* +0xc07d18 */ __asm { XOR R8D,R11D }
    /* +0xc07d1b */ __asm { IMUL R8D,dword ptr [RBP + 0xe8] }
    /* +0xc07d23 */ __asm { MOV R11,qword ptr [RBP + 0x480] }
    /* +0xc07d2a */ __asm { ADD R11D,R8D }
    /* +0xc07d2d */ __asm { ADD R11D,0xb8cf02af }
    /* +0xc07d34 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xc07d3b */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc07d42 */ __asm { CMP R11D,0x5f97326e }
    /* +0xc07d49 */ __asm { JNC 0x7fffa539737b }
    /* +0xc07d4f */ __asm { TEST dword ptr [RBP + 0x3b0],0x100 }
    /* +0xc07d59 */ __asm { JNZ 0x7fffa539739e }
    /* +0xc07d5f */ __asm { MOV ECX,0x5 }
    /* +0xc07d64 */ __asm { INT 0x29 }
    /* +0xc07d66 */ __asm { RDTSC }
    /* +0xc07d68 */ __asm { SHL RDX,0x20 }
    /* +0xc07d6c */ __asm { OR RDX,RAX }
    /* +0xc07d6f */ __asm { MOV R11,-0x2ecbdabc217d106b }
    /* +0xc07d79 */ __asm { IMUL R11,RDX }
    /* +0xc07d7d */ __asm { MOV R10,-0x2ba57459e11567e2 }
    /* +0xc07d87 */ __asm { ADD R10,R11 }
    /* +0xc07d8a */ __asm { MOV RCX,R10 }
    /* +0xc07d8d */ __asm { SHR RCX,0x3b }
    /* +0xc07d91 */ __asm { MOV RDX,R10 }
    /* +0xc07d94 */ __asm { SHR RDX,0x1b }
    /* +0xc07d98 */ __asm { SHR R10,0x2d }
    /* +0xc07d9c */ __asm { XOR R10D,EDX }
    /* +0xc07d9f */ __asm { ROR R10D,CL }
    /* +0xc07da2 */ __asm { MOV dword ptr [RBP + 0x120],0x3bc5b912 }
    /* +0xc07dac */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xc07db3 */ __asm { CMP R11D,0x35efda40 }
    /* +0xc07dba */ __asm { JA 0x7fffa5377dc7 }
    /* +0xc07dbc */ __asm { FSUB double ptr [RAX + -0x3a841c2c] }
    /* +0xc07dc2 */ __asm { ADC EAX,0x3ac68653 }
    /* +0xc07dc7 */ __asm { CMP R10D,0x10c2f5 }
    /* +0xc07dce */ __asm { JA 0x7fffa5377e1c }
    /* +0xc07dd0 */ __asm { TEST EDI,0x100 }
    /* +0xc07dd6 */ __asm { NOP }
    /* +0xc07dd7 */ __asm { NOP }
    /* +0xc07dd8 */ __asm { NOP }
    /* +0xc07dd9 */ __asm { NOP }
    /* +0xc07dda */ __asm { NOP }
    /* +0xc07ddb */ __asm { MOV R11D,0xe04069dd }
    /* +0xc07de1 */ __asm { ADD R11D,dword ptr [RBP + 0x480] }
    /* +0xc07de8 */ __asm { IMUL R10D,R11D,-0x28a1ecef }
    /* +0xc07def */ __asm { MOV R8,qword ptr [RBP + 0x1038] }
    /* +0xc07df6 */ __asm { LEA R11D,[R10 + R8*0x1] }
    /* +0xc07dfa */ __asm { ADD R11D,0x59d07dc3 }
    /* +0xc07e01 */ __asm { MOV dword ptr [RBP + 0x120],R11D }
    /* +0xc07e08 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xc07e0f */ __asm { CMP R11D,0x6b4a2004 }
    /* +0xc07e16 */ __asm { JBE 0x7fffa53973a8 }
    /* +0xc07e1c */ __asm { LEA R9,[0x7fffa478c3a5] }
    /* +0xc07e23 */ __asm { MOV R11,-0x24927784334bc576 }
    /* +0xc07e2d */ __asm { CMP R9,R11 }
    /* +0xc07e30 */ __asm { JZ 0x7fffa53973b0 }
    /* +0xc07e36 */ __asm { MOV R8W,0x74fa }
    /* +0xc07e3b */ __asm { MOV R10D,0x4397229f }
    /* +0xc07e41 */ __asm { MOV R11W,0xe404 }
    /* +0xc07e46 */ __asm { MOV EAX,0x60077733 }
    /* +0xc07e4b */ __asm { MOV R12,qword ptr [RBP + 0x1298] }
    /* +0xc07e52 */ __asm { ADD EAX,R12D }
    /* +0xc07e55 */ __asm { MOV RSI,qword ptr [RBP + 0x1038] }
    /* +0xc07e5c */ __asm { MOV ECX,ESI }
    /* +0xc07e5e */ __asm { ROR EAX,CL }
    /* +0xc07e60 */ __asm { IMUL EAX,EAX,-0x58dc07bd }
    /* +0xc07e66 */ __asm { NOT EAX }
    /* +0xc07e68 */ __asm { CDQE }
    /* +0xc07e6a */ __asm { XOR R8D,ESI }
    /* +0xc07e6d */ __asm { MOV R15,qword ptr [RBP + 0x480] }
    /* +0xc07e74 */ __asm { ADD R8D,R15D }
    /* +0xc07e77 */ __asm { MOV EDX,0xffff89d7 }
    /* +0xc07e7c */ __asm { SUB EDX,R8D }
    /* +0xc07e7f */ __asm { ADD R10D,R12D }
    /* +0xc07e82 */ __asm { ROL R10D,CL }
    /* +0xc07e85 */ __asm { MOVZX EDX,DX }
    /* +0xc07e88 */ __asm { XOR R10D,0xc99aadaf }
    /* +0xc07e8f */ __asm { SUB R10D,R15D }
    /* +0xc07e92 */ __asm { MOV qword ptr [RBP + 0x120],R8 }
    /* +0xc07e99 */ __asm { MOV R8W,0x5063 }
    /* +0xc07e9e */ __asm { XOR R8D,ESI }
    /* +0xc07ea1 */ __asm { ADD R8D,0x1da8 }
    /* +0xc07ea8 */ __asm { XOR R8D,R15D }
    /* +0xc07eab */ __asm { ADD R8D,0xffffbd1e }
    /* +0xc07eb2 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xc07eb9 */ __asm { ROR R8W,CL }
    /* +0xc07ebd */ __asm { MOVZX R8D,R8W }
    /* +0xc07ec1 */ __asm { MOV EAX,dword ptr [RAX + R9*0x1 + 0xb4] }
    /* +0xc07ec9 */ __asm { XOR R11D,R15D }
    /* +0xc07ecc */ __asm { ADD R11D,0xffff8bde }
    /* +0xc07ed3 */ __asm { MOV ECX,ESI }
    /* +0xc07ed5 */ __asm { ROL R11W,CL }
    /* +0xc07ed9 */ __asm { MOVZX R11D,R11W }
    /* +0xc07edd */ __asm { LEA R9,[RBP + 0xf68] }
    /* +0xc07ee4 */ __asm { MOV qword ptr [RSP + 0x30],R9 }
    /* +0xc07ee9 */ __asm { MOV dword ptr [RSP + 0x28],R11D }
    /* +0xc07eee */ __asm { JMP 0x7fffa5378797 }
    /* +0xc08797 */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xc0879e */ __asm { SYSCALL }
    /* +0xc087a0 */ __asm { MOV R11D,0xa6d2fdcd }
    /* +0xc087a6 */ __asm { SUB R11D,dword ptr [RBP + 0x480] }
    /* +0xc087ad */ __asm { IMUL R11D,R11D,-0xfcece0d }
    /* +0xc087b4 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc087bb */ __asm { ROR R11D,CL }
    /* +0xc087be */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xc087c5 */ __asm { ROL R11D,CL }
    /* +0xc087c8 */ __asm { MOV dword ptr [RBP + 0x120],R11D }
    /* +0xc087cf */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xc087d6 */ __asm { MOV dword ptr [RBP + 0x5e0],0x80076966 }
    /* +0xc087e0 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc087e7 */ __asm { CMP R11D,0xcb431ce }
    /* +0xc087ee */ __asm { JBE 0x7fffa5397768 }
    /* +0xc087f4 */ __asm { PUSHFQ }
    /* +0xc087f5 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xc087fd */ __asm { POPFQ }
    /* +0xc087fe */ __asm { TEST EDI,0x100 }
    /* +0xc08804 */ __asm { NOP }
    /* +0xc08805 */ __asm { NOP }
    /* +0xc08806 */ __asm { NOP }
    /* +0xc08807 */ __asm { NOP }
    /* +0xc08808 */ __asm { NOP }
    /* +0xc08809 */ __asm { NOP }
    /* +0xc0880a */ __asm { NOP }
    /* +0xc0880b */ __asm { NOP }
    /* +0xc0880c */ __asm { NOP }
    /* +0xc0880d */ __asm { NOP }
    /* +0xc0880e */ __asm { NOP }
    /* +0xc0880f */ __asm { NOP }
    /* +0xc08810 */ __asm { NOP }
    /* +0xc08811 */ __asm { NOP }
    /* +0xc08812 */ __asm { MOV dword ptr [RBP + 0x5e0],0xff0939c7 }
    /* +0xc0881c */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc08823 */ __asm { CMP R11D,0x4f68bdd0 }
    /* +0xc0882a */ __asm { NOP }
    /* +0xc0882b */ __asm { NOP }
    /* +0xc0882c */ __asm { NOP }
    /* +0xc0882d */ __asm { NOP }
    /* +0xc0882e */ __asm { NOP }
    /* +0xc0882f */ __asm { NOP }
    /* +0xc08830 */ __asm { NOP }
    /* +0xc08831 */ __asm { NOP }
    /* +0xc08832 */ __asm { MOV ECX,0x5 }
    /* +0xc08837 */ __asm { INT 0x29 }
    /* +0xc08839 */ __asm { MOV RDX,-0x677f53cc2d2da72 }
    /* +0xc08843 */ __asm { LEA R8,[0x7fffa47b8621] }
    /* +0xc0884a */ __asm { MOV R11,-0x2ac6957d5 }
    /* +0xc08854 */ __asm { SUB R11,qword ptr [RBP + 0x1298] }
    /* +0xc0885b */ __asm { MOV RAX,qword ptr [RBP + 0x1038] }
    /* +0xc08862 */ __asm { ADD RDX,RAX }
    /* +0xc08865 */ __asm { XOR R11,RAX }
    /* +0xc08868 */ __asm { MOV R9,qword ptr [RBP + 0x50] }
    /* +0xc0886c */ __asm { MOV ECX,R9D }
    /* +0xc0886f */ __asm { ROR R11,CL }
    /* +0xc08872 */ __asm { NOT R11 }
    /* +0xc08875 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xc0887c */ __asm { ROL R11,CL }
    /* +0xc0887f */ __asm { MOV RAX,0x69e7b2adb591188a }
    /* +0xc08889 */ __asm { XOR R10D,R10D }
    /* +0xc0888c */ __asm { CMP R8,RAX }
    /* +0xc0888f */ __asm { SETZ R10B }
    /* +0xc08893 */ __asm { OR R9,0x1 }
    /* +0xc08897 */ __asm { IMUL R9,RDX }
    /* +0xc0889b */ __asm { ROL R9,0x7 }
    /* +0xc0889f */ __asm { NOT R9 }
    /* +0xc088a2 */ __asm { ADD R9,RCX }
    /* +0xc088a5 */ __asm { XOR EAX,EAX }
    /* +0xc088a7 */ __asm { CMP R8,R9 }
    /* +0xc088aa */ __asm { SETC AL }
    /* +0xc088ad */ __asm { MOV RDX,0x400000000175 }
    /* +0xc088b7 */ __asm { CMP R11,RDX }
    /* +0xc088ba */ __asm { CMOVZ EAX,R10D }
    /* +0xc088be */ __asm { CMP AL,0x1 }
    /* +0xc088c0 */ __asm { JZ 0x7fffa539776e }
    /* +0xc088c6 */ __asm { MOV R11W,0x559f }
    /* +0xc088cb */ __asm { MOV R10W,0xf47 }
    /* +0xc088d0 */ __asm { MOV RSI,qword ptr [RBP + 0x50] }
    /* +0xc088d4 */ __asm { SUB R10D,ESI }
    /* +0xc088d7 */ __asm { XOR R11D,ESI }
    /* +0xc088da */ __asm { ADD R11D,0xfffff8b8 }
    /* +0xc088e1 */ __asm { ROL R10W,0x6 }
    /* +0xc088e6 */ __asm { MOV R9,qword ptr [RBP + 0x1038] }
    /* +0xc088ed */ __asm { XOR R10D,R9D }
    /* +0xc088f0 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xc088f7 */ __asm { ROL R10W,CL }
    /* +0xc088fb */ __asm { MOV RDI,qword ptr [RBP + 0x1048] }
    /* +0xc08902 */ __asm { MOVD XMM0,EDI }
    /* +0xc08906 */ __asm { MOV R12,qword ptr [RBP + 0x1350] }
    /* +0xc0890d */ __asm { SUB R12D,R9D }
    /* +0xc08910 */ __asm { ADD R10D,dword ptr [RBP + 0x1298] }
    /* +0xc08917 */ __asm { IMUL R10D,R10D,-0x2ed }
    /* +0xc0891e */ __asm { MOV qword ptr [RBP + 0x1050],RCX }
    /* +0xc08925 */ __asm { MOV EAX,dword ptr [R8 + 0x499b] }
    /* +0xc0892c */ __asm { MOV R8D,0x3ea446a9 }
    /* +0xc08932 */ __asm { IMUL R8D,R8D,0x25158933 }
    /* +0xc08939 */ __asm { ROL R8D,0x16 }
    /* +0xc0893d */ __asm { MOVZX EDX,R10W }
    /* +0xc08941 */ __asm { MOV R10,qword ptr [RBP + 0x11d8] }
    /* +0xc08948 */ __asm { IMUL R10D,R8D }
    /* +0xc0894c */ __asm { XOR R10D,R9D }
    /* +0xc0894f */ __asm { MOV ECX,ESI }
    /* +0xc08951 */ __asm { ROL R10D,CL }
    /* +0xc08954 */ __asm { MOV R8W,0x8ff5 }
    /* +0xc08959 */ __asm { MOV ECX,dword ptr [RBP + 0x1b0] }
    /* +0xc0895f */ __asm { IMUL ECX,R8D }
    /* +0xc08963 */ __asm { XOR ECX,0xffffe8a6 }
    /* +0xc08969 */ __asm { ADD ECX,R12D }
    /* +0xc0896c */ __asm { MOVD XMM2,ECX }
    /* +0xc08970 */ __asm { PXOR XMM2,XMM0 }
    /* +0xc08974 */ __asm { PEXTRW R9D,XMM2,0x0 }
    /* +0xc0897a */ __asm { MOV ECX,EDI }
    /* +0xc0897c */ __asm { ROL R11W,CL }
    /* +0xc08980 */ __asm { IMUL R10D,dword ptr [RBP + 0xd0] }
    /* +0xc08988 */ __asm { MOV R8D,dword ptr [RBP + 0x3b0] }
    /* +0xc0898f */ __asm { IMUL R8D,R11D }
    /* +0xc08993 */ __asm { NOT R8D }
    /* +0xc08996 */ __asm { MOVZX R8D,R8W }
    /* +0xc0899a */ __asm { LEA R11,[RBP + 0x2b0] }
    /* +0xc089a1 */ __asm { MOV qword ptr [RSP + 0x30],R11 }
    /* +0xc089a6 */ __asm { MOV dword ptr [RSP + 0x28],R9D }
    /* +0xc089ab */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xc089b2 */ __asm { JMP 0x7fffa5378ab5 }
    /* +0xc08ab5 */ __asm { SYSCALL }
    /* +0xc08ab7 */ __asm { MOV R11W,0x46b0 }
    /* +0xc08abc */ __asm { MOV R10D,0xffff9055 }
    /* +0xc08ac2 */ __asm { SUB R10D,R11D }
    /* +0xc08ac5 */ __asm { ROL R10W,0xd }
    /* +0xc08aca */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xc08ad1 */ __asm { XOR EDX,R10D }
    /* +0xc08ad4 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xc08adb */ __asm { ROL DX,CL }
    /* +0xc08ade */ __asm { MOV R10,qword ptr [RBP + 0x50] }
    /* +0xc08ae2 */ __asm { XOR R10D,EDX }
    /* +0xc08ae5 */ __asm { MOVZX R10D,R10W }
    /* +0xc08ae9 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xc08aed */ __asm { MOV RDX,-0x504e2939a82f2d6f }
    /* +0xc08af7 */ __asm { CMP qword ptr [R11 + 0x18],RDX }
    /* +0xc08afb */ __asm { NOP }
    /* +0xc08afc */ __asm { NOP }
    /* +0xc08afd */ __asm { NOP }
    /* +0xc08afe */ __asm { NOP }
    /* +0xc08aff */ __asm { NOP }
    /* +0xc08b00 */ __asm { MOV dword ptr [RBP + 0x5e0],0x5efef3ff }
    /* +0xc08b0a */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc08b11 */ __asm { MOV dword ptr [RBP + 0x5e0],0xffbffe38 }
    /* +0xc08b1b */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc08b22 */ __asm { MOV ECX,0x5 }
    /* +0xc08b27 */ __asm { INT 0x29 }
    /* +0xc08b29 */ __asm { RDTSC }
    /* +0xc08b2b */ __asm { SHL RDX,0x20 }
    /* +0xc08b2f */ __asm { OR RDX,RAX }
    /* +0xc08b32 */ __asm { MOV R8,-0x39e08bb94c939d61 }
    /* +0xc08b3c */ __asm { MOV RAX,0x7facc0f7a00541bd }
    /* +0xc08b46 */ __asm { IMUL RAX,RDX }
    /* +0xc08b4a */ __asm { MOV R8,qword ptr [RBP + 0x1488] }
    /* +0xc08b51 */ __asm { MOV R9,-0x41c8cb839cc3ddc2 }
    /* +0xc08b5b */ __asm { ADD R9,RAX }
    /* +0xc08b5e */ __asm { MOV RDX,R9 }
    /* +0xc08b61 */ __asm { SHR RDX,0x2d }
    /* +0xc08b65 */ __asm { MOV RCX,R9 }
    /* +0xc08b68 */ __asm { SHR RCX,0x3b }
    /* +0xc08b6c */ __asm { SHR R9,0x1b }
    /* +0xc08b70 */ __asm { XOR EDX,R9D }
    /* +0xc08b73 */ __asm { ROR EDX,CL }
    /* +0xc08b75 */ __asm { MOV RAX,0x3309e134cf3da0cf }
    /* +0xc08b7f */ __asm { ADD RAX,qword ptr [RBP + 0x1298] }
    /* +0xc08b86 */ __asm { ROL RAX,0x24 }
    /* +0xc08b8a */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xc08b91 */ __asm { ROL RAX,CL }
    /* +0xc08b94 */ __asm { NOT RAX }
    /* +0xc08b97 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc08b9e */ __asm { ROL RAX,CL }
    /* +0xc08ba1 */ __asm { CMP R8,RAX }
    /* +0xc08ba4 */ __asm { NOP }
    /* +0xc08ba5 */ __asm { NOP }
    /* +0xc08ba6 */ __asm { NOP }
    /* +0xc08ba7 */ __asm { NOP }
    /* +0xc08ba8 */ __asm { NOP }
    /* +0xc08ba9 */ __asm { NOP }
    /* +0xc08baa */ __asm { NOP }
    /* +0xc08bab */ __asm { NOP }
    /* +0xc08bac */ __asm { NOP }
    /* +0xc08bad */ __asm { NOP }
    /* +0xc08bae */ __asm { NOP }
    /* +0xc08baf */ __asm { NOP }
    /* +0xc08bb0 */ __asm { NOP }
    /* +0xc08bb1 */ __asm { NOP }
    /* +0xc08bb2 */ __asm { NOP }
    /* +0xc08bb3 */ __asm { NOP }
    /* +0xc08bb4 */ __asm { NOP }
    /* +0xc27373 */ __asm { IMUL ESP,dword ptr ES:[RBX + -0x1f6b017],-0x3f38b601 }
    /* +0xc2737e */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0xc27380 */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0xc27382 */ __asm { NOP }
    /* +0xc27384 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xc2738b */ __asm { MOV DS:[0x3b085f7],AL }
    /* +0xc27392 */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0xc27394 */ __asm { ADD uint8_t ptr [RCX],AL }
    /* +0xc27396 */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0xc27398 */ __asm { JZ 0x7fffa5377d5f }
    /* +0xc2739e */ __asm { IMUL R12,qword ptr [RAX + 0x5b9],0x6529cd00 }
    /* +0xc273a9 */ __asm { XOR dword ptr [RDI + -0x1f59317],0x3d8165ff }
    /* +0xc273b3 */ __asm { JMP 0x7fffa5377e36 }
    /* +0xc27768 */ __asm { NOP }
    /* +0xc27769 */ __asm { NOP }
    /* +0xc2776a */ __asm { NOP }
    /* +0xc2776b */ __asm { NOP }
    /* +0xc2776c */ __asm { NOP }
    /* +0xc2776d */ __asm { NOP }
    /* +0xc2776e */ __asm { NOP }
    /* +0xc2776f */ __asm { NOP }
    /* +0xc27770 */ __asm { NOP }
    /* +0xc27771 */ __asm { NOP }
    /* +0xc27772 */ __asm { NOP }
    /* +0xc27773 */ __asm { NOP }
    /* +0xc27774 */ __asm { NOP }
    /* +0xc27775 */ __asm { PUSH qword ptr [RSI] }
    /* +0xc27777 */ __asm { SBB dword ptr [0x7fffa34e0c6a],0x9a8141ff }
    /* +0xc27781 */ __asm { JMP 0x7fffa5378e0b }
}


// ============================================================================
// Function : FUN_7fffa5378e0b  |  RVA: 0xc08e0b  |  Size: 151 bytes
// Callers  : FUN_7fffa5377bb5@0xc07bb5
// Callees  : FUN_7fffa53819b7@0xc119b7
// ============================================================================
void FUN_7fffa5378e0b(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  int64_t unaff_RBP;
  uint16_t uVar4;
  int iVar5;
  
  *(uint64_t *)(unaff_RBP + 0x120) = param_3;
  iVar5 = 0x2850 - (int)CONCAT62((int6)((uint64_t)param_3 >> 0x10),0xd1fb);
  uVar1 = *(uint64_t *)(unaff_RBP + 0x1038);
  bVar2 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x480) & 0xf;
  bVar3 = (uint8_t)(uVar1 & 0xffffffff) & 0xf;
  uVar4 = (uint16_t)iVar5;
  FUN_7fffa53819b7(uVar1 & 0xffffffff,uVar1,
                   ((uint32_t)(uint16_t)(0xd5d5U >> bVar2 | -0x2a2b << 0x10 - bVar2) ^ (uint32_t)uVar1) +
                   (int)*(uint64_t *)(unaff_RBP + 0x1298) & 0xffff,
                   CONCAT22((short)((uint32_t)iVar5 >> 0x10),uVar4 >> bVar3 | uVar4 << 0x10 - bVar3) *
                   *(int *)(unaff_RBP + 0x4d0));
  return;
}


// ============================================================================
// Function : FUN_7fffa537f9fc  |  RVA: 0xc0f9fc  |  Size: 1381 bytes
// Callers  : FUN_7fffa52f3bc3@0xb83bc3
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa537f9fc(void) {
    /* +0xc0f9fc */ __asm { TEST EAX,EAX }
    /* +0xc0f9fe */ __asm { JNS 0x7fffa537fa16 }
    /* +0xc0fa00 */ __asm { MOV dword ptr [RBP + 0x5e0],0xff9fbf73 }
    /* +0xc0fa0a */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc0fa11 */ __asm { JMP 0x7fffa52f25bf }
    /* +0xc0fa16 */ __asm { MOV dword ptr [RBP + 0x5e0],0xedfef6d7 }
    /* +0xc0fa20 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc0fa27 */ __asm { MOV R10W,0x6d6a }
    /* +0xc0fa2c */ __asm { AND R11D,0x1 }
    /* +0xc0fa30 */ __asm { XOR R10D,ESI }
    /* +0xc0fa33 */ __asm { SUB R10D,EDI }
    /* +0xc0fa36 */ __asm { ADD R10D,0x5e25 }
    /* +0xc0fa3d */ __asm { XOR R10D,0x1211 }
    /* +0xc0fa44 */ __asm { SUB R10D,dword ptr [RBP + 0x480] }
    /* +0xc0fa4b */ __asm { MOVZX R10D,R10W }
    /* +0xc0fa4f */ __asm { CMP R11D,R10D }
    /* +0xc0fa52 */ __asm { NOP }
    /* +0xc0fa53 */ __asm { NOP }
    /* +0xc0fa54 */ __asm { NOP }
    /* +0xc0fa55 */ __asm { NOP }
    /* +0xc0fa56 */ __asm { NOP }
    /* +0xc0fa57 */ __asm { NOP }
    /* +0xc0fa58 */ __asm { NOP }
    /* +0xc0fa59 */ __asm { NOP }
    /* +0xc0fa5a */ __asm { NOP }
    /* +0xc0fa5b */ __asm { NOP }
    /* +0xc0fa5c */ __asm { NOP }
    /* +0xc0fa5d */ __asm { NOP }
    /* +0xc0fa5e */ __asm { MOV R11W,0xb258 }
    /* +0xc0fa63 */ __asm { MOV R8,qword ptr [RBP + 0x498] }
    /* +0xc0fa6a */ __asm { IMUL R8D,R11D }
    /* +0xc0fa6e */ __asm { ROL R8W,0xd }
    /* +0xc0fa73 */ __asm { ADD R8D,0x7841 }
    /* +0xc0fa7a */ __asm { IMUL R8D,dword ptr [RBP + 0x4a0] }
    /* +0xc0fa82 */ __asm { MOV R11,qword ptr [RBP + 0x480] }
    /* +0xc0fa89 */ __asm { ADD R11D,R8D }
    /* +0xc0fa8c */ __asm { MOVZX R10D,R11W }
    /* +0xc0fa90 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xc0fa94 */ __asm { MOV R11B,0x1 }
    /* +0xc0fa97 */ __asm { MOV dword ptr [RBP + 0x1b0],R11D }
    /* +0xc0fa9e */ __asm { JMP 0x7fffa52f25bf }
    /* +0xc0fabb */ __asm { IMUL EDX,dword ptr [RBP + -0x7792617],-0x4096b301 }
    /* +0xc0fac6 */ __asm { JMP 0x7fffa534e38d }
    /* +0xc1043f */ __asm { MOV R11D,0x8606016e }
    /* +0xc10445 */ __asm { SUB R11D,dword ptr [RBP + 0x480] }
    /* +0xc1044c */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc10453 */ __asm { ROR R11D,CL }
    /* +0xc10456 */ __asm { ADD R11D,0x4dc8ef8d }
    /* +0xc1045d */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xc10464 */ __asm { ROR R11D,CL }
    /* +0xc10467 */ __asm { MOVSXD R11,R11D }
    /* +0xc1046a */ __asm { ADD R11,qword ptr [RBP + 0x590] }
    /* +0xc10471 */ __asm { CMP R11,0x1fffff }
    /* +0xc10478 */ __asm { JA 0x7fffa5383b11 }
    /* +0xc1047e */ __asm { MOV ECX,R9D }
    /* +0xc10481 */ __asm { PSHUFD XMM5,XMM0,0x44 }
    /* +0xc10486 */ __asm { PSHUFD XMM1,XMM2,0xee }
    /* +0xc1048b */ __asm { PSHUFD XMM0,XMM0,0xee }
    /* +0xc10490 */ __asm { PSHUFD XMM2,XMM2,0x44 }
    /* +0xc10495 */ __asm { MOV R10,qword ptr [RBP + 0x590] }
    /* +0xc1049c */ __asm { SHR R10D,0xc }
    /* +0xc104a0 */ __asm { MOVZX R10D,R10W }
    /* +0xc104a4 */ __asm { SHL R10,0x2c }
    /* +0xc104a8 */ __asm { OR R10,RCX }
    /* +0xc104ab */ __asm { MOV R11,R10 }
    /* +0xc104ae */ __asm { NOT R11 }
    /* +0xc104b1 */ __asm { MOV RDX,qword ptr [RBP + 0xc0] }
    /* +0xc104b8 */ __asm { ADD RDX,0x10 }
    /* +0xc104bc */ __asm { XOR R9D,R9D }
    /* +0xc104bf */ __asm { MOVDQA XMM3,XMM5 }
    /* +0xc104c3 */ __asm { PSRLQ XMM3,0x20 }
    /* +0xc104c8 */ __asm { MOVDQA XMM4,XMM1 }
    /* +0xc104cc */ __asm { PSRLQ XMM4,0x20 }
    /* +0xc104d1 */ __asm { MOVDQA XMM14,XMM2 }
    /* +0xc104d6 */ __asm { PSRLQ XMM14,0x20 }
    /* +0xc104dc */ __asm { PCMPEQD XMM12,XMM12 }
    /* +0xc104e1 */ __asm { MOV R8,-0x2000000000 }
    /* +0xc104eb */ __asm { MOV R13,qword ptr [RBP + 0xd0] }
    /* +0xc104f2 */ __asm { MOV R14,qword ptr [RBP + 0x1298] }
    /* +0xc104f9 */ __asm { MOV RBX,qword ptr [RBP + 0x1038] }
    /* +0xc10500 */ __asm { MOV ESI,0x2395d8a8 }
    /* +0xc10505 */ __asm { MOV EAX,0xbd84dc1b }
    /* +0xc1050a */ __asm { MOV R12D,0x43ac047f }
    /* +0xc10510 */ __asm { IMUL R12D,R13D }
    /* +0xc10514 */ __asm { MOV R15D,0x59160247 }
    /* +0xc1051a */ __asm { XOR R15D,R14D }
    /* +0xc1051d */ __asm { ADD R15D,EBX }
    /* +0xc10520 */ __asm { MOV RCX,qword ptr [RBP + 0x1f0] }
    /* +0xc10527 */ __asm { ROL R12D,CL }
    /* +0xc1052a */ __asm { IMUL EDI,R15D,0x593abe5f }
    /* +0xc10531 */ __asm { ADD EAX,R14D }
    /* +0xc10534 */ __asm { XOR ESI,dword ptr [RBP + 0x510] }
    /* +0xc1053a */ __asm { IMUL ESI,R13D }
    /* +0xc1053e */ __asm { ADD ESI,0x4ec3dccd }
    /* +0xc10544 */ __asm { IMUL ESI,dword ptr [RBP + 0xe8] }
    /* +0xc1054b */ __asm { NOT EAX }
    /* +0xc1054d */ __asm { MOV ECX,EBX }
    /* +0xc1054f */ __asm { ROL EAX,CL }
    /* +0xc10551 */ __asm { MOVDQA XMM15,xmmword ptr [RDX + -0x10] }
    /* +0xc10557 */ __asm { NOT EAX }
    /* +0xc10559 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xc10560 */ __asm { ROR EDI,CL }
    /* +0xc10562 */ __asm { ADD EDI,0xcb4f033a }
    /* +0xc10568 */ __asm { MOVDQA XMM11,XMM5 }
    /* +0xc1056d */ __asm { PXOR XMM11,XMM15 }
    /* +0xc10572 */ __asm { MOV ECX,EBX }
    /* +0xc10574 */ __asm { ROR R12D,CL }
    /* +0xc10577 */ __asm { XOR R12D,0xe3568a57 }
    /* +0xc1057e */ __asm { MOVDQA XMM8,XMM0 }
    /* +0xc10583 */ __asm { PSRLQ XMM8,0x20 }
    /* +0xc10589 */ __asm { CMP RSI,R12 }
    /* +0xc1058c */ __asm { JGE 0x7fffa5380595 }
    /* +0xc1058e */ __asm { PXOR XMM11,XMM0 }
    /* +0xc10593 */ __asm { JMP 0x7fffa53805c4 }
    /* +0xc10595 */ __asm { MOVDQA XMM13,XMM8 }
    /* +0xc1059a */ __asm { PMULUDQ XMM13,XMM11 }
    /* +0xc1059f */ __asm { MOVDQA XMM9,XMM0 }
    /* +0xc105a4 */ __asm { PMULUDQ XMM9,XMM11 }
    /* +0xc105a9 */ __asm { PSRLQ XMM11,0x20 }
    /* +0xc105af */ __asm { PMULUDQ XMM11,XMM0 }
    /* +0xc105b4 */ __asm { PADDQ XMM11,XMM13 }
    /* +0xc105b9 */ __asm { PSLLQ XMM11,0x20 }
    /* +0xc105bf */ __asm { PADDQ XMM11,XMM9 }
    /* +0xc105c4 */ __asm { MOVDQA XMM9,XMM15 }
    /* +0xc105c9 */ __asm { PSRLQ XMM9,0x7 }
    /* +0xc105cf */ __asm { MOVDQA XMM13,XMM15 }
    /* +0xc105d4 */ __asm { PSLLQ XMM13,0x39 }
    /* +0xc105da */ __asm { POR XMM13,XMM9 }
    /* +0xc105df */ __asm { PADDQ XMM13,XMM11 }
    /* +0xc105e4 */ __asm { PXOR XMM13,xmmword ptr [RDX] }
    /* +0xc105e9 */ __asm { MOVDQA XMM11,XMM5 }
    /* +0xc105ee */ __asm { PSUBQ XMM11,XMM13 }
    /* +0xc105f3 */ __asm { MOVDQA XMM10,XMM11 }
    /* +0xc105f8 */ __asm { PSRLQ XMM10,0x12 }
    /* +0xc105fe */ __asm { PSLLQ XMM11,0x2e }
    /* +0xc10604 */ __asm { POR XMM11,XMM10 }
    /* +0xc10609 */ __asm { PSRLQ XMM11,0x20 }
    /* +0xc1060f */ __asm { PMULUDQ XMM11,XMM5 }
    /* +0xc10614 */ __asm { MOVDQA XMM9,XMM10 }
    /* +0xc10619 */ __asm { PMULUDQ XMM9,XMM3 }
    /* +0xc1061e */ __asm { PADDQ XMM9,XMM11 }
    /* +0xc10623 */ __asm { PSLLQ XMM9,0x20 }
    /* +0xc10629 */ __asm { PMULUDQ XMM10,XMM5 }
    /* +0xc1062e */ __asm { PADDQ XMM10,XMM9 }
    /* +0xc10633 */ __asm { MOVDQA XMM11,XMM13 }
    /* +0xc10638 */ __asm { PSRLQ XMM11,0xc }
    /* +0xc1063e */ __asm { MOVDQA XMM9,XMM13 }
    /* +0xc10643 */ __asm { PSLLQ XMM9,0x34 }
    /* +0xc10649 */ __asm { POR XMM9,XMM11 }
    /* +0xc1064e */ __asm { PXOR XMM9,XMM15 }
    /* +0xc10653 */ __asm { PXOR XMM9,XMM10 }
    /* +0xc10658 */ __asm { MOVDQA XMM15,XMM9 }
    /* +0xc1065d */ __asm { PSRLQ XMM15,0x6 }
    /* +0xc10663 */ __asm { MOVDQA XMM10,XMM9 }
    /* +0xc10668 */ __asm { PSLLQ XMM10,0x3a }
    /* +0xc1066e */ __asm { POR XMM10,XMM15 }
    /* +0xc10673 */ __asm { MOVDQA XMM11,XMM9 }
    /* +0xc10678 */ __asm { PXOR XMM11,XMM2 }
    /* +0xc1067d */ __asm { MOVDQA XMM15,XMM11 }
    /* +0xc10682 */ __asm { PMULUDQ XMM15,XMM4 }
    /* +0xc10687 */ __asm { MOVDQA XMM7,XMM11 }
    /* +0xc1068c */ __asm { PSRLQ XMM7,0x20 }
    /* +0xc10691 */ __asm { PMULUDQ XMM7,XMM1 }
    /* +0xc10695 */ __asm { PADDQ XMM7,XMM15 }
    /* +0xc1069a */ __asm { PSLLQ XMM7,0x20 }
    /* +0xc1069f */ __asm { PMULUDQ XMM11,XMM1 }
    /* +0xc106a4 */ __asm { PADDQ XMM11,XMM10 }
    /* +0xc106a9 */ __asm { PADDQ XMM11,XMM7 }
    /* +0xc106ae */ __asm { PXOR XMM11,XMM13 }
    /* +0xc106b3 */ __asm { MOVDQA XMM15,XMM2 }
    /* +0xc106b8 */ __asm { PXOR XMM15,XMM11 }
    /* +0xc106bd */ __asm { MOVDQA XMM13,XMM15 }
    /* +0xc106c2 */ __asm { PSRLQ XMM13,0x3d }
    /* +0xc106c8 */ __asm { PSLLQ XMM15,0x3 }
    /* +0xc106ce */ __asm { POR XMM13,XMM15 }
    /* +0xc106d3 */ __asm { MOVDQA XMM10,XMM11 }
    /* +0xc106d8 */ __asm { PSRLQ XMM10,0x1 }
    /* +0xc106de */ __asm { MOVDQA XMM7,XMM2 }
    /* +0xc106e2 */ __asm { PMULUDQ XMM7,XMM13 }
    /* +0xc106e7 */ __asm { PMULUDQ XMM13,XMM14 }
    /* +0xc106ec */ __asm { PSRLQ XMM15,0x20 }
    /* +0xc106f2 */ __asm { PMULUDQ XMM15,XMM2 }
    /* +0xc106f7 */ __asm { PADDQ XMM15,XMM13 }
    /* +0xc106fc */ __asm { PSLLQ XMM15,0x20 }
    /* +0xc10702 */ __asm { PADDQ XMM15,XMM7 }
    /* +0xc10707 */ __asm { PSUBQ XMM15,XMM10 }
    /* +0xc1070c */ __asm { PXOR XMM15,XMM9 }
    /* +0xc10711 */ __asm { MOVDQA XMM9,XMM15 }
    /* +0xc10716 */ __asm { PSRLQ XMM9,0x3 }
    /* +0xc1071c */ __asm { MOVDQA XMM13,XMM5 }
    /* +0xc10721 */ __asm { PXOR XMM13,XMM15 }
    /* +0xc10726 */ __asm { MOVDQA XMM10,XMM13 }
    /* +0xc1072b */ __asm { PSRLQ XMM10,0x3d }
    /* +0xc10731 */ __asm { PSLLQ XMM13,0x3 }
    /* +0xc10737 */ __asm { POR XMM10,XMM13 }
    /* +0xc1073c */ __asm { MOVDQA XMM7,XMM10 }
    /* +0xc10741 */ __asm { PMULUDQ XMM7,XMM0 }
    /* +0xc10745 */ __asm { PMULUDQ XMM10,XMM8 }
    /* +0xc1074a */ __asm { PSRLQ XMM13,0x20 }
    /* +0xc10750 */ __asm { PMULUDQ XMM13,XMM0 }
    /* +0xc10755 */ __asm { PADDQ XMM13,XMM10 }
    /* +0xc1075a */ __asm { PSLLQ XMM13,0x20 }
    /* +0xc10760 */ __asm { PADDQ XMM13,XMM7 }
    /* +0xc10765 */ __asm { PSUBQ XMM13,XMM9 }
    /* +0xc1076a */ __asm { CMP RDI,RAX }
    /* +0xc1076d */ __asm { JL 0x7fffa5380776 }
    /* +0xc1076f */ __asm { PXOR XMM11,XMM13 }
    /* +0xc10774 */ __asm { JMP 0x7fffa53807ab }
    /* +0xc10776 */ __asm { MOVDQA XMM8,XMM11 }
    /* +0xc1077b */ __asm { PSRLQ XMM8,0x20 }
    /* +0xc10781 */ __asm { PMULUDQ XMM8,XMM13 }
    /* +0xc10786 */ __asm { MOVDQA XMM9,XMM13 }
    /* +0xc1078b */ __asm { PSRLQ XMM9,0x20 }
    /* +0xc10791 */ __asm { PMULUDQ XMM9,XMM11 }
    /* +0xc10796 */ __asm { PADDQ XMM9,XMM8 }
    /* +0xc1079b */ __asm { PSLLQ XMM9,0x20 }
    /* +0xc107a1 */ __asm { PMULUDQ XMM11,XMM13 }
    /* +0xc107a6 */ __asm { PADDQ XMM11,XMM9 }
    /* +0xc107ab */ __asm { MOVQ XMM8,R10 }
    /* +0xc107b0 */ __asm { MOVQ XMM13,R11 }
    /* +0xc107b5 */ __asm { PUNPCKLQDQ XMM13,XMM8 }
    /* +0xc107ba */ __asm { MOVDQA XMM8,XMM11 }
    /* +0xc107bf */ __asm { PXOR XMM8,XMM12 }
    /* +0xc107c4 */ __asm { MOVDQA XMM9,XMM8 }
    /* +0xc107c9 */ __asm { PSRLQ XMM9,0x3 }
    /* +0xc107cf */ __asm { PSLLQ XMM8,0x3d }
    /* +0xc107d5 */ __asm { POR XMM8,XMM9 }
    /* +0xc107da */ __asm { PADDQ XMM8,XMM5 }
    /* +0xc107df */ __asm { MOVDQA XMM9,XMM14 }
    /* +0xc107e4 */ __asm { PMULUDQ XMM9,XMM8 }
    /* +0xc107e9 */ __asm { MOVDQA XMM10,XMM2 }
    /* +0xc107ee */ __asm { PMULUDQ XMM10,XMM8 }
    /* +0xc107f3 */ __asm { PSRLQ XMM8,0x20 }
    /* +0xc107f9 */ __asm { PMULUDQ XMM8,XMM2 }
    /* +0xc107fe */ __asm { PADDQ XMM8,XMM9 }
    /* +0xc10803 */ __asm { PSLLQ XMM8,0x20 }
    /* +0xc10809 */ __asm { PADDQ XMM8,XMM10 }
    /* +0xc1080e */ __asm { PXOR XMM15,XMM8 }
    /* +0xc10813 */ __asm { MOVDQA XMM9,XMM15 }
    /* +0xc10818 */ __asm { PSRLQ XMM9,0xf }
    /* +0xc1081e */ __asm { MOVDQA XMM10,XMM5 }
    /* +0xc10823 */ __asm { PXOR XMM10,XMM15 }
    /* +0xc10828 */ __asm { MOVDQA XMM7,XMM4 }
    /* +0xc1082c */ __asm { PMULUDQ XMM7,XMM10 }
    /* +0xc10831 */ __asm { MOVDQA XMM8,XMM1 }
    /* +0xc10836 */ __asm { PMULUDQ XMM8,XMM10 }
    /* +0xc1083b */ __asm { PSRLQ XMM10,0x20 }
    /* +0xc10841 */ __asm { PMULUDQ XMM10,XMM1 }
    /* +0xc10846 */ __asm { PADDQ XMM10,XMM7 }
    /* +0xc1084b */ __asm { PSLLQ XMM10,0x20 }
    /* +0xc10851 */ __asm { PADDQ XMM8,XMM9 }
    /* +0xc10856 */ __asm { PADDQ XMM8,XMM10 }
    /* +0xc1085b */ __asm { PXOR XMM8,XMM11 }
    /* +0xc10860 */ __asm { MOVDQA XMM11,XMM8 }
    /* +0xc10865 */ __asm { PXOR XMM11,XMM13 }
    /* +0xc1086a */ __asm { MOVDQA XMM9,XMM8 }
    /* +0xc1086f */ __asm { PSRLQ XMM9,0xa }
    /* +0xc10875 */ __asm { MOVDQA xmmword ptr [RDX],XMM11 }
    /* +0xc1087a */ __asm { PXOR XMM8,XMM5 }
    /* +0xc1087f */ __asm { MOVDQA XMM11,XMM14 }
    /* +0xc10884 */ __asm { PMULUDQ XMM11,XMM8 }
    /* +0xc10889 */ __asm { MOVDQA XMM10,XMM2 }
    /* +0xc1088e */ __asm { PMULUDQ XMM10,XMM8 }
    /* +0xc10893 */ __asm { PSRLQ XMM8,0x20 }
    /* +0xc10899 */ __asm { PMULUDQ XMM8,XMM2 }
    /* +0xc1089e */ __asm { PADDQ XMM8,XMM11 }
    /* +0xc108a3 */ __asm { PSLLQ XMM8,0x20 }
    /* +0xc108a9 */ __asm { PADDQ XMM10,XMM9 }
    /* +0xc108ae */ __asm { PADDQ XMM10,XMM8 }
    /* +0xc108b3 */ __asm { PXOR XMM10,XMM13 }
    /* +0xc108b8 */ __asm { PXOR XMM10,XMM15 }
    /* +0xc108bd */ __asm { MOVDQA xmmword ptr [RDX + -0x10],XMM10 }
    /* +0xc108c3 */ __asm { CMP R9,0xfd }
    /* +0xc108ca */ __asm { JA 0x7fffa530aab0 }
    /* +0xc108d0 */ __asm { ADD R9,0x2 }
    /* +0xc108d4 */ __asm { MOV RAX,0x2000000000 }
    /* +0xc108de */ __asm { ADD R10,RAX }
    /* +0xc108e1 */ __asm { ADD R11,R8 }
    /* +0xc108e4 */ __asm { ADD RDX,0x20 }
    /* +0xc108e8 */ __asm { JMP 0x7fffa5380500 }
}


// ============================================================================
// Function : FUN_7fffa5381000  |  RVA: 0xc11000  |  Size: 26898 bytes
// Callers  : FUN_7fffa5397bd1@0xc27bd1
// Callees  : FUN_7fffa530f3ed@0xb9f3ed, FUN_7fffa5322d86@0xbb2d86, FUN_7fffa52f3bc3@0xb83bc3, FUN_7fffa532595c@0xbb595c, FUN_7fffa5367aa0@0xbf7aa0, FUN_7fffa5327fcc@0xbb7fcc, FUN_7fffa5357654@0xbe7654, FUN_7fffa52fdac3@0xb8dac3
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5381000(void) {
    /* +0xb7945f */ __asm { MOV R11D,R8D }
    /* +0xb79462 */ __asm { OR R11D,0x1 }
    /* +0xb79466 */ __asm { MOV AX,0x320d }
    /* +0xb7946a */ __asm { IMUL EAX,R11D }
    /* +0xb7946e */ __asm { MOV R11D,EDI }
    /* +0xb79471 */ __asm { XOR R11D,EAX }
    /* +0xb79474 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb7947b */ __asm { ROR R11W,CL }
    /* +0xb7947f */ __asm { ADD R11D,-0x7e }
    /* +0xb79483 */ __asm { MOVZX R11D,R11W }
    /* +0xb79487 */ __asm { CMP R10D,R11D }
    /* +0xb7948a */ __asm { JNZ 0x7fffa52e9671 }
    /* +0xb79490 */ __asm { MOV R8D,0x496e895e }
    /* +0xb79496 */ __asm { MOV R11,0x9066045254ae06e }
    /* +0xb794a0 */ __asm { CMP R8,R11 }
    /* +0xb794a3 */ __asm { NOP }
    /* +0xb794a4 */ __asm { NOP }
    /* +0xb794a5 */ __asm { NOP }
    /* +0xb794a6 */ __asm { MOV R11,qword ptr [R8 + 0x368f76aa] }
    /* +0xb794ad */ __asm { MOV RDX,-0x758bcff022f88d1 }
    /* +0xb794b7 */ __asm { MOV RAX,R11 }
    /* +0xb794ba */ __asm { MUL RDX }
    /* +0xb794bd */ __asm { MOV R8,RDX }
    /* +0xb794c0 */ __asm { MOV EDX,0x146f7a7 }
    /* +0xb794c5 */ __asm { MOV RAX,R11 }
    /* +0xb794c8 */ __asm { MUL RDX }
    /* +0xb794cb */ __asm { ADD RAX,R8 }
    /* +0xb794ce */ __asm { ADC RDX,0x0 }
    /* +0xb794d2 */ __asm { TEST DL,0x1 }
    /* +0xb794d5 */ __asm { JNZ 0x7fffa52e97dc }
    /* +0xb794db */ __asm { MOV RSI,qword ptr [RBP + 0x1038] }
    /* +0xb794e2 */ __asm { MOV R10D,ESI }
    /* +0xb794e5 */ __asm { SUB R10D,EBX }
    /* +0xb794e8 */ __asm { LEA R11,[0x7fffa47bde34] }
    /* +0xb794ef */ __asm { MOV RDX,-0x7b5d84cd17a6d2d }
    /* +0xb794f9 */ __asm { MOV EAX,0x581b3d2e }
    /* +0xb794fe */ __asm { IMUL R9D,EAX,0x4c3ea919 }
    /* +0xb79505 */ __asm { MOV ECX,R12D }
    /* +0xb79508 */ __asm { ROL R9D,CL }
    /* +0xb7950b */ __asm { IMUL RDX,R11 }
    /* +0xb7950f */ __asm { ADD R9D,R10D }
    /* +0xb79512 */ __asm { SUB RDX,R9 }
    /* +0xb79515 */ __asm { MOV R8,-0x4816da9efbe3b367 }
    /* +0xb7951f */ __asm { IMUL R8,RDX }
    /* +0xb79523 */ __asm { MOV RDX,-0x24bbb61e9eb0e10a }
    /* +0xb7952d */ __asm { CMP R8,RDX }
    /* +0xb79530 */ __asm { JZ 0x7fffa5355ffe }
    /* +0xb79536 */ __asm { MOV AX,0xf8d2 }
    /* +0xb7953a */ __asm { MOV R10W,0xaf1e }
    /* +0xb7953f */ __asm { XOR R10D,0x5d76 }
    /* +0xb79546 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb7954d */ __asm { ROL R10W,CL }
    /* +0xb79551 */ __asm { XOR R10D,0xf353 }
    /* +0xb79558 */ __asm { MOV ECX,EDI }
    /* +0xb7955a */ __asm { ROL R10W,CL }
    /* +0xb7955e */ __asm { MOVZX R10D,R10W }
    /* +0xb79562 */ __asm { SUB EAX,R12D }
    /* +0xb79565 */ __asm { ADD EAX,0xffffbd77 }
    /* +0xb7956a */ __asm { IMUL EAX,R15D }
    /* +0xb7956e */ __asm { ADD EAX,ESI }
    /* +0xb79570 */ __asm { MOVZX R8D,AX }
    /* +0xb79574 */ __asm { MOV qword ptr [RBP + 0x5e0],RCX }
    /* +0xb7957b */ __asm { MOV EAX,dword ptr [R11 + -0xe98] }
    /* +0xb79582 */ __asm { JMP 0x7fffa52e97c4 }
    /* +0xb79587 */ __asm { MOV R10D,0x59ad89c8 }
    /* +0xb7958d */ __asm { SUB R10D,R12D }
    /* +0xb79590 */ __asm { XOR R10D,EDI }
    /* +0xb79593 */ __asm { SUB R10D,dword ptr [RBP + 0x1038] }
    /* +0xb7959a */ __asm { ROL R10D,0x13 }
    /* +0xb7959e */ __asm { MOV R8D,0xb3468477 }
    /* +0xb795a4 */ __asm { MOV R11,R8 }
    /* +0xb795a7 */ __asm { ADD R11,0x7aa2a2ac }
    /* +0xb795ae */ __asm { ROL R11,0x28 }
    /* +0xb795b2 */ __asm { ADD R11,R10 }
    /* +0xb795b5 */ __asm { MOV RDX,-0x50dbea03c93ae72f }
    /* +0xb795bf */ __asm { CMP R11,RDX }
    /* +0xb795c2 */ __asm { JZ 0x7fffa5352c63 }
    /* +0xb795c8 */ __asm { MOV R10D,dword ptr [R8 + -0x334881b3] }
    /* +0xb795cf */ __asm { MOV R11,0x5555555555555556 }
    /* +0xb795d9 */ __asm { IMUL R11,R10 }
    /* +0xb795dd */ __asm { MOV RDX,0x5555555555555555 }
    /* +0xb795e7 */ __asm { CMP R11,RDX }
    /* +0xb795ea */ __asm { JBE 0x7fffa52e98d7 }
    /* +0xb795f0 */ __asm { MOV R11,-0x61e1d25f7893d273 }
    /* +0xb795fa */ __asm { MOV RAX,R12 }
    /* +0xb795fd */ __asm { OR RAX,0x1 }
    /* +0xb79601 */ __asm { IMUL RAX,R11 }
    /* +0xb79605 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xb7960c */ __asm { MOV ECX,EDI }
    /* +0xb7960e */ __asm { ROR RAX,CL }
    /* +0xb79611 */ __asm { LEA R8,[0x7fffa47bf8b8] }
    /* +0xb79618 */ __asm { NOT RAX }
    /* +0xb7961b */ __asm { MOV ECX,EBX }
    /* +0xb7961d */ __asm { ROR RAX,CL }
    /* +0xb79620 */ __asm { CMP R8,RAX }
    /* +0xb79623 */ __asm { JZ 0x7fffa5356006 }
    /* +0xb79629 */ __asm { MOV R11W,0x4682 }
    /* +0xb7962e */ __asm { MOV R10W,0xe9aa }
    /* +0xb79633 */ __asm { ADD R10D,R12D }
    /* +0xb79636 */ __asm { SUB R11D,EDI }
    /* +0xb79639 */ __asm { ADD R11D,EBX }
    /* +0xb7963c */ __asm { ROL R11W,0xe }
    /* +0xb79641 */ __asm { MOV qword ptr [RBP + 0x5e0],RCX }
    /* +0xb79648 */ __asm { ROL R10W,0xa }
    /* +0xb7964d */ __asm { SUB R10D,EBX }
    /* +0xb79650 */ __asm { MOV ECX,EDI }
    /* +0xb79652 */ __asm { ROR R10W,CL }
    /* +0xb79656 */ __asm { MOVZX R10D,R10W }
    /* +0xb7965a */ __asm { NOT R11D }
    /* +0xb7965d */ __asm { MOV EAX,dword ptr [R8 + -0x3358] }
    /* +0xb79664 */ __asm { IMUL R11D,R9D }
    /* +0xb79671 */ __asm { MOV R8D,0x2a75b1cd }
    /* +0xb79677 */ __asm { MOV R11,0x7ef0776ae5cb2f2 }
    /* +0xb79681 */ __asm { CMP R8,R11 }
    /* +0xb79684 */ __asm { JZ 0x7fffa5352c73 }
    /* +0xb7968a */ __asm { MOV R11,qword ptr [R8 + 0x55884e3b] }
    /* +0xb79691 */ __asm { MOV RDX,-0x2fa78a054fb236f4 }
    /* +0xb7969b */ __asm { MOV RAX,R11 }
    /* +0xb7969e */ __asm { MUL RDX }
    /* +0xb796a1 */ __asm { MOV R8,RDX }
    /* +0xb796a4 */ __asm { MOV EDX,0x14738b6 }
    /* +0xb796a9 */ __asm { MOV RAX,R11 }
    /* +0xb796ac */ __asm { MUL RDX }
    /* +0xb796af */ __asm { ADD RAX,R8 }
    /* +0xb796b2 */ __asm { ADC RDX,0x0 }
    /* +0xb796b6 */ __asm { TEST DL,0x1 }
    /* +0xb796b9 */ __asm { JNZ 0x7fffa52e997c }
    /* +0xb796bf */ __asm { MOV R10D,0x983421b }
    /* +0xb796c5 */ __asm { MOV RSI,qword ptr [RBP + 0x1038] }
    /* +0xb796cc */ __asm { ADD R10D,ESI }
    /* +0xb796cf */ __asm { MOV ECX,EBX }
    /* +0xb796d1 */ __asm { ROR R10D,CL }
    /* +0xb796d4 */ __asm { ROL R10D,0x1b }
    /* +0xb796d8 */ __asm { XOR R10D,R12D }
    /* +0xb796db */ __asm { ADD R10D,0xfb3e2382 }
    /* +0xb796e2 */ __asm { LEA R11,[0x7fffa47bd26d] }
    /* +0xb796e9 */ __asm { MOV R8,R11 }
    /* +0xb796ec */ __asm { NOT R8 }
    /* +0xb796ef */ __asm { ADD R8,R10 }
    /* +0xb796f2 */ __asm { MOV RDX,0x4056bf10c7ce63b5 }
    /* +0xb796fc */ __asm { CMP R8,RDX }
    /* +0xb796ff */ __asm { JZ 0x7fffa535600e }
    /* +0xb79705 */ __asm { MOV R10W,0x8b1c }
    /* +0xb7970a */ __asm { XOR R10D,0x6f2 }
    /* +0xb79711 */ __asm { SUB R10D,R12D }
    /* +0xb79714 */ __asm { ROL R10W,0xb }
    /* +0xb79719 */ __asm { MOV AX,0xf061 }
    /* +0xb7971d */ __asm { XOR EAX,0xe534 }
    /* +0xb79722 */ __asm { ROL AX,0x2 }
    /* +0xb79726 */ __asm { SUB R10D,ESI }
    /* +0xb79729 */ __asm { NOT EAX }
    /* +0xb7972b */ __asm { IMUL R9D,EAX }
    /* +0xb7972f */ __asm { MOV ECX,EDI }
    /* +0xb79731 */ __asm { ROR R10W,CL }
    /* +0xb79735 */ __asm { MOVZX R10D,R10W }
    /* +0xb79739 */ __asm { MOVZX R8D,R9W }
    /* +0xb7973d */ __asm { MOV qword ptr [RBP + 0x5e0],RCX }
    /* +0xb79744 */ __asm { MOV EAX,dword ptr [R11 + -0xd0d] }
    /* +0xb7974b */ __asm { JMP 0x7fffa52e97c4 }
    /* +0xb797c4 */ __asm { LEA R9,[RBP + 0x120] }
    /* +0xb797cb */ __asm { LEA RDX,[RBP + 0x1210] }
    /* +0xb797d2 */ __asm { SYSCALL }
    /* +0xb797d4 */ __asm { MOV RDI,RSI }
    /* +0xb797d7 */ __asm { JMP 0x7fffa52e9aea }
    /* +0xb797dc */ __asm { RDTSC }
    /* +0xb797de */ __asm { SHL RDX,0x20 }
    /* +0xb797e2 */ __asm { OR RDX,RAX }
    /* +0xb797e5 */ __asm { MOV R11,-0x158b4ad174161d9b }
    /* +0xb797ef */ __asm { IMUL R11,RDX }
    /* +0xb797f3 */ __asm { MOV RDX,0x30366f75cdef6296 }
    /* +0xb797fd */ __asm { ADD RDX,R11 }
    /* +0xb79800 */ __asm { MOV RCX,RDX }
    /* +0xb79803 */ __asm { SHR RCX,0x3b }
    /* +0xb79807 */ __asm { MOV R10,RDX }
    /* +0xb7980a */ __asm { SHR R10,0x1b }
    /* +0xb7980e */ __asm { SHR RDX,0x2d }
    /* +0xb79812 */ __asm { XOR R10D,EDX }
    /* +0xb79815 */ __asm { ROR R10D,CL }
    /* +0xb79818 */ __asm { MOV dword ptr [RBP + 0x5e0],0x1800800a }
    /* +0xb79822 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb79829 */ __asm { CMP R11D,0x5a4e19a7 }
    /* +0xb79830 */ __asm { JNC 0x7fffa5356042 }
    /* +0xb79836 */ __asm { CMP R10D,0x43d9b0 }
    /* +0xb7983d */ __asm { JA 0x7fffa52e9863 }
    /* +0xb7983f */ __asm { MOV dword ptr [RBP + 0x5e0],0xf2237b8a }
    /* +0xb79849 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb79850 */ __asm { TEST R11D,R11D }
    /* +0xb79853 */ __asm { JNS 0x7fffa5368433 }
    /* +0xb798d7 */ __asm { MOV R11,-0x588691de64faf52d }
    /* +0xb798e1 */ __asm { LEA R8,[0x7fffa47c3993] }
    /* +0xb798e8 */ __asm { MOV R10,R8 }
    /* +0xb798eb */ __asm { ADD R10,0x727eac08 }
    /* +0xb798f2 */ __asm { ROL R10,0x22 }
    /* +0xb798f6 */ __asm { IMUL R11,R11,-0x826e8cb }
    /* +0xb798fd */ __asm { ADD R11,R12 }
    /* +0xb79900 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb79907 */ __asm { OR RCX,0x1 }
    /* +0xb7990b */ __asm { IMUL RCX,R11 }
    /* +0xb7990f */ __asm { NOT RCX }
    /* +0xb79912 */ __asm { IMUL RCX,R10 }
    /* +0xb79916 */ __asm { MOV R11,0x3da7a87d75ba82a6 }
    /* +0xb79920 */ __asm { CMP RCX,R11 }
    /* +0xb79923 */ __asm { NOP }
    /* +0xb79924 */ __asm { NOP }
    /* +0xb79925 */ __asm { NOP }
    /* +0xb79926 */ __asm { NOP }
    /* +0xb79927 */ __asm { NOP }
    /* +0xb79928 */ __asm { MOV qword ptr [RBP + 0x5e0],R11 }
    /* +0xb7992f */ __asm { MOV EAX,dword ptr [R8 + -0x7433] }
    /* +0xb79936 */ __asm { MOV R11W,0x4a00 }
    /* +0xb7993b */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xb79942 */ __asm { XOR R11D,EDX }
    /* +0xb79945 */ __asm { ROL R11W,0x2 }
    /* +0xb7994a */ __asm { MOV R10W,0xe425 }
    /* +0xb7994f */ __asm { XOR R10D,EDX }
    /* +0xb79952 */ __asm { ADD R10D,0x488d }
    /* +0xb79959 */ __asm { MOV ECX,EBX }
    /* +0xb7995b */ __asm { ROL R10W,CL }
    /* +0xb7995f */ __asm { ADD R10D,R12D }
    /* +0xb79962 */ __asm { MOVZX R8D,R10W }
    /* +0xb79966 */ __asm { IMUL R11D,R9D }
    /* +0xb7996a */ __asm { MOV ECX,EDI }
    /* +0xb7996c */ __asm { MOV RDI,RDX }
    /* +0xb7996f */ __asm { ROL R11W,CL }
    /* +0xb79973 */ __asm { MOVZX R10D,R11W }
    /* +0xb79977 */ __asm { JMP 0x7fffa52e9ada }
    /* +0xb7997c */ __asm { RDTSC }
    /* +0xb7997e */ __asm { SHL RDX,0x20 }
    /* +0xb79982 */ __asm { OR RDX,RAX }
    /* +0xb79985 */ __asm { MOV RCX,-0x4a9b10dd1385131b }
    /* +0xb7998f */ __asm { IMUL RCX,RDX }
    /* +0xb79993 */ __asm { MOV R11D,0x16f9b577 }
    /* +0xb79999 */ __asm { MOV RSI,qword ptr [RBP + 0x190] }
    /* +0xb799a0 */ __asm { LEA R8,[RSI + -0x930] }
    /* +0xb799a7 */ __asm { MOV RAX,-0x641962a839533873 }
    /* +0xb799b1 */ __asm { IMUL R8,RAX }
    /* +0xb799b5 */ __asm { MOV RDX,-0x4274d6a8a8f2e5c2 }
    /* +0xb799bf */ __asm { ADD RDX,RCX }
    /* +0xb799c2 */ __asm { MOV R10,RDX }
    /* +0xb799c5 */ __asm { SHR R10,0x3b }
    /* +0xb799c9 */ __asm { MOV RCX,RDX }
    /* +0xb799cc */ __asm { SHR RCX,0x1b }
    /* +0xb799d0 */ __asm { SHR RDX,0x2d }
    /* +0xb799d4 */ __asm { MOV R14D,0xe6a63bd1 }
    /* +0xb799da */ __asm { ADD R14D,EDI }
    /* +0xb799dd */ __asm { XOR R14D,dword ptr [RBP + 0x1038] }
    /* +0xb799e4 */ __asm { XOR EDX,ECX }
    /* +0xb799e6 */ __asm { ADD R11D,0xf9e46e40 }
    /* +0xb799ed */ __asm { MOV ECX,R12D }
    /* +0xb799f0 */ __asm { ROR R11D,CL }
    /* +0xb799f3 */ __asm { MOV ECX,R10D }
    /* +0xb799f6 */ __asm { ROR EDX,CL }
    /* +0xb799f8 */ __asm { ADD R11D,EBX }
    /* +0xb799fb */ __asm { IMUL R11D,dword ptr [RBP + 0xe8] }
    /* +0xb79a03 */ __asm { MOV R10D,0x8001fd3b }
    /* +0xb79a09 */ __asm { SUB R10D,R14D }
    /* +0xb79a0c */ __asm { ADD RAX,RSI }
    /* +0xb79a0f */ __asm { ADD RAX,-0x930 }
    /* +0xb79a15 */ __asm { CMP R10,R11 }
    /* +0xb79a18 */ __asm { CMOVLE RAX,R8 }
    /* +0xb79a1c */ __asm { MOV R11,-0x68565e3d37b88785 }
    /* +0xb79a26 */ __asm { CMP RAX,R11 }
    /* +0xb79a29 */ __asm { NOP }
    /* +0xb79a2a */ __asm { NOP }
    /* +0xb79a2b */ __asm { NOP }
    /* +0xb79a2c */ __asm { NOP }
    /* +0xb79a2d */ __asm { NOP }
    /* +0xb79a2e */ __asm { CMP EDX,0x407ff91 }
    /* +0xb79a34 */ __asm { MOV R14,qword ptr [RBP + 0x11d8] }
    /* +0xb79a3b */ __asm { JA 0x7fffa52e9a68 }
    /* +0xb79a3d */ __asm { NOP }
    /* +0xb79a3f */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb79a46 */ __asm { MOV R8,0x0 }
    /* +0xb79a4d */ __asm { MOV dword ptr [RBP + 0x5e0],0x2034d540 }
    /* +0xb79a57 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb79a5e */ __asm { TEST R11B,0x1 }
    /* +0xb79a62 */ __asm { JNZ 0x7fffa5368441 }
    /* +0xb79a68 */ __asm { LEA R11,[0x7fffa478b72d] }
    /* +0xb79a6f */ __asm { MOV RDX,-0x39deb873f4ff4386 }
    /* +0xb79a79 */ __asm { CMP R11,RDX }
    /* +0xb79a7c */ __asm { JZ 0x7fffa5356057 }
    /* +0xb79a82 */ __asm { MOV R10W,0xcd3b }
    /* +0xb79a87 */ __asm { IMUL R10D,R10D,0xbbf }
    /* +0xb79a8e */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb79a95 */ __asm { ROR R10W,CL }
    /* +0xb79a99 */ __asm { MOV ECX,EDI }
    /* +0xb79a9b */ __asm { ROL R10W,CL }
    /* +0xb79a9f */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb79aa6 */ __asm { ADD R10D,ECX }
    /* +0xb79aa9 */ __asm { NOT R10D }
    /* +0xb79aac */ __asm { MOVZX R10D,R10W }
    /* +0xb79ab0 */ __asm { MOV qword ptr [RBP + 0x5e0],R8 }
    /* +0xb79ab7 */ __asm { MOV AX,0x6e3 }
    /* +0xb79abb */ __asm { XOR EAX,0x9d9f }
    /* +0xb79ac0 */ __asm { ROL AX,0xd }
    /* +0xb79ac4 */ __asm { SUB EDI,ECX }
    /* +0xb79ac6 */ __asm { ADD EDI,EAX }
    /* +0xb79ac8 */ __asm { IMUL EDI,R9D }
    /* +0xb79acc */ __asm { MOVZX R8D,DI }
    /* +0xb79ad0 */ __asm { MOV RDI,RCX }
    /* +0xb79ad3 */ __asm { MOV EAX,dword ptr [R11 + -0x7165] }
    /* +0xb7a115 */ __asm { LEA RDX,[0x7fffa478eea9] }
    /* +0xb7a11c */ __asm { LEA R11,[0x7fffa47856c5] }
    /* +0xb7a123 */ __asm { MOV R10D,0xf2218bd1 }
    /* +0xb7a129 */ __asm { MOV R8,qword ptr [RBP + 0x480] }
    /* +0xb7a130 */ __asm { MOV EAX,R8D }
    /* +0xb7a133 */ __asm { MOV RSI,qword ptr [RBP + 0x1298] }
    /* +0xb7a13a */ __asm { SUB EAX,ESI }
    /* +0xb7a13c */ __asm { MOV R9W,0xb8e9 }
    /* +0xb7a141 */ __asm { ADD R9D,0x69ea }
    /* +0xb7a148 */ __asm { MOV ECX,EDI }
    /* +0xb7a14a */ __asm { ROR R9W,CL }
    /* +0xb7a14e */ __asm { ADD R9D,EAX }
    /* +0xb7a151 */ __asm { NOT R9D }
    /* +0xb7a154 */ __asm { MOV R8D,0x9860b318 }
    /* +0xb7a15a */ __asm { MOV EAX,0x6bd804d4 }
    /* +0xb7a15f */ __asm { SUB EAX,R8D }
    /* +0xb7a162 */ __asm { IMUL EAX,EBX }
    /* +0xb7a165 */ __asm { SUB EAX,ESI }
    /* +0xb7a167 */ __asm { XOR R10D,0x917077d8 }
    /* +0xb7a16e */ __asm { LEA R8,[0x7fffa478ffaa] }
    /* +0xb7a175 */ __asm { ADD R10D,0x3f6d177e }
    /* +0xb7a17c */ __asm { XOR R10D,EDI }
    /* +0xb7a17f */ __asm { IMUL R10D,R14D }
    /* +0xb7a183 */ __asm { XOR R10D,ESI }
    /* +0xb7a186 */ __asm { MOVSXD RCX,R10D }
    /* +0xb7a189 */ __asm { MOVZX ECX,uint8_t ptr [RDX + RCX*0x1 + 0x10] }
    /* +0xb7a18e */ __asm { MOVSX RDX,R9W }
    /* +0xb7a192 */ __asm { ADD RDX,R11 }
    /* +0xb7a195 */ __asm { MOVQ XMM0,qword ptr [RDX + RCX*0x8 + 0x1f] }
    /* +0xb7a19b */ __asm { PCMPEQD XMM2,XMM2 }
    /* +0xb7a19f */ __asm { PXOR XMM0,XMM2 }
    /* +0xb7a1a3 */ __asm { MOVDQA XMM5,XMM0 }
    /* +0xb7a1a7 */ __asm { PSRLW XMM5,0x4 }
    /* +0xb7a1ac */ __asm { PAND XMM5,xmmword ptr [0x7fffa56b8670] }
    /* +0xb7a1b4 */ __asm { PSLLW XMM0,0x4 }
    /* +0xb7a1b9 */ __asm { PAND XMM0,xmmword ptr [0x7fffa56b9c80] }
    /* +0xb7a1c1 */ __asm { POR XMM0,XMM5 }
    /* +0xb7a1c5 */ __asm { MOVSXD RCX,EAX }
    /* +0xb7a1c8 */ __asm { XOR RCX,-0x586f1fad }
    /* +0xb7a1cf */ __asm { MOVQ XMM5,qword ptr [R8 + RCX*0x1 + 0x40] }
    /* +0xb7a1d6 */ __asm { PXOR XMM5,XMM2 }
    /* +0xb7a1da */ __asm { PXOR XMM5,XMM0 }
    /* +0xb7a1de */ __asm { MOVQ qword ptr [RBP + 0x5e0],XMM5 }
    /* +0xb7a1e6 */ __asm { MOV RSI,qword ptr [RBP + 0x5e0] }
    /* +0xb7a1ed */ __asm { TEST RSI,RSI }
    /* +0xb7a1f0 */ __asm { JZ 0x7fffa52ea303 }
    /* +0xb7a1f6 */ __asm { MOV R11W,0xf265 }
    /* +0xb7a1fb */ __asm { MOV R9,qword ptr [RBP + 0x480] }
    /* +0xb7a202 */ __asm { MOV R10D,R9D }
    /* +0xb7a205 */ __asm { MOV EAX,EDI }
    /* +0xb7a207 */ __asm { OR EAX,0x1 }
    /* +0xb7a20a */ __asm { IMUL EAX,R11D }
    /* +0xb7a20e */ __asm { ROL AX,0x3 }
    /* +0xb7a212 */ __asm { MOV R12,qword ptr [RBP + 0x1298] }
    /* +0xb7a219 */ __asm { SUB R10D,R12D }
    /* +0xb7a21c */ __asm { ADD EAX,R10D }
    /* +0xb7a21f */ __asm { ROL AX,0xe }
    /* +0xb7a223 */ __asm { MOVZX R10D,AX }
    /* +0xb7a227 */ __asm { NOP }
    /* +0xb7a229 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb7a230 */ __asm { MOV R8,0x0 }
    /* +0xb7a237 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xb7a23b */ __asm { MOV RDX,-0x100000008a8 }
    /* +0xb7a245 */ __asm { XOR RDX,qword ptr [R11 + 0x60] }
    /* +0xb7a249 */ __asm { MOV R11,-0x77faf785d43905b7 }
    /* +0xb7a253 */ __asm { CMP RDX,R11 }
    /* +0xb7a256 */ __asm { JZ 0x7fffa52f6a54 }
    /* +0xb7a25c */ __asm { MOV R10D,0x68895e26 }
    /* +0xb7a262 */ __asm { SUB R10D,R9D }
    /* +0xb7a265 */ __asm { MOV ECX,R12D }
    /* +0xb7a268 */ __asm { ROR R10D,CL }
    /* +0xb7a26b */ __asm { LEA R11,[RSI + 0x2ee0] }
    /* +0xb7a272 */ __asm { NOT R10D }
    /* +0xb7a275 */ __asm { MOV ECX,EDI }
    /* +0xb7a277 */ __asm { ROL R10D,CL }
    /* +0xb7a27a */ __asm { MOV R10,qword ptr [R10] }
    /* +0xb7a27d */ __asm { MOV R8D,0x9ee84b89 }
    /* +0xb7a283 */ __asm { MOV EAX,0x6198661c }
    /* +0xb7a288 */ __asm { IMUL EAX,R15D }
    /* +0xb7a28c */ __asm { XOR R8D,EDI }
    /* +0xb7a28f */ __asm { ROL EAX,0x15 }
    /* +0xb7a292 */ __asm { MOV EDX,R10D }
    /* +0xb7a295 */ __asm { XOR EAX,R9D }
    /* +0xb7a298 */ __asm { SHR R10,0x18 }
    /* +0xb7a29c */ __asm { AND R10,-0x100 }
    /* +0xb7a2a3 */ __asm { NEG R8D }
    /* +0xb7a2a6 */ __asm { LEA R9D,[R12 + R8*0x1] }
    /* +0xb7a2aa */ __asm { ADD R9D,0xc000008e }
    /* +0xb7a2b1 */ __asm { ROL R9D,0x7 }
    /* +0xb7a2b5 */ __asm { ROR EAX,CL }
    /* +0xb7a2b7 */ __asm { MOV ECX,dword ptr [RAX] }
    /* +0xb7a2b9 */ __asm { IMUL RDX,RCX }
    /* +0xb7a2bd */ __asm { MOV R8,RCX }
    /* +0xb7a2c0 */ __asm { IMUL R8,R10 }
    /* +0xb7a2c4 */ __asm { OR R10,RCX }
    /* +0xb7a2c7 */ __asm { MOV ECX,0x2dcf64d2 }
    /* +0xb7a2cc */ __asm { IMUL ECX,EBX }
    /* +0xb7a2cf */ __asm { XOR ECX,R12D }
    /* +0xb7a2d2 */ __asm { ROL ECX,0x1b }
    /* +0xb7a2d5 */ __asm { SHR RDX,0x18 }
    /* +0xb7a2d9 */ __asm { XOR ECX,0xa0308d86 }
    /* +0xb7a2df */ __asm { CMP RCX,R9 }
    /* +0xb7a2e2 */ __asm { CMOVC R10,R8 }
    /* +0xb7a2e6 */ __asm { ADD R10,RDX }
    /* +0xb7a2e9 */ __asm { CMP R11,R10 }
    /* +0xb7a2ec */ __asm { JBE 0x7fffa52eab9a }
    /* +0xb7a2f2 */ __asm { MOV dword ptr [RBP + 0x5e0],0x2c62bae6 }
    /* +0xb7a2fc */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb7a303 */ __asm { PUSHFQ }
    /* +0xb7a304 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb7a30c */ __asm { POPFQ }
    /* +0xb7a30d */ __asm { MOV dword ptr [RBP + 0x5e0],0xb7deaf0f }
    /* +0xb7a317 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xb7a31e */ __asm { MOV qword ptr [RBP + 0x508],R10 }
    /* +0xb7a325 */ __asm { TEST R10D,R10D }
    /* +0xb7a328 */ __asm { MOV R9D,dword ptr [RBP + 0xa0] }
    /* +0xb7a32f */ __asm { JNS 0x7fffa5350623 }
    /* +0xb7a335 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb7a33c */ __asm { SUB R9D,ECX }
    /* +0xb7a33f */ __asm { MOV R11D,0x43a2ef86 }
    /* +0xb7a345 */ __asm { XOR R11D,EDI }
    /* +0xb7a348 */ __asm { NOT R11D }
    /* +0xb7a34b */ __asm { ROR R11D,CL }
    /* +0xb7a34e */ __asm { MOV RDX,qword ptr [RBP + 0x580] }
    /* +0xb7a355 */ __asm { MOV qword ptr [RBP + 0xf68],RDX }
    /* +0xb7a35c */ __asm { NOT R11D }
    /* +0xb7a35f */ __asm { ROL R11D,0x2 }
    /* +0xb7a363 */ __asm { MOV R8,qword ptr [RBP + 0x5b0] }
    /* +0xb7a36a */ __asm { MOV qword ptr [RBP + 0xf70],R8 }
    /* +0xb7a371 */ __asm { MOV dword ptr [RBP + 0x5e0],R11D }
    /* +0xb7a378 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb7a37f */ __asm { TEST R11B,0x1 }
    /* +0xb7a383 */ __asm { NOP }
    /* +0xb7a384 */ __asm { NOP }
    /* +0xb7a385 */ __asm { NOP }
    /* +0xb7a386 */ __asm { NOP }
    /* +0xb7a387 */ __asm { NOP }
    /* +0xb7a388 */ __asm { NOP }
    /* +0xb7a389 */ __asm { NOP }
    /* +0xb7a38a */ __asm { NOP }
    /* +0xb7a38b */ __asm { MOV R11W,0xff1f }
    /* +0xb7a390 */ __asm { SUB R11D,EDI }
    /* +0xb7a393 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb7a39a */ __asm { ROR R11W,CL }
    /* +0xb7a39e */ __asm { MOVZX R10D,R15W }
    /* +0xb7a3a2 */ __asm { MOV qword ptr [RBP + 0x4a0],R10 }
    /* +0xb7a3a9 */ __asm { IMUL R11D,R10D }
    /* +0xb7a3ad */ __asm { ADD R11D,0xffff9883 }
    /* +0xb7a3b4 */ __asm { MOVZX R10D,R11W }
    /* +0xb7a3b8 */ __asm { MOV R11D,0xa7 }
    /* +0xb7a3be */ __asm { ADD R11,qword ptr [RBP + 0xf68] }
    /* +0xb7a3c5 */ __asm { MOV RDX,qword ptr GS:[R10] }
    /* +0xb7a3c9 */ __asm { MOV EAX,0xbf4a6e15 }
    /* +0xb7a3ce */ __asm { ADD RAX,qword ptr [RDX + 0x18] }
    /* +0xb7a3d2 */ __asm { ROL RAX,0x23 }
    /* +0xb7a3d6 */ __asm { MOV R8,-0x50fac3d840f56d33 }
    /* +0xb7a3e0 */ __asm { XOR RAX,0x662f1749 }
    /* +0xb7a3e6 */ __asm { MOV RDX,-0x3794e5e63087f7f }
    /* +0xb7a3f0 */ __asm { MOV qword ptr [RBP + 0x5c0],RAX }
    /* +0xb7a3f7 */ __asm { CMP RAX,RDX }
    /* +0xb7a3fa */ __asm { NOP }
    /* +0xb7a3fb */ __asm { NOP }
    /* +0xb7a3fc */ __asm { NOP }
    /* +0xb7a3fd */ __asm { NOP }
    /* +0xb7a3fe */ __asm { NOP }
    /* +0xb7a3ff */ __asm { NOP }
    /* +0xb7a400 */ __asm { NOP }
    /* +0xb7a401 */ __asm { NOP }
    /* +0xb7a402 */ __asm { NOP }
    /* +0xb7a403 */ __asm { MOV qword ptr [RBP + 0x1350],RSI }
    /* +0xb7a40a */ __asm { MOVZX ESI,R9W }
    /* +0xb7a40e */ __asm { MOV R10D,dword ptr [RBP + 0x390] }
    /* +0xb7a415 */ __asm { AND dword ptr [RBP + 0x560],R10D }
    /* +0xb7a41c */ __asm { MOV R10W,0x1cae }
    /* +0xb7a421 */ __asm { MOV R12,qword ptr [RBP + 0x1298] }
    /* +0xb7a428 */ __asm { ADD R10D,R12D }
    /* +0xb7a42b */ __asm { MOV ECX,EDI }
    /* +0xb7a42d */ __asm { OR ECX,0x1 }
    /* +0xb7a430 */ __asm { MOV qword ptr [RBP + 0x498],RCX }
    /* +0xb7a437 */ __asm { IMUL R10D,ECX }
    /* +0xb7a43b */ __asm { XOR R10D,0xffff81a1 }
    /* +0xb7a442 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb7a449 */ __asm { SUB R10D,ECX }
    /* +0xb7a44c */ __asm { MOVZX R10D,R10W }
    /* +0xb7a450 */ __asm { MOV RDX,qword ptr GS:[R10] }
    /* +0xb7a454 */ __asm { MOV R8,qword ptr [RDX + 0x30] }
    /* +0xb7a458 */ __asm { MOV RAX,0xbaada2c1e089d5f }
    /* +0xb7a462 */ __asm { ADD RAX,-0x2b81ee4f }
    /* +0xb7a468 */ __asm { MOV RDX,0xbaada2b73d471df }
    /* +0xb7a472 */ __asm { XOR R10D,R10D }
    /* +0xb7a475 */ __asm { CMP R8,RDX }
    /* +0xb7a478 */ __asm { SETG R10B }
    /* +0xb7a47c */ __asm { MOV EDX,0x6f730f3b }
    /* +0xb7a481 */ __asm { XOR RAX,RCX }
    /* +0xb7a484 */ __asm { MOV R9D,0x53b4b7dc }
    /* +0xb7a48a */ __asm { ADD R9D,ECX }
    /* +0xb7a48d */ __asm { ADD EDX,0x9d715100 }
    /* +0xb7a493 */ __asm { ROL EDX,0xd }
    /* +0xb7a496 */ __asm { ROL EDX,CL }
}


// ============================================================================
// Function : FUN_7fffa53819b7  |  RVA: 0xc119b7  |  Size: 6709 bytes
// Callers  : FUN_7fffa5378e0b@0xc08e0b
// Callees  : FUN_7fffa5315660@0xba5660, FUN_7fffa5332adf@0xbc2adf, FUN_7fffa5397672@0xc27672
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa53819b7(void) {
    /* +0xc119b7 */ __asm { MOVZX EDX,R9W }
    /* +0xc119bb */ __asm { LEA R9,[RBP + 0x280] }
    /* +0xc119c2 */ __asm { MOV qword ptr [RSP + 0x30],R9 }
    /* +0xc119c7 */ __asm { MOV dword ptr [RSP + 0x28],R11D }
    /* +0xc119cc */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xc119d3 */ __asm { SYSCALL }
    /* +0xc119d5 */ __asm { MOV dword ptr [RBP + 0x120],0x1271b9fe }
    /* +0xc119df */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xc119e6 */ __asm { CMP R11D,0x60cd242a }
    /* +0xc119ed */ __asm { JNC 0x7fffa5397d5a }
    /* +0xc119f3 */ __asm { MOV dword ptr [RBP + 0x5e0],0x20000008 }
    /* +0xc119fd */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc11a04 */ __asm { TEST R11B,0x1 }
    /* +0xc11a08 */ __asm { JNZ 0x7fffa5397d62 }
    /* +0xc11a0e */ __asm { MOV dword ptr [RBP + 0x5e0],0x482f0a80 }
    /* +0xc11a18 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc11a1f */ __asm { CMP R11D,0x39b58551 }
    /* +0xc11a26 */ __asm { NOP }
    /* +0xc11a27 */ __asm { NOP }
    /* +0xc11a28 */ __asm { NOP }
    /* +0xc11a29 */ __asm { NOP }
    /* +0xc11a2a */ __asm { NOP }
    /* +0xc11a2b */ __asm { NOP }
    /* +0xc11a2c */ __asm { MOV ECX,0x5 }
    /* +0xc11a31 */ __asm { INT 0x29 }
    /* +0xc11a33 */ __asm { OR.LOCK dword ptr [RAX + 0x6680f641],0x14fb89b }
    /* +0xc11a3e */ __asm { JZ 0x7fffa5332554 }
    /* +0xc11a44 */ __asm { PXOR XMM0,XMM0 }
    /* +0xc11a48 */ __asm { MOVDQA xmmword ptr [RBP + 0x5e0],XMM0 }
    /* +0xc11a50 */ __asm { MOV R11W,0x17a2 }
    /* +0xc11a55 */ __asm { IMUL R11D,R11D,0x793 }
    /* +0xc11a5c */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xc11a63 */ __asm { ROR R11W,CL }
    /* +0xc11a67 */ __asm { NOT R11D }
    /* +0xc11a6a */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc11a71 */ __asm { ROL R11W,CL }
    /* +0xc11a75 */ __asm { NOT R11D }
    /* +0xc11a78 */ __asm { MOVZX R10D,R11W }
    /* +0xc11a7c */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xc11a80 */ __asm { MOV R11,qword ptr [R11 + 0x18] }
    /* +0xc11a84 */ __asm { MOV R8,0x7e608481344e4507 }
    /* +0xc11a8e */ __asm { XOR R8,R11 }
    /* +0xc11a91 */ __asm { MOV R11,-0x508e5c7a93901d47 }
    /* +0xc11a9b */ __asm { CMP R8,R11 }
    /* +0xc11a9e */ __asm { JNZ 0x7fffa5381aa1 }
    /* +0xc11aa0 */ __asm { XCHG EAX,EBP }
    /* +0xc11aa1 */ __asm { MOV dword ptr [RBP + 0x5e0],0x0 }
    /* +0xc11aab */ __asm { MOV dword ptr [RBP + 0x1070],0x463f6cb9 }
    /* +0xc11ab5 */ __asm { MOV R11D,dword ptr [RBP + 0x1070] }
    /* +0xc11abc */ __asm { MOV R10W,0x37cb }
    /* +0xc11ac1 */ __asm { XOR R10D,0x8c78 }
    /* +0xc11ac8 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc11acf */ __asm { ROL R10W,CL }
    /* +0xc11ad3 */ __asm { AND R11D,0x1 }
    /* +0xc11ad7 */ __asm { IMUL R10D,dword ptr [RBP + 0x188] }
    /* +0xc11adf */ __asm { SUB R10D,dword ptr [RBP + 0x1298] }
    /* +0xc11ae6 */ __asm { ADD R10D,0xffffc158 }
    /* +0xc11aed */ __asm { MOVZX R10D,R10W }
    /* +0xc11af1 */ __asm { CMP R11D,R10D }
    /* +0xc11af4 */ __asm { NOP }
    /* +0xc11af5 */ __asm { NOP }
    /* +0xc11af6 */ __asm { NOP }
    /* +0xc11af7 */ __asm { NOP }
    /* +0xc11af8 */ __asm { NOP }
    /* +0xc11af9 */ __asm { NOP }
    /* +0xc11afa */ __asm { NOP }
    /* +0xc11afb */ __asm { NOP }
    /* +0xc11afc */ __asm { NOP }
    /* +0xc11afd */ __asm { NOP }
    /* +0xc11afe */ __asm { NOP }
    /* +0xc11aff */ __asm { NOP }
    /* +0xc11b00 */ __asm { NOP }
    /* +0xc11b01 */ __asm { NOP }
    /* +0xc11b02 */ __asm { NOP }
    /* +0xc11b03 */ __asm { MOV R11W,0x6cf4 }
    /* +0xc11b08 */ __asm { MOV RDX,qword ptr [RBP + 0x498] }
    /* +0xc11b0f */ __asm { MOV R10D,EDX }
    /* +0xc11b12 */ __asm { IMUL R10D,R11D }
    /* +0xc11b16 */ __asm { MOV R8,0x0 }
    /* +0xc11b1d */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xc11b24 */ __asm { NOP }
    /* +0xc11b26 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xc11b2d */ __asm { XOR R10D,ECX }
    /* +0xc11b30 */ __asm { MOV R11D,0xfffff34f }
    /* +0xc11b36 */ __asm { SUB R11D,R10D }
    /* +0xc11b39 */ __asm { MOVZX R10D,R11W }
    /* +0xc11b3d */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xc11b41 */ __asm { MOV R11,qword ptr [R11 + 0x18] }
    /* +0xc11b45 */ __asm { MOV R8W,0x36e8 }
    /* +0xc11b4a */ __asm { MOV R10,qword ptr [RBP + 0x1038] }
    /* +0xc11b51 */ __asm { SUB R10D,ECX }
    /* +0xc11b54 */ __asm { ADD R10D,R8D }
    /* +0xc11b57 */ __asm { ADD R10D,0xfffff1c5 }
    /* +0xc11b5e */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xc11b65 */ __asm { ROL R10W,CL }
    /* +0xc11b69 */ __asm { MOVZX R10D,R10W }
    /* +0xc11b6d */ __asm { MOV EDX,0x2d720658 }
    /* +0xc11b72 */ __asm { MOV R8D,0x3c0 }
    /* +0xc11b78 */ __asm { ADD R8,qword ptr GS:[R10] }
    /* +0xc11b7c */ __asm { XOR R8,R11 }
    /* +0xc11b7f */ __asm { IMUL EDX,dword ptr [RBP + 0xe8] }
    /* +0xc11b86 */ __asm { NOT EDX }
    /* +0xc11b88 */ __asm { MOV R11,0x7c1d25c377341391 }
    /* +0xc11b92 */ __asm { IMUL R11,R8 }
    /* +0xc11b96 */ __asm { NOT R11 }
    /* +0xc11b99 */ __asm { ROR EDX,0x1 }
    /* +0xc11b9b */ __asm { ROL EDX,CL }
    /* +0xc11b9d */ __asm { SUB R11,RDX }
    /* +0xc11ba0 */ __asm { MOV RDX,-0x641f61195f93954a }
    /* +0xc11baa */ __asm { CMP R11,RDX }
    /* +0xc11bad */ __asm { NOP }
    /* +0xc11bae */ __asm { NOP }
    /* +0xc11baf */ __asm { NOP }
    /* +0xc11bb0 */ __asm { NOP }
    /* +0xc11bb1 */ __asm { NOP }
    /* +0xc11bb2 */ __asm { NOP }
    /* +0xc11bb3 */ __asm { NOP }
    /* +0xc11bb4 */ __asm { NOP }
    /* +0xc11bb5 */ __asm { NOP }
    /* +0xc11bb6 */ __asm { NOP }
    /* +0xc11bb7 */ __asm { LEA R11,[0x7fffa4784ce2] }
    /* +0xc11bbe */ __asm { MOV RDX,0x3d7c86e2b04584d3 }
    /* +0xc11bc8 */ __asm { CMP R11,RDX }
    /* +0xc11bcb */ __asm { NOP }
    /* +0xc11bcc */ __asm { NOP }
    /* +0xc11bcd */ __asm { NOP }
    /* +0xc11bce */ __asm { NOP }
    /* +0xc11bcf */ __asm { NOP }
    /* +0xc11bd0 */ __asm { MOV R10W,0xf647 }
    /* +0xc11bd5 */ __asm { MOV R9,qword ptr [RBP + 0x188] }
    /* +0xc11bdc */ __asm { IMUL R10D,R9D }
    /* +0xc11be0 */ __asm { MOV R8W,0x7dc9 }
    /* +0xc11be5 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc11bec */ __asm { SUB R8D,ECX }
    /* +0xc11bef */ __asm { ADD R8D,0xfffff026 }
    /* +0xc11bf6 */ __asm { MOV RDI,qword ptr [RBP + 0x1298] }
    /* +0xc11bfd */ __asm { ADD R10D,EDI }
    /* +0xc11c00 */ __asm { IMUL R10D,R10D,0x443 }
    /* +0xc11c07 */ __asm { ROR R10W,CL }
    /* +0xc11c0b */ __asm { LEA RSI,[0x7fffa478bba4] }
    /* +0xc11c12 */ __asm { MOVSX RDX,R10W }
    /* +0xc11c16 */ __asm { IMUL R8D,R9D }
    /* +0xc11c1a */ __asm { MOV R10D,0x6d71c067 }
    /* +0xc11c20 */ __asm { IMUL R10D,dword ptr [RBP + 0x11d8] }
    /* +0xc11c28 */ __asm { ADD R10D,0x6a5f41ae }
    /* +0xc11c2f */ __asm { ROR R10D,CL }
    /* +0xc11c32 */ __asm { MOV ECX,EDI }
    /* +0xc11c34 */ __asm { ROL R10D,CL }
    /* +0xc11c37 */ __asm { ROL R8W,0xd }
    /* +0xc11c3c */ __asm { XOR R10D,0x664a0136 }
    /* +0xc11c43 */ __asm { MOV AX,0xeacb }
    /* +0xc11c47 */ __asm { SUB EAX,EDI }
    /* +0xc11c49 */ __asm { ROL AX,0xc }
    /* +0xc11c4d */ __asm { MOVSXD R10,R10D }
    /* +0xc11c50 */ __asm { ADD EAX,0x7164 }
    /* +0xc11c55 */ __asm { MOVZX R9D,AX }
    /* +0xc11c59 */ __asm { MOV qword ptr [RBP + 0x1070],RCX }
    /* +0xc11c60 */ __asm { MOV EAX,dword ptr [RDX + R11*0x1 + 0x58] }
    /* +0xc11c65 */ __asm { ADD R8D,EDI }
    /* +0xc11c68 */ __asm { MOVZX EDX,R8W }
    /* +0xc11c6c */ __asm { LEA R8,[RBP + 0x5e0] }
    /* +0xc11c73 */ __asm { SYSCALL }
    /* +0xc11c75 */ __asm { MOV R11,-0x74bc109d79f8b3ce }
    /* +0xc11c7f */ __asm { CMP RSI,R11 }
    /* +0xc11c82 */ __asm { JZ 0x7fffa53849e8 }
    /* +0xc11c88 */ __asm { MOV R8,RSI }
    /* +0xc11c8b */ __asm { OR R8,-0x6e40 }
    /* +0xc11c92 */ __asm { ADD RSI,-0x6e40 }
    /* +0xc11c99 */ __asm { MOV R10D,0xc34b87b0 }
    /* +0xc11c9f */ __asm { MOV R11D,0x8ac263f }
    /* +0xc11ca5 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xc11cac */ __asm { XOR R10D,EDI }
    /* +0xc11caf */ __asm { ADD R11D,0x400f39e7 }
    /* +0xc11cb6 */ __asm { IMUL EDX,R10D,0x7ffe0031 }
    /* +0xc11cbd */ __asm { MOV R13,qword ptr [RBP + 0x480] }
    /* +0xc11cc4 */ __asm { SUB EDX,R13D }
    /* +0xc11cc7 */ __asm { ADD EDX,0xeedf69ff }
    /* +0xc11ccd */ __asm { IMUL EDX,dword ptr [RBP + 0xd0] }
    /* +0xc11cd4 */ __asm { XOR R11D,R13D }
    /* +0xc11cd7 */ __asm { MOV ECX,EDI }
    /* +0xc11cd9 */ __asm { ROL R11D,CL }
    /* +0xc11cdc */ __asm { MOV qword ptr [RBP + 0x1070],R10 }
    /* +0xc11ce3 */ __asm { MOV EAX,0x14f1f365 }
    /* +0xc11ce8 */ __asm { MOV R10D,0x659a4358 }
    /* +0xc11cee */ __asm { SUB R10D,EAX }
    /* +0xc11cf1 */ __asm { IMUL R10D,dword ptr [RBP + 0x11d8] }
    /* +0xc11cf9 */ __asm { MOV R12,qword ptr [RBP + 0x1298] }
    /* +0xc11d00 */ __asm { MOV ECX,R12D }
    /* +0xc11d03 */ __asm { ROL R10D,CL }
    /* +0xc11d06 */ __asm { MOV R9D,0x2778bc1c }
    /* +0xc11d0c */ __asm { XOR R9D,R12D }
    /* +0xc11d0f */ __asm { MOV RBX,qword ptr [RBP + 0xe8] }
    /* +0xc11d16 */ __asm { IMUL R9D,EBX }
    /* +0xc11d1a */ __asm { MOV ECX,R13D }
    /* +0xc11d1d */ __asm { ROL R9D,CL }
    /* +0xc11d20 */ __asm { XOR R11D,R12D }
    /* +0xc11d23 */ __asm { MOV AX,0x3288 }
    /* +0xc11d27 */ __asm { ADD EAX,0x64a1 }
    /* +0xc11d2c */ __asm { MOV ECX,EDI }
    /* +0xc11d2e */ __asm { ROR AX,CL }
    /* +0xc11d31 */ __asm { IMUL EAX,dword ptr [RBP + 0x188] }
    /* +0xc11d38 */ __asm { NOT EAX }
    /* +0xc11d3a */ __asm { ADD EAX,R12D }
    /* +0xc11d3d */ __asm { NOT R9D }
    /* +0xc11d40 */ __asm { CMP R9,R10 }
    /* +0xc11d43 */ __asm { CMOVC RSI,R8 }
    /* +0xc11d47 */ __asm { NOT R11D }
    /* +0xc11d4a */ __asm { MOVSXD R10,R11D }
    /* +0xc11d4d */ __asm { MOVZX R8D,AX }
    /* +0xc11d51 */ __asm { MOV EAX,dword ptr [RSI + 0x40] }
    /* +0xc11d54 */ __asm { MOV qword ptr [RSP + 0x28],RDX }
    /* +0xc11d59 */ __asm { MOV qword ptr [RSP + 0x30],0x0 }
    /* +0xc11d62 */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xc11d69 */ __asm { MOV RDX,qword ptr [RBP + 0x458] }
    /* +0xc11d70 */ __asm { SYSCALL }
    /* +0xc11d72 */ __asm { MOV R12,qword ptr [RBP + 0x1048] }
    /* +0xc11d79 */ __asm { MOV R15,qword ptr [RBP + 0x4a0] }
    /* +0xc11d80 */ __asm { JMP 0x7fffa5333449 }
    /* +0xc11d9f */ __asm { XOR qword ptr [RDI + -0x4e7f917],-0x7008bc01 }
    /* +0xc11daa */ __asm { JMP 0x7fffa53337fb }
    /* +0xc11db5 */ __asm { STI }
    /* +0xc11db7 */ __asm { JS 0x7fffa5381db5 }
    /* +0xc11db9 */ __asm { OUT DX,EAX }
    /* +0xc11dba */ __asm { OR AL,CL }
    /* +0xc11dbc */ __asm { CLD }
    /* +0xc11dbd */ __asm { POP RBX }
    /* +0xc11dbe */ __asm { JGE 0x7fffa5381d73 }
    /* +0xc11dc0 */ __asm { POP RBX }
    /* +0xc11dc1 */ __asm { PUSH RBX }
    /* +0xc11dc2 */ __asm { POP RDX }
    /* +0xc11dc3 */ __asm { JMP 0x7fffa5333b34 }
    /* +0xc11dc8 */ __asm { MOV R11,-0x3205b08587de2dc1 }
    /* +0xc11dd2 */ __asm { MOV R8,qword ptr [RBP + 0x1038] }
    /* +0xc11dd9 */ __asm { SUB R8,qword ptr [RBP + 0x1298] }
    /* +0xc11de0 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xc11de7 */ __asm { ADD RCX,R8 }
    /* +0xc11dea */ __asm { ADD RCX,R11 }
    /* +0xc11ded */ __asm { ROL RCX,0x3c }
    /* +0xc11df1 */ __asm { ADD RCX,-0x6c37836e }
    /* +0xc11df8 */ __asm { LEA R8,[0x7fffa47b8dad] }
    /* +0xc11dff */ __asm { MOV R11,R8 }
    /* +0xc11e02 */ __asm { IMUL R11,RCX }
    /* +0xc11e06 */ __asm { XOR R11,0x47ea5d11 }
    /* +0xc11e0d */ __asm { MOV RDX,-0x2b01cbd93f94c081 }
    /* +0xc11e17 */ __asm { CMP R11,RDX }
    /* +0xc11e1a */ __asm { NOP }
    /* +0xc11e1b */ __asm { NOP }
    /* +0xc11e1c */ __asm { NOP }
    /* +0xc11e1d */ __asm { NOP }
    /* +0xc11e1e */ __asm { NOP }
    /* +0xc11e1f */ __asm { NOP }
    /* +0xc11e20 */ __asm { NOP }
    /* +0xc11e21 */ __asm { NOP }
    /* +0xc11e22 */ __asm { NOP }
    /* +0xc11e23 */ __asm { NOP }
    /* +0xc11e24 */ __asm { NOP }
    /* +0xc11e25 */ __asm { NOP }
    /* +0xc11e26 */ __asm { NOP }
    /* +0xc11e27 */ __asm { NOP }
    /* +0xc11e28 */ __asm { NOP }
    /* +0xc11e29 */ __asm { NOP }
    /* +0xc11e2a */ __asm { NOP }
    /* +0xc11f6b */ __asm { MOV R8D,0x20f45407 }
    /* +0xc11f71 */ __asm { MOV R11,-0x6ce128135e3bb031 }
    /* +0xc11f7b */ __asm { CMP R8,R11 }
    /* +0xc11f7e */ __asm { NOP }
    /* +0xc11f7f */ __asm { NOP }
    /* +0xc11f80 */ __asm { NOP }
    /* +0xc11f81 */ __asm { NOP }
    /* +0xc11f82 */ __asm { NOP }
    /* +0xc11f83 */ __asm { MOV R11D,0x77948f21 }
    /* +0xc11f89 */ __asm { SUB R11D,dword ptr [RBP + 0x1298] }
    /* +0xc11f90 */ __asm { MOV R10,qword ptr [RBP + 0x11d8] }
    /* +0xc11f97 */ __asm { IMUL R10D,R11D }
    /* +0xc11f9b */ __asm { XOR R10D,0x49924db7 }
    /* +0xc11fa2 */ __asm { ROL R10D,0xb }
    /* +0xc11fa6 */ __asm { MOV R11,qword ptr [R8 + 0x5f09ac01] }
    /* +0xc11fad */ __asm { SUB R10D,dword ptr [RBP + 0x1038] }
    /* +0xc11fb4 */ __asm { MOV EDX,0xcb45d266 }
    /* +0xc11fb9 */ __asm { CMP R10,RDX }
    /* +0xc11fbc */ __asm { SETZ CL }
    /* +0xc11fbf */ __asm { MOV RDX,0x7580967257315151 }
    /* +0xc11fc9 */ __asm { MOV RAX,R11 }
    /* +0xc11fcc */ __asm { MUL RDX }
    /* +0xc11fcf */ __asm { MOV R8,RDX }
    /* +0xc11fd2 */ __asm { MOV EDX,0x14630de }
    /* +0xc11fd7 */ __asm { MOV RAX,R11 }
    /* +0xc11fda */ __asm { MUL RDX }
    /* +0xc11fdd */ __asm { ADD RAX,R8 }
    /* +0xc11fe0 */ __asm { ADC RDX,0x0 }
    /* +0xc11fe4 */ __asm { TEST DL,0x1 }
    /* +0xc11fe7 */ __asm { SETZ R10B }
    /* +0xc11feb */ __asm { OR R10B,CL }
    /* +0xc11fee */ __asm { JZ 0x7fffa53849f0 }
    /* +0xc11ff4 */ __asm { LEA R8,[0x7fffa47b4f0a] }
    /* +0xc11ffb */ __asm { MOV R11,-0x39be51d2319e39f3 }
    /* +0xc12005 */ __asm { CMP R8,R11 }
    /* +0xc12008 */ __asm { NOP }
    /* +0xc12009 */ __asm { NOP }
    /* +0xc1200a */ __asm { NOP }
    /* +0xc1200b */ __asm { NOP }
    /* +0xc1200c */ __asm { MOV EDX,0x3179078 }
    /* +0xc12011 */ __asm { MOV R11D,0x1d5ea4c4 }
    /* +0xc12017 */ __asm { SUB EDX,dword ptr [RBP + 0x1298] }
    /* +0xc1201d */ __asm { XOR EDX,0x4a242a0d }
    /* +0xc12023 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc1202a */ __asm { ROL EDX,CL }
    /* +0xc1202c */ __asm { ADD EDX,dword ptr [RBP + 0x480] }
    /* +0xc12032 */ __asm { ROL EDX,0x9 }
    /* +0xc12035 */ __asm { ADD R11D,0xd3ff29c7 }
    /* +0xc1203c */ __asm { XOR R11D,ECX }
    /* +0xc1203f */ __asm { ADD R11D,dword ptr [RBP + 0xfe0] }
    /* +0xc12046 */ __asm { ROL R11D,0xc }
    /* +0xc1204a */ __asm { MOVSXD R10,R11D }
    /* +0xc1204d */ __asm { MOV qword ptr [RBP + 0x5e0],R11 }
    /* +0xc12054 */ __asm { MOV EAX,dword ptr [R8 + 0x75d2] }
    /* +0xc1205b */ __asm { SYSCALL }
    /* +0xc1205d */ __asm { NOP }
    /* +0xc1205e */ __asm { JMP 0x7fffa52ebf26 }
    /* +0xc1206b */ __asm { XCHG EAX,ECX }
    /* +0xc1206c */ __asm { XCHG EAX,ESP }
    /* +0xc1206d */ __asm { MOV EAX,EAX }
    /* +0xc12077 */ __asm { IMUL R8,qword ptr [R9 + RBP*0x8 + -0x6c44e],0x498d81f3 }
    /* +0xc12083 */ __asm { CMP EAX,EAX }
    /* +0xc12085 */ __asm { JNZ 0x7fffa5315cc6 }
    /* +0xc1208b */ __asm { JMP 0x7fffa5315cc7 }
    /* +0xc123d2 */ __asm { ADD uint8_t ptr [RSI + -0x70],AH }
    /* +0xc123d5 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xc123dc */ __asm { ENTER 0x7fac,0x1 }
    /* +0xc123e0 */ __asm { CMP EDX,0x10a8015 }
    /* +0xc123e6 */ __asm { JBE 0x7fffa52f3204 }
    /* +0xc123ec */ __asm { JMP 0x7fffa52f3550 }
    /* +0xc123f1 */ __asm { IMUL R15,qword ptr [RCX + RBP*0x8 + -0x8ee8f],-0x165596ca }
    /* +0xc12401 */ __asm { MOV [0x763bd9bc4e5bd7b8],EAX }
    /* +0xc1240a */ __asm { ADD AL,AH }
    /* +0xc1240c */ __asm { CMPSD RDI,RSI }
    /* +0xc1240d */ __asm { LODSD RSI }
    /* +0xc1240e */ __asm { JMP 0x7fffa52f6d1a }
    /* +0xc1242b */ __asm { IMUL R11,qword ptr [R9 + R13*0x8 + -0x7a1ac],0x6ed4c7f1 }
    /* +0xc12437 */ __asm { JP 0x7fffa5382424 }
    /* +0xc1243a */ __asm { JNZ 0x7fffa53823d2 }
    /* +0xc1243c */ __asm { JMP 0x7fffa53086b6 }
    /* +0xc12441 */ __asm { IMUL EDX,dword ptr [RBP + -0x7552017],-0x5dbd9b01 }
    /* +0xc1244c */ __asm { JMP 0x7fffa5315660 }
    /* +0xc12459 */ __asm { IMUL ESP,dword ptr ES:[RBX + -0x3fd7317],-0xf76ba01 }
    /* +0xc12464 */ __asm { SUB R8D,dword ptr [RBP + 0x1298] }
    /* +0xc1246b */ __asm { MOV R9D,0xb98694b }
    /* +0xc12471 */ __asm { RDTSC }
    /* +0xc12473 */ __asm { SHL RDX,0x20 }
    /* +0xc12477 */ __asm { OR RDX,RAX }
    /* +0xc1247a */ __asm { MOV R11,-0x83d143f70980d4b }
    /* +0xc12484 */ __asm { IMUL R11,RDX }
    /* +0xc12488 */ __asm { MOV R10,0x16677988ae9010d2 }
    /* +0xc12492 */ __asm { ADD R10,R11 }
    /* +0xc12495 */ __asm { MOV RCX,R10 }
    /* +0xc12498 */ __asm { SHR RCX,0x3b }
    /* +0xc1249c */ __asm { MOV RDX,R10 }
    /* +0xc1249f */ __asm { SHR RDX,0x1b }
    /* +0xc124a3 */ __asm { SHR R10,0x2d }
    /* +0xc124a7 */ __asm { ADD R11D,0xae9010b7 }
    /* +0xc124ae */ __asm { ADD R9D,R8D }
    /* +0xc124b1 */ __asm { ROL R9D,0x15 }
    /* +0xc124b5 */ __asm { MOV R8,qword ptr [RBP + 0xe8] }
    /* +0xc124bc */ __asm { IMUL R9D,R8D }
    /* +0xc124c0 */ __asm { MOV EAX,0x35708ecb }
    /* +0xc124c5 */ __asm { IMUL EAX,R8D }
    /* +0xc124c9 */ __asm { XOR EAX,0xa653d2bf }
    /* +0xc124ce */ __asm { MOVSXD R8,EAX }
    /* +0xc124d1 */ __asm { CMP R8,R9 }
    /* +0xc124d4 */ __asm { CMOVG EDX,R11D }
    /* +0xc124d8 */ __asm { XOR R10D,EDX }
    /* +0xc124db */ __asm { ROR R10D,CL }
    /* +0xc124de */ __asm { MOV dword ptr [RBP + 0x120],0xdfeeefd9 }
    /* +0xc124e8 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xc124ef */ __asm { TEST R11B,0x1 }
    /* +0xc124f3 */ __asm { JZ 0x7fffa5397d72 }
    /* +0xc124f9 */ __asm { MOV R11D,0xfd803431 }
    /* +0xc124ff */ __asm { IMUL EDX,R11D,0x2a925689 }
    /* +0xc12506 */ __asm { NOT EDX }
    /* +0xc12508 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc1250f */ __asm { ROR EDX,CL }
    /* +0xc12511 */ __asm { NOT EDX }
    /* +0xc12513 */ __asm { ROL EDX,0x1b }
    /* +0xc12516 */ __asm { MOV R9D,0x337084e6 }
    /* +0xc1251c */ __asm { XOR R9D,0x37df2893 }
    /* +0xc12523 */ __asm { ADD R9D,ECX }
    /* +0xc12526 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xc1252d */ __asm { ROL R9D,CL }
    /* +0xc12530 */ __asm { ADD R9D,0x7ffe02d4 }
    /* +0xc12537 */ __asm { XOR R11D,R11D }
    /* +0xc1253a */ __asm { CMP R9,RDX }
    /* +0xc1253d */ __asm { SETGE R11B }
    /* +0xc12541 */ __asm { ADD R11D,0x408c78d }
    /* +0xc12548 */ __asm { CMP R10D,R11D }
    /* +0xc1254b */ __asm { JNC 0x7fffa53827cc }
    /* +0xc12551 */ __asm { MOV R11D,0xda72b95e }
    /* +0xc12557 */ __asm { XOR R11D,dword ptr [RBP + 0x1038] }
    /* +0xc1255e */ __asm { ADD R11D,0x9fa46215 }
    /* +0xc12565 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xc1256c */ __asm { ROR R11D,CL }
    /* +0xc1256f */ __asm { MOV dword ptr [RBP + 0x120],R11D }
    /* +0xc12576 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xc1257d */ __asm { CMP R11D,0xeb0819d7 }
    /* +0xc12584 */ __asm { NOP }
    /* +0xc12585 */ __asm { NOP }
    /* +0xc12586 */ __asm { NOP }
    /* +0xc12587 */ __asm { NOP }
    /* +0xc12588 */ __asm { NOP }
    /* +0xc12589 */ __asm { PUSHFQ }
    /* +0xc1258a */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xc12592 */ __asm { POPFQ }
    /* +0xc12593 */ __asm { LEA R8,[0x7fffa47c31ae] }
    /* +0xc1259a */ __asm { MOV R11,-0x2c8b657266eb7da4 }
    /* +0xc125a4 */ __asm { CMP R8,R11 }
    /* +0xc125a7 */ __asm { NOP }
    /* +0xc125a8 */ __asm { NOP }
    /* +0xc125a9 */ __asm { NOP }
    /* +0xc125aa */ __asm { NOP }
    /* +0xc125ab */ __asm { NOP }
    /* +0xc125ac */ __asm { NOP }
    /* +0xc125ad */ __asm { NOP }
    /* +0xc125ae */ __asm { NOP }
    /* +0xc125af */ __asm { NOP }
    /* +0xc125b0 */ __asm { NOP }
    /* +0xc125b1 */ __asm { NOP }
    /* +0xc125b2 */ __asm { MOV R11D,0x36a3fc37 }
    /* +0xc125b8 */ __asm { MOV R10D,0xbe34936a }
    /* +0xc125be */ __asm { MOV R12,qword ptr [RBP + 0x480] }
    /* +0xc125c5 */ __asm { XOR R10D,R12D }
    /* +0xc125c8 */ __asm { ROL R10D,0x2 }
    /* +0xc125cc */ __asm { MOV RSI,qword ptr [RBP + 0x1298] }
    /* +0xc125d3 */ __asm { MOV ECX,ESI }
    /* +0xc125d5 */ __asm { ROR R10D,CL }
    /* +0xc125d8 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xc125df */ __asm { ADD R10D,EDI }
    /* +0xc125e2 */ __asm { NOT R11D }
    /* +0xc125e5 */ __asm { ADD R11D,R14D }
    /* +0xc125e8 */ __asm { IMUL R9D,R11D,0x431c5293 }
    /* +0xc125ef */ __asm { ROL R9D,0x10 }
    /* +0xc125f3 */ __asm { MOV EDX,0x11a10920 }
    /* +0xc125f8 */ __asm { MOV ECX,EDI }
    /* +0xc125fa */ __asm { ROL R9D,CL }
    /* +0xc125fd */ __asm { MOVZX ECX,uint8_t ptr [R8 + -0x6b21] }
    /* +0xc12605 */ __asm { MOVZX R11D,uint8_t ptr [R8 + RCX*0x4 + -0x6b11] }
    /* +0xc1260e */ __asm { ROL R11B,0x4 }
    /* +0xc12612 */ __asm { MOV uint8_t ptr [RBP + 0x120],R11B }
    /* +0xc12619 */ __asm { MOVZX R11D,uint8_t ptr [R8 + RCX*0x4 + -0x6b10] }
    /* +0xc12622 */ __asm { ROL R11B,0x4 }
    /* +0xc12626 */ __asm { MOV uint8_t ptr [RBP + 0x121],R11B }
    /* +0xc1262d */ __asm { MOVZX R11D,uint8_t ptr [R8 + RCX*0x4 + -0x6b0f] }
    /* +0xc12636 */ __asm { ROL R11B,0x4 }
    /* +0xc1263a */ __asm { MOV uint8_t ptr [RBP + 0x122],R11B }
    /* +0xc12641 */ __asm { MOVZX ECX,uint8_t ptr [R8 + RCX*0x4 + -0x6b0e] }
    /* +0xc1264a */ __asm { ROL CL,0x4 }
    /* +0xc1264d */ __asm { MOV uint8_t ptr [RBP + 0x123],CL }
    /* +0xc12653 */ __asm { MOVZX ECX,uint8_t ptr [R9] }
    /* +0xc12657 */ __asm { MOV R11D,0x65e8ce72 }
    /* +0xc1265d */ __asm { XOR R11D,dword ptr [RBP + 0x120] }
    /* +0xc12664 */ __asm { MOV EAX,R11D }
    /* +0xc12667 */ __asm { SHL EAX,CL }
    /* +0xc12669 */ __asm { XOR EDX,ESI }
    /* +0xc1266b */ __asm { MOV R8D,0x1 }
    /* +0xc12671 */ __asm { SHL R8D,CL }
    /* +0xc12674 */ __asm { ADD EDX,0xeca788de }
    /* +0xc1267a */ __asm { MOV ECX,EDI }
    /* +0xc1267c */ __asm { ROR EDX,CL }
    /* +0xc1267e */ __asm { AND R8D,R11D }
    /* +0xc12681 */ __asm { XOR EDX,R12D }
    /* +0xc12684 */ __asm { CMP RDX,R10 }
    /* +0xc12687 */ __asm { CMOVLE R8D,EAX }
    /* +0xc1268b */ __asm { TEST R8D,R8D }
    /* +0xc1268e */ __asm { JZ 0x7fffa53827cc }
    /* +0xc12694 */ __asm { PXOR XMM0,XMM0 }
    /* +0xc12698 */ __asm { MOVDQA xmmword ptr [RBP + 0x120],XMM0 }
    /* +0xc126a0 */ __asm { MOV dword ptr [RBP + 0x2b0],0x63b6854d }
    /* +0xc126aa */ __asm { MOV R11D,dword ptr [RBP + 0x2b0] }
    /* +0xc126b1 */ __asm { TEST R11B,0x1 }
    /* +0xc126b5 */ __asm { NOP }
    /* +0xc126b6 */ __asm { NOP }
    /* +0xc126b7 */ __asm { NOP }
    /* +0xc126b8 */ __asm { NOP }
    /* +0xc126b9 */ __asm { NOP }
    /* +0xc126ba */ __asm { MOV dword ptr [RBP + 0x120],0x0 }
    /* +0xc126c4 */ __asm { MOV dword ptr [RBP + 0x2b0],0xb330e650 }
    /* +0xc126ce */ __asm { MOV R11D,dword ptr [RBP + 0x2b0] }
    /* +0xc126d5 */ __asm { MOV dword ptr [RBP + 0x2b0],0x6fcfd9ad }
    /* +0xc126df */ __asm { MOV R11D,dword ptr [RBP + 0x2b0] }
    /* +0xc126e6 */ __asm { MOV R11,0x3cb1f6a74440988e }
    /* +0xc126f0 */ __asm { MOV R8,qword ptr [RBP + 0x480] }
    /* +0xc126f7 */ __asm { ADD R8,R11 }
    /* +0xc126fa */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc12701 */ __asm { ROR R8,CL }
    /* +0xc12704 */ __asm { LEA R9,[0x7fffa47b6cc6] }
    /* +0xc1270b */ __asm { IMUL R11,R8,0xf0fb547 }
    /* +0xc12712 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xc12719 */ __asm { ROR R11,CL }
    /* +0xc1271c */ __asm { CMP R9,R11 }
    /* +0xc1271f */ __asm { NOP }
    /* +0xc12720 */ __asm { NOP }
    /* +0xc12721 */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa53856bc  |  RVA: 0xc156bc  |  Size: 283 bytes
// Callers  : FUN_7fffa537f066@0xc0f066
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa53856bc(void) {
    /* +0xc156bc */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xc156c3 */ __asm { SYSCALL }
    /* +0xc156c5 */ __asm { MOV dword ptr [RBP + 0x120],0xa31fcf18 }
    /* +0xc156cf */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xc156d6 */ __asm { MOV dword ptr [RBP + 0x5e0],0x3f810fed }
    /* +0xc156e0 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc156e7 */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xc156ee */ __asm { MOV R8,qword ptr [RBP + 0x3b0] }
    /* +0xc156f5 */ __asm { MOV RCX,qword ptr [RBP + 0x590] }
    /* +0xc156fc */ __asm { SUB ECX,EDX }
    /* +0xc156fe */ __asm { SUB ECX,R8D }
    /* +0xc15701 */ __asm { MOV R10W,0x556e }
    /* +0xc15706 */ __asm { ADD R10D,ECX }
    /* +0xc15709 */ __asm { NOT R10D }
    /* +0xc1570c */ __asm { IMUL R10D,R10D,-0x434b }
    /* +0xc15713 */ __asm { ROL R10W,0xd }
    /* +0xc15718 */ __asm { XOR R10D,dword ptr [RBP + 0x480] }
    /* +0xc1571f */ __asm { MOVSX R10D,R10W }
    /* +0xc15723 */ __asm { CMP R11D,R10D }
    /* +0xc15726 */ __asm { NOP }
    /* +0xc15727 */ __asm { NOP }
    /* +0xc15728 */ __asm { NOP }
    /* +0xc15729 */ __asm { NOP }
    /* +0xc1572a */ __asm { NOP }
    /* +0xc1572b */ __asm { NOP }
    /* +0xc1572c */ __asm { NOP }
    /* +0xc1572d */ __asm { NOP }
    /* +0xc1572e */ __asm { NOP }
    /* +0xc1572f */ __asm { MOV R10,qword ptr [RBP + 0x1350] }
    /* +0xc15736 */ __asm { CMP dword ptr [RBP + 0x1b0],R10D }
    /* +0xc1573d */ __asm { NOP }
    /* +0xc1573e */ __asm { NOP }
    /* +0xc1573f */ __asm { NOP }
    /* +0xc15740 */ __asm { NOP }
    /* +0xc15741 */ __asm { NOP }
    /* +0xc15742 */ __asm { MOV dword ptr [RBP + 0x5e0],0x3df0f2fd }
    /* +0xc1574c */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc15753 */ __asm { MOV ECX,0x5 }
    /* +0xc15758 */ __asm { INT 0x29 }
    /* +0xc1575a */ __asm { LEA R8,[0x7fffa47b5a33] }
    /* +0xc15761 */ __asm { MOV R11,0x7724eab5066d9531 }
    /* +0xc1576b */ __asm { CMP R8,R11 }
    /* +0xc1576e */ __asm { JNZ 0x7fffa538577b }
    /* +0xc15770 */ __asm { MOV ECX,0x7e2dd769 }
    /* +0xc15775 */ __asm { ROR uint8_t ptr [RDI + 0x23],CL }
    /* +0xc15778 */ __asm { ADD AL,0x87 }
    /* +0xc1577a */ __asm { RETF }
    /* +0xc1577b */ __asm { MOV R11D,0x12abcbcc }
    /* +0xc15781 */ __asm { MOV EDX,0xa09d9c7 }
    /* +0xc15786 */ __asm { MOV R10,qword ptr [RBP + 0x1298] }
    /* +0xc1578d */ __asm { SUB EDX,R10D }
    /* +0xc15790 */ __asm { ADD EDX,0x76ce475 }
    /* +0xc15796 */ __asm { ROR EDX,0x1 }
    /* +0xc15798 */ __asm { NOT EDX }
    /* +0xc1579a */ __asm { MOV R9,qword ptr [RBP + 0x480] }
    /* +0xc157a1 */ __asm { ADD EDX,R9D }
    /* +0xc157a4 */ __asm { ADD R11D,R10D }
    /* +0xc157a7 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xc157ae */ __asm { ROL R11D,CL }
    /* +0xc157b1 */ __asm { MOV qword ptr [RBP + 0x5e0],R10 }
    /* +0xc157b8 */ __asm { MOV EAX,dword ptr [R8 + 0x6aa9] }
    /* +0xc157bf */ __asm { IMUL R11D,R11D,-0x68cddb2d }
    /* +0xc157c6 */ __asm { MOV ECX,R9D }
    /* +0xc157c9 */ __asm { ROR R11D,CL }
    /* +0xc157cc */ __asm { MOVSXD R10,R11D }
    /* +0xc157cf */ __asm { SYSCALL }
    /* +0xc157d1 */ __asm { NOP }
    /* +0xc157d2 */ __asm { JMP 0x7fffa52ebf26 }
}


// ============================================================================
// Function : FUN_7fffa53923c6  |  RVA: 0xc223c6  |  Size: 705 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa53923c6(void) {
    /* +0xc223c6 */ __asm { MOV R8,0x1f36b4bc0d13e4e3 }
    /* +0xc223d0 */ __asm { MOV R11,R8 }
    /* +0xc223d3 */ __asm { MOV qword ptr [RBP + 0x3b0],R8 }
    /* +0xc223da */ __asm { MOV R8,0x1f59b4ce0d61e4a6 }
    /* +0xc223e4 */ __asm { MOV R10,-0x7c9a946e51875990 }
    /* +0xc223ee */ __asm { MOV RCX,R10 }
    /* +0xc223f1 */ __asm { MOV qword ptr [RBP + 0x590],R10 }
    /* +0xc223f8 */ __asm { LEA R10,[RBP + 0x5e0] }
    /* +0xc223ff */ __asm { MOV qword ptr [RBP + 0x1050],R8 }
    /* +0xc22406 */ __asm { MOV R8,-0x7c9a946e518759fe }
    /* +0xc22410 */ __asm { MOV qword ptr [RBP + 0x1058],R8 }
    /* +0xc22417 */ __asm { MOVAPS XMM0,xmmword ptr [RBP + 0x1050] }
    /* +0xc2241e */ __asm { MOV qword ptr [RBP + 0x5e8],RCX }
    /* +0xc22425 */ __asm { MOV qword ptr [RBP + 0x5e0],R11 }
    /* +0xc2242c */ __asm { XORPS XMM0,xmmword ptr [R10] }
    /* +0xc22430 */ __asm { MOVAPS xmmword ptr [RBP + 0x1050],XMM0 }
    /* +0xc22437 */ __asm { MOV dword ptr [RBP + 0x5e0],0xa9ebc809 }
    /* +0xc22441 */ __asm { MOV R10D,dword ptr [RBP + 0x5e0] }
    /* +0xc22448 */ __asm { MOV R8,-0x16774856e5b60488 }
    /* +0xc22452 */ __asm { MOV qword ptr [RBP + 0x1b0],R8 }
    /* +0xc22459 */ __asm { MOV R8,-0x14c21ecc66b14862 }
    /* +0xc22463 */ __asm { MOV qword ptr [RBP + 0x1350],R8 }
    /* +0xc2246a */ __asm { MOV R8,0x2cf195da094cc9ff }
    /* +0xc22474 */ __asm { MOV qword ptr [RBP + 0x11d8],R8 }
    /* +0xc2247b */ __asm { MOV RAX,0x1f5ab4de0d7ce4b1 }
    /* +0xc22485 */ __asm { MOV EDX,0x5ef53098 }
    /* +0xc2248a */ __asm { NOT EDX }
    /* +0xc2248c */ __asm { MOV RDI,0x4fdf0ffa8fef72ec }
    /* +0xc22496 */ __asm { MOV RBX,-0x7e09f33d556d846d }
    /* +0xc224a0 */ __asm { MOV R10D,0xaebfadfc }
    /* +0xc224a6 */ __asm { MOV R9,-0x7cf2944e51ff59e1 }
    /* +0xc224b0 */ __asm { MOV R14D,0xd42ab6be }
    /* +0xc224b6 */ __asm { MOV R8,qword ptr [RBP + 0x1038] }
    /* +0xc224bd */ __asm { ADD R14D,R8D }
    /* +0xc224c0 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xc224c7 */ __asm { ROL R14D,CL }
    /* +0xc224ca */ __asm { MOV R11,0x4fab0fda8f9c728d }
    /* +0xc224d4 */ __asm { MOV qword ptr [RBP + 0x12e0],R11 }
    /* +0xc224db */ __asm { ADD R14D,0xa9985203 }
    /* +0xc224e2 */ __asm { MOV R11,qword ptr [RBP + 0x1298] }
    /* +0xc224e9 */ __asm { MOV ECX,R11D }
    /* +0xc224ec */ __asm { ROR R14D,CL }
    /* +0xc224ef */ __asm { ADD EDX,R11D }
    /* +0xc224f2 */ __asm { MOV ECX,R8D }
    /* +0xc224f5 */ __asm { ROR EDX,CL }
    /* +0xc224f7 */ __asm { ADD EDX,0x1e2c424a }
    /* +0xc224fd */ __asm { MOV qword ptr [RBP + 0x1070],RAX }
    /* +0xc22504 */ __asm { MOV RCX,0x3122cb69ea9ed30a }
    /* +0xc2250e */ __asm { MOV qword ptr [RBP + 0x1078],R9 }
    /* +0xc22515 */ __asm { MOV RAX,0x2c9695b40925c98b }
    /* +0xc2251f */ __asm { MOV R9,0x1906572d09b50917 }
    /* +0xc22529 */ __asm { MOV qword ptr [RBP + 0x1090],R9 }
    /* +0xc22530 */ __asm { MOV qword ptr [RBP + 0x1098],RCX }
    /* +0xc22537 */ __asm { LEA RCX,[RBP + 0x5e0] }
    /* +0xc2253e */ __asm { MOV qword ptr [RBP + 0x1080],RDI }
    /* +0xc22545 */ __asm { MOV R9,-0x16774856e5b604aa }
    /* +0xc2254f */ __asm { MOV qword ptr [RBP + 0x10b8],R9 }
    /* +0xc22556 */ __asm { MOV RDI,-0x7e6df35855008406 }
    /* +0xc22560 */ __asm { MOV qword ptr [RBP + 0x1088],RBX }
    /* +0xc22567 */ __asm { MOV R9,-0x4fa0cad969fb0e4f }
    /* +0xc22571 */ __asm { MOV RBX,0x3150cb3deabed324 }
    /* +0xc2257b */ __asm { MOV R8,0x1972575809da0937 }
    /* +0xc22585 */ __asm { MOV R13,-0x4fc5caab69db0e38 }
    /* +0xc2258f */ __asm { MOV qword ptr [RBP + 0x10a0],R13 }
    /* +0xc22596 */ __asm { MOV R13,-0x14b01ead66c54813 }
    /* +0xc225a0 */ __asm { MOV qword ptr [RBP + 0x10a8],R13 }
    /* +0xc225a7 */ __asm { MOV R13,qword ptr [RBP + 0x11d8] }
    /* +0xc225ae */ __asm { MOV qword ptr [RBP + 0x10b0],R13 }
    /* +0xc225b5 */ __asm { MOV qword ptr [RBP + 0x600],R8 }
    /* +0xc225bc */ __asm { MOV qword ptr [RBP + 0x5f8],RDI }
    /* +0xc225c3 */ __asm { MOV R8,qword ptr [RBP + 0x12e0] }
    /* +0xc225ca */ __asm { MOV qword ptr [RBP + 0x5f0],R8 }
    /* +0xc225d1 */ __asm { MOV R8,qword ptr [RBP + 0x3b0] }
    /* +0xc225d8 */ __asm { MOV qword ptr [RBP + 0x5e0],R8 }
    /* +0xc225df */ __asm { MOV R8,qword ptr [RBP + 0x590] }
    /* +0xc225e6 */ __asm { MOV qword ptr [RBP + 0x5e8],R8 }
    /* +0xc225ed */ __asm { MOV qword ptr [RBP + 0x620],RAX }
    /* +0xc225f4 */ __asm { MOV qword ptr [RBP + 0x608],RBX }
    /* +0xc225fb */ __asm { MOV R8,qword ptr [RBP + 0x1b0] }
    /* +0xc22602 */ __asm { MOV qword ptr [RBP + 0x628],R8 }
    /* +0xc22609 */ __asm { MOVAPS XMM0,xmmword ptr [RCX + 0x40] }
    /* +0xc2260d */ __asm { MOV qword ptr [RBP + 0x610],R9 }
    /* +0xc22614 */ __asm { MOV R8,qword ptr [RBP + 0x1350] }
    /* +0xc2261b */ __asm { MOV qword ptr [RBP + 0x618],R8 }
    /* +0xc22622 */ __asm { XOR R10D,R11D }
    /* +0xc22625 */ __asm { XOR R10D,dword ptr [RBP + 0x1038] }
    /* +0xc2262c */ __asm { XOR R10D,0x7ffe03d8 }
    /* +0xc22633 */ __asm { MOVAPS XMM1,xmmword ptr [RBP + 0x1080] }
    /* +0xc2263a */ __asm { MOVAPS XMM3,xmmword ptr [RBP + 0x1090] }
    /* +0xc22641 */ __asm { MOVAPS XMM2,xmmword ptr [RBP + 0x10a0] }
    /* +0xc22648 */ __asm { MOVAPS XMM4,xmmword ptr [RCX] }
    /* +0xc2264b */ __asm { XORPS XMM3,xmmword ptr [RCX + 0x20] }
    /* +0xc2264f */ __asm { MOVAPS XMM5,xmmword ptr [RBP + 0x10b0] }
    /* +0xc22656 */ __asm { XORPS XMM1,xmmword ptr [RCX + 0x10] }
    /* +0xc2265a */ __asm { MOVAPS xmmword ptr [RBP + 0x1090],XMM3 }
    /* +0xc22661 */ __asm { MOVAPS xmmword ptr [RBP + 0x1080],XMM1 }
    /* +0xc22668 */ __asm { XORPS XMM4,xmmword ptr [RBP + 0x1070] }
    /* +0xc2266f */ __asm { MOVAPS xmmword ptr [RBP + 0x1070],XMM4 }
    /* +0xc22676 */ __asm { CMP R14,RDX }
    /* +0xc22679 */ __asm { JNC 0x7fffa53d1e56 }
    /* +0xc2267f */ __asm { XORPS XMM0,XMM5 }
    /* +0xc22682 */ __asm { JMP 0x7fffa53d1e59 }
}


// ============================================================================
// Function : FUN_7fffa5395888  |  RVA: 0xc25888  |  Size: 2406 bytes
// Callers  : FUN_7fffa5333440@0xbc3440, FUN_7fffa5384fa6@0xc14fa6, FUN_7fffa53770b4@0xc070b4
// Callees  : FUN_7fffa537cce1@0xc0cce1, FUN_7fffa53736c2@0xc036c2, FUN_7fffa537f066@0xc0f066
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5395888(void) {
    /* +0xc25888 */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xc2588f */ __asm { SYSCALL }
    /* +0xc25891 */ __asm { MOV dword ptr [RBP + 0x120],0x6ca2574f }
    /* +0xc2589b */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xc258a2 */ __asm { MOV R10W,0xed74 }
    /* +0xc258a7 */ __asm { ADD R10D,dword ptr [RBP + 0x1038] }
    /* +0xc258ae */ __asm { MOV RDX,qword ptr [RBP + 0x3b0] }
    /* +0xc258b5 */ __asm { OR EDX,0x1 }
    /* +0xc258b8 */ __asm { IMUL EDX,R10D }
    /* +0xc258bc */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xc258c3 */ __asm { ROL DX,CL }
    /* +0xc258c6 */ __asm { AND R11D,0x1 }
    /* +0xc258ca */ __asm { XOR EDX,0xa549 }
    /* +0xc258d0 */ __asm { MOVZX R10D,DX }
    /* +0xc258d4 */ __asm { CMP R11D,R10D }
    /* +0xc258d7 */ __asm { JZ 0x7fffa53d579a }
    /* +0xc258dd */ __asm { MOV dword ptr [RBP + 0x5e0],0x24319fd6 }
    /* +0xc258e7 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc258ee */ __asm { MOV R11,-0x7cea9ea22ffe90f1 }
    /* +0xc258f8 */ __asm { CMP qword ptr [RBP + 0x1488],R11 }
    /* +0xc258ff */ __asm { JNZ 0x7fffa5395904 }
    /* +0xc25901 */ __asm { MOV RBX,-0x71d632fffffffa47 }
    /* +0xc2590c */ __asm { RETF }
    /* +0xc2592c */ __asm { PUSH RSP }
    /* +0xc2592d */ __asm { PUSH RSI }
    /* +0xc2592e */ __asm { POP RBP }
    /* +0xc2597a */ __asm { CLC }
    /* +0xc2597b */ __asm { SBB AL,0x91 }
    /* +0xc2597d */ __asm { SCASD RDI }
    /* +0xc25985 */ __asm { MOV AL,CS:[0x3f82effffd4929e9] }
    /* +0xc26455 */ __asm { MOV EAX,[0xfffdb88ee9e46fdb] }
    /* +0xc26488 */ __asm { IMUL EDI,dword ptr GS:[RCX + RAX*0x2 + 0x5731fa81],-0x79f0fbe9 }
    /* +0xc26494 */ __asm { JG 0x7fffa5396455 }
    /* +0xc26496 */ __asm { STD }
    /* +0xc2649d */ __asm { XOR qword ptr [R9 + -0x2407317],0x359ac8ff }
    /* +0xc264ab */ __asm { PUSH RSI }
    /* +0xc264ac */ __asm { NOP }
    /* +0xc264ad */ __asm { CLI }
    /* +0xc264ae */ __asm { JNS 0x7fffa539650e }
    /* +0xc264b0 */ __asm { CMP CL,uint8_t ptr [RBP + -0x9] }
    /* +0xc264b3 */ __asm { JMP 0x7fffa5372554 }
    /* +0xc264b8 */ __asm { POP RCX }
    /* +0xc264b9 */ __asm { MOV [0x5c12fffdc0aee941],EAX }
    /* +0xc264c2 */ __asm { LOOP 0x7fffa53964ab }
    /* +0xc264c4 */ __asm { OR dword ptr [RDX + -0x34],ECX }
    /* +0xc264c7 */ __asm { XOR BL,uint8_t ptr [RSI + -0x23cdd17] }
    /* +0xc264cd */ __asm { CALLF [RSI] }
    /* +0xc264cf */ __asm { JMP 0x7fffa5372bfc }
    /* +0xc264d4 */ __asm { SYSENTER }
    /* +0xc2650e */ __asm { SHL EDX,0x20 }
    /* +0xc26511 */ __asm { OR RDX,RAX }
    /* +0xc26514 */ __asm { IMUL RDX,R11 }
    /* +0xc26518 */ __asm { MOV R10,-0x53d708b9ceaca44a }
    /* +0xc26522 */ __asm { ADD R10,RDX }
    /* +0xc26525 */ __asm { MOV RCX,R10 }
    /* +0xc26528 */ __asm { SHR RCX,0x3b }
    /* +0xc2652c */ __asm { MOV R11D,0x65f731f5 }
    /* +0xc26532 */ __asm { ADD R11D,dword ptr [RBP + 0x590] }
    /* +0xc26539 */ __asm { ROL R11D,0x9 }
    /* +0xc2653d */ __asm { NOT R11D }
    /* +0xc26540 */ __asm { SUB R11D,dword ptr [RBP + 0x3b0] }
    /* +0xc26547 */ __asm { MOV RDX,R10 }
    /* +0xc2654a */ __asm { SHR RDX,0x2d }
    /* +0xc2654e */ __asm { SHR R10,0x1b }
    /* +0xc26552 */ __asm { XOR R10D,EDX }
    /* +0xc26555 */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xc2655c */ __asm { ROL R11D,0x4 }
    /* +0xc26560 */ __asm { ROR R10D,CL }
    /* +0xc26563 */ __asm { ADD R11D,dword ptr [RBP + 0x4d0] }
    /* +0xc2656a */ __asm { MOV dword ptr [RBP + 0x120],R11D }
    /* +0xc26571 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xc26578 */ __asm { CMP R10D,0x40d522 }
    /* +0xc2657f */ __asm { JA 0x7fffa53968fd }
    /* +0xc26585 */ __asm { MOV R11W,0xfdb4 }
    /* +0xc2658a */ __asm { ADD R11D,0xfffff013 }
    /* +0xc26591 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xc26598 */ __asm { ROL R11W,CL }
    /* +0xc2659c */ __asm { MOV RDX,qword ptr [RBP + 0x1038] }
    /* +0xc265a3 */ __asm { MOV R10D,EDX }
    /* +0xc265a6 */ __asm { XOR R10D,R11D }
    /* +0xc265a9 */ __asm { SUB R10D,dword ptr [RBP + 0x590] }
    /* +0xc265b0 */ __asm { MOV RCX,qword ptr [RBP + 0x3b0] }
    /* +0xc265b7 */ __asm { ROR R10W,CL }
    /* +0xc265bb */ __asm { SUB R10D,dword ptr [RBP + 0x4d0] }
    /* +0xc265c2 */ __asm { IMUL R11D,R10D,0x24bd }
    /* +0xc265c9 */ __asm { MOVZX R10D,R11W }
    /* +0xc265cd */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xc265d1 */ __asm { MOV RDX,0x57a2050c44ead6cd }
    /* +0xc265db */ __asm { CMP qword ptr [R11 + 0x18],RDX }
    /* +0xc265df */ __asm { NOP }
    /* +0xc265e0 */ __asm { NOP }
    /* +0xc265e1 */ __asm { NOP }
    /* +0xc265e2 */ __asm { NOP }
    /* +0xc265e3 */ __asm { NOP }
    /* +0xc265e4 */ __asm { NOP }
    /* +0xc265e5 */ __asm { NOP }
    /* +0xc265e6 */ __asm { NOP }
    /* +0xc265e7 */ __asm { NOP }
    /* +0xc265e8 */ __asm { NOP }
    /* +0xc265e9 */ __asm { NOP }
    /* +0xc265ea */ __asm { NOP }
    /* +0xc265eb */ __asm { LEA R8,[0x7fffa47ba510] }
    /* +0xc265f2 */ __asm { MOV R11,-0x30f86ff51bb6fbfe }
    /* +0xc265fc */ __asm { CMP R8,R11 }
    /* +0xc265ff */ __asm { JZ 0x7fffa53d5a18 }
    /* +0xc26605 */ __asm { MOV R11D,0x1c68dd59 }
    /* +0xc2660b */ __asm { MOV ECX,0x2cd14764 }
    /* +0xc26610 */ __asm { MOV RDX,qword ptr [RBP + 0x4d0] }
    /* +0xc26617 */ __asm { LEA R10D,[RDX + RCX*0x1] }
    /* +0xc2661b */ __asm { ADD R10D,0xea5bef3b }
    /* +0xc26622 */ __asm { MOV RDI,qword ptr [RBP + 0x3b0] }
    /* +0xc26629 */ __asm { MOV ECX,EDI }
    /* +0xc2662b */ __asm { ROR R10D,CL }
    /* +0xc2662e */ __asm { XOR R10D,0xd0fadbb0 }
    /* +0xc26635 */ __asm { MOV RSI,qword ptr [RBP + 0x590] }
    /* +0xc2663c */ __asm { SUB R10D,ESI }
    /* +0xc2663f */ __asm { MOV R9,qword ptr [RBP + 0x1038] }
    /* +0xc26646 */ __asm { MOV ECX,R9D }
    /* +0xc26649 */ __asm { ROL R10D,CL }
    /* +0xc2664c */ __asm { MOV RAX,qword ptr [RBP + 0x1298] }
    /* +0xc26653 */ __asm { ADD R10D,EAX }
    /* +0xc26656 */ __asm { IMUL EDX,R11D,0xf965135 }
    /* +0xc2665d */ __asm { MOV ECX,ESI }
    /* +0xc2665f */ __asm { ROL EDX,CL }
    /* +0xc26661 */ __asm { ADD EDX,R9D }
    /* +0xc26664 */ __asm { NOT EDX }
    /* +0xc26666 */ __asm { IMUL EDX,dword ptr [RBP + 0x11d8] }
    /* +0xc2666d */ __asm { SUB EDX,EAX }
    /* +0xc2666f */ __asm { MOV ECX,EDI }
    /* +0xc26671 */ __asm { ROR EDX,CL }
    /* +0xc26673 */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x2239] }
    /* +0xc2667b */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + 0x223f] }
    /* +0xc26684 */ __asm { NOT R9B }
    /* +0xc26687 */ __asm { ROL R9B,0x5 }
    /* +0xc2668b */ __asm { MOV uint8_t ptr [RBP + 0x120],R9B }
    /* +0xc26692 */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + 0x2240] }
    /* +0xc2669b */ __asm { NOT R9B }
    /* +0xc2669e */ __asm { ROL R9B,0x5 }
    /* +0xc266a2 */ __asm { MOV uint8_t ptr [RBP + 0x121],R9B }
    /* +0xc266a9 */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + 0x2241] }
    /* +0xc266b2 */ __asm { NOT R9B }
    /* +0xc266b5 */ __asm { ROL R9B,0x5 }
    /* +0xc266b9 */ __asm { MOV uint8_t ptr [RBP + 0x122],R9B }
    /* +0xc266c0 */ __asm { MOVZX ECX,uint8_t ptr [R8 + RCX*0x4 + 0x2242] }
    /* +0xc266c9 */ __asm { NOT CL }
    /* +0xc266cb */ __asm { ROL CL,0x5 }
    /* +0xc266ce */ __asm { MOV uint8_t ptr [RBP + 0x123],CL }
    /* +0xc266d4 */ __asm { MOV R11D,0x9102c3cc }
    /* +0xc266da */ __asm { XOR R11D,dword ptr [RBP + 0x120] }
    /* +0xc266e1 */ __asm { MOV ECX,R11D }
    /* +0xc266e4 */ __asm { AND ECX,0x1f }
    /* +0xc266e7 */ __asm { MOV EAX,0x1 }
    /* +0xc266ec */ __asm { MOV R8D,0x1 }
    /* +0xc266f2 */ __asm { SHL R8D,CL }
    /* +0xc266f5 */ __asm { SUB EAX,ECX }
    /* +0xc266f7 */ __asm { CMP RDX,R10 }
    /* +0xc266fa */ __asm { CMOVC EAX,R8D }
    /* +0xc266fe */ __asm { TEST EAX,R11D }
    /* +0xc26701 */ __asm { JZ 0x7fffa53968fd }
    /* +0xc26707 */ __asm { MOV R8W,0xd1f1 }
    /* +0xc2670c */ __asm { MOV R11,qword ptr [RBP + 0x4d0] }
    /* +0xc26713 */ __asm { ADD R11D,R8D }
    /* +0xc26716 */ __asm { IMUL R11D,dword ptr [RBP + 0x498] }
    /* +0xc2671e */ __asm { PXOR XMM0,XMM0 }
    /* +0xc26722 */ __asm { MOVDQA xmmword ptr [RBP + 0x120],XMM0 }
    /* +0xc2672a */ __asm { MOV RDX,qword ptr [RBP + 0x590] }
    /* +0xc26731 */ __asm { MOV R10D,EDX }
    /* +0xc26734 */ __asm { XOR R10D,R11D }
    /* +0xc26737 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xc2673e */ __asm { ROR R10W,CL }
    /* +0xc26742 */ __asm { NOT R10D }
    /* +0xc26745 */ __asm { ROL R10W,0x4 }
    /* +0xc2674a */ __asm { MOVZX R10D,R10W }
    /* +0xc2674e */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xc26752 */ __asm { MOV R11,-0x423ec1ff187b6714 }
    /* +0xc2675c */ __asm { MOV RDX,qword ptr [RBP + 0x190] }
    /* +0xc26763 */ __asm { CMP qword ptr [RDX + -0x28],R11 }
    /* +0xc26767 */ __asm { NOP }
    /* +0xc26768 */ __asm { NOP }
    /* +0xc26769 */ __asm { NOP }
    /* +0xc2676a */ __asm { NOP }
    /* +0xc2676b */ __asm { NOP }
    /* +0xc2676c */ __asm { MOV dword ptr [RBP + 0x120],0x0 }
    /* +0xc26776 */ __asm { MOV R11D,0xfe2353b0 }
    /* +0xc2677c */ __asm { XOR R11D,dword ptr [RBP + 0x1298] }
    /* +0xc26783 */ __asm { ADD R11D,dword ptr [RBP + 0x590] }
    /* +0xc2678a */ __asm { IMUL R10D,R11D,-0x3fffff6b }
    /* +0xc26791 */ __asm { NOT R10D }
    /* +0xc26794 */ __asm { ADD R10D,dword ptr [RBP + 0x1038] }
    /* +0xc2679b */ __asm { IMUL R10D,dword ptr [RBP + 0x11d8] }
    /* +0xc267a3 */ __asm { MOV R11,0x3fe38ce87026b867 }
    /* +0xc267ad */ __asm { CMP qword ptr [R10],R11 }
    /* +0xc267b0 */ __asm { NOP }
    /* +0xc267b1 */ __asm { NOP }
    /* +0xc267b2 */ __asm { NOP }
    /* +0xc267b3 */ __asm { NOP }
    /* +0xc267b4 */ __asm { NOP }
    /* +0xc267b5 */ __asm { LEA R8,[0x7fffa478a6d4] }
    /* +0xc267bc */ __asm { MOV R10D,0x8fede54 }
    /* +0xc267c2 */ __asm { MOV R9,qword ptr [RBP + 0x590] }
    /* +0xc267c9 */ __asm { XOR R10D,R9D }
    /* +0xc267cc */ __asm { MOV RCX,qword ptr [RBP + 0x4d0] }
    /* +0xc267d3 */ __asm { ROR R10D,CL }
    /* +0xc267d6 */ __asm { NOT R10D }
    /* +0xc267d9 */ __asm { ROL R10D,0x1e }
    /* +0xc267dd */ __asm { XOR R10D,dword ptr [RBP + 0x1038] }
    /* +0xc267e4 */ __asm { SUB R10D,dword ptr [RBP + 0x3b0] }
    /* +0xc267eb */ __asm { MOV EDX,0xd05f720d }
    /* +0xc267f0 */ __asm { ADD EDX,0xe802b972 }
    /* +0xc267f6 */ __asm { XOR EDX,R9D }
    /* +0xc267f9 */ __asm { ADD EDX,dword ptr [RBP + 0x1298] }
    /* +0xc267ff */ __asm { MOV RAX,0x59da100f0432a422 }
    /* +0xc26809 */ __asm { XOR R11D,R11D }
    /* +0xc2680c */ __asm { XOR R9D,R9D }
    /* +0xc2680f */ __asm { CMP R8,RAX }
    /* +0xc26812 */ __asm { SETA R11B }
    /* +0xc26816 */ __asm { SETZ R9B }
    /* +0xc2681a */ __asm { IMUL EDX,dword ptr [RBP + 0x5d8] }
    /* +0xc26821 */ __asm { ADD EDX,0x2dd894d }
    /* +0xc26827 */ __asm { IMUL EDX,dword ptr [RBP + 0xe8] }
    /* +0xc2682e */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xc26835 */ __asm { ROL EDX,CL }
    /* +0xc26837 */ __asm { CMP RDX,R10 }
    /* +0xc2683a */ __asm { CMOVA R11D,R9D }
    /* +0xc2683e */ __asm { CMP R11B,0x1 }
    /* +0xc26842 */ __asm { NOP }
    /* +0xc26843 */ __asm { NOP }
    /* +0xc26844 */ __asm { NOP }
    /* +0xc26845 */ __asm { NOP }
    /* +0xc26846 */ __asm { NOP }
    /* +0xc26847 */ __asm { NOP }
    /* +0xc26848 */ __asm { NOP }
    /* +0xc26849 */ __asm { NOP }
    /* +0xc2684a */ __asm { NOP }
    /* +0xc2684b */ __asm { NOP }
    /* +0xc2684c */ __asm { NOP }
    /* +0xc2684d */ __asm { NOP }
    /* +0xc2684e */ __asm { MOV R10W,0x1bf4 }
    /* +0xc26853 */ __asm { XOR R10D,0x6cd9 }
    /* +0xc2685a */ __asm { MOV RCX,qword ptr [RBP + 0x3b0] }
    /* +0xc26861 */ __asm { SUB R10D,ECX }
    /* +0xc26864 */ __asm { MOV RDI,qword ptr [RBP + 0x4a0] }
    /* +0xc2686b */ __asm { IMUL R10D,EDI }
    /* +0xc2686f */ __asm { MOV RDX,qword ptr [RBP + 0x480] }
    /* +0xc26876 */ __asm { SUB R10D,EDX }
    /* +0xc26879 */ __asm { MOV R11D,EDX }
    /* +0xc2687c */ __asm { SUB R11D,dword ptr [RBP + 0x1298] }
    /* +0xc26883 */ __asm { MOV R12,qword ptr [RBP + 0x590] }
    /* +0xc2688a */ __asm { XOR R10D,R12D }
    /* +0xc2688d */ __asm { MOV R9W,0xabe7 }
    /* +0xc26892 */ __asm { ADD R9D,R11D }
    /* +0xc26895 */ __asm { MOV RSI,qword ptr [RBP + 0x498] }
    /* +0xc2689c */ __asm { IMUL R9D,ESI }
    /* +0xc268a0 */ __asm { MOVSX R10,R10W }
    /* +0xc268a4 */ __asm { MOV qword ptr [RBP + 0x2b0],R11 }
    /* +0xc268ab */ __asm { MOV EAX,dword ptr [R8 + -0x5848] }
    /* +0xc268b2 */ __asm { ADD R9D,0x3b2 }
    /* +0xc268b9 */ __asm { ROL R9W,CL }
    /* +0xc268bd */ __asm { ADD R9D,R12D }
    /* +0xc268c0 */ __asm { MOVZX EDX,R9W }
    /* +0xc268c4 */ __asm { MOV R11W,0x8e46 }
    /* +0xc268c9 */ __asm { MOV R8,qword ptr [RBP + 0x290] }
    /* +0xc268d0 */ __asm { IMUL R8D,R11D }
    /* +0xc268d4 */ __asm { XOR R8D,R12D }
    /* +0xc268d7 */ __asm { IMUL R8D,EDI }
    /* +0xc268db */ __asm { ADD R8D,0xfffffce0 }
    /* +0xc268e2 */ __asm { MOV R11,qword ptr [RBP + 0x4d0] }
    /* +0xc268e9 */ __asm { XOR R11D,R8D }
    /* +0xc268ec */ __asm { IMUL R11D,ESI }
    /* +0xc268f0 */ __asm { MOVZX R9D,R11W }
    /* +0xc268f4 */ __asm { LEA R8,[RBP + 0x120] }
    /* +0xc268fb */ __asm { SYSCALL }
    /* +0xc268fd */ __asm { LEA R11,[0x7fffa4788503] }
    /* +0xc26904 */ __asm { MOV RDX,0x13401ab7de24bca6 }
    /* +0xc2690e */ __asm { CMP R11,RDX }
    /* +0xc26911 */ __asm { NOP }
    /* +0xc26912 */ __asm { NOP }
    /* +0xc26913 */ __asm { NOP }
    /* +0xc26914 */ __asm { NOP }
    /* +0xc26915 */ __asm { NOP }
    /* +0xc26916 */ __asm { MOV R10W,0x65c0 }
    /* +0xc2691b */ __asm { MOV RDX,qword ptr [RBP + 0x4d0] }
    /* +0xc26922 */ __asm { MOV R8D,EDX }
    /* +0xc26925 */ __asm { OR R8D,0x1 }
    /* +0xc26929 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xc26930 */ __asm { MOV RCX,0x0 }
    /* +0xc26937 */ __asm { MOV AX,0x651c }
    /* +0xc2693b */ __asm { MOV R9,qword ptr [RBP + 0x3b0] }
    /* +0xc26942 */ __asm { XOR EAX,R9D }
    /* +0xc26945 */ __asm { IMUL EAX,R8D }
    /* +0xc26949 */ __asm { MOV RBX,qword ptr [RBP + 0x290] }
    /* +0xc26950 */ __asm { IMUL EBX,R10D }
    /* +0xc26954 */ __asm { MOV R10W,0x2381 }
    /* +0xc26959 */ __asm { MOV RDX,qword ptr [RBP + 0x1048] }
    /* +0xc26960 */ __asm { MOV ECX,EDX }
    /* +0xc26962 */ __asm { ROR AX,CL }
    /* +0xc26965 */ __asm { SUB R10D,R9D }
    /* +0xc26968 */ __asm { IMUL R10D,dword ptr [RBP + 0x498] }
    /* +0xc26970 */ __asm { ADD R10D,0x6bdd }
    /* +0xc26977 */ __asm { MOV R15,qword ptr [RBP + 0x590] }
    /* +0xc2697e */ __asm { XOR R10D,R15D }
    /* +0xc26981 */ __asm { MOV R12,qword ptr [RBP + 0x188] }
    /* +0xc26988 */ __asm { IMUL R12D,R10D }
    /* +0xc2698c */ __asm { MOV R10D,0x8419589d }
    /* +0xc26992 */ __asm { IMUL R10D,dword ptr [RBP + 0x5d8] }
    /* +0xc2699a */ __asm { MOV qword ptr [RBP + 0x120],R8 }
    /* +0xc269a1 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xc269a8 */ __asm { ADD EAX,EDI }
    /* +0xc269aa */ __asm { MOV ECX,R15D }
    /* +0xc269ad */ __asm { ROL AX,CL }
    /* +0xc269b0 */ __asm { ADD EAX,0xffffb0f3 }
    /* +0xc269b5 */ __asm { ROR BX,0x1 }
    /* +0xc269b8 */ __asm { MOV RSI,qword ptr [RBP + 0x480] }
    /* +0xc269bf */ __asm { SUB EBX,ESI }
    /* +0xc269c1 */ __asm { IMUL R8D,EBX,0x2ccb }
    /* +0xc269c8 */ __asm { MOV ECX,EDX }
    /* +0xc269ca */ __asm { ROR R8W,CL }
    /* +0xc269ce */ __asm { MOV ECX,EDI }
    /* +0xc269d0 */ __asm { ROL R8W,CL }
    /* +0xc269d4 */ __asm { MOVZX R9D,AX }
    /* +0xc269d8 */ __asm { XOR R8D,R15D }
    /* +0xc269db */ __asm { MOVZX EDX,R8W }
    /* +0xc269df */ __asm { MOV ECX,R15D }
    /* +0xc269e2 */ __asm { ROR R10D,CL }
    /* +0xc269e5 */ __asm { ADD R10D,0xf5ad966b }
    /* +0xc269ec */ __asm { MOV ECX,ESI }
    /* +0xc269ee */ __asm { ROR R10D,CL }
    /* +0xc269f1 */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xc269f8 */ __asm { ADD R12D,ECX }
    /* +0xc269fb */ __asm { MOVZX R8D,R12W }
    /* +0xc269ff */ __asm { ADD R10D,EDI }
    /* +0xc26a02 */ __asm { ROR R10D,CL }
    /* +0xc26a05 */ __asm { MOV EAX,dword ptr [R11 + -0x36eb] }
    /* +0xc26a0c */ __asm { LEA R11,[RBP + 0x280] }
    /* +0xc26a13 */ __asm { MOV qword ptr [RSP + 0x30],R11 }
    /* +0xc26a18 */ __asm { MOV dword ptr [RSP + 0x28],R9D }
    /* +0xc26a1d */ __asm { JMP 0x7fffa5396b7e }
    /* +0xc26a22 */ __asm { ADD dword ptr [RDI + -0x239fa17],0xbc814dff }
    /* +0xc26a2d */ __asm { JMP 0x7fffa537317f }
    /* +0xc26a32 */ __asm { CMP dword ptr [RBP + -0x5a],EBX }
    /* +0xc26a35 */ __asm { LOOPZ 0x7fffa5396a79 }
    /* +0xc26a38 */ __asm { CMP dword ptr [RAX + -0xfd9a864],0xd }
    /* +0xc26a3f */ __asm { JNC 0x7fffa537320a }
    /* +0xc26a45 */ __asm { JMP 0x7fffa537336b }
    /* +0xc26a79 */ __asm { MOV [0xf76bbb41660003ef],EAX }
    /* +0xc26a82 */ __asm { MOVD XMM0,dword ptr [RBP + 0x480] }
    /* +0xc26a8a */ __asm { MOV R10D,0x4510e42a }
    /* +0xc26a90 */ __asm { MOV R9W,0xff14 }
    /* +0xc26a95 */ __asm { MOV RCX,0x0 }
    /* +0xc26a9c */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xc26aa3 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xc26aaa */ __asm { SUB R10D,EDI }
    /* +0xc26aad */ __asm { IMUL EAX,R10D,0x6d83c83d }
    /* +0xc26ab4 */ __asm { MOV RSI,qword ptr [RBP + 0x1298] }
    /* +0xc26abb */ __asm { SUB EAX,ESI }
    /* +0xc26abd */ __asm { MOV RCX,qword ptr [RBP + 0x4d0] }
    /* +0xc26ac4 */ __asm { ROR EAX,CL }
    /* +0xc26ac6 */ __asm { MOV qword ptr [RBP + 0x120],R10 }
    /* +0xc26acd */ __asm { MOV R12,qword ptr [RBP + 0x590] }
    /* +0xc26ad4 */ __asm { MOV R10D,R12D }
    /* +0xc26ad7 */ __asm { MOV R15,qword ptr [RBP + 0x3b0] }
    /* +0xc26ade */ __asm { SUB R10D,R15D }
    /* +0xc26ae1 */ __asm { ADD R10D,EAX }
    /* +0xc26ae4 */ __asm { MOV EDX,ECX }
    /* +0xc26ae6 */ __asm { SUB R9D,R15D }
    /* +0xc26ae9 */ __asm { MOV ECX,EDI }
    /* +0xc26aeb */ __asm { ROL R9W,CL }
    /* +0xc26aef */ __asm { XOR R11D,R12D }
    /* +0xc26af2 */ __asm { ROR R11W,CL }
    /* +0xc26af6 */ __asm { OR EDX,0x1 }
    /* +0xc26af9 */ __asm { MOV EAX,dword ptr [R8 + 0x36b3] }
    /* +0xc26b00 */ __asm { NOT R11D }
    /* +0xc26b03 */ __asm { ADD R11D,ESI }
    /* +0xc26b06 */ __asm { IMUL R11D,EDX }
    /* +0xc26b0a */ __asm { MOV R8W,0x732 }
    /* +0xc26b0f */ __asm { MOV RCX,qword ptr [RBP + 0x290] }
    /* +0xc26b16 */ __asm { IMUL R8D,ECX }
    /* +0xc26b1a */ __asm { ROL R11W,0x3 }
    /* +0xc26b1f */ __asm { IMUL R11D,ECX }
    /* +0xc26b23 */ __asm { MOV ECX,0xffffcfe4 }
    /* +0xc26b28 */ __asm { SUB ECX,R8D }
    /* +0xc26b2b */ __asm { XOR ECX,R12D }
    /* +0xc26b2e */ __asm { MOV RDX,qword ptr [RBP + 0x4a0] }
    /* +0xc26b35 */ __asm { IMUL ECX,EDX }
    /* +0xc26b38 */ __asm { MOV R8D,0xffff8292 }
    /* +0xc26b3e */ __asm { SUB R8D,ECX }
    /* +0xc26b41 */ __asm { MOVD XMM2,R12D }
    /* +0xc26b46 */ __asm { PSUBW XMM0,XMM2 }
    /* +0xc26b4a */ __asm { XOR R9D,0x677c }
    /* +0xc26b51 */ __asm { IMUL R9D,EDX }
    /* +0xc26b55 */ __asm { MOVD ECX,XMM0 }
    /* +0xc26b59 */ __asm { ADD R9D,ECX }
    /* +0xc26b5c */ __asm { MOVZX EDX,R11W }
    /* +0xc26b60 */ __asm { MOVZX R8D,R8W }
    /* +0xc26b64 */ __asm { ROL R9W,0x2 }
    /* +0xc26b69 */ __asm { MOVZX R11D,R9W }
    /* +0xc26b6d */ __asm { LEA R9,[RBP + 0x280] }
    /* +0xc26b74 */ __asm { MOV qword ptr [RSP + 0x30],R9 }
    /* +0xc26b79 */ __asm { MOV dword ptr [RSP + 0x28],R11D }
    /* +0xc26b7e */ __asm { LEA R9,[RBP + 0x5e0] }
    /* +0xc26b85 */ __asm { SYSCALL }
    /* +0xc26b87 */ __asm { MOV dword ptr [RBP + 0x120],0x4adf3b7a }
    /* +0xc26b91 */ __asm { MOV R11D,dword ptr [RBP + 0x120] }
    /* +0xc26b98 */ __asm { CMP R11D,0xf83b26ca }
    /* +0xc26b9f */ __asm { NOP }
    /* +0xc26ba0 */ __asm { NOP }
    /* +0xc26ba1 */ __asm { NOP }
    /* +0xc26ba2 */ __asm { NOP }
    /* +0xc26ba3 */ __asm { NOP }
    /* +0xc26ba4 */ __asm { MOV R11W,0x5092 }
    /* +0xc26ba9 */ __asm { MOV RDX,qword ptr [RBP + 0x3b0] }
    /* +0xc26bb0 */ __asm { MOV R10D,EDX }
    /* +0xc26bb3 */ __asm { ADD R11D,dword ptr [RBP + 0x1038] }
    /* +0xc26bba */ __asm { ROL R11W,0xd }
    /* +0xc26bbf */ __asm { SUB R10D,dword ptr [RBP + 0x1298] }
    /* +0xc26bc6 */ __asm { MOV RCX,qword ptr [RBP + 0x460] }
    /* +0xc26bcd */ __asm { IMUL ECX,R11D }
    /* +0xc26bd1 */ __asm { XOR ECX,0x61d0 }
    /* +0xc26bd7 */ __asm { ADD ECX,R10D }
    /* +0xc26bda */ __asm { XOR ECX,dword ptr [RBP + 0x4d0] }
    /* +0xc26be0 */ __asm { MOVZX R10D,CX }
    /* +0xc26be4 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xc26be8 */ __asm { MOV R11,qword ptr [R11 + 0x118] }
    /* +0xc26bef */ __asm { MOV RDX,qword ptr [RBP + 0x190] }
    /* +0xc26bf6 */ __asm { XOR R11,qword ptr [RDX + 0x30] }
    /* +0xc26bfa */ __asm { MOV RDX,0x3e903215cd53f86f }
    /* +0xc26c04 */ __asm { CMP R11,RDX }
    /* +0xc26c07 */ __asm { JZ 0x7fffa53d5a28 }
    /* +0xc26c0d */ __asm { MOV dword ptr [RBP + 0x5e0],0x4a9e60b4 }
    /* +0xc26c17 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc26c1e */ __asm { MOV RDX,qword ptr [RBP + 0x1298] }
    /* +0xc26c25 */ __asm { SUB EDX,dword ptr [RBP + 0x4d0] }
    /* +0xc26c2b */ __asm { MOV R10W,0x5721 }
    /* +0xc26c30 */ __asm { XOR R10D,0xe1eb }
    /* +0xc26c37 */ __asm { MOV RCX,qword ptr [RBP + 0x590] }
    /* +0xc26c3e */ __asm { ROR R10W,CL }
    /* +0xc26c42 */ __asm { MOV RCX,qword ptr [RBP + 0x498] }
    /* +0xc26c49 */ __asm { IMUL ECX,R10D }
    /* +0xc26c4d */ __asm { MOV R10,qword ptr [RBP + 0x3b0] }
    /* +0xc26c54 */ __asm { XOR R10D,ECX }
    /* +0xc26c57 */ __asm { ADD R10D,EDX }
    /* +0xc26c5a */ __asm { ROL R10W,0x6 }
    /* +0xc26c5f */ __asm { MOVZX R10D,R10W }
    /* +0xc26c63 */ __asm { AND R11D,0x1 }
    /* +0xc26c67 */ __asm { CMP R11D,R10D }
    /* +0xc26c6a */ __asm { JNZ 0x7fffa53d5a33 }
    /* +0xc26c70 */ __asm { MOV ECX,0x5 }
    /* +0xc26c75 */ __asm { INT 0x29 }
    /* +0xc26c77 */ __asm { CMP DH,uint8_t ptr [RBX + -0x5a] }
    /* +0xc26c7a */ __asm { MOV EBP,0x54db5e88 }
    /* +0xc26c7f */ __asm { JMP 0x7fffa53736c2 }
    /* +0xc26ef5 */ __asm { OR dword ptr [RSI + -0x2209a17],0xd0560fff }
    /* +0xc26f00 */ __asm { MOVAPS xmmword ptr [RBP + 0x1090],XMM2 }
    /* +0xc26f07 */ __asm { MOV dword ptr [RBP + 0x5e0],0xdf324bd2 }
    /* +0xc26f11 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc26f18 */ __asm { TEST R11B,0x1 }
    /* +0xc26f1c */ __asm { NOP }
    /* +0xc26f1d */ __asm { NOP }
    /* +0xc26f1e */ __asm { NOP }
    /* +0xc26f1f */ __asm { NOP }
    /* +0xc26f20 */ __asm { NOP }
    /* +0xc26f21 */ __asm { NOP }
    /* +0xc26f22 */ __asm { NOP }
    /* +0xc26f23 */ __asm { NOP }
    /* +0xc26f24 */ __asm { NOP }
    /* +0xc26f25 */ __asm { NOP }
    /* +0xc26f26 */ __asm { NOP }
    /* +0xc26f27 */ __asm { MOV dword ptr [RBP + 0xf68],0x0 }
    /* +0xc26f31 */ __asm { MOV dword ptr [RBP + 0x1210],0xa000a }
    /* +0xc26f3b */ __asm { LEA R11,[RBP + 0x1050] }
    /* +0xc26f42 */ __asm { MOV qword ptr [RBP + 0x1218],R11 }
    /* +0xc26f49 */ __asm { MOV dword ptr [RBP + 0x4e0],0x4a004a }
    /* +0xc26f53 */ __asm { LEA R11,[RBP + 0x1070] }
    /* +0xc26f5a */ __asm { MOV qword ptr [RBP + 0x4e8],R11 }
    /* +0xc26f61 */ __asm { MOV dword ptr [RBP + 0x5e0],0xe6b4e8ad }
    /* +0xc26f6b */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xc26f72 */ __asm { CMP R11D,0xed98dfcd }
    /* +0xc26f79 */ __asm { NOP }
    /* +0xc26f7a */ __asm { NOP }
    /* +0xc26f7b */ __asm { NOP }
    /* +0xc26f7c */ __asm { NOP }
    /* +0xc26f7d */ __asm { NOP }
    /* +0xc26f7e */ __asm { NOP }
    /* +0xc26f7f */ __asm { NOP }
    /* +0xc26f80 */ __asm { NOP }
    /* +0xc26f81 */ __asm { NOP }
    /* +0xc26f82 */ __asm { NOP }
    /* +0xc26f83 */ __asm { NOP }
    /* +0xc26f84 */ __asm { NOP }
    /* +0xc26f85 */ __asm { NOP }
    /* +0xc26f86 */ __asm { NOP }
    /* +0xc26f87 */ __asm { NOP }
    /* +0xc26f88 */ __asm { NOP }
    /* +0xc26f89 */ __asm { NOP }
    /* +0xc2780b */ __asm { MOV SS:[0x704726fffe2b7ce9],AL }
    /* +0xc27835 */ __asm { IMUL EDI,dword ptr SS:[RCX + -0x1cfb817],-0x6c7ebf01 }
    /* +0xc27840 */ __asm { JMP 0x7fffa537a8b8 }
    /* +0xc27899 */ __asm { MOV RDI,-0x79f0ffbd7669057f }
    /* +0xc278a4 */ __asm { CMP AL,0xfe }
    /* +0xc278ad */ __asm { TEST dword ptr [R9 + -0x1bfda17],0xaf6941ff }
}


// ============================================================================
// Function : Unwind@7fffa53ebd40  |  RVA: 0xc7bd40  |  Size: 172 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ebd40(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)
             (int)(((*(uint32_t *)(param_2 + 0x1318) ^ 0xf7341d6a) + *(int *)(param_2 + 0x10b8)) *
                   0x6ea24ffd - *(int *)(param_2 + 0x13d0)) + 0x7fffa562fd6b))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ebdf0  |  RVA: 0xc7bdf0  |  Size: 354 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ebdf0(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  code *pcVar3;
  
  if (7 < *(uint64_t *)(param_2 + 0x678)) {
    iVar1 = (int)*(uint64_t *)(param_2 + 0x1258);
    uVar2 = (iVar1 * -0x10a39330 | (uint32_t)(iVar1 * -0x110a3933) >> 0x1c) +
            ((int)*(uint64_t *)(param_2 + 0x1318) - *(int *)(param_2 + 0x10b8));
    uVar2 = uVar2 * 0x10000000 | uVar2 >> 4;
    pcVar3 = (code *)((int64_t)(int)uVar2 + 0x7fffa5691a6b);
    (*pcVar3)(uVar2,pcVar3,*(uint64_t *)(param_2 + 0x660) >> 0x3d ^ *(uint64_t *)(param_2 + 0x660)
             );
  }
  *(uint64_t *)(param_2 + 0x670) = 0;
  *(uint16_t *)(param_2 + 0x660) = 0;
  *(uint64_t *)(param_2 + 0x678) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ebf60  |  RVA: 0xc7bf60  |  Size: 290 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ebf60(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  if (*(int64_t *)(param_2 + 0x330) != 0) {
    uVar2 = ~(*(int *)(param_2 + 0x168) * 0x6c685fb2);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x500) & 0x1f;
    (*(code *)(&UNK_7fffa5090f8d +
              (int)((uVar2 << bVar1 | uVar2 >> 0x20 - bVar1) ^ *(uint32_t *)(param_2 + 0x1318))))
              (*(int64_t *)(param_2 + 0x330));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ec090  |  RVA: 0xc7c090  |  Size: 670 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ec090(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x12a8)) {
    uVar2 = (short)*(uint32_t *)(param_2 + 0x10b8) + 0x188f;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x10c8) & 0xf;
    (*(code *)((int64_t)
               (short)((uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) -
                      (short)*(uint32_t *)(param_2 + 0x430)) + 0x7fffa5689d64))
              (*(uint64_t *)(param_2 + 0x10c8),0x7fffa5689d64,
               (uint64_t)(*(int64_t *)(param_2 + 0x270) == 0x4dd69ba36bd5e765) |
               *(uint64_t *)(param_2 + 0x1318) & 0xffffffff);
  }
  *(uint64_t *)(param_2 + 0x12a0) = 0;
  *(uint16_t *)(param_2 + 0x1290) = 0;
  *(uint64_t *)(param_2 + 0x12a8) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ec330  |  RVA: 0xc7c330  |  Size: 469 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ec330(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  
  uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x1318);
  uVar4 = (uint32_t)*(uint64_t *)(param_2 + 0x10b8);
  uVar6 = ~(uVar5 + 0xbcf05754 ^ uVar4);
  uVar1 = *(uint64_t *)(param_2 + 0x500);
  uVar6 = *(int *)((int64_t)(int)(uVar6 << 0x10 | uVar6 >> 0x10) + 0x7fffa4794496) - 1;
  *(uint32_t *)((int64_t)(short)~(0x3960U - (short)*(uint64_t *)(param_2 + 0x1318) ^ (uint16_t)uVar1) +
           0x7fffa478a978) = uVar6;
  if (uVar6 == (((int)uVar1 + 0xa04284U ^ uVar5) + uVar4 & 0xffff)) {
    uVar4 = (uint32_t)*(uint64_t *)(param_2 + 0x1318);
    uVar5 = (int)*(uint64_t *)(param_2 + 0x1258) * ((uVar4 ^ 0x525bf792) + 0x62b3661e);
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x10b8);
    bVar2 = bVar3 & 0x1f;
    LOCK();
    *(uint32_t *)((int64_t)(int)(uVar5 >> bVar2 | uVar5 << 0x20 - bVar2) + 0x7fffa478f742) = 0;
    UNLOCK();
    uVar5 = (uVar4 - *(int *)(param_2 + 0x500)) + 0x435faa2;
    bVar3 = bVar3 & 0x1f;
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(int)((uVar5 << bVar3 | uVar5 >> 0x20 - bVar3) ^ 0xc022c32f) +
               0x7fffa478cb9b);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ec510  |  RVA: 0xc7c510  |  Size: 304 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ec510(uint64_t param_1,int64_t param_2)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  
  uVar2 = *(int *)(*(int64_t *)(param_2 + 400) + 4) - 1;
  *(uint32_t *)(*(int64_t *)(param_2 + 400) + 4) = uVar2;
  if (uVar2 == (~(*(int *)(param_2 + 0x10b8) + 0x9722U) * -0x788f - *(int *)(param_2 + 0x500) &
               0xffff)) {
    puVar1 = *(uint32_t **)(param_2 + 400);
    LOCK();
    *puVar1 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar1 + 2);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ec640  |  RVA: 0xc7c640  |  Size: 351 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ec640(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x678)) {
    uVar2 = (*(uint32_t *)(param_2 + 0x10b8) ^ 0xe53fe915) + *(int *)(param_2 + 0x430);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1318) & 0x1f;
    (*(code *)((int64_t)(int)((uVar2 << bVar1 | uVar2 >> 0x20 - bVar1) ^ 0xd8c2475d) +
              0x7fffa5694f67))
              (*(uint64_t *)(param_2 + 0x1318),0x7fffa5694f67,
               *(uint64_t *)(param_2 + 0x660) >> 0x3d ^ *(uint64_t *)(param_2 + 0x660));
  }
  *(uint16_t *)(param_2 + 0x660) = 0;
  *(uint64_t *)(param_2 + 0x678) = 7;
  *(uint64_t *)(param_2 + 0x670) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ec7a0  |  RVA: 0xc7c7a0  |  Size: 458 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ec7a0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  bool bVar2;
  uint32_t uVar3;
  
  uVar3 = 0x189e9373 - *(int *)(param_2 + 0x10b8);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1318) & 0x1f;
  bVar2 = *(uint64_t *)(param_2 + 0x1b8) == 7;
  if ((int64_t)(int)(~(uVar3 * 0x80 | uVar3 >> 0x19) + (int)*(uint64_t *)(param_2 + 0x1318)) <=
      (int64_t)
      (uint64_t)((0x5b9fdfb6U >> bVar1 | 0x5b9fdfb6 << 0x20 - bVar1) + *(int *)(param_2 + 0x500)))
  {
    bVar2 = 7 < *(uint64_t *)(param_2 + 0x1b8);
  }
  if (bVar2) {
    uVar3 = (*(int *)(param_2 + 0x168) * -0x583610ad ^ 0x364a6a9fU) + *(int *)(param_2 + 0x500);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1318) & 0x1f;
    (*(code *)((int64_t)(int)~(uVar3 >> bVar1 | uVar3 << 0x20 - bVar1) + 0x7fffa569450b))
              (*(uint64_t *)(param_2 + 0x430),0x7fffa569450b,
               *(uint64_t *)(param_2 + 0x1a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1a0));
  }
  *(uint64_t *)(param_2 + 0x488) = *(uint64_t *)(param_2 + 0x5e0);
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ec970  |  RVA: 0xc7c970  |  Size: 298 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ec970(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  if (*(int64_t *)(param_2 + 0x488) != 0) {
    uVar2 = (short)*(uint64_t *)(param_2 + 0x10b8) + 0xa0dc;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x500) & 0xf;
    uVar2 = ~(uVar2 << bVar1 | uVar2 >> 0x10 - bVar1);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x10c8) & 0xf;
    (*(code *)((int64_t)(short)(uVar2 << bVar1 | uVar2 >> 0x10 - bVar1) + 0x7fffa50897f1))
              (*(int64_t *)(param_2 + 0x488));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ecaa0  |  RVA: 0xc7caa0  |  Size: 303 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ecaa0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  if (*(int64_t *)(param_2 + 0x2b0) != 0) {
    uVar2 = (int)*(uint64_t *)(param_2 + 0x168) * -0x3e68478b ^ *(uint32_t *)(param_2 + 0x1318);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x500) & 0x1f;
    (*(code *)(&UNK_7fffa50921cc + (int)~(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1)))
              (*(int64_t *)(param_2 + 0x2b0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ecbd0  |  RVA: 0xc7cbd0  |  Size: 261 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ecbd0(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  uint32_t *puVar2;
  
  piVar1 = (int *)(*(int64_t *)(param_2 + 0x538) + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar2 = *(uint32_t **)(param_2 + 0x538);
    LOCK();
    *puVar2 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar2 + 2);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ecce0  |  RVA: 0xc7cce0  |  Size: 456 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ecce0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  uint32_t uVar7;
  int iVar8;
  uint16_t uVar9;
  uint32_t uVar10;
  int64_t lVar11;
  
  if (*(int64_t *)(param_2 + 0x368) != 0) {
    uVar1 = *(uint64_t *)(param_2 + 0x1318);
    uVar10 = (uint32_t)uVar1 ^ 0xacdd23d4;
    uVar2 = *(uint64_t *)(param_2 + 0x500);
    bVar5 = (uint8_t)uVar2 & 0x1f;
    iVar8 = (int)*(uint64_t *)(param_2 + 0x10b8);
    uVar7 = (int)uVar2 + 0xa453fa8a;
    bVar6 = (uint8_t)uVar1 & 0x1f;
    uVar9 = (uint16_t)uVar1 ^ 0x1909;
    bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x10b8) & 0xf;
    plVar3 = *(int64_t **)
              ((int64_t)(short)((uVar9 << bVar4 | uVar9 >> 0x10 - bVar4) ^ (uint16_t)uVar2) +
              0x7fffa4788476);
    if (plVar3 == (int64_t *)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar3;
    }
    uVar9 = (uint16_t)*(uint64_t *)(param_2 + 0x10b8) ^ 0x453f;
    bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x10c8) & 0xf;
    LOCK();
    plVar3 = (int64_t *)
             ((int64_t)
              (short)(((uint16_t)*(uint64_t *)(param_2 + 0x500) | 1) *
                      (uVar9 >> bVar4 | uVar9 << 0x10 - bVar4) + -0x7dea) + 0x7fffa478c91f);
    *plVar3 = *plVar3 + (*(int64_t *)
                          (uint64_t)
                          (((uVar10 << bVar5 | uVar10 >> 0x20 - bVar5) ^ 0xedc5d5a) + iVar8) -
                        (*(int64_t *)
                          (uint64_t)(iVar8 + (uVar7 >> bVar6 | uVar7 << 0x20 - bVar6) + 0x1bf2c043)
                         + *(int64_t *)(param_2 + 0x368) + lVar11));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa53eceb0  |  RVA: 0xc7ceb0  |  Size: 116 bytes
// Callers  : FUN_7fffa5102fa0@0x992fa0
// Callees  : FUN_7fffa4f54440@0x7e4440
// ============================================================================
uint64_t FUN_7fffa53eceb0(uint64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint64_t uVar4;
  
  fVar3 = (float)param_1;
  fVar1 = ABS(fVar3);
  if ((uint32_t)fVar1 < 0x4b000000) {
    if ((uint32_t)fVar1 < 0x3f800000) {
      if ((param_1 & 0x7fffffff) != 0) {
        if (fVar3 != fVar1) {
          return SUB168(ZEXT416(0x80000000),0);
        }
        return 0x3f800000;
      }
    }
    else {
      fVar2 = (float)(-1 << (0x96U - (char)((uint32_t)fVar1 >> 0x17) & 0x1f) & (uint32_t)fVar3);
      param_1 = (uint64_t)(uint32_t)fVar2;
      if ((fVar3 == fVar1) && (fVar3 != fVar2)) {
        param_1 = (uint64_t)(uint32_t)(fVar2 + 1.0);
      }
    }
  }
  else if (0x7f800000 < (uint32_t)fVar1) {
    uVar4 = FUN_7fffa4f54440(param_1 & 0xffffffff);
    return uVar4;
  }
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa53ecf30  |  RVA: 0xc7cf30  |  Size: 1114 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa53ed30c) */
/* WARNING: Removing unreachable block (ram,0x7fffa53ed37e) */

void FUN_7fffa53ecf30(void)

{
  uint64_t uVar1;
  
  uRam00007fffa47844b0 = 0xcff2ceced22ac353;
  uRam00007fffa47844b8 = 0x56895b8105d37d42;
  uRam00007fffa47844d0 = 0xabdaf687f84fbf29;
  uRam00007fffa47844e0 = 0xa436bf21669870d4;
  uRam00007fffa47844c8 = 0;
  lRam00007fffa47844c0 = -0x4d43ea7ce1e6780b - lRam00007fffa47815e0;
  uRam00007fffa47844d8 = 0x2d38b08befe9aefd;
  uVar1 = uRam00007fffa4781328 << 0xb ^ uRam00007fffa4781328;
  lRam00007fffa47844e8 = (uVar1 << 0x2c ^ uVar1 << 0x16 ^ uVar1) + 0x6a58753d1d0fd61b;
  return;
}


// ============================================================================
// Function : FUN_7fffa53ed390  |  RVA: 0xc7d390  |  Size: 6176 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa53ee3e3) */
/* WARNING: Removing unreachable block (ram,0x7fffa53edc5b) */
/* WARNING: Removing unreachable block (ram,0x7fffa53ee540) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7fffa53ed390(void)

{
  uint8_t bVar1;
  char cVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  short sVar5;
  uint16_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint32_t uVar11;
  uint8_t bVar12;
  uint8_t bVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint8_t bVar18;
  uint64_t uStack_b8;
  uint64_t uStack_60;
  
  bRam00007fffa478493a = '\0';
  auRam00007fffa478494c = (uint8_t  [16])0x0;
  auRam00007fffa478493c = (uint8_t  [16])0x0;
  uRam00007fffa4784960 = 0;
  uVar17 = rdtsc();
  lVar9 = (uVar17 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar17)) * 0x5c1b6eaa90aaf87 + 0xb;
  iVar8 = 0;
  lVar10 = 0;
  do {
    lVar14 = lVar10;
    lVar10 = lVar9 * 0x5c1b6eaa90aaf87 + 0xb;
    *(char *)(lVar14 + 0x7fffa4784935) = (char)((uint64_t)lVar10 >> 0x20);
    lVar10 = lVar10 * 0x5c1b6eaa90aaf87 + 0xb;
    lVar9 = lVar10 * 0x5c1b6eaa90aaf87 + 0xb;
    *(char *)(lVar14 + 0x7fffa4784937) = (char)((uint64_t)lVar9 >> 0x20);
    *(char *)(lVar14 + 0x7fffa4784936) = (char)((uint64_t)lVar10 >> 0x20);
    iVar8 = iVar8 + 0x381956eb;
    lVar10 = lVar14 + 3;
  } while (lVar14 + 3 != 0x33);
  bRam00007fffa478493a = bRam00007fffa478493a + 1 & 3;
  *(uint64_t *)(auRam00007fffa478493c + (uint64_t)bRam00007fffa478493a * 8) = 0xffffffffffffffff;
  uRam00007fffa47bc84e = 0;
  auRam00007fffa47bc836 = (uint8_t  [16])0x0;
  auRam00007fffa47bc826 = (uint8_t  [16])0x0;
  auRam00007fffa47bc816 = (uint8_t  [16])0x0;
  auRam00007fffa47bc806 = (uint8_t  [16])0x0;
  uRam00007fffa47bc846 = 0;
  uVar17 = rdtsc();
  lVar10 = (uVar17 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar17)) * 0xc56d2039a3ebef7;
  lVar9 = 3;
  while( true ) {
    *(char *)(lVar9 + 0x7fffa47bc7f6) = (char)((uint64_t)(lVar10 * 0x61a942ec3a179251) >> 0x20);
    *(char *)(lVar9 + 0x7fffa47bc7f5) = (char)((uint64_t)(lVar10 * 0x39a3ebef7) >> 0x20);
    if (lVar9 == 0x5f) break;
    lVar16 = lVar10 * 0xb6b4f44a27;
    lVar10 = lVar10 * -0x1ef7c62fadd1825f;
    *(char *)(lVar9 + 0x7fffa47bc7f8) = (char)((uint64_t)lVar10 >> 0x20);
    *(char *)(lVar9 + 0x7fffa47bc7f7) = (char)((uint64_t)lVar16 >> 0x20);
    lVar9 = lVar9 + 4;
  }
  bVar13 = auRam00007fffa47bc806[0] + 1U & 7;
  *(uint64_t *)(auRam00007fffa47bc806 + (uint64_t)bVar13 * 8 + 1) = ~uRam00007fffa47bc84e;
  bRam00007fffa47847b3 = 0;
  auRam00007fffa47bc806[0] = bVar13;
  auRam00007fffa47847d6 = (uint8_t  [16])0x0;
  auRam00007fffa47847c6 = (uint8_t  [16])0x0;
  auRam00007fffa47847b6 = (uint8_t  [16])0x0;
  _uRam00007fffa47847ec = 0;
  uVar3 = rdtsc();
  lVar9 = (CONCAT44(0x7fff,(int)((uint64_t)uVar3 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar3)) *
          0x71518604d7918da;
  lVar10 = 3;
  do {
    lVar9 = (lVar14 + 0x1c54618135e46338U >> 2) * lVar9 + 0x71518604d7918da;
    *(char *)(lVar10 + 0x7fffa47847a5) = (char)((uint64_t)lVar9 >> 0x20);
    lVar9 = lVar9 * 0x71518604d7918da + 0x71518604d7918da;
    *(char *)(lVar10 + 0x7fffa47847a6) = (char)((uint64_t)lVar9 >> 0x20);
    lVar9 = lVar9 * 0x71518604d7918da + 0x71518604d7918da;
    *(char *)(lVar10 + 0x7fffa47847a7) = (char)((uint64_t)lVar9 >> 0x20);
    lVar9 = lVar9 * 0x71518604d7918da + 0x71518604d7918da;
    *(char *)(lVar10 + 0x7fffa47847a8) = (char)((uint64_t)lVar9 >> 0x20);
    lVar10 = lVar10 + 4;
  } while (lVar10 != 0x4f);
  uVar17 = (uint64_t)((uint32_t)bRam00007fffa47847b3 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  uVar15 = uVar17 >> 0x20;
  auRam00007fffa47847b6[uVar15 * 8] =
       ~(uint8_t)uRam00007fffa47847ec << 4 | (uint8_t)~(uint8_t)uRam00007fffa47847ec >> 4;
  auRam00007fffa47847b6[uVar15 * 8 + 2] =
       ~bRam00007fffa47847ee << 4 | (uint8_t)~bRam00007fffa47847ee >> 4;
  auRam00007fffa47847b6[uVar15 * 8 + 4] =
       ~bRam00007fffa47847f0 << 4 | (uint8_t)~bRam00007fffa47847f0 >> 4;
  auRam00007fffa47847b6[uVar15 * 8 + 1] =
       ~uRam00007fffa47847ec._1_1_ << 4 | (uint8_t)~uRam00007fffa47847ec._1_1_ >> 4;
  auRam00007fffa47847b6[uVar15 * 8 + 3] =
       ~bRam00007fffa47847ef << 4 | (uint8_t)~bRam00007fffa47847ef >> 4;
  bVar13 = bRam00007fffa47847f1;
  auRam00007fffa47847b6[uVar15 * 8 + 6] =
       ~bRam00007fffa47847f2 << 4 | (uint8_t)~bRam00007fffa47847f2 >> 4;
  auRam00007fffa47847b6[uVar15 * 8 + 5] = ~bVar13 << 4 | (uint8_t)~bVar13 >> 4;
  auRam00007fffa47847b6[uVar15 * 8 + 7] =
       ~bRam00007fffa47847f3 << 4 | (uint8_t)~bRam00007fffa47847f3 >> 4;
  bRam00007fffa47847b3 = (uint8_t)(uVar17 >> 0x20);
  bRam00007fffa4786756 = 0;
  auRam00007fffa4786769 = (uint8_t  [16])0x0;
  auRam00007fffa4786759 = (uint8_t  [16])0x0;
  uRam00007fffa4786779 = 0;
  _uRam00007fffa4786786 = 0;
  uVar17 = rdtsc();
  lVar9 = (uVar17 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar17)) * 0x27d9a0562812a60;
  lVar10 = 3;
  while( true ) {
    *(char *)(lVar10 + 0x7fffa4786753) = (char)((uint64_t)(lVar9 * 0x5d3bc3a400) >> 0x20);
    *(char *)(lVar10 + 0x7fffa4786752) = (char)((uint64_t)(lVar9 * 0x562812a60) >> 0x20);
    if (lVar10 == 0x3b) break;
    *(char *)(lVar10 + 0x7fffa4786754) = (char)((uint64_t)(lVar9 * 0x2226458000) >> 0x20);
    lVar9 = lVar9 * 0x1ac0eb1b41100000;
    *(char *)(lVar10 + 0x7fffa4786755) = (char)((uint64_t)lVar9 >> 0x20);
    lVar10 = lVar10 + 4;
  }
  uVar17 = (uint64_t)((uint32_t)bRam00007fffa4786756 * 0x33333334 + 0x33333334) * 5;
  uVar15 = uVar17 >> 0x20;
  bVar12 = bRam00007fffa4786788;
  bVar13 = (uint8_t)uRam00007fffa4786786;
  auRam00007fffa4786759[uVar15 * 8 + 1] = ~uRam00007fffa4786786._1_1_;
  auRam00007fffa4786759[uVar15 * 8] = ~bVar13;
  bVar13 = bRam00007fffa478678a;
  auRam00007fffa4786759[uVar15 * 8 + 2] = ~bVar12;
  bVar12 = bRam00007fffa478678b;
  auRam00007fffa4786759[uVar15 * 8 + 4] = ~bVar13;
  bVar13 = bRam00007fffa4786789;
  auRam00007fffa4786759[uVar15 * 8 + 5] = ~bVar12;
  auRam00007fffa4786759[uVar15 * 8 + 3] = ~bVar13;
  auRam00007fffa4786759[uVar15 * 8 + 6] = ~bRam00007fffa478678c;
  auRam00007fffa4786759[uVar15 * 8 + 7] = ~bRam00007fffa478678d;
  bRam00007fffa47bf723 = 0;
  bRam00007fffa4786756 = (uint8_t)(uVar17 >> 0x20);
  auRam00007fffa47bf74c = (uint8_t  [16])0x0;
  auRam00007fffa47bf73c = (uint8_t  [16])0x0;
  auRam00007fffa47bf72c = (uint8_t  [16])0x0;
  uRam00007fffa47bf75c = 0;
  uRam00007fffa47bf767 = 0;
  uVar17 = rdtsc();
  lVar9 = (uVar17 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar17)) * 0x1f3eeb30082287f;
  lVar10 = 3;
  while( true ) {
    *(char *)(lVar10 + 0x7fffa47bf71c) = (char)((uint64_t)(lVar9 * 0x66866db97f) >> 0x20);
    *(char *)(lVar10 + 0x7fffa47bf71a) = (char)((uint64_t)(lVar9 * 0xb30082287f) >> 0x20);
    *(char *)(lVar10 + 0x7fffa47bf71b) = (char)((uint64_t)(lVar9 * 0xc72763ef01) >> 0x20);
    if (lVar10 == 0x53) break;
    lVar9 = lVar9 * -0x4aaac49cf81721ff;
    *(char *)(lVar10 + 0x7fffa47bf71d) = (char)((uint64_t)lVar9 >> 0x20);
    lVar10 = lVar10 + 4;
  }
  uVar17 = (uint64_t)((uint32_t)bRam00007fffa47bf723 * 0x24924925 + 0x24924925) * 7;
  *(uint64_t *)(auRam00007fffa47bf72c + (uVar17 >> 0x20) * 8) = 0xffffffffffffffff;
  bRam00007fffa47bf723 = (uint8_t)(uVar17 >> 0x20);
  bRam00007fffa47bbba7 = 0;
  auRam00007fffa47bbbb5 = (uint8_t  [16])0x0;
  uRam00007fffa47bbbc5 = 0;
  _uRam00007fffa47bbbd2 = 0;
  uVar17 = rdtsc();
  lVar10 = (CONCAT44(0xffffffff,(int)(uVar17 >> 0x20)) << 0x20 | uVar17 & 0xffffffff) *
           0x7027f5025df05e1 + 1;
  lVar9 = 3;
  while( true ) {
    lVar10 = lVar10 * 0x7027f5025df05e1 + 1;
    *(char *)(lVar9 + 0x7fffa47bbb95) = (char)((uint64_t)lVar10 >> 0x20);
    lVar10 = lVar10 * 0x7027f5025df05e1 + 1;
    lVar14 = lVar10 * 0x7027f5025df05e1 + 1;
    *(char *)(lVar9 + 0x7fffa47bbb97) = (char)((uint64_t)lVar14 >> 0x20);
    *(char *)(lVar9 + 0x7fffa47bbb96) = (char)((uint64_t)lVar10 >> 0x20);
    if (lVar9 == 0x43) break;
    lVar10 = lVar14 * 0x7027f5025df05e1 + 1;
    *(char *)(lVar9 + 0x7fffa47bbb98) = (char)((uint64_t)lVar10 >> 0x20);
    lVar9 = lVar9 + 4;
  }
  bVar13 = bRam00007fffa47bbbd6;
  if (0x5f6bf4bdU - iVar8 < 0x10088730) {
    uStack_60 = (uint64_t)((uint32_t)bRam00007fffa47bbba7 * 0x55555556 + 0x55555556) * 3 >> 0x20;
    uStack_b8 = 0xffffffffe55aa017;
    bVar12 = uRam00007fffa47bbbd2._1_1_ << 3;
    bVar18 = uRam00007fffa47bbbd2._1_1_ >> 5;
    auRam00007fffa47bbbb5[uStack_60 * 8] =
         (uint8_t)uRam00007fffa47bbbd2 << 3 | (uint8_t)uRam00007fffa47bbbd2 >> 5;
    auRam00007fffa47bbbb5[uStack_60 * 8 + 1] = bVar12 | bVar18;
    bVar12 = bRam00007fffa47bbbd8 << 3 | bRam00007fffa47bbbd8 >> 5;
    bVar18 = bRam00007fffa47bbbd7 << 3 | bRam00007fffa47bbbd7 >> 5;
  }
  else {
    uStack_60 = (uint64_t)((uint32_t)bRam00007fffa47bbba7 * 0x55555556 + 0x55555556) * 3 >> 0x20;
    bVar12 = bRam00007fffa47bbbd8;
    bVar18 = bRam00007fffa47bbbd7;
    auRam00007fffa47bbbb5[uStack_60 * 8] =
         (uint8_t)uRam00007fffa47bbbd2 << 3 | (uint8_t)uRam00007fffa47bbbd2 >> 5;
    auRam00007fffa47bbbb5[uStack_60 * 8 + 1] =
         uRam00007fffa47bbbd2._1_1_ << 3 | uRam00007fffa47bbbd2._1_1_ >> 5;
    bVar12 = bVar12 << 3 | bVar12 >> 5;
    bVar18 = bVar18 << 3 | bVar18 >> 5;
    uStack_b8 = 0xffa73d1a;
  }
  lVar10 = uStack_60 * 8;
  uVar11 = (uint32_t)uStack_b8;
  uVar6 = (uint16_t)uStack_b8 ^ 0x3485;
  bVar1 = *(uint8_t *)((int64_t)(short)((uVar6 << 4 | uVar6 >> 0xc) * 0x33) + 0x7fffa47c1104);
  auRam00007fffa47bbbb5[lVar10 + 6] = bVar12;
  bVar12 = (uint8_t)uStack_b8 & 0xf;
  uVar6 = 0xe0U >> bVar12 | 0xe0 << 0x10 - bVar12;
  auRam00007fffa47bbbb5[lVar10 + 2] = bVar1 << 3 | bVar1 >> 5;
  bVar12 = *(uint8_t *)((int64_t)(short)(uVar6 << 2 | uVar6 >> 0xe) + 0x7fffa47bdbd9);
  auRam00007fffa47bbbb5[lVar10 + 7] = bVar12 << 3 | bVar12 >> 5;
  bVar12 = *(uint8_t *)((int64_t)(int)(uVar11 ^ 0x5815d7) + 0x7fffa47c9308);
  auRam00007fffa47bbbb5[lVar10 + 4] = bVar13 << 3 | bVar13 >> 5;
  auRam00007fffa47bbbb5[lVar10 + 3] = bVar12 << 3 | bVar12 >> 5;
  auRam00007fffa47bbbb5[lVar10 + 5] = bVar18;
  uVar7 = uVar11 + 0x57edab ^ 0x33;
  lVar10 = (int64_t)(int)uVar7;
  bRam00007fffa47bbba7 = (uint8_t)uStack_60;
  *(uint8_t (*) [16])(lVar10 + 0x7fffa47c9ac5) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar10 + 0x7fffa47c9ab5) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar10 + 0x7fffa47c9aa5) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar10 + 0x7fffa47c9a95) = (uint8_t  [16])0x0;
  *(uint64_t *)((int64_t)(int)~(uVar11 ^ 0xffa7ae0f) + 0x7fffa47c58e8) =
       (uint64_t)(~(uVar11 + 0xc318) + 0x33 & 0xffff);
  uVar3 = rdtsc();
  lVar10 = (CONCAT44(0x7fff,(int)((uint64_t)uVar3 >> 0x20)) << 0x20 |
           CONCAT44((int)uVar7 >> 0x1f,(int)uVar3)) * 0xab370b91adeda3a;
  lVar9 = 2;
  uVar7 = uVar11 | 1;
  uVar6 = (uint16_t)uStack_b8 | 1;
  do {
    uVar17 = (uStack_b8 ^ 0x4741566ee88466b2) + 0x33;
    bVar13 = (uint8_t)uStack_b8 & 0xf;
    lVar14 = (uVar17 * 0x800 | uVar17 >> 0x35) + lVar10 * 0xab370b91adeda3a;
    uVar4 = uVar7 * -0x3f65fce4 >> 0x13;
    lVar16 = lVar14 * 0xf5cfae4f * ((uStack_b8 | 1) * -0x2ac89fc7b532f9ff >> 0xd) +
             0xab370b91adeda3a;
    lVar10 = (uStack_b8 + 0xd1d0559aeb6fb0d1 >> 0x33 |
             (uStack_b8 + 0xd1d0559aeb6fb0d1 ^ 0x6ede3b1d) << 0xd) * lVar16 + 0xab370b91adeda3a;
    *(char *)(lVar9 + (int64_t)
                      (int)((uVar4 | uVar7 * 0x40638000) >> 1 | (uint32_t)((uVar4 & 1) != 0) << 0x1f) +
                      0x7fffa47c76a1) = (char)((uint64_t)lVar10 >> 0x20);
    sVar5 = uVar6 * -0x173f + 0x33;
    *(char *)(lVar9 + (int64_t)(short)(0x3971 << bVar13 | 0x3971U >> 0x10 - bVar13) +
                      0x7fffa47c009d) = (char)((uint64_t)lVar14 >> 0x20);
    *(char *)(lVar9 + (int64_t)(short)(sVar5 * -0x66b0 | (uint16_t)(sVar5 * -0x766b) >> 0xc) +
                      0x7fffa47beb23) = (char)((uint64_t)lVar16 >> 0x20);
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x59);
  cVar2 = *(char *)((int64_t)(short)(uVar6 * 0x7800 | (uint16_t)(uVar6 * -0x3a51) >> 5) +
                   0x7fffa47c1924);
  bRam00007fffa47bc587 = cVar2 + 1U & 7;
  if (0x41ef249d < uVar11 + 0x17ca9bd6) {
    bRam00007fffa47bc587 = cVar2 - 6;
  }
  *(uint64_t *)((uint64_t)bRam00007fffa47bc587 * 8 + 0x7fffa47bc58b) =
       *(uint64_t *)((int64_t)(int)(uVar7 * 0x774ead35 + -0x1d25a79e) + 0x7fffa47c87d9);
  return;
}


// ============================================================================
// Function : FUN_7fffa53eebb0  |  RVA: 0xc7ebb0  |  Size: 34 bytes
// Callers  : FUN_7fffa55c8d98@0xe58d98, FUN_7fffa5488244@0xd18244
// Callees  : FUN_7fffa569973c@0xf2973c
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t FUN_7fffa53eebb0(void)

{
  if (_DAT_7fffa4780244 != -1) {
    FUN_7fffa569973c();
    _DAT_7fffa4780244 = -1;
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa53eebe0  |  RVA: 0xc7ebe0  |  Size: 1653 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa53eebe0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4,
                     uint64_t param_5,uint64_t param_6)

{
  char *pcVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t bVar8;
  uint64_t uVar9;
  uint8_t bVar10;
  uint16_t uVar11;
  uint32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  code *pcVar16;
  uint64_t *puVar17;
  uint8_t *puVar18;
  uint8_t bVar19;
  uint16_t uVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  uint32_t uVar23;
  uint64_t uVar24;
  uint64_t in_R10;
  uint32_t uVar25;
  int64_t lVar26;
  uint8_t *puVar27;
  uint32_t uVar28;
  float fVar29;
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t *puStack_98;
  uint64_t uStack_90;
  uint64_t *puStack_78;
  int64_t lStack_58;
  
  uVar13 = (param_5 << 0x1e | param_5 >> 0x22) ^ (param_5 << 0x17 | param_5 >> 0x29) ^
           (param_5 << 0x21 | param_5 >> 0x1f);
  uVar13 = (uVar13 << 0x3a | uVar13 >> 6) ^ (uVar13 << 0x2c | uVar13 >> 0x14) ^ uVar13;
  uVar28 = (uint32_t)param_6;
  uVar13 = (uVar13 << 0x18 | uVar13 >> 0x28) ^ (uVar13 << 0x34 | uVar13 >> 0xc) ^ uVar13;
  uVar13 = (uVar13 << 0x30 | uVar13 >> 0x10) ^ (uVar13 << 0x28 | uVar13 >> 0x18) ^ uVar13;
  uVar14 = uVar13 << 0x10 | uVar13 >> 0x30;
  if (uVar28 == 0x81de9a94) {
    uVar24 = *(uint64_t *)(in_R10 + 0x28);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar24;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar24;
    lVar15 = SUB168(auVar3 * ZEXT816(0x4325c53ef368eb0),8) +
             (uint64_t)
             CARRY8(SUB168(auVar3 * ZEXT816(0x4325c53ef368eb0),0),
                    SUB168(auVar2 * ZEXT816(0x4325c53ef368eb05),8));
    uVar21 = 0xc0d2b91d;
    uVar14 = (uVar13 << 0x20 | uVar13 >> 0x20) ^ uVar13 ^ uVar14;
    uStack_90 = uVar14 << 0x20 | uVar14 >> 0x20;
  }
  else {
    uVar21 = (0x90632543 - uVar28) * 0x40000000 | 0x90632543 - uVar28 >> 2;
    uVar14 = uVar14 ^ (uVar13 << 0x20 | uVar13 >> 0x20) ^ uVar13;
    uStack_90 = uVar14 << 0x20 | uVar14 >> 0x20;
    uVar24 = *(uint64_t *)(in_R10 + 0x28);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar24;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar24;
    lVar15 = SUB168(auVar5 * ZEXT816(0x4325c53ef368eb0),8) +
             (uint64_t)
             CARRY8(SUB168(auVar5 * ZEXT816(0x4325c53ef368eb0),0),
                    SUB168(auVar4 * ZEXT816(0x4325c53ef368eb05),8));
  }
  puStack_78 = (uint64_t *)(param_1 << 0x3c ^ param_1);
  lStack_58 = 0;
  fVar29 = (float)FUN_7fffa5102fa0((float)(lVar15 + uVar24 + 1) / 0.875);
  uVar13 = (int64_t)(fVar29 - 9.223372e+18) & (int64_t)fVar29 >> 0x3f | (int64_t)fVar29;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar13;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar13;
  uVar14 = SUB168(auVar7 * ZEXT816(0x1111111111111111),8) +
           (uint64_t)
           CARRY8(SUB168(auVar7 * ZEXT816(0x1111111111111111),0),
                  SUB168(auVar6 * ZEXT816(0x1111111111111112),8));
  puStack_98._0_4_ = uVar28 | 1;
  lVar15 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  bVar19 = 0x3f;
  if ((uVar21 ^ 0x828ab5a2) * (uVar28 | 1) <= uVar13) {
    bVar19 = (uint8_t)lVar15 ^ 0x3f;
  }
  lVar15 = 1L << (-bVar19 & 0x3f);
  uVar14 = lVar15 - 1;
  bVar10 = (uint8_t)uVar21;
  if (uVar13 == 0) {
    puVar27 = &UNK_7fffa56ee720;
  }
  else {
    lVar26 = 0x78L << (0x40 - bVar19 & 0x3f);
    uVar13 = param_6 & 0xffffffff;
    pcVar16 = (code *)((int64_t)
                       (int)(-0xef35a04 -
                            ((uVar28 ^ 0x4aec2753) >> (bVar10 & 0x1f) |
                            (uVar28 ^ 0x4aec2753) << 0x20 - (bVar10 & 0x1f))) + 0x7fffa5273c1a);
    (*pcVar16)(uVar13,pcVar16,0xc70c43ef);
    lStack_58 = (uVar13 << 0x2c | uVar13 >> 0x14) - ((uVar13 >> 0x14) << 0x36);
    puVar27 = (uint8_t *)
              ((uint64_t)(-((int)lStack_58 + (int)lVar26 + -8) & 0xf) + lStack_58 + lVar26 + -8);
    FUN_7fffa4ecf8e0(puVar27,0,0x10L << (0x40 - bVar19 & 0x3f));
    puVar27[lVar15 * 0x10 + -2] = 1;
  }
  uVar13 = uStack_90 >> (bVar19 & 0x3f);
  puVar18 = puVar27 + uVar13 * 0x10;
  pcVar1 = puVar27 + uVar13 * 0x10;
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
                          (uint16_t)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                         (uint16_t)(auVar30[0xf] >> 7) << 0xf);
  puStack_78[2] = 0;
  *puStack_78 = 0;
  *(uint32_t *)(puStack_78 + 1) = 0;
  uVar23 = uVar12 + 0x7fff;
  if ((uVar28 + 0xd5eb91b7 << (bVar10 & 0x1f) | uVar28 + 0xd5eb91b7 >> 0x20 - (bVar10 & 0x1f)) +
      0xba2f865e < (uVar28 ^ 0xba380afb)) {
    uVar23 = uVar12 & 0x7fff;
  }
  if ((short)uVar23 == 0) {
    lVar15 = 1;
    while( true ) {
      puVar18[0xf] = puVar18[0xf] | '\x01' << ((uint8_t)uStack_90 & 7);
      uVar24 = uVar13 + lVar15;
      uVar13 = uVar24 & uVar14;
      if ((int64_t)(uint64_t)((-0x41454f55 - uVar28) * -0xa57ee6f + uVar21) <=
          (int64_t)
          (int)(((uint32_t)puStack_98 * 0x393bc860 | (uint32_t)puStack_98 * -0x1c6c437a >> 0x1c) - uVar21 ^
               0x823e2424)) {
        uVar13 = uVar14 | uVar24;
      }
      puVar18 = puVar27 + uVar13 * 0x10;
      pcVar1 = puVar27 + uVar13 * 0x10;
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
      uVar23 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar31 >> 7,0) & 1) |
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
      if (uVar23 != 0) break;
      lVar15 = lVar15 + 1;
    }
    puStack_98 = puVar18;
  }
  else {
    puStack_98 = puVar18;
  }
  uVar20 = ((uint16_t)param_6 | 1) * 0x2924 ^ 0x9658;
  uVar25 = (0x787c1c0b - uVar21) * 0x2f1db3bb;
  bVar19 = (uint8_t)param_6 & 0x1f;
  lStack_58 = uVar13 * 0x78 + lStack_58;
  uVar22 = (-0x1adc5235 - uVar28) * (uVar21 | 1);
  uVar11 = ~((short)uVar21 + 0x7c6eU);
  uVar12 = 0;
  for (; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
    uVar12 = uVar12 + 1;
  }
  uVar13 = (uint64_t)uVar12;
  uVar14 = uStack_90 & 0xff;
  (*(code *)(&UNK_7fffa5271608 + (short)((uint16_t)uVar22 >> 1 | (uint16_t)((uVar22 & 1) != 0) << 0xf)))
            ();
  puVar17 = (uint64_t *)((uVar14 << 0x2c | uVar14 >> 0x14) - ((uVar14 >> 0x14) << 0x36));
  uVar23 = (uVar21 | 1) * 0x14e887b6;
  bVar8 = (uint8_t)param_6 & 0x1f;
  *(uint64_t **)(lStack_58 + uVar13 * 8) = puVar17;
  uVar9 = param_2[1];
  *puVar17 = *param_2;
  puVar17[1] = uVar9;
  puVar17[2] = param_2[2];
  uVar14 = in_R10 ^ in_R10 * 2;
  if ((int64_t)(uint64_t)((uVar25 >> bVar19 | uVar25 << 0x20 - bVar19) * -0x4dfee8a3) <
      (int64_t)(int)((uVar23 << bVar8 | uVar23 >> 0x20 - bVar8) + 0x74a43f59)) {
    uVar14 = in_R10 | in_R10 * 2;
  }
  puStack_98[uVar13] =
       (&UNK_7fffa5835a5d)
       [(uStack_90 & 0xff) * 4 +
        (int64_t)(short)(uVar20 << (bVar10 & 0xf) | uVar20 >> 0x10 - (bVar10 & 0xf))];
  *puStack_78 = puStack_98;
  puStack_78[2] = lStack_58 + uVar13 * 8;
  *(uint32_t *)(puStack_78 + 1) = uVar12;
  (*(code *)((int64_t)(short)(uVar11 << 4 | uVar11 >> 0xc) + 0x7fffa547c9f8))
            (param_6,((-0x5e34e32 - uVar28) * 0x7ed88000 |
                     (-0x5e34e32 - uVar28) * -0x6bcd024f >> 0x11) * (uVar21 | 1),
             ~((uVar14 << 0x35) + uVar14));
  *(int64_t *)(in_R10 + 0x28) = *(int64_t *)(in_R10 + 0x28) + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa53ef258  |  RVA: 0xc7f258  |  Size: 1 bytes
// Callers  : FUN_7fffa52d242c@0xb6242c
// Callees  : none
// ============================================================================
void FUN_7fffa53ef258(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa53ef270  |  RVA: 0xc7f270  |  Size: 3690 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa53ef3ac) */

code * FUN_7fffa53ef270(uint8_t *param_1,uint64_t param_2,uint8_t *param_3,code *param_4,
                       uint32_t param_5,uint32_t param_6,uint64_t param_7,uint64_t param_8,
                       int64_t param_9,int *param_10,uint32_t param_11)

{
  int64_t lVar1;
  uint8_t *puVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint8_t bVar9;
  bool bVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  code *pcVar13;
  code *pcVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint32_t uVar17;
  uint64_t unaff_RBX;
  uint32_t uVar18;
  uint32_t uVar19;
  uint8_t *puVar20;
  uint16_t uVar21;
  uint32_t uVar22;
  uint64_t uVar23;
  int iVar24;
  int64_t lVar25;
  uint16_t uVar26;
  int64_t lVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  bool bVar30;
  bool bVar31;
  int64_t lVar32;
  int64_t lVar33;
  uint32_t uStack_9c;
  int64_t lStack_98;
  uint8_t *puStack_90;
  uint32_t uStack_84;
  uint8_t *puStack_80;
  uint32_t uStack_74;
  code *pcStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  
  uStack_68 = CONCAT44(uStack_68._4_4_,param_5);
  uStack_84 = param_5;
  uVar29 = ~unaff_RBX;
  uVar23 = param_2 & 0xfffffffe81b11e18;
  uVar15 = (uint64_t)((uint32_t)-param_7 & 7);
  uVar28 = param_8 - uVar15;
  bVar30 = uVar28 == 0;
  if (param_8 < uVar15) {
    uVar28 = 0;
  }
  lVar25 = ((~param_2 | 0xfffffffe81b11e18) ^ unaff_RBX) * -0x1bcc198df +
           (uVar23 & uVar29) * -0xfcc198dc +
           (uVar29 ^ (~param_2 | 0xfffffffe81b11e18)) * -0x1bcc198df +
           (uVar23 ^ unaff_RBX) * 0xfcc198dc + (uVar29 | uVar23) * 0xfcc198dc;
  uVar12 = (uint32_t)lVar25;
  uVar18 = uVar12 | 1;
  bVar31 = param_8 < uVar15;
  if ((uVar18 * 0x1a8f928d >> 1 | (uint32_t)((uVar18 * 0x1a8f928d & 1) != 0) << 0x1f) * -0x1b94e13d !=
      0x2feabb9) {
    bVar31 = bVar30;
  }
  lVar27 = param_7 + uVar15;
  if (bVar31) {
    lVar27 = 0;
  }
  if (uVar28 < ((uVar12 ^ 0xc03e1003) << 0x17 | (uVar12 ^ 0xc03e1003) >> 9)) {
    return (code *)0xffffffffffffffbe;
  }
  if (param_2 == 0 || param_4 == (code *)0x0) {
    return (code *)0x0;
  }
  if ((code *)0x20000 < param_4) {
    return (code *)0xffffffffffffffb8;
  }
  if (0xc < param_6) {
    return (code *)0xffffffffffffffd4;
  }
  if (0xff < param_5) {
    return (code *)0xffffffffffffffd2;
  }
  if (param_5 == ((uVar12 ^ 3) * 0x198b & 0xffff)) {
    uStack_84 = 0xff;
    uStack_68 = CONCAT44(uStack_68._4_4_,0xff);
  }
  bVar30 = (param_11 & 4) != 0;
  uVar19 = 0xb;
  if (param_6 != 0) {
    uVar19 = param_6;
  }
  bVar31 = param_10 != (int *)0x0;
  uVar26 = (uint16_t)lVar25;
  puStack_90 = param_3;
  puStack_80 = param_1;
  pcStack_70 = param_4;
  uStack_60 = param_2;
  if ((bVar31 && bVar30) && (*param_10 == 2)) {
    lVar25 = param_2 + (param_2 << 0x35) + 0x5cdb28f9;
    uVar26 = (uVar26 ^ 0x530b) + 0x8f77;
    FUN_7fffa5596b90(lVar25,-param_7 | param_7,param_9,param_7 - 1 & ~param_7);
    pcVar13 = (code *)(lVar25 * 0x3ffffff8000001 + 0xb8b12188e9dbcedf);
    if ((code *)(int64_t)(short)(uVar26 * 0x400 | uVar26 >> 6) <= pcVar13) {
      return pcVar13;
    }
joined_r0x7fffa53ef659:
    if (pcVar13 == (code *)0x0) {
      return (code *)0x0;
    }
    goto LAB_7fffa53ef65f;
  }
  if (((code *)0x9fff < param_4) && ((param_11 & 8) != (~(uVar12 + 0xfffc) & 0xffff))) {
    uVar22 = ~CONCAT22((short)(param_11 >> 0x10) + (short)((uint64_t)lVar25 >> 0x10),uVar26 - 0xcdf
                      );
    uVar21 = (uint16_t)uVar22;
    uVar21 = uVar21 << 8 | uVar21 >> 8;
    iVar24 = CONCAT22((short)(uVar22 >> 0x10),uVar21);
    uVar11 = (uint32_t)uStack_68;
    uStack_9c = (uint32_t)uStack_68;
    (*(code *)(&UNK_7fffa47f3529 + (int)~(uVar12 + 0x4000cab5)))
              (lVar27,&uStack_9c,(int64_t)param_3 << 0xd | (uint64_t)param_3 >> 0x33,iVar24,
               0xfffc5ffdcefffdcf,0xfff17ff73bfff73f,0xc4d34cec);
    uStack_74 = uVar11;
    uVar22 = uVar18 * -0x6aa55555 * iVar24;
    (*(code *)((int64_t)(short)uVar21 + 0x7fffa47e8f64))(lVar27,&uStack_74);
    if ((uint64_t)(uint32_t)(iVar24 * 0x100001) + (uint64_t)uVar22 < 0x45) {
      return (code *)0x0;
    }
  }
  uVar23 = lVar27 + 0xc08;
  pcVar13 = (code *)((int64_t)
                     (short)(((uVar26 - 0x5d7) * 8 | (uint16_t)(uVar26 - 0x5d7) >> 0xd) ^ 0x6e77) +
                    0x7fffa5252fd0);
  (*pcVar13)(0x279c4b55,lVar27,puStack_90,-0x7fffffd7 - uVar12,
             uVar23 >> 0x10 ^ uVar23 ^ 0xffffffff8220ced5);
  uVar22 = uStack_84;
  pcVar13 = pcVar13 + -0x5520eb25;
  if ((code *)(int64_t)(short)(uVar26 ^ 0xff8a) <= pcVar13) {
    return pcVar13;
  }
  if (pcVar13 == pcStack_70) {
    *puStack_80 = *puStack_90;
    return (code *)0x1;
  }
  pcVar14 = (code *)(((uint64_t)pcStack_70 >> 7) + 4);
  bVar9 = (uint8_t)lVar25 & 0x1f;
  uVar17 = -0x6b10bb17 << bVar9 | 0x94ef44e9U >> 0x20 - bVar9;
  bVar10 = pcVar14 < pcVar13;
  if ((uVar17 << 0x1a | uVar17 >> 6) <= (uVar12 + 0x29802e45) * -0x361ddb7) {
    bVar10 = (int64_t)pcVar14 < (int64_t)pcVar13;
  }
  if (!bVar10) {
    return (code *)0x0;
  }
  if (param_10 != (int *)0x0) {
    if (*param_10 == 1) {
      bVar9 = (uint8_t)lVar25 & 0x1f;
      uVar17 = (uint32_t)param_9;
      (*(code *)((int64_t)
                 (int)(((0x57a3b49 - uVar12) * 0x40 | 0x57a3b49 - uVar12 >> 0x1a) + 0xa1708452) +
                0x7fffa522f13d))
                (0xffffffffaceddc09,0x7fffa522f13d,&IMAGE_DOS_HEADER_7fffa4770000,
                 (-0x1c128214 << bVar9 | 0xe3ed7decU >> 0x20 - bVar9) * uStack_84 * 0x3fc00001,
                 (lVar27 << 0x25) + lVar27);
      uVar17 = uVar17 << 6 ^ uVar17;
      if ((uVar17 << 0x18 ^ uVar17 << 0xc) == uVar17) {
        *param_10 = 0;
      }
      else if (bVar31 && bVar30) goto LAB_7fffa53efa0c;
    }
    else if (*param_10 != 0 && (bVar31 && bVar30)) {
LAB_7fffa53efa0c:
      lVar25 = (uint64_t)(uVar12 + 0x9cdb28f6) + (uStack_60 << 0x35) + uStack_60;
      (*(code *)((int64_t)(short)(-0x6ca9 - uVar26) + 0x7fffa559d83c))
                (lVar25,(param_11 << 0x17 | param_11 >> 9) ^ (param_11 << 0x10 | param_11 >> 0x10) ^
                        param_11,param_9,pcStack_70);
      pcVar13 = (code *)(lVar25 * 0x3ffffff8000001 + 0xb8b12188e9dbcedf);
      if ((code *)0xffffffffffffff88 < pcVar13) {
        return pcVar13;
      }
      goto joined_r0x7fffa53ef659;
    }
  }
  uVar28 = (uint64_t)uVar22;
  lVar1 = lVar27 + 0x400;
  uVar15 = lVar1 - (lVar1 << 0x26);
  uVar29 = ((int64_t)(int)(uVar18 * -0x5f00) << 0xe | 0x3fffU) ^ 0x473fc00011cff;
  uVar15 = uVar15 >> 4 ^ uVar15;
  lVar16 = uVar15 << 0x29;
  uVar12 = uVar22;
  lStack_98 = lVar25;
  uStack_68 = uVar28;
  (*(code *)((int64_t)(short)~(uVar26 ^ 0x2289) + 0x7fffa50812bb))
            (lVar16,(uVar29 << 0x31 | uVar29 >> 0xf) ^ (uVar29 << 0x19 | uVar29 >> 0x27) ^ uVar29,
             uVar19,uVar28,uVar23,uVar15 - lVar16,0x6152a893);
  uVar12 = (uVar12 << 0x10 | uVar12 >> 0x10) ^ (uVar12 << 0x11 | uVar12 >> 0xf) ^ uVar12;
  (*(code *)((int64_t)(short)(-0x6382 - (uVar26 ^ 0xb619)) + 0x7fffa565b95c))
            (lVar1,uVar23,0x2e1e000061b82e1e,uVar12 << 0x14 | uVar12 >> 0xc,
             uVar18 * 0x1de6e877 >> 1 | (uint32_t)((uVar18 * 0x1de6e877 & 1) != 0) << 0x1f);
  if ((code *)0xffffffffffffff88 < (code *)(uVar23 * 0x4000007f80000001)) {
    return (code *)(uVar23 * 0x4000007f80000001);
  }
  puVar20 = puStack_80;
  (*(code *)((int64_t)(short)(((uint16_t)lStack_98 | 1) * -0x2770) + 0x7fffa54b2be0))
            (lVar27 + -0x362c4317,lVar1,puStack_80,uVar28,0x2ec0002ec0002ec,0x8000000025b);
  pcVar13 = (code *)((int64_t)(puVar20 + 0x71bec08b) * 0x1004010040100401);
  if ((code *)0xffffffffffffff88 < pcVar13) {
    return pcVar13;
  }
  if (param_10 == (int *)0x0) {
    if (pcStack_70 <= pcVar13 + 0xc) {
      return (code *)0x0;
    }
    goto LAB_7fffa53eff2e;
  }
  if (*param_10 == 0) {
    if (pcStack_70 <= pcVar13 + 0xc) {
      return (code *)0x0;
    }
LAB_7fffa53eff1b:
    *param_10 = 0;
LAB_7fffa53eff2e:
    puVar2 = puStack_80 + (int64_t)pcVar13;
    if (param_9 != 0) {
      FUN_7fffa56a5f20(param_9,lVar1,0x808);
    }
    lVar25 = uStack_60 + (int64_t)(puVar20 + 0x71bec08b) * -0x1004010040100401;
    uVar23 = lVar25 + (lVar25 << 0x35) + 0x5cdb28f9;
    iVar24 = 0x4f121893 - (int)lStack_98;
    uVar15 = (uint64_t)(iVar24 * 2 | (uint32_t)(iVar24 < 0));
    (*(code *)((int64_t)(int)(uVar18 * -0x4000 | uVar18 * -0x22d80001 >> 0x12) + 0x7fffa559f5b3))
              (uVar23,(param_11 << 0x10 | param_11 >> 0x10) ^ (param_11 << 0x17 | param_11 >> 9) ^
                      param_11,lVar1,pcStack_70);
    pcVar13 = (code *)((uVar23 - uVar15) * 0x3ffffff8000001);
    if ((code *)0xffffffffffffff88 < pcVar13) {
      return pcVar13;
    }
    if (uVar23 == uVar15) {
      return (code *)0x0;
    }
    if (puVar2 + (int64_t)pcVar13 + -(int64_t)puStack_80 < pcStack_70 + -1) {
      return (code *)(puVar2 + (int64_t)pcVar13 + -(int64_t)puStack_80);
    }
    return (code *)0x0;
  }
  if (-1 < (int)uVar22) {
    uVar12 = uVar22 + 1;
    uVar23 = (uint64_t)uVar12;
    if (uVar22 < 3) {
      uVar15 = 0;
      uVar28 = 0;
LAB_7fffa53efe01:
      do {
        uVar28 = uVar28 + (uint64_t)*(uint32_t *)(lVar27 + uVar15 * 4) *
                          (uint64_t)*(uint8_t *)(param_9 + 8 + uVar15 * 8);
        uVar15 = uVar15 + 1;
      } while (uVar23 != uVar15);
    }
    else {
      uVar15 = (uint64_t)(uVar12 & 0xfffffffc);
      lVar32 = 0;
      lVar33 = 0;
      uVar28 = 0;
      lVar25 = 0;
      lVar16 = 0;
      do {
        puVar3 = (uint32_t *)(param_9 + 8 + uVar28 * 4);
        puVar4 = (uint32_t *)(param_9 + 0x18 + uVar28 * 4);
        uVar29 = *(uint64_t *)(lVar27 + 8 + uVar28 * 2);
        lVar25 = lVar25 + (uVar29 & 0xffffffff) * (uint64_t)(*puVar4 & 0xff);
        lVar16 = lVar16 + (uVar29 >> 0x20) * (uint64_t)(puVar4[2] & 0xff);
        uVar29 = *(uint64_t *)(lVar27 + uVar28 * 2);
        lVar32 = lVar32 + (uVar29 & 0xffffffff) * (uint64_t)(*puVar3 & 0xff);
        lVar33 = lVar33 + (uVar29 >> 0x20) * (uint64_t)(puVar3[2] & 0xff);
        uVar28 = uVar28 + 8;
      } while ((uVar23 * 2 & 0xfffffffffffffff8) != uVar28);
      uVar28 = lVar33 + lVar16 + lVar32 + lVar25;
      if ((uVar12 & 0xfffffffc) != uVar12) goto LAB_7fffa53efe01;
    }
    if (uVar22 < 3) {
      uVar29 = 0;
      uVar15 = 0;
LAB_7fffa53efeb9:
      do {
        uVar15 = uVar15 + (uint64_t)*(uint8_t *)(lVar27 + 0x408 + uVar29 * 8) *
                          (uint64_t)*(uint32_t *)(lVar27 + uVar29 * 4);
        uVar29 = uVar29 + 1;
      } while (uVar23 != uVar29);
    }
    else {
      uVar29 = (uint64_t)(uVar12 & 0xfffffffc);
      lVar32 = 0;
      lVar33 = 0;
      uVar15 = 0;
      lVar25 = 0;
      lVar16 = 0;
      do {
        uVar7 = *(uint64_t *)(lVar27 + uVar15 * 4);
        uVar8 = *(uint64_t *)(lVar27 + 8 + uVar15 * 4);
        puVar5 = (uint64_t *)(lVar27 + 0x408 + uVar15 * 8);
        puVar6 = (uint64_t *)(lVar27 + 0x418 + uVar15 * 8);
        uVar15 = uVar15 + 4;
        lVar25 = lVar25 + (*puVar6 & 0xff) * (uVar8 & 0xffffffff);
        lVar16 = lVar16 + (puVar6[1] & 0xff) * (uVar8 >> 0x20);
        lVar32 = lVar32 + (*puVar5 & 0xff) * (uVar7 & 0xffffffff);
        lVar33 = lVar33 + (puVar5[1] & 0xff) * (uVar7 >> 0x20);
      } while (uVar29 != uVar15);
      uVar15 = lVar33 + lVar16 + lVar32 + lVar25;
      if ((uVar12 & 0xfffffffc) != uVar12) goto LAB_7fffa53efeb9;
    }
    if ((pcVar13 + 0xc < pcStack_70) && (pcVar13 + (uVar15 >> 3) < (code *)(uVar28 >> 3)))
    goto LAB_7fffa53eff1b;
  }
  uVar18 = (int)lStack_98 + 0x88624239;
  uVar15 = (uint64_t)(uVar18 * 0x800000 | uVar18 >> 9);
  bVar9 = (uint8_t)lStack_98 & 0xf;
  uVar23 = uStack_60 + (uStack_60 << 0x35) + 0x5cdb28f9;
  FUN_7fffa5596b90(uVar23,(param_11 << 0x10 | param_11 >> 0x10) ^ (param_11 << 0x17 | param_11 >> 9)
                          ^ param_11,param_9,pcStack_70);
  pcVar13 = (code *)((uVar23 - uVar15) * 0x3ffffff8000001);
  if ((code *)(int64_t)(short)(0x3ff1 << bVar9 | 0x3ff1U >> 0x10 - bVar9) <= pcVar13) {
    return pcVar13;
  }
  if (uVar23 == uVar15) {
    return (code *)0x0;
  }
LAB_7fffa53ef65f:
  if (pcVar13 < pcStack_70 + -1) {
    return pcVar13;
  }
  return (code *)0x0;
}


// ============================================================================
// Function : FUN_7fffa53f00e0  |  RVA: 0xc800e0  |  Size: 962 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa53f00e0(void)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t unaff_R14;
  int64_t lVar9;
  uint8_t bVar10;
  
  uVar4 = (unaff_R14 ^ 0xffffffffffffffff) * 0x2a6e54ca +
          unaff_R14 * -0xbff03503 + (unaff_R14 | 0x7fffa4786627) * 0x73324092 +
          (~unaff_R14 & 0x7fffa4786627) * -0xea5e89cd +
          (~unaff_R14 & 0xffff80005b8799d8) * -0x772c493b;
  uVar3 = (uint32_t)uVar4;
  uVar1 = (uint16_t)uVar4;
  bVar10 = 0x71 - (char)uVar4;
  *(uint8_t *)((int64_t)(short)(uVar1 - 0x31b) + 0x7fffa478662d) = bVar10 * '\b' | bVar10 >> 5;
  lVar5 = (int64_t)(int)(((uVar3 ^ 0x366b592d) << 2 | uVar3 >> 0x1e) + 0x14a476f7);
  *(uint8_t (*) [16])(lVar5 + 0x7fffa4792b4f) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar5 + 0x7fffa4792b3f) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar5 + 0x7fffa4792b2f) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar5 + 0x7fffa4792b1f) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar5 + 0x7fffa4792b5f) = 0;
  uVar7 = rdtsc();
  uVar7 = ((uVar4 | 1) * -0x2918aa71be42c9c4 >> 0xc) *
          (uVar7 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar7));
  uVar6 = 3;
  uVar2 = uVar1 | 1;
  while( true ) {
    lVar5 = ((0xeee05a710a702072 - uVar4) * 0x400000 | 0xeee05a710a702072 - uVar4 >> 0x2a) * uVar7 *
            0x7f8f65d3 + 0x7cbf330f3e36822;
    lVar9 = lVar5 * 0x7cbf330f3e36822 + 0x7cbf330f3e36822;
    uVar8 = lVar9 * 0x7cbf330f3e36822;
    *(char *)(uVar6 + (int64_t)(short)(uVar2 * -0x6c08) + 0x7fffa478a702) =
         (char)((uint64_t)lVar5 >> 0x20);
    uVar7 = uVar8 + 0x7cbf330f3e36822;
    if ((int64_t)((0x89a00005cbdf471 - uVar4) * 0x8000 | 0x89a00005cbdf471 - uVar4 >> 0x31) <=
        (int64_t)(int)~(uVar3 ^ 0x58c3cd28)) {
      uVar7 = uVar8 | 0x7cbf330f3e36822;
    }
    *(char *)(uVar6 + (int64_t)(short)(uVar1 ^ 0x24e7) + 0x7fffa47886e6) = (char)(uVar7 >> 0x20);
    *(char *)(uVar6 + (int64_t)(short)((uVar1 ^ 0xbae6) * 0x3975) + 0x7fffa478cd78) =
         (char)((uint64_t)lVar9 >> 0x20);
    if (uVar6 == (uVar3 - 0x48f417 & 0xffff)) break;
    uVar6 = uVar6 + 3;
  }
  bRam00007fffa4785783 =
       *(char *)(((int64_t)(short)(-0x2f0b - uVar1) ^ 0x166cU) + 0x7fffa4788c9b) + 1U & 7;
  *(uint64_t *)
   ((int64_t)(short)(uVar2 * -0x3900 | (uint16_t)(uVar2 * -0x4539) >> 8) + 0x7fffa478806a +
   (uint64_t)bRam00007fffa4785783 * 8) =
       ~*(uint64_t *)((int64_t)(short)((uVar1 ^ 0xbf23) + 0x88af) + 0x7fffa47883c6);
  return;
}


// ============================================================================
// Function : FUN_7fffa53f04b0  |  RVA: 0xc804b0  |  Size: 455 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa53f04b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                     uint64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  
  uVar3 = ((param_5 ^ 0x2f45efa2) << 0x1e | param_5 >> 0x22) - 0x8e3d93c9;
  uVar3 = (uVar3 * 0x400000 | uVar3 >> 0x2a) ^ (uVar3 * 0x200 | uVar3 >> 0x37) ^ uVar3;
  uVar4 = uVar3 << 0x2c | uVar3 >> 0x14;
  uVar5 = uVar4 ^ uVar3;
  if (0x12c58006 - (uint32_t)param_3 <= ((uint32_t)param_3 | 1) * -0x4f9d791) {
    uVar5 = uVar4 + uVar3;
  }
  uVar5 = uVar5 ^ (uVar3 << 0x12 | uVar3 >> 0x2e);
  uVar5 = (uVar5 << 0x18 | uVar5 >> 0x28) ^ (uVar5 << 0x24 | uVar5 >> 0x1c) ^ uVar5;
  uVar5 = (uVar5 << 8 | uVar5 >> 0x38) ^ (uVar5 << 0x30 | uVar5 >> 0x10) ^ uVar5;
  uVar5 = (uVar5 << 0x20 | uVar5 >> 0x20) ^ (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar5;
  uVar3 = uVar5 >> 0x20;
  lVar6 = (uVar5 << 0x20 | uVar3) - (uVar3 << 0x2a);
  if (*(int64_t *)(lVar6 + 8) != 0) {
    puVar1 = *(uint64_t **)(lVar6 + 0x20);
    for (puVar2 = *(uint64_t **)(lVar6 + 0x18); puVar2 != puVar1; puVar2 = puVar2 + 3) {
      uVar5 = *puVar2;
      if (uVar5 != 0) {
        (*(code *)((int64_t)(short)((short)param_3 + 0x76e2) + 0x7fffa568cb4f))
                  (CONCAT62((uint6)((uint64_t)param_3 >> 0x10) & 0xffff,0xaba4),0,
                   uVar5 >> 0x3d ^ uVar5);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
    }
    (*(code *)((int64_t)(short)(-0x2abe - (short)param_3) + 0x7fffa568e0ed))();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa53f0680  |  RVA: 0xc80680  |  Size: 49618 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa53f0680(void) {
    /* +0xc80680 */ __asm { PUSH RBP }
    /* +0xc80681 */ __asm { PUSH R15 }
    /* +0xc80683 */ __asm { PUSH R14 }
    /* +0xc80685 */ __asm { PUSH RSI }
    /* +0xc80686 */ __asm { PUSH R12 }
    /* +0xc80688 */ __asm { PUSH RDI }
    /* +0xc80689 */ __asm { PUSH R13 }
    /* +0xc8068b */ __asm { PUSH RBX }
    /* +0xc8068c */ __asm { SUB RSP,0x448 }
    /* +0xc80693 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xc8069b */ __asm { MOVAPS xmmword ptr [RBP + 0x3b0],XMM6 }
    /* +0xc806a2 */ __asm { MOVDQA xmmword ptr [RBP + 0x3a0],XMM13 }
    /* +0xc806ab */ __asm { MOVDQA xmmword ptr [RBP + 0x390],XMM12 }
    /* +0xc806b4 */ __asm { MOVDQA xmmword ptr [RBP + 0x380],XMM8 }
    /* +0xc806bd */ __asm { MOVDQA xmmword ptr [RBP + 0x370],XMM14 }
    /* +0xc806c6 */ __asm { MOVAPS xmmword ptr [RBP + 0x360],XMM11 }
    /* +0xc806ce */ __asm { MOVDQA xmmword ptr [RBP + 0x350],XMM7 }
    /* +0xc806d6 */ __asm { MOVDQA xmmword ptr [RBP + 0x340],XMM10 }
    /* +0xc806df */ __asm { MOVDQA xmmword ptr [RBP + 0x330],XMM9 }
    /* +0xc806e8 */ __asm { MOV qword ptr [RBP + 0x328],-0x2 }
    /* +0xc806f3 */ __asm { PSHUFD XMM3,XMM5,0xee }
    /* +0xc806f8 */ __asm { MOVQ R11,XMM3 }
    /* +0xc806fd */ __asm { ROL R11,0x27 }
    /* +0xc80701 */ __asm { MOV R14,RAX }
    /* +0xc80704 */ __asm { OR R14,0x1 }
    /* +0xc80708 */ __asm { MOVD R8D,XMM2 }
    /* +0xc8070d */ __asm { SHL R8D,0xe }
    /* +0xc80711 */ __asm { ADD R8D,0xafffff }
    /* +0xc80718 */ __asm { IMUL R11,R14 }
    /* +0xc8071c */ __asm { MOVQ XMM3,R11 }
    /* +0xc80721 */ __asm { MOV R11,0x39ea1c438e1fcb95 }
    /* +0xc8072b */ __asm { XOR R11,0x29773202 }
    /* +0xc80732 */ __asm { MOVQ XMM0,R11 }
    /* +0xc80737 */ __asm { MOVDQA XMM4,XMM0 }
    /* +0xc8073b */ __asm { PSRLQ XMM4,0x20 }
    /* +0xc80740 */ __asm { PMULUDQ XMM4,XMM3 }
    /* +0xc80744 */ __asm { MOVDQA XMM5,XMM3 }
    /* +0xc80748 */ __asm { PSRLQ XMM5,0x20 }
    /* +0xc8074d */ __asm { PMULUDQ XMM5,XMM0 }
    /* +0xc80751 */ __asm { PADDQ XMM5,XMM4 }
    /* +0xc80755 */ __asm { PSLLQ XMM5,0x20 }
    /* +0xc8075a */ __asm { PMULUDQ XMM0,XMM3 }
    /* +0xc8075e */ __asm { PADDQ XMM0,XMM5 }
    /* +0xc80762 */ __asm { MOVQ RBX,XMM0 }
    /* +0xc80767 */ __asm { MOV dword ptr [RBP + 0x1d0],0x76e34de0 }
    /* +0xc80771 */ __asm { MOV EDX,dword ptr [RBP + 0x1d0] }
    /* +0xc80777 */ __asm { XOR R15D,R15D }
    /* +0xc8077a */ __asm { TEST R8D,0x1000000 }
    /* +0xc80781 */ __asm { JZ 0x7fffa53f6431 }
    /* +0xc80787 */ __asm { MOV R13,RAX }
    /* +0xc8078a */ __asm { MOV DX,0x58f0 }
    /* +0xc8078e */ __asm { LEA R10,[0x7fffa4784b5c] }
    /* +0xc80795 */ __asm { LEA RAX,[0x7fffa4789b25] }
    /* +0xc8079c */ __asm { LEA R11,[0x7fffa479251a] }
    /* +0xc807a3 */ __asm { MOV EDI,R13D }
    /* +0xc807a6 */ __asm { ADD EDX,R13D }
    /* +0xc807a9 */ __asm { ADD EDX,0x32c7 }
    /* +0xc807af */ __asm { MOVSX RDX,DX }
    /* +0xc807b3 */ __asm { ADD RDX,R10 }
    /* +0xc807b6 */ __asm { MOV R8W,0x9fe6 }
    /* +0xc807bb */ __asm { IMUL ECX,R8D,0x7eed }
    /* +0xc807c2 */ __asm { ADD ECX,R13D }
    /* +0xc807c5 */ __asm { MOVSX R9,CX }
    /* +0xc807c9 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R9*0x1 + 0x10] }
    /* +0xc807cf */ __asm { MOVQ XMM3,qword ptr [RDX + R9*0x8 + 0x1f] }
    /* +0xc807d6 */ __asm { PCMPEQD XMM0,XMM0 }
    /* +0xc807da */ __asm { PXOR XMM3,XMM0 }
    /* +0xc807de */ __asm { MOVDQA XMM4,XMM3 }
    /* +0xc807e2 */ __asm { PSRLW XMM4,0x4 }
    /* +0xc807e7 */ __asm { PAND XMM4,xmmword ptr [0x7fffa56b8670] }
    /* +0xc807ef */ __asm { OR EDI,0x1 }
    /* +0xc807f2 */ __asm { PSLLW XMM3,0x4 }
    /* +0xc807f7 */ __asm { PAND XMM3,xmmword ptr [0x7fffa56b9c80] }
    /* +0xc807ff */ __asm { MOVD XMM9,EDI }
    /* +0xc80804 */ __asm { POR XMM3,XMM4 }
    /* +0xc80808 */ __asm { MOV R8D,0x127277d5 }
    /* +0xc8080e */ __asm { MOVD XMM4,R8D }
    /* +0xc80813 */ __asm { PMULUDQ XMM4,XMM9 }
    /* +0xc80818 */ __asm { MOVD R8D,XMM4 }
    /* +0xc8081d */ __asm { NOT R8D }
    /* +0xc80820 */ __asm { MOVSXD RDX,R8D }
    /* +0xc80823 */ __asm { MOVQ XMM4,qword ptr [R11 + RDX*0x1 + 0x40] }
    /* +0xc8082a */ __asm { PXOR XMM4,XMM0 }
    /* +0xc8082e */ __asm { PXOR XMM4,XMM3 }
    /* +0xc80832 */ __asm { MOVQ qword ptr [RBP + 0x1d0],XMM4 }
    /* +0xc8083a */ __asm { CMP qword ptr [RBP + 0x1d0],0x0 }
    /* +0xc80842 */ __asm { JNZ 0x7fffa53f6431 }
    /* +0xc80848 */ __asm { MOV R8W,0xb7ad }
    /* +0xc8084d */ __asm { IMUL R8D,R8D,0x74eb }
    /* +0xc80854 */ __asm { NOT R8D }
    /* +0xc80857 */ __asm { MOVZX EAX,R8W }
    /* +0xc8085b */ __asm { MOV R11,qword ptr GS:[RAX] }
    /* +0xc8085f */ __asm { MOV RDX,-0x3e7243f5e2a1815d }
    /* +0xc80869 */ __asm { XOR RDX,-0x19f18203 }
    /* +0xc80870 */ __asm { ADD RDX,R13 }
    /* +0xc80873 */ __asm { CMP qword ptr [R11 + 0x60],RDX }
    /* +0xc80877 */ __asm { JZ 0x7fffa53f64a2 }
    /* +0xc8087d */ __asm { MOV qword ptr [RBP + -0x20],R14 }
    /* +0xc80881 */ __asm { MOV dword ptr [RBP + 0x1d0],0x8fe4fbb4 }
    /* +0xc8088b */ __asm { MOV R8D,dword ptr [RBP + 0x1d0] }
    /* +0xc80892 */ __asm { CMP R8D,0xa9bbc9d6 }
    /* +0xc80899 */ __asm { NOP }
    /* +0xc8089a */ __asm { NOP }
    /* +0xc8089b */ __asm { NOP }
    /* +0xc8089c */ __asm { NOP }
    /* +0xc8089d */ __asm { NOP }
    /* +0xc8089e */ __asm { NOP }
    /* +0xc8089f */ __asm { NOP }
    /* +0xc808a0 */ __asm { NOP }
    /* +0xc808a1 */ __asm { NOP }
    /* +0xc808a2 */ __asm { NOP }
    /* +0xc808a3 */ __asm { NOP }
    /* +0xc808a4 */ __asm { MOV R8W,0x75fa }
    /* +0xc808a9 */ __asm { ADD R8D,0xffff9fe2 }
    /* +0xc808b0 */ __asm { MOV ECX,R13D }
    /* +0xc808b3 */ __asm { ROR R8W,CL }
    /* +0xc808b7 */ __asm { LEA R11,[0x7fffa4a8c0c6] }
    /* +0xc808be */ __asm { MOVSX RDX,R8W }
    /* +0xc808c2 */ __asm { ADD RDX,R11 }
    /* +0xc808c5 */ __asm { PUSHFQ }
    /* +0xc808c6 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xc808ce */ __asm { POPFQ }
    /* +0xc808cf */ __asm { MOV dword ptr [RBP],0x218 }
    /* +0xc808d6 */ __asm { MOV ECX,0x218 }
    /* +0xc808db */ __asm { CALL RDX }
    /* +0xc808dd */ __asm { MOV R14,RAX }
    /* +0xc808e0 */ __asm { RDTSC }
    /* +0xc808e2 */ __asm { SHL RDX,0x20 }
    /* +0xc808e6 */ __asm { OR RDX,RAX }
    /* +0xc808e9 */ __asm { MOV R12,-0x30ebf64fafbc6efb }
    /* +0xc808f3 */ __asm { IMUL RDX,R12 }
    /* +0xc808f7 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xc80901 */ __asm { LEA RCX,[RDX + R9*0x1] }
    /* +0xc80905 */ __asm { MOV RAX,RCX }
    /* +0xc80908 */ __asm { SHR RAX,0x1b }
    /* +0xc8090c */ __asm { MOV RDX,RCX }
    /* +0xc8090f */ __asm { SHR RDX,0x2d }
    /* +0xc80913 */ __asm { XOR EAX,EDX }
    /* +0xc80915 */ __asm { SHR RCX,0x3b }
    /* +0xc80919 */ __asm { ROR EAX,CL }
    /* +0xc8091b */ __asm { AND EAX,0x3 }
    /* +0xc8091e */ __asm { CMP EAX,0x2 }
    /* +0xc80921 */ __asm { MOV qword ptr [RBP + 0x128],RDI }
    /* +0xc80928 */ __asm { MOV qword ptr [RBP + 0x138],RBX }
    /* +0xc8092f */ __asm { JC 0x7fffa53f0bab }
    /* +0xc80935 */ __asm { CMP EAX,0x3 }
    /* +0xc80938 */ __asm { JNZ 0x7fffa53f0cbe }
    /* +0xc8093e */ __asm { MOV R8D,0x9f14d508 }
    /* +0xc80944 */ __asm { MOVZX ECX,uint8_t ptr [R8 + -0x1f16d2c8] }
    /* +0xc8094c */ __asm { RDTSC }
    /* +0xc8094e */ __asm { SHL RDX,0x20 }
    /* +0xc80952 */ __asm { OR RDX,RAX }
    /* +0xc80955 */ __asm { TEST CL,0x1 }
    /* +0xc80958 */ __asm { JNZ 0x7fffa53f10c0 }
    /* +0xc8095e */ __asm { IMUL RDX,R12 }
    /* +0xc80962 */ __asm { MOV RCX,-0x311a81b27277ae8a }
    /* +0xc8096c */ __asm { ADD RCX,RDX }
    /* +0xc8096f */ __asm { MOV RAX,RCX }
    /* +0xc80972 */ __asm { SHR RAX,0x1b }
    /* +0xc80976 */ __asm { MOV RDX,RCX }
    /* +0xc80979 */ __asm { SHR RDX,0x2d }
    /* +0xc8097d */ __asm { XOR EAX,EDX }
    /* +0xc8097f */ __asm { SHR RCX,0x3b }
    /* +0xc80983 */ __asm { ROR EAX,CL }
    /* +0xc80985 */ __asm { MOV dword ptr [RBP + 0x1d0],0x292e3d3e }
    /* +0xc8098f */ __asm { MOV R8D,dword ptr [RBP + 0x1d0] }
    /* +0xc80996 */ __asm { TEST R8D,R8D }
    /* +0xc80999 */ __asm { JS 0x7fffa53f988d }
    /* +0xc8099f */ __asm { PUSHFQ }
    /* +0xc809a0 */ __asm { POP R9 }
    /* +0xc809a2 */ __asm { CMP EAX,0x428f9c6 }
    /* +0xc809a7 */ __asm { JA 0x7fffa53f0b50 }
    /* +0xc809ad */ __asm { MOV dword ptr [RBP + 0x1d0],0xa7df77ef }
    /* +0xc809b7 */ __asm { MOV R8D,dword ptr [RBP + 0x1d0] }
    /* +0xc809be */ __asm { MOV EDX,0x42b76797 }
    /* +0xc809c3 */ __asm { MOV R11,0x5eca45bb8c5630ed }
    /* +0xc809cd */ __asm { CMP RDX,R11 }
    /* +0xc809d0 */ __asm { NOP }
    /* +0xc809d1 */ __asm { NOP }
    /* +0xc809d2 */ __asm { NOP }
    /* +0xc809d3 */ __asm { NOP }
    /* +0xc809d4 */ __asm { NOP }
    /* +0xc809d5 */ __asm { NOP }
    /* +0xc809d6 */ __asm { NOP }
    /* +0xc809d7 */ __asm { NOP }
    /* +0xc809d8 */ __asm { NOP }
    /* +0xc809d9 */ __asm { NOP }
    /* +0xc809da */ __asm { NOP }
    /* +0xc809db */ __asm { NOP }
    /* +0xc809dc */ __asm { NOP }
    /* +0xc809dd */ __asm { NOP }
    /* +0xc809de */ __asm { NOP }
    /* +0xc809df */ __asm { NOP }
    /* +0xc809e0 */ __asm { NOP }
    /* +0xc80b50 */ __asm { LEA R8,[0x7fffa4783be9] }
    /* +0xc80b57 */ __asm { MOV R11,0x748980f46522733a }
    /* +0xc80b61 */ __asm { CMP R8,R11 }
    /* +0xc80b64 */ __asm { JZ 0x7fffa53f98a0 }
    /* +0xc80b6a */ __asm { MOV DX,0xe669 }
    /* +0xc80b6e */ __asm { MOV qword ptr [RBP + 0x1d0],RCX }
    /* +0xc80b75 */ __asm { MOV EAX,dword ptr [R8 + 0x121b] }
    /* +0xc80b7c */ __asm { MOV R8W,0x98f0 }
    /* +0xc80b81 */ __asm { IMUL R8D,R8D,-0x23e7 }
    /* +0xc80b88 */ __asm { ADD R8D,0x94 }
    /* +0xc80b8f */ __asm { MOV ECX,R13D }
    /* +0xc80b92 */ __asm { ROR R8W,CL }
    /* +0xc80b96 */ __asm { XOR EDX,0xe469 }
    /* +0xc80b9c */ __asm { MOVZX R9D,R8W }
    /* +0xc80ba0 */ __asm { ROR DX,CL }
    /* +0xc80ba3 */ __asm { MOVZX EDX,DX }
    /* +0xc80ba6 */ __asm { JMP 0x7fffa53f1b60 }
    /* +0xc80bab */ __asm { MOV R8W,0x220e }
    /* +0xc80bb0 */ __asm { MOV R15D,R13D }
    /* +0xc80bb3 */ __asm { OR R15D,0x1 }
    /* +0xc80bb7 */ __asm { MOV EDX,R15D }
    /* +0xc80bba */ __asm { IMUL EDX,R8D }
    /* +0xc80bbe */ __asm { NOT EDX }
    /* +0xc80bc0 */ __asm { MOVZX R8D,DX }
    /* +0xc80bc4 */ __asm { CMP EAX,R8D }
    /* +0xc80bc7 */ __asm { JZ 0x7fffa53f0d83 }
    /* +0xc80bcd */ __asm { MOV R11,-0xa4a8afb12602ebd }
    /* +0xc80bd7 */ __asm { XOR R11,0x58c2bda0 }
    /* +0xc80bde */ __asm { MOV ECX,R13D }
    /* +0xc80be1 */ __asm { ROR R11,CL }
    /* +0xc80be4 */ __asm { MOV EDX,0xb25b2c34 }
    /* +0xc80be9 */ __asm { ADD R11,0x3af4f272 }
    /* +0xc80bf0 */ __asm { CMP RDX,R11 }
    /* +0xc80bf3 */ __asm { NOP }
    /* +0xc80bf4 */ __asm { NOP }
    /* +0xc80bf5 */ __asm { NOP }
    /* +0xc80bf6 */ __asm { NOP }
    /* +0xc80bf7 */ __asm { NOP }
    /* +0xc80bf8 */ __asm { NOP }
    /* +0xc80bf9 */ __asm { NOP }
    /* +0xc80bfa */ __asm { MOV EAX,0x645cb6e }
    /* +0xc80bff */ __asm { MOVD XMM3,R13D }
    /* +0xc80c04 */ __asm { MOV R8D,0xd137f69b }
    /* +0xc80c0a */ __asm { ADD EAX,0xdc54d7c3 }
    /* +0xc80c0f */ __asm { IMUL EAX,EDI }
    /* +0xc80c12 */ __asm { MOV R11D,0x765623ba }
    /* +0xc80c18 */ __asm { MOVD XMM0,R11D }
    /* +0xc80c1d */ __asm { IMUL R8D,EDI }
    /* +0xc80c21 */ __asm { ROL R8D,0x1a }
    /* +0xc80c25 */ __asm { MOVSXD R11,R8D }
    /* +0xc80c28 */ __asm { PSUBD XMM0,XMM3 }
    /* +0xc80c2c */ __asm { MOVD ECX,XMM0 }
    /* +0xc80c30 */ __asm { ROL ECX,0x16 }
    /* +0xc80c33 */ __asm { CMP RCX,RAX }
    /* +0xc80c36 */ __asm { SETL CL }
    /* +0xc80c39 */ __asm { MOVZX R11D,uint8_t ptr [R11 + RDX*0x1 + 0x240] }
    /* +0xc80c42 */ __asm { AND R11B,0x1 }
    /* +0xc80c46 */ __asm { CMP R11B,CL }
    /* +0xc80c49 */ __asm { JZ 0x7fffa53f1344 }
    /* +0xc80c4f */ __asm { LEA R8,[0x7fffa47b6aff] }
    /* +0xc80c56 */ __asm { MOV RCX,R8 }
    /* +0xc80c59 */ __asm { ROL RCX,0x28 }
    /* +0xc80c5d */ __asm { MOV R11,-0x38806940b34a04af }
    /* +0xc80c67 */ __asm { IMUL R11,RCX }
    /* +0xc80c6b */ __asm { MOV RDX,0x72a76a6b78c74a25 }
    /* +0xc80c75 */ __asm { CMP R11,RDX }
    /* +0xc80c78 */ __asm { JZ 0x7fffa53f98a8 }
    /* +0xc80c7e */ __asm { MOV qword ptr [RBP + 0x1d0],RCX }
    /* +0xc80c85 */ __asm { MOV DX,0xfa }
    /* +0xc80c89 */ __asm { MOV R11W,0xf933 }
    /* +0xc80c8e */ __asm { MOV EAX,dword ptr [R8 + 0x5965] }
    /* +0xc80c95 */ __asm { ADD R11D,0x69cc }
    /* +0xc80c9c */ __asm { IMUL R11D,R15D }
    /* +0xc80ca0 */ __asm { ADD R11D,0x3a61 }
    /* +0xc80ca7 */ __asm { MOVZX R9D,R11W }
    /* +0xc80cab */ __asm { IMUL R8D,EDX,0x72b }
    /* +0xc80cb2 */ __asm { NOT R8D }
    /* +0xc80cb5 */ __asm { MOVZX EDX,R8W }
    /* +0xc80cb9 */ __asm { JMP 0x7fffa53f1b60 }
    /* +0xc80cbe */ __asm { MOV R8D,0x166b50eb }
    /* +0xc80cc4 */ __asm { MOV RCX,R8 }
    /* +0xc80cc7 */ __asm { ROL RCX,0x22 }
    /* +0xc80ccb */ __asm { MOV R11,-0x399a8ad5c42962b9 }
    /* +0xc80cd5 */ __asm { IMUL R11,RCX }
    /* +0xc80cd9 */ __asm { MOV RDX,-0x355cbe39cad82ed1 }
    /* +0xc80ce3 */ __asm { SUB RDX,R13 }
    /* +0xc80ce6 */ __asm { ADD RDX,0x22098161 }
    /* +0xc80ced */ __asm { CMP RDX,R11 }
    /* +0xc80cf0 */ __asm { JNZ 0x7fffa53f0d06 }
    /* +0xc80cf2 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xc80cf9 */ __asm { MOV RCX,0x0 }
    /* +0xc80d00 */ __asm { NOP }
    /* +0xc80d01 */ __asm { LOOPZ 0x7fffa53f0cbf }
    /* +0xc80d03 */ __asm { FNSTSW word ptr [RDI + -0x61] }
    /* +0xc80d06 */ __asm { MOV EAX,dword ptr [R8 + 0x6992b1d9] }
    /* +0xc80d0d */ __asm { MOV R11,0x5555555555555556 }
    /* +0xc80d17 */ __asm { IMUL R11,RAX }
    /* +0xc80d1b */ __asm { MOV RDX,0x5555555555555555 }
    /* +0xc80d25 */ __asm { CMP R11,RDX }
    /* +0xc80d28 */ __asm { JA 0x7fffa53f1667 }
    /* +0xc80d2e */ __asm { LEA R8,[0x7fffa47ba67e] }
    /* +0xc80d35 */ __asm { MOV R11,0x45da6801511d1be5 }
    /* +0xc80d3f */ __asm { CMP R8,R11 }
    /* +0xc80d42 */ __asm { JZ 0x7fffa53f98b0 }
    /* +0xc80d48 */ __asm { MOV DX,0xd1b3 }
    /* +0xc80d4c */ __asm { MOV R11D,0xffffd1b4 }
    /* +0xc80d52 */ __asm { SUB R11D,EDX }
    /* +0xc80d55 */ __asm { MOVZX EDX,R11W }
    /* +0xc80d59 */ __asm { MOV R11W,0x5d10 }
    /* +0xc80d5e */ __asm { MOV qword ptr [RBP + 0x1d0],RCX }
    /* +0xc80d65 */ __asm { IMUL R9D,R11D,-0xc5d }
    /* +0xc80d6c */ __asm { NOT R9D }
    /* +0xc80d6f */ __asm { LEA R11D,[R9 + R13*0x1] }
    /* +0xc80d73 */ __asm { MOVZX R9D,R11W }
    /* +0xc80d77 */ __asm { MOV EAX,dword ptr [R8 + 0x1de6] }
    /* +0xc80d7e */ __asm { JMP 0x7fffa53f1b60 }
    /* +0xc80d83 */ __asm { RDTSC }
    /* +0xc80d85 */ __asm { SHL RDX,0x20 }
    /* +0xc80d89 */ __asm { OR RDX,RAX }
    /* +0xc80d8c */ __asm { MOV R11,-0x83d143f70980d4b }
    /* +0xc80d96 */ __asm { IMUL R11,RDX }
    /* +0xc80d9a */ __asm { MOV RCX,0x117408bab17acb22 }
    /* +0xc80da4 */ __asm { ADD RCX,R11 }
    /* +0xc80da7 */ __asm { MOV RAX,RCX }
    /* +0xc80daa */ __asm { SHR RAX,0x2d }
    /* +0xc80dae */ __asm { MOV RDX,RCX }
    /* +0xc80db1 */ __asm { SHR RDX,0x1b }
    /* +0xc80db5 */ __asm { XOR EAX,EDX }
    /* +0xc80db7 */ __asm { SHR RCX,0x3b }
    /* +0xc80dbb */ __asm { ROR EAX,CL }
    /* +0xc80dbd */ __asm { MOV dword ptr [RBP + 0x1d0],0xfeb6bb9a }
    /* +0xc80dc7 */ __asm { MOV R8D,dword ptr [RBP + 0x1d0] }
    /* +0xc80dce */ __asm { MOV R8D,0x28fe9270 }
    /* +0xc80dd4 */ __asm { MOV EDX,0xa2c3ad16 }
    /* +0xc80dd9 */ __asm { IMUL EDX,EDI }
    /* +0xc80ddc */ __asm { XOR R8D,0xd2a75834 }
    /* +0xc80de3 */ __asm { XOR R11D,R11D }
    /* +0xc80de6 */ __asm { CMP EAX,0x1173964 }
    /* +0xc80deb */ __asm { SETC R11B }
    /* +0xc80def */ __asm { IMUL R8D,EDI }
    /* +0xc80df3 */ __asm { ROL EDX,0xa }
    /* +0xc80df6 */ __asm { MOV ECX,0xc0e36e78 }
    /* +0xc80dfb */ __asm { IMUL ECX,EDI }
    /* +0xc80dfe */ __asm { MOV R9D,0x13e30372 }
    /* +0xc80e04 */ __asm { SUB R9D,ECX }
    /* +0xc80e07 */ __asm { XOR ECX,ECX }
    /* +0xc80e09 */ __asm { CMP EAX,R8D }
    /* +0xc80e0c */ __asm { SETBE CL }
    /* +0xc80e0f */ __asm { CMP RDX,R9 }
    /* +0xc80e12 */ __asm { CMOVA ECX,R11D }
    /* +0xc80e16 */ __asm { CMP CL,0x1 }
    /* +0xc80e19 */ __asm { JNZ 0x7fffa53f106a }
    /* +0xc80e1f */ __asm { PUSHFQ }
    /* +0xc80e20 */ __asm { POP R9 }
    /* +0xc80e22 */ __asm { TEST R9D,0x100 }
    /* +0xc80e29 */ __asm { NOP }
    /* +0xc80e2a */ __asm { NOP }
    /* +0xc80e2b */ __asm { NOP }
    /* +0xc80e2c */ __asm { NOP }
    /* +0xc80e2d */ __asm { NOP }
    /* +0xc80e2e */ __asm { MOV dword ptr [RBP + 0x1d0],0x7f2ff5fb }
    /* +0xc80e38 */ __asm { MOV R8D,dword ptr [RBP + 0x1d0] }
    /* +0xc80e3f */ __asm { CMP R8D,0xb3b52570 }
    /* +0xc80e46 */ __asm { JNC 0x7fffa53f98c7 }
    /* +0xc80e4c */ __asm { LEA R8,[0x7fffa47b9d0b] }
    /* +0xc80e53 */ __asm { MOV R11,0x3998496fd82acc6 }
    /* +0xc80e5d */ __asm { CMP R8,R11 }
    /* +0xc80e60 */ __asm { NOP }
    /* +0xc80e61 */ __asm { NOP }
    /* +0xc80e62 */ __asm { NOP }
    /* +0xc80e63 */ __asm { NOP }
    /* +0xc80e64 */ __asm { NOP }
    /* +0xc80e65 */ __asm { MOVZX EDX,uint8_t ptr [R8 + 0x2a3e] }
    /* +0xc80e6d */ __asm { MOVZX ECX,uint8_t ptr [R8 + RDX*0x4 + 0x2a44] }
    /* +0xc80e76 */ __asm { NOT CL }
    /* +0xc80e78 */ __asm { ROL CL,0x5 }
    /* +0xc80e7b */ __asm { MOV uint8_t ptr [RBP + 0x1d0],CL }
    /* +0xc80e81 */ __asm { MOVZX ECX,uint8_t ptr [R8 + RDX*0x4 + 0x2a45] }
    /* +0xc80e8a */ __asm { NOT CL }
    /* +0xc80e8c */ __asm { ROL CL,0x5 }
    /* +0xc80e8f */ __asm { MOV uint8_t ptr [RBP + 0x1d1],CL }
    /* +0xc80e95 */ __asm { MOVZX ECX,uint8_t ptr [R8 + RDX*0x4 + 0x2a46] }
    /* +0xc80e9e */ __asm { NOT CL }
    /* +0xc80ea0 */ __asm { ROL CL,0x5 }
    /* +0xc80ea3 */ __asm { MOV uint8_t ptr [RBP + 0x1d2],CL }
    /* +0xc80ea9 */ __asm { MOVZX ECX,uint8_t ptr [R8 + RDX*0x4 + 0x2a47] }
    /* +0xc80eb2 */ __asm { NOT CL }
    /* +0xc80eb4 */ __asm { ROL CL,0x5 }
    /* +0xc80eb7 */ __asm { MOV uint8_t ptr [RBP + 0x1d3],CL }
    /* +0xc80ebd */ __asm { MOV R8D,0x9102c3cc }
    /* +0xc80ec3 */ __asm { XOR R8D,dword ptr [RBP + 0x1d0] }
    /* +0xc80eca */ __asm { BT R8D,R8D }
    /* +0xc80ece */ __asm { JNC 0x7fffa53f106a }
    /* +0xc80ed4 */ __asm { PXOR XMM3,XMM3 }
    /* +0xc80ed8 */ __asm { MOVDQA xmmword ptr [RBP + 0x1d0],XMM3 }
    /* +0xc80ee0 */ __asm { MOV dword ptr [RBP + 0x80],0x21aae590 }
    /* +0xc80eea */ __asm { MOV R8D,dword ptr [RBP + 0x80] }
    /* +0xc80ef1 */ __asm { TEST R8B,0x1 }
    /* +0xc80ef5 */ __asm { JNZ 0x7fffa53f991a }
    /* +0xc80efb */ __asm { MOV R8,0x0 }
    /* +0xc80f02 */ __asm { NOP }
    /* +0xc80f03 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xc80f0a */ __asm { MOV dword ptr [RBP + 0x1d0],0x0 }
    /* +0xc80f14 */ __asm { MOV dword ptr [RBP + 0x80],0x80b69bb4 }
    /* +0xc80f1e */ __asm { MOV R8D,dword ptr [RBP + 0x80] }
    /* +0xc80f25 */ __asm { CMP R8D,0x6db0431d }
    /* +0xc80f2c */ __asm { NOP }
    /* +0xc80f2d */ __asm { NOP }
    /* +0xc80f2e */ __asm { NOP }
    /* +0xc80f2f */ __asm { NOP }
    /* +0xc80f30 */ __asm { NOP }
    /* +0xc80f31 */ __asm { MOV dword ptr [RBP + 0x80],0x3fbffdff }
    /* +0xc80f3b */ __asm { MOV EDX,dword ptr [RBP + 0x80] }
    /* +0xc80f41 */ __asm { MOV R11W,0x3002 }
    /* +0xc80f46 */ __asm { ADD R11D,0xffffcffe }
    /* +0xc80f4d */ __asm { IMUL R11D,R15D }
    /* +0xc80f51 */ __asm { NOT R11D }
    /* +0xc80f54 */ __asm { MOV ECX,0x35e6c8f7 }
    /* +0xc80f59 */ __asm { XOR R8D,R8D }
    /* +0xc80f5c */ __asm { TEST EDX,EDX }
    /* +0xc80f5e */ __asm { SETNS R8B }
    /* +0xc80f62 */ __asm { MOVSX R11D,R11W }
    /* +0xc80f66 */ __asm { XOR EAX,EAX }
    /* +0xc80f68 */ __asm { CMP EDX,R11D }
    /* +0xc80f6b */ __asm { SETNC AL }
    /* +0xc80f6e */ __asm { XOR ECX,0xf587fce4 }
    /* +0xc80f74 */ __asm { IMUL EDX,ECX,-0x2dd6ef11 }
    /* +0xc80f7a */ __asm { SUB EDX,R13D }
    /* +0xc80f7d */ __asm { MOV R11D,0xc972c46e }
    /* +0xc80f83 */ __asm { IMUL R11D,EDI }
    /* +0xc80f87 */ __asm { ADD R11D,0x40481eb7 }
    /* +0xc80f8e */ __asm { MOVSXD R11,R11D }
    /* +0xc80f91 */ __asm { CMP R11,RDX }
    /* +0xc80f94 */ __asm { CMOVBE R8D,EAX }
    /* +0xc80f98 */ __asm { TEST R8B,R8B }
    /* +0xc80f9b */ __asm { NOP }
    /* +0xc80f9c */ __asm { NOP }
    /* +0xc80f9d */ __asm { NOP }
    /* +0xc80f9e */ __asm { NOP }
    /* +0xc80f9f */ __asm { NOP }
    /* +0xc80fa0 */ __asm { PUSHFQ }
    /* +0xc80fa1 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xc80fa9 */ __asm { POPFQ }
    /* +0xc80faa */ __asm { MOV R11,-0x222c24dbb7b1f240 }
    /* +0xc80fb4 */ __asm { MOV EDX,0x875e63ce }
    /* +0xc80fb9 */ __asm { ADD EDX,0x50a4627f }
    /* +0xc80fbf */ __asm { LEA R8,[0x7fffa47b9d6b] }
    /* +0xc80fc6 */ __asm { MOV R10,-0xddebf39cba4f65d }
    /* +0xc80fd0 */ __asm { IMUL R10,R8 }
    /* +0xc80fd4 */ __asm { MOVQ XMM3,R10 }
    /* +0xc80fd9 */ __asm { XOR R11,-0x2ab4684d }
    /* +0xc80fe0 */ __asm { ROL EDX,0xa }
    /* +0xc80fe3 */ __asm { IMUL R11,qword ptr [RBP + -0x20] }
    /* +0xc80fe8 */ __asm { XOR EDX,R13D }
    /* +0xc80feb */ __asm { MOVSXD RDX,EDX }
    /* +0xc80fee */ __asm { MOVQ XMM0,RDX }
    /* +0xc80ff3 */ __asm { PXOR XMM0,XMM3 }
    /* +0xc80ff7 */ __asm { MOVQ RDX,XMM0 }
    /* +0xc80ffc */ __asm { CMP R11,RDX }
    /* +0xc80fff */ __asm { JZ 0x7fffa53f992c }
    /* +0xc81005 */ __asm { MOV DX,0xfde9 }
    /* +0xc81009 */ __asm { XOR EDX,0xffffab01 }
    /* +0xc8100f */ __asm { IMUL EDX,R15D }
    /* +0xc81013 */ __asm { MOVZX EDX,DX }
    /* +0xc81016 */ __asm { MOVD XMM3,R13D }
    /* +0xc8101b */ __asm { MOV R11W,0x93ad }
    /* +0xc81020 */ __asm { MOV qword ptr [RBP + 0x80],RCX }
    /* +0xc81027 */ __asm { MOV CX,0x37ec }
    /* +0xc8102b */ __asm { MOVD XMM0,ECX }
    /* +0xc8102f */ __asm { PSUBW XMM0,XMM3 }
    /* +0xc81033 */ __asm { MOVD ECX,XMM0 }
    /* +0xc81037 */ __asm { XOR ECX,0xffff87c4 }
    /* +0xc8103d */ __asm { ADD ECX,0xffffbca9 }
    /* +0xc81043 */ __asm { MOVZX R9D,CX }
    /* +0xc81047 */ __asm { MOV EAX,dword ptr [R8 + 0x275d] }
    /* +0xc8104e */ __asm { XOR R11D,R13D }
    /* +0xc81051 */ __asm { ROL R11W,0xb }
    /* +0xc81056 */ __asm { IMUL R11D,R11D,0x6949 }
    /* +0xc8105d */ __asm { MOVSX R10,R11W }
    /* +0xc81061 */ __asm { LEA R8,[RBP + 0x1d0] }
    /* +0xc81068 */ __asm { SYSCALL }
    /* +0xc8106a */ __asm { LEA R8,[0x7fffa477f545] }
    /* +0xc81071 */ __asm { MOV R11,-0x3bf592e7a62d0da }
    /* +0xc8107b */ __asm { CMP R8,R11 }
    /* +0xc8107e */ __asm { JZ 0x7fffa53f9550 }
    /* +0xc81084 */ __asm { MOV DX,0xbb76 }
    /* +0xc81088 */ __asm { MOV qword ptr [RBP + 0x1d0],RCX }
    /* +0xc8108f */ __asm { MOV R11W,0x5584 }
    /* +0xc81094 */ __asm { XOR R11D,R13D }
    /* +0xc81097 */ __asm { IMUL R11D,R11D,0x3605 }
    /* +0xc8109e */ __asm { IMUL EAX,EDX,-0x1173 }
    /* +0xc810a4 */ __asm { MOV ECX,R13D }
    /* +0xc810a7 */ __asm { ROL AX,CL }
    /* +0xc810aa */ __asm { MOVZX EDX,R11W }
    /* +0xc810ae */ __asm { NOT EAX }
    /* +0xc810b0 */ __asm { MOVZX R9D,AX }
    /* +0xc810b4 */ __asm { MOV EAX,dword ptr [R8 + 0x5177] }
    /* +0xc810bb */ __asm { JMP 0x7fffa53f1b60 }
    /* +0xc810c0 */ __asm { MOV R11,-0x583f2dd720db9bdb }
    /* +0xc810ca */ __asm { IMUL RDX,R11 }
    /* +0xc810ce */ __asm { MOV RAX,-0x3b76ff637e79d95a }
    /* +0xc810d8 */ __asm { ADD RAX,RDX }
    /* +0xc810db */ __asm { MOV RDX,RAX }
    /* +0xc810de */ __asm { SHR RDX,0x1b }
    /* +0xc810e2 */ __asm { MOV RCX,RAX }
    /* +0xc810e5 */ __asm { SHR RCX,0x3b }
}


// ============================================================================
// Function : Unwind@7fffa53ffa20  |  RVA: 0xc8fa20  |  Size: 392 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ffa20(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  int iVar4;
  
  uVar3 = ((uint16_t)*(uint64_t *)(param_2 + 0x1e0) | 1) * -0xc04 -
          (short)*(uint64_t *)(param_2 + 0x1b8);
  iVar4 = *(int *)((int64_t)(-0x40f6cb83 - (int)*(uint64_t *)(param_2 + 0x1b8)) + 0x7fffa47939ff)
          + -1;
  *(int *)((int64_t)(short)(uVar3 * 0x200 | uVar3 >> 7) + 0x7fffa47864b0) = iVar4;
  if (iVar4 == 0) {
    uVar1 = *(uint64_t *)(param_2 + 0x1b8);
    LOCK();
    *(uint32_t *)
     ((int64_t)(int)(((int)uVar1 + 0x1ac9608d) * -0x3fffff85 ^ *(uint32_t *)(param_2 + 0x1e0)) +
     0x7fffa4792b82) = 0;
    UNLOCK();
    bVar2 = (uint8_t)uVar1 & 0xf;
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(short)(0xb672U >> bVar2 | -0x498e << 0x10 - bVar2) + 0x7fffa478a7ae);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ffbb0  |  RVA: 0xc8fbb0  |  Size: 370 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ffbb0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  int iVar2;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1e0) & 0x1f;
  iVar2 = *(int *)((int64_t)(int)(0x34ffff82 << bVar1 | 0x34ffff82U >> 0x20 - bVar1) +
                  0x7fffa47959b3) + -1;
  *(int *)((int64_t)(short)((uint16_t)*(uint64_t *)(param_2 + 0x1e0) ^ 0x94a5) + 0x7fffa4787630) =
       iVar2;
  if (iVar2 == 0) {
    iVar2 = (int)*(uint64_t *)(param_2 + 0x1e0);
    LOCK();
    *(uint32_t *)((int64_t)((-0x36f6b2a0 - iVar2) * 0x8a10ba1) + 0x7fffa47938a1) = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)((int64_t)(iVar2 + 0x6896e775) + 0x7fffa4790362);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ffd30  |  RVA: 0xc8fd30  |  Size: 217 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ffd30(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  
  pbVar1 = (uint8_t *)(*(int64_t *)(param_2 + 0x98) + 0x2ec);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ffe10  |  RVA: 0xc8fe10  |  Size: 220 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ffe10(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  
  pbVar1 = (uint8_t *)(*(int64_t *)(param_2 + 0x1b8) + 0x2ec);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}


// ============================================================================
// Function : Unwind@7fffa53ffef0  |  RVA: 0xc8fef0  |  Size: 240 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53ffef0(uint64_t param_1,int64_t param_2)

{
  (*(code *)(&UNK_7fffa508ce1a + (*(int *)(param_2 + 0x1e0) + 0x68229b61) * -0x201e38d9))
            (*(uint64_t *)(param_2 + 0x248));
  return;
}


// ============================================================================
// Function : Unwind@7fffa53fffe0  |  RVA: 0xc8ffe0  |  Size: 247 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa53fffe0(uint64_t param_1,int64_t param_2)

{
  (*(code *)((int64_t)(int)(*(uint32_t *)(param_2 + 0x1e0) ^ 0x6897052d) + 0x7fffa508b99c))
            (*(uint64_t *)(param_2 + 0x388));
  return;
}


// ============================================================================
// Function : FUN_7fffa54000e0  |  RVA: 0xc900e0  |  Size: 60 bytes
// Callers  : none
// Callees  : FUN_7fffa560b2b0@0xe9b2b0
// ============================================================================
uint64_t * FUN_7fffa54000e0(uint64_t *param_1,int64_t param_2)

{
  *param_1 = &PTR_FUN_7fffa56f3928;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_7fffa560b2b0(param_2 + 8);
  *param_1 = std::logic_error::vftable;
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa5400120  |  RVA: 0xc90120  |  Size: 618 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint32_t FUN_7fffa5400120(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                     uint32_t param_5)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint64_t in_RAX;
  uint8_t bVar4;
  uint8_t *pbVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint8_t bVar8;
  uint8_t bVar9;
  uint32_t uVar10;
  uint8_t in_R11B;
  uint8_t *puVar11;
  uint8_t bVar12;
  
  pbVar5 = (uint8_t *)(param_1 * 0xf8000000000001);
  uVar7 = 0x450390e3 - (in_RAX << 10 | in_RAX >> 0x36);
  uVar10 = 0x80100001;
  if (uVar7 <= in_R11B) goto LAB_7fffa5400366;
  bVar1 = pbVar5[6];
  bVar9 = pbVar5[0xb];
  bVar2 = bVar1 | 8;
  pbVar5[6] = bVar2;
  bVar12 = bVar9 + 1;
  bVar3 = *(uint8_t *)(param_4 + (uint64_t)in_R11B);
  pbVar5[0x15] = pbVar5[0x15] & 0xf | in_R11B << 4;
  pbVar5[0x1e] = bVar3;
  pbVar5[0xb] = bVar12;
  if (0xf < bVar12) {
LAB_7fffa540019b:
    uVar10 = 0x80300003;
    goto LAB_7fffa5400366;
  }
  bVar8 = bVar3 & 7;
  bVar4 = (uint8_t)param_5;
  if ((bVar8 == 4) && (bVar3 <= (uint8_t)((bVar4 ^ 0x93) * 'a' ^ 0xd4))) {
    if (0x3f < *pbVar5) {
      if (uVar7 <= (uint8_t)(in_R11B + 1)) goto LAB_7fffa5400366;
      bVar12 = bVar9 + 2;
      bVar2 = bVar1 | 0x18;
      pbVar5[6] = bVar2;
      pbVar5[0x1f] = *(uint8_t *)(param_4 + (uint64_t)(uint8_t)(in_R11B + 1));
      pbVar5[0xb] = bVar12;
      if (bVar12 < 0x10) goto LAB_7fffa540022e;
      goto LAB_7fffa540019b;
    }
    puVar11 = &UNK_7fffa5858270;
    bVar8 = 4;
  }
  else if (*pbVar5 < 0x40) {
    puVar11 = &UNK_7fffa5858270;
  }
  else {
LAB_7fffa540022e:
    puVar11 = &UNK_7fffa56f9ac0;
    if ((bVar2 & 0x10) != 0) {
      bVar8 = pbVar5[0x1f] & 7;
    }
  }
  bVar1 = puVar11[(uint64_t)bVar8 + (uint64_t)(bVar3 >> 6) * 8];
  if ((uint64_t)bVar1 != 0) {
    uVar6 = (uint64_t)bVar12;
    if (uVar7 < bVar1 + uVar6) goto LAB_7fffa5400366;
    pbVar5[6] = bVar2 | 0x20;
    if ((char)bVar1 < '\x04') {
      if ((char)bVar1 < '\x02') {
        if (bVar1 != 1) goto LAB_7fffa5400327;
        uVar10 = (uint32_t)*(uint8_t *)(param_4 + uVar6);
      }
      else {
        if (bVar1 != 2) goto LAB_7fffa5400327;
        uVar10 = (uint32_t)*(uint16_t *)(param_4 + uVar6);
      }
    }
    else {
      if ((char)bVar1 < (char)(8U >> (bVar4 & 7) | '\b' << 8 - (bVar4 & 7))) {
        if (bVar1 == 4) goto LAB_7fffa5400314;
      }
      else {
        bVar3 = bVar1 << 5 | bVar1 >> 3;
        bVar9 = bVar3 | 0x2e;
        if ((uint64_t)
            ((0xd6b26097U >> (bVar4 & 0x1f) | -0x294d9f69 << 0x20 - (bVar4 & 0x1f)) ^ 0x11accb1d) <=
            (uint64_t)
            (int64_t)
            (int)(((param_5 ^ 0x7fc0d943) << 0x12 | (param_5 ^ 0x7fc0d943) >> 0xe) + 0x843ec004)) {
          bVar9 = bVar3 - 0x2e;
        }
        if (bVar9 == 0xd3) {
LAB_7fffa5400314:
          uVar10 = *(uint32_t *)(param_4 + uVar6);
          goto LAB_7fffa540032a;
        }
      }
LAB_7fffa5400327:
      uVar10 = 0;
    }
LAB_7fffa540032a:
    *(uint32_t *)(pbVar5 + 0x28) = uVar10;
    pbVar5[0xb] = bVar12 + bVar1;
    pbVar5[0xe] = pbVar5[0xe] & 0xf0 | bVar1 & 0xf;
    pbVar5[0x12] = pbVar5[0x12] & 0xf0 | bVar12;
    uVar10 = 0x80300003;
    if (0xf < (uint8_t)(bVar12 + bVar1)) goto LAB_7fffa5400366;
  }
  uVar10 = 0;
LAB_7fffa5400366:
  return uVar10 << 0xb | uVar10 >> 0x15;
}


// ============================================================================
// Function : FUN_7fffa5400390  |  RVA: 0xc90390  |  Size: 59 bytes
// Callers  : FUN_7fffa5697680@0xf27680
// Callees  : FUN_7fffa52d8e60@0xb68e60, FUN_7fffa50c6000@0x956000, FUN_7fffa5225570@0xab5570, FUN_7fffa50cadf8@0x95adf8
// ============================================================================
uint8_t FUN_7fffa5400390(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_7fffa4781bc0 = 1;
  }
  FUN_7fffa5225570();
  cVar1 = FUN_7fffa50c6000();
  if (cVar1 != '\0') {
    cVar1 = FUN_7fffa50cadf8();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_7fffa52d8e60(0);
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa54003cc  |  RVA: 0xc903cc  |  Size: 59 bytes
// Callers  : FUN_7fffa4f54494@0x7e4494
// Callees  : FUN_7fffa5476b88@0xd06b88, FUN_7fffa4f54478@0x7e4478, FUN_7fffa545124c@0xce124c
// ============================================================================
uint32_t
FUN_7fffa54003cc(uint64_t param_1,uint32_t *param_2,uint64_t param_3,uint32_t *param_4)

{
  uint32_t uVar1;
  
  FUN_7fffa5476b88(*param_2);
  uVar1 = FUN_7fffa545124c(param_3);
  FUN_7fffa4f54478(*param_4);
  return uVar1;
}


// ============================================================================
// Function : FUN_7fffa5400410  |  RVA: 0xc90410  |  Size: 632 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5400410(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  lVar2 = 0;
  bRam00007fffa4785732 = '\0';
  auRam00007fffa4785751 = (uint8_t  [16])0x0;
  auRam00007fffa4785741 = (uint8_t  [16])0x0;
  uRam00007fffa478576c = 0;
  uVar4 = rdtsc();
  lVar3 = (uVar4 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar4)) * 0x42c5b74c0c611fd + 0xb;
  while( true ) {
    uVar4 = lVar3 * 0x42c5b74c0c611fd + 0xb;
    lVar3 = (uVar4 & 0xffffffff) * 0xc0c611fd +
            ((uVar4 & 0xffffffff) * 0x42c5b74 + (uVar4 >> 0x20) * 0xc0c611fd << 0x20) + 0xb;
    lVar1 = lVar3 * 0x42c5b74c0c611fd + 0xb;
    *(char *)(lVar2 + 0x7fffa4785733) = (char)((uint64_t)lVar1 >> 0x20);
    *(char *)(lVar2 + 0x7fffa4785731) = (char)(uVar4 >> 0x20);
    *(char *)(lVar2 + 0x7fffa4785732) = (char)((uint64_t)lVar3 >> 0x20);
    if (lVar2 == 0x44) break;
    lVar3 = lVar1 * 0x42c5b74c0c611fd + 0xb;
    *(char *)(lVar2 + 0x7fffa4785734) = (char)((uint64_t)lVar3 >> 0x20);
    lVar2 = lVar2 + 4;
  }
  bRam00007fffa4785732 = bRam00007fffa4785732 + 1 & 3;
  *(uint64_t *)((uint64_t)bRam00007fffa4785732 * 8 + 0x7fffa4785741) = 0xffffffffffffffff;
  return;
}


// ============================================================================
// Function : FUN_7fffa5400690  |  RVA: 0xc90690  |  Size: 278 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5400690(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  uint64_t in_RAX;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  
  uVar4 = in_RAX >> 0x36 ^ in_RAX >> 0x1b ^ in_RAX;
  puVar3 = (uint64_t *)(uVar4 & 0xfffffe0000000001);
  if (param_2 + 0x34bfad83U < 0x1b0e95daU - param_2) {
    puVar3 = (uint64_t *)(uVar4 - (uVar4 << 0x29));
  }
  *(uint64_t *)*puVar3 = **(uint64_t **)puVar3[1];
  plVar1 = *(int64_t **)puVar3[2];
  if (0x1f < *plVar1 - 8U) {
    uVar4 = 0;
    do {
      if (plVar1[uVar4 * 4 + 1] == (uint64_t)(0x5b0595a4 - param_2)) {
        if (plVar1[uVar4 * 4 + 3] == 0) {
          return;
        }
        *(uint64_t *)puVar3[3] = *(uint64_t *)(plVar1[uVar4 * 4 + 3] + 8);
        return;
      }
      bVar2 = (uint8_t)param_2 & 0x1f;
      uVar5 = uVar4 | 1;
      uVar4 = uVar4 + 1;
      if ((0xc41e21f1U >> bVar2 | -0x3be1de0f << 0x20 - bVar2) != 0xe20f10f8) {
        uVar4 = uVar5;
      }
    } while (uVar4 != *plVar1 - 8U >> 5);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa54007b0  |  RVA: 0xc907b0  |  Size: 12113 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5402074) */
/* WARNING: Removing unreachable block (ram,0x7fffa54034e8) */
/* WARNING: Removing unreachable block (ram,0x7fffa5402823) */
/* WARNING: Removing unreachable block (ram,0x7fffa540091d) */
/* WARNING: Removing unreachable block (ram,0x7fffa5400bda) */
/* WARNING: Removing unreachable block (ram,0x7fffa5400e0e) */
/* WARNING: Removing unreachable block (ram,0x7fffa540231b) */
/* WARNING: Removing unreachable block (ram,0x7fffa5401b67) */
/* WARNING: Removing unreachable block (ram,0x7fffa5402136) */
/* WARNING: Removing unreachable block (ram,0x7fffa5403521) */
/* WARNING: Removing unreachable block (ram,0x7fffa5402f9a) */
/* WARNING: Removing unreachable block (ram,0x7fffa54031ac) */

int64_t FUN_7fffa54007b0(uint64_t param_1,int64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint16_t *puVar5;
  uint64_t *puVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  char cVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint32_t uVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  int iVar25;
  int64_t lVar26;
  int *piVar27;
  uint64_t *puVar28;
  uint64_t *puVar29;
  uint64_t uVar30;
  uint64_t *puVar31;
  uint64_t uVar32;
  uint64_t *puVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint64_t *puVar36;
  uint64_t *puVar37;
  uint64_t uVar38;
  int iVar39;
  uint64_t uVar40;
  char *pcVar41;
  char *pcVar42;
  uint16_t *puVar43;
  code *pcVar44;
  uint32_t uVar45;
  uint32_t uVar46;
  uint32_t uVar47;
  uint32_t uVar48;
  uint64_t *puVar49;
  uint64_t uVar50;
  uint64_t *puVar51;
  uint64_t uVar52;
  uint64_t uVar53;
  uint64_t *puVar54;
  uint64_t uVar55;
  int64_t lVar56;
  uint64_t *puVar57;
  uint64_t uVar58;
  uint64_t uVar59;
  uint64_t *puVar60;
  uint64_t uVar61;
  uint32_t uVar62;
  uint64_t uVar63;
  uint64_t *puVar64;
  uint64_t uVar65;
  uint64_t uVar66;
  uint64_t uStack_270;
  char *pcStack_248;
  uint64_t *puStack_1f0;
  uint32_t uStack_1e4;
  int64_t lStack_148;
  uint32_t uStack_bc;
  uint64_t auStack_70 [6];
  
  uVar46 = *(uint32_t *)(param_1 + 0x2c);
  uVar58 = (uint64_t)uVar46;
  uVar7 = *(uint32_t *)(param_1 + 0x10c);
  uStack_bc = *param_3;
  uVar48 = param_3[1];
  uVar10 = *(uint64_t *)(param_1 + 8);
  uVar8 = *(uint32_t *)(param_1 + 0x18);
  uVar30 = (uint64_t)uVar8;
  puVar33 = (uint64_t *)((int64_t)param_4 + param_5 + -0x10);
  uVar20 = 6;
  if (uVar7 < 6) {
    uVar20 = uVar7;
  }
  if (uVar20 < 5) {
    uVar20 = 4;
  }
  uVar9 = *(uint32_t *)(param_1 + 0x110);
  uVar21 = 6;
  if (uVar9 < 6) {
    uVar21 = uVar9;
  }
  if (uVar21 < 5) {
    uVar21 = 4;
  }
  uVar45 = ((int)puVar33 - (int)(uint64_t *)(uVar10 + uVar58)) + 1;
  uVar22 = 8;
  if (uVar45 < 8) {
    uVar22 = uVar45;
  }
  uVar45 = 0;
  if ((uint64_t *)(uVar10 + uVar58) <= puVar33) {
    uVar45 = uVar22;
  }
  lVar11 = *(int64_t *)(param_1 + 0x38);
  uVar12 = *(uint64_t *)(param_1 + 0x70);
  puVar13 = *(uint64_t **)(param_1 + 0xf8);
  uVar22 = *(uint32_t *)(puVar13 + 3);
  uVar14 = puVar13[1];
  puVar31 = (uint64_t *)(uVar30 + uVar10);
  puVar15 = (uint64_t *)*puVar13;
  uVar59 = (uint64_t)uVar9;
  puVar64 = (uint64_t *)
            ((int64_t)param_4 +
            (uint64_t)
            ((((int)param_4 - (int)(uint64_t *)(uVar22 + uVar14)) - (int)puVar31) + (int)puVar15 ==
            0));
  *(uint32_t *)(param_1 + 300) = 0;
  uVar63 = uVar14;
  if (uVar46 < uVar45 + uVar46) {
    cVar16 = (char)*(uint32_t *)(param_1 + 0x34);
    uVar40 = *(uint64_t *)(param_1 + 0x60);
    do {
      if (uVar9 < 6) {
        if (uVar9 == 5) {
          uVar63 = *(int64_t *)(uVar10 + uVar58) * -0x30e4432345000000;
          goto LAB_7fffa54036ce;
        }
LAB_7fffa5403687:
        uVar50 = (uint64_t)
                 ((*(int *)(uVar10 + uVar58) * -0x61c8864f ^ (uint32_t)uVar40) >>
                 (0x18U - cVar16 & 0x1f));
      }
      else {
        if ((uVar21 + 0x1fd8e14e >> 1 | (uint32_t)((uVar21 + 0x1fd8e14e & 1) != 0) << 0x1f) != 0xfec70aa
           ) goto LAB_7fffa5403687;
        uVar63 = *(int64_t *)(uVar10 + uVar58) * -0x30e4432340650000;
LAB_7fffa54036ce:
        uVar50 = (uVar63 ^ uVar40) >> (0x38U - cVar16 & 0x3f);
      }
      uVar63 = (uint64_t)(((uint32_t)(uVar50 >> 8) & 0xffffff) << ((uint8_t)uVar20 & 0x1f));
      if (uVar7 < 5) {
        uVar63 = uVar63 + lVar11;
      }
      else if ((uVar7 << 0x1b | uVar7 >> 5) != 0x28000000) {
        uVar63 = uVar63 + lVar11 + 0x20;
      }
      uVar47 = (uint32_t)uVar58;
      uVar58 = uVar58 + 1;
      *(int *)(param_1 + 0x40 + (uint64_t)(uVar47 & 7) * 4) = (int)uVar50;
    } while (uVar45 + uVar46 != uVar58);
  }
  puVar37 = (uint64_t *)(param_5 + (int64_t)param_4);
  if (puVar64 < puVar33) {
    uVar46 = ((int)uVar14 - (int)puVar15) + uVar8;
    uVar58 = (uint64_t)uVar46;
    puVar1 = (uint64_t *)((int64_t)puVar37 - 7);
    puVar2 = puVar37 + -4;
    puVar3 = (uint64_t *)((int64_t)puVar37 - 1);
    puVar4 = (uint64_t *)((int64_t)puVar37 - 3);
    lVar11 = uVar30 + 8 + uVar10;
    puVar36 = param_4;
    puVar29 = puVar64;
    uStack_1e4 = uVar48;
    do {
      puStack_1f0 = (uint64_t *)((int64_t)puVar29 + 1);
      iVar39 = (int)uVar10;
      uVar45 = (((int)puVar29 - iVar39) - uStack_bc) + 1;
      puVar54 = (uint64_t *)(uint64_t)uVar45;
      puVar57 = (uint64_t *)((uVar45 - uVar46) + uVar14);
      if (uVar8 <= uVar45) {
        puVar57 = (uint64_t *)(uVar10 + (int64_t)puVar54);
      }
      if ((uVar45 - uVar8 < 0xfffffffd) && ((int)*puVar57 == *(int *)puStack_1f0)) {
        puVar54 = puVar37;
        if (uVar45 < uVar8) {
          puVar54 = puVar15;
        }
        puVar24 = (uint64_t *)((int64_t)puVar57 + 4);
        puVar51 = (uint64_t *)((int64_t)puVar29 + 5);
        puVar28 = (uint64_t *)((int64_t)puVar29 + (int64_t)puVar54 + (5 - (int64_t)puVar24));
        if (puVar37 <= puVar28) {
          puVar28 = puVar37;
        }
        puVar49 = puVar24;
        puVar60 = puVar51;
        if (puVar51 < (uint64_t *)((int64_t)puVar28 - 7U)) {
          if (*puVar24 == *puVar51) {
            lVar26 = 0;
            do {
              puVar49 = (uint64_t *)((int64_t)puVar29 + lVar26 + 0xd);
              if ((uint64_t *)((int64_t)puVar28 - 7U) <= puVar49) {
                puVar60 = (uint64_t *)((int64_t)puVar29 + lVar26 + 0xd);
                puVar49 = (uint64_t *)((int64_t)puVar57 + lVar26 + 0xc);
                goto LAB_7fffa5400cb3;
              }
              uVar40 = *(uint64_t *)((int64_t)puVar57 + lVar26 + 0xc);
              uVar50 = *puVar49;
              lVar26 = lVar26 + 8;
            } while (uVar40 == uVar50);
            puVar57 = (uint64_t *)0x0;
            uVar45 = 0;
            for (uVar50 = uVar50 ^ uVar40; (uVar50 & 1) == 0;
                uVar50 = uVar50 >> 1 | 0x8000000000000000) {
              uVar45 = uVar45 + 1;
            }
            uVar40 = (uint64_t)(uVar45 >> 3) + lVar26;
          }
          else {
            uVar45 = 0;
            for (uVar40 = *puVar51 ^ *puVar24; (uVar40 & 1) == 0;
                uVar40 = uVar40 >> 1 | 0x8000000000000000) {
              uVar45 = uVar45 + 1;
            }
            uVar40 = (uint64_t)(uVar45 >> 3);
          }
        }
        else {
LAB_7fffa5400cb3:
          if ((puVar60 < (uint64_t *)((int64_t)puVar28 - 3U)) && ((int)*puVar49 == (int)*puVar60))
          {
            puVar49 = (uint64_t *)((int64_t)puVar49 + 4);
            puVar60 = (uint64_t *)((int64_t)puVar60 + 4);
          }
          puVar57 = (uint64_t *)((int64_t)puVar28 - 1);
          if ((puVar60 < puVar57) &&
             (puVar57 = (uint64_t *)(uint64_t)(uint16_t)*puVar49,
             (uint16_t)*puVar49 == (uint16_t)*puVar60)) {
            puVar60 = (uint64_t *)((int64_t)puVar60 + 2);
            puVar49 = (uint64_t *)((int64_t)puVar49 + 2);
          }
          if (puVar60 < puVar28) {
            puVar57 = (uint64_t *)0xffffffffcee9bbb2;
            puVar60 = (uint64_t *)
                      ((int64_t)puVar60 + (uint64_t)((char)*puVar49 == (char)*puVar60));
          }
          uVar40 = (int64_t)puVar60 - (int64_t)puVar51;
        }
        if ((uint64_t *)((int64_t)puVar24 + uVar40) == puVar54) {
          puVar51 = (uint64_t *)((int64_t)puVar51 + uVar40);
          puVar54 = puVar51;
          puVar24 = puVar31;
          if (puVar51 < puVar1) {
            if (*puVar31 == *puVar51) {
              lVar26 = 0;
              do {
                puVar54 = (uint64_t *)((int64_t)puVar29 + lVar26 + uVar40 + 0xd);
                if (puVar1 <= puVar54) {
                  puVar54 = (uint64_t *)((int64_t)puVar29 + lVar26 + uVar40 + 0xd);
                  puVar24 = (uint64_t *)(lVar26 + lVar11);
                  goto LAB_7fffa5400dd0;
                }
                puVar54 = (uint64_t *)*puVar54;
                puVar57 = *(uint64_t **)(lVar11 + lVar26);
                lVar26 = lVar26 + 8;
              } while (puVar57 == puVar54);
              uVar45 = 0;
              for (uVar50 = (uint64_t)puVar54 ^ (uint64_t)puVar57; (uVar50 & 1) == 0;
                  uVar50 = uVar50 >> 1 | 0x8000000000000000) {
                uVar45 = uVar45 + 1;
              }
              puVar54 = (uint64_t *)((uint64_t)(uVar45 >> 3) + lVar26);
            }
            else {
              uVar45 = 0;
              for (uVar50 = *puVar31 ^ *puVar51; (uVar50 & 1) == 0;
                  uVar50 = uVar50 >> 1 | 0x8000000000000000) {
                uVar45 = uVar45 + 1;
              }
              puVar54 = (uint64_t *)(uint64_t)(uVar45 >> 3);
            }
          }
          else {
LAB_7fffa5400dd0:
            if ((puVar54 < puVar4) &&
               (puVar57 = (uint64_t *)(uint64_t)((int)*puVar24 < (int)*puVar54),
               (int)*puVar24 == (int)*puVar54)) {
              puVar54 = (uint64_t *)((int64_t)puVar54 + 4);
              puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
            }
            if ((puVar54 < puVar3) && ((uint16_t)*puVar24 == (uint16_t)*puVar54)) {
              puVar54 = (uint64_t *)((int64_t)puVar54 + 2);
              puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
            }
            if (puVar54 < puVar37) {
              puVar57 = (uint64_t *)(uint64_t)((char)*puVar24 == (char)*puVar54);
              puVar54 = (uint64_t *)((int64_t)puVar54 + (int64_t)puVar57);
            }
            puVar54 = (uint64_t *)((int64_t)puVar54 - (int64_t)puVar51);
          }
          uVar40 = uVar40 + (int64_t)puVar54;
        }
        pcVar42 = (char *)(uVar40 + 4);
      }
      else {
        pcVar42 = (char *)0x0;
      }
      auStack_70[0] = 999999999;
      if (uVar21 < 5) {
        if (uVar7 < 5) {
          puVar57 = auStack_70;
          uVar40 = (int64_t)puVar29 + 0xc19e5d3;
          FUN_7fffa55f77c0(~((uVar40 * 0x400 | uVar40 >> 0x36) ^ (uVar40 * 0x20000 | uVar40 >> 0x2f)
                            ^ uVar40),FUN_7fffa55f77c0,0x233f5f67);
          lVar26 = 0x400000001;
          goto LAB_7fffa540106f;
        }
        if (uVar7 != 5) {
          puVar57 = auStack_70;
          FUN_7fffa5485e80(param_1,((int64_t)puVar29 + -0x56d47fc) * 8 |
                                   (uint64_t)((int64_t)puVar29 + -0x56d47fc) >> 0x3d,
                           (int64_t)puVar37 * -0x1f3fffff26254c7d,puVar57,puVar57,
                           0xffffffff9d1048b5);
          uVar50 = (uint64_t)puVar57 >> 1 | (uint64_t)(((uint64_t)puVar57 & 1) != 0) << 0x3f;
          uVar40 = (int64_t)puVar57 << 0x1f | (uint64_t)puVar57 >> 0x21;
          goto LAB_7fffa540111b;
        }
        uVar40 = (uint64_t)uStack_1e4;
        uVar50 = ~(uint64_t)puVar37;
        uVar23 = (param_1 >> 1 | (uint64_t)((param_1 & 1) != 0) << 0x3f) ^
                 (param_1 << 0xf | param_1 >> 0x31) ^ param_1;
        uVar40 = FUN_7fffa56ac9b0(puVar37,((uint64_t)puVar37 ^ uVar40) * 0xc000013a +
                                          (uVar40 | (uint64_t)puVar37) * 0x181f5280 +
                                          (uVar50 & uVar40) * -0x18ddc21a4 +
                                          (uVar50 ^ uVar40) * -0xcddc206a +
                                          (~uVar40 & uVar50) * 0x181f5280 +
                                          (~uVar40 & (uint64_t)puVar37) * -0x18ddc21a4,
                                  uVar23 >> 0x27 ^ uVar23,puVar29);
        uVar40 = (uVar40 << 0x11 | uVar40 >> 0x2f) ^
                 (uVar40 >> 1 | (uint64_t)((uVar40 & 1) != 0) << 0x3f) ^ uVar40;
        uVar40 = (uVar40 << 0x22 | uVar40 >> 0x1e) ^ (uVar40 << 0x3e | uVar40 >> 2) ^ uVar40;
        uVar40 = (uVar40 << 0x3c | uVar40 >> 4) ^ (uVar40 << 4 | uVar40 >> 0x3c) ^ uVar40;
        uVar40 = (uVar40 << 8 | uVar40 >> 0x38) ^ (uVar40 << 0x38 | uVar40 >> 8) ^ uVar40;
        pcVar41 = (char *)((uVar40 << 0x30 | uVar40 >> 0x10) ^ (uVar40 << 0x10 | uVar40 >> 0x30) ^
                          uVar40);
      }
      else if (uVar9 < 6) {
        if (uVar7 < 5) {
          puVar57 = puVar37 + -0x47f3ac9;
          uVar40 = FUN_7fffa4ed0370(0,FUN_7fffa4ed0370,param_1,0x24b16ac0,puVar29,
                                    (((int64_t)puVar57 << 0x37 | (uint64_t)puVar57 >> 9) ^
                                     ((int64_t)puVar57 << 0x26 | (uint64_t)puVar57 >> 0x1a) ^
                                    (uint64_t)puVar57) * 9);
          puVar57 = (uint64_t *)(uVar40 >> 0xe ^ uVar40);
          uVar50 = (uint64_t)puVar57 >> 0x1c;
          uVar40 = uVar40 >> 0x38;
LAB_7fffa540111b:
          pcVar41 = (char *)(uVar40 ^ uVar50 ^ (uint64_t)puVar57);
        }
        else if (uVar7 == 5) {
          uVar40 = ~(((int64_t)puVar29 << 10 | (uint64_t)puVar29 >> 0x36) ^
                     ((int64_t)puVar29 << 0x37 | (uint64_t)puVar29 >> 9) ^ (uint64_t)puVar29);
          pcVar44 = FUN_7fffa560f010;
          FUN_7fffa560f010(FUN_7fffa560f010,0x7fffa561e563,uVar40,
                           (uVar40 << 0x39 | uVar40 >> 7) ^ (uVar40 << 6 | uVar40 >> 0x3a) ^ uVar40,
                           0x255688b2);
          uVar40 = ((int64_t)pcVar44 << 0x14 | (uint64_t)pcVar44 >> 0x2c) ^
                   ((int64_t)pcVar44 << 0x21 | (uint64_t)pcVar44 >> 0x1f) ^ (uint64_t)pcVar44;
          uVar40 = (uVar40 << 2 | uVar40 >> 0x3e) ^ (uVar40 << 0x28 | uVar40 >> 0x18) ^ uVar40;
          uVar40 = (uVar40 << 0x10 | uVar40 >> 0x30) ^ (uVar40 << 4 | uVar40 >> 0x3c) ^ uVar40;
          uVar40 = (uVar40 << 8 | uVar40 >> 0x38) ^ (uVar40 << 0x20 | uVar40 >> 0x20) ^ uVar40;
          pcVar41 = (char *)(uVar40 << 0x30 | uVar40 >> 0x10);
        }
        else {
          uVar40 = (int64_t)puVar37 * 0x4000 ^ (uint64_t)puVar37;
          FUN_7fffa4a90250(param_1,puVar29,uVar40,0x834ad3fe);
          uVar40 = (uVar40 << 0x32 | uVar40 >> 0xe) - 0x431e21b6;
          pcVar41 = (char *)(uVar40 * 0x10000000 ^ uVar40 << 0x38 ^ uVar40);
        }
      }
      else {
        if (uVar7 < 5) {
          iVar25 = (int)CONCAT62((int6)((uint64_t)puVar57 >> 0x10),0xd981) + -0x18a5;
          uVar40 = (uint64_t)puVar29 >> 10 ^ (uint64_t)puVar29;
          lVar26 = (*(code *)((int64_t)(short)iVar25 + 0x7fffa4a8ee04))
                             (iVar25,uVar40 << 0x29 ^ uVar40,0x7a4e0da4,auStack_70,param_1);
          uVar40 = lVar26 * 0x400000020000001;
          puVar57 = (uint64_t *)
                    ((lVar26 * 0x800000040000 | uVar40 >> 0x2e) ^ (uVar40 << 0x32 | uVar40 >> 0xe) ^
                    uVar40);
          lVar26 = -0x71c71c71c71c71c7;
        }
        else if (uVar7 == 5) {
          iVar25 = (int)CONCAT62((int6)((uint64_t)puVar54 >> 0x10),0x9f8a) + 0x15e5;
          uVar40 = (int64_t)puVar37 * 0x10000000000001 ^ (int64_t)puVar37 << 0x21;
          pcVar44 = (code *)((int64_t)(short)iVar25 + 0x7fffa54ea2b1);
          (*pcVar44)((((int64_t)puVar29 << 0x1d | (uint64_t)puVar29 >> 0x23) ^
                      ((int64_t)puVar29 << 0x24 | (uint64_t)puVar29 >> 0x1c) ^ (uint64_t)puVar29)
                     - 0xfdcd9c7b ^ 0x28683c15,pcVar44,iVar25,0x60316f35,
                     ((int64_t)puVar37 * 0x10000000000001 << 0x29 | uVar40 >> 0x17) ^
                     (uVar40 << 0x15 | uVar40 >> 0x2b) ^ uVar40,auStack_70);
          uVar40 = ((int64_t)puVar57 << 0x2d | (uint64_t)puVar57 >> 0x13) ^
                   ((int64_t)puVar57 << 2 | (uint64_t)puVar57 >> 0x3e) ^ (uint64_t)puVar57;
          uVar40 = (uVar40 << 0x1a | uVar40 >> 0x26) ^ (uVar40 << 4 | uVar40 >> 0x3c) ^ uVar40;
          uVar40 = (uVar40 << 0x34 | uVar40 >> 0xc) ^ (uVar40 << 8 | uVar40 >> 0x38) ^ uVar40;
          uVar40 = (uVar40 << 0x10 | uVar40 >> 0x30) ^ (uVar40 << 0x28 | uVar40 >> 0x18) ^ uVar40;
          uVar40 = (uVar40 << 0x20 | uVar40 >> 0x20) ^ (uVar40 << 0x10 | uVar40 >> 0x30) ^ uVar40;
          puVar57 = (uint64_t *)(uVar40 << 0x20 | uVar40 >> 0x20);
          lVar26 = -0x7fffffffffffffff;
        }
        else {
          puVar57 = (uint64_t *)0x7fffa561c404;
          FUN_7fffa560ce20(puVar29,0x7fffa561c404,0x6f0cfd5d,param_1 + 0x34b0d1e2,
                           param_1 + 0x34b0d1e2);
          lVar26 = 0x1000100010001;
        }
LAB_7fffa540106f:
        pcVar41 = (char *)((int64_t)puVar57 * lVar26);
      }
      pcStack_248 = pcVar42;
      if (pcVar42 < pcVar41) {
        pcStack_248 = pcVar41;
      }
      if (pcStack_248 < (char *)0x4) {
        *(uint32_t *)(param_1 + 300) =
             (uint32_t)(0x7ff < (uint64_t)((int64_t)puVar29 - (int64_t)puVar36));
        puVar29 = (uint64_t *)
                  ((int64_t)puVar29 + ((uint64_t)((int64_t)puVar29 - (int64_t)puVar36) >> 8) + 1
                  );
      }
      else {
        if (pcVar42 < pcVar41) {
          puStack_1f0 = puVar29;
        }
        else {
          auStack_70[0] = 1;
        }
        lStack_148 = (int64_t)puVar29 + 0xd;
        uStack_270 = auStack_70[0];
        do {
          puVar57 = (uint64_t *)((int64_t)puVar29 + 1);
          puVar43 = (uint16_t *)0x9553133e;
          uVar45 = ((int)puVar57 - iVar39) - uStack_bc;
          piVar27 = (int *)((uVar45 - uVar46) + uVar14);
          if (uVar8 <= uVar45) {
            piVar27 = (int *)(uVar10 + uVar45);
          }
          if ((uVar45 - uVar8 < 0xfffffffd) && (*piVar27 == *(int *)puVar57)) {
            puVar54 = puVar37;
            if (uVar45 < uVar8) {
              puVar54 = puVar15;
            }
            puVar24 = (uint64_t *)((int64_t)puVar29 + 5);
            puVar5 = (uint16_t *)(piVar27 + 1);
            puVar51 = (uint64_t *)((int64_t)puVar29 + (int64_t)puVar54 + (5 - (int64_t)puVar5));
            if (puVar37 <= puVar51) {
              puVar51 = puVar37;
            }
            puVar43 = puVar5;
            puVar28 = puVar24;
            if (puVar24 < (uint64_t *)((int64_t)puVar51 - 7U)) {
              puVar43 = (uint16_t *)*puVar24;
              if (*(uint16_t **)puVar5 == puVar43) {
                puVar43 = (uint16_t *)0x0;
LAB_7fffa5402590:
                puVar28 = (uint64_t *)(lStack_148 + (int64_t)puVar43);
                if (puVar28 < (uint64_t *)((int64_t)puVar51 - 7U)) {
                  uVar40 = *(uint64_t *)((int64_t)puVar29 + 0xdU + (int64_t)puVar43);
                  if (*(uint64_t *)((int64_t)(piVar27 + 3) + (int64_t)puVar43) == uVar40)
                  goto code_r0x7fffa54025b7;
                  uVar45 = 0;
                  for (uVar40 = *(uint64_t *)((int64_t)(piVar27 + 3) + (int64_t)puVar43) ^ uVar40
                      ; (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x8000000000000000) {
                    uVar45 = uVar45 + 1;
                  }
                  pcVar42 = (char *)((int64_t)puVar43 + (uint64_t)(uVar45 >> 3) + 8);
                  goto LAB_7fffa540298a;
                }
                puVar43 = (uint16_t *)((char *)((int64_t)puVar43 + (int64_t)piVar27) + 0xc);
                goto LAB_7fffa540292c;
              }
              uVar45 = 0;
              for (uVar40 = (uint64_t)*(uint16_t **)puVar5 ^ (uint64_t)puVar43; (uVar40 & 1) == 0;
                  uVar40 = uVar40 >> 1 | 0x8000000000000000) {
                uVar45 = uVar45 + 1;
              }
              pcVar42 = (char *)(uint64_t)(uVar45 >> 3);
            }
            else {
LAB_7fffa540292c:
              if ((puVar28 < (uint64_t *)((int64_t)puVar51 - 3U)) &&
                 (*(int *)puVar43 == (int)*puVar28)) {
                puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
                puVar43 = puVar43 + 2;
              }
              if ((puVar28 < (uint64_t *)((int64_t)puVar51 - 1U)) &&
                 (*puVar43 == (uint16_t)*puVar28)) {
                puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
                puVar43 = puVar43 + 1;
              }
              if (puVar28 < puVar51) {
                puVar43 = (uint16_t *)(uint64_t)((char)*puVar43 == (char)*puVar28);
                puVar28 = (uint64_t *)((int64_t)puVar28 + (int64_t)puVar43);
              }
              pcVar42 = (char *)((int64_t)puVar28 - (int64_t)puVar24);
            }
LAB_7fffa540298a:
            if ((uint64_t *)((int64_t)puVar5 + (int64_t)pcVar42) == puVar54) {
              puVar24 = (uint64_t *)((int64_t)puVar24 + (int64_t)pcVar42);
              puVar54 = puVar24;
              puVar51 = puVar31;
              if (puVar24 < puVar1) {
                if (*puVar31 == *puVar24) {
                  lVar26 = 8;
LAB_7fffa54029e0:
                  puVar54 = (uint64_t *)
                            ((char *)((int64_t)puVar29 + (int64_t)pcVar42) + lVar26 + 5);
                  if (puVar54 < puVar1) {
                    uVar40 = *puVar54;
                    if (*(uint64_t *)((int64_t)puVar31 + lVar26) == uVar40)
                    goto code_r0x7fffa5402a07;
                    uVar45 = 0;
                    for (uVar40 = uVar40 ^ *(uint64_t *)((int64_t)puVar31 + lVar26);
                        (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x8000000000000000) {
                      uVar45 = uVar45 + 1;
                    }
                    puVar43 = (uint16_t *)((uint64_t)(uVar45 >> 3) + lVar26);
                    goto LAB_7fffa5402ae9;
                  }
                  puVar54 = (uint64_t *)
                            ((char *)((int64_t)puVar29 + (int64_t)pcVar42) + lVar26 + 5);
                  puVar51 = (uint64_t *)(lVar26 + (int64_t)puVar31);
                  goto LAB_7fffa5402a54;
                }
                uVar45 = 0;
                for (uVar40 = *puVar24 ^ *puVar31; (uVar40 & 1) == 0;
                    uVar40 = uVar40 >> 1 | 0x8000000000000000) {
                  uVar45 = uVar45 + 1;
                }
                puVar43 = (uint16_t *)(uint64_t)(uVar45 >> 3);
              }
              else {
LAB_7fffa5402a54:
                if ((puVar54 < puVar4) && ((int)*puVar51 == (int)*puVar54)) {
                  puVar51 = (uint64_t *)((int64_t)puVar51 + 4);
                  puVar54 = (uint64_t *)((int64_t)puVar54 + 4);
                }
                if ((puVar54 < puVar3) && ((uint16_t)*puVar51 == (uint16_t)*puVar54)) {
                  puVar54 = (uint64_t *)((int64_t)puVar54 + 2);
                  puVar51 = (uint64_t *)((int64_t)puVar51 + 2);
                }
                if (puVar54 < puVar37) {
                  puVar54 = (uint64_t *)
                            ((int64_t)puVar54 + (uint64_t)((char)*puVar51 == (char)*puVar54));
                }
                puVar43 = (uint16_t *)((int64_t)puVar54 - (int64_t)puVar24);
              }
LAB_7fffa5402ae9:
              pcVar42 = pcVar42 + (int64_t)puVar43;
            }
            if (pcVar42 < (char *)0xfffffffffffffffc) {
              uVar45 = 0x1f;
              if ((uint32_t)uStack_270 != 0) {
                for (; (uint32_t)uStack_270 >> uVar45 == 0; uVar45 = uVar45 - 1) {
                }
              }
              if ((int)((uVar45 ^ 0x1f) + (int)pcStack_248 * 3 + -0x1e) < (int)(pcVar42 + 4) * 3) {
                uStack_270 = 1;
                pcStack_248 = pcVar42 + 4;
                puStack_1f0 = puVar57;
              }
            }
          }
          auStack_70[0] = 999999999;
          if (uVar9 < 5) {
            if (uVar7 < 5) {
              puVar43 = (uint16_t *)((int64_t)puVar29 + 0xc19e5d4);
              uVar38 = (uint64_t)uVar48;
              uVar50 = ~uVar59;
              uVar52 = (uint64_t)(uVar9 ^ uVar48);
              uVar65 = uVar38 ^ uVar50;
              uVar34 = param_1 & uVar65;
              uVar61 = ~param_1;
              uVar23 = (uint64_t)uVar20;
              uVar66 = uVar65 & uVar61;
              uVar32 = ((~uVar38 | uVar50) & param_1) * 0x6995c39d;
              uVar53 = ~uVar32;
              uVar55 = ~uVar23;
              uVar35 = (param_1 | uVar65) ^ uVar32;
              uVar40 = uVar53 ^ param_1 ^ uVar52;
              lVar26 = (uVar55 ^ uVar66 & uVar53) * -0x18d4aef +
                       ((uVar32 ^ uVar65 ^ param_1) & uVar55) * 0x8ca1de5c +
                       (uVar52 & param_1 | uVar53 | uVar55) * 0x4f1db7d4 +
                       (uint64_t)((uint32_t)uVar35 & uVar20) * -0x65bb9d81 +
                       (uVar55 & (uVar61 | uVar52) & uVar32) * 0x97f0d133 +
                       (uVar35 & uVar55) * -0xe70e8906 +
                       ((uVar34 | uVar32) ^ uVar23) * -0x4f1db7d4 +
                       ((uVar66 | uVar32) ^ uVar23) * 0x169de5ac +
                       (uint64_t)(((uint32_t)uVar66 | (uint32_t)uVar53) & uVar20) * 0x6748e86f +
                       (uint64_t)((uint32_t)uVar40 & uVar20) * 0x4745ce70 +
                       (uVar40 | uVar55) * 0x1326dc3b + (uVar53 ^ uVar23 ^ uVar34) * 0xb4ef2d7 +
                       (uint64_t)(((uint32_t)uVar32 ^ ((uint32_t)param_1 | uVar9 ^ uVar48)) & uVar20) *
                       -0x182b309b + ((uVar32 | param_1 | uVar65) ^ uVar23) * -0x65bb9d80 +
                       (uVar53 & uVar55 & uVar34) * 0x1959d3fe4;
              FUN_7fffa55f77c0(((int64_t)puVar43 * 0x400 | (uint64_t)puVar43 >> 0x36) ^
                               ((int64_t)puVar43 * 0x20000 | (uint64_t)puVar43 >> 0x2f) ^
                               -(int64_t)puVar57 - 0xc19e5d4U,0xf0fcf8d9,
                               lVar26 + ((~uVar38 | uVar50) & param_1) * -0x6995c39d +
                                        (uVar61 & uVar52) * 0x5a6caaaa +
                                        ((~(uVar38 | param_1) & uVar59) +
                                        (uVar38 | param_1 | uVar50)) * -0x7dac0a11 +
                                        (~(uVar32 | uVar23) & (uVar61 ^ uVar52)) * 0xae8eb6dd +
                                        (uVar66 & uVar53 & uVar55) * -0x182b309b +
                                        (uVar53 & uVar55 & uVar52 & uVar61) * -0x6c063bf7);
              pcVar42 = (char *)(lVar26 * 0x400000001);
            }
            else if (uVar7 == 5) {
              uVar40 = (param_1 >> 1 | (uint64_t)((param_1 & 1) != 0) << 0x3f) ^
                       (param_1 << 0xf | param_1 >> 0x31) ^ param_1;
              uVar40 = FUN_7fffa56ac9b0(puVar37,0xb5bccdea,uVar40 >> 0x27 ^ uVar40,puVar57);
              uVar40 = (uVar40 >> 1 | (uint64_t)((uVar40 & 1) != 0) << 0x3f) ^
                       (uVar40 << 0x11 | uVar40 >> 0x2f) ^ uVar40;
              uVar40 = (uVar40 << 0x3e | uVar40 >> 2) ^ (uVar40 << 0x22 | uVar40 >> 0x1e) ^ uVar40;
              uVar40 = (uVar40 << 0x3c | uVar40 >> 4) ^ (uVar40 << 4 | uVar40 >> 0x3c) ^ uVar40;
              uVar40 = (uVar40 << 8 | uVar40 >> 0x38) ^ (uVar40 << 0x38 | uVar40 >> 8) ^ uVar40;
              pcVar42 = (char *)((uVar40 << 0x30 | uVar40 >> 0x10) ^
                                 (uVar40 << 0x10 | uVar40 >> 0x30) ^ uVar40);
            }
            else {
              puVar54 = auStack_70;
              FUN_7fffa5485e80(param_1,((int64_t)puVar29 - 0x56d47fbU) * 8 |
                                       (int64_t)puVar29 - 0x56d47fbU >> 0x3d,
                               (int64_t)puVar37 * -0x1f3fffff26254c7d,puVar54,puVar54,
                               0xffffffff9d1048b5);
              pcVar42 = (char *)(((uint64_t)puVar54 >> 1 |
                                 (uint64_t)(((uint64_t)puVar54 & 1) != 0) << 0x3f) ^
                                 ((int64_t)puVar54 << 0x1f | (uint64_t)puVar54 >> 0x21) ^
                                (uint64_t)puVar54);
            }
          }
          else if (uVar9 == 5) {
            if (uVar7 < 5) {
              uVar50 = ~uVar30;
              puVar29 = puVar37 + -0x47f3ac9;
              uVar40 = (uint64_t)param_4 ^ 5;
              uVar23 = ~(uint64_t)param_4 & 5;
              lVar26 = (uVar23 & uVar30) - (uVar23 & uVar30);
              uVar40 = FUN_7fffa4ed0370(lVar26,FUN_7fffa4ed0370,param_1,
                                        lVar26 * 0x49cbc27e +
                                        (~(uint64_t)(uVar8 | 5) & ~(uint64_t)param_4) *
                                        -0x24b16ac0 +
                                        (uVar40 | uVar50) * 0x2478bd7d +
                                        ((uint64_t)param_4 & 5 | uVar30) * 0x3a1b0f2c +
                                        (uVar40 & uVar50) * 0x15a251af +
                                        (uVar59 | (uint64_t)param_4 | uVar30) * -0x5ecc79ec +
                                        (uVar40 ^ uVar50) * -0x2478bd7d,puVar57,
                                        (((int64_t)puVar29 << 0x37 | (uint64_t)puVar29 >> 9) ^
                                         ((int64_t)puVar29 << 0x26 | (uint64_t)puVar29 >> 0x1a) ^
                                        (uint64_t)puVar29) * 9);
              uVar50 = uVar40 >> 0xe ^ uVar40;
              pcVar42 = (char *)(uVar40 >> 0x38 ^ uVar50 >> 0x1c ^ uVar50);
            }
            else if (uVar7 == 5) {
              uVar40 = 0xfffffffffffff844;
              FUN_7fffa560f010();
              uVar40 = (uVar40 << 0x21 | uVar40 >> 0x1f) ^ (uVar40 << 0x14 | uVar40 >> 0x2c) ^
                       uVar40;
              uVar40 = (uVar40 << 2 | uVar40 >> 0x3e) ^ (uVar40 << 0x28 | uVar40 >> 0x18) ^ uVar40;
              uVar40 = (uVar40 << 4 | uVar40 >> 0x3c) ^ (uVar40 << 0x10 | uVar40 >> 0x30) ^ uVar40;
              uVar40 = (uVar40 << 0x20 | uVar40 >> 0x20) ^ (uVar40 << 8 | uVar40 >> 0x38) ^ uVar40;
              pcVar42 = (char *)(uVar40 << 0x30 | uVar40 >> 0x10);
            }
            else {
              uVar40 = ~uVar10;
              uVar32 = (int64_t)puVar37 * 0x4000 ^ (uint64_t)puVar37;
              uVar50 = ~uVar12;
              uVar23 = uVar12 | uVar40 | ~(uint64_t)puVar37;
              FUN_7fffa4a90250(param_1,puVar57,uVar32,
                               (uVar23 & 0xffffffff) * 0xbcb52bdc +
                               ((uVar23 >> 0x20) * 0xbcb52bdc + (uVar23 & 0xffffffff) * 0xfffffffe
                               << 0x20) +
                               (((uint64_t)puVar37 | uVar50) ^ uVar10) * 0x1972a81de +
                               (uVar12 & uVar10 & ~(uint64_t)puVar37) * 0xdb62a436 +
                               (uVar40 ^ (uint64_t)puVar37 ^ uVar12) * -0x1b28d25ee +
                               ((uint64_t)puVar37 & uVar50 & uVar10) * 0x6f4251ca +
                               (((uint64_t)puVar37 | uVar50) ^ uVar40) * 0xc0000026 +
                               ((uVar50 ^ (uint64_t)puVar37) & uVar40) * 0xdb62a436 +
                               ((uint64_t)puVar37 & uVar50 & uVar40) * -0xd72a81b8);
              uVar40 = (uVar32 << 0x32 | uVar32 >> 0xe) - 0x431e21b6;
              pcVar42 = (char *)(uVar40 << 0x38 ^ uVar40 * 0x10000000 ^ uVar40);
            }
          }
          else if (uVar7 < 5) {
            uVar40 = (uint64_t)puVar57 >> 10 ^ (uint64_t)puVar57;
            iVar25 = ((uint32_t)CONCAT62((int6)((uint64_t)puVar43 >> 0x10),0x8465) ^ 0x4b1c) * 0x3daf;
            lVar26 = (*(code *)((int64_t)(short)iVar25 + 0x7fffa4a90629))
                               (iVar25,uVar40 << 0x29 ^ uVar40,0x7a4e0da4,auStack_70,param_1);
            uVar40 = lVar26 * 0x400000020000001;
            pcVar42 = (char *)(((uVar40 << 0x32 | uVar40 >> 0xe) ^
                                (lVar26 * 0x800000040000 | uVar40 >> 0x2e) ^ uVar40) *
                              -0x71c71c71c71c71c7);
          }
          else {
            uVar40 = ~uVar58;
            if (uVar7 == 5) {
              uVar23 = (int64_t)puVar37 << 0x21 ^ (int64_t)puVar37 * 0x10000000000001;
              uVar50 = 0xffffffffd9afe296;
              FUN_7fffa54e5820((((int64_t)puVar57 * 0x20000000 | (uint64_t)puVar57 >> 0x23) ^
                                ((int64_t)puVar57 << 0x24 | (uint64_t)puVar57 >> 0x1c) ^
                               (uint64_t)puVar57) - 0xfdcd9c7b ^ 0x28683c15,FUN_7fffa54e5820,
                               0xd9afe296,
                               (~uVar63 & uVar40) * 0x39196a5a + (uVar58 & ~uVar63) * -0x7e31a9ca +
                               (uVar40 | uVar63) * -0x994ad98f + (uVar58 ^ uVar63) * 0x1e003a95 +
                               (uVar63 & uVar40) * 0x1b192fc5 + (uVar58 & uVar63) * 0x39196a5a,
                               (uVar23 << 0x15 | uVar23 >> 0x2b) ^
                               ((int64_t)puVar37 * 0x10000000000001 << 0x29 | uVar23 >> 0x17) ^
                               uVar23,auStack_70);
              uVar50 = (uVar50 << 2 | uVar50 >> 0x3e) ^ (uVar50 << 0x2d | uVar50 >> 0x13) ^ uVar50;
              uVar50 = (uVar50 << 4 | uVar50 >> 0x3c) ^ (uVar50 << 0x1a | uVar50 >> 0x26) ^ uVar50;
              uVar50 = (uVar50 << 8 | uVar50 >> 0x38) ^ (uVar50 << 0x34 | uVar50 >> 0xc) ^ uVar50;
              uVar50 = (uVar50 << 0x28 | uVar50 >> 0x18) ^ (uVar50 << 0x10 | uVar50 >> 0x30) ^
                       uVar50;
              uVar50 = (uVar50 << 0x20 | uVar50 >> 0x20) ^ (uVar50 << 0x10 | uVar50 >> 0x30) ^
                       uVar50;
              pcVar44 = (code *)(uVar50 << 0x20 | uVar50 >> 0x20);
              lVar26 = -0x7fffffffffffffff;
            }
            else {
              pcVar44 = FUN_7fffa560ce20;
              FUN_7fffa560ce20(puVar57,FUN_7fffa560ce20,
                               (uVar58 & (uint64_t)puVar64 | ~(uint64_t)puVar64 & uVar40) *
                               0x3ec8b92a +
                               (uVar40 & (uint64_t)puVar64) * -0xadd5b687 +
                               (uVar58 ^ (uint64_t)puVar64) * 0x3ec8b92a +
                               (uVar58 | ~(uint64_t)puVar64) * -0xadd5b687,param_1 + 0x34b0d1e2,
                               param_1 + 0x34b0d1e2);
              lVar26 = 0x1000100010001;
            }
            pcVar42 = (char *)((int64_t)pcVar44 * lVar26);
          }
          if (pcVar42 < (char *)0x4) {
LAB_7fffa5402b60:
            puVar57 = puStack_1f0;
            pcVar42 = pcStack_248;
            break;
          }
          uVar45 = 0x1f;
          if ((uint32_t)uStack_270 != 0) {
            for (; (uint32_t)uStack_270 >> uVar45 == 0; uVar45 = uVar45 - 1) {
            }
          }
          iVar25 = 0x1f;
          if ((uint32_t)auStack_70[0] != 0) {
            for (; (uint32_t)auStack_70[0] >> iVar25 == 0; iVar25 = iVar25 + -1) {
            }
          }
          if ((int)pcVar42 * 4 - iVar25 <= (int)((uVar45 ^ 0x1f) + (int)pcStack_248 * 4 + -0x1b))
          goto LAB_7fffa5402b60;
          lStack_148 = lStack_148 + 1;
          uStack_270 = auStack_70[0];
          puVar29 = puVar57;
          pcStack_248 = pcVar42;
          puStack_1f0 = puVar57;
        } while (puVar57 < puVar33);
        if (3 < uStack_270) {
          uVar50 = (int64_t)puVar57 + (-uStack_270 - uVar10) + -0xfffffffd;
          uVar40 = uVar10;
          puVar29 = puVar31;
          if ((uint32_t)uVar50 < uVar8) {
            uVar40 = uVar14 - uVar46;
            puVar29 = (uint64_t *)(uVar22 + uVar14);
          }
          uVar50 = uVar50 & 0xffffffff;
          if (puVar29 < (uint64_t *)(uVar40 + uVar50) && puVar36 < puVar57) {
            lVar26 = uVar40 + uVar50 + -1;
            for (lVar56 = 0;
                *(char *)((int64_t)puVar57 + lVar56 + -1) == *(char *)(lVar26 + lVar56);
                lVar56 = lVar56 + -1) {
              puVar54 = (uint64_t *)((int64_t)puVar57 + lVar56 + -1);
              if (puVar54 <= puVar36 || (uint64_t *)(lVar26 + lVar56) <= puVar29) {
                lVar26 = 1 - lVar56;
                goto LAB_7fffa5402c58;
              }
            }
            lVar26 = -lVar56;
            puVar54 = (uint64_t *)((int64_t)puVar57 + lVar56);
LAB_7fffa5402c58:
            pcVar42 = pcVar42 + lVar26;
            puVar57 = puVar54;
          }
          uStack_1e4 = uStack_bc;
          uStack_bc = (int)uStack_270 - 3;
        }
        uVar40 = (int64_t)puVar57 - (int64_t)puVar36;
        puVar29 = (uint64_t *)param_2[3];
        if (puVar2 < puVar57) {
          puVar54 = puVar29;
          if (puVar36 <= puVar2) {
            uVar50 = puVar36[1];
            *puVar29 = *puVar36;
            puVar29[1] = uVar50;
            puVar54 = (uint64_t *)((int64_t)puVar29 + ((int64_t)puVar2 - (int64_t)puVar36));
            if (0x10 < (int64_t)puVar2 - (int64_t)puVar36) {
              lVar26 = 0x10;
              do {
                uVar17 = ((uint64_t *)((int64_t)puVar36 + lVar26))[1];
                *(uint64_t *)((int64_t)puVar29 + lVar26) =
                     *(uint64_t *)((int64_t)puVar36 + lVar26);
                ((uint64_t *)((int64_t)puVar29 + lVar26))[1] = uVar17;
                puVar13 = (uint64_t *)((int64_t)puVar36 + lVar26 + 0x10);
                uVar17 = puVar13[1];
                puVar6 = (uint64_t *)((int64_t)puVar29 + lVar26 + 0x10);
                *puVar6 = *puVar13;
                puVar6[1] = uVar17;
                lVar56 = lVar26 + 0x20;
                lVar26 = lVar26 + 0x20;
              } while ((uint64_t *)((int64_t)puVar29 + lVar56) < puVar54);
            }
            puVar36 = puVar2;
          }
          if (puVar36 < puVar57) {
            uVar50 = (int64_t)puVar57 - (int64_t)puVar36;
            puVar29 = puVar54;
            if ((3 < uVar50) && (0x1f < (uint64_t)((int64_t)puVar54 - (int64_t)puVar36))) {
              if (uVar50 < 0x20) {
                uVar23 = 0;
              }
              else {
                uVar23 = uVar50 & 0xffffffffffffffe0;
                lVar26 = 0;
                while( true ) {
                  uVar17 = *(uint64_t *)((int64_t)puVar36 + lVar26);
                  uVar18 = ((uint64_t *)((int64_t)puVar36 + lVar26))[1];
                  puVar13 = (uint64_t *)((int64_t)puVar36 + lVar26 + 0x10);
                  uVar19 = puVar13[1];
                  puVar6 = (uint64_t *)((int64_t)puVar54 + lVar26 + 0x10);
                  *puVar6 = *puVar13;
                  puVar6[1] = uVar19;
                  *(uint64_t *)((int64_t)puVar54 + lVar26) = uVar17;
                  ((uint64_t *)((int64_t)puVar54 + lVar26))[1] = uVar18;
                  if (uVar23 - 0x20 == lVar26) break;
                  lVar26 = lVar26 + 0x20;
                }
                if (uVar50 == uVar23) goto LAB_7fffa5402ee0;
                if ((uVar50 & 0x1c) == 0) {
                  puVar29 = (uint64_t *)((int64_t)puVar54 + uVar23);
                  puVar36 = (uint64_t *)((int64_t)puVar36 + uVar23);
                  goto LAB_7fffa5402e85;
                }
              }
              uVar32 = uVar50 & 0xfffffffffffffffc;
              puVar29 = (uint64_t *)((int64_t)puVar54 + uVar32);
              for (; *(uint32_t *)((int64_t)puVar54 + uVar23) =
                          *(uint32_t *)((int64_t)puVar36 + uVar23), uVar32 - 4 != uVar23;
                  uVar23 = uVar23 + 4) {
              }
              if (uVar50 == uVar32) goto LAB_7fffa5402ee0;
              puVar36 = (uint64_t *)((int64_t)puVar36 + uVar32);
            }
LAB_7fffa5402e85:
            uVar45 = (int)puVar57 - (int)puVar36 & 7;
            uVar50 = (uint64_t)uVar45;
            puVar24 = puVar29;
            puVar54 = puVar36;
            if (uVar45 == 0) {
              puVar51 = puVar36;
            }
            else {
              do {
                uVar50 = uVar50 - 1;
                puVar29 = (uint64_t *)((int64_t)puVar24 + 1);
                *(char *)puVar24 = (char)*puVar54;
                puVar51 = (uint64_t *)((int64_t)puVar54 + 1);
                puVar24 = puVar29;
                puVar54 = (uint64_t *)((int64_t)puVar54 + 1);
              } while (uVar50 != 0);
            }
            if ((uint64_t)((int64_t)puVar36 - (int64_t)puVar57) < 0xfffffffffffffff9) {
              while( true ) {
                *(char *)puVar29 = (char)*puVar51;
                *(uint8_t *)((int64_t)puVar29 + 1) = *(uint8_t *)((int64_t)puVar51 + 1);
                *(uint8_t *)((int64_t)puVar29 + 2) = *(uint8_t *)((int64_t)puVar51 + 2);
                *(uint8_t *)((int64_t)puVar29 + 3) = *(uint8_t *)((int64_t)puVar51 + 3);
                *(uint8_t *)((int64_t)puVar29 + 4) = *(uint8_t *)((int64_t)puVar51 + 4);
                *(uint8_t *)((int64_t)puVar29 + 5) = *(uint8_t *)((int64_t)puVar51 + 5);
                *(uint8_t *)((int64_t)puVar29 + 6) = *(uint8_t *)((int64_t)puVar51 + 6);
                *(uint8_t *)((int64_t)puVar29 + 7) = *(uint8_t *)((int64_t)puVar51 + 7);
                if (puVar51 + 1 == puVar57) break;
                puVar29 = puVar29 + 1;
                puVar51 = puVar51 + 1;
              }
            }
          }
LAB_7fffa5402ee0:
          lVar56 = param_2[1];
          param_2[3] = param_2[3] + uVar40;
          if (0xffff < uVar40) {
            *(uint32_t *)(param_2 + 9) = 1;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar56 - *param_2) >> 3);
          }
        }
        else {
          uVar50 = puVar36[1];
          *puVar29 = *puVar36;
          puVar29[1] = uVar50;
          lVar26 = param_2[3];
          if (0x10 < uVar40) {
            uVar50 = puVar36[3];
            *(uint64_t *)(lVar26 + 0x10) = puVar36[2];
            *(uint64_t *)(lVar26 + 0x18) = uVar50;
            if (0x20 < (int64_t)uVar40) {
              uVar50 = lVar26 + 0x40;
              puVar36 = puVar36 + 6;
              while( true ) {
                uVar23 = puVar36[-1];
                *(uint64_t *)(uVar50 - 0x20) = puVar36[-2];
                *(uint64_t *)(uVar50 - 0x18) = uVar23;
                uVar23 = puVar36[1];
                *(uint64_t *)(uVar50 - 0x10) = *puVar36;
                *(uint64_t *)(uVar50 - 8) = uVar23;
                if (lVar26 + uVar40 <= uVar50) break;
                uVar50 = uVar50 + 0x20;
                puVar36 = puVar36 + 4;
              }
            }
            goto LAB_7fffa5402ee0;
          }
          lVar56 = param_2[1];
          param_2[3] = lVar26 + uVar40;
        }
        *(short *)(lVar56 + 4) = (short)uVar40;
        *(int *)param_2[1] = (int)uStack_270;
        if ((char *)0xffff < pcVar42 + -3) {
          *(uint32_t *)(param_2 + 9) = 2;
          *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
        }
        *(short *)(param_2[1] + 6) = (short)(pcVar42 + -3);
        param_2[1] = param_2[1] + 8;
        if (*(int *)(param_1 + 300) != 0) {
          uVar45 = *(uint32_t *)(param_1 + 0x2c);
          uVar40 = (uint64_t)uVar45;
          uVar47 = ((int)puVar33 - (int)(uint64_t *)(uVar10 + uVar40)) + 1;
          if (7 < uVar47) {
            uVar47 = 8;
          }
          if (puVar33 < (uint64_t *)(uVar10 + uVar40)) {
            uVar47 = 0;
          }
          if (uVar45 < uVar47 + uVar45) {
            uVar50 = *(uint64_t *)(param_1 + 0x60);
            cVar16 = (char)*(uint32_t *)(param_1 + 0x34);
            if (5 < uVar9) goto LAB_7fffa540300d;
            do {
              if (uVar21 != 5) {
                uVar62 = (*(int *)(uVar10 + uVar40) * -0x61c8864f ^ (uint32_t)uVar50) >>
                         (0x18U - cVar16 & 0x1f);
                goto LAB_7fffa5403089;
              }
              uVar23 = *(int64_t *)(uVar10 + uVar40) * -0x30e4432345000000;
              while( true ) {
                uVar62 = (uint32_t)((uVar23 ^ uVar50) >> (0x38U - cVar16 & 0x3f));
LAB_7fffa5403089:
                *(uint32_t *)(param_1 + 0x40 + (uint64_t)((uint32_t)uVar40 & 7) * 4) = uVar62;
                if ((uint64_t)(uVar47 + uVar45) - 1 == uVar40) goto LAB_7fffa54030dc;
                uVar40 = uVar40 + 1;
                if (uVar9 < 6) break;
LAB_7fffa540300d:
                uVar23 = *(int64_t *)(uVar10 + uVar40) * -0x30e4432340650000;
              }
            } while( true );
          }
LAB_7fffa54030dc:
          *(uint32_t *)(param_1 + 300) = 0;
        }
        puVar29 = (uint64_t *)((int64_t)puVar57 + (int64_t)pcVar42);
        if (puVar33 < puVar29) {
          puVar36 = puVar29;
        }
        else {
          uVar45 = uStack_bc;
          do {
            uVar62 = uStack_1e4;
            uVar47 = ((int)puVar29 - iVar39) - uVar62;
            uVar40 = uVar10;
            if (uVar47 < uVar8) {
              uVar40 = uVar14 - uVar46;
            }
            if ((0xfffffffc < uVar47 - uVar8) ||
               (piVar27 = (int *)(uVar40 + uVar47), *piVar27 != (int)*puVar29)) {
              puVar36 = puVar29;
              uStack_bc = uVar45;
              uStack_1e4 = uVar62;
              break;
            }
            puVar36 = puVar37;
            if (uVar47 < uVar8) {
              puVar36 = puVar15;
            }
            puVar57 = (uint64_t *)(piVar27 + 1);
            puVar54 = (uint64_t *)((int64_t)puVar29 + 4);
            puVar24 = (uint64_t *)((int64_t)puVar29 + (int64_t)puVar36 + (4 - (int64_t)puVar57))
            ;
            if (puVar37 <= puVar24) {
              puVar24 = puVar37;
            }
            puVar28 = puVar57;
            puVar51 = puVar54;
            if (puVar54 < (uint64_t *)((int64_t)puVar24 - 7U)) {
              if (*puVar57 == *puVar54) {
                lVar26 = 0xc;
LAB_7fffa5403230:
                puVar51 = (uint64_t *)((int64_t)puVar29 + lVar26);
                if (puVar51 < (uint64_t *)((int64_t)puVar24 - 7U)) {
                  if (*(uint64_t *)((int64_t)piVar27 + lVar26) == *puVar51)
                  goto code_r0x7fffa5403249;
                  uVar47 = 0;
                  for (uVar40 = *(uint64_t *)((int64_t)piVar27 + lVar26) ^ *puVar51;
                      (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x8000000000000000) {
                    uVar47 = uVar47 + 1;
                  }
                  uVar40 = ((uint64_t)(uVar47 >> 3) + lVar26) - 4;
                  goto LAB_7fffa54032f7;
                }
                puVar28 = (uint64_t *)((int64_t)piVar27 + lVar26);
                goto LAB_7fffa540326f;
              }
              uVar47 = 0;
              for (uVar40 = *puVar57 ^ *puVar54; (uVar40 & 1) == 0;
                  uVar40 = uVar40 >> 1 | 0x8000000000000000) {
                uVar47 = uVar47 + 1;
              }
              uVar40 = (uint64_t)(uVar47 >> 3);
            }
            else {
LAB_7fffa540326f:
              if ((puVar51 < (uint64_t *)((int64_t)puVar24 - 3U)) &&
                 ((int)*puVar28 == (int)*puVar51)) {
                puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
                puVar51 = (uint64_t *)((int64_t)puVar51 + 4);
              }
              if ((puVar51 < (uint64_t *)((int64_t)puVar24 - 1U)) &&
                 ((uint16_t)*puVar28 == (uint16_t)*puVar51)) {
                puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
                puVar51 = (uint64_t *)((int64_t)puVar51 + 2);
              }
              if (puVar51 < puVar24) {
                puVar51 = (uint64_t *)
                          ((int64_t)puVar51 + (uint64_t)((char)*puVar28 == (char)*puVar51));
              }
              uVar40 = (int64_t)puVar51 - (int64_t)puVar54;
            }
LAB_7fffa54032f7:
            if ((uint64_t *)((int64_t)puVar57 + uVar40) == puVar36) {
              puVar54 = (uint64_t *)((int64_t)puVar54 + uVar40);
              puVar36 = puVar54;
              puVar57 = puVar31;
              if (puVar54 < puVar1) {
                if (*puVar31 == *puVar54) {
                  puVar36 = (uint64_t *)((int64_t)puVar29 + uVar40 + 0xc);
                  lVar26 = 8;
                  if (puVar36 < puVar1) {
LAB_7fffa54033d0:
                    if (*(uint64_t *)((int64_t)puVar31 + lVar26) == *puVar36)
                    goto code_r0x7fffa54033e1;
                    uVar47 = 0;
                    for (uVar50 = *puVar36 ^ *(uint64_t *)((int64_t)puVar31 + lVar26);
                        (uVar50 & 1) == 0; uVar50 = uVar50 >> 1 | 0x8000000000000000) {
                      uVar47 = uVar47 + 1;
                    }
                    uVar50 = (uint64_t)(uVar47 >> 3) + lVar26;
                    goto LAB_7fffa54034ba;
                  }
LAB_7fffa54033f0:
                  puVar57 = (uint64_t *)(lVar26 + (int64_t)puVar31);
                  goto LAB_7fffa54033f3;
                }
                uVar47 = 0;
                for (uVar50 = *puVar54 ^ *puVar31; (uVar50 & 1) == 0;
                    uVar50 = uVar50 >> 1 | 0x8000000000000000) {
                  uVar47 = uVar47 + 1;
                }
                uVar50 = (uint64_t)(uVar47 >> 3);
              }
              else {
LAB_7fffa54033f3:
                if ((puVar36 < puVar4) && ((int)*puVar57 == (int)*puVar36)) {
                  puVar57 = (uint64_t *)((int64_t)puVar57 + 4);
                  puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
                }
                if ((puVar36 < puVar3) && ((uint16_t)*puVar57 == (uint16_t)*puVar36)) {
                  puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
                  puVar57 = (uint64_t *)((int64_t)puVar57 + 2);
                }
                if (puVar36 < puVar37) {
                  puVar36 = (uint64_t *)
                            ((int64_t)puVar36 + (uint64_t)((char)*puVar57 == (char)*puVar36));
                }
                uVar50 = (int64_t)puVar36 - (int64_t)puVar54;
              }
LAB_7fffa54034ba:
              uVar40 = uVar40 + uVar50;
            }
            if (puVar29 <= puVar2) {
              puVar36 = (uint64_t *)param_2[3];
              uVar50 = puVar29[1];
              *puVar36 = *puVar29;
              puVar36[1] = uVar50;
            }
            *(uint16_t *)(param_2[1] + 4) = 0;
            *(uint32_t *)param_2[1] = 1;
            if (0xffff < uVar40 + 1) {
              *(uint32_t *)(param_2 + 9) = 2;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
            }
            puVar29 = (uint64_t *)((int64_t)puVar29 + uVar40 + 4);
            *(short *)(param_2[1] + 6) = (short)(uVar40 + 1);
            param_2[1] = param_2[1] + 8;
            puVar36 = puVar29;
            uStack_bc = uVar62;
            uStack_1e4 = uVar45;
            uVar45 = uVar62;
          } while (puVar29 <= puVar33);
        }
      }
    } while (puVar29 < puVar33);
    param_4 = puVar36;
    uVar48 = uStack_1e4;
  }
  param_3[1] = uVar48;
  *param_3 = uStack_bc;
  return (int64_t)puVar37 - (int64_t)param_4;
code_r0x7fffa54025b7:
  puVar43 = puVar43 + 4;
  goto LAB_7fffa5402590;
code_r0x7fffa5402a07:
  lVar26 = lVar26 + 8;
  goto LAB_7fffa54029e0;
code_r0x7fffa5403249:
  lVar26 = lVar26 + 8;
  goto LAB_7fffa5403230;
code_r0x7fffa54033e1:
  puVar36 = puVar36 + 1;
  lVar26 = lVar26 + 8;
  if (puVar1 <= puVar36) goto LAB_7fffa54033f0;
  goto LAB_7fffa54033d0;
}


// ============================================================================
// Function : FUN_7fffa54037a0  |  RVA: 0xc937a0  |  Size: 1456 bytes
// Callers  : FUN_7fffa5215120@0xaa5120
// Callees  : FUN_7fffa565d310@0xeed310, FUN_7fffa55d63a0@0xe663a0, FUN_7fffa5404c00@0xc94c00, FUN_7fffa5251710@0xae1710, FUN_7fffa5427020@0xcb7020, FUN_7fffa55abd60@0xe3bd60, FUN_7fffa5610170@0xea0170, FUN_7fffa54539d0@0xce39d0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa54037a0(int *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                     uint8_t *param_5,char param_6,int param_7,uint64_t param_8)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint32_t uVar10;
  uint8_t *pbVar11;
  uint8_t *pbVar12;
  int64_t lVar13;
  int *piVar14;
  uint32_t uVar15;
  uint8_t *pbVar16;
  uint8_t auStack_1a8 [32];
  uint8_t *pbStack_188;
  uint8_t *pbStack_180;
  int iStack_178;
  uint64_t uStack_170;
  uint8_t *puStack_168;
  int64_t lStack_160;
  char cStack_158;
  uint32_t uStack_148;
  int iStack_144;
  uint64_t uStack_140;
  uint32_t uStack_138;
  int iStack_134;
  uint8_t *pbStack_130;
  int64_t lStack_128;
  uint64_t uStack_120;
  int64_t lStack_118;
  uint32_t uStack_110;
  uint32_t uStack_100;
  uint8_t auStack_f8 [8];
  uint8_t uStack_f0;
  uint16_t uStack_ef;
  uint8_t uStack_ed;
  uint32_t uStack_ec;
  uint32_t uStack_e8;
  uint32_t uStack_e4;
  int iStack_e0;
  uint32_t uStack_dc;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint32_t auStack_c8 [2];
  int64_t lStack_c0;
  int64_t lStack_b8;
  uint8_t uStack_b0;
  uint16_t uStack_af;
  uint8_t uStack_ad;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  uint32_t uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int64_t lStack_88;
  uint32_t uStack_80;
  int aiStack_78 [10];
  uint64_t uStack_50;
  
  uStack_50 = _DAT_7fffa4780040 ^ (uint64_t)auStack_1a8;
  pbStack_130 = param_5;
  uStack_140 = param_3;
  uStack_120 = param_2;
  iVar6 = FUN_7fffa565d310(param_2,param_4,param_5);
  iStack_144 = iVar6;
  if (-2 < iVar6) {
    if (*(int *)(param_5 + 8) == 0) {
      uVar10 = 0;
    }
    else {
      pbVar16 = (uint8_t *)(*(int64_t *)(param_4 + 8) + (int64_t)*(int *)(param_5 + 8));
      uVar10 = *pbVar16 & 0xf;
      uVar10 = *(uint32_t *)(pbVar16 + (-4 - (int64_t)(char)(&UNK_7fffa56b3150)[uVar10])) >>
               ((&UNK_7fffa56b3160)[uVar10] & 0x1f);
    }
    if ((int)uVar10 <= iVar6) goto LAB_7fffa5403d4a;
    if ((((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) &&
       (*(int64_t *)(param_1 + 0xc) == 0)) {
      lVar8 = FUN_7fffa54539d0();
      if (*(int64_t *)(lVar8 + 0x20) == 0) goto LAB_7fffa5403ce3;
      lVar8 = FUN_7fffa54539d0();
      param_1 = *(int **)(lVar8 + 0x20);
      lVar8 = FUN_7fffa54539d0();
      param_3 = *(uint64_t *)(lVar8 + 0x28);
      uStack_140 = param_3;
      FUN_7fffa5513b10(*(uint64_t *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(int64_t *)(param_1 + 0xc) == 0))))))
      goto LAB_7fffa5403d4a;
      lVar8 = FUN_7fffa54539d0();
      if (*(int64_t *)(lVar8 + 0x38) != 0) {
        lVar8 = FUN_7fffa54539d0();
        uVar3 = *(uint64_t *)(lVar8 + 0x38);
        lVar8 = FUN_7fffa54539d0();
        *(uint64_t *)(lVar8 + 0x38) = 0;
        cVar5 = FUN_7fffa5404c00(param_1,uVar3);
        if (cVar5 == '\0') {
          cVar5 = FUN_7fffa56a0310(uVar3);
          if (cVar5 == '\0') {
            FUN_7fffa52c403c();
            pcVar4 = (code *)__debugbreak();
            (*pcVar4)();
            return;
          }
          FUN_7fffa5488e60(param_1,1);
          FUN_7fffa5427020(&lStack_118);
          FUN_7fffa4f41160(&lStack_118,&UNK_7fffa5894368);
          pcVar4 = (code *)__debugbreak();
          (*pcVar4)();
          return;
        }
        param_3 = uStack_140;
      }
    }
    FUN_7fffa5610170(aiStack_78,param_5,*(uint64_t *)(param_4 + 8));
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if (aiStack_78[0] != 0) {
        pbStack_180 = (uint8_t *)CONCAT44(pbStack_180._4_4_,param_7);
        pbStack_188 = param_5;
        FUN_7fffa5251710(&lStack_118,aiStack_78,iVar6,param_4);
        lStack_128 = lStack_118;
        uStack_148 = uStack_110;
        if (uStack_110 < uStack_100) {
          do {
            iStack_134 = *(int *)(lStack_118 + 0x18);
            uStack_148 = uStack_110;
            if ((iStack_134 <= iVar6) && (iVar6 <= *(int *)(lStack_118 + 0x1c))) {
              uStack_138 = *(uint32_t *)(lStack_118 + 0x20);
              uVar10 = 0;
              iVar7 = *(int *)(lStack_118 + 0x24);
              lStack_88 = *(int64_t *)(param_4 + 8);
              lStack_c0 = 0;
              lStack_b8 = 0;
              uStack_b0 = 0;
              uStack_80 = **(uint32_t **)(param_4 + 0x10);
              uStack_ac = 0;
              uStack_a4 = 0;
              uStack_98 = 0;
              uStack_90 = 0;
              if (iVar7 == 0) {
                auStack_c8[0] = 0;
              }
              else {
                uVar15 = *(uint8_t *)(lStack_88 + iVar7) & 0xf;
                lStack_c0 = (lStack_88 - (char)(&UNK_7fffa56b3150)[uVar15]) + (int64_t)iVar7;
                auStack_c8[0] = *(uint32_t *)(lStack_c0 + -4) >> ((&UNK_7fffa56b3160)[uVar15] & 0x1f);
                lStack_b8 = lStack_c0;
                FUN_7fffa55abd60(auStack_c8);
              }
              uVar15 = auStack_c8[0];
              if (auStack_c8[0] != 0) {
                do {
                  uStack_f0 = uStack_b0;
                  uStack_ef = uStack_af;
                  uStack_ed = uStack_ad;
                  uStack_ec = (uint32_t)uStack_ac;
                  uStack_e8 = uStack_ac._4_4_;
                  uStack_e4 = (uint32_t)uStack_a4;
                  iStack_e0 = uStack_a4._4_4_;
                  uStack_dc = uStack_9c;
                  uStack_d8 = uStack_98;
                  uStack_d0 = uStack_90;
                  iVar6 = *(int *)(*(int64_t *)(param_1 + 0xc) + 0xc);
                  lVar8 = FUN_7fffa5246e30();
                  piVar14 = (int *)((int64_t)iVar6 + lVar8 + 4);
                  iVar6 = *(int *)(*(int64_t *)(param_1 + 0xc) + 0xc);
                  lVar8 = FUN_7fffa5246e30();
                  for (iVar6 = *(int *)(lVar8 + iVar6); 0 < iVar6; iVar6 = iVar6 + -1) {
                    iVar7 = *piVar14;
                    lVar8 = FUN_7fffa5246e30();
                    lVar8 = iVar7 + lVar8;
                    iVar7 = FUN_7fffa5155840(&uStack_f0,lVar8,*(uint64_t *)(param_1 + 0xc));
                    uVar3 = uStack_120;
                    param_5 = pbStack_130;
                    if (iVar7 != 0) {
                      uVar9 = FUN_7fffa524eeb0(uStack_120,param_4,pbStack_130,auStack_f8);
                      if (lVar8 != 0) {
                        FUN_7fffa4e8ea00(param_1,uVar9,&uStack_f0,lVar8);
                      }
                      lVar13 = (int64_t)iStack_e0;
                      lVar8 = FUN_7fffa55d63a0();
                      pbStack_188 = (uint8_t *)(lVar8 + lVar13);
                      cStack_158 = param_6;
                      puStack_168 = &uStack_f0;
                      uStack_170 = CONCAT44(uStack_170._4_4_,uStack_138);
                      iStack_178 = iStack_134;
                      pbStack_180 = param_5;
                      lStack_160 = param_4;
                      FUN_7fffa560e210(uVar3,param_1,uStack_140,uVar9);
                      lStack_118 = lStack_128;
                      iVar6 = iStack_144;
                      goto LAB_7fffa5403b3a;
                    }
                    piVar14 = piVar14 + 1;
                  }
                  FUN_7fffa55abd60(auStack_c8);
                  uVar10 = uVar10 + 1;
                } while (uVar10 != uVar15);
                lStack_118 = lStack_128;
                uStack_110 = uStack_148;
                iVar6 = iStack_144;
              }
              uStack_148 = uStack_110;
              param_5 = pbStack_130;
            }
LAB_7fffa5403b3a:
            pbVar16 = *(uint8_t **)(lStack_118 + 8);
            uStack_148 = uStack_148 + 1;
            lVar8 = (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar16 & 0xf];
            bVar1 = (&UNK_7fffa56b3160)[*pbVar16 & 0xf];
            pbVar11 = pbVar16 + -lVar8;
            uVar10 = *(uint32_t *)(pbVar11 + -4);
            *(uint8_t **)(lStack_118 + 8) = pbVar11;
            *(uint32_t *)(lStack_118 + 0x18) = uVar10 >> (bVar1 & 0x1f);
            cVar5 = (&UNK_7fffa56b3150)[*pbVar11 & 0xf];
            pbVar12 = pbVar16 + (-lVar8 - (int64_t)cVar5);
            *(uint32_t *)(lStack_118 + 0x1c) =
                 *(uint32_t *)(pbVar12 + -4) >> ((&UNK_7fffa56b3160)[*pbVar11 & 0xf] & 0x1f);
            *(uint8_t **)(lStack_118 + 8) = pbVar12;
            pbVar16 = pbVar16 + ((-(int64_t)cVar5 -
                                 (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar12 & 0xf]) - lVar8);
            *(uint32_t *)(lStack_118 + 0x20) =
                 *(uint32_t *)(pbVar16 + -4) >> ((&UNK_7fffa56b3160)[*pbVar12 & 0xf] & 0x1f);
            *(uint8_t **)(lStack_118 + 8) = pbVar16;
            uVar2 = *(uint32_t *)pbVar16;
            *(uint8_t **)(lStack_118 + 8) = pbVar16 + 4;
            *(uint32_t *)(lStack_118 + 0x24) = uVar2;
            uStack_110 = uStack_148;
          } while (uStack_148 < uStack_100);
        }
      }
      if (((*param_5 & 0x40) != 0) && (cVar5 = FUN_7fffa5605d10(param_4,param_5), cVar5 == '\0')) {
        lVar8 = FUN_7fffa54539d0();
        *(int **)(lVar8 + 0x20) = param_1;
        lVar8 = FUN_7fffa54539d0();
        *(uint64_t *)(lVar8 + 0x28) = uStack_140;
        FUN_7fffa52c403c();
        pcVar4 = (code *)__debugbreak();
        (*pcVar4)();
        return;
      }
    }
    else if (aiStack_78[0] != 0) {
      if (param_6 != '\0') goto LAB_7fffa5403d4a;
      uStack_170 = param_8;
      iStack_178 = param_7;
      pbStack_180 = (uint8_t *)CONCAT44(pbStack_180._4_4_,iVar6);
      pbStack_188 = param_5;
      FUN_7fffa507add0(param_1,param_2,param_3,param_4);
    }
    lVar8 = FUN_7fffa54539d0();
    if (*(int64_t *)(lVar8 + 0x38) == 0) {
LAB_7fffa5403ce3:
      FUN_7fffa5488850(uStack_50 ^ (uint64_t)auStack_1a8);
      return;
    }
  }
LAB_7fffa5403d4a:
  FUN_7fffa524fccc();
  pcVar4 = (code *)__debugbreak();
  (*pcVar4)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5403d50  |  RVA: 0xc93d50  |  Size: 1 bytes
// Callers  : FUN_7fffa5488508@0xd18508
// Callees  : none
// ============================================================================
void FUN_7fffa5403d50(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5404900  |  RVA: 0xc94900  |  Size: 631 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5404900(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa47baa36 = 0;
  uRam00007fffa47baa62 = 0;
  uRam00007fffa47baa6a = 0;
  uRam00007fffa47baa52 = 0;
  uRam00007fffa47baa5a = 0;
  uRam00007fffa47baa42 = 0;
  uRam00007fffa47baa4a = 0;
  uRam00007fffa47baa72 = 0;
  uRam00007fffa47baa84 = 0;
  uVar1 = rdtsc();
  lVar5 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0x7fff,(int)uVar1)) * 0xa6d881d9ae9a94c;
  lVar3 = 0;
  while( true ) {
    *(char *)(lVar3 + 0x7fffa47baa31) = (char)((uint64_t)(lVar5 * 0x2d0c4d6e90) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47baa30) = (char)((uint64_t)(lVar5 * 0x1d9ae9a94c) >> 0x20);
    if (lVar3 == 0x5c) break;
    lVar4 = lVar5 * 0xcb0609e2c0;
    lVar5 = lVar5 * -0xa7dc796cd9fef00;
    *(char *)(lVar3 + 0x7fffa47baa32) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar3 + 0x7fffa47baa33) = (char)((uint64_t)lVar5 >> 0x20);
    lVar3 = lVar3 + 4;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47baa36 * 0x24924925 + 0x24924925) * 7;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa47baa42) = uRam00007fffa47baa84;
  bRam00007fffa47baa36 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5404b80  |  RVA: 0xc94b80  |  Size: 80 bytes
// Callers  : FUN_7fffa507ae2a@0x90ae2a
// Callees  : FUN_7fffa54539d0@0xce39d0
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

uint64_t FUN_7fffa5404b80(uint32_t *param_1,uint64_t param_2,uint64_t param_3)

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
// Function : FUN_7fffa5404bd0  |  RVA: 0xc94bd0  |  Size: 39 bytes
// Callers  : FUN_7fffa4ab28e0@0x3428e0, FUN_7fffa5496200@0xd26200, FUN_7fffa507e880@0x90e880
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184
// ============================================================================
uint32_t FUN_7fffa5404bd0(int64_t param_1)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  
  if (param_1 == 0) {
    puVar2 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar2 = 0x16;
    FUN_7fffa55c8ce0();
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(uint32_t *)(param_1 + 0x18);
  }
  return uVar1;
}


// ============================================================================
// Function : FUN_7fffa5404c00  |  RVA: 0xc94c00  |  Size: 29 bytes
// Callers  : FUN_7fffa517b810@0xa0b810, FUN_7fffa54037a0@0xc937a0
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5404c00(int64_t param_1,int *param_2)

{
  int iVar1;
  uint64_t uVar2;
  code *pcVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  uint8_t bVar9;
  int *piVar10;
  int iVar11;
  uint8_t bStackX_10;
  
  if (param_2 == (int *)0x0) {
    FUN_7fffa524fccc();
    pcVar3 = (code *)__debugbreak();
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  bVar9 = 0;
  iVar11 = 0;
  bStackX_10 = 0;
  if (0 < *param_2) {
    do {
      iVar8 = *(int *)(*(int64_t *)(param_1 + 0x30) + 0xc);
      lVar5 = FUN_7fffa5246e30();
      piVar10 = (int *)((int64_t)iVar8 + lVar5 + 4);
      iVar8 = *(int *)(*(int64_t *)(param_1 + 0x30) + 0xc);
      lVar5 = FUN_7fffa5246e30();
      iVar8 = *(int *)(lVar5 + iVar8);
      if (0 < iVar8) {
        do {
          iVar4 = *piVar10;
          lVar5 = FUN_7fffa5246e30();
          uVar2 = *(uint64_t *)(param_1 + 0x30);
          iVar1 = param_2[1];
          lVar6 = FUN_7fffa55d63a0();
          iVar4 = FUN_7fffa56091e0(lVar6 + (int64_t)iVar11 * 0x14 + (int64_t)iVar1,iVar4 + lVar5,
                                   uVar2);
          if (iVar4 != 0) {
            bVar9 = 1;
            bStackX_10 = 1;
            goto LAB_7fffa5404ccc;
          }
          iVar8 = iVar8 + -1;
          piVar10 = piVar10 + 1;
        } while (0 < iVar8);
        bVar9 = bStackX_10;
      }
LAB_7fffa5404ccc:
      iVar11 = iVar11 + 1;
    } while (iVar11 < *param_2);
  }
  return (uint64_t)bVar9;
}


// ============================================================================
// Function : FUN_7fffa5404c1d  |  RVA: 0xc94c1d  |  Size: 28 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t FUN_7fffa5404c1d(uint64_t param_1,int *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t in_RAX;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  uint8_t uVar7;
  uint64_t unaff_RDI;
  uint64_t unaff_R12;
  int *unaff_R13;
  uint64_t unaff_R14;
  int *piVar8;
  int iVar9;
  uint64_t unaff_R15;
  int64_t in_stack_00000060;
  uint8_t uStack0000000000000068;
  
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  uVar7 = 0;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  iVar9 = 0;
  uStack0000000000000068 = 0;
  if (0 < *param_2) {
    *(uint64_t *)(in_RAX + 0x18) = unaff_RBX;
    *(uint64_t *)(in_RAX + -0x18) = unaff_RBP;
    *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
    *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
    do {
      iVar6 = *(int *)(*(int64_t *)(unaff_RSI + 0x30) + 0xc);
      lVar4 = FUN_7fffa5246e30();
      piVar8 = (int *)((int64_t)iVar6 + lVar4 + 4);
      iVar6 = *(int *)(*(int64_t *)(unaff_RSI + 0x30) + 0xc);
      lVar4 = FUN_7fffa5246e30();
      iVar6 = *(int *)(lVar4 + iVar6);
      if (0 < iVar6) {
        do {
          iVar3 = *piVar8;
          lVar4 = FUN_7fffa5246e30();
          uVar2 = *(uint64_t *)(unaff_RSI + 0x30);
          iVar1 = unaff_R13[1];
          lVar5 = FUN_7fffa55d63a0();
          iVar3 = FUN_7fffa56091e0(lVar5 + (int64_t)iVar9 * 0x14 + (int64_t)iVar1,iVar3 + lVar4,
                                   uVar2);
          unaff_RSI = in_stack_00000060;
          if (iVar3 != 0) {
            uVar7 = 1;
            uStack0000000000000068 = 1;
            goto LAB_7fffa5404ccc;
          }
          iVar6 = iVar6 + -1;
          piVar8 = piVar8 + 1;
        } while (0 < iVar6);
        uVar7 = uStack0000000000000068;
      }
LAB_7fffa5404ccc:
      iVar9 = iVar9 + 1;
    } while (iVar9 < *unaff_R13);
  }
  return uVar7;
}


// ============================================================================
// Function : FUN_7fffa5404c39  |  RVA: 0xc94c39  |  Size: 180 bytes
// Callers  : none
// Callees  : FUN_7fffa55d63a0@0xe663a0, FUN_7fffa56091e0@0xe991e0, FUN_7fffa5246e30@0xad6e30
// ============================================================================
uint8_t FUN_7fffa5404c39(void)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t in_RAX;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  uint8_t unaff_DIL;
  uint64_t unaff_R12;
  int *unaff_R13;
  uint64_t unaff_R14;
  int *piVar7;
  int unaff_R15D;
  int64_t in_stack_00000060;
  uint8_t in_stack_00000068;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  do {
    iVar6 = *(int *)(*(int64_t *)(unaff_RSI + 0x30) + 0xc);
    lVar4 = FUN_7fffa5246e30();
    piVar7 = (int *)((int64_t)iVar6 + lVar4 + 4);
    iVar6 = *(int *)(*(int64_t *)(unaff_RSI + 0x30) + 0xc);
    lVar4 = FUN_7fffa5246e30();
    iVar6 = *(int *)(lVar4 + iVar6);
    if (0 < iVar6) {
      do {
        iVar3 = *piVar7;
        lVar4 = FUN_7fffa5246e30();
        uVar2 = *(uint64_t *)(unaff_RSI + 0x30);
        iVar1 = unaff_R13[1];
        lVar5 = FUN_7fffa55d63a0();
        iVar3 = FUN_7fffa56091e0(lVar5 + (int64_t)unaff_R15D * 0x14 + (int64_t)iVar1,iVar3 + lVar4
                                 ,uVar2);
        unaff_RSI = in_stack_00000060;
        if (iVar3 != 0) {
          unaff_DIL = 1;
          in_stack_00000068 = 1;
          goto LAB_7fffa5404ccc;
        }
        iVar6 = iVar6 + -1;
        piVar7 = piVar7 + 1;
      } while (0 < iVar6);
      unaff_DIL = in_stack_00000068;
    }
LAB_7fffa5404ccc:
    unaff_R15D = unaff_R15D + 1;
    if (*unaff_R13 <= unaff_R15D) {
      return unaff_DIL;
    }
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa5404ced  |  RVA: 0xc94ced  |  Size: 22 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t FUN_7fffa5404ced(void)

{
  uint8_t unaff_DIL;
  
  return unaff_DIL;
}


// ============================================================================
// Function : FUN_7fffa5404d03  |  RVA: 0xc94d03  |  Size: 6 bytes
// Callers  : none
// Callees  : FUN_7fffa524fccc@0xadfccc
// ============================================================================
void FUN_7fffa5404d03(void)

{
  code *pcVar1;
  
  FUN_7fffa524fccc();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5404d10  |  RVA: 0xc94d10  |  Size: 459 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5404d10(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  char *pcVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int64_t *plVar7;
  uint64_t *puVar8;
  
  puVar8 = (uint64_t *)(param_2 >> 0x2c ^ param_2);
  puVar3 = (uint32_t *)*puVar8;
  uVar2 = *puVar3;
  while (7 < uVar2) {
    puVar6 = (uint64_t *)puVar8[1];
    plVar7 = (int64_t *)*puVar6;
    plVar5 = *(int64_t **)puVar8[2];
    if (*plVar7 != *plVar5) {
      if ((char)*plVar7 != (char)*plVar5) {
        *(int *)puVar8[3] = *(int *)puVar8[3] + 1;
        puVar6 = (uint64_t *)puVar8[1];
        plVar7 = (int64_t *)*puVar6;
        plVar5 = *(int64_t **)puVar8[2];
      }
      if (*(char *)((int64_t)plVar7 + 1) != *(char *)((int64_t)plVar5 + 1)) {
        *(int *)puVar8[3] = *(int *)puVar8[3] + 1;
        puVar6 = (uint64_t *)puVar8[1];
        plVar7 = (int64_t *)*puVar6;
        plVar5 = *(int64_t **)puVar8[2];
      }
      if (*(char *)((int64_t)plVar7 + 2) != *(char *)((int64_t)plVar5 + 2)) {
        *(int *)puVar8[3] = *(int *)puVar8[3] + 1;
        puVar6 = (uint64_t *)puVar8[1];
        plVar7 = (int64_t *)*puVar6;
        plVar5 = *(int64_t **)puVar8[2];
      }
      if (*(char *)((int64_t)plVar7 + 3) != *(char *)((int64_t)plVar5 + 3)) {
        *(int *)puVar8[3] = *(int *)puVar8[3] + 1;
        puVar6 = (uint64_t *)puVar8[1];
        plVar5 = *(int64_t **)puVar8[2];
        plVar7 = (int64_t *)*puVar6;
      }
      if (*(char *)((int64_t)plVar7 + 4) != *(char *)((int64_t)plVar5 + 4)) {
        *(int *)puVar8[3] = *(int *)puVar8[3] + 1;
        puVar6 = (uint64_t *)puVar8[1];
        plVar7 = (int64_t *)*puVar6;
        plVar5 = *(int64_t **)puVar8[2];
      }
      if (*(char *)((int64_t)plVar7 + 5) != *(char *)((int64_t)plVar5 + 5)) {
        *(int *)puVar8[3] = *(int *)puVar8[3] + 1;
        puVar6 = (uint64_t *)puVar8[1];
        plVar7 = (int64_t *)*puVar6;
        plVar5 = *(int64_t **)puVar8[2];
      }
      if (*(char *)((int64_t)plVar7 + 6) != *(char *)((int64_t)plVar5 + 6)) {
        *(int *)puVar8[3] = *(int *)puVar8[3] + 1;
        puVar6 = (uint64_t *)puVar8[1];
        plVar7 = (int64_t *)*puVar6;
        plVar5 = *(int64_t **)puVar8[2];
      }
      if (*(char *)((int64_t)plVar7 + 7) != *(char *)((int64_t)plVar5 + 7)) {
        *(int *)puVar8[3] = *(int *)puVar8[3] + 1;
        puVar6 = (uint64_t *)puVar8[1];
        plVar7 = (int64_t *)*puVar6;
      }
    }
    *puVar6 = plVar7 + 1;
    *(int64_t *)puVar8[2] = *(int64_t *)puVar8[2] + 8;
    *(int *)*puVar8 = *(int *)*puVar8 + -8;
    puVar3 = (uint32_t *)*puVar8;
    uVar2 = *puVar3;
  }
  *puVar3 = uVar2 - 1;
  while (uVar2 != 0) {
    pcVar4 = *(char **)puVar8[1];
    *(char **)puVar8[1] = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = *(char **)puVar8[2];
    *(char **)puVar8[2] = pcVar4 + 1;
    if (cVar1 != *pcVar4) {
      *(int *)puVar8[3] = *(int *)puVar8[3] + 1;
    }
    uVar2 = *(uint32_t *)*puVar8;
    *(uint32_t *)*puVar8 = uVar2 - 1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5404ee0  |  RVA: 0xc94ee0  |  Size: 401 bytes
// Callers  : none
// Callees  : none
// ============================================================================
IMAGE_DOS_HEADER *
FUN_7fffa5404ee0(uint64_t param_1,uint8_t *param_2,uint64_t param_3,uint64_t param_4,char param_5)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char in_R11B;
  uint64_t in_XMM4_Qa;
  
  bVar1 = param_5 * -0x33;
  bVar1 = (param_5 * -0x66 | (char)bVar1 < '\0') ^ (param_5 * 'h' | bVar1 >> 5) ^ bVar1;
  bVar1 = (bVar1 << 2 | bVar1 >> 6) ^ (bVar1 << 6 | bVar1 >> 2) ^ bVar1;
  bVar1 = bVar1 >> 2 ^ bVar1;
  uVar4 = (uint64_t)(uint8_t)(bVar1 >> 4 ^ bVar1);
  uVar3 = (in_XMM4_Qa << 0x1c | in_XMM4_Qa >> 0x24) ^ 0xfffffffff41a74a2;
  uVar3 = uVar3 >> 0x36 ^ uVar3;
  if (((uVar4 + 2 <= param_1) &&
      ((((*param_2 & 3) == 2 || (0xbf < *(uint8_t *)(uVar3 + 1 + uVar4))) &&
       (bVar1 = param_2[5], (bVar1 & 0x20) == 0)))) &&
     ((bVar2 = (in_R11B + 0x8cU | 1) * (in_R11B + 'J'), -1 < (char)bVar1 &&
      ((uint8_t)((bVar2 * '\x10' | bVar2 >> 4) ^ (param_2[6] | bVar1) & 3) == 0xff)))) {
    param_2[5] = bVar1 | 4;
    param_2[2] = param_2[2] & 0xc0 | 2;
    param_2[0x20] = *(uint8_t *)(uVar3 + uVar4);
    bVar1 = *(uint8_t *)(uVar3 + 1 + uVar4);
    param_2[0xb] = param_2[0xb] + 2;
    *(uint32_t *)(param_2 + 0x18) =
         ((~(uint32_t)bVar1 & 0x78) << 0xd |
          (*(uint32_t *)(param_2 + 0x18) & 0xfff0007d) + (uint32_t)(-1 < (char)bVar1) * 2 |
         (bVar1 & 4) << 0xc) + (bVar1 & 3) * 0x80 + 0x200;
    param_2[0x21] = bVar1;
  }
  return &IMAGE_DOS_HEADER_7fffa4770000;
}

