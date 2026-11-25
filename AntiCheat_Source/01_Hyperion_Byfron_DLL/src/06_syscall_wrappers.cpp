// Subsystem: Inline Syscall Routines
// Functions: 14
#include "../include/module_declarations.hpp"

// ============================================================================
// Function : Unwind@7fffa4e83c30  |  RVA: 0x713c30  |  Size: 2687 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint32_t Unwind_7fffa4e83c30(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int64_t lVar4;
  uint8_t bVar5;
  uint32_t uVar6;
  uint64_t in_RAX;
  uint8_t bVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint16_t uVar10;
  int iVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  uint8_t bVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  uint64_t in_R11;
  bool bVar19;
  uint8_t in_AF;
  uint8_t in_TF;
  uint8_t in_IF;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_VIF;
  uint8_t in_VIP;
  uint8_t in_ID;
  IMAGE_DOS_HEADER *pIVar20;
  
  uVar8 = rdtsc();
  uVar8 = (uVar8 & 0xffffffff00000000 | CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar8)) *
          -0x30ebf64fafbc6efb + 0xdd4e7bdd3b5639a2;
  uVar13 = (uint32_t)(uVar8 >> 0x1b) ^ (uint32_t)(uVar8 >> 0x2d);
  bVar7 = (uint8_t)(uVar8 >> 0x3b);
  uVar13 = (uVar13 >> bVar7 | uVar13 << 0x20 - bVar7) & 3;
  if (uVar13 < 2) {
    if (uVar13 == 1) {
      *(uint64_t *)(param_2 + 0x1ac0) = in_R11;
      uVar6 = uRam00007fffa47bd038;
    }
    else {
      uVar13 = *(int *)(param_2 + 0xc30) * -0x2c02dbdc;
      bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0x1f;
      iVar11 = (int)*(uint64_t *)(param_2 + 0x1220);
      uVar13 = ~(((uVar13 >> bVar7 | uVar13 << 0x20 - bVar7) + iVar11) * *(int *)(param_2 + 0x940));
      bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x1240) & 0x1f;
      uVar14 = *(uint32_t *)(param_2 + 0x860) ^ 0xd4323a48;
      uVar14 = ((uVar14 * -0x5a7d206a | (uint32_t)((int)(uVar14 * -0x2d3e9035) < 0)) ^
               *(uint32_t *)(param_2 + 0x690)) - (int)*(uint64_t *)(param_2 + 0x1240);
      bVar16 = (uint8_t)*(uint64_t *)(param_2 + 0x13d0) & 0x1f;
      uVar15 = uVar14 << bVar16 | uVar14 >> 0x20 - bVar16;
      bVar16 = (uint8_t)*(uint64_t *)(param_2 + 0x4b0);
      bVar5 = bVar16 & 0x1f;
      uVar13 = ~(uVar13 << bVar7 | uVar13 >> 0x20 - bVar7);
      bVar16 = bVar16 & 0x1f;
      uVar14 = uVar13 << bVar16 | uVar13 >> 0x20 - bVar16;
      bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x490) & 0x1f;
      uVar8 = (uint64_t)
              ~((uint32_t)*(uint64_t *)(param_2 + 0x16b8) ^ (uint32_t)*(uint64_t *)(param_2 + 0x8a0) ^
               (uVar15 >> bVar5 | uVar15 << 0x20 - bVar5) + iVar11);
      uVar9 = (uint64_t)*(uint8_t *)(uVar8 + 0x7fffa47bba7e);
      bVar16 = ~*(uint8_t *)(uVar8 + 0x7fffa47bba84 + uVar9 * 4);
      *(uint8_t *)(param_2 + 0x1ac0) = bVar16 << 5 | bVar16 >> 3;
      bVar16 = ~*(uint8_t *)(uVar8 + 0x7fffa47bba85 + uVar9 * 4);
      *(uint8_t *)(param_2 + 0x1ac1) = bVar16 << 5 | bVar16 >> 3;
      bVar16 = ~*(uint8_t *)(uVar8 + 0x7fffa47bba86 + uVar9 * 4);
      *(uint8_t *)(param_2 + 0x1ac2) = bVar16 << 5 | bVar16 >> 3;
      bVar16 = ~*(uint8_t *)(uVar8 + 0x7fffa47bba87 + uVar9 * 4);
      *(uint8_t *)(param_2 + 0x1ac3) = bVar16 << 5 | bVar16 >> 3;
      uVar13 = *(uint32_t *)(param_2 + 0x1ac0) ^ 0x9102c3cc;
      uVar13 = uVar13 & 1 << ((uint8_t)uVar13 & 0x1f);
      bVar19 = uVar13 == 0;
      if ((uVar14 >> bVar7 | uVar14 << 0x20 - bVar7) + *(int *)(param_2 + 0x1988) == 0x4daae27b) {
        bVar19 = (int)uVar13 < 0;
      }
      if (bVar19) {
        uVar8 = ~(0x649a99dd12fb0318U - *(int64_t *)(param_2 + 0x690) ^
                 *(uint64_t *)(param_2 + 0x1240));
        bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x490) & 0x3f;
        uVar8 = (uVar8 << bVar7 | uVar8 >> 0x40 - bVar7) +
                (*(int64_t *)(param_2 + 0x1220) - *(int64_t *)(param_2 + 0x16b8));
        *(uint64_t *)(param_2 + 0x1ac0) =
             ((uVar8 >> 0x20) * 0x78482c7f << 0x20) + (uVar8 & 0xffffffff) * 0x78482c7f ^
             -*(int64_t *)(param_2 + 0x1168) - 2U;
        uVar6 = uRam00007fffa47bc52c;
      }
      else {
        lVar4 = rdtsc();
        uVar8 = lVar4 * -0x5a46117eacb056b3 + 0xeae307aa39e17742;
        uVar14 = (uint32_t)(uVar8 >> 0x1b) ^ (uint32_t)(uVar8 >> 0x2d);
        bVar7 = (uint8_t)(uVar8 >> 0x3b);
        *(uint32_t *)(param_2 + 0x1ac0) = 0x80507fa3;
        if ((uVar14 >> bVar7 | uVar14 << 0x20 - bVar7) < 0x401f4fb) {
          uVar14 = *(int *)(param_2 + 0x4b0) + 0x7f200583;
          bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
          uVar14 = (uVar14 >> bVar7 | uVar14 << 0x20 - bVar7) + *(int *)(param_2 + 0x1240) ^
                   *(uint32_t *)(param_2 + 0x13d0);
          bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x1220) & 0x1f;
          uVar14 = (uVar14 << bVar7 | uVar14 >> 0x20 - bVar7) ^ *(uint32_t *)(param_2 + 0x690);
          bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x1760) & 0x1f;
          *(uint32_t *)(param_2 + 0x1ac0) =
               ((uVar14 << bVar7 | uVar14 >> 0x20 - bVar7) ^ 0x5b646549) * *(int *)(param_2 + 0x5b0)
               ^ *(uint32_t *)(param_2 + 0x490);
        }
        *(uint64_t *)(param_2 + 0x1ac0) = (uint64_t)((int)uVar13 < 0);
        uVar6 = uRam00007fffa4784e5c;
      }
    }
  }
  else {
    uVar10 = ((short)*(uint32_t *)(param_2 + 0x690) + -0x604e) *
             ((uint16_t)*(uint64_t *)(param_2 + 0x6b0) | 1);
    bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x4b0) & 0xf;
    uVar10 = ((uint16_t)*(uint64_t *)(param_2 + 0x1220) ^ (uVar10 << bVar7 | uVar10 >> 0x10 - bVar7)
             ) - (short)*(uint32_t *)(param_2 + 0x8a0);
    bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0xf;
    if (uVar13 < ((int)*(uint64_t *)(param_2 + 0x1618) *
                  (uint32_t)(uint16_t)(((uVar10 >> bVar7 | uVar10 << 0x10 - bVar7) +
                                 (short)*(uint32_t *)(param_2 + 0x1240)) * -0x536b +
                                (short)*(uint32_t *)(param_2 + 0x490)) + 0x4c43 & 0xffff)) {
      uVar1 = *(uint64_t *)(param_2 + 0x4b0);
      uVar17 = (uint32_t)*(uint64_t *)(param_2 + 0x1240);
      uVar13 = (((*(int *)(param_2 + 0xf90) * 0x7f10a1a0 |
                 (uint32_t)(*(int *)(param_2 + 0xf90) * 0x27f10a1a) >> 0x1c) - (int)uVar1) + 0xccccfa3c
               ^ uVar17) + (int)*(uint64_t *)(param_2 + 0x16b8);
      bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x690) & 0x1f;
      uVar14 = *(int *)(param_2 + 0x738) * -0x36897de4;
      uVar12 = ~((int)*(uint64_t *)(param_2 + 0x930) * (uVar13 >> bVar7 | uVar13 << 0x20 - bVar7))
      ;
      bVar16 = (uint8_t)*(uint64_t *)(param_2 + 0x490) & 0x1f;
      bVar7 = (uint8_t)uVar1 & 0x1f;
      uVar8 = rdtsc();
      uVar13 = ~(uVar14 >> bVar7 | uVar14 << 0x20 - bVar7) + *(int *)(param_2 + 0x13d0);
      bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
      uVar13 = uVar13 >> bVar7 | uVar13 << 0x20 - bVar7;
      bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x1220) & 0x1f;
      uVar18 = (uVar13 << bVar7 | uVar13 >> 0x20 - bVar7) ^ (uint32_t)*(uint64_t *)(param_2 + 0x690);
      bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0x1f;
      uVar9 = (uVar8 & 0xffffffff00000000 | CONCAT44((int)((uint64_t)uVar1 >> 0x20),(int)uVar8)) *
              -0x583f2dd720db9bdb + 0xf795178fe9c1f0ba;
      uVar8 = uVar9 >> 0x2d;
      uVar15 = (uint32_t)(uVar9 >> 0x1b);
      uVar13 = (uint32_t)(uVar9 >> 0x20);
      uVar14 = uVar15 ^ uVar13 >> 0xd;
      if ((uVar12 >> bVar16 | uVar12 << 0x20 - bVar16) + (int)*(uint64_t *)(param_2 + 0x1220) <
          ((uVar18 >> bVar7 | uVar18 << 0x20 - bVar7) + 0x3822b4ee ^ uVar17)) {
        uVar14 = uVar13 >> 0xd & uVar15;
      }
      bVar7 = (uint8_t)(uVar9 >> 0x3b);
      *(uint32_t *)(param_2 + 0x1ac0) = 0xbadde7b;
      if ((uVar14 >> bVar7 | uVar14 << 0x20 - bVar7) < 0x464d61) {
        *(uint32_t *)(param_2 + 0x1ac0) = 0xa56f3100;
        uVar8 = 0;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uRam000000007ffe0008;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uRam000000007ffe0008;
        if ((SUB168(auVar3 * ZEXT816(0x1479958),8) +
             (uint64_t)
             CARRY8(SUB168(auVar3 * ZEXT816(0x1479958),0),
                    SUB168(auVar2 * ZEXT816(0x2c99ad7c9c4064b7),8)) & 1) != 0) {
          *(uint8_t (*) [16])(param_2 + 0x1ac0) = (uint8_t  [16])0x0;
          *(uint32_t *)(param_2 + 0x2240) = 0xc8247587;
          uVar13 = (int)*(uint64_t *)(param_2 + 0x940) * -0x71a25bd2 + *(int *)(param_2 + 0x490);
          bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x690) & 0x1f;
          *(uint32_t *)(param_2 + 0x1ac0) = 0;
          uVar13 = *(int *)(param_2 + 0x5e0) * ~(uVar13 << bVar7 | uVar13 >> 0x20 - bVar7);
          bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
          *(uint32_t *)(param_2 + 0x2240) =
               (((int)*(uint64_t *)(param_2 + 0xbc0) - (uVar13 << bVar7 | uVar13 >> 0x20 - bVar7))
               + 0x53a76d83) * *(int *)(param_2 + 0xf90);
          uVar13 = *(uint32_t *)(param_2 + 0x2240);
          uVar15 = (((uint32_t)*(uint64_t *)(param_2 + 0x1740) ^
                    ~((uint32_t)*(uint64_t *)(param_2 + 0x13d0) ^ *(uint32_t *)(param_2 + 0x1220) ^
                     (uint32_t)(uint16_t)((short)*(uint32_t *)(param_2 + 0x1718) * 0x238f)) * -0x2db7) *
                    *(int *)(param_2 + 0x1778) ^ (uint32_t)*(uint64_t *)(param_2 + 0x690)) & 0xffff;
          uVar14 = uVar13 - uVar15;
          uVar8 = (uint64_t)((in_NT & 1) != 0) * 0x4000 |
                  (uint64_t)SBORROW4(uVar13,uVar15) * 0x800 | (uint64_t)((in_IF & 1) != 0) * 0x200
                  | (uint64_t)((int)uVar14 < 0) * 0x80 | (uint64_t)(uVar14 == 0) * 0x40 |
                  (uint64_t)((in_AF & 1) != 0) * 0x10 |
                  (uint64_t)((POPCOUNT(uVar14 & 0xff) & 1U) == 0) * 4 |
                  (uint64_t)(uVar13 < uVar15) | (uint64_t)((in_ID & 1) != 0) * 0x200000 |
                  (uint64_t)((in_AC & 1) != 0) * 0x40000;
          *(uint32_t *)(param_2 + 0x2240) = 0x19b9019c;
          *(uint64_t *)(param_2 + 0x2240) = 0;
          syscall();
        }
      }
      *(uint64_t *)(param_2 + 0x1ac0) = uVar8;
      uVar6 = uRam00007fffa4784e5c;
    }
    else {
      lVar4 = rdtsc();
      uVar13 = uRam000000007ffe03c0 - 0xd;
      if (uRam000000007ffe03c0 < 0xd) {
        bVar19 = SEXT816(lVar4 * -0x583f2dd720db9bdb) !=
                 SEXT816(lVar4) * SEXT816(-0x583f2dd720db9bdb);
        pIVar20 = (IMAGE_DOS_HEADER *)
                  ((uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)bVar19 * 0x800 |
                   (uint64_t)(in_IF & 1) * 0x200 | (uint64_t)(in_TF & 1) * 0x100 |
                   (uint64_t)((int)uVar13 < 0) * 0x80 | (uint64_t)(uVar13 == 0) * 0x40 |
                   (uint64_t)(in_AF & 1) * 0x10 |
                   (uint64_t)((POPCOUNT(uVar13 & 0xff) & 1U) == 0) * 4 | (uint64_t)bVar19 |
                   (uint64_t)(in_ID & 1) * 0x200000 | (uint64_t)(in_VIP & 1) * 0x100000 |
                   (uint64_t)(in_VIF & 1) * 0x80000 | (uint64_t)(in_AC & 1) * 0x40000);
        uVar8 = *(int64_t *)(param_2 + 0x1470) *
                ((*(int64_t *)(param_2 + 0x1660) +
                  (*(int64_t *)(param_2 + 0xa10) +
                  *(int64_t *)(param_2 + 0x400) * 0x6ca6151d066a54f1) *
                  *(int64_t *)(param_2 + 0x4f0) ^ 0xffffffffffffffffU) -
                *(int64_t *)(param_2 + 0x920)) ^ 0x6377eeb6;
        bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x1240) & 0x3f;
        uVar8 = ((uVar8 >> bVar7 | uVar8 << 0x40 - bVar7) - *(int64_t *)(param_2 + 0x690)) +
                lVar4 * -0x583f2dd720db9bdb;
        uVar13 = (uint32_t)(uVar8 >> 0x1b) ^ (uint32_t)(uVar8 >> 0x2d);
        bVar7 = (uint8_t)(uVar8 >> 0x3b);
        *(uint32_t *)(param_2 + 0x1ac0) = 0x11f65bf0;
        if ((uVar13 >> bVar7 | uVar13 << 0x20 - bVar7) < 0x4463ed) {
          pIVar20 = &IMAGE_DOS_HEADER_7fffa4770000;
          *(uint32_t *)(param_2 + 0x1ac0) = 0x1402d08;
        }
        *(IMAGE_DOS_HEADER **)(param_2 + 0x1ac0) = pIVar20;
        uVar6 = uRam00007fffa4784630;
      }
      else {
        uVar8 = lVar4 * 0x5851f42d4c957f2d + 0xcc6ea131266861c6;
        uVar13 = (uint32_t)(uVar8 >> 0x1b) ^ (uint32_t)(uVar8 >> 0x2d);
        bVar7 = (uint8_t)(uVar8 >> 0x3b);
        if ((uVar13 >> bVar7 | uVar13 << 0x20 - bVar7) < 0x4325821) {
          *(uint32_t *)(param_2 + 0x1ac0) = 0xa0180001;
        }
        uVar10 = (short)*(uint64_t *)(param_2 + 0x4b0) + 0xbd76;
        bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x1640) & 0xf;
        uVar10 = uVar10 >> bVar7 | uVar10 << 0x10 - bVar7;
        uVar10 = ~(uVar10 << 9 | uVar10 >> 7);
        bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x1220) & 0xf;
        uVar10 = (uint16_t)*(uint64_t *)(param_2 + 0x690) ^
                 (uVar10 >> bVar7 | uVar10 << 0x10 - bVar7);
        bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x1240) & 0xf;
        *(uint64_t *)(param_2 + 0x1ac0) = *(uint64_t *)(param_2 + 0x1240);
        uVar10 = (short)*(uint64_t *)(param_2 + 0x13d0) +
                 ~(uVar10 >> bVar7 | uVar10 << 0x10 - bVar7);
        bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0xf;
        uVar6 = *(uint32_t *)
                 ((uint64_t)(uint16_t)(uVar10 << bVar7 | uVar10 >> 0x10 - bVar7) + 0x7fffa477ed67);
      }
    }
  }
  syscall();
  *(uint64_t *)(param_2 + 0x6a8) = *(uint64_t *)(param_2 + 0x1730);
  return uVar6;
}


