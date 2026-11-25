// Subsystem: Thread, Process & Worker Routines
// Functions: 10
#include "../include/module_declarations.hpp"

// ============================================================================
// Function : WorkerThread_0x319df0  |  RVA: 0x319df0  |  Size: 66 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t WorkerThread_0x319df0(void)

{
  FUN_7fffa5132840(0xffffffffe98c01a9);
  return 0;
}


// ============================================================================
// Function : Hook_ntdll_dll_NtSuspendThread  |  RVA: 0x75de20  |  Size: 4650 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtSuspendThread(void) {
    /* +0x75de20 */ __asm { PUSH R14 }
    /* +0x75de22 */ __asm { PUSH R13 }
    /* +0x75de24 */ __asm { PUSH R15 }
    /* +0x75de26 */ __asm { PUSH R12 }
    /* +0x75de28 */ __asm { PUSH RBP }
    /* +0x75de29 */ __asm { PUSH RSI }
    /* +0x75de2a */ __asm { PUSH RDI }
    /* +0x75de2b */ __asm { PUSH RBX }
    /* +0x75de2c */ __asm { SUB RSP,0x148 }
    /* +0x75de33 */ __asm { MOV qword ptr [RSP + 0xc0],RDX }
    /* +0x75de3b */ __asm { MOV qword ptr [RSP + 0x60],RCX }
    /* +0x75de40 */ __asm { MOV R11D,0x513dbc63 }
    /* +0x75de46 */ __asm { MOV EAX,0x8428fd07 }
    /* +0x75de4b */ __asm { SUB EAX,R11D }
    /* +0x75de4e */ __asm { MOV dword ptr [RSP + 0xd0],EAX }
    /* +0x75de55 */ __asm { MOV R11D,dword ptr [RSP + 0xd0] }
    /* +0x75de5d */ __asm { CMP R11D,0xe831f5d3 }
    /* +0x75de64 */ __asm { JC 0x7fffa4ecde6e }
    /* +0x75de66 */ __asm { RETF }
    /* +0x75de6e */ __asm { LEA R12,[0x7fffa477f9e5] }
    /* +0x75de75 */ __asm { MOV RCX,-0x522581ba7e25c464 }
    /* +0x75de7f */ __asm { CMP R12,RCX }
    /* +0x75de82 */ __asm { JZ 0x7fffa4ecefcc }
    /* +0x75de88 */ __asm { MOV R11D,0x3c52df4e }
    /* +0x75de8e */ __asm { MOV R8D,0xbd051f53 }
    /* +0x75de94 */ __asm { MOV qword ptr [RSP + 0xa8],R8 }
    /* +0x75de9c */ __asm { MOV EAX,0xdd0106f4 }
    /* +0x75dea1 */ __asm { MOV dword ptr [RSP + 0x88],EAX }
    /* +0x75dea8 */ __asm { MOV R8D,0xa33595f8 }
    /* +0x75deae */ __asm { MOV EAX,0xde788327 }
    /* +0x75deb3 */ __asm { IMUL R10D,R11D,0x4e100e5d }
    /* +0x75deba */ __asm { ADD R8D,0x749aa651 }
    /* +0x75dec1 */ __asm { XOR R8D,0xeb966a2 }
    /* +0x75dec8 */ __asm { MOV DX,0xcb24 }
    /* +0x75decc */ __asm { MOV word ptr [RSP + 0xf0],DX }
    /* +0x75ded4 */ __asm { MOV R11D,0x2a82c32a }
    /* +0x75deda */ __asm { XOR R11D,0x418c876f }
    /* +0x75dee1 */ __asm { ROL R11D,0x7 }
    /* +0x75dee5 */ __asm { MOVSXD RCX,R11D }
    /* +0x75dee8 */ __asm { MOV qword ptr [RSP + 0xa0],RCX }
    /* +0x75def0 */ __asm { MOV ECX,0x8f9b232e }
    /* +0x75def5 */ __asm { MOV qword ptr [RSP + 0xb8],RCX }
    /* +0x75defd */ __asm { MOV ECX,0xea934a72 }
    /* +0x75df02 */ __asm { MOV qword ptr [RSP + 0x90],RCX }
    /* +0x75df0a */ __asm { MOV ECX,0x1e00bf27 }
    /* +0x75df0f */ __asm { MOV qword ptr [RSP + 0x110],RCX }
    /* +0x75df17 */ __asm { MOV qword ptr [RSP + 0x128],R8 }
    /* +0x75df1f */ __asm { MOV R8D,0xfaa6cdd4 }
    /* +0x75df25 */ __asm { MOV R11D,0xd0c93013 }
    /* +0x75df2b */ __asm { MOV EBP,0xbc8794f0 }
    /* +0x75df30 */ __asm { XOR R10D,0xee943296 }
    /* +0x75df37 */ __asm { MOVSXD RCX,R10D }
    /* +0x75df3a */ __asm { MOV qword ptr [RSP + 0xe8],RCX }
    /* +0x75df42 */ __asm { ADD EAX,0xac7bd4ff }
    /* +0x75df47 */ __asm { MOVSXD RCX,EAX }
    /* +0x75df4a */ __asm { MOV qword ptr [RSP + 0x140],RCX }
    /* +0x75df52 */ __asm { MOV R10,qword ptr [R12 + 0x5363] }
    /* +0x75df5a */ __asm { MOV RCX,R10 }
    /* +0x75df5d */ __asm { SHR RCX,0x21 }
    /* +0x75df61 */ __asm { AND ECX,0x100 }
    /* +0x75df67 */ __asm { MOVD XMM1,ECX }
    /* +0x75df6b */ __asm { MOV EAX,R10D }
    /* +0x75df6e */ __asm { SHR EAX,0x7 }
    /* +0x75df71 */ __asm { AND EAX,0x4 }
    /* +0x75df74 */ __asm { MOV EDX,R10D }
    /* +0x75df77 */ __asm { SHR EDX,0x6 }
    /* +0x75df7a */ __asm { AND EDX,0x2 }
    /* +0x75df7d */ __asm { OR EDX,EAX }
    /* +0x75df7f */ __asm { MOV EAX,R10D }
    /* +0x75df82 */ __asm { SHR EAX,0xf }
    /* +0x75df85 */ __asm { AND EAX,0x8 }
    /* +0x75df88 */ __asm { OR EDX,EAX }
    /* +0x75df8a */ __asm { MOV EAX,R10D }
    /* +0x75df8d */ __asm { SHR EAX,0x12 }
    /* +0x75df90 */ __asm { AND EAX,0x20 }
    /* +0x75df93 */ __asm { OR EDX,EAX }
    /* +0x75df95 */ __asm { MOV EAX,R10D }
    /* +0x75df98 */ __asm { SHR EAX,0x15 }
    /* +0x75df9b */ __asm { AND EAX,0x40 }
    /* +0x75df9e */ __asm { OR EDX,EAX }
    /* +0x75dfa0 */ __asm { MOV RCX,R10 }
    /* +0x75dfa3 */ __asm { SHR RCX,0x1c }
    /* +0x75dfa7 */ __asm { AND ECX,0x80 }
    /* +0x75dfad */ __asm { OR EDX,ECX }
    /* +0x75dfaf */ __asm { MOVD XMM2,EDX }
    /* +0x75dfb3 */ __asm { MOV RCX,R10 }
    /* +0x75dfb6 */ __asm { SHR RCX,0x26 }
    /* +0x75dfba */ __asm { AND ECX,0x600 }
    /* +0x75dfc0 */ __asm { MOVD XMM5,ECX }
    /* +0x75dfc4 */ __asm { MOV RCX,R10 }
    /* +0x75dfc7 */ __asm { SHR RCX,0x2a }
    /* +0x75dfcb */ __asm { AND ECX,0x1800 }
    /* +0x75dfd1 */ __asm { POR XMM5,XMM1 }
    /* +0x75dfd5 */ __asm { POR XMM5,XMM2 }
    /* +0x75dfd9 */ __asm { MOVQ RDX,XMM5 }
    /* +0x75dfde */ __asm { OR EDX,ECX }
    /* +0x75dfe0 */ __asm { MOV qword ptr [RSP + 0xc8],RDX }
    /* +0x75dfe8 */ __asm { MOV RDX,qword ptr [R12 + 0x536b] }
    /* +0x75dff0 */ __asm { MOV RCX,RDX }
    /* +0x75dff3 */ __asm { SHR RCX,0x19 }
    /* +0x75dff7 */ __asm { MOV R9,0x100000000 }
    /* +0x75e001 */ __asm { AND R9,RCX }
    /* +0x75e004 */ __asm { MOV qword ptr [RSP + 0x50],R9 }
    /* +0x75e009 */ __asm { XOR R11D,0xd0c93011 }
    /* +0x75e010 */ __asm { ROL R11D,0x1d }
    /* +0x75e014 */ __asm { MOV RCX,RDX }
    /* +0x75e017 */ __asm { SHR RCX,0x15 }
    /* +0x75e01b */ __asm { AND ECX,R11D }
    /* +0x75e01e */ __asm { MOV qword ptr [RSP + 0x108],RCX }
    /* +0x75e026 */ __asm { MOV RDI,RDX }
    /* +0x75e029 */ __asm { MOV ESI,EDX }
    /* +0x75e02b */ __asm { MOV ECX,EDX }
    /* +0x75e02d */ __asm { MOV qword ptr [RSP + 0xe0],RCX }
    /* +0x75e035 */ __asm { MOV EAX,EDX }
    /* +0x75e037 */ __asm { LEA ECX,[RDX + 0x1ffffff9] }
    /* +0x75e03d */ __asm { MOV R11D,EDX }
    /* +0x75e040 */ __asm { MOV qword ptr [RSP + 0x118],R11 }
    /* +0x75e048 */ __asm { MOV dword ptr [RSP + 0x120],EDX }
    /* +0x75e04f */ __asm { MOV R9,RDX }
    /* +0x75e052 */ __asm { MOV R13,RDX }
    /* +0x75e055 */ __asm { MOV qword ptr [RSP + 0x68],RDX }
    /* +0x75e05a */ __asm { SHR RDX,0x1d }
    /* +0x75e05e */ __asm { MOV R11,0x200000000 }
    /* +0x75e068 */ __asm { AND R11,RDX }
    /* +0x75e06b */ __asm { MOV qword ptr [RSP + 0xf8],R11 }
    /* +0x75e073 */ __asm { IMUL R8D,R8D,-0x415aa955 }
    /* +0x75e07a */ __asm { NOT R8D }
    /* +0x75e07d */ __asm { MOV qword ptr [RSP + 0x100],R8 }
    /* +0x75e085 */ __asm { MOV R11D,0xe072188d }
    /* +0x75e08b */ __asm { IMUL R8D,R11D,-0x19a7c027 }
    /* +0x75e092 */ __asm { ADD R8D,0x4d267c0c }
    /* +0x75e099 */ __asm { MOV qword ptr [RSP + 0x130],R8 }
    /* +0x75e0a1 */ __asm { MOV R15D,0xa1756b9e }
    /* +0x75e0a7 */ __asm { ADD R15D,0x99df2db4 }
    /* +0x75e0ae */ __asm { MOV R11D,0x36f9de98 }
    /* +0x75e0b4 */ __asm { IMUL R8D,R11D,0x5db38bdf }
    /* +0x75e0bb */ __asm { MOV R14,qword ptr [R12 + 0x5373] }
    /* +0x75e0c3 */ __asm { MOV R11,R14 }
    /* +0x75e0c6 */ __asm { SHL R11,0x6 }
    /* +0x75e0ca */ __asm { MOV RBX,0x60000000000 }
    /* +0x75e0d4 */ __asm { AND RBX,R11 }
    /* +0x75e0d7 */ __asm { MOV RDX,R14 }
    /* +0x75e0da */ __asm { SHR RDX,0x3 }
    /* +0x75e0de */ __asm { MOV R11,0x80000000000 }
    /* +0x75e0e8 */ __asm { AND R11,RDX }
    /* +0x75e0eb */ __asm { MOV EDX,R14D }
    /* +0x75e0ee */ __asm { AND EDX,0x800 }
    /* +0x75e0f4 */ __asm { SHL RDX,0x1a }
    /* +0x75e0f8 */ __asm { MOV R12D,R14D }
    /* +0x75e0fb */ __asm { AND R12D,0x6 }
    /* +0x75e0ff */ __asm { SHL R12,0x21 }
    /* +0x75e103 */ __asm { OR R12,RDX }
    /* +0x75e106 */ __asm { MOVZX EDX,word ptr [RSP + 0xf0] }
    /* +0x75e10e */ __asm { XOR RDX,0xcb6c }
    /* +0x75e115 */ __asm { MOV qword ptr [RSP + 0xf0],RDX }
    /* +0x75e11d */ __asm { MOV RDX,qword ptr [RSP + 0x110] }
    /* +0x75e125 */ __asm { ADD EDX,0x620c8ee3 }
    /* +0x75e12b */ __asm { MOV qword ptr [RSP + 0x110],RDX }
    /* +0x75e133 */ __asm { ADD EBP,0x39cc650f }
    /* +0x75e139 */ __asm { MOV dword ptr [RSP + 0x84],EBP }
    /* +0x75e140 */ __asm { MOV EDX,R10D }
    /* +0x75e143 */ __asm { SHR EDX,0x11 }
    /* +0x75e146 */ __asm { MOV qword ptr [RSP + 0x98],RDX }
    /* +0x75e14e */ __asm { MOV EBP,R10D }
    /* +0x75e151 */ __asm { SHL EBP,0x4 }
    /* +0x75e154 */ __asm { ADD EBP,R10D }
    /* +0x75e157 */ __asm { MOV RDX,R10 }
    /* +0x75e15a */ __asm { SHR RDX,0x2f }
    /* +0x75e15e */ __asm { AND EDX,0xc000 }
    /* +0x75e164 */ __asm { SHR RDI,0x10 }
    /* +0x75e168 */ __asm { MOV qword ptr [RSP + 0x48],RDI }
    /* +0x75e16d */ __asm { SHL ESI,0x8 }
    /* +0x75e170 */ __asm { AND ESI,0x7c00000 }
    /* +0x75e176 */ __asm { MOV qword ptr [RSP + 0x138],RSI }
    /* +0x75e17e */ __asm { MOV RSI,qword ptr [RSP + 0xe0] }
    /* +0x75e186 */ __asm { SHL ESI,0xc }
    /* +0x75e189 */ __asm { SHL EAX,0xa }
    /* +0x75e18c */ __asm { MOV RDI,qword ptr [RSP + 0x118] }
    /* +0x75e194 */ __asm { AND EDI,0x7 }
    /* +0x75e197 */ __asm { SHL EDI,0x10 }
    /* +0x75e19a */ __asm { MOV qword ptr [RSP + 0x118],RDI }
    /* +0x75e1a2 */ __asm { AND ESI,0x100000 }
    /* +0x75e1a8 */ __asm { MOV qword ptr [RSP + 0xe0],RSI }
    /* +0x75e1b0 */ __asm { MOV EDI,dword ptr [RSP + 0x120] }
    /* +0x75e1b7 */ __asm { AND EDI,0x40 }
    /* +0x75e1ba */ __asm { SHL EDI,0xd }
    /* +0x75e1bd */ __asm { MOV dword ptr [RSP + 0x120],EDI }
    /* +0x75e1c4 */ __asm { SHR R9,0x7 }
    /* +0x75e1c8 */ __asm { MOV qword ptr [RSP + 0x70],R9 }
    /* +0x75e1cd */ __asm { SHR R13,0x17 }
    /* +0x75e1d1 */ __asm { MOV RDI,R13 }
    /* +0x75e1d4 */ __asm { MOV R9,qword ptr [RSP + 0x68] }
    /* +0x75e1d9 */ __asm { SHR R9,0x5 }
    /* +0x75e1dd */ __asm { AND R9D,0x8000000 }
    /* +0x75e1e4 */ __asm { MOV qword ptr [RSP + 0x68],R9 }
    /* +0x75e1e9 */ __asm { AND EAX,0x200000 }
    /* +0x75e1ee */ __asm { MOV R9,R14 }
    /* +0x75e1f1 */ __asm { SHL R9,0x7 }
    /* +0x75e1f5 */ __asm { MOV qword ptr [RSP + 0x78],R9 }
    /* +0x75e1fa */ __asm { MOV R13,R14 }
    /* +0x75e1fd */ __asm { SHL R13,0x1b }
    /* +0x75e201 */ __asm { MOV ESI,R14D }
    /* +0x75e204 */ __asm { AND ESI,0x40000000 }
    /* +0x75e20a */ __asm { SHL RSI,0x9 }
    /* +0x75e20e */ __asm { CMP R8,qword ptr [RSP + 0xa0] }
    /* +0x75e216 */ __asm { CMOVLE R13,R14 }
    /* +0x75e21a */ __asm { MOV R8,0x1000000000 }
    /* +0x75e224 */ __asm { AND R8,R13 }
    /* +0x75e227 */ __asm { MOV qword ptr [RSP + 0xa0],R8 }
    /* +0x75e22f */ __asm { LEA R9,[R14 + 0x7] }
    /* +0x75e233 */ __asm { MOV qword ptr [RSP + 0x58],R9 }
    /* +0x75e238 */ __asm { AND R14D,0x400000 }
    /* +0x75e23f */ __asm { SHL R14,0x10 }
    /* +0x75e243 */ __asm { OR R14,R12 }
    /* +0x75e246 */ __asm { OR R14,RSI }
    /* +0x75e249 */ __asm { OR R14,RBX }
    /* +0x75e24c */ __asm { OR R14,R11 }
    /* +0x75e24f */ __asm { MOV R13,qword ptr [RSP + 0x90] }
    /* +0x75e257 */ __asm { XOR R13D,0xff112082 }
    /* +0x75e25e */ __asm { MOV R11D,0x80000000 }
    /* +0x75e264 */ __asm { IMUL R11D,R11D,-0x75242ed7 }
    /* +0x75e26b */ __asm { MOV R9,RDI }
    /* +0x75e26e */ __asm { AND R9D,R11D }
    /* +0x75e271 */ __asm { IMUL R8D,dword ptr [RSP + 0x88],0x6a07da73 }
    /* +0x75e27d */ __asm { ADD R8D,0xee79b264 }
    /* +0x75e284 */ __asm { MOV R11D,R10D }
    /* +0x75e287 */ __asm { SHR R11D,0x2 }
    /* +0x75e28b */ __asm { MOV RSI,qword ptr [RSP + 0xb8] }
    /* +0x75e293 */ __asm { ADD ESI,0x7250008f }
    /* +0x75e299 */ __asm { MOV RBX,R10 }
    /* +0x75e29c */ __asm { SHR RBX,0x2d }
    /* +0x75e2a0 */ __asm { AND EBX,0x2000 }
    /* +0x75e2a6 */ __asm { MOV R12,qword ptr [RSP + 0x110] }
    /* +0x75e2ae */ __asm { CMP R12,qword ptr [RSP + 0x130] }
    /* +0x75e2b6 */ __asm { MOV R12,qword ptr [RSP + 0xa0] }
    /* +0x75e2be */ __asm { CMOVLE RBP,qword ptr [RSP + 0x98] }
    /* +0x75e2c7 */ __asm { AND EBP,0x10 }
    /* +0x75e2ca */ __asm { OR RBP,RDX }
    /* +0x75e2cd */ __asm { MOV RDI,qword ptr [RSP + 0x48] }
    /* +0x75e2d2 */ __asm { AND EDI,0x20000000 }
    /* +0x75e2d8 */ __asm { OR RDI,qword ptr [RSP + 0x108] }
    /* +0x75e2e0 */ __asm { MOV EDX,0xbdb8c221 }
    /* +0x75e2e5 */ __asm { ADD EDX,0xc482b2ac }
    /* +0x75e2eb */ __asm { MOVSXD RDX,EDX }
    /* +0x75e2ee */ __asm { CMP qword ptr [RSP + 0xe8],RDX }
    /* +0x75e2f6 */ __asm { MOVD XMM1,dword ptr [RSP + 0xc8] }
    /* +0x75e2ff */ __asm { MOVD XMM2,dword ptr [RSP + 0x120] }
    /* +0x75e308 */ __asm { CMOVBE R11,R10 }
    /* +0x75e30c */ __asm { MOVD XMM5,EBX }
    /* +0x75e310 */ __asm { AND R11D,0x1 }
    /* +0x75e314 */ __asm { OR R11,RBP }
    /* +0x75e317 */ __asm { OR R11,qword ptr [RSP + 0x118] }
    /* +0x75e31f */ __asm { POR XMM5,XMM1 }
    /* +0x75e323 */ __asm { MOVQ RDX,XMM5 }
    /* +0x75e328 */ __asm { OR R11,RDX }
    /* +0x75e32b */ __asm { MOVQ XMM1,R11 }
    /* +0x75e330 */ __asm { POR XMM1,XMM2 }
    /* +0x75e334 */ __asm { MOVQ R11,XMM1 }
    /* +0x75e339 */ __asm { OR R11,qword ptr [RSP + 0xe0] }
    /* +0x75e341 */ __asm { MOVQ XMM1,RAX }
    /* +0x75e346 */ __asm { IMUL RAX,R11 }
    /* +0x75e34a */ __asm { CMP R15,R13 }
    /* +0x75e34d */ __asm { MOVQ XMM2,R11 }
    /* +0x75e352 */ __asm { POR XMM2,XMM1 }
    /* +0x75e356 */ __asm { MOVQ R11,XMM2 }
    /* +0x75e35b */ __asm { CMOVBE R11,RAX }
    /* +0x75e35f */ __asm { OR R11,qword ptr [RSP + 0x138] }
    /* +0x75e367 */ __asm { MOV R10,qword ptr [RSP + 0x68] }
    /* +0x75e36c */ __asm { MOV RDX,R10 }
    /* +0x75e36f */ __asm { XOR RDX,R11 }
    /* +0x75e372 */ __asm { OR R11,R10 }
    /* +0x75e375 */ __asm { MOV R10D,0x87cb4b63 }
    /* +0x75e37b */ __asm { CMP qword ptr [RSP + 0x100],R10 }
    /* +0x75e383 */ __asm { CMOVNZ R11,RDX }
    /* +0x75e387 */ __asm { MOV R10,RSI }
    /* +0x75e38a */ __asm { MOVSXD RDX,dword ptr [RSP + 0x84] }
    /* +0x75e392 */ __asm { CMP R10,RDX }
    /* +0x75e395 */ __asm { CMOVGE RCX,qword ptr [RSP + 0x70] }
    /* +0x75e39b */ __asm { AND ECX,0x10000000 }
    /* +0x75e3a1 */ __asm { OR RCX,RDI }
    /* +0x75e3a4 */ __asm { OR RCX,R11 }
    /* +0x75e3a7 */ __asm { MOVQ XMM1,RCX }
    /* +0x75e3ac */ __asm { OR RCX,R9 }
    /* +0x75e3af */ __asm { CMP R8,qword ptr [RSP + 0x140] }
    /* +0x75e3b7 */ __asm { MOVQ XMM2,R9 }
    /* +0x75e3bc */ __asm { PXOR XMM2,XMM1 }
    /* +0x75e3c0 */ __asm { MOVQ R11,XMM2 }
    /* +0x75e3c5 */ __asm { CMOVC R11,RCX }
    /* +0x75e3c9 */ __asm { MOV R8,qword ptr [RSP + 0xa8] }
    /* +0x75e3d1 */ __asm { ADD R8D,0xb741772e }
    /* +0x75e3d8 */ __asm { CMP R8,qword ptr [RSP + 0x128] }
    /* +0x75e3e0 */ __asm { MOV RDX,qword ptr [RSP + 0x78] }
    /* +0x75e3e5 */ __asm { CMOVL RDX,qword ptr [RSP + 0x58] }
    /* +0x75e3eb */ __asm { MOV RCX,0x10000000000 }
    /* +0x75e3f5 */ __asm { AND RCX,RDX }
    /* +0x75e3f8 */ __asm { OR RCX,R14 }
    /* +0x75e3fb */ __asm { OR R12,qword ptr [RSP + 0x50] }
    /* +0x75e400 */ __asm { OR R12,qword ptr [RSP + 0xf8] }
    /* +0x75e408 */ __asm { OR R12,RCX }
    /* +0x75e40b */ __asm { OR R12,R11 }
    /* +0x75e40e */ __asm { SHL R12,0x4 }
    /* +0x75e412 */ __asm { MOV RCX,qword ptr [RSP + 0xf0] }
    /* +0x75e41a */ __asm { MOV RBX,qword ptr GS:[RCX] }
    /* +0x75e41e */ __asm { MOV R11D,dword ptr [R12] }
    /* +0x75e422 */ __asm { CMP R11D,EBX }
    /* +0x75e425 */ __asm { JZ 0x7fffa4ece436 }
    /* +0x75e427 */ __asm { LEA RCX,[R12 + 0x8] }
    /* +0x75e42c */ __asm { CALL qword ptr [0x7fffa5877480] }
    /* +0x75e432 */ __asm { XCHG dword ptr [R12],EBX }
    /* +0x75e436 */ __asm { MOV R10,0x0 }
    /* +0x75e43d */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x75e444 */ __asm { NOP }
    /* +0x75e445 */ __asm { INC dword ptr [R12 + 0x4] }
    /* +0x75e44a */ __asm { RDTSC }
    /* +0x75e44c */ __asm { SHL RDX,0x20 }
    /* +0x75e450 */ __asm { OR RDX,RAX }
    /* +0x75e453 */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x75e45d */ __asm { IMUL RCX,RDX }
    /* +0x75e461 */ __asm { MOV R10,-0x22b18422c4a9c65e }
    /* +0x75e46b */ __asm { ADD R10,RCX }
    /* +0x75e46e */ __asm { MOV RCX,R10 }
    /* +0x75e471 */ __asm { SHR RCX,0x3b }
    /* +0x75e475 */ __asm { MOV R8,R10 }
    /* +0x75e478 */ __asm { SHR R8,0x2d }
    /* +0x75e47c */ __asm { SHR R10,0x1b }
    /* +0x75e480 */ __asm { XOR R8D,R10D }
    /* +0x75e483 */ __asm { ROR R8D,CL }
    /* +0x75e486 */ __asm { AND R8D,0x3 }
    /* +0x75e48a */ __asm { CMP R8D,0x2 }
    /* +0x75e48e */ __asm { JNC 0x7fffa4ece76f }
    /* +0x75e494 */ __asm { CMP R8D,0x1 }
    /* +0x75e498 */ __asm { JNZ 0x7fffa4eceda9 }
    /* +0x75e49e */ __asm { MOV RCX,-0x50287425ca867adb }
    /* +0x75e4a8 */ __asm { LEA R10,[0x7fffa47b8509] }
    /* +0x75e4af */ __asm { XOR RCX,R10 }
    /* +0x75e4b2 */ __asm { CMP RCX,0x744f3be }
    /* +0x75e4b9 */ __asm { JZ 0x7fffa4ecefd4 }
    /* +0x75e4bf */ __asm { MOV R11D,0x5db34029 }
    /* +0x75e4c5 */ __asm { IMUL R11D,R11D,-0x1c9dc4a1 }
    /* +0x75e4cc */ __asm { MOVQ XMM1,R10 }
    /* +0x75e4d1 */ __asm { MOVD XMM2,R11D }
    /* +0x75e4d6 */ __asm { PADDQ XMM2,XMM1 }
    /* +0x75e4da */ __asm { MOVQ RCX,XMM2 }
    /* +0x75e4df */ __asm { MOVZX R10D,uint8_t ptr [RCX + 0x9] }
    /* +0x75e4e4 */ __asm { MOVZX R8D,uint8_t ptr [RCX + R10*0x4 + 0xf] }
    /* +0x75e4ea */ __asm { NOT R8B }
    /* +0x75e4ed */ __asm { ROL R8B,0x5 }
    /* +0x75e4f1 */ __asm { MOV uint8_t ptr [RSP + 0xd0],R8B }
    /* +0x75e4f9 */ __asm { MOVZX R8D,uint8_t ptr [RCX + R10*0x4 + 0x10] }
    /* +0x75e4ff */ __asm { NOT R8B }
    /* +0x75e502 */ __asm { ROL R8B,0x5 }
    /* +0x75e506 */ __asm { MOV uint8_t ptr [RSP + 0xd1],R8B }
    /* +0x75e50e */ __asm { MOVZX R8D,uint8_t ptr [RCX + R10*0x4 + 0x11] }
    /* +0x75e514 */ __asm { NOT R8B }
    /* +0x75e517 */ __asm { ROL R8B,0x5 }
    /* +0x75e51b */ __asm { MOV uint8_t ptr [RSP + 0xd2],R8B }
    /* +0x75e523 */ __asm { MOVZX R8D,uint8_t ptr [RCX + R10*0x4 + 0x12] }
    /* +0x75e529 */ __asm { NOT R8B }
    /* +0x75e52c */ __asm { ROL R8B,0x5 }
    /* +0x75e530 */ __asm { MOV uint8_t ptr [RSP + 0xd3],R8B }
    /* +0x75e538 */ __asm { MOV R11D,0x9102c3cc }
    /* +0x75e53e */ __asm { XOR R11D,dword ptr [RSP + 0xd0] }
    /* +0x75e546 */ __asm { BT R11D,R11D }
    /* +0x75e54a */ __asm { JNC 0x7fffa4ecee21 }
    /* +0x75e550 */ __asm { RDTSC }
    /* +0x75e552 */ __asm { SHL RDX,0x20 }
    /* +0x75e556 */ __asm { OR RDX,RAX }
    /* +0x75e559 */ __asm { MOV RCX,-0x6bdeac2e46be109b }
    /* +0x75e563 */ __asm { IMUL RCX,RDX }
    /* +0x75e567 */ __asm { MOV R11D,0x5f610ab2 }
    /* +0x75e56d */ __asm { IMUL R11D,R11D,0x50f873d5 }
    /* +0x75e574 */ __asm { MOV R8,-0x62d533ca6d67c74e }
    /* +0x75e57e */ __asm { ADD R8,RCX }
    /* +0x75e581 */ __asm { MOV RCX,R8 }
    /* +0x75e584 */ __asm { SHR RCX,0x3b }
    /* +0x75e588 */ __asm { MOV RDX,R8 }
    /* +0x75e58b */ __asm { SHR RDX,0x1b }
    /* +0x75e58f */ __asm { SHR R8,0x2d }
    /* +0x75e593 */ __asm { XOR EDX,R8D }
    /* +0x75e596 */ __asm { ROR EDX,CL }
    /* +0x75e598 */ __asm { ADD R11D,0x704427e6 }
    /* +0x75e59f */ __asm { MOV dword ptr [RSP + 0xd0],R11D }
    /* +0x75e5a7 */ __asm { MOV R11D,dword ptr [RSP + 0xd0] }
    /* +0x75e5af */ __asm { CMP EDX,0x105319 }
    /* +0x75e5b5 */ __asm { JA 0x7fffa4ece72c }
    /* +0x75e5bb */ __asm { MOV R11D,0xb39ff3d7 }
    /* +0x75e5c1 */ __asm { ADD R11D,0x4d050cac }
    /* +0x75e5c8 */ __asm { MOV dword ptr [RSP + 0xd0],R11D }
    /* +0x75e5d0 */ __asm { MOV R11D,dword ptr [RSP + 0xd0] }
    /* +0x75e5d8 */ __asm { CMP R11D,0x58c7b90d }
    /* +0x75e5df */ __asm { NOP }
    /* +0x75e5e0 */ __asm { NOP }
    /* +0x75e5e1 */ __asm { NOP }
    /* +0x75e5e2 */ __asm { NOP }
    /* +0x75e5e3 */ __asm { NOP }
    /* +0x75e5e4 */ __asm { MOV RCX,0x3d8055c736ff90f3 }
    /* +0x75e5ee */ __asm { MOV R10D,0x7d497154 }
    /* +0x75e5f4 */ __asm { MOV RAX,R10 }
    /* +0x75e5f7 */ __asm { XOR RAX,RCX }
    /* +0x75e5fa */ __asm { MOV ECX,0xaa9504e2 }
    /* +0x75e5ff */ __asm { CMP RAX,RCX }
    /* +0x75e602 */ __asm { NOP }
    /* +0x75e603 */ __asm { NOP }
    /* +0x75e604 */ __asm { NOP }
    /* +0x75e605 */ __asm { NOP }
    /* +0x75e606 */ __asm { NOP }
    /* +0x75e607 */ __asm { NOP }
    /* +0x75e608 */ __asm { NOP }
    /* +0x75e609 */ __asm { NOP }
    /* +0x75e60a */ __asm { NOP }
    /* +0x75e60b */ __asm { NOP }
    /* +0x75e60c */ __asm { NOP }
    /* +0x75e60d */ __asm { NOP }
    /* +0x75e60e */ __asm { NOP }
    /* +0x75e60f */ __asm { NOP }
    /* +0x75e610 */ __asm { MOV R11W,0xafd8 }
    /* +0x75e615 */ __asm { ADD R11D,0x5028 }
    /* +0x75e61c */ __asm { MOVZX R11D,R11W }
    /* +0x75e620 */ __asm { MOV EAX,dword ptr [R10 + 0x2b490ec] }
    /* +0x75e627 */ __asm { AND EAX,0x1 }
    /* +0x75e62a */ __asm { CMP EAX,R11D }
    /* +0x75e62d */ __asm { JNZ 0x7fffa4ece72c }
    /* +0x75e633 */ __asm { PXOR XMM1,XMM1 }
    /* +0x75e637 */ __asm { MOVDQA xmmword ptr [RSP + 0xd0],XMM1 }
    /* +0x75e640 */ __asm { MOV dword ptr [RSP + 0xb0],0x43083002 }
    /* +0x75e64b */ __asm { MOV R11D,dword ptr [RSP + 0xb0] }
    /* +0x75e653 */ __asm { MOV dword ptr [RSP + 0xd0],0x0 }
    /* +0x75e65e */ __asm { MOV dword ptr [RSP + 0xb0],0xd73d1868 }
    /* +0x75e669 */ __asm { MOV R11D,dword ptr [RSP + 0xb0] }
    /* +0x75e671 */ __asm { MOV dword ptr [RSP + 0xb0],0x205aec9c }
    /* +0x75e67c */ __asm { MOV R11D,dword ptr [RSP + 0xb0] }
    /* +0x75e684 */ __asm { MOV R8D,0xafc2258 }
    /* +0x75e68a */ __asm { MOV EAX,R11D }
    /* +0x75e68d */ __asm { AND EAX,0x1 }
    /* +0x75e690 */ __asm { MOV ECX,0x2d89a813 }
    /* +0x75e695 */ __asm { XOR ECX,0x1bb4971f }
    /* +0x75e69b */ __asm { XOR R8D,0x5db78919 }
    /* +0x75e6a2 */ __asm { XOR R11D,0x1 }
    /* +0x75e6a6 */ __asm { CMP R8,RCX }
    /* +0x75e6a9 */ __asm { CMOVA R11D,EAX }
    /* +0x75e6ad */ __asm { TEST R11D,R11D }
    /* +0x75e6b0 */ __asm { JNZ 0x7fffa4ecf065 }
    /* +0x75e6b6 */ __asm { LEA RAX,[0x7fffa477fc73] }
    /* +0x75e6bd */ __asm { MOV RCX,-0x2b28af9e6b111dc2 }
    /* +0x75e6c7 */ __asm { XOR RCX,RAX }
    /* +0x75e6ca */ __asm { CMP RCX,-0x487731ba }
    /* +0x75e6d1 */ __asm { NOP }
    /* +0x75e6d2 */ __asm { NOP }
    /* +0x75e6d3 */ __asm { NOP }
    /* +0x75e6d4 */ __asm { NOP }
    /* +0x75e6d5 */ __asm { NOP }
    /* +0x75e6d6 */ __asm { NOP }
    /* +0x75e6d7 */ __asm { MOV R11W,0x76cf }
    /* +0x75e6dc */ __asm { MOV CX,0x25d0 }
    /* +0x75e6e0 */ __asm { MOV R10W,0xb11c }
    /* +0x75e6e5 */ __asm { IMUL R11D,R11D,-0x7d05 }
    /* +0x75e6ec */ __asm { ADD R11D,0x6533 }
    /* +0x75e6f3 */ __asm { IMUL R8D,R10D,-0x1f91 }
    /* +0x75e6fa */ __asm { ADD R8D,0xffffb4db }
    /* +0x75e701 */ __asm { MOVSX R10,R8W }
    /* +0x75e705 */ __asm { MOVZX EDX,R11W }
    /* +0x75e709 */ __asm { MOV qword ptr [RSP + 0xb0],R11 }
    /* +0x75e711 */ __asm { MOV EAX,dword ptr [RAX + 0x49a9] }
    /* +0x75e717 */ __asm { IMUL R11D,ECX,0x71f5 }
    /* +0x75e71e */ __asm { MOVZX R9D,R11W }
    /* +0x75e722 */ __asm { LEA R8,[RSP + 0xd0] }
    /* +0x75e72a */ __asm { SYSCALL }
    /* +0x75e72c */ __asm { LEA R10,[0x7fffa47852be] }
    /* +0x75e733 */ __asm { MOV RAX,R10 }
    /* +0x75e736 */ __asm { ROL RAX,0xb }
    /* +0x75e73a */ __asm { MOV RCX,-0x1df7dc8e1df54707 }
    /* +0x75e744 */ __asm { IMUL RCX,RAX }
    /* +0x75e748 */ __asm { MOV R11,0x669fcf2c1124fdb5 }
    /* +0x75e752 */ __asm { CMP RCX,R11 }
    /* +0x75e755 */ __asm { JZ 0x7fffa4ecf004 }
    /* +0x75e75b */ __asm { MOV qword ptr [RSP + 0xd0],RAX }
    /* +0x75e763 */ __asm { MOV EAX,dword ptr [R10 + -0x54e] }
    /* +0x75e76a */ __asm { JMP 0x7fffa4ecef65 }
    /* +0x75e76f */ __asm { MOV R11W,0x9bbf }
    /* +0x75e774 */ __asm { ADD R11D,0x6444 }
    /* +0x75e77b */ __asm { MOVZX R11D,R11W }
    /* +0x75e77f */ __asm { CMP R8D,R11D }
    /* +0x75e782 */ __asm { JNC 0x7fffa4ecedde }
    /* +0x75e788 */ __asm { LEA RAX,[0x7fffa47c047d] }
    /* +0x75e78f */ __asm { MOV RCX,-0x58450bf75b1d9796 }
    /* +0x75e799 */ __asm { CMP RAX,RCX }
    /* +0x75e79c */ __asm { JZ 0x7fffa4ecefe7 }
    /* +0x75e7a2 */ __asm { MOV R8D,0xe2fe3efe }
    /* +0x75e7a8 */ __asm { MOV R11D,0x7f57b785 }
    /* +0x75e7ae */ __asm { ADD R11D,0x8001fffc }
    /* +0x75e7b5 */ __asm { ADD R8D,0x7ffe0324 }
    /* +0x75e7bc */ __asm { MOV EDX,0xeadc0e90 }
    /* +0x75e7c1 */ __asm { MOVSXD R11,R11D }
    /* +0x75e7c4 */ __asm { MOV ECX,0x8621d42f }
    /* +0x75e7c9 */ __asm { ADD EDX,0x147da8f1 }
    /* +0x75e7cf */ __asm { MOVSXD RDX,EDX }
    /* +0x75e7d2 */ __asm { ADD ECX,0x79ea5b66 }
    /* +0x75e7d8 */ __asm { CMP RDX,R11 }
    /* +0x75e7db */ __asm { MOVZX EDX,uint8_t ptr [RAX + -0x3d34] }
    /* +0x75e7e2 */ __asm { MOVSX R11,DL }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtQuerySystemInformation  |  RVA: 0xa08210  |  Size: 2396 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtQuerySystemInformation(void) {
    /* +0xa08210 */ __asm { PUSH R14 }
    /* +0xa08212 */ __asm { PUSH RDI }
    /* +0xa08213 */ __asm { PUSH RBP }
    /* +0xa08214 */ __asm { PUSH R15 }
    /* +0xa08216 */ __asm { PUSH R13 }
    /* +0xa08218 */ __asm { PUSH RBX }
    /* +0xa08219 */ __asm { PUSH R12 }
    /* +0xa0821b */ __asm { PUSH RSI }
    /* +0xa0821c */ __asm { SUB RSP,0x68 }
    /* +0xa08220 */ __asm { MOV RBX,R9 }
    /* +0xa08223 */ __asm { MOV R15D,R8D }
    /* +0xa08226 */ __asm { MOV R13,RDX }
    /* +0xa08229 */ __asm { MOV EDI,ECX }
    /* +0xa0822b */ __asm { MOV R9,-0x214d7b1959e4ab65 }
    /* +0xa08235 */ __asm { ADD R9,qword ptr [RSP + 0xa8] }
    /* +0xa0823d */ __asm { MOV R11,-0x71e2fd71c6b78b5d }
    /* +0xa08247 */ __asm { CMP R9,R11 }
    /* +0xa0824a */ __asm { NOP }
    /* +0xa0824b */ __asm { NOP }
    /* +0xa0824c */ __asm { NOP }
    /* +0xa0824d */ __asm { NOP }
    /* +0xa0824e */ __asm { NOP }
    /* +0xa0824f */ __asm { NOP }
    /* +0xa08250 */ __asm { NOP }
    /* +0xa08251 */ __asm { NOP }
    /* +0xa08252 */ __asm { CMP EDI,0xb9 }
    /* +0xa08258 */ __asm { JNZ 0x7fffa51783e0 }
    /* +0xa0825e */ __asm { MOV R9B,0x26 }
    /* +0xa08261 */ __asm { MOV dword ptr [RSP + 0x34],EDI }
    /* +0xa08265 */ __asm { MOVZX EDI,R9B }
    /* +0xa08269 */ __asm { MOV R10D,0x3fff4582 }
    /* +0xa0826f */ __asm { MOV R12W,0x7735 }
    /* +0xa08274 */ __asm { MOV EDX,0x5749566a }
    /* +0xa08279 */ __asm { LEA R11,[0x7fffa47907d3] }
    /* +0xa08280 */ __asm { MOV qword ptr [RSP + 0x60],RBX }
    /* +0xa08285 */ __asm { LEA RBX,[0x7fffa478e9e0] }
    /* +0xa0828c */ __asm { MOV R14D,0x15395f59 }
    /* +0xa08292 */ __asm { LEA RCX,[0x7fffa4794443] }
    /* +0xa08299 */ __asm { LEA RAX,[0x7fffa4790935] }
    /* +0xa082a0 */ __asm { MOV R9D,0x1a0319ae }
    /* +0xa082a6 */ __asm { ADD R9D,0xadfce182 }
    /* +0xa082ad */ __asm { ROL R9D,0x5 }
    /* +0xa082b1 */ __asm { MOVSXD R9,R9D }
    /* +0xa082b4 */ __asm { ADD EDX,0x80b6a5c4 }
    /* +0xa082ba */ __asm { MOV dword ptr [RSP + 0x5c],R15D }
    /* +0xa082bf */ __asm { LEA R15,[0x7fffa4787fc2] }
    /* +0xa082c6 */ __asm { MOVSX RSI,R12W }
    /* +0xa082ca */ __asm { XOR RSI,-0x58fd }
    /* +0xa082d1 */ __asm { IMUL EBP,EDI,-0x65 }
    /* +0xa082d4 */ __asm { ADD R10D,0xc0000141 }
    /* +0xa082db */ __asm { LEA RDI,[0x7fffa478e955] }
    /* +0xa082e2 */ __asm { MOV qword ptr [RSP + 0x38],R13 }
    /* +0xa082e7 */ __asm { NOP }
    /* +0xa082e9 */ __asm { LEA R13,[0x7fffa4770000] }
    /* +0xa082f0 */ __asm { MOV R12,0x0 }
    /* +0xa082f7 */ __asm { MOV R12D,0xee0be23c }
    /* +0xa082fd */ __asm { LEA R13,[0x7fffa479152e] }
    /* +0xa08304 */ __asm { MOVZX R8D,uint8_t ptr [RBX + R9*0x1 + 0x10] }
    /* +0xa0830a */ __asm { ADD R14D,0xeac6074a }
    /* +0xa08311 */ __asm { MOVSXD RBX,R14D }
    /* +0xa08314 */ __asm { ADD RBX,RDI }
    /* +0xa08317 */ __asm { MOV EDI,0x2f90ce2e }
    /* +0xa0831c */ __asm { ADD EDI,0xa2bcf7d9 }
    /* +0xa08322 */ __asm { XOR R12D,0x19f6cfab }
    /* +0xa08329 */ __asm { MOVSXD R9,R12D }
    /* +0xa0832c */ __asm { MOV R14D,0x46864f3a }
    /* +0xa08332 */ __asm { MOVSXD R12,R14D }
    /* +0xa08335 */ __asm { XOR R12,-0x4686f8e1 }
    /* +0xa0833c */ __asm { IMUL R8D,R8D,0x33333334 }
    /* +0xa08343 */ __asm { ADD R8D,0x33333334 }
    /* +0xa0834a */ __asm { LEA R14,[R8 + R8*0x4] }
    /* +0xa0834e */ __asm { SHR R14,0x20 }
    /* +0xa08352 */ __asm { ROL EDX,0x6 }
    /* +0xa08355 */ __asm { ADD BPL,0xab }
    /* +0xa08359 */ __asm { MOV R8D,0x3b2d271d }
    /* +0xa0835f */ __asm { ADD R8D,0xc4d213ad }
    /* +0xa08366 */ __asm { MOVSXD R8,R8D }
    /* +0xa08369 */ __asm { MOVZX R8D,uint8_t ptr [R13 + R8*0x1 + 0x39] }
    /* +0xa0836f */ __asm { MOV R13D,R8D }
    /* +0xa08372 */ __asm { OR R13B,0x8 }
    /* +0xa08376 */ __asm { XOR R8B,0x8 }
    /* +0xa0837a */ __asm { CMP RDI,R9 }
    /* +0xa0837d */ __asm { MOV EDI,dword ptr [RSP + 0x34] }
    /* +0xa08381 */ __asm { MOVZX R9D,R13B }
    /* +0xa08385 */ __asm { MOV R13,qword ptr [RSP + 0x38] }
    /* +0xa0838a */ __asm { MOVZX R8D,R8B }
    /* +0xa0838e */ __asm { CMOVNC R8D,R9D }
    /* +0xa08392 */ __asm { ROL R8B,0x1 }
    /* +0xa08395 */ __asm { MOVSXD R9,R10D }
    /* +0xa08398 */ __asm { MOV uint8_t ptr [RBX + R14*0x4 + 0x1f],R8B }
    /* +0xa0839d */ __asm { XOR BPL,uint8_t ptr [R15 + RSI*0x1 + 0x3b] }
    /* +0xa083a2 */ __asm { MOV R15D,dword ptr [RSP + 0x5c] }
    /* +0xa083a7 */ __asm { ROL BPL,0x1 }
    /* +0xa083aa */ __asm { MOV uint8_t ptr [RBX + R14*0x4 + 0x21],BPL }
    /* +0xa083af */ __asm { MOVZX R8D,uint8_t ptr [RAX + R9*0x1 + 0x38] }
    /* +0xa083b5 */ __asm { XOR R8B,0xb7 }
    /* +0xa083b9 */ __asm { ROL R8B,0x1 }
    /* +0xa083bc */ __asm { MOV uint8_t ptr [RBX + R14*0x4 + 0x1e],R8B }
    /* +0xa083c1 */ __asm { MOVZX R8D,uint8_t ptr [R11 + R12*0x1 + 0x3a] }
    /* +0xa083c7 */ __asm { XOR R8B,0xe0 }
    /* +0xa083cb */ __asm { ROL R8B,0x1 }
    /* +0xa083ce */ __asm { MOV uint8_t ptr [RBX + R14*0x4 + 0x20],R8B }
    /* +0xa083d3 */ __asm { MOV RBX,qword ptr [RSP + 0x60] }
    /* +0xa083d8 */ __asm { MOVSXD R11,EDX }
    /* +0xa083db */ __asm { MOV uint8_t ptr [RCX + R11*0x1 + 0x10],R14B }
    /* +0xa083e0 */ __asm { RDTSC }
    /* +0xa083e2 */ __asm { SHL RDX,0x20 }
    /* +0xa083e6 */ __asm { OR RDX,RAX }
    /* +0xa083e9 */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xa083f3 */ __asm { IMUL R9,RDX }
    /* +0xa083f7 */ __asm { MOV R8,-0x22b18422c4a9c65e }
    /* +0xa08401 */ __asm { ADD R8,R9 }
    /* +0xa08404 */ __asm { MOV RCX,R8 }
    /* +0xa08407 */ __asm { SHR RCX,0x3b }
    /* +0xa0840b */ __asm { MOV RAX,R8 }
    /* +0xa0840e */ __asm { SHR RAX,0x2d }
    /* +0xa08412 */ __asm { SHR R8,0x1b }
    /* +0xa08416 */ __asm { XOR EAX,R8D }
    /* +0xa08419 */ __asm { ROR EAX,CL }
    /* +0xa0841b */ __asm { AND EAX,0x3 }
    /* +0xa0841e */ __asm { CMP EAX,0x2 }
    /* +0xa08421 */ __asm { JC 0x7fffa51784b8 }
    /* +0xa08427 */ __asm { CMP EAX,0x3 }
    /* +0xa0842a */ __asm { JZ 0x7fffa51786b3 }
    /* +0xa08430 */ __asm { MOV R9D,0x259c988e }
    /* +0xa08436 */ __asm { MOV R11,-0x20cccfc16b27d7ac }
    /* +0xa08440 */ __asm { CMP R9,R11 }
    /* +0xa08443 */ __asm { NOP }
    /* +0xa08444 */ __asm { NOP }
    /* +0xa08445 */ __asm { NOP }
    /* +0xa08446 */ __asm { NOP }
    /* +0xa08447 */ __asm { NOP }
    /* +0xa08448 */ __asm { NOP }
    /* +0xa08449 */ __asm { NOP }
    /* +0xa0844a */ __asm { NOP }
    /* +0xa0844b */ __asm { NOP }
    /* +0xa0844c */ __asm { NOP }
    /* +0xa0844d */ __asm { NOP }
    /* +0xa0844e */ __asm { NOP }
    /* +0xa0844f */ __asm { NOP }
    /* +0xa08450 */ __asm { NOP }
    /* +0xa08451 */ __asm { NOP }
    /* +0xa08452 */ __asm { NOP }
    /* +0xa08453 */ __asm { NOP }
    /* +0xa084b8 */ __asm { CMP EAX,0x1 }
    /* +0xa084bb */ __asm { JZ 0x7fffa517873b }
    /* +0xa084c1 */ __asm { LEA R11,[0x7fffa47b680b] }
    /* +0xa084c8 */ __asm { MOV R9,0x2b6a53ccaa69322d }
    /* +0xa084d2 */ __asm { CMP R11,R9 }
    /* +0xa084d5 */ __asm { NOP }
    /* +0xa084d6 */ __asm { NOP }
    /* +0xa084d7 */ __asm { NOP }
    /* +0xa084d8 */ __asm { NOP }
    /* +0xa084d9 */ __asm { NOP }
    /* +0xa084da */ __asm { MOV EAX,0x98256631 }
    /* +0xa084df */ __asm { MOV EDX,0xae0f67fe }
    /* +0xa084e4 */ __asm { ADD EAX,0xaa70e740 }
    /* +0xa084e9 */ __asm { IMUL R8D,EDX,-0x315f8c2d }
    /* +0xa084f0 */ __asm { MOVSX RDX,uint8_t ptr [R11 + 0x5f3e] }
    /* +0xa084f8 */ __asm { CMP R8,RAX }
    /* +0xa084fb */ __asm { MOVZX R9D,DL }
    /* +0xa084ff */ __asm { CMOVBE R9,RDX }
    /* +0xa08503 */ __asm { MOVZX R8D,uint8_t ptr [R11 + R9*0x4 + 0x5f44] }
    /* +0xa0850c */ __asm { NOT R8B }
    /* +0xa0850f */ __asm { ROL R8B,0x5 }
    /* +0xa08513 */ __asm { MOV uint8_t ptr [RSP + 0x40],R8B }
    /* +0xa08518 */ __asm { MOVZX R8D,uint8_t ptr [R11 + R9*0x4 + 0x5f45] }
    /* +0xa08521 */ __asm { NOT R8B }
    /* +0xa08524 */ __asm { ROL R8B,0x5 }
    /* +0xa08528 */ __asm { MOV uint8_t ptr [RSP + 0x41],R8B }
    /* +0xa0852d */ __asm { MOVZX R8D,uint8_t ptr [R11 + R9*0x4 + 0x5f46] }
    /* +0xa08536 */ __asm { NOT R8B }
    /* +0xa08539 */ __asm { ROL R8B,0x5 }
    /* +0xa0853d */ __asm { MOV uint8_t ptr [RSP + 0x42],R8B }
    /* +0xa08542 */ __asm { MOVZX R8D,uint8_t ptr [R11 + R9*0x4 + 0x5f47] }
    /* +0xa0854b */ __asm { NOT R8B }
    /* +0xa0854e */ __asm { ROL R8B,0x5 }
    /* +0xa08552 */ __asm { MOV uint8_t ptr [RSP + 0x43],R8B }
    /* +0xa08557 */ __asm { MOV EDX,0x9102c3cc }
    /* +0xa0855c */ __asm { XOR EDX,dword ptr [RSP + 0x40] }
    /* +0xa08560 */ __asm { BT EDX,EDX }
    /* +0xa08563 */ __asm { JNC 0x7fffa51789c4 }
    /* +0xa08569 */ __asm { RDTSC }
    /* +0xa0856b */ __asm { SHL RDX,0x20 }
    /* +0xa0856f */ __asm { OR RDX,RAX }
    /* +0xa08572 */ __asm { MOV R9,-0x4a9b10dd1385131b }
    /* +0xa0857c */ __asm { IMUL R9,RDX }
    /* +0xa08580 */ __asm { MOV RCX,0xac52be42e334ab6 }
    /* +0xa0858a */ __asm { ADD RCX,R9 }
    /* +0xa0858d */ __asm { MOV RAX,RCX }
    /* +0xa08590 */ __asm { SHR RAX,0x2d }
    /* +0xa08594 */ __asm { MOV R8,RCX }
    /* +0xa08597 */ __asm { SHR R8,0x1b }
    /* +0xa0859b */ __asm { XOR EAX,R8D }
    /* +0xa0859e */ __asm { SHR RCX,0x3b }
    /* +0xa085a2 */ __asm { ROR EAX,CL }
    /* +0xa085a4 */ __asm { MOV dword ptr [RSP + 0x40],0xb9ca5b80 }
    /* +0xa085ac */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xa085b0 */ __asm { CMP EAX,0x434afcd }
    /* +0xa085b5 */ __asm { JA 0x7fffa5178688 }
    /* +0xa085bb */ __asm { MOV EDX,0xda5fa00f }
    /* +0xa085c0 */ __asm { MOV R8D,0xe83b4472 }
    /* +0xa085c6 */ __asm { SUB R8D,EDX }
    /* +0xa085c9 */ __asm { MOV dword ptr [RSP + 0x40],R8D }
    /* +0xa085ce */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xa085d2 */ __asm { XORPS XMM1,XMM1 }
    /* +0xa085d5 */ __asm { MOVAPS xmmword ptr [RSP + 0x40],XMM1 }
    /* +0xa085da */ __asm { MOV dword ptr [RSP + 0x50],0x7fd7dfef }
    /* +0xa085e2 */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xa085e6 */ __asm { TEST DL,0x1 }
    /* +0xa085e9 */ __asm { NOP }
    /* +0xa085ea */ __asm { NOP }
    /* +0xa085eb */ __asm { NOP }
    /* +0xa085ec */ __asm { NOP }
    /* +0xa085ed */ __asm { NOP }
    /* +0xa085ee */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xa085f6 */ __asm { MOV dword ptr [RSP + 0x50],0x32bea167 }
    /* +0xa085fe */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xa08602 */ __asm { MOV dword ptr [RSP + 0x50],0xfbfdfb9b }
    /* +0xa0860a */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xa0860e */ __asm { LEA RAX,[0x7fffa4789fa3] }
    /* +0xa08615 */ __asm { MOV R9,-0x3c493246dd440bfc }
    /* +0xa0861f */ __asm { CMP RAX,R9 }
    /* +0xa08622 */ __asm { JNZ 0x7fffa5178631 }
    /* +0xa08624 */ __asm { ADC uint8_t ptr [RSI + -0x7e901f9e],DL }
    /* +0xa0862a */ __asm { RET }
    /* +0xa08631 */ __asm { MOV EDX,0xa00f0efe }
    /* +0xa08636 */ __asm { MOV R8W,0x8275 }
    /* +0xa0863b */ __asm { IMUL R8D,R8D,0x7c9d }
    /* +0xa08642 */ __asm { MOVSX R9,R8W }
    /* +0xa08646 */ __asm { MOV qword ptr [RSP + 0x50],R8 }
    /* +0xa0864b */ __asm { MOV EAX,dword ptr [R9 + RAX*0x1 + 0x128] }
    /* +0xa08653 */ __asm { IMUL R8D,EDX,-0x263eb09b }
    /* +0xa0865a */ __asm { MOV R11W,0xf7c9 }
    /* +0xa0865f */ __asm { ADD R11D,0x847 }
    /* +0xa08666 */ __asm { MOV DX,0xb95e }
    /* +0xa0866a */ __asm { ADD EDX,0x46ca }
    /* +0xa08670 */ __asm { MOVZX EDX,DX }
    /* +0xa08673 */ __asm { ADD R8D,0x98f0b3c9 }
    /* +0xa0867a */ __asm { MOVSXD R10,R8D }
    /* +0xa0867d */ __asm { MOVZX R9D,R11W }
    /* +0xa08681 */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xa08686 */ __asm { SYSCALL }
    /* +0xa08688 */ __asm { LEA R9,[0x7fffa4780e34] }
    /* +0xa0868f */ __asm { MOV R11,0x1fa17a5cf842a7b9 }
    /* +0xa08699 */ __asm { CMP R9,R11 }
    /* +0xa0869c */ __asm { JZ 0x7fffa5178cb1 }
    /* +0xa086a2 */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0xa086a7 */ __asm { MOV EAX,dword ptr [R9 + 0x3794] }
    /* +0xa086ae */ __asm { JMP 0x7fffa5178c6a }
    /* +0xa086b3 */ __asm { MOV EAX,0x71b7fdf3 }
    /* +0xa086b8 */ __asm { MOV R9,RAX }
    /* +0xa086bb */ __asm { NOT R9 }
    /* +0xa086be */ __asm { ROL R9,0x3a }
    /* +0xa086c2 */ __asm { MOV R11,0xdf9086876349a09 }
    /* +0xa086cc */ __asm { IMUL R11,R9 }
    /* +0xa086d0 */ __asm { MOV R9,0x7af8b6022d2dc38f }
    /* +0xa086da */ __asm { CMP R11,R9 }
    /* +0xa086dd */ __asm { NOP }
    /* +0xa086de */ __asm { NOP }
    /* +0xa086df */ __asm { NOP }
    /* +0xa086e0 */ __asm { NOP }
    /* +0xa086e1 */ __asm { NOP }
    /* +0xa086e2 */ __asm { MOV R8D,0xcce4432f }
    /* +0xa086e8 */ __asm { MOV R9D,0xc2a24122 }
    /* +0xa086ee */ __asm { XOR R9,R8 }
    /* +0xa086f1 */ __asm { TEST uint8_t ptr [R9 + RAX*0x1 + 0x240],0x1 }
    /* +0xa086fa */ __asm { JZ 0x7fffa517899a }
    /* +0xa08700 */ __asm { LEA R9,[0x7fffa47bc6f9] }
    /* +0xa08707 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xa0870e */ __asm { NOP }
    /* +0xa08710 */ __asm { MOV R8,0x0 }
    /* +0xa08717 */ __asm { MOV R8,-0x702a5dee0b4c3e1a }
    /* +0xa08721 */ __asm { CMP R9,R8 }
    /* +0xa08724 */ __asm { JZ 0x7fffa5178cc4 }
    /* +0xa0872a */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0xa0872f */ __asm { MOV EAX,dword ptr [R9 + -0x199] }
    /* +0xa08736 */ __asm { JMP 0x7fffa5178c6a }
    /* +0xa0873b */ __asm { MOV EAX,0xe7edc589 }
    /* +0xa08740 */ __asm { XOR EAX,0x4244e2d4 }
    /* +0xa08745 */ __asm { ADD EAX,0x6e37cd03 }
    /* +0xa0874a */ __asm { MOV R9D,0x8c4f4bfc }
    /* +0xa08750 */ __asm { MOV R8,R9 }
    /* +0xa08753 */ __asm { XOR R8,0x16cff5be }
    /* +0xa0875a */ __asm { SUB R8,RAX }
    /* +0xa0875d */ __asm { MOV R11,0x36dc343171fd62b6 }
    /* +0xa08767 */ __asm { CMP R8,R11 }
    /* +0xa0876a */ __asm { JZ 0x7fffa51789fe }
    /* +0xa08770 */ __asm { TEST uint8_t ptr [R9 + -0xc5149bc],0x1 }
    /* +0xa08778 */ __asm { JZ 0x7fffa5178a0d }
    /* +0xa0877e */ __asm { MOV R11,-0x47792372798b5986 }
    /* +0xa08788 */ __asm { LEA R9,[0x7fffa47bf0d6] }
    /* +0xa0878f */ __asm { IMUL R11,R11,-0x559f99d3 }
    /* +0xa08796 */ __asm { MOV R8,0x1e996e3bd58393cb }
    /* +0xa087a0 */ __asm { ADD R8,R11 }
    /* +0xa087a3 */ __asm { CMP R9,R8 }
    /* +0xa087a6 */ __asm { JZ 0x7fffa5178ccc }
    /* +0xa087ac */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0xa087b1 */ __asm { MOV EAX,dword ptr [R9 + -0x2b76] }
    /* +0xa087b8 */ __asm { JMP 0x7fffa5178c6a }
    /* +0xa088a3 */ __asm { NOP }
    /* +0xa088a5 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xa088ac */ __asm { MOV R9,0x0 }
    /* +0xa088b3 */ __asm { MOV dword ptr [RSP + 0x50],0xffbddfff }
    /* +0xa088bb */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xa088bf */ __asm { LEA R8,[0x7fffa47b7707] }
    /* +0xa088c6 */ __asm { MOV R9,0x7e50a80472e96686 }
    /* +0xa088d0 */ __asm { CMP R8,R9 }
    /* +0xa088d3 */ __asm { JZ 0x7fffa5178ce3 }
    /* +0xa088d9 */ __asm { MOV R11W,0xce70 }
    /* +0xa088de */ __asm { MOV R10D,0x50f7a213 }
    /* +0xa088e4 */ __asm { XOR R10D,0x5d842f6b }
    /* +0xa088eb */ __asm { ROL R10D,0x7 }
    /* +0xa088ef */ __asm { MOV EAX,0xc162619f }
    /* +0xa088f4 */ __asm { XOR EAX,0x1f3ffd24 }
    /* +0xa088f9 */ __asm { MOV qword ptr [RSP + 0x50],R9 }
    /* +0xa088fe */ __asm { MOV DX,0xb8b0 }
    /* +0xa08902 */ __asm { ADD EDX,0x4778 }
    /* +0xa08908 */ __asm { MOVZX EDX,DX }
    /* +0xa0890b */ __asm { IMUL R11D,R11D,-0x4929 }
    /* +0xa08912 */ __asm { MOVZX R9D,R11W }
    /* +0xa08916 */ __asm { MOVSXD R11,R10D }
    /* +0xa08919 */ __asm { LEA RCX,[R8 + -0x4d4d] }
    /* +0xa08920 */ __asm { ADD R8,0x4d4d }
    /* +0xa08927 */ __asm { CMP R11,RAX }
    /* +0xa0892a */ __asm { CMOVG R8,RCX }
    /* +0xa0892e */ __asm { MOV EAX,dword ptr [R8 + 0x74] }
    /* +0xa08932 */ __asm { MOV R8D,0xe901a707 }
    /* +0xa08938 */ __asm { ADD R8D,0x16fe58f8 }
    /* +0xa0893f */ __asm { MOVSXD R10,R8D }
    /* +0xa08942 */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xa08947 */ __asm { SYSCALL }
    /* +0xa08949 */ __asm { LEA R11,[0x7fffa477e971] }
    /* +0xa08950 */ __asm { MOV R9,-0x347de93ec7561946 }
    /* +0xa0895a */ __asm { XOR R9,0x498cc6cc }
    /* +0xa08961 */ __asm { MOV R8,R11 }
    /* +0xa08964 */ __asm { ROL R8,0x5 }
    /* +0xa08968 */ __asm { IMUL R9,R9,-0x74435343 }
    /* +0xa0896f */ __asm { ADD R8,-0x1f346f5d }
    /* +0xa08976 */ __asm { CMP R9,R8 }
    /* +0xa08979 */ __asm { NOP }
    /* +0xa0897a */ __asm { NOP }
    /* +0xa0897b */ __asm { NOP }
    /* +0xa0897c */ __asm { NOP }
    /* +0xa0897d */ __asm { NOP }
    /* +0xa0897e */ __asm { NOP }
    /* +0xa0897f */ __asm { NOP }
    /* +0xa08980 */ __asm { NOP }
    /* +0xa08981 */ __asm { NOP }
    /* +0xa08982 */ __asm { NOP }
    /* +0xa08983 */ __asm { NOP }
    /* +0xa08984 */ __asm { NOP }
    /* +0xa08985 */ __asm { NOP }
    /* +0xa08986 */ __asm { NOP }
    /* +0xa08987 */ __asm { NOP }
    /* +0xa08988 */ __asm { NOP }
    /* +0xa08989 */ __asm { MOV qword ptr [RSP + 0x40],R9 }
    /* +0xa0898e */ __asm { MOV EAX,dword ptr [R11 + 0x641f] }
    /* +0xa08995 */ __asm { JMP 0x7fffa5178c6a }
    /* +0xa0899a */ __asm { LEA R9,[0x7fffa47be700] }
    /* +0xa089a1 */ __asm { MOV R11,-0x410b81feeee76fc8 }
    /* +0xa089ab */ __asm { CMP R9,R11 }
    /* +0xa089ae */ __asm { NOP }
    /* +0xa089af */ __asm { NOP }
    /* +0xa089b0 */ __asm { NOP }
    /* +0xa089b1 */ __asm { NOP }
    /* +0xa089b2 */ __asm { NOP }
    /* +0xa089b3 */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0xa089b8 */ __asm { MOV EAX,dword ptr [R9 + -0x21a0] }
    /* +0xa089bf */ __asm { JMP 0x7fffa5178c6a }
    /* +0xa089c4 */ __asm { LEA R9,[0x7fffa47b532c] }
    /* +0xa089cb */ __asm { MOV R11,0x6b419ba6064075c5 }
    /* +0xa089d5 */ __asm { CMP R9,R11 }
    /* +0xa089d8 */ __asm { NOP }
    /* +0xa089d9 */ __asm { NOP }
    /* +0xa089da */ __asm { NOP }
    /* +0xa089db */ __asm { NOP }
    /* +0xa089dc */ __asm { NOP }
    /* +0xa089dd */ __asm { NOP }
    /* +0xa089de */ __asm { NOP }
    /* +0xa089df */ __asm { NOP }
    /* +0xa089e0 */ __asm { NOP }
    /* +0xa089e1 */ __asm { NOP }
    /* +0xa089e2 */ __asm { NOP }
    /* +0xa089e3 */ __asm { NOP }
    /* +0xa089e4 */ __asm { NOP }
    /* +0xa089e5 */ __asm { NOP }
    /* +0xa089e6 */ __asm { NOP }
    /* +0xa089e7 */ __asm { NOP }
    /* +0xa089e8 */ __asm { NOP }
    /* +0xa08a0d */ __asm { MOV DX,0x8be3 }
    /* +0xa08a11 */ __asm { ADD EDX,0xffffa41d }
    /* +0xa08a17 */ __asm { ROL DX,0x9 }
    /* +0xa08a1b */ __asm { MOVZX R9D,DX }
    /* +0xa08a1f */ __asm { RDTSC }
    /* +0xa08a21 */ __asm { SHL RDX,0x20 }
    /* +0xa08a25 */ __asm { OR RDX,RAX }
    /* +0xa08a28 */ __asm { MOV R11,0x5851f42d4c957f2d }
    /* +0xa08a32 */ __asm { IMUL R11,RDX }
    /* +0xa08a36 */ __asm { MOV R8,-0x5ebf39a18fcb2f0e }
    /* +0xa08a40 */ __asm { ADD R8,R11 }
    /* +0xa08a43 */ __asm { MOV RCX,R8 }
    /* +0xa08a46 */ __asm { SHR RCX,0x3b }
    /* +0xa08a4a */ __asm { MOV RAX,R8 }
    /* +0xa08a4d */ __asm { SHR RAX,0x1b }
    /* +0xa08a51 */ __asm { SHR R8,0x2d }
    /* +0xa08a55 */ __asm { XOR EAX,R8D }
    /* +0xa08a58 */ __asm { ROR EAX,CL }
    /* +0xa08a5a */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0xa08a5e */ __asm { MOV DX,0x65ac }
    /* +0xa08a62 */ __asm { IMUL EDX,EDX,-0x5109 }
    /* +0xa08a68 */ __asm { ADD EDX,0xffffff6c }
    /* +0xa08a6e */ __asm { MOVZX R8D,DX }
    /* +0xa08a72 */ __asm { MOV R11,-0x6ea48ac6 }
    /* +0xa08a79 */ __asm { SUB R11,qword ptr [R9 + 0x648] }
    /* +0xa08a80 */ __asm { MOV R9,qword ptr GS:[R8] }
    /* +0xa08a84 */ __asm { MOV R9,-0x273d225a4803e32f }
    /* +0xa08a8e */ __asm { CMP R11,R9 }
    /* +0xa08a91 */ __asm { JZ 0x7fffa5178c89 }
    /* +0xa08a97 */ __asm { CMP EAX,0x10b2c6a }
    /* +0xa08a9c */ __asm { JA 0x7fffa5178c38 }
    /* +0xa08aa2 */ __asm { MOV dword ptr [RSP + 0x40],0x1a43664 }
    /* +0xa08aaa */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xa08aae */ __asm { MOV R9D,0x77b562e7 }
    /* +0xa08ab4 */ __asm { MOV R11D,0xb0fd85d4 }
    /* +0xa08aba */ __asm { ADD R11,R9 }
    /* +0xa08abd */ __asm { ROL R11,0x18 }
    /* +0xa08ac1 */ __asm { XOR R11,0x3a7b58ff }
    /* +0xa08ac8 */ __asm { MOV R8,-0x4aa840bf88dde012 }
    /* +0xa08ad2 */ __asm { CMP R11,R8 }
    /* +0xa08ad5 */ __asm { NOP }
    /* +0xa08ad6 */ __asm { NOP }
    /* +0xa08ad7 */ __asm { NOP }
    /* +0xa08ad8 */ __asm { NOP }
    /* +0xa08ad9 */ __asm { NOP }
    /* +0xa08ada */ __asm { MOV EDX,0xdacca165 }
    /* +0xa08adf */ __asm { IMUL R11D,EDX,-0x3113b45b }
    /* +0xa08ae6 */ __asm { MOV R11,qword ptr [R9 + R11*0x1 + 0x8] }
    /* +0xa08aeb */ __asm { MOV R9,0x8843bb26eb357a0 }
    /* +0xa08af5 */ __asm { MOV RAX,R11 }
    /* +0xa08af8 */ __asm { MUL R9 }
    /* +0xa08afb */ __asm { MOV RCX,RDX }
    /* +0xa08afe */ __asm { MOV R9D,0x1463ea8 }
    /* +0xa08b04 */ __asm { MOV RAX,R11 }
    /* +0xa08b07 */ __asm { MUL R9 }
    /* +0xa08b0a */ __asm { ADD RAX,RCX }
    /* +0xa08b0d */ __asm { ADC RDX,0x0 }
    /* +0xa08b11 */ __asm { TEST DL,0x1 }
    /* +0xa08b14 */ __asm { JZ 0x7fffa5178c38 }
    /* +0xa08b1a */ __asm { XORPS XMM1,XMM1 }
    /* +0xa08b1d */ __asm { MOVAPS xmmword ptr [RSP + 0x40],XMM1 }
    /* +0xa08b22 */ __asm { MOV dword ptr [RSP + 0x50],0x7846f9bc }
    /* +0xa08b2a */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xa08b2e */ __asm { MOV R8W,0xb911 }
    /* +0xa08b33 */ __asm { XOR R8D,0xb911 }
    /* +0xa08b3a */ __asm { MOVZX R8D,R8W }
    /* +0xa08b3e */ __asm { AND EDX,0x1 }
    /* +0xa08b41 */ __asm { CMP EDX,R8D }
    /* +0xa08b44 */ __asm { JNZ 0x7fffa5178ceb }
    /* +0xa08b4a */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xa08b52 */ __asm { MOV dword ptr [RSP + 0x50],0x404b9802 }
    /* +0xa08b5a */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xa08b5e */ __asm { CMP EDX,0x993606cb }
    /* +0xa08b64 */ __asm { NOP }
    /* +0xa08b65 */ __asm { NOP }
    /* +0xa08b66 */ __asm { NOP }
    /* +0xa08b67 */ __asm { NOP }
    /* +0xa08b68 */ __asm { NOP }
    /* +0xa08b69 */ __asm { MOV dword ptr [RSP + 0x50],0x7ff7bfdf }
    /* +0xa08b71 */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xa08b75 */ __asm { CMP EDX,0x14490780 }
    /* +0xa08b7b */ __asm { NOP }
    /* +0xa08b7c */ __asm { NOP }
    /* +0xa08b7d */ __asm { NOP }
    /* +0xa08b7e */ __asm { NOP }
    /* +0xa08b7f */ __asm { NOP }
    /* +0xa08b80 */ __asm { NOP }
    /* +0xa08b81 */ __asm { NOP }
    /* +0xa08b82 */ __asm { NOP }
    /* +0xa08b83 */ __asm { NOP }
    /* +0xa08b84 */ __asm { NOP }
    /* +0xa08b85 */ __asm { NOP }
    /* +0xa08b86 */ __asm { NOP }
    /* +0xa08b87 */ __asm { PUSHFQ }
    /* +0xa08b88 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xa08b90 */ __asm { POPFQ }
    /* +0xa08b91 */ __asm { LEA R8,[0x7fffa47b7d18] }
    /* +0xa08b98 */ __asm { MOV R9,R8 }
    /* +0xa08b9b */ __asm { ROL R9,0x2a }
    /* +0xa08b9f */ __asm { MOV R11,-0x34acd36ef2b6fe33 }
    /* +0xa08ba9 */ __asm { IMUL R11,R9 }
    /* +0xa08bad */ __asm { MOV R9,-0x4344c7a2edeaa3e5 }
    /* +0xa08bb7 */ __asm { CMP R11,R9 }
    /* +0xa08bba */ __asm { JNZ 0x7fffa5178bc3 }
    /* +0xa08bbc */ __asm { IDIV uint8_t ptr [R11 + 0x44ba61da] }
    /* +0xa08bc3 */ __asm { MOV EDX,0x211f3603 }
    /* +0xa08bc8 */ __asm { IMUL R11D,EDX,0x2d05b55 }
    /* +0xa08bcf */ __asm { MOV DX,0x3446 }
    /* +0xa08bd3 */ __asm { XOR EDX,0x3456 }
    /* +0xa08bd9 */ __asm { MOV qword ptr [RSP + 0x50],R9 }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtCreateThreadEx  |  RVA: 0xa0ca40  |  Size: 4885 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa517dd50) overlaps instruction at (ram,0x7fffa517dd4d)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa517cc12) */
