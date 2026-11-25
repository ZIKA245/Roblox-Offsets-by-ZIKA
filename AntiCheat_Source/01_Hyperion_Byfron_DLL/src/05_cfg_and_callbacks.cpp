// Subsystem: Control Flow Guard & User Callback Dispatchers
// Functions: 7
#include "../include/module_declarations.hpp"

// ============================================================================
// Function : UserCallbackInnerHandler  |  RVA: 0x720b50  |  Size: 74 bytes
// Callers  : Hook_ntdll_dll_KiUserCallbackDispatcher@0xce37e0
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void UserCallbackInnerHandler(void) {
    /* +0x720b50 */ __asm { PUSH R14 }
    /* +0x720b52 */ __asm { PUSH R13 }
    /* +0x720b54 */ __asm { PUSH R15 }
    /* +0x720b56 */ __asm { PUSH RDI }
    /* +0x720b57 */ __asm { PUSH RSI }
    /* +0x720b58 */ __asm { PUSH RBP }
    /* +0x720b59 */ __asm { PUSH R12 }
    /* +0x720b5b */ __asm { PUSH RBX }
    /* +0x720b5c */ __asm { SUB RSP,0x58 }
    /* +0x720b60 */ __asm { MOV dword ptr [RSP + 0x2c],ECX }
    /* +0x720b64 */ __asm { MOV EDX,0xc11431c1 }
    /* +0x720b69 */ __asm { XOR EDX,0xaba7c16b }
    /* +0x720b6f */ __asm { MOV dword ptr [RSP + 0x54],EDX }
    /* +0x720b73 */ __asm { MOV EDX,dword ptr [RSP + 0x54] }
    /* +0x720b77 */ __asm { MOV dword ptr [RSP + 0x54],0xf55b069 }
    /* +0x720b7f */ __asm { MOV EDX,dword ptr [RSP + 0x54] }
    /* +0x720b83 */ __asm { CMP EDX,0xacd466ce }
    /* +0x720b89 */ __asm { NOP }
    /* +0x720b8a */ __asm { NOP }
    /* +0x720b8b */ __asm { NOP }
    /* +0x720b8c */ __asm { NOP }
    /* +0x720b8d */ __asm { NOP }
    /* +0x720b8e */ __asm { NOP }
    /* +0x720b8f */ __asm { NOP }
    /* +0x720b90 */ __asm { NOP }
    /* +0x720b91 */ __asm { NOP }
    /* +0x720b92 */ __asm { NOP }
    /* +0x720b93 */ __asm { NOP }
    /* +0x720b94 */ __asm { NOP }
    /* +0x720b95 */ __asm { NOP }
    /* +0x720b96 */ __asm { NOP }
    /* +0x720b97 */ __asm { NOP }
    /* +0x720b98 */ __asm { NOP }
    /* +0x720b99 */ __asm { NOP }
}


// ============================================================================
// Function : Hook_ntdll_dll_KiUserCallbackDispatcher  |  RVA: 0xce37e0  |  Size: 21 bytes
// Callers  : none
// Callees  : UserCallbackInnerHandler@0x720b50
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Hook_ntdll_dll_KiUserCallbackDispatcher(void)