// ============================================================================
// Function : Unwind@7fffa4e84b40  |  RVA: 0x714b40  |  Size: 1649 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4e85162) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e8524d) */

uint32_t Unwind_7fffa4e84b40(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  uint64_t in_RAX;
  uint8_t bVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint8_t bVar9;
  uint32_t uVar10;
  uint64_t in_R11;
  IMAGE_DOS_HEADER *pIVar11;
  
  *(uint64_t *)(param_2 + 0x1418) = *(uint64_t *)(param_2 + 0x23f0);
  uVar5 = rdtsc();
  uVar5 = (uVar5 & 0xffffffff00000000 | CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar5)) *
          -0x30ebf64fafbc6efb + 0xdd4e7bdd3b5639a2;
  uVar8 = (uint32_t)(uVar5 >> 0x2d) ^ (uint32_t)(uVar5 >> 0x1b);
  bVar9 = (uint8_t)(uVar5 >> 0x3b);
  uVar8 = (uVar8 >> bVar9 | uVar8 << 0x20 - bVar9) & 3;
  if (uVar8 < 2) {
    if (uVar8 == 1) {
      *(uint64_t *)(param_2 + 0xfd8) = 0x7fffa47bc638;
      *(uint64_t *)(param_2 + 0x16e8) = *(uint64_t *)(param_2 + 0x16e8) ^ 0xffff80005b8439c7;
      uVar8 = (int)*(uint64_t *)(param_2 + 0x68) *
              (((int)*(uint64_t *)(param_2 + 0x1220) - (int)*(uint64_t *)(param_2 + 0x16b8)) +
              -0x34e63995);
      bVar9 = (uint8_t)*(uint64_t *)(param_2 + 0x1240) & 0x1f;
      uVar8 = ~((uVar8 >> bVar9 | uVar8 << 0x20 - bVar9) + (int)*(uint64_t *)(param_2 + 0x13d0)) *
              (int)*(uint64_t *)(param_2 + 0x690) + (int)*(uint64_t *)(param_2 + 0x490);
      bVar9 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0x1f;
      uVar10 = uVar8 >> bVar9 | uVar8 << 0x20 - bVar9;
      bVar9 = (uint8_t)*(uint64_t *)(param_2 + 0x4b0) & 0x1f;
      uVar8 = (uint32_t)*(uint64_t *)(param_2 + 0x8a0);
      uVar7 = ~(*(int *)(param_2 + 0x850) * ~(uVar8 + 0xdd938fa8)) * *(int *)(param_2 + 0x5e0) ^
              *(uint32_t *)(param_2 + 0x10a0);
      uVar8 = ((*(int *)(param_2 + 0x4b0) + 0x53e8c219U ^ uVar8) * *(int *)(param_2 + 0x690) +
               0xb5b37a4c ^ *(uint32_t *)(param_2 + 0x23d0)) - *(int *)(param_2 + 0x1240);
      bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x1220) & 0x1f;
      if (~((uVar7 << 0x13 | uVar7 >> 0xd) * *(int *)(param_2 + 0xdc0)) + *(int *)(param_2 + 0xa10)
          < ((uVar8 >> bVar4 | uVar8 << 0x20 - bVar4) ^ *(uint32_t *)(param_2 + 0x16b8))) {
        lVar6 = *(int64_t *)(param_2 + 0xfd8);
        bVar4 = *(uint8_t *)(lVar6 + 0x111);
      }
      else {
        lVar6 = *(int64_t *)(param_2 + 0xfd8);
        bVar4 = *(uint8_t *)(lVar6 + 0x111);
      }
      lVar6 = lVar6 + (uint64_t)bVar4 * 4;
      bVar4 = *(uint8_t *)(lVar6 + 0x119);
      bVar1 = *(uint8_t *)(lVar6 + 0x117);
      *(uint8_t *)(param_2 + 0xb1) =
           ~*(uint8_t *)(lVar6 + 0x118) << 5 | (uint8_t)~*(uint8_t *)(lVar6 + 0x118) >> 3;
      *(uint8_t *)(param_2 + 0xb0) = ~bVar1 << 5 | (uint8_t)~bVar1 >> 3;
      bVar1 = *(uint8_t *)(lVar6 + 0x11a);
      *(uint8_t *)(param_2 + 0xb2) = ~bVar4 << 5 | (uint8_t)~bVar4 >> 3;
      *(uint8_t *)(param_2 + 0xb3) = ~bVar1 << 5 | (uint8_t)~bVar1 >> 3;
      uVar8 = *(uint32_t *)(param_2 + 0xb0) ^ 0x9102c3cc;
      if ((1 << ((uint8_t)uVar8 & 0x1f) & uVar8) == 0) {
        *(uint64_t *)(param_2 + 0xb0) =
             (uint64_t)((uVar10 << bVar9 | uVar10 >> 0x20 - bVar9) + 0x213c451a);
        uVar3 = uRam00007fffa47bd038;
      }
      else {
        lVar6 = rdtsc();
        uVar5 = lVar6 * -0x583f2dd720db9bdb + 0xb6b4214b4429e99e;
        pIVar11 = (IMAGE_DOS_HEADER *)(uVar5 >> 0x2d);
        uVar8 = *(uint32_t *)(param_2 + 0xc00) ^ (int)*(uint64_t *)(param_2 + 0xdc0) * 0x3f4c2765;
        bVar9 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0x1f;
        uVar8 = uVar8 << bVar9 | uVar8 >> 0x20 - bVar9;
        bVar9 = (uint8_t)*(uint64_t *)(param_2 + 0x690) & 0x1f;
        uVar7 = ~((uVar8 >> bVar9 | uVar8 << 0x20 - bVar9) ^ *(uint32_t *)(param_2 + 0x13d0));
        bVar9 = (uint8_t)*(uint64_t *)(param_2 + 0x4b0) & 0x1f;
        uVar8 = (uint32_t)(uVar5 >> 0x1b) ^ (uint32_t)(uVar5 >> 0x2d);
        bVar4 = (uint8_t)(uVar5 >> 0x3b);
        *(uint32_t *)(param_2 + 0xb0) =
             ((uVar7 << bVar9 | uVar7 >> 0x20 - bVar9) - *(int *)(param_2 + 0x1220) ^
             *(uint32_t *)(param_2 + 0x16b8)) * *(int *)(param_2 + 0x12e0);
        if ((uVar8 >> bVar4 | uVar8 << 0x20 - bVar4) < 0x108b748) {
          uVar8 = *(int *)(param_2 + 0xd50) +
                  ~((*(int *)(param_2 + 0x1220) + 0x197734a6U ^ *(uint32_t *)(param_2 + 0x490)) +
                    *(int *)(param_2 + 0x1850) ^ *(uint32_t *)(param_2 + 0x16b8));
          bVar9 = (uint8_t)*(uint64_t *)(param_2 + 0x1240) & 0x1f;
          *(uint32_t *)(param_2 + 0xb0) =
               (*(uint32_t *)(param_2 + 0xc50) ^
               (uVar8 >> bVar9 | uVar8 << 0x20 - bVar9) - *(int *)(param_2 + 0x690)) + 0x817962ec;
          pIVar11 = &IMAGE_DOS_HEADER_7fffa4770000;
        }
        *(IMAGE_DOS_HEADER **)(param_2 + 0xb0) = pIVar11;
        uVar3 = uRam00007fffa4784630;
      }
    }
    else {
      *(uint64_t *)(param_2 + 0xb0) = in_R11;
      uVar3 = uRam00007fffa47bc52c;
    }
  }
  else {
    uVar2 = ((uint16_t)*(uint64_t *)(param_2 + 0x5f8) | 1) * -0x5755;
    bVar9 = (uint8_t)*(uint64_t *)(param_2 + 0x4b0) & 0xf;
    uVar2 = uVar2 << bVar9 | uVar2 >> 0x10 - bVar9;
    bVar9 = (uint8_t)*(uint64_t *)(param_2 + 0x1240) & 0xf;
    uVar2 = ~(uVar2 >> bVar9 | uVar2 << 0x10 - bVar9) + (short)*(uint32_t *)(param_2 + 0x8a0);
    bVar9 = (uint8_t)*(uint64_t *)(param_2 + 0x490) & 0xf;
    if (uVar8 < ((uint32_t)(uint16_t)(~(uVar2 << bVar9 | uVar2 >> 0x10 - bVar9) *
                               (short)*(uint32_t *)(param_2 + 0x1618)) * 0x7da7 +
                 (int)*(uint64_t *)(param_2 + 0x16b8) + 0x587 & 0xffff)) {
      *(uint64_t *)(param_2 + 0xb0) = *(uint64_t *)(param_2 + 0x16b8);
      uVar3 = uRam00007fffa47bc52c;
    }
    else {
      uVar5 = (uint64_t)bRam00007fffa47bc749;
      bVar9 = ~*(uint8_t *)(uVar5 * 4 + 0x7fffa47bc74f);
      *(uint8_t *)(param_2 + 0xb0) = bVar9 << 5 | bVar9 >> 3;
      bVar9 = ~*(uint8_t *)(uVar5 * 4 + 0x7fffa47bc750);
      *(uint8_t *)(param_2 + 0xb1) = bVar9 << 5 | bVar9 >> 3;
      bVar9 = ~*(uint8_t *)(uVar5 * 4 + 0x7fffa47bc751);
      *(uint8_t *)(param_2 + 0xb2) = bVar9 << 5 | bVar9 >> 3;
      bVar9 = ~*(uint8_t *)(uVar5 * 4 + 0x7fffa47bc752);
      *(uint8_t *)(param_2 + 0xb3) = bVar9 << 5 | bVar9 >> 3;
      uVar8 = *(uint32_t *)(param_2 + 0xb0) ^ 0x9102c3cc;
      if ((uVar8 >> (uVar8 & 0x1f) & 1) == 0) {
        *(uint64_t *)(param_2 + 0xb0) = 0;
        uVar3 = uRam00007fffa47bd038;
      }
      else {
        *(uint64_t *)(param_2 + 0xb0) = 0;
        uVar3 = uRam00007fffa47bc52c;
      }
    }
  }
  syscall();
  *(uint64_t *)(param_2 + 0x1268) = *(uint64_t *)(param_2 + 0x2460);
  return uVar3;
}


