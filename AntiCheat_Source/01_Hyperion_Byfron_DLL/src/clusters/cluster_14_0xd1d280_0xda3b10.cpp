// Subsystem: Internal Routines Cluster 14 (0xd1d280 .. 0xda3b10)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : Unwind@7fffa548d280  |  RVA: 0xd1d280  |  Size: 183 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa548d280(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x200) & 0x1f;
  if ((uint64_t)(0x380U >> bVar1 | 0x380 << 0x20 - bVar1) < *(uint64_t *)(param_2 + 0x168)) {
    uVar2 = (int)*(uint64_t *)(param_2 + 0x200) + 0xf7360b6d;
    uVar2 = uVar2 * 0x100 | uVar2 >> 0x18;
    (*(code *)(&UNK_7fffa56907c0 + (int)uVar2))
              (uVar2,&UNK_7fffa56907c0,
               *(uint64_t *)(param_2 + 0x150) >> 0x3d ^ *(uint64_t *)(param_2 + 0x150));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa548d338  |  RVA: 0xd1d338  |  Size: 274 bytes
// Callers  : FUN_7fffa52444e0@0xad44e0
// Callees  : FUN_7fffa5130600@0x9c0600, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa52d3bb0@0xb63bb0, FUN_7fffa5130724@0x9c0724, FUN_7fffa52d0cd4@0xb60cd4
// ============================================================================
int64_t * FUN_7fffa548d338(char *param_1)

{
  code *pcVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t lVar6;
  int64_t lVar7;
  char *pcVar8;
  int64_t *plVar9;
  
  cVar5 = *param_1;
  lVar6 = 0;
  pcVar8 = param_1;
  while (cVar5 != '\0') {
    lVar7 = lVar6 + 1;
    if (cVar5 == '=') {
      lVar7 = lVar6;
    }
    lVar6 = -1;
    do {
      lVar3 = lVar6;
      lVar6 = lVar3 + 1;
    } while (pcVar8[lVar6] != '\0');
    pcVar8 = pcVar8 + lVar3 + 2;
    lVar6 = lVar7;
    cVar5 = *pcVar8;
  }
  plVar4 = (int64_t *)FUN_7fffa5130600(lVar6 + 1,8);
  if (plVar4 == (int64_t *)0x0) {
LAB_7fffa548d39b:
    FUN_7fffa52d8dd0(0);
    plVar4 = (int64_t *)0x0;
  }
  else {
    plVar9 = plVar4;
    for (; *param_1 != '\0'; param_1 = param_1 + lVar7) {
      lVar6 = -1;
      do {
        lVar7 = lVar6;
        lVar6 = lVar7 + 1;
      } while (param_1[lVar6] != '\0');
      lVar7 = lVar7 + 2;
      if (*param_1 != '=') {
        lVar6 = FUN_7fffa5130600(lVar7,1);
        if (lVar6 == 0) {
          FUN_7fffa5130724(plVar4);
          FUN_7fffa52d8dd0(0);
          goto LAB_7fffa548d39b;
        }
        iVar2 = FUN_7fffa52d3bb0(lVar6,lVar7,param_1);
        if (iVar2 != 0) {
          FUN_7fffa52d0cd4(0,0,0,0,0);
          pcVar1 = (code *)__debugbreak();
          plVar4 = (int64_t *)(*pcVar1)();
          return plVar4;
        }
        *plVar9 = lVar6;
        plVar9 = plVar9 + 1;
        FUN_7fffa52d8dd0();
      }
    }
    FUN_7fffa52d8dd0(0);
  }
  return plVar4;
}


// ============================================================================
// Function : FUN_7fffa548d450  |  RVA: 0xd1d450  |  Size: 989 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa548d581) */
/* WARNING: Removing unreachable block (ram,0x7fffa548d638) */

void FUN_7fffa548d450(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  
  bRam00007fffa4784a6c = 0;
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0xe] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0xf] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x10] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x11] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x12] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x13] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x14] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x15] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x16] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x17] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x18] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x19] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x1a] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x1b] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x1c] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x1d] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x1e] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x1f] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x20] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x21] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x22] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x23] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x24] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x25] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x2f] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x30] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x31] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x32] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x33] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x34] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x35] = '\0';
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x36] = '\0';
  uVar1 = rdtsc();
  lVar9 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x201e1e1c06c52ec;
  lVar11 = 3;
  while( true ) {
    lVar9 = lVar9 * 0x201e1e1c06c52ec + 0x201e1e1c06c52ec;
    lVar10 = lVar9 * 0x201e1e1c06c52ec + 0x201e1e1c06c52ec;
    *(char *)(lVar11 + 0x7fffa4784a5a) = (char)((uint64_t)lVar10 >> 0x20);
    *(char *)(lVar11 + 0x7fffa4784a59) = (char)((uint64_t)lVar9 >> 0x20);
    if (lVar11 == 0x4b) break;
    lVar10 = lVar10 * 0x201e1e1c06c52ec + 0x201e1e1c06c52ec;
    lVar9 = lVar10 * 0x201e1e1c06c52ec + 0x201e1e1c06c52ec;
    *(char *)(lVar11 + 0x7fffa4784a5b) = (char)((uint64_t)lVar10 >> 0x20);
    *(char *)(lVar11 + 0x7fffa4784a5c) = (char)((uint64_t)lVar9 >> 0x20);
    lVar11 = lVar11 + 4;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa4784a6c * 0x55555556 + 0x55555556) * 3;
  uVar12 = uVar2 >> 0x20;
  cVar8 = s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x36];
  cVar6 = s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x33];
  cVar4 = s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x31];
  cVar3 = s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x30];
  cVar7 = s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x34];
  cVar5 = s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x32];
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[uVar12 * 8 + 0xe] =
       s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x2f] << 4 |
       (uint8_t)s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x2f] >> 4;
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[uVar12 * 8 + 0x15] = cVar8 << 4 | (uint8_t)cVar8 >> 4
  ;
  cVar8 = s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[0x35];
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[uVar12 * 8 + 0x11] = cVar5 << 4 | (uint8_t)cVar5 >> 4
  ;
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[uVar12 * 8 + 0x13] = cVar7 << 4 | (uint8_t)cVar7 >> 4
  ;
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[uVar12 * 8 + 0x12] = cVar6 << 4 | (uint8_t)cVar6 >> 4
  ;
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[uVar12 * 8 + 0x10] = cVar4 << 4 | (uint8_t)cVar4 >> 4
  ;
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[uVar12 * 8 + 0xf] = cVar3 << 4 | (uint8_t)cVar3 >> 4;
  s_ffffffffffffffffffffffffffffffff_7fffa4784a6d[uVar12 * 8 + 0x14] = cVar8 << 4 | (uint8_t)cVar8 >> 4
  ;
  bRam00007fffa4784a6c = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa548d830  |  RVA: 0xd1d830  |  Size: 592 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa548d97f) */
/* WARNING: Removing unreachable block (ram,0x7fffa548d9b1) */

void FUN_7fffa548d830(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa47bf660 = 0;
  uRam00007fffa47bf68d = 0;
  uRam00007fffa47bf695 = 0;
  uRam00007fffa47bf67d = 0;
  uRam00007fffa47bf685 = 0;
  uRam00007fffa47bf66d = 0;
  uRam00007fffa47bf675 = 0;
  uRam00007fffa47bf69d = 0;
  uRam00007fffa47bf6a9 = 0;
  uVar1 = rdtsc();
  lVar3 = (uVar1 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar1)) * 0x35738838144c74c;
  lVar2 = 3;
  while( true ) {
    lVar4 = lVar3 * 0x35738838144c74c + 0x35738838144c74c;
    lVar5 = lVar4 * 0x35738838144c74c + 0x35738838144c74c;
    lVar3 = lVar5 * 0x35738838144c74c + 0x35738838144c74c;
    *(char *)(lVar2 + 0x7fffa47bf64e) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bf64f) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bf64d) = (char)((uint64_t)lVar4 >> 0x20);
    if (lVar2 == 99) break;
    lVar2 = lVar2 + 3;
  }
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa47bf660 * 0x24924925 + 0x24924925) * 7;
  *(uint64_t *)((uVar1 >> 0x20) * 8 + 0x7fffa47bf66d) = 0;
  bRam00007fffa47bf660 = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa548da80  |  RVA: 0xd1da80  |  Size: 69 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa548da80(void)

{
  int *piVar1;
  uint32_t uVar2;
  uint64_t in_R9;
  int64_t lVar3;
  
  lVar3 = (in_R9 ^ 0xb017cc5d) * 0xd2b5d277ff07fe1;
  piVar1 = (int *)(lVar3 + -0x23493be1be2a568e);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    LOCK();
    uVar2 = *(uint32_t *)(lVar3 + -0x23493be1be2a5692);
    *(uint32_t *)(lVar3 + -0x23493be1be2a5692) = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(lVar3 + -0x23493be1be2a568a,uVar2);
    return;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa548dad0  |  RVA: 0xd1dad0  |  Size: 1172 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa548dad0(uint64_t *param_1,uint64_t *param_2,uint32_t param_3)

{
  char *pcVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t bVar6;
  uint8_t bVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint8_t auVar10 [16];
  uint64_t in_RAX;
  uint64_t uVar11;
  uint8_t bVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int iVar15;
  uint64_t uVar16;
  int64_t lVar17;
  uint8_t *puVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int64_t in_R10;
  int64_t lVar21;
  int64_t lVar22;
  uint64_t uVar23;
  float fVar24;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint8_t *puStack_70;
  int64_t lStack_68;
  uint32_t uStack_5c;
  uint64_t uStack_58;
  uint8_t *puStack_50;
  uint64_t uStack_48;
  
  bVar7 = (uint8_t)param_3 & 0x3f;
  uVar19 = (in_RAX << 0x32 | in_RAX >> 0xe) ^ (in_RAX << 0x35 | in_RAX >> 0xb) ^ in_RAX;
  uVar19 = (uVar19 << 0x2a | uVar19 >> 0x16) ^ (uVar19 << 0x24 | uVar19 >> 0x1c) ^ uVar19;
  uVar19 = (uVar19 << 0x14 | uVar19 >> 0x2c) ^ (uVar19 << 8 | uVar19 >> 0x38) ^ uVar19;
  uVar19 = (uVar19 << 0x28 | uVar19 >> 0x18) ^ (uVar19 << 0x10 | uVar19 >> 0x30) ^ uVar19;
  uVar19 = (uVar19 << 0x20 | uVar19 >> 0x20) ^ (uVar19 << 0x10 | uVar19 >> 0x30) ^ uVar19;
  uVar23 = uVar19 << 0x20 | uVar19 >> 0x20;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(uint64_t *)(uVar23 + 0x28);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(uint64_t *)(uVar23 + 0x28);
  auVar10._8_8_ = 1;
  auVar10._0_8_ = 0x4325c53ef368eb0;
  lStack_68 = 0;
  uVar16 = ~(0xfefbffffffffffffU >> bVar7 | -0x104000000000001 << 0x40 - bVar7) *
           (in_R10 - (uint64_t)((param_3 + 0xc57eb108) * 0x10 | param_3 + 0xc57eb108 >> 0x1c));
  fVar24 = (float)FUN_7fffa5102fa0((float)(SUB168(auVar3 * auVar10,8) +
                                           (uint64_t)
                                           CARRY8(SUB168(auVar3 * ZEXT816(0x4325c53ef368eb0),0),
                                                  SUB168(auVar2 * ZEXT816(0x4325c53ef368eb05),8)) +
                                          1) / 0.875);
  uVar20 = (int64_t)(fVar24 - 9.223372e+18) & (int64_t)fVar24 >> 0x3f | (int64_t)fVar24;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar20;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar20;
  uVar14 = SUB168(auVar5 * ZEXT816(0x1111111111111111),8) +
           (uint64_t)
           CARRY8(SUB168(auVar5 * ZEXT816(0x1111111111111111),0),
                  SUB168(auVar4 * ZEXT816(0x1111111111111112),8));
  uVar11 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> uVar11 == 0; uVar11 = uVar11 - 1) {
    }
  }
  uStack_80 = 0x3f;
  if (0x1d < uVar20) {
    uStack_80 = uVar11 ^ 0x3f;
  }
  bVar7 = (uint8_t)uStack_80;
  lVar22 = 1L << (-bVar7 & 0x3f);
  uStack_78 = lVar22 - 1;
  uStack_48 = CONCAT44(uStack_48._4_4_,param_3) | 1;
  if (uVar20 == 0) {
    lVar21 = 0;
    puVar18 = &UNK_7fffa56ee720;
  }
  else {
    bVar12 = 0x40 - bVar7;
    lVar17 = 0x78L << (bVar12 & 0x3f);
    uVar11 = (uint64_t)param_3;
    bVar6 = (uint8_t)param_3 & 0x1f;
    (*(code *)((int64_t)(int)(0xc9ffff5cU >> bVar6 | -0x360000a4 << 0x20 - bVar6) + 0x7fffa5274de7)
    )(uVar11,uVar14,~((param_3 | 1) * 0x74b717b9),
      ((0x88L << (bVar12 & 0x3f)) + 0xeU & 0xfffffffffffffff8) << 0xe);
    lVar21 = (uVar11 << 0x2c | uVar11 >> 0x14) - ((uVar11 >> 0x14) << 0x36);
    puVar18 = (uint8_t *)
              ((uint64_t)(-((int)lVar21 + (int)lVar17 + -8) & 0xf) + lVar21 + lVar17 + -8);
    lStack_68 = lVar21;
    FUN_7fffa4ecf8e0(puVar18,0,0x10L << (bVar12 & 0x3f));
    puVar18[lVar22 * 0x10 + -2] = 1;
  }
  uVar11 = uVar16 >> (bVar7 & 0x3f);
  param_2[2] = 0;
  *param_2 = 0;
  *(uint32_t *)(param_2 + 1) = 0;
  puStack_50 = puVar18 + uVar11 * 0x10;
  pcVar1 = puVar18 + uVar11 * 0x10;
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
  uStack_5c = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar25 >> 7,0) & 1) |
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
  if (uStack_5c == 0) {
    lVar22 = 1;
    do {
      puStack_50[0xf] = puStack_50[0xf] | '\x01' << ((uint8_t)uVar16 & 7);
      uVar11 = uVar11 + lVar22 & uStack_78;
      puStack_50 = puVar18 + uVar11 * 0x10;
      pcVar1 = puVar18 + uVar11 * 0x10;
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
      uStack_5c = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar26 >> 7,0) & 1) |
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
      lVar22 = lVar22 + 1;
    } while (uStack_5c == 0);
    lVar21 = lStack_68;
  }
  else {
  }
  lVar21 = uVar11 * 0x78 + lVar21;
  iVar15 = (int)uStack_48 * 0x7dfd324a;
  uVar11 = 0;
  uStack_58 = uVar16 & 0xff;
  uVar8 = 0;
  for (uVar9 = uStack_5c; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
    uVar8 = uVar8 + 1;
  }
  uVar14 = (uint64_t)uVar8;
  puStack_70 = puVar18;
  uStack_48 = uVar23;
  (*(code *)((int64_t)(iVar15 + -0x3e31bb4) + 0x7fffa527506a))(0,&IMAGE_DOS_HEADER_7fffa4770000);
  puVar13 = (uint64_t *)((uVar11 << 0x2c | uVar11 >> 0x14) - ((uVar11 >> 0x14) << 0x36));
  *(uint64_t **)(lVar21 + uVar14 * 8) = puVar13;
  *puVar13 = *param_1;
  puStack_50[uVar14] = (&UNK_7fffa5830f20)[uStack_58 * 4];
  *param_2 = puStack_50;
  *(uint32_t *)(param_2 + 1) = uVar8;
  param_2[2] = lVar21 + uVar14 * 8;
  (*(code *)((int64_t)(int)~(param_3 + 0x597f5b15) + 0x7fffa55d1f5e))
            (puVar13,param_3 + 0x3f6b5160,
             ((uVar19 >> 0x20) << 0x3b | uVar23 >> 5) ^
             (uVar23 << 0x17 | (uVar19 & 0xffffffff) >> 9) ^ uVar23,&uStack_80);
  *(int64_t *)(uStack_48 + 0x28) = *(int64_t *)(uStack_48 + 0x28) + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa548df70  |  RVA: 0xd1df70  |  Size: 1124 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa548df70(uint64_t param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4,
                     uint32_t param_5)

{
  uint32_t uVar1;
  int iVar2;
  uint8_t in_AL;
  char cVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t in_R10;
  uint32_t uVar6;
  uint64_t in_R11;
  uint64_t uVar7;
  uint64_t uVar8;
  uint32_t uVar9;
  uint8_t bVar10;
  uint8_t bVar11;
  char cVar12;
  bool bVar13;
  
  cVar3 = (char)(param_2 * 8);
  uVar4 = 0xffffffffffffffff >> (-cVar3 & 0x3fU);
  uVar9 = (param_5 | 1) * -0xda0cd80;
  bVar10 = in_AL * '\x04' ^ in_AL;
  uVar7 = in_R11 & uVar4;
  bVar10 = bVar10 << 4 ^ bVar10;
  if ((uint8_t)(bVar10 + 0x6f) < 3 && uVar7 == 0) {
    return;
  }
  param_4 = param_4 & uVar4;
  param_1 = (param_1 << 0x25 | param_1 >> 0x1b) ^ (param_1 << 0x28 | param_1 >> 0x18) ^ param_1;
  param_1 = (param_1 << 10 | param_1 >> 0x36) ^ (param_1 << 0x10 | param_1 >> 0x30) ^ param_1;
  param_1 = (param_1 << 0x14 | param_1 >> 0x2c) ^ (param_1 << 0x20 | param_1 >> 0x20) ^ param_1;
  uVar5 = param_1 << 0x18 | param_1 >> 0x28;
  cVar12 = bVar10 + 0x70;
  uVar4 = uVar4 & uVar5;
  uVar6 = param_2 * 8 - 1;
  uVar8 = (uint64_t)uVar6;
  uVar1 = (uint32_t)((uVar4 >> (uVar8 & 0x3f) & 1) != 0);
  bVar11 = (((uint8_t)param_5 ^ 0x65) - (char)uVar9) + 0x95;
  uVar5 = ((uint64_t)((uint32_t)(uVar4 == (uVar9 + 0x2259c816 ^ param_5)) << 6 | uVar1 << 7) |
          *(uint64_t *)(in_R10 + 0x268) & 0xffffffffffffff3b) +
          (uint64_t)
          ((uint32_t)(uint8_t)(&UNK_7fffa586871c)
                       [(uint64_t)((uint32_t)(uVar4 >> 4) & 0xf) +
                        (int64_t)
                        (int)(((uVar9 ^ 0xffa92081) << 10 | (uVar9 ^ 0xffa92081) >> 0x16) + param_5)
                       ] +
           (uint32_t)(uint8_t)(&UNK_7fffa58671ce)
                       [(uint64_t)((uint32_t)uVar5 & 0xf) + (int64_t)(int)~(0x5e5be3a3 - param_5)] & 1
          ) * 4 ^ 4;
  iVar2 = (int)uVar7;
  if (cVar12 < (char)(bVar11 * '@' | bVar11 >> 2)) {
    if (cVar12 < '\x01') {
      if (bVar10 == 0x90) {
        uVar5 = uVar5 & 0xfffffffffffff7fe;
        goto LAB_7fffa548e3ad;
      }
LAB_7fffa548e2e0:
      if ((uVar4 < param_4) || (uVar4 == param_4 && uVar7 != 0)) {
        uVar5 = uVar5 | 1;
      }
      else {
        uVar5 = uVar5 & 0xfffffffffffffffe;
      }
      bVar13 = (param_4 >> (uVar8 & 0x3f) & 1) != 0;
      if ((bVar13 != uVar1) && (bVar13 == ((uVar7 >> (uVar8 & 0x3f) & 1) != 0)))
      goto LAB_7fffa548e365;
    }
    else {
      uVar4 = (uint64_t)param_2 * 8;
      if ((uVar4 < uVar7) || ((param_4 >> ((uint64_t)(uint32_t)((int)uVar4 - iVar2) & 0x3f) & 1) == 0))
      {
        uVar5 = uVar5 & 0xfffffffffffffffe;
      }
      else {
        uVar5 = uVar5 | 1;
      }
      *(uint64_t *)(in_R10 + 0x268) = uVar5;
      if (uVar7 != 1) {
        return;
      }
      if ((((uint32_t)(param_4 >> ((char)uVar4 - 2U & 0x3f)) ^ (uint32_t)(param_4 >> uVar4 - 1)) & 1) != 0)
      goto LAB_7fffa548e365;
    }
  }
  else if (cVar12 < '\x03') {
    uVar5 = uVar5 & 0xfffffffffffffffe |
            (uint64_t)((param_4 >> ((uint64_t)(iVar2 - 1U & 0xff) & 0x3f) & 1) != 0);
    *(uint64_t *)(in_R10 + 0x268) = uVar5;
    if (uVar7 != 1) {
      return;
    }
    if ((param_4 >> ((uint64_t)(uint8_t)(cVar3 - 1) & 0x3f) & 1) != 0) {
      uVar5 = uVar5 | 0x800;
      goto LAB_7fffa548e3ad;
    }
  }
  else if (cVar12 == '\x03') {
    if (((param_4 >> ((uint64_t)(iVar2 - 1) & 0x3f) & 1) == 0) &&
       ((uVar7 < (uint64_t)param_2 << 3 || (uVar4 == 0)))) {
      uVar5 = uVar5 & 0xfffffffffffffffe;
    }
    else {
      uVar5 = uVar5 | 1;
    }
  }
  else {
    bVar13 = cVar12 == '\x04';
    if ((param_5 | 1) * 0x622ae18a != -0x67accd9a) {
      bVar13 = cVar12 < '\x05';
    }
    if (!bVar13) goto LAB_7fffa548e2e0;
    if ((param_4 < uVar7) || ((param_4 == uVar7 && (uVar4 != 0)))) {
      uVar5 = uVar5 | 1;
    }
    else {
      uVar5 = uVar5 & 0xfffffffffffffffe;
    }
    uVar4 = 1L << ((uint8_t)uVar6 & 0x3f);
    uVar7 = uVar7 & uVar4;
    if ((uVar4 & param_4) == 0) {
      if ((uVar1 != 0) && (uVar7 != 0)) goto LAB_7fffa548e365;
    }
    else if (uVar7 == 0 && uVar1 == 0) {
LAB_7fffa548e365:
      uVar5 = uVar5 | 0x800;
      goto LAB_7fffa548e3ad;
    }
  }
  uVar5 = uVar5 & 0xfffffffffffff7ff;
LAB_7fffa548e3ad:
  *(uint64_t *)(in_R10 + 0x268) = uVar5;
  return;
}


// ============================================================================
// Function : FUN_7fffa548e3e0  |  RVA: 0xd1e3e0  |  Size: 186 bytes
// Callers  : FUN_7fffa47de330@0x6e330
// Callees  : FUN_7fffa569fb70@0xf2fb70, FUN_7fffa54539d0@0xce39d0, FUN_7fffa5687a80@0xf17a80
// ============================================================================
void FUN_7fffa548e3e0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uStackX_8;
  uint64_t in_stack_ffffffffffffffa8;
  uint8_t auStack_38 [4];
  uint64_t uStack_34;
  uint64_t uStack_2c;
  uint32_t uStack_24;
  
  uVar1 = *(uint64_t *)(param_4 + 8);
  uStack_34 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  auStack_38[0] = 0;
  uStackX_8 = param_2;
  lVar2 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(uint64_t *)(param_1 + 0x38);
  lVar2 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_7fffa54539d0();
  FUN_7fffa5687a80((uint64_t)**(uint32_t **)(param_4 + 0x38) + *(int64_t *)(lVar2 + 0x60),auStack_38,
                   *(uint64_t *)(param_4 + 8),**(uint32_t **)(param_4 + 0x10),
                   in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
  FUN_7fffa569fb70(param_1,&uStackX_8,param_3,param_4,auStack_38,0,0,0);
  return;
}


// ============================================================================
// Function : FUN_7fffa548e49c  |  RVA: 0xd1e49c  |  Size: 1 bytes
// Callers  : FUN_7fffa4a91118@0x321118, FUN_7fffa517c9b4@0xa0c9b4, FUN_7fffa507aca4@0x90aca4
// Callees  : none
// ============================================================================
void FUN_7fffa548e49c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa548e4d0  |  RVA: 0xd1e4d0  |  Size: 2993 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa548e4d0(void) {
    /* +0xd1e4d0 */ __asm { PUSH RDI }
    /* +0xd1e4d1 */ __asm { PUSH RBP }
    /* +0xd1e4d2 */ __asm { PUSH RBX }
    /* +0xd1e4d3 */ __asm { PUSH R14 }
    /* +0xd1e4d5 */ __asm { PUSH R13 }
    /* +0xd1e4d7 */ __asm { PUSH RSI }
    /* +0xd1e4d8 */ __asm { PUSH R12 }
    /* +0xd1e4da */ __asm { PUSH R15 }
    /* +0xd1e4dc */ __asm { SUB RSP,0x48 }
    /* +0xd1e4e0 */ __asm { MOV R14,R9 }
    /* +0xd1e4e3 */ __asm { MOV R11D,0x272e5312 }
    /* +0xd1e4e9 */ __asm { MOV EAX,0x9745baca }
    /* +0xd1e4ee */ __asm { ADD RAX,R8 }
    /* +0xd1e4f1 */ __asm { ROL RAX,0x6 }
    /* +0xd1e4f5 */ __asm { MOV R8,RAX }
    /* +0xd1e4f8 */ __asm { SHR R8,0x2d }
    /* +0xd1e4fc */ __asm { XOR R8,RAX }
    /* +0xd1e4ff */ __asm { MOV R13W,0xec91 }
    /* +0xd1e504 */ __asm { ADD R13D,0x13ef }
    /* +0xd1e50b */ __asm { RDTSC }
    /* +0xd1e50d */ __asm { SHL RDX,0x20 }
    /* +0xd1e511 */ __asm { OR RDX,RAX }
    /* +0xd1e514 */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0xd1e51e */ __asm { IMUL RAX,RDX }
    /* +0xd1e522 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xd1e52c */ __asm { ADD R9,RAX }
    /* +0xd1e52f */ __asm { MOVQ R15,XMM2 }
    /* +0xd1e534 */ __asm { XOR R15,-0x226cc221 }
    /* +0xd1e53b */ __asm { MOV R12,R15 }
    /* +0xd1e53e */ __asm { ROL R12,0x34 }
    /* +0xd1e542 */ __asm { XOR R12,R15 }
    /* +0xd1e545 */ __asm { ROL R15,0xd }
    /* +0xd1e549 */ __asm { MOV R10,R9 }
    /* +0xd1e54c */ __asm { SHR R10,0x3b }
    /* +0xd1e550 */ __asm { MOV RDX,R9 }
    /* +0xd1e553 */ __asm { SHR RDX,0x2d }
    /* +0xd1e557 */ __asm { MOV RBP,R12 }
    /* +0xd1e55a */ __asm { OR RBP,R15 }
    /* +0xd1e55d */ __asm { MOV ECX,0x664e86dc }
    /* +0xd1e562 */ __asm { MOV EBX,0x1ecb0aa9 }
    /* +0xd1e567 */ __asm { SUB EBX,ECX }
    /* +0xd1e569 */ __asm { MOV ECX,R14D }
    /* +0xd1e56c */ __asm { ROL R13W,CL }
    /* +0xd1e570 */ __asm { MOVZX EAX,R13W }
    /* +0xd1e574 */ __asm { XOR R11D,R14D }
    /* +0xd1e577 */ __asm { MOV ECX,0x3298502d }
    /* +0xd1e57c */ __asm { XOR ECX,R14D }
    /* +0xd1e57f */ __asm { MOV R13D,0x19b09872 }
    /* +0xd1e585 */ __asm { SUB R13D,ECX }
    /* +0xd1e588 */ __asm { MOVSXD RDI,R13D }
    /* +0xd1e58b */ __asm { MOVSXD R13,EBX }
    /* +0xd1e58e */ __asm { MOV ESI,0x9372265a }
    /* +0xd1e593 */ __asm { XOR ESI,0xf43e9480 }
    /* +0xd1e599 */ __asm { ADD ESI,0x6dbec912 }
    /* +0xd1e59f */ __asm { MOV ECX,R14D }
    /* +0xd1e5a2 */ __asm { ROR ESI,CL }
    /* +0xd1e5a4 */ __asm { XOR R12,R15 }
    /* +0xd1e5a7 */ __asm { CMP RDI,RSI }
    /* +0xd1e5aa */ __asm { CMOVG R12,RBP }
    /* +0xd1e5ae */ __asm { MOV RCX,R12 }
    /* +0xd1e5b1 */ __asm { ROL RCX,0x28 }
    /* +0xd1e5b5 */ __asm { XOR RCX,R12 }
    /* +0xd1e5b8 */ __asm { ROL R12,0x1a }
    /* +0xd1e5bc */ __asm { MOV R15,R12 }
    /* +0xd1e5bf */ __asm { XOR R15,RCX }
    /* +0xd1e5c2 */ __asm { IMUL R12,RCX }
    /* +0xd1e5c6 */ __asm { CMP R13,-0x47837c33 }
    /* +0xd1e5cd */ __asm { CMOVZ R12,R15 }
    /* +0xd1e5d1 */ __asm { NOT R11D }
    /* +0xd1e5d4 */ __asm { MOV RCX,R12 }
    /* +0xd1e5d7 */ __asm { ROL RCX,0x10 }
    /* +0xd1e5db */ __asm { MOV R13,R12 }
    /* +0xd1e5de */ __asm { ROL R13,0x34 }
    /* +0xd1e5e2 */ __asm { XOR R13,RCX }
    /* +0xd1e5e5 */ __asm { XOR R13,R12 }
    /* +0xd1e5e8 */ __asm { MOV RCX,R13 }
    /* +0xd1e5eb */ __asm { ROL RCX,0x20 }
    /* +0xd1e5ef */ __asm { MOVSXD R11,R11D }
    /* +0xd1e5f2 */ __asm { MOV R15,R13 }
    /* +0xd1e5f5 */ __asm { ROL R15,0x28 }
    /* +0xd1e5f9 */ __asm { XOR R15,RCX }
    /* +0xd1e5fc */ __asm { XOR R15,R13 }
    /* +0xd1e5ff */ __asm { ROL R15,0x30 }
    /* +0xd1e603 */ __asm { MOV R12,R15 }
    /* +0xd1e606 */ __asm { SHR R12,0x30 }
    /* +0xd1e60a */ __asm { XOR R12,R15 }
    /* +0xd1e60d */ __asm { SHR R15,0x18 }
    /* +0xd1e611 */ __asm { XOR R15,R11 }
    /* +0xd1e614 */ __asm { SHR R9,0x1b }
    /* +0xd1e618 */ __asm { XOR R9D,EDX }
    /* +0xd1e61b */ __asm { MOV ECX,R10D }
    /* +0xd1e61e */ __asm { ROR R9D,CL }
    /* +0xd1e621 */ __asm { XOR R12,R15 }
    /* +0xd1e624 */ __asm { AND R9D,0x3 }
    /* +0xd1e628 */ __asm { CMP R9D,EAX }
    /* +0xd1e62b */ __asm { JNC 0x7fffa548e89e }
    /* +0xd1e631 */ __asm { MOV AX,0x35b0 }
    /* +0xd1e635 */ __asm { ADD EAX,0xffffce50 }
    /* +0xd1e63a */ __asm { MOV ECX,R14D }
    /* +0xd1e63d */ __asm { ROR AX,CL }
    /* +0xd1e640 */ __asm { MOVZX ECX,AX }
    /* +0xd1e643 */ __asm { CMP R9D,ECX }
    /* +0xd1e646 */ __asm { JZ 0x7fffa548eae5 }
    /* +0xd1e64c */ __asm { MOV R10D,0x2f08ad42 }
    /* +0xd1e652 */ __asm { MOV R11,R10 }
    /* +0xd1e655 */ __asm { ADD R11,0x6b849122 }
    /* +0xd1e65c */ __asm { MOV RAX,0x5bfc1891e4eef128 }
    /* +0xd1e666 */ __asm { CMP R11,RAX }
    /* +0xd1e669 */ __asm { JZ 0x7fffa548f046 }
    /* +0xd1e66f */ __asm { NOP }
    /* +0xd1e670 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xd1e677 */ __asm { MOV R11,0x0 }
    /* +0xd1e67e */ __asm { MOV R10D,dword ptr [R10 + 0x50f55582] }
    /* +0xd1e685 */ __asm { MOV RAX,0x5555555555555556 }
    /* +0xd1e68f */ __asm { IMUL RAX,R10 }
    /* +0xd1e693 */ __asm { MOV R9,0x5555555555555555 }
    /* +0xd1e69d */ __asm { CMP RAX,R9 }
    /* +0xd1e6a0 */ __asm { JBE 0x7fffa548ef9f }
    /* +0xd1e6a6 */ __asm { RDTSC }
    /* +0xd1e6a8 */ __asm { SHL RDX,0x20 }
    /* +0xd1e6ac */ __asm { OR RDX,RAX }
    /* +0xd1e6af */ __asm { MOV RAX,-0x2ecbdabc217d106b }
    /* +0xd1e6b9 */ __asm { IMUL RAX,RDX }
    /* +0xd1e6bd */ __asm { MOV R10,0x506eea237796bc86 }
    /* +0xd1e6c7 */ __asm { ADD R10,RAX }
    /* +0xd1e6ca */ __asm { MOV RDX,R10 }
    /* +0xd1e6cd */ __asm { SHR RDX,0x2d }
    /* +0xd1e6d1 */ __asm { MOV RCX,R10 }
    /* +0xd1e6d4 */ __asm { SHR RCX,0x3b }
    /* +0xd1e6d8 */ __asm { SHR R10,0x1b }
    /* +0xd1e6dc */ __asm { XOR R10D,EDX }
    /* +0xd1e6df */ __asm { ROR R10D,CL }
    /* +0xd1e6e2 */ __asm { CMP R10D,0x43a9abd }
    /* +0xd1e6e9 */ __asm { JA 0x7fffa548e845 }
    /* +0xd1e6ef */ __asm { MOV dword ptr [RSP + 0x30],0x5662e6be }
    /* +0xd1e6f7 */ __asm { MOV ECX,dword ptr [RSP + 0x30] }
    /* +0xd1e6fb */ __asm { TEST CL,0x1 }
    /* +0xd1e6fe */ __asm { NOP }
    /* +0xd1e6ff */ __asm { NOP }
    /* +0xd1e700 */ __asm { NOP }
    /* +0xd1e701 */ __asm { NOP }
    /* +0xd1e702 */ __asm { NOP }
    /* +0xd1e703 */ __asm { XORPS XMM1,XMM1 }
    /* +0xd1e706 */ __asm { MOVAPS xmmword ptr [RSP + 0x30],XMM1 }
    /* +0xd1e70b */ __asm { MOV CX,0xcf5a }
    /* +0xd1e70f */ __asm { MOV R9D,R14D }
    /* +0xd1e712 */ __asm { XOR R9D,ECX }
    /* +0xd1e715 */ __asm { IMUL ECX,R9D,-0x7fbf }
    /* +0xd1e71c */ __asm { MOVZX R10D,CX }
    /* +0xd1e720 */ __asm { MOV RAX,qword ptr GS:[R10] }
    /* +0xd1e724 */ __asm { MOV R10D,0xca39b37d }
    /* +0xd1e72a */ __asm { XOR R10D,R14D }
    /* +0xd1e72d */ __asm { XOR R10D,0xf92b9a01 }
    /* +0xd1e734 */ __asm { MOV RAX,qword ptr [RAX + 0x30] }
    /* +0xd1e738 */ __asm { MOV R11,0x6bcdbb5aca1c0ec9 }
    /* +0xd1e742 */ __asm { XOR R11,RAX }
    /* +0xd1e745 */ __asm { NOT R11 }
    /* +0xd1e748 */ __asm { ADD R11,R10 }
    /* +0xd1e74b */ __asm { MOV RAX,-0x27160201bc1872a2 }
    /* +0xd1e755 */ __asm { CMP R11,RAX }
    /* +0xd1e758 */ __asm { NOP }
    /* +0xd1e759 */ __asm { NOP }
    /* +0xd1e75a */ __asm { NOP }
    /* +0xd1e75b */ __asm { NOP }
    /* +0xd1e75c */ __asm { NOP }
    /* +0xd1e75d */ __asm { MOV R10,0x0 }
    /* +0xd1e764 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xd1e76b */ __asm { NOP }
    /* +0xd1e76d */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0xd1e775 */ __asm { MOV ECX,0x8bee8b47 }
    /* +0xd1e77a */ __asm { MOV R9D,0xa60d21b4 }
    /* +0xd1e780 */ __asm { SUB R9D,ECX }
    /* +0xd1e783 */ __asm { IMUL ECX,R9D,-0x30d784e9 }
    /* +0xd1e78a */ __asm { MOV dword ptr [RSP + 0x40],ECX }
    /* +0xd1e78e */ __asm { MOV ECX,dword ptr [RSP + 0x40] }
    /* +0xd1e792 */ __asm { MOV dword ptr [RSP + 0x40],0xc0106324 }
    /* +0xd1e79a */ __asm { MOV ECX,dword ptr [RSP + 0x40] }
    /* +0xd1e79e */ __asm { TEST CL,0x1 }
    /* +0xd1e7a1 */ __asm { JNZ 0x7fffa548f0b5 }
    /* +0xd1e7a7 */ __asm { MOV R13,R8 }
    /* +0xd1e7aa */ __asm { LEA R10,[0x7fffa4787015] }
    /* +0xd1e7b1 */ __asm { MOV RDX,R14 }
    /* +0xd1e7b4 */ __asm { OR RDX,0x1 }
    /* +0xd1e7b8 */ __asm { MOV R8,0x180e65a1f056a027 }
    /* +0xd1e7c2 */ __asm { IMUL R8,RDX }
    /* +0xd1e7c6 */ __asm { ROL R8,0x13 }
    /* +0xd1e7ca */ __asm { ADD R8,-0x39d6cc58 }
    /* +0xd1e7d1 */ __asm { CMP R10,R8 }
    /* +0xd1e7d4 */ __asm { JZ 0x7fffa548f0c1 }
    /* +0xd1e7da */ __asm { MOV DX,0x1cce }
    /* +0xd1e7de */ __asm { MOVD XMM1,R14D }
    /* +0xd1e7e3 */ __asm { MOV R8W,0xf535 }
    /* +0xd1e7e8 */ __asm { MOV qword ptr [RSP + 0x40],R11 }
    /* +0xd1e7ed */ __asm { MOV EAX,dword ptr [R10 + -0x29f9] }
    /* +0xd1e7f4 */ __asm { XOR EDX,0x3bf7 }
    /* +0xd1e7fa */ __asm { SUB EDX,R14D }
    /* +0xd1e7fd */ __asm { MOV ECX,R14D }
    /* +0xd1e800 */ __asm { OR ECX,0x1 }
    /* +0xd1e803 */ __asm { MOVSX R10,DX }
    /* +0xd1e807 */ __asm { XOR R8D,0xfffff8cd }
    /* +0xd1e80e */ __asm { IMUL R8D,ECX }
    /* +0xd1e812 */ __asm { MOVZX EDX,R8W }
    /* +0xd1e816 */ __asm { MOV R8W,0x2d5d }
    /* +0xd1e81b */ __asm { IMUL R8D,R8D,0x77ef }
    /* +0xd1e822 */ __asm { MOVD XMM5,R8D }
    /* +0xd1e827 */ __asm { PSUBW XMM5,XMM1 }
    /* +0xd1e82b */ __asm { MOVD R8D,XMM5 }
    /* +0xd1e830 */ __asm { ADD R8D,0xffff9277 }
    /* +0xd1e837 */ __asm { MOVZX R9D,R8W }
    /* +0xd1e83b */ __asm { LEA R8,[RSP + 0x30] }
    /* +0xd1e840 */ __asm { SYSCALL }
    /* +0xd1e842 */ __asm { MOV R8,R13 }
    /* +0xd1e845 */ __asm { LEA R11,[0x7fffa4789bef] }
    /* +0xd1e84c */ __asm { MOV RAX,0x6af0f02068bdcefa }
    /* +0xd1e856 */ __asm { CMP R11,RAX }
    /* +0xd1e859 */ __asm { JZ 0x7fffa548f05d }
    /* +0xd1e85f */ __asm { MOV ECX,R14D }
    /* +0xd1e862 */ __asm { OR ECX,0x1 }
    /* +0xd1e865 */ __asm { MOV R9W,0xf093 }
    /* +0xd1e86a */ __asm { ADD R9D,0x2960 }
    /* +0xd1e871 */ __asm { IMUL R9D,ECX }
    /* +0xd1e875 */ __asm { MOV ECX,0x75e512a0 }
    /* +0xd1e87a */ __asm { MOV EAX,0x75e5129f }
    /* +0xd1e87f */ __asm { SUB EAX,ECX }
    /* +0xd1e881 */ __asm { MOV ECX,R14D }
    /* +0xd1e884 */ __asm { ROL EAX,CL }
    /* +0xd1e886 */ __asm { MOVSXD R10,EAX }
    /* +0xd1e889 */ __asm { MOVZX R9D,R9W }
    /* +0xd1e88d */ __asm { MOV qword ptr [RSP + 0x30],RAX }
    /* +0xd1e892 */ __asm { MOV EAX,dword ptr [R11 + -0x55f3] }
    /* +0xd1e899 */ __asm { JMP 0x7fffa548f030 }
    /* +0xd1e89e */ __asm { RDTSC }
    /* +0xd1e8a0 */ __asm { SHL RDX,0x20 }
    /* +0xd1e8a4 */ __asm { OR RDX,RAX }
    /* +0xd1e8a7 */ __asm { MOV CX,0xd8f6 }
    /* +0xd1e8ab */ __asm { ADD ECX,R14D }
    /* +0xd1e8ae */ __asm { ROL CX,0xc }
    /* +0xd1e8b2 */ __asm { MOVZX ECX,CX }
    /* +0xd1e8b5 */ __asm { MOV RAX,-0x583f2dd720db9bdb }
    /* +0xd1e8bf */ __asm { IMUL RDX,RAX }
    /* +0xd1e8c3 */ __asm { CMP R9D,ECX }
    /* +0xd1e8c6 */ __asm { JNC 0x7fffa548ed9d }
    /* +0xd1e8cc */ __asm { MOV R10,-0x49eea9cea989128a }
    /* +0xd1e8d6 */ __asm { ADD R10,RDX }
    /* +0xd1e8d9 */ __asm { MOV RDX,R10 }
    /* +0xd1e8dc */ __asm { SHR RDX,0x1b }
    /* +0xd1e8e0 */ __asm { MOV RCX,R10 }
    /* +0xd1e8e3 */ __asm { SHR RCX,0x3b }
    /* +0xd1e8e7 */ __asm { SHR R10,0x2d }
    /* +0xd1e8eb */ __asm { XOR EDX,R10D }
    /* +0xd1e8ee */ __asm { ROR EDX,CL }
    /* +0xd1e8f0 */ __asm { MOV dword ptr [RSP + 0x30],0x69c4cf76 }
    /* +0xd1e8f8 */ __asm { MOV ECX,dword ptr [RSP + 0x30] }
    /* +0xd1e8fc */ __asm { CMP EDX,0x44038e }
    /* +0xd1e902 */ __asm { JA 0x7fffa548ea82 }
    /* +0xd1e908 */ __asm { MOV R11,qword ptr [RSP + 0x88] }
    /* +0xd1e910 */ __asm { MOV RAX,0x12f63c701d5ded1d }
    /* +0xd1e91a */ __asm { CMP R11,RAX }
    /* +0xd1e91d */ __asm { NOP }
    /* +0xd1e91e */ __asm { NOP }
    /* +0xd1e91f */ __asm { NOP }
    /* +0xd1e920 */ __asm { NOP }
    /* +0xd1e921 */ __asm { NOP }
    /* +0xd1e922 */ __asm { NOP }
    /* +0xd1e923 */ __asm { NOP }
    /* +0xd1e924 */ __asm { NOP }
    /* +0xd1e925 */ __asm { NOP }
    /* +0xd1e926 */ __asm { NOP }
    /* +0xd1e927 */ __asm { PXOR XMM1,XMM1 }
    /* +0xd1e92b */ __asm { MOVDQA xmmword ptr [RSP + 0x30],XMM1 }
    /* +0xd1e931 */ __asm { MOV dword ptr [RSP + 0x40],0x502e4408 }
    /* +0xd1e939 */ __asm { MOV ECX,dword ptr [RSP + 0x40] }
    /* +0xd1e93d */ __asm { CMP ECX,0x2c87b7ba }
    /* +0xd1e943 */ __asm { JBE 0x7fffa548f074 }
    /* +0xd1e949 */ __asm { PUSHFQ }
    /* +0xd1e94a */ __asm { POP RAX }
    /* +0xd1e94b */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0xd1e953 */ __asm { TEST EAX,0x100 }
    /* +0xd1e958 */ __asm { NOP }
    /* +0xd1e959 */ __asm { NOP }
    /* +0xd1e95a */ __asm { NOP }
    /* +0xd1e95b */ __asm { NOP }
    /* +0xd1e95c */ __asm { NOP }
    /* +0xd1e95d */ __asm { MOV dword ptr [RSP + 0x40],0xfff77ffd }
    /* +0xd1e965 */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xd1e96a */ __asm { XOR ECX,ECX }
    /* +0xd1e96c */ __asm { TEST R9D,R9D }
    /* +0xd1e96f */ __asm { SETS CL }
    /* +0xd1e972 */ __asm { MOV R10D,0x57ba7545 }
    /* +0xd1e978 */ __asm { ADD R10D,0x1425a526 }
    /* +0xd1e97f */ __asm { XOR R10D,0xabd70e85 }
    /* +0xd1e986 */ __asm { ADD R10D,R14D }
    /* +0xd1e989 */ __asm { MOV AX,0xf9f5 }
    /* +0xd1e98d */ __asm { IMUL EAX,EAX,0x4025 }
    /* +0xd1e993 */ __asm { ADD EAX,0xffffc6d1 }
    /* +0xd1e998 */ __asm { XOR EAX,R14D }
    /* +0xd1e99b */ __asm { MOVZX EAX,AX }
    /* +0xd1e99e */ __asm { XOR EDX,EDX }
    /* +0xd1e9a0 */ __asm { CMP R9D,EAX }
    /* +0xd1e9a3 */ __asm { SETNC DL }
    /* +0xd1e9a6 */ __asm { MOV R9D,0xcc05b85a }
    /* +0xd1e9ac */ __asm { XOR R9D,R14D }
    /* +0xd1e9af */ __asm { ROL R9D,0x1c }
    /* +0xd1e9b3 */ __asm { CMP R9,R10 }
    /* +0xd1e9b6 */ __asm { CMOVBE ECX,EDX }
    /* +0xd1e9b9 */ __asm { TEST CL,CL }
    /* +0xd1e9bb */ __asm { JZ 0x7fffa548f081 }
    /* +0xd1e9c1 */ __asm { MOV ECX,0xcae900dc }
    /* +0xd1e9c6 */ __asm { MOV RAX,0x130c2bda09d6dfc8 }
    /* +0xd1e9d0 */ __asm { MOV R10,R14 }
    /* +0xd1e9d3 */ __asm { XOR R10,RAX }
    /* +0xd1e9d6 */ __asm { ADD R10,0x182bdcab }
    /* +0xd1e9dd */ __asm { ADD ECX,R14D }
    /* +0xd1e9e0 */ __asm { IMUL ECX,ECX,-0x3fffff73 }
    /* +0xd1e9e6 */ __asm { ROL R10,0x26 }
    /* +0xd1e9ea */ __asm { ADD ECX,0xbfffeb12 }
    /* +0xd1e9f0 */ __asm { MOVSXD RAX,ECX }
    /* +0xd1e9f3 */ __asm { MOV R9,-0x76179bcfb0b2f041 }
    /* +0xd1e9fd */ __asm { IMUL R9,qword ptr [RAX + R11*0x1] }
    /* +0xd1ea02 */ __asm { ADD R9,-0x13f3992b }
    /* +0xd1ea09 */ __asm { CMP R10,R9 }
    /* +0xd1ea0c */ __asm { JNZ 0x7fffa548ea16 }
    /* +0xd1ea0e */ __asm { SCASB RDI }
    /* +0xd1ea0f */ __asm { ADC AL,0xe5 }
    /* +0xd1ea11 */ __asm { JRCXZ 0x7fffa548ea7b }
    /* +0xd1ea13 */ __asm { FBLD tword ptr [RDI] }
    /* +0xd1ea15 */ __asm { POP RSI }
    /* +0xd1ea16 */ __asm { MOV R13,R8 }
    /* +0xd1ea19 */ __asm { LEA R11,[0x7fffa47bea55] }
    /* +0xd1ea20 */ __asm { MOV R8,0x23d0b3861032217 }
    /* +0xd1ea2a */ __asm { CMP R11,R8 }
    /* +0xd1ea2d */ __asm { JZ 0x7fffa548f08f }
    /* +0xd1ea33 */ __asm { MOV R8W,0x1bf0 }
    /* +0xd1ea38 */ __asm { MOV CX,0x95f5 }
    /* +0xd1ea3c */ __asm { XOR ECX,0xffffb2bf }
    /* +0xd1ea42 */ __asm { SUB ECX,R14D }
    /* +0xd1ea45 */ __asm { MOVZX R9D,CX }
    /* +0xd1ea49 */ __asm { MOV ECX,R14D }
    /* +0xd1ea4c */ __asm { OR ECX,0x1 }
    /* +0xd1ea4f */ __asm { IMUL ECX,R8D }
    /* +0xd1ea53 */ __asm { ROR CX,0x1 }
    /* +0xd1ea56 */ __asm { MOVZX EDX,CX }
    /* +0xd1ea59 */ __asm { MOV R10W,0x5c16 }
    /* +0xd1ea5e */ __asm { ADD R10D,R14D }
    /* +0xd1ea61 */ __asm { XOR R10D,0x7caf }
    /* +0xd1ea68 */ __asm { MOVSX R10,R10W }
    /* +0xd1ea6c */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xd1ea71 */ __asm { MOV EAX,dword ptr [R11 + -0x1a7d] }
    /* +0xd1ea78 */ __asm { LEA R8,[RSP + 0x30] }
    /* +0xd1ea7d */ __asm { SYSCALL }
    /* +0xd1ea7f */ __asm { MOV R8,R13 }
    /* +0xd1ea82 */ __asm { LEA R11,[0x7fffa4784ec9] }
    /* +0xd1ea89 */ __asm { MOV RAX,-0x6a7b8353a8585856 }
    /* +0xd1ea93 */ __asm { CMP R11,RAX }
    /* +0xd1ea96 */ __asm { NOP }
    /* +0xd1ea97 */ __asm { NOP }
    /* +0xd1ea98 */ __asm { NOP }
    /* +0xd1ea99 */ __asm { NOP }
    /* +0xd1ea9a */ __asm { NOP }
    /* +0xd1ea9b */ __asm { NOP }
    /* +0xd1ea9c */ __asm { NOP }
    /* +0xd1ea9d */ __asm { NOP }
    /* +0xd1ea9e */ __asm { NOP }
    /* +0xd1ea9f */ __asm { NOP }
    /* +0xd1eaa0 */ __asm { NOP }
    /* +0xd1eaa1 */ __asm { NOP }
    /* +0xd1eaa2 */ __asm { NOP }
    /* +0xd1eaa3 */ __asm { NOP }
    /* +0xd1eaa4 */ __asm { NOP }
    /* +0xd1eaa5 */ __asm { NOP }
    /* +0xd1eaa6 */ __asm { NOP }
    /* +0xd1eae5 */ __asm { MOV R10D,0xcc348fa }
    /* +0xd1eaeb */ __asm { MOV RAX,0x37b4aab380ea05ba }
    /* +0xd1eaf5 */ __asm { CMP R10,RAX }
    /* +0xd1eaf8 */ __asm { NOP }
    /* +0xd1eaf9 */ __asm { NOP }
    /* +0xd1eafa */ __asm { NOP }
    /* +0xd1eafb */ __asm { NOP }
    /* +0xd1eafc */ __asm { NOP }
    /* +0xd1eafd */ __asm { NOP }
    /* +0xd1eafe */ __asm { NOP }
    /* +0xd1eaff */ __asm { NOP }
    /* +0xd1eb00 */ __asm { NOP }
    /* +0xd1eb01 */ __asm { NOP }
    /* +0xd1eb02 */ __asm { NOP }
    /* +0xd1eb03 */ __asm { MOV R11,0x0 }
    /* +0xd1eb0a */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xd1eb11 */ __asm { CMP dword ptr [R10 + 0x733abac6],0xd }
    /* +0xd1eb19 */ __asm { JC 0x7fffa548efdb }
    /* +0xd1eb1f */ __asm { MOV R9D,0x66cefbda }
    /* +0xd1eb25 */ __asm { MOV R10,0x559308ee676016eb }
    /* +0xd1eb2f */ __asm { XOR R10,R14 }
    /* +0xd1eb32 */ __asm { NOT R10 }
    /* +0xd1eb35 */ __asm { RDTSC }
    /* +0xd1eb37 */ __asm { SHL RDX,0x20 }
    /* +0xd1eb3b */ __asm { OR RDX,RAX }
    /* +0xd1eb3e */ __asm { MOV RAX,-0x5b596a0ee0e87373 }
    /* +0xd1eb48 */ __asm { IMUL RAX,RDX }
    /* +0xd1eb4c */ __asm { ADD RAX,R10 }
    /* +0xd1eb4f */ __asm { MOV R10,RAX }
    /* +0xd1eb52 */ __asm { SHR R10,0x1b }
    /* +0xd1eb56 */ __asm { MOV RCX,RAX }
    /* +0xd1eb59 */ __asm { SHR RCX,0x3b }
    /* +0xd1eb5d */ __asm { SHR RAX,0x2d }
    /* +0xd1eb61 */ __asm { XOR EAX,R10D }
    /* +0xd1eb64 */ __asm { ROR EAX,CL }
    /* +0xd1eb66 */ __asm { SUB R9D,R14D }
    /* +0xd1eb69 */ __asm { XOR R9D,0xe13b5dea }
    /* +0xd1eb70 */ __asm { MOV dword ptr [RSP + 0x30],R9D }
    /* +0xd1eb75 */ __asm { MOV ECX,dword ptr [RSP + 0x30] }
    /* +0xd1eb79 */ __asm { MOV R11D,0x9fa050ad }
    /* +0xd1eb7f */ __asm { LEA ECX,[R14 + R11*0x1] }
    /* +0xd1eb83 */ __asm { ADD ECX,0x1d7cb7ff }
    /* +0xd1eb89 */ __asm { CMP EAX,ECX }
    /* +0xd1eb8b */ __asm { JNC 0x7fffa548ed17 }
    /* +0xd1eb91 */ __asm { MOV dword ptr [RSP + 0x30],0xffb95fbc }
    /* +0xd1eb99 */ __asm { MOV ECX,dword ptr [RSP + 0x30] }
    /* +0xd1eb9d */ __asm { CMP ECX,0xd4c68970 }
    /* +0xd1eba3 */ __asm { JBE 0x7fffa548f0c9 }
    /* +0xd1eba9 */ __asm { LEA R10,[0x7fffa47b6aa6] }
    /* +0xd1ebb0 */ __asm { MOV RAX,0x687d9f1225e51dad }
    /* +0xd1ebba */ __asm { CMP R10,RAX }
    /* +0xd1ebbd */ __asm { NOP }
    /* +0xd1ebbe */ __asm { NOP }
    /* +0xd1ebbf */ __asm { NOP }
    /* +0xd1ebc0 */ __asm { NOP }
    /* +0xd1ebc1 */ __asm { NOP }
    /* +0xd1ebc2 */ __asm { MOV CX,0xd8c5 }
    /* +0xd1ebc6 */ __asm { MOV R9D,R14D }
    /* +0xd1ebc9 */ __asm { XOR R9D,ECX }
    /* +0xd1ebcc */ __asm { MOV EDX,0x3a778af2 }
    /* +0xd1ebd1 */ __asm { ADD EDX,0x17886d0e }
    /* +0xd1ebd7 */ __asm { MOV ECX,R14D }
    /* +0xd1ebda */ __asm { ROR EDX,CL }
    /* +0xd1ebdc */ __asm { NOT R9D }
    /* +0xd1ebdf */ __asm { MOVZX R9D,R9W }
    /* +0xd1ebe3 */ __asm { MOVZX R11D,uint8_t ptr [R10 + 0x5be7] }
    /* +0xd1ebeb */ __asm { MOVZX EAX,uint8_t ptr [R10 + R11*0x4 + 0x5bf7] }
    /* +0xd1ebf4 */ __asm { ROL AL,0x4 }
    /* +0xd1ebf7 */ __asm { MOV uint8_t ptr [RSP + 0x30],AL }
    /* +0xd1ebfb */ __asm { MOVZX EAX,uint8_t ptr [R10 + R11*0x4 + 0x5bf8] }
    /* +0xd1ec04 */ __asm { ROL AL,0x4 }
    /* +0xd1ec07 */ __asm { MOV uint8_t ptr [RSP + 0x31],AL }
    /* +0xd1ec0b */ __asm { MOVZX EAX,uint8_t ptr [R10 + R11*0x4 + 0x5bf9] }
    /* +0xd1ec14 */ __asm { ROL AL,0x4 }
    /* +0xd1ec17 */ __asm { MOV uint8_t ptr [RSP + 0x32],AL }
    /* +0xd1ec1b */ __asm { MOVZX R10D,uint8_t ptr [R10 + R11*0x4 + 0x5bfa] }
    /* +0xd1ec24 */ __asm { ROL R10B,0x4 }
    /* +0xd1ec28 */ __asm { MOV uint8_t ptr [RSP + 0x33],R10B }
    /* +0xd1ec2d */ __asm { MOV EAX,0x65e8ce72 }
    /* +0xd1ec32 */ __asm { MOVZX ECX,uint8_t ptr [RDX] }
    /* +0xd1ec35 */ __asm { MOV EDX,0x1 }
    /* +0xd1ec3a */ __asm { SHL EDX,CL }
    /* +0xd1ec3c */ __asm { XOR EAX,dword ptr [RSP + 0x30] }
    /* +0xd1ec40 */ __asm { AND EDX,EAX }
    /* +0xd1ec42 */ __asm { CMP EDX,R9D }
    /* +0xd1ec45 */ __asm { JZ 0x7fffa548ed17 }
    /* +0xd1ec4b */ __asm { XORPS XMM1,XMM1 }
    /* +0xd1ec4e */ __asm { MOVAPS xmmword ptr [RSP + 0x30],XMM1 }
    /* +0xd1ec53 */ __asm { MOV dword ptr [RSP + 0x40],0xa79a8896 }
    /* +0xd1ec5b */ __asm { MOV ECX,dword ptr [RSP + 0x40] }
    /* +0xd1ec5f */ __asm { CMP ECX,0xabd25c0f }
    /* +0xd1ec65 */ __asm { JC 0x7fffa548ec85 }
    /* +0xd1ec67 */ __asm { NOP }
    /* +0xd1ec69 */ __asm { MOV R10,0x0 }
    /* +0xd1ec70 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xd1ec77 */ __asm { PUSH -0x51c09d1d }
    /* +0xd1ec7c */ __asm { PUSH RSP }
    /* +0xd1ec7d */ __asm { ADD dword ptr [0x7fff5045543c],EBP }
    /* +0xd1ec83 */ __asm { XCHG uint8_t ptr [RBX],BH }
    /* +0xd1ec85 */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0xd1ec8d */ __asm { MOV dword ptr [RSP + 0x40],0xa061dc53 }
    /* +0xd1ec95 */ __asm { MOV ECX,dword ptr [RSP + 0x40] }
    /* +0xd1ec99 */ __asm { TEST CL,0x1 }
    /* +0xd1ec9c */ __asm { JZ 0x7fffa548f0d9 }
    /* +0xd1eca2 */ __asm { MOV R13,R8 }
    /* +0xd1eca5 */ __asm { MOV dword ptr [RSP + 0x40],0x10104808 }
    /* +0xd1ecad */ __asm { MOV R8D,dword ptr [RSP + 0x40] }
    /* +0xd1ecb2 */ __asm { LEA R10,[0x7fffa47b7328] }
    /* +0xd1ecb9 */ __asm { MOV R8,0x16b00d09451a5683 }
    /* +0xd1ecc3 */ __asm { CMP R10,R8 }
    /* +0xd1ecc6 */ __asm { JZ 0x7fffa548f0e5 }
    /* +0xd1eccc */ __asm { MOV R8W,0xd8e6 }
    /* +0xd1ecd1 */ __asm { MOV qword ptr [RSP + 0x40],R11 }
    /* +0xd1ecd6 */ __asm { MOV EAX,dword ptr [R10 + 0x5cb0] }
    /* +0xd1ecdd */ __asm { MOV CX,0x8a07 }
    /* +0xd1ece1 */ __asm { MOV R10D,0xffff8a06 }
    /* +0xd1ece7 */ __asm { SUB R10D,ECX }
    /* +0xd1ecea */ __asm { MOVSX R10,R10W }
    /* +0xd1ecee */ __asm { MOV CX,0xc21e }
    /* +0xd1ecf2 */ __asm { SUB ECX,R14D }
    /* +0xd1ecf5 */ __asm { ADD ECX,0x6a1c }
    /* +0xd1ecfb */ __asm { ROL CX,0xb }
    /* +0xd1ecff */ __asm { MOVZX EDX,CX }
    /* +0xd1ed02 */ __asm { ADD R8D,R14D }
    /* +0xd1ed05 */ __asm { ROR R8W,0x1 }
    /* +0xd1ed09 */ __asm { MOVZX R9D,R8W }
    /* +0xd1ed0d */ __asm { LEA R8,[RSP + 0x30] }
    /* +0xd1ed12 */ __asm { SYSCALL }
    /* +0xd1ed14 */ __asm { MOV R8,R13 }
}


// ============================================================================
// Function : FUN_7fffa548f0f0  |  RVA: 0xd1f0f0  |  Size: 2933 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa548f0f0(void) {
    /* +0xd1f0f0 */ __asm { PUSH R15 }
    /* +0xd1f0f2 */ __asm { PUSH R14 }
    /* +0xd1f0f4 */ __asm { PUSH RDI }
    /* +0xd1f0f5 */ __asm { PUSH RBP }
    /* +0xd1f0f6 */ __asm { PUSH R13 }
    /* +0xd1f0f8 */ __asm { PUSH RBX }
    /* +0xd1f0f9 */ __asm { PUSH R12 }
    /* +0xd1f0fb */ __asm { SUB RSP,0x60 }
    /* +0xd1f0ff */ __asm { MOV RDI,RCX }
    /* +0xd1f102 */ __asm { MOV R8D,0xba5344b9 }
    /* +0xd1f108 */ __asm { ADD RDX,-0x76040a22 }
    /* +0xd1f10f */ __asm { MOV R11,RAX }
    /* +0xd1f112 */ __asm { SHL R11,0x22 }
    /* +0xd1f116 */ __asm { ADD R11,RAX }
    /* +0xd1f119 */ __asm { MOV R10D,0x3e3a2eb0 }
    /* +0xd1f11f */ __asm { MOV RAX,RDX }
    /* +0xd1f122 */ __asm { ROL RAX,0x1d }
    /* +0xd1f126 */ __asm { ADD R8D,EDI }
    /* +0xd1f129 */ __asm { XOR R10D,EDI }
    /* +0xd1f12c */ __asm { ADD R10D,0x678908 }
    /* +0xd1f133 */ __asm { MOV R9,RDX }
    /* +0xd1f136 */ __asm { ROL R9,0x24 }
    /* +0xd1f13a */ __asm { XOR R9,RAX }
    /* +0xd1f13d */ __asm { XOR R9,RDX }
    /* +0xd1f140 */ __asm { MOV RAX,R9 }
    /* +0xd1f143 */ __asm { ROL RAX,0x3a }
    /* +0xd1f147 */ __asm { MOVQ XMM1,R9 }
    /* +0xd1f14c */ __asm { ROL R9,0x8 }
    /* +0xd1f150 */ __asm { XOR R9,RAX }
    /* +0xd1f153 */ __asm { MOVQ XMM4,R9 }
    /* +0xd1f158 */ __asm { ROL R8D,0x10 }
    /* +0xd1f15c */ __asm { PXOR XMM4,XMM1 }
    /* +0xd1f160 */ __asm { MOVQ RAX,XMM4 }
    /* +0xd1f165 */ __asm { MOV R9,RAX }
    /* +0xd1f168 */ __asm { ROL R9,0x10 }
    /* +0xd1f16c */ __asm { MOV R12,RAX }
    /* +0xd1f16f */ __asm { ROL R12,0x34 }
    /* +0xd1f173 */ __asm { XOR R12,R9 }
    /* +0xd1f176 */ __asm { XOR R12,RAX }
    /* +0xd1f179 */ __asm { MOV R14,R12 }
    /* +0xd1f17c */ __asm { ROL R14,0x28 }
    /* +0xd1f180 */ __asm { LEA RBX,[R12 + R14*0x1] }
    /* +0xd1f184 */ __asm { XOR R14,R12 }
    /* +0xd1f187 */ __asm { ROL R12,0x20 }
    /* +0xd1f18b */ __asm { MOV R9,0x15ab93a4056ae4e9 }
    /* +0xd1f195 */ __asm { ADD R9,R11 }
    /* +0xd1f198 */ __asm { RDTSC }
    /* +0xd1f19a */ __asm { SHL RDX,0x20 }
    /* +0xd1f19e */ __asm { OR RDX,RAX }
    /* +0xd1f1a1 */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xd1f1ab */ __asm { IMUL RDX,R11 }
    /* +0xd1f1af */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xd1f1b9 */ __asm { ADD RCX,RDX }
    /* +0xd1f1bc */ __asm { MOV RDX,RCX }
    /* +0xd1f1bf */ __asm { SHR RDX,0x1b }
    /* +0xd1f1c3 */ __asm { MOV RAX,RCX }
    /* +0xd1f1c6 */ __asm { SHR RAX,0x2d }
    /* +0xd1f1ca */ __asm { XOR EDX,EAX }
    /* +0xd1f1cc */ __asm { SHR RCX,0x3b }
    /* +0xd1f1d0 */ __asm { ROR EDX,CL }
    /* +0xd1f1d2 */ __asm { AND EDX,0x3 }
    /* +0xd1f1d5 */ __asm { ROL R10D,0xe }
    /* +0xd1f1d9 */ __asm { MOVSXD RAX,R10D }
    /* +0xd1f1dc */ __asm { CMP R8,RAX }
    /* +0xd1f1df */ __asm { CMOVNC R14,RBX }
    /* +0xd1f1e3 */ __asm { XOR R14,R12 }
    /* +0xd1f1e6 */ __asm { ROL R14,0x30 }
    /* +0xd1f1ea */ __asm { CMP EDX,0x2 }
    /* +0xd1f1ed */ __asm { JNC 0x7fffa548f297 }
    /* +0xd1f1f3 */ __asm { MOV ECX,0x46ea9ecd }
    /* +0xd1f1f8 */ __asm { ADD ECX,EDI }
    /* +0xd1f1fa */ __asm { MOV R8D,0xe1d45999 }
    /* +0xd1f200 */ __asm { MOV R10D,EDI }
    /* +0xd1f203 */ __asm { ROL ECX,0x10 }
    /* +0xd1f206 */ __asm { OR R10D,0x1 }
    /* +0xd1f20a */ __asm { IMUL R8D,R10D }
    /* +0xd1f20e */ __asm { CMP EDX,0x1 }
    /* +0xd1f211 */ __asm { SETNZ AL }
    /* +0xd1f214 */ __asm { ADD R8D,0xee7f351c }
    /* +0xd1f21b */ __asm { MOVSXD RDX,R8D }
    /* +0xd1f21e */ __asm { IMUL R8D,ECX,-0x1ded6651 }
    /* +0xd1f225 */ __asm { CMP R8,RDX }
    /* +0xd1f228 */ __asm { SETC DL }
    /* +0xd1f22b */ __asm { XOR DL,AL }
    /* +0xd1f22d */ __asm { JZ 0x7fffa548f3a4 }
    /* +0xd1f233 */ __asm { MOV EDX,0x58b4a6ad }
    /* +0xd1f238 */ __asm { MOV ECX,0x55170e00 }
    /* +0xd1f23d */ __asm { SUB ECX,EDI }
    /* +0xd1f23f */ __asm { ADD ECX,0x82844a54 }
    /* +0xd1f245 */ __asm { ROL ECX,0x5 }
    /* +0xd1f248 */ __asm { MOVSXD RAX,ECX }
    /* +0xd1f24b */ __asm { XOR EDX,0x39408615 }
    /* +0xd1f251 */ __asm { SUB EDX,EDI }
    /* +0xd1f253 */ __asm { CMP RAX,RDX }
    /* +0xd1f256 */ __asm { JL 0x7fffa548f58f }
    /* +0xd1f25c */ __asm { MOV EAX,0xef6b82db }
    /* +0xd1f261 */ __asm { XOR EAX,0x2d9e8ebc }
    /* +0xd1f266 */ __asm { LEA EBP,[RDI + RAX*0x1] }
    /* +0xd1f269 */ __asm { ADD EBP,0x24356bab }
    /* +0xd1f26f */ __asm { LEA RDX,[0x7fffa47bc36b] }
    /* +0xd1f276 */ __asm { MOVZX ECX,uint8_t ptr [RDX + 0x322] }
    /* +0xd1f27d */ __asm { LEA RAX,[RDX + RCX*0x4] }
    /* +0xd1f281 */ __asm { ADD RAX,0x332 }
    /* +0xd1f287 */ __asm { MOVZX EDX,uint8_t ptr [RDX + RCX*0x4 + 0x332] }
    /* +0xd1f28f */ __asm { ROL DL,0x4 }
    /* +0xd1f292 */ __asm { JMP 0x7fffa548f5c1 }
    /* +0xd1f297 */ __asm { SETNZ R11B }
    /* +0xd1f29b */ __asm { MOV R10D,0x7f801619 }
    /* +0xd1f2a1 */ __asm { MOV R8D,0x6bad5852 }
    /* +0xd1f2a7 */ __asm { ADD R8D,0xc0000006 }
    /* +0xd1f2ae */ __asm { MOV ECX,EDI }
    /* +0xd1f2b0 */ __asm { ROR R8D,CL }
    /* +0xd1f2b3 */ __asm { XOR R8D,0xb1276e92 }
    /* +0xd1f2ba */ __asm { MOV CX,0x7e6d }
    /* +0xd1f2be */ __asm { XOR ECX,0x7e6e }
    /* +0xd1f2c4 */ __asm { MOVZX ECX,CX }
    /* +0xd1f2c7 */ __asm { XOR EAX,EAX }
    /* +0xd1f2c9 */ __asm { CMP EDX,ECX }
    /* +0xd1f2cb */ __asm { SETC AL }
    /* +0xd1f2ce */ __asm { ADD R10D,EDI }
    /* +0xd1f2d1 */ __asm { XOR R10D,0xadf8d0d5 }
    /* +0xd1f2d8 */ __asm { ROL R10D,0x11 }
    /* +0xd1f2dc */ __asm { MOVSXD R10,R10D }
    /* +0xd1f2df */ __asm { CMP R10,R8 }
    /* +0xd1f2e2 */ __asm { MOVZX ECX,R11B }
    /* +0xd1f2e6 */ __asm { CMOVA ECX,EAX }
    /* +0xd1f2e9 */ __asm { TEST CL,CL }
    /* +0xd1f2eb */ __asm { JZ 0x7fffa548f4b0 }
    /* +0xd1f2f1 */ __asm { MOV R11,0xa00f3f47ba537f6 }
    /* +0xd1f2fb */ __asm { MOV EAX,0xed9f51b3 }
    /* +0xd1f300 */ __asm { ADD RAX,R11 }
    /* +0xd1f303 */ __asm { XOR RAX,RDI }
    /* +0xd1f306 */ __asm { MOV EDX,0x16c88607 }
    /* +0xd1f30b */ __asm { CMP RDX,RAX }
    /* +0xd1f30e */ __asm { NOP }
    /* +0xd1f30f */ __asm { NOP }
    /* +0xd1f310 */ __asm { NOP }
    /* +0xd1f311 */ __asm { NOP }
    /* +0xd1f312 */ __asm { NOP }
    /* +0xd1f313 */ __asm { CMP dword ptr [RDX + 0x69357db9],0xd }
    /* +0xd1f31a */ __asm { JC 0x7fffa548f6e2 }
    /* +0xd1f320 */ __asm { LEA RDX,[0x7fffa47c497d] }
    /* +0xd1f327 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd1f32e */ __asm { NOP }
    /* +0xd1f32f */ __asm { MOV R10,0x0 }
    /* +0xd1f336 */ __asm { MOV R11,-0xb2db5c2f852460b }
    /* +0xd1f340 */ __asm { IMUL R11,R11,-0x4b2774d1 }
    /* +0xd1f347 */ __asm { SUB R11,RDI }
    /* +0xd1f34a */ __asm { CMP RDX,R11 }
    /* +0xd1f34d */ __asm { JZ 0x7fffa548fc1d }
    /* +0xd1f353 */ __asm { MOV CX,0xd561 }
    /* +0xd1f357 */ __asm { IMUL R11D,ECX,0x715f }
    /* +0xd1f35e */ __asm { MOV R8D,0x272a777b }
    /* +0xd1f364 */ __asm { XOR R8D,EDI }
    /* +0xd1f367 */ __asm { NOT R8D }
    /* +0xd1f36a */ __asm { MOV ECX,EDI }
    /* +0xd1f36c */ __asm { ROL R11W,CL }
    /* +0xd1f370 */ __asm { MOV CX,0x8a84 }
    /* +0xd1f374 */ __asm { SUB ECX,EDI }
    /* +0xd1f376 */ __asm { OR EDI,0x1 }
    /* +0xd1f379 */ __asm { MOVSX R10,R11W }
    /* +0xd1f37d */ __asm { MOV qword ptr [RSP + 0x40],R11 }
    /* +0xd1f382 */ __asm { MOV EAX,dword ptr [RDX + -0x7985] }
    /* +0xd1f388 */ __asm { ROL CX,0xd }
    /* +0xd1f38c */ __asm { MOVZX ECX,CX }
    /* +0xd1f38f */ __asm { MOV R11W,0xffb3 }
    /* +0xd1f394 */ __asm { IMUL R11D,EDI }
    /* +0xd1f398 */ __asm { NOT R11D }
    /* +0xd1f39b */ __asm { MOVZX R11D,R11W }
    /* +0xd1f39f */ __asm { JMP 0x7fffa548f6d4 }
    /* +0xd1f3a4 */ __asm { MOV R11D,0x90f8cc2a }
    /* +0xd1f3aa */ __asm { MOV RAX,-0x4c6b34a276de309b }
    /* +0xd1f3b4 */ __asm { CMP R11,RAX }
    /* +0xd1f3b7 */ __asm { NOP }
    /* +0xd1f3b8 */ __asm { NOP }
    /* +0xd1f3b9 */ __asm { NOP }
    /* +0xd1f3ba */ __asm { NOP }
    /* +0xd1f3bb */ __asm { NOP }
    /* +0xd1f3bc */ __asm { MOV RAX,-0x44904cab22cb33f2 }
    /* +0xd1f3c6 */ __asm { MOV R8D,0x3f252812 }
    /* +0xd1f3cc */ __asm { MOV EDX,0xeb11b40f }
    /* +0xd1f3d1 */ __asm { IMUL RDX,RAX }
    /* +0xd1f3d5 */ __asm { ADD RDX,RDI }
    /* +0xd1f3d8 */ __asm { ADD R8D,0xb12e155c }
    /* +0xd1f3df */ __asm { MOV ECX,EDI }
    /* +0xd1f3e1 */ __asm { ROR R8D,CL }
    /* +0xd1f3e4 */ __asm { MOVSXD RAX,R8D }
    /* +0xd1f3e7 */ __asm { MOV R11D,dword ptr [RAX + R11*0x1 + 0x2c4] }
    /* +0xd1f3ef */ __asm { MOV RAX,0x5555555555555556 }
    /* +0xd1f3f9 */ __asm { IMUL RAX,R11 }
    /* +0xd1f3fd */ __asm { CMP RAX,RDX }
    /* +0xd1f400 */ __asm { JNC 0x7fffa548f77c }
    /* +0xd1f406 */ __asm { LEA RDX,[0x7fffa47bf979] }
    /* +0xd1f40d */ __asm { MOV RCX,RDX }
    /* +0xd1f410 */ __asm { ADD RCX,-0xbe8bacc }
    /* +0xd1f417 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xd1f41e */ __asm { NOP }
    /* +0xd1f420 */ __asm { MOV R8,0x0 }
    /* +0xd1f427 */ __asm { MOV R11D,0x672db614 }
    /* +0xd1f42d */ __asm { IMUL R11D,R10D }
    /* +0xd1f431 */ __asm { NOT R11D }
    /* +0xd1f434 */ __asm { XOR R11,RCX }
    /* +0xd1f437 */ __asm { MOV RAX,0x1472dd280f3385d4 }
    /* +0xd1f441 */ __asm { CMP R11,RAX }
    /* +0xd1f444 */ __asm { NOP }
    /* +0xd1f445 */ __asm { NOP }
    /* +0xd1f446 */ __asm { NOP }
    /* +0xd1f447 */ __asm { NOP }
    /* +0xd1f448 */ __asm { NOP }
    /* +0xd1f449 */ __asm { NOP }
    /* +0xd1f44a */ __asm { NOP }
    /* +0xd1f44b */ __asm { NOP }
    /* +0xd1f44c */ __asm { NOP }
    /* +0xd1f44d */ __asm { NOP }
    /* +0xd1f44e */ __asm { NOP }
    /* +0xd1f44f */ __asm { NOP }
    /* +0xd1f450 */ __asm { NOP }
    /* +0xd1f451 */ __asm { NOP }
    /* +0xd1f452 */ __asm { MOV R8D,0x272a777b }
    /* +0xd1f458 */ __asm { MOV R11W,0xda13 }
    /* +0xd1f45d */ __asm { XOR R8D,EDI }
    /* +0xd1f460 */ __asm { MOV CX,0xcf41 }
    /* +0xd1f464 */ __asm { MOV R10W,0xd38d }
    /* +0xd1f469 */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xd1f46e */ __asm { NOT R8D }
    /* +0xd1f471 */ __asm { ADD ECX,0xffffbfb6 }
    /* +0xd1f477 */ __asm { ROL CX,0x3 }
    /* +0xd1f47b */ __asm { XOR R11D,0xa13 }
    /* +0xd1f482 */ __asm { IMUL R10D,R10D,0x7127 }
    /* +0xd1f489 */ __asm { MOV EAX,dword ptr [RDX + -0x3435] }
    /* +0xd1f48f */ __asm { ADD R10D,EDI }
    /* +0xd1f492 */ __asm { ADD ECX,EDI }
    /* +0xd1f494 */ __asm { OR EDI,0x1 }
    /* +0xd1f497 */ __asm { IMUL EDI,R11D }
    /* +0xd1f49b */ __asm { MOVZX R11D,DI }
    /* +0xd1f49f */ __asm { MOVSX R10,R10W }
    /* +0xd1f4a3 */ __asm { MOVZX ECX,CX }
    /* +0xd1f4a6 */ __asm { MOV dword ptr [RSP + 0x28],R11D }
    /* +0xd1f4ab */ __asm { JMP 0x7fffa548fbf2 }
    /* +0xd1f4b0 */ __asm { MOV EDX,0x714b0986 }
    /* +0xd1f4b5 */ __asm { MOV R11,-0x7f953a120265e22 }
    /* +0xd1f4bf */ __asm { CMP RDX,R11 }
    /* +0xd1f4c2 */ __asm { NOP }
    /* +0xd1f4c3 */ __asm { NOP }
    /* +0xd1f4c4 */ __asm { NOP }
    /* +0xd1f4c5 */ __asm { NOP }
    /* +0xd1f4c6 */ __asm { NOP }
    /* +0xd1f4c7 */ __asm { MOV R11,qword ptr [RDX + 0xeb2f682] }
    /* +0xd1f4ce */ __asm { MOV R10,-0x3dcd20f75d54f9a9 }
    /* +0xd1f4d8 */ __asm { MOV RAX,R11 }
    /* +0xd1f4db */ __asm { MUL R10 }
    /* +0xd1f4de */ __asm { MOV R10,RDX }
    /* +0xd1f4e1 */ __asm { MOV EDX,0x1462f35 }
    /* +0xd1f4e6 */ __asm { MOV RAX,R11 }
    /* +0xd1f4e9 */ __asm { MUL RDX }
    /* +0xd1f4ec */ __asm { ADD RAX,R10 }
    /* +0xd1f4ef */ __asm { ADC RDX,0x0 }
    /* +0xd1f4f3 */ __asm { TEST DL,0x1 }
    /* +0xd1f4f6 */ __asm { JNZ 0x7fffa548f821 }
    /* +0xd1f4fc */ __asm { LEA RDX,[0x7fffa47c0d91] }
    /* +0xd1f503 */ __asm { NOP }
    /* +0xd1f504 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd1f50b */ __asm { MOV R10,0x0 }
    /* +0xd1f512 */ __asm { MOV R11,-0x193bca6288bf03b }
    /* +0xd1f51c */ __asm { CMP RDX,R11 }
    /* +0xd1f51f */ __asm { NOP }
    /* +0xd1f520 */ __asm { NOP }
    /* +0xd1f521 */ __asm { NOP }
    /* +0xd1f522 */ __asm { NOP }
    /* +0xd1f523 */ __asm { NOP }
    /* +0xd1f524 */ __asm { MOV R10W,0xf96d }
    /* +0xd1f529 */ __asm { MOV ECX,0xad5fb8d4 }
    /* +0xd1f52e */ __asm { MOV R11D,0x9d68887 }
    /* +0xd1f534 */ __asm { SUB R11D,ECX }
    /* +0xd1f537 */ __asm { MOV ECX,EDI }
    /* +0xd1f539 */ __asm { OR ECX,0x1 }
    /* +0xd1f53c */ __asm { MOV R8D,0xd8d58884 }
    /* +0xd1f542 */ __asm { SUB R8D,EDI }
    /* +0xd1f545 */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xd1f54a */ __asm { MOV EAX,dword ptr [RDX + -0x3d99] }
    /* +0xd1f550 */ __asm { IMUL R8D,R8D,-0xb6a8d21 }
    /* +0xd1f557 */ __asm { LEA EDX,[RDI + R10*0x1] }
    /* +0xd1f55b */ __asm { ADD EDX,0xffff8e0f }
    /* +0xd1f561 */ __asm { MOVZX EDX,DX }
    /* +0xd1f564 */ __asm { IMUL ECX,R11D }
    /* +0xd1f568 */ __asm { MOVSXD R10,ECX }
    /* +0xd1f56b */ __asm { MOV CX,0xd468 }
    /* +0xd1f56f */ __asm { MOV R11D,0xffffd868 }
    /* +0xd1f575 */ __asm { SUB R11D,ECX }
    /* +0xd1f578 */ __asm { MOV ECX,EDI }
    /* +0xd1f57a */ __asm { ROR R11W,CL }
    /* +0xd1f57e */ __asm { MOVZX ECX,R11W }
    /* +0xd1f582 */ __asm { MOV dword ptr [RSP + 0x30],ECX }
    /* +0xd1f586 */ __asm { MOV dword ptr [RSP + 0x28],EDX }
    /* +0xd1f58a */ __asm { JMP 0x7fffa548fbf6 }
    /* +0xd1f58f */ __asm { LEA RCX,[0x7fffa47bc36b] }
    /* +0xd1f596 */ __asm { MOVZX EAX,uint8_t ptr [RCX + 0x322] }
    /* +0xd1f59d */ __asm { MOVZX EDX,uint8_t ptr [RCX + RAX*0x4 + 0x332] }
    /* +0xd1f5a5 */ __asm { ROL DL,0x4 }
    /* +0xd1f5a8 */ __asm { LEA RAX,[RCX + RAX*0x4] }
    /* +0xd1f5ac */ __asm { ADD RAX,0x332 }
    /* +0xd1f5b2 */ __asm { MOV ECX,0xb26c35e3 }
    /* +0xd1f5b7 */ __asm { MOV EBP,0xc8ab5054 }
    /* +0xd1f5bc */ __asm { SUB EBP,ECX }
    /* +0xd1f5be */ __asm { ROL EBP,0x8 }
    /* +0xd1f5c1 */ __asm { MOVZX ECX,uint8_t ptr [RAX + 0x2] }
    /* +0xd1f5c5 */ __asm { ROL CL,0x4 }
    /* +0xd1f5c8 */ __asm { MOVZX R13D,uint8_t ptr [RAX + 0x1] }
    /* +0xd1f5cd */ __asm { MOV EBX,0xc1058da2 }
    /* +0xd1f5d2 */ __asm { ADD EBX,EBP }
    /* +0xd1f5d4 */ __asm { MOV uint8_t ptr [RSP + 0x42],CL }
    /* +0xd1f5d8 */ __asm { MOV R8D,0x52d65973 }
    /* +0xd1f5de */ __asm { NOT EBX }
    /* +0xd1f5e0 */ __asm { MOV ECX,EDI }
    /* +0xd1f5e2 */ __asm { ROR EBX,CL }
    /* +0xd1f5e4 */ __asm { ROL R13B,0x4 }
    /* +0xd1f5e8 */ __asm { NOT R8D }
    /* +0xd1f5eb */ __asm { ADD R8D,EBP }
    /* +0xd1f5ee */ __asm { ROR R8D,CL }
    /* +0xd1f5f1 */ __asm { MOV uint8_t ptr [RSP + 0x40],DL }
    /* +0xd1f5f5 */ __asm { MOV uint8_t ptr [RSP + 0x41],R13B }
    /* +0xd1f5fa */ __asm { ADD R8D,0x3e234f5e }
    /* +0xd1f601 */ __asm { MOVZX EAX,uint8_t ptr [RAX + 0x3] }
    /* +0xd1f605 */ __asm { ROL AL,0x4 }
    /* +0xd1f608 */ __asm { MOV uint8_t ptr [RSP + 0x43],AL }
    /* +0xd1f60c */ __asm { MOV EDX,0x65e8ce72 }
    /* +0xd1f611 */ __asm { XOR EDX,dword ptr [RSP + 0x40] }
    /* +0xd1f615 */ __asm { MOVZX ECX,uint8_t ptr [RBX] }
    /* +0xd1f618 */ __asm { MOV EAX,0x1 }
    /* +0xd1f61d */ __asm { MOV R15D,0x1 }
    /* +0xd1f623 */ __asm { SHR R15D,CL }
    /* +0xd1f626 */ __asm { SHL EAX,CL }
    /* +0xd1f628 */ __asm { MOV ECX,0x9395b2e5 }
    /* +0xd1f62d */ __asm { CMP R8,RCX }
    /* +0xd1f630 */ __asm { MOVD XMM1,EDX }
    /* +0xd1f634 */ __asm { CMOVZ EAX,R15D }
    /* +0xd1f638 */ __asm { MOVD XMM4,EAX }
    /* +0xd1f63c */ __asm { PAND XMM4,XMM1 }
    /* +0xd1f640 */ __asm { MOVD ECX,XMM4 }
    /* +0xd1f644 */ __asm { TEST ECX,ECX }
    /* +0xd1f646 */ __asm { JZ 0x7fffa548f8f6 }
    /* +0xd1f64c */ __asm { LEA RDX,[0x7fffa47c4db6] }
    /* +0xd1f653 */ __asm { MOV R11,0x4b246ed11c8e906a }
    /* +0xd1f65d */ __asm { CMP RDX,R11 }
    /* +0xd1f660 */ __asm { JZ 0x7fffa548fc17 }
    /* +0xd1f666 */ __asm { MOV R8D,0x4ff302a0 }
    /* +0xd1f66c */ __asm { IMUL R8D,R10D }
    /* +0xd1f670 */ __asm { SUB R8D,EBP }
    /* +0xd1f673 */ __asm { MOV CX,0x37b5 }
    /* +0xd1f677 */ __asm { XOR R8D,0x92aaec0a }
    /* +0xd1f67e */ __asm { MOV EAX,0x96d05a5b }
    /* +0xd1f683 */ __asm { ADD EAX,0x4eb851ba }
    /* +0xd1f688 */ __asm { IMUL EAX,R10D }
    /* +0xd1f68c */ __asm { ADD EAX,EBP }
    /* +0xd1f68e */ __asm { MOV qword ptr [RSP + 0x40],R10 }
    /* +0xd1f693 */ __asm { IMUL R11D,ECX,0x6a93 }
    /* +0xd1f69a */ __asm { ROL EAX,0xb }
    /* +0xd1f69d */ __asm { MOVSXD R10,EAX }
    /* +0xd1f6a0 */ __asm { MOV EAX,dword ptr [RDX + -0x7dbe] }
    /* +0xd1f6a6 */ __asm { MOV DX,0xfe22 }
    /* +0xd1f6aa */ __asm { ADD EDX,0x23f4 }
    /* +0xd1f6b0 */ __asm { ROL DX,0xe }
    /* +0xd1f6b4 */ __asm { SUB EDX,EDI }
    /* +0xd1f6b6 */ __asm { ADD R11D,0x1145 }
    /* +0xd1f6bd */ __asm { MOV ECX,EBP }
    /* +0xd1f6bf */ __asm { ROR R11W,CL }
    /* +0xd1f6c3 */ __asm { OR EDI,0x1 }
    /* +0xd1f6c6 */ __asm { IMUL R11D,EDI }
    /* +0xd1f6ca */ __asm { MOVZX R11D,R11W }
    /* +0xd1f6ce */ __asm { ROL DX,CL }
    /* +0xd1f6d1 */ __asm { MOVZX ECX,DX }
    /* +0xd1f6d4 */ __asm { MOV dword ptr [RSP + 0x30],ECX }
    /* +0xd1f6d8 */ __asm { MOV dword ptr [RSP + 0x28],R11D }
    /* +0xd1f6dd */ __asm { JMP 0x7fffa548fbf6 }
    /* +0xd1f6e2 */ __asm { LEA RDX,[0x7fffa47c08df] }
    /* +0xd1f6e9 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd1f6f0 */ __asm { MOV R10,0x0 }
    /* +0xd1f6f7 */ __asm { NOP }
    /* +0xd1f6f8 */ __asm { MOV R11,0x45c368edf83a8087 }
    /* +0xd1f702 */ __asm { CMP RDX,R11 }
    /* +0xd1f705 */ __asm { JZ 0x7fffa548fc25 }
    /* +0xd1f70b */ __asm { MOV CX,0xca23 }
    /* +0xd1f70f */ __asm { MOV R11D,EDI }
    /* +0xd1f712 */ __asm { OR R11D,0x1 }
    /* +0xd1f716 */ __asm { MOV qword ptr [RSP + 0x40],R10 }
    /* +0xd1f71b */ __asm { MOV R8W,0xb74b }
    /* +0xd1f720 */ __asm { SUB R8D,EDI }
    /* +0xd1f723 */ __asm { IMUL R8D,R8D,-0x32f7 }
    /* +0xd1f72a */ __asm { MOVSX R10,R8W }
    /* +0xd1f72e */ __asm { MOV R8W,0x4d00 }
    /* +0xd1f733 */ __asm { IMUL R8D,R11D }
    /* +0xd1f737 */ __asm { ROL R8W,0xe }
    /* +0xd1f73c */ __asm { MOVZX R15D,R8W }
    /* +0xd1f740 */ __asm { MOV EAX,dword ptr [RDX + -0x439b] }
    /* +0xd1f746 */ __asm { XOR ECX,0x1a23 }
    /* +0xd1f74c */ __asm { IMUL ECX,R11D }
    /* +0xd1f750 */ __asm { MOVZX R11D,CX }
    /* +0xd1f754 */ __asm { MOV R8D,0x3bc95713 }
    /* +0xd1f75a */ __asm { ADD R8D,0xad667fb4 }
    /* +0xd1f761 */ __asm { MOV ECX,EDI }
    /* +0xd1f763 */ __asm { ROR R8D,CL }
    /* +0xd1f766 */ __asm { ADD R8D,0x816d0294 }
    /* +0xd1f76d */ __asm { MOV dword ptr [RSP + 0x30],R15D }
    /* +0xd1f772 */ __asm { MOV dword ptr [RSP + 0x28],R11D }
    /* +0xd1f777 */ __asm { JMP 0x7fffa548fbf6 }
    /* +0xd1f77c */ __asm { MOV R11,-0x45bedcd0c65b6e81 }
    /* +0xd1f786 */ __asm { XOR R11,0x29623324 }
    /* +0xd1f78d */ __asm { IMUL R11,R11,-0x4951296b }
    /* +0xd1f794 */ __asm { ADD R11,RDI }
    /* +0xd1f797 */ __asm { LEA RDX,[0x7fffa47c08ab] }
    /* +0xd1f79e */ __asm { CMP RDX,R11 }
    /* +0xd1f7a1 */ __asm { JZ 0x7fffa548fc2b }
    /* +0xd1f7a7 */ __asm { MOV R11W,0x8884 }
    /* +0xd1f7ac */ __asm { MOV CX,0x8530 }
    /* +0xd1f7b0 */ __asm { MOV EAX,0xffff852f }
    /* +0xd1f7b5 */ __asm { SUB EAX,ECX }
    /* +0xd1f7b7 */ __asm { MOV R8W,0x59e9 }
    /* +0xd1f7bc */ __asm { MOV ECX,0xe0ecab7e }
    /* +0xd1f7c1 */ __asm { ADD ECX,0x7ffe0260 }
    /* +0xd1f7c7 */ __asm { IMUL R10D,ECX }
    /* +0xd1f7cb */ __asm { NOT R10D }
    /* +0xd1f7ce */ __asm { MOVSXD RCX,R10D }
    /* +0xd1f7d1 */ __asm { MOV R15W,0xa02f }
    /* +0xd1f7d6 */ __asm { XOR R15D,EDI }
    /* +0xd1f7d9 */ __asm { MOV qword ptr [RSP + 0x40],R10 }
    /* +0xd1f7de */ __asm { MOVSX R10,AX }
    /* +0xd1f7e2 */ __asm { SUB R11D,EDI }
    /* +0xd1f7e5 */ __asm { IMUL EAX,R15D,0x3dfd }
    /* +0xd1f7ec */ __asm { NOT EAX }
    /* +0xd1f7ee */ __asm { MOVZX R15D,AX }
    /* +0xd1f7f2 */ __asm { MOV EAX,dword ptr [RDX + RCX*0x1 + 0xf0] }
    /* +0xd1f7f9 */ __asm { XOR R8D,0x59ed }
    /* +0xd1f800 */ __asm { MOV ECX,EDI }
    /* +0xd1f802 */ __asm { ROL R8W,CL }
    /* +0xd1f806 */ __asm { MOVZX ECX,R8W }
    /* +0xd1f80a */ __asm { ROL R11W,0x9 }
    /* +0xd1f80f */ __asm { MOVZX R8D,R11W }
    /* +0xd1f813 */ __asm { MOV dword ptr [RSP + 0x30],ECX }
    /* +0xd1f817 */ __asm { MOV dword ptr [RSP + 0x28],R15D }
    /* +0xd1f81c */ __asm { JMP 0x7fffa548fbf6 }
    /* +0xd1f821 */ __asm { LEA RDX,[0x7fffa47babdd] }
    /* +0xd1f828 */ __asm { MOV R11,-0x3282aef082ef7bb3 }
    /* +0xd1f832 */ __asm { MOV EAX,0x939bee1f }
    /* +0xd1f837 */ __asm { IMUL RAX,R11 }
    /* +0xd1f83b */ __asm { XOR RAX,0x560ff090 }
    /* +0xd1f841 */ __asm { MOV R11,RDI }
    /* +0xd1f844 */ __asm { OR R11,0x1 }
    /* +0xd1f848 */ __asm { MOV R10,RDX }
    /* +0xd1f84b */ __asm { XOR R10,0x19c982fc }
    /* +0xd1f852 */ __asm { MOV ECX,0xfe6cad4c }
    /* +0xd1f857 */ __asm { ADD RCX,R10 }
    /* +0xd1f85a */ __asm { IMUL R11,RAX }
    /* +0xd1f85e */ __asm { CMP R11,RCX }
    /* +0xd1f861 */ __asm { JZ 0x7fffa548fc37 }
    /* +0xd1f867 */ __asm { MOV R10,0x0 }
    /* +0xd1f86e */ __asm { NOP }
    /* +0xd1f86f */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd1f876 */ __asm { MOV CX,0xa1c9 }
    /* +0xd1f87a */ __asm { MOV qword ptr [RSP + 0x40],R10 }
    /* +0xd1f87f */ __asm { MOV R11W,0x13a4 }
    /* +0xd1f884 */ __asm { ADD R11D,0x36d6 }
    /* +0xd1f88b */ __asm { XOR R11D,0x4a3a }
    /* +0xd1f892 */ __asm { MOVZX R11D,R11W }
    /* +0xd1f896 */ __asm { MOV R8D,EDI }
    /* +0xd1f899 */ __asm { OR R8D,0x1 }
    /* +0xd1f89d */ __asm { MOV R10D,0x641fd59d }
    /* +0xd1f8a3 */ __asm { ADD R10D,0x1f3a8331 }
    /* +0xd1f8aa */ __asm { MOVD XMM1,R8D }
    /* +0xd1f8af */ __asm { MOV AX,0x5c95 }
    /* +0xd1f8b3 */ __asm { SUB EAX,EDI }
    /* +0xd1f8b5 */ __asm { OR EDI,0x1 }
    /* +0xd1f8b8 */ __asm { XOR R10D,0x835a58ce }
    /* +0xd1f8bf */ __asm { MOVD XMM4,R10D }
    /* +0xd1f8c4 */ __asm { PMULUDQ XMM4,XMM1 }
    /* +0xd1f8c8 */ __asm { MOVD R8D,XMM4 }
    /* +0xd1f8cd */ __asm { ADD EAX,0x2bee }
    /* +0xd1f8d2 */ __asm { MOVSX R10,AX }
    /* +0xd1f8d6 */ __asm { XOR ECX,0x71c9 }
    /* +0xd1f8dc */ __asm { IMUL ECX,EDI }
    /* +0xd1f8df */ __asm { MOVZX ECX,CX }
    /* +0xd1f8e2 */ __asm { MOV EAX,dword ptr [RDX + 0x1967] }
    /* +0xd1f8e8 */ __asm { MOV dword ptr [RSP + 0x30],R11D }
    /* +0xd1f8ed */ __asm { MOV dword ptr [RSP + 0x28],ECX }
    /* +0xd1f8f1 */ __asm { JMP 0x7fffa548fbf6 }
    /* +0xd1f8f6 */ __asm { MOV R8W,0xeb1e }
    /* +0xd1f8fb */ __asm { MOV EBX,0x1a44e9f0 }
    /* +0xd1f900 */ __asm { SUB EBX,EBP }
    /* +0xd1f902 */ __asm { XOR EBX,EDI }
    /* +0xd1f904 */ __asm { ROL EBX,0x5 }
    /* +0xd1f907 */ __asm { RDTSC }
    /* +0xd1f909 */ __asm { SHL RDX,0x20 }
    /* +0xd1f90d */ __asm { OR RDX,RAX }
    /* +0xd1f910 */ __asm { IMUL RDX,R11 }
    /* +0xd1f914 */ __asm { MOV R11,-0x6336ecb8003e0d6a }
    /* +0xd1f91e */ __asm { ADD R11,RDX }
    /* +0xd1f921 */ __asm { MOV RCX,R11 }
    /* +0xd1f924 */ __asm { SHR RCX,0x3b }
    /* +0xd1f928 */ __asm { MOV RDX,R11 }
    /* +0xd1f92b */ __asm { SHR RDX,0x2d }
    /* +0xd1f92f */ __asm { SHR R11,0x1b }
}


// ============================================================================
// Function : FUN_7fffa548fc80  |  RVA: 0xd1fc80  |  Size: 542 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa548fc80(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  char *pcVar6;
  uint32_t uVar7;
  uint16_t uVar8;
  int64_t lVar9;
  char *pcVar10;
  bool bVar11;
  int64_t in_XMM4_Qa;
  uint8_t auVar12 [16];
  uint32_t in_stack_00000028;
  
  uVar3 = in_XMM4_Qa - 0x8f8353e7;
  uVar4 = uVar3 ^ 0x21de3772;
  uVar4 = (uVar4 << 6 | uVar3 >> 0x3a) ^ (uVar4 << 0x1f | uVar3 >> 0x21) ^ uVar4;
  uVar4 = (uVar4 << 0xc | uVar4 >> 0x34) ^ (uVar4 << 0x3e | uVar4 >> 2) ^ uVar4;
  uVar4 = (uVar4 << 0x18 | uVar4 >> 0x28) ^ (uVar4 << 0x3c | uVar4 >> 4) ^ uVar4;
  uVar4 = (uVar4 << 0x30 | uVar4 >> 0x10) ^ (uVar4 << 0x38 | uVar4 >> 8) ^ uVar4;
  uVar4 = (uVar4 << 0x30 | uVar4 >> 0x10) ^ (uVar4 << 0x20 | uVar4 >> 0x20) ^ uVar4;
  uVar3 = uVar4 << 0x20 | uVar4 >> 0x20;
  lVar9 = *(int64_t *)(uVar3 + 0x18);
  if (lVar9 != 0) {
    lVar5 = *(int64_t *)(uVar3 + 8) * 0x10;
    if (lVar5 != -0x10) {
      pcVar6 = *(char **)(uVar3 + 0x10) + lVar5;
      pcVar10 = *(char **)(uVar3 + 0x10);
      do {
        auVar12[0] = -(*pcVar10 == '\0');
        auVar12[1] = -(pcVar10[1] == '\0');
        auVar12[2] = -(pcVar10[2] == '\0');
        auVar12[3] = -(pcVar10[3] == '\0');
        auVar12[4] = -(pcVar10[4] == '\0');
        auVar12[5] = -(pcVar10[5] == '\0');
        auVar12[6] = -(pcVar10[6] == '\0');
        auVar12[7] = -(pcVar10[7] == '\0');
        auVar12[8] = -(pcVar10[8] == '\0');
        auVar12[9] = -(pcVar10[9] == '\0');
        auVar12[10] = -(pcVar10[10] == '\0');
        auVar12[0xb] = -(pcVar10[0xb] == '\0');
        auVar12[0xc] = -(pcVar10[0xc] == '\0');
        auVar12[0xd] = -(pcVar10[0xd] == '\0');
        auVar12[0xe] = -(pcVar10[0xe] == '\0');
        auVar12[0xf] = -(pcVar10[0xf] == '\0');
        for (uVar7 = ((uint16_t)((uint16_t)(SUB161(auVar12 >> 7,0) & 1) |
                               (uint16_t)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                               (uint16_t)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                               (uint16_t)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                               (uint16_t)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                               (uint16_t)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                               (uint16_t)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                               (uint16_t)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                               (uint16_t)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                               (uint16_t)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                               (uint16_t)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                               (uint16_t)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                               (uint16_t)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                               (uint16_t)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                               (uint16_t)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                              (uint16_t)(auVar12[0xf] >> 7) << 0xf) ^ 0x7fff) &
                     ((uint32_t)(pcVar10 != pcVar6) << 0xe | 0x3fff); uVar7 != 0;
            uVar7 = uVar7 - 1 & uVar7) {
          uVar1 = 0;
          for (uVar2 = uVar7; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
            uVar1 = uVar1 + 1;
          }
          uVar4 = *(uint64_t *)(lVar9 + (uint64_t)uVar1 * 8);
          if (uVar4 != 0) {
            uVar8 = (uint16_t)((in_stack_00000028 | 1) * 0xb45a);
            (*(code *)((int64_t)(short)(uVar8 << 2 | uVar8 >> 0xe) + 0x7fffa56897b7))
                      ((in_stack_00000028 | 1) * 0x2beff19d,uVar4,uVar4 >> 0x3d ^ uVar4);
          }
        }
        lVar9 = lVar9 + 0x78;
        bVar11 = pcVar10 != pcVar6;
        pcVar10 = pcVar10 + 0x10;
      } while (bVar11);
      if (*(int64_t *)(uVar3 + 0x18) == 0) {
        return;
      }
    }
    (*(code *)((int64_t)(short)((uint16_t)in_stack_00000028 ^ 0x53ff) + 0x7fffa568fb5b))();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5491a90  |  RVA: 0xd21a90  |  Size: 1169 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5491cc2) */
/* WARNING: Removing unreachable block (ram,0x7fffa5491cd2) */

void FUN_7fffa5491a90(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  uint8_t bVar7;
  uint8_t bVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  
  bRam00007fffa47864ec = 0;
  uRam00007fffa4786514 = 0;
  uRam00007fffa478651c = 0;
  uRam00007fffa4786504 = 0;
  uRam00007fffa478650c = 0;
  uRam00007fffa47864f4 = 0;
  uRam00007fffa47864fc = 0;
  _uRam00007fffa478652c = 0;
  uVar1 = rdtsc();
  lVar9 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0xf5bd6e488424a15 + 0xb;
  lVar12 = 0;
  do {
    lVar9 = lVar9 * 0xf5bd6e488424a15 + 0xb;
    lVar10 = lVar9 * 0xf5bd6e488424a15 + 0xb;
    *(char *)(lVar12 + 0x7fffa47864e8) = (char)((uint64_t)lVar9 >> 0x20);
    lVar11 = lVar10 * 0xf5bd6e488424a15 + 0xb;
    lVar9 = lVar11 * 0xf5bd6e488424a15 + 0xb;
    *(char *)(lVar12 + 0x7fffa47864e9) = (char)((uint64_t)lVar10 >> 0x20);
    *(char *)(lVar12 + 0x7fffa47864ea) = (char)((uint64_t)lVar11 >> 0x20);
    *(char *)(lVar12 + 0x7fffa47864eb) = (char)((uint64_t)lVar9 >> 0x20);
    lVar12 = lVar12 + 4;
  } while (lVar12 != 0x50);
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47864ec * 0x2aaaaaab + 0x2aaaaaab) * 6;
  bVar7 = bRam00007fffa4786530;
  lVar9 = (uVar2 >> 0x20) * 8;
  bVar5 = bRam00007fffa478652e;
  bVar8 = bRam00007fffa4786531;
  bVar4 = uRam00007fffa478652c._1_1_;
  bVar3 = (uint8_t)uRam00007fffa478652c;
  bVar6 = bRam00007fffa478652f;
  *(uint8_t *)(lVar9 + 0x7fffa47864fa) = ~bRam00007fffa4786532 << 6 | (uint8_t)~bRam00007fffa4786532 >> 2;
  *(uint8_t *)(lVar9 + 0x7fffa47864f4) = ~bVar3 << 6 | (uint8_t)~bVar3 >> 2;
  bVar3 = bRam00007fffa4786533;
  *(uint8_t *)(lVar9 + 0x7fffa47864f9) = ~bVar8 << 6 | (uint8_t)~bVar8 >> 2;
  *(uint8_t *)(lVar9 + 0x7fffa47864f6) = ~bVar5 << 6 | (uint8_t)~bVar5 >> 2;
  *(uint8_t *)(lVar9 + 0x7fffa47864f8) = ~bVar7 << 6 | (uint8_t)~bVar7 >> 2;
  *(uint8_t *)(lVar9 + 0x7fffa47864f5) = ~bVar4 << 6 | (uint8_t)~bVar4 >> 2;
  *(uint8_t *)(lVar9 + 0x7fffa47864f7) = ~bVar6 << 6 | (uint8_t)~bVar6 >> 2;
  *(uint8_t *)(lVar9 + 0x7fffa47864fb) = ~bVar3 << 6 | (uint8_t)~bVar3 >> 2;
  bRam00007fffa47864ec = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5491f30  |  RVA: 0xd21f30  |  Size: 83 bytes
// Callers  : FUN_7fffa55aec50@0xe3ec50, FUN_7fffa5248a55@0xad8a55, FUN_7fffa51306a1@0x9c06a1, FUN_7fffa5267a20@0xaf7a20
// Callees  : FUN_7fffa54539d0@0xce39d0, FUN_7fffa524fccc@0xadfccc
// ============================================================================
void FUN_7fffa5491f30(int64_t param_1)

{
  int64_t lVar1;
  code *pcVar2;
  int64_t lVar3;
  bool bVar4;
  
  lVar3 = FUN_7fffa54539d0();
  if (param_1 == *(int64_t *)(lVar3 + 0x58)) {
    lVar3 = FUN_7fffa54539d0();
    lVar3 = *(int64_t *)(lVar3 + 0x58);
    while (lVar3 != 0) {
      lVar1 = *(int64_t *)(lVar3 + 8);
      bVar4 = param_1 == lVar3;
      lVar3 = lVar1;
      if (bVar4) {
        lVar3 = FUN_7fffa54539d0();
        *(int64_t *)(lVar3 + 0x58) = lVar1;
        return;
      }
    }
  }
  FUN_7fffa524fccc();
  pcVar2 = (code *)__debugbreak();
  (*pcVar2)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5491f90  |  RVA: 0xd21f90  |  Size: 560 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5491f90(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  bRam00007fffa47bf58a = 0;
  uRam00007fffa47bf5b7 = 0;
  uRam00007fffa47bf5bf = 0;
  uRam00007fffa47bf5a7 = 0;
  uRam00007fffa47bf5af = 0;
  uRam00007fffa47bf597 = 0;
  uRam00007fffa47bf59f = 0;
  uRam00007fffa47bf5c7 = 0;
  uRam00007fffa47bf5de = 0;
  uVar1 = rdtsc();
  lVar3 = 4;
  lVar4 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x183192ca4fc734a;
  while( true ) {
    *(char *)(lVar3 + 0x7fffa47bf57c) = (char)((uint64_t)(lVar4 * 0x2ca4fc734a) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bf57e) = (char)((uint64_t)(lVar4 * 0xe75fb7f2e8) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bf57f) = (char)((uint64_t)(lVar4 * -0x34d72e8ef65590f0) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bf57d) = (char)((uint64_t)(lVar4 * 0x19fd9b9164) >> 0x20);
    if (lVar3 == 0x6c) break;
    lVar3 = lVar3 + 4;
    lVar4 = lVar4 * -0x34d72e8ef65590f0;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47bf58a * 0x24924925 + 0x24924925) * 7;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa47bf597) = 0xffffffffffffffff;
  bRam00007fffa47bf58a = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa54921c0  |  RVA: 0xd221c0  |  Size: 8179 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa54921c0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                     uint64_t *param_5,uint64_t *param_6)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint8_t *pbVar3;
  int64_t lVar4;
  int64_t lVar5;
  char *pcVar6;
  uint8_t bVar7;
  uint16_t uVar8;
  uint8_t bVar9;
  uint8_t bVar10;
  bool bVar11;
  uint8_t uVar12;
  uint8_t bVar13;
  uint8_t bVar14;
  uint8_t bVar15;
  uint8_t bVar16;
  uint8_t bVar17;
  uint8_t bVar18;
  uint8_t bVar19;
  uint8_t bVar20;
  uint8_t bVar21;
  uint8_t bVar22;
  uint8_t bVar23;
  uint8_t bVar24;
  uint8_t bVar25;
  uint8_t bVar26;
  uint8_t bVar27;
  uint8_t bVar28;
  uint8_t bVar29;
  uint8_t bVar30;
  uint8_t bVar31;
  uint8_t bVar32;
  uint8_t bVar33;
  uint8_t bVar34;
  uint8_t bVar35;
  uint8_t bVar36;
  uint32_t uVar37;
  uint32_t uVar38;
  uint32_t uVar39;
  uint32_t uVar40;
  int64_t lVar41;
  uint8_t bVar42;
  uint16_t uVar43;
  int iVar44;
  int iVar45;
  uint32_t uVar46;
  uint32_t uVar47;
  uint64_t uVar48;
  uint8_t bVar49;
  uint64_t uVar50;
  uint64_t *puVar51;
  uint64_t uVar52;
  uint64_t *puVar53;
  uint8_t bVar54;
  uint32_t uVar55;
  uint32_t uVar56;
  int iVar57;
  uint32_t uVar58;
  int64_t lVar59;
  uint8_t bVar60;
  uint8_t bVar61;
  uint8_t bVar62;
  uint64_t uVar63;
  uint64_t uVar64;
  int iVar65;
  int64_t lVar66;
  uint64_t uVar67;
  char cVar68;
  uint8_t bVar69;
  short sVar70;
  uint32_t uVar71;
  uint32_t uVar72;
  uint32_t uVar73;
  uint64_t in_R11;
  uint64_t *puVar74;
  uint64_t uVar75;
  uint32_t uVar76;
  uint32_t uVar77;
  uint64_t *puVar78;
  uint64_t *puVar79;
  int64_t lVar80;
  uint64_t *puVar81;
  uint64_t uVar82;
  uint32_t uVar83;
  uint32_t uVar84;
  uint32_t uVar85;
  uint32_t uVar86;
  int64_t lVar87;
  uint8_t auVar88 [16];
  uint8_t auVar89 [16];
  uint8_t bVar90;
  uint8_t uVar95;
  uint8_t bVar97;
  uint8_t uVar98;
  uint8_t auVar91 [16];
  uint8_t bVar96;
  uint8_t bVar99;
  uint8_t auVar92 [16];
  uint8_t auVar93 [16];
  uint8_t auVar94 [16];
  uint32_t uVar100;
  uint8_t auVar101 [16];
  uint64_t uStack_308;
  uint64_t uStack_2a8;
  uint32_t auStack_278 [66];
  uint64_t *puStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t *puStack_148;
  uint64_t uStack_140;
  uint32_t uStack_134;
  IMAGE_DOS_HEADER *pIStack_130;
  uint64_t uStack_128;
  int iStack_11c;
  uint64_t uStack_118;
  uint64_t *puStack_110;
  uint64_t uStack_108;
  uint32_t uStack_fc;
  uint64_t *puStack_f8;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  
  uVar56 = (uint32_t)in_R11;
  puStack_110 = (uint64_t *)((param_1 << 0x24) + param_1);
  sVar70 = (short)in_R11 + 0x78f9;
  uVar63 = param_4 - 0xa64eff1;
  uVar48 = (uVar63 >> 1 | (uint64_t)((uVar63 & 1) != 0) << 0x3f) ^ uVar63;
  uVar64 = uVar63 * 0x200 | uVar63 >> 0x37;
  uStack_134 = uVar56 | 1;
  uVar52 = *param_5 * -0x30e4432340650000;
  bVar7 = (uint8_t)in_R11;
  uVar63 = uVar64 ^ uVar48;
  if (uStack_134 * 0x6bdc91ea + 0xa95ee9d5 <=
      (-0xf3a79db << (bVar7 & 0x1f) | 0xf0c58625U >> 0x20 - (bVar7 & 0x1f))) {
    uVar63 = uVar48 - uVar64;
  }
  uVar63 = (uVar63 << 0x3e | uVar63 >> 2) ^ (uVar63 << 0x12 | uVar63 >> 0x2e) ^ uVar63;
  uVar63 = (uVar63 << 0x24 | uVar63 >> 0x1c) ^ (uVar63 << 0x3c | uVar63 >> 4) ^ uVar63;
  uVar63 = (uVar63 << 0x38 | uVar63 >> 8) ^ (uVar63 << 8 | uVar63 >> 0x38) ^ uVar63;
  uVar63 = (uVar63 << 0x30 | uVar63 >> 0x10) ^ (uVar63 << 0x10 | uVar63 >> 0x30) ^ uVar63;
  uVar63 = uVar63 << 0x24 ^ uVar63;
  uVar71 = *(uint32_t *)(uVar63 + 0x10c);
  uVar100 = 5;
  if (uVar71 < 5) {
    uVar100 = uVar71;
  }
  iVar65 = 1 << ((uint8_t)uVar100 & 0x1f);
  uVar100 = 1 << (uint64_t)*(uint32_t *)(uVar63 + 0x100);
  iVar44 = 0;
  if ((uint16_t)(sVar70 * 2 | (uint16_t)(sVar70 < 0)) < uVar71) {
    iVar44 = 1 << ((char)uVar71 - 5U & 0x1f);
  }
  uVar48 = uVar52 >> (0x42U - *(char *)(*(uint64_t **)(uVar63 + 0xf8) + 0x21) & 0x3f);
  lVar4 = *(int64_t *)(uVar63 + 8);
  uVar64 = (int64_t)param_5 - lVar4;
  uVar83 = (uint32_t)uVar64;
  uVar71 = *(uint32_t *)(uVar63 + 0x1c);
  uVar84 = uVar83 - uVar100;
  if (uVar83 - uVar71 <= uVar100) {
    uVar84 = uVar71;
  }
  uStack_108 = (uint64_t)*(uint32_t *)(uVar63 + 0x18);
  uVar67 = *(uint64_t *)(uVar63 + 0x60);
  lVar59 = *(int64_t *)(uVar63 + 0x38);
  puStack_148 = *(uint64_t **)(uVar63 + 0xf8);
  lVar80 = *(int64_t *)(uVar63 + 0x70);
  if (*(int *)(uVar63 + 0x28) != 0) {
    uVar84 = uVar71;
  }
  cVar68 = (char)*(uint32_t *)(uVar63 + 0x34);
  if (*(int *)(uVar63 + 300) == 0) {
    uVar71 = *(uint32_t *)(uVar63 + 0x2c);
    uVar52 = (uint64_t)uVar71;
    uVar100 = uVar71 & uVar83;
    if ((uint64_t)(-0x29d657f9 << (bVar7 & 0x1f) | 0xd629a807U >> 0x20 - (bVar7 & 0x1f)) <
        (uint64_t)(int64_t)(int)(uStack_134 * -0x58ca1f5b ^ 0xea9293d6)) {
      uVar100 = uVar83 - uVar71;
    }
    lVar41 = lVar59;
    lVar66 = lVar80;
    if (0x180 < uVar100) {
      if (uVar71 < 0xffffffa0) {
        uVar75 = uVar52 + 0x60;
        do {
          uVar100 = (uint32_t)uVar52;
          uVar50 = (uint64_t)(uVar100 & 7);
          uVar71 = *(uint32_t *)(uVar63 + 0x40 + uVar50 * 4);
          uVar82 = (uint64_t)(uVar71 >> 3 & 0xffffffe0);
          *(int *)(uVar63 + 0x40 + uVar50 * 4) =
               (int)((*(int64_t *)(lVar4 + 8 + uVar52) * -0x30e4432340650000 ^
                     *(uint64_t *)(uVar63 + 0x60)) >> (0x38U - cVar68 & 0x3f));
          uVar52 = uVar52 + 1;
          lVar41 = 0x1f;
          if ((*(uint8_t *)(lVar59 + uVar82) & 0x1f) != 1) {
            lVar41 = 0;
          }
          lVar41 = lVar41 + (uint64_t)(*(uint8_t *)(lVar59 + uVar82) - 1 & 0x1f);
          *(char *)(lVar59 + uVar82) = (char)lVar41;
          *(char *)(lVar59 + uVar82 + lVar41) = (char)uVar71;
          *(uint32_t *)(uVar82 * 4 + lVar80 + lVar41 * 4) = uVar100;
        } while (uVar75 != uVar52);
        lVar41 = *(int64_t *)(uVar63 + 0x38);
        lVar66 = *(int64_t *)(uVar63 + 0x70);
      }
      uVar71 = uVar83 - 0x20;
      uVar52 = (uint64_t)uVar71;
      plVar2 = (int64_t *)(lVar4 + uVar52);
      uVar55 = ((int)(int64_t *)((int64_t)param_5 + 1U) - (int)plVar2) + 1;
      uVar100 = 8;
      if (uVar55 < 8) {
        uVar100 = uVar55;
      }
      uVar55 = 0;
      if (plVar2 <= (int64_t *)((int64_t)param_5 + 1U)) {
        uVar55 = uVar100;
      }
      if (uVar71 < (uVar55 + uVar83) - 0x20) {
        uVar75 = *(uint64_t *)(uVar63 + 0x60);
        iVar45 = 0x38 - *(int *)(uVar63 + 0x34);
        bVar42 = (uint8_t)iVar45;
        if ((uVar55 & 1) != 0) {
          uVar52 = uVar52 + 1;
          *(int *)(uVar63 + 0x40 + (uint64_t)(uVar71 & 7) * 4) =
               (int)((*plVar2 * -0x30e4432340650000 ^ uVar75) >> (bVar42 & 0x3f));
        }
        if (uVar55 != 1) {
          iVar57 = (((uVar55 + (int)param_5) - (int)uVar52) - (int)lVar4) + -0x20;
          do {
            uVar100 = (uint32_t)uVar52;
            *(int *)(uVar63 + 0x40 + (uint64_t)(uVar100 & 7) * 4) =
                 (int)((*(int64_t *)(lVar4 + uVar52) * -0x30e4432340650000 ^ uVar75) >>
                      (bVar42 & 0x3f));
            plVar2 = (int64_t *)(lVar4 + 1 + uVar52);
            uVar52 = uVar52 + 2;
            *(int *)(uVar63 + 0x40 + (uint64_t)(uVar100 + 1 & 7) * 4) =
                 (int)((*plVar2 * -0x30e4432340650000 ^ uVar75) >> iVar45);
            iVar57 = iVar57 + -2;
          } while (iVar57 != 0);
        }
      }
    }
    if (uVar71 < uVar83) {
      lVar5 = *(int64_t *)(uVar63 + 8);
      uVar37 = *(uint32_t *)(uVar63 + 0x34);
      uVar52 = (uint64_t)uVar71;
      while( true ) {
        uVar75 = (uint64_t)((uint32_t)uVar52 & 7);
        uVar71 = *(uint32_t *)(uVar63 + 0x40 + uVar75 * 4);
        *(int *)(uVar63 + 0x40 + uVar75 * 4) =
             (int)((*(int64_t *)(lVar5 + 8 + uVar52) * -0x30e4432340650000 ^
                   *(uint64_t *)(uVar63 + 0x60)) >> (0x38U - (char)uVar37 & 0x3f));
        uVar75 = (uint64_t)(uVar71 >> 3 & 0xffffffe0);
        lVar87 = 0x1f;
        if ((*(uint8_t *)(lVar41 + uVar75) & 0x1f) != 1) {
          lVar87 = 0;
        }
        lVar87 = lVar87 + (uint64_t)(*(uint8_t *)(lVar41 + uVar75) - 1 & 0x1f);
        *(char *)(lVar41 + uVar75) = (char)lVar87;
        *(char *)(lVar41 + uVar75 + lVar87) = (char)uVar71;
        *(uint32_t *)(lVar66 + uVar75 * 4 + lVar87 * 4) = (uint32_t)uVar52;
        if ((uVar64 & 0xffffffff) - 1 == uVar52) break;
        uVar52 = uVar52 + 1;
      }
    }
    if ((uVar56 ^ 0x5900a7b6) + 0x3387b13a <
        (((0x8b4f30a3 - uVar56) * 0x1000000 | 0x8b4f30a3 - uVar56 >> 8) ^ 0x880b35b4)) {
      *(uint32_t *)(uVar63 + 0x2c) = uVar83;
      uVar37 = (uint32_t)
               ((*(int64_t *)(lVar4 + 8 + (uVar64 & 0xffffffff)) * -0x30e4432340650000 ^ uVar67) >>
               (0x38U - cVar68 & 0x3f));
    }
    else {
      *(uint32_t *)(uVar63 + 0x2c) = uVar83;
      uVar37 = (uint32_t)
               ((*(int64_t *)(lVar4 + 8 + (uVar64 & 0xffffffff)) * -0x30e4432340650000 ^ uVar67) >>
               (0x38U - cVar68 & 0x3f));
    }
    uStack_128 = (uint64_t)*(uint32_t *)(uVar63 + 0x40 + (uint64_t)(uVar83 & 7) * 4);
    *(uint32_t *)(uVar63 + 0x40 + (uint64_t)(uVar83 & 7) * 4) = uVar37;
  }
  else {
    *(uint32_t *)(uVar63 + 0x2c) = uVar83;
    uStack_128 = uVar52 * uVar67;
    if ((uVar56 ^ 0x23d28b7c) * 0x97d3085 != 0x2428f50d) {
      uStack_128 = uVar52 ^ uVar67;
    }
    uStack_128 = uStack_128 >> (0x38U - cVar68 & 0x3f);
  }
  *(int *)(uVar63 + 0x68) = *(int *)(uVar63 + 0x68) + (int)uStack_128;
  uVar52 = (uint64_t)((uint32_t)(uStack_128 >> 3) & 0x1fffffe0);
  bVar42 = *(uint8_t *)(lVar59 + uVar52);
  pbVar3 = (uint8_t *)(lVar59 + uVar52);
  bVar10 = *pbVar3;
  bVar69 = pbVar3[1];
  bVar62 = pbVar3[2];
  bVar13 = pbVar3[3];
  bVar14 = pbVar3[4];
  bVar15 = pbVar3[5];
  bVar16 = pbVar3[6];
  bVar17 = pbVar3[7];
  bVar18 = pbVar3[8];
  bVar19 = pbVar3[9];
  bVar54 = pbVar3[10];
  bVar61 = pbVar3[0xb];
  bVar20 = pbVar3[0xc];
  bVar21 = pbVar3[0xd];
  bVar22 = pbVar3[0xe];
  bVar23 = pbVar3[0xf];
  pbVar3 = (uint8_t *)(lVar59 + 0x10 + uVar52);
  bVar9 = *pbVar3;
  bVar49 = pbVar3[1];
  bVar60 = pbVar3[2];
  bVar24 = pbVar3[3];
  bVar25 = pbVar3[4];
  bVar26 = pbVar3[5];
  bVar27 = pbVar3[6];
  bVar28 = pbVar3[7];
  bVar29 = pbVar3[8];
  bVar30 = pbVar3[9];
  bVar31 = pbVar3[10];
  bVar32 = pbVar3[0xb];
  bVar33 = pbVar3[0xc];
  bVar34 = pbVar3[0xd];
  bVar35 = pbVar3[0xe];
  bVar36 = pbVar3[0xf];
  uVar12 = (uint8_t)(uStack_128 >> 0x10);
  uVar98 = (uint8_t)(uStack_128 >> 0x18);
  uVar95 = (uint8_t)(uStack_128 >> 8);
  auVar91._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar98,uVar98),uVar12),CONCAT14(uVar12,(int)uStack_128)) >>
            0x20);
  auVar91[3] = uVar95;
  auVar91[2] = uVar95;
  auVar91[0] = (uint8_t)uStack_128;
  auVar91[1] = auVar91[0];
  auVar91._8_8_ = 0;
  auVar91 = pshuflw(auVar91,auVar91,0);
  bVar90 = auVar91[0];
  bVar96 = auVar91[1];
  bVar97 = auVar91[2];
  bVar99 = auVar91[3];
  if ((uint64_t)~(uStack_134 * -0x75a898d2) == 0xfffffffff9355747) {
    auVar94[0] = -((uint8_t)((bVar90 < bVar10) * bVar90 | (bVar90 >= bVar10) * bVar10) == bVar10);
    auVar94[1] = -((uint8_t)((bVar96 < bVar69) * bVar96 | (bVar96 >= bVar69) * bVar69) == bVar69);
    auVar94[2] = -((uint8_t)((bVar97 < bVar62) * bVar97 | (bVar97 >= bVar62) * bVar62) == bVar62);
    auVar94[3] = -((uint8_t)((bVar99 < bVar13) * bVar99 | (bVar99 >= bVar13) * bVar13) == bVar13);
    auVar94[4] = -((uint8_t)((bVar90 < bVar14) * bVar90 | (bVar90 >= bVar14) * bVar14) == bVar14);
    auVar94[5] = -((uint8_t)((bVar96 < bVar15) * bVar96 | (bVar96 >= bVar15) * bVar15) == bVar15);
    auVar94[6] = -((uint8_t)((bVar97 < bVar16) * bVar97 | (bVar97 >= bVar16) * bVar16) == bVar16);
    auVar94[7] = -((uint8_t)((bVar99 < bVar17) * bVar99 | (bVar99 >= bVar17) * bVar17) == bVar17);
    auVar94[8] = -((uint8_t)((bVar90 < bVar18) * bVar90 | (bVar90 >= bVar18) * bVar18) == bVar18);
    auVar94[9] = -((uint8_t)((bVar96 < bVar19) * bVar96 | (bVar96 >= bVar19) * bVar19) == bVar19);
    auVar94[10] = -((uint8_t)((bVar97 < bVar54) * bVar97 | (bVar97 >= bVar54) * bVar54) == bVar54);
    auVar94[0xb] = -((uint8_t)((bVar99 < bVar61) * bVar99 | (bVar99 >= bVar61) * bVar61) == bVar61);
    auVar94[0xc] = -((uint8_t)((bVar90 < bVar20) * bVar90 | (bVar90 >= bVar20) * bVar20) == bVar20);
    auVar94[0xd] = -((uint8_t)((bVar96 < bVar21) * bVar96 | (bVar96 >= bVar21) * bVar21) == bVar21);
    auVar94[0xe] = -((uint8_t)((bVar97 < bVar22) * bVar97 | (bVar97 >= bVar22) * bVar22) == bVar22);
    auVar94[0xf] = -((uint8_t)((bVar99 < bVar23) * bVar99 | (bVar99 >= bVar23) * bVar23) == bVar23);
    uVar55 = (uint16_t)((uint16_t)(SUB161(auVar94 >> 7,0) & 1) |
                      (uint16_t)(SUB161(auVar94 >> 0xf,0) & 1) << 1 |
                      (uint16_t)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
                      (uint16_t)(SUB161(auVar94 >> 0x1f,0) & 1) << 3 |
                      (uint16_t)(SUB161(auVar94 >> 0x27,0) & 1) << 4 |
                      (uint16_t)(SUB161(auVar94 >> 0x2f,0) & 1) << 5 |
                      (uint16_t)(SUB161(auVar94 >> 0x37,0) & 1) << 6 |
                      (uint16_t)(SUB161(auVar94 >> 0x3f,0) & 1) << 7 |
                      (uint16_t)(SUB161(auVar94 >> 0x47,0) & 1) << 8 |
                      (uint16_t)(SUB161(auVar94 >> 0x4f,0) & 1) << 9 |
                      (uint16_t)(SUB161(auVar94 >> 0x57,0) & 1) << 10 |
                      (uint16_t)(SUB161(auVar94 >> 0x5f,0) & 1) << 0xb |
                      (uint16_t)(SUB161(auVar94 >> 0x67,0) & 1) << 0xc |
                      (uint16_t)(SUB161(auVar94 >> 0x6f,0) & 1) << 0xd |
                      (uint16_t)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe |
                     (uint16_t)(auVar94[0xf] >> 7) << 0xf) ^ 0xffff;
    bVar69 = (uint8_t)(uVar55 >> 0xf);
    bVar61 = (uint8_t)uVar55;
    auVar92[0] = -((uint8_t)((bVar9 < bVar90) * bVar9 | (bVar9 >= bVar90) * bVar90) == bVar9);
    auVar92[1] = -((uint8_t)((bVar49 < bVar96) * bVar49 | (bVar49 >= bVar96) * bVar96) == bVar49);
    auVar92[2] = -((uint8_t)((bVar60 < bVar97) * bVar60 | (bVar60 >= bVar97) * bVar97) == bVar60);
    auVar92[3] = -((uint8_t)((bVar24 < bVar99) * bVar24 | (bVar24 >= bVar99) * bVar99) == bVar24);
    auVar92[4] = -((uint8_t)((bVar25 < bVar90) * bVar25 | (bVar25 >= bVar90) * bVar90) == bVar25);
    auVar92[5] = -((uint8_t)((bVar26 < bVar96) * bVar26 | (bVar26 >= bVar96) * bVar96) == bVar26);
    auVar92[6] = -((uint8_t)((bVar27 < bVar97) * bVar27 | (bVar27 >= bVar97) * bVar97) == bVar27);
    auVar92[7] = -((uint8_t)((bVar28 < bVar99) * bVar28 | (bVar28 >= bVar99) * bVar99) == bVar28);
    auVar92[8] = -((uint8_t)((bVar29 < bVar90) * bVar29 | (bVar29 >= bVar90) * bVar90) == bVar29);
    auVar92[9] = -((uint8_t)((bVar30 < bVar96) * bVar30 | (bVar30 >= bVar96) * bVar96) == bVar30);
    auVar92[10] = -((uint8_t)((bVar31 < bVar97) * bVar31 | (bVar31 >= bVar97) * bVar97) == bVar31);
    auVar92[0xb] = -((uint8_t)((bVar32 < bVar99) * bVar32 | (bVar32 >= bVar99) * bVar99) == bVar32);
    auVar92[0xc] = -((uint8_t)((bVar33 < bVar90) * bVar33 | (bVar33 >= bVar90) * bVar90) == bVar33);
    auVar92[0xd] = -((uint8_t)((bVar34 < bVar96) * bVar34 | (bVar34 >= bVar96) * bVar96) == bVar34);
    auVar92[0xe] = -((uint8_t)((bVar35 < bVar97) * bVar35 | (bVar35 >= bVar97) * bVar97) == bVar35);
    auVar92[0xf] = -((uint8_t)((bVar36 < bVar99) * bVar36 | (bVar36 >= bVar99) * bVar99) == bVar36);
    uVar100 = (uint16_t)((uint16_t)(SUB161(auVar92 >> 7,0) & 1) |
                       (uint16_t)(SUB161(auVar92 >> 0xf,0) & 1) << 1 |
                       (uint16_t)(SUB161(auVar92 >> 0x17,0) & 1) << 2 |
                       (uint16_t)(SUB161(auVar92 >> 0x1f,0) & 1) << 3 |
                       (uint16_t)(SUB161(auVar92 >> 0x27,0) & 1) << 4 |
                       (uint16_t)(SUB161(auVar92 >> 0x2f,0) & 1) << 5 |
                       (uint16_t)(SUB161(auVar92 >> 0x37,0) & 1) << 6 |
                       (uint16_t)(SUB161(auVar92 >> 0x3f,0) & 1) << 7 |
                       (uint16_t)(SUB161(auVar92 >> 0x47,0) & 1) << 8 |
                       (uint16_t)(SUB161(auVar92 >> 0x4f,0) & 1) << 9 |
                       (uint16_t)(SUB161(auVar92 >> 0x57,0) & 1) << 10 |
                       (uint16_t)(SUB161(auVar92 >> 0x5f,0) & 1) << 0xb |
                       (uint16_t)(SUB161(auVar92 >> 0x67,0) & 1) << 0xc |
                       (uint16_t)(SUB161(auVar92 >> 0x6f,0) & 1) << 0xd |
                       (uint16_t)(SUB161(auVar92 >> 0x77,0) & 1) << 0xe |
                      (uint16_t)(auVar92[0xf] >> 7) << 0xf) ^ 0xffff;
    bVar49 = (uint8_t)(uVar100 >> 0xf);
    bVar60 = (uint8_t)uVar100;
    bVar10 = (uint8_t)(uVar55 >> 0xe);
    uStack_ec = uVar55 >> 0xd & 1;
    bVar19 = (uint8_t)(uVar55 >> 0xc);
    bVar18 = (uint8_t)(uVar55 >> 0xb);
    bVar17 = (uint8_t)(uVar55 >> 10);
    bVar16 = (uint8_t)(uVar55 >> 9);
    bVar54 = (uint8_t)(uVar55 >> 8);
    bVar9 = (uint8_t)(uVar100 >> 0xe);
    uVar71 = uVar100 >> 0xd;
    bVar13 = (uint8_t)(uVar100 >> 0xc);
    bVar14 = (uint8_t)(uVar100 >> 0xb);
    bVar15 = (uint8_t)(uVar100 >> 10);
    bVar62 = (uint8_t)(uVar100 >> 9);
    uStack_fc = uVar100 >> 8 & 1;
  }
  else {
    auVar101[0] = -(bVar9 == bVar90);
    auVar101[1] = -(bVar49 == bVar96);
    auVar101[2] = -(bVar60 == bVar97);
    auVar101[3] = -(bVar24 == bVar99);
    auVar101[4] = -(bVar25 == bVar90);
    auVar101[5] = -(bVar26 == bVar96);
    auVar101[6] = -(bVar27 == bVar97);
    auVar101[7] = -(bVar28 == bVar99);
    auVar101[8] = -(bVar29 == bVar90);
    auVar101[9] = -(bVar30 == bVar96);
    auVar101[10] = -(bVar31 == bVar97);
    auVar101[0xb] = -(bVar32 == bVar99);
    auVar101[0xc] = -(bVar33 == bVar90);
    auVar101[0xd] = -(bVar34 == bVar96);
    auVar101[0xe] = -(bVar35 == bVar97);
    auVar101[0xf] = -(bVar36 == bVar99);
    bVar60 = SUB161(auVar101 >> 7,0) & 1 | (SUB161(auVar101 >> 0xf,0) & 1) << 1 |
             (SUB161(auVar101 >> 0x17,0) & 1) << 2 | (SUB161(auVar101 >> 0x1f,0) & 1) << 3 |
             (SUB161(auVar101 >> 0x27,0) & 1) << 4 | (SUB161(auVar101 >> 0x2f,0) & 1) << 5 |
             (SUB161(auVar101 >> 0x37,0) & 1) << 6 | SUB161(auVar101 >> 0x3f,0) << 7;
    bVar9 = SUB161(auVar101 >> 0x77,0) & 1;
    bVar49 = auVar101[0xf] >> 7;
    auVar88[0] = -(bVar10 == bVar90);
    auVar88[1] = -(bVar69 == bVar96);
    auVar88[2] = -(bVar62 == bVar97);
    auVar88[3] = -(bVar13 == bVar99);
    auVar88[4] = -(bVar14 == bVar90);
    auVar88[5] = -(bVar15 == bVar96);
    auVar88[6] = -(bVar16 == bVar97);
    auVar88[7] = -(bVar17 == bVar99);
    auVar88[8] = -(bVar18 == bVar90);
    auVar88[9] = -(bVar19 == bVar96);
    auVar88[10] = -(bVar54 == bVar97);
    auVar88[0xb] = -(bVar61 == bVar99);
    auVar88[0xc] = -(bVar20 == bVar90);
    auVar88[0xd] = -(bVar21 == bVar96);
    auVar88[0xe] = -(bVar22 == bVar97);
    auVar88[0xf] = -(bVar23 == bVar99);
    uVar43 = (uint16_t)(SUB161(auVar88 >> 7,0) & 1) | (uint16_t)(SUB161(auVar88 >> 0xf,0) & 1) << 1 |
             (uint16_t)(SUB161(auVar88 >> 0x17,0) & 1) << 2 |
             (uint16_t)(SUB161(auVar88 >> 0x1f,0) & 1) << 3 |
             (uint16_t)(SUB161(auVar88 >> 0x27,0) & 1) << 4 |
             (uint16_t)(SUB161(auVar88 >> 0x2f,0) & 1) << 5 |
             (uint16_t)(SUB161(auVar88 >> 0x37,0) & 1) << 6 |
             (uint16_t)(SUB161(auVar88 >> 0x3f,0) & 1) << 7;
    uVar8 = uVar43 | (uint16_t)(SUB161(auVar88 >> 0x47,0) & 1) << 8 |
            (uint16_t)(SUB161(auVar88 >> 0x4f,0) & 1) << 9 |
            (uint16_t)(SUB161(auVar88 >> 0x57,0) & 1) << 10 |
            (uint16_t)(SUB161(auVar88 >> 0x5f,0) & 1) << 0xb |
            (uint16_t)(SUB161(auVar88 >> 0x67,0) & 1) << 0xc;
    bVar10 = SUB161(auVar88 >> 0x77,0) & 1;
    bVar69 = auVar88[0xf] >> 7;
    bVar61 = (uint8_t)uVar43;
    uVar71 = (uint32_t)(SUB161(auVar101 >> 0x6f,0) & 1);
    bVar13 = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar101 >> 0x67,0) & 1) << 0xc) >> 0xc);
    bVar14 = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar101 >> 0x5f,0) & 1) << 0xb) >> 0xb);
    bVar15 = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar101 >> 0x57,0) & 1) << 10) >> 10);
    bVar62 = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar101 >> 0x4f,0) & 1) << 9) >> 9);
    uStack_fc = (uint32_t)(SUB161(auVar101 >> 0x47,0) & 1);
    uVar55 = (uint32_t)uVar8;
    bVar54 = (uint8_t)(uVar8 >> 8);
    bVar16 = bVar54 >> 1;
    bVar17 = bVar54 >> 2;
    bVar18 = bVar54 >> 3;
    bVar19 = bVar54 >> 4;
    uStack_ec = (uint32_t)(SUB161(auVar88 >> 0x6f,0) & 1);
  }
  uStack_160 = CONCAT44(uStack_160._4_4_,uVar71) & 0xffffffffffffff01;
  lVar80 = lVar80 + uVar52 * 4;
  auVar93[0] = (uint8_t)uVar55;
  auVar93[1] = (char)((uVar55 & 2) >> 1);
  auVar93[3] = (char)((uVar55 & 8) >> 3);
  auVar93[2] = (char)((uVar55 & 4) >> 2);
  auVar93[5] = (char)((uVar55 & 0x20) >> 5);
  auVar93[4] = (char)((uVar55 & 0x10) >> 4);
  auVar93[7] = bVar61 >> 7;
  auVar93[6] = (char)((uVar55 & 0x40) >> 6);
  auVar93._8_8_ =
       CONCAT44(CONCAT22(CONCAT11(bVar69,bVar10),CONCAT11((uint8_t)uStack_ec,bVar19)),
                CONCAT22(CONCAT11(bVar18,bVar17),CONCAT11(bVar16,bVar54))) & 0xff01ff0101010101;
  auVar94 = psllw(auVar93,7);
  auVar89._0_8_ =
       CONCAT44(CONCAT22(CONCAT11(bVar60 >> 7,bVar60 >> 6),CONCAT11(bVar60 >> 5,bVar60 >> 4)),
                CONCAT22(CONCAT11(bVar60 >> 3,bVar60 >> 2),CONCAT11(bVar60 >> 1,bVar60))) &
       0xff01010101010101;
  auVar89._8_8_ =
       CONCAT44(CONCAT22(CONCAT11(bVar49,bVar9),CONCAT11((uint8_t)uStack_160,bVar13)),
                CONCAT22(CONCAT11(bVar14,bVar15),CONCAT11(bVar62,(uint8_t)uStack_fc))) &
       0xff01ff01010101ff;
  auVar91 = psllw(auVar89,7);
  uVar71 = CONCAT22((uint16_t)(SUB161(auVar91 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar91 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar91 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar91 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar91 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar91 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar91 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar91 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar91 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar91 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar91 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar91 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar91 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar91 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar91 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(uint8_t)(auVar91[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar94 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar94 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar94 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar94 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar94 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar94 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar94 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar94 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar94 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar94 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar94 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar94 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar94 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(uint8_t)(auVar94[0xf] >> 7) << 0xf);
  uStack_118 = in_R11;
  if (uVar71 == 0) {
    uStack_2a8 = 0;
  }
  else {
    uVar64 = (uint64_t)(uVar71 >> (bVar42 & 0x1f) | uVar71 << 0x20 - (bVar42 & 0x1f));
    uStack_2a8 = 0;
    do {
      iVar45 = 0;
      for (uVar67 = uVar64; (uVar67 & 1) == 0; uVar67 = uVar67 >> 1 | 0x8000000000000000) {
        iVar45 = iVar45 + 1;
      }
      uVar71 = iVar45 + (uint32_t)bVar42 & 0x1f;
      if (uVar71 != 0) {
        uVar71 = *(uint32_t *)(lVar80 + (uint64_t)uVar71 * 4);
        if (uVar71 < uVar84) break;
        auStack_278[uStack_2a8] = uVar71;
        uStack_2a8 = uStack_2a8 + 1;
        iVar65 = iVar65 + -1;
      }
      uVar71 = 0x4897b215U >> (bVar7 & 0x1f) | 0x4897b215 << 0x20 - (bVar7 & 0x1f);
      uVar64 = uVar64 & (uVar64 + (uint64_t)(uVar56 + 0x84e995a7 < (uVar71 << 2 | uVar71 >> 0x1e))
                                  * 2) - 1;
    } while (uVar64 != 0 && iVar65 != 0);
  }
  iStack_11c = iVar65;
  lVar41 = 0x1f;
  if ((bVar42 & 0x1f) != 1) {
    lVar41 = 0;
  }
  lVar41 = lVar41 + (uint64_t)(bVar42 - 1 & 0x1f);
  *(uint8_t *)(lVar59 + uVar52) = (char)lVar41;
  ((uint8_t *)(lVar59 + uVar52))[lVar41] = (char)uStack_128;
  uVar71 = *(uint32_t *)(uVar63 + 0x2c);
  *(uint32_t *)(uVar63 + 0x2c) = uVar71 + 1;
  *(uint32_t *)(lVar80 + lVar41 * 4) = uVar71;
  uVar63 = 3;
  uVar100 = uVar56;
  if (uStack_2a8 != (uint16_t)(0 << (bVar7 & 0xf) | 0U >> 0x10 - (bVar7 & 0xf))) {
    puStack_170 = (uint64_t *)((int64_t)puStack_110 - 1U);
    puStack_f8 = (uint64_t *)((int64_t)puStack_110 - 3U);
    uVar63 = 3;
    uStack_308 = 0;
    uStack_140 = (uint64_t)uVar71;
    do {
      uVar100 = auStack_278[uStack_308];
      puVar78 = (uint64_t *)((uint64_t)uVar100 + lVar4);
      if (*(int *)((uVar63 - 3) + (int64_t)puVar78) == *(int *)((int64_t)param_5 + (uVar63 - 3)))
      {
        puVar51 = param_5;
        if (param_5 < (uint64_t *)((int64_t)puStack_110 - 7U)) {
          if (*puVar78 == *param_5) {
            lVar80 = 8;
LAB_7fffa5493820:
            puVar51 = (uint64_t *)(lVar80 + (int64_t)param_5);
            if (puVar51 < (uint64_t *)((int64_t)puStack_110 - 7U)) {
              if (*(uint64_t *)((int64_t)puVar78 + lVar80) == *puVar51) goto code_r0x7fffa5493839;
              uVar84 = 0;
              for (uVar52 = *(uint64_t *)((int64_t)puVar78 + lVar80) ^ *puVar51; (uVar52 & 1) == 0
                  ; uVar52 = uVar52 >> 1 | 0x8000000000000000) {
                uVar84 = uVar84 + 1;
              }
              uVar52 = (uint64_t)(uVar84 >> 3) + lVar80;
              goto joined_r0x7fffa54938ed;
            }
            puVar78 = (uint64_t *)((int64_t)puVar78 + lVar80);
            goto joined_r0x7fffa5493863;
          }
          uVar84 = 0;
          for (uVar52 = *param_5 ^ *puVar78; (uVar52 & 1) == 0;
              uVar52 = uVar52 >> 1 | 0x8000000000000000) {
            uVar84 = uVar84 + 1;
          }
          uVar52 = (uint64_t)(uVar84 >> 3);
        }
        else {
joined_r0x7fffa5493863:
          if ((puVar51 < (uint64_t *)((int64_t)puStack_110 - 3U)) &&
             ((int)*puVar78 == (int)*puVar51)) {
            puVar51 = (uint64_t *)((int64_t)puVar51 + 4);
            puVar78 = (uint64_t *)((int64_t)puVar78 + 4);
          }
          if ((puVar51 < (uint64_t *)((int64_t)puStack_110 - 1U)) &&
             ((short)*puVar78 == (short)*puVar51)) {
            puVar51 = (uint64_t *)((int64_t)puVar51 + 2);
            puVar78 = (uint64_t *)((int64_t)puVar78 + 2);
          }
          if (puVar51 < puStack_110) {
            puVar51 = (uint64_t *)
                      ((int64_t)puVar51 + (uint64_t)((char)*puVar78 == (char)*puVar51));
          }
          uVar52 = (int64_t)puVar51 - (int64_t)param_5;
        }
joined_r0x7fffa54938ed:
        if (uVar63 < uVar52) {
          uVar40 = (uint32_t)in_R11;
          uVar58 = uVar83 | 3;
          uVar77 = uVar83 ^ 0xfffffffc;
          uStack_150 = 0x73f95a14d75d601f;
          uStack_168 = (int64_t)(int)(uStack_134 * 0x414aaf06);
          uStack_f0 = uVar83 & 0xfffffffc;
          uVar55 = ~uVar100;
          uStack_ec = uVar77 ^ uVar100;
          uStack_fc = uVar83 & 3 | uVar100;
          uVar72 = ~uVar83;
          uVar73 = uVar72 & 0xfffffffc;
          uVar84 = uVar72 * -4;
          if ((uint64_t)((uVar40 ^ 0x5e0197ef) + 0x66391ef4) <=
              (uint64_t)(int64_t)(int)(0x75e7cc37 - uVar40)) {
            uVar84 = uVar73;
          }
          pIStack_130 = &IMAGE_DOS_HEADER_7fffa4770000;
          uStack_128 = (uint64_t)(uStack_134 * 0x36c64ec);
          uVar76 = uVar55;
          if (((0xc00070b - uVar40) * 0x10 | 0xc00070b - uVar40 >> 0x1c) < 0x6eb520b1) {
            uVar76 = uVar100;
          }
          uVar85 = (uVar55 | uStack_f0) - uVar71;
          uStack_158 = (uint64_t)uVar85;
          uVar38 = 0xfffffffb - uVar83;
          if ((uVar40 ^ 0x44d20370) * 0x7d402cfd <
              (uStack_134 * 0x36620000 | uStack_134 * -0x27a9c99e >> 0x10)) {
            uVar38 = uVar73;
          }
          iVar45 = (uVar38 & ~(uVar71 | uVar100)) * 0x8a1;
          uStack_160 = CONCAT44(uStack_160._4_4_,iVar45);
          bVar7 = (uint8_t)uStack_118 & 0x1f;
          uVar40 = uVar55 ^ uVar58;
          if ((int64_t)(uint64_t)(0x8600000 << bVar7 | 0x8600000U >> 0x20 - bVar7) <=
              (int64_t)
              (int)((0x24d04c87 - (uint32_t)uStack_118 >> 1 |
                    (uint32_t)((0x24d04c87 - (uint32_t)uStack_118 & 1) != 0) << 0x1f) + 0x5d765ec0)) {
            uVar40 = uVar55 + uVar58;
          }
          uVar46 = ~uVar71;
          uVar86 = (uVar100 & uVar46 & uStack_f0) * -0x45549f31;
          uVar38 = (uVar55 | uStack_f0) & uVar71;
          if ((uint64_t)(uStack_134 * 0x36c64ec) <=
              (uint64_t)(int64_t)(int)(uStack_134 * 0x414aaf06)) {
            uVar85 = uVar38;
          }
          uVar47 = uVar46;
          if ((uStack_134 * 0x62360000 | uStack_134 * 0x2b24c46c >> 0x11) + 0x9e59eb0 <
              (0x9c5e5fdb - (uint32_t)uStack_118 ^ 0x1c5e59d4)) {
            uVar47 = uVar71;
          }
          uVar39 = (uVar83 | 0xfffffffc) ^ uVar100;
          if ((uint64_t)
              ((0x1a143644 - (uint32_t)uStack_118) * 0x8000000 | 0x1a143644 - (uint32_t)uStack_118 >> 5) <
              (uint64_t)
              (int64_t)(int)((uVar56 + 0xab718bd7) * 0x400 | uVar56 + 0xab718bd7 >> 0x16)) {
            uVar39 = (uVar83 | 0xfffffffc) & uVar100;
          }
          uVar40 = ((uVar39 ^ uVar71) + (uVar47 & uStack_fc)) * 0x45549f31 +
                   (((uint32_t)uStack_118 + 0xd75d601f) * -0x7859997f + -0x3c42987) *
                   (uVar71 & uVar55 & uVar77) + (uVar40 ^ uVar71) * 0x4554968e +
                   (((uVar72 | 0xfffffffc) ^ uVar55) & uVar71) * -0x4554968f +
                   ((uVar100 | uVar77) ^ uVar71) * 0x30022b11 +
                   uVar38 * 0x1fe538d8 + ((uVar72 | 0xfffffffc | uVar55) ^ uVar71) * 0x8a3 +
                   (uVar73 & uVar71 & uVar55) * -3 + ((uVar77 ^ uVar100) & uVar46) * 0x4554968d +
                   (uVar58 & uVar100 ^ uVar46) * ((uint32_t)uStack_118 ^ 0x3ffff057) +
                   uVar85 * 0x256f6659;
          uVar55 = uVar40 + uVar86;
          if ((((uint32_t)uStack_118 + 0x89e825d7) * 4 | (uint32_t)uStack_118 + 0x89e825d7 >> 0x1e) ==
              0x7dee8235) {
            uVar55 = uVar40 & uVar86;
          }
          *param_6 = (uint64_t)
                     ((uVar77 & uVar46 & uVar76) * 0x45549f32 +
                      uVar55 + (uVar84 & uVar100 & uVar46) * 0x4554968b + iVar45);
          uVar63 = uVar52;
          in_R11 = uStack_118;
          uVar100 = (uint32_t)uStack_118;
          if ((uint64_t *)(uVar52 + (int64_t)param_5) == puStack_110) break;
        }
      }
      uVar100 = (uint32_t)in_R11;
      uStack_308 = uStack_308 + 1;
    } while (uStack_308 != uStack_2a8);
  }
  puVar78 = (uint64_t *)(lVar4 + uStack_108);
  uVar84 = iVar44 + iVar65;
  uVar43 = (uint16_t)uVar100 ^ 0x3401;
  pcVar6 = (char *)*puStack_148;
  lVar4 = puStack_148[1];
  uVar55 = (int)pcVar6 - (int)lVar4;
  uVar56 = *(uint32_t *)(puStack_148[0xe] + 0xc + uVar48 * 0x10);
  uVar71 = uVar55 & (uint32_t)uStack_108;
  if ((uVar100 ^ 0x5e9dbd6) < 0xc8305c57) {
    uVar71 = uVar55 - (uint32_t)uStack_108;
  }
  uVar52 = 0;
  if (uVar84 == (uint16_t)((uVar43 << 3 | uVar43 >> 0xd) + 0x67bf)) {
  }
  else {
    uVar52 = 3;
    if (uVar84 < 3) {
      uVar52 = (uint64_t)uVar84;
    }
    puVar51 = (uint64_t *)((int64_t)puStack_110 - 7);
    puVar1 = (uint64_t *)((int64_t)param_5 + 4);
    uVar64 = 0;
    do {
      uVar56 = *(uint32_t *)(uVar48 * 0x10 + puStack_148[0xe] + uVar64 * 4);
      uVar67 = (uint64_t)uVar56;
      if (uVar67 == 0) {
        return;
      }
      if (*(int *)(lVar4 + uVar67) == (int)*param_5) {
        puVar53 = (uint64_t *)((int *)(lVar4 + uVar67) + 1);
        puVar74 = (uint64_t *)(((int64_t)pcVar6 - (int64_t)puVar53) + (int64_t)puVar1);
        if (puStack_110 <= puVar74) {
          puVar74 = puStack_110;
        }
        puVar79 = puVar53;
        puVar81 = puVar1;
        if (puVar1 < (uint64_t *)((int64_t)puVar74 - 7U)) {
          if (*puVar53 == *puVar1) {
            lVar80 = lVar4 + 0xc + uVar67;
            lVar59 = 0;
            do {
              puVar81 = (uint64_t *)((int64_t)param_5 + lVar59 + 0xc);
              if ((uint64_t *)((int64_t)puVar74 - 7U) <= puVar81) {
                puVar79 = (uint64_t *)(lVar80 + lVar59);
                goto LAB_7fffa5493a70;
              }
              uVar67 = *(uint64_t *)(lVar80 + lVar59);
              lVar59 = lVar59 + 8;
            } while (uVar67 == *puVar81);
            uVar100 = 0;
            for (uVar67 = *puVar81 ^ uVar67; (uVar67 & 1) == 0;
                uVar67 = uVar67 >> 1 | 0x8000000000000000) {
              uVar100 = uVar100 + 1;
            }
            uVar67 = (uint64_t)(uVar100 >> 3) + lVar59;
          }
          else {
            uVar100 = 0;
            for (uVar67 = *puVar1 ^ *puVar53; (uVar67 & 1) == 0;
                uVar67 = uVar67 >> 1 | 0x8000000000000000) {
              uVar100 = uVar100 + 1;
            }
            uVar67 = (uint64_t)(uVar100 >> 3);
          }
        }
        else {
LAB_7fffa5493a70:
          if ((puVar81 < (uint64_t *)((int64_t)puVar74 - 3U)) && ((int)*puVar79 == (int)*puVar81))
          {
            puVar81 = (uint64_t *)((int64_t)puVar81 + 4);
            puVar79 = (uint64_t *)((int64_t)puVar79 + 4);
          }
          if ((puVar81 < (uint64_t *)((int64_t)puVar74 - 1U)) &&
             ((short)*puVar79 == (short)*puVar81)) {
            puVar81 = (uint64_t *)((int64_t)puVar81 + 2);
            puVar79 = (uint64_t *)((int64_t)puVar79 + 2);
          }
          if (puVar81 < puVar74) {
            puVar81 = (uint64_t *)
                      ((int64_t)puVar81 + (uint64_t)((char)*puVar79 == (char)*puVar81));
          }
          uVar67 = (int64_t)puVar81 - (int64_t)puVar1;
        }
        if ((char *)((int64_t)puVar53 + uVar67) == pcVar6) {
          puVar74 = (uint64_t *)(uVar67 + (int64_t)puVar1);
          puVar81 = puVar78;
          puVar53 = puVar74;
          if (puVar74 < puVar51) {
            if (*puVar78 == *puVar74) {
              puVar53 = (uint64_t *)((int64_t)param_5 + uVar67 + 0xc);
              lVar80 = 8;
              if (puVar53 < puVar51) {
LAB_7fffa5493b10:
                if (*(uint64_t *)((int64_t)puVar78 + lVar80) == *puVar53)
                goto code_r0x7fffa5493b28;
                uVar100 = 0;
                for (uVar75 = *puVar53 ^ *(uint64_t *)((int64_t)puVar78 + lVar80);
                    (uVar75 & 1) == 0; uVar75 = uVar75 >> 1 | 0x8000000000000000) {
                  uVar100 = uVar100 + 1;
                }
                uVar75 = (uint64_t)(uVar100 >> 3) + lVar80;
                goto LAB_7fffa5493c12;
              }
LAB_7fffa5493b37:
              puVar81 = (uint64_t *)(lVar80 + (int64_t)puVar78);
              goto LAB_7fffa5493b3f;
            }
            uVar100 = 0;
            for (uVar75 = *puVar74 ^ *puVar78; (uVar75 & 1) == 0;
                uVar75 = uVar75 >> 1 | 0x8000000000000000) {
              uVar100 = uVar100 + 1;
            }
            uVar75 = (uint64_t)(uVar100 >> 3);
          }
          else {
LAB_7fffa5493b3f:
            bVar7 = (uint8_t)uStack_118 & 0x1f;
            if ((((uint32_t)uStack_118 ^ 0x10114a79) <
                 (-0x10495bf8 << bVar7 | 0xefb6a408U >> 0x20 - bVar7) !=
                 puVar53 < (uint64_t *)((int64_t)puStack_110 - 3U)) &&
               ((int)*puVar81 == (int)*puVar53)) {
              puVar53 = (uint64_t *)((int64_t)puVar53 + 4);
              puVar81 = (uint64_t *)((int64_t)puVar81 + 4);
            }
            if ((puVar53 < (uint64_t *)((int64_t)puStack_110 - 1U)) &&
               ((short)*puVar81 == (short)*puVar53)) {
              puVar81 = (uint64_t *)((int64_t)puVar81 + 2);
              puVar53 = (uint64_t *)((int64_t)puVar53 + 2);
            }
            if (puVar53 < puStack_110) {
              puVar53 = (uint64_t *)
                        ((int64_t)puVar53 + (uint64_t)((char)*puVar81 == (char)*puVar53));
            }
            uVar75 = (int64_t)puVar53 - (int64_t)puVar74;
          }
LAB_7fffa5493c12:
          uVar67 = uVar67 + uVar75;
        }
        uVar67 = uVar67 + 4;
        if (uVar63 < uVar67) {
          *param_6 = (uint64_t)((uVar83 + 3 + uVar71) - uVar56);
          uVar63 = uVar67;
          if ((uint64_t *)(uVar67 + (int64_t)param_5) == puStack_110) {
            return;
          }
        }
      }
      uVar64 = uVar64 + 1;
    } while (uVar64 != uVar52);
    uVar56 = *(uint32_t *)(puStack_148[0xe] + (uVar48 << 2 | 3) * 4);
    uVar100 = (uint32_t)uStack_118;
  }
  uVar84 = uVar84 - (int)uVar52;
  if ((uVar56 & 0xff) <= uVar84) {
    uVar84 = uVar56 & 0xff;
  }
  if (uVar84 != (uVar100 - 0x709 & 0xffff)) {
    if (7 < uVar84) {
      uVar48 = 0;
      do {
        uVar48 = uVar48 + 8;
      } while ((uVar84 & 0xf8) != uVar48);
    }
    if ((uint64_t)(uVar84 & 7) != 0) {
      uVar48 = 0;
      do {
        uVar48 = uVar48 + 1;
      } while ((uVar84 & 7) != uVar48);
    }
    puVar51 = (uint64_t *)((int64_t)param_5 + 4);
    uVar48 = (uint64_t)(uVar56 >> 8);
    puVar1 = (uint64_t *)((int64_t)puStack_110 - 7);
    iVar44 = (int)*param_5;
    uVar56 = 0;
    do {
      uVar100 = *(uint32_t *)(puStack_148[0x10] + uVar48 * 4);
      if (*(int *)(lVar4 + (uint64_t)uVar100) == iVar44) {
        lVar80 = lVar4 + (uint64_t)uVar100;
        puVar74 = (uint64_t *)(lVar80 + 4);
        puVar53 = (uint64_t *)(((int64_t)pcVar6 - (int64_t)puVar74) + (int64_t)puVar51);
        if (puStack_110 <= puVar53) {
          puVar53 = puStack_110;
        }
        puVar81 = puVar51;
        puVar79 = puVar74;
        if (puVar51 < (uint64_t *)((int64_t)puVar53 - 7U)) {
          uVar52 = *puVar74;
          uVar64 = *puVar51;
          bVar11 = (int64_t)uVar52 <= (int64_t)uVar64;
          if ((uint32_t)uStack_118 + 0x430a0d4a < ((uint32_t)uStack_118 ^ 0x50d98faf) * -0x7fb94429) {
            bVar11 = uVar52 == uVar64;
          }
          if (bVar11) {
            lVar59 = 0xc;
LAB_7fffa5493f40:
            puVar81 = (uint64_t *)((int64_t)param_5 + lVar59);
            if (puVar81 < (uint64_t *)((int64_t)puVar53 - 7U)) {
              if (*(uint64_t *)(lVar80 + lVar59) == *puVar81) goto code_r0x7fffa5493f69;
              uVar55 = 0;
              for (uVar52 = *puVar81 ^ *(uint64_t *)(lVar80 + lVar59); (uVar52 & 1) == 0;
                  uVar52 = uVar52 >> 1 | 0x8000000000000000) {
                uVar55 = uVar55 + 1;
              }
              uVar52 = ((uint64_t)(uVar55 >> 3) + lVar59) - 4;
              goto LAB_7fffa5493ffb;
            }
            puVar79 = (uint64_t *)(lVar80 + lVar59);
            goto LAB_7fffa5493f97;
          }
          uVar55 = 0;
          for (uVar64 = uVar64 ^ uVar52; (uVar64 & 1) == 0;
              uVar64 = uVar64 >> 1 | 0x8000000000000000) {
            uVar55 = uVar55 + 1;
          }
          uVar52 = (uint64_t)(uVar55 >> 3);
        }
        else {
LAB_7fffa5493f97:
          if ((puVar81 < (uint64_t *)((int64_t)puVar53 - 3U)) && ((int)*puVar79 == (int)*puVar81))
          {
            puVar81 = (uint64_t *)((int64_t)puVar81 + 4);
            puVar79 = (uint64_t *)((int64_t)puVar79 + 4);
          }
          if ((puVar81 < (uint64_t *)((int64_t)puVar53 - 1U)) &&
             ((short)*puVar79 == (short)*puVar81)) {
            puVar79 = (uint64_t *)((int64_t)puVar79 + 2);
            puVar81 = (uint64_t *)((int64_t)puVar81 + 2);
          }
          if (puVar81 < puVar53) {
            puVar81 = (uint64_t *)
                      ((int64_t)puVar81 + (uint64_t)((char)*puVar79 == (char)*puVar81));
          }
          uVar52 = (int64_t)puVar81 - (int64_t)puVar51;
        }
LAB_7fffa5493ffb:
        if ((char *)((int64_t)puVar74 + uVar52) == pcVar6) {
          puVar74 = (uint64_t *)((int64_t)puVar51 + uVar52);
          puVar53 = puVar74;
          puVar81 = puVar78;
          if (puVar74 < puVar1) {
            if (*puVar78 == *puVar74) {
              puVar53 = (uint64_t *)((int64_t)param_5 + uVar52 + 0xc);
              lVar80 = 8;
              if (puVar53 < puVar1) {
LAB_7fffa5494050:
                if (*(uint64_t *)((int64_t)puVar78 + lVar80) == *puVar53)
                goto code_r0x7fffa5494061;
                uVar55 = 0;
                for (uVar64 = *(uint64_t *)((int64_t)puVar78 + lVar80) ^ *puVar53;
                    (uVar64 & 1) == 0; uVar64 = uVar64 >> 1 | 0x8000000000000000) {
                  uVar55 = uVar55 + 1;
                }
                uVar64 = (uint64_t)(uVar55 >> 3) + lVar80;
                goto LAB_7fffa549412c;
              }
LAB_7fffa549406e:
              puVar81 = (uint64_t *)(lVar80 + (int64_t)puVar78);
              goto LAB_7fffa5494071;
            }
            uVar55 = 0;
            for (uVar64 = *puVar74 ^ *puVar78; (uVar64 & 1) == 0;
                uVar64 = uVar64 >> 1 | 0x8000000000000000) {
              uVar55 = uVar55 + 1;
            }
            uVar64 = (uint64_t)(uVar55 >> 3);
          }
          else {
LAB_7fffa5494071:
            if ((puVar53 < (uint64_t *)((int64_t)puStack_110 + -3)) &&
               ((int)*puVar81 == (int)*puVar53)) {
              puVar53 = (uint64_t *)((int64_t)puVar53 + 4);
              puVar81 = (uint64_t *)((int64_t)puVar81 + 4);
            }
            if ((puVar53 < (uint64_t *)((int64_t)puStack_110 - 1U)) &&
               ((short)*puVar81 == (short)*puVar53)) {
              puVar81 = (uint64_t *)((int64_t)puVar81 + 2);
              puVar53 = (uint64_t *)((int64_t)puVar53 + 2);
            }
            if (puVar53 < puStack_110) {
              puVar53 = (uint64_t *)
                        ((int64_t)puVar53 + (uint64_t)((char)*puVar81 == (char)*puVar53));
            }
            uVar64 = (int64_t)puVar53 - (int64_t)puVar74;
          }
LAB_7fffa549412c:
          uVar52 = uVar52 + uVar64;
        }
        uVar52 = uVar52 + 4;
        if (uVar63 < uVar52) {
          *param_6 = (uint64_t)((uVar83 + 3 + uVar71) - uVar100);
          if ((uint64_t *)((int64_t)param_5 + uVar52) == puStack_110) {
            return;
          }
          iVar44 = (int)*param_5;
          uVar63 = uVar52;
        }
      }
      uVar48 = uVar48 + 1;
      uVar56 = uVar56 + 1;
    } while (uVar56 != uVar84);
  }
  return;
code_r0x7fffa5493839:
  lVar80 = lVar80 + 8;
  goto LAB_7fffa5493820;
code_r0x7fffa5493b28:
  puVar53 = puVar53 + 1;
  lVar80 = lVar80 + 8;
  if (puVar51 <= puVar53) goto LAB_7fffa5493b37;
  goto LAB_7fffa5493b10;
code_r0x7fffa5493f69:
  lVar59 = lVar59 + 8;
  goto LAB_7fffa5493f40;
code_r0x7fffa5494061:
  puVar53 = puVar53 + 1;
  lVar80 = lVar80 + 8;
  if (puVar1 <= puVar53) goto LAB_7fffa549406e;
  goto LAB_7fffa5494050;
}


// ============================================================================
// Function : FUN_7fffa54941e0  |  RVA: 0xd241e0  |  Size: 3605 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa54943cf) */
/* WARNING: Removing unreachable block (ram,0x7fffa54942d4) */
/* WARNING: Removing unreachable block (ram,0x7fffa54942a4) */
/* WARNING: Removing unreachable block (ram,0x7fffa5494b67) */
/* WARNING: Removing unreachable block (ram,0x7fffa549477b) */

int64_t FUN_7fffa54941e0(uint64_t param_1,int64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint32_t uVar13;
  int iVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint64_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint64_t *puVar20;
  uint32_t uVar21;
  uint64_t uVar22;
  uint64_t *puVar23;
  uint64_t *puVar24;
  uint64_t uVar25;
  int64_t lVar26;
  int64_t lVar27;
  uint64_t uVar28;
  uint64_t *puVar29;
  uint64_t *puVar30;
  uint32_t uVar31;
  uint64_t *puVar32;
  int iStack_a8;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint32_t uStack_84;
  uint64_t *puStack_80;
  uint64_t *puStack_78;
  uint32_t uStack_6c;
  uint64_t uStack_68;
  uint32_t *puStack_60;
  
  uStack_6c = *(uint32_t *)(param_1 + 0x110);
  uVar13 = 6;
  if (uStack_6c < 6) {
    uVar13 = uStack_6c;
  }
  uStack_84 = 4;
  if (4 < uVar13) {
    uStack_84 = uVar13;
  }
  uVar13 = *(uint32_t *)(param_1 + 0x18);
  uVar4 = *(int64_t *)(param_1 + 8) + (uint64_t)uVar13;
  uVar19 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  puVar20 = (uint64_t *)((uint64_t)((int)param_4 == (int)uVar4) + (int64_t)param_4);
  iVar14 = (int)puVar20 - (int)*(int64_t *)(param_1 + 8);
  uVar15 = iVar14 - uVar19;
  if (iVar14 - uVar13 <= uVar19) {
    uVar15 = uVar13;
  }
  uVar19 = *param_3;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar15 = uVar13;
  }
  uVar13 = param_3[1];
  uVar15 = iVar14 - uVar15;
  uVar21 = uVar19;
  if (uVar15 < uVar19) {
    uVar21 = 0;
  }
  uVar18 = uVar13;
  if (uVar15 < uVar13) {
    uVar18 = 0;
  }
  puVar30 = (uint64_t *)((int64_t)param_4 + param_5);
  puVar23 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  *(uint32_t *)(param_1 + 300) = 0;
  puVar32 = param_4;
  puStack_60 = param_3;
  if (puVar20 < puVar23) {
    puVar1 = puVar30 + -4;
    puVar2 = (uint64_t *)((int64_t)puVar30 - 7);
    puVar3 = (uint64_t *)((int64_t)puVar30 - 3);
    puStack_78 = (uint64_t *)((int64_t)puVar30 + -1);
    puStack_80 = puVar30;
    uStack_68 = param_1;
    do {
      uVar28 = uStack_68;
      puVar12 = puStack_80;
      lVar27 = -(uint64_t)uVar21;
      uVar31 = uVar21;
      if ((*(int *)((int64_t)puVar20 + lVar27 + 1) == *(int *)((int64_t)puVar20 + 1)) &&
         (uVar21 != 0)) {
        puVar12 = (uint64_t *)((int64_t)puVar20 + 5);
        puVar29 = (uint64_t *)((int64_t)puVar20 + lVar27 + 5);
        puVar24 = puVar12;
        if (puVar12 < puVar2) {
          if (*puVar29 == *puVar12) {
            lVar26 = 0;
            do {
              puVar24 = (uint64_t *)((int64_t)puVar20 + lVar26 + 0xd);
              if (puVar2 <= puVar24) {
                puVar29 = (uint64_t *)((int64_t)puVar20 + lVar27 + lVar26 + 0xd);
                puVar24 = (uint64_t *)((int64_t)puVar20 + lVar26 + 0xd);
                goto joined_r0x7fffa549499a;
              }
              uVar28 = *puVar24;
              uVar25 = *(uint64_t *)((int64_t)puVar20 + lVar26 + lVar27 + 0xd);
              lVar26 = lVar26 + 8;
              puVar30 = puStack_80;
            } while (uVar25 == uVar28);
            uVar21 = 0;
            for (uVar25 = uVar25 ^ uVar28; (uVar25 & 1) == 0;
                uVar25 = uVar25 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar25 = (uint64_t)(uVar21 >> 3) + lVar26;
          }
          else {
            uVar21 = 0;
            for (uVar28 = *puVar29 ^ *puVar12; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar25 = (uint64_t)(uVar21 >> 3);
          }
        }
        else {
joined_r0x7fffa549499a:
          if ((puVar24 < puVar3) && ((int)*puVar29 == (int)*puVar24)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
          }
          if ((puVar24 < puStack_78) && ((short)*puVar29 == (short)*puVar24)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
          }
          if (puVar24 < puVar30) {
            puVar24 = (uint64_t *)
                      ((int64_t)puVar24 + (uint64_t)((char)*puVar29 == (char)*puVar24));
          }
          uVar25 = (int64_t)puVar24 - (int64_t)puVar12;
        }
        puVar20 = (uint64_t *)((int64_t)puVar20 + 1);
        uVar25 = uVar25 + 4;
        iStack_a8 = 1;
LAB_7fffa54949fd:
        uVar28 = (int64_t)puVar20 - (int64_t)puVar32;
        puVar12 = (uint64_t *)param_2[3];
        if (puVar1 < puVar20) {
          puVar30 = puVar12;
          if (puVar32 <= puVar1) {
            uVar22 = puVar32[1];
            *puVar12 = *puVar32;
            puVar12[1] = uVar22;
            puVar30 = (uint64_t *)((int64_t)puVar12 + ((int64_t)puVar1 - (int64_t)puVar32));
            if (0x10 < (int64_t)puVar1 - (int64_t)puVar32) {
              lVar27 = 0x10;
              do {
                uVar8 = ((uint64_t *)((int64_t)puVar32 + lVar27))[1];
                *(uint64_t *)((int64_t)puVar12 + lVar27) =
                     *(uint64_t *)((int64_t)puVar32 + lVar27);
                ((uint64_t *)((int64_t)puVar12 + lVar27))[1] = uVar8;
                puVar6 = (uint64_t *)((int64_t)puVar32 + lVar27 + 0x10);
                uVar8 = puVar6[1];
                puVar7 = (uint64_t *)((int64_t)puVar12 + lVar27 + 0x10);
                *puVar7 = *puVar6;
                puVar7[1] = uVar8;
                lVar26 = lVar27 + 0x20;
                lVar27 = lVar27 + 0x20;
              } while ((uint64_t *)((int64_t)puVar12 + lVar26) < puVar30);
            }
            puVar32 = puVar1;
          }
          if (puVar32 < puVar20) {
            uVar22 = (int64_t)puVar20 - (int64_t)puVar32;
            puVar12 = puVar30;
            if ((uint64_t)((int64_t)puVar30 - (int64_t)puVar32) < 0x20 || uVar22 < 4) {
LAB_7fffa5494ab4:
            }
            else {
              param_1 = uStack_68;
              if (uVar22 < 0x20) {
                uVar17 = 0;
              }
              else {
                uVar17 = uVar22 & 0xffffffffffffffe0;
                uVar11 = 0x20;
                while( true ) {
                  puVar6 = (uint64_t *)((int64_t)puVar32 + (uVar11 - 0x20));
                  uVar8 = puVar6[1];
                  puVar7 = (uint64_t *)((int64_t)puVar32 + (uVar11 - 0x10));
                  uVar9 = *puVar7;
                  uVar10 = puVar7[1];
                  puVar7 = (uint64_t *)((int64_t)puVar30 + (uVar11 - 0x20));
                  *puVar7 = *puVar6;
                  puVar7[1] = uVar8;
                  puVar6 = (uint64_t *)((int64_t)puVar30 + (uVar11 - 0x10));
                  *puVar6 = uVar9;
                  puVar6[1] = uVar10;
                  if (uVar17 == uVar11) break;
                  uVar11 = uVar11 + 0x20;
                }
                if (uVar22 == uVar17) goto LAB_7fffa5494cd0;
                if ((uVar22 & 0x1c) == 0) {
                  puVar32 = (uint64_t *)((int64_t)puVar32 + uVar17);
                  puVar12 = (uint64_t *)((int64_t)puVar30 + uVar17);
                  goto LAB_7fffa5494ab4;
                }
              }
              uVar11 = uVar22 & 0xfffffffffffffffc;
              puVar12 = (uint64_t *)((int64_t)puVar30 + uVar11);
              for (; *(uint32_t *)((int64_t)puVar30 + uVar17) =
                          *(uint32_t *)((int64_t)puVar32 + uVar17), uVar11 - 4 != uVar17;
                  uVar17 = uVar17 + 4) {
              }
              if (uVar22 == uVar11) goto LAB_7fffa5494cd0;
              puVar32 = (uint64_t *)((int64_t)puVar32 + uVar11);
            }
            uVar21 = (int)puVar20 - (int)puVar32 & 7;
            uVar22 = (uint64_t)uVar21;
            puVar30 = puVar32;
            puVar24 = puVar32;
            if (uVar21 != 0) {
              do {
                puVar30 = (uint64_t *)((int64_t)puVar24 + 1);
                *(char *)puVar12 = (char)*puVar24;
                puVar12 = (uint64_t *)((int64_t)puVar12 + 1);
                uVar22 = uVar22 - 1;
                puVar24 = puVar30;
              } while (uVar22 != 0);
            }
            if ((uint64_t)((int64_t)puVar32 - (int64_t)puVar20) < 0xfffffffffffffff9) {
              while( true ) {
                *(char *)puVar12 = (char)*puVar30;
                *(uint8_t *)((int64_t)puVar12 + 1) = *(uint8_t *)((int64_t)puVar30 + 1);
                *(uint8_t *)((int64_t)puVar12 + 2) = *(uint8_t *)((int64_t)puVar30 + 2);
                *(uint8_t *)((int64_t)puVar12 + 3) = *(uint8_t *)((int64_t)puVar30 + 3);
                *(uint8_t *)((int64_t)puVar12 + 4) = *(uint8_t *)((int64_t)puVar30 + 4);
                *(uint8_t *)((int64_t)puVar12 + 5) = *(uint8_t *)((int64_t)puVar30 + 5);
                *(uint8_t *)((int64_t)puVar12 + 6) = *(uint8_t *)((int64_t)puVar30 + 6);
                *(uint8_t *)((int64_t)puVar12 + 7) = *(uint8_t *)((int64_t)puVar30 + 7);
                if (puVar30 + 1 == puVar20) break;
                puVar12 = puVar12 + 1;
                puVar30 = puVar30 + 1;
              }
            }
          }
LAB_7fffa5494cd0:
          lVar27 = param_2[1];
          param_2[3] = param_2[3] + uVar28;
          if (0xffff < uVar28) {
            *(uint32_t *)(param_2 + 9) = 1;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar27 - *param_2) >> 3);
          }
          puVar30 = puStack_80;
        }
        else {
          uVar22 = puVar32[1];
          *puVar12 = *puVar32;
          puVar12[1] = uVar22;
          if (0x10 < uVar28) {
            lVar27 = param_2[3];
            uVar22 = puVar32[3];
            *(uint64_t *)(lVar27 + 0x10) = puVar32[2];
            *(uint64_t *)(lVar27 + 0x18) = uVar22;
            if (0x20 < (int64_t)uVar28) {
              lVar26 = 0;
              do {
                puVar7 = (uint64_t *)((int64_t)puVar32 + lVar26 + 0x20);
                uVar8 = puVar7[1];
                puVar6 = (uint64_t *)(lVar27 + 0x20 + lVar26);
                *puVar6 = *puVar7;
                puVar6[1] = uVar8;
                puVar6 = (uint64_t *)((int64_t)puVar32 + lVar26 + 0x30);
                uVar8 = puVar6[1];
                puVar7 = (uint64_t *)(lVar27 + 0x30 + lVar26);
                *puVar7 = *puVar6;
                puVar7[1] = uVar8;
                lVar5 = lVar27 + 0x20 + lVar26;
                lVar26 = lVar26 + 0x20;
              } while (lVar5 + 0x20U < lVar27 + uVar28);
            }
            goto LAB_7fffa5494cd0;
          }
          lVar27 = param_2[1];
          param_2[3] = param_2[3] + uVar28;
        }
        *(short *)(lVar27 + 4) = (short)uVar28;
        *(int *)param_2[1] = iStack_a8;
        if (0xffff < uVar25 - 3) {
          *(uint32_t *)(param_2 + 9) = 2;
          *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
        }
        *(short *)(param_2[1] + 6) = (short)(uVar25 - 3);
        param_2[1] = param_2[1] + 8;
        if (*(int *)(param_1 + 300) != 0) {
          *(uint32_t *)(param_1 + 300) = 0;
        }
        puVar20 = (uint64_t *)((int64_t)puVar20 + uVar25);
        if ((uVar18 == 0) || (puVar23 < puVar20)) {
          puVar32 = puVar20;
          uVar21 = uVar31;
        }
        else {
          uVar16 = uVar18;
          do {
            uVar18 = uVar31;
            if ((int)*puVar20 != *(int *)((int64_t)puVar20 - (uint64_t)uVar16)) {
              puVar32 = puVar20;
              uVar21 = uVar18;
              uVar18 = uVar16;
              break;
            }
            lVar27 = -(uint64_t)uVar16;
            puVar32 = (uint64_t *)((int64_t)puVar20 + 4);
            puVar24 = (uint64_t *)((int64_t)puVar20 + lVar27 + 4);
            puVar12 = puVar32;
            if (puVar32 < puVar2) {
              if (*puVar24 == *puVar32) {
                lVar26 = 0xc;
LAB_7fffa5494e20:
                puVar12 = (uint64_t *)((int64_t)puVar20 + lVar26);
                if (puVar12 < puVar2) {
                  uVar28 = *(uint64_t *)((int64_t)puVar20 + lVar26 + lVar27);
                  if (uVar28 == *puVar12) goto code_r0x7fffa5494e39;
                  uVar21 = 0;
                  for (uVar28 = uVar28 ^ *puVar12; (uVar28 & 1) == 0;
                      uVar28 = uVar28 >> 1 | 0x8000000000000000) {
                    uVar21 = uVar21 + 1;
                  }
                  uVar28 = ((uint64_t)(uVar21 >> 3) + lVar26) - 4;
                  goto joined_r0x7fffa5494ea8;
                }
                puVar24 = (uint64_t *)(lVar27 + (int64_t)puVar12);
                goto joined_r0x7fffa5494e08;
              }
              uVar21 = 0;
              for (uVar28 = *puVar32 ^ *puVar24; (uVar28 & 1) == 0;
                  uVar28 = uVar28 >> 1 | 0x8000000000000000) {
                uVar21 = uVar21 + 1;
              }
              uVar28 = (uint64_t)(uVar21 >> 3);
            }
            else {
joined_r0x7fffa5494e08:
              if ((puVar12 < puVar3) && ((int)*puVar24 == (int)*puVar12)) {
                puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
                puVar12 = (uint64_t *)((int64_t)puVar12 + 4);
              }
              if ((puVar12 < puStack_78) && ((short)*puVar24 == (short)*puVar12)) {
                puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
                puVar12 = (uint64_t *)((int64_t)puVar12 + 2);
              }
              if (puVar12 < puVar30) {
                puVar12 = (uint64_t *)
                          ((int64_t)puVar12 + (uint64_t)((char)*puVar24 == (char)*puVar12));
              }
              uVar28 = (int64_t)puVar12 - (int64_t)puVar32;
            }
joined_r0x7fffa5494ea8:
            if (puVar20 <= puVar1) {
              puVar32 = (uint64_t *)param_2[3];
              uVar25 = puVar20[1];
              *puVar32 = *puVar20;
              puVar32[1] = uVar25;
            }
            *(uint16_t *)(param_2[1] + 4) = 0;
            *(uint32_t *)param_2[1] = 1;
            if (0xffff < uVar28 + 1) {
              *(uint32_t *)(param_2 + 9) = 2;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
            }
            puVar20 = (uint64_t *)((int64_t)puVar20 + uVar28 + 4);
            *(short *)(param_2[1] + 6) = (short)(uVar28 + 1);
            param_2[1] = param_2[1] + 8;
            puVar32 = puVar20;
            uVar21 = uVar16;
            if (uVar18 == 0) {
              break;
            }
            uVar31 = uVar16;
            uVar16 = uVar18;
          } while (puVar20 <= puVar23);
        }
      }
      else {
        uStack_98 = 999999999;
        if (uStack_84 < 6) {
          if (uStack_6c == 5) {
            uVar25 = 0x5296cd25;
            uVar28 = param_1 >> 0x35 ^ param_1;
            FUN_7fffa5194b50((int64_t)puVar20 + 0x4f547d63,
                             (uVar28 << 7 | param_1 >> 0x39) ^ (uVar28 << 0x1c | param_1 >> 0x24) ^
                             uVar28);
            uVar25 = uVar25 ^ 0xffffffffd9381e6c;
          }
          else {
            uStack_90 = 0x40000015;
            uVar25 = (int64_t)puVar20 - 0x71b277e1U ^ 0x5fcc5399;
            uVar25 = uVar25 << 0x31 | uVar25 >> 0xf;
            uVar22 = (~(uint64_t)param_4 | uVar25) * -0xdb4cbaf5 +
                     ((uint64_t)param_4 ^ uVar25) * -0x182e3a35a +
                     ((uint64_t)param_4 | ~uVar25) * 0x7d29c765 +
                     (~(uint64_t)param_4 & uVar25) * 0x2000d6abf +
                     (~uVar25 & (uint64_t)param_4) * 0xa796e865;
            FUN_7fffa4a8a930((uint64_t)puStack_80 ^
                             ((int64_t)puStack_80 << 0xc | (uint64_t)puStack_80 >> 0x34) ^
                             ((int64_t)puStack_80 << 0x36 | (uint64_t)puStack_80 >> 10),uStack_68)
            ;
            uVar25 = uVar22 >> 0x27 ^ uVar22;
            uVar25 = (uVar25 << 0x16 | uVar22 >> 0x2a) ^ (uVar25 << 10 | uVar22 >> 0x36) ^ uVar25;
            uVar25 = (uVar25 << 0x14 | uVar25 >> 0x2c) ^ (uVar25 << 0x2c | uVar25 >> 0x14) ^ uVar25;
            uVar25 = (uVar25 << 0x28 | uVar25 >> 0x18) ^ (uVar25 << 0x18 | uVar25 >> 0x28) ^ uVar25;
            uVar25 = (uVar25 << 0x30 | uVar25 >> 0x10) ^ (uVar25 << 0x10 | uVar25 >> 0x30) ^ uVar25;
            uVar25 = (uVar25 << 0x36 | uVar25 >> 10) ^ (uVar25 << 0x1a | uVar25 >> 0x26) ^ uVar25;
            uVar25 = (uVar25 << 0x34 | uVar25 >> 0xc) ^ (uVar25 << 0x2c | uVar25 >> 0x14) ^ uVar25;
            uVar25 = (uVar25 << 0x18 | uVar25 >> 0x28) ^ (uVar25 << 0x28 | uVar25 >> 0x18) ^ uVar25;
            uVar25 = (uVar25 << 0x30 | uVar25 >> 0x10) ^ (uVar25 << 0x10 | uVar25 >> 0x30) ^ uVar25;
            puVar30 = puVar12;
            param_1 = uVar28;
          }
        }
        else {
          lVar27 = FUN_7fffa5008340((int64_t)&uStack_98 * 0x935015e3,puVar30);
          uVar25 = lVar27 - 0x153598c5;
        }
        if (3 < uVar25) {
          iStack_a8 = (int)uStack_98;
          if (3 < uStack_98) {
            if ((puVar32 < puVar20) && (uVar4 < (int64_t)puVar20 + (3 - uStack_98))) {
              for (lVar27 = 0;
                  *(char *)((int64_t)puVar20 + lVar27 + -1) ==
                  *(char *)((int64_t)puVar20 + lVar27 + (2 - uStack_98)); lVar27 = lVar27 + -1) {
                puVar12 = (uint64_t *)((int64_t)puVar20 + lVar27 + -1);
                if (((int64_t)puVar20 + lVar27 + (2 - uStack_98) <= uVar4) || (puVar12 <= puVar32))
                {
                  uVar25 = (uVar25 - lVar27) + 1;
                  puVar20 = puVar12;
                  goto LAB_7fffa5494f97;
                }
              }
              uVar25 = uVar25 - lVar27;
              puVar20 = (uint64_t *)((int64_t)puVar20 + lVar27);
            }
LAB_7fffa5494f97:
            uVar31 = iStack_a8 - 3;
            uVar18 = uVar21;
          }
          goto LAB_7fffa54949fd;
        }
        uVar28 = (int64_t)puVar20 - (int64_t)puVar32;
        puVar20 = (uint64_t *)((int64_t)puVar20 + (uVar28 >> 8) + 1);
        *(uint32_t *)(param_1 + 300) = (uint32_t)(0x7ff < uVar28);
      }
    } while (puVar20 < puVar23);
  }
  uVar31 = 0;
  if (uVar15 < uVar19) {
    uVar31 = uVar19;
  }
  uVar16 = 0;
  if (uVar15 < uVar13) {
    uVar16 = uVar13;
  }
  uVar13 = uVar16;
  if (uVar21 != 0) {
    uVar13 = uVar19;
    uVar31 = uVar21;
  }
  if (uVar19 <= uVar15) {
    uVar13 = uVar16;
  }
  *puStack_60 = uVar31;
  if (uVar18 != 0) {
    uVar13 = uVar18;
  }
  puStack_60[1] = uVar13;
  return (int64_t)puVar30 - (int64_t)puVar32;
code_r0x7fffa5494e39:
  lVar26 = lVar26 + 8;
  goto LAB_7fffa5494e20;
}


// ============================================================================
// Function : FUN_7fffa5495040  |  RVA: 0xd25040  |  Size: 77 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5495040(void) {
    /* +0xd25040 */ __asm { PUSH RBP }
    /* +0xd25041 */ __asm { PUSH R14 }
    /* +0xd25043 */ __asm { PUSH RBX }
    /* +0xd25044 */ __asm { PUSH R13 }
    /* +0xd25046 */ __asm { PUSH R15 }
    /* +0xd25048 */ __asm { SUB RSP,0x60 }
    /* +0xd2504c */ __asm { MOV R13,RAX }
    /* +0xd2504f */ __asm { MOV word ptr [RSP + 0x42],0x0 }
    /* +0xd25056 */ __asm { MOV dword ptr [RSP + 0x44],0x0 }
    /* +0xd2505e */ __asm { MOV dword ptr [RSP + 0x50],0xd47e1044 }
    /* +0xd25066 */ __asm { MOV ECX,dword ptr [RSP + 0x50] }
    /* +0xd2506a */ __asm { MOV dword ptr [RSP + 0x50],0x7e262690 }
    /* +0xd25072 */ __asm { MOV ECX,dword ptr [RSP + 0x50] }
    /* +0xd25076 */ __asm { CMP ECX,0xca201b76 }
    /* +0xd2507c */ __asm { NOP }
    /* +0xd2507d */ __asm { NOP }
    /* +0xd2507e */ __asm { NOP }
    /* +0xd2507f */ __asm { NOP }
    /* +0xd25080 */ __asm { NOP }
    /* +0xd25081 */ __asm { NOP }
    /* +0xd25082 */ __asm { NOP }
    /* +0xd25083 */ __asm { NOP }
    /* +0xd25084 */ __asm { NOP }
    /* +0xd25085 */ __asm { NOP }
    /* +0xd25086 */ __asm { NOP }
    /* +0xd25087 */ __asm { NOP }
    /* +0xd25088 */ __asm { NOP }
    /* +0xd25089 */ __asm { NOP }
    /* +0xd2508a */ __asm { NOP }
    /* +0xd2508b */ __asm { NOP }
    /* +0xd2508c */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa5495bf0  |  RVA: 0xd25bf0  |  Size: 1539 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa5495bf0(uint64_t param_1)

{
  code *pcVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  int64_t in_RAX;
  uint16_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  uint16_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint16_t *puVar13;
  uint32_t uVar14;
  int64_t in_XMM0_Qa;
  uint64_t uVar15;
  
  uVar3 = (uint32_t)in_RAX;
  uVar14 = (uVar3 + 0x7aab6e12 ^ 0xa07b476) << 2 | uVar3 + 0x7aab6e12 >> 0x1e;
  uVar10 = (-0x6a03cc39547576fa - in_RAX) * 0x500c0ba5;
  uVar11 = uVar10 >> 0x1d;
  uVar10 = (uVar11 & 0xffffffff) * (param_1 & 0xffffffff) +
           (((uVar10 << 0x23 | uVar11) >> 0x20) * (param_1 & 0xffffffff) +
            (param_1 >> 0x20) * (uVar11 & 0xffffffff) << 0x20);
  uVar11 = in_XMM0_Qa - 0x61dc299e;
  uVar11 = (uVar11 << 0x2d | uVar11 >> 0x13) ^ (uVar11 * 0x8000000 | uVar11 >> 0x25) ^ uVar11;
  uVar11 = (uVar11 << 0x1a | uVar11 >> 0x26) ^ (uVar11 << 0x36 | uVar11 >> 10) ^ uVar11;
  uVar11 = (uVar11 << 0x2c | uVar11 >> 0x14) ^ (uVar11 << 0x34 | uVar11 >> 0xc) ^ uVar11;
  uVar11 = (uVar11 << 0x28 | uVar11 >> 0x18) ^ (uVar11 << 0x18 | uVar11 >> 0x28) ^ uVar11;
  puVar5 = (uint64_t *)
           -((uVar11 << 0x30 | uVar11 >> 0x10) ^ (uVar11 << 0x10 | uVar11 >> 0x30) ^ uVar11);
  uVar11 = puVar5[2];
  if (uVar10 <= uVar11) {
    puVar5[2] = uVar10;
    if (7 < puVar5[3]) {
      puVar5 = (uint64_t *)*puVar5;
    }
    *(uint16_t *)((int64_t)puVar5 + uVar10 * 2) = 0;
    return;
  }
  uVar8 = puVar5[3];
  uVar15 = uVar10 - uVar11;
  uVar7 = (uint32_t)uVar15;
  if (uVar15 <= uVar8 - uVar11) {
    puVar5[2] = uVar10;
    if (7 < uVar8) {
      puVar5 = (uint64_t *)*puVar5;
    }
    puVar4 = (uint16_t *)((int64_t)puVar5 + uVar11 * 2);
    if (uVar15 < 4) {
      puVar13 = puVar4;
    }
    else {
      bVar2 = (uint8_t)in_RAX & 0x1f;
      if (uVar15 < ~(uVar14 + 0x3094e14 >> bVar2 | uVar14 + 0x3094e14 << 0x20 - bVar2) * 0x7121a479)
      {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar15 & 0xfffffffffffffff0;
        uVar8 = 0;
        do {
          *(uint8_t (*) [16])(puVar4 + uVar8 + 8) = (uint8_t  [16])0x0;
          *(uint8_t (*) [16])(puVar4 + uVar8) = (uint8_t  [16])0x0;
          uVar8 = uVar8 + 0x10;
        } while (uVar8 != uVar11);
        if (uVar15 == uVar11) goto LAB_7fffa549602f;
        if ((uVar15 & 0xc) == 0) {
          uVar15 = (uint64_t)(uVar7 & 0xf);
          puVar13 = puVar4 + uVar11;
          goto LAB_7fffa5496024;
        }
      }
      uVar8 = uVar15 & 0xfffffffffffffffc;
      puVar13 = puVar4 + uVar8;
      do {
        uVar6 = uVar11 * 4;
        *(uint64_t *)(puVar4 + uVar11) = 0;
        uVar11 = uVar11 + 4;
        if (uVar14 + (uVar3 | 1) * -0x10a15a36 == -0x17d1af68) {
          uVar11 = uVar6;
        }
      } while (uVar11 != uVar8);
      if (uVar15 == uVar8) goto LAB_7fffa549602f;
      uVar15 = (uint64_t)(uVar7 & 3);
    }
LAB_7fffa5496024:
    while( true ) {
      *puVar13 = 0;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) break;
      puVar13 = puVar13 + 1;
    }
LAB_7fffa549602f:
    *(uint16_t *)((int64_t)puVar5 + uVar10 * 2) = 0;
    return;
  }
  uVar6 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar11 < uVar15) {
    (*(code *)(&UNK_7fffa519b752 +
              (short)(((uint16_t)((uVar14 | 1) * 0x304a >> 1) & 0x7fff) + (uint16_t)in_RAX ^ 0x1a3)))();
    pcVar1 = (code *)__debugbreak();
    (*pcVar1)();
    return;
  }
  uVar12 = uVar10 | 7;
  if (((uVar12 < 0x7fffffffffffffff) && (uVar8 <= 0x7ffffffffffffffe - (uVar8 >> 1))) &&
     (uVar6 = (uVar8 >> 1) + uVar8, uVar6 < uVar12)) {
    uVar6 = uVar12;
  }
  uVar12 = (uint64_t)uVar14;
  (*(code *)((int64_t)(short)((uint16_t)uVar14 ^ 0x41f1) + 0x7fffa526de65))
            (uVar12,(uVar6 * 2 + 2) * 0x4000);
  uVar12 = (uVar12 << 0x2c | uVar12 >> 0x14) - ((uVar12 >> 0x14) << 0x36);
  puVar5[3] = uVar6;
  puVar5[2] = uVar10;
  puVar4 = (uint16_t *)(uVar12 + uVar11 * 2);
  if (7 < uVar8) {
    uVar11 = *puVar5;
    FUN_7fffa56a5f20(uVar12);
    if (uVar15 < 4) {
LAB_7fffa5496150:
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    else if (uVar15 < 0x10) {
      uVar6 = 0;
LAB_7fffa5496103:
      uVar8 = uVar15 & 0xfffffffffffffffc;
      do {
        *(uint64_t *)(puVar4 + uVar6) = 0;
        uVar6 = uVar6 + 4;
      } while (uVar6 != uVar8);
      if (uVar15 != uVar8) {
        uVar15 = (uint64_t)(uVar7 & 3);
        puVar4 = puVar4 + uVar8;
        goto LAB_7fffa5496150;
      }
    }
    else {
      uVar6 = uVar15 & 0xfffffffffffffff0;
      uVar8 = 0;
      do {
        *(uint8_t (*) [16])(puVar4 + uVar8 + 8) = (uint8_t  [16])0x0;
        *(uint8_t (*) [16])(puVar4 + uVar8) = (uint8_t  [16])0x0;
        uVar8 = uVar8 + 0x10;
      } while (uVar6 != uVar8);
      if (uVar15 != uVar6) {
        if ((uVar15 & 0xc) == 0) {
          puVar4 = puVar4 + uVar6;
          uVar15 = (uint64_t)(uVar7 & 0xf);
          goto LAB_7fffa5496150;
        }
        goto LAB_7fffa5496103;
      }
    }
    uVar9 = ((uint16_t)in_RAX | 1) * -0x39e3;
    bVar2 = (uint8_t)uVar14 & 0xf;
    *(uint16_t *)(uVar12 + uVar10 * 2) = 0;
    (*(code *)(&UNK_7fffa568ab70 + (short)~(uVar9 << bVar2 | uVar9 >> 0x10 - bVar2)))
              (uVar14,&UNK_7fffa568ab70,uVar11 >> 0x3d ^ uVar11);
    goto LAB_7fffa54961b0;
  }
  FUN_7fffa56a5f20(uVar12,puVar5,uVar11 * 2);
  if (uVar15 < 4) {
LAB_7fffa54960a4:
    while( true ) {
      *puVar4 = 0;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) break;
      puVar4 = puVar4 + 1;
    }
  }
  else if (uVar15 < 0x10) {
    uVar11 = 0;
LAB_7fffa5496060:
    uVar8 = uVar15 & 0xfffffffffffffffc;
    do {
      *(uint64_t *)(puVar4 + uVar11) = 0;
      uVar11 = uVar11 + 4;
    } while (uVar8 != uVar11);
    if (uVar15 != uVar8) {
      uVar15 = (uint64_t)(uVar7 & 3);
      puVar4 = puVar4 + uVar8;
      goto LAB_7fffa54960a4;
    }
  }
  else {
    uVar11 = uVar15 & 0xfffffffffffffff0;
    uVar8 = 0;
    do {
      *(uint8_t (*) [16])(puVar4 + uVar8 + 8) = (uint8_t  [16])0x0;
      *(uint8_t (*) [16])(puVar4 + uVar8) = (uint8_t  [16])0x0;
      uVar8 = uVar8 + 0x10;
    } while (uVar8 != uVar11);
    if (uVar15 != uVar11) {
      if ((uVar15 & 0xc) == 0) {
        uVar8 = uVar15 * 0xf;
        uVar15 = (uint64_t)(uVar7 & 0xf);
        if ((uint64_t)(int64_t)(int)((uVar3 ^ 0x4f1a0feb) * (uVar14 | 1)) <=
            (uint64_t)(uVar3 ^ 0x11357ebc)) {
          uVar15 = uVar8;
        }
        puVar4 = puVar4 + uVar11;
        goto LAB_7fffa54960a4;
      }
      goto LAB_7fffa5496060;
    }
  }
  *(uint16_t *)(uVar12 + uVar10 * 2) = 0;
LAB_7fffa54961b0:
  *puVar5 = uVar12;
  return;
}


// ============================================================================
// Function : FUN_7fffa5496200  |  RVA: 0xd26200  |  Size: 140 bytes
// Callers  : FUN_7fffa4ab28e0@0x3428e0, FUN_7fffa507e880@0x90e880
// Callees  : FUN_7fffa5404bd0@0xc94bd0, FUN_7fffa507aca4@0x90aca4
// ============================================================================
uint64_t FUN_7fffa5496200(int *param_1,uint64_t param_2)

{
  uint64_t uVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  
  if ((((uint8_t)param_1[5] & 3) == 2) && ((param_1[5] & 0xc0U) != 0)) {
    iVar4 = *param_1 - param_1[2];
    param_1[4] = 0;
    uVar1 = *(uint64_t *)(param_1 + 2);
    *(uint64_t *)param_1 = uVar1;
    if (0 < iVar4) {
      uVar2 = FUN_7fffa5404bd0(param_1);
      iVar3 = FUN_7fffa507aca4(uVar2,uVar1,iVar4,param_2);
      if (iVar4 != iVar3) {
        LOCK();
        param_1[5] = param_1[5] | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint32_t)param_1[5] >> 2 & 1) != 0) {
        LOCK();
        param_1[5] = param_1[5] & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5496290  |  RVA: 0xd26290  |  Size: 512 bytes
// Callers  : none
// Callees  : FUN_7fffa56aaad0@0xf3aad0, FUN_7fffa5488850@0xd18850, FUN_7fffa5169770@0x9f9770, FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa52d0020@0xb60020
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5496290(int64_t param_1,uint64_t param_2,uint16_t *param_3,uint64_t param_4)

{
  uint16_t uVar1;
  char cVar2;
  uint16_t *puVar3;
  bool bVar4;
  bool bVar5;
  uint8_t auStack_188 [40];
  char acStack_160 [256];
  uint64_t uStack_60;
  
  uStack_60 = _DAT_7fffa4780040 ^ (uint64_t)auStack_188;
  if ((_DAT_7fffa47800e4 & 4) == 0) {
    FUN_7fffa4ecf8e0(acStack_160,0,0x100);
    for (puVar3 = param_3; puVar3 != param_3 + param_4; puVar3 = puVar3 + 1) {
      if (0xff < *puVar3) goto joined_r0x7fffa5496346;
      acStack_160[*puVar3] = '\x01';
    }
    while (param_2 != 0) {
      uVar1 = *(uint16_t *)(param_1 + -2 + param_2 * 2);
      param_2 = param_2 - 1;
      if ((0xff < uVar1) || (acStack_160[uVar1] == '\0')) break;
    }
  }
  else {
    if (((_DAT_7fffa47800e4 & 0x20) == 0) || (param_2 < 0x31)) {
      cVar2 = '\0';
      if (8 < param_4) {
        if (param_4 < 0x51) {
          bVar4 = param_2 < 0x10;
          bVar5 = param_2 == 0x10;
        }
        else {
          bVar4 = param_2 < 8;
          bVar5 = param_2 == 8;
        }
        cVar2 = !bVar4 && !bVar5;
      }
    }
    else if (param_4 < 9) {
      cVar2 = (0x80 < param_2) * '\x02';
    }
    else {
      cVar2 = '\x02';
    }
    if (cVar2 == '\x02') {
      cVar2 = FUN_7fffa56aaad0(param_3,param_4);
      if (cVar2 != '\0') {
        FUN_7fffa5169770(param_1,param_2);
        goto LAB_7fffa5496471;
      }
    }
    else if ((cVar2 == '\x01') && (cVar2 = FUN_7fffa56aaad0(param_3,param_4), cVar2 != '\0')) {
      FUN_7fffa4ecf8e0(acStack_160,0,0x100);
      puVar3 = param_3 + param_4;
      for (; param_3 != puVar3; param_3 = param_3 + 1) {
        acStack_160[*param_3] = '\x01';
      }
      while (param_2 != 0) {
        uVar1 = *(uint16_t *)(param_1 + -2 + param_2 * 2);
        param_2 = param_2 - 1;
        if ((0xff < uVar1) || (acStack_160[uVar1] == '\0')) break;
      }
      goto LAB_7fffa5496471;
    }
    FUN_7fffa52d0020(param_1,param_2);
  }
  goto LAB_7fffa5496471;
joined_r0x7fffa5496346:
  while (param_2 != 0) {
    param_2 = param_2 - 1;
    puVar3 = param_3;
    while (*(uint16_t *)(param_1 + param_2 * 2) != *puVar3) {
      puVar3 = puVar3 + 1;
      if (puVar3 == param_3 + param_4) goto LAB_7fffa5496471;
    }
  }
LAB_7fffa5496471:
  FUN_7fffa5488850(uStack_60 ^ (uint64_t)auStack_188);
  return;
}


// ============================================================================
// Function : FUN_7fffa5496490  |  RVA: 0xd26490  |  Size: 167 bytes
// Callers  : FUN_7fffa5008150@0x898150
// Callees  : FUN_7fffa5151ef0@0x9e1ef0
// ============================================================================
uint32_t FUN_7fffa5496490(int64_t param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar4 = 0;
    iVar5 = 0xe3;
    do {
      iVar2 = (iVar5 + iVar4) / 2;
      iVar3 = FUN_7fffa5151ef0(param_1,(&PTR_DAT_7fffa56b5880)[(int64_t)iVar2 * 2],0x55);
      if (iVar3 == 0) {
        iVar5 = *(int *)(&UNK_7fffa56b5888 + (int64_t)iVar2 * 0x10);
        if (iVar5 < 0) {
          return 0;
        }
        if ((uint64_t)(int64_t)iVar5 < 0xe4) {
          return *(uint32_t *)(&UNK_7fffa56b4a40 + (int64_t)iVar5 * 0x10);
        }
        return 0;
      }
      iVar1 = iVar2 + -1;
      if (-1 < iVar3) {
        iVar4 = iVar2 + 1;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
    } while (iVar4 <= iVar5);
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5496540  |  RVA: 0xd26540  |  Size: 1 bytes
// Callers  : FUN_7fffa517b810@0xa0b810, FUN_7fffa507cd30@0x90cd30
// Callees  : none
// ============================================================================
void FUN_7fffa5496540(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5496550  |  RVA: 0xd26550  |  Size: 722 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5496550(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  bRam00007fffa47bb062 = 0;
  uRam00007fffa47bb089 = 0;
  uRam00007fffa47bb091 = 0;
  uRam00007fffa47bb079 = 0;
  uRam00007fffa47bb081 = 0;
  uRam00007fffa47bb069 = 0;
  uRam00007fffa47bb071 = 0;
  uRam00007fffa47bb099 = 0;
  uRam00007fffa47bb0a2 = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0x7fff,(int)uVar1)) * 0xb5b0a7627507dc4;
  lVar2 = 5;
  while( true ) {
    *(char *)(lVar2 + 0x7fffa47bb05a) = (char)((uint64_t)(lVar3 * 0x7627507dc4) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bb05c) = (char)((uint64_t)(lVar3 * -0x43c302fa0f0fabc0) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bb05b) = (char)((uint64_t)(lVar3 * 0x509048fe10) >> 0x20);
    if (lVar2 == 0x53) break;
    *(char *)(lVar2 + 0x7fffa47bb05e) = (char)((uint64_t)(lVar3 * 0x69349cc400) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bb05d) = (char)((uint64_t)(lVar3 * 0xa1e523c100) >> 0x20);
    lVar3 = lVar3 * -0x2a0eb5e9ec45f000;
    *(char *)(lVar2 + 0x7fffa47bb05f) = (char)((uint64_t)lVar3 >> 0x20);
    lVar2 = lVar2 + 6;
  }
  lVar2 = (uint64_t)((uint32_t)bRam00007fffa47bb062 * 0x24924925 + 0x24924925) * 7;
  *(uint64_t *)((uint64_t)(uint32_t)((int)((uint64_t)lVar2 >> 0x20) << 3) + 0x7fffa47bb069) = 0;
  bRam00007fffa47bb062 = (char)((uint64_t)lVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5496830  |  RVA: 0xd26830  |  Size: 221 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5496830(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint32_t uVar9;
  uint64_t *puVar10;
  int64_t unaff_RSI;
  int64_t in_R10;
  uint8_t in_AF;
  bool bVar11;
  uint8_t in_TF;
  uint8_t in_IF;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_VIF;
  uint8_t in_VIP;
  uint8_t in_ID;
  uint32_t in_XMM3_Dc;
  uint32_t in_XMM3_Dd;
  uint64_t in_stack_00000028;
  uint64_t uStack_30;
  uint8_t auStack_28 [36];
  uint32_t uStack_4;
  
  uStack_4 = 0xdf53f0f;
  uVar9 = (int)in_stack_00000028 + 0x3de266f9;
  uVar3 = 0xdf53f0f - uVar9;
  if (0xdf53f0f < uVar9 || uVar3 == 0) {
    puVar1 = (uint64_t *)(unaff_RSI + -0x58934015);
    *puVar1 = *puVar1 ^ 0x63fb2c09;
    bVar11 = (int64_t)*puVar1 < 0;
    uStack_30 = 0x7fffa54968ad;
    func_0x7fff47f2ac32();
    puVar10 = (uint64_t *)auStack_28;
    if (bVar11) {
      lVar5 = CONCAT44(in_XMM3_Dd,in_XMM3_Dc);
      uVar4 = in_R10 + 0x4804d57eU >> 0x1a;
      puVar2 = *(uint64_t **)
                (*(int64_t *)(uVar4 << 0x39 ^ (in_R10 + 0x4804d57eU << 0x26 | uVar4)) + 0x88);
      *(uint64_t *)(lVar5 + 0x10e968918) = puVar2[4];
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[3];
      *(uint64_t *)(lVar5 + 0x10e968908) = puVar2[2];
      *(uint64_t *)(lVar5 + 0x10e968910) = uVar8;
      *(uint64_t *)(lVar5 + 0x10e9688f8) = uVar6;
      *(uint64_t *)(lVar5 + 0x10e968900) = uVar7;
      return;
    }
  }
  else {
    uStack_30 = (uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)SBORROW4(0xdf53f0f,uVar9) * 0x800 |
                (uint64_t)(in_IF & 1) * 0x200 | (uint64_t)(in_TF & 1) * 0x100 |
                (uint64_t)((int)uVar3 < 0) * 0x80 | (uint64_t)(uVar3 == 0) * 0x40 |
                (uint64_t)(in_AF & 1) * 0x10 | (uint64_t)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4
                | (uint64_t)(0xdf53f0f < uVar9) | (uint64_t)(in_ID & 1) * 0x200000 |
                (uint64_t)(in_VIP & 1) * 0x100000 | (uint64_t)(in_VIF & 1) * 0x80000 |
                (uint64_t)(in_AC & 1) * 0x40000;
    puVar10 = &uStack_30;
  }
  *puVar10 = 0x7fffa549688d;
  (*(code *)(&UNK_7fffa5454f3b + (short)((short)in_stack_00000028 + -0x18f6)))();
  return;
}


// ============================================================================
// Function : FUN_7fffa5496910  |  RVA: 0xd26910  |  Size: 676 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5496910(void)

{
  uint64_t uVar1;
  short sVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint32_t unaff_EDI;
  uint8_t bVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint32_t unaff_R14D;
  uint32_t uVar8;
  
  uVar8 = ((unaff_EDI ^ unaff_R14D) + (~unaff_R14D ^ unaff_EDI)) * -0x5c227b4b +
          (~unaff_R14D + unaff_R14D) * -0x46f64a71;
  bVar5 = (uint8_t)uVar8;
  *(uint8_t *)((int64_t)(int)((uVar8 | 1) * 0x58000000 | (uVar8 | 1) * -0x37d0c435 >> 5) +
           0x7fffa47900b4) = -0x44 - bVar5;
  sVar2 = (short)uVar8;
  *(uint8_t (*) [16])((int64_t)(short)(sVar2 + -0x28ec) + 0x7fffa478b6dc) =
       (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)(short)(sVar2 + -0x28ec) + 0x7fffa478b6cc) =
       (uint8_t  [16])0x0;
  *(uint64_t *)
   ((int64_t)(int)((uVar8 + 0xfae739a9) * 0x100 | uVar8 + 0xfae739a9 >> 0x18) + 0x7fffa478ee2d) =
       (uint64_t)((uVar8 ^ 0xa318c5bc) << 1 | (uint32_t)((int)(uVar8 ^ 0xa318c5bc) < 0));
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x5a188f4a8cd4fc2 + 0xb;
  lVar6 = 3;
  while( true ) {
    lVar3 = lVar3 * 0x5a188f4a8cd4fc2 + 0xb;
    lVar4 = lVar3 * 0x5a188f4a8cd4fc2 + 0xb;
    lVar7 = lVar4 * 0x5a188f4a8cd4fc2 + 0xb;
    *(char *)(lVar6 + 0x7fffa478538b) = (char)((uint64_t)lVar7 >> 0x20);
    *(char *)(lVar6 + ((int64_t)(int)(0x3d5e09ee - uVar8) ^ 0x65ba57fbU) + 0x7fffa4793fc0) =
         (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar6 + (int64_t)(short)(0x7b64U >> (bVar5 & 0xf) | 0x7b64 << 0x10 - (bVar5 & 0xf)) +
                      0x7fffa4789d43) = (char)((uint64_t)lVar4 >> 0x20);
    if (lVar6 == 0x53) break;
    lVar3 = lVar7 * 0x5a188f4a8cd4fc2 + 0xb;
    *(char *)(lVar6 + (int64_t)(short)(-0x6b6e - sVar2) + 0x7fffa47884b6) =
         (char)((uint64_t)lVar3 >> 0x20);
    lVar6 = lVar6 + 4;
  }
  bVar5 = *(char *)((int64_t)
                    (int)(0xdffff11cU >> (bVar5 & 0x1f) | -0x20000ee4 << 0x20 - (bVar5 & 0x1f)) +
                   0x7fffa47941c5) + 1U & 3;
  *(uint64_t *)
   ((int64_t)(short)(0x2969 - (sVar2 + -0x1fd6)) + 0x7fffa478d019 + (uint64_t)bVar5 * 8) =
       ~*(uint64_t *)((int64_t)(int)(uVar8 + 0x5ce66602) + 0x7fffa479280c);
  *(uint8_t *)((int64_t)(int)(uVar8 ^ 0x5ce7cb34) + 0x7fffa479450a) = bVar5;
  return;
}


// ============================================================================
// Function : FUN_7fffa5496bc0  |  RVA: 0xd26bc0  |  Size: 933 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5496bc0(void) {
    /* +0xd26bc0 */ __asm { PUSH RBP }
    /* +0xd26bc1 */ __asm { PUSH RBX }
    /* +0xd26bc2 */ __asm { PUSH RSI }
    /* +0xd26bc3 */ __asm { PUSH R12 }
    /* +0xd26bc5 */ __asm { PUSH R13 }
    /* +0xd26bc7 */ __asm { PUSH R15 }
    /* +0xd26bc9 */ __asm { PUSH RDI }
    /* +0xd26bca */ __asm { PUSH R14 }
    /* +0xd26bcc */ __asm { SUB RSP,0xb8 }
    /* +0xd26bd3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xd26bdb */ __asm { MOV R14,RDX }
    /* +0xd26bde */ __asm { ROL RCX,0x20 }
    /* +0xd26be2 */ __asm { MOV RSI,RCX }
    /* +0xd26be5 */ __asm { SHR RSI,0x4 }
    /* +0xd26be9 */ __asm { XOR RSI,RCX }
    /* +0xd26bec */ __asm { MOV RDI,RSI }
    /* +0xd26bef */ __asm { SHR RDI,0x8 }
    /* +0xd26bf3 */ __asm { XOR RDI,RSI }
    /* +0xd26bf6 */ __asm { MOV R13,RDI }
    /* +0xd26bf9 */ __asm { SHR R13,0x10 }
    /* +0xd26bfd */ __asm { XOR R13,RDI }
    /* +0xd26c00 */ __asm { MOV R15,R13 }
    /* +0xd26c03 */ __asm { SHR R15,0x20 }
    /* +0xd26c07 */ __asm { MOV RBX,R13 }
    /* +0xd26c0a */ __asm { MOV R9D,0xc4e40d81 }
    /* +0xd26c10 */ __asm { XOR R9D,0xaa5faa7f }
    /* +0xd26c17 */ __asm { ROR R9D,0x1 }
    /* +0xd26c1a */ __asm { MOV ECX,R14D }
    /* +0xd26c1d */ __asm { ROL R9D,CL }
    /* +0xd26c20 */ __asm { XOR RBX,R15 }
    /* +0xd26c23 */ __asm { MOV dword ptr [RBP + -0x48],R9D }
    /* +0xd26c27 */ __asm { MOV R9D,dword ptr [RBP + -0x48] }
    /* +0xd26c2b */ __asm { LEA R8,[0x7fffa478b5c5] }
    /* +0xd26c32 */ __asm { MOV R9W,0xc468 }
    /* +0xd26c37 */ __asm { IMUL R9D,R9D,0x6725 }
    /* +0xd26c3e */ __asm { XOR R9D,R14D }
    /* +0xd26c41 */ __asm { MOVSX R10,R9W }
    /* +0xd26c45 */ __asm { CMP uint8_t ptr [R8 + R10*0x1],0x1 }
    /* +0xd26c4a */ __asm { MOV qword ptr [RBP + 0x18],RDX }
    /* +0xd26c4e */ __asm { JNZ 0x7fffa5497966 }
    /* +0xd26c54 */ __asm { LEA R8,[0x7fffa478d77e] }
    /* +0xd26c5b */ __asm { MOV R9D,0xd1a6e65 }
    /* +0xd26c61 */ __asm { XOR R9D,R14D }
    /* +0xd26c64 */ __asm { ADD R9D,0xd329c34e }
    /* +0xd26c6b */ __asm { MOVSXD R10,R9D }
    /* +0xd26c6e */ __asm { XOR R10,0xf9cd56a }
    /* +0xd26c75 */ __asm { MOVZX R10D,uint8_t ptr [R8 + R10*0x1 + 0xc] }
    /* +0xd26c7b */ __asm { MOV R9W,0x66e4 }
    /* +0xd26c80 */ __asm { XOR R9D,0x3dee }
    /* +0xd26c87 */ __asm { MOV R11D,0x6efbbc0c }
    /* +0xd26c8d */ __asm { ADD R11D,0x8001fd10 }
    /* +0xd26c94 */ __asm { LEA R8,[0x7fffa478533f] }
    /* +0xd26c9b */ __asm { LEA RDX,[0x7fffa4791c7b] }
    /* +0xd26ca2 */ __asm { ADD R9D,R14D }
    /* +0xd26ca5 */ __asm { ROL R11D,0x4 }
    /* +0xd26ca9 */ __asm { ADD R11D,R14D }
    /* +0xd26cac */ __asm { MOVSXD RAX,R11D }
    /* +0xd26caf */ __asm { MOV RDX,qword ptr [RDX + RAX*0x1 + 0x43] }
    /* +0xd26cb4 */ __asm { MOVSX R9,R9W }
    /* +0xd26cb8 */ __asm { ADD R9,R8 }
    /* +0xd26cbb */ __asm { MOVZX R10D,R10B }
    /* +0xd26cbf */ __asm { XOR RDX,qword ptr [R9 + R10*0x8 + 0x1c] }
    /* +0xd26cc4 */ __asm { MOV qword ptr [RBP + -0x48],RDX }
    /* +0xd26cc8 */ __asm { MOV R8D,0x1388 }
    /* +0xd26cce */ __asm { ADD R8,qword ptr [RBP + -0x48] }
    /* +0xd26cd2 */ __asm { CMP R8,RBX }
    /* +0xd26cd5 */ __asm { NOP }
    /* +0xd26cd6 */ __asm { NOP }
    /* +0xd26cd7 */ __asm { NOP }
    /* +0xd26cd8 */ __asm { NOP }
    /* +0xd26cd9 */ __asm { NOP }
    /* +0xd26cda */ __asm { NOP }
    /* +0xd26cdb */ __asm { NOP }
    /* +0xd26cdc */ __asm { NOP }
    /* +0xd26cdd */ __asm { NOP }
    /* +0xd26cde */ __asm { NOP }
    /* +0xd26cdf */ __asm { NOP }
    /* +0xd26ce0 */ __asm { NOP }
    /* +0xd26ce1 */ __asm { NOP }
    /* +0xd26ce2 */ __asm { NOP }
    /* +0xd26ce3 */ __asm { NOP }
    /* +0xd26ce4 */ __asm { NOP }
    /* +0xd26ce5 */ __asm { NOP }
    /* +0xd27966 */ __asm { MOV qword ptr [RBP + -0x18],R15 }
    /* +0xd2796a */ __asm { MOV qword ptr [RBP + -0x20],RBX }
    /* +0xd2796e */ __asm { MOV qword ptr [RBP + 0x20],R13 }
    /* +0xd27972 */ __asm { MOV qword ptr [RBP + -0x8],RDI }
    /* +0xd27976 */ __asm { MOV qword ptr [RBP + -0x28],RSI }
    /* +0xd2797a */ __asm { MOV R10D,0x37ba3775 }
    /* +0xd27980 */ __asm { MOV CX,0x9bde }
    /* +0xd27984 */ __asm { LEA RDX,[0x7fffa478f1a1] }
    /* +0xd2798b */ __asm { MOV R9D,R14D }
    /* +0xd2798e */ __asm { OR R9D,0x1 }
    /* +0xd27992 */ __asm { LEA RAX,[0x7fffa478e64d] }
    /* +0xd27999 */ __asm { ADD R10D,0xb8229683 }
    /* +0xd279a0 */ __asm { LEA R11,[0x7fffa478ca2e] }
    /* +0xd279a7 */ __asm { MOVD XMM0,ECX }
    /* +0xd279ab */ __asm { XOR R10D,R14D }
    /* +0xd279ae */ __asm { MOVSXD R10,R10D }
    /* +0xd279b1 */ __asm { MOV ECX,0x9e3705fd }
    /* +0xd279b6 */ __asm { MOVD XMM5,R14D }
    /* +0xd279bb */ __asm { PXOR XMM5,XMM0 }
    /* +0xd279bf */ __asm { IMUL ECX,R9D }
    /* +0xd279c3 */ __asm { ROL ECX,0x15 }
    /* +0xd279c6 */ __asm { MOVSXD R8,ECX }
    /* +0xd279c9 */ __asm { LEA RCX,[0x7fffa4793f3a] }
    /* +0xd279d0 */ __asm { MOV R15D,0xdcc3269b }
    /* +0xd279d6 */ __asm { ADD R15D,0x15dba493 }
    /* +0xd279dd */ __asm { MOVD EBX,XMM5 }
    /* +0xd279e1 */ __asm { ADD EBX,0xfffffc8b }
    /* +0xd279e7 */ __asm { ROL BX,0xc }
    /* +0xd279eb */ __asm { MOVZX EBX,BX }
    /* +0xd279ee */ __asm { IMUL R15D,R9D }
    /* +0xd279f2 */ __asm { MOVSXD R13,R15D }
    /* +0xd279f5 */ __asm { MOV R15D,0x84ccb5b9 }
    /* +0xd279fb */ __asm { ADD R15D,R14D }
    /* +0xd279fe */ __asm { NOT R15D }
    /* +0xd27a01 */ __asm { IMUL R15D,R15D,-0x5761e37f }
    /* +0xd27a08 */ __asm { MOVSXD RSI,R15D }
    /* +0xd27a0b */ __asm { MOV R15B,0x55 }
    /* +0xd27a0e */ __asm { ADD R15B,R14B }
    /* +0xd27a11 */ __asm { MOVZX R15D,R15B }
    /* +0xd27a15 */ __asm { IMUL R15D,R15D,-0x2b }
    /* +0xd27a19 */ __asm { ROL R15B,0x1 }
    /* +0xd27a1c */ __asm { MOV uint8_t ptr [RCX + R13*0x1 + 0xc],R15B }
    /* +0xd27a21 */ __asm { MOV uint8_t ptr [RAX + RSI*0x1],0x1 }
    /* +0xd27a25 */ __asm { PXOR XMM0,XMM0 }
    /* +0xd27a29 */ __asm { MOVDQU xmmword ptr [RDX + R10*0x1 + 0x1c],XMM0 }
    /* +0xd27a30 */ __asm { MOV qword ptr [RDX + R10*0x1 + 0x2c],0x0 }
    /* +0xd27a39 */ __asm { MOV qword ptr [R11 + R8*0x1 + 0x43],RBX }
    /* +0xd27a3e */ __asm { RDTSC }
    /* +0xd27a40 */ __asm { SHL RDX,0x20 }
    /* +0xd27a44 */ __asm { OR RDX,RAX }
    /* +0xd27a47 */ __asm { MOV RAX,0xd6d8ba8f7d89c54 }
    /* +0xd27a51 */ __asm { IMUL RDX,RAX }
    /* +0xd27a55 */ __asm { MOV R11D,0x2 }
    /* +0xd27a5b */ __asm { MOVD XMM0,R14D }
    /* +0xd27a60 */ __asm { LEA RCX,[0x7fffa478fdcf] }
    /* +0xd27a67 */ __asm { LEA RSI,[0x7fffa4790425] }
    /* +0xd27a6e */ __asm { LEA RDI,[0x7fffa478923f] }
    /* +0xd27a75 */ __asm { MOV R10D,0x5e43089e }
    /* +0xd27a7b */ __asm { MOV R15D,0xaf7c505 }
    /* +0xd27a81 */ __asm { MOV R13,RCX }
    /* +0xd27a84 */ __asm { MOV R8,RSI }
    /* +0xd27a87 */ __asm { MOVD XMM5,R10D }
    /* +0xd27a8c */ __asm { MOV R10,RDI }
    /* +0xd27a8f */ __asm { IMUL RDX,RAX }
    /* +0xd27a93 */ __asm { ADD RDX,RAX }
    /* +0xd27a96 */ __asm { MOV RBX,RDX }
    /* +0xd27a99 */ __asm { SHR RBX,0x20 }
    /* +0xd27a9d */ __asm { PSUBD XMM5,XMM0 }
    /* +0xd27aa1 */ __asm { MOVD R12D,XMM5 }
    /* +0xd27aa6 */ __asm { IMUL R12D,R12D,-0xb768b4b }
    /* +0xd27aad */ __asm { MOVSXD R12,R12D }
    /* +0xd27ab0 */ __asm { ADD R12,R8 }
    /* +0xd27ab3 */ __asm { MOV R8W,0x76e8 }
    /* +0xd27ab8 */ __asm { MOV uint8_t ptr [R11 + R12*0x1 + -0x2],BL }
    /* +0xd27abd */ __asm { IMUL RDX,RAX }
    /* +0xd27ac1 */ __asm { ADD RDX,RAX }
    /* +0xd27ac4 */ __asm { MOV RBX,RDX }
    /* +0xd27ac7 */ __asm { IMUL RBX,RAX }
    /* +0xd27acb */ __asm { ADD RBX,RAX }
    /* +0xd27ace */ __asm { ADD R8D,dword ptr [RBP + 0x18] }
    /* +0xd27ad2 */ __asm { XOR R8D,0xffffbf62 }
    /* +0xd27ad9 */ __asm { IMUL R8D,R8D,0x4005 }
    /* +0xd27ae0 */ __asm { MOVSX R8,R8W }
    /* +0xd27ae4 */ __asm { ADD R8,R10 }
    /* +0xd27ae7 */ __asm { MOV R10,RBX }
    /* +0xd27aea */ __asm { SHR R10,0x20 }
    /* +0xd27aee */ __asm { MOV uint8_t ptr [R11 + R8*0x1],R10B }
    /* +0xd27af2 */ __asm { XOR R15D,0x520512c1 }
    /* +0xd27af9 */ __asm { MOVD XMM5,R15D }
    /* +0xd27afe */ __asm { PSUBD XMM5,XMM0 }
    /* +0xd27b02 */ __asm { MOVD R10D,XMM5 }
    /* +0xd27b07 */ __asm { IMUL R10D,R10D,-0x1e04813 }
    /* +0xd27b0e */ __asm { MOVSXD R10,R10D }
    /* +0xd27b11 */ __asm { ADD R10,R13 }
    /* +0xd27b14 */ __asm { SHR RDX,0x20 }
    /* +0xd27b18 */ __asm { MOV uint8_t ptr [R11 + R10*0x1 + -0x1],DL }
    /* +0xd27b1d */ __asm { ADD R11,0x3 }
    /* +0xd27b21 */ __asm { MOV RDX,RBX }
    /* +0xd27b24 */ __asm { CMP R11,0x5c }
    /* +0xd27b28 */ __asm { JNZ 0x7fffa5497a75 }
    /* +0xd27b2e */ __asm { MOV ECX,0xe2469b50 }
    /* +0xd27b33 */ __asm { MOV DX,0xf095 }
    /* +0xd27b37 */ __asm { MOV R10D,0x24c25b2b }
    /* +0xd27b3d */ __asm { MOV R11D,0x966c2ab4 }
    /* +0xd27b43 */ __asm { LEA RSI,[0x7fffa478818f] }
    /* +0xd27b4a */ __asm { LEA R8,[0x7fffa4793c11] }
    /* +0xd27b51 */ __asm { IMUL EAX,ECX,-0x393a3539 }
    /* +0xd27b57 */ __asm { ROL EAX,0x17 }
    /* +0xd27b5a */ __asm { LEA RDI,[0x7fffa4792105] }
    /* +0xd27b61 */ __asm { MOV R14,qword ptr [RBP + 0x18] }
    /* +0xd27b65 */ __asm { MOV ECX,R14D }
    /* +0xd27b68 */ __asm { ROL EAX,CL }
    /* +0xd27b6a */ __asm { CDQE }
    /* +0xd27b6c */ __asm { LEA RCX,[0x7fffa478da31] }
    /* +0xd27b73 */ __asm { XOR EDX,0xffffae85 }
    /* +0xd27b79 */ __asm { SUB EDX,R14D }
    /* +0xd27b7c */ __asm { MOVSX RDX,DX }
    /* +0xd27b80 */ __asm { MOVZX EDX,uint8_t ptr [RSI + RDX*0x1 + 0xc] }
    /* +0xd27b85 */ __asm { IMUL R11D,R9D }
    /* +0xd27b89 */ __asm { MOVSXD R9,R11D }
    /* +0xd27b8c */ __asm { XOR R9,0x35c843d3 }
    /* +0xd27b93 */ __asm { ADD R9,RDI }
    /* +0xd27b96 */ __asm { XOR R10D,0xe33fb5d2 }
    /* +0xd27b9d */ __asm { ADD R10D,0x38011bea }
    /* +0xd27ba4 */ __asm { MOVSXD R11,R10D }
    /* +0xd27ba7 */ __asm { IMUL R10D,EDX,0x55555556 }
    /* +0xd27bae */ __asm { ADD R10D,0x55555556 }
    /* +0xd27bb5 */ __asm { LEA R10,[R10 + R10*0x2] }
    /* +0xd27bb9 */ __asm { SHR R10,0x20 }
    /* +0xd27bbd */ __asm { MOV RDX,qword ptr [RCX + RAX*0x1 + 0x43] }
    /* +0xd27bc2 */ __asm { MOV qword ptr [R9 + R10*0x8 + 0x1c],RDX }
    /* +0xd27bc7 */ __asm { MOV uint8_t ptr [R8 + R11*0x1 + 0xc],R10B }
    /* +0xd27bcc */ __asm { MOV RSI,qword ptr [RBP + -0x28] }
    /* +0xd27bd0 */ __asm { MOV RDI,qword ptr [RBP + -0x8] }
    /* +0xd27bd4 */ __asm { MOV R13,qword ptr [RBP + 0x20] }
    /* +0xd27bd8 */ __asm { MOV RBX,qword ptr [RBP + -0x20] }
    /* +0xd27bdc */ __asm { MOV R15,qword ptr [RBP + -0x18] }
    /* +0xd27be0 */ __asm { JMP 0x7fffa5496c7b }
}


// ============================================================================
// Function : FUN_7fffa5497d30  |  RVA: 0xd27d30  |  Size: 142 bytes
// Callers  : none
// Callees  : FUN_7fffa5215380@0xaa5380, FUN_7fffa52d0cd4@0xb60cd4, FUN_7fffa55c6bb0@0xe56bb0
// ============================================================================
int64_t FUN_7fffa5497d30(int64_t param_1)

{
  code *pcVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  if (param_1 != 0) {
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (*(short *)(param_1 + lVar3 * 2) != 0);
    lVar4 = lVar4 + 2;
    lVar3 = FUN_7fffa5215380(lVar4 * 2);
    if (lVar3 != 0) {
      iVar2 = FUN_7fffa55c6bb0(lVar3,lVar4,param_1);
      if (iVar2 == 0) {
        return lVar3;
      }
      FUN_7fffa52d0cd4(0,0,0,0,0);
      pcVar1 = (code *)__debugbreak();
      lVar3 = (*pcVar1)();
      return lVar3;
    }
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5497dc0  |  RVA: 0xd27dc0  |  Size: 4363 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5497dc0(void) {
    /* +0xd27dc0 */ __asm { PUSH RBP }
    /* +0xd27dc1 */ __asm { PUSH R15 }
    /* +0xd27dc3 */ __asm { PUSH RBX }
    /* +0xd27dc4 */ __asm { PUSH RDI }
    /* +0xd27dc5 */ __asm { PUSH RSI }
    /* +0xd27dc6 */ __asm { PUSH R13 }
    /* +0xd27dc8 */ __asm { PUSH R12 }
    /* +0xd27dca */ __asm { PUSH R14 }
    /* +0xd27dcc */ __asm { SUB RSP,0x108 }
    /* +0xd27dd3 */ __asm { MOVAPS xmmword ptr [RSP + 0xf0],XMM6 }
    /* +0xd27ddb */ __asm { MOV qword ptr [RSP + 0xd0],RAX }
    /* +0xd27de3 */ __asm { MOV CX,0x7b17 }
    /* +0xd27de7 */ __asm { ADD R10,0x3e0307cc }
    /* +0xd27dee */ __asm { MOV R11,R10 }
    /* +0xd27df1 */ __asm { SHL R11,0x23 }
    /* +0xd27df5 */ __asm { XOR R11,R10 }
    /* +0xd27df8 */ __asm { MOV R10,R11 }
    /* +0xd27dfb */ __asm { ROL R10,0x20 }
    /* +0xd27dff */ __asm { MOV R12D,0xe1de539a }
    /* +0xd27e05 */ __asm { MOV RBX,R11 }
    /* +0xd27e08 */ __asm { ROL RBX,0x2b }
    /* +0xd27e0c */ __asm { XOR RBX,R10 }
    /* +0xd27e0f */ __asm { XOR RBX,R11 }
    /* +0xd27e12 */ __asm { MOV RBP,RBX }
    /* +0xd27e15 */ __asm { ROL RBP,0x16 }
    /* +0xd27e19 */ __asm { MOV R14,RBP }
    /* +0xd27e1c */ __asm { XOR R14,RBX }
    /* +0xd27e1f */ __asm { MOV R13D,0xd29becd4 }
    /* +0xd27e25 */ __asm { SUB R13D,R9D }
    /* +0xd27e28 */ __asm { ROL R13D,0x17 }
    /* +0xd27e2c */ __asm { MOV R11D,0x9212c7ab }
    /* +0xd27e32 */ __asm { MOVD XMM0,R11D }
    /* +0xd27e37 */ __asm { AND RBP,RBX }
    /* +0xd27e3a */ __asm { MOV EDI,0x5ecba67e }
    /* +0xd27e3f */ __asm { IMUL R15D,ECX,0x6f07 }
    /* +0xd27e46 */ __asm { ADD R15D,R9D }
    /* +0xd27e49 */ __asm { ROL R15W,0x9 }
    /* +0xd27e4e */ __asm { MOV R10,0xffffff000001 }
    /* +0xd27e58 */ __asm { IMUL R10,RDX }
    /* +0xd27e5c */ __asm { MOV qword ptr [RSP + 0x88],R9 }
    /* +0xd27e64 */ __asm { OR R9D,0x1 }
    /* +0xd27e68 */ __asm { MOVD XMM2,R9D }
    /* +0xd27e6d */ __asm { IMUL EDI,R9D }
    /* +0xd27e71 */ __asm { NOT EDI }
    /* +0xd27e73 */ __asm { PMULUDQ XMM0,XMM2 }
    /* +0xd27e77 */ __asm { MOV dword ptr [RSP + 0x9c],R9D }
    /* +0xd27e7f */ __asm { IMUL R12D,R9D }
    /* +0xd27e83 */ __asm { ADD R12D,0xcec07163 }
    /* +0xd27e8a */ __asm { RDTSC }
    /* +0xd27e8c */ __asm { SHL RDX,0x20 }
    /* +0xd27e90 */ __asm { OR RDX,RAX }
    /* +0xd27e93 */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xd27e9d */ __asm { IMUL RDX,R11 }
    /* +0xd27ea1 */ __asm { MOV RSI,-0x22b18422c4a9c65e }
    /* +0xd27eab */ __asm { ADD RSI,RDX }
    /* +0xd27eae */ __asm { MOVD EDX,XMM0 }
    /* +0xd27eb2 */ __asm { ADD EDX,0x40b5853f }
    /* +0xd27eb8 */ __asm { MOV RCX,RSI }
    /* +0xd27ebb */ __asm { SHR RCX,0x3b }
    /* +0xd27ebf */ __asm { MOV RAX,RSI }
    /* +0xd27ec2 */ __asm { SHR RAX,0x1b }
    /* +0xd27ec6 */ __asm { CMP R13,RDX }
    /* +0xd27ec9 */ __asm { CMOVA RBP,R14 }
    /* +0xd27ecd */ __asm { XOR RBP,RBX }
    /* +0xd27ed0 */ __asm { MOV RDX,RBP }
    /* +0xd27ed3 */ __asm { ROL RDX,0x34 }
    /* +0xd27ed7 */ __asm { ROL RBP,0x14 }
    /* +0xd27edb */ __asm { MOV RBX,RDX }
    /* +0xd27ede */ __asm { XOR RBX,RBP }
    /* +0xd27ee1 */ __asm { CMP RDI,R12 }
    /* +0xd27ee4 */ __asm { MOVQ XMM0,RDX }
    /* +0xd27ee9 */ __asm { MOVQ XMM4,RBP }
    /* +0xd27eee */ __asm { PAND XMM4,XMM0 }
    /* +0xd27ef2 */ __asm { MOVQ R13,XMM4 }
    /* +0xd27ef7 */ __asm { CMOVC R13,RBX }
    /* +0xd27efb */ __asm { MOV R14,R8 }
    /* +0xd27efe */ __asm { XOR R13,RDX }
    /* +0xd27f01 */ __asm { SHR RSI,0x2d }
    /* +0xd27f05 */ __asm { XOR EAX,ESI }
    /* +0xd27f07 */ __asm { ROR EAX,CL }
    /* +0xd27f09 */ __asm { MOVZX R8D,R15W }
    /* +0xd27f0d */ __asm { AND EAX,0x3 }
    /* +0xd27f10 */ __asm { CMP EAX,R8D }
    /* +0xd27f13 */ __asm { MOV qword ptr [RSP + 0x48],R13 }
    /* +0xd27f18 */ __asm { JC 0x7fffa5497fef }
    /* +0xd27f1e */ __asm { CMP EAX,0x3 }
    /* +0xd27f21 */ __asm { JZ 0x7fffa5498097 }
    /* +0xd27f27 */ __asm { MOV EDX,0xcc352e22 }
    /* +0xd27f2c */ __asm { MOV R11,-0x4d39bffdfc60ca4e }
    /* +0xd27f36 */ __asm { CMP RDX,R11 }
    /* +0xd27f39 */ __asm { MOV R15,qword ptr [RSP + 0x88] }
    /* +0xd27f41 */ __asm { MOV R12,qword ptr [RSP + 0xd0] }
    /* +0xd27f49 */ __asm { JZ 0x7fffa5499144 }
    /* +0xd27f4f */ __asm { MOV R11,qword ptr [RDX + -0x4c372e1a] }
    /* +0xd27f56 */ __asm { MOV RDX,0x46afee173fdb0ee7 }
    /* +0xd27f60 */ __asm { MOV RAX,R11 }
    /* +0xd27f63 */ __asm { MUL RDX }
    /* +0xd27f66 */ __asm { MOV R9,RDX }
    /* +0xd27f69 */ __asm { MOV EDX,0x1479bbd }
    /* +0xd27f6e */ __asm { MOV RAX,R11 }
    /* +0xd27f71 */ __asm { MUL RDX }
    /* +0xd27f74 */ __asm { ADD RAX,R9 }
    /* +0xd27f77 */ __asm { ADC RDX,0x0 }
    /* +0xd27f7b */ __asm { TEST DL,0x1 }
    /* +0xd27f7e */ __asm { JZ 0x7fffa549841b }
    /* +0xd27f84 */ __asm { LEA RCX,[0x7fffa47bb16c] }
    /* +0xd27f8b */ __asm { MOV RDX,RCX }
    /* +0xd27f8e */ __asm { ROL RDX,0xd }
    /* +0xd27f92 */ __asm { XOR RDX,-0x71c94076 }
    /* +0xd27f99 */ __asm { MOV R11,0x27580939f76b257f }
    /* +0xd27fa3 */ __asm { CMP RDX,R11 }
    /* +0xd27fa6 */ __asm { NOP }
    /* +0xd27fa7 */ __asm { NOP }
    /* +0xd27fa8 */ __asm { NOP }
    /* +0xd27fa9 */ __asm { NOP }
    /* +0xd27faa */ __asm { NOP }
    /* +0xd27fab */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xd27fb2 */ __asm { MOV RDX,0x0 }
    /* +0xd27fb9 */ __asm { MOV R8W,0x5081 }
    /* +0xd27fbe */ __asm { IMUL R8D,R8D,0x205f }
    /* +0xd27fc5 */ __asm { NOT R8D }
    /* +0xd27fc8 */ __asm { MOVZX R9D,R8W }
    /* +0xd27fcc */ __asm { MOV qword ptr [RSP + 0x58],RDX }
    /* +0xd27fd1 */ __asm { MOV AX,0x739c }
    /* +0xd27fd5 */ __asm { LEA R8D,[R15 + RAX*0x1] }
    /* +0xd27fd9 */ __asm { XOR R8D,0x1dfa }
    /* +0xd27fe0 */ __asm { MOVZX EDX,R8W }
    /* +0xd27fe4 */ __asm { MOV EAX,dword ptr [RCX + 0x1e34] }
    /* +0xd27fea */ __asm { JMP 0x7fffa5498b8a }
    /* +0xd27fef */ __asm { CMP EAX,0x1 }
    /* +0xd27ff2 */ __asm { JZ 0x7fffa549835b }
    /* +0xd27ff8 */ __asm { MOV EDX,0x9e22fa15 }
    /* +0xd27ffd */ __asm { MOV R11,-0xbe6ea02f }
    /* +0xd28007 */ __asm { XOR R11,RDX }
    /* +0xd2800a */ __asm { MOV R9,-0x79ecd95e34bc6c8e }
    /* +0xd28014 */ __asm { CMP R11,R9 }
    /* +0xd28017 */ __asm { MOV R15,qword ptr [RSP + 0x88] }
    /* +0xd2801f */ __asm { MOV R12,qword ptr [RSP + 0xd0] }
    /* +0xd28027 */ __asm { NOP }
    /* +0xd28028 */ __asm { NOP }
    /* +0xd28029 */ __asm { NOP }
    /* +0xd2802a */ __asm { NOP }
    /* +0xd2802b */ __asm { NOP }
    /* +0xd2802c */ __asm { TEST uint8_t ptr [RDX + -0x1e24f7d5],0x1 }
    /* +0xd28033 */ __asm { JZ 0x7fffa5498796 }
    /* +0xd28039 */ __asm { MOV RDX,0x0 }
    /* +0xd28040 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd28047 */ __asm { LEA RDX,[0x7fffa47b63ae] }
    /* +0xd2804e */ __asm { MOV R11,-0x3425c44ac894b1be }
    /* +0xd28058 */ __asm { CMP RDX,R11 }
    /* +0xd2805b */ __asm { NOP }
    /* +0xd2805c */ __asm { NOP }
    /* +0xd2805d */ __asm { NOP }
    /* +0xd2805e */ __asm { NOP }
    /* +0xd2805f */ __asm { NOP }
    /* +0xd28060 */ __asm { MOV R8W,0x9a5e }
    /* +0xd28065 */ __asm { MOV R9W,0x1cb8 }
    /* +0xd2806a */ __asm { XOR R9D,R15D }
    /* +0xd2806d */ __asm { MOV qword ptr [RSP + 0x58],RCX }
    /* +0xd28072 */ __asm { MOV EAX,dword ptr [RDX + 0x618a] }
    /* +0xd28078 */ __asm { IMUL R9D,R9D,-0x329 }
    /* +0xd2807f */ __asm { MOVZX EDX,R9W }
    /* +0xd28083 */ __asm { NOT R8D }
    /* +0xd28086 */ __asm { ADD R8D,R15D }
    /* +0xd28089 */ __asm { ROL R8W,0x9 }
    /* +0xd2808e */ __asm { MOVZX R9D,R8W }
    /* +0xd28092 */ __asm { JMP 0x7fffa5498b8a }
    /* +0xd28097 */ __asm { MOV RDX,-0x36af865843016d59 }
    /* +0xd280a1 */ __asm { MOV R9D,0x3751616f }
    /* +0xd280a7 */ __asm { ADD RDX,-0x6725d2c2 }
    /* +0xd280ae */ __asm { ROL RDX,0x3 }
    /* +0xd280b2 */ __asm { MOV R15,qword ptr [RSP + 0x88] }
    /* +0xd280ba */ __asm { ADD RDX,R15 }
    /* +0xd280bd */ __asm { CMP R9,RDX }
    /* +0xd280c0 */ __asm { MOV R12,qword ptr [RSP + 0xd0] }
    /* +0xd280c8 */ __asm { JZ 0x7fffa549914d }
    /* +0xd280ce */ __asm { MOV R8D,0xdf3481f6 }
    /* +0xd280d4 */ __asm { MOV ECX,0x27e12087 }
    /* +0xd280d9 */ __asm { SUB ECX,R8D }
    /* +0xd280dc */ __asm { MOV ECX,dword ptr [RCX + R9*0x1 + 0x2c4] }
    /* +0xd280e4 */ __asm { MOV RDX,0x5555555555555556 }
    /* +0xd280ee */ __asm { IMUL RDX,RCX }
    /* +0xd280f2 */ __asm { MOV R9,0x5555555555555555 }
    /* +0xd280fc */ __asm { CMP RDX,R9 }
    /* +0xd280ff */ __asm { JA 0x7fffa54988cc }
    /* +0xd28105 */ __asm { MOV R8D,0x120af082 }
    /* +0xd2810b */ __asm { MOVD XMM2,R8D }
    /* +0xd28110 */ __asm { RDTSC }
    /* +0xd28112 */ __asm { SHL RDX,0x20 }
    /* +0xd28116 */ __asm { OR RDX,RAX }
    /* +0xd28119 */ __asm { MOV R8D,0x1e890e0c }
    /* +0xd2811f */ __asm { MOVD XMM0,R15D }
    /* +0xd28124 */ __asm { PADDD XMM0,XMM2 }
    /* +0xd28128 */ __asm { MOVD ECX,XMM0 }
    /* +0xd2812c */ __asm { MOV R9D,0x10784546 }
    /* +0xd28132 */ __asm { XOR R8D,0x52c4519d }
    /* +0xd28139 */ __asm { XOR R9D,R15D }
    /* +0xd2813c */ __asm { ROL R9D,0x1d }
    /* +0xd28140 */ __asm { ADD R8D,R15D }
    /* +0xd28143 */ __asm { ROL ECX,0x10 }
    /* +0xd28146 */ __asm { MOVSXD RBP,ECX }
    /* +0xd28149 */ __asm { IMUL RDX,R11 }
    /* +0xd2814d */ __asm { MOV R11,-0x4e4590cde4da0c6 }
    /* +0xd28157 */ __asm { ADD R11,RDX }
    /* +0xd2815a */ __asm { MOV EDX,R11D }
    /* +0xd2815d */ __asm { OR EDX,0x2d }
    /* +0xd28160 */ __asm { MOV RCX,R11 }
    /* +0xd28163 */ __asm { SHR RCX,0x3b }
    /* +0xd28167 */ __asm { MOV RAX,R11 }
    /* +0xd2816a */ __asm { SHR RAX,0x1b }
    /* +0xd2816e */ __asm { SHR R11,0x2d }
    /* +0xd28172 */ __asm { CMP RBP,R9 }
    /* +0xd28175 */ __asm { CMOVGE R11D,EDX }
    /* +0xd28179 */ __asm { XOR EAX,R11D }
    /* +0xd2817c */ __asm { ROR EAX,CL }
    /* +0xd2817e */ __asm { MOV dword ptr [RSP + 0xa0],R8D }
    /* +0xd28186 */ __asm { MOV R8D,dword ptr [RSP + 0xa0] }
    /* +0xd2818e */ __asm { TEST R8D,R8D }
    /* +0xd28191 */ __asm { NOP }
    /* +0xd28192 */ __asm { NOP }
    /* +0xd28193 */ __asm { NOP }
    /* +0xd28194 */ __asm { NOP }
    /* +0xd28195 */ __asm { NOP }
    /* +0xd28196 */ __asm { PUSHFQ }
    /* +0xd28197 */ __asm { POP R8 }
    /* +0xd28199 */ __asm { TEST R8D,0x100 }
    /* +0xd281a0 */ __asm { NOP }
    /* +0xd281a1 */ __asm { NOP }
    /* +0xd281a2 */ __asm { NOP }
    /* +0xd281a3 */ __asm { NOP }
    /* +0xd281a4 */ __asm { NOP }
    /* +0xd281a5 */ __asm { CMP EAX,0x114a3a }
    /* +0xd281aa */ __asm { JA 0x7fffa54982f0 }
    /* +0xd281b0 */ __asm { MOV dword ptr [RSP + 0xa0],0xc0688060 }
    /* +0xd281bb */ __asm { MOV R8D,dword ptr [RSP + 0xa0] }
    /* +0xd281c3 */ __asm { MOV R8W,0x913c }
    /* +0xd281c8 */ __asm { PXOR XMM2,XMM2 }
    /* +0xd281cc */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM2 }
    /* +0xd281d5 */ __asm { MOV R9D,R15D }
    /* +0xd281d8 */ __asm { OR R9D,0x1 }
    /* +0xd281dc */ __asm { IMUL R9D,R8D }
    /* +0xd281e0 */ __asm { IMUL R8D,R9D,-0x3dbf }
    /* +0xd281e7 */ __asm { ADD R8D,0x6a1c }
    /* +0xd281ee */ __asm { MOVZX ECX,R8W }
    /* +0xd281f2 */ __asm { MOV RDX,qword ptr GS:[RCX] }
    /* +0xd281f6 */ __asm { MOV R11,-0x79418593008c7987 }
    /* +0xd28200 */ __asm { CMP qword ptr [RDX + 0x18],R11 }
    /* +0xd28204 */ __asm { NOP }
    /* +0xd28205 */ __asm { NOP }
    /* +0xd28206 */ __asm { NOP }
    /* +0xd28207 */ __asm { NOP }
    /* +0xd28208 */ __asm { NOP }
    /* +0xd28209 */ __asm { NOP }
    /* +0xd2820a */ __asm { NOP }
    /* +0xd2820b */ __asm { NOP }
    /* +0xd2820c */ __asm { NOP }
    /* +0xd2820d */ __asm { NOP }
    /* +0xd2820e */ __asm { NOP }
    /* +0xd2820f */ __asm { NOP }
    /* +0xd28210 */ __asm { NOP }
    /* +0xd28211 */ __asm { NOP }
    /* +0xd28212 */ __asm { NOP }
    /* +0xd28213 */ __asm { NOP }
    /* +0xd28214 */ __asm { NOP }
    /* +0xd282f0 */ __asm { LEA RCX,[0x7fffa478aec4] }
    /* +0xd282f7 */ __asm { MOV RDX,-0x3e8175ee9b1c9549 }
    /* +0xd28301 */ __asm { CMP RCX,RDX }
    /* +0xd28304 */ __asm { JZ 0x7fffa549915d }
    /* +0xd2830a */ __asm { MOV R8W,0x5e5 }
    /* +0xd2830f */ __asm { IMUL R8D,R8D,0x5f63 }
    /* +0xd28316 */ __asm { MOV R9W,0x9222 }
    /* +0xd2831b */ __asm { ADD R8D,0x67f0 }
    /* +0xd28322 */ __asm { MOV qword ptr [RSP + 0x58],RDX }
    /* +0xd28327 */ __asm { MOVD XMM2,R8D }
    /* +0xd2832c */ __asm { IMUL R8D,R9D,-0x33f1 }
    /* +0xd28333 */ __asm { MOVD XMM0,R15D }
    /* +0xd28338 */ __asm { PSUBW XMM2,XMM0 }
    /* +0xd2833c */ __asm { XOR R8D,0xd9e }
    /* +0xd28343 */ __asm { SUB R8D,R15D }
    /* +0xd28346 */ __asm { MOVZX EDX,R8W }
    /* +0xd2834a */ __asm { MOV EAX,dword ptr [RCX + -0x689c] }
    /* +0xd28350 */ __asm { PEXTRW R9D,XMM2,0x0 }
    /* +0xd28356 */ __asm { JMP 0x7fffa5498b8a }
    /* +0xd2835b */ __asm { MOV EDX,0xf59a83c }
    /* +0xd28360 */ __asm { MOV R11,-0x2bfaf03e9c41b186 }
    /* +0xd2836a */ __asm { CMP RDX,R11 }
    /* +0xd2836d */ __asm { MOV R15,qword ptr [RSP + 0x88] }
    /* +0xd28375 */ __asm { MOV R12,qword ptr [RSP + 0xd0] }
    /* +0xd2837d */ __asm { JZ 0x7fffa5499155 }
    /* +0xd28383 */ __asm { MOV ECX,dword ptr [RDX + 0x70a45a88] }
    /* +0xd28389 */ __asm { MOV RDX,0x5555555555555556 }
    /* +0xd28393 */ __asm { IMUL RDX,RCX }
    /* +0xd28397 */ __asm { MOV R11,0x5555555555555555 }
    /* +0xd283a1 */ __asm { CMP RDX,R11 }
    /* +0xd283a4 */ __asm { JBE 0x7fffa5498928 }
    /* +0xd283aa */ __asm { LEA RAX,[0x7fffa47c15dd] }
    /* +0xd283b1 */ __asm { MOV RDX,-0x13a13dbdd9bba96c }
    /* +0xd283bb */ __asm { CMP RAX,RDX }
    /* +0xd283be */ __asm { JZ 0x7fffa5499165 }
    /* +0xd283c4 */ __asm { MOV qword ptr [RSP + 0x58],RDX }
    /* +0xd283c9 */ __asm { MOV R8W,0x5d70 }
    /* +0xd283ce */ __asm { MOV R9D,0x6d70 }
    /* +0xd283d4 */ __asm { SUB R9D,R8D }
    /* +0xd283d7 */ __asm { ROL R9W,0x4 }
    /* +0xd283dc */ __asm { MOV R8W,0x6ee4 }
    /* +0xd283e1 */ __asm { XOR R8D,0xe34e }
    /* +0xd283e8 */ __asm { MOV ECX,R15D }
    /* +0xd283eb */ __asm { ROR R8W,CL }
    /* +0xd283ef */ __asm { MOVZX EDX,R9W }
    /* +0xd283f3 */ __asm { ADD R8D,0xffffe4cb }
    /* +0xd283fa */ __asm { MOV R11W,0xcb5e }
    /* +0xd283ff */ __asm { LEA ECX,[R15 + R11*0x1] }
    /* +0xd28403 */ __asm { ADD ECX,0x43b6 }
    /* +0xd28409 */ __asm { MOVSX R11,CX }
    /* +0xd2840d */ __asm { MOV EAX,dword ptr [RAX + R11*0x1 + 0x50] }
    /* +0xd28412 */ __asm { MOVZX R9D,R8W }
    /* +0xd28416 */ __asm { JMP 0x7fffa5498b8a }
    /* +0xd2841b */ __asm { RDTSC }
    /* +0xd2841d */ __asm { SHL RDX,0x20 }
    /* +0xd28421 */ __asm { OR RDX,RAX }
    /* +0xd28424 */ __asm { MOV R8W,0xdc0a }
    /* +0xd28429 */ __asm { MOV R11,0x5851f42d4c957f2d }
    /* +0xd28433 */ __asm { IMUL R11,RDX }
    /* +0xd28437 */ __asm { MOV RAX,-0x5f43136f0b2df8e2 }
    /* +0xd28441 */ __asm { ADD RAX,R11 }
    /* +0xd28444 */ __asm { MOV R9,RAX }
    /* +0xd28447 */ __asm { MOV RCX,RAX }
    /* +0xd2844a */ __asm { LEA R11D,[RAX + RAX*0x8] }
    /* +0xd2844e */ __asm { SHR RAX,0x2d }
    /* +0xd28452 */ __asm { SHR R9,0x1b }
    /* +0xd28456 */ __asm { SHR RCX,0x3b }
    /* +0xd2845a */ __asm { LEA EDX,[R11 + R11*0x2] }
    /* +0xd2845e */ __asm { MOV R11D,0x51137fe5 }
    /* +0xd28464 */ __asm { ADD R8D,0xffffd400 }
    /* +0xd2846b */ __asm { ROL R8W,0xd }
    /* +0xd28470 */ __asm { ADD R8D,R15D }
    /* +0xd28473 */ __asm { MOVD XMM0,R11D }
    /* +0xd28478 */ __asm { PMULUDQ XMM0,XMM2 }
    /* +0xd2847c */ __asm { MOVD R11D,XMM0 }
    /* +0xd28481 */ __asm { ROL R11D,0x3 }
    /* +0xd28485 */ __asm { XOR R11D,0xe7da1599 }
    /* +0xd2848c */ __asm { MOVSXD R11,R11D }
    /* +0xd2848f */ __asm { CMP R11,-0x5731d5bc }
    /* +0xd28496 */ __asm { CMOVNZ R9D,EDX }
    /* +0xd2849a */ __asm { XOR EAX,R9D }
    /* +0xd2849d */ __asm { ROR EAX,CL }
    /* +0xd2849f */ __asm { MOVZX ECX,R8W }
    /* +0xd284a3 */ __asm { MOV RDX,qword ptr GS:[RCX] }
    /* +0xd284a7 */ __asm { MOV R8W,0x5a96 }
    /* +0xd284ac */ __asm { ADD R8D,R15D }
    /* +0xd284af */ __asm { IMUL R8D,R8D,-0x4a3d }
    /* +0xd284b6 */ __asm { NOT R8D }
    /* +0xd284b9 */ __asm { MOVZX ECX,R8W }
    /* +0xd284bd */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0xd284c1 */ __asm { SUB RDX,qword ptr [R11 + 0x18] }
    /* +0xd284c5 */ __asm { MOV R11,0x53e8ccdc057ac76f }
    /* +0xd284cf */ __asm { CMP RDX,R11 }
    /* +0xd284d2 */ __asm { NOP }
    /* +0xd284d3 */ __asm { NOP }
    /* +0xd284d4 */ __asm { NOP }
    /* +0xd284d5 */ __asm { NOP }
    /* +0xd284d6 */ __asm { NOP }
    /* +0xd284d7 */ __asm { NOP }
    /* +0xd284d8 */ __asm { NOP }
    /* +0xd284d9 */ __asm { NOP }
    /* +0xd284da */ __asm { NOP }
    /* +0xd284db */ __asm { NOP }
    /* +0xd284dc */ __asm { CMP EAX,0x41e6adb }
    /* +0xd284e1 */ __asm { JA 0x7fffa5498734 }
    /* +0xd284e7 */ __asm { MOV RDX,qword ptr [RSP + 0x148] }
    /* +0xd284ef */ __asm { MOV RDX,qword ptr [RDX + -0xbf0] }
    /* +0xd284f6 */ __asm { MOV RCX,-0x5d64b05cfd35d5a1 }
    /* +0xd28500 */ __asm { AND RCX,RDX }
    /* +0xd28503 */ __asm { MOV RDX,0x7fd7234a1664f61f }
    /* +0xd2850d */ __asm { CMP RCX,RDX }
    /* +0xd28510 */ __asm { NOP }
    /* +0xd28511 */ __asm { NOP }
    /* +0xd28512 */ __asm { NOP }
    /* +0xd28513 */ __asm { NOP }
    /* +0xd28514 */ __asm { NOP }
    /* +0xd28515 */ __asm { LEA RDX,[0x7fffa47c4276] }
    /* +0xd2851c */ __asm { MOV RCX,RDX }
    /* +0xd2851f */ __asm { ROR RCX,0x1 }
    /* +0xd28522 */ __asm { MOV R11,0x73bb38197c39595d }
    /* +0xd2852c */ __asm { IMUL R11,RCX }
    /* +0xd28530 */ __asm { MOV R9,0x114c5ad30c1da08b }
    /* +0xd2853a */ __asm { CMP R11,R9 }
    /* +0xd2853d */ __asm { JZ 0x7fffa54991ad }
    /* +0xd28543 */ __asm { MOV ECX,0xd2175420 }
    /* +0xd28548 */ __asm { MOV EAX,0x89d0286b }
    /* +0xd2854d */ __asm { XOR ECX,0x838d1bfb }
    /* +0xd28553 */ __asm { ADD ECX,0x5ab5c076 }
    /* +0xd28559 */ __asm { XOR EAX,R15D }
    /* +0xd2855c */ __asm { NOT EAX }
    /* +0xd2855e */ __asm { IMUL ECX,dword ptr [RSP + 0x9c] }
    /* +0xd28566 */ __asm { XOR R8D,R8D }
    /* +0xd28569 */ __asm { CMP RCX,RAX }
    /* +0xd2856c */ __asm { ADC R8B,0xff }
    /* +0xd28570 */ __asm { MOVZX R8D,R8B }
    /* +0xd28574 */ __asm { MOVD XMM2,R8D }
    /* +0xd28579 */ __asm { MOVZX EAX,uint8_t ptr [RDX + -0x7b2d] }
    /* +0xd28580 */ __asm { MOVZX R8D,uint8_t ptr [RDX + RAX*0x4 + -0x7b27] }
    /* +0xd28589 */ __asm { MOVD XMM0,R8D }
    /* +0xd2858e */ __asm { PXOR XMM0,XMM2 }
    /* +0xd28592 */ __asm { MOVD R8D,XMM0 }
    /* +0xd28597 */ __asm { ROL R8B,0x5 }
    /* +0xd2859b */ __asm { MOV uint8_t ptr [RSP + 0xa0],R8B }
    /* +0xd285a3 */ __asm { MOVZX R8D,uint8_t ptr [RDX + RAX*0x4 + -0x7b26] }
    /* +0xd285ac */ __asm { NOT R8B }
    /* +0xd285af */ __asm { ROL R8B,0x5 }
    /* +0xd285b3 */ __asm { MOV uint8_t ptr [RSP + 0xa1],R8B }
    /* +0xd285bb */ __asm { MOVZX R8D,uint8_t ptr [RDX + RAX*0x4 + -0x7b25] }
    /* +0xd285c4 */ __asm { NOT R8B }
    /* +0xd285c7 */ __asm { ROL R8B,0x5 }
    /* +0xd285cb */ __asm { MOV uint8_t ptr [RSP + 0xa2],R8B }
    /* +0xd285d3 */ __asm { MOVZX EAX,uint8_t ptr [RDX + RAX*0x4 + -0x7b24] }
    /* +0xd285db */ __asm { NOT AL }
    /* +0xd285dd */ __asm { ROL AL,0x5 }
    /* +0xd285e0 */ __asm { MOV uint8_t ptr [RSP + 0xa3],AL }
    /* +0xd285e7 */ __asm { MOV ECX,0x9102c3cc }
    /* +0xd285ec */ __asm { XOR ECX,dword ptr [RSP + 0xa0] }
    /* +0xd285f3 */ __asm { MOVD XMM2,ECX }
    /* +0xd285f7 */ __asm { MOV R8D,0x1 }
    /* +0xd285fd */ __asm { SHL R8D,CL }
    /* +0xd28600 */ __asm { MOVD XMM0,R8D }
    /* +0xd28605 */ __asm { PAND XMM0,XMM2 }
    /* +0xd28609 */ __asm { MOVD R8D,XMM0 }
    /* +0xd2860e */ __asm { TEST R8D,R8D }
    /* +0xd28611 */ __asm { JZ 0x7fffa5498734 }
    /* +0xd28617 */ __asm { PXOR XMM2,XMM2 }
    /* +0xd2861b */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM2 }
    /* +0xd28624 */ __asm { MOV dword ptr [RSP + 0x58],0xc0ba0478 }
    /* +0xd2862c */ __asm { MOV R8D,dword ptr [RSP + 0x58] }
    /* +0xd28631 */ __asm { MOV R9W,0x32c1 }
    /* +0xd28636 */ __asm { MOV dword ptr [RSP + 0xa0],0x0 }
    /* +0xd28641 */ __asm { MOV R8D,R15D }
    /* +0xd28644 */ __asm { OR R8D,0x1 }
    /* +0xd28648 */ __asm { MOV EDX,R8D }
    /* +0xd2864b */ __asm { IMUL EDX,R9D }
    /* +0xd2864f */ __asm { NOT EDX }
    /* +0xd28651 */ __asm { MOVZX ECX,DX }
    /* +0xd28654 */ __asm { MOV RDX,qword ptr GS:[RCX] }
    /* +0xd28658 */ __asm { MOV RDX,qword ptr [RDX + 0x18] }
    /* +0xd2865c */ __asm { MOV RCX,-0x1d45eb45eaa43b9d }
    /* +0xd28666 */ __asm { IMUL RCX,RDX }
    /* +0xd2866a */ __asm { MOV RDX,0x27d858efd699db49 }
    /* +0xd28674 */ __asm { CMP RCX,RDX }
    /* +0xd28677 */ __asm { NOP }
    /* +0xd28678 */ __asm { NOP }
    /* +0xd28679 */ __asm { NOP }
    /* +0xd2867a */ __asm { NOP }
    /* +0xd2867b */ __asm { NOP }
    /* +0xd2867c */ __asm { MOV R9W,0x4286 }
    /* +0xd28681 */ __asm { ADD R9D,0xb4a }
    /* +0xd28688 */ __asm { IMUL R9D,R8D }
    /* +0xd2868c */ __asm { MOVZX ECX,R9W }
    /* +0xd28690 */ __asm { MOV RDX,qword ptr GS:[RCX] }
    /* +0xd28694 */ __asm { MOV RCX,0x4298a69e8c33c42f }
    /* +0xd2869e */ __asm { MOV R11,0x7067eb4213055750 }
    /* +0xd286a8 */ __asm { CMP RDX,R11 }
    /* +0xd286ab */ __asm { NOP }
    /* +0xd286ac */ __asm { NOP }
    /* +0xd286ad */ __asm { NOP }
    /* +0xd286ae */ __asm { NOP }
    /* +0xd286af */ __asm { NOP }
    /* +0xd286b0 */ __asm { MOV RBP,R10 }
    /* +0xd286b3 */ __asm { LEA RDX,[0x7fffa47b9027] }
    /* +0xd286ba */ __asm { MOV R10,0x1d4fd9fe3f0a88fb }
    /* +0xd286c4 */ __asm { CMP RDX,R10 }
    /* +0xd286c7 */ __asm { JZ 0x7fffa54991b8 }
    /* +0xd286cd */ __asm { MOV qword ptr [RSP + 0x58],RCX }
    /* +0xd286d2 */ __asm { MOV R8W,0xa3c9 }
    /* +0xd286d7 */ __asm { MOVD XMM2,R15D }
    /* +0xd286dc */ __asm { ADD R8D,0x5b36 }
    /* +0xd286e3 */ __asm { ROL R8W,0xc }
    /* +0xd286e8 */ __asm { NOT R8D }
    /* +0xd286eb */ __asm { MOV R9W,0x54f7 }
    /* +0xd286f0 */ __asm { ADD R9D,0xa9 }
    /* +0xd286f7 */ __asm { MOVD XMM0,R9D }
    /* +0xd286fc */ __asm { PXOR XMM0,XMM2 }
    /* +0xd28700 */ __asm { MOV CX,0x2dc7 }
    /* +0xd28704 */ __asm { MOV EAX,dword ptr [RDX + 0x34a1] }
    /* +0xd2870a */ __asm { XOR ECX,R15D }
    /* +0xd2870d */ __asm { ADD ECX,0xffff8c68 }
    /* +0xd28713 */ __asm { ROL CX,0x9 }
    /* +0xd28717 */ __asm { MOVZX R9D,R8W }
    /* +0xd2871b */ __asm { MOVZX EDX,CX }
    /* +0xd2871e */ __asm { MOVD R10D,XMM0 }
    /* +0xd28723 */ __asm { MOVSX R10,R10W }
    /* +0xd28727 */ __asm { LEA R8,[RSP + 0xa0] }
    /* +0xd2872f */ __asm { SYSCALL }
    /* +0xd28731 */ __asm { MOV R10,RBP }
    /* +0xd28734 */ __asm { LEA RDX,[0x7fffa4788a62] }
    /* +0xd2873b */ __asm { MOV R11,-0x576a52a0fa321799 }
    /* +0xd28745 */ __asm { CMP RDX,R11 }
    /* +0xd28748 */ __asm { JZ 0x7fffa5499171 }
    /* +0xd2874e */ __asm { MOVD XMM2,R15D }
    /* +0xd28753 */ __asm { MOV qword ptr [RSP + 0x58],RCX }
    /* +0xd28758 */ __asm { MOV EAX,dword ptr [RDX + -0x3c02] }
    /* +0xd2875e */ __asm { MOV R8W,0xba3 }
}


// ============================================================================
// Function : FUN_7fffa54991f0  |  RVA: 0xd291f0  |  Size: 56 bytes
// Callers  : FUN_7fffa55aec50@0xe3ec50, FUN_7fffa5248a55@0xad8a55, FUN_7fffa51306a1@0x9c06a1, FUN_7fffa5267a20@0xaf7a20
// Callees  : FUN_7fffa54539d0@0xce39d0
// ============================================================================
uint64_t FUN_7fffa54991f0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  
  lVar2 = FUN_7fffa54539d0();
  plVar1 = *(int64_t **)(lVar2 + 0x58);
  while( true ) {
    if (plVar1 == (int64_t *)0x0) {
      return 1;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (int64_t *)plVar1[1];
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5499230  |  RVA: 0xd29230  |  Size: 578 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int FUN_7fffa5499230(uint64_t param_1,int64_t param_2)

{
  uint32_t in_EAX;
  uint8_t bVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t in_XMM4_Qa;
  
  uVar6 = (uint64_t)(param_2 * -0x322437240b1b0931) >> 0x3c ^ param_2 * -0x322437240b1b0931;
  uVar2 = ~(in_XMM4_Qa << 0x39 | in_XMM4_Qa >> 7);
  uVar2 = uVar2 >> 0x15 ^ uVar2;
  uVar2 = uVar2 >> 0x2a ^ uVar2;
  uVar4 = 0x8000000d;
  if ((*(uint8_t *)(uVar2 + 0x1a2) & 1) != 0) goto LAB_7fffa549944d;
  bVar3 = *(uint8_t *)(uVar2 + 0x1e) & 7;
  if (bVar3 < 4) {
    if (bVar3 < 2) {
      if (bVar3 == 1) {
        bVar1 = *(uint8_t *)(uVar6 + 0x14);
        bVar3 = *(uint8_t *)(uVar6 + 8) | 6;
        *(uint8_t *)(uVar6 + 8) = bVar3;
        *(uint16_t *)(uVar6 + 0x12) = 0x71b;
        goto LAB_7fffa549939a;
      }
      *(uint16_t *)(uVar6 + 10) = 0x202;
      *(uint16_t *)(uVar6 + 0x12) = 0x61b;
      bVar1 = *(uint8_t *)(uVar6 + 0x14);
      bVar3 = *(uint8_t *)(uVar6 + 8) | 6;
      *(uint8_t *)(uVar6 + 8) = bVar3;
    }
    else {
      if (bVar3 == 3) {
        *(uint16_t *)(uVar6 + 0x12) = 0x72a;
        *(uint16_t *)(uVar6 + 10) = 0x202;
        *(uint8_t *)(uVar6 + 0x14) = (*(uint8_t *)(uVar6 + 0x14) & 0xf0) + 1;
        bVar3 = *(uint8_t *)(uVar6 + 8) | 6;
        *(uint8_t *)(uVar6 + 8) = bVar3;
        goto LAB_7fffa54993da;
      }
      *(uint16_t *)(uVar6 + 0x12) = 0x62a;
      bVar1 = *(uint8_t *)(uVar6 + 0x14);
      bVar3 = *(uint8_t *)(uVar6 + 8) | 6;
      *(uint8_t *)(uVar6 + 8) = bVar3;
LAB_7fffa549939a:
      *(uint16_t *)(uVar6 + 10) = 0x202;
    }
    *(uint8_t *)(uVar6 + 0x14) = (bVar1 & 0xf0) + 1;
  }
  else if (bVar3 < 6) {
    bVar1 = ~((char)in_EAX + 0x90U);
    if ((char)bVar3 < (char)(bVar1 >> 1 | bVar1 << 7)) {
      *(uint8_t *)(uVar6 + 0x12) = 0x33;
      *(uint8_t *)(uVar6 + 10) = 2;
      bVar3 = *(uint8_t *)(uVar6 + 8) | 2;
      *(uint8_t *)(uVar6 + 8) = bVar3;
    }
    else {
      *(uint8_t *)(uVar6 + 0x12) = 0x3b;
      bVar3 = *(uint8_t *)(uVar6 + 8) | 2;
      *(uint8_t *)(uVar6 + 10) = 2;
      *(uint8_t *)(uVar6 + 8) = bVar3;
    }
  }
  else {
    if (bVar3 == 7) {
      bVar3 = *(uint8_t *)(uVar6 + 8) | 2;
      *(uint8_t *)(uVar6 + 8) = bVar3;
      *(uint8_t *)(uVar6 + 0x12) = 0x1b;
    }
    else {
      if (*(uint8_t *)(uVar2 + 0x1e) < 0x40) {
        bVar3 = *(uint8_t *)(uVar6 + 8);
        *(uint8_t *)(uVar6 + 0x12) = *(uint8_t *)(uVar6 + 0x12) & 0xf8 | 3;
        goto LAB_7fffa54993da;
      }
      *(uint8_t *)(uVar6 + 0x12) = 0x2a;
      bVar3 = *(uint8_t *)(uVar6 + 8) | 2;
      *(uint8_t *)(uVar6 + 8) = bVar3;
    }
    *(uint8_t *)(uVar6 + 10) = 2;
  }
LAB_7fffa54993da:
  *(uint8_t *)(uVar6 + 8) = *(uint8_t *)(uVar2 + 6) >> 2 & 8 | bVar3 & 0xf7;
  *(uint8_t *)(uVar6 + 0xc) = *(uint8_t *)(uVar2 + 0xe) & 0xf;
  uVar4 = 0;
  if ((*(uint8_t *)(uVar2 + 6) & 0x20) == 0) {
    uVar2 = 0;
  }
  else {
    bVar3 = *(uint8_t *)(uVar2 + 0xe) & 0xf;
    uVar5 = 0xffffffffffffffff >> (bVar3 * -8 & 0x3f);
    uVar2 = (uint64_t)((*(uint32_t *)(uVar2 + 0x28) >> ((uint8_t)(bVar3 * '\b' - 1) & 0x1f) & 1) != 0) *
            ~uVar5 | (uint64_t)((uint32_t)uVar5 & *(uint32_t *)(uVar2 + 0x28));
  }
  *(uint64_t *)(uVar6 + 0x18) = uVar2;
LAB_7fffa549944d:
  return ((in_EAX | 1) * 0x5425c6d1 ^ 0x45a41c7c) * (uVar4 << 0x1c ^ uVar4);
}


// ============================================================================
// Function : _guard_dispatch_icall  |  RVA: 0xd29490  |  Size: 2 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x7fffa5499490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ============================================================================
// Function : FUN_7fffa54994a0  |  RVA: 0xd294a0  |  Size: 449 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa54994a0(int64_t param_1,uint64_t param_2,uint32_t param_3)

{
  uint64_t *puVar1;
  uint16_t uVar2;
  code *pcVar3;
  uint8_t (*pauVar4) [16];
  uint64_t *puVar5;
  int iVar6;
  
  pauVar4 = (uint8_t (*) [16])(param_1 + 0x41f8fb93);
  puVar5 = *(uint64_t **)*pauVar4;
  if (puVar5 != (uint64_t *)0x0) {
    puVar1 = *(uint64_t **)(param_1 + 0x41f8fb9b);
    if (puVar5 != puVar1) {
      do {
        if (7 < puVar5[7]) {
          pcVar3 = (code *)((int64_t)(int)~(param_3 ^ 0xc8e4f095) + 0x7fffa5691759);
          (*pcVar3)(pcVar3,param_2,puVar5[4] >> 0x3d ^ puVar5[4]);
        }
        uVar2 = (uint16_t)param_3 ^ 0xcb14;
        *(uint16_t *)(puVar5 + 4) = 0;
        puVar5[6] = 0;
        puVar5[7] = 7;
        if ((uint64_t)(uint16_t)((uVar2 << 5 | uVar2 >> 0xb) + 0xead3) < puVar5[3]) {
          iVar6 = (param_3 | 1) * -0x3afff4d5;
          (*(code *)((int64_t)iVar6 + 0x7fffa5694471))(iVar6,param_2,*puVar5 >> 0x3d ^ *puVar5);
        }
        puVar5[3] = 7;
        puVar5[2] = 0;
        *(uint16_t *)puVar5 = 0;
        puVar5 = puVar5 + 8;
      } while (puVar5 != puVar1);
      puVar5 = *(uint64_t **)*pauVar4;
    }
    FUN_7fffa5687c30(0xe9261f0b,param_2,(uint64_t)puVar5 >> 0x3d ^ (uint64_t)puVar5);
    *pauVar4 = (uint8_t  [16])0x0;
    *(uint64_t *)(param_1 + 0x41f8fba3) = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5499670  |  RVA: 0xd29670  |  Size: 429 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5499670(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4,
                     uint64_t param_5)

{
  int64_t lVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  param_5 = (param_5 << 5 | param_5 >> 0x3b) ^ (param_5 << 7 | param_5 >> 0x39) ^ param_5;
  uVar6 = param_5 << 10 | param_5 >> 0x36;
  param_5 = param_5 ^ (param_5 << 0xe | param_5 >> 0x32);
  uVar5 = uVar6 & param_5;
  if (0x8569d0c1 - param_3 < (param_3 | 1) * -0x7f8381a9) {
    uVar5 = param_5 ^ uVar6;
  }
  uVar5 = (uVar5 << 0x14 | uVar5 >> 0x2c) ^ (uVar5 << 0x1c | uVar5 >> 0x24) ^ uVar5;
  uVar5 = (uVar5 << 0x38 | uVar5 >> 8) ^ (uVar5 << 0x28 | uVar5 >> 0x18) ^ uVar5;
  uVar5 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ (uVar5 << 0x30 | uVar5 >> 0x10) ^ uVar5;
  uVar5 = (uVar5 << 0x2b | uVar5 >> 0x15) ^ (uVar5 << 0x29 | uVar5 >> 0x17) ^ uVar5;
  uVar5 = (uVar5 << 0x12 | uVar5 >> 0x2e) ^ (uVar5 << 0x16 | uVar5 >> 0x2a) ^ uVar5;
  uVar5 = (uVar5 << 0x24 | uVar5 >> 0x1c) ^ (uVar5 << 0x2c | uVar5 >> 0x14) ^ uVar5;
  uVar5 = (uVar5 << 0x18 | uVar5 >> 0x28) ^ (uVar5 << 8 | uVar5 >> 0x38) ^ uVar5;
  plVar4 = (int64_t *)((uVar5 << 0x10 | uVar5 >> 0x30) ^ (uVar5 << 0x30 | uVar5 >> 0x10) ^ uVar5);
  uVar5 = plVar4[3];
  if (7 < uVar5) {
    uVar6 = uVar5 * 2 + 2;
    lVar1 = *plVar4;
    lVar3 = lVar1;
    if (0xfff < uVar6) {
      lVar3 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (uint64_t)((lVar1 + -8) - lVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar6 = uVar5 * 2 + 0x29;
    }
    (*(code *)(&UNK_7fffa508f4fc +
              (int)((0xca804733 - param_3) * 0x800 | 0xca804733 - param_3 >> 0x15)))(lVar3,uVar6);
  }
  plVar4[3] = 7;
  *(uint16_t *)plVar4 = 0;
  plVar4[2] = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa5499820  |  RVA: 0xd29820  |  Size: 593 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa549994c) */

void FUN_7fffa5499820(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  lVar5 = 0;
  bRam00007fffa4785c8b = 0;
  uRam00007fffa4785ca4 = 0;
  uRam00007fffa4785cac = 0;
  uRam00007fffa4785c94 = 0;
  uRam00007fffa4785c9c = 0;
  uRam00007fffa4785cb4 = 0;
  uRam00007fffa4785cbf = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0x7fff,(int)uVar1)) * 0xda5c337e1a7305c;
  while( true ) {
    lVar3 = lVar3 * 0xda5c337e1a7305c + 0xda5c337e1a7305c;
    lVar4 = lVar3 * 0xda5c337e1a7305c + 0xda5c337e1a7305c;
    *(char *)(lVar5 + 0x7fffa4785c85) = (char)((uint64_t)lVar4 >> 0x20);
    lVar4 = lVar4 * 0xda5c337e1a7305c + 0xda5c337e1a7305c;
    *(char *)(lVar5 + 0x7fffa4785c86) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar5 + 0x7fffa4785c84) = (char)((uint64_t)lVar3 >> 0x20);
    if (lVar5 == 0x40) break;
    lVar3 = lVar4 * 0xda5c337e1a7305c + 0xda5c337e1a7305c;
    *(char *)(lVar5 + 0x7fffa4785c87) = (char)((uint64_t)lVar3 >> 0x20);
    lVar5 = lVar5 + 4;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa4785c8b * 0x33333334 + 0x33333334) * 5;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa4785c94) = 0xffffffffffffffff;
  bRam00007fffa4785c8b = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5499a80  |  RVA: 0xd29a80  |  Size: 708 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5499ba9) */
/* WARNING: Removing unreachable block (ram,0x7fffa5499c4f) */

void FUN_7fffa5499a80(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  bRam00007fffa47bf8e4 = '\0';
  uRam00007fffa47bf921 = 0;
  uRam00007fffa47bf929 = 0;
  uRam00007fffa47bf911 = 0;
  uRam00007fffa47bf919 = 0;
  uRam00007fffa47bf901 = 0;
  uRam00007fffa47bf909 = 0;
  uRam00007fffa47bf8f1 = 0;
  uRam00007fffa47bf8f9 = 0;
  uRam00007fffa47bf934 = 0;
  uVar1 = rdtsc();
  lVar3 = (uVar1 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar1)) * 0x3f21e9698212e1d + 0xb;
  lVar2 = 3;
  while( true ) {
    lVar3 = lVar3 * 0x3f21e9698212e1d + 0xb;
    lVar4 = lVar3 * 0x3f21e9698212e1d + 0xb;
    *(char *)(lVar2 + 0x7fffa47bf8db) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bf8dc) = (char)((uint64_t)lVar4 >> 0x20);
    if (lVar2 == 0x6b) break;
    lVar3 = lVar4 * 0x3f21e9698212e1d + 0xb;
    *(char *)(lVar2 + 0x7fffa47bf8dd) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0x3f21e9698212e1d + 0xb;
    *(char *)(lVar2 + 0x7fffa47bf8de) = (char)((uint64_t)lVar3 >> 0x20);
    lVar2 = lVar2 + 4;
  }
  bRam00007fffa47bf8e4 = bRam00007fffa47bf8e4 + 1 & 7;
  *(uint64_t *)((uint64_t)bRam00007fffa47bf8e4 * 8 + 0x7fffa47bf8f1) = uRam00007fffa47bf934;
  return;
}


// ============================================================================
// Function : FUN_7fffa5499d50  |  RVA: 0xd29d50  |  Size: 3034 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5499d50(void) {
    /* +0xd29d50 */ __asm { PUSH RBP }
    /* +0xd29d51 */ __asm { PUSH RBX }
    /* +0xd29d52 */ __asm { PUSH R14 }
    /* +0xd29d54 */ __asm { PUSH R15 }
    /* +0xd29d56 */ __asm { PUSH RSI }
    /* +0xd29d57 */ __asm { PUSH R13 }
    /* +0xd29d59 */ __asm { PUSH R12 }
    /* +0xd29d5b */ __asm { PUSH RDI }
    /* +0xd29d5c */ __asm { SUB RSP,0x68 }
    /* +0xd29d60 */ __asm { MOV RBX,qword ptr [RSP + 0xd0] }
    /* +0xd29d68 */ __asm { MOV uint8_t ptr [RSP + 0x62],0x0 }
    /* +0xd29d6d */ __asm { MOV word ptr [RSP + 0x60],0x0 }
    /* +0xd29d74 */ __asm { MOV dword ptr [RSP + 0x5c],0x0 }
    /* +0xd29d7c */ __asm { MOV dword ptr [RSP + 0x30],0xd47e1044 }
    /* +0xd29d84 */ __asm { MOV ECX,dword ptr [RSP + 0x30] }
    /* +0xd29d88 */ __asm { MOV dword ptr [RSP + 0x30],0x7e262690 }
    /* +0xd29d90 */ __asm { MOV ECX,dword ptr [RSP + 0x30] }
    /* +0xd29d94 */ __asm { CMP ECX,0xca201b76 }
    /* +0xd29d9a */ __asm { NOP }
    /* +0xd29d9b */ __asm { NOP }
    /* +0xd29d9c */ __asm { NOP }
    /* +0xd29d9d */ __asm { NOP }
    /* +0xd29d9e */ __asm { NOP }
    /* +0xd29d9f */ __asm { LEA R9,[0x7fffa478a84a] }
    /* +0xd29da6 */ __asm { MOV EDX,0x14a80cad }
    /* +0xd29dab */ __asm { LEA RAX,[0x7fffa478bdaf] }
    /* +0xd29db2 */ __asm { MOV CX,0x26f }
    /* +0xd29db6 */ __asm { MOV R8D,0xffffd2d2 }
    /* +0xd29dbc */ __asm { SUB R8D,ECX }
    /* +0xd29dbf */ __asm { MOVSX RCX,R8W }
    /* +0xd29dc3 */ __asm { LEA R10,[0x7fffa47841bd] }
    /* +0xd29dca */ __asm { MOV R11D,0xe22e9738 }
    /* +0xd29dd0 */ __asm { MOV R8D,0x67c08b8f }
    /* +0xd29dd6 */ __asm { SUB R8D,R11D }
    /* +0xd29dd9 */ __asm { ADD EDX,0xeb326912 }
    /* +0xd29ddf */ __asm { XOR R8D,EBX }
    /* +0xd29de2 */ __asm { MOVSXD R8,R8D }
    /* +0xd29de5 */ __asm { LEA R11,[0x7fffa4789dac] }
    /* +0xd29dec */ __asm { MOV R15D,0xebb1992a }
    /* +0xd29df2 */ __asm { SUB R15D,EBX }
    /* +0xd29df5 */ __asm { IMUL R15D,R15D,0x4651dfdd }
    /* +0xd29dfc */ __asm { MOVSXD R15,R15D }
    /* +0xd29dff */ __asm { MOV R11,qword ptr [R11 + R15*0x1 + 0x38] }
    /* +0xd29e04 */ __asm { MOV RAX,qword ptr [RAX + R8*0x1 + 0x48] }
    /* +0xd29e09 */ __asm { MOVZX R8D,uint8_t ptr [R10 + RCX*0x1 + 0x30] }
    /* +0xd29e0f */ __asm { MOV ECX,EBX }
    /* +0xd29e11 */ __asm { ROR EDX,CL }
    /* +0xd29e13 */ __asm { MOV R10,0x1649d8f7165a3865 }
    /* +0xd29e1d */ __asm { MOV ECX,R8D }
    /* +0xd29e20 */ __asm { SHR R10,CL }
    /* +0xd29e23 */ __asm { MOVSXD RCX,EDX }
    /* +0xd29e26 */ __asm { MOV R9,qword ptr [R9 + RCX*0x1 + 0x40] }
    /* +0xd29e2b */ __asm { XOR EDX,EDX }
    /* +0xd29e2d */ __asm { MOVDQA XMM4,xmmword ptr [0x7fffa56b95c0] }
    /* +0xd29e35 */ __asm { MOV RCX,R10 }
    /* +0xd29e38 */ __asm { MOV R8W,0xa026 }
    /* +0xd29e3d */ __asm { XOR R8D,EBX }
    /* +0xd29e40 */ __asm { ROL R8W,0x2 }
    /* +0xd29e45 */ __asm { SHL RCX,0x4 }
    /* +0xd29e49 */ __asm { MOVDQA XMM0,xmmword ptr [R9 + RCX*0x1] }
    /* +0xd29e4f */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM0 }
    /* +0xd29e55 */ __asm { MOVZX ESI,uint8_t ptr [RSP + 0x4f] }
    /* +0xd29e5a */ __asm { PCMPEQB XMM0,XMM4 }
    /* +0xd29e5e */ __asm { PMOVMSKB ECX,XMM0 }
    /* +0xd29e62 */ __asm { AND ECX,0x7fff }
    /* +0xd29e68 */ __asm { CMP CX,R8W }
    /* +0xd29e6c */ __asm { JNZ 0x7fffa5499e90 }
    /* +0xd29e6e */ __asm { TEST SIL,0x20 }
    /* +0xd29e72 */ __asm { JZ 0x7fffa5499fb8 }
    /* +0xd29e78 */ __asm { ADD R10,RDX }
    /* +0xd29e7b */ __asm { INC R10 }
    /* +0xd29e7e */ __asm { INC RDX }
    /* +0xd29e81 */ __asm { AND R10,R11 }
    /* +0xd29e84 */ __asm { CMP RDX,R11 }
    /* +0xd29e87 */ __asm { JBE 0x7fffa5499e35 }
    /* +0xd29e89 */ __asm { JMP 0x7fffa5499fb8 }
    /* +0xd29e90 */ __asm { IMUL R8,R10,0x78 }
    /* +0xd29e94 */ __asm { LEA RDI,[RAX + R8*0x1] }
    /* +0xd29e98 */ __asm { NOP dword ptr [RAX + R8*0x1] }
    /* +0xd29e9d */ __asm { MOVZX R15D,CX }
    /* +0xd29ea1 */ __asm { TZCNT ECX,R15D }
    /* +0xd29ea6 */ __asm { MOV R12D,0x38847b34 }
    /* +0xd29eac */ __asm { MOV EBP,0x3878867a }
    /* +0xd29eb1 */ __asm { MOV R8,qword ptr [RDI + RCX*0x8] }
    /* +0xd29eb5 */ __asm { MOV R14D,dword ptr [R8] }
    /* +0xd29eb8 */ __asm { XOR R13D,R13D }
    /* +0xd29ebb */ __asm { CMP R14D,0x95 }
    /* +0xd29ec2 */ __asm { SETZ R13B }
    /* +0xd29ec6 */ __asm { XOR EBP,EBX }
    /* +0xd29ec8 */ __asm { ROL EBP,0x18 }
    /* +0xd29ecb */ __asm { IMUL R12D,R12D,-0x5d02951b }
    /* +0xd29ed2 */ __asm { MOV ECX,EBX }
    /* +0xd29ed4 */ __asm { ROR R12D,CL }
    /* +0xd29ed7 */ __asm { ADD R12D,0x19193abc }
    /* +0xd29ede */ __asm { XOR ECX,ECX }
    /* +0xd29ee0 */ __asm { CMP R14D,0x96 }
    /* +0xd29ee7 */ __asm { SETGE CL }
    /* +0xd29eea */ __asm { CMP R12,RBP }
    /* +0xd29eed */ __asm { CMOVA R13D,ECX }
    /* +0xd29ef1 */ __asm { TEST R13B,R13B }
    /* +0xd29ef4 */ __asm { JNZ 0x7fffa5499f07 }
    /* +0xd29ef6 */ __asm { LEA ECX,[R15 + -0x1] }
    /* +0xd29efa */ __asm { AND ECX,R15D }
    /* +0xd29efd */ __asm { MOV R15D,ECX }
    /* +0xd29f00 */ __asm { JNZ 0x7fffa5499ea1 }
    /* +0xd29f02 */ __asm { JMP 0x7fffa5499e6e }
    /* +0xd29f07 */ __asm { MOV dword ptr [RSP + 0x30],0xae16eeea }
    /* +0xd29f0f */ __asm { MOV ECX,dword ptr [RSP + 0x30] }
    /* +0xd29f13 */ __asm { TEST ECX,ECX }
    /* +0xd29f15 */ __asm { NOP }
    /* +0xd29f16 */ __asm { NOP }
    /* +0xd29f17 */ __asm { NOP }
    /* +0xd29f18 */ __asm { NOP }
    /* +0xd29f19 */ __asm { NOP }
    /* +0xd29f1a */ __asm { NOP }
    /* +0xd29f1b */ __asm { NOP }
    /* +0xd29f1c */ __asm { NOP }
    /* +0xd29f1d */ __asm { NOP }
    /* +0xd29f1e */ __asm { NOP }
    /* +0xd29f1f */ __asm { NOP }
    /* +0xd29f20 */ __asm { NOP }
    /* +0xd29f21 */ __asm { PUSHFQ }
    /* +0xd29f22 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xd29f2a */ __asm { POPFQ }
    /* +0xd29f2b */ __asm { MOV ECX,dword ptr [R8 + 0x10] }
    /* +0xd29f2f */ __asm { SUB ECX,dword ptr [R8 + 0x8] }
    /* +0xd29f33 */ __asm { MOV dword ptr [RSP + 0x5c],ECX }
    /* +0xd29f37 */ __asm { MOV dword ptr [RSP + 0x30],0xfa5abcc2 }
    /* +0xd29f3f */ __asm { MOV ECX,dword ptr [RSP + 0x30] }
    /* +0xd29f43 */ __asm { TEST CL,0x1 }
    /* +0xd29f46 */ __asm { JNZ 0x7fffa549aa47 }
    /* +0xd29f4c */ __asm { MOV R11,qword ptr [R8 + 0x10] }
    /* +0xd29f50 */ __asm { SUB R11,qword ptr [R8 + 0x8] }
    /* +0xd29f54 */ __asm { CMP R11,0x4 }
    /* +0xd29f58 */ __asm { JNC 0x7fffa549a17c }
    /* +0xd29f5e */ __asm { MOV dword ptr [RSP + 0x30],0xd80884ab }
    /* +0xd29f66 */ __asm { MOV ECX,dword ptr [RSP + 0x30] }
    /* +0xd29f6a */ __asm { AND ECX,0x1 }
    /* +0xd29f6d */ __asm { MOV R10W,0x8522 }
    /* +0xd29f72 */ __asm { IMUL R10D,R10D,-0x1123 }
    /* +0xd29f79 */ __asm { ADD R10D,0x15cc }
    /* +0xd29f80 */ __asm { XOR R10D,EBX }
    /* +0xd29f83 */ __asm { MOVZX R10D,R10W }
    /* +0xd29f87 */ __asm { CMP ECX,R10D }
    /* +0xd29f8a */ __asm { NOP }
    /* +0xd29f8b */ __asm { NOP }
    /* +0xd29f8c */ __asm { NOP }
    /* +0xd29f8d */ __asm { NOP }
    /* +0xd29f8e */ __asm { NOP }
    /* +0xd29f8f */ __asm { MOV RAX,0x0 }
    /* +0xd29f96 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xd29f9d */ __asm { NOP }
    /* +0xd29f9e */ __asm { MOV RDX,qword ptr [R8 + 0x8] }
    /* +0xd29fa2 */ __asm { MOV R8,qword ptr [R8 + 0x10] }
    /* +0xd29fa6 */ __asm { SUB R8,RDX }
    /* +0xd29fa9 */ __asm { LEA RCX,[RSP + 0x60] }
    /* +0xd29fae */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd29fb3 */ __asm { JMP 0x7fffa549a8f3 }
    /* +0xd29fb8 */ __asm { MOV R8D,0x9bd41a6d }
    /* +0xd29fbe */ __asm { XOR R8D,EBX }
    /* +0xd29fc1 */ __asm { MOV ECX,0x8efe7cb2 }
    /* +0xd29fc6 */ __asm { IMUL ECX,ECX,-0x1dc38253 }
    /* +0xd29fcc */ __asm { SUB ECX,EBX }
    /* +0xd29fce */ __asm { MOVSXD R11,ECX }
    /* +0xd29fd1 */ __asm { NOT R8D }
    /* +0xd29fd4 */ __asm { MOV RCX,R8 }
    /* +0xd29fd7 */ __asm { ROL RCX,0x2b }
    /* +0xd29fdb */ __asm { MOV EAX,0x9ca109f7 }
    /* +0xd29fe0 */ __asm { XOR RAX,RCX }
    /* +0xd29fe3 */ __asm { MOV R10,0x2a2da0009ca10904 }
    /* +0xd29fed */ __asm { XOR ECX,ECX }
    /* +0xd29fef */ __asm { CMP RAX,R10 }
    /* +0xd29ff2 */ __asm { SETG CL }
    /* +0xd29ff5 */ __asm { MOV R10D,0x842e691a }
    /* +0xd29ffb */ __asm { MOV R9,0x2a2da0009ca10905 }
    /* +0xd2a005 */ __asm { XOR EDX,EDX }
    /* +0xd2a007 */ __asm { CMP RAX,R9 }
    /* +0xd2a00a */ __asm { SETZ DL }
    /* +0xd2a00d */ __asm { ADD R10D,EBX }
    /* +0xd2a010 */ __asm { IMUL R10D,R10D,0x2b1c071 }
    /* +0xd2a017 */ __asm { CMP R11,R10 }
    /* +0xd2a01a */ __asm { CMOVC EDX,ECX }
    /* +0xd2a01d */ __asm { TEST DL,DL }
    /* +0xd2a01f */ __asm { JZ 0x7fffa549a1cf }
    /* +0xd2a025 */ __asm { MOV ECX,0x17a7d29f }
    /* +0xd2a02a */ __asm { ADD ECX,R8D }
    /* +0xd2a02d */ __asm { MOV R15D,EBX }
    /* +0xd2a030 */ __asm { OR R15D,0x1 }
    /* +0xd2a034 */ __asm { IMUL R15D,ECX }
    /* +0xd2a038 */ __asm { ROL R15D,0x1b }
    /* +0xd2a03c */ __asm { MOV dword ptr [RSP + 0x64],0xb65bee60 }
    /* +0xd2a044 */ __asm { MOV ECX,dword ptr [RSP + 0x64] }
    /* +0xd2a048 */ __asm { MOV EDX,0xc2766c69 }
    /* +0xd2a04d */ __asm { MOV EAX,0x6dc90201 }
    /* +0xd2a052 */ __asm { ADD EAX,0xb4f52b5b }
    /* +0xd2a057 */ __asm { MOV ECX,EBX }
    /* +0xd2a059 */ __asm { ROR EAX,CL }
    /* +0xd2a05b */ __asm { MOV R10D,R8D }
    /* +0xd2a05e */ __asm { OR R10D,0x1 }
    /* +0xd2a062 */ __asm { IMUL R10D,EDX }
    /* +0xd2a066 */ __asm { ROL R10D,0xb }
    /* +0xd2a06a */ __asm { IMUL R11D,EAX,0x71b5e823 }
    /* +0xd2a071 */ __asm { RDTSC }
    /* +0xd2a073 */ __asm { SHL RDX,0x20 }
    /* +0xd2a077 */ __asm { OR RDX,RAX }
    /* +0xd2a07a */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0xd2a084 */ __asm { IMUL RAX,RDX }
    /* +0xd2a088 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xd2a092 */ __asm { ADD RCX,RAX }
    /* +0xd2a095 */ __asm { MOV R9,RCX }
    /* +0xd2a098 */ __asm { SHR R9,0x1b }
    /* +0xd2a09c */ __asm { MOV RDX,RCX }
    /* +0xd2a09f */ __asm { SHR RDX,0x2d }
    /* +0xd2a0a3 */ __asm { XOR EDX,R9D }
    /* +0xd2a0a6 */ __asm { SHR RCX,0x3b }
    /* +0xd2a0aa */ __asm { ROR EDX,CL }
    /* +0xd2a0ac */ __asm { XOR R10D,EBX }
    /* +0xd2a0af */ __asm { MOV EAX,EDX }
    /* +0xd2a0b1 */ __asm { AND EAX,0x3 }
    /* +0xd2a0b4 */ __asm { ADD EDX,0x3 }
    /* +0xd2a0b7 */ __asm { MOV ECX,R8D }
    /* +0xd2a0ba */ __asm { ROL R11D,CL }
    /* +0xd2a0bd */ __asm { ADD R10D,0x3dd99cb0 }
    /* +0xd2a0c4 */ __asm { MOVSXD R10,R10D }
    /* +0xd2a0c7 */ __asm { CMP R10,R11 }
    /* +0xd2a0ca */ __asm { CMOVA EDX,EAX }
    /* +0xd2a0cd */ __asm { CMP EDX,0x2 }
    /* +0xd2a0d0 */ __asm { JL 0x7fffa549a24d }
    /* +0xd2a0d6 */ __asm { JNZ 0x7fffa549a443 }
    /* +0xd2a0dc */ __asm { MOV EAX,0xb3468477 }
    /* +0xd2a0e1 */ __asm { MOV R11,-0x44938e7acf37e97 }
    /* +0xd2a0eb */ __asm { CMP RAX,R11 }
    /* +0xd2a0ee */ __asm { JZ 0x7fffa549aa5e }
    /* +0xd2a0f4 */ __asm { MOV ECX,dword ptr [RAX + -0x334881b3] }
    /* +0xd2a0fa */ __asm { MOV R11,0x5555555555555556 }
    /* +0xd2a104 */ __asm { IMUL R11,RCX }
    /* +0xd2a108 */ __asm { MOV RAX,0x5555555555555555 }
    /* +0xd2a112 */ __asm { CMP R11,RAX }
    /* +0xd2a115 */ __asm { JA 0x7fffa549a61c }
    /* +0xd2a11b */ __asm { LEA RAX,[0x7fffa47c3993] }
    /* +0xd2a122 */ __asm { MOV R11,-0x1da7d696f10f8164 }
    /* +0xd2a12c */ __asm { CMP RAX,R11 }
    /* +0xd2a12f */ __asm { NOP }
    /* +0xd2a130 */ __asm { NOP }
    /* +0xd2a131 */ __asm { NOP }
    /* +0xd2a132 */ __asm { NOP }
    /* +0xd2a133 */ __asm { NOP }
    /* +0xd2a134 */ __asm { MOV ECX,EBX }
    /* +0xd2a136 */ __asm { OR ECX,0x1 }
    /* +0xd2a139 */ __asm { MOV R10W,0x362a }
    /* +0xd2a13e */ __asm { IMUL R10D,ECX }
    /* +0xd2a142 */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xd2a147 */ __asm { ADD R10D,0xfffffefb }
    /* +0xd2a14e */ __asm { MOV EAX,dword ptr [RAX + -0x7433] }
    /* +0xd2a154 */ __asm { XOR R10D,0xffffc650 }
    /* +0xd2a15b */ __asm { MOV CX,0x59d9 }
    /* +0xd2a15f */ __asm { OR R15D,0x1 }
    /* +0xd2a163 */ __asm { IMUL R15D,R10D }
    /* +0xd2a167 */ __asm { XOR ECX,EBX }
    /* +0xd2a169 */ __asm { NOT ECX }
    /* +0xd2a16b */ __asm { ROL CX,0x7 }
    /* +0xd2a16f */ __asm { MOVZX R8D,CX }
    /* +0xd2a173 */ __asm { MOVZX R10D,R15W }
    /* +0xd2a177 */ __asm { JMP 0x7fffa549a8e3 }
    /* +0xd2a17c */ __asm { MOV CX,0x8806 }
    /* +0xd2a180 */ __asm { XOR ECX,0x2880 }
    /* +0xd2a186 */ __asm { SUB ECX,EBX }
    /* +0xd2a188 */ __asm { MOVZX ECX,CX }
    /* +0xd2a18b */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0xd2a18f */ __asm { MOV R11,qword ptr [R11 + 0x788] }
    /* +0xd2a196 */ __asm { MOV RAX,0x4ba3c518f377cbf7 }
    /* +0xd2a1a0 */ __asm { SUB R11,RAX }
    /* +0xd2a1a3 */ __asm { ROL R11,0x26 }
    /* +0xd2a1a7 */ __asm { MOV RAX,-0xba70790b }
    /* +0xd2a1b1 */ __asm { ADD RAX,R11 }
    /* +0xd2a1b4 */ __asm { MOV R11,0x715789e0e445a63b }
    /* +0xd2a1be */ __asm { CMP RAX,R11 }
    /* +0xd2a1c1 */ __asm { JNZ 0x7fffa549a90e }
    /* +0xd2a1c7 */ __asm { MOV CS:[0x48310f0000073fe9],AL }
    /* +0xd2a1d2 */ __asm { SHL EDX,0x20 }
    /* +0xd2a1d5 */ __asm { OR RDX,RAX }
    /* +0xd2a1d8 */ __asm { MOV ECX,0xac890dcb }
    /* +0xd2a1dd */ __asm { XOR ECX,EBX }
    /* +0xd2a1df */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xd2a1e9 */ __asm { IMUL R11,RDX }
    /* +0xd2a1ed */ __asm { MOV R15D,0xe0757844 }
    /* +0xd2a1f3 */ __asm { SUB R15D,ECX }
    /* +0xd2a1f6 */ __asm { MOV ECX,dword ptr [RSP + 0x64] }
    /* +0xd2a1fa */ __asm { MOV dword ptr [RSP + 0x64],0xb65bee60 }
    /* +0xd2a202 */ __asm { MOV ECX,0x5e0c34da }
    /* +0xd2a207 */ __asm { MOV R8D,0xc0a48f4e }
    /* +0xd2a20d */ __asm { SUB R8D,ECX }
    /* +0xd2a210 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xd2a21a */ __asm { ADD RCX,R11 }
    /* +0xd2a21d */ __asm { MOV R10,RCX }
    /* +0xd2a220 */ __asm { SHR R10,0x2d }
    /* +0xd2a224 */ __asm { MOV RDX,RCX }
    /* +0xd2a227 */ __asm { SHR RDX,0x1b }
    /* +0xd2a22b */ __asm { SHR RCX,0x3b }
    /* +0xd2a22f */ __asm { XOR EDX,R10D }
    /* +0xd2a232 */ __asm { ROR EDX,CL }
    /* +0xd2a234 */ __asm { LEA ECX,[RDX + -0x3] }
    /* +0xd2a237 */ __asm { AND EDX,0x3 }
    /* +0xd2a23a */ __asm { CMP R8,0x3635ef95 }
    /* +0xd2a241 */ __asm { CMOVZ EDX,ECX }
    /* +0xd2a244 */ __asm { CMP EDX,0x2 }
    /* +0xd2a247 */ __asm { JGE 0x7fffa549a0d6 }
    /* +0xd2a24d */ __asm { MOV R11W,0x5fc9 }
    /* +0xd2a252 */ __asm { LEA R10D,[RBX + R11*0x1] }
    /* +0xd2a256 */ __asm { MOV ECX,R15D }
    /* +0xd2a259 */ __asm { ROL R10W,CL }
    /* +0xd2a25d */ __asm { ROL R10W,0x7 }
    /* +0xd2a262 */ __asm { NOT R10D }
    /* +0xd2a265 */ __asm { MOVZX ECX,R10W }
    /* +0xd2a269 */ __asm { CMP EDX,ECX }
    /* +0xd2a26b */ __asm { JZ 0x7fffa549a567 }
    /* +0xd2a271 */ __asm { MOV R11,-0x354aed491a37ae29 }
    /* +0xd2a27b */ __asm { MOV R10,-0x1289318 }
    /* +0xd2a282 */ __asm { SUB R10,R11 }
    /* +0xd2a285 */ __asm { MOV EAX,0x2a75b1cd }
    /* +0xd2a28a */ __asm { MOV R8,RAX }
    /* +0xd2a28d */ __asm { ROL R8,0xe }
    /* +0xd2a291 */ __asm { XOR R10,R15 }
    /* +0xd2a294 */ __asm { NOT R8 }
    /* +0xd2a297 */ __asm { MOV R11,-0x8a8ba74d }
    /* +0xd2a2a1 */ __asm { ADD R11,R10 }
    /* +0xd2a2a4 */ __asm { IMUL R11,R8 }
    /* +0xd2a2a8 */ __asm { MOV R10,-0x41fdaa5ef7f2ec64 }
    /* +0xd2a2b2 */ __asm { CMP R11,R10 }
    /* +0xd2a2b5 */ __asm { JZ 0x7fffa549aa6e }
    /* +0xd2a2bb */ __asm { MOV R10D,0xfc5fd8ad }
    /* +0xd2a2c1 */ __asm { XOR R8D,R8D }
    /* +0xd2a2c4 */ __asm { XOR ECX,ECX }
    /* +0xd2a2c6 */ __asm { IMUL RDX,RCX,0xdb1e2b7 }
    /* +0xd2a2cd */ __asm { MOV ECX,R15D }
    /* +0xd2a2d0 */ __asm { ROR RDX,CL }
    /* +0xd2a2d3 */ __asm { MOV ECX,0x79b56304 }
    /* +0xd2a2d8 */ __asm { MOV R11,qword ptr [RAX + 0x55884e3b] }
    /* +0xd2a2df */ __asm { IMUL R10D,R10D,-0x6a66874f }
    /* +0xd2a2e6 */ __asm { NOT R10D }
    /* +0xd2a2e9 */ __asm { ADD R10D,R15D }
    /* +0xd2a2ec */ __asm { MOV R9,RBX }
    /* +0xd2a2ef */ __asm { OR R9,0x1 }
    /* +0xd2a2f3 */ __asm { IMUL R9,RDX }
    /* +0xd2a2f7 */ __asm { IMUL EDI,R10D,-0x5286cb47 }
    /* +0xd2a2fe */ __asm { MOV R10,-0x2fa78a054fb236f4 }
    /* +0xd2a308 */ __asm { MOV RAX,R11 }
    /* +0xd2a30b */ __asm { MUL R10 }
    /* +0xd2a30e */ __asm { MOV R10,RDX }
    /* +0xd2a311 */ __asm { MOV EDX,0x14738b6 }
    /* +0xd2a316 */ __asm { MOV RAX,R11 }
    /* +0xd2a319 */ __asm { MUL RDX }
    /* +0xd2a31c */ __asm { ADD RAX,R10 }
    /* +0xd2a31f */ __asm { ADC RDX,0x0 }
    /* +0xd2a323 */ __asm { MOV R10D,EBX }
    /* +0xd2a326 */ __asm { OR R10D,0x1 }
    /* +0xd2a32a */ __asm { IMUL R10D,ECX }
    /* +0xd2a32e */ __asm { MOV ECX,R15D }
    /* +0xd2a331 */ __asm { ROL R10D,CL }
    /* +0xd2a334 */ __asm { MOVSXD R11,EDI }
    /* +0xd2a337 */ __asm { ADD R10D,0xa9d93ea2 }
    /* +0xd2a33e */ __asm { CMP R11,R10 }
    /* +0xd2a341 */ __asm { CMOVBE R9,R8 }
    /* +0xd2a345 */ __asm { AND EDX,0x1 }
    /* +0xd2a348 */ __asm { OR RDX,R9 }
    /* +0xd2a34b */ __asm { JZ 0x7fffa549a665 }
    /* +0xd2a351 */ __asm { RDTSC }
    /* +0xd2a353 */ __asm { SHL RDX,0x20 }
    /* +0xd2a357 */ __asm { OR RDX,RAX }
    /* +0xd2a35a */ __asm { MOV R11,-0x4a9b10dd1385131b }
    /* +0xd2a364 */ __asm { IMUL R11,RDX }
    /* +0xd2a368 */ __asm { MOV R8,-0x4274d6a8a8f2e5c2 }
    /* +0xd2a372 */ __asm { ADD R8,R11 }
    /* +0xd2a375 */ __asm { MOV RDX,R8 }
    /* +0xd2a378 */ __asm { SHR RDX,0x1b }
    /* +0xd2a37c */ __asm { MOV RCX,R8 }
    /* +0xd2a37f */ __asm { SHR RCX,0x3b }
    /* +0xd2a383 */ __asm { SHR R8,0x2d }
    /* +0xd2a387 */ __asm { XOR R8D,EDX }
    /* +0xd2a38a */ __asm { ROR R8D,CL }
    /* +0xd2a38d */ __asm { MOV RAX,-0x641962a839533873 }
    /* +0xd2a397 */ __asm { MOV R11,-0x930 }
    /* +0xd2a39e */ __asm { ADD R11,qword ptr [RSP + 0xa8] }
    /* +0xd2a3a6 */ __asm { IMUL R11,RAX }
    /* +0xd2a3aa */ __asm { MOV RAX,-0x68565e3d37b88785 }
    /* +0xd2a3b4 */ __asm { CMP R11,RAX }
    /* +0xd2a3b7 */ __asm { NOP }
    /* +0xd2a3b8 */ __asm { NOP }
    /* +0xd2a3b9 */ __asm { NOP }
    /* +0xd2a3ba */ __asm { NOP }
    /* +0xd2a3bb */ __asm { NOP }
    /* +0xd2a3bc */ __asm { CMP R8D,0x407ff91 }
    /* +0xd2a3c3 */ __asm { JA 0x7fffa549a3e9 }
    /* +0xd2a3c5 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xd2a3cc */ __asm { NOP }
    /* +0xd2a3cd */ __asm { MOV RAX,0x0 }
    /* +0xd2a3d4 */ __asm { MOV dword ptr [RSP + 0x30],0x2034d540 }
    /* +0xd2a3dc */ __asm { MOV ECX,dword ptr [RSP + 0x30] }
    /* +0xd2a3e0 */ __asm { TEST CL,0x1 }
    /* +0xd2a3e3 */ __asm { JNZ 0x7fffa549aaed }
    /* +0xd2a3e9 */ __asm { LEA RAX,[0x7fffa478b72d] }
    /* +0xd2a3f0 */ __asm { MOV R11,-0x39deb873f4ff4386 }
    /* +0xd2a3fa */ __asm { CMP RAX,R11 }
    /* +0xd2a3fd */ __asm { JZ 0x7fffa549aa76 }
    /* +0xd2a403 */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xd2a408 */ __asm { MOV CX,0x2deb }
    /* +0xd2a40c */ __asm { MOV EAX,dword ptr [RAX + -0x7165] }
    /* +0xd2a412 */ __asm { MOVD XMM4,R15D }
    /* +0xd2a417 */ __asm { IMUL ECX,ECX,-0x638d }
    /* +0xd2a41d */ __asm { MOV DX,0x7b33 }
    /* +0xd2a421 */ __asm { ADD EDX,EBX }
    /* +0xd2a423 */ __asm { XOR ECX,EBX }
    /* +0xd2a425 */ __asm { MOV R10D,0x754c }
    /* +0xd2a42b */ __asm { SUB R10D,ECX }
    /* +0xd2a42e */ __asm { MOVZX R10D,R10W }
    /* +0xd2a432 */ __asm { MOVD XMM0,EDX }
    /* +0xd2a436 */ __asm { PXOR XMM0,XMM4 }
    /* +0xd2a43a */ __asm { MOVD ECX,XMM0 }
    /* +0xd2a43e */ __asm { JMP 0x7fffa549a8dd }
    /* +0xd2a443 */ __asm { MOV R11,-0x60903038470c349 }
    /* +0xd2a44d */ __asm { IMUL R11,R11,0x12dab10f }
    /* +0xd2a454 */ __asm { MOV ECX,EBX }
    /* +0xd2a456 */ __asm { ROR R11,CL }
    /* +0xd2a459 */ __asm { MOV EAX,0xa119be76 }
    /* +0xd2a45e */ __asm { ADD R11,R15 }
    /* +0xd2a461 */ __asm { CMP RAX,R11 }
    /* +0xd2a464 */ __asm { NOP }
    /* +0xd2a465 */ __asm { NOP }
    /* +0xd2a466 */ __asm { NOP }
    /* +0xd2a467 */ __asm { NOP }
    /* +0xd2a468 */ __asm { NOP }
    /* +0xd2a469 */ __asm { NOP }
    /* +0xd2a46a */ __asm { NOP }
    /* +0xd2a46b */ __asm { NOP }
    /* +0xd2a46c */ __asm { NOP }
    /* +0xd2a46d */ __asm { NOP }
    /* +0xd2a46e */ __asm { NOP }
    /* +0xd2a46f */ __asm { NOP }
    /* +0xd2a470 */ __asm { MOV R8D,0x7569a9ab }
    /* +0xd2a476 */ __asm { ADD R8D,0x301e3648 }
    /* +0xd2a47d */ __asm { MOV ECX,EBX }
    /* +0xd2a47f */ __asm { ROR R8D,CL }
    /* +0xd2a482 */ __asm { MOV ECX,0x56d4b9b1 }
    /* +0xd2a487 */ __asm { ADD ECX,EBX }
    /* +0xd2a489 */ __asm { IMUL R9D,ECX,-0x7d06c21d }
    /* +0xd2a490 */ __asm { XOR R9D,R15D }
    /* +0xd2a493 */ __asm { MOV ECX,R15D }
    /* +0xd2a496 */ __asm { ROL R8D,CL }
    /* +0xd2a499 */ __asm { MOV R11,qword ptr [RAX + -0x211bbe6e] }
    /* +0xd2a4a0 */ __asm { MOV R10,0x61bc9c558fd7e403 }
    /* +0xd2a4aa */ __asm { MOV RAX,R11 }
    /* +0xd2a4ad */ __asm { MUL R10 }
    /* +0xd2a4b0 */ __asm { MOV R10,RDX }
    /* +0xd2a4b3 */ __asm { MOV ECX,0x147a16d }
    /* +0xd2a4b8 */ __asm { MOV RAX,R11 }
    /* +0xd2a4bb */ __asm { MUL RCX }
    /* +0xd2a4be */ __asm { ADD RAX,R10 }
    /* +0xd2a4c1 */ __asm { ADC RDX,0x0 }
    /* +0xd2a4c5 */ __asm { AND EDX,0x1 }
    /* +0xd2a4c8 */ __asm { XOR R10D,R10D }
    /* +0xd2a4cb */ __asm { OR R9,RDX }
    /* +0xd2a4ce */ __asm { SETZ R10B }
    /* +0xd2a4d2 */ __asm { MOV ECX,0x5faa2b25 }
    /* +0xd2a4d7 */ __asm { XOR ECX,0x7220c36e }
    /* +0xd2a4dd */ __asm { IMUL EAX,ECX,-0x48a1b99b }
    /* +0xd2a4e3 */ __asm { MOV ECX,R15D }
    /* +0xd2a4e6 */ __asm { ROL EAX,CL }
    /* +0xd2a4e8 */ __asm { NOT EAX }
    /* +0xd2a4ea */ __asm { MOVSXD R11,EAX }
    /* +0xd2a4ed */ __asm { CMP R11,R8 }
    /* +0xd2a4f0 */ __asm { CMOVBE R10D,EDX }
    /* +0xd2a4f4 */ __asm { TEST R10B,R10B }
    /* +0xd2a4f7 */ __asm { JZ 0x7fffa549a6c1 }
    /* +0xd2a4fd */ __asm { LEA RAX,[0x7fffa47b5072] }
    /* +0xd2a504 */ __asm { MOV R8,RAX }
    /* +0xd2a507 */ __asm { XOR R8,-0x1c9f67fb }
    /* +0xd2a50e */ __asm { ADD R8,-0x6a19e08d }
    /* +0xd2a515 */ __asm { MOV R11,0x5633d23a59de6a97 }
    /* +0xd2a51f */ __asm { CMP R8,R11 }
    /* +0xd2a522 */ __asm { JZ 0x7fffa549aa83 }
    /* +0xd2a528 */ __asm { MOV CX,0x9afe }
    /* +0xd2a52c */ __asm { IMUL R11D,ECX,-0x1653 }
    /* +0xd2a533 */ __asm { LEA ECX,[R15 + R11*0x1] }
    /* +0xd2a537 */ __asm { ADD ECX,0x304a }
    /* +0xd2a53d */ __asm { MOVZX R10D,CX }
    /* +0xd2a541 */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xd2a546 */ __asm { MOV EAX,dword ptr [RAX + 0x74ee] }
    /* +0xd2a54c */ __asm { MOV CX,0x9f25 }
    /* +0xd2a550 */ __asm { ADD ECX,R15D }
    /* +0xd2a553 */ __asm { IMUL R11D,ECX,-0x4e27 }
    /* +0xd2a55a */ __asm { LEA ECX,[RBX + R11*0x1] }
    /* +0xd2a55e */ __asm { ROL CX,0xb }
    /* +0xd2a562 */ __asm { JMP 0x7fffa549a8df }
    /* +0xd2a567 */ __asm { MOV EAX,0x496e895e }
    /* +0xd2a56c */ __asm { MOV R11,0x9066045254ae06e }
    /* +0xd2a576 */ __asm { CMP RAX,R11 }
    /* +0xd2a579 */ __asm { NOP }
    /* +0xd2a57a */ __asm { NOP }
    /* +0xd2a57b */ __asm { NOP }
    /* +0xd2a57c */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa549ab20  |  RVA: 0xd2ab20  |  Size: 110 bytes
// Callers  : FUN_7fffa5251f18@0xae1f18
// Callees  : FUN_7fffa5476b88@0xd06b88, FUN_7fffa4f54478@0x7e4478, FUN_7fffa5244778@0xad4778
// ============================================================================
void FUN_7fffa549ab20(uint64_t param_1,uint32_t *param_2,uint64_t param_3,uint32_t *param_4)

{
  uint8_t *puVar1;
  uint8_t **ppuVar2;
  
  FUN_7fffa5476b88(*param_2);
  for (ppuVar2 = &PTR_PTR_7fffa4782608; ppuVar2 != (uint8_t **)&DAT_7fffa4782610;
      ppuVar2 = ppuVar2 + 1) {
    if ((uint8_t **)*ppuVar2 != &PTR_DAT_7fffa4780790) {
      puVar1 = (uint8_t *)FUN_7fffa5244778(ppuVar2,&PTR_DAT_7fffa4780790);
      *ppuVar2 = puVar1;
    }
  }
  FUN_7fffa4f54478(*param_4);
  return;
}


// ============================================================================
// Function : FUN_7fffa549ab90  |  RVA: 0xd2ab90  |  Size: 729 bytes
// Callers  : FUN_7fffa5213ed4@0xaa3ed4
// Callees  : FUN_7fffa4fd1100@0x861100, FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ecf84c@0x75f84c, FUN_7fffa4ed9184@0x769184, FUN_7fffa5668bc0@0xef8bc0
// ============================================================================
uint32_t FUN_7fffa549ab90(int64_t param_1,int64_t *param_2,uint32_t param_3,uint32_t param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int64_t *plVar4;
  int iVar5;
  uint32_t uVar6;
  uint32_t *puVar7;
  uint32_t uVar8;
  uint64_t uVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  char cVar12;
  uint32_t uVar13;
  
  pcVar2 = (char *)*param_2;
  uVar11 = (uint64_t)param_3;
  if (pcVar2 == (char *)0x0) {
    puVar7 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar7 = 0x16;
    FUN_7fffa55c8ce0();
LAB_7fffa549ac05:
    if ((int64_t *)param_2[1] != (int64_t *)0x0) {
      *(int64_t *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(uint8_t *)(param_1 + 0x30) = 1;
    *(uint32_t *)(param_1 + 0x2c) = 0x16;
    FUN_7fffa5668bc0(0,0,0,0,0,param_1);
    goto LAB_7fffa549ac05;
  }
  cVar12 = *pcVar2;
  *param_2 = (int64_t)(pcVar2 + 1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_7fffa4fd1100();
  }
  while (iVar5 = FUN_7fffa4ecf84c(cVar12,8,param_1 + 0x18), iVar5 != 0) {
    cVar12 = *(char *)*param_2;
    *param_2 = (int64_t)((char *)*param_2 + 1);
  }
  uVar10 = param_4 & 0xff | 2;
  if (cVar12 != '-') {
    uVar10 = param_4 & 0xff;
  }
  if ((cVar12 - 0x2bU & 0xfd) == 0) {
    cVar12 = *(char *)*param_2;
    *param_2 = (int64_t)((char *)*param_2 + 1);
  }
  if ((param_3 & 0xffffffef) == 0) {
    if ((uint8_t)(cVar12 - 0x30U) < 10) {
      iVar5 = cVar12 + -0x30;
LAB_7fffa549acb5:
      if (iVar5 != 0) goto LAB_7fffa549ad06;
      pcVar3 = (char *)*param_2;
      cVar1 = *pcVar3;
      *param_2 = (int64_t)(pcVar3 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (int64_t)pcVar3;
        uVar13 = 8;
        if (param_3 != 0) {
          uVar13 = param_3;
        }
        uVar11 = (uint64_t)uVar13;
        if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
          puVar7 = (uint32_t *)FUN_7fffa4ed9184();
          *puVar7 = 0x16;
          FUN_7fffa55c8ce0();
        }
        goto LAB_7fffa549ad12;
      }
      cVar12 = pcVar3[1];
      *param_2 = (int64_t)(pcVar3 + 2);
      uVar13 = 0x10;
    }
    else {
      if ((uint8_t)(cVar12 + 0x9fU) < 0x1a) {
        iVar5 = cVar12 + -0x57;
        goto LAB_7fffa549acb5;
      }
      if ((uint8_t)(cVar12 + 0xbfU) < 0x1a) {
        iVar5 = cVar12 + -0x37;
        goto LAB_7fffa549acb5;
      }
LAB_7fffa549ad06:
      uVar13 = 10;
    }
    if (param_3 != 0) {
      uVar13 = param_3;
    }
    uVar11 = (uint64_t)uVar13;
  }
LAB_7fffa549ad12:
  uVar9 = 0xffffffff % uVar11;
  uVar13 = 0;
  while( true ) {
    if ((uint8_t)(cVar12 - 0x30U) < 10) {
      uVar8 = (int)cVar12 - 0x30;
    }
    else if ((uint8_t)(cVar12 + 0x9fU) < 0x1a) {
      uVar8 = (int)cVar12 - 0x57;
    }
    else if ((uint8_t)(cVar12 + 0xbfU) < 0x1a) {
      uVar8 = (int)cVar12 - 0x37;
    }
    else {
      uVar8 = 0xffffffff;
    }
    pcVar3 = (char *)*param_2;
    if ((uint32_t)uVar11 <= uVar8) break;
    cVar12 = *pcVar3;
    uVar6 = uVar13 * (uint32_t)uVar11;
    uVar8 = uVar6 + uVar8;
    uVar9 = (uint64_t)uVar8;
    *param_2 = (int64_t)(pcVar3 + 1);
    uVar10 = uVar10 | (uint32_t)(uVar8 < uVar6 || (uint32_t)(0xffffffff / uVar11) < uVar13) << 2 | 8;
    uVar13 = uVar8;
  }
  *param_2 = (int64_t)(pcVar3 + -1);
  if ((cVar12 != '\0') && (pcVar3[-1] != cVar12)) {
    puVar7 = (uint32_t *)FUN_7fffa4ed9184(uVar8,uVar9);
    *puVar7 = 0x16;
    FUN_7fffa55c8ce0();
  }
  if ((uVar10 & 8) == 0) {
    *param_2 = (int64_t)pcVar2;
    if ((uint64_t *)param_2[1] == (uint64_t *)0x0) {
      return 0;
    }
    *(uint64_t *)param_2[1] = pcVar2;
    return 0;
  }
  if ((uVar10 & 4) == 0) {
    if ((uVar10 & 1) == 0) {
      if ((uVar10 & 2) == 0) goto LAB_7fffa549ae01;
LAB_7fffa549ae22:
      uVar13 = -uVar13;
      goto LAB_7fffa549ae01;
    }
    if ((uVar10 & 2) == 0) {
      if (uVar13 < 0x80000000) goto LAB_7fffa549ae01;
    }
    else if (uVar13 < 0x80000001) goto LAB_7fffa549ae22;
  }
  *(uint8_t *)(param_1 + 0x30) = 1;
  *(uint32_t *)(param_1 + 0x2c) = 0x22;
  if ((uVar10 & 1) != 0) {
    plVar4 = (int64_t *)param_2[1];
    if ((uVar10 & 2) != 0) {
      if (plVar4 != (int64_t *)0x0) {
        *plVar4 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar4 == (int64_t *)0x0) {
      return 0x7fffffff;
    }
    *plVar4 = *param_2;
    return 0x7fffffff;
  }
  uVar13 = 0xffffffff;
LAB_7fffa549ae01:
  if ((int64_t *)param_2[1] != (int64_t *)0x0) {
    *(int64_t *)param_2[1] = *param_2;
  }
  return uVar13;
}


// ============================================================================
// Function : FUN_7fffa549ae70  |  RVA: 0xd2ae70  |  Size: 32 bytes
// Callers  : FUN_7fffa5225520@0xab5520
// Callees  : FUN_7fffa4f41160@0x7d1160, FUN_7fffa54e57d0@0xd757d0
// ============================================================================
void FUN_7fffa549ae70(void)

{
  code *pcVar1;
  uint8_t auStack_28 [40];
  
  FUN_7fffa54e57d0(auStack_28);
  FUN_7fffa4f41160(auStack_28,&UNK_7fffa588cfc0);
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa549ae90  |  RVA: 0xd2ae90  |  Size: 4841 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
code * FUN_7fffa549ae90(code *param_1,int64_t param_2,code *param_3,code *param_4,uint32_t param_5,
                       uint32_t param_6,int64_t param_7,uint64_t param_8,int64_t param_9,
                       uint32_t *param_10,uint32_t param_11)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  uint16_t uVar6;
  uint8_t bVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  int64_t lVar11;
  int iVar12;
  code *pcVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t in_R10;
  uint64_t uVar16;
  code *pcVar17;
  int64_t lVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint64_t uVar21;
  uint32_t uVar22;
  uint64_t uVar23;
  code *pcVar24;
  uint16_t uVar25;
  uint64_t unaff_R15;
  uint64_t uVar26;
  int64_t lVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  int64_t lVar30;
  uint64_t uVar31;
  int64_t lVar32;
  uint32_t auStack_f4 [3];
  code *pcStack_e8;
  uint64_t uStack_e0;
  code *pcStack_d8;
  int64_t lStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  code *pcStack_b8;
  uint64_t uStack_b0;
  uint32_t uStack_a4;
  code *pcStack_a0;
  uint64_t uStack_98;
  code *pcStack_90;
  int64_t lStack_88;
  uint32_t uStack_7c;
  uint64_t uStack_78;
  code *pcStack_70;
  code *pcStack_68;
  uint64_t uStack_60;
  
  uVar16 = (uint64_t)((uint32_t)-param_7 & 7);
  uVar21 = param_8 - uVar16;
  if (param_8 < uVar16) {
    uVar21 = 0;
  }
  lVar20 = param_7 + uVar16;
  if (param_8 < uVar16) {
    lVar20 = 0;
  }
  uVar16 = ~in_R10;
  uStack_7c = param_5;
  uVar23 = (unaff_R15 & uVar16) * -0xdcf7a59e +
           (~unaff_R15 & in_R10) * -0x1583064a6 + (uVar16 ^ unaff_R15) * -0x9830631d +
           (in_R10 ^ unaff_R15) * 0xc0000189 + (~unaff_R15 | in_R10) * 0x7b38bf08;
  uVar22 = (uint32_t)uVar23;
  uVar6 = (uint16_t)uVar23;
  uVar25 = (uVar6 | 1) * -0xb8f + 0x12ca;
  if (uVar21 < (uint16_t)(uVar25 * 0x200 | uVar25 >> 7)) {
    return (code *)0xffffffffffffffbe;
  }
  if (param_2 == 0 || param_4 == (code *)0x0) {
    return (code *)0x0;
  }
  if ((code *)0x20000 < param_4) {
    return (code *)0xffffffffffffffb8;
  }
  bVar7 = (uint8_t)uVar23;
  uVar25 = 0xc0U >> (bVar7 & 0xf) | 0xc0 << 0x10 - (bVar7 & 0xf);
  if ((uint16_t)(uVar25 << 1 | (uint16_t)((short)uVar25 < 0)) < param_6) {
    return (code *)0xffffffffffffffd4;
  }
  if (0xff < param_5) {
    return (code *)0xffffffffffffffd2;
  }
  if (param_5 == 0) {
    uStack_7c = 0xff;
  }
  uVar9 = uStack_7c;
  uVar10 = 0xb;
  if (param_6 != 0) {
    uVar10 = param_6;
  }
  pcVar24 = param_1 + param_2;
  bVar5 = (param_11 & 4) == 0 || param_10 == (uint32_t *)0x0;
  pcStack_a0 = param_3;
  lStack_88 = lVar20;
  pcStack_70 = param_1;
  if ((bVar5) || (*param_10 != 2)) {
    pcStack_b8 = (code *)CONCAT71(pcStack_b8._1_7_,bVar5);
    if ((param_11 & 8) != 0 && (code *)0x9fff < param_4) {
      pcStack_90 = (code *)(&UNK_7fffa47f1794 +
                           (int)((0x5562e83 << (bVar7 & 0x1f) | 0x5562e83U >> 0x20 - (bVar7 & 0x1f))
                                + 0x2f9ea817));
      pcVar13 = param_4;
      auStack_f4[0] = uStack_7c;
      pcStack_68 = pcVar24;
      (*(code *)((int64_t)(short)((uVar6 ^ 0x9903) << 4 | (uVar6 ^ 0x9903) >> 0xc) + 0x7fffa47e990d
                ))(lVar20,auStack_f4,0xffffffff3fffff70,param_4,0xfffc5ffdcefffdcf,
                   0xfff17ff73bfff73f,
                   (((uint64_t)param_4 & uVar23 & param_7 - 1U) +
                   (-param_7 | ~((uint64_t)param_4 & uVar23))) * -0xc4d34cec +
                   (uVar23 ^ (uint64_t)param_4 ^ param_7 - 1U) *
                   ((uint64_t)~((uVar22 | 1) * 0x4a3ca273) - 0xc0000090));
      iVar12 = (int)pcVar13;
      uVar8 = iVar12 * 0x100001;
      uStack_a4 = uVar9;
      (*pcStack_90)(lVar20,&uStack_a4);
      pcVar24 = pcStack_68;
      if ((uint64_t)(uint32_t)(iVar12 * 0x100001) + (uint64_t)uVar8 < 0x45) {
        return (code *)0x0;
      }
    }
    lVar20 = lStack_88;
    pcVar13 = (code *)(lStack_88 + 0xc08);
    uVar21 = (uint64_t)pcVar13 >> 0x10 ^ (uint64_t)pcVar13 ^ 0xffffffff8220ced5;
    pcVar17 = (code *)((int64_t)(int)(0x1cf6a540 - uVar22) + 0x7fffa525edb5);
    pcStack_90 = param_4;
    (*pcVar17)(0x279c4b55,lStack_88,param_3,uVar21,uVar21);
    pcVar17 = pcVar17 + -0x5520eb25;
    if ((code *)0xffffffffffffff88 < pcVar17) {
      return pcVar17;
    }
    if (pcVar17 == pcStack_90) {
      *pcStack_70 = *pcStack_a0;
      return (code *)0x1;
    }
    if (pcVar17 <= (code *)(((uint64_t)pcStack_90 >> 7) + 4)) {
      return (code *)0x0;
    }
    pcStack_d8 = pcVar13;
    pcStack_68 = pcVar24;
    if (param_10 == (uint32_t *)0x0) {
LAB_7fffa549b6f8:
      uStack_60 = (uint64_t)uStack_7c;
      lVar11 = lVar20;
    }
    else {
      uVar9 = *param_10;
      bVar5 = uVar9 == 1;
      if ((int64_t)(uint64_t)(uVar22 + 0xed2662f9) <
          (int64_t)(int)(0xec7baa23U >> (bVar7 & 0x1f) | -0x138455dd << 0x20 - (bVar7 & 0x1f))) {
        bVar5 = uVar9 < 2;
      }
      if (!bVar5) {
        if (uVar9 != 0 && (char)pcStack_b8 == '\0') {
LAB_7fffa549b70c:
          uVar16 = (int64_t)pcStack_90 << 0x12 |
                   ((int64_t)pcStack_90 << 0x3c | (uint64_t)pcStack_90 >> 4) ^
                   (uint64_t)pcStack_90;
          uVar23 = ~((int64_t)pcStack_a0 - ((int64_t)pcStack_a0 << 0x3d));
          uVar21 = (uint64_t)((uVar22 ^ 0x7ca86fdc) * -0x7406436d);
          pcVar13 = (code *)((int64_t)(int)((uVar22 + 0xaffe70fb) * -0x4196b3d) + 0x7fffa566bf00);
          goto LAB_7fffa549b681;
        }
        goto LAB_7fffa549b6f8;
      }
      uStack_60 = (uint64_t)uStack_7c;
      lVar11 = lVar20 << 0x25;
      if (~((0xe3734943 - uVar22) * 0x1000 | 0xe3734943 - uVar22 >> 0x14) <=
          (uVar22 ^ 0xe6fb41ab) * -0x64beb3a3) {
        lVar11 = lVar20 * 0x25;
      }
      lVar27 = param_9;
      FUN_7fffa5224720((int64_t)(int)(uVar22 ^ 0xb01a781c),(int64_t)(int)(uVar22 ^ 0xb01a781c),
                       lVar11 + lVar20,
                       (0xece3ed7dU >> (bVar7 & 0x1f) | -0x131c1283 << 0x20 - (bVar7 & 0x1f)) *
                       uStack_7c * 0x3fc00001,lVar11 + lVar20);
      uVar9 = (uint32_t)lVar27 << 6 ^ (uint32_t)lVar27;
      lVar11 = lStack_88;
      if ((uVar9 << 0x18 ^ uVar9 << 0xc) == uVar9) {
        *param_10 = 0;
      }
      else if ((char)pcStack_b8 == '\0') goto LAB_7fffa549b70c;
    }
    pcVar24 = pcStack_d8;
    uVar9 = uVar22 | 1;
    lVar11 = lVar11 + 0x400;
    pcStack_e8 = (code *)((int64_t)(int)(uVar9 * -0x5f817e29) + 0x7fffa5088d8d);
    pcStack_b8 = FUN_7fffa5659fc0;
    uVar14 = lVar11 - (lVar11 << 0x26);
    uVar14 = uVar14 >> 4 ^ uVar14;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar22) | 1;
    uStack_b0 = (uint64_t)(uVar9 * -0x66324396);
    uVar15 = ((uint64_t)(int64_t)(int)~(uVar22 + 0xe30978ea) >> 0x1e | 0xfffb8c0000000000) ^
             0x473edcff;
    uVar21 = uVar15 << 0x31 | uVar15 >> 0xf;
    (*pcStack_e8)(uVar21,(uVar15 << 0x19 | 0x1fff718) ^ uVar21 ^ uVar15,uVar10,
                  uStack_60 & 0xffffffff,pcStack_d8,uVar14 - (uVar14 << 0x29),
                  uVar9 * 0xa07e94b + 0xc918354f ^ 0x99ddcce5);
    (*pcStack_b8)(lVar11,pcVar24,
                  0xc3705c3c5c3c0U >> (bVar7 & 0x3f) | 0xc3705c3c5c3c0 << 0x40 - (bVar7 & 0x3f));
    pcVar24 = (code *)((uVar23 - 0x80496740ac ^ 0xffffffffd3906368) * 0x3fffffff80000001 *
                      (int64_t)pcVar24);
    if ((code *)0xffffffffffffff88 < pcVar24) {
      return pcVar24;
    }
    auStack_f4[1] = 0x37abdf4c;
    auStack_f4[2] = 0;
    uStack_c8 = ~uVar23;
    uStack_98 = 0xcfb9e2a9;
    pcStack_e8 = (code *)(uint64_t)(uint32_t)((int)uStack_e0 * 0x3eab2928);
    uStack_b0 = (uint64_t)
                ((0x76278b41 << (bVar7 & 0x1f) | 0x76278b41U >> 0x20 - (bVar7 & 0x1f)) * -0x53f6ca37
                );
    pcStack_d8 = (code *)((int64_t)(short)((0x419a - uVar6) * 0xcaf) + 0x7fffa54acba5);
    uVar29 = (uVar23 & 0xffffffff) * 0xb6d9a297 + ((uVar23 >> 0x20) * 0xb6d9a297 << 0x20);
    uStack_c0 = uStack_c8 | uVar29;
    uVar21 = uVar23 ^ uVar29;
    uVar15 = ~uVar21;
    uVar14 = ~uVar29;
    lVar18 = (uVar14 & uVar15) *
             (((uVar23 ^ 0x421bd8001cb7a1b8) << 0x15 | (uVar23 ^ 0x421bd8001cb7a1b8) >> 0x2b) -
             0x20060e761961);
    uStack_78 = 0;
    lStack_d0 = (uVar15 - (uVar21 & uVar29 & uStack_c8)) * 0x80234c4a69b;
    uVar9 = (uVar22 ^ 0x37abdf4c) + 0x1b35b81e;
    pcStack_b8 = (code *)((uint32_t)((int)uStack_e0 * -0x4a3ca273) | uVar21);
    lVar27 = (uVar15 & uStack_c0) - 0x1803d9b172c6;
    if (uStack_b0 <=
        ((0x644da905 << (bVar7 & 0x1f) | 0x644da905U >> 0x20 - (bVar7 & 0x1f)) ^ 0x5e2f759f)) {
      lVar27 = (uVar15 & uStack_c0) * -0x1803d9b172c6;
    }
    uVar19 = uVar21 * ((int)uStack_e0 * 0x7d565250 | (uint32_t)((int)uStack_e0 * 0x3eab2928 < 0));
    if ((uVar9 * 0x800 | uVar9 >> 0x15) == 0xcff608a8) {
      uVar19 = (uint64_t)pcStack_b8;
    }
    uVar9 = (uint32_t)uStack_60;
    pcVar24 = pcStack_70;
    uStack_e0 = lVar18;
    (*pcStack_d8)(lVar20 + -0x362c4317,lVar11,pcStack_70,uStack_60 & 0xffffffff,0x2ec0002ec0002ec,
                  lVar27 + lStack_d0 +
                  uVar19 + (uStack_c8 & uVar14 & uVar21) * 0x80175a8440c +
                  (uVar15 & uStack_c8 & uVar14) * 0x180498cdd555 +
                  (uVar29 & uStack_c8 ^ uVar15) * 0xbf1c628f + (uVar21 & uVar14) * -0x800ef4488b2 +
                  (uVar14 | uVar15) * 0x399c4535 +
                  uVar15 * 0x800b68be17c + uStack_c8 * 0xb5a84121 + uVar23 * -0xc1316206 + lVar18);
    lVar20 = (int64_t)pcVar24 * 0x1004010040100401;
    pcVar24 = (code *)(lVar20 + 0x8d6358d63570ec8b);
    if ((code *)0xffffffffffffff88 < pcVar24) {
      return pcVar24;
    }
    if (param_10 == (uint32_t *)0x0) {
      if (pcStack_90 <= (code *)(lVar20 + -0x729ca729ca8f1369)) {
        return (code *)0x0;
      }
    }
    else {
      if (*param_10 != 0) {
        if (-1 < (int)uVar9) {
          uVar10 = uVar9 + 1;
          uVar21 = (uint64_t)uVar10;
          if (uVar9 < 3) {
            uVar15 = 0;
            uVar14 = 0;
LAB_7fffa549be32:
            for (; uVar14 = (uint64_t)*(uint8_t *)(param_9 + 8 + uVar15 * 8) *
                            (uint64_t)*(uint32_t *)(lStack_88 + uVar15 * 4) + uVar14,
                uVar21 - 1 != uVar15; uVar15 = uVar15 + 1) {
            }
          }
          else {
            uVar15 = (uint64_t)(uVar10 & 0xfffffffc);
            lVar30 = 0;
            lVar32 = 0;
            uVar14 = 0;
            lVar27 = 0;
            lVar18 = 0;
            do {
              uVar29 = *(uint64_t *)(lStack_88 + uVar14 * 2);
              uVar19 = *(uint64_t *)(lStack_88 + 8 + uVar14 * 2);
              puVar1 = (uint64_t *)(param_9 + 8 + uVar14 * 4);
              puVar2 = (uint64_t *)(param_9 + 0x18 + uVar14 * 4);
              lVar27 = lVar27 + (*puVar2 & 0xff) * (uVar19 & 0xffffffff);
              lVar18 = lVar18 + (puVar2[1] & 0xff) * (uVar19 >> 0x20);
              lVar30 = lVar30 + (*puVar1 & 0xff) * (uVar29 & 0xffffffff);
              lVar32 = lVar32 + (puVar1[1] & 0xff) * (uVar29 >> 0x20);
              uVar14 = uVar14 + 8;
            } while ((uVar21 * 2 & 0xfffffffffffffff8) != uVar14);
            uVar14 = lVar18 + lVar32 + lVar27 + lVar30;
            if ((uVar10 & 0xfffffffc) != uVar10) goto LAB_7fffa549be32;
          }
          if ((uint32_t)uStack_60 < 3) {
            uVar19 = 0;
            uVar29 = 0;
LAB_7fffa549c11d:
            while( true ) {
              uVar26 = (uint64_t)*(uint32_t *)(lStack_88 + uVar19 * 4) *
                       (uint64_t)*(uint8_t *)(lStack_88 + 0x408 + uVar19 * 8);
              uVar15 = uVar29 + uVar26;
              uVar29 = uVar26 ^ uVar29;
              if ((uint64_t)((uVar22 ^ 0x12579923) << 0x11 | (uVar22 ^ 0x12579923) >> 0xf) !=
                  0xffffffffa4db8f10) {
                uVar29 = uVar15;
              }
              if (uVar21 - 1 == uVar19) break;
              uVar19 = uVar19 + 1;
            }
          }
          else {
            uVar19 = (uint64_t)(uVar10 & 0xfffffffc);
            uVar26 = 0;
            uVar28 = 0;
            uVar15 = 0;
            uVar31 = 0;
            uVar29 = 0;
            do {
              uVar3 = *(uint64_t *)(lStack_88 + uVar15 * 4);
              puVar1 = (uint64_t *)(lStack_88 + 0x408 + uVar15 * 8);
              puVar2 = (uint64_t *)(lStack_88 + 0x418 + uVar15 * 8);
              uVar4 = *(uint64_t *)(lStack_88 + 8 + uVar15 * 4);
              uVar15 = uVar15 + 4;
              uVar31 = uVar31 + (uVar4 & 0xffffffff) * (*puVar2 & 0xff);
              uVar29 = uVar29 + (uVar4 >> 0x20) * (puVar2[1] & 0xff);
              uVar26 = uVar26 + (*puVar1 & 0xff) * (uVar3 & 0xffffffff);
              uVar28 = uVar28 + (puVar1[1] & 0xff) * (uVar3 >> 0x20);
            } while (uVar19 != uVar15);
            if ((int64_t)(int)(uVar22 ^ 0xa4bc502d) <
                (int64_t)
                (uint64_t)(0x9547fb2bU >> (bVar7 & 0x1f) | -0x6ab804d5 << 0x20 - (bVar7 & 0x1f))) {
              uVar31 = uVar31 + uVar26;
              uVar29 = uVar29 + uVar28;
            }
            else {
              uVar31 = uVar31 ^ uVar26;
              uVar29 = uVar29 ^ uVar28;
            }
            uVar29 = uVar29 + uVar31;
            if ((uVar10 & 0xfffffffc) != uVar10) goto LAB_7fffa549c11d;
          }
          if (((code *)(lVar20 + -0x729ca729ca8f1369) < pcStack_90) &&
             (pcVar24 + (uVar29 >> 3) < (code *)(uVar14 >> 3))) goto LAB_7fffa549bf63;
        }
        uVar16 = (int64_t)pcStack_90 << 0x12 |
                 ((int64_t)pcStack_90 << 0x3c | (uint64_t)pcStack_90 >> 4) ^ (uint64_t)pcStack_90
        ;
        uVar23 = ~((int64_t)pcStack_a0 - ((int64_t)pcStack_a0 << 0x3d));
        pcVar13 = (code *)((int64_t)(short)(uVar6 ^ 0x6ea3) + 0x7fffa5663f7a);
        uVar21 = 0xa2aa06b;
        pcVar24 = pcStack_70;
        goto LAB_7fffa549b696;
      }
      if (pcStack_90 <= (code *)(lVar20 + -0x729ca729ca8f1369)) {
        return (code *)0x0;
      }
LAB_7fffa549bf63:
      *param_10 = 0;
    }
    pcVar24 = pcVar24 + (int64_t)pcStack_70;
    bVar5 = param_9 == 0;
    if (uVar22 + 0xc0de58b9 < (0x38296e1U >> (bVar7 & 0x1f) | 0x38296e1 << 0x20 - (bVar7 & 0x1f))) {
      bVar5 = param_9 < 1;
    }
    if (!bVar5) {
      FUN_7fffa56a5f20(param_9,lVar11,0x808);
    }
    pcVar13 = FUN_7fffa5660a30;
    uVar21 = (in_R10 ^ uVar23) * -0x7715961b + (uVar16 & uVar23) * 0x6ceaf5b0 +
             (uStack_c8 ^ in_R10) * -0xa2aa06b +
             ((uint64_t)(uVar22 ^ 0x59d42707) + 0x27c7729e) * (in_R10 & uStack_c8);
    uVar23 = ~((int64_t)pcStack_a0 - ((int64_t)pcStack_a0 << 0x3d));
    uVar16 = (int64_t)pcStack_90 << 0x12 |
             ((int64_t)pcStack_90 << 0x3c | (uint64_t)pcStack_90 >> 4) ^ (uint64_t)pcStack_90;
    param_9 = lVar11;
  }
  else {
    uVar21 = (int64_t)param_3 - ((int64_t)param_3 << 0x3d);
    uVar23 = ~uVar21;
    uVar14 = ((int64_t)param_4 << 0x3c | (uint64_t)param_4 >> 4) ^ (uint64_t)param_4;
    uVar16 = uVar14 * (int64_t)param_4 * 0x40000;
    if (-0x6da878ed <
        (int64_t)(uint64_t)((uVar22 << 0x1e | (uVar22 ^ 0x7d5f39bc) >> 2) ^ 0xc000000d)) {
      uVar16 = (int64_t)param_4 * 0x40000 | uVar14;
    }
    uVar14 = uVar21 & 0xfffffffea7cf9b5a;
    pcVar13 = (code *)((int64_t)(short)~(0x2c28U >> (bVar7 & 0xf) | 0x2c28 << 0x10 - (bVar7 & 0xf))
                      + 0x7fffa5664b92);
    lVar20 = uVar14 - 0x5ea76d02;
    if ((uVar22 | 1) * 0x430302be + 0xa5ad0e70 <=
        ((uVar22 ^ 0x6bfa5735) << 1 | (uint32_t)((int)(uVar22 ^ 0x6bfa5735) < 0))) {
      lVar20 = uVar14 * -0x5ea76d02;
    }
    uVar21 = lVar20 + ((uint64_t)((0x73b5bbe1 - uVar22) * 0x10000 | 0x73b5bbe1 - uVar22 >> 0x10) -
                      0x119238fa1) * (uVar23 & 0x1583064a5) +
                      ((uVar21 & 0x1583064a5) + (uVar23 | 0xfffffffea7cf9b5a)) * 0xf72c9878 +
                      uVar14 * 0x5ea76d02 + (uVar21 | 0xfffffffea7cf9b5a) * -0x1015738e3;
    pcStack_68 = pcVar24;
LAB_7fffa549b681:
    pcVar24 = pcStack_70;
  }
LAB_7fffa549b696:
  (*pcVar13)(0,pcStack_68,pcVar24,pcVar13,uVar23,param_9,param_11,uVar21);
  return (code *)((uVar16 << 0x3c | uVar16 >> 4) * -0xf0f0f0f0f0f0f0f);
}


// ============================================================================
// Function : FUN_7fffa549c180  |  RVA: 0xd2c180  |  Size: 31 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa549c21a) */
/* WARNING: Removing unreachable block (ram,0x7fffa549c2f8) */
/* WARNING: Removing unreachable block (ram,0x7fffa549c2fc) */

uint64_t FUN_7fffa549c180(int64_t param_1,int64_t param_2)

{
  if (*(int64_t *)((int64_t)ProcessEnvironmentBlock + 0x30) == -0x98a3f70677346bf) {
    return 0xf675c08f988cb941;
  }
  *(bool *)(param_2 + 0x37) = (*(uint32_t *)(*(int64_t *)(param_1 + 8) + 0x68) & 0x4000) == 0;
  return 1;
}


// ============================================================================
// Function : FUN_7fffa549c230  |  RVA: 0xd2c230  |  Size: 230 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa549c230(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint8_t in_R11B;
  
  uVar3 = param_1 + 0xa189f4df;
  uVar1 = uVar3 >> 0x3a ^ uVar3;
  uVar1 = (uVar1 << 1 | (uint64_t)((int64_t)uVar1 < 0)) ^ (uVar1 << 0x1c | uVar3 >> 0x24) ^ uVar1;
  uVar1 = (uVar1 << 0x38 | uVar1 >> 8) ^ (uVar1 << 2 | uVar1 >> 0x3e) ^ uVar1;
  uVar1 = (uVar1 << 4 | uVar1 >> 0x3c) ^ (uVar1 << 0x30 | uVar1 >> 0x10) ^ uVar1;
  uVar2 = (uVar1 << 0x20 | uVar1 >> 0x20) ^ uVar1;
  uVar4 = uVar1 << 8 | uVar1 >> 0x38;
  uVar3 = (param_4 ^ 0xffffffffc2654c67) * -0x393e6547ec81d4fb;
  uVar3 = (uVar3 << 0x2e | uVar3 >> 0x12) ^ (uVar3 << 0x20 | uVar3 >> 0x20) ^ uVar3;
  uVar1 = uVar2 ^ uVar4;
  if ((int64_t)
      (0x800000023c400000U >> (in_R11B & 0x3f) | -0x7ffffffdc3c00000 << 0x40 - (in_R11B & 0x3f)) <
      (int64_t)(int)(0x6b6fa2d1 << (in_R11B & 0x1f) | 0x6b6fa2d1U >> 0x20 - (in_R11B & 0x1f))) {
    uVar1 = uVar4 * uVar2;
  }
  **(uint64_t **)(uVar3 << 0x24 | uVar3 >> 0x1c) =
       **(uint64_t **)(uVar1 << 0x30 | uVar1 >> 0x10);
  return;
}


// ============================================================================
// Function : FUN_7fffa549c320  |  RVA: 0xd2c320  |  Size: 1618 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa549c320(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                     uint64_t param_5)

{
  char *pcVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint32_t uVar6;
  uint8_t auVar7 [16];
  uint32_t in_EAX;
  uint8_t bVar8;
  uint8_t bVar9;
  uint64_t *puVar10;
  code *pcVar11;
  uint64_t *puVar12;
  uint32_t uVar13;
  uint64_t uVar14;
  uint8_t bVar15;
  uint32_t uVar16;
  uint64_t uVar17;
  int64_t lVar18;
  uint8_t *puVar19;
  uint8_t uVar20;
  uint16_t uVar21;
  undefined6 uVar23;
  uint8_t *puVar22;
  uint32_t uVar24;
  int64_t lVar25;
  uint64_t uVar26;
  int64_t lVar27;
  float fVar28;
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  int64_t lStack_48;
  
  bVar8 = (uint8_t)in_EAX;
  param_1 = (param_1 << 0x1a | param_1 >> 0x26) ^ (param_1 << 0x3c | param_1 >> 4) ^ param_1;
  param_1 = (param_1 << 0x38 | param_1 >> 8) ^ (param_1 << 0x34 | param_1 >> 0xc) ^ param_1;
  param_1 = (param_1 << 0x28 | param_1 >> 0x18) ^ (param_1 << 0x30 | param_1 >> 0x10) ^ param_1;
  uVar17 = param_1 << 0x10 | param_1 >> 0x30;
  uVar14 = *(uint64_t *)((int64_t)(int)~((in_EAX | 1) * -0x58960cdd) + 0x7fffa47ca2aa);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar14;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar14;
  uVar26 = (uint64_t)((uint32_t)uVar14 & 1);
  if ((uint64_t)(-0x6eb6b2d1 << (bVar8 & 0x1f) | 0x91494d2fU >> 0x20 - (bVar8 & 0x1f)) !=
      0xffffffffbc97d91c) {
    uVar26 = uVar14 + 1;
  }
  auVar7._8_8_ = uVar26;
  auVar7._0_8_ = SUB168(auVar3 * ZEXT816(0x4325c53ef368eb05),8);
  auVar7 = auVar2 * ZEXT816(0x4325c53ef368eb0) + auVar7;
  fVar28 = (float)FUN_7fffa5102fa0((float)auVar7._8_8_ / 0.875,auVar7._0_8_);
  uVar26 = (int64_t)(fVar28 - 9.223372e+18) & (int64_t)fVar28 >> 0x3f | (int64_t)fVar28;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar26;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar26;
  uVar14 = SUB168(auVar5 * ZEXT816(0x1111111111111111),8) +
           (uint64_t)
           CARRY8(SUB168(auVar5 * ZEXT816(0x1111111111111111),0),
                  SUB168(auVar4 * ZEXT816(0x1111111111111112),8));
  lVar27 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar27 == 0; lVar27 = lVar27 + -1) {
    }
  }
  bVar15 = 0x3f;
  if (0x1d < uVar26) {
    bVar15 = (uint8_t)lVar27 ^ 0x3f;
  }
  lStack_48 = 0;
  lVar27 = 1L << (-bVar15 & 0x3f);
  uVar14 = param_1 - uVar17;
  if ((int64_t)
      (int)((0xa9ba973aU >> (bVar8 & 0x1f) | -0x564568c6 << 0x20 - (bVar8 & 0x1f)) + 0x6914bb41) <=
      (int64_t)(uint64_t)(0x7b6e57c9U >> (bVar8 & 0x1f) | 0x7b6e57c9 << 0x20 - (bVar8 & 0x1f))) {
    uVar14 = uVar17 ^ param_1;
  }
  uVar14 = (param_1 << 0x20 | param_1 >> 0x20) ^ uVar14;
  puVar10 = (uint64_t *)(uVar14 << 0x20 | uVar14 >> 0x20);
  if (uVar26 == (in_EAX ^ 0x70b2033)) {
    puVar19 = &UNK_7fffa56ee720;
  }
  else {
    bVar9 = 0x40 - bVar15;
    lVar25 = 0x88L << (bVar9 & 0x3f);
    lVar18 = 0x78L << (bVar9 & 0x3f);
    uVar14 = -(lVar25 * 8 + 0x70);
    if ((in_EAX ^ 0xe108b88a) * -0x4cc3e26b + 0x278cf8ec <= (in_EAX ^ 0x1a26d695) + 0xc0000028) {
      uVar14 = lVar25 + 0xeU & 0xfffffffffffffff8;
    }
    pcVar11 = (code *)((int64_t)(short)(0xd70eU >> (bVar8 & 0xf) | -0x28f2 << 0x10 - (bVar8 & 0xf))
                      + 0x7fffa526cfcf);
    (*pcVar11)(pcVar11,uVar14 << 0xe,uVar14 << 0x3c ^ uVar14);
    lStack_48 = ((int64_t)pcVar11 << 0x2c | (uint64_t)pcVar11 >> 0x14) -
                (((uint64_t)pcVar11 >> 0x14) << 0x36);
    puVar19 = (uint8_t *)
              ((uint64_t)(-((int)lStack_48 + (int)lVar18 + -8) & 0xf) + lStack_48 + lVar18 + -8);
    FUN_7fffa4ecf8e0(puVar19,0,0x10L << (bVar9 & 0x3f));
    puVar19[lVar27 * 0x10 + -2] = 1;
  }
  uVar14 = param_5 >> (bVar15 & 0x3f);
  *(uint64_t *)(param_4 + -0x375a6f82) = 0;
  *(uint32_t *)(param_4 + -0x375a6f8a) = 0;
  puVar22 = puVar19 + uVar14 * 0x10;
  pcVar1 = puVar19 + uVar14 * 0x10;
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
  *(uint64_t *)(param_4 + -0x375a6f92) = 0;
  uVar24 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar29 >> 7,0) & 1) |
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
  if (uVar24 == 0) {
    lVar18 = 1;
    while( true ) {
      puVar22[0xf] = puVar22[0xf] | '\x01' << ((uint8_t)param_5 & 7);
      uVar14 = uVar14 + lVar18 & lVar27 - 1U;
      puVar22 = puVar19 + uVar14 * 0x10;
      pcVar1 = puVar19 + uVar14 * 0x10;
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
      uVar24 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar30 >> 7,0) & 1) |
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
      if (uVar24 != 0) break;
      lVar18 = lVar18 + 1;
    }
  }
  uVar13 = ~(-0x50e4e76c << (bVar8 & 0x1f) | 0xaf1b1894U >> 0x20 - (bVar8 & 0x1f));
  uVar23 = (undefined6)((uint64_t)puVar22 >> 0x10);
  if (uVar13 < (in_EAX ^ 0x3cf636ad)) {
    lStack_48 = lStack_48 + uVar14 * 0x78;
    uVar13 = 0;
    for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
      uVar13 = uVar13 + 1;
    }
    uVar26 = (uint64_t)uVar13;
    lVar27 = lStack_48 + uVar26 * 8;
    uVar21 = ~(((uint16_t)in_EAX | 1) * 0x204a);
    uVar14 = (uint64_t)~((in_EAX | 1) * 0x3852f64b);
    (*(code *)((int64_t)(short)(uVar21 << 3 | uVar21 >> 0xd) + 0x7fffa52720a6))();
    puVar12 = (uint64_t *)((uVar14 << 0x2c | uVar14 >> 0x14) - ((uVar14 >> 0x14) << 0x36));
    *(uint64_t **)(lStack_48 + uVar26 * 8) = puVar12;
    *puVar12 = *puVar10;
    *(uint8_t (*) [16])(puVar12 + 1) = (uint8_t  [16])0x0;
    uVar20 = (uint8_t)
             *(uint32_t *)
              (&UNK_7fffa58337fa +
              (param_5 & 0xff) * 4 +
              ((int64_t)(short)((short)((int)CONCAT62(uVar23,0xa26d) - in_EAX) * -0x5159) ^
              0xffffffffffff88f0U));
    uVar16 = 0x8063;
  }
  else {
    uVar16 = 0x32f7ef53;
    uVar17 = 0x7fffa526ef4f;
    uVar6 = 0;
    for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar26 = (uint64_t)uVar6;
    (*(code *)((int64_t)(short)((uint16_t)in_EAX ^ 0x9b52) + 0x7fffa526ef4f))
              (0x7fffa526ef4f,uVar13,CONCAT62(uVar23,0x5e96),-0x327e50bf - in_EAX);
    puVar12 = (uint64_t *)((uVar17 << 0x2c | uVar17 >> 0x14) - ((uVar17 >> 0x14) << 0x36));
    *(uint8_t (*) [16])(puVar12 + 1) = (uint8_t  [16])0x0;
    *puVar12 = *puVar10;
    uVar20 = (uint8_t)*(uint32_t *)(&UNK_7fffa5830f20 + (param_5 & 0xff) * 4);
    lStack_48 = lStack_48 + uVar14 * 0x78;
    lVar27 = lStack_48 + uVar26 * 8;
    *(uint64_t **)(lStack_48 + uVar26 * 8) = puVar12;
  }
  puVar22[uVar26] = uVar20;
  *(int64_t *)(param_4 + -0x375a6f82) = lVar27;
  *(uint32_t *)(param_4 + -0x375a6f8a) = (uint32_t)uVar26 & 0xffff;
  *(uint64_t *)(param_4 + -0x375a6f92) = puVar22;
  bVar15 = (uint8_t)uVar16 & 0x1f;
  uVar24 = (in_EAX ^ 0xa5c345aa) >> bVar15 | (in_EAX ^ 0xa5c345aa) << 0x20 - bVar15;
  (*(code *)(&UNK_7fffa55e23a7 + (int)((0x395b7c2b - (in_EAX + 0x9c188b25)) * (uVar16 | 1))))
            (in_EAX,(int64_t)(int)((uVar16 ^ 0x2f6e2e67) - in_EAX ^ 0xf03e4fab));
  *(int64_t *)
   ((int64_t)
    (int)(0xe3850062 - uVar16 << (bVar8 & 0x1f) | 0xe3850062 - uVar16 >> 0x20 - (bVar8 & 0x1f)) +
   0x7fffa47cb68d) =
       *(int64_t *)
        ((int64_t)(int)(uVar24 * 0x61400000 | uVar24 * -0xfdb67b >> 10) + 0x7fffa47c8088) + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa549c980  |  RVA: 0xd2c980  |  Size: 937 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa549cb37) */
/* WARNING: Removing unreachable block (ram,0x7fffa549cc17) */

uint64_t * FUN_7fffa549c980(uint64_t *param_1,int param_2)

{
  *param_1 = &PTR_FUN_7fffa56f3928;
  FUN_7fffa5155450(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_7fffa55eeda0(param_1,0x18,0);
  }
  return param_1;
}


// ============================================================================
// Function : Unwind@7fffa549cd30  |  RVA: 0xd2cd30  |  Size: 67 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa549cd30(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)(short)(-(short)*(uint32_t *)(param_2 + 0x88) - 0x163U ^ 0xc0b6) +
            0x7fffa562be13))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa549cd74  |  RVA: 0xd2cd74  |  Size: 67 bytes
// Callers  : FUN_7fffa4cf5d1c@0x585d1c
// Callees  : FUN_7fffa5178cfc@0xa08cfc, FUN_7fffa4ee8dec@0x778dec, FUN_7fffa5130724@0x9c0724
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa549cd74(void)

{
  FUN_7fffa4ee8dec(&DAT_7fffa4781c20);
  FUN_7fffa5178cfc(0x7fffa4781c28);
  FUN_7fffa5130724(_DAT_7fffa4781c38);
  FUN_7fffa5130724(_DAT_7fffa4781c30);
  return;
}


// ============================================================================
// Function : FUN_7fffa549cdb8  |  RVA: 0xd2cdb8  |  Size: 1 bytes
// Callers  : FUN_7fffa55c8d98@0xe58d98
// Callees  : none
// ============================================================================
void FUN_7fffa549cdb8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa549cdd0  |  RVA: 0xd2cdd0  |  Size: 1075 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa549d1fe) overlaps instruction at (ram,0x7fffa549d1fb)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa549d1fb) */
/* WARNING: Removing unreachable block (ram,0x7fffa549cef3) */
/* WARNING: Removing unreachable block (ram,0x7fffa549d1f3) */
/* WARNING: Removing unreachable block (ram,0x7fffa549d1d6) */

void FUN_7fffa549cdd0(void)

{
  uint64_t uVar1;
  
  uRam00007fffa47baba8 = 0x9192ff350248ca0f;
  uVar1 = (0x3b4abf59addf4e31U - lRam00007fffa4781170 ^ 0x7fffa58629e0) * 0x39b993a1b03728cb;
  uRam00007fffa47babc0 = 0x38d3546b7f3b72e7;
  uRam00007fffa47babc8 = 0xc9323b9cfe123e23;
  uRam00007fffa47babd0 = 0x7fad59ab939dd4af;
  uRam00007fffa47babe0 = 0xb6ba31a16338cacc;
  uRam00007fffa47babd8 = 0xe7e4371e93c3a7ed;
  lRam00007fffa47babb8 = (uRam00007fffa4780fc0 ^ 0x5749ffa3f9a7393e) - 0x7fffa56f8720;
  uRam00007fffa47babb0 = uVar1 << 0x21 | uVar1 >> 0x1f;
  return;
}


// ============================================================================
// Function : FUN_7fffa549d210  |  RVA: 0xd2d210  |  Size: 2016 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa549d210(uint64_t param_1,uint64_t param_2,uint64_t param_3,
                          uint64_t *param_4,uint64_t param_5)

{
  uint8_t bVar1;
  uint32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  char *pcVar6;
  bool bVar7;
  uint8_t bVar8;
  uint32_t uVar9;
  uint64_t *in_RAX;
  uint64_t *puVar10;
  uint64_t uVar11;
  uint8_t bVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint32_t uVar15;
  uint64_t *puVar16;
  int64_t lVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  uint64_t *puVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  uint32_t uVar23;
  uint16_t uVar24;
  uint32_t in_R11D;
  uint32_t uVar25;
  uint32_t uVar26;
  int64_t lVar27;
  uint32_t uVar28;
  uint32_t uVar29;
  int iVar30;
  uint64_t *puVar31;
  int64_t lVar32;
  uint64_t *puVar33;
  uint64_t uStack_90;
  
  puVar20 = (uint64_t *)(param_1 >> 0x23 ^ param_1);
  param_5 = param_5 >> 0x31 ^ param_5;
  uVar2 = *(uint32_t *)(param_5 - 0x41763fd3);
  bVar8 = (uint8_t)in_R11D;
  if (((-0x7e54fcb - in_R11D) * -0x795f680 | (-0x7e54fcb - in_R11D) * -0x700f2bed >> 0x19) <
      (~(in_R11D ^ 0xe00a385) << 7 | ~(in_R11D ^ 0xe00a385) >> 0x19)) {
    uVar25 = (in_R11D ^ 0x3a0fff7d) * -0x1ba9f72f;
    uStack_90 = (uint64_t)uVar2;
  }
  else {
    uStack_90 = (int64_t)(int)uVar2;
    if ((0x1d110d01U >> (bVar8 & 0x1f) | 0x1d110d01 << 0x20 - (bVar8 & 0x1f)) <
        (0xd49a197d - in_R11D ^ 0xb9d4abff)) {
      uStack_90 = (uint64_t)uVar2;
    }
    uVar25 = (in_R11D ^ 0x172a94ad) + 0x9921799f;
  }
  uVar29 = 1 << (*(uint8_t *)(param_5 - 0x41763eeb) & 0x1f);
  uVar22 = *(uint32_t *)(param_5 - 0x41763fbf);
  uVar18 = (uint64_t)uVar22;
  bVar1 = *(uint8_t *)(param_5 - 0x41763ee7);
  uVar23 = *(uint32_t *)(param_5 - 0x41763fcf);
  lVar3 = *(int64_t *)(param_5 - 0x41763fe3);
  uVar21 = (int)param_4 - (int)lVar3;
  uVar26 = uVar21;
  if (uVar21 < uVar22) {
    uVar26 = uVar22;
  }
  uVar28 = 1 << (*(uint8_t *)(param_5 - 0x41763edf) & 0x1f);
  lVar27 = *(int64_t *)(param_5 - 0x41763f7b);
  bVar12 = 0x20 - (char)*(uint32_t *)(param_5 - 0x41763ee3);
  uVar22 = uVar21 - uVar29;
  if (uVar21 - uVar23 <= uVar29) {
    uVar22 = uVar23;
  }
  lVar4 = *(int64_t *)(param_5 - 0x41763f6b);
  puVar5 = *(uint64_t **)(param_5 - 0x41763ef3);
  if (*(int *)(param_5 - 0x41763fc3) != 0) {
    uVar22 = uVar23;
  }
  uVar29 = 1 << (bVar1 & 0x1f);
  uVar23 = uVar21 - uVar29;
  if (uVar21 < uVar29) {
    uVar23 = 0;
  }
  iVar30 = *(int *)(param_5 - 0x41763ebf);
  for (; uVar26 != uVar18; uVar18 = uVar18 + 1) {
    uVar14 = (uint64_t)((uint32_t)(*(int *)(lVar3 + uVar18) * -0x61c8864f) >> (bVar12 & 0x1f));
    *(uint32_t *)(lVar4 + (uint64_t)(~(-1 << (bVar1 & 0x1f)) & (uint32_t)uVar18) * 4) =
         *(uint32_t *)(lVar27 + uVar14 * 4);
    *(uint32_t *)(lVar27 + uVar14 * 4) = (uint32_t)uVar18;
    if (iVar30 != 0) break;
  }
  *(uint32_t *)(param_5 - 0x41763fbf) = uVar21;
  iVar30 = (int)*param_4;
  uVar15 = iVar30 * -0x61c8864f;
  uVar26 = *(uint32_t *)(lVar27 + (uint64_t)(uVar15 >> (bVar12 & 0x1f)) * 4);
  uVar18 = 3;
  if (uVar22 <= uVar26) {
    uVar14 = uVar18;
    do {
      puVar16 = (uint64_t *)((uint64_t)uVar26 + lVar3);
      if (*(int *)((uVar14 - 3) + (int64_t)puVar16) == *(int *)((int64_t)param_4 + (uVar14 - 3)))
      {
        puVar19 = param_4;
        if (param_4 < (uint64_t *)((int64_t)in_RAX - 7U)) {
          if (*puVar16 == *param_4) {
            lVar27 = 8;
LAB_7fffa549d4f0:
            puVar19 = (uint64_t *)((int64_t)param_4 + lVar27);
            if (puVar19 < (uint64_t *)((int64_t)in_RAX - 7U)) {
              if (*(uint64_t *)((int64_t)puVar16 + lVar27) == *puVar19) goto code_r0x7fffa549d506;
              uVar15 = 0;
              for (uVar18 = *(uint64_t *)((int64_t)puVar16 + lVar27) ^ *puVar19; (uVar18 & 1) == 0
                  ; uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                uVar15 = uVar15 + 1;
              }
              uVar18 = (uint64_t)(uVar15 >> 3) + lVar27;
              goto joined_r0x7fffa549d578;
            }
            puVar16 = (uint64_t *)((int64_t)puVar16 + lVar27);
            goto joined_r0x7fffa549d4db;
          }
          uVar15 = 0;
          for (uVar18 = *param_4 ^ *puVar16; (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x8000000000000000) {
            uVar15 = uVar15 + 1;
          }
          uVar18 = (uint64_t)(uVar15 >> 3);
        }
        else {
joined_r0x7fffa549d4db:
          if ((puVar19 < (uint64_t *)((int64_t)in_RAX + -3)) && ((int)*puVar16 == (int)*puVar19))
          {
            puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
            puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
          }
          if ((puVar19 < (uint64_t *)((int64_t)in_RAX - 1U)) &&
             ((short)*puVar16 == (short)*puVar19)) {
            puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
            puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
          }
          if (puVar19 < in_RAX) {
            puVar19 = (uint64_t *)
                      ((int64_t)puVar19 + (uint64_t)((char)*puVar16 == (char)*puVar19));
          }
          uVar18 = (int64_t)puVar19 - (int64_t)param_4;
        }
joined_r0x7fffa549d578:
        if (uVar14 < uVar18) {
          *puVar20 = (uint64_t)((uVar21 + 3) - uVar26);
          uVar14 = uVar18;
          if ((uint64_t *)((int64_t)param_4 + uVar18) == in_RAX) goto LAB_7fffa549d646;
        }
      }
      else {
      }
      uVar18 = uVar14;
      uVar15 = 0x43859931 << (bVar8 & 0x1f) | 0x43859931U >> 0x20 - (bVar8 & 0x1f);
      bVar1 = (uint8_t)uVar25 & 0x1f;
      bVar7 = uVar23 < uVar26;
      if ((uVar25 + 0x5307692f ^ 0xca3259a8) + 0xe6cacf8a <
          (uVar15 >> bVar1 | uVar15 << 0x20 - bVar1)) {
        bVar7 = uVar23 <= uVar26;
      }
      if (!bVar7) goto LAB_7fffa549d646;
      uVar28 = uVar28 - 1;
      uVar26 = *(uint32_t *)(lVar4 + (uint64_t)(uVar26 & uVar29 - 1) * 4);
      uVar24 = (uint16_t)((uVar25 ^ 0xfc70) + 0x32f);
      if ((uVar26 < uVar22) ||
         (uVar14 = uVar18,
         uVar28 == (uint16_t)(uVar24 >> (bVar8 & 0xf) | uVar24 << 0x10 - (bVar8 & 0xf))))
      goto LAB_7fffa549d646;
    } while( true );
  }
LAB_7fffa549d650:
  pcVar6 = (char *)*puVar5;
  uVar26 = 1 << (*(uint8_t *)((int64_t)puVar5 + 0x104) & 0x1f);
  lVar27 = puVar5[1];
  uVar22 = (int)pcVar6 - (int)lVar27;
  uVar23 = uVar22 - uVar26;
  if (uVar22 < uVar26) {
    uVar23 = 0;
  }
  if (uVar28 != 0) {
    uVar29 = *(uint32_t *)(puVar5 + 3);
    uVar15 = *(uint32_t *)(puVar5[0xe] + (uint64_t)(uVar15 >> (-*(char *)(puVar5 + 0x21) & 0x1fU)) * 4)
    ;
    if (uVar29 <= uVar15) {
      lVar4 = puVar5[0x10];
      puVar16 = (uint64_t *)((int64_t)param_4 + 4);
      lVar13 = uStack_90 + lVar3 + 8;
      uVar14 = uVar18;
      do {
        uVar18 = (uint64_t)uVar15;
        if (*(int *)(lVar27 + uVar18) == iVar30) {
          puVar10 = (uint64_t *)(lVar27 + uVar18 + 4);
          puVar19 = (uint64_t *)(((int64_t)pcVar6 - (int64_t)puVar10) + (int64_t)puVar16);
          if (in_RAX <= puVar19) {
            puVar19 = in_RAX;
          }
          puVar33 = puVar16;
          puVar31 = puVar10;
          if (puVar16 < (uint64_t *)((int64_t)puVar19 - 7U)) {
            if (*puVar10 == *puVar16) {
              lVar32 = lVar27 + 0xc + uVar18;
              lVar17 = 0;
              do {
                puVar33 = (uint64_t *)((int64_t)param_4 + lVar17 + 0xc);
                if ((uint64_t *)((int64_t)puVar19 - 7U) <= puVar33) {
                  puVar31 = (uint64_t *)(lVar32 + lVar17);
                  goto code_r0x7fffa549d7cb;
                }
                uVar18 = *(uint64_t *)(lVar32 + lVar17);
                lVar17 = lVar17 + 8;
              } while (uVar18 == *puVar33);
              uVar9 = 0;
              for (uVar18 = uVar18 ^ *puVar33; (uVar18 & 1) == 0;
                  uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                uVar9 = uVar9 + 1;
              }
              uVar18 = (uint64_t)(uVar9 >> 3) + lVar17;
            }
            else {
              uVar9 = 0;
              for (uVar18 = *puVar16 ^ *puVar10; (uVar18 & 1) == 0;
                  uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                uVar9 = uVar9 + 1;
              }
              uVar18 = (uint64_t)(uVar9 >> 3);
            }
          }
          else {
code_r0x7fffa549d7cb:
            if ((puVar33 < (uint64_t *)((int64_t)puVar19 - 3U)) &&
               ((int)*puVar31 == (int)*puVar33)) {
              puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
            }
            if ((puVar33 < (uint64_t *)((int64_t)puVar19 - 1U)) &&
               ((short)*puVar31 == (short)*puVar33)) {
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
              puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
            }
            if (puVar33 < puVar19) {
              puVar33 = (uint64_t *)
                        ((int64_t)puVar33 + (uint64_t)((char)*puVar31 == (char)*puVar33));
            }
            uVar18 = (int64_t)puVar33 - (int64_t)puVar16;
          }
          if ((char *)((int64_t)puVar10 + uVar18) == pcVar6) {
            puVar19 = (uint64_t *)((int64_t)puVar16 + uVar18);
            puVar10 = puVar19;
            puVar33 = (uint64_t *)(uStack_90 + lVar3);
            if (puVar19 < (uint64_t *)((int64_t)in_RAX + -7)) {
              uVar11 = *(uint64_t *)(uStack_90 + lVar3);
              if (uVar11 == *puVar19) {
                lVar32 = 0;
                do {
                  puVar10 = (uint64_t *)((int64_t)param_4 + lVar32 + uVar18 + 0xc);
                  if ((uint64_t *)((int64_t)in_RAX + -7) <= puVar10) {
                    puVar33 = (uint64_t *)(lVar32 + lVar13);
                    goto LAB_7fffa549d8bb;
                  }
                  uVar11 = *(uint64_t *)(lVar13 + lVar32);
                  lVar32 = lVar32 + 8;
                } while (uVar11 == *puVar10);
                uVar9 = 0;
                for (uVar11 = uVar11 ^ *puVar10; (uVar11 & 1) == 0;
                    uVar11 = uVar11 >> 1 | 0x8000000000000000) {
                  uVar9 = uVar9 + 1;
                }
                uVar11 = (uint64_t)(uVar9 >> 3) + lVar32;
              }
              else {
                uVar9 = 0;
                for (uVar11 = *puVar19 ^ uVar11; (uVar11 & 1) == 0;
                    uVar11 = uVar11 >> 1 | 0x8000000000000000) {
                  uVar9 = uVar9 + 1;
                }
                uVar11 = (uint64_t)(uVar9 >> 3);
              }
            }
            else {
LAB_7fffa549d8bb:
              if ((puVar10 < (uint64_t *)((int64_t)in_RAX - 3U)) &&
                 ((int)*puVar33 == (int)*puVar10)) {
                puVar10 = (uint64_t *)((int64_t)puVar10 + 4);
                puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
              }
              if ((puVar10 < (uint64_t *)((int64_t)in_RAX - 1U)) &&
                 ((short)*puVar33 == (short)*puVar10)) {
                puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
                puVar10 = (uint64_t *)((int64_t)puVar10 + 2);
              }
              if (puVar10 < in_RAX) {
                puVar10 = (uint64_t *)
                          ((int64_t)puVar10 + (uint64_t)((char)*puVar33 == (char)*puVar10));
              }
              uVar11 = (int64_t)puVar10 - (int64_t)puVar19;
            }
            uVar18 = uVar18 + uVar11;
          }
          uVar18 = uVar18 + 4;
          if (uVar14 < uVar18) {
            *puVar20 = (uint64_t)((((uVar21 - uVar2) + uVar22) - uVar15) + 3);
            if ((uint64_t *)((int64_t)param_4 + uVar18) == in_RAX) break;
            iVar30 = (int)*param_4;
            uVar14 = uVar18;
          }
        }
        uVar18 = uVar14;
        uVar9 = (uVar25 + 0xa29af293) * 0x200 | uVar25 + 0xa29af293 >> 0x17;
        bVar7 = uVar23 < uVar15;
        if ((uint64_t)(int64_t)(int)~(uVar9 << (bVar8 & 0x1f) | uVar9 >> 0x20 - (bVar8 & 0x1f)) <=
            (uint64_t)~(in_R11D ^ 0xe0bec56)) {
          bVar7 = (int)uVar23 <= (int)uVar15;
        }
        if ((!bVar7) ||
           (uVar15 = *(uint32_t *)(lVar4 + (uint64_t)(uVar15 & uVar26 - 1) * 4), uVar15 < uVar29))
        break;
        uVar28 = uVar28 - 1;
        uVar14 = uVar18;
        if (uVar28 == 0) break;
      } while( true );
    }
  }
  uVar18 = uVar18 - 0x8c93ca4c;
  return uVar18 << 0x2a | (uVar18 * 0x10000000 ^ uVar18) >> 0x16;
code_r0x7fffa549d506:
  lVar27 = lVar27 + 8;
  goto LAB_7fffa549d4f0;
LAB_7fffa549d646:
  iVar30 = (int)*param_4;
  uVar15 = iVar30 * -0x61c8864f;
  goto LAB_7fffa549d650;
}


// ============================================================================
// Function : FUN_7fffa549da04  |  RVA: 0xd2da04  |  Size: 1 bytes
// Callers  : FUN_7fffa50c9360@0x959360
// Callees  : none
// ============================================================================
void FUN_7fffa549da04(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa549da10  |  RVA: 0xd2da10  |  Size: 24664 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa54a15d4) */
/* WARNING: Removing unreachable block (ram,0x7fffa549fbd8) */
/* WARNING: Removing unreachable block (ram,0x7fffa549fc13) */
/* WARNING: Removing unreachable block (ram,0x7fffa549fc17) */
/* WARNING: Removing unreachable block (ram,0x7fffa54a0d66) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t *
FUN_7fffa549da10(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                uint64_t param_5)

{
  uint16_t uVar1;
  int64_t lVar2;
  uint16_t uVar3;
  uint64_t *in_RAX;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint8_t bVar7;
  uint8_t bVar8;
  uint8_t bVar9;
  uint8_t bVar10;
  uint64_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint64_t *puVar14;
  uint32_t uVar15;
  uint64_t uVar16;
  uint8_t bVar17;
  uint8_t bVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  uint32_t uVar21;
  int64_t lVar22;
  uint64_t uVar23;
  uint64_t *in_R10;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint32_t uVar28;
  uint32_t uVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t *puVar32;
  uint8_t bVar33;
  char cVar34;
  int iVar35;
  uint64_t uVar36;
  uint64_t *puVar37;
  int64_t lVar38;
  bool bVar39;
  uint64_t uVar40;
  uint64_t *puStack_d0;
  uint64_t uStack_b0;
  uint8_t bStack_a0;
  uint64_t uStack_98;
  
  uVar21 = (uint32_t)param_3;
  param_1 = (param_1 << 0x2d | param_1 >> 0x13) ^ (param_1 << 0x23 | param_1 >> 0x1d) ^ param_1;
  bVar39 = param_2 < 8;
  if ((uint64_t)((uVar21 ^ 0xf1f19748) << 0x19 | (uVar21 ^ 0xf1f19748) >> 7) == 0xffffffffc06fbd36)
  {
    bVar39 = (int64_t)param_2 < 9;
  }
  param_1 = (param_1 << 6 | param_1 >> 0x3a) ^ (param_1 << 0x1a | param_1 >> 0x26) ^ param_1;
  param_1 = (param_1 << 0xc | param_1 >> 0x34) ^ (param_1 << 0x34 | param_1 >> 0xc) ^ param_1;
  param_1 = (param_1 << 0x28 | param_1 >> 0x18) ^ (param_1 << 0x18 | param_1 >> 0x28) ^ param_1;
  puVar14 = (uint64_t *)
            ((param_1 << 0x10 | param_1 >> 0x30) ^ (param_1 << 0x30 | param_1 >> 0x10) ^ param_1);
  uVar24 = *in_R10;
  uVar28 = (uint32_t)uVar24 & 0xff;
  uVar12 = (uint32_t)param_5;
  uVar23 = (uint64_t)DAT_7fffa56bac50;
  bVar7 = (uint8_t)param_3;
  uVar3 = (uint16_t)param_3;
  if ((param_4 & 1) != 0) {
    if (bVar39 != false) {
      return (uint64_t *)(uint64_t)bVar39;
    }
    if (param_2 == 8) {
      return (uint64_t *)0x0;
    }
    puVar32 = (uint64_t *)((int64_t)puVar14 + (param_2 - 8));
    puVar4 = (uint64_t *)CONCAT71((int7)((uint64_t)puVar32 >> 8),0xb < uVar28);
    if (((uVar24 & uVar23) * param_5 >> 3) + 8 <= param_2 && 0xb >= uVar28) {
      puVar4 = (uint64_t *)
               (uint64_t)(0x2f6d2aeU >> (bVar7 & 0x1f) | 0x2f6d2ae << 0x20 - (bVar7 & 0x1f));
      bVar39 = uVar28 < 9;
      if (puVar4 < (uint64_t *)
                   (uint64_t)
                   (((uVar21 ^ 0x4a6fe6c8) << 1 | (uint32_t)((int)(uVar21 ^ 0x4a6fe6c8) < 0)) +
                   0xfa6c8be7)) {
        bVar39 = ((uVar21 ^ 0x16e55) & 0xffff) < uVar28;
      }
      if (!bVar39) {
        puVar6 = puVar14;
        if (9 < uVar28) {
          uVar29 = (int)uVar12 % 5;
          if (uVar28 == 10) {
            if ((int)uVar29 < 1) {
              uVar23 = 0;
              uVar24 = 0;
            }
            else {
              lVar22 = param_5 << 0x20;
              if (~((uVar21 | 1) * 0x55058000 | (uVar21 | 1) * -0x18c355f5 >> 0x11) !=
                  uVar21 + 0x7ae79492) {
                lVar22 = (int64_t)param_5 >> 0x20;
              }
              param_5 = lVar22 >> 0x20;
              if (uVar29 == 1) {
                uVar5 = 0;
                uVar24 = 0;
LAB_7fffa54a0e95:
                lVar22 = param_5 - 1;
                param_5 = param_5 - 1;
                uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1];
                uVar5 = uVar5 + uVar23;
                uVar24 = uVar24 >> ((uint8_t)uVar23 & 0x3f) | uVar23 & 0xffffffffffffff00;
              }
              else {
                uVar28 = uVar29 & 0x7ffffffe;
                uVar24 = 0;
                uVar5 = 0;
                do {
                  lVar22 = param_5 - 2;
                  lVar38 = param_5 - 1;
                  param_5 = param_5 - 2;
                  uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1];
                  uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar38) + 1];
                  uVar5 = uVar5 + uVar40 + uVar23;
                  uVar24 = (uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40 & 0xffffffffffffff00) >>
                           ((uint8_t)uVar23 & 0x3f) | uVar23 & 0xffffffffffffff00;
                  uVar28 = uVar28 - 2;
                } while (uVar28 != 0);
                if ((uVar29 & 1) != 0) goto LAB_7fffa54a0e95;
              }
              uVar23 = (uint64_t)((uint32_t)uVar5 & 7);
              *puVar14 = uVar24 >> (-(char)uVar5 & 0x3fU);
              puVar14 = (uint64_t *)(((uVar5 & 0xff) >> 3) + (int64_t)puVar14);
            }
            uVar28 = (uint32_t)param_5;
            lVar22 = (int64_t)(int)uVar28;
            puVar4 = (uint64_t *)(uint64_t)(uint32_t)((int)uVar28 % 10);
            puVar6 = puVar14;
            if ((int)uVar28 % 10 != (~((uVar21 | 1) * 0x12a0b) & 0xffff)) {
              uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -5) + 1];
              uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -4) + 1];
              uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -1) + 1];
              uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -2) + 1];
              uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -3) + 1];
              uVar24 = ((((uVar24 >> ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar31 & 0x3f) |
                         uVar31) >> ((uint8_t)uVar36 & 0x3f) | uVar36) >> ((uint8_t)uVar40 & 0x3f) |
                       uVar40) >> ((uint8_t)uVar5 & 0x3f) | uVar5;
              uVar30 = -uVar5;
              if (((0x3f5cef19 << (bVar7 & 0x1f) | 0x3f5cef19U >> 0x20 - (bVar7 & 0x1f)) ^
                  0xc1c7ac46) < (uVar21 | 1) * 0x48d9da3c + 0x2ce52d25) {
                uVar30 = uVar5;
              }
              uVar23 = uVar30 + uVar31 + uVar36 + uVar23 + uVar25 + uVar40;
              *puVar14 = uVar24 >> (-(char)uVar23 & 0x3fU);
              puVar6 = (uint64_t *)(((uVar23 & 0xff) >> 3) + (int64_t)puVar14);
              uVar28 = uVar28 - 5;
              uVar23 = (uint64_t)((uint32_t)uVar23 & 7);
              puVar4 = puVar14;
            }
            cVar34 = (char)uVar23;
            if (0 < (int)uVar28) {
              uVar5 = (uint64_t)uVar28;
              do {
                puVar4 = puVar6;
                uVar25 = (uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 1));
                uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 3)) + 1];
                if ((int64_t)
                    (int)((0x63ddbf8b - uVar21) * 0x11f5d500 |
                         (0x63ddbf8b - uVar21) * -0x67ee0a2b >> 0x18) <
                    (int64_t)
                    (uint64_t)((0x85ac2432 - uVar21) * 0x40 | 0x85ac2432 - uVar21 >> 0x1a)) {
                  uVar25 = in_R10[uVar25 + 1];
                  uVar24 = uVar24 >> ((uint8_t)uVar25 & 0x3f) | uVar25;
                  uVar28 = (uVar21 ^ 0xe7278c83) + 0x49f49fd5;
                  uVar28 = uVar28 * 0x200 | uVar28 >> 0x17;
                }
                else {
                  uVar25 = in_R10[uVar25 + 1];
                  uVar24 = uVar24 >> ((uint8_t)uVar25 & 0x3f) | uVar25;
                  uVar28 = (uVar21 | 1) * -0x6fc27b94;
                }
                bVar10 = (uint8_t)uVar28 & 0x1f;
                uVar12 = 0xa97f10ccU >> bVar10 | -0x5680ef34 << 0x20 - bVar10;
                uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 2)) + 1];
                uVar29 = (uVar28 | 1) * 0x176048f8 + 0xb8e3a6d0;
                uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 5)) + 1];
                uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 4)) + 1];
                uVar23 = uVar36 + uVar40 + uVar30 + uVar31 + uVar23 + uVar25;
                uVar25 = (uVar23 & 0xff) >> 3;
                bVar10 = (uint8_t)uVar40 + 1;
                if ((uint64_t)(~((uVar21 + 0x80b6a273) * (uVar28 | 1)) * -0x5bfd6803) <=
                    (uint64_t)
                    (int64_t)(int)(uVar12 << (bVar7 & 0x1f) | uVar12 >> 0x20 - (bVar7 & 0x1f))) {
                  bVar10 = (uint8_t)uVar40;
                }
                uVar36 = (((uVar24 >> ((uint8_t)uVar31 & 0x3f) | uVar31) >> (bVar10 & 0x3f) | uVar40)
                          >> ((uint8_t)uVar30 & 0x3f) | uVar30) >> (uVar36 & 0xff) | uVar36;
                *puVar4 = uVar36 >> (-(char)uVar23 & 0x3fU);
                uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 7)) + 1];
                bVar10 = *(uint8_t *)((int64_t)in_RAX + (uVar5 - 10));
                uVar24 = (int64_t)(char)bVar10;
                if ((0x32a2cade - uVar28 << (bVar7 & 0x1f) |
                    0x32a2cade - uVar28 >> 0x20 - (bVar7 & 0x1f)) == 0x6c99d610) {
                  uVar24 = (uint64_t)bVar10;
                }
                uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 8)) + 1];
                uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 9)) + 1];
                uVar24 = in_R10[uVar24 + 1];
                lVar22 = uVar40 + uVar30 + uVar31 +
                         in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 6)) + 1] + uVar24;
                uVar16 = lVar22 + (uint64_t)((uint32_t)uVar23 & 7);
                puVar6 = (uint64_t *)((int64_t)puVar4 + ((uVar16 & 0xff) >> 3) + uVar25);
                uVar28 = (uint32_t)uVar16 & 7;
                uVar23 = (uint64_t)uVar28;
                cVar34 = (char)uVar28;
                bVar10 = ~(uint8_t)uVar31;
                if ((int64_t)(int)(uVar29 << (bVar7 & 0x1f) | uVar29 >> 0x20 - (bVar7 & 0x1f)) !=
                    0xce2f153f) {
                  bVar10 = (uint8_t)uVar31;
                }
                uVar24 = (((in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 6)) + 1] >>
                            ((uint8_t)uVar40 & 0x3f) | uVar40) >> (bVar10 & 0x3f) | uVar31) >>
                          ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar24 & 0x3f) |
                         uVar36 >> ((uint8_t)lVar22 & 0x3f) | uVar24;
                *(uint64_t *)((int64_t)puVar4 + uVar25) = uVar24 >> (-(char)uVar16 & 0x3fU);
                bVar39 = 10 < uVar5;
                uVar5 = uVar5 - 10;
              } while (bVar39);
            }
            goto LAB_7fffa549e748;
          }
          if ((int)uVar29 < 1) {
            uVar5 = 0;
            uVar24 = 0;
          }
          else {
            uVar28 = 0;
            param_5 = (uint64_t)(int)uVar12;
            if (uVar29 == 1) {
              uVar40 = 0;
              uVar24 = 0;
LAB_7fffa54a14f7:
              uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 1)) + 1];
              param_5 = param_5 - 1;
              uVar40 = uVar40 + uVar5;
              uVar24 = uVar24 >> ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
            }
            else {
              uVar24 = 0;
              uVar40 = 0;
              do {
                if ((uVar21 ^ 0xea8c627c) * 0x5b8a46cb + 0xa42dcfda <
                    ~((uVar21 + 0xac6f60e) * 0x564c2ef7)) {
                  bVar10 = *(uint8_t *)((int64_t)in_RAX + (param_5 - 2));
                  uVar5 = (uint64_t)bVar10;
                  if (uVar21 + 0x54f59cf7 <= (uVar21 ^ 0x62baba40)) {
                    uVar5 = (int64_t)(char)bVar10;
                  }
                  uVar12 = uVar21 + 0x42c7e6bf ^ 0x47e05421;
                  uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 1)) + 1];
                  uVar24 = uVar24 >> ((uint8_t)uVar25 & 0x3f) | uVar25 & 0xffffffffffffff00;
                }
                else {
                  uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 1)) + 1];
                  uVar12 = 0x96e0a395;
                  bVar10 = (uint8_t)uVar25 - 1;
                  if ((uVar21 + 0x1fc3743d ^ 0x4bba4d40) < (0x433e7552 - uVar21) * -0x3bd65fbd) {
                    bVar10 = (uint8_t)uVar25;
                  }
                  uVar24 = uVar24 >> (bVar10 & 0x3f) | uVar25 & 0xffffffffffffff00;
                  uVar5 = (uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 2));
                }
                param_5 = param_5 - 2;
                uVar28 = uVar28 + 2;
                uVar5 = in_R10[uVar5 + 1];
                uVar40 = uVar40 + uVar25 + uVar5;
                uVar24 = uVar24 >> ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
              } while (uVar28 != (uVar29 & 0x7ffffffe));
              if ((uVar29 & 1) != (((uVar21 ^ 0x23b2) - uVar12) - 0x4cb4 & 0xffff))
              goto LAB_7fffa54a14f7;
            }
            uVar5 = (uint64_t)((uint32_t)uVar40 & 7);
            *puVar14 = uVar24 >> (-(char)(uVar40 & uVar23) & 0x3fU);
            puVar6 = (uint64_t *)(((uVar40 & uVar23) >> 3 & 0x1fffffff) + (int64_t)puVar14);
          }
          uVar28 = (uint32_t)param_5;
          lVar22 = (int64_t)(int)uVar28;
          if (uVar28 != ((int)uVar28 / 10) * 10) {
            uVar28 = uVar28 - 5;
            if ((int64_t)(int)((-0x13b20334 - uVar21) * 0x2cba38af) <
                (int64_t)(uint64_t)(0x94c << (bVar7 & 0x1f) | 0x94cU >> 0x20 - (bVar7 & 0x1f))) {
              uVar12 = 0x9c0c4f5 << (bVar7 & 0x1f) | 0x9c0c4f5U >> 0x20 - (bVar7 & 0x1f);
            }
            else {
              uVar12 = uVar21 + 0x114f3c39;
            }
            uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -2) + 1];
            uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -1) + 1];
            uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -3) + 1];
            uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -4) + 1];
            uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (int64_t)(int)uVar28) + 1];
            uVar24 = ((((uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uVar23 & 0x3f) | uVar23
                       ) >> ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar31 & 0x3f) | uVar31) >>
                     ((uint8_t)uVar36 & 0x3f) | uVar36 & (uint64_t)DAT_7fffa56bc580;
            uVar30 = uVar5 + uVar40 + uVar23;
            if ((((uVar21 | 1) * -0x22dc0000 | (uVar21 | 1) * 0x12cfba48 >> 0x11) - uVar12) +
                -0x442ff382 == ((-0x12c1811a - uVar12) * -0x6dee68cf - uVar21) + 0x3616d650) {
              uVar30 = uVar23 & uVar5 + uVar40;
            }
            uVar30 = uVar30 + uVar25 + uVar31 + uVar36;
            *puVar6 = uVar24 >> (-(char)uVar30 & 0x3fU);
            puVar6 = (uint64_t *)(((uVar30 & 0xff) >> 3) + (int64_t)puVar6);
            uVar5 = (uint64_t)((uint32_t)uVar30 & 7);
          }
          cVar34 = (char)uVar5;
          bVar39 = uVar28 == 0;
          if (uVar21 + 0x280d101d < ((uVar21 | 1) * -0x2f0d364d ^ 0x85620787)) {
            bVar39 = 0 < (int)uVar28;
          }
          puVar4 = (uint64_t *)(uint64_t)bVar39;
          if (bVar39 == true) {
            uVar23 = (uint64_t)uVar28;
            while( true ) {
              uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 3)) + 1];
              uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 2)) + 1];
              uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 4)) + 1];
              uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 5)) + 1];
              uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 1)) + 1];
              uVar24 = uVar24 >> ((uint8_t)uVar30 & 0x3f);
              uVar16 = uVar5 + uVar36 + uVar40 + uVar25 + uVar30 + uVar31;
              uVar5 = uVar24 | uVar30;
              if (0xfb895969 - (uVar21 + 0xfc8e2c44) <=
                  (0x1914dbe5 << (bVar7 & 0x1f) | 0x1914dbe5U >> 0x20 - (bVar7 & 0x1f)) *
                  -0x4add1cc1) {
                uVar5 = uVar30 * uVar24;
              }
              uVar31 = (((uVar5 >> ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar40 & 0x3f) | uVar40
                        ) >> ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar36 & 0x3f) |
                       uVar36 & 0xffffffffffffff00;
              *puVar6 = uVar31 >> (-(char)uVar16 & 0x3fU);
              uVar24 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 8)) + 1];
              uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 7)) + 1];
              uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 9)) + 1];
              uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 10)) + 1];
              lVar22 = uVar40 + uVar24 + uVar25 +
                       in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 6)) + 1] + uVar5;
              uVar36 = (uint64_t)((uint32_t)uVar16 & 7) + lVar22;
              uVar24 = (((in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 6)) + 1] >>
                          ((uint8_t)uVar5 & 0x3f) | uVar5) >> ((uint8_t)uVar24 & 0x3f) | uVar24) >>
                        ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uVar25 & 0x3f) |
                       uVar25 & 0xffffffffffffff00 | uVar31 >> ((uint8_t)lVar22 & 0x3f);
              puVar4 = (uint64_t *)((uVar16 & 0xff) >> 3);
              *(uint64_t *)((int64_t)puVar6 + (int64_t)puVar4) =
                   uVar24 >> (-(char)uVar36 & 0x3fU);
              puVar6 = (uint64_t *)(((uVar36 & 0xff) >> 3) + (int64_t)puVar6 + (int64_t)puVar4);
              uVar28 = (uint32_t)uVar36 & 7;
              uVar5 = (uint64_t)uVar28;
              cVar34 = (char)uVar28;
              if (uVar23 < 0xb) break;
              uVar40 = uVar23 ^ 0xfffffffffffffff6;
              uVar23 = uVar23 - 10;
              if ((uint64_t)
                  (int64_t)(int)((0x7d01d90f - uVar21) * 0x20000 | 0x7d01d90f - uVar21 >> 0xf) <
                  (uint64_t)(-0x34e1087b << (bVar7 & 0x1f) | 0xcb1ef785U >> 0x20 - (bVar7 & 0x1f)))
              {
                uVar23 = uVar40;
              }
            }
          }
          goto LAB_7fffa549e748;
        }
        uVar28 = (int)uVar12 % 6;
        if ((int)uVar28 < 1) {
          uVar5 = 0;
          uVar24 = 0;
        }
        else {
          param_5 = (uint64_t)(int)uVar12;
          if (uVar28 == 1) {
            uVar23 = 0;
            uVar24 = 0;
LAB_7fffa54a0227:
            param_5 = param_5 - 1;
            if (uVar21 != 0x45186e5c) {
              param_5 = 0xffffffffffffffff;
            }
            uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + param_5) + 1];
            uVar23 = uVar23 + uVar5;
            uVar24 = uVar24 >> ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
          }
          else {
            uVar12 = uVar28 & 0x7ffffffe;
            uVar24 = 0;
            uVar23 = 0;
            do {
              bVar10 = *(uint8_t *)((int64_t)in_RAX + (param_5 - 1));
              lVar22 = param_5 - 2;
              param_5 = param_5 - 2;
              uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1];
              uVar40 = (int64_t)(char)bVar10;
              if (((int64_t)(int)(uVar21 ^ 0xb5f8195c) ^ (param_3 | 1) * 0x66d63509befe9a0e) !=
                  0xffffffffffffffff) {
                uVar40 = (uint64_t)bVar10;
              }
              uVar40 = in_R10[uVar40 + 1];
              uVar23 = uVar23 + uVar5 + uVar40;
              uVar24 = (uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40 & 0xffffffffffffff00) >>
                       ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
              uVar12 = uVar12 - 2;
            } while (uVar12 != 0);
            if ((uVar28 & 1) != 0) goto LAB_7fffa54a0227;
          }
          uVar5 = (uint64_t)((uint32_t)uVar23 & 7);
          *puVar14 = uVar24 >> (-(char)uVar23 & 0x3fU);
          puVar6 = (uint64_t *)(((uVar23 & 0xff) >> 3) + (int64_t)puVar14);
        }
        uVar28 = (uint32_t)param_5;
        lVar22 = (int64_t)(int)uVar28;
        if (uVar28 != (((uint32_t)((int)uVar28 / 6 + ((int)uVar28 >> 0x1f)) >> 1) -
                      ((int)uVar28 >> 0x1f)) * 0xc) {
          uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -2) + 1];
          uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -4) + 1];
          uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -5) + 1];
          uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -3) + 1];
          uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -1) + 1];
          uVar28 = uVar28 - 6;
          uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (int64_t)(int)uVar28) + 1];
          uVar5 = uVar40 + uVar31 + uVar25 + uVar36 + uVar30 + uVar23 + uVar5;
          uVar24 = (((((uVar24 >> ((uint8_t)uVar36 & 0x3f) | uVar36) >> ((uint8_t)uVar23 & 0x3f) | uVar23)
                      >> ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar40 & 0x3f) | uVar40) >>
                    ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar30 & 0x3f) |
                   uVar30 & 0xffffffffffffff00;
          *puVar6 = uVar24 >> (-(char)uVar5 & 0x3fU);
          puVar6 = (uint64_t *)(((uVar5 & 0xff) >> 3) + (int64_t)puVar6);
          uVar5 = (uint64_t)((uint32_t)uVar5 & 7);
        }
        cVar34 = (char)uVar5;
        puVar4 = (uint64_t *)0x0;
        if (0 < (int)uVar28) {
          uVar23 = (uint64_t)uVar28 + 0xc;
          uVar28 = (uint32_t)DAT_7fffa56b2660;
          puVar14 = puVar6;
          do {
            bVar10 = *(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xe));
            uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x10)) + 1];
            uVar25 = (uint64_t)bVar10;
            if ((uVar21 ^ 0xf5169cbf) <=
                (0xa363065U >> (bVar7 & 0x1f) | 0xa363065 << 0x20 - (bVar7 & 0x1f))) {
              uVar25 = (int64_t)(char)bVar10;
            }
            uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xf)) + 1];
            uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xd)) + 1];
            uVar25 = in_R10[uVar25 + 1];
            uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x12)) + 1];
            uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x11)) + 1];
            uVar27 = uVar40 + uVar5 + uVar31 + uVar36 + uVar16 + uVar30 + uVar25;
            uVar36 = uVar30 & 0xffffffffffffff00 |
                     (((((uVar24 >> ((uint8_t)uVar36 & 0x3f) | uVar36) >> ((uint8_t)uVar25 & 0x3f) |
                        uVar25) >> (uVar31 & 0xff) | uVar31) >> ((uint8_t)uVar40 & 0x3f) | uVar40) >>
                      ((uint8_t)uVar16 & 0x3f) | uVar16) >> ((uint8_t)uVar30 & 0x3f);
            *puVar14 = uVar36 >> (-(char)uVar27 & 0x3fU);
            puVar4 = (uint64_t *)((uVar27 & 0xff) >> 3);
            uVar24 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x13)) + 1];
            uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x17)) + 1];
            uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x15)) + 1];
            uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x16)) + 1];
            uVar5 = -uVar24;
            if (uVar21 + 0x55eafd3a <
                (0x2c000010U >> (bVar7 & 0x1f) | 0x2c000010 << 0x20 - (bVar7 & 0x1f))) {
              uVar5 = uVar24;
            }
            uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x18)) + 1];
            uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x14)) + 1];
            lVar22 = uVar30 + uVar31 + uVar40 + uVar25 + uVar16 + uVar5;
            uVar27 = lVar22 + (uint64_t)((uint32_t)uVar27 & 7);
            puVar6 = (uint64_t *)(((uVar27 & 0xff) >> 3) + (int64_t)puVar14 + (int64_t)puVar4);
            uVar12 = (uint32_t)uVar27 & 7;
            uVar5 = (uint64_t)uVar12;
            cVar34 = (char)uVar12;
            bVar10 = (uint8_t)uVar16 - 1;
            if (0x37e1b4c < (-0x7a55f830 << (bVar7 & 0x1f) | 0x85aa07d0U >> 0x20 - (bVar7 & 0x1f)))
            {
              bVar10 = (uint8_t)uVar16;
            }
            uVar16 = (uVar24 >> (bVar10 & 0x3f) | uVar16) >> ((uint8_t)uVar25 & 0x3f);
            uVar24 = uVar16 - uVar25;
            if (uVar21 + 0x75e3e0a <= uVar21 + 0x239148c4) {
              uVar24 = uVar25 | uVar16;
            }
            uVar25 = (uVar24 >> ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar40 & 0x3f);
            uVar24 = uVar25 - uVar40;
            if ((uint64_t)~((uVar21 | uVar28) * 0x7dc5b1d0) < 0xffffffffceb5383d) {
              uVar24 = uVar25 | uVar40;
            }
            uVar24 = uVar24 >> ((uint8_t)uVar30 & 0x3f) |
                     uVar36 >> ((uint8_t)lVar22 & 0x3f) | uVar30 & 0xffffffffffffff00;
            *(uint64_t *)((int64_t)puVar14 + (int64_t)puVar4) = uVar24 >> (-(char)uVar27 & 0x3fU)
            ;
            uVar23 = uVar23 - 0xc;
            puVar14 = puVar6;
          } while (0xc < uVar23);
        }
        goto LAB_7fffa549e748;
      }
      if (uVar28 < 8) {
        if (uVar28 != 7) {
          uVar12 = (int)uVar12 % 9;
          bVar39 = 0 < (int)uVar12;
          if ((0x45d2fd9fU >> (bVar7 & 0x1f) | 0x45d2fd9f << 0x20 - (bVar7 & 0x1f)) + 0x4c8d6f87 <
              (uVar21 ^ 0x78d23bd4) + 0xe39797c1) {
            bVar39 = uVar12 <= ((uVar21 ^ 0x9ef6e5c) & 0xffff);
          }
          if (bVar39) {
            lVar22 = param_5 << 0x20;
            if ((int)((uVar21 + 0xb874b8a7) * 0x40000000 | uVar21 + 0xb874b8a7 >> 2) <=
                (int)(uVar21 ^ 0x901e7a03)) {
              lVar22 = (int64_t)param_5 >> 0x20;
            }
            param_5 = lVar22 >> 0x20;
            if (uVar12 == 1) {
              uVar5 = 0;
              uVar24 = 0;
LAB_7fffa54a2d3d:
              uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 1)) + 1];
              param_5 = param_5 - 1;
              uVar5 = uVar5 + uVar23;
              uVar24 = uVar24 >> ((uint8_t)uVar23 & 0x3f) | uVar23 & 0xffffffffffffff00;
            }
            else {
              uVar28 = uVar12 & 0x7ffffffe;
              uVar24 = 0;
              uVar5 = 0;
              do {
                uVar28 = uVar28 - 2;
                uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 1)) + 1];
                uVar40 = (uint64_t)
                         ((uVar21 ^ 0x9a54809e) * 0x18e6bba1 + 0x13bb1648 <= (uVar21 ^ 0x1e5fa606));
                lVar22 = param_5 + uVar40 * 4;
                param_5 = (param_5 + uVar40 * 4) - 2;
                bVar10 = *(uint8_t *)((int64_t)in_RAX + lVar22 + -2);
                uVar40 = (int64_t)(char)bVar10;
                if (~(0xdd13d6b0U >> (bVar7 & 0x1f) | -0x22ec2950 << 0x20 - (bVar7 & 0x1f)) <=
                    0xe364fd96 - uVar21) {
                  uVar40 = (uint64_t)bVar10;
                }
                uVar40 = in_R10[uVar40 + 1];
                uVar5 = uVar5 + uVar23 + uVar40;
                uVar24 = (uVar24 >> ((uint8_t)uVar23 & 0x3f) | uVar23 & 0xffffffffffffff00) >>
                         ((uint8_t)uVar40 & 0x3f) | uVar40 & 0xffffffffffffff00;
              } while (uVar28 != 0);
              if ((uVar12 & 1) != 0) goto LAB_7fffa54a2d3d;
            }
            uVar23 = (uint64_t)((uint32_t)uVar5 & 7);
            *puVar14 = uVar24 >> (-(char)uVar5 & 0x3fU);
            puVar14 = (uint64_t *)(((uVar5 & 0xff) >> 3) + (int64_t)puVar14);
          }
          else {
            uVar23 = 0;
            uVar24 = 0;
          }
          uVar28 = (uint32_t)param_5;
          lVar22 = (int64_t)(int)uVar28;
          puVar4 = (uint64_t *)(uint64_t)(uint32_t)((int)uVar28 % 0x12);
          puVar6 = puVar14;
          if ((int)uVar28 % 0x12 != ((0x2f5e - uVar21) * 0x7b4b + 0x7e6a & 0xffff)) {
            uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -4) + 1];
            uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -1) + 1];
            uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -5) + 1];
            uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -2) + 1];
            uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -3) + 1];
            uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -6) + 1];
            uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -9) + 1];
            uVar27 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -7) + 1];
            uVar20 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -8) + 1];
            uVar23 = uVar31 + uVar5 + uVar16 + uVar30 + uVar40 + uVar25 + uVar20 + uVar36 +
                     uVar27 + uVar23;
            uVar24 = ((((((((uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uVar31 & 0x3f) |
                           uVar31) >> ((uint8_t)uVar36 & 0x3f) | uVar36) >> ((uint8_t)uVar5 & 0x3f) |
                         uVar5) >> ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar30 & 0x3f) | uVar30
                       ) >> ((uint8_t)uVar27 & 0x3f) | uVar27) >> ((uint8_t)uVar20 & 0x3f) | uVar20) >>
                     ((uint8_t)uVar16 & 0x3f) | uVar16;
            *puVar14 = uVar24 >> (-(char)uVar23 & 0x3fU);
            puVar4 = (uint64_t *)(((uVar23 & 0xff) >> 3) + (int64_t)puVar14);
            uVar28 = uVar28 - 9;
            uVar23 = (uint64_t)((uint32_t)uVar23 & 7);
            puVar6 = puVar4;
          }
          cVar34 = (char)uVar23;
          if (0 < (int)uVar28) {
            uVar5 = (uint64_t)uVar28;
            puStack_d0 = puVar6;
            do {
              uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 1)) + 1];
              bVar10 = *(uint8_t *)((int64_t)in_RAX + (uVar5 - 8));
              uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 9)) + 1];
              uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 3)) + 1];
              uVar27 = (uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 2));
              uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 6)) + 1];
              uVar30 = in_R10[(uint64_t)bVar10 + 1];
              bVar9 = (uint8_t)uVar30;
              bVar18 = ~bVar10;
              bVar8 = (bVar9 ^ 0xff) & bVar18;
              uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 7)) + 1];
              uVar20 = (uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 4));
              bVar17 = -bVar10;
              if (((uVar21 ^ 0xf6b3ba14) * 0x7f618000 | (uVar21 ^ 0xf6b3ba14) * 0x2b82fec3 >> 0x11)
                  < ((uVar21 ^ 0x1f41cb88) << 0x13 | (uVar21 ^ 0x1f41cb88) >> 0xd)) {
                bVar17 = bVar18;
              }
              bStack_a0 = (uint8_t)uVar36;
              bVar33 = ((char)((uVar21 | 1) * -0x6acecb6c >> 5) + '|') * bVar8;
              if (uVar21 == 0xa3c9605a) {
                bVar33 = bVar8 ^ 10;
              }
              uVar11 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 5)) + 1];
              if ((uVar21 | 1) * -0x677b24a0 == -0x213ca666) {
                uVar20 = in_R10[uVar20 + 1];
                uVar28 = (uVar21 ^ 0xf66d7df7) + 0x872c59cb;
                uVar27 = in_R10[uVar27 + 1];
                lVar22 = uVar31 + uVar27 + uVar20 + uVar23 + uVar40;
              }
              else {
                uVar27 = in_R10[uVar27 + 1];
                uVar28 = 0xe79dc1d3U >> (bVar7 & 0x1f) | -0x18623e2d << 0x20 - (bVar7 & 0x1f);
                uVar20 = in_R10[uVar20 + 1];
                lVar22 = uVar23 + uVar40 + uVar27;
                if (uVar21 + 0x12ba9efb < (uVar21 + 0x6ed99a8f) * -0x684653af + 0xa47fc129) {
                  lVar22 = uVar27 * (uVar23 + uVar40);
                }
                lVar22 = lVar22 + uVar20 + uVar31;
              }
              uVar26 = uVar11 + uVar16 + uVar30 + uVar36 + uVar25 + lVar22;
              uVar25 = ((((((uVar31 | ((uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40) >>
                                       ((uint8_t)uVar27 & 0x3f) | uVar27) >> ((uint8_t)uVar31 & 0x3f)) >>
                            ((uint8_t)uVar20 & 0x3f) | uVar20) >> ((uint8_t)uVar11 & 0x3f) | uVar11) >>
                          (bStack_a0 & 0x3f) | uVar36) >> ((uint8_t)uVar16 & 0x3f) | uVar16) >>
                        (bVar33 + (bVar7 + 0xf) * '\x15' * bVar18 + -0x14 +
                                  (bVar10 ^ 0xff) * '\x1b' +
                                  (~bVar9 & bVar10) * -0x1e +
                                  (bVar10 ^ bVar9) * '\x1d' + bVar10 * -0x13 +
                                  (bVar17 & bVar9) * -0x12 & 0x3f) | uVar30) >> (uVar25 & 0xff) |
                       uVar25;
              *puStack_d0 = uVar25 >> (-(char)uVar26 & 0x3fU);
              uVar24 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 0x10)) + 1];
              uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 0xb)) + 1];
              uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 0xe)) + 1];
              uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 0xc)) + 1];
              uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 0xd)) + 1];
              uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 0xf)) + 1];
              uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 0x12)) + 1];
              uVar27 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 0x11)) + 1];
              uVar11 = (((((in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 10)) + 1] >>
                            (uVar23 & 0xff) | uVar23) >> ((uint8_t)uVar31 & 0x3f) | uVar31) >>
                          ((uint8_t)uVar36 & 0x3f) | uVar36) >> ((uint8_t)uVar40 & 0x3f) | uVar40) >>
                        ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar24 & 0x3f) | uVar24;
              uVar20 = (uVar26 & 0xff) >> 3;
              lVar22 = uVar40 + uVar23 +
                       uVar24 + uVar27 +
                       in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 10)) + 1] +
                       uVar36 + uVar31 + uVar30 + uVar16;
              uVar40 = (uint64_t)((uint32_t)uVar26 & 7) + lVar22;
              puVar6 = (uint64_t *)((int64_t)puStack_d0 + ((uVar40 & 0xff) >> 3) + uVar20);
              uVar12 = (uint32_t)uVar40 & 7;
              uVar23 = (uint64_t)uVar12;
              cVar34 = (char)uVar12;
              bVar10 = (uint8_t)uVar28 & 0x1f;
              uVar24 = uVar11 >> ((uint8_t)uVar27 & 0x3f);
              if ((uint64_t)
                  (int64_t)
                  (int)((0xdc8d3ea1 - uVar21 << bVar10 | 0xdc8d3ea1 - uVar21 >> 0x20 - bVar10) +
                       0x7ffffffa) <=
                  (uint64_t)
                  ((0x66fb7f43 << (bVar7 & 0x1f) | 0x66fb7f43U >> 0x20 - (bVar7 & 0x1f)) - uVar28))
              {
                uVar24 = uVar11 << ((uint8_t)uVar27 & 0x3f);
              }
              uVar24 = (uVar24 | uVar27) >> ((uint8_t)uVar16 & 0x3f) | uVar16 |
                       uVar25 >> ((uint8_t)lVar22 & 0x3f);
              *(uint64_t *)((int64_t)puStack_d0 + uVar20) = uVar24 >> (-(char)uVar40 & 0x3fU);
              bVar39 = 0x12 < uVar5;
              puVar4 = in_RAX;
              uVar5 = uVar5 - 0x12;
              puStack_d0 = puVar6;
            } while (bVar39);
          }
          goto LAB_7fffa549e748;
        }
        uVar28 = uVar12 + 7;
        if (-1 < (int)uVar12) {
          uVar28 = uVar12;
        }
        uVar28 = uVar12 - (uVar28 & 0xfffffff8);
        if ((int)uVar28 < 1) {
          uVar40 = 0;
          uVar24 = 0;
          puVar32 = puVar14;
        }
        else {
          param_5 = (uint64_t)(int)uVar12;
          if (uVar28 == 1) {
            uVar5 = 0;
            uVar24 = 0;
LAB_7fffa54a34ed:
            puVar4 = (uint64_t *)0x0;
            lVar22 = param_5 - 1;
            param_5 = param_5 - 1;
            uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1];
            uVar5 = uVar5 + uVar40;
            uVar24 = uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40 & 0xffffffffffffff00;
          }
          else {
            puVar4 = (uint64_t *)(uint64_t)(uVar28 & 1);
            uVar12 = uVar28 & 0x7ffffffe;
            uVar24 = 0;
            uVar5 = 0;
            do {
              uVar12 = uVar12 - 2;
              uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 1)) + 1];
              lVar22 = param_5 - 2;
              param_5 = param_5 - 2;
              uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1];
              uVar5 = uVar5 + uVar25 + uVar40;
              uVar24 = (uVar40 & 0xffffffffffffff00 | uVar24 >> ((uint8_t)uVar40 & 0x3f)) >>
                       ((uint8_t)uVar25 & 0x3f) | uVar25 & 0xffffffffffffff00;
            } while (uVar12 != 0);
            if ((uVar28 & 1) != 0) goto LAB_7fffa54a34ed;
          }
          uVar40 = (uint64_t)((uint32_t)uVar5 & 7);
          puVar32 = (uint64_t *)(((uVar5 & uVar23) >> 3 & 0x1fffffff) + (int64_t)puVar14);
          *puVar14 = uVar24 >> (-(char)(uVar5 & uVar23) & 0x3fU);
        }
        uVar28 = (uint32_t)param_5;
        puVar6 = puVar32;
        if ((param_5 & 0xf) != 0) {
          lVar22 = (int64_t)(int)uVar28;
          uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -1) + 1];
          uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -6) + 1];
          uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -3) + 1];
          uVar28 = uVar28 - 8;
          uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -5) + 1];
          if ((0x5052821fU >> (bVar7 & 0x1f) | 0x5052821f << 0x20 - (bVar7 & 0x1f)) + 0x5ada1e00 <
              ((uVar21 + 0x70f4e1c) * 0x10 | uVar21 + 0x70f4e1c >> 0x1c)) {
            bVar10 = 0xe0 - bVar7;
          }
          else {
            bVar10 = bVar7 ^ 0x5a;
          }
          uVar12 = (uVar21 ^ 0xd71d0cf9) << 0x13 | (uVar21 ^ 0xd71d0cf9) >> 0xd;
          uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (int64_t)(int)uVar28) + 1];
          uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -2) + 1];
          uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -4) + 1];
          uVar27 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -7) + 1];
          uVar20 = uVar27 + uVar36 + uVar16 + uVar23 + uVar31 + uVar25 + uVar40 + uVar5 + uVar30;
          uVar40 = (uVar20 & 0xff) >> 3;
          if ((uVar12 >> (bVar10 & 0x1f) | uVar12 << 0x20 - (bVar10 & 0x1f)) == 0x130ab21d) {
            uVar40 = uVar20 & 0xff ^ 3;
          }
          uVar24 = (((((((uVar24 >> ((uint8_t)uVar23 & 0x3f) | uVar23) >> ((uint8_t)uVar30 & 0x3f) |
                        uVar30) >> ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar16 & 0x3f) | uVar16
                      ) >> ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar5 & 0x3f) | uVar5) >>
                    ((uint8_t)uVar27 & 0x3f) | uVar27) >> ((uint8_t)uVar36 & 0x3f) |
                   uVar36 & 0xffffffffffffff00;
          *puVar32 = uVar24 >> (-(char)uVar20 & 0x3fU);
          puVar6 = (uint64_t *)(uVar40 + (int64_t)puVar32);
          uVar40 = (uint64_t)((uint32_t)uVar20 & 7);
          puVar4 = puVar32;
        }
        cVar34 = (char)uVar40;
        if ((int)uVar28 < 1) {
        }
        else {
          uVar23 = (uint64_t)uVar28;
          do {
            uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 7)) + 1];
            uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 8)) + 1];
            uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 1)) + 1];
            uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 3)) + 1];
            uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 2)) + 1];
            uVar28 = (uVar21 ^ 0xa26a33e3) + 0x188da341;
            uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 6)) + 1];
            uVar12 = uVar21 + 0xe9d7f35e ^ 0xa10fa1de;
            uVar27 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 5)) + 1];
            bVar39 = uVar23 != 0x10;
            if ((uint64_t)(0x651edfac - uVar21) <
                (uint64_t)
                (int64_t)(int)(0x8b8d147U >> (bVar7 & 0x1f) | 0x8b8d147 << 0x20 - (bVar7 & 0x1f)))
            {
              bVar39 = (uVar28 * 0x10000000 | uVar28 >> 4) < uVar23;
            }
            uVar20 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 4)) + 1];
            uVar11 = uVar31 + uVar5 + uVar36 + uVar25 + uVar40 + uVar27 + uVar30 + uVar20 + uVar16;
            uVar27 = (((((((uVar24 >> ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar30 & 0x3f) |
                          uVar30) >> ((uint8_t)uVar36 & 0x3f) | uVar36) >> ((uint8_t)uVar20 & 0x3f) |
                        uVar20) >> (uVar27 & 0xff) | uVar27) >> ((uint8_t)uVar16 & 0x3f) | uVar16) >>
                      ((uint8_t)uVar5 & 0x3f) | uVar5) >> ((uint8_t)uVar25 & 0x3f) |
                     uVar25 & 0xffffffffffffff00;
            *puVar6 = uVar27 >> (-(char)uVar11 & 0x3fU);
            uVar24 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xb)) + 1];
            uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xf)) + 1];
            uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x10)) + 1];
            uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xc)) + 1];
            uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 10)) + 1];
            uVar16 = (in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 9)) + 1] >>
                      ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar24 & 0x3f);
            uVar36 = (uVar11 & 0xff) >> 3;
            uVar30 = uVar16 ^ uVar24;
            if ((uVar12 << 3 | uVar12 >> 0x1d) < (uVar21 | 1) * 0x1dd11aa5) {
              uVar30 = uVar16 | uVar24;
            }
            uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xd)) + 1];
            uVar20 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xe)) + 1];
            lVar22 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 9)) + 1] + uVar20 +
                     uVar31 + uVar5 + uVar25 + uVar40 + uVar24 + uVar16;
            puVar4 = (uint64_t *)
                     ((((uVar30 >> ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar16 & 0x3f) | uVar16
                       ) >> ((uint8_t)uVar20 & 0x3f) | uVar20) >> ((uint8_t)uVar5 & 0x3f));
            uVar25 = (uint64_t)((uint32_t)uVar11 & 7) + lVar22;
            uVar31 = uVar25 & 0xff;
            uVar24 = ((uint64_t)puVar4 | uVar5) >> ((uint8_t)uVar40 & 0x3f) |
                     uVar40 & 0xffffffffffffff00 | uVar27 >> ((uint8_t)lVar22 & 0x3f);
            *(uint64_t *)((int64_t)puVar6 + uVar36) = uVar24 >> 0x40 - uVar31;
            uVar23 = uVar23 - 0x10;
            uVar28 = (uint32_t)uVar25 & 7;
            uVar40 = (uint64_t)uVar28;
            cVar34 = (char)uVar28;
            puVar6 = (uint64_t *)((int64_t)puVar6 + (uVar31 >> 3) + uVar36);
          } while (bVar39);
        }
        goto LAB_7fffa549e748;
      }
      uVar28 = (int)uVar12 % 7;
      if ((int)uVar28 < 1) {
        uVar23 = 0;
        uVar24 = 0;
      }
      else {
        param_5 = (uint64_t)(int)uVar12;
        if (uVar28 == 1) {
          uVar29 = 0;
          uVar24 = 0;
LAB_7fffa549fb13:
          lVar22 = param_5 - 1;
          param_5 = param_5 - 1;
          uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1];
          uVar29 = uVar29 + (int)uVar23;
          uVar24 = uVar24 >> ((uint8_t)uVar23 & 0x3f) | uVar23 & 0xffffffffffffff00;
        }
        else {
          uVar12 = uVar28 & 0x7ffffffe;
          uVar24 = 0;
          lVar22 = 0;
          do {
            uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 1)) + 1];
            lVar38 = param_5 - 2;
            param_5 = param_5 - 2;
            uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar38) + 1];
            lVar22 = lVar22 + uVar23 + uVar5;
            uVar29 = (uint32_t)lVar22;
            uVar24 = (uVar24 >> ((uint8_t)uVar23 & 0x3f) | uVar23 & 0xffffffffffffff00) >>
                     ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
            uVar12 = uVar12 - 2;
          } while (uVar12 != 0);
          if ((uVar28 & 1) != 0) goto LAB_7fffa549fb13;
        }
        uVar23 = (uint64_t)(uVar29 & 7);
        *puVar14 = uVar24 >> (-(char)uVar29 & 0x3fU);
        puVar14 = (uint64_t *)((uint64_t)((uVar29 & 0xff) >> 3) + (int64_t)puVar14);
      }
      iVar35 = (int)param_5;
      lVar22 = (int64_t)iVar35;
      uVar28 = (iVar35 / 0xe) * 0x10;
      puVar6 = puVar14;
      if (iVar35 % 0xe != 0) {
        param_5 = lVar22 - 7;
        uVar12 = (uVar21 | 1) * -0x793ef354 + 0x7b7aeb08 >> 1;
        uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -1) + 1];
        uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -3) + 1];
        uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -6) + 1];
        uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -2) + 1];
        uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -5) + 1];
        uVar30 = (uint64_t)*(uint8_t *)((int64_t)in_RAX + param_5);
        if ((int)(((uVar21 | 1) * -0x7f3387b1 + uVar12) * 0x7f2b0497) < (int)(uVar12 ^ 0xff2923bf))
        {
          uVar30 = (int64_t)(char)*(uint8_t *)((int64_t)in_RAX + param_5);
        }
        uVar30 = in_R10[uVar30 + 1];
        uVar28 = (uVar12 ^ 0xacdd72c) + 0x5e5997d6;
        uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -4) + 1];
        lVar22 = uVar16 + uVar31 + uVar40 + uVar36 + uVar23 + uVar5 + uVar25;
        uVar23 = (((((uVar24 >> ((uint8_t)uVar5 & 0x3f) | uVar5) >> ((uint8_t)uVar31 & 0x3f) | uVar31) >>
                    ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uVar16 & 0x3f) | uVar16) >>
                  ((uint8_t)uVar36 & 0x3f) | uVar36) >> ((uint8_t)uVar25 & 0x3f);
        uVar24 = uVar23 | uVar25;
        if ((uVar28 << (bVar7 & 0x1f) | uVar28 >> 0x20 - (bVar7 & 0x1f)) <
            (0x875d1886 - uVar12 ^ uVar21)) {
          uVar24 = uVar23 & uVar25;
        }
        uVar24 = uVar24 >> ((uint8_t)uVar30 & 0x3f) | uVar30 & 0xffffffffffffff00;
        uVar28 = ~((-0x68be5b0f - uVar12) * -0x3dd565a7);
        uVar23 = lVar22 + uVar30;
        if ((int64_t)
            (uint64_t)
            ((uVar12 | 1) * (0xac0da3ebU >> (bVar7 & 0x1f) | -0x53f25c15 << 0x20 - (bVar7 & 0x1f)))
            <= (int64_t)(int)uVar28) {
          uVar23 = lVar22 * uVar30;
        }
        puVar6 = (uint64_t *)(((uVar23 & 0xff) >> 3) + (int64_t)puVar14);
        *puVar14 = uVar24 >> 0x40 - (uVar23 & 0xff);
        uVar23 = (uint64_t)((uint32_t)uVar23 & 7);
      }
      cVar34 = (char)uVar23;
      if ((int)param_5 < 1) {
        puVar4 = (uint64_t *)(uint64_t)uVar28;
      }
      else {
        uVar5 = param_5 & 0xffffffff;
        do {
          puVar4 = puVar6;
          uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 2)) + 1];
          uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 1)) + 1];
          uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 7)) + 1];
          uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 3)) + 1];
          uVar30 = ((uVar24 >> ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar40 & 0x3f) | uVar40) >>
                   ((uint8_t)uVar36 & 0x3f);
          uVar24 = uVar30 * uVar36;
          if ((uint64_t)((uVar21 + 0x595751da) * 0x7a303d07 + 0x9ee4a95c) <
              (param_3 ^ 0x80045187e2d)) {
            uVar24 = uVar30 | uVar36;
          }
          uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 4)) + 1];
          uVar16 = in_R10[(uint64_t)
                          *(uint8_t *)((int64_t)in_RAX +
                                   uVar5 + (int64_t)
                                           (short)((0x4e5b - uVar3) * 0x20 |
                                                  (uint16_t)(0x4e5b - uVar3) >> 0xb)) + 1];
          uVar27 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 6)) + 1];
          uVar25 = uVar16 + uVar30 + uVar25 + uVar40 + uVar23 + uVar31 + uVar36 + uVar27;
          uVar40 = (((uVar24 >> ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar16 & 0x3f) | uVar16)
                    >> ((uint8_t)uVar27 & 0x3f) | uVar27) >> ((uint8_t)uVar31 & 0x3f) |
                   uVar31 & 0xffffffffffffff00;
          uVar23 = (uVar25 & 0xff) >> 3;
          *puVar4 = uVar40 >> (-(char)uVar25 & 0x3fU);
          bVar10 = *(uint8_t *)((int64_t)in_RAX + (uVar5 - 0xb));
          uVar24 = (uint64_t)bVar10;
          if (0xae9a6d0f - uVar21 <=
              (0x30112650U >> (bVar7 & 0x1f) | 0x30112650 << 0x20 - (bVar7 & 0x1f))) {
            uVar24 = (int64_t)(char)bVar10;
          }
          uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 8)) + 1];
          uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 0xe)) + 1];
          uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 9)) + 1];
          uVar24 = in_R10[uVar24 + 1];
          uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 10)) + 1];
          uVar27 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 0xd)) + 1];
          uVar20 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 0xc)) + 1];
          uVar11 = uVar31 + uVar30;
          if (~(-0x52a557ff << (bVar7 & 0x1f) | 0xad5aa801U >> 0x20 - (bVar7 & 0x1f)) <
              (0xc000009U >> (bVar7 & 0x1f) | 0xc000009 << 0x20 - (bVar7 & 0x1f))) {
            uVar11 = uVar30 & uVar31;
          }
          lVar22 = uVar11 + uVar16 + uVar27 + uVar36 + uVar20 + uVar24;
          uVar25 = (uint64_t)((uint32_t)uVar25 & 7) + lVar22;
          uVar24 = uVar40 >> ((uint8_t)lVar22 & 0x3f) |
                   (((((uVar31 >> (uVar30 & 0xff) | uVar30) >> ((uint8_t)uVar16 & 0x3f) | uVar16) >>
                      ((uint8_t)uVar24 & 0x3f) | uVar24) >> ((uint8_t)uVar20 & 0x3f) | uVar20) >>
                    ((uint8_t)uVar27 & 0x3f) | uVar27) >> (uVar36 & 0xff) | uVar36 & 0xffffffffffffff00
          ;
          *(uint64_t *)((int64_t)puVar4 + uVar23) = uVar24 >> (-(char)uVar25 & 0x3fU);
          puVar6 = (uint64_t *)((int64_t)puVar4 + uVar23 + ((uVar25 & 0xff) >> 3));
          uVar28 = (uint32_t)uVar25 & 7;
          uVar23 = (uint64_t)uVar28;
          cVar34 = (char)uVar28;
          bVar39 = 0xe < uVar5;
          uVar5 = uVar5 - 0xe;
        } while (bVar39);
      }
      goto LAB_7fffa549e748;
    }
    uVar28 = uVar12 + 3;
    if (-1 < (int)uVar12) {
      uVar28 = uVar12;
    }
    uVar28 = uVar12 - (uVar28 & 0xfffffffc);
    if ((int)uVar28 < 1) {
      uVar23 = 0;
      uVar24 = 0;
      puVar37 = puVar14;
    }
    else {
      param_5 = (uint64_t)(int)uVar12;
      if (uVar28 == 1) {
        uVar5 = 0;
        uVar24 = 0;
LAB_7fffa549e3fa:
        lVar22 = param_5 - 1;
        param_5 = param_5 - 1;
        uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1];
        uVar5 = uVar5 + uVar40;
        uVar24 = uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40 & 0xffffffffffffff00;
      }
      else {
        lVar22 = param_5 - 1;
        uVar24 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 2)) + 1];
        uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1] + uVar24;
        puVar4 = (uint64_t *)(uVar24 & 0xffffffffffffff00);
        bVar7 = (uint8_t)uVar24 + 1;
        if (0x6bb7b3dd - uVar21 < (uVar21 ^ 0x362a6774)) {
          bVar7 = (uint8_t)uVar24;
        }
        param_5 = param_5 - 2;
        uVar24 = (in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1] & 0xffffffffffffff00)
                 >> (bVar7 & 0x3f) | (uint64_t)puVar4;
        if ((uVar28 & 1) != 0) goto LAB_7fffa549e3fa;
      }
      puVar37 = (uint64_t *)(((uVar5 & uVar23) >> 3 & 0x1fffffff) + (int64_t)puVar14);
      if (puVar32 < puVar37) {
        puVar37 = puVar32;
      }
      *puVar14 = uVar24 >> (-(char)(uVar5 & uVar23) & 0x3fU);
      uVar23 = (uint64_t)((uint32_t)uVar5 & 7);
    }
    uVar28 = (uint32_t)param_5;
    puVar6 = puVar37;
    if ((param_5 & 7) != 0) {
      lVar22 = (int64_t)(int)uVar28;
      uVar28 = uVar28 - 4;
      uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (int64_t)(int)uVar28) + 1];
      uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -1) + 1];
      uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -2) + 1];
      uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -3) + 1];
      uVar36 = uVar25 + uVar31 + uVar23 + uVar40 + uVar5;
      uVar23 = (uint64_t)((uint32_t)uVar36 & 7);
      puVar6 = (uint64_t *)(((uVar36 & 0xff) >> 3) + (int64_t)puVar37);
      if (puVar32 < puVar6) {
        puVar6 = puVar32;
      }
      uVar24 = (((uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uVar25 & 0x3f) | uVar25) >>
                ((uint8_t)uVar31 & 0x3f) | uVar31) >> (uVar5 & 0xff) | uVar5 & 0xffffffffffffff00;
      *puVar37 = uVar24 >> (-(char)uVar36 & 0x3fU);
      puVar4 = puVar32;
    }
    cVar34 = (char)uVar23;
    if (0 < (int)uVar28) {
      uVar5 = (uint64_t)uVar28;
      uVar28 = uVar21 | 1;
      while( true ) {
        if (0x1bfe7a86 - uVar21 < (uVar28 * -0x40000000 | uVar28 * -0x48174a90 >> 6)) {
          uVar12 = uVar28 * -0x394e0143;
        }
        else {
          uVar12 = uVar28 * 0x9ac1d06;
        }
        uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 3)) + 1];
        uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 1)) + 1];
        uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 2)) + 1];
        uVar36 = uVar24 >> ((uint8_t)uVar25 & 0x3f) | uVar25;
        uVar24 = (uint64_t)((uint32_t)uVar36 & (uint32_t)uVar31 & 0xff);
        if (uVar28 * -0x710aaab0 - uVar12 <= (uVar21 + 0x90e95a47 ^ uVar12) + 0x2455ec02) {
          uVar24 = uVar36 >> ((uint8_t)uVar31 & 0x3f);
        }
        uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 4)) + 1];
        uVar23 = uVar25 + uVar40 + uVar36 + uVar31 + uVar23;
        puVar4 = (uint64_t *)(((uVar23 & 0xff) >> 3) + (int64_t)puVar6);
        if (puVar32 < puVar4) {
          puVar4 = puVar32;
        }
        uVar31 = ((uVar24 | uVar31) >> ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uVar36 & 0x3f) |
                 uVar36 & 0xffffffffffffff00;
        *puVar6 = uVar31 >> (-(char)uVar23 & 0x3fU);
        uVar24 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 8)) + 1];
        uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 7)) + 1];
        uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 6)) + 1];
        uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 5)) + 1] + uVar25 + uVar24
                 + uVar40;
        uVar30 = uVar36 + ((uint32_t)uVar23 & 7);
        uVar23 = uVar30 & SUB168(ZEXT416(0xff),0);
        uVar24 = ((in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 5)) + 1] >>
                   ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar40 & 0x3f) | uVar40) >>
                 ((uint8_t)uVar24 & 0x3f) | uVar24 & 0xffffffffffffff00 | uVar31 >> (uVar36 & 0xff);
        *puVar4 = uVar24 >> (-(char)uVar23 & 0x3fU);
        puVar6 = (uint64_t *)((uVar23 >> 3) + (int64_t)puVar4);
        uVar12 = (uint32_t)uVar30 & 7;
        uVar23 = (uint64_t)uVar12;
        cVar34 = (char)uVar12;
        if (puVar32 < puVar6) {
          puVar6 = puVar32;
        }
        if (uVar5 < 9) break;
        uVar5 = uVar5 - 8;
      }
    }
LAB_7fffa549e748:
    *puVar6 = (uVar24 >> 1 | 0x8000000000000000) >> (-(cVar34 + '\x01') & 0x3fU);
    return puVar4;
  }
  if (bVar39 != false) {
    return (uint64_t *)(uint64_t)bVar39;
  }
  if (param_2 == 8) {
    return (uint64_t *)0x0;
  }
  puVar4 = (uint64_t *)((int64_t)puVar14 + (param_2 - 8));
  if (((uVar24 & uVar23) * param_5 >> 3) + 8 <= param_2 && uVar28 < 0xc) {
    uVar1 = uVar3 | 1;
    if ((uint16_t)((uVar1 * -0x6200 | (uint16_t)(uVar1 * -0x4620) >> 0xc) + 0x99fd) <= uVar28) {
      if (9 < uVar28) {
        uVar29 = (int)uVar12 % 5;
        if (uVar28 < ((uVar21 + 0xf922274f) * 0x1f21 & 0xffff)) {
          if ((int)uVar29 < 1) {
            uStack_98 = 0;
            uVar24 = 0;
            puVar32 = puVar14;
          }
          else {
            param_5 = (uint64_t)(int)uVar12;
            if (uVar29 == 1) {
              uVar23 = 0;
              uVar24 = 0;
LAB_7fffa54a0992:
              lVar22 = param_5 - 1;
              param_5 = param_5 - 1;
              uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1];
              uVar23 = uVar23 + uVar5;
              uVar24 = uVar24 >> ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
            }
            else {
              uVar28 = -0xc00001 << (bVar7 & 0x1f) | 0xff3fffffU >> 0x20 - (bVar7 & 0x1f);
              uVar28 = (uVar28 << 0xd | uVar28 >> 0x13) & uVar29;
              uVar24 = 0;
              uVar23 = 0;
              do {
                uVar28 = uVar28 - 2;
                uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 1)) + 1];
                uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 2)) + 1];
                uVar23 = uVar23 + uVar40 + uVar5;
                param_5 = param_5 - 2;
                uVar24 = (uVar24 >> ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00) >>
                         ((uint8_t)uVar40 & 0x3f) | uVar40 & 0xffffffffffffff00;
              } while (uVar28 != 0);
              if ((uVar29 & 1) != 0) goto LAB_7fffa54a0992;
            }
            *puVar14 = uVar24 >> (-(char)uVar23 & 0x3fU);
            uStack_98 = (uint64_t)((uint32_t)uVar23 & 7);
            puVar32 = (uint64_t *)(((uVar23 & 0xff) >> 3) + (int64_t)puVar14);
          }
          uVar28 = (uint32_t)param_5;
          lVar22 = (int64_t)(int)uVar28;
          puVar14 = puVar32;
          if (uVar28 != ((int)uVar28 / 10) * 10) {
            uVar28 = uVar28 - 5;
            uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -1) + 1];
            uVar24 = uVar24 >> ((uint8_t)uVar23 & 0x3f);
            uVar5 = uVar24 | uVar23;
            if (0x7ab26115 < uVar21 + 0xf1a6e7ab) {
              uVar5 = uVar23 + uVar24;
            }
            uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -4) + 1];
            uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -2) + 1];
            uVar24 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (int64_t)(int)uVar28) + 1];
            uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -3) + 1];
            uVar23 = uVar25 + uVar24 + uVar23 + uVar40 + uStack_98 + uVar31;
            uStack_98 = (uint64_t)((uint32_t)uVar23 & 7);
            uVar23 = uVar23 & (uint64_t)DAT_7fffa56bac50;
            uVar24 = (((uVar5 >> ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar31 & 0x3f) | uVar31)
                      >> ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uVar24 & 0x3f) | uVar24;
            puVar14 = (uint64_t *)((uVar23 >> 3 & 0x1fffffff) + (int64_t)puVar32);
            *puVar32 = uVar24 >> (-(char)uVar23 & 0x3fU);
          }
          if (0 < (int)uVar28) {
            uVar23 = (uint64_t)uVar28;
            puVar32 = puVar14;
            while( true ) {
              uVar25 = (uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 5));
              uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 3)) + 1];
              uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 4)) + 1];
              uVar31 = (uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 1));
              if ((uVar21 | 1) * 0x4181bafa < uVar21 + 0x3dd75616) {
                uStack_b0 = in_R10[uVar25 + 1];
                uVar25 = in_R10[uVar31 + 1];
                bVar10 = (uint8_t)uVar25;
                lVar22 = uStack_b0 + uVar25;
                uVar28 = uVar21 + 0xb802f9d8;
              }
              else {
                uStack_b0 = in_R10[uVar25 + 1];
                uVar25 = in_R10[uVar31 + 1];
                lVar22 = uVar25 + uStack_b0;
                bVar10 = (uint8_t)uVar25;
                uVar28 = (-0xf960622 - uVar21) * 0x3ad2b4d3;
              }
              uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 2)) + 1];
              uVar36 = lVar22 + uVar31 + uStack_98 + uVar40 + uVar5;
              uVar24 = ((uVar24 >> (bVar10 & 0x3f) | uVar25) >> ((uint8_t)uVar31 & 0x3f) | uVar31) >>
                       ((uint8_t)uVar5 & 0x3f);
              uVar12 = uVar28 | 1;
              if ((0x66d10957 << (bVar7 & 0x1f) | 0x66d10957U >> 0x20 - (bVar7 & 0x1f)) + uVar28 <
                  (-0x6178a6e3 - uVar21) * uVar12 + 0x2b3260be) {
                bVar8 = *(uint8_t *)((int64_t)in_RAX + (uVar23 - 6));
                bVar10 = *(uint8_t *)((int64_t)in_RAX + (uVar23 - 8));
                uVar25 = uVar24 ^ uVar5;
                if (uVar12 * 0x12915af3 + 0x2d9395b0 < (uVar21 + 0x27ba55ea) * -0x3ffffebf - uVar28)
                {
                  uVar25 = uVar5 | uVar24;
                }
                uVar31 = uVar36 & SUB168(ZEXT416(0xff),0);
                uStack_b0 = uStack_b0 |
                            (uVar25 >> ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uStack_b0 & 0x3f);
                *puVar32 = uStack_b0 >> (-(char)uVar31 & 0x3fU);
              }
              else {
                uVar29 = (uVar21 + 0x4d2b6d48) * 0x10000 | uVar21 + 0x4d2b6d48 >> 0x10;
                bVar10 = (uint8_t)uVar28 & 0x1f;
                uVar31 = uVar36 & 0xff;
                uVar5 = (uVar24 | uVar5) >> ((uint8_t)uVar40 & 0x3f);
                uVar24 = uVar5 | uVar40;
                if (~(uVar29 >> bVar10 | uVar29 << 0x20 - bVar10) <
                    ((uVar12 * 0xe000000 | uVar12 * 0x653bcd0e >> 8) - uVar21 ^ 0x97e7bf19)) {
                  uVar24 = uVar5 ^ uVar40;
                }
                uStack_b0 = uStack_b0 | uVar24 >> ((uint8_t)uStack_b0 & 0x3f);
                *puVar32 = uStack_b0 >> (-(char)uVar36 & 0x3fU);
                bVar8 = *(uint8_t *)((int64_t)in_RAX + (uVar23 - 6));
                bVar10 = *(uint8_t *)((int64_t)in_RAX + (uVar23 - 8));
              }
              uVar29 = (uVar21 | 1) * -0x2c9ab106;
              uVar24 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 7)) + 1];
              uVar5 = in_R10[(uint64_t)bVar10 + 1];
              uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 9)) + 1];
              uVar25 = in_R10[(uint64_t)
                              *(uint8_t *)((int64_t)in_RAX +
                                       uVar23 + (int64_t)(int)(uVar21 + 0xbae7919a)) + 1];
              lVar22 = in_R10[(uint64_t)bVar8 + 1] + uVar25 + uVar24 + uVar40 + uVar5;
              bVar10 = (uint8_t)uVar28 & 0x1f;
              uVar30 = lVar22 + (uint64_t)((uint32_t)uVar36 & 7);
              uVar36 = uVar30 & 0xff;
              puVar14 = (uint64_t *)((int64_t)puVar32 + (uVar36 >> 3) + (uVar31 >> 3));
              uVar5 = (in_R10[(uint64_t)bVar8 + 1] >> ((uint8_t)uVar24 & 0x3f) | uVar24) >>
                      ((uint8_t)uVar5 & 0x3f) | uVar5;
              uStack_98 = (uint64_t)((uint32_t)uVar30 & 7);
              uVar24 = uVar5 >> ((uint8_t)uVar40 & 0x3f);
              if ((int64_t)(uint64_t)~(uVar12 * -0x7271cd4e) <
                  (int64_t)(int)((uVar29 >> bVar10 | uVar29 << 0x20 - bVar10) + 0xddfbc91e)) {
                uVar24 = uVar40 & 0xff | uVar5;
              }
              uVar24 = (uVar24 | uVar40) >> ((uint8_t)uVar25 & 0x3f) | uVar25 |
                       uStack_b0 >> ((uint8_t)lVar22 & 0x3f);
              *(uint64_t *)((int64_t)puVar32 + (uVar31 >> 3)) = uVar24 >> 0x40 - uVar36;
              if (uVar23 < 0xb) break;
              uVar23 = uVar23 - 10;
              puVar32 = puVar14;
            }
          }
          goto LAB_7fffa54a2cb5;
        }
        if ((int)uVar29 < 1) {
          uStack_98 = 0;
          uVar24 = 0;
          puVar32 = puVar14;
        }
        else {
          param_5 = (uint64_t)(int)uVar12;
          if (uVar29 == 1) {
            uVar28 = 0;
            uVar24 = 0;
LAB_7fffa54a0736:
            lVar22 = param_5 - 1;
            param_5 = param_5 - 1;
            uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1];
            uVar28 = uVar28 + (int)uVar23;
            uVar24 = uVar24 >> ((uint8_t)uVar23 & 0x3f) | uVar23 & 0xffffffffffffff00;
          }
          else {
            uVar12 = uVar29 & 0x7ffffffe;
            uVar24 = 0;
            lVar22 = 0;
            do {
              uVar12 = uVar12 - 2;
              lVar38 = param_5 - 2;
              lVar2 = param_5 - 1;
              param_5 = param_5 - 2;
              uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar2) + 1];
              uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar38) + 1];
              lVar22 = lVar22 + uVar23 + uVar5;
              uVar28 = (uint32_t)lVar22;
              uVar24 = (uVar24 >> ((uint8_t)uVar23 & 0x3f) | uVar23 & 0xffffffffffffff00) >>
                       ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
            } while (uVar12 != 0);
            if ((uVar29 & 1) != 0) goto LAB_7fffa54a0736;
          }
          uStack_98 = (uint64_t)(uVar28 & 7);
          *puVar14 = uVar24 >> (-(char)uVar28 & 0x3fU);
          puVar32 = (uint64_t *)((uint64_t)((uVar28 & 0xff) >> 3) + (int64_t)puVar14);
        }
        uVar28 = (uint32_t)param_5;
        lVar22 = (int64_t)(int)uVar28;
        puVar14 = puVar32;
        if ((int)uVar28 % 10 != ((0x3143 - uVar21 ^ 0x2a53) + 0x174c & 0xffff)) {
          if (uVar21 + 0xefb75e1b <
              (0xe97650f2U >> (bVar7 & 0x1f) | -0x1689af0e << 0x20 - (bVar7 & 0x1f))) {
            uVar12 = 0x5d7ba5d7 - uVar21;
          }
          else {
            uVar12 = ~(uVar21 + 0xab7974f5);
          }
          uVar28 = uVar28 - 5;
          bVar7 = *(uint8_t *)((int64_t)in_RAX + lVar22 + -5);
          bVar10 = (uint8_t)uVar12 & 0x1f;
          uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -2) + 1];
          uVar5 = (uint64_t)bVar7;
          if (((uVar12 - uVar21) + 0x7054ee0f <=
               ((0x249d43b8 << bVar10 | 0x249d43b8U >> 0x20 - bVar10) ^ uVar21)) &&
             (uVar29 = uVar12 + 0xee4ed047 ^ uVar21, bVar10 = (uint8_t)uVar12 & 0x1f,
             (int64_t)(uint64_t)((0x998350f2U >> bVar10 | -0x667caf0e << 0x20 - bVar10) ^ uVar21)
             <= (int64_t)(int)(uVar29 << 7 | uVar29 >> 0x19))) {
            uVar5 = (int64_t)(char)bVar7;
          }
          uVar5 = in_R10[uVar5 + 1];
          uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -1) + 1];
          uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -4) + 1];
          uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -3) + 1];
          uVar24 = ((((uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uVar23 & 0x3f) | uVar23)
                     >> (uVar31 & 0xff) | uVar31) >> ((uint8_t)uVar25 & 0x3f) | uVar25) >>
                   ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
          uVar25 = uVar5 + uVar23 + uVar31 + uStack_98 + uVar40 + uVar25;
          uStack_98 = (uint64_t)((uint32_t)uVar25 & 7);
          puVar14 = (uint64_t *)(((uVar25 & 0xff) >> 3) + (int64_t)puVar32);
          *puVar32 = uVar24 >> (-(char)uVar25 & 0x3fU);
        }
        if (0 < (int)uVar28) {
          uVar23 = (uint64_t)uVar28;
          do {
            uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 2)) + 1];
            uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 5)) + 1];
            uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 3)) + 1];
            uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 1)) + 1];
            lVar38 = uStack_98 + uVar5 + uVar31 + uVar25;
            uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 4)) + 1];
            lVar22 = lVar38 + uVar36;
            if ((uVar21 + 0x5af0cf24) * 0xae4e0d3 == 0x6c9c38c2) {
              lVar22 = lVar38 * uVar36;
            }
            uVar30 = ((((uVar24 >> ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar5 & 0x3f) | uVar5)
                       >> ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar36 & 0x3f) | uVar36) >>
                     ((uint8_t)uVar40 & 0x3f) | uVar40 & 0xffffffffffffff00;
            uVar40 = lVar22 + uVar40;
            *puVar14 = uVar30 >> (-(char)uVar40 & 0x3fU);
            uVar24 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 8)) + 1];
            uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 10)) + 1];
            uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 9)) + 1];
            uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 7)) + 1];
            lVar22 = uVar31 + uVar24 + uVar5 + uVar25 +
                     in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 6)) + 1];
            uVar36 = (uVar40 & 0xff) >> 3;
            uVar40 = lVar22 + (uint64_t)((uint32_t)uVar40 & 7);
            uVar24 = uVar30 >> ((uint8_t)lVar22 & 0x3f) |
                     (((in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 6)) + 1] >>
                        ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar24 & 0x3f) | uVar24) >>
                      ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar5 & 0x3f) |
                     uVar5 & 0xffffffffffffff00;
            *(uint64_t *)((int64_t)puVar14 + uVar36) = uVar24 >> (-(char)uVar40 & 0x3fU);
            uStack_98 = (uint64_t)((uint32_t)uVar40 & 7);
            puVar14 = (uint64_t *)((int64_t)puVar14 + ((uVar40 & 0xff) >> 3) + uVar36);
            bVar39 = 10 < uVar23;
            uVar23 = uVar23 - 10;
          } while (bVar39);
        }
        goto LAB_7fffa54a2cb5;
      }
      uVar28 = (int)uVar12 % 6;
      if ((int)uVar28 < 1) {
        uStack_98 = 0;
        uVar24 = 0;
        puVar32 = puVar14;
      }
      else {
        param_5 = (uint64_t)(int)uVar12;
        uVar12 = 0;
        if (uVar28 == 1) {
          uVar40 = 0;
          uVar24 = 0;
LAB_7fffa549ed8b:
          lVar22 = param_5 - 1;
          param_5 = param_5 - 1;
          uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1];
          uVar40 = uVar40 + uVar5;
          uVar24 = uVar24 >> ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
        }
        else {
          uVar24 = 0;
          uVar40 = 0;
          uVar5 = param_5;
          do {
            param_5 = uVar5 - 2;
            uVar12 = uVar12 + 2;
            uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 1)) + 1];
            uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + param_5) + 1];
            uVar40 = uVar40 + uVar25 + uVar5;
            uVar24 = uVar25 & 0xffffffffffffff00 |
                     (uVar24 >> ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00) >>
                     ((uint8_t)uVar25 & 0x3f);
            uVar5 = param_5;
          } while (uVar12 != (uVar28 & 0x7ffffffe));
          if ((uVar28 & 1) != 0) goto LAB_7fffa549ed8b;
        }
        uVar23 = uVar40 & uVar23;
        if ((uint64_t)(int64_t)(int)((-0x1cf503e6 - uVar21) * 0x79404b77) <
            (uint64_t)(uVar21 + 0xf28f627e ^ 0xd152a054)) {
          uVar23 = uVar40 * 0xff;
        }
        *puVar14 = uVar24 >> (-(char)uVar23 & 0x3fU);
        uStack_98 = (uint64_t)((uint32_t)uVar40 & 7);
        puVar32 = (uint64_t *)((uVar23 >> 3) + (int64_t)puVar14);
      }
      uVar28 = (uint32_t)param_5;
      puVar14 = puVar32;
      if (uVar28 != (((uint32_t)((int)uVar28 / 6 + ((int)uVar28 >> 0x1f)) >> 1) - ((int)uVar28 >> 0x1f))
                    * 0xc) {
        uVar23 = (int64_t)(int)uVar28;
        if ((~((uVar21 | 1) * -0x381b4bb) <=
             (~(uVar21 ^ 0xaaedaa7) << 4 | ~(uVar21 ^ 0xaaedaa7) >> 0x1c)) && (uVar21 != 0x45186e5c)
           ) {
          uVar23 = param_5 & 0xffffffff;
        }
        uVar28 = uVar28 - 6;
        uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 5)) + 1];
        uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 2)) + 1];
        uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 4)) + 1];
        uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 1)) + 1];
        uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 3)) + 1];
        uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (int64_t)(int)uVar28) + 1];
        uVar30 = uVar5 + uVar36 + uVar25 + uVar40 + uVar23 + uStack_98 + uVar31;
        uStack_98 = (uint64_t)((uint32_t)uVar30 & 7);
        uVar24 = (((((uVar24 >> ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar40 & 0x3f) | uVar40)
                    >> ((uint8_t)uVar23 & 0x3f) | uVar23) >> ((uint8_t)uVar25 & 0x3f) | uVar25) >>
                  ((uint8_t)uVar5 & 0x3f) | uVar5) >> ((uint8_t)uVar36 & 0x3f) |
                 uVar36 & 0xffffffffffffff00;
        puVar14 = (uint64_t *)(((uVar30 & 0xff) >> 3) + (int64_t)puVar32);
        *puVar32 = uVar24 >> (-(char)uVar30 & 0x3fU);
      }
      if (0 < (int)uVar28) {
        uVar23 = (uint64_t)uVar28;
        uVar28 = uVar21 | 1;
        while( true ) {
          if ((uVar21 ^ 0x6dc73b96) * -0x3a58f5df < uVar21 + 0xf6e29dd0) {
            uVar12 = 0x5548e776 - uVar21;
          }
          else {
            uVar12 = ~(uVar21 + 0xe71df473);
          }
          uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 5)) + 1];
          uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 4)) + 1];
          bVar10 = (uint8_t)uVar12 & 0x1f;
          uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 3)) + 1];
          uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 1)) + 1];
          bVar8 = (uint8_t)uVar12 & 0x1f;
          uVar29 = uVar28 * -0x2fb5d53e >> bVar8 | uVar28 * -0x2fb5d53e << 0x20 - bVar8;
          uVar13 = (uVar21 - uVar12) + 0xd950f5b5;
          uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 6)) + 1];
          uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 2)) + 1];
          uVar27 = uVar31 + uVar40 + uVar36 + uVar25 + uVar5 + uStack_98 + uVar30;
          uVar16 = (uVar27 & 0xff) >> 3;
          uVar24 = (((((uVar24 >> ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar30 & 0x3f) | uVar30)
                      >> ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar40 & 0x3f) | uVar40) >>
                    ((uint8_t)uVar5 & 0x3f) | uVar5) >> ((uint8_t)uVar36 & 0x3f) |
                   uVar36 & 0xffffffffffffff00;
          bVar8 = (uint8_t)uVar27;
          if (~(0x2f877ec4 << (bVar7 & 0x1f) | 0x2f877ec4U >> 0x20 - (bVar7 & 0x1f)) <=
              (0xfa919898U >> bVar10 | -0x56e6768 << 0x20 - bVar10) * uVar28) {
            bVar8 = 0x40 - (uint8_t)uVar27;
          }
          *puVar14 = uVar24 >> (bVar8 & 0x3f);
          bVar10 = *(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xb));
          uVar5 = (uint64_t)bVar10;
          if ((uVar13 * 0x400 | uVar13 >> 0x16) != ~(uVar29 << 0x18 | uVar29 >> 8)) {
            uVar5 = (int64_t)(char)bVar10;
          }
          uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 9)) + 1];
          uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 8)) + 1];
          uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xc)) + 1];
          uVar5 = in_R10[uVar5 + 1];
          uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 10)) + 1];
          lVar22 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 7)) + 1] + uVar40 +
                   uVar25 + uVar31 + uVar5 + uVar36;
          lVar38 = (uint64_t)((uint32_t)uVar27 & 7) + lVar22;
          uVar13 = (uint32_t)lVar38;
          uStack_98 = (uint64_t)(uVar13 & 7);
          uVar13 = uVar13 & 0xff;
          uVar29 = uVar13 << 3;
          if ((uint64_t)
              ((((uVar21 + 0x50971edc) * 0x8000 | uVar21 + 0x50971edc >> 0x11) ^ 0x95cd6b60) +
              uVar12) < (uint64_t)
                        (int64_t)(int)(((uVar12 | 1) * 0x16710983 + -0x3a7d7296) * uVar28)) {
            uVar29 = uVar13 >> 3;
          }
          uVar24 = ((((in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 7)) + 1] >>
                       ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar40 & 0x3f) | uVar40) >>
                     ((uint8_t)uVar36 & 0x3f) | uVar36) >> ((uint8_t)uVar5 & 0x3f) | uVar5) >>
                   (uVar31 & 0xff) | uVar24 >> ((uint8_t)lVar22 & 0x3f) | uVar31 & 0xffffffffffffff00;
          *(uint64_t *)((int64_t)puVar14 + uVar16) = uVar24 >> (-(char)lVar38 & 0x3fU);
          puVar14 = (uint64_t *)((int64_t)puVar14 + uVar16 + uVar29);
          if (uVar23 < 0xd) break;
          uVar23 = uVar23 - 0xc;
        }
      }
      goto LAB_7fffa54a2cb5;
    }
    if (uVar28 < (uint16_t)((uVar3 ^ 0xee5c) << 4 | (uVar3 ^ 0xee5c) >> 0xc)) {
      uVar29 = uVar21 | 1;
      bVar39 = uVar28 < 8;
      if ((uint64_t)(uVar29 * -0x732d7708) <=
          (uint64_t)
          (int64_t)(int)(0xab9d4c33U >> (bVar7 & 0x1f) | -0x5462b3cd << 0x20 - (bVar7 & 0x1f))) {
        bVar39 = uVar28 == 7;
      }
      if (!bVar39) {
        uVar28 = (int)uVar12 % 9;
        if ((int)uVar28 < 1) {
          uStack_98 = 0;
          uVar24 = 0;
        }
        else {
          param_5 = (uint64_t)(int)uVar12;
          uVar23 = 0;
          if ((uVar29 * -0x473a08bb ^ 0x37a27e39) <=
              ((0x90f906cf - uVar21) * 0x40 | 0x90f906cf - uVar21 >> 0x1a) * 0x1a36213) {
            param_5 = 0;
          }
          if (uVar28 == 1) {
            uVar24 = 0;
LAB_7fffa54a13a6:
            param_5 = param_5 - 1;
            if (0xffffffffdc6b3663 < (uint64_t)(uVar29 * -0x23eaf23 ^ 0xa5b154b7)) {
              param_5 = 0xffffffffffffffff;
            }
            uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + param_5) + 1];
            uVar23 = uVar23 + uVar5;
            uVar24 = uVar24 >> ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
          }
          else {
            uVar12 = uVar28 & 0x7ffffffe;
            uVar24 = 0;
            uVar23 = 0;
            uVar5 = param_5;
            while( true ) {
              uVar12 = uVar12 - 2;
              param_5 = uVar5 - 2;
              uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + param_5) + 1];
              uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 1)) + 1];
              uVar23 = uVar23 + uVar5 + uVar40;
              uVar24 = (uVar24 >> ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00) >>
                       ((uint8_t)uVar40 & 0x3f) | uVar40 & 0xffffffffffffff00;
              if (uVar12 == 0) break;
              uVar5 = param_5;
            }
            uVar3 = 0 << (bVar7 & 0xf) | 0U >> 0x10 - (bVar7 & 0xf);
            if ((uVar28 & 1) != (uint32_t)(uint16_t)(uVar3 << 8 | uVar3 >> 8)) goto LAB_7fffa54a13a6;
          }
          *puVar14 = uVar24 >> (-(char)uVar23 & 0x3fU);
          uStack_98 = (uint64_t)((uint32_t)uVar23 & 7);
          puVar14 = (uint64_t *)(((uVar23 & 0xff) >> 3) + (int64_t)puVar14);
        }
        uVar28 = (uint32_t)param_5;
        lVar22 = (int64_t)(int)uVar28;
        if (uVar28 != ((int)uVar28 / 0x12) * 0x12) {
          uVar28 = uVar28 + (int)(short)(-0x81 << (bVar7 & 0xf) | 0xff7fU >> 0x10 - (bVar7 & 0xf));
          uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (int64_t)(int)uVar28) + 1];
          uVar12 = 0xfcd34786U >> (bVar7 & 0x1f) | -0x32cb87a << 0x20 - (bVar7 & 0x1f);
          uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -4) + 1];
          bVar10 = *(uint8_t *)((int64_t)in_RAX + lVar22 + -6);
          uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -3) + 1];
          bVar9 = (uint8_t)uVar12;
          uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -5) + 1];
          uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -8) + 1];
          uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -2) + 1];
          uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -1) + 1];
          lVar38 = uStack_98 + uVar30 + uVar36;
          uVar13 = (-0x7f9f1d5b << (bVar9 & 0x1f) | 0x8060e2a5U >> 0x20 - (bVar9 & 0x1f)) *
                   0x3f15380f;
          bVar8 = ~(uint8_t)uVar36;
          if ((uint64_t)(((uVar21 - uVar12) + -0x58f65afd) * 0x13592285) <=
              (uint64_t)
              (int64_t)
              (int)((-0x15dcdab8 << (bVar9 & 0x1f) | 0xea232548U >> 0x20 - (bVar9 & 0x1f)) +
                    0x20ccb037 ^ uVar21)) {
            bVar8 = (uint8_t)uVar36;
          }
          uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -7) + 1];
          uVar19 = (0xbfb208a6U >> (bVar9 & 0x1f) | -0x404df75a << 0x20 - (bVar9 & 0x1f)) + uVar21;
          lVar22 = lVar38 * uVar40;
          if (0x29a1ed8 - uVar12 < (uVar21 ^ 0x8948138) * (uVar12 | 1)) {
            lVar22 = lVar38 + uVar40;
          }
          uVar15 = (uVar12 - uVar21) + 0x7dafed5;
          uVar27 = (int64_t)(char)bVar10;
          if ((uint64_t)(uVar13 << (bVar7 & 0x1f) | uVar13 >> 0x20 - (bVar7 & 0x1f)) <=
              (uint64_t)(int64_t)(int)~((uVar12 - uVar21) + 0xc0dda023)) {
            uVar27 = (uint64_t)bVar10;
          }
          uVar27 = in_R10[uVar27 + 1];
          uVar11 = lVar22 + uVar31 + uVar5 + uVar25 + uVar16 + uVar23 + uVar27;
          uVar20 = (uVar11 & 0xff) >> 3;
          if ((uVar21 ^ 0x1d5d073a) * (uVar12 | 1) + 0xd5837b9a == (uVar19 * 0x20 | uVar19 >> 0x1b))
          {
            uVar20 = (uint64_t)((uint32_t)uVar11 & 3);
          }
          uVar24 = ((((((((uVar24 >> ((uint8_t)uVar30 & 0x3f) | uVar30) >> (bVar8 & 0x3f) | uVar36) >>
                         ((uint8_t)uVar40 & 0x3f) | uVar40) >> (uVar5 & (uint64_t)DAT_7fffa56bac50) |
                       uVar5) >> ((uint8_t)uVar25 & 0x3f) | uVar25) >> (uVar27 & 0xff) | uVar27) >>
                     ((uint8_t)uVar16 & 0x3f) | uVar16) >> ((uint8_t)uVar31 & 0x3f) | uVar31) >>
                   ((uint8_t)uVar23 & 0x3f) | uVar23;
          uStack_98 = (uint64_t)((uint32_t)uVar11 & 7);
          uVar23 = 0x40 - (uVar11 & 0xff) ^ uVar24;
          if ((uVar15 * 4 | uVar15 >> 0x1e) != 0x3791bc0d) {
            uVar23 = uVar24 >> (-(char)uVar11 & 0x3fU);
          }
          *puVar14 = uVar23;
          puVar14 = (uint64_t *)(uVar20 + (int64_t)puVar14);
        }
        if (0 < (int)uVar28) {
          uVar23 = (uint64_t)uVar28;
          puVar32 = puVar14;
          do {
            uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 2)) + 1];
            uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 1)) + 1];
            if (uVar21 + 0x2432ae65 < uVar29 * 0xb99261e + 0x631fac2b) {
              uVar25 = uStack_98 + uVar40 + uVar5;
              if (0x2a81a20 - uVar21 <= 0xef9f90cd - uVar21) {
                uVar25 = uStack_98 + uVar40 | uVar5;
              }
              uVar28 = (0x65517a86 - uVar21) * 4 | 0x65517a86 - uVar21 >> 0x1e;
            }
            else {
              uVar25 = uStack_98 + uVar5 + uVar40;
              uVar28 = ~(0xb81e7e03U >> (bVar7 & 0x1f) | -0x47e181fd << 0x20 - (bVar7 & 0x1f));
            }
            uVar13 = (uVar28 | 1) * 0x3472ba33;
            uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 6)) + 1];
            uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 7)) + 1];
            uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 3)) + 1];
            uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 9)) + 1];
            bVar10 = (uint8_t)uVar28 & 0x1f;
            uVar12 = (uVar29 * -0x38fb85fa << bVar10 | uVar29 * -0x38fb85fa >> 0x20 - bVar10) +
                     0x385e2008;
            uVar27 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 4)) + 1];
            uVar20 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 5)) + 1];
            uVar11 = uVar25 + uVar30 + uVar27;
            if ((uVar13 >> (bVar7 & 0x1f) | uVar13 << 0x20 - (bVar7 & 0x1f)) * -0x3a872317 !=
                0x4916905c) {
              uVar11 = uVar27 & uVar25 + uVar30;
            }
            uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 8)) + 1];
            uVar24 = ((((((((uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uVar5 & 0x3f) |
                           uVar5) >> ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar27 & 0x3f) |
                         uVar27) >> ((uint8_t)uVar20 & 0x3f) | uVar20) >> ((uint8_t)uVar31 & 0x3f) |
                       uVar31) >> ((uint8_t)uVar36 & 0x3f) | uVar36) >> ((uint8_t)uVar25 & 0x3f) | uVar25)
                     >> ((uint8_t)uVar16 & 0x3f) | uVar16;
            uVar11 = uVar20 + uVar31 + uVar36 + uVar16 + uVar25 + uVar11;
            bVar10 = (uint8_t)uVar11;
            if ((uVar28 + 0xa2ada18f) * 0x5d5b5d5 + 0xaccf0676 < (uVar12 * 0x20000 | uVar12 >> 0xf))
            {
              bVar10 = 0x40 - (uint8_t)uVar11;
            }
            *puVar32 = uVar24 >> (bVar10 & 0x3f);
            uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x10)) + 1];
            uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xe)) + 1];
            uVar25 = in_R10[(uint64_t)
                            *(uint8_t *)((int64_t)in_RAX +
                                     uVar23 + (int64_t)
                                              (int)((uVar21 ^ 0xbce791a3) << 9 |
                                                   (uVar21 ^ 0xbce791a3) >> 0x17)) + 1];
            uVar31 = in_R10[(uint64_t)
                            *(uint8_t *)((int64_t)in_RAX +
                                     uVar23 + (int64_t)(int)(uVar29 * -0x2407094a + -0x1283d429)) +
                            1];
            uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xc)) + 1];
            uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xf)) + 1];
            uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x11)) + 1];
            uVar27 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x12)) + 1];
            uVar20 = (uVar11 & 0xff) >> 3;
            lVar22 = uVar31 + uVar40 +
                     uVar5 + in_R10[(uint64_t)
                                    *(uint8_t *)((int64_t)in_RAX +
                                             uVar23 + (int64_t)(int)(uVar21 + 0xbae7919a)) + 1] +
                     uVar30 + uVar27 + uVar16 + uVar25 + uVar36;
            uVar11 = (uint64_t)((uint32_t)uVar11 & 7) + lVar22;
            puVar14 = (uint64_t *)((int64_t)puVar32 + ((uVar11 & 0xff) >> 3) + uVar20);
            uStack_98 = (uint64_t)((uint32_t)uVar11 & 7);
            uVar24 = (((((((in_R10[(uint64_t)
                                   *(uint8_t *)((int64_t)in_RAX +
                                            uVar23 + (int64_t)(int)(uVar21 + 0xbae7919a)) + 1] >>
                            ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar36 & 0x3f) | uVar36) >>
                          (uVar25 & 0xff) | uVar25) >> ((uint8_t)uVar40 & 0x3f) | uVar40) >>
                        ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar5 & 0x3f) | uVar5) >>
                      ((uint8_t)uVar16 & 0x3f) | uVar16) >> ((uint8_t)uVar27 & 0x3f) | uVar27 |
                     uVar24 >> ((uint8_t)lVar22 & 0x3f);
            uVar5 = uVar24 >> (-(char)uVar11 & 0x3fU);
            if (uVar28 + uVar21 != -0x3ccf71e0) {
              uVar5 = 0x40 - (uVar11 & 0xff) & uVar24;
            }
            *(uint64_t *)((int64_t)puVar32 + uVar20) = uVar5;
            bVar39 = 0x12 < uVar23;
            uVar23 = uVar23 - 0x12;
            puVar32 = puVar14;
          } while (bVar39);
        }
        goto LAB_7fffa54a2cb5;
      }
      uVar28 = uVar12 + 7;
      if (-1 < (int)uVar12) {
        uVar28 = uVar12;
      }
      uVar28 = uVar12 - (uVar28 & 0xfffffff8);
      if ((int)(uint32_t)(uint16_t)((uint16_t)(uVar21 ^ 0x6e5c) >> 1 |
                             (uint16_t)(((uVar21 ^ 0x6e5c) & 1) != 0) << 0xf) < (int)uVar28) {
        param_5 = (uint64_t)(int)uVar12;
        uVar12 = 0;
        if (uVar28 == (0x3266 - (uint16_t)(uVar1 * 0x43a9) & 0xffff)) {
          uVar23 = 0;
          uVar24 = 0;
LAB_7fffa54a218b:
          lVar22 = param_5 - 1;
          param_5 = param_5 - 1;
          uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1];
          uVar40 = uVar24 >> ((uint8_t)uVar5 & 0x3f);
          uVar23 = uVar23 + uVar5;
          uVar24 = uVar5 & 0xffffffffffffff00 | uVar40;
          if ((uVar21 + 0x14284a59) * 0x475190f1 <
              (0xe0e84604U >> (bVar7 & 0x1f) | -0x1f17b9fc << 0x20 - (bVar7 & 0x1f))) {
            uVar24 = uVar40 ^ uVar5 & 0xffffffffffffff00;
          }
        }
        else {
          uVar13 = ((0x45183e5b - uVar21) * 0x80000 | 0x45183e5b - uVar21 >> 0xd) & uVar28;
          uVar24 = 0;
          uVar23 = 0;
          uVar5 = param_5;
          while( true ) {
            param_5 = uVar5 - 2;
            uVar12 = uVar12 + 2;
            bVar39 = uVar12 == uVar13;
            if (uVar21 == 0xd770481a) {
              bVar39 = (int)uVar13 <= (int)uVar12;
            }
            uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar5 - 1)) + 1];
            uVar24 = uVar24 >> ((uint8_t)uVar5 & 0x3f);
            uVar40 = uVar24 - (uVar5 & 0xffffffffffffff00);
            if (0x2a32c1a6 < 0xfb2d1db3 - uVar21) {
              uVar40 = uVar5 & 0xffffffffffffff00 | uVar24;
            }
            uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + param_5) + 1];
            uVar24 = uVar40 >> ((uint8_t)uVar25 & 0x3f) | uVar25 & 0xffffffffffffff00;
            lVar22 = uVar23 + uVar5;
            if (0x371b1c40 - uVar21 <
                (0x168c613fU >> (bVar7 & 0x1f) | 0x168c613f << 0x20 - (bVar7 & 0x1f))) {
              lVar22 = -(uVar23 + uVar5);
            }
            uVar23 = lVar22 + uVar25;
            if (bVar39) break;
            uVar5 = param_5;
          }
          if ((uVar28 & 1) != 0) goto LAB_7fffa54a218b;
        }
        uStack_98 = (uint64_t)((uint32_t)uVar23 & 7);
        *puVar14 = uVar24 >> (-(char)uVar23 & 0x3fU);
        puVar14 = (uint64_t *)(((uVar23 & 0xff) >> 3) + (int64_t)puVar14);
      }
      else {
        uStack_98 = 0;
        uVar24 = 0;
      }
      uVar28 = (uint32_t)param_5;
      if ((param_5 & 0xf) != 0) {
        if ((int64_t)
            (uint64_t)(0x87cb33bbU >> (bVar7 & 0x1f) | -0x7834cc45 << 0x20 - (bVar7 & 0x1f)) <
            (int64_t)
            (int)(((0x94a664a4 - uVar21) * 0x2000 | 0x94a664a4 - uVar21 >> 0x13) + 0x25a5420b)) {
          uVar12 = (uVar21 ^ 0x515cc424) + 0x694eddaa;
        }
        else {
          uVar12 = 0x38cb9674 - uVar21;
        }
        lVar22 = (int64_t)(int)uVar28;
        uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -7) + 1];
        uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -1) + 1];
        uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -6) + 1];
        uVar28 = uVar28 - 8;
        uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -2) + 1];
        uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -3) + 1];
        uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (int64_t)(int)uVar28) + 1];
        uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -5) + 1];
        uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -4) + 1];
        uVar27 = ((((uVar24 >> ((uint8_t)uVar5 & 0x3f) | uVar5) >> ((uint8_t)uVar25 & 0x3f) | uVar25) >>
                   ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar16 & 0x3f) | uVar16) >>
                 ((uint8_t)uVar30 & 0x3f);
        uVar24 = uVar27 * uVar30;
        if ((uVar12 ^ 0x6c7ec441) * uVar29 <=
            (0xf82bbc9U >> (bVar7 & 0x1f) | 0xf82bbc9 << 0x20 - (bVar7 & 0x1f)) + uVar12) {
          uVar24 = uVar30 | uVar27;
        }
        uVar24 = ((uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uVar23 & 0x3f) | uVar23) >>
                 ((uint8_t)uVar36 & 0x3f) | uVar36 & 0xffffffffffffff00;
        uVar23 = uVar30 + uVar36 + uVar25 + uVar31 + uVar23 + uVar40 + uVar5 + uVar16 + uStack_98;
        *puVar14 = uVar24 >> (-(char)uVar23 & 0x3fU);
        puVar14 = (uint64_t *)(((uVar23 & 0xff) >> 3) + (int64_t)puVar14);
        uStack_98 = (uint64_t)((uint32_t)uVar23 & 7);
      }
      if (0 < (int)uVar28) {
        uVar23 = (uint64_t)uVar28;
        while( true ) {
          uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 8)) + 1];
          uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 4)) + 1];
          uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 6)) + 1];
          uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 1)) + 1];
          uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 3)) + 1];
          bVar10 = -(uint8_t)uVar31;
          if ((uint64_t)(0x159169f7U >> (bVar7 & 0x1f) | 0x159169f7 << 0x20 - (bVar7 & 0x1f)) <
              0xffffffffbdf9a329) {
            bVar10 = (uint8_t)uVar31;
          }
          if ((uint64_t)((uVar21 ^ 0x6f5f) & 0xffff) <
              (uint64_t)(int64_t)(int)((0xbddbd25e - uVar21 ^ 0x232e3460) + 0x4593f485)) {
            uVar28 = uVar29 * -0x4ad1e58e + 0x21fbbaf8;
          }
          else {
            uVar28 = (0x4db2a2 - uVar21) * 0x3e00000 | (0x4db2a2 - uVar21) * 0x932681f >> 0xb;
          }
          uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 2)) + 1];
          uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 7)) + 1];
          bVar8 = (uint8_t)uVar16;
          uVar27 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 5)) + 1];
          uVar24 = (((uVar24 >> (bVar10 & 0x3f) | uVar31) >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                    ((uint8_t)uVar36 & 0x3f) | uVar36) >> ((uint8_t)uVar40 & 0x3f) | uVar40;
          uVar40 = uVar30 + uVar27 + uVar40 + uVar36 + uVar16 + uVar31 + uVar25 + uStack_98 + uVar5;
          bVar10 = 0x40 - (char)uVar40;
          if ((int64_t)(int)~((uVar21 ^ 0x35493c46) << 10 | (uVar21 ^ 0x35493c46) >> 0x16) <
              (int64_t)(uint64_t)(((uVar28 ^ 0xe711ad71) - uVar21 ^ 0x7a609081) + 0x60138f1c)) {
            uVar25 = uVar25 | (uVar24 >> ((uint8_t)uVar27 & 0x3f) | uVar27) >> ((uint8_t)uVar25 & 0x3f);
            uVar12 = 0x63d330cd - uVar28 >> (bVar7 & 0x1f) |
                     0x63d330cd - uVar28 << 0x20 - (bVar7 & 0x1f);
            bVar9 = (uint8_t)uVar28 & 0x1f;
            uVar24 = uVar25 >> (bVar8 & 0x3f);
            if ((uVar29 * -0x2cff95c4 << bVar9 | uVar29 * -0x2cff95c4 >> 0x20 - bVar9) ==
                ((uVar28 ^ 0x4de832a5) << (bVar7 & 0x1f) |
                (uVar28 ^ 0x4de832a5) >> 0x20 - (bVar7 & 0x1f))) {
              uVar24 = uVar25 << (bVar8 & 0x3f);
            }
            uVar24 = (uVar16 | uVar24) >> ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
            *puVar14 = uVar24 >> (bVar10 & 0x3f);
            bVar9 = *(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xe));
            bVar17 = *(uint8_t *)((int64_t)in_RAX + (uVar23 - 10));
          }
          else {
            bVar9 = *(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xe));
            bVar17 = *(uint8_t *)((int64_t)in_RAX + (uVar23 - 10));
            uVar12 = ~(uVar29 * -0x6bba8bb4);
            uVar24 = (uVar16 | (uVar25 | (uVar24 >> (uVar27 & 0xff) | uVar27) >>
                                         ((uint8_t)uVar25 & 0x3f)) >> (bVar8 & 0x3f)) >>
                     ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
            *puVar14 = uVar24 >> (bVar10 & 0x3f);
          }
          if ((uVar21 + 0x9563253e ^ 0x9f68813c) < ~((uVar12 | 1) * 0x5bc7b76d ^ uVar21)) {
            bVar10 = *(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xb));
            uVar5 = (uint64_t)(char)bVar10;
            iVar35 = (uVar12 + 0x7796a73e) * uVar29;
            bVar8 = (uint8_t)uVar28 & 0x1f;
            if (((uVar21 ^ 0x46b3a8b) >> bVar8 | (uVar21 ^ 0x46b3a8b) << 0x20 - bVar8) == 0xd05cd535
               ) {
              uVar5 = (uint64_t)bVar10;
            }
          }
          else {
            uVar5 = (uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xb));
            iVar35 = ((uVar12 ^ 0x3057543e) << (bVar7 & 0x1f) |
                     (uVar12 ^ 0x3057543e) >> 0x20 - (bVar7 & 0x1f)) * -0x36533fbf;
          }
          puVar32 = (uint64_t *)((int64_t)puVar14 + ((uVar40 & 0xff) >> 3));
          uVar25 = in_R10[(uint64_t)bVar9 + 1];
          uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xc)) + 1];
          uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x10)) + 1];
          uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xd)) + 1];
          uVar16 = in_R10[(uint64_t)bVar17 + 1];
          uVar28 = ~(0x9ff6300b - uVar12 ^ uVar21);
          uVar27 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xf)) + 1];
          uVar5 = in_R10[uVar5 + 1];
          lVar22 = uVar30 + uVar31 + uVar16 + uVar25 + uVar36 +
                   in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 9)) + 1] + uVar27 +
                   uVar5;
          uVar40 = (uint64_t)((uint32_t)uVar40 & 7) + lVar22;
          uStack_98 = (uint64_t)((uint32_t)uVar40 & 7);
          bVar10 = (uint8_t)uVar16;
          if ((uint64_t)
              (int64_t)(int)(((uVar21 ^ 0xe64ce98c) << 0x1c | (uVar21 ^ 0xe64ce98c) >> 4) - iVar35)
              <= (uint64_t)(uVar28 << 0x17 | uVar28 >> 9)) {
            bVar10 = bVar10 + 1;
          }
          uVar24 = ((((((in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 9)) + 1] >>
                         (bVar10 & 0x3f) | uVar16) >> ((uint8_t)uVar5 & 0x3f) | uVar5) >>
                       ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                     ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar27 & 0x3f) | uVar27) >>
                   ((uint8_t)uVar36 & 0x3f) |
                   uVar24 >> ((uint8_t)lVar22 & 0x3f) | uVar36 & 0xffffffffffffff00;
          puVar14 = (uint64_t *)(((uVar40 & 0xff) >> 3) + (int64_t)puVar32);
          *puVar32 = uVar24 >> (-(char)uVar40 & 0x3fU);
          if (uVar23 <= (uint16_t)((uVar3 + 0x91ac) * 2 | (uint16_t)((short)(uVar3 + 0x91ac) < 0)))
          break;
          uVar23 = uVar23 - 0x10;
        }
      }
      goto LAB_7fffa54a2cb5;
    }
    uVar28 = (int)uVar12 % 7;
    if ((int)uVar28 < 1) {
      uStack_98 = 0;
      uVar24 = 0;
    }
    else {
      param_5 = (uint64_t)(int)uVar12;
      if (uVar28 == 1) {
        uVar5 = 0;
        uVar24 = 0;
LAB_7fffa549ec5a:
        uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 1)) + 1];
        uVar5 = uVar5 + uVar40;
        uVar25 = uVar24 >> ((uint8_t)uVar40 & 0x3f);
        uVar24 = (uVar40 & 0xffffffffffffff00) + uVar25;
        if ((uint64_t)((uVar21 | 1) * -0x5bf2d09f) <
            (uint64_t)(int64_t)(int)((0x68402af1 - uVar21) * -0x61b6df1f)) {
          uVar24 = uVar40 & 0xffffffffffffff00 | uVar25;
        }
        param_5 = param_5 - 1;
      }
      else {
        uVar12 = uVar28 & 0x7ffffffe;
        uVar24 = 0;
        uVar5 = 0;
        do {
          uVar12 = uVar12 - 2;
          lVar22 = param_5 - 2;
          uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 1)) + 1];
          param_5 = param_5 - 2;
          uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1];
          uVar5 = uVar5 + uVar25 + uVar40;
          uVar24 = uVar25 & 0xffffffffffffff00 |
                   (uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40 & 0xffffffffffffff00) >>
                   ((uint8_t)uVar25 & 0x3f);
        } while (uVar12 != 0);
        if ((uVar28 & 1) != (uint32_t)(uint16_t)(0 << (bVar7 & 0xf) | 0U >> 0x10 - (bVar7 & 0xf)))
        goto LAB_7fffa549ec5a;
      }
      uStack_98 = (uint64_t)((uint32_t)uVar5 & 7);
      *puVar14 = uVar24 >> (-(char)(uVar5 & uVar23) & 0x3fU);
      puVar14 = (uint64_t *)(((uVar5 & uVar23) >> 3 & 0x1fffffff) + (int64_t)puVar14);
    }
    uVar28 = (uint32_t)param_5;
    lVar22 = (int64_t)(int)uVar28;
    if ((int)uVar28 % 0xe != 0) {
      uVar12 = uVar21 | 1;
      uVar28 = uVar28 - 7;
      if ((uVar21 ^ 0xd4dbac) + 0xb6c80fe2 < (uVar21 ^ 0x319b49d4) + 0xf9154ee8) {
        iVar35 = (uVar12 * 0x44d0ab90 | uVar12 * 0x244d0ab9 >> 0x1c) + 0x51b04b35;
      }
      else {
        iVar35 = (uVar12 * -0x63654724 ^ 0xc0000420) + 0x23904c59;
      }
      uVar29 = iVar35 + 0xc3916955U ^ 0xa1d1122a;
      uVar29 = uVar29 >> (bVar7 & 0x1f) | uVar29 << 0x20 - (bVar7 & 0x1f);
      uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -6) + 1];
      if ((uVar29 << 0x1a | uVar29 >> 6) < ~(iVar35 + 0xeb7afffbU) * 0x52f46e65) {
        uVar12 = ~(uVar12 * -0x7ecd6371);
      }
      else {
        bVar10 = (uint8_t)iVar35 & 0x1f;
        uVar12 = (-0x629a9511 << bVar10 | 0x9d656aefU >> 0x20 - bVar10) + 0xa7e85e77 ^ uVar21;
      }
      uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -1) + 1];
      uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (int64_t)(int)uVar28) + 1];
      uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -3) + 1];
      uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -2) + 1];
      uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -4) + 1];
      uVar3 = (short)iVar35 + 0x9a35;
      bVar10 = (uint8_t)uVar12 & 0x1f;
      bVar8 = (uint8_t)uVar5 - 1;
      if ((int64_t)(int)~((uVar21 ^ 0xd2259df8) + iVar35) <
          (int64_t)
          (uint64_t)
          ((((0xa140b44a - uVar21) * 0x800 | 0xa140b44a - uVar21 >> 0x15) - uVar12) * -0x345f056b))
      {
        bVar8 = (uint8_t)uVar5;
      }
      uVar12 = (uVar21 - iVar35) + 0xa42cc88b;
      uVar16 = in_R10[(uint64_t)
                      *(uint8_t *)((int64_t)in_RAX +
                               (short)((uVar3 << (bVar7 & 0xf) | uVar3 >> 0x10 - (bVar7 & 0xf)) *
                                      -0x7561) + lVar22) + 1];
      lVar22 = uStack_98 + uVar23 + uVar25 + uVar36 + uVar5 + uVar31 + uVar16;
      uVar30 = uVar40 + lVar22;
      uStack_98 = (uint64_t)((uint32_t)uVar30 & 7);
      uVar30 = uVar30 & 0xff;
      if ((0xb68e67fd - uVar21 << bVar10 | 0xb68e67fd - uVar21 >> 0x20 - bVar10) <
          (uVar12 * 0x8000000 | uVar12 >> 5)) {
        uVar30 = uVar40 + 0xff + lVar22;
      }
      uVar24 = ((((((uVar24 >> (bVar8 & 0x3f) | uVar5) >> ((uint8_t)uVar31 & 0x3f) | uVar31) >>
                   ((uint8_t)uVar25 & 0x3f) | uVar25) >> ((uint8_t)uVar36 & 0x3f) | uVar36) >>
                 ((uint8_t)uVar16 & 0x3f) | uVar16) >> (uVar23 & (uint64_t)DAT_7fffa56bac50) | uVar23)
               >> ((uint8_t)uVar40 & 0x3f) | uVar40 & (uint64_t)DAT_7fffa56bc580;
      *puVar14 = uVar24 >> (-(char)uVar30 & 0x3fU);
      puVar14 = (uint64_t *)((uVar30 >> 3) + (int64_t)puVar14);
    }
    if (0 < (int)uVar28) {
      uVar23 = (uint64_t)uVar28 + 0xe;
      do {
        if ((uint64_t)((uVar21 | 1) * 0x1d121083) < 0xffffffffe75ab95a) {
          uVar28 = 0x6714210f - uVar21;
        }
        else {
          uVar28 = (uVar21 + 0x40b598b4) * 0x687a3ead;
        }
        uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x12)) + 1];
        bVar8 = (uint8_t)uVar28;
        uVar12 = (uVar28 ^ 0xd15f1366) + 0x433a5466;
        uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x11)) + 1];
        uVar29 = (uVar21 ^ 0xb7230649) + 0x14912c46;
        uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x15)) + 1];
        bVar10 = *(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x14));
        uVar3 = (uint16_t)(-0x9215 - uVar21);
        uVar31 = (uint64_t)bVar10;
        if (uVar28 == 0x7e737e19) {
          uVar31 = (int64_t)(char)bVar10;
        }
        uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0xf)) + 1];
        bVar10 = (uint8_t)uVar36;
        bVar9 = bVar10 * 'u' +
                bVar10 * ~((uint8_t)(-0x71718214 << (bVar8 & 0x1f)) |
                          (uint8_t)(0x8e8e7dec >> 0x20 - (bVar8 & 0x1f)));
        bVar10 = ((uint8_t)(uVar28 + 0xe7897b59 >> (bVar7 & 0x1f)) |
                 (uint8_t)(uVar28 + 0xe7897b59 << 0x20 - (bVar7 & 0x1f))) * (bVar10 ^ 0xff);
        bVar17 = bVar10 | bVar9;
        if ((uint64_t)((uVar29 << (bVar8 & 0x1f) | uVar29 >> 0x20 - (bVar8 & 0x1f)) + 0x61428a35)
            <= (uint64_t)
               (int64_t)
               (int)((0x2f995f18 << (bVar8 & 0x1f) | 0x2f995f18U >> 0x20 - (bVar8 & 0x1f)) ^ uVar21)
           ) {
          bVar17 = bVar10 + bVar9;
        }
        uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x10)) + 1];
        uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x13)) + 1];
        uVar31 = in_R10[uVar31 + 1];
        uVar26 = ((((((uVar24 >> (bVar17 & 0x3f) | uVar36) >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                     ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uVar5 & 0x3f) | uVar5) >>
                   ((uint8_t)uVar16 & 0x3f) | uVar16) >> ((uint8_t)uVar31 & 0x3f) | uVar31) >>
                 ((uint8_t)uVar25 & 0x3f) | uVar25 & 0xffffffffffffff00;
        uVar31 = uVar40 + uVar16 + uStack_98 + uVar5 + uVar25 + uVar36 + uVar30 + uVar31;
        uVar24 = uVar31 & SUB168(ZEXT416(0xff),0);
        uVar27 = uVar24 >> 3;
        *puVar14 = uVar26 >> (-(char)uVar24 & 0x3fU);
        uVar24 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x18)) + 1];
        uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x1a)) + 1];
        uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x16)) + 1];
        uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x1c)) + 1];
        uVar36 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x1b)) + 1];
        uVar30 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x19)) + 1];
        uVar16 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 0x17)) + 1];
        lVar22 = uVar5 + uVar25 + uVar36 + uVar40 + uVar16 + uVar30 + uVar24;
        uVar11 = uVar16 & SUB168(ZEXT416(0xff),0);
        uVar20 = (uint64_t)((uint32_t)uVar11 & (uint32_t)uVar40);
        if ((uVar28 + 0x5aea45d0) * 0x166ad4ad + uVar21 <=
            (uVar12 << (bVar7 & 0x1f) | uVar12 >> 0x20 - (bVar7 & 0x1f))) {
          uVar20 = uVar40 >> ((uint8_t)uVar11 & 0x3f);
        }
        uVar40 = lVar22 + (uint64_t)((uint32_t)uVar31 & 7);
        uVar24 = uVar26 >> ((uint8_t)lVar22 & 0x3f) |
                 (((((uVar20 | uVar16) >> ((uint8_t)uVar24 & 0x3f) | uVar24) >> ((uint8_t)uVar30 & 0x3f) |
                   uVar30) >> ((uint8_t)uVar5 & 0x3f) | uVar5) >> ((uint8_t)uVar36 & 0x3f) | uVar36) >>
                 ((uint8_t)uVar25 & 0x3f) | uVar25 & 0xffffffffffffff00;
        *(uint64_t *)((int64_t)puVar14 + uVar27) = uVar24 >> (-(char)uVar40 & 0x3fU);
        uStack_98 = (uint64_t)((uint32_t)uVar40 & 7);
        puVar14 = (uint64_t *)((int64_t)puVar14 + ((uVar40 & 0xff) >> 3) + uVar27);
        uVar23 = uVar23 - 0xe;
      } while ((~(uint32_t)(uint16_t)(uVar3 >> (bVar8 & 0xf) | uVar3 << 0x10 - (bVar8 & 0xf)) & 0xffff) <
               uVar23);
    }
    goto LAB_7fffa54a2cb5;
  }
  uVar28 = uVar12 + 3;
  if (-1 < (int)uVar12) {
    uVar28 = uVar12;
  }
  uVar28 = uVar12 - (uVar28 & 0xfffffffc);
  if ((int)uVar28 < 1) {
    uStack_98 = 0;
    uVar24 = 0;
    puVar32 = puVar14;
  }
  else {
    uVar24 = param_5 << 0x20;
    param_5 = (int64_t)(int)uVar12;
    if ((int64_t)(uint64_t)(0x7c1e5ef9 - (uVar21 + 0xd5e6b46c)) <
        (int64_t)(int)((uVar21 | 1) * 0x4b29371f)) {
      param_5 = uVar24 | 0x20;
    }
    if (uVar28 == 1) {
      uVar5 = 0;
      uVar24 = 0;
LAB_7fffa549e0a2:
      uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (param_5 - 1)) + 1];
      param_5 = param_5 - 1;
      uVar5 = uVar5 + uVar40;
      uVar24 = uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40 & 0xffffffffffffff00;
    }
    else {
      lVar22 = param_5 - 1;
      lVar38 = param_5 - 2;
      param_5 = param_5 - 2;
      uVar24 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar38) + 1];
      uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1] + uVar24;
      uVar24 = uVar24 & 0xffffffffffffff00 |
               (in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22) + 1] & 0xffffffffffffff00) >>
               ((uint8_t)uVar24 & 0x3f);
      if ((uVar28 & 1) != (~(uVar21 ^ 0x91a3) & 0xffff)) goto LAB_7fffa549e0a2;
    }
    uStack_98 = (uint64_t)((uint32_t)uVar5 & 7);
    puVar32 = (uint64_t *)(((uVar5 & uVar23) >> 3 & 0x1fffffff) + (int64_t)puVar14);
    *puVar14 = uVar24 >> (-(char)(uVar5 & uVar23) & 0x3fU);
    if (puVar4 < puVar32) {
      puVar32 = puVar4;
    }
  }
  uVar28 = (uint32_t)param_5;
  puVar14 = puVar32;
  if ((param_5 & 7) != 0) {
    lVar22 = (int64_t)(int)uVar28;
    uVar28 = uVar28 - 4;
    uVar23 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -1) + 1];
    uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (int64_t)(int)uVar28) + 1];
    uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -3) + 1];
    uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + lVar22 + -2) + 1];
    uVar36 = uStack_98 + uVar23 + uVar5 + uVar25 + uVar40;
    uVar31 = uVar36 & 0xff;
    uStack_98 = (uint64_t)((uint32_t)uVar36 & 7);
    puVar14 = (uint64_t *)((uVar31 >> 3) + (int64_t)puVar32);
    if (puVar4 < puVar14) {
      puVar14 = puVar4;
    }
    uVar24 = (((uVar24 >> ((uint8_t)uVar23 & 0x3f) | uVar23) >> ((uint8_t)uVar25 & 0x3f) | uVar25) >>
              ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
    *puVar32 = uVar24 >> 0x40 - uVar31;
  }
  if (0 < (int)uVar28) {
    uVar23 = (uint64_t)uVar28;
    while( true ) {
      if ((0x94f283e8U >> (bVar7 & 0x1f) | -0x6b0d7c18 << 0x20 - (bVar7 & 0x1f)) <
          (uVar21 | 1) * 0x47f8d65f) {
        uVar28 = 0x7c19e6c1 << (bVar7 & 0x1f) | 0x7c19e6c1U >> 0x20 - (bVar7 & 0x1f);
      }
      else {
        uVar28 = (uVar21 ^ 0x4dc423fa) + 0xb6731eb5;
      }
      uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 2)) + 1];
      uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 1)) + 1];
      uVar25 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 4)) + 1];
      uVar31 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 3)) + 1];
      uVar30 = uVar5 + uVar31 + uStack_98 + uVar25 + uVar40;
      uVar36 = (uVar30 & 0xff) >> 3;
      if ((uVar28 ^ 0x8ca2b73c) < uVar21 + 0x3b7057f7 + uVar28) {
        uVar36 = (uVar30 & 0xff) - 3;
      }
      puVar32 = (uint64_t *)(uVar36 + (int64_t)puVar14);
      if (puVar4 < (uint64_t *)(uVar36 + (int64_t)puVar14)) {
        puVar32 = puVar4;
      }
      uVar25 = (((uVar24 >> ((uint8_t)uVar40 & 0x3f) | uVar40) >> ((uint8_t)uVar5 & 0x3f) | uVar5) >>
                ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar25 & 0x3f) |
               uVar25 & 0xffffffffffffff00;
      *puVar14 = uVar25 >> (-(char)uVar30 & 0x3fU);
      uVar24 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 6)) + 1];
      uVar5 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 8)) + 1];
      uVar40 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 7)) + 1];
      lVar22 = in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 5)) + 1] + uVar5 +
               uVar24 + uVar40;
      uVar31 = lVar22 + (uint64_t)((uint32_t)uVar30 & 7);
      uStack_98 = (uint64_t)((uint32_t)uVar31 & 7);
      puVar14 = (uint64_t *)(((uVar31 & 0xff) >> 3) + (int64_t)puVar32);
      if (puVar4 < puVar14) {
        puVar14 = puVar4;
      }
      uVar24 = uVar25 >> ((uint8_t)lVar22 & 0x3f) |
               ((in_R10[(uint64_t)*(uint8_t *)((int64_t)in_RAX + (uVar23 - 5)) + 1] >>
                 ((uint8_t)uVar24 & 0x3f) | uVar24) >> ((uint8_t)uVar40 & 0x3f) | uVar40) >>
               ((uint8_t)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
      *puVar32 = uVar24 >> (-(char)uVar31 & 0x3fU);
      if (uVar23 <= (((uVar21 | 1) * 0x8c2c - 0x379d ^ 0x9c57) & 0xffff)) break;
      uVar23 = uVar23 - 8;
    }
  }
LAB_7fffa54a2cb5:
  puVar6 = (uint64_t *)(uStack_98 + 0x8000000000000001);
  puVar32 = (uint64_t *)(((uint64_t)puVar6 >> 3 & 0x1fffffff) + (int64_t)puVar14);
  *puVar14 = (uVar24 >> 1 | 0x8000000000000000) >> (-(char)puVar6 & 0x3fU);
  if (puVar4 < puVar32) {
    puVar32 = puVar4;
  }
  if (puVar32 < puVar4) {
    puVar6 = (uint64_t *)(uint64_t)((uint32_t)puVar6 & 7);
  }
                    /* WARNING: Read-only address (ram,0x7fffa56b2660) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bac50) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc580) is written */
  return puVar6;
}


// ============================================================================
// Function : FUN_7fffa54a3a80  |  RVA: 0xd33a80  |  Size: 150 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa54a3a80(void)

{
  uint64_t uVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t uStack_8;
  
  uVar2 = in_RAX - 0x5acbb164;
  uVar2 = (uVar2 << 0x29 | uVar2 >> 0x17) ^ (uVar2 * 0x10000 | uVar2 >> 0x30) ^ uVar2;
  uVar2 = (uVar2 << 0x20 | uVar2 >> 0x20) ^ (uVar2 << 0x12 | uVar2 >> 0x2e) ^ uVar2;
  uVar1 = uVar2 >> 0x24;
  puVar3 = (uint64_t *)((uVar2 << 0x1c | uVar1) - (uVar1 << 0x3e));
  uStack_8 = CONCAT44(0x427567a9,(int)in_RAX);
  *(uint64_t *)*puVar3 = **(uint64_t **)puVar3[1] & 0xfffffffffffff000;
  *(uint64_t *)puVar3[2] =
       **(int64_t **)puVar3[1] + **(int64_t **)puVar3[3] + 0xfffU & 0xfffffffffffff000;
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa54a3b94  |  RVA: 0xd33b94  |  Size: 1 bytes
// Callers  : FUN_7fffa4f5c658@0x7ec658
// Callees  : none
// ============================================================================
void FUN_7fffa54a3b94(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa54a3ba0  |  RVA: 0xd33ba0  |  Size: 61 bytes
// Callers  : none
// Callees  : FUN_7fffa50081c0@0x8981c0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t (*) [32]
FUN_7fffa54a3ba0(uint8_t (*param_1) [32],uint8_t (*param_2) [32],uint64_t param_3,
                uint8_t param_4)

{
  uint16_t uVar1;
  uint8_t auVar2 [32];
  int64_t lVar3;
  char cVar4;
  uint8_t *puVar5;
  uint8_t (*pauVar6) [32];
  uint8_t (*pauVar7) [32];
  uint32_t uVar8;
  uint8_t (*pauVar9) [32];
  uint8_t bVar10;
  uint64_t uVar11;
  uint8_t bVar12;
  int iVar13;
  uint32_t uVar14;
  uint64_t uVar15;
  uint8_t bVar16;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [32];
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      pauVar6 = (uint8_t (*) [32])FUN_7fffa50081c0(param_1,param_2,param_4);
      return pauVar6;
    }
    uVar15 = (int64_t)param_2 - (int64_t)param_1;
    iVar13 = (int)param_3;
    cVar4 = (char)param_3;
    pauVar6 = param_1;
    if (((param_3 < 0x11) && (0x1f < uVar15)) && ((_DAT_7fffa47800e4 & 0x20) != 0)) {
      bVar16 = cVar4 - 2;
      if (3 < iVar13) {
        bVar16 = 2;
      }
      uVar11 = 0;
      if (iVar13 < 4) {
        bVar12 = 0;
      }
      else {
        bVar12 = cVar4 - 4;
        if (7 < iVar13) {
          bVar12 = 4;
        }
      }
      bVar10 = 0;
      if (7 < iVar13) {
        bVar10 = cVar4 - 8;
      }
      auVar18 = vpshufb_avx(ZEXT416((uint32_t)(int)(char)param_4),(uint8_t  [16])0x0);
      auVar19._16_16_ = auVar18;
      auVar19._0_16_ = auVar18;
      do {
        pauVar7 = pauVar6;
        auVar2 = vpcmpeqb_avx2(auVar19,*pauVar7);
        uVar8 = (uint32_t)(SUB321(auVar2 >> 7,0) & 1) | (uint32_t)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
                (uint32_t)(SUB321(auVar2 >> 0x17,0) & 1) << 2 |
                (uint32_t)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
                (uint32_t)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
                (uint32_t)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
                (uint32_t)(SUB321(auVar2 >> 0x37,0) & 1) << 6 |
                (uint32_t)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
                (uint32_t)(SUB321(auVar2 >> 0x47,0) & 1) << 8 |
                (uint32_t)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
                (uint32_t)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
                (uint32_t)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
                (uint32_t)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
                (uint32_t)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
                (uint32_t)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint32_t)SUB321(auVar2 >> 0x7f,0) << 0xf
                | (uint32_t)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
                (uint32_t)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
                (uint32_t)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
                (uint32_t)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
                (uint32_t)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
                (uint32_t)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
                (uint32_t)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 |
                (uint32_t)SUB321(auVar2 >> 0xbf,0) << 0x17 | (uint32_t)(SUB321(auVar2 >> 199,0) & 1) << 0x18
                | (uint32_t)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
                (uint32_t)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
                (uint32_t)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
                (uint32_t)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
                (uint32_t)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
                (uint32_t)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
                (uint32_t)(uint8_t)(auVar2[0x1f] >> 7) << 0x1f;
        uVar11 = (uint64_t)uVar8 << 0x20 | uVar11;
        uVar11 = uVar11 >> 1 & uVar11;
        uVar11 = uVar11 >> (bVar16 & 0x3f) & uVar11;
        uVar11 = uVar11 >> (bVar12 & 0x3f) & uVar11;
        uVar11 = uVar11 >> (bVar10 & 0x3f) & uVar11;
        if (uVar11 != 0) {
          lVar3 = 0;
          for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x8000000000000000) {
            lVar3 = lVar3 + 1;
          }
          return (uint8_t (*) [32])(pauVar7[-1] + lVar3);
        }
        uVar11 = (uint64_t)uVar8;
        pauVar6 = pauVar7 + 1;
      } while (pauVar6 != (uint8_t (*) [32])(*param_1 + (uVar15 & 0xffffffffffffffe0)));
      uVar14 = (uint32_t)uVar15 & 0x1c;
      if ((uVar15 & 0x1c) != 0) {
        auVar2 = vpmaskmovd_avx2(*(uint8_t (*) [32])(&UNK_7fffa56b2630 + -(uint64_t)uVar14),
                                 *pauVar6);
        auVar19 = vpcmpeqb_avx2(auVar2,auVar19);
        auVar19 = vpand_avx2(auVar19,*(uint8_t (*) [32])(&UNK_7fffa56b2630 + -(uint64_t)uVar14))
        ;
        uVar11 = CONCAT44((uint32_t)(SUB321(auVar19 >> 7,0) & 1) |
                          (uint32_t)(SUB321(auVar19 >> 0xf,0) & 1) << 1 |
                          (uint32_t)(SUB321(auVar19 >> 0x17,0) & 1) << 2 |
                          (uint32_t)(SUB321(auVar19 >> 0x1f,0) & 1) << 3 |
                          (uint32_t)(SUB321(auVar19 >> 0x27,0) & 1) << 4 |
                          (uint32_t)(SUB321(auVar19 >> 0x2f,0) & 1) << 5 |
                          (uint32_t)(SUB321(auVar19 >> 0x37,0) & 1) << 6 |
                          (uint32_t)(SUB321(auVar19 >> 0x3f,0) & 1) << 7 |
                          (uint32_t)(SUB321(auVar19 >> 0x47,0) & 1) << 8 |
                          (uint32_t)(SUB321(auVar19 >> 0x4f,0) & 1) << 9 |
                          (uint32_t)(SUB321(auVar19 >> 0x57,0) & 1) << 10 |
                          (uint32_t)(SUB321(auVar19 >> 0x5f,0) & 1) << 0xb |
                          (uint32_t)(SUB321(auVar19 >> 0x67,0) & 1) << 0xc |
                          (uint32_t)(SUB321(auVar19 >> 0x6f,0) & 1) << 0xd |
                          (uint32_t)(SUB321(auVar19 >> 0x77,0) & 1) << 0xe |
                          (uint32_t)SUB321(auVar19 >> 0x7f,0) << 0xf |
                          (uint32_t)(SUB321(auVar19 >> 0x87,0) & 1) << 0x10 |
                          (uint32_t)(SUB321(auVar19 >> 0x8f,0) & 1) << 0x11 |
                          (uint32_t)(SUB321(auVar19 >> 0x97,0) & 1) << 0x12 |
                          (uint32_t)(SUB321(auVar19 >> 0x9f,0) & 1) << 0x13 |
                          (uint32_t)(SUB321(auVar19 >> 0xa7,0) & 1) << 0x14 |
                          (uint32_t)(SUB321(auVar19 >> 0xaf,0) & 1) << 0x15 |
                          (uint32_t)(SUB321(auVar19 >> 0xb7,0) & 1) << 0x16 |
                          (uint32_t)SUB321(auVar19 >> 0xbf,0) << 0x17 |
                          (uint32_t)(SUB321(auVar19 >> 199,0) & 1) << 0x18 |
                          (uint32_t)(SUB321(auVar19 >> 0xcf,0) & 1) << 0x19 |
                          (uint32_t)(SUB321(auVar19 >> 0xd7,0) & 1) << 0x1a |
                          (uint32_t)(SUB321(auVar19 >> 0xdf,0) & 1) << 0x1b |
                          (uint32_t)(SUB321(auVar19 >> 0xe7,0) & 1) << 0x1c |
                          (uint32_t)(SUB321(auVar19 >> 0xef,0) & 1) << 0x1d |
                          (uint32_t)(SUB321(auVar19 >> 0xf7,0) & 1) << 0x1e |
                          (uint32_t)(uint8_t)(auVar19[0x1f] >> 7) << 0x1f,uVar8);
        uVar15 = uVar11 >> 1 & uVar11;
        uVar15 = uVar15 >> (bVar16 & 0x3f) & uVar15;
        uVar15 = uVar15 >> (bVar12 & 0x3f) & uVar15;
        uVar15 = uVar15 >> (bVar10 & 0x3f) & uVar15;
        if (uVar15 != 0) {
          lVar3 = 0;
          for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000) {
            lVar3 = lVar3 + 1;
          }
          return (uint8_t (*) [32])(*pauVar7 + lVar3);
        }
        uVar8 = (uint32_t)(uVar11 >> (sbyte)uVar14);
        pauVar6 = (uint8_t (*) [32])(*pauVar6 + uVar14);
      }
      param_1 = (uint8_t (*) [32])((int64_t)pauVar6 - (uint64_t)(uint32_t)LZCOUNT(~uVar8));
    }
    else if (((param_3 < 9) && (0xf < uVar15)) && ((_DAT_7fffa47800e4 & 4) != 0)) {
      bVar16 = cVar4 - 2;
      if (3 < iVar13) {
        bVar16 = 2;
      }
      if (iVar13 < 4) {
        bVar12 = 0;
      }
      else {
        bVar12 = cVar4 - 4;
        if (7 < iVar13) {
          bVar12 = 4;
        }
      }
      auVar18 = pshufb(ZEXT116(param_4),ZEXT816(0));
      pauVar7 = param_1;
      uVar8 = 0;
      while( true ) {
        auVar17[0] = -((*pauVar7)[0] == auVar18[0]);
        auVar17[1] = -((*pauVar7)[1] == auVar18[1]);
        auVar17[2] = -((*pauVar7)[2] == auVar18[2]);
        auVar17[3] = -((*pauVar7)[3] == auVar18[3]);
        auVar17[4] = -((*pauVar7)[4] == auVar18[4]);
        auVar17[5] = -((*pauVar7)[5] == auVar18[5]);
        auVar17[6] = -((*pauVar7)[6] == auVar18[6]);
        auVar17[7] = -((*pauVar7)[7] == auVar18[7]);
        auVar17[8] = -((*pauVar7)[8] == auVar18[8]);
        auVar17[9] = -((*pauVar7)[9] == auVar18[9]);
        auVar17[10] = -((*pauVar7)[10] == auVar18[10]);
        auVar17[0xb] = -((*pauVar7)[0xb] == auVar18[0xb]);
        auVar17[0xc] = -((*pauVar7)[0xc] == auVar18[0xc]);
        auVar17[0xd] = -((*pauVar7)[0xd] == auVar18[0xd]);
        auVar17[0xe] = -((*pauVar7)[0xe] == auVar18[0xe]);
        auVar17[0xf] = -((*pauVar7)[0xf] == auVar18[0xf]);
        uVar1 = (uint16_t)(SUB161(auVar17 >> 7,0) & 1) | (uint16_t)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
                (uint16_t)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar17[0xf] >> 7) << 0xf;
        uVar8 = (uint32_t)uVar1 << 0x10 | uVar8;
        uVar8 = uVar8 >> 1 & uVar8;
        uVar8 = uVar8 >> (bVar16 & 0x1f) & uVar8;
        uVar8 = uVar8 >> (bVar12 & 0x1f) & uVar8;
        if (uVar8 != 0) {
          uVar14 = 0;
          if (uVar8 != 0) {
            for (; (uVar8 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
            }
          }
          return (uint8_t (*) [32])(pauVar7[-1] + (uint64_t)uVar14 + 0x10);
        }
        pauVar6 = (uint8_t (*) [32])(*pauVar7 + 0x10);
        if (pauVar6 == (uint8_t (*) [32])(*param_1 + (uVar15 & 0xfffffffffffffff0))) break;
        pauVar7 = pauVar6;
        uVar8 = (uint32_t)uVar1;
      }
      uVar8 = 0x1f;
      if ((uVar1 ^ 0xffff) != 0) {
        for (; (uVar1 ^ 0xffff) >> uVar8 == 0; uVar8 = uVar8 - 1) {
        }
      }
      param_1 = (uint8_t (*) [32])(*pauVar7 + (uint64_t)uVar8 + 1);
    }
    uVar15 = (int64_t)param_2 - (int64_t)param_1;
    pauVar7 = param_1;
    param_1 = param_2;
    if (param_3 <= uVar15) {
      while( true ) {
        puVar5 = *pauVar7;
        pauVar9 = (uint8_t (*) [32])(puVar5 + param_3);
        while (pauVar9[-1][0x1f] == param_4) {
          if (pauVar6 == (uint8_t (*) [32])(pauVar9[-1] + 0x1f)) {
            param_1 = pauVar7;
            goto FUN_7fffa54a3eab;
          }
          pauVar9 = (uint8_t (*) [32])(pauVar9[-1] + 0x1f);
        }
        if ((uint64_t)((int64_t)param_2 - (int64_t)pauVar9) < param_3) break;
        pauVar7 = pauVar9;
        pauVar6 = (uint8_t (*) [32])(puVar5 + param_3);
      }
    }
  }
FUN_7fffa54a3eab:
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa54a3bdd  |  RVA: 0xd33bdd  |  Size: 718 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t (*) [32] FUN_7fffa54a3bdd(uint64_t param_1,uint64_t param_2,char param_3)

{
  uint16_t uVar1;
  uint8_t auVar2 [32];
  int64_t lVar3;
  uint8_t *puVar4;
  uint8_t (*in_RAX) [32];
  uint8_t (*pauVar5) [32];
  uint8_t (*pauVar6) [32];
  uint32_t uVar7;
  uint8_t bVar8;
  uint64_t uVar9;
  uint8_t bVar10;
  uint8_t (*unaff_RDI) [32];
  int in_R10D;
  uint32_t in_register_00000094;
  uint32_t uVar11;
  int64_t in_R11;
  uint64_t uVar12;
  uint8_t bVar13;
  uint32_t unaff_R15D;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [32];
  
  uVar12 = in_R11 - (int64_t)in_RAX;
  pauVar5 = in_RAX;
  if (((CONCAT44(in_register_00000094,in_R10D) < 0x11) && (0x1f < uVar12)) &&
     ((param_1 & 0x20) != 0)) {
    bVar13 = param_3 - 2;
    if (3 < in_R10D) {
      bVar13 = 2;
    }
    uVar9 = 0;
    if (in_R10D < 4) {
      bVar10 = 0;
    }
    else {
      bVar10 = param_3 - 4;
      if (7 < in_R10D) {
        bVar10 = 4;
      }
    }
    bVar8 = 0;
    if (7 < in_R10D) {
      bVar8 = param_3 - 8;
    }
    auVar15 = vpshufb_avx(ZEXT416((uint32_t)(int)(char)unaff_R15D),(uint8_t  [16])0x0);
    auVar16._16_16_ = auVar15;
    auVar16._0_16_ = auVar15;
    do {
      pauVar6 = pauVar5;
      auVar2 = vpcmpeqb_avx2(auVar16,*pauVar6);
      uVar7 = (uint32_t)(SUB321(auVar2 >> 7,0) & 1) | (uint32_t)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
              (uint32_t)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint32_t)(uint8_t)(auVar2[0x1f] >> 7) << 0x1f
      ;
      uVar9 = (uint64_t)uVar7 << 0x20 | uVar9;
      uVar9 = uVar9 >> 1 & uVar9;
      uVar9 = uVar9 >> (bVar13 & 0x3f) & uVar9;
      uVar9 = uVar9 >> (bVar10 & 0x3f) & uVar9;
      uVar9 = uVar9 >> (bVar8 & 0x3f) & uVar9;
      if (uVar9 != 0) {
        lVar3 = 0;
        for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
          lVar3 = lVar3 + 1;
        }
        return (uint8_t (*) [32])(pauVar6[-1] + lVar3);
      }
      uVar9 = (uint64_t)uVar7;
      pauVar5 = pauVar6 + 1;
    } while (pauVar5 != (uint8_t (*) [32])(*in_RAX + (uVar12 & 0xffffffffffffffe0)));
    uVar11 = (uint32_t)uVar12 & 0x1c;
    if ((uVar12 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(uint8_t (*) [32])(&UNK_7fffa56b2630 + -(uint64_t)uVar11),
                               *pauVar5);
      auVar16 = vpcmpeqb_avx2(auVar2,auVar16);
      auVar16 = vpand_avx2(auVar16,*(uint8_t (*) [32])(&UNK_7fffa56b2630 + -(uint64_t)uVar11));
      uVar9 = CONCAT44((uint32_t)(SUB321(auVar16 >> 7,0) & 1) |
                       (uint32_t)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
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
                       (uint32_t)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe |
                       (uint32_t)SUB321(auVar16 >> 0x7f,0) << 0xf |
                       (uint32_t)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
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
                       (uint32_t)(uint8_t)(auVar16[0x1f] >> 7) << 0x1f,uVar7);
      uVar12 = uVar9 >> 1 & uVar9;
      uVar12 = uVar12 >> (bVar13 & 0x3f) & uVar12;
      uVar12 = uVar12 >> (bVar10 & 0x3f) & uVar12;
      uVar12 = uVar12 >> (bVar8 & 0x3f) & uVar12;
      if (uVar12 != 0) {
        lVar3 = 0;
        for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
          lVar3 = lVar3 + 1;
        }
        return (uint8_t (*) [32])(*pauVar6 + lVar3);
      }
      uVar7 = (uint32_t)(uVar9 >> (sbyte)uVar11);
      pauVar5 = (uint8_t (*) [32])(*pauVar5 + uVar11);
    }
    in_RAX = (uint8_t (*) [32])((int64_t)pauVar5 - (uint64_t)(uint32_t)LZCOUNT(~uVar7));
  }
  else if (((CONCAT44(in_register_00000094,in_R10D) < 9) && (0xf < uVar12)) && ((param_1 & 4) != 0))
  {
    bVar13 = param_3 - 2;
    if (3 < in_R10D) {
      bVar13 = 2;
    }
    if (in_R10D < 4) {
      bVar10 = 0;
    }
    else {
      bVar10 = param_3 - 4;
      if (7 < in_R10D) {
        bVar10 = 4;
      }
    }
    auVar15 = pshufb(ZEXT416(unaff_R15D),ZEXT816(0));
    pauVar6 = in_RAX;
    uVar7 = 0;
    while( true ) {
      auVar14[0] = -((*pauVar6)[0] == auVar15[0]);
      auVar14[1] = -((*pauVar6)[1] == auVar15[1]);
      auVar14[2] = -((*pauVar6)[2] == auVar15[2]);
      auVar14[3] = -((*pauVar6)[3] == auVar15[3]);
      auVar14[4] = -((*pauVar6)[4] == auVar15[4]);
      auVar14[5] = -((*pauVar6)[5] == auVar15[5]);
      auVar14[6] = -((*pauVar6)[6] == auVar15[6]);
      auVar14[7] = -((*pauVar6)[7] == auVar15[7]);
      auVar14[8] = -((*pauVar6)[8] == auVar15[8]);
      auVar14[9] = -((*pauVar6)[9] == auVar15[9]);
      auVar14[10] = -((*pauVar6)[10] == auVar15[10]);
      auVar14[0xb] = -((*pauVar6)[0xb] == auVar15[0xb]);
      auVar14[0xc] = -((*pauVar6)[0xc] == auVar15[0xc]);
      auVar14[0xd] = -((*pauVar6)[0xd] == auVar15[0xd]);
      auVar14[0xe] = -((*pauVar6)[0xe] == auVar15[0xe]);
      auVar14[0xf] = -((*pauVar6)[0xf] == auVar15[0xf]);
      uVar1 = (uint16_t)(SUB161(auVar14 >> 7,0) & 1) | (uint16_t)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
              (uint16_t)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
              (uint16_t)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
              (uint16_t)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
              (uint16_t)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
              (uint16_t)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
              (uint16_t)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
              (uint16_t)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
              (uint16_t)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
              (uint16_t)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
              (uint16_t)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
              (uint16_t)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
              (uint16_t)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
              (uint16_t)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar14[0xf] >> 7) << 0xf;
      uVar7 = (uint32_t)uVar1 << 0x10 | uVar7;
      uVar7 = uVar7 >> 1 & uVar7;
      uVar7 = uVar7 >> (bVar13 & 0x1f) & uVar7;
      uVar7 = uVar7 >> (bVar10 & 0x1f) & uVar7;
      if (uVar7 != 0) {
        uVar11 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
        return (uint8_t (*) [32])(pauVar6[-1] + (uint64_t)uVar11 + 0x10);
      }
      pauVar5 = (uint8_t (*) [32])(*pauVar6 + 0x10);
      if (pauVar5 == (uint8_t (*) [32])(*in_RAX + (uVar12 & 0xfffffffffffffff0))) break;
      pauVar6 = pauVar5;
      uVar7 = (uint32_t)uVar1;
    }
    uVar7 = 0x1f;
    if ((uVar1 ^ 0xffff) != 0) {
      for (; (uVar1 ^ 0xffff) >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    in_RAX = (uint8_t (*) [32])(*pauVar6 + (uint64_t)uVar7 + 1);
  }
  if (CONCAT44(in_register_00000094,in_R10D) <= (uint64_t)((int64_t)unaff_RDI - (int64_t)in_RAX))
  {
    while( true ) {
      puVar4 = *in_RAX;
      pauVar6 = (uint8_t (*) [32])(puVar4 + CONCAT44(in_register_00000094,in_R10D));
      while (pauVar6[-1][0x1f] == (char)unaff_R15D) {
        if (pauVar5 == (uint8_t (*) [32])(pauVar6[-1] + 0x1f)) {
          return in_RAX;
        }
        pauVar6 = (uint8_t (*) [32])(pauVar6[-1] + 0x1f);
      }
      if ((uint64_t)((int64_t)unaff_RDI - (int64_t)pauVar6) <
          CONCAT44(in_register_00000094,in_R10D)) break;
      in_RAX = pauVar6;
      pauVar5 = (uint8_t (*) [32])(puVar4 + CONCAT44(in_register_00000094,in_R10D));
    }
  }
  return unaff_RDI;
}


// ============================================================================
// Function : FUN_7fffa54a3eab  |  RVA: 0xd33eab  |  Size: 8 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa54a3eab(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa54a3ec0  |  RVA: 0xd33ec0  |  Size: 1693 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa54a4554) overlaps instruction at (ram,0x7fffa54a4551)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa54a3fdf) */
/* WARNING: Removing unreachable block (ram,0x7fffa54a4541) */

void FUN_7fffa54a3ec0(void)

{
  code *pcVar1;
  uint8_t bVar2;
  short sVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  uint64_t in_R10;
  uint64_t uVar9;
  
  uVar9 = ~in_R10;
  uRam00007fffa47868b0 = 0;
  uRam00007fffa47868b8 = 0;
  uRam00007fffa47868a0 = 0;
  uRam00007fffa47868a8 = 0;
  uRam00007fffa4786890 = 0;
  uRam00007fffa4786898 = 0;
  uRam00007fffa47868c0 = 0;
  uVar8 = (uVar9 & 0x70) * -0x5195e73e + (in_R10 & 0x70) * 0x472dc075 +
          (in_R10 | 0xffffffffffffff8f) * -0x18c3a7af + (in_R10 & 0x4380) * -0x80000004 +
          (uVar9 & 0x1836b003) * -0x80000004 + (in_R10 & 0xffffffffe7c90c0c) * -0x38d23f8f +
          (in_R10 ^ 0x1836b073) * 0x80000004 +
          (uVar9 & 0xffffffffffffbc0f | 0x1836f383) * 0x472dc075;
  uVar7 = (uint32_t)uVar8;
  bVar2 = (uint8_t)uVar8;
  *(uint64_t *)
   ((int64_t)(int)(0xbffffc45U >> (bVar2 & 0x1f) | -0x400003bb << 0x20 - (bVar2 & 0x1f)) +
   0x7fffa4795719) = 0xef7fb7cf7f83ace0 - uVar8 ^ 0xffffffffaffe9db6;
  sVar3 = (short)(uVar7 | 1);
  uVar9 = *(uint64_t *)((int64_t)(short)(sVar3 * 0x75dd) + 0x7fffa47876e9);
  uVar6 = 0x926dc69b2b77fa0e - uVar9;
  if ((uint64_t)(int64_t)(int)(0x5c148815 - uVar7) <=
      (uint64_t)((uVar7 + 0x3cf8baa4) * 0x3225ac51)) {
    uVar6 = (uint64_t)(&UNK_7fffa56f4b72 + (short)((short)uVar8 + 0xeee4U ^ 0x1418)) ^
            0x926db9648e18f776 | uVar9;
  }
  *(uint64_t *)
   ((int64_t)(int)(-0x3c5381 << (bVar2 & 0x1f) | 0xffc3ac7fU >> 0x20 - (bVar2 & 0x1f)) +
   0x7fffa47959e7) = 0;
  uVar9 = (uVar6 & 0xf0f0f0f0f0f0f0f) << 4 | uVar6 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333) * 4;
  uVar6 = -(int64_t)(&UNK_7fffa5787483 + (int)~(uVar7 ^ 0xd1956e28)) ^
          (int64_t)(&UNK_7fffa5788f5e + (int)(-0x2e6abcb4 - uVar7)) * -8;
  uVar5 = uVar6 << 6 ^ uVar6;
  uVar5 = uVar5 << 0xc ^ uVar5;
  uVar6 = (uint64_t)((uint32_t)uVar6 & 0x30);
  if (~(uVar7 ^ 0x7554badf) < 0xc6a45467) {
    uVar6 = uVar5 << 0x30;
  }
  *(int64_t *)
   ((int64_t)(int)(-0x249c41 << (bVar2 & 0x1f) | 0xffdb63bfU >> 0x20 - (bVar2 & 0x1f)) +
   0x7fffa478fb02) =
       (int64_t)
       (&UNK_7fffa58603e7 +
       (uVar9 >> 1 & 0x5555555555555555) + (uVar9 & 0x5555555555555555) * 2 +
       (int64_t)(int)((uVar7 | 1) * 0x3f7a086b)) * -0x5338483d9bb43877;
  lVar4 = (int64_t)(short)(-0x180d << (bVar2 & 0xf) | 0xe7f3U >> 0x10 - (bVar2 & 0xf));
  uVar9 = (uVar5 << 0x18 ^ uVar5 ^ uVar6) + lRam00007fffa4781368;
  *(uint64_t *)
   ((int64_t)
    (int)(((uVar7 ^ 0xc83a9db9) << 1 | (uint32_t)((int)(uVar7 ^ 0xc83a9db9) < 0)) + 0xcca03fb9) +
   0x7fffa47933e9) = uVar8 + 0x3567b7f5b2a807;
  *(uint64_t *)(lVar4 + 0x7fffa4789901) =
       ((uVar9 ^ 0x176cd7779847045f) -
       (int64_t)
       (&UNK_7fffa5866419 + (int)((uVar7 + 0xae6a0aa3) * 0x10 | uVar7 + 0xae6a0aa3 >> 0x1c))) +
       0x56ca4a5cf2e79081;
  if (((uVar8 ^ 0x71f6b23db341b8) << 0x32 | (uVar8 ^ 0x71f6b23db341b8) >> 0xe) != 0x73749e9cd660d0cd
     ) {
    lVar4 = 0x7fffa478767f;
    uVar9 = ((int64_t)
             (&UNK_7fffa5791a7f +
             (int)(-0x3bd581 << (bVar2 & 0x1f) | 0xffc42a7fU >> 0x20 - (bVar2 & 0x1f))) * 0x80000 |
            3U) * 0x4000000080000001 ^ uRam00007fffa4781548;
    *(uint64_t *)((int64_t)(short)~(sVar3 * 0x238f) + 0x7fffa478a3ae) =
         (uint64_t)(((uVar7 | 1) * 0x541 + 0x230a ^ 5) & 0xffff);
    *(uint64_t *)
     ((int64_t)(int)(-0x23f441 << (bVar2 & 0x1f) | 0xffdc0bbfU >> 0x20 - (bVar2 & 0x1f)) +
     0x7fffa478f882) = ~uVar9 * 0x6859b0fabc99a247;
    if ((0x775bfb7a758f07f8 << (bVar2 & 0x3f) | 0x775bfb7a758f07f8U >> 0x40 - (bVar2 & 0x3f)) ==
        0x7fffa478767f) {
      pcVar1 = (code *)__debugbreak();
      (*pcVar1)();
      return;
    }
  }
  uVar9 = 0xd9eb99c246515b60 - *(int64_t *)(lVar4 + -0x665f);
  uVar9 = (uVar9 << 0x39 | uVar9 >> 7) ^ 0x6dcc99ca2e1fbce1;
  *(uint64_t *)((int64_t)(int)((uVar7 + 0xff2bb9) * -0x70211eb) + 0x7fffa478f0d1) =
       uVar9 >> 0x1b ^ uVar9 >> 0x36 ^ uVar9;
  return;
}


// ============================================================================
// Function : FUN_7fffa54a4560  |  RVA: 0xd34560  |  Size: 32 bytes
// Callers  : FUN_7fffa5225520@0xab5520
// Callees  : FUN_7fffa4f41160@0x7d1160, FUN_7fffa5426160@0xcb6160
// ============================================================================
void FUN_7fffa54a4560(void)

{
  code *pcVar1;
  uint8_t auStack_28 [40];
  
  FUN_7fffa5426160(auStack_28);
  FUN_7fffa4f41160(auStack_28,&UNK_7fffa588cf78);
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa54a4580  |  RVA: 0xd34580  |  Size: 22549 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa54a4580(void) {
    /* +0xd34580 */ __asm { PUSH RBP }
    /* +0xd34581 */ __asm { PUSH R13 }
    /* +0xd34583 */ __asm { PUSH RBX }
    /* +0xd34584 */ __asm { PUSH RSI }
    /* +0xd34585 */ __asm { PUSH R12 }
    /* +0xd34587 */ __asm { PUSH R15 }
    /* +0xd34589 */ __asm { PUSH R14 }
    /* +0xd3458b */ __asm { PUSH RDI }
    /* +0xd3458c */ __asm { SUB RSP,0x178 }
    /* +0xd34593 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xd3459b */ __asm { MOV qword ptr [RBP + 0xf0],-0x2 }
    /* +0xd345a6 */ __asm { MOV RBX,RCX }
    /* +0xd345a9 */ __asm { MOV RAX,qword ptr [RBP + 0x160] }
    /* +0xd345b0 */ __asm { MOV R11D,0x14da493 }
    /* +0xd345b6 */ __asm { MOV R8,RAX }
    /* +0xd345b9 */ __asm { SHL R8,0x3a }
    /* +0xd345bd */ __asm { XOR R8,RAX }
    /* +0xd345c0 */ __asm { MOV R10D,0x7ea2f1dd }
    /* +0xd345c6 */ __asm { MOV RCX,R8 }
    /* +0xd345c9 */ __asm { ROL RCX,0x1b }
    /* +0xd345cd */ __asm { MOV EDI,EBX }
    /* +0xd345cf */ __asm { OR EDI,0x1 }
    /* +0xd345d2 */ __asm { MOV AX,0xc81c }
    /* +0xd345d6 */ __asm { IMUL EAX,EDI }
    /* +0xd345d9 */ __asm { ROL AX,0x2 }
    /* +0xd345dd */ __asm { MOV RDX,R9 }
    /* +0xd345e0 */ __asm { ROL RDX,0x38 }
    /* +0xd345e4 */ __asm { XOR R10D,0xc636ff0b }
    /* +0xd345eb */ __asm { MOV R13,R9 }
    /* +0xd345ee */ __asm { ROL R13,0x1a }
    /* +0xd345f2 */ __asm { MOVZX EAX,AX }
    /* +0xd345f5 */ __asm { ROL R9,0x17 }
    /* +0xd345f9 */ __asm { XOR R9,R13 }
    /* +0xd345fc */ __asm { XOR R9,RDX }
    /* +0xd345ff */ __asm { MOV R13,R9 }
    /* +0xd34602 */ __asm { ROL R13,0x4 }
    /* +0xd34606 */ __asm { MOV RDX,R9 }
    /* +0xd34609 */ __asm { ROL RDX,0x3e }
    /* +0xd3460d */ __asm { XOR RDX,R13 }
    /* +0xd34610 */ __asm { XOR RDX,R9 }
    /* +0xd34613 */ __asm { MOV R9,RDX }
    /* +0xd34616 */ __asm { ROL R9,0x8 }
    /* +0xd3461a */ __asm { XOR R9,RDX }
    /* +0xd3461d */ __asm { ROL RDX,0x3c }
    /* +0xd34621 */ __asm { MOV R13,R8 }
    /* +0xd34624 */ __asm { ROL R13,0x12 }
    /* +0xd34628 */ __asm { XOR R13,RCX }
    /* +0xd3462b */ __asm { ADD R11D,0x4d8ac797 }
    /* +0xd34632 */ __asm { ADD R10D,0x72f02f42 }
    /* +0xd34639 */ __asm { XOR R13,R8 }
    /* +0xd3463c */ __asm { MOV R8,R13 }
    /* +0xd3463f */ __asm { ROL R8,0x24 }
    /* +0xd34643 */ __asm { MOV RCX,R13 }
    /* +0xd34646 */ __asm { ROL RCX,0x36 }
    /* +0xd3464a */ __asm { XOR RCX,R8 }
    /* +0xd3464d */ __asm { XOR RCX,R13 }
    /* +0xd34650 */ __asm { MOV R8,RCX }
    /* +0xd34653 */ __asm { ROL R8,0x8 }
    /* +0xd34657 */ __asm { MOV R13,RCX }
    /* +0xd3465a */ __asm { ROL R13,0x2c }
    /* +0xd3465e */ __asm { XOR R13,R8 }
    /* +0xd34661 */ __asm { MOV R8,R9 }
    /* +0xd34664 */ __asm { XOR R13,RCX }
    /* +0xd34667 */ __asm { MOV RCX,R13 }
    /* +0xd3466a */ __asm { ROL RCX,0x10 }
    /* +0xd3466e */ __asm { MOV RSI,R13 }
    /* +0xd34671 */ __asm { ROL RSI,0x18 }
    /* +0xd34675 */ __asm { XOR RSI,RCX }
    /* +0xd34678 */ __asm { XOR RSI,R13 }
    /* +0xd3467b */ __asm { MOV RCX,RSI }
    /* +0xd3467e */ __asm { ROL RCX,0x20 }
    /* +0xd34682 */ __asm { AND R8,RDX }
    /* +0xd34685 */ __asm { MOV R13,RSI }
    /* +0xd34688 */ __asm { ROL R13,0x30 }
    /* +0xd3468c */ __asm { XOR R13,RCX }
    /* +0xd3468f */ __asm { XOR R13,RSI }
    /* +0xd34692 */ __asm { ROL R13,0x20 }
    /* +0xd34696 */ __asm { MOV ECX,EBX }
    /* +0xd34698 */ __asm { ROL R11D,CL }
    /* +0xd3469b */ __asm { XOR R9,RDX }
    /* +0xd3469e */ __asm { MOV qword ptr [RBP + 0x8],R13 }
    /* +0xd346a2 */ __asm { MOVSXD R11,R11D }
    /* +0xd346a5 */ __asm { CMP R11,R10 }
    /* +0xd346a8 */ __asm { CMOVBE R9,R8 }
    /* +0xd346ac */ __asm { MOV R11,R9 }
    /* +0xd346af */ __asm { ROL R11,0x10 }
    /* +0xd346b3 */ __asm { MOV R8,R9 }
    /* +0xd346b6 */ __asm { ROL R8,0x38 }
    /* +0xd346ba */ __asm { XOR R8,R11 }
    /* +0xd346bd */ __asm { XOR R8,R9 }
    /* +0xd346c0 */ __asm { MOV R9,R8 }
    /* +0xd346c3 */ __asm { ROL R9,0x30 }
    /* +0xd346c7 */ __asm { MOV R11,R8 }
    /* +0xd346ca */ __asm { ROL R11,0x20 }
    /* +0xd346ce */ __asm { XOR R11,R9 }
    /* +0xd346d1 */ __asm { XOR R11,R8 }
    /* +0xd346d4 */ __asm { ROL R11,0x20 }
    /* +0xd346d8 */ __asm { MOV R9,0xfffc000fffc001 }
    /* +0xd346e2 */ __asm { IMUL R9,R11 }
    /* +0xd346e6 */ __asm { MOV RAX,qword ptr GS:[RAX] }
    /* +0xd346ea */ __asm { MOV R11,-0x5dbdf31d2da9cd81 }
    /* +0xd346f4 */ __asm { CMP RAX,R11 }
    /* +0xd346f7 */ __asm { NOP }
    /* +0xd346f8 */ __asm { NOP }
    /* +0xd346f9 */ __asm { NOP }
    /* +0xd346fa */ __asm { NOP }
    /* +0xd346fb */ __asm { NOP }
    /* +0xd346fc */ __asm { NOP }
    /* +0xd346fd */ __asm { NOP }
    /* +0xd346fe */ __asm { MOV RDX,qword ptr [R9] }
    /* +0xd34701 */ __asm { MOV R12,qword ptr [R9 + 0x8] }
    /* +0xd34705 */ __asm { MOV R9,qword ptr [RBP + 0x138] }
    /* +0xd3470c */ __asm { MOV RAX,0x47be8e06492041bb }
    /* +0xd34716 */ __asm { MOV qword ptr [RBP + 0x10],R9 }
    /* +0xd3471a */ __asm { CMP R9,RAX }
    /* +0xd3471d */ __asm { JZ 0x7fffa54a6ec9 }
    /* +0xd34723 */ __asm { MOV R11W,0x693d }
    /* +0xd34728 */ __asm { PXOR XMM3,XMM3 }
    /* +0xd3472c */ __asm { MOVDQA xmmword ptr [RBP + 0x40],XMM3 }
    /* +0xd34731 */ __asm { MOV qword ptr [RBP + 0x50],0x0 }
    /* +0xd34739 */ __asm { MOV qword ptr [RBP + 0x58],0x7 }
    /* +0xd34741 */ __asm { MOV EAX,EDI }
    /* +0xd34743 */ __asm { IMUL EAX,R11D }
    /* +0xd34747 */ __asm { XOR EAX,0xffffd8cf }
    /* +0xd3474c */ __asm { ADD EAX,0xffff9c12 }
    /* +0xd34751 */ __asm { MOVZX R10D,AX }
    /* +0xd34755 */ __asm { MOV RAX,qword ptr GS:[R10] }
    /* +0xd34759 */ __asm { MOV R9,0x642bcd90578dd165 }
    /* +0xd34763 */ __asm { MOV R11D,0xaf787b4d }
    /* +0xd34769 */ __asm { XOR R11,R9 }
    /* +0xd3476c */ __asm { MOV R10D,0xaa305f9a }
    /* +0xd34772 */ __asm { IMUL R10D,EDI }
    /* +0xd34776 */ __asm { ROL R10D,0x1a }
    /* +0xd3477a */ __asm { SUB R11,RBX }
    /* +0xd3477d */ __asm { MOV R9,0x7e8f4e95f1552a95 }
    /* +0xd34787 */ __asm { IMUL R9,qword ptr [RAX + 0x60] }
    /* +0xd3478c */ __asm { IMUL R10D,R10D,0x43d104d7 }
    /* +0xd34793 */ __asm { SUB R9,R10 }
    /* +0xd34796 */ __asm { CMP R11,R9 }
    /* +0xd34799 */ __asm { NOP }
    /* +0xd3479a */ __asm { NOP }
    /* +0xd3479b */ __asm { NOP }
    /* +0xd3479c */ __asm { NOP }
    /* +0xd3479d */ __asm { NOP }
    /* +0xd3479e */ __asm { MOV R13,0x7fffffffffffffff }
    /* +0xd347a8 */ __asm { TEST R12,R12 }
    /* +0xd347ab */ __asm { MOV qword ptr [RBP + 0xe0],RBX }
    /* +0xd347b2 */ __asm { MOV qword ptr [RBP + 0xe8],RDI }
    /* +0xd347b9 */ __asm { MOV qword ptr [RBP + 0x38],R12 }
    /* +0xd347bd */ __asm { MOV qword ptr [RBP + 0xd8],RDX }
    /* +0xd347c4 */ __asm { JZ 0x7fffa54a47f4 }
    /* +0xd347c6 */ __asm { CMP word ptr [RDX],0x5c }
    /* +0xd347ca */ __asm { JNZ 0x7fffa54a47fe }
    /* +0xd347cc */ __asm { CMP R12,0x1 }
    /* +0xd347d0 */ __asm { JNZ 0x7fffa54a4870 }
    /* +0xd347d6 */ __asm { LEA R8,[R12 + R12*0x1] }
    /* +0xd347da */ __asm { MOV qword ptr [RBP + 0x50],R12 }
    /* +0xd347de */ __asm { LEA RCX,[RBP + 0x40] }
    /* +0xd347e2 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd347e7 */ __asm { MOV word ptr [RBP + R12*0x2 + 0x40],0x0 }
    /* +0xd347ef */ __asm { JMP 0x7fffa54a4e75 }
    /* +0xd347f4 */ __asm { MOVDQA xmmword ptr [RBP + 0xa0],XMM3 }
    /* +0xd347fc */ __asm { JMP 0x7fffa54a4830 }
    /* +0xd347fe */ __asm { MOVDQA xmmword ptr [RBP + 0xb0],XMM3 }
    /* +0xd34806 */ __asm { MOVDQA xmmword ptr [RBP + 0xa0],XMM3 }
    /* +0xd3480e */ __asm { CMP R12,R13 }
    /* +0xd34811 */ __asm { JNC 0x7fffa54a6f00 }
    /* +0xd34817 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xd3481e */ __asm { NOP }
    /* +0xd3481f */ __asm { MOV RCX,0x0 }
    /* +0xd34826 */ __asm { CMP R12,0x7 }
    /* +0xd3482a */ __asm { JA 0x7fffa54a4966 }
    /* +0xd34830 */ __asm { MOV qword ptr [RBP + 0xb8],0x7 }
    /* +0xd3483b */ __asm { MOV qword ptr [RBP + 0xb0],R12 }
    /* +0xd34842 */ __asm { LEA R8,[R12 + R12*0x1] }
    /* +0xd34846 */ __asm { LEA RCX,[RBP + 0xa0] }
    /* +0xd3484d */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd34852 */ __asm { MOV word ptr [RBP + R12*0x2 + 0xa0],0x0 }
    /* +0xd3485d */ __asm { MOV R12,qword ptr [RBP + 0xb0] }
    /* +0xd34864 */ __asm { MOV RDI,qword ptr [RBP + 0xb8] }
    /* +0xd3486b */ __asm { JMP 0x7fffa54a4a32 }
    /* +0xd34870 */ __asm { CMP word ptr [RDX + 0x2],0x5c }
    /* +0xd34875 */ __asm { JZ 0x7fffa54a50f5 }
    /* +0xd3487b */ __asm { CMP R12,0x7 }
    /* +0xd3487f */ __asm { JBE 0x7fffa54a47d6 }
    /* +0xd34885 */ __asm { NOP }
    /* +0xd34886 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xd3488d */ __asm { MOV RCX,0x0 }
    /* +0xd34894 */ __asm { CMP R12,R13 }
    /* +0xd34897 */ __asm { JNC 0x7fffa54a6f1e }
    /* +0xd3489d */ __asm { MOV R11,R12 }
    /* +0xd348a0 */ __asm { OR R11,0x7 }
    /* +0xd348a4 */ __asm { NOP }
    /* +0xd348a5 */ __asm { MOV RCX,0x0 }
    /* +0xd348ac */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xd348b3 */ __asm { LEA RSI,[R12 + R12*0x1] }
    /* +0xd348b7 */ __asm { LEA RAX,[0x7fffa526d866] }
    /* +0xd348be */ __asm { MOV R10W,0x3e91 }
    /* +0xd348c3 */ __asm { XOR R10D,EBX }
    /* +0xd348c6 */ __asm { NOT R10D }
    /* +0xd348c9 */ __asm { MOVSX R9,R10W }
    /* +0xd348cd */ __asm { ADD R9,RAX }
    /* +0xd348d0 */ __asm { CMP R11,0xb }
    /* +0xd348d4 */ __asm { MOV R14D,0xa }
    /* +0xd348da */ __asm { CMOVNC R14,R11 }
    /* +0xd348de */ __asm { MOV RAX,0x7ffffffffffffffe }
    /* +0xd348e8 */ __asm { CMP R14,RAX }
    /* +0xd348eb */ __asm { CMOVNC R14,RAX }
    /* +0xd348ef */ __asm { LEA RAX,[0x2 + R14*0x2] }
    /* +0xd348f7 */ __asm { MOV R11,RAX }
    /* +0xd348fa */ __asm { SHL R11,0x3c }
    /* +0xd348fe */ __asm { XOR R11,RAX }
    /* +0xd34901 */ __asm { SHL RAX,0xe }
    /* +0xd34905 */ __asm { MOV R10,0x1865d799980f }
    /* +0xd3490f */ __asm { ADD R10,RAX }
    /* +0xd34912 */ __asm { ADD R10,R11 }
    /* +0xd34915 */ __asm { MOV R11D,0x217f5fbe }
    /* +0xd3491b */ __asm { ADD R11D,EBX }
    /* +0xd3491e */ __asm { XOR R11D,0xc669fdec }
    /* +0xd34925 */ __asm { MOVSXD RAX,R11D }
    /* +0xd34928 */ __asm { CALL R9 }
    /* +0xd3492b */ __asm { MOV R15,RCX }
    /* +0xd3492e */ __asm { ROL R15,0x2c }
    /* +0xd34932 */ __asm { MOV qword ptr [RBP + 0x58],R14 }
    /* +0xd34936 */ __asm { MOV qword ptr [RBP + 0x50],R12 }
    /* +0xd3493a */ __asm { MOV RAX,R15 }
    /* +0xd3493d */ __asm { SHL RAX,0x36 }
    /* +0xd34941 */ __asm { SUB R15,RAX }
    /* +0xd34944 */ __asm { MOV RCX,R15 }
    /* +0xd34947 */ __asm { MOV R8,RSI }
    /* +0xd3494a */ __asm { MOV RDX,qword ptr [RBP + 0xd8] }
    /* +0xd34951 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd34956 */ __asm { MOV word ptr [R15 + R12*0x2],0x0 }
    /* +0xd3495d */ __asm { MOV qword ptr [RBP + 0x40],R15 }
    /* +0xd34961 */ __asm { JMP 0x7fffa54a4e75 }
    /* +0xd34966 */ __asm { MOV R11D,0x9d0d7f73 }
    /* +0xd3496c */ __asm { IMUL R11D,R11D,-0x76a59dd7 }
    /* +0xd34973 */ __asm { ADD R11D,0x1b151fa3 }
    /* +0xd3497a */ __asm { MOVSXD RAX,R11D }
    /* +0xd3497d */ __asm { LEA RSI,[R12 + R12*0x1] }
    /* +0xd34981 */ __asm { MOV R11,R12 }
    /* +0xd34984 */ __asm { OR R11,0x7 }
    /* +0xd34988 */ __asm { CMP R11,0xb }
    /* +0xd3498c */ __asm { MOV EDI,0xa }
    /* +0xd34991 */ __asm { CMOVNC RDI,R11 }
    /* +0xd34995 */ __asm { MOV R11W,0xe0d2 }
    /* +0xd3499a */ __asm { XOR R11D,0xaca }
    /* +0xd349a1 */ __asm { MOV R10,qword ptr [RBP + 0xe8] }
    /* +0xd349a8 */ __asm { IMUL R10D,R11D }
    /* +0xd349ac */ __asm { MOVSX R9,R10W }
    /* +0xd349b0 */ __asm { LEA R11,[0x7fffa5270d38] }
    /* +0xd349b7 */ __asm { ADD R11,R9 }
    /* +0xd349ba */ __asm { MOV R9,0x7ffffffffffffffe }
    /* +0xd349c4 */ __asm { CMP RDI,R9 }
    /* +0xd349c7 */ __asm { CMOVNC RDI,R9 }
    /* +0xd349cb */ __asm { LEA R9,[0x2 + RDI*0x2] }
    /* +0xd349d3 */ __asm { MOV R8,R9 }
    /* +0xd349d6 */ __asm { SHL R8,0x3c }
    /* +0xd349da */ __asm { XOR R8,R9 }
    /* +0xd349dd */ __asm { SHL R9,0xe }
    /* +0xd349e1 */ __asm { MOV R10,0x1865d799980f }
    /* +0xd349eb */ __asm { ADD R10,R9 }
    /* +0xd349ee */ __asm { ADD R10,R8 }
    /* +0xd349f1 */ __asm { MOV R13,RDX }
    /* +0xd349f4 */ __asm { CALL R11 }
    /* +0xd349f7 */ __asm { MOV R15,RCX }
    /* +0xd349fa */ __asm { MOV qword ptr [RBP + 0xb0],R12 }
    /* +0xd34a01 */ __asm { MOV qword ptr [RBP + 0xb8],RDI }
    /* +0xd34a08 */ __asm { ROL R15,0x2c }
    /* +0xd34a0c */ __asm { MOV RAX,R15 }
    /* +0xd34a0f */ __asm { SHL RAX,0x36 }
    /* +0xd34a13 */ __asm { SUB R15,RAX }
    /* +0xd34a16 */ __asm { MOV qword ptr [RBP + 0xa0],R15 }
    /* +0xd34a1d */ __asm { MOV RCX,R15 }
    /* +0xd34a20 */ __asm { MOV R8,RSI }
    /* +0xd34a23 */ __asm { MOV RDX,R13 }
    /* +0xd34a26 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd34a2b */ __asm { MOV word ptr [R15 + R12*0x2],0x0 }
    /* +0xd34a32 */ __asm { LEA RAX,[0x7fffa5179d3e] }
    /* +0xd34a39 */ __asm { MOV RCX,0x1f36b4bc0d13e4e3 }
    /* +0xd34a43 */ __asm { MOV R9,-0x7c9a946e51875990 }
    /* +0xd34a4d */ __asm { MOV qword ptr [RBP + 0x68],R9 }
    /* +0xd34a51 */ __asm { MOV R10,0x1f6ab4830d2ce4bf }
    /* +0xd34a5b */ __asm { MOV qword ptr [RBP + 0x60],R10 }
    /* +0xd34a5f */ __asm { MOV R13,RDI }
    /* +0xd34a62 */ __asm { SUB R13,R12 }
    /* +0xd34a65 */ __asm { MOV R11W,0x7e16 }
    /* +0xd34a6a */ __asm { XOR R11D,0x3afa }
    /* +0xd34a71 */ __asm { ADD R11D,0xffff81aa }
    /* +0xd34a78 */ __asm { MOV R10D,EBX }
    /* +0xd34a7b */ __asm { XOR R10D,R11D }
    /* +0xd34a7e */ __asm { MOVSX R11,R10W }
    /* +0xd34a82 */ __asm { ADD R11,RAX }
    /* +0xd34a85 */ __asm { LEA R10,[RBP + 0x80] }
    /* +0xd34a8c */ __asm { MOVDQA XMM3,xmmword ptr [RBP + 0x60] }
    /* +0xd34a91 */ __asm { MOV qword ptr [RBP + 0x80],RCX }
    /* +0xd34a98 */ __asm { MOV qword ptr [RBP + 0x88],R9 }
    /* +0xd34a9f */ __asm { PXOR XMM3,xmmword ptr [R10] }
    /* +0xd34aa4 */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM3 }
    /* +0xd34aa9 */ __asm { LEA RBX,[RBP + 0x60] }
    /* +0xd34aad */ __asm { MOV RCX,RBX }
    /* +0xd34ab0 */ __asm { CALL R11 }
    /* +0xd34ab3 */ __asm { MOV R15,RAX }
    /* +0xd34ab6 */ __asm { CMP RAX,R13 }
    /* +0xd34ab9 */ __asm { JBE 0x7fffa54a4bc4 }
    /* +0xd34abf */ __asm { MOV RSI,0x7ffffffffffffffe }
    /* +0xd34ac9 */ __asm { MOV RAX,RSI }
    /* +0xd34acc */ __asm { SUB RAX,R12 }
    /* +0xd34acf */ __asm { CMP RAX,R15 }
    /* +0xd34ad2 */ __asm { JC 0x7fffa54a6ed1 }
    /* +0xd34ad8 */ __asm { LEA RBX,[R15 + R12*0x1] }
    /* +0xd34adc */ __asm { MOV RAX,RBX }
    /* +0xd34adf */ __asm { OR RAX,0x7 }
    /* +0xd34ae3 */ __asm { CMP RAX,RSI }
    /* +0xd34ae6 */ __asm { JA 0x7fffa54a4b06 }
    /* +0xd34ae8 */ __asm { MOV R9,RDI }
    /* +0xd34aeb */ __asm { SHR R9,0x1 }
    /* +0xd34aee */ __asm { MOV R11,RSI }
    /* +0xd34af1 */ __asm { SUB R11,R9 }
    /* +0xd34af4 */ __asm { CMP RDI,R11 }
    /* +0xd34af7 */ __asm { JA 0x7fffa54a4b06 }
    /* +0xd34af9 */ __asm { ADD R9,RDI }
    /* +0xd34afc */ __asm { CMP RAX,R9 }
    /* +0xd34aff */ __asm { CMOVA R9,RAX }
    /* +0xd34b03 */ __asm { MOV RSI,R9 }
    /* +0xd34b06 */ __asm { MOV R11W,0xe3e }
    /* +0xd34b0b */ __asm { MOV R13,qword ptr [RBP + 0xe0] }
    /* +0xd34b12 */ __asm { SUB R11D,R13D }
    /* +0xd34b15 */ __asm { MOV EAX,0x1989000e }
    /* +0xd34b1a */ __asm { ADD EAX,0xff4d9c1c }
    /* +0xd34b1f */ __asm { XOR EAX,R13D }
    /* +0xd34b22 */ __asm { CDQE }
    /* +0xd34b24 */ __asm { LEA R9,[0x7fffa5271cf5] }
    /* +0xd34b2b */ __asm { ADD R11D,0x205d }
    /* +0xd34b32 */ __asm { LEA R8,[0x2 + RSI*0x2] }
    /* +0xd34b3a */ __asm { MOV RCX,R8 }
    /* +0xd34b3d */ __asm { SHL RCX,0x3c }
    /* +0xd34b41 */ __asm { XOR RCX,R8 }
    /* +0xd34b44 */ __asm { SHL R8,0xe }
    /* +0xd34b48 */ __asm { MOV R10,0x1865d799980f }
    /* +0xd34b52 */ __asm { ADD R10,R8 }
    /* +0xd34b55 */ __asm { ADD R10,RCX }
    /* +0xd34b58 */ __asm { ROR R11W,0x1 }
    /* +0xd34b5c */ __asm { MOVSX R11,R11W }
    /* +0xd34b60 */ __asm { ADD R11,R9 }
    /* +0xd34b63 */ __asm { CALL R11 }
    /* +0xd34b66 */ __asm { MOV R14,RCX }
    /* +0xd34b69 */ __asm { ROL R14,0x2c }
    /* +0xd34b6d */ __asm { MOV RAX,R14 }
    /* +0xd34b70 */ __asm { SHL RAX,0x36 }
    /* +0xd34b74 */ __asm { SUB R14,RAX }
    /* +0xd34b77 */ __asm { MOV qword ptr [RBP + 0xb0],RBX }
    /* +0xd34b7e */ __asm { MOV qword ptr [RBP + 0xb8],RSI }
    /* +0xd34b85 */ __asm { LEA RSI,[R14 + R15*0x2] }
    /* +0xd34b89 */ __asm { CMP RDI,0x8 }
    /* +0xd34b8d */ __asm { JNC 0x7fffa54a4c3d }
    /* +0xd34b93 */ __asm { LEA RBX,[0x2 + R12*0x2] }
    /* +0xd34b9b */ __asm { ADD R15,R15 }
    /* +0xd34b9e */ __asm { LEA RDX,[RBP + 0x60] }
    /* +0xd34ba2 */ __asm { MOV RCX,R14 }
    /* +0xd34ba5 */ __asm { MOV R8,R15 }
    /* +0xd34ba8 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd34bad */ __asm { LEA RDX,[RBP + 0xa0] }
    /* +0xd34bb4 */ __asm { MOV RCX,RSI }
    /* +0xd34bb7 */ __asm { MOV R8,RBX }
    /* +0xd34bba */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd34bbf */ __asm { JMP 0x7fffa54a4cb8 }
    /* +0xd34bc4 */ __asm { CMP RDI,0x8 }
    /* +0xd34bc8 */ __asm { JC 0x7fffa54a4bd3 }
    /* +0xd34bca */ __asm { MOV RSI,qword ptr [RBP + 0xa0] }
    /* +0xd34bd1 */ __asm { JMP 0x7fffa54a4bda }
    /* +0xd34bd3 */ __asm { LEA RSI,[RBP + 0xa0] }
    /* +0xd34bda */ __asm { MOV R13,0x7fffffffffffffff }
    /* +0xd34be4 */ __asm { LEA RAX,[RSI + R12*0x2] }
    /* +0xd34be8 */ __asm { CMP RBX,RAX }
    /* +0xd34beb */ __asm { SETA R8B }
    /* +0xd34bef */ __asm { LEA RAX,[R12 + R15*0x1] }
    /* +0xd34bf3 */ __asm { MOV qword ptr [RBP + 0xb0],RAX }
    /* +0xd34bfa */ __asm { LEA RAX,[0x60 + R15*0x2] }
    /* +0xd34c02 */ __asm { ADD RAX,RBP }
    /* +0xd34c05 */ __asm { MOV R14,R15 }
    /* +0xd34c08 */ __asm { CMP RAX,RSI }
    /* +0xd34c0b */ __asm { JBE 0x7fffa54a4cce }
    /* +0xd34c11 */ __asm { TEST R8B,R8B }
    /* +0xd34c14 */ __asm { JNZ 0x7fffa54a4cce }
    /* +0xd34c1a */ __asm { MOV R14,RSI }
    /* +0xd34c1d */ __asm { SUB R14,RBX }
    /* +0xd34c20 */ __asm { JBE 0x7fffa54a4ccb }
    /* +0xd34c26 */ __asm { NOP }
    /* +0xd34c27 */ __asm { MOV RCX,0x0 }
    /* +0xd34c2e */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xd34c35 */ __asm { SAR R14,0x1 }
    /* +0xd34c38 */ __asm { JMP 0x7fffa54a4cce }
    /* +0xd34c3d */ __asm { MOV RDI,qword ptr [RBP + 0xa0] }
    /* +0xd34c44 */ __asm { MOV qword ptr [RBP + 0xd0],RDI }
    /* +0xd34c4b */ __asm { MOV EBX,0xfe07401e }
    /* +0xd34c50 */ __asm { LEA R12,[0x2 + R12*0x2] }
    /* +0xd34c58 */ __asm { MOV R11D,0xa4acd342 }
    /* +0xd34c5e */ __asm { ADD R11D,0x5b48a76d }
    /* +0xd34c65 */ __asm { MOV ECX,R13D }
    /* +0xd34c68 */ __asm { ROR R11D,CL }
    /* +0xd34c6b */ __asm { MOVSXD R13,R11D }
    /* +0xd34c6e */ __asm { ADD EBX,0x56698123 }
    /* +0xd34c74 */ __asm { IMUL EBX,dword ptr [RBP + 0xe8] }
    /* +0xd34c7b */ __asm { ADD R15,R15 }
    /* +0xd34c7e */ __asm { LEA RDX,[RBP + 0x60] }
    /* +0xd34c82 */ __asm { MOV RCX,R14 }
    /* +0xd34c85 */ __asm { MOV R8,R15 }
    /* +0xd34c88 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd34c8d */ __asm { MOV RCX,RSI }
    /* +0xd34c90 */ __asm { MOV R8,R12 }
    /* +0xd34c93 */ __asm { MOV RDX,qword ptr [RBP + 0xd0] }
    /* +0xd34c9a */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd34c9f */ __asm { MOV R8,RDI }
    /* +0xd34ca2 */ __asm { SHR R8,0x3d }
    /* +0xd34ca6 */ __asm { XOR R8,RDI }
    /* +0xd34ca9 */ __asm { LEA RAX,[0x7fffa5692486] }
    /* +0xd34cb0 */ __asm { ADD RAX,R13 }
    /* +0xd34cb3 */ __asm { MOV R11,RBX }
    /* +0xd34cb6 */ __asm { CALL RAX }
    /* +0xd34cb8 */ __asm { MOV R13,0x7fffffffffffffff }
    /* +0xd34cc2 */ __asm { MOV qword ptr [RBP + 0xa0],R14 }
    /* +0xd34cc9 */ __asm { JMP 0x7fffa54a4d18 }
    /* +0xd34ccb */ __asm { XOR R14D,R14D }
    /* +0xd34cce */ __asm { LEA RBX,[RAX + R14*0x2] }
    /* +0xd34cd2 */ __asm { LEA RDI,[RSI + R14*0x2] }
    /* +0xd34cd6 */ __asm { LEA RCX,[RSI + R15*0x2] }
    /* +0xd34cda */ __asm { SUB R15,R14 }
    /* +0xd34cdd */ __asm { ADD R14,R14 }
    /* +0xd34ce0 */ __asm { ADD R15,R15 }
    /* +0xd34ce3 */ __asm { LEA R8,[0x2 + R12*0x2] }
    /* +0xd34ceb */ __asm { MOV RDX,RSI }
    /* +0xd34cee */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd34cf3 */ __asm { LEA RDX,[RBP + 0x60] }
    /* +0xd34cf7 */ __asm { MOV RCX,RSI }
    /* +0xd34cfa */ __asm { MOV R8,R14 }
    /* +0xd34cfd */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd34d02 */ __asm { MOV RCX,RDI }
    /* +0xd34d05 */ __asm { MOV R8,R15 }
    /* +0xd34d08 */ __asm { MOV RDX,RBX }
    /* +0xd34d0b */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd34d10 */ __asm { MOVZX R14D,word ptr [RBP + 0xa0] }
    /* +0xd34d18 */ __asm { MOV RSI,qword ptr [RBP + 0xb8] }
    /* +0xd34d1f */ __asm { MOV R11W,0xc37 }
    /* +0xd34d24 */ __asm { IMUL R11D,R11D,-0x7a7d }
    /* +0xd34d2b */ __asm { MOV RAX,qword ptr [RBP + 0xa2] }
    /* +0xd34d32 */ __asm { MOV R9,qword ptr [RBP + 0xa8] }
    /* +0xd34d39 */ __asm { MOV qword ptr [RBP + 0x20],RAX }
    /* +0xd34d3d */ __asm { MOV qword ptr [RBP + 0x26],R9 }
    /* +0xd34d41 */ __asm { MOV RAX,qword ptr [RBP + 0x58] }
    /* +0xd34d45 */ __asm { MOV qword ptr [RBP + 0xb8],0x7 }
    /* +0xd34d50 */ __asm { MOV R15,qword ptr [RBP + 0xb0] }
    /* +0xd34d57 */ __asm { MOV RBX,qword ptr [RBP + 0xe0] }
    /* +0xd34d5e */ __asm { SUB R11D,EBX }
    /* +0xd34d61 */ __asm { ROL R11W,0x2 }
    /* +0xd34d66 */ __asm { MOV qword ptr [RBP + 0xb0],0x0 }
    /* +0xd34d71 */ __asm { MOVZX R10D,R11W }
    /* +0xd34d75 */ __asm { MOV word ptr [RBP + 0xa0],0x0 }
    /* +0xd34d7e */ __asm { CMP RAX,R10 }
    /* +0xd34d81 */ __asm { MOV RDI,qword ptr [RBP + 0xe8] }
    /* +0xd34d88 */ __asm { JBE 0x7fffa54a4e49 }
    /* +0xd34d8e */ __asm { MOV R11D,0xfdec327 }
    /* +0xd34d94 */ __asm { LEA RAX,[0x7fffa568ea8c] }
    /* +0xd34d9b */ __asm { MOV R9,qword ptr [RBP + 0x40] }
    /* +0xd34d9f */ __asm { MOV R10W,0xfda8 }
    /* +0xd34da4 */ __asm { IMUL R10D,R10D,0x271 }
    /* +0xd34dab */ __asm { MOV ECX,EBX }
    /* +0xd34dad */ __asm { ROR R10W,CL }
    /* +0xd34db1 */ __asm { ADD R10D,0xd32 }
    /* +0xd34db8 */ __asm { MOVSX R10,R10W }
    /* +0xd34dbc */ __asm { ADD R10,RAX }
    /* +0xd34dbf */ __asm { MOV R8,R9 }
    /* +0xd34dc2 */ __asm { SHR R8,0x3d }
    /* +0xd34dc6 */ __asm { XOR R8,R9 }
    /* +0xd34dc9 */ __asm { XOR R11D,0x544aff31 }
    /* +0xd34dd0 */ __asm { ROL R11D,CL }
    /* +0xd34dd3 */ __asm { CALL R10 }
    /* +0xd34dd6 */ __asm { MOV qword ptr [RBP + 0x50],R15 }
    /* +0xd34dda */ __asm { MOV word ptr [RBP + 0x40],R14W }
    /* +0xd34ddf */ __asm { MOV qword ptr [RBP + 0x58],RSI }
    /* +0xd34de3 */ __asm { CMP qword ptr [RBP + 0xb8],0x8 }
    /* +0xd34deb */ __asm { MOV RAX,qword ptr [RBP + 0x20] }
    /* +0xd34def */ __asm { MOV R9,qword ptr [RBP + 0x26] }
    /* +0xd34df3 */ __asm { MOV qword ptr [RBP + 0x42],RAX }
    /* +0xd34df7 */ __asm { MOV qword ptr [RBP + 0x48],R9 }
    /* +0xd34dfb */ __asm { JC 0x7fffa54a4e75 }
    /* +0xd34dfd */ __asm { MOV R11D,0xf41245eb }
    /* +0xd34e03 */ __asm { LEA RAX,[0x7fffa568d1df] }
    /* +0xd34e0a */ __asm { MOV R10W,0x207a }
    /* +0xd34e0f */ __asm { ADD R10D,EBX }
    /* +0xd34e12 */ __asm { XOR R10D,0x99cf }
    /* +0xd34e19 */ __asm { MOVSX R9,R10W }
    /* +0xd34e1d */ __asm { ADD R9,RAX }
    /* +0xd34e20 */ __asm { MOV RAX,qword ptr [RBP + 0xa0] }
    /* +0xd34e27 */ __asm { MOV R8,RAX }
    /* +0xd34e2a */ __asm { SHR R8,0x3d }
    /* +0xd34e2e */ __asm { XOR R8,RAX }
    /* +0xd34e31 */ __asm { IMUL R11D,R11D,-0x5ba18bf3 }
    /* +0xd34e38 */ __asm { XOR R11D,0xbf7234f9 }
    /* +0xd34e3f */ __asm { MOV ECX,EBX }
}


// ============================================================================
// Function : Unwind@7fffa54aaaa0  |  RVA: 0xd3aaa0  |  Size: 161 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54aaaa0(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x138)) {
    uVar1 = (uint16_t)*(uint64_t *)(param_2 + 0x160) ^ 0x6f5;
    (*(code *)(&UNK_7fffa568ab1b + (short)(uVar1 << 8 | uVar1 >> 8)))
              (param_1,param_2,
               *(uint64_t *)(param_2 + 0x120) >> 0x3d ^ *(uint64_t *)(param_2 + 0x120));
  }
  *(uint16_t *)(param_2 + 0x120) = 0;
  *(uint64_t *)(param_2 + 0x138) = 7;
  *(uint64_t *)(param_2 + 0x130) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa54aab50  |  RVA: 0xd3ab50  |  Size: 170 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54aab50(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x118)) {
    (*(code *)(&UNK_7fffa56900b5 +
              (int)~((int)*(uint64_t *)(param_2 + 0x150) + 0x73b8d686U ^
                    *(uint32_t *)(param_2 + 0x160))))
              (*(uint64_t *)(param_2 + 0x150),param_2,
               *(uint64_t *)(param_2 + 0x100) >> 0x3d ^ *(uint64_t *)(param_2 + 0x100));
  }
  *(uint64_t *)(param_2 + 0x118) = 7;
  *(uint64_t *)(param_2 + 0x110) = 0;
  *(uint16_t *)(param_2 + 0x100) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa54aac00  |  RVA: 0xd3ac00  |  Size: 149 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54aac00(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x138)) {
    (*(code *)((int64_t)(int)((uint32_t)*(uint64_t *)(param_2 + 0x160) ^ 0x215f57d1) + 0x7fffa569373b
              ))(param_1,param_2,
                 *(uint64_t *)(param_2 + 0x120) >> 0x3d ^ *(uint64_t *)(param_2 + 0x120));
  }
  *(uint16_t *)(param_2 + 0x120) = 0;
  *(uint64_t *)(param_2 + 0x130) = 0;
  *(uint64_t *)(param_2 + 0x138) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa54aaca0  |  RVA: 0xd3aca0  |  Size: 116 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54aaca0(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0xd8)) {
    uVar1 = (short)*(uint64_t *)(param_2 + 0x160) + 0x4573;
    (*(code *)((int64_t)(short)(uVar1 * 0x2000 | uVar1 >> 3) + 0x7fffa568911e))
              (*(uint64_t *)(param_2 + 0x160),param_2,
               *(uint64_t *)(param_2 + 0xc0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xc0));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa54aad20  |  RVA: 0xd3ad20  |  Size: 2083 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int64_t FUN_7fffa54aad20(int64_t param_1,int64_t param_2,uint32_t param_3,uint64_t param_4,
                         uint32_t param_5)

{
  uint16_t uVar1;
  short sVar2;
  uint8_t bVar3;
  int64_t lVar4;
  uint32_t in_EAX;
  uint32_t uVar5;
  int64_t lVar6;
  uint16_t uVar7;
  int iVar8;
  int64_t lVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint32_t uVar14;
  uint16_t *puVar15;
  uint64_t uVar16;
  uint32_t uVar17;
  uint8_t uVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint64_t uVar21;
  int64_t *plVar22;
  int iVar23;
  uint16_t *in_R11;
  uint32_t uVar24;
  uint64_t uVar25;
  int64_t lVar26;
  int iVar27;
  uint64_t uVar28;
  uint8_t auVar29 [16];
  
  param_4 = param_4 * 2 ^ param_4;
  param_4 = param_4 * 4 ^ param_4;
  uVar10 = 1 << ((uint8_t)in_EAX & 0x1f);
  uVar28 = (param_1 << 0x24) + param_1;
  uVar24 = param_3 + 2;
  uVar11 = (uint64_t)uVar24;
  param_4 = param_4 << 4 ^ param_4;
  param_4 = param_4 << 8 ^ param_4;
  param_4 = param_4 << 0x10 ^ param_4;
  uVar28 = (uVar28 * 0x10 | uVar28 >> 0x3c) ^ (uVar28 >> 1 | (uint64_t)((uVar28 & 1) != 0) << 0x3f)
           ^ uVar28;
  uVar28 = (uVar28 << 8 | uVar28 >> 0x38) ^ (uVar28 << 0x3e | uVar28 >> 2) ^ uVar28;
  uVar28 = (uVar28 << 0x3c | uVar28 >> 4) ^ (uVar28 << 0x10 | uVar28 >> 0x30) ^ uVar28;
  uVar28 = (uVar28 << 0x38 | uVar28 >> 8) ^ (uVar28 << 0x20 | uVar28 >> 0x20) ^ uVar28;
  puVar15 = (uint16_t *)(uVar28 << 0x10 | uVar28 >> 0x30);
  uVar28 = 0xffffffffffffffd4;
  if ((param_4 << 0x2f) + (param_4 << 0x20 ^ param_4) <
      ((1L << ((uint8_t)in_EAX & 0x3f)) + uVar11 & 0x1fffffffe) * 2 + 8) {
LAB_7fffa54aae4b:
    bVar3 = (uint8_t)param_5 & 0x1f;
    uVar25 = (uint64_t)((0xf2a1f58aU >> bVar3 | -0xd5e0a76 << 0x20 - bVar3) + 0xf15fd895);
    uVar16 = ~uVar25;
    uVar11 = ~(uint64_t)in_EAX;
    uVar12 = uVar11 | uVar16 & uVar28;
    uVar24 = param_5 | 1;
    uVar10 = uVar24 * 0x59640000 | uVar24 * -0x6d9829a7 >> 0xe;
    lVar26 = ((uVar12 >> 0x20) * (uint64_t)uVar10 << 0x20) +
             (uint64_t)uVar10 * (uVar12 & 0xffffffff);
    lVar6 = -lVar26;
    if (uVar24 * 0x3c7e8c03 <= 0xf16fa2b3 - param_5) {
      lVar6 = lVar26;
    }
    return lVar6 + ((uVar28 | uVar25) & (uint64_t)in_EAX) * -0x29495c10 +
                   ((~uVar28 | uVar16) ^ uVar11) * 0xd6a701ae;
  }
  uVar12 = (uint64_t)(uVar10 >> 1);
  iVar27 = (uVar10 >> 1) + (uVar10 >> 3) + 3;
  uVar17 = uVar10 - 1;
  *puVar15 = (short)in_EAX;
  puVar15[1] = (short)param_3;
  *in_R11 = 0;
  uVar28 = (uint64_t)uVar10;
  uVar7 = (uint16_t)uVar10;
  if (param_3 + 1 == 0) {
    *in_R11 = uVar7 | 1;
LAB_7fffa54ab26e:
    lVar6 = uVar28 + uVar11 * 2;
    uVar16 = 0;
    uVar24 = 0;
    do {
      uVar5 = uVar17 & uVar24;
      uVar14 = uVar24 + iVar27;
      uVar24 = uVar24 + iVar27 * 2 & uVar17;
      *(uint8_t *)((int64_t)in_R11 + (uint64_t)uVar5 + uVar11 * 2) =
           *(uint8_t *)((int64_t)in_R11 + uVar16 + lVar6);
      *(uint8_t *)((int64_t)in_R11 + (uint64_t)(uVar14 & uVar17) + uVar11 * 2) =
           *(uint8_t *)((int64_t)in_R11 + uVar16 + lVar6 + 1);
      uVar16 = uVar16 + 2;
    } while (uVar16 < uVar28);
  }
  else {
    uVar16 = 2;
    if (2 < uVar24) {
      uVar16 = (uint64_t)uVar24;
    }
    lVar6 = 0;
    uVar24 = uVar17;
    while( true ) {
      uVar1 = *(uint16_t *)(param_2 + lVar6 * 2);
      if ((-(uint32_t)uVar1 - 0x3ff7 & 0xffff) == 0xc00a) {
        uVar14 = uVar24 - 1;
        in_R11[lVar6 + 1] = in_R11[lVar6] + 1;
        uVar25 = (uint64_t)uVar24;
        uVar5 = 0xda525766 - uVar1;
        uVar24 = ~uVar24;
        if ((int64_t)(int)((uVar5 * 0x8000 | uVar5 >> 0x11) ^ param_5) <
            (int64_t)(uint64_t)(0xbc6e0c6 - param_5)) {
          uVar24 = uVar14;
        }
        *(char *)((int64_t)in_R11 + uVar25 + uVar11 * 2) = (char)lVar6;
      }
      else {
        in_R11[lVar6 + 1] = uVar1 + in_R11[lVar6];
      }
      if (uVar16 - 2 == lVar6) break;
      lVar6 = lVar6 + 1;
    }
    uVar16 = (uint64_t)(param_3 + 1);
    in_R11[uVar16] = uVar7 | 1;
    if (uVar24 == uVar17) {
      lVar20 = uVar11 * 2 + uVar28;
      uVar25 = 0;
      lVar6 = 0;
      lVar26 = 0;
      do {
        uVar1 = *(uint16_t *)(param_2 + uVar25 * 2);
        uVar19 = (uint64_t)uVar1;
        *(int64_t *)((int64_t)in_R11 + lVar6 + uVar28 + uVar11 * 2) = lVar26;
        if ((short)(((short)param_5 + 0xc362U ^ 0x3d8) + 0x6849) < (short)uVar1) {
          uVar13 = 0x10;
          if (0x10 < uVar19) {
            uVar13 = uVar19;
          }
          uVar21 = 8;
          if (0x17 < uVar13 - 9) {
            uVar13 = (uVar13 - 9 >> 3) + 1;
            uVar21 = uVar13 & 0xfffffffffffffffc;
            auVar29._8_4_ = (int)lVar26;
            auVar29._0_8_ = lVar26;
            auVar29._12_4_ = (int)((uint64_t)lVar26 >> 0x20);
            lVar4 = lVar6 + lVar20 + 0x18;
            lVar9 = 0;
            while( true ) {
              *(uint8_t (*) [16])((int64_t)in_R11 + lVar9 * 8 + lVar4) = auVar29;
              *(uint8_t (*) [16])((int64_t)in_R11 + lVar9 * 8 + lVar4 + -0x10) = auVar29;
              if (uVar21 - 4 == lVar9) break;
              lVar9 = lVar9 + 4;
            }
            if (uVar13 == uVar21) goto LAB_7fffa54ab4a6;
            uVar21 = uVar21 * 8 | 8;
          }
          plVar22 = (int64_t *)((int64_t)in_R11 + uVar21 + lVar6 + lVar20);
          while( true ) {
            uVar21 = uVar21 + 8;
            *plVar22 = lVar26;
            if (uVar19 <= uVar21) break;
            plVar22 = plVar22 + 1;
          }
        }
LAB_7fffa54ab4a6:
        uVar25 = uVar25 + 1;
        if (uVar25 == uVar16) goto LAB_7fffa54ab26e;
        lVar6 = lVar6 + (short)uVar1;
        lVar26 = lVar26 + 0x101010101010101;
      } while( true );
    }
    uVar19 = 0;
    uVar25 = 0;
    do {
      uVar1 = *(uint16_t *)(param_2 + uVar19 * 2);
      if (0 < (short)uVar1) {
        uVar18 = (uint8_t)uVar19;
        if (uVar1 != 1) {
          uVar14 = 0;
          do {
            *(uint8_t *)((int64_t)in_R11 + uVar25 + uVar11 * 2) = uVar18;
            do {
              uVar5 = (int)uVar25 + iVar27 & uVar17;
              uVar25 = (uint64_t)uVar5;
            } while (uVar24 < uVar5);
            *(uint8_t *)((int64_t)in_R11 + uVar25 + uVar11 * 2) = uVar18;
            do {
              uVar5 = (int)uVar25 + iVar27 & uVar17;
              uVar25 = (uint64_t)uVar5;
            } while (uVar24 < uVar5);
            uVar14 = uVar14 + 2;
          } while (uVar14 != (uVar1 & 0x7ffe));
          if ((uVar1 & 1) == 0) goto LAB_7fffa54ab1d0;
        }
        *(uint8_t *)((int64_t)in_R11 + uVar25 + uVar11 * 2) = uVar18;
        do {
          uVar14 = (int)uVar25 + iVar27 & uVar17;
          uVar25 = (uint64_t)uVar14;
        } while (uVar24 < uVar14);
      }
LAB_7fffa54ab1d0:
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar16);
  }
  uVar16 = 0;
  do {
    bVar3 = *(uint8_t *)((int64_t)in_R11 + uVar16 + uVar11 * 2);
    uVar1 = in_R11[bVar3];
    in_R11[bVar3] = uVar1 + 1;
    sVar2 = (short)uVar16;
    puVar15[(uint64_t)uVar1 + 2] = sVar2 + uVar7;
    bVar3 = *(uint8_t *)((int64_t)in_R11 + uVar16 + uVar11 * 2 + 1);
    uVar16 = uVar16 + 2;
    uVar1 = in_R11[bVar3];
    in_R11[bVar3] = uVar1 + 1;
    puVar15[(uint64_t)uVar1 + 2] = uVar7 + 1 + sVar2;
  } while (uVar28 != uVar16);
  iVar23 = in_EAX * 0x10000 - uVar10;
  uVar28 = 0;
  uVar10 = 1;
  iVar27 = 0;
  do {
    uVar11 = (uint64_t)(uVar10 - 1);
    sVar2 = *(short *)(param_2 + uVar11 * 2);
    uVar7 = (short)param_5 + 0x2efb;
    if (sVar2 < (short)(uVar7 * 0x200 | uVar7 >> 7)) {
      if (sVar2 == -1) goto LAB_7fffa54ab38c;
LAB_7fffa54ab3e7:
      uVar24 = (int)sVar2 - 1;
      iVar8 = 0x1f;
      if (uVar24 != 0) {
        for (; uVar24 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      *(uint32_t *)(puVar15 + uVar12 * 2 + uVar11 * 4 + 4) =
           (in_EAX - iVar8) * 0x10000 - ((int)sVar2 << ((uint8_t)(in_EAX - iVar8) & 0x1f));
      *(int *)(puVar15 + uVar12 * 2 + uVar11 * 4 + 2) = iVar27 - *(short *)(param_2 + uVar11 * 2);
      iVar27 = *(short *)(param_2 + uVar11 * 2) + iVar27;
    }
    else if (sVar2 < 1) {
      *(int *)(puVar15 + uVar12 * 2 + uVar11 * 4 + 4) = iVar23 + 0x10000;
    }
    else {
      if (sVar2 != 1) goto LAB_7fffa54ab3e7;
LAB_7fffa54ab38c:
      iVar8 = iVar27 + -1;
      *(int *)(puVar15 + uVar12 * 2 + uVar11 * 4 + 4) = iVar23;
      iVar27 = (uint32_t)(param_5 + 0x216e5b26 < (param_5 ^ 0x5fc5eddb)) + iVar27;
      *(int *)(puVar15 + uVar12 * 2 + uVar11 * 4 + 2) = iVar8;
    }
    if (param_3 < uVar10) goto LAB_7fffa54aae4b;
    uVar10 = uVar10 + 1;
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa54ab590  |  RVA: 0xd3b590  |  Size: 7065 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa54ac4a1) */
/* WARNING: Removing unreachable block (ram,0x7fffa54ac531) */
/* WARNING: Removing unreachable block (ram,0x7fffa54ac476) */
/* WARNING: Removing unreachable block (ram,0x7fffa54ac3a2) */
/* WARNING: Removing unreachable block (ram,0x7fffa54ac54c) */
/* WARNING: Removing unreachable block (ram,0x7fffa54ac50a) */
/* WARNING: Removing unreachable block (ram,0x7fffa54ac449) */
/* WARNING: Removing unreachable block (ram,0x7fffa54ac3ee) */
/* WARNING: Removing unreachable block (ram,0x7fffa54ac37f) */
/* WARNING: Removing unreachable block (ram,0x7fffa54ac35c) */
/* WARNING: Removing unreachable block (ram,0x7fffa54ac41d) */
/* WARNING: Removing unreachable block (ram,0x7fffa54ac4c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa54ab590(int64_t param_1,int64_t param_2,char *param_3,uint64_t param_4,
                     uint64_t param_5,int64_t param_6)

{
  uint32_t uVar1;
  uint8_t *pbVar2;
  int *piVar3;
  short *psVar4;
  uint8_t bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  char cVar22;
  char cVar21;
  char cVar20;
  char cVar19;
  char cVar30;
  char cVar29;
  char cVar28;
  char cVar27;
  char cVar26;
  char cVar25;
  char cVar24;
  char cVar23;
  char cVar33;
  char cVar32;
  char cVar31;
  bool bVar34;
  uint8_t bVar35;
  uint32_t uVar36;
  uint32_t uVar37;
  uint32_t uVar38;
  int64_t lVar39;
  uint8_t bVar40;
  uint8_t bVar41;
  uint64_t uVar42;
  uint32_t uVar43;
  uint64_t uVar44;
  uint64_t uVar45;
  int64_t lVar46;
  uint64_t uVar47;
  uint32_t uVar48;
  uint64_t uVar49;
  uint8_t *pbVar50;
  uint64_t uVar51;
  char *pcVar52;
  uint32_t uVar53;
  uint32_t uVar54;
  uint64_t uVar55;
  uint32_t uVar56;
  uint32_t uVar57;
  uint64_t in_R10;
  int64_t lVar58;
  char cVar59;
  int in_R11D;
  uint32_t uVar60;
  uint64_t uVar61;
  uint32_t uVar62;
  uint64_t uVar63;
  short sVar64;
  uint32_t uVar65;
  undefined6 uVar66;
  uint8_t auVar67 [16];
  uint8_t auVar68 [16];
  uint8_t auVar69 [16];
  uint8_t auVar70 [16];
  uint8_t auVar71 [16];
  uint8_t auVar72 [16];
  uint8_t auVar73 [16];
  uint8_t auVar74 [16];
  uint8_t auVar75 [16];
  int iVar76;
  int iVar78;
  int iVar79;
  int iVar80;
  uint8_t auVar77 [16];
  int iVar81;
  int iVar83;
  int iVar84;
  int iVar85;
  uint8_t auVar82 [16];
  int iVar86;
  int iVar89;
  int iVar90;
  int iVar91;
  uint8_t auVar87 [16];
  uint8_t auVar88 [16];
  int iVar92;
  int iVar95;
  int iVar96;
  int iVar97;
  uint8_t auVar93 [16];
  uint8_t auVar94 [16];
  uint8_t auVar98 [16];
  uint8_t auVar99 [16];
  short sVar100;
  uint64_t uVar101;
  uint8_t auVar102 [12];
  uint8_t auVar103 [14];
  short sVar104;
  uint32_t uVar105;
  undefined6 uVar106;
  uint64_t uVar107;
  uint8_t auVar108 [12];
  uint8_t auVar109 [14];
  uint32_t uStack_128;
  
  param_1 = param_1 + 0x362c4f1f;
  uVar62 = (uint32_t)param_6;
  param_5 = (param_5 << 0x30 | param_5 >> 0x10) ^ (param_5 << 0x18 | param_5 >> 0x28) ^ param_5;
  param_5 = (param_5 << 0x30 | param_5 >> 0x10) ^ (param_5 << 0x20 | param_5 >> 0x20) ^ param_5;
  uVar51 = 0;
  if (uVar62 + 0x49bc76e6 < 0x9f19eeaa) {
    uVar51 = param_5 << 0x20 | param_5 >> 0x20;
  }
  uVar44 = (uint64_t)(-(int)param_1 & 3);
  if (uVar51 - uVar44 < 0x2ec) {
    return;
  }
  uVar56 = (uint32_t)param_4;
  if ((uVar62 + 0x787fea4 & 0xffff) < uVar56) {
    return;
  }
  uVar51 = param_1 + uVar44;
  uVar43 = in_R11D + 1;
  lVar58 = uVar51 + 0x1e0;
  *(uint8_t *)(uVar51 + 0x1e0) = 0;
  auVar87 = _PTR_DAT_7fffa56bc2c0;
  if (1 < uVar43) {
    uVar45 = 1;
    if (4 < uVar43) {
      uVar49 = (uint64_t)uVar43 - 1;
      if (uVar43 < 0x11) {
        uVar63 = 0;
      }
      else {
        uVar63 = uVar49 & 0xfffffffffffffff0;
        iVar92 = 0xd;
        iVar95 = 0xe;
        iVar96 = 0xf;
        iVar97 = 0x10;
        iVar76 = 9;
        iVar78 = 10;
        iVar79 = 0xb;
        iVar80 = 0xc;
        iVar86 = 5;
        iVar89 = 6;
        iVar90 = 7;
        iVar91 = 8;
        iVar81 = 1;
        iVar83 = 2;
        iVar84 = 3;
        iVar85 = 4;
        lVar46 = 0;
        while( true ) {
          auVar71._0_4_ = uVar43 - iVar92;
          auVar71._4_4_ = uVar43 - iVar95;
          auVar71._8_4_ = uVar43 - iVar96;
          auVar71._12_4_ = uVar43 - iVar97;
          auVar68._0_4_ = uVar43 - iVar76;
          auVar68._4_4_ = uVar43 - iVar78;
          auVar68._8_4_ = uVar43 - iVar79;
          auVar68._12_4_ = uVar43 - iVar80;
          auVar93._0_4_ = uVar43 - iVar86;
          auVar93._4_4_ = uVar43 - iVar89;
          auVar93._8_4_ = uVar43 - iVar90;
          auVar93._12_4_ = uVar43 - iVar91;
          auVar82._0_4_ = uVar43 - iVar81;
          auVar82._4_4_ = uVar43 - iVar83;
          auVar82._8_4_ = uVar43 - iVar84;
          auVar82._12_4_ = uVar43 - iVar85;
          auVar82 = auVar82 & auVar87;
          auVar93 = auVar93 & auVar87;
          sVar6 = auVar82._0_2_;
          cVar59 = (0 < sVar6) * (sVar6 < 0x100) * auVar82[0] - (0xff < sVar6);
          sVar6 = auVar82._2_2_;
          sVar104 = CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar82[2] - (0xff < sVar6),cVar59);
          sVar6 = auVar82._4_2_;
          cVar31 = (0 < sVar6) * (sVar6 < 0x100) * auVar82[4] - (0xff < sVar6);
          sVar6 = auVar82._6_2_;
          uVar105 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar82[6] - (0xff < sVar6),
                             CONCAT12(cVar31,sVar104));
          sVar6 = auVar82._8_2_;
          cVar32 = (0 < sVar6) * (sVar6 < 0x100) * auVar82[8] - (0xff < sVar6);
          sVar6 = auVar82._10_2_;
          uVar106 = CONCAT15((0 < sVar6) * (sVar6 < 0x100) * auVar82[10] - (0xff < sVar6),
                             CONCAT14(cVar32,uVar105));
          sVar6 = auVar82._12_2_;
          cVar33 = (0 < sVar6) * (sVar6 < 0x100) * auVar82[0xc] - (0xff < sVar6);
          sVar6 = auVar82._14_2_;
          uVar107 = CONCAT17((0 < sVar6) * (sVar6 < 0x100) * auVar82[0xe] - (0xff < sVar6),
                             CONCAT16(cVar33,uVar106));
          sVar6 = auVar93._0_2_;
          cVar19 = (0 < sVar6) * (sVar6 < 0x100) * auVar93[0] - (0xff < sVar6);
          sVar6 = auVar93._2_2_;
          auVar108._0_10_ =
               CONCAT19((0 < sVar6) * (sVar6 < 0x100) * auVar93[2] - (0xff < sVar6),
                        CONCAT18(cVar19,uVar107));
          sVar6 = auVar93._4_2_;
          cVar20 = (0 < sVar6) * (sVar6 < 0x100) * auVar93[4] - (0xff < sVar6);
          auVar108[10] = cVar20;
          sVar6 = auVar93._6_2_;
          auVar108[0xb] = (0 < sVar6) * (sVar6 < 0x100) * auVar93[6] - (0xff < sVar6);
          sVar6 = auVar93._8_2_;
          cVar21 = (0 < sVar6) * (sVar6 < 0x100) * auVar93[8] - (0xff < sVar6);
          auVar109[0xc] = cVar21;
          auVar109._0_12_ = auVar108;
          sVar6 = auVar93._10_2_;
          auVar109[0xd] = (0 < sVar6) * (sVar6 < 0x100) * auVar93[10] - (0xff < sVar6);
          sVar6 = auVar93._12_2_;
          cVar22 = (0 < sVar6) * (sVar6 < 0x100) * auVar93[0xc] - (0xff < sVar6);
          auVar98[0xe] = cVar22;
          auVar98._0_14_ = auVar109;
          sVar6 = auVar93._14_2_;
          auVar98[0xf] = (0 < sVar6) * (sVar6 < 0x100) * auVar93[0xe] - (0xff < sVar6);
          auVar68 = auVar68 & auVar87;
          auVar71 = auVar71 & auVar87;
          sVar6 = auVar68._0_2_;
          cVar23 = (0 < sVar6) * (sVar6 < 0x100) * auVar68[0] - (0xff < sVar6);
          sVar6 = auVar68._2_2_;
          sVar100 = CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar68[2] - (0xff < sVar6),cVar23);
          sVar6 = auVar68._4_2_;
          cVar24 = (0 < sVar6) * (sVar6 < 0x100) * auVar68[4] - (0xff < sVar6);
          sVar6 = auVar68._6_2_;
          uVar65 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar68[6] - (0xff < sVar6),
                            CONCAT12(cVar24,sVar100));
          sVar6 = auVar68._8_2_;
          cVar25 = (0 < sVar6) * (sVar6 < 0x100) * auVar68[8] - (0xff < sVar6);
          sVar6 = auVar68._10_2_;
          uVar66 = CONCAT15((0 < sVar6) * (sVar6 < 0x100) * auVar68[10] - (0xff < sVar6),
                            CONCAT14(cVar25,uVar65));
          sVar6 = auVar68._12_2_;
          cVar26 = (0 < sVar6) * (sVar6 < 0x100) * auVar68[0xc] - (0xff < sVar6);
          sVar6 = auVar68._14_2_;
          uVar101 = CONCAT17((0 < sVar6) * (sVar6 < 0x100) * auVar68[0xe] - (0xff < sVar6),
                             CONCAT16(cVar26,uVar66));
          sVar6 = auVar71._0_2_;
          cVar27 = (0 < sVar6) * (sVar6 < 0x100) * auVar71[0] - (0xff < sVar6);
          sVar6 = auVar71._2_2_;
          auVar102._0_10_ =
               CONCAT19((0 < sVar6) * (sVar6 < 0x100) * auVar71[2] - (0xff < sVar6),
                        CONCAT18(cVar27,uVar101));
          sVar6 = auVar71._4_2_;
          cVar28 = (0 < sVar6) * (sVar6 < 0x100) * auVar71[4] - (0xff < sVar6);
          auVar102[10] = cVar28;
          sVar6 = auVar71._6_2_;
          auVar102[0xb] = (0 < sVar6) * (sVar6 < 0x100) * auVar71[6] - (0xff < sVar6);
          sVar6 = auVar71._8_2_;
          cVar29 = (0 < sVar6) * (sVar6 < 0x100) * auVar71[8] - (0xff < sVar6);
          auVar103[0xc] = cVar29;
          auVar103._0_12_ = auVar102;
          sVar6 = auVar71._10_2_;
          auVar103[0xd] = (0 < sVar6) * (sVar6 < 0x100) * auVar71[10] - (0xff < sVar6);
          sVar6 = auVar71._12_2_;
          cVar30 = (0 < sVar6) * (sVar6 < 0x100) * auVar71[0xc] - (0xff < sVar6);
          auVar77[0xe] = cVar30;
          auVar77._0_14_ = auVar103;
          sVar6 = auVar71._14_2_;
          auVar77[0xf] = (0 < sVar6) * (sVar6 < 0x100) * auVar71[0xe] - (0xff < sVar6);
          sVar6 = (short)((uint32_t)uVar105 >> 0x10);
          sVar7 = (short)((uint6)uVar106 >> 0x20);
          sVar8 = (short)((uint64_t)uVar107 >> 0x30);
          sVar64 = (short)((unkuint10)auVar108._0_10_ >> 0x40);
          sVar9 = auVar108._10_2_;
          sVar10 = auVar109._12_2_;
          sVar11 = auVar98._14_2_;
          sVar12 = (short)((uint32_t)uVar65 >> 0x10);
          sVar13 = (short)((uint6)uVar66 >> 0x20);
          sVar14 = (short)((uint64_t)uVar101 >> 0x30);
          sVar15 = (short)((unkuint10)auVar102._0_10_ >> 0x40);
          sVar16 = auVar102._10_2_;
          sVar17 = auVar103._12_2_;
          sVar18 = auVar77._14_2_;
          pcVar52 = (char *)(param_1 + uVar44 + 0x1e1 + lVar46);
          *pcVar52 = (0 < sVar104) * (sVar104 < 0x100) * cVar59 - (0xff < sVar104);
          pcVar52[1] = (0 < sVar6) * (sVar6 < 0x100) * cVar31 - (0xff < sVar6);
          pcVar52[2] = (0 < sVar7) * (sVar7 < 0x100) * cVar32 - (0xff < sVar7);
          pcVar52[3] = (0 < sVar8) * (sVar8 < 0x100) * cVar33 - (0xff < sVar8);
          pcVar52[4] = (0 < sVar64) * (sVar64 < 0x100) * cVar19 - (0xff < sVar64);
          pcVar52[5] = (0 < sVar9) * (sVar9 < 0x100) * cVar20 - (0xff < sVar9);
          pcVar52[6] = (0 < sVar10) * (sVar10 < 0x100) * cVar21 - (0xff < sVar10);
          pcVar52[7] = (0 < sVar11) * (sVar11 < 0x100) * cVar22 - (0xff < sVar11);
          pcVar52[8] = (0 < sVar100) * (sVar100 < 0x100) * cVar23 - (0xff < sVar100);
          pcVar52[9] = (0 < sVar12) * (sVar12 < 0x100) * cVar24 - (0xff < sVar12);
          pcVar52[10] = (0 < sVar13) * (sVar13 < 0x100) * cVar25 - (0xff < sVar13);
          pcVar52[0xb] = (0 < sVar14) * (sVar14 < 0x100) * cVar26 - (0xff < sVar14);
          pcVar52[0xc] = (0 < sVar15) * (sVar15 < 0x100) * cVar27 - (0xff < sVar15);
          pcVar52[0xd] = (0 < sVar16) * (sVar16 < 0x100) * cVar28 - (0xff < sVar16);
          pcVar52[0xe] = (0 < sVar17) * (sVar17 < 0x100) * cVar29 - (0xff < sVar17);
          pcVar52[0xf] = (0 < sVar18) * (sVar18 < 0x100) * cVar30 - (0xff < sVar18);
          if (uVar63 - 0x10 == lVar46) break;
          iVar81 = iVar81 + 0x10;
          iVar83 = iVar83 + 0x10;
          iVar84 = iVar84 + 0x10;
          iVar85 = iVar85 + 0x10;
          iVar86 = iVar86 + 0x10;
          iVar89 = iVar89 + 0x10;
          iVar90 = iVar90 + 0x10;
          iVar91 = iVar91 + 0x10;
          iVar76 = iVar76 + 0x10;
          iVar78 = iVar78 + 0x10;
          iVar79 = iVar79 + 0x10;
          iVar80 = iVar80 + 0x10;
          iVar92 = iVar92 + 0x10;
          iVar95 = iVar95 + 0x10;
          iVar96 = iVar96 + 0x10;
          iVar97 = iVar97 + 0x10;
          lVar46 = lVar46 + 0x10;
        }
        if (uVar49 == uVar63) goto LAB_7fffa54ab88f;
        uVar45 = uVar63 | 1;
        if ((uVar49 & 0xc) == 0) goto LAB_7fffa54ab875;
      }
      auVar87 = _PTR_DAT_7fffa56bc2c0;
      uVar61 = uVar49 & 0xfffffffffffffffc;
      iVar86 = (int)uVar45;
      iVar89 = iVar86 + 1;
      iVar90 = iVar86 + 2;
      iVar91 = iVar86 + 3;
      while( true ) {
        auVar67._0_4_ = uVar43 - iVar86;
        auVar67._4_4_ = uVar43 - iVar89;
        auVar67._8_4_ = uVar43 - iVar90;
        auVar67._12_4_ = uVar43 - iVar91;
        auVar67 = auVar67 & auVar87;
        sVar6 = auVar67._0_2_;
        cVar59 = (0 < sVar6) * (sVar6 < 0x100) * auVar67[0] - (0xff < sVar6);
        sVar6 = auVar67._2_2_;
        sVar64 = CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar67[2] - (0xff < sVar6),cVar59);
        sVar6 = auVar67._4_2_;
        cVar31 = (0 < sVar6) * (sVar6 < 0x100) * auVar67[4] - (0xff < sVar6);
        sVar6 = auVar67._6_2_;
        uVar65 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar67[6] - (0xff < sVar6),
                          CONCAT12(cVar31,sVar64));
        sVar6 = auVar67._8_2_;
        cVar32 = (0 < sVar6) * (sVar6 < 0x100) * auVar67[8] - (0xff < sVar6);
        sVar6 = auVar67._10_2_;
        uVar66 = CONCAT15((0 < sVar6) * (sVar6 < 0x100) * auVar67[10] - (0xff < sVar6),
                          CONCAT14(cVar32,uVar65));
        sVar6 = auVar67._12_2_;
        cVar33 = (0 < sVar6) * (sVar6 < 0x100) * auVar67[0xc] - (0xff < sVar6);
        sVar8 = auVar67._14_2_;
        sVar6 = (short)((uint32_t)uVar65 >> 0x10);
        sVar7 = (short)((uint6)uVar66 >> 0x20);
        sVar8 = (short)(CONCAT17((0 < sVar8) * (sVar8 < 0x100) * auVar67[0xe] - (0xff < sVar8),
                                 CONCAT16(cVar33,uVar66)) >> 0x30);
        *(uint32_t *)(param_1 + uVar44 + 0x1e1 + uVar63) =
             CONCAT13((0 < sVar8) * (sVar8 < 0x100) * cVar33 - (0xff < sVar8),
                      CONCAT12((0 < sVar7) * (sVar7 < 0x100) * cVar32 - (0xff < sVar7),
                               CONCAT11((0 < sVar6) * (sVar6 < 0x100) * cVar31 - (0xff < sVar6),
                                        (0 < sVar64) * (sVar64 < 0x100) * cVar59 - (0xff < sVar64)))
                     );
        if (uVar61 - 4 == uVar63) break;
        iVar86 = iVar86 + 4;
        iVar89 = iVar89 + 4;
        iVar90 = iVar90 + 4;
        iVar91 = iVar91 + 4;
        uVar63 = uVar63 + 4;
      }
      if (uVar49 == uVar61) goto LAB_7fffa54ab88f;
      uVar45 = uVar61 | 1;
    }
LAB_7fffa54ab875:
    cVar59 = ((char)in_R11D - (char)uVar45) + '\x01';
    do {
      *(char *)(lVar58 + uVar45) = cVar59;
      uVar45 = uVar45 + 1;
      cVar59 = cVar59 + -1;
    } while (uVar43 != uVar45);
  }
LAB_7fffa54ab88f:
  pbVar2 = (uint8_t *)(uVar51 + 0x1ed);
  bVar35 = (uint8_t)param_6;
  if (uVar56 == 0) {
    if ((-(int)uVar51 & 3U) != 0) {
      return;
    }
    uVar45 = 0;
  }
  else {
    uVar45 = param_4 & 0xffffffff;
    uVar49 = (uint64_t)(uVar56 & 3);
    if (uVar56 < 4) {
      uVar63 = 0;
    }
    else {
      lVar46 = param_1 + uVar44;
      uVar61 = 0;
      do {
        uVar63 = uVar61 + 4;
        *(uint8_t *)(lVar46 + 0x1ed + uVar61) =
             *(uint8_t *)(lVar58 + (uint64_t)*(uint8_t *)(param_2 + 8 + uVar61 * 8));
        pbVar2[uVar61 | 1] =
             *(uint8_t *)(lVar58 + (uint64_t)*(uint8_t *)(param_2 + 8 + (uVar61 | 1) * 8));
        *(uint8_t *)(lVar46 + 0x1ef + uVar61) =
             *(uint8_t *)(lVar58 + (uint64_t)*(uint8_t *)(param_2 + 0x18 + uVar61 * 8));
        *(uint8_t *)(lVar46 + 0x1f0 + uVar61) =
             *(uint8_t *)(lVar58 + (uint64_t)*(uint8_t *)(param_2 + 0x20 + uVar61 * 8));
        uVar61 = uVar63;
      } while ((uVar56 & 0xfc) != uVar63);
    }
    if ((param_4 & 3) != 0) {
      do {
        uVar61 = uVar63 + 1;
        pbVar2[uVar63] =
             *(uint8_t *)(lVar58 + (*(uint64_t *)(param_2 + 8 + uVar63 * 8) & SUB168(ZEXT416(0xff),0))
                      );
        uVar63 = (uint64_t)((uint32_t)uVar63 & 1);
        if (uVar62 + 0xf3e789b < uVar62 + 0xbe61505b) {
          uVar63 = uVar61;
        }
        uVar49 = uVar49 - 1;
      } while (uVar49 != 0);
    }
    if ((-(int)uVar51 & 3U) != 0) {
      return;
    }
    pcVar52 = param_3 + 1;
    bVar34 = uVar56 != 1;
    if ((uint64_t)((uVar62 + 0x8cf23ab7) * 0x800 | uVar62 + 0x8cf23ab7 >> 0x15) <=
        (uint64_t)(int64_t)(int)((0xbb44cc46 - uVar62) * 0x4000000 | 0xbb44cc46 - uVar62 >> 6)) {
      bVar34 = uVar56 == (0x25c - uVar62 & 0xffff);
    }
    if (!bVar34) {
      lVar58 = uVar51 + 400;
      *(uint8_t (*) [16])(uVar51 + 0x1b0) = (uint8_t  [16])0x0;
      *(uint8_t (*) [16])(uVar51 + 0x1a0) = (uint8_t  [16])0x0;
      *(uint8_t (*) [16])(uVar51 + 400) = (uint8_t  [16])0x0;
      *(uint32_t *)(uVar51 + 0x1c0) = 0;
      pbVar50 = pbVar2;
      do {
        bVar41 = *pbVar50;
        pbVar50 = pbVar50 + 1;
        piVar3 = (int *)(lVar58 + (uint64_t)bVar41 * 4);
        *piVar3 = *piVar3 + 1;
      } while (pbVar50 < pbVar2 + uVar45);
      uVar43 = 0xd;
      while( true ) {
        uVar49 = (uint64_t)(uVar43 - 1);
        if (*(uint32_t *)(lVar58 + uVar49 * 4) != (0xd906025b - uVar62 & 0xffff)) break;
        uVar43 = uVar43 - 1;
      }
      uVar1 = uVar43 - 1;
      if (uVar1 < 7) {
        uVar63 = 0;
        uVar36 = 0;
LAB_7fffa54abc47:
        uVar63 = uVar63 - 1;
        do {
          uVar38 = *(uint32_t *)(uVar51 + 0x194 + uVar63 * 4);
          if (uVar36 < uVar38) {
            uVar36 = uVar38;
          }
          uVar63 = uVar63 + 1;
        } while (uVar63 < uVar49);
      }
      else {
        uVar63 = uVar49 + 1 & 0xfffffffffffffff8;
        auVar87 = (uint8_t  [16])0x0;
        lVar46 = 0;
        auVar93 = (uint8_t  [16])0x0;
        while( true ) {
          auVar82 = auVar87 ^ _DAT_7fffa56b26a0;
          auVar68 = *(uint8_t (*) [16])(uVar44 + param_1 + 400 + lVar46 * 4);
          auVar77 = *(uint8_t (*) [16])(uVar44 + param_1 + 0x1a0 + lVar46 * 4);
          auVar98 = auVar68 ^ _DAT_7fffa56b26a0;
          auVar99._0_4_ = -(uint32_t)(auVar82._0_4_ < auVar98._0_4_);
          auVar99._4_4_ = -(uint32_t)(auVar82._4_4_ < auVar98._4_4_);
          auVar99._8_4_ = -(uint32_t)(auVar82._8_4_ < auVar98._8_4_);
          auVar99._12_4_ = -(uint32_t)(auVar82._12_4_ < auVar98._12_4_);
          auVar87 = ~auVar99 & auVar87 | auVar68 & auVar99;
          auVar82 = auVar93 ^ _DAT_7fffa56b26a0;
          auVar68 = auVar77 ^ _DAT_7fffa56b26a0;
          auVar69._0_4_ = -(uint32_t)(auVar82._0_4_ < auVar68._0_4_);
          auVar69._4_4_ = -(uint32_t)(auVar82._4_4_ < auVar68._4_4_);
          auVar69._8_4_ = -(uint32_t)(auVar82._8_4_ < auVar68._8_4_);
          auVar69._12_4_ = -(uint32_t)(auVar82._12_4_ < auVar68._12_4_);
          auVar93 = ~auVar69 & auVar93 | auVar77 & auVar69;
          if (((uint64_t)uVar1 + 1 & 0xfffffffffffffff8) - 8 == lVar46) break;
          lVar46 = lVar46 + 8;
        }
        auVar77 = auVar93 ^ _DAT_7fffa56b26a0;
        auVar68 = auVar87 ^ _DAT_7fffa56b26a0;
        auVar70._0_4_ = -(uint32_t)(auVar77._0_4_ < auVar68._0_4_);
        auVar70._4_4_ = -(uint32_t)(auVar77._4_4_ < auVar68._4_4_);
        auVar70._8_4_ = -(uint32_t)(auVar77._8_4_ < auVar68._8_4_);
        auVar70._12_4_ = -(uint32_t)(auVar77._12_4_ < auVar68._12_4_);
        auVar87 = ~auVar70 & auVar93 | auVar87 & auVar70;
        auVar88._0_8_ = auVar87._8_8_;
        auVar88._8_4_ = auVar87._8_4_;
        auVar88._12_4_ = auVar87._12_4_;
        auVar68 = auVar87 ^ _DAT_7fffa56b26a0;
        auVar93 = auVar88 ^ _DAT_7fffa56b26a0;
        auVar94._0_4_ = -(uint32_t)(auVar93._0_4_ < auVar68._0_4_);
        auVar94._4_4_ = -(uint32_t)(auVar93._4_4_ < auVar68._4_4_);
        auVar94._8_4_ = -(uint32_t)(auVar93._8_4_ < auVar68._8_4_);
        auVar94._12_4_ = -(uint32_t)(auVar93._12_4_ < auVar68._12_4_);
        auVar87 = ~auVar94 & auVar88 | auVar87 & auVar94;
        uVar48 = auVar87._4_4_;
        uVar36 = auVar87._0_4_;
        uVar38 = -(uint32_t)((int)((uint32_t)DAT_7fffa56b26a0 ^ uVar48) <
                        (int)(uVar36 ^ (uint32_t)DAT_7fffa56b26a0));
        uVar36 = ~uVar38 & uVar48 | uVar36 & uVar38;
        if (uVar49 + 1 != uVar63) goto LAB_7fffa54abc47;
      }
      if (uVar36 != 1 && uVar56 != uVar36) {
        iVar86 = 0x1f;
        if (uVar56 - 1 != 0) {
          for (; uVar56 - 1 >> iVar86 == 0; iVar86 = iVar86 + -1) {
          }
        }
        uVar36 = iVar86 - 2;
        if (5 < uVar36) {
          uVar36 = 6;
        }
        iVar86 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> iVar86 == 0; iVar86 = iVar86 + -1) {
          }
        }
        uStack_128 = uVar62 | 1;
        iVar89 = 0x1f;
        if (uVar56 != 0) {
          for (; uVar56 >> iVar89 == 0; iVar89 = iVar89 + -1) {
          }
        }
        uVar38 = iVar89 + 1U;
        if (iVar86 + 2U <= iVar89 + 1U) {
          uVar38 = iVar86 + 2U;
        }
        if (~((uVar62 | 1) * -0x49300000 | (uVar62 | 1) * 0x5022db6d >> 0xc) < 0x47a640d0 - uVar62)
        {
          uVar36 = 6;
        }
        if (uVar36 < uVar38) {
          uVar36 = uVar38;
        }
        uVar48 = 5;
        if (5 < uVar36) {
          uVar48 = uVar36;
        }
        uVar36 = 0xc;
        if (uVar48 < 0xc) {
          uVar36 = uVar48;
        }
        if (uVar36 < uVar38) {
          return;
        }
        bVar40 = (uint8_t)uVar36;
        uVar60 = uVar56 >> (bVar40 & 0x1f);
        lVar46 = uVar51 + 0x1c4;
        uVar48 = 1;
        iVar89 = 1 << (bVar40 & 0x1f);
        uVar36 = 0;
        cVar59 = -bVar40;
        bVar41 = cVar59 + 0x3e;
        uVar38 = 0;
        iVar86 = iVar89;
        while( true ) {
          uVar49 = (uint64_t)(uVar48 - 1);
          uVar37 = *(uint32_t *)(lVar58 + uVar49 * 4);
          if (uVar56 == uVar37) break;
          if ((uint64_t)uVar37 == 0) {
            *(uint16_t *)(lVar46 + uVar49 * 2) = 0;
          }
          else if (uVar60 < uVar37) {
            uVar61 = (uint64_t)uVar37 * (0x4000000000000000 / uVar45);
            uVar63 = uVar61 >> (bVar41 & 0x3f);
            uVar37 = (uint32_t)uVar63;
            if ((uVar63 & 0xfff8) == 0) {
              uVar37 = uVar37 + ((uint64_t)
                                 *(uint32_t *)((int64_t)(int)(uStack_128 * 0x5a6d87e5) + 0x7fffa586da49
                                          + (uVar63 & 0xffff) * 4) << (cVar59 + 0x2aU & 0x3f) <
                                uVar61 - ((uVar63 & 0xffff) << (bVar41 & 0x3f)));
            }
            if ((uint16_t)uVar36 < (uint16_t)uVar37) {
              uVar38 = uVar48 - 1;
              uVar36 = uVar37;
            }
            *(uint16_t *)(lVar46 + uVar49 * 2) = (uint16_t)uVar37;
            iVar86 = iVar86 - (uVar37 & 0xffff);
          }
          else {
            *(uint16_t *)(lVar46 + uVar49 * 2) = 1;
            iVar86 = iVar86 + -1;
          }
          if (uVar1 < uVar48) {
            sVar6 = *(short *)(lVar46 + (uint64_t)uVar38 * 2);
            if (-iVar86 < (int)sVar6 >> 1) {
              *(short *)(lVar46 + (uint64_t)uVar38 * 2) = sVar6 + (short)iVar86;
            }
            else {
              uVar63 = uVar45 * 3 >> (bVar40 + 1 & 0x3f);
              lVar39 = 0;
              uVar36 = 0;
              uVar49 = uVar45;
              while( true ) {
                uVar38 = *(uint32_t *)(uVar51 + 400 + lVar39 * 4);
                if (uVar38 == 0) {
                  *(uint16_t *)(uVar51 + 0x1c4 + lVar39 * 2) = 0;
                }
                else if ((uVar60 < uVar38) && ((uint32_t)uVar63 < uVar38)) {
                  *(uint16_t *)(uVar51 + 0x1c4 + lVar39 * 2) = 0xfffe;
                }
                else {
                  uVar36 = uVar36 + 1;
                  *(uint16_t *)(uVar51 + 0x1c4 + lVar39 * 2) = 1;
                  uVar49 = uVar49 - *(uint32_t *)(uVar51 + 400 + lVar39 * 4);
                }
                if ((uint64_t)uVar43 - 1 == lVar39) break;
                lVar39 = lVar39 + 1;
              }
              uVar38 = iVar89 - uVar36;
              if (uVar38 != 0) {
                uVar61 = uVar49;
                if (uVar49 >> 0x20 == 0) {
                  uVar61 = uVar49 & 0xffffffff;
                }
                if (uVar63 < uVar61 / uVar38) {
                  uVar63 = uVar49 * 3;
                  if (uVar63 >> 0x20 == 0) {
                    uVar38 = (uint32_t)((uVar63 & 0xffffffff) / (uint64_t)(uVar38 * 2));
                  }
                  else {
                    uVar38 = (uint32_t)(uVar63 / (uVar38 * 2));
                  }
                  lVar39 = 0;
                  sVar6 = *(short *)(uVar51 + 0x1c4);
                  while( true ) {
                    if (sVar6 == -2) {
                      uVar48 = *(uint32_t *)(uVar51 + 400 + lVar39 * 4);
                      bVar34 = (int)uVar38 < (int)uVar48;
                      if (uVar62 != 0x64bea8d0) {
                        bVar34 = uVar38 < uVar48;
                      }
                      if (!bVar34) {
                        uVar36 = uVar36 + 1;
                        *(uint16_t *)(uVar51 + 0x1c4 + lVar39 * 2) = 1;
                        uVar49 = uVar49 - *(uint32_t *)(uVar51 + 400 + lVar39 * 4);
                      }
                    }
                    if (((uint16_t)(~*(uint16_t *)(uVar51 + 0x1c6 + lVar39 * 2) * -0x1ce5) == -0x1ce5)
                       && (*(uint32_t *)(uVar51 + 0x194 + lVar39 * 4) <= uVar38)) {
                      *(uint16_t *)(uVar51 + 0x1c6 + lVar39 * 2) = 1;
                      uVar49 = uVar49 - *(uint32_t *)(uVar51 + 0x194 + lVar39 * 4);
                      uVar36 = uVar36 + 1;
                    }
                    if ((uint64_t)(uVar43 & 0xfffffffe) - 2 == lVar39) break;
                    lVar39 = lVar39 + 2;
                    sVar6 = *(short *)(uVar51 + 0x1c4 + lVar39 * 2);
                  }
                  if ((((uVar43 & 1) != 0) && (*(short *)(uVar51 + 0x1c8 + lVar39 * 2) == -2)) &&
                     (*(uint32_t *)(uVar51 + 0x198 + lVar39 * 4) <= uVar38)) {
                    *(uint16_t *)(uVar51 + 0x1c8 + lVar39 * 2) = 1;
                    uVar49 = uVar49 - *(uint32_t *)(uVar51 + 0x198 + lVar39 * 4);
                    uVar36 = uVar36 + 1;
                  }
                  uVar38 = iVar89 - uVar36;
                }
                uVar63 = (uint64_t)uVar38;
                if (uVar36 == uVar43) {
                  if (uVar1 < 3) {
                    uVar49 = 0;
                    uVar48 = 0;
                    uVar36 = 0;
                  }
                  else {
                    uVar49 = 0;
                    uVar48 = 0;
                    uVar36 = 0;
                    do {
                      uVar60 = (uint32_t)uVar49;
                      if ((0x6ea48e16 << (bVar35 & 0x1f) | 0x6ea48e16U >> 0x20 - (bVar35 & 0x1f)) *
                          -0x558cb619 < 0x59992e93) {
                        bVar41 = (bVar35 ^ 0xf7) * 'u';
                        uVar37 = *(uint32_t *)(lVar58 + uVar49 * 4);
                        if (uVar48 < uVar37) {
                          uVar48 = uVar37;
                          uVar36 = uVar60;
                        }
                        uVar37 = *(uint32_t *)(uVar51 + 0x194 + uVar49 * 4);
                        uVar54 = uVar48;
                        if (uVar48 < uVar37) {
                          uVar54 = uVar37;
                        }
                        bVar34 = uVar48 < uVar37;
                        if (~((uVar62 ^ 0x6400a03f) * 0x21667451) <= (uVar62 ^ 0x36ba8372)) {
                          bVar34 = (int)uVar48 < (int)uVar37;
                        }
                        if (bVar34) {
                          uVar36 = uVar60 + 1;
                        }
                        uVar48 = uVar54;
                      }
                      else {
                        uVar37 = *(uint32_t *)(lVar58 + uVar49 * 4);
                        uVar54 = *(uint32_t *)(uVar51 + 0x194 + uVar49 * 4);
                        bVar41 = (char)(uVar62 + 0xb66244de >> 0x11) + 0x8f;
                        if (uVar48 < uVar37) {
                          uVar48 = uVar37;
                          uVar36 = uVar60;
                        }
                        if (uVar48 < uVar54) {
                          uVar48 = uVar54;
                          uVar36 = uVar60 + 1;
                        }
                      }
                      uVar37 = *(uint32_t *)(uVar51 + 0x198 + uVar49 * 4);
                      uVar54 = *(uint32_t *)(uVar51 + 0x19c + uVar49 * 4);
                      uVar53 = uVar48;
                      if (uVar48 < uVar37) {
                        uVar53 = uVar37;
                      }
                      uVar49 = uVar49 + 4;
                      uVar57 = -0x59757faf << (bVar41 & 0x1f) |
                               0xa68a8051U >> 0x20 - (bVar41 & 0x1f);
                      bVar34 = uVar37 < uVar48;
                      if ((uVar57 >> (bVar35 & 0x1f) | uVar57 << 0x20 - (bVar35 & 0x1f)) !=
                          0x39560653) {
                        bVar34 = uVar48 < uVar37;
                      }
                      uVar48 = uVar60 + 2;
                      if (!bVar34) {
                        uVar48 = uVar36;
                      }
                      uVar36 = uVar48;
                      uVar48 = uVar53;
                      if (uVar53 < uVar54) {
                        uVar36 = uVar60 + 3;
                        uVar48 = uVar54;
                      }
                    } while ((uVar43 & 0xfffffffc) != uVar49);
                  }
                  if ((uVar43 & 3) != 0) {
                    uVar63 = (uint64_t)(uVar43 & 3);
                    while( true ) {
                      uVar63 = uVar63 - 1;
                      uVar43 = *(uint32_t *)(lVar58 + uVar49 * 4);
                      uVar60 = (uint32_t)uVar49;
                      if (uVar43 <= uVar48) {
                        uVar60 = uVar36;
                      }
                      uVar36 = uVar60;
                      if (uVar63 == 0) break;
                      uVar49 = uVar49 + 1;
                      if (uVar48 < uVar43) {
                        uVar48 = uVar43;
                      }
                    }
                  }
                  psVar4 = (short *)(lVar46 + (uint64_t)uVar36 * 2);
                  *psVar4 = *psVar4 + (short)uVar38;
                }
                else if (uVar49 == 0) {
                  if (uVar38 != 0) {
                    uVar36 = 0;
                    do {
                      sVar6 = *(short *)(lVar46 + (uint64_t)uVar36 * 2);
                      if ((short)(~((short)param_6 - 0x25cU) * 0x7115) < sVar6) {
                        *(short *)(lVar46 + (uint64_t)uVar36 * 2) = sVar6 + 1;
                        uVar63 = (uint64_t)((int)uVar63 - 1);
                      }
                      iVar86 = uVar43 - uVar36;
                      uVar36 = uVar36 + 1;
                      if (iVar86 == 1) {
                        uVar36 = 0;
                      }
                    } while ((int)uVar63 != 0);
                  }
                }
                else {
                  uVar61 = ~(-1L << (cVar59 + 0x3dU & 0x3f));
                  uVar63 = (uVar63 << (bVar41 & 0x3f)) + uVar61;
                  if (uVar63 >> 0x20 == 0) {
                    uVar63 = uVar63 & 0xffffffff;
                  }
                  uVar43 = 1;
                  while( true ) {
                    uVar42 = (uint64_t)(uVar43 - 1);
                    if ((short)(*(short *)(lVar46 + uVar42 * 2) * -0x2d2d) == 0x5a5a) {
                      uVar47 = uVar61 >> (bVar41 & 0x3f);
                      uVar61 = (uint64_t)*(uint32_t *)(lVar58 + uVar42 * 4) *
                               (uVar63 / (uVar49 & 0xffffffff)) + uVar61;
                      uVar55 = uVar61 >> (bVar41 & 0x3f);
                      if (uVar55 == uVar47) {
                        return;
                      }
                      *(short *)(lVar46 + uVar42 * 2) = (short)uVar55 - (short)uVar47;
                    }
                    if (uVar1 < uVar43) break;
                    uVar43 = uVar43 + 1;
                  }
                }
              }
            }
            break;
          }
          uVar48 = uVar48 + 1;
        }
        uVar49 = (in_R10 - 1) * -0x494000007b87d125;
        (*(code *)((int64_t)
                   (int)(0x8ffffac6U >> (bVar35 & 0x1f) | -0x7000053a << 0x20 - (bVar35 & 0x1f)) +
                  0x7fffa5480f1f))
                  (~((uVar1 * 0x100 | uVar1 >> 0x18) ^ (uVar1 * 0x2000000 | uVar1 >> 7) ^ uVar1) *
                   0x8000001);
        uVar49 = uVar49 ^ 0xffffffffc96a26e4;
        uVar49 = (uVar49 << 0x33 | uVar49 >> 0xd) ^ (uVar49 << 0x2d | uVar49 >> 0x13) ^ uVar49;
        uVar49 = (uVar49 << 0x1a | uVar49 >> 0x26) ^ (uVar49 << 0x26 | uVar49 >> 0x1a) ^ uVar49;
        uVar49 = (uVar49 << 0xc | uVar49 >> 0x34) ^ (uVar49 << 0x34 | uVar49 >> 0xc) ^ uVar49;
        uVar49 = (uVar49 << 0x28 | uVar49 >> 0x18) ^ (uVar49 << 0x18 | uVar49 >> 0x28) ^ uVar49;
        uVar49 = (uVar49 << 0x10 | uVar49 >> 0x30) ^ (uVar49 << 0x30 | uVar49 >> 0x10) ^ uVar49;
        if (0xffffffffffffff88 < uVar49) {
          return;
        }
        uVar63 = uVar51 + 0xec;
        uVar61 = (uVar51 * 0x10 | uVar51 >> 0x3c) ^
                 (uVar51 >> 1 | (uint64_t)((uVar51 & 1) != 0) << 0x3f) ^ uVar51;
        (*(code *)(&UNK_7fffa54b4c1b +
                  (int)(uStack_128 * 0x5a000000 | uStack_128 * -0x17c664d3 >> 7)))
                  (uVar61 - (uVar61 << 0x24),lVar46,uVar1,0xf20000000001ec,
                   uVar62 + 0x973b564c ^ 0x845c89a2);
        uVar63 = (uVar63 << 0x1f | uVar63 >> 0x21) ^ (uVar63 << 0x11 | uVar63 >> 0x2f) ^ uVar63;
        uVar63 = (uVar63 << 0x3e | uVar63 >> 2) ^ (uVar63 << 0x22 | uVar63 >> 0x1e) ^ uVar63;
        uVar63 = (uVar63 << 0x3c | uVar63 >> 4) ^ (uVar63 << 4 | uVar63 >> 0x3c) ^ uVar63;
        uVar63 = (uVar63 << 8 | uVar63 >> 0x38) ^ (uVar63 << 0x38 | uVar63 >> 8) ^ uVar63;
        uVar63 = (uVar63 << 0x30 | uVar63 >> 0x10) ^ (uVar63 << 0x10 | uVar63 >> 0x30) ^ uVar63;
        uVar61 = uVar63 << 0x20 | uVar63 >> 0x20 | uVar63;
        if ((0xb10624e1U >> (bVar35 & 0x1f) | -0x4ef9db1f << 0x20 - (bVar35 & 0x1f)) ==
            (0x189386c4 << (bVar35 & 0x1f) | 0x189386c4U >> 0x20 - (bVar35 & 0x1f))) {
          uVar61 = uVar63;
        }
        if (0xffffffffffffff88 < (uVar61 ^ 0x48f4e841)) {
          return;
        }
        uVar63 = uVar51;
        FUN_7fffa55ef1b0(uVar51,uVar45 - (param_4 << 0x37),uVar51 - 0xce46fc24,pcVar52 + uVar49);
        uVar63 = uVar63 >> 2 ^ uVar63;
        uVar63 = uVar63 >> 4 ^ uVar63;
        uVar63 = uVar63 >> 8 ^ uVar63;
        uVar63 = uVar63 >> 0x10 ^ uVar63;
        uVar63 = uVar63 >> 0x20 ^ uVar63;
        uVar63 = (uVar63 << 0x38 ^ uVar63) - (uVar63 << 0x2d);
        if (0xffffffffffffff88 < uVar63) {
          return;
        }
        if (uVar63 != ((uVar62 ^ 0x77df) - 0x7584 & 0xffff)) {
          pcVar52 = pcVar52 + uVar49 + (uVar63 - (int64_t)pcVar52);
          if ((char *)0xffffffffffffff88 < pcVar52) {
            return;
          }
          if (pcVar52 < (char *)(param_4 >> 1 & 0x7fffffff) && (char *)0x1 < pcVar52) {
            *param_3 = (char)pcVar52;
            return;
          }
        }
      }
      if (0x80 < uVar56) {
        return;
      }
    }
  }
  if (in_R10 < (uVar56 + 1 >> 1) + 1) {
    return;
  }
  *param_3 = (char)param_4 + '\x7f';
  pbVar2[uVar45] = 0;
  auVar98 = _DAT_7fffa56bc370;
  auVar82 = _DAT_7fffa56bc360;
  auVar77 = _DAT_7fffa56bc350;
  auVar68 = _DAT_7fffa56bc340;
  auVar93 = _DAT_7fffa56bc330;
  auVar87 = _DAT_7fffa56bc300;
  if (uVar56 == 0) {
    return;
  }
  if (6 < uVar56) {
    uVar49 = uVar45 - 1 >> 1;
    if ((param_3 + uVar49 + 2 <= pbVar2) ||
       ((char *)(uVar51 + (uVar45 - 1 & 0xfffffffffffffffe) + (uint64_t)(uVar62 - 0x6c)) <=
        param_3 + 1)) {
      uVar49 = uVar49 + 1;
      if (uVar56 < 0x1f) {
        uVar61 = 0;
      }
      else {
        uVar61 = uVar49 & 0xfffffffffffffff0;
        lVar58 = param_1 + uVar44;
        uVar42 = 0;
        uVar63 = 0;
        do {
          bVar41 = *(uint8_t *)(lVar58 + 0x1f6 + uVar63 * 2);
          bVar40 = *(uint8_t *)(lVar58 + 0x1fd + uVar63 * 2);
          bVar5 = *(uint8_t *)(lVar58 + 0x205 + uVar63 * 2);
          if ((uVar62 + 0xaf142b92) * 0x7bde8443 < 0x16e9d6e0) {
            uVar56 = uVar62 + 0x246f6fd9 ^ 0xc0000026;
          }
          else {
            uVar56 = uVar62 + 0xb4b46a3d;
          }
          auVar67 = psllw(ZEXT116(*(uint8_t *)(lVar58 + 0x1f0 + uVar63 * 2)),8);
          auVar71 = psllw(ZEXT116(*(uint8_t *)(lVar58 + 0x1ef + uVar63 * 2)),8);
          auVar72._1_7_ = 0;
          auVar72[0] = bVar40;
          auVar72[8] = bVar40;
          auVar72._9_7_ = 0;
          auVar73._1_3_ = 0;
          auVar73[0] = bVar5;
          auVar73[4] = bVar5;
          auVar73._5_3_ = 0;
          auVar73[8] = bVar5;
          auVar73._9_3_ = 0;
          auVar73[0xc] = bVar5;
          auVar73._13_3_ = 0;
          bVar40 = *(uint8_t *)(lVar58 + 0x1fe + uVar63 * 2);
          auVar74._1_7_ = 0;
          auVar74[0] = bVar40;
          auVar74[8] = bVar40;
          auVar74._9_7_ = 0;
          bVar40 = *(uint8_t *)(lVar58 + 0x206 + uVar63 * 2);
          auVar75._1_3_ = 0;
          auVar75[0] = bVar40;
          auVar75[4] = bVar40;
          auVar75._5_3_ = 0;
          auVar75[8] = bVar40;
          auVar75._9_3_ = 0;
          auVar75[0xc] = bVar40;
          auVar75._13_3_ = 0;
          auVar67 = ZEXT116(*(uint8_t *)(lVar58 + 0x20c + uVar63 * 2)) << 0x78 |
                    (ZEXT116(*(uint8_t *)(lVar58 + 0x20a + uVar63 * 2)) << 0x70 |
                    (~auVar98 & ZEXT116(*(uint8_t *)(lVar58 + 0x208 + uVar63 * 2)) << 0x68 |
                    (~auVar82 & auVar75 |
                    (~auVar77 & ZEXT116(*(uint8_t *)(lVar58 + 0x204 + uVar63 * 2)) << 0x58 |
                    (~auVar68 & ZEXT116(*(uint8_t *)(lVar58 + 0x202 + uVar63 * 2)) << 0x50 |
                    (~auVar93 & ZEXT116(*(uint8_t *)(lVar58 + 0x200 + uVar63 * 2)) << 0x48 |
                    (~_DAT_7fffa56bc320 & auVar74 |
                    (~_DAT_7fffa56bc310 & ZEXT116(*(uint8_t *)(lVar58 + 0x1fc + uVar63 * 2)) << 0x38 |
                    (~auVar87 & ZEXT116(*(uint8_t *)(lVar58 + 0x1fa + uVar63 * 2)) << 0x30 |
                    (~_DAT_7fffa56bc2f0 & ZEXT116(*(uint8_t *)(lVar58 + 0x1f8 + uVar63 * 2)) << 0x28 |
                    (~_DAT_7fffa56ba530 & ZEXT516(CONCAT14(bVar41,(uint32_t)bVar41)) |
                    (~_DAT_7fffa56b83d0 & ZEXT116(*(uint8_t *)(lVar58 + 500 + uVar63 * 2)) << 0x18 |
                    (~_DAT_7fffa56b83c0 & ZEXT116(*(uint8_t *)(lVar58 + 0x1f2 + uVar63 * 2)) << 0x10 |
                    (~_DAT_7fffa56b83b0 & auVar67 |
                    ZEXT116(*(uint8_t *)(lVar58 + 0x1ee + uVar63 * 2)) & _DAT_7fffa56b83b0) &
                    _DAT_7fffa56b83c0) & _DAT_7fffa56b83d0) & _DAT_7fffa56ba530) & _DAT_7fffa56bc2f0
                    ) & auVar87) & _DAT_7fffa56bc310) & _DAT_7fffa56bc320) & auVar93) & auVar68) &
                    auVar77) & auVar82) & auVar98) & _DAT_7fffa56bc380) & _DAT_7fffa56bc390;
          auVar71 = psllw(ZEXT116(*(uint8_t *)(lVar58 + 0x20b + uVar63 * 2)) << 0x78 |
                          (ZEXT116(*(uint8_t *)(lVar58 + 0x209 + uVar63 * 2)) << 0x70 |
                          (~auVar98 & ZEXT116(*(uint8_t *)(lVar58 + 0x207 + uVar63 * 2)) << 0x68 |
                          (~auVar82 & auVar73 |
                          (~auVar77 & ZEXT116(*(uint8_t *)(lVar58 + 0x203 + uVar63 * 2)) << 0x58 |
                          (~auVar68 & ZEXT116(pbVar2[uVar42 | 0x14]) << 0x50 |
                          (~auVar93 & ZEXT116(*(uint8_t *)(lVar58 + 0x1ff + uVar63 * 2)) << 0x48 |
                          (~_DAT_7fffa56bc320 & auVar72 |
                          (~_DAT_7fffa56bc310 &
                           ZEXT116(*(uint8_t *)(lVar58 + 0x1fb + uVar63 * 2)) << 0x38 |
                          (~auVar87 & ZEXT116(*(uint8_t *)(lVar58 + 0x1f9 + uVar63 * 2)) << 0x30 |
                          (~_DAT_7fffa56bc2f0 &
                           ZEXT116(*(uint8_t *)(lVar58 + 0x1f7 + uVar63 * 2)) << 0x28 |
                          (~_DAT_7fffa56ba530 &
                           ZEXT516(CONCAT14(pbVar2[uVar42 | 8],(uint32_t)pbVar2[uVar42 | 8])) |
                          (~_DAT_7fffa56b83d0 &
                           ZEXT116(*(uint8_t *)(lVar58 + 499 + uVar63 * 2)) << 0x18 |
                          (~_DAT_7fffa56b83c0 &
                           ZEXT116(*(uint8_t *)(lVar58 + 0x1f1 + uVar63 * 2)) << 0x10 |
                          (~_DAT_7fffa56b83b0 & auVar71 |
                          ZEXT116(*(uint8_t *)(lVar58 + 0x1ed + uVar63 * 2)) & _DAT_7fffa56b83b0) &
                          _DAT_7fffa56b83c0) & _DAT_7fffa56b83d0) & _DAT_7fffa56ba530) &
                          _DAT_7fffa56bc2f0) & auVar87) & _DAT_7fffa56bc310) & _DAT_7fffa56bc320) &
                          auVar93) & auVar68) & auVar77) & auVar82) & auVar98) & _DAT_7fffa56bc380)
                          & _DAT_7fffa56bc390,4);
          auVar71 = auVar71 & _DAT_7fffa56b9c80;
          pcVar52 = param_3 + (uVar63 & 0x7ffffffffffffff0) + 1;
          *pcVar52 = auVar67[0] + auVar71[0];
          pcVar52[1] = auVar67[1] + auVar71[1];
          pcVar52[2] = auVar67[2] + auVar71[2];
          pcVar52[3] = auVar67[3] + auVar71[3];
          pcVar52[4] = auVar67[4] + auVar71[4];
          pcVar52[5] = auVar67[5] + auVar71[5];
          pcVar52[6] = auVar67[6] + auVar71[6];
          pcVar52[7] = auVar67[7] + auVar71[7];
          pcVar52[8] = auVar67[8] + auVar71[8];
          pcVar52[9] = auVar67[9] + auVar71[9];
          pcVar52[10] = auVar67[10] + auVar71[10];
          pcVar52[0xb] = auVar67[0xb] + auVar71[0xb];
          pcVar52[0xc] = auVar67[0xc] + auVar71[0xc];
          pcVar52[0xd] = auVar67[0xd] + auVar71[0xd];
          pcVar52[0xe] = auVar67[0xe] + auVar71[0xe];
          pcVar52[0xf] = auVar67[0xf] + auVar71[0xf];
          uVar63 = uVar63 + 0x10;
          uVar42 = uVar42 + 0x20;
        } while (uVar61 != uVar63);
        if (uVar49 == uVar61) {
          return;
        }
        uVar63 = uVar61 * 2;
        if (((uVar62 | 1) * 0x68396a69 ^ uVar56) <
            (((uVar62 ^ 0x23297298) << 0xc | (uVar62 ^ 0x23297298) >> 0x14) + uVar56) * 0x4e45c093)
        {
          uVar63 = uVar61 >> 1;
        }
        if ((uVar49 & 0xc) == 0) goto LAB_7fffa54abd15;
      }
      auVar77 = _DAT_7fffa56b9c80;
      auVar68 = _DAT_7fffa56b83d0;
      auVar93 = _DAT_7fffa56b83c0;
      auVar87 = _DAT_7fffa56b83b0;
      uVar63 = uVar49 & 0xfffffffffffffffc;
      do {
        if ((int64_t)(int)~(uVar62 + 0x55d0cd48) ==
            (uint64_t)(-0x41b08bd4 << (bVar35 & 0x1f) | 0xbe4f742cU >> 0x20 - (bVar35 & 0x1f))) {
          uVar42 = 0x7ffffffffffffffc;
        }
        else {
          uVar42 = 0x8000080000000257 - param_6;
        }
        uVar42 = uVar42 & uVar61;
        lVar46 = uVar61 * 2;
        lVar58 = uVar61 * 2;
        uVar61 = uVar61 + 4;
        auVar82 = psllw(ZEXT116(*(uint8_t *)(uVar51 + 0x1ef + lVar46)),8);
        auVar82 = psllw(~auVar68 & ZEXT116(*(uint8_t *)(uVar51 + 499 + lVar46)) << 0x18 |
                        (~auVar93 & ZEXT116(*(uint8_t *)(uVar51 + 0x1f1 + lVar46)) << 0x10 |
                        (~auVar87 & auVar82 | ZEXT116(pbVar2[lVar58]) & auVar87) & auVar93) &
                        auVar68,4);
        auVar82 = auVar82 & auVar77;
        *(uint32_t *)(param_3 + uVar42 + 1) =
             CONCAT13(auVar82[3] + *(char *)(uVar51 + 500 + lVar46),
                      CONCAT12(auVar82[2] + *(char *)(uVar51 + 0x1f2 + lVar46),
                               CONCAT11(auVar82[1] + *(char *)(uVar51 + 0x1f0 + lVar46),
                                        auVar82[0] + *(char *)(uVar51 + 0x1ee + lVar46))));
      } while (uVar61 != uVar63);
      if (uVar49 == uVar63) {
        return;
      }
      uVar63 = uVar63 * 2;
      goto LAB_7fffa54abd15;
    }
  }
  uVar63 = 0;
LAB_7fffa54abd15:
  param_1 = param_1 + uVar44 + uVar63;
  uVar51 = uVar63 >> 1;
  lVar58 = 0;
  while( true ) {
    uVar63 = uVar63 + 2;
    param_3[lVar58 + uVar51 + 1] =
         *(char *)(param_1 + 0x1ed + lVar58 * 2) * '\x10' + *(char *)(param_1 + 0x1ee + lVar58 * 2);
    if (uVar45 <= uVar63) break;
    lVar58 = lVar58 + 1;
  }
                    /* WARNING: Read-only address (ram,0x7fffa56b26a0) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56b83b0) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56b83c0) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56b83d0) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56b9c80) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56ba530) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc2c0) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc2f0) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc300) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc310) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc320) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc330) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc340) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc350) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc360) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc370) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc380) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc390) is written */
  return;
}


// ============================================================================
// Function : FUN_7fffa54ad470  |  RVA: 0xd3d470  |  Size: 75384 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa52f959c@0xb8959c
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa54ad470(void) {
    /* +0xd3d470 */ __asm { PUSH RBP }
    /* +0xd3d471 */ __asm { PUSH RBX }
    /* +0xd3d472 */ __asm { PUSH RDI }
    /* +0xd3d473 */ __asm { PUSH RSI }
    /* +0xd3d474 */ __asm { PUSH R12 }
    /* +0xd3d476 */ __asm { PUSH R14 }
    /* +0xd3d478 */ __asm { PUSH R15 }
    /* +0xd3d47a */ __asm { PUSH R13 }
    /* +0xd3d47c */ __asm { SUB RSP,0xa78 }
    /* +0xd3d483 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xd3d48b */ __asm { MOVAPS xmmword ptr [RBP + 0x9e0],XMM14 }
    /* +0xd3d493 */ __asm { MOVAPS xmmword ptr [RBP + 0x9d0],XMM10 }
    /* +0xd3d49b */ __asm { MOVAPS xmmword ptr [RBP + 0x9c0],XMM6 }
    /* +0xd3d4a2 */ __asm { MOVAPS xmmword ptr [RBP + 0x9b0],XMM11 }
    /* +0xd3d4aa */ __asm { MOVAPS xmmword ptr [RBP + 0x9a0],XMM7 }
    /* +0xd3d4b1 */ __asm { MOVAPS xmmword ptr [RBP + 0x990],XMM13 }
    /* +0xd3d4b9 */ __asm { MOVAPS xmmword ptr [RBP + 0x980],XMM8 }
    /* +0xd3d4c1 */ __asm { MOVAPS xmmword ptr [RBP + 0x970],XMM15 }
    /* +0xd3d4c9 */ __asm { MOVAPS xmmword ptr [RBP + 0x960],XMM9 }
    /* +0xd3d4d1 */ __asm { MOVAPS xmmword ptr [RBP + 0x950],XMM12 }
    /* +0xd3d4d9 */ __asm { MOV qword ptr [RBP + 0x948],-0x2 }
    /* +0xd3d4e4 */ __asm { MOV R14,RCX }
    /* +0xd3d4e7 */ __asm { MOV R11,qword ptr [RBP + 0xa60] }
    /* +0xd3d4ee */ __asm { MOV R9,R11 }
    /* +0xd3d4f1 */ __asm { ROL R9,0x27 }
    /* +0xd3d4f5 */ __asm { MOV EDX,0xb017fd72 }
    /* +0xd3d4fa */ __asm { SUB EDX,R14D }
    /* +0xd3d4fd */ __asm { MOV EAX,0xb0d1df8c }
    /* +0xd3d502 */ __asm { XOR EAX,R14D }
    /* +0xd3d505 */ __asm { MOV ECX,0xe20e10a6 }
    /* +0xd3d50a */ __asm { IMUL R8D,ECX,0xd7beae3 }
    /* +0xd3d511 */ __asm { MOV ECX,R14D }
    /* +0xd3d514 */ __asm { ROL R8D,CL }
    /* +0xd3d517 */ __asm { MOV RCX,R11 }
    /* +0xd3d51a */ __asm { ROL RCX,0x6 }
    /* +0xd3d51e */ __asm { XOR RCX,R9 }
    /* +0xd3d521 */ __asm { XOR RCX,R11 }
    /* +0xd3d524 */ __asm { MOV R11,RCX }
    /* +0xd3d527 */ __asm { ROL R11,0xe }
    /* +0xd3d52b */ __asm { IMUL R9D,EAX,0x25127e03 }
    /* +0xd3d532 */ __asm { MOV RAX,RCX }
    /* +0xd3d535 */ __asm { ROL RAX,0xc }
    /* +0xd3d539 */ __asm { ADD EDX,0x686f99e6 }
    /* +0xd3d53f */ __asm { XOR RAX,R11 }
    /* +0xd3d542 */ __asm { XOR RAX,RCX }
    /* +0xd3d545 */ __asm { MOV R11,RAX }
    /* +0xd3d548 */ __asm { ROL R11,0x18 }
    /* +0xd3d54c */ __asm { XOR R11,RAX }
    /* +0xd3d54f */ __asm { ROL RAX,0x1c }
    /* +0xd3d553 */ __asm { MOV RCX,R11 }
    /* +0xd3d556 */ __asm { OR RCX,RAX }
    /* +0xd3d559 */ __asm { XOR R11,RAX }
    /* +0xd3d55c */ __asm { PUSHFQ }
    /* +0xd3d55d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xd3d565 */ __asm { POPFQ }
    /* +0xd3d566 */ __asm { ADD R9D,0x798424f6 }
    /* +0xd3d56d */ __asm { CMP R8,RDX }
    /* +0xd3d570 */ __asm { CMOVNC R11,RCX }
    /* +0xd3d574 */ __asm { MOV RCX,R11 }
    /* +0xd3d577 */ __asm { ROL RCX,0x30 }
    /* +0xd3d57b */ __asm { MOVSXD RDX,R9D }
    /* +0xd3d57e */ __asm { XOR RCX,R11 }
    /* +0xd3d581 */ __asm { ROL R11,0x38 }
    /* +0xd3d585 */ __asm { MOV qword ptr [RBP + 0x588],RCX }
    /* +0xd3d58c */ __asm { XOR R11,RCX }
    /* +0xd3d58f */ __asm { MOV RCX,R11 }
    /* +0xd3d592 */ __asm { ROL RCX,0x30 }
    /* +0xd3d596 */ __asm { MOV R9,R11 }
    /* +0xd3d599 */ __asm { ROL R9,0x20 }
    /* +0xd3d59d */ __asm { XOR R9,RCX }
    /* +0xd3d5a0 */ __asm { XOR R9,R11 }
    /* +0xd3d5a3 */ __asm { ROL R9,0x20 }
    /* +0xd3d5a7 */ __asm { NOT R9 }
    /* +0xd3d5aa */ __asm { ADD R9,RDX }
    /* +0xd3d5ad */ __asm { MOV qword ptr [RBP + 0x6d8],R9 }
    /* +0xd3d5b4 */ __asm { MOV R11,R9 }
    /* +0xd3d5b7 */ __asm { MOV qword ptr [RBP + 0x7a0],R11 }
    /* +0xd3d5be */ __asm { MOV dword ptr [RBP + 0x220],0x1f25dbd6 }
    /* +0xd3d5c8 */ __asm { MOV R9D,dword ptr [RBP + 0x220] }
    /* +0xd3d5cf */ __asm { MOV CX,0x6af4 }
    /* +0xd3d5d3 */ __asm { MOV EAX,R14D }
    /* +0xd3d5d6 */ __asm { SUB EAX,ECX }
    /* +0xd3d5d8 */ __asm { ADD EAX,0xffffd4d5 }
    /* +0xd3d5dd */ __asm { MOVSX ECX,AX }
    /* +0xd3d5e0 */ __asm { CMP R9D,ECX }
    /* +0xd3d5e3 */ __asm { JG 0x7fffa54ad5ef }
    /* +0xd3d5e5 */ __asm { SBB AL,uint8_t ptr FS:[RDI] }
    /* +0xd3d5e8 */ __asm { IMUL ESI,dword ptr [RDI + 0x71],-0x50dd53eb }
    /* +0xd3d5ef */ __asm { LEA R11,[0x7fffa4791c9a] }
    /* +0xd3d5f6 */ __asm { MOV ECX,0x98237bdb }
    /* +0xd3d5fb */ __asm { MOV R9W,0x296f }
    /* +0xd3d600 */ __asm { SUB ECX,R14D }
    /* +0xd3d603 */ __asm { IMUL ECX,ECX,-0x3fffffd9 }
    /* +0xd3d609 */ __asm { ROL ECX,0xa }
    /* +0xd3d60c */ __asm { MOVSXD R10,ECX }
    /* +0xd3d60f */ __asm { ADD R9D,0xffff962b }
    /* +0xd3d616 */ __asm { XOR R9D,0x5eb }
    /* +0xd3d61d */ __asm { MOV ECX,R14D }
    /* +0xd3d620 */ __asm { ROR R9W,CL }
    /* +0xd3d624 */ __asm { LEA RDX,[0x7fffa4786096] }
    /* +0xd3d62b */ __asm { LEA RCX,[0x7fffa478f4c3] }
    /* +0xd3d632 */ __asm { MOV EAX,0x3d418ad5 }
    /* +0xd3d637 */ __asm { IMUL EAX,EAX,0x32fcd46b }
    /* +0xd3d63d */ __asm { SUB EAX,R14D }
    /* +0xd3d640 */ __asm { ADD EAX,0x337d80b0 }
    /* +0xd3d645 */ __asm { CDQE }
    /* +0xd3d647 */ __asm { ADD RAX,RCX }
    /* +0xd3d64a */ __asm { MOVZX R11D,uint8_t ptr [R11 + R10*0x1 + 0x10] }
    /* +0xd3d650 */ __asm { MOVQ XMM0,qword ptr [RAX + R11*0x8 + 0x1f] }
    /* +0xd3d657 */ __asm { PCMPEQD XMM3,XMM3 }
    /* +0xd3d65b */ __asm { PXOR XMM0,XMM3 }
    /* +0xd3d65f */ __asm { MOVDQA XMM5,XMM0 }
    /* +0xd3d663 */ __asm { PSRLW XMM5,0x4 }
    /* +0xd3d668 */ __asm { PAND XMM5,xmmword ptr [0x7fffa56b8670] }
    /* +0xd3d670 */ __asm { MOVSX R11,R9W }
    /* +0xd3d674 */ __asm { PSLLW XMM0,0x4 }
    /* +0xd3d679 */ __asm { PAND XMM0,xmmword ptr [0x7fffa56b9c80] }
    /* +0xd3d681 */ __asm { MOVQ XMM1,qword ptr [RDX + R11*0x1 + 0x40] }
    /* +0xd3d688 */ __asm { POR XMM0,XMM5 }
    /* +0xd3d68c */ __asm { PXOR XMM1,XMM3 }
    /* +0xd3d690 */ __asm { PXOR XMM1,XMM0 }
    /* +0xd3d694 */ __asm { MOVQ qword ptr [RBP + 0x220],XMM1 }
    /* +0xd3d69c */ __asm { CMP qword ptr [RBP + 0x220],0x0 }
    /* +0xd3d6a4 */ __asm { MOV qword ptr [RBP + 0x778],R14 }
    /* +0xd3d6ab */ __asm { JNZ 0x7fffa54ada0b }
    /* +0xd3d6b1 */ __asm { MOV EDX,0xc9453390 }
    /* +0xd3d6b6 */ __asm { MOV R8D,R14D }
    /* +0xd3d6b9 */ __asm { OR R8D,0x1 }
    /* +0xd3d6bd */ __asm { ADD EDX,0xf9640db1 }
    /* +0xd3d6c3 */ __asm { IMUL EDX,R8D }
    /* +0xd3d6c7 */ __asm { NOT EDX }
    /* +0xd3d6c9 */ __asm { MOV RAX,qword ptr [RDX] }
    /* +0xd3d6cc */ __asm { MOV RDX,-0x5231420f5791b875 }
    /* +0xd3d6d6 */ __asm { MOV R11D,0x991ac65 }
    /* +0xd3d6dc */ __asm { MOV R15,R11 }
    /* +0xd3d6df */ __asm { LEA RCX,[0x7fffa4789b0d] }
    /* +0xd3d6e6 */ __asm { MOV R9W,0x9614 }
    /* +0xd3d6eb */ __asm { LEA R11,[0x7fffa478eb25] }
    /* +0xd3d6f2 */ __asm { MOV R10D,0x8d774865 }
    /* +0xd3d6f8 */ __asm { MOV dword ptr [RBP + 0x1c0],R10D }
    /* +0xd3d6ff */ __asm { MOV R12W,0xa688 }
    /* +0xd3d704 */ __asm { MOV R10D,0x6190 }
    /* +0xd3d70a */ __asm { SUB R10D,R9D }
    /* +0xd3d70d */ __asm { MOV qword ptr [RBP + 0x1a8],R10 }
    /* +0xd3d714 */ __asm { MOV R9D,0xd4fcbdf9 }
    /* +0xd3d71a */ __asm { IMUL R10D,R9D,0xbe085fb }
    /* +0xd3d721 */ __asm { MOV R9D,0xf79eb340 }
    /* +0xd3d727 */ __asm { IMUL R9D,R8D }
    /* +0xd3d72b */ __asm { LEA R8,[0x7fffa478ab89] }
    /* +0xd3d732 */ __asm { MOV qword ptr [RBP + 0x770],R8 }
    /* +0xd3d739 */ __asm { LEA R8,[0x7fffa4785f54] }
    /* +0xd3d740 */ __asm { MOV qword ptr [RBP + 0x4a0],R8 }
    /* +0xd3d747 */ __asm { MOV R8W,0xcef }
    /* +0xd3d74c */ __asm { MOV dword ptr [RBP + 0x518],R8D }
    /* +0xd3d753 */ __asm { ADD R10D,0xf09ebf14 }
    /* +0xd3d75a */ __asm { MOVSXD RBX,R10D }
    /* +0xd3d75d */ __asm { ADD RBX,R11 }
    /* +0xd3d760 */ __asm { MOV R11W,0xc6ae }
    /* +0xd3d765 */ __asm { LEA R8,[0x7fffa4791599] }
    /* +0xd3d76c */ __asm { MOV qword ptr [RBP + 0x200],R8 }
    /* +0xd3d773 */ __asm { LEA R8,[0x7fffa479454e] }
    /* +0xd3d77a */ __asm { MOV qword ptr [RBP + 0x580],R8 }
    /* +0xd3d781 */ __asm { MOV R10D,0x578ca51d }
    /* +0xd3d787 */ __asm { MOV R8D,0x45783806 }
    /* +0xd3d78d */ __asm { LEA RDI,[0x7fffa4787ee0] }
    /* +0xd3d794 */ __asm { MOV qword ptr [RBP + 0x680],RDI }
    /* +0xd3d79b */ __asm { LEA RDI,[0x7fffa47916a5] }
    /* +0xd3d7a2 */ __asm { MOV qword ptr [RBP + 0x760],RDI }
    /* +0xd3d7a9 */ __asm { MOV R13W,0x93c0 }
    /* +0xd3d7ae */ __asm { LEA RDI,[0x7fffa478d531] }
    /* +0xd3d7b5 */ __asm { MOV qword ptr [RBP + 0x218],RDI }
    /* +0xd3d7bc */ __asm { XOR R11D,R14D }
    /* +0xd3d7bf */ __asm { NOT R11D }
    /* +0xd3d7c2 */ __asm { MOVSX R11,R11W }
    /* +0xd3d7c6 */ __asm { MOVZX EDI,uint8_t ptr [RCX + R11*0x1 + 0x10] }
    /* +0xd3d7cc */ __asm { ADD R15D,0x1e1edb18 }
    /* +0xd3d7d3 */ __asm { MOV ESI,EAX }
    /* +0xd3d7d5 */ __asm { SHR RAX,0x18 }
    /* +0xd3d7d9 */ __asm { AND RAX,-0x100 }
    /* +0xd3d7df */ __asm { ADD R13D,0xffff92bc }
    /* +0xd3d7e6 */ __asm { MOV ECX,R14D }
    /* +0xd3d7e9 */ __asm { ROR R13W,CL }
    /* +0xd3d7ed */ __asm { ROL R15D,CL }
    /* +0xd3d7f0 */ __asm { LEA R11,[0x7fffa478b06c] }
    /* +0xd3d7f7 */ __asm { MOV qword ptr [RBP + 0x1f0],R11 }
    /* +0xd3d7fe */ __asm { MOV qword ptr [RBP + 0x730],R15 }
    /* +0xd3d805 */ __asm { IMUL R11,RDX,-0x2f8dd823 }
    /* +0xd3d80c */ __asm { NOT R11 }
    /* +0xd3d80f */ __asm { ROL R11,CL }
    /* +0xd3d812 */ __asm { MOV EDX,0xa8ff171f }
    /* +0xd3d817 */ __asm { XOR EDX,0x8f897ef9 }
    /* +0xd3d81d */ __asm { ADD EDX,R14D }
    /* +0xd3d820 */ __asm { MOV EDX,dword ptr [RDX] }
    /* +0xd3d822 */ __asm { IMUL RAX,RDX }
    /* +0xd3d826 */ __asm { IMUL RSI,RDX }
    /* +0xd3d82a */ __asm { XOR R12D,R14D }
    /* +0xd3d82d */ __asm { ROL R12W,0x1 }
    /* +0xd3d831 */ __asm { MOV qword ptr [RBP + 0x780],R12 }
    /* +0xd3d838 */ __asm { MOVSXD RDX,R9D }
    /* +0xd3d83b */ __asm { XOR RDX,-0x7ffffffd }
    /* +0xd3d842 */ __asm { MOV qword ptr [RBP + 0x510],RDX }
    /* +0xd3d849 */ __asm { MOV R9D,R14D }
    /* +0xd3d84c */ __asm { OR R9D,0x1 }
    /* +0xd3d850 */ __asm { MOV dword ptr [RBP + 0x940],R9D }
    /* +0xd3d857 */ __asm { XOR R8D,R14D }
    /* +0xd3d85a */ __asm { IMUL R9D,R8D,0x2b0c22c3 }
    /* +0xd3d861 */ __asm { MOV dword ptr [RBP + 0x660],R9D }
    /* +0xd3d868 */ __asm { SUB R10D,R14D }
    /* +0xd3d86b */ __asm { ROL R10D,0x18 }
    /* +0xd3d86f */ __asm { MOV dword ptr [RBP + 0x710],R10D }
    /* +0xd3d876 */ __asm { IMUL R14D,dword ptr [RBP + 0x518],-0x263 }
    /* +0xd3d881 */ __asm { IMUL R10D,EDI,0x55555556 }
    /* +0xd3d888 */ __asm { ADD R10D,0x55555556 }
    /* +0xd3d88f */ __asm { LEA R10,[R10 + R10*0x2] }
    /* +0xd3d893 */ __asm { SHR R10,0x20 }
    /* +0xd3d897 */ __asm { SHR RSI,0x18 }
    /* +0xd3d89b */ __asm { ADD RAX,RSI }
    /* +0xd3d89e */ __asm { MOV RDX,RAX }
    /* +0xd3d8a1 */ __asm { SHR RDX,0x20 }
    /* +0xd3d8a5 */ __asm { MOV RCX,RAX }
    /* +0xd3d8a8 */ __asm { SHR RCX,0x30 }
    /* +0xd3d8ac */ __asm { MOV R8,RAX }
    /* +0xd3d8af */ __asm { SHR R8,0x28 }
    /* +0xd3d8b3 */ __asm { MOV RDI,RAX }
    /* +0xd3d8b6 */ __asm { SHR RDI,0x38 }
    /* +0xd3d8ba */ __asm { MOV R15D,EAX }
    /* +0xd3d8bd */ __asm { SHR R15D,0x10 }
    /* +0xd3d8c1 */ __asm { MOV R9D,EAX }
    /* +0xd3d8c4 */ __asm { SHR R9D,0x8 }
    /* +0xd3d8c8 */ __asm { XOR R12D,R12D }
    /* +0xd3d8cb */ __asm { CMP R11,qword ptr [RBP + 0x730] }
    /* +0xd3d8d2 */ __asm { CMOVNC R12D,R9D }
    /* +0xd3d8d6 */ __asm { MOVSX R11,R13W }
    /* +0xd3d8da */ __asm { SHR EAX,0x18 }
    /* +0xd3d8dd */ __asm { MOV R9,qword ptr [RBP + 0x1f0] }
    /* +0xd3d8e4 */ __asm { XOR AL,uint8_t ptr [R9 + R11*0x1 + 0x43] }
    /* +0xd3d8e9 */ __asm { MOV R11,qword ptr [RBP + 0x780] }
    /* +0xd3d8f0 */ __asm { NOT R11D }
    /* +0xd3d8f3 */ __asm { MOVSX R11,R11W }
    /* +0xd3d8f7 */ __asm { MOV R9,qword ptr [RBP + 0x770] }
    /* +0xd3d8fe */ __asm { XOR CL,uint8_t ptr [R9 + R11*0x1 + 0x46] }
    /* +0xd3d903 */ __asm { MOVSX R11,word ptr [RBP + 0x1a8] }
    /* +0xd3d90b */ __asm { MOV R9,qword ptr [RBP + 0x680] }
    /* +0xd3d912 */ __asm { XOR R8B,uint8_t ptr [R9 + R11*0x1 + 0x45] }
    /* +0xd3d917 */ __asm { NOT R14D }
    /* +0xd3d91a */ __asm { MOVSX R9,R14W }
    /* +0xd3d91e */ __asm { MOV R14,qword ptr [RBP + 0x778] }
    /* +0xd3d925 */ __asm { MOV R11W,0xbb50 }
    /* +0xd3d92a */ __asm { LEA R13,[0x7fffa4786bf0] }
    /* +0xd3d931 */ __asm { XOR SIL,uint8_t ptr [R13 + R9*0x1 + 0x40] }
    /* +0xd3d936 */ __asm { ROL AL,0x4 }
    /* +0xd3d939 */ __asm { MOV uint8_t ptr [RBX + R10*0x8 + 0x22],AL }
    /* +0xd3d93e */ __asm { MOV R9D,dword ptr [RBP + 0x660] }
    /* +0xd3d945 */ __asm { NOT R9D }
    /* +0xd3d948 */ __asm { MOVSXD R9,R9D }
    /* +0xd3d94b */ __asm { MOV RAX,qword ptr [RBP + 0x760] }
    /* +0xd3d952 */ __asm { XOR DL,uint8_t ptr [RAX + R9*0x1 + 0x44] }
    /* +0xd3d957 */ __asm { MOV R9D,0x7bdb1a84 }
    /* +0xd3d95d */ __asm { SUB R9D,dword ptr [RBP + 0x1c0] }
    /* +0xd3d964 */ __asm { ROL DL,0x4 }
    /* +0xd3d967 */ __asm { MOV uint8_t ptr [RBX + R10*0x8 + 0x23],DL }
    /* +0xd3d96c */ __asm { ROL SIL,0x4 }
    /* +0xd3d970 */ __asm { MOV uint8_t ptr [RBX + R10*0x8 + 0x1f],SIL }
    /* +0xd3d975 */ __asm { IMUL R9D,R9D,0x1873f375 }
    /* +0xd3d97c */ __asm { MOVSXD RDX,R9D }
    /* +0xd3d97f */ __asm { MOV R9,qword ptr [RBP + 0x218] }
    /* +0xd3d986 */ __asm { XOR DIL,uint8_t ptr [R9 + RDX*0x1 + 0x47] }
    /* +0xd3d98b */ __asm { MOVSXD RDX,dword ptr [RBP + 0x710] }
    /* +0xd3d992 */ __asm { MOV R9,qword ptr [RBP + 0x580] }
    /* +0xd3d999 */ __asm { XOR R15B,uint8_t ptr [R9 + RDX*0x1 + 0x42] }
    /* +0xd3d99e */ __asm { IMUL R11D,dword ptr [RBP + 0x940] }
    /* +0xd3d9a6 */ __asm { ROL CL,0x4 }
    /* +0xd3d9a9 */ __asm { ROL R8B,0x4 }
    /* +0xd3d9ad */ __asm { MOV uint8_t ptr [RBX + R10*0x8 + 0x25],CL }
    /* +0xd3d9b2 */ __asm { MOV uint8_t ptr [RBX + R10*0x8 + 0x24],R8B }
    /* +0xd3d9b7 */ __asm { ROL DIL,0x4 }
    /* +0xd3d9bb */ __asm { MOV uint8_t ptr [RBX + R10*0x8 + 0x26],DIL }
    /* +0xd3d9c0 */ __asm { ROL R11W,0x4 }
    /* +0xd3d9c5 */ __asm { MOVSX R11,R11W }
    /* +0xd3d9c9 */ __asm { MOV RDX,qword ptr [RBP + 0x4a0] }
    /* +0xd3d9d0 */ __asm { XOR R12B,uint8_t ptr [RDX + R11*0x1 + 0x41] }
    /* +0xd3d9d5 */ __asm { ROL R15B,0x4 }
    /* +0xd3d9d9 */ __asm { MOV uint8_t ptr [RBX + R10*0x8 + 0x21],R15B }
    /* +0xd3d9de */ __asm { ROL R12B,0x4 }
    /* +0xd3d9e2 */ __asm { MOV uint8_t ptr [RBX + R10*0x8 + 0x20],R12B }
    /* +0xd3d9e7 */ __asm { MOV R11,qword ptr [RBP + 0x200] }
    /* +0xd3d9ee */ __asm { MOV RCX,qword ptr [RBP + 0x510] }
    /* +0xd3d9f5 */ __asm { MOV uint8_t ptr [R11 + RCX*0x1 + 0x10],R10B }
    /* +0xd3d9fa */ __asm { MOV dword ptr [RBP + 0x220],0xc238e327 }
    /* +0xd3da04 */ __asm { MOV R9D,dword ptr [RBP + 0x220] }
    /* +0xd3da0b */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xd3da12 */ __asm { MOV RCX,0x0 }
    /* +0xd3da19 */ __asm { PUSHFQ }
    /* +0xd3da1a */ __asm { POP R10 }
    /* +0xd3da1c */ __asm { TEST R10D,0x100 }
    /* +0xd3da23 */ __asm { NOP }
    /* +0xd3da24 */ __asm { NOP }
    /* +0xd3da25 */ __asm { NOP }
    /* +0xd3da26 */ __asm { NOP }
    /* +0xd3da27 */ __asm { NOP }
    /* +0xd3da28 */ __asm { NOP }
    /* +0xd3da29 */ __asm { NOP }
    /* +0xd3da2a */ __asm { NOP }
    /* +0xd3da2b */ __asm { NOP }
    /* +0xd3da2c */ __asm { NOP }
    /* +0xd3da2d */ __asm { NOP }
    /* +0xd3da2e */ __asm { NOP }
    /* +0xd3da2f */ __asm { NOP }
    /* +0xd3da30 */ __asm { NOP }
    /* +0xd3da31 */ __asm { NOP }
    /* +0xd3da32 */ __asm { MOV qword ptr [RBP + 0x1a8],R10 }
    /* +0xd3da39 */ __asm { MOV dword ptr [RBP + 0x220],0x4cb5ad51 }
    /* +0xd3da43 */ __asm { MOV R9D,dword ptr [RBP + 0x220] }
    /* +0xd3da4a */ __asm { TEST R9D,R9D }
    /* +0xd3da4d */ __asm { JS 0x7fffa54af5ab }
    /* +0xd3da53 */ __asm { MOV R9W,0x6884 }
    /* +0xd3da58 */ __asm { MOV ECX,R14D }
    /* +0xd3da5b */ __asm { OR ECX,0x1 }
    /* +0xd3da5e */ __asm { MOV dword ptr [RBP + 0x760],ECX }
    /* +0xd3da64 */ __asm { IMUL R9D,ECX }
    /* +0xd3da68 */ __asm { ROL R9W,0x4 }
    /* +0xd3da6d */ __asm { NOT R9D }
    /* +0xd3da70 */ __asm { MOVZX EDX,R9W }
    /* +0xd3da74 */ __asm { MOVQ XMM3,R14 }
    /* +0xd3da79 */ __asm { MOV R11,-0x23c827f0 }
    /* +0xd3da80 */ __asm { XOR R11,qword ptr GS:[RDX] }
    /* +0xd3da84 */ __asm { MOV RDX,0x3d7b31ff6eaff6eb }
    /* +0xd3da8e */ __asm { IMUL RDX,R11 }
    /* +0xd3da92 */ __asm { MOV R11,0x50b0d1bffdd50825 }
    /* +0xd3da9c */ __asm { ADD R11,-0x531567a6 }
    /* +0xd3daa3 */ __asm { MOV RCX,-0x1cbe1ee61a0cb911 }
    /* +0xd3daad */ __asm { XOR R11,0x6aab3143 }
    /* +0xd3dab4 */ __asm { MOVQ XMM0,R11 }
    /* +0xd3dab9 */ __asm { MOVDQA xmmword ptr [RBP + 0x590],XMM3 }
    /* +0xd3dac1 */ __asm { PADDQ XMM0,XMM3 }
    /* +0xd3dac5 */ __asm { MOVQ R11,XMM0 }
    /* +0xd3daca */ __asm { CMP R11,RDX }
    /* +0xd3dacd */ __asm { NOP }
    /* +0xd3dace */ __asm { NOP }
    /* +0xd3dacf */ __asm { NOP }
    /* +0xd3dad0 */ __asm { NOP }
    /* +0xd3dad1 */ __asm { NOP }
    /* +0xd3dad2 */ __asm { MOV R9D,0x19918b4c }
    /* +0xd3dad8 */ __asm { XOR R9D,R14D }
    /* +0xd3dadb */ __asm { NOT R9D }
    /* +0xd3dade */ __asm { MOV dword ptr [RBP + 0x220],R9D }
    /* +0xd3dae5 */ __asm { MOV R9D,dword ptr [RBP + 0x220] }
    /* +0xd3daec */ __asm { CMP R9D,0x4d90e95b }
    /* +0xd3daf3 */ __asm { NOP }
    /* +0xd3daf4 */ __asm { NOP }
    /* +0xd3daf5 */ __asm { NOP }
    /* +0xd3daf6 */ __asm { NOP }
    /* +0xd3daf7 */ __asm { NOP }
    /* +0xd3daf8 */ __asm { NOP }
    /* +0xd3daf9 */ __asm { NOP }
    /* +0xd3dafa */ __asm { NOP }
    /* +0xd3dafb */ __asm { NOP }
    /* +0xd3dafc */ __asm { NOP }
    /* +0xd3dafd */ __asm { NOP }
    /* +0xd3dafe */ __asm { NOP }
    /* +0xd3daff */ __asm { NOP }
    /* +0xd3db00 */ __asm { MOV RCX,0x6886460ea38565e9 }
    /* +0xd3db0a */ __asm { MOV qword ptr [RBP + 0x200],RCX }
    /* +0xd3db11 */ __asm { MOV RCX,0x68e94662a3e76586 }
    /* +0xd3db1b */ __asm { MOV qword ptr [RBP + 0x4a0],RCX }
    /* +0xd3db22 */ __asm { MOV RCX,0x623013af296192d }
    /* +0xd3db2c */ __asm { MOV qword ptr [RBP + 0x6e0],RCX }
    /* +0xd3db33 */ __asm { MOV R9,0xb2303a374449343 }
    /* +0xd3db3d */ __asm { MOV R8,0x2ce495c60940c9ab }
    /* +0xd3db47 */ __asm { MOV RCX,-0xe69cc214456719f }
    /* +0xd3db51 */ __asm { MOV qword ptr [RBP + 0x510],RCX }
    /* +0xd3db58 */ __asm { MOV RCX,-0x167d4878e5c404e9 }
    /* +0xd3db62 */ __asm { MOV qword ptr [RBP + 0x1c0],RCX }
    /* +0xd3db69 */ __asm { MOV RDX,-0x7e1ff33d5574846c }
    /* +0xd3db73 */ __asm { MOV RCX,-0x7e6df35855008406 }
    /* +0xd3db7d */ __asm { MOV qword ptr [RBP + 0x680],RCX }
    /* +0xd3db84 */ __asm { MOV RCX,-0x2f0e6301e7bfdbef }
    /* +0xd3db8e */ __asm { MOV qword ptr [RBP + 0x770],RCX }
    /* +0xd3db95 */ __asm { MOV RCX,0xaa58858eff2d7c }
    /* +0xd3db9f */ __asm { MOV qword ptr [RBP + 0x938],RCX }
    /* +0xd3dba6 */ __asm { MOV RCX,0x487f7cdffe2347aa }
    /* +0xd3dbb0 */ __asm { MOV qword ptr [RBP + 0x580],RCX }
    /* +0xd3dbb7 */ __asm { MOV R10D,0x8e442232 }
    /* +0xd3dbbd */ __asm { MOV RCX,0x2c9695b40925c98b }
    /* +0xd3dbc7 */ __asm { MOV qword ptr [RBP + 0x660],RCX }
    /* +0xd3dbce */ __asm { MOV R13,0x1f5ab4de0d7ce4b1 }
    /* +0xd3dbd8 */ __asm { MOV R12,-0x19ff09c53999724 }
    /* +0xd3dbe2 */ __asm { MOV RCX,-0x7ae5c24f15382545 }
    /* +0xd3dbec */ __asm { MOV RAX,0x1fc817fe95531799 }
    /* +0xd3dbf6 */ __asm { MOV qword ptr [RBP + 0x480],RAX }
    /* +0xd3dbfd */ __asm { MOV RAX,0xe13fd68d66cbe87 }
    /* +0xd3dc07 */ __asm { MOV qword ptr [RBP + 0x7a8],RAX }
    /* +0xd3dc0e */ __asm { MOV RAX,0x1c8c20043a917bdb }
    /* +0xd3dc18 */ __asm { MOV qword ptr [RBP + 0x618],RAX }
    /* +0xd3dc1f */ __asm { MOV RAX,-0x66e13ff804e5f3e6 }
    /* +0xd3dc29 */ __asm { MOV qword ptr [RBP + 0x648],RAX }
    /* +0xd3dc30 */ __asm { MOV RAX,-0x7c9a946e51875990 }
    /* +0xd3dc3a */ __asm { MOV qword ptr [RBP + 0x518],RAX }
    /* +0xd3dc41 */ __asm { MOV RAX,0x1fbc179f953617eb }
    /* +0xd3dc4b */ __asm { MOV R11D,0x68179532 }
    /* +0xd3dc51 */ __asm { XOR R11D,R14D }
    /* +0xd3dc54 */ __asm { XOR R10D,R14D }
    /* +0xd3dc57 */ __asm { ROL R11D,0x5 }
    /* +0xd3dc5b */ __asm { NOT R10D }
    /* +0xd3dc5e */ __asm { MOV qword ptr [RBP + 0x830],RAX }
    /* +0xd3dc65 */ __asm { MOV RBX,-0x4fc5caa969830e2c }
    /* +0xd3dc6f */ __asm { MOV RDI,0xd858aa8ed02d46 }
    /* +0xd3dc79 */ __asm { MOV RAX,0x74eabf9fa8a83a82 }
    /* +0xd3dc83 */ __asm { MOV qword ptr [RBP + 0x730],RAX }
    /* +0xd3dc8a */ __asm { MOV RAX,0x3e01d0af02c2fa52 }
    /* +0xd3dc94 */ __asm { MOV qword ptr [RBP + 0x1d0],RAX }
    /* +0xd3dc9b */ __asm { MOV RAX,0x3150cb3deabed324 }
    /* +0xd3dca5 */ __asm { MOV qword ptr [RBP + 0x940],RAX }
    /* +0xd3dcac */ __asm { MOV RAX,-0x7bf1a48e1b8abb70 }
    /* +0xd3dcb6 */ __asm { MOV qword ptr [RBP + 0x558],RAX }
    /* +0xd3dcbd */ __asm { MOV RAX,-0x71d94215cf5c521 }
    /* +0xd3dcc7 */ __asm { MOV R15,-0x2f6b6372e7dedb8c }
    /* +0xd3dcd1 */ __asm { MOV qword ptr [RBP + 0x620],R15 }
    /* +0xd3dcd8 */ __asm { MOV RSI,R14 }
    /* +0xd3dcdb */ __asm { MOV R14,0xe7ffd18d64cbee9 }
    /* +0xd3dce5 */ __asm { MOV qword ptr [RBP + 0x860],R14 }
    /* +0xd3dcec */ __asm { MOV qword ptr [RBP + 0x7d8],RDX }
    /* +0xd3dcf3 */ __asm { MOV R14,0x1ce2206b3ab17baf }
    /* +0xd3dcfd */ __asm { MOV RDX,0x17396aeb54644486 }
    /* +0xd3dd07 */ __asm { MOV qword ptr [RBP + 0x5c0],RDX }
    /* +0xd3dd0e */ __asm { MOV RDX,-0x16774856e5b60488 }
    /* +0xd3dd18 */ __asm { MOV qword ptr [RBP + 0x780],RDX }
    /* +0xd3dd1f */ __asm { MOV RDX,-0x14a61ea966c54803 }
    /* +0xd3dd29 */ __asm { MOV qword ptr [RBP + 0x7f8],RDX }
    /* +0xd3dd30 */ __asm { MOV qword ptr [RBP + 0x800],R8 }
    /* +0xd3dd37 */ __asm { MOV qword ptr [RBP + 0x7c0],R13 }
    /* +0xd3dd3e */ __asm { MOV R8,-0x7c9a946e518759fe }
    /* +0xd3dd48 */ __asm { MOV qword ptr [RBP + 0x5f0],R8 }
    /* +0xd3dd4f */ __asm { MOV R8,-0x2feff8e67f14bd8f }
    /* +0xd3dd59 */ __asm { MOV R13,0x174c6a98544444e3 }
    /* +0xd3dd63 */ __asm { MOV R15,0x74cdbfbfa8c33ae1 }
    /* +0xd3dd6d */ __asm { MOV RDX,0x3e69d08f02f8fa37 }
    /* +0xd3dd77 */ __asm { MOV qword ptr [RBP + 0x898],RDX }
    /* +0xd3dd7e */ __asm { MOV qword ptr [RBP + 0x840],R9 }
    /* +0xd3dd85 */ __asm { MOV R9,-0x611f03c6dc105878 }
    /* +0xd3dd8f */ __asm { MOV qword ptr [RBP + 0x520],R9 }
    /* +0xd3dd96 */ __asm { MOV R9,-0x6c3aaa6888dbc090 }
    /* +0xd3dda0 */ __asm { MOV qword ptr [RBP + 0x5e0],R9 }
    /* +0xd3dda7 */ __asm { MOV R9,-0x511e1f5407b013fb }
    /* +0xd3ddb1 */ __asm { MOV qword ptr [RBP + 0x500],R9 }
    /* +0xd3ddb8 */ __asm { MOV R9,-0x7cff944e51ff59e1 }
    /* +0xd3ddc2 */ __asm { MOV qword ptr [RBP + 0x630],R9 }
    /* +0xd3ddc9 */ __asm { MOV R9,0x1f59b4ce0d61e4a6 }
    /* +0xd3ddd3 */ __asm { MOV qword ptr [RBP + 0x640],R9 }
    /* +0xd3ddda */ __asm { MOV R9,-0x516a1f3d07c313db }
    /* +0xd3dde4 */ __asm { MOV qword ptr [RBP + 0x528],R9 }
    /* +0xd3ddeb */ __asm { MOV R9,-0x616d03b3dc7f5858 }
    /* +0xd3ddf5 */ __asm { MOV qword ptr [RBP + 0x888],R9 }
    /* +0xd3ddfc */ __asm { MOV dword ptr [RBP + 0x4cc],0x0 }
    /* +0xd3de06 */ __asm { CMP R11,R10 }
    /* +0xd3de09 */ __asm { JBE 0x7fffa54ade90 }
    /* +0xd3de0f */ __asm { MOV R9D,ESI }
    /* +0xd3de12 */ __asm { OR R9D,0x1 }
    /* +0xd3de16 */ __asm { MOV R10,-0x1f6f0bc53fc9752 }
    /* +0xd3de20 */ __asm { MOV qword ptr [RBP + 0x4f8],R10 }
    /* +0xd3de27 */ __asm { MOV R10,-0x4cdac6385dd1a20c }
    /* +0xd3de31 */ __asm { MOV EDX,0xe995d75f }
    /* +0xd3de36 */ __asm { MOV qword ptr [RBP + 0x848],R10 }
    /* +0xd3de3d */ __asm { MOV R10,-0x7ee898842068a26a }
    /* +0xd3de47 */ __asm { MOV qword ptr [RBP + 0x4c0],R10 }
    /* +0xd3de4e */ __asm { XOR EDX,0xc0000091 }
    /* +0xd3de54 */ __asm { ADD EDX,0xaf7c9644 }
    /* +0xd3de5a */ __asm { IMUL EDX,R9D }
    /* +0xd3de5e */ __asm { MOV R10,-0x6c1aaa4f8890c0c1 }
    /* +0xd3de68 */ __asm { MOV qword ptr [RBP + 0x600],R10 }
    /* +0xd3de6f */ __asm { MOV qword ptr [RBP + 0x8a0],RCX }
    /* +0xd3de76 */ __asm { MOV RCX,-0x774944d5cb6c52b }
    /* +0xd3de80 */ __asm { MOV qword ptr [RBP + 0x690],RCX }
    /* +0xd3de87 */ __asm { MOV qword ptr [RBP + 0x850],R8 }
    /* +0xd3de8e */ __asm { JMP 0x7fffa54adf00 }
    /* +0xd3de90 */ __asm { MOV R10,-0x6c1aaa4f8890c0c1 }
    /* +0xd3de9a */ __asm { MOV qword ptr [RBP + 0x600],R10 }
    /* +0xd3dea1 */ __asm { MOV EDX,0xd5ef5c16 }
    /* +0xd3dea6 */ __asm { MOV R10,-0x1f6f0bc53fc9752 }
    /* +0xd3deb0 */ __asm { MOV qword ptr [RBP + 0x4f8],R10 }
    /* +0xd3deb7 */ __asm { MOV R10,-0x4cdac6385dd1a20c }
    /* +0xd3dec1 */ __asm { MOV R11,-0x7ee898842068a26a }
    /* +0xd3decb */ __asm { MOV qword ptr [RBP + 0x4c0],R11 }
    /* +0xd3ded2 */ __asm { MOV qword ptr [RBP + 0x8a0],RCX }
    /* +0xd3ded9 */ __asm { MOV qword ptr [RBP + 0x850],R8 }
    /* +0xd3dee0 */ __asm { SUB EDX,ESI }
    /* +0xd3dee2 */ __asm { XOR EDX,0xbd67c569 }
    /* +0xd3dee8 */ __asm { MOV qword ptr [RBP + 0x848],R10 }
    /* +0xd3deef */ __asm { MOV RCX,-0x774944d5cb6c52b }
    /* +0xd3def9 */ __asm { MOV qword ptr [RBP + 0x690],RCX }
    /* +0xd3df00 */ __asm { MOV qword ptr [RBP + 0x8a8],RDI }
    /* +0xd3df07 */ __asm { MOV R10,-0x5d3f8108966f192 }
    /* +0xd3df11 */ __asm { MOV R8D,0x5c5991fe }
    /* +0xd3df17 */ __asm { ADD R8D,0xdb2fc5e }
    /* +0xd3df1e */ __asm { MOV R11,-0x7b83a4e11bfabb20 }
    /* +0xd3df28 */ __asm { MOV RCX,0x481a7cb7fe57478a }
    /* +0xd3df32 */ __asm { MOV qword ptr [RBP + 0x930],RCX }
    /* +0xd3df39 */ __asm { MOV EDI,EDX }
    /* +0xd3df3b */ __asm { OR EDI,0x1 }
    /* +0xd3df3e */ __asm { IMUL R8D,EDI }
}


// ============================================================================
// Function : Unwind@7fffa54e3560  |  RVA: 0xd73560  |  Size: 343 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54e3560(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x858)) {
    pcVar1 = (code *)((int64_t)(short)(0x2bd9U - (short)*(uint32_t *)(param_2 + 0x7f8) ^ 0x31ab)
                     + 0x7fffa568d820);
    (*pcVar1)(*(uint64_t *)(param_2 + 0x7f0),pcVar1,
              *(uint64_t *)(param_2 + 0x840) >> 0x3d ^ *(uint64_t *)(param_2 + 0x840));
  }
  *(uint64_t *)(param_2 + 0x858) = 7;
  *(uint16_t *)(param_2 + 0x840) = 0;
  *(uint64_t *)(param_2 + 0x850) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa54e36c0  |  RVA: 0xd736c0  |  Size: 509 bytes
// Callers  : none
// Callees  : none
// ============================================================================
IMAGE_DOS_HEADER * Unwind_7fffa54e36c0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  IMAGE_DOS_HEADER *pIVar3;
  uint32_t uVar4;
  
  uVar1 = *(uint64_t *)(param_2 + 0x840);
  if (uVar1 != 0) {
    uVar4 = ~(*(int *)(param_2 + 0x600) * -0x3f0bc000);
    (*(code *)((int64_t)(int)(uVar4 << 0x12 | uVar4 >> 0xe) + 0x7fffa5696880))
              (*(uint64_t *)(param_2 + 0x520),0x7fffa5696880,uVar1 >> 0x3d ^ uVar1);
  }
  pIVar3 = &IMAGE_DOS_HEADER_7fffa4770000;
  uVar1 = *(uint64_t *)(param_2 + 0x4d0);
  if (uVar1 != 0) {
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x7f8) & 0xf;
    pIVar3 = (IMAGE_DOS_HEADER *)
             (*(code *)((int64_t)
                        (short)(((uint16_t)*(uint64_t *)(param_2 + 0x650) | 1) *
                               (-0x264e << bVar2 | 0xd9b2U >> 0x10 - bVar2)) + 0x7fffa5687e54))
                       ((uint64_t)*(uint32_t *)(param_2 + 0x1d0) * 0x33f4f50e,0x7fffa5687e54,
                        uVar1 >> 0x3d ^ uVar1);
    *(uint8_t (*) [16])(param_2 + 0x4d0) = (uint8_t  [16])0x0;
    *(uint64_t *)(param_2 + 0x4e0) = 0;
  }
  *(uint64_t *)(param_2 + 0x7e8) = 0;
  return pIVar3;
}


// ============================================================================
// Function : Catch@7fffa54e38c0  |  RVA: 0xd738c0  |  Size: 248 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa54e38c0(uint64_t param_1,int64_t param_2)

{
  *(uint64_t *)(param_2 + 0x6c0) = *(uint64_t *)(param_2 + 0x840);
  return &UNK_7fffa54cf309;
}


// ============================================================================
// Function : Unwind@7fffa54e39c0  |  RVA: 0xd739c0  |  Size: 352 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54e39c0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  code *pcVar3;
  
  if (7 < *(uint64_t *)(param_2 + 0x738)) {
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x298) & 0xf;
    pcVar3 = (code *)((int64_t)(short)~(0xe20cU >> bVar2 | -0x1df4 << 0x10 - bVar2) +
                     0x7fffa568ed37);
    uVar1 = *(uint64_t *)(param_2 + 0x720);
    (*pcVar3)(pcVar3,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  *(uint16_t *)(param_2 + 0x720) = 0;
  *(uint64_t *)(param_2 + 0x730) = 0;
  *(uint64_t *)(param_2 + 0x738) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa54e3b20  |  RVA: 0xd73b20  |  Size: 364 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54e3b20(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x568)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x298) & 0xf;
    pcVar2 = (code *)((int64_t)(short)~(-0x7f83 << bVar1 | 0x807dU >> 0x10 - bVar1) +
                     0x7fffa5687d2c);
    (*pcVar2)(pcVar2,0x7fffa5687d2c,
              *(uint64_t *)(param_2 + 0x550) >> 0x3d ^ *(uint64_t *)(param_2 + 0x550));
  }
  *(uint64_t *)(param_2 + 0x560) = 0;
  *(uint16_t *)(param_2 + 0x550) = 0;
  *(uint64_t *)(param_2 + 0x568) = 7;
  *(uint64_t *)(param_2 + 0x7e8) = *(uint64_t *)(param_2 + 0x608);
  return;
}


// ============================================================================
// Function : Catch@7fffa54e3c90  |  RVA: 0xd73c90  |  Size: 234 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa54e3c90(void)

{
  return &UNK_7fffa54cf3cb;
}


// ============================================================================
// Function : Unwind@7fffa54e3d80  |  RVA: 0xd73d80  |  Size: 365 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54e3d80(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  code *pcVar3;
  
  if (7 < *(uint64_t *)(param_2 + 0x568)) {
    uVar1 = *(uint64_t *)(param_2 + 0x550);
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x970) & 0x1f;
    pcVar3 = (code *)((int64_t)
                      (int)(((0xcd08d921U >> bVar2 | -0x32f726df << 0x20 - bVar2) -
                            *(int *)(param_2 + 0x7f8)) * 0x7ffe0241) + 0x7fffa5690ccb);
    (*pcVar3)(pcVar3,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  *(uint16_t *)(param_2 + 0x550) = 0;
  *(uint64_t *)(param_2 + 0x568) = 7;
  *(uint64_t *)(param_2 + 0x560) = 0;
  *(uint64_t *)(param_2 + 0x7e8) = *(uint64_t *)(param_2 + 0x608);
  return;
}


// ============================================================================
// Function : Unwind@7fffa54e3ef0  |  RVA: 0xd73ef0  |  Size: 357 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54e3ef0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint16_t uVar2;
  short sVar3;
  
  if (7 < *(uint64_t *)(param_2 + 0x858)) {
    uVar2 = (uint16_t)((int)*(uint64_t *)(param_2 + 0x7f8) + 0xb26);
    sVar3 = (short)((uint32_t)(uint16_t)(uVar2 << 3 | uVar2 >> 0xd) - *(int *)(param_2 + 0x970));
    pcVar1 = (code *)((int64_t)(short)(sVar3 << 1 | (uint16_t)(sVar3 < 0)) + 0x7fffa5689783);
    (*pcVar1)(pcVar1,0x7fffa5689783,
              *(uint64_t *)(param_2 + 0x840) >> 0x3d ^ *(uint64_t *)(param_2 + 0x840));
  }
  *(uint64_t *)(param_2 + 0x850) = 0;
  *(uint16_t *)(param_2 + 0x840) = 0;
  *(uint64_t *)(param_2 + 0x858) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa54e4060  |  RVA: 0xd74060  |  Size: 455 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54e4060(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint8_t bVar4;
  int iVar5;
  uint32_t uVar6;
  int64_t lVar7;
  uint16_t uVar8;
  
  uVar1 = *(uint64_t *)(param_2 + 0x608);
  if (*(int64_t *)(param_2 + 0x620) != 0) {
    uVar2 = *(uint64_t *)(param_2 + 0x7f8);
    iVar5 = -0x585ee67f - (int)uVar2;
    bVar4 = (uint8_t)uVar2 & 0x1f;
    uVar6 = (0xb06dbfe8U >> bVar4 | -0x4f924018 << 0x20 - bVar4) * *(int *)(param_2 + 0x6a8);
    plVar3 = *(int64_t **)
              ((int64_t)
               (short)((short)(((uint32_t)*(uint64_t *)(param_2 + 0x7f0) | 1) * 0x22ea) +
                      (uint16_t)uVar2) + 0x7fffa4787324);
    if (plVar3 == (int64_t *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar3;
    }
    uVar8 = ((uint16_t)uVar2 ^ 0xebdb) - (short)*(uint64_t *)(param_2 + 0x650);
    LOCK();
    plVar3 = (int64_t *)
             ((int64_t)(short)((uVar8 * 0x200 | uVar8 >> 7) * -0x4bf9) + 0x7fffa47c5f60);
    *plVar3 = *plVar3 + (*(int64_t *)
                          (uint64_t)((iVar5 * 2 | (uint32_t)(iVar5 < 0)) ^ *(uint32_t *)(param_2 + 0x520))
                        - (*(int64_t *)(uint64_t)(uVar6 * 0x10000 | uVar6 >> 0x10) +
                           *(int64_t *)(param_2 + 0x620) + lVar7));
    UNLOCK();
  }
  *(uint64_t *)(param_2 + 0x7e8) = uVar1;
  return;
}


// ============================================================================
// Function : Unwind@7fffa54e4230  |  RVA: 0xd74230  |  Size: 333 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54e4230(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x98)) {
    pcVar1 = (code *)((int64_t)
                      (short)~(((short)*(uint64_t *)(param_2 + 0x7f8) + 0x4bfd) * 0x448f) +
                     0x7fffa568f546);
    (*pcVar1)(*(uint64_t *)(param_2 + 0x7f8),pcVar1,
              *(uint64_t *)(param_2 + 0x80) >> 0x3d ^ *(uint64_t *)(param_2 + 0x80));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa54e4380  |  RVA: 0xd74380  |  Size: 355 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54e4380(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x568)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x280) & 0xf;
    pcVar2 = (code *)((int64_t)
                      (short)((0x91aaU >> bVar1 | -0x6e56 << 0x10 - bVar1) -
                             (short)*(uint64_t *)(param_2 + 0x7f8)) + 0x7fffa568c979);
    (*pcVar2)(pcVar2,0x7fffa568c979,
              *(uint64_t *)(param_2 + 0x550) >> 0x3d ^ *(uint64_t *)(param_2 + 0x550));
  }
  *(uint16_t *)(param_2 + 0x550) = 0;
  *(uint64_t *)(param_2 + 0x568) = 7;
  *(uint64_t *)(param_2 + 0x560) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa54e44f0  |  RVA: 0xd744f0  |  Size: 1626 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa54e44f0(void) {
    /* +0xd744f0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0xd744f5 */ __asm { PUSH RBP }
    /* +0xd744f6 */ __asm { PUSH RBX }
    /* +0xd744f7 */ __asm { PUSH RDI }
    /* +0xd744f8 */ __asm { PUSH RSI }
    /* +0xd744f9 */ __asm { PUSH R12 }
    /* +0xd744fb */ __asm { PUSH R14 }
    /* +0xd744fd */ __asm { PUSH R15 }
    /* +0xd744ff */ __asm { PUSH R13 }
    /* +0xd74501 */ __asm { SUB RSP,0x108 }
    /* +0xd74508 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0xd7450f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM14 }
    /* +0xd74516 */ __asm { MOVAPS xmmword ptr [RSP + 0x70],XMM10 }
    /* +0xd7451c */ __asm { MOVAPS xmmword ptr [RSP + 0x80],XMM6 }
    /* +0xd74524 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM11 }
    /* +0xd7452e */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM7 }
    /* +0xd74537 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM13 }
    /* +0xd74541 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM8 }
    /* +0xd7454b */ __asm { MOVAPS xmmword ptr [RSP + 0xd0],XMM15 }
    /* +0xd74554 */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM9 }
    /* +0xd7455e */ __asm { MOVAPS xmmword ptr [RSP + 0xf0],XMM12 }
    /* +0xd74567 */ __asm { MOV R10,qword ptr [RBP + 0x768] }
    /* +0xd7456e */ __asm { TEST R10,R10 }
    /* +0xd74571 */ __asm { JZ 0x7fffa54e4f67 }
    /* +0xd74577 */ __asm { MOV ECX,0xebd46555 }
    /* +0xd7457c */ __asm { RDTSC }
    /* +0xd7457e */ __asm { SHL RDX,0x20 }
    /* +0xd74582 */ __asm { OR RDX,RAX }
    /* +0xd74585 */ __asm { MOV R9W,0x83c5 }
    /* +0xd7458a */ __asm { MOV RSI,qword ptr [RBP + 0x778] }
    /* +0xd74591 */ __asm { XOR R9D,ESI }
    /* +0xd74594 */ __asm { NOT R9D }
    /* +0xd74597 */ __asm { SUB R9D,dword ptr [RBP + 0x1c0] }
    /* +0xd7459e */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xd745a8 */ __asm { IMUL RDX,R11 }
    /* +0xd745ac */ __asm { MOV EAX,0xff786a85 }
    /* +0xd745b1 */ __asm { MOV R11,-0x22b18422c4a9c65e }
    /* +0xd745bb */ __asm { ADD RDX,R11 }
    /* +0xd745be */ __asm { MOV R12D,EDX }
    /* +0xd745c1 */ __asm { XOR R12D,0x1b }
    /* +0xd745c5 */ __asm { MOV R8,RDX }
    /* +0xd745c8 */ __asm { SHR R8,0x3b }
    /* +0xd745cc */ __asm { MOV R11,RDX }
    /* +0xd745cf */ __asm { SHR R11,0x2d }
    /* +0xd745d3 */ __asm { MOV R15D,0x7f7c0f59 }
    /* +0xd745d9 */ __asm { SUB R15D,ECX }
    /* +0xd745dc */ __asm { ADD EAX,dword ptr [RBP + 0x758] }
    /* +0xd745e2 */ __asm { ROL EAX,0x3 }
    /* +0xd745e5 */ __asm { MOV RCX,qword ptr [RBP + 0x218] }
    /* +0xd745ec */ __asm { ROL R15D,CL }
    /* +0xd745ef */ __asm { SHR RDX,0x1b }
    /* +0xd745f3 */ __asm { XOR R11D,EDX }
    /* +0xd745f6 */ __asm { NOT R15D }
    /* +0xd745f9 */ __asm { MOVSXD RDX,R15D }
    /* +0xd745fc */ __asm { CMP RDX,RAX }
    /* +0xd745ff */ __asm { CMOVG R8D,R12D }
    /* +0xd74603 */ __asm { MOV ECX,R8D }
    /* +0xd74606 */ __asm { ROR R11D,CL }
    /* +0xd74609 */ __asm { MOVZX R9D,R9W }
    /* +0xd7460d */ __asm { AND R11D,0x3 }
    /* +0xd74611 */ __asm { CMP R11D,R9D }
    /* +0xd74614 */ __asm { JNC 0x7fffa54e4c0a }
    /* +0xd7461a */ __asm { CMP R11D,0x1 }
    /* +0xd7461e */ __asm { MOV R12,qword ptr [RBP + 0x770] }
    /* +0xd74625 */ __asm { JNZ 0x7fffa54e4c72 }
    /* +0xd7462b */ __asm { MOV EAX,0xab181b15 }
    /* +0xd74630 */ __asm { MOV R9D,0xe71413a9 }
    /* +0xd74636 */ __asm { MOV R11,qword ptr [RBP + 0x8f0] }
    /* +0xd7463d */ __asm { MOV R8D,R11D }
    /* +0xd74640 */ __asm { OR R8D,0x1 }
    /* +0xd74644 */ __asm { MOVD XMM0,ESI }
    /* +0xd74648 */ __asm { MOV EDX,0x4904de2c }
    /* +0xd7464d */ __asm { ADD EDX,0xa49d4a6a }
    /* +0xd74653 */ __asm { MOV R11,RAX }
    /* +0xd74656 */ __asm { ROL R11,0x10 }
    /* +0xd7465a */ __asm { MOV R15,0x234f665c20d0b9ad }
    /* +0xd74664 */ __asm { MOV ECX,ESI }
    /* +0xd74666 */ __asm { ROR EDX,CL }
    /* +0xd74668 */ __asm { MOV ECX,R12D }
    /* +0xd7466b */ __asm { ROL EDX,CL }
    /* +0xd7466d */ __asm { MOV RCX,R11 }
    /* +0xd74670 */ __asm { IMUL RCX,R15 }
    /* +0xd74674 */ __asm { XOR EDX,0x415042f8 }
    /* +0xd7467a */ __asm { MOVSXD RDX,EDX }
    /* +0xd7467d */ __asm { ADD R9D,0x4562a67a }
    /* +0xd74684 */ __asm { IMUL R9D,R8D }
    /* +0xd74688 */ __asm { OR R11,R15 }
    /* +0xd7468b */ __asm { MOVD XMM3,R9D }
    /* +0xd74690 */ __asm { PXOR XMM3,XMM0 }
    /* +0xd74694 */ __asm { MOVD R8D,XMM3 }
    /* +0xd74699 */ __asm { CMP RDX,R8 }
    /* +0xd7469c */ __asm { CMOVL R11,RCX }
    /* +0xd746a0 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xd746a7 */ __asm { NOP }
    /* +0xd746a8 */ __asm { MOV RCX,0x0 }
    /* +0xd746af */ __asm { MOV RDX,0x5447a29347d473aa }
    /* +0xd746b9 */ __asm { CMP R11,RDX }
    /* +0xd746bc */ __asm { MOV RDI,qword ptr [RBP + 0x4a0] }
    /* +0xd746c3 */ __asm { NOP }
    /* +0xd746c4 */ __asm { NOP }
    /* +0xd746c5 */ __asm { NOP }
    /* +0xd746c6 */ __asm { NOP }
    /* +0xd746c7 */ __asm { NOP }
    /* +0xd746c8 */ __asm { NOP }
    /* +0xd746c9 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xd746d0 */ __asm { MOV RCX,0x0 }
    /* +0xd746d7 */ __asm { MOV EDX,dword ptr [RAX + -0x2b1a1851] }
    /* +0xd746dd */ __asm { MOV R11,0x5555555555555556 }
    /* +0xd746e7 */ __asm { IMUL R11,RDX }
    /* +0xd746eb */ __asm { RDTSC }
    /* +0xd746ed */ __asm { SHL RDX,0x20 }
    /* +0xd746f1 */ __asm { OR RDX,RAX }
    /* +0xd746f4 */ __asm { MOV RCX,0x5555555555555555 }
    /* +0xd746fe */ __asm { CMP R11,RCX }
    /* +0xd74701 */ __asm { MOV R15,qword ptr [RBP + 0x700] }
    /* +0xd74708 */ __asm { MOV R14,qword ptr [RBP + 0x5d0] }
    /* +0xd7470f */ __asm { JA 0x7fffa54e4d12 }
    /* +0xd74715 */ __asm { MOV R11,0x7facc0f7a00541bd }
    /* +0xd7471f */ __asm { IMUL RDX,R11 }
    /* +0xd74723 */ __asm { MOV R8,0x322364564f91b0a6 }
    /* +0xd7472d */ __asm { ADD R8,RDX }
    /* +0xd74730 */ __asm { MOV R11,R8 }
    /* +0xd74733 */ __asm { SHR R11,0x2d }
    /* +0xd74737 */ __asm { MOV R9W,0xc314 }
    /* +0xd7473c */ __asm { SUB R9D,R14D }
    /* +0xd7473f */ __asm { IMUL R9D,R9D,0x3c25 }
    /* +0xd74746 */ __asm { MOV ECX,ESI }
    /* +0xd74748 */ __asm { ROL R9W,CL }
    /* +0xd7474c */ __asm { MOV RDX,R8 }
    /* +0xd7474f */ __asm { SHR RDX,0x1b }
    /* +0xd74753 */ __asm { XOR EDX,R11D }
    /* +0xd74756 */ __asm { SHR R8,0x3b }
    /* +0xd7475a */ __asm { MOV ECX,R8D }
    /* +0xd7475d */ __asm { ROR EDX,CL }
    /* +0xd7475f */ __asm { MOVZX R8D,R9W }
    /* +0xd74763 */ __asm { MOV R11,qword ptr GS:[R8] }
    /* +0xd74767 */ __asm { MOV R11,qword ptr [R11 + 0xcd0] }
    /* +0xd7476e */ __asm { MOV RCX,-0x59c5b4d5dd92d87d }
    /* +0xd74778 */ __asm { MOV RCX,-0x308f5f83b803905f }
    /* +0xd74782 */ __asm { CMP R11,RCX }
    /* +0xd74785 */ __asm { JZ 0x7fffa54e4fd3 }
    /* +0xd7478b */ __asm { CMP EDX,0x44fe5f }
    /* +0xd74791 */ __asm { MOV R8,qword ptr [RBP + 0x218] }
    /* +0xd74798 */ __asm { MOV R12D,dword ptr [RBP + 0x580] }
    /* +0xd7479f */ __asm { JA 0x7fffa54e4be0 }
    /* +0xd747a5 */ __asm { PUSHFQ }
    /* +0xd747a6 */ __asm { POP RAX }
    /* +0xd747a7 */ __asm { TEST EAX,0x100 }
    /* +0xd747ac */ __asm { NOP }
    /* +0xd747ad */ __asm { NOP }
    /* +0xd747ae */ __asm { NOP }
    /* +0xd747af */ __asm { NOP }
    /* +0xd747b0 */ __asm { NOP }
    /* +0xd747b1 */ __asm { MOV R9D,0xe2eb8932 }
    /* +0xd747b7 */ __asm { MOV ECX,0x8001ffeb }
    /* +0xd747bc */ __asm { SUB ECX,R9D }
    /* +0xd747bf */ __asm { XOR ECX,EDI }
    /* +0xd747c1 */ __asm { MOV dword ptr [RBP + 0x430],ECX }
    /* +0xd747c7 */ __asm { MOV R9D,dword ptr [RBP + 0x430] }
    /* +0xd747ce */ __asm { MOV ECX,0xdb2fb34d }
    /* +0xd747d3 */ __asm { IMUL ECX,R12D }
    /* +0xd747d7 */ __asm { MOV R11,qword ptr [RBP + 0x1c0] }
    /* +0xd747de */ __asm { MOV EAX,R11D }
    /* +0xd747e1 */ __asm { ROL ECX,0x18 }
    /* +0xd747e4 */ __asm { OR EAX,0x1 }
    /* +0xd747e7 */ __asm { XOR ECX,0xe2bdb49d }
    /* +0xd747ed */ __asm { IMUL ECX,EAX }
    /* +0xd747f0 */ __asm { CMP R9D,ECX }
    /* +0xd747f3 */ __asm { NOP }
    /* +0xd747f4 */ __asm { NOP }
    /* +0xd747f5 */ __asm { NOP }
    /* +0xd747f6 */ __asm { NOP }
    /* +0xd747f7 */ __asm { NOP }
    /* +0xd747f8 */ __asm { NOP }
    /* +0xd747f9 */ __asm { NOP }
    /* +0xd747fa */ __asm { NOP }
    /* +0xd747fb */ __asm { NOP }
    /* +0xd747fc */ __asm { NOP }
    /* +0xd747fd */ __asm { NOP }
    /* +0xd747fe */ __asm { NOP }
    /* +0xd747ff */ __asm { NOP }
    /* +0xd74800 */ __asm { NOP }
    /* +0xd74801 */ __asm { NOP }
    /* +0xd74802 */ __asm { NOP }
    /* +0xd74803 */ __asm { NOP }
    /* +0xd74be0 */ __asm { LEA RCX,[0x7fffa4780609] }
    /* +0xd74be7 */ __asm { MOV R11,-0x1434e8b26b9f45ed }
    /* +0xd74bf1 */ __asm { CMP RCX,R11 }
    /* +0xd74bf4 */ __asm { NOP }
    /* +0xd74bf5 */ __asm { NOP }
    /* +0xd74bf6 */ __asm { NOP }
    /* +0xd74bf7 */ __asm { NOP }
    /* +0xd74bf8 */ __asm { MOV qword ptr [RBP + 0x430],RAX }
    /* +0xd74bff */ __asm { MOV EAX,dword ptr [RCX + 0x4027] }
    /* +0xd74c05 */ __asm { JMP 0x7fffa54e4f65 }
    /* +0xd74c0a */ __asm { MOV R9W,0x768c }
    /* +0xd74c0f */ __asm { MOV R8,qword ptr [RBP + 0x770] }
    /* +0xd74c16 */ __asm { SUB R9D,R8D }
    /* +0xd74c19 */ __asm { IMUL ECX,R9D,0x6c85 }
    /* +0xd74c20 */ __asm { LEA R9D,[RSI + RCX*0x1] }
    /* +0xd74c24 */ __asm { ROL R9W,0x3 }
    /* +0xd74c29 */ __asm { MOVZX R9D,R9W }
    /* +0xd74c2d */ __asm { CMP R11D,R9D }
    /* +0xd74c30 */ __asm { JC 0x7fffa54e4c9e }
    /* +0xd74c32 */ __asm { LEA RCX,[0x7fffa47b7e1b] }
    /* +0xd74c39 */ __asm { MOV R11D,0xb9337070 }
    /* +0xd74c3f */ __asm { ADD R11,RCX }
    /* +0xd74c42 */ __asm { ROL R11,0x34 }
    /* +0xd74c46 */ __asm { ADD R11,0x3e874f28 }
    /* +0xd74c4d */ __asm { MOV RDX,-0x3c3e3dd88822b339 }
    /* +0xd74c57 */ __asm { CMP R11,RDX }
    /* +0xd74c5a */ __asm { JZ 0x7fffa54e4fe3 }
    /* +0xd74c60 */ __asm { MOV qword ptr [RBP + 0x430],RAX }
    /* +0xd74c67 */ __asm { MOV EAX,dword ptr [RCX + 0x521d] }
    /* +0xd74c6d */ __asm { JMP 0x7fffa54e4f65 }
    /* +0xd74c72 */ __asm { LEA RCX,[0x7fffa47bf183] }
    /* +0xd74c79 */ __asm { MOV R11,-0x52eac72410a6f0eb }
    /* +0xd74c83 */ __asm { CMP RCX,R11 }
    /* +0xd74c86 */ __asm { JZ 0x7fffa54e4feb }
    /* +0xd74c8c */ __asm { MOV qword ptr [RBP + 0x430],RAX }
    /* +0xd74c93 */ __asm { MOV EAX,dword ptr [RCX + -0x214b] }
    /* +0xd74c99 */ __asm { JMP 0x7fffa54e4f65 }
    /* +0xd74c9e */ __asm { MOV ECX,0xce27b55c }
    /* +0xd74ca3 */ __asm { MOV R11,-0x110e0b86c16ebbb7 }
    /* +0xd74cad */ __asm { CMP RCX,R11 }
    /* +0xd74cb0 */ __asm { NOP }
    /* +0xd74cb1 */ __asm { NOP }
    /* +0xd74cb2 */ __asm { NOP }
    /* +0xd74cb3 */ __asm { NOP }
    /* +0xd74cb4 */ __asm { NOP }
    /* +0xd74cb5 */ __asm { MOV EDX,dword ptr [RCX + -0x4e29b298] }
    /* +0xd74cbb */ __asm { MOV R11,0x5555555555555556 }
    /* +0xd74cc5 */ __asm { IMUL R11,RDX }
    /* +0xd74cc9 */ __asm { MOV RDX,0x5555555555555555 }
    /* +0xd74cd3 */ __asm { CMP R11,RDX }
    /* +0xd74cd6 */ __asm { JA 0x7fffa54e4f3e }
    /* +0xd74cdc */ __asm { LEA RCX,[0x7fffa47c14dd] }
    /* +0xd74ce3 */ __asm { MOV R11,-0x1520d34d0940d5dd }
    /* +0xd74ced */ __asm { SUB R11,R8 }
    /* +0xd74cf0 */ __asm { ROL R11,0xe }
    /* +0xd74cf4 */ __asm { SUB R11,RSI }
    /* +0xd74cf7 */ __asm { CMP RCX,R11 }
    /* +0xd74cfa */ __asm { JZ 0x7fffa54e4ffa }
    /* +0xd74d00 */ __asm { MOV qword ptr [RBP + 0x430],RAX }
    /* +0xd74d07 */ __asm { MOV EAX,dword ptr [RCX + -0x44a5] }
    /* +0xd74d0d */ __asm { JMP 0x7fffa54e4f65 }
    /* +0xd74d12 */ __asm { MOV R11,0x40bb9a45844903eb }
    /* +0xd74d1c */ __asm { SUB R11,RSI }
    /* +0xd74d1f */ __asm { MOV RDI,qword ptr [RBP + 0x8f0] }
    /* +0xd74d26 */ __asm { MOV R8,RDI }
    /* +0xd74d29 */ __asm { OR R8,0x1 }
    /* +0xd74d2d */ __asm { IMUL R8,R11 }
    /* +0xd74d31 */ __asm { MOV R11,-0x5b596a0ee0e87373 }
    /* +0xd74d3b */ __asm { IMUL RDX,R11 }
    /* +0xd74d3f */ __asm { ADD RDX,R8 }
    /* +0xd74d42 */ __asm { ADD RDX,0x418aabf }
    /* +0xd74d49 */ __asm { MOV RCX,RDX }
    /* +0xd74d4c */ __asm { SHR RCX,0x3b }
    /* +0xd74d50 */ __asm { MOV R8,RDX }
    /* +0xd74d53 */ __asm { SHR R8,0x1b }
    /* +0xd74d57 */ __asm { SHR RDX,0x2d }
    /* +0xd74d5b */ __asm { XOR R8D,EDX }
    /* +0xd74d5e */ __asm { ROR R8D,CL }
    /* +0xd74d61 */ __asm { MOV dword ptr [RBP + 0x430],0xb6ffef69 }
    /* +0xd74d6b */ __asm { MOV R9D,dword ptr [RBP + 0x430] }
    /* +0xd74d72 */ __asm { CMP R8D,0x413f67c }
    /* +0xd74d79 */ __asm { JA 0x7fffa54e4f15 }
    /* +0xd74d7f */ __asm { MOV dword ptr [RBP + 0x430],0xd0676f57 }
    /* +0xd74d89 */ __asm { MOV R9D,dword ptr [RBP + 0x430] }
    /* +0xd74d90 */ __asm { MOV EAX,0x7a650c5 }
    /* +0xd74d95 */ __asm { XOR EAX,ESI }
    /* +0xd74d97 */ __asm { ADD EAX,0x15fbaac5 }
    /* +0xd74d9c */ __asm { MOV ECX,R12D }
    /* +0xd74d9f */ __asm { ROL EAX,CL }
    /* +0xd74da1 */ __asm { SUB EDI,ESI }
    /* +0xd74da3 */ __asm { MOV R11D,0x10e91c05 }
    /* +0xd74da9 */ __asm { LEA EDX,[RDI + R11*0x1] }
    /* +0xd74dad */ __asm { ADD EDX,0xe9dfc14 }
    /* +0xd74db3 */ __asm { MOVSXD R11,EAX }
    /* +0xd74db6 */ __asm { CMP R11,RDX }
    /* +0xd74db9 */ __asm { NOP }
    /* +0xd74dba */ __asm { NOP }
    /* +0xd74dbb */ __asm { NOP }
    /* +0xd74dbc */ __asm { NOP }
    /* +0xd74dbd */ __asm { NOP }
    /* +0xd74dbe */ __asm { NOP }
    /* +0xd74dbf */ __asm { NOP }
    /* +0xd74dc0 */ __asm { NOP }
    /* +0xd74dc1 */ __asm { NOP }
    /* +0xd74dc2 */ __asm { NOP }
    /* +0xd74dc3 */ __asm { NOP }
    /* +0xd74dc4 */ __asm { NOP }
    /* +0xd74dc5 */ __asm { PXOR XMM0,XMM0 }
    /* +0xd74dc9 */ __asm { MOVDQA xmmword ptr [RBP + 0x430],XMM0 }
    /* +0xd74dd1 */ __asm { MOV dword ptr [RBP + 0x650],0xffbfacb5 }
    /* +0xd74ddb */ __asm { MOV R9D,dword ptr [RBP + 0x650] }
    /* +0xd74de2 */ __asm { MOV ECX,0x7ba45262 }
    /* +0xd74de7 */ __asm { ADD ECX,ESI }
    /* +0xd74de9 */ __asm { XOR ECX,0x10309b11 }
    /* +0xd74def */ __asm { CMP R9D,ECX }
    /* +0xd74df2 */ __asm { MOV R8D,dword ptr [RBP + 0x580] }
    /* +0xd74df9 */ __asm { JBE 0x7fffa54e5002 }
    /* +0xd74dff */ __asm { MOV dword ptr [RBP + 0x430],0x0 }
    /* +0xd74e09 */ __asm { MOV dword ptr [RBP + 0x650],0xb17965e4 }
    /* +0xd74e13 */ __asm { MOV R9D,dword ptr [RBP + 0x650] }
    /* +0xd74e1a */ __asm { CMP R9D,0xbeed7f64 }
    /* +0xd74e21 */ __asm { NOP }
    /* +0xd74e22 */ __asm { NOP }
    /* +0xd74e23 */ __asm { NOP }
    /* +0xd74e24 */ __asm { NOP }
    /* +0xd74e25 */ __asm { NOP }
    /* +0xd74e26 */ __asm { NOP }
    /* +0xd74e27 */ __asm { NOP }
    /* +0xd74e28 */ __asm { NOP }
    /* +0xd74e29 */ __asm { NOP }
    /* +0xd74e2a */ __asm { NOP }
    /* +0xd74e2b */ __asm { NOP }
    /* +0xd74e2c */ __asm { NOP }
    /* +0xd74e2d */ __asm { NOP }
    /* +0xd74e2e */ __asm { NOP }
    /* +0xd74e2f */ __asm { NOP }
    /* +0xd74e30 */ __asm { NOP }
    /* +0xd74e31 */ __asm { NOP }
    /* +0xd74f15 */ __asm { LEA RCX,[0x7fffa4786471] }
    /* +0xd74f1c */ __asm { MOV R11,-0x1003879a272d1874 }
    /* +0xd74f26 */ __asm { CMP RCX,R11 }
    /* +0xd74f29 */ __asm { JZ 0x7fffa54e5027 }
    /* +0xd74f2f */ __asm { MOV qword ptr [RBP + 0x430],RAX }
    /* +0xd74f36 */ __asm { MOV EAX,dword ptr [RCX + -0x1e41] }
    /* +0xd74f3c */ __asm { JMP 0x7fffa54e4f65 }
    /* +0xd74f3e */ __asm { LEA RCX,[0x7fffa47b4d60] }
    /* +0xd74f45 */ __asm { MOV R11,0x344716c56d884454 }
    /* +0xd74f4f */ __asm { CMP RCX,R11 }
    /* +0xd74f52 */ __asm { JZ 0x7fffa54e5035 }
    /* +0xd74f58 */ __asm { MOV qword ptr [RBP + 0x430],RAX }
    /* +0xd74f5f */ __asm { MOV EAX,dword ptr [RCX + 0x77cc] }
    /* +0xd74f65 */ __asm { SYSCALL }
    /* +0xd74f67 */ __asm { MOVAPS XMM12,xmmword ptr [RSP + 0xf0] }
    /* +0xd74f70 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0xe0] }
    /* +0xd74f7a */ __asm { MOVAPS XMM15,xmmword ptr [RSP + 0xd0] }
    /* +0xd74f83 */ __asm { MOVDQA XMM8,xmmword ptr [RSP + 0xc0] }
    /* +0xd74f8d */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0xb0] }
    /* +0xd74f97 */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xa0] }
    /* +0xd74fa0 */ __asm { MOVDQA XMM11,xmmword ptr [RSP + 0x90] }
    /* +0xd74faa */ __asm { MOVAPS XMM6,xmmword ptr [RSP + 0x80] }
    /* +0xd74fb2 */ __asm { MOVAPS XMM10,xmmword ptr [RSP + 0x70] }
    /* +0xd74fb8 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0x60] }
    /* +0xd74fbf */ __asm { ADD RSP,0x108 }
    /* +0xd74fc6 */ __asm { POP R13 }
    /* +0xd74fc8 */ __asm { POP R15 }
    /* +0xd74fca */ __asm { POP R14 }
    /* +0xd74fcc */ __asm { POP R12 }
    /* +0xd74fce */ __asm { POP RSI }
    /* +0xd74fcf */ __asm { POP RDI }
    /* +0xd74fd0 */ __asm { POP RBX }
    /* +0xd74fd1 */ __asm { POP RBP }
    /* +0xd74fd2 */ __asm { RET }
    /* +0xd74fd3 */ __asm { ADD qword ptr [RDX + -0x84f17],RAX }
    /* +0xd74fda */ __asm { PUSH RBX }
    /* +0xd74fdc */ __asm { XOR dword ptr [RBP + -0x75117],0x84692eff }
    /* +0xd74fe6 */ __asm { JMP 0x7fffa54e4c60 }
    /* +0xd74feb */ __asm { JMP 0x7fffa54e5042 }
    /* +0xd74ffa */ __asm { TEST dword ptr ES:[RDI + -0x30117],0xf478f0ff }
    /* +0xd75005 */ __asm { OR DX,DI }
    /* +0xd75008 */ __asm { LODSD RSI }
    /* +0xd75009 */ __asm { CMC }
    /* +0xd7500a */ __asm { POPFQ }
    /* +0xd75035 */ __asm { TEST dword ptr [R13 + -0xe417],0xccccccff }
}


// ============================================================================
// Function : Unwind@7fffa54e5040  |  RVA: 0xd75040  |  Size: 376 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54e5040(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  code *pcVar4;
  
  uVar3 = (int)*(uint64_t *)(param_2 + 0x7f8) + 0xa77869fe;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x240) & 0x1f;
  if ((uint64_t)(uVar3 >> bVar2 | uVar3 << 0x20 - bVar2) < *(uint64_t *)(param_2 + 0x568)) {
    uVar1 = *(uint64_t *)(param_2 + 0x550);
    pcVar4 = (code *)((int64_t)
                      (short)(((short)*(uint64_t *)(param_2 + 0x7f8) + 0x7f6fU ^
                              (uint16_t)*(uint64_t *)(param_2 + 0x240)) + 0xa284) + 0x7fffa568d9fd);
    (*pcVar4)(uVar1,pcVar4,uVar1 >> 0x3d ^ uVar1,0x5a8966e7);
  }
  *(uint64_t *)(param_2 + 0x560) = 0;
  *(uint16_t *)(param_2 + 0x550) = 0;
  *(uint64_t *)(param_2 + 0x568) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa54e51c0  |  RVA: 0xd751c0  |  Size: 304 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54e51c0(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x568)) {
    lVar1 = (int64_t)(-0x5bd32573 - (*(int *)(param_2 + 0x7f8) + 0x4ba5cfd2));
    (*(code *)(&UNK_7fffa5690793 + lVar1))
              (&UNK_7fffa5690793 + lVar1,lVar1,
               *(uint64_t *)(param_2 + 0x550) >> 0x3d ^ *(uint64_t *)(param_2 + 0x550));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa54e52f0  |  RVA: 0xd752f0  |  Size: 332 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54e52f0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint16_t uVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x568)) {
    uVar1 = *(uint64_t *)(param_2 + 0x550);
    uVar2 = 0xa0d5 - (short)*(uint32_t *)(param_2 + 0x520);
    uVar2 = (short)*(uint32_t *)(param_2 + 0x7e0) * (uVar2 * 0x40 | uVar2 >> 10);
    (*(code *)(&UNK_7fffa568a83a + (short)(uVar2 * 0x800 | uVar2 >> 5)))
              (*(uint64_t *)(param_2 + 0x7f8),uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa54e5440  |  RVA: 0xd75440  |  Size: 316 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa54e5440(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  code *pcVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x5c8)) {
    uVar1 = *(uint64_t *)(param_2 + 0x5b0);
    pcVar2 = (code *)((int64_t)
                      (short)((((uint16_t)*(uint64_t *)(param_2 + 0x520) | 1) * 0x7941 -
                              (short)*(uint64_t *)(param_2 + 0x7f8)) + -0x366d) + 0x7fffa568b72c);
    (*pcVar2)(pcVar2,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa54e557c  |  RVA: 0xd7557c  |  Size: 399 bytes
// Callers  : FUN_7fffa5101d40@0x991d40, FUN_7fffa5513504@0xda3504
// Callees  : FUN_7fffa564c5c0@0xedc5c0, FUN_7fffa5488850@0xd18850, FUN_7fffa562518c@0xeb518c, FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa56a65a0@0xf365a0, FUN_7fffa565caf0@0xeecaf0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa54e557c(uint64_t param_1,uint32_t param_2,uint64_t param_3,uint32_t param_4,
                     uint64_t param_5,int param_6,int param_7)

{
  int iVar1;
  int64_t lVar2;
  uint32_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint32_t *puVar6;
  uint8_t *puVar7;
  uint8_t *puVar8;
  uint8_t *puVar9;
  uint8_t auStack_88 [32];
  uint64_t uStack_68;
  uint32_t uStack_60;
  uint32_t auStack_58 [2];
  int64_t lStack_50;
  int64_t lStack_48;
  char cStack_38;
  uint64_t uStack_30;
  
  uStack_30 = _DAT_7fffa4780040 ^ (uint64_t)auStack_58;
  FUN_7fffa564c5c0(&lStack_50,param_1);
  if (param_6 == 0) {
    param_6 = *(int *)(lStack_48 + 0xc);
  }
  uStack_60 = 0;
  uStack_68 = 0;
  iVar1 = FUN_7fffa562518c(param_6,(-(param_7 != 0) & 8U) + 1,param_3,param_4);
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  if (iVar1 == 0) goto LAB_7fffa54e56d2;
  uVar5 = (int64_t)iVar1 * 2;
  uVar4 = -(uint64_t)(uVar5 < uVar5 + 0x10) & uVar5 + 0x10;
  if (uVar4 == 0) {
    puVar6 = (uint32_t *)0x0;
LAB_7fffa54e56ba:
    puVar9 = puVar8;
    if (puVar6 == (uint32_t *)0x0) goto LAB_7fffa54e56d2;
  }
  else {
    if (uVar4 < 0x401) {
      lVar2 = FUN_7fffa565caf0();
      lVar2 = -lVar2;
      puVar8 = auStack_88 + lVar2;
      puVar7 = auStack_88 + lVar2;
      puVar3 = (uint32_t *)((int64_t)auStack_58 + lVar2);
      puVar6 = (uint32_t *)0x0;
      if (puVar3 == (uint32_t *)0x0) goto LAB_7fffa54e56ba;
      *puVar3 = 0xcccc;
LAB_7fffa54e5668:
      puVar6 = puVar3 + 4;
      puVar8 = puVar7;
    }
    else {
      puVar3 = (uint32_t *)FUN_7fffa56a65a0();
      puVar8 = auStack_88;
      puVar7 = auStack_88;
      puVar6 = (uint32_t *)0x0;
      if (puVar3 != (uint32_t *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_7fffa54e5668;
      }
    }
    if (puVar6 == (uint32_t *)0x0) goto LAB_7fffa54e56ba;
    *(uint64_t *)(puVar8 + -8) = 0x7fffa54e567e;
    FUN_7fffa4ecf8e0(puVar6,0,uVar5);
    *(int *)(puVar8 + 0x28) = iVar1;
    *(uint32_t **)(puVar8 + 0x20) = puVar6;
    *(uint64_t *)(puVar8 + -8) = 0x7fffa54e569a;
    iVar1 = FUN_7fffa562518c(param_6,1,param_3,param_4);
    if (iVar1 == 0) goto LAB_7fffa54e56ba;
    *(uint64_t *)(puVar8 + -8) = 0x7fffa54e56b4;
    (*(code *)&DAT_7ff84ea38010)(param_2,puVar6,iVar1,param_5);
  }
  puVar9 = puVar8;
  if (puVar6[-4] == 0xdddd) {
    *(uint64_t *)(puVar8 + -8) = 0x7fffa54e56d2;
    FUN_7fffa52d8dd0();
  }
LAB_7fffa54e56d2:
  if (cStack_38 != '\0') {
    *(uint32_t *)(lStack_50 + 0x3a8) = *(uint32_t *)(lStack_50 + 0x3a8) & 0xfffffffd;
  }
  uVar5 = uStack_30 ^ (uint64_t)auStack_58;
  *(uint64_t *)(puVar9 + -8) = 0x7fffa54e56f1;
  FUN_7fffa5488850(uVar5);
  return;
}


// ============================================================================
// Function : FUN_7fffa54e570c  |  RVA: 0xd7570c  |  Size: 103 bytes
// Callers  : FUN_7fffa565d380@0xeed380, FUN_7fffa56a0690@0xf30690
// Callees  : FUN_7fffa5174bf0@0xa04bf0, FUN_7fffa55c8d00@0xe58d00, FUN_7fffa507a38c@0x90a38c
// ============================================================================
void FUN_7fffa54e570c(int64_t param_1,int64_t param_2)

{
  uint8_t **ppuVar1;
  
  if (*(int64_t *)(param_1 + 0x90) != 0) {
    FUN_7fffa5174bf0();
    ppuVar1 = *(uint8_t ***)(param_1 + 0x90);
    if (((ppuVar1 != (uint8_t **)PTR_PTR_7fffa4782608) && (ppuVar1 != &PTR_DAT_7fffa4780790)) &&
       (*(int *)(ppuVar1 + 2) == 0)) {
      FUN_7fffa507a38c();
    }
  }
  *(int64_t *)(param_1 + 0x90) = param_2;
  if (param_2 != 0) {
    FUN_7fffa55c8d00(param_2);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa54e5780  |  RVA: 0xd75780  |  Size: 77 bytes
// Callers  : none
// Callees  : FUN_7fffa560b2b0@0xe9b2b0
// ============================================================================
uint64_t * FUN_7fffa54e5780(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  *param_1 = &PTR_FUN_7fffa56f3928;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_7fffa560b2b0(param_2 + 8);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(uint64_t *)(param_2 + 0x20);
  param_1[3] = *(uint64_t *)(param_2 + 0x18);
  param_1[4] = uVar1;
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa54e57d0  |  RVA: 0xd757d0  |  Size: 1 bytes
// Callers  : FUN_7fffa549ae70@0xd2ae70
// Callees  : none
// ============================================================================
void FUN_7fffa54e57d0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa54e57f4  |  RVA: 0xd757f4  |  Size: 34 bytes
// Callers  : FUN_7fffa5427044@0xcb7044, FUN_7fffa505ca30@0x8eca30, FUN_7fffa50c9360@0x959360
// Callees  : FUN_7fffa5002cfc@0x892cfc
// ============================================================================
void FUN_7fffa54e57f4(uint32_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  *(uint8_t *)(param_2 + 0x38) = 1;
  *(uint32_t *)(param_2 + 0x34) = param_1;
  uVar1 = FUN_7fffa5002cfc();
  *(uint32_t *)(param_2 + 0x2c) = uVar1;
  *(uint8_t *)(param_2 + 0x30) = 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa54e5820  |  RVA: 0xd75820  |  Size: 4312 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int64_t FUN_7fffa54e5820(void)

{
  int64_t *plVar1;
  char *pcVar2;
  char *pcVar3;
  int64_t lVar4;
  bool bVar5;
  uint8_t uVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  uint32_t uVar14;
  int64_t lVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint32_t uVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint64_t *puVar21;
  uint64_t *puVar22;
  uint32_t uVar23;
  uint64_t uVar24;
  int64_t lVar25;
  uint8_t *pbVar26;
  int iVar27;
  uint64_t in_R9;
  int64_t in_R10;
  uint64_t *puVar28;
  uint64_t uVar29;
  uint32_t uVar30;
  int64_t lVar31;
  uint64_t uVar32;
  uint32_t uVar33;
  uint32_t in_XMM0_Dc;
  uint32_t in_XMM0_Dd;
  uint8_t auVar34 [16];
  uint32_t uVar35;
  uint8_t auVar36 [16];
  char cVar37;
  uint8_t bVar38;
  uint8_t uVar42;
  uint8_t bVar44;
  char cVar45;
  uint8_t bVar46;
  uint8_t uVar47;
  uint8_t bVar49;
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  char cVar43;
  char cVar48;
  uint8_t auVar41 [16];
  uint64_t in_stack_00000028;
  uint64_t *in_stack_00000030;
  uint32_t auStack_1d8 [66];
  uint64_t uStack_d0;
  uint32_t uStack_c4;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t *puStack_b0;
  uint32_t uStack_a4;
  uint64_t uStack_a0;
  uint64_t *puStack_98;
  uint64_t uStack_90;
  uint64_t *puStack_88;
  uint64_t *puStack_80;
  uint64_t *puStack_78;
  uint32_t uStack_6c;
  uint64_t *puStack_68;
  char *pcStack_60;
  uint64_t *puStack_58;
  int64_t lStack_50;
  uint64_t uStack_48;
  
  uVar9 = (CONCAT44(in_XMM0_Dd,in_XMM0_Dc) ^ 0xc07b079e) + 0xfdcd9c7b;
  in_stack_00000028 =
       (in_stack_00000028 << 0x29 | in_stack_00000028 >> 0x17) ^
       (in_stack_00000028 << 0x15 | in_stack_00000028 >> 0x2b) ^ in_stack_00000028;
  in_stack_00000028 =
       (in_stack_00000028 << 0x2a | in_stack_00000028 >> 0x16) ^
       (in_stack_00000028 << 0x12 | in_stack_00000028 >> 0x2e) ^ in_stack_00000028;
  uVar9 = (uVar9 * 0x20000000 | uVar9 >> 0x23) ^ (uVar9 << 0x24 | uVar9 >> 0x1c) ^ uVar9;
  uVar9 = (uVar9 << 0x3a | uVar9 >> 6) ^ (uVar9 << 8 | uVar9 >> 0x38) ^ uVar9;
  uVar9 = (uVar9 << 0x10 | uVar9 >> 0x30) ^ (uVar9 << 0x34 | uVar9 >> 0xc) ^ uVar9;
  uVar14 = (uint32_t)in_R9;
  bVar38 = (uint8_t)in_R9 & 0x1f;
  puStack_68 = (uint64_t *)CONCAT44(puStack_68._4_4_,*(uint32_t *)(in_R10 + 0x34));
  puStack_80 = *(uint64_t **)(in_R10 + 0xf8);
  uStack_c4 = *(uint32_t *)(in_R10 + 0x18);
  uVar35 = 1 << (uint64_t)*(uint32_t *)(in_R10 + 0x100);
  uVar18 = 5;
  if (*(uint32_t *)(in_R10 + 0x10c) < 5) {
    uVar18 = *(uint32_t *)(in_R10 + 0x10c);
  }
  iVar27 = 1 << ((uint8_t)uVar18 & 0x1f);
  puStack_88 = (uint64_t *)CONCAT44(puStack_88._4_4_,iVar27);
  lVar4 = *(int64_t *)(in_R10 + 8);
  uVar18 = *(uint32_t *)(in_R10 + 0x1c);
  in_stack_00000028 =
       (in_stack_00000028 << 0x24 | in_stack_00000028 >> 0x1c) ^
       (in_stack_00000028 << 0x14 | in_stack_00000028 >> 0x2c) ^ in_stack_00000028;
  uVar9 = (uVar9 << 0x20 | uVar9 >> 0x20) ^ (uVar9 << 0x28 | uVar9 >> 0x18) ^ uVar9;
  in_stack_00000028 =
       (in_stack_00000028 << 0x28 | in_stack_00000028 >> 0x18) ^
       (in_stack_00000028 << 8 | in_stack_00000028 >> 0x38) ^ in_stack_00000028;
  puStack_b0 = (uint64_t *)(uVar9 << 0x30 | uVar9 >> 0x10);
  uVar24 = (int64_t)puStack_b0 - lVar4;
  uVar23 = (uint32_t)uVar24;
  puVar21 = puStack_b0;
  uVar11 = *puStack_b0;
  uStack_d0 = in_R9;
  uStack_a4 = uVar14 | 1;
  uVar30 = uVar23 - uVar35;
  if ((-0x1570cbc1 << bVar38 | 0xea8f343fU >> 0x20 - bVar38) <=
      (uVar14 | 1) * 0x43d1b093 + 0x9de1b871) {
    uVar30 = uVar35 & uVar23;
  }
  if (uVar23 - uVar18 <= uVar35) {
    uVar30 = uVar18;
  }
  if (*(int *)(in_R10 + 0x28) != 0) {
    uVar30 = uVar18;
  }
  puStack_98 = *(uint64_t **)(in_R10 + 0x70);
  uStack_90 = *(uint64_t *)(in_R10 + 0x60);
  lVar10 = puStack_80[7];
  lVar31 = *(int64_t *)(in_R10 + 0x38);
  puStack_58 = (uint64_t *)
               ((in_stack_00000028 << 0x21 ^ in_stack_00000028) - (in_stack_00000028 << 0x34));
  uStack_a0 = uVar11 * -0x30e4432340650000 >>
              (0x38U - *(char *)((int64_t)puStack_80 + 0x34) & 0x3f);
  uVar29 = (uint64_t)((uint32_t)(uStack_a0 >> 3) & 0x1fffffe0);
  lStack_50 = puStack_80[0xe];
  puStack_78 = (uint64_t *)lVar4;
  uStack_c0 = uVar29;
  puStack_68._0_1_ = (char)*(uint32_t *)(in_R10 + 0x34);
  if (*(int *)(in_R10 + 300) == 0) {
    uStack_6c = uVar30;
    uVar18 = *(uint32_t *)(in_R10 + 0x2c);
    uVar11 = (uint64_t)uVar18;
    lVar15 = lVar31;
    lVar8 = (int64_t)puStack_98;
    if (uVar23 - uVar18 < 0x181) {
LAB_7fffa54e5d78:
      uVar35 = (uint32_t)uVar11;
    }
    else {
      if (uVar18 < (uint32_t)(int)(short)((short)in_R9 + -0x6f95)) {
        do {
          uVar13 = (uint64_t)((uint32_t)uVar11 & 7);
          if (((uVar14 ^ 0x453a8376) << 0x18 | (uVar14 ^ 0x453a8376) >> 8) == 0xa3567b21 - uVar14) {
            uVar33 = (uint32_t)
                     ((*(int64_t *)(lVar4 + 8 + uVar11) * -0x30e4432340650000 ^
                      *(uint64_t *)(in_R10 + 0x60)) >> (0x38U - (char)puStack_68 & 0x3f));
            uVar35 = *(uint32_t *)(in_R10 + 0x40 + uVar13 * 4);
          }
          else {
            uVar33 = (uint32_t)
                     ((*(int64_t *)(lVar4 + 8 + uVar11) * -0x30e4432340650000 ^
                      *(uint64_t *)(in_R10 + 0x60)) >> (0x38U - (char)puStack_68 & 0x3f));
            uVar35 = *(uint32_t *)(in_R10 + 0x40 + uVar13 * 4);
          }
          uVar19 = (uint64_t)(uVar35 >> 3 & 0xffffffe0);
          *(uint32_t *)(in_R10 + 0x40 + uVar13 * 4) = uVar33;
          lVar15 = 0;
          if ((*(uint8_t *)(lVar31 + uVar19) & 0x1f) == 1) {
            lVar15 = 0x1f;
          }
          lVar15 = lVar15 + (uint64_t)(*(uint8_t *)(lVar31 + uVar19) - 1 & 0x1f);
          *(char *)(lVar31 + uVar19) = (char)lVar15;
          *(char *)(lVar31 + uVar19 + lVar15) = (char)uVar35;
          *(uint32_t *)((int64_t)puStack_98 + uVar19 * 4 + lVar15 * 4) = (uint32_t)uVar11;
          uVar11 = uVar11 + 1;
        } while (uVar18 + 0x60 != uVar11);
        lVar15 = *(int64_t *)(in_R10 + 0x38);
        lVar8 = *(int64_t *)(in_R10 + 0x70);
      }
      uVar35 = uVar23 - 0x20;
      uVar11 = (uint64_t)uVar35;
      plVar1 = (int64_t *)(lVar4 + uVar11);
      uVar14 = ((int)(int64_t *)((int64_t)puStack_b0 + 1U) - (int)plVar1) + 1;
      uVar18 = 8;
      if (uVar14 < 8) {
        uVar18 = uVar14;
      }
      uVar14 = 0;
      if (plVar1 <= (int64_t *)((int64_t)puStack_b0 + 1U)) {
        uVar14 = uVar18;
      }
      if ((uVar14 + uVar23) - 0x20 <= uVar35) {
        goto LAB_7fffa54e5d78;
      }
      uVar13 = *(uint64_t *)(in_R10 + 0x60);
      uVar18 = 0x38 - *(int *)(in_R10 + 0x34);
      bVar38 = (uint8_t)uVar18;
      if ((uVar14 & 1) == 0) {
        uVar19 = uVar11;
      }
      else {
        uVar19 = uVar11 + 1;
        *(int *)(in_R10 + 0x40 + (uint64_t)(uVar35 & 7) * 4) =
             (int)((*plVar1 * -0x30e4432340650000 ^ uVar13) >> (bVar38 & 0x3f));
      }
      if (uVar14 == 1) {
        goto LAB_7fffa54e5d78;
      }
      puStack_b0._0_4_ = (int)(uVar9 >> 0x10);
      iVar7 = (((uVar14 + (int)puStack_b0) - (int)uVar19) - (int)lVar4) + -0x20;
      lVar20 = uVar19 + 1;
      uStack_b8 = (uint64_t)uVar18;
      do {
        *(int *)(in_R10 + 0x40 + (uint64_t)((uint32_t)lVar20 - 1 & 7) * 4) =
             (int)((*(int64_t *)(lVar4 + -1 + lVar20) * -0x30e4432340650000 ^ uVar13) >>
                  (bVar38 & 0x3f));
        *(int *)(in_R10 + 0x40 + (uint64_t)((uint32_t)lVar20 & 7) * 4) =
             (int)((*(int64_t *)(lVar4 + lVar20) * -0x30e4432340650000 ^ uVar13) >> (bVar38 & 0x3f)
                  );
        lVar20 = lVar20 + 2;
        iVar7 = iVar7 + -2;
      } while (iVar7 != 0);
    }
    if (uVar35 < uVar23) {
      lVar20 = *(int64_t *)(in_R10 + 8);
      uVar33 = *(uint32_t *)(in_R10 + 0x34);
      do {
        plVar1 = (int64_t *)(lVar20 + 8 + uVar11);
        uVar14 = (uint32_t)uVar11;
        uVar9 = (uint64_t)(uVar14 & 7);
        uVar11 = uVar11 + 1;
        uVar18 = *(uint32_t *)(in_R10 + 0x40 + uVar9 * 4);
        uVar13 = (uint64_t)(uVar18 >> 3 & 0xffffffe0);
        *(int *)(in_R10 + 0x40 + uVar9 * 4) =
             (int)((*plVar1 * -0x30e4432340650000 ^ *(uint64_t *)(in_R10 + 0x60)) >>
                  (0x38U - (char)uVar33 & 0x3f));
        lVar25 = 0;
        if ((*(uint8_t *)(lVar15 + uVar13) & 0x1f) == 1) {
          lVar25 = 0x1f;
        }
        lVar25 = lVar25 + (uint64_t)(*(uint8_t *)(lVar15 + uVar13) - 1 & 0x1f);
        *(char *)(lVar15 + uVar13) = (char)lVar25;
        *(char *)(lVar15 + uVar13 + lVar25) = (char)uVar18;
        *(uint32_t *)(lVar8 + uVar13 * 4 + lVar25 * 4) = uVar14;
      } while ((uVar24 & 0xffffffff) != uVar11);
    }
    uStack_48 = (uint64_t *)(uVar24 & 0xffffffff);
    *(uint32_t *)(in_R10 + 0x2c) = uVar23;
    uVar9 = (uint64_t)*(uint32_t *)(in_R10 + 0x40 + (uint64_t)(uVar23 & 7) * 4);
    *(int *)(in_R10 + 0x40 + (uint64_t)(uVar23 & 7) * 4) =
         (int)((uStack_90 ^ *(int64_t *)(lVar4 + 8 + (int64_t)uStack_48) * -0x30e4432340650000) >>
              (0x38U - (char)puStack_68 & 0x3f));
  }
  else {
    *(uint32_t *)(in_R10 + 0x2c) = uVar23;
    uVar9 = (uVar11 * -0x30e4432340650000 ^ uStack_90) >> (0x38U - (char)puStack_68 & 0x3f);
  }
  uVar11 = (uint64_t)((uint32_t)(uVar9 >> 3) & 0x1fffffe0);
  *(int *)(in_R10 + 0x68) = *(int *)(in_R10 + 0x68) + (int)uVar9;
  lVar15 = (int64_t)puStack_98 + uVar11 * 4;
  bVar38 = *(uint8_t *)(lVar31 + uVar11);
  pcVar2 = (char *)(lVar31 + uVar11);
  pcVar3 = (char *)(lVar31 + 0x10 + uVar11);
  uVar6 = (uint8_t)(uVar9 >> 0x10);
  uVar47 = (uint8_t)(uVar9 >> 0x18);
  uVar42 = (uint8_t)(uVar9 >> 8);
  auVar39._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar47,uVar47),uVar6),CONCAT14(uVar6,(int)uVar9)) >> 0x20);
  auVar39[3] = uVar42;
  auVar39[2] = uVar42;
  auVar39[0] = (uint8_t)uVar9;
  auVar39[1] = auVar39[0];
  auVar39._8_8_ = 0;
  auVar40 = pshuflw(auVar39,auVar39,0);
  cVar37 = auVar40[0];
  auVar41[0] = -(*pcVar2 == cVar37);
  cVar43 = auVar40[1];
  auVar41[1] = -(pcVar2[1] == cVar43);
  cVar45 = auVar40[2];
  auVar41[2] = -(pcVar2[2] == cVar45);
  cVar48 = auVar40[3];
  auVar41[3] = -(pcVar2[3] == cVar48);
  auVar41[4] = -(pcVar2[4] == cVar37);
  auVar41[5] = -(pcVar2[5] == cVar43);
  auVar41[6] = -(pcVar2[6] == cVar45);
  auVar41[7] = -(pcVar2[7] == cVar48);
  auVar41[8] = -(pcVar2[8] == cVar37);
  auVar41[9] = -(pcVar2[9] == cVar43);
  auVar41[10] = -(pcVar2[10] == cVar45);
  auVar41[0xb] = -(pcVar2[0xb] == cVar48);
  auVar41[0xc] = -(pcVar2[0xc] == cVar37);
  auVar41[0xd] = -(pcVar2[0xd] == cVar43);
  auVar41[0xe] = -(pcVar2[0xe] == cVar45);
  auVar41[0xf] = -(pcVar2[0xf] == cVar48);
  auVar40[0] = -(*pcVar3 == cVar37);
  auVar40[1] = -(pcVar3[1] == cVar43);
  auVar40[2] = -(pcVar3[2] == cVar45);
  auVar40[3] = -(pcVar3[3] == cVar48);
  auVar40[4] = -(pcVar3[4] == cVar37);
  auVar40[5] = -(pcVar3[5] == cVar43);
  auVar40[6] = -(pcVar3[6] == cVar45);
  auVar40[7] = -(pcVar3[7] == cVar48);
  auVar40[8] = -(pcVar3[8] == cVar37);
  auVar40[9] = -(pcVar3[9] == cVar43);
  auVar40[10] = -(pcVar3[10] == cVar45);
  auVar40[0xb] = -(pcVar3[0xb] == cVar48);
  auVar40[0xc] = -(pcVar3[0xc] == cVar37);
  auVar40[0xd] = -(pcVar3[0xd] == cVar43);
  auVar40[0xe] = -(pcVar3[0xe] == cVar45);
  auVar40[0xf] = -(pcVar3[0xf] == cVar48);
  uVar18 = CONCAT22((uint16_t)(SUB161(auVar40 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
                    (uint16_t)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar40[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar41 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar41[0xf] >> 7) << 0xf);
  puStack_b0 = puVar21;
  if (uVar18 != 0) {
    uVar9 = (uint64_t)(uVar18 >> (bVar38 & 0x1f) | uVar18 << 0x20 - (bVar38 & 0x1f));
    lVar8 = 0;
    do {
      iVar7 = 0;
      for (uVar24 = uVar9; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
        iVar7 = iVar7 + 1;
      }
      uVar18 = iVar7 + (uint32_t)bVar38 & 0x1f;
      if (uVar18 != 0) {
        uVar18 = *(uint32_t *)(lVar15 + (uint64_t)uVar18 * 4);
        if (uVar18 < uVar30) goto LAB_7fffa54e6137;
        iVar27 = iVar27 + -1;
        auStack_1d8[lVar8] = uVar18;
        lVar8 = lVar8 + 1;
      }
      uVar9 = uVar9 & uVar9 - 1;
      if ((uVar9 == 0) || (iVar27 == 0)) goto LAB_7fffa54e6137;
    } while( true );
  }
  lVar8 = 0;
LAB_7fffa54e6137:
  uVar32 = uStack_d0;
  pbVar26 = (uint8_t *)(lVar10 + uVar29);
  lVar10 = 0x1f;
  if ((bVar38 & 0x1f) != 1) {
    lVar10 = 0;
  }
  lVar10 = lVar10 + (uint64_t)(bVar38 - 1 & 0x1f);
  *(uint8_t *)(lVar31 + uVar11) = (char)lVar10;
  ((uint8_t *)(lVar31 + uVar11))[lVar10] = auVar39[0];
  iVar7 = *(int *)(in_R10 + 0x2c);
  *(int *)(in_R10 + 0x2c) = iVar7 + 1;
  *(int *)(lVar15 + lVar10 * 4) = iVar7;
  uVar18 = (uint32_t)uStack_d0;
  if (lVar8 == 0) {
    uVar9 = 3;
  }
  else {
    uStack_48 = puStack_b0 + 1;
    pcStack_60 = (char *)(lVar4 + 8);
    uVar11 = 3;
    lVar10 = 0;
    do {
      uVar14 = auStack_1d8[lVar10];
      puVar21 = (uint64_t *)((int64_t)puStack_78 + (uint64_t)uVar14);
      if (*(int *)((uVar11 - 3) + (int64_t)puVar21) ==
          *(int *)((int64_t)puStack_b0 + (uVar11 - 3))) {
        puVar28 = puStack_b0;
        if (puStack_b0 < (uint64_t *)((int64_t)puStack_58 - 7U)) {
          if (*puVar21 == *puStack_b0) {
            puVar21 = (uint64_t *)(lVar4 + 8 + (uint64_t)uVar14);
            lVar31 = 8;
            puVar28 = puStack_b0 + 1;
LAB_7fffa54e6260:
            if (puVar28 < (uint64_t *)((int64_t)puStack_58 - 7U)) {
              if (*puVar21 == *puVar28) goto code_r0x7fffa54e6284;
              uVar35 = 0;
              for (uVar9 = *puVar21 ^ *puVar28; (uVar9 & 1) == 0;
                  uVar9 = uVar9 >> 1 | 0x8000000000000000) {
                uVar35 = uVar35 + 1;
              }
              uVar9 = (uint64_t)(uVar35 >> 3) + lVar31;
              goto LAB_7fffa54e6335;
            }
            goto joined_r0x7fffa54e62ae;
          }
          uVar35 = 0;
          for (uVar9 = *puVar21 ^ *puStack_b0; (uVar9 & 1) == 0;
              uVar9 = uVar9 >> 1 | 0x8000000000000000) {
            uVar35 = uVar35 + 1;
          }
          uVar9 = (uint64_t)(uVar35 >> 3);
        }
        else {
joined_r0x7fffa54e62ae:
          if ((puVar28 < (uint64_t *)((int64_t)puStack_58 - 3U)) &&
             ((int)*puVar21 == (int)*puVar28)) {
            puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
            puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
          }
          if ((puVar28 < (uint64_t *)((int64_t)puStack_58 - 1U)) &&
             ((short)*puVar21 == (short)*puVar28)) {
            puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
          }
          if (puVar28 < puStack_58) {
            puVar28 = (uint64_t *)
                      ((int64_t)puVar28 + (uint64_t)((char)*puVar21 == (char)*puVar28));
          }
          uVar9 = (int64_t)puVar28 - (int64_t)puStack_b0;
        }
LAB_7fffa54e6335:
        bVar5 = uVar11 < uVar9;
        if (((-0x3eaf9e85 - uVar18) * -0x722d2000 | (-0x3eaf9e85 - uVar18) * 0x278c6e97 >> 0x13) ==
            ((uVar18 + 0x9f8f00da) * 0x8000000 | uVar18 + 0x9f8f00da >> 5)) {
          bVar5 = (int64_t)uVar9 < (int64_t)uVar11;
        }
        if (bVar5) {
          uVar14 = (uVar23 + 3) - uVar14;
          bVar38 = (uint8_t)uStack_d0 & 0x1f;
          uVar11 = (uint64_t)uVar14;
          if ((int64_t)
              (uint64_t)((0x5a1a6380 << bVar38 | 0x5a1a6380U >> 0x20 - bVar38) ^ 0xa3adaaa3) <
              (int64_t)(int)(uStack_a4 * -0x7e4a214d + 0x1364d98c)) {
            uVar11 = (int64_t)(int)uVar14;
          }
          *in_stack_00000030 = uVar11;
          uVar11 = uVar9;
          if ((uint64_t *)((int64_t)puStack_b0 + uVar9) == puStack_58) break;
        }
      }
      lVar10 = lVar10 + 1;
      uVar9 = uVar11;
    } while (lVar10 != lVar8);
  }
  auVar41 = pshuflw(ZEXT216(CONCAT11((uint8_t)uStack_a0,(uint8_t)uStack_a0)),
                    ZEXT216(CONCAT11((uint8_t)uStack_a0,(uint8_t)uStack_a0)),0);
  bVar38 = auVar41[0];
  auVar34[0] = -(*pbVar26 == bVar38);
  bVar44 = auVar41[1];
  auVar34[1] = -(pbVar26[1] == bVar44);
  bVar46 = auVar41[2];
  auVar34[2] = -(pbVar26[2] == bVar46);
  bVar49 = auVar41[3];
  auVar34[3] = -(pbVar26[3] == bVar49);
  auVar34[4] = -(pbVar26[4] == bVar38);
  auVar34[5] = -(pbVar26[5] == bVar44);
  auVar34[6] = -(pbVar26[6] == bVar46);
  auVar34[7] = -(pbVar26[7] == bVar49);
  auVar34[8] = -(pbVar26[8] == bVar38);
  auVar34[9] = -(pbVar26[9] == bVar44);
  auVar34[10] = -(pbVar26[10] == bVar46);
  auVar34[0xb] = -(pbVar26[0xb] == bVar49);
  auVar34[0xc] = -(pbVar26[0xc] == bVar38);
  auVar34[0xd] = -(pbVar26[0xd] == bVar44);
  auVar34[0xe] = -(pbVar26[0xe] == bVar46);
  auVar34[0xf] = -(pbVar26[0xf] == bVar49);
  auVar36[0] = -(pbVar26[0x10] == bVar38);
  auVar36[1] = -(pbVar26[0x11] == bVar44);
  auVar36[2] = -(pbVar26[0x12] == bVar46);
  auVar36[3] = -(pbVar26[0x13] == bVar49);
  auVar36[4] = -(pbVar26[0x14] == bVar38);
  auVar36[5] = -(pbVar26[0x15] == bVar44);
  auVar36[6] = -(pbVar26[0x16] == bVar46);
  auVar36[7] = -(pbVar26[0x17] == bVar49);
  auVar36[8] = -(pbVar26[0x18] == bVar38);
  auVar36[9] = -(pbVar26[0x19] == bVar44);
  auVar36[10] = -(pbVar26[0x1a] == bVar46);
  auVar36[0xb] = -(pbVar26[0x1b] == bVar49);
  auVar36[0xc] = -(pbVar26[0x1c] == bVar38);
  auVar36[0xd] = -(pbVar26[0x1d] == bVar44);
  auVar36[0xe] = -(pbVar26[0x1e] == bVar46);
  auVar36[0xf] = -(pbVar26[0x1f] == bVar49);
  uVar14 = CONCAT22((uint16_t)(SUB161(auVar36 >> 7,0) & 1) |
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
                    (uint16_t)(SUB161(auVar34 >> 7,0) & 1) |
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
  if (uVar14 != (uint16_t)((uint16_t)(uVar18 ^ 0x6f35) >> 1 |
                        (uint16_t)(((uVar18 ^ 0x6f35) & 1) != 0) << 0xf) && iVar27 != 0) {
    puVar21 = (uint64_t *)((int64_t)puStack_78 + (uint64_t)uStack_c4);
    lVar4 = puStack_80[1];
    pcStack_60 = (char *)*puStack_80;
    uStack_a4 = (int)(char *)*puStack_80 - (int)lVar4;
    bVar38 = *pbVar26;
    bVar44 = bVar38 & 0x1f;
    uVar24 = (uint64_t)(uVar14 >> bVar44 | uVar14 << 0x20 - bVar44);
    uVar18 = *(uint32_t *)(puStack_80 + 3);
    uVar11 = 0;
    do {
      iVar7 = 0;
      for (uVar29 = uVar24; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x8000000000000000) {
        iVar7 = iVar7 + 1;
      }
      uVar14 = iVar7 + (uint32_t)bVar38 & 0x1f;
      if (uVar14 != 0) {
        uVar14 = *(uint32_t *)(lStack_50 + uStack_c0 * 4 + (uint64_t)uVar14 * 4);
        if (uVar14 < uVar18) goto LAB_7fffa54e6533;
        iVar27 = iVar27 + -1;
        auStack_1d8[uVar11] = uVar14;
        uVar11 = uVar11 + 1;
      }
      uVar24 = uVar24 & uVar24 - 1;
      if ((uVar24 == 0) || (iVar27 == 0)) goto LAB_7fffa54e6533;
    } while( true );
  }
LAB_7fffa54e68e6:
  return (uVar9 << 0x3f) + uVar9;
code_r0x7fffa54e6284:
  puVar28 = puVar28 + 1;
  lVar31 = lVar31 + 8;
  puVar21 = puVar21 + 1;
  goto LAB_7fffa54e6260;
LAB_7fffa54e6533:
  if (uVar11 != 0) {
    puStack_78 = puVar21;
    uStack_48._0_4_ = (int)*puStack_b0;
    puStack_98 = (uint64_t *)((int64_t)puStack_58 - 7);
    puStack_68 = (uint64_t *)((int64_t)puStack_58 - 1U);
    puVar28 = (uint64_t *)((int64_t)puStack_b0 + 4);
    puStack_88 = (uint64_t *)((int64_t)puStack_58 + -3);
    uVar24 = 0;
    uStack_a4 = uStack_a4 + uVar23;
    uVar29 = uVar9;
    do {
      uVar18 = auStack_1d8[uVar24];
      uVar9 = (uint64_t)uVar18;
      if (*(int *)(lVar4 + uVar9) == (int)uStack_48) {
        puVar12 = (uint64_t *)(lVar4 + uVar9 + 4);
        puVar16 = (uint64_t *)(((int64_t)pcStack_60 - (int64_t)puVar12) + (int64_t)puVar28);
        if (puStack_58 <= puVar16) {
          puVar16 = puStack_58;
        }
        puVar22 = puVar12;
        puVar17 = puVar28;
        if (puVar28 < (uint64_t *)((int64_t)puVar16 - 7U)) {
          if (*puVar12 == *puVar28) {
            lVar10 = lVar4 + 0xc + uVar9;
            lVar31 = 0;
            do {
              puVar17 = (uint64_t *)((int64_t)puStack_b0 + lVar31 + 0xc);
              if ((uint64_t *)((int64_t)puVar16 - 7U) <= puVar17) {
                puVar22 = (uint64_t *)(lVar10 + lVar31);
                uVar32 = uStack_d0;
                goto LAB_7fffa54e669e;
              }
              uVar9 = *(uint64_t *)(lVar10 + lVar31);
              lVar31 = lVar31 + 8;
            } while (uVar9 == *puVar17);
            uVar14 = 0;
            for (uVar9 = uVar9 ^ *puVar17; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000
                ) {
              uVar14 = uVar14 + 1;
            }
            uVar9 = (uint64_t)(uVar14 >> 3) + lVar31;
            uVar32 = uStack_d0;
          }
          else {
            uVar14 = 0;
            for (uVar9 = *puVar28 ^ *puVar12; (uVar9 & 1) == 0;
                uVar9 = uVar9 >> 1 | 0x8000000000000000) {
              uVar14 = uVar14 + 1;
            }
            uVar9 = (uint64_t)(uVar14 >> 3);
          }
        }
        else {
LAB_7fffa54e669e:
          if ((puVar17 < (uint64_t *)((int64_t)puVar16 - 3U)) && ((int)*puVar22 == (int)*puVar17))
          {
            puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
            puVar17 = (uint64_t *)((int64_t)puVar17 + 4);
          }
          if ((puVar17 < (uint64_t *)((int64_t)puVar16 - 1U)) &&
             ((short)*puVar22 == (short)*puVar17)) {
            puVar17 = (uint64_t *)((int64_t)puVar17 + 2);
            puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
          }
          if (puVar17 < puVar16) {
            puVar17 = (uint64_t *)
                      ((int64_t)puVar17 + (uint64_t)((char)*puVar22 == (char)*puVar17));
          }
          uVar9 = (int64_t)puVar17 - (int64_t)puVar28;
        }
        if ((char *)((int64_t)puVar12 + uVar9) == pcStack_60) {
          puVar16 = (uint64_t *)((int64_t)puVar28 + uVar9);
          puVar12 = puVar16;
          puVar17 = puVar21;
          if (puVar16 < puStack_98) {
            if (*puVar21 == *puVar16) {
              puVar12 = (uint64_t *)((int64_t)puStack_b0 + uVar9 + 0xc);
              lVar10 = 8;
              if (puVar12 < puStack_98) {
LAB_7fffa54e6740:
                if (*(uint64_t *)((int64_t)puVar21 + lVar10) == *puVar12)
                goto code_r0x7fffa54e6768;
                uVar14 = 0;
                for (uVar13 = *(uint64_t *)((int64_t)puVar21 + lVar10) ^ *puVar12;
                    (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                  uVar14 = uVar14 + 1;
                }
                uVar13 = (uint64_t)(uVar14 >> 3) + lVar10;
                goto LAB_7fffa54e6823;
              }
LAB_7fffa54e677a:
              puVar17 = (uint64_t *)(lVar10 + (int64_t)puVar21);
              goto LAB_7fffa54e6782;
            }
            uVar14 = 0;
            for (uVar13 = *puVar16 ^ *puVar21; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x8000000000000000) {
              uVar14 = uVar14 + 1;
            }
            uVar13 = (uint64_t)(uVar14 >> 3);
          }
          else {
LAB_7fffa54e6782:
            if ((puVar12 < (uint64_t *)((int64_t)puStack_58 + -3)) &&
               ((int)*puVar17 == (int)*puVar12)) {
              puVar17 = (uint64_t *)((int64_t)puVar17 + 4);
              puVar12 = (uint64_t *)((int64_t)puVar12 + 4);
            }
            if ((puVar12 < (uint64_t *)((int64_t)puStack_58 - 1U)) &&
               ((short)*puVar17 == (short)*puVar12)) {
              puVar12 = (uint64_t *)((int64_t)puVar12 + 2);
              puVar17 = (uint64_t *)((int64_t)puVar17 + 2);
            }
            if (puVar12 < puStack_58) {
              puVar12 = (uint64_t *)
                        ((int64_t)puVar12 + (uint64_t)((char)*puVar17 == (char)*puVar12));
            }
            uVar13 = (int64_t)puVar12 - (int64_t)puVar16;
          }
LAB_7fffa54e6823:
          uVar9 = uVar9 + uVar13;
        }
        uVar9 = uVar9 + 4;
        if (uVar29 < uVar9) {
          bVar38 = (uint8_t)uVar32 & 0x1f;
          uVar35 = (uint32_t)uVar32 ^ 0xe03f0b75;
          uVar14 = (-0x67ac3bfc << bVar38 | 0x9853c404U >> 0x20 - bVar38) * (uVar18 & uStack_c4);
          if (0x56cbfe63 < (uVar35 << 0x1d | uVar35 >> 3)) {
            uVar14 = uVar18 & uStack_c4 ^ 0x80930a78;
          }
          *in_stack_00000030 =
               (uint64_t)
               ((((uVar18 | uStack_c4) * -0x7f6cf58a + uStack_a4 + (uStack_c4 ^ uVar18) * 0x7f6cf589
                 ) - uVar14) + 3);
          if ((uint64_t *)((int64_t)puStack_b0 + uVar9) == puStack_58) break;
          uStack_48._0_4_ = (int)*puStack_b0;
          uVar29 = uVar9;
          uVar32 = uStack_d0;
        }
      }
      uVar9 = uVar29;
      bVar38 = (uint8_t)uVar32 & 0x1f;
      uVar29 = uVar24 + 1;
      uVar24 = (uint64_t)((uint32_t)uVar24 & 1);
      if ((uint32_t)((0x6ef9da6e - (int)uVar32) * -0x789c3ca7) <
          (0x580000U >> bVar38 | 0x580000 << 0x20 - bVar38)) {
        uVar24 = uVar29;
      }
      uVar29 = uVar9;
    } while (uVar24 != uVar11);
  }
  goto LAB_7fffa54e68e6;
code_r0x7fffa54e6768:
  puVar12 = puVar12 + 1;
  lVar10 = lVar10 + 8;
  if (puStack_98 <= puVar12) goto LAB_7fffa54e677a;
  goto LAB_7fffa54e6740;
}


// ============================================================================
// Function : FUN_7fffa54e6918  |  RVA: 0xd76918  |  Size: 72 bytes
// Callers  : none
// Callees  : FUN_7fffa515625c@0x9e625c, FUN_7fffa55b02f4@0xe402f4
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_7fffa54e6918(void)

{
  int iVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = FUN_7fffa55b02f4(uVar3 * 0x28 + 0x7fffa4781f10,4000,0);
    if (iVar1 == 0) {
      FUN_7fffa515625c(0);
      return 0;
    }
    _DAT_7fffa4782168 = _DAT_7fffa4782168 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (uint64_t)uVar2;
  } while (uVar2 < 0xf);
  return 1;
}


// ============================================================================
// Function : FUN_7fffa54e6960  |  RVA: 0xd76960  |  Size: 270 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

uint64_t FUN_7fffa54e6960(void)

{
  uint8_t bVar1;
  int iVar2;
  uint32_t in_R11D;
  uint32_t auStack_18 [2];
  
  bVar1 = (uint8_t)in_R11D & 0x1f;
  if ((0x75ca8524 << bVar1 | 0x75ca8524U >> 0x20 - bVar1) < 0x2493e0e1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  auStack_18[0] = 0;
  iVar2 = (in_R11D | 1) * 0x22668934;
  (*(code *)((int64_t)(short)iVar2 + 0x7fffa560b964))(iVar2,0x12dd5aac);
  bVar1 = (uint8_t)in_R11D & 0x1f;
  (*(code *)((int64_t)(int)(-0x31a481e9 - in_R11D) + 0x7fffa55f891f))
            (in_R11D,-0x31a481e9 - in_R11D,
             (int64_t)auStack_18 << 0x2b | (uint64_t)auStack_18 >> 0x15,
             0xaf20b984U >> bVar1 | -0x50df467c << 0x20 - bVar1);
  return 0x226e6f39;
}


// ============================================================================
// Function : FUN_7fffa54e6ac4  |  RVA: 0xd76ac4  |  Size: 47 bytes
// Callers  : FUN_7fffa4ecf84c@0x75f84c
// Callees  : FUN_7fffa5002dcc@0x892dcc, FUN_7fffa56266a0@0xeb66a0
// ============================================================================
uint64_t FUN_7fffa54e6ac4(void)

{
  int64_t lVar1;
  uint64_t *apuStackX_8 [4];
  
  lVar1 = FUN_7fffa56266a0();
  apuStackX_8[0] = *(uint64_t **)(lVar1 + 0x90);
  FUN_7fffa5002dcc(lVar1,apuStackX_8);
  return *apuStackX_8[0];
}


// ============================================================================
// Function : FUN_7fffa54e6b00  |  RVA: 0xd76b00  |  Size: 94377 bytes
// Callers  : FUN_7fffa5453800@0xce3800
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa54e6b00(void) {
    /* +0xd76b00 */ __asm { PUSH R12 }
    /* +0xd76b02 */ __asm { PUSH R14 }
    /* +0xd76b04 */ __asm { PUSH RBP }
    /* +0xd76b05 */ __asm { PUSH RDI }
    /* +0xd76b06 */ __asm { PUSH R13 }
    /* +0xd76b08 */ __asm { PUSH R15 }
    /* +0xd76b0a */ __asm { PUSH RBX }
    /* +0xd76b0b */ __asm { PUSH RSI }
    /* +0xd76b0c */ __asm { SUB RSP,0x2d8 }
    /* +0xd76b13 */ __asm { MOVAPS xmmword ptr [RSP + 0x2c0],XMM12 }
    /* +0xd76b1c */ __asm { MOVDQA xmmword ptr [RSP + 0x2b0],XMM10 }
    /* +0xd76b26 */ __asm { MOV dword ptr [RSP + 0x160],0xcce0cb00 }
    /* +0xd76b31 */ __asm { MOV R8D,dword ptr [RSP + 0x160] }
    /* +0xd76b39 */ __asm { MOV R8W,0x92dc }
    /* +0xd76b3e */ __asm { LEA R10,[0x7fffa478cd14] }
    /* +0xd76b45 */ __asm { IMUL R9D,R8D,0x2767 }
    /* +0xd76b4c */ __asm { MOVSX R8,R9W }
    /* +0xd76b50 */ __asm { CMP RCX,qword ptr [R10 + R8*0x1] }
    /* +0xd76b54 */ __asm { JZ 0x7fffa54e6c0d }
    /* +0xd76b5a */ __asm { MOV RAX,RCX }
    /* +0xd76b5d */ __asm { MOV R8W,0x4e69 }
    /* +0xd76b62 */ __asm { MOVZX R9D,R8W }
    /* +0xd76b66 */ __asm { XOR R9,0x4e09 }
    /* +0xd76b6d */ __asm { MOV R10,qword ptr GS:[R9] }
    /* +0xd76b71 */ __asm { MOV R10,qword ptr [R10 + 0x6e8] }
    /* +0xd76b78 */ __asm { MOV RCX,-0x42aaa70bd129063 }
    /* +0xd76b82 */ __asm { OR RCX,R10 }
    /* +0xd76b85 */ __asm { MOV R10,-0x3490b27e95f03d91 }
    /* +0xd76b8f */ __asm { CMP RCX,R10 }
    /* +0xd76b92 */ __asm { NOP }
    /* +0xd76b93 */ __asm { NOP }
    /* +0xd76b94 */ __asm { NOP }
    /* +0xd76b95 */ __asm { NOP }
    /* +0xd76b96 */ __asm { NOP }
    /* +0xd76b97 */ __asm { NOP }
    /* +0xd76b98 */ __asm { LEA R10,[0x7fffa47c64e5] }
    /* +0xd76b9f */ __asm { MOV R8D,0x5a608c3b }
    /* +0xd76ba5 */ __asm { MOV R9D,0xa37c07de }
    /* +0xd76bab */ __asm { MOV CX,0x6c2 }
    /* +0xd76baf */ __asm { ADD R8D,0x85502785 }
    /* +0xd76bb6 */ __asm { MOV EDX,0xffff9b35 }
    /* +0xd76bbb */ __asm { SUB EDX,ECX }
    /* +0xd76bbd */ __asm { ADD R9D,0xd5d778b4 }
    /* +0xd76bc4 */ __asm { XOR R9D,0x774a4efd }
    /* +0xd76bcb */ __asm { MOVSXD RCX,R8D }
    /* +0xd76bce */ __asm { MOVSX R8,DX }
    /* +0xd76bd2 */ __asm { XOR R11D,R11D }
    /* +0xd76bd5 */ __asm { XOR EDX,EDX }
    /* +0xd76bd7 */ __asm { CMP RAX,qword ptr [R10 + R8*0x1] }
    /* +0xd76bdb */ __asm { SETL R11B }
    /* +0xd76bdf */ __asm { SETZ DL }
    /* +0xd76be2 */ __asm { CMP R9,RCX }
    /* +0xd76be5 */ __asm { CMOVL EDX,R11D }
    /* +0xd76be9 */ __asm { CMP DL,0x1 }
    /* +0xd76bec */ __asm { JNZ 0x7fffa54e6c2c }
    /* +0xd76bee */ __asm { MOV dword ptr [RSP + 0x160],0x7f7bfea3 }
    /* +0xd76bf9 */ __asm { MOV R8D,dword ptr [RSP + 0x160] }
    /* +0xd76c01 */ __asm { LEA RAX,[0x7fffa54538d0] }
    /* +0xd76c08 */ __asm { JMP 0x7fffa54e6d53 }
    /* +0xd76c0d */ __asm { MOV dword ptr [RSP + 0x160],0xc472bedc }
    /* +0xd76c18 */ __asm { MOV R8D,dword ptr [RSP + 0x160] }
    /* +0xd76c20 */ __asm { LEA RAX,[0x7fffa54538e0] }
    /* +0xd76c27 */ __asm { JMP 0x7fffa54e6d53 }
    /* +0xd76c2c */ __asm { MOV R8W,0xc4ce }
    /* +0xd76c31 */ __asm { ADD R8D,0x6b32 }
    /* +0xd76c38 */ __asm { ROL R8W,0x9 }
    /* +0xd76c3d */ __asm { MOVZX R9D,R8W }
    /* +0xd76c41 */ __asm { MOV R10,qword ptr GS:[R9] }
    /* +0xd76c45 */ __asm { MOV RDX,-0x210ab0797bf3dcc0 }
    /* +0xd76c4f */ __asm { ADD RDX,0x490f3125 }
    /* +0xd76c56 */ __asm { ROL RDX,0x3a }
    /* +0xd76c5a */ __asm { CMP R10,RDX }
    /* +0xd76c5d */ __asm { NOP }
    /* +0xd76c5e */ __asm { NOP }
    /* +0xd76c5f */ __asm { NOP }
    /* +0xd76c60 */ __asm { NOP }
    /* +0xd76c61 */ __asm { NOP }
    /* +0xd76c62 */ __asm { MOV R8W,0x5000 }
    /* +0xd76c67 */ __asm { IMUL R8D,R8D,-0x829 }
    /* +0xd76c6e */ __asm { ROL R8W,0x8 }
    /* +0xd76c73 */ __asm { MOVZX R9D,R8W }
    /* +0xd76c77 */ __asm { MOV R10,qword ptr GS:[R9] }
    /* +0xd76c7b */ __asm { MOV dword ptr [RSP + 0x160],0xd3416b59 }
    /* +0xd76c86 */ __asm { MOV R8D,dword ptr [RSP + 0x160] }
    /* +0xd76c8e */ __asm { TEST R8D,R8D }
    /* +0xd76c91 */ __asm { NOP }
    /* +0xd76c92 */ __asm { NOP }
    /* +0xd76c93 */ __asm { NOP }
    /* +0xd76c94 */ __asm { NOP }
    /* +0xd76c95 */ __asm { NOP }
    /* +0xd76c96 */ __asm { NOP }
    /* +0xd76c97 */ __asm { NOP }
    /* +0xd76c98 */ __asm { NOP }
    /* +0xd76c99 */ __asm { NOP }
    /* +0xd76c9a */ __asm { NOP }
    /* +0xd76c9b */ __asm { NOP }
    /* +0xd76c9c */ __asm { NOP }
    /* +0xd76c9d */ __asm { NOP }
    /* +0xd76c9e */ __asm { NOP }
    /* +0xd76c9f */ __asm { NOP }
    /* +0xd76ca0 */ __asm { PUSHFQ }
    /* +0xd76ca1 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xd76ca9 */ __asm { POPFQ }
    /* +0xd76caa */ __asm { MOV RCX,qword ptr [R10] }
    /* +0xd76cad */ __asm { TEST RCX,RCX }
    /* +0xd76cb0 */ __asm { JNZ 0x7fffa54e6d79 }
    /* +0xd76cb6 */ __asm { MOV dword ptr [RSP + 0x160],0x4c2ffab8 }
    /* +0xd76cc1 */ __asm { MOV R8D,dword ptr [RSP + 0x160] }
    /* +0xd76cc9 */ __asm { CMP R8D,0x576872de }
    /* +0xd76cd0 */ __asm { JNC 0x7fffa54ef20e }
    /* +0xd76cd6 */ __asm { MOV R9W,0x1cd0 }
    /* +0xd76cdb */ __asm { LEA R10,[0x7fffa47c16f2] }
    /* +0xd76ce2 */ __asm { ADD R9D,0xffff9cbe }
    /* +0xd76ce9 */ __asm { MOVSX R8,R9W }
    /* +0xd76ced */ __asm { CMP RAX,qword ptr [R10 + R8*0x1] }
    /* +0xd76cf1 */ __asm { NOP }
    /* +0xd76cf2 */ __asm { NOP }
    /* +0xd76cf3 */ __asm { NOP }
    /* +0xd76cf4 */ __asm { NOP }
    /* +0xd76cf5 */ __asm { NOP }
    /* +0xd76cf6 */ __asm { NOP }
    /* +0xd76cf7 */ __asm { NOP }
    /* +0xd76cf8 */ __asm { NOP }
    /* +0xd76cf9 */ __asm { NOP }
    /* +0xd76cfa */ __asm { NOP }
    /* +0xd76cfb */ __asm { NOP }
    /* +0xd76cfc */ __asm { NOP }
    /* +0xd76cfd */ __asm { NOP }
    /* +0xd76cfe */ __asm { NOP }
    /* +0xd76cff */ __asm { NOP }
    /* +0xd76d00 */ __asm { NOP }
    /* +0xd76d01 */ __asm { NOP }
    /* +0xd76d53 */ __asm { MOVAPS XMM10,xmmword ptr [RSP + 0x2b0] }
    /* +0xd76d5c */ __asm { MOVAPS XMM12,xmmword ptr [RSP + 0x2c0] }
    /* +0xd76d65 */ __asm { ADD RSP,0x2d8 }
    /* +0xd76d6c */ __asm { POP RSI }
    /* +0xd76d6d */ __asm { POP RBX }
    /* +0xd76d6e */ __asm { POP R15 }
    /* +0xd76d70 */ __asm { POP R13 }
    /* +0xd76d72 */ __asm { POP RDI }
    /* +0xd76d73 */ __asm { POP RBP }
    /* +0xd76d74 */ __asm { POP R14 }
    /* +0xd76d76 */ __asm { POP R12 }
    /* +0xd76d78 */ __asm { RET }
    /* +0xd76d79 */ __asm { MOV dword ptr [RSP + 0x160],0x80942673 }
    /* +0xd76d84 */ __asm { MOV R11D,dword ptr [RSP + 0x160] }
    /* +0xd76d8c */ __asm { MOV R8W,0x93c8 }
    /* +0xd76d91 */ __asm { XOR R8D,0x93c8 }
    /* +0xd76d98 */ __asm { MOVZX R8D,R8W }
    /* +0xd76d9c */ __asm { MOV R9D,R11D }
    /* +0xd76d9f */ __asm { AND R9D,0x1 }
    /* +0xd76da3 */ __asm { CMP R9D,R8D }
    /* +0xd76da6 */ __asm { JZ 0x7fffa55024d5 }
    /* +0xd76dac */ __asm { MOV R9D,0x9f54ef52 }
    /* +0xd76db2 */ __asm { MOV EDX,0xe0aaec72 }
    /* +0xd76db7 */ __asm { XOR RDX,R9 }
    /* +0xd76dba */ __asm { MOV R9,qword ptr [RDX] }
    /* +0xd76dbd */ __asm { MOV R8D,0x80964b6c }
    /* +0xd76dc3 */ __asm { IMUL R8D,R8D,-0x231b66ad }
    /* +0xd76dca */ __asm { MOV EDX,dword ptr [R8] }
    /* +0xd76dcd */ __asm { IMUL RDX,R9 }
    /* +0xd76dd1 */ __asm { MOV R8,RDX }
    /* +0xd76dd4 */ __asm { SHR R8,0x18 }
    /* +0xd76dd8 */ __asm { MOV dword ptr [RSP + 0x160],0xbc9fb754 }
    /* +0xd76de3 */ __asm { MOV R9D,dword ptr [RSP + 0x160] }
    /* +0xd76deb */ __asm { CMP R9D,0x916b6e71 }
    /* +0xd76df2 */ __asm { JBE 0x7fffa55024dd }
    /* +0xd76df8 */ __asm { PUSHFQ }
    /* +0xd76df9 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xd76e01 */ __asm { POPFQ }
    /* +0xd76e02 */ __asm { CMP R8D,ECX }
    /* +0xd76e05 */ __asm { JZ 0x7fffa54e6cb6 }
    /* +0xd76e0b */ __asm { MOV R9,RCX }
    /* +0xd76e0e */ __asm { SHR R9,0x20 }
    /* +0xd76e12 */ __asm { MOV RSI,-0x100000000 }
    /* +0xd76e1c */ __asm { AND RCX,RSI }
    /* +0xd76e1f */ __asm { MOV EBP,R8D }
    /* +0xd76e22 */ __asm { OR RBP,RCX }
    /* +0xd76e25 */ __asm { MOV qword ptr [R10],RBP }
    /* +0xd76e28 */ __asm { CMP R9D,0x5 }
    /* +0xd76e2c */ __asm { JL 0x7fffa54e73ce }
    /* +0xd76e32 */ __asm { CMP R9D,0x7 }
    /* +0xd76e36 */ __asm { JGE 0x7fffa54e77f9 }
    /* +0xd76e3c */ __asm { MOV CX,0x828a }
    /* +0xd76e40 */ __asm { IMUL ECX,ECX,0x2c8d }
    /* +0xd76e46 */ __asm { ADD ECX,0x6204 }
    /* +0xd76e4c */ __asm { MOVZX ECX,CX }
    /* +0xd76e4f */ __asm { CMP R9D,ECX }
    /* +0xd76e52 */ __asm { JGE 0x7fffa54e81e1 }
    /* +0xd76e58 */ __asm { MOV ECX,0x31f5eb0c }
    /* +0xd76e5d */ __asm { ADD ECX,0xce098e71 }
    /* +0xd76e63 */ __asm { MOVSXD R11,ECX }
    /* +0xd76e66 */ __asm { MOV R10D,0xaccc97e6 }
    /* +0xd76e6c */ __asm { LEA RSI,[0x7fffa478e123] }
    /* +0xd76e73 */ __asm { MOV R9D,0x58f8d735 }
    /* +0xd76e79 */ __asm { ADD R9D,0x270728cb }
    /* +0xd76e80 */ __asm { MOV ECX,0x350e4eaa }
    /* +0xd76e85 */ __asm { IMUL R10D,R10D,-0x1ead220f }
    /* +0xd76e8c */ __asm { ADD R10D,0x2697727a }
    /* +0xd76e93 */ __asm { ADD ECX,0xcaf21156 }
    /* +0xd76e99 */ __asm { MOV EBX,0xe091ec3 }
    /* +0xd76e9e */ __asm { ADD EBX,0xe6cc4523 }
    /* +0xd76ea4 */ __asm { MOVSXD RBX,EBX }
    /* +0xd76ea7 */ __asm { MOV qword ptr [RSP + 0x288],RBX }
    /* +0xd76eaf */ __asm { MOV R14D,0x4b347e87 }
    /* +0xd76eb5 */ __asm { ADD R14D,0x5666a959 }
    /* +0xd76ebc */ __asm { MOV R13,qword ptr [RSI + R11*0x1] }
    /* +0xd76ec0 */ __asm { MOV RDI,R13 }
    /* +0xd76ec3 */ __asm { SHR RDI,0x15 }
    /* +0xd76ec7 */ __asm { MOV R11,R13 }
    /* +0xd76eca */ __asm { SHR R11,0x1d }
    /* +0xd76ece */ __asm { MOV RSI,R13 }
    /* +0xd76ed1 */ __asm { SHR RSI,0x18 }
    /* +0xd76ed5 */ __asm { MOV R12D,R13D }
    /* +0xd76ed8 */ __asm { SHR R12D,0x7 }
    /* +0xd76edc */ __asm { MOV RBX,R13 }
    /* +0xd76edf */ __asm { SHR RBX,0x1e }
    /* +0xd76ee3 */ __asm { MOV qword ptr [RSP + 0x98],RBX }
    /* +0xd76eeb */ __asm { MOV EBP,EBX }
    /* +0xd76eed */ __asm { AND EBP,R9D }
    /* +0xd76ef0 */ __asm { MOV qword ptr [RSP + 0x200],RSI }
    /* +0xd76ef8 */ __asm { MOV R9D,ESI }
    /* +0xd76efb */ __asm { AND R9D,0x200000 }
    /* +0xd76f02 */ __asm { MOV EBX,R13D }
    /* +0xd76f05 */ __asm { AND EBX,0x1 }
    /* +0xd76f08 */ __asm { MOV qword ptr [RSP + 0x2a8],RDI }
    /* +0xd76f10 */ __asm { MOV R15D,EDI }
    /* +0xd76f13 */ __asm { AND R15D,0x40000 }
    /* +0xd76f1a */ __asm { MOVD XMM5,R15D }
    /* +0xd76f1f */ __asm { MOV R15,R13 }
    /* +0xd76f22 */ __asm { SHR R15,0x16 }
    /* +0xd76f26 */ __asm { MOV ESI,R15D }
    /* +0xd76f29 */ __asm { AND ESI,0x80000 }
    /* +0xd76f2f */ __asm { OR ESI,R9D }
    /* +0xd76f32 */ __asm { MOV EDI,R13D }
    /* +0xd76f35 */ __asm { SHR EDI,0x2 }
    /* +0xd76f38 */ __asm { AND EDI,0xe }
    /* +0xd76f3b */ __asm { OR EDI,EBX }
    /* +0xd76f3d */ __asm { MOV R9,R13 }
    /* +0xd76f40 */ __asm { SHR R9,0x9 }
    /* +0xd76f44 */ __asm { AND R11D,R10D }
    /* +0xd76f47 */ __asm { MOV RBX,R13 }
    /* +0xd76f4a */ __asm { SHR RBX,0xb }
    /* +0xd76f4e */ __asm { OR R11D,EBP }
    /* +0xd76f51 */ __asm { MOV R10D,R13D }
    /* +0xd76f54 */ __asm { SHR R10D,0x6 }
    /* +0xd76f58 */ __asm { AND R10D,0x10 }
    /* +0xd76f5c */ __asm { OR R10D,EDI }
    /* +0xd76f5f */ __asm { MOV RDI,R13 }
    /* +0xd76f62 */ __asm { SHR RDI,0x10 }
    /* +0xd76f66 */ __asm { AND R12D,0x1e0 }
    /* +0xd76f6d */ __asm { OR R10D,R12D }
    /* +0xd76f70 */ __asm { MOV R12D,R9D }
    /* +0xd76f73 */ __asm { AND R12D,0x600 }
    /* +0xd76f7a */ __asm { OR R10D,R12D }
    /* +0xd76f7d */ __asm { MOV R12D,EBX }
    /* +0xd76f80 */ __asm { AND R12D,0x1800 }
    /* +0xd76f87 */ __asm { OR R10D,R12D }
    /* +0xd76f8a */ __asm { MOV R12D,R13D }
    /* +0xd76f8d */ __asm { SHR R12D,0xf }
    /* +0xd76f91 */ __asm { AND R12D,0x8000 }
    /* +0xd76f98 */ __asm { OR R10D,R12D }
    /* +0xd76f9b */ __asm { MOV qword ptr [RSP + 0x208],RDI }
    /* +0xd76fa3 */ __asm { MOV R12D,EDI }
    /* +0xd76fa6 */ __asm { AND R12D,0x30000 }
    /* +0xd76fad */ __asm { OR R10D,R12D }
    /* +0xd76fb0 */ __asm { MOV RBP,R13 }
    /* +0xd76fb3 */ __asm { SHR RBP,0x1b }
    /* +0xd76fb7 */ __asm { MOVD XMM2,R10D }
    /* +0xd76fbc */ __asm { POR XMM2,XMM5 }
    /* +0xd76fc0 */ __asm { MOVD R10D,XMM2 }
    /* +0xd76fc5 */ __asm { OR R10D,ESI }
    /* +0xd76fc8 */ __asm { MOV RSI,R13 }
    /* +0xd76fcb */ __asm { SHR RSI,0xe }
    /* +0xd76fcf */ __asm { MOVD XMM5,R10D }
    /* +0xd76fd4 */ __asm { MOV qword ptr [RSP + 0xe0],RSI }
    /* +0xd76fdc */ __asm { MOV R12D,ESI }
    /* +0xd76fdf */ __asm { AND R12D,ECX }
    /* +0xd76fe2 */ __asm { MOV R10,R13 }
    /* +0xd76fe5 */ __asm { SHR R10,0x1a }
    /* +0xd76fe9 */ __asm { MOV qword ptr [RSP + 0x68],R10 }
    /* +0xd76fee */ __asm { MOVQ XMM2,R10 }
    /* +0xd76ff3 */ __asm { PAND XMM2,xmmword ptr [0x7fffa56bbe80] }
    /* +0xd76ffb */ __asm { AND EBP,0xf000000 }
    /* +0xd77001 */ __asm { POR XMM5,XMM2 }
    /* +0xd77005 */ __asm { OR R12D,R11D }
    /* +0xd77008 */ __asm { MOVD ECX,XMM5 }
    /* +0xd7700c */ __asm { OR ECX,EBP }
    /* +0xd7700e */ __asm { MOV R10,R13 }
    /* +0xd77011 */ __asm { SHR R10,0x17 }
    /* +0xd77015 */ __asm { MOVD XMM5,ECX }
    /* +0xd77019 */ __asm { MOV ECX,R10D }
    /* +0xd7701c */ __asm { OR ECX,0x100000 }
    /* +0xd77022 */ __asm { MOV EDI,R10D }
    /* +0xd77025 */ __asm { AND EDI,0x100000 }
    /* +0xd7702b */ __asm { MOV R11,R13 }
    /* +0xd7702e */ __asm { MOV qword ptr [RSP + 0x268],R13 }
    /* +0xd77036 */ __asm { SHR R11,0x1c }
    /* +0xd7703a */ __asm { AND R11D,0x30000000 }
    /* +0xd77041 */ __asm { CMP qword ptr [RSP + 0x288],-0xb2a9c1a }
    /* +0xd7704d */ __asm { CMOVNZ EDI,ECX }
    /* +0xd77050 */ __asm { MOVD XMM2,R11D }
    /* +0xd77055 */ __asm { POR XMM2,XMM5 }
    /* +0xd77059 */ __asm { OR EDI,R12D }
    /* +0xd7705c */ __asm { MOVD ECX,XMM2 }
    /* +0xd77060 */ __asm { OR EDI,ECX }
    /* +0xd77062 */ __asm { MOV dword ptr [RSP + 0x288],EDI }
    /* +0xd77069 */ __asm { MOV dword ptr [RSP + 0x160],R14D }
    /* +0xd77071 */ __asm { MOV ECX,dword ptr [RSP + 0x160] }
    /* +0xd77078 */ __asm { CMP ECX,0xae47b8f3 }
    /* +0xd7707e */ __asm { JNC 0x7fffa550262d }
    /* +0xd77084 */ __asm { MOV R11D,0x38a99f8d }
    /* +0xd7708a */ __asm { MOV RSI,qword ptr [RSP + 0x2a8] }
    /* +0xd77092 */ __asm { AND ESI,0x80000 }
    /* +0xd77098 */ __asm { MOV RCX,qword ptr [RSP + 0xe0] }
    /* +0xd770a0 */ __asm { AND ECX,0x1000 }
    /* +0xd770a6 */ __asm { MOV qword ptr [RSP + 0xe0],RCX }
    /* +0xd770ae */ __asm { MOV EBP,0x461e691d }
    /* +0xd770b3 */ __asm { AND R15D,0x100000 }
    /* +0xd770ba */ __asm { MOV RDI,qword ptr [RSP + 0x268] }
    /* +0xd770c2 */ __asm { MOV R12,RDI }
    /* +0xd770c5 */ __asm { SHR R12,0x14 }
    /* +0xd770c9 */ __asm { MOV ECX,EDI }
    /* +0xd770cb */ __asm { SHR ECX,0xd }
    /* +0xd770ce */ __asm { AND ECX,0x800 }
    /* +0xd770d4 */ __asm { MOV qword ptr [RSP + 0x1e8],RCX }
    /* +0xd770dc */ __asm { MOV RCX,RDI }
    /* +0xd770df */ __asm { SHR RCX,0x13 }
    /* +0xd770e3 */ __asm { AND ECX,0x18000 }
    /* +0xd770e9 */ __asm { MOV qword ptr [RSP + 0x2a8],RCX }
    /* +0xd770f1 */ __asm { AND R10D,0x200000 }
    /* +0xd770f8 */ __asm { AND R9D,0x180 }
    /* +0xd770ff */ __asm { MOVD XMM5,R9D }
    /* +0xd77104 */ __asm { MOV R14,qword ptr [RSP + 0x200] }
    /* +0xd7710c */ __asm { MOV ECX,R14D }
    /* +0xd7710f */ __asm { AND ECX,0x400000 }
    /* +0xd77115 */ __asm { OR R15D,ESI }
    /* +0xd77118 */ __asm { MOV R9,RDI }
    /* +0xd7711b */ __asm { SHR R9,0x20 }
    /* +0xd7711f */ __asm { AND R9D,0x4000000 }
    /* +0xd77126 */ __asm { MOV qword ptr [RSP + 0x50],R9 }
    /* +0xd7712b */ __asm { OR ECX,R10D }
    /* +0xd7712e */ __asm { MOV R9,RDI }
    /* +0xd77131 */ __asm { SHR R9,0x21 }
    /* +0xd77135 */ __asm { AND R9D,0x8000000 }
    /* +0xd7713c */ __asm { MOV qword ptr [RSP + 0x218],R9 }
    /* +0xd77144 */ __asm { MOV R9,qword ptr [RSP + 0x98] }
    /* +0xd7714c */ __asm { AND R9D,0x2000000 }
    /* +0xd77153 */ __asm { MOV qword ptr [RSP + 0x98],R9 }
    /* +0xd7715b */ __asm { OR ECX,R15D }
    /* +0xd7715e */ __asm { MOV dword ptr [RSP + 0x1f8],ECX }
    /* +0xd77165 */ __asm { MOV R15D,EDI }
    /* +0xd77168 */ __asm { SHR R15D,0x5 }
    /* +0xd7716c */ __asm { AND R15D,0x40 }
    /* +0xd77170 */ __asm { AND EBX,0x600 }
    /* +0xd77176 */ __asm { MOVD XMM2,EBX }
    /* +0xd7717a */ __asm { POR XMM2,XMM5 }
    /* +0xd7717e */ __asm { MOVD R10D,XMM2 }
    /* +0xd77183 */ __asm { OR R10D,R15D }
    /* +0xd77186 */ __asm { MOV EBX,EDI }
    /* +0xd77188 */ __asm { SHR EBX,0x1 }
    /* +0xd7718a */ __asm { AND EBX,0x3 }
    /* +0xd7718d */ __asm { OR R10D,EBX }
    /* +0xd77190 */ __asm { MOV R15D,0x47d96507 }
    /* +0xd77196 */ __asm { ADD R15D,0x18d3c7ab }
    /* +0xd7719d */ __asm { ROL R15D,0xf }
    /* +0xd771a1 */ __asm { AND R12D,0x60000 }
    /* +0xd771a8 */ __asm { OR R10D,R12D }
    /* +0xd771ab */ __asm { MOV R12,RDI }
    /* +0xd771ae */ __asm { SHR R12,0x22 }
    /* +0xd771b2 */ __asm { MOV RCX,qword ptr [RSP + 0x68] }
    /* +0xd771b7 */ __asm { AND ECX,0x1000000 }
    /* +0xd771bd */ __asm { MOV RSI,qword ptr [RSP + 0x208] }
    /* +0xd771c5 */ __asm { AND ESI,0x2000 }
    /* +0xd771cb */ __asm { XOR R11D,0xe6d106d9 }
    /* +0xd771d2 */ __asm { MOV EBX,0xa34eb95b }
    /* +0xd771d7 */ __asm { ADD EBX,0x1b70fa7e }
    /* +0xd771dd */ __asm { MOVSXD R13,EBX }
    /* +0xd771e0 */ __asm { ADD EBP,0x9b2e04d5 }
    /* +0xd771e6 */ __asm { AND R14D,0x800000 }
    /* +0xd771ed */ __asm { MOV R9D,0x66414b85 }
    /* +0xd771f3 */ __asm { ADD R9D,0x68d7f072 }
    /* +0xd771fa */ __asm { XOR R9D,0x8153b3ea }
    /* +0xd77201 */ __asm { XOR EBX,EBX }
    /* +0xd77203 */ __asm { CMP R9,RBP }
    /* +0xd77206 */ __asm { CMOVBE RBX,qword ptr [RSP + 0x1e8] }
    /* +0xd7720f */ __asm { MOVD XMM5,dword ptr [RSP + 0x288] }
    /* +0xd77218 */ __asm { CMP R11,R13 }
    /* +0xd7721b */ __asm { MOV R9D,0xf88d1db9 }
    /* +0xd77221 */ __asm { MOV R11D,0x772e247 }
    /* +0xd77227 */ __asm { CMOVA R11D,R9D }
    /* +0xd7722b */ __asm { MOVD XMM2,R11D }
    /* +0xd77230 */ __asm { PADDD XMM2,XMM5 }
    /* +0xd77234 */ __asm { MOVD R11D,XMM2 }
    /* +0xd77239 */ __asm { LEA R13D,[R11 + -0x2] }
    /* +0xd7723d */ __asm { SHR R11D,0x2 }
    /* +0xd77241 */ __asm { MOV R9D,0x96593056 }
    /* +0xd77247 */ __asm { CMP R15,R9 }
    /* +0xd7724a */ __asm { MOVD XMM5,dword ptr [RSP + 0x98] }
    /* +0xd77253 */ __asm { MOVD XMM1,dword ptr [RSP + 0xe0] }
    /* +0xd7725c */ __asm { MOVD XMM3,ECX }
    /* +0xd77260 */ __asm { CMOVNZ R11D,R13D }
    /* +0xd77264 */ __asm { MOVQ XMM2,RBX }
    /* +0xd77269 */ __asm { MOV ECX,EDI }
    /* +0xd7726b */ __asm { SHR ECX,0x11 }
    /* +0xd7726e */ __asm { AND ECX,0x4000 }
    /* +0xd77274 */ __asm { OR ECX,dword ptr [RSP + 0x2a8] }
    /* +0xd7727b */ __asm { OR ECX,ESI }
    /* +0xd7727d */ __asm { OR ECX,R10D }
    /* +0xd77280 */ __asm { MOVD XMM0,ECX }
    /* +0xd77284 */ __asm { POR XMM0,XMM1 }
    /* +0xd77288 */ __asm { AND R12D,0x30000000 }
    /* +0xd7728f */ __asm { OR R12D,dword ptr [RSP + 0x218] }
    /* +0xd77297 */ __asm { MOVD ECX,XMM0 }
    /* +0xd7729b */ __asm { OR ECX,R12D }
    /* +0xd7729e */ __asm { MOVD XMM1,ECX }
    /* +0xd772a2 */ __asm { MOVQ XMM0,RDI }
    /* +0xd772a7 */ __asm { PSRLQ XMM0,0x4 }
    /* +0xd772ac */ __asm { PSHUFD XMM0,XMM0,0x44 }
    /* +0xd772b1 */ __asm { PAND XMM0,xmmword ptr [0x7fffa56b8520] }
    /* +0xd772b9 */ __asm { PSHUFD XMM4,XMM0,0xee }
    /* +0xd772be */ __asm { POR XMM4,XMM0 }
    /* +0xd772c2 */ __asm { POR XMM1,XMM3 }
    /* +0xd772c6 */ __asm { OR R14D,dword ptr [RSP + 0x50] }
    /* +0xd772cb */ __asm { MOVD ECX,XMM1 }
    /* +0xd772cf */ __asm { OR R14D,ECX }
    /* +0xd772d2 */ __asm { MOVD XMM3,R14D }
    /* +0xd772d7 */ __asm { POR XMM3,XMM5 }
    /* +0xd772db */ __asm { MOVD ECX,XMM4 }
    /* +0xd772df */ __asm { MOVD R9D,XMM3 }
    /* +0xd772e4 */ __asm { OR R9D,ECX }
    /* +0xd772e7 */ __asm { MOVD XMM5,R9D }
    /* +0xd772ec */ __asm { POR XMM5,XMM2 }
    /* +0xd772f0 */ __asm { MOVD ECX,XMM5 }
    /* +0xd772f4 */ __asm { OR ECX,dword ptr [RSP + 0x1f8] }
    /* +0xd772fb */ __asm { XOR ECX,R11D }
    /* +0xd772fe */ __asm { CMP ECX,0x31e6a186 }
    /* +0xd77304 */ __asm { JNZ 0x7fffa54ef216 }
    /* +0xd7730a */ __asm { PUSHFQ }
    /* +0xd7730b */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xd77313 */ __asm { POPFQ }
    /* +0xd77314 */ __asm { MOV dword ptr [RSP + 0x160],0x3416bc5d }
    /* +0xd7731f */ __asm { MOV ECX,dword ptr [RSP + 0x160] }
    /* +0xd77326 */ __asm { MOV R11W,0x9ceb }
    /* +0xd7732b */ __asm { XOR R11D,0x6314 }
    /* +0xd77332 */ __asm { ROL R11W,0xb }
    /* +0xd77337 */ __asm { MOVSX R11D,R11W }
    /* +0xd7733b */ __asm { CMP ECX,R11D }
    /* +0xd7733e */ __asm { JLE 0x7fffa550263c }
    /* +0xd77344 */ __asm { MOV R9D,0x1964dd16 }
    /* +0xd7734a */ __asm { ADD R9D,0xde9619af }
    /* +0xd77351 */ __asm { MOV R10D,0x8804f505 }
    /* +0xd77357 */ __asm { XOR R10,R9 }
    /* +0xd7735a */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xd77361 */ __asm { NOP }
    /* +0xd77362 */ __asm { MOV RCX,0x0 }
    /* +0xd77369 */ __asm { MOV ECX,dword ptr [R10] }
    /* +0xd7736c */ __asm { CMP ECX,0x6 }
    /* +0xd7736f */ __asm { JBE 0x7fffa54e9bb1 }
    /* +0xd77375 */ __asm { MOV ECX,0x90dfb802 }
    /* +0xd7737a */ __asm { XOR ECX,0x47de4bc9 }
    /* +0xd77380 */ __asm { ADD ECX,0xab3cd003 }
    /* +0xd77386 */ __asm { MOV dword ptr [RSP + 0x160],ECX }
    /* +0xd7738d */ __asm { MOV ECX,dword ptr [RSP + 0x160] }
    /* +0xd77394 */ __asm { AND ECX,0x1 }
    /* +0xd77397 */ __asm { MOV R11W,0xce88 }
    /* +0xd7739c */ __asm { ADD R11D,0x3178 }
    /* +0xd773a3 */ __asm { ROL R11W,0xe }
    /* +0xd773a8 */ __asm { MOVZX R11D,R11W }
    /* +0xd773ac */ __asm { CMP ECX,R11D }
    /* +0xd773af */ __asm { JNZ 0x7fffa5502644 }
    /* +0xd773b5 */ __asm { NOP }
    /* +0xd773b6 */ __asm { MOV R10,0x0 }
    /* +0xd773bd */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd773c4 */ __asm { MOV ECX,0x1 }
    /* +0xd773c9 */ __asm { JMP 0x7fffa54ebd34 }
    /* +0xd773ce */ __asm { CMP R9D,0x3 }
    /* +0xd773d2 */ __asm { JL 0x7fffa54e7cb1 }
    /* +0xd773d8 */ __asm { MOV CX,0xc7dd }
    /* +0xd773dc */ __asm { XOR ECX,0x5afb }
    /* +0xd773e2 */ __asm { ADD ECX,0x62de }
    /* +0xd773e8 */ __asm { MOVZX ECX,CX }
    /* +0xd773eb */ __asm { CMP R9D,ECX }
    /* +0xd773ee */ __asm { JGE 0x7fffa54e85c4 }
    /* +0xd773f4 */ __asm { MOV R9W,0x6670 }
    /* +0xd773f9 */ __asm { MOV qword ptr [RSP + 0x208],R9 }
    /* +0xd77401 */ __asm { LEA R10,[0x7fffa4795ded] }
    /* +0xd77408 */ __asm { MOV ECX,0xff4b24f5 }
    /* +0xd7740d */ __asm { MOV R11D,0xdd2c862a }
    /* +0xd77413 */ __asm { MOV R15D,0xb77f9b89 }
    /* +0xd77419 */ __asm { XOR R15D,0xed3e2fd4 }
    /* +0xd77420 */ __asm { IMUL R12D,ECX,0x5b969a17 }
    /* +0xd77427 */ __asm { ADD R12D,0xdd764bfd }
    /* +0xd7742e */ __asm { MOV ECX,0x1e1d9c65 }
    /* +0xd77433 */ __asm { IMUL R13D,R11D,-0x5ed45761 }
    /* +0xd7743a */ __asm { ADD R13D,0x45300ee9 }
    /* +0xd77441 */ __asm { ADD ECX,0xe1e169b6 }
    /* +0xd77447 */ __asm { MOVSXD R11,ECX }
    /* +0xd7744a */ __asm { MOV R14,qword ptr [R10 + R11*0x1] }
    /* +0xd7744e */ __asm { MOV EDI,R14D }
}


// ============================================================================
// Function : FUN_7fffa55116f0  |  RVA: 0xda16f0  |  Size: 664 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa55117c4) */
/* WARNING: Removing unreachable block (ram,0x7fffa551188f) */

void FUN_7fffa55116f0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  bRam00007fffa4785f6b = '\0';
  uRam00007fffa4785f88 = 0;
  uRam00007fffa4785f90 = 0;
  uRam00007fffa4785f78 = 0;
  uRam00007fffa4785f80 = 0;
  uRam00007fffa4785f9a = 0;
  uVar1 = rdtsc();
  lVar5 = (CONCAT44(0xffffffff,(int)(uVar1 >> 0x20)) << 0x20 | uVar1 & 0xffffffff) *
          0x3d50452227c793e + 0xb;
  lVar2 = 4;
  while( true ) {
    lVar6 = lVar5 * 0x3d50452227c793e + 0xb;
    lVar3 = lVar6 * 0x3d50452227c793e + 0xb;
    lVar4 = lVar3 * 0x3d50452227c793e + 0xb;
    lVar5 = lVar4 * 0x3d50452227c793e + 0xb;
    *(char *)(lVar2 + 0x7fffa4785f69) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar2 + 0x7fffa4785f68) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar2 + 0x7fffa4785f66) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar2 + 0x7fffa4785f67) = (char)((uint64_t)lVar3 >> 0x20);
    if (lVar2 == 0x38) break;
    lVar2 = lVar2 + 4;
  }
  bRam00007fffa4785f6b = bRam00007fffa4785f6b + 1 & 3;
  *(uint64_t *)((uint64_t)bRam00007fffa4785f6b * 8 + 0x7fffa4785f78) = uRam00007fffa4785f9a;
  return;
}


// ============================================================================
// Function : FUN_7fffa5511990  |  RVA: 0xda1990  |  Size: 1451 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5511ee8) */

uint64_t FUN_7fffa5511990(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  int iVar5;
  uint32_t uVar6;
  int64_t lVar7;
  uint32_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint32_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int iStack_98;
  
  uVar1 = param_2 + 0x40;
  uVar3 = (uint32_t)uVar1 & 0xe333023a;
  uVar4 = param_2 + 0x31a078f9;
  uVar12 = ~(~uVar1 & 0xffffffff1cccfdc5);
  lVar9 = (uVar12 | 0xe333023a) * 0x4f7e589;
  lVar7 = (uVar12 ^ 0xffffffff1cccfdc5) * 0x1386acb5 + (uVar12 & 0xffffffff1cccfdc5) * 0x46d68934;
  uVar10 = lVar9 + lVar7;
  uVar13 = ~uVar10;
  uVar14 = ~uVar10;
  iStack_98 = (int)(uVar12 & 0xffffffff1cccfdc5);
  uVar8 = (uint32_t)uVar10;
  iVar5 = iStack_98 * -0x7a498ce7 + (int)(uVar12 ^ 0xffffffff1cccfdc5) * -0x4201cadf + uVar8 +
          ((uint32_t)uVar12 & 0xe333023a) * -0x4f7e589;
  uVar11 = 0x623c386c - iVar5;
  uVar12 = uVar10 & uVar1 & 0xffffffff1cccfdc5;
  uVar6 = uVar8 - 1;
  if ((uVar11 * 0x40000 | uVar11 >> 0xe) != 0xe0a28ed8) {
    uVar6 = (uint32_t)uVar14;
  }
  bVar2 = (uint8_t)iVar5 & 0x1f;
  uVar15 = uVar14;
  if (0xcafedc54 < (int64_t)(int)~(0x52de1c << bVar2 | 0x52de1cU >> 0x20 - bVar2)) {
    uVar15 = lVar9 + 1 + lVar7;
  }
  FUN_7fffa517b6d0((((uVar15 ^ uVar1 ^ 0xe333023a) & uVar10) +
                   (uint64_t)(uVar8 & (uint32_t)uVar13 & uVar3)) * 0x9e640aa8,0xb5185fc7,
                   uVar12 & uVar13,
                   ((uVar12 & uVar10) -
                   ((uVar10 & uVar1 & 0xffffffff1cccfdc5 & uVar14) +
                   ((~uVar1 | 0xe333023a) ^ uVar13 ^ uVar10))) * 0xeb794f89 +
                   (uVar1 ^ 0xffffffff1cccfdc5) * 0x335ecbe6 +
                   (uVar10 & (uVar1 ^ 0xffffffff1cccfdc5) ^ uVar10) * -0x6bd71571 +
                   (uVar3 & (uint32_t)uVar14 ^ uVar10) * -0x19cd8bc2 +
                   ((uVar1 | 0xe333023a) ^ uVar13 ^ uVar10) * -0x1a3ad5e +
                   (uVar6 & uVar3 ^ uVar13) * 0xd42147d4,
                   (uVar4 * 0x2000000 | uVar4 >> 0x27) ^ (uVar4 << 0x23 | uVar4 >> 0x1d) ^ uVar4);
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5513504  |  RVA: 0xda3504  |  Size: 501 bytes
// Callers  : FUN_7fffa4cf5f50@0x585f50
// Callees  : FUN_7fffa5488850@0xd18850, FUN_7fffa54e557c@0xd7557c, FUN_7fffa560e3c8@0xe9e3c8
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5513504(int64_t param_1)

{
  uint8_t bVar1;
  uint8_t bVar2;
  int iVar3;
  uint32_t uVar4;
  uint8_t *pbVar5;
  uint8_t *puVar6;
  uint64_t uVar7;
  uint8_t *pbVar8;
  int64_t lVar9;
  uint8_t auStack_788 [32];
  uint8_t *pbStack_768;
  uint8_t *puStack_760;
  uint32_t uStack_758;
  uint32_t uStack_750;
  uint32_t uStack_748;
  uint64_t uStack_738;
  uint8_t abStack_730 [24];
  uint8_t auStack_718 [231];
  uint8_t abStack_631 [25];
  uint8_t auStack_618 [231];
  uint8_t abStack_531 [25];
  uint8_t auStack_518 [256];
  uint8_t abStack_418 [1024];
  uint64_t uStack_18;
  
  uStack_18 = _DAT_7fffa4780040 ^ (uint64_t)auStack_788;
  abStack_730[8] = 0;
  abStack_730[9] = 0;
  abStack_730[10] = 0;
  abStack_730[0xb] = 0;
  uStack_738 = 0;
  abStack_730[0] = 0;
  abStack_730[1] = 0;
  abStack_730[2] = 0;
  abStack_730[3] = 0;
  abStack_730[4] = 0;
  abStack_730[5] = 0;
  abStack_730[6] = 0;
  abStack_730[7] = 0;
  if ((*(int *)(param_1 + 4) == 0xfde9) || (iVar3 = (*(code *)&DAT_7ff84ea417e0)(), iVar3 == 0)) {
    uVar4 = 0;
    pbVar5 = (uint8_t *)(param_1 + 0x19);
    do {
      if (uVar4 - 0x41 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = (char)uVar4 + 0x20;
      }
      else if (uVar4 - 0x61 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x20;
        bVar2 = (char)uVar4 - 0x20;
      }
      else {
        bVar2 = 0;
      }
      pbVar5[0x100] = bVar2;
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    puVar6 = auStack_718;
    lVar9 = 0x100;
    do {
      *puVar6 = (char)uVar4;
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 < 0x100);
    pbVar5 = (uint8_t *)((int64_t)&uStack_738 + 6);
    auStack_718[0] = 0x20;
    bVar2 = uStack_738._6_1_;
    while (bVar2 != 0) {
      bVar1 = pbVar5[1];
      uVar7 = (uint64_t)bVar2;
      while ((uVar4 = (uint32_t)uVar7, uVar4 <= bVar1 && (uVar4 < 0x100))) {
        auStack_718[uVar7] = 0x20;
        uVar7 = (uint64_t)(uVar4 + 1);
      }
      pbVar5 = pbVar5 + 2;
      bVar2 = *pbVar5;
    }
    uStack_758 = 0;
    puStack_760 = (uint8_t *)CONCAT44(puStack_760._4_4_,*(uint32_t *)(param_1 + 4));
    pbStack_768 = abStack_418;
    FUN_7fffa54e557c(0,1,auStack_718,0x100);
    uStack_748 = 0;
    uStack_750 = *(uint32_t *)(param_1 + 4);
    puStack_760 = auStack_618;
    uStack_758 = 0x100;
    pbStack_768._0_4_ = 0x100;
    FUN_7fffa560e3c8(0,*(uint64_t *)(param_1 + 0x220),0x100,auStack_718);
    uStack_748 = 0;
    uStack_750 = *(uint32_t *)(param_1 + 4);
    puStack_760 = auStack_518;
    uStack_758 = 0x100;
    pbStack_768 = (uint8_t *)CONCAT44(pbStack_768._4_4_,0x100);
    FUN_7fffa560e3c8(0,*(uint64_t *)(param_1 + 0x220),0x200,auStack_718);
    pbVar8 = abStack_418;
    pbVar5 = (uint8_t *)(param_1 + 0x19);
    do {
      if ((*pbVar8 & 1) == 0) {
        if ((*pbVar8 & 2) == 0) {
          bVar2 = 0;
        }
        else {
          *pbVar5 = *pbVar5 | 0x20;
          bVar2 = pbVar5[(int64_t)(abStack_531 + -param_1)];
        }
      }
      else {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = pbVar5[(int64_t)(abStack_631 + -param_1)];
      }
      pbVar5[0x100] = bVar2;
      pbVar8 = pbVar8 + 2;
      pbVar5 = pbVar5 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  FUN_7fffa5488850(uStack_18 ^ (uint64_t)auStack_788);
  return;
}


// ============================================================================
// Function : FUN_7fffa5513700  |  RVA: 0xda3700  |  Size: 968 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5513700(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint64_t uVar4;
  uint16_t uVar5;
  uint16_t uVar6;
  uint8_t bVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  
  uRam00007fffa47867b5 = 0;
  uRam00007fffa47867d2 = 0;
  uRam00007fffa47867da = 0;
  uRam00007fffa47867c2 = 0;
  uRam00007fffa47867ca = 0;
  uRam00007fffa47867e2 = 0;
  _uRam00007fffa47867f8 = 0;
  uVar2 = rdtsc();
  lVar9 = (CONCAT44(0x7fff,(int)((uint64_t)uVar2 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar2)) * 0x80882b06ef88429 + 0xb;
  uVar1 = 0;
  do {
    uVar8 = uVar1;
    lVar9 = lVar9 * 0x80882b06ef88429 + 0xb;
    *(char *)(uVar8 + 0x7fffa47867a8) = (char)((uint64_t)lVar9 >> 0x20);
    uVar1 = uVar8 + 3;
    lVar9 = lVar9 * 0x80882b06ef88429 + 0xb;
    *(char *)(uVar8 + 0x7fffa47867a9) = (char)((uint64_t)lVar9 >> 0x20);
    lVar9 = lVar9 * 0x80882b06ef88429 + 0xb;
    *(char *)(uVar8 + 0x7fffa47867aa) = (char)((uint64_t)lVar9 >> 0x20);
  } while ((uVar1 * 0x1000 | uVar1 >> 0x34) * -0x4879a00e2d1ccef3 != -0x244fbdc20c16e000);
  uVar5 = (uint16_t)uVar1;
  lVar9 = (int64_t)(short)(uVar5 ^ 0xa0e5);
  uVar6 = uVar5 | 1;
  uVar10 = (uint32_t)uVar1 ^ 0x4fb9;
  uVar4 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)
                           (short)(~(uVar6 * 0x2375) << 2 | (uint16_t)~(uVar6 * 0x2375) >> 0xe) +
                          0x7fffa478d214) * 0x33333334 + 0x33333334) * 5;
  uVar11 = uVar4 >> 0x20;
  *(uint8_t *)(lVar9 + 0x7fffa478c703 + uVar11 * 8) =
       ~*(uint8_t *)((int64_t)(short)((uint16_t)uVar10 >> 1 | (uint16_t)((uVar10 & 1) != 0) << 0xf) +
                 0x7fffa478c007);
  *(uint8_t *)(lVar9 + 0x7fffa478c705 + uVar11 * 8) =
       ~*(uint8_t *)((int64_t)(short)(-0x288b - uVar5) + 0x7fffa47890df);
  bVar7 = uRam00007fffa47867f8._4_1_;
  bVar3 = (uint8_t)uVar1 & 0xf;
  *(uint8_t *)(lVar9 + 0x7fffa478c704 + uVar11 * 8) =
       ~*(uint8_t *)((int64_t)(short)(-0x7e0d - uVar5) + 0x7fffa478e660);
  *(uint8_t *)(lVar9 + 0x7fffa478c706 + uVar11 * 8) =
       ~*(uint8_t *)((int64_t)(short)(0x4a70 << bVar3 | 0x4a70U >> 0x10 - bVar3) + 0x7fffa478a6d2);
  *(uint8_t *)(lVar9 + 0x7fffa478c708 + uVar11 * 8) =
       ~*(uint8_t *)((int64_t)(int)(-0xeb71 - (uint32_t)uVar1) + 0x7fffa47953c8);
  *(uint8_t *)(lVar9 + 0x7fffa478c70a + uVar11 * 8) =
       ~*(uint8_t *)((int64_t)(short)~(uVar6 * -0x10c6 | (uint16_t)((short)(uVar6 * -0x863) < 0)) +
                 0x7fffa478719e);
  *(uint8_t *)(lVar9 + 0x7fffa478c707 + uVar11 * 8) = ~bVar7;
  bVar3 = (uint8_t)uVar1 & 0xf;
  *(uint8_t *)(lVar9 + 0x7fffa478c709 + uVar11 * 8) =
       ~*(uint8_t *)((int64_t)(short)(0x2573 << bVar3 | 0x2573U >> 0x10 - bVar3) + 0x7fffa4789b69);
  *(char *)((int64_t)(short)(((short)((int)uVar8 + -0x25e1) + -0x491) * -0x148f) + 0x7fffa478c6a0)
       = (char)(uVar4 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5513ad0  |  RVA: 0xda3ad0  |  Size: 1 bytes
// Callers  : FUN_7fffa56a57c0@0xf357c0, FUN_7fffa5465140@0xcf5140, FUN_7fffa507eeb0@0x90eeb0, FUN_7fffa52c3c00@0xb53c00, FUN_7fffa517e320@0xa0e320, FUN_7fffa5253720@0xae3720
// Callees  : none
// ============================================================================
void FUN_7fffa5513ad0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5513ae0  |  RVA: 0xda3ae0  |  Size: 48 bytes
// Callers  : FUN_7fffa5248a30@0xad8a30
// Callees  : FUN_7fffa54539d0@0xce39d0, FUN_7fffa4e91240@0x721240
// ============================================================================
uint64_t FUN_7fffa5513ae0(uint64_t param_1,uint64_t param_2,uint32_t param_3,
                          uint64_t param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  uVar1 = FUN_7fffa4e91240(param_1,param_2,param_4);
  if ((int)uVar1 == 0) {
    lVar2 = FUN_7fffa54539d0();
    *(uint32_t *)(lVar2 + 0x78) = param_3;
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}


// ============================================================================
// Function : FUN_7fffa5513b10  |  RVA: 0xda3b10  |  Size: 24 bytes
// Callers  : FUN_7fffa517b810@0xa0b810, FUN_7fffa54037a0@0xc937a0
// Callees  : FUN_7fffa54539d0@0xce39d0
// ============================================================================
void FUN_7fffa5513b10(uint64_t param_1)

{
  int64_t lVar1;
  
  lVar1 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar1 + 0x68) = param_1;
  return;
}

