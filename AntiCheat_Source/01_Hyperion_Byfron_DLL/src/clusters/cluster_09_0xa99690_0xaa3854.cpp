// Subsystem: Internal Routines Cluster 09 (0xa99690 .. 0xaa3854)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : Unwind@7fffa5209690  |  RVA: 0xa99690  |  Size: 297 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5209690(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = *(int *)(param_2 + 0x3f0) + 0x36d6d6f0;
  *(uint32_t *)((int64_t)(short)~((uint16_t)*(uint32_t *)(param_2 + 0x3d8) ^ 0xf50c) + 0x7fffa478c759)
       = *(uint32_t *)((int64_t)(int)((uVar1 * 0x800 | uVar1 >> 0x15) - *(int *)(param_2 + 0x858)) +
                  0x7fffa479120e) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa52097c0  |  RVA: 0xa997c0  |  Size: 302 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa52097c0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  uVar3 = 0x8f0bdab3 - *(int *)(param_2 + 0x3d8);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x840) & 0x1f;
  uVar2 = *(int *)(param_2 + 0x640) * 0x2ee5d0de + *(int *)(param_2 + 0x860);
  *(uint32_t *)(((int64_t)(int)(uVar3 >> bVar1 | uVar3 << 0x20 - bVar1) ^ 0xffffffffc80f56b3U) +
           0x7fffa4790f64) =
       *(uint32_t *)((int64_t)(int)(uVar2 * 0x10000000 | uVar2 >> 4) + 0x7fffa47934db) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa52098f0  |  RVA: 0xa998f0  |  Size: 243 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa52098f0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  short sVar4;
  uint32_t uVar5;
  
  sVar4 = (short)*(uint64_t *)(param_2 + 0x8b8);
  uVar5 = *(uint32_t *)(param_2 + 0x3d8) ^ 0xb9246318;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x9a8) & 0x1f;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x390) & 0xf;
  *(uint32_t *)((int64_t)
            (short)((sVar4 * -0x2800 | (uint16_t)(sVar4 * 0x7b0) >> 9) -
                   (short)*(uint32_t *)(param_2 + 0x858)) + 0x7fffa47c18f2) =
       *(uint32_t *)((int64_t)(short)~(0xef0cU >> bVar3 | -0x10f4 << 0x10 - bVar3) + 0x7fffa47c29ad) &
       0xfffffffd;
  (*(code *)((int64_t)(int)(uVar5 << bVar2 | uVar5 >> 0x20 - bVar2) + 0x7fffa562f7c9))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa52099f0  |  RVA: 0xa999f0  |  Size: 307 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa52099f0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x88) & 0x1f;
  uVar3 = *(int *)(param_2 + 0x640) * -0x3fc0740e;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x2a8) & 0x1f;
  *(uint32_t *)((int64_t)
            (int)((-0x6e307158 << bVar1 | 0x91cf8ea8U >> 0x20 - bVar1) + *(int *)(param_2 + 0x3d8))
           + 0x7fffa47922af) =
       *(uint32_t *)((int64_t)(int)((uVar3 >> bVar2 | uVar3 << 0x20 - bVar2) + 0x8a828e7c) +
                0x7fffa478f334) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5209b30  |  RVA: 0xa99b30  |  Size: 293 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5209b30(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)(((int64_t)(int)(*(uint32_t *)(param_2 + 0x390) ^ 0xba1ffc38) ^ 0xffffffffc1240d55U) +
           0x7fffa4795005) =
       *(uint32_t *)((int64_t)(*(int *)(param_2 + 0x3f0) + 0x5123d4dc) + 0x7fffa478ecf0) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5209c60  |  RVA: 0xa99c60  |  Size: 328 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5209c60(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)((int64_t)
            (*(int *)(param_2 + 0x3f0) + ~((-0x58d6361b - *(int *)(param_2 + 0x840)) * -0x3fab4643))
           + 0x7fffa4795199) =
       *(uint32_t *)((int64_t)
                 (short)~(((uint16_t)*(uint32_t *)(param_2 + 0x3d8) ^ 0x5efc) * 0x1815 ^
                         (uint16_t)*(uint32_t *)(param_2 + 0x2a8)) + 0x7fffa4786670) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5209db0  |  RVA: 0xa99db0  |  Size: 281 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5209db0(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  uint64_t uVar2;
  code *pcVar3;
  uint32_t uVar4;
  
  uVar1 = *(uint32_t *)(param_2 + 0x8b8);
  uVar2 = *(uint64_t *)(param_2 + 0x840);
  uVar4 = ((int)*(uint64_t *)(param_2 + 0x3d8) + 0x6dc4b452) *
          ((uint32_t)*(uint64_t *)(param_2 + 0x4f8) | 1);
  *(uint32_t *)((int64_t)(int)(uVar4 * 4 | uVar4 >> 0x1e) + 0x7fffa47cacd7) =
       *(uint32_t *)((int64_t)
                 (short)(((uint16_t)*(uint32_t *)(param_2 + 0x390) ^ 0x1c43) * 0x2bb7 + 0x386c) +
                0x7fffa47c2711) & 0xfffffffd;
  (*(code *)(&UNK_7fffa56275de + (short)(~((short)uVar1 * 0x4be9) * ((uint16_t)uVar2 | 1))))();
  pcVar3 = (code *)__debugbreak();
  (*pcVar3)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa5209ed0  |  RVA: 0xa99ed0  |  Size: 309 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5209ed0(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  uVar1 = (short)*(uint64_t *)(param_2 + 0x670) + 0x1796;
  *(uint32_t *)((int64_t)
            (short)(((short)*(uint64_t *)(param_2 + 0x8b8) * -0x29 -
                    (short)*(uint32_t *)(param_2 + 0x390)) * 0x6165) + 0x7fffa4787c6f) =
       *(uint32_t *)((int64_t)
                 (short)((uVar1 * 4 | uVar1 >> 0xe) + (short)*(uint32_t *)(param_2 + 0x3d8)) +
                0x7fffa47874a4) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa520a010  |  RVA: 0xa9a010  |  Size: 350 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520a010(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  
  uVar3 = *(int *)(param_2 + 0x710) + 0xb4ca3531;
  uVar1 = *(uint32_t *)((int64_t)
                    (short)(((uint16_t)*(uint32_t *)(param_2 + 0x88) ^ 0xfa9d) -
                           (short)*(uint64_t *)(param_2 + 0x3d8)) + 0x7fffa478a590);
  uVar4 = (uVar3 * 0x200000 | uVar3 >> 0xb) * *(int *)(param_2 + 0x8b8);
  uVar5 = *(int *)(param_2 + 0x730) + 0xfed2f1a3;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0x1f;
  uVar3 = uVar1 & 0xfffffffd;
  if ((uVar4 * 0x40 | uVar4 >> 0x1a) == 0xa973b3e6) {
    uVar3 = uVar1 | 0xfffffffd;
  }
  *(uint32_t *)((int64_t)(int)(uVar5 >> bVar2 | uVar5 << 0x20 - bVar2) + 0x7fffa478e695) = uVar3;
  return;
}


// ============================================================================
// Function : Unwind@7fffa520a170  |  RVA: 0xa9a170  |  Size: 302 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520a170(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  uVar2 = (short)*(uint32_t *)(param_2 + 0x3d8) + 0xe8fc;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x2a8) & 0xf;
  *(uint32_t *)((int64_t)(short)((uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) + 0x1a) + 0x7fffa478dcec) =
       *(uint32_t *)((int64_t)((int)*(uint64_t *)(param_2 + 0x518) * -0x1d210831) + 0x7fffa4794591) &
       0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa520a2a0  |  RVA: 0xa9a2a0  |  Size: 259 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520a2a0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint16_t uVar5;
  
  uVar4 = ((uint32_t)*(uint64_t *)(param_2 + 0x2a8) ^ 0x452a9e8e) + 0x51535b66;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0x1f;
  uVar5 = 0x8fb4 - (short)*(uint64_t *)(param_2 + 0x3d8);
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x568) & 0xf;
  uVar5 = uVar5 << bVar2 | uVar5 >> 0x10 - bVar2;
  *(uint32_t *)((int64_t)
            (int)((int)*(uint64_t *)(param_2 + 0x8b8) *
                 ~((uint32_t)*(uint64_t *)(param_2 + 0x568) ^ 0xee679f80)) + 0x7fffa47c8941) =
       *(uint32_t *)((int64_t)(short)(uVar5 << 10 | uVar5 >> 6) + 0x7fffa47c19b4) & 0xfffffffd;
  (*(code *)((int64_t)(int)(uVar4 >> bVar3 | uVar4 << 0x20 - bVar3) + 0x7fffa562e32e))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520a3b0  |  RVA: 0xa9a3b0  |  Size: 304 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520a3b0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x88) & 0xf;
  uVar2 = 0xe1f4 - (short)*(uint32_t *)(param_2 + 0x858);
  *(uint32_t *)((int64_t)(short)~(-0x5d47 << bVar1 | 0xa2b9U >> 0x10 - bVar1) + 0x7fffa478d156) =
       *(uint32_t *)((int64_t)
                 (short)((uVar2 * 0x2000 | uVar2 >> 3) - (short)*(uint32_t *)(param_2 + 0x3d8)) +
                0x7fffa478c97b) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa520a4e0  |  RVA: 0xa9a4e0  |  Size: 298 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520a4e0(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = (uint32_t)*(uint64_t *)(param_2 + 0x3d8);
  *(uint32_t *)((int64_t)(int)((*(int *)(param_2 + 0x88) + 0x953c0cceU ^ 0xdc3c667e) - uVar1) +
           0x7fffa4791cfb) =
       *(uint32_t *)((int64_t)(int)~(*(int *)(param_2 + 0x808) + 0xfa7ce55dU ^ uVar1) + 0x7fffa47907fb)
       & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa520a610  |  RVA: 0xa9a610  |  Size: 316 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520a610(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  uVar2 = (short)*(uint32_t *)(param_2 + 0x8b8) * -0x63c7 + 0x1057;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x88) & 0xf;
  *(uint32_t *)((int64_t)
            (int)((*(int *)(param_2 + 0x518) * -0x7398c5a7 ^ *(uint32_t *)(param_2 + 0x3d8)) +
                 0xfeb65ad8) + 0x7fffa47928cb) =
       *(uint32_t *)((int64_t)(short)(uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) + 0x7fffa478839d) &
       0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa520a750  |  RVA: 0xa9a750  |  Size: 265 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520a750(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  code *pcVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  
  uVar1 = *(uint64_t *)(param_2 + 0x518);
  uVar4 = SUB164(*(uint8_t (*) [16])(param_2 + 0x3f0),0);
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0xf;
  *(uint32_t *)((int64_t)(short)(0x3a23 << bVar3 | 0x3a23U >> 0x10 - bVar3) + 0x7fffa47c53bd) =
       *(uint32_t *)((int64_t)(int)((uVar4 ^ 0xd6d3721b) * -0x2bc21ddb - *(int *)(param_2 + 0x808)) +
                0x7fffa47cf486) & 0xfffffffd;
  (*(code *)((int64_t)(int)(((int)uVar1 * 0x12e87bba ^ 0x5ab2bd49U) + uVar4 ^ 0xceec8370) +
            0x7fffa5633c39))();
  pcVar2 = (code *)__debugbreak();
  (*pcVar2)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520a860  |  RVA: 0xa9a860  |  Size: 301 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520a860(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  uVar2 = *(int *)(param_2 + 0x8b8) * 0x378f55c8 |
          (uint32_t)(*(int *)(param_2 + 0x8b8) * -0x790e1547) >> 0x1d;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x88) & 0x1f;
  *(uint32_t *)((int64_t)(int)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) + 0x7fffa478e8bf) =
       *(uint32_t *)((int64_t)
                 (short)(((uint16_t)*(uint32_t *)(param_2 + 0x3d8) ^ 0x68e2) -
                        (short)*(uint32_t *)(param_2 + 0x808)) + 0x7fffa478b9bb) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa520a990  |  RVA: 0xa9a990  |  Size: 270 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520a990(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)((int64_t)(int)(((uint32_t)*(uint64_t *)(param_2 + 0x3d8) ^ 0xec9ddb34) + 0xbdb8bec5) +
           0x7fffa47cefbb) =
       *(uint32_t *)((int64_t)(short)((short)*(uint64_t *)(param_2 + 0x3d8) + 0x57ac) +
                0x7fffa47c0200) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa520aaa0  |  RVA: 0xa9aaa0  |  Size: 279 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520aaa0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  
  uVar4 = (int)*(uint64_t *)(param_2 + 0x8b8) * -0x6109e2ae + 0x7ffe0003;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x30) & 0x1f;
  uVar3 = (uint16_t)((int)*(uint64_t *)(param_2 + 0x30) +
                  ((uint32_t)*(uint64_t *)(param_2 + 0x3d8) ^ 0x5102));
  *(uint32_t *)((int64_t)(short)(((uint16_t)*(uint64_t *)(param_2 + 0x3d8) ^ 0x745c) + 0xec4a) +
           0x7fffa47c218e) =
       *(uint32_t *)((int64_t)
                 (short)((uVar3 << 0xe | uVar3 >> 2) - (short)*(uint32_t *)(param_2 + 0x390)) +
                0x7fffa47c494d) & 0xfffffffd;
  (*(code *)((int64_t)(int)(*(uint32_t *)(param_2 + 0x440) ^ (uVar4 >> bVar2 | uVar4 << 0x20 - bVar2))
            + 0x7fffa562fc52))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520abc0  |  RVA: 0xa9abc0  |  Size: 278 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520abc0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  
  uVar2 = (uint16_t)*(uint64_t *)(param_2 + 0x3d8);
  uVar3 = (0x6002 - (short)*(uint32_t *)(param_2 + 0x30)) * 0x1259 -
          (short)*(uint32_t *)(param_2 + 0x440);
  *(uint32_t *)((int64_t)
            (short)(~((uVar2 ^ 0x38bb) * -0x198b) + (short)*(uint32_t *)(param_2 + 0x858)) +
           0x7fffa47c1d51) =
       *(uint32_t *)((int64_t)
                 (int)((((uint32_t)*(uint64_t *)(param_2 + 0x3d8) ^ 0x94f1e8a3) +
                       *(int *)(param_2 + 0x930)) * *(int *)(param_2 + 0x7d8)) + 0x7fffa47ce4e5) &
       0xfffffffd;
  (*(code *)((int64_t)(short)((uVar3 * 0x1000 | uVar3 >> 4) + uVar2) + 0x7fffa562c1d9))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520ace0  |  RVA: 0xa9ace0  |  Size: 315 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_7fffa520ace0(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  code *pcVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint16_t uVar6;
  
  uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x3d8);
  uVar1 = *(uint32_t *)(param_2 + 0x8d8);
  uVar6 = ((uint16_t)DAT_7fffa56bba40 ^ 0x4ac2) - (short)*(uint64_t *)(param_2 + 0x3d8);
  uVar2 = *(uint32_t *)(((int64_t)
                     ((0x2d519f18 - *(int *)(param_2 + 0x3f0)) * *(int *)(param_2 + 0x1d8)) ^
                    0xffffffffb5f11c85U) + 0x7fffa47ce9d7);
  uVar4 = uVar2 ^ 0xfffffffd;
  if ((uVar5 + 0x6bc8c375) * 0x2e8e1673 == 0x6eaee61b) {
    uVar4 = uVar2 & 0xfffffffd;
  }
  *(uint32_t *)((int64_t)
            (short)((short)*(uint64_t *)(param_2 + 0x390) + (uVar6 * 0x1000 | uVar6 >> 4)) +
           0x7fffa47c4984) = uVar4;
  (*(code *)((int64_t)(int)((uVar1 ^ 0x6ddd3181) * 0x3a6594c9 + 0xe27f3ad ^ uVar5) + 0x7fffa563207c
            ))();
  pcVar3 = (code *)__debugbreak();
  (*pcVar3)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520ae20  |  RVA: 0xa9ae20  |  Size: 259 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520ae20(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  code *pcVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  
  iVar1 = *(int *)(param_2 + 0x8b8);
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x568) & 0xf;
  uVar4 = (uint16_t)*(uint64_t *)(param_2 + 0x3d8) ^ (-0x34c5 << bVar3 | 0xcb3bU >> 0x10 - bVar3);
  *(uint32_t *)((int64_t)(short)(uVar4 << 0xb | uVar4 >> 5) + 0x7fffa47c3ce9) =
       *(uint32_t *)((int64_t)((int)*(uint64_t *)(param_2 + 0x3d8) + 0x51236c39) + 0x7fffa47ced73) &
       0xfffffffd;
  (*(code *)((int64_t)(short)((short)*(uint32_t *)(param_2 + 0x9a8) + (short)(iVar1 * 0x9659)) +
            0x7fffa562671b))();
  pcVar2 = (code *)__debugbreak();
  (*pcVar2)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520af30  |  RVA: 0xa9af30  |  Size: 253 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520af30(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  code *pcVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint16_t uVar5;
  
  uVar1 = *(uint64_t *)(param_2 + 0x3d8);
  uVar4 = ((uint32_t)uVar1 ^ 0x74757f63) * 0x36a18c9d - *(int *)(param_2 + 0x8a0);
  bVar3 = (uint8_t)uVar1 & 0x1f;
  uVar5 = (short)uVar1 + 0xd319;
  *(uint32_t *)((int64_t)(int)(uVar4 * 0x10000000 | uVar4 >> 4) + 0x7fffa47cf568) =
       *(uint32_t *)((int64_t)
                 (short)((short)*(uint64_t *)(param_2 + 0x800) *
                        ((uVar5 * 0x10 | uVar5 >> 0xc) - 0xda1)) + 0x7fffa47c3583) & 0xfffffffd;
  (*(code *)((int64_t)(int)~(-0x4ffff414 << bVar3 | 0xb0000becU >> 0x20 - bVar3) + 0x7fffa56312ac))
            ();
  pcVar2 = (code *)__debugbreak();
  (*pcVar2)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520b030  |  RVA: 0xa9b030  |  Size: 249 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520b030(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  code *pcVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint16_t uVar6;
  uint16_t uVar7;
  
  uVar6 = -(short)*(uint32_t *)(param_2 + 0x88) - 0x78b;
  bVar5 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8);
  bVar3 = bVar5 & 0xf;
  uVar7 = (short)*(uint64_t *)(param_2 + 0x3d8) + 0x530d;
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x390) & 0xf;
  bVar5 = bVar5 & 0xf;
  uVar1 = *(uint32_t *)(param_2 + 0x860);
  *(uint32_t *)((int64_t)(short)(0x459c - (uVar6 << bVar3 | uVar6 >> 0x10 - bVar3)) + 0x7fffa47c5218) =
       *(uint32_t *)((int64_t)(short)(uVar7 << bVar4 | uVar7 >> 0x10 - bVar4) + 0x7fffa47c2175) &
       0xfffffffd;
  (*(code *)((int64_t)(short)((0xf92fU >> bVar5 | -0x6d1 << 0x10 - bVar5) + (short)uVar1) +
            0x7fffa56254c5))();
  pcVar2 = (code *)__debugbreak();
  (*pcVar2)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520b130  |  RVA: 0xa9b130  |  Size: 240 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520b130(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0x1f;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x568) & 0xf;
  uVar4 = (uint16_t)((int)*(uint64_t *)(param_2 + 0x3d8) + 0x15e3);
  *(uint32_t *)((int64_t)(short)((uVar4 << bVar2 | uVar4 >> 0x10 - bVar2) * 0x5e81) + 0x7fffa47c6dce) =
       *(uint32_t *)(((int64_t)(0x18483874 - *(int *)(param_2 + 0x3f0)) ^ 0xffffffff9693c3ecU) +
                0x7fffa47c9614) & 0xfffffffd;
  (*(code *)((int64_t)(int)~(0x30000f6c << bVar3 | 0x30000f6cU >> 0x20 - bVar3) + 0x7fffa5634aa4))
            ();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520b220  |  RVA: 0xa9b220  |  Size: 257 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520b220(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  code *pcVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint32_t uVar5;
  
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x568) & 0xf;
  uVar1 = *(uint32_t *)(param_2 + 0x3d8);
  uVar5 = *(int *)(param_2 + 0x3f0) + 0x57d3fc9f;
  uVar5 = (uVar5 * 0x8000000 | uVar5 >> 5) * 0x2482f309;
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x858) & 0x1f;
  *(uint32_t *)((int64_t)(0x6a697a78 - ((int)*(uint64_t *)(param_2 + 0x858) + -0x293010af)) +
           0x7fffa47cc5f4) =
       *(uint32_t *)((int64_t)(int)(uVar5 >> bVar4 | uVar5 << 0x20 - bVar4) + 0x7fffa47ce9e8) &
       0xfffffffd;
  (*(code *)((int64_t)
             (short)(((0xc1adU >> bVar3 | -0x3e53 << 0x10 - bVar3) ^ (uint16_t)uVar1) + 0x7542) +
            0x7fffa5625806))();
  pcVar2 = (code *)__debugbreak();
  (*pcVar2)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520b330  |  RVA: 0xa9b330  |  Size: 268 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520b330(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  short sVar4;
  uint16_t uVar5;
  uint16_t uVar6;
  uint16_t uVar7;
  
  sVar4 = (short)*(uint64_t *)(param_2 + 0x8b8);
  uVar6 = sVar4 * -0x7dda ^ (uint16_t)*(uint32_t *)(param_2 + 0x668);
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0xf;
  uVar5 = -0x202b << bVar2 | 0xdfd5U >> 0x10 - bVar2;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x440) & 0xf;
  uVar7 = sVar4 * -0x3022;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x8d8) & 0xf;
  *(uint32_t *)((int64_t)(short)(uVar5 >> bVar3 | uVar5 << 0x10 - bVar3) + 0x7fffa47c3645) =
       *(uint32_t *)((int64_t)(short)((uVar7 << bVar2 | uVar7 >> 0x10 - bVar2) + 0x453c) +
                0x7fffa47c5779) & 0xfffffffd;
  (*(code *)((int64_t)(short)(uVar6 << 9 | uVar6 >> 7) + 0x7fffa562bd03))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520b440  |  RVA: 0xa9b440  |  Size: 305 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520b440(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  uVar2 = *(int *)(param_2 + 0x3d8) + 0x36f0f5c7;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xf8) & 0xf;
  *(uint32_t *)((int64_t)
            (int)(((uint32_t)*(uint64_t *)(param_2 + 0x180) | 1) * (uVar2 * 0x8000 | uVar2 >> 0x11)) +
           0x7fffa4791a86) =
       *(uint32_t *)((int64_t)
                 (short)((short)*(uint64_t *)(param_2 + 0x8b8) *
                        ((-0x567b << bVar1 | 0xa985U >> 0x10 - bVar1) ^ 5)) + 0x7fffa4787fbb) &
       0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa520b580  |  RVA: 0xa9b580  |  Size: 253 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520b580(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint16_t uVar5;
  uint16_t uVar6;
  
  uVar5 = (uint16_t)*(uint64_t *)(param_2 + 0x3d8);
  uVar6 = uVar5 ^ 0x7d74;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x858) & 0xf;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x840) & 0xf;
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x440) & 0x1f;
  *(uint32_t *)((int64_t)
            (int)((-0x2bfe1501 << bVar4 | 0xd401eaffU >> 0x20 - bVar4) * *(int *)(param_2 + 0x8b8))
           + 0x7fffa47cade5) =
       *(uint32_t *)((int64_t)(short)(((0x748a << bVar2 | 0x748aU >> 0x10 - bVar2) + uVar5) * -0x17c5)
                + 0x7fffa47c6b78) & 0xfffffffd;
  (*(code *)((int64_t)(short)((uVar6 << bVar3 | uVar6 >> 0x10 - bVar3) ^ 0x96a0) + 0x7fffa5625c7e))
            ();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520b680  |  RVA: 0xa9b680  |  Size: 288 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520b680(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)((int64_t)(short)(-0xe9a - ((short)*(uint64_t *)(param_2 + 0x440) + -0x3a31)) +
           0x7fffa478bb0c) =
       *(uint32_t *)((int64_t)
                 (int)((int)*(uint64_t *)(param_2 + 0x440) + 0x747c60e3U ^
                      *(uint32_t *)(param_2 + 0x3d8)) + 0x7fffa478e8de) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa520b7a0  |  RVA: 0xa9b7a0  |  Size: 260 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520b7a0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  
  uVar4 = ((uint16_t)*(uint64_t *)(param_2 + 0x8a0) | 1) * 0x2e8 + 0x7c13;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0xf;
  uVar3 = (uint16_t)*(uint64_t *)(param_2 + 0x98) | 1;
  *(uint32_t *)((int64_t)
            (short)((short)*(uint64_t *)(param_2 + 0x8b8) *
                   (uVar3 * 0x7df0 | (uint16_t)(uVar3 * 0x27df) >> 0xc)) + 0x7fffa47c6a95) =
       *(uint32_t *)(((int64_t)(short)(-0x22e9 - (short)*(uint64_t *)(param_2 + 0x3d8)) ^
                 0xffffffffffffc2bfU) + 0x7fffa47c7384) & 0xfffffffd;
  (*(code *)((int64_t)(short)(uVar4 << bVar2 | uVar4 >> 0x10 - bVar2) + 0x7fffa562ae2f))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520b8b0  |  RVA: 0xa9b8b0  |  Size: 302 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520b8b0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  uVar2 = (short)*(uint64_t *)(param_2 + 0x3d8) + 0x4d7;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x88) & 0xf;
  *(uint32_t *)(((int64_t)(short)(uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) ^ 0x1e06U) + 0x7fffa478ca3a)
       = *(uint32_t *)((int64_t)(int)(~(*(uint32_t *)(param_2 + 0x3f0) ^ 0x5e126b94) * 0x6aa9a017) +
                  0x7fffa47941d7) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa520b9e0  |  RVA: 0xa9b9e0  |  Size: 235 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520b9e0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  code *pcVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  
  uVar5 = 0x3615ed2f - *(int *)(param_2 + 0x88);
  uVar1 = *(uint64_t *)(param_2 + 0x3d8);
  bVar3 = (uint8_t)uVar1 & 0x1f;
  uVar4 = 0x3b57 - (short)*(uint32_t *)(param_2 + 0x858);
  *(uint32_t *)(((int64_t)(int)(uVar5 << bVar3 | uVar5 >> 0x20 - bVar3) ^ 0x794cc53eU) + 0x7fffa47ccd95
           ) = *(uint32_t *)((int64_t)
                         (int)(-0x103 - (SUB164(*(uint8_t (*) [16])(param_2 + 0x3f0),0) ^
                                        0xaedb44f6)) + 0x7fffa47ccfa5) & 0xfffffffd;
  (*(code *)((int64_t)(short)((uVar4 * 4 | uVar4 >> 0xe) - (short)uVar1) + 0x7fffa5626f71))();
  pcVar2 = (code *)__debugbreak();
  (*pcVar2)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520bad0  |  RVA: 0xa9bad0  |  Size: 304 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520bad0(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = *(int *)(param_2 + 0x3f0) + 0x9271f45f;
  *(uint32_t *)((int64_t)
            (short)((uint16_t)*(uint64_t *)(param_2 + 0x3d8) ^
                   ((short)*(uint64_t *)(param_2 + 0x858) + 0x3c91) * 0x4e3b) + 0x7fffa4788200) =
       *(uint32_t *)((int64_t)
                 (int)((uVar1 * 0x20000 | uVar1 >> 0xf) + 0x10f1759 ^ *(uint32_t *)(param_2 + 0x88)) +
                0x7fffa4792663) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa520bc00  |  RVA: 0xa9bc00  |  Size: 365 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520bc00(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  int iVar5;
  uint32_t uVar6;
  uint64_t in_R10;
  uint32_t uVar7;
  short sVar8;
  
  uVar1 = param_2 + 0x1e0;
  uVar7 = (uint32_t)*(uint64_t *)(param_2 + 0x30);
  uVar2 = *(uint64_t *)(param_2 + 0x3d8);
  uVar6 = (uint32_t)CONCAT62((int6)((uint64_t)in_R10 >> 0x10),0x6556) ^ 0xffffe870;
  uVar4 = (uVar7 | 1) * -0x601b9c0e ^ 0x9d60632a;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x2a8) & 0x1f;
  iVar5 = (int)*(uint64_t *)(param_2 + 0x440) + uVar7;
  sVar8 = ((short)uVar2 - (short)iVar5) + (short)uVar6;
  (*(code *)((int64_t)sVar8 + 0x7fffa52d7e89))
            (CONCAT22(((short)((uint64_t)uVar2 >> 0x10) - (short)((uint32_t)iVar5 >> 0x10)) +
                      (short)(uVar6 >> 0x10),sVar8),
             (uVar4 << bVar3 | uVar4 >> 0x20 - bVar3) + (int)uVar2,uVar2,
             (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520bd70  |  RVA: 0xa9bd70  |  Size: 334 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520bd70(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  code *pcVar3;
  
  uVar1 = param_2 + 0xa0;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x98) & 0x1f;
  pcVar3 = (code *)((int64_t)
                    (short)(((short)*(uint64_t *)(param_2 + 0x568) + 0x75f4) *
                           (short)*(uint32_t *)(param_2 + 0x8b8)) + 0x7fffa52d8c30);
  (*pcVar3)(*(uint64_t *)(param_2 + 0x98),
            (int)*(uint64_t *)(param_2 + 0x3d8) +
            (0xfc6709acU >> bVar2 | -0x398f654 << 0x20 - bVar2) + 0x65d85a66,pcVar3,
            (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520bec0  |  RVA: 0xa9bec0  |  Size: 323 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520bec0(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  
  uVar2 = (uint32_t)*(uint64_t *)(param_2 + 0x3d8);
  uVar1 = param_2 + 0x7b0;
  uVar3 = uVar1 * 0x1000000 | uVar1 >> 0x28;
  (*(code *)(&UNK_7fffa52e058e +
            (int)((*(int *)(param_2 + 0x47c) * -0x4ffcaadb ^ uVar2) + 0xad2108eb)))
            (uVar3,uVar2 + ((uint32_t)*(uint64_t *)(param_2 + 0x58) ^ 0x5f352e12) + -0xee7a5ae,param_3
             ,uVar3 ^ (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520c010  |  RVA: 0xa9c010  |  Size: 325 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520c010(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint16_t uVar5;
  int iVar6;
  
  uVar1 = param_2 + 0xa0;
  iVar6 = ((int)CONCAT62((int6)((uint64_t)param_2 >> 0x10),0xc066) + *(int *)(param_2 + 0x440)) *
          -0x4ecf;
  uVar5 = (uint16_t)iVar6;
  uVar5 = uVar5 << 0xe | uVar5 >> 2;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8);
  bVar2 = bVar3 & 0xf;
  uVar5 = uVar5 >> bVar2 | uVar5 << 0x10 - bVar2;
  uVar4 = (int)*(uint64_t *)(param_2 + 0x858) + 0xd01c2359;
  bVar3 = bVar3 & 0x1f;
  (*(code *)((int64_t)(short)uVar5 + 0x7fffa52d97fe))
            (*(uint64_t *)(param_2 + 0x3d8),uVar4 << bVar3 | uVar4 >> 0x20 - bVar3,
             CONCAT22((short)((uint32_t)iVar6 >> 0x10),uVar5),
             (uVar1 * 0x8000 | uVar1 >> 0x31) ^ (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520c160  |  RVA: 0xa9c160  |  Size: 170 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520c160(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint32_t uVar2;
  
  uVar2 = ~(*(int *)(param_2 + 0xa00) * 0x4120af8d);
  (*(code *)((int64_t)(int)((uVar2 << 0xb | uVar2 >> 0x15) - *(int *)(param_2 + 0x3d8)) +
            0x7fffa5630a4c))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520c210  |  RVA: 0xa9c210  |  Size: 273 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520c210(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = *(int *)(param_2 + 0x3f0) + 0xf487ff22;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) ^ *(uint32_t *)(param_2 + 0x858);
  (*(code *)((int64_t)(int)(uVar1 << 0x1b | uVar1 >> 5) + 0x7fffa52d1181))(param_2 + 0x480);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520c330  |  RVA: 0xa9c330  |  Size: 265 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520c330(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  uVar1 = (uint16_t)*(uint64_t *)(param_2 + 0x88) ^
          0x83dbU - (short)*(uint32_t *)(param_2 + 0x3d8);
  (*(code *)((int64_t)(short)(uVar1 << 9 | uVar1 >> 7) + 0x7fffa52cbead))(param_2 + 0x480);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520c440  |  RVA: 0xa9c440  |  Size: 268 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520c440(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0x1f;
  (*(code *)((int64_t)
             (int)(~(-0x9ab3b5b << bVar1 | 0xf654c4a5U >> 0x20 - bVar1) * *(int *)(param_2 + 0x7d8))
            + 0x7fffa52cf960))(param_2 + 0x480);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520c550  |  RVA: 0xa9c550  |  Size: 267 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520c550(uint64_t param_1,int64_t param_2)

{
  (*(code *)((int64_t)(short)((short)*(uint32_t *)(param_2 + 0x8b8) * -0x57ae + -0x685b) +
            0x7fffa52c6d81))(param_2 + 0x480);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520c660  |  RVA: 0xa9c660  |  Size: 321 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520c660(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 200) & 0xf;
  (*(code *)((int64_t)(short)~(0xf9a << bVar1 | 0xf9aU >> 0x10 - bVar1) + 0x7fffa52d2a20))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520c7b0  |  RVA: 0xa9c7b0  |  Size: 319 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520c7b0(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0xf3abc8fc - *(int *)(param_2 + 0x9a8);
  uVar1 = (int)*(uint64_t *)(param_2 + 0x8b8) * (uVar1 * 0x20000 | uVar1 >> 0xf);
  (*(code *)((int64_t)(int)(uVar1 * 0x400 | uVar1 >> 0x16) + 0x7fffa52d9e56))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520c8f0  |  RVA: 0xa9c8f0  |  Size: 324 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520c8f0(uint64_t param_1,int64_t param_2)

{
  (*(code *)((int64_t)
             (short)((uint16_t)*(uint64_t *)(param_2 + 0x8d8) ^
                    (-0x1952 - (short)*(uint64_t *)(param_2 + 0x3d8)) * 0xa4d + 0x324U) +
            0x7fffa52d5524))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520ca40  |  RVA: 0xa9ca40  |  Size: 351 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520ca40(uint64_t param_1,int64_t param_2)

{
  (*(code *)((int64_t)
             (short)((0xabaaU - (short)*(uint32_t *)(param_2 + 0x668) ^ 0xad50) +
                    (short)*(uint64_t *)(param_2 + 0x3d8)) + 0x7fffa52d63d7))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520cba0  |  RVA: 0xa9cba0  |  Size: 173 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520cba0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)
             (int)((*(int *)(param_2 + 0x290) + 0x350deb18U ^ *(uint32_t *)(param_2 + 0x3d8)) +
                   0xe60ab320 ^ 0x7731bcb8) + 0x7fffa562e2f8))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520cc50  |  RVA: 0xa9cc50  |  Size: 182 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520cc50(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint16_t uVar2;
  
  uVar2 = (uint16_t)(((uint16_t)((short)*(uint32_t *)(param_2 + 0x8b8) * 0x509b) - 0x491) *
                  ((uint32_t)*(uint64_t *)(param_2 + 0x8a0) | 1));
  (*(code *)(&UNK_7fffa5628167 + (short)(uVar2 << 2 | uVar2 >> 0xe)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520cd10  |  RVA: 0xa9cd10  |  Size: 473 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520cd10(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  int iVar4;
  uint16_t uVar5;
  int iVar6;
  uint32_t uVar7;
  
  uVar1 = *(uint64_t *)(param_2 + 0x3d8);
  uVar2 = *(uint64_t *)(param_2 + 0x948);
  uVar7 = (*(uint32_t *)(param_2 + 0x810) ^ 0x87bdfcf6) + 0xfd319ec3;
  iVar4 = (int)*(uint64_t *)(param_2 + 0x518);
  iVar6 = (int)CONCAT62((int6)((uint64_t)param_3 >> 0x10),0x1776) - *(int *)(param_2 + 0x710);
  bVar3 = (uint8_t)uVar1 & 0xf;
  uVar5 = (uint16_t)iVar6;
  uVar5 = (uVar5 << bVar3 | uVar5 >> 0x10 - bVar3) ^ 0xbb1a;
  uVar5 = uVar5 << 7 | uVar5 >> 9;
  (*(code *)((int64_t)(short)uVar5 + 0x7fffa52d5dbe))
            (uVar1,(iVar4 * 0x40000000 | (uint32_t)(iVar4 * -0x2c85f697) >> 2) *
                   *(int *)(param_2 + 0x8b8),CONCAT22((short)((uint32_t)iVar6 >> 0x10),uVar5),
             (uVar2 << 0xf | uVar2 >> 0x31) ^ (uVar2 << 0x18 | uVar2 >> 0x28) ^ uVar2);
  (*(code *)(&UNK_7fffa4a9e15d + (int)((uVar7 * 0x1000 | uVar7 >> 0x14) - (int)uVar1)))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520cef0  |  RVA: 0xa9cef0  |  Size: 155 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520cef0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)(int)~(*(uint32_t *)(param_2 + 0x568) ^ 0x1240734) + 0x7fffa562d509))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa520cf90  |  RVA: 0xa9cf90  |  Size: 319 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520cf90(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  short sVar2;
  uint32_t uVar3;
  
  uVar1 = param_2 + 0x360;
  sVar2 = (short)*(uint64_t *)(param_2 + 0x800);
  uVar3 = *(uint32_t *)(param_2 + 0x3d8) ^ 0xe0a0cb2b;
  (*(code *)(&UNK_7fffa52daa26 + (short)~(sVar2 * 0x2980 | (uint16_t)(sVar2 * -0x375a) >> 10)))
            (&UNK_7fffa52daa26 + (short)~(sVar2 * 0x2980 | (uint16_t)(sVar2 * -0x375a) >> 10),
             (uVar3 << 0x12 | uVar3 >> 0xe) + (int)*(uint64_t *)(param_2 + 0x88),param_3,
             (uVar1 * 0x8000 | uVar1 >> 0x31) ^ (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520d0d0  |  RVA: 0xa9d0d0  |  Size: 317 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520d0d0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint16_t uVar4;
  int iVar5;
  uint32_t uVar6;
  
  uVar1 = param_2 + 0x360;
  uVar6 = (uint32_t)*(uint64_t *)(param_2 + 0x3d8);
  uVar3 = 0xe3f41bdf - uVar6;
  iVar5 = (int)CONCAT62((int6)((uint64_t)param_1 >> 0x10),0x868b) * 0x6067;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x858) & 0xf;
  uVar4 = (uint16_t)iVar5;
  uVar6 = CONCAT22((short)((uint32_t)iVar5 >> 0x10),uVar4 >> bVar2 | uVar4 << 0x10 - bVar2) ^ uVar6;
  (*(code *)((int64_t)(short)uVar6 + 0x7fffa52d9a94))
            (*(uint64_t *)(param_2 + 0x858),
             (uVar3 * 0x400000 | uVar3 >> 10) ^ *(uint32_t *)(param_2 + 0x88),uVar6,
             (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520d210  |  RVA: 0xa9d210  |  Size: 317 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520d210(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  uVar2 = *(uint64_t *)(param_2 + 0x3d8);
  uVar1 = param_2 + 0x360;
  uVar3 = uVar1 * 0x1000000 | uVar1 >> 0x28;
  (*(code *)(&UNK_7fffa52d6fff +
            (short)(((uint16_t)*(uint64_t *)(param_2 + 0x858) ^ 0x26a6) * -0x39e7 ^ (uint16_t)uVar2)))
            (uVar3,~(0x5dde8d6U - (int)uVar2 ^ (uint32_t)*(uint64_t *)(param_2 + 0x858)),uVar2,
             (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar3 ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520d350  |  RVA: 0xa9d350  |  Size: 308 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520d350(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  
  uVar1 = param_2 + 0x360;
  (*(code *)(&UNK_7fffa52e08bb + (*(int *)(param_2 + 0x8b8) * -0x2824aa62 + -0x787527d1)))
            (param_1,*(uint32_t *)(param_2 + 0x3d8) ^ 0x95bc7402,param_3,
             (uVar1 * 0x8000 | uVar1 >> 0x31) ^ (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520d490  |  RVA: 0xa9d490  |  Size: 287 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520d490(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  if (*(int64_t *)(param_2 + 0x120) != 0) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0xf;
    uVar2 = 0x5bc6 << bVar1 | 0x5bc6U >> 0x10 - bVar1;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x670) & 0xf;
    uVar2 = uVar2 >> bVar1 | uVar2 << 0x10 - bVar1;
    (*(code *)((int64_t)(short)(uVar2 << 0xe | uVar2 >> 2) + 0x7fffa508990f))
              (*(int64_t *)(param_2 + 0x120),0x50);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa520d5b0  |  RVA: 0xa9d5b0  |  Size: 283 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520d5b0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  if (*(int64_t *)(param_2 + 0x3c8) != 0) {
    uVar2 = 0xebaa - (short)*(uint32_t *)(param_2 + 0x3d8);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x440) & 0xf;
    (*(code *)((int64_t)(short)(uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) + 0x7fffa5086614))
              (*(int64_t *)(param_2 + 0x3c8),0x50);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa520d6d0  |  RVA: 0xa9d6d0  |  Size: 276 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520d6d0(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  if (*(int64_t *)(param_2 + 0x678) != 0) {
    uVar1 = *(int *)(param_2 + 0xe0) + 0x6443f64e;
    (*(code *)(&UNK_7fffa5091540 +
              (int)((uVar1 * 0x200000 | uVar1 >> 0xb) - *(int *)(param_2 + 0x3d8))))
              (*(int64_t *)(param_2 + 0x678),0x50);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa520d7f0  |  RVA: 0xa9d7f0  |  Size: 290 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520d7f0(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  
  if (*(int64_t *)(param_2 + 0x720) != 0) {
    iVar1 = (int)*(uint64_t *)(param_2 + 0x518);
    (*(code *)(&UNK_7fffa508da95 +
              (int)((iVar1 * -0x65000000 | (uint32_t)(iVar1 * -0x45071165) >> 8) *
                   *(int *)(param_2 + 0x640))))(*(int64_t *)(param_2 + 0x720),0x50);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa520d920  |  RVA: 0xa9d920  |  Size: 265 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520d920(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  uVar2 = 0xe402922bU - *(int *)(param_2 + 0x950) ^ 0xd0519a05;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0x1f;
  (*(code *)((int64_t)(int)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) + 0x7fffa52cfd83))
            (param_2 + 0x590);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520da30  |  RVA: 0xa9da30  |  Size: 264 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520da30(uint64_t param_1,int64_t param_2)

{
  (*(code *)((int64_t)
             (short)~((uint16_t)*(uint64_t *)(param_2 + 0x670) ^
                     (short)*(uint32_t *)(param_2 + 0x8b8) * 0x368a) + 0x7fffa52c8bc7))
            (param_2 + 0x590);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520db40  |  RVA: 0xa9db40  |  Size: 265 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520db40(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  uVar2 = SUB164(*(uint8_t (*) [16])(param_2 + 0x3f0),0) ^ 0x6e4ab43c;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x220) & 0x1f;
  (*(code *)((int64_t)(int)((uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) + 0x39fa98ef) + 0x7fffa52d390e
            ))(param_2 + 0x590);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520dc50  |  RVA: 0xa9dc50  |  Size: 269 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520dc50(uint64_t param_1,int64_t param_2)

{
  (*(code *)((int64_t)
             (int)(((SUB164(*(uint8_t (*) [16])(param_2 + 0x3f0),0) ^ 0xa90371c1) -
                   *(int *)(param_2 + 0x88)) + -0x2a2f2223) + 0x7fffa52d3e37))(param_2 + 0x590);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520dd60  |  RVA: 0xa9dd60  |  Size: 264 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520dd60(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  uVar1 = (uint16_t)(*(int *)(param_2 + 0x564) * -0xbe9c);
  (*(code *)((int64_t)(short)(uVar1 << 7 | uVar1 >> 9) + 0x7fffa52c74fd))(param_2 + 0x590);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520de70  |  RVA: 0xa9de70  |  Size: 261 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520de70(uint64_t param_1,int64_t param_2)

{
  (*(code *)((int64_t)(int)((*(uint32_t *)(param_2 + 0x3d8) ^ 0xc2a7c450) * 0x2e7ef6d1) +
            0x7fffa52d3aec))(param_2 + 0x590);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520df80  |  RVA: 0xa9df80  |  Size: 254 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520df80(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa52c5b40(param_2 + 0x590);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520e080  |  RVA: 0xa9e080  |  Size: 274 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520e080(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  uVar1 = (uint16_t)*(uint32_t *)(param_2 + 0x8d8) ^ 0x1150;
  (*(code *)((int64_t)
             (short)((short)*(uint64_t *)(param_2 + 0x3d8) + (uVar1 << 4 | uVar1 >> 0xc) + -0x2d68
                    ) + 0x7fffa52c63c1))(param_2 + 0x590);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520e1a0  |  RVA: 0xa9e1a0  |  Size: 418 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520e1a0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  int iVar8;
  
  iVar8 = (int)*(uint64_t *)(param_2 + 0x8b8);
  uVar1 = param_2 + 0x1e0;
  uVar7 = uVar1 * 0x8000 | uVar1 >> 0x31;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x58) & 0x1f;
  uVar5 = uVar1 * 0x1000000 | uVar1 >> 0x28;
  uVar6 = (0x96dbe5cfU >> bVar2 | -0x69241a31 << 0x20 - bVar2) * iVar8;
  uVar4 = (uint32_t)*(uint64_t *)(param_2 + 0x180) | 1;
  uVar4 = uVar4 * -0x3e1b7988 | uVar4 * 0x3079219e >> 0x1e;
  uVar3 = uVar1 ^ uVar7;
  if ((uint64_t)(int64_t)(int)(uVar4 - *(int *)(param_2 + 0x3f0)) <
      (uint64_t)((iVar8 * -0x23767e9 ^ 0xb582f5fbU) * *(int *)(param_2 + 0x1d8) + 0x64e865fa)) {
    uVar3 = uVar7 & uVar1;
  }
  (*(code *)(&UNK_7fffa52e05f7 + (int)(uVar6 * 0x200000 | uVar6 >> 0xb)))
            (uVar4,(0x1546f2b4 - *(int *)(param_2 + 0x6c0)) * iVar8,uVar5,uVar3 ^ uVar5);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520e350  |  RVA: 0xa9e350  |  Size: 321 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520e350(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  
  uVar2 = *(uint64_t *)(param_2 + 0x3d8);
  bVar3 = (uint8_t)uVar2 & 0x1f;
  uVar1 = param_2 + 0xa0;
  uVar4 = uVar1 * 0x1000000 | uVar1 >> 0x28;
  uVar5 = (*(uint32_t *)(param_2 + 0x858) ^ 0xc2b9130c) + (int)uVar2;
  (*(code *)(&UNK_7fffa52dca4b + (int)(uVar5 >> 1 | (uint32_t)((uVar5 & 1) != 0) << 0x1f)))
            (uVar2,(0xa3d3e965U >> bVar3 | -0x5c2c169b << 0x20 - bVar3) *
                   ((uint32_t)*(uint64_t *)(param_2 + 0x860) | 1),uVar4,
             uVar4 ^ (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520e4a0  |  RVA: 0xa9e4a0  |  Size: 298 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520e4a0(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar1 = param_2 + 0xa0;
  uVar3 = ~((uint32_t)*(uint64_t *)(param_2 + 0x128) ^ 0xf02561ed);
  iVar2 = 0x7d93 - (*(uint32_t *)(param_2 + 0x3d8) ^ 0xf0257841);
  (*(code *)((int64_t)(short)iVar2 + 0x7fffa52da2f2))
            (iVar2,uVar3 << 2 | uVar3 >> 0x1e,param_3,
             (uVar1 * 0x8000 | uVar1 >> 0x31) ^ (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520e5d0  |  RVA: 0xa9e5d0  |  Size: 355 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520e5d0(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint32_t uVar3;
  
  uVar1 = param_2 + 0x7b0;
  uVar3 = 0x7b03a2ae - *(int *)(param_2 + 0x3d8);
  uVar3 = (uVar3 * 0x80 | uVar3 >> 0x19) ^ *(uint32_t *)(param_2 + 0x4f8);
  uVar2 = (uVar1 * 0x8000 | uVar1 >> 0x31) ^ (uVar1 * 0x1000000 | uVar1 >> 0x28);
  (*(code *)((int64_t)
             (int)(*(int *)(param_2 + 0x870) + (uVar3 >> 1 | (uint32_t)((uVar3 & 1) != 0) << 0x1f)) +
            0x7fffa52e2a29))
            (uVar2,((int)*(uint64_t *)(param_2 + 0x8b8) * 0x574fbcb8 - *(int *)(param_2 + 0x670))
                   * *(int *)(param_2 + 0x7a0) ^ 0x35711922,param_3,uVar2 ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520e740  |  RVA: 0xa9e740  |  Size: 387 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520e740(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  uint64_t uVar2;
  
  uVar1 = *(int *)(param_2 + 0x728) * (*(int *)(param_2 + 0x8b8) * -0x58248958 + -0x3ae4787f);
  uVar1 = uVar1 >> 1 | (uint32_t)((uVar1 & 1) != 0) << 0x1f;
  uVar2 = (int64_t)(int)uVar1 + (param_2 + 0x590 << 0x23) + param_2 + 0x590;
  (*(code *)((int64_t)(short)(-0x5666 - ((short)*(uint32_t *)(param_2 + 0xf8) + 0x2a8)) +
            0x7fffa558d9f5))(uVar1,uVar2 * 8 | uVar2 >> 0x3d);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520e8d0  |  RVA: 0xa9e8d0  |  Size: 374 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520e8d0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint64_t uVar2;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0x1f;
  uVar2 = (param_2 + 0x590 + (param_2 + 0x590 << 0x23)) - 0x586aca59;
  (*(code *)(&UNK_7fffa5591db1 +
            (int)((0xbe01e117U >> bVar1 | -0x41fe1ee9 << 0x20 - bVar1) *
                 ((uint32_t)*(uint64_t *)(param_2 + 0x98) | 1))))
            (*(uint64_t *)(param_2 + 0x3d8),uVar2 * 8 | uVar2 >> 0x3d);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520ea50  |  RVA: 0xa9ea50  |  Size: 441 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520ea50(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar1 = param_2 + 0x9d0;
  uVar5 = uVar1 * 0x1000000 | uVar1 >> 0x28;
  uVar2 = *(uint64_t *)(param_2 + 0xf8);
  uVar3 = *(uint64_t *)(param_2 + 0x3d8);
  uVar4 = *(uint64_t *)(param_2 + 0x810);
  uVar6 = (*(code *)(&UNK_7fffa52e1014 +
                    (int)((0xebe83a39U - *(int *)(param_2 + 0x930) ^ (uint32_t)uVar3) + 0x5453de7b)))
                    (uVar3,((int)*(uint64_t *)(param_2 + 0x8b8) * 0x555d6f31 -
                           *(int *)(param_2 + 0x8d8)) * 0x7b7c78f9 + 0xe5b8dc3,uVar5,
                     uVar5 ^ (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar1);
  (*(code *)((int64_t)(short)(~((short)uVar2 + 0x761cU) - (short)uVar3) + 0x7fffa52d6038))
            (uVar6,((uint32_t)uVar4 | 1) * ((uint32_t)uVar3 + 0x8b8faeb6));
  return;
}


// ============================================================================
// Function : Unwind@7fffa520ec10  |  RVA: 0xa9ec10  |  Size: 450 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520ec10(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint16_t uVar7;
  uint64_t uVar8;
  
  uVar1 = param_2 + 0x450;
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x568) & 0xf;
  uVar5 = *(uint32_t *)(param_2 + 0x730);
  uVar2 = *(uint64_t *)(param_2 + 0x3d8);
  uVar7 = (short)*(uint32_t *)(param_2 + 0x8b8) * -0x647e + 0x52df;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x8a0) & 0xf;
  uVar6 = ~((uint32_t)uVar2 ^ 0x3502b241) - *(int *)(param_2 + 0x858);
  uVar8 = (*(code *)(&UNK_7fffa52da9e9 +
                    (short)((0x3f65U >> bVar4 | 0x3f65 << 0x10 - bVar4) + (short)uVar2)))
                    (*(uint64_t *)(param_2 + 0x8a0),uVar6 * 0x8000 | uVar6 >> 0x11,uVar2,
                     (uVar1 * 0x8000 | uVar1 >> 0x31) ^ (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ uVar1)
  ;
  (*(code *)((int64_t)(short)(uVar7 << bVar3 | uVar7 >> 0x10 - bVar3) + 0x7fffa52da532))
            (uVar8,0x2ec98859 - ((uVar5 ^ 0x45a285d3) + (uint32_t)uVar2));
  return;
}


// ============================================================================
// Function : Unwind@7fffa520ede0  |  RVA: 0xa9ede0  |  Size: 317 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520ede0(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  
  uVar1 = param_2 + 0x6f0;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8);
  bVar2 = bVar3 & 0x1f;
  bVar3 = bVar3 & 0x1f;
  (*(code *)(&UNK_7fffa52dd48c +
            (int)((0xee8d37d7U >> bVar2 | -0x1172c829 << 0x20 - bVar2) - *(int *)(param_2 + 0x4f8)))
  )(*(uint64_t *)(param_2 + 0x3d8),~(-0x63b67e85 << bVar3 | 0x9c49817bU >> 0x20 - bVar3),param_3,
    (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520ef20  |  RVA: 0xa9ef20  |  Size: 323 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520ef20(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  code *pcVar4;
  uint32_t uVar5;
  
  uVar1 = param_2 + 0x7b0;
  uVar5 = 0x2edb2473 - *(int *)(param_2 + 0x3d8);
  uVar5 = uVar5 * 0x40000 | uVar5 >> 0xe;
  uVar2 = *(uint64_t *)(param_2 + 0x808);
  bVar3 = (uint8_t)uVar2 & 0x1f;
  pcVar4 = (code *)((int64_t)(int)(uVar5 >> bVar3 | uVar5 << 0x20 - bVar3) + 0x7fffa52e2c22);
  (*pcVar4)(uVar2,((int)uVar2 + -0x5f175dc3) * *(int *)(param_2 + 0x8b8),pcVar4,
            (uVar1 * 0x8000 | uVar1 >> 0x31) ^ (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520f070  |  RVA: 0xa9f070  |  Size: 270 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520f070(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa5146a00(*(uint64_t *)(param_2 + 0x3d8));
  return;
}


// ============================================================================
// Function : Unwind@7fffa520f180  |  RVA: 0xa9f180  |  Size: 386 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520f180(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  int iVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  
  iVar2 = (int)*(uint64_t *)(param_2 + 0x8b8);
  uVar3 = iVar2 * -0x28842ee9;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x858) & 0x1f;
  uVar3 = uVar3 >> bVar1 | uVar3 << 0x20 - bVar1;
  uVar4 = (param_2 + 0x590 << 0x23) + param_2 + 0x590 +
          (int64_t)(int)((0x5b44c50d - *(int *)(param_2 + 0x88)) * iVar2 ^ 0x23ccfb23);
  (*(code *)((int64_t)(int)((uVar3 << 0x1b | uVar3 >> 5) + 0xa0cc09a8) + 0x7fffa5595d72))
            (*(uint64_t *)(param_2 + 0x858),uVar4 * 8 | uVar4 >> 0x3d);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520f310  |  RVA: 0xa9f310  |  Size: 649 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520f310(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint8_t bVar4;
  uint16_t uVar5;
  int iVar6;
  uint64_t uVar7;
  uint32_t uVar8;
  uint64_t unaff_R13;
  
  uVar7 = param_2 + 0x7b0;
  *(uint64_t *)(param_2 + 0x7d8) = 0x7fffa52d8c91;
  uVar3 = *(uint64_t *)(param_2 + 0x3d8);
  uVar8 = (uint32_t)uVar3;
  *(uint64_t *)(param_2 + 0x30) =
       (uint64_t)(uVar8 + 0xfa221729 ^ (uint32_t)*(uint64_t *)(param_2 + 0x858));
  uVar5 = (short)*(uint64_t *)(param_2 + 0x858) + 0xed73;
  uVar1 = param_2 + 0x6f0;
  *(uint64_t *)(param_2 + 0x890) = 0x7fffa52d918e;
  uVar7 = (uVar7 * 0x1000000 | uVar7 >> 0x28) ^ (uVar7 * 0x8000 | uVar7 >> 0x31) ^ uVar7;
  *(uint64_t *)(param_2 + 0xc0) = uVar7;
  bVar4 = (uint8_t)uVar3 & 0xf;
  *(uint64_t *)(param_2 + 0x68) =
       (uint64_t)(uVar8 + (int)*(uint64_t *)(param_2 + 0x910) * -0x5f28e64c + 0x3ffffec6);
  uVar2 = param_2 + 0x450;
  *(uint64_t *)(param_2 + 0x188) = uVar1;
  *(uint64_t *)(param_2 + 0xa08) = uVar1 * 0x8000 | uVar1 >> 0x31 | uVar1;
  (*(code *)(&UNK_7fffa52db29c + (short)(uVar5 << bVar4 | uVar5 >> 0x10 - bVar4)))
            (&UNK_7fffa52db29c + (short)(uVar5 << bVar4 | uVar5 >> 0x10 - bVar4),
             (uVar8 + 0x6a36fa5b) - (int)*(uint64_t *)(param_2 + 0x88),uVar7,
             (uVar2 * 0x8000 | uVar2 >> 0x31) ^ (uVar2 * 0x1000000 | uVar2 >> 0x28) ^ uVar2);
  (*(code *)((int64_t)(short)((short)uVar3 + 0xe18eU ^ 0xd23d) + *(int64_t *)(param_2 + 0x7d8)))
            (uVar3 & 0xffffffff,*(uint64_t *)(param_2 + 0x30));
  uVar8 = (uint32_t)CONCAT62((int6)((uint64_t)unaff_R13 >> 0x10),0xf576) ^ uVar8;
  uVar5 = (uint16_t)uVar8 >> 1 | (uint16_t)((uVar8 & 1) != 0) << 0xf;
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x858) & 0xf;
  iVar6 = CONCAT22((short)(uVar8 >> 0x10),uVar5 >> bVar4 | uVar5 << 0x10 - bVar4) * 0x1c43;
  (*(code *)((int64_t)(short)iVar6 + *(int64_t *)(param_2 + 0x890)))
            (iVar6,*(uint64_t *)(param_2 + 0x68));
  return;
}


// ============================================================================
// Function : Unwind@7fffa520f5a0  |  RVA: 0xa9f5a0  |  Size: 365 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520f5a0(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  
  iVar1 = (int)*(uint64_t *)(param_2 + 0x3d8);
  uVar2 = 0xaf5d5568U - iVar1 ^ *(uint32_t *)(param_2 + 0x440);
  uVar4 = (param_2 + 0x590 + (param_2 + 0x590 << 0x23)) - 0x586aca59;
  uVar3 = iVar1 + 0x6cc715ac;
  (*(code *)((int64_t)(int)((uVar2 << 6 | uVar2 >> 0x1a) + 0xf5b2bc21) + 0x7fffa5594578))
            (0xd1febf88,uVar4 * 8 | uVar4 >> 0x3d,*(uint64_t *)(param_2 + 0x3d8),
             (uVar3 * 0x200000 | uVar3 >> 0xb) + *(int *)(param_2 + 0x860));
  return;
}


// ============================================================================
// Function : Unwind@7fffa520f710  |  RVA: 0xa9f710  |  Size: 444 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520f710(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  
  uVar2 = *(uint64_t *)(param_2 + 0x3d8);
  uVar1 = param_2 + 0x9d0;
  bVar3 = (uint8_t)uVar2 & 0x1f;
  uVar5 = 0x850bc72bU >> bVar3 | -0x7af438d5 << 0x20 - bVar3;
  (*(code *)(&UNK_7fffa52debf4 + ((int)*(uint64_t *)(param_2 + 0x440) + 0x2356c7f9)))
            (uVar2,~(((int)*(uint64_t *)(param_2 + 0x670) - (int)uVar2) + 0xc6b3b849U),uVar5,
             (uVar1 * 0x8000 | uVar1 >> 0x31) ^ (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ uVar1);
  uVar4 = *(int *)(param_2 + 0x640) * -0x623aaa20;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x858) & 0x1f;
  (*(code *)(&UNK_7fffa52de035 + (int)(-0x47afe743 - uVar5)))
            (*(uint64_t *)(param_2 + 0x858),(uVar4 << bVar3 | uVar4 >> 0x20 - bVar3) + 0x163ce45d)
  ;
  return;
}


// ============================================================================
// Function : Unwind@7fffa520f8d0  |  RVA: 0xa9f8d0  |  Size: 318 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520f8d0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint64_t in_R10;
  
  uVar1 = param_2 + 0x6f0;
  uVar3 = (uint32_t)*(uint64_t *)(param_2 + 0x390);
  iVar2 = (int)*(uint64_t *)(param_2 + 0x3d8);
  uVar4 = uVar3 ^ ((int)CONCAT62((int6)((uint64_t)in_R10 >> 0x10),0x45ed) + iVar2) * -0x7cb5;
  (*(code *)((int64_t)(short)uVar4 + 0x7fffa52d9443))
            (*(uint64_t *)(param_2 + 0x3d8),((uVar3 ^ 0xc408ce83) - iVar2) + -0x5688ad5b,uVar4,
             (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520fa10  |  RVA: 0xa9fa10  |  Size: 255 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520fa10(uint64_t param_1,int64_t param_2)

{
  (*(code *)((int64_t)
             (short)(((short)*(uint64_t *)(param_2 + 0x710) + -0x1cb8) *
                    (short)*(uint32_t *)(param_2 + 0x8b8)) + 0x7fffa52cd41c))(param_2 + 0x590);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520fb10  |  RVA: 0xa9fb10  |  Size: 270 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520fb10(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  uVar2 = *(int *)(param_2 + 0x3f0) + 0x8b23c240;
  uVar2 = (uVar2 * 0x100000 | uVar2 >> 0xc) + 0xd9cbe00a;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x98) & 0x1f;
  (*(code *)((int64_t)(int)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) + 0x7fffa52d5303))
            (param_2 + 0x590);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520fc20  |  RVA: 0xa9fc20  |  Size: 248 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520fc20(uint64_t param_1,int64_t param_2)

{
  short sVar1;
  
  sVar1 = (short)*(uint32_t *)(param_2 + 0x8b8);
  (*(code *)((int64_t)(short)~(sVar1 * -0x79c0 | (uint16_t)(sVar1 * 0x70c8) >> 0xd) + 0x7fffa52c8a83)
  )(param_2 + 0x590);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520fd20  |  RVA: 0xa9fd20  |  Size: 268 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520fd20(uint64_t param_1,int64_t param_2)

{
  (*(code *)((int64_t)
             (((int)*(uint64_t *)(param_2 + 0x8d0) - (*(int *)(param_2 + 0x3f0) + 0x79c6a3bf)) +
             0x28a1ac4e) + 0x7fffa52ced4a))(param_2 + 0x590);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520fe30  |  RVA: 0xa9fe30  |  Size: 294 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520fe30(uint64_t param_1,int64_t param_2)

{
  short sVar1;
  
  sVar1 = (short)(((uint32_t)*(uint64_t *)(param_2 + 0x9a8) | 1) * 0x33dd + -0x65c7);
  (*(code *)(&UNK_7fffa4d0a627 +
            (short)((sVar1 << 1 | (uint16_t)(sVar1 < 0)) - (short)*(uint64_t *)(param_2 + 0x3d8))))
            (*(uint64_t *)(param_2 + 0x3d8),*(int64_t *)(param_2 + 0x438) * 0x20001);
  return;
}


// ============================================================================
// Function : Unwind@7fffa520ff60  |  RVA: 0xa9ff60  |  Size: 321 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa520ff60(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  uint32_t uVar4;
  
  iVar3 = (int)*(uint64_t *)(param_2 + 0x50);
  uVar4 = (uint32_t)*(uint64_t *)(param_2 + 0x3d8);
  uVar1 = param_2 + 0x4e0;
  uVar2 = uVar1 * 0x8000 | uVar1 >> 0x31;
  (*(code *)(&UNK_7fffa52e2569 + (int)(-0x5d81b0fc - (uVar4 ^ 0xca4aba9))))
            (uVar2,(iVar3 * 0x16800000 | (uint32_t)(iVar3 * 0x2667585a) >> 10) + 0x7b03d097 ^ uVar4,
             param_3,(uVar1 * 0x1000000 | uVar1 >> 0x28) ^ uVar2 ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa52100b0  |  RVA: 0xaa00b0  |  Size: 317 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa52100b0(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  code *pcVar2;
  uint32_t uVar3;
  
  uVar1 = param_2 + 0x9b0;
  uVar3 = *(uint32_t *)(param_2 + 0x840) ^ 0xf68e8c3d;
  pcVar2 = (code *)((int64_t)
                    (short)(((uint16_t)*(uint64_t *)(param_2 + 0x8d8) ^ 0x1845) + 0x64af ^ 0x7f8d) +
                   0x7fffa52d52bd);
  (*pcVar2)(pcVar2,(uVar3 << 0x1d | uVar3 >> 3) + *(int *)(param_2 + 0x3d8),param_3,
            (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa52101f0  |  RVA: 0xaa01f0  |  Size: 331 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa52101f0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  int iVar4;
  int iVar5;
  uint16_t uVar6;
  uint32_t uVar7;
  uint64_t in_R10;
  
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x808) & 0x1f;
  uVar1 = param_2 + 0x970;
  uVar7 = (uint32_t)*(uint64_t *)(param_2 + 0x88) ^
          (int)CONCAT62((int6)((uint64_t)in_R10 >> 0x10),0xfdd9) - 0x658eU;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0xf;
  uVar6 = (uint16_t)uVar7;
  iVar4 = CONCAT22((short)(uVar7 >> 0x10),uVar6 >> bVar2 | uVar6 << 0x10 - bVar2);
  iVar5 = iVar4 * 0x29;
  (*(code *)((int64_t)(short)iVar5 + 0x7fffa52d91f7))
            (iVar5,~(0x2f738930U >> bVar3 | 0x2f738930 << 0x20 - bVar3),iVar4,
             (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa5210340  |  RVA: 0xaa0340  |  Size: 311 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5210340(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  code *pcVar2;
  uint32_t uVar3;
  
  uVar1 = param_2 + 0x240;
  pcVar2 = (code *)((int64_t)(short)(0x567c - ((short)*(uint64_t *)(param_2 + 0x3d8) + -0x375)) +
                   0x7fffa52d7ed3);
  uVar3 = *(int *)(param_2 + 0x3ec) * 0x5a661f70 ^ (uint32_t)*(uint64_t *)(param_2 + 0x3d8);
  (*pcVar2)(pcVar2,uVar3 << 9 | uVar3 >> 0x17,param_3,
            (uVar1 * 0x8000 | uVar1 >> 0x31) ^ (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa5210480  |  RVA: 0xaa0480  |  Size: 286 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5210480(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  uVar2 = (-0x1965 - (short)*(uint32_t *)(param_2 + 0x88)) * -0x1ed1;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0xf;
  (*(code *)((int64_t)(short)(uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) + 0x7fffa514849f))();
  return;
}


// ============================================================================
// Function : FUN_7fffa5210660  |  RVA: 0xaa0660  |  Size: 1 bytes
// Callers  : FUN_7fffa5687890@0xf17890, FUN_7fffa4ab2700@0x342700, FUN_7fffa4e8ea00@0x71ea00, FUN_7fffa5451110@0xce1110
// Callees  : none
// ============================================================================
void FUN_7fffa5210660(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5210688  |  RVA: 0xaa0688  |  Size: 64 bytes
// Callers  : none
// Callees  : FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa5210688(void)

{
  int iVar1;
  
  LOCK();
  iVar1 = *_DAT_7fffa47825c8;
  *_DAT_7fffa47825c8 = *_DAT_7fffa47825c8 + -1;
  UNLOCK();
  if ((iVar1 == 1) && (_DAT_7fffa47825c8 != (int *)0x7fffa4780250)) {
    FUN_7fffa52d8dd0();
    _DAT_7fffa47825c8 = (int *)0x7fffa4780250;
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa52106c8  |  RVA: 0xaa06c8  |  Size: 288 bytes
// Callers  : none
// Callees  : FUN_7fffa5130600@0x9c0600, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa55b02f4@0xe402f4
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa52106c8(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint32_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  lVar1 = 0;
  lVar4 = 3;
  if (_DAT_7fffa4781c10 == 0) {
    _DAT_7fffa4781c10 = 0x200;
  }
  else if (_DAT_7fffa4781c10 < 3) {
    _DAT_7fffa4781c10 = 3;
  }
  _DAT_7fffa4781c18 = FUN_7fffa5130600((int64_t)_DAT_7fffa4781c10,8);
  FUN_7fffa52d8dd0(0);
  if (_DAT_7fffa4781c18 == 0) {
    _DAT_7fffa4781c10 = 3;
    _DAT_7fffa4781c18 = FUN_7fffa5130600(3,8);
    FUN_7fffa52d8dd0(0);
    if (_DAT_7fffa4781c18 == 0) {
      return 0xffffffff;
    }
  }
  lVar2 = 0;
  puVar3 = (uint32_t *)0x7fffa4780138;
  lVar5 = 0x7fffa4780120;
  do {
    FUN_7fffa55b02f4(lVar5 + 0x30,4000,0);
    *(int64_t *)(lVar1 + _DAT_7fffa4781c18) = lVar5;
    if (*(int64_t *)
         (*(int64_t *)(&DAT_7fffa4782180 + (lVar2 >> 6) * 8) + 0x28 +
         (uint64_t)((uint32_t)lVar2 & 0x3f) * 0x48) + 2U < 3) {
      *puVar3 = 0xfffffffe;
    }
    lVar2 = lVar2 + 1;
    lVar5 = lVar5 + 0x58;
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 0x16;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return 0;
}


// ============================================================================
// Function : FUN_7fffa52107f0  |  RVA: 0xaa07f0  |  Size: 9524 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52107f0(void) {
    /* +0xaa07f0 */ __asm { PUSH RBP }
    /* +0xaa07f1 */ __asm { PUSH R12 }
    /* +0xaa07f3 */ __asm { PUSH R15 }
    /* +0xaa07f5 */ __asm { PUSH RSI }
    /* +0xaa07f6 */ __asm { PUSH R13 }
    /* +0xaa07f8 */ __asm { PUSH RDI }
    /* +0xaa07f9 */ __asm { PUSH R14 }
    /* +0xaa07fb */ __asm { PUSH RBX }
    /* +0xaa07fc */ __asm { SUB RSP,0x108 }
    /* +0xaa0803 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xaa080b */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM9 }
    /* +0xaa0811 */ __asm { MOV qword ptr [RBP + 0x68],-0x2 }
    /* +0xaa0819 */ __asm { MOV R12,R8 }
    /* +0xaa081c */ __asm { MOV R11W,0x71c7 }
    /* +0xaa0821 */ __asm { SUB R11D,R12D }
    /* +0xaa0824 */ __asm { ADD R11D,0xffffd913 }
    /* +0xaa082b */ __asm { MOVZX ECX,R11W }
    /* +0xaa082f */ __asm { MOV RDI,0x1001001001001001 }
    /* +0xaa0839 */ __asm { IMUL RDI,R10 }
    /* +0xaa083d */ __asm { XOR RDI,-0xc21bc86 }
    /* +0xaa0844 */ __asm { MOV RAX,qword ptr GS:[RCX] }
    /* +0xaa0848 */ __asm { MOV RAX,qword ptr [RAX + 0x60] }
    /* +0xaa084c */ __asm { MOV RDX,-0x2519c2a3d9830685 }
    /* +0xaa0856 */ __asm { OR RDX,RAX }
    /* +0xaa0859 */ __asm { XOR RDX,0x2e275e9c }
    /* +0xaa0860 */ __asm { MOV RAX,-0x61ccaf53d3efa3a7 }
    /* +0xaa086a */ __asm { MOV qword ptr [RBP + -0x10],RDX }
    /* +0xaa086e */ __asm { CMP RDX,RAX }
    /* +0xaa0871 */ __asm { JZ 0x7fffa521344c }
    /* +0xaa0877 */ __asm { XOR R11D,R11D }
    /* +0xaa087a */ __asm { MOV RDX,0x52995a2ac21907d1 }
    /* +0xaa0884 */ __asm { MOV R10D,R12D }
    /* +0xaa0887 */ __asm { OR R10D,0x1 }
    /* +0xaa088b */ __asm { MOV dword ptr [RBP + 0x64],R10D }
    /* +0xaa088f */ __asm { MOV R10D,R12D }
    /* +0xaa0892 */ __asm { OR R10D,0x1 }
    /* +0xaa0896 */ __asm { MOV dword ptr [RBP + 0x24],R10D }
    /* +0xaa089a */ __asm { MOVD XMM2,R12D }
    /* +0xaa089f */ __asm { MOVDQA xmmword ptr [RBP + 0x50],XMM2 }
    /* +0xaa08a4 */ __asm { MOV R10D,R12D }
    /* +0xaa08a7 */ __asm { OR R10D,0x1 }
    /* +0xaa08ab */ __asm { MOV dword ptr [RBP + 0x60],R10D }
    /* +0xaa08af */ __asm { MOVQ XMM2,R12 }
    /* +0xaa08b4 */ __asm { MOVDQA xmmword ptr [RBP + 0x10],XMM2 }
    /* +0xaa08b9 */ __asm { MOVD XMM2,R12D }
    /* +0xaa08be */ __asm { MOVDQA xmmword ptr [RBP + -0x30],XMM2 }
    /* +0xaa08c3 */ __asm { MOV R10D,R12D }
    /* +0xaa08c6 */ __asm { OR R10D,0x1 }
    /* +0xaa08ca */ __asm { MOV dword ptr [RBP + -0x34],R10D }
    /* +0xaa08ce */ __asm { MOV R10D,R12D }
    /* +0xaa08d1 */ __asm { OR R10D,0x1 }
    /* +0xaa08d5 */ __asm { MOV dword ptr [RBP + 0x20],R10D }
    /* +0xaa08d9 */ __asm { MOVD XMM2,R12D }
    /* +0xaa08de */ __asm { MOVDQA xmmword ptr [RBP + -0x50],XMM2 }
    /* +0xaa08e3 */ __asm { MOV R10D,R12D }
    /* +0xaa08e6 */ __asm { OR R10D,0x1 }
    /* +0xaa08ea */ __asm { MOV dword ptr [RBP + 0xc],R10D }
    /* +0xaa08ee */ __asm { MOV qword ptr [RBP],R12 }
    /* +0xaa08f2 */ __asm { MOV qword ptr [RBP + 0x28],RDI }
    /* +0xaa08f6 */ __asm { MOV dword ptr [RBP + -0x4],R11D }
    /* +0xaa08fa */ __asm { MOV R11W,0x1808 }
    /* +0xaa08ff */ __asm { ADD R11D,0x67f9 }
    /* +0xaa0906 */ __asm { MOV ECX,R12D }
    /* +0xaa0909 */ __asm { ROR R11W,CL }
    /* +0xaa090d */ __asm { MOVZX ECX,R11W }
    /* +0xaa0911 */ __asm { MOV RAX,qword ptr GS:[RCX] }
    /* +0xaa0915 */ __asm { CMP qword ptr [RAX + 0x18],RDX }
    /* +0xaa0919 */ __asm { JZ 0x7fffa521201a }
    /* +0xaa091f */ __asm { MOV R13D,dword ptr [RDI + 0xc] }
    /* +0xaa0923 */ __asm { CMP R13D,0x1000 }
    /* +0xaa092a */ __asm { JA 0x7fffa52109a4 }
    /* +0xaa092c */ __asm { MOV R13D,0x1000 }
    /* +0xaa0932 */ __asm { JZ 0x7fffa52109a4 }
    /* +0xaa0934 */ __asm { LEA RAX,[0x7fffa4a91124] }
    /* +0xaa093b */ __asm { MOV CX,0x5250 }
    /* +0xaa093f */ __asm { XOR ECX,0x48f }
    /* +0xaa0945 */ __asm { ADD ECX,0x225 }
    /* +0xaa094b */ __asm { IMUL ECX,dword ptr [RBP + 0xc] }
    /* +0xaa094f */ __asm { MOVSX RDX,CX }
    /* +0xaa0953 */ __asm { ADD RDX,RAX }
    /* +0xaa0956 */ __asm { MOV ECX,0x1000 }
    /* +0xaa095b */ __asm { CALL RDX }
    /* +0xaa095d */ __asm { MOV RCX,qword ptr [RDI] }
    /* +0xaa0960 */ __asm { MOV qword ptr [RDI],RAX }
    /* +0xaa0963 */ __asm { TEST RCX,RCX }
    /* +0xaa0966 */ __asm { JZ 0x7fffa521098d }
    /* +0xaa0968 */ __asm { MOV R11W,0xb940 }
    /* +0xaa096d */ __asm { IMUL EDX,R11D,0x1997 }
    /* +0xaa0974 */ __asm { SUB EDX,R12D }
    /* +0xaa0977 */ __asm { ADD EDX,0xffffa270 }
    /* +0xaa097d */ __asm { MOVSX RAX,DX }
    /* +0xaa0981 */ __asm { LEA RDX,[0x7fffa508537a] }
    /* +0xaa0988 */ __asm { ADD RDX,RAX }
    /* +0xaa098b */ __asm { CALL RDX }
    /* +0xaa098d */ __asm { MOV dword ptr [RDI + 0xc],0x1000 }
    /* +0xaa0994 */ __asm { JMP 0x7fffa52109a4 }
    /* +0xaa09a0 */ __asm { MOV dword ptr [RDI + 0xc],R13D }
    /* +0xaa09a4 */ __asm { MOV dword ptr [RDI + 0x8],R13D }
    /* +0xaa09a8 */ __asm { MOV RDX,0x0 }
    /* +0xaa09af */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xaa09b6 */ __asm { NOP }
    /* +0xaa09b7 */ __asm { MOV dword ptr [RBP + 0x30],0xae7bc5cc }
    /* +0xaa09be */ __asm { MOV R11D,dword ptr [RBP + 0x30] }
    /* +0xaa09c2 */ __asm { TEST R11D,R11D }
    /* +0xaa09c5 */ __asm { JNS 0x7fffa5211ac9 }
    /* +0xaa09cb */ __asm { MOV R11D,0x9e9acbae }
    /* +0xaa09d1 */ __asm { IMUL R11D,R11D,0x557b4be9 }
    /* +0xaa09d8 */ __asm { MOV ECX,R12D }
    /* +0xaa09db */ __asm { ROR R11D,CL }
    /* +0xaa09de */ __asm { MOVSXD RCX,R11D }
    /* +0xaa09e1 */ __asm { LEA RAX,[RCX + -0x17407616] }
    /* +0xaa09e8 */ __asm { ROL RAX,0x36 }
    /* +0xaa09ec */ __asm { MOV RDX,-0x2ac1c5e4eaae3a85 }
    /* +0xaa09f6 */ __asm { IMUL RAX,RDX }
    /* +0xaa09fa */ __asm { MOV RDX,0x557c2ea171a9a8d7 }
    /* +0xaa0a04 */ __asm { CMP RAX,RDX }
    /* +0xaa0a07 */ __asm { JNZ 0x7fffa5210ab0 }
    /* +0xaa0a0d */ __asm { MOV ESI,0x19102973 }
    /* +0xaa0a12 */ __asm { MOV R15D,0xb38f270d }
    /* +0xaa0a18 */ __asm { MOV R11D,0x27b455ad }
    /* +0xaa0a1e */ __asm { PUSHFQ }
    /* +0xaa0a1f */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xaa0a27 */ __asm { POPFQ }
    /* +0xaa0a28 */ __asm { XOR R11D,ECX }
    /* +0xaa0a2b */ __asm { MOV R14,qword ptr [RDI] }
    /* +0xaa0a2e */ __asm { MOV dword ptr [RBP + -0x18],0x0 }
    /* +0xaa0a35 */ __asm { MOV R8D,dword ptr [RDI + 0x8] }
    /* +0xaa0a39 */ __asm { RDTSC }
    /* +0xaa0a3b */ __asm { SHL RDX,0x20 }
    /* +0xaa0a3f */ __asm { OR RDX,RAX }
    /* +0xaa0a42 */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0xaa0a4c */ __asm { IMUL RDX,RAX }
    /* +0xaa0a50 */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0xaa0a5a */ __asm { ADD RDX,RAX }
    /* +0xaa0a5d */ __asm { MOV R10,RDX }
    /* +0xaa0a60 */ __asm { SHR R10,0x3b }
    /* +0xaa0a64 */ __asm { MOV R9,RDX }
    /* +0xaa0a67 */ __asm { SHR R9,0x1b }
    /* +0xaa0a6b */ __asm { IMUL ESI,dword ptr [RBP + 0x64] }
    /* +0xaa0a6f */ __asm { NOT ESI }
    /* +0xaa0a71 */ __asm { ADD ESI,ECX }
    /* +0xaa0a73 */ __asm { LEA EAX,[RCX + R15*0x1] }
    /* +0xaa0a77 */ __asm { ADD EAX,0x92d08f81 }
    /* +0xaa0a7c */ __asm { MOV R13D,EDX }
    /* +0xaa0a7f */ __asm { MOV ECX,R12D }
    /* +0xaa0a82 */ __asm { ROL EAX,CL }
    /* +0xaa0a84 */ __asm { OR R13D,0x1b }
    /* +0xaa0a88 */ __asm { CDQE }
    /* +0xaa0a8a */ __asm { ADD R11D,0xb9e9a274 }
    /* +0xaa0a91 */ __asm { ROR R11D,CL }
    /* +0xaa0a94 */ __asm { SHR RDX,0x2d }
    /* +0xaa0a98 */ __asm { MOVSXD RCX,R11D }
    /* +0xaa0a9b */ __asm { CMP RAX,RCX }
    /* +0xaa0a9e */ __asm { CMOVC R9D,R13D }
    /* +0xaa0aa2 */ __asm { XOR EDX,R9D }
    /* +0xaa0aa5 */ __asm { MOV ECX,R10D }
    /* +0xaa0aa8 */ __asm { ROR EDX,CL }
    /* +0xaa0aaa */ __asm { JMP 0x7fffa5210b1e }
    /* +0xaa0ab0 */ __asm { RDTSC }
    /* +0xaa0ab2 */ __asm { SHL RDX,0x20 }
    /* +0xaa0ab6 */ __asm { OR RDX,RAX }
    /* +0xaa0ab9 */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0xaa0ac3 */ __asm { IMUL RDX,RAX }
    /* +0xaa0ac7 */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0xaa0ad1 */ __asm { ADD RDX,RAX }
    /* +0xaa0ad4 */ __asm { MOV R10,RDX }
    /* +0xaa0ad7 */ __asm { SHR R10,0x2d }
    /* +0xaa0adb */ __asm { MOV RCX,RDX }
    /* +0xaa0ade */ __asm { SHR RCX,0x3b }
    /* +0xaa0ae2 */ __asm { SHR RDX,0x1b }
    /* +0xaa0ae6 */ __asm { XOR EDX,R10D }
    /* +0xaa0ae9 */ __asm { ROR EDX,CL }
    /* +0xaa0aeb */ __asm { MOV R11D,0xa5320b94 }
    /* +0xaa0af1 */ __asm { ADD R11D,0xf5dcc337 }
    /* +0xaa0af8 */ __asm { MOVD XMM2,R11D }
    /* +0xaa0afd */ __asm { PXOR XMM2,xmmword ptr [RBP + 0x50] }
    /* +0xaa0b02 */ __asm { MOVD ESI,XMM2 }
    /* +0xaa0b06 */ __asm { PUSHFQ }
    /* +0xaa0b07 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xaa0b0f */ __asm { POPFQ }
    /* +0xaa0b10 */ __asm { MOV dword ptr [RBP + -0x18],0x0 }
    /* +0xaa0b17 */ __asm { MOV R14,qword ptr [RDI] }
    /* +0xaa0b1a */ __asm { MOV R8D,dword ptr [RDI + 0x8] }
    /* +0xaa0b1e */ __asm { AND EDX,0x3 }
    /* +0xaa0b21 */ __asm { CMP EDX,0x2 }
    /* +0xaa0b24 */ __asm { MOV qword ptr [RBP + 0x48],RSI }
    /* +0xaa0b28 */ __asm { JNC 0x7fffa5210c60 }
    /* +0xaa0b2e */ __asm { CMP EDX,0x1 }
    /* +0xaa0b31 */ __asm { JNZ 0x7fffa5210da0 }
    /* +0xaa0b37 */ __asm { MOV EDX,0x3ca23f04 }
    /* +0xaa0b3c */ __asm { MOV R10,RDX }
    /* +0xaa0b3f */ __asm { XOR R10,0x2ab20ece }
    /* +0xaa0b46 */ __asm { MOV RAX,0x1542304a33dbd4ab }
    /* +0xaa0b50 */ __asm { IMUL R10,RAX }
    /* +0xaa0b54 */ __asm { MOV RAX,0x41c543520345b9 }
    /* +0xaa0b5e */ __asm { CMP R10,RAX }
    /* +0xaa0b61 */ __asm { NOP }
    /* +0xaa0b62 */ __asm { NOP }
    /* +0xaa0b63 */ __asm { NOP }
    /* +0xaa0b64 */ __asm { NOP }
    /* +0xaa0b65 */ __asm { NOP }
    /* +0xaa0b66 */ __asm { CMP dword ptr [RDX + 0x435bc4bc],0xd }
    /* +0xaa0b6d */ __asm { JNC 0x7fffa5210fc0 }
    /* +0xaa0b73 */ __asm { MOV RDX,0x0 }
    /* +0xaa0b7a */ __asm { NOP }
    /* +0xaa0b7b */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xaa0b82 */ __asm { MOV R11D,0x82402e99 }
    /* +0xaa0b88 */ __asm { MOVD XMM2,R11D }
    /* +0xaa0b8d */ __asm { MOV R11D,ESI }
    /* +0xaa0b90 */ __asm { OR R11D,0x1 }
    /* +0xaa0b94 */ __asm { MOVD XMM0,R11D }
    /* +0xaa0b99 */ __asm { MOV RAX,0x633bf64bf257c305 }
    /* +0xaa0ba3 */ __asm { SUB RAX,R12 }
    /* +0xaa0ba6 */ __asm { LEA RDX,[0x7fffa47c09ce] }
    /* +0xaa0bad */ __asm { XOR R11D,R11D }
    /* +0xaa0bb0 */ __asm { MOV RCX,-0x3c5ebf5c00063d0 }
    /* +0xaa0bba */ __asm { CMP RDX,RCX }
    /* +0xaa0bbd */ __asm { SETZ R11B }
    /* +0xaa0bc1 */ __asm { MOV R10D,0xaf82b454 }
    /* +0xaa0bc7 */ __asm { XOR R10D,R12D }
    /* +0xaa0bca */ __asm { ADD R10D,ESI }
    /* +0xaa0bcd */ __asm { MOV ECX,0x3fffffdc }
    /* +0xaa0bd2 */ __asm { SUB ECX,R10D }
    /* +0xaa0bd5 */ __asm { ROL RAX,0x20 }
    /* +0xaa0bd9 */ __asm { ADD RAX,RSI }
    /* +0xaa0bdc */ __asm { MOV R9D,0xe58148af }
    /* +0xaa0be2 */ __asm { IMUL RAX,R9 }
    /* +0xaa0be6 */ __asm { XOR R10D,R10D }
    /* +0xaa0be9 */ __asm { CMP RDX,RAX }
    /* +0xaa0bec */ __asm { SETA R10B }
    /* +0xaa0bf0 */ __asm { PMULUDQ XMM0,XMM2 }
    /* +0xaa0bf4 */ __asm { MOVD R9D,XMM0 }
    /* +0xaa0bf9 */ __asm { XOR R9D,R12D }
    /* +0xaa0bfc */ __asm { NOT R9D }
    /* +0xaa0bff */ __asm { CMP R9,RCX }
    /* +0xaa0c02 */ __asm { CMOVA R10D,R11D }
    /* +0xaa0c06 */ __asm { CMP R10B,0x1 }
    /* +0xaa0c0a */ __asm { JZ 0x7fffa5211b00 }
    /* +0xaa0c10 */ __asm { MOV R11D,0x9a18a377 }
    /* +0xaa0c16 */ __asm { ADD R11D,R12D }
    /* +0xaa0c19 */ __asm { MOV qword ptr [RBP + 0x30],R10 }
    /* +0xaa0c1d */ __asm { MOV R10W,0x7247 }
    /* +0xaa0c22 */ __asm { SUB R10D,R12D }
    /* +0xaa0c25 */ __asm { MOVQ XMM2,RDX }
    /* +0xaa0c2a */ __asm { MOV ECX,ESI }
    /* +0xaa0c2c */ __asm { ROR R10W,CL }
    /* +0xaa0c30 */ __asm { XOR R10D,0xd240 }
    /* +0xaa0c37 */ __asm { MOVZX R10D,R10W }
    /* +0xaa0c3b */ __asm { ROL R11D,0x16 }
    /* +0xaa0c3f */ __asm { ADD R11D,ESI }
    /* +0xaa0c42 */ __asm { ROL R11D,0x14 }
    /* +0xaa0c46 */ __asm { MOVSXD RAX,R11D }
    /* +0xaa0c49 */ __asm { MOVQ XMM0,RAX }
    /* +0xaa0c4e */ __asm { PADDQ XMM0,XMM2 }
    /* +0xaa0c52 */ __asm { MOVQ RAX,XMM0 }
    /* +0xaa0c57 */ __asm { MOV EAX,dword ptr [RAX + 0x4c] }
    /* +0xaa0c5a */ __asm { JMP 0x7fffa52113af }
    /* +0xaa0c60 */ __asm { MOV R11W,0xda }
    /* +0xaa0c65 */ __asm { XOR R11D,0x93 }
    /* +0xaa0c6c */ __asm { ROL R11W,0x1 }
    /* +0xaa0c70 */ __asm { MOV ECX,ESI }
    /* +0xaa0c72 */ __asm { ROR R11W,CL }
    /* +0xaa0c76 */ __asm { IMUL R11D,dword ptr [RBP + 0x20] }
    /* +0xaa0c7b */ __asm { MOVZX R11D,R11W }
    /* +0xaa0c7f */ __asm { CMP EDX,R11D }
    /* +0xaa0c82 */ __asm { JNC 0x7fffa5210ee0 }
    /* +0xaa0c88 */ __asm { LEA RDX,[0x7fffa47b9d28] }
    /* +0xaa0c8f */ __asm { MOV RAX,-0x24db435e1b9b7ca5 }
    /* +0xaa0c99 */ __asm { CMP RDX,RAX }
    /* +0xaa0c9c */ __asm { JZ 0x7fffa5211ae0 }
    /* +0xaa0ca2 */ __asm { MOVZX R9D,uint8_t ptr [RDX + 0x2965] }
    /* +0xaa0caa */ __asm { MOVZX R10D,uint8_t ptr [RDX + R9*0x4 + 0x2975] }
    /* +0xaa0cb3 */ __asm { ROL R10B,0x4 }
    /* +0xaa0cb7 */ __asm { MOV uint8_t ptr [RBP + 0x30],R10B }
    /* +0xaa0cbb */ __asm { MOVZX R10D,uint8_t ptr [RDX + R9*0x4 + 0x2976] }
    /* +0xaa0cc4 */ __asm { ROL R10B,0x4 }
    /* +0xaa0cc8 */ __asm { MOV uint8_t ptr [RBP + 0x31],R10B }
    /* +0xaa0ccc */ __asm { MOVZX R10D,uint8_t ptr [RDX + R9*0x4 + 0x2977] }
    /* +0xaa0cd5 */ __asm { ROL R10B,0x4 }
    /* +0xaa0cd9 */ __asm { MOV uint8_t ptr [RBP + 0x32],R10B }
    /* +0xaa0cdd */ __asm { MOVZX R10D,uint8_t ptr [RDX + R9*0x4 + 0x2978] }
    /* +0xaa0ce6 */ __asm { ROL R10B,0x4 }
    /* +0xaa0cea */ __asm { MOV uint8_t ptr [RBP + 0x33],R10B }
    /* +0xaa0cee */ __asm { MOV R11D,dword ptr [RBP + 0x30] }
    /* +0xaa0cf2 */ __asm { MOV R10D,0x65e8ce72 }
    /* +0xaa0cf8 */ __asm { XOR R11D,R10D }
    /* +0xaa0cfb */ __asm { MOV R10D,0xaf5a919a }
    /* +0xaa0d01 */ __asm { SUB R10D,ESI }
    /* +0xaa0d04 */ __asm { MOVD XMM2,R10D }
    /* +0xaa0d09 */ __asm { PADDD XMM2,xmmword ptr [RBP + 0x50] }
    /* +0xaa0d0e */ __asm { MOVD ECX,XMM2 }
    /* +0xaa0d12 */ __asm { ROL ECX,0xb }
    /* +0xaa0d15 */ __asm { MOV R10D,dword ptr [RCX] }
    /* +0xaa0d18 */ __asm { BT R11D,R10D }
    /* +0xaa0d1c */ __asm { JNC 0x7fffa52114c2 }
    /* +0xaa0d22 */ __asm { LEA RAX,[0x7fffa47b4de6] }
    /* +0xaa0d29 */ __asm { MOV RDX,RAX }
    /* +0xaa0d2c */ __asm { ROL RDX,0x1e }
    /* +0xaa0d30 */ __asm { MOV RCX,-0x88062d15 }
    /* +0xaa0d3a */ __asm { ADD RDX,RCX }
    /* +0xaa0d3d */ __asm { MOV RCX,-0x7dbe5e93d44589aa }
    /* +0xaa0d47 */ __asm { CMP RDX,RCX }
    /* +0xaa0d4a */ __asm { NOP }
    /* +0xaa0d4b */ __asm { NOP }
    /* +0xaa0d4c */ __asm { NOP }
    /* +0xaa0d4d */ __asm { NOP }
    /* +0xaa0d4e */ __asm { NOP }
    /* +0xaa0d4f */ __asm { NOP }
    /* +0xaa0d50 */ __asm { NOP }
    /* +0xaa0d51 */ __asm { NOP }
    /* +0xaa0d52 */ __asm { NOP }
    /* +0xaa0d53 */ __asm { NOP }
    /* +0xaa0d54 */ __asm { NOP }
    /* +0xaa0d55 */ __asm { NOP }
    /* +0xaa0d56 */ __asm { NOP }
    /* +0xaa0d57 */ __asm { NOP }
    /* +0xaa0d58 */ __asm { MOV R11W,0x2a8b }
    /* +0xaa0d5d */ __asm { MOV R10W,0x80bf }
    /* +0xaa0d62 */ __asm { ADD R10D,0x3b63 }
    /* +0xaa0d69 */ __asm { MOV ECX,R12D }
    /* +0xaa0d6c */ __asm { ROL R10W,CL }
    /* +0xaa0d70 */ __asm { ADD R10D,0x78a0 }
    /* +0xaa0d77 */ __asm { MOV ECX,ESI }
    /* +0xaa0d79 */ __asm { ROR R10W,CL }
    /* +0xaa0d7d */ __asm { ADD R11D,ESI }
    /* +0xaa0d80 */ __asm { MOVZX R10D,R10W }
    /* +0xaa0d84 */ __asm { MOV qword ptr [RBP + 0x30],RDX }
    /* +0xaa0d88 */ __asm { MOVZX ECX,R11W }
    /* +0xaa0d8c */ __asm { XOR RCX,0x7161 }
    /* +0xaa0d93 */ __asm { MOV EAX,dword ptr [RCX + RAX*0x1 + 0x10c] }
    /* +0xaa0d9a */ __asm { JMP 0x7fffa52113af }
    /* +0xaa0da0 */ __asm { LEA R10,[0x7fffa47beb8f] }
    /* +0xaa0da7 */ __asm { MOV RAX,0x3dfbb191ca7d337e }
    /* +0xaa0db1 */ __asm { CMP R10,RAX }
    /* +0xaa0db4 */ __asm { JZ 0x7fffa5211af0 }
    /* +0xaa0dba */ __asm { MOV R11W,0x2443 }
    /* +0xaa0dbf */ __asm { XOR R11D,R12D }
    /* +0xaa0dc2 */ __asm { ROR R11W,0x1 }
    /* +0xaa0dc6 */ __asm { MOV ECX,0xbcca34d1 }
    /* +0xaa0dcb */ __asm { MOVD XMM2,ESI }
    /* +0xaa0dcf */ __asm { ADD ECX,R12D }
    /* +0xaa0dd2 */ __asm { XOR ECX,ESI }
    /* +0xaa0dd4 */ __asm { ROL ECX,0x15 }
    /* +0xaa0dd7 */ __asm { MOVD XMM0,R11D }
    /* +0xaa0ddc */ __asm { PSUBW XMM0,XMM2 }
    /* +0xaa0de0 */ __asm { MOVD EDX,XMM0 }
    /* +0xaa0de4 */ __asm { MOVSX RAX,DX }
    /* +0xaa0de8 */ __asm { MOV R9,R10 }
    /* +0xaa0deb */ __asm { ADD R9,RAX }
    /* +0xaa0dee */ __asm { MOVZX R10D,uint8_t ptr [RAX + R10*0x1 + 0xe] }
    /* +0xaa0df4 */ __asm { MOVZX EDX,uint8_t ptr [R9 + R10*0x4 + 0x1e] }
    /* +0xaa0dfa */ __asm { ROL DL,0x4 }
    /* +0xaa0dfd */ __asm { MOV uint8_t ptr [RBP + 0x30],DL }
    /* +0xaa0e00 */ __asm { MOVZX EDX,uint8_t ptr [R9 + R10*0x4 + 0x1f] }
    /* +0xaa0e06 */ __asm { ROL DL,0x4 }
    /* +0xaa0e09 */ __asm { MOV uint8_t ptr [RBP + 0x31],DL }
    /* +0xaa0e0c */ __asm { MOVZX EDX,uint8_t ptr [R9 + R10*0x4 + 0x20] }
    /* +0xaa0e12 */ __asm { ROL DL,0x4 }
    /* +0xaa0e15 */ __asm { MOV uint8_t ptr [RBP + 0x32],DL }
    /* +0xaa0e18 */ __asm { MOVZX R10D,uint8_t ptr [R9 + R10*0x4 + 0x21] }
    /* +0xaa0e1e */ __asm { ROL R10B,0x4 }
    /* +0xaa0e22 */ __asm { MOV uint8_t ptr [RBP + 0x33],R10B }
    /* +0xaa0e26 */ __asm { MOV R11D,dword ptr [RBP + 0x30] }
    /* +0xaa0e2a */ __asm { MOV R10D,0x65e8ce72 }
    /* +0xaa0e30 */ __asm { XOR R11D,R10D }
    /* +0xaa0e33 */ __asm { MOV R10D,dword ptr [RCX] }
    /* +0xaa0e36 */ __asm { BT R11D,R10D }
    /* +0xaa0e3a */ __asm { JNC 0x7fffa52117b9 }
    /* +0xaa0e40 */ __asm { LEA RDX,[0x7fffa47c39cc] }
    /* +0xaa0e47 */ __asm { XOR R10D,R10D }
    /* +0xaa0e4a */ __asm { XOR R11D,R11D }
    /* +0xaa0e4d */ __asm { MOV RAX,0x6e345dc0c83588a6 }
    /* +0xaa0e57 */ __asm { CMP RDX,RAX }
    /* +0xaa0e5a */ __asm { SETZ R10B }
    /* +0xaa0e5e */ __asm { SETL R11B }
    /* +0xaa0e62 */ __asm { MOV EAX,0xe3742dd1 }
    /* +0xaa0e67 */ __asm { MOV R9D,0xe618ead0 }
    /* +0xaa0e6d */ __asm { ADD R9D,R12D }
    /* +0xaa0e70 */ __asm { IMUL EAX,EAX,-0x23f5c98b }
    /* +0xaa0e76 */ __asm { MOV ECX,R12D }
    /* +0xaa0e79 */ __asm { ROR EAX,CL }
    /* +0xaa0e7b */ __asm { ADD EAX,ESI }
    /* +0xaa0e7d */ __asm { ROL EAX,0x1 }
    /* +0xaa0e7f */ __asm { MOV ECX,ESI }
    /* +0xaa0e81 */ __asm { ROL R9D,CL }
    /* +0xaa0e84 */ __asm { ROL R9D,0x6 }
    /* +0xaa0e88 */ __asm { CMP R9,RAX }
    /* +0xaa0e8b */ __asm { CMOVA R11D,R10D }
    /* +0xaa0e8f */ __asm { CMP R11B,0x1 }
    /* +0xaa0e93 */ __asm { NOP }
    /* +0xaa0e94 */ __asm { NOP }
    /* +0xaa0e95 */ __asm { NOP }
    /* +0xaa0e96 */ __asm { NOP }
    /* +0xaa0e97 */ __asm { NOP }
    /* +0xaa0e98 */ __asm { NOP }
    /* +0xaa0e99 */ __asm { NOP }
    /* +0xaa0e9a */ __asm { NOP }
    /* +0xaa0e9b */ __asm { NOP }
    /* +0xaa0e9c */ __asm { NOP }
    /* +0xaa0e9d */ __asm { NOP }
    /* +0xaa0e9e */ __asm { NOP }
    /* +0xaa0e9f */ __asm { NOP }
    /* +0xaa0ea0 */ __asm { NOP }
    /* +0xaa0ea1 */ __asm { NOP }
    /* +0xaa0ea2 */ __asm { NOP }
    /* +0xaa0ea3 */ __asm { NOP }
    /* +0xaa0ee0 */ __asm { MOV EDX,0xd4c56c34 }
    /* +0xaa0ee5 */ __asm { MOV RAX,-0x23fba0ae484df8fa }
    /* +0xaa0eef */ __asm { CMP RDX,RAX }
    /* +0xaa0ef2 */ __asm { JZ 0x7fffa5211af8 }
    /* +0xaa0ef8 */ __asm { IMUL RAX,RDX,-0x54c76c34 }
    /* +0xaa0eff */ __asm { MOV R11D,0x955a3dd4 }
    /* +0xaa0f05 */ __asm { SUB R11D,R12D }
    /* +0xaa0f08 */ __asm { MOV ECX,ESI }
    /* +0xaa0f0a */ __asm { ROR R11D,CL }
    /* +0xaa0f0d */ __asm { MOV R10D,0xfbd75b44 }
    /* +0xaa0f13 */ __asm { ROL R11D,0x1e }
    /* +0xaa0f17 */ __asm { ADD R10D,ESI }
    /* +0xaa0f1a */ __asm { MOVSXD RCX,R11D }
    /* +0xaa0f1d */ __asm { MOV R9D,0xdba5e703 }
    /* +0xaa0f23 */ __asm { ADD RCX,RDX }
    /* +0xaa0f26 */ __asm { MOV R11D,0x4ec0f228 }
    /* +0xaa0f2c */ __asm { SUB R11D,R10D }
    /* +0xaa0f2f */ __asm { IMUL R11D,dword ptr [RBP + 0x64] }
    /* +0xaa0f34 */ __asm { MOVSXD RDX,R11D }
    /* +0xaa0f37 */ __asm { SUB R9D,ESI }
    /* +0xaa0f3a */ __asm { ROL R9D,0x16 }
    /* +0xaa0f3e */ __asm { LEA R10D,[R12 + R9*0x1] }
    /* +0xaa0f42 */ __asm { ADD R10D,0x4eb14312 }
    /* +0xaa0f49 */ __asm { CMP R10,RDX }
    /* +0xaa0f4c */ __asm { CMOVNC RCX,RAX }
    /* +0xaa0f50 */ __asm { MOV RCX,qword ptr [RCX + 0x8] }
    /* +0xaa0f54 */ __asm { MOV RAX,RCX }
    /* +0xaa0f57 */ __asm { MOV RDX,-0x2a160b9a40cdd24d }
    /* +0xaa0f61 */ __asm { MUL RDX }
    /* +0xaa0f64 */ __asm { MOV R9,RDX }
    /* +0xaa0f67 */ __asm { MOV RAX,RCX }
    /* +0xaa0f6a */ __asm { MOV ECX,0x146876d }
    /* +0xaa0f6f */ __asm { MUL RCX }
    /* +0xaa0f72 */ __asm { ADD RAX,R9 }
    /* +0xaa0f75 */ __asm { ADC RDX,0x0 }
    /* +0xaa0f79 */ __asm { TEST DL,0x1 }
    /* +0xaa0f7c */ __asm { JZ 0x7fffa5210ff9 }
    /* +0xaa0f7e */ __asm { LEA RDX,[0x7fffa47bbf01] }
    /* +0xaa0f85 */ __asm { MOV RAX,-0x604ca508802b071f }
    /* +0xaa0f8f */ __asm { CMP RDX,RAX }
    /* +0xaa0f92 */ __asm { JZ 0x7fffa5211b18 }
    /* +0xaa0f98 */ __asm { MOV R11W,0xf8d6 }
    /* +0xaa0f9d */ __asm { XOR R11D,0x2734 }
    /* +0xaa0fa4 */ __asm { MOV ECX,ESI }
    /* +0xaa0fa6 */ __asm { ROR R11W,CL }
    /* +0xaa0faa */ __asm { MOV qword ptr [RBP + 0x30],R10 }
    /* +0xaa0fae */ __asm { MOV EAX,dword ptr [RDX + 0x65f] }
    /* +0xaa0fb4 */ __asm { ADD R11D,0xffffd23b }
    /* +0xaa0fbb */ __asm { JMP 0x7fffa52113ab }
    /* +0xaa0fc0 */ __asm { LEA RDX,[0x7fffa47b63d4] }
    /* +0xaa0fc7 */ __asm { MOV RAX,0x51af6e842ccbd57f }
    /* +0xaa0fd1 */ __asm { CMP RDX,RAX }
    /* +0xaa0fd4 */ __asm { JZ 0x7fffa5211b20 }
    /* +0xaa0fda */ __asm { MOV R11W,0x339e }
    /* +0xaa0fdf */ __asm { SUB R11D,ESI }
    /* +0xaa0fe2 */ __asm { ROL R11W,0xd }
    /* +0xaa0fe7 */ __asm { SUB R11D,R12D }
    /* +0xaa0fea */ __asm { MOV qword ptr [RBP + 0x30],R10 }
    /* +0xaa0fee */ __asm { MOV EAX,dword ptr [RDX + 0x6bc8] }
    /* +0xaa0ff4 */ __asm { JMP 0x7fffa52113ab }
    /* +0xaa0ff9 */ __asm { RDTSC }
    /* +0xaa0ffb */ __asm { SHL RDX,0x20 }
    /* +0xaa0fff */ __asm { OR RDX,RAX }
    /* +0xaa1002 */ __asm { MOV RAX,-0x5a46117eacb056b3 }
    /* +0xaa100c */ __asm { IMUL RDX,RAX }
    /* +0xaa1010 */ __asm { MOV R9,0x5340b2fd8c4b0a02 }
    /* +0xaa101a */ __asm { LEA RCX,[RDX + R9*0x1] }
    /* +0xaa101e */ __asm { MOV RAX,RDX }
    /* +0xaa1021 */ __asm { OR RAX,R9 }
    /* +0xaa1024 */ __asm { MOV RDX,R12 }
    /* +0xaa1027 */ __asm { OR RDX,0x1 }
    /* +0xaa102b */ __asm { MOVQ XMM2,RDX }
    /* +0xaa1030 */ __asm { MOV R9,-0x762213a9caec98f5 }
    /* +0xaa103a */ __asm { MOV R10,RSI }
    /* +0xaa103d */ __asm { OR R10,0x1 }
    /* +0xaa1041 */ __asm { IMUL R10,R9 }
    /* +0xaa1045 */ __asm { NOT R10 }
    /* +0xaa1048 */ __asm { MOVQ XMM0,R10 }
    /* +0xaa104d */ __asm { MOVDQA XMM3,XMM2 }
    /* +0xaa1051 */ __asm { PSRLQ XMM3,0x20 }
    /* +0xaa1056 */ __asm { PMULUDQ XMM3,XMM0 }
    /* +0xaa105a */ __asm { MOVDQA XMM1,XMM0 }
    /* +0xaa105e */ __asm { PSRLQ XMM1,0x20 }
    /* +0xaa1063 */ __asm { PMULUDQ XMM1,XMM2 }
    /* +0xaa1067 */ __asm { PADDQ XMM1,XMM3 }
    /* +0xaa106b */ __asm { PSLLQ XMM1,0x20 }
    /* +0xaa1070 */ __asm { PMULUDQ XMM0,XMM2 }
    /* +0xaa1074 */ __asm { PADDQ XMM0,XMM1 }
    /* +0xaa1078 */ __asm { MOVQ R9,XMM0 }
    /* +0xaa107d */ __asm { ROL R9,0x3 }
    /* +0xaa1081 */ __asm { MOV R10,0x800000008c3 }
    /* +0xaa108b */ __asm { CMP R9,R10 }
    /* +0xaa108e */ __asm { CMOVNZ RCX,RAX }
    /* +0xaa1092 */ __asm { MOV R10,RCX }
}


// ============================================================================
// Function : Catch@7fffa5213490  |  RVA: 0xaa3490  |  Size: 73 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t Catch_7fffa5213490(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)(param_2 + 100) = 0xc000009a;
  return 0x7fffa5211bf8;
}


// ============================================================================
// Function : FUN_7fffa52134e0  |  RVA: 0xaa34e0  |  Size: 813 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52134e0(void)

{
  uint64_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  uint16_t uVar5;
  uint8_t bVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint32_t uVar9;
  uint64_t unaff_R14;
  
  uVar4 = (unaff_R14 | 0xfffffffff8dc7237) * -0x32c0e8aa +
          ((~unaff_R14 ^ 0x7238dc8) + (unaff_R14 ^ 0x7238dc8)) * -0x11634575 +
          (~unaff_R14 & 0x7238dc8) * -0x32c0e8aa;
  uVar3 = (uint32_t)uVar4;
  uVar9 = uVar3 | 1;
  lVar7 = (int64_t)(int)((uVar3 ^ 0x76ebd1e7) << 0xd | (uVar3 ^ 0x76ebd1e7) >> 0x13);
  bVar6 = (uint8_t)uVar4 & 7;
  *(uint8_t *)((int64_t)(int)(0x442348af - uVar3) + 0x7fffa47ca15b) = '\0' << bVar6 | 0U >> 8 - bVar6;
  *(uint32_t *)(lVar7 + 0x7fffa47cb5a8) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47cb5a0) = 0;
  *(uint32_t *)(((int64_t)(int)(uVar9 * -0x12000000 | uVar9 * 0x414a2bf7 >> 7) ^ 0x2df22a46U) +
           0x7fffa47caadb) = uVar9 * 0x3a9a + 0x3b5a & 0xffff;
  uVar1 = rdtsc();
  lVar7 = (uVar1 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar1)) * 0xd138ea42448b538;
  lVar8 = 0;
  while( true ) {
    uVar2 = (uVar3 ^ 0x66922b6e) + 0x2cf10656;
    bVar6 = (uint8_t)((uint64_t)lVar7 >> 0x20) & 0x5e;
    if ((uVar2 * 0x10000 | uVar2 >> 0x10) <= uVar3 + 0x3bd9d1e9) {
      bVar6 = (uint8_t)((uint64_t)(lVar7 * 0x5e2fc83c40) >> 0x20);
    }
    *(char *)(lVar8 + (int64_t)(short)((short)uVar9 * -0x6a92) + 0x7fffa47bdf8d) =
         (char)((uint64_t)(lVar7 * 0xa42448b538) >> 0x20);
    *(uint8_t *)(lVar8 + (int64_t)(int)(uVar3 + 0xbbdb29d5) + 0x7fffa47c63ec) = bVar6;
    *(char *)(lVar8 + (int64_t)(int)(uVar3 + 0xbbdb4d82) + 0x7fffa47c4040) =
         (char)(((uVar4 ^ 0x2d7d2b5c81) + 0xffbf56fb62) * lVar7 >> 0x20);
    if (lVar8 == 0x2c) break;
    uVar5 = (short)uVar4 + 0xdbe7;
    lVar7 = lVar7 * 0x182ae1bdb22e1000;
    *(char *)(lVar8 + (int64_t)(short)(uVar5 * 0x2000 | uVar5 >> 3) + 0x7fffa47bfaa2) =
         (char)((uint64_t)lVar7 >> 0x20);
    lVar8 = lVar8 + 4;
  }
  bVar6 = (uint8_t)uVar4 & 0xf;
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa47bbbeb * 0x55555556 + 0x55555556) * 3;
  *(uint32_t *)((int64_t)(short)~(-0x3d26 << bVar6 | 0xc2daU >> 0x10 - bVar6) + 0x7fffa47c1d67 +
           (uVar1 >> 0x20) * 4) =
       *(uint32_t *)((int64_t)(short)((short)uVar4 + 0x6fd3) + 0x7fffa47c1e18) ^ 0x2c43ff87;
  *(char *)((int64_t)(int)(uVar9 * 0x6a02526a) + 0x7fffa47cb515) = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5213810  |  RVA: 0xaa3810  |  Size: 66 bytes
// Callers  : FUN_7fffa52c6460@0xb56460
// Callees  : none
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x7fffa5213830) */
/* WARNING: Removing unreachable block (ram,0x7fffa5213838) */
/* WARNING: Removing unreachable block (ram,0x7fffa521383e) */

void FUN_7fffa5213810(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa5213854  |  RVA: 0xaa3854  |  Size: 1 bytes
// Callers  : FUN_7fffa4ee8f10@0x778f10
// Callees  : none
// ============================================================================
void FUN_7fffa5213854(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}