// ============================================================================
// Function : FUN_7fffa52f3bc3  |  RVA: 0xb83bc3  |  Size: 239 bytes
// Callers  : FUN_7fffa5381000@0xc11000
// Callees  : FUN_7fffa537f9fc@0xc0f9fc
// ============================================================================
void FUN_7fffa52f3bc3(void)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  short sVar4;
  uint64_t in_RAX;
  int64_t unaff_RBP;
  uint32_t uVar5;
  uint16_t uVar6;
  uint16_t uVar7;
  uint32_t uStack0000000000000028;
  uint32_t uStack0000000000000030;
  
  *(uint64_t *)(unaff_RBP + 0x5e0) = in_RAX;
  uVar5 = (int)*(uint64_t *)(unaff_RBP + 0x1038) + 0xb996a8a9;
  bVar1 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x480);
  bVar2 = bVar1 & 0x1f;
  bVar3 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1048) & 0xf;
  sVar4 = (short)*(uint64_t *)(unaff_RBP + 0x1038);
  uVar6 = (0x3abbU >> bVar3 | 0x3abb << 0x10 - bVar3) - sVar4;
  bVar1 = bVar1 & 0xf;
  uVar7 = 0x8308 - sVar4;
  uStack0000000000000028 =
       ((uint32_t)(uint16_t)(uVar7 * 0x20 | uVar7 >> 0xb) ^ (uint32_t)*(uint64_t *)(unaff_RBP + 0x480)) -
       (int)*(uint64_t *)(unaff_RBP + 0x1298) & 0xffff;
  uStack0000000000000030 = (uint32_t)(uint16_t)(uVar6 << bVar1 | uVar6 >> 0x10 - bVar1);
  syscall();
  FUN_7fffa537f9fc(0x7fffa52f3c9a,unaff_RBP + 0x120,
                   (uVar5 << bVar2 | uVar5 >> 0x20 - bVar2) * (int)*(uint64_t *)(unaff_RBP + 0xd0)
                   ,unaff_RBP + 0x1210);
  return;
}


// ============================================================================
// Function : FUN_7fffa5319cfc  |  RVA: 0xba9cfc  |  Size: 260 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa538cd87) overlaps instruction at (ram,0x7fffa538cd84)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa538cd84) */
/* WARNING: Removing unreachable block (ram,0x7fffa5323886) */
/* WARNING: Removing unreachable block (ram,0x7fffa538cd7c) */

uint32_t FUN_7fffa5319cfc(void)

{
  uint32_t *puVar1;
  code *pcVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t *puVar5;
  int iVar6;
  uint32_t uVar7;
  uint32_t extraout_var;
  uint8_t bVar8;
  uint64_t uVar9;
  uint32_t *unaff_RBX;
  uint32_t *puVar10;
  uint8_t *puVar11;
  int64_t unaff_RBP;
  uint16_t uVar12;
  int64_t lVar13;
  uint16_t uVar14;
  uint32_t uVar15;
  uint16_t uVar16;
  uint64_t uVar17;
  uint8_t auStackX_8 [32];
  uint32_t uStack0000000000000028;
  int64_t lStack0000000000000030;
  
  uVar16 = (short)*(uint64_t *)(unaff_RBP + 0x3b0) + 0x1121;
  bVar8 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1038) & 0xf;
  uVar14 = (short)*(uint64_t *)(unaff_RBP + 0x290) *
           ((uint16_t)*(uint64_t *)(unaff_RBP + 0x1038) ^ 0x97a6);
  *(uint64_t *)(unaff_RBP + 0x120) = 0;
  iVar6 = (int)*(uint64_t *)(unaff_RBP + 0x1298);
  bVar3 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x590) & 0xf;
  uVar14 = uVar14 >> bVar3 | uVar14 << 0x10 - bVar3;
  uStack0000000000000028 =
       ((uint32_t)(uint16_t)(uVar14 << 1 | (uint16_t)((short)uVar14 < 0)) +
       iVar6 + (int)*(uint64_t *)(unaff_RBP + 0x480)) - 0x2bcb & 0xffff;
  lStack0000000000000030 = unaff_RBP + 0x280;
  lVar13 = unaff_RBP + 0x5e0;
  syscall();
  *(uint32_t *)(unaff_RBP + 0x120) = 0x36200280;
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0xf5ed3f77;
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5,*(uint64_t *)(unaff_RBP + 0x4a0),
            (((uint32_t)(uint16_t)(uVar16 >> bVar8 | uVar16 << 0x10 - bVar8) +
             (int)*(uint64_t *)(unaff_RBP + 0x590)) *
             ((uint32_t)*(uint64_t *)(unaff_RBP + 0x50) | 1) + iVar6) * -0xccb - 0x690f & 0xffff);
  puVar11 = auStackX_8;
  uVar9 = rdtsc();
  uVar17 = 0x203c45795700762d - *(int64_t *)(unaff_RBP + 0x3b0);
  uVar17 = *(int64_t *)(unaff_RBP + 0x1258) * (uVar17 << 0x30 | uVar17 >> 0x10) +
           (*(int64_t *)(unaff_RBP + 0x1038) - *(int64_t *)(unaff_RBP + 0x358)) ^
           *(uint64_t *)(unaff_RBP + 0x368);
  uVar9 = (uVar17 + (uVar9 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar9)) * lVar13) -
          0x4af102f6;
  uVar15 = (uint32_t)(uVar9 >> 0x1b) ^ (uint32_t)(uVar9 >> 0x2d);
  bVar8 = (uint8_t)(uVar9 >> 0x3b);
  *(uint32_t *)(unaff_RBP + 0x120) = 0xdf923067;
  if (*(uint32_t *)(unaff_RBP + 0x120) < 0x1c3fa4e3) {
    puVar10 = (uint32_t *)(uVar17 & 0xffffffff);
    puVar1 = (uint32_t *)((uVar9 >> 0x3b) - 0x7f);
    *puVar1 = *puVar1 << 1 | (uint32_t)((int)*puVar1 < 0);
    uVar15 = (uint32_t)unaff_RBX ^ *puVar10;
    uVar17 = (uint64_t)uVar15;
    puVar5 = (uint8_t *)register0x00000020;
    if (uVar15 != 0) goto code_r0x7fffa5323a5c;
  }
  else {
    puVar10 = unaff_RBX;
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
    puVar5 = puVar11;
    if (0x433353 < (uVar15 >> bVar8 | uVar15 << 0x20 - bVar8)) goto code_r0x7fffa5323a5c;
  }
  register0x00000020 = (BADSPACEBASE *)puVar5;
  *(uint32_t *)(unaff_RBP + 0x120) = 0x223ea6c0;
  lVar13 = 0xb3402bd2;
  if ((uint64_t)uRam000000007ffe02c4 * 0x5555555555555556 < 0x5555555555555556) {
    *(uint8_t (*) [16])(unaff_RBP + 0x120) = (uint8_t  [16])0x0;
    *(uint32_t *)(unaff_RBP + 0x2b0) = 0x2f866db4;
    if (*(uint32_t *)(unaff_RBP + 0x2b0) < 0xf852839a) {
      *(uint32_t *)(unaff_RBP + 0x120) = 0;
      *(uint32_t *)(unaff_RBP + 0x2b0) = 0x95bb4ce5;
      lVar13 = 0x7fffa4786265;
    }
    *(uint64_t *)(unaff_RBP + 0x2b0) = 0;
    uVar17 = (uint64_t)*(uint32_t *)(lVar13 + -0x13d9);
    syscall();
  }
code_r0x7fffa5323a5c:
  iVar6 = (int)CONCAT62((int6)(uVar17 >> 0x10),0x5edb) - (int)*(uint64_t *)(unaff_RBP + 0x590);
  uVar16 = (short)*(uint64_t *)(unaff_RBP + 0x1038) + 0xa690;
  bVar3 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x3b0);
  bVar8 = bVar3 & 0xf;
  uVar14 = (uint16_t)iVar6;
  uVar14 = uVar14 << bVar8 | uVar14 >> 0x10 - bVar8;
  bVar8 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x590) & 0xf;
  bVar4 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1048) & 0xf;
  uVar16 = ~(uVar16 >> bVar8 | uVar16 << 0x10 - bVar8) - (short)*(uint32_t *)(unaff_RBP + 0x1298);
  iVar6 = -0x39eb - CONCAT22((short)((uint32_t)iVar6 >> 0x10),uVar14 >> bVar4 | uVar14 << 0x10 - bVar4);
  bVar8 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1038) & 0xf;
  uVar12 = (uint16_t)iVar6;
  bVar4 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x4d0) & 0xf;
  uVar14 = uVar16 >> bVar4 | uVar16 << 0x10 - bVar4;
  bVar3 = bVar3 & 0xf;
  uVar15 = CONCAT22((short)((uint32_t)iVar6 >> 0x10),uVar12 << bVar8 | uVar12 >> 0x10 - bVar8) ^ 0x438c;
  uVar9 = (uint64_t)(uint16_t)(uVar14 << bVar3 | uVar14 >> 0x10 - bVar3);
  *(uint64_t *)(unaff_RBP + 0x120) = (uint64_t)uVar15;
  uVar7 = uRam00007fffa4784640;
  *(int64_t *)((int64_t)register0x00000020 + 0x30) = unaff_RBP + 0x280;
  *(uint32_t *)((int64_t)register0x00000020 + 0x28) = uVar15 & 0xffff;
  syscall();
  *(uint32_t *)(unaff_RBP + 0x120) = 0xbf1ad074;
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0xfe6fbe5f;
  if ((*(uint32_t *)(unaff_RBP + 0x5e0) & 1) == 0) {
    return uVar7;
  }
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0x9b9ffebf;
  if (*(uint32_t *)(unaff_RBP + 0x5e0) < 0xe244facf) {
    pcVar2 = (code *)swi(0x29);
    lVar13 = (*pcVar2)(5,uVar9,0,unaff_RBP + 0x5e0);
    *(uint32_t *)(lVar13 + 0x15fa8141) = *(uint32_t *)(lVar13 + 0x15fa8141) ^ 0xf001130;
    LOCK();
    *(char *)puVar10 = (char)uVar9;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ============================================================================
// Function : FUN_7fffa532346d  |  RVA: 0xbb346d  |  Size: 244 bytes
// Callers  : FUN_7fffa5381000@0xc11000
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa538cd87) overlaps instruction at (ram,0x7fffa538cd84)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa538cd84) */
/* WARNING: Removing unreachable block (ram,0x7fffa5323886) */
/* WARNING: Removing unreachable block (ram,0x7fffa538cd7c) */

uint32_t FUN_7fffa532346d(void)

