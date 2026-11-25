// Subsystem: Entrypoints, TLS & Initialization
// Functions: 11
#include "../include/module_declarations.hpp"

// ============================================================================
// Function : FUN_7fffa4ab2990  |  RVA: 0x342990  |  Size: 86 bytes
// Callers  : FUN_7fffa4e8e4c0@0x71e4c0
// Callees  : FUN_7fffa52c6460@0xb56460, FUN_7fffa5581e30@0xe11e30, FUN_7fffa50cad90@0x95ad90, FUN_7fffa5697680@0xf27680
// ============================================================================
uint64_t FUN_7fffa4ab2990(uint8_t param_1,int param_2,int64_t param_3)

{
  uint8_t bVar1;
  uint64_t uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_7fffa52c6460(param_3 != 0);
    return uVar2;
  }
  if (param_2 == 1) {
    uVar2 = FUN_7fffa5697680(param_1,param_3);
    return uVar2;
  }
  if (param_2 == 2) {
    bVar1 = FUN_7fffa5581e30();
    return (uint64_t)bVar1;
  }
  if (param_2 == 3) {
    bVar1 = FUN_7fffa50cad90();
    return (uint64_t)bVar1;
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa4e8e4c0  |  RVA: 0x71e4c0  |  Size: 304 bytes
// Callers  : DllEntryPoint_Main@0xcb7f00
// Callees  : FUN_7fffa52c6460@0xb56460, FUN_7fffa56a1590@0xf31590, FUN_7fffa4ab2990@0x342990
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x7fffa4e8e589) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e8e51a) */
/* WARNING: Removing unreachable block (ram,0x7fffa4e8e5ca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7fffa4e8e4c0(uint64_t param_1,int param_2,int64_t param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) && (_DAT_7fffa4781b88 < 1)) {
    return 0;
  }
  if ((param_2 - 1U < 2) && (iVar1 = FUN_7fffa4ab2990(param_1,param_2,param_3), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_7fffa56a1590(param_1,param_2,param_3);
  if ((param_2 == 1) && (iVar1 == 0)) {
    FUN_7fffa56a1590(param_1,0,param_3);
    FUN_7fffa52c6460(param_3 != 0);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_7fffa4ab2990(param_1,param_2,param_3);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


// ============================================================================
// Function : DllEntryRun_Export  |  RVA: 0x7f5ce0  |  Size: 131 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa4f65f26) overlaps instruction at (ram,0x7fffa4f65f1e)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa4f65e77) */
/* WARNING: Removing unreachable block (ram,0x7fffa4f65f2b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x7fffa4f65eef */
/* WARNING: Removing unreachable block (ram,0x7fffa4f65d48) */
/* WARNING: Removing unreachable block (ram,0x7fffa4f65eed) */
/* WARNING: Removing unreachable block (ram,0x7fffa4f65f34) */
/* WARNING: Removing unreachable block (ram,0x7fffa4f65f3d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint64_t DllEntryRun_Export(int64_t param_1,uint16_t param_2)

{
  uint32_t in_EAX;
  uint32_t *unaff_RSI;
  uint32_t unaff_EDI;
  int64_t unaff_retaddr;
  uint64_t uStack_8;
  
                    /* 0x7f5ce0  1  run */
  *(int *)(param_1 + 0x42444c7) =
       *(int *)(param_1 + 0x42444c7) + -0x2d2b6720 + (uint32_t)CARRY4(unaff_EDI,*unaff_RSI);
  if (unaff_retaddr == -0x144b756587448e9b) {
    cRam000000003f6747d8 = cRam000000003f6747d8 - (char)((uint16_t)param_2 >> 8);
    cRam0000000077f2f700 = cRam0000000077f2f700 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_retaddr == 0x7b5add82363d6dd7) {
    uRam7b5add82363c70c0 = 0xbe694eff;
  }
  else if (unaff_retaddr == 0x1e168290bf71893c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack_8 = CONCAT44(0x2844218,in_EAX);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa52105a0  |  RVA: 0xaa05a0  |  Size: 191 bytes
// Callers  : DllEntryPoint_Main@0xcb7f00
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa52105a0(void)

{
  uint32_t uVar1;
  uint64_t uStackX_8;
  uint64_t auStackX_10 [3];
  uint64_t auStack_18 [2];
  
  if (_DAT_7fffa4780040 != 0x2b992ddfa232) {
    _DAT_7fffa4780080 = ~_DAT_7fffa4780040;
    return;
  }
  uStackX_8 = 0;
  (*(code *)&DAT_7ff84ea30e70)(&uStackX_8);
  auStack_18[0] = uStackX_8;
  uVar1 = (*(code *)&DAT_7ff84ea18620)();
  auStack_18[0] = auStack_18[0] ^ uVar1;
  uVar1 = (*(code *)&DAT_7ff84ea22bb0)();
  auStack_18[0] = auStack_18[0] ^ uVar1;
  (*(code *)&DAT_7ff84ea23480)(auStackX_10);
  _DAT_7fffa4780040 =
       (auStackX_10[0] << 0x20 ^ auStackX_10[0] ^ auStack_18[0] ^ (uint64_t)auStack_18) &
       0xffffffffffff;
  if (_DAT_7fffa4780040 == 0x2b992ddfa232) {
    _DAT_7fffa4780040 = 0x2b992ddfa233;
  }
  _DAT_7fffa4780080 = ~_DAT_7fffa4780040;
  return;
}


// ============================================================================
// Function : FUN_7fffa52c6460  |  RVA: 0xb56460  |  Size: 143 bytes
// Callers  : FUN_7fffa4e8e4c0@0x71e4c0, FUN_7fffa4ab2990@0x342990
// Callees  : FUN_7fffa5465140@0xcf5140, FUN_7fffa512f020@0x9bf020, FUN_7fffa507eeb0@0x90eeb0, FUN_7fffa5267c30@0xaf7c30, FUN_7fffa5605b20@0xe95b20, FUN_7fffa52c3c00@0xb53c00, FUN_7fffa5213810@0xaa3810, FUN_7fffa5146560@0x9d6560
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa52c6460(uint8_t param_1,uint64_t param_2,uint64_t param_3,
                          uint64_t param_4)

{
  code *pcVar1;
  uint8_t uVar2;
  uint8_t bVar3;
  uint64_t uVar4;
  uint8_t uVar5;
  
  if (_DAT_7fffa4781b88 < 1) {
    return 0;
  }
  _DAT_7fffa4781b88 = _DAT_7fffa4781b88 + -1;
  uVar2 = FUN_7fffa507eeb0();
  if (_DAT_7fffa4781bb0 == 2) {
    uVar5 = uVar2;
    FUN_7fffa5465140();
    FUN_7fffa512f020();
    FUN_7fffa5213810();
    _DAT_7fffa4781bb0 = 0;
    FUN_7fffa52c3c00(uVar2);
    bVar3 = FUN_7fffa5267c30(param_1,0,param_3,param_4,uVar5);
    FUN_7fffa5605b20();
    return (uint64_t)bVar3;
  }
  FUN_7fffa5146560(7);
  pcVar1 = (code *)__debugbreak();
  uVar4 = (*pcVar1)();
  return uVar4;
}


// ============================================================================
// Function : DllEntryPoint_Main  |  RVA: 0xcb7f00  |  Size: 61 bytes
// Callers  : none
// Callees  : FUN_7fffa4e8e4c0@0x71e4c0, FUN_7fffa52105a0@0xaa05a0
// ============================================================================
void DllEntryPoint_Main(uint64_t param_1,int param_2,uint64_t param_3)

{
  if (param_2 == 1) {
    FUN_7fffa52105a0();
  }
  FUN_7fffa4e8e4c0(param_1,param_2,param_3);
  return;
}


// ============================================================================
// Function : Hook_ntdll_dll_LdrInitializeThunk  |  RVA: 0xce38e0  |  Size: 35 bytes
// Callers  : none
// Callees  : FUN_7fffa5453da0@0xce3da0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Hook_ntdll_dll_LdrInitializeThunk(uint64_t param_1,uint64_t param_2)

{
  FUN_7fffa5453da0();
                    /* WARNING: Could not recover jumptable at 0x7fffa54538fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_7fffa47bfa98)(param_1,param_2);
  return;
}


// ============================================================================
// Function : FUN_7fffa5453da0  |  RVA: 0xce3da0  |  Size: 300 bytes
// Callers  : Hook_ntdll_dll_LdrInitializeThunk@0xce38e0
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5453da0(void) {
    /* +0xce3da0 */ __asm { PUSH R14 }
    /* +0xce3da2 */ __asm { PUSH RSI }
    /* +0xce3da3 */ __asm { PUSH R13 }
    /* +0xce3da5 */ __asm { PUSH RBP }
    /* +0xce3da6 */ __asm { PUSH R15 }
    /* +0xce3da8 */ __asm { PUSH RDI }
    /* +0xce3da9 */ __asm { PUSH RBX }
    /* +0xce3daa */ __asm { PUSH R12 }
    /* +0xce3dac */ __asm { SUB RSP,0x6f8 }
    /* +0xce3db3 */ __asm { MOVAPS xmmword ptr [RSP + 0x6e0],XMM6 }
    /* +0xce3dbb */ __asm { MOVAPS xmmword ptr [RSP + 0x6d0],XMM7 }
    /* +0xce3dc3 */ __asm { MOVAPS xmmword ptr [RSP + 0x6c0],XMM8 }
    /* +0xce3dcc */ __asm { MOV R13,RDX }
    /* +0xce3dcf */ __asm { MOV qword ptr [RSP + 0x110],RCX }
    /* +0xce3dd7 */ __asm { MOV ECX,0xfcaf0243 }
    /* +0xce3ddc */ __asm { MOV R10D,0x13f382b }
    /* +0xce3de2 */ __asm { IMUL EAX,R10D,-0x3ffffff9 }
    /* +0xce3de9 */ __asm { MOV RDX,R12 }
    /* +0xce3dec */ __asm { MOV R10D,0xac525fc1 }
    /* +0xce3df2 */ __asm { ADD R10D,0x220e6919 }
    /* +0xce3df9 */ __asm { MOV R8,RDX }
    /* +0xce3dfc */ __asm { NOT R8 }
    /* +0xce3dff */ __asm { ROL R10D,0x1c }
    /* +0xce3e03 */ __asm { MOVSXD R9,R10D }
    /* +0xce3e06 */ __asm { MOV R11D,0x2fd8a1e1 }
    /* +0xce3e0c */ __asm { ADD R11D,0x50275f3c }
    /* +0xce3e13 */ __asm { ROR R11D,0x1 }
    /* +0xce3e16 */ __asm { MOV R10,R15 }
    /* +0xce3e19 */ __asm { OR RDX,R10 }
    /* +0xce3e1c */ __asm { MOV RSI,R10 }
    /* +0xce3e1f */ __asm { NOT RSI }
    /* +0xce3e22 */ __asm { AND RSI,R8 }
    /* +0xce3e25 */ __asm { IMUL RDI,RSI,-0x76385273 }
    /* +0xce3e2c */ __asm { AND R8,R10 }
    /* +0xce3e2f */ __asm { IMUL R10,R8,0x5319f373 }
    /* +0xce3e36 */ __asm { IMUL R11,RDX }
    /* +0xce3e3a */ __asm { IMUL R8,R9 }
    /* +0xce3e3e */ __asm { MOV RSI,-0x136385301 }
    /* +0xce3e48 */ __asm { IMUL RSI,RDX }
    /* +0xce3e4c */ __asm { ADD RSI,R11 }
    /* +0xce3e4f */ __asm { ADD RSI,R8 }
    /* +0xce3e52 */ __asm { MOV R9,RSI }
    /* +0xce3e55 */ __asm { IMUL R9,R10 }
    /* +0xce3e59 */ __asm { ADD RSI,R10 }
    /* +0xce3e5c */ __asm { CMP RAX,0x48ba892d }
    /* +0xce3e62 */ __asm { CMOVNZ RSI,R9 }
    /* +0xce3e66 */ __asm { ADD RSI,RDI }
    /* +0xce3e69 */ __asm { MOV EBX,ESI }
    /* +0xce3e6b */ __asm { OR EBX,0x1 }
    /* +0xce3e6e */ __asm { IMUL ECX,EBX }
    /* +0xce3e71 */ __asm { NOT ECX }
    /* +0xce3e73 */ __asm { MOV dword ptr [RSP + 0x180],ECX }
    /* +0xce3e7a */ __asm { MOV ECX,dword ptr [RSP + 0x180] }
    /* +0xce3e81 */ __asm { TEST ECX,ECX }
    /* +0xce3e83 */ __asm { NOP }
    /* +0xce3e84 */ __asm { NOP }
    /* +0xce3e85 */ __asm { NOP }
    /* +0xce3e86 */ __asm { NOP }
    /* +0xce3e87 */ __asm { NOP }
    /* +0xce3e88 */ __asm { PUSHFQ }
    /* +0xce3e89 */ __asm { POP R15 }
    /* +0xce3e8b */ __asm { TEST R15D,0x100 }
    /* +0xce3e92 */ __asm { JZ 0x7fffa5453e95 }
    /* +0xce3e94 */ __asm { POP RDI }
    /* +0xce3e95 */ __asm { MOV CX,0x4b09 }
    /* +0xce3e99 */ __asm { XOR ECX,0x4899 }
    /* +0xce3e9f */ __asm { ADD ECX,ESI }
    /* +0xce3ea1 */ __asm { MOVZX EAX,CX }
    /* +0xce3ea4 */ __asm { XOR RAX,0x5633 }
    /* +0xce3eaa */ __asm { MOV RCX,qword ptr GS:[RAX] }
    /* +0xce3eae */ __asm { MOV R9,-0x6d2d56d7f9f52a77 }
    /* +0xce3eb8 */ __asm { CMP RCX,R9 }
    /* +0xce3ebb */ __asm { NOP }
    /* +0xce3ebc */ __asm { NOP }
    /* +0xce3ebd */ __asm { NOP }
    /* +0xce3ebe */ __asm { NOP }
    /* +0xce3ebf */ __asm { NOP }
    /* +0xce3ec0 */ __asm { NOP }
    /* +0xce3ec1 */ __asm { NOP }
    /* +0xce3ec2 */ __asm { NOP }
    /* +0xce3ec3 */ __asm { NOP }
    /* +0xce3ec4 */ __asm { NOP }
    /* +0xce3ec5 */ __asm { NOP }
    /* +0xce3ec6 */ __asm { NOP }
    /* +0xce3ec7 */ __asm { NOP }
    /* +0xce3ec8 */ __asm { NOP }
    /* +0xce3ec9 */ __asm { NOP }
    /* +0xce3eca */ __asm { NOP }
    /* +0xce3ecb */ __asm { NOP }
}


// ============================================================================
// Function : DllTlsCallback0Rva  |  RVA: 0xd1feb0  |  Size: 3757 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void DllTlsCallback0Rva(void) {
    /* +0xd1feb0 */ __asm { PUSH RSI }
    /* +0xd1feb1 */ __asm { PUSH R13 }
    /* +0xd1feb3 */ __asm { PUSH R15 }
    /* +0xd1feb5 */ __asm { PUSH R12 }
    /* +0xd1feb7 */ __asm { PUSH RBP }
    /* +0xd1feb8 */ __asm { PUSH RDI }
    /* +0xd1feb9 */ __asm { PUSH RBX }
    /* +0xd1feba */ __asm { PUSH R14 }
    /* +0xd1febc */ __asm { SUB RSP,0x1b8 }
    /* +0xd1fec3 */ __asm { MOV R12D,EDX }
    /* +0xd1fec6 */ __asm { MOV dword ptr [RSP + 0xe0],0x7d2ae8b2 }
    /* +0xd1fed1 */ __asm { MOV R10D,dword ptr [RSP + 0xe0] }
    /* +0xd1fed9 */ __asm { TEST R10B,0x1 }
    /* +0xd1fedd */ __asm { NOP }
    /* +0xd1fede */ __asm { NOP }
    /* +0xd1fedf */ __asm { NOP }
    /* +0xd1fee0 */ __asm { NOP }
    /* +0xd1fee1 */ __asm { NOP }
    /* +0xd1fee2 */ __asm { NOP }
    /* +0xd1fee3 */ __asm { MOV R10D,0xf4bcdeac }
    /* +0xd1fee9 */ __asm { MOV EAX,0xae65eba0 }
    /* +0xd1feee */ __asm { MOV EDX,0xfaf08676 }
    /* +0xd1fef3 */ __asm { ADD EAX,0xd8eb8cc6 }
    /* +0xd1fef8 */ __asm { IMUL EDX,EDX,0x4f60981d }
    /* +0xd1fefe */ __asm { XOR EDX,0xdf12fe7e }
    /* +0xd1ff04 */ __asm { MOVSXD R9,EDX }
    /* +0xd1ff07 */ __asm { MOV R11,R9 }
    /* +0xd1ff0a */ __asm { ROL R11,0x9 }
    /* +0xd1ff0e */ __asm { ADD R10D,0xc1f2190b }
    /* +0xd1ff15 */ __asm { MOVSXD RDX,R10D }
    /* +0xd1ff18 */ __asm { MOV ECX,0x45528f94 }
    /* +0xd1ff1d */ __asm { ADD ECX,0xcede1ecb }
    /* +0xd1ff23 */ __asm { CMP RDX,RAX }
    /* +0xd1ff26 */ __asm { MOV RAX,-0x1430ae5f }
    /* +0xd1ff2d */ __asm { CMOVA RAX,RCX }
    /* +0xd1ff31 */ __asm { ADD RAX,R11 }
    /* +0xd1ff34 */ __asm { MOV R11,-0x675c650fa2 }
    /* +0xd1ff3e */ __asm { CMP RAX,R11 }
    /* +0xd1ff41 */ __asm { JZ 0x7fffa548ff69 }
    /* +0xd1ff43 */ __asm { MOV dword ptr [RSP + 0x74],0x0 }
    /* +0xd1ff4b */ __asm { MOV dword ptr [RSP + 0x1b0],0x0 }
    /* +0xd1ff56 */ __asm { MOV EBP,0x69bee745 }
    /* +0xd1ff5b */ __asm { XOR EBP,0x36a42532 }
    /* +0xd1ff61 */ __asm { ADD EBP,0x1fc4f44f }
    /* +0xd1ff67 */ __asm { JMP 0x7fffa548ff8c }
    /* +0xd1ff69 */ __asm { MOV R10D,0xe78eaee0 }
    /* +0xd1ff6f */ __asm { SUB R10D,R9D }
    /* +0xd1ff72 */ __asm { ROL R10D,0x14 }
    /* +0xd1ff76 */ __asm { MOVSXD RBP,R10D }
    /* +0xd1ff79 */ __asm { MOV dword ptr [RSP + 0x1b0],0x0 }
    /* +0xd1ff84 */ __asm { MOV dword ptr [RSP + 0x74],0x0 }
    /* +0xd1ff8c */ __asm { MOV EAX,0x93a23299 }
    /* +0xd1ff91 */ __asm { MOV R10D,0x94522db1 }
    /* +0xd1ff97 */ __asm { IMUL R9D,R10D,0x1ae703a5 }
    /* +0xd1ff9e */ __asm { XOR R9D,0x5ba73908 }
    /* +0xd1ffa5 */ __asm { ADD RAX,0xbee8c84 }
    /* +0xd1ffab */ __asm { MOV dword ptr [RSP + 0x38],0x0 }
    /* +0xd1ffb3 */ __asm { CMP R9,RAX }
    /* +0xd1ffb6 */ __asm { JZ 0x7fffa5490014 }
    /* +0xd1ffb8 */ __asm { MOV EAX,0x8000001b }
    /* +0xd1ffbd */ __asm { XOR ECX,ECX }
    /* +0xd1ffbf */ __asm { XCHG RBX,R8 }
    /* +0xd1ffc2 */ __asm { CPUID }
    /* +0xd1ffc4 */ __asm { XCHG RBX,R8 }
    /* +0xd1ffc7 */ __asm { MOV R10D,0xe66b1e3c }
    /* +0xd1ffcd */ __asm { MOV R9D,0x2d55d10f }
    /* +0xd1ffd3 */ __asm { NOT R9D }
    /* +0xd1ffd6 */ __asm { ADD R9D,EBP }
    /* +0xd1ffd9 */ __asm { IMUL EBX,R10D,0x629399f5 }
    /* +0xd1ffe0 */ __asm { XOR EBX,0xd7e1331b }
    /* +0xd1ffe6 */ __asm { ADD EBX,EBP }
    /* +0xd1ffe8 */ __asm { MOV dword ptr [RSP + 0xe0],R9D }
    /* +0xd1fff0 */ __asm { MOV dword ptr [RSP + 0x1b0],EAX }
    /* +0xd1fff7 */ __asm { MOV dword ptr [RSP + 0x18c],0x0 }
    /* +0xd20002 */ __asm { MOV dword ptr [RSP + 0x18c],EDX }
    /* +0xd20009 */ __asm { MOV dword ptr [RSP + 0x38],ECX }
    /* +0xd2000d */ __asm { MOV dword ptr [RSP + 0x74],R8D }
    /* +0xd20012 */ __asm { JMP 0x7fffa5490061 }
    /* +0xd20014 */ __asm { XOR ECX,ECX }
    /* +0xd20016 */ __asm { MOV EAX,0x8000001b }
    /* +0xd2001b */ __asm { XCHG RBX,R8 }
    /* +0xd2001e */ __asm { CPUID }
    /* +0xd20020 */ __asm { XCHG RBX,R8 }
    /* +0xd20023 */ __asm { MOV R10D,0xd0fac3b1 }
    /* +0xd20029 */ __asm { MOV EBX,EBP }
    /* +0xd2002b */ __asm { OR EBX,0x1 }
    /* +0xd2002e */ __asm { IMUL EBX,R10D }
    /* +0xd20032 */ __asm { NOT EBX }
    /* +0xd20034 */ __asm { MOV dword ptr [RSP + 0x18c],0x0 }
    /* +0xd2003f */ __asm { MOV dword ptr [RSP + 0x1b0],EAX }
    /* +0xd20046 */ __asm { MOV dword ptr [RSP + 0x38],ECX }
    /* +0xd2004a */ __asm { MOV dword ptr [RSP + 0x74],R8D }
    /* +0xd2004f */ __asm { MOV dword ptr [RSP + 0x18c],EDX }
    /* +0xd20056 */ __asm { MOV dword ptr [RSP + 0xe0],0x6eabe35f }
    /* +0xd20061 */ __asm { MOV R10D,dword ptr [RSP + 0xe0] }
    /* +0xd20069 */ __asm { TEST R12D,R12D }
    /* +0xd2006c */ __asm { JLE 0x7fffa54904bb }
    /* +0xd20072 */ __asm { MOV R10W,0xeedf }
    /* +0xd20077 */ __asm { XOR R10D,0xffffa54d }
    /* +0xd2007e */ __asm { ADD R10D,EBP }
    /* +0xd20081 */ __asm { MOVZX R10D,R10W }
    /* +0xd20085 */ __asm { CMP R12D,R10D }
    /* +0xd20088 */ __asm { JNZ 0x7fffa54916e6 }
    /* +0xd2008e */ __asm { MOV R10D,0x33019df3 }
    /* +0xd20094 */ __asm { ADD R10D,0xe43bdd5e }
    /* +0xd2009b */ __asm { XOR R10D,0x865308a7 }
    /* +0xd200a2 */ __asm { MOV dword ptr [RSP + 0xe0],R10D }
    /* +0xd200aa */ __asm { MOV R10D,dword ptr [RSP + 0xe0] }
    /* +0xd200b2 */ __asm { MOV dword ptr [RSP + 0xe0],0x9ab8b6ce }
    /* +0xd200bd */ __asm { MOV R10D,dword ptr [RSP + 0xe0] }
    /* +0xd200c5 */ __asm { PUSHFQ }
    /* +0xd200c6 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xd200ce */ __asm { POPFQ }
    /* +0xd200cf */ __asm { MOV dword ptr [RSP + 0xe0],0x80c18824 }
    /* +0xd200da */ __asm { MOV R10D,dword ptr [RSP + 0xe0] }
    /* +0xd200e2 */ __asm { CMP R10D,0x1399978a }
    /* +0xd200e9 */ __asm { JBE 0x7fffa54919af }
    /* +0xd200ef */ __asm { MOV dword ptr [RSP + 0xe0],0xfd4f8e31 }
    /* +0xd200fa */ __asm { MOV R10D,dword ptr [RSP + 0xe0] }
    /* +0xd20102 */ __asm { CMP R10D,0xee01faab }
    /* +0xd20109 */ __asm { JBE 0x7fffa54919b7 }
    /* +0xd2010f */ __asm { PUSHFQ }
    /* +0xd20110 */ __asm { POP R10 }
    /* +0xd20112 */ __asm { AND R10D,0x100 }
    /* +0xd20119 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd20120 */ __asm { MOV R8,0x0 }
    /* +0xd20127 */ __asm { NOP }
    /* +0xd20128 */ __asm { MOV R9D,0x84c94311 }
    /* +0xd2012e */ __asm { XOR R9D,0x84c94311 }
    /* +0xd20135 */ __asm { ROL R9D,0xd }
    /* +0xd20139 */ __asm { MOV qword ptr [RSP + 0x68],R10 }
    /* +0xd2013e */ __asm { MOV qword ptr [RSP + 0xd0],R9 }
    /* +0xd20146 */ __asm { CMP R10,R9 }
    /* +0xd20149 */ __asm { NOP }
    /* +0xd2014a */ __asm { NOP }
    /* +0xd2014b */ __asm { NOP }
    /* +0xd2014c */ __asm { NOP }
    /* +0xd2014d */ __asm { NOP }
    /* +0xd2014e */ __asm { NOP }
    /* +0xd2014f */ __asm { NOP }
    /* +0xd20150 */ __asm { NOP }
    /* +0xd20151 */ __asm { NOP }
    /* +0xd20152 */ __asm { NOP }
    /* +0xd20153 */ __asm { NOP }
    /* +0xd20154 */ __asm { NOP }
    /* +0xd20155 */ __asm { NOP }
    /* +0xd20156 */ __asm { NOP }
    /* +0xd20157 */ __asm { NOP }
    /* +0xd20158 */ __asm { NOP }
    /* +0xd20159 */ __asm { MOV AX,0x3c5 }
    /* +0xd2015d */ __asm { ADD EAX,0xffff9e30 }
    /* +0xd20162 */ __asm { ROL AX,0x7 }
    /* +0xd20166 */ __asm { MOV R10D,EBP }
    /* +0xd20169 */ __asm { OR R10D,0x1 }
    /* +0xd2016d */ __asm { MOV dword ptr [RSP + 0x58],R10D }
    /* +0xd20172 */ __asm { IMUL EAX,R10D }
    /* +0xd20176 */ __asm { MOVZX R9D,AX }
    /* +0xd2017a */ __asm { MOV RAX,qword ptr GS:[R9] }
    /* +0xd2017e */ __asm { MOV R10,qword ptr [RSP + 0x1f8] }
    /* +0xd20186 */ __asm { MOV RAX,qword ptr [RAX + 0xd48] }
    /* +0xd2018d */ __asm { XOR RAX,qword ptr [R10 + -0x3a0] }
    /* +0xd20194 */ __asm { MOV R11,-0x58ee59dfe5313887 }
    /* +0xd2019e */ __asm { CMP RAX,R11 }
    /* +0xd201a1 */ __asm { JNZ 0x7fffa54901a5 }
    /* +0xd201a3 */ __asm { CMP EDX,ESI }
    /* +0xd201a5 */ __asm { LEA RAX,[0x7fffa478d785] }
    /* +0xd201ac */ __asm { MOV R8D,EBX }
    /* +0xd201af */ __asm { OR R8D,0x1 }
    /* +0xd201b3 */ __asm { MOV DX,0x8acd }
    /* +0xd201b7 */ __asm { MOV dword ptr [RSP + 0x17c],R8D }
    /* +0xd201bf */ __asm { IMUL EDX,R8D }
    /* +0xd201c3 */ __asm { ROL DX,0x1 }
    /* +0xd201c6 */ __asm { MOVSX RDX,DX }
    /* +0xd201ca */ __asm { CMP qword ptr [RAX + RDX*0x1],0x0 }
    /* +0xd201cf */ __asm { MOV qword ptr [RSP + 0x40],R10 }
    /* +0xd201d4 */ __asm { MOV dword ptr [RSP + 0x19c],R12D }
    /* +0xd201dc */ __asm { JNZ 0x7fffa5490bd9 }
    /* +0xd201e2 */ __asm { MOV DX,0x40 }
    /* +0xd201e6 */ __asm { LEA EAX,[RDX + RDX*0x2] }
    /* +0xd201e9 */ __asm { MOV ECX,EBP }
    /* +0xd201eb */ __asm { ROL AX,CL }
    /* +0xd201ee */ __asm { MOVZX R9D,AX }
    /* +0xd201f2 */ __asm { MOV RAX,qword ptr GS:[R9] }
    /* +0xd201f6 */ __asm { MOV R8D,EBP }
    /* +0xd201f9 */ __asm { OR R8D,0x1 }
    /* +0xd201fd */ __asm { MOV EDX,0xb724c4b2 }
    /* +0xd20202 */ __asm { ADD EDX,0x3cc39814 }
    /* +0xd20208 */ __asm { MOV dword ptr [RSP + 0x64],R8D }
    /* +0xd2020d */ __asm { IMUL EDX,R8D }
    /* +0xd20211 */ __asm { MOV dword ptr [RSP + 0xe0],EDX }
    /* +0xd20218 */ __asm { MOV EDX,dword ptr [RSP + 0xe0] }
    /* +0xd2021f */ __asm { CMP EDX,0xa4288ce4 }
    /* +0xd20225 */ __asm { NOP }
    /* +0xd20226 */ __asm { NOP }
    /* +0xd20227 */ __asm { NOP }
    /* +0xd20228 */ __asm { NOP }
    /* +0xd20229 */ __asm { NOP }
    /* +0xd2022a */ __asm { MOV R9,qword ptr [RSP + 0xd0] }
    /* +0xd20232 */ __asm { CMP dword ptr [RSP + 0x68],R9D }
    /* +0xd20237 */ __asm { NOP }
    /* +0xd20238 */ __asm { NOP }
    /* +0xd20239 */ __asm { NOP }
    /* +0xd2023a */ __asm { NOP }
    /* +0xd2023b */ __asm { NOP }
    /* +0xd2023c */ __asm { NOP }
    /* +0xd2023d */ __asm { NOP }
    /* +0xd2023e */ __asm { NOP }
    /* +0xd2023f */ __asm { NOP }
    /* +0xd20240 */ __asm { NOP }
    /* +0xd20241 */ __asm { NOP }
    /* +0xd20242 */ __asm { MOV DX,0x252f }
    /* +0xd20246 */ __asm { IMUL EDX,EDX,0x6761 }
    /* +0xd2024c */ __asm { NOT EDX }
    /* +0xd2024e */ __asm { MOVZX R9D,DX }
    /* +0xd20252 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0xd20256 */ __asm { MOV R11,qword ptr [R10 + -0xed8] }
    /* +0xd2025d */ __asm { MOV RDX,qword ptr GS:[R9] }
    /* +0xd20261 */ __asm { MOV R9,RBX }
    /* +0xd20264 */ __asm { OR R9,0x1 }
    /* +0xd20268 */ __asm { MOV R8W,0x78d1 }
    /* +0xd2026d */ __asm { MOV RCX,0x34b5d069af843bc3 }
    /* +0xd20277 */ __asm { ADD R8D,EBP }
    /* +0xd2027a */ __asm { ROL R8W,0xe }
    /* +0xd2027f */ __asm { MOVZX R8D,R8W }
    /* +0xd20283 */ __asm { ADD RCX,-0x2061b42c }
    /* +0xd2028a */ __asm { IMUL RCX,R9 }
    /* +0xd2028e */ __asm { AND R11,qword ptr [R8 + RDX*0x1] }
    /* +0xd20292 */ __asm { XOR R11,0x3395155c }
    /* +0xd20299 */ __asm { MOV RDX,-0xa6876b3e192648f }
    /* +0xd202a3 */ __asm { IMUL RDX,R11 }
    /* +0xd202a7 */ __asm { CMP RCX,RDX }
    /* +0xd202aa */ __asm { JZ 0x7fffa5491998 }
    /* +0xd202b0 */ __asm { MOV RDX,0x10000000387 }
    /* +0xd202ba */ __asm { ADD RAX,0x10 }
    /* +0xd202be */ __asm { MOV R8,0x5f32fbbfc9cbe8f7 }
    /* +0xd202c8 */ __asm { MOV R9,0x1830f8c889f2809a }
    /* +0xd202d2 */ __asm { MOV R13,-0xc0623e74cbd94e1 }
    /* +0xd202dc */ __asm { MOV R14D,dword ptr [RSP + 0x58] }
    /* +0xd202e1 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0xd202f0 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0xd202f3 */ __asm { MOV ECX,0x4f91ff8 }
    /* +0xd202f8 */ __asm { ADD ECX,EBP }
    /* +0xd202fa */ __asm { ADD ECX,0x77d69491 }
    /* +0xd20300 */ __asm { MOV dword ptr [RSP + 0xe0],ECX }
    /* +0xd20307 */ __asm { MOV ESI,dword ptr [RSP + 0xe0] }
    /* +0xd2030e */ __asm { MOV ECX,0x3b7d1de0 }
    /* +0xd20313 */ __asm { IMUL R15D,ECX,0x1c4bdc25 }
    /* +0xd2031a */ __asm { MOV ECX,EBP }
    /* +0xd2031c */ __asm { ROL R15D,CL }
    /* +0xd2031f */ __asm { CMP ESI,R15D }
    /* +0xd20322 */ __asm { NOP }
    /* +0xd20323 */ __asm { NOP }
    /* +0xd20324 */ __asm { NOP }
    /* +0xd20325 */ __asm { NOP }
    /* +0xd20326 */ __asm { NOP }
    /* +0xd20327 */ __asm { MOVZX ECX,word ptr [RAX + 0x58] }
    /* +0xd2032b */ __asm { CMP ECX,0x2 }
    /* +0xd2032e */ __asm { JC 0x7fffa5490410 }
    /* +0xd20334 */ __asm { SHR ECX,0x1 }
    /* +0xd20336 */ __asm { MOV R15,qword ptr [RAX + 0x60] }
    /* +0xd2033a */ __asm { CMP CX,0x1 }
    /* +0xd2033e */ __asm { JZ 0x7fffa54904a0 }
    /* +0xd20344 */ __asm { MOV EDI,ECX }
    /* +0xd20346 */ __asm { AND EDI,0xfffffffe }
    /* +0xd20349 */ __asm { MOV RSI,-0x23bce28ffe990193 }
    /* +0xd20353 */ __asm { XOR R12D,R12D }
    /* +0xd20356 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0xd20360 */ __asm { MOVZX R11D,word ptr [R15 + R12*0x2 + 0x2] }
    /* +0xd20366 */ __asm { MOV R10D,R11D }
    /* +0xd20369 */ __asm { OR R10D,0x20 }
    /* +0xd2036d */ __asm { LEA R14,[R12 + 0x2] }
    /* +0xd20372 */ __asm { MOVQ XMM4,RSI }
    /* +0xd20377 */ __asm { LEA ESI,[R11 + -0x41] }
    /* +0xd2037b */ __asm { CMP SI,0x1a }
    /* +0xd2037f */ __asm { CMOVNC R10D,R11D }
    /* +0xd20383 */ __asm { MOVZX R11D,R10B }
    /* +0xd20387 */ __asm { MOVZX R10D,word ptr [R15 + R12*0x2] }
    /* +0xd2038c */ __asm { LEA ESI,[R10 + -0x41] }
    /* +0xd20390 */ __asm { MOV R12D,R10D }
    /* +0xd20393 */ __asm { OR R12D,0x20 }
    /* +0xd20397 */ __asm { CMP SI,0x1a }
    /* +0xd2039b */ __asm { CMOVNC R12D,R10D }
    /* +0xd2039f */ __asm { MOVZX R10D,R12B }
    /* +0xd203a3 */ __asm { MOVD XMM0,R10D }
    /* +0xd203a8 */ __asm { PXOR XMM0,XMM4 }
    /* +0xd203ac */ __asm { MOVQ RSI,XMM0 }
    /* +0xd203b1 */ __asm { IMUL RSI,RDX }
    /* +0xd203b5 */ __asm { XOR RSI,R11 }
    /* +0xd203b8 */ __asm { IMUL RSI,RDX }
    /* +0xd203bc */ __asm { MOV R12,R14 }
    /* +0xd203bf */ __asm { CMP RDI,R14 }
    /* +0xd203c2 */ __asm { JNZ 0x7fffa5490360 }
    /* +0xd203c4 */ __asm { TEST CL,0x1 }
    /* +0xd203c7 */ __asm { JZ 0x7fffa54903f0 }
    /* +0xd203c9 */ __asm { MOVZX ECX,word ptr [R15 + R14*0x2] }
    /* +0xd203ce */ __asm { MOV R10D,ECX }
    /* +0xd203d1 */ __asm { OR R10D,0x20 }
    /* +0xd203d5 */ __asm { LEA R11D,[RCX + -0x41] }
    /* +0xd203d9 */ __asm { CMP R11W,0x1a }
    /* +0xd203de */ __asm { CMOVNC R10D,ECX }
    /* +0xd203e2 */ __asm { MOVZX ECX,R10B }
    /* +0xd203e6 */ __asm { XOR RCX,RSI }
    /* +0xd203e9 */ __asm { IMUL RCX,RDX }
    /* +0xd203ed */ __asm { MOV RSI,RCX }
    /* +0xd203f0 */ __asm { MOV R11,-0x757b0d9695322b1 }
    /* +0xd203fa */ __asm { CMP RSI,R11 }
    /* +0xd203fd */ __asm { SETZ CL }
    /* +0xd20400 */ __asm { MOV R14D,dword ptr [RSP + 0x58] }
    /* +0xd20405 */ __asm { JMP 0x7fffa5490412 }
    /* +0xd20410 */ __asm { XOR ECX,ECX }
    /* +0xd20412 */ __asm { NOP }
    /* +0xd20414 */ __asm { MOV R11,0x0 }
    /* +0xd2041b */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xd20422 */ __asm { MOV R10W,0xdb83 }
    /* +0xd20427 */ __asm { IMUL R10D,R14D }
    /* +0xd2042b */ __asm { ADD R10D,0xffffb693 }
    /* +0xd20432 */ __asm { MOVZX R11D,R10W }
    /* +0xd20436 */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0xd2043a */ __asm { MOV R11,qword ptr [R11 + 0x30] }
    /* +0xd2043e */ __asm { MOV R10,R8 }
    /* +0xd20441 */ __asm { CMP R11,R9 }
    /* +0xd20444 */ __asm { NOP }
    /* +0xd20445 */ __asm { NOP }
    /* +0xd20446 */ __asm { NOP }
    /* +0xd20447 */ __asm { NOP }
    /* +0xd20448 */ __asm { NOP }
    /* +0xd20449 */ __asm { TEST CL,CL }
    /* +0xd2044b */ __asm { JNZ 0x7fffa5490562 }
    /* +0xd20451 */ __asm { MOV R10W,0xf5ee }
    /* +0xd20456 */ __asm { ADD R10D,0xad2 }
    /* +0xd2045d */ __asm { MOV ECX,EBP }
    /* +0xd2045f */ __asm { ROL R10W,CL }
    /* +0xd20463 */ __asm { MOVZX ECX,R10W }
    /* +0xd20467 */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0xd2046b */ __asm { CMP qword ptr [R11 + 0x30],R13 }
    /* +0xd2046f */ __asm { NOP }
    /* +0xd20470 */ __asm { NOP }
    /* +0xd20471 */ __asm { NOP }
    /* +0xd20472 */ __asm { NOP }
    /* +0xd20473 */ __asm { NOP }
    /* +0xd20474 */ __asm { NOP }
    /* +0xd20475 */ __asm { NOP }
    /* +0xd20476 */ __asm { NOP }
    /* +0xd20477 */ __asm { NOP }
    /* +0xd20478 */ __asm { NOP }
    /* +0xd20479 */ __asm { NOP }
    /* +0xd2047a */ __asm { NOP }
    /* +0xd2047b */ __asm { NOP }
    /* +0xd2047c */ __asm { NOP }
    /* +0xd2047d */ __asm { NOP }
    /* +0xd2047e */ __asm { NOP }
    /* +0xd2047f */ __asm { NOP }
    /* +0xd204a0 */ __asm { MOV RSI,-0x23bce28ffe990193 }
    /* +0xd204aa */ __asm { XOR R14D,R14D }
    /* +0xd204ad */ __asm { TEST CL,0x1 }
    /* +0xd204b0 */ __asm { JNZ 0x7fffa54903c9 }
    /* +0xd204b6 */ __asm { JMP 0x7fffa54903f0 }
    /* +0xd204bb */ __asm { JNZ 0x7fffa54916e6 }
    /* +0xd204c1 */ __asm { MOV dword ptr [RSP + 0xe0],0x18d7d9b1 }
    /* +0xd204cc */ __asm { MOV R10D,dword ptr [RSP + 0xe0] }
    /* +0xd204d4 */ __asm { PXOR XMM4,XMM4 }
    /* +0xd204d8 */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM4 }
    /* +0xd204e1 */ __asm { MOV dword ptr [RSP + 0x180],0xc32892 }
    /* +0xd204ec */ __asm { MOV R10D,dword ptr [RSP + 0x180] }
    /* +0xd204f4 */ __asm { CMP R10D,0x550ad09c }
    /* +0xd204fb */ __asm { NOP }
    /* +0xd204fc */ __asm { NOP }
    /* +0xd204fd */ __asm { NOP }
    /* +0xd204fe */ __asm { NOP }
    /* +0xd204ff */ __asm { NOP }
    /* +0xd20500 */ __asm { NOP }
    /* +0xd20501 */ __asm { NOP }
    /* +0xd20502 */ __asm { NOP }
    /* +0xd20503 */ __asm { NOP }
    /* +0xd20504 */ __asm { NOP }
    /* +0xd20505 */ __asm { NOP }
    /* +0xd20506 */ __asm { NOP }
    /* +0xd20507 */ __asm { NOP }
    /* +0xd20508 */ __asm { NOP }
    /* +0xd20509 */ __asm { NOP }
    /* +0xd2050a */ __asm { NOP }
    /* +0xd2050b */ __asm { NOP }
    /* +0xd20562 */ __asm { MOV dword ptr [RSP + 0xe0],0xf9fbf3f6 }
    /* +0xd2056d */ __asm { MOV R10D,dword ptr [RSP + 0xe0] }
    /* +0xd20575 */ __asm { MOV RAX,qword ptr [RAX + 0x30] }
    /* +0xd20579 */ __asm { TEST RAX,RAX }
    /* +0xd2057c */ __asm { JZ 0x7fffa5490bba }
    /* +0xd20582 */ __asm { MOV R9D,dword ptr [RAX + 0x3c] }
    /* +0xd20586 */ __asm { ADD R9,RAX }
    /* +0xd20589 */ __asm { JZ 0x7fffa5490bba }
    /* +0xd2058f */ __asm { MOV R10W,0xe2bd }
    /* +0xd20594 */ __asm { ADD R10D,0x57a7 }
    /* +0xd2059b */ __asm { XOR R10D,0x7794 }
    /* +0xd205a2 */ __asm { ADD R10D,EBX }
    /* +0xd205a5 */ __asm { MOVZX ECX,R10W }
    /* +0xd205a9 */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0xd205ad */ __asm { MOV R10W,0xb20f }
    /* +0xd205b2 */ __asm { MOV R11,qword ptr [R11 + 0xfe8] }
    /* +0xd205b9 */ __asm { NOT R10D }
    /* +0xd205bc */ __asm { ADD R10D,EBX }
    /* +0xd205bf */ __asm { MOVZX ECX,R10W }
    /* +0xd205c3 */ __asm { MOV R10,qword ptr GS:[RCX] }
    /* +0xd205c7 */ __asm { ADD R11,qword ptr [R10 + 0x370] }
    /* +0xd205ce */ __asm { MOV R10,-0x5d293fd390ef0015 }
    /* +0xd205d8 */ __asm { CMP R11,R10 }
    /* +0xd205db */ __asm { NOP }
    /* +0xd205dc */ __asm { NOP }
    /* +0xd205dd */ __asm { NOP }
    /* +0xd205de */ __asm { NOP }
    /* +0xd205df */ __asm { NOP }
    /* +0xd205e0 */ __asm { NOP }
    /* +0xd205e1 */ __asm { NOP }
    /* +0xd205e2 */ __asm { NOP }
    /* +0xd205e3 */ __asm { NOP }
    /* +0xd205e4 */ __asm { NOP }
    /* +0xd205e5 */ __asm { NOP }
    /* +0xd205e6 */ __asm { NOP }
    /* +0xd205e7 */ __asm { NOP }
    /* +0xd205e8 */ __asm { NOP }
    /* +0xd205e9 */ __asm { NOP }
    /* +0xd205ea */ __asm { NOP }
    /* +0xd205eb */ __asm { NOP }
    /* +0xd20bba */ __asm { XOR R8D,R8D }
    /* +0xd20bbd */ __asm { LEA RAX,[0x7fffa478bfd3] }
    /* +0xd20bc4 */ __asm { MOV R10W,0xfbf4 }
    /* +0xd20bc9 */ __asm { MOV EDX,EBP }
    /* +0xd20bcb */ __asm { XOR EDX,R10D }
    /* +0xd20bce */ __asm { ROR DX,0x1 }
    /* +0xd20bd1 */ __asm { MOVSX RDX,DX }
    /* +0xd20bd5 */ __asm { MOV qword ptr [RAX + RDX*0x1],R8 }
    /* +0xd20bd9 */ __asm { MOV R10D,0x957d8c67 }
    /* +0xd20bdf */ __asm { MOV R9D,EBX }
    /* +0xd20be2 */ __asm { OR R9D,0x1 }
    /* +0xd20be6 */ __asm { IMUL R9D,R10D }
    /* +0xd20bea */ __asm { ADD R9D,0x1f80bbe1 }
    /* +0xd20bf1 */ __asm { MOV R11,qword ptr [R9] }
    /* +0xd20bf4 */ __asm { MOV R9D,0x6c8350e5 }
    /* +0xd20bfa */ __asm { XOR R9D,0x9d7ae515 }
    /* +0xd20c01 */ __asm { SUB R9D,EBX }
    /* +0xd20c04 */ __asm { MOV RAX,qword ptr [R9] }
    /* +0xd20c07 */ __asm { MOV R10W,0xe7c5 }
    /* +0xd20c0c */ __asm { LEA RDX,[0x7fffa478941d] }
    /* +0xd20c13 */ __asm { ADD R10D,0x79fe }
    /* +0xd20c1a */ __asm { MOV R9D,EBX }
    /* +0xd20c1d */ __asm { XOR R9D,R10D }
    /* +0xd20c20 */ __asm { MOVSX R8,R9W }
    /* +0xd20c24 */ __asm { MOV R10,qword ptr [RDX + R8*0x1] }
    /* +0xd20c28 */ __asm { XOR EDX,EDX }
    /* +0xd20c2a */ __asm { TEST R10,R10 }
    /* +0xd20c2d */ __asm { JZ 0x7fffa5490c32 }
    /* +0xd20c2f */ __asm { MOV RDX,qword ptr [R10] }
    /* +0xd20c32 */ __asm { MOV R9D,0xfac7d916 }
    /* +0xd20c38 */ __asm { MOV R8D,0x89629165 }
    /* +0xd20c3e */ __asm { XOR R8D,0xe82917cb }
    /* +0xd20c45 */ __asm { LEA R10,[0x7fffa47c64de] }
    /* +0xd20c4c */ __asm { IMUL R8D,R8D,0x43c512af }
    /* +0xd20c53 */ __asm { MOV ECX,EBX }
    /* +0xd20c55 */ __asm { ROL R8D,CL }
    /* +0xd20c58 */ __asm { MOV EDI,0xee19a2cc }
    /* +0xd20c5d */ __asm { ADD EDI,0x2c2aaf94 }
    /* +0xd20c63 */ __asm { ROL EDI,0xd }
    /* +0xd20c66 */ __asm { XOR R9D,0x9f819267 }
    /* +0xd20c6d */ __asm { MOV R13D,0x78dc179f }
    /* +0xd20c73 */ __asm { ADD R13D,0x9154d209 }
    /* +0xd20c7a */ __asm { ADD RAX,RDX }
    /* +0xd20c7d */ __asm { MOV R15,RAX }
    /* +0xd20c80 */ __asm { NEG R15 }
    /* +0xd20c83 */ __asm { MOV ECX,EBP }
    /* +0xd20c85 */ __asm { ROL R13D,CL }
    /* +0xd20c88 */ __asm { XOR EDI,EBP }
    /* +0xd20c8a */ __asm { CMP RDI,R13 }
    /* +0xd20c8d */ __asm { CMOVA R15,RAX }
    /* +0xd20c91 */ __asm { MOV EAX,0x15 }
    /* +0xd20c96 */ __asm { XOR ECX,ECX }
    /* +0xd20c98 */ __asm { XCHG RBX,RDI }
    /* +0xd20c9b */ __asm { CPUID }
    /* +0xd20c9d */ __asm { XCHG RBX,RDI }
    /* +0xd20ca0 */ __asm { ADD R15,R11 }
    /* +0xd20ca3 */ __asm { MOVSXD R8,R8D }
    /* +0xd20ca6 */ __asm { ADD R9D,EBP }
    /* +0xd20ca9 */ __asm { ROL R9D,0xc }
    /* +0xd20cad */ __asm { MOV qword ptr [R10 + R8*0x1],R15 }
    /* +0xd20cb1 */ __asm { MOV R11,qword ptr [R9] }
    /* +0xd20cb4 */ __asm { MOV R10D,0x6330b390 }
    /* +0xd20cba */ __asm { LEA R8,[0x7fffa47933d9] }
    /* +0xd20cc1 */ __asm { ADD R10D,EBP }
    /* +0xd20cc4 */ __asm { ROL R10D,0x18 }
    /* +0xd20cc8 */ __asm { MOVSXD R10,R10D }
    /* +0xd20ccb */ __asm { MOV qword ptr [R8 + R10*0x1],R11 }
    /* +0xd20ccf */ __asm { MOV dword ptr [RSP + 0x180],0x0 }
    /* +0xd20cda */ __asm { MOV dword ptr [RSP + 0xbc],0x0 }
    /* +0xd20ce5 */ __asm { MOV dword ptr [RSP + 0x190],0x0 }
    /* +0xd20cf0 */ __asm { MOV dword ptr [RSP + 0x80],0x0 }
    /* +0xd20cfb */ __asm { MOV dword ptr [RSP + 0x80],EDX }
    /* +0xd20d02 */ __asm { MOV dword ptr [RSP + 0x190],ECX }
    /* +0xd20d09 */ __asm { MOV dword ptr [RSP + 0x180],EAX }
    /* +0xd20d10 */ __asm { MOV R10W,0xb74d }
    /* +0xd20d15 */ __asm { XOR R10D,0x6947 }
    /* +0xd20d1c */ __asm { ADD R10D,0x2256 }
    /* +0xd20d23 */ __asm { MOV ECX,EBX }
}


// ============================================================================
// Function : FUN_7fffa56a1590  |  RVA: 0xf31590  |  Size: 69 bytes
// Callers  : FUN_7fffa4e8e4c0@0x71e4c0
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa56a1590(void)

{
  FUN_7fffa4f41640(0xb8268d0c,0x6b10d462);
  return 1;
}


// ============================================================================
// Function : TempestEntry_Init  |  RVA: 0xf35e30  |  Size: 233 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void TempestEntry_Init(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_7fffa5513c50(0xd6dedb39);
  (*(code *)((*(uint64_t *)((uint64_t)bRam00007fffa478681c * 8 + 0x7fffa4786826) ^
             uRam00007fffa4786870) + 0x5de50c0))(param_1,param_2,param_3,param_4);
  return;
}