{
  uint64_t uStackX_20;
  uint8_t in_stack_00000028 [16];
  
  UserCallbackInnerHandler(in_stack_00000028._4_8_,uStackX_20);
                    /* WARNING: Could not recover jumptable at 0x7fffa54537ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_7fffa47bcbb8)();
  return;
}


// ============================================================================
// Function : Hook_ntdll_dll_KiUserApcDispatcher  |  RVA: 0xce38d0  |  Size: 9 bytes
// Callers  : none
// Callees  : FUN_7fffa5610260@0xea0260
// ============================================================================
void Hook_ntdll_dll_KiUserApcDispatcher(void)

{
  code *pcVar1;
  
  FUN_7fffa5610260();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5453910  |  RVA: 0xce3910  |  Size: 114 bytes
// Callers  : GuardCFDispatch_Handler@0xce3990
// Callees  : FUN_7fffa5581e60@0xe11e60
// ============================================================================
void FUN_7fffa5453910(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint64_t param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t unaff_retaddr;
  
  FUN_7fffa5581e60(param_1,unaff_retaddr);
                    /* WARNING: Could not recover jumptable at 0x7fffa5453980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}


// ============================================================================
// Function : GuardCFDispatch_Handler  |  RVA: 0xce3990  |  Size: 58 bytes
// Callers  : none
// Callees  : FUN_7fffa5453910@0xce3910
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GuardCFDispatch_Handler(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((UNRECOVERED_JUMPTABLE < (code *)0x800000000000) &&
     ((*(uint8_t *)(_DAT_7fffa47bf1c8 + ((uint64_t)UNRECOVERED_JUMPTABLE >> 0xf)) >>
       ((uint64_t)UNRECOVERED_JUMPTABLE >> 0xc & 7) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x7fffa54539c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_7fffa5453910();
  return;
}


// ============================================================================
// Function : FUN_7fffa5581e60  |  RVA: 0xe11e60  |  Size: 10832 bytes
// Callers  : FUN_7fffa5453910@0xce3910
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5581e60(void) {
    /* +0xe11e60 */ __asm { PUSH RBX }
    /* +0xe11e61 */ __asm { PUSH R14 }
    /* +0xe11e63 */ __asm { PUSH RBP }
    /* +0xe11e64 */ __asm { PUSH RDI }
    /* +0xe11e65 */ __asm { PUSH RSI }
    /* +0xe11e66 */ __asm { PUSH R15 }
    /* +0xe11e68 */ __asm { PUSH R13 }
    /* +0xe11e6a */ __asm { PUSH R12 }
    /* +0xe11e6c */ __asm { SUB RSP,0x198 }
    /* +0xe11e73 */ __asm { MOV R14,RCX }
    /* +0xe11e76 */ __asm { MOV dword ptr [RSP + 0xc0],0xc15254fa }
    /* +0xe11e81 */ __asm { MOV EDX,dword ptr [RSP + 0xc0] }
    /* +0xe11e88 */ __asm { CMP EDX,0x7db8ec29 }
    /* +0xe11e8e */ __asm { JBE 0x7fffa5583007 }
    /* +0xe11e94 */ __asm { PUSHFQ }
    /* +0xe11e95 */ __asm { POP R12 }
    /* +0xe11e97 */ __asm { AND R12D,0x100 }
    /* +0xe11e9e */ __asm { MOV DX,0xd505 }
    /* +0xe11ea2 */ __asm { IMUL EDX,EDX,0x4ad3 }
    /* +0xe11ea8 */ __asm { ADD EDX,0xfffffae1 }
    /* +0xe11eae */ __asm { MOVZX EDI,DX }
    /* +0xe11eb1 */ __asm { CMP R12,RDI }
    /* +0xe11eb4 */ __asm { NOP }
    /* +0xe11eb5 */ __asm { NOP }
    /* +0xe11eb6 */ __asm { NOP }
    /* +0xe11eb7 */ __asm { NOP }
    /* +0xe11eb8 */ __asm { NOP }
    /* +0xe11eb9 */ __asm { MOV EDX,0xd253f27b }
    /* +0xe11ebe */ __asm { XOR EDX,0x14feccef }
    /* +0xe11ec4 */ __asm { IMUL EDX,EDX,0x2c4aff79 }
    /* +0xe11eca */ __asm { MOVSXD R10,EDX }
    /* +0xe11ecd */ __asm { CMP R14,R10 }
    /* +0xe11ed0 */ __asm { JC 0x7fffa5581f24 }
    /* +0xe11ed2 */ __asm { MOV EDX,0xf47491ad }
    /* +0xe11ed7 */ __asm { IMUL EDX,EDX,-0x7c599797 }
    /* +0xe11edd */ __asm { ADD EDX,0xc6aa69dd }
    /* +0xe11ee3 */ __asm { MOV dword ptr [RSP + 0xc0],EDX }
    /* +0xe11eea */ __asm { MOV EDX,dword ptr [RSP + 0xc0] }
    /* +0xe11ef1 */ __asm { AND EDX,0x1 }
    /* +0xe11ef4 */ __asm { MOV AX,0x440d }
    /* +0xe11ef8 */ __asm { IMUL EAX,EAX,0x466b }
    /* +0xe11efe */ __asm { ADD EAX,0x91 }
    /* +0xe11f03 */ __asm { MOVZX EAX,AX }
    /* +0xe11f06 */ __asm { CMP EDX,EAX }
    /* +0xe11f08 */ __asm { JZ 0x7fffa5585989 }
    /* +0xe11f0e */ __asm { MOV RAX,0x0 }
    /* +0xe11f15 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xe11f1c */ __asm { IMUL EDI,dword ptr [RDX + 0x3a65e9],0xefcba00 }
    /* +0xe11f27 */ __asm { MOV DL,0xbe }
    /* +0xe11f29 */ __asm { ADD EDX,0xb401b06f }
    /* +0xe11f2f */ __asm { MOV dword ptr [RSP + 0xc0],EDX }
    /* +0xe11f36 */ __asm { MOV EDX,dword ptr [RSP + 0xc0] }
    /* +0xe11f3d */ __asm { CMP R14,0x7fff }
    /* +0xe11f44 */ __asm { SETC R11B }
    /* +0xe11f48 */ __asm { CMP R14,0x10000 }
    /* +0xe11f4f */ __asm { SETNC AL }
    /* +0xe11f52 */ __asm { OR AL,R11B }
    /* +0xe11f55 */ __asm { JNZ 0x7fffa5581f6e }
    /* +0xe11f57 */ __asm { MOV dword ptr [RSP + 0xc0],0x2bfdb792 }
    /* +0xe11f62 */ __asm { MOV EDX,dword ptr [RSP + 0xc0] }
    /* +0xe11f69 */ __asm { JMP 0x7fffa5585989 }
    /* +0xe11f6e */ __asm { MOV DX,0xe952 }
    /* +0xe11f72 */ __asm { XOR EDX,0x22f2 }
    /* +0xe11f78 */ __asm { IMUL EDX,EDX,0x69df }
    /* +0xe11f7e */ __asm { MOVZX R11D,DX }
    /* +0xe11f82 */ __asm { MOV R10D,0xef8 }
    /* +0xe11f88 */ __asm { ADD R10,qword ptr GS:[R11] }
    /* +0xe11f8c */ __asm { MOV RAX,-0x70a6d152469a5133 }
    /* +0xe11f96 */ __asm { IMUL RAX,R10 }
    /* +0xe11f9a */ __asm { MOV R10,-0x7592311bc51b3c2d }
    /* +0xe11fa4 */ __asm { CMP RAX,R10 }
    /* +0xe11fa7 */ __asm { JZ 0x7fffa5582fff }
    /* +0xe11fad */ __asm { RDTSC }
    /* +0xe11faf */ __asm { SHL RDX,0x20 }
    /* +0xe11fb3 */ __asm { OR RDX,RAX }
    /* +0xe11fb6 */ __asm { MOV R10,-0x30ebf64fafbc6efb }
    /* +0xe11fc0 */ __asm { IMUL RDX,R10 }
    /* +0xe11fc4 */ __asm { MOV R10,-0x22b18422c4a9c65e }
    /* +0xe11fce */ __asm { ADD RDX,R10 }
    /* +0xe11fd1 */ __asm { MOV R11,RDX }
    /* +0xe11fd4 */ __asm { SHR R11,0x1b }
    /* +0xe11fd8 */ __asm { MOV RCX,RDX }
    /* +0xe11fdb */ __asm { SHR RCX,0x3b }
    /* +0xe11fdf */ __asm { SHR RDX,0x2d }
    /* +0xe11fe3 */ __asm { XOR EDX,R11D }
    /* +0xe11fe6 */ __asm { ROR EDX,CL }
    /* +0xe11fe8 */ __asm { AND EDX,0x3 }
    /* +0xe11feb */ __asm { CMP EDX,0x2 }
    /* +0xe11fee */ __asm { JC 0x7fffa55821d0 }
    /* +0xe11ff4 */ __asm { CMP EDX,0x3 }
    /* +0xe11ff7 */ __asm { JNZ 0x7fffa55823dd }
    /* +0xe11ffd */ __asm { MOV EAX,0x41ae61a4 }
    /* +0xe12002 */ __asm { MOV R10,-0x522a33df1504da39 }
    /* +0xe1200c */ __asm { CMP RAX,R10 }
    /* +0xe1200f */ __asm { JZ 0x7fffa5585abd }
    /* +0xe12015 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xe1201c */ __asm { NOP }
    /* +0xe1201d */ __asm { MOV RDX,0x0 }
    /* +0xe12024 */ __asm { MOV R10,qword ptr [RAX + 0x3e4f9e64] }
    /* +0xe1202b */ __asm { MOV RDX,-0x6fd556d2b478a53b }
    /* +0xe12035 */ __asm { MOV RAX,R10 }
    /* +0xe12038 */ __asm { MUL RDX }
    /* +0xe1203b */ __asm { MOV R9,RDX }
    /* +0xe1203e */ __asm { MOV EDX,0x1469644 }
    /* +0xe12043 */ __asm { MOV RAX,R10 }
    /* +0xe12046 */ __asm { MUL RDX }
    /* +0xe12049 */ __asm { ADD RAX,R9 }
    /* +0xe1204c */ __asm { ADC RDX,0x0 }
    /* +0xe12050 */ __asm { PXOR XMM5,XMM5 }
    /* +0xe12054 */ __asm { TEST DL,0x1 }
    /* +0xe12057 */ __asm { JZ 0x7fffa55828af }
    /* +0xe1205d */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM5 }
    /* +0xe12066 */ __asm { MOV dword ptr [RSP + 0x50],0x5b06194a }
    /* +0xe1206e */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xe12072 */ __asm { MOV dword ptr [RSP + 0xc0],0x0 }
    /* +0xe1207d */ __asm { MOV dword ptr [RSP + 0x50],0xb4ee4d17 }
    /* +0xe12085 */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xe12089 */ __asm { TEST DL,0x1 }
    /* +0xe1208c */ __asm { NOP }
    /* +0xe1208d */ __asm { NOP }
    /* +0xe1208e */ __asm { NOP }
    /* +0xe1208f */ __asm { NOP }
    /* +0xe12090 */ __asm { NOP }
    /* +0xe12091 */ __asm { MOV dword ptr [RSP + 0x50],0xc388e3d6 }
    /* +0xe12099 */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xe1209d */ __asm { MOV EDX,0xb806deed }
    /* +0xe120a2 */ __asm { IMUL R11D,EDX,0x7ffe0005 }
    /* +0xe120a9 */ __asm { LEA RAX,[0x7fffa47c00dd] }
    /* +0xe120b0 */ __asm { MOV R10,0x182f88727f0e7dca }
    /* +0xe120ba */ __asm { XOR EDX,EDX }
    /* +0xe120bc */ __asm { CMP RAX,R10 }
    /* +0xe120bf */ __asm { SETZ DL }
    /* +0xe120c2 */ __asm { MOV R10,0x182f88727f0e7dcb }
    /* +0xe120cc */ __asm { XOR ECX,ECX }
    /* +0xe120ce */ __asm { CMP RAX,R10 }
    /* +0xe120d1 */ __asm { SETC CL }
    /* +0xe120d4 */ __asm { MOV R10D,0x94860155 }
    /* +0xe120da */ __asm { XOR R10D,0x41ecc60f }
    /* +0xe120e1 */ __asm { IMUL R10D,R10D,0x707ab635 }
    /* +0xe120e8 */ __asm { CMP R10,R11 }
    /* +0xe120eb */ __asm { CMOVBE EDX,ECX }
    /* +0xe120ee */ __asm { CMP DL,0x1 }
    /* +0xe120f1 */ __asm { NOP }
    /* +0xe120f2 */ __asm { NOP }
    /* +0xe120f3 */ __asm { NOP }
    /* +0xe120f4 */ __asm { NOP }
    /* +0xe120f5 */ __asm { NOP }
    /* +0xe120f6 */ __asm { NOP }
    /* +0xe120f7 */ __asm { NOP }
    /* +0xe120f8 */ __asm { NOP }
    /* +0xe120f9 */ __asm { NOP }
    /* +0xe120fa */ __asm { NOP }
    /* +0xe120fb */ __asm { NOP }
    /* +0xe120fc */ __asm { NOP }
    /* +0xe120fd */ __asm { NOP }
    /* +0xe120fe */ __asm { NOP }
    /* +0xe120ff */ __asm { NOP }
    /* +0xe12100 */ __asm { NOP }
    /* +0xe12101 */ __asm { LEA RBP,[0x7fffa47bb03b] }
    /* +0xe12108 */ __asm { MOV R11W,0xe94e }
    /* +0xe1210d */ __asm { MOV DX,0x3078 }
    /* +0xe12111 */ __asm { ADD R11D,0x16b1 }
    /* +0xe12118 */ __asm { MOVSX R10,R11W }
    /* +0xe1211c */ __asm { MOV CX,0x18a1 }
    /* +0xe12120 */ __asm { XOR ECX,0x18b1 }
    /* +0xe12126 */ __asm { MOVZX R9D,CX }
    /* +0xe1212a */ __asm { MOV ECX,0xd03d87fb }
    /* +0xe1212f */ __asm { IMUL ECX,ECX,0x292f6dc7 }
    /* +0xe12135 */ __asm { MOV qword ptr [RSP + 0x50],R8 }
    /* +0xe1213a */ __asm { MOV R8D,0x4ba8c95d }
    /* +0xe12140 */ __asm { ADD ECX,0x711cd94c }
    /* +0xe12146 */ __asm { MOVSXD RSI,ECX }
    /* +0xe12149 */ __asm { XOR RSI,RBP }
    /* +0xe1214c */ __asm { ROL RSI,0x18 }
    /* +0xe12150 */ __asm { IMUL R13D,R8D,0x532f49ff }
    /* +0xe12157 */ __asm { MOV EAX,dword ptr [RAX + -0x3c15] }
    /* +0xe1215d */ __asm { IMUL EDX,EDX,-0x1355 }
    /* +0xe12163 */ __asm { MOVZX EDX,DX }
    /* +0xe12166 */ __asm { LEA R8,[RSP + 0xc0] }
    /* +0xe1216e */ __asm { SYSCALL }
    /* +0xe12170 */ __asm { MOVSXD R10,R13D }
    /* +0xe12173 */ __asm { ADD R10,RSI }
    /* +0xe12176 */ __asm { MOV RDX,-0x387af6e155f2790 }
    /* +0xe12180 */ __asm { CMP R10,RDX }
    /* +0xe12183 */ __asm { NOP }
    /* +0xe12184 */ __asm { NOP }
    /* +0xe12185 */ __asm { NOP }
    /* +0xe12186 */ __asm { NOP }
    /* +0xe12187 */ __asm { NOP }
    /* +0xe12188 */ __asm { MOV DX,0x8c63 }
    /* +0xe1218c */ __asm { MOV R10D,0xfe0ae1f }
    /* +0xe12192 */ __asm { MOV qword ptr [RSP + 0x50],RAX }
    /* +0xe12197 */ __asm { MOV R11D,0xb21cc604 }
    /* +0xe1219d */ __asm { ADD R11D,0x4de33a2c }
    /* +0xe121a4 */ __asm { MOV EAX,dword ptr [RBP + 0x14a5] }
    /* +0xe121aa */ __asm { ADD R10D,0xdb4fc45d }
    /* +0xe121b1 */ __asm { XOR R10D,0x14cf8d83 }
    /* +0xe121b8 */ __asm { MOVSXD R10,R10D }
    /* +0xe121bb */ __asm { IMUL EDX,EDX,-0x6337 }
    /* +0xe121c1 */ __asm { ADD EDX,0x7245 }
    /* +0xe121c7 */ __asm { MOVZX R8D,DX }
    /* +0xe121cb */ __asm { JMP 0x7fffa5582d77 }
    /* +0xe121d0 */ __asm { CMP EDX,0x1 }
    /* +0xe121d3 */ __asm { JZ 0x7fffa5582658 }
    /* +0xe121d9 */ __asm { MOV R10,-0xb5ce248f100a897 }
    /* +0xe121e3 */ __asm { MOV EAX,0x4d1e427 }
    /* +0xe121e8 */ __asm { MOV RDX,RAX }
    /* +0xe121eb */ __asm { XOR RDX,R10 }
    /* +0xe121ee */ __asm { MOV R10D,0xc0000089 }
    /* +0xe121f4 */ __asm { CMP RDX,R10 }
    /* +0xe121f7 */ __asm { JNZ 0x7fffa55821fc }
    /* +0xe121f9 */ __asm { SBB EBP,EDI }
    /* +0xe121fb */ __asm { CLI }
    /* +0xe121fc */ __asm { MOV R11D,dword ptr [RAX + 0x7b2c1e9d] }
    /* +0xe12203 */ __asm { MOV R10,0x5555555555555556 }
    /* +0xe1220d */ __asm { IMUL R10,R11 }
    /* +0xe12211 */ __asm { MOV RDX,0x5555555555555555 }
    /* +0xe1221b */ __asm { CMP R10,RDX }
    /* +0xe1221e */ __asm { JA 0x7fffa55829cf }
    /* +0xe12224 */ __asm { MOV EDX,0x54891726 }
    /* +0xe12229 */ __asm { PXOR XMM5,XMM5 }
    /* +0xe1222d */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM5 }
    /* +0xe12236 */ __asm { ADD EDX,0xaf7557c6 }
    /* +0xe1223c */ __asm { MOV dword ptr [RSP + 0x50],EDX }
    /* +0xe12240 */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xe12244 */ __asm { MOV dword ptr [RSP + 0xc0],0x0 }
    /* +0xe1224f */ __asm { PUSHFQ }
    /* +0xe12250 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe12258 */ __asm { POPFQ }
    /* +0xe12259 */ __asm { MOV dword ptr [RSP + 0x50],0x9cacb341 }
    /* +0xe12261 */ __asm { MOV EAX,dword ptr [RSP + 0x50] }
    /* +0xe12265 */ __asm { MOV DX,0x61c0 }
    /* +0xe12269 */ __asm { ADD EDX,0xffff9e40 }
    /* +0xe1226f */ __asm { MOVZX R10D,DX }
    /* +0xe12273 */ __asm { XOR EDX,EDX }
    /* +0xe12275 */ __asm { CMP EAX,R10D }
    /* +0xe12278 */ __asm { SETC DL }
    /* +0xe1227b */ __asm { MOV R10D,0x9a60daa9 }
    /* +0xe12281 */ __asm { IMUL R11D,R10D,0x76e80b19 }
    /* +0xe12288 */ __asm { ADD R11D,0xe1d6c545 }
    /* +0xe1228f */ __asm { MOV R10W,0xdbdf }
    /* +0xe12294 */ __asm { ADD R10D,0x2421 }
    /* +0xe1229b */ __asm { ROL R10W,0x7 }
    /* +0xe122a0 */ __asm { MOVZX R10D,R10W }
    /* +0xe122a4 */ __asm { XOR ECX,ECX }
    /* +0xe122a6 */ __asm { CMP EAX,R10D }
    /* +0xe122a9 */ __asm { SETL CL }
    /* +0xe122ac */ __asm { MOV EAX,0x19ef1908 }
    /* +0xe122b1 */ __asm { IMUL R10D,EAX,0x5920cb5d }
    /* +0xe122b8 */ __asm { ROL R10D,0x1a }
    /* +0xe122bc */ __asm { CMP R10,R11 }
    /* +0xe122bf */ __asm { CMOVBE ECX,EDX }
    /* +0xe122c2 */ __asm { TEST CL,CL }
    /* +0xe122c4 */ __asm { NOP }
    /* +0xe122c5 */ __asm { NOP }
    /* +0xe122c6 */ __asm { NOP }
    /* +0xe122c7 */ __asm { NOP }
    /* +0xe122c8 */ __asm { NOP }
    /* +0xe122c9 */ __asm { NOP }
    /* +0xe122ca */ __asm { NOP }
    /* +0xe122cb */ __asm { NOP }
    /* +0xe122cc */ __asm { NOP }
    /* +0xe122cd */ __asm { NOP }
    /* +0xe122ce */ __asm { NOP }
    /* +0xe122cf */ __asm { MOV dword ptr [RSP + 0x50],0xd3d7c2fa }
    /* +0xe122d7 */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xe122db */ __asm { CMP EDX,0x284fc693 }
    /* +0xe122e1 */ __asm { JBE 0x7fffa5585adc }
    /* +0xe122e7 */ __asm { LEA R11,[0x7fffa47c37d5] }
    /* +0xe122ee */ __asm { MOV RAX,0x0 }
    /* +0xe122f5 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xe122fc */ __asm { MOV R10,0x7b79cd925852e381 }
    /* +0xe12306 */ __asm { CMP R11,R10 }
    /* +0xe12309 */ __asm { JNZ 0x7fffa5582310 }
    /* +0xe1230b */ __asm { JO 0x7fffa55822a1 }
    /* +0xe1230d */ __asm { ADC BH,uint8_t ptr [RSI + -0x20] }
    /* +0xe12310 */ __asm { MOV DX,0xa740 }
    /* +0xe12314 */ __asm { IMUL EAX,EDX,-0x6c4b }
    /* +0xe1231a */ __asm { MOV RSI,-0x1379301ad955828d }
    /* +0xe12324 */ __asm { LEA RBP,[0x7fffa47bc054] }
    /* +0xe1232b */ __asm { MOV DX,0x2703 }
    /* +0xe1232f */ __asm { MOV CX,0x4336 }
    /* +0xe12333 */ __asm { MOV R10W,0x46c4 }
    /* +0xe12338 */ __asm { MOV R15,RBP }
    /* +0xe1233b */ __asm { ROL R15,0x36 }
    /* +0xe1233f */ __asm { NOT R15 }
    /* +0xe12342 */ __asm { ADD EDX,0x7078 }
    /* +0xe12348 */ __asm { MOVSX R8,DX }
    /* +0xe1234c */ __asm { MOV EDX,0x8591a94 }
    /* +0xe12351 */ __asm { IMUL EDX,EDX,-0x48b5d2a1 }
    /* +0xe12357 */ __asm { SUB R15,RDX }
    /* +0xe1235a */ __asm { IMUL EDX,ECX,-0x766f }
    /* +0xe12360 */ __asm { ADD EDX,0x892 }
    /* +0xe12366 */ __asm { MOVZX EDX,DX }
    /* +0xe12369 */ __asm { ADD R10D,0xffffb93b }
    /* +0xe12370 */ __asm { MOVSX R10,R10W }
    /* +0xe12374 */ __asm { ROL AX,0xe }
    /* +0xe12378 */ __asm { MOV qword ptr [RSP + 0x50],R9 }
    /* +0xe1237d */ __asm { MOVZX R9D,AX }
    /* +0xe12381 */ __asm { ADD RSI,0x4f683a0a }
    /* +0xe12388 */ __asm { MOV EAX,dword ptr [R8 + R11*0x1 + 0x88] }
    /* +0xe12390 */ __asm { LEA R8,[RSP + 0xc0] }
    /* +0xe12398 */ __asm { SYSCALL }
    /* +0xe1239a */ __asm { CMP RSI,R15 }
    /* +0xe1239d */ __asm { NOP }
    /* +0xe1239e */ __asm { NOP }
    /* +0xe1239f */ __asm { NOP }
    /* +0xe123a0 */ __asm { NOP }
    /* +0xe123a1 */ __asm { NOP }
    /* +0xe123a2 */ __asm { XOR EDX,EDX }
    /* +0xe123a4 */ __asm { MOV qword ptr [RSP + 0x50],RAX }
    /* +0xe123a9 */ __asm { MOV R11D,0x20085bb9 }
    /* +0xe123af */ __asm { XOR R11D,0x20085b89 }
    /* +0xe123b6 */ __asm { IMUL EDX,EDX,-0x56c7 }
    /* +0xe123bc */ __asm { ROL DX,0x7 }
    /* +0xe123c0 */ __asm { MOVZX R8D,DX }
    /* +0xe123c4 */ __asm { MOV EAX,dword ptr [RBP + 0xfbc] }
    /* +0xe123ca */ __asm { MOV EDX,0x314c2972 }
    /* +0xe123cf */ __asm { ADD EDX,0xceb3d68d }
    /* +0xe123d5 */ __asm { MOVSXD R10,EDX }
    /* +0xe123d8 */ __asm { JMP 0x7fffa5582d77 }
    /* +0xe123dd */ __asm { MOV EAX,0x197e24f8 }
    /* +0xe123e2 */ __asm { MOV R10,-0x31598f6d8d27e602 }
    /* +0xe123ec */ __asm { CMP RAX,R10 }
    /* +0xe123ef */ __asm { NOP }
    /* +0xe123f0 */ __asm { NOP }
    /* +0xe123f1 */ __asm { NOP }
    /* +0xe123f2 */ __asm { NOP }
    /* +0xe123f3 */ __asm { NOP }
    /* +0xe123f4 */ __asm { NOP }
    /* +0xe123f5 */ __asm { NOP }
    /* +0xe123f6 */ __asm { NOP }
    /* +0xe123f7 */ __asm { NOP }
    /* +0xe123f8 */ __asm { NOP }
    /* +0xe123f9 */ __asm { NOP }
    /* +0xe123fa */ __asm { NOP }
    /* +0xe123fb */ __asm { NOP }
    /* +0xe123fc */ __asm { NOP }
    /* +0xe123fd */ __asm { MOV R11D,0x51071808 }
    /* +0xe12403 */ __asm { XOR R11D,0x3d1fcd9c }
    /* +0xe1240a */ __asm { MOV EDX,0x847474ba }
    /* +0xe1240f */ __asm { MOV R10D,0xd6f94170 }
    /* +0xe12415 */ __asm { ADD R10D,0x8f869998 }
    /* +0xe1241c */ __asm { XOR EDX,0x933456d3 }
    /* +0xe12422 */ __asm { CMP R11,RDX }
    /* +0xe12425 */ __asm { SETL R11B }
    /* +0xe12429 */ __asm { MOV EDX,dword ptr [RAX + R10*0x1 + 0x240] }
    /* +0xe12431 */ __asm { TEST DL,0x1 }
    /* +0xe12434 */ __asm { SETZ AL }
    /* +0xe12437 */ __asm { OR AL,R11B }
    /* +0xe1243a */ __asm { PXOR XMM5,XMM5 }
    /* +0xe1243e */ __asm { CMP AL,0x1 }
    /* +0xe12440 */ __asm { JNZ 0x7fffa5582af9 }
    /* +0xe12446 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM5 }
    /* +0xe1244f */ __asm { MOV DX,0xd8e7 }
    /* +0xe12453 */ __asm { ADD EDX,0x2779 }
    /* +0xe12459 */ __asm { MOVZX R11D,DX }
    /* +0xe1245d */ __asm { MOV RDX,qword ptr GS:[R11] }
    /* +0xe12461 */ __asm { MOV EAX,0x6782e6c1 }
    /* +0xe12466 */ __asm { ADD EAX,0x4e4fa4aa }
    /* +0xe1246b */ __asm { MOVSXD R10,EAX }
    /* +0xe1246e */ __asm { MOV RDX,qword ptr [RDX + 0x30] }
    /* +0xe12472 */ __asm { MOV RAX,-0x15cdfe931e300ed1 }
    /* +0xe1247c */ __asm { SUB RDX,RAX }
    /* +0xe1247f */ __asm { MOV EAX,0x26f32e76 }
    /* +0xe12484 */ __asm { MOV R9,0x2eb2d4a3cd7de23b }
    /* +0xe1248e */ __asm { XOR R9,0x14b8dbd4 }
    /* +0xe12495 */ __asm { XOR EAX,0xe46696b9 }
    /* +0xe1249a */ __asm { ADD EAX,0xc82ac094 }
    /* +0xe1249f */ __asm { CDQE }
    /* +0xe124a1 */ __asm { MOV R8,-0x29db02eb8f166349 }
    /* +0xe124ab */ __asm { IMUL R8,RDX }
    /* +0xe124af */ __asm { ROL R8,0x12 }
    /* +0xe124b3 */ __asm { MOV RDX,0x2eb2d4a3d9c539ef }
    /* +0xe124bd */ __asm { IMUL RDX,R8 }
    /* +0xe124c1 */ __asm { OR R8,R9 }
    /* +0xe124c4 */ __asm { CMP RAX,R10 }
    /* +0xe124c7 */ __asm { CMOVLE R8,RDX }
    /* +0xe124cb */ __asm { MOV R10,-0x77a8bd72d81f8f48 }
    /* +0xe124d5 */ __asm { CMP R8,R10 }
    /* +0xe124d8 */ __asm { NOP }
    /* +0xe124d9 */ __asm { NOP }
    /* +0xe124da */ __asm { NOP }
    /* +0xe124db */ __asm { NOP }
    /* +0xe124dc */ __asm { NOP }
    /* +0xe124dd */ __asm { MOV dword ptr [RSP + 0xc0],0x0 }
    /* +0xe124e8 */ __asm { MOV dword ptr [RSP + 0x50],0x46ad022 }
    /* +0xe124f0 */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xe124f4 */ __asm { XOR EAX,EAX }
    /* +0xe124f6 */ __asm { CMP EDX,0x683e5be5 }
    /* +0xe124fc */ __asm { SETGE AL }
    /* +0xe124ff */ __asm { XOR R10D,R10D }
    /* +0xe12502 */ __asm { CMP EDX,0x683e5be4 }
    /* +0xe12508 */ __asm { SETC R10B }
    /* +0xe1250c */ __asm { MOV R11D,0x55687053 }
    /* +0xe12512 */ __asm { XOR R11D,0x2bfa108d }
    /* +0xe12519 */ __asm { MOV EDX,0x942647bb }
    /* +0xe1251e */ __asm { MOV R9D,0x7d406a6 }
    /* +0xe12524 */ __asm { SUB R9D,EDX }
    /* +0xe12527 */ __asm { CMP R11,R9 }
    /* +0xe1252a */ __asm { CMOVL R10D,EAX }
    /* +0xe1252e */ __asm { TEST R10B,R10B }
    /* +0xe12531 */ __asm { JZ 0x7fffa5585ae4 }
    /* +0xe12537 */ __asm { CMP R12D,EDI }
    /* +0xe1253a */ __asm { NOP }
    /* +0xe1253b */ __asm { NOP }
    /* +0xe1253c */ __asm { NOP }
    /* +0xe1253d */ __asm { MOV dword ptr [RSP + 0x50],0xe53e8c00 }
    /* +0xe12545 */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xe12549 */ __asm { TEST DL,0x1 }
    /* +0xe1254c */ __asm { JNZ 0x7fffa5585afe }
    /* +0xe12552 */ __asm { LEA RAX,[0x7fffa47b70c5] }
    /* +0xe12559 */ __asm { MOV R10,-0xdcf2c27d }
    /* +0xe12563 */ __asm { ADD R10,RAX }
    /* +0xe12566 */ __asm { ROL R10,0x2d }
    /* +0xe1256a */ __asm { XOR R10,0x50fe886 }
    /* +0xe12571 */ __asm { MOV RDX,0x50e69ffc6e1f7fe2 }
    /* +0xe1257b */ __asm { CMP R10,RDX }
    /* +0xe1257e */ __asm { JZ 0x7fffa5585b06 }
    /* +0xe12584 */ __asm { MOV DX,0x18ef }
    /* +0xe12588 */ __asm { LEA RBP,[0x7fffa4785bb6] }
    /* +0xe1258f */ __asm { MOV R11W,0x5b29 }
    /* +0xe12594 */ __asm { MOV qword ptr [RSP + 0x50],R10 }
    /* +0xe12599 */ __asm { MOV R10D,0xefa90646 }
    /* +0xe1259f */ __asm { IMUL ECX,R10D,-0x3f52beaf }
    /* +0xe125a6 */ __asm { NOT ECX }
    /* +0xe125a8 */ __asm { MOV R8W,0x3af0 }
    /* +0xe125ad */ __asm { ADD R11D,0xfffff67f }
    /* +0xe125b4 */ __asm { XOR R11D,0xae57 }
    /* +0xe125bb */ __asm { MOVSX R10,R11W }
    /* +0xe125bf */ __asm { IMUL R8D,R8D,0x634f }
    /* +0xe125c6 */ __asm { ADD EDX,0xffffe739 }
    /* +0xe125cc */ __asm { MOVZX EDX,DX }
    /* +0xe125cf */ __asm { MOVZX R9D,R8W }
    /* +0xe125d3 */ __asm { MOV EAX,dword ptr [RAX + 0x5f13] }
    /* +0xe125d9 */ __asm { MOV R8,RBP }
    /* +0xe125dc */ __asm { ROL R8,0x23 }
    /* +0xe125e0 */ __asm { MOV R11,0x590681c8684374ab }
    /* +0xe125ea */ __asm { IMUL R11,R8 }
    /* +0xe125ee */ __asm { MOVSXD RSI,ECX }
    /* +0xe125f1 */ __asm { ADD RSI,R11 }
    /* +0xe125f4 */ __asm { LEA R8,[RSP + 0xc0] }
    /* +0xe125fc */ __asm { SYSCALL }
    /* +0xe125fe */ __asm { MOV R10,0x56f136aaaec3816b }
    /* +0xe12608 */ __asm { CMP RSI,R10 }
    /* +0xe1260b */ __asm { JNZ 0x7fffa5582616 }
    /* +0xe1260d */ __asm { NOP }
    /* +0xe1260e */ __asm { INSD RDI,DX }
    /* +0xe1260f */ __asm { POP R14 }
    /* +0xe12611 */ __asm { LOOP 0x7fffa55825a7 }
    /* +0xe12613 */ __asm { SCASB RDI }
    /* +0xe12614 */ __asm { PUSH RBX }
    /* +0xe12615 */ __asm { PUSH RAX }
    /* +0xe12616 */ __asm { MOV DX,0x45ec }
    /* +0xe1261a */ __asm { MOV AX,0x7c94 }
    /* +0xe1261e */ __asm { MOV R10D,0x1544894e }
    /* +0xe12624 */ __asm { ADD EAX,0xffff836c }
    /* +0xe12629 */ __asm { MOVZX R8D,AX }
    /* +0xe1262d */ __asm { ADD EDX,0xffffba44 }
    /* +0xe12633 */ __asm { MOVZX R11D,DX }
    /* +0xe12637 */ __asm { MOV qword ptr [RSP + 0x50],RAX }
    /* +0xe1263c */ __asm { MOV EAX,dword ptr [RBP + -0xe12] }
    /* +0xe12642 */ __asm { XOR R10D,0x5736a2bb }
    /* +0xe12649 */ __asm { IMUL EDX,R10D,-0x13f0e85d }
    /* +0xe12650 */ __asm { MOVSXD R10,EDX }
    /* +0xe12653 */ __asm { JMP 0x7fffa5582d77 }
    /* +0xe12658 */ __asm { LEA RAX,[0x7fffa47bd949] }
    /* +0xe1265f */ __asm { MOV R10,-0x4ef7321b220d8e38 }
    /* +0xe12669 */ __asm { MOV EDX,0x9d0fa803 }
    /* +0xe1266e */ __asm { ADD RDX,R10 }
    /* +0xe12671 */ __asm { IMUL RDX,RAX }
    /* +0xe12675 */ __asm { ROL RDX,0x2 }
    /* +0xe12679 */ __asm { XOR RDX,0x522d3a9e }
    /* +0xe12680 */ __asm { MOV R10,0x17f1e79e77def67b }
    /* +0xe1268a */ __asm { CMP RDX,R10 }
    /* +0xe1268d */ __asm { NOP }
    /* +0xe1268e */ __asm { NOP }
    /* +0xe1268f */ __asm { NOP }
    /* +0xe12690 */ __asm { NOP }
    /* +0xe12691 */ __asm { NOP }
    /* +0xe12692 */ __asm { NOP }
    /* +0xe12693 */ __asm { NOP }
    /* +0xe12694 */ __asm { NOP }
    /* +0xe12695 */ __asm { NOP }
    /* +0xe12696 */ __asm { MOV R11D,0x2110cd8d }
    /* +0xe1269c */ __asm { MOV EDX,0x7400afd8 }
    /* +0xe126a1 */ __asm { XOR EDX,0xc0000026 }
    /* +0xe126a7 */ __asm { MOV ECX,0xe1bb81d1 }
    /* +0xe126ac */ __asm { ADD ECX,0x1dd80bd3 }
    /* +0xe126b2 */ __asm { XOR R11D,0x108734e9 }
    /* +0xe126b9 */ __asm { MOVSXD R10,EDX }
    /* +0xe126bc */ __asm { ROL ECX,0x14 }
    /* +0xe126bf */ __asm { MOVSXD RDX,ECX }
    /* +0xe126c2 */ __asm { MOV R8D,0x5b93eb67 }
    /* +0xe126c8 */ __asm { XOR R8D,0xaa057187 }
    /* +0xe126cf */ __asm { ADD R8D,0x582b583c }
    /* +0xe126d6 */ __asm { MOVZX R9D,uint8_t ptr [RAX + -0x1200] }
    /* +0xe126de */ __asm { MOVZX ECX,uint8_t ptr [RAX + R9*0x4 + -0x11fa] }
    /* +0xe126e7 */ __asm { NOT CL }
    /* +0xe126e9 */ __asm { ROL CL,0x5 }
}