{
  uint32_t *puVar1;
  code *pcVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t *puVar5;
  int iVar6;
  uint32_t uVar7;
  uint32_t extraout_var;
  uint8_t bVar8;
  uint64_t uVar9;
  uint32_t *unaff_RBX;
  uint32_t *puVar10;
  uint8_t *puVar11;
  int64_t unaff_RBP;
  uint16_t uVar12;
  uint16_t uVar13;
  uint16_t uVar14;
  int64_t lVar15;
  uint32_t uVar16;
  uint64_t in_R11;
  uint64_t uVar17;
  uint8_t auStackX_8 [32];
  uint32_t uStack0000000000000028;
  int64_t lStack0000000000000030;
  
  *(uint64_t *)(unaff_RBP + 0x120) = in_R11;
  uVar12 = (short)*(uint64_t *)(unaff_RBP + 0x188) * 0x2313;
  uVar13 = ((uint16_t)*(uint64_t *)(unaff_RBP + 0x1298) ^ 0x1ab4) +
           (short)*(uint64_t *)(unaff_RBP + 0x1038);
  bVar8 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x3b0) & 0xf;
  uStack0000000000000028 =
       ((int)*(uint64_t *)(unaff_RBP + 0x590) +
       ((uint32_t)*(uint64_t *)(unaff_RBP + 0x4d0) ^
       (uint32_t)(uint16_t)(uVar13 >> bVar8 | uVar13 << 0x10 - bVar8))) - 0x32b & 0xffff;
  bVar8 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1048) & 0xf;
  uVar12 = uVar12 << bVar8 | uVar12 >> 0x10 - bVar8;
  bVar8 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x590) & 0xf;
  lStack0000000000000030 = unaff_RBP + 0x280;
  lVar15 = unaff_RBP + 0x5e0;
  syscall();
  *(uint32_t *)(unaff_RBP + 0x120) = 0x36200280;
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0xf5ed3f77;
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5,*(uint64_t *)(unaff_RBP + 0x4a0),
            -((uint32_t)(uint16_t)(uVar12 >> bVar8 | uVar12 << 0x10 - bVar8) ^
             (uint32_t)*(uint64_t *)(unaff_RBP + 0x1038)) - 0x414b & 0xffff);
  puVar11 = auStackX_8;
  uVar9 = rdtsc();
  uVar17 = 0x203c45795700762d - *(int64_t *)(unaff_RBP + 0x3b0);
  uVar17 = *(int64_t *)(unaff_RBP + 0x1258) * (uVar17 << 0x30 | uVar17 >> 0x10) +
           (*(int64_t *)(unaff_RBP + 0x1038) - *(int64_t *)(unaff_RBP + 0x358)) ^
           *(uint64_t *)(unaff_RBP + 0x368);
  uVar9 = (uVar17 + (uVar9 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar9)) * lVar15) -
          0x4af102f6;
  uVar16 = (uint32_t)(uVar9 >> 0x1b) ^ (uint32_t)(uVar9 >> 0x2d);
  bVar8 = (uint8_t)(uVar9 >> 0x3b);
  *(uint32_t *)(unaff_RBP + 0x120) = 0xdf923067;
  if (*(uint32_t *)(unaff_RBP + 0x120) < 0x1c3fa4e3) {
    puVar10 = (uint32_t *)(uVar17 & 0xffffffff);
    puVar1 = (uint32_t *)((uVar9 >> 0x3b) - 0x7f);
    *puVar1 = *puVar1 << 1 | (uint32_t)((int)*puVar1 < 0);
    uVar16 = (uint32_t)unaff_RBX ^ *puVar10;
    uVar17 = (uint64_t)uVar16;
    puVar5 = (uint8_t *)register0x00000020;
    if (uVar16 != 0) goto code_r0x7fffa5323a5c;
  }
  else {
    puVar10 = unaff_RBX;
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
    puVar5 = puVar11;
    if (0x433353 < (uVar16 >> bVar8 | uVar16 << 0x20 - bVar8)) goto code_r0x7fffa5323a5c;
  }
  register0x00000020 = (BADSPACEBASE *)puVar5;
  *(uint32_t *)(unaff_RBP + 0x120) = 0x223ea6c0;
  lVar15 = 0xb3402bd2;
  if ((uint64_t)uRam000000007ffe02c4 * 0x5555555555555556 < 0x5555555555555556) {
    *(uint8_t (*) [16])(unaff_RBP + 0x120) = (uint8_t  [16])0x0;
    *(uint32_t *)(unaff_RBP + 0x2b0) = 0x2f866db4;
    if (*(uint32_t *)(unaff_RBP + 0x2b0) < 0xf852839a) {
      *(uint32_t *)(unaff_RBP + 0x120) = 0;
      *(uint32_t *)(unaff_RBP + 0x2b0) = 0x95bb4ce5;
      lVar15 = 0x7fffa4786265;
    }
    *(uint64_t *)(unaff_RBP + 0x2b0) = 0;
    uVar17 = (uint64_t)*(uint32_t *)(lVar15 + -0x13d9);
    syscall();
  }
code_r0x7fffa5323a5c:
  iVar6 = (int)CONCAT62((int6)(uVar17 >> 0x10),0x5edb) - (int)*(uint64_t *)(unaff_RBP + 0x590);
  uVar13 = (short)*(uint64_t *)(unaff_RBP + 0x1038) + 0xa690;
  bVar3 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x3b0);
  bVar8 = bVar3 & 0xf;
  uVar12 = (uint16_t)iVar6;
  uVar12 = uVar12 << bVar8 | uVar12 >> 0x10 - bVar8;
  bVar8 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x590) & 0xf;
  bVar4 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1048) & 0xf;
  uVar13 = ~(uVar13 >> bVar8 | uVar13 << 0x10 - bVar8) - (short)*(uint32_t *)(unaff_RBP + 0x1298);
  iVar6 = -0x39eb - CONCAT22((short)((uint32_t)iVar6 >> 0x10),uVar12 >> bVar4 | uVar12 << 0x10 - bVar4);
  bVar8 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1038) & 0xf;
  uVar14 = (uint16_t)iVar6;
  bVar4 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x4d0) & 0xf;
  uVar12 = uVar13 >> bVar4 | uVar13 << 0x10 - bVar4;
  bVar3 = bVar3 & 0xf;
  uVar16 = CONCAT22((short)((uint32_t)iVar6 >> 0x10),uVar14 << bVar8 | uVar14 >> 0x10 - bVar8) ^ 0x438c;
  uVar9 = (uint64_t)(uint16_t)(uVar12 << bVar3 | uVar12 >> 0x10 - bVar3);
  *(uint64_t *)(unaff_RBP + 0x120) = (uint64_t)uVar16;
  uVar7 = uRam00007fffa4784640;
  *(int64_t *)((int64_t)register0x00000020 + 0x30) = unaff_RBP + 0x280;
  *(uint32_t *)((int64_t)register0x00000020 + 0x28) = uVar16 & 0xffff;
  syscall();
  *(uint32_t *)(unaff_RBP + 0x120) = 0xbf1ad074;
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0xfe6fbe5f;
  if ((*(uint32_t *)(unaff_RBP + 0x5e0) & 1) == 0) {
    return uVar7;
  }
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0x9b9ffebf;
  if (*(uint32_t *)(unaff_RBP + 0x5e0) < 0xe244facf) {
    pcVar2 = (code *)swi(0x29);
    lVar15 = (*pcVar2)(5,uVar9,0,unaff_RBP + 0x5e0);
    *(uint32_t *)(lVar15 + 0x15fa8141) = *(uint32_t *)(lVar15 + 0x15fa8141) ^ 0xf001130;
    LOCK();
    *(char *)puVar10 = (char)uVar9;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ============================================================================
// Function : FUN_7fffa53236d1  |  RVA: 0xbb36d1  |  Size: 63 bytes
// Callers  : FUN_7fffa5322d86@0xbb2d86
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa538cd87) overlaps instruction at (ram,0x7fffa538cd84)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa538cd84) */
/* WARNING: Removing unreachable block (ram,0x7fffa5323886) */
/* WARNING: Removing unreachable block (ram,0x7fffa538cd7c) */

uint32_t FUN_7fffa53236d1(void)

{
  uint32_t *puVar1;
  code *pcVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t *puVar5;
  uint16_t uVar6;
  int iVar7;
  uint32_t uVar8;
  uint32_t extraout_var;
  uint8_t bVar9;
  uint64_t uVar10;
  uint16_t uVar11;
  uint32_t *unaff_RBX;
  uint32_t *puVar12;
  uint8_t *puVar13;
  int64_t unaff_RBP;
  uint16_t uVar14;
  int64_t lVar15;
  uint32_t uVar16;
  uint64_t uVar17;
  uint8_t auStackX_8 [32];
  int64_t lStack0000000000000030;
  
  lStack0000000000000030 = unaff_RBP + 0x280;
  lVar15 = unaff_RBP + 0x5e0;
  syscall();
  *(uint32_t *)(unaff_RBP + 0x120) = 0x36200280;
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0xf5ed3f77;
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar13 = auStackX_8;
  uVar10 = rdtsc();
  uVar17 = 0x203c45795700762d - *(int64_t *)(unaff_RBP + 0x3b0);
  uVar17 = *(int64_t *)(unaff_RBP + 0x1258) * (uVar17 << 0x30 | uVar17 >> 0x10) +
           (*(int64_t *)(unaff_RBP + 0x1038) - *(int64_t *)(unaff_RBP + 0x358)) ^
           *(uint64_t *)(unaff_RBP + 0x368);
  uVar10 = (uVar17 + (uVar10 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar10)) * lVar15) -
           0x4af102f6;
  uVar16 = (uint32_t)(uVar10 >> 0x1b) ^ (uint32_t)(uVar10 >> 0x2d);
  bVar9 = (uint8_t)(uVar10 >> 0x3b);
  *(uint32_t *)(unaff_RBP + 0x120) = 0xdf923067;
  if (*(uint32_t *)(unaff_RBP + 0x120) < 0x1c3fa4e3) {
    puVar12 = (uint32_t *)(uVar17 & 0xffffffff);
    puVar1 = (uint32_t *)((uVar10 >> 0x3b) - 0x7f);
    *puVar1 = *puVar1 << 1 | (uint32_t)((int)*puVar1 < 0);
    uVar16 = (uint32_t)unaff_RBX ^ *puVar12;
    uVar17 = (uint64_t)uVar16;
    puVar5 = (uint8_t *)register0x00000020;
    if (uVar16 != 0) goto code_r0x7fffa5323a5c;
  }
  else {
    puVar12 = unaff_RBX;
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
    puVar5 = puVar13;
    if (0x433353 < (uVar16 >> bVar9 | uVar16 << 0x20 - bVar9)) goto code_r0x7fffa5323a5c;
  }
  register0x00000020 = (BADSPACEBASE *)puVar5;
  *(uint32_t *)(unaff_RBP + 0x120) = 0x223ea6c0;
  lVar15 = 0xb3402bd2;
  if ((uint64_t)uRam000000007ffe02c4 * 0x5555555555555556 < 0x5555555555555556) {
    *(uint8_t (*) [16])(unaff_RBP + 0x120) = (uint8_t  [16])0x0;
    *(uint32_t *)(unaff_RBP + 0x2b0) = 0x2f866db4;
    if (*(uint32_t *)(unaff_RBP + 0x2b0) < 0xf852839a) {
      *(uint32_t *)(unaff_RBP + 0x120) = 0;
      *(uint32_t *)(unaff_RBP + 0x2b0) = 0x95bb4ce5;
      lVar15 = 0x7fffa4786265;
    }
    *(uint64_t *)(unaff_RBP + 0x2b0) = 0;
    uVar17 = (uint64_t)*(uint32_t *)(lVar15 + -0x13d9);
    syscall();
  }