/* WARNING: Removing unreachable block (ram,0x7fffa517cef2) */
/* WARNING: Removing unreachable block (ram,0x7fffa517cd64) */
/* WARNING: Removing unreachable block (ram,0x7fffa517dd14) */

uint64_t Hook_ntdll_dll_NtCreateThreadEx
                    (int64_t param_1,uint32_t param_2,uint64_t param_3,int64_t param_4,
                    uint64_t param_5,uint64_t param_6,uint32_t param_7,uint64_t param_8,
                    uint8_t *param_9,uint64_t param_10,uint64_t param_11)

{
  uint8_t uVar1;
  int64_t *plVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  bool bVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint8_t *puVar14;
  int64_t *plVar15;
  uint8_t *unaff_RDI;
  code *pcVar16;
  int64_t lVar17;
  uint64_t uVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint32_t uVar22;
  uint64_t unaff_R15;
  uint64_t uVar23;
  uint8_t in_AF;
  bool bVar24;
  uint8_t in_TF;
  uint8_t in_IF;
  bool bVar25;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_VIF;
  uint8_t in_VIP;
  uint8_t in_ID;
  uint64_t uVar26;
  uint8_t auStack_208 [32];
  int64_t lStack_1e8;
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  int64_t lStack_188;
  int64_t lStack_180;
  uint8_t auStack_178 [40];
  uint64_t uStack_150;
  uint32_t uStack_12c;
  uint64_t uStack_120;
  uint64_t uStack_110;
  uint32_t uStack_f0;
  
  bVar25 = false;
  puVar14 = auStack_208;
  plVar15 = &lStack_188;
  lStack_180 = param_1;
  if (ProcessEnvironmentBlock != (void *)0x6b7d5d5b71d32226) {
    uStack_f0 = 0x640ec6fa;
    uStack_110 = param_3;
    lStack_188 = param_4;
    if (param_4 == -1) {
      uVar26 = *(int64_t *)((int64_t)ProcessEnvironmentBlock + 0x8c8) - 0x52c69160;
      puVar14 = auStack_208;
      if ((uVar26 * 8 | uVar26 >> 0x3d) == 0x96147d1fdb8be34b) {
        uVar1 = in(0x60);
        *unaff_RDI = uVar1;
        pcVar16 = (code *)swi(0xd5);
        (*pcVar16)(0x96147e1fdb8be72c,&ProcessEnvironmentBlock,0x96147e1fdb8be72c,
                   &IMAGE_DOS_HEADER_7fffa4770000);
        puVar14 = auStack_178;
        plVar15 = (int64_t *)0xffffffffffffffff;
      }
    }
    else {
      uStack_12c = 0x4b10b002;
      lVar17 = (param_4 << 0x3b) + param_4 + -0xf12b85cb;
      lVar9 = lVar17 << 0x3d;
      uVar6 = FUN_7fffa52cf7f0(lVar9,0x44cdc9a9,FUN_7fffa52cf7f0,lVar17 - lVar9);
      uVar6 = (uVar6 >> 1 | (uint32_t)((uVar6 & 1) != 0) << 0x1f) ^ (uVar6 << 0x16 | uVar6 >> 10) ^
              uVar6;
      uVar6 = (uVar6 << 0xc | uVar6 >> 0x14) ^ (uVar6 << 0x1e | uVar6 >> 2) ^ uVar6;
      uVar6 = (uVar6 << 0x1c | uVar6 >> 4) ^ (uVar6 << 0x18 | uVar6 >> 8) ^ uVar6;
      uVar6 = (uVar6 << 0x10 | uVar6 >> 0x10) ^ (uVar6 << 0x18 | uVar6 >> 8) ^ uVar6;
      uVar6 = (uVar6 << 0x13 | uVar6 >> 0xd) ^ (uVar6 << 0x17 | uVar6 >> 9) ^
              (uVar6 << 0x10 | uVar6 >> 0x10);
      uVar6 = (uVar6 << 0xe | uVar6 >> 0x12) ^ (uVar6 << 6 | uVar6 >> 0x1a) ^ uVar6;
      puVar14 = auStack_208;
      if (((uVar6 << 0x1c | uVar6 >> 4) ^ (uVar6 << 0xc | uVar6 >> 0x14)) != uVar6) {
        uStack_150 = param_11;
        uStack_1c0 = 0x90e36858;
        uStack_120 = 0x7fffa507fc19;
        uStack_1c8 = param_11;
        uStack_1d0 = param_10;
        uStack_1d8 = param_6;
        uStack_1e0 = param_5;
        lStack_1e8 = lStack_188;
        uVar6 = (uint32_t)param_9;
        FUN_7fffa507d970(param_7,FUN_7fffa507d970,param_8,
                         lStack_180 * 0x3e1cb69b - (lStack_180 * 0x3e1cb69b << 0x38));
        uVar6 = (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar6 << 0xb | uVar6 >> 0x15) ^ uVar6;
        uVar6 = (uVar6 << 0x1e | uVar6 >> 2) ^ (uVar6 << 0x16 | uVar6 >> 10) ^ uVar6;
        return (uint64_t)
               (((uVar6 << 0xc | uVar6 >> 0x14) ^ (uVar6 << 0x1c | uVar6 >> 4) ^ uVar6) + 0xad7ace09
               );
      }
    }
    *(uint32_t *)(plVar15 + 0x13) = 0x1f784cc7;
    unaff_RDI = (uint8_t *)0x40000;
    if ((uint8_t *)0x40000 < param_9) {
      unaff_RDI = param_9;
    }
    if (param_10 - 1 < 0x3fffff) {
      *(uint32_t *)(plVar15 + 0x13) = 0xb2bc3d04;
      uVar6 = *(uint32_t *)(plVar15 + 0x13);
      uVar7 = uVar6 + 0xc91fb108;
      bVar24 = uVar7 == 0;
      uVar19 = uVar7 & 0xff;
      bVar5 = uVar6 >= 0x36e04ef8;
      bVar25 = bVar5 && !bVar24;
      if (!bVar5 || bVar24) {
        uVar7 = uVar6 & 0xe7baeb5f;
        bVar24 = uVar7 == 0;
        uVar19 = uVar6 & 0x5f;
      }
      *(uint64_t *)(puVar14 + -8) =
           (uint64_t)(in_NT & 1) * 0x4000 |
           (uint64_t)(bVar25 && SBORROW4(uVar6,0x36e04ef8)) * 0x800 |
           (uint64_t)(in_IF & 1) * 0x200 | (uint64_t)(in_TF & 1) * 0x100 |
           (uint64_t)((int)uVar7 < 0) * 0x80 | (uint64_t)bVar24 * 0x40 |
           (uint64_t)(in_AF & 1) * 0x10 | (uint64_t)((POPCOUNT(uVar19) & 1U) == 0) * 4 |
           (uint64_t)(bVar25 && uVar6 < 0x36e04ef8) | (uint64_t)(in_ID & 1) * 0x200000 |
           (uint64_t)(in_VIP & 1) * 0x100000 | (uint64_t)(in_VIF & 1) * 0x80000 |
           (uint64_t)(in_AC & 1) * 0x40000;
      *(uint64_t *)(puVar14 + -8) = *(uint64_t *)(puVar14 + -8) & 0xfffffffffffffeff;
      uVar26 = *(uint64_t *)(puVar14 + -8);
      in_NT = (uVar26 & 0x4000) != 0;
      bVar25 = (uVar26 & 0x400) != 0;
      in_IF = (uVar26 & 0x200) != 0;
      in_TF = (uVar26 & 0x100) != 0;
      in_AF = (uVar26 & 0x10) != 0;
      in_ID = (uVar26 & 0x200000) != 0;
      in_AC = (uVar26 & 0x40000) != 0;
      in_VIP = 0;
      in_VIF = 0;
      param_10 = 0x400000;
    }
    lVar9 = plVar15[0x31];
    uVar26 = (*(uint64_t *)(lVar9 + -0x858) & 0xe74cfcfa5cce865d) + 0xf461bc72e5750789;
    *(uint64_t *)(puVar14 + -8) =
         (uint64_t)(in_NT & 1) * 0x4000 | 0x800 | (uint64_t)bVar25 * 0x400 |
         (uint64_t)(in_IF & 1) * 0x200 | (uint64_t)(in_TF & 1) * 0x100 |
         (uint64_t)((int64_t)uVar26 < 0) * 0x80 | (uint64_t)(uVar26 == 0) * 0x40 |
         (uint64_t)(in_AF & 1) * 0x10 | (uint64_t)((POPCOUNT(uVar26 & 0xff) & 1U) == 0) * 4 | 1 |
         (uint64_t)(in_ID & 1) * 0x200000 | (uint64_t)(in_VIP & 1) * 0x100000 |
         (uint64_t)(in_VIF & 1) * 0x80000 | (uint64_t)(in_AC & 1) * 0x40000;
    *(uint64_t *)(puVar14 + -8) = *(uint64_t *)(puVar14 + -8) & 0xfffffffffffffeff;
    *(uint32_t *)(plVar15 + 0x13) = 0x95355f92;
    unaff_R15 = param_10;
    if (lVar9 == 0x7aef65fc34b0cec1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  plVar15[0x19] = (uint64_t)param_2;
  *(uint32_t *)(plVar15 + 0x13) = 0x4732670;
  plVar15[-3] = 0;
  plVar15[0x20] = 0;
  *(uint8_t *)((int64_t)plVar15 + -0x19) = 0;
  uVar6 = 0xe6781aae;
  bVar25 = 0x47b9 < uRam000000007ffe0260;
  plVar15[0x15] = (int64_t)(plVar15 + 0x20);
  plVar2 = plVar15 + 0x13;
  uVar12 = (int64_t)plVar2 * 0x200 | (uint64_t)plVar2 >> 0x37;
  uVar26 = ((int64_t)plVar2 << 0x25 | (uint64_t)plVar2 >> 0x1b) ^ uVar12 ^ (uint64_t)plVar2;
  plVar15[0x16] = (int64_t)plVar15 + -0x19;
  plVar15[0x13] = (int64_t)(plVar15 + 0x3c);
  plVar15[0x14] = (int64_t)(plVar15 + -3);
  *(uint64_t *)(puVar14 + -8) = 0x7fffa517cfc0;
  (*(code *)&UNK_7fffa51a5df0)(plVar15 + 0x3c,uVar12,plVar2,uVar26 >> 0x20 ^ uVar26 ^ 0x38c2f7c3);
  plVar15[0x1f] = (int64_t)unaff_RDI;
  *(uint8_t (*) [16])(plVar15 + 0x22) = (uint8_t  [16])0x0;
  plVar15[0x24] = 0;
  plVar15[0x18] = (uint64_t)*(uint8_t *)((int64_t)plVar15 + -0x19);
  plVar15[7] = -0x1987e552;
  if ((uint64_t)*(uint8_t *)((int64_t)plVar15 + -0x19) == 0) {
    lVar9 = plVar15[-3];
    *(uint64_t *)(puVar14 + -8) = 0x7fffa517d05c;
    FUN_7fffa52d1830((uint64_t)(plVar15 + 0x22) >> 0x22 ^ (uint64_t)(plVar15 + 0x22));
    bVar4 = (uint8_t)plVar15[7] & 0x1f;
    uVar6 = (uint32_t)plVar15[7];
    if ((0x7d4b9cdeU >> bVar4 | 0x7d4b9cde << 0x20 - bVar4) * 0x79fb107b < (uVar6 | 1) * 0x1a95db28)
    {
      plVar2 = (int64_t *)plVar15[0x22];
      plVar2[4] = 0;
      *plVar2 = lVar9 + 0x28;
      plVar2[3] = (int64_t)(plVar15 + 0x1a);
      plVar2[2] = 0x10;
      plVar2[1] = 0x10003;
    }
    else {
      *(uint8_t (*) [16])(plVar15 + 0x1a) = (uint8_t  [16])0x0;
      plVar2 = (int64_t *)plVar15[0x22];
      plVar2[3] = (int64_t)(plVar15 + 0x1a);
      plVar2[2] = 0x10;
      plVar2[4] = 0;
      plVar15[0x1d] = (int64_t)plVar2;
      *plVar2 = lVar9 + 0x28;
      plVar2[1] = 0x10003;
    }
    plVar15[0x14] = (int64_t)(plVar15 + 0x1d);
    plVar15[0x13] = (int64_t)(plVar15 + 0x20);
    plVar15[0x15] = (int64_t)(plVar15 + -3);
    *(uint64_t *)(puVar14 + -8) = 0x7fffa517d15c;
    (*(code *)(&UNK_7fffa56b0baa + (int)(0xfe089b66 - uVar6 ^ 0xe86f93ee)))(plVar15 + 0x13);
    plVar15[0x3c] = plVar15[0x1d];
    uVar6 = (uint32_t)plVar15[7];
  }
  *(uint32_t *)((int64_t)plVar15 + 0x74) = (uint32_t)bVar25 << 6 | *(uint32_t *)(plVar15 + 0x38) | 4;
  plVar15[0x10] = (int64_t)&UNK_7fffa54357d8;
  plVar15[0xc] = (uint64_t)(0x8570494d - uVar6);
  plVar15[0xd] = 0x82338e5f;
  plVar15[6] = 0x76f4a58;
  plVar15[-6] = lRam00007fffa4784d50;
  plVar15[-1] = 0x83c1e352;
  bVar4 = (uint8_t)uVar6 & 0x1f;
  plVar15[8] = (int64_t)FUN_7fffa4f69550;
  plVar15[0x17] = (uint64_t)((uVar6 | 1) * 0x36fb7987 + 0x8ab2553d);
  uVar22 = (uint32_t)uRam00007fffa4784d58;
  plVar15[0x21] = (uint64_t)(uVar22 << 0x18 & (0x30000 << bVar4 | 0x30000U >> 0x20 - bVar4));
  plVar15[5] = (uRam00007fffa4784d58 & 0x400000000) << 5;
  plVar15[0x25] = uRam00007fffa4784d58 * 2 & 0x80000000000;
  plVar15[-5] = uRam00007fffa4784d58 * 4 & 0x70000000000;
  plVar15[0x12] = 0x8e9b60a;
  uVar26 = (unaff_R15 << 0x2d | unaff_R15 >> 0x13) ^ unaff_R15;
  uVar12 = unaff_R15 >> 1 | (uint64_t)((unaff_R15 & 1) != 0) << 0x3f;
  plVar15[10] = uVar12 * uVar26;
  plVar15[0x27] = uVar26 ^ uVar12;
  plVar15[9] = (int64_t)(int)(uVar6 ^ 0x19871316) + plVar15[0x10];
  plVar15[0x11] = (uint64_t)(uVar6 ^ 0x9c7da99a);
  uVar19 = (uint32_t)(uRam00007fffa4784d48 >> 0x20);
  plVar15[0x28] = (uint64_t)(uVar19 >> 7 & 0x3800);
  plVar15[0x10] = uRam00007fffa4784d48 >> 0x12 & 0x3fff;
  plVar15[4] = (uint64_t)((uint32_t)uRam00007fffa4784d48 & 1);
  plVar15[0x26] = (uint64_t)(uVar19 >> 0xc & 0x8000);
  uVar7 = (uVar6 | 1) * -0x6bd9e837 ^ 0x99000e9e;
  plVar15[3] = (uint64_t)(uVar19 >> 3 & 0x600);
  plVar15[0xd] = (uint64_t)(((int)plVar15[0xd] - uVar6) + 0xc0000006 ^ 0xd15ecf9a);
  plVar15[0x12] = plVar15[0x12];
  plVar15[-2] = (uRam00007fffa4784d48 >> 0x15) << 5;
  plVar15[0x1e] = (uint64_t)((uint32_t)(uRam00007fffa4784d48 >> 0x15) & 0x20);
  plVar15[0x10] = (uint64_t)((uint32_t)plVar15[0x10] & 0x10);
  uVar6 = (uint32_t)plVar15[7];
  uVar26 = uRam00007fffa4784d48 >> 0x29 ^ 0x4000;
  if ((int64_t)(int)(uVar7 << 0x1b | uVar7 >> 5) <=
      (int64_t)(uint64_t)((0x57141aae - uVar6) * 0x1000 | 0x57141aae - uVar6 >> 0x14)) {
    uVar26 = (uint64_t)(uVar19 >> 9 & 0x4000);
  }
  plVar15[2] = uVar26;
  lVar9 = 0;
  if (plVar15[0xc] <= (int64_t)(uint64_t)(0x94cd5f0c - uVar6)) {
    lVar9 = ((uint64_t)((uint32_t)uRam00007fffa4784d48 >> 0xf & 2) + plVar15[4] |
            (uint64_t)((uint32_t)(uRam00007fffa4784d48 >> 0x11) & 0xc)) + plVar15[0x10];
  }
  plVar15[0x10] = lVar9;
  lVar9 = plVar15[0x1e];
  if ((uint64_t)plVar15[6] <= (uint64_t)((int)plVar15[-1] + 0x6090af3dU ^ uVar6)) {
    lVar9 = plVar15[-2];
  }
  plVar15[0x1e] = lVar9;
  uVar26 = plVar15[0x27];
  if ((int64_t)(uint64_t)((uVar6 + 0xb61d2d01) * 0x200 | uVar6 + 0xb61d2d01 >> 0x17) <=
      plVar15[0x12]) {
    uVar26 = plVar15[10];
  }
  uVar12 = plVar15[-6];
  uVar6 = (uint32_t)(uVar12 >> 0x20);
  uVar19 = (uint32_t)uVar12;
  uVar8 = (uint64_t)((uint32_t)(uVar12 >> 8) & 0x800000);
  if (plVar15[0x17] == 0xe4a91c66) {
    uVar8 = uVar12 >> 8 ^ 0x800000;
  }
  uVar20 = plVar15[0x1e] | plVar15[0x10] |
           (uint64_t)((uVar19 & 0x600) << 8) |
           (uint64_t)(uVar19 & 0x80000) |
           plVar15[0x26] | plVar15[0x28] |
           (uint64_t)
           ((uint32_t)(uRam00007fffa4784d48 >> 0x1c) & 0x40 |
            (uint32_t)(uRam00007fffa4784d48 >> 0x1d) & 0x80 |
            (uint32_t)(uRam00007fffa4784d48 >> 0x1f) & 0x100 | *(uint32_t *)(plVar15 + 3)) |
           (uint64_t)((uVar19 & 0x10) << 0xc) | plVar15[2];
  uVar19 = (uint32_t)(uVar12 >> 3) & 0x300000;
  uVar10 = (uVar20 & 0xffffffff) * (uint64_t)uVar19 +
           ((uVar20 >> 0x20) * (uint64_t)uVar19 << 0x20);
  if ((int64_t)(uint64_t)~(uint32_t)plVar15[0x11] <= plVar15[0xd]) {
    uVar10 = uVar19 | uVar20;
  }
  uVar12 = (((uint32_t)(uVar12 >> 0x12) & 0x2000000 |
             (uint32_t)(uVar12 >> 4) & 0x400000 | (uint32_t)(uVar12 >> 0xd) & 0x1000000 |
             (uint32_t)(uVar12 >> 0x18) & 0x4000000 | uVar6 & 0x8000000 | uVar6 >> 1 & 0x10000000) |
            uVar8 | plVar15[0x21] |
            ((uint64_t)(uVar22 & 0x3000) << 0x14 | (uint64_t)((uVar22 & 1) << 0x1d) |
             (uint64_t)(uVar22 & 0x30000) << 0x12 | (uint64_t)(uVar22 & 0x80000) << 0x11 |
             (uint64_t)(uVar22 & 0x200000) << 0x10 | (uint64_t)(uVar22 & 0x2000000) << 0xd) +
            plVar15[5] | plVar15[-5] | plVar15[0x25] | uVar10) << 4;
  plVar15[0xd] = uVar12;
  uVar12 = uVar12 ^ 0xfffffffff6475171;
  pcVar16 = (code *)plVar15[8];
  *(uint64_t *)(puVar14 + -8) = 0x7fffa517d6cb;
  (*pcVar16)(uVar12 * 0x2000000,uVar12 * -0x1ffffff);
  uVar12 = plVar15[1];
  *(int64_t *)(puVar14 + 0x40) = plVar15[0x3c];
  *(uint64_t *)(puVar14 + 0x38) = uVar26 << 0x38 | uVar26 >> 8;
  *(int64_t *)(puVar14 + 0x30) = plVar15[0x1f];
  lVar9 = plVar15[0x39];
  *(int64_t *)(puVar14 + 0x28) = lVar9;
  *(uint32_t *)(puVar14 + 0x20) = *(uint32_t *)((int64_t)plVar15 + 0x74);
  *(uint64_t *)(puVar14 + 0x48) = 0xfffffffff1d3d878;
  lVar17 = *plVar15;
  lVar13 = plVar15[0x37];
  pcVar16 = (code *)plVar15[9];
  *(uint64_t *)(puVar14 + -8) = 0x7fffa517d736;
  (*pcVar16)(lVar9,lVar13,(uVar12 ^ 0x4922944c) << 4 | uVar12 >> 0x3c,lVar17);
  uVar6 = (uint32_t)lVar13;
  uVar6 = (uVar6 << 3 | uVar6 >> 0x1d) ^ (uVar6 << 0x17 | uVar6 >> 9) ^ uVar6;
  uVar6 = (uVar6 << 0xe | uVar6 >> 0x12) ^ (uVar6 << 6 | uVar6 >> 0x1a) ^ uVar6;
  uVar6 = ((uVar6 << 0xc | uVar6 >> 0x14) ^ (uVar6 << 0x1c | uVar6 >> 4) ^ uVar6) + 0xe3a5cba7;
  uVar26 = (uint64_t)uVar6;
  if ((-1 < (int)uVar6) && (plVar15[0x3c] != 0)) {
    plVar15[0x1a] = 0;
    plVar15[0x1d] = 0;
    plVar15[0x13] = (int64_t)(plVar15 + 0x1a);
    plVar15[0x15] = (int64_t)(plVar15 + 0x3c);
    plVar15[0x14] = (int64_t)(plVar15 + 1);
    plVar15[0x16] = (int64_t)(plVar15 + 0x1d);
    pcVar16 = (code *)((int64_t)(short)((short)plVar15[7] + -0x7897) + 0x7fffa5406479);
    *(uint64_t *)(puVar14 + -8) = 0x7fffa517d826;
    (*pcVar16)(0x7fffa5406479,0x5b0495a1,pcVar16,&IMAGE_DOS_HEADER_7fffa4770000);
    lVar9 = plVar15[0x1a];
    lVar17 = plVar15[0x1d];
    pcVar16 = (code *)((int64_t)
                       (short)((short)plVar15[7] * -0x4000 |
                              (uint16_t)(0x88d4U - (short)plVar15[7]) >> 2) + 0x7fffa549e237);
    *(uint64_t *)(puVar14 + -8) = 0x7fffa517d891;
    (*pcVar16)(pcVar16,lVar9 * 0x1000001,lVar17,0x6258aa5f);
  }
  lVar9 = plVar15[7];
  bVar4 = (uint8_t)lVar9 & 0x1f;
  uVar12 = (uint64_t)(0xa6781ecf - (int)lVar9) * plVar15[0xd] - 0x53308f2e;
  *(uint64_t *)(puVar14 + 0x20) =
       (uint64_t)((0x378baf31U >> bVar4 | 0x378baf31 << 0x20 - bVar4) * 0x6c2809b7);
  *(uint64_t *)(puVar14 + -8) = 0x7fffa517d8ff;
  (*(code *)((int64_t)(-0x1988e223 - (int)lVar9) + 0x7fffa549d751))
            (lVar9,0x7fffa549d751,uVar12,uVar12 ^ 0xb017cc5d);
  uVar12 = plVar15[0x22];
  if (uVar12 != 0) {
    *(uint32_t *)(plVar15 + 0x1e) = 0xdefac848;
    lVar9 = plVar15[7];
    uVar19 = (uint32_t)lVar9;
    *plVar15 = (int64_t)(int)((uVar19 ^ 0x2f631288) << 7 | (uVar19 ^ 0x2f631288) >> 0x19);
    plVar15[0x1f] = uVar12 - (uVar12 >> 0x3d);
    plVar15[0xd] = uVar12 >> 0x3d ^ uVar12;
    plVar15[0x12] = 0xa48822a4;
    bVar4 = (uint8_t)lVar9 & 0x1f;
    bVar3 = (uint8_t)lVar9 & 0xf;
    plVar15[0xf] = (int64_t)(short)(0x6699U >> bVar3 | 0x6699 << 0x10 - bVar3) + 0x7fffa568e1cb;
    uVar10 = ~uVar26;
    *(uint32_t *)(plVar15 + 0x10) = uVar6;
    uVar12 = plVar15[0x18];
    uVar23 = uVar26 ^ uVar12;
    uVar8 = uVar23 * 0x41f773a7 + (uVar10 | uVar12) * 0x4c944c57;
    uVar6 = uVar6 & (uint32_t)uVar12;
    plVar15[0x19] = ~uVar12;
    uVar21 = ~uVar12 & uVar26;
    uVar20 = ~uVar8;
    lVar13 = (uint64_t)((uint32_t)uVar8 & uVar6) * 0xf0de4efb;
    lVar17 = plVar15[0xd];
    if ((int64_t)(uint64_t)((0x5bc793e3 - uVar19) * 0x100000 | 0x5bc793e3 - uVar19 >> 0xc) <=
        *plVar15) {
      lVar17 = plVar15[0x1f];
    }
    plVar15[0xd] = lVar17;
    plVar15[0x12] = plVar15[0x12];
    uVar18 = uVar10;
    if ((0x56efe371 << bVar4 | 0x56efe371U >> 0x20 - bVar4) != 0xdfdbd8a3) {
      uVar18 = uVar26;
    }
    uVar11 = (uint64_t)((uint32_t)uVar10 & (uint32_t)uVar12);
    uVar26 = (uint64_t)*(uint32_t *)(plVar15 + 0x10);
    lVar17 = plVar15[0xd];
    pcVar16 = (code *)plVar15[0xf];
    *(uint64_t *)(puVar14 + -8) = 0x7fffa517db6a;
    (*pcVar16)((uint64_t)((uint32_t)uVar20 & uVar6) * -0xf0de4efb + (uVar23 & uVar20) * 0x91659f18 +
               (uVar11 | uVar8) * -0x7263dc37 +
               uVar11 * -0x1968d9c35 + uVar21 * -0xfb3b350c + (uVar12 ^ uVar10) * -0x105d80dbc +
               ((uVar12 ^ uVar10) & uVar8) * -0x7e7a72c3 + lVar13 +
               (uVar6 ^ uVar8) * (uint64_t)((-0x1b35a8e4 - uVar19) * 0x1fdff623),lVar13,lVar17,
               ((uVar18 | uVar12) ^ uVar8) * 0x2fbc57f1 + (uVar21 & uVar20) * (-0xdaa9dc5b - lVar9))
    ;
  }
  return uVar26;
}


// ============================================================================
// Function : Hook_ntdll_dll_NtCreateThread  |  RVA: 0xb592d0  |  Size: 3741 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa52ca16c) overlaps instruction at (ram,0x7fffa52ca169)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa52c943f) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c936b) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c9443) */
/* WARNING: Removing unreachable block (ram,0x7fffa52ca161) */
/* WARNING: Removing unreachable block (ram,0x7fffa52ca169) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c95f8) */
/* WARNING: Removing unreachable block (ram,0x7fffa52ca154) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint32_t Hook_ntdll_dll_NtCreateThread
               (uint64_t param_1,uint32_t param_2,uint64_t ***param_3,uint64_t ***param_4,
               uint64_t param_5,int64_t param_6)

{
  uint8_t uVar1;
  char cVar2;
  short sVar3;
  code *pcVar4;
  uint64_t ***pppuVar5;
  uint64_t uVar6;
  uint64_t ***pppuVar7;
  uint64_t ***pppuVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t ***pppuVar11;
  uint8_t *puVar12;
  uint64_t ****ppppuVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint64_t uVar17;
  uint32_t uVar18;
  uint64_t uVar19;
  uint64_t ***pppuVar20;
  uint64_t ***pppuVar21;
  uint8_t auStack_228 [32];
  uint64_t uStack_208;
  int64_t lStack_200;
  uint64_t ****appppuStack_1a8 [2];
  uint8_t auStack_198 [96];
  uint64_t uStack_138;
  uint32_t uStack_bc;
  uint32_t uStack_80;
  
  puVar12 = auStack_228;
  uStack_138 = param_1;
  uStack_80 = 0x640ec6fa;
  ppppuVar13 = (uint64_t ****)appppuStack_1a8;
  pppuVar8 = param_3;
  if (param_4 == (uint64_t ***)0xffffffffffffffff) {
    if (*(int64_t *)((int64_t)ProcessEnvironmentBlock + 0x8c8) == 0x72c28fa44e380dc9) {
      pppuVar8 = (uint64_t ***)((int64_t)param_3 + 1);
      uVar1 = in((short)param_2);
      *(uint8_t *)param_3 = uVar1;
      pcVar4 = (code *)swi(0xd5);
      (*pcVar4)();
      puVar12 = auStack_198;
      ppppuVar13 = appppuStack_1a8[0];
    }
  }
  else {
    uStack_bc = 0x4b10b002;
    uVar18 = FUN_7fffa52cf7f0(FUN_7fffa52cf7f0,0x44cdc9a9,param_3,
                              (((int64_t)param_4 << 0x3b) + ((int64_t)param_4 - 0xf12b85cbU)) -
                              ((int64_t)param_4 - 0xf12b85cbU << 0x3d));
    uVar18 = (uVar18 >> 1 | (uint32_t)((uVar18 & 1) != 0) << 0x1f) ^ (uVar18 << 0x16 | uVar18 >> 10) ^
             uVar18;
    uVar18 = (uVar18 << 0x1e | uVar18 >> 2) ^ (uVar18 << 0xc | uVar18 >> 0x14) ^ uVar18;
    puVar12 = auStack_228;
    uVar18 = (uVar18 << 0x1c | uVar18 >> 4) ^ (uVar18 << 0x18 | uVar18 >> 8) ^ uVar18;
    uVar18 = (uVar18 << 0x18 | uVar18 >> 8) ^ (uVar18 << 0x10 | uVar18 >> 0x10) ^ uVar18;
    uVar18 = (uVar18 << 0x17 | uVar18 >> 9) ^ (uVar18 << 0x13 | uVar18 >> 0xd) ^
             (uVar18 << 0x10 | uVar18 >> 0x10);
    uVar18 = (uVar18 << 6 | uVar18 >> 0x1a) ^ (uVar18 << 0xe | uVar18 >> 0x12) ^ uVar18;
    if (((uVar18 << 0xc | uVar18 >> 0x14) ^ (uVar18 << 0x1c | uVar18 >> 4)) != uVar18) {
      uStack_80 = 0x9ca1300;
      uStack_208 = (uStack_138 << 0x10 | uStack_138 >> 0x30) ^
                   (uStack_138 << 0x1d | uStack_138 >> 0x23) ^ uStack_138;
      lStack_200 = param_6;
      FUN_7fffa5103050(param_3,param_5,param_4,0x3ee99ce1);
      return (uint32_t)param_3 << 0x1e ^ (uint32_t)param_3;
    }
  }
  *(uint32_t *)(ppppuVar13 + 0x17) = param_2;
  ppppuVar13[-3] = pppuVar8;
  ppppuVar13[0x12] = param_4;
  *(uint32_t *)((int64_t)ppppuVar13 + 0x8c) = 0x54424e2;
  *(uint32_t *)(ppppuVar13 + 0x25) = 0x1077cbbb;
  ppppuVar13[-1] = *(uint64_t ****)(param_6 + 0x78);
  ppppuVar13[0x29] = (uint64_t ***)0x75f2c675;
  ppppuVar13[7] = (uint64_t ***)0x68d2e46f;
  ppppuVar13[1] = (uint64_t ***)0xaee7ce6;
  ppppuVar13[0x19] = (uint64_t ***)0xffffffffdc561f6c;
  ppppuVar13[3] = (uint64_t ***)0x1b64042c;
  ppppuVar13[-7] = (uint64_t ***)0x78cc4efe;
  uVar14 = (uint32_t)pppuRam00007fffa4784d58;
  *(uint32_t *)((int64_t)ppppuVar13 + 0x14) = (uVar14 & 0xc0) << 0x18;
  ppppuVar13[8] = (uint64_t ***)0xbc4da0d9;
  ppppuVar13[0x2c] = (uint64_t ***)0x1c91b279;
  ppppuVar13[0x22] = (uint64_t ***)0x55c4cc37;
  ppppuVar13[9] = (uint64_t ***)0x5f39b033;
  ppppuVar13[0x13] = (uint64_t ***)0x69f17963;
  ppppuVar13[0x2a] = (uint64_t ***)0x9364147e;
  ppppuVar13[0x23] = (uint64_t ***)FUN_7fffa5699750;
  ppppuVar13[-6] = (uint64_t ***)0x4b459ef0;
  pppuVar5 = (uint64_t ***)(uRam00007fffa4784d48 >> 0x15);
  ppppuVar13[-5] = pppuVar5;
  ppppuVar13[5] = pppuVar5;
  uVar6 = ~(uint64_t)pppuVar5 & 0xffffffffffffffdf;
  ppppuVar13[0xf] = (uint64_t ***)(uint64_t)(0x37f - (int)CONCAT62((int6)(uVar6 >> 0x10),0x9a8));
  ppppuVar13[0xb] = (uint64_t ***)((int64_t)pppuRam00007fffa4784d58 << 0x10 & 0x2000000000);
  ppppuVar13[0x24] = (uint64_t ***)((int64_t)pppuRam00007fffa4784d58 << 0x10 | 0x2000000000);
  ppppuVar13[-2] = (uint64_t ***)0x176f6450;
  ppppuVar13[0xd] = pppuRam00007fffa4784d58;
  ppppuVar13[0x18] = (uint64_t ***)((int64_t)pppuRam00007fffa4784d58 << 0x12);
  ppppuVar13[4] = (uint64_t ***)((int64_t)pppuRam00007fffa4784d58 << 5);
  ppppuVar13[0x15] = (uint64_t ***)((uint64_t)(uVar14 & 0x3000) << 0x14);
  ppppuVar13[0x2b] = (uint64_t ***)((uint64_t)pppuRam00007fffa4784d58 & 0x1c000000000);
  ppppuVar13[0xc] = (uint64_t ***)((int64_t)pppuRam00007fffa4784d58 << 0x11);
  ppppuVar13[1] = (uint64_t ***)(uint64_t)((uint32_t)ppppuVar13[1] ^ 0xd2062291);
  ppppuVar13[0x1a] = (uint64_t ***)0xd8e85e77;
  uVar18 = (uint32_t)(uRam00007fffa4784d48 >> 0x20);
  ppppuVar13[0x1e] = (uint64_t ***)(uint64_t)(uVar18 >> 7 & 0x3800);
  uVar15 = (uint32_t)uRam00007fffa4784d50;
  ppppuVar13[0x1c] = (uint64_t ***)(uint64_t)((uint32_t)(uRam00007fffa4784d50 >> 8) & 0x800000);
  *ppppuVar13 = (uint64_t ***)(uint64_t)((uint32_t)(uRam00007fffa4784d50 >> 0x18) & 0x4000000);
  ppppuVar13[-4] = (uint64_t ***)(uRam00007fffa4784d50 >> 0x20);
  uVar16 = (uint32_t)(uRam00007fffa4784d50 >> 0x20);
  ppppuVar13[0x1f] = (uint64_t ***)(uint64_t)(uVar16 & 0x8000000);
  ppppuVar13[0x1b] = (uint64_t ***)(uint64_t)((uint32_t)(uRam00007fffa4784d50 >> 0xd) & 0x1000000);
  ppppuVar13[0x16] = (uint64_t ***)(uRam00007fffa4784d50 >> 0x21);
  ppppuVar13[0x20] = (uint64_t ***)(uint64_t)(uVar16 >> 1 & 0x10000000);
  ppppuVar13[0x10] = (uint64_t ***)(uint64_t)(uVar18 >> 3 & 0x600);
  ppppuVar13[0x21] = (uint64_t ***)(uint64_t)(uVar18 >> 0xc & 0x8000);
  pppuVar7 = ppppuVar13[-5];
  uVar10 = (uint64_t)pppuVar7 ^ 0x20;
  pppuVar21 = ppppuVar13[5];
  ppppuVar13[10] = (uint64_t ***)(uRam00007fffa4784d48 >> 0x29);
  ppppuVar13[5] = (uint64_t ***)(uint64_t)((uVar15 & 0x600) << 8);
  ppppuVar13[-5] = (uint64_t ***)(uint64_t)((uint32_t)(uRam00007fffa4784d50 >> 0x12) & 0x2000000);
  pppuVar8 = ppppuVar13[0x19];
  pppuVar20 = ppppuVar13[0x24];
  if (ppppuVar13[-6] <= ppppuVar13[0x2a]) {
    pppuVar20 = ppppuVar13[0xb];
  }
  ppppuVar13[0x24] = pppuVar20;
  uVar10 = ((uint64_t)pppuVar8 & 0xffffffff) * (uVar10 & 0xffffffff) +
           (((uint64_t)pppuVar8 >> 0x20) * (uVar10 & 0xffffffff) +
            ((uint64_t)pppuVar7 >> 0x20) * ((uint64_t)pppuVar8 & 0xffffffff) << 0x20) +
           ((uint64_t)pppuVar21 & 0xffffffffffffffdf) * 0x4753c127 +
           ((((uint64_t)pppuVar5 | 0xffffffffffffffdf) * -0x23a9e093 +
             (~(uint64_t)pppuVar5 | 0x20) * 0x23a9e094 +
            (uint64_t)
            ((uint32_t)(uRam00007fffa4784d48 >> 0x11) & 0xc |
             (uint32_t)(uRam00007fffa4784d48 >> 0xf) & 2 | (uint32_t)uRam00007fffa4784d48 & 1 |
            (uint32_t)(uRam00007fffa4784d48 >> 0x12) & 0x10)) - uVar6) +
           (uint64_t)((uint32_t)(uRam00007fffa4784d48 >> 0x1c) & 0x40);
  pppuVar8 = ppppuVar13[0xd];
  uVar6 = 0;
  if (0x2b110c39 < (int64_t)ppppuVar13[9]) {
    uVar6 = (uint64_t)((uint32_t)(uRam00007fffa4784d48 >> 0x1d) & 0x80);
  }
  uVar18 = (int)ppppuVar13[0x29] + 0xd678c121;
  pppuVar7 = (uint64_t ***)((int64_t)pppuVar8 + 0x11);
  if ((uint64_t ***)(uint64_t)(uVar18 * 8 | uVar18 >> 0x1d) <= ppppuVar13[8]) {
    pppuVar7 = ppppuVar13[0xc];
  }
  uVar19 = (int64_t)pppuVar7 << 0x24;
  if (ppppuVar13[7] <= ppppuVar13[0x13]) {
    uVar19 = (uint64_t)pppuVar7 & 0x1000000000;
  }
  pppuVar7 = (uint64_t ***)((int64_t)pppuVar8 + 5);
  if (ppppuVar13[1] == ppppuVar13[0x1a]) {
    pppuVar7 = ppppuVar13[4];
  }
  cVar2 = *(char *)(ppppuVar13 + 0x3d);
  pppuVar21 = (uint64_t ***)((int64_t)pppuVar8 + 0xfffffffee);
  if ((int64_t)ppppuVar13[3] < (int64_t)ppppuVar13[0x22]) {
    pppuVar21 = ppppuVar13[0x18];
  }
  uVar18 = (uint32_t)ppppuVar13[10] & 0x4000;
  uVar17 = (uint64_t)(uVar18 & (uint32_t)uVar10);
  if ((int64_t)ppppuVar13[0x2c] <= (int64_t)ppppuVar13[-7]) {
    uVar17 = (uint64_t)((uint32_t)(uRam00007fffa4784d48 >> 0x1f) & 0x100) + (int64_t)ppppuVar13[0x10]
             + (int64_t)ppppuVar13[0x1e] | uVar6 | (uint64_t)uVar18 | uVar10;
  }
  sVar3 = *(short *)(ppppuVar13 + 0xf);
  uVar18 = *(uint32_t *)((int64_t)ppppuVar13 + 0x14);
  pppuVar11 = (uint64_t ***)
              (((uint64_t)((uint32_t)(uRam00007fffa4784d50 >> 4) & 0x400000) |
                (uint64_t)ppppuVar13[0x1c] | (uint64_t)ppppuVar13[0x1b] |
                (uint64_t)ppppuVar13[-5] | (uint64_t)*ppppuVar13 | (uint64_t)ppppuVar13[0x1f] |
                (uint64_t)ppppuVar13[0x20] | (uint64_t)ppppuVar13[0x21] |
                (uint64_t)(uVar15 & 0x80000) | (uint64_t)ppppuVar13[0x24] |
                (uint64_t)((uVar15 & 0x10) << 0xc) | (uint64_t)ppppuVar13[5] |
                (uint64_t)((uint32_t)(uRam00007fffa4784d50 >> 3) & 0x300000) |
                ((uint64_t)(((uint32_t)pppuVar8 & 1) << 0x1d) + (int64_t)ppppuVar13[0x15] |
                (uint64_t)(uVar14 & 0x2000000) << 0xd) + (int64_t)ppppuVar13[0x2b] * 4 +
                ((uint64_t)ppppuVar13[0xd] & 0x40000000000) * 2 |
                (uint64_t)pppuVar21 & 0xc00000000 | uVar19 | (uint64_t)pppuVar7 & 0x8000000000 |
                (uint64_t)uVar18 | uVar17) << 4);
  ppppuVar13[1] = pppuVar11;
  *(uint64_t *)(puVar12 + -8) = 0x7fffa52c9c6c;
  (*(code *)((int64_t)sVar3 + 0x7fffa4f69b79))
            (((uint64_t)pppuVar11 ^ 0xfffffffff6475171) * 0x2000000,
             ((uint64_t)pppuVar11 ^ 0xfffffffff6475171) * -0x1ffffff);
  pppuVar8 = ppppuVar13[0xe];
  pppuVar7 = ppppuVar13[0x3a];
  *(uint64_t ****)(puVar12 + 0x28) = ppppuVar13[-2];
  *(uint32_t *)(puVar12 + 0x20) = (uint32_t)(uint8_t)(cVar2 + 0x97U);
  pppuVar21 = ppppuVar13[-3];
  pppuVar20 = ppppuVar13[0x12];
  pppuVar5 = ppppuVar13[0x23];
  *(uint64_t *)(puVar12 + -8) = 0x7fffa52c9ccc;
  (*(code *)pppuVar5)(pppuVar8,-0x7f40d721 -
                               (((int64_t)pppuVar7 << 0x21 | (uint64_t)pppuVar7 >> 0x1f) ^
                                ((int64_t)pppuVar7 << 0x32 | (uint64_t)pppuVar7 >> 0xe) ^
                               (uint64_t)pppuVar7),pppuVar20,pppuVar21);
  uVar15 = (int)pppuVar8 + 0x4b7705cb;
  if (-1 < (int)uVar15) {
    ppppuVar13[6] = (uint64_t ***)0x0;
    ppppuVar13[0x14] = (uint64_t ***)0x0;
    ppppuVar13[0x25] = (uint64_t ***)(ppppuVar13 + 6);
    ppppuVar13[0x28] = (uint64_t ***)(ppppuVar13 + 0x14);
    ppppuVar13[0x27] = (uint64_t ***)(ppppuVar13 + 0x3a);
    ppppuVar13[0x26] = (uint64_t ***)(ppppuVar13 + 0xe);
    pppuVar21 = (uint64_t ***)((int64_t)ppppuVar13 << 0x3e ^ (uint64_t)(ppppuVar13 + 0x25));
    *(uint64_t *)(puVar12 + 0x20) = 0x1d52a412;
    *(uint64_t *)(puVar12 + -8) = 0x7fffa52c9d6a;
    (*(code *)&UNK_7fffa5246870)();
    ppppuVar13[0x17] = ppppuVar13[0x14];
    *(uint32_t *)(ppppuVar13 + 0x23) = 0xd361e9ce;
    pppuVar8 = ppppuVar13[6];
    pppuVar7 = ppppuVar13[-1];
    ppppuVar13[0x24] = pppuVar21;
    ppppuVar13[-3] = (uint64_t ***)(uint64_t)(uint8_t)(cVar2 + 0x97U);
    *(uint32_t *)(ppppuVar13 + 0xd) = uVar15;
    uVar10 = ((int64_t)pppuVar7 << 0x2b | (uint64_t)pppuVar7 >> 0x15) ^
             ((int64_t)pppuVar7 << 0x20 | (uint64_t)pppuVar7 >> 0x20) ^ (uint64_t)pppuVar7;
    ppppuVar13[0x12] = (uint64_t ***)(uint64_t)uVar18;
    pppuVar7 = ppppuVar13[0x24];
    uVar19 = (uint64_t)pppuVar11 ^ (uint64_t)pppuVar7;
    pppuVar21 = ppppuVar13[-3];
    uVar6 = (uint64_t)ppppuVar13[0x24] ^ (uint64_t)pppuVar11 | uVar10;
    pppuVar20 = ppppuVar13[0x12];
    uVar15 = *(uint32_t *)(ppppuVar13 + 0xd);
    pppuVar5 = ppppuVar13[0x17];
    *(uint64_t *)(puVar12 + -8) = 0x7fffa52c9eff;
    FUN_7fffa5497dc0(uVar6,(int64_t)pppuVar8 * 0x1000001,pppuVar5,
                     uVar6 * -0x28b6252f +
                     ((~(uint64_t)pppuVar11 ^ (uint64_t)pppuVar7) & ~uVar10) * -0x6258aa5f +
                     (uVar19 & uVar10) * -0x39a28530 + (uVar10 ^ uVar19) * -0x39a28530);
    pppuVar8 = ppppuVar13[6];
    uVar18 = (uint32_t)pppuVar20 ^ (uint32_t)pppuVar21;
    uVar6 = (int64_t)pppuVar8 << 0x11 ^ (uint64_t)pppuVar8;
    *(uint64_t *)(puVar12 + -8) = 0x7fffa52c9fc9;
    FUN_7fffa55acb60(0xffffffffd1ac0251,0xffffffff13eb3407,
                     ((int64_t)pppuVar8 << 0x3d | uVar6 >> 3) ^ (uVar6 << 10 | uVar6 >> 0x36) ^
                     uVar6,((uint64_t)uVar18 * 0xffffffff << 0x20) + (uint64_t)uVar18 * 0x13eb3407
                    );
  }
  uVar18 = *(uint32_t *)((int64_t)ppppuVar13 + 0x8c);
  pppuVar8 = ppppuVar13[1];
  uVar6 = ~(uint64_t)ppppuVar13[-4] | (uint64_t)uVar18;
  lVar9 = (~(uVar6 ^ (uint64_t)ppppuVar13[0x16]) + (uVar6 ^ (uint64_t)ppppuVar13[0x16])) *
          -0xfbba70e2;
  *(int64_t *)(puVar12 + 0x20) = lVar9;
  *(uint64_t *)(puVar12 + -8) = 0x7fffa52ca053;
  FUN_7fffa548da80(FUN_7fffa548da80,lVar9,(uint64_t)uVar18,
                   (int64_t)pppuVar8 * 0xc0000421 - 0x53308f2eU ^ 0xb017cc5d);
  return uVar15;
}


// ============================================================================
// Function : Hook_ntdll_dll_RtlExitUserProcess  |  RVA: 0xb67c40  |  Size: 3570 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa52d2370) overlaps instruction at (ram,0x7fffa52d236c)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa52d7cde) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d8d90) */

void Hook_ntdll_dll_RtlExitUserProcess(uint64_t param_1)

{
  uint64_t uVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint64_t uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint16_t uVar10;
  uint32_t uVar9;
  uint8_t *puVar11;
  uint8_t bVar12;
  uint8_t bVar13;
  uint32_t uVar14;
  uint32_t unaff_EBX;
  uint8_t **ppuVar15;
  uint8_t **ppuVar16;
  short sVar17;
  uint32_t unaff_ESI;
  uint64_t unaff_RDI;
  uint8_t bVar18;
  uint16_t uVar19;
  int64_t lVar20;
  uint8_t bVar21;
  uint16_t uVar22;
  int iVar23;
  int64_t lVar24;
  uint64_t uVar25;
  IMAGE_DOS_HEADER *pIVar26;
  uint64_t uVar27;
  uint32_t unaff_R15D;
  uint8_t in_AF;
  bool bVar28;
  uint8_t in_TF;
  uint8_t in_IF;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_VIF;
  uint8_t in_VIP;
  uint8_t in_ID;
  IMAGE_DOS_HEADER *in_rflags;
  uint8_t *apuStack_88 [8];
  uint32_t uStack_48;
  
  uVar8 = (uint32_t)in_rflags;
  sVar17 = (short)unaff_ESI;
  ppuVar16 = apuStack_88;
  uVar27 = (param_1 ^ unaff_RDI) * 0x595d11bd +
           (param_1 & unaff_RDI) * 0x595d11bd + (unaff_RDI | param_1) * -0x311d114f +
           (~param_1 & ~unaff_RDI) * 0x2840006e;
  uVar25 = rdtsc();
  uVar14 = (uint32_t)(uVar25 >> 0x20);
  uVar25 = ((uint64_t)uVar14 << 0x20 | uVar25 & 0xffffffff) * -0x30ebf64fafbc6efb +
           0xdd4e7bdd3b5639a2;
  uVar7 = (uint32_t)(uVar25 >> 0x2d) ^ (uint32_t)(uVar25 >> 0x1b);
  bVar13 = (uint8_t)(uVar25 >> 0x3b);
  uVar7 = (uVar7 >> bVar13 | uVar7 << 0x20 - bVar13) & 3;
  uVar9 = (uint32_t)uVar27;
  bVar13 = (uint8_t)uVar27;
  if (uVar7 < ((0xa80 - uVar9) * 0x6447 & 0xffff)) {
    if (uVar7 == 1) {
      uVar25 = rdtsc();
      uVar25 = (CONCAT44(uVar14,(int)(uVar25 >> 0x20)) << 0x20 | uVar25 & 0xffffffff) *
               -0x6bdeac2e46be109b + 0xe17ee429d8364c4e;
      uVar7 = (uint32_t)(uVar25 >> 0x1b) ^ (uint32_t)(uVar25 >> 0x2d);
      bVar12 = (uint8_t)(uVar25 >> 0x3b);
      if ((uVar7 >> bVar12 | uVar7 << 0x20 - bVar12) <
          (0x18c0043U >> (bVar13 & 0x1f) | 0x18c0043 << 0x20 - (bVar13 & 0x1f))) {
        uVar7 = (uVar9 ^ 0x7b73b23) + 0x13f7fa3f;
        if ((uVar7 * 0x800 | uVar7 >> 0x15) == 0x5f78720) {
          uVar7 = (0xdd88109a - uVar9) * 0x8000 | 0xdd88109a - uVar9 >> 0x11;
          bVar12 = *(uint8_t *)((uint64_t)bRam00007fffa47bc749 * 4 + 0x7fffa47bc74f);
        }
        else {
          uVar7 = 0xa35e4943;
          bVar12 = *(uint8_t *)((uint64_t)bRam00007fffa47bc749 * 4 + 0x7fffa47bc74f);
        }
        lVar20 = (uint64_t)bRam00007fffa47bc749 * 4;
        unaff_R15D = uVar9 | 1;
        bVar21 = ~*(uint8_t *)(lVar20 + 0x7fffa47bc751);
        unaff_EBX = (uint32_t)(uint8_t)(bVar21 * -0x20);
        uVar9 = (uVar7 | 1) * 0x18c0bb68 | (uint32_t)((int)((uVar7 | 1) * -0x739fa24c) < 0);
        unaff_ESI = uVar9 >> (bVar13 & 0x1f) | uVar9 << 0x20 - (bVar13 & 0x1f);
        bVar18 = bVar21 * -0x1c + 0xb8;
        if (unaff_ESI <= ~(unaff_R15D * -0x2acaa540 ^ uVar7)) {
          bVar18 = bVar21 * -0x20;
        }
        uStack_48._0_2_ =
             CONCAT11(~*(uint8_t *)(lVar20 + 0x7fffa47bc750) << 5 |
                      (uint8_t)~*(uint8_t *)(lVar20 + 0x7fffa47bc750) >> 3,
                      ~bVar12 << 5 | (uint8_t)~bVar12 >> 3);
        bVar18 = *(uint8_t *)(lVar20 + 0x7fffa47bc751) * -0x48 + bVar21 * -0x2b + bVar18;
        uStack_48._0_3_ = CONCAT12(bVar18 * ' ' | bVar18 >> 3,(uint16_t)uStack_48);
        uVar7 = CONCAT13(~*(uint8_t *)(lVar20 + 0x7fffa47bc752) << 5 |
                         (uint8_t)~*(uint8_t *)(lVar20 + 0x7fffa47bc752) >> 3,(undefined3)uStack_48) ^
                0x9102c3cc;
        if ((uVar7 >> (uVar7 & 0x1f) & 1) != 0) {
          syscall();
        }
      }
      sVar17 = (short)unaff_ESI;
      lVar20 = 0x7fffa4784a42;
      bVar28 = false;
      uVar7 = -1 << (bVar13 & 0x1f) | 0xffffffffU >> 0x20 - (bVar13 & 0x1f);
      uVar25 = (uint64_t)uRam00007fffa47845d8;
      uVar7 = uVar7 << 0x11 | uVar7 >> 0xf;
      uVar27 = (uint64_t)uVar7;
      lVar24 = (int64_t)(int)uVar7;
      puVar11 = (uint8_t *)0x7fffa52d8dbd;
      syscall();
    }
    else if (uRam000000007ffe03c0 < 0xd) {
      rdtsc();
      uVar7 = -0x3dada7b8 << (bVar13 & 0x1f) | 0xc2525848U >> 0x20 - (bVar13 & 0x1f);
      lVar20 = 0x7fffa477a9da;
      if ((int64_t)(int)((0x7e07c7f3 - uVar9) * 0x4d613ba5) <
          (int64_t)(uint64_t)(uVar7 << 4 | uVar7 >> 0x1c)) {
        lVar20 = 0x7fffa47845c4;
      }
      uVar9 = uVar9 + 0x2840006d;
      uVar27 = (uint64_t)uVar9;
      bVar28 = uVar9 == 0;
      lVar24 = (int64_t)(int)uVar9;
      uVar25 = (uint64_t)*(uint32_t *)(lVar20 + 0x14);
      puVar11 = &UNK_7fffa52d865b;
      syscall();
    }
    else {
      lVar20 = 0x7fffa47b531a;
      uVar9 = uVar9 + 0x2840006d;
      uVar27 = (uint64_t)uVar9;
      bVar28 = uVar9 == 0;
      lVar24 = (int64_t)(int)uVar9;
      uVar25 = (uint64_t)uRam00007fffa47bc4f8;
      puVar11 = (uint8_t *)0x7fffa52d8b1f;
      syscall();
    }
  }
  else if (uVar7 == 3) {
    lVar20 = -0x80020002;
    iVar23 = (uVar9 ^ 0x4d0a903) + 0x25e277da;
    if ((int64_t)iVar23 < (int64_t)((uVar27 ^ 0xf4ad7280e8671c31) * -0x276f0ef3)) {
      lVar20 = 0x7ffe0000;
    }
    uVar6 = rdtsc();
    uVar25 = CONCAT44(uVar14,(int)((uint64_t)uVar6 >> 0x20)) << 0x20 |
             CONCAT44(iVar23 >> 0x1f,(int)uVar6);
    uVar19 = ~((uint16_t)uVar27 ^ 0x66d);
    lVar24 = -0x18;
    if ((uint64_t)(uVar9 + 0xe84000fd) <
        (uint64_t)
        (int64_t)
        (int)((-0x728e062b << (bVar13 & 0x1f) | 0x8d71f9d5U >> 0x20 - (bVar13 & 0x1f)) * 0x1d37177))
    {
      lVar24 = 0x18;
    }
    uVar27 = *(uint64_t *)
              (*(int64_t *)((uint64_t)(uint16_t)(uVar19 << 0xc | uVar19 >> 4) + 0xff00000000) +
              lVar24);
    if ((uint64_t)*(uint32_t *)(lVar20 + 0x2c4) * 0x5555555555555556 < 0x5555555555555556) {
      uVar25 = uVar25 * -0x5b596a0ee0e87373 + 0x73358d6348485abe;
      pIVar26 = (IMAGE_DOS_HEADER *)(uVar25 >> 0x1b);
      uVar8 = (uint32_t)(uVar25 >> 0x2d) ^ (uint32_t)pIVar26;
      bVar12 = (uint8_t)(uVar25 >> 0x3b);
      uVar8 = uVar8 >> bVar12 | uVar8 << 0x20 - bVar12;
      uVar10 = (uint16_t)(uVar8 >> 0x10);
      if (uVar27 == 0x16558b2acd8939a1) {
        ppuVar16 = (uint8_t **)0x591aff3f;
      }
      if (uVar8 < 0x43d26bb) {
        *(uint32_t *)((int64_t)ppuVar16 + 0x40) =
             (uVar9 ^ 0x2020006e) << 0x13 | (uVar9 ^ 0x2020006e) >> 0xd;
        uVar25 = *(uint64_t *)((int64_t)(int)(uVar9 + 0xe9f069bd) + 0xbe4d96b9);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar25;
        uVar27 = SUB168(auVar4 * ZEXT816(0x64246e95bebb890c),8);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar25;
        uVar25 = SUB168(auVar5 * ZEXT816(0x146449c),0);
        uVar10 = (uint16_t)(uVar25 + uVar27 >> 0x10);
        pIVar26 = (IMAGE_DOS_HEADER *)0x0;
        if ((0x61a53fffffffed79 << (bVar13 & 0x3f) | 0x61a53fffffffed79U >> 0x40 - (bVar13 & 0x3f))
            != 0xffffffffb5e58694 ||
            (SUB164(auVar5 * ZEXT816(0x146449c),8) + (uint32_t)CARRY8(uVar25,uVar27) & 1) != 0) {
          *(uint64_t *)((int64_t)ppuVar16 + 0x40) = 0;
          *(uint64_t *)((int64_t)ppuVar16 + 0x48) = 0;
          *(uint32_t *)((int64_t)ppuVar16 + 0x38) = 0xfb5f7ffd;
          *(uint32_t *)((int64_t)ppuVar16 + 0x40) = 0;
          *(uint32_t *)((int64_t)ppuVar16 + 0x38) = 0x1c93e792;
          *(uint64_t *)((int64_t)ppuVar16 + -8) =
               (uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)(in_IF & 1) * 0x200 |
               (uint64_t)(in_TF & 1) * 0x100 |
               (uint64_t)((*(uint32_t *)((int64_t)ppuVar16 + 0x38) & 1) == 0) * 0x40 |
               (uint64_t)(in_AF & 1) * 0x10 |
               (uint64_t)((*(uint32_t *)((int64_t)ppuVar16 + 0x38) & 1) == 0) * 4 |
               (uint64_t)(in_ID & 1) * 0x200000 | (uint64_t)(in_VIP & 1) * 0x100000 |
               (uint64_t)(in_VIF & 1) * 0x80000 | (uint64_t)(in_AC & 1) * 0x40000;
          *(uint64_t *)((int64_t)ppuVar16 + -8) =
               *(uint64_t *)((int64_t)ppuVar16 + -8) & 0xfffffffffffffeff;
          pIVar26 = *(IMAGE_DOS_HEADER **)((int64_t)ppuVar16 + -8);
          *(uint32_t *)((int64_t)ppuVar16 + 0x38) = 0x23dbf26f;
          *(uint64_t *)((int64_t)ppuVar16 + 0x38) = 0;
          uVar10 = (uint16_t)((uint32_t)uRam00007fffa4784e8c >> 0x10);
          syscall();
          in_rflags = pIVar26;
        }
      }
      lVar20 = 0x7fffa477dbb4;
      uVar27 = 0xc6ad03b68cac519e;
      uVar9 = CONCAT22(uVar10,0x6d) ^ uVar9;
      bVar28 = uVar9 == 0;
      lVar24 = (int64_t)(short)uVar9;
      *(IMAGE_DOS_HEADER **)((int64_t)ppuVar16 + 0x40) = pIVar26;
      uVar25 = (uint64_t)uRam00007fffa47845d8;
      puVar11 = (uint8_t *)0x7fffa52d88c6;
      uVar8 = (uint32_t)in_rflags;
      syscall();
    }
    else {
      uVar25 = uVar25 * -0x158b4ad174161d9b + 0x6954717fe2f49a92;
      uVar8 = (uint32_t)(uVar25 >> 0x1b) ^ (uint32_t)(uVar25 >> 0x2d);
      bVar12 = (uint8_t)(uVar25 >> 0x3b);
      uVar8 = uVar8 >> bVar12 | uVar8 << 0x20 - bVar12;
      ppuVar15 = apuStack_88;
      if ((uVar27 << 0x3e | uVar27 >> 2) == 0xf7cf5e472f1592cf) {
        ppuVar15 = (uint8_t **)apuStack_88[0];
      }
      uVar14 = ((-0x837701c - uVar9) * 2 | (uint32_t)((int)(-0x837701c - uVar9) < 0)) + 0xc000007b;
      uVar7 = uVar8 - uVar14;
      pIVar26 = &IMAGE_DOS_HEADER_7fffa4770000;
      if (uVar8 < uVar14) {
        in_rflags = (IMAGE_DOS_HEADER *)
                    ((uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)SBORROW4(uVar8,uVar14) * 0x800 |
                     (uint64_t)(in_IF & 1) * 0x200 | (uint64_t)(in_TF & 1) * 0x100 |
                     (uint64_t)((int)uVar7 < 0) * 0x80 | (uint64_t)(uVar7 == 0) * 0x40 |
                     (uint64_t)(in_AF & 1) * 0x10 |
                     (uint64_t)((POPCOUNT(uVar7 & 0xff) & 1U) == 0) * 4 | 1 |
                     (uint64_t)(in_ID & 1) * 0x200000 | (uint64_t)(in_VIP & 1) * 0x100000 |
                     (uint64_t)(in_VIF & 1) * 0x80000 | (uint64_t)(in_AC & 1) * 0x40000);
        *(IMAGE_DOS_HEADER **)((int64_t)ppuVar15 + -8) = in_rflags;
        *(uint32_t *)((int64_t)ppuVar15 + 0x40) = 0xdde9512e;
        uVar25 = (uint64_t)bRam00007fffa47bc749;
        bVar12 = ~*(uint8_t *)(uVar25 * 4 + 0x7fffa47bc74f);
        *(uint8_t *)((int64_t)ppuVar15 + 0x40) = bVar12 << 5 | bVar12 >> 3;
        bVar12 = ~*(uint8_t *)(uVar25 * 4 + 0x7fffa47bc750);
        *(uint8_t *)((int64_t)ppuVar15 + 0x41) = bVar12 << 5 | bVar12 >> 3;
        bVar12 = ~*(uint8_t *)(uVar25 * 4 + 0x7fffa47bc751);
        *(uint8_t *)((int64_t)ppuVar15 + 0x42) = bVar12 << 5 | bVar12 >> 3;
        bVar12 = ~*(uint8_t *)(uVar25 * 4 + 0x7fffa47bc752);
        *(uint8_t *)((int64_t)ppuVar15 + 0x43) = bVar12 << 5 | bVar12 >> 3;
        pIVar26 = *(IMAGE_DOS_HEADER **)((int64_t)ppuVar15 + -8);
        if (((*(uint32_t *)((int64_t)ppuVar15 + 0x40) ^ 0x9102c3cc) >>
             ((*(uint32_t *)((int64_t)ppuVar15 + 0x40) ^ 0x9102c3cc) & 0x1f) & 1) != 0) {
          *(uint64_t *)((int64_t)ppuVar15 + 0x40) = 0;
          *(uint64_t *)((int64_t)ppuVar15 + 0x48) = 0;
          *(uint32_t *)((int64_t)ppuVar15 + 0x38) = 0xeff6fdfe;
          *(uint32_t *)((int64_t)ppuVar15 + 0x40) = 0;
          lVar24 = (int64_t)(int)((uVar9 ^ 0x8d54634f) + 0xa5146322);
          *(uint64_t *)((int64_t)ppuVar15 + 0x38) = (uint64_t)((uVar9 | 1) * 0x1c6fc6b7);
          syscall();
          pIVar26 = in_rflags;
        }
      }
      lVar20 = 0x7fffa478c9f4;
      uVar19 = (uint16_t)(-0x2a3adf92 - uVar9);
      uVar19 = uVar19 << 2 | uVar19 >> 0xe;
      uVar27 = (uint64_t)CONCAT22((short)(-0x2a3adf92 - uVar9 >> 0x10),uVar19);
      uVar8 = (uint32_t)CONCAT62((int6)((uint64_t)lVar24 >> 0x10),0xa74f) ^ 0x58b0;
      bVar28 = uVar8 == 0;
      uVar22 = (uint16_t)uVar8 >> 1 | (uint16_t)((uVar8 & 1) != 0) << 0xf;
      *(IMAGE_DOS_HEADER **)((int64_t)ppuVar15 + 0x40) = pIVar26;
      lVar24 = (int64_t)(short)(uVar22 << (bVar13 & 0xf) | uVar22 >> 0x10 - (bVar13 & 0xf));
      uVar25 = (uint64_t)*(uint32_t *)((int64_t)(short)uVar19 + 0x7fffa478ca14);
      puVar11 = (uint8_t *)0x7fffa52d817f;
      uVar8 = (uint32_t)in_rflags;
      syscall();
    }
  }
  else {
    uVar25 = -0x7053ab8e4615f1f << (bVar13 & 0x3f) | 0xf8fac5471b9ea0e1U >> 0x40 - (bVar13 & 0x3f);
    uVar6 = rdtsc();
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uRam000000007ffe0008;
    uVar25 = CONCAT44(uVar14,(int)((uint64_t)uVar6 >> 0x20)) << 0x20 |
             CONCAT44((uint32_t)((uVar25 << 0x30) >> 0x20) | (uint32_t)(uint16_t)(uVar25 >> 0x30),(int)uVar6);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uRam000000007ffe0008;
    if ((SUB168(auVar3 * ZEXT816(0x146496f),8) +
         (uint64_t)
         CARRY8(SUB168(auVar3 * ZEXT816(0x146496f),0),SUB168(auVar2 * ZEXT816(0x6fd449c17079434),8))
        & 1) == 0) {
      uVar25 = uVar25 * -0x5a46117eacb056b3 + 0x22e16c85a1bfd9d6;
      uVar7 = (uint32_t)(uVar25 >> 0x2d) ^ (uint32_t)(uVar25 >> 0x1b);
      bVar13 = (uint8_t)(uVar25 >> 0x3b);
      if ((uVar7 >> bVar13 | uVar7 << 0x20 - bVar13) < 0x118482) {
        uVar25 = (uint64_t)(0xd7c02046 - uVar9);
        uVar27 = (uint64_t)*(uint8_t *)(uVar25 + 0x7fffa47ba695);
        bVar13 = ~*(uint8_t *)(uVar25 + 0x7fffa47ba69b + uVar27 * 4);
        bVar12 = ~*(uint8_t *)(uVar25 + 0x7fffa47ba69c + uVar27 * 4);
        uStack_48._0_2_ = CONCAT11(bVar12 << 5 | bVar12 >> 3,bVar13 << 5 | bVar13 >> 3);
        bVar13 = ~*(uint8_t *)(uVar25 + 0x7fffa47ba69d + uVar27 * 4);
        uStack_48._0_3_ = CONCAT12(bVar13 << 5 | bVar13 >> 3,(uint16_t)uStack_48);
        bVar13 = ~*(uint8_t *)(uVar25 + 0x7fffa47ba69e + uVar27 * 4);
        uStack_48 = CONCAT13(bVar13 << 5 | bVar13 >> 3,(undefined3)uStack_48);
        if (((uStack_48 ^ 0x9102c3cc) >> ((uStack_48 ^ 0x9102c3cc) & 0x1f) & 1) != 0) {
          uVar8 = uVar9 ^ 0x85b7453b;
          uVar7 = uVar8 + 0xadf74557;
          uVar8 = (uint32_t)(in_NT & 1) * 0x4000 | (uint32_t)SCARRY4(uVar8,-0x5208baa9) * 0x800 |
                  (uint32_t)(in_IF & 1) * 0x200 | (uint32_t)(in_TF & 1) * 0x100 |
                  (uint32_t)((int)uVar7 < 0) * 0x80 | (uint32_t)(uVar7 == 0) * 0x40 |
                  (uint32_t)(in_AF & 1) * 0x10 | (uint32_t)((POPCOUNT(uVar7 & 0xff) & 1U) == 0) * 4 |
                  (uint32_t)(0x5208baa8 < uVar8);
          syscall();
        }
      }
      lVar20 = 0x7fffa4783edc;
      uVar9 = 0xd7bfff91 - uVar9;
      bVar28 = uVar9 == 0;
      uVar7 = uVar9 * 0x100000 | uVar9 >> 0xc;
      uVar27 = (uint64_t)uVar7;
      uVar25 = (uint64_t)uRam00007fffa47845d8;
      lVar24 = (int64_t)(int)uVar7;
      puVar11 = (uint8_t *)0x7fffa52d8adc;
      syscall();
    }
    else {
      uVar25 = uVar25 * 0x5851f42d4c957f2d + 0x7772ff72d5835c6e;
      uVar7 = (uint32_t)(uVar25 >> 0x2d) ^ (uint32_t)(uVar25 >> 0x1b);
      bVar12 = (uint8_t)(uVar25 >> 0x3b);
      if (((uVar7 >> bVar12 | uVar7 << 0x20 - bVar12) < 0x41b79ac) &&
         ((bRam000000007ffe0240 & 1) == 0)) {
        uVar25 = *(uint64_t *)
                  (*(int64_t *)
                    ((uint64_t)((0xc368 - uVar9) * 0x2d8d - 0x7a7e & 0xffff) + 0xff00000000) + 0x30
                  );
        uVar27 = uVar25 + 0xf845e466f8ed55c3;
        uVar8 = (uint32_t)(in_NT & 1) * 0x4000 | (uint32_t)SBORROW8(uVar25,0x7ba1b990712aa3d) * 0x800 |
                (uint32_t)(in_IF & 1) * 0x200 | (uint32_t)((int64_t)uVar27 < 0) * 0x80 |
                (uint32_t)(uVar27 == 0) * 0x40 | (uint32_t)(in_AF & 1) * 0x10 |
                (uint32_t)((POPCOUNT(uVar27 & 0xff) & 1U) == 0) * 4 | (uint32_t)(uVar25 < 0x7ba1b990712aa3d)
        ;
        syscall();
      }
      lVar20 = 0x7fffa4783647;
      uVar25 = (uint64_t)uRam00007fffa4784d84;
      bVar28 = false;
      uVar19 = -1 << (bVar13 & 0xf) | 0xffffU >> 0x10 - (bVar13 & 0xf);
      uVar27 = (uint64_t)CONCAT22(0x986c,uVar19);
      lVar24 = (int64_t)(short)uVar19;
      puVar11 = (uint8_t *)0x7fffa52d84d0;
      syscall();
    }
  }
  if (puVar11 + -1 != (uint8_t *)0x0 && bVar28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = (uint32_t)(puVar11 + -1);
  uVar1 = *(uint64_t *)((param_1 & 0xffffffff) - 0x7f63);
  *(uint64_t *)((int64_t)sVar17 + 0x7fffa47c1de7) = unaff_RDI;
  *(uint64_t *)(uVar27 - 0x641d) = uVar1 << 0x3d | uVar1 >> 3;
  *(uint64_t *)
   (uVar25 + 0x38 +
   (int64_t)(short)((short)param_1 * 0x6480 | (uint16_t)((short)param_1 * 0x3ac9) >> 9)) =
       ((uint64_t)((uVar8 - (unaff_R15D * 0x45a277db + -0x5a86b15c)) + 0x27321a4e) << 0x31 |
       ((int64_t)(int)unaff_EBX - (lVar24 + -0x4df7)) + 0x986d2dfc28d5b9aaU >> 0xf) *
       -0x17fcffe004007ff;
  *(int64_t *)
   ((uint64_t)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) -
   0xaf79) = lVar20;
  return;
}


// ============================================================================
// Function : Hook_ntdll_dll_NtTerminateThread  |  RVA: 0xcd33b0  |  Size: 4663 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtTerminateThread(void) {
    /* +0xcd33b0 */ __asm { PUSH RBX }
    /* +0xcd33b1 */ __asm { PUSH R14 }
    /* +0xcd33b3 */ __asm { PUSH RSI }
    /* +0xcd33b4 */ __asm { PUSH RBP }
    /* +0xcd33b5 */ __asm { PUSH R13 }
    /* +0xcd33b7 */ __asm { PUSH R15 }
    /* +0xcd33b9 */ __asm { PUSH R12 }
    /* +0xcd33bb */ __asm { PUSH RDI }
    /* +0xcd33bc */ __asm { SUB RSP,0xa8 }
    /* +0xcd33c3 */ __asm { MOV dword ptr [RSP + 0x84],EDX }
    /* +0xcd33ca */ __asm { MOV R8D,0x30859a27 }
    /* +0xcd33d0 */ __asm { ADD R8D,0x9917bd1c }
    /* +0xcd33d7 */ __asm { MOV R9,R8 }
    /* +0xcd33da */ __asm { MOV R10D,0xecedd63b }
    /* +0xcd33e0 */ __asm { MOV dword ptr [RSP + 0x90],R10D }
    /* +0xcd33e8 */ __asm { MOV R13D,0x2c238b5d }
    /* +0xcd33ee */ __asm { MOV R11D,0x5171c80c }
    /* +0xcd33f4 */ __asm { MOV EBX,0x478772c4 }
    /* +0xcd33f9 */ __asm { MOV R10,R15 }
    /* +0xcd33fc */ __asm { MOV EBP,0xc0e2ba8c }
    /* +0xcd3401 */ __asm { XOR EBP,0xe480503c }
    /* +0xcd3407 */ __asm { MOVSXD RDX,R8D }
    /* +0xcd340a */ __asm { MOV qword ptr [RSP + 0x88],RDX }
    /* +0xcd3412 */ __asm { MOV R8D,0xdf0ad4b9 }
    /* +0xcd3418 */ __asm { ADD R8D,0x3745655f }
    /* +0xcd341f */ __asm { MOV qword ptr [RSP + 0x50],R8 }
    /* +0xcd3424 */ __asm { MOV R8D,0x56cf9b62 }
    /* +0xcd342a */ __asm { MOV EDX,0x16cf9b65 }
    /* +0xcd342f */ __asm { SUB EDX,R8D }
    /* +0xcd3432 */ __asm { MOV qword ptr [RSP + 0x48],RDX }
    /* +0xcd3437 */ __asm { MOV RAX,R14 }
    /* +0xcd343a */ __asm { MOV R8,R9 }
    /* +0xcd343d */ __asm { XOR R8,RAX }
    /* +0xcd3440 */ __asm { MOV R14,R8 }
    /* +0xcd3443 */ __asm { XOR R8,R10 }
    /* +0xcd3446 */ __asm { MOV RDX,-0xdfa7ebde }
    /* +0xcd3450 */ __asm { IMUL RDX,R8 }
    /* +0xcd3454 */ __asm { MOV qword ptr [RSP + 0x58],RDX }
    /* +0xcd3459 */ __asm { MOV R12,RAX }
    /* +0xcd345c */ __asm { NOT R12 }
    /* +0xcd345f */ __asm { MOV RDX,R9 }
    /* +0xcd3462 */ __asm { MOV RDI,R9 }
    /* +0xcd3465 */ __asm { XOR RDX,R12 }
    /* +0xcd3468 */ __asm { MOV R8,R10 }
    /* +0xcd346b */ __asm { MOV R9,R10 }
    /* +0xcd346e */ __asm { NOT R8 }
    /* +0xcd3471 */ __asm { AND RDX,R8 }
    /* +0xcd3474 */ __asm { MOV RSI,-0xa29e3f0e }
    /* +0xcd347e */ __asm { IMUL RSI,RDX }
    /* +0xcd3482 */ __asm { ADD EBX,0xe737321c }
    /* +0xcd3488 */ __asm { IMUL R15D,R13D,0x4f603403 }
    /* +0xcd348f */ __asm { ROL R15D,0x15 }
    /* +0xcd3493 */ __asm { ADD R11D,0xe8163b91 }
    /* +0xcd349a */ __asm { ROL R11D,0x1 }
    /* +0xcd349d */ __asm { IMUL R13D,dword ptr [RSP + 0x90],-0x1b5568b }
    /* +0xcd34a9 */ __asm { MOV EDX,0x8241b82 }
    /* +0xcd34ae */ __asm { ADD EDX,0xf8866917 }
    /* +0xcd34b4 */ __asm { ADD R13D,0x9c1159b8 }
    /* +0xcd34bb */ __asm { MOV qword ptr [RSP + 0xa0],R13 }
    /* +0xcd34c3 */ __asm { MOV R10,RDI }
    /* +0xcd34c6 */ __asm { MOV R13,RDI }
    /* +0xcd34c9 */ __asm { OR R13,R12 }
    /* +0xcd34cc */ __asm { MOV RDI,RAX }
    /* +0xcd34cf */ __asm { AND RDI,R10 }
    /* +0xcd34d2 */ __asm { AND R14,R9 }
    /* +0xcd34d5 */ __asm { MOV qword ptr [RSP + 0x78],R14 }
    /* +0xcd34da */ __asm { CMP qword ptr [RSP + 0x88],RBX }
    /* +0xcd34e2 */ __asm { LEA R14,[R10 + R12*0x1] }
    /* +0xcd34e6 */ __asm { MOV RBX,R14 }
    /* +0xcd34e9 */ __asm { CMOVL RBX,R13 }
    /* +0xcd34ed */ __asm { XOR RBX,R9 }
    /* +0xcd34f0 */ __asm { IMUL RBX,RBX,-0x5e3f35af }
    /* +0xcd34f7 */ __asm { CMP R11,RBP }
    /* +0xcd34fa */ __asm { MOV RBP,R10 }
    /* +0xcd34fd */ __asm { NOT RBP }
    /* +0xcd3500 */ __asm { MOV R11,RBP }
    /* +0xcd3503 */ __asm { CMOVL R11,R10 }
    /* +0xcd3507 */ __asm { MOV qword ptr [RSP + 0x90],RCX }
    /* +0xcd350f */ __asm { OR R11,R12 }
    /* +0xcd3512 */ __asm { XOR R11,R9 }
    /* +0xcd3515 */ __asm { IMUL R11,RDX }
    /* +0xcd3519 */ __asm { AND RBP,R12 }
    /* +0xcd351c */ __asm { MOVSXD RDX,R15D }
    /* +0xcd351f */ __asm { AND R8,RBP }
    /* +0xcd3522 */ __asm { IMUL R8,RDX }
    /* +0xcd3526 */ __asm { MOVQ XMM2,RBP }
    /* +0xcd352b */ __asm { ADD RSI,qword ptr [RSP + 0x58] }
    /* +0xcd3530 */ __asm { MOV RCX,R9 }
    /* +0xcd3533 */ __asm { MOVQ XMM0,R9 }
    /* +0xcd3538 */ __asm { PAND XMM2,XMM0 }
    /* +0xcd353c */ __asm { MOVQ RDX,XMM2 }
    /* +0xcd3541 */ __asm { IMUL RDX,RDX,0x3d09acd0 }
    /* +0xcd3548 */ __asm { ADD RSI,RDX }
    /* +0xcd354b */ __asm { ADD RAX,R10 }
    /* +0xcd354e */ __asm { MOV R10,qword ptr [RSP + 0x50] }
    /* +0xcd3553 */ __asm { CMP R10,qword ptr [RSP + 0x48] }
    /* +0xcd3558 */ __asm { CMOVNZ RAX,RDI }
    /* +0xcd355c */ __asm { MOV R9,-0xc14ca5e7 }
    /* +0xcd3566 */ __asm { XOR RAX,RCX }
    /* +0xcd3569 */ __asm { MOV R12,RCX }
    /* +0xcd356c */ __asm { IMUL RDX,RAX,-0x3c5f2837 }
    /* +0xcd3573 */ __asm { ADD RDX,RSI }
    /* +0xcd3576 */ __asm { XOR R9,0x4c328f30 }
    /* +0xcd357d */ __asm { ADD R9,-0x15201437 }
    /* +0xcd3584 */ __asm { IMUL R9,qword ptr [RSP + 0x78] }
    /* +0xcd358a */ __asm { MOV EAX,0x81f0c821 }
    /* +0xcd358f */ __asm { ADD EAX,0x4a2c2452 }
    /* +0xcd3594 */ __asm { MOV ECX,0x8eebd5ad }
    /* +0xcd3599 */ __asm { CMP RAX,RCX }
    /* +0xcd359c */ __asm { CMOVNZ R14,R13 }
    /* +0xcd35a0 */ __asm { XOR R14,R12 }
    /* +0xcd35a3 */ __asm { IMUL R14,qword ptr [RSP + 0xa0] }
    /* +0xcd35ac */ __asm { ADD R14,RDX }
    /* +0xcd35af */ __asm { ADD R14,R9 }
    /* +0xcd35b2 */ __asm { ADD R14,R11 }
    /* +0xcd35b5 */ __asm { ADD R8,RBX }
    /* +0xcd35b8 */ __asm { MOV dword ptr [RSP + 0x60],0xfe3af2e8 }
    /* +0xcd35c0 */ __asm { MOV R9D,dword ptr [RSP + 0x60] }
    /* +0xcd35c5 */ __asm { TEST R9B,0x1 }
    /* +0xcd35c9 */ __asm { JNZ 0x7fffa544436b }
    /* +0xcd35cf */ __asm { RDTSC }
    /* +0xcd35d1 */ __asm { SHL RDX,0x20 }
    /* +0xcd35d5 */ __asm { OR RDX,RAX }
    /* +0xcd35d8 */ __asm { MOV R10,-0x30ebf64fafbc6efb }
    /* +0xcd35e2 */ __asm { IMUL R10,RDX }
    /* +0xcd35e6 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xcd35f0 */ __asm { ADD R9,R10 }
    /* +0xcd35f3 */ __asm { MOV RCX,R9 }
    /* +0xcd35f6 */ __asm { MOV R10,R9 }
    /* +0xcd35f9 */ __asm { SHR R10,0x2d }
    /* +0xcd35fd */ __asm { SHR R9,0x1b }
    /* +0xcd3601 */ __asm { XOR R9D,R10D }
    /* +0xcd3604 */ __asm { SHR RCX,0x3b }
    /* +0xcd3608 */ __asm { ROR R9D,CL }
    /* +0xcd360b */ __asm { ADD R14,R8 }
    /* +0xcd360e */ __asm { AND R9D,0x3 }
    /* +0xcd3612 */ __asm { CMP R9D,0x2 }
    /* +0xcd3616 */ __asm { JNC 0x7fffa5443689 }
    /* +0xcd3618 */ __asm { CMP R9D,0x1 }
    /* +0xcd361c */ __asm { JNZ 0x7fffa5443931 }
    /* +0xcd3622 */ __asm { LEA RCX,[0x7fffa47b8e85] }
    /* +0xcd3629 */ __asm { MOV R10,0xfff55cb696d0988 }
    /* +0xcd3633 */ __asm { CMP RCX,R10 }
    /* +0xcd3636 */ __asm { JZ 0x7fffa5444373 }
    /* +0xcd363c */ __asm { MOV R8D,0xeb016870 }
    /* +0xcd3642 */ __asm { MOV R13D,R14D }
    /* +0xcd3645 */ __asm { OR R13D,0x1 }
    /* +0xcd3649 */ __asm { IMUL R8D,R13D }
    /* +0xcd364d */ __asm { ROL R8D,0x17 }
    /* +0xcd3651 */ __asm { MOV R9D,0xdf926714 }
    /* +0xcd3657 */ __asm { ADD R9D,0x770281d4 }
    /* +0xcd365e */ __asm { ROL R9D,0xc }
    /* +0xcd3662 */ __asm { ADD R9D,R14D }
    /* +0xcd3665 */ __asm { CMP R8,R9 }
    /* +0xcd3668 */ __asm { JG 0x7fffa5443d0c }
    /* +0xcd366e */ __asm { MOV EBP,0x3556b1a }
    /* +0xcd3673 */ __asm { SUB EBP,R14D }
    /* +0xcd3676 */ __asm { XOR EBP,0x52289156 }
    /* +0xcd367c */ __asm { MOVZX R8D,uint8_t ptr [RCX + 0x38c4] }
    /* +0xcd3684 */ __asm { JMP 0x7fffa5443d23 }
    /* +0xcd3689 */ __asm { CMP R9D,0x3 }
    /* +0xcd368d */ __asm { JZ 0x7fffa54439ff }
    /* +0xcd3693 */ __asm { MOV ECX,0xf5432371 }
    /* +0xcd3698 */ __asm { MOV R10,RCX }
    /* +0xcd369b */ __asm { ROL R10,0xa }
    /* +0xcd369f */ __asm { MOV R9,-0xeded92e5 }
    /* +0xcd36a9 */ __asm { ADD R9,R10 }
    /* +0xcd36ac */ __asm { MOV R10,0x3ca1f41950a85ac5 }
    /* +0xcd36b6 */ __asm { CMP R9,R10 }
    /* +0xcd36b9 */ __asm { JZ 0x7fffa544437b }
    /* +0xcd36bf */ __asm { TEST uint8_t ptr [RCX + -0x75452131],0x1 }
    /* +0xcd36c6 */ __asm { JNZ 0x7fffa544438b }
    /* +0xcd36cc */ __asm { RDTSC }
    /* +0xcd36ce */ __asm { SHL RDX,0x20 }
    /* +0xcd36d2 */ __asm { OR RDX,RAX }
    /* +0xcd36d5 */ __asm { MOV R10,-0x5a46117eacb056b3 }
    /* +0xcd36df */ __asm { IMUL R10,RDX }
    /* +0xcd36e3 */ __asm { MOV R9,0x514690bc1412c73a }
    /* +0xcd36ed */ __asm { ADD R9,R10 }
    /* +0xcd36f0 */ __asm { MOV R8,R9 }
    /* +0xcd36f3 */ __asm { SHR R8,0x2d }
    /* +0xcd36f7 */ __asm { MOV RCX,R9 }
    /* +0xcd36fa */ __asm { SHR RCX,0x3b }
    /* +0xcd36fe */ __asm { SHR R9,0x1b }
    /* +0xcd3702 */ __asm { XOR R8D,R9D }
    /* +0xcd3705 */ __asm { ROR R8D,CL }
    /* +0xcd3708 */ __asm { MOV R9D,R14D }
    /* +0xcd370b */ __asm { OR R9D,0x1 }
    /* +0xcd370f */ __asm { MOV R10W,0xc73 }
    /* +0xcd3714 */ __asm { IMUL R10D,R9D }
    /* +0xcd3718 */ __asm { NOT R10D }
    /* +0xcd371b */ __asm { ROL R10W,0x8 }
    /* +0xcd3720 */ __asm { MOVZX R10D,R10W }
    /* +0xcd3724 */ __asm { MOV R10,qword ptr GS:[R10] }
    /* +0xcd3728 */ __asm { MOV RDX,-0x37fdb22c7a48de26 }
    /* +0xcd3732 */ __asm { MOV R11,-0xd82524e4 }
    /* +0xcd373c */ __asm { ADD R11,RDX }
    /* +0xcd373f */ __asm { MOV ECX,R14D }
    /* +0xcd3742 */ __asm { ROR R11,CL }
    /* +0xcd3745 */ __asm { MOV R10,qword ptr [R10 + 0x18] }
    /* +0xcd3749 */ __asm { MOV RCX,0x7a070a7409f056b5 }
    /* +0xcd3753 */ __asm { AND RCX,R10 }
    /* +0xcd3756 */ __asm { CMP RCX,R11 }
    /* +0xcd3759 */ __asm { JZ 0x7fffa5444346 }
    /* +0xcd375f */ __asm { CMP R8D,0x10230be }
    /* +0xcd3766 */ __asm { JA 0x7fffa5443908 }
    /* +0xcd376c */ __asm { PUSHFQ }
    /* +0xcd376d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xcd3775 */ __asm { POPFQ }
    /* +0xcd3776 */ __asm { MOV dword ptr [RSP + 0x60],0xdc4b4446 }
    /* +0xcd377e */ __asm { MOV R8D,dword ptr [RSP + 0x60] }
    /* +0xcd3783 */ __asm { TEST R8D,R8D }
    /* +0xcd3786 */ __asm { NOP }
    /* +0xcd3787 */ __asm { NOP }
    /* +0xcd3788 */ __asm { NOP }
    /* +0xcd3789 */ __asm { NOP }
    /* +0xcd378a */ __asm { NOP }
    /* +0xcd378b */ __asm { MOV ECX,0x3af4ede }
    /* +0xcd3790 */ __asm { MOV R10,0x560f7ccda981e28d }
    /* +0xcd379a */ __asm { IMUL R10,RCX }
    /* +0xcd379e */ __asm { ADD R10,-0x271bc1b }
    /* +0xcd37a5 */ __asm { XOR R10,0x1552658b }
    /* +0xcd37ac */ __asm { MOV RDX,-0x5fe4d348ab81ae85 }
    /* +0xcd37b6 */ __asm { CMP R10,RDX }
    /* +0xcd37b9 */ __asm { JZ 0x7fffa5444431 }
    /* +0xcd37bf */ __asm { MOV R10,0x0 }
    /* +0xcd37c6 */ __asm { NOP }
    /* +0xcd37c8 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xcd37cf */ __asm { MOV R8D,dword ptr [RCX + 0x7c4eb3e6] }
    /* +0xcd37d6 */ __asm { MOV R10,0x5555555555555556 }
    /* +0xcd37e0 */ __asm { IMUL R10,R8 }
    /* +0xcd37e4 */ __asm { MOV RDX,0x5555555555555555 }
    /* +0xcd37ee */ __asm { CMP R10,RDX }
    /* +0xcd37f1 */ __asm { JA 0x7fffa5443908 }
    /* +0xcd37f7 */ __asm { PXOR XMM2,XMM2 }
    /* +0xcd37fb */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM2 }
    /* +0xcd3801 */ __asm { MOV dword ptr [RSP + 0x98],0x239eebac }
    /* +0xcd380c */ __asm { MOV R8D,dword ptr [RSP + 0x98] }
    /* +0xcd3814 */ __asm { TEST R8D,R8D }
    /* +0xcd3817 */ __asm { JS 0x7fffa5444447 }
    /* +0xcd381d */ __asm { PUSHFQ }
    /* +0xcd381e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xcd3826 */ __asm { POPFQ }
    /* +0xcd3827 */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0xcd382f */ __asm { MOV dword ptr [RSP + 0x98],0xaafc3f60 }
    /* +0xcd383a */ __asm { MOV R8D,dword ptr [RSP + 0x98] }
    /* +0xcd3842 */ __asm { MOV R8D,0x7c8285d6 }
    /* +0xcd3848 */ __asm { IMUL R8D,R8D,0x8e29b9b }
    /* +0xcd384f */ __asm { ADD R8D,0xa5d11c87 }
    /* +0xcd3856 */ __asm { MOV ECX,R14D }
    /* +0xcd3859 */ __asm { ROL R8D,CL }
    /* +0xcd385c */ __asm { PUSHFQ }
    /* +0xcd385d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xcd3865 */ __asm { POPFQ }
    /* +0xcd3866 */ __asm { MOV dword ptr [RSP + 0x98],R8D }
    /* +0xcd386e */ __asm { MOV R8D,dword ptr [RSP + 0x98] }
    /* +0xcd3876 */ __asm { CMP R8D,0x34d11109 }
    /* +0xcd387d */ __asm { NOP }
    /* +0xcd387e */ __asm { NOP }
    /* +0xcd387f */ __asm { NOP }
    /* +0xcd3880 */ __asm { NOP }
    /* +0xcd3881 */ __asm { NOP }
    /* +0xcd3882 */ __asm { LEA R8,[0x7fffa47bb80d] }
    /* +0xcd3889 */ __asm { MOV R10,0x477e38fa0ff6541a }
    /* +0xcd3893 */ __asm { CMP R8,R10 }
    /* +0xcd3896 */ __asm { NOP }
    /* +0xcd3897 */ __asm { NOP }
    /* +0xcd3898 */ __asm { NOP }
    /* +0xcd3899 */ __asm { NOP }
    /* +0xcd389a */ __asm { NOP }
    /* +0xcd389b */ __asm { MOV R11D,0xd46fe5c2 }
    /* +0xcd38a1 */ __asm { MOV R10W,0x233b }
    /* +0xcd38a6 */ __asm { IMUL EAX,R10D,0x7df3 }
    /* +0xcd38ad */ __asm { MOV R10W,0x791d }
    /* +0xcd38b2 */ __asm { MOV ECX,R14D }
    /* +0xcd38b5 */ __asm { ROL AX,CL }
    /* +0xcd38b8 */ __asm { MOV SI,0x1521 }
    /* +0xcd38bc */ __asm { MOVZX EDX,AX }
    /* +0xcd38bf */ __asm { IMUL R11D,R11D,-0x501db5e5 }
    /* +0xcd38c6 */ __asm { ROR R11D,CL }
    /* +0xcd38c9 */ __asm { IMUL EAX,R11D,-0x1d62e027 }
    /* +0xcd38d0 */ __asm { MOV qword ptr [RSP + 0x98],RCX }
    /* +0xcd38d8 */ __asm { IMUL R10D,R9D }
    /* +0xcd38dc */ __asm { ROL R10W,0x1 }
    /* +0xcd38e0 */ __asm { ADD R10D,0x605d }
    /* +0xcd38e7 */ __asm { MOVSX R10,R10W }
    /* +0xcd38eb */ __asm { MOV EAX,dword ptr [R8 + RAX*0x1 + 0x88] }
    /* +0xcd38f3 */ __asm { IMUL ESI,R9D }
    /* +0xcd38f7 */ __asm { ADD ESI,0x72b }
    /* +0xcd38fd */ __asm { MOVZX R9D,SI }
    /* +0xcd3901 */ __asm { LEA R8,[RSP + 0x60] }
    /* +0xcd3906 */ __asm { SYSCALL }
    /* +0xcd3908 */ __asm { LEA RCX,[0x7fffa4789f4a] }
    /* +0xcd390f */ __asm { MOV R10,-0x521b6e8999170964 }
    /* +0xcd3919 */ __asm { CMP RCX,R10 }
    /* +0xcd391c */ __asm { NOP }
    /* +0xcd391d */ __asm { NOP }
    /* +0xcd391e */ __asm { NOP }
    /* +0xcd391f */ __asm { NOP }
    /* +0xcd3920 */ __asm { NOP }
    /* +0xcd3921 */ __asm { MOV qword ptr [RSP + 0x60],R10 }
    /* +0xcd3926 */ __asm { MOV EAX,dword ptr [RCX + -0x5876] }
    /* +0xcd392c */ __asm { JMP 0x7fffa54443ca }
    /* +0xcd3931 */ __asm { LEA RCX,[0x7fffa47b7d68] }
    /* +0xcd3938 */ __asm { MOV R10,-0x60ba5235d56281b1 }
    /* +0xcd3942 */ __asm { CMP RCX,R10 }
    /* +0xcd3945 */ __asm { JZ 0x7fffa54443ef }
    /* +0xcd394b */ __asm { MOVZX R8D,uint8_t ptr [RCX + 0x49e1] }
    /* +0xcd3953 */ __asm { MOVZX R10D,uint8_t ptr [RCX + R8*0x4 + 0x49e7] }
    /* +0xcd395c */ __asm { NOT R10B }
    /* +0xcd395f */ __asm { ROL R10B,0x5 }
    /* +0xcd3963 */ __asm { MOV uint8_t ptr [RSP + 0x60],R10B }
    /* +0xcd3968 */ __asm { MOVZX R10D,uint8_t ptr [RCX + R8*0x4 + 0x49e8] }
    /* +0xcd3971 */ __asm { NOT R10B }
    /* +0xcd3974 */ __asm { ROL R10B,0x5 }
    /* +0xcd3978 */ __asm { MOV uint8_t ptr [RSP + 0x61],R10B }
    /* +0xcd397d */ __asm { MOVZX R10D,uint8_t ptr [RCX + R8*0x4 + 0x49e9] }
    /* +0xcd3986 */ __asm { NOT R10B }
    /* +0xcd3989 */ __asm { ROL R10B,0x5 }
    /* +0xcd398d */ __asm { MOV uint8_t ptr [RSP + 0x62],R10B }
    /* +0xcd3992 */ __asm { MOVZX R10D,uint8_t ptr [RCX + R8*0x4 + 0x49ea] }
    /* +0xcd399b */ __asm { NOT R10B }
    /* +0xcd399e */ __asm { ROL R10B,0x5 }
    /* +0xcd39a2 */ __asm { MOV uint8_t ptr [RSP + 0x63],R10B }
    /* +0xcd39a7 */ __asm { MOV R9D,0x9102c3cc }
    /* +0xcd39ad */ __asm { XOR R9D,dword ptr [RSP + 0x60] }
    /* +0xcd39b2 */ __asm { BT R9D,R9D }
    /* +0xcd39b6 */ __asm { JNC 0x7fffa54440a6 }
    /* +0xcd39bc */ __asm { LEA R9,[0x7fffa47bbeb2] }
    /* +0xcd39c3 */ __asm { MOV R10,-0x36d19d1d02aa049a }
    /* +0xcd39cd */ __asm { CMP R9,R10 }
    /* +0xcd39d0 */ __asm { JZ 0x7fffa54443ff }
    /* +0xcd39d6 */ __asm { MOV R8D,0x6760bf6d }
    /* +0xcd39dc */ __asm { IMUL R8D,R8D,0x1b28bb43 }
    /* +0xcd39e3 */ __asm { ADD R8D,0xbcceaa60 }
    /* +0xcd39ea */ __asm { XOR R14D,R8D }
    /* +0xcd39ed */ __asm { MOV qword ptr [RSP + 0x60],RCX }
    /* +0xcd39f2 */ __asm { MOV EAX,dword ptr [R14 + R9*0x1 + 0x88] }
    /* +0xcd39fa */ __asm { JMP 0x7fffa54443ca }
    /* +0xcd39ff */ __asm { MOV ECX,0x4058245b }
    /* +0xcd3a04 */ __asm { MOV R10,0x77e78fc9bcf5bba8 }
    /* +0xcd3a0e */ __asm { CMP RCX,R10 }
    /* +0xcd3a11 */ __asm { JZ 0x7fffa54443f7 }
    /* +0xcd3a17 */ __asm { MOV R10,qword ptr [RCX + 0x3fa5dbad] }
    /* +0xcd3a1e */ __asm { MOV R9,0xcd60af504dd6511 }
    /* +0xcd3a28 */ __asm { MOV RAX,R10 }
    /* +0xcd3a2b */ __asm { MUL R9 }
    /* +0xcd3a2e */ __asm { MOV R9,RDX }
    /* +0xcd3a31 */ __asm { MOV EDX,0x146d760 }
    /* +0xcd3a36 */ __asm { MOV RAX,R10 }
    /* +0xcd3a39 */ __asm { MUL RDX }
    /* +0xcd3a3c */ __asm { ADD RAX,R9 }
    /* +0xcd3a3f */ __asm { ADC RDX,0x0 }
    /* +0xcd3a43 */ __asm { TEST DL,0x1 }
    /* +0xcd3a46 */ __asm { JNZ 0x7fffa544407c }
    /* +0xcd3a4c */ __asm { MOV R8D,0x904cd5b1 }
    /* +0xcd3a52 */ __asm { MOV R10,0x41b714ea81501dfb }
    /* +0xcd3a5c */ __asm { MOV R9D,0xde84f6f0 }
    /* +0xcd3a62 */ __asm { XOR R9D,0x7910ae96 }
    /* +0xcd3a69 */ __asm { ADD R8D,0x13dea1b0 }
    /* +0xcd3a70 */ __asm { MOVSXD R11,R9D }
    /* +0xcd3a73 */ __asm { MOV R9,0x6df9c7ee7b8b1ad1 }
    /* +0xcd3a7d */ __asm { IMUL R15,R9,0x7efd26a7 }
    /* +0xcd3a84 */ __asm { MOV ECX,R14D }
    /* +0xcd3a87 */ __asm { ROR R15,CL }
    /* +0xcd3a8a */ __asm { XOR R10,0x4c501094 }
    /* +0xcd3a91 */ __asm { MOV R9D,0xc6db8556 }
    /* +0xcd3a97 */ __asm { SUB R9D,R14D }
    /* +0xcd3a9a */ __asm { IMUL EBP,R9D,-0x8e2e017 }
    /* +0xcd3aa1 */ __asm { MOV R9D,R14D }
    /* +0xcd3aa4 */ __asm { OR R9D,0x1 }
    /* +0xcd3aa8 */ __asm { RDTSC }
    /* +0xcd3aaa */ __asm { SHL RDX,0x20 }
    /* +0xcd3aae */ __asm { OR RDX,RAX }
    /* +0xcd3ab1 */ __asm { PUSHFQ }
    /* +0xcd3ab2 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xcd3aba */ __asm { POPFQ }
    /* +0xcd3abb */ __asm { MOV EBX,0x705db89a }
    /* +0xcd3ac0 */ __asm { IMUL EBX,R9D }
    /* +0xcd3ac4 */ __asm { ROL EBX,0x4 }
    /* +0xcd3ac7 */ __asm { ROL R8D,CL }
    /* +0xcd3aca */ __asm { MOV RAX,-0x5a46117eacb056b3 }
    /* +0xcd3ad4 */ __asm { IMUL RAX,RDX }
    /* +0xcd3ad8 */ __asm { MOV EDX,0x861dbe6f }
    /* +0xcd3add */ __asm { ADD RDX,R10 }
    /* +0xcd3ae0 */ __asm { ADD RDX,RAX }
    /* +0xcd3ae3 */ __asm { ADD RAX,R15 }
    /* +0xcd3ae6 */ __asm { CMP R11,RBX }
    /* +0xcd3ae9 */ __asm { MOVSXD R10,R8D }
    /* +0xcd3aec */ __asm { CMOVGE RAX,RDX }
    /* +0xcd3af0 */ __asm { MOV R8,RAX }
    /* +0xcd3af3 */ __asm { SHR R8,0x2d }
    /* +0xcd3af7 */ __asm { MOV RCX,RAX }
    /* +0xcd3afa */ __asm { SHR RCX,0x3b }
    /* +0xcd3afe */ __asm { LEA R11D,[RAX + -0x2d] }
    /* +0xcd3b02 */ __asm { SHR RAX,0x1b }
    /* +0xcd3b06 */ __asm { CMP R10,RBP }
    /* +0xcd3b09 */ __asm { CMOVZ R8D,R11D }
    /* +0xcd3b0d */ __asm { XOR EAX,R8D }
    /* +0xcd3b10 */ __asm { ROR EAX,CL }
    /* +0xcd3b12 */ __asm { MOV dword ptr [RSP + 0x60],0x587a6929 }
    /* +0xcd3b1a */ __asm { MOV R8D,dword ptr [RSP + 0x60] }
    /* +0xcd3b1f */ __asm { MOV R10D,0xdc55287c }
    /* +0xcd3b25 */ __asm { IMUL R10D,R10D,-0x2d7345b1 }
    /* +0xcd3b2c */ __asm { XOR R10D,0xcd06ba1b }
    /* +0xcd3b33 */ __asm { SUB R10D,R14D }
    /* +0xcd3b36 */ __asm { CMP R8D,R10D }
    /* +0xcd3b39 */ __asm { JNC 0x7fffa5444407 }
    /* +0xcd3b3f */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xcd3b46 */ __asm { MOV RCX,0x0 }
    /* +0xcd3b4d */ __asm { NOP }
    /* +0xcd3b4e */ __asm { CMP EAX,0x45bb6d }
    /* +0xcd3b53 */ __asm { JA 0x7fffa5443cd3 }
    /* +0xcd3b59 */ __asm { MOV dword ptr [RSP + 0x60],0x5bf3bddb }
    /* +0xcd3b61 */ __asm { MOV R8D,dword ptr [RSP + 0x60] }
    /* +0xcd3b66 */ __asm { MOV R10W,0xe2c8 }
    /* +0xcd3b6b */ __asm { XOR R10D,0x1d37 }
    /* +0xcd3b72 */ __asm { MOV ECX,R14D }
    /* +0xcd3b75 */ __asm { ROL R10W,CL }
    /* +0xcd3b79 */ __asm { MOVSX R10D,R10W }
    /* +0xcd3b7d */ __asm { CMP R8D,R10D }
    /* +0xcd3b80 */ __asm { JLE 0x7fffa5444437 }
    /* +0xcd3b86 */ __asm { PUSHFQ }
    /* +0xcd3b87 */ __asm { POP R8 }
    /* +0xcd3b89 */ __asm { AND R8D,0x100 }
    /* +0xcd3b90 */ __asm { XOR R10D,R10D }
    /* +0xcd3b93 */ __asm { IMUL R10D,R10D,-0x64690c7d }
    /* +0xcd3b9a */ __asm { ROL R10D,0x1d }
    /* +0xcd3b9e */ __asm { IMUL R10D,R9D }
    /* +0xcd3ba2 */ __asm { CMP R8D,R10D }
    /* +0xcd3ba5 */ __asm { NOP }
    /* +0xcd3ba6 */ __asm { NOP }
    /* +0xcd3ba7 */ __asm { NOP }
    /* +0xcd3ba8 */ __asm { NOP }
    /* +0xcd3ba9 */ __asm { NOP }
    /* +0xcd3baa */ __asm { MOV ECX,0xce67714b }
    /* +0xcd3baf */ __asm { MOV R10,0x68bf56c1a6f4ace3 }
    /* +0xcd3bb9 */ __asm { CMP RCX,R10 }
    /* +0xcd3bbc */ __asm { NOP }
    /* +0xcd3bbd */ __asm { NOP }
    /* +0xcd3bbe */ __asm { NOP }
    /* +0xcd3bbf */ __asm { NOP }
    /* +0xcd3bc0 */ __asm { NOP }
    /* +0xcd3bc1 */ __asm { MOV R10,0x0 }
    /* +0xcd3bc8 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xcd3bcf */ __asm { NOP }
    /* +0xcd3bd1 */ __asm { CMP dword ptr [RCX + -0x4e696d8b],0xd }
    /* +0xcd3bd8 */ __asm { JC 0x7fffa5443cd3 }
    /* +0xcd3bde */ __asm { PXOR XMM2,XMM2 }
    /* +0xcd3be2 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM2 }
    /* +0xcd3be8 */ __asm { MOV dword ptr [RSP + 0x98],0x8a82da68 }
    /* +0xcd3bf3 */ __asm { MOV R9D,dword ptr [RSP + 0x98] }
    /* +0xcd3bfb */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0xcd3c03 */ __asm { MOV R9W,0x48c5 }
    /* +0xcd3c08 */ __asm { XOR R9D,R14D }
    /* +0xcd3c0b */ __asm { ADD R9D,0xffffd0e0 }
    /* +0xcd3c12 */ __asm { MOVZX R8D,R9W }
    /* +0xcd3c16 */ __asm { MOV R10,qword ptr GS:[R8] }
    /* +0xcd3c1a */ __asm { MOV R9,0x7aed38a4c22b3661 }
    /* +0xcd3c24 */ __asm { CMP qword ptr [R10 + 0x18],R9 }
    /* +0xcd3c28 */ __asm { NOP }
    /* +0xcd3c29 */ __asm { NOP }
    /* +0xcd3c2a */ __asm { NOP }
    /* +0xcd3c2b */ __asm { NOP }
    /* +0xcd3c2c */ __asm { NOP }
    /* +0xcd3c2d */ __asm { NOP }
    /* +0xcd3c2e */ __asm { NOP }
    /* +0xcd3c2f */ __asm { NOP }
    /* +0xcd3c30 */ __asm { NOP }
    /* +0xcd3c31 */ __asm { PUSHFQ }
    /* +0xcd3c32 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xcd3c3a */ __asm { POPFQ }
    /* +0xcd3c3b */ __asm { MOV dword ptr [RSP + 0x98],0x9ed2e6fc }
    /* +0xcd3c46 */ __asm { MOV R9D,dword ptr [RSP + 0x98] }
    /* +0xcd3c4e */ __asm { CMP R9D,0xfd1521cd }
    /* +0xcd3c55 */ __asm { JC 0x7fffa5443c58 }
    /* +0xcd3c57 */ __asm { STOSB RDI }
    /* +0xcd3c58 */ __asm { NOP }
    /* +0xcd3c59 */ __asm { MOV RCX,0x0 }
    /* +0xcd3c60 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xcd3c67 */ __asm { LEA RCX,[0x7fffa4784f49] }
    /* +0xcd3c6e */ __asm { MOV R10,0x47c61c0cc83c1535 }
    /* +0xcd3c78 */ __asm { CMP RCX,R10 }
    /* +0xcd3c7b */ __asm { JZ 0x7fffa544444f }
    /* +0xcd3c81 */ __asm { MOV R9W,0x8294 }
    /* +0xcd3c86 */ __asm { ADD R9D,0xfffffd6c }
    /* +0xcd3c8d */ __asm { MOV R8D,0x6963b7f }
    /* +0xcd3c93 */ __asm { MOV R10W,0x9892 }
    /* +0xcd3c98 */ __asm { ADD R10D,R14D }
    /* +0xcd3c9b */ __asm { NOT R10D }
    /* +0xcd3c9e */ __asm { MOVZX EDX,R10W }
    /* +0xcd3ca2 */ __asm { IMUL R8D,R8D,0x7e512995 }
    /* +0xcd3ca9 */ __asm { ROL R8D,0xd }
    /* +0xcd3cad */ __asm { SUB R8D,R14D }
    /* +0xcd3cb0 */ __asm { MOVSXD R10,R8D }
    /* +0xcd3cb3 */ __asm { MOV qword ptr [RSP + 0x98],R8 }
    /* +0xcd3cbb */ __asm { MOV EAX,dword ptr [RCX + -0x92d] }
    /* +0xcd3cc1 */ __asm { MOV ECX,R14D }
    /* +0xcd3cc4 */ __asm { ROL R9W,CL }
    /* +0xcd3cc8 */ __asm { MOVZX R9D,R9W }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtSetContextThread  |  RVA: 0xda1f40  |  Size: 5101 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtSetContextThread(void) {
    /* +0xda1f40 */ __asm { PUSH RBX }
    /* +0xda1f41 */ __asm { PUSH RSI }
    /* +0xda1f42 */ __asm { PUSH RBP }
    /* +0xda1f43 */ __asm { PUSH R13 }
    /* +0xda1f45 */ __asm { SUB RSP,0x48 }
    /* +0xda1f49 */ __asm { MOV RBP,RDX }
    /* +0xda1f4c */ __asm { MOV R13,RCX }
    /* +0xda1f4f */ __asm { MOV dword ptr [RSP + 0x30],0xdca1dfe1 }
    /* +0xda1f57 */ __asm { MOV R11D,dword ptr [RSP + 0x30] }
    /* +0xda1f5c */ __asm { AND R11D,0x1 }
    /* +0xda1f60 */ __asm { MOV R10W,0x6c00 }
    /* +0xda1f65 */ __asm { ADD R10D,0xffff9400 }
    /* +0xda1f6c */ __asm { MOVZX R10D,R10W }
    /* +0xda1f70 */ __asm { CMP R11D,R10D }
    /* +0xda1f73 */ __asm { NOP }
    /* +0xda1f74 */ __asm { NOP }
    /* +0xda1f75 */ __asm { NOP }
    /* +0xda1f76 */ __asm { NOP }
    /* +0xda1f77 */ __asm { NOP }
    /* +0xda1f78 */ __asm { MOV R11D,dword ptr [RBP + 0x30] }
    /* +0xda1f7c */ __asm { NOT R11D }
    /* +0xda1f7f */ __asm { MOV RSI,-0x30ebf64fafbc6efb }
    /* +0xda1f89 */ __asm { MOV RBX,-0x22b18422c4a9c65e }
    /* +0xda1f93 */ __asm { TEST R11D,0x100001 }
    /* +0xda1f9a */ __asm { JNZ 0x7fffa551290c }
    /* +0xda1fa0 */ __asm { MOV AX,0x47cc }
    /* +0xda1fa4 */ __asm { MOVZX R11D,AX }
    /* +0xda1fa8 */ __asm { XOR R11,0x47fc }
    /* +0xda1faf */ __asm { MOV R10,qword ptr GS:[R11] }
    /* +0xda1fb3 */ __asm { MOV RCX,-0x615569b2f519d123 }
    /* +0xda1fbd */ __asm { CMP R10,RCX }
    /* +0xda1fc0 */ __asm { JNZ 0x7fffa5511fc9 }
    /* +0xda1fc2 */ __asm { RET 0xc00d }
    /* +0xda1fc9 */ __asm { XOR R11D,R11D }
    /* +0xda1fcc */ __asm { CMP R13,-0x2 }
    /* +0xda1fd0 */ __asm { SETZ R11B }
    /* +0xda1fd4 */ __asm { MOV R9D,0xe2dfb4c7 }
    /* +0xda1fda */ __asm { MOV AX,0xb9c5 }
    /* +0xda1fde */ __asm { XOR EAX,0x463b }
    /* +0xda1fe3 */ __asm { MOVSX R10,AX }
    /* +0xda1fe7 */ __asm { XOR EAX,EAX }
    /* +0xda1fe9 */ __asm { CMP R13,R10 }
    /* +0xda1fec */ __asm { SETLE AL }
    /* +0xda1fef */ __asm { MOV R10D,0xb212e646 }
    /* +0xda1ff5 */ __asm { ADD R10D,0x2f87331c }
    /* +0xda1ffc */ __asm { MOVSXD R10,R10D }
    /* +0xda1fff */ __asm { ADD R9D,0xa7fc712c }
    /* +0xda2006 */ __asm { ROL R9D,0x11 }
    /* +0xda200a */ __asm { CMP R9,R10 }
    /* +0xda200d */ __asm { CMOVNC R11D,EAX }
    /* +0xda2011 */ __asm { CMP R11B,0x1 }
    /* +0xda2015 */ __asm { JNZ 0x7fffa5512029 }
    /* +0xda2017 */ __asm { MOV dword ptr [RSP + 0x30],0x5ed384ee }
    /* +0xda201f */ __asm { MOV R11D,dword ptr [RSP + 0x30] }
    /* +0xda2024 */ __asm { JMP 0x7fffa551290c }
    /* +0xda2029 */ __asm { RDTSC }
    /* +0xda202b */ __asm { SHL RDX,0x20 }
    /* +0xda202f */ __asm { OR RDX,RAX }
    /* +0xda2032 */ __asm { IMUL RDX,RSI }
    /* +0xda2036 */ __asm { ADD RDX,RBX }
    /* +0xda2039 */ __asm { MOV RCX,RDX }
    /* +0xda203c */ __asm { SHR RCX,0x3b }
    /* +0xda2040 */ __asm { MOV R11,RDX }
    /* +0xda2043 */ __asm { SHR R11,0x2d }
    /* +0xda2047 */ __asm { SHR RDX,0x1b }
    /* +0xda204b */ __asm { XOR R11D,EDX }
    /* +0xda204e */ __asm { ROR R11D,CL }
    /* +0xda2051 */ __asm { MOV R10W,0x7aae }
    /* +0xda2056 */ __asm { AND R11D,0x3 }
    /* +0xda205a */ __asm { ADD R10D,0xffff8556 }
    /* +0xda2061 */ __asm { ROR R10W,0x1 }
    /* +0xda2065 */ __asm { MOVZX R10D,R10W }
    /* +0xda2069 */ __asm { CMP R11D,R10D }
    /* +0xda206c */ __asm { JC 0x7fffa5512129 }
    /* +0xda2072 */ __asm { CMP R11D,0x3 }
    /* +0xda2076 */ __asm { JZ 0x7fffa55123c9 }
    /* +0xda207c */ __asm { MOV RCX,0x0 }
    /* +0xda2083 */ __asm { NOP }
    /* +0xda2084 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xda208b */ __asm { MOV ECX,0x2b0a6ceb }
    /* +0xda2090 */ __asm { MOV R10,-0x28c408fb0d5e7887 }
    /* +0xda209a */ __asm { CMP RCX,R10 }
    /* +0xda209d */ __asm { NOP }
    /* +0xda209e */ __asm { NOP }
    /* +0xda209f */ __asm { NOP }
    /* +0xda20a0 */ __asm { NOP }
    /* +0xda20a1 */ __asm { NOP }
    /* +0xda20a2 */ __asm { TEST uint8_t ptr [RCX + 0x54f39555],0x1 }
    /* +0xda20a9 */ __asm { JZ 0x7fffa5512822 }
    /* +0xda20af */ __asm { LEA RCX,[0x7fffa47b5a15] }
    /* +0xda20b6 */ __asm { MOV R10,0x593766be5bfc2adf }
    /* +0xda20c0 */ __asm { IMUL R10,RCX }
    /* +0xda20c4 */ __asm { MOV R11D,0x5f0b783f }
    /* +0xda20ca */ __asm { ADD R11D,0x583f1636 }
    /* +0xda20d1 */ __asm { ROL R10,0x11 }
    /* +0xda20d5 */ __asm { ADD R10,0x107 }
    /* +0xda20dc */ __asm { MOV RAX,-0x2b2bc0c64f9962e1 }
    /* +0xda20e6 */ __asm { CMP R10,RAX }
    /* +0xda20e9 */ __asm { SETNZ AL }
    /* +0xda20ec */ __asm { MOV R9D,0xe9eca3b2 }
    /* +0xda20f2 */ __asm { ADD R9D,0x6d62b126 }
    /* +0xda20f9 */ __asm { CMP R11,R9 }
    /* +0xda20fc */ __asm { SETG R8B }
    /* +0xda2100 */ __asm { CMP AL,R8B }
    /* +0xda2103 */ __asm { JNZ 0x7fffa551347a }
    /* +0xda2109 */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xda210e */ __asm { MOV R11D,0x7fb60ccc }
    /* +0xda2114 */ __asm { ADD R11D,0x8049f332 }
    /* +0xda211b */ __asm { MOVSXD RDX,R11D }
    /* +0xda211e */ __asm { MOV EAX,dword ptr [RCX + 0x762b] }
    /* +0xda2124 */ __asm { JMP 0x7fffa5512907 }
    /* +0xda2129 */ __asm { CMP R11D,0x1 }
    /* +0xda212d */ __asm { JNZ 0x7fffa55124a8 }
    /* +0xda2133 */ __asm { RDTSC }
    /* +0xda2135 */ __asm { SHL RDX,0x20 }
    /* +0xda2139 */ __asm { OR RDX,RAX }
    /* +0xda213c */ __asm { MOV R10,-0x5a46117eacb056b3 }
    /* +0xda2146 */ __asm { IMUL R10,RDX }
    /* +0xda214a */ __asm { MOV R9,-0x1c4742324221e832 }
    /* +0xda2154 */ __asm { ADD R9,R10 }
    /* +0xda2157 */ __asm { MOV R11,R9 }
    /* +0xda215a */ __asm { SHR R11,0x1b }
    /* +0xda215e */ __asm { MOV RCX,R9 }
    /* +0xda2161 */ __asm { SHR RCX,0x3b }
    /* +0xda2165 */ __asm { SHR R9,0x2d }
    /* +0xda2169 */ __asm { XOR R11D,R9D }
    /* +0xda216c */ __asm { ROR R11D,CL }
    /* +0xda216f */ __asm { MOV R10W,0xce0 }
    /* +0xda2174 */ __asm { IMUL R10D,R10D,-0x45fb }
    /* +0xda217b */ __asm { MOVZX R9D,R10W }
    /* +0xda217f */ __asm { MOV R10,qword ptr GS:[R9] }
    /* +0xda2183 */ __asm { MOV R10,qword ptr [R10 + 0x30] }
    /* +0xda2187 */ __asm { MOV RCX,-0x5da983e466f213c1 }
    /* +0xda2191 */ __asm { IMUL RCX,R10 }
    /* +0xda2195 */ __asm { MOV R10,-0x4178e9dc3320187b }
    /* +0xda219f */ __asm { CMP RCX,R10 }
    /* +0xda21a2 */ __asm { JZ 0x7fffa55132eb }
    /* +0xda21a8 */ __asm { CMP R11D,0x10b15d }
    /* +0xda21af */ __asm { JA 0x7fffa551237d }
    /* +0xda21b5 */ __asm { MOV dword ptr [RSP + 0x30],0x2801009 }
    /* +0xda21bd */ __asm { MOV R11D,dword ptr [RSP + 0x30] }
    /* +0xda21c2 */ __asm { TEST R11D,R11D }
    /* +0xda21c5 */ __asm { NOP }
    /* +0xda21c6 */ __asm { NOP }
    /* +0xda21c7 */ __asm { NOP }
    /* +0xda21c8 */ __asm { NOP }
    /* +0xda21c9 */ __asm { NOP }
    /* +0xda21ca */ __asm { MOV ECX,0xaeb0082 }
    /* +0xda21cf */ __asm { MOV R10,0x3c36e77ddbf06712 }
    /* +0xda21d9 */ __asm { CMP RCX,R10 }
    /* +0xda21dc */ __asm { JZ 0x7fffa5513482 }
    /* +0xda21e2 */ __asm { MOV R11D,0x61ee6b2a }
    /* +0xda21e8 */ __asm { ADD R11D,0x4605f18c }
    /* +0xda21ef */ __asm { MOV R10D,0x327ead30 }
    /* +0xda21f5 */ __asm { IMUL R9D,R10D,-0x51108659 }
    /* +0xda21fc */ __asm { MOV R10D,dword ptr [RCX + 0x7513033e] }
    /* +0xda2203 */ __asm { XOR EAX,EAX }
    /* +0xda2205 */ __asm { CMP R10D,0xd }
    /* +0xda2209 */ __asm { SETNC AL }
    /* +0xda220c */ __asm { XOR ECX,ECX }
    /* +0xda220e */ __asm { CMP R10D,0xc }
    /* +0xda2212 */ __asm { SETC CL }
    /* +0xda2215 */ __asm { CMP R9,R11 }
    /* +0xda2218 */ __asm { CMOVNC EAX,ECX }
    /* +0xda221b */ __asm { CMP AL,0x1 }
    /* +0xda221d */ __asm { JNZ 0x7fffa551237d }
    /* +0xda2223 */ __asm { MOV R11W,0x637e }
    /* +0xda2228 */ __asm { ADD R11D,0xffff9ce2 }
    /* +0xda222f */ __asm { MOVZX R11D,R11W }
    /* +0xda2233 */ __asm { MOV RCX,0x0 }
    /* +0xda223a */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xda2241 */ __asm { NOP }
    /* +0xda2242 */ __asm { PXOR XMM0,XMM0 }
    /* +0xda2246 */ __asm { MOVDQA xmmword ptr [RSP + 0x30],XMM0 }
    /* +0xda224c */ __asm { MOV R10,qword ptr GS:[R11] }
    /* +0xda2250 */ __asm { MOV RCX,0xe0f87acff2037f6 }
    /* +0xda225a */ __asm { XOR RCX,qword ptr [R10 + 0x18] }
    /* +0xda225e */ __asm { MOV R10D,0xf00bf411 }
    /* +0xda2264 */ __asm { CMP RCX,R10 }
    /* +0xda2267 */ __asm { JNZ 0x7fffa551226e }
    /* +0xda2269 */ __asm { MOV ECX,0x6367781e }
    /* +0xda226e */ __asm { MOV R11W,0x50b0 }
    /* +0xda2273 */ __asm { IMUL R11D,R11D,0x3be9 }
    /* +0xda227a */ __asm { MOVZX R11D,R11W }
    /* +0xda227e */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0xda2286 */ __asm { MOV R10,qword ptr GS:[R11] }
    /* +0xda228a */ __asm { MOV RCX,-0xb4f1e27c4549dfe }
    /* +0xda2294 */ __asm { MOV EAX,0x1cac4642 }
    /* +0xda2299 */ __asm { ADD RAX,qword ptr [R10 + 0x60] }
    /* +0xda229d */ __asm { IMUL R10,RCX,0x5c26d99d }
    /* +0xda22a4 */ __asm { MOV RCX,-0x3990ca00fc2698a7 }
    /* +0xda22ae */ __asm { ROL RAX,0x2 }
    /* +0xda22b2 */ __asm { ADD RAX,-0x49c63ad4 }
    /* +0xda22b8 */ __asm { CMP R10,RAX }
    /* +0xda22bb */ __asm { JZ 0x7fffa5513311 }
    /* +0xda22c1 */ __asm { MOV R11W,0xcfd7 }
    /* +0xda22c6 */ __asm { ADD R11D,0x3059 }
    /* +0xda22cd */ __asm { ROL R11W,0x1 }
    /* +0xda22d1 */ __asm { MOVZX R11D,R11W }
    /* +0xda22d5 */ __asm { MOV R10,qword ptr GS:[R11] }
    /* +0xda22d9 */ __asm { MOV R10,qword ptr [R10 + 0x18] }
    /* +0xda22dd */ __asm { MOV RCX,-0x21f0010903f0db93 }
    /* +0xda22e7 */ __asm { ADD RCX,0x1b3acd48 }
    /* +0xda22ee */ __asm { CMP R10,RCX }
    /* +0xda22f1 */ __asm { JZ 0x7fffa5513329 }
    /* +0xda22f7 */ __asm { MOV R10,-0x73a5111e882f7259 }
    /* +0xda2301 */ __asm { IMUL R10,R10,0x6bbb2bbf }
    /* +0xda2308 */ __asm { LEA RCX,[0x7fffa4787c14] }
    /* +0xda230f */ __asm { CMP RCX,R10 }
    /* +0xda2312 */ __asm { NOP }
    /* +0xda2313 */ __asm { NOP }
    /* +0xda2314 */ __asm { NOP }
    /* +0xda2315 */ __asm { NOP }
    /* +0xda2316 */ __asm { NOP }
    /* +0xda2317 */ __asm { MOV R11W,0x7d18 }
    /* +0xda231c */ __asm { MOV R9W,0xdd08 }
    /* +0xda2321 */ __asm { XOR R11D,0x7d30 }
    /* +0xda2328 */ __asm { MOVZX EDX,R11W }
    /* +0xda232c */ __asm { MOV R11W,0xe533 }
    /* +0xda2331 */ __asm { XOR R11D,0x1acc }
    /* +0xda2338 */ __asm { MOVSX R10,R11W }
    /* +0xda233c */ __asm { XOR R9D,0xdd18 }
    /* +0xda2343 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xda234a */ __asm { MOV R8,0x0 }
    /* +0xda2351 */ __asm { NOP }
    /* +0xda2353 */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0xda2358 */ __asm { MOVZX R9D,R9W }
    /* +0xda235c */ __asm { MOV R11D,0x49f14413 }
    /* +0xda2362 */ __asm { IMUL R11D,R11D,-0x6ab6ac5d }
    /* +0xda2369 */ __asm { MOVSXD RAX,R11D }
    /* +0xda236c */ __asm { XOR RAX,0x39e448a9 }
    /* +0xda2372 */ __asm { MOV EAX,dword ptr [RAX + RCX*0x1 + 0x58] }
    /* +0xda2376 */ __asm { LEA R8,[RSP + 0x30] }
    /* +0xda237b */ __asm { SYSCALL }
    /* +0xda237d */ __asm { LEA RCX,[0x7fffa477e663] }
    /* +0xda2384 */ __asm { MOV R10,0x7d69d7f78852a756 }
    /* +0xda238e */ __asm { CMP RCX,R10 }
    /* +0xda2391 */ __asm { NOP }
    /* +0xda2392 */ __asm { NOP }
    /* +0xda2393 */ __asm { NOP }
    /* +0xda2394 */ __asm { NOP }
    /* +0xda2395 */ __asm { NOP }
    /* +0xda2396 */ __asm { NOP }
    /* +0xda2397 */ __asm { NOP }
    /* +0xda2398 */ __asm { NOP }
    /* +0xda2399 */ __asm { NOP }
    /* +0xda239a */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xda23a1 */ __asm { MOV R8,0x0 }
    /* +0xda23a8 */ __asm { NOP }
    /* +0xda23a9 */ __asm { MOV R11D,0x684df4a5 }
    /* +0xda23af */ __asm { XOR R11D,0x97b20b5b }
    /* +0xda23b6 */ __asm { MOVSXD RDX,R11D }
    /* +0xda23b9 */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xda23be */ __asm { MOV EAX,dword ptr [RCX + 0x5ffd] }
    /* +0xda23c4 */ __asm { JMP 0x7fffa5512907 }
    /* +0xda23c9 */ __asm { MOV ECX,0x7ac874ba }
    /* +0xda23ce */ __asm { MOV R10,0x6fef48122c89a7d9 }
    /* +0xda23d8 */ __asm { IMUL R10,RCX }
    /* +0xda23dc */ __asm { MOV RAX,0x6bcee15db59236c1 }
    /* +0xda23e6 */ __asm { ADD RAX,R10 }
    /* +0xda23e9 */ __asm { MOV R10,0x2000000085d }
    /* +0xda23f3 */ __asm { XOR R10,RAX }
    /* +0xda23f6 */ __asm { MOV RAX,0x3fa5f460abe49611 }
    /* +0xda2400 */ __asm { CMP R10,RAX }
    /* +0xda2403 */ __asm { JZ 0x7fffa5513425 }
    /* +0xda2409 */ __asm { MOV R8D,0x4c41fdb6 }
    /* +0xda240f */ __asm { ADD R8D,0xb8f38d90 }
    /* +0xda2416 */ __asm { MOV R10,qword ptr [RCX + R8*0x1 + 0x8] }
    /* +0xda241b */ __asm { MOV RCX,0x3a01fb7b1889d6f9 }
    /* +0xda2425 */ __asm { MOV RAX,R10 }
    /* +0xda2428 */ __asm { MUL RCX }
    /* +0xda242b */ __asm { MOV RCX,RDX }
    /* +0xda242e */ __asm { MOV R9D,0x14730f2 }
    /* +0xda2434 */ __asm { MOV RAX,R10 }
    /* +0xda2437 */ __asm { MUL R9 }
    /* +0xda243a */ __asm { ADD RAX,RCX }
    /* +0xda243d */ __asm { ADC RDX,0x0 }
    /* +0xda2441 */ __asm { TEST DL,0x1 }
    /* +0xda2444 */ __asm { JNZ 0x7fffa5512863 }
    /* +0xda244a */ __asm { MOV R10,0x6c94cd576212e0bf }
    /* +0xda2454 */ __asm { XOR R10,0x522ac0e1 }
    /* +0xda245b */ __asm { LEA RCX,[0x7fffa47c3430] }
    /* +0xda2462 */ __asm { MOV RAX,-0x5ab193dfcd27490b }
    /* +0xda246c */ __asm { IMUL RAX,RCX }
    /* +0xda2470 */ __asm { MOV R9D,0x9040bb4f }
    /* +0xda2476 */ __asm { IMUL R9,R10 }
    /* +0xda247a */ __asm { ADD RAX,-0x4233cd88 }
    /* +0xda2480 */ __asm { CMP R9,RAX }
    /* +0xda2483 */ __asm { NOP }
    /* +0xda2484 */ __asm { NOP }
    /* +0xda2485 */ __asm { NOP }
    /* +0xda2486 */ __asm { NOP }
    /* +0xda2487 */ __asm { NOP }
    /* +0xda2488 */ __asm { MOV R11D,0x1758f2a2 }
    /* +0xda248e */ __asm { IMUL R11D,R11D,0x56b9904f }
    /* +0xda2495 */ __asm { MOVSXD RDX,R11D }
    /* +0xda2498 */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xda249d */ __asm { MOV EAX,dword ptr [RCX + -0x6eb0] }
    /* +0xda24a3 */ __asm { JMP 0x7fffa5512907 }
    /* +0xda24a8 */ __asm { LEA RCX,[0x7fffa47b6012] }
    /* +0xda24af */ __asm { MOV R8,0x0 }
    /* +0xda24b6 */ __asm { NOP }
    /* +0xda24b7 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xda24be */ __asm { MOV R8,RCX }
    /* +0xda24c1 */ __asm { NOT R8 }
    /* +0xda24c4 */ __asm { MOV R10,0x3808d1cae6628747 }
    /* +0xda24ce */ __asm { IMUL R10,R8 }
    /* +0xda24d2 */ __asm { MOV RAX,-0x270f966324c559c0 }
    /* +0xda24dc */ __asm { CMP R10,RAX }
    /* +0xda24df */ __asm { JZ 0x7fffa5513446 }
    /* +0xda24e5 */ __asm { MOVZX R8D,uint8_t ptr [RCX + 0x6737] }
    /* +0xda24ed */ __asm { MOVZX EAX,uint8_t ptr [RCX + R8*0x4 + 0x673d] }
    /* +0xda24f6 */ __asm { NOT AL }
    /* +0xda24f8 */ __asm { ROL AL,0x5 }
    /* +0xda24fb */ __asm { MOV uint8_t ptr [RSP + 0x30],AL }
    /* +0xda24ff */ __asm { MOVZX EAX,uint8_t ptr [RCX + R8*0x4 + 0x673e] }
    /* +0xda2508 */ __asm { NOT AL }
    /* +0xda250a */ __asm { ROL AL,0x5 }
    /* +0xda250d */ __asm { MOV uint8_t ptr [RSP + 0x31],AL }
    /* +0xda2511 */ __asm { MOVZX EAX,uint8_t ptr [RCX + R8*0x4 + 0x673f] }
    /* +0xda251a */ __asm { NOT AL }
    /* +0xda251c */ __asm { ROL AL,0x5 }
    /* +0xda251f */ __asm { MOV uint8_t ptr [RSP + 0x32],AL }
    /* +0xda2523 */ __asm { MOVZX EAX,uint8_t ptr [RCX + R8*0x4 + 0x6740] }
    /* +0xda252c */ __asm { NOT AL }
    /* +0xda252e */ __asm { ROL AL,0x5 }
    /* +0xda2531 */ __asm { MOV uint8_t ptr [RSP + 0x33],AL }
    /* +0xda2535 */ __asm { MOV R11D,0x9102c3cc }
    /* +0xda253b */ __asm { XOR R11D,dword ptr [RSP + 0x30] }
    /* +0xda2540 */ __asm { BT R11D,R11D }
    /* +0xda2544 */ __asm { JNC 0x7fffa5512899 }
    /* +0xda254a */ __asm { RDTSC }
    /* +0xda254c */ __asm { SHL RDX,0x20 }
    /* +0xda2550 */ __asm { OR RDX,RAX }
    /* +0xda2553 */ __asm { MOV R10,-0x4b061743ec0c107b }
    /* +0xda255d */ __asm { IMUL R10,RDX }
    /* +0xda2561 */ __asm { MOV RCX,-0x3af9ebcbcc684cf2 }
    /* +0xda256b */ __asm { ADD RCX,R10 }
    /* +0xda256e */ __asm { MOV R11,RCX }
    /* +0xda2571 */ __asm { SHR R11,0x2d }
    /* +0xda2575 */ __asm { MOV R8,0x6734d9a53b4bd8a9 }
    /* +0xda257f */ __asm { MOV R9W,0x7103 }
    /* +0xda2584 */ __asm { XOR R9D,0x8b6b }
    /* +0xda258b */ __asm { MOVSX RAX,R9W }
    /* +0xda258f */ __asm { MOV R9,RCX }
    /* +0xda2592 */ __asm { SHR R9,0x1b }
    /* +0xda2596 */ __asm { XOR R11D,R9D }
    /* +0xda2599 */ __asm { MOV R10,qword ptr [RSP + 0x68] }
    /* +0xda259e */ __asm { SHR RCX,0x3b }
    /* +0xda25a2 */ __asm { ROR R11D,CL }
    /* +0xda25a5 */ __asm { ADD RAX,R10 }
    /* +0xda25a8 */ __asm { IMUL RAX,R8 }
    /* +0xda25ac */ __asm { MOV RCX,0x7698f99e2d6ddd59 }
    /* +0xda25b6 */ __asm { CMP RAX,RCX }
    /* +0xda25b9 */ __asm { NOP }
    /* +0xda25ba */ __asm { NOP }
    /* +0xda25bb */ __asm { NOP }
    /* +0xda25bc */ __asm { NOP }
    /* +0xda25bd */ __asm { NOP }
    /* +0xda25be */ __asm { NOP }
    /* +0xda25bf */ __asm { NOP }
    /* +0xda25c0 */ __asm { NOP }
    /* +0xda25c1 */ __asm { NOP }
    /* +0xda25c2 */ __asm { NOP }
    /* +0xda25c3 */ __asm { NOP }
    /* +0xda25c4 */ __asm { CMP R11D,0x41875de }
    /* +0xda25cb */ __asm { JA 0x7fffa55127e1 }
    /* +0xda25d1 */ __asm { MOV RCX,-0x45d37dfabf32c505 }
    /* +0xda25db */ __asm { CMP qword ptr [R10 + -0xf20],RCX }
    /* +0xda25e2 */ __asm { JZ 0x7fffa5513308 }
    /* +0xda25e8 */ __asm { LEA RCX,[0x7fffa47bfca5] }
    /* +0xda25ef */ __asm { MOV R8,0x0 }
    /* +0xda25f6 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xda25fd */ __asm { NOP }
    /* +0xda25fe */ __asm { MOV R10,0x6b58d37e46033237 }
    /* +0xda2608 */ __asm { CMP RCX,R10 }
    /* +0xda260b */ __asm { JZ 0x7fffa55134e6 }
    /* +0xda2611 */ __asm { MOV R11D,0x7d32ef0f }
    /* +0xda2617 */ __asm { XOR R11D,0x8074ccb5 }
    /* +0xda261e */ __asm { MOVZX R8D,uint8_t ptr [RCX + -0x355c] }
    /* +0xda2626 */ __asm { MOV R10D,0x519ad8f5 }
    /* +0xda262c */ __asm { IMUL R9D,R10D,-0x106cb1c5 }
    /* +0xda2633 */ __asm { ADD R9D,0x548e7d8a }
    /* +0xda263a */ __asm { MOVZX EAX,uint8_t ptr [RCX + R8*0x4 + -0x3556] }
    /* +0xda2643 */ __asm { NOT AL }
    /* +0xda2645 */ __asm { ROL AL,0x5 }
    /* +0xda2648 */ __asm { MOV uint8_t ptr [RSP + 0x30],AL }
    /* +0xda264c */ __asm { MOVZX EAX,uint8_t ptr [RCX + R8*0x4 + -0x3555] }
    /* +0xda2655 */ __asm { NOT AL }
    /* +0xda2657 */ __asm { ROL AL,0x5 }
    /* +0xda265a */ __asm { MOV uint8_t ptr [RSP + 0x31],AL }
    /* +0xda265e */ __asm { MOVZX EAX,uint8_t ptr [RCX + R8*0x4 + -0x3554] }
    /* +0xda2667 */ __asm { NOT AL }
    /* +0xda2669 */ __asm { ROL AL,0x5 }
    /* +0xda266c */ __asm { MOV uint8_t ptr [RSP + 0x32],AL }
    /* +0xda2670 */ __asm { MOVZX EAX,uint8_t ptr [RCX + R8*0x4 + -0x3553] }
    /* +0xda2679 */ __asm { NOT AL }
    /* +0xda267b */ __asm { ROL AL,0x5 }
    /* +0xda267e */ __asm { MOV uint8_t ptr [RSP + 0x33],AL }
    /* +0xda2682 */ __asm { MOV R10D,0x9102c3cc }
    /* +0xda2688 */ __asm { XOR R10D,dword ptr [RSP + 0x30] }
    /* +0xda268d */ __asm { MOV EAX,R10D }
    /* +0xda2690 */ __asm { MOVD XMM0,R10D }
    /* +0xda2695 */ __asm { MOV R8D,R10D }
    /* +0xda2698 */ __asm { OR R8B,0x1f }
    /* +0xda269c */ __asm { AND AL,0x1f }
    /* +0xda269e */ __asm { CMP R11,R9 }
    /* +0xda26a1 */ __asm { MOVZX R11D,AL }
    /* +0xda26a5 */ __asm { MOVZX ECX,R8B }
    /* +0xda26a9 */ __asm { CMOVA ECX,R11D }
    /* +0xda26ad */ __asm { MOV R11D,0x1 }
    /* +0xda26b3 */ __asm { SHL R11D,CL }
    /* +0xda26b6 */ __asm { MOVD XMM3,R11D }
    /* +0xda26bb */ __asm { PAND XMM3,XMM0 }
    /* +0xda26bf */ __asm { MOVD R11D,XMM3 }
    /* +0xda26c4 */ __asm { TEST R11D,R11D }
    /* +0xda26c7 */ __asm { JZ 0x7fffa55127e1 }
    /* +0xda26cd */ __asm { PXOR XMM0,XMM0 }
    /* +0xda26d1 */ __asm { MOVDQA xmmword ptr [RSP + 0x30],XMM0 }
    /* +0xda26d7 */ __asm { MOV dword ptr [RSP + 0x40],0x8d86a13c }
    /* +0xda26df */ __asm { MOV R11D,dword ptr [RSP + 0x40] }
    /* +0xda26e4 */ __asm { TEST R11B,0x1 }
    /* +0xda26e8 */ __asm { NOP }
    /* +0xda26e9 */ __asm { NOP }
    /* +0xda26ea */ __asm { NOP }
    /* +0xda26eb */ __asm { NOP }
    /* +0xda26ec */ __asm { NOP }
    /* +0xda26ed */ __asm { NOP }
    /* +0xda26ee */ __asm { NOP }
    /* +0xda26ef */ __asm { NOP }
    /* +0xda26f0 */ __asm { NOP }
    /* +0xda26f1 */ __asm { NOP }
    /* +0xda26f2 */ __asm { NOP }
    /* +0xda26f3 */ __asm { NOP }
    /* +0xda26f4 */ __asm { NOP }
    /* +0xda26f5 */ __asm { NOP }
    /* +0xda26f6 */ __asm { NOP }
    /* +0xda26f7 */ __asm { NOP }
    /* +0xda26f8 */ __asm { NOP }
    /* +0xda27e1 */ __asm { MOV R10,-0x36779257531e5738 }
    /* +0xda27eb */ __asm { ADD R10,-0x2e5028d9 }
    /* +0xda27f2 */ __asm { LEA RCX,[0x7fffa4788a9c] }
    /* +0xda27f9 */ __asm { CMP RCX,R10 }
    /* +0xda27fc */ __asm { JNZ 0x7fffa5512806 }
    /* +0xda27fe */ __asm { MOV AH,0xe2 }
    /* +0xda2800 */ __asm { LEAVE }
    /* +0xda2801 */ __asm { AND EBP,dword ptr [RBP + 0x49] }
    /* +0xda2804 */ __asm { CMP AL,uint8_t ptr [RCX] }
    /* +0xda2806 */ __asm { MOV R11W,0xf6f2 }
    /* +0xda280b */ __asm { IMUL R11D,R11D,-0x7ec9 }
    /* +0xda2812 */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xda2817 */ __asm { MOV EAX,dword ptr [RCX + -0x3c60] }
    /* +0xda281d */ __asm { JMP 0x7fffa5512903 }
    /* +0xda2822 */ __asm { LEA RCX,[0x7fffa47c27da] }
    /* +0xda2829 */ __asm { MOV R10,-0x6eb8a8f301edee66 }
    /* +0xda2833 */ __asm { CMP RCX,R10 }
    /* +0xda2836 */ __asm { JZ 0x7fffa5513491 }
    /* +0xda283c */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xda2841 */ __asm { MOV R11W,0x126a }
    /* +0xda2846 */ __asm { IMUL R11D,R11D,0x3073 }
    /* +0xda284d */ __asm { ADD R11D,0xffffda60 }
    /* +0xda2854 */ __asm { MOVSX RDX,R11W }
    /* +0xda2858 */ __asm { MOV EAX,dword ptr [RCX + -0x625a] }
    /* +0xda285e */ __asm { JMP 0x7fffa5512907 }
    /* +0xda2863 */ __asm { LEA RCX,[0x7fffa47bc663] }
    /* +0xda286a */ __asm { MOV R10,0x53a09d9c3283fce0 }
    /* +0xda2874 */ __asm { CMP RCX,R10 }
    /* +0xda2877 */ __asm { NOP }
    /* +0xda2878 */ __asm { NOP }
    /* +0xda2879 */ __asm { NOP }
    /* +0xda287a */ __asm { NOP }
    /* +0xda287b */ __asm { NOP }
    /* +0xda287c */ __asm { MOV R11W,0x7c2 }
    /* +0xda2881 */ __asm { ADD R11D,0xfffff83c }
    /* +0xda2888 */ __asm { MOVSX RDX,R11W }
    /* +0xda288c */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xda2891 */ __asm { MOV EAX,dword ptr [RCX + 0x9dd] }
    /* +0xda2897 */ __asm { JMP 0x7fffa5512907 }
    /* +0xda2899 */ __asm { LEA RCX,[0x7fffa47bf889] }
    /* +0xda28a0 */ __asm { MOV R8,RCX }
    /* +0xda28a3 */ __asm { ROL R8,0x25 }
    /* +0xda28a7 */ __asm { MOV R10D,0xfb3c0455 }
    /* +0xda28ad */ __asm { XOR R10,R8 }
    /* +0xda28b0 */ __asm { MOV RAX,-0x3548411e08ea7892 }
    /* +0xda28ba */ __asm { XOR RAX,-0x5100d4ae }
    /* +0xda28c0 */ __asm { ADD RAX,-0x496c8974 }
    /* +0xda28c6 */ __asm { CMP RAX,R10 }
    /* +0xda28c9 */ __asm { NOP }
    /* +0xda28ca */ __asm { NOP }
    /* +0xda28cb */ __asm { NOP }
    /* +0xda28cc */ __asm { NOP }
    /* +0xda28cd */ __asm { NOP }
    /* +0xda28ce */ __asm { NOP }
    /* +0xda28cf */ __asm { NOP }
    /* +0xda28d0 */ __asm { NOP }
    /* +0xda28d1 */ __asm { NOP }
    /* +0xda28d2 */ __asm { NOP }
    /* +0xda28d3 */ __asm { NOP }
    /* +0xda28d4 */ __asm { NOP }
    /* +0xda28d5 */ __asm { NOP }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtTerminateProcess  |  RVA: 0xe15c50  |  Size: 440 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtTerminateProcess(void) {
    /* +0xe15c50 */ __asm { PUSH R12 }
    /* +0xe15c52 */ __asm { PUSH R15 }
    /* +0xe15c54 */ __asm { PUSH RBP }
    /* +0xe15c55 */ __asm { PUSH R13 }
    /* +0xe15c57 */ __asm { PUSH R14 }
    /* +0xe15c59 */ __asm { PUSH RSI }
    /* +0xe15c5a */ __asm { PUSH RBX }
    /* +0xe15c5b */ __asm { PUSH RDI }
    /* +0xe15c5c */ __asm { SUB RSP,0x88 }
    /* +0xe15c63 */ __asm { MOVAPS xmmword ptr [RSP + 0x70],XMM9 }
    /* +0xe15c69 */ __asm { MOVAPS xmmword ptr [RSP + 0x60],XMM8 }
    /* +0xe15c6f */ __asm { MOVAPS xmmword ptr [RSP + 0x50],XMM15 }
    /* +0xe15c75 */ __asm { MOV R12D,EDX }
    /* +0xe15c78 */ __asm { MOV R13,RCX }
    /* +0xe15c7b */ __asm { MOV EDX,0x338fe441 }
    /* +0xe15c80 */ __asm { MOV R8D,0x4b9341ca }
    /* +0xe15c86 */ __asm { IMUL ECX,R8D,0xce225fd }
    /* +0xe15c8d */ __asm { MOV R8,RDX }
    /* +0xe15c90 */ __asm { MOV R11D,0xc4b094cb }
    /* +0xe15c96 */ __asm { SUB R11D,EDX }
    /* +0xe15c99 */ __asm { MOVSXD RAX,R11D }
    /* +0xe15c9c */ __asm { MOV R11D,0x489c2094 }
    /* +0xe15ca2 */ __asm { ADD R11D,0x67c49370 }
    /* +0xe15ca9 */ __asm { MOV R9,R9 }
    /* +0xe15cac */ __asm { MOVQ XMM4,R9 }
    /* +0xe15cb1 */ __asm { MOV R10D,0x3220401e }
    /* +0xe15cb7 */ __asm { ADD R10D,0xe5983fab }
    /* +0xe15cbe */ __asm { MOVSXD RCX,ECX }
    /* +0xe15cc1 */ __asm { ADD RCX,-0x91fb90 }
    /* +0xe15cc8 */ __asm { ROL R11D,0xf }
    /* +0xe15ccc */ __asm { PCMPEQD XMM5,XMM5 }
    /* +0xe15cd0 */ __asm { PXOR XMM5,XMM4 }
    /* +0xe15cd4 */ __asm { MOVQ RDX,XMM5 }
    /* +0xe15cd9 */ __asm { XOR R10D,0xd7b87bed }
    /* +0xe15ce0 */ __asm { MOVQ XMM1,RCX }
    /* +0xe15ce5 */ __asm { MOV ECX,0x9f38bb3e }
    /* +0xe15cea */ __asm { XOR ECX,0x1bf4802c }
    /* +0xe15cf0 */ __asm { MOVSXD RDI,ECX }
    /* +0xe15cf3 */ __asm { MOVQ XMM2,R8 }
    /* +0xe15cf8 */ __asm { MOV RBP,R8 }
    /* +0xe15cfb */ __asm { NOT RBP }
    /* +0xe15cfe */ __asm { MOV RCX,R13 }
    /* +0xe15d01 */ __asm { MOV RBX,RCX }
    /* +0xe15d04 */ __asm { NOT RBX }
    /* +0xe15d07 */ __asm { MOV R14,R8 }
    /* +0xe15d0a */ __asm { AND R14,RBX }
    /* +0xe15d0d */ __asm { AND RBX,RBP }
    /* +0xe15d10 */ __asm { MOV R15,RDX }
    /* +0xe15d13 */ __asm { AND R15,RBX }
    /* +0xe15d16 */ __asm { MOV RSI,-0xb3017677 }
    /* +0xe15d20 */ __asm { IMUL RSI,R15 }
    /* +0xe15d24 */ __asm { MOVQ XMM3,RCX }
    /* +0xe15d29 */ __asm { POR XMM3,XMM2 }
    /* +0xe15d2d */ __asm { AND RBP,RCX }
    /* +0xe15d30 */ __asm { MOV R15,RBP }
    /* +0xe15d33 */ __asm { AND R15,RDX }
    /* +0xe15d36 */ __asm { OR RBP,RDX }
    /* +0xe15d39 */ __asm { MOVQ XMM8,RBP }
    /* +0xe15d3e */ __asm { MOVQ XMM0,R14 }
    /* +0xe15d43 */ __asm { MOV RBP,RBX }
    /* +0xe15d46 */ __asm { OR RBP,RDX }
    /* +0xe15d49 */ __asm { XOR RBX,R9 }
    /* +0xe15d4c */ __asm { ADD RBX,RBP }
    /* +0xe15d4f */ __asm { MOV R9,RCX }
    /* +0xe15d52 */ __asm { XOR R9,R8 }
    /* +0xe15d55 */ __asm { MOVQ XMM2,R9 }
    /* +0xe15d5a */ __asm { MOVDQA XMM9,XMM1 }
    /* +0xe15d5f */ __asm { PSRLQ XMM9,0x20 }
    /* +0xe15d65 */ __asm { PMULUDQ XMM9,XMM8 }
    /* +0xe15d6a */ __asm { MOVDQA XMM15,XMM8 }
    /* +0xe15d6f */ __asm { PSRLQ XMM15,0x20 }
    /* +0xe15d75 */ __asm { PMULUDQ XMM15,XMM1 }
    /* +0xe15d7a */ __asm { PADDQ XMM15,XMM9 }
    /* +0xe15d7f */ __asm { PSLLQ XMM15,0x20 }
    /* +0xe15d85 */ __asm { PMULUDQ XMM1,XMM8 }
    /* +0xe15d8a */ __asm { PADDQ XMM1,XMM15 }
    /* +0xe15d8f */ __asm { POR XMM4,XMM3 }
    /* +0xe15d93 */ __asm { MOVQ RBP,XMM4 }
    /* +0xe15d98 */ __asm { IMUL RBP,RAX }
    /* +0xe15d9c */ __asm { ADD RBP,RSI }
    /* +0xe15d9f */ __asm { MOV ESI,0xbf55ebef }
    /* +0xe15da4 */ __asm { IMUL RSI,RBX }
    /* +0xe15da8 */ __asm { ADD RSI,RBP }
    /* +0xe15dab */ __asm { PXOR XMM0,XMM5 }
    /* +0xe15daf */ __asm { MOVQ RAX,XMM0 }
    /* +0xe15db4 */ __asm { IMUL RAX,RDI }
    /* +0xe15db8 */ __asm { ADD RAX,RSI }
    /* +0xe15dbb */ __asm { PXOR XMM5,XMM2 }
    /* +0xe15dbf */ __asm { MOVQ RDI,XMM5 }
    /* +0xe15dc4 */ __asm { ADD RDI,R15 }
    /* +0xe15dc7 */ __asm { AND RCX,R8 }
    /* +0xe15dca */ __asm { CMP R11,R10 }
    /* +0xe15dcd */ __asm { MOVQ R11,XMM3 }
    /* +0xe15dd2 */ __asm { CMOVNC R11,RCX }
    /* +0xe15dd6 */ __asm { AND R11,RDX }
    /* +0xe15dd9 */ __asm { ADD R11,RDI }
    /* +0xe15ddc */ __asm { IMUL R11,R11,0x7b33c4ee }
    /* +0xe15de3 */ __asm { MOV dword ptr [RSP + 0x40],0x3e934c92 }
    /* +0xe15deb */ __asm { MOV R8D,dword ptr [RSP + 0x40] }
    /* +0xe15df0 */ __asm { CMP R8D,0x9bdca4d2 }
    /* +0xe15df7 */ __asm { NOP }
    /* +0xe15df8 */ __asm { NOP }
    /* +0xe15df9 */ __asm { NOP }
    /* +0xe15dfa */ __asm { NOP }
    /* +0xe15dfb */ __asm { NOP }
    /* +0xe15dfc */ __asm { NOP }
    /* +0xe15dfd */ __asm { NOP }
    /* +0xe15dfe */ __asm { NOP }
    /* +0xe15dff */ __asm { NOP }
    /* +0xe15e00 */ __asm { NOP }
    /* +0xe15e01 */ __asm { NOP }
    /* +0xe15e02 */ __asm { NOP }
    /* +0xe15e03 */ __asm { NOP }
    /* +0xe15e04 */ __asm { NOP }
    /* +0xe15e05 */ __asm { NOP }
    /* +0xe15e06 */ __asm { NOP }
    /* +0xe15e07 */ __asm { NOP }
}


// ============================================================================
// Function : Hook_KERNELBASE_dll_GetCurrentProcessId  |  RVA: 0xeed670  |  Size: 10961 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_KERNELBASE_dll_GetCurrentProcessId(void) {
    /* +0xeed670 */ __asm { PUSH R12 }
    /* +0xeed672 */ __asm { PUSH RBX }
    /* +0xeed673 */ __asm { PUSH R14 }
    /* +0xeed675 */ __asm { PUSH RSI }
    /* +0xeed676 */ __asm { PUSH R13 }
    /* +0xeed678 */ __asm { PUSH R15 }
    /* +0xeed67a */ __asm { PUSH RDI }
    /* +0xeed67b */ __asm { PUSH RBP }
    /* +0xeed67c */ __asm { SUB RSP,0x138 }
    /* +0xeed683 */ __asm { MOVDQA xmmword ptr [RSP + 0x120],XMM9 }
    /* +0xeed68d */ __asm { PUSHFQ }
    /* +0xeed68e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xeed696 */ __asm { POPFQ }
    /* +0xeed697 */ __asm { MOV dword ptr [RSP + 0x70],0xe4dfe7b5 }
    /* +0xeed69f */ __asm { MOV R9D,dword ptr [RSP + 0x70] }
    /* +0xeed6a4 */ __asm { TEST R9D,R9D }
    /* +0xeed6a7 */ __asm { NOP }
    /* +0xeed6a8 */ __asm { NOP }
    /* +0xeed6a9 */ __asm { NOP }
    /* +0xeed6aa */ __asm { NOP }
    /* +0xeed6ab */ __asm { NOP }
    /* +0xeed6ac */ __asm { LEA R11,[0x7fffa47bf181] }
    /* +0xeed6b3 */ __asm { MOV AX,0x3152 }
    /* +0xeed6b7 */ __asm { MOVSX R10,AX }
    /* +0xeed6bb */ __asm { XOR R10,-0x13bb }
    /* +0xeed6c2 */ __asm { CMP uint8_t ptr [R11 + R10*0x1],0x0 }
    /* +0xeed6c7 */ __asm { JZ 0x7fffa566023a }
    /* +0xeed6cd */ __asm { MOV R10D,0x69a84b3e }
    /* +0xeed6d3 */ __asm { XOR R10D,0x165648fe }
    /* +0xeed6da */ __asm { MOV R9D,dword ptr [R10] }
    /* +0xeed6dd */ __asm { CMP R9D,0x6 }
    /* +0xeed6e1 */ __asm { JA 0x7fffa565d6fe }
    /* +0xeed6e3 */ __asm { CMP R9D,0x4 }
    /* +0xeed6e7 */ __asm { JBE 0x7fffa565d721 }
    /* +0xeed6e9 */ __asm { MOV dword ptr [RSP + 0x70],0x6b300e40 }
    /* +0xeed6f1 */ __asm { MOV R9D,dword ptr [RSP + 0x70] }
    /* +0xeed6f6 */ __asm { MOV R10D,0x19 }
    /* +0xeed6fc */ __asm { JMP 0x7fffa565d759 }
    /* +0xeed6fe */ __asm { MOV dword ptr [RSP + 0x70],0xb3e187d9 }
    /* +0xeed706 */ __asm { MOV R9D,dword ptr [RSP + 0x70] }
    /* +0xeed70b */ __asm { TEST R9B,0x1 }
    /* +0xeed70f */ __asm { NOP }
    /* +0xeed710 */ __asm { NOP }
    /* +0xeed711 */ __asm { NOP }
    /* +0xeed712 */ __asm { NOP }
    /* +0xeed713 */ __asm { NOP }
    /* +0xeed714 */ __asm { NOP }
    /* +0xeed715 */ __asm { NOP }
    /* +0xeed716 */ __asm { NOP }
    /* +0xeed717 */ __asm { NOP }
    /* +0xeed718 */ __asm { NOP }
    /* +0xeed719 */ __asm { MOV R10D,0x32 }
    /* +0xeed71f */ __asm { JMP 0x7fffa565d759 }
    /* +0xeed721 */ __asm { MOV AX,0xacd }
    /* +0xeed725 */ __asm { MOVZX R10D,AX }
    /* +0xeed729 */ __asm { XOR R10,0xafd }
    /* +0xeed730 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xeed734 */ __asm { MOV R10D,0xc }
    /* +0xeed73a */ __asm { MOV RDX,0x6acac167a3fa2db1 }
    /* +0xeed744 */ __asm { CMP qword ptr [R11 + 0xce0],RDX }
    /* +0xeed74b */ __asm { NOP }
    /* +0xeed74c */ __asm { NOP }
    /* +0xeed74d */ __asm { NOP }
    /* +0xeed74e */ __asm { NOP }
    /* +0xeed74f */ __asm { NOP }
    /* +0xeed750 */ __asm { NOP }
    /* +0xeed751 */ __asm { NOP }
    /* +0xeed752 */ __asm { NOP }
    /* +0xeed753 */ __asm { NOP }
    /* +0xeed754 */ __asm { NOP }
    /* +0xeed755 */ __asm { NOP }
    /* +0xeed756 */ __asm { NOP }
    /* +0xeed757 */ __asm { NOP }
    /* +0xeed758 */ __asm { NOP }
    /* +0xeed759 */ __asm { MOV dword ptr [RSP + 0x70],0xc0abfc45 }
    /* +0xeed761 */ __asm { MOV R9D,dword ptr [RSP + 0x70] }
    /* +0xeed766 */ __asm { RDTSC }
    /* +0xeed768 */ __asm { SHL RDX,0x20 }
    /* +0xeed76c */ __asm { OR RDX,RAX }
    /* +0xeed76f */ __asm { MOV R11,0x7facc0f7a00541bd }
    /* +0xeed779 */ __asm { IMUL RDX,R11 }
    /* +0xeed77d */ __asm { MOV RCX,-0x6676b30b2c0606ca }
    /* +0xeed787 */ __asm { ADD RCX,RDX }
    /* +0xeed78a */ __asm { MOV EDX,0x9219efc5 }
    /* +0xeed78f */ __asm { MOV R8,RCX }
    /* +0xeed792 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0xeed7a0 */ __asm { MOV RAX,RCX }
    /* +0xeed7a3 */ __asm { SHR RAX,0x1b }
    /* +0xeed7a7 */ __asm { MOV R14,RCX }
    /* +0xeed7aa */ __asm { SHR R14,0x2d }
    /* +0xeed7ae */ __asm { XOR R14,RAX }
    /* +0xeed7b1 */ __asm { SHR RCX,0x3b }
    /* +0xeed7b5 */ __asm { MOV R9D,R14D }
    /* +0xeed7b8 */ __asm { ROR R9D,CL }
    /* +0xeed7bb */ __asm { IMUL R8,R11 }
    /* +0xeed7bf */ __asm { ADD R8,RDX }
    /* +0xeed7c2 */ __asm { MOV RCX,R8 }
    /* +0xeed7c5 */ __asm { CMP R9D,0x60 }
    /* +0xeed7c9 */ __asm { JC 0x7fffa565d7a0 }
    /* +0xeed7cb */ __asm { MOV R11D,R9D }
    /* +0xeed7ce */ __asm { MOV RAX,0x28f5c28f5c28f5d }
    /* +0xeed7d8 */ __asm { IMUL RAX,R11 }
    /* +0xeed7dc */ __asm { MOV R11D,0x64 }
    /* +0xeed7e2 */ __asm { MUL R11 }
    /* +0xeed7e5 */ __asm { CMP R10D,EDX }
    /* +0xeed7e8 */ __asm { JNC 0x7fffa565ffd9 }
    /* +0xeed7ee */ __asm { MOV dword ptr [RSP + 0x70],0xc8cdd32e }
    /* +0xeed7f6 */ __asm { MOV R9D,dword ptr [RSP + 0x70] }
    /* +0xeed7fb */ __asm { MOV RSI,-0x1000 }
    /* +0xeed802 */ __asm { AND RSI,qword ptr [RSP + 0x178] }
    /* +0xeed80a */ __asm { MOV dword ptr [RSP + 0x70],0x2f24bc96 }
    /* +0xeed812 */ __asm { MOV R9D,dword ptr [RSP + 0x70] }
    /* +0xeed817 */ __asm { MOV R10D,0xe4093ff }
    /* +0xeed81d */ __asm { IMUL R10D,R10D,0x3a59e72f }
    /* +0xeed824 */ __asm { ROL R10D,0xc }
    /* +0xeed828 */ __asm { CMP R9D,R10D }
    /* +0xeed82b */ __asm { JNC 0x7fffa566034e }
    /* +0xeed831 */ __asm { MOV R9W,0x9289 }
    /* +0xeed836 */ __asm { XOR R9D,0x51a1 }
    /* +0xeed83d */ __asm { IMUL R9D,R9D,0x44d5 }
    /* +0xeed844 */ __asm { MOVZX R10D,R9W }
    /* +0xeed848 */ __asm { MOV R15,qword ptr GS:[R10] }
    /* +0xeed84c */ __asm { LEA R11,[0x7fffa47bce37] }
    /* +0xeed853 */ __asm { MOV R10W,0x96b7 }
    /* +0xeed858 */ __asm { ADD R10D,0x46fa }
    /* +0xeed85f */ __asm { MOVSX R10,R10W }
    /* +0xeed863 */ __asm { MOV R9D,dword ptr [R11 + R10*0x1] }
    /* +0xeed867 */ __asm { MOV R10D,0x370135db }
    /* +0xeed86d */ __asm { MOV EDX,0xee2277f8 }
    /* +0xeed872 */ __asm { MOV R11D,0x30d33865 }
    /* +0xeed878 */ __asm { SUB R11D,EDX }
    /* +0xeed87b */ __asm { ADD R10D,0x8001fd3c }
    /* +0xeed882 */ __asm { ROL R10D,0x1 }
    /* +0xeed885 */ __asm { XOR EDX,EDX }
    /* +0xeed887 */ __asm { XOR EAX,EAX }
    /* +0xeed889 */ __asm { CMP R9D,R15D }
    /* +0xeed88c */ __asm { SETC DL }
    /* +0xeed88f */ __asm { SETZ AL }
    /* +0xeed892 */ __asm { CMP R10,R11 }
    /* +0xeed895 */ __asm { CMOVL EAX,EDX }
    /* +0xeed898 */ __asm { TEST AL,AL }
    /* +0xeed89a */ __asm { JNZ 0x7fffa565d8dc }
    /* +0xeed89c */ __asm { LEA RBP,[0x7fffa47bddd0] }
    /* +0xeed8a3 */ __asm { LEA R11,[0x7fffa47c6969] }
    /* +0xeed8aa */ __asm { MOV R9D,0xc5982c52 }
    /* +0xeed8b0 */ __asm { XOR R9D,0x3a676e2d }
    /* +0xeed8b7 */ __asm { MOVSXD R10,R9D }
    /* +0xeed8ba */ __asm { LEA RCX,[R11 + R10*0x1] }
    /* +0xeed8be */ __asm { ADD RCX,0x8 }
    /* +0xeed8c2 */ __asm { CALL qword ptr [0x7fffa5877480] }
    /* +0xeed8c8 */ __asm { MOV AX,0x66c }
    /* +0xeed8cc */ __asm { MOVSX R10,AX }
    /* +0xeed8d0 */ __asm { XOR R10,-0x378c }
    /* +0xeed8d7 */ __asm { XCHG dword ptr [RBP + R10*0x1],R15D }
    /* +0xeed8dc */ __asm { LEA RCX,[0x7fffa583ee05] }
    /* +0xeed8e3 */ __asm { MOV EDI,0x1a698db5 }
    /* +0xeed8e8 */ __asm { LEA R11,[0x7fffa587cafd] }
    /* +0xeed8ef */ __asm { MOV qword ptr [RSP + 0x68],R11 }
    /* +0xeed8f4 */ __asm { MOV R9D,0xa85f2dab }
    /* +0xeed8fa */ __asm { MOV dword ptr [RSP + 0xe0],R9D }
    /* +0xeed902 */ __asm { MOV RAX,RSI }
    /* +0xeed905 */ __asm { SHR RAX,0x3 }
    /* +0xeed909 */ __asm { LEA R8,[0x7fffa47c316d] }
    /* +0xeed910 */ __asm { MOV BP,0xf259 }
    /* +0xeed914 */ __asm { LEA R15,[0x7fffa47c0473] }
    /* +0xeed91b */ __asm { MOV qword ptr [RSP + 0xc8],RSI }
    /* +0xeed923 */ __asm { ADD RAX,RSI }
    /* +0xeed926 */ __asm { MOV R11,-0x61c8864680b583eb }
    /* +0xeed930 */ __asm { MUL R11 }
    /* +0xeed933 */ __asm { XOR RDX,RAX }
    /* +0xeed936 */ __asm { MOV EAX,0x6772b8d4 }
    /* +0xeed93b */ __asm { LEA R11,[0x7fffa47c0601] }
    /* +0xeed942 */ __asm { LEA RBX,[0x7fffa47c4b2c] }
    /* +0xeed949 */ __asm { MOV R13D,0x1d959ad4 }
    /* +0xeed94f */ __asm { MOV R9D,0x1d950440 }
    /* +0xeed955 */ __asm { SUB R9D,R13D }
    /* +0xeed958 */ __asm { MOV SI,0xcf17 }
    /* +0xeed95c */ __asm { ADD ESI,0xffffdf80 }
    /* +0xeed962 */ __asm { LEA R12,[0x7fffa47c31fa] }
    /* +0xeed969 */ __asm { MOVSX R10,SI }
    /* +0xeed96d */ __asm { LEA RSI,[0x7fffa47c991f] }
    /* +0xeed974 */ __asm { MOV R13D,0x7911f1d1 }
    /* +0xeed97a */ __asm { MOV R11,qword ptr [R11 + R10*0x1 + 0x8] }
    /* +0xeed97f */ __asm { IMUL R10D,EBP,-0x553 }
    /* +0xeed986 */ __asm { MOVSX R10,R10W }
    /* +0xeed98a */ __asm { MOV RBP,qword ptr [R15 + R10*0x1 + 0x18] }
    /* +0xeed98f */ __asm { MOVSXD R10,R9D }
    /* +0xeed992 */ __asm { IMUL R9D,EDI,0xd78b58f }
    /* +0xeed999 */ __asm { MOVSXD R9,R9D }
    /* +0xeed99c */ __asm { MOV RBX,qword ptr [RBX + R10*0x1 + 0x10] }
    /* +0xeed9a1 */ __asm { MOV R10D,0x10873acb }
    /* +0xeed9a7 */ __asm { XOR R10D,0xac704534 }
    /* +0xeed9ae */ __asm { ROL R10D,0x11 }
    /* +0xeed9b2 */ __asm { ADD R9,RCX }
    /* +0xeed9b5 */ __asm { MOVSXD R10,R10D }
    /* +0xeed9b8 */ __asm { MOV R10D,dword ptr [R12 + R10*0x1 + 0x4] }
    /* +0xeed9bd */ __asm { MOVZX ECX,DL }
    /* +0xeed9c0 */ __asm { MOV EDI,dword ptr [R9 + RCX*0x4] }
    /* +0xeed9c4 */ __asm { MOVSXD RCX,EAX }
    /* +0xeed9c7 */ __asm { XOR RCX,-0x67723d51 }
    /* +0xeed9ce */ __asm { INC R10D }
    /* +0xeed9d1 */ __asm { MOV dword ptr [R8 + RCX*0x1 + 0x4],R10D }
    /* +0xeed9d6 */ __asm { IMUL R9D,dword ptr [RSP + 0xe0],-0x40a35545 }
    /* +0xeed9e2 */ __asm { ADD R9D,0xcfb13190 }
    /* +0xeed9e9 */ __asm { MOVSXD RCX,R9D }
    /* +0xeed9ec */ __asm { IMUL R9D,R13D,0x1874059f }
    /* +0xeed9f3 */ __asm { ADD R9D,0x496cdf5c }
    /* +0xeed9fa */ __asm { MOVSXD R8,R9D }
    /* +0xeed9fd */ __asm { ADD R8,qword ptr [RSP + 0x68] }
    /* +0xeeda02 */ __asm { MOV R10D,EDX }
    /* +0xeeda05 */ __asm { AND R10D,0x7 }
    /* +0xeeda09 */ __asm { MOVZX ECX,uint8_t ptr [RSI + RCX*0x1] }
    /* +0xeeda0d */ __asm { MOV qword ptr [RSP + 0x68],RDX }
    /* +0xeeda12 */ __asm { MOV RSI,RDX }
    /* +0xeeda15 */ __asm { SHR RSI,CL }
    /* +0xeeda18 */ __asm { MOVD XMM1,EDI }
    /* +0xeeda1c */ __asm { PSHUFD XMM1,XMM1,0x0 }
    /* +0xeeda21 */ __asm { XOR ECX,ECX }
    /* +0xeeda23 */ __asm { MOV RAX,RSI }
    /* +0xeeda26 */ __asm { MOV R9,RAX }
    /* +0xeeda29 */ __asm { SHL R9,0x4 }
    /* +0xeeda2d */ __asm { MOVDQA XMM0,xmmword ptr [RBX + R9*0x1] }
    /* +0xeeda33 */ __asm { MOVDQA xmmword ptr [RSP + 0xd0],XMM0 }
    /* +0xeeda3c */ __asm { PCMPEQB XMM0,XMM1 }
    /* +0xeeda40 */ __asm { PMOVMSKB R13D,XMM0 }
    /* +0xeeda45 */ __asm { MOVZX EDX,uint8_t ptr [RSP + 0xdf] }
    /* +0xeeda4d */ __asm { AND R13D,0x7fff }
    /* +0xeeda54 */ __asm { JZ 0x7fffa565daad }
    /* +0xeeda56 */ __asm { MOVZX R13D,R13W }
    /* +0xeeda5a */ __asm { IMUL R12,RAX,0x78 }
    /* +0xeeda5e */ __asm { LEA R15,[R12 + RBP*0x1] }
    /* +0xeeda62 */ __asm { NOP dword ptr [RBP + R12*0x1] }
    /* +0xeeda68 */ __asm { MOV R9,RSI }
    /* +0xeeda6b */ __asm { MOV RSI,RCX }
    /* +0xeeda6e */ __asm { MOV RCX,RBX }
    /* +0xeeda71 */ __asm { MOV RBX,RBP }
    /* +0xeeda74 */ __asm { MOV EBP,EDI }
    /* +0xeeda76 */ __asm { MOV RDI,R11 }
    /* +0xeeda79 */ __asm { TZCNT R12D,R13D }
    /* +0xeeda7e */ __asm { MOV R12,qword ptr [R15 + R12*0x8] }
    /* +0xeeda82 */ __asm { MOV R11,qword ptr [RSP + 0xc8] }
    /* +0xeeda8a */ __asm { CMP qword ptr [R12],R11 }
    /* +0xeeda8e */ __asm { JZ 0x7fffa565dac6 }
    /* +0xeeda90 */ __asm { LEA R12D,[R13 + -0x1] }
    /* +0xeeda94 */ __asm { AND R12D,R13D }
    /* +0xeeda97 */ __asm { MOV R13D,R12D }
    /* +0xeeda9a */ __asm { MOV R11,RDI }
    /* +0xeeda9d */ __asm { MOV EDI,EBP }
    /* +0xeeda9f */ __asm { MOV RBP,RBX }
    /* +0xeedaa2 */ __asm { MOV RBX,RCX }
    /* +0xeedaa5 */ __asm { MOV RCX,RSI }
    /* +0xeedaa8 */ __asm { MOV RSI,R9 }
    /* +0xeedaab */ __asm { JNZ 0x7fffa565da68 }
    /* +0xeedaad */ __asm { TEST uint8_t ptr [R8 + R10*0x1],DL }
    /* +0xeedab1 */ __asm { JZ 0x7fffa565dad1 }
    /* +0xeedab3 */ __asm { INC RCX }
    /* +0xeedab6 */ __asm { CMP RCX,R11 }
    /* +0xeedab9 */ __asm { JA 0x7fffa565dad1 }
    /* +0xeedabb */ __asm { ADD RAX,RCX }
    /* +0xeedabe */ __asm { AND RAX,R11 }
    /* +0xeedac1 */ __asm { JMP 0x7fffa565da26 }
    /* +0xeedac6 */ __asm { MOV R12,R11 }
    /* +0xeedac9 */ __asm { XOR R14D,R14D }
    /* +0xeedacc */ __asm { JMP 0x7fffa565dbf4 }
    /* +0xeedad1 */ __asm { LEA R10,[0x7fffa47bd204] }
    /* +0xeedad8 */ __asm { MOV CX,0xf3cd }
    /* +0xeedadc */ __asm { LEA R8,[0x7fffa47c0878] }
    /* +0xeedae3 */ __asm { ADD ECX,0xffffb853 }
    /* +0xeedae9 */ __asm { MOVSX RCX,CX }
    /* +0xeedaed */ __asm { MOV AX,0x2e5f }
    /* +0xeedaf1 */ __asm { ADD EAX,0xffffb435 }
    /* +0xeedaf6 */ __asm { MOVSX R9,AX }
    /* +0xeedafa */ __asm { MOV R15,qword ptr [R10 + R9*0x1 + 0x28] }
    /* +0xeedaff */ __asm { CMP R15,qword ptr [R8 + RCX*0x1 + 0x20] }
    /* +0xeedb04 */ __asm { JNC 0x7fffa56600bf }
    /* +0xeedb0a */ __asm { MOV R9D,0xf6cf64be }
    /* +0xeedb10 */ __asm { MOV R10D,0x24cbde7b }
    /* +0xeedb16 */ __asm { XOR R10D,0x1399946e }
    /* +0xeedb1d */ __asm { ADD R10D,0x41bd77fa }
    /* +0xeedb24 */ __asm { MOV R8,RSI }
    /* +0xeedb27 */ __asm { SHL R8,0x4 }
    /* +0xeedb2b */ __asm { MOV ECX,0x3e87b7d0 }
    /* +0xeedb30 */ __asm { SUB ECX,R9D }
    /* +0xeedb33 */ __asm { PXOR XMM1,XMM1 }
    /* +0xeedb37 */ __asm { MOVDQA XMM0,xmmword ptr [RBX + R8*0x1] }
    /* +0xeedb3d */ __asm { PCMPEQB XMM0,XMM1 }
    /* +0xeedb41 */ __asm { PMOVMSKB EAX,XMM0 }
    /* +0xeedb45 */ __asm { MOV R9D,EAX }
    /* +0xeedb48 */ __asm { AND R9D,0x7fff }
    /* +0xeedb4f */ __asm { ADD EAX,0xffff8001 }
    /* +0xeedb54 */ __asm { CMP R10,RCX }
    /* +0xeedb57 */ __asm { CMOVG EAX,R9D }
    /* +0xeedb5b */ __asm { TEST AX,AX }
    /* +0xeedb5e */ __asm { MOV R12,qword ptr [RSP + 0xc8] }
    /* +0xeedb66 */ __asm { JZ 0x7fffa566008f }
    /* +0xeedb6c */ __asm { MOV R11,RSI }
    /* +0xeedb6f */ __asm { SHL R11,0x4 }
    /* +0xeedb73 */ __asm { ADD RBX,R11 }
    /* +0xeedb76 */ __asm { INC R15 }
    /* +0xeedb79 */ __asm { MOV R9W,0x6f90 }
    /* +0xeedb7e */ __asm { TZCNT R14D,EAX }
    /* +0xeedb83 */ __asm { MOV R10D,0x6318630b }
    /* +0xeedb89 */ __asm { XOR R10D,0x9dc15cf4 }
    /* +0xeedb90 */ __asm { ROL R10D,0x17 }
    /* +0xeedb94 */ __asm { MOVSXD R13,R10D }
    /* +0xeedb97 */ __asm { IMUL R9D,R9D,0xe05 }
    /* +0xeedb9e */ __asm { ROL R9W,0x8 }
    /* +0xeedba3 */ __asm { MOVSX R11,R9W }
    /* +0xeedba7 */ __asm { LEA RDX,[0x7fffa526daa3] }
    /* +0xeedbae */ __asm { ADD RDX,R11 }
    /* +0xeedbb1 */ __asm { MOV R10,-0x7fffe79a286467e9 }
    /* +0xeedbbb */ __asm { MOV RAX,-0x398970f2 }
    /* +0xeedbc2 */ __asm { CALL RDX }
    /* +0xeedbc4 */ __asm { ROL RCX,0x2c }
    /* +0xeedbc8 */ __asm { MOV R11,RCX }
    /* +0xeedbcb */ __asm { SHL R11,0x36 }
    /* +0xeedbcf */ __asm { SUB RCX,R11 }
    /* +0xeedbd2 */ __asm { LEA R11,[0x7fffa47c47f9] }
    /* +0xeedbd9 */ __asm { IMUL RDX,RSI,0x78 }
    /* +0xeedbdd */ __asm { ADD RBP,RDX }
    /* +0xeedbe0 */ __asm { MOV qword ptr [RBP + R14*0x8],RCX }
    /* +0xeedbe5 */ __asm { MOV qword ptr [R11 + R13*0x1 + 0x28],R15 }
    /* +0xeedbea */ __asm { MOV qword ptr [RCX],R12 }
    /* +0xeedbed */ __asm { MOV uint8_t ptr [R14 + RBX*0x1],DIL }
    /* +0xeedbf1 */ __asm { MOV R14B,0x1 }
    /* +0xeedbf4 */ __asm { LEA R11,[0x7fffa47c5b0c] }
    /* +0xeedbfb */ __asm { MOV R9W,0xbefc }
    /* +0xeedc00 */ __asm { MOV R10D,0x44eb7f12 }
    /* +0xeedc06 */ __asm { MOV EDX,0x44eacfee }
    /* +0xeedc0b */ __asm { SUB EDX,R10D }
    /* +0xeedc0e */ __asm { MOVSXD R10,EDX }
    /* +0xeedc11 */ __asm { IMUL ECX,R9D,-0x1493 }
    /* +0xeedc18 */ __asm { MOVSX R8,CX }
    /* +0xeedc1c */ __asm { XOR R8,0x325b }
    /* +0xeedc23 */ __asm { LEA RDX,[0x7fffa47c14d1] }
    /* +0xeedc2a */ __asm { MOV R9D,dword ptr [RDX + R8*0x1 + 0x4] }
    /* +0xeedc2f */ __asm { DEC R9D }
    /* +0xeedc32 */ __asm { MOV dword ptr [R11 + R10*0x1 + 0x4],R9D }
    /* +0xeedc37 */ __asm { JNZ 0x7fffa565dc8f }
    /* +0xeedc39 */ __asm { MOV AX,0xeffb }
    /* +0xeedc3d */ __asm { NOP }
    /* +0xeedc3e */ __asm { MOV R9,0x0 }
    /* +0xeedc45 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xeedc4c */ __asm { MOVSX R10,AX }
    /* +0xeedc50 */ __asm { XOR R10,0x6dea }
    /* +0xeedc57 */ __asm { LEA R11,[0x7fffa47c29d7] }
    /* +0xeedc5e */ __asm { XOR R9D,R9D }
    /* +0xeedc61 */ __asm { XCHG dword ptr [R11 + R10*0x1],R9D }
    /* +0xeedc65 */ __asm { MOV R9W,0x2621 }
    /* +0xeedc6a */ __asm { ADD R9D,0x4178 }
    /* +0xeedc71 */ __asm { ROL R9W,0xc }
    /* +0xeedc76 */ __asm { MOVSX R10,R9W }
    /* +0xeedc7a */ __asm { LEA R11,[0x7fffa47c156f] }
    /* +0xeedc81 */ __asm { LEA RCX,[R11 + R10*0x1] }
    /* +0xeedc85 */ __asm { ADD RCX,0x8 }
    /* +0xeedc89 */ __asm { CALL qword ptr [0x7fffa5877640] }
    /* +0xeedc8f */ __asm { MOV R9W,0x82e7 }
    /* +0xeedc94 */ __asm { ADD R9D,0x11c9 }
    /* +0xeedc9b */ __asm { MOVZX R10D,R9W }
    /* +0xeedc9f */ __asm { XOR R10,0x9480 }
    /* +0xeedca6 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xeedcaa */ __asm { MOV R9W,0xbfc0 }
    /* +0xeedcaf */ __asm { IMUL R9D,R9D,0x76fd }
    /* +0xeedcb6 */ __asm { ROR R9W,0x1 }
    /* +0xeedcba */ __asm { MOVZX R10D,R9W }
    /* +0xeedcbe */ __asm { MOV RDX,qword ptr GS:[R10] }
    /* +0xeedcc2 */ __asm { ADD RDX,0x28 }
    /* +0xeedcc6 */ __asm { OR RDX,qword ptr [R11 + 0x60] }
    /* +0xeedcca */ __asm { ROL RDX,0x3 }
    /* +0xeedcce */ __asm { ADD RDX,-0x2a53905c }
    /* +0xeedcd5 */ __asm { MOV R11,0x182c46eb6469e0c1 }
    /* +0xeedcdf */ __asm { CMP RDX,R11 }
    /* +0xeedce2 */ __asm { NOP }
    /* +0xeedce3 */ __asm { NOP }
    /* +0xeedce4 */ __asm { NOP }
    /* +0xeedce5 */ __asm { NOP }
    /* +0xeedce6 */ __asm { NOP }
    /* +0xeedce7 */ __asm { NOP }
    /* +0xeedce8 */ __asm { NOP }
    /* +0xeedce9 */ __asm { NOP }
    /* +0xeedcea */ __asm { NOP }
    /* +0xeedceb */ __asm { NOP }
    /* +0xeedcec */ __asm { NOP }
    /* +0xeedced */ __asm { NOP }
    /* +0xeedcee */ __asm { TEST R14B,R14B }
    /* +0xeedcf1 */ __asm { JZ 0x7fffa565ff85 }
    /* +0xeedcf7 */ __asm { MOV R9,0x0 }
    /* +0xeedcfe */ __asm { NOP }
    /* +0xeedcff */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xeedd06 */ __asm { PUSHFQ }
    /* +0xeedd07 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xeedd0f */ __asm { POPFQ }
    /* +0xeedd10 */ __asm { MOV dword ptr [RSP + 0x70],0x1236f866 }
    /* +0xeedd18 */ __asm { MOV R9D,dword ptr [RSP + 0x70] }
    /* +0xeedd1d */ __asm { MOV R10W,0x1b96 }
    /* +0xeedd22 */ __asm { MOV EDX,0x1b95 }
    /* +0xeedd27 */ __asm { SUB EDX,R10D }
    /* +0xeedd2a */ __asm { MOVSX R10D,DX }
    /* +0xeedd2e */ __asm { CMP R9D,R10D }
    /* +0xeedd31 */ __asm { JLE 0x7fffa566035e }
    /* +0xeedd37 */ __asm { RDTSC }
    /* +0xeedd39 */ __asm { SHL RDX,0x20 }
    /* +0xeedd3d */ __asm { OR RDX,RAX }
    /* +0xeedd40 */ __asm { MOV RBP,-0x30ebf64fafbc6efb }
    /* +0xeedd4a */ __asm { IMUL RBP,RDX }
    /* +0xeedd4e */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xeedd58 */ __asm { ADD RCX,RBP }
    /* +0xeedd5b */ __asm { MOV R11,RCX }
    /* +0xeedd5e */ __asm { SHR R11,0x1b }
    /* +0xeedd62 */ __asm { MOV R10,RCX }
    /* +0xeedd65 */ __asm { SHR R10,0x2d }
    /* +0xeedd69 */ __asm { XOR R10D,R11D }
    /* +0xeedd6c */ __asm { SHR RCX,0x3b }
    /* +0xeedd70 */ __asm { ROR R10D,CL }
    /* +0xeedd73 */ __asm { AND R10D,0x3 }
    /* +0xeedd77 */ __asm { CMP R10D,0x2 }
    /* +0xeedd7b */ __asm { JC 0x7fffa565df77 }
    /* +0xeedd81 */ __asm { CMP R10D,0x3 }
    /* +0xeedd85 */ __asm { JNZ 0x7fffa565e022 }
    /* +0xeedd8b */ __asm { MOV R11,-0x13b8ae6c8cdd1ed7 }
    /* +0xeedd95 */ __asm { ADD R11,-0x71a578f2 }
    /* +0xeedd9c */ __asm { MOV R10D,0x2d201154 }
    /* +0xeedda2 */ __asm { CMP R10,R11 }
    /* +0xeedda5 */ __asm { JZ 0x7fffa566047c }
    /* +0xeeddab */ __asm { MOV R9D,0xb40cc03c }
    /* +0xeeddb1 */ __asm { IMUL R11D,R9D,0x68643443 }
    /* +0xeeddb8 */ __asm { ROL R11D,0x7 }
    /* +0xeeddbc */ __asm { MOV ECX,0xfa7a7b89 }
    /* +0xeeddc1 */ __asm { MOV EDX,0xa8a79525 }
    /* +0xeeddc6 */ __asm { XOR RDX,RCX }
    /* +0xeeddc9 */ __asm { MOV R10D,dword ptr [RDX + R10*0x1 + 0x2c4] }
    /* +0xeeddd1 */ __asm { MOV RDX,0x5555555555555556 }
    /* +0xeedddb */ __asm { IMUL R10,RDX }
    /* +0xeedddf */ __asm { CMP R10,RDX }
    /* +0xeedde2 */ __asm { SETC R9B }
    /* +0xeedde6 */ __asm { MOV R10D,0x51604c16 }
    /* +0xeeddec */ __asm { XOR R10D,0x2839875e }
    /* +0xeeddf3 */ __asm { CMP R10,R11 }
    /* +0xeeddf6 */ __asm { SETG R11B }
    /* +0xeeddfa */ __asm { OR R11B,R9B }
    /* +0xeeddfd */ __asm { CMP R11B,0x1 }
    /* +0xeede01 */ __asm { JNZ 0x7fffa565e4ad }
    /* +0xeede07 */ __asm { PXOR XMM1,XMM1 }
    /* +0xeede0b */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM1 }
    /* +0xeede11 */ __asm { MOV dword ptr [RSP + 0x108],0x1a8daa69 }
    /* +0xeede1c */ __asm { MOV R9D,dword ptr [RSP + 0x108] }
    /* +0xeede24 */ __asm { MOV dword ptr [RSP + 0x70],0x0 }
    /* +0xeede2c */ __asm { MOV dword ptr [RSP + 0x108],0xfa196b82 }
    /* +0xeede37 */ __asm { MOV R9D,dword ptr [RSP + 0x108] }
    /* +0xeede3f */ __asm { CMP R9D,0x757d24ec }
    /* +0xeede46 */ __asm { JBE 0x7fffa56604a8 }
    /* +0xeede4c */ __asm { MOV R9D,0x35c715be }
    /* +0xeede52 */ __asm { PUSHFQ }
    /* +0xeede53 */ __asm { POP R8 }
    /* +0xeede55 */ __asm { AND R8D,0x100 }
    /* +0xeede5c */ __asm { IMUL R9D,R9D,-0x489573f7 }
    /* +0xeede63 */ __asm { ADD R9D,0x69705452 }
    /* +0xeede6a */ __asm { CMP R8D,R9D }
    /* +0xeede6d */ __asm { NOP }
    /* +0xeede6e */ __asm { NOP }
    /* +0xeede6f */ __asm { NOP }
    /* +0xeede70 */ __asm { NOP }
    /* +0xeede71 */ __asm { NOP }
    /* +0xeede72 */ __asm { NOP }
    /* +0xeede73 */ __asm { NOP }
    /* +0xeede74 */ __asm { NOP }
    /* +0xeede75 */ __asm { NOP }
    /* +0xeede76 */ __asm { NOP }
    /* +0xeede77 */ __asm { NOP }
    /* +0xeede78 */ __asm { NOP }
    /* +0xeede79 */ __asm { NOP }
    /* +0xeede7a */ __asm { NOP }
    /* +0xeede7b */ __asm { NOP }
    /* +0xeede7c */ __asm { NOP }
    /* +0xeede7d */ __asm { NOP }
    /* +0xeedec8 */ __asm { MOV R11,-0x786a34c63eabb4e3 }
    /* +0xeeded2 */ __asm { MOV R10W,0x36c0 }
    /* +0xeeded7 */ __asm { MOV R9W,0x3d0 }
    /* +0xeededc */ __asm { IMUL R9D,R9D,0x3715 }
    /* +0xeedee3 */ __asm { MOVZX R9D,R9W }
    /* +0xeedee7 */ __asm { LEA R14,[0x7fffa47b95c6] }
    /* +0xeedeee */ __asm { MOV RBX,R14 }
    /* +0xeedef1 */ __asm { XOR RBX,R11 }
    /* +0xeedef4 */ __asm { MOV DX,0x2acb }
    /* +0xeedef8 */ __asm { ADD EDX,0xffffd55d }
    /* +0xeedefe */ __asm { ADD R10D,0xffffc93f }
    /* +0xeedf05 */ __asm { MOVZX EDX,DX }
    /* +0xeedf08 */ __asm { MOVSX R10,R10W }
    /* +0xeedf0c */ __asm { MOV qword ptr [RSP + 0x108],RAX }
    /* +0xeedf14 */ __asm { MOV EAX,dword ptr [RCX + 0x46a6] }
    /* +0xeedf1a */ __asm { LEA R8,[RSP + 0x70] }
    /* +0xeedf1f */ __asm { SYSCALL }
    /* +0xeedf21 */ __asm { CMP RBX,-0x54527e46 }
    /* +0xeedf28 */ __asm { NOP }
    /* +0xeedf29 */ __asm { NOP }
    /* +0xeedf2a */ __asm { NOP }
    /* +0xeedf2b */ __asm { NOP }
    /* +0xeedf2c */ __asm { NOP }
    /* +0xeedf2d */ __asm { NOP }
    /* +0xeedf2e */ __asm { NOP }
}