// ============================================================================
// Function : FUN_7fffa5610260  |  RVA: 0xea0260  |  Size: 14639 bytes
// Callers  : Hook_ntdll_dll_KiUserApcDispatcher@0xce38d0
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5610260(void) {
    /* +0xea0260 */ __asm { PUSH RSI }
    /* +0xea0261 */ __asm { PUSH R15 }
    /* +0xea0263 */ __asm { PUSH R12 }
    /* +0xea0265 */ __asm { PUSH R13 }
    /* +0xea0267 */ __asm { PUSH RDI }
    /* +0xea0268 */ __asm { PUSH R14 }
    /* +0xea026a */ __asm { PUSH RBX }
    /* +0xea026b */ __asm { PUSH RBP }
    /* +0xea026c */ __asm { SUB RSP,0x198 }
    /* +0xea0273 */ __asm { MOVAPS xmmword ptr [RSP + 0x180],XMM11 }
    /* +0xea027c */ __asm { MOVAPS xmmword ptr [RSP + 0x170],XMM8 }
    /* +0xea0285 */ __asm { MOV EAX,0x10bc143d }
    /* +0xea028a */ __asm { MOV R8D,0xc06bf8a7 }
    /* +0xea0290 */ __asm { ADD EAX,0x203b3cf0 }
    /* +0xea0295 */ __asm { MOV ESI,0x48411382 }
    /* +0xea029a */ __asm { MOV RDX,RDI }
    /* +0xea029d */ __asm { MOVQ XMM3,RDX }
    /* +0xea02a2 */ __asm { MOV R10,RDX }
    /* +0xea02a5 */ __asm { NOT R10 }
    /* +0xea02a8 */ __asm { IMUL R8D,R8D,-0x1a6a07e3 }
    /* +0xea02af */ __asm { ADD R8D,0xb6375984 }
    /* +0xea02b6 */ __asm { MOV R9,R9 }
    /* +0xea02b9 */ __asm { MOV R11,R9 }
    /* +0xea02bc */ __asm { AND R11,R10 }
    /* +0xea02bf */ __asm { MOV R13,R9 }
    /* +0xea02c2 */ __asm { NOT R13 }
    /* +0xea02c5 */ __asm { MOVQ XMM1,R13 }
    /* +0xea02ca */ __asm { PAND XMM1,XMM3 }
    /* +0xea02ce */ __asm { AND R10,R13 }
    /* +0xea02d1 */ __asm { IMUL R11,R11,-0x13dc1ba4 }
    /* +0xea02d8 */ __asm { MOV R14,RDX }
    /* +0xea02db */ __asm { AND R14,R9 }
    /* +0xea02de */ __asm { IMUL R14,R14,0x74dad819 }
    /* +0xea02e5 */ __asm { MOVQ RDI,XMM1 }
    /* +0xea02ea */ __asm { XOR R13,RDX }
    /* +0xea02ed */ __asm { XOR R9,RDX }
    /* +0xea02f0 */ __asm { IMUL R15,R9,-0x41bdd518 }
    /* +0xea02f7 */ __asm { MOV RDX,R14 }
    /* +0xea02fa */ __asm { IMUL RDX,R15 }
    /* +0xea02fe */ __asm { MOV R9,-0xca74c8d5 }
    /* +0xea0308 */ __asm { IMUL R9,R13 }
    /* +0xea030c */ __asm { ADD R9,R11 }
    /* +0xea030f */ __asm { ADD ESI,0xa1749cb0 }
    /* +0xea0315 */ __asm { ROR ESI,0x1 }
    /* +0xea0317 */ __asm { ADD R15,R14 }
    /* +0xea031a */ __asm { IMUL RSI,R10 }
    /* +0xea031e */ __asm { IMUL R11,RDI,-0x13dc1ba4 }
    /* +0xea0325 */ __asm { MOV RDI,R15 }
    /* +0xea0328 */ __asm { ADD R11,R9 }
    /* +0xea032b */ __asm { CMP R8,RAX }
    /* +0xea032e */ __asm { MOV R14,qword ptr [RCX] }
    /* +0xea0331 */ __asm { CMOVLE RDI,RDX }
    /* +0xea0335 */ __asm { MOV RDX,qword ptr [RCX + 0x18] }
    /* +0xea0339 */ __asm { ADD RDI,R11 }
    /* +0xea033c */ __asm { ADD RDI,RSI }
    /* +0xea033f */ __asm { MOV EAX,EDI }
    /* +0xea0341 */ __asm { OR EAX,0x1 }
    /* +0xea0344 */ __asm { MOV R8D,0xeb4a389 }
    /* +0xea034a */ __asm { MOV qword ptr [RSP + 0x148],RAX }
    /* +0xea0352 */ __asm { IMUL R8D,EAX }
    /* +0xea0356 */ __asm { ADD R8D,0xbf214e9d }
    /* +0xea035d */ __asm { MOV dword ptr [RSP + 0x80],R8D }
    /* +0xea0365 */ __asm { MOV R8D,dword ptr [RSP + 0x80] }
    /* +0xea036d */ __asm { CMP R8D,0xa64a8690 }
    /* +0xea0374 */ __asm { JC 0x7fffa5610380 }
    /* +0xea0376 */ __asm { CMP DL,BL }
    /* +0xea0378 */ __asm { SUB EBP,dword ptr [RDX + -0x31c96721] }
    /* +0xea037e */ __asm { MOV DH,0xad }
    /* +0xea0380 */ __asm { MOV R8D,0x39a75a47 }
    /* +0xea0386 */ __asm { SUB R8D,EDI }
    /* +0xea0389 */ __asm { ROL R8D,0x1 }
    /* +0xea038c */ __asm { ADD R8D,0x37e52cec }
    /* +0xea0393 */ __asm { MOV AX,CS }
    /* +0xea0396 */ __asm { MOVZX R10,AX }
    /* +0xea039a */ __asm { AND R10D,0x3 }
    /* +0xea039e */ __asm { CMP R10D,R8D }
    /* +0xea03a1 */ __asm { JZ 0x7fffa5610487 }
    /* +0xea03a7 */ __asm { MOV R8W,0x4b65 }
    /* +0xea03ac */ __asm { MOV R9D,EDI }
    /* +0xea03af */ __asm { OR R9D,0x1 }
    /* +0xea03b3 */ __asm { MOV R10D,0x4345 }
    /* +0xea03b9 */ __asm { SUB R10D,R8D }
    /* +0xea03bc */ __asm { IMUL R10D,R9D }
    /* +0xea03c0 */ __asm { MOVZX EAX,R10W }
    /* +0xea03c4 */ __asm { MOV R11,qword ptr GS:[RAX] }
    /* +0xea03c8 */ __asm { MOV R8W,0xa6b4 }
    /* +0xea03cd */ __asm { SUB R8D,EDI }
    /* +0xea03d0 */ __asm { ADD R8D,0x4a68 }
    /* +0xea03d7 */ __asm { MOVZX EAX,R8W }
    /* +0xea03db */ __asm { MOV R10D,0x2c8 }
    /* +0xea03e1 */ __asm { ADD R10,qword ptr GS:[RAX] }
    /* +0xea03e5 */ __asm { IMUL R10,qword ptr [R11 + 0x3d0] }
    /* +0xea03ed */ __asm { ADD R10,0x2579c1f }
    /* +0xea03f4 */ __asm { XOR R10,-0x7bb73508 }
    /* +0xea03fb */ __asm { MOV R11,-0x2bd5100ca1f546a9 }
    /* +0xea0405 */ __asm { IMUL R11,R10 }
    /* +0xea0409 */ __asm { MOV R10,0x21dde56fa2798ac4 }
    /* +0xea0413 */ __asm { CMP R11,R10 }
    /* +0xea0416 */ __asm { JNZ 0x7fffa5610426 }
    /* +0xea0418 */ __asm { RET 0xa332 }
    /* +0xea0426 */ __asm { MOV dword ptr [RSP + 0x80],0xde16ddac }
    /* +0xea0431 */ __asm { MOV R8D,dword ptr [RSP + 0x80] }
    /* +0xea0439 */ __asm { MOV R8D,0xef5ab5cb }
    /* +0xea043f */ __asm { IMUL R8D,dword ptr [RSP + 0x148] }
    /* +0xea0448 */ __asm { ADD R8D,0x6673809b }
    /* +0xea044f */ __asm { MOV dword ptr [RSP + 0x80],R8D }
    /* +0xea0457 */ __asm { MOV R8D,dword ptr [RSP + 0x80] }
    /* +0xea045f */ __asm { CMP R8D,0xc01dd97a }
    /* +0xea0466 */ __asm { NOP }
    /* +0xea0467 */ __asm { NOP }
    /* +0xea0468 */ __asm { NOP }
    /* +0xea0469 */ __asm { NOP }
    /* +0xea046a */ __asm { NOP }
    /* +0xea046b */ __asm { NOP }
    /* +0xea046c */ __asm { NOP }
    /* +0xea046d */ __asm { NOP }
    /* +0xea046e */ __asm { NOP }
    /* +0xea046f */ __asm { NOP }
    /* +0xea0470 */ __asm { NOP }
    /* +0xea0471 */ __asm { NOP }
    /* +0xea0472 */ __asm { MOV dword ptr [RSP + 0x80],0x64890b2a }
    /* +0xea047d */ __asm { MOV R8D,dword ptr [RSP + 0x80] }
    /* +0xea0485 */ __asm { PUSH R14 }
    /* +0xea0487 */ __asm { MOV R8D,0x667b4272 }
    /* +0xea048d */ __asm { IMUL R8D,R8D,-0x20cd26a3 }
    /* +0xea0494 */ __asm { NOT R8D }
    /* +0xea0497 */ __asm { ADD R8D,EDI }
    /* +0xea049a */ __asm { MOV EAX,0xd1702f38 }
    /* +0xea049f */ __asm { XOR EAX,EDI }
    /* +0xea04a1 */ __asm { ROL EAX,0x10 }
    /* +0xea04a4 */ __asm { XOR EAX,0xa07a84fd }
    /* +0xea04a9 */ __asm { CMP R8,RAX }
    /* +0xea04ac */ __asm { MOV qword ptr [RSP + 0x60],RCX }
    /* +0xea04b1 */ __asm { JBE 0x7fffa561054f }
    /* +0xea04b7 */ __asm { LEA R11,[0x7fffa478a3eb] }
    /* +0xea04be */ __asm { MOV R8W,0x778f }
    /* +0xea04c3 */ __asm { MOV R9D,0x5afca437 }
    /* +0xea04c9 */ __asm { MOV R10D,0x22a1dd87 }
    /* +0xea04cf */ __asm { IMUL R10D,R10D,-0x33ecc897 }
    /* +0xea04d6 */ __asm { NOT R10D }
    /* +0xea04d9 */ __asm { MOVSXD R10,R10D }
    /* +0xea04dc */ __asm { IMUL EAX,R9D,0x107 }
    /* +0xea04e3 */ __asm { XOR R8D,0x94 }
    /* +0xea04ea */ __asm { MOV ECX,EDI }
    /* +0xea04ec */ __asm { ROL R8W,CL }
    /* +0xea04f0 */ __asm { LEA R9D,[RAX + RDI*0x1] }
    /* +0xea04f4 */ __asm { ADD R9D,0x30d8a3b5 }
    /* +0xea04fb */ __asm { MOVSXD RAX,R9D }
    /* +0xea04fe */ __asm { LEA R9,[0x7fffa479126a] }
    /* +0xea0505 */ __asm { MOVSX RCX,R8W }
    /* +0xea0509 */ __asm { MOV R8D,0xe60bd8e0 }
    /* +0xea050f */ __asm { MOV R15,R14 }
    /* +0xea0512 */ __asm { LEA R14,[0x7fffa47938bc] }
    /* +0xea0519 */ __asm { ADD R14,R10 }
    /* +0xea051c */ __asm { MOV R11,qword ptr [R11 + RCX*0x1 + 0x5f] }
    /* +0xea0521 */ __asm { MOVZX EAX,uint8_t ptr [R9 + RAX*0x1 + 0xd] }
    /* +0xea0527 */ __asm { XOR R11,qword ptr [R14 + RAX*0x8 + 0x1c] }
    /* +0xea052c */ __asm { MOV R14,R15 }
    /* +0xea052f */ __asm { MOVQ XMM3,R11 }
    /* +0xea0534 */ __asm { ADD R8D,0xfb848862 }
    /* +0xea053b */ __asm { MOV ECX,EDI }
    /* +0xea053d */ __asm { ROR R8D,CL }
    /* +0xea0540 */ __asm { IMUL R8D,R8D,0x2d287757 }
    /* +0xea0547 */ __asm { MOVSXD R13,R8D }
    /* +0xea054a */ __asm { JMP 0x7fffa56105da }
    /* +0xea054f */ __asm { LEA R11,[0x7fffa4791246] }
    /* +0xea0556 */ __asm { MOV R13D,0x12744112 }
    /* +0xea055c */ __asm { MOV R8W,0x8b41 }
    /* +0xea0561 */ __asm { ADD R8D,0xffff9cf4 }
    /* +0xea0568 */ __asm { ROL R8W,0x4 }
    /* +0xea056d */ __asm { XOR R13D,0x37bb1b51 }
    /* +0xea0574 */ __asm { MOV ECX,EDI }
    /* +0xea0576 */ __asm { ROL R13D,CL }
    /* +0xea0579 */ __asm { LEA R10,[0x7fffa47887d2] }
    /* +0xea0580 */ __asm { MOV R9D,0xcbef8a95 }
    /* +0xea0586 */ __asm { IMUL R9D,dword ptr [RSP + 0x148] }
    /* +0xea058f */ __asm { NOT R9D }
    /* +0xea0592 */ __asm { MOV ECX,EDI }
    /* +0xea0594 */ __asm { OR ECX,0x1 }
    /* +0xea0597 */ __asm { IMUL ECX,R8D }
    /* +0xea059b */ __asm { MOVSX RAX,CX }
    /* +0xea059f */ __asm { ADD RAX,R10 }
    /* +0xea05a2 */ __asm { ROL R9D,0xf }
    /* +0xea05a6 */ __asm { LEA R10,[0x7fffa478e1bf] }
    /* +0xea05ad */ __asm { MOV R8D,0xd9154f0b }
    /* +0xea05b3 */ __asm { IMUL R8D,R8D,-0x29090b03 }
    /* +0xea05ba */ __asm { MOV ECX,EDI }
    /* +0xea05bc */ __asm { ROL R8D,CL }
    /* +0xea05bf */ __asm { MOVSXD RCX,R8D }
    /* +0xea05c2 */ __asm { MOVSXD R9,R9D }
    /* +0xea05c5 */ __asm { MOVZX R9D,uint8_t ptr [R11 + R9*0x1 + 0xd] }
    /* +0xea05cb */ __asm { MOV R11,qword ptr [R10 + RCX*0x1 + 0x5f] }
    /* +0xea05d0 */ __asm { XOR R11,qword ptr [RAX + R9*0x8 + 0x1c] }
    /* +0xea05d5 */ __asm { MOVQ XMM3,R11 }
    /* +0xea05da */ __asm { MOV R8W,0x2cdb }
    /* +0xea05df */ __asm { PCMPEQD XMM1,XMM1 }
    /* +0xea05e3 */ __asm { PXOR XMM1,XMM3 }
    /* +0xea05e7 */ __asm { MOVQ qword ptr [RSP + 0x80],XMM1 }
    /* +0xea05f0 */ __asm { SUB R8D,EDI }
    /* +0xea05f3 */ __asm { ADD R8D,0xffffb9a5 }
    /* +0xea05fa */ __asm { XOR R8D,R13D }
    /* +0xea05fd */ __asm { MOVZX ECX,R8W }
    /* +0xea0601 */ __asm { CMP qword ptr [RSP + 0x80],RDX }
    /* +0xea0609 */ __asm { CMOVNZ R14,RDX }
    /* +0xea060d */ __asm { MOV qword ptr [RSP + 0x78],R14 }
    /* +0xea0612 */ __asm { MOV RDX,qword ptr GS:[RCX] }
    /* +0xea0616 */ __asm { LEA R10,[0x7fffa4783102] }
    /* +0xea061d */ __asm { MOV qword ptr [RSP + 0xd0],RDI }
    /* +0xea0625 */ __asm { LEA RDI,[0x7fffa4786933] }
    /* +0xea062c */ __asm { LEA RDX,[0x7fffa47821d0] }
    /* +0xea0633 */ __asm { MOV qword ptr [RSP + 0x150],RDX }
    /* +0xea063b */ __asm { MOV SI,0xddfc }
    /* +0xea063f */ __asm { LEA RDX,[0x7fffa4789f13] }
    /* +0xea0646 */ __asm { MOV qword ptr [RSP + 0x118],RDX }
    /* +0xea064e */ __asm { MOV R8D,0x3a03349d }
    /* +0xea0654 */ __asm { MOVD XMM11,dword ptr [RSP + 0xd0] }
    /* +0xea065e */ __asm { MOV EDX,0xc042ef24 }
    /* +0xea0663 */ __asm { LEA R11,[0x7fffa47836ee] }
    /* +0xea066a */ __asm { MOV RAX,R13 }
    /* +0xea066d */ __asm { LEA R12,[0x7fffa478c78c] }
    /* +0xea0674 */ __asm { MOV CX,0xbf57 }
    /* +0xea0678 */ __asm { MOV R9,qword ptr [RSP + 0xd0] }
    /* +0xea0680 */ __asm { LEA R13D,[R9 + RCX*0x1] }
    /* +0xea0684 */ __asm { ADD R13D,0xffffd9b1 }
    /* +0xea068b */ __asm { MOV R9,0x36539f56b5c2696b }
    /* +0xea0695 */ __asm { MOV R9W,0xd008 }
    /* +0xea069a */ __asm { MOVD XMM3,EDX }
    /* +0xea069e */ __asm { PXOR XMM3,XMM11 }
    /* +0xea06a3 */ __asm { MOV DX,0xadee }
    /* +0xea06a7 */ __asm { ADD EDX,0x4c88 }
    /* +0xea06ad */ __asm { MOV ECX,EAX }
    /* +0xea06af */ __asm { ROR R13W,CL }
    /* +0xea06b3 */ __asm { MOV RCX,qword ptr [RSP + 0xd0] }
    /* +0xea06bb */ __asm { ROL DX,CL }
    /* +0xea06be */ __asm { LEA R14,[0x7fffa47851c3] }
    /* +0xea06c5 */ __asm { ADD EDX,0x7e5c }
    /* +0xea06cb */ __asm { MOV ECX,EAX }
    /* +0xea06cd */ __asm { ROL DX,CL }
    /* +0xea06d0 */ __asm { LEA RCX,[0x7fffa4782715] }
    /* +0xea06d7 */ __asm { MOV BX,0x602a }
    /* +0xea06db */ __asm { ADD R13D,0x5c61 }
    /* +0xea06e2 */ __asm { SUB ESI,EAX }
    /* +0xea06e4 */ __asm { XOR ESI,dword ptr [RSP + 0xd0] }
    /* +0xea06eb */ __asm { NOT ESI }
    /* +0xea06ed */ __asm { MOVSX R15,SI }
    /* +0xea06f1 */ __asm { MOV R15,qword ptr [RCX + R15*0x1 + 0xa0] }
    /* +0xea06f9 */ __asm { MOV BP,0x8c4a }
    /* +0xea06fd */ __asm { MOV SI,0x8461 }
    /* +0xea0701 */ __asm { MOVSX RCX,R13W }
    /* +0xea0705 */ __asm { MOV RDI,qword ptr [RDI + RCX*0x1 + 0x10] }
    /* +0xea070a */ __asm { MOV R13D,EAX }
    /* +0xea070d */ __asm { OR R13D,0x1 }
    /* +0xea0711 */ __asm { MOVD ECX,XMM3 }
    /* +0xea0715 */ __asm { IMUL ECX,R13D }
    /* +0xea0719 */ __asm { ADD ECX,0xa9e771ac }
    /* +0xea071f */ __asm { MOVSXD RCX,ECX }
    /* +0xea0722 */ __asm { MOV R12,qword ptr [R12 + RCX*0x1 + 0x70] }
    /* +0xea0727 */ __asm { MOVSX RCX,DX }
    /* +0xea072b */ __asm { LEA RDX,[0x7fffa4782df2] }
    /* +0xea0732 */ __asm { MOVQ XMM1,qword ptr [RDX + RCX*0x1 + 0x28] }
    /* +0xea0738 */ __asm { ADD R8D,0x1f92c8f8 }
    /* +0xea073f */ __asm { MOV qword ptr [RSP + 0x168],RAX }
    /* +0xea0747 */ __asm { MOV ECX,EAX }
    /* +0xea0749 */ __asm { ROR R8D,CL }
    /* +0xea074c */ __asm { IMUL R9D,R13D }
    /* +0xea0750 */ __asm { NOT R9D }
    /* +0xea0753 */ __asm { ROL R9W,0x8 }
    /* +0xea0758 */ __asm { MOVSX RCX,R9W }
    /* +0xea075c */ __asm { MOVQ XMM3,qword ptr [R11 + RCX*0x1 + 0x40] }
    /* +0xea0763 */ __asm { IMUL EBX,R13D }
    /* +0xea0767 */ __asm { IMUL EBP,R13D }
    /* +0xea076b */ __asm { SUB EBP,dword ptr [RSP + 0xd0] }
    /* +0xea0772 */ __asm { ROL BP,0xa }
    /* +0xea0776 */ __asm { IMUL EAX,EBP,0x53df }
    /* +0xea077c */ __asm { NOT EBX }
    /* +0xea077e */ __asm { MOV RCX,qword ptr [RSP + 0xd0] }
    /* +0xea0786 */ __asm { ROL BX,CL }
    /* +0xea0789 */ __asm { MOVSX RAX,AX }
    /* +0xea078d */ __asm { MOVQ XMM5,qword ptr [R14 + RAX*0x1 + 0x58] }
    /* +0xea0794 */ __asm { MOV R11,qword ptr [RSP + 0x78] }
    /* +0xea0799 */ __asm { MOVSX RAX,BX }
    /* +0xea079d */ __asm { MOVQ XMM0,qword ptr [R10 + RAX*0x1 + 0x88] }
    /* +0xea07a7 */ __asm { IMUL ECX,ESI,0x63b }
    /* +0xea07ad */ __asm { SUB ECX,dword ptr [RSP + 0xd0] }
    /* +0xea07b4 */ __asm { ADD ECX,0x7541 }
    /* +0xea07ba */ __asm { MOV dword ptr [RSP + 0xbc],R13D }
    /* +0xea07c2 */ __asm { IMUL ECX,R13D }
    /* +0xea07c6 */ __asm { MOVSX RAX,CX }
    /* +0xea07ca */ __asm { MOV RDX,qword ptr [RSP + 0x150] }
    /* +0xea07d2 */ __asm { MOVQ XMM4,qword ptr [RDX + RAX*0x1 + 0xb8] }
    /* +0xea07db */ __asm { MOVQ XMM2,RDI }
    /* +0xea07e0 */ __asm { MOV RDI,qword ptr [RSP + 0xd0] }
    /* +0xea07e8 */ __asm { MOVQ XMM8,R12 }
    /* +0xea07ed */ __asm { PUNPCKLQDQ XMM2,XMM1 }
    /* +0xea07f1 */ __asm { PUNPCKLQDQ XMM3,XMM5 }
    /* +0xea07f5 */ __asm { MOVQ XMM1,R11 }
    /* +0xea07fa */ __asm { PSHUFD XMM1,XMM1,0x44 }
    /* +0xea07ff */ __asm { PUNPCKLQDQ XMM8,XMM0 }
    /* +0xea0804 */ __asm { MOVQ XMM5,R15 }
    /* +0xea0809 */ __asm { PUNPCKLQDQ XMM5,XMM4 }
    /* +0xea080d */ __asm { PCMPEQD XMM5,XMM1 }
    /* +0xea0811 */ __asm { PSHUFD XMM0,XMM5,0xb1 }
    /* +0xea0816 */ __asm { PAND XMM0,XMM5 }
    /* +0xea081a */ __asm { PCMPEQD XMM8,XMM1 }
    /* +0xea081f */ __asm { PSHUFD XMM5,XMM8,0xb1 }
    /* +0xea0825 */ __asm { PAND XMM5,XMM8 }
    /* +0xea082a */ __asm { PACKSSDW XMM5,XMM0 }
    /* +0xea082e */ __asm { PCMPEQD XMM3,XMM1 }
    /* +0xea0832 */ __asm { PSHUFD XMM0,XMM3,0xb1 }
    /* +0xea0837 */ __asm { PAND XMM0,XMM3 }
    /* +0xea083b */ __asm { PCMPEQD XMM2,XMM1 }
    /* +0xea083f */ __asm { PSHUFD XMM3,XMM2,0xb1 }
    /* +0xea0844 */ __asm { PAND XMM3,XMM2 }
    /* +0xea0848 */ __asm { PACKSSDW XMM3,XMM0 }
    /* +0xea084c */ __asm { PACKSSDW XMM3,XMM5 }
    /* +0xea0850 */ __asm { PMOVMSKB EDX,XMM3 }
    /* +0xea0854 */ __asm { TEST EDX,0xaaaa }
    /* +0xea085a */ __asm { JNZ 0x7fffa56112df }
    /* +0xea0860 */ __asm { SUB R8D,EDI }
    /* +0xea0863 */ __asm { MOVSXD RAX,R8D }
    /* +0xea0866 */ __asm { MOV RDX,qword ptr [RSP + 0x118] }
    /* +0xea086e */ __asm { CMP R11,qword ptr [RDX + RAX*0x1 + 0xd0] }
    /* +0xea0876 */ __asm { JZ 0x7fffa56112df }
    /* +0xea087c */ __asm { LEA R10,[0x7fffa4784860] }
    /* +0xea0883 */ __asm { MOV RDX,0x6db67260f866cf3a }
    /* +0xea088d */ __asm { MOV R11,RDI }
    /* +0xea0890 */ __asm { OR R11,0x1 }
    /* +0xea0894 */ __asm { MOV qword ptr [RSP + 0x158],R11 }
    /* +0xea089c */ __asm { IMUL RDX,R11 }
    /* +0xea08a0 */ __asm { ROL RDX,0x11 }
    /* +0xea08a4 */ __asm { MOV RCX,qword ptr [RSP + 0x168] }
    /* +0xea08ac */ __asm { ROR RDX,CL }
    /* +0xea08af */ __asm { CMP R10,RDX }
    /* +0xea08b2 */ __asm { JNZ 0x7fffa56108bb }
    /* +0xea08b4 */ __asm { PUSH RSI }
    /* +0xea08b5 */ __asm { IMUL ESP,dword ptr [RDX],0x43ef7fa7 }
    /* +0xea08bb */ __asm { MOV DX,0xf215 }
    /* +0xea08bf */ __asm { MOV R15D,0xc182c1be }
    /* +0xea08c5 */ __asm { MOV R12D,0xfa61b2dc }
    /* +0xea08cb */ __asm { XOR EDX,EDI }
    /* +0xea08cd */ __asm { MOV R14D,EDX }
    /* +0xea08d0 */ __asm { MOV ECX,0x2ab62433 }
    /* +0xea08d5 */ __asm { MOV qword ptr [RSP + 0xf0],RCX }
    /* +0xea08dd */ __asm { MOV R8D,0x75c64e3e }
    /* +0xea08e3 */ __asm { MOV RSI,qword ptr [R10 + 0x4e8] }
    /* +0xea08ea */ __asm { MOV RDX,qword ptr [R10 + 0x4f0] }
    /* +0xea08f1 */ __asm { MOV qword ptr [RSP + 0x68],RDX }
    /* +0xea08f6 */ __asm { MOV R13D,ESI }
    /* +0xea08f9 */ __asm { SHR R13D,0x7 }
    /* +0xea08fd */ __asm { MOV RCX,RSI }
    /* +0xea0900 */ __asm { SHR RCX,0x2d }
    /* +0xea0904 */ __asm { MOV R11,RSI }
    /* +0xea0907 */ __asm { SHR R11,0x2a }
    /* +0xea090b */ __asm { MOV RBX,RSI }
    /* +0xea090e */ __asm { SHR RBX,0x1c }
    /* +0xea0912 */ __asm { MOV RBP,RSI }
    /* +0xea0915 */ __asm { SHR RBP,0x2f }
    /* +0xea0919 */ __asm { MOV EDX,ESI }
    /* +0xea091b */ __asm { SHR EDX,0xf }
    /* +0xea091e */ __asm { AND EDX,0x8 }
    /* +0xea0921 */ __asm { MOV R9D,ESI }
    /* +0xea0924 */ __asm { SHR R9D,0x11 }
    /* +0xea0928 */ __asm { AND R9D,0x10 }
    /* +0xea092c */ __asm { MOVD XMM3,R9D }
    /* +0xea0931 */ __asm { MOV qword ptr [RSP + 0xf8],R10 }
    /* +0xea0939 */ __asm { MOV R10D,ESI }
    /* +0xea093c */ __asm { SHR R10D,0x12 }
    /* +0xea0940 */ __asm { AND R10D,0x20 }
    /* +0xea0944 */ __asm { MOVD XMM1,EDX }
    /* +0xea0948 */ __asm { POR XMM1,XMM3 }
    /* +0xea094c */ __asm { MOVQ R9,XMM1 }
    /* +0xea0951 */ __asm { OR R9,R10 }
    /* +0xea0954 */ __asm { MOV EDX,ESI }
    /* +0xea0956 */ __asm { SHR EDX,0x15 }
    /* +0xea0959 */ __asm { AND EDX,0x40 }
    /* +0xea095c */ __asm { AND EBX,0x80 }
    /* +0xea0962 */ __asm { OR RBX,RDX }
    /* +0xea0965 */ __asm { MOV EDX,0xe8014cc8 }
    /* +0xea096a */ __asm { OR RBX,R9 }
    /* +0xea096d */ __asm { MOV qword ptr [RSP + 0x108],RBX }
    /* +0xea0975 */ __asm { MOV R10,RSI }
    /* +0xea0978 */ __asm { SHR R10,0x26 }
    /* +0xea097c */ __asm { AND R10D,0x600 }
    /* +0xea0983 */ __asm { AND R11D,0x1800 }
    /* +0xea098a */ __asm { OR R11,R10 }
    /* +0xea098d */ __asm { MOV EAX,0xd900c04f }
    /* +0xea0992 */ __asm { AND ECX,0x2000 }
    /* +0xea0998 */ __asm { OR R11,RCX }
    /* +0xea099b */ __asm { MOV RCX,RSI }
    /* +0xea099e */ __asm { SHR RCX,0x21 }
    /* +0xea09a2 */ __asm { AND EBP,0xc000 }
    /* +0xea09a8 */ __asm { OR R11,RBP }
    /* +0xea09ab */ __asm { MOV qword ptr [RSP + 0x100],R11 }
    /* +0xea09b3 */ __asm { MOV R10D,ESI }
    /* +0xea09b6 */ __asm { SHR R10D,0x6 }
    /* +0xea09ba */ __asm { AND R10D,0x2 }
    /* +0xea09be */ __asm { AND ECX,0x100 }
    /* +0xea09c4 */ __asm { MOV qword ptr [RSP + 0x160],RCX }
    /* +0xea09cc */ __asm { MOV RBX,qword ptr [RSP + 0x148] }
    /* +0xea09d4 */ __asm { MOV R9,R8 }
    /* +0xea09d7 */ __asm { IMUL R9D,EBX }
    /* +0xea09db */ __asm { NOT R9D }
    /* +0xea09de */ __asm { MOV R8,qword ptr [RSP + 0x168] }
    /* +0xea09e6 */ __asm { MOV ECX,R8D }
    /* +0xea09e9 */ __asm { ROR R9D,CL }
    /* +0xea09ec */ __asm { ADD R9D,0xf9db507a }
    /* +0xea09f3 */ __asm { MOV R11,R9 }
    /* +0xea09f6 */ __asm { ROL R14W,0x2 }
    /* +0xea09fb */ __asm { MOV dword ptr [RSP + 0x150],R14D }
    /* +0xea0a03 */ __asm { IMUL EAX,EBX }
    /* +0xea0a06 */ __asm { ADD EAX,R8D }
    /* +0xea0a09 */ __asm { MOV qword ptr [RSP + 0x118],RAX }
    /* +0xea0a11 */ __asm { IMUL R9D,EDX,-0x4a5444f }
    /* +0xea0a18 */ __asm { XOR R9D,R8D }
    /* +0xea0a1b */ __asm { NOT R9D }
    /* +0xea0a1e */ __asm { MOV EBP,ESI }
    /* +0xea0a20 */ __asm { SHR EBP,0x2 }
    /* +0xea0a23 */ __asm { MOV qword ptr [RSP + 0xc8],R11 }
    /* +0xea0a2b */ __asm { AND R13D,0x4 }
    /* +0xea0a2f */ __asm { MOV R14D,0xaf1f8172 }
    /* +0xea0a35 */ __asm { ADD R12D,EDI }
    /* +0xea0a38 */ __asm { XOR R12D,0xf25b3f14 }
    /* +0xea0a3f */ __asm { ROL R12D,CL }
    /* +0xea0a42 */ __asm { XOR R14D,R8D }
    /* +0xea0a45 */ __asm { ADD R14D,0x60076554 }
    /* +0xea0a4c */ __asm { MOV RAX,qword ptr [RSP + 0xf0] }
    /* +0xea0a54 */ __asm { LEA EDX,[R8 + RAX*0x1] }
    /* +0xea0a58 */ __asm { ADD EDX,0xaaece629 }
    /* +0xea0a5e */ __asm { MOV ECX,EDI }
    /* +0xea0a60 */ __asm { ROR EDX,CL }
    /* +0xea0a62 */ __asm { SUB R9D,EDI }
    /* +0xea0a65 */ __asm { MOV ECX,0x4ec6bf86 }
    /* +0xea0a6a */ __asm { XOR ECX,R8D }
    /* +0xea0a6d */ __asm { IMUL ECX,EBX }
    /* +0xea0a70 */ __asm { XOR ECX,0x7bba9b1a }
    /* +0xea0a76 */ __asm { CMP R12,R9 }
    /* +0xea0a79 */ __asm { CMOVBE RBP,RSI }
    /* +0xea0a7d */ __asm { AND EBP,0x1 }
    /* +0xea0a80 */ __asm { OR RBP,R10 }
    /* +0xea0a83 */ __asm { OR RBP,R13 }
    /* +0xea0a86 */ __asm { XOR R14D,EDI }
    /* +0xea0a89 */ __asm { MOV R9,qword ptr [RSP + 0x68] }
    /* +0xea0a8e */ __asm { MOV EAX,R9D }
    /* +0xea0a91 */ __asm { SHL EAX,0xc }
    /* +0xea0a94 */ __asm { AND EAX,0x100000 }
    /* +0xea0a99 */ __asm { MOV qword ptr [RSP + 0xc0],RAX }
    /* +0xea0aa1 */ __asm { MOV RAX,R9 }
    /* +0xea0aa4 */ __asm { SHR RAX,0x17 }
    /* +0xea0aa8 */ __asm { AND EAX,EDX }
    /* +0xea0aaa */ __asm { MOV qword ptr [RSP + 0xf0],RAX }
    /* +0xea0ab2 */ __asm { MOV RAX,R9 }
    /* +0xea0ab5 */ __asm { SHR RAX,0x15 }
    /* +0xea0ab9 */ __asm { AND EAX,ECX }
    /* +0xea0abb */ __asm { MOV qword ptr [RSP + 0xe0],RAX }
    /* +0xea0ac3 */ __asm { MOV RDX,R9 }
    /* +0xea0ac6 */ __asm { SHR RDX,0x19 }
    /* +0xea0aca */ __asm { MOV R11,0x100000000 }
    /* +0xea0ad4 */ __asm { AND RDX,R11 }
    /* +0xea0ad7 */ __asm { MOV RCX,R9 }
    /* +0xea0ada */ __asm { SHR RCX,0x10 }
    /* +0xea0ade */ __asm { AND ECX,0x20000000 }
    /* +0xea0ae4 */ __asm { MOV qword ptr [RSP + 0x138],RCX }
    /* +0xea0aec */ __asm { MOV ESI,R9D }
    /* +0xea0aef */ __asm { SHL ESI,0xa }
    /* +0xea0af2 */ __asm { AND ESI,0x200000 }
    /* +0xea0af8 */ __asm { MOV EAX,R9D }
    /* +0xea0afb */ __asm { AND EAX,0x7 }
    /* +0xea0afe */ __asm { SHL EAX,0x10 }
    /* +0xea0b01 */ __asm { MOV RBX,R9 }
    /* +0xea0b04 */ __asm { SHR RBX,0x7 }
    /* +0xea0b08 */ __asm { MOV R10D,R9D }
    /* +0xea0b0b */ __asm { AND R10D,0x40 }
    /* +0xea0b0f */ __asm { SHL R10D,0xd }
    /* +0xea0b13 */ __asm { MOV R13,R9 }
    /* +0xea0b16 */ __asm { SHR R13,0x1d }
    /* +0xea0b1a */ __asm { MOV RCX,0x200000000 }
    /* +0xea0b24 */ __asm { AND R13,RCX }
    /* +0xea0b27 */ __asm { AND EBX,0x10000000 }
    /* +0xea0b2d */ __asm { MOV RCX,RDI }
    /* +0xea0b30 */ __asm { MOV RDI,R9 }
    /* +0xea0b33 */ __asm { SHR RDI,0x5 }
    /* +0xea0b37 */ __asm { MOV R12,RDI }
    /* +0xea0b3a */ __asm { OR R12,0x8000000 }
    /* +0xea0b41 */ __asm { AND EDI,0x8000000 }
    /* +0xea0b47 */ __asm { SHL R9D,0x8 }
    /* +0xea0b4b */ __asm { MOV R11,R9 }
    /* +0xea0b4e */ __asm { ADD R15D,ECX }
    /* +0xea0b51 */ __asm { XOR R15D,0x5d3367af }
    /* +0xea0b58 */ __asm { MOV ECX,R8D }
    /* +0xea0b5b */ __asm { ROR R15D,CL }
    /* +0xea0b5e */ __asm { AND R11D,0x7c00000 }
    /* +0xea0b65 */ __asm { CMP R14,R15 }
    /* +0xea0b68 */ __asm { MOVD XMM1,dword ptr [RSP + 0x160] }
    /* +0xea0b71 */ __asm { MOVQ XMM5,qword ptr [RSP + 0x108] }
    /* +0xea0b7a */ __asm { CMOVBE RDI,R12 }
    /* +0xea0b7e */ __asm { MOV R12,R8 }
    /* +0xea0b81 */ __asm { MOVQ XMM3,RDX }
    /* +0xea0b86 */ __asm { MOV RDX,qword ptr [RSP + 0xf8] }
    /* +0xea0b8e */ __asm { MOV RCX,qword ptr [RDX + 0x4f8] }
    /* +0xea0b95 */ __asm { MOV R9,RCX }
}