code_r0x7fffa5323a5c:
  iVar7 = (int)CONCAT62((int6)(uVar17 >> 0x10),0x5edb) - (int)*(uint64_t *)(unaff_RBP + 0x590);
  uVar11 = (short)*(uint64_t *)(unaff_RBP + 0x1038) + 0xa690;
  bVar3 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x3b0);
  bVar9 = bVar3 & 0xf;
  uVar6 = (uint16_t)iVar7;
  uVar6 = uVar6 << bVar9 | uVar6 >> 0x10 - bVar9;
  bVar9 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x590) & 0xf;
  bVar4 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1048) & 0xf;
  uVar11 = ~(uVar11 >> bVar9 | uVar11 << 0x10 - bVar9) - (short)*(uint32_t *)(unaff_RBP + 0x1298);
  iVar7 = -0x39eb - CONCAT22((short)((uint32_t)iVar7 >> 0x10),uVar6 >> bVar4 | uVar6 << 0x10 - bVar4);
  bVar9 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1038) & 0xf;
  uVar14 = (uint16_t)iVar7;
  bVar4 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x4d0) & 0xf;
  uVar6 = uVar11 >> bVar4 | uVar11 << 0x10 - bVar4;
  bVar3 = bVar3 & 0xf;
  uVar16 = CONCAT22((short)((uint32_t)iVar7 >> 0x10),uVar14 << bVar9 | uVar14 >> 0x10 - bVar9) ^ 0x438c;
  uVar10 = (uint64_t)(uint16_t)(uVar6 << bVar3 | uVar6 >> 0x10 - bVar3);
  *(uint64_t *)(unaff_RBP + 0x120) = (uint64_t)uVar16;
  uVar8 = uRam00007fffa4784640;
  *(int64_t *)((int64_t)register0x00000020 + 0x30) = unaff_RBP + 0x280;
  *(uint32_t *)((int64_t)register0x00000020 + 0x28) = uVar16 & 0xffff;
  syscall();
  *(uint32_t *)(unaff_RBP + 0x120) = 0xbf1ad074;
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0xfe6fbe5f;
  if ((*(uint32_t *)(unaff_RBP + 0x5e0) & 1) == 0) {
    return uVar8;
  }
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0x9b9ffebf;
  if (*(uint32_t *)(unaff_RBP + 0x5e0) < 0xe244facf) {
    pcVar2 = (code *)swi(0x29);
    lVar15 = (*pcVar2)(5,uVar10,0,unaff_RBP + 0x5e0);
    *(uint32_t *)(lVar15 + 0x15fa8141) = *(uint32_t *)(lVar15 + 0x15fa8141) ^ 0xf001130;
    LOCK();
    *(char *)puVar12 = (char)uVar10;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ============================================================================
// Function : FUN_7fffa537b24b  |  RVA: 0xc0b24b  |  Size: 191 bytes
// Callers  : FUN_7fffa535699f@0xbe699f
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

void FUN_7fffa537b24b(void)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  code *pcVar4;
  uint8_t bVar5;
  uint16_t uVar6;
  uint8_t *puVar7;
  uint8_t *puVar8;
  int64_t unaff_RBP;
  uint8_t *unaff_RSI;
  uint8_t unaff_DIL;
  int64_t lVar9;
  uint32_t in_R9D;
  uint64_t uVar10;
  uint16_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  short unaff_R12W;
  int unaff_R14D;
  int64_t unaff_R15;
  uint8_t in_TF;
  uint8_t auStackX_8 [8];
  uint8_t auStackX_10 [24];
  uint32_t uStack0000000000000028;
  int64_t lStack0000000000000030;
  
  lStack0000000000000030 = unaff_RBP + 0xf68;
  syscall();
  *(uint32_t *)(unaff_RBP + 0x120) = 0xaf7bffff;
  uVar10 = (uint64_t)((uint32_t)(in_TF & 1) * 0x100);
  uVar12 = (int)*(uint64_t *)(unaff_RBP + 0x1298) + (*(uint32_t *)(unaff_RBP + 0x1038) ^ 0x5bc8bea2);
  *(uint32_t *)(unaff_RBP + 0x5e0) = uVar12 >> (unaff_DIL & 0x1f) | uVar12 << 0x20 - (unaff_DIL & 0x1f);
  pcVar4 = (code *)swi(0x29);
  uStack0000000000000028 = in_R9D;
  (*pcVar4)(5,uVar10,0x120c7c90fa93883f,unaff_RBP + 0x5e0);
  puVar7 = auStackX_8;
  uVar10 = uVar10 * -0x583f2dd720db9bdb + 0x4dcab3e97b54b736;
  uVar13 = (uint32_t)*(uint8_t **)(unaff_RBP + 0x1298);
  bVar5 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x5d8) & 0x1f;
  uVar12 = (uint32_t)(uVar10 >> 0x1b);
  if (((0x885c4bf4U >> bVar5 | -0x77a3b40c << 0x20 - bVar5) - uVar13 ^ 0x55f48b46) *
      *(int *)(unaff_RBP + 0xe8) <=
      ~((*(int *)(unaff_RBP + 0x480) + 0x9de6ee68U ^ uVar13) * 0x1aa3c911)) {
    uVar12 = (int)uVar10 * 0x1b;
  }
  uVar12 = (uint32_t)(uVar10 >> 0x2d) ^ uVar12;
  bVar5 = (uint8_t)(uVar10 >> 0x3b);
  *(uint32_t *)(unaff_RBP + 0x120) = 0x40080940;
  if ((*(uint32_t *)(unaff_RBP + 0x120) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar8 = auStackX_8;
  if ((uVar12 >> bVar5 | uVar12 << 0x20 - bVar5) < 0x428997) {
    uVar13 = 0x85a4c29e - *(int *)(unaff_RBP + 0x1038);
    uVar12 = (uint32_t)*(uint64_t *)(unaff_RBP + 0x1298);
    *(uint32_t *)(unaff_RBP + 0x120) =
         ((uVar13 * 0x20 | uVar13 >> 0x1b) - uVar12 ^ 0x9d022d7c) *
         ((uint32_t)*(uint64_t *)(unaff_RBP + 0x3b0) | 1);
    lVar9 = 0x3b0d447b;
    uVar10 = 0xb608deb6 -
             (uint64_t)~((unaff_R14D + -0x1f4954e9) * *(int *)(unaff_RBP + 0xe8) ^ uVar12);
    if ((unaff_R15 * 0x50cc27e115851b6f ^ *(uint64_t *)(unaff_RBP + 0x5d8)) == uVar10) {
      bRamb4056bb53ce1295d = bRamb4056bb53ce1295d ^ (uint8_t)(uVar10 >> 8);
      **(uint8_t **)(unaff_RBP + 0x1298) = *unaff_RSI;
      pcVar4 = (code *)swi(0x82);
      (*pcVar4)();
      puVar7 = auStackX_10;
    }
    puVar8 = puVar7;
    if ((uint64_t)*(uint32_t *)(lVar9 + 0x44f0be49) * 0x5555555555555556 < 0x5555555555555556) {
      *(uint64_t *)(unaff_RBP + 0x120) = 0;
      *(uint64_t *)(unaff_RBP + 0x128) = 0;
      *(uint32_t *)(unaff_RBP + 0x120) = 0;
      *(uint32_t *)(unaff_RBP + 0x2b0) = 0xde40a142;
      *(uint32_t *)(unaff_RBP + 0x2b0) = 0xc40d875b;
      *(uint64_t *)(unaff_RBP + 0x2b0) = 0;
      syscall();
    }
  }
  *(uint64_t *)(unaff_RBP + 0x120) = 0;
  iVar1 = *(int *)(unaff_RBP + 0x50);
  uVar2 = *(uint64_t *)(unaff_RBP + 0x480);
  bVar5 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1048) & 0xf;
  uVar11 = (0x9fb3U >> bVar5 | -0x604d << 0x10 - bVar5) + unaff_R12W;
  uVar3 = *(uint64_t *)(unaff_RBP + 0x1038);
  uVar6 = 0xb757 - (short)uVar3;
  uVar6 = ~(uVar6 * 0x80 | uVar6 >> 9);
  *(int64_t *)(puVar8 + 0x30) = unaff_RBP + 0xf68;
  *(uint32_t *)(puVar8 + 0x28) = (uint32_t)uVar11;
  FUN_7fffa5395888(uVar11,(((uint32_t)uVar2 ^ iVar1 * 0x529a) - 0x4dc6 ^ 0x1379) - (int)uVar3 & 0xffff,
                   ~(uVar6 << 0xc | uVar6 >> 4));
  return;
}


// ============================================================================
// Function : FUN_7fffa537cce1  |  RVA: 0xc0cce1  |  Size: 703 bytes
// Callers  : FUN_7fffa5395888@0xc25888
// Callees  : FUN_7fffa5384fa6@0xc14fa6
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa5397913) overlaps instruction at (ram,0x7fffa5397910)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa5397910) */
/* WARNING: Removing unreachable block (ram,0x7fffa539791d) */
/* WARNING: Removing unreachable block (ram,0x7fffa53978a3) */

void FUN_7fffa537cce1(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  short sVar3;
  short sVar4;
  uint16_t uVar5;
  uint64_t in_RAX;
  int64_t unaff_RBP;
  uint32_t uVar6;
  int64_t *plVar7;
  uint16_t uVar8;
  uint32_t uStack0000000000000028;
  int64_t lStack0000000000000030;
  
  *(uint8_t (*) [16])(unaff_RBP + 0x120) = (uint8_t  [16])0x0;
  uVar6 = (-0x3a192541 - *(int *)(unaff_RBP + 0x1038)) + *(int *)(unaff_RBP + 0x480);
  bVar2 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1298) & 0x1f;
  uVar6 = uVar6 << bVar2 | uVar6 >> 0x20 - bVar2;
  plVar7 = (int64_t *)(uint64_t)((uVar6 << 10 | uVar6 >> 0x16) - *(int *)(unaff_RBP + 0x3b0));
  if (*plVar7 == 0x2a473203a473399) {
    return;
  }
  *(uint32_t *)(unaff_RBP + 0x120) = 0;
  *(uint32_t *)(unaff_RBP + 0x2b0) = 0xccb42ec1;
  if (*(int *)(unaff_RBP + 0x2b0) < 0) {
    *(uint32_t *)(unaff_RBP + 0x2b0) = 0x5941f737;
  }
  else {
    uRamb1813efffe543ce9 = in_RAX;
  }
  *(int64_t **)(unaff_RBP + 0x2b0) = plVar7;
  syscall();
  *(uint64_t *)(unaff_RBP + 0x120) = 0xfd23c4b03a6c03ff;
  uVar1 = *(uint64_t *)(unaff_RBP + 0x3b0);
  sVar3 = (short)*(uint64_t *)(unaff_RBP + 0x12e0);
  uVar5 = ~(sVar3 + 0x403eU);
  bVar2 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1048) & 0xf;
  sVar4 = (uVar5 >> bVar2 | uVar5 << 0x10 - bVar2) + (short)uVar1;
  uVar5 = sVar4 * 0x7c00 | (uint16_t)(sVar4 * -0x2461) >> 6;
  uVar8 = 0x1642 - sVar3;
  uVar8 = uVar8 * 0x1000 | uVar8 >> 4;
  bVar2 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1038) & 0xf;
  uVar8 = uVar8 << bVar2 | uVar8 >> 0x10 - bVar2;
  bVar2 = (uint8_t)uVar1 & 0xf;
  lStack0000000000000030 = unaff_RBP + 0x198;
  uStack0000000000000028 = (uint32_t)uVar5;
  FUN_7fffa5384fa6(uVar5,((~((uint32_t)uVar1 ^ 0xef3cb26) + (int)*(uint64_t *)(unaff_RBP + 0x1038)) -
                          0x3d1e ^ (uint32_t)*(uint64_t *)(unaff_RBP + 0x1298)) & 0xffff,
                   ~(uVar8 >> bVar2 | uVar8 << 0x10 - bVar2));
  return;
}


// ============================================================================
// Function : FUN_7fffa537f066  |  RVA: 0xc0f066  |  Size: 1500 bytes
// Callers  : FUN_7fffa5395888@0xc25888
// Callees  : FUN_7fffa53856bc@0xc156bc
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa53979ce) overlaps instruction at (ram,0x7fffa53979cd)
    */

