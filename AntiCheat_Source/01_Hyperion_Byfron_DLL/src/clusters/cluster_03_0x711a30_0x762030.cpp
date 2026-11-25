// Subsystem: Internal Routines Cluster 03 (0x711a30 .. 0x762030)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : Unwind@7fffa4e81a30  |  RVA: 0x711a30  |  Size: 406 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e81a30(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  int64_t lVar4;
  
  if (*(int64_t *)(param_2 + 0x4b0) != 0) {
    uVar3 = (*(uint32_t *)(param_2 + 0x9d8) ^ 0x503142f) + 0x63c94ba5;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
    plVar1 = *(int64_t **)
              ((int64_t)(int)(0x4d6a222c - (*(uint32_t *)(param_2 + 0x460) ^ 0x157b6eb2) ^ 0xc00002ee)
              + 0x7fffa4795d0e);
    if (plVar1 == (int64_t *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)(short)(-0x4018 - ((short)*(uint64_t *)(param_2 + 0x16b8) + 0x5362)) +
             0x7fffa47bfea4);
    *plVar1 = *plVar1 + (*(int64_t *)
                          (uint64_t)
                          (uint32_t)((int)*(uint64_t *)(param_2 + 0x24e0) *
                                (*(int *)(param_2 + 0x548) * 0x214fb4e6 + -0x7f2c11ea)) -
                        (*(int64_t *)(param_2 + 0x4b0) +
                         *(int64_t *)(uint64_t)(uVar3 << bVar2 | uVar3 >> 0x20 - bVar2) + lVar4));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e81bd0  |  RVA: 0x711bd0  |  Size: 434 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e81bd0(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  int64_t lVar5;
  
  if (*(int64_t *)(param_2 + 0x4b0) != 0) {
    uVar4 = *(uint32_t *)(param_2 + 0x4c8) ^ 0xdd58324d;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
    plVar1 = *(int64_t **)
              ((int64_t)(short)~((uint16_t)*(uint64_t *)(param_2 + 0x9d8) ^ 0x2856) +
              0x7fffa47870df);
    if (plVar1 == (int64_t *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    uVar3 = ((uint16_t)*(uint64_t *)(param_2 + 0x1568) | 1) * 0x71fc;
    LOCK();
    plVar1 = (int64_t *)((int64_t)(short)~((uVar3 ^ 4) << 2 | uVar3 >> 0xe) + 0x7fffa47c56cc);
    *plVar1 = *plVar1 + (*(int64_t *)
                          ((uint64_t)
                           (uint32_t)(*(int *)(param_2 + 0x19c0) * -0x2431a616 +
                                 (int)*(uint64_t *)(param_2 + 0x16b8)) ^ 0xb2d651bc) -
                        (*(int64_t *)(param_2 + 0x4b0) +
                         *(int64_t *)
                          ((uint64_t)(uVar4 << bVar2 | uVar4 >> 0x20 - bVar2) ^ 0xd35a2804) + lVar5
                        ));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e81d90  |  RVA: 0x711d90  |  Size: 421 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e81d90(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  int64_t lVar3;
  int iVar4;
  uint16_t uVar5;
  int iVar6;
  
  if (*(int64_t *)(param_2 + 0x490) != 0) {
    iVar6 = (int)*(uint64_t *)(param_2 + 0x16b8);
    iVar4 = 0x7e146a1f - iVar6;
    uVar5 = (short)*(uint32_t *)(param_2 + 0x8e0) * 0x204d + 0x5238;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1988) & 0xf;
    plVar1 = *(int64_t **)
              ((int64_t)(short)(uVar5 >> bVar2 | uVar5 << 0x10 - bVar2) + 0x7fffa4786fbf);
    if (plVar1 == (int64_t *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar1;
    }
    uVar5 = 0x33c8 - (short)*(uint32_t *)(param_2 + 0x1018);
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)
              (short)((short)*(uint64_t *)(param_2 + 0x8e0) * (uVar5 * 0x800 | uVar5 >> 5)) +
             0x7fffa47bfba5);
    *plVar1 = *plVar1 + (*(int64_t *)
                          (uint64_t)(~(iVar6 + 0x7aed950eU) + *(int *)(param_2 + 0xba0)) -
                        (*(int64_t *)
                          (uint64_t)
                          ((iVar4 * 0x13271044 | (uint32_t)(iVar4 * -0x7b363bef) >> 0x1e) ^
                          *(uint32_t *)(param_2 + 0x11c0)) + *(int64_t *)(param_2 + 0x490) + lVar3));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e81f40  |  RVA: 0x711f40  |  Size: 403 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e81f40(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  int64_t lVar6;
  uint8_t bVar7;
  int iVar8;
  uint32_t uVar9;
  
  if (*(int64_t *)(param_2 + 0x490) != 0) {
    bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8);
    bVar2 = bVar7 & 0x1f;
    iVar8 = (int)*(uint64_t *)(param_2 + 0xba0);
    uVar4 = (-0x22bf0b07 << bVar2 | 0xdd40f4f9U >> 0x20 - bVar2) + iVar8;
    uVar5 = 0x12f41ada - iVar8;
    bVar7 = bVar7 & 0x1f;
    uVar3 = (uint16_t)((int)*(uint64_t *)(param_2 + 0x16b8) + 0x20a0) ^ 0x8698;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1568) & 0xf;
    plVar1 = *(int64_t **)
              ((int64_t)(short)~(uVar3 << bVar2 | uVar3 >> 0x10 - bVar2) + 0x7fffa4788ee3);
    if (plVar1 == (int64_t *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    uVar9 = (int)*(uint64_t *)(param_2 + 0x548) * 0x4ac36535;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x528) & 0x1f;
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)(int)(0x7ffe02ef - (uVar9 >> bVar2 | uVar9 << 0x20 - bVar2)) +
             0x7fffa47c8883);
    *plVar1 = *plVar1 + (*(int64_t *)(uint64_t)(uVar4 * 0x10 | uVar4 >> 0x1c) -
                        (*(int64_t *)(param_2 + 0x490) +
                         *(int64_t *)(uint64_t)(uVar5 >> bVar7 | uVar5 << 0x20 - bVar7) + lVar6));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e820e0  |  RVA: 0x7120e0  |  Size: 423 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e820e0(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  int64_t lVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  
  if (*(int64_t *)(param_2 + 0x490) != 0) {
    uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x16b8);
    plVar1 = *(int64_t **)
              ((int64_t)(int)(((*(uint32_t *)(param_2 + 0xf60) ^ 0x785670f7) + uVar5) * 0x7379b2e9) +
              0x7fffa4795b84);
    if (plVar1 == (int64_t *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar1;
    }
    uVar4 = ((short)*(uint64_t *)(param_2 + 0x1730) * -0x6192 ^ 0x39adU) * 0x2a49;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0xf;
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)(short)(uVar4 >> bVar2 | uVar4 << 0x10 - bVar2) + 0x7fffa47c18e0);
    *plVar1 = *plVar1 + (*(int64_t *)
                          (uint64_t)
                          (((0x5987dd08 - uVar5) * 0x400 | 0x5987dd08 - uVar5 >> 0x16) * -0x30d4f687
                          ^ *(uint32_t *)(param_2 + 0x1568)) -
                        (*(int64_t *)(uint64_t)(0x4aeb939c - (uVar5 ^ 0xd2fdf8ee)) +
                         *(int64_t *)(param_2 + 0x490) + lVar3));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e82290  |  RVA: 0x712290  |  Size: 440 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e82290(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  int64_t lVar5;
  uint16_t uVar6;
  uint32_t uVar7;
  
  uVar4 = (int)*(uint64_t *)(param_2 + 0x1418) + 0x4f7a3a4c;
  if (*(uint64_t *)(param_2 + 0x490) !=
      (uint64_t)((uVar4 * 0x200 | uVar4 >> 0x17) ^ *(uint32_t *)(param_2 + 0x16b8))) {
    uVar7 = (uint32_t)*(uint64_t *)(param_2 + 0x16b8);
    uVar4 = (uVar7 ^ 0xe106550d) + 0x7e9d9b1;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
    uVar7 = uVar7 ^ 0x2e75b9fe;
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x528) & 0x1f;
    plVar1 = *(int64_t **)
              ((int64_t)(int)((uVar7 >> bVar3 | uVar7 << 0x20 - bVar3) ^ 0xf26a48c) +
              0x7fffa47933e9);
    if (plVar1 == (int64_t *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    uVar6 = (short)*(uint32_t *)(param_2 + 0x16b8) + 0xa66;
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x1418) & 0xf;
    LOCK();
    plVar1 = (int64_t *)
             (((int64_t)(short)(uVar6 >> bVar3 | uVar6 << 0x10 - bVar3) ^ 0xffffffffffffc979U) +
             0x7fffa47c2880);
    *plVar1 = *plVar1 + (*(int64_t *)(uint64_t)~(uVar4 * 0x2000000 | uVar4 >> 7) -
                        (*(int64_t *)(param_2 + 0x490) +
                         *(int64_t *)
                          (uint64_t)
                          ((0x38b924b4 << bVar2 | 0x38b924b4U >> 0x20 - bVar2) *
                          *(int *)(param_2 + 0x480)) + lVar5));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e82450  |  RVA: 0x712450  |  Size: 440 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e82450(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  int64_t lVar3;
  uint32_t uVar4;
  uint16_t uVar5;
  
  if (*(int64_t *)(param_2 + 0x490) != 0) {
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
    uVar4 = (uint32_t)*(uint64_t *)(param_2 + 0x16b8);
    uVar5 = (uint16_t)(0x6dd9 - uVar4);
    plVar1 = *(int64_t **)
              ((int64_t)
               (short)((uint16_t)*(uint32_t *)(param_2 + 0x1418) ^ (uVar5 << 4 | uVar5 >> 0xc)) +
              0x7fffa478c710);
    if (plVar1 == (int64_t *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar1;
    }
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)
              (int)(*(int *)(param_2 + 0xc30) * (*(uint32_t *)(param_2 + 0x1988) ^ 0xaacf8fd0)) +
             0x7fffa47cb66c);
    *plVar1 = *plVar1 + (*(int64_t *)
                          (uint64_t)
                          ((int)*(uint64_t *)(param_2 + 0x480) *
                          (0x309b6e1U >> bVar2 | 0x309b6e1 << 0x20 - bVar2)) -
                        (*(int64_t *)
                          ((uint64_t)((uVar4 ^ 0x6b509410) + 0xbc29344b ^ 0x6c7ff00d) *
                           (uint64_t)*(uint32_t *)(param_2 + 3000) & 0xffffffff) +
                         *(int64_t *)(param_2 + 0x490) + lVar3));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e82610  |  RVA: 0x712610  |  Size: 420 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e82610(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  int64_t lVar4;
  uint32_t uVar5;
  
  if (*(int64_t *)(param_2 + 0x490) != 0) {
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x9d8) & 0x1f;
    plVar1 = *(int64_t **)
              ((int64_t)
               (short)((short)*(uint32_t *)(param_2 + 0x8e0) * 0x6eca -
                      (short)*(uint32_t *)(param_2 + 0x4c8)) + 0x7fffa4786de2);
    if (plVar1 == (int64_t *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
    uVar5 = (0x426b7532 << bVar2 | 0x426b7532U >> 0x20 - bVar2) * -0x258c0579;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1418) & 0x1f;
    LOCK();
    plVar1 = (int64_t *)((int64_t)(int)(uVar5 >> bVar2 | uVar5 << 0x20 - bVar2) + 0x7fffa47cbaa4);
    *plVar1 = *plVar1 + (*(int64_t *)
                          (uint64_t)((*(uint32_t *)(param_2 + 0xfd8) ^ 0x335a2c58) + 0x350be9f3) -
                        (*(int64_t *)
                          ((uint64_t)(0x2a3eaf46U >> bVar3 | 0x2a3eaf46 << 0x20 - bVar3) ^
                          0x39d43d1f) + *(int64_t *)(param_2 + 0x490) + lVar4));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e827c0  |  RVA: 0x7127c0  |  Size: 396 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e827c0(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  short sVar3;
  int64_t lVar4;
  uint16_t uVar5;
  
  if (*(int64_t *)(param_2 + 0x490) != 0) {
    plVar1 = *(int64_t **)
              ((int64_t)(0x6cd8cb68 - (*(int *)(param_2 + 0x1568) + 0x41775751)) + 0x7fffa478f3de);
    if (plVar1 == (int64_t *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    sVar3 = (short)*(uint64_t *)(param_2 + 0x8e0);
    uVar5 = sVar3 * 0x1000 | (uint16_t)(sVar3 * -0x465e) >> 5;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x528) & 0xf;
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)(short)(uVar5 << bVar2 | uVar5 >> 0x10 - bVar2) + 0x7fffa47bfe5c);
    *plVar1 = *plVar1 + (*(int64_t *)(uint64_t)~(*(uint32_t *)(param_2 + 0x1418) ^ 0xb1903218) -
                        (*(int64_t *)(param_2 + 0x490) +
                         *(int64_t *)(uint64_t)(0x980e7ab2 - *(int *)(param_2 + 0x460)) + lVar4));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e82950  |  RVA: 0x712950  |  Size: 394 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e82950(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int64_t lVar4;
  int iVar5;
  
  if (*(int64_t *)(param_2 + 0x490) != 0) {
    iVar5 = (int)*(uint64_t *)(param_2 + 0x16b8);
    uVar2 = 0x6967d27dU - iVar5 ^ *(uint32_t *)(param_2 + 0x1988);
    uVar3 = (-0x3499177c - *(int *)(param_2 + 0x528)) + iVar5;
    plVar1 = *(int64_t **)
              ((int64_t)
               (short)((short)*(uint64_t *)(param_2 + 0x16b8) +
                      ~((uint16_t)*(uint32_t *)(param_2 + 0x1418) ^ 0x11f6)) + 0x7fffa478ccb8);
    if (plVar1 == (int64_t *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)
              (short)((0x4acfU - (short)*(uint32_t *)(param_2 + 0x16b8) ^ 0x7eb1) + 0xe84a) +
             0x7fffa47c5e62);
    *plVar1 = *plVar1 + (*(int64_t *)(uint64_t)(uVar2 << 0x19 | uVar2 >> 7) -
                        (*(int64_t *)(param_2 + 0x490) +
                         *(int64_t *)(uint64_t)(uVar3 * 0x400 | uVar3 >> 0x16) + lVar4));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e82ae0  |  RVA: 0x712ae0  |  Size: 454 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e82ae0(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  int64_t lVar5;
  uint8_t bVar6;
  uint16_t uVar7;
  uint32_t uVar8;
  
  if (*(uint64_t *)(param_2 + 0x13d0) !=
      (uint64_t)
      ((int)*(uint64_t *)(param_2 + 0x16b8) + (int)*(uint64_t *)(param_2 + 0xba0) + 0xfb117ce5U
      & 0xffff)) {
    uVar4 = (int)*(uint64_t *)(param_2 + 0x24e0) * -0x5462d8d2;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
    uVar8 = (int)*(uint64_t *)(param_2 + 0x16b8) + 0x54ab9a5;
    bVar6 = (uint8_t)*(uint64_t *)(param_2 + 0x9d8);
    bVar3 = bVar6 & 0x1f;
    bVar6 = bVar6 & 0xf;
    uVar7 = ~(0x44c3U >> bVar6 | 0x44c3 << 0x10 - bVar6);
    plVar1 = *(int64_t **)((int64_t)(short)(uVar7 << 10 | uVar7 >> 6) + 0x7fffa4787aae);
    if (plVar1 == (int64_t *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)
              (short)((short)*(uint64_t *)(param_2 + 0x8e0) * 0x7588 + 0x74b0U ^
                     (uint16_t)*(uint32_t *)(param_2 + 0x1418)) + 0x7fffa47c3381);
    *plVar1 = *plVar1 + (*(int64_t *)(uint64_t)~(uVar4 >> bVar2 | uVar4 << 0x20 - bVar2) -
                        (*(int64_t *)(param_2 + 0x13d0) +
                         *(int64_t *)
                          (uint64_t)((uVar8 >> bVar3 | uVar8 << 0x20 - bVar3) * 0x19209759) + lVar5
                        ));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e82cb0  |  RVA: 0x712cb0  |  Size: 589 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e82cb0(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint16_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint32_t uVar12;
  
  if (*(int64_t *)(param_2 + 0x13d0) != 0) {
    uVar9 = ((uint32_t)*(uint64_t *)(param_2 + 0x1568) | 1) * -0x5ae7dee3;
    bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
    uVar10 = (uint32_t)*(uint64_t *)(param_2 + 0xba0);
    uVar8 = *(uint64_t *)(uint64_t)~(*(int *)(param_2 + 0xc30) * 0xb53fb72 ^ uVar10);
    puVar2 = *(uint64_t **)
              ((int64_t)(int)((uVar10 - (int)*(uint64_t *)(param_2 + 0x16b8)) + 0x5137126) +
              0x7fffa4796163);
    if (puVar2 == (uint64_t *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *puVar2;
    }
    uVar12 = *(int *)(param_2 + 0x1568) + 0xb7e61456;
    uVar10 = *(uint32_t *)(param_2 + 0xba0) ^ 0x8a8c1a1b;
    uVar3 = *(uint64_t *)(param_2 + 0x16b8);
    uVar6 = (short)uVar3 + 0x9eb1;
    uVar10 = (uVar10 << 0x14 | uVar10 >> 0xc) + 0x83e144dd;
    uVar7 = uVar8 ^ *(uint64_t *)(param_2 + 0x13d0);
    if ((int64_t)
        (int)~((int)*(uint64_t *)(param_2 + 0x548) * -0x12d1a935 ^
              (uint32_t)*(uint64_t *)(param_2 + 0x9d8)) <=
        (int64_t)(uint64_t)(0x1402be6a - *(int *)(param_2 + 0x15f0))) {
      uVar7 = *(uint64_t *)(param_2 + 0x13d0) + uVar8;
    }
    bVar5 = (uint8_t)uVar3 & 0x1f;
    uVar8 = uVar7 + uVar11;
    if ((int)(uVar10 >> bVar5 | uVar10 << 0x20 - bVar5) <
        (int)(~(uVar12 * 0x100 | uVar12 >> 0x18) - (int)uVar3)) {
      uVar8 = uVar11 | uVar7;
    }
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)
              (short)((uVar6 * 8 | uVar6 >> 0xd) - (short)*(uint64_t *)(param_2 + 0x9d8)) +
             0x7fffa47c67f8);
    *plVar1 = *plVar1 + (*(int64_t *)
                          (uint64_t)((uVar9 >> bVar4 | uVar9 << 0x20 - bVar4) * 0x35f40c5d) - uVar8
                        );
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e82f00  |  RVA: 0x712f00  |  Size: 416 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e82f00(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint32_t uVar3;
  
  if (*(int64_t *)(param_2 + 0x13d0) != 0) {
    uVar3 = (uint32_t)*(uint64_t *)(param_2 + 0x16b8);
    plVar1 = *(int64_t **)
              ((int64_t)
               (((*(int *)(param_2 + 0x9d8) - *(int *)(param_2 + 0x460)) + -0x262a58f1) *
               -0x17cdf4c3) + 0x7fffa478f7bf);
    if (plVar1 == (int64_t *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)
              (int)((*(int *)(param_2 + 0x12e0) * -0x14bf08c0 |
                    (uint32_t)(*(int *)(param_2 + 0x12e0) * 0x375a07ba) >> 0x1b) ^
                   *(uint32_t *)(param_2 + 0x16b8)) + 0x7fffa47ca1dd);
    *plVar1 = *plVar1 + (*(int64_t *)(uint64_t)(*(int *)(param_2 + 0x12e0) * -0x4c514f66 ^ uVar3)
                        - (*(int64_t *)(param_2 + 0x13d0) +
                           *(int64_t *)(uint64_t)(0x21b0c159 - (uVar3 + 0x89a246a7)) + lVar2));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e830a0  |  RVA: 0x7130a0  |  Size: 387 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e830a0(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int64_t lVar5;
  uint8_t bVar6;
  int iVar7;
  
  if (*(int64_t *)(param_2 + 0x4b0) != 0) {
    iVar7 = (int)*(uint64_t *)(param_2 + 0x9d8);
    uVar3 = iVar7 + 0x5ed1b55f;
    bVar6 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8);
    bVar2 = bVar6 & 0x1f;
    bVar6 = bVar6 & 0x1f;
    uVar4 = (0x913b7a21U >> bVar6 | -0x6ec485df << 0x20 - bVar6) + iVar7;
    bVar6 = (uint8_t)*(uint64_t *)(param_2 + 0xba0) & 0x1f;
    plVar1 = *(int64_t **)
              ((int64_t)(int)(-0x7e5081 << bVar6 | 0xff81af7fU >> 0x20 - bVar6) + 0x7fffa4796442);
    if (plVar1 == (int64_t *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    bVar6 = (uint8_t)*(uint64_t *)(param_2 + 0x9d8) & 0x1f;
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)
              (int)((0xef0162e7U >> bVar6 | -0x10fe9d19 << 0x20 - bVar6) ^
                   *(uint32_t *)(param_2 + 0x16b8)) + 0x7fffa47c7dc8);
    *plVar1 = *plVar1 + (*(int64_t *)
                          (uint64_t)((uVar3 >> bVar2 | uVar3 << 0x20 - bVar2) + 0xb9fc4a57) -
                        (*(int64_t *)(uint64_t)(uVar4 * 0x2000 | uVar4 >> 0x13) +
                         *(int64_t *)(param_2 + 0x4b0) + lVar5));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e83230  |  RVA: 0x713230  |  Size: 442 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e83230(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  int64_t lVar3;
  int iVar4;
  uint32_t uVar5;
  uint16_t uVar6;
  
  uVar6 = (short)*(uint32_t *)(param_2 + 0xba0) + 0x3817;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0xf;
  if (*(uint64_t *)(param_2 + 0x4b0) !=
      (uint64_t)(uint16_t)((uVar6 >> bVar2 | uVar6 << 0x10 - bVar2) + 0xeef4)) {
    iVar4 = (int)*(uint64_t *)(param_2 + 0xba0);
    plVar1 = *(int64_t **)
              ((int64_t)
               (short)((0x4839U - (short)*(uint64_t *)(param_2 + 0x16b8) ^
                       (uint16_t)*(uint64_t *)(param_2 + 0xba0)) + 0xa4e0) + 0x7fffa478e592);
    if (plVar1 == (int64_t *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar1;
    }
    uVar5 = *(int *)(param_2 + 0xba0) + 0x55bab11cU ^ 0x174971d4;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
    LOCK();
    plVar1 = (int64_t *)((int64_t)(int)(uVar5 << bVar2 | uVar5 >> 0x20 - bVar2) + 0x7fffa47cc0a3);
    *plVar1 = *plVar1 + (*(int64_t *)
                          (uint64_t)
                          ((iVar4 + -0x5c9f4deb) * -0x956443d ^
                          (uint32_t)*(uint64_t *)(param_2 + 0x16b8)) -
                        (*(int64_t *)
                          (uint64_t)
                          ((*(int *)(param_2 + 0x548) * 0x2b4cbd12 ^ 0xc3e862a1U) + iVar4) +
                         *(int64_t *)(param_2 + 0x4b0) + lVar3));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e833f0  |  RVA: 0x7133f0  |  Size: 419 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e833f0(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  int64_t lVar4;
  uint32_t uVar5;
  
  if (*(int64_t *)(param_2 + 0x4b0) != 0) {
    uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0xba0);
    uVar3 = 0x22f5eb26 - uVar5;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
    uVar3 = (uVar3 << bVar2 | uVar3 >> 0x20 - bVar2) + 0x21187fd3;
    plVar1 = *(int64_t **)
              ((int64_t)(short)(0x4c3b - ((short)*(uint64_t *)(param_2 + 0x16b8) + 0x9a9)) +
              0x7fffa4789c10);
    if (plVar1 == (int64_t *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)
              ((0x38e3e8db - *(int *)(param_2 + 0xba0)) * *(int *)(param_2 + 0x548) + -0x357660b6) +
             0x7fffa47c9098);
    *plVar1 = *plVar1 + (*(int64_t *)
                          (uint64_t)((uVar5 ^ 0xbe199e45) * *(int *)(param_2 + 0x548) + 0xfc8484f4)
                        - (*(int64_t *)(uint64_t)(uVar3 * 0x80 | uVar3 >> 0x19) +
                           *(int64_t *)(param_2 + 0x4b0) + lVar4));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Catch@7fffa4e835a0  |  RVA: 0x7135a0  |  Size: 234 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa4e835a0(void)

{
  return &UNK_7fffa4d7511f;
}


// ============================================================================
// Function : Catch@7fffa4e83690  |  RVA: 0x713690  |  Size: 273 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa4e83690(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)(param_2 + 0x400) = 0xc000009a;
  *(uint64_t *)(param_2 + 0x14d0) = (uint64_t)*(uint32_t *)(param_2 + 0x1470);
  *(uint64_t *)(param_2 + 0x1470) = *(uint64_t *)(param_2 + 0x690);
  return &UNK_7fffa4de8ebc;
}


// ============================================================================
// Function : Catch@7fffa4e837b0  |  RVA: 0x7137b0  |  Size: 273 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa4e837b0(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)(param_2 + 0x1430) = 0xc000009a;
  *(uint64_t *)(param_2 + 4000) = *(uint64_t *)(param_2 + 0x690);
  *(uint64_t *)(param_2 + 0x5e0) = (uint64_t)*(uint32_t *)(param_2 + 0x1220);
  return &UNK_7fffa4e2f141;
}


// ============================================================================
// Function : Catch@7fffa4e838d0  |  RVA: 0x7138d0  |  Size: 273 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa4e838d0(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)(param_2 + 4000) = 0xc000009a;
  *(uint64_t *)(param_2 + 0xcc0) = (uint64_t)*(uint32_t *)(param_2 + 0xcc0);
  *(uint64_t *)(param_2 + 0x9b0) = *(uint64_t *)(param_2 + 0x14e0);
  return &UNK_7fffa4e4cef4;
}


// ============================================================================
// Function : Catch@7fffa4e839f0  |  RVA: 0x7139f0  |  Size: 273 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa4e839f0(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)(param_2 + 0x15f0) = 0xc000009a;
  *(uint64_t *)(param_2 + 0x1170) = (uint64_t)*(uint32_t *)(param_2 + 0x19a0);
  *(uint64_t *)(param_2 + 0x2460) = *(uint64_t *)(param_2 + 0xcc0);
  return &UNK_7fffa4e5d22d;
}


// ============================================================================
// Function : Catch@7fffa4e83b10  |  RVA: 0x713b10  |  Size: 273 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa4e83b10(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)(param_2 + 3000) = 0xc000009a;
  *(uint64_t *)(param_2 + 0x1200) = (uint64_t)*(uint32_t *)(param_2 + 0x12b0);
  *(uint64_t *)(param_2 + 0x1730) = *(uint64_t *)(param_2 + 0x19a0);
  return &UNK_7fffa4e6be36;
}


// ============================================================================
// Function : Unwind@7fffa4e848b0  |  RVA: 0x7148b0  |  Size: 643 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e848b0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  int iVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  
  if (7 < *(uint64_t *)(param_2 + 0x1af8)) {
    uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x8a0);
    uVar8 = 0xfee63abcU - (int)*(uint64_t *)(param_2 + 0x13d0) ^ uVar5;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xe40) & 0x1f;
    uVar7 = (uint32_t)*(uint64_t *)(param_2 + 0x1240);
    uVar4 = ~((int)*(uint64_t *)(param_2 + 0x1778) *
             (int)CONCAT62((int6)((uint64_t)param_1 >> 0x10),0xc74c));
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x13d0) & 0xf;
    uVar3 = (uint16_t)uVar4;
    uVar5 = uVar5 ^ uVar7 + ~(CONCAT22((short)(uVar4 >> 0x10),uVar3 << bVar1 | uVar3 >> 0x10 - bVar1
                                      ) ^ *(uint32_t *)(param_2 + 0x1740));
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0xf;
    uVar3 = (uint16_t)uVar5;
    iVar6 = CONCAT22((short)(uVar5 >> 0x10),uVar3 >> bVar1 | uVar3 << 0x10 - bVar1) + -0xca1;
    (*(code *)((int64_t)(short)iVar6 + 0x7fffa568940f))
              ((uVar8 << bVar2 | uVar8 >> 0x20 - bVar2) ^ uVar7,iVar6,
               *(uint64_t *)(param_2 + 0x1ae0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1ae0));
  }
  *(uint64_t *)(param_2 + 0x1af0) = 0;
  *(uint16_t *)(param_2 + 0x1ae0) = 0;
  *(uint64_t *)(param_2 + 0x1af8) = 7;
  if (7 < *(uint64_t *)(param_2 + 0x1ad8)) {
    uVar4 = 0xf50b4bc1 - *(int *)(param_2 + 0x1240);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x4b0) & 0x1f;
    iVar6 = ~(uVar4 << bVar1 | uVar4 >> 0x20 - bVar1) + *(int *)(param_2 + 0x490);
    (*(code *)((int64_t)
               (short)((short)*(uint64_t *)(param_2 + 0x9d8) +
                       (short)*(uint64_t *)(param_2 + 0x12c8) *
                       ((uint16_t)*(uint64_t *)(param_2 + 0x8a0) ^
                       (short)*(uint64_t *)(param_2 + 0x1778) *
                       (((short)*(uint64_t *)(param_2 + 0xf10) * -0x7c9 ^ 0x5caaU) -
                       (short)*(uint32_t *)(param_2 + 0x13d0))) + 0x2e1) + 0x7fffa5688bd8))
              ((uint64_t)(uint32_t)~((int)*(uint64_t *)(param_2 + 0xf90) * iVar6) *
               (uint64_t)*(uint32_t *)(param_2 + 0xc30),iVar6,
               *(uint64_t *)(param_2 + 0x1ac0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1ac0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e85450  |  RVA: 0x715450  |  Size: 5152 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4e85450(void) {
    /* +0x715450 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x715455 */ __asm { PUSH RBP }
    /* +0x715456 */ __asm { PUSH R14 }
    /* +0x715458 */ __asm { PUSH R13 }
    /* +0x71545a */ __asm { PUSH R12 }
    /* +0x71545c */ __asm { PUSH RDI }
    /* +0x71545d */ __asm { PUSH RBX }
    /* +0x71545e */ __asm { PUSH R15 }
    /* +0x715460 */ __asm { PUSH RSI }
    /* +0x715461 */ __asm { SUB RSP,0xf8 }
    /* +0x715468 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x71546f */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM12 }
    /* +0x715476 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM8 }
    /* +0x71547d */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM15 }
    /* +0x715484 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM11 }
    /* +0x71548e */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM6 }
    /* +0x715497 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM9 }
    /* +0x7154a1 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x7154aa */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM14 }
    /* +0x7154b4 */ __asm { MOVDQA xmmword ptr [RSP + 0xd0],XMM13 }
    /* +0x7154be */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM10 }
    /* +0x7154c8 */ __asm { MOV R10,qword ptr [RBP + 0x11c0] }
    /* +0x7154cf */ __asm { MOVD XMM0,R10D }
    /* +0x7154d4 */ __asm { MOV R8D,0x55de2d4 }
    /* +0x7154da */ __asm { RDTSC }
    /* +0x7154dc */ __asm { SHL RDX,0x20 }
    /* +0x7154e0 */ __asm { OR RDX,RAX }
    /* +0x7154e3 */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x7154ed */ __asm { IMUL RDX,RCX }
    /* +0x7154f1 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0x7154fb */ __asm { ADD RDX,RCX }
    /* +0x7154fe */ __asm { MOV RCX,RDX }
    /* +0x715501 */ __asm { SHR RCX,0x3b }
    /* +0x715505 */ __asm { MOVQ XMM4,RDX }
    /* +0x71550a */ __asm { SHR RDX,0x2d }
    /* +0x71550e */ __asm { MOVD XMM5,EDX }
    /* +0x715512 */ __asm { PSRLQ XMM4,0x1b }
    /* +0x715517 */ __asm { PXOR XMM4,XMM5 }
    /* +0x71551b */ __asm { MOVD EDX,XMM4 }
    /* +0x71551f */ __asm { ROR EDX,CL }
    /* +0x715521 */ __asm { NOT R8D }
    /* +0x715524 */ __asm { ADD R8D,R10D }
    /* +0x715527 */ __asm { MOV R10,qword ptr [RBP + 0x16f8] }
    /* +0x71552e */ __asm { IMUL R8D,R10D }
    /* +0x715532 */ __asm { MOV RCX,qword ptr [RBP + 0x820] }
    /* +0x715539 */ __asm { ROL R8D,CL }
    /* +0x71553c */ __asm { NOT R8D }
    /* +0x71553f */ __asm { MOV RCX,qword ptr [RBP + 0x16c0] }
    /* +0x715546 */ __asm { ROL R8D,CL }
    /* +0x715549 */ __asm { MOV R11W,0xff07 }
    /* +0x71554e */ __asm { ROL R8D,0x10 }
    /* +0x715552 */ __asm { IMUL R8D,dword ptr [RBP + 0x8c0] }
    /* +0x71555a */ __asm { MOV RAX,qword ptr [RBP + 0x1638] }
    /* +0x715561 */ __asm { MOV ECX,EAX }
    /* +0x715563 */ __asm { ROR R8D,CL }
    /* +0x715566 */ __asm { MOVD XMM4,R11D }
    /* +0x71556b */ __asm { PADDW XMM4,XMM0 }
    /* +0x71556f */ __asm { MOVD R11D,XMM4 }
    /* +0x715574 */ __asm { MOV RCX,qword ptr [RBP + 0xf58] }
    /* +0x71557b */ __asm { ROR R11W,CL }
    /* +0x71557f */ __asm { MOV RCX,qword ptr [RBP + 0x1248] }
    /* +0x715586 */ __asm { IMUL ECX,R11D }
    /* +0x71558a */ __asm { NOT ECX }
    /* +0x71558c */ __asm { ADD ECX,EAX }
    /* +0x71558e */ __asm { ROL CX,0x1 }
    /* +0x715591 */ __asm { NOT ECX }
    /* +0x715593 */ __asm { IMUL ECX,R10D }
    /* +0x715597 */ __asm { MOVZX ECX,CX }
    /* +0x71559a */ __asm { AND EDX,0x3 }
    /* +0x71559d */ __asm { XOR R11D,R11D }
    /* +0x7155a0 */ __asm { CMP EDX,0x2 }
    /* +0x7155a3 */ __asm { SETC R11B }
    /* +0x7155a7 */ __asm { XOR R10D,R10D }
    /* +0x7155aa */ __asm { CMP EDX,ECX }
    /* +0x7155ac */ __asm { MOVSXD RCX,R8D }
    /* +0x7155af */ __asm { SETNC R10B }
    /* +0x7155b3 */ __asm { CMP RCX,-0x26bc07cc }
    /* +0x7155ba */ __asm { CMOVNZ R11D,R10D }
    /* +0x7155be */ __asm { TEST R11B,R11B }
    /* +0x7155c1 */ __asm { JZ 0x7fffa4e856cd }
    /* +0x7155c7 */ __asm { CMP EDX,0x1 }
    /* +0x7155ca */ __asm { JZ 0x7fffa4e85b77 }
    /* +0x7155d0 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x7155d7 */ __asm { MOV RCX,0x0 }
    /* +0x7155de */ __asm { NOP }
    /* +0x7155df */ __asm { LEA R11,[0x7fffa47b5803] }
    /* +0x7155e6 */ __asm { MOV RCX,-0x102b6ee5987a0d27 }
    /* +0x7155f0 */ __asm { CMP R11,RCX }
    /* +0x7155f3 */ __asm { JZ 0x7fffa4e86ee8 }
    /* +0x7155f9 */ __asm { MOV ECX,0xfa49a2db }
    /* +0x7155fe */ __asm { IMUL ECX,dword ptr [RBP + 0x4c8] }
    /* +0x715605 */ __asm { MOV R8D,0xaabb6e92 }
    /* +0x71560b */ __asm { NOT ECX }
    /* +0x71560d */ __asm { MOVD XMM0,R8D }
    /* +0x715612 */ __asm { PADDD XMM0,xmmword ptr [RBP + 0xbd0] }
    /* +0x71561a */ __asm { MOVD EAX,XMM0 }
    /* +0x71561e */ __asm { XOR EAX,dword ptr [RBP + 0x820] }
    /* +0x715624 */ __asm { NOT EAX }
    /* +0x715626 */ __asm { ADD EAX,dword ptr [RBP + 0x430] }
    /* +0x71562c */ __asm { SUB EAX,dword ptr [RBP + 0x16e0] }
    /* +0x715632 */ __asm { SUB ECX,dword ptr [RBP + 0xde0] }
    /* +0x715638 */ __asm { ADD ECX,0xce0c7834 }
    /* +0x71563e */ __asm { MOVD XMM0,ECX }
    /* +0x715642 */ __asm { MOVDQA XMM4,xmmword ptr [RBP + 0x1570] }
    /* +0x71564a */ __asm { PXOR XMM4,XMM0 }
    /* +0x71564e */ __asm { MOVD R10D,XMM4 }
    /* +0x715653 */ __asm { MOV RCX,qword ptr [RBP + 0x11c0] }
    /* +0x71565a */ __asm { ROL R10D,CL }
    /* +0x71565d */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x715664 */ __asm { ROL EAX,CL }
    /* +0x715666 */ __asm { ADD R11,0x6e7c }
    /* +0x71566d */ __asm { NOT R10D }
    /* +0x715670 */ __asm { ROL EAX,0xd }
    /* +0x715673 */ __asm { ADD EAX,dword ptr [RBP + 0x410] }
    /* +0x715679 */ __asm { CMP R10,RAX }
    /* +0x71567c */ __asm { JBE 0x7fffa4e862ce }
    /* +0x715682 */ __asm { MOVZX EDX,uint8_t ptr [R11 + 0xe] }
    /* +0x715687 */ __asm { MOV ECX,0x3eb7896d }
    /* +0x71568c */ __asm { ADD ECX,dword ptr [RBP + 0x11c0] }
    /* +0x715692 */ __asm { MOV R8D,0x80819c8e }
    /* +0x715698 */ __asm { SUB R8D,ECX }
    /* +0x71569b */ __asm { IMUL ECX,R8D,0x6c3a3509 }
    /* +0x7156a2 */ __asm { NOT ECX }
    /* +0x7156a4 */ __asm { SUB ECX,dword ptr [RBP + 0x410] }
    /* +0x7156aa */ __asm { MOVD XMM0,ECX }
    /* +0x7156ae */ __asm { PADDD XMM0,xmmword ptr [RBP + 0xbd0] }
    /* +0x7156b6 */ __asm { MOVD R12D,XMM0 }
    /* +0x7156bb */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x7156c2 */ __asm { ROL R12D,CL }
    /* +0x7156c5 */ __asm { NOT R12D }
    /* +0x7156c8 */ __asm { JMP 0x7fffa4e86309 }
    /* +0x7156cd */ __asm { CMP EDX,0x3 }
    /* +0x7156d0 */ __asm { JZ 0x7fffa4e85fb1 }
    /* +0x7156d6 */ __asm { PXOR XMM0,XMM0 }
    /* +0x7156da */ __asm { MOVDQA xmmword ptr [RBP + 0x30],XMM0 }
    /* +0x7156df */ __asm { MOV R8W,0xf170 }
    /* +0x7156e4 */ __asm { SUB R8D,dword ptr [RBP + 0x1350] }
    /* +0x7156eb */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x7156f2 */ __asm { ROR R8W,CL }
    /* +0x7156f6 */ __asm { MOV RDX,qword ptr [RBP + 0x1248] }
    /* +0x7156fd */ __asm { IMUL EDX,R8D }
    /* +0x715701 */ __asm { SUB EDX,dword ptr [RBP + 0x11c0] }
    /* +0x715707 */ __asm { MOV RCX,qword ptr [RBP + 0x1068] }
    /* +0x71570e */ __asm { ROL DX,CL }
    /* +0x715711 */ __asm { IMUL EDX,dword ptr [RBP + 0x16f8] }
    /* +0x715718 */ __asm { PUSHFQ }
    /* +0x715719 */ __asm { POP R11 }
    /* +0x71571b */ __asm { AND R11D,0x100 }
    /* +0x715722 */ __asm { MOV RCX,qword ptr [RBP + 0x820] }
    /* +0x715729 */ __asm { ADD ECX,EDX }
    /* +0x71572b */ __asm { ADD ECX,0xffff82a5 }
    /* +0x715731 */ __asm { XOR ECX,0x6604 }
    /* +0x715737 */ __asm { MOVZX ECX,CX }
    /* +0x71573a */ __asm { CMP R11D,ECX }
    /* +0x71573d */ __asm { NOP }
    /* +0x71573e */ __asm { NOP }
    /* +0x71573f */ __asm { NOP }
    /* +0x715740 */ __asm { NOP }
    /* +0x715741 */ __asm { NOP }
    /* +0x715742 */ __asm { NOP }
    /* +0x715743 */ __asm { NOP }
    /* +0x715744 */ __asm { NOP }
    /* +0x715745 */ __asm { NOP }
    /* +0x715746 */ __asm { NOP }
    /* +0x715747 */ __asm { NOP }
    /* +0x715748 */ __asm { NOP }
    /* +0x715749 */ __asm { NOP }
    /* +0x71574a */ __asm { NOP }
    /* +0x71574b */ __asm { MOV dword ptr [RBP + 0x780],0xa0428008 }
    /* +0x715755 */ __asm { MOV R8D,dword ptr [RBP + 0x780] }
    /* +0x71575c */ __asm { MOV EDX,0x2d13b108 }
    /* +0x715761 */ __asm { IMUL EDX,dword ptr [RBP + 0x8c0] }
    /* +0x715768 */ __asm { MOV RCX,qword ptr [RBP + 0x820] }
    /* +0x71576f */ __asm { ROL EDX,CL }
    /* +0x715771 */ __asm { XOR EDX,dword ptr [RBP + 0x410] }
    /* +0x715777 */ __asm { NOT EDX }
    /* +0x715779 */ __asm { MOV RCX,qword ptr [RBP + 0x430] }
    /* +0x715780 */ __asm { ROL EDX,CL }
    /* +0x715782 */ __asm { XOR EDX,dword ptr [RBP + 0x448] }
    /* +0x715788 */ __asm { IMUL EDX,EDX,0x2c240361 }
    /* +0x71578e */ __asm { ADD EDX,0x9d19fad6 }
    /* +0x715794 */ __asm { MOV RCX,qword ptr [RBP + 0x11c0] }
    /* +0x71579b */ __asm { ROR EDX,CL }
    /* +0x71579d */ __asm { CMP R8D,EDX }
    /* +0x7157a0 */ __asm { JNC 0x7fffa4e86ef0 }
    /* +0x7157a6 */ __asm { MOV dword ptr [RBP + 0x30],0x0 }
    /* +0x7157ad */ __asm { MOV CX,0x9d1f }
    /* +0x7157b1 */ __asm { SUB ECX,dword ptr [RBP + 0x410] }
    /* +0x7157b7 */ __asm { MOV RDX,qword ptr [RBP + 0xb40] }
    /* +0x7157be */ __asm { XOR EDX,ECX }
    /* +0x7157c0 */ __asm { ADD EDX,0x7bd9 }
    /* +0x7157c6 */ __asm { MOV R9,qword ptr [RBP + 0x1350] }
    /* +0x7157cd */ __asm { MOV ECX,R9D }
    /* +0x7157d0 */ __asm { ROR DX,CL }
    /* +0x7157d3 */ __asm { MOV RSI,qword ptr [RBP + 0x11c0] }
    /* +0x7157da */ __asm { MOVD XMM0,ESI }
    /* +0x7157de */ __asm { MOV R11,qword ptr [RBP + 0x430] }
    /* +0x7157e5 */ __asm { SUB EDX,R11D }
    /* +0x7157e8 */ __asm { MOV RCX,qword ptr [RBP + 0x820] }
    /* +0x7157ef */ __asm { LEA R8D,[RCX + RDX*0x1] }
    /* +0x7157f3 */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x7157fa */ __asm { ROL R8W,CL }
    /* +0x7157fe */ __asm { MOVD XMM4,R8D }
    /* +0x715803 */ __asm { PSUBW XMM4,XMM0 }
    /* +0x715807 */ __asm { PEXTRW EAX,XMM4,0x0 }
    /* +0x71580c */ __asm { MOV R10,qword ptr GS:[RAX] }
    /* +0x715810 */ __asm { MOVD XMM0,ECX }
    /* +0x715814 */ __asm { MOV R10,qword ptr [R10 + 0x30] }
    /* +0x715818 */ __asm { MOV CX,0x3e07 }
    /* +0x71581c */ __asm { MOVD XMM4,ECX }
    /* +0x715820 */ __asm { PADDW XMM4,XMM0 }
    /* +0x715824 */ __asm { MOVD R8D,XMM4 }
    /* +0x715829 */ __asm { ROL R8W,0x8 }
    /* +0x71582e */ __asm { SUB R8D,dword ptr [RBP + 0x14e8] }
    /* +0x715835 */ __asm { MOV ECX,R11D }
    /* +0x715838 */ __asm { ROR R8W,CL }
    /* +0x71583c */ __asm { MOV ECX,ESI }
    /* +0x71583e */ __asm { ROL R8W,CL }
    /* +0x715842 */ __asm { SUB R8D,R9D }
    /* +0x715845 */ __asm { MOVZX EAX,R8W }
    /* +0x715849 */ __asm { MOV ECX,0xce8 }
    /* +0x71584e */ __asm { ADD RCX,qword ptr GS:[RAX] }
    /* +0x715852 */ __asm { XOR RCX,R10 }
    /* +0x715855 */ __asm { XOR RCX,-0x78b0198f }
    /* +0x71585c */ __asm { MOV R10,0x33761d83f948dd0b }
    /* +0x715866 */ __asm { IMUL R10,RCX }
    /* +0x71586a */ __asm { MOV RCX,-0xa2fe93a84edac16 }
    /* +0x715874 */ __asm { CMP R10,RCX }
    /* +0x715877 */ __asm { NOP }
    /* +0x715878 */ __asm { NOP }
    /* +0x715879 */ __asm { NOP }
    /* +0x71587a */ __asm { NOP }
    /* +0x71587b */ __asm { NOP }
    /* +0x71587c */ __asm { MOV R8W,0x5e1c }
    /* +0x715881 */ __asm { MOV EAX,0x6bac48e2 }
    /* +0x715886 */ __asm { IMUL EAX,dword ptr [RBP + 0xf10] }
    /* +0x71588d */ __asm { MOV R10,qword ptr [RBP + 0x1638] }
    /* +0x715894 */ __asm { MOV ECX,R10D }
    /* +0x715897 */ __asm { ROL EAX,CL }
    /* +0x715899 */ __asm { MOV RCX,qword ptr [RBP + 0x410] }
    /* +0x7158a0 */ __asm { ROR EAX,CL }
    /* +0x7158a2 */ __asm { ADD EAX,dword ptr [RBP + 0xe70] }
    /* +0x7158a8 */ __asm { MOVD XMM0,dword ptr [RBP + 0xf58] }
    /* +0x7158b0 */ __asm { XOR EAX,0x3fffff73 }
    /* +0x7158b5 */ __asm { IMUL EAX,dword ptr [RBP + 0x8c0] }
    /* +0x7158bc */ __asm { NOT EAX }
    /* +0x7158be */ __asm { MOVD XMM4,dword ptr [RBP + 0x820] }
    /* +0x7158c6 */ __asm { MOV EDX,ECX }
    /* +0x7158c8 */ __asm { MOV R11,qword ptr [RBP + 0x430] }
    /* +0x7158cf */ __asm { MOV ECX,R11D }
    /* +0x7158d2 */ __asm { ROR EAX,CL }
    /* +0x7158d4 */ __asm { MOVD XMM5,R8D }
    /* +0x7158d9 */ __asm { PADDW XMM5,XMM4 }
    /* +0x7158dd */ __asm { MOVD R8D,XMM5 }
    /* +0x7158e2 */ __asm { NOT R8D }
    /* +0x7158e5 */ __asm { MOV RCX,qword ptr [RBP + 0x1350] }
    /* +0x7158ec */ __asm { ROR R8W,CL }
    /* +0x7158f0 */ __asm { MOV ECX,R10D }
    /* +0x7158f3 */ __asm { ROL R8W,CL }
    /* +0x7158f7 */ __asm { SUB EDX,dword ptr [RBP + 0x11c0] }
    /* +0x7158fd */ __asm { MOVD XMM4,R8D }
    /* +0x715902 */ __asm { PXOR XMM4,XMM0 }
    /* +0x715906 */ __asm { MOVD R8D,XMM4 }
    /* +0x71590b */ __asm { MOV ECX,R11D }
    /* +0x71590e */ __asm { ROL R8W,CL }
    /* +0x715912 */ __asm { MOV RCX,qword ptr [RAX] }
    /* +0x715915 */ __asm { ADD R8D,EDX }
    /* +0x715918 */ __asm { MOVZX EAX,R8W }
    /* +0x71591c */ __asm { MOV R10,qword ptr GS:[RAX] }
    /* +0x715920 */ __asm { XOR RCX,qword ptr [R10 + 0x18] }
    /* +0x715924 */ __asm { MOV R10,0x52d0466e4e30cd05 }
    /* +0x71592e */ __asm { CMP RCX,R10 }
    /* +0x715931 */ __asm { NOP }
    /* +0x715932 */ __asm { NOP }
    /* +0x715933 */ __asm { NOP }
    /* +0x715934 */ __asm { NOP }
    /* +0x715935 */ __asm { NOP }
    /* +0x715936 */ __asm { LEA R11,[0x7fffa47c38d7] }
    /* +0x71593d */ __asm { MOV RCX,0x0 }
    /* +0x715944 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x71594b */ __asm { MOV RCX,0x37738c3896f1fed2 }
    /* +0x715955 */ __asm { CMP R11,RCX }
    /* +0x715958 */ __asm { JZ 0x7fffa4e86f00 }
    /* +0x71595e */ __asm { MOV RBX,qword ptr [RBP + 0x820] }
    /* +0x715965 */ __asm { MOVD XMM0,EBX }
    /* +0x715969 */ __asm { MOV R10,0x663074522b46c0cb }
    /* +0x715973 */ __asm { MOV R8W,0x2cd4 }
    /* +0x715978 */ __asm { MOV R15,qword ptr [RBP + 0x11c0] }
    /* +0x71597f */ __asm { ADD R10,R15 }
    /* +0x715982 */ __asm { NOT R10 }
    /* +0x715985 */ __asm { MOV ECX,EBX }
    /* +0x715987 */ __asm { ROL R10,CL }
    /* +0x71598a */ __asm { MOV DX,0xd374 }
    /* +0x71598e */ __asm { MOV RDI,qword ptr [RBP + 0x1350] }
    /* +0x715995 */ __asm { SUB R10,RDI }
    /* +0x715998 */ __asm { XOR R8D,dword ptr [RBP + 0x1638] }
    /* +0x71599f */ __asm { MOV ECX,R15D }
    /* +0x7159a2 */ __asm { ROL R8W,CL }
    /* +0x7159a6 */ __asm { LEA R14,[0x7fffa47bb66c] }
    /* +0x7159ad */ __asm { MOV RCX,qword ptr [RBP + 0x1938] }
    /* +0x7159b4 */ __asm { MOV EAX,ECX }
    /* +0x7159b6 */ __asm { OR EAX,0x1 }
    /* +0x7159b9 */ __asm { IMUL EAX,EDX }
    /* +0x7159bc */ __asm { ROL AX,0x9 }
    /* +0x7159c0 */ __asm { MOV R13,qword ptr [RBP + 0x410] }
    /* +0x7159c7 */ __asm { SUB EAX,R13D }
    /* +0x7159ca */ __asm { MOV ECX,R15D }
    /* +0x7159cd */ __asm { ROL AX,CL }
    /* +0x7159d0 */ __asm { MOV qword ptr [RBP + 0x780],RCX }
    /* +0x7159d7 */ __asm { MOV RCX,qword ptr [RBP + 0x860] }
    /* +0x7159de */ __asm { MOV R9D,ECX }
    /* +0x7159e1 */ __asm { IMUL R9D,EAX }
    /* +0x7159e5 */ __asm { MOV RAX,qword ptr [RBP + 0x14e8] }
    /* +0x7159ec */ __asm { OR RAX,0x1 }
    /* +0x7159f0 */ __asm { IMUL RAX,R10 }
    /* +0x7159f4 */ __asm { MOV EDX,R13D }
    /* +0x7159f7 */ __asm { SUB EDX,dword ptr [RBP + 0xb40] }
    /* +0x7159fd */ __asm { MOV RSI,qword ptr [RBP + 0x430] }
    /* +0x715a04 */ __asm { SUB R8D,ESI }
    /* +0x715a07 */ __asm { SUB R9D,EDI }
    /* +0x715a0a */ __asm { MOV ECX,ESI }
    /* +0x715a0c */ __asm { ROL R9W,CL }
    /* +0x715a10 */ __asm { MOV ECX,EBX }
    /* +0x715a12 */ __asm { ROR R9W,CL }
    /* +0x715a16 */ __asm { IMUL R10D,R9D,0x186f }
    /* +0x715a1d */ __asm { MOV ECX,R13D }
    /* +0x715a20 */ __asm { ROR RAX,CL }
    /* +0x715a23 */ __asm { MOVSX R10,R10W }
    /* +0x715a27 */ __asm { MOVQ XMM5,RAX }
    /* +0x715a2c */ __asm { MOV R9W,0xc691 }
    /* +0x715a31 */ __asm { MOVDQA XMM2,xmmword ptr [RBP + 0x15f0] }
    /* +0x715a39 */ __asm { MOVDQA XMM1,XMM2 }
    /* +0x715a3d */ __asm { PSRLQ XMM1,0x20 }
    /* +0x715a42 */ __asm { PMULUDQ XMM1,XMM5 }
    /* +0x715a46 */ __asm { MOVDQA XMM4,XMM5 }
    /* +0x715a4a */ __asm { PSRLQ XMM4,0x20 }
    /* +0x715a4f */ __asm { PMULUDQ XMM4,XMM2 }
    /* +0x715a53 */ __asm { PADDQ XMM4,XMM1 }
    /* +0x715a57 */ __asm { IMUL R9D,dword ptr [RBP + 0x16f8] }
    /* +0x715a5f */ __asm { MOV RAX,qword ptr [RBP + 0x668] }
    /* +0x715a66 */ __asm { MOV ECX,EAX }
    /* +0x715a68 */ __asm { ROR R9W,CL }
    /* +0x715a6c */ __asm { PSLLQ XMM4,0x20 }
    /* +0x715a71 */ __asm { PMULUDQ XMM2,XMM5 }
    /* +0x715a75 */ __asm { ADD R9D,0x1e94 }
    /* +0x715a7c */ __asm { MOV ECX,R13D }
    /* +0x715a7f */ __asm { ROL R9W,CL }
    /* +0x715a83 */ __asm { ADD R9D,EDI }
    /* +0x715a86 */ __asm { MOVD XMM5,R9D }
    /* +0x715a8b */ __asm { PXOR XMM5,XMM0 }
    /* +0x715a8f */ __asm { MOVD R9D,XMM5 }
    /* +0x715a94 */ __asm { ADD R9D,0xffffb109 }
    /* +0x715a9b */ __asm { MOV ECX,R15D }
    /* +0x715a9e */ __asm { ROR R9W,CL }
    /* +0x715aa2 */ __asm { ADD R8D,0xfffffe8b }
    /* +0x715aa9 */ __asm { XOR R8D,EBX }
    /* +0x715aac */ __asm { ADD R8D,EDX }
    /* +0x715aaf */ __asm { MOV RCX,qword ptr [RBP + 0x1598] }
    /* +0x715ab6 */ __asm { MOV R12D,ECX }
    /* +0x715ab9 */ __asm { IMUL R12D,R8D }
    /* +0x715abd */ __asm { MOV R8D,0xa8781d82 }
    /* +0x715ac3 */ __asm { ADD R8D,0xc93acef0 }
    /* +0x715aca */ __asm { IMUL R8D,dword ptr [RBP + 0xd40] }
    /* +0x715ad2 */ __asm { ROL R8D,0x3 }
    /* +0x715ad6 */ __asm { IMUL R8D,dword ptr [RBP + 0x4c8] }
    /* +0x715ade */ __asm { MOV ECX,R15D }
    /* +0x715ae1 */ __asm { ROL R8D,CL }
    /* +0x715ae4 */ __asm { PADDQ XMM2,XMM4 }
    /* +0x715ae8 */ __asm { XOR R8D,ESI }
    /* +0x715aeb */ __asm { SUB R8D,EDI }
    /* +0x715aee */ __asm { XOR R8D,EBX }
    /* +0x715af1 */ __asm { MOV ECX,EAX }
    /* +0x715af3 */ __asm { ROL R8D,CL }
    /* +0x715af6 */ __asm { MOVSXD RCX,R8D }
    /* +0x715af9 */ __asm { MOV EAX,dword ptr [RCX + R11*0x1 + 0x74] }
    /* +0x715afe */ __asm { MOVQ RCX,XMM2 }
    /* +0x715b03 */ __asm { XOR RCX,RSI }
    /* +0x715b06 */ __asm { IMUL RSI,RCX,-0x4da9d169 }
    /* +0x715b0d */ __asm { NOT R9D }
    /* +0x715b10 */ __asm { MOVZX EDX,R9W }
    /* +0x715b14 */ __asm { MOVZX R9D,R12W }
    /* +0x715b18 */ __asm { LEA R8,[RBP + 0x30] }
    /* +0x715b1c */ __asm { SYSCALL }
    /* +0x715b1e */ __asm { CMP R14,RSI }
    /* +0x715b21 */ __asm { JZ 0x7fffa4e86f13 }
    /* +0x715b27 */ __asm { MOV qword ptr [RBP + 0x30],RCX }
    /* +0x715b2b */ __asm { MOV EAX,dword ptr [R14 + 0xe9c] }
    /* +0x715b32 */ __asm { MOV CX,0xa2aa }
    /* +0x715b36 */ __asm { MOV R10,qword ptr [RBP + 0x820] }
    /* +0x715b3d */ __asm { MOV R8D,R10D }
    /* +0x715b40 */ __asm { XOR R8D,ECX }
    /* +0x715b43 */ __asm { NOT R8D }
    /* +0x715b46 */ __asm { SUB R8D,dword ptr [RBP + 0x430] }
    /* +0x715b4d */ __asm { IMUL R10D,R8D,-0x4d7f }
    /* +0x715b54 */ __asm { NOT R10D }
    /* +0x715b57 */ __asm { ROL R10W,0x7 }
    /* +0x715b5c */ __asm { IMUL R10D,dword ptr [RBP + 0x860] }
    /* +0x715b64 */ __asm { NOT R10D }
    /* +0x715b67 */ __asm { SUB R10D,dword ptr [RBP + 0x1330] }
    /* +0x715b6e */ __asm { MOVSX R10,R10W }
    /* +0x715b72 */ __asm { JMP 0x7fffa4e86c7a }
    /* +0x715b77 */ __asm { MOV R10,0x1e4e534972ebb581 }
    /* +0x715b81 */ __asm { XOR R10,qword ptr [RBP + 0xda0] }
    /* +0x715b88 */ __asm { SUB R10,qword ptr [RBP + 0x430] }
    /* +0x715b8f */ __asm { ADD R10,qword ptr [RBP + 0x11c0] }
    /* +0x715b96 */ __asm { ROL R10,0x37 }
    /* +0x715b9a */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x715ba1 */ __asm { MOV RCX,0x0 }
    /* +0x715ba8 */ __asm { NOP }
    /* +0x715ba9 */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x715bb0 */ __asm { MOV RDX,qword ptr [RBP + 0x820] }
    /* +0x715bb7 */ __asm { ADD RCX,RDX }
    /* +0x715bba */ __asm { ADD R10,RCX }
    /* +0x715bbd */ __asm { MOV ECX,0xeda74a4b }
    /* +0x715bc2 */ __asm { CMP RCX,R10 }
    /* +0x715bc5 */ __asm { NOP }
    /* +0x715bc6 */ __asm { NOP }
    /* +0x715bc7 */ __asm { NOP }
    /* +0x715bc8 */ __asm { NOP }
    /* +0x715bc9 */ __asm { NOP }
    /* +0x715bca */ __asm { MOVQ XMM0,RCX }
    /* +0x715bcf */ __asm { MOV R8D,0x999ce83a }
    /* +0x715bd5 */ __asm { ADD R8D,0x3239b315 }
    /* +0x715bdc */ __asm { MOV RCX,qword ptr [RBP + 0xb08] }
    /* +0x715be3 */ __asm { ROR R8D,CL }
    /* +0x715be6 */ __asm { IMUL R8D,dword ptr [RBP + 0x8c0] }
    /* +0x715bee */ __asm { XOR R8D,dword ptr [RBP + 0x11c0] }
    /* +0x715bf5 */ __asm { ROL R8D,0x4 }
    /* +0x715bf9 */ __asm { IMUL R8D,dword ptr [RBP + 0x16f8] }
    /* +0x715c01 */ __asm { XOR R8D,dword ptr [RBP + 0x1638] }
    /* +0x715c08 */ __asm { MOVD XMM4,R8D }
    /* +0x715c0d */ __asm { PMULUDQ XMM4,xmmword ptr [RBP + 0x530] }
    /* +0x715c15 */ __asm { MOVD ECX,XMM4 }
    /* +0x715c19 */ __asm { ADD ECX,dword ptr [RBP + 0x410] }
    /* +0x715c1f */ __asm { MOVSXD RCX,ECX }
    /* +0x715c22 */ __asm { MOVQ XMM4,RCX }
    /* +0x715c27 */ __asm { PADDQ XMM4,XMM0 }
    /* +0x715c2b */ __asm { MOVQ RCX,XMM4 }
    /* +0x715c30 */ __asm { TEST uint8_t ptr [RCX + 0x240],0x1 }
    /* +0x715c37 */ __asm { JZ 0x7fffa4e866a6 }
    /* +0x715c3d */ __asm { MOV RSI,qword ptr [RBP + 0x1350] }
    /* +0x715c44 */ __asm { MOV ECX,ESI }
    /* +0x715c46 */ __asm { PXOR XMM0,XMM0 }
    /* +0x715c4a */ __asm { MOVDQA xmmword ptr [RBP + 0x30],XMM0 }
    /* +0x715c4f */ __asm { MOV DX,0xf809 }
    /* +0x715c53 */ __asm { IMUL EDX,dword ptr [RBP + 0x16f8] }
    /* +0x715c5a */ __asm { MOV R14,qword ptr [RBP + 0x820] }
    /* +0x715c61 */ __asm { LEA R8D,[R14 + RDX*0x1] }
    /* +0x715c65 */ __asm { ROL R8W,0xb }
    /* +0x715c6a */ __asm { MOV RDI,qword ptr [RBP + 0x410] }
    /* +0x715c71 */ __asm { SUB ECX,EDI }
    /* +0x715c73 */ __asm { ADD R8D,ECX }
    /* +0x715c76 */ __asm { MOV RBX,qword ptr [RBP + 0x11c0] }
    /* +0x715c7d */ __asm { MOV ECX,EBX }
    /* +0x715c7f */ __asm { XOR ECX,R8D }
    /* +0x715c82 */ __asm { NOT ECX }
    /* +0x715c84 */ __asm { MOV R10,qword ptr [RBP + 0x860] }
    /* +0x715c8b */ __asm { MOV R8D,R10D }
    /* +0x715c8e */ __asm { IMUL R8D,ECX }
    /* +0x715c92 */ __asm { MOVZX EAX,R8W }
    /* +0x715c96 */ __asm { MOV RDX,qword ptr GS:[RAX] }
    /* +0x715c9a */ __asm { MOV R8D,0xc1685ca6 }
    /* +0x715ca0 */ __asm { MOV R9,qword ptr [RBP + 0x1638] }
    /* +0x715ca7 */ __asm { MOV R11D,0x277f9ecd }
    /* +0x715cad */ __asm { XOR R11D,0x3eaa2479 }
    /* +0x715cb4 */ __asm { SUB R11D,R9D }
    /* +0x715cb7 */ __asm { SUB R11D,EBX }
    /* +0x715cba */ __asm { MOV ECX,R14D }
    /* +0x715cbd */ __asm { ROR R11D,CL }
    /* +0x715cc0 */ __asm { MOV ECX,ESI }
    /* +0x715cc2 */ __asm { ROL R11D,CL }
    /* +0x715cc5 */ __asm { NOT R11D }
    /* +0x715cc8 */ __asm { MOVSXD R10,R11D }
    /* +0x715ccb */ __asm { MOV RAX,-0x986c3cfd298e321 }
    /* +0x715cd5 */ __asm { SUB RAX,R14 }
    /* +0x715cd8 */ __asm { ROL RAX,CL }
    /* +0x715cdb */ __asm { MOV RCX,qword ptr [RBP + 0x430] }
    /* +0x715ce2 */ __asm { ROR RAX,CL }
    /* +0x715ce5 */ __asm { MOV ECX,EBX }
    /* +0x715ce7 */ __asm { ROL RAX,CL }
    /* +0x715cea */ __asm { ADD RAX,-0x49108127 }
    /* +0x715cf0 */ __asm { MOV ECX,EDI }
    /* +0x715cf2 */ __asm { ROR RAX,CL }
    /* +0x715cf5 */ __asm { MOV R14,qword ptr [RBP + 0x2350] }
    /* +0x715cfc */ __asm { SUB R14D,ESI }
    /* +0x715cff */ __asm { MOV RCX,qword ptr [RBP + 0xe70] }
    /* +0x715d06 */ __asm { OR RCX,0x1 }
    /* +0x715d0a */ __asm { IMUL RAX,RCX }
    /* +0x715d0e */ __asm { SUB RAX,R9 }
    /* +0x715d11 */ __asm { MOV RCX,qword ptr [RDX + 0x60] }
    /* +0x715d15 */ __asm { MOV R11,0x636a8db19018a51d }
    /* +0x715d1f */ __asm { SUB RCX,R11 }
    /* +0x715d22 */ __asm { MOV R11,0x43d34b8b9c464dd3 }
    /* +0x715d2c */ __asm { XOR EDX,EDX }
    /* +0x715d2e */ __asm { CMP RCX,R11 }
    /* +0x715d31 */ __asm { SETZ DL }
    /* +0x715d34 */ __asm { XOR R11D,R11D }
    /* +0x715d37 */ __asm { CMP RCX,RAX }
    /* +0x715d3a */ __asm { SETL R11B }
    /* +0x715d3e */ __asm { ADD R14D,R8D }
}


// ============================================================================
// Function : Unwind@7fffa4e86fb0  |  RVA: 0x716fb0  |  Size: 421 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e86fb0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  uint32_t uVar3;
  
  if (7 < *(uint64_t *)(param_2 + 0x5e0)) {
    uVar3 = ~(0x447f68acU - (int)*(uint64_t *)(param_2 + 0x16b8) ^
             (uint32_t)*(uint64_t *)(param_2 + 0x4b0)) + (int)*(uint64_t *)(param_2 + 0x13d0);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0x1f;
    uVar3 = ~(((uVar3 << bVar1 | uVar3 >> 0x20 - bVar1) ^ (uint32_t)*(uint64_t *)(param_2 + 0x490)) +
             *(int *)(param_2 + 0xe20));
    pcVar2 = (code *)((int64_t)(int)uVar3 + 0x7fffa569338c);
    (*pcVar2)(pcVar2,uVar3,*(uint64_t *)(param_2 + 0xb0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xb0));
  }
  *(uint64_t *)(param_2 + 0xc0) = 0;
  *(uint16_t *)(param_2 + 0xb0) = 0;
  *(uint64_t *)(param_2 + 200) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e87160  |  RVA: 0x717160  |  Size: 482 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e87160(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint16_t uVar4;
  
  if (7 < *(uint64_t *)(param_2 + 0x818)) {
    uVar4 = (short)*(uint64_t *)(param_2 + 0x1618) *
            ((short)*(uint64_t *)(param_2 + 0x4b0) + 0x6f5);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1240) & 0xf;
    uVar4 = (uint16_t)*(uint64_t *)(param_2 + 0x490) ^
            (uVar4 >> bVar1 | uVar4 << 0x10 - bVar1) - (short)*(uint64_t *)(param_2 + 0x8a0);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xe20) & 0xf;
    uVar3 = 0x766b26a6 - *(int *)(param_2 + 0x10e8);
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0x1f;
    (*(code *)((int64_t)
               (short)(((short)*(uint64_t *)(param_2 + 0x16b8) +
                       (uVar4 << bVar1 | uVar4 >> 0x10 - bVar1)) * -0x20d1) + 0x7fffa5687ee7))
              (*(uint64_t *)(param_2 + 0x1240) & 0xffffffff,uVar3 >> bVar2 | uVar3 << 0x20 - bVar2,
               *(uint64_t *)(param_2 + 0x800) >> 0x3d ^ *(uint64_t *)(param_2 + 0x800));
  }
  *(uint64_t *)(param_2 + 0x818) = 7;
  *(uint16_t *)(param_2 + 0x800) = 0;
  *(uint64_t *)(param_2 + 0x810) = 0;
  *(uint64_t *)(param_2 + 0xe98) = 7;
  *(int64_t *)(param_2 + 0x1560) = param_2 + 0x1ae0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e87350  |  RVA: 0x717350  |  Size: 4114 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4e87350(void) {
    /* +0x717350 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x717355 */ __asm { PUSH RBP }
    /* +0x717356 */ __asm { PUSH R14 }
    /* +0x717358 */ __asm { PUSH R13 }
    /* +0x71735a */ __asm { PUSH R12 }
    /* +0x71735c */ __asm { PUSH RDI }
    /* +0x71735d */ __asm { PUSH RBX }
    /* +0x71735e */ __asm { PUSH R15 }
    /* +0x717360 */ __asm { PUSH RSI }
    /* +0x717361 */ __asm { SUB RSP,0xf8 }
    /* +0x717368 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x71736f */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM12 }
    /* +0x717376 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM8 }
    /* +0x71737d */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM15 }
    /* +0x717384 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM11 }
    /* +0x71738e */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM6 }
    /* +0x717397 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM9 }
    /* +0x7173a1 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x7173aa */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM14 }
    /* +0x7173b4 */ __asm { MOVDQA xmmword ptr [RSP + 0xd0],XMM13 }
    /* +0x7173be */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM10 }
    /* +0x7173c8 */ __asm { MOV R10,qword ptr [RBP + 0x1708] }
    /* +0x7173cf */ __asm { TEST R10,R10 }
    /* +0x7173d2 */ __asm { JZ 0x7fffa4e87431 }
    /* +0x7173d4 */ __asm { MOV CX,0x8690 }
    /* +0x7173d8 */ __asm { MOV R8,qword ptr [RBP + 0x410] }
    /* +0x7173df */ __asm { XOR R8D,ECX }
    /* +0x7173e2 */ __asm { MOV RCX,qword ptr [RBP + 0x430] }
    /* +0x7173e9 */ __asm { ROR R8W,CL }
    /* +0x7173ed */ __asm { LEA RDX,[0x7fffa5084e2f] }
    /* +0x7173f4 */ __asm { ADD R8D,0xffffff78 }
    /* +0x7173fb */ __asm { MOV R11,qword ptr [RBP + 0x1638] }
    /* +0x717402 */ __asm { XOR R11D,R8D }
    /* +0x717405 */ __asm { SUB R11D,dword ptr [RBP + 0x1350] }
    /* +0x71740c */ __asm { MOV RCX,qword ptr [RBP + 0x978] }
    /* +0x717413 */ __asm { ROR R11W,CL }
    /* +0x717417 */ __asm { MOV RCX,qword ptr [RBP + 0x820] }
    /* +0x71741e */ __asm { LEA EAX,[RCX + R11*0x1] }
    /* +0x717422 */ __asm { NOT EAX }
    /* +0x717424 */ __asm { MOVSX R8,AX }
    /* +0x717428 */ __asm { ADD R8,RDX }
    /* +0x71742b */ __asm { MOV RCX,R10 }
    /* +0x71742e */ __asm { CALL R8 }
    /* +0x717431 */ __asm { RDTSC }
    /* +0x717433 */ __asm { SHL RDX,0x20 }
    /* +0x717437 */ __asm { OR RDX,RAX }
    /* +0x71743a */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x717444 */ __asm { IMUL RDX,RCX }
    /* +0x717448 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0x717452 */ __asm { ADD RDX,RCX }
    /* +0x717455 */ __asm { MOV RCX,RDX }
    /* +0x717458 */ __asm { SHR RCX,0x3b }
    /* +0x71745c */ __asm { MOV RAX,RDX }
    /* +0x71745f */ __asm { SHR RAX,0x2d }
    /* +0x717463 */ __asm { SHR RDX,0x1b }
    /* +0x717467 */ __asm { XOR EDX,EAX }
    /* +0x717469 */ __asm { ROR EDX,CL }
    /* +0x71746b */ __asm { AND EDX,0x3 }
    /* +0x71746e */ __asm { CMP EDX,0x2 }
    /* +0x717471 */ __asm { JC 0x7fffa4e875c3 }
    /* +0x717477 */ __asm { CMP EDX,0x3 }
    /* +0x71747a */ __asm { JNZ 0x7fffa4e87729 }
    /* +0x717480 */ __asm { MOV R10,-0x4cc5f8b2869011e4 }
    /* +0x71748a */ __asm { XOR R10,qword ptr [RBP + 0x2350] }
    /* +0x717491 */ __asm { MOV RCX,qword ptr [RBP + 0x11c0] }
    /* +0x717498 */ __asm { ROL R10,CL }
    /* +0x71749b */ __asm { ADD R10,qword ptr [RBP + 0x1638] }
    /* +0x7174a2 */ __asm { NOT R10 }
    /* +0x7174a5 */ __asm { MOV RCX,qword ptr [RBP + 0x820] }
    /* +0x7174ac */ __asm { ROR R10,CL }
    /* +0x7174af */ __asm { LEA RCX,[0x7fffa47c338a] }
    /* +0x7174b6 */ __asm { ADD R10,qword ptr [RBP + 0x410] }
    /* +0x7174bd */ __asm { IMUL R10,R10,0x2f14ff57 }
    /* +0x7174c4 */ __asm { MOVQ XMM0,R10 }
    /* +0x7174c9 */ __asm { MOVDQA XMM4,xmmword ptr [RBP + 0xe40] }
    /* +0x7174d1 */ __asm { PXOR XMM4,XMM0 }
    /* +0x7174d5 */ __asm { MOVQ R10,XMM4 }
    /* +0x7174da */ __asm { CMP RCX,R10 }
    /* +0x7174dd */ __asm { JZ 0x7fffa4e88349 }
    /* +0x7174e3 */ __asm { MOVZX EDX,uint8_t ptr [RCX + -0x6c41] }
    /* +0x7174ea */ __asm { MOVZX R9D,uint8_t ptr [RCX + RDX*0x4 + -0x6c3b] }
    /* +0x7174f3 */ __asm { NOT R9B }
    /* +0x7174f6 */ __asm { ROL R9B,0x5 }
    /* +0x7174fa */ __asm { MOV uint8_t ptr [RBP + 0x1a40],R9B }
    /* +0x717501 */ __asm { MOVZX R9D,uint8_t ptr [RCX + RDX*0x4 + -0x6c3a] }
    /* +0x71750a */ __asm { NOT R9B }
    /* +0x71750d */ __asm { ROL R9B,0x5 }
    /* +0x717511 */ __asm { MOV uint8_t ptr [RBP + 0x1a41],R9B }
    /* +0x717518 */ __asm { MOVZX R9D,uint8_t ptr [RCX + RDX*0x4 + -0x6c39] }
    /* +0x717521 */ __asm { NOT R9B }
    /* +0x717524 */ __asm { ROL R9B,0x5 }
    /* +0x717528 */ __asm { MOV uint8_t ptr [RBP + 0x1a42],R9B }
    /* +0x71752f */ __asm { MOVZX ECX,uint8_t ptr [RCX + RDX*0x4 + -0x6c38] }
    /* +0x717537 */ __asm { NOT CL }
    /* +0x717539 */ __asm { ROL CL,0x5 }
    /* +0x71753c */ __asm { MOV uint8_t ptr [RBP + 0x1a43],CL }
    /* +0x717542 */ __asm { MOV ECX,0x9102c3cc }
    /* +0x717547 */ __asm { XOR ECX,dword ptr [RBP + 0x1a40] }
    /* +0x71754d */ __asm { BT ECX,ECX }
    /* +0x717550 */ __asm { JNC 0x7fffa4e880d9 }
    /* +0x717556 */ __asm { MOV RCX,-0x6ab9c171b675528f }
    /* +0x717560 */ __asm { MOV R8,qword ptr [RBP + 0xc10] }
    /* +0x717567 */ __asm { IMUL R8,RCX }
    /* +0x71756b */ __asm { MOV RCX,qword ptr [RBP + 0x1350] }
    /* +0x717572 */ __asm { ROR R8,CL }
    /* +0x717575 */ __asm { ADD R8,qword ptr [RBP + 0x410] }
    /* +0x71757c */ __asm { LEA R11,[0x7fffa47bab52] }
    /* +0x717583 */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x71758a */ __asm { ROL R8,CL }
    /* +0x71758d */ __asm { MOV R10,qword ptr [RBP + 0x10e8] }
    /* +0x717594 */ __asm { SUB R10,R8 }
    /* +0x717597 */ __asm { XOR R10,-0x1214a46 }
    /* +0x71759e */ __asm { MOV RCX,qword ptr [RBP + 0x11c0] }
    /* +0x7175a5 */ __asm { ROL R10,CL }
    /* +0x7175a8 */ __asm { CMP R11,R10 }
    /* +0x7175ab */ __asm { NOP }
    /* +0x7175ac */ __asm { NOP }
    /* +0x7175ad */ __asm { NOP }
    /* +0x7175ae */ __asm { NOP }
    /* +0x7175af */ __asm { NOP }
    /* +0x7175b0 */ __asm { MOV qword ptr [RBP + 0x1a40],RCX }
    /* +0x7175b7 */ __asm { MOV EAX,dword ptr [R11 + 0x24e6] }
    /* +0x7175be */ __asm { JMP 0x7fffa4e882dd }
    /* +0x7175c3 */ __asm { CMP EDX,0x1 }
    /* +0x7175c6 */ __asm { JNZ 0x7fffa4e87ad0 }
    /* +0x7175cc */ __asm { RDTSC }
    /* +0x7175ce */ __asm { SHL RDX,0x20 }
    /* +0x7175d2 */ __asm { OR RDX,RAX }
    /* +0x7175d5 */ __asm { MOV R10,-0x4a9b10dd1385131b }
    /* +0x7175df */ __asm { IMUL R10,RDX }
    /* +0x7175e3 */ __asm { MOV RCX,-0x145763496e3941fe }
    /* +0x7175ed */ __asm { ADD RCX,R10 }
    /* +0x7175f0 */ __asm { MOV RAX,RCX }
    /* +0x7175f3 */ __asm { SHR RAX,0x1b }
    /* +0x7175f7 */ __asm { MOV R10,RCX }
    /* +0x7175fa */ __asm { SHR R10,0x2d }
    /* +0x7175fe */ __asm { XOR EAX,R10D }
    /* +0x717601 */ __asm { SHR RCX,0x3b }
    /* +0x717605 */ __asm { ROR EAX,CL }
    /* +0x717607 */ __asm { MOV dword ptr [RBP + 0x1a40],0xadfecf9e }
    /* +0x717611 */ __asm { MOV ECX,dword ptr [RBP + 0x1a40] }
    /* +0x717617 */ __asm { MOV R8D,0xd7bda051 }
    /* +0x71761d */ __asm { IMUL R8D,dword ptr [RBP + 0x7d0] }
    /* +0x717625 */ __asm { ROL R8D,0x17 }
    /* +0x717629 */ __asm { NOT R8D }
    /* +0x71762c */ __asm { MOV RCX,qword ptr [RBP + 0x410] }
    /* +0x717633 */ __asm { ROR R8D,CL }
    /* +0x717636 */ __asm { XOR R8D,dword ptr [RBP + 0x1350] }
    /* +0x71763d */ __asm { NOT R8D }
    /* +0x717640 */ __asm { MOV RCX,qword ptr [RBP + 0x430] }
    /* +0x717647 */ __asm { ROR R8D,CL }
    /* +0x71764a */ __asm { XOR R8D,dword ptr [RBP + 0x1638] }
    /* +0x717651 */ __asm { SUB R8D,dword ptr [RBP + 0x448] }
    /* +0x717658 */ __asm { CMP EAX,R8D }
    /* +0x71765b */ __asm { JNC 0x7fffa4e876e1 }
    /* +0x717661 */ __asm { MOV R8D,0x43862621 }
    /* +0x717667 */ __asm { ADD R8D,dword ptr [RBP + 0x820] }
    /* +0x71766e */ __asm { XOR R8D,dword ptr [RBP + 0x410] }
    /* +0x717675 */ __asm { ADD R8D,dword ptr [RBP + 0x1638] }
    /* +0x71767c */ __asm { XOR R8D,dword ptr [RBP + 0x3a0] }
    /* +0x717683 */ __asm { MOV RCX,qword ptr [RBP + 0x11c0] }
    /* +0x71768a */ __asm { ROL R8D,CL }
    /* +0x71768d */ __asm { ADD R8D,0xc95f6622 }
    /* +0x717694 */ __asm { MOVD XMM0,R8D }
    /* +0x717699 */ __asm { MOVDQA XMM4,xmmword ptr [RBP + 0xcd0] }
    /* +0x7176a1 */ __asm { PXOR XMM4,XMM0 }
    /* +0x7176a5 */ __asm { MOVD ECX,XMM4 }
    /* +0x7176a9 */ __asm { MOV RAX,qword ptr [RBP + 0x8c0] }
    /* +0x7176b0 */ __asm { IMUL EAX,ECX }
    /* +0x7176b3 */ __asm { MOVQ XMM0,qword ptr [RAX] }
    /* +0x7176b7 */ __asm { MOV RCX,0x2fb50781c1433377 }
    /* +0x7176c1 */ __asm { MOVQ XMM4,RCX }
    /* +0x7176c6 */ __asm { PSUBQ XMM0,XMM4 }
    /* +0x7176ca */ __asm { MOVQ RCX,XMM0 }
    /* +0x7176cf */ __asm { MOV R10,0x76f981671cd8614f }
    /* +0x7176d9 */ __asm { CMP RCX,R10 }
    /* +0x7176dc */ __asm { NOP }
    /* +0x7176dd */ __asm { NOP }
    /* +0x7176de */ __asm { NOP }
    /* +0x7176df */ __asm { NOP }
    /* +0x7176e0 */ __asm { NOP }
    /* +0x7176e1 */ __asm { LEA RCX,[0x7fffa4789975] }
    /* +0x7176e8 */ __asm { MOV R11,RCX }
    /* +0x7176eb */ __asm { ROL R11,0x20 }
    /* +0x7176ef */ __asm { XOR R11,0x270bad1d }
    /* +0x7176f6 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x7176fd */ __asm { MOV RDX,0x0 }
    /* +0x717704 */ __asm { NOP }
    /* +0x717705 */ __asm { MOV R10,0x739eaa9f1e5fac85 }
    /* +0x71770f */ __asm { CMP R11,R10 }
    /* +0x717712 */ __asm { NOP }
    /* +0x717713 */ __asm { NOP }
    /* +0x717714 */ __asm { NOP }
    /* +0x717715 */ __asm { NOP }
    /* +0x717716 */ __asm { NOP }
    /* +0x717717 */ __asm { MOV qword ptr [RBP + 0x1a40],R11 }
    /* +0x71771e */ __asm { MOV EAX,dword ptr [RCX + -0x4b19] }
    /* +0x717724 */ __asm { JMP 0x7fffa4e882dd }
    /* +0x717729 */ __asm { MOV ECX,0xd341cb15 }
    /* +0x71772e */ __asm { MOV R10,-0x1de7e65f7b71aa5 }
    /* +0x717738 */ __asm { CMP RCX,R10 }
    /* +0x71773b */ __asm { NOP }
    /* +0x71773c */ __asm { NOP }
    /* +0x71773d */ __asm { NOP }
    /* +0x71773e */ __asm { NOP }
    /* +0x71773f */ __asm { NOP }
    /* +0x717740 */ __asm { MOVZX ECX,uint8_t ptr [RCX + -0x5343c8d5] }
    /* +0x717747 */ __asm { RDTSC }
    /* +0x717749 */ __asm { SHL RDX,0x20 }
    /* +0x71774d */ __asm { OR RDX,RAX }
    /* +0x717750 */ __asm { TEST CL,0x1 }
    /* +0x717753 */ __asm { JZ 0x7fffa4e87bc2 }
    /* +0x717759 */ __asm { MOV RCX,-0x2ecbdabc217d106b }
    /* +0x717763 */ __asm { IMUL RDX,RCX }
    /* +0x717767 */ __asm { MOV R10,0x1ef252b88fe367ce }
    /* +0x717771 */ __asm { ADD R10,RDX }
    /* +0x717774 */ __asm { MOV RCX,R10 }
    /* +0x717777 */ __asm { SHR RCX,0x3b }
    /* +0x71777b */ __asm { MOV RAX,R10 }
    /* +0x71777e */ __asm { SHR RAX,0x2d }
    /* +0x717782 */ __asm { SHR R10,0x1b }
    /* +0x717786 */ __asm { XOR EAX,R10D }
    /* +0x717789 */ __asm { ROR EAX,CL }
    /* +0x71778b */ __asm { MOV dword ptr [RBP + 0x1a40],0x49cbe833 }
    /* +0x717795 */ __asm { MOV R8D,dword ptr [RBP + 0x1a40] }
    /* +0x71779c */ __asm { AND R8D,0x1 }
    /* +0x7177a0 */ __asm { MOV CX,0x139b }
    /* +0x7177a4 */ __asm { IMUL EDX,ECX,0x39a5 }
    /* +0x7177aa */ __asm { ADD EDX,dword ptr [RBP + 0x1350] }
    /* +0x7177b0 */ __asm { MOV RCX,qword ptr [RBP + 0x820] }
    /* +0x7177b7 */ __asm { ROL DX,CL }
    /* +0x7177ba */ __asm { MOV RCX,qword ptr [RBP + 0x410] }
    /* +0x7177c1 */ __asm { SUB ECX,dword ptr [RBP + 0x430] }
    /* +0x7177c7 */ __asm { NOT EDX }
    /* +0x7177c9 */ __asm { ADD EDX,ECX }
    /* +0x7177cb */ __asm { IMUL EDX,dword ptr [RBP + 0x860] }
    /* +0x7177d2 */ __asm { ADD EDX,dword ptr [RBP + 0x4a8] }
    /* +0x7177d8 */ __asm { MOVZX ECX,DX }
    /* +0x7177db */ __asm { CMP R8D,ECX }
    /* +0x7177de */ __asm { NOP }
    /* +0x7177df */ __asm { NOP }
    /* +0x7177e0 */ __asm { NOP }
    /* +0x7177e1 */ __asm { NOP }
    /* +0x7177e2 */ __asm { NOP }
    /* +0x7177e3 */ __asm { NOP }
    /* +0x7177e4 */ __asm { NOP }
    /* +0x7177e5 */ __asm { NOP }
    /* +0x7177e6 */ __asm { NOP }
    /* +0x7177e7 */ __asm { NOP }
    /* +0x7177e8 */ __asm { MOV R8D,0x1ad5ec1 }
    /* +0x7177ee */ __asm { XOR R8D,dword ptr [RBP + 0x820] }
    /* +0x7177f5 */ __asm { NOT R8D }
    /* +0x7177f8 */ __asm { MOV RCX,qword ptr [RBP + 0x1350] }
    /* +0x7177ff */ __asm { ROL R8D,CL }
    /* +0x717802 */ __asm { MOV R10,qword ptr [RBP + 0x1068] }
    /* +0x717809 */ __asm { OR R10D,0x1 }
    /* +0x71780d */ __asm { IMUL R10D,R8D }
    /* +0x717811 */ __asm { XOR R10D,0x3a14d71a }
    /* +0x717818 */ __asm { MOV RCX,qword ptr [RBP + 0x11c0] }
    /* +0x71781f */ __asm { ROL R10D,CL }
    /* +0x717822 */ __asm { NOT R10D }
    /* +0x717825 */ __asm { ADD R10D,dword ptr [RBP + 0x410] }
    /* +0x71782c */ __asm { MOVD XMM0,R10D }
    /* +0x717831 */ __asm { PADDD XMM0,xmmword ptr [RBP + 0x3e0] }
    /* +0x717839 */ __asm { MOVD ECX,XMM0 }
    /* +0x71783d */ __asm { CMP EAX,ECX }
    /* +0x71783f */ __asm { JNC 0x7fffa4e87a78 }
    /* +0x717845 */ __asm { MOV dword ptr [RBP + 0x1a40],0xeca7809d }
    /* +0x71784f */ __asm { MOV ECX,dword ptr [RBP + 0x1a40] }
    /* +0x717855 */ __asm { MOV ECX,0xf1c53bd2 }
    /* +0x71785a */ __asm { MOV R10,0x658c7bcf69ee3edd }
    /* +0x717864 */ __asm { CMP RCX,R10 }
    /* +0x717867 */ __asm { JZ 0x7fffa4e88355 }
    /* +0x71786d */ __asm { TEST uint8_t ptr [RCX + -0x71c73992],0x1 }
    /* +0x717874 */ __asm { JNZ 0x7fffa4e87a78 }
    /* +0x71787a */ __asm { PXOR XMM0,XMM0 }
    /* +0x71787e */ __asm { MOVDQA xmmword ptr [RBP + 0x1a40],XMM0 }
    /* +0x717886 */ __asm { MOV dword ptr [RBP + 0x30],0xc37a08c0 }
    /* +0x71788d */ __asm { MOV ECX,dword ptr [RBP + 0x30] }
    /* +0x717890 */ __asm { CMP ECX,0x3093fd48 }
    /* +0x717896 */ __asm { NOP }
    /* +0x717897 */ __asm { NOP }
    /* +0x717898 */ __asm { NOP }
    /* +0x717899 */ __asm { NOP }
    /* +0x71789a */ __asm { NOP }
    /* +0x71789b */ __asm { PUSHFQ }
    /* +0x71789c */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x7178a4 */ __asm { POPFQ }
    /* +0x7178a5 */ __asm { MOV dword ptr [RBP + 0x1a40],0x0 }
    /* +0x7178af */ __asm { MOV dword ptr [RBP + 0x30],0x5fc9682c }
    /* +0x7178b6 */ __asm { MOV ECX,dword ptr [RBP + 0x30] }
    /* +0x7178b9 */ __asm { CMP ECX,0x2aab7c6 }
    /* +0x7178bf */ __asm { NOP }
    /* +0x7178c0 */ __asm { NOP }
    /* +0x7178c1 */ __asm { NOP }
    /* +0x7178c2 */ __asm { NOP }
    /* +0x7178c3 */ __asm { NOP }
    /* +0x7178c4 */ __asm { MOV ECX,0x82df3524 }
    /* +0x7178c9 */ __asm { IMUL ECX,ECX,0x645d50c7 }
    /* +0x7178cf */ __asm { NOT ECX }
    /* +0x7178d1 */ __asm { ADD ECX,dword ptr [RBP + 0x430] }
    /* +0x7178d7 */ __asm { IMUL ECX,dword ptr [RBP + 0x4c8] }
    /* +0x7178de */ __asm { SUB ECX,dword ptr [RBP + 0x820] }
    /* +0x7178e4 */ __asm { MOVD XMM0,ECX }
    /* +0x7178e8 */ __asm { MOVDQA XMM4,xmmword ptr [RBP + 0xdd0] }
    /* +0x7178f0 */ __asm { PMULUDQ XMM4,XMM0 }
    /* +0x7178f4 */ __asm { MOVD ECX,XMM4 }
    /* +0x7178f8 */ __asm { ROL ECX,0xe }
    /* +0x7178fb */ __asm { XOR ECX,dword ptr [RBP + 0x1398] }
    /* +0x717901 */ __asm { MOVD XMM0,ECX }
    /* +0x717905 */ __asm { PSUBD XMM0,xmmword ptr [RBP + 0xbd0] }
    /* +0x71790d */ __asm { MOVD dword ptr [RBP + 0x30],XMM0 }
    /* +0x717912 */ __asm { MOV ECX,dword ptr [RBP + 0x30] }
    /* +0x717915 */ __asm { TEST CL,0x1 }
    /* +0x717918 */ __asm { NOP }
    /* +0x717919 */ __asm { NOP }
    /* +0x71791a */ __asm { NOP }
    /* +0x71791b */ __asm { NOP }
    /* +0x71791c */ __asm { NOP }
    /* +0x71791d */ __asm { LEA R11,[0x7fffa4783039] }
    /* +0x717924 */ __asm { MOV RCX,R11 }
    /* +0x717927 */ __asm { ROL RCX,0x31 }
    /* +0x71792b */ __asm { XOR RCX,0x5f2e7665 }
    /* +0x717932 */ __asm { MOV R10,0x598006e9c8718021 }
    /* +0x71793c */ __asm { IMUL RCX,R10 }
    /* +0x717940 */ __asm { MOV R10,-0x708c7506715b63ff }
    /* +0x71794a */ __asm { CMP RCX,R10 }
    /* +0x71794d */ __asm { JZ 0x7fffa4e8836a }
    /* +0x717953 */ __asm { MOV CX,0xcdba }
    /* +0x717957 */ __asm { MOV EDX,0xe2c613a5 }
    /* +0x71795c */ __asm { IMUL EDX,dword ptr [RBP + 0x8c0] }
    /* +0x717963 */ __asm { MOV R10W,0x998c }
    /* +0x717968 */ __asm { MOV qword ptr [RBP + 0x30],RAX }
    /* +0x71796c */ __asm { MOV RAX,qword ptr [RBP + 0x860] }
    /* +0x717973 */ __asm { IMUL EAX,ECX }
    /* +0x717976 */ __asm { MOV RCX,qword ptr [RBP + 0x448] }
    /* +0x71797d */ __asm { LEA R8D,[RCX + RAX*0x1] }
    /* +0x717981 */ __asm { MOV R9,qword ptr [RBP + 0x1248] }
    /* +0x717988 */ __asm { MOVD XMM0,R9D }
    /* +0x71798d */ __asm { NOT R8D }
    /* +0x717990 */ __asm { MOV RAX,qword ptr [RBP + 0x1350] }
    /* +0x717997 */ __asm { ADD R8D,EAX }
    /* +0x71799a */ __asm { MOV R14,qword ptr [RBP + 0x11c0] }
    /* +0x7179a1 */ __asm { XOR R10D,R14D }
    /* +0x7179a4 */ __asm { MOV R13,qword ptr [RBP + 0x820] }
    /* +0x7179ab */ __asm { MOV ECX,R13D }
    /* +0x7179ae */ __asm { ROL R10W,CL }
    /* +0x7179b2 */ __asm { IMUL R8D,R9D }
    /* +0x7179b6 */ __asm { SUB R10D,EAX }
    /* +0x7179b9 */ __asm { MOV RDI,qword ptr [RBP + 0x430] }
    /* +0x7179c0 */ __asm { MOV RAX,qword ptr [RBP + 0x668] }
    /* +0x7179c7 */ __asm { ADD EAX,EDI }
    /* +0x7179c9 */ __asm { IMUL ECX,R10D,0x41f }
    /* +0x7179d0 */ __asm { MOV R10,qword ptr [RBP + 0x410] }
    /* +0x7179d7 */ __asm { SUB EAX,R10D }
    /* +0x7179da */ __asm { ADD EAX,ECX }
    /* +0x7179dc */ __asm { ADD EDX,dword ptr [RBP + 0x958] }
    /* +0x7179e2 */ __asm { MOV ECX,R13D }
    /* +0x7179e5 */ __asm { ROR EDX,CL }
    /* +0x7179e7 */ __asm { MOV RSI,qword ptr [RBP + 0x1638] }
    /* +0x7179ee */ __asm { MOV ECX,ESI }
    /* +0x7179f0 */ __asm { ROL EDX,CL }
    /* +0x7179f2 */ __asm { MOV ECX,EDI }
    /* +0x7179f4 */ __asm { ROR EDX,CL }
    /* +0x7179f6 */ __asm { IMUL EDX,EDX,0x407408db }
    /* +0x7179fc */ __asm { ADD EDX,R10D }
    /* +0x7179ff */ __asm { MOV CX,0x6459 }
    /* +0x717a03 */ __asm { IMUL R10D,ECX,-0x74f9 }
    /* +0x717a0a */ __asm { MOV RCX,qword ptr [RBP + 0xf98] }
    /* +0x717a11 */ __asm { ROL R10W,CL }
    /* +0x717a15 */ __asm { ADD R8D,EDI }
    /* +0x717a18 */ __asm { MOVD XMM4,R10D }
    /* +0x717a1d */ __asm { PMULLW XMM4,XMM0 }
    /* +0x717a21 */ __asm { MOVD R9D,XMM4 }
    /* +0x717a26 */ __asm { MOV ECX,EDI }
    /* +0x717a28 */ __asm { ROR R9W,CL }
    /* +0x717a2c */ __asm { MOV ECX,dword ptr [RBP + 0x7d0] }
    /* +0x717a32 */ __asm { IMUL ECX,EDX }
    /* +0x717a35 */ __asm { SUB R9D,R14D }
    /* +0x717a38 */ __asm { XOR R9D,R13D }
    /* +0x717a3b */ __asm { NOT R9D }
    /* +0x717a3e */ __asm { ADD R9D,ESI }
    /* +0x717a41 */ __asm { MOVQ XMM0,R11 }
    /* +0x717a46 */ __asm { MOVSXD R10,ECX }
    /* +0x717a49 */ __asm { MOVZX R9D,R9W }
    /* +0x717a4d */ __asm { IMUL ECX,R8D,0x5585 }
    /* +0x717a54 */ __asm { NOT ECX }
    /* +0x717a56 */ __asm { MOVZX EDX,CX }
    /* +0x717a59 */ __asm { MOVZX ECX,AX }
    /* +0x717a5c */ __asm { MOVD XMM4,ECX }
    /* +0x717a60 */ __asm { PADDQ XMM4,XMM0 }
    /* +0x717a64 */ __asm { MOVQ RCX,XMM4 }
    /* +0x717a69 */ __asm { MOV EAX,dword ptr [RCX + 0x128] }
    /* +0x717a6f */ __asm { LEA R8,[RBP + 0x1a40] }
    /* +0x717a76 */ __asm { SYSCALL }
    /* +0x717a78 */ __asm { LEA RCX,[0x7fffa477e528] }
    /* +0x717a7f */ __asm { NOP }
    /* +0x717a80 */ __asm { MOV R11,0x0 }
    /* +0x717a87 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x717a8e */ __asm { MOV R10,0xe6d31aaaef54bdf }
    /* +0x717a98 */ __asm { CMP RCX,R10 }
    /* +0x717a9b */ __asm { NOP }
    /* +0x717a9c */ __asm { NOP }
    /* +0x717a9d */ __asm { NOP }
    /* +0x717a9e */ __asm { NOP }
    /* +0x717a9f */ __asm { NOP }
    /* +0x717aa0 */ __asm { NOP }
    /* +0x717aa1 */ __asm { NOP }
    /* +0x717aa2 */ __asm { NOP }
    /* +0x717aa3 */ __asm { NOP }
    /* +0x717aa4 */ __asm { NOP }
    /* +0x717aa5 */ __asm { NOP }
    /* +0x717aa6 */ __asm { NOP }
    /* +0x717aa7 */ __asm { NOP }
    /* +0x717aa8 */ __asm { NOP }
    /* +0x717aa9 */ __asm { NOP }
    /* +0x717aaa */ __asm { NOP }
    /* +0x717aab */ __asm { NOP }
    /* +0x717ad0 */ __asm { LEA R11,[0x7fffa47b9307] }
    /* +0x717ad7 */ __asm { MOV RCX,-0x58453a0bbd8ffcb7 }
    /* +0x717ae1 */ __asm { CMP R11,RCX }
    /* +0x717ae4 */ __asm { NOP }
    /* +0x717ae5 */ __asm { NOP }
    /* +0x717ae6 */ __asm { NOP }
    /* +0x717ae7 */ __asm { NOP }
    /* +0x717ae8 */ __asm { NOP }
    /* +0x717ae9 */ __asm { MOV ECX,0x56cfb3bb }
    /* +0x717aee */ __asm { MOVZX EDX,uint8_t ptr [R11 + 0x3386] }
    /* +0x717af6 */ __asm { MOV R8D,dword ptr [RBP + 0x1940] }
    /* +0x717afd */ __asm { IMUL R8D,ECX }
    /* +0x717b01 */ __asm { XOR R8D,dword ptr [RBP + 0x11c0] }
    /* +0x717b08 */ __asm { MOV RAX,qword ptr [RBP + 0x820] }
    /* +0x717b0f */ __asm { SUB EAX,R8D }
    /* +0x717b12 */ __asm { ADD EAX,0x1e9c35ad }
    /* +0x717b17 */ __asm { MOVD XMM0,EAX }
    /* +0x717b1b */ __asm { PXOR XMM0,xmmword ptr [RBP + 0x3e0] }
    /* +0x717b23 */ __asm { MOVD EAX,XMM0 }
    /* +0x717b27 */ __asm { MOV RCX,qword ptr [RBP + 0x1350] }
    /* +0x717b2e */ __asm { ROR EAX,CL }
    /* +0x717b30 */ __asm { MOVZX ECX,uint8_t ptr [R11 + RDX*0x4 + 0x3396] }
    /* +0x717b39 */ __asm { ROL CL,0x4 }
    /* +0x717b3c */ __asm { MOV uint8_t ptr [RBP + 0x1a40],CL }
    /* +0x717b42 */ __asm { MOVZX ECX,uint8_t ptr [R11 + RDX*0x4 + 0x3397] }
    /* +0x717b4b */ __asm { ROL CL,0x4 }
    /* +0x717b4e */ __asm { MOV uint8_t ptr [RBP + 0x1a41],CL }
    /* +0x717b54 */ __asm { MOVZX ECX,uint8_t ptr [R11 + RDX*0x4 + 0x3398] }
    /* +0x717b5d */ __asm { ROL CL,0x4 }
    /* +0x717b60 */ __asm { MOV uint8_t ptr [RBP + 0x1a42],CL }
    /* +0x717b66 */ __asm { MOVZX ECX,uint8_t ptr [R11 + RDX*0x4 + 0x3399] }
    /* +0x717b6f */ __asm { ROL CL,0x4 }
    /* +0x717b72 */ __asm { XOR EAX,dword ptr [RBP + 0x430] }
    /* +0x717b78 */ __asm { MOV uint8_t ptr [RBP + 0x1a43],CL }
    /* +0x717b7e */ __asm { MOV ECX,0x65e8ce72 }
    /* +0x717b83 */ __asm { XOR ECX,dword ptr [RBP + 0x1a40] }
    /* +0x717b89 */ __asm { MOV R8D,dword ptr [RAX] }
    /* +0x717b8c */ __asm { BT ECX,R8D }
    /* +0x717b90 */ __asm { JNC 0x7fffa4e882a7 }
    /* +0x717b96 */ __asm { LEA RCX,[0x7fffa47b781a] }
    /* +0x717b9d */ __asm { MOV R10,-0x11e651f4b5f73659 }
    /* +0x717ba7 */ __asm { CMP RCX,R10 }
    /* +0x717baa */ __asm { JZ 0x7fffa4e88372 }
    /* +0x717bb0 */ __asm { MOV qword ptr [RBP + 0x1a40],R11 }
    /* +0x717bb7 */ __asm { MOV EAX,dword ptr [RCX + 0x4d12] }
    /* +0x717bbd */ __asm { JMP 0x7fffa4e882dd }
    /* +0x717bc2 */ __asm { MOV RCX,-0x158b4ad174161d9b }
    /* +0x717bcc */ __asm { IMUL RDX,RCX }
    /* +0x717bd0 */ __asm { PUSHFQ }
    /* +0x717bd1 */ __asm { POP R11 }
    /* +0x717bd3 */ __asm { MOV RCX,0x4307c1e1acadc12 }
    /* +0x717bdd */ __asm { ADD RCX,RDX }
    /* +0x717be0 */ __asm { MOV R10,RCX }
    /* +0x717be3 */ __asm { SHR R10,0x1b }
    /* +0x717be7 */ __asm { MOV RAX,RCX }
    /* +0x717bea */ __asm { SHR RAX,0x2d }
    /* +0x717bee */ __asm { XOR EAX,R10D }
    /* +0x717bf1 */ __asm { SHR RCX,0x3b }
    /* +0x717bf5 */ __asm { ROR EAX,CL }
    /* +0x717bf7 */ __asm { TEST R11D,0x100 }
    /* +0x717bfe */ __asm { NOP }
    /* +0x717bff */ __asm { NOP }
    /* +0x717c00 */ __asm { NOP }
    /* +0x717c01 */ __asm { NOP }
    /* +0x717c02 */ __asm { NOP }
    /* +0x717c03 */ __asm { NOP }
    /* +0x717c04 */ __asm { NOP }
    /* +0x717c05 */ __asm { MOV dword ptr [RBP + 0x1a40],0x810115 }
    /* +0x717c0f */ __asm { MOV ECX,dword ptr [RBP + 0x1a40] }
    /* +0x717c15 */ __asm { CMP ECX,0x28302525 }
    /* +0x717c1b */ __asm { NOP }
    /* +0x717c1c */ __asm { NOP }
    /* +0x717c1d */ __asm { NOP }
    /* +0x717c1e */ __asm { NOP }
    /* +0x717c1f */ __asm { NOP }
    /* +0x717c20 */ __asm { NOP }
    /* +0x717c21 */ __asm { NOP }
    /* +0x717c22 */ __asm { NOP }
    /* +0x717c23 */ __asm { NOP }
    /* +0x717c24 */ __asm { CMP EAX,0x10e0e81 }
    /* +0x717c29 */ __asm { JA 0x7fffa4e88064 }
    /* +0x717c2f */ __asm { MOV dword ptr [RBP + 0x1a40],0xdc565d0f }
}


// ============================================================================
// Function : Unwind@7fffa4e883a0  |  RVA: 0x7183a0  |  Size: 5877 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4e883a0(void) {
    /* +0x7183a0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x7183a5 */ __asm { PUSH RBP }
    /* +0x7183a6 */ __asm { PUSH R14 }
    /* +0x7183a8 */ __asm { PUSH R13 }
    /* +0x7183aa */ __asm { PUSH R12 }
    /* +0x7183ac */ __asm { PUSH RDI }
    /* +0x7183ad */ __asm { PUSH RBX }
    /* +0x7183ae */ __asm { PUSH R15 }
    /* +0x7183b0 */ __asm { PUSH RSI }
    /* +0x7183b1 */ __asm { SUB RSP,0xf8 }
    /* +0x7183b8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x7183bf */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM12 }
    /* +0x7183c6 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM8 }
    /* +0x7183cd */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM15 }
    /* +0x7183d4 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM11 }
    /* +0x7183de */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM6 }
    /* +0x7183e7 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM9 }
    /* +0x7183f1 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x7183fa */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM14 }
    /* +0x718404 */ __asm { MOVDQA xmmword ptr [RSP + 0xd0],XMM13 }
    /* +0x71840e */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM10 }
    /* +0x718418 */ __asm { MOV RCX,qword ptr [RBP + 0x21c0] }
    /* +0x71841f */ __asm { MOV qword ptr [RBP + 0x3e0],RCX }
    /* +0x718426 */ __asm { RDTSC }
    /* +0x718428 */ __asm { SHL RDX,0x20 }
    /* +0x71842c */ __asm { OR RDX,RAX }
    /* +0x71842f */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x718439 */ __asm { IMUL RDX,RCX }
    /* +0x71843d */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0x718447 */ __asm { ADD RDX,RCX }
    /* +0x71844a */ __asm { MOV RCX,RDX }
    /* +0x71844d */ __asm { SHR RCX,0x3b }
    /* +0x718451 */ __asm { MOVQ XMM0,RDX }
    /* +0x718456 */ __asm { SHR RDX,0x2d }
    /* +0x71845a */ __asm { MOVD XMM4,EDX }
    /* +0x71845e */ __asm { PSRLQ XMM0,0x1b }
    /* +0x718463 */ __asm { PXOR XMM0,XMM4 }
    /* +0x718467 */ __asm { MOVD R8D,XMM0 }
    /* +0x71846c */ __asm { ROR R8D,CL }
    /* +0x71846f */ __asm { AND R8D,0x3 }
    /* +0x718473 */ __asm { CMP R8D,0x2 }
    /* +0x718477 */ __asm { JNC 0x7fffa4e88715 }
    /* +0x71847d */ __asm { CMP R8D,0x1 }
    /* +0x718481 */ __asm { JNZ 0x7fffa4e88a64 }
    /* +0x718487 */ __asm { MOV R8W,0x20c1 }
    /* +0x71848c */ __asm { SUB R8D,dword ptr [RBP + 0x410] }
    /* +0x718493 */ __asm { ADD R8D,dword ptr [RBP + 0x820] }
    /* +0x71849a */ __asm { ROL R8W,0xa }
    /* +0x71849f */ __asm { MOV RCX,qword ptr [RBP + 0x1908] }
    /* +0x7184a6 */ __asm { ROR R8W,CL }
    /* +0x7184aa */ __asm { PXOR XMM0,XMM0 }
    /* +0x7184ae */ __asm { NOT R8D }
    /* +0x7184b1 */ __asm { ROL R8W,0xa }
    /* +0x7184b6 */ __asm { MOVDQA xmmword ptr [RBP + 0x1a40],XMM0 }
    /* +0x7184be */ __asm { NOT R8D }
    /* +0x7184c1 */ __asm { MOV RAX,qword ptr [RBP + 0x1598] }
    /* +0x7184c8 */ __asm { IMUL EAX,R8D }
    /* +0x7184cc */ __asm { MOV RCX,qword ptr [RBP + 0x11c0] }
    /* +0x7184d3 */ __asm { ROR AX,CL }
    /* +0x7184d6 */ __asm { MOVZX EAX,AX }
    /* +0x7184d9 */ __asm { MOV RCX,qword ptr GS:[RAX] }
    /* +0x7184dd */ __asm { MOV R10,0x2a5653c9f87fca29 }
    /* +0x7184e7 */ __asm { CMP qword ptr [RCX + 0x358],R10 }
    /* +0x7184ee */ __asm { JNZ 0x7fffa4e884f3 }
    /* +0x7184f0 */ __asm { INT3 }
    /* +0x7184f3 */ __asm { MOV dword ptr [RBP + 0x1a40],0x0 }
    /* +0x7184fd */ __asm { MOV dword ptr [RBP + 0x30],0x3a5ad612 }
    /* +0x718504 */ __asm { MOV ECX,dword ptr [RBP + 0x30] }
    /* +0x718507 */ __asm { PUSHFQ }
    /* +0x718508 */ __asm { POP R11 }
    /* +0x71850a */ __asm { TEST R11D,0x100 }
    /* +0x718511 */ __asm { NOP }
    /* +0x718512 */ __asm { NOP }
    /* +0x718513 */ __asm { NOP }
    /* +0x718514 */ __asm { NOP }
    /* +0x718515 */ __asm { NOP }
    /* +0x718516 */ __asm { MOV R8D,0xfa30bbf6 }
    /* +0x71851c */ __asm { ADD R8D,dword ptr [RBP + 0x11c0] }
    /* +0x718523 */ __asm { MOV RCX,qword ptr [RBP + 0x430] }
    /* +0x71852a */ __asm { ROR R8D,CL }
    /* +0x71852d */ __asm { IMUL R8D,dword ptr [RBP + 0xf10] }
    /* +0x718535 */ __asm { SUB R8D,dword ptr [RBP + 0x448] }
    /* +0x71853c */ __asm { MOV RCX,qword ptr [RBP + 0x410] }
    /* +0x718543 */ __asm { ROR R8D,CL }
    /* +0x718546 */ __asm { IMUL R8D,dword ptr [RBP + 0x8c0] }
    /* +0x71854e */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x718555 */ __asm { NOP }
    /* +0x718556 */ __asm { MOV RCX,0x0 }
    /* +0x71855d */ __asm { MOV dword ptr [RBP + 0x30],R8D }
    /* +0x718561 */ __asm { MOV ECX,dword ptr [RBP + 0x30] }
    /* +0x718564 */ __asm { CMP ECX,0x6167ac19 }
    /* +0x71856a */ __asm { NOP }
    /* +0x71856b */ __asm { NOP }
    /* +0x71856c */ __asm { NOP }
    /* +0x71856d */ __asm { NOP }
    /* +0x71856e */ __asm { NOP }
    /* +0x71856f */ __asm { LEA R11,[0x7fffa478951d] }
    /* +0x718576 */ __asm { MOV RDX,R11 }
    /* +0x718579 */ __asm { ROR RDX,0x1 }
    /* +0x71857c */ __asm { ADD RDX,-0x3da3dd8d }
    /* +0x718583 */ __asm { MOV RCX,0x7feb81b0f99d6a51 }
    /* +0x71858d */ __asm { IMUL RCX,qword ptr [RBP + 0xc10] }
    /* +0x718595 */ __asm { MOV R10D,0x80000004 }
    /* +0x71859b */ __asm { XOR R10,RCX }
    /* +0x71859e */ __asm { SUB R10,qword ptr [RBP + 0x1638] }
    /* +0x7185a5 */ __asm { IMUL RCX,R10,-0x2547e7d }
    /* +0x7185ac */ __asm { MOVQ XMM0,RCX }
    /* +0x7185b1 */ __asm { MOVDQA XMM4,xmmword ptr [RBP + 0xe40] }
    /* +0x7185b9 */ __asm { PADDQ XMM4,XMM0 }
    /* +0x7185bd */ __asm { MOVQ R10,XMM4 }
    /* +0x7185c2 */ __asm { NOT R10 }
    /* +0x7185c5 */ __asm { MOV RCX,qword ptr [RBP + 0xb40] }
    /* +0x7185cc */ __asm { ROR R10,CL }
    /* +0x7185cf */ __asm { CMP R10,RDX }
    /* +0x7185d2 */ __asm { JNZ 0x7fffa4e885d7 }
    /* +0x7185d4 */ __asm { XCHG EAX,ESP }
    /* +0x7185d5 */ __asm { CALL RBX }
    /* +0x7185d7 */ __asm { MOV R8D,0xa1d45802 }
    /* +0x7185dd */ __asm { MOV RDI,qword ptr [RBP + 0x11c0] }
    /* +0x7185e4 */ __asm { MOV ECX,EDI }
    /* +0x7185e6 */ __asm { MOV R9,qword ptr [RBP + 0x1638] }
    /* +0x7185ed */ __asm { SUB ECX,R9D }
    /* +0x7185f0 */ __asm { MOV R10W,0x6d6c }
    /* +0x7185f5 */ __asm { MOV AX,0xba4d }
    /* +0x7185f9 */ __asm { ADD EAX,ECX }
    /* +0x7185fb */ __asm { MOV EDX,0xffffb52a }
    /* +0x718600 */ __asm { SUB EDX,R10D }
    /* +0x718603 */ __asm { XOR EAX,0x5e5c }
    /* +0x718608 */ __asm { MOV RCX,qword ptr [RBP + 0x1670] }
    /* +0x71860f */ __asm { LEA R10D,[RCX + RAX*0x1] }
    /* +0x718613 */ __asm { MOV RAX,qword ptr [RBP + 0x430] }
    /* +0x71861a */ __asm { MOV ECX,EAX }
    /* +0x71861c */ __asm { ROR R10W,CL }
    /* +0x718620 */ __asm { MOV ECX,EAX }
    /* +0x718622 */ __asm { SUB ECX,dword ptr [RBP + 0x1330] }
    /* +0x718628 */ __asm { ROL R10W,0x6 }
    /* +0x71862d */ __asm { MOVD XMM0,R10D }
    /* +0x718632 */ __asm { MOV RSI,qword ptr [RBP + 0x410] }
    /* +0x718639 */ __asm { ADD R8D,ESI }
    /* +0x71863c */ __asm { NOT R8D }
    /* +0x71863f */ __asm { ADD R8D,ECX }
    /* +0x718642 */ __asm { MOVD XMM4,R8D }
    /* +0x718647 */ __asm { XOR EDX,EDI }
    /* +0x718649 */ __asm { MOV RCX,qword ptr [RBP + 0x16c0] }
    /* +0x718650 */ __asm { ADD EDX,ECX }
    /* +0x718652 */ __asm { MOV R8W,0xdb2d }
    /* +0x718657 */ __asm { XOR R8D,R9D }
    /* +0x71865a */ __asm { SUB R8D,dword ptr [RBP + 0x4a8] }
    /* +0x718661 */ __asm { MOV ECX,EAX }
    /* +0x718663 */ __asm { ROL DX,CL }
    /* +0x718666 */ __asm { XOR R8D,0x2c1b }
    /* +0x71866d */ __asm { MOV R10,qword ptr [RBP + 0x1350] }
    /* +0x718674 */ __asm { MOV ECX,R10D }
    /* +0x718677 */ __asm { ROL R8W,CL }
    /* +0x71867b */ __asm { MOV RDI,qword ptr [RBP + 0x860] }
    /* +0x718682 */ __asm { IMUL EDI,EDX }
    /* +0x718685 */ __asm { MOV RDX,qword ptr [RBP + 0x1248] }
    /* +0x71868c */ __asm { IMUL EDX,R8D }
    /* +0x718690 */ __asm { MOVDQA XMM5,xmmword ptr [RBP + 0x2400] }
    /* +0x718698 */ __asm { PMULUDQ XMM5,XMM4 }
    /* +0x71869c */ __asm { MOV ECX,EAX }
    /* +0x71869e */ __asm { ROR DX,CL }
    /* +0x7186a1 */ __asm { MOV RAX,qword ptr [RBP + 0x820] }
    /* +0x7186a8 */ __asm { XOR EDX,EAX }
    /* +0x7186aa */ __asm { MOVD R8D,XMM5 }
    /* +0x7186af */ __asm { ADD R8D,R9D }
    /* +0x7186b2 */ __asm { LEA R14,[0x7fffa478b9ba] }
    /* +0x7186b9 */ __asm { NOT R8D }
    /* +0x7186bc */ __asm { ADD R8D,EAX }
    /* +0x7186bf */ __asm { MOV qword ptr [RBP + 0x30],RCX }
    /* +0x7186c3 */ __asm { MOVD XMM4,dword ptr [RBP + 0x1698] }
    /* +0x7186cb */ __asm { PMULLW XMM4,XMM0 }
    /* +0x7186cf */ __asm { MOVD EAX,XMM4 }
    /* +0x7186d3 */ __asm { XOR EAX,R10D }
    /* +0x7186d6 */ __asm { MOVZX EDX,DX }
    /* +0x7186d9 */ __asm { ROL R8D,0xd }
    /* +0x7186dd */ __asm { NOT EDI }
    /* +0x7186df */ __asm { MOV ECX,ESI }
    /* +0x7186e1 */ __asm { ROL DI,CL }
    /* +0x7186e4 */ __asm { MOVSXD R10,R8D }
    /* +0x7186e7 */ __asm { MOVZX R9D,DI }
    /* +0x7186eb */ __asm { MOVSX R13,AX }
    /* +0x7186ef */ __asm { MOV EAX,dword ptr [R11 + -0x4f01] }
    /* +0x7186f6 */ __asm { LEA R8,[RBP + 0x1a40] }
    /* +0x7186fd */ __asm { SYSCALL }
    /* +0x7186ff */ __asm { MOV qword ptr [RBP + 0x1a40],RCX }
    /* +0x718706 */ __asm { MOV EAX,dword ptr [R14 + -0x6c02] }
    /* +0x71870d */ __asm { MOV R10,R13 }
    /* +0x718710 */ __asm { JMP 0x7fffa4e89b5c }
    /* +0x718715 */ __asm { CMP R8D,0x3 }
    /* +0x718719 */ __asm { JZ 0x7fffa4e88fd8 }
    /* +0x71871f */ __asm { LEA R11,[0x7fffa47c0dba] }
    /* +0x718726 */ __asm { MOV RCX,-0x278f471b0de6b271 }
    /* +0x718730 */ __asm { CMP R11,RCX }
    /* +0x718733 */ __asm { JZ 0x7fffa4e89bd9 }
    /* +0x718739 */ __asm { MOV AX,0xff6d }
    /* +0x71873d */ __asm { SUB EAX,dword ptr [RBP + 0x11c0] }
    /* +0x718743 */ __asm { MOV R9,qword ptr [RBP + 0x820] }
    /* +0x71874a */ __asm { MOV ECX,R9D }
    /* +0x71874d */ __asm { ROR AX,CL }
    /* +0x718750 */ __asm { MOV RCX,qword ptr [RBP + 0x1350] }
    /* +0x718757 */ __asm { ROL AX,CL }
    /* +0x71875a */ __asm { MOV R10,qword ptr [RBP + 0x410] }
    /* +0x718761 */ __asm { ADD EAX,R10D }
    /* +0x718764 */ __asm { MOV RDI,qword ptr [RBP + 0x430] }
    /* +0x71876b */ __asm { XOR EAX,EDI }
    /* +0x71876d */ __asm { SUB EAX,dword ptr [RBP + 0x448] }
    /* +0x718773 */ __asm { XOR EAX,0xffffa773 }
    /* +0x718778 */ __asm { MOV CX,0x194b }
    /* +0x71877c */ __asm { ADD ECX,0xffffadb0 }
    /* +0x718782 */ __asm { MOV R8,qword ptr [RBP + 0x1598] }
    /* +0x718789 */ __asm { IMUL R8D,ECX }
    /* +0x71878d */ __asm { ADD R8D,R10D }
    /* +0x718790 */ __asm { MOV RCX,qword ptr [RBP + 0x860] }
    /* +0x718797 */ __asm { MOV EDX,ECX }
    /* +0x718799 */ __asm { IMUL EDX,R8D }
    /* +0x71879d */ __asm { MOV ECX,R9D }
    /* +0x7187a0 */ __asm { ROR DX,CL }
    /* +0x7187a3 */ __asm { SUB EAX,dword ptr [RBP + 0x1638] }
    /* +0x7187a9 */ __asm { MOVSX R10,AX }
    /* +0x7187ad */ __asm { MOV RCX,qword ptr [RBP + 0xe90] }
    /* +0x7187b4 */ __asm { MOV R8D,ECX }
    /* +0x7187b7 */ __asm { IMUL R8D,EDX }
    /* +0x7187bb */ __asm { MOV R9,R11 }
    /* +0x7187be */ __asm { ADD R9,R10 }
    /* +0x7187c1 */ __asm { XOR R8D,0x77f }
    /* +0x7187c8 */ __asm { ADD R8D,EDI }
    /* +0x7187cb */ __asm { MOV RCX,qword ptr [RBP + 0x3a0] }
    /* +0x7187d2 */ __asm { ROL R8W,CL }
    /* +0x7187d6 */ __asm { MOVZX EDX,uint8_t ptr [R10 + R11*0x1 + 0x9] }
    /* +0x7187dc */ __asm { MOVZX ECX,uint8_t ptr [R9 + RDX*0x4 + 0xf] }
    /* +0x7187e2 */ __asm { NOT CL }
    /* +0x7187e4 */ __asm { ROL CL,0x5 }
    /* +0x7187e7 */ __asm { MOV uint8_t ptr [RBP + 0x1a40],CL }
    /* +0x7187ed */ __asm { MOVZX ECX,uint8_t ptr [R9 + RDX*0x4 + 0x10] }
    /* +0x7187f3 */ __asm { NOT CL }
    /* +0x7187f5 */ __asm { ROL CL,0x5 }
    /* +0x7187f8 */ __asm { MOV uint8_t ptr [RBP + 0x1a41],CL }
    /* +0x7187fe */ __asm { MOVZX ECX,uint8_t ptr [R9 + RDX*0x4 + 0x11] }
    /* +0x718804 */ __asm { NOT CL }
    /* +0x718806 */ __asm { ROL CL,0x5 }
    /* +0x718809 */ __asm { MOV uint8_t ptr [RBP + 0x1a42],CL }
    /* +0x71880f */ __asm { MOVZX ECX,uint8_t ptr [R9 + RDX*0x4 + 0x12] }
    /* +0x718815 */ __asm { NOT CL }
    /* +0x718817 */ __asm { ROL CL,0x5 }
    /* +0x71881a */ __asm { MOV uint8_t ptr [RBP + 0x1a43],CL }
    /* +0x718820 */ __asm { MOV ECX,0x9102c3cc }
    /* +0x718825 */ __asm { XOR ECX,dword ptr [RBP + 0x1a40] }
    /* +0x71882b */ __asm { MOV EDX,0x1 }
    /* +0x718830 */ __asm { SHL EDX,CL }
    /* +0x718832 */ __asm { AND EDX,ECX }
    /* +0x718834 */ __asm { MOVZX ECX,R8W }
    /* +0x718838 */ __asm { CMP EDX,ECX }
    /* +0x71883a */ __asm { JNZ 0x7fffa4e89347 }
    /* +0x718840 */ __asm { MOV R8W,0x18d3 }
    /* +0x718845 */ __asm { NOT R8D }
    /* +0x718848 */ __asm { MOV RCX,qword ptr [RBP + 0x430] }
    /* +0x71884f */ __asm { MOV EDX,ECX }
    /* +0x718851 */ __asm { SUB EDX,dword ptr [RBP + 0x1638] }
    /* +0x718857 */ __asm { PXOR XMM0,XMM0 }
    /* +0x71885b */ __asm { ADD R8D,dword ptr [RBP + 0x820] }
    /* +0x718862 */ __asm { MOV RCX,qword ptr [RBP + 0x11c0] }
    /* +0x718869 */ __asm { ROL R8W,CL }
    /* +0x71886d */ __asm { MOVDQA xmmword ptr [RBP + 0x1a40],XMM0 }
    /* +0x718875 */ __asm { ADD R8D,EDX }
    /* +0x718878 */ __asm { XOR R8D,0xffff8912 }
    /* +0x71887f */ __asm { IMUL ECX,R8D,-0x212d }
    /* +0x718886 */ __asm { MOV R10,qword ptr [RBP + 0x1350] }
    /* +0x71888d */ __asm { MOV R8D,R10D }
    /* +0x718890 */ __asm { XOR R8D,ECX }
    /* +0x718893 */ __asm { NOT R8D }
    /* +0x718896 */ __asm { MOVZX EAX,R8W }
    /* +0x71889a */ __asm { MOV RCX,qword ptr GS:[RAX] }
    /* +0x71889e */ __asm { MOV R10,0x5a0d715a5a3469a9 }
    /* +0x7188a8 */ __asm { CMP qword ptr [RCX + 0x790],R10 }
    /* +0x7188af */ __asm { NOP }
    /* +0x7188b0 */ __asm { NOP }
    /* +0x7188b1 */ __asm { NOP }
    /* +0x7188b2 */ __asm { NOP }
    /* +0x7188b3 */ __asm { NOP }
    /* +0x7188b4 */ __asm { MOV dword ptr [RBP + 0x1a40],0x0 }
    /* +0x7188be */ __asm { MOV dword ptr [RBP + 0x30],0xe89fd4eb }
    /* +0x7188c5 */ __asm { MOV ECX,dword ptr [RBP + 0x30] }
    /* +0x7188c8 */ __asm { LEA R11,[0x7fffa47876ec] }
    /* +0x7188cf */ __asm { MOV RCX,-0x681e652e1e842afd }
    /* +0x7188d9 */ __asm { CMP R11,RCX }
    /* +0x7188dc */ __asm { NOP }
    /* +0x7188dd */ __asm { NOP }
    /* +0x7188de */ __asm { NOP }
    /* +0x7188df */ __asm { NOP }
    /* +0x7188e0 */ __asm { NOP }
    /* +0x7188e1 */ __asm { MOV CX,0xe119 }
    /* +0x7188e5 */ __asm { MOV qword ptr [RBP + 0x30],RDX }
    /* +0x7188e9 */ __asm { MOV RAX,qword ptr [RBP + 0x410] }
    /* +0x7188f0 */ __asm { SUB ECX,EAX }
    /* +0x7188f2 */ __asm { MOV R8W,0xc88f }
    /* +0x7188f7 */ __asm { MOV R14D,dword ptr [RBP + 0xd90] }
    /* +0x7188fe */ __asm { IMUL R14D,ECX }
    /* +0x718902 */ __asm { MOV ECX,0x61a6acf4 }
    /* +0x718907 */ __asm { IMUL ECX,dword ptr [RBP + 0x8c0] }
    /* +0x71890e */ __asm { NOT ECX }
    /* +0x718910 */ __asm { SUB ECX,EAX }
    /* +0x718912 */ __asm { ROL ECX,0x11 }
    /* +0x718915 */ __asm { NOT ECX }
    /* +0x718917 */ __asm { MOVD XMM0,ECX }
    /* +0x71891b */ __asm { MOV R10,qword ptr [RBP + 0x11c0] }
    /* +0x718922 */ __asm { ADD R14D,R10D }
    /* +0x718925 */ __asm { XOR R14D,0xa13c }
    /* +0x71892c */ __asm { MOV RAX,qword ptr [RBP + 0x430] }
    /* +0x718933 */ __asm { MOV ECX,EAX }
    /* +0x718935 */ __asm { ROL R14W,CL }
    /* +0x718939 */ __asm { MOV RSI,qword ptr [RBP + 0x820] }
    /* +0x718940 */ __asm { MOV ECX,ESI }
    /* +0x718942 */ __asm { ROR R14W,CL }
    /* +0x718946 */ __asm { MOV R9,qword ptr [RBP + 0x990] }
    /* +0x71894d */ __asm { SUB R9D,R10D }
    /* +0x718950 */ __asm { PMULUDQ XMM0,xmmword ptr [RBP + 0x530] }
    /* +0x718958 */ __asm { SUB R8D,dword ptr [RBP + 0x3a0] }
    /* +0x71895f */ __asm { MOVD EDX,XMM0 }
    /* +0x718963 */ __asm { MOV ECX,EAX }
    /* +0x718965 */ __asm { ROL EDX,CL }
    /* +0x718967 */ __asm { MOV ECX,R10D }
    /* +0x71896a */ __asm { ROR R8W,CL }
    /* +0x71896e */ __asm { MOVD XMM0,R9D }
    /* +0x718973 */ __asm { MOVD XMM4,EDX }
    /* +0x718977 */ __asm { MOV ECX,0x3381 }
    /* +0x71897c */ __asm { SUB ECX,R8D }
    /* +0x71897f */ __asm { NOT R14D }
    /* +0x718982 */ __asm { ADD R14D,dword ptr [RBP + 0x1638] }
    /* +0x718989 */ __asm { ROL CX,0x4 }
    /* +0x71898d */ __asm { MOVZX EDX,R14W }
    /* +0x718991 */ __asm { NOT ECX }
    /* +0x718993 */ __asm { SUB ECX,dword ptr [RBP + 0x1350] }
    /* +0x718999 */ __asm { LEA R12,[0x7fffa4781636] }
    /* +0x7189a0 */ __asm { MOV EAX,dword ptr [R11 + -0x30d0] }
    /* +0x7189a7 */ __asm { PADDD XMM4,XMM0 }
    /* +0x7189ab */ __asm { MOV R11,qword ptr [RBP + 0x860] }
    /* +0x7189b2 */ __asm { IMUL R11D,ECX }
    /* +0x7189b6 */ __asm { MOVD ECX,XMM4 }
    /* +0x7189ba */ __asm { MOVSXD R10,ECX }
    /* +0x7189bd */ __asm { SUB R11D,ESI }
    /* +0x7189c0 */ __asm { MOVZX R9D,R11W }
    /* +0x7189c4 */ __asm { LEA R8,[RBP + 0x1a40] }
    /* +0x7189cb */ __asm { SYSCALL }
    /* +0x7189cd */ __asm { MOV RCX,-0x3c436e1f23d87785 }
    /* +0x7189d7 */ __asm { CMP R12,RCX }
    /* +0x7189da */ __asm { JZ 0x7fffa4e89bec }
    /* +0x7189e0 */ __asm { MOV R8D,0x448b6bd9 }
    /* +0x7189e6 */ __asm { MOV EDX,0xf56d5ed1 }
    /* +0x7189eb */ __asm { MOV R10,qword ptr [RBP + 0x430] }
    /* +0x7189f2 */ __asm { SUB R8D,R10D }
    /* +0x7189f5 */ __asm { MOV RCX,qword ptr [RBP + 0x410] }
    /* +0x7189fc */ __asm { ROR R8D,CL }
    /* +0x7189ff */ __asm { MOV R11,qword ptr [RBP + 0x820] }
    /* +0x718a06 */ __asm { ADD EDX,R11D }
    /* +0x718a09 */ __asm { NOT EDX }
    /* +0x718a0b */ __asm { MOV RAX,qword ptr [RBP + 0x1638] }
    /* +0x718a12 */ __asm { ADD EDX,EAX }
    /* +0x718a14 */ __asm { MOV RCX,qword ptr [RBP + 0x448] }
    /* +0x718a1b */ __asm { ROR EDX,CL }
    /* +0x718a1d */ __asm { XOR EDX,R10D }
    /* +0x718a20 */ __asm { ROL EDX,0x2 }
    /* +0x718a23 */ __asm { MOV R10,qword ptr [RBP + 0xd40] }
    /* +0x718a2a */ __asm { IMUL R10D,EDX }
    /* +0x718a2e */ __asm { MOV RCX,qword ptr [RBP + 0x11c0] }
    /* +0x718a35 */ __asm { ROR R10D,CL }
    /* +0x718a38 */ __asm { SUB R8D,EAX }
    /* +0x718a3b */ __asm { XOR R8D,R11D }
    /* +0x718a3e */ __asm { MOV EDX,0x5c0844d7 }
    /* +0x718a43 */ __asm { SUB EDX,R8D }
    /* +0x718a46 */ __asm { XOR EDX,dword ptr [RBP + 0x14e8] }
    /* +0x718a4c */ __asm { ROR EDX,CL }
    /* +0x718a4e */ __asm { MOV qword ptr [RBP + 0x1a40],RCX }
    /* +0x718a55 */ __asm { MOV EAX,dword ptr [R10 + R12*0x1 + 0x54] }
    /* +0x718a5a */ __asm { NOT EDX }
    /* +0x718a5c */ __asm { MOVSXD R10,EDX }
    /* +0x718a5f */ __asm { JMP 0x7fffa4e89b5c }
    /* +0x718a64 */ __asm { MOV R10,-0x473da12a4d27cec4 }
    /* +0x718a6e */ __asm { MOV R11D,0x20054a4e }
    /* +0x718a74 */ __asm { NOT R10 }
    /* +0x718a77 */ __asm { MOV RAX,qword ptr [RBP + 0x1938] }
    /* +0x718a7e */ __asm { ADD RAX,0x69da9bc7 }
    /* +0x718a84 */ __asm { MOVQ XMM0,RAX }
    /* +0x718a89 */ __asm { MOV RCX,qword ptr [RBP + 0x430] }
    /* +0x718a90 */ __asm { MOV RDX,qword ptr [RBP + 0x820] }
    /* +0x718a97 */ __asm { ADD RCX,RDX }
    /* +0x718a9a */ __asm { ADD R10,RCX }
    /* +0x718a9d */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x718aa4 */ __asm { ROR R10,CL }
    /* +0x718aa7 */ __asm { XOR R10,qword ptr [RBP + 0x11c0] }
    /* +0x718aae */ __asm { MOVQ XMM4,R10 }
    /* +0x718ab3 */ __asm { PADDQ XMM4,XMM0 }
    /* +0x718ab7 */ __asm { PXOR XMM4,xmmword ptr [0x7fffa56bafc0] }
    /* +0x718abf */ __asm { PADDQ XMM4,xmmword ptr [RBP + 0x15e0] }
    /* +0x718ac7 */ __asm { MOVQ RCX,XMM4 }
    /* +0x718acc */ __asm { CMP R11,RCX }
    /* +0x718acf */ __asm { JNZ 0x7fffa4e88adb }
    /* +0x718ad1 */ __asm { INSD RDI,DX }
    /* +0x718adb */ __asm { MOV EAX,dword ptr [R11 + 0x5ff8b876] }
    /* +0x718ae2 */ __asm { MOV RCX,0x5555555555555556 }
    /* +0x718aec */ __asm { IMUL RAX,RCX }
    /* +0x718af0 */ __asm { MOV RCX,0x5555555555555555 }
    /* +0x718afa */ __asm { CMP RAX,RCX }
    /* +0x718afd */ __asm { JBE 0x7fffa4e89559 }
    /* +0x718b03 */ __asm { PXOR XMM0,XMM0 }
    /* +0x718b07 */ __asm { MOVDQA xmmword ptr [RBP + 0x1a40],XMM0 }
    /* +0x718b0f */ __asm { MOV R8W,0x7b01 }
    /* +0x718b14 */ __asm { IMUL R8D,dword ptr [RBP + 0x1248] }
    /* +0x718b1c */ __asm { MOV RCX,qword ptr [RBP + 0xf98] }
    /* +0x718b23 */ __asm { ROL R8W,CL }
    /* +0x718b27 */ __asm { IMUL R8D,R8D,0x4651 }
    /* +0x718b2e */ __asm { NOT R8D }
    /* +0x718b31 */ __asm { MOV R14,qword ptr [RBP + 0x820] }
    /* +0x718b38 */ __asm { ADD R8D,R14D }
    /* +0x718b3b */ __asm { MOV RDI,qword ptr [RBP + 0x430] }
    /* +0x718b42 */ __asm { XOR R8D,EDI }
    /* +0x718b45 */ __asm { MOV R11,qword ptr [RBP + 0x1638] }
    /* +0x718b4c */ __asm { MOV ECX,R11D }
    /* +0x718b4f */ __asm { ROL R8W,CL }
    /* +0x718b53 */ __asm { ROL R8W,0x3 }
    /* +0x718b58 */ __asm { MOV RSI,qword ptr [RBP + 0x11c0] }
    /* +0x718b5f */ __asm { MOV ECX,ESI }
    /* +0x718b61 */ __asm { ROL R8W,CL }
    /* +0x718b65 */ __asm { MOVZX EAX,R8W }
    /* +0x718b69 */ __asm { MOV RCX,qword ptr GS:[RAX] }
    /* +0x718b6d */ __asm { MOV R8W,0x4f }
    /* +0x718b72 */ __asm { MOV R10,qword ptr [RCX + 0x18] }
    /* +0x718b76 */ __asm { MOV RAX,qword ptr [RBP + 0x410] }
    /* +0x718b7d */ __asm { ADD R8D,EAX }
    /* +0x718b80 */ __asm { MOVD XMM0,R8D }
    /* +0x718b85 */ __asm { MOVD XMM4,EDI }
    /* +0x718b89 */ __asm { PXOR XMM4,XMM0 }
    /* +0x718b8d */ __asm { MOVD EDX,XMM4 }
    /* +0x718b91 */ __asm { MOV RCX,qword ptr [RBP + 0x1350] }
    /* +0x718b98 */ __asm { LEA R8D,[RCX + RDX*0x1] }
    /* +0x718b9c */ __asm { NOT R8D }
    /* +0x718b9f */ __asm { MOV R9,qword ptr [RBP + 0x14e8] }
    /* +0x718ba6 */ __asm { ADD R8D,R9D }
    /* +0x718ba9 */ __asm { MOV ECX,R14D }
    /* +0x718bac */ __asm { ROL R8W,CL }
    /* +0x718bb0 */ __asm { ADD R8D,ESI }
    /* +0x718bb3 */ __asm { MOV EDX,0x7a7dda39 }
    /* +0x718bb8 */ __asm { ADD EDX,EAX }
    /* +0x718bba */ __asm { MOV ECX,ESI }
    /* +0x718bbc */ __asm { ROL EDX,CL }
    /* +0x718bbe */ __asm { NOT R8D }
    /* +0x718bc1 */ __asm { MOVZX EAX,R8W }
    /* +0x718bc5 */ __asm { XOR EDX,EDI }
    /* +0x718bc7 */ __asm { MOV ECX,R9D }
    /* +0x718bca */ __asm { ROL EDX,CL }
    /* +0x718bcc */ __asm { XOR EDX,0x56abde8a }
    /* +0x718bd2 */ __asm { MOV ECX,R11D }
    /* +0x718bd5 */ __asm { ROL EDX,CL }
    /* +0x718bd7 */ __asm { SUB R10,qword ptr GS:[RAX] }
    /* +0x718bdb */ __asm { XOR EDX,R14D }
    /* +0x718bde */ __asm { LEA RCX,[R10 + RDX*0x1] }
    /* +0x718be2 */ __asm { ADD RCX,-0x808 }
    /* +0x718be9 */ __asm { XOR RCX,0x6732087a }
    /* +0x718bf0 */ __asm { MOV R10,-0x24fc725289d8facf }
    /* +0x718bfa */ __asm { CMP RCX,R10 }
    /* +0x718bfd */ __asm { JZ 0x7fffa4e89bc8 }
    /* +0x718c03 */ __asm { MOV dword ptr [RBP + 0x1a40],0x0 }
    /* +0x718c0d */ __asm { MOV dword ptr [RBP + 0x30],0xf29b688c }
    /* +0x718c14 */ __asm { MOV R8D,dword ptr [RBP + 0x30] }
    /* +0x718c18 */ __asm { MOV EDX,0xfd10b28d }
    /* +0x718c1d */ __asm { IMUL EDX,dword ptr [RBP + 0x4c8] }
    /* +0x718c24 */ __asm { XOR EDX,dword ptr [RBP + 0x1350] }
    /* +0x718c2a */ __asm { MOV RCX,qword ptr [RBP + 0x410] }
    /* +0x718c31 */ __asm { ROR EDX,CL }
    /* +0x718c33 */ __asm { MOV EAX,0x66ae8311 }
    /* +0x718c38 */ __asm { SUB EAX,EDX }
    /* +0x718c3a */ __asm { MOV RCX,qword ptr [RBP + 0x820] }
    /* +0x718c41 */ __asm { ROR EAX,CL }
    /* +0x718c43 */ __asm { MOV RCX,qword ptr [RBP + 0x11c0] }
    /* +0x718c4a */ __asm { ROL EAX,CL }
    /* +0x718c4c */ __asm { SUB EAX,dword ptr [RBP + 0x430] }
    /* +0x718c52 */ __asm { ROL EAX,0x12 }
    /* +0x718c55 */ __asm { XOR ECX,ECX }
    /* +0x718c57 */ __asm { CMP RAX,0xdaacad4 }
    /* +0x718c5d */ __asm { SETNZ CL }
    /* +0x718c60 */ __asm { OR ECX,0x581483a6 }
    /* +0x718c66 */ __asm { CMP R8D,ECX }
    /* +0x718c69 */ __asm { JBE 0x7fffa4e89bfc }
    /* +0x718c6f */ __asm { MOV R8D,0x9a8199f7 }
    /* +0x718c75 */ __asm { MOV R9,qword ptr [RBP + 0x430] }
    /* +0x718c7c */ __asm { XOR R8D,R9D }
    /* +0x718c7f */ __asm { MOV RSI,qword ptr [RBP + 0x410] }
    /* +0x718c86 */ __asm { MOV ECX,ESI }
    /* +0x718c88 */ __asm { ROL R8D,CL }
    /* +0x718c8b */ __asm { ROL R8D,0x8 }
    /* +0x718c8f */ __asm { MOV R10,qword ptr [RBP + 0x1638] }
    /* +0x718c96 */ __asm { XOR R8D,R10D }
    /* +0x718c99 */ __asm { MOV RDI,qword ptr [RBP + 0x11c0] }
    /* +0x718ca0 */ __asm { MOV ECX,EDI }
    /* +0x718ca2 */ __asm { ROR R8D,CL }
    /* +0x718ca5 */ __asm { NOT R8D }
    /* +0x718ca8 */ __asm { IMUL R8D,dword ptr [RBP + 0xf10] }
    /* +0x718cb0 */ __asm { NOT R8D }
    /* +0x718cb3 */ __asm { IMUL ECX,R8D,-0x3d2f9b5f }
    /* +0x718cba */ __asm { MOV dword ptr [RBP + 0x30],ECX }
}


// ============================================================================
// Function : Unwind@7fffa4e89ca0  |  RVA: 0x719ca0  |  Size: 461 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e89ca0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  code *pcVar4;
  
  uVar1 = *(uint64_t *)(param_2 + 0x1560);
  if (7 < *(uint64_t *)(param_2 + 0xe98)) {
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x490) & 0x1f;
    uVar3 = (~((0x733f593bU >> bVar2 | 0x733f593b << 0x20 - bVar2) ^ *(uint32_t *)(param_2 + 0x13d0)) -
             (int)*(uint64_t *)(param_2 + 0x16b8) ^ *(uint32_t *)(param_2 + 0xa10)) *
            (int)*(uint64_t *)(param_2 + 0x1778);
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1240) & 0x1f;
    pcVar4 = (code *)((int64_t)(int)(uVar3 << bVar2 | uVar3 >> 0x20 - bVar2) + 0x7fffa569649b);
    (*pcVar4)(*(uint64_t *)(param_2 + 0x490) & 0xffffffff,pcVar4,
              *(uint64_t *)(param_2 + 0x23f0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x23f0));
  }
  *(uint64_t *)(param_2 + 0x2408) = 7;
  *(uint16_t *)(param_2 + 0x23f0) = 0;
  *(uint64_t *)(param_2 + 0x2400) = 0;
  *(uint64_t *)(param_2 + 0x14b8) = uVar1;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e89e70  |  RVA: 0x719e70  |  Size: 356 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e89e70(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  if (*(int64_t *)(param_2 + 0x6a8) != 0) {
    uVar2 = (uint16_t)*(uint64_t *)(param_2 + 0x16b8) ^ 0x3f64;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x490) & 0xf;
    (*(code *)(&UNK_7fffa5084034 +
              (short)((short)*(uint64_t *)(param_2 + 0x11c0) *
                     ((short)*(uint64_t *)(param_2 + 0x1618) *
                      ((short)*(uint32_t *)(param_2 + 0x1718) *
                       ~((short)*(uint64_t *)(param_2 + 0x690) *
                         (uVar2 << bVar1 | uVar2 >> 0x10 - bVar1) +
                        (short)*(uint32_t *)(param_2 + 0x1018)) -
                      (short)*(uint32_t *)(param_2 + 0x4b0)) ^ 0x86cb))))
              (*(int64_t *)(param_2 + 0x6a8));
  }
  *(uint64_t *)(param_2 + 0x1098) = *(uint64_t *)(param_2 + 0x1a58);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e89fe0  |  RVA: 0x719fe0  |  Size: 422 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e89fe0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  uVar1 = param_2 + 0x1ac0;
  uVar3 = ~(((int)*(uint64_t *)(param_2 + 0x8a0) + -0x14219725) * 0x5b0c34df);
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x4b0) & 0x1f;
  (*(code *)((int64_t)
             (int)(((int)*(uint64_t *)(param_2 + 0x16b8) - (int)*(uint64_t *)(param_2 + 0x490))
                   + (int)*(uint64_t *)(param_2 + 0x1240) +
                  (uVar3 << bVar2 | uVar3 >> 0x20 - bVar2)) + 0x7fffa549a644))
            ((uVar1 * 0x40 | uVar1 >> 0x3a) ^ (uVar1 * 0x80000000 | uVar1 >> 0x21) ^ uVar1);
  *(uint64_t *)(param_2 + 0x1098) = *(uint64_t *)(param_2 + 0x1a58);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8a190  |  RVA: 0x71a190  |  Size: 468 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8a190(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  uVar3 = *(int *)(param_2 + 0x460) + 0xa0b71a8a;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x9f8) & 0x1f;
  uVar3 = ((uVar3 << bVar2 | uVar3 >> 0x20 - bVar2) * *(int *)(param_2 + 0x850) ^
          *(uint32_t *)(param_2 + 0x13d0)) * *(int *)(param_2 + 0x1778);
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0x1f;
  uVar1 = param_2 + 0x1ac0;
  (*(code *)((int64_t)
             (int)(((uVar3 << bVar2 | uVar3 >> 0x20 - bVar2) - *(int *)(param_2 + 0x490)) +
                  0x1004a359) + 0x7fffa549ef05))
            ((uVar1 * 0x80000000 | uVar1 >> 0x21) ^ (uVar1 * 0x40 | uVar1 >> 0x3a) ^ uVar1);
  *(uint64_t *)(param_2 + 0x1098) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8a370  |  RVA: 0x71a370  |  Size: 443 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8a370(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  uVar1 = *(uint64_t *)(param_2 + 0x14b8);
  if (7 < *(uint64_t *)(param_2 + 0x1408)) {
    uVar3 = (*(int *)(param_2 + 0xc50) + -0x7a2a1fb9) * *(int *)(param_2 + 0x1778);
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
    uVar3 = uVar3 << bVar2 | uVar3 >> 0x20 - bVar2;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xe40) & 0x1f;
    uVar3 = (uVar3 >> bVar2 | uVar3 << 0x20 - bVar2) * *(int *)(param_2 + 0x850) ^ 0xc632b97e;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x490) & 0x1f;
    (*(code *)((int64_t)(int)((uVar3 >> bVar2 | uVar3 << 0x20 - bVar2) + *(int *)(param_2 + 0x8a0))
              + 0x7fffa5697536))
              (*(uint64_t *)(param_2 + 0x1240),
               ((uint32_t)*(uint64_t *)(param_2 + 0x16b8) ^ 0x1133f5e5) * *(int *)(param_2 + 0xdc0) +
               ((int)*(uint64_t *)(param_2 + 0x1760) - *(int *)(param_2 + 0x13d0)),
               *(uint64_t *)(param_2 + 0x13f0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13f0));
  }
  *(uint64_t *)(param_2 + 0xf50) = uVar1;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8a530  |  RVA: 0x71a530  |  Size: 482 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8a530(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  code *pcVar7;
  uint32_t uVar8;
  
  puVar3 = *(uint64_t **)(param_2 + 0xf50);
  if ((uint64_t *)(param_2 + 0x1ac0) != puVar3) {
    uVar4 = *(uint64_t *)(param_2 + 0x1240);
    uVar5 = *(uint64_t *)(param_2 + 0x490);
    iVar1 = *(int *)(param_2 + 0x1470);
    iVar2 = *(int *)(param_2 + 0x13d0);
    uVar6 = puVar3[-1];
    while( true ) {
      puVar3 = puVar3 + -4;
      if (7 < uVar6) {
        uVar8 = 0xbf4596ba -
                (((uint32_t)*(uint64_t *)(param_2 + 0x16b8) ^ 0x63e78145) + ((int)uVar4 - iVar2));
        pcVar7 = (code *)((int64_t)
                          (int)(((uVar8 * 0x8000000 | uVar8 >> 5) ^ *(uint32_t *)(param_2 + 0x4b0)) +
                               ((int)uVar5 - iVar1)) + 0x7fffa5696b70);
        (*pcVar7)(*(uint64_t *)(param_2 + 0x8a0),pcVar7,*puVar3 >> 0x3d ^ *puVar3);
      }
      *(uint16_t *)puVar3 = 0;
      puVar3[2] = 0;
      puVar3[3] = 7;
      if (puVar3 == (uint64_t *)(param_2 + 0x1ac0)) break;
      uVar6 = puVar3[-1];
    }
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8a720  |  RVA: 0x71a720  |  Size: 414 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8a720(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  code *pcVar3;
  
  if (7 < *(uint64_t *)(param_2 + 0x2258)) {
    uVar2 = ~(~((uint16_t)*(uint64_t *)(param_2 + 0x490) ^ 0x4da9) * -0x357b);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1358) & 0xf;
    uVar2 = ((uVar2 << bVar1 | uVar2 >> 0x10 - bVar1) ^ (uint16_t)*(uint64_t *)(param_2 + 0x4b0)) *
            0x282b;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0xf;
    uVar2 = uVar2 >> bVar1 | uVar2 << 0x10 - bVar1;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1240) & 0xf;
    pcVar3 = (code *)((int64_t)(short)(uVar2 << bVar1 | uVar2 >> 0x10 - bVar1) + 0x7fffa568b31b);
    (*pcVar3)(*(uint64_t *)(param_2 + 0x16b8) & 0xffffffff,pcVar3,
              *(uint64_t *)(param_2 + 0x2240) >> 0x3d ^ *(uint64_t *)(param_2 + 0x2240));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8a8c0  |  RVA: 0x71a8c0  |  Size: 405 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8a8c0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  code *pcVar3;
  uint16_t uVar4;
  
  if ((*(char *)(param_2 + 0x1ae0) == '\x01') && (0xf < *(uint64_t *)(param_2 + 0x1ad8))) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x13d0) & 0xf;
    uVar4 = (uint16_t)((*(int *)(param_2 + 0x490) + 0x437a) -
                    (uint32_t)(uint16_t)((short)*(uint64_t *)(param_2 + 0x1240) +
                                  (short)*(uint32_t *)(param_2 + 0x1790)));
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0xf;
    uVar4 = (uint16_t)((uint32_t)(uint16_t)(uVar4 >> bVar1 | uVar4 << 0x10 - bVar1) +
                    *(int *)(param_2 + 0x4b0));
    pcVar3 = (code *)((int64_t)(short)(uVar4 >> bVar2 | uVar4 << 0x10 - bVar2) + 0x7fffa568875d);
    (*pcVar3)(pcVar3,0x7fffa568875d,
              *(uint64_t *)(param_2 + 0x1ac0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1ac0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8aa60  |  RVA: 0x71aa60  |  Size: 431 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8aa60(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  uVar3 = (*(uint32_t *)(param_2 + 0x13d0) ^ 0x3292eaef) * *(int *)(param_2 + 0xdc0);
  uVar1 = param_2 + 0x1ac0;
  uVar3 = ~(uVar3 * 0x80 | uVar3 >> 0x19) + *(int *)(param_2 + 0x8a0);
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
  uVar3 = (uVar3 >> bVar2 | uVar3 << 0x20 - bVar2) + 0x803ead86;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xe40) & 0x1f;
  (*(code *)((int64_t)(int)((uVar3 >> bVar2 | uVar3 << 0x20 - bVar2) + *(int *)(param_2 + 0x1240))
            + 0x7fffa5498dc7))
            ((uVar1 * 0x80000000 | uVar1 >> 0x21) ^ (uVar1 * 0x40 | uVar1 >> 0x3a) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8ac10  |  RVA: 0x71ac10  |  Size: 359 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8ac10(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  
  if (*(int64_t *)(param_2 + 0x1268) != 0) {
    uVar2 = ~((short)*(uint32_t *)(param_2 + 0x8a0) + 0x9d4bU);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x490) & 0xf;
    uVar3 = (uint32_t)(uint16_t)(uVar2 << bVar1 | uVar2 >> 0x10 - bVar1) +
            ((int)*(uint64_t *)(param_2 + 0xb88) - *(int *)(param_2 + 0x690)) ^
            *(uint32_t *)(param_2 + 0x4b0);
    uVar2 = ((uint16_t)uVar3 >> 1 | (uint16_t)((uVar3 & 1) != 0) << 0xf) +
            (short)*(uint32_t *)(param_2 + 0x1220);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0xf;
    (*(code *)((int64_t)
               (short)((uint16_t)*(uint64_t *)(param_2 + 0x13d0) ^
                      (uVar2 >> bVar1 | uVar2 << 0x10 - bVar1)) + 0x7fffa508980b))
              (*(int64_t *)(param_2 + 0x1268));
  }
  *(uint64_t *)(param_2 + 0x1098) = *(uint64_t *)(param_2 + 0x1a58);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8ad80  |  RVA: 0x71ad80  |  Size: 424 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8ad80(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  uint32_t *puVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  
  if (*(int64_t *)(param_2 + 0x4b8) != 0) {
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x4b0) & 0xf;
    uVar4 = (0x70a3 << bVar3 | 0x70a3U >> 0x10 - bVar3) ^ (uint16_t)*(uint32_t *)(param_2 + 0x490);
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x1240) & 0xf;
    uVar4 = (uVar4 >> bVar3 | uVar4 << 0x10 - bVar3) - (short)*(uint32_t *)(param_2 + 0xa10);
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x1220) & 0xf;
    uVar4 = (uVar4 << bVar3 | uVar4 >> 0x10 - bVar3) + (short)*(uint64_t *)(param_2 + 0x13d0);
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0xf;
    (*(code *)((int64_t)
               (short)(((uint16_t)*(uint64_t *)(param_2 + 0x16b8) ^
                       (uVar4 >> bVar3 | uVar4 << 0x10 - bVar3)) +
                      (short)*(uint32_t *)(param_2 + 0x690)) + 0x7fffa5084bd6))
              (*(int64_t *)(param_2 + 0x4b8));
  }
  piVar1 = (int *)(*(int64_t *)(param_2 + 0x16d8) + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar2 = *(uint32_t **)(param_2 + 0x16d8);
    LOCK();
    *puVar2 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar2 + 2);
  }
  *(uint64_t *)(param_2 + 0x1098) = *(uint64_t *)(param_2 + 0x1a58);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8af30  |  RVA: 0x71af30  |  Size: 310 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8af30(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  if (*(int64_t *)(param_2 + 0x17e8) != 0) {
    uVar2 = (0x102cddb9U - *(int *)(param_2 + 0x490) ^ *(uint32_t *)(param_2 + 0x1240)) + 0x691c67a8;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0x1f;
    uVar2 = ~(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) + *(int *)(param_2 + 0x1230);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
    (*(code *)(&UNK_7fffa508dabe + (int)~(uVar2 << bVar1 | uVar2 >> 0x20 - bVar1)))
              (*(int64_t *)(param_2 + 0x17e8));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8b070  |  RVA: 0x71b070  |  Size: 573 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8b070(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  uint32_t uVar3;
  
  if (0xf < *(uint64_t *)(param_2 + 200)) {
    uVar3 = *(uint32_t *)(param_2 + 0x1240) ^ 0xf0bc2b4b;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x490) & 0x1f;
    uVar3 = uVar3 >> bVar1 | uVar3 << 0x20 - bVar1;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x4b0) & 0x1f;
    uVar3 = ~(uVar3 << bVar1 | uVar3 >> 0x20 - bVar1);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0x1f;
    pcVar2 = (code *)((int64_t)
                      (int)((uVar3 >> bVar1 | uVar3 << 0x20 - bVar1) - *(int *)(param_2 + 0x6e8)) +
                     0x7fffa5696964);
    (*pcVar2)(pcVar2,*(uint64_t *)(param_2 + 0x8a0),
              *(uint64_t *)(param_2 + 0xb0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xb0));
  }
  if (7 < *(uint64_t *)(param_2 + 0xa68)) {
    uVar3 = *(int *)(param_2 + 0x470) * 0x1326fbf0 ^ *(uint32_t *)(param_2 + 0x4b0);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x13d0) & 0x1f;
    uVar3 = (uVar3 >> bVar1 | uVar3 << 0x20 - bVar1) + (int)*(uint64_t *)(param_2 + 0x8a0);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
    pcVar2 = (code *)((int64_t)
                      (int)(~((uVar3 >> bVar1 | uVar3 << 0x20 - bVar1) ^
                             (uint32_t)*(uint64_t *)(param_2 + 0x1240)) + *(int *)(param_2 + 0x7a0)) +
                     0x7fffa5690e7b);
    (*pcVar2)(pcVar2,0x7fffa5690e7b,
              *(uint64_t *)(param_2 + 0xa50) >> 0x3d ^ *(uint64_t *)(param_2 + 0xa50));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8b2b0  |  RVA: 0x71b2b0  |  Size: 353 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8b2b0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  if (*(int64_t *)(param_2 + 0x998) != 0) {
    uVar2 = (int)*(uint64_t *)(param_2 + 0x4b0) + 0x11abcd1U ^ *(uint32_t *)(param_2 + 0x8a0);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x13d0) & 0x1f;
    uVar2 = (uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) * *(int *)(param_2 + 0x548);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1240) & 0x1f;
    (*(code *)((int64_t)
               (int)(((uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) * *(int *)(param_2 + 0xdc0) ^
                     SUB164(*(uint8_t (*) [16])(param_2 + 0x1290),0)) + 0x9c4b2e5b) +
              0x7fffa508bb2e))(*(int64_t *)(param_2 + 0x998));
  }
  *(uint64_t *)(param_2 + 0x1098) = *(uint64_t *)(param_2 + 0x1a58);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8b420  |  RVA: 0x71b420  |  Size: 398 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8b420(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  int iVar2;
  uint16_t uVar3;
  code *pcVar4;
  uint32_t uVar5;
  
  if (7 < *(uint64_t *)(param_2 + 0x2258)) {
    uVar5 = (uint32_t)CONCAT62((int6)((uint64_t)param_2 >> 0x10),0x8302) ^ *(uint32_t *)(param_2 + 0x4b0);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0xf;
    uVar3 = (uint16_t)uVar5;
    iVar2 = CONCAT22((short)(uVar5 >> 0x10),uVar3 << bVar1 | uVar3 >> 0x10 - bVar1);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x13d0) & 0xf;
    uVar3 = (uint16_t)((int)*(uint64_t *)(param_2 + 0x8e0) * iVar2);
    uVar3 = 0xa2c1 - (uVar3 << bVar1 | uVar3 >> 0x10 - bVar1) ^
            (uint16_t)*(uint32_t *)(param_2 + 0x1018);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x490) & 0xf;
    pcVar4 = (code *)((int64_t)
                      (short)((uVar3 >> bVar1 | uVar3 << 0x10 - bVar1) +
                             (short)*(uint64_t *)(param_2 + 0x1240)) + 0x7fffa568d3b6);
    (*pcVar4)(pcVar4,iVar2,
              *(uint64_t *)(param_2 + 0x2240) >> 0x3d ^ *(uint64_t *)(param_2 + 0x2240));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8b5b0  |  RVA: 0x71b5b0  |  Size: 417 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8b5b0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  code *pcVar3;
  
  uVar2 = (short)*(uint64_t *)(param_2 + 0x8a0) + 0x4a4a;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1240) & 0xf;
  uVar2 = (short)*(uint64_t *)(param_2 + 0x8e0) *
          ((short)*(uint64_t *)(param_2 + 0x13d0) + (uVar2 << bVar1 | uVar2 >> 0x10 - bVar1) ^
          (uint16_t)*(uint32_t *)(param_2 + 0x1568)) + (short)*(uint64_t *)(param_2 + 0x4b0);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x490) & 0xf;
  pcVar3 = (code *)((int64_t)(short)(uVar2 << bVar1 | uVar2 >> 0x10 - bVar1) + 0x7fffa568cd34);
  (*pcVar3)(*(uint64_t *)(param_2 + 0x1018),pcVar3,
            *(uint64_t *)(param_2 + 0x1470) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1470));
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8b760  |  RVA: 0x71b760  |  Size: 381 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8b760(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  uVar2 = 0xdff886ae - (int)*(uint64_t *)(param_2 + 0x13d0);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x16b8) & 0x1f;
  uVar2 = ((uVar2 << bVar1 | uVar2 >> 0x20 - bVar1) ^ 0xc87f6c0d) * *(int *)(param_2 + 0x938);
  (*(code *)((int64_t)
             (short)((short)*(uint64_t *)(param_2 + 0x1730) *
                     (((short)*(uint64_t *)(param_2 + 0x1778) *
                       (((short)*(uint32_t *)(param_2 + 0x490) + 0x4807) -
                        (short)*(uint64_t *)(param_2 + 0x16b8) ^
                       (uint16_t)*(uint64_t *)(param_2 + 0x8a0)) ^
                      (uint16_t)*(uint64_t *)(param_2 + 0x13d0)) + 0xd9ed) -
                    (short)*(uint64_t *)(param_2 + 0x1240)) + 0x7fffa568b958))
            ((uint64_t)uVar2 ^ *(uint64_t *)(param_2 + 0xd50),uVar2,
             *(uint64_t *)(param_2 + 0xef0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xef0));
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8b8e0  |  RVA: 0x71b8e0  |  Size: 386 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8b8e0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  code *pcVar3;
  uint16_t uVar4;
  
  uVar1 = *(uint64_t *)(param_2 + 0x1098);
  if (uVar1 != 0) {
    uVar4 = ~((short)*(uint32_t *)(param_2 + 0x17ac) *
             (((short)*(uint64_t *)(param_2 + 0x1240) - (short)*(uint64_t *)(param_2 + 0x490)) +
             -0x5fa5));
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0xf;
    uVar4 = (uVar4 << bVar2 | uVar4 >> 0x10 - bVar2) +
            ((short)*(uint64_t *)(param_2 + 0x16b8) - (short)*(uint32_t *)(param_2 + 0x4b0));
    pcVar3 = (code *)((int64_t)(short)(uVar4 * 0x4000 | uVar4 >> 2) + 0x7fffa568f8e9);
    (*pcVar3)(pcVar3,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8ba70  |  RVA: 0x71ba70  |  Size: 5821 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4e8ba70(void) {
    /* +0x71ba70 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x71ba75 */ __asm { PUSH RBP }
    /* +0x71ba76 */ __asm { PUSH R14 }
    /* +0x71ba78 */ __asm { PUSH R13 }
    /* +0x71ba7a */ __asm { PUSH R12 }
    /* +0x71ba7c */ __asm { PUSH RDI }
    /* +0x71ba7d */ __asm { PUSH RBX }
    /* +0x71ba7e */ __asm { PUSH R15 }
    /* +0x71ba80 */ __asm { PUSH RSI }
    /* +0x71ba81 */ __asm { SUB RSP,0xf8 }
    /* +0x71ba88 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x71ba8f */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM12 }
    /* +0x71ba96 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM8 }
    /* +0x71ba9d */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM15 }
    /* +0x71baa4 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM11 }
    /* +0x71baae */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM6 }
    /* +0x71bab7 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM9 }
    /* +0x71bac1 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x71baca */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM14 }
    /* +0x71bad4 */ __asm { MOVDQA xmmword ptr [RSP + 0xd0],XMM13 }
    /* +0x71bade */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM10 }
    /* +0x71bae8 */ __asm { LEA R10,[0x7fffa56909af] }
    /* +0x71baef */ __asm { MOV RCX,qword ptr [RBP + 0x630] }
    /* +0x71baf6 */ __asm { MOV R8,RCX }
    /* +0x71baf9 */ __asm { SHR R8,0x3d }
    /* +0x71bafd */ __asm { XOR R8,RCX }
    /* +0x71bb00 */ __asm { MOV EDX,0xf6113e2e }
    /* +0x71bb05 */ __asm { ADD EDX,dword ptr [RBP + 0x410] }
    /* +0x71bb0b */ __asm { XOR EDX,dword ptr [RBP + 0x11c0] }
    /* +0x71bb11 */ __asm { NOT EDX }
    /* +0x71bb13 */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x71bb1a */ __asm { ROL EDX,CL }
    /* +0x71bb1c */ __asm { MOVD XMM0,EDX }
    /* +0x71bb20 */ __asm { PXOR XMM0,xmmword ptr [RBP + 0x1840] }
    /* +0x71bb28 */ __asm { MOVD EDX,XMM0 }
    /* +0x71bb2c */ __asm { NOT EDX }
    /* +0x71bb2e */ __asm { IMUL R11D,EDX,-0x4edf6a97 }
    /* +0x71bb35 */ __asm { XOR R11D,dword ptr [RBP + 0x1a08] }
    /* +0x71bb3c */ __asm { MOV R9D,0x546dca47 }
    /* +0x71bb42 */ __asm { MOV EDX,0xb7985d00 }
    /* +0x71bb47 */ __asm { SUB EDX,R9D }
    /* +0x71bb4a */ __asm { IMUL EDX,dword ptr [RBP + 0xf10] }
    /* +0x71bb51 */ __asm { ADD EDX,dword ptr [RBP + 0xb20] }
    /* +0x71bb57 */ __asm { XOR EDX,ECX }
    /* +0x71bb59 */ __asm { IMUL EDX,dword ptr [RBP + 0x8c0] }
    /* +0x71bb60 */ __asm { ADD EDX,dword ptr [RBP + 0x430] }
    /* +0x71bb66 */ __asm { NOT EDX }
    /* +0x71bb68 */ __asm { ROL EDX,0x1b }
    /* +0x71bb6b */ __asm { MOVSXD RCX,EDX }
    /* +0x71bb6e */ __asm { ADD RCX,R10 }
    /* +0x71bb71 */ __asm { CALL RCX }
    /* +0x71bb73 */ __asm { CMP qword ptr [RBP + 0x1388],0x7 }
    /* +0x71bb7b */ __asm { JBE 0x7fffa4e8bc85 }
    /* +0x71bb81 */ __asm { MOV RAX,qword ptr [RBP + 0x1370] }
    /* +0x71bb88 */ __asm { MOV R11W,0xc8fe }
    /* +0x71bb8d */ __asm { MOV EDX,0x53dee56d }
    /* +0x71bb92 */ __asm { MOV R13,qword ptr [RBP + 0x410] }
    /* +0x71bb99 */ __asm { XOR EDX,R13D }
    /* +0x71bb9c */ __asm { MOV R14,qword ptr [RBP + 0x1350] }
    /* +0x71bba3 */ __asm { LEA R8D,[R14 + R11*0x1] }
    /* +0x71bba7 */ __asm { MOV RSI,qword ptr [RBP + 0x1638] }
    /* +0x71bbae */ __asm { MOV ECX,ESI }
    /* +0x71bbb0 */ __asm { ROR R8W,CL }
    /* +0x71bbb4 */ __asm { MOV RDI,qword ptr [RBP + 0x430] }
    /* +0x71bbbb */ __asm { ADD R8D,EDI }
    /* +0x71bbbe */ __asm { MOV RCX,qword ptr [RBP + 0x14e8] }
    /* +0x71bbc5 */ __asm { ROR EDX,CL }
    /* +0x71bbc7 */ __asm { ROL R8W,0xc }
    /* +0x71bbcc */ __asm { NOT EDX }
    /* +0x71bbce */ __asm { IMUL EDX,EDX,-0x5828cef7 }
    /* +0x71bbd4 */ __asm { MOV RCX,qword ptr [RBP + 0x820] }
    /* +0x71bbdb */ __asm { ROL EDX,CL }
    /* +0x71bbdd */ __asm { LEA R10,[0x7fffa568fbc3] }
    /* +0x71bbe4 */ __asm { MOV RCX,qword ptr [RBP + 0xf58] }
    /* +0x71bbeb */ __asm { MOV R12D,ECX }
    /* +0x71bbee */ __asm { XOR R12D,R8D }
    /* +0x71bbf1 */ __asm { NOT R12D }
    /* +0x71bbf4 */ __asm { MOV ECX,R13D }
    /* +0x71bbf7 */ __asm { ROR R12W,CL }
    /* +0x71bbfb */ __asm { MOV R9D,0xefeb91 }
    /* +0x71bc01 */ __asm { IMUL R9D,dword ptr [RBP + 0xf10] }
    /* +0x71bc09 */ __asm { XOR R9D,0xd6cc1abc }
    /* +0x71bc10 */ __asm { ADD R9D,R13D }
    /* +0x71bc13 */ __asm { MOV R13,qword ptr [RBP + 0x11c0] }
    /* +0x71bc1a */ __asm { MOV ECX,R13D }
    /* +0x71bc1d */ __asm { ROL R9D,CL }
    /* +0x71bc20 */ __asm { MOV R8,RAX }
    /* +0x71bc23 */ __asm { SHR R8,0x3d }
    /* +0x71bc27 */ __asm { MOV R11,qword ptr [RBP + 0x5e0] }
    /* +0x71bc2e */ __asm { IMUL R11D,R9D }
    /* +0x71bc32 */ __asm { MOV R9D,R8D }
    /* +0x71bc35 */ __asm { MOV ECX,ESI }
    /* +0x71bc37 */ __asm { ROL R11D,CL }
    /* +0x71bc3a */ __asm { AND R9D,EAX }
    /* +0x71bc3d */ __asm { XOR R8,RAX }
    /* +0x71bc40 */ __asm { NOT EDX }
    /* +0x71bc42 */ __asm { MOVD XMM0,EDX }
    /* +0x71bc46 */ __asm { MOV RAX,qword ptr [RBP + 0xe90] }
    /* +0x71bc4d */ __asm { IMUL EAX,R12D }
    /* +0x71bc51 */ __asm { PADDD XMM0,xmmword ptr [RBP + 0xcd0] }
    /* +0x71bc59 */ __asm { MOVSX RDX,AX }
    /* +0x71bc5d */ __asm { MOV ECX,R14D }
    /* +0x71bc60 */ __asm { ROR R11D,CL }
    /* +0x71bc63 */ __asm { ADD RDX,R10 }
    /* +0x71bc66 */ __asm { MOVD EAX,XMM0 }
    /* +0x71bc6a */ __asm { ROL R11D,0xe }
    /* +0x71bc6e */ __asm { ADD R11D,EDI }
    /* +0x71bc71 */ __asm { XOR EAX,0x1ebdb502 }
    /* +0x71bc76 */ __asm { SUB EAX,R13D }
    /* +0x71bc79 */ __asm { CMP RAX,0x502b4c86 }
    /* +0x71bc7f */ __asm { CMOVNZ R8,R9 }
    /* +0x71bc83 */ __asm { CALL RDX }
    /* +0x71bc85 */ __asm { MOV EAX,0x83f90843 }
    /* +0x71bc8a */ __asm { MOV R10D,0xcdf2c460 }
    /* +0x71bc90 */ __asm { SUB R10D,dword ptr [RBP + 0x11c0] }
    /* +0x71bc97 */ __asm { MOV RCX,qword ptr [RBP + 0x430] }
    /* +0x71bc9e */ __asm { ROR R10D,CL }
    /* +0x71bca1 */ __asm { XOR EAX,dword ptr [RBP + 0xf98] }
    /* +0x71bca7 */ __asm { ADD R10D,dword ptr [RBP + 0x1638] }
    /* +0x71bcae */ __asm { NOT R10D }
    /* +0x71bcb1 */ __asm { IMUL R10D,dword ptr [RBP + 0xd40] }
    /* +0x71bcb9 */ __asm { MOV RCX,qword ptr [RBP + 0x820] }
    /* +0x71bcc0 */ __asm { ROL R10D,CL }
    /* +0x71bcc3 */ __asm { NOT EAX }
    /* +0x71bcc5 */ __asm { ADD R10D,dword ptr [RBP + 0x1350] }
    /* +0x71bccc */ __asm { ROL R10D,0xa }
    /* +0x71bcd0 */ __asm { ADD EAX,dword ptr [RBP + 0x654] }
    /* +0x71bcd6 */ __asm { IMUL EAX,dword ptr [RBP + 0x16f8] }
    /* +0x71bcdd */ __asm { XOR EAX,ECX }
    /* +0x71bcdf */ __asm { MOV RCX,qword ptr [RBP + 0x410] }
    /* +0x71bce6 */ __asm { ROL EAX,CL }
    /* +0x71bce8 */ __asm { IMUL EAX,dword ptr [RBP + 0x8c0] }
    /* +0x71bcef */ __asm { NOT R10D }
    /* +0x71bcf2 */ __asm { CMP R10,RAX }
    /* +0x71bcf5 */ __asm { JA 0x7fffa4e8be2e }
    /* +0x71bcfb */ __asm { MOV EDI,0xdbada75a }
    /* +0x71bd00 */ __asm { IMUL EDI,dword ptr [RBP + 0x8c0] }
    /* +0x71bd07 */ __asm { MOV R8,qword ptr [RBP + 0x11c0] }
    /* +0x71bd0e */ __asm { MOV ECX,R8D }
    /* +0x71bd11 */ __asm { ROR EDI,CL }
    /* +0x71bd13 */ __asm { MOV R11D,0xdd0cde8a }
    /* +0x71bd19 */ __asm { NOT R11D }
    /* +0x71bd1c */ __asm { MOV R13,qword ptr [RBP + 0x410] }
    /* +0x71bd23 */ __asm { ADD R11D,R13D }
    /* +0x71bd26 */ __asm { MOV R9,qword ptr [RBP + 0x1638] }
    /* +0x71bd2d */ __asm { MOV ECX,R9D }
    /* +0x71bd30 */ __asm { ROR R11D,CL }
    /* +0x71bd33 */ __asm { RDTSC }
    /* +0x71bd35 */ __asm { SHL RDX,0x20 }
    /* +0x71bd39 */ __asm { OR RDX,RAX }
    /* +0x71bd3c */ __asm { MOV RSI,qword ptr [RBP + 0x18b0] }
    /* +0x71bd43 */ __asm { MOV R12,-0x30ebf64fafbc6efb }
    /* +0x71bd4d */ __asm { IMUL R12,RDX }
    /* +0x71bd51 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0x71bd5b */ __asm { ADD R12,RCX }
    /* +0x71bd5e */ __asm { MOV RAX,R12 }
    /* +0x71bd61 */ __asm { SHR RAX,0x2d }
    /* +0x71bd65 */ __asm { MOV qword ptr [RBP + 0x1388],0x7 }
    /* +0x71bd70 */ __asm { NOT EDI }
    /* +0x71bd72 */ __asm { MOV ECX,R13D }
    /* +0x71bd75 */ __asm { ROR EDI,CL }
    /* +0x71bd77 */ __asm { MOV DX,0x52c4 }
    /* +0x71bd7b */ __asm { ADD EDX,dword ptr [RBP + 0x430] }
    /* +0x71bd81 */ __asm { MOV R15,qword ptr [RBP + 0x820] }
    /* +0x71bd88 */ __asm { MOV ECX,R15D }
    /* +0x71bd8b */ __asm { ROL EDI,CL }
    /* +0x71bd8d */ __asm { MOV ECX,R8D }
    /* +0x71bd90 */ __asm { ROL R11D,CL }
    /* +0x71bd93 */ __asm { NOT R11D }
    /* +0x71bd96 */ __asm { ROL R11D,0x7 }
    /* +0x71bd9a */ __asm { NOT R11D }
    /* +0x71bd9d */ __asm { ADD R11D,dword ptr [RBP + 0x1330] }
    /* +0x71bda4 */ __asm { MOV R14,R12 }
    /* +0x71bda7 */ __asm { SHR R14,0x1b }
    /* +0x71bdab */ __asm { XOR R14D,EAX }
    /* +0x71bdae */ __asm { MOV qword ptr [RBP + 0x1380],0x0 }
    /* +0x71bdb9 */ __asm { LEA R10,[0x7fffa568ac7f] }
    /* +0x71bdc0 */ __asm { XOR EDX,R8D }
    /* +0x71bdc3 */ __asm { MOV RAX,qword ptr [RBP + 0x468] }
    /* +0x71bdca */ __asm { MOV R8,RAX }
    /* +0x71bdcd */ __asm { SHR R12,0x3b }
    /* +0x71bdd1 */ __asm { MOV ECX,R12D }
    /* +0x71bdd4 */ __asm { ROR R14D,CL }
    /* +0x71bdd7 */ __asm { ADD EDX,dword ptr [RBP + 0x1350] }
    /* +0x71bddd */ __asm { MOV ECX,R9D }
    /* +0x71bde0 */ __asm { ROR DX,CL }
    /* +0x71bde3 */ __asm { MOV RCX,qword ptr [RBP + 0xe38] }
    /* +0x71bdea */ __asm { ROL DX,CL }
    /* +0x71bded */ __asm { SHR R8,0x3d }
    /* +0x71bdf1 */ __asm { XOR R8,RAX }
    /* +0x71bdf4 */ __asm { SUB EDX,R13D }
    /* +0x71bdf7 */ __asm { ADD EDX,0x50c4 }
    /* +0x71bdfd */ __asm { MOV ECX,R15D }
    /* +0x71be00 */ __asm { ROR DX,CL }
    /* +0x71be03 */ __asm { MOVSX RCX,DX }
    /* +0x71be07 */ __asm { ADD RCX,R10 }
    /* +0x71be0a */ __asm { XOR EDI,R9D }
    /* +0x71be0d */ __asm { MOV word ptr [RBP + 0x1370],0x0 }
    /* +0x71be16 */ __asm { CALL RCX }
    /* +0x71be18 */ __asm { NOT EDI }
    /* +0x71be1a */ __asm { MOV RCX,qword ptr [RBP + 0xb20] }
    /* +0x71be21 */ __asm { ROR EDI,CL }
    /* +0x71be23 */ __asm { ADD EDI,0xa52a11b1 }
    /* +0x71be29 */ __asm { JMP 0x7fffa4e8bf93 }
    /* +0x71be2e */ __asm { MOV R11D,0xe938c7de }
    /* +0x71be34 */ __asm { MOV RDI,qword ptr [RBP + 0x1350] }
    /* +0x71be3b */ __asm { MOV ECX,EDI }
    /* +0x71be3d */ __asm { MOV R13,qword ptr [RBP + 0x11c0] }
    /* +0x71be44 */ __asm { SUB ECX,R13D }
    /* +0x71be47 */ __asm { MOV EDX,0xecd53c60 }
    /* +0x71be4c */ __asm { MOVD XMM0,ECX }
    /* +0x71be50 */ __asm { MOV R8,qword ptr [RBP + 0x1670] }
    /* +0x71be57 */ __asm { SUB R8D,dword ptr [RBP + 0x820] }
    /* +0x71be5e */ __asm { MOV AX,0xf0d3 }
    /* +0x71be62 */ __asm { IMUL EAX,dword ptr [RBP + 0x1248] }
    /* +0x71be69 */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x71be70 */ __asm { ADD ECX,EAX }
    /* +0x71be72 */ __asm { IMUL R10D,ECX,-0x64d9 }
    /* +0x71be79 */ __asm { MOV RSI,qword ptr [RBP + 0x430] }
    /* +0x71be80 */ __asm { MOV ECX,ESI }
    /* +0x71be82 */ __asm { ROR R10W,CL }
    /* +0x71be86 */ __asm { ADD R10D,R8D }
    /* +0x71be89 */ __asm { MOV word ptr [RBP + 0x1370],0x0 }
    /* +0x71be92 */ __asm { MOV qword ptr [RBP + 0x1388],0x7 }
    /* +0x71be9d */ __asm { MOV qword ptr [RBP + 0x1380],0x0 }
    /* +0x71bea8 */ __asm { MOV RCX,qword ptr [RBP + 0x468] }
    /* +0x71beaf */ __asm { MOV R8,RCX }
    /* +0x71beb2 */ __asm { SHR R8,0x3d }
    /* +0x71beb6 */ __asm { XOR R8,RCX }
    /* +0x71beb9 */ __asm { MOV RCX,qword ptr [RBP + 0xe70] }
    /* +0x71bec0 */ __asm { MOV R9D,ECX }
    /* +0x71bec3 */ __asm { IMUL EAX,R10D,0x8f }
    /* +0x71beca */ __asm { MOV R14,qword ptr [RBP + 0x410] }
    /* +0x71bed1 */ __asm { XOR R11D,R14D }
    /* +0x71bed4 */ __asm { MOV ECX,EDI }
    /* +0x71bed6 */ __asm { ROR R11D,CL }
    /* +0x71bed9 */ __asm { MOV ECX,R13D }
    /* +0x71bedc */ __asm { ROL AX,CL }
    /* +0x71bedf */ __asm { MOV R10,qword ptr [RBP + 0x4c8] }
    /* +0x71bee6 */ __asm { IMUL R11D,R10D }
    /* +0x71beea */ __asm { ROL R11D,CL }
    /* +0x71beed */ __asm { SUB R9D,ESI }
    /* +0x71bef0 */ __asm { NOT R11D }
    /* +0x71bef3 */ __asm { ADD R11D,R9D }
    /* +0x71bef6 */ __asm { XOR EDX,R14D }
    /* +0x71bef9 */ __asm { IMUL EDX,dword ptr [RBP + 0xf10] }
    /* +0x71bf00 */ __asm { XOR EDX,0x18855617 }
    /* +0x71bf06 */ __asm { MOV R9D,dword ptr [RBP + 0x1940] }
    /* +0x71bf0d */ __asm { IMUL R9D,EDX }
    /* +0x71bf11 */ __asm { SUB EAX,EDI }
    /* +0x71bf13 */ __asm { MOVSX RCX,AX }
    /* +0x71bf17 */ __asm { MOVD XMM4,R9D }
    /* +0x71bf1c */ __asm { PADDD XMM4,XMM0 }
    /* +0x71bf20 */ __asm { MOVD EDX,XMM4 }
    /* +0x71bf24 */ __asm { IMUL EDX,R10D }
    /* +0x71bf28 */ __asm { MOVD XMM0,EDX }
    /* +0x71bf2c */ __asm { LEA R10,[0x7fffa568b240] }
    /* +0x71bf33 */ __asm { ADD R10,RCX }
    /* +0x71bf36 */ __asm { XOR R11D,0x109be8e1 }
    /* +0x71bf3d */ __asm { ROL R11D,0x11 }
    /* +0x71bf41 */ __asm { PXOR XMM0,xmmword ptr [RBP + 0xcd0] }
    /* +0x71bf49 */ __asm { MOVD EDI,XMM0 }
    /* +0x71bf4d */ __asm { CALL R10 }
    /* +0x71bf50 */ __asm { MOV RSI,qword ptr [RBP + 0x18b0] }
    /* +0x71bf57 */ __asm { RDTSC }
    /* +0x71bf59 */ __asm { SHL RDX,0x20 }
    /* +0x71bf5d */ __asm { OR RDX,RAX }
    /* +0x71bf60 */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x71bf6a */ __asm { IMUL RCX,RDX }
    /* +0x71bf6e */ __asm { MOV R10,-0x22b18422c4a9c65e }
    /* +0x71bf78 */ __asm { ADD RCX,R10 }
    /* +0x71bf7b */ __asm { MOV R14,RCX }
    /* +0x71bf7e */ __asm { SHR R14,0x1b }
    /* +0x71bf82 */ __asm { MOV RAX,RCX }
    /* +0x71bf85 */ __asm { SHR RAX,0x2d }
    /* +0x71bf89 */ __asm { XOR R14D,EAX }
    /* +0x71bf8c */ __asm { SHR RCX,0x3b }
    /* +0x71bf90 */ __asm { ROR R14D,CL }
    /* +0x71bf93 */ __asm { AND R14D,0x3 }
    /* +0x71bf97 */ __asm { CMP R14D,0x2 }
    /* +0x71bf9b */ __asm { JNC 0x7fffa4e8c199 }
    /* +0x71bfa1 */ __asm { CMP R14D,0x1 }
    /* +0x71bfa5 */ __asm { JZ 0x7fffa4e8c5fc }
    /* +0x71bfab */ __asm { MOV R10D,0x6ec69656 }
    /* +0x71bfb1 */ __asm { MOV RAX,qword ptr [RBP + 0x1638] }
    /* +0x71bfb8 */ __asm { ADD R10D,EAX }
    /* +0x71bfbb */ __asm { MOV R11D,0x2e8e9fee }
    /* +0x71bfc1 */ __asm { MOV RCX,-0x5e9f2202b1f12308 }
    /* +0x71bfcb */ __asm { XOR EDX,EDX }
    /* +0x71bfcd */ __asm { XOR R8D,R8D }
    /* +0x71bfd0 */ __asm { CMP R11,RCX }
    /* +0x71bfd3 */ __asm { SETA R8B }
    /* +0x71bfd7 */ __asm { SETZ DL }
    /* +0x71bfda */ __asm { MOV ECX,0xdd173715 }
    /* +0x71bfdf */ __asm { MOVD XMM0,ECX }
    /* +0x71bfe3 */ __asm { PXOR XMM0,xmmword ptr [RBP + 0x1840] }
    /* +0x71bfeb */ __asm { MOVD R9D,XMM0 }
    /* +0x71bff0 */ __asm { XOR R9D,EAX }
    /* +0x71bff3 */ __asm { NOT R9D }
    /* +0x71bff6 */ __asm { MOV R14,qword ptr [RBP + 0x1350] }
    /* +0x71bffd */ __asm { SUB R9D,R14D }
    /* +0x71c000 */ __asm { ADD R9D,0x811fc77c }
    /* +0x71c007 */ __asm { XOR R9D,dword ptr [RBP + 0x410] }
    /* +0x71c00e */ __asm { MOV RCX,qword ptr [RBP + 0xf58] }
    /* +0x71c015 */ __asm { ROL R9D,CL }
    /* +0x71c018 */ __asm { XOR R10D,dword ptr [RBP + 0x15a0] }
    /* +0x71c01f */ __asm { MOV RCX,qword ptr [RBP + 0x820] }
    /* +0x71c026 */ __asm { ROR R10D,CL }
    /* +0x71c029 */ __asm { MOV RCX,qword ptr [RBP + 0x11c0] }
    /* +0x71c030 */ __asm { MOV EAX,ECX }
    /* +0x71c032 */ __asm { SUB EAX,R10D }
    /* +0x71c035 */ __asm { NOT R9D }
    /* +0x71c038 */ __asm { ADD R9D,dword ptr [RBP + 0x430] }
    /* +0x71c03f */ __asm { MOVSXD R10,R9D }
    /* +0x71c042 */ __asm { ADD EAX,0xe45a5036 }
    /* +0x71c047 */ __asm { MOV ECX,R14D }
    /* +0x71c04a */ __asm { ROR EAX,CL }
    /* +0x71c04c */ __asm { NOT EAX }
    /* +0x71c04e */ __asm { MOVSXD RCX,EAX }
    /* +0x71c051 */ __asm { CMP R10,RCX }
    /* +0x71c054 */ __asm { CMOVA R8D,EDX }
    /* +0x71c058 */ __asm { CMP R8B,0x1 }
    /* +0x71c05c */ __asm { JZ 0x7fffa4e8d523 }
    /* +0x71c062 */ __asm { MOV EAX,0xefa9663d }
    /* +0x71c067 */ __asm { MOV R8D,0x29c8447c }
    /* +0x71c06d */ __asm { MOV R12,qword ptr [RBP + 0x820] }
    /* +0x71c074 */ __asm { ADD R8D,R12D }
    /* +0x71c077 */ __asm { MOV R10,qword ptr [RBP + 0x430] }
    /* +0x71c07e */ __asm { MOV ECX,R10D }
    /* +0x71c081 */ __asm { ROL R8D,CL }
    /* +0x71c084 */ __asm { MOV R13,qword ptr [RBP + 0x11c0] }
    /* +0x71c08b */ __asm { XOR R8D,R13D }
    /* +0x71c08e */ __asm { ADD R8D,0x41f83656 }
    /* +0x71c095 */ __asm { MOV R9,qword ptr [RBP + 0x1638] }
    /* +0x71c09c */ __asm { MOV ECX,R9D }
    /* +0x71c09f */ __asm { ROL R8D,CL }
    /* +0x71c0a2 */ __asm { MOVD XMM0,dword ptr [RBP + 0xe70] }
    /* +0x71c0aa */ __asm { XOR R8D,dword ptr [RBP + 0x1330] }
    /* +0x71c0b1 */ __asm { IMUL R8D,dword ptr [RBP + 0xd40] }
    /* +0x71c0b9 */ __asm { MOV R14,qword ptr [RBP + 0x1350] }
    /* +0x71c0c0 */ __asm { MOV ECX,R14D }
    /* +0x71c0c3 */ __asm { ROR R8D,CL }
    /* +0x71c0c6 */ __asm { PSUBD XMM0,xmmword ptr [RBP + 0x18e0] }
    /* +0x71c0ce */ __asm { MOVD EDX,XMM0 }
    /* +0x71c0d2 */ __asm { ADD EAX,R10D }
    /* +0x71c0d5 */ __asm { XOR EAX,R12D }
    /* +0x71c0d8 */ __asm { MOV ECX,R13D }
    /* +0x71c0db */ __asm { ROR EAX,CL }
    /* +0x71c0dd */ __asm { IMUL ECX,R8D,-0x38c188ff }
    /* +0x71c0e4 */ __asm { MOVSXD R10,ECX }
    /* +0x71c0e7 */ __asm { ADD EAX,EDX }
    /* +0x71c0e9 */ __asm { XOR EAX,0xf3ecdab4 }
    /* +0x71c0ee */ __asm { MOV ECX,R9D }
    /* +0x71c0f1 */ __asm { ROR EAX,CL }
    /* +0x71c0f3 */ __asm { XOR EAX,R14D }
    /* +0x71c0f6 */ __asm { CMP RAX,R10 }
    /* +0x71c0f9 */ __asm { SETA R9B }
    /* +0x71c0fd */ __asm { MOV RCX,qword ptr [R11 + 0x516f601a] }
    /* +0x71c104 */ __asm { MOV RAX,RCX }
    /* +0x71c107 */ __asm { MOV R10,0x5d43260a13037488 }
    /* +0x71c111 */ __asm { MUL R10 }
    /* +0x71c114 */ __asm { MOV R10,RDX }
    /* +0x71c117 */ __asm { MOV R8D,0x147aa4d }
    /* +0x71c11d */ __asm { MOV RAX,RCX }
    /* +0x71c120 */ __asm { MUL R8 }
    /* +0x71c123 */ __asm { ADD RAX,R10 }
    /* +0x71c126 */ __asm { ADC RDX,0x0 }
    /* +0x71c12a */ __asm { TEST DL,0x1 }
    /* +0x71c12d */ __asm { SETZ CL }
    /* +0x71c130 */ __asm { XOR CL,R9B }
    /* +0x71c133 */ __asm { JZ 0x7fffa4e8cb05 }
    /* +0x71c139 */ __asm { MOV RCX,0x5f6125e7148bbe02 }
    /* +0x71c143 */ __asm { MOV R8,qword ptr [RBP + 0x648] }
    /* +0x71c14a */ __asm { IMUL R8,RCX }
    /* +0x71c14e */ __asm { NOT R8 }
    /* +0x71c151 */ __asm { LEA R11,[0x7fffa47b6c19] }
    /* +0x71c158 */ __asm { ROL R8,0x3 }
    /* +0x71c15c */ __asm { SUB R8,qword ptr [RBP + 0x4a8] }
    /* +0x71c163 */ __asm { MOV R10D,0xc00000bb }
    /* +0x71c169 */ __asm { XOR R10,R8 }
    /* +0x71c16c */ __asm { SUB R10,qword ptr [RBP + 0x1350] }
    /* +0x71c173 */ __asm { MOV RCX,qword ptr [RBP + 0x11c0] }
    /* +0x71c17a */ __asm { ROR R10,CL }
    /* +0x71c17d */ __asm { CMP R11,R10 }
    /* +0x71c180 */ __asm { JZ 0x7fffa4e8d52a }
    /* +0x71c186 */ __asm { MOV qword ptr [RBP + 0x21c0],RCX }
    /* +0x71c18d */ __asm { MOV EAX,dword ptr [R11 + 0x641f] }
    /* +0x71c194 */ __asm { JMP 0x7fffa4e8d49c }
    /* +0x71c199 */ __asm { CMP R14D,0x3 }
    /* +0x71c19d */ __asm { JZ 0x7fffa4e8c696 }
    /* +0x71c1a3 */ __asm { MOV ECX,0xb5bd6137 }
    /* +0x71c1a8 */ __asm { MOV R11,RCX }
    /* +0x71c1ab */ __asm { ROL R11,0x11 }
    /* +0x71c1af */ __asm { XOR R11,-0x4d340305 }
    /* +0x71c1b6 */ __asm { ADD R11,-0x37fff371 }
    /* +0x71c1bd */ __asm { MOV R10,0x23798d650b5541bd }
    /* +0x71c1c7 */ __asm { CMP R11,R10 }
    /* +0x71c1ca */ __asm { JZ 0x7fffa4e8d53d }
    /* +0x71c1d0 */ __asm { MOV R10,-0x3cabf86a3254716e }
    /* +0x71c1da */ __asm { MOVQ XMM0,qword ptr [RBP + 0x4a8] }
    /* +0x71c1e2 */ __asm { XOR R10,qword ptr [RBP + 0x820] }
    /* +0x71c1e9 */ __asm { MOV R8,qword ptr [RBP + 0x4c0] }
    /* +0x71c1f0 */ __asm { IMUL R8,R10 }
    /* +0x71c1f4 */ __asm { SUB R8,qword ptr [RBP + 0x430] }
    /* +0x71c1fb */ __asm { MOVQ XMM4,R8 }
    /* +0x71c200 */ __asm { MOV R10D,dword ptr [RCX + -0x35bf5e73] }
    /* +0x71c207 */ __asm { RDTSC }
    /* +0x71c209 */ __asm { SHL RDX,0x20 }
    /* +0x71c20d */ __asm { PXOR XMM4,xmmword ptr [RBP + 0x15e0] }
    /* +0x71c215 */ __asm { MOVQ R8,XMM4 }
    /* +0x71c21a */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x71c221 */ __asm { ROL R8,CL }
    /* +0x71c224 */ __asm { OR RDX,RAX }
    /* +0x71c227 */ __asm { MOV RCX,0x5555555555555556 }
    /* +0x71c231 */ __asm { IMUL R10,RCX }
    /* +0x71c235 */ __asm { MOV EAX,0xb8f2f914 }
    /* +0x71c23a */ __asm { ADD RAX,R8 }
    /* +0x71c23d */ __asm { MOV RCX,qword ptr [RBP + 0x1350] }
    /* +0x71c244 */ __asm { ROR RAX,CL }
    /* +0x71c247 */ __asm { MOVQ XMM4,RAX }
    /* +0x71c24c */ __asm { PSUBQ XMM4,XMM0 }
    /* +0x71c250 */ __asm { MOVQ RCX,XMM4 }
    /* +0x71c255 */ __asm { CMP R10,RCX }
    /* +0x71c258 */ __asm { JC 0x7fffa4e8d029 }
    /* +0x71c25e */ __asm { MOV CX,0x32ce }
    /* +0x71c262 */ __asm { MOV R10,0x5851f42d4c957f2d }
    /* +0x71c26c */ __asm { IMUL RDX,R10 }
    /* +0x71c270 */ __asm { IMUL ECX,ECX,-0x1361 }
    /* +0x71c276 */ __asm { MOVD XMM0,ECX }
    /* +0x71c27a */ __asm { MOV R9,qword ptr [RBP + 0x1638] }
    /* +0x71c281 */ __asm { MOVD XMM4,R9D }
    /* +0x71c286 */ __asm { PXOR XMM4,XMM0 }
    /* +0x71c28a */ __asm { MOVD R8D,XMM4 }
    /* +0x71c28f */ __asm { ADD R8D,dword ptr [RBP + 0x410] }
    /* +0x71c296 */ __asm { MOV RDI,qword ptr [RBP + 0x11c0] }
    /* +0x71c29d */ __asm { XOR R8D,EDI }
    /* +0x71c2a0 */ __asm { MOV RCX,qword ptr [RBP + 0x15a0] }
    /* +0x71c2a7 */ __asm { ROL R8W,CL }
    /* +0x71c2ab */ __asm { MOV R11D,dword ptr [RBP + 0x1698] }
    /* +0x71c2b2 */ __asm { IMUL R11D,R8D }
    /* +0x71c2b6 */ __asm { XOR R11D,dword ptr [RBP + 0x1350] }
    /* +0x71c2bd */ __asm { MOV RCX,0x3671095b091fe85a }
    /* +0x71c2c7 */ __asm { ADD RDX,RCX }
    /* +0x71c2ca */ __asm { MOV RAX,RDX }
    /* +0x71c2cd */ __asm { SHR RAX,0x2d }
    /* +0x71c2d1 */ __asm { MOVD XMM0,EAX }
    /* +0x71c2d5 */ __asm { MOVQ XMM4,RDX }
    /* +0x71c2da */ __asm { SHR RDX,0x3b }
    /* +0x71c2de */ __asm { PSRLQ XMM4,0x1b }
    /* +0x71c2e3 */ __asm { PXOR XMM4,XMM0 }
    /* +0x71c2e7 */ __asm { MOVD R8D,XMM4 }
    /* +0x71c2ec */ __asm { MOV ECX,EDX }
    /* +0x71c2ee */ __asm { ROR R8D,CL }
    /* +0x71c2f1 */ __asm { MOV RDX,qword ptr [RBP + 0x430] }
    /* +0x71c2f8 */ __asm { SUB R11D,EDX }
    /* +0x71c2fb */ __asm { MOVZX EAX,R11W }
    /* +0x71c2ff */ __asm { MOV RCX,qword ptr GS:[RAX] }
    /* +0x71c303 */ __asm { MOV RAX,qword ptr [RBP + 0x2318] }
    /* +0x71c30a */ __asm { ADD RAX,0x5 }
    /* +0x71c30e */ __asm { IMUL RAX,qword ptr [RCX + 0x60] }
    /* +0x71c313 */ __asm { MOV RCX,-0x695083ede14edf55 }
    /* +0x71c31d */ __asm { MOV RCX,-0x736b2483d5ed2e6f }
    /* +0x71c327 */ __asm { MOV R10,-0xa723190c }
    /* +0x71c331 */ __asm { XOR R10,RCX }
    /* +0x71c334 */ __asm { SUB R10,R9 }
    /* +0x71c337 */ __asm { ADD R10,RDX }
    /* +0x71c33a */ __asm { ROL R10,0x2e }
    /* +0x71c33e */ __asm { SUB R10,RDI }
    /* +0x71c341 */ __asm { IMUL R10,RAX }
    /* +0x71c345 */ __asm { MOV RCX,-0xb247550c }
    /* +0x71c34f */ __asm { ADD RCX,R10 }
    /* +0x71c352 */ __asm { MOV R10,0x202723d7e5db5497 }
    /* +0x71c35c */ __asm { CMP RCX,R10 }
    /* +0x71c35f */ __asm { JZ 0x7fffa4e8d50e }
    /* +0x71c365 */ __asm { CMP R8D,0x10c605 }
    /* +0x71c36c */ __asm { JA 0x7fffa4e8c580 }
    /* +0x71c372 */ __asm { MOV dword ptr [RBP + 0x21c0],0x95b3c310 }
    /* +0x71c37c */ __asm { MOV ECX,dword ptr [RBP + 0x21c0] }
    /* +0x71c382 */ __asm { MOV ECX,0x67d8d773 }
    /* +0x71c387 */ __asm { TEST uint8_t ptr [RCX + 0x18252acd],0x1 }
    /* +0x71c38e */ __asm { JNZ 0x7fffa4e8c580 }
    /* +0x71c394 */ __asm { PXOR XMM0,XMM0 }
    /* +0x71c398 */ __asm { MOVDQA xmmword ptr [RBP + 0x21c0],XMM0 }
    /* +0x71c3a0 */ __asm { MOV dword ptr [RBP + 0x19b0],0x30002c17 }
    /* +0x71c3aa */ __asm { MOV R8D,dword ptr [RBP + 0x19b0] }
    /* +0x71c3b1 */ __asm { MOV ECX,0x36b6b999 }
    /* +0x71c3b6 */ __asm { XOR ECX,dword ptr [RBP + 0x430] }
    /* +0x71c3bc */ __asm { ADD ECX,dword ptr [RBP + 0x1710] }
    /* +0x71c3c2 */ __asm { XOR ECX,dword ptr [RBP + 0x410] }
    /* +0x71c3c8 */ __asm { NOT ECX }
    /* +0x71c3ca */ __asm { MOVD XMM0,ECX }
    /* +0x71c3ce */ __asm { MOVDQA XMM4,xmmword ptr [RBP + 0x1840] }
    /* +0x71c3d6 */ __asm { PADDD XMM4,XMM0 }
    /* +0x71c3da */ __asm { MOVD EDX,XMM4 }
    /* +0x71c3de */ __asm { ROL EDX,0x19 }
    /* +0x71c3e1 */ __asm { XOR EDX,dword ptr [RBP + 0x1350] }
    /* +0x71c3e7 */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x71c3ee */ __asm { ROR EDX,CL }
    /* +0x71c3f0 */ __asm { NOT EDX }
    /* +0x71c3f2 */ __asm { MOVSXD RCX,EDX }
}


// ============================================================================
// Function : Unwind@7fffa4e8d650  |  RVA: 0x71d650  |  Size: 594 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8d650(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  int iVar3;
  uint32_t uVar4;
  uint16_t uVar5;
  uint32_t uVar6;
  
  if (7 < *(uint64_t *)(param_2 + 0x2408)) {
    uVar5 = (short)*(uint32_t *)(param_2 + 0x1718) * 0x5047 ^
            (uint16_t)*(uint32_t *)(param_2 + 0xe20);
    uVar5 = (uVar5 << 8 | uVar5 >> 8) + 0x9540;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x13d0) & 0xf;
    (*(code *)((int64_t)
               (short)(~((short)*(uint64_t *)(param_2 + 0x8e0) *
                         (uVar5 << bVar1 | uVar5 >> 0x10 - bVar1) ^
                        (uint16_t)*(uint32_t *)(param_2 + 0x1240)) -
                      (short)*(uint64_t *)(param_2 + 0x4b0)) + 0x7fffa568f33e))
              ((uint64_t)
               ((*(int *)(param_2 + 0x460) +
                (*(int *)(param_2 + 0x850) * 0x1396ff74 + (int)*(uint64_t *)(param_2 + 0x13d0) ^
                *(uint32_t *)(param_2 + 0x13b0))) * 0xcbfaa9) ^ *(uint64_t *)(param_2 + 0x1960),
               *(uint64_t *)(param_2 + 0x4b0),
               *(uint64_t *)(param_2 + 0x23f0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x23f0));
  }
  if (7 < *(uint64_t *)(param_2 + 0xa68)) {
    uVar6 = (*(uint32_t *)(param_2 + 0x4b0) ^ 0x801e58c2) * 0x7f03cd99 + *(int *)(param_2 + 0x1240);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0x1f;
    iVar3 = (int)*(uint64_t *)(param_2 + 0x548);
    uVar4 = iVar3 * 0x34275758 ^ *(uint32_t *)(param_2 + 0x13d0);
    uVar4 = (uVar4 << 4 | uVar4 >> 0x1c) * *(int *)(param_2 + 0x850);
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x420) & 0x1f;
    uVar4 = uVar4 << bVar2 | uVar4 >> 0x20 - bVar2;
    (*(code *)(&UNK_7fffa5690716 +
              (int)~((((uVar6 << bVar1 | uVar6 >> 0x20 - bVar1) ^ *(uint32_t *)(param_2 + 0xfd8)) +
                     *(int *)(param_2 + 0x490)) * iVar3)))
              ((uint64_t)~(uVar4 ^ *(uint32_t *)(param_2 + 0x1960)) *
               (uint64_t)*(uint32_t *)(param_2 + 0x5b0),uVar4,
               *(uint64_t *)(param_2 + 0xa50) >> 0x3d ^ *(uint64_t *)(param_2 + 0xa50));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e8d8b0  |  RVA: 0x71d8b0  |  Size: 310 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8d8b0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  if (*(int64_t *)(param_2 + 0x518) != 0) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xba0) & 0xf;
    uVar2 = (short)*(uint64_t *)(param_2 + 0x8e0) *
            ((short)*(uint64_t *)(param_2 + 0x4b0) + ~(0xba1 << bVar1 | 0xba1U >> 0x10 - bVar1));
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x490) & 0xf;
    uVar2 = uVar2 << bVar1 | uVar2 >> 0x10 - bVar1;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x13d0) & 0xf;
    (*(code *)((int64_t)(short)(uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) + 0x7fffa508a9c4))
              (*(int64_t *)(param_2 + 0x518));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4e8d9f0  |  RVA: 0x71d9f0  |  Size: 1219 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4e8d9f0(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4,
                     int64_t param_5)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint32_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint8_t *pbVar11;
  int64_t lVar12;
  char *pcVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint32_t *puVar16;
  uint64_t uVar17;
  int64_t in_R11;
  uint8_t *pbVar18;
  char *pcVar19;
  uint64_t uVar20;
  uint32_t uVar21;
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint32_t uStack_60;
  
  uVar15 = param_5 * -0x3333333333333333;
  uVar17 = (param_5 * 0x3333333333334000 | uVar15 >> 0x32) ^
           (param_5 * 0x3333333340000000 | uVar15 >> 0x22) ^ uVar15;
  pbVar18 = (uint8_t *)((uVar17 << 0x1c | uVar17 >> 0x24) ^ (uVar17 << 0x3c | uVar17 >> 4) ^ uVar17);
  pbVar11 = (uint8_t *)(~(uint64_t)pbVar18 & ((int64_t)pbVar18 << 0x30 | (uint64_t)pbVar18 >> 0x10))
  ;
  if ((param_3 + 0x957227ab >> 1 | (uint32_t)((param_3 + 0x957227ab & 1) != 0) << 0x1f) <=
      (param_3 | 1) * 0x5c3de1af) {
    pbVar11 = pbVar18;
  }
  uVar17 = *(uint64_t *)(in_R11 + -0x1aab0a39);
  if (uVar17 == 0) goto LAB_7fffa4e8de01;
  pcVar19 = *(char **)(in_R11 + -0x1aab0a41);
  lVar12 = *(int64_t *)(in_R11 + -0x1aab0a49) * 0x10;
  if (pcVar19 == pcVar19 + lVar12 + 0x10) {
    if (*(int64_t *)(in_R11 + -0x1aab0a29) != 0) goto LAB_7fffa4e8dcbe;
joined_r0x7fffa4e8ddc5:
    if (uVar17 == 0) goto LAB_7fffa4e8de01;
  }
  else {
    pcVar13 = pcVar19 + lVar12;
    lVar12 = 0;
    while( true ) {
      auVar22[0] = -(*pcVar19 == '\0');
      auVar22[1] = -(pcVar19[1] == '\0');
      auVar22[2] = -(pcVar19[2] == '\0');
      auVar22[3] = -(pcVar19[3] == '\0');
      auVar22[4] = -(pcVar19[4] == '\0');
      auVar22[5] = -(pcVar19[5] == '\0');
      auVar22[6] = -(pcVar19[6] == '\0');
      auVar22[7] = -(pcVar19[7] == '\0');
      auVar22[8] = -(pcVar19[8] == '\0');
      auVar22[9] = -(pcVar19[9] == '\0');
      auVar22[10] = -(pcVar19[10] == '\0');
      auVar22[0xb] = -(pcVar19[0xb] == '\0');
      auVar22[0xc] = -(pcVar19[0xc] == '\0');
      auVar22[0xd] = -(pcVar19[0xd] == '\0');
      auVar22[0xe] = -(pcVar19[0xe] == '\0');
      auVar22[0xf] = -(pcVar19[0xf] == '\0');
      for (uVar21 = ((uint32_t)(pcVar19 != pcVar13) << 0xe | 0x3fff) &
                    ~(uint32_t)(uint16_t)((uint16_t)(SUB161(auVar22 >> 7,0) & 1) |
                                    (uint16_t)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                    (uint16_t)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                    (uint16_t)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                    (uint16_t)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                    (uint16_t)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                    (uint16_t)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                    (uint16_t)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                    (uint16_t)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                    (uint16_t)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                    (uint16_t)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                    (uint16_t)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                    (uint16_t)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                    (uint16_t)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                    (uint16_t)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                   (uint16_t)(auVar22[0xf] >> 7) << 0xf); uVar21 != 0;
          uVar21 = uVar21 - 1 & uVar21) {
        uVar8 = 0;
        for (uVar4 = uVar21; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar14 = (uint64_t)uVar8;
        puVar16 = *(uint32_t **)(uVar17 + uVar14 * 8);
        uVar15 = SUB168(ZEXT416(*puVar16) * ZEXT816(0x9e3779b97f4a7c15),8) ^
                 SUB168(ZEXT416(*puVar16) * ZEXT816(0x9e3779b97f4a7c15),0);
        uVar20 = uVar15 >> (*pbVar11 & 0x3f);
        lVar9 = *(int64_t *)(pbVar11 + 0x10) + uVar20 * 0x10;
        pcVar1 = (char *)(*(int64_t *)(pbVar11 + 0x10) + uVar20 * 0x10);
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
        uVar8 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar23 >> 7,0) & 1) |
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
        if (uVar8 == 0) {
          lVar10 = 1;
          do {
            *(uint8_t *)(lVar9 + 0xf) = *(uint8_t *)(lVar9 + 0xf) | '\x01' << ((uint8_t)uVar15 & 7);
            uVar20 = uVar20 + lVar10 & *(uint64_t *)(pbVar11 + 8);
            lVar9 = *(int64_t *)(pbVar11 + 0x10) + uVar20 * 0x10;
            pcVar1 = (char *)(*(int64_t *)(pbVar11 + 0x10) + uVar20 * 0x10);
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
            uVar8 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar24 >> 7,0) & 1) |
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
            lVar10 = lVar10 + 1;
          } while (uVar8 == 0);
          puVar16 = *(uint32_t **)(uVar17 + uVar14 * 8);
        }
        uVar4 = 0;
        for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        bVar3 = (uint8_t)param_3 & 0xf;
        uVar2 = (&UNK_7fffa583271e)
                [(uVar15 & 0xff) * 4 + (int64_t)(short)(0x1740 << bVar3 | 0x1740U >> 0x10 - bVar3)]
        ;
        *(uint32_t **)(uVar20 * 0x78 + *(int64_t *)(pbVar11 + 0x18) + (uint64_t)uVar4 * 8) = puVar16;
        *(uint64_t *)(uVar17 + uVar14 * 8) = 0;
        *(uint8_t *)(lVar9 + (uint64_t)uVar4) = uVar2;
        uVar15 = *(uint64_t *)(uVar17 + uVar14 * 8);
        if (uVar15 != 0) {
          lVar9 = (uint64_t)(0xa248b2aa - (param_3 + 0x47f6c925)) - 0x2ad5363f;
          (*(code *)((int64_t)(int)(param_3 ^ 0xd0839cd3) + 0x7fffa5694c9a))
                    (lVar9,uVar15,
                     (~(uVar15 >> 0x3d) & uVar15) +
                     (uint64_t)(~(uint32_t)uVar15 & (uint32_t)(uVar15 >> 0x3d)) * lVar9);
        }
        lVar12 = lVar12 + 1;
      }
      uVar15 = 0;
      if (pcVar19 == pcVar13) break;
      uVar17 = uVar17 + 0x78;
      pcVar19 = pcVar19 + 0x10;
    }
    uVar17 = *(uint64_t *)(in_R11 + -0x1aab0a39);
    if (lVar12 == *(int64_t *)(in_R11 + -0x1aab0a29)) goto joined_r0x7fffa4e8ddc5;
LAB_7fffa4e8dcbe:
    if (uVar17 == 0) goto LAB_7fffa4e8de01;
    uVar15 = 0;
    pcVar19 = *(char **)(in_R11 + -0x1aab0a41);
    lVar12 = *(int64_t *)(in_R11 + -0x1aab0a49) * 0x10;
    if (pcVar19 != pcVar19 + lVar12 + 0x10) {
      pcVar13 = pcVar19 + lVar12;
      uStack_60 = param_3 | 1;
      while( true ) {
        auVar25[0] = -(*pcVar19 == '\0');
        auVar25[1] = -(pcVar19[1] == '\0');
        auVar25[2] = -(pcVar19[2] == '\0');
        auVar25[3] = -(pcVar19[3] == '\0');
        auVar25[4] = -(pcVar19[4] == '\0');
        auVar25[5] = -(pcVar19[5] == '\0');
        auVar25[6] = -(pcVar19[6] == '\0');
        auVar25[7] = -(pcVar19[7] == '\0');
        auVar25[8] = -(pcVar19[8] == '\0');
        auVar25[9] = -(pcVar19[9] == '\0');
        auVar25[10] = -(pcVar19[10] == '\0');
        auVar25[0xb] = -(pcVar19[0xb] == '\0');
        auVar25[0xc] = -(pcVar19[0xc] == '\0');
        auVar25[0xd] = -(pcVar19[0xd] == '\0');
        auVar25[0xe] = -(pcVar19[0xe] == '\0');
        auVar25[0xf] = -(pcVar19[0xf] == '\0');
        uVar21 = ((uint16_t)((uint16_t)(SUB161(auVar25 >> 7,0) & 1) |
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
                           (uint16_t)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                          (uint16_t)(auVar25[0xf] >> 7) << 0xf) ^ 0x7fff) &
                 ((uint32_t)(pcVar19 != pcVar13) << 0xe | 0x3fff);
        if (uVar21 != (uStack_60 * 0xb15f - 0x3b9b & 0xffff)) {
          do {
            uVar8 = 0;
            for (uVar4 = uVar21; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            if (*(int64_t *)(uVar17 + (uint64_t)uVar8 * 8) != 0) {
              (*(code *)(&UNK_7fffa568fe95 +
                        (int)((param_3 + 0xce79bcba) * 0x400000 | param_3 + 0xce79bcba >> 10)))();
            }
            uVar21 = uVar21 - 1 & uVar21;
          } while (uVar21 != 0);
        }
        if (pcVar19 == pcVar13) break;
        pcVar19 = pcVar19 + 0x10;
        uVar17 = uVar17 + 0x78;
      }
      uVar15 = 0;
      uVar17 = *(uint64_t *)(in_R11 + -0x1aab0a39);
      goto joined_r0x7fffa4e8ddc5;
    }
  }
  FUN_7fffa5687c30(param_3,FUN_7fffa5687c30,uVar17 >> 0x3d ^ uVar17,uVar15);
LAB_7fffa4e8de01:
  uVar5 = *(uint64_t *)pbVar11;
  uVar6 = *(uint64_t *)(pbVar11 + 8);
  uVar7 = *(uint64_t *)(pbVar11 + 0x18);
  *(uint64_t *)(in_R11 + -0x1aab0a41) = *(uint64_t *)(pbVar11 + 0x10);
  *(uint64_t *)(in_R11 + -0x1aab0a39) = uVar7;
  *(uint64_t *)(in_R11 + -0x1aab0a51) = uVar5;
  *(uint64_t *)(in_R11 + -0x1aab0a49) = uVar6;
  uVar15 = *(int64_t *)(in_R11 + -0x1aab0a49) * 0xf + 0xe;
  if (*(int64_t *)(in_R11 + -0x1aab0a39) == 0) {
    uVar15 = 0;
  }
  uVar17 = (uint64_t)((float)uVar15 * 0.875);
  uVar17 = (int64_t)((float)uVar15 * 0.875 - 9.223372e+18) & (int64_t)uVar17 >> 0x3f | uVar17;
  if (uVar15 < (param_3 | 1) * 0x207e0d24 + 0x2166496a) {
    uVar17 = uVar15;
  }
  *(uint64_t *)(in_R11 + -0x1aab0a31) = uVar17;
  return;
}


// ============================================================================
// Function : FUN_7fffa4e8dec0  |  RVA: 0x71dec0  |  Size: 1529 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4e8e008) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e8df11) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e8df43) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e8e00c) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e8e4ad) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e8e20b) */

void FUN_7fffa4e8dec0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  uVar2 = ~(lRam00007fffa47814f0 * 0x2c3d0e7581921cb3);
  uVar1 = uVar2 * -0x7ff001ffc007ff;
  uVar1 = (uVar2 * 0x7ff001ffc0080000 | uVar1 >> 0x2d) ^ (uVar2 * -0xffe003ff800000 | uVar1 >> 0x29)
          ^ uVar1;
  uVar1 = (uVar1 << 0x2e | uVar1 >> 0x12) ^ (uVar1 << 0x26 | uVar1 >> 0x1a) ^ uVar1;
  uRam00007fffa47bbcc0 = 0xdace6a014abe2552;
  uRam00007fffa47bbcb8 = 0x6d980790e2454799;
  uVar1 = (uVar1 << 0xc | uVar1 >> 0x34) ^ (uVar1 << 0x1c | uVar1 >> 0x24) ^ uVar1;
  uRam00007fffa47bbcb0 = (uVar1 << 0x18 | uVar1 >> 0x28) ^ (uVar1 << 0x38 | uVar1 >> 8) ^ uVar1;
  uVar1 = lRam00007fffa4780d38 - 1;
  uVar1 = (uVar1 * 0x200000 | uVar1 >> 0x2b) ^ (uVar1 * 0x80000 | uVar1 >> 0x2d) ^ uVar1;
  uVar1 = (uVar1 << 0x2a | uVar1 >> 0x16) ^ (uVar1 << 0x26 | uVar1 >> 0x1a) ^ uVar1;
  uVar1 = (uVar1 << 0x14 | uVar1 >> 0x2c) ^ (uVar1 << 0xc | uVar1 >> 0x34) ^ uVar1;
  uVar1 = (uVar1 << 0x28 | uVar1 >> 0x18) ^ (uVar1 << 0x18 | uVar1 >> 0x28) ^ uVar1;
  uRam00007fffa47bbcc8 =
       ((uVar1 ^ 0xffdac2a9bdb1f3fb ^
        (uVar1 << 0x30 | uVar1 >> 0x10) ^ (uVar1 << 0x10 | uVar1 >> 0x30)) - 0x7fffa56bcb10) *
       0x37cf24d3c870cd55 ^ 0x5e9793f8899d6dfe;
  uVar1 = (uRam00007fffa4781588 << 0xf | uRam00007fffa4781588 >> 0x31) * -0x5209791f;
  uRam00007fffa47bbce0 = 0xcd067ddfbe26b475;
  lVar3 = (uVar1 & 0xffffffff) * 0x9353d21;
  uVar1 = lVar3 + ((uVar1 >> 0x20) * 0x9353d21 + (uVar1 & 0xffffffff) * 0xfe0891af << 0x20);
  uVar1 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | lVar3 << 0x38;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  uRam00007fffa47bbcd8 = 0;
  lRam00007fffa47bbcd0 = (uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2;
  uVar1 = uRam00007fffa47813e0 << 0xf ^ uRam00007fffa47813e0;
  uVar1 = uRam00007fffa47813e0 << 0x3c ^ uVar1 << 0x1e ^ uVar1;
  lRam00007fffa47bbce8 = (uVar1 >> 0x36 ^ uVar1 >> 0x1b ^ uVar1) + 0xd7dd210503cd975c;
  return;
}


// ============================================================================
// Function : FUN_7fffa4e8e600  |  RVA: 0x71e600  |  Size: 905 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4e8e868) */

int64_t FUN_7fffa4e8e600(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  code *pcVar3;
  uint16_t uVar4;
  int iVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t *plVar11;
  uint32_t uVar12;
  int64_t in_R10;
  uint64_t uVar13;
  int64_t *plVar14;
  uint64_t uVar15;
  
  uVar13 = param_4 - 0x6097197b;
  uVar7 = uVar13 >> 0xd ^ uVar13;
  plVar14 = (int64_t *)
            (param_2 * 0xf8e4f8c9 *
             ((0x6850bceb637ea410U - in_R10) * 0x2000000 | 0x6850bceb637ea410U - in_R10 >> 0x27) -
             0xa765eb4c ^ 0x6fcde66);
  uVar1 = plVar14[2];
  uVar2 = plVar14[3];
  uVar13 = uVar7 >> 0x1a ^ uVar13 >> 0x34 ^ uVar7;
  uVar13 = (uVar13 << 0xf | uVar7 >> 0x31) ^ (uVar13 << 0x3d | uVar13 >> 3) ^ uVar13;
  uVar13 = (uVar13 << 0x3a | uVar13 >> 6) ^ (uVar13 << 0x1e | uVar13 >> 0x22) ^ uVar13;
  uVar13 = (uVar13 << 0x34 | uVar13 >> 0xc) ^ (uVar13 << 0x3c | uVar13 >> 4) ^ uVar13;
  uVar13 = (uVar13 << 0x28 | uVar13 >> 0x18) ^ (uVar13 << 0x38 | uVar13 >> 8) ^ uVar13;
  uVar13 = (uVar13 << 0x30 | uVar13 >> 0x10) ^ (uVar13 << 0x10 | uVar13 >> 0x30) ^ uVar13;
  uVar8 = uVar13 << 0x20 | uVar13 >> 0x20;
  uVar12 = (uint32_t)in_R10;
  uVar7 = uVar13 & uVar8;
  if ((uint64_t)(uVar12 + 0x52e0bc80) <=
      (0x1fffffded6bed4U - in_R10 << 0x33 | 0x1fffffded6bed4U - in_R10 >> 0xd)) {
    uVar7 = uVar8 ^ uVar13;
  }
  uVar7 = (uVar7 ^ uVar8) >> 0x3d ^ uVar7 ^ uVar8;
  if (uVar2 - uVar1 < uVar7) {
    if ((uVar1 ^ 0x7fffffffffffffff) < uVar7) {
      (*(code *)((int64_t)(int)((uVar12 | 1) * -0x6fe7632d + 0x74c92b4b) + 0x7fffa51a8326))();
      pcVar3 = (code *)__debugbreak();
      lVar10 = (*pcVar3)();
      return lVar10;
    }
    uVar8 = uVar1 + uVar7;
    uVar13 = 0x7fffffffffffffff;
    if ((-1 < (int64_t)uVar8) && (uVar2 <= (uVar2 >> 1 ^ 0x7fffffffffffffff))) {
      uVar15 = uVar2 + (uVar2 >> 1);
      uVar13 = uVar8 | 0xf;
      if ((uVar8 | 0xf) <= uVar15) {
        uVar13 = uVar15;
      }
    }
    uVar15 = uVar13 + 1;
    iVar5 = (int)CONCAT62((uint6)(uint16_t)(uVar12 + 0x52e0bc80 >> 0x10),0xc0d9) * 0x4ae7;
    uVar4 = (uint16_t)iVar5;
    uVar6 = CONCAT22((short)((uint32_t)iVar5 >> 0x10),uVar4 << 2 | uVar4 >> 0xe) ^ uVar12;
    uVar9 = (uint64_t)uVar6;
    (*(code *)((int64_t)(short)uVar6 + 0x7fffa52700c6))
              (uVar9,0x7fffa52700c6,(uVar15 << 0x3c ^ uVar15) + 0x1865d799980f + uVar15 * 0x4000);
    plVar14[3] = uVar13;
    plVar14[2] = uVar8;
    lVar10 = (uVar9 << 0x2c | uVar9 >> 0x14) - ((uVar9 >> 0x14) << 0x36);
    if (uVar2 < 0x10) {
      FUN_7fffa56a5f20(lVar10,plVar14,uVar1);
      FUN_7fffa4ecf8e0(uVar1 + lVar10,0,uVar7);
      *(uint8_t *)(uVar7 + uVar1 + lVar10) = 0;
    }
    else {
      FUN_7fffa56a5f20(lVar10,*plVar14,uVar1);
      FUN_7fffa4ecf8e0(lVar10 + uVar1,0,uVar7);
      *(uint8_t *)(uVar7 + lVar10 + uVar1) = 0;
      (*(code *)((int64_t)(int)~((0x768262c8 - uVar12) * 0x40 | 0x768262c8 - uVar12 >> 0x1a) +
                0x7fffa5697957))();
    }
    *plVar14 = lVar10;
  }
  else {
    plVar11 = plVar14;
    if (0xf < uVar2) {
      plVar11 = (int64_t *)*plVar14;
    }
    plVar14[2] = uVar7 + uVar1;
    FUN_7fffa4ecf8e0(uVar1 + (int64_t)plVar11,0,uVar7);
    *(uint8_t *)((int64_t)plVar11 + uVar7 + uVar1) = 0;
  }
  return (int64_t)plVar14 + 0xeb36078c;
}


// ============================================================================
// Function : FUN_7fffa4e8e990  |  RVA: 0x71e990  |  Size: 101 bytes
// Callers  : FUN_7fffa5668c80@0xef8c80, FUN_7fffa54279b0@0xcb79b0
// Callees  : FUN_7fffa52c403c@0xb5403c, FUN_7fffa54539d0@0xce39d0
// ============================================================================
uint64_t FUN_7fffa4e8e990(uint64_t *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  if ((iVar1 == -0x1fbcbcae) || (iVar1 == -0x1fbcb0b3)) {
    lVar4 = FUN_7fffa54539d0();
    if (0 < *(int *)(lVar4 + 0x30)) {
      lVar4 = FUN_7fffa54539d0();
      *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
    }
  }
  else if (iVar1 == -0x1f928c9d) {
    lVar4 = FUN_7fffa54539d0();
    *(int **)(lVar4 + 0x20) = piVar2;
    uVar5 = param_1[1];
    lVar4 = FUN_7fffa54539d0();
    *(uint64_t *)(lVar4 + 0x28) = uVar5;
    FUN_7fffa52c403c();
    pcVar3 = (code *)__debugbreak();
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa4e8ea00  |  RVA: 0x71ea00  |  Size: 180 bytes
// Callers  : FUN_7fffa54037a0@0xc937a0
// Callees  : FUN_7fffa5687890@0xf17890, FUN_7fffa5210660@0xaa0660, FUN_7fffa5607af0@0xe97af0, FUN_7fffa5224960@0xab4960, FUN_7fffa5246e30@0xad6e30
// ============================================================================
void FUN_7fffa4e8ea00(int64_t param_1,int64_t *param_2,int64_t param_3,int64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  if (-1 < *(int *)(param_3 + 4)) {
    param_2 = (int64_t *)((uint64_t)*(uint32_t *)(param_3 + 0xc) + *param_2);
  }
  iVar1 = FUN_7fffa5687890();
  if (iVar1 == 1) {
    uVar2 = FUN_7fffa5210660(*(uint64_t *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_7fffa5246e30();
      lVar3 = lVar3 + iVar1;
    }
    FUN_7fffa5224960(param_2,lVar3,uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_7fffa5210660(*(uint64_t *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_7fffa5246e30();
      lVar3 = lVar3 + iVar1;
    }
    FUN_7fffa5607af0(param_2,lVar3,uVar2,1);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4e8eac0  |  RVA: 0x71eac0  |  Size: 2768 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4e8eac0(void) {
    /* +0x71eac0 */ __asm { PUSH RBP }
    /* +0x71eac1 */ __asm { PUSH R12 }
    /* +0x71eac3 */ __asm { PUSH RBX }
    /* +0x71eac4 */ __asm { SUB RSP,0x70 }
    /* +0x71eac8 */ __asm { LEA RBP,[RSP + 0x70] }
    /* +0x71eacd */ __asm { MOV qword ptr [RBP + -0x8],-0x2 }
    /* +0x71ead5 */ __asm { MOV RBX,RAX }
    /* +0x71ead8 */ __asm { MOV R10,qword ptr [RBP + 0x18] }
    /* +0x71eadc */ __asm { MOV RCX,-0xc8d1562d32a6e9b }
    /* +0x71eae6 */ __asm { CMP qword ptr [R10 + 0xc0],RCX }
    /* +0x71eaed */ __asm { JZ 0x7fffa4e8f416 }
    /* +0x71eaf3 */ __asm { MOV uint8_t ptr [RBP + -0x29],0x0 }
    /* +0x71eaf7 */ __asm { RDTSC }
    /* +0x71eaf9 */ __asm { SHL RDX,0x20 }
    /* +0x71eafd */ __asm { OR RDX,RAX }
    /* +0x71eb00 */ __asm { MOV R10,-0x30ebf64fafbc6efb }
    /* +0x71eb0a */ __asm { IMUL R10,RDX }
    /* +0x71eb0e */ __asm { MOV R8,-0x22b18422c4a9c65e }
    /* +0x71eb18 */ __asm { ADD R8,R10 }
    /* +0x71eb1b */ __asm { MOV RAX,R8 }
    /* +0x71eb1e */ __asm { SHR RAX,0x2d }
    /* +0x71eb22 */ __asm { MOV RCX,R8 }
    /* +0x71eb25 */ __asm { SHR RCX,0x3b }
    /* +0x71eb29 */ __asm { SHR R8,0x1b }
    /* +0x71eb2d */ __asm { XOR R8D,EAX }
    /* +0x71eb30 */ __asm { ROR R8D,CL }
    /* +0x71eb33 */ __asm { AND R8D,0x3 }
    /* +0x71eb37 */ __asm { CMP R8D,0x2 }
    /* +0x71eb3b */ __asm { JNC 0x7fffa4e8ee6c }
    /* +0x71eb41 */ __asm { CMP R8D,0x1 }
    /* +0x71eb45 */ __asm { JZ 0x7fffa4e8ef2d }
    /* +0x71eb4b */ __asm { MOV R11D,0x3feb30f1 }
    /* +0x71eb51 */ __asm { MOV R10,0x382a15f9717a003f }
    /* +0x71eb5b */ __asm { ADD R10,RBX }
    /* +0x71eb5e */ __asm { ROL R10,0x13 }
    /* +0x71eb62 */ __asm { IMUL R10,R10,0x4282d1a5 }
    /* +0x71eb69 */ __asm { CMP R11,R10 }
    /* +0x71eb6c */ __asm { JZ 0x7fffa4e8f43d }
    /* +0x71eb72 */ __asm { MOV R10D,dword ptr [R11 + 0x4012d2cf] }
    /* +0x71eb79 */ __asm { MOV AX,0xb648 }
    /* +0x71eb7d */ __asm { XOR EAX,EBX }
    /* +0x71eb7f */ __asm { IMUL EAX,EAX,0xbff }
    /* +0x71eb85 */ __asm { ROL AX,0xd }
    /* +0x71eb89 */ __asm { MOVZX EAX,AX }
    /* +0x71eb8c */ __asm { CMP R10D,EAX }
    /* +0x71eb8f */ __asm { JBE 0x7fffa4e8f083 }
    /* +0x71eb95 */ __asm { MOV R9D,0xc58c2b77 }
    /* +0x71eb9b */ __asm { MOV R10,0x6766801050c45776 }
    /* +0x71eba5 */ __asm { RDTSC }
    /* +0x71eba7 */ __asm { SHL RDX,0x20 }
    /* +0x71ebab */ __asm { OR RDX,RAX }
    /* +0x71ebae */ __asm { IMUL R8D,R9D,-0x2268d2c7 }
    /* +0x71ebb5 */ __asm { MOV ECX,EBX }
    /* +0x71ebb7 */ __asm { ROR R8D,CL }
    /* +0x71ebba */ __asm { MOV EAX,0xd777cebd }
    /* +0x71ebbf */ __asm { SUB EAX,EBX }
    /* +0x71ebc1 */ __asm { XOR R10,-0x736aef1a }
    /* +0x71ebc8 */ __asm { ROR R10,CL }
    /* +0x71ebcb */ __asm { ADD EAX,0x1d1705f3 }
    /* +0x71ebd0 */ __asm { IMUL R10,R10,0x6bf04fd5 }
    /* +0x71ebd7 */ __asm { MOV RCX,0x5851f42d4c957f2d }
    /* +0x71ebe1 */ __asm { IMUL RCX,RDX }
    /* +0x71ebe5 */ __asm { MOV R9,-0x353c841b616c1f46 }
    /* +0x71ebef */ __asm { ADD R9,RCX }
    /* +0x71ebf2 */ __asm { MOV RCX,R9 }
    /* +0x71ebf5 */ __asm { SHR RCX,0x3b }
    /* +0x71ebf9 */ __asm { MOV RDX,R9 }
    /* +0x71ebfc */ __asm { SHR RDX,0x2d }
    /* +0x71ec00 */ __asm { SHR R9,0x1b }
    /* +0x71ec04 */ __asm { XOR EDX,R9D }
    /* +0x71ec07 */ __asm { ROR EDX,CL }
    /* +0x71ec09 */ __asm { MOV RCX,qword ptr [R8] }
    /* +0x71ec0c */ __asm { SUB RCX,qword ptr [RAX] }
    /* +0x71ec0f */ __asm { CMP RCX,R10 }
    /* +0x71ec12 */ __asm { JZ 0x7fffa4e8f41e }
    /* +0x71ec18 */ __asm { MOV R10D,0x57a586f7 }
    /* +0x71ec1e */ __asm { XOR R10D,EBX }
    /* +0x71ec21 */ __asm { ROL R10D,0x8 }
    /* +0x71ec25 */ __asm { ADD R10D,0xcbb670a1 }
    /* +0x71ec2c */ __asm { CMP EDX,R10D }
    /* +0x71ec2f */ __asm { JNC 0x7fffa4e8edf0 }
    /* +0x71ec35 */ __asm { MOV R10W,0xc1d6 }
    /* +0x71ec3a */ __asm { ADD R10D,EBX }
    /* +0x71ec3d */ __asm { MOV EAX,0xffff8c1e }
    /* +0x71ec42 */ __asm { SUB EAX,R10D }
    /* +0x71ec45 */ __asm { MOVZX R8D,AX }
    /* +0x71ec49 */ __asm { MOV R10,qword ptr GS:[R8] }
    /* +0x71ec4d */ __asm { MOV RCX,-0x2d429430bdc2256c }
    /* +0x71ec57 */ __asm { MOV EAX,0xede65e91 }
    /* +0x71ec5c */ __asm { XOR RAX,RCX }
    /* +0x71ec5f */ __asm { MOV ECX,EBX }
    /* +0x71ec61 */ __asm { ROL RAX,CL }
    /* +0x71ec64 */ __asm { CMP qword ptr [R10 + 0x30],RAX }
    /* +0x71ec68 */ __asm { JZ 0x7fffa4e8f426 }
    /* +0x71ec6e */ __asm { MOV R11D,0x9e7d7bd7 }
    /* +0x71ec74 */ __asm { MOV R10,0x4de782610444bd71 }
    /* +0x71ec7e */ __asm { CMP R11,R10 }
    /* +0x71ec81 */ __asm { JZ 0x7fffa4e8f7de }
    /* +0x71ec87 */ __asm { TEST uint8_t ptr [R11 + -0x1e7f7997],0x1 }
    /* +0x71ec8f */ __asm { JNZ 0x7fffa4e8edf0 }
    /* +0x71ec95 */ __asm { PUSHFQ }
    /* +0x71ec96 */ __asm { POP R8 }
    /* +0x71ec98 */ __asm { NOP }
    /* +0x71ec99 */ __asm { MOV R11,0x0 }
    /* +0x71eca0 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x71eca7 */ __asm { XORPS XMM1,XMM1 }
    /* +0x71ecaa */ __asm { MOVAPS xmmword ptr [RBP + -0x20],XMM1 }
    /* +0x71ecae */ __asm { TEST R8D,0x100 }
    /* +0x71ecb5 */ __asm { NOP }
    /* +0x71ecb6 */ __asm { NOP }
    /* +0x71ecb7 */ __asm { NOP }
    /* +0x71ecb8 */ __asm { NOP }
    /* +0x71ecb9 */ __asm { NOP }
    /* +0x71ecba */ __asm { MOV R10D,0xa424244d }
    /* +0x71ecc0 */ __asm { NOT R10D }
    /* +0x71ecc3 */ __asm { ADD R10D,EBX }
    /* +0x71ecc6 */ __asm { MOV dword ptr [RBP + -0x38],R10D }
    /* +0x71ecca */ __asm { MOV R10D,dword ptr [RBP + -0x38] }
    /* +0x71ecce */ __asm { CMP R10D,0x838c82a7 }
    /* +0x71ecd5 */ __asm { JBE 0x7fffa4e8f81f }
    /* +0x71ecdb */ __asm { MOV R8D,EBX }
    /* +0x71ecde */ __asm { OR R8D,0x1 }
    /* +0x71ece2 */ __asm { MOV dword ptr [RBP + -0x20],0x0 }
    /* +0x71ece9 */ __asm { MOV R10W,0x14b1 }
    /* +0x71ecee */ __asm { IMUL R10D,R8D }
    /* +0x71ecf2 */ __asm { ADD R10D,0x3247 }
    /* +0x71ecf9 */ __asm { MOVZX ECX,R10W }
    /* +0x71ecfd */ __asm { MOV R10,qword ptr GS:[RCX] }
    /* +0x71ed01 */ __asm { MOV RCX,0x3b33ef14789d6d38 }
    /* +0x71ed0b */ __asm { MOV R11,0x7f7204aa2d90097 }
    /* +0x71ed15 */ __asm { SUB R10,R11 }
    /* +0x71ed18 */ __asm { MOV RAX,-0x67794a5dca9fbbd3 }
    /* +0x71ed22 */ __asm { IMUL RAX,R10 }
    /* +0x71ed26 */ __asm { MOV R10,0x3149ae7f141b52ac }
    /* +0x71ed30 */ __asm { ADD R10,RAX }
    /* +0x71ed33 */ __asm { MOV RAX,RBX }
    /* +0x71ed36 */ __asm { OR RAX,0x1 }
    /* +0x71ed3a */ __asm { IMUL RAX,RCX }
    /* +0x71ed3e */ __asm { ROL RAX,0x19 }
    /* +0x71ed42 */ __asm { XOR RAX,R10 }
    /* +0x71ed45 */ __asm { CMP RAX,-0x1 }
    /* +0x71ed49 */ __asm { JNZ 0x7fffa4e8ed55 }
    /* +0x71ed4b */ __asm { CLI }
    /* +0x71ed4c */ __asm { ADD AL,0x6d }
    /* +0x71ed4e */ __asm { OR EAX,0x97bdc8aa }
    /* +0x71ed53 */ __asm { JLE 0x7fffa4e8ed9f }
    /* +0x71ed55 */ __asm { PUSHFQ }
    /* +0x71ed56 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x71ed5e */ __asm { POPFQ }
    /* +0x71ed5f */ __asm { MOV R10D,0x9b38f101 }
    /* +0x71ed65 */ __asm { IMUL R10D,R10D,-0x3ffffd11 }
    /* +0x71ed6c */ __asm { MOV ECX,EBX }
    /* +0x71ed6e */ __asm { ROL R10D,CL }
    /* +0x71ed71 */ __asm { MOV dword ptr [RBP + -0x38],R10D }
    /* +0x71ed75 */ __asm { MOV R10D,dword ptr [RBP + -0x38] }
    /* +0x71ed79 */ __asm { CMP R10D,0xe34d512 }
    /* +0x71ed80 */ __asm { JNC 0x7fffa4e8f827 }
    /* +0x71ed86 */ __asm { LEA R11,[0x7fffa47bcc97] }
    /* +0x71ed8d */ __asm { MOV R10,0x1f4429308079801f }
    /* +0x71ed97 */ __asm { CMP R11,R10 }
    /* +0x71ed9a */ __asm { JZ 0x7fffa4e8f838 }
    /* +0x71eda0 */ __asm { MOV R10W,0x6536 }
    /* +0x71eda5 */ __asm { IMUL R8D,R10D }
    /* +0x71eda9 */ __asm { MOV AX,0xc202 }
    /* +0x71edad */ __asm { ADD EAX,0xffffbe00 }
    /* +0x71edb2 */ __asm { XOR R8D,0x7bd9 }
    /* +0x71edb9 */ __asm { MOVSX R10,R8W }
    /* +0x71edbd */ __asm { MOV R9W,0xc067 }
    /* +0x71edc2 */ __asm { IMUL R9D,R9D,-0x269f }
    /* +0x71edc9 */ __asm { XOR R9D,EBX }
    /* +0x71edcc */ __asm { MOV ECX,EBX }
    /* +0x71edce */ __asm { ROR AX,CL }
    /* +0x71edd1 */ __asm { NOT R9D }
    /* +0x71edd4 */ __asm { MOVZX R9D,R9W }
    /* +0x71edd8 */ __asm { ROL AX,0xc }
    /* +0x71eddc */ __asm { MOVZX EDX,AX }
    /* +0x71eddf */ __asm { MOV qword ptr [RBP + -0x38],RCX }
    /* +0x71ede3 */ __asm { MOV EAX,dword ptr [R11 + 0x341] }
    /* +0x71edea */ __asm { LEA R8,[RBP + -0x20] }
    /* +0x71edee */ __asm { SYSCALL }
    /* +0x71edf0 */ __asm { LEA R11,[0x7fffa4782dbf] }
    /* +0x71edf7 */ __asm { MOV R10,0x13ba303a9d3bd68d }
    /* +0x71ee01 */ __asm { CMP R11,R10 }
    /* +0x71ee04 */ __asm { NOP }
    /* +0x71ee05 */ __asm { NOP }
    /* +0x71ee06 */ __asm { NOP }
    /* +0x71ee07 */ __asm { NOP }
    /* +0x71ee08 */ __asm { NOP }
    /* +0x71ee09 */ __asm { NOP }
    /* +0x71ee0a */ __asm { NOP }
    /* +0x71ee0b */ __asm { NOP }
    /* +0x71ee0c */ __asm { NOP }
    /* +0x71ee0d */ __asm { NOP }
    /* +0x71ee0e */ __asm { NOP }
    /* +0x71ee0f */ __asm { MOV R10W,0x8c3 }
    /* +0x71ee14 */ __asm { MOV qword ptr [RBP + -0x20],RCX }
    /* +0x71ee18 */ __asm { MOV EAX,dword ptr [R11 + 0x18a5] }
    /* +0x71ee1f */ __asm { MOV R9W,0x9fb4 }
    /* +0x71ee24 */ __asm { MOV R11D,EBX }
    /* +0x71ee27 */ __asm { SUB R11D,R9D }
    /* +0x71ee2a */ __asm { IMUL R10D,R10D,0x4ded }
    /* +0x71ee31 */ __asm { ADD R10D,0x3d79 }
    /* +0x71ee38 */ __asm { MOV ECX,EBX }
    /* +0x71ee3a */ __asm { ROR R10W,CL }
    /* +0x71ee3e */ __asm { ADD R11D,0xffffd5d3 }
    /* +0x71ee45 */ __asm { MOVZX R9D,R10W }
    /* +0x71ee49 */ __asm { MOVZX EDX,R11W }
    /* +0x71ee4d */ __asm { MOV R10D,0x28bf92d5 }
    /* +0x71ee53 */ __asm { IMUL R10D,R10D,-0x51b3e50d }
    /* +0x71ee5a */ __asm { ADD R10D,0x8001fcd0 }
    /* +0x71ee61 */ __asm { ROR R10D,CL }
    /* +0x71ee64 */ __asm { MOVSXD R10,R10D }
    /* +0x71ee67 */ __asm { JMP 0x7fffa4e8f73f }
    /* +0x71ee6c */ __asm { CMP R8D,0x3 }
    /* +0x71ee70 */ __asm { JNZ 0x7fffa4e8efd9 }
    /* +0x71ee76 */ __asm { MOV R11D,0x8176a04e }
    /* +0x71ee7c */ __asm { MOV R10,0x1e2198fc04c6243 }
    /* +0x71ee86 */ __asm { CMP R11,R10 }
    /* +0x71ee89 */ __asm { JZ 0x7fffa4e8f445 }
    /* +0x71ee8f */ __asm { MOV RCX,0x0 }
    /* +0x71ee96 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x71ee9d */ __asm { MOV R10,qword ptr [R11 + -0x178a046] }
    /* +0x71eea4 */ __asm { MOV RCX,-0x50db798361a79b79 }
    /* +0x71eeae */ __asm { MOV RAX,R10 }
    /* +0x71eeb1 */ __asm { MUL RCX }
    /* +0x71eeb4 */ __asm { MOV RCX,RDX }
    /* +0x71eeb7 */ __asm { MOV R9D,0x146846f }
    /* +0x71eebd */ __asm { MOV RAX,R10 }
    /* +0x71eec0 */ __asm { MUL R9 }
    /* +0x71eec3 */ __asm { ADD RAX,RCX }
    /* +0x71eec6 */ __asm { ADC RDX,0x0 }
    /* +0x71eeca */ __asm { TEST DL,0x1 }
    /* +0x71eecd */ __asm { JNZ 0x7fffa4e8f112 }
    /* +0x71eed3 */ __asm { LEA R11,[0x7fffa47b9a9d] }
    /* +0x71eeda */ __asm { MOV R10W,0x1c13 }
    /* +0x71eedf */ __asm { MOV EAX,EBX }
    /* +0x71eee1 */ __asm { OR EAX,0x1 }
    /* +0x71eee4 */ __asm { MOV R9W,0x875b }
    /* +0x71eee9 */ __asm { IMUL R9D,EAX }
    /* +0x71eeed */ __asm { XOR R9D,0xa4d4 }
    /* +0x71eef4 */ __asm { IMUL R8D,R10D,-0x477f }
    /* +0x71eefb */ __asm { ROL R8W,0x7 }
    /* +0x71ef00 */ __asm { MOVZX EDX,R9W }
    /* +0x71ef04 */ __asm { SUB R8D,EBX }
    /* +0x71ef07 */ __asm { MOVSX R10,R8W }
    /* +0x71ef0b */ __asm { MOV qword ptr [RBP + -0x20],RCX }
    /* +0x71ef0f */ __asm { MOV R9W,0xcb20 }
    /* +0x71ef14 */ __asm { IMUL R9D,EAX }
    /* +0x71ef18 */ __asm { ROL R9W,0xb }
    /* +0x71ef1d */ __asm { MOVZX R9D,R9W }
    /* +0x71ef21 */ __asm { MOV EAX,dword ptr [R11 + 0x34eb] }
    /* +0x71ef28 */ __asm { JMP 0x7fffa4e8f73f }
    /* +0x71ef2d */ __asm { MOV R10,-0x15dfaa4f0e119d82 }
    /* +0x71ef37 */ __asm { MOV R11D,0x56ce8b0c }
    /* +0x71ef3d */ __asm { MOV R8,RBX }
    /* +0x71ef40 */ __asm { OR R8,0x1 }
    /* +0x71ef44 */ __asm { IMUL R8,R10 }
    /* +0x71ef48 */ __asm { IMUL R10,R8,0xa9e7aa9 }
    /* +0x71ef4f */ __asm { MOV RCX,-0x287d96979a02f50 }
    /* +0x71ef59 */ __asm { ADD RCX,R10 }
    /* +0x71ef5c */ __asm { CMP R11,RCX }
    /* +0x71ef5f */ __asm { JZ 0x7fffa4e8f44d }
    /* +0x71ef65 */ __asm { TEST uint8_t ptr [R11 + 0x292f7734],0x1 }
    /* +0x71ef6d */ __asm { JNZ 0x7fffa4e8f45e }
    /* +0x71ef73 */ __asm { LEA R11,[0x7fffa47c0087] }
    /* +0x71ef7a */ __asm { MOV R10,0x4d7696ff11528eca }
    /* +0x71ef84 */ __asm { CMP R11,R10 }
    /* +0x71ef87 */ __asm { JZ 0x7fffa4e8f7b4 }
    /* +0x71ef8d */ __asm { MOV R10D,0x33ecb6ff }
    /* +0x71ef93 */ __asm { ADD R10D,0xcc134a01 }
    /* +0x71ef9a */ __asm { MOV ECX,EBX }
    /* +0x71ef9c */ __asm { ROR R10D,CL }
    /* +0x71ef9f */ __asm { NOT R10D }
    /* +0x71efa2 */ __asm { MOVSXD R10,R10D }
    /* +0x71efa5 */ __asm { MOV AX,0x18bd }
    /* +0x71efa9 */ __asm { IMUL EAX,EAX,-0x282d }
    /* +0x71efaf */ __asm { ADD EAX,0xffffe839 }
    /* +0x71efb4 */ __asm { ROL AX,CL }
    /* +0x71efb7 */ __asm { MOVZX EDX,AX }
    /* +0x71efba */ __asm { MOV R9W,0x3616 }
    /* +0x71efbf */ __asm { ADD R9D,EBX }
    /* +0x71efc2 */ __asm { MOV qword ptr [RBP + -0x20],RCX }
    /* +0x71efc6 */ __asm { MOV EAX,dword ptr [R11 + -0x30ff] }
    /* +0x71efcd */ __asm { NOT R9D }
    /* +0x71efd0 */ __asm { MOVZX R9D,R9W }
    /* +0x71efd4 */ __asm { JMP 0x7fffa4e8f73f }
    /* +0x71efd9 */ __asm { MOV R11D,0xf5980a91 }
    /* +0x71efdf */ __asm { MOV R10,0x12091e6eb125b495 }
    /* +0x71efe9 */ __asm { CMP R11,R10 }
    /* +0x71efec */ __asm { JZ 0x7fffa4e8f6ad }
    /* +0x71eff2 */ __asm { TEST uint8_t ptr [R11 + -0x759a0851],0x1 }
    /* +0x71effa */ __asm { JZ 0x7fffa4e8f6c8 }
    /* +0x71f000 */ __asm { LEA R11,[0x7fffa47b96c8] }
    /* +0x71f007 */ __asm { MOV R10,-0x9be59bda1795285 }
    /* +0x71f011 */ __asm { CMP R11,R10 }
    /* +0x71f014 */ __asm { NOP }
    /* +0x71f015 */ __asm { NOP }
    /* +0x71f016 */ __asm { NOP }
    /* +0x71f017 */ __asm { NOP }
    /* +0x71f018 */ __asm { NOP }
    /* +0x71f019 */ __asm { NOP }
    /* +0x71f01a */ __asm { NOP }
    /* +0x71f01b */ __asm { NOP }
    /* +0x71f01c */ __asm { NOP }
    /* +0x71f01d */ __asm { NOP }
    /* +0x71f01e */ __asm { NOP }
    /* +0x71f01f */ __asm { NOP }
    /* +0x71f020 */ __asm { NOP }
    /* +0x71f021 */ __asm { NOP }
    /* +0x71f022 */ __asm { NOP }
    /* +0x71f023 */ __asm { NOP }
    /* +0x71f024 */ __asm { MOV R10D,EBX }
    /* +0x71f027 */ __asm { OR R10D,0x1 }
    /* +0x71f02b */ __asm { MOV AX,0xa1f0 }
    /* +0x71f02f */ __asm { IMUL EAX,EAX,0x7873 }
    /* +0x71f035 */ __asm { MOV R9D,0xc67730e0 }
    /* +0x71f03b */ __asm { XOR EAX,0x8c9 }
    /* +0x71f040 */ __asm { XOR R9D,0x9abb6011 }
    /* +0x71f047 */ __asm { ADD R9D,0xa0da725d }
    /* +0x71f04e */ __asm { IMUL R9D,R10D }
    /* +0x71f052 */ __asm { MOVSXD R10,R9D }
    /* +0x71f055 */ __asm { ADD EAX,EBX }
    /* +0x71f057 */ __asm { MOVZX R9D,AX }
    /* +0x71f05b */ __asm { MOV qword ptr [RBP + -0x20],RCX }
    /* +0x71f05f */ __asm { MOV EAX,dword ptr [R11 + 0x38c0] }
    /* +0x71f066 */ __asm { MOV R11W,0xcc68 }
    /* +0x71f06b */ __asm { XOR R11D,0x5294 }
    /* +0x71f072 */ __asm { ROL R11W,0xc }
    /* +0x71f077 */ __asm { XOR R11D,EBX }
    /* +0x71f07a */ __asm { MOVZX EDX,R11W }
    /* +0x71f07e */ __asm { JMP 0x7fffa4e8f73f }
    /* +0x71f083 */ __asm { LEA R11,[0x7fffa47c2c37] }
    /* +0x71f08a */ __asm { MOV R10,-0x468344bfd82a4da6 }
    /* +0x71f094 */ __asm { CMP R11,R10 }
    /* +0x71f097 */ __asm { JZ 0x7fffa4e8f7bc }
    /* +0x71f09d */ __asm { MOV RCX,R11 }
    /* +0x71f0a0 */ __asm { AND RCX,-0x5ce7 }
    /* +0x71f0a7 */ __asm { MOV R10W,0x3aa8 }
    /* +0x71f0ac */ __asm { ADD R11,-0x5ce7 }
    /* +0x71f0b3 */ __asm { MOV EAX,0xefdc9190 }
    /* +0x71f0b8 */ __asm { MOV R9W,0x89e8 }
    /* +0x71f0bd */ __asm { XOR R9D,EBX }
    /* +0x71f0c0 */ __asm { MOV R8W,0x6b9a }
    /* +0x71f0c5 */ __asm { MOV EDX,0x21363739 }
    /* +0x71f0ca */ __asm { MOV R12D,0x943bdd7b }
    /* +0x71f0d0 */ __asm { SUB R12D,EDX }
    /* +0x71f0d3 */ __asm { MOV qword ptr [RBP + -0x20],RDX }
    /* +0x71f0d7 */ __asm { ADD EAX,EBX }
    /* +0x71f0d9 */ __asm { XOR EAX,0x459be292 }
    /* +0x71f0de */ __asm { CMP R12,RAX }
    /* +0x71f0e1 */ __asm { CMOVL R11,RCX }
    /* +0x71f0e5 */ __asm { MOV EAX,dword ptr [R11 + 0x38] }
    /* +0x71f0e9 */ __asm { MOV R11D,EBX }
    /* +0x71f0ec */ __asm { SUB R11D,R10D }
    /* +0x71f0ef */ __asm { ADD R11D,0x70c7 }
    /* +0x71f0f6 */ __asm { MOVZX EDX,R11W }
    /* +0x71f0fa */ __asm { ROL R9W,0x2 }
    /* +0x71f0ff */ __asm { MOVZX R9D,R9W }
    /* +0x71f103 */ __asm { XOR R8D,EBX }
    /* +0x71f106 */ __asm { IMUL R8D,R8D,0x32f7 }
    /* +0x71f10d */ __asm { JMP 0x7fffa4e8f73b }
    /* +0x71f112 */ __asm { MOV EAX,0x150ee70b }
    /* +0x71f117 */ __asm { ADD EAX,0x93bdb532 }
    /* +0x71f11c */ __asm { PUSHFQ }
    /* +0x71f11d */ __asm { POP R8 }
    /* +0x71f11f */ __asm { MOV EDX,R8D }
    /* +0x71f122 */ __asm { MOV ECX,EBX }
    /* +0x71f124 */ __asm { ROR EAX,CL }
    /* +0x71f126 */ __asm { AND EDX,0x100 }
    /* +0x71f12c */ __asm { ADD R8,-0x100 }
    /* +0x71f133 */ __asm { XOR EAX,0x688556db }
    /* +0x71f138 */ __asm { MOV R10D,0xc00a0039 }
    /* +0x71f13e */ __asm { CMP RAX,R10 }
    /* +0x71f141 */ __asm { CMOVNZ R8,RDX }
    /* +0x71f145 */ __asm { RDTSC }
    /* +0x71f147 */ __asm { SHL RDX,0x20 }
    /* +0x71f14b */ __asm { OR RDX,RAX }
    /* +0x71f14e */ __asm { MOV R10,-0x2ecbdabc217d106b }
    /* +0x71f158 */ __asm { IMUL R10,RDX }
    /* +0x71f15c */ __asm { MOV RDX,0x4af223d6d1190e76 }
    /* +0x71f166 */ __asm { ADD RDX,R10 }
    /* +0x71f169 */ __asm { MOV RCX,RDX }
    /* +0x71f16c */ __asm { SHR RCX,0x3b }
    /* +0x71f170 */ __asm { MOV RAX,RDX }
    /* +0x71f173 */ __asm { SHR RAX,0x1b }
    /* +0x71f177 */ __asm { SHR RDX,0x2d }
    /* +0x71f17b */ __asm { XOR EAX,EDX }
    /* +0x71f17d */ __asm { ROR EAX,CL }
    /* +0x71f17f */ __asm { TEST R8,R8 }
    /* +0x71f182 */ __asm { NOP }
    /* +0x71f183 */ __asm { NOP }
    /* +0x71f184 */ __asm { NOP }
    /* +0x71f185 */ __asm { NOP }
    /* +0x71f186 */ __asm { NOP }
    /* +0x71f187 */ __asm { NOP }
    /* +0x71f188 */ __asm { NOP }
    /* +0x71f189 */ __asm { NOP }
    /* +0x71f18a */ __asm { NOP }
    /* +0x71f18b */ __asm { NOP }
    /* +0x71f18c */ __asm { MOV dword ptr [RBP + -0x20],0x3c086903 }
    /* +0x71f193 */ __asm { MOV R10D,dword ptr [RBP + -0x20] }
    /* +0x71f197 */ __asm { TEST R10D,R10D }
    /* +0x71f19a */ __asm { NOP }
    /* +0x71f19b */ __asm { NOP }
    /* +0x71f19c */ __asm { NOP }
    /* +0x71f19d */ __asm { NOP }
    /* +0x71f19e */ __asm { NOP }
    /* +0x71f19f */ __asm { NOP }
    /* +0x71f1a0 */ __asm { NOP }
    /* +0x71f1a1 */ __asm { NOP }
    /* +0x71f1a2 */ __asm { NOP }
    /* +0x71f1a3 */ __asm { NOP }
    /* +0x71f1a4 */ __asm { NOP }
    /* +0x71f1a5 */ __asm { NOP }
    /* +0x71f1a6 */ __asm { NOP }
    /* +0x71f1a7 */ __asm { NOP }
    /* +0x71f1a8 */ __asm { NOP }
    /* +0x71f1a9 */ __asm { NOP }
    /* +0x71f1aa */ __asm { NOP }
    /* +0x71f416 */ __asm { AND dword ptr DS:[RAX + -0x92a17],0xad814aff }
    /* +0x71f421 */ __asm { JMP 0x7fffa4e8ec18 }
    /* +0x71f426 */ __asm { AND EAX,0x3dc3a640 }
    /* +0x71f42b */ __asm { JMP 0x7fffa4e8ec6e }
    /* +0x71f43d */ __asm { MOV AL,ES:[0x158976fffff72de9] }
    /* +0x71f448 */ __asm { JMP 0x7fffa4e8ee8f }
    /* +0x71f44d */ __asm { ADD dword ptr [RDX + 0x3483f641],0x1292f77 }
    /* +0x71f458 */ __asm { JZ 0x7fffa4e8ef73 }
    /* +0x71f45e */ __asm { RDTSC }
    /* +0x71f460 */ __asm { SHL RDX,0x20 }
    /* +0x71f464 */ __asm { OR RDX,RAX }
    /* +0x71f467 */ __asm { MOV R10,0x7facc0f7a00541bd }
    /* +0x71f471 */ __asm { IMUL R10,RDX }
    /* +0x71f475 */ __asm { MOV RAX,0x597a9d3d6f5a65f2 }
    /* +0x71f47f */ __asm { ADD RAX,R10 }
    /* +0x71f482 */ __asm { MOV RCX,RAX }
    /* +0x71f485 */ __asm { SHR RCX,0x3b }
    /* +0x71f489 */ __asm { MOV R8,RAX }
    /* +0x71f48c */ __asm { SHR R8,0x1b }
    /* +0x71f490 */ __asm { SHR RAX,0x2d }
    /* +0x71f494 */ __asm { XOR EAX,R8D }
    /* +0x71f497 */ __asm { ROR EAX,CL }
    /* +0x71f499 */ __asm { MOV dword ptr [RBP + -0x20],0x25d32456 }
    /* +0x71f4a0 */ __asm { MOV R10D,dword ptr [RBP + -0x20] }
    /* +0x71f4a4 */ __asm { MOV R9D,EBX }
    /* +0x71f4a7 */ __asm { OR R9D,0x1 }
    /* +0x71f4ab */ __asm { MOV R11W,0x3081 }
    /* +0x71f4b0 */ __asm { ADD R11D,-0x7b }
    /* +0x71f4b4 */ __asm { IMUL R11D,R9D }
    /* +0x71f4b8 */ __asm { ADD R11D,0xffff9489 }
    /* +0x71f4bf */ __asm { MOVSX R9D,R11W }
    /* +0x71f4c3 */ __asm { CMP R10D,R9D }
    /* +0x71f4c6 */ __asm { NOP }
    /* +0x71f4c7 */ __asm { NOP }
    /* +0x71f4c8 */ __asm { NOP }
    /* +0x71f4c9 */ __asm { NOP }
    /* +0x71f4ca */ __asm { NOP }
    /* +0x71f4cb */ __asm { PUSHFQ }
    /* +0x71f4cc */ __asm { POP R8 }
    /* +0x71f4ce */ __asm { TEST R8D,0x100 }
    /* +0x71f4d5 */ __asm { NOP }
    /* +0x71f4d6 */ __asm { NOP }
    /* +0x71f4d7 */ __asm { NOP }
    /* +0x71f4d8 */ __asm { NOP }
    /* +0x71f4d9 */ __asm { NOP }
    /* +0x71f4da */ __asm { CMP EAX,0x43f046 }
    /* +0x71f4df */ __asm { JA 0x7fffa4e8f61a }
    /* +0x71f4e5 */ __asm { MOV R10W,0x48d8 }
    /* +0x71f4ea */ __asm { IMUL R10D,R10D,0x316b }
    /* +0x71f4f1 */ __asm { SUB R10D,EBX }
    /* +0x71f4f4 */ __asm { MOVZX ECX,R10W }
    /* +0x71f4f8 */ __asm { MOV R10,qword ptr GS:[RCX] }
    /* +0x71f4fc */ __asm { MOV AX,0x36a3 }
    /* +0x71f500 */ __asm { IMUL EAX,EAX,-0x435b }
    /* +0x71f506 */ __asm { NOT EAX }
    /* +0x71f508 */ __asm { IMUL EAX,EAX,0x510d }
    /* +0x71f50e */ __asm { MOVZX ECX,AX }
    /* +0x71f511 */ __asm { MOV R10,qword ptr [R10 + 0x18] }
    /* +0x71f515 */ __asm { MOV RCX,qword ptr GS:[RCX] }
    /* +0x71f519 */ __asm { ADD R10,qword ptr [RCX + 0x4e0] }
    /* +0x71f520 */ __asm { MOV RCX,-0x1d862a692f0eaa93 }
    /* +0x71f52a */ __asm { CMP R10,RCX }
    /* +0x71f52d */ __asm { JNZ 0x7fffa4e8f539 }
    /* +0x71f52f */ __asm { MOV [0x4342115fa1a60ef0],EAX }
    /* +0x71f538 */ __asm { OUT DX,EAX }
    /* +0x71f539 */ __asm { XORPS XMM1,XMM1 }
    /* +0x71f53c */ __asm { MOVAPS xmmword ptr [RBP + -0x20],XMM1 }
    /* +0x71f540 */ __asm { MOV dword ptr [RBP + -0x38],0x3bf6bf65 }
    /* +0x71f547 */ __asm { MOV R10D,dword ptr [RBP + -0x38] }
    /* +0x71f54b */ __asm { TEST R10D,R10D }
    /* +0x71f54e */ __asm { JS 0x7fffa4e8f7fa }
    /* +0x71f554 */ __asm { PUSHFQ }
    /* +0x71f555 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x71f55d */ __asm { POPFQ }
    /* +0x71f55e */ __asm { MOV dword ptr [RBP + -0x20],0x0 }
    /* +0x71f565 */ __asm { MOV dword ptr [RBP + -0x38],0xed446358 }
    /* +0x71f56c */ __asm { MOV R10D,dword ptr [RBP + -0x38] }
    /* +0x71f570 */ __asm { TEST R10D,R10D }
    /* +0x71f573 */ __asm { JNS 0x7fffa4e8f802 }
    /* +0x71f579 */ __asm { TEST R8D,0x100 }
    /* +0x71f580 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4e8f850  |  RVA: 0x71f850  |  Size: 47 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e8f850(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)(int)((*(uint32_t *)(param_2 + 0x48) ^ 0xe75fac86) * -0x4982ae63) +
            0x7fffa563516a))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa4e8f940  |  RVA: 0x71f940  |  Size: 1632 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4e8f940(void)

{
  uint16_t uVar1;
  uint8_t bVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t unaff_RSI;
  uint32_t uVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint32_t uVar8;
  uint64_t uVar9;
  uint64_t uStack_88;
  int64_t lStack_48;
  
  uVar9 = (unaff_RSI | 0xffffffff136ebc09) * -0x14a70649f +
          ((~unaff_RSI & 0xffffffff136ebc09) + (unaff_RSI | 0xec9143f6)) * 0xe3322d5d +
          (~unaff_RSI & 0xec9143f6) * -0x14a70649f;
  uVar8 = (uint32_t)uVar9;
  bVar2 = (uint8_t)uVar9 & 0x1f;
  lVar4 = (int64_t)(int)(0xfffd18dbU >> bVar2 | -0x2e725 << 0x20 - bVar2);
  *(uint8_t (*) [16])(lVar4 + 0x7fffa47c86a2) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar4 + 0x7fffa47c8692) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar4 + 0x7fffa47c8682) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar4 + 0x7fffa47c8672) = (uint8_t  [16])0x0;
  if ((0x2233a5c5 - uVar8 ^ 0x3756532d) == (uVar8 ^ 0x9f67705b)) {
    uVar3 = (uint64_t)((uVar8 + 0x761e3641) * 0x10000 | uVar8 + 0x761e3641 >> 0x10);
    lStack_48 = *(int64_t *)
                 ((int64_t)(int)((uVar8 + 0xe209c8bc) * 0x4000 | uVar8 + 0xe209c8bc >> 0x12) +
                 0x7fffa4787fb7);
    *(uint64_t *)((int64_t)(int)(uVar8 + 0x98c111ca) + 0x7fffa47c83c4) =
         (0xa588725761ba9c2c - uVar9) * 0x20000000 | 0xa588725761ba9c2c - uVar9 >> 0x23;
    *(uint64_t *)((int64_t)(int)((uVar8 | 1) * 0x584c0df4) + 0x7fffa47cb9e4) = 0x8322acfce3860e96
    ;
    uStack_88 = ((int64_t)
                 (int)(((0xfee2fcb4 - uVar8) * 0x10000000 | 0xfee2fcb4 - uVar8 >> 4) ^ 0xd6856cac) +
                0x5590d5f7c755e) * 0x800 |
                (int64_t)(int)((uVar8 | 1) * -0x587a906d + 0x52807ea8) + 0xa225590d5f7c4f38U >>
                0x35;
  }
  else {
    uVar3 = (uint64_t)(int)(0xebf9e06 - uVar8);
    lStack_48 = lRam00007fffa4781208;
    *(uint64_t *)((int64_t)(int)(0x673d9a64 - uVar8) + 0x7fffa47c69ae) =
         ~(uVar9 + 0x20b073624410ba73);
    lVar4 = (uVar9 ^ 0x4191567ea3aa763d) - 0x52d13a34;
    *(uint64_t *)((int64_t)(int)((uVar8 | 1) * -0x6824b90f) + 0x7fffa47c74ad) =
         lVar4 * 2 | (uint64_t)(lVar4 < 0);
    uStack_88 = ((int64_t)(int)((uVar8 ^ 0x98a5c43d) << 0x19 | (uVar8 ^ 0x98a5c43d) >> 7) +
                0x5590d5f7c5e73) * 0x800 |
                (int64_t)
                (int)(((0xd41e674c - uVar8) * 0x1000 | 0xd41e674c - uVar8 >> 0x14) + 0xfcfeb1dd) +
                0xa225590d5f7c3daeU >> 0x35;
  }
  bVar2 = (uint8_t)uVar3;
  uVar5 = uVar8 | 1;
  uVar7 = (uVar9 | 1) * 0xa1b8f2f2ece66d8;
  uVar1 = (uint16_t)uVar3;
  *(uint64_t *)
   ((int64_t)(short)((~(uVar1 ^ 0x8934) << 0xb | (uint16_t)~(uVar1 ^ 0x8934) >> 5) + 0x45da) +
   0x7fffa47c0e6e) = (uVar7 << (bVar2 & 0x3f) | uVar7 >> 0x40 - (bVar2 & 0x3f)) * 0x6fa59b69;
  *(uint64_t *)((int64_t)(short)(((short)uVar9 + 0xdc51U ^ 0x9634) + uVar1) + 0x7fffa47be045) =
       (uint64_t)
       (&UNK_7fffa56c8d5b + (int)((uVar5 * -0x20000000 | uVar5 * -0x164cb744 >> 5) - (uint32_t)uVar3)) ^
       0x2f89705c29cebe11;
  uVar6 = (uint32_t)uVar3 | 1;
  *(uint64_t *)((int64_t)(short)((0x2bc8 - (short)uVar9) * (short)uVar6) + 0x7fffa47c3dba) =
       ~((uVar9 & 0xffffffff | 1) * 0x7dac79ab +
         ((uVar9 & 0xffffffff | 1) * 0x7ae14021 + (uVar9 >> 0x20) * 0x7dac79ab << 0x20) ^ uVar3);
  *(uint64_t *)((int64_t)(short)(uVar1 + 0x5aa9) + 0x7fffa47c0b4b) =
       (0x5318547eff6d8520 << (bVar2 & 0x3f) | 0x5318547eff6d8520U >> 0x40 - (bVar2 & 0x3f)) *
       (uVar9 | 1);
  uVar9 = uStack_88 >> 0xf ^ uStack_88;
  uVar9 = uVar9 >> 0x1e ^ uStack_88 >> 0x3c ^ uVar9;
  uVar9 = uStack_88 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18
          | (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
          (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f) << 4 | uVar9 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333) * 4;
  *(uint64_t *)((int64_t)(int)~((uVar8 ^ 0x78e7caa2) * -0x55e5bb93) + 0x7fffa47c6541) =
       (uVar9 >> 1 & 0x5555555555555555) + (uVar9 & 0x5555555555555555) * 2;
  uVar9 = uVar3 + 0x8342e4d89ba57499 + lStack_48;
  uVar9 = uVar9 >> 3 ^ uVar9;
  uVar9 = uVar9 >> 6 ^ uVar9;
  uVar9 = uVar9 >> 0xc ^ uVar9;
  *(uint64_t *)
   (((int64_t)
     (int)(uVar5 * -0xc21e065 << (bVar2 & 0x1f) | uVar5 * -0xc21e065 >> 0x20 - (bVar2 & 0x1f)) ^
    0xfffffffff8964cfeU) + 0x7fffa47c66c1) =
       ~(uint64_t)
        (&UNK_7fffa56c4e33 +
        (uVar9 >> 0x30 ^ uVar9 >> 0x18 ^ uVar9) +
        ((int64_t)
         (short)(-0x7fba - ((uVar1 ^ 0x948c) << 1 | (uint16_t)((short)(uVar1 ^ 0x948c) < 0))) -
        (int64_t)(&UNK_7fffa583899b + (int)(uVar8 + uVar6 * 0x76706442 + 0x190fc4f1)))) *
       0x3ffffff8000001;
  return;
}


// ============================================================================
// Function : FUN_7fffa4e8ffa0  |  RVA: 0x71ffa0  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4e8ffa0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa4e8ffb0  |  RVA: 0x71ffb0  |  Size: 93 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4e8ffb0(uint64_t *param_1)

{
  *param_1 = &PTR_FUN_7fffa56f3928;
  FUN_7fffa5155450(param_1 + 1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4e90010  |  RVA: 0x720010  |  Size: 43 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4e90010(void)

{
  code *pcVar1;
  
  Unwind_7fffa56253e0();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa4e90040  |  RVA: 0x720040  |  Size: 1953 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4e905e0) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x7fffa47bca89 : 0x7fffa4e907ab */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7fffa4e90040(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  uint8_t bVar7;
  uint8_t bVar8;
  uint8_t bVar9;
  uint8_t bVar10;
  uint8_t bVar11;
  int64_t lVar12;
  int64_t lVar13;
  
  _uRam00007fffa47bca89 = 0;
  auRam00007fffa47bca71 = (uint8_t  [16])0x0;
  auRam00007fffa47bca61 = (uint8_t  [16])0x0;
  auRam00007fffa47bca51 = (uint8_t  [16])0x0;
  bRam00007fffa47bca41 = '\0';
  uRam00007fffa47bca81 = 0;
  uVar1 = rdtsc();
  lVar12 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
           CONCAT44(0xffffffff,(int)uVar1)) * 0x628b192efdb50c4;
  lVar13 = 4;
  while( true ) {
    lVar12 = lVar12 * 0x628b192efdb50c4 + 0x628b192efdb50c4;
    *(char *)(lVar13 + 0x7fffa47bca3b) = (char)((uint64_t)lVar12 >> 0x20);
    lVar12 = lVar12 * 0x628b192efdb50c4 + 0x628b192efdb50c4;
    *(char *)(lVar13 + 0x7fffa47bca3c) = (char)((uint64_t)lVar12 >> 0x20);
    lVar12 = lVar12 * 0x628b192efdb50c4 + 0x628b192efdb50c4;
    *(char *)(lVar13 + 0x7fffa47bca3d) = (char)((uint64_t)lVar12 >> 0x20);
    lVar12 = lVar12 * 0x628b192efdb50c4 + 0x628b192efdb50c4;
    *(char *)(lVar13 + 0x7fffa47bca3e) = (char)((uint64_t)lVar12 >> 0x20);
    if (lVar13 == 0x54) break;
    lVar13 = lVar13 + 4;
  }
  bVar10 = uRam00007fffa47bca89._1_1_;
  bVar11 = bRam00007fffa47bca8e;
  bVar2 = bRam00007fffa47bca8c << 2;
  bVar6 = bRam00007fffa47bca8c >> 6;
  bVar3 = bRam00007fffa47bca90 << 2;
  bVar7 = bRam00007fffa47bca90 >> 6;
  bVar4 = bRam00007fffa47bca8d << 2;
  bVar8 = bRam00007fffa47bca8d >> 6;
  bRam00007fffa47bca41 = bRam00007fffa47bca41 + 1 & 7;
  lVar12 = (uint64_t)bRam00007fffa47bca41 * 8;
  bVar5 = bRam00007fffa47bca8f << 2;
  bVar9 = bRam00007fffa47bca8f >> 6;
  *(uint8_t *)(lVar12 + 0x7fffa47bca44) = bRam00007fffa47bca8b << 2 | bRam00007fffa47bca8b >> 6;
  *(uint8_t *)(lVar12 + 0x7fffa47bca46) = bVar4 | bVar8;
  bVar4 = (uint8_t)uRam00007fffa47bca89 << 2;
  bVar8 = (uint8_t)uRam00007fffa47bca89 >> 6;
  *(uint8_t *)(lVar12 + 0x7fffa47bca45) = bVar2 | bVar6;
  *(uint8_t *)(lVar12 + 0x7fffa47bca42) = bVar4 | bVar8;
  *(uint8_t *)(lVar12 + 0x7fffa47bca49) = bVar3 | bVar7;
  *(uint8_t *)(lVar12 + 0x7fffa47bca48) = bVar5 | bVar9;
  *(uint8_t *)(lVar12 + 0x7fffa47bca47) = bVar11 << 2 | bVar11 >> 6;
  *(uint8_t *)(lVar12 + 0x7fffa47bca43) = bVar10 << 2 | bVar10 >> 6;
  return;
}


// ============================================================================
// Function : FUN_7fffa4e907f0  |  RVA: 0x7207f0  |  Size: 589 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4e907f0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa47863a4 = '\0';
  uRam00007fffa47863d8 = 0;
  uRam00007fffa47863e0 = 0;
  uRam00007fffa47863c8 = 0;
  uRam00007fffa47863d0 = 0;
  uRam00007fffa47863b8 = 0;
  uRam00007fffa47863c0 = 0;
  uRam00007fffa47863a8 = 0;
  uRam00007fffa47863b0 = 0;
  uRam00007fffa47863ed = 0;
  uVar1 = rdtsc();
  lVar3 = (uVar1 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar1)) * 0x3347be660d5a756 + 0xb;
  lVar2 = 3;
  while( true ) {
    lVar3 = lVar3 * 0x3347be660d5a756 + 0xb;
    *(char *)(lVar2 + 0x7fffa478639d) = (char)((uint64_t)lVar3 >> 0x20);
    if (lVar2 == 99) break;
    lVar5 = lVar3 * 0x3347be660d5a756 + 0xb;
    lVar4 = lVar5 * 0x3347be660d5a756 + 0xb;
    lVar3 = lVar4 * 0x3347be660d5a756 + 0xb;
    *(char *)(lVar2 + 0x7fffa478639f) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar2 + 0x7fffa47863a0) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar2 + 0x7fffa478639e) = (char)((uint64_t)lVar5 >> 0x20);
    lVar2 = lVar2 + 4;
  }
  bRam00007fffa47863a4 = bRam00007fffa47863a4 + 1 & 7;
  *(uint64_t *)((uint64_t)bRam00007fffa47863a4 * 8 + 0x7fffa47863a8) = uRam00007fffa47863ed;
  return;
}


// ============================================================================
// Function : FUN_7fffa4e90ae0  |  RVA: 0x720ae0  |  Size: 105 bytes
// Callers  : FUN_7fffa517b810@0xa0b810, FUN_7fffa507ef00@0x90ef00, FUN_7fffa5265b60@0xaf5b60, FUN_7fffa4cf5490@0x585490, FUN_7fffa55ce110@0xe5e110
// Callees  : FUN_7fffa524fccc@0xadfccc
// ============================================================================
uint64_t FUN_7fffa4e90ae0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  
  if (param_1 != 0) {
    uVar3 = param_2[1];
    lVar1 = uVar3 + (int64_t)*(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint32_t *)(param_1 + 0x14) != 0) {
        uVar5 = 0;
        do {
          if (*param_2 < (int64_t)*(int *)(lVar1 + uVar5 * 8) + uVar3) break;
          uVar4 = (int)uVar5 + 1;
          uVar5 = (uint64_t)uVar4;
        } while (uVar4 < *(uint32_t *)(param_1 + 0x14));
        if ((int)uVar5 != 0) {
          return (uint64_t)
                 *(uint32_t *)(uVar3 + (uint64_t)((int)uVar5 - 1) * 8 + 4 +
                          (int64_t)*(int *)(param_1 + 0x18));
        }
      }
      return 0xffffffff;
    }
  }
  FUN_7fffa524fccc();
  pcVar2 = (code *)__debugbreak();
  uVar3 = (*pcVar2)();
  return uVar3;
}


// ============================================================================
// Function : FUN_7fffa4e91240  |  RVA: 0x721240  |  Size: 141 bytes
// Callers  : FUN_7fffa5513ae0@0xda3ae0, FUN_7fffa5130680@0x9c0680
// Callees  : FUN_7fffa54539d0@0xce39d0
// ============================================================================
uint64_t FUN_7fffa4e91240(uint64_t *param_1,int64_t param_2,uint32_t *param_3)

{
  int *piVar1;
  int64_t lVar2;
  
  piVar1 = (int *)*param_1;
  *param_3 = 0;
  if (*piVar1 == -0x1f928c9d) {
    if (((piVar1[6] == 4) && (piVar1[8] + 0xe66cfae0U < 3)) &&
       (*(int64_t *)(piVar1 + 10) == *(int64_t *)(param_2 + 0x28))) {
      *param_3 = 1;
    }
    if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
       ((piVar1[8] + 0xe66cfae0U < 3 && (*(int64_t *)(piVar1 + 0xc) == 0)))) {
      lVar2 = FUN_7fffa54539d0();
      *(uint32_t *)(lVar2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa4e912d0  |  RVA: 0x7212d0  |  Size: 1548 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa4e912d0(uint64_t param_1)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint32_t uVar7;
  uint8_t bVar8;
  uint16_t uVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint8_t bVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint8_t *puVar17;
  uint64_t *puVar18;
  uint16_t uVar19;
  uint32_t in_R10D;
  uint64_t in_R11;
  uint64_t uVar20;
  uint32_t uVar21;
  uint64_t uVar22;
  int64_t lVar23;
  float fVar24;
  uint32_t in_XMM2_Dc;
  uint32_t in_XMM2_Dd;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t *puStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint8_t *puStack_58;
  int64_t lStack_50;
  uint64_t uStack_48;
  
  bVar8 = (uint8_t)in_R10D;
  uVar21 = in_R10D | 1;
  uVar9 = (uint16_t)in_R10D;
  uVar22 = *(uint64_t *)(((int64_t)(short)(-0xb32 - uVar9) ^ 0x7507U) + 0x7fffa47bd9d1);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar22;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar22;
  lVar14 = SUB168(auVar4 * ZEXT816(0x4325c53ef368eb0),8) +
           (uint64_t)
           CARRY8(SUB168(auVar4 * ZEXT816(0x4325c53ef368eb0),0),
                  SUB168(auVar3 * ZEXT816(0x4325c53ef368eb05),8));
  lStack_50 = 0;
  uVar20 = (CONCAT44(in_XMM2_Dd,in_XMM2_Dc) << 0x1f | (uint64_t)(in_XMM2_Dd >> 1)) + 0xa8d75c54;
  uVar11 = in_R11 << 0x33 ^ in_R11;
  uVar11 = uVar11 >> 3 ^ uVar11;
  uVar11 = uVar11 >> 6 ^ uVar11;
  uVar15 = uVar11 >> 0xc;
  if (in_R10D + 0xcf76bbab < 0xb6168a6d) {
    uVar15 = uVar11 - 0xc;
  }
  uVar15 = uVar15 ^ uVar11;
  uVar20 = (uVar20 << 0x34 | uVar20 >> 0xc) ^ (uVar20 * 0x400 | uVar20 >> 0x36) ^ uVar20;
  uVar20 = (uVar20 << 0x14 | uVar20 >> 0x2c) ^ (uVar20 << 0x28 | uVar20 >> 0x18) ^ uVar20;
  puVar18 = (uint64_t *)(uVar15 >> 0x18 ^ uVar15 >> 0x30 ^ uVar15);
  uVar20 = (uVar20 << 0x28 | uVar20 >> 0x18) ^ (uVar20 << 0x10 | uVar20 >> 0x30) ^ uVar20;
  uVar11 = (uVar20 << 0x20 | uVar20 >> 0x20) ^ uVar20;
  uVar20 = uVar20 << 0x10 | uVar20 >> 0x30;
  uVar15 = uVar11 | uVar20;
  if ((uVar21 * -0x23300000 | uVar21 * -0xe204466 >> 0xd) < in_R10D + 0xbdb50866) {
    uVar15 = uVar20 ^ uVar11;
  }
  lVar23 = 0;
  if (((in_R10D ^ 0x5b4dcfcd) << 0x1e | (in_R10D ^ 0x5b4dcfcd) >> 2) * 0x7c2e4a89 !=
      ((0xfdccf7e7 - in_R10D) * 0x200 | 0xfdccf7e7 - in_R10D >> 0x17)) {
    lVar14 = 0;
  }
  fVar24 = (float)FUN_7fffa5102fa0((float)(uVar22 + lVar14 + 1) / 0.875);
  uVar11 = (int64_t)(fVar24 - 9.223372e+18) & (int64_t)fVar24 >> 0x3f | (int64_t)fVar24;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar11;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar11;
  uVar22 = SUB168(auVar5 * ZEXT816(0x1111111111111112),0) ^ 0x80;
  if ((int64_t)(int)(((0x8008efbb - in_R10D) * 0x80000 | 0x8008efbb - in_R10D >> 0xd) ^ 0x976e9680)
      < (int64_t)(uint64_t)(0x5f6ca15fU >> (bVar8 & 0x1f) | 0x5f6ca15f << 0x20 - (bVar8 & 0x1f)))
  {
    uVar22 = SUB168(auVar6 * ZEXT816(0x1111111111111111),8) +
             (uint64_t)
             CARRY8(SUB168(auVar6 * ZEXT816(0x1111111111111111),0),
                    SUB168(auVar5 * ZEXT816(0x1111111111111112),8));
  }
  uVar20 = 0x3f;
  if (uVar22 != 0) {
    for (; uVar22 >> uVar20 == 0; uVar20 = uVar20 - 1) {
    }
  }
  uVar22 = 0x3f;
  if (0x1d < uVar11) {
    uVar22 = uVar20 ^ 0x3f;
  }
  uVar20 = 0x40 - uVar22;
  if ((uint64_t)
      ((0xe40c95abU >> (bVar8 & 0x1f) | -0x1bf36a55 << 0x20 - (bVar8 & 0x1f)) + 0xd7ef73dd) ==
      0xffffffffbd6adedd) {
    uVar20 = uVar22 ^ 0x40;
  }
  bVar12 = (uint8_t)uVar20;
  lVar14 = 1L << (bVar12 & 0x3f);
  uStack_60 = lVar14 - 1;
  uStack_68 = uVar22;
  if (uVar11 == 0) {
    puVar17 = &UNK_7fffa56ee720;
  }
  else {
    lVar16 = 0x78L << (bVar12 & 0x3f);
    uVar11 = (0x88L << (bVar12 & 0x3f)) + 0xeU & 0xfffffffffffffff8;
    (*(code *)((int64_t)(short)(uVar9 + 0x850f) + 0x7fffa526e0bb))
              (fVar24 - 9.223372e+18,uVar11 << 0x3c ^ uVar11,
               ((0xc26df5b4 - in_R10D) * 0x80000 | 0xc26df5b4 - in_R10D >> 0xd) + 0x3fffffe9,
               uVar11 << 0xe);
    lVar23 = (uVar20 << 0x2c | uVar20 >> 0x14) - ((uVar20 >> 0x14) << 0x36);
    puVar17 = (uint8_t *)
              ((uint64_t)(-((int)lVar23 + (int)lVar16 + -8) & 0xf) + lVar23 + lVar16 + -8);
    lStack_50 = lVar23;
    FUN_7fffa4ecf8e0(puVar17,0,0x10L << (bVar12 & 0x3f));
    puVar17[lVar14 * 0x10 + -2] = 1;
  }
  uVar22 = (uVar15 << 0x20 | uVar15 >> 0x20) >> ((uint8_t)uVar22 & 0x3f);
  puStack_70 = puVar17 + uVar22 * 0x10;
  pcVar1 = puVar17 + uVar22 * 0x10;
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
  puVar18[2] = 0;
  *(uint32_t *)(puVar18 + 1) = 0;
  *puVar18 = 0;
  uVar10 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar26 >> 7,0) & 1) |
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
  if (uVar10 == 0) {
    lVar14 = 1;
    while( true ) {
      puStack_70[0xf] = puStack_70[0xf] | '\x01' << ((uint8_t)(uVar15 >> 0x20) & 7);
      uVar22 = uVar22 + lVar14 & uStack_60;
      puStack_70 = puVar17 + uVar22 * 0x10;
      pcVar1 = puVar17 + uVar22 * 0x10;
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
      uVar10 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar27 >> 7,0) & 1) |
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
      if (uVar10 != 0) break;
      lVar14 = lVar14 + 1;
    }
    lVar23 = lStack_50;
  }
  else {
  }
  uStack_48 = uVar15 >> 0x20 & 0xff;
  uVar19 = (uint16_t)(0xcc10 - in_R10D);
  uVar20 = (uint64_t)(short)(uVar19 << 10 | uVar19 >> 6);
  uVar15 = uVar20;
  puStack_58 = puVar17;
  (*(code *)((int64_t)(short)(-0x5c58 << (bVar8 & 0xf) | 0xa3a8U >> 0x10 - (bVar8 & 0xf)) +
            0x7fffa526c088))();
  uVar11 = (uint64_t)&uStack_68 >> 0xb ^ (uint64_t)&uStack_68;
  lVar23 = uVar22 * 0x78 + lVar23;
  auVar25._8_4_ = (int)uVar11;
  auVar25._0_8_ = uVar11;
  auVar25._12_4_ = (int)(uVar11 >> 0x20);
  uVar7 = 0;
  for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
    uVar7 = uVar7 + 1;
  }
  uVar22 = (uint64_t)uVar7;
  puVar13 = (uint64_t *)((uVar15 << 0x2c | uVar15 >> 0x14) - ((uVar15 >> 0x14) << 0x36));
  *(uint64_t **)(lVar23 + uVar22 * 8) = puVar13;
  uVar2 = (&UNK_7fffa583d64d)
          [uStack_48 * 4 + (int64_t)(int)(uVar21 * -0x5cfc2000 | uVar21 * -0x5042e7e1 >> 0x13)];
  *puVar13 = param_1;
  puStack_70[uVar22] = uVar2;
  *puVar18 = puStack_70;
  *(uint32_t *)(puVar18 + 1) = uVar7;
  puVar18[2] = lVar23 + uVar22 * 8;
  (*(code *)((int64_t)(short)((uVar9 ^ 0xcc45) * -0x71b3) + 0x7fffa558fad9))
            (puVar13,puStack_70,uVar21 * 0x52fdeb79 ^ 0xa1e56101,uStack_48,uVar11 + 0x46631936,
             auVar25._8_8_ + -0x4874cdf5);
  *(int64_t *)(((int64_t)(short)(uVar9 + 0x74fc) ^ 0x3f5U) + 0x7fffa47bfaa9) =
       *(int64_t *)(uVar20 + 0x7fffa47c0aa4) + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa4e918e0  |  RVA: 0x7218e0  |  Size: 1056 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4e91af3) */

void FUN_7fffa4e918e0(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  uint8_t bVar7;
  uint64_t uVar8;
  uint64_t in_RAX;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  
  bRam00007fffa47865ec = 0;
  uRam00007fffa478661a = 0;
  uRam00007fffa4786622 = 0;
  uRam00007fffa478660a = 0;
  uRam00007fffa4786612 = 0;
  uRam00007fffa47865fa = 0;
  uRam00007fffa4786602 = 0;
  _uRam00007fffa478662a = 0;
  uVar1 = rdtsc();
  lVar10 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
           CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar1)) * 0x929e0548fc73a72 + 0xb;
  lVar9 = 3;
  while( true ) {
    lVar10 = lVar10 * 0x929e0548fc73a72 + 0xb;
    lVar11 = lVar10 * 0x929e0548fc73a72 + 0xb;
    lVar12 = lVar11 * 0x929e0548fc73a72 + 0xb;
    *(char *)(lVar9 + 0x7fffa47865e6) = (char)((uint64_t)lVar11 >> 0x20);
    *(char *)(lVar9 + 0x7fffa47865e7) = (char)((uint64_t)lVar12 >> 0x20);
    *(char *)(lVar9 + 0x7fffa47865e5) = (char)((uint64_t)lVar10 >> 0x20);
    if (lVar9 == 0x4f) break;
    lVar10 = lVar12 * 0x929e0548fc73a72 + 0xb;
    *(char *)(lVar9 + 0x7fffa47865e8) = (char)((uint64_t)lVar10 >> 0x20);
    lVar9 = lVar9 + 4;
  }
  uVar8 = (uint64_t)((uint32_t)bRam00007fffa47865ec * 0x2aaaaaab + 0x2aaaaaab) * 6;
  uVar13 = uVar8 >> 0x20;
  bVar2 = bRam00007fffa4786631 << 6;
  bVar4 = bRam00007fffa4786631 >> 2;
  bVar3 = bRam00007fffa478662f << 6;
  bVar5 = bRam00007fffa478662f >> 2;
  bVar6 = uRam00007fffa478662a._1_1_;
  *(uint8_t *)(uVar13 * 8 + 0x7fffa47865fc) = bRam00007fffa478662c << 6 | bRam00007fffa478662c >> 2;
  *(uint8_t *)(uVar13 * 8 + 0x7fffa47865fb) = bVar6 << 6 | bVar6 >> 2;
  *(uint8_t *)(uVar13 * 8 + 0x7fffa4786601) = bVar2 | bVar4;
  bVar2 = bRam00007fffa478662e << 6;
  bVar6 = bRam00007fffa478662e >> 2;
  bVar4 = bRam00007fffa478662d << 6;
  bVar7 = bRam00007fffa478662d >> 2;
  *(uint8_t *)(uVar13 * 8 + 0x7fffa4786600) = bRam00007fffa4786630 << 6 | bRam00007fffa4786630 >> 2;
  *(uint8_t *)(uVar13 * 8 + 0x7fffa47865fe) = bVar2 | bVar6;
  *(uint8_t *)(uVar13 * 8 + 0x7fffa47865fd) = bVar4 | bVar7;
  *(uint8_t *)(uVar13 * 8 + 0x7fffa47865ff) = bVar3 | bVar5;
  *(uint8_t *)(uVar13 * 8 + 0x7fffa47865fa) =
       (uint8_t)uRam00007fffa478662a << 6 | (uint8_t)uRam00007fffa478662a >> 2;
  bRam00007fffa47865ec = (char)(uVar8 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4e91d00  |  RVA: 0x721d00  |  Size: 30778 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4e91db1) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e91d47) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e9584a) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e95f31) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e96688) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e968a4) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e96495) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e97836) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e97cd2) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e98aa2) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e92282) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e9317c) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e93670) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e94aac) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e95043) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e94cd6) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e96dbe) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e98609) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e98c7e) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e94e3e) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e951d0) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e9276a) */
/* WARNING: Type propagation algorithm not settling */

int64_t FUN_7fffa4e91d00(int64_t param_1,uint64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int iVar7;
  uint32_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  bool bVar12;
  int iVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  char cVar17;
  char cVar18;
  uint64_t *puVar19;
  uint64_t *puVar20;
  uint64_t uVar21;
  uint64_t *puVar22;
  uint8_t bVar23;
  uint8_t bVar24;
  uint8_t bVar25;
  int iVar26;
  int64_t lVar27;
  int *piVar28;
  uint32_t uVar29;
  uint32_t uVar30;
  uint64_t *puVar31;
  int64_t lVar32;
  uint64_t *puVar33;
  uint64_t *puVar34;
  int iVar35;
  uint32_t uVar36;
  int64_t lVar37;
  uint64_t *puVar38;
  uint64_t uVar39;
  uint64_t *puVar40;
  uint32_t uVar41;
  uint64_t uVar42;
  uint64_t *puVar43;
  uint64_t uVar44;
  uint64_t uVar45;
  uint64_t *puVar46;
  uint32_t uVar47;
  uint64_t uVar48;
  int iVar49;
  uint64_t *puVar50;
  int64_t lVar51;
  uint64_t uVar52;
  uint32_t uVar53;
  uint32_t uVar54;
  uint32_t uVar55;
  int64_t lVar56;
  uint64_t *puVar57;
  uint64_t uVar58;
  uint64_t *puVar59;
  uint64_t uVar60;
  uint64_t *puVar61;
  uint64_t uVar62;
  uint64_t *puVar63;
  uint64_t uVar64;
  uint32_t uStack_140;
  uint64_t *puStack_a0;
  uint64_t *puStack_80;
  int64_t *plStack_78;
  
  lVar9 = *(int64_t *)(param_1 + 8);
  iVar13 = (int)lVar9;
  iVar49 = ((int)param_5 + (int)param_4) - iVar13;
  uVar30 = *param_3;
  uVar55 = param_3[1];
  uVar53 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  lVar10 = *(int64_t *)(param_1 + 0x80);
  uVar54 = *(uint32_t *)(param_1 + 0x18);
  puVar3 = (uint64_t *)((int64_t)param_4 + param_5);
  iVar26 = *(int *)(param_1 + 0x110);
  iVar35 = 4;
  if (iVar26 - 5U < 3) {
    iVar35 = iVar26;
  }
  uVar29 = *(uint32_t *)(param_1 + 0x1c);
  uVar47 = uVar29;
  if (uVar53 < iVar49 - uVar29) {
    uVar47 = iVar49 - uVar53;
  }
  iVar7 = *(int *)(param_1 + 0x28);
  if (iVar7 != 0) {
    uVar47 = uVar29;
  }
  uVar29 = *(uint32_t *)(param_1 + 0x104);
  lVar11 = *(int64_t *)(param_1 + 0x70);
  puVar19 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  cVar17 = (char)*(uint32_t *)(param_1 + 0x108);
  cVar18 = (char)uVar29;
  if (uVar47 < uVar54) {
    uVar45 = (uint64_t)uVar54;
    if (param_4 < puVar19) {
      lVar37 = *(int64_t *)(param_1 + 0x10);
      puVar1 = (uint64_t *)(lVar37 + uVar45);
      puVar2 = (uint64_t *)(lVar9 + uVar45);
      puVar22 = (uint64_t *)((uint64_t)uVar47 + lVar37);
      puVar46 = puVar3 + -4;
      bVar23 = 0x20 - cVar18;
      puVar4 = (uint64_t *)((int64_t)puVar3 - 3);
      puVar20 = (uint64_t *)((int64_t)puVar3 - 1);
      bVar24 = 0x40 - cVar18;
      bVar25 = 0x40 - cVar17;
      puVar31 = (uint64_t *)((int64_t)puVar3 - 7);
      lVar27 = uVar45 + lVar9 + 8;
      puVar40 = param_4;
      do {
        if (iVar35 < 6) {
          if (iVar35 == 5) {
            uVar45 = *puVar40;
            uVar21 = uVar45 * -0x30e4432345000000;
            goto LAB_7fffa4e9358e;
          }
          uVar45 = *puVar40;
          uVar21 = (uint64_t)((uint32_t)((int)*puVar40 * -0x61c8864f) >> (bVar23 & 0x1f));
        }
        else {
          if (iVar35 == 6) {
            uVar45 = *puVar40;
            lVar32 = -0x30e4432340650000;
          }
          else {
            uVar45 = *puVar40;
            lVar32 = -0x30e44323405a9d00;
          }
          uVar21 = lVar32 * uVar45;
LAB_7fffa4e9358e:
          uVar21 = uVar21 >> (bVar24 & 0x3f);
        }
        iVar26 = (int)puVar40 - iVar13;
        uVar45 = uVar45 * -0x30e44323485a9b9d >> (bVar25 & 0x3f);
        uVar53 = *(uint32_t *)(lVar11 + uVar45 * 4);
        uVar60 = (uint64_t)uVar53;
        lVar32 = lVar9;
        if (uVar53 < uVar54) {
          lVar32 = lVar37;
        }
        uVar36 = *(uint32_t *)(lVar10 + uVar21 * 4);
        lVar56 = lVar9;
        if (uVar36 < uVar54) {
          lVar56 = lVar37;
        }
        iVar49 = iVar26 + 1;
        uVar41 = iVar49 - uVar30;
        lVar51 = lVar9;
        if (uVar41 < uVar54) {
          lVar51 = lVar37;
        }
        *(int *)(lVar11 + uVar45 * 4) = iVar26;
        *(int *)(lVar10 + uVar21 * 4) = iVar26;
        if (((iVar49 - uVar47 < uVar30) || ((uVar54 - 1) - uVar41 < 3)) ||
           (piVar28 = (int *)(lVar51 + (uint64_t)uVar41),
           *piVar28 != *(int *)((int64_t)puVar40 + 1))) {
          if ((uVar47 < uVar53) && (puVar61 = (uint64_t *)(lVar32 + uVar60), *puVar61 == *puVar40))
          {
            puVar38 = puVar3;
            puVar43 = puVar2;
            if (uVar53 < uVar54) {
              puVar38 = puVar1;
              puVar43 = puVar22;
            }
            puVar63 = puVar40 + 1;
            puVar34 = puVar61 + 1;
            puVar33 = (uint64_t *)((int64_t)puVar40 + (int64_t)puVar38 + (8 - (int64_t)puVar34))
            ;
            if (puVar3 <= puVar33) {
              puVar33 = puVar3;
            }
            puVar50 = puVar63;
            puVar59 = puVar34;
            if (puVar63 < (uint64_t *)((int64_t)puVar33 - 7U)) {
              if (*puVar34 == *puVar63) {
                lVar56 = 0;
                do {
                  puVar50 = (uint64_t *)((int64_t)puVar40 + lVar56 + 0x10);
                  if ((uint64_t *)((int64_t)puVar33 - 7U) <= puVar50) {
                    puVar50 = (uint64_t *)((int64_t)puVar40 + lVar56 + 0x10);
                    puVar59 = (uint64_t *)((int64_t)puVar61 + lVar56 + 0x10);
                    goto LAB_7fffa4e93c8d;
                  }
                  uVar45 = *(uint64_t *)(lVar32 + uVar60 + 0x10 + lVar56);
                  uVar21 = *puVar50;
                  lVar56 = lVar56 + 8;
                } while (uVar45 == uVar21);
                uVar55 = 0;
                for (uVar21 = uVar21 ^ uVar45; (uVar21 & 1) == 0;
                    uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                  uVar55 = uVar55 + 1;
                }
                uVar45 = (uint64_t)(uVar55 >> 3) + lVar56;
              }
              else {
                uVar55 = 0;
                for (uVar45 = *puVar63 ^ *puVar34; (uVar45 & 1) == 0;
                    uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                  uVar55 = uVar55 + 1;
                }
                uVar45 = (uint64_t)(uVar55 >> 3);
              }
            }
            else {
LAB_7fffa4e93c8d:
              if ((puVar50 < (uint64_t *)((int64_t)puVar33 - 3U)) &&
                 ((int)*puVar59 == (int)*puVar50)) {
                puVar59 = (uint64_t *)((int64_t)puVar59 + 4);
                puVar50 = (uint64_t *)((int64_t)puVar50 + 4);
              }
              if ((puVar50 < (uint64_t *)((int64_t)puVar33 - 1U)) &&
                 ((short)*puVar59 == (short)*puVar50)) {
                puVar59 = (uint64_t *)((int64_t)puVar59 + 2);
                puVar50 = (uint64_t *)((int64_t)puVar50 + 2);
              }
              if (puVar50 < puVar33) {
                puVar50 = (uint64_t *)
                          ((int64_t)puVar50 + (uint64_t)((char)*puVar59 == (char)*puVar50));
              }
              uVar45 = (int64_t)puVar50 - (int64_t)puVar63;
            }
            if ((uint64_t *)((int64_t)puVar34 + uVar45) == puVar38) {
              puVar63 = (uint64_t *)((int64_t)puVar63 + uVar45);
              puVar38 = puVar63;
              puVar34 = puVar2;
              if (puVar63 < puVar31) {
                if (*puVar2 == *puVar63) {
                  lVar56 = 0;
                  do {
                    puVar38 = (uint64_t *)((int64_t)puVar40 + lVar56 + uVar45 + 0x10);
                    if (puVar31 <= puVar38) {
                      puVar38 = (uint64_t *)((int64_t)puVar40 + lVar56 + uVar45 + 0x10);
                      puVar34 = (uint64_t *)(lVar56 + lVar27);
                      goto LAB_7fffa4e941b9;
                    }
                    puVar34 = (uint64_t *)(lVar27 + lVar56);
                    uVar21 = *puVar38;
                    lVar56 = lVar56 + 8;
                  } while (*puVar34 == uVar21);
                  uVar55 = 0;
                  for (uVar21 = uVar21 ^ *puVar34; (uVar21 & 1) == 0;
                      uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                    uVar55 = uVar55 + 1;
                  }
                  uVar21 = (uint64_t)(uVar55 >> 3) + lVar56;
                }
                else {
                  uVar55 = 0;
                  for (uVar21 = *puVar63 ^ *puVar2; (uVar21 & 1) == 0;
                      uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                    uVar55 = uVar55 + 1;
                  }
                  uVar21 = (uint64_t)(uVar55 >> 3);
                }
              }
              else {
LAB_7fffa4e941b9:
                if ((puVar38 < puVar4) && ((int)*puVar34 == (int)*puVar38)) {
                  puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
                  puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
                }
                if ((puVar38 < puVar20) && ((short)*puVar34 == (short)*puVar38)) {
                  puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
                  puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
                }
                if (puVar38 < puVar3) {
                  puVar38 = (uint64_t *)
                            ((int64_t)puVar38 + (uint64_t)((char)*puVar34 == (char)*puVar38));
                }
                uVar21 = (int64_t)puVar38 - (int64_t)puVar63;
              }
              uVar45 = uVar45 + uVar21;
            }
            lVar51 = uVar45 + 8;
            if ((puVar43 < puVar61) && (param_4 < puVar40)) {
              lVar56 = lVar32 + uVar60 + -1;
              for (lVar32 = 0;
                  *(char *)((int64_t)puVar40 + lVar32 + -1) == *(char *)(lVar56 + lVar32);
                  lVar32 = lVar32 + -1) {
                puVar61 = (uint64_t *)((int64_t)puVar40 + lVar32 + -1);
                if ((puVar61 <= param_4) || ((uint64_t *)(lVar56 + lVar32) <= puVar43)) {
                  lVar51 = (uVar45 - lVar32) + 9;
                  goto LAB_7fffa4e9429c;
                }
              }
              puVar61 = (uint64_t *)((int64_t)puVar40 + lVar32);
              lVar51 = (uVar45 - lVar32) + 8;
LAB_7fffa4e9429c:
              puVar40 = puVar61;
            }
            uVar45 = (int64_t)puVar40 - (int64_t)param_4;
            puVar61 = (uint64_t *)param_2[3];
            if (puVar46 < puVar40) {
              puVar43 = puVar61;
              if (param_4 <= puVar46) {
                puVar43 = (uint64_t *)((int64_t)puVar61 + ((int64_t)puVar46 - (int64_t)param_4))
                ;
                uVar21 = param_4[1];
                *puVar61 = *param_4;
                puVar61[1] = uVar21;
                if (0x10 < (int64_t)puVar46 - (int64_t)param_4) {
                  puVar61 = puVar61 + 6;
                  while( true ) {
                    uVar21 = param_4[3];
                    puVar61[-4] = param_4[2];
                    puVar61[-3] = uVar21;
                    uVar21 = param_4[5];
                    puVar61[-2] = param_4[4];
                    puVar61[-1] = uVar21;
                    if (puVar43 <= puVar61) break;
                    puVar61 = puVar61 + 4;
                    param_4 = param_4 + 4;
                  }
                }
                param_4 = puVar46;
              }
              if (param_4 < puVar40) {
                uVar21 = (int64_t)puVar40 - (int64_t)param_4;
                if (!((uint64_t)((int64_t)puVar43 - (int64_t)param_4) < 0x20 || uVar21 < 4)) {
                  if (uVar21 < 0x20) {
                    uVar60 = 0;
LAB_7fffa4e9443b:
                    uVar62 = uVar21 & 0xfffffffffffffffc;
                    for (; *(uint32_t *)((int64_t)puVar43 + uVar60) =
                                *(uint32_t *)((int64_t)param_4 + uVar60), uVar62 - 4 != uVar60;
                        uVar60 = uVar60 + 4) {
                    }
                    uVar60 = uVar62;
                    if (uVar21 == uVar62) goto LAB_7fffa4e954c7;
                  }
                  else {
                    uVar60 = uVar21 & 0xffffffffffffffe0;
                    lVar32 = 0;
                    while( true ) {
                      uVar14 = ((uint64_t *)((int64_t)param_4 + lVar32))[1];
                      puVar5 = (uint64_t *)((int64_t)param_4 + lVar32 + 0x10);
                      uVar15 = *puVar5;
                      uVar16 = puVar5[1];
                      *(uint64_t *)((int64_t)puVar43 + lVar32) =
                           *(uint64_t *)((int64_t)param_4 + lVar32);
                      ((uint64_t *)((int64_t)puVar43 + lVar32))[1] = uVar14;
                      puVar5 = (uint64_t *)((int64_t)puVar43 + lVar32 + 0x10);
                      *puVar5 = uVar15;
                      puVar5[1] = uVar16;
                      if (uVar60 - 0x20 == lVar32) break;
                      lVar32 = lVar32 + 0x20;
                    }
                    if (uVar21 == uVar60) goto LAB_7fffa4e954c7;
                    if ((uVar21 & 0x1c) != 0) goto LAB_7fffa4e9443b;
                  }
                  puVar43 = (uint64_t *)((int64_t)puVar43 + uVar60);
                  param_4 = (uint64_t *)((int64_t)param_4 + uVar60);
                }
                uVar55 = (int)puVar40 - (int)param_4 & 7;
                uVar21 = (uint64_t)uVar55;
                puVar61 = param_4;
                puVar38 = param_4;
                if (uVar55 != 0) {
                  do {
                    puVar61 = (uint64_t *)((int64_t)puVar38 + 1);
                    *(char *)puVar43 = (char)*puVar38;
                    puVar43 = (uint64_t *)((int64_t)puVar43 + 1);
                    uVar21 = uVar21 - 1;
                    puVar38 = puVar61;
                  } while (uVar21 != 0);
                }
                if ((uint64_t)((int64_t)param_4 - (int64_t)puVar40) < 0xfffffffffffffff9) {
                  lVar32 = 0;
                  do {
                    *(uint8_t *)((int64_t)puVar43 + lVar32) =
                         *(uint8_t *)((int64_t)puVar61 + lVar32);
                    *(uint8_t *)((int64_t)puVar43 + lVar32 + 1) =
                         *(uint8_t *)((int64_t)puVar61 + lVar32 + 1);
                    *(uint8_t *)((int64_t)puVar43 + lVar32 + 2) =
                         *(uint8_t *)((int64_t)puVar61 + lVar32 + 2);
                    *(uint8_t *)((int64_t)puVar43 + lVar32 + 3) =
                         *(uint8_t *)((int64_t)puVar61 + lVar32 + 3);
                    *(uint8_t *)((int64_t)puVar43 + lVar32 + 4) =
                         *(uint8_t *)((int64_t)puVar61 + lVar32 + 4);
                    *(uint8_t *)((int64_t)puVar43 + lVar32 + 5) =
                         *(uint8_t *)((int64_t)puVar61 + lVar32 + 5);
                    *(uint8_t *)((int64_t)puVar43 + lVar32 + 6) =
                         *(uint8_t *)((int64_t)puVar61 + lVar32 + 6);
                    *(uint8_t *)((int64_t)puVar43 + lVar32 + 7) =
                         *(uint8_t *)((int64_t)puVar61 + lVar32 + 7);
                    lVar56 = lVar32 + 8;
                    lVar32 = lVar32 + 8;
                  } while ((uint64_t *)((int64_t)puVar61 + lVar56) != puVar40);
                }
              }
LAB_7fffa4e954c7:
              param_2[3] = param_2[3] + uVar45;
              uVar21 = param_2[1];
              if (0xffff < uVar45) {
                *(uint32_t *)(param_2 + 9) = 1;
                *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar21 - *param_2 >> 3);
              }
            }
            else {
              uVar21 = param_4[1];
              *puVar61 = *param_4;
              puVar61[1] = uVar21;
              if (0x10 < uVar45) {
                uVar60 = param_4[3];
                uVar21 = param_2[3];
                *(uint64_t *)(uVar21 + 0x10) = param_4[2];
                *(uint64_t *)(uVar21 + 0x18) = uVar60;
                if (0x20 < (int64_t)uVar45) {
                  lVar32 = 0;
                  do {
                    puVar6 = (uint64_t *)((int64_t)param_4 + lVar32 + 0x20);
                    uVar14 = puVar6[1];
                    puVar5 = (uint64_t *)(uVar21 + 0x20 + lVar32);
                    *puVar5 = *puVar6;
                    puVar5[1] = uVar14;
                    puVar5 = (uint64_t *)((int64_t)param_4 + lVar32 + 0x30);
                    uVar14 = puVar5[1];
                    puVar6 = (uint64_t *)(uVar21 + 0x30 + lVar32);
                    *puVar6 = *puVar5;
                    puVar6[1] = uVar14;
                    lVar56 = uVar21 + 0x20 + lVar32;
                    lVar32 = lVar32 + 0x20;
                  } while (lVar56 + 0x20U < uVar21 + uVar45);
                }
                goto LAB_7fffa4e954c7;
              }
              uVar21 = param_2[1];
              param_2[3] = param_2[3] + uVar45;
            }
            uVar60 = lVar51 - 3;
            *(short *)(uVar21 + 4) = (short)uVar45;
            *(uint32_t *)param_2[1] = (iVar26 - uVar53) + 3;
            uVar45 = param_2[1];
            uVar53 = iVar26 - uVar53;
            puVar61 = puVar40;
            uVar55 = uVar30;
            goto joined_r0x7fffa4e95545;
          }
          if ((uVar47 < uVar36) &&
             (puVar43 = (uint64_t *)(lVar56 + (uint64_t)uVar36), (int)*puVar43 == (int)*puVar40))
          {
            uVar21 = (uint64_t)(*(int64_t *)((int64_t)puVar40 + 1) * -0x30e44323485a9b9d) >>
                     (bVar25 & 0x3f);
            uVar53 = *(uint32_t *)(lVar11 + uVar21 * 4);
            uVar45 = (uint64_t)uVar53;
            *(int *)(lVar11 + uVar21 * 4) = iVar49;
            lVar32 = lVar9;
            if (uVar53 < uVar54) {
              lVar32 = lVar37;
            }
            if (uVar47 < uVar53) {
              puVar61 = (uint64_t *)((int64_t)puVar40 + 1);
              puVar38 = (uint64_t *)(lVar32 + uVar45);
              if (*puVar38 != *puVar61) goto LAB_7fffa4e938f4;
              puVar43 = puVar38 + 1;
              puVar63 = (uint64_t *)((int64_t)puVar40 + 9);
              puVar33 = puVar3;
              puVar34 = puVar2;
              if (uVar53 < uVar54) {
                puVar33 = puVar1;
                puVar34 = puVar22;
              }
              puVar50 = (uint64_t *)
                        ((int64_t)puVar40 + (int64_t)puVar33 + (9 - (int64_t)puVar43));
              if (puVar3 <= puVar50) {
                puVar50 = puVar3;
              }
              puVar59 = puVar63;
              puVar57 = puVar43;
              if (puVar63 < (uint64_t *)((int64_t)puVar50 - 7U)) {
                if (*puVar43 == *puVar63) {
                  lVar56 = 0;
LAB_7fffa4e94490:
                  puVar59 = (uint64_t *)((int64_t)puVar40 + lVar56 + 0x11);
                  if (puVar59 < (uint64_t *)((int64_t)puVar50 - 7U)) {
                    uVar21 = *puVar59;
                    uVar60 = *(uint64_t *)(lVar32 + uVar45 + 0x10 + lVar56);
                    if (uVar60 == uVar21) goto code_r0x7fffa4e944ad;
                    uVar55 = 0;
                    for (uVar60 = uVar60 ^ uVar21; (uVar60 & 1) == 0;
                        uVar60 = uVar60 >> 1 | 0x8000000000000000) {
                      uVar55 = uVar55 + 1;
                    }
                    uVar21 = (uint64_t)(uVar55 >> 3) + lVar56 + 8;
                    goto LAB_7fffa4e94760;
                  }
                  puVar59 = (uint64_t *)((int64_t)puVar40 + lVar56 + 0x11);
                  puVar57 = (uint64_t *)((int64_t)puVar38 + lVar56 + 0x10);
                  goto LAB_7fffa4e946b8;
                }
                uVar55 = 0;
                for (uVar21 = *puVar63 ^ *puVar43; (uVar21 & 1) == 0;
                    uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                  uVar55 = uVar55 + 1;
                }
                uVar21 = (uint64_t)(uVar55 >> 3);
              }
              else {
LAB_7fffa4e946b8:
                if ((puVar59 < (uint64_t *)((int64_t)puVar50 - 3U)) &&
                   ((int)*puVar57 == (int)*puVar59)) {
                  puVar59 = (uint64_t *)((int64_t)puVar59 + 4);
                  puVar57 = (uint64_t *)((int64_t)puVar57 + 4);
                }
                if ((puVar59 < (uint64_t *)((int64_t)puVar50 - 1U)) &&
                   ((short)*puVar57 == (short)*puVar59)) {
                  puVar59 = (uint64_t *)((int64_t)puVar59 + 2);
                  puVar57 = (uint64_t *)((int64_t)puVar57 + 2);
                }
                if (puVar59 < puVar50) {
                  puVar59 = (uint64_t *)
                            ((int64_t)puVar59 + (uint64_t)((char)*puVar57 == (char)*puVar59));
                }
                uVar21 = (int64_t)puVar59 - (int64_t)puVar63;
              }
LAB_7fffa4e94760:
              if ((uint64_t *)((int64_t)puVar43 + uVar21) == puVar33) {
                puVar63 = (uint64_t *)((int64_t)puVar63 + uVar21);
                puVar43 = puVar2;
                puVar33 = puVar63;
                if (puVar63 < puVar31) {
                  if (*puVar2 == *puVar63) {
                    lVar56 = 0;
                    do {
                      puVar43 = (uint64_t *)((int64_t)puVar40 + lVar56 + uVar21 + 0x11);
                      if (puVar31 <= puVar43) {
                        puVar33 = (uint64_t *)((int64_t)puVar40 + lVar56 + uVar21 + 0x11);
                        puVar43 = (uint64_t *)(lVar56 + lVar27);
                        goto LAB_7fffa4e9556b;
                      }
                      uVar60 = *puVar43;
                      puVar43 = (uint64_t *)(lVar27 + lVar56);
                      lVar56 = lVar56 + 8;
                    } while (*puVar43 == uVar60);
                    uVar55 = 0;
                    for (uVar60 = *puVar43 ^ uVar60; (uVar60 & 1) == 0;
                        uVar60 = uVar60 >> 1 | 0x8000000000000000) {
                      uVar55 = uVar55 + 1;
                    }
                    uVar60 = (uint64_t)(uVar55 >> 3) + lVar56;
                  }
                  else {
                    uVar55 = 0;
                    for (uVar60 = *puVar2 ^ *puVar63; (uVar60 & 1) == 0;
                        uVar60 = uVar60 >> 1 | 0x8000000000000000) {
                      uVar55 = uVar55 + 1;
                    }
                    uVar60 = (uint64_t)(uVar55 >> 3);
                  }
                }
                else {
LAB_7fffa4e9556b:
                  if ((puVar33 < puVar4) && ((int)*puVar43 == (int)*puVar33)) {
                    puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
                    puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
                  }
                  if ((puVar33 < puVar20) && ((short)*puVar43 == (short)*puVar33)) {
                    puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
                    puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
                  }
                  if (puVar33 < puVar3) {
                    puVar33 = (uint64_t *)
                              ((int64_t)puVar33 + (uint64_t)((char)*puVar43 == (char)*puVar33));
                  }
                  uVar60 = (int64_t)puVar33 - (int64_t)puVar63;
                }
                uVar21 = uVar21 + uVar60;
              }
              uVar53 = iVar49 - uVar53;
              lVar51 = uVar21 + 8;
              if ((puVar34 < puVar38) && (param_4 < puVar61)) {
                lVar32 = lVar32 + uVar45 + -1;
                for (lVar56 = 0; *(char *)((int64_t)puVar40 + lVar56) == *(char *)(lVar32 + lVar56)
                    ; lVar56 = lVar56 + -1) {
                  puVar61 = (uint64_t *)((int64_t)puVar40 + lVar56);
                  if (((uint64_t *)(lVar32 + lVar56) <= puVar34) || (puVar61 <= param_4)) {
                    lVar51 = (uVar21 - lVar56) + 9;
                    goto LAB_7fffa4e95666;
                  }
                }
                puVar61 = (uint64_t *)((int64_t)puVar40 + lVar56 + 1);
                lVar51 = (uVar21 - lVar56) + 8;
                goto LAB_7fffa4e95666;
              }
            }
            else {
LAB_7fffa4e938f4:
              puVar61 = puVar3;
              puVar38 = puVar2;
              if (uVar36 < uVar54) {
                puVar61 = puVar1;
                puVar38 = puVar22;
              }
              puVar63 = (uint64_t *)((int64_t)puVar40 + 4);
              puVar34 = (uint64_t *)((int64_t)puVar43 + 4);
              puVar33 = (uint64_t *)
                        ((int64_t)puVar40 + (int64_t)puVar61 + (4 - (int64_t)puVar34));
              if (puVar3 <= puVar33) {
                puVar33 = puVar3;
              }
              puVar59 = puVar34;
              puVar50 = puVar63;
              if (puVar63 < (uint64_t *)((int64_t)puVar33 - 7U)) {
                if (*puVar34 == *puVar63) {
                  lVar32 = 0xc;
LAB_7fffa4e93c40:
                  puVar50 = (uint64_t *)((int64_t)puVar40 + lVar32);
                  if (puVar50 < (uint64_t *)((int64_t)puVar33 - 7U)) {
                    if (*(uint64_t *)((int64_t)puVar43 + lVar32) == *puVar50)
                    goto code_r0x7fffa4e93c65;
                    uVar55 = 0;
                    for (uVar45 = *puVar50 ^ *(uint64_t *)((int64_t)puVar43 + lVar32);
                        (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                      uVar55 = uVar55 + 1;
                    }
                    uVar45 = ((uint64_t)(uVar55 >> 3) + lVar32) - 4;
                    goto LAB_7fffa4e93e46;
                  }
                  puVar59 = (uint64_t *)(lVar32 + (int64_t)puVar43);
                  goto LAB_7fffa4e93da8;
                }
                uVar55 = 0;
                for (uVar45 = *puVar34 ^ *puVar63; (uVar45 & 1) == 0;
                    uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                  uVar55 = uVar55 + 1;
                }
                uVar45 = (uint64_t)(uVar55 >> 3);
              }
              else {
LAB_7fffa4e93da8:
                if ((puVar50 < (uint64_t *)((int64_t)puVar33 - 3U)) &&
                   ((int)*puVar59 == (int)*puVar50)) {
                  puVar59 = (uint64_t *)((int64_t)puVar59 + 4);
                  puVar50 = (uint64_t *)((int64_t)puVar50 + 4);
                }
                if ((puVar50 < (uint64_t *)((int64_t)puVar33 - 1U)) &&
                   ((short)*puVar59 == (short)*puVar50)) {
                  puVar59 = (uint64_t *)((int64_t)puVar59 + 2);
                  puVar50 = (uint64_t *)((int64_t)puVar50 + 2);
                }
                if (puVar50 < puVar33) {
                  puVar50 = (uint64_t *)
                            ((int64_t)puVar50 + (uint64_t)((char)*puVar59 == (char)*puVar50));
                }
                uVar45 = (int64_t)puVar50 - (int64_t)puVar63;
              }
LAB_7fffa4e93e46:
              if ((uint64_t *)((int64_t)puVar34 + uVar45) == puVar61) {
                puVar63 = (uint64_t *)((int64_t)puVar63 + uVar45);
                puVar61 = puVar63;
                puVar34 = puVar2;
                if (puVar63 < puVar31) {
                  if (*puVar2 == *puVar63) {
                    lVar32 = 0;
                    do {
                      puVar61 = (uint64_t *)((int64_t)puVar40 + lVar32 + uVar45 + 0xc);
                      if (puVar31 <= puVar61) {
                        puVar61 = (uint64_t *)((int64_t)puVar40 + lVar32 + uVar45 + 0xc);
                        puVar34 = (uint64_t *)(lVar32 + lVar27);
                        goto LAB_7fffa4e944d9;
                      }
                      puVar34 = (uint64_t *)(lVar27 + lVar32);
                      uVar21 = *puVar61;
                      lVar32 = lVar32 + 8;
                    } while (*puVar34 == uVar21);
                    uVar55 = 0;
                    for (uVar21 = *puVar34 ^ uVar21; (uVar21 & 1) == 0;
                        uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                      uVar55 = uVar55 + 1;
                    }
                    uVar21 = (uint64_t)(uVar55 >> 3) + lVar32;
                  }
                  else {
                    uVar55 = 0;
                    for (uVar21 = *puVar63 ^ *puVar2; (uVar21 & 1) == 0;
                        uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                      uVar55 = uVar55 + 1;
                    }
                    uVar21 = (uint64_t)(uVar55 >> 3);
                  }
                }
                else {
LAB_7fffa4e944d9:
                  if ((puVar61 < puVar4) && ((int)*puVar34 == (int)*puVar61)) {
                    puVar61 = (uint64_t *)((int64_t)puVar61 + 4);
                    puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
                  }
                  if ((puVar61 < puVar20) && ((short)*puVar34 == (short)*puVar61)) {
                    puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
                    puVar61 = (uint64_t *)((int64_t)puVar61 + 2);
                  }
                  if (puVar61 < puVar3) {
                    puVar61 = (uint64_t *)
                              ((int64_t)puVar61 + (uint64_t)((char)*puVar34 == (char)*puVar61));
                  }
                  uVar21 = (int64_t)puVar61 - (int64_t)puVar63;
                }
                uVar45 = uVar45 + uVar21;
              }
              uVar53 = iVar26 - uVar36;
              lVar51 = uVar45 + 4;
              if ((puVar38 < puVar43) && (param_4 < puVar40)) {
                lVar32 = lVar56 + (uint64_t)uVar36 + -1;
                for (lVar56 = 0;
                    *(char *)((int64_t)puVar40 + lVar56 + -1) == *(char *)(lVar32 + lVar56);
                    lVar56 = lVar56 + -1) {
                  puVar61 = (uint64_t *)((int64_t)puVar40 + lVar56 + -1);
                  if ((puVar61 <= param_4) || ((uint64_t *)(lVar32 + lVar56) <= puVar38)) {
                    lVar51 = (uVar45 - lVar56) + 5;
                    goto LAB_7fffa4e9566b;
                  }
                }
                puVar61 = (uint64_t *)((int64_t)puVar40 + lVar56);
                lVar51 = (uVar45 - lVar56) + 4;
LAB_7fffa4e95666:
              }
              else {
                puVar61 = puVar40;
              }
            }
LAB_7fffa4e9566b:
            puVar40 = (uint64_t *)param_2[3];
            uVar45 = (int64_t)puVar61 - (int64_t)param_4;
            if (puVar46 < puVar61) {
              puVar43 = puVar40;
              if (param_4 <= puVar46) {
                puVar43 = (uint64_t *)((int64_t)puVar40 + ((int64_t)puVar46 - (int64_t)param_4))
                ;
                uVar21 = param_4[1];
                *puVar40 = *param_4;
                puVar40[1] = uVar21;
                if (0x10 < (int64_t)puVar46 - (int64_t)param_4) {
                  puVar40 = puVar40 + 6;
                  while( true ) {
                    uVar21 = param_4[3];
                    puVar40[-4] = param_4[2];
                    puVar40[-3] = uVar21;
                    uVar21 = param_4[5];
                    puVar40[-2] = param_4[4];
                    puVar40[-1] = uVar21;
                    if (puVar43 <= puVar40) break;
                    puVar40 = puVar40 + 4;
                    param_4 = param_4 + 4;
                  }
                }
                param_4 = puVar46;
              }
              if (param_4 < puVar61) {
                uVar21 = (int64_t)puVar61 - (int64_t)param_4;
                puVar40 = puVar43;
                if ((3 < uVar21) && (0x1f < (uint64_t)((int64_t)puVar43 - (int64_t)param_4))) {
                  if (uVar21 < 0x20) {
                    uVar60 = 0;
                  }
                  else {
                    uVar60 = uVar21 & 0xffffffffffffffe0;
                    lVar32 = 0;
                    while( true ) {
                      uVar14 = ((uint64_t *)((int64_t)param_4 + lVar32))[1];
                      puVar5 = (uint64_t *)((int64_t)param_4 + lVar32 + 0x10);
                      uVar15 = *puVar5;
                      uVar16 = puVar5[1];
                      *(uint64_t *)((int64_t)puVar43 + lVar32) =
                           *(uint64_t *)((int64_t)param_4 + lVar32);
                      ((uint64_t *)((int64_t)puVar43 + lVar32))[1] = uVar14;
                      puVar5 = (uint64_t *)((int64_t)puVar43 + lVar32 + 0x10);
                      *puVar5 = uVar15;
                      puVar5[1] = uVar16;
                      if (uVar60 - 0x20 == lVar32) break;
                      lVar32 = lVar32 + 0x20;
                    }
                    if (uVar21 == uVar60) goto LAB_7fffa4e95937;
                    if ((uVar21 & 0x1c) == 0) {
                      param_4 = (uint64_t *)((int64_t)param_4 + uVar60);
                      puVar40 = (uint64_t *)((int64_t)puVar43 + uVar60);
                      goto LAB_7fffa4e9585f;
                    }
                  }
                  uVar62 = uVar21 & 0xfffffffffffffffc;
                  puVar40 = (uint64_t *)((int64_t)puVar43 + uVar62);
                  do {
                    *(uint32_t *)((int64_t)puVar43 + uVar60) =
                         *(uint32_t *)((int64_t)param_4 + uVar60);
                    uVar60 = uVar60 + 4;
                  } while (uVar62 != uVar60);
                  param_4 = (uint64_t *)((int64_t)param_4 + uVar62);
                  if (uVar21 == uVar62) goto LAB_7fffa4e95937;
                }
LAB_7fffa4e9585f:
                uVar55 = (int)puVar61 - (int)param_4 & 7;
                uVar21 = (uint64_t)uVar55;
                puVar38 = puVar40;
                puVar43 = param_4;
                if (uVar55 == 0) {
                  puVar63 = param_4;
                }
                else {
                  do {
                    uVar21 = uVar21 - 1;
                    puVar40 = (uint64_t *)((int64_t)puVar38 + 1);
                    *(char *)puVar38 = (char)*puVar43;
                    puVar63 = (uint64_t *)((int64_t)puVar43 + 1);
                    puVar38 = puVar40;
                    puVar43 = (uint64_t *)((int64_t)puVar43 + 1);
                  } while (uVar21 != 0);
                }
                if ((uint64_t)((int64_t)param_4 - (int64_t)puVar61) < 0xfffffffffffffff9) {
                  lVar32 = 0;
                  do {
                    *(uint8_t *)((int64_t)puVar40 + lVar32) =
                         *(uint8_t *)((int64_t)puVar63 + lVar32);
                    *(uint8_t *)((int64_t)puVar40 + lVar32 + 1) =
                         *(uint8_t *)((int64_t)puVar63 + lVar32 + 1);
                    *(uint8_t *)((int64_t)puVar40 + lVar32 + 2) =
                         *(uint8_t *)((int64_t)puVar63 + lVar32 + 2);
                    *(uint8_t *)((int64_t)puVar40 + lVar32 + 3) =
                         *(uint8_t *)((int64_t)puVar63 + lVar32 + 3);
                    *(uint8_t *)((int64_t)puVar40 + lVar32 + 4) =
                         *(uint8_t *)((int64_t)puVar63 + lVar32 + 4);
                    *(uint8_t *)((int64_t)puVar40 + lVar32 + 5) =
                         *(uint8_t *)((int64_t)puVar63 + lVar32 + 5);
                    *(uint8_t *)((int64_t)puVar40 + lVar32 + 6) =
                         *(uint8_t *)((int64_t)puVar63 + lVar32 + 6);
                    *(uint8_t *)((int64_t)puVar40 + lVar32 + 7) =
                         *(uint8_t *)((int64_t)puVar63 + lVar32 + 7);
                    lVar56 = lVar32 + 8;
                    lVar32 = lVar32 + 8;
                  } while ((uint64_t *)((int64_t)puVar63 + lVar56) != puVar61);
                }
              }
LAB_7fffa4e95937:
              uVar21 = param_2[1];
              param_2[3] = param_2[3] + uVar45;
              if (0xffff < uVar45) {
                *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar21 - *param_2 >> 3);
                *(uint32_t *)(param_2 + 9) = 1;
              }
            }
            else {
              uVar21 = param_4[1];
              *puVar40 = *param_4;
              puVar40[1] = uVar21;
              if (0x10 < uVar45) {
                uVar21 = param_2[3];
                uVar60 = param_4[3];
                *(uint64_t *)(uVar21 + 0x10) = param_4[2];
                *(uint64_t *)(uVar21 + 0x18) = uVar60;
                if (0x20 < (int64_t)uVar45) {
                  lVar32 = 0;
                  do {
                    puVar6 = (uint64_t *)((int64_t)param_4 + lVar32 + 0x20);
                    uVar14 = puVar6[1];
                    puVar5 = (uint64_t *)(uVar21 + 0x20 + lVar32);
                    *puVar5 = *puVar6;
                    puVar5[1] = uVar14;
                    puVar5 = (uint64_t *)((int64_t)param_4 + lVar32 + 0x30);
                    uVar14 = puVar5[1];
                    puVar6 = (uint64_t *)(uVar21 + 0x30 + lVar32);
                    *puVar6 = *puVar5;
                    puVar6[1] = uVar14;
                    lVar56 = uVar21 + 0x20 + lVar32;
                    lVar32 = lVar32 + 0x20;
                  } while (lVar56 + 0x20U < uVar21 + uVar45);
                }
                goto LAB_7fffa4e95937;
              }
              uVar21 = param_2[1];
              param_2[3] = param_2[3] + uVar45;
            }
            uVar60 = lVar51 - 3;
            *(short *)(uVar21 + 4) = (short)uVar45;
            *(uint32_t *)param_2[1] = uVar53 + 3;
            uVar45 = param_2[1];
            uVar55 = uVar30;
            goto joined_r0x7fffa4e95545;
          }
          puVar40 = (uint64_t *)
                    ((int64_t)puVar40 + ((int64_t)puVar40 - (int64_t)param_4 >> 8) + 1);
          uVar53 = uVar55;
LAB_7fffa4e937c6:
          uVar55 = uVar53;
        }
        else {
          puVar43 = (uint64_t *)(piVar28 + 1);
          puVar61 = (uint64_t *)((int64_t)puVar40 + 5);
          puVar38 = puVar3;
          if (uVar41 < uVar54) {
            puVar38 = puVar1;
          }
          puVar63 = (uint64_t *)((int64_t)puVar40 + (int64_t)puVar38 + (5 - (int64_t)puVar43));
          if (puVar3 <= puVar63) {
            puVar63 = puVar3;
          }
          puVar34 = puVar61;
          puVar33 = puVar43;
          if (puVar61 < (uint64_t *)((int64_t)puVar63 - 7U)) {
            if (*puVar43 == *puVar61) {
              lVar32 = 0;
              do {
                puVar34 = (uint64_t *)((int64_t)puVar40 + lVar32 + 0xd);
                if ((uint64_t *)((int64_t)puVar63 - 7U) <= puVar34) {
                  puVar34 = (uint64_t *)((int64_t)puVar40 + lVar32 + 0xd);
                  puVar33 = (uint64_t *)((int64_t)piVar28 + lVar32 + 0xc);
                  goto LAB_7fffa4e93ae3;
                }
                uVar45 = *(uint64_t *)((uint64_t)uVar41 + lVar51 + 0xc + lVar32);
                uVar21 = *puVar34;
                lVar32 = lVar32 + 8;
              } while (uVar45 == uVar21);
              uVar53 = 0;
              for (uVar45 = uVar45 ^ uVar21; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar60 = (uint64_t)(uVar53 >> 3) + lVar32;
            }
            else {
              uVar53 = 0;
              for (uVar45 = *puVar61 ^ *puVar43; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar60 = (uint64_t)(uVar53 >> 3);
            }
          }
          else {
LAB_7fffa4e93ae3:
            if ((puVar34 < (uint64_t *)((int64_t)puVar63 - 3U)) &&
               ((int)*puVar33 == (int)*puVar34)) {
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
              puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
            }
            if ((puVar34 < (uint64_t *)((int64_t)puVar63 - 1U)) &&
               ((short)*puVar33 == (short)*puVar34)) {
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
              puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
            }
            if (puVar34 < puVar63) {
              puVar34 = (uint64_t *)
                        ((int64_t)puVar34 + (uint64_t)((char)*puVar33 == (char)*puVar34));
            }
            uVar60 = (int64_t)puVar34 - (int64_t)puVar61;
          }
          if ((uint64_t *)((int64_t)puVar43 + uVar60) == puVar38) {
            puVar61 = (uint64_t *)((int64_t)puVar61 + uVar60);
            puVar43 = puVar2;
            puVar38 = puVar61;
            if (puVar61 < puVar31) {
              if (*puVar2 == *puVar61) {
                puVar38 = (uint64_t *)((int64_t)puVar40 + uVar60 + 0xd);
                lVar32 = 8;
LAB_7fffa4e93bf0:
                if (puVar38 < puVar31) {
                  if (*(uint64_t *)((int64_t)puVar2 + lVar32) == *puVar38)
                  goto code_r0x7fffa4e93c26;
                  uVar53 = 0;
                  for (uVar45 = *(uint64_t *)((int64_t)puVar2 + lVar32) ^ *puVar38;
                      (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                    uVar53 = uVar53 + 1;
                  }
                  uVar45 = (uint64_t)(uVar53 >> 3) + lVar32;
                  goto LAB_7fffa4e93f88;
                }
                puVar43 = (uint64_t *)(lVar32 + (int64_t)puVar2);
                goto LAB_7fffa4e93f0d;
              }
              uVar53 = 0;
              for (uVar45 = *puVar2 ^ *puVar61; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar45 = (uint64_t)(uVar53 >> 3);
            }
            else {
LAB_7fffa4e93f0d:
              if ((puVar38 < puVar4) && ((int)*puVar43 == (int)*puVar38)) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
                puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
              }
              if ((puVar38 < puVar20) && ((short)*puVar43 == (short)*puVar38)) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
                puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
              }
              if (puVar38 < puVar3) {
                puVar38 = (uint64_t *)
                          ((int64_t)puVar38 + (uint64_t)((char)*puVar43 == (char)*puVar38));
              }
              uVar45 = (int64_t)puVar38 - (int64_t)puVar61;
            }
LAB_7fffa4e93f88:
            uVar60 = uVar60 + uVar45;
          }
          puVar61 = (uint64_t *)((int64_t)puVar40 + 1);
          uVar45 = (int64_t)puVar61 - (int64_t)param_4;
          puVar43 = (uint64_t *)param_2[3];
          if (puVar46 < puVar61) {
            puVar38 = puVar43;
            if (param_4 <= puVar46) {
              uVar21 = param_4[1];
              *puVar43 = *param_4;
              puVar43[1] = uVar21;
              puVar38 = (uint64_t *)((int64_t)puVar43 + ((int64_t)puVar46 - (int64_t)param_4));
              if (0x10 < (int64_t)puVar46 - (int64_t)param_4) {
                puVar43 = puVar43 + 6;
                while( true ) {
                  uVar21 = param_4[3];
                  puVar43[-4] = param_4[2];
                  puVar43[-3] = uVar21;
                  uVar21 = param_4[5];
                  puVar43[-2] = param_4[4];
                  puVar43[-1] = uVar21;
                  if (puVar38 <= puVar43) break;
                  puVar43 = puVar43 + 4;
                  param_4 = param_4 + 4;
                }
              }
              param_4 = puVar46;
            }
            if (param_4 < puVar61) {
              uVar21 = ((int64_t)puVar40 + 1) - (int64_t)param_4;
              if (uVar21 < 4 || (uint64_t)((int64_t)puVar38 - (int64_t)param_4) < 0x20) {
                puVar43 = puVar38;
              }
              else {
                if (uVar21 < 0x20) {
                  uVar42 = 0;
                }
                else {
                  uVar42 = uVar21 & 0xffffffffffffffe0;
                  uVar62 = 0;
                  do {
                    uVar14 = ((uint64_t *)((int64_t)param_4 + uVar62))[1];
                    puVar5 = (uint64_t *)((int64_t)param_4 + uVar62 + 0x10);
                    uVar15 = *puVar5;
                    uVar16 = puVar5[1];
                    *(uint64_t *)((int64_t)puVar38 + uVar62) =
                         *(uint64_t *)((int64_t)param_4 + uVar62);
                    ((uint64_t *)((int64_t)puVar38 + uVar62))[1] = uVar14;
                    puVar5 = (uint64_t *)((int64_t)puVar38 + uVar62 + 0x10);
                    *puVar5 = uVar15;
                    puVar5[1] = uVar16;
                    uVar62 = uVar62 + 0x20;
                  } while (uVar42 != uVar62);
                  if (uVar21 == uVar42) goto LAB_7fffa4e94936;
                  if ((uVar21 & 0x1c) == 0) {
                    param_4 = (uint64_t *)((int64_t)param_4 + uVar42);
                    puVar43 = (uint64_t *)((int64_t)puVar38 + uVar42);
                    goto LAB_7fffa4e94876;
                  }
                }
                uVar62 = uVar21 & 0xfffffffffffffffc;
                puVar43 = (uint64_t *)((int64_t)puVar38 + uVar62);
                do {
                  *(uint32_t *)((int64_t)puVar38 + uVar42) =
                       *(uint32_t *)((int64_t)param_4 + uVar42);
                  uVar42 = uVar42 + 4;
                } while (uVar62 != uVar42);
                if (uVar21 == uVar62) goto LAB_7fffa4e94936;
                param_4 = (uint64_t *)((int64_t)param_4 + uVar62);
              }
LAB_7fffa4e94876:
              uVar53 = (int)((int64_t)puVar40 + 1) - (int)param_4 & 7;
              uVar21 = (uint64_t)uVar53;
              puVar63 = puVar43;
              puVar38 = param_4;
              if (uVar53 == 0) {
                puVar34 = param_4;
              }
              else {
                do {
                  uVar21 = uVar21 - 1;
                  puVar43 = (uint64_t *)((int64_t)puVar63 + 1);
                  *(char *)puVar63 = (char)*puVar38;
                  puVar34 = (uint64_t *)((int64_t)puVar38 + 1);
                  puVar63 = puVar43;
                  puVar38 = (uint64_t *)((int64_t)puVar38 + 1);
                } while (uVar21 != 0);
              }
              if (6 < (uint64_t)((int64_t)puVar40 - (int64_t)param_4)) {
                lVar32 = 0;
                do {
                  *(uint8_t *)((int64_t)puVar43 + lVar32) =
                       *(uint8_t *)((int64_t)puVar34 + lVar32);
                  *(uint8_t *)((int64_t)puVar43 + lVar32 + 1) =
                       *(uint8_t *)((int64_t)puVar34 + lVar32 + 1);
                  *(uint8_t *)((int64_t)puVar43 + lVar32 + 2) =
                       *(uint8_t *)((int64_t)puVar34 + lVar32 + 2);
                  *(uint8_t *)((int64_t)puVar43 + lVar32 + 3) =
                       *(uint8_t *)((int64_t)puVar34 + lVar32 + 3);
                  *(uint8_t *)((int64_t)puVar43 + lVar32 + 4) =
                       *(uint8_t *)((int64_t)puVar34 + lVar32 + 4);
                  *(uint8_t *)((int64_t)puVar43 + lVar32 + 5) =
                       *(uint8_t *)((int64_t)puVar34 + lVar32 + 5);
                  *(uint8_t *)((int64_t)puVar43 + lVar32 + 6) =
                       *(uint8_t *)((int64_t)puVar34 + lVar32 + 6);
                  lVar56 = lVar32 + 7;
                  *(uint8_t *)((int64_t)puVar43 + lVar32 + 7) =
                       *(uint8_t *)((int64_t)puVar34 + lVar32 + 7);
                  lVar32 = lVar32 + 8;
                } while ((uint64_t *)((int64_t)puVar34 + lVar56) != puVar40);
              }
            }
LAB_7fffa4e94936:
            uVar21 = param_2[1];
            param_2[3] = param_2[3] + uVar45;
            if (0xffff < uVar45) {
              *(uint32_t *)(param_2 + 9) = 1;
              *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar21 - *param_2 >> 3);
            }
          }
          else {
            uVar21 = param_4[1];
            *puVar43 = *param_4;
            puVar43[1] = uVar21;
            if (0x10 < uVar45) {
              uVar62 = param_4[3];
              uVar21 = param_2[3];
              *(uint64_t *)(uVar21 + 0x10) = param_4[2];
              *(uint64_t *)(uVar21 + 0x18) = uVar62;
              if (0x20 < (int64_t)uVar45) {
                uVar62 = uVar21 + 0x40;
                param_4 = param_4 + 6;
                while( true ) {
                  uVar42 = param_4[-1];
                  *(uint64_t *)(uVar62 - 0x20) = param_4[-2];
                  *(uint64_t *)(uVar62 - 0x18) = uVar42;
                  uVar42 = param_4[1];
                  *(uint64_t *)(uVar62 - 0x10) = *param_4;
                  *(uint64_t *)(uVar62 - 8) = uVar42;
                  if (uVar21 + uVar45 <= uVar62) break;
                  uVar62 = uVar62 + 0x20;
                  param_4 = param_4 + 4;
                }
              }
              goto LAB_7fffa4e94936;
            }
            uVar21 = param_2[1];
            param_2[3] = param_2[3] + uVar45;
          }
          lVar51 = uVar60 + 4;
          uVar60 = uVar60 + 1;
          *(short *)(uVar21 + 4) = (short)uVar45;
          *(uint32_t *)param_2[1] = 1;
          uVar45 = param_2[1];
          uVar53 = uVar30;
joined_r0x7fffa4e95545:
          if (0xffff < uVar60) {
            *(uint32_t *)(param_2 + 9) = 2;
            uVar21 = *param_2;
            uVar62 = uVar21 | ~uVar45;
            uVar58 = ~uVar45 & uVar21;
            uVar39 = ~uVar21 & uVar45;
            uVar64 = (uint64_t)uVar55;
            uVar44 = ~uVar64;
            uVar42 = (uint64_t)uVar29;
            uVar52 = ~uVar42;
            uVar48 = uVar21 ^ uVar45;
            *(int *)((int64_t)param_2 + 0x4c) =
                 (int)((uVar44 & uVar52 & uVar62) * -0xf387550d +
                       ((uint64_t)(((uint32_t)uVar45 ^ (uint32_t)~uVar21) & uVar55 ^ uVar29) +
                       ((uVar48 | uVar64) ^ uVar42)) * 0x7b268cfe9 +
                       (((uVar52 ^ (uVar44 | uVar58)) * 0x4d973016 +
                        (uint64_t)((uint32_t)uVar58 & (uint32_t)uVar44 & uVar29) * -0x4d973018) -
                       (((uVar64 ^ uVar48) & uVar52) * 2 + ((uVar44 ^ uVar58) & uVar52) * 4)) +
                       ((uint64_t)(((uint32_t)uVar62 | uVar55) & uVar29) - ((uVar55 | uVar29) | uVar58)
                       ) * 0xf387550f + ((uVar55 ^ uVar29) ^ uVar39) * 0x4d973018 +
                       ((uVar62 | uVar64) ^ uVar42) * 0xf3875511 +
                       (~(uint64_t)(uVar29 | uVar55) & uVar48) * 0x1411e8523 +
                       (uVar39 & uVar44 & uVar52) * 0xebee17ae3 >> 3);
          }
          puVar40 = (uint64_t *)(lVar51 + (int64_t)puVar61);
          *(short *)(uVar45 + 6) = (short)uVar60;
          param_2[1] = param_2[1] + 8;
          if (puVar19 < puVar40) {
            uVar36 = uVar55;
            uVar30 = uVar53;
LAB_7fffa4e953ec:
            uVar55 = uVar36;
            param_4 = puVar40;
          }
          else {
            uVar30 = iVar26 + 2;
            uVar45 = (uint64_t)uVar30;
            *(uint32_t *)(lVar11 + ((uint64_t)(*(int64_t *)(lVar9 + uVar45) * -0x30e44323485a9b9d) >>
                               (bVar25 & 0x3f)) * 4) = uVar30;
            *(int *)(lVar11 + ((uint64_t)
                               (*(int64_t *)((int64_t)puVar40 + -2) * -0x30e44323485a9b9d) >>
                              (bVar25 & 0x3f)) * 4) = ((int)puVar40 + -2) - iVar13;
            if (iVar35 < 6) {
              if (iVar35 == 5) {
                lVar32 = -0x30e4432345000000;
                *(uint32_t *)(lVar10 + ((uint64_t)(*(int64_t *)(lVar9 + uVar45) * -0x30e4432345000000)
                                   >> (bVar24 & 0x3f)) * 4) = uVar30;
                goto LAB_7fffa4e94e5a;
              }
              *(uint32_t *)(lVar10 + (uint64_t)
                                 ((uint32_t)(*(int *)(lVar9 + uVar45) * -0x61c8864f) >> (bVar23 & 0x1f))
                                 * 4) = uVar30;
              uVar45 = (uint64_t)
                       ((uint32_t)(*(int *)((int64_t)puVar40 + -1) * -0x61c8864f) >> (bVar23 & 0x1f));
            }
            else {
              if (iVar35 == 6) {
                lVar32 = -0x30e4432340650000;
                *(uint32_t *)(lVar10 + ((uint64_t)(*(int64_t *)(lVar9 + uVar45) * -0x30e4432340650000)
                                   >> (bVar24 & 0x3f)) * 4) = uVar30;
              }
              else {
                lVar32 = -0x30e44323405a9d00;
                *(uint32_t *)(lVar10 + ((uint64_t)(*(int64_t *)(lVar9 + uVar45) * -0x30e44323405a9d00)
                                   >> (bVar24 & 0x3f)) * 4) = uVar30;
              }
LAB_7fffa4e94e5a:
              uVar45 = (uint64_t)(lVar32 * *(int64_t *)((int64_t)puVar40 + -1)) >>
                       (bVar24 & 0x3f);
            }
            *(int *)(lVar10 + uVar45 * 4) = ((int)puVar40 + -1) - iVar13;
            uVar36 = uVar55;
            do {
              uVar55 = uVar53;
              uVar30 = uVar36;
              iVar26 = (int)puVar40 - iVar13;
              uVar53 = iVar26 - uVar30;
              lVar32 = lVar9;
              if (uVar53 < uVar54) {
                lVar32 = lVar37;
              }
              if ((iVar26 - uVar47 < uVar30) || ((uVar54 - 1) - uVar53 < 3)) {
                uVar36 = uVar30;
                uVar30 = uVar55;
                goto LAB_7fffa4e953ec;
              }
              piVar28 = (int *)(lVar32 + (uint64_t)uVar53);
              if (*piVar28 != (int)*puVar40) {
                param_4 = puVar40;
                uVar53 = uVar30;
                uVar30 = uVar55;
                goto LAB_7fffa4e937c6;
              }
              puVar61 = puVar3;
              if (uVar53 < uVar54) {
                puVar61 = puVar1;
              }
              puVar43 = (uint64_t *)((int64_t)puVar40 + 4);
              puVar63 = (uint64_t *)(piVar28 + 1);
              puVar38 = (uint64_t *)
                        ((int64_t)puVar40 + (int64_t)puVar61 + (4 - (int64_t)puVar63));
              if (puVar3 <= puVar38) {
                puVar38 = puVar3;
              }
              puVar34 = puVar43;
              puVar33 = puVar63;
              if (puVar43 < (uint64_t *)((int64_t)puVar38 - 7U)) {
                if (*puVar63 == *puVar43) {
                  puVar34 = (uint64_t *)((int64_t)puVar40 + 0xc);
                  puVar33 = (uint64_t *)(lVar32 + (uint64_t)uVar53 + 0xc);
                  lVar32 = -8;
LAB_7fffa4e95000:
                  if (puVar34 < (uint64_t *)((int64_t)puVar38 - 7U)) {
                    if (*puVar33 == *puVar34) goto code_r0x7fffa4e9506b;
                    uVar53 = 0;
                    for (uVar45 = *puVar34 ^ *puVar33; (uVar45 & 1) == 0;
                        uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                      uVar53 = uVar53 + 1;
                    }
                    uVar45 = (uint64_t)(uVar53 >> 3) - lVar32;
                    goto LAB_7fffa4e95115;
                  }
                  goto LAB_7fffa4e9508e;
                }
                uVar53 = 0;
                for (uVar45 = *puVar43 ^ *puVar63; (uVar45 & 1) == 0;
                    uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                  uVar53 = uVar53 + 1;
                }
                uVar45 = (uint64_t)(uVar53 >> 3);
              }
              else {
LAB_7fffa4e9508e:
                if ((puVar34 < (uint64_t *)((int64_t)puVar38 - 3U)) &&
                   ((int)*puVar33 == (int)*puVar34)) {
                  puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
                  puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
                }
                if ((puVar34 < (uint64_t *)((int64_t)puVar38 - 1U)) &&
                   ((short)*puVar33 == (short)*puVar34)) {
                  puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
                  puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
                }
                if (puVar34 < puVar38) {
                  puVar34 = (uint64_t *)
                            ((int64_t)puVar34 + (uint64_t)((char)*puVar33 == (char)*puVar34));
                }
                uVar45 = (int64_t)puVar34 - (int64_t)puVar43;
              }
LAB_7fffa4e95115:
              if ((uint64_t *)((int64_t)puVar63 + uVar45) == puVar61) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + uVar45);
                puVar61 = puVar2;
                puVar38 = puVar43;
                if (puVar43 < puVar31) {
                  if (*puVar2 == *puVar43) {
                    lVar32 = 0;
                    do {
                      puVar61 = (uint64_t *)((int64_t)puVar40 + lVar32 + uVar45 + 0xc);
                      if (puVar31 <= puVar61) {
                        puVar38 = (uint64_t *)((int64_t)puVar40 + lVar32 + uVar45 + 0xc);
                        puVar61 = (uint64_t *)(lVar32 + lVar27);
                        goto code_r0x7fffa4e9536c;
                      }
                      uVar21 = *puVar61;
                      puVar61 = (uint64_t *)(lVar27 + lVar32);
                      lVar32 = lVar32 + 8;
                    } while (*puVar61 == uVar21);
                    uVar53 = 0;
                    for (uVar21 = uVar21 ^ *puVar61; (uVar21 & 1) == 0;
                        uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                      uVar53 = uVar53 + 1;
                    }
                    uVar21 = (uint64_t)(uVar53 >> 3) + lVar32;
                  }
                  else {
                    uVar53 = 0;
                    for (uVar21 = *puVar2 ^ *puVar43; (uVar21 & 1) == 0;
                        uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                      uVar53 = uVar53 + 1;
                    }
                    uVar21 = (uint64_t)(uVar53 >> 3);
                  }
                }
                else {
code_r0x7fffa4e9536c:
                  if ((puVar38 < puVar4) && ((int)*puVar61 == (int)*puVar38)) {
                    puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
                    puVar61 = (uint64_t *)((int64_t)puVar61 + 4);
                  }
                  if ((puVar38 < puVar20) && ((short)*puVar61 == (short)*puVar38)) {
                    puVar61 = (uint64_t *)((int64_t)puVar61 + 2);
                    puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
                  }
                  if (puVar38 < puVar3) {
                    puVar38 = (uint64_t *)
                              ((int64_t)puVar38 + (uint64_t)((char)*puVar61 == (char)*puVar38));
                  }
                  uVar21 = (int64_t)puVar38 - (int64_t)puVar43;
                }
                uVar45 = uVar45 + uVar21;
              }
              if (puVar40 <= puVar46) {
                uVar21 = puVar40[1];
                puVar61 = (uint64_t *)param_2[3];
                *puVar61 = *puVar40;
                puVar61[1] = uVar21;
              }
              *(uint16_t *)(param_2[1] + 4) = 0;
              *(uint32_t *)param_2[1] = 1;
              if (0xffff < uVar45 + 1) {
                *(uint32_t *)(param_2 + 9) = 2;
                *(int *)((int64_t)param_2 + 0x4c) = (int)(param_2[1] - *param_2 >> 3);
              }
              *(short *)(param_2[1] + 6) = (short)(uVar45 + 1);
              param_2[1] = param_2[1] + 8;
              if (iVar35 < 6) {
                if (iVar35 == 5) {
                  lVar32 = -0x30e4432345000000;
                  goto LAB_7fffa4e94e87;
                }
                uVar21 = (uint64_t)((uint32_t)((int)*puVar40 * -0x61c8864f) >> (bVar23 & 0x1f));
              }
              else {
                if (iVar35 == 6) {
                  lVar32 = -0x30e4432340650000;
                }
                else {
                  lVar32 = -0x30e44323405a9d00;
                }
LAB_7fffa4e94e87:
                uVar21 = lVar32 * *puVar40 >> (bVar24 & 0x3f);
              }
              *(int *)(lVar10 + uVar21 * 4) = iVar26;
              *(int *)(lVar11 + (*puVar40 * -0x30e44323485a9b9d >> (bVar25 & 0x3f)) * 4) = iVar26;
              puVar40 = (uint64_t *)((int64_t)puVar40 + uVar45 + 4);
              param_4 = puVar40;
              uVar36 = uVar55;
              uVar53 = uVar30;
            } while (puVar40 <= puVar19);
          }
        }
      } while (puVar40 < puVar19);
    }
    *param_3 = uVar30;
    param_3[1] = uVar55;
    goto LAB_7fffa4e980f6;
  }
  uVar47 = iVar49 - uVar53;
  if (iVar49 - uVar54 <= uVar53) {
    uVar47 = uVar54;
  }
  if (iVar7 != 0) {
    uVar47 = uVar54;
  }
  puVar4 = (uint64_t *)(lVar9 + (uint64_t)uVar47);
  puVar46 = (uint64_t *)((int64_t)param_4 + (uint64_t)(param_4 == puVar4));
  iVar35 = (int)puVar46 - iVar13;
  uVar36 = iVar35 - uVar53;
  if (iVar35 - uVar54 <= uVar53) {
    uVar36 = uVar54;
  }
  if (iVar7 != 0) {
    uVar36 = uVar54;
  }
  uVar36 = iVar35 - uVar36;
  uVar54 = uVar55;
  if (uVar36 < uVar55) {
    uVar54 = 0;
  }
  uVar53 = 0;
  if (uVar30 <= uVar36) {
    uVar53 = uVar30;
  }
  puVar20 = (uint64_t *)((int64_t)param_4 + (uint64_t)(param_4 == puVar4) + 1);
  puStack_a0 = param_4;
  if (iVar26 < 6) {
    if (iVar26 == 5) {
      if (puVar20 <= puVar19) {
        puVar1 = (uint64_t *)((int64_t)puVar3 - 7);
        bVar23 = 0x40 - cVar18;
        puVar2 = (uint64_t *)((int64_t)puVar3 - 3);
        bVar24 = 0x40 - cVar17;
        puVar40 = puVar3 + -4;
        puVar22 = (uint64_t *)((int64_t)puVar3 - 1);
LAB_7fffa4e92095:
        uVar45 = *puVar46;
        uVar62 = uVar45 * -0x30e44323485a9b9d >> (bVar24 & 0x3f);
        lVar37 = -(uint64_t)uVar53;
        puVar31 = puVar46 + 0x20;
        uVar21 = (uint64_t)*(uint32_t *)(lVar11 + uVar62 * 4);
        puVar61 = (uint64_t *)(uVar21 + lVar9);
        uVar60 = 1;
        while( true ) {
          puVar43 = puVar20;
          uVar45 = uVar45 * -0x30e4432345000000 >> (bVar23 & 0x3f);
          iVar35 = (int)puVar46;
          iVar26 = iVar35 - iVar13;
          uVar29 = *(uint32_t *)(lVar10 + uVar45 * 4);
          uVar42 = (uint64_t)uVar29;
          *(int *)(lVar10 + uVar45 * 4) = iVar26;
          *(int *)(lVar11 + uVar62 * 4) = iVar26;
          if ((*(int *)((int64_t)puVar46 + lVar37 + 1) == *(int *)((int64_t)puVar46 + 1)) &&
             (uVar53 != 0)) {
            puVar20 = (uint64_t *)((int64_t)puVar46 + 5);
            puVar61 = (uint64_t *)((int64_t)puVar46 + lVar37 + 5);
            puVar31 = puVar20;
            if (puVar1 <= puVar20) goto joined_r0x7fffa4e922c4;
            if (*puVar61 != *puVar20) {
              uVar29 = 0;
              for (uVar45 = *puVar20 ^ *puVar61; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar29 = uVar29 + 1;
              }
              uVar45 = (uint64_t)(uVar29 >> 3);
              goto LAB_7fffa4e924ec;
            }
            lVar27 = 0;
            goto LAB_7fffa4e92310;
          }
          uVar45 = *puVar43;
          uVar62 = uVar45 * -0x30e44323485a9b9d >> (bVar24 & 0x3f);
          if ((uVar47 < (uint32_t)uVar21) && (*puVar61 == *puVar46)) {
            puVar20 = puVar46 + 1;
            puVar31 = puVar61 + 1;
            if (puVar1 <= puVar20) {
              puVar38 = puVar20;
              goto LAB_7fffa4e92cdd;
            }
            if (*puVar31 != *puVar20) {
              uVar54 = 0;
              for (uVar45 = *puVar20 ^ *puVar31; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar54 = uVar54 + 1;
              }
              uVar45 = (uint64_t)(uVar54 >> 3);
              goto LAB_7fffa4e92d71;
            }
            lVar37 = 0x10;
            goto LAB_7fffa4e9243b;
          }
          uVar41 = *(uint32_t *)(lVar11 + uVar62 * 4);
          uVar21 = (uint64_t)uVar41;
          puVar61 = (uint64_t *)(lVar9 + uVar21);
          if ((uVar47 < uVar29) && (piVar28 = (int *)(lVar9 + uVar42), *piVar28 == (int)*puVar46))
          break;
          if (puVar31 <= puVar43) {
            puVar31 = puVar31 + 0x20;
            uVar60 = uVar60 + 1;
          }
          puVar20 = (uint64_t *)((int64_t)puVar43 + uVar60);
          puVar46 = puVar43;
          if (puVar19 < (uint64_t *)((int64_t)puVar43 + uVar60)) goto LAB_7fffa4e98082;
        }
        if ((uVar47 < uVar41) && (*puVar61 == uVar45)) {
          puVar46 = puVar61 + 1;
          puVar20 = puVar43 + 1;
          if (puVar20 < puVar1) {
            if (*puVar46 == *puVar20) {
              lVar37 = 0x10;
LAB_7fffa4e923db:
              puVar31 = (uint64_t *)((int64_t)puVar43 + lVar37);
              if (puVar31 < puVar1) {
                uVar45 = *(uint64_t *)(lVar9 + uVar21 + lVar37);
                if (uVar45 == *puVar31) goto code_r0x7fffa4e923f9;
                uVar54 = 0;
                for (uVar45 = *puVar31 ^ uVar45; (uVar45 & 1) == 0;
                    uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                  uVar54 = uVar54 + 1;
                }
                uVar45 = ((uint64_t)(uVar54 >> 3) + lVar37) - 8;
                goto LAB_7fffa4e932ef;
              }
              puVar46 = (uint64_t *)(lVar9 + uVar21 + lVar37);
              goto LAB_7fffa4e93291;
            }
            uVar54 = 0;
            for (uVar45 = *puVar46 ^ *puVar20; (uVar45 & 1) == 0;
                uVar45 = uVar45 >> 1 | 0x8000000000000000) {
              uVar54 = uVar54 + 1;
            }
            uVar45 = (uint64_t)(uVar54 >> 3);
          }
          else {
            puVar31 = puVar20;
LAB_7fffa4e93291:
            if ((puVar31 < puVar2) && ((int)*puVar46 == (int)*puVar31)) {
              puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
              puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
            }
            if ((puVar31 < puVar22) && ((short)*puVar46 == (short)*puVar31)) {
              puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
              puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
            }
            if (puVar31 < puVar3) {
              puVar31 = (uint64_t *)
                        ((int64_t)puVar31 + (uint64_t)((char)*puVar46 == (char)*puVar31));
            }
            uVar45 = (int64_t)puVar31 - (int64_t)puVar20;
          }
LAB_7fffa4e932ef:
          uVar29 = (int)puVar43 - (int)puVar61;
          if (puStack_a0 < puVar43) {
            lVar37 = lVar9 + -1 + uVar21;
            for (lVar27 = 0;
                *(char *)((int64_t)puVar43 + lVar27 + -1) == *(char *)(lVar37 + lVar27);
                lVar27 = lVar27 + -1) {
              puVar20 = (uint64_t *)((int64_t)puVar43 + lVar27 + -1);
              if ((puVar20 <= puStack_a0) || ((uint64_t *)(lVar37 + lVar27) <= puVar4)) {
                lVar37 = (uVar45 - lVar27) + 9;
                goto joined_r0x7fffa4e92e00;
              }
            }
            lVar37 = (uVar45 - lVar27) + 8;
            puVar20 = (uint64_t *)(lVar27 + (int64_t)puVar43);
          }
          else {
            lVar37 = uVar45 + 8;
            puVar20 = puVar43;
          }
        }
        else {
          puVar20 = (uint64_t *)((int64_t)puVar46 + 4);
          puVar31 = (uint64_t *)(piVar28 + 1);
          if (puVar20 < puVar1) {
            if (*puVar31 == *puVar20) {
              lVar37 = lVar9 + 0xc + uVar42;
              lVar27 = 0;
              do {
                puVar31 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
                if (puVar1 <= puVar31) {
                  puVar61 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
                  puVar31 = (uint64_t *)(lVar37 + lVar27);
                  goto LAB_7fffa4e92e1e;
                }
                uVar45 = *puVar31;
                uVar21 = *(uint64_t *)(lVar37 + lVar27);
                lVar27 = lVar27 + 8;
              } while (uVar21 == uVar45);
              uVar54 = 0;
              for (uVar21 = uVar21 ^ uVar45; (uVar21 & 1) == 0;
                  uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                uVar54 = uVar54 + 1;
              }
              uVar45 = (uint64_t)(uVar54 >> 3) + lVar27;
            }
            else {
              uVar54 = 0;
              for (uVar45 = *puVar31 ^ *puVar20; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar54 = uVar54 + 1;
              }
              uVar45 = (uint64_t)(uVar54 >> 3);
            }
          }
          else {
            puVar61 = puVar20;
LAB_7fffa4e92e1e:
            if ((puVar61 < puVar2) && ((int)*puVar31 == (int)*puVar61)) {
              puVar61 = (uint64_t *)((int64_t)puVar61 + 4);
              puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
            }
            if ((puVar61 < puVar22) && ((short)*puVar31 == (short)*puVar61)) {
              puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
              puVar61 = (uint64_t *)((int64_t)puVar61 + 2);
            }
            if (puVar61 < puVar3) {
              puVar61 = (uint64_t *)
                        ((int64_t)puVar61 + (uint64_t)((char)*puVar31 == (char)*puVar61));
            }
            uVar45 = (int64_t)puVar61 - (int64_t)puVar20;
          }
          uVar29 = iVar35 - (int)piVar28;
          if (puStack_a0 < puVar46) {
            lVar27 = uVar42 + lVar9 + -1;
            for (lVar37 = 0;
                *(char *)((int64_t)puVar46 + lVar37 + -1) == *(char *)(lVar27 + lVar37);
                lVar37 = lVar37 + -1) {
              puVar20 = (uint64_t *)((int64_t)puVar46 + lVar37 + -1);
              if (((uint64_t *)(lVar27 + lVar37) <= puVar4) || (puVar20 <= puStack_a0)) {
                lVar37 = (uVar45 - lVar37) + 5;
                goto joined_r0x7fffa4e92e00;
              }
            }
            uVar45 = uVar45 - lVar37;
            puVar46 = (uint64_t *)((int64_t)puVar46 + lVar37);
          }
          lVar37 = uVar45 + 4;
          puVar20 = puVar46;
        }
        goto joined_r0x7fffa4e92e00;
      }
    }
    else {
LAB_7fffa4e95a68:
      if (puVar20 <= puVar19) {
        puVar1 = (uint64_t *)((int64_t)puVar3 - 7);
        bVar23 = 0x40 - cVar17;
        puVar2 = puVar3 + -4;
        bVar24 = 0x20 - cVar18;
        puVar40 = (uint64_t *)((int64_t)puVar3 - 1);
        puVar22 = (uint64_t *)((int64_t)puVar3 - 3);
LAB_7fffa4e95aff:
        uVar45 = *puVar46;
        uVar60 = uVar45 * -0x30e44323485a9b9d >> (bVar23 & 0x3f);
        puVar31 = puVar46 + 0x20;
        lVar37 = -(uint64_t)uVar53;
        uVar21 = (uint64_t)*(uint32_t *)(lVar11 + uVar60 * 4);
        puStack_80 = (uint64_t *)(uVar21 + lVar9);
        uVar62 = 1;
        while( true ) {
          puVar61 = puVar20;
          iVar35 = (int)puVar46;
          iVar26 = iVar35 - iVar13;
          uVar45 = (uint64_t)((uint32_t)((int)uVar45 * -0x61c8864f) >> (bVar24 & 0x1f));
          uVar29 = *(uint32_t *)(lVar10 + uVar45 * 4);
          uVar42 = (uint64_t)uVar29;
          *(int *)(lVar10 + uVar45 * 4) = iVar26;
          *(int *)(lVar11 + uVar60 * 4) = iVar26;
          if ((uVar53 != 0) &&
             (*(int *)((int64_t)puVar46 + lVar37 + 1) == *(int *)((int64_t)puVar46 + 1))) {
            puVar20 = (uint64_t *)((int64_t)puVar46 + 5);
            puVar31 = (uint64_t *)((int64_t)puVar46 + lVar37 + 5);
            if (puVar1 <= puVar20) {
              puVar61 = puVar20;
              goto LAB_7fffa4e95ec6;
            }
            if (*puVar31 != *puVar20) {
              uVar29 = 0;
              for (uVar45 = *puVar31 ^ *puVar20; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar29 = uVar29 + 1;
              }
              uVar45 = (uint64_t)(uVar29 >> 3);
              goto LAB_7fffa4e95f96;
            }
            lVar27 = 0;
            goto LAB_7fffa4e95d00;
          }
          uVar45 = *puVar61;
          uVar60 = uVar45 * -0x30e44323485a9b9d >> (bVar23 & 0x3f);
          if ((uVar47 < (uint32_t)uVar21) && (*puStack_80 == *puVar46)) {
            puVar20 = puVar46 + 1;
            puVar31 = puStack_80 + 1;
            if (puVar1 <= puVar20) {
              puVar43 = puVar20;
              goto LAB_7fffa4e96268;
            }
            if (*puVar31 != *puVar20) {
              uVar54 = 0;
              for (uVar45 = *puVar31 ^ *puVar20; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar54 = uVar54 + 1;
              }
              uVar45 = (uint64_t)(uVar54 >> 3);
              goto LAB_7fffa4e962d1;
            }
            lVar37 = 0;
            goto LAB_7fffa4e96139;
          }
          uVar41 = *(uint32_t *)(lVar11 + uVar60 * 4);
          uVar21 = (uint64_t)uVar41;
          puStack_80 = (uint64_t *)(lVar9 + uVar21);
          if ((uVar47 < uVar29) && (piVar28 = (int *)(lVar9 + uVar42), *piVar28 == (int)*puVar46))
          break;
          if (puVar31 <= puVar61) {
            puVar31 = puVar31 + 0x20;
            uVar62 = uVar62 + 1;
          }
          puVar20 = (uint64_t *)((int64_t)puVar61 + uVar62);
          puVar46 = puVar61;
          if (puVar19 < (uint64_t *)((int64_t)puVar61 + uVar62)) {
            puVar46 = param_4;
            goto LAB_7fffa4e980a8;
          }
        }
        if ((uVar47 < uVar41) && (*puStack_80 == uVar45)) {
          puVar20 = puStack_80 + 1;
          puVar46 = puVar61 + 1;
          if (puVar46 < puVar1) {
            if (*puVar20 == *puVar46) {
              puVar31 = puVar61 + 2;
              puVar43 = puVar61 + 1;
              puVar20 = (uint64_t *)(lVar9 + 0x10 + uVar21);
              do {
                if (puVar1 <= puVar31) goto LAB_7fffa4e968c0;
                uVar45 = *puVar20;
                uVar42 = *puVar31;
                puVar31 = puVar31 + 1;
                puVar43 = puVar43 + 1;
                puVar20 = puVar20 + 1;
              } while (uVar45 == uVar42);
              uVar54 = 0;
              for (uVar45 = uVar45 ^ uVar42; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar54 = uVar54 + 1;
              }
              uVar45 = (int64_t)puVar43 + ((uint64_t)(uVar54 >> 3) - (int64_t)puVar46);
            }
            else {
              uVar54 = 0;
              for (uVar45 = *puVar46 ^ *puVar20; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar54 = uVar54 + 1;
              }
              uVar45 = (uint64_t)(uVar54 >> 3);
            }
          }
          else {
            puVar31 = puVar46;
LAB_7fffa4e968c0:
            if ((puVar31 < puVar22) && ((int)*puVar20 == (int)*puVar31)) {
              puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
              puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
            }
            if ((puVar31 < puVar40) && ((short)*puVar20 == (short)*puVar31)) {
              puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
              puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
            }
            if (puVar31 < puVar3) {
              puVar31 = (uint64_t *)
                        ((int64_t)puVar31 + (uint64_t)((char)*puVar20 == (char)*puVar31));
            }
            uVar45 = (int64_t)puVar31 - (int64_t)puVar46;
          }
          lVar37 = uVar45 + 8;
          uVar29 = (int)puVar61 - (int)puStack_80;
          if (param_4 < puVar61) {
            lVar32 = lVar9 + -1 + uVar21;
            for (lVar27 = 0;
                *(char *)((int64_t)puVar61 + lVar27 + -1) == *(char *)(lVar32 + lVar27);
                lVar27 = lVar27 + -1) {
              puVar46 = (uint64_t *)((int64_t)puVar61 + lVar27 + -1);
              if (((uint64_t *)(lVar32 + lVar27) <= puVar4) || (puVar46 <= param_4)) {
                lVar37 = lVar37 + 1;
                goto LAB_7fffa4e964da;
              }
              lVar37 = lVar37 + 1;
            }
            puVar46 = (uint64_t *)(lVar27 + (int64_t)puVar61);
          }
          else {
            puVar46 = puVar61;
          }
        }
        else {
          puVar20 = (uint64_t *)((int64_t)puVar46 + 4);
          puVar31 = (uint64_t *)(piVar28 + 1);
          if (puVar20 < puVar1) {
            if (*puVar31 == *puVar20) {
              lVar37 = lVar9 + 0xc + uVar42;
              lVar27 = 0;
              do {
                puVar31 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
                if (puVar1 <= puVar31) {
                  puVar43 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
                  puVar31 = (uint64_t *)(lVar37 + lVar27);
                  goto LAB_7fffa4e963c6;
                }
                uVar45 = *(uint64_t *)(lVar37 + lVar27);
                uVar21 = *puVar31;
                lVar27 = lVar27 + 8;
              } while (uVar45 == uVar21);
              uVar54 = 0;
              for (uVar21 = uVar21 ^ uVar45; (uVar21 & 1) == 0;
                  uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                uVar54 = uVar54 + 1;
              }
              uVar45 = (uint64_t)(uVar54 >> 3) + lVar27;
            }
            else {
              uVar54 = 0;
              for (uVar45 = *puVar20 ^ *puVar31; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar54 = uVar54 + 1;
              }
              uVar45 = (uint64_t)(uVar54 >> 3);
            }
          }
          else {
            puVar43 = puVar20;
LAB_7fffa4e963c6:
            if ((puVar43 < puVar22) && ((int)*puVar31 == (int)*puVar43)) {
              puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
              puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
            }
            if ((puVar43 < puVar40) && ((short)*puVar31 == (short)*puVar43)) {
              puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
              puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
            }
            if (puVar43 < puVar3) {
              puVar43 = (uint64_t *)
                        ((int64_t)puVar43 + (uint64_t)((char)*puVar31 == (char)*puVar43));
            }
            uVar45 = (int64_t)puVar43 - (int64_t)puVar20;
          }
          lVar37 = uVar45 + 4;
          uVar29 = iVar35 - (int)piVar28;
          if (param_4 < puVar46) {
            puVar20 = (uint64_t *)(uVar42 + lVar9 + -1);
            puVar31 = puVar46;
            do {
              puVar46 = (uint64_t *)((int64_t)puVar31 + -1);
              if (*(char *)puVar46 != (char)*puVar20) {
                puVar46 = puVar31;
                break;
              }
              lVar37 = lVar37 + 1;
              if (puVar46 <= param_4) break;
              bVar12 = puVar4 < puVar20;
              puVar20 = (uint64_t *)((int64_t)puVar20 + -1);
              puVar31 = puVar46;
            } while (bVar12);
          }
        }
        goto LAB_7fffa4e964da;
      }
    }
  }
  else {
    if (iVar26 == 6) {
      if (puVar20 <= puVar19) {
        puVar1 = (uint64_t *)((int64_t)puVar3 - 1);
        puVar2 = (uint64_t *)((int64_t)puVar3 - 3);
        bVar23 = 0x40 - cVar17;
        puVar40 = puVar3 + -4;
        puVar22 = (uint64_t *)((int64_t)puVar3 - 7);
LAB_7fffa4e96eae:
        uVar45 = *puVar46;
        lVar37 = -(uint64_t)uVar53;
        puVar31 = puVar46 + 0x20;
        uVar62 = uVar45 * -0x30e44323485a9b9d >> (bVar23 & 0x3f);
        uVar60 = (uint64_t)*(uint32_t *)(lVar11 + uVar62 * 4);
        puVar61 = (uint64_t *)(uVar60 + lVar9);
        uVar21 = 1;
        while( true ) {
          puVar43 = puVar20;
          iVar35 = (int)puVar46;
          iVar26 = iVar35 - iVar13;
          bVar24 = (uint8_t)(0x40 - uVar29);
          uVar45 = uVar45 * -0x30e4432340650000 >> (bVar24 & 0x3f);
          uVar41 = *(uint32_t *)(lVar10 + uVar45 * 4);
          uVar42 = (uint64_t)uVar41;
          *(int *)(lVar10 + uVar45 * 4) = iVar26;
          *(int *)(lVar11 + uVar62 * 4) = iVar26;
          if ((uVar53 != 0) &&
             (*(int *)((int64_t)puVar46 + lVar37 + 1) == *(int *)((int64_t)puVar46 + 1))) {
            puVar20 = (uint64_t *)((int64_t)puVar46 + 5);
            puVar31 = (uint64_t *)((int64_t)puVar46 + lVar37 + 5);
            if (puVar22 <= puVar20) {
              puVar61 = puVar20;
              goto LAB_7fffa4e9723b;
            }
            if (*puVar31 != *puVar20) {
              uVar41 = 0;
              for (uVar45 = *puVar31 ^ *puVar20; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar41 = uVar41 + 1;
              }
              uVar45 = (uint64_t)(uVar41 >> 3);
              goto LAB_7fffa4e972ad;
            }
            lVar27 = 0;
            goto LAB_7fffa4e970c0;
          }
          uVar45 = *puVar43;
          uVar62 = uVar45 * -0x30e44323485a9b9d >> (bVar23 & 0x3f);
          if ((uVar47 < (uint32_t)uVar60) && (*puVar61 == *puVar46)) {
            puVar20 = puVar46 + 1;
            puVar31 = puVar61 + 1;
            if (puVar22 <= puVar20) {
              puVar38 = puVar20;
              goto LAB_7fffa4e97930;
            }
            if (*puVar31 != *puVar20) {
              uVar54 = 0;
              for (uVar45 = *puVar31 ^ *puVar20; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar54 = uVar54 + 1;
              }
              uVar45 = (uint64_t)(uVar54 >> 3);
              goto LAB_7fffa4e97989;
            }
            lVar37 = 0;
            goto LAB_7fffa4e9717d;
          }
          uVar8 = *(uint32_t *)(lVar11 + uVar62 * 4);
          uVar60 = (uint64_t)uVar8;
          puVar61 = (uint64_t *)(lVar9 + uVar60);
          if ((uVar47 < uVar41) && (piVar28 = (int *)(lVar9 + uVar42), *piVar28 == (int)*puVar46))
          break;
          if (puVar31 <= puVar43) {
            puVar31 = puVar31 + 0x20;
            uVar21 = uVar21 + 1;
          }
          puVar20 = (uint64_t *)((int64_t)puVar43 + uVar21);
          puVar46 = puVar43;
          if (puVar19 < (uint64_t *)((int64_t)puVar43 + uVar21)) goto LAB_7fffa4e98082;
        }
        if ((uVar8 <= uVar47) || (*puVar61 != uVar45)) {
          puVar20 = (uint64_t *)(piVar28 + 1);
          puVar31 = (uint64_t *)((int64_t)puVar46 + 4);
          if (puVar31 < puVar22) {
            if (*puVar20 == *puVar31) {
              lVar37 = lVar9 + 0xc + uVar42;
              lVar27 = 0;
              do {
                puVar20 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
                if (puVar22 <= puVar20) {
                  puVar61 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
                  puVar20 = (uint64_t *)(lVar37 + lVar27);
                  goto LAB_7fffa4e97a21;
                }
                uVar45 = *(uint64_t *)(lVar37 + lVar27);
                uVar60 = *puVar20;
                lVar27 = lVar27 + 8;
              } while (uVar45 == uVar60);
              uVar54 = 0;
              for (uVar45 = uVar45 ^ uVar60; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar54 = uVar54 + 1;
              }
              uVar45 = (uint64_t)(uVar54 >> 3) + lVar27;
            }
            else {
              uVar54 = 0;
              for (uVar45 = *puVar20 ^ *puVar31; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar54 = uVar54 + 1;
              }
              uVar45 = (uint64_t)(uVar54 >> 3);
            }
          }
          else {
            puVar61 = puVar31;
LAB_7fffa4e97a21:
            if ((puVar61 < puVar2) && ((int)*puVar20 == (int)*puVar61)) {
              puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
              puVar61 = (uint64_t *)((int64_t)puVar61 + 4);
            }
            if ((puVar61 < puVar1) && ((short)*puVar20 == (short)*puVar61)) {
              puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
              puVar61 = (uint64_t *)((int64_t)puVar61 + 2);
            }
            if (puVar61 < puVar3) {
              puVar61 = (uint64_t *)
                        ((int64_t)puVar61 + (uint64_t)((char)*puVar20 == (char)*puVar61));
            }
            uVar45 = (int64_t)puVar61 - (int64_t)puVar31;
          }
          uStack_140 = iVar35 - (int)piVar28;
          lVar37 = uVar45 + 4;
          if (puVar46 <= puStack_a0) goto LAB_7fffa4e97b18;
          for (puVar20 = (uint64_t *)(uVar42 + lVar9 + -1);
              puVar46 = (uint64_t *)((int64_t)puVar46 + -1), *(char *)puVar46 == (char)*puVar20;
              puVar20 = (uint64_t *)((int64_t)puVar20 + -1)) {
            lVar37 = lVar37 + 1;
            if ((puVar20 <= puVar4) || (puVar46 <= puStack_a0)) goto LAB_7fffa4e97b18;
          }
          goto LAB_7fffa4e979d7;
        }
        puVar46 = puVar61 + 1;
        puVar20 = puVar43 + 1;
        if (puVar20 < puVar22) {
          if (*puVar46 == *puVar20) {
            lVar37 = 0x10;
LAB_7fffa4e97d72:
            puVar31 = (uint64_t *)((int64_t)puVar43 + lVar37);
            if (puVar31 < puVar22) {
              uVar45 = *(uint64_t *)(lVar9 + uVar60 + lVar37);
              if (uVar45 == *puVar31) goto code_r0x7fffa4e97d8c;
              uVar54 = 0;
              for (uVar45 = uVar45 ^ *puVar31; (uVar45 & 1) == 0;
                  uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                uVar54 = uVar54 + 1;
              }
              uVar45 = ((uint64_t)(uVar54 >> 3) + lVar37) - 8;
              goto LAB_7fffa4e97deb;
            }
            puVar46 = (uint64_t *)(lVar9 + uVar60 + lVar37);
            goto LAB_7fffa4e97d95;
          }
          uVar54 = 0;
          for (uVar45 = *puVar20 ^ *puVar46; (uVar45 & 1) == 0;
              uVar45 = uVar45 >> 1 | 0x8000000000000000) {
            uVar54 = uVar54 + 1;
          }
          uVar45 = (uint64_t)(uVar54 >> 3);
        }
        else {
          puVar31 = puVar20;
LAB_7fffa4e97d95:
          if ((puVar31 < puVar2) && ((int)*puVar46 == (int)*puVar31)) {
            puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
            puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
          }
          if ((puVar31 < puVar1) && ((short)*puVar46 == (short)*puVar31)) {
            puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
            puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
          }
          if (puVar31 < puVar3) {
            puVar31 = (uint64_t *)
                      ((int64_t)puVar31 + (uint64_t)((char)*puVar46 == (char)*puVar31));
          }
          uVar45 = (int64_t)puVar31 - (int64_t)puVar20;
        }
LAB_7fffa4e97deb:
        uStack_140 = (int)puVar43 - (int)puVar61;
        lVar37 = uVar45 + 8;
        if (puStack_a0 < puVar43) {
          lVar32 = lVar9 + -1 + uVar60;
          for (lVar27 = 0; *(char *)((int64_t)puVar43 + lVar27 + -1) == *(char *)(lVar32 + lVar27);
              lVar27 = lVar27 + -1) {
            puVar46 = (uint64_t *)((int64_t)puVar43 + lVar27 + -1);
            if ((puVar46 <= puStack_a0) || ((uint64_t *)(lVar32 + lVar27) <= puVar4)) {
              lVar37 = lVar37 + 1;
              goto LAB_7fffa4e97b18;
            }
            lVar37 = lVar37 + 1;
          }
          puVar46 = (uint64_t *)(lVar27 + (int64_t)puVar43);
        }
        else {
          puVar46 = puVar43;
        }
        goto LAB_7fffa4e97b18;
      }
      puVar46 = param_4;
      goto LAB_7fffa4e980a8;
    }
    if (iVar26 != 7) goto LAB_7fffa4e95a68;
    if (puVar20 <= puVar19) {
      bVar23 = 0x40 - cVar17;
      puVar1 = (uint64_t *)((int64_t)puVar3 - 3);
      bVar24 = 0x40 - cVar18;
      puVar2 = (uint64_t *)((int64_t)puVar3 - 1);
      puVar40 = puVar3 + -4;
      puVar22 = (uint64_t *)((int64_t)puVar3 - 7);
LAB_7fffa4e981bd:
      uVar45 = *puVar46;
      lVar37 = -(uint64_t)uVar53;
      puVar31 = puVar46 + 0x20;
      uVar60 = uVar45 * -0x30e44323485a9b9d >> (bVar23 & 0x3f);
      uVar21 = (uint64_t)*(uint32_t *)(lVar11 + uVar60 * 4);
      puVar61 = (uint64_t *)(uVar21 + lVar9);
      uVar62 = 1;
      while( true ) {
        puVar43 = puVar20;
        uVar45 = uVar45 * -0x30e44323405a9d00 >> (bVar24 & 0x3f);
        iVar35 = (int)puVar46;
        iVar26 = iVar35 - iVar13;
        uVar29 = *(uint32_t *)(lVar10 + uVar45 * 4);
        uVar42 = (uint64_t)uVar29;
        *(int *)(lVar10 + uVar45 * 4) = iVar26;
        *(int *)(lVar11 + uVar60 * 4) = iVar26;
        if ((*(int *)((int64_t)puVar46 + lVar37 + 1) == *(int *)((int64_t)puVar46 + 1)) &&
           (uVar53 != 0)) {
          puVar20 = (uint64_t *)((int64_t)puVar46 + 5);
          puVar31 = (uint64_t *)((int64_t)puVar46 + lVar37 + 5);
          if (puVar22 <= puVar20) {
            puVar61 = puVar20;
            goto LAB_7fffa4e9854a;
          }
          if (*puVar31 != *puVar20) {
            uVar29 = 0;
            for (uVar45 = *puVar31 ^ *puVar20; (uVar45 & 1) == 0;
                uVar45 = uVar45 >> 1 | 0x8000000000000000) {
              uVar29 = uVar29 + 1;
            }
            uVar45 = (uint64_t)(uVar29 >> 3);
            goto LAB_7fffa4e98629;
          }
          lVar27 = 0xd;
          goto LAB_7fffa4e984d2;
        }
        uVar45 = *puVar43;
        uVar60 = uVar45 * -0x30e44323485a9b9d >> (bVar23 & 0x3f);
        if ((uVar47 < (uint32_t)uVar21) && (*puVar61 == *puVar46)) {
          puVar20 = puVar61 + 1;
          puVar31 = puVar46 + 1;
          if (puVar22 <= puVar31) {
            puVar38 = puVar31;
            goto LAB_7fffa4e98a42;
          }
          if (*puVar20 != *puVar31) {
            uVar54 = 0;
            for (uVar45 = *puVar31 ^ *puVar20; (uVar45 & 1) == 0;
                uVar45 = uVar45 >> 1 | 0x8000000000000000) {
              uVar54 = uVar54 + 1;
            }
            uVar45 = (uint64_t)(uVar54 >> 3);
            goto LAB_7fffa4e98add;
          }
          lVar37 = 0x10;
          goto LAB_7fffa4e98431;
        }
        uVar41 = *(uint32_t *)(lVar11 + uVar60 * 4);
        uVar21 = (uint64_t)uVar41;
        puVar61 = (uint64_t *)(lVar9 + uVar21);
        if ((uVar47 < uVar29) && (piVar28 = (int *)(lVar9 + uVar42), *piVar28 == (int)*puVar46))
        break;
        if (puVar31 <= puVar43) {
          puVar31 = puVar31 + 0x20;
          uVar62 = uVar62 + 1;
        }
        puVar20 = (uint64_t *)((int64_t)puVar43 + uVar62);
        puVar46 = puVar43;
        if (puVar19 < (uint64_t *)((int64_t)puVar43 + uVar62)) goto LAB_7fffa4e98082;
      }
      if ((uVar47 < uVar41) && (*puVar61 == uVar45)) {
        puVar46 = puVar43 + 1;
        puVar20 = puVar61 + 1;
        if (puVar46 < puVar22) {
          if (*puVar20 == *puVar46) {
            lVar37 = lVar9 + 0x10 + uVar21;
            lVar27 = 0;
            do {
              puVar20 = (uint64_t *)((int64_t)puVar43 + lVar27 + 0x10);
              if (puVar22 <= puVar20) {
                puVar31 = (uint64_t *)((int64_t)puVar43 + lVar27 + 0x10);
                puVar20 = (uint64_t *)(lVar37 + lVar27);
                goto LAB_7fffa4e98df7;
              }
              uVar45 = *(uint64_t *)(lVar37 + lVar27);
              uVar42 = *puVar20;
              lVar27 = lVar27 + 8;
            } while (uVar45 == uVar42);
            uVar54 = 0;
            for (uVar42 = uVar42 ^ uVar45; (uVar42 & 1) == 0;
                uVar42 = uVar42 >> 1 | 0x8000000000000000) {
              uVar54 = uVar54 + 1;
            }
            uVar45 = (uint64_t)(uVar54 >> 3) + lVar27;
          }
          else {
            uVar54 = 0;
            for (uVar45 = *puVar20 ^ *puVar46; (uVar45 & 1) == 0;
                uVar45 = uVar45 >> 1 | 0x8000000000000000) {
              uVar54 = uVar54 + 1;
            }
            uVar45 = (uint64_t)(uVar54 >> 3);
          }
        }
        else {
          puVar31 = puVar46;
LAB_7fffa4e98df7:
          if ((puVar31 < puVar1) && ((int)*puVar20 == (int)*puVar31)) {
            puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
            puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
          }
          if ((puVar31 < puVar2) && ((short)*puVar20 == (short)*puVar31)) {
            puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
            puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
          }
          if (puVar31 < puVar3) {
            puVar31 = (uint64_t *)
                      ((int64_t)puVar31 + (uint64_t)((char)*puVar20 == (char)*puVar31));
          }
          uVar45 = (int64_t)puVar31 - (int64_t)puVar46;
        }
        uVar29 = (int)puVar43 - (int)puVar61;
        if (puStack_a0 < puVar43) {
          lVar37 = lVar9 + -1 + uVar21;
          for (lVar27 = 0; *(char *)((int64_t)puVar43 + lVar27 + -1) == *(char *)(lVar37 + lVar27);
              lVar27 = lVar27 + -1) {
            puVar46 = (uint64_t *)((int64_t)puVar43 + lVar27 + -1);
            if (((uint64_t *)(lVar37 + lVar27) <= puVar4) || (puVar46 <= puStack_a0)) {
              lVar37 = (uVar45 - lVar27) + 9;
              goto LAB_7fffa4e98ec3;
            }
          }
          lVar37 = (uVar45 - lVar27) + 8;
          puVar46 = (uint64_t *)(lVar27 + (int64_t)puVar43);
        }
        else {
          lVar37 = uVar45 + 8;
          puVar46 = puVar43;
        }
      }
      else {
        puVar20 = (uint64_t *)(piVar28 + 1);
        puVar31 = (uint64_t *)((int64_t)puVar46 + 4);
        if (puVar31 < puVar22) {
          if (*puVar20 == *puVar31) {
            lVar37 = lVar9 + 0xc + uVar42;
            lVar27 = 0;
            do {
              puVar20 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
              if (puVar22 <= puVar20) {
                puVar61 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
                puVar20 = (uint64_t *)(lVar37 + lVar27);
                goto LAB_7fffa4e98c3e;
              }
              uVar45 = *(uint64_t *)(lVar37 + lVar27);
              uVar21 = *puVar20;
              lVar27 = lVar27 + 8;
            } while (uVar45 == uVar21);
            uVar54 = 0;
            for (uVar21 = uVar21 ^ uVar45; (uVar21 & 1) == 0;
                uVar21 = uVar21 >> 1 | 0x8000000000000000) {
              uVar54 = uVar54 + 1;
            }
            uVar45 = (uint64_t)(uVar54 >> 3) + lVar27;
          }
          else {
            uVar54 = 0;
            for (uVar45 = *puVar31 ^ *puVar20; (uVar45 & 1) == 0;
                uVar45 = uVar45 >> 1 | 0x8000000000000000) {
              uVar54 = uVar54 + 1;
            }
            uVar45 = (uint64_t)(uVar54 >> 3);
          }
        }
        else {
          puVar61 = puVar31;
LAB_7fffa4e98c3e:
          if ((puVar61 < puVar1) && ((int)*puVar20 == (int)*puVar61)) {
            puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
            puVar61 = (uint64_t *)((int64_t)puVar61 + 4);
          }
          if ((puVar61 < puVar2) && ((short)*puVar20 == (short)*puVar61)) {
            puVar61 = (uint64_t *)((int64_t)puVar61 + 2);
            puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
          }
          if (puVar61 < puVar3) {
            puVar61 = (uint64_t *)
                      ((int64_t)puVar61 + (uint64_t)((char)*puVar20 == (char)*puVar61));
          }
          uVar45 = (int64_t)puVar61 - (int64_t)puVar31;
        }
        lVar37 = uVar45 + 4;
        uVar29 = iVar35 - (int)piVar28;
        if (puStack_a0 < puVar46) {
          puVar20 = (uint64_t *)(uVar42 + lVar9 + -1);
          while (puVar31 = (uint64_t *)((int64_t)puVar46 + -1), *(char *)puVar31 == (char)*puVar20
                ) {
            lVar37 = lVar37 + 1;
            puVar46 = puVar31;
            if ((puVar20 <= puVar4) ||
               (puVar20 = (uint64_t *)((int64_t)puVar20 + -1), puVar31 <= puStack_a0)) break;
          }
        }
        else {
        }
      }
      goto LAB_7fffa4e98ec3;
    }
  }
  puVar46 = param_4;
LAB_7fffa4e980a8:
  if (uVar55 <= uVar36) {
    uVar55 = 0;
  }
  uVar29 = uVar55;
  if (uVar53 != 0) {
    uVar29 = uVar30;
  }
  if (uVar30 <= uVar36) {
    uVar29 = uVar55;
  }
  uVar55 = 0;
  if (uVar36 < uVar30) {
    uVar55 = uVar30;
  }
  if (uVar53 != 0) {
    uVar55 = uVar53;
  }
  if (uVar54 != 0) {
    uVar29 = uVar54;
  }
  param_3[1] = uVar29;
  *param_3 = uVar55;
  param_4 = puVar46;
LAB_7fffa4e980f6:
  return (int64_t)puVar3 - (int64_t)param_4;
code_r0x7fffa4e944ad:
  lVar56 = lVar56 + 8;
  goto LAB_7fffa4e94490;
code_r0x7fffa4e93c65:
  lVar32 = lVar32 + 8;
  goto LAB_7fffa4e93c40;
code_r0x7fffa4e93c26:
  puVar38 = puVar38 + 1;
  lVar32 = lVar32 + 8;
  goto LAB_7fffa4e93bf0;
code_r0x7fffa4e9506b:
  puVar34 = puVar34 + 1;
  lVar32 = lVar32 + -8;
  puVar33 = puVar33 + 1;
  goto LAB_7fffa4e95000;
LAB_7fffa4e92310:
  puVar31 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xd);
  if (puVar31 < puVar1) goto code_r0x7fffa4e9231d;
  puVar61 = (uint64_t *)((int64_t)puVar46 + lVar37 + lVar27 + 0xd);
  puVar31 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xd);
joined_r0x7fffa4e922c4:
  if ((puVar31 < puVar2) && (*(int *)puVar61 == *(int *)puVar31)) {
    puVar61 = (uint64_t *)((int64_t)puVar61 + 4);
    puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
  }
  if ((puVar31 < puVar22) && ((short)*puVar61 == (short)*puVar31)) {
    puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
    puVar61 = (uint64_t *)((int64_t)puVar61 + 2);
  }
  if (puVar31 < puVar3) {
    puVar31 = (uint64_t *)((int64_t)puVar31 + (uint64_t)((char)*puVar61 == (char)*puVar31));
  }
  uVar45 = (int64_t)puVar31 - (int64_t)puVar20;
  goto LAB_7fffa4e924ec;
code_r0x7fffa4e9231d:
  uVar45 = *puVar31;
  uVar21 = *(uint64_t *)((int64_t)puVar46 + lVar27 + lVar37 + 0xd);
  lVar27 = lVar27 + 8;
  if (uVar21 != uVar45) goto code_r0x7fffa4e9232d;
  goto LAB_7fffa4e92310;
code_r0x7fffa4e9232d:
  uVar29 = 0;
  for (uVar21 = uVar21 ^ uVar45; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x8000000000000000) {
    uVar29 = uVar29 + 1;
  }
  uVar45 = (uint64_t)(uVar29 >> 3) + lVar27;
LAB_7fffa4e924ec:
  puVar20 = (uint64_t *)((int64_t)puVar46 + 1);
  puVar31 = (uint64_t *)param_2[3];
  uVar21 = (int64_t)puVar20 - (int64_t)puStack_a0;
  if (puVar40 < puVar20) {
    puVar61 = puVar31;
    if (puStack_a0 <= puVar40) {
      uVar60 = puStack_a0[1];
      puVar61 = (uint64_t *)((int64_t)puVar31 + ((int64_t)puVar40 - (int64_t)puStack_a0));
      *puVar31 = *puStack_a0;
      puVar31[1] = uVar60;
      if ((int64_t)puVar40 - (int64_t)puStack_a0 < 0x11) {
        puStack_a0 = puVar40;
      }
      else {
        lVar37 = 0x10;
        while( true ) {
          uVar14 = ((uint64_t *)((int64_t)puStack_a0 + lVar37))[1];
          *(uint64_t *)((int64_t)puVar31 + lVar37) =
               *(uint64_t *)((int64_t)puStack_a0 + lVar37);
          ((uint64_t *)((int64_t)puVar31 + lVar37))[1] = uVar14;
          puVar5 = (uint64_t *)((int64_t)puStack_a0 + lVar37 + 0x10);
          uVar14 = puVar5[1];
          puVar6 = (uint64_t *)((int64_t)puVar31 + lVar37 + 0x10);
          *puVar6 = *puVar5;
          puVar6[1] = uVar14;
          if (puVar61 <= (uint64_t *)((int64_t)puVar31 + lVar37 + 0x20)) break;
          lVar37 = lVar37 + 0x20;
        }
        puStack_a0 = puVar40;
      }
    }
    if (puStack_a0 < puVar20) {
      uVar60 = (int64_t)puVar46 + (1 - (int64_t)puStack_a0);
      puVar31 = puVar61;
      if ((3 < uVar60) && (0x1f < (uint64_t)((int64_t)puVar61 - (int64_t)puStack_a0))) {
        if (uVar60 < 0x20) {
          uVar62 = 0;
        }
        else {
          uVar62 = uVar60 & 0xffffffffffffffe0;
          uVar42 = 0;
          do {
            uVar14 = *(uint64_t *)((int64_t)puStack_a0 + uVar42);
            uVar15 = ((uint64_t *)((int64_t)puStack_a0 + uVar42))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_a0 + uVar42 + 0x10);
            uVar16 = puVar5[1];
            puVar6 = (uint64_t *)((int64_t)puVar61 + uVar42 + 0x10);
            *puVar6 = *puVar5;
            puVar6[1] = uVar16;
            *(uint64_t *)((int64_t)puVar61 + uVar42) = uVar14;
            ((uint64_t *)((int64_t)puVar61 + uVar42))[1] = uVar15;
            uVar42 = uVar42 + 0x20;
          } while (uVar62 != uVar42);
          if (uVar60 == uVar62) goto LAB_7fffa4e92608;
          if ((uVar60 & 0x1c) == 0) {
            puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + uVar62);
            puVar31 = (uint64_t *)((int64_t)puVar61 + uVar62);
            goto LAB_7fffa4e92c1d;
          }
        }
        uVar42 = uVar60 & 0xfffffffffffffffc;
        puVar31 = (uint64_t *)((int64_t)puVar61 + uVar42);
        do {
          *(uint32_t *)((int64_t)puVar61 + uVar62) =
               *(uint32_t *)((int64_t)puStack_a0 + uVar62);
          uVar62 = uVar62 + 4;
        } while (uVar42 != uVar62);
        if (uVar60 == uVar42) goto LAB_7fffa4e92608;
        puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + uVar42);
      }
LAB_7fffa4e92c1d:
      uVar60 = (int64_t)puVar46 - (int64_t)puStack_a0;
      uVar29 = (uint32_t)uVar60;
      if ((uVar29 & 7) != 7) {
        uVar62 = (uint64_t)(uVar29 + 1 & 7);
        puVar43 = puVar31;
        puVar61 = puStack_a0;
        do {
          uVar62 = uVar62 - 1;
          puStack_a0 = (uint64_t *)((int64_t)puVar61 + 1);
          puVar31 = (uint64_t *)((int64_t)puVar43 + 1);
          *(char *)puVar43 = (char)*puVar61;
          puVar43 = puVar31;
          puVar61 = puStack_a0;
        } while (uVar62 != 0);
        if (uVar60 < 7) goto LAB_7fffa4e92608;
      }
      puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + 7);
      while( true ) {
        *(uint8_t *)puVar31 = *(uint8_t *)((int64_t)puStack_a0 + -7);
        *(uint8_t *)((int64_t)puVar31 + 1) = *(uint8_t *)((int64_t)puStack_a0 + -6);
        *(uint8_t *)((int64_t)puVar31 + 2) = *(uint8_t *)((int64_t)puStack_a0 + -5);
        *(uint8_t *)((int64_t)puVar31 + 3) = *(uint8_t *)((int64_t)puStack_a0 + -4);
        *(uint8_t *)((int64_t)puVar31 + 4) = *(uint8_t *)((int64_t)puStack_a0 + -3);
        *(uint8_t *)((int64_t)puVar31 + 5) = *(uint8_t *)((int64_t)puStack_a0 + -2);
        *(uint8_t *)((int64_t)puVar31 + 6) = *(uint8_t *)((int64_t)puStack_a0 + -1);
        *(char *)((int64_t)puVar31 + 7) = (char)*puStack_a0;
        if (puStack_a0 == puVar46) break;
        puStack_a0 = puStack_a0 + 1;
        puVar31 = puVar31 + 1;
      }
    }
LAB_7fffa4e92608:
    uVar60 = param_2[1];
    param_2[3] = param_2[3] + uVar21;
    if (0xffff < uVar21) {
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar60 - *param_2 >> 3);
      *(uint32_t *)(param_2 + 9) = 1;
    }
  }
  else {
    uVar60 = puStack_a0[1];
    *puVar31 = *puStack_a0;
    puVar31[1] = uVar60;
    if (0x10 < uVar21) {
      uVar60 = param_2[3];
      uVar62 = puStack_a0[3];
      *(uint64_t *)(uVar60 + 0x10) = puStack_a0[2];
      *(uint64_t *)(uVar60 + 0x18) = uVar62;
      if (0x20 < (int64_t)uVar21) {
        lVar37 = 0;
        while( true ) {
          puVar6 = (uint64_t *)((int64_t)puStack_a0 + lVar37 + 0x20);
          uVar14 = puVar6[1];
          puVar5 = (uint64_t *)(uVar60 + 0x20 + lVar37);
          *puVar5 = *puVar6;
          puVar5[1] = uVar14;
          puVar5 = (uint64_t *)((int64_t)puStack_a0 + lVar37 + 0x30);
          uVar14 = puVar5[1];
          puVar6 = (uint64_t *)(uVar60 + 0x30 + lVar37);
          *puVar6 = *puVar5;
          puVar6[1] = uVar14;
          if (uVar60 + uVar21 <= uVar60 + 0x20 + lVar37 + 0x20) break;
          lVar37 = lVar37 + 0x20;
        }
      }
      goto LAB_7fffa4e92608;
    }
    uVar60 = param_2[1];
    param_2[3] = param_2[3] + uVar21;
  }
  lVar37 = uVar45 + 4;
  uVar45 = uVar45 + 1;
  *(short *)(uVar60 + 4) = (short)uVar21;
  *(uint32_t *)param_2[1] = 1;
  uVar21 = param_2[1];
  goto joined_r0x7fffa4e92685;
LAB_7fffa4e9243b:
  puVar38 = (uint64_t *)((int64_t)puVar46 + lVar37);
  if (puVar38 < puVar1) {
    if (*(uint64_t *)((int64_t)puVar61 + lVar37) == *puVar38) goto code_r0x7fffa4e92459;
    uVar54 = 0;
    for (uVar45 = *puVar38 ^ *(uint64_t *)((int64_t)puVar61 + lVar37); (uVar45 & 1) == 0;
        uVar45 = uVar45 >> 1 | 0x8000000000000000) {
      uVar54 = uVar54 + 1;
    }
    uVar45 = ((uint64_t)(uVar54 >> 3) + lVar37) - 8;
  }
  else {
    puVar31 = (uint64_t *)(lVar37 + (int64_t)puVar61);
LAB_7fffa4e92cdd:
    if ((puVar38 < puVar2) && ((int)*puVar31 == (int)*puVar38)) {
      puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
      puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
    }
    if ((puVar38 < puVar22) && ((short)*puVar31 == (short)*puVar38)) {
      puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
      puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
    }
    if (puVar38 < puVar3) {
      puVar38 = (uint64_t *)((int64_t)puVar38 + (uint64_t)((char)*puVar31 == (char)*puVar38));
    }
    uVar45 = (int64_t)puVar38 - (int64_t)puVar20;
  }
  goto LAB_7fffa4e92d71;
code_r0x7fffa4e92459:
  lVar37 = lVar37 + 8;
  goto LAB_7fffa4e9243b;
LAB_7fffa4e92d71:
  lVar37 = uVar45 + 8;
  uVar29 = iVar35 - (int)puVar61;
  puVar20 = puVar46;
  if ((puVar4 < puVar61) && (puStack_a0 < puVar46)) {
    while( true ) {
      puVar61 = (uint64_t *)((int64_t)puVar61 + -1);
      puVar31 = (uint64_t *)((int64_t)puVar46 + -1);
      puVar20 = puVar46;
      if (*(char *)puVar31 != *(char *)puVar61) break;
      if ((puVar31 <= puStack_a0) || (puVar61 <= puVar4)) {
        lVar37 = lVar37 + 1;
        puVar20 = puVar31;
        break;
      }
      lVar37 = lVar37 + 1;
      puVar46 = puVar31;
    }
  }
joined_r0x7fffa4e92e00:
  if (uVar60 < 4) {
    *(int *)(lVar11 + uVar62 * 4) = (int)puVar43 - iVar13;
  }
  uVar21 = (int64_t)puVar20 - (int64_t)puStack_a0;
  puVar46 = (uint64_t *)param_2[3];
  if (puVar40 < puVar20) {
    puVar31 = puVar46;
    if (puStack_a0 <= puVar40) {
      uVar45 = puStack_a0[1];
      *puVar46 = *puStack_a0;
      puVar46[1] = uVar45;
      puVar31 = (uint64_t *)((int64_t)puVar46 + ((int64_t)puVar40 - (int64_t)puStack_a0));
      if (0x10 < (int64_t)puVar40 - (int64_t)puStack_a0) {
        lVar27 = 0x10;
        while( true ) {
          uVar14 = ((uint64_t *)((int64_t)puStack_a0 + lVar27))[1];
          *(uint64_t *)((int64_t)puVar46 + lVar27) =
               *(uint64_t *)((int64_t)puStack_a0 + lVar27);
          ((uint64_t *)((int64_t)puVar46 + lVar27))[1] = uVar14;
          puVar5 = (uint64_t *)((int64_t)puStack_a0 + lVar27 + 0x10);
          uVar14 = puVar5[1];
          puVar6 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0x10);
          *puVar6 = *puVar5;
          puVar6[1] = uVar14;
          if (puVar31 <= (uint64_t *)((int64_t)puVar46 + lVar27 + 0x20)) break;
          lVar27 = lVar27 + 0x20;
        }
      }
      puStack_a0 = puVar40;
    }
    if (puStack_a0 < puVar20) {
      uVar45 = (int64_t)puVar20 - (int64_t)puStack_a0;
      if ((uint64_t)((int64_t)puVar31 - (int64_t)puStack_a0) < 0x20 || uVar45 < 4) {
LAB_7fffa4e9307a:
        puVar46 = puVar31;
      }
      else {
        if (uVar45 < 0x20) {
          uVar62 = 0;
        }
        else {
          uVar62 = uVar45 & 0xffffffffffffffe0;
          uVar60 = 0;
          do {
            uVar14 = *(uint64_t *)((int64_t)puStack_a0 + uVar60);
            uVar15 = ((uint64_t *)((int64_t)puStack_a0 + uVar60))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_a0 + uVar60 + 0x10);
            uVar16 = puVar5[1];
            puVar6 = (uint64_t *)((int64_t)puVar31 + uVar60 + 0x10);
            *puVar6 = *puVar5;
            puVar6[1] = uVar16;
            *(uint64_t *)((int64_t)puVar31 + uVar60) = uVar14;
            ((uint64_t *)((int64_t)puVar31 + uVar60))[1] = uVar15;
            uVar60 = uVar60 + 0x20;
          } while (uVar62 != uVar60);
          if (uVar45 == uVar62) goto LAB_7fffa4e931ef;
          if ((uVar45 & 0x1c) == 0) {
            puVar31 = (uint64_t *)((int64_t)puVar31 + uVar62);
            puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + uVar62);
            goto LAB_7fffa4e9307a;
          }
        }
        uVar60 = uVar45 & 0xfffffffffffffffc;
        puVar46 = (uint64_t *)((int64_t)puVar31 + uVar60);
        do {
          *(uint32_t *)((int64_t)puVar31 + uVar62) =
               *(uint32_t *)((int64_t)puStack_a0 + uVar62);
          uVar62 = uVar62 + 4;
        } while (uVar60 != uVar62);
        if (uVar45 == uVar60) goto LAB_7fffa4e931ef;
        puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + uVar60);
      }
      uVar54 = (int)puVar20 - (int)puStack_a0 & 7;
      uVar45 = (uint64_t)uVar54;
      puVar31 = puStack_a0;
      if (uVar54 != 0) {
        do {
          uVar60 = *puVar31;
          puVar31 = (uint64_t *)((int64_t)puVar31 + 1);
          *(char *)puVar46 = (char)uVar60;
          puVar46 = (uint64_t *)((int64_t)puVar46 + 1);
          uVar45 = uVar45 - 1;
        } while (uVar45 != 0);
      }
      if ((uint64_t)((int64_t)puStack_a0 - (int64_t)puVar20) < 0xfffffffffffffff9) {
        lVar27 = 0;
        do {
          *(uint8_t *)((int64_t)puVar46 + lVar27) = *(uint8_t *)((int64_t)puVar31 + lVar27);
          *(uint8_t *)((int64_t)puVar46 + lVar27 + 1) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 1);
          *(uint8_t *)((int64_t)puVar46 + lVar27 + 2) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 2);
          *(uint8_t *)((int64_t)puVar46 + lVar27 + 3) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 3);
          *(uint8_t *)((int64_t)puVar46 + lVar27 + 4) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 4);
          *(uint8_t *)((int64_t)puVar46 + lVar27 + 5) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 5);
          *(uint8_t *)((int64_t)puVar46 + lVar27 + 6) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 6);
          *(uint8_t *)((int64_t)puVar46 + lVar27 + 7) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 7);
          lVar32 = lVar27 + 8;
          lVar27 = lVar27 + 8;
        } while ((uint64_t *)((int64_t)puVar31 + lVar32) != puVar20);
      }
    }
LAB_7fffa4e931ef:
    uVar60 = param_2[1];
    param_2[3] = param_2[3] + uVar21;
    if (0xffff < uVar21) {
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar60 - *param_2 >> 3);
      *(uint32_t *)(param_2 + 9) = 1;
    }
  }
  else {
    uVar45 = puStack_a0[1];
    *puVar46 = *puStack_a0;
    puVar46[1] = uVar45;
    if (0x10 < uVar21) {
      uVar45 = param_2[3];
      uVar60 = puStack_a0[3];
      *(uint64_t *)(uVar45 + 0x10) = puStack_a0[2];
      *(uint64_t *)(uVar45 + 0x18) = uVar60;
      if (0x20 < (int64_t)uVar21) {
        lVar27 = 0;
        do {
          puVar6 = (uint64_t *)((int64_t)puStack_a0 + lVar27 + 0x20);
          uVar14 = puVar6[1];
          puVar5 = (uint64_t *)(uVar45 + 0x20 + lVar27);
          *puVar5 = *puVar6;
          puVar5[1] = uVar14;
          puVar5 = (uint64_t *)((int64_t)puStack_a0 + lVar27 + 0x30);
          uVar14 = puVar5[1];
          puVar6 = (uint64_t *)(uVar45 + 0x30 + lVar27);
          *puVar6 = *puVar5;
          puVar6[1] = uVar14;
          lVar32 = uVar45 + 0x20 + lVar27;
          lVar27 = lVar27 + 0x20;
        } while (lVar32 + 0x20U < uVar45 + uVar21);
      }
      goto LAB_7fffa4e931ef;
    }
    uVar60 = param_2[1];
    param_2[3] = param_2[3] + uVar21;
  }
  uVar45 = lVar37 - 3;
  *(short *)(uVar60 + 4) = (short)uVar21;
  *(uint32_t *)param_2[1] = uVar29 + 3;
  uVar21 = param_2[1];
  uVar54 = uVar53;
  uVar53 = uVar29;
joined_r0x7fffa4e92685:
  if (0xffff < uVar45) {
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar21 - *param_2 >> 3);
  }
  puVar46 = (uint64_t *)((int64_t)puVar20 + lVar37);
  *(short *)(uVar21 + 6) = (short)uVar45;
  param_2[1] = param_2[1] + 8;
  if (puVar46 <= puVar19) {
    uVar29 = iVar26 + 2;
    *(uint32_t *)(lVar11 + ((uint64_t)(*(int64_t *)(lVar9 + (uint64_t)uVar29) * -0x30e44323485a9b9d)
                       >> (bVar24 & 0x3f)) * 4) = uVar29;
    plStack_78 = (int64_t *)(lVar9 + (uint64_t)uVar29);
    *(int *)(lVar11 + ((uint64_t)(*(int64_t *)((int64_t)puVar46 + -2) * -0x30e44323485a9b9d) >>
                      (bVar24 & 0x3f)) * 4) = ((int)puVar46 + -2) - iVar13;
    *(int *)(lVar10 + ((uint64_t)(*plStack_78 * -0x30e4432345000000) >> (bVar23 & 0x3f)) * 4) =
         iVar26 + 2;
    *(int *)(lVar10 + ((uint64_t)(*(int64_t *)((int64_t)puVar46 + -1) * -0x30e4432345000000) >>
                      (bVar23 & 0x3f)) * 4) = ((int)puVar46 + -1) - iVar13;
    do {
      uVar29 = uVar54;
      uVar54 = uVar29;
      if ((uVar29 == 0) || ((int)*puVar46 != *(int *)((int64_t)puVar46 - (uint64_t)uVar29)))
      break;
      lVar37 = -(uint64_t)uVar29;
      puVar20 = (uint64_t *)((int64_t)puVar46 + 4);
      puVar31 = (uint64_t *)((int64_t)puVar46 + lVar37 + 4);
      puVar61 = puVar20;
      if (puVar20 < puVar1) {
        if (*puVar31 == *puVar20) {
          lVar27 = 0;
          do {
            puVar31 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
            if (puVar1 <= puVar31) {
              puVar31 = (uint64_t *)((int64_t)puVar46 + lVar37 + 0xc + lVar27);
              puVar61 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
              goto joined_r0x7fffa4e928fb;
            }
            uVar45 = *(uint64_t *)((int64_t)puVar46 + lVar27 + lVar37 + 0xc);
            uVar21 = *puVar31;
            lVar27 = lVar27 + 8;
          } while (uVar45 == uVar21);
          uVar54 = 0;
          for (uVar45 = uVar45 ^ uVar21; (uVar45 & 1) == 0;
              uVar45 = uVar45 >> 1 | 0x8000000000000000) {
            uVar54 = uVar54 + 1;
          }
          uVar45 = (uint64_t)(uVar54 >> 3) + lVar27;
        }
        else {
          uVar54 = 0;
          for (uVar45 = *puVar31 ^ *puVar20; (uVar45 & 1) == 0;
              uVar45 = uVar45 >> 1 | 0x8000000000000000) {
            uVar54 = uVar54 + 1;
          }
          uVar45 = (uint64_t)(uVar54 >> 3);
        }
      }
      else {
joined_r0x7fffa4e928fb:
        if ((puVar61 < puVar2) && ((int)*puVar31 == (int)*puVar61)) {
          puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
          puVar61 = (uint64_t *)((int64_t)puVar61 + 4);
        }
        if ((puVar61 < puVar22) && ((short)*puVar31 == (short)*puVar61)) {
          puVar61 = (uint64_t *)((int64_t)puVar61 + 2);
          puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
        }
        if (puVar61 < puVar3) {
          puVar61 = (uint64_t *)((int64_t)puVar61 + (uint64_t)((char)*puVar31 == (char)*puVar61))
          ;
        }
        uVar45 = (int64_t)puVar61 - (int64_t)puVar20;
      }
      iVar26 = (int)puVar46 - iVar13;
      *(int *)(lVar10 + (*puVar46 * -0x30e4432345000000 >> (bVar23 & 0x3f)) * 4) = iVar26;
      *(int *)(lVar11 + (*puVar46 * -0x30e44323485a9b9d >> (bVar24 & 0x3f)) * 4) = iVar26;
      if (puVar46 <= puVar40) {
        uVar21 = puVar46[1];
        puVar20 = (uint64_t *)param_2[3];
        *puVar20 = *puVar46;
        puVar20[1] = uVar21;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar45 + 1) {
        *(uint32_t *)(param_2 + 9) = 2;
        *(int *)((int64_t)param_2 + 0x4c) = (int)(param_2[1] - *param_2 >> 3);
      }
      *(short *)(param_2[1] + 6) = (short)(uVar45 + 1);
      param_2[1] = param_2[1] + 8;
      puVar46 = (uint64_t *)((int64_t)puVar46 + uVar45 + 4);
      uVar54 = uVar53;
      uVar53 = uVar29;
    } while (puVar46 <= puVar19);
  }
  puVar20 = (uint64_t *)((int64_t)puVar46 + 1);
  puStack_a0 = puVar46;
  if (puVar19 < puVar20) goto LAB_7fffa4e980a8;
  goto LAB_7fffa4e92095;
code_r0x7fffa4e923f9:
  lVar37 = lVar37 + 8;
  goto LAB_7fffa4e923db;
LAB_7fffa4e970c0:
  puVar31 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xd);
  if (puVar31 < puVar22) goto code_r0x7fffa4e970cd;
  puVar61 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xd);
  puVar31 = (uint64_t *)((int64_t)puVar46 + lVar37 + lVar27 + 0xd);
LAB_7fffa4e9723b:
  if ((puVar61 < puVar2) && ((int)*puVar31 == (int)*puVar61)) {
    puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
    puVar61 = (uint64_t *)((int64_t)puVar61 + 4);
  }
  if ((puVar61 < puVar1) && ((short)*puVar31 == (short)*puVar61)) {
    puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
    puVar61 = (uint64_t *)((int64_t)puVar61 + 2);
  }
  if (puVar61 < puVar3) {
    puVar61 = (uint64_t *)((int64_t)puVar61 + (uint64_t)((char)*puVar31 == (char)*puVar61));
  }
  uVar45 = (int64_t)puVar61 - (int64_t)puVar20;
  goto LAB_7fffa4e972ad;
code_r0x7fffa4e970cd:
  uVar45 = *puVar31;
  uVar21 = *(uint64_t *)((int64_t)puVar46 + lVar27 + lVar37 + 0xd);
  lVar27 = lVar27 + 8;
  if (uVar21 != uVar45) goto code_r0x7fffa4e970dd;
  goto LAB_7fffa4e970c0;
code_r0x7fffa4e970dd:
  uVar41 = 0;
  for (uVar21 = uVar21 ^ uVar45; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x8000000000000000) {
    uVar41 = uVar41 + 1;
  }
  uVar45 = (uint64_t)(uVar41 >> 3) + lVar27;
LAB_7fffa4e972ad:
  puVar20 = (uint64_t *)((int64_t)puVar46 + 1);
  puVar31 = (uint64_t *)param_2[3];
  uVar21 = (int64_t)puVar20 - (int64_t)puStack_a0;
  if (puVar40 < puVar20) {
    if (puVar40 < puStack_a0) {
      puVar61 = puVar31;
    }
    else {
      puVar61 = (uint64_t *)((int64_t)puVar31 + ((int64_t)puVar40 - (int64_t)puStack_a0));
      uVar60 = puStack_a0[1];
      *puVar31 = *puStack_a0;
      puVar31[1] = uVar60;
      if ((int64_t)puVar40 - (int64_t)puStack_a0 < 0x11) {
        puStack_a0 = puVar40;
      }
      else {
        puVar31 = puVar31 + 6;
        while( true ) {
          uVar60 = puStack_a0[3];
          puVar31[-4] = puStack_a0[2];
          puVar31[-3] = uVar60;
          uVar60 = puStack_a0[5];
          puVar31[-2] = puStack_a0[4];
          puVar31[-1] = uVar60;
          if (puVar61 <= puVar31) break;
          puVar31 = puVar31 + 4;
          puStack_a0 = puStack_a0 + 4;
        }
        puStack_a0 = puVar40;
      }
    }
    if (puStack_a0 < puVar20) {
      uVar60 = (int64_t)puVar46 + (1 - (int64_t)puStack_a0);
      if ((3 < uVar60) && (0x1f < (uint64_t)((int64_t)puVar61 - (int64_t)puStack_a0))) {
        if (uVar60 < 0x20) {
          uVar62 = 0;
        }
        else {
          uVar62 = uVar60 & 0xffffffffffffffe0;
          lVar37 = 0;
          while( true ) {
            uVar14 = ((uint64_t *)((int64_t)puStack_a0 + lVar37))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_a0 + lVar37 + 0x10);
            uVar15 = *puVar5;
            uVar16 = puVar5[1];
            *(uint64_t *)((int64_t)puVar61 + lVar37) =
                 *(uint64_t *)((int64_t)puStack_a0 + lVar37);
            ((uint64_t *)((int64_t)puVar61 + lVar37))[1] = uVar14;
            puVar5 = (uint64_t *)((int64_t)puVar61 + lVar37 + 0x10);
            *puVar5 = uVar15;
            puVar5[1] = uVar16;
            if (uVar62 - 0x20 == lVar37) break;
            lVar37 = lVar37 + 0x20;
          }
          if (uVar60 == uVar62) goto LAB_7fffa4e9747a;
          if ((uVar60 & 0x1c) == 0) {
            puVar61 = (uint64_t *)((int64_t)puVar61 + uVar62);
            puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + uVar62);
            goto LAB_7fffa4e97e8d;
          }
        }
        uVar42 = uVar60 & 0xfffffffffffffffc;
        do {
          *(uint32_t *)((int64_t)puVar61 + uVar62) =
               *(uint32_t *)((int64_t)puStack_a0 + uVar62);
          uVar62 = uVar62 + 4;
        } while (uVar42 != uVar62);
        if (uVar60 == uVar42) goto LAB_7fffa4e9747a;
        puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + uVar42);
        puVar61 = (uint64_t *)((int64_t)puVar61 + uVar42);
      }
LAB_7fffa4e97e8d:
      uVar60 = (int64_t)puVar46 - (int64_t)puStack_a0;
      uVar41 = (uint32_t)uVar60;
      if ((~uVar41 & 7) != 0) {
        uVar62 = (uint64_t)(uVar41 + 1 & 7);
        do {
          uVar42 = *puStack_a0;
          puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + 1);
          *(char *)puVar61 = (char)uVar42;
          puVar61 = (uint64_t *)((int64_t)puVar61 + 1);
          uVar62 = uVar62 - 1;
        } while (uVar62 != 0);
        if (uVar60 < 7) goto LAB_7fffa4e9747a;
      }
      puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + 7);
      while( true ) {
        *(uint8_t *)puVar61 = *(uint8_t *)((int64_t)puStack_a0 + -7);
        *(uint8_t *)((int64_t)puVar61 + 1) = *(uint8_t *)((int64_t)puStack_a0 + -6);
        *(uint8_t *)((int64_t)puVar61 + 2) = *(uint8_t *)((int64_t)puStack_a0 + -5);
        *(uint8_t *)((int64_t)puVar61 + 3) = *(uint8_t *)((int64_t)puStack_a0 + -4);
        *(uint8_t *)((int64_t)puVar61 + 4) = *(uint8_t *)((int64_t)puStack_a0 + -3);
        *(uint8_t *)((int64_t)puVar61 + 5) = *(uint8_t *)((int64_t)puStack_a0 + -2);
        *(uint8_t *)((int64_t)puVar61 + 6) = *(uint8_t *)((int64_t)puStack_a0 + -1);
        *(char *)((int64_t)puVar61 + 7) = (char)*puStack_a0;
        if (puStack_a0 == puVar46) break;
        puStack_a0 = puStack_a0 + 1;
        puVar61 = puVar61 + 1;
      }
    }
LAB_7fffa4e9747a:
    param_2[3] = param_2[3] + uVar21;
    uVar60 = param_2[1];
    if (0xffff < uVar21) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar60 - *param_2 >> 3);
    }
  }
  else {
    uVar60 = puStack_a0[1];
    *puVar31 = *puStack_a0;
    puVar31[1] = uVar60;
    if (0x10 < uVar21) {
      uVar60 = param_2[3];
      uVar62 = puStack_a0[3];
      *(uint64_t *)(uVar60 + 0x10) = puStack_a0[2];
      *(uint64_t *)(uVar60 + 0x18) = uVar62;
      if (0x20 < (int64_t)uVar21) {
        lVar37 = 0;
        do {
          puVar6 = (uint64_t *)((int64_t)puStack_a0 + lVar37 + 0x20);
          uVar14 = puVar6[1];
          puVar5 = (uint64_t *)(uVar60 + 0x20 + lVar37);
          *puVar5 = *puVar6;
          puVar5[1] = uVar14;
          puVar5 = (uint64_t *)((int64_t)puStack_a0 + lVar37 + 0x30);
          uVar14 = puVar5[1];
          puVar6 = (uint64_t *)(uVar60 + 0x30 + lVar37);
          *puVar6 = *puVar5;
          puVar6[1] = uVar14;
          lVar27 = uVar60 + 0x20 + lVar37;
          lVar37 = lVar37 + 0x20;
        } while (lVar27 + 0x20U < uVar60 + uVar21);
      }
      goto LAB_7fffa4e9747a;
    }
    uVar60 = param_2[1];
    param_2[3] = param_2[3] + uVar21;
  }
  lVar37 = uVar45 + 4;
  uVar45 = uVar45 + 1;
  *(short *)(uVar60 + 4) = (short)uVar21;
  *(uint32_t *)param_2[1] = 1;
  uVar21 = param_2[1];
  puVar46 = puVar20;
  uStack_140 = uVar53;
  goto joined_r0x7fffa4e974e4;
LAB_7fffa4e9717d:
  puVar31 = (uint64_t *)((int64_t)puVar46 + lVar37 + 0x10);
  if (puVar31 < puVar22) goto code_r0x7fffa4e9718a;
  puVar38 = (uint64_t *)((int64_t)puVar46 + lVar37 + 0x10);
  puVar31 = (uint64_t *)((int64_t)puVar61 + lVar37 + 0x10);
LAB_7fffa4e97930:
  if ((puVar38 < puVar2) && ((int)*puVar31 == (int)*puVar38)) {
    puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
    puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
  }
  if ((puVar38 < puVar1) && ((short)*puVar31 == (short)*puVar38)) {
    puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
    puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
  }
  if (puVar38 < puVar3) {
    puVar38 = (uint64_t *)((int64_t)puVar38 + (uint64_t)((char)*puVar31 == (char)*puVar38));
  }
  uVar45 = (int64_t)puVar38 - (int64_t)puVar20;
  goto LAB_7fffa4e97989;
code_r0x7fffa4e9718a:
  uVar45 = *puVar31;
  uVar60 = *(uint64_t *)((int64_t)puVar61 + lVar37 + 0x10);
  lVar37 = lVar37 + 8;
  if (uVar60 != uVar45) goto code_r0x7fffa4e9719b;
  goto LAB_7fffa4e9717d;
code_r0x7fffa4e9719b:
  uVar54 = 0;
  for (uVar45 = uVar45 ^ uVar60; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x8000000000000000) {
    uVar54 = uVar54 + 1;
  }
  uVar45 = (uint64_t)(uVar54 >> 3) + lVar37;
LAB_7fffa4e97989:
  lVar37 = uVar45 + 8;
  uStack_140 = iVar35 - (int)puVar61;
  if ((puVar4 < puVar61) && (puStack_a0 < puVar46)) {
    puVar20 = (uint64_t *)((int64_t)puVar46 + -1);
    do {
      puVar61 = (uint64_t *)((int64_t)puVar61 + -1);
      if ((char)*puVar20 != *(char *)puVar61) {
        puVar46 = (uint64_t *)((int64_t)puVar20 + 1);
        goto LAB_7fffa4e97b18;
      }
      lVar37 = lVar37 + 1;
      puVar46 = (uint64_t *)((int64_t)puVar20 + -1);
    } while ((puVar4 < puVar61) && (bVar12 = puStack_a0 < puVar20, puVar20 = puVar46, bVar12));
LAB_7fffa4e979d7:
    puVar46 = (uint64_t *)((int64_t)puVar46 + 1);
  }
LAB_7fffa4e97b18:
  if (uVar21 < 4) {
    *(int *)(lVar11 + uVar62 * 4) = (int)puVar43 - iVar13;
  }
  puVar20 = (uint64_t *)param_2[3];
  uVar21 = (int64_t)puVar46 - (int64_t)puStack_a0;
  if (puVar40 < puVar46) {
    puVar31 = puVar20;
    if (puStack_a0 <= puVar40) {
      uVar45 = puStack_a0[1];
      *puVar20 = *puStack_a0;
      puVar20[1] = uVar45;
      puVar31 = (uint64_t *)((int64_t)puVar20 + ((int64_t)puVar40 - (int64_t)puStack_a0));
      if (0x10 < (int64_t)puVar40 - (int64_t)puStack_a0) {
        puVar20 = puVar20 + 6;
        while( true ) {
          uVar45 = puStack_a0[3];
          puVar20[-4] = puStack_a0[2];
          puVar20[-3] = uVar45;
          uVar45 = puStack_a0[5];
          puVar20[-2] = puStack_a0[4];
          puVar20[-1] = uVar45;
          if (puVar31 <= puVar20) break;
          puVar20 = puVar20 + 4;
          puStack_a0 = puStack_a0 + 4;
        }
      }
      puStack_a0 = puVar40;
    }
    if (puStack_a0 < puVar46) {
      uVar45 = (int64_t)puVar46 - (int64_t)puStack_a0;
      if ((3 < uVar45) && (0x1f < (uint64_t)((int64_t)puVar31 - (int64_t)puStack_a0))) {
        if (uVar45 < 0x20) {
          uVar60 = 0;
        }
        else {
          uVar60 = uVar45 & 0xffffffffffffffe0;
          uVar62 = 0;
          do {
            uVar14 = ((uint64_t *)((int64_t)puStack_a0 + uVar62))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_a0 + uVar62 + 0x10);
            uVar15 = *puVar5;
            uVar16 = puVar5[1];
            *(uint64_t *)((int64_t)puVar31 + uVar62) =
                 *(uint64_t *)((int64_t)puStack_a0 + uVar62);
            ((uint64_t *)((int64_t)puVar31 + uVar62))[1] = uVar14;
            puVar5 = (uint64_t *)((int64_t)puVar31 + uVar62 + 0x10);
            *puVar5 = uVar15;
            puVar5[1] = uVar16;
            uVar62 = uVar62 + 0x20;
          } while (uVar60 != uVar62);
          if (uVar45 == uVar60) goto LAB_7fffa4e98005;
          if ((uVar45 & 0x1c) == 0) {
            puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + uVar60);
            puVar31 = (uint64_t *)((int64_t)puVar31 + uVar60);
            goto LAB_7fffa4e97f43;
          }
        }
        uVar62 = uVar45 & 0xfffffffffffffffc;
        do {
          *(uint32_t *)((int64_t)puVar31 + uVar60) =
               *(uint32_t *)((int64_t)puStack_a0 + uVar60);
          uVar60 = uVar60 + 4;
        } while (uVar62 != uVar60);
        if (uVar45 == uVar62) goto LAB_7fffa4e98005;
        puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + uVar62);
        puVar31 = (uint64_t *)((int64_t)puVar31 + uVar62);
      }
LAB_7fffa4e97f43:
      uVar54 = (int)puVar46 - (int)puStack_a0 & 7;
      uVar45 = (uint64_t)uVar54;
      puVar61 = puVar31;
      puVar20 = puStack_a0;
      if (uVar54 == 0) {
        puVar43 = puStack_a0;
      }
      else {
        do {
          uVar45 = uVar45 - 1;
          puVar31 = (uint64_t *)((int64_t)puVar61 + 1);
          *(char *)puVar61 = (char)*puVar20;
          puVar43 = (uint64_t *)((int64_t)puVar20 + 1);
          puVar61 = puVar31;
          puVar20 = (uint64_t *)((int64_t)puVar20 + 1);
        } while (uVar45 != 0);
      }
      if ((uint64_t)((int64_t)puStack_a0 - (int64_t)puVar46) < 0xfffffffffffffff9) {
        lVar27 = 0;
        do {
          *(uint8_t *)((int64_t)puVar31 + lVar27) = *(uint8_t *)((int64_t)puVar43 + lVar27);
          *(uint8_t *)((int64_t)puVar31 + lVar27 + 1) =
               *(uint8_t *)((int64_t)puVar43 + lVar27 + 1);
          *(uint8_t *)((int64_t)puVar31 + lVar27 + 2) =
               *(uint8_t *)((int64_t)puVar43 + lVar27 + 2);
          *(uint8_t *)((int64_t)puVar31 + lVar27 + 3) =
               *(uint8_t *)((int64_t)puVar43 + lVar27 + 3);
          *(uint8_t *)((int64_t)puVar31 + lVar27 + 4) =
               *(uint8_t *)((int64_t)puVar43 + lVar27 + 4);
          *(uint8_t *)((int64_t)puVar31 + lVar27 + 5) =
               *(uint8_t *)((int64_t)puVar43 + lVar27 + 5);
          *(uint8_t *)((int64_t)puVar31 + lVar27 + 6) =
               *(uint8_t *)((int64_t)puVar43 + lVar27 + 6);
          *(uint8_t *)((int64_t)puVar31 + lVar27 + 7) =
               *(uint8_t *)((int64_t)puVar43 + lVar27 + 7);
          lVar32 = lVar27 + 8;
          lVar27 = lVar27 + 8;
        } while ((uint64_t *)((int64_t)puVar43 + lVar32) != puVar46);
      }
    }
LAB_7fffa4e98005:
    uVar60 = param_2[1];
    param_2[3] = param_2[3] + uVar21;
    if (0xffff < uVar21) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar60 - *param_2 >> 3);
    }
  }
  else {
    uVar45 = puStack_a0[1];
    *puVar20 = *puStack_a0;
    puVar20[1] = uVar45;
    if (0x10 < uVar21) {
      uVar45 = param_2[3];
      uVar60 = puStack_a0[3];
      *(uint64_t *)(uVar45 + 0x10) = puStack_a0[2];
      *(uint64_t *)(uVar45 + 0x18) = uVar60;
      if (0x20 < (int64_t)uVar21) {
        lVar27 = 0;
        do {
          puVar6 = (uint64_t *)((int64_t)puStack_a0 + lVar27 + 0x20);
          uVar14 = puVar6[1];
          puVar5 = (uint64_t *)(uVar45 + 0x20 + lVar27);
          *puVar5 = *puVar6;
          puVar5[1] = uVar14;
          puVar5 = (uint64_t *)((int64_t)puStack_a0 + lVar27 + 0x30);
          uVar14 = puVar5[1];
          puVar6 = (uint64_t *)(uVar45 + 0x30 + lVar27);
          *puVar6 = *puVar5;
          puVar6[1] = uVar14;
          lVar32 = uVar45 + 0x20 + lVar27;
          lVar27 = lVar27 + 0x20;
        } while (lVar32 + 0x20U < uVar45 + uVar21);
      }
      goto LAB_7fffa4e98005;
    }
    param_2[3] = param_2[3] + uVar21;
    uVar60 = param_2[1];
  }
  uVar45 = lVar37 - 3;
  *(short *)(uVar60 + 4) = (short)uVar21;
  *(uint32_t *)param_2[1] = uStack_140 + 3;
  uVar21 = param_2[1];
  uVar54 = uVar53;
joined_r0x7fffa4e974e4:
  uVar53 = uStack_140;
  if (0xffff < uVar45) {
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar21 - *param_2 >> 3);
  }
  puVar46 = (uint64_t *)((int64_t)puVar46 + lVar37);
  *(short *)(uVar21 + 6) = (short)uVar45;
  param_2[1] = param_2[1] + 8;
  if (puVar46 <= puVar19) {
    uVar41 = iVar26 + 2;
    *(uint32_t *)(lVar11 + ((uint64_t)(*(int64_t *)(lVar9 + (uint64_t)uVar41) * -0x30e44323485a9b9d)
                       >> (bVar23 & 0x3f)) * 4) = uVar41;
    *(int *)(lVar11 + ((uint64_t)(*(int64_t *)((int64_t)puVar46 + -2) * -0x30e44323485a9b9d) >>
                      (bVar23 & 0x3f)) * 4) = ((int)puVar46 + -2) - iVar13;
    *(uint32_t *)(lVar10 + ((uint64_t)(*(int64_t *)(lVar9 + (uint64_t)uVar41) * -0x30e4432340650000)
                       >> (uint64_t)(0x40 - uVar29)) * 4) = uVar41;
    *(int *)(lVar10 + ((uint64_t)(*(int64_t *)((int64_t)puVar46 + -1) * -0x30e4432340650000) >>
                      (bVar24 & 0x3f)) * 4) = ((int)puVar46 + -1) - iVar13;
    uVar41 = uVar53;
    do {
      uVar53 = uVar54;
      if (((int)*puVar46 != *(int *)((int64_t)puVar46 - (uint64_t)uVar53)) || (uVar53 == 0)) {
        uVar54 = uVar53;
        uVar53 = uVar41;
        break;
      }
      lVar37 = -(uint64_t)uVar53;
      puVar20 = (uint64_t *)((int64_t)puVar46 + 4);
      puVar61 = (uint64_t *)((int64_t)puVar46 + lVar37 + 4);
      puVar31 = puVar20;
      if (puVar20 < puVar22) {
        if (*puVar61 == *puVar20) {
          lVar27 = 0;
          do {
            puVar31 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
            if (puVar22 <= puVar31) {
              puVar61 = (uint64_t *)((int64_t)puVar46 + lVar37 + lVar27 + 0xc);
              puVar31 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
              goto joined_r0x7fffa4e9769b;
            }
            uVar45 = *puVar31;
            uVar21 = *(uint64_t *)((int64_t)puVar46 + lVar27 + lVar37 + 0xc);
            lVar27 = lVar27 + 8;
          } while (uVar21 == uVar45);
          uVar54 = 0;
          for (uVar21 = uVar21 ^ uVar45; (uVar21 & 1) == 0;
              uVar21 = uVar21 >> 1 | 0x8000000000000000) {
            uVar54 = uVar54 + 1;
          }
          uVar45 = (uint64_t)(uVar54 >> 3) + lVar27;
        }
        else {
          uVar54 = 0;
          for (uVar45 = *puVar61 ^ *puVar20; (uVar45 & 1) == 0;
              uVar45 = uVar45 >> 1 | 0x8000000000000000) {
            uVar54 = uVar54 + 1;
          }
          uVar45 = (uint64_t)(uVar54 >> 3);
        }
      }
      else {
joined_r0x7fffa4e9769b:
        if ((puVar31 < puVar2) && ((int)*puVar61 == (int)*puVar31)) {
          puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
          puVar61 = (uint64_t *)((int64_t)puVar61 + 4);
        }
        if ((puVar31 < puVar1) && ((short)*puVar61 == (short)*puVar31)) {
          puVar61 = (uint64_t *)((int64_t)puVar61 + 2);
          puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
        }
        if (puVar31 < puVar3) {
          puVar31 = (uint64_t *)((int64_t)puVar31 + (uint64_t)((char)*puVar61 == (char)*puVar31))
          ;
        }
        uVar45 = (int64_t)puVar31 - (int64_t)puVar20;
      }
      iVar26 = (int)puVar46 - iVar13;
      *(int *)(lVar10 + (*puVar46 * -0x30e4432340650000 >> (bVar24 & 0x3f)) * 4) = iVar26;
      *(int *)(lVar11 + (*puVar46 * -0x30e44323485a9b9d >> (bVar23 & 0x3f)) * 4) = iVar26;
      if (puVar46 <= puVar40) {
        uVar21 = puVar46[1];
        puVar20 = (uint64_t *)param_2[3];
        *puVar20 = *puVar46;
        puVar20[1] = uVar21;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar45 + 1) {
        *(uint32_t *)(param_2 + 9) = 2;
        *(int *)((int64_t)param_2 + 0x4c) = (int)(param_2[1] - *param_2 >> 3);
      }
      *(short *)(param_2[1] + 6) = (short)(uVar45 + 1);
      param_2[1] = param_2[1] + 8;
      puVar46 = (uint64_t *)((int64_t)puVar46 + uVar45 + 4);
      uVar54 = uVar41;
      uVar41 = uVar53;
    } while (puVar46 <= puVar19);
  }
  puVar20 = (uint64_t *)((int64_t)puVar46 + 1);
  puStack_a0 = puVar46;
  if (puVar19 < puVar20) goto LAB_7fffa4e980a8;
  goto LAB_7fffa4e96eae;
code_r0x7fffa4e97d8c:
  lVar37 = lVar37 + 8;
  goto LAB_7fffa4e97d72;
LAB_7fffa4e95d00:
  puVar31 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xd);
  if (puVar31 < puVar1) goto code_r0x7fffa4e95d0d;
  puVar31 = (uint64_t *)((int64_t)puVar46 + lVar37 + lVar27 + 0xd);
  puVar61 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xd);
LAB_7fffa4e95ec6:
  if ((puVar61 < puVar22) && ((int)*puVar31 == (int)*puVar61)) {
    puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
    puVar61 = (uint64_t *)((int64_t)puVar61 + 4);
  }
  if ((puVar61 < puVar40) && ((short)*puVar31 == (short)*puVar61)) {
    puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
    puVar61 = (uint64_t *)((int64_t)puVar61 + 2);
  }
  if (puVar61 < puVar3) {
    puVar61 = (uint64_t *)((int64_t)puVar61 + (uint64_t)((char)*puVar31 == (char)*puVar61));
  }
  uVar45 = (int64_t)puVar61 - (int64_t)puVar20;
  goto LAB_7fffa4e95f96;
code_r0x7fffa4e95d0d:
  uVar45 = *(uint64_t *)((int64_t)puVar46 + lVar27 + lVar37 + 0xd);
  uVar21 = *puVar31;
  lVar27 = lVar27 + 8;
  if (uVar45 != uVar21) goto code_r0x7fffa4e95d35;
  goto LAB_7fffa4e95d00;
code_r0x7fffa4e95d35:
  uVar29 = 0;
  for (uVar45 = uVar45 ^ uVar21; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x8000000000000000) {
    uVar29 = uVar29 + 1;
  }
  uVar45 = (uint64_t)(uVar29 >> 3) + lVar27;
LAB_7fffa4e95f96:
  puVar20 = (uint64_t *)((int64_t)puVar46 + 1);
  uVar21 = (int64_t)puVar20 - (int64_t)param_4;
  puVar31 = (uint64_t *)param_2[3];
  if (puVar2 < puVar20) {
    puVar61 = puVar31;
    if (param_4 <= puVar2) {
      uVar60 = param_4[1];
      *puVar31 = *param_4;
      puVar31[1] = uVar60;
      puVar61 = (uint64_t *)((int64_t)puVar31 + ((int64_t)puVar2 - (int64_t)param_4));
      if ((int64_t)puVar2 - (int64_t)param_4 < 0x11) {
        param_4 = puVar2;
      }
      else {
        lVar37 = 0x10;
        do {
          uVar14 = ((uint64_t *)((int64_t)param_4 + lVar37))[1];
          *(uint64_t *)((int64_t)puVar31 + lVar37) = *(uint64_t *)((int64_t)param_4 + lVar37);
          ((uint64_t *)((int64_t)puVar31 + lVar37))[1] = uVar14;
          puVar5 = (uint64_t *)((int64_t)param_4 + lVar37 + 0x10);
          uVar14 = puVar5[1];
          puVar6 = (uint64_t *)((int64_t)puVar31 + lVar37 + 0x10);
          *puVar6 = *puVar5;
          puVar6[1] = uVar14;
          lVar27 = lVar37 + 0x20;
          lVar37 = lVar37 + 0x20;
        } while ((uint64_t *)((int64_t)puVar31 + lVar27) < puVar61);
        param_4 = puVar2;
      }
    }
    if (param_4 < puVar20) {
      uVar60 = (int64_t)puVar46 + (1 - (int64_t)param_4);
      puVar31 = puVar61;
      if ((3 < uVar60) && (0x1f < (uint64_t)((int64_t)puVar61 - (int64_t)param_4))) {
        if (uVar60 < 0x20) {
          uVar62 = 0;
        }
        else {
          uVar62 = uVar60 & 0xffffffffffffffe0;
          lVar37 = 0;
          while( true ) {
            uVar14 = *(uint64_t *)((int64_t)param_4 + lVar37);
            uVar15 = ((uint64_t *)((int64_t)param_4 + lVar37))[1];
            puVar5 = (uint64_t *)((int64_t)param_4 + lVar37 + 0x10);
            uVar16 = puVar5[1];
            puVar6 = (uint64_t *)((int64_t)puVar61 + lVar37 + 0x10);
            *puVar6 = *puVar5;
            puVar6[1] = uVar16;
            *(uint64_t *)((int64_t)puVar61 + lVar37) = uVar14;
            ((uint64_t *)((int64_t)puVar61 + lVar37))[1] = uVar15;
            if (uVar62 - 0x20 == lVar37) break;
            lVar37 = lVar37 + 0x20;
          }
          if (uVar60 == uVar62) goto LAB_7fffa4e96a8d;
          if ((uVar60 & 0x1c) == 0) {
            puVar31 = (uint64_t *)((int64_t)puVar61 + uVar62);
            param_4 = (uint64_t *)((int64_t)param_4 + uVar62);
            goto LAB_7fffa4e96996;
          }
        }
        uVar42 = uVar60 & 0xfffffffffffffffc;
        puVar31 = (uint64_t *)((int64_t)puVar61 + uVar42);
        do {
          *(uint32_t *)((int64_t)puVar61 + uVar62) = *(uint32_t *)((int64_t)param_4 + uVar62);
          uVar62 = uVar62 + 4;
        } while (uVar42 != uVar62);
        if (uVar60 == uVar42) goto LAB_7fffa4e96a8d;
        param_4 = (uint64_t *)((int64_t)param_4 + uVar42);
      }
LAB_7fffa4e96996:
      uVar60 = (int64_t)puVar46 - (int64_t)param_4;
      uVar29 = (uint32_t)uVar60;
      if ((uint64_t)(uVar29 & 7) * 0x52ffd915e887a60b != 0x44feef995bb58a4d) {
        uVar62 = (uint64_t)(uVar29 + 1 & 7);
        do {
          uVar42 = *param_4;
          param_4 = (uint64_t *)((int64_t)param_4 + 1);
          *(char *)puVar31 = (char)uVar42;
          puVar31 = (uint64_t *)((int64_t)puVar31 + 1);
          uVar62 = uVar62 - 1;
        } while (uVar62 != 0);
        if (uVar60 < 7) goto LAB_7fffa4e96a8d;
      }
      lVar37 = 0;
      do {
        *(uint8_t *)((int64_t)puVar31 + lVar37) = *(uint8_t *)((int64_t)param_4 + lVar37);
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 1) =
             *(uint8_t *)((int64_t)param_4 + lVar37 + 1);
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 2) =
             *(uint8_t *)((int64_t)param_4 + lVar37 + 2);
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 3) =
             *(uint8_t *)((int64_t)param_4 + lVar37 + 3);
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 4) =
             *(uint8_t *)((int64_t)param_4 + lVar37 + 4);
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 5) =
             *(uint8_t *)((int64_t)param_4 + lVar37 + 5);
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 6) =
             *(uint8_t *)((int64_t)param_4 + lVar37 + 6);
        lVar27 = lVar37 + 7;
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 7) =
             *(uint8_t *)((int64_t)param_4 + lVar37 + 7);
        lVar37 = lVar37 + 8;
      } while ((uint64_t *)((int64_t)param_4 + lVar27) != puVar46);
    }
LAB_7fffa4e96a8d:
    param_2[3] = param_2[3] + uVar21;
    uVar60 = param_2[1];
    if (0xffff < uVar21) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar60 - *param_2 >> 3);
    }
  }
  else {
    uVar60 = param_4[1];
    *puVar31 = *param_4;
    puVar31[1] = uVar60;
    if (0x10 < uVar21) {
      uVar60 = param_2[3];
      uVar62 = param_4[3];
      *(uint64_t *)(uVar60 + 0x10) = param_4[2];
      *(uint64_t *)(uVar60 + 0x18) = uVar62;
      if (0x20 < (int64_t)uVar21) {
        lVar37 = 0;
        while( true ) {
          puVar6 = (uint64_t *)((int64_t)param_4 + lVar37 + 0x20);
          uVar14 = puVar6[1];
          puVar5 = (uint64_t *)(uVar60 + 0x20 + lVar37);
          *puVar5 = *puVar6;
          puVar5[1] = uVar14;
          puVar5 = (uint64_t *)((int64_t)param_4 + lVar37 + 0x30);
          uVar14 = puVar5[1];
          puVar6 = (uint64_t *)(uVar60 + 0x30 + lVar37);
          *puVar6 = *puVar5;
          puVar6[1] = uVar14;
          if (uVar60 + uVar21 <= uVar60 + 0x20 + lVar37 + 0x20) break;
          lVar37 = lVar37 + 0x20;
        }
      }
      goto LAB_7fffa4e96a8d;
    }
    uVar60 = param_2[1];
    param_2[3] = param_2[3] + uVar21;
  }
  lVar37 = uVar45 + 4;
  uVar45 = uVar45 + 1;
  *(short *)(uVar60 + 4) = (short)uVar21;
  *(uint32_t *)param_2[1] = 1;
  uVar21 = param_2[1];
  puVar46 = puVar20;
  uVar29 = uVar53;
  uVar53 = uVar54;
  goto joined_r0x7fffa4e96aeb;
LAB_7fffa4e96139:
  puVar31 = (uint64_t *)((int64_t)puVar46 + lVar37 + 0x10);
  if (puVar31 < puVar1) goto code_r0x7fffa4e9614b;
  puVar31 = (uint64_t *)((int64_t)puStack_80 + lVar37 + 0x10);
  puVar43 = (uint64_t *)((int64_t)puVar46 + lVar37 + 0x10);
LAB_7fffa4e96268:
  if ((puVar43 < puVar22) && ((int)*puVar31 == (int)*puVar43)) {
    puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
    puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
  }
  if ((puVar43 < puVar40) && ((short)*puVar31 == (short)*puVar43)) {
    puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
    puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
  }
  if (puVar43 < puVar3) {
    puVar43 = (uint64_t *)((int64_t)puVar43 + (uint64_t)((char)*puVar31 == (char)*puVar43));
  }
  uVar45 = (int64_t)puVar43 - (int64_t)puVar20;
  goto LAB_7fffa4e962d1;
code_r0x7fffa4e9614b:
  uVar45 = *puVar31;
  uVar21 = *(uint64_t *)((int64_t)puStack_80 + lVar37 + 0x10);
  lVar37 = lVar37 + 8;
  if (uVar21 != uVar45) goto code_r0x7fffa4e96164;
  goto LAB_7fffa4e96139;
code_r0x7fffa4e96164:
  uVar54 = 0;
  for (uVar45 = uVar45 ^ uVar21; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x8000000000000000) {
    uVar54 = uVar54 + 1;
  }
  uVar45 = (uint64_t)(uVar54 >> 3) + lVar37;
LAB_7fffa4e962d1:
  uVar29 = iVar35 - (int)puStack_80;
  lVar37 = uVar45 + 8;
  if ((puVar4 < puStack_80) && (param_4 < puVar46)) {
    for (lVar27 = 0;
        *(char *)((int64_t)puVar46 + lVar27 + -1) == *(char *)((int64_t)puStack_80 + lVar27 + -1);
        lVar27 = lVar27 + -1) {
      puVar20 = (uint64_t *)((int64_t)puVar46 + lVar27 + -1);
      if ((puVar20 <= param_4) || ((uint64_t *)((int64_t)puStack_80 + lVar27 + -1) <= puVar4)) {
        lVar37 = (uVar45 - lVar27) + 9;
        puVar46 = puVar20;
        goto LAB_7fffa4e964da;
      }
    }
    lVar37 = (uVar45 - lVar27) + 8;
    puVar46 = (uint64_t *)((int64_t)puVar46 + lVar27);
  }
LAB_7fffa4e964da:
  if (uVar62 < 4) {
    *(int *)(lVar11 + uVar60 * 4) = (int)puVar61 - iVar13;
  }
  uVar45 = (int64_t)puVar46 - (int64_t)param_4;
  puVar20 = (uint64_t *)param_2[3];
  if (puVar2 < puVar46) {
    puVar31 = puVar20;
    if (param_4 <= puVar2) {
      uVar21 = param_4[1];
      *puVar20 = *param_4;
      puVar20[1] = uVar21;
      puVar31 = (uint64_t *)((int64_t)puVar20 + ((int64_t)puVar2 - (int64_t)param_4));
      if (0x10 < (int64_t)puVar2 - (int64_t)param_4) {
        puVar20 = puVar20 + 6;
        while( true ) {
          uVar21 = param_4[3];
          puVar20[-4] = param_4[2];
          puVar20[-3] = uVar21;
          uVar21 = param_4[5];
          puVar20[-2] = param_4[4];
          puVar20[-1] = uVar21;
          if (puVar31 <= puVar20) break;
          puVar20 = puVar20 + 4;
          param_4 = param_4 + 4;
        }
      }
      param_4 = puVar2;
    }
    if (param_4 < puVar46) {
      uVar21 = (int64_t)puVar46 - (int64_t)param_4;
      if (uVar21 < 4 || (uint64_t)((int64_t)puVar31 - (int64_t)param_4) < 0x20) {
LAB_7fffa4e96583:
        puVar20 = puVar31;
      }
      else {
        if (uVar21 < 0x20) {
          uVar60 = 0;
        }
        else {
          uVar60 = uVar21 & 0xffffffffffffffe0;
          lVar27 = 0;
          while( true ) {
            uVar14 = *(uint64_t *)((int64_t)param_4 + lVar27);
            uVar15 = ((uint64_t *)((int64_t)param_4 + lVar27))[1];
            puVar5 = (uint64_t *)((int64_t)param_4 + lVar27 + 0x10);
            uVar16 = puVar5[1];
            puVar6 = (uint64_t *)((int64_t)puVar31 + lVar27 + 0x10);
            *puVar6 = *puVar5;
            puVar6[1] = uVar16;
            *(uint64_t *)((int64_t)puVar31 + lVar27) = uVar14;
            ((uint64_t *)((int64_t)puVar31 + lVar27))[1] = uVar15;
            if (uVar60 - 0x20 == lVar27) break;
            lVar27 = lVar27 + 0x20;
          }
          if (uVar21 == uVar60) goto LAB_7fffa4e967a9;
          if ((uVar21 & 0x1c) == 0) {
            param_4 = (uint64_t *)((int64_t)param_4 + uVar60);
            puVar31 = (uint64_t *)((int64_t)puVar31 + uVar60);
            goto LAB_7fffa4e96583;
          }
        }
        uVar62 = uVar21 & 0xfffffffffffffffc;
        puVar20 = (uint64_t *)((int64_t)puVar31 + uVar62);
        do {
          *(uint32_t *)((int64_t)puVar31 + uVar60) = *(uint32_t *)((int64_t)param_4 + uVar60);
          uVar60 = uVar60 + 4;
        } while (uVar62 != uVar60);
        if (uVar21 == uVar62) goto LAB_7fffa4e967a9;
        param_4 = (uint64_t *)((int64_t)param_4 + uVar62);
      }
      uVar54 = (int)puVar46 - (int)param_4 & 7;
      uVar21 = (uint64_t)uVar54;
      puVar31 = param_4;
      if (uVar54 != 0) {
        do {
          *(char *)puVar20 = (char)*puVar31;
          puVar31 = (uint64_t *)((int64_t)puVar31 + 1);
          puVar20 = (uint64_t *)((int64_t)puVar20 + 1);
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if ((uint64_t)((int64_t)param_4 - (int64_t)puVar46) < 0xfffffffffffffff9) {
        lVar27 = 0;
        while( true ) {
          *(uint8_t *)((int64_t)puVar20 + lVar27) = *(uint8_t *)((int64_t)puVar31 + lVar27);
          *(uint8_t *)((int64_t)puVar20 + lVar27 + 1) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 1);
          *(uint8_t *)((int64_t)puVar20 + lVar27 + 2) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 2);
          *(uint8_t *)((int64_t)puVar20 + lVar27 + 3) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 3);
          *(uint8_t *)((int64_t)puVar20 + lVar27 + 4) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 4);
          *(uint8_t *)((int64_t)puVar20 + lVar27 + 5) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 5);
          *(uint8_t *)((int64_t)puVar20 + lVar27 + 6) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 6);
          *(uint8_t *)((int64_t)puVar20 + lVar27 + 7) =
               *(uint8_t *)((int64_t)puVar31 + lVar27 + 7);
          if ((uint64_t *)((int64_t)puVar31 + lVar27 + 8) == puVar46) break;
          lVar27 = lVar27 + 8;
        }
      }
    }
LAB_7fffa4e967a9:
    param_2[3] = param_2[3] + uVar45;
    uVar21 = param_2[1];
    if (0xffff < uVar45) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar21 - *param_2 >> 3);
    }
  }
  else {
    uVar21 = param_4[1];
    *puVar20 = *param_4;
    puVar20[1] = uVar21;
    if (0x10 < uVar45) {
      uVar21 = param_2[3];
      uVar60 = param_4[3];
      *(uint64_t *)(uVar21 + 0x10) = param_4[2];
      *(uint64_t *)(uVar21 + 0x18) = uVar60;
      if (0x20 < (int64_t)uVar45) {
        uVar60 = uVar21 + 0x40;
        param_4 = param_4 + 6;
        while( true ) {
          uVar62 = param_4[-1];
          *(uint64_t *)(uVar60 - 0x20) = param_4[-2];
          *(uint64_t *)(uVar60 - 0x18) = uVar62;
          uVar62 = param_4[1];
          *(uint64_t *)(uVar60 - 0x10) = *param_4;
          *(uint64_t *)(uVar60 - 8) = uVar62;
          if (uVar21 + uVar45 <= uVar60) break;
          uVar60 = uVar60 + 0x20;
          param_4 = param_4 + 4;
        }
      }
      goto LAB_7fffa4e967a9;
    }
    param_2[3] = param_2[3] + uVar45;
    uVar21 = param_2[1];
  }
  *(short *)(uVar21 + 4) = (short)uVar45;
  uVar45 = lVar37 - 3;
  *(uint32_t *)param_2[1] = uVar29 + 3;
  uVar21 = param_2[1];
joined_r0x7fffa4e96aeb:
  if (0xffff < uVar45) {
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar21 - *param_2 >> 3);
  }
  puVar46 = (uint64_t *)((int64_t)puVar46 + lVar37);
  *(short *)(uVar21 + 6) = (short)uVar45;
  param_2[1] = param_2[1] + 8;
  if (puVar19 < puVar46) {
    uVar54 = uVar53;
    uVar53 = uVar29;
  }
  else {
    uVar54 = iVar26 + 2;
    *(uint32_t *)(lVar11 + ((uint64_t)(*(int64_t *)(lVar9 + (uint64_t)uVar54) * -0x30e44323485a9b9d)
                       >> (bVar23 & 0x3f)) * 4) = uVar54;
    *(int *)(lVar11 + ((uint64_t)(*(int64_t *)((int64_t)puVar46 + -2) * -0x30e44323485a9b9d) >>
                      (bVar23 & 0x3f)) * 4) = ((int)puVar46 + -2) - iVar13;
    *(uint32_t *)(lVar10 + (uint64_t)
                       ((uint32_t)(*(int *)(lVar9 + (uint64_t)uVar54) * -0x61c8864f) >> (bVar24 & 0x1f)
                       ) * 4) = uVar54;
    *(int *)(lVar10 + (uint64_t)
                      ((uint32_t)(*(int *)((int64_t)puVar46 + -1) * -0x61c8864f) >> (bVar24 & 0x1f)) *
                      4) = ((int)puVar46 + -1) - iVar13;
    uVar45 = (uint64_t)uVar29;
    uVar21 = (uint64_t)uVar53;
    do {
      uVar60 = uVar45;
      uVar29 = (uint32_t)uVar21;
      uVar53 = (uint32_t)uVar60;
      if (((int)*puVar46 != *(int *)((int64_t)puVar46 - uVar21)) || (uVar29 == 0)) {
        uVar54 = uVar29;
        break;
      }
      lVar37 = -uVar21;
      puVar20 = (uint64_t *)((int64_t)puVar46 + 4);
      puVar61 = (uint64_t *)((int64_t)puVar46 + lVar37 + 4);
      puVar31 = puVar20;
      if (puVar20 < puVar1) {
        if (*puVar61 == *puVar20) {
          lVar27 = 0xc;
LAB_7fffa4e96c70:
          puVar31 = (uint64_t *)(lVar27 + (int64_t)puVar46);
          if (puVar31 < puVar1) {
            uVar45 = *(uint64_t *)((int64_t)puVar46 + lVar27 + lVar37);
            if (uVar45 == *puVar31) goto code_r0x7fffa4e96c89;
            uVar54 = 0;
            for (uVar45 = *puVar31 ^ uVar45; (uVar45 & 1) == 0;
                uVar45 = uVar45 >> 1 | 0x8000000000000000) {
              uVar54 = uVar54 + 1;
            }
            uVar45 = ((uint64_t)(uVar54 >> 3) + lVar27) - 4;
            goto LAB_7fffa4e96cec;
          }
          puVar61 = (uint64_t *)(lVar37 + (int64_t)puVar31);
          goto joined_r0x7fffa4e96c5b;
        }
        uVar54 = 0;
        for (uVar45 = *puVar20 ^ *puVar61; (uVar45 & 1) == 0;
            uVar45 = uVar45 >> 1 | 0x8000000000000000) {
          uVar54 = uVar54 + 1;
        }
        uVar45 = (uint64_t)(uVar54 >> 3);
      }
      else {
joined_r0x7fffa4e96c5b:
        if ((puVar31 < puVar22) && ((int)*puVar61 == (int)*puVar31)) {
          puVar61 = (uint64_t *)((int64_t)puVar61 + 4);
          puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
        }
        if ((puVar31 < puVar40) && ((short)*puVar61 == (short)*puVar31)) {
          puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
          puVar61 = (uint64_t *)((int64_t)puVar61 + 2);
        }
        if (puVar31 < puVar3) {
          puVar31 = (uint64_t *)((int64_t)puVar31 + (uint64_t)((char)*puVar61 == (char)*puVar31))
          ;
        }
        uVar45 = (int64_t)puVar31 - (int64_t)puVar20;
      }
LAB_7fffa4e96cec:
      iVar26 = (int)puVar46 - iVar13;
      *(int *)(lVar10 + (uint64_t)((uint32_t)((int)*puVar46 * -0x61c8864f) >> (bVar24 & 0x1f)) * 4) =
           iVar26;
      *(int *)(lVar11 + (*puVar46 * -0x30e44323485a9b9d >> (bVar23 & 0x3f)) * 4) = iVar26;
      if (puVar46 <= puVar2) {
        uVar62 = puVar46[1];
        puVar20 = (uint64_t *)param_2[3];
        *puVar20 = *puVar46;
        puVar20[1] = uVar62;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar45 + 1) {
        *(int *)((int64_t)param_2 + 0x4c) = (int)(param_2[1] - *param_2 >> 3);
        *(uint32_t *)(param_2 + 9) = 2;
      }
      *(short *)(param_2[1] + 6) = (short)(uVar45 + 1);
      param_2[1] = param_2[1] + 8;
      puVar46 = (uint64_t *)((int64_t)puVar46 + uVar45 + 4);
      uVar45 = uVar21;
      uVar21 = uVar60;
      uVar54 = uVar53;
      uVar53 = uVar29;
    } while (puVar46 <= puVar19);
  }
  puVar20 = (uint64_t *)((int64_t)puVar46 + 1);
  param_4 = puVar46;
  if (puVar19 < puVar20) goto LAB_7fffa4e980a8;
  goto LAB_7fffa4e95aff;
code_r0x7fffa4e96c89:
  lVar27 = lVar27 + 8;
  goto LAB_7fffa4e96c70;
LAB_7fffa4e984d2:
  puVar61 = (uint64_t *)((int64_t)puVar46 + lVar27);
  if (puVar61 < puVar22) {
    uVar45 = *(uint64_t *)((int64_t)puVar46 + lVar27 + lVar37);
    if (uVar45 == *puVar61) goto code_r0x7fffa4e984f0;
    uVar29 = 0;
    for (uVar45 = *puVar61 ^ uVar45; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x8000000000000000) {
      uVar29 = uVar29 + 1;
    }
    uVar45 = ((uint64_t)(uVar29 >> 3) + lVar27) - 5;
  }
  else {
    puVar31 = (uint64_t *)(lVar37 + (int64_t)puVar61);
LAB_7fffa4e9854a:
    if ((puVar61 < puVar1) && ((int)*puVar31 == (int)*puVar61)) {
      puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
      puVar61 = (uint64_t *)((int64_t)puVar61 + 4);
    }
    if ((puVar61 < puVar2) && ((short)*puVar31 == (short)*puVar61)) {
      puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
      puVar61 = (uint64_t *)((int64_t)puVar61 + 2);
    }
    if (puVar61 < puVar3) {
      puVar61 = (uint64_t *)((int64_t)puVar61 + (uint64_t)((char)*puVar31 == (char)*puVar61));
    }
    uVar45 = (int64_t)puVar61 - (int64_t)puVar20;
  }
  goto LAB_7fffa4e98629;
code_r0x7fffa4e984f0:
  lVar27 = lVar27 + 8;
  goto LAB_7fffa4e984d2;
LAB_7fffa4e98629:
  puVar20 = (uint64_t *)((int64_t)puVar46 + 1);
  puVar31 = (uint64_t *)param_2[3];
  uVar21 = (int64_t)puVar20 - (int64_t)puStack_a0;
  if (puVar40 < puVar20) {
    puVar61 = puVar31;
    if (puStack_a0 <= puVar40) {
      uVar60 = puStack_a0[1];
      *puVar31 = *puStack_a0;
      puVar31[1] = uVar60;
      puVar61 = (uint64_t *)((int64_t)puVar31 + ((int64_t)puVar40 - (int64_t)puStack_a0));
      if (0x10 < (int64_t)puVar40 - (int64_t)puStack_a0) {
        puVar31 = puVar31 + 6;
        while( true ) {
          uVar60 = puStack_a0[3];
          puVar31[-4] = puStack_a0[2];
          puVar31[-3] = uVar60;
          uVar60 = puStack_a0[5];
          puVar31[-2] = puStack_a0[4];
          puVar31[-1] = uVar60;
          if (puVar61 <= puVar31) break;
          puVar31 = puVar31 + 4;
          puStack_a0 = puStack_a0 + 4;
        }
      }
      puStack_a0 = puVar40;
    }
    if (puStack_a0 < puVar20) {
      uVar60 = (int64_t)puVar46 + (1 - (int64_t)puStack_a0);
      puVar31 = puVar61;
      if (!((uint64_t)((int64_t)puVar61 - (int64_t)puStack_a0) < 0x20 || uVar60 < 4)) {
        if (uVar60 < 0x20) {
          uVar42 = 0;
        }
        else {
          uVar42 = uVar60 & 0xffffffffffffffe0;
          uVar62 = 0;
          do {
            uVar14 = *(uint64_t *)((int64_t)puStack_a0 + uVar62);
            uVar15 = ((uint64_t *)((int64_t)puStack_a0 + uVar62))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_a0 + uVar62 + 0x10);
            uVar16 = puVar5[1];
            puVar6 = (uint64_t *)((int64_t)puVar61 + uVar62 + 0x10);
            *puVar6 = *puVar5;
            puVar6[1] = uVar16;
            *(uint64_t *)((int64_t)puVar61 + uVar62) = uVar14;
            ((uint64_t *)((int64_t)puVar61 + uVar62))[1] = uVar15;
            uVar62 = uVar62 + 0x20;
          } while (uVar42 != uVar62);
          if (uVar60 == uVar42) goto LAB_7fffa4e9896a;
          if ((uVar60 & 0x1c) == 0) {
            puVar31 = (uint64_t *)((int64_t)puVar61 + uVar42);
            puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + uVar42);
            goto LAB_7fffa4e988cc;
          }
        }
        uVar62 = uVar60 & 0xfffffffffffffffc;
        puVar31 = (uint64_t *)((int64_t)puVar61 + uVar62);
        do {
          *(uint32_t *)((int64_t)puVar61 + uVar42) =
               *(uint32_t *)((int64_t)puStack_a0 + uVar42);
          uVar42 = uVar42 + 4;
        } while (uVar42 != uVar62);
        if (uVar60 == uVar62) goto LAB_7fffa4e9896a;
        puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + uVar62);
      }
LAB_7fffa4e988cc:
      uVar60 = (int64_t)puVar46 - (int64_t)puStack_a0;
      uVar29 = (uint32_t)uVar60;
      if ((uVar29 & 7) != 7) {
        uVar62 = (uint64_t)(uVar29 + 1 & 7);
        puVar43 = puVar31;
        puVar61 = puStack_a0;
        do {
          uVar62 = uVar62 - 1;
          puStack_a0 = (uint64_t *)((int64_t)puVar61 + 1);
          puVar31 = (uint64_t *)((int64_t)puVar43 + 1);
          *(char *)puVar43 = (char)*puVar61;
          puVar43 = puVar31;
          puVar61 = puStack_a0;
        } while (uVar62 != 0);
        if (uVar60 < 7) goto LAB_7fffa4e9896a;
      }
      lVar37 = 0;
      while( true ) {
        *(uint8_t *)((int64_t)puVar31 + lVar37) = *(uint8_t *)((int64_t)puStack_a0 + lVar37)
        ;
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 1) =
             *(uint8_t *)((int64_t)puStack_a0 + lVar37 + 1);
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 2) =
             *(uint8_t *)((int64_t)puStack_a0 + lVar37 + 2);
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 3) =
             *(uint8_t *)((int64_t)puStack_a0 + lVar37 + 3);
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 4) =
             *(uint8_t *)((int64_t)puStack_a0 + lVar37 + 4);
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 5) =
             *(uint8_t *)((int64_t)puStack_a0 + lVar37 + 5);
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 6) =
             *(uint8_t *)((int64_t)puStack_a0 + lVar37 + 6);
        *(uint8_t *)((int64_t)puVar31 + lVar37 + 7) =
             *(uint8_t *)((int64_t)puStack_a0 + lVar37 + 7);
        if ((uint64_t *)((int64_t)puStack_a0 + lVar37 + 7) == puVar46) break;
        lVar37 = lVar37 + 8;
      }
    }
LAB_7fffa4e9896a:
    uVar62 = param_2[1];
    param_2[3] = param_2[3] + uVar21;
    if (0xffff < uVar21) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar62 - *param_2 >> 3);
    }
  }
  else {
    uVar60 = puStack_a0[1];
    *puVar31 = *puStack_a0;
    puVar31[1] = uVar60;
    uVar60 = param_2[3];
    if (0x10 < uVar21) {
      uVar62 = puStack_a0[3];
      *(uint64_t *)(uVar60 + 0x10) = puStack_a0[2];
      *(uint64_t *)(uVar60 + 0x18) = uVar62;
      if (0x20 < (int64_t)uVar21) {
        uVar62 = uVar60 + 0x40;
        puStack_a0 = puStack_a0 + 6;
        while( true ) {
          uVar42 = puStack_a0[-1];
          *(uint64_t *)(uVar62 - 0x20) = puStack_a0[-2];
          *(uint64_t *)(uVar62 - 0x18) = uVar42;
          uVar42 = puStack_a0[1];
          *(uint64_t *)(uVar62 - 0x10) = *puStack_a0;
          *(uint64_t *)(uVar62 - 8) = uVar42;
          if (uVar60 + uVar21 <= uVar62) break;
          uVar62 = uVar62 + 0x20;
          puStack_a0 = puStack_a0 + 4;
        }
      }
      goto LAB_7fffa4e9896a;
    }
    uVar62 = param_2[1];
    param_2[3] = uVar60 + uVar21;
  }
  lVar37 = uVar45 + 4;
  uVar45 = uVar45 + 1;
  *(short *)(uVar62 + 4) = (short)uVar21;
  *(uint32_t *)param_2[1] = 1;
  uVar21 = param_2[1];
  goto LAB_7fffa4e99189;
LAB_7fffa4e98431:
  puVar38 = (uint64_t *)((int64_t)puVar46 + lVar37);
  if (puVar22 <= puVar38) goto LAB_7fffa4e98a3f;
  if (*(uint64_t *)((int64_t)puVar61 + lVar37) != *puVar38) {
    uVar54 = 0;
    for (uVar45 = *(uint64_t *)((int64_t)puVar61 + lVar37) ^ *puVar38; (uVar45 & 1) == 0;
        uVar45 = uVar45 >> 1 | 0x8000000000000000) {
      uVar54 = uVar54 + 1;
    }
    uVar45 = ((uint64_t)(uVar54 >> 3) + lVar37) - 8;
    goto LAB_7fffa4e98add;
  }
  lVar37 = lVar37 + 8;
  goto LAB_7fffa4e98431;
LAB_7fffa4e98a3f:
  puVar20 = (uint64_t *)(lVar37 + (int64_t)puVar61);
LAB_7fffa4e98a42:
  if ((puVar38 < puVar1) && ((int)*puVar20 == (int)*puVar38)) {
    puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
    puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
  }
  if ((puVar38 < puVar2) && ((short)*puVar20 == (short)*puVar38)) {
    puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
    puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
  }
  if (puVar38 < puVar3) {
    puVar38 = (uint64_t *)((int64_t)puVar38 + (uint64_t)((char)*puVar20 == (char)*puVar38));
  }
  uVar45 = (int64_t)puVar38 - (int64_t)puVar31;
LAB_7fffa4e98add:
  uVar29 = iVar35 - (int)puVar61;
  lVar37 = uVar45 + 8;
  if ((puStack_a0 < puVar46) && (puVar4 < puVar61)) {
    for (lVar27 = 0;
        *(char *)((int64_t)puVar46 + lVar27 + -1) == *(char *)((int64_t)puVar61 + lVar27 + -1);
        lVar27 = lVar27 + -1) {
      puVar20 = (uint64_t *)((int64_t)puVar46 + lVar27 + -1);
      if ((puVar20 <= puStack_a0) || ((uint64_t *)((int64_t)puVar61 + lVar27 + -1) <= puVar4)) {
        lVar37 = (uVar45 - lVar27) + 9;
        puVar46 = puVar20;
        goto LAB_7fffa4e98ec3;
      }
    }
    lVar37 = (uVar45 - lVar27) + 8;
    puVar46 = (uint64_t *)((int64_t)puVar46 + lVar27);
  }
LAB_7fffa4e98ec3:
  if (uVar62 < 4) {
    *(int *)(lVar11 + uVar60 * 4) = (int)puVar43 - iVar13;
  }
  puVar20 = (uint64_t *)param_2[3];
  uVar21 = (int64_t)puVar46 - (int64_t)puStack_a0;
  if (puVar40 < puVar46) {
    puVar31 = puVar20;
    if (puStack_a0 <= puVar40) {
      uVar45 = puStack_a0[1];
      *puVar20 = *puStack_a0;
      puVar20[1] = uVar45;
      puVar31 = (uint64_t *)((int64_t)puVar20 + ((int64_t)puVar40 - (int64_t)puStack_a0));
      if (0x10 < (int64_t)puVar40 - (int64_t)puStack_a0) {
        puVar20 = puVar20 + 6;
        while( true ) {
          uVar45 = puStack_a0[3];
          puVar20[-4] = puStack_a0[2];
          puVar20[-3] = uVar45;
          uVar45 = puStack_a0[5];
          puVar20[-2] = puStack_a0[4];
          puVar20[-1] = uVar45;
          if (puVar31 <= puVar20) break;
          puVar20 = puVar20 + 4;
          puStack_a0 = puStack_a0 + 4;
        }
      }
      puStack_a0 = puVar40;
    }
    if (puStack_a0 < puVar46) {
      uVar45 = (int64_t)puVar46 - (int64_t)puStack_a0;
      if ((uint64_t)((int64_t)puVar31 - (int64_t)puStack_a0) < 0x20 || uVar45 < 4) {
LAB_7fffa4e98fd4:
        puVar20 = puVar31;
      }
      else {
        if (uVar45 < 0x20) {
          uVar60 = 0;
        }
        else {
          uVar60 = uVar45 & 0xffffffffffffffe0;
          lVar27 = 0;
          while( true ) {
            uVar14 = ((uint64_t *)((int64_t)puStack_a0 + lVar27))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_a0 + lVar27 + 0x10);
            uVar15 = *puVar5;
            uVar16 = puVar5[1];
            *(uint64_t *)((int64_t)puVar31 + lVar27) =
                 *(uint64_t *)((int64_t)puStack_a0 + lVar27);
            ((uint64_t *)((int64_t)puVar31 + lVar27))[1] = uVar14;
            puVar5 = (uint64_t *)((int64_t)puVar31 + lVar27 + 0x10);
            *puVar5 = uVar15;
            puVar5[1] = uVar16;
            if (uVar60 - 0x20 == lVar27) break;
            lVar27 = lVar27 + 0x20;
          }
          if (uVar45 == uVar60) goto LAB_7fffa4e99131;
          if ((uVar45 & 0x1c) == 0) {
            puVar31 = (uint64_t *)((int64_t)puVar31 + uVar60);
            puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + uVar60);
            goto LAB_7fffa4e98fd4;
          }
        }
        uVar62 = uVar45 & 0xfffffffffffffffc;
        puVar20 = (uint64_t *)((int64_t)puVar31 + uVar62);
        do {
          *(uint32_t *)((int64_t)puVar31 + uVar60) =
               *(uint32_t *)((int64_t)puStack_a0 + uVar60);
          uVar60 = uVar60 + 4;
        } while (uVar62 != uVar60);
        if (uVar45 == uVar62) goto LAB_7fffa4e99131;
        puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + uVar62);
      }
      uVar54 = (int)puVar46 - (int)puStack_a0 & 7;
      uVar45 = (uint64_t)uVar54;
      puVar61 = puVar20;
      puVar31 = puStack_a0;
      if (uVar54 == 0) {
        puVar43 = puStack_a0;
      }
      else {
        do {
          uVar45 = uVar45 - 1;
          puVar20 = (uint64_t *)((int64_t)puVar61 + 1);
          *(char *)puVar61 = (char)*puVar31;
          puVar43 = (uint64_t *)((int64_t)puVar31 + 1);
          puVar61 = puVar20;
          puVar31 = (uint64_t *)((int64_t)puVar31 + 1);
        } while (uVar45 != 0);
      }
      if ((uint64_t)((int64_t)puStack_a0 - (int64_t)puVar46) < 0xfffffffffffffff9) {
        while( true ) {
          *(char *)puVar20 = (char)*puVar43;
          *(uint8_t *)((int64_t)puVar20 + 1) = *(uint8_t *)((int64_t)puVar43 + 1);
          *(uint8_t *)((int64_t)puVar20 + 2) = *(uint8_t *)((int64_t)puVar43 + 2);
          *(uint8_t *)((int64_t)puVar20 + 3) = *(uint8_t *)((int64_t)puVar43 + 3);
          *(uint8_t *)((int64_t)puVar20 + 4) = *(uint8_t *)((int64_t)puVar43 + 4);
          *(uint8_t *)((int64_t)puVar20 + 5) = *(uint8_t *)((int64_t)puVar43 + 5);
          *(uint8_t *)((int64_t)puVar20 + 6) = *(uint8_t *)((int64_t)puVar43 + 6);
          *(uint8_t *)((int64_t)puVar20 + 7) = *(uint8_t *)((int64_t)puVar43 + 7);
          if (puVar43 + 1 == puVar46) break;
          puVar20 = puVar20 + 1;
          puVar43 = puVar43 + 1;
        }
      }
    }
LAB_7fffa4e99131:
    param_2[3] = param_2[3] + uVar21;
    uVar60 = param_2[1];
    if (0xffff < uVar21) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar60 - *param_2 >> 3);
    }
  }
  else {
    uVar45 = puStack_a0[1];
    *puVar20 = *puStack_a0;
    puVar20[1] = uVar45;
    if (0x10 < uVar21) {
      uVar45 = param_2[3];
      uVar60 = puStack_a0[3];
      *(uint64_t *)(uVar45 + 0x10) = puStack_a0[2];
      *(uint64_t *)(uVar45 + 0x18) = uVar60;
      if (0x20 < (int64_t)uVar21) {
        lVar27 = 0;
        do {
          puVar6 = (uint64_t *)((int64_t)puStack_a0 + lVar27 + 0x20);
          uVar14 = puVar6[1];
          puVar5 = (uint64_t *)(uVar45 + 0x20 + lVar27);
          *puVar5 = *puVar6;
          puVar5[1] = uVar14;
          puVar5 = (uint64_t *)((int64_t)puStack_a0 + lVar27 + 0x30);
          uVar14 = puVar5[1];
          puVar6 = (uint64_t *)(uVar45 + 0x30 + lVar27);
          *puVar6 = *puVar5;
          puVar6[1] = uVar14;
          lVar32 = uVar45 + 0x20 + lVar27;
          lVar27 = lVar27 + 0x20;
        } while (lVar32 + 0x20U < uVar45 + uVar21);
      }
      goto LAB_7fffa4e99131;
    }
    param_2[3] = param_2[3] + uVar21;
    uVar60 = param_2[1];
  }
  uVar45 = lVar37 - 3;
  *(short *)(uVar60 + 4) = (short)uVar21;
  *(uint32_t *)param_2[1] = uVar29 + 3;
  uVar21 = param_2[1];
  puVar20 = puVar46;
  uVar54 = uVar53;
  uVar53 = uVar29;
LAB_7fffa4e99189:
  if (0xffff < uVar45) {
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar21 - *param_2 >> 3);
  }
  puVar46 = (uint64_t *)((int64_t)puVar20 + lVar37);
  *(short *)(uVar21 + 6) = (short)uVar45;
  param_2[1] = param_2[1] + 8;
  if (puVar19 < puVar46) {
  }
  else {
    uVar29 = iVar26 + 2;
    *(uint32_t *)(lVar11 + ((uint64_t)(*(int64_t *)(lVar9 + (uint64_t)uVar29) * -0x30e44323485a9b9d)
                       >> (bVar23 & 0x3f)) * 4) = uVar29;
    *(int *)(lVar11 + ((uint64_t)(*(int64_t *)((int64_t)puVar46 + -2) * -0x30e44323485a9b9d) >>
                      (bVar23 & 0x3f)) * 4) = ((int)puVar46 + -2) - iVar13;
    *(uint32_t *)(lVar10 + ((uint64_t)(*(int64_t *)(lVar9 + (uint64_t)uVar29) * -0x30e44323405a9d00)
                       >> (bVar24 & 0x3f)) * 4) = uVar29;
    *(int *)(lVar10 + ((uint64_t)(*(int64_t *)((int64_t)puVar46 + -1) * -0x30e44323405a9d00) >>
                      (bVar24 & 0x3f)) * 4) = ((int)puVar46 + -1) - iVar13;
    do {
      uVar29 = uVar54;
      if (((int)*puVar46 != *(int *)((int64_t)puVar46 - (uint64_t)uVar29)) || (uVar29 == 0)) {
        uVar54 = uVar29;
        break;
      }
      lVar37 = -(uint64_t)uVar29;
      puVar20 = (uint64_t *)((int64_t)puVar46 + 4);
      puVar31 = (uint64_t *)((int64_t)puVar46 + lVar37 + 4);
      puVar61 = puVar20;
      if (puVar20 < puVar22) {
        if (*puVar31 == *puVar20) {
          lVar27 = 0;
          do {
            puVar31 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
            if (puVar22 <= puVar31) {
              puVar31 = (uint64_t *)((int64_t)puVar46 + lVar37 + 0xc + lVar27);
              puVar61 = (uint64_t *)((int64_t)puVar46 + lVar27 + 0xc);
              goto joined_r0x7fffa4e99376;
            }
            uVar45 = *puVar31;
            uVar21 = *(uint64_t *)((int64_t)puVar46 + lVar27 + lVar37 + 0xc);
            lVar27 = lVar27 + 8;
          } while (uVar21 == uVar45);
          uVar54 = 0;
          for (uVar21 = uVar21 ^ uVar45; (uVar21 & 1) == 0;
              uVar21 = uVar21 >> 1 | 0x8000000000000000) {
            uVar54 = uVar54 + 1;
          }
          uVar45 = (uint64_t)(uVar54 >> 3) + lVar27;
        }
        else {
          uVar54 = 0;
          for (uVar45 = *puVar31 ^ *puVar20; (uVar45 & 1) == 0;
              uVar45 = uVar45 >> 1 | 0x8000000000000000) {
            uVar54 = uVar54 + 1;
          }
          uVar45 = (uint64_t)(uVar54 >> 3);
        }
      }
      else {
joined_r0x7fffa4e99376:
        if ((puVar61 < puVar1) && ((int)*puVar31 == (int)*puVar61)) {
          puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
          puVar61 = (uint64_t *)((int64_t)puVar61 + 4);
        }
        if ((puVar61 < puVar2) && ((short)*puVar31 == (short)*puVar61)) {
          puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
          puVar61 = (uint64_t *)((int64_t)puVar61 + 2);
        }
        if (puVar61 < puVar3) {
          puVar61 = (uint64_t *)((int64_t)puVar61 + (uint64_t)((char)*puVar31 == (char)*puVar61))
          ;
        }
        uVar45 = (int64_t)puVar61 - (int64_t)puVar20;
      }
      iVar26 = (int)puVar46 - iVar13;
      *(int *)(lVar10 + (*puVar46 * -0x30e44323405a9d00 >> (bVar24 & 0x3f)) * 4) = iVar26;
      *(int *)(lVar11 + (*puVar46 * -0x30e44323485a9b9d >> (bVar23 & 0x3f)) * 4) = iVar26;
      if (puVar46 <= puVar40) {
        uVar21 = puVar46[1];
        puVar20 = (uint64_t *)param_2[3];
        *puVar20 = *puVar46;
        puVar20[1] = uVar21;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar45 + 1) {
        *(uint32_t *)(param_2 + 9) = 2;
        *(int *)((int64_t)param_2 + 0x4c) = (int)(param_2[1] - *param_2 >> 3);
      }
      *(short *)(param_2[1] + 6) = (short)(uVar45 + 1);
      param_2[1] = param_2[1] + 8;
      puVar46 = (uint64_t *)((int64_t)puVar46 + uVar45 + 4);
      uVar54 = uVar53;
      uVar53 = uVar29;
    } while (puVar46 <= puVar19);
  }
  puVar20 = (uint64_t *)((int64_t)puVar46 + 1);
  puStack_a0 = puVar46;
  if (puVar19 < puVar20) goto LAB_7fffa4e980a8;
  goto LAB_7fffa4e981bd;
LAB_7fffa4e98082:
  puVar46 = puStack_a0;
  goto LAB_7fffa4e980a8;
}


// ============================================================================
// Function : FUN_7fffa4e99600  |  RVA: 0x729600  |  Size: 640 bytes
// Callers  : none
// Callees  : FUN_7fffa565caf0@0xeecaf0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4e99600(void) {
    /* +0x729600 */ __asm { PUSH RBP }
    /* +0x729601 */ __asm { PUSH R12 }
    /* +0x729603 */ __asm { PUSH R13 }
    /* +0x729605 */ __asm { PUSH RDI }
    /* +0x729606 */ __asm { PUSH RBX }
    /* +0x729607 */ __asm { PUSH R14 }
    /* +0x729609 */ __asm { PUSH R15 }
    /* +0x72960b */ __asm { PUSH RSI }
    /* +0x72960c */ __asm { MOV EAX,0x14c8 }
    /* +0x729611 */ __asm { CALL 0x7fffa565caf0 }
    /* +0x729616 */ __asm { SUB RSP,RAX }
    /* +0x729619 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x729621 */ __asm { MOVDQA xmmword ptr [RBP + 0x1430],XMM9 }
    /* +0x72962a */ __asm { MOVDQA xmmword ptr [RBP + 0x1420],XMM15 }
    /* +0x729633 */ __asm { MOVDQA xmmword ptr [RBP + 0x1410],XMM14 }
    /* +0x72963c */ __asm { MOVDQA xmmword ptr [RBP + 0x1400],XMM13 }
    /* +0x729645 */ __asm { MOVDQA xmmword ptr [RBP + 0x13f0],XMM11 }
    /* +0x72964e */ __asm { MOVDQA xmmword ptr [RBP + 0x13e0],XMM7 }
    /* +0x729656 */ __asm { MOVDQA xmmword ptr [RBP + 0x13d0],XMM8 }
    /* +0x72965f */ __asm { MOVDQA xmmword ptr [RBP + 0x13c0],XMM12 }
    /* +0x729668 */ __asm { MOVDQA xmmword ptr [RBP + 0x13b0],XMM10 }
    /* +0x729671 */ __asm { MOVDQA xmmword ptr [RBP + 0x13a0],XMM6 }
    /* +0x729679 */ __asm { MOV qword ptr [RBP + 0x1398],-0x2 }
    /* +0x729684 */ __asm { MOV RDI,R11 }
    /* +0x729687 */ __asm { MOV R11W,0xeab9 }
    /* +0x72968c */ __asm { MOV EAX,EDI }
    /* +0x72968e */ __asm { OR EAX,0x1 }
    /* +0x729691 */ __asm { MOV dword ptr [RBP + 0xe9c],EAX }
    /* +0x729697 */ __asm { IMUL R11D,EAX }
    /* +0x72969b */ __asm { ROL R11W,0x9 }
    /* +0x7296a0 */ __asm { NOT R11D }
    /* +0x7296a3 */ __asm { MOVZX R11D,R11W }
    /* +0x7296a7 */ __asm { MOV RDX,qword ptr GS:[R11] }
    /* +0x7296ab */ __asm { MOV RAX,qword ptr [RBP + 0x1488] }
    /* +0x7296b2 */ __asm { MOVQ XMM2,qword ptr [RAX + -0xf30] }
    /* +0x7296ba */ __asm { MOVQ XMM4,qword ptr [RDX + 0x18] }
    /* +0x7296bf */ __asm { MOVDQA XMM5,XMM4 }
    /* +0x7296c3 */ __asm { PSRLQ XMM5,0x20 }
    /* +0x7296c8 */ __asm { PMULUDQ XMM5,XMM2 }
    /* +0x7296cc */ __asm { MOVDQA XMM3,XMM2 }
    /* +0x7296d0 */ __asm { PSRLQ XMM3,0x20 }
    /* +0x7296d5 */ __asm { PMULUDQ XMM3,XMM4 }
    /* +0x7296d9 */ __asm { PADDQ XMM3,XMM5 }
    /* +0x7296dd */ __asm { PSLLQ XMM3,0x20 }
    /* +0x7296e2 */ __asm { PMULUDQ XMM4,XMM2 }
    /* +0x7296e6 */ __asm { PADDQ XMM4,XMM3 }
    /* +0x7296ea */ __asm { MOVQ RDX,XMM4 }
    /* +0x7296ef */ __asm { MOV R11,0x365d36bfba5ce915 }
    /* +0x7296f9 */ __asm { CMP RDX,R11 }
    /* +0x7296fc */ __asm { JZ 0x7fffa4ec9c08 }
    /* +0x729702 */ __asm { MOV R11W,0xa3f2 }
    /* +0x729707 */ __asm { IMUL R11D,R11D,-0x1651 }
    /* +0x72970e */ __asm { XOR R11D,EDI }
    /* +0x729711 */ __asm { ROL R11W,0x2 }
    /* +0x729716 */ __asm { MOVZX R11D,R11W }
    /* +0x72971a */ __asm { MOV RDX,qword ptr GS:[R11] }
    /* +0x72971e */ __asm { MOV R11,-0x4cb74134836e55dd }
    /* +0x729728 */ __asm { CMP RDX,R11 }
    /* +0x72972b */ __asm { NOP }
    /* +0x72972c */ __asm { NOP }
    /* +0x72972d */ __asm { NOP }
    /* +0x72972e */ __asm { NOP }
    /* +0x72972f */ __asm { NOP }
    /* +0x729730 */ __asm { NOP }
    /* +0x729731 */ __asm { NOP }
    /* +0x729732 */ __asm { NOP }
    /* +0x729733 */ __asm { NOP }
    /* +0x729734 */ __asm { NOP }
    /* +0x729735 */ __asm { NOP }
    /* +0x729736 */ __asm { NOP }
    /* +0x729737 */ __asm { NOP }
    /* +0x729738 */ __asm { NOP }
    /* +0x729739 */ __asm { NOP }
    /* +0x72973a */ __asm { NOP }
    /* +0x72973b */ __asm { NOP }
    /* +0x759b8c */ __asm { MOV EDX,0xc769c731 }
    /* +0x759b91 */ __asm { JNC 0x7fffa4ec9bd6 }
    /* +0x759b93 */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0x759b95 */ __asm { XOR EAX,0x5553 }
    /* +0x759b9a */ __asm { MOVZX EAX,AX }
    /* +0x759b9d */ __asm { CMP R11D,EAX }
    /* +0x759ba0 */ __asm { JNZ 0x7fffa4ec9cc7 }
    /* +0x759ba6 */ __asm { MOVAPS XMM6,xmmword ptr [RBP + 0x13a0] }
    /* +0x759bad */ __asm { MOVAPS XMM10,xmmword ptr [RBP + 0x13b0] }
    /* +0x759bb5 */ __asm { MOVAPS XMM12,xmmword ptr [RBP + 0x13c0] }
    /* +0x759bbd */ __asm { MOVAPS XMM8,xmmword ptr [RBP + 0x13d0] }
    /* +0x759bc5 */ __asm { MOVAPS XMM7,xmmword ptr [RBP + 0x13e0] }
    /* +0x759bcc */ __asm { MOVAPS XMM11,xmmword ptr [RBP + 0x13f0] }
    /* +0x759bd4 */ __asm { MOVAPS XMM13,xmmword ptr [RBP + 0x1400] }
    /* +0x759bdc */ __asm { MOVAPS XMM14,xmmword ptr [RBP + 0x1410] }
    /* +0x759be4 */ __asm { MOVAPS XMM15,xmmword ptr [RBP + 0x1420] }
    /* +0x759bec */ __asm { MOVAPS XMM9,xmmword ptr [RBP + 0x1430] }
    /* +0x759bf4 */ __asm { ADD RSP,0x14c8 }
    /* +0x759bfb */ __asm { POP RSI }
    /* +0x759bfc */ __asm { POP R15 }
    /* +0x759bfe */ __asm { POP R14 }
    /* +0x759c00 */ __asm { POP RBX }
    /* +0x759c01 */ __asm { POP RDI }
    /* +0x759c02 */ __asm { POP R13 }
    /* +0x759c04 */ __asm { POP R12 }
    /* +0x759c06 */ __asm { POP RBP }
    /* +0x759c07 */ __asm { RET }
    /* +0x759c08 */ __asm { JNC 0x7fffa4ec9b8c }
    /* +0x759c0a */ __asm { TEST EAX,0x1e2255fb }
    /* +0x759c0f */ __asm { SHR CL,0x1 }
    /* +0x759c11 */ __asm { IN EAX,DX }
    /* +0x759c12 */ __asm { CLI }
    /* +0x759c13 */ __asm { CLD }
    /* +0x759c14 */ __asm { CALL qword ptr [0x7fff9e0285f7] }
    /* +0x759c1a */ __asm { STD }
    /* +0x759c1b */ __asm { DEC dword ptr [RAX + -0x73] }
    /* +0x759c1e */ __asm { ADC EAX,0x563b20 }
    /* +0x759c23 */ __asm { MOV R11D,0x9434d00 }
    /* +0x759c29 */ __asm { IMUL R9D,R11D,0x58869cf }
    /* +0x759c30 */ __asm { MOV ECX,ESI }
    /* +0x759c32 */ __asm { ROL R9D,CL }
    /* +0x759c35 */ __asm { MOV RCX,0x0 }
    /* +0x759c3c */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x759c43 */ __asm { MOV R11W,0xa13e }
    /* +0x759c48 */ __asm { IMUL R11D,R11D,-0x60a1 }
    /* +0x759c4f */ __asm { NOT R11D }
    /* +0x759c52 */ __asm { MOVSX R11,R11W }
    /* +0x759c56 */ __asm { ADD R11,RDX }
    /* +0x759c59 */ __asm { CALL R11 }
    /* +0x759c5c */ __asm { MOV R9D,0x39ecf4d1 }
    /* +0x759c62 */ __asm { LEA RDX,[0x7fffa542d126] }
    /* +0x759c69 */ __asm { ADD R9D,0xe0535f95 }
    /* +0x759c70 */ __asm { XOR R9D,ESI }
    /* +0x759c73 */ __asm { MOV R11W,0xe0b7 }
    /* +0x759c78 */ __asm { MOV EAX,ESI }
    /* +0x759c7a */ __asm { XOR EAX,R11D }
    /* +0x759c7d */ __asm { ADD EAX,0xffffb5f7 }
    /* +0x759c82 */ __asm { ROL AX,0x6 }
    /* +0x759c86 */ __asm { MOVSX R11,AX }
    /* +0x759c8a */ __asm { ADD R11,RDX }
    /* +0x759c8d */ __asm { CALL R11 }
    /* +0x759c90 */ __asm { LEA RDX,[0x7fffa5436918] }
    /* +0x759c97 */ __asm { MOV R9D,0x56625391 }
    /* +0x759c9d */ __asm { MOV R11D,0xace89052 }
    /* +0x759ca3 */ __asm { SUB R11D,EDI }
    /* +0x759ca6 */ __asm { XOR R11D,0x103 }
    /* +0x759cad */ __asm { ADD R11D,0x2d56db49 }
    /* +0x759cb4 */ __asm { MOVSXD R11,R11D }
    /* +0x759cb7 */ __asm { ADD R11,RDX }
    /* +0x759cba */ __asm { ADD R9D,0xc3de00d5 }
    /* +0x759cc1 */ __asm { XOR R9D,EDI }
    /* +0x759cc4 */ __asm { CALL R11 }
    /* +0x759cc7 */ __asm { POP RSI }
    /* +0x759cc8 */ __asm { RCR DL,0x1 }
    /* +0x759cca */ __asm { MOV EDX,0xe1b2dfc9 }
    /* +0x759ccf */ __asm { HLT }
}


// ============================================================================
// Function : Unwind@7fffa4ec9ce0  |  RVA: 0x759ce0  |  Size: 307 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ec9ce0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (*(int64_t *)(param_2 + 0x130) != 0) {
    uVar1 = *(uint64_t *)(param_2 + 0x130);
    (*(code *)((int64_t)(short)((uint16_t)*(uint32_t *)(param_2 + 0xe78) ^ 0x8ca9) + 0x7fffa568a351
              ))(uVar1 >> 0x3d,0x7fffa568a351,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ec9e20  |  RVA: 0x759e20  |  Size: 293 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ec9e20(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  
  if (*(int64_t *)(param_2 + 0x13d0) != 0) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xe78) & 0xf;
    (*(code *)((int64_t)(short)((0xfbf7U >> bVar1 | -0x409 << 0x10 - bVar1) ^ 0x486e) +
              0x7fffa568e4af))
              (*(uint64_t *)(param_2 + 0xe78),0x7fffa568e4af,
               *(uint64_t *)(param_2 + 0x13d0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13d0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ec9f50  |  RVA: 0x759f50  |  Size: 307 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ec9f50(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (*(int64_t *)(param_2 + 0xf20) != 0) {
    uVar1 = *(uint64_t *)(param_2 + 0xf20);
    (*(code *)(&UNK_7fffa56913b7 + (int)((*(uint32_t *)(param_2 + 0xe78) ^ 0xc217a407) * -0xb768377)))
              (param_1,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4eca090  |  RVA: 0x75a090  |  Size: 625 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4eca090(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa4785303 = '\0';
  uRam00007fffa478531d = 0;
  uRam00007fffa4785325 = 0;
  uRam00007fffa478530d = 0;
  uRam00007fffa4785315 = 0;
  uRam00007fffa4785339 = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0x7fff,(int)uVar1)) * 0xc445ebb178e42dd + 1;
  lVar2 = 3;
  do {
    lVar5 = lVar3 * 0x5ebb178e42dd + 1;
    lVar4 = lVar5 * 0xc445ebb178e42dd + 1;
    lVar3 = lVar4 * 0xc445ebb178e42dd + 1;
    *(char *)(lVar2 + 0x7fffa47852f6) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar2 + 0x7fffa47852f7) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0xc445ebb178e42dd + 1;
    *(char *)(lVar2 + 0x7fffa47852f8) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar2 + 0x7fffa47852f5) = (char)((uint64_t)lVar5 >> 0x20);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x4f);
  bRam00007fffa4785303 = bRam00007fffa4785303 + 1 & 3;
  *(uint64_t *)((uint64_t)bRam00007fffa4785303 * 8 + 0x7fffa478530d) = ~uRam00007fffa4785339;
  return;
}


// ============================================================================
// Function : FUN_7fffa4eca310  |  RVA: 0x75a310  |  Size: 600 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4eca310(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  bRam00007fffa4784af4 = 0;
  uRam00007fffa4784b00 = 0;
  uRam00007fffa4784b08 = 0;
  uRam00007fffa4784b10 = 0;
  uRam00007fffa4784b23 = 0;
  uVar1 = rdtsc();
  uVar2 = 0;
  lVar3 = (uVar1 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar1)) * 0x105a646ef77d24a;
  while( true ) {
    *(char *)(uVar2 + 0x7fffa4784af5) = (char)((uint64_t)(lVar3 * 0x9c501646e8) >> 0x20);
    *(char *)((uVar2 | 1) + 0x7fffa4784af3) = (char)((uint64_t)(lVar3 * 0x3359897d64) >> 0x20);
    *(char *)(uVar2 + 0x7fffa4784af6) = (char)((uint64_t)(lVar3 * 0x69a670defa72cf10) >> 0x20);
    *(char *)(uVar2 + 0x7fffa4784af3) = (char)((uint64_t)(lVar3 * 0x46ef77d24a) >> 0x20);
    if (uVar2 == 0x34) break;
    uVar2 = uVar2 + 4;
    lVar3 = lVar3 * 0x69a670defa72cf10;
  }
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa4784af4 * 0x33333334 + 0x33333334) * 5;
  *(uint32_t *)((uVar1 >> 0x20) * 4 + 0x7fffa4784b00) = uRam00007fffa4784b23 ^ 0xb58749f7;
  bRam00007fffa4784af4 = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4eca568  |  RVA: 0x75a568  |  Size: 115 bytes
// Callers  : none
// Callees  : FUN_7fffa564c5c0@0xedc5c0
// ============================================================================
uint64_t FUN_7fffa4eca568(uint64_t param_1,uint32_t param_2,uint32_t param_3,uint8_t param_4)

{
  uint64_t uVar1;
  int64_t lStack_28;
  int64_t *plStack_20;
  int64_t lStack_18;
  char cStack_10;
  
  FUN_7fffa564c5c0(&lStack_28,param_1);
  if (((*(uint8_t *)(((uint64_t)param_2 & 0xff) + 0x19 + lStack_18) & param_4) == 0) &&
     ((param_3 == 0 || ((param_3 & *(uint16_t *)(*plStack_20 + ((uint64_t)param_2 & 0xff) * 2)) == 0)
      ))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (cStack_10 != '\0') {
    *(uint32_t *)(lStack_28 + 0x3a8) = *(uint32_t *)(lStack_28 + 0x3a8) & 0xfffffffd;
  }
  return uVar1;
}


// ============================================================================
// Function : FUN_7fffa4eca5dc  |  RVA: 0x75a5dc  |  Size: 283 bytes
// Callers  : FUN_7fffa50c9360@0x959360
// Callees  : FUN_7fffa5488850@0xd18850, FUN_7fffa565caf0@0xeecaf0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa4eca5dc(uint64_t *param_1,uint32_t param_2,short *param_3,uint64_t param_4,
                     uint8_t param_5)

{
  short sVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  int iVar6;
  uint32_t uVar7;
  int64_t lVar8;
  short *psVar9;
  short *psVar10;
  uint64_t uStack_20;
  
  uStack_20 = 0x7fffa4eca5f4;
  lVar8 = FUN_7fffa565caf0();
  lVar8 = -lVar8;
  *(uint64_t *)((int64_t)register0x00000020 + lVar8 + 0x1428) =
       _DAT_7fffa4780040 ^ (int64_t)register0x00000020 + lVar8 + -0x18;
  psVar10 = (short *)((param_4 & 0xffffffff) + (int64_t)param_3);
  uVar3 = *(uint64_t *)
           (*(int64_t *)(&DAT_7fffa4782180 + ((int64_t)(int)param_2 >> 6) * 8) + 0x28 +
           (uint64_t)(param_2 & 0x3f) * 0x48);
  *param_1 = 0;
  *(uint32_t *)(param_1 + 1) = 0;
  do {
    if (psVar10 <= param_3) break;
    psVar9 = (short *)(&param_5 + lVar8);
    do {
      if (psVar10 <= param_3) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      if (sVar1 == 10) {
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 2;
        *psVar9 = 0xd;
        psVar9 = psVar9 + 1;
      }
      *psVar9 = sVar1;
      psVar9 = psVar9 + 1;
    } while (psVar9 < (short *)((int64_t)register0x00000020 + lVar8 + 0x1426));
    *(uint32_t *)((int64_t)register0x00000020 + lVar8 + 0x18) = 0;
    *(uint64_t *)((int64_t)register0x00000020 + lVar8 + 8) = 0;
    uVar5 = (int)((int64_t)psVar9 - (int64_t)(&param_5 + lVar8) >> 1) * 2;
    *(uint64_t *)((int64_t)&uStack_20 + lVar8) = 0x7fffa4eca6ae;
    iVar6 = (*(code *)&DAT_7ff84ea57790)
                      (uVar3,&param_5 + lVar8,uVar5,(int64_t)register0x00000020 + lVar8 + 0x18);
    if (iVar6 == 0) {
      *(uint64_t *)((int64_t)&uStack_20 + lVar8) = 0x7fffa4eca6ca;
      uVar7 = (*(code *)&DAT_7ff84ea18640)();
      *(uint32_t *)param_1 = uVar7;
      break;
    }
    uVar2 = *(uint32_t *)((int64_t)register0x00000020 + lVar8 + 0x18);
    *(int *)((int64_t)param_1 + 4) = *(int *)((int64_t)param_1 + 4) + uVar2;
  } while (uVar5 <= uVar2);
  uVar4 = *(uint64_t *)((int64_t)register0x00000020 + lVar8 + 0x1428);
  *(uint64_t *)((int64_t)&uStack_20 + lVar8) = 0x7fffa4eca6df;
  FUN_7fffa5488850(uVar4 ^ (int64_t)register0x00000020 + lVar8 + -0x18);
  return;
}


// ============================================================================
// Function : FUN_7fffa4eca6f8  |  RVA: 0x75a6f8  |  Size: 250 bytes
// Callers  : FUN_7fffa4ecfd4b@0x75fd4b, FUN_7fffa569b22a@0xf2b22a
// Callees  : FUN_7fffa564c5c0@0xedc5c0, FUN_7fffa55d55c0@0xe655c0
// ============================================================================
uint16_t FUN_7fffa4eca6f8(uint16_t param_1)

{
  int iVar1;
  uint8_t bVar2;
  uint16_t auStackX_8 [4];
  uint16_t auStackX_18 [8];
  int64_t lStack_28;
  int64_t lStack_20;
  char cStack_10;
  
  if (param_1 == 0xffff) {
    return 0xffff;
  }
  auStackX_8[0] = param_1;
  FUN_7fffa564c5c0(&lStack_28);
  bVar2 = (uint8_t)auStackX_8[0];
  if (*(int *)(lStack_20 + 0xc) == 0xfde9) {
    if (0x7f < auStackX_8[0]) {
LAB_7fffa4eca79a:
      auStackX_18[0] = 0;
      iVar1 = FUN_7fffa55d55c0(*(uint64_t *)(lStack_20 + 0x138),0x100,auStackX_8,1,auStackX_18,1);
      if (iVar1 != 0) {
        auStackX_8[0] = auStackX_18[0];
      }
      goto LAB_7fffa4eca7d4;
    }
    if (((&UNK_7fffa56b4832)[(uint64_t)bVar2 * 2] & 1) == 0) {
      auStackX_8[0] = auStackX_8[0] & 0xff;
      goto LAB_7fffa4eca7d4;
    }
  }
  else {
    if (0xff < auStackX_8[0]) {
      if (*(int64_t *)(lStack_20 + 0x138) == 0) goto LAB_7fffa4eca7d4;
      goto LAB_7fffa4eca79a;
    }
    if (((&UNK_7fffa56b4832)[(uint64_t)bVar2 * 2] & 1) == 0) {
      auStackX_8[0] = auStackX_8[0] & 0xff;
      goto LAB_7fffa4eca7d4;
    }
  }
  auStackX_8[0] = (uint16_t)*(uint8_t *)(*(int64_t *)(lStack_20 + 0x110) + (uint64_t)bVar2);
LAB_7fffa4eca7d4:
  if (cStack_10 != '\0') {
    *(uint32_t *)(lStack_28 + 0x3a8) = *(uint32_t *)(lStack_28 + 0x3a8) & 0xfffffffd;
  }
  return auStackX_8[0];
}


// ============================================================================
// Function : FUN_7fffa4eca800  |  RVA: 0x75a800  |  Size: 1351 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa4ecad44) */
/* WARNING: Removing unreachable block (ram,0x7fffa4eca967) */
/* WARNING: Removing unreachable block (ram,0x7fffa4eca99c) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ecad3c) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ecad47) */

void FUN_7fffa4eca800(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  uRam00007fffa47bad78 = 0x6e7301d8fdd0aef7;
  uRam00007fffa47bad90 = 0x1d7679a67006aaf4;
  uRam00007fffa47bad88 = 0x13e845c18e0c94a;
  uVar1 = uRam00007fffa4781408 ^ 0xca461f83808fc8c7;
  uVar1 = (uVar1 << 0x18 | uVar1 >> 0x28) ^ (uVar1 << 0x26 | uVar1 >> 0x1a) ^
          (uVar1 << 0xb | uVar1 >> 0x35);
  uVar1 = uVar1 ^ (uVar1 << 0x1a | uVar1 >> 0x26) ^ (uVar1 << 0x36 | uVar1 >> 10);
  uVar1 = (uVar1 << 0x2c | uVar1 >> 0x14) ^ (uVar1 << 0x34 | uVar1 >> 0xc) ^ uVar1;
  uVar1 = (uVar1 << 0x18 | uVar1 >> 0x28) ^ (uVar1 << 0x28 | uVar1 >> 0x18) ^ uVar1;
  uVar1 = (uVar1 << 0x30 | uVar1 >> 0x10) ^ (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar1;
  lRam00007fffa47bad80 =
       (uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
        (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
        (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38) * 0x3d65e4fb5d2d1781;
  uVar1 = (((uRam00007fffa4781168 ^ 0xc7c88f80831f46ca) << 3 |
           (uRam00007fffa4781168 ^ 0xc7c88f80831f46ca) >> 0x3d) ^ 0xbb130a474a503fe5) *
          0x40000008000001 + lRam00007fffa47816a8;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x39) ^ (uVar1 * 0x800000 | uVar1 >> 0x29) ^ uVar1;
  uRam00007fffa47bad98 = (uVar1 << 0x2e | uVar1 >> 0x12) ^ (uVar1 << 0xe | uVar1 >> 0x32) ^ uVar1;
  uVar2 = 0x77f0999500b5beeb - lRam00007fffa4781070;
  uVar1 = uVar2 >> 0x13 ^ uVar2;
  uRam00007fffa47badb0 = 0x5aa503f6d3e58f65;
  uVar1 = uVar1 >> 0x26 ^ uVar1;
  uVar1 = uVar2 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  uVar1 = (uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2 + 0x25d63352e5b4b20e;
  uRam00007fffa47bada8 =
       uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
       (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
       (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uRam00007fffa47bada0 = 0xbb9151e50f0c8301;
  return;
}


// ============================================================================
// Function : FUN_7fffa4ecad50  |  RVA: 0x75ad50  |  Size: 15 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4ecad50(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa4ecd2c4  |  RVA: 0x75d2c4  |  Size: 181 bytes
// Callers  : FUN_7fffa55d50b4@0xe650b4, FUN_7fffa56a0818@0xf30818, FUN_7fffa4f5c658@0x7ec658
// Callees  : FUN_7fffa5130600@0x9c0600, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa519a8c4@0xa2a8c4, FUN_7fffa55cb0b4@0xe5b0b4
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t FUN_7fffa4ecd2c4(void)

{
  uint32_t uVar1;
  int iVar2;
  int64_t lVar3;
  
  uVar1 = (*(code *)&DAT_7ff84ea18640)();
  iVar2 = FUN_7fffa519a8c4(_DAT_7fffa4780244,0xffffffffffffffff);
  if (iVar2 != 0) {
    lVar3 = FUN_7fffa5130600(1,0x3c8);
    if (lVar3 != 0) {
      iVar2 = FUN_7fffa519a8c4(_DAT_7fffa4780244,lVar3);
      if (iVar2 == 0) {
        FUN_7fffa519a8c4(_DAT_7fffa4780244,0);
        FUN_7fffa52d8dd0(lVar3);
        lVar3 = 0;
      }
      else {
        FUN_7fffa55cb0b4(lVar3);
        FUN_7fffa52d8dd0(0);
      }
      (*(code *)&DAT_7ff84ea28280)(uVar1);
      return lVar3;
    }
    FUN_7fffa519a8c4(_DAT_7fffa4780244,0);
    FUN_7fffa52d8dd0(0);
  }
  (*(code *)&DAT_7ff84ea28280)(uVar1);
  return 0;
}


// ============================================================================
// Function : FUN_7fffa4ecd380  |  RVA: 0x75d380  |  Size: 1384 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4ecd380(uint64_t param_1,uint64_t param_2,uint32_t param_3)

{
  uint16_t uVar1;
  int64_t lVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint32_t unaff_EDI;
  int64_t lVar7;
  uint32_t uVar8;
  uint8_t bVar9;
  int64_t lVar10;
  uint32_t uVar11;
  uint8_t bVar12;
  
  uVar3 = (~(param_3 & unaff_EDI) | param_3) * 0x364bfb +
          unaff_EDI * 0x29b +
          (((~unaff_EDI & ~param_3) - (~param_3 & unaff_EDI)) + (param_3 ^ unaff_EDI)) * -0x60b7afb5
          + ~unaff_EDI * 0x60b7b250;
  bVar9 = (uint8_t)uVar3;
  *(uint8_t *)((int64_t)(int)((uVar3 ^ 0x4baf93c0) + 0x4b99210a) + 0x7fffa4791edd) =
       (bVar9 + 0x96) * ' ' | (uint8_t)(bVar9 + 0x96) >> 3;
  uVar11 = uVar3 | 1;
  *(uint8_t (*) [16])((int64_t)(int)~(uVar11 * -0x33e6ad13) + 0x7fffa478e8b0) =
       (uint8_t  [16])0x0;
  uVar1 = (uint16_t)uVar3;
  *(uint32_t *)((int64_t)(short)(uVar1 ^ 0x79b2) + 0x7fffa47899db) = ~(uVar3 ^ 0x4e95) & 0xffff;
  lVar10 = rdtsc();
  uVar4 = lVar10 * 0xea7a3037452743b + 1;
  lVar10 = 3;
  do {
    uVar5 = uVar4 & 0xea7a3037452743b;
    if ((uint64_t)(0x84e16d - uVar3) <= (uint64_t)(int64_t)(int)(uVar11 * -0x46eaeca2)) {
      uVar5 = uVar4 * 0xea7a3037452743b;
    }
    lVar7 = (uVar5 + 1) * 0xea7a3037452743b + 1;
    lVar2 = lVar7 * 0xea7a3037452743b + 1;
    uVar4 = lVar2 * 0xea7a3037452743b + 1;
    *(char *)(lVar10 + (int64_t)(int)(-0x374abb - uVar3) + 0x7fffa4795ead) = (char)(uVar4 >> 0x20);
    *(char *)(lVar10 + (int64_t)(int)(uVar11 * -0x5c82b100 | uVar11 * 0x5146fa9e >> 0x19) +
                       0x7fffa4795d6c) = (char)(uVar5 + 1 >> 0x20);
    *(char *)(lVar10 + (int64_t)(int)((uVar3 ^ 0x724f42c4) + 0x727860bd) + 0x7fffa4790e1b) =
         (char)((uint64_t)lVar7 >> 0x20);
    *(char *)(lVar10 + (int64_t)(int)((-0x6b09cb96 - uVar3) * -0x194aa903) + 0x7fffa478eb87) =
         (char)((uint64_t)lVar2 >> 0x20);
    lVar10 = lVar10 + 4;
  } while (lVar10 != 0x33);
  uVar8 = 0x2affff5e << (bVar9 & 0x1f) | 0x2affff5eU >> 0x20 - (bVar9 & 0x1f);
  bVar12 = *(char *)((int64_t)(short)(0x7325 << (bVar9 & 0xf) | 0x7325U >> 0x10 - (bVar9 & 0xf)) +
                    0x7fffa478ccc5) + 1U & 3;
  *(uint32_t *)((int64_t)(int)((0x7e335a92 - uVar3) * -0x6a8fde1d) + 0x7fffa4793c28 +
           (uint64_t)bVar12 * 4) =
       *(uint32_t *)((int64_t)(int)(uVar8 << 0x1e | uVar8 >> 2) + 0x7fffa4790489) ^ 0x13f929c8;
  *(uint8_t *)((int64_t)(short)((uVar1 | 1) * 0x29b4) + 0x7fffa4787e70) = (bVar9 ^ 0xc2) + 0x58;
  uVar8 = uVar11 * 0x19e5fab0 + 0xe9dc881c;
  *(uint8_t *)((int64_t)(int)(uVar8 * 0x200 | uVar8 >> 0x17) + 0x7fffa47908cb) = bVar12;
  lVar10 = (int64_t)(short)((0x1e2d << (bVar9 & 0xf) | 0x1e2dU >> 0x10 - (bVar9 & 0xf)) + 0xee6e);
  *(uint8_t (*) [16])(lVar10 + 0x7fffa478bde5) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar10 + 0x7fffa478bdd5) = (uint8_t  [16])0x0;
  *(uint64_t *)((int64_t)(int)(-0x371440 - uVar3) + 0x7fffa4792686) = 0;
  lVar10 = rdtsc();
  lVar10 = lVar10 * 0x64e6437f594abd8 + 0xb;
  lVar2 = 3;
  while( true ) {
    lVar10 = lVar10 * 0x64e6437f594abd8 + 0xb;
    *(char *)(lVar2 + (int64_t)(int)(uVar11 * 0x248efc00 | uVar11 * 0xc12477e >> 0x17) +
                      0x7fffa4790c00) = (char)((uint64_t)lVar10 >> 0x20);
    if (lVar2 == 0x3f) break;
    lVar7 = lVar10 * 0x64e6437f594abd8 + 0xb;
    lVar6 = lVar7 * 0x64e6437f594abd8 + 0xb;
    lVar10 = lVar6 * 0x64e6437f594abd8 + 0xb;
    *(char *)(lVar2 + ((int64_t)(int)(uVar3 ^ 0xbceba1f8) ^ 0xffffffffbcdd75fbU) + 0x7fffa478fb3d)
         = (char)((uint64_t)lVar7 >> 0x20);
    *(char *)(lVar2 + (int64_t)(short)((0xb7e4 - uVar1) * 0x1000 | (uint16_t)(0xb7e4 - uVar1) >> 4) +
                      0x7fffa478c041) = (char)((uint64_t)lVar10 >> 0x20);
    *(char *)(lVar2 + (int64_t)(short)~(uVar1 ^ 0xda1e) + 0x7fffa478cc1c) =
         (char)((uint64_t)lVar6 >> 0x20);
    lVar2 = lVar2 + 4;
  }
  bVar9 = *(char *)(((int64_t)(short)(uVar1 + 0xe50c) ^ 0x7ccfU) + 0x7fffa47875f3) + 1U & 3;
  *(uint64_t *)((int64_t)(short)(uVar1 ^ 0x7830) + 0x7fffa4789761 + (uint64_t)bVar9 * 8) = 0;
  *(uint8_t *)((int64_t)(int)(uVar11 * 0x3cdea455 + -0x126b0ed3) + 0x7fffa478faf8) = bVar9;
  return;
}


// ============================================================================
// Function : FUN_7fffa4ecd8f0  |  RVA: 0x75d8f0  |  Size: 374 bytes
// Callers  : none
// Callees  : none
// ============================================================================
short * FUN_7fffa4ecd8f0(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)

{
  uint16_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint64_t uVar4;
  short *psVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t in_R10;
  uint32_t uVar9;
  
  uVar4 = in_R10 * -0x7f01fc07f01fc07f;
  uVar9 = 0x3951599d - (int)param_4;
  uVar7 = uVar4 >> 0x10;
  if ((uVar9 * 0x400000 | uVar9 >> 10) < 0x34cfa73d) {
    uVar7 = uVar4 ^ 0x10;
  }
  psVar5 = (short *)(param_3 * -0x6981b12709fa29d7 * (0x803e728ff1 - param_4));
  uVar7 = (uVar4 ^ uVar7) >> 0x20 ^ uVar4 ^ uVar7;
  if (((0x3f < uVar7) && (psVar5 != (short *)0x0)) && (*psVar5 == (short)(-0x15c3 - (short)param_4))
     ) {
    uVar4 = (int64_t)(int)*(uint32_t *)(psVar5 + 0x1e) + 0x18;
    if ((uVar4 <= uVar7) &&
       (uVar7 = (uint64_t)*(uint32_t *)(psVar5 + 0x1e), *(int *)((int64_t)psVar5 + uVar7) == 0x4550))
    {
      bVar2 = (uint8_t)param_4 & 0x1f;
      bVar3 = (uint8_t)param_4 & 0x1f;
      uVar1 = *(uint16_t *)((int64_t)psVar5 + uVar7 + 6);
      lVar8 = (uint64_t)uVar1 * 0x28;
      if ((int)param_4 != 0x3e728ff0) {
        lVar8 = (uint64_t)uVar1 + 0x28;
      }
      lVar6 = -lVar8;
      if ((0x6ae162e0U >> bVar2 | 0x6ae162e0 << 0x20 - bVar2) <
          (0x5134e066U >> bVar3 | 0x5134e066 << 0x20 - bVar3)) {
        lVar6 = lVar8;
      }
      psVar5 = (short *)(lVar6 + *(uint16_t *)((int64_t)psVar5 + uVar7 + 0x14) + uVar4);
    }
  }
  return psVar5;
}


// ============================================================================
// Function : FUN_7fffa4ecda70  |  RVA: 0x75da70  |  Size: 75 bytes
// Callers  : none
// Callees  : FUN_7fffa52c403c@0xb5403c, FUN_7fffa54765d0@0xd065d0, FUN_7fffa54539d0@0xce39d0
// ============================================================================
void FUN_7fffa4ecda70(int *param_1,uint64_t param_2,uint64_t param_3)

{
  code *pcVar1;
  int64_t lVar2;
  int iVar3;
  
  iVar3 = FUN_7fffa54765d0();
  if ((((*(uint8_t *)(param_1 + 1) & 0x66) == 0) && (*param_1 == -0x1f928c9d)) && (iVar3 == 1)) {
    lVar2 = FUN_7fffa54539d0();
    *(int **)(lVar2 + 0x20) = param_1;
    lVar2 = FUN_7fffa54539d0();
    *(uint64_t *)(lVar2 + 0x28) = param_3;
    FUN_7fffa52c403c();
    pcVar1 = (code *)__debugbreak();
    (*pcVar1)();
    return;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4ecdabc  |  RVA: 0x75dabc  |  Size: 1 bytes
// Callers  : FUN_7fffa52c4078@0xb54078
// Callees  : none
// ============================================================================
void FUN_7fffa4ecdabc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa4ecdad0  |  RVA: 0x75dad0  |  Size: 847 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4ecdad0(void)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t unaff_RDI;
  uint64_t uVar6;
  uint64_t unaff_R14;
  
  lVar4 = (unaff_R14 & ~unaff_RDI) * 0x5d344c51 +
          ((~unaff_RDI ^ unaff_R14) + (~unaff_R14 & unaff_RDI)) * 0x5d344c51;
  uVar2 = (uint16_t)lVar4;
  lVar5 = (int64_t)(short)(-0x719f - uVar2);
  bVar1 = (uint8_t)lVar4;
  *(uint8_t *)((int64_t)(short)(0x634f - uVar2) + 0x7fffa478b731) =
       (bVar1 ^ 0xaf) << 1 | (char)(bVar1 ^ 0xaf) < '\0';
  *(uint8_t (*) [16])(lVar5 + 0x7fffa4788c51) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar5 + 0x7fffa4788c41) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar5 + 0x7fffa4788c31) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar5 + 0x7fffa4788c21) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar5 + 0x7fffa4788c61) = 0;
  uVar3 = rdtsc();
  uVar3 = (uVar3 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar3)) * 0x914e6325a6ecac9;
  lVar5 = 5;
  while( true ) {
    *(char *)(lVar5 + (int64_t)(short)(uVar2 + 0xfa4) + 0x7fffa478a374) =
         (char)(uVar3 * 0xc395dd1d1 >> 0x20);
    uVar6 = 0x31fd3a7e78 - lVar4;
    *(char *)(lVar5 + ((int64_t)(int)(((uint32_t)lVar4 ^ 0x2217a53d) * -0x6f935875) ^
                      0xffffffffd02e5a73U) + 0x7fffa4794191) =
         (char)((uVar6 & 0xffffffff) * (uVar3 & 0xffffffff) +
                ((uVar6 >> 0x20) * (uVar3 & 0xffffffff) + (uVar3 >> 0x20) * (uVar6 & 0xffffffff) <<
                0x20) >> 0x20);
    *(char *)(lVar5 + ((int64_t)(short)((uVar2 ^ 0x4718) << 4 | (uVar2 ^ 0x4718) >> 0xc) ^
                      0xffffffffffffeeb5U) + 0x7fffa478c0fe) = (char)(uVar3 * 0xc2b406a719 >> 0x20);
    if (lVar5 == 0x53) break;
    *(char *)(lVar5 + (int64_t)(int)(((uint32_t)lVar4 + 0xb30b1c3) * 0x196df7f3) + 0x7fffa4791d93) =
         (char)(uVar3 * 0x692fd0eca1 >> 0x20);
    *(char *)(lVar5 + (int64_t)(short)((uVar2 + 0x424) * 0x21a9) + 0x7fffa478d97f) =
         (char)(uVar3 * 0xb9aceed469 >> 0x20);
    uVar3 = uVar3 * 0x2bf0210b6a3da071;
    *(char *)(lVar5 + (int64_t)
                      (int)(0x6941fffe << (bVar1 & 0x1f) | 0x6941fffeU >> 0x20 - (bVar1 & 0x1f)) +
                      0x7fffa479322b) = (char)(uVar3 >> 0x20);
    lVar5 = lVar5 + 6;
  }
  bRam00007fffa47866d1 =
       *(char *)((int64_t)(short)(-0x7951 << (bVar1 & 0xf) | 0x86afU >> 0x10 - (bVar1 & 0xf)) +
                0x7fffa478a37a) + 1U & 7;
  *(uint64_t *)
   ((int64_t)(short)(-0x566f - uVar2) + 0x7fffa47870f1 + (uint64_t)bRam00007fffa47866d1 * 8) = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa4ecf080  |  RVA: 0x75f080  |  Size: 1242 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4ecf491) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ecf241) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ecf551) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ecf564) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ecf56e) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ecf573) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ecf57a) */

int64_t FUN_7fffa4ecf080(void)

{
  int64_t lVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t unaff_R14;
  uint64_t uVar7;
  
  uVar5 = ~unaff_RDI;
  uVar7 = ~unaff_RSI;
  uVar4 = uVar7 & ~unaff_R14;
  uVar6 = ~unaff_R14 & unaff_RSI;
  uVar5 = (uVar7 & unaff_R14 ^ uVar5) * -0xa4dd4e87 +
          ((uVar7 | unaff_R14) ^ unaff_RDI) * -0xadc5cb1f +
          (uVar6 & unaff_RDI) * 0x8e87c98 + (unaff_RSI ^ unaff_R14 | unaff_RDI) * -0xc547950b +
          ((uVar7 ^ unaff_R14) & uVar5) * -0x1781c9ec + (uVar5 & uVar7 & unaff_R14) * 0x8c75637e +
          ((((uVar6 & uVar5) + (uVar5 & uVar4)) - (uVar4 & unaff_RDI)) +
          (unaff_R14 & unaff_RSI ^ unaff_RDI)) * 0x838ce6e6 +
          ((uVar7 ^ unaff_R14) & unaff_RDI) * -0x215067a1;
  bVar2 = (uint8_t)uVar5;
  lVar1 = (int64_t)(int)(0x5bcffff2 << (bVar2 & 0x1f) | 0x5bcffff2U >> 0x20 - (bVar2 & 0x1f));
  *(uint8_t (*) [16])(lVar1 + 0x7fffa4792d24) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar1 + 0x7fffa4792d14) = (uint8_t  [16])0x0;
  uVar3 = (uint32_t)uVar5;
  *(uint64_t *)((int64_t)(int)((uVar3 ^ 0x4729076a) + 0x5e4032a3) + 0x7fffa479245f) =
       0x34b5cfd395d04a0a - uVar5 << 0x27 | 0x34b5cfd395d04a0a - uVar5 >> 0x19;
  *(uint64_t *)((int64_t)(short)(((uint16_t)uVar5 | 1) * -0x13b9) + 0x7fffa478c2c5) =
       ~(uVar5 ^ 0xd58928217893d34d);
  uRam00007fffa47852b0 = ~((uVar5 | 1) * 0x57e74f670fe77dbc);
  *(uint64_t *)((int64_t)(short)((uint16_t)uVar5 ^ 0x474d) + 0x7fffa47896d7) =
       ~((0x2fef139ce2cc001e - uVar5) * 0x4919587);
  uVar4 = (0x384634814bc09a5d << (bVar2 & 0x3f) | 0x384634814bc09a5dU >> 0x40 - (bVar2 & 0x3f)) -
          lRam00007fffa4780d30;
  uVar4 = ((uVar4 << 0x39 | uVar4 >> 7) ^ uRam00007fffa4780d00) * -0x77c15e4e9af02fdf;
  uVar4 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
          (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
          (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  uVar4 = uVar4 >> 3 ^ uVar4;
  uVar4 = uVar4 >> 6 ^ uVar4;
  uVar4 = uVar4 >> 0xc ^ uVar4;
  *(uint64_t *)((int64_t)(int)((uVar3 ^ 0x16cc9613) + 0xfa4116c) + 0x7fffa478d6a5) =
       uVar4 >> 0x18 ^ uVar4 >> 0x30 ^ uVar4;
  *(uint64_t *)((int64_t)(int)(uVar3 + 0x196707d1) + 0x7fffa4794e5b) = -0x6ade171a612ded2e - uVar5
  ;
  *(uint64_t *)
   ((int64_t)(short)(0x1ddc << (bVar2 & 0xf) | 0x1ddcU >> 0x10 - (bVar2 & 0xf)) + 0x7fffa4789103) =
       ((uRam00007fffa47810a0 ^ 0xcb692261605f4eb6) << 0x1f |
       (uRam00007fffa47810a0 ^ 0xcb692261605f4eb6) >> 0x21) ^ 0x9c165c0590262b0c;
  lVar1 = (int64_t)(int)(-0x4370000a << (bVar2 & 0x1f) | 0xbc8ffff6U >> 0x20 - (bVar2 & 0x1f));
  uVar4 = ((uVar5 + 0xfe537ee9caa706a1) * 0x2000000 | uVar5 + 0xfe537ee9caa706a1 >> 0x27) +
          lRam00007fffa47816c0 + 0x975b6f52;
  *(uint64_t *)(lVar1 + 0x7fffa478e720) =
       uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
       (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
       (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  return lVar1;
}


// ============================================================================
// Function : FUN_7fffa4ecf55c  |  RVA: 0x75f55c  |  Size: 53 bytes
// Callers  : FUN_7fffa5267c30@0xaf7c30
// Callees  : FUN_7fffa4cf48ec@0x5848ec, FUN_7fffa5405074@0xc95074
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t FUN_7fffa4ecf55c(char param_1)

{
  uint8_t uVar1;
  
  if (param_1 == '\0') {
    uVar1 = FUN_7fffa5405074(&PTR_LAB_7fffa56b32b0,&FuncInfo_7fffa56b33b0);
    return uVar1;
  }
  if (_DAT_7fffa4781c18 != 0) {
    FUN_7fffa4cf48ec();
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa4ecf5a0  |  RVA: 0x75f5a0  |  Size: 682 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4ecf5a0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar3 = 0;
  uRam00007fffa47bb163 = 0;
  uRam00007fffa47bb150 = 0;
  uRam00007fffa47bb158 = 0;
  uRam00007fffa47bb140 = 0;
  uRam00007fffa47bb148 = 0;
  uRam00007fffa47bb130 = 0;
  uRam00007fffa47bb138 = 0;
  uRam00007fffa47bb160 = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0xffffffff,(int)(uVar1 >> 0x20)) << 0x20 | uVar1 & 0xffffffff) *
          0x3ad3e7adc1457f5;
  while( true ) {
    *(char *)(lVar3 + 0x7fffa47bb123) = (char)((uint64_t)(lVar2 * 0x26a98c2cd) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bb121) = (char)((uint64_t)(lVar2 * 0x7adc1457f5) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bb125) = (char)((uint64_t)(lVar2 * 0x603e9f4a01edc2e5) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bb124) = (char)((uint64_t)(lVar2 * 0x93526a1931) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bb122) = (char)((uint64_t)(lVar2 * 0x4ef4807079) >> 0x20);
    if (lVar3 == 0x55) break;
    lVar3 = lVar3 + 5;
    lVar2 = lVar2 * 0x603e9f4a01edc2e5;
  }
  lVar2 = (uint64_t)((uint32_t)(uint8_t)uRam00007fffa47bb130 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)((uint64_t)(uint32_t)((int)((uint64_t)lVar2 >> 0x20) << 3) + 0x7fffa47bb131) = 0;
  uRam00007fffa47bb130 = CONCAT71(uRam00007fffa47bb130._1_7_,(char)((uint64_t)lVar2 >> 0x20));
  return;
}


// ============================================================================
// Function : FUN_7fffa4ecf84c  |  RVA: 0x75f84c  |  Size: 118 bytes
// Callers  : FUN_7fffa549ab90@0xd2ab90
// Callees  : FUN_7fffa5101d40@0x991d40, FUN_7fffa54e6ac4@0xd76ac4
// ============================================================================
uint64_t FUN_7fffa4ecf84c(int param_1,uint32_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  if (param_3 == (int64_t *)0x0) {
    lVar1 = FUN_7fffa54e6ac4();
    if (param_1 + 1U < 0x101) {
      uVar3 = *(uint16_t *)(lVar1 + (int64_t)param_1 * 2) & param_2;
    }
    uVar2 = (uint64_t)uVar3;
  }
  else if (param_1 + 1U < 0x101) {
    uVar2 = (uint64_t)(*(uint16_t *)(*(int64_t *)*param_3 + (int64_t)param_1 * 2) & param_2);
  }
  else if ((int)((int64_t *)*param_3)[1] < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_7fffa5101d40(param_1);
  }
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa4ecf8e0  |  RVA: 0x75f8e0  |  Size: 554 bytes
// Callers  : FUN_7fffa53eebe0@0xc7ebe0, FUN_7fffa505cb10@0x8ecb10, FUN_7fffa51ab910@0xa3b910, FUN_7fffa4e912d0@0x7212d0, FUN_7fffa4f5cc00@0x7ecc00, FUN_7fffa56a5840@0xf35840, FUN_7fffa4cf5f50@0x585f50, FUN_7fffa5588cf0@0xe18cf0
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t (*) [32] FUN_7fffa4ecf8e0(uint8_t (*param_1) [32],uint8_t param_2,uint64_t param_3)

{
  uint8_t auVar1 [32];
  uint8_t (*pauVar2) [32];
  uint8_t (*pauVar3) [32];
  uint8_t (*pauVar4) [16];
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint8_t uVar8;
  uint16_t uVar9;
  uint32_t uVar10;
  int64_t lVar11;
  uint8_t auVar12 [16];
  uint8_t auVar13 [32];
  
  uVar5 = (uint64_t)param_2;
  lVar11 = uVar5 * 0x101010101010101;
  uVar8 = (uint8_t)lVar11;
  uVar9 = (uint16_t)lVar11;
  uVar10 = (uint32_t)lVar11;
  switch(param_3) {
  case 0:
    return param_1;
  case 8:
    *(int64_t *)(param_1[-1] + param_3 + 0x18) = lVar11;
    return param_1;
  case 9:
    *(int64_t *)(param_1[-1] + param_3 + 0x17) = lVar11;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 10:
    *(int64_t *)(param_1[-1] + param_3 + 0x16) = lVar11;
    *(uint16_t *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xb:
    *(int64_t *)(param_1[-1] + param_3 + 0x15) = lVar11;
    *(uint16_t *)(param_1[-1] + param_3 + 0x1d) = uVar9;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xc:
    *(int64_t *)(param_1[-1] + param_3 + 0x14) = lVar11;
  case 4:
    *(uint32_t *)(param_1[-1] + param_3 + 0x1c) = uVar10;
    return param_1;
  case 0xd:
    *(int64_t *)(param_1[-1] + param_3 + 0x13) = lVar11;
  case 5:
    *(uint32_t *)(param_1[-1] + param_3 + 0x1b) = uVar10;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xe:
    *(int64_t *)(param_1[-1] + param_3 + 0x12) = lVar11;
  case 6:
    *(uint32_t *)(param_1[-1] + param_3 + 0x1a) = uVar10;
  case 2:
    *(uint16_t *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xf:
    *(int64_t *)(param_1[-1] + param_3 + 0x11) = lVar11;
  case 7:
    *(uint32_t *)(param_1[-1] + param_3 + 0x19) = uVar10;
  case 3:
    *(uint16_t *)(param_1[-1] + param_3 + 0x1d) = uVar9;
  case 1:
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  }
  auVar12._8_8_ = lVar11;
  auVar12._0_8_ = lVar11;
  if (param_3 < 0x21) {
    *(uint8_t (*) [16])*param_1 = auVar12;
    *(uint8_t (*) [16])(param_1[-1] + param_3 + 0x10) = auVar12;
    return param_1;
  }
  if (_DAT_7fffa47800e0 < 3) {
    if ((param_3 <= _DAT_7fffa47800e8) || ((DAT_7fffa4781b80 & 2) == 0)) {
      lVar11 = ((uint64_t)param_1 & 0xf) - 0x10;
      pauVar4 = (uint8_t (*) [16])((int64_t)param_1 - lVar11);
      param_3 = param_3 + lVar11;
      if (0x80 < param_3) {
        do {
          *pauVar4 = auVar12;
          pauVar4[1] = auVar12;
          pauVar4[2] = auVar12;
          pauVar4[3] = auVar12;
          pauVar4[4] = auVar12;
          pauVar4[5] = auVar12;
          pauVar4[6] = auVar12;
          pauVar4[7] = auVar12;
          pauVar4 = pauVar4 + 8;
          param_3 = param_3 - 0x80;
        } while (0x7f < param_3);
      }
                    /* WARNING: Could not recover jumptable at 0x7fffa4ecfc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar2 = (uint8_t (*) [32])
                (*(code *)(IMAGE_DOS_HEADER_7fffa4770000.e_magic +
                          *(uint32_t *)(&UNK_7fffa58732c8 + (param_3 + 0xf >> 4) * 4)))
                          (pauVar4,uVar5 - lVar11);
      return pauVar2;
    }
  }
  else if (((param_3 <= _DAT_7fffa47800e8) || (_DAT_7fffa47800f0 < param_3)) ||
          ((DAT_7fffa4781b80 & 2) == 0)) {
    auVar13._16_16_ = auVar12;
    auVar13._0_16_ = auVar12;
    lVar6 = ((uint64_t)param_1 & 0x1f) - 0x20;
    pauVar2 = (uint8_t (*) [32])((int64_t)param_1 - lVar6);
    param_3 = param_3 + lVar6;
    if (0x100 < param_3) {
      if (_DAT_7fffa47800f0 < param_3) {
        do {
          uVar5 = param_3;
          pauVar3 = pauVar2;
          auVar1 = vmovntdq_avx(auVar13);
          *pauVar3 = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[7] = auVar1;
          pauVar2 = pauVar3 + 8;
          param_3 = uVar5 - 0x100;
        } while (0xff < uVar5 - 0x100);
        uVar7 = uVar5 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar5) {
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
          auVar1 = vmovntdq_avx(auVar13);
          *(uint8_t (*) [32])(*pauVar3 + uVar7) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(uint8_t (*) [32])(pauVar3[1] + uVar7) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(uint8_t (*) [32])(pauVar3[2] + uVar7) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(uint8_t (*) [32])(pauVar3[3] + uVar7) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(uint8_t (*) [32])(pauVar3[4] + uVar7) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(uint8_t (*) [32])(pauVar3[5] + uVar7) = auVar1;
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
          auVar1 = vmovntdq_avx(auVar13);
          *(uint8_t (*) [32])(pauVar3[6] + uVar7) = auVar1;
        default:
          *(uint8_t (*) [32])(pauVar3[-1] + uVar5) = auVar13;
        case 0x100:
          *param_1 = auVar13;
          return param_1;
        }
      }
      do {
        *pauVar2 = auVar13;
        pauVar2[1] = auVar13;
        pauVar2[2] = auVar13;
        pauVar2[3] = auVar13;
        pauVar2[4] = auVar13;
        pauVar2[5] = auVar13;
        pauVar2[6] = auVar13;
        pauVar2[7] = auVar13;
        pauVar2 = pauVar2 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x7fffa4ecfa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar2 = (uint8_t (*) [32])
              (*(code *)(IMAGE_DOS_HEADER_7fffa4770000.e_magic +
                        *(uint32_t *)(&UNK_7fffa5873280 + (param_3 + 0x1f >> 5) * 4)))
                        (lVar11,uVar5 - lVar6);
    return pauVar2;
  }
  pauVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pauVar2)[0] = param_2;
    pauVar2 = (uint8_t (*) [32])(*pauVar2 + 1);
  }
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa4ecfc70  |  RVA: 0x75fc70  |  Size: 219 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecfe16@0x75fe16, FUN_7fffa5588c90@0xe18c90, FUN_7fffa4f40a50@0x7d0a50, FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184, FUN_7fffa5002dcc@0x892dcc, FUN_7fffa56266a0@0xeb66a0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa4ecfc70(uint16_t *param_1,uint16_t *param_2,int64_t *param_3)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  int64_t lStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  char cStack_20;
  
  if ((param_1 == (uint16_t *)0x0) || (param_2 == (uint16_t *)0x0)) {
    puVar4 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar4 = 0x16;
    FUN_7fffa55c8ce0();
    return 0x7fffffff;
  }
  cStack_20 = '\0';
  if (param_3 == (int64_t *)0x0) {
    if (_DAT_7fffa4782620 == 0) {
      uStack_30 = CONCAT44(PTR_PTR_7fffa47808e8._4_4_,PTR_PTR_7fffa47808e8._0_4_);
      uStack_28 = CONCAT44(uRam00007fffa47808f4,_DAT_7fffa47808f0);
    }
    else {
      lStack_38 = FUN_7fffa56266a0();
      uStack_30 = *(int64_t *)(lStack_38 + 0x90);
      uStack_28 = *(int64_t *)(lStack_38 + 0x88);
      FUN_7fffa5002dcc(lStack_38,&uStack_30);
      FUN_7fffa4f40a50(lStack_38,&uStack_28);
      if ((*(uint32_t *)(lStack_38 + 0x3a8) & 2) == 0) {
        *(uint32_t *)(lStack_38 + 0x3a8) = *(uint32_t *)(lStack_38 + 0x3a8) | 2;
        cStack_20 = '\x01';
      }
    }
  }
  else {
    uStack_30 = *param_3;
    uStack_28 = param_3[1];
  }
  lVar6 = uStack_30;
  if (*(int64_t *)(uStack_30 + 0x138) == 0) {
    uVar3 = FUN_7fffa5588c90(param_1,param_2);
    uVar5 = FUN_7fffa4ecfe16(uVar3);
    return uVar5;
  }
  do {
    uVar2 = *param_1;
    uVar7 = (uint32_t)uVar2;
    param_1 = param_1 + 1;
    uVar1 = *param_2;
    uVar8 = (uint32_t)uVar1;
    param_2 = param_2 + 1;
    if (uVar2 != uVar1) {
      if (uVar2 < 0x100) {
        uVar5 = (uint64_t)uVar2 & 0xff;
        if (((&UNK_7fffa56b4832)[uVar5 * 2] & 1) != 0) {
          uVar5 = (uint64_t)*(uint8_t *)(uVar5 + *(int64_t *)(lVar6 + 0x110));
        }
        uVar2 = (uint16_t)uVar5;
      }
      else {
        uVar2 = FUN_7fffa4eca6f8(uVar2,&uStack_30);
        lVar6 = uStack_30;
      }
      uVar7 = (uint32_t)uVar2;
      if (uVar2 != uVar1) {
        if (uVar1 < 0x100) {
          uVar5 = (uint64_t)uVar1 & 0xff;
          if (((&UNK_7fffa56b4832)[uVar5 * 2] & 1) != 0) {
            uVar5 = (uint64_t)*(uint8_t *)(uVar5 + *(int64_t *)(lVar6 + 0x110));
          }
          uVar2 = (uint16_t)uVar5;
        }
        else {
          uVar2 = FUN_7fffa4eca6f8(uVar1,&uStack_30);
          lVar6 = uStack_30;
        }
        uVar8 = (uint32_t)uVar2;
      }
    }
  } while ((uVar7 - uVar8 == 0) && (uVar7 != 0));
  if (cStack_20 != '\0') {
    *(uint32_t *)(lStack_38 + 0x3a8) = *(uint32_t *)(lStack_38 + 0x3a8) & 0xfffffffd;
  }
  return (uint64_t)(uVar7 - uVar8);
}


// ============================================================================
// Function : FUN_7fffa4ecfd4b  |  RVA: 0x75fd4b  |  Size: 203 bytes
// Callers  : none
// Callees  : FUN_7fffa4eca6f8@0x75a6f8
// ============================================================================
int FUN_7fffa4ecfd4b(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                    int64_t param_5,uint64_t param_6,char param_7)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  uint16_t *unaff_RBP;
  uint16_t *unaff_RSI;
  uint32_t uVar5;
  int64_t lStackX_20;
  
  do {
    uVar2 = *unaff_RBP;
    uVar4 = (uint32_t)uVar2;
    unaff_RBP = unaff_RBP + 1;
    uVar1 = *unaff_RSI;
    uVar5 = (uint32_t)uVar1;
    unaff_RSI = unaff_RSI + 1;
    if (uVar2 != uVar1) {
      if (uVar2 < 0x100) {
        uVar3 = (uint64_t)uVar2 & 0xff;
        if (((&UNK_7fffa56b4832)[uVar3 * 2] & 1) != 0) {
          uVar3 = (uint64_t)*(uint8_t *)(uVar3 + *(int64_t *)(param_2 + 0x110));
        }
        uVar2 = (uint16_t)uVar3;
      }
      else {
        uVar2 = FUN_7fffa4eca6f8(uVar2,&param_5);
        param_2 = param_5;
      }
      uVar4 = (uint32_t)uVar2;
      if (uVar2 != uVar1) {
        if (uVar1 < 0x100) {
          uVar3 = (uint64_t)uVar1 & 0xff;
          if (((&UNK_7fffa56b4832)[uVar3 * 2] & 1) != 0) {
            uVar3 = (uint64_t)*(uint8_t *)(uVar3 + *(int64_t *)(param_2 + 0x110));
          }
          uVar2 = (uint16_t)uVar3;
        }
        else {
          uVar2 = FUN_7fffa4eca6f8(uVar1,&param_5);
          param_2 = param_5;
        }
        uVar5 = (uint32_t)uVar2;
      }
    }
  } while ((uVar4 - uVar5 == 0) && (uVar4 != 0));
  if (param_7 != '\0') {
    *(uint32_t *)(lStackX_20 + 0x3a8) = *(uint32_t *)(lStackX_20 + 0x3a8) & 0xfffffffd;
  }
  return uVar4 - uVar5;
}


// ============================================================================
// Function : FUN_7fffa4ecfe16  |  RVA: 0x75fe16  |  Size: 28 bytes
// Callers  : FUN_7fffa4ecfc70@0x75fc70
// Callees  : none
// ============================================================================
uint32_t FUN_7fffa4ecfe16(uint32_t param_1)

{
  int64_t lStackX_20;
  char in_stack_00000038;
  
  if (in_stack_00000038 != '\0') {
    *(uint32_t *)(lStackX_20 + 0x3a8) = *(uint32_t *)(lStackX_20 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa4ecfe40  |  RVA: 0x75fe40  |  Size: 640 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4ecfe40(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  bRam00007fffa47bfb07 = 0;
  auRam00007fffa47bfb38 = (uint8_t  [16])0x0;
  auRam00007fffa47bfb28 = (uint8_t  [16])0x0;
  auRam00007fffa47bfb18 = (uint8_t  [16])0x0;
  uRam00007fffa47bfb48 = 0;
  uRam00007fffa47bfb56 = 0;
  uVar2 = rdtsc();
  uVar2 = (CONCAT44(0x7fff,(int)(uVar2 >> 0x20)) << 0x20 | uVar2 & 0xffffffff) * 0x46c455d587b3b77 +
          1;
  lVar1 = 0;
  do {
    lVar4 = (uVar2 & 0xffffffff) * 0x587b3b77 +
            ((uVar2 & 0xffffffff) * 0x46c455d + (uVar2 >> 0x20) * 0x587b3b77 << 0x20) + 1;
    lVar3 = lVar4 * 0x46c455d587b3b77 + 1;
    *(char *)(lVar1 + 0x7fffa47bfb00) = (char)((uint64_t)lVar4 >> 0x20);
    uVar2 = lVar3 * 0x46c455d587b3b77 + 1;
    *(char *)(lVar1 + 0x7fffa47bfb02) = (char)(uVar2 >> 0x20);
    *(char *)(lVar1 + 0x7fffa47bfb01) = (char)((uint64_t)lVar3 >> 0x20);
    lVar1 = lVar1 + 3;
  } while (lVar1 != 99);
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47bfb07 * 0x24924925 + 0x24924925) * 7;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa47bfb18) = ~uRam00007fffa47bfb56;
  bRam00007fffa47bfb07 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4ed00c0  |  RVA: 0x7600c0  |  Size: 677 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4ed00c0(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  uRam00007fffa47866b9 = 0;
  uRam00007fffa478669f = 0;
  uRam00007fffa47866a7 = 0;
  uRam00007fffa478668f = 0;
  uRam00007fffa4786697 = 0;
  uRam00007fffa47866af = 0;
  uVar1 = rdtsc();
  lVar4 = (uVar1 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar1)) * 0xe6a4d5454cd7881;
  lVar3 = 5;
  while( true ) {
    *(char *)(lVar3 + 0x7fffa4786683) = (char)((uint64_t)(lVar4 * 0x5454cd7881) >> 0x20);
    *(char *)(lVar3 + 0x7fffa4786684) = (char)((uint64_t)(lVar4 * 0xa6df533101) >> 0x20);
    *(char *)(lVar3 + 0x7fffa4786685) = (char)((uint64_t)(lVar4 * 0xcc19b12981) >> 0x20);
    if (lVar3 == 0x3b) break;
    *(char *)(lVar3 + 0x7fffa4786687) = (char)((uint64_t)(lVar4 * 0xf4d675da81) >> 0x20);
    *(char *)(lVar3 + 0x7fffa4786686) = (char)((uint64_t)(lVar4 * 0xb48e076201) >> 0x20);
    lVar4 = lVar4 * -0x5c3853b262e36cff;
    *(char *)(lVar3 + 0x7fffa4786688) = (char)((uint64_t)lVar4 >> 0x20);
    lVar3 = lVar3 + 6;
  }
  bVar2 = (char)uRam00007fffa478668f + 1;
  *(uint64_t *)((uint64_t)(bVar2 & 3) * 8 + 0x7fffa4786690) = uRam00007fffa47866b9;
  uRam00007fffa478668f = CONCAT71(uRam00007fffa478668f._1_7_,bVar2) & 0xffffffffffffff03;
  return;
}


// ============================================================================
// Function : FUN_7fffa4ed0370  |  RVA: 0x760370  |  Size: 3611 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa4ed0370(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4
                          ,uint64_t *param_5,int64_t param_6)

{
  uint64_t *puVar1;
  char *pcVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint16_t uVar10;
  uint32_t uVar11;
  int64_t in_RAX;
  uint32_t uVar12;
  uint32_t uVar13;
  uint64_t *puVar14;
  int iVar15;
  int64_t lVar16;
  uint32_t uVar17;
  int64_t lVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  int64_t lVar21;
  int64_t lVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t *puVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint32_t uVar29;
  int iVar30;
  uint64_t *puVar31;
  uint64_t uVar32;
  uint64_t *puVar33;
  uint64_t uVar34;
  uint64_t *puVar35;
  int64_t lVar36;
  uint64_t *puVar37;
  char cVar38;
  uint8_t bVar39;
  uint8_t uVar42;
  uint8_t bVar44;
  uint8_t uVar45;
  uint8_t bVar47;
  uint8_t uVar48;
  uint8_t bVar50;
  uint8_t auVar40 [16];
  char cVar43;
  char cVar46;
  char cVar49;
  uint8_t auVar41 [16];
  uint8_t auVar51 [16];
  uint8_t uStack_198;
  uint32_t auStack_178 [66];
  uint64_t *puStack_70;
  uint64_t *puStack_68;
  uint64_t *puStack_60;
  uint32_t uStack_54;
  uint64_t uStack_50;
  int64_t lStack_48;
  
  puStack_70 = (uint64_t *)param_4;
  uVar27 = param_6 * -0x71c71c71c71c71c7;
  puVar31 = (uint64_t *)((in_RAX << 0x30) + in_RAX);
  uVar27 = (uVar27 << 0x26 | uVar27 >> 0x1a) ^ (uVar27 << 0x37 | uVar27 >> 9) ^ uVar27;
  uVar27 = (uVar27 << 0x2e | uVar27 >> 0x12) ^ (uVar27 << 0xc | uVar27 >> 0x34) ^ uVar27;
  uVar27 = (uVar27 << 0x18 | uVar27 >> 0x28) ^ (uVar27 << 0x1c | uVar27 >> 0x24) ^ uVar27;
  uVar27 = (uVar27 << 0x38 | uVar27 >> 8) ^ (uVar27 << 0x30 | uVar27 >> 0x10) ^ uVar27;
  uVar27 = (uVar27 << 0x30 | uVar27 >> 0x10) ^ (uVar27 << 0x20 | uVar27 >> 0x20) ^ uVar27;
  uVar19 = uVar27 << 0x20 | uVar27 >> 0x20;
  puVar20 = (uint64_t *)(uVar19 + 0x23f9d648);
  uVar27 = *param_5;
  puVar7 = *(uint64_t **)(param_3 + 0xf8);
  lVar8 = *(int64_t *)(param_3 + 8);
  uVar32 = (int64_t)param_5 - lVar8;
  uVar12 = 4;
  if (*(uint32_t *)(param_3 + 0x10c) < 4) {
    uVar12 = *(uint32_t *)(param_3 + 0x10c);
  }
  uVar17 = 1 << ((uint8_t)uVar12 & 0x1f);
  uVar12 = *(uint32_t *)(param_3 + 0x1c);
  uVar29 = (uint32_t)uVar32;
  uVar11 = 1 << (*(uint8_t *)(param_3 + 0x100) & 0x1f);
  uVar28 = uVar27 * -0x30e4432345000000 >> (0x38U - *(char *)((int64_t)puVar7 + 0x34) & 0x3f);
  uVar23 = (uint64_t)((uint32_t)(uVar28 >> 4) & 0xffffff0);
  lVar36 = *(int64_t *)(param_3 + 0x38);
  uVar5 = *(uint32_t *)(param_3 + 0x18);
  puStack_68 = (uint64_t *)puVar7[7];
  uVar24 = *(uint64_t *)(param_3 + 0x60);
  iVar15 = *(int *)(param_3 + 0x34);
  lVar16 = *(int64_t *)(param_3 + 0x70);
  lStack_48 = puVar7[0xe];
  uVar13 = uVar29 - uVar11;
  if (uVar29 - uVar12 <= uVar11) {
    uVar13 = uVar12;
  }
  if (*(int *)(param_3 + 0x28) != 0) {
    uVar13 = uVar12;
  }
  puStack_60 = (uint64_t *)(uint64_t)uVar13;
  cVar38 = (char)iVar15;
  if (*(int *)(param_3 + 300) == 0) {
    uVar12 = *(uint32_t *)(param_3 + 0x2c);
    uVar27 = (uint64_t)uVar12;
    lVar21 = lVar16;
    lVar22 = lVar36;
    if (0x180 < uVar29 - uVar12) {
      if (uVar12 < 0xffffffa0) {
        uVar34 = uVar27 + 0x60;
        do {
          uVar13 = (uint32_t)uVar27;
          plVar4 = (int64_t *)(lVar8 + 8 + uVar27);
          uVar26 = (uint64_t)(uVar13 & 7);
          uVar27 = uVar27 + 1;
          uVar12 = *(uint32_t *)(param_3 + 0x40 + uVar26 * 4);
          *(int *)(param_3 + 0x40 + uVar26 * 4) =
               (int)((*plVar4 * -0x30e4432345000000 ^ *(uint64_t *)(param_3 + 0x60)) >>
                    (uint64_t)(0x38 - iVar15));
          uVar26 = (uint64_t)(uVar12 >> 4 & 0xfffffff0);
          lVar22 = 0;
          if ((*(uint8_t *)(lVar36 + uVar26) & 0xf) == 1) {
            lVar22 = 0xf;
          }
          lVar22 = lVar22 + (uint64_t)(*(uint8_t *)(lVar36 + uVar26) - 1 & 0xf);
          *(char *)(lVar36 + uVar26) = (char)lVar22;
          *(char *)(lVar36 + uVar26 + lVar22) = (char)uVar12;
          *(uint32_t *)(uVar26 * 4 + lVar16 + lVar22 * 4) = uVar13;
        } while (uVar34 != uVar27);
        lVar22 = *(int64_t *)(param_3 + 0x38);
        lVar21 = *(int64_t *)(param_3 + 0x70);
      }
      uVar12 = uVar29 - 0x20;
      uVar27 = (uint64_t)uVar12;
      plVar4 = (int64_t *)(lVar8 + uVar27);
      uVar11 = ((int)(int64_t *)((int64_t)param_5 + 1U) - (int)plVar4) + 1;
      uVar13 = 8;
      if (uVar11 < 8) {
        uVar13 = uVar11;
      }
      uVar11 = 0;
      if (plVar4 <= (int64_t *)((int64_t)param_5 + 1U)) {
        uVar11 = uVar13;
      }
      if (uVar12 < uVar11 + uVar12) {
        uVar34 = *(uint64_t *)(param_3 + 0x60);
        uVar13 = 0x38 - *(int *)(param_3 + 0x34);
        bVar39 = (uint8_t)uVar13;
        if ((uVar11 & 1) != 0) {
          uVar27 = uVar27 + 1;
          *(int *)(param_3 + 0x40 + (uint64_t)(uVar12 & 7) * 4) =
               (int)((uVar34 ^ *plVar4 * -0x30e4432345000000) >> (bVar39 & 0x3f));
        }
        if (uVar11 != 1) {
          uStack_54 = uVar17;
          iVar15 = (uVar11 + uVar12) - (int)uVar27;
          uStack_50 = (uint64_t)uVar13;
          do {
            bVar44 = (uint8_t)param_4 & 0x1f;
            uVar26 = *(int64_t *)(lVar8 + uVar27) * -0x30e4432345000000 ^ uVar34;
            uVar11 = 0x6c3c487d - (int)param_4;
            iVar30 = (int)(uVar26 >> (bVar39 & 0x3f));
            if ((-0x1165e50 << bVar44 | 0xfee9a1b0U >> 0x20 - bVar44) <
                (uVar11 * 0x40000000 | uVar11 >> 2)) {
              iVar30 = (int)uVar26 - uVar13;
            }
            *(int *)(param_3 + 0x40 + (uint64_t)((uint32_t)uVar27 & 7) * 4) = iVar30;
            *(int *)(param_3 + 0x40 + (uint64_t)((uint32_t)uVar27 + 1 & 7) * 4) =
                 (int)((*(int64_t *)(lVar8 + 1 + uVar27) * -0x30e4432345000000 ^ uVar34) >>
                      (bVar39 & 0x3f));
            uVar27 = uVar27 + 2;
            iVar15 = iVar15 + -2;
          } while (iVar15 != 0);
        }
      }
    }
    if (uVar12 < uVar29) {
      lVar9 = *(int64_t *)(param_3 + 8);
      uVar27 = (uint64_t)uVar12;
      uVar6 = *(uint32_t *)(param_3 + 0x34);
      do {
        uVar13 = (uint32_t)uVar27;
        uVar34 = (uint64_t)(uVar13 & 7);
        plVar4 = (int64_t *)(lVar9 + 8 + uVar27);
        uVar27 = uVar27 + 1;
        uVar12 = *(uint32_t *)(param_3 + 0x40 + uVar34 * 4);
        *(int *)(param_3 + 0x40 + uVar34 * 4) =
             (int)((*plVar4 * -0x30e4432345000000 ^ *(uint64_t *)(param_3 + 0x60)) >>
                  (0x38U - (char)uVar6 & 0x3f));
        uVar34 = (uint64_t)(uVar12 >> 4 & 0xfffffff0);
        lVar18 = 0;
        if ((*(uint8_t *)(lVar22 + uVar34) & 0xf) == 1) {
          lVar18 = 0xf;
        }
        lVar18 = (uint64_t)(*(uint8_t *)(lVar22 + uVar34) - 1 & 0xf) + lVar18;
        *(char *)(lVar22 + uVar34) = (char)lVar18;
        *(char *)(lVar22 + uVar34 + lVar18) = (char)uVar12;
        *(uint32_t *)(lVar21 + uVar34 * 4 + lVar18 * 4) = uVar13;
      } while (uVar27 != (uVar32 & 0xffffffff));
    }
    *(uint32_t *)(param_3 + 0x2c) = uVar29;
    uVar12 = *(uint32_t *)(param_3 + 0x40 + (uint64_t)(uVar29 & 7) * 4);
    *(int *)(param_3 + 0x40 + (uint64_t)(uVar29 & 7) * 4) =
         (int)((*(int64_t *)(lVar8 + 8 + (uVar32 & 0xffffffff)) * -0x30e4432345000000 ^ uVar24) >>
              (0x38U - cVar38 & 0x3f));
  }
  else {
    *(uint32_t *)(param_3 + 0x2c) = uVar29;
    uVar12 = (uint32_t)((uVar27 * -0x30e4432345000000 ^ uVar24) >> (0x38U - cVar38 & 0x3f));
  }
  uVar48 = (uint8_t)(uVar12 >> 0x18);
  uVar45 = (uint8_t)(uVar12 >> 0x10);
  uVar42 = (uint8_t)(uVar12 >> 8);
  auVar41._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar48,uVar48),uVar45),CONCAT14(uVar45,uVar12)) >> 0x20);
  auVar41[3] = uVar42;
  auVar41[2] = uVar42;
  auVar41[0] = (uint8_t)uVar12;
  auVar41[1] = auVar41[0];
  auVar41._8_8_ = 0;
  auVar40 = pshuflw(auVar41,auVar41,0);
  *(int *)(param_3 + 0x68) = *(int *)(param_3 + 0x68) + uVar12;
  uVar27 = (uint64_t)(uVar12 >> 4 & 0xfffffff0);
  lVar16 = uVar27 * 4 + lVar16;
  bVar39 = *(uint8_t *)(lVar36 + uVar27);
  pcVar2 = (char *)(lVar36 + uVar27);
  cVar38 = auVar40[0];
  auVar51[0] = -(*pcVar2 == cVar38);
  cVar43 = auVar40[1];
  auVar51[1] = -(pcVar2[1] == cVar43);
  cVar46 = auVar40[2];
  auVar51[2] = -(pcVar2[2] == cVar46);
  cVar49 = auVar40[3];
  auVar51[3] = -(pcVar2[3] == cVar49);
  auVar51[4] = -(pcVar2[4] == cVar38);
  auVar51[5] = -(pcVar2[5] == cVar43);
  auVar51[6] = -(pcVar2[6] == cVar46);
  auVar51[7] = -(pcVar2[7] == cVar49);
  auVar51[8] = -(pcVar2[8] == cVar38);
  auVar51[9] = -(pcVar2[9] == cVar43);
  auVar51[10] = -(pcVar2[10] == cVar46);
  auVar51[0xb] = -(pcVar2[0xb] == cVar49);
  auVar51[0xc] = -(pcVar2[0xc] == cVar38);
  auVar51[0xd] = -(pcVar2[0xd] == cVar43);
  auVar51[0xe] = -(pcVar2[0xe] == cVar46);
  auVar51[0xf] = -(pcVar2[0xf] == cVar49);
  uVar10 = (uint16_t)(SUB161(auVar51 >> 7,0) & 1) | (uint16_t)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
           (uint16_t)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
           (uint16_t)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
           (uint16_t)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
           (uint16_t)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
           (uint16_t)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
           (uint16_t)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
           (uint16_t)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
           (uint16_t)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
           (uint16_t)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
           (uint16_t)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
           (uint16_t)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
           (uint16_t)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
           (uint16_t)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar51[0xf] >> 7) << 0xf;
  if (uVar10 == 0) {
    uVar32 = 0;
  }
  else {
    uVar24 = (uint64_t)(uint16_t)(uVar10 >> (bVar39 & 0xf) | uVar10 << 0x10 - (bVar39 & 0xf));
    uVar32 = 0;
    do {
      iVar15 = 0;
      for (uVar34 = uVar24; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x8000000000000000) {
        iVar15 = iVar15 + 1;
      }
      uVar12 = iVar15 + (uint32_t)bVar39 & 0xf;
      if (uVar12 != 0) {
        uVar12 = *(uint32_t *)(lVar16 + (uint64_t)uVar12 * 4);
        if (uVar12 < (uint32_t)puStack_60) break;
        uVar17 = uVar17 - 1;
        auStack_178[uVar32] = uVar12;
        uVar32 = uVar32 + 1;
      }
      uVar24 = uVar24 & uVar24 - 1;
      bVar44 = (uint8_t)puStack_70 & 0xf;
    } while (uVar24 != 0 && uVar17 != (uint16_t)(0 << bVar44 | 0U >> 0x10 - bVar44));
  }
  puStack_68 = (uint64_t *)((int64_t)puStack_68 + uVar23);
  lVar22 = 0;
  if ((bVar39 & 0xf) == 1) {
    lVar22 = 0xf;
  }
  lVar22 = lVar22 + (uint64_t)(bVar39 - 1 & 0xf);
  *(uint8_t *)(lVar36 + uVar27) = (char)lVar22;
  ((uint8_t *)(lVar36 + uVar27))[lVar22] = auVar41[0];
  iVar15 = *(int *)(param_3 + 0x2c);
  *(int *)(param_3 + 0x2c) = iVar15 + 1;
  *(int *)(lVar16 + lVar22 * 4) = iVar15;
  uVar27 = 3;
  if (uVar32 != (0x4a1d - ((uint32_t)puStack_70 ^ 0x20dd) & 0xffff)) {
    uVar27 = 3;
    uVar24 = 0;
    puStack_60 = (uint64_t *)(uVar19 + 0x23f9d647);
    do {
      puVar25 = (uint64_t *)(lVar8 + (uint64_t)auStack_178[uVar24]);
      if (*(int *)((uVar27 - 3) + (int64_t)puVar25) == *(int *)((int64_t)param_5 + (uVar27 - 3)))
      {
        puVar33 = param_5;
        if (param_5 < (uint64_t *)(uVar19 + 0x23f9d641)) {
          if (*puVar25 == *param_5) {
            lVar36 = 8;
LAB_7fffa4ed0c10:
            puVar33 = (uint64_t *)((int64_t)param_5 + lVar36);
            if (puVar33 < (uint64_t *)(uVar19 + 0x23f9d641)) {
              if (*(uint64_t *)((int64_t)puVar25 + lVar36) == *puVar33) goto code_r0x7fffa4ed0c38;
              uVar12 = 0;
              for (uVar34 = *(uint64_t *)((int64_t)puVar25 + lVar36) ^ *puVar33; (uVar34 & 1) == 0
                  ; uVar34 = uVar34 >> 1 | 0x8000000000000000) {
                uVar12 = uVar12 + 1;
              }
              uVar26 = (uint64_t)(uVar12 >> 3) + lVar36;
              uVar34 = (int64_t)param_5 + uVar26;
              uVar34 = ((uVar34 >> 0x20) * ((uint64_t)param_5 & 0xffffffff) +
                        ((uint64_t)param_5 >> 0x20) * (uVar34 & 0xffffffff) << 0x20) +
                       ((uint64_t)param_5 & 0xffffffff) * (uVar34 & 0xffffffff);
              if (((uint32_t)puStack_70 | 1) * 0x74d8b053 <= 0xd18dd841 - (uint32_t)puStack_70) {
                uVar34 = uVar26;
              }
              goto joined_r0x7fffa4ed0d6d;
            }
            puVar25 = (uint64_t *)((int64_t)puVar25 + lVar36);
            goto joined_r0x7fffa4ed0c4e;
          }
          uVar12 = 0;
          for (uVar34 = *puVar25 ^ *param_5; (uVar34 & 1) == 0;
              uVar34 = uVar34 >> 1 | 0x8000000000000000) {
            uVar12 = uVar12 + 1;
          }
          uVar34 = (uint64_t)(uVar12 >> 3);
        }
        else {
joined_r0x7fffa4ed0c4e:
          if ((puVar33 < (uint64_t *)(uVar19 + 0x23f9d645)) && ((int)*puVar25 == (int)*puVar33)) {
            puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
          }
          if ((puVar33 < (uint64_t *)(uVar19 + 0x23f9d647)) && ((short)*puVar25 == (short)*puVar33)
             ) {
            puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
          }
          if (puVar33 < puVar20) {
            puVar33 = (uint64_t *)
                      ((int64_t)puVar33 + (uint64_t)((char)*puVar25 == (char)*puVar33));
          }
          uVar34 = (int64_t)puVar33 - (int64_t)param_5;
        }
joined_r0x7fffa4ed0d6d:
        if (uVar27 < uVar34) {
          *puVar31 = (uint64_t)((uVar29 + 3) - auStack_178[uVar24]);
          uVar27 = uVar34;
          if ((uint64_t *)((int64_t)param_5 + uVar34) == puVar20) break;
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar32);
  }
  uStack_198 = (uint8_t)uVar28;
  auVar41 = pshuflw(ZEXT216(CONCAT11(uStack_198,uStack_198)),
                    ZEXT216(CONCAT11(uStack_198,uStack_198)),0);
  bVar39 = auVar41[0];
  auVar40[0] = -(*(uint8_t *)puStack_68 == bVar39);
  bVar44 = auVar41[1];
  auVar40[1] = -(*(uint8_t *)((int64_t)puStack_68 + 1) == bVar44);
  bVar47 = auVar41[2];
  auVar40[2] = -(*(uint8_t *)((int64_t)puStack_68 + 2) == bVar47);
  bVar50 = auVar41[3];
  auVar40[3] = -(*(uint8_t *)((int64_t)puStack_68 + 3) == bVar50);
  auVar40[4] = -(*(uint8_t *)((int64_t)puStack_68 + 4) == bVar39);
  auVar40[5] = -(*(uint8_t *)((int64_t)puStack_68 + 5) == bVar44);
  auVar40[6] = -(*(uint8_t *)((int64_t)puStack_68 + 6) == bVar47);
  auVar40[7] = -(*(uint8_t *)((int64_t)puStack_68 + 7) == bVar50);
  auVar40[8] = -(*(uint8_t *)((int64_t)puStack_68 + 8) == bVar39);
  auVar40[9] = -(*(uint8_t *)((int64_t)puStack_68 + 9) == bVar44);
  auVar40[10] = -(*(uint8_t *)((int64_t)puStack_68 + 10) == bVar47);
  auVar40[0xb] = -(*(uint8_t *)((int64_t)puStack_68 + 0xb) == bVar50);
  auVar40[0xc] = -(*(uint8_t *)((int64_t)puStack_68 + 0xc) == bVar39);
  auVar40[0xd] = -(*(uint8_t *)((int64_t)puStack_68 + 0xd) == bVar44);
  auVar40[0xe] = -(*(uint8_t *)((int64_t)puStack_68 + 0xe) == bVar47);
  auVar40[0xf] = -(*(uint8_t *)((int64_t)puStack_68 + 0xf) == bVar50);
  uVar10 = (uint16_t)(SUB161(auVar40 >> 7,0) & 1) | (uint16_t)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
  if ((uVar10 != 0) && (uVar17 != (0x6ac0 - (uint32_t)puStack_70 & 0xffff))) {
    puVar25 = (uint64_t *)(lVar8 + (uint64_t)uVar5);
    pcVar2 = (char *)*puVar7;
    lVar8 = puVar7[1];
    puStack_60 = (uint64_t *)pcVar2;
    bVar39 = *(uint8_t *)puStack_68;
    bVar44 = bVar39 & 0xf;
    uVar12 = *(uint32_t *)(puVar7 + 3);
    uVar32 = (uint64_t)(uint16_t)(uVar10 >> bVar44 | uVar10 << 0x10 - bVar44);
    uVar24 = 0;
    do {
      iVar15 = 0;
      for (uVar28 = uVar32; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x8000000000000000) {
        iVar15 = iVar15 + 1;
      }
      uVar13 = iVar15 + (uint32_t)bVar39 & 0xf;
      if (uVar13 != 0) {
        uVar13 = *(uint32_t *)(lStack_48 + uVar23 * 4 + (uint64_t)uVar13 * 4);
        if (uVar13 < uVar12) goto LAB_7fffa4ed0e98;
        uVar28 = uVar24 + 1;
        auStack_178[uVar24] = uVar13;
        bVar44 = (uint8_t)puStack_70 & 0x1f;
        uVar24 = uVar24 | 1;
        if ((0x568aa197U >> bVar44 | 0x568aa197 << 0x20 - bVar44) == 0x568aa197) {
          uVar24 = uVar28;
        }
        uVar17 = uVar17 - 1;
      }
      uVar32 = uVar32 & uVar32 - 1;
      if ((uVar32 == 0) || (uVar17 == 0)) goto LAB_7fffa4ed0e98;
    } while( true );
  }
  goto LAB_7fffa4ed1183;
code_r0x7fffa4ed0c38:
  lVar36 = lVar36 + 8;
  goto LAB_7fffa4ed0c10;
code_r0x7fffa4ed0f90:
  lVar16 = lVar16 + 8;
  goto LAB_7fffa4ed0f70;
code_r0x7fffa4ed1085:
  puVar14 = puVar14 + 1;
  lVar36 = lVar36 + 8;
  if (puVar33 <= puVar14) goto LAB_7fffa4ed109a;
  goto LAB_7fffa4ed1070;
LAB_7fffa4ed0e98:
  if (uVar24 != 0) {
    puVar33 = (uint64_t *)(uVar19 + 0x23f9d641);
    puStack_70 = (uint64_t *)(uVar19 + 0x23f9d647);
    puStack_68 = (uint64_t *)(uVar19 + 0x23f9d645);
    iVar15 = (int)*param_5;
    puVar3 = (uint64_t *)((int64_t)param_5 + 4);
    uVar23 = 0;
    uVar32 = uVar27;
    do {
      uVar12 = auStack_178[uVar23];
      if (*(int *)(lVar8 + (uint64_t)uVar12) == iVar15) {
        lVar36 = lVar8 + (uint64_t)uVar12;
        puVar1 = (uint64_t *)(lVar36 + 4);
        puVar14 = (uint64_t *)(((int64_t)puStack_60 - (int64_t)puVar1) + (int64_t)puVar3);
        if (puVar20 <= puVar14) {
          puVar14 = puVar20;
        }
        puVar37 = puVar1;
        puVar35 = puVar3;
        if (puVar3 < (uint64_t *)((int64_t)puVar14 - 7U)) {
          if (*puVar1 == *puVar3) {
            lVar16 = 0xc;
LAB_7fffa4ed0f70:
            puVar35 = (uint64_t *)((int64_t)param_5 + lVar16);
            if (puVar35 < (uint64_t *)((int64_t)puVar14 - 7U)) {
              if (*(uint64_t *)(lVar36 + lVar16) == *puVar35) goto code_r0x7fffa4ed0f90;
              uVar13 = 0;
              for (uVar27 = *puVar35 ^ *(uint64_t *)(lVar36 + lVar16); (uVar27 & 1) == 0;
                  uVar27 = uVar27 >> 1 | 0x8000000000000000) {
                uVar13 = uVar13 + 1;
              }
              uVar27 = ((uint64_t)(uVar13 >> 3) + lVar16) - 4;
              goto LAB_7fffa4ed1024;
            }
            puVar37 = (uint64_t *)(lVar36 + lVar16);
            goto LAB_7fffa4ed0fa1;
          }
          uVar13 = 0;
          for (uVar27 = *puVar3 ^ *puVar1; (uVar27 & 1) == 0;
              uVar27 = uVar27 >> 1 | 0x8000000000000000) {
            uVar13 = uVar13 + 1;
          }
          uVar27 = (uint64_t)(uVar13 >> 3);
        }
        else {
LAB_7fffa4ed0fa1:
          if ((puVar35 < (uint64_t *)((int64_t)puVar14 - 3U)) && ((int)*puVar37 == (int)*puVar35))
          {
            puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
            puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
          }
          if ((puVar35 < (uint64_t *)((int64_t)puVar14 - 1U)) &&
             ((short)*puVar37 == (short)*puVar35)) {
            puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
            puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
          }
          if (puVar35 < puVar14) {
            puVar35 = (uint64_t *)
                      ((int64_t)puVar35 + (uint64_t)((char)*puVar37 == (char)*puVar35));
          }
          uVar27 = (int64_t)puVar35 - (int64_t)puVar3;
        }
LAB_7fffa4ed1024:
        if ((uint64_t *)((int64_t)puVar1 + uVar27) == puStack_60) {
          puVar1 = (uint64_t *)(uVar27 + (int64_t)puVar3);
          puVar14 = puVar1;
          puVar37 = puVar25;
          if (puVar1 < puVar33) {
            if (*puVar25 == *puVar1) {
              puVar14 = (uint64_t *)((int64_t)param_5 + uVar27 + 0xc);
              lVar36 = 8;
              if (puVar14 < puVar33) {
LAB_7fffa4ed1070:
                if (*(uint64_t *)((int64_t)puVar25 + lVar36) == *puVar14)
                goto code_r0x7fffa4ed1085;
                uVar13 = 0;
                for (uVar28 = *(uint64_t *)((int64_t)puVar25 + lVar36) ^ *puVar14;
                    (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x8000000000000000) {
                  uVar13 = uVar13 + 1;
                }
                uVar28 = (uint64_t)(uVar13 >> 3) + lVar36;
                goto LAB_7fffa4ed1142;
              }
LAB_7fffa4ed109a:
              puVar37 = (uint64_t *)(lVar36 + (int64_t)puVar25);
              goto LAB_7fffa4ed109f;
            }
            uVar13 = 0;
            for (uVar28 = *puVar1 ^ *puVar25; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar28 = (uint64_t)(uVar13 >> 3);
          }
          else {
LAB_7fffa4ed109f:
            if ((puVar14 < (uint64_t *)(uVar19 + 0x23f9d645)) && ((int)*puVar37 == (int)*puVar14))
            {
              puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
              puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
            }
            if ((puVar14 < (uint64_t *)(uVar19 + 0x23f9d647)) &&
               ((short)*puVar37 == (short)*puVar14)) {
              puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
              puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
            }
            if (puVar14 < puVar20) {
              puVar14 = (uint64_t *)
                        ((int64_t)puVar14 + (uint64_t)((char)*puVar37 == (char)*puVar14));
            }
            uVar28 = (int64_t)puVar14 - (int64_t)puVar1;
          }
LAB_7fffa4ed1142:
          uVar27 = uVar27 + uVar28;
        }
        uVar27 = uVar27 + 4;
        if (uVar32 < uVar27) {
          *puVar31 = (uint64_t)(((uVar29 - uVar5) + ((int)pcVar2 - (int)lVar8) + 3) - uVar12);
          if ((uint64_t *)((int64_t)param_5 + uVar27) == puVar20) break;
          iVar15 = (int)*param_5;
          uVar32 = uVar27;
        }
      }
      uVar27 = uVar32;
      uVar23 = uVar23 + 1;
      uVar32 = uVar27;
    } while (uVar23 != uVar24);
  }
LAB_7fffa4ed1183:
  return uVar27 >> 0xe ^ uVar27;
}


// ============================================================================
// Function : FUN_7fffa4ed11b0  |  RVA: 0x7611b0  |  Size: 1454 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa4ed17fd) overlaps instruction at (ram,0x7fffa4ed17fa)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed1615) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed17f2) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed17ea) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ed17fa) */

void FUN_7fffa4ed11b0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  uRam00007fffa4785fa8 = 0x882d00793db3d3ea;
  uRam00007fffa4785fb0 = 0xfd23d74ace1195b2;
  uVar1 = -lRam00007fffa4781568;
  uVar1 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  uVar1 = (uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2;
  uRam00007fffa4785fc0 = 0xfccfc9659bdc05a9;
  uVar3 = 0x90f9b63faeb6a97e - (int64_t)(&UNK_7fffa578a4a0 + lRam00007fffa4780b50);
  uVar3 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
          (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
          (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f) << 4 | uVar3 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333) * 4;
  uVar2 = ~uRam00007fffa47816b8;
  uRam00007fffa4785fd0 =
       (uVar2 & 0xd43b000000142483) * -0x7ffffffefffffffe +
       ((uRam00007fffa47816b8 ^ 0xd43b67fc40177def) & 0xffff800117fca683) * 0x7ffffffea38829ba +
       (uVar2 & 0x2bc4800117e88200) * -0x4000000050491e62 +
       (uVar2 & 0x67fc4003596c) * 0x2fb6e19f +
       (uRam00007fffa47816b8 ^ 0x2bc4e7fd57ebdb6c) * -0x21cc8d16 +
       (uRam00007fffa47816b8 & 0x1802a8000010) * -0x3ffffffff3d1481e +
       (uVar2 & 0xd43b67fc40177def | 0xffff800117fca683) * 0x40000000dc77d645 +
       (uRam00007fffa47816b8 & 0xd43b000000142483) * -0x40000000baab492f +
       (((uRam00007fffa47816b8 ^ 0x2bc49803bfe88210) & 0x7ffee803597c) -
       (uVar2 & 0x2bc49803bfe88210 | 0x7ffee803597c)) * 0x6a622acd ^ 0xdc5b0c0c4bbc6a9a;
  uVar2 = lRam00007fffa4780b90 * 0x625ba50b4c539097 + 0x3e98ed49eadf7099;
  uVar2 = (uVar2 * 0x20000000 | uVar2 >> 0x23) ^ (uVar2 * 0x80000000 | uVar2 >> 0x21) ^ uVar2;
  uVar2 = (uVar2 << 0x3e | uVar2 >> 2) ^ (uVar2 << 0x3a | uVar2 >> 6) ^ uVar2;
  uVar2 = (uVar2 << 0x34 | uVar2 >> 0xc) ^ (uVar2 << 0x3c | uVar2 >> 4) ^ uVar2;
  uVar2 = (uVar2 << 0x28 | uVar2 >> 0x18) ^ (uVar2 << 0x38 | uVar2 >> 8) ^ uVar2;
  lRam00007fffa4785fd8 =
       lRam00007fffa4781448 +
       ((uVar2 << 0x30 | uVar2 >> 0x10) ^ (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar2);
  uVar2 = uRam00007fffa4780bf8 << 0x2a | uRam00007fffa4780bf8 >> 0x16;
  uVar2 = uVar2 << 0xb ^ uVar2;
  lRam00007fffa4785fe0 =
       ((uVar2 << 0x16 ^ uVar2 << 0x2c ^ uVar2) * -0x7f01fc07f01fc07f ^ 0x4532b75a2a1efb21) -
       lRam00007fffa4780cb0;
  uRam00007fffa4785fb8 = uVar1 << 0x31 | (uVar1 * 0x80000000 ^ uVar1 << 0x3e ^ uVar1) >> 0xf;
  lRam00007fffa4785fc8 =
       (uVar3 >> 1 & 0x5555555555555555) + (uVar3 & 0x5555555555555555) * 2 + -0x7fffa56be860;
  return;
}


// ============================================================================
// Function : FUN_7fffa4ed1810  |  RVA: 0x761810  |  Size: 114 bytes
// Callers  : none
// Callees  : FUN_7fffa54765d0@0xd065d0, FUN_7fffa5213cf0@0xaa3cf0
// ============================================================================
uint64_t FUN_7fffa4ed1810(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint64_t uVar3;
  
  puVar2 = *(uint32_t **)(param_4 + 0x38);
  uVar1 = *puVar2;
  FUN_7fffa5213cf0(param_2,param_4,puVar2 + (uint64_t)uVar1 * 4 + 1);
  if ((puVar2[(uint64_t)uVar1 * 4 + 1] & ((*(uint8_t *)(param_1 + 4) & 0x66) != 0) + 1) == 0) {
    return 1;
  }
  uVar3 = FUN_7fffa54765d0(param_1,param_2,param_3,param_4);
  return uVar3;
}


// ============================================================================
// Function : FUN_7fffa4ed1890  |  RVA: 0x761890  |  Size: 1825 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4ed1890(void) {
    /* +0x761890 */ __asm { PUSH RSI }
    /* +0x761891 */ __asm { PUSH R15 }
    /* +0x761893 */ __asm { PUSH RDI }
    /* +0x761894 */ __asm { PUSH RBX }
    /* +0x761895 */ __asm { PUSH R14 }
    /* +0x761897 */ __asm { PUSH R13 }
    /* +0x761899 */ __asm { SUB RSP,0x58 }
    /* +0x76189d */ __asm { MOV ECX,0x7d1fa186 }
    /* +0x7618a2 */ __asm { MOV R9D,0x3ce42362 }
    /* +0x7618a8 */ __asm { MOV R11,0x2028440211 }
    /* +0x7618b2 */ __asm { MOV RAX,RDX }
    /* +0x7618b5 */ __asm { ROL RAX,0xf }
    /* +0x7618b9 */ __asm { MOV R13D,0x10ef14fb }
    /* +0x7618bf */ __asm { ROL R8,0x11 }
    /* +0x7618c3 */ __asm { MOV R14D,0x28440212 }
    /* +0x7618c9 */ __asm { SUB R14,R11 }
    /* +0x7618cc */ __asm { IMUL R14,R8 }
    /* +0x7618d0 */ __asm { MOV RSI,R14 }
    /* +0x7618d3 */ __asm { SHL RSI,0x1d }
    /* +0x7618d7 */ __asm { MOV R11D,0xe97e3d4 }
    /* +0x7618dd */ __asm { IMUL EBX,ECX,-0x6f494d41 }
    /* +0x7618e3 */ __asm { ADD R13D,0x9527e6dd }
    /* +0x7618ea */ __asm { MOVD XMM0,R13D }
    /* +0x7618ef */ __asm { ADD R9D,0xc6c64815 }
    /* +0x7618f6 */ __asm { ROL R9D,0xd }
    /* +0x7618fa */ __asm { MOV RDI,RDX }
    /* +0x7618fd */ __asm { ROL RDI,0x26 }
    /* +0x761901 */ __asm { MOV ECX,R10D }
    /* +0x761904 */ __asm { ROR R9D,CL }
    /* +0x761907 */ __asm { MOVD XMM4,R10D }
    /* +0x76190c */ __asm { PXOR XMM4,XMM0 }
    /* +0x761910 */ __asm { MOVD ECX,XMM4 }
    /* +0x761914 */ __asm { ADD R11D,R10D }
    /* +0x761917 */ __asm { IMUL R8D,R11D,-0x3fffff73 }
    /* +0x76191e */ __asm { IMUL ECX,ECX,-0x45a02495 }
    /* +0x761924 */ __asm { MOVSXD R11,ECX }
    /* +0x761927 */ __asm { ADD EBX,R10D }
    /* +0x76192a */ __asm { ADD EBX,0x6f0a31c5 }
    /* +0x761930 */ __asm { XOR RDI,RAX }
    /* +0x761933 */ __asm { XOR RDI,RDX }
    /* +0x761936 */ __asm { MOV RAX,RDI }
    /* +0x761939 */ __asm { ROL RAX,0xc }
    /* +0x76193d */ __asm { MOV RCX,RDI }
    /* +0x761940 */ __asm { ROL RCX,0x1e }
    /* +0x761944 */ __asm { XOR RCX,RAX }
    /* +0x761947 */ __asm { XOR RCX,RDI }
    /* +0x76194a */ __asm { MOV RAX,RCX }
    /* +0x76194d */ __asm { ROL RAX,0x18 }
    /* +0x761951 */ __asm { MOVQ XMM0,RAX }
    /* +0x761956 */ __asm { MOV RAX,RCX }
    /* +0x761959 */ __asm { ROL RAX,0x3c }
    /* +0x76195d */ __asm { MOVQ XMM4,RAX }
    /* +0x761962 */ __asm { PXOR XMM4,XMM0 }
    /* +0x761966 */ __asm { MOVQ RDI,XMM4 }
    /* +0x76196b */ __asm { XOR RDI,RCX }
    /* +0x76196e */ __asm { MOV R13,RDI }
    /* +0x761971 */ __asm { ROL R13,0x38 }
    /* +0x761975 */ __asm { RDTSC }
    /* +0x761977 */ __asm { SHL RDX,0x20 }
    /* +0x76197b */ __asm { OR RDX,RAX }
    /* +0x76197e */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0x761988 */ __asm { IMUL RAX,RDX }
    /* +0x76198c */ __asm { MOV RDX,-0x22b18422c4a9c65e }
    /* +0x761996 */ __asm { ADD RDX,RAX }
    /* +0x761999 */ __asm { MOV RCX,RDX }
    /* +0x76199c */ __asm { MOV R15,RDI }
    /* +0x76199f */ __asm { ROL R15,0x30 }
    /* +0x7619a3 */ __asm { XOR R15,R13 }
    /* +0x7619a6 */ __asm { MOV RAX,RDX }
    /* +0x7619a9 */ __asm { SHR RAX,0x2d }
    /* +0x7619ad */ __asm { SHR RDX,0x1b }
    /* +0x7619b1 */ __asm { XOR R15,RDI }
    /* +0x7619b4 */ __asm { MOV R13,R15 }
    /* +0x7619b7 */ __asm { ROL R13,0x20 }
    /* +0x7619bb */ __asm { XOR EAX,EDX }
    /* +0x7619bd */ __asm { MOV RDI,R15 }
    /* +0x7619c0 */ __asm { ROL RDI,0x30 }
    /* +0x7619c4 */ __asm { XOR RDI,R13 }
    /* +0x7619c7 */ __asm { MOV RDX,R14 }
    /* +0x7619ca */ __asm { SHL RDX,0x3a }
    /* +0x7619ce */ __asm { SHR RCX,0x3b }
    /* +0x7619d2 */ __asm { ROR EAX,CL }
    /* +0x7619d4 */ __asm { XOR RDI,R15 }
    /* +0x7619d7 */ __asm { MOV RCX,RDI }
    /* +0x7619da */ __asm { ROL RCX,0x20 }
    /* +0x7619de */ __asm { XOR RDX,RSI }
    /* +0x7619e1 */ __asm { MOV RSI,RDI }
    /* +0x7619e4 */ __asm { ROL RSI,0x19 }
    /* +0x7619e8 */ __asm { XOR RDX,R14 }
    /* +0x7619eb */ __asm { ROL RDI,0x3d }
    /* +0x7619ef */ __asm { XOR RDI,RSI }
    /* +0x7619f2 */ __asm { XOR RDI,RCX }
    /* +0x7619f5 */ __asm { MOV RCX,RDI }
    /* +0x7619f8 */ __asm { ROL RCX,0x32 }
    /* +0x7619fc */ __asm { AND EAX,0x3 }
    /* +0x7619ff */ __asm { MOVQ XMM0,RDI }
    /* +0x761a04 */ __asm { ROL RDI,0x3a }
    /* +0x761a08 */ __asm { XOR RDI,RCX }
    /* +0x761a0b */ __asm { MOVQ XMM4,RDI }
    /* +0x761a10 */ __asm { PXOR XMM4,XMM0 }
    /* +0x761a14 */ __asm { MOVQ RCX,XMM4 }
    /* +0x761a19 */ __asm { MOV R14,RCX }
    /* +0x761a1c */ __asm { ROL R14,0x34 }
    /* +0x761a20 */ __asm { MOV RSI,RCX }
    /* +0x761a23 */ __asm { ROL RSI,0x24 }
    /* +0x761a27 */ __asm { XOR RSI,R14 }
    /* +0x761a2a */ __asm { XOR RSI,RCX }
    /* +0x761a2d */ __asm { MOV RCX,RSI }
    /* +0x761a30 */ __asm { ROL RCX,0x8 }
    /* +0x761a34 */ __asm { MOV R14,RSI }
    /* +0x761a37 */ __asm { ROL R14,0x28 }
    /* +0x761a3b */ __asm { XOR R14,RCX }
    /* +0x761a3e */ __asm { XOR R14,RSI }
    /* +0x761a41 */ __asm { MOV RCX,R14 }
    /* +0x761a44 */ __asm { ROL RCX,0x10 }
    /* +0x761a48 */ __asm { MOV RSI,RCX }
    /* +0x761a4b */ __asm { XOR RSI,R14 }
    /* +0x761a4e */ __asm { CMP RBX,R9 }
    /* +0x761a51 */ __asm { MOVQ XMM0,R14 }
    /* +0x761a56 */ __asm { MOVQ XMM4,RCX }
    /* +0x761a5b */ __asm { POR XMM0,XMM4 }
    /* +0x761a5f */ __asm { MOVQ R9,XMM0 }
    /* +0x761a64 */ __asm { CMOVC R9,RSI }
    /* +0x761a68 */ __asm { XOR RCX,R9 }
    /* +0x761a6b */ __asm { CMP R8,R11 }
    /* +0x761a6e */ __asm { MOVQ XMM0,R9 }
    /* +0x761a73 */ __asm { PAND XMM0,XMM4 }
    /* +0x761a77 */ __asm { MOVQ R11,XMM0 }
    /* +0x761a7c */ __asm { CMOVC R11,RCX }
    /* +0x761a80 */ __asm { MOV RCX,R11 }
    /* +0x761a83 */ __asm { ROL RCX,0x13 }
    /* +0x761a87 */ __asm { MOV R9,R11 }
    /* +0x761a8a */ __asm { ROL R9,0x2c }
    /* +0x761a8e */ __asm { XOR R9,RCX }
    /* +0x761a91 */ __asm { XOR R9,R11 }
    /* +0x761a94 */ __asm { MOV R11,R9 }
    /* +0x761a97 */ __asm { ROL R11,0x18 }
    /* +0x761a9b */ __asm { MOV RCX,R9 }
    /* +0x761a9e */ __asm { ROL RCX,0x26 }
    /* +0x761aa2 */ __asm { XOR RCX,R11 }
    /* +0x761aa5 */ __asm { XOR RCX,R9 }
    /* +0x761aa8 */ __asm { MOV R11,RCX }
    /* +0x761aab */ __asm { ROL R11,0x30 }
    /* +0x761aaf */ __asm { MOV R9,RCX }
    /* +0x761ab2 */ __asm { ROL R9,0xc }
    /* +0x761ab6 */ __asm { XOR R9,R11 }
    /* +0x761ab9 */ __asm { XOR R9,RCX }
    /* +0x761abc */ __asm { MOV R11,R9 }
    /* +0x761abf */ __asm { ROL R11,0x18 }
    /* +0x761ac3 */ __asm { MOV R14,R9 }
    /* +0x761ac6 */ __asm { ROL R14,0x20 }
    /* +0x761aca */ __asm { XOR R14,R11 }
    /* +0x761acd */ __asm { XOR R14,R9 }
    /* +0x761ad0 */ __asm { ROL R14,0x10 }
    /* +0x761ad4 */ __asm { CMP EAX,0x2 }
    /* +0x761ad7 */ __asm { JNC 0x7fffa4ed1b37 }
    /* +0x761ad9 */ __asm { CMP EAX,0x1 }
    /* +0x761adc */ __asm { JZ 0x7fffa4ed1c0f }
    /* +0x761ae2 */ __asm { LEA R9,[0x7fffa47b7624] }
    /* +0x761ae9 */ __asm { MOV RAX,R9 }
    /* +0x761aec */ __asm { ROL RAX,0x36 }
    /* +0x761af0 */ __asm { MOV R8D,0x1bc1356d }
    /* +0x761af6 */ __asm { XOR R8D,0xb4460b04 }
    /* +0x761afd */ __asm { ADD R8D,0x1b6ca3e }
    /* +0x761b04 */ __asm { MOV ECX,R10D }
    /* +0x761b07 */ __asm { ROR R8D,CL }
    /* +0x761b0a */ __asm { ADD R8,RAX }
    /* +0x761b0d */ __asm { XOR R8,0x29560447 }
    /* +0x761b14 */ __asm { MOV RAX,-0x1666d22898e2312a }
    /* +0x761b1e */ __asm { CMP R8,RAX }
    /* +0x761b21 */ __asm { NOP }
    /* +0x761b22 */ __asm { NOP }
    /* +0x761b23 */ __asm { NOP }
    /* +0x761b24 */ __asm { NOP }
    /* +0x761b25 */ __asm { NOP }
    /* +0x761b26 */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0x761b2b */ __asm { MOV EAX,dword ptr [R9 + 0x59e8] }
    /* +0x761b32 */ __asm { JMP 0x7fffa4ed1fa7 }
    /* +0x761b37 */ __asm { MOV ECX,R10D }
    /* +0x761b3a */ __asm { OR ECX,0x1 }
    /* +0x761b3d */ __asm { CMP EAX,0x3 }
    /* +0x761b40 */ __asm { JNZ 0x7fffa4ed1cb5 }
    /* +0x761b46 */ __asm { MOV R9D,0x54f67280 }
    /* +0x761b4c */ __asm { MOV RAX,-0x574d163fc012ac6a }
    /* +0x761b56 */ __asm { XOR RAX,0x75fb651f }
    /* +0x761b5c */ __asm { ROL RAX,0x1 }
    /* +0x761b5f */ __asm { XOR RAX,R9 }
    /* +0x761b62 */ __asm { CMP RAX,-0x1 }
    /* +0x761b66 */ __asm { JZ 0x7fffa4ed1fd3 }
    /* +0x761b6c */ __asm { MOV R11W,0xd3ef }
    /* +0x761b71 */ __asm { MOV R8D,dword ptr [R9 + 0x2b078fc0] }
    /* +0x761b78 */ __asm { MOV R9D,R10D }
    /* +0x761b7b */ __asm { OR R9D,0x1 }
    /* +0x761b7f */ __asm { IMUL R9D,R11D }
    /* +0x761b83 */ __asm { ROL R9W,0x4 }
    /* +0x761b88 */ __asm { AND R8D,0x1 }
    /* +0x761b8c */ __asm { NOT R9D }
    /* +0x761b8f */ __asm { MOVZX R11D,R9W }
    /* +0x761b93 */ __asm { CMP R8D,R11D }
    /* +0x761b96 */ __asm { JZ 0x7fffa4ed1d4b }
    /* +0x761b9c */ __asm { MOV R11D,0x684fce6d }
    /* +0x761ba2 */ __asm { XOR R11D,0x5faeb038 }
    /* +0x761ba9 */ __asm { MOV EAX,0xa28c103e }
    /* +0x761bae */ __asm { MOV R9,0x0 }
    /* +0x761bb5 */ __asm { NOP }
    /* +0x761bb7 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x761bbe */ __asm { LEA R9,[0x7fffa47b9069] }
    /* +0x761bc5 */ __asm { MOV R8,-0x36a2bbc58ebe4ec1 }
    /* +0x761bcf */ __asm { XOR R13D,R13D }
    /* +0x761bd2 */ __asm { XOR EBX,EBX }
    /* +0x761bd4 */ __asm { CMP R9,R8 }
    /* +0x761bd7 */ __asm { SETZ R13B }
    /* +0x761bdb */ __asm { SETL BL }
    /* +0x761bde */ __asm { IMUL R11D,ECX }
    /* +0x761be2 */ __asm { NOT R11D }
    /* +0x761be5 */ __asm { MOVSXD R11,R11D }
    /* +0x761be8 */ __asm { XOR EAX,R10D }
    /* +0x761beb */ __asm { ROL EAX,0x1b }
    /* +0x761bee */ __asm { CMP RAX,R11 }
    /* +0x761bf1 */ __asm { CMOVGE EBX,R13D }
    /* +0x761bf5 */ __asm { CMP BL,0x1 }
    /* +0x761bf8 */ __asm { JZ 0x7fffa4ed1fe4 }
    /* +0x761bfe */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0x761c03 */ __asm { MOV EAX,dword ptr [R9 + 0x3fa3] }
    /* +0x761c0a */ __asm { JMP 0x7fffa4ed1fa7 }
    /* +0x761c0f */ __asm { MOV RSI,RDX }
    /* +0x761c12 */ __asm { MOV ECX,0x81e7a29f }
    /* +0x761c17 */ __asm { MOV RAX,0x4b9247d8e80a6dfe }
    /* +0x761c21 */ __asm { CMP RCX,RAX }
    /* +0x761c24 */ __asm { JZ 0x7fffa4ed1fdc }
    /* +0x761c2a */ __asm { MOV R9,0xbd01abeb44f0 }
    /* +0x761c34 */ __asm { MOV R11,qword ptr [RCX + -0x1e9a297] }
    /* +0x761c3b */ __asm { XOR R9,R10 }
    /* +0x761c3e */ __asm { ROL R9,0x2f }
    /* +0x761c42 */ __asm { MOV RCX,-0x656a206630e4e3df }
    /* +0x761c4c */ __asm { MOV RAX,R11 }
    /* +0x761c4f */ __asm { MUL RCX }
    /* +0x761c52 */ __asm { MOV RCX,RDX }
    /* +0x761c55 */ __asm { MOV EDX,0x1479232 }
    /* +0x761c5a */ __asm { MOV RAX,R11 }
    /* +0x761c5d */ __asm { MUL RDX }
    /* +0x761c60 */ __asm { ADD R9,-0x5e80ca0d }
    /* +0x761c67 */ __asm { ADD RAX,RCX }
    /* +0x761c6a */ __asm { ADC RDX,0x0 }
    /* +0x761c6e */ __asm { AND EDX,0x1 }
    /* +0x761c71 */ __asm { OR RDX,R9 }
    /* +0x761c74 */ __asm { JZ 0x7fffa4ed1d9e }
    /* +0x761c7a */ __asm { LEA RCX,[0x7fffa47b82ee] }
    /* +0x761c81 */ __asm { MOV RAX,-0x59a40829a5c6fe3 }
    /* +0x761c8b */ __asm { ADD R10,RAX }
    /* +0x761c8e */ __asm { ROL R10,0xb }
    /* +0x761c92 */ __asm { CMP RCX,R10 }
    /* +0x761c95 */ __asm { JNZ 0x7fffa4ed1ca5 }
    /* +0x761c97 */ __asm { SBB EBP,EDI }
    /* +0x761c99 */ __asm { STC }
    /* +0x761c9a */ __asm { MOV EBX,0x818052d5 }
    /* +0x761c9f */ __asm { ADC EAX,0x59534839 }
    /* +0x761ca5 */ __asm { MOV qword ptr [RSP + 0x40],R9 }
    /* +0x761caa */ __asm { MOV EAX,dword ptr [RCX + 0x4d1e] }
    /* +0x761cb0 */ __asm { JMP 0x7fffa4ed1f7e }
    /* +0x761cb5 */ __asm { MOV RAX,-0x5844c3d46ab133ad }
    /* +0x761cbf */ __asm { OR R10,0x1 }
    /* +0x761cc3 */ __asm { IMUL R10,RAX }
    /* +0x761cc7 */ __asm { MOV R9D,0x6ab7e395 }
    /* +0x761ccd */ __asm { MOV RAX,R9 }
    /* +0x761cd0 */ __asm { XOR RAX,R10 }
    /* +0x761cd3 */ __asm { CMP RAX,-0x1 }
    /* +0x761cd7 */ __asm { NOP }
    /* +0x761cd8 */ __asm { NOP }
    /* +0x761cd9 */ __asm { NOP }
    /* +0x761cda */ __asm { NOP }
    /* +0x761cdb */ __asm { NOP }
    /* +0x761cdc */ __asm { NOP }
    /* +0x761cdd */ __asm { NOP }
    /* +0x761cde */ __asm { NOP }
    /* +0x761cdf */ __asm { MOV EAX,0x57ce385d }
    /* +0x761ce4 */ __asm { IMUL EAX,ECX }
    /* +0x761ce7 */ __asm { ROL EAX,0x3 }
    /* +0x761cea */ __asm { MOV R10D,dword ptr [R9 + RAX*0x1 + 0x2c4] }
    /* +0x761cf2 */ __asm { MOV RAX,0x5555555555555556 }
    /* +0x761cfc */ __asm { IMUL RAX,R10 }
    /* +0x761d00 */ __asm { MOV R11,0x5555555555555555 }
    /* +0x761d0a */ __asm { CMP RAX,R11 }
    /* +0x761d0d */ __asm { JA 0x7fffa4ed1f86 }
    /* +0x761d13 */ __asm { LEA RCX,[0x7fffa47bfc17] }
    /* +0x761d1a */ __asm { MOV RAX,0x3d019adcc47b2b36 }
    /* +0x761d24 */ __asm { CMP RCX,RAX }
    /* +0x761d27 */ __asm { NOP }
    /* +0x761d28 */ __asm { NOP }
    /* +0x761d29 */ __asm { NOP }
    /* +0x761d2a */ __asm { NOP }
    /* +0x761d2b */ __asm { NOP }
    /* +0x761d2c */ __asm { MOV R9,0x0 }
    /* +0x761d33 */ __asm { NOP }
    /* +0x761d34 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x761d3b */ __asm { MOV qword ptr [RSP + 0x40],R9 }
    /* +0x761d40 */ __asm { MOV EAX,dword ptr [RCX + -0x3757] }
    /* +0x761d46 */ __asm { JMP 0x7fffa4ed1fa7 }
    /* +0x761d4b */ __asm { MOV RAX,R10 }
    /* +0x761d4e */ __asm { OR RAX,0x1 }
    /* +0x761d52 */ __asm { LEA RCX,[0x7fffa47b54b5] }
    /* +0x761d59 */ __asm { MOV R11,0x129159b2ccc384ed }
    /* +0x761d63 */ __asm { MOV R9D,0x8665c477 }
    /* +0x761d69 */ __asm { XOR R9,R11 }
    /* +0x761d6c */ __asm { IMUL R9,RAX }
    /* +0x761d70 */ __asm { ADD R9,-0x7fee966b }
    /* +0x761d77 */ __asm { CMP RCX,R9 }
    /* +0x761d7a */ __asm { NOP }
    /* +0x761d7b */ __asm { NOP }
    /* +0x761d7c */ __asm { NOP }
    /* +0x761d7d */ __asm { NOP }
    /* +0x761d7e */ __asm { NOP }
    /* +0x761d7f */ __asm { MOV AX,0x9a4e }
    /* +0x761d83 */ __asm { MOV qword ptr [RSP + 0x40],R9 }
    /* +0x761d88 */ __asm { LEA R11D,[R10 + RAX*0x1] }
    /* +0x761d8c */ __asm { ROR R11W,0x1 }
    /* +0x761d90 */ __asm { MOVZX R10D,R11W }
    /* +0x761d94 */ __asm { MOV EAX,dword ptr [R10 + RCX*0x1 + 0x6c] }
    /* +0x761d99 */ __asm { JMP 0x7fffa4ed1fa7 }
    /* +0x761d9e */ __asm { MOV R9,-0x3cab16b3dd23c863 }
    /* +0x761da8 */ __asm { ADD R9,R10 }
    /* +0x761dab */ __asm { RDTSC }
    /* +0x761dad */ __asm { SHL RDX,0x20 }
    /* +0x761db1 */ __asm { OR RDX,RAX }
    /* +0x761db4 */ __asm { MOV RAX,-0x2ecbdabc217d106b }
    /* +0x761dbe */ __asm { IMUL RAX,RDX }
    /* +0x761dc2 */ __asm { XOR R9,0x2c8f7706 }
    /* +0x761dc9 */ __asm { ADD RAX,R9 }
    /* +0x761dcc */ __asm { ADD RAX,0x4745e073 }
    /* +0x761dd2 */ __asm { MOV RCX,RAX }
    /* +0x761dd5 */ __asm { SHR RCX,0x3b }
    /* +0x761dd9 */ __asm { MOV RDX,RAX }
    /* +0x761ddc */ __asm { SHR RDX,0x1b }
    /* +0x761de0 */ __asm { SHR RAX,0x2d }
    /* +0x761de4 */ __asm { XOR EAX,EDX }
    /* +0x761de6 */ __asm { ROR EAX,CL }
    /* +0x761de8 */ __asm { MOV dword ptr [RSP + 0x40],0x26715b90 }
    /* +0x761df0 */ __asm { MOV ECX,dword ptr [RSP + 0x40] }
    /* +0x761df4 */ __asm { CMP EAX,0x10857f }
    /* +0x761df9 */ __asm { JA 0x7fffa4ed1f48 }
    /* +0x761dff */ __asm { PUSHFQ }
    /* +0x761e00 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x761e08 */ __asm { POPFQ }
    /* +0x761e09 */ __asm { MOV dword ptr [RSP + 0x40],0x4c896256 }
    /* +0x761e11 */ __asm { MOV ECX,dword ptr [RSP + 0x40] }
    /* +0x761e15 */ __asm { MOV R11D,0x7b4dd93c }
    /* +0x761e1b */ __asm { ADD R11D,R10D }
    /* +0x761e1e */ __asm { IMUL R11D,R11D,-0x717be1db }
    /* +0x761e25 */ __asm { NOT R11D }
    /* +0x761e28 */ __asm { CMP ECX,R11D }
    /* +0x761e2b */ __asm { NOP }
    /* +0x761e2c */ __asm { NOP }
    /* +0x761e2d */ __asm { NOP }
    /* +0x761e2e */ __asm { NOP }
    /* +0x761e2f */ __asm { NOP }
    /* +0x761e30 */ __asm { MOV CX,0x8e4c }
    /* +0x761e34 */ __asm { ADD ECX,0xffffb644 }
    /* +0x761e3a */ __asm { XOR ECX,R10D }
    /* +0x761e3d */ __asm { MOVZX EAX,CX }
    /* +0x761e40 */ __asm { PXOR XMM0,XMM0 }
    /* +0x761e44 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM0 }
    /* +0x761e4a */ __asm { MOV RAX,qword ptr GS:[RAX] }
    /* +0x761e4e */ __asm { MOV R11,-0x7c8ba4a9592bf813 }
    /* +0x761e58 */ __asm { CMP qword ptr [RAX + 0x418],R11 }
    /* +0x761e5f */ __asm { JZ 0x7fffa4ed1fcc }
    /* +0x761e65 */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0x761e6d */ __asm { PUSHFQ }
    /* +0x761e6e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x761e76 */ __asm { POPFQ }
    /* +0x761e77 */ __asm { MOV dword ptr [RSP + 0x38],0xceffefbe }
    /* +0x761e7f */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0x761e83 */ __asm { CMP ECX,0x4332d87d }
    /* +0x761e89 */ __asm { JBE 0x7fffa4ed1ffd }
    /* +0x761e8f */ __asm { MOV RCX,0x0 }
    /* +0x761e96 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x761e9d */ __asm { NOP }
    /* +0x761e9e */ __asm { PUSHFQ }
    /* +0x761e9f */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x761ea7 */ __asm { POPFQ }
    /* +0x761ea8 */ __asm { MOV dword ptr [RSP + 0x38],0xecdb2f5 }
    /* +0x761eb0 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0x761eb4 */ __asm { CMP ECX,0xdec153d9 }
    /* +0x761eba */ __asm { JNC 0x7fffa4ed2014 }
    /* +0x761ec0 */ __asm { MOV EAX,0xbdfd016c }
    /* +0x761ec5 */ __asm { LEA RCX,[0x7fffa478679e] }
    /* +0x761ecc */ __asm { ADD EAX,R10D }
    /* +0x761ecf */ __asm { XOR EAX,0x3dee46d2 }
    /* +0x761ed4 */ __asm { ADD RAX,RCX }
    /* +0x761ed7 */ __asm { XOR RAX,0x72158e01 }
    /* +0x761edd */ __asm { MOV R11,0x66681645fd88e6e6 }
    /* +0x761ee7 */ __asm { CMP RAX,R11 }
    /* +0x761eea */ __asm { NOP }
    /* +0x761eeb */ __asm { NOP }
    /* +0x761eec */ __asm { NOP }
    /* +0x761eed */ __asm { NOP }
    /* +0x761eee */ __asm { NOP }
    /* +0x761eef */ __asm { NOP }
    /* +0x761ef0 */ __asm { NOP }
    /* +0x761ef1 */ __asm { NOP }
    /* +0x761ef2 */ __asm { NOP }
    /* +0x761ef3 */ __asm { NOP }
    /* +0x761ef4 */ __asm { NOP }
    /* +0x761ef5 */ __asm { NOP }
    /* +0x761ef6 */ __asm { NOP }
    /* +0x761ef7 */ __asm { NOP }
    /* +0x761ef8 */ __asm { NOP }
    /* +0x761ef9 */ __asm { NOP }
    /* +0x761efa */ __asm { NOP }
    /* +0x761f48 */ __asm { LEA RCX,[0x7fffa4783879] }
    /* +0x761f4f */ __asm { MOV RAX,-0x5c96f428f168942e }
    /* +0x761f59 */ __asm { CMP RCX,RAX }
    /* +0x761f5c */ __asm { NOP }
    /* +0x761f5d */ __asm { NOP }
    /* +0x761f5e */ __asm { NOP }
    /* +0x761f5f */ __asm { NOP }
    /* +0x761f60 */ __asm { NOP }
    /* +0x761f61 */ __asm { NOP }
    /* +0x761f62 */ __asm { NOP }
    /* +0x761f63 */ __asm { NOP }
    /* +0x761f64 */ __asm { NOP }
    /* +0x761f65 */ __asm { NOP }
    /* +0x761f66 */ __asm { NOP }
    /* +0x761f67 */ __asm { NOP }
    /* +0x761f68 */ __asm { NOP }
    /* +0x761f69 */ __asm { NOP }
    /* +0x761f6a */ __asm { NOP }
    /* +0x761f6b */ __asm { NOP }
    /* +0x761f6c */ __asm { NOP }
    /* +0x761f7e */ __asm { MOV R10,R14 }
    /* +0x761f81 */ __asm { MOV RDX,RSI }
    /* +0x761f84 */ __asm { JMP 0x7fffa4ed1faa }
    /* +0x761f86 */ __asm { LEA RCX,[0x7fffa47bd895] }
    /* +0x761f8d */ __asm { MOV RAX,-0x564d4d7610572ade }
    /* +0x761f97 */ __asm { CMP RCX,RAX }
    /* +0x761f9a */ __asm { JZ 0x7fffa4ed1ff7 }
    /* +0x761f9c */ __asm { MOV qword ptr [RSP + 0x40],R9 }
    /* +0x761fa1 */ __asm { MOV EAX,dword ptr [RCX + -0x13d5] }
    /* +0x761fa7 */ __asm { MOV R10,R14 }
    /* +0x761faa */ __asm { SYSCALL }
    /* +0x761fac */ __asm { MOV ECX,EAX }
    /* +0x761fae */ __asm { ROL ECX,0x1d }
    /* +0x761fb1 */ __asm { MOV R11D,EAX }
    /* +0x761fb4 */ __asm { ROL R11D,0x14 }
    /* +0x761fb8 */ __asm { XOR R11D,ECX }
    /* +0x761fbb */ __asm { XOR R11D,EAX }
    /* +0x761fbe */ __asm { ADD RSP,0x58 }
    /* +0x761fc2 */ __asm { POP R13 }
    /* +0x761fc4 */ __asm { POP R14 }
    /* +0x761fc6 */ __asm { POP RBX }
    /* +0x761fc7 */ __asm { POP RDI }
    /* +0x761fc8 */ __asm { POP R15 }
    /* +0x761fca */ __asm { POP RSI }
    /* +0x761fcb */ __asm { RET }
    /* +0x761fcc */ __asm { ROR uint8_t ptr [0x7fffa4ebb2bc],0xff }
    /* +0x761fd3 */ __asm { CMP EDI,EDI }
    /* +0x761fdc */ __asm { IMUL RDI,qword ptr [R10 + -0x3b917],0x179226ff }
    /* +0x761fe7 */ __asm { XCHG EAX,EBX }
    /* +0x761fe8 */ __asm { DIV uint8_t ptr [RBX + RCX*0x2] }
    /* +0x761feb */ __asm { LEA EDI,[RDI + 0x2cd95d7f] }
    /* +0x761ff1 */ __asm { JMP 0x7fffa4ed1bfe }
    /* +0x761ffd */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x762004 */ __asm { NOP }
    /* +0x762005 */ __asm { MOV RCX,0x0 }
    /* +0x76200c */ __asm { ADC dword ptr GS:[RCX + -0x18417],0xa141f2ff }
    /* +0x762017 */ __asm { JMP 0x7fffa4ed1ec0 }
}


// ============================================================================
// Function : FUN_7fffa4ed2020  |  RVA: 0x762020  |  Size: 15 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa4ed2020(void)

{
  uint32_t in_EAX;
  uint64_t uStack_8;
  
  uStack_8 = CONCAT44(0x94500122,in_EAX);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa4ed2030  |  RVA: 0x762030  |  Size: 50 bytes
// Callers  : FUN_7fffa4ee8e08@0x778e08
// Callees  : FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
void FUN_7fffa4ed2030(uint64_t *param_1,int64_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_7fffa52d8dd0(*param_1);
  }
  return;
}