void FUN_7fffa537f066(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint32_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  code *pcVar5;
  uint8_t bVar6;
  uint8_t bVar7;
  uint16_t uVar8;
  uint32_t uVar9;
  int iVar10;
  uint32_t extraout_var;
  uint64_t uVar11;
  uint8_t bVar12;
  uint32_t uVar13;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int iVar14;
  uint32_t uVar15;
  uint64_t *puVar16;
  int iVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint16_t uVar20;
  uint16_t uVar21;
  uint32_t uStackX_8;
  uint16_t uStackX_c;
  uint16_t uStackX_e;
  uint32_t uStack0000000000000028;
  uint64_t uStack0000000000000030;
  
  puVar2 = *(uint64_t **)(unaff_RBP + 0x1038);
  puVar3 = *(uint64_t **)(unaff_RBP + 0x3b0);
  lVar4 = *(int64_t *)(unaff_RBP + 0x12e0);
  uVar18 = *(uint64_t *)(unaff_RBP + 0x590);
  uVar20 = 0x7880U - (short)puVar2 ^ 0xef1;
  *(uint64_t *)(unaff_RBP + 0x120) = uVar18 & 0xffffffff;
  uVar8 = (short)uVar18 + 0x4c1e;
  bVar6 = (uint8_t)puVar3 & 0xf;
  uVar21 = ~(uVar8 >> bVar6 | uVar8 << 0x10 - bVar6);
  bVar7 = (uint8_t)puVar2 & 0xf;
  uVar8 = 0x61a3 - (((uint16_t)puVar3 | 1) * -0xb1a ^ (uint16_t)*(uint32_t *)(unaff_RBP + 0x480)) *
                   (short)*(uint32_t *)(unaff_RBP + 0x4a0);
  bVar6 = (uint8_t)uVar18 & 0xf;
  uVar8 = ~(uVar8 << bVar6 | uVar8 >> 0x10 - bVar6);
  uVar9 = *(uint32_t *)(param_3 + 0x6384);
  uVar20 = (uVar20 << 7 | uVar20 >> 9) - (uint16_t)puVar3;
  bVar6 = (uint8_t)lVar4 & 0xf;
  uVar20 = (uVar20 >> bVar6 | uVar20 << 0x10 - bVar6) ^ (uint16_t)*(uint64_t *)(unaff_RBP + 0x1298);
  bVar6 = (uint8_t)uVar18 & 0xf;
  uStack0000000000000030 = unaff_RBP + 0x280;
  uStack0000000000000028 = (uint32_t)(uint16_t)~(uVar21 >> bVar7 | uVar21 << 0x10 - bVar7);
  syscall();
  *(uint32_t *)(unaff_RBP + 0x120) = 0xfffe8d7f;
  puVar16 = puVar2;
  if (*(uint32_t *)(unaff_RBP + 0x120) < 0x27fdc6ef) {
    unaff_RBP = 0x46;
    puVar1 = (uint32_t *)(puVar3 + unaff_RBX);
    *puVar1 = *puVar1 << 0xb | *puVar1 >> 0x15;
    puVar16 = puVar2 + 1;
    *puVar2 = *puVar3;
    uVar8 = CONCAT11((char)(uVar8 >> 8),(uint8_t)uVar8 ^ (uint8_t)unaff_RBX);
  }
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0x74ca8f99;
  if ((*(uint32_t *)(unaff_RBP + 0x5e0) & 1) == 0) {
    *(uint64_t *)(lVar4 + -0x1881417) = *(uint64_t *)(lVar4 + -0x1881417) | 0xffffffff916941ff;
    uVar18 = 5;
    pcVar5 = (code *)swi(0x29);
    uVar9 = (*pcVar5)(5,uVar8,uVar20 << bVar6 | uVar20 >> 0x10 - bVar6);
  }
  else {
    uVar13 = ((int)*(uint64_t *)(unaff_RBP + 0x590) - *(int *)(unaff_RBP + 0x1038)) +
             (int)*(uint64_t *)(unaff_RBP + 0x11d8) * 0x73f90d74;
    uVar18 = *(uint64_t *)(unaff_RBP + 0x3b0);
    bVar6 = (uint8_t)uVar18 & 0x1f;
    *(uint32_t *)(unaff_RBP + 0x5e0) =
         (int)*(uint64_t *)(unaff_RBP + 0x1298) + (uVar13 << bVar6 | uVar13 >> 0x20 - bVar6) ^
         0xd0076940;
    if ((*(uint32_t *)(unaff_RBP + 0x5e0) & 1) != 0) {
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      uVar18 = rdtsc();
      uVar11 = CONCAT44(extraout_var,(int)uVar18);
      uVar8 = ~((uint16_t)*(uint64_t *)(unaff_RBP + 0x1038) ^ 0xe394) +
              (short)*(uint64_t *)(unaff_RBP + 0x4d0);
      uVar21 = (uint16_t)*(uint64_t *)(unaff_RBP + 0x590) ^ (uVar8 * 0x80 | uVar8 >> 9);
      bVar6 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1048) & 0xf;
      uVar18 = (uVar18 & 0xffffffff00000000 | uVar11) * 0x5851f42d4c957f2d + 0xcd1a6b327407e926;
      uVar19 = uVar18 >> 0x2d;
      uVar13 = (uint32_t)(uVar18 >> 0x1b) ^ (uint32_t)(uVar18 >> 0x2d);
      bVar12 = (uint8_t)(uVar18 >> 0x3b);
      uVar11 = CONCAT62((int6)(uVar11 >> 0x10),0xd980);
      uVar9 = (uint32_t)uVar11;
      uVar8 = (short)*(uint64_t *)(unaff_RBP + 0x498) *
              ((uint16_t)*(uint64_t *)(unaff_RBP + 0x3b0) ^ 0xd980);
      bVar7 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x590) & 0xf;
      uVar8 = (uVar8 >> bVar7 | uVar8 << 0x10 - bVar7) + 0xde79 ^
              (uint16_t)*(uint32_t *)(unaff_RBP + 0x1298);
      bVar7 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x4d0) & 0xf;
      uVar18 = (uint64_t)(uint16_t)(uVar8 << bVar7 | uVar8 >> 0x10 - bVar7);
      if ((*(int64_t *)(uVar18 + 0xff00000000) + 0xe30U |
          *(uint64_t *)
           (*(int64_t *)
             ((uint64_t)(uint16_t)(uVar21 << bVar6 | uVar21 >> 0x10 - bVar6) + 0xff00000000) + 0x18))
          != 0x86f7d6d4cddbb89b) {
        if ((uVar13 >> bVar12 | uVar13 << 0x20 - bVar12) < 0x430ebd) {
          uVar8 = ~((short)*(uint64_t *)(unaff_RBP + 0x290) *
                   (0x681e - (short)*(uint32_t *)(unaff_RBP + 0x1298))) -
                  (short)*(uint32_t *)(unaff_RBP + 0x4d0);
          bVar6 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1038) & 0xf;
          uVar9 = (uint32_t)(uint16_t)(uVar8 << bVar6 | uVar8 >> 0x10 - bVar6) ^
                  *(uint32_t *)(unaff_RBP + 0x590);
          uVar18 = (uint64_t)(uVar9 & 0xffff);
          if (*(int64_t *)(*(int64_t *)(uVar18 + 0xff00000000) + 0x18) == 0x36f4512409064445) {
            do {
            } while (-1 < (char)((char)uVar9 + '\x17'));
            (*(code *)(CONCAT26(uStackX_e,CONCAT24(uStackX_c,uStackX_8)) + -0x24))
                      (uVar18,0x36f4512409064445,0x9ebf26c745a9beb3);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(uint8_t (*) [16])(unaff_RBP + 0x120) = (uint8_t  [16])0x0;
          *(uint32_t *)(unaff_RBP + 0x2b0) = 0x2eb96d2a;
          *(uint32_t *)(unaff_RBP + 0x120) = 0;
          *(uint32_t *)(unaff_RBP + 0x2b0) = 0xc2e1c34;
          *(uint32_t *)(unaff_RBP + 0x2b0) = 0x4c5f7270;
          uVar9 = ~((int)*(uint64_t *)(unaff_RBP + 0x1298) + 0xf698e6e7U);
          uVar13 = (int)lVar4 * uVar9;
          *(uint64_t *)(unaff_RBP + 0x2b0) = (uint64_t)uVar9;
          bVar6 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x590) & 0x1f;
          uVar9 = uVar13 >> bVar6 | uVar13 << 0x20 - bVar6;
          uVar9 = uVar9 * -0x29f20000 | uVar9 * 0x6e466b07 >> 0xf;
          bVar6 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x3b0) & 0x1f;
          uVar11 = (uint64_t)
                   *(uint32_t *)((uint64_t)(uVar9 >> bVar6 | uVar9 << 0x20 - bVar6) + 0x7fffa47b7600);
          uVar19 = 0;
          syscall();
        }
        iVar14 = (int)*(uint64_t *)(unaff_RBP + 0x3b0);
        uVar15 = (uint32_t)puVar16;
        uVar13 = (uint32_t)*(uint64_t *)(unaff_RBP + 0x1038);
        iVar10 = ~(((uint32_t)CONCAT62((int6)(uVar11 >> 0x10),0x175d) ^ uVar15) * -0x1103 +
                  ((int)*(uint64_t *)(unaff_RBP + 0x1298) - iVar14)) + uVar13;
        uVar9 = ~((int)CONCAT62((uint6)(uint16_t)((uint32_t)iVar10 >> 0x10),0x7d7e) + uVar15 ^ uVar13);
        *(uint64_t *)(unaff_RBP + 0x120) = (uint64_t)uVar9;
        iVar17 = (~(uint32_t)CONCAT62((int6)(uVar19 >> 0x10),0x1e77) + uVar15) - uVar13;
        bVar6 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x590) & 0xf;
        uVar8 = (uint16_t)iVar17;
        iVar17 = (int)*(uint64_t *)(unaff_RBP + 0x4a0) *
                 (CONCAT22((short)((uint32_t)iVar17 >> 0x10),uVar8 >> bVar6 | uVar8 << 0x10 - bVar6) +
                 -0x5407);
        uStack0000000000000030 =
             CONCAT44(uStack0000000000000030._4_4_,
                      (iVar14 - (int)*(uint64_t *)(unaff_RBP + 0x590)) +
                      (uVar9 * 0x168d ^ 0xffff9fa7)) & 0xffffffff0000ffff;
        FUN_7fffa53856bc(iVar17,(short)iVar17,(short)iVar10);
        return;
      }
    }
  }
  do {
  } while ((POPCOUNT((uVar9 | 0xe9fffe79) & 0xff) & 1U) != 0);
                    /* WARNING: Could not recover jumptable at 0x7fffa53979d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uint64_t)*(uint32_t *)(uVar18 + unaff_RBP * 8))();
  return;
}


// ============================================================================
// Function : FUN_7fffa5384fa6  |  RVA: 0xc14fa6  |  Size: 774 bytes
// Callers  : FUN_7fffa537cce1@0xc0cce1
// Callees  : FUN_7fffa5395888@0xc25888
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5385205) */

void FUN_7fffa5384fa6(void)

{
  code *pcVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  int64_t lVar5;
  int64_t lVar6;
  short unaff_BX;
  uint16_t uVar7;
  int64_t unaff_RBP;
  uint64_t uVar8;
  int iVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint16_t uVar12;
  uint32_t unaff_R12D;
  short unaff_R14W;
  
  iVar9 = (int)unaff_RBP + 0x5e0;
  syscall();
  *(uint32_t *)(unaff_RBP + 0x120) = 0xa5a641e1;
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0xed3448ac;
  uVar10 = (int)*(uint64_t *)(unaff_RBP + 0x3b0) + 0x65ad7407U ^ *(uint32_t *)(unaff_RBP + 0x1038);
  bVar3 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1298) & 0x1f;
  if (*(uint32_t *)(unaff_RBP + 0x5e0) <= (uVar10 << bVar3 | uVar10 >> 0x20 - bVar3)) {
    pcVar1 = (code *)swi(1);
    (*pcVar1)();
    return;
  }
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0xb62fe10c;
  uVar8 = (uint64_t)*(uint32_t *)(unaff_RBP + 0x5e0);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  lVar6 = (int64_t)
          (int)((*(int *)(unaff_RBP + 0x1298) + -0x122b40db + unaff_R12D) *
               *(int *)(unaff_RBP + 0xe8));
  lVar5 = uVar8 + lVar6;
  uVar11 = (uint64_t)
           (((*(int *)(unaff_RBP + 0x480) + -0x7c0d1b87) * 0x6460bdd7 ^ 0x591ddc94U) + iVar9);
  uVar8 = (uint64_t)*(uint8_t *)(lVar6 + 0xe + uVar8);
  lVar6 = lVar5 + uVar8 * 4;
  bVar3 = *(uint8_t *)(lVar5 + 0x1e + uVar8 * 4);
  *(uint8_t *)(unaff_RBP + 0x120) = bVar3 << 4 | bVar3 >> 4;
  bVar3 = *(uint8_t *)(lVar6 + 0x21);
  *(uint8_t *)(unaff_RBP + 0x121) = *(uint8_t *)(lVar6 + 0x1f) << 4 | *(uint8_t *)(lVar6 + 0x1f) >> 4;
  *(uint8_t *)(unaff_RBP + 0x122) = *(uint8_t *)(lVar6 + 0x20) << 4 | *(uint8_t *)(lVar6 + 0x20) >> 4;
  *(uint8_t *)(unaff_RBP + 0x123) = bVar3 << 4 | bVar3 >> 4;
  if (((*(uint32_t *)(unaff_RBP + 0x120) ^ 0x65e8ce72) >>
       (*(uint32_t *)(uint64_t)(iVar9 + 0xc6675768) & 0x1f) & 1) != 0) {
    *(uint64_t *)(unaff_RBP + 0x120) = 0;
    *(uint64_t *)(unaff_RBP + 0x128) = 0;
    *(uint32_t *)(unaff_RBP + 0x2b0) = 0x6dfbea6;
    *(uint32_t *)(unaff_RBP + 0x120) = 0;
    bVar3 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1038) & 0x1f;
    *(uint32_t *)(unaff_RBP + 0x2b0) =
         ((0x3182058 << bVar3 | 0x3182058U >> 0x20 - bVar3) ^ unaff_R12D) -
         *(int *)(unaff_RBP + 0x1298);
    bVar3 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1048) & 0xf;
    *(uint64_t *)(unaff_RBP + 0x2b0) = 0x74b46fd33d51214a;
    uVar11 = (uint64_t)
             (short)(((0xc2b2U - unaff_R14W << bVar3 |
                      (uint16_t)(0xc2b2U - unaff_R14W) >> 0x10 - bVar3) +
                     (short)*(uint64_t *)(unaff_RBP + 0x1038)) * -0x4ec9);
    syscall();
  }
  *(uint64_t *)(unaff_RBP + 0x120) = uVar11;
  bVar3 = (uint8_t)unaff_R12D & 0xf;
  uVar7 = unaff_BX * (-0x11ad - (short)*(uint32_t *)(unaff_RBP + 0x3b0)) + 0x8b38;
  bVar4 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1048);
  bVar2 = bVar4 & 0xf;
  uVar12 = ((short)*(uint64_t *)(unaff_RBP + 0x1038) + 0x8736U ^ 0x36e8) - unaff_R14W;
  bVar4 = bVar4 & 0xf;
  FUN_7fffa5395888(uVar7 << bVar2 | uVar7 >> 0x10 - bVar2,
                   (uint32_t)(uint16_t)(0x5458 << bVar3 | 0x5458U >> 0x10 - bVar3) +
                   ((int)*(uint64_t *)(unaff_RBP + 0x1038) - *(int *)(unaff_RBP + 0x1298)) &
                   0xffff,(uVar12 >> bVar4 | uVar12 << 0x10 - bVar4) + 0xffd);
  return;
}


// ============================================================================
// Function : FUN_7fffa5397672  |  RVA: 0xc27672  |  Size: 178 bytes
// Callers  : FUN_7fffa53819b7@0xc119b7
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

void FUN_7fffa5397672(uint64_t param_1,uint16_t param_2,uint64_t param_3)

{
  code *pcVar1;
  uint32_t uVar2;
  short unaff_BX;
  int64_t unaff_RBP;
  short sVar3;
  
  syscall();
  *(uint32_t *)(unaff_RBP + 0x120) = 0xd6e94d08;
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0xe6e6bf7e;
  sVar3 = (((0x459dU - unaff_BX) * 0x10 | (uint16_t)(0x459dU - unaff_BX) >> 0xc) ^
          (uint16_t)*(uint32_t *)(unaff_RBP + 0x1298)) - (short)*(uint32_t *)(unaff_RBP + 0x1038);
  if (*(int *)(unaff_RBP + 0x5e0) < (int)(uint32_t)(uint16_t)(sVar3 * 2 | (uint16_t)(sVar3 < 0))) {
    *(uint32_t *)(unaff_RBP + 0x5e0) = 0x39c63298;
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5,param_2,param_3,unaff_RBP + 0x5e0);
    out(param_2,uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5397bd1  |  RVA: 0xc27bd1  |  Size: 72374 bytes
// Callers  : none
// Callees  : FUN_7fffa5381000@0xc11000, FUN_7fffa52f2071@0xb82071, FUN_7fffa5364e53@0xbf4e53
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

uint64_t FUN_7fffa5397bd1(void)

{
  code *pcVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint64_t in_RAX;
  uint32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint16_t uVar7;
  uint32_t uVar8;
  int iVar9;
  uint32_t uVar10;
  float10 in_ST0;
  
  syscall();
  *(uint32_t *)(unaff_RBP + 0x120) = 0xbf1ad074;
  uVar8 = ~((uint32_t)*(uint64_t *)(unaff_RBP + 0x1038) ^
           (uint32_t)CONCAT62((int6)((uint64_t)in_RAX >> 0x10),0x4f3b));
  bVar2 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x1048) & 0xf;
  uVar7 = (uint16_t)uVar8;
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0xfe6fbe5f;
  iVar9 = (int)*(uint64_t *)(unaff_RBP + 0x11d8);
  uVar4 = (uint32_t)*(uint64_t *)(unaff_RBP + 0x1038);
  uVar10 = uVar4 ^ 0xa0ffa02a;
  uVar10 = ~(uVar10 << 2 | uVar10 >> 0x1e);
  uVar6 = (uint64_t)
          (int)((iVar9 * 0x3bb0a3f0 | (uint32_t)(iVar9 * -0x7c44f5c1) >> 0x1c) + uVar4 ^
               *(uint32_t *)(unaff_RBP + 0x1298));
  if (((*(uint32_t *)(unaff_RBP + 0x5e0) & 1) == 0) != uVar6 < ~(uVar10 << 0x16 | uVar10 >> 10)) {
    return (uint64_t)
           (0x7cf2 - CONCAT22((short)(uVar8 >> 0x10),uVar7 >> bVar2 | uVar7 << 0x10 - bVar2));
  }
  *(uint32_t *)(unaff_RBP + 0x5e0) = 0x9b9ffebf;
  bVar2 = (uint8_t)*(uint64_t *)(unaff_RBP + 0x480) & 0x1f;
  if (~(0x91721d9U >> bVar2 | 0x91721d9 << 0x20 - bVar2) + *(int *)(unaff_RBP + 0x1038) <=
      *(uint32_t *)(unaff_RBP + 0x5e0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = 5;
  pcVar1 = (code *)swi(0x29);
  uVar3 = (*pcVar1)(5,uVar6,*(uint32_t *)(unaff_RBP + 0x120) & 1);
  *(char *)(unaff_RBX + -0x17) = *(char *)(unaff_RBX + -0x17) + (char)(uVar5 & 0xffffffff);
  *(short *)((uVar5 & 0xffffffff) - 0x60920002) = (short)ROUND(in_ST0);
  uVar6 = FUN_7fffa5381000(uVar3);
  return uVar6;
}


// ============================================================================
// Function : Unwind@7fffa53ead80  |  RVA: 0xc7ad80  |  Size: 4020 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa53eb904) */
/* WARNING: Removing unreachable block (ram,0x7fffa53eb90f) */
/* WARNING: Removing unreachable block (ram,0x7fffa53eb82e) */

uint64_t Unwind_7fffa53ead80(uint64_t param_1,int64_t param_2)

{
  char *pcVar1;
  bool bVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint64_t uVar5;
  uint8_t auVar6 [16];
  uint64_t in_RAX;
  uint32_t uVar7;
  uint8_t bVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint16_t uVar12;
  uint32_t uVar13;
  int iVar14;
  uint32_t uVar15;
  uint8_t in_TF;
  uint8_t in_IF;
  uint8_t in_NT;
  
  uVar9 = rdtsc();
  uVar7 = (uint32_t)((uint64_t)in_RAX >> 0x20);
  uVar9 = (uVar9 & 0xffffffff00000000 | CONCAT44(uVar7,(int)uVar9)) * -0x30ebf64fafbc6efb +
          0xdd4e7bdd3b5639a2;
  uVar13 = (uint32_t)(uVar9 >> 0x2d) ^ (uint32_t)(uVar9 >> 0x1b);
  bVar8 = (uint8_t)(uVar9 >> 0x3b);
  uVar13 = (uVar13 >> bVar8 | uVar13 << 0x20 - bVar8) & 3;
  if (uVar13 < 2) {
    if (uVar13 == 1) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uRam000000007ffe0008;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = SUB168(auVar3 * ZEXT816(0x71d428a9ea5a25bc),8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uRam000000007ffe0008;
      auVar6 = auVar4 * ZEXT816(0x147190d) + auVar6;
      if ((auVar6._8_8_ & 1) == 0) {
        *(uint64_t *)(param_2 + 0x10f0) = 0xffff7fffe062e9c2;
        uVar9 = (uint64_t)uRam00007fffa47bd038;
      }
      else {
        uVar9 = rdtsc();
        uVar9 = (uVar9 & 0xffffffff00000000 | CONCAT44(auVar6._4_4_,(int)uVar9)) *
                -0x30ebf64fafbc6efb + 0xc96e0456386d69aa;
        uVar13 = (uint32_t)(uVar9 >> 0x2d) ^ (uint32_t)(uVar9 >> 0x1b);
        bVar8 = (uint8_t)(uVar9 >> 0x3b);
        *(uint32_t *)(param_2 + 0x10f0) = 0x17bcd040;
        if (((uVar13 >> bVar8 | uVar13 << 0x20 - bVar8) < 0x434047) &&
           (*(uint32_t *)(param_2 + 0x10f0) = 0xbecfcdf0,
           (uint64_t)uRam000000007ffe02c4 * 0x5555555555555556 < 0x5555555555555556)) {
          *(uint8_t (*) [16])(param_2 + 0x10f0) = (uint8_t  [16])0x0;
          *(uint32_t *)(param_2 + 0x1a0) = 0xa7d35dcf;
          *(uint32_t *)(param_2 + 0x10f0) = 0;
          *(uint32_t *)(param_2 + 0x1a0) = 0x50d4c3e8;
          *(uint32_t *)(param_2 + 0x1a0) = 0x7082500;
          iVar14 = (-0x615ef054 - (int)*(uint64_t *)(param_2 + 0x10b8)) *
                   *(int *)(param_2 + 0x520);
          uVar12 = (uint16_t)iVar14;
          *(uint64_t *)(param_2 + 0x1a0) =
               (uint64_t)
               (CONCAT22((short)((uint32_t)iVar14 >> 0x10),uVar12 << 6 | uVar12 >> 10) ^
               *(uint32_t *)(param_2 + 0x490));
          syscall();
        }
        *(uint64_t *)(param_2 + 0x10f0) = 0;
        uVar9 = (uint64_t)
                *(uint32_t *)(((uint64_t)
                           ((int)*(uint64_t *)(param_2 + 0x10b8) +
                            ((uint32_t)*(uint64_t *)(param_2 + 0x198) ^ 0x53ecebe1) & 0xffff) ^ 0xc6d)
                         + 0x7fffa4782b73);
      }
    }
    else {
      uVar13 = 0x3e07085U - *(int *)(param_2 + 0x2e8) ^ 0x654c188b;
      uVar13 = ~(uVar13 << 9 | uVar13 >> 0x17);
      bVar8 = (uint8_t)*(uint64_t *)(param_2 + 0x10b8) & 0x1f;
      if ((uint64_t)
          *(uint32_t *)((int64_t)(int)(uVar13 >> bVar8 | uVar13 << 0x20 - bVar8) + 0x871e9f2f) *
          0x5555555555555556 < 0x5555555555555556) {
        *(uint64_t *)(param_2 + 0x10f0) = 0x9d4a1b583ac0ce7b;
        uVar9 = (uint64_t)uRam00007fffa47bd038;
      }
      else {
        *(uint64_t *)(param_2 + 0x10f0) = 0x5555555555555555;
        uVar9 = (uint64_t)uRam00007fffa47bc52c;
      }
    }
  }
  else if (uVar13 == 3) {
    uVar13 = ~(((uint32_t)*(uint64_t *)(param_2 + 0x1088) | 1) * 0x5d236268);
    uVar5 = rdtsc();
    uVar9 = CONCAT44(0x9272a49e,(int)((uint64_t)uVar5 >> 0x20)) << 0x20 |
            CONCAT44(uVar7,(int)uVar5);
    if ((*(uint8_t *)((uint64_t)~(uVar13 << 0x1a | uVar13 >> 6) + 0x5fb5b230) & 1) == 0) {
      uVar9 = uVar9 * -0x158b4ad174161d9b + 0x7b9f023f68404c02;
      uVar13 = (uint32_t)(uVar9 >> 0x1b) ^ (uint32_t)(uVar9 >> 0x2d);
      bVar8 = (uint8_t)(uVar9 >> 0x3b);
      if (((uVar13 >> bVar8 | uVar13 << 0x20 - bVar8) < 0x10d47cd) &&
         (uVar9 = *(int64_t *)(param_2 + 0xd0) * -0x4659cf8239cdc356,
         bVar8 = (uint8_t)*(uint64_t *)(param_2 + 0x1318) & 0x3f,
         (uint64_t)uRam000000007ffe02c4 * 0x5555555555555556 <
         (((uVar9 << bVar8 | uVar9 >> 0x40 - bVar8) ^ 0xe7727f9c) + 0x278ce298) *
         (*(uint64_t *)(param_2 + 0x13d0) | 1))) {
        *(uint8_t (*) [16])(param_2 + 0x10f0) = (uint8_t  [16])0x0;
        *(uint32_t *)(param_2 + 0x1a0) = 0x631a902;
        *(uint32_t *)(param_2 + 0x10f0) = 0;
        *(uint64_t *)(param_2 + 0x1a0) = *(uint64_t *)(param_2 + 0x1318);
        syscall();
      }
      *(int64_t *)(param_2 + 0x10f0) =
           *(int64_t *)(param_2 + 0x10b8) + *(int64_t *)(param_2 + 0x1318) + 0x2a4157ea111dac50;
      uVar9 = (uint64_t)uRam00007fffa4784630;
    }
    else {
      uVar9 = uVar9 * -0x2ecbdabc217d106b + 0xd58727c2a7c8cd16;
      uVar13 = (uint32_t)(uVar9 >> 0x2d) ^ (uint32_t)(uVar9 >> 0x1b);
      bVar8 = (uint8_t)(uVar9 >> 0x3b);
      *(uint32_t *)(param_2 + 0x10f0) = 0x8367d6ad;
      if ((uVar13 >> bVar8 | uVar13 << 0x20 - bVar8) < 0x438fd9a) {
        iVar14 = (int)*(uint64_t *)(param_2 + 0x10b8);
        uVar15 = ~(iVar14 + 0x5864e185U);
        uVar13 = (uint32_t)*(uint64_t *)(param_2 + 0x1318);
        *(uint8_t (*) [16])(param_2 + 0x10f0) = (uint8_t  [16])0x0;
        *(uint32_t *)(param_2 + 0x1a0) = (uVar15 << 0x1e | uVar15 >> 2) ^ uVar13;
        uVar13 = (iVar14 + 0xbc8fd9bfU ^ uVar13) * 0x78dfbbd3;
        bVar8 = (uint8_t)*(uint64_t *)(param_2 + 0x430) & 0x1f;
        uVar15 = uVar13 + 0xa749fd70 >> bVar8 | uVar13 + 0xa749fd70 << 0x20 - bVar8;
        bVar2 = (*(uint64_t *)(param_2 + 0x430) & 0x1f) == 0;
        *(uint32_t *)(param_2 + 0x10f0) = 0;
        *(uint32_t *)(param_2 + 0x1a0) = uVar15;
        *(uint32_t *)(param_2 + 0x1a0) = 0xe607e505;
        if (-1 < *(int *)(param_2 + 0x1a0)) {
          pcVar1 = (char *)(*(int64_t *)(param_2 + 0x218) + -0x16536b7a);
          *pcVar1 = *pcVar1 - ((uint8_t)((uint64_t)(in_NT & 1) * 0x4000 >> 8) |
                               (uint8_t)((uint64_t)
                                      (uint8_t)((bVar8 == 1) *
                                             ((bVar2 * (0x58b6028f < uVar13) |
                                              !bVar2 * ((int)uVar15 < 0)) ^ (int)(uVar15 << 1) < 0)
                                            | (bVar8 != 1) * SCARRY4(uVar13,-0x58b60290)) * 0x800 >>
                                     8) | (uint8_t)((uint64_t)(in_IF & 1) * 0x200 >> 8) |
                              (uint8_t)((uint64_t)(in_TF & 1) * 0x100 >> 8));
        }
        *(uint64_t *)(param_2 + 0x1a0) = 0x71f0695140986041;
        syscall();
      }
      *(uint64_t *)(param_2 + 0x10f0) = 0x44b8bf0599d4ad20;
      uVar9 = (uint64_t)uRam00007fffa4784630;
    }
  }
  else {
    uVar9 = rdtsc();
    uVar10 = (uVar9 & 0xffffffff00000000 | CONCAT44(uVar7,(int)uVar9)) * -0x158b4ad174161d9b +
             0xb22aa23cde3758f6;
    uVar9 = uVar10 >> 0x3b;
    uVar13 = (uint32_t)(uVar10 >> 0x2d) ^ (uint32_t)(uVar10 >> 0x1b);
    bVar8 = (uint8_t)(uVar10 >> 0x3b);
    *(uint32_t *)(param_2 + 0x10f0) = 0x7ff6fa7a;
    if (((uVar13 >> bVar8 | uVar13 << 0x20 - bVar8) < 0x465f4c) &&
       (uVar9 = *(uint64_t *)(param_2 + 0xe8), bVar8 = (uint8_t)uVar9 & 0x3f,
       (uint64_t)
       *(uint32_t *)((uint64_t)
                 ((((uint32_t)*(uint64_t *)(param_2 + 0x170) | 1) * 0x7cf6740a ^ 0xa66c33a0) +
                 *(int *)(param_2 + 0x1318)) + 0x161ace4b) * 0x5555555555555556 <
       (-0x2a6a555555554c89 << bVar8 | 0xd595aaaaaaaab377U >> 0x40 - bVar8) -
       *(int64_t *)(param_2 + 0x10b8))) {
      *(uint8_t (*) [16])(param_2 + 0x10f0) = (uint8_t  [16])0x0;
      *(uint32_t *)(param_2 + 0x1a0) = 0xed86faba;
      *(uint32_t *)(param_2 + 0x10f0) = 0;
      *(uint32_t *)(param_2 + 0x1a0) = 0x5807ccdb;
      *(uint64_t *)(param_2 + 0x1a0) = *(uint64_t *)(param_2 + 0x1318);
      uVar9 = 0x7fffa53eb184;
      syscall();
    }
    lVar11 = 0x645;
    *(uint64_t *)(param_2 + 0x10f0) = uVar9;
    iVar14 = (-0x3ed94bf8 - *(int *)(param_2 + 0x10b8)) + *(int *)(param_2 + 0x610);
    if ((int64_t)(int)((int)*(uint64_t *)(param_2 + 0x150) * (iVar14 * 2 | (uint32_t)(iVar14 < 0))) <
        (int64_t)
        (uint64_t)
        ((*(int *)(param_2 + 0x1370) * -0x3a5960e1 + *(int *)(param_2 + 0x1318)) *
         *(int *)(param_2 + 0x168) + 0xba1b1910)) {
      lVar11 = 0x7fffa47845c4;
    }
    uVar9 = (uint64_t)*(uint32_t *)(lVar11 + 0x6c);
  }
  syscall();
  *(uint32_t *)(param_2 + 0x10f0) = 0xb87d8836;
  if (*(char *)(param_2 + 0x88) != '\0') {
    *(uint8_t *)(param_2 + 0x10f0) = 0;
    uVar9 = (**(code **)(param_2 + 0x1028))
                      (0x14,*(uint8_t *)(param_2 + 0x12bf),0,param_2 + 0x10f0);
  }
  return uVar9;
}


// ============================================================================
// Function : Unwind@7fffa557fea0  |  RVA: 0xe0fea0  |  Size: 2154 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t Unwind_7fffa557fea0(uint64_t param_1,int64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint64_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint64_t in_RAX;
  int64_t lVar7;
  uint8_t bVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint8_t bVar13;
  uint64_t uVar14;
  int iVar15;
  uint32_t uVar16;
  
  uVar11 = rdtsc();
  uVar11 = (uVar11 & 0xffffffff00000000 | CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar11)) *
           -0x30ebf64fafbc6efb + 0xdd4e7bdd3b5639a2;
  uVar5 = (uint32_t)(uVar11 >> 0x2d) ^ (uint32_t)(uVar11 >> 0x1b);
  bVar13 = (uint8_t)(uVar11 >> 0x3b);
  uVar5 = (uVar5 >> bVar13 | uVar5 << 0x20 - bVar13) & 3;
  if (uVar5 < 2) {
    if (uVar5 == 1) {
      *(uint64_t *)(param_2 + 0x8c0) = 0x7cffc76de07889d5;
      uVar6 = uRam00007fffa47bd038;
    }
    else {
      uVar5 = *(int *)(param_2 + 0x818) + 0x858c53afU ^ *(uint32_t *)(param_2 + 0x14f0);
      uVar11 = (uint64_t)bRam00007fffa47bc749;
      if (-0x251d4041 - (*(int *)(param_2 + 0x430) + -0x5e2d907c) <
          (int)(uVar5 << 0xf | uVar5 >> 0x11)) {
        bVar8 = ~*(uint8_t *)(uVar11 * 4 + 0x7fffa47bc750);
        bVar13 = ~*(uint8_t *)(uVar11 * 4 + 0x7fffa47bc74f);
        *(uint8_t *)(param_2 + 0x8c0) = bVar13 << 5 | bVar13 >> 3;
        bVar13 = *(uint8_t *)(uVar11 * 4 + 0x7fffa47bc751);
        *(uint8_t *)(param_2 + 0x8c1) = bVar8 << 5 | bVar8 >> 3;
      }
      else {
        bVar13 = ~*(uint8_t *)(uVar11 * 4 + 0x7fffa47bc74f);
        *(uint8_t *)(param_2 + 0x8c0) = bVar13 << 5 | bVar13 >> 3;
        bVar13 = ~*(uint8_t *)(uVar11 * 4 + 0x7fffa47bc750);
        *(uint8_t *)(param_2 + 0x8c1) = bVar13 << 5 | bVar13 >> 3;
        bVar13 = *(uint8_t *)(uVar11 * 4 + 0x7fffa47bc751);
      }
      uVar16 = (uint32_t)*(uint64_t *)(param_2 + 0x818);
      uVar10 = uVar16 ^ 0x50792c68;
      uVar16 = (int)*(uint64_t *)(param_2 + 0x760) * -0x900c775 ^ uVar16;
      *(uint8_t *)(param_2 + 0x8c2) = ~bVar13 << 5 | (uint8_t)~bVar13 >> 3;
      bVar13 = ~*(uint8_t *)(uVar11 * 4 + 0x7fffa47bc752);
      *(uint8_t *)(param_2 + 0x8c3) = bVar13 << 5 | bVar13 >> 3;
      uVar9 = *(uint32_t *)(param_2 + 0x8c0) ^ 0x9102c3cc;
      bVar13 = (uint8_t)uVar9 & 0x1f;
      uVar5 = 1 << bVar13;
      if (~(uVar16 << 2 | uVar16 >> 0x1e) <=
          ((uint32_t)*(uint64_t *)(param_2 + 0x4c0) ^ (uVar10 << 0xc | uVar10 >> 0x14))) {
        uVar5 = 1 >> bVar13;
      }
      if ((uVar5 & uVar9) == 0) {
        *(uint64_t *)(param_2 + 0x8c0) =
             (*(int64_t *)(param_2 + 0x818) + 0x1778005d7560e184) * 0xc0000093 ^
             *(uint64_t *)(param_2 + 0x14f0);
        uVar6 = uRam00007fffa47bc52c;
      }
      else {
        lVar7 = rdtsc();
        uVar11 = lVar7 * -0x5a46117eacb056b3 + 0xeae307aa39e17742;
        uVar5 = (uint32_t)(uVar11 >> 0x1b) ^ (uint32_t)(uVar11 >> 0x2d);
        bVar13 = (uint8_t)(uVar11 >> 0x3b);
        *(uint32_t *)(param_2 + 0x8c0) = 0x80507fa3;
        if ((uVar5 >> bVar13 | uVar5 << 0x20 - bVar13) < 0x401f4fb) {
          *(uint32_t *)(param_2 + 0x8c0) = 0x273aea38;
        }
        *(uint64_t *)(param_2 + 0x8c0) = 0;
        bVar13 = (uint8_t)*(uint64_t *)(param_2 + 0x260) & 0x1f;
        uVar5 = (0xaada41ebU >> bVar13 | -0x5525be15 << 0x20 - bVar13) ^ 0x6018862c;
        bVar13 = (uint8_t)*(uint64_t *)(param_2 + 0x818) & 0x1f;
        lVar7 = 0x7fffa4788071;
        if ((uint64_t)
            ((int)*(uint64_t *)(param_2 + 0x818) + *(int *)(param_2 + 0x3a8) * 0xd7b5adb +
            0x72df847b) < (uint64_t)(int64_t)(int)(uVar5 >> bVar13 | uVar5 << 0x20 - bVar13)) {
          lVar7 = 0x7fffa4784d64;
        }
        uVar6 = *(uint32_t *)(lVar7 + 0xf8);
      }
    }
  }
  else if (uVar5 == 3) {
    lVar7 = (*(uint64_t *)(param_2 + 0x818) | 1) * 0x5fcad6f1093fde31;
    uVar5 = (uint32_t)((uint64_t)(lVar7 << 0x31) >> 0x20) | (uint32_t)((uint64_t)lVar7 >> 0x2f);
    uVar3 = rdtsc();
    uVar11 = CONCAT44(uVar5,(int)((uint64_t)uVar3 >> 0x20)) << 0x20 | CONCAT44(uVar5,(int)uVar3);
    if (uRam000000007ffe03c0 < 0xd) {
      uVar11 = uVar11 * -0x583f2dd720db9bdb + 0xa64f3d123c3736;
      uVar5 = (uint32_t)(uVar11 >> 0x1b) ^ (uint32_t)(uVar11 >> 0x2d);
      bVar13 = (uint8_t)(uVar11 >> 0x3b);
      *(uint32_t *)(param_2 + 0x8c0) = 0x11f65bf0;
      if ((uVar5 >> bVar13 | uVar5 << 0x20 - bVar13) < 0x4463ed) {
        *(uint32_t *)(param_2 + 0x8c0) = 0x1402d08;
      }
      iVar15 = (int)*(uint64_t *)(param_2 + 0x818);
      uVar5 = (*(uint32_t *)(param_2 + 0x4c0) ^ 0x39731301) - iVar15;
      uVar10 = iVar15 + 0x209416db;
      uVar4 = ~((short)*(uint32_t *)(param_2 + 0x12d0) * -0x63da);
      *(uint64_t *)(param_2 + 0x8c0) = *(uint64_t *)(param_2 + 0x818);
      uVar11 = 0x7fffa47845c4;
      if ((uint64_t)
          (int64_t)
          (int)((uVar10 * 0x80000 | uVar10 >> 0xd) - *(int *)(param_2 + 0x430) ^ 0xecc220e2) <
          (uint64_t)(uVar5 * 0x20 | uVar5 >> 0x1b)) {
        uVar11 = (int64_t)(short)(uVar4 * 0x1800 | (uint16_t)(uVar4 * -0x58fd) >> 5) | 0x7fffa478aa78
        ;
      }
      uVar6 = *(uint32_t *)(uVar11 + 0x6c);
    }
    else {
      bVar13 = (uint8_t)*(uint64_t *)(param_2 + 0x818) & 0x3f;
      uVar11 = ((-0x3750988dde810467 << bVar13 | 0xc8af6772217efb99U >> 0x40 - bVar13) ^
               (uint64_t)DAT_7fffa56bb6a0) + uVar11 * 0x5851f42d4c957f2d;
      uVar5 = (uint32_t)(uVar11 >> 0x2d) ^ (uint32_t)(uVar11 >> 0x1b);
      bVar13 = (uint8_t)(uVar11 >> 0x3b);
      if ((uVar5 >> bVar13 | uVar5 << 0x20 - bVar13) < 0x4325821) {
        *(uint32_t *)(param_2 + 0x8c0) = 0xa0180001;
      }
      lVar7 = -0x7fff8370c5da;
      uVar10 = (uint32_t)*(uint64_t *)(param_2 + 0x4c0);
      uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x818);
      bVar13 = (uint8_t)*(uint64_t *)(param_2 + 0x818) & 0x1f;
      if ((uVar10 + 0xddb37d4b ^ 0x3a89deaa) + uVar5 ==
          (0x85c55cf3U >> bVar13 | -0x7a3aa30d << 0x20 - bVar13) - *(int *)(param_2 + 0x260)) {
        lVar7 = 0x7fff8070c449;
      }
      *(int64_t *)(param_2 + 0x8c0) =
           lVar7 - *(int *)(param_2 + 0x14c0) * 0x7a99817a ^
           (int64_t)(int)~(uVar10 ^ 0xa0b4e190 ^ uVar5);
      uVar6 = uRam00007fffa4784e5c;
    }
  }
  else {
    uVar14 = 0;
    uVar11 = rdtsc();
    uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x3d0) | 1;
    uVar11 = (uint64_t)uVar5 * 0x3069e48a +
             ((uint64_t)uVar5 * 0x99216813 + (*(uint64_t *)(param_2 + 0x3d0) >> 0x20) * 0x3069e48a
             << 0x20) +
             (CONCAT44(0x66de97ed,(int)(uVar11 >> 0x20)) << 0x20 | uVar11 & 0xffffffff) *
             -0x583f2dd720db9bdb;
    uVar5 = (uint32_t)(uVar11 >> 0x1b) ^ (uint32_t)(uVar11 >> 0x2d);
    bVar13 = (uint8_t)(uVar11 >> 0x3b);
    *(uint32_t *)(param_2 + 0x8c0) = 0xbadde7b;
    if ((uVar5 >> bVar13 | uVar5 << 0x20 - bVar13) <
        ((*(uint32_t *)(param_2 + 0x818) ^ 0x58569664) + *(int *)(param_2 + 0x520)) * -0x52685157 +
        0xd6262da8) {
      *(uint32_t *)(param_2 + 0x8c0) = 0xa56f3100;
      bVar13 = (uint8_t)*(uint64_t *)(param_2 + 0x368) & 0x1f;
      uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x818);
      uVar11 = *(uint64_t *)
                ((int64_t)
                 (int)(((0xc0bf5eccU >> bVar13 | -0x3f40a134 << 0x20 - bVar13) + uVar5) *
                      -0x34727e93) + 0xf5ff55b4);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar11;
      uVar12 = SUB168(auVar1 * ZEXT816(0x2c99ad7c9c4064b7),8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar11;
      uVar11 = SUB168(auVar2 * ZEXT816(0x1479958),0);
      uVar5 = 0xd0e78b95U - *(int *)(param_2 + 0x4f8) ^ uVar5;
      uVar14 = 0;
      if ((uVar5 >> 1 != 0 || (uVar5 & 1) != 0) ||
          (SUB164(auVar2 * ZEXT816(0x1479958),8) + (uint32_t)CARRY8(uVar11,uVar12) & 1) != 0) {
        *(uint8_t (*) [16])(param_2 + 0x8c0) = (uint8_t  [16])0x0;
        *(uint32_t *)(param_2 + 0x1d0) = 0xc8247587;
        *(uint32_t *)(param_2 + 0x8c0) = 0;
        *(uint32_t *)(param_2 + 0x1d0) = 0x9d6f4908;
        *(uint32_t *)(param_2 + 0x1d0) = 0x19b9019c;
        uVar5 = ((uint32_t)CONCAT62((int6)(uVar11 + uVar12 >> 0x10),0xd6d3) ^ 0x18b9) -
                (int)*(uint64_t *)(param_2 + 0x4b8) ^ (uint32_t)*(uint64_t *)(param_2 + 0x818);
        uVar14 = (uint64_t)(uint16_t)uVar5;
        *(uint64_t *)(param_2 + 0x1d0) = (uint64_t)uVar5;
        syscall();
      }
    }
    bVar13 = (uint8_t)*(uint64_t *)(param_2 + 0x430) & 0x1f;
    uVar5 = (-0xf2fb6a1 << bVar13 | 0xf0d0495fU >> 0x20 - bVar13) * -0x3489c75b;
    bVar13 = (uint8_t)*(uint64_t *)(param_2 + 0x818) & 0x1f;
    *(uint64_t *)(param_2 + 0x8c0) = uVar14;
    uVar6 = *(uint32_t *)((uint64_t)(uVar5 >> bVar13 | uVar5 << 0x20 - bVar13) + 0x7fffa477f681);
  }
  syscall();
  *(uint64_t *)(param_2 + 0xe0) = *(uint64_t *)(param_2 + 0x1a0);
  return uVar6;
}

