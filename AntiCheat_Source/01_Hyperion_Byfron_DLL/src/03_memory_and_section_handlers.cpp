// Subsystem: Virtual Memory & Section Handlers
// Functions: 11
#include "../include/module_declarations.hpp"

// ============================================================================
// Function : Hook_ntdll_dll_NtMapViewOfSectionEx  |  RVA: 0x31c110  |  Size: 12331 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtMapViewOfSectionEx(void) {
    /* +0x31c110 */ __asm { PUSH R15 }
    /* +0x31c112 */ __asm { PUSH R13 }
    /* +0x31c114 */ __asm { PUSH RBP }
    /* +0x31c115 */ __asm { PUSH RBX }
    /* +0x31c116 */ __asm { PUSH R14 }
    /* +0x31c118 */ __asm { PUSH RDI }
    /* +0x31c119 */ __asm { PUSH RSI }
    /* +0x31c11a */ __asm { PUSH R12 }
    /* +0x31c11c */ __asm { SUB RSP,0x1a8 }
    /* +0x31c123 */ __asm { MOV R10D,0xf59b2222 }
    /* +0x31c129 */ __asm { MOV dword ptr [RSP + 0x70],R10D }
    /* +0x31c12e */ __asm { MOV R13D,0x59c8a6a2 }
    /* +0x31c134 */ __asm { MOV ESI,0x1ee165fd }
    /* +0x31c139 */ __asm { MOV RBX,R10 }
    /* +0x31c13c */ __asm { MOV RAX,R9 }
    /* +0x31c13f */ __asm { MOV R14,R15 }
    /* +0x31c142 */ __asm { MOVQ XMM0,R14 }
    /* +0x31c147 */ __asm { MOV R15,R14 }
    /* +0x31c14a */ __asm { NOT R15 }
    /* +0x31c14d */ __asm { MOV R10,RAX }
    /* +0x31c150 */ __asm { AND R10,R14 }
    /* +0x31c153 */ __asm { MOVQ XMM4,RAX }
    /* +0x31c158 */ __asm { XOR R10,RBX }
    /* +0x31c15b */ __asm { MOV RDI,RAX }
    /* +0x31c15e */ __asm { XOR RDI,R14 }
    /* +0x31c161 */ __asm { MOV qword ptr [RSP + 0xf0],RDI }
    /* +0x31c169 */ __asm { MOV RBP,RBX }
    /* +0x31c16c */ __asm { AND RBP,RDI }
    /* +0x31c16f */ __asm { MOV R11,-0xa63bb0e2 }
    /* +0x31c179 */ __asm { IMUL R11,RBP }
    /* +0x31c17d */ __asm { MOV qword ptr [RSP + 0xe0],R11 }
    /* +0x31c185 */ __asm { NOT RAX }
    /* +0x31c188 */ __asm { MOV R11,RAX }
    /* +0x31c18b */ __asm { IMUL R11,R15 }
    /* +0x31c18f */ __asm { MOV qword ptr [RSP + 0x148],R11 }
    /* +0x31c197 */ __asm { MOV RBP,R15 }
    /* +0x31c19a */ __asm { AND RBP,RAX }
    /* +0x31c19d */ __asm { MOV qword ptr [RSP + 0x128],RBP }
    /* +0x31c1a5 */ __asm { AND RBP,RBX }
    /* +0x31c1a8 */ __asm { SUB R10,RBP }
    /* +0x31c1ab */ __asm { MOV R11D,0xc51614e6 }
    /* +0x31c1b1 */ __asm { IMUL R11,R10 }
    /* +0x31c1b5 */ __asm { MOV qword ptr [RSP + 0x98],R11 }
    /* +0x31c1bd */ __asm { MOV R15,RAX }
    /* +0x31c1c0 */ __asm { OR R15,R14 }
    /* +0x31c1c3 */ __asm { XOR RAX,R14 }
    /* +0x31c1c6 */ __asm { MOV R10D,0x3c2bba21 }
    /* +0x31c1cc */ __asm { MOV dword ptr [RSP + 0x50],R10D }
    /* +0x31c1d1 */ __asm { MOV R12D,0x1d86f7a5 }
    /* +0x31c1d7 */ __asm { MOV R10D,0x90fd624f }
    /* +0x31c1dd */ __asm { ADD R10D,0xd0c3e7d4 }
    /* +0x31c1e4 */ __asm { MOV R14,R10 }
    /* +0x31c1e7 */ __asm { IMUL R10D,R13D,-0x6d2e7f7d }
    /* +0x31c1ee */ __asm { MOV qword ptr [RSP + 0x118],R10 }
    /* +0x31c1f6 */ __asm { MOV R10D,0xa3b0dfab }
    /* +0x31c1fc */ __asm { MOV R13D,0x6b2b7b1b }
    /* +0x31c202 */ __asm { MOV R11D,0xcb46af7f }
    /* +0x31c208 */ __asm { ADD R11D,0xf99d2954 }
    /* +0x31c20f */ __asm { MOV qword ptr [RSP + 0x180],R11 }
    /* +0x31c217 */ __asm { MOV R11D,0x50781341 }
    /* +0x31c21d */ __asm { MOV qword ptr [RSP + 0xa0],R11 }
    /* +0x31c225 */ __asm { XOR R13D,0x8091669b }
    /* +0x31c22c */ __asm { MOV R11D,0x83293c34 }
    /* +0x31c232 */ __asm { ADD R11D,0x9ce58d4b }
    /* +0x31c239 */ __asm { MOV qword ptr [RSP + 0x150],R11 }
    /* +0x31c241 */ __asm { MOV qword ptr [RSP + 0x1a0],R14 }
    /* +0x31c249 */ __asm { MOV R14,-0x10fd0d095 }
    /* +0x31c253 */ __asm { MOV qword ptr [RSP + 0x68],R14 }
    /* +0x31c258 */ __asm { MOV R11D,0x72ccb674 }
    /* +0x31c25e */ __asm { MOV dword ptr [RSP + 0x140],R11D }
    /* +0x31c266 */ __asm { IMUL R10D,R10D,-0x53d9b5b }
    /* +0x31c26d */ __asm { MOV qword ptr [RSP + 0x78],R10 }
    /* +0x31c272 */ __asm { MOV R10D,0x8b7d77d8 }
    /* +0x31c278 */ __asm { ADD R10D,0xd2125e93 }
    /* +0x31c27f */ __asm { MOV qword ptr [RSP + 0xc8],R10 }
    /* +0x31c287 */ __asm { MOV R10D,0x1d9ffe52 }
    /* +0x31c28d */ __asm { ADD R10D,0x107dbb10 }
    /* +0x31c294 */ __asm { MOV qword ptr [RSP + 0x158],R10 }
    /* +0x31c29c */ __asm { ADD R12D,0xe8e444fa }
    /* +0x31c2a3 */ __asm { MOV EBP,0x3f2cc1ac }
    /* +0x31c2a8 */ __asm { XOR EBP,0xc22f3c4 }
    /* +0x31c2ae */ __asm { MOV R14D,0x185a8ed0 }
    /* +0x31c2b4 */ __asm { MOV R10D,0x3a4691a7 }
    /* +0x31c2ba */ __asm { XOR R10D,0x148fb892 }
    /* +0x31c2c1 */ __asm { MOV dword ptr [RSP + 0x58],R10D }
    /* +0x31c2c6 */ __asm { MOV R10D,0x6c97aff5 }
    /* +0x31c2cc */ __asm { XOR R10D,0xd4184b72 }
    /* +0x31c2d3 */ __asm { MOVSXD RDI,R10D }
    /* +0x31c2d6 */ __asm { MOV R10D,0xcad39713 }
    /* +0x31c2dc */ __asm { XOR R10D,0xcdd62d73 }
    /* +0x31c2e3 */ __asm { MOV qword ptr [RSP + 0xf8],R10 }
    /* +0x31c2eb */ __asm { IMUL R10D,ESI,0x71d81421 }
    /* +0x31c2f2 */ __asm { MOV qword ptr [RSP + 0x190],R10 }
    /* +0x31c2fa */ __asm { MOV R10,0x1006b3f50f3 }
    /* +0x31c304 */ __asm { ADD R10,-0x6b3f4d6c }
    /* +0x31c30b */ __asm { MOV R11,RBX }
    /* +0x31c30e */ __asm { MOV qword ptr [RSP + 0x198],R11 }
    /* +0x31c316 */ __asm { OR R11,RBX }
    /* +0x31c319 */ __asm { MOV qword ptr [RSP + 0xe8],R11 }
    /* +0x31c321 */ __asm { MOV ESI,0xd1732404 }
    /* +0x31c326 */ __asm { ADD ESI,0xf0d813f4 }
    /* +0x31c32c */ __asm { MOV dword ptr [RSP + 0x174],ESI }
    /* +0x31c333 */ __asm { IMUL R11D,R14D,-0x3fffffd9 }
    /* +0x31c33a */ __asm { MOV qword ptr [RSP + 0x160],R11 }
    /* +0x31c342 */ __asm { MOV R11,RBX }
    /* +0x31c345 */ __asm { NOT R11 }
    /* +0x31c348 */ __asm { IMUL R14D,dword ptr [RSP + 0x50],-0x69a72f2d }
    /* +0x31c351 */ __asm { MOV dword ptr [RSP + 0xd8],R14D }
    /* +0x31c359 */ __asm { MOV ESI,0x940152d }
    /* +0x31c35e */ __asm { XOR ESI,0xf7fd83a7 }
    /* +0x31c364 */ __asm { MOV qword ptr [RSP + 0xa8],RSI }
    /* +0x31c36c */ __asm { ROL R13D,0x1a }
    /* +0x31c370 */ __asm { MOV R14,qword ptr [RSP + 0x118] }
    /* +0x31c378 */ __asm { ADD R14D,0x6fd3d21c }
    /* +0x31c37f */ __asm { MOV qword ptr [RSP + 0x118],R14 }
    /* +0x31c387 */ __asm { MOV ESI,0xadf9e731 }
    /* +0x31c38c */ __asm { XOR ESI,0x13971a9 }
    /* +0x31c392 */ __asm { ADD ESI,0xef113cca }
    /* +0x31c398 */ __asm { MOV qword ptr [RSP + 0x100],RSI }
    /* +0x31c3a0 */ __asm { POR XMM4,XMM0 }
    /* +0x31c3a4 */ __asm { MOVQ R14,XMM4 }
    /* +0x31c3a9 */ __asm { MOV qword ptr [RSP + 0x60],R11 }
    /* +0x31c3ae */ __asm { AND R14,R11 }
    /* +0x31c3b1 */ __asm { MOV qword ptr [RSP + 0x138],R14 }
    /* +0x31c3b9 */ __asm { MOV RSI,qword ptr [RSP + 0xf0] }
    /* +0x31c3c1 */ __asm { AND RSI,R11 }
    /* +0x31c3c4 */ __asm { IMUL R11,RSI,0x64e3f17e }
    /* +0x31c3cb */ __asm { MOV R14,RBX }
    /* +0x31c3ce */ __asm { AND R14,RAX }
    /* +0x31c3d1 */ __asm { CMP R10,R13 }
    /* +0x31c3d4 */ __asm { MOV R10,RAX }
    /* +0x31c3d7 */ __asm { CMOVA R10,R15 }
    /* +0x31c3db */ __asm { MOV qword ptr [RSP + 0xf0],RDX }
    /* +0x31c3e3 */ __asm { MOV RDX,R10 }
    /* +0x31c3e6 */ __asm { XOR RDX,RBX }
    /* +0x31c3e9 */ __asm { IMUL R13,R14,0x1eda6404 }
    /* +0x31c3f0 */ __asm { CMP RDI,qword ptr [RSP + 0x78] }
    /* +0x31c3f5 */ __asm { CMOVGE R15,RAX }
    /* +0x31c3f9 */ __asm { MOV qword ptr [RSP + 0x50],RCX }
    /* +0x31c3fe */ __asm { OR RAX,RBX }
    /* +0x31c401 */ __asm { IMUL RAX,RAX,-0x60322368 }
    /* +0x31c408 */ __asm { ADD RAX,R13 }
    /* +0x31c40b */ __asm { MOV R13,qword ptr [RSP + 0xe0] }
    /* +0x31c413 */ __asm { ADD R13,R11 }
    /* +0x31c416 */ __asm { ADD R13,RAX }
    /* +0x31c419 */ __asm { ADD R13,qword ptr [RSP + 0x98] }
    /* +0x31c421 */ __asm { XOR R15,RBX }
    /* +0x31c424 */ __asm { AND R10,RBX }
    /* +0x31c427 */ __asm { MOV R11,RBX }
    /* +0x31c42a */ __asm { CMP RBP,R12 }
    /* +0x31c42d */ __asm { CMOVNC R10,RDX }
    /* +0x31c431 */ __asm { MOVQ XMM0,R15 }
    /* +0x31c436 */ __asm { MOVQ XMM4,R10 }
    /* +0x31c43b */ __asm { PSUBQ XMM0,XMM4 }
    /* +0x31c43f */ __asm { MOVQ RAX,XMM0 }
    /* +0x31c444 */ __asm { MOV R10D,0xabc400a8 }
    /* +0x31c44a */ __asm { IMUL R10,RAX }
    /* +0x31c44e */ __asm { MOV RCX,qword ptr [RSP + 0x180] }
    /* +0x31c456 */ __asm { MOV RAX,qword ptr [RSP + 0x150] }
    /* +0x31c45e */ __asm { MOV qword ptr [RSP + 0x150],RAX }
    /* +0x31c466 */ __asm { MOV RAX,-0x52f930de7d6fe972 }
    /* +0x31c470 */ __asm { IMUL R12,RAX,0xbfc3d4d }
    /* +0x31c477 */ __asm { ADD R12,0x7145b068 }
    /* +0x31c47e */ __asm { IMUL R12,qword ptr [RSP + 0x138] }
    /* +0x31c487 */ __asm { ADD R12,R13 }
    /* +0x31c48a */ __asm { ADD R12,R10 }
    /* +0x31c48d */ __asm { MOV EAX,0x498524f5 }
    /* +0x31c492 */ __asm { ADD EAX,0x594f10df }
    /* +0x31c497 */ __asm { XOR EAX,0xdef9238e }
    /* +0x31c49c */ __asm { MOV qword ptr [RSP + 0x78],RAX }
    /* +0x31c4a1 */ __asm { MOV EAX,0x88a9b7fa }
    /* +0x31c4a6 */ __asm { ADD EAX,0x25453579 }
    /* +0x31c4ab */ __asm { XOR EAX,0x8e9987f7 }
    /* +0x31c4b0 */ __asm { MOV qword ptr [RSP + 0x120],RAX }
    /* +0x31c4b8 */ __asm { IMUL EAX,dword ptr [RSP + 0x58],-0x3ffff8e3 }
    /* +0x31c4c0 */ __asm { MOV qword ptr [RSP + 0x108],RAX }
    /* +0x31c4c8 */ __asm { MOV RAX,qword ptr [RSP + 0xa0] }
    /* +0x31c4d0 */ __asm { XOR EAX,0x73cd5eee }
    /* +0x31c4d5 */ __asm { ROL EAX,0x1a }
    /* +0x31c4d8 */ __asm { MOV qword ptr [RSP + 0xa0],RAX }
    /* +0x31c4e0 */ __asm { MOV R10D,0x341c56c1 }
    /* +0x31c4e6 */ __asm { IMUL EAX,R10D,0x311008d }
    /* +0x31c4ed */ __asm { ADD EAX,0xabb3e946 }
    /* +0x31c4f2 */ __asm { MOV qword ptr [RSP + 0x58],RAX }
    /* +0x31c4f7 */ __asm { MOV R10D,dword ptr [RSP + 0x70] }
    /* +0x31c4fc */ __asm { ADD R10D,0xec610dad }
    /* +0x31c503 */ __asm { MOVSXD R10,R10D }
    /* +0x31c506 */ __asm { MOV qword ptr [RSP + 0x98],R10 }
    /* +0x31c50e */ __asm { MOV EAX,0x45422050 }
    /* +0x31c513 */ __asm { IMUL R10D,dword ptr [RSP + 0x140],-0x1fb6bbcf }
    /* +0x31c51f */ __asm { MOVSXD R10,R10D }
    /* +0x31c522 */ __asm { MOV EDX,0x1b7ddc84 }
    /* +0x31c527 */ __asm { ADD EDX,0x807f04a1 }
    /* +0x31c52d */ __asm { ROL EDX,0x10 }
    /* +0x31c530 */ __asm { MOV dword ptr [RSP + 0xe0],EDX }
    /* +0x31c537 */ __asm { ADD EAX,0xbfffffeb }
    /* +0x31c53c */ __asm { MOV qword ptr [RSP + 0x180],RAX }
    /* +0x31c544 */ __asm { CMP RCX,R10 }
    /* +0x31c547 */ __asm { MOV RBP,qword ptr [RSP + 0x128] }
    /* +0x31c54f */ __asm { CMOVNC RBP,qword ptr [RSP + 0x148] }
    /* +0x31c558 */ __asm { MOV RDI,qword ptr [RSP + 0x198] }
    /* +0x31c560 */ __asm { MOV RBX,RDI }
    /* +0x31c563 */ __asm { NOT RBX }
    /* +0x31c566 */ __asm { MOV R14,qword ptr [RSP + 0xe8] }
    /* +0x31c56e */ __asm { NOT R14 }
    /* +0x31c571 */ __asm { MOV RAX,R12 }
    /* +0x31c574 */ __asm { NOT RAX }
    /* +0x31c577 */ __asm { MOV RDX,R11 }
    /* +0x31c57a */ __asm { MOV qword ptr [RSP + 0x110],R11 }
    /* +0x31c582 */ __asm { AND R11,RBP }
    /* +0x31c585 */ __asm { MOV qword ptr [RSP + 0x148],R11 }
    /* +0x31c58d */ __asm { MOV RCX,R11 }
    /* +0x31c590 */ __asm { AND RCX,RAX }
    /* +0x31c593 */ __asm { MOV qword ptr [RSP + 0x168],RCX }
    /* +0x31c59b */ __asm { MOV RSI,RBP }
    /* +0x31c59e */ __asm { MOV R15,qword ptr [RSP + 0x60] }
    /* +0x31c5a3 */ __asm { OR RSI,R15 }
    /* +0x31c5a6 */ __asm { MOV R11,RSI }
    /* +0x31c5a9 */ __asm { AND R11,RAX }
    /* +0x31c5ac */ __asm { MOV RCX,RAX }
    /* +0x31c5af */ __asm { MOV qword ptr [RSP + 0x188],RAX }
    /* +0x31c5b7 */ __asm { MOV RAX,R12 }
    /* +0x31c5ba */ __asm { AND RAX,RSI }
    /* +0x31c5bd */ __asm { MOV R13,RBP }
    /* +0x31c5c0 */ __asm { OR R13,RDX }
    /* +0x31c5c3 */ __asm { MOV qword ptr [RSP + 0xd0],R13 }
    /* +0x31c5cb */ __asm { MOV RDX,R13 }
    /* +0x31c5ce */ __asm { AND RDX,R12 }
    /* +0x31c5d1 */ __asm { MOV qword ptr [RSP + 0x140],RDX }
    /* +0x31c5d9 */ __asm { XOR R13,R12 }
    /* +0x31c5dc */ __asm { AND R14,RBP }
    /* +0x31c5df */ __asm { AND R14,RCX }
    /* +0x31c5e2 */ __asm { MOV qword ptr [RSP + 0xe8],R14 }
    /* +0x31c5ea */ __asm { MOV RCX,RBP }
    /* +0x31c5ed */ __asm { NOT RCX }
    /* +0x31c5f0 */ __asm { MOV R14,RBP }
    /* +0x31c5f3 */ __asm { OR R14,RDI }
    /* +0x31c5f6 */ __asm { OR R14,R12 }
    /* +0x31c5f9 */ __asm { MOV qword ptr [RSP + 0x138],R14 }
    /* +0x31c601 */ __asm { MOV R10,RSI }
    /* +0x31c604 */ __asm { OR R10,R12 }
    /* +0x31c607 */ __asm { MOV qword ptr [RSP + 0xc0],R10 }
    /* +0x31c60f */ __asm { MOV R14,RBP }
    /* +0x31c612 */ __asm { MOV R10,RBP }
    /* +0x31c615 */ __asm { NEG R14 }
    /* +0x31c618 */ __asm { MOV qword ptr [RSP + 0x70],R14 }
    /* +0x31c61d */ __asm { MOV RBP,RCX }
    /* +0x31c620 */ __asm { OR RBP,R15 }
    /* +0x31c623 */ __asm { MOV R15,R12 }
    /* +0x31c626 */ __asm { XOR R15,RBP }
    /* +0x31c629 */ __asm { AND R15,RBX }
    /* +0x31c62c */ __asm { OR RBP,R12 }
    /* +0x31c62f */ __asm { IMUL RSI,R12 }
    /* +0x31c633 */ __asm { XOR RDI,RDX }
    /* +0x31c636 */ __asm { MOV qword ptr [RSP + 0x178],RDI }
    /* +0x31c63e */ __asm { MOV RDX,qword ptr [RSP + 0x98] }
    /* +0x31c646 */ __asm { CMP RDX,qword ptr [RSP + 0x150] }
    /* +0x31c64e */ __asm { CMOVL RSI,RAX }
    /* +0x31c652 */ __asm { MOV qword ptr [RSP + 0x128],R9 }
    /* +0x31c65a */ __asm { AND RSI,RBX }
    /* +0x31c65d */ __asm { MOV RAX,-0x268e465ba }
    /* +0x31c667 */ __asm { IMUL RAX,RSI }
    /* +0x31c66b */ __asm { MOV qword ptr [RSP + 0x98],RAX }
    /* +0x31c673 */ __asm { CMP qword ptr [RSP + 0x158],0x2e1db962 }
    /* +0x31c67f */ __asm { MOV RAX,-0x1 }
    /* +0x31c686 */ __asm { CMOVZ RAX,RCX }
    /* +0x31c68a */ __asm { OR R11,RBX }
    /* +0x31c68d */ __asm { MOV RDX,0x183e2b027 }
    /* +0x31c697 */ __asm { IMUL RDX,R11 }
    /* +0x31c69b */ __asm { MOV qword ptr [RSP + 0x158],RDX }
    /* +0x31c6a3 */ __asm { MOV RDX,-0x33603ca9d }
    /* +0x31c6ad */ __asm { IMUL RDX,qword ptr [RSP + 0xe8] }
    /* +0x31c6b6 */ __asm { MOV qword ptr [RSP + 0xe8],RDX }
    /* +0x31c6be */ __asm { MOV RSI,qword ptr [RSP + 0x110] }
    /* +0x31c6c6 */ __asm { AND RAX,RSI }
    /* +0x31c6c9 */ __asm { MOVQ XMM4,RAX }
    /* +0x31c6ce */ __asm { MOV RDI,qword ptr [RSP + 0xf8] }
    /* +0x31c6d6 */ __asm { MOV RAX,qword ptr [RSP + 0x190] }
    /* +0x31c6de */ __asm { MOV qword ptr [RSP + 0x190],RAX }
    /* +0x31c6e6 */ __asm { MOV R11,qword ptr [RSP + 0x160] }
    /* +0x31c6ee */ __asm { MOV R9,qword ptr [RSP + 0x108] }
    /* +0x31c6f6 */ __asm { MOVQ XMM0,R12 }
    /* +0x31c6fb */ __asm { MOV R14,qword ptr [RSP + 0x148] }
    /* +0x31c703 */ __asm { MOV RAX,R14 }
    /* +0x31c706 */ __asm { MOV RDX,qword ptr [RSP + 0x188] }
    /* +0x31c70e */ __asm { XOR RAX,RDX }
    /* +0x31c711 */ __asm { AND RAX,qword ptr [RSP + 0x198] }
    /* +0x31c719 */ __asm { MOV qword ptr [RSP + 0x150],RAX }
    /* +0x31c721 */ __asm { IMUL RAX,R15,0x49d0680 }
    /* +0x31c728 */ __asm { MOV qword ptr [RSP + 0x160],RAX }
    /* +0x31c730 */ __asm { PAND XMM4,XMM0 }
    /* +0x31c734 */ __asm { MOVQ RAX,XMM4 }
    /* +0x31c739 */ __asm { MOV R15,RBX }
    /* +0x31c73c */ __asm { AND RAX,RBX }
    /* +0x31c73f */ __asm { CMP R9,RDI }
    /* +0x31c742 */ __asm { MOV R9,qword ptr [RSP + 0x70] }
    /* +0x31c747 */ __asm { CMOVA R9,RCX }
    /* +0x31c74b */ __asm { MOVQ XMM4,RBP }
    /* +0x31c750 */ __asm { MOV RBX,-0x287bec9be }
    /* +0x31c75a */ __asm { IMUL RBX,RAX }
    /* +0x31c75e */ __asm { MOV qword ptr [RSP + 0xf8],RBX }
    /* +0x31c766 */ __asm { MOV EAX,dword ptr [RSP + 0xd8] }
    /* +0x31c76d */ __asm { NOT EAX }
    /* +0x31c76f */ __asm { CDQE }
    /* +0x31c771 */ __asm { AND R9,RSI }
    /* +0x31c774 */ __asm { MOV qword ptr [RSP + 0x70],R9 }
    /* +0x31c779 */ __asm { CMP R11,RAX }
    /* +0x31c77c */ __asm { LEA RAX,[R14 + RDX*0x1] }
    /* +0x31c780 */ __asm { MOV R9,RDX }
    /* +0x31c783 */ __asm { CMOVC RAX,qword ptr [RSP + 0x168] }
    /* +0x31c78c */ __asm { XOR R10,qword ptr [RSP + 0x60] }
    /* +0x31c791 */ __asm { AND RAX,R15 }
    /* +0x31c794 */ __asm { MOV RDX,-0x3ecc715e3 }
    /* +0x31c79e */ __asm { IMUL RDX,RAX }
    /* +0x31c7a2 */ __asm { MOV qword ptr [RSP + 0x60],RDX }
    /* +0x31c7a7 */ __asm { MOV RSI,qword ptr [RSP + 0x198] }
    /* +0x31c7af */ __asm { MOVQ XMM3,RSI }
    /* +0x31c7b4 */ __asm { POR XMM0,XMM3 }
    /* +0x31c7b8 */ __asm { MOVQ RAX,XMM0 }
    /* +0x31c7bd */ __asm { OR RAX,R10 }
    /* +0x31c7c0 */ __asm { MOV R11,-0xc3e557e2 }
    /* +0x31c7ca */ __asm { IMUL R11,RAX }
    /* +0x31c7ce */ __asm { PXOR XMM4,XMM3 }
    /* +0x31c7d2 */ __asm { MOVQ RAX,XMM4 }
    /* +0x31c7d7 */ __asm { IMUL RAX,RAX,-0x7dab89bd }
    /* +0x31c7de */ __asm { MOV qword ptr [RSP + 0x108],RAX }
    /* +0x31c7e6 */ __asm { SUB qword ptr [RSP + 0x140],RSI }
    /* +0x31c7ee */ __asm { MOV RAX,-0x14190e1a0 }
    /* +0x31c7f8 */ __asm { IMUL RAX,qword ptr [RSP + 0x150] }
    /* +0x31c801 */ __asm { MOV qword ptr [RSP + 0xd8],RAX }
    /* +0x31c809 */ __asm { MOV RAX,R11 }
    /* +0x31c80c */ __asm { NEG RAX }
    /* +0x31c80f */ __asm { MOV RCX,RAX }
    /* +0x31c812 */ __asm { MOV RAX,R12 }
    /* +0x31c815 */ __asm { AND RAX,R10 }
    /* +0x31c818 */ __asm { XOR RAX,R15 }
    /* +0x31c81b */ __asm { CMP qword ptr [RSP + 0x190],0x517de99d }
    /* +0x31c827 */ __asm { CMOVZ RCX,R11 }
    /* +0x31c82b */ __asm { MOV qword ptr [RSP + 0x190],RCX }
    /* +0x31c833 */ __asm { MOV RCX,R9 }
    /* +0x31c836 */ __asm { AND R10,R9 }
    /* +0x31c839 */ __asm { XOR R10,RSI }
    /* +0x31c83c */ __asm { MOV R9D,0xe2bfbbe7 }
    /* +0x31c842 */ __asm { IMUL R9,R10 }
    /* +0x31c846 */ __asm { MOV RDX,qword ptr [RSP + 0xc0] }
    /* +0x31c84e */ __asm { XOR RDX,RSI }
    /* +0x31c851 */ __asm { MOV R11,0x165084c23 }
    /* +0x31c85b */ __asm { IMUL R11,RDX }
    /* +0x31c85f */ __asm { MOVSXD RBX,dword ptr [RSP + 0x174] }
    /* +0x31c867 */ __asm { AND R13,R15 }
    /* +0x31c86a */ __asm { IMUL R13,RBX }
    /* +0x31c86e */ __asm { MOV RDX,qword ptr [RSP + 0x120] }
    /* +0x31c876 */ __asm { IMUL RDX,RAX }
    /* +0x31c87a */ __asm { MOV RAX,qword ptr [RSP + 0xa8] }
    /* +0x31c882 */ __asm { MOV RDI,qword ptr [RSP + 0x118] }
    /* +0x31c88a */ __asm { MOV RBP,qword ptr [RSP + 0x100] }
    /* +0x31c892 */ __asm { MOV RBX,qword ptr [RSP + 0x78] }
    /* +0x31c897 */ __asm { AND R14,R12 }
    /* +0x31c89a */ __asm { OR R14,R15 }
    /* +0x31c89d */ __asm { MOV qword ptr [RSP + 0x148],R14 }
    /* +0x31c8a5 */ __asm { MOV R14,RDX }
    /* +0x31c8a8 */ __asm { NEG R14 }
    /* +0x31c8ab */ __asm { CMP RAX,RBX }
    /* +0x31c8ae */ __asm { CMOVNC R14,RDX }
    /* +0x31c8b2 */ __asm { MOV R10,qword ptr [RSP + 0xd0] }
    /* +0x31c8ba */ __asm { NOT R10 }
    /* +0x31c8bd */ __asm { AND R10,RCX }
    /* +0x31c8c0 */ __asm { MOV RAX,RSI }
    /* +0x31c8c3 */ __asm { MOV RDX,qword ptr [RSP + 0x70] }
    /* +0x31c8c8 */ __asm { AND RDX,RSI }
    /* +0x31c8cb */ __asm { AND RAX,R10 }
    /* +0x31c8ce */ __asm { MOV RSI,RAX }
    /* +0x31c8d1 */ __asm { MOV EAX,0xc3e557e3 }
    /* +0x31c8d6 */ __asm { IMUL RAX,RSI }
    /* +0x31c8da */ __asm { AND R10,R15 }
    /* +0x31c8dd */ __asm { MOV RBX,-0x3b16d5aae }
    /* +0x31c8e7 */ __asm { IMUL RBX,R10 }
    /* +0x31c8eb */ __asm { AND RDX,R12 }
    /* +0x31c8ee */ __asm { MOVSXD RCX,dword ptr [RSP + 0xe0] }
    /* +0x31c8f6 */ __asm { IMUL RDX,RCX }
    /* +0x31c8fa */ __asm { ADD RAX,qword ptr [RSP + 0x158] }
    /* +0x31c902 */ __asm { ADD RAX,R11 }
    /* +0x31c905 */ __asm { ADD RAX,qword ptr [RSP + 0x108] }
    /* +0x31c90d */ __asm { ADD RAX,qword ptr [RSP + 0x160] }
    /* +0x31c915 */ __asm { MOV RCX,RBX }
    /* +0x31c918 */ __asm { NEG RCX }
    /* +0x31c91b */ __asm { CMP RBP,RDI }
    /* +0x31c91e */ __asm { CMOVA RCX,RBX }
    /* +0x31c922 */ __asm { MOV RBX,qword ptr [RSP + 0xa0] }
    /* +0x31c92a */ __asm { MOV R11,qword ptr [RSP + 0x180] }
    /* +0x31c932 */ __asm { CMP R11,qword ptr [RSP + 0xc8] }
    /* +0x31c93a */ __asm { MOV RSI,qword ptr [RSP + 0x140] }
    /* +0x31c942 */ __asm { CMOVLE RSI,qword ptr [RSP + 0x178] }
    /* +0x31c94b */ __asm { MOV R11D,0xff3f1318 }
    /* +0x31c951 */ __asm { IMUL R11,qword ptr [RSP + 0x148] }
    /* +0x31c95a */ __asm { MOV RBP,qword ptr [RSP + 0x138] }
    /* +0x31c962 */ __asm { NOT RBP }
    /* +0x31c965 */ __asm { AND RBP,qword ptr [RSP + 0x110] }
    /* +0x31c96d */ __asm { MOV RDI,-0x1efd5e27e }
    /* +0x31c977 */ __asm { IMUL RDI,RBP }
    /* +0x31c97b */ __asm { ADD R11,R9 }
    /* +0x31c97e */ __asm { IMUL R9,RSI,-0x4251ce88 }
    /* +0x31c985 */ __asm { ADD R11,R9 }
    /* +0x31c988 */ __asm { ADD R11,R14 }
    /* +0x31c98b */ __asm { ADD R11,qword ptr [RSP + 0x190] }
    /* +0x31c993 */ __asm { CMP RBX,qword ptr [RSP + 0x1a0] }
    /* +0x31c99b */ __asm { MOV R9,qword ptr [RSP + 0x68] }
    /* +0x31c9a0 */ __asm { MOV R10,qword ptr [RSP + 0x150] }
    /* +0x31c9a8 */ __asm { LEA R9,[R10 + R9*0x1 + -0x31c0110b] }
    /* +0x31c9b0 */ __asm { CMOVG R9,qword ptr [RSP + 0xd8] }
    /* +0x31c9b9 */ __asm { ADD R9,RAX }
    /* +0x31c9bc */ __asm { ADD R9,RDX }
    /* +0x31c9bf */ __asm { ADD R9,R11 }
    /* +0x31c9c2 */ __asm { ADD R13,qword ptr [RSP + 0x98] }
    /* +0x31c9ca */ __asm { ADD R13,qword ptr [RSP + 0xf8] }
    /* +0x31c9d2 */ __asm { ADD R13,R9 }
    /* +0x31c9d5 */ __asm { MOV RAX,qword ptr [RSP + 0xe8] }
    /* +0x31c9dd */ __asm { LEA R10,[RAX + R13*0x1] }
    /* +0x31c9e1 */ __asm { OR R13,RAX }
    /* +0x31c9e4 */ __asm { MOV RAX,qword ptr [RSP + 0x58] }
    /* +0x31c9e9 */ __asm { CMP RAX,0x65fa64e9 }
    /* +0x31c9ef */ __asm { CMOVNZ R13,R10 }
    /* +0x31c9f3 */ __asm { ADD RDI,RCX }
    /* +0x31c9f6 */ __asm { ADD RDI,qword ptr [RSP + 0x60] }
    /* +0x31c9fb */ __asm { ADD RDI,R13 }
    /* +0x31c9fe */ __asm { MOV R12D,dword ptr [RSP + 0x218] }
    /* +0x31ca06 */ __asm { MOV dword ptr [RSP + 0x80],0x44114c8c }
    /* +0x31ca11 */ __asm { MOV R9D,dword ptr [RSP + 0x80] }
    /* +0x31ca19 */ __asm { MOV R9D,R12D }
    /* +0x31ca1c */ __asm { SHR R9D,0x1 }
    /* +0x31ca1f */ __asm { NOT R9D }
    /* +0x31ca22 */ __asm { OR R9D,R12D }
    /* +0x31ca25 */ __asm { MOV dword ptr [RSP + 0x80],0x4a3c2cc2 }
    /* +0x31ca30 */ __asm { MOV R10D,dword ptr [RSP + 0x80] }
    /* +0x31ca38 */ __asm { TEST R10B,0x1 }
    /* +0x31ca3c */ __asm { JZ 0x7fffa4a8ca4d }
    /* +0x31ca3e */ __asm { MOV BL,0x7c }
    /* +0x31ca40 */ __asm { JP 0x7fffa4a8ca8f }
    /* +0x31ca42 */ __asm { TEST uint8_t ptr [RAX + RDX*0x1 + 0x27],0x19 }
    /* +0x31ca47 */ __asm { POPFQ }
    /* +0x31ca48 */ __asm { RET 0xef76 }
    /* +0x31ca4d */ __asm { MOV R15D,dword ptr [RSP + 0x220] }
    /* +0x31ca55 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x31ca5c */ __asm { MOV RDX,0x0 }
    /* +0x31ca63 */ __asm { NOP }
    /* +0x31ca64 */ __asm { MOV R14W,0xbf64 }
    /* +0x31ca69 */ __asm { AND R9D,0x1000 }
    /* +0x31ca70 */ __asm { MOVD XMM0,R14D }
    /* +0x31ca75 */ __asm { MOVD XMM4,EDI }
    /* +0x31ca79 */ __asm { PXOR XMM4,XMM0 }
    /* +0x31ca7d */ __asm { MOVD R10D,XMM4 }
    /* +0x31ca82 */ __asm { ROL R10W,0x1 }
    /* +0x31ca86 */ __asm { MOVZX R10D,R10W }
    /* +0x31ca8a */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x31ca94 */ __asm { MOV RBP,-0x22b18422c4a9c65e }
    /* +0x31ca9e */ __asm { CMP R9D,R10D }
    /* +0x31caa1 */ __asm { JZ 0x7fffa4a8cb41 }
    /* +0x31caa7 */ __asm { MOV dword ptr [RSP + 0x80],0xa5e9af9f }
    /* +0x31cab2 */ __asm { MOV R9D,dword ptr [RSP + 0x80] }
    /* +0x31caba */ __asm { TEST R9B,0x1 }
    /* +0x31cabe */ __asm { MOV RBX,qword ptr [RSP + 0x128] }
    /* +0x31cac6 */ __asm { JZ 0x7fffa4a8f7e0 }
    /* +0x31cacc */ __asm { MOV R9D,0x81dfea20 }
    /* +0x31cad2 */ __asm { TEST R15B,0xf0 }
    /* +0x31cad6 */ __asm { SETNZ R10B }
    /* +0x31cada */ __asm { MOV ESI,EDI }
    /* +0x31cadc */ __asm { OR ESI,0x1 }
    /* +0x31cadf */ __asm { ADD R9D,0x849aee70 }
    /* +0x31cae6 */ __asm { IMUL R9D,ESI }
    /* +0x31caea */ __asm { CMP R9,0x5efae0d0 }
    /* +0x31caf1 */ __asm { SETZ R11B }
    /* +0x31caf5 */ __asm { TEST R11B,R10B }
    /* +0x31caf8 */ __asm { JNZ 0x7fffa4a8d011 }
    /* +0x31cafe */ __asm { MOV R9W,0x6961 }
    /* +0x31cb03 */ __asm { SUB R9D,EDI }
    /* +0x31cb06 */ __asm { IMUL R9D,R9D,-0x31b9 }
    /* +0x31cb0d */ __asm { ADD R9D,0x4505 }
    /* +0x31cb14 */ __asm { MOVZX R9D,R9W }
    /* +0x31cb18 */ __asm { MOV R10,qword ptr GS:[R9] }
    /* +0x31cb1c */ __asm { MOV R10,qword ptr [R10 + 0x60] }
    /* +0x31cb20 */ __asm { MOV RDX,0xa9c605d8d2538df }
    /* +0x31cb2a */ __asm { AND RDX,R10 }
    /* +0x31cb2d */ __asm { MOV R10,-0x3d3ea140dd62bdd3 }
    /* +0x31cb37 */ __asm { CMP RDX,R10 }
    /* +0x31cb3a */ __asm { JNZ 0x7fffa4a8cbaf }
    /* +0x31cb3c */ __asm { IMUL R14,qword ptr [R11 + RBP*0x8 + 0x158d4c6e],-0x31cb48 }
    /* +0x31cb48 */ __asm { NOP }
    /* +0x31cb49 */ __asm { MOV RDX,0x0 }
    /* +0x31cb50 */ __asm { PUSHFQ }
    /* +0x31cb51 */ __asm { POP R10 }
    /* +0x31cb53 */ __asm { TEST R10D,0x100 }
    /* +0x31cb5a */ __asm { MOV RBX,qword ptr [RSP + 0x128] }
    /* +0x31cb62 */ __asm { NOP }
    /* +0x31cb63 */ __asm { NOP }
    /* +0x31cb64 */ __asm { NOP }
    /* +0x31cb65 */ __asm { NOP }
    /* +0x31cb66 */ __asm { NOP }
    /* +0x31cb67 */ __asm { NOP }
    /* +0x31cb68 */ __asm { NOP }
    /* +0x31cb69 */ __asm { NOP }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtFreeVirtualMemory  |  RVA: 0x75ad70  |  Size: 8635 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtFreeVirtualMemory(void) {
    /* +0x75ad70 */ __asm { PUSH R14 }
    /* +0x75ad72 */ __asm { PUSH RSI }
    /* +0x75ad73 */ __asm { PUSH RDI }
    /* +0x75ad74 */ __asm { PUSH R13 }
    /* +0x75ad76 */ __asm { PUSH R15 }
    /* +0x75ad78 */ __asm { PUSH R12 }
    /* +0x75ad7a */ __asm { PUSH RBP }
    /* +0x75ad7b */ __asm { PUSH RBX }
    /* +0x75ad7c */ __asm { SUB RSP,0xd8 }
    /* +0x75ad83 */ __asm { MOV R15D,R9D }
    /* +0x75ad86 */ __asm { MOV RBP,R8 }
    /* +0x75ad89 */ __asm { MOV RBX,RDX }
    /* +0x75ad8c */ __asm { MOV R13,RCX }
    /* +0x75ad8f */ __asm { MOV dword ptr [RSP + 0x50],0x80 }
    /* +0x75ad97 */ __asm { MOV ECX,dword ptr [RSP + 0x50] }
    /* +0x75ad9b */ __asm { TEST ECX,ECX }
    /* +0x75ad9d */ __asm { NOP }
    /* +0x75ad9e */ __asm { NOP }
    /* +0x75ad9f */ __asm { NOP }
    /* +0x75ada0 */ __asm { NOP }
    /* +0x75ada1 */ __asm { NOP }
    /* +0x75ada2 */ __asm { PUSHFQ }
    /* +0x75ada3 */ __asm { POP RSI }
    /* +0x75ada4 */ __asm { TEST ESI,0x100 }
    /* +0x75adaa */ __asm { NOP }
    /* +0x75adab */ __asm { NOP }
    /* +0x75adac */ __asm { NOP }
    /* +0x75adad */ __asm { MOV ECX,0xe9835846 }
    /* +0x75adb2 */ __asm { IMUL ECX,ECX,-0x334c9a07 }
    /* +0x75adb8 */ __asm { ADD ECX,0xf0884ce4 }
    /* +0x75adbe */ __asm { MOV dword ptr [RSP + 0x50],ECX }
    /* +0x75adc2 */ __asm { MOV ECX,dword ptr [RSP + 0x50] }
    /* +0x75adc6 */ __asm { MOV R12,-0x30ebf64fafbc6efb }
    /* +0x75add0 */ __asm { MOV RDI,-0x22b18422c4a9c65e }
    /* +0x75adda */ __asm { CMP R13,-0x1 }
    /* +0x75adde */ __asm { JZ 0x7fffa4ecaeab }
    /* +0x75ade4 */ __asm { NOP }
    /* +0x75ade5 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x75adec */ __asm { MOV R8,0x0 }
    /* +0x75adf3 */ __asm { MOV dword ptr [RSP + 0x50],0x4b10b002 }
    /* +0x75adfb */ __asm { MOV ECX,dword ptr [RSP + 0x50] }
    /* +0x75adff */ __asm { RDTSC }
    /* +0x75ae01 */ __asm { SHL RDX,0x20 }
    /* +0x75ae05 */ __asm { OR RDX,RAX }
    /* +0x75ae08 */ __asm { IMUL RDX,R12 }
    /* +0x75ae0c */ __asm { ADD RDX,RDI }
    /* +0x75ae0f */ __asm { MOV RCX,RDX }
    /* +0x75ae12 */ __asm { SHR RCX,0x3b }
    /* +0x75ae16 */ __asm { MOV RAX,RDX }
    /* +0x75ae19 */ __asm { SHR RAX,0x1b }
    /* +0x75ae1d */ __asm { SHR RDX,0x2d }
    /* +0x75ae21 */ __asm { XOR EDX,EAX }
    /* +0x75ae23 */ __asm { ROR EDX,CL }
    /* +0x75ae25 */ __asm { AND EDX,0x3 }
    /* +0x75ae28 */ __asm { CMP EDX,0x2 }
    /* +0x75ae2b */ __asm { JNC 0x7fffa4ecaee1 }
    /* +0x75ae31 */ __asm { CMP EDX,0x1 }
    /* +0x75ae34 */ __asm { JNZ 0x7fffa4ecb17d }
    /* +0x75ae3a */ __asm { LEA R8,[0x7fffa47b8cdd] }
    /* +0x75ae41 */ __asm { MOV R11,-0x63c90b29348c2c30 }
    /* +0x75ae4b */ __asm { CMP R8,R11 }
    /* +0x75ae4e */ __asm { JZ 0x7fffa4ecd141 }
    /* +0x75ae54 */ __asm { MOV EAX,0x80dafe25 }
    /* +0x75ae59 */ __asm { MOV CX,0xfff2 }
    /* +0x75ae5d */ __asm { XOR EAX,0x7b046ea0 }
    /* +0x75ae62 */ __asm { MOV DX,0x7c96 }
    /* +0x75ae66 */ __asm { MOV R10D,0xffffb40d }
    /* +0x75ae6c */ __asm { SUB R10D,EDX }
    /* +0x75ae6f */ __asm { MOV EDX,0xc8d5a5bb }
    /* +0x75ae74 */ __asm { MOVZX R9D,R10W }
    /* +0x75ae78 */ __asm { NEG R9 }
    /* +0x75ae7b */ __asm { IMUL R10D,EDX,-0x6c5cf45d }
    /* +0x75ae82 */ __asm { ROL R10D,0x1 }
    /* +0x75ae85 */ __asm { CMP R10,RAX }
    /* +0x75ae88 */ __asm { MOV R11D,0x3777 }
    /* +0x75ae8e */ __asm { CMOVNC R11,R9 }
    /* +0x75ae92 */ __asm { MOV qword ptr [RSP + 0x50],RAX }
    /* +0x75ae97 */ __asm { MOV EAX,dword ptr [R11 + R8*0x1 + 0x12c] }
    /* +0x75ae9f */ __asm { XOR ECX,0xd }
    /* +0x75aea2 */ __asm { MOVSX RDX,CX }
    /* +0x75aea6 */ __asm { JMP 0x7fffa4ecb40c }
    /* +0x75aeab */ __asm { MOV CX,0xffcf }
    /* +0x75aeaf */ __asm { ADD ECX,0x91 }
    /* +0x75aeb5 */ __asm { MOVZX ECX,CX }
    /* +0x75aeb8 */ __asm { MOV R8,qword ptr GS:[RCX] }
    /* +0x75aebc */ __asm { MOV R11B,0x1 }
    /* +0x75aebf */ __asm { MOV R9,0x72c28fa44e380dc9 }
    /* +0x75aec9 */ __asm { CMP qword ptr [R8 + 0x8c8],R9 }
    /* +0x75aed0 */ __asm { JNZ 0x7fffa4ecb427 }
    /* +0x75aed6 */ __asm { PUSH RDX }
    /* +0x75aed7 */ __asm { INSB RDI,DX }
    /* +0x75aed8 */ __asm { PUSH RDI }
    /* +0x75aed9 */ __asm { LEAVE }
    /* +0x75aeda */ __asm { INT 0xd5 }
    /* +0x75aedc */ __asm { JMP 0x7fffa4ecb427 }
    /* +0x75aee1 */ __asm { CMP EDX,0x3 }
    /* +0x75aee4 */ __asm { JZ 0x7fffa4ecb218 }
    /* +0x75aeea */ __asm { MOV CX,0xd693 }
    /* +0x75aeee */ __asm { ADD ECX,0x29cd }
    /* +0x75aef4 */ __asm { MOVZX R9D,CX }
    /* +0x75aef8 */ __asm { RDTSC }
    /* +0x75aefa */ __asm { SHL RDX,0x20 }
    /* +0x75aefe */ __asm { OR RDX,RAX }
    /* +0x75af01 */ __asm { MOV R8,0x7facc0f7a00541bd }
    /* +0x75af0b */ __asm { IMUL R8,RDX }
    /* +0x75af0f */ __asm { MOV RAX,-0x6d58b5df06e60146 }
    /* +0x75af19 */ __asm { ADD RAX,R8 }
    /* +0x75af1c */ __asm { MOV R8,RAX }
    /* +0x75af1f */ __asm { SHR R8,0x1b }
    /* +0x75af23 */ __asm { MOV RCX,RAX }
    /* +0x75af26 */ __asm { SHR RCX,0x3b }
    /* +0x75af2a */ __asm { SHR RAX,0x2d }
    /* +0x75af2e */ __asm { XOR EAX,R8D }
    /* +0x75af31 */ __asm { ROR EAX,CL }
    /* +0x75af33 */ __asm { MOV R8,qword ptr GS:[R9] }
    /* +0x75af37 */ __asm { MOV R8,qword ptr [R8 + 0x18] }
    /* +0x75af3b */ __asm { MOV R11,0x7f88fddb1960b3d9 }
    /* +0x75af45 */ __asm { IMUL R11,R8 }
    /* +0x75af49 */ __asm { NOT R11 }
    /* +0x75af4c */ __asm { ROL R11,0x9 }
    /* +0x75af50 */ __asm { XOR R11,0x168ae8b1 }
    /* +0x75af57 */ __asm { MOV R8,-0x16dd50c2cd2702cd }
    /* +0x75af61 */ __asm { CMP R11,R8 }
    /* +0x75af64 */ __asm { JZ 0x7fffa4ecc7de }
    /* +0x75af6a */ __asm { CMP EAX,0x45d1a26 }
    /* +0x75af6f */ __asm { JA 0x7fffa4ecb130 }
    /* +0x75af75 */ __asm { MOV R9W,0xe395 }
    /* +0x75af7a */ __asm { MOVZX ECX,R9W }
    /* +0x75af7e */ __asm { XOR RCX,0xe3f5 }
    /* +0x75af85 */ __asm { MOV R8,qword ptr GS:[RCX] }
    /* +0x75af89 */ __asm { MOV R11,-0xd364e216df22367 }
    /* +0x75af93 */ __asm { CMP R8,R11 }
    /* +0x75af96 */ __asm { NOP }
    /* +0x75af97 */ __asm { NOP }
    /* +0x75af98 */ __asm { NOP }
    /* +0x75af99 */ __asm { NOP }
    /* +0x75af9a */ __asm { LEA R8,[0x7fffa47c11ed] }
    /* +0x75afa1 */ __asm { MOV R11,-0x25b16f3e99985495 }
    /* +0x75afab */ __asm { CMP R8,R11 }
    /* +0x75afae */ __asm { JZ 0x7fffa4ecd175 }
    /* +0x75afb4 */ __asm { MOV CX,0xf3bc }
    /* +0x75afb8 */ __asm { ADD ECX,0xffffc197 }
    /* +0x75afbe */ __asm { MOVSX R9,CX }
    /* +0x75afc2 */ __asm { MOV RAX,R8 }
    /* +0x75afc5 */ __asm { ADD RAX,R9 }
    /* +0x75afc8 */ __asm { MOVZX R9D,uint8_t ptr [R8 + R9*0x1 + 0x9] }
    /* +0x75afce */ __asm { MOVZX R11D,uint8_t ptr [RAX + R9*0x4 + 0xf] }
    /* +0x75afd4 */ __asm { NOT R11B }
    /* +0x75afd7 */ __asm { ROL R11B,0x5 }
    /* +0x75afdb */ __asm { MOV uint8_t ptr [RSP + 0x50],R11B }
    /* +0x75afe0 */ __asm { MOVZX R11D,uint8_t ptr [RAX + R9*0x4 + 0x10] }
    /* +0x75afe6 */ __asm { NOT R11B }
    /* +0x75afe9 */ __asm { ROL R11B,0x5 }
    /* +0x75afed */ __asm { MOV uint8_t ptr [RSP + 0x51],R11B }
    /* +0x75aff2 */ __asm { MOVZX R11D,uint8_t ptr [RAX + R9*0x4 + 0x11] }
    /* +0x75aff8 */ __asm { NOT R11B }
    /* +0x75affb */ __asm { ROL R11B,0x5 }
    /* +0x75afff */ __asm { MOV uint8_t ptr [RSP + 0x52],R11B }
    /* +0x75b004 */ __asm { MOVZX R11D,uint8_t ptr [RAX + R9*0x4 + 0x12] }
    /* +0x75b00a */ __asm { NOT R11B }
    /* +0x75b00d */ __asm { ROL R11B,0x5 }
    /* +0x75b011 */ __asm { MOV uint8_t ptr [RSP + 0x53],R11B }
    /* +0x75b016 */ __asm { MOV ECX,0x9102c3cc }
    /* +0x75b01b */ __asm { XOR ECX,dword ptr [RSP + 0x50] }
    /* +0x75b01f */ __asm { BT ECX,ECX }
    /* +0x75b022 */ __asm { JNC 0x7fffa4ecb130 }
    /* +0x75b028 */ __asm { PXOR XMM3,XMM3 }
    /* +0x75b02c */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM3 }
    /* +0x75b032 */ __asm { PUSHFQ }
    /* +0x75b033 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x75b03b */ __asm { POPFQ }
    /* +0x75b03c */ __asm { MOV dword ptr [RSP + 0xb0],0xc4568976 }
    /* +0x75b047 */ __asm { MOV ECX,dword ptr [RSP + 0xb0] }
    /* +0x75b04e */ __asm { CMP ECX,0x94a9a10d }
    /* +0x75b054 */ __asm { JA 0x7fffa4ecb05e }
    /* +0x75b056 */ __asm { SBB uint8_t ptr [RDI],BH }
    /* +0x75b058 */ __asm { JLE 0x7fffa4ecb0ce }
    /* +0x75b05a */ __asm { JL 0x7fffa4ecb09f }
    /* +0x75b05c */ __asm { ADC AL,0xb2 }
    /* +0x75b05e */ __asm { MOV dword ptr [RSP + 0x50],0x0 }
    /* +0x75b066 */ __asm { MOV ECX,0xd1057ba7 }
    /* +0x75b06b */ __asm { ADD ECX,0x310aa669 }
    /* +0x75b071 */ __asm { ROL ECX,0x14 }
    /* +0x75b074 */ __asm { MOV dword ptr [RSP + 0xb0],ECX }
    /* +0x75b07b */ __asm { MOV ECX,dword ptr [RSP + 0xb0] }
    /* +0x75b082 */ __asm { CMP ECX,0x4416c5fb }
    /* +0x75b088 */ __asm { JC 0x7fffa4ecb08f }
    /* +0x75b08a */ __asm { SBB EAX,0x47af6500 }
    /* +0x75b08f */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x75b096 */ __asm { NOP }
    /* +0x75b097 */ __asm { MOV R8,0x0 }
    /* +0x75b09e */ __asm { MOV dword ptr [RSP + 0xb0],0x181c73b1 }
    /* +0x75b0a9 */ __asm { MOV ECX,dword ptr [RSP + 0xb0] }
    /* +0x75b0b0 */ __asm { TEST CL,0x1 }
    /* +0x75b0b3 */ __asm { NOP }
    /* +0x75b0b4 */ __asm { NOP }
    /* +0x75b0b5 */ __asm { NOP }
    /* +0x75b0b6 */ __asm { NOP }
    /* +0x75b0b7 */ __asm { NOP }
    /* +0x75b0b8 */ __asm { LEA R8,[0x7fffa47b7a40] }
    /* +0x75b0bf */ __asm { MOV R11,-0x5664c7c02ff1186b }
    /* +0x75b0c9 */ __asm { XOR R11,R8 }
    /* +0x75b0cc */ __asm { MOV R9D,0x97b2be5a }
    /* +0x75b0d2 */ __asm { CMP R11,R9 }
    /* +0x75b0d5 */ __asm { JZ 0x7fffa4ecd267 }
    /* +0x75b0db */ __asm { MOV DX,0xe191 }
    /* +0x75b0df */ __asm { MOV CX,0x6f06 }
    /* +0x75b0e3 */ __asm { MOV R11W,0x52c9 }
    /* +0x75b0e8 */ __asm { IMUL EDX,EDX,0x8f }
    /* +0x75b0ee */ __asm { ROL DX,0x8 }
    /* +0x75b0f2 */ __asm { MOV qword ptr [RSP + 0xb0],RAX }
    /* +0x75b0fa */ __asm { MOVSX R10,DX }
    /* +0x75b0fe */ __asm { IMUL EDX,R11D,-0xc09 }
    /* +0x75b105 */ __asm { NOT EDX }
    /* +0x75b107 */ __asm { MOVZX EAX,DX }
    /* +0x75b10a */ __asm { MOV DX,0x8d70 }
    /* +0x75b10e */ __asm { IMUL EDX,EDX,-0x2519 }
    /* +0x75b114 */ __asm { MOVZX R9D,DX }
    /* +0x75b118 */ __asm { ADD ECX,0xffff9122 }
    /* +0x75b11e */ __asm { MOVZX EDX,CX }
    /* +0x75b121 */ __asm { MOV EAX,dword ptr [RAX + R8*0x1 + 0x88] }
    /* +0x75b129 */ __asm { LEA R8,[RSP + 0x50] }
    /* +0x75b12e */ __asm { SYSCALL }
    /* +0x75b130 */ __asm { LEA R8,[0x7fffa477eb22] }
    /* +0x75b137 */ __asm { MOV R11,0x1f54290d8fb21aa3 }
    /* +0x75b141 */ __asm { CMP R8,R11 }
    /* +0x75b144 */ __asm { NOP }
    /* +0x75b145 */ __asm { NOP }
    /* +0x75b146 */ __asm { NOP }
    /* +0x75b147 */ __asm { NOP }
    /* +0x75b148 */ __asm { NOP }
    /* +0x75b149 */ __asm { NOP }
    /* +0x75b14a */ __asm { NOP }
    /* +0x75b14b */ __asm { NOP }
    /* +0x75b14c */ __asm { NOP }
    /* +0x75b14d */ __asm { NOP }
    /* +0x75b14e */ __asm { NOP }
    /* +0x75b14f */ __asm { NOP }
    /* +0x75b150 */ __asm { NOP }
    /* +0x75b151 */ __asm { NOP }
    /* +0x75b152 */ __asm { NOP }
    /* +0x75b153 */ __asm { NOP }
    /* +0x75b154 */ __asm { NOP }
    /* +0x75b17d */ __asm { MOV ECX,0x99de3cf }
    /* +0x75b182 */ __asm { MOV R8D,0x25b4881e }
    /* +0x75b188 */ __asm { MOV RAX,R8 }
    /* +0x75b18b */ __asm { NOT RAX }
    /* +0x75b18e */ __asm { ADD ECX,0x5f966702 }
    /* +0x75b194 */ __asm { ADD RCX,RAX }
    /* +0x75b197 */ __asm { MOV R11,0x42b14a7306214adf }
    /* +0x75b1a1 */ __asm { CMP RCX,R11 }
    /* +0x75b1a4 */ __asm { NOP }
    /* +0x75b1a5 */ __asm { NOP }
    /* +0x75b1a6 */ __asm { NOP }
    /* +0x75b1a7 */ __asm { NOP }
    /* +0x75b1a8 */ __asm { NOP }
    /* +0x75b1a9 */ __asm { MOV R8,qword ptr [R8 + 0x5a4977ea] }
    /* +0x75b1b0 */ __asm { MOV R11,-0x12cc2d741ccfe993 }
    /* +0x75b1ba */ __asm { MOV RAX,R8 }
    /* +0x75b1bd */ __asm { MUL R11 }
    /* +0x75b1c0 */ __asm { MOV R11,RDX }
    /* +0x75b1c3 */ __asm { MOV R9D,0x1477a56 }
    /* +0x75b1c9 */ __asm { MOV RAX,R8 }
    /* +0x75b1cc */ __asm { MUL R9 }
    /* +0x75b1cf */ __asm { ADD RAX,R11 }
    /* +0x75b1d2 */ __asm { ADC RDX,0x0 }
    /* +0x75b1d6 */ __asm { TEST DL,0x1 }
    /* +0x75b1d9 */ __asm { JNZ 0x7fffa4ecb2dd }
    /* +0x75b1df */ __asm { LEA R8,[0x7fffa47bcf52] }
    /* +0x75b1e6 */ __asm { MOV R11,0x372f0b5aea2ed69f }
    /* +0x75b1f0 */ __asm { CMP R8,R11 }
    /* +0x75b1f3 */ __asm { JZ 0x7fffa4ecd17d }
    /* +0x75b1f9 */ __asm { MOV qword ptr [RSP + 0x50],RAX }
    /* +0x75b1fe */ __asm { MOV ECX,0xaa2ecec5 }
    /* +0x75b203 */ __asm { XOR ECX,0x55d1313a }
    /* +0x75b209 */ __asm { MOVSXD RDX,ECX }
    /* +0x75b20c */ __asm { MOV EAX,dword ptr [R8 + -0x9d2] }
    /* +0x75b213 */ __asm { JMP 0x7fffa4ecb40c }
    /* +0x75b218 */ __asm { LEA R8,[0x7fffa47bb2f6] }
    /* +0x75b21f */ __asm { MOV R11,0x1e6d81c7832ea857 }
    /* +0x75b229 */ __asm { CMP R8,R11 }
    /* +0x75b22c */ __asm { JZ 0x7fffa4ecd152 }
    /* +0x75b232 */ __asm { MOV ECX,0x41236ea9 }
    /* +0x75b237 */ __asm { MOVZX R9D,uint8_t ptr [R8 + 0x1397] }
    /* +0x75b23f */ __asm { MOVZX R11D,uint8_t ptr [R8 + R9*0x4 + 0x13a7] }
    /* +0x75b248 */ __asm { ROL R11B,0x4 }
    /* +0x75b24c */ __asm { MOV uint8_t ptr [RSP + 0x50],R11B }
    /* +0x75b251 */ __asm { MOVZX R11D,uint8_t ptr [R8 + R9*0x4 + 0x13a8] }
    /* +0x75b25a */ __asm { ROL R11B,0x4 }
    /* +0x75b25e */ __asm { MOV uint8_t ptr [RSP + 0x51],R11B }
    /* +0x75b263 */ __asm { MOVZX R11D,uint8_t ptr [R8 + R9*0x4 + 0x13a9] }
    /* +0x75b26c */ __asm { ROL R11B,0x4 }
    /* +0x75b270 */ __asm { MOV uint8_t ptr [RSP + 0x52],R11B }
    /* +0x75b275 */ __asm { MOVZX R11D,uint8_t ptr [R8 + R9*0x4 + 0x13aa] }
    /* +0x75b27e */ __asm { ROL R11B,0x4 }
    /* +0x75b282 */ __asm { ADD ECX,0x3eda916b }
    /* +0x75b288 */ __asm { MOV uint8_t ptr [RSP + 0x53],R11B }
    /* +0x75b28d */ __asm { MOV ECX,dword ptr [RCX] }
    /* +0x75b28f */ __asm { MOV EDX,0x65e8ce72 }
    /* +0x75b294 */ __asm { XOR EDX,dword ptr [RSP + 0x50] }
    /* +0x75b298 */ __asm { BT EDX,ECX }
    /* +0x75b29b */ __asm { JNC 0x7fffa4ecb344 }
    /* +0x75b2a1 */ __asm { LEA R8,[0x7fffa47b93be] }
    /* +0x75b2a8 */ __asm { MOV R11,0x73b6eab565bac1da }
    /* +0x75b2b2 */ __asm { CMP R8,R11 }
    /* +0x75b2b5 */ __asm { NOP }
    /* +0x75b2b6 */ __asm { NOP }
    /* +0x75b2b7 */ __asm { NOP }
    /* +0x75b2b8 */ __asm { NOP }
    /* +0x75b2b9 */ __asm { NOP }
    /* +0x75b2ba */ __asm { MOV qword ptr [RSP + 0x50],RAX }
    /* +0x75b2bf */ __asm { MOV CX,0x8de9 }
    /* +0x75b2c3 */ __asm { IMUL ECX,ECX,-0x1a59 }
    /* +0x75b2c9 */ __asm { ROL CX,0xd }
    /* +0x75b2cd */ __asm { MOVSX RDX,CX }
    /* +0x75b2d1 */ __asm { MOV EAX,dword ptr [R8 + 0x31c2] }
    /* +0x75b2d8 */ __asm { JMP 0x7fffa4ecb40c }
    /* +0x75b2dd */ __asm { MOV ECX,0x7cf3ec18 }
    /* +0x75b2e2 */ __asm { LEA R8,[0x7fffa47c13b1] }
    /* +0x75b2e9 */ __asm { IMUL ECX,ECX,-0x70ea1219 }
    /* +0x75b2ef */ __asm { ROL ECX,0xe }
    /* +0x75b2f2 */ __asm { MOV R11,0x1d273ebc6c1c6ce4 }
    /* +0x75b2fc */ __asm { XOR EDX,EDX }
    /* +0x75b2fe */ __asm { XOR R10D,R10D }
    /* +0x75b301 */ __asm { CMP R8,R11 }
    /* +0x75b304 */ __asm { SETZ DL }
    /* +0x75b307 */ __asm { SETG R10B }
    /* +0x75b30b */ __asm { CMP RCX,-0x699756d1 }
    /* +0x75b312 */ __asm { CMOVZ EDX,R10D }
    /* +0x75b316 */ __asm { CMP DL,0x1 }
    /* +0x75b319 */ __asm { JZ 0x7fffa4ecd18f }
    /* +0x75b31f */ __asm { MOV ECX,0x63fe2eb1 }
    /* +0x75b324 */ __asm { IMUL ECX,ECX,-0x2bd6ebef }
    /* +0x75b32a */ __asm { ADD ECX,0x7220123e }
    /* +0x75b330 */ __asm { MOVSXD RDX,ECX }
    /* +0x75b333 */ __asm { MOV qword ptr [RSP + 0x50],RAX }
    /* +0x75b338 */ __asm { MOV EAX,dword ptr [R8 + -0x4371] }
    /* +0x75b33f */ __asm { JMP 0x7fffa4ecb40c }
    /* +0x75b344 */ __asm { RDTSC }
    /* +0x75b346 */ __asm { SHL RDX,0x20 }
    /* +0x75b34a */ __asm { OR RDX,RAX }
    /* +0x75b34d */ __asm { MOV R8,0x7facc0f7a00541bd }
    /* +0x75b357 */ __asm { IMUL R8,RDX }
    /* +0x75b35b */ __asm { MOV RCX,-0x3bdb0b602243f5a6 }
    /* +0x75b365 */ __asm { ADD RCX,R8 }
    /* +0x75b368 */ __asm { MOV R9,RCX }
    /* +0x75b36b */ __asm { SHR R9,0x2d }
    /* +0x75b36f */ __asm { MOV RAX,RCX }
    /* +0x75b372 */ __asm { SHR RAX,0x1b }
    /* +0x75b376 */ __asm { XOR EAX,R9D }
    /* +0x75b379 */ __asm { SHR RCX,0x3b }
    /* +0x75b37d */ __asm { ROR EAX,CL }
    /* +0x75b37f */ __asm { TEST ESI,0x100 }
    /* +0x75b385 */ __asm { NOP }
    /* +0x75b386 */ __asm { NOP }
    /* +0x75b387 */ __asm { NOP }
    /* +0x75b388 */ __asm { NOP }
    /* +0x75b389 */ __asm { NOP }
    /* +0x75b38a */ __asm { MOV dword ptr [RSP + 0x50],0x6731778c }
    /* +0x75b392 */ __asm { MOV ECX,dword ptr [RSP + 0x50] }
    /* +0x75b396 */ __asm { CMP ECX,0xcbe5cacd }
    /* +0x75b39c */ __asm { JNC 0x7fffa4ecd23c }
    /* +0x75b3a2 */ __asm { CMP EAX,0x10a974 }
    /* +0x75b3a7 */ __asm { NOP }
    /* +0x75b3a8 */ __asm { NOP }
    /* +0x75b3a9 */ __asm { NOP }
    /* +0x75b3aa */ __asm { NOP }
    /* +0x75b3ab */ __asm { NOP }
    /* +0x75b3ac */ __asm { NOP }
    /* +0x75b3ad */ __asm { NOP }
    /* +0x75b3ae */ __asm { NOP }
    /* +0x75b3af */ __asm { NOP }
    /* +0x75b3b0 */ __asm { NOP }
    /* +0x75b3b1 */ __asm { NOP }
    /* +0x75b3b2 */ __asm { NOP }
    /* +0x75b3b3 */ __asm { NOP }
    /* +0x75b3b4 */ __asm { NOP }
    /* +0x75b3b5 */ __asm { NOP }
    /* +0x75b3b6 */ __asm { NOP }
    /* +0x75b3b7 */ __asm { NOP }
    /* +0x75b40c */ __asm { MOV R10,R13 }
    /* +0x75b40f */ __asm { SYSCALL }
    /* +0x75b411 */ __asm { MOV CX,0x656e }
    /* +0x75b415 */ __asm { ADD ECX,0xffff9a92 }
    /* +0x75b41b */ __asm { ROR CX,0x1 }
    /* +0x75b41e */ __asm { MOVZX ECX,CX }
    /* +0x75b421 */ __asm { CMP EAX,ECX }
    /* +0x75b423 */ __asm { SETZ R11B }
    /* +0x75b427 */ __asm { TEST RBX,RBX }
    /* +0x75b42a */ __asm { SETZ DL }
    /* +0x75b42d */ __asm { XOR R11B,0x1 }
    /* +0x75b431 */ __asm { MOV R14B,0x1 }
    /* +0x75b434 */ __asm { OR R11B,DL }
    /* +0x75b437 */ __asm { JNZ 0x7fffa4ecc019 }
    /* +0x75b43d */ __asm { CMP qword ptr [RBX],0x0 }
    /* +0x75b441 */ __asm { JZ 0x7fffa4ecc019 }
    /* +0x75b447 */ __asm { MOV dword ptr [RSP + 0x50],0xfedf8f57 }
    /* +0x75b44f */ __asm { MOV ECX,dword ptr [RSP + 0x50] }
    /* +0x75b453 */ __asm { PXOR XMM3,XMM3 }
    /* +0x75b457 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM3 }
    /* +0x75b45d */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM3 }
    /* +0x75b463 */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM3 }
    /* +0x75b469 */ __asm { MOV R14,qword ptr [RBX] }
    /* +0x75b46c */ __asm { RDTSC }
    /* +0x75b46e */ __asm { SHL RDX,0x20 }
    /* +0x75b472 */ __asm { OR RDX,RAX }
    /* +0x75b475 */ __asm { IMUL RDX,R12 }
    /* +0x75b479 */ __asm { LEA RCX,[RDX + RDI*0x1] }
    /* +0x75b47d */ __asm { MOV R8,RCX }
    /* +0x75b480 */ __asm { SHR R8,0x1b }
    /* +0x75b484 */ __asm { MOV RAX,RCX }
    /* +0x75b487 */ __asm { SHR RAX,0x2d }
    /* +0x75b48b */ __asm { XOR RAX,R8 }
    /* +0x75b48e */ __asm { SHR RCX,0x3b }
    /* +0x75b492 */ __asm { MOV EDX,EAX }
    /* +0x75b494 */ __asm { ROR EDX,CL }
    /* +0x75b496 */ __asm { AND EDX,0x3 }
    /* +0x75b499 */ __asm { CMP EDX,0x2 }
    /* +0x75b49c */ __asm { JNC 0x7fffa4ecb640 }
    /* +0x75b4a2 */ __asm { CMP EDX,0x1 }
    /* +0x75b4a5 */ __asm { JZ 0x7fffa4ecb7f7 }
    /* +0x75b4ab */ __asm { MOV ECX,0xb5d4e9c1 }
    /* +0x75b4b0 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM3 }
    /* +0x75b4b9 */ __asm { IMUL ECX,ECX,0x708bdb51 }
    /* +0x75b4bf */ __asm { MOV dword ptr [RSP + 0x88],ECX }
    /* +0x75b4c6 */ __asm { MOV ECX,dword ptr [RSP + 0x88] }
    /* +0x75b4cd */ __asm { MOV CX,0x1978 }
    /* +0x75b4d1 */ __asm { ADD ECX,0xffff9056 }
    /* +0x75b4d7 */ __asm { MOVZX ECX,CX }
    /* +0x75b4da */ __asm { XOR RCX,0xa9ae }
    /* +0x75b4e1 */ __asm { MOV dword ptr [RSP + 0xb0],0x0 }
    /* +0x75b4ec */ __asm { MOV R8,qword ptr GS:[RCX] }
    /* +0x75b4f0 */ __asm { MOV CX,0x741f }
    /* +0x75b4f4 */ __asm { IMUL ECX,ECX,-0x1d27 }
    /* +0x75b4fa */ __asm { MOVZX ECX,CX }
    /* +0x75b4fd */ __asm { XOR RCX,0xcc77 }
    /* +0x75b504 */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0x75b508 */ __asm { MOV R11,-0xb75b46086a20264 }
    /* +0x75b512 */ __asm { CMP qword ptr [R8 + 0x5a8],R11 }
    /* +0x75b519 */ __asm { NOP }
    /* +0x75b51a */ __asm { NOP }
    /* +0x75b51b */ __asm { NOP }
    /* +0x75b51c */ __asm { NOP }
    /* +0x75b51d */ __asm { NOP }
    /* +0x75b51e */ __asm { NOP }
    /* +0x75b51f */ __asm { NOP }
    /* +0x75b520 */ __asm { NOP }
    /* +0x75b521 */ __asm { NOP }
    /* +0x75b522 */ __asm { NOP }
    /* +0x75b523 */ __asm { NOP }
    /* +0x75b524 */ __asm { NOP }
    /* +0x75b525 */ __asm { NOP }
    /* +0x75b526 */ __asm { NOP }
    /* +0x75b527 */ __asm { NOP }
    /* +0x75b528 */ __asm { NOP }
    /* +0x75b529 */ __asm { NOP }
    /* +0x75b640 */ __asm { CMP EDX,0x3 }
    /* +0x75b643 */ __asm { JZ 0x7fffa4ecb963 }
    /* +0x75b649 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM3 }
    /* +0x75b652 */ __asm { TEST ESI,0x100 }
    /* +0x75b658 */ __asm { NOP }
    /* +0x75b659 */ __asm { NOP }
    /* +0x75b65a */ __asm { NOP }
    /* +0x75b65b */ __asm { NOP }
    /* +0x75b65c */ __asm { NOP }
    /* +0x75b65d */ __asm { NOP }
    /* +0x75b65e */ __asm { NOP }
    /* +0x75b65f */ __asm { NOP }
    /* +0x75b660 */ __asm { NOP }
    /* +0x75b661 */ __asm { NOP }
    /* +0x75b662 */ __asm { NOP }
    /* +0x75b663 */ __asm { NOP }
    /* +0x75b664 */ __asm { NOP }
    /* +0x75b665 */ __asm { NOP }
    /* +0x75b666 */ __asm { NOP }
    /* +0x75b667 */ __asm { MOV R8,0x0 }
    /* +0x75b66e */ __asm { NOP }
    /* +0x75b66f */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x75b676 */ __asm { MOV dword ptr [RSP + 0x88],0x5a9ba349 }
    /* +0x75b681 */ __asm { MOV ECX,dword ptr [RSP + 0x88] }
    /* +0x75b688 */ __asm { CMP ECX,0xee4110bf }
    /* +0x75b68e */ __asm { JNC 0x7fffa4ecd1ae }
    /* +0x75b694 */ __asm { NOP }
    /* +0x75b695 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x75b69c */ __asm { MOV R8,0x0 }
    /* +0x75b6a3 */ __asm { MOV dword ptr [RSP + 0xb0],0x0 }
    /* +0x75b6ae */ __asm { PUSHFQ }
    /* +0x75b6af */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x75b6b7 */ __asm { POPFQ }
    /* +0x75b6b8 */ __asm { MOV dword ptr [RSP + 0x88],0x2afd0afd }
    /* +0x75b6c3 */ __asm { MOV ECX,dword ptr [RSP + 0x88] }
    /* +0x75b6ca */ __asm { CMP ECX,0x6fd3ec18 }
    /* +0x75b6d0 */ __asm { JNC 0x7fffa4ecd1b6 }
    /* +0x75b6d6 */ __asm { TEST ESI,0x100 }
    /* +0x75b6dc */ __asm { NOP }
    /* +0x75b6dd */ __asm { NOP }
    /* +0x75b6de */ __asm { NOP }
    /* +0x75b6df */ __asm { NOP }
    /* +0x75b6e0 */ __asm { NOP }
    /* +0x75b6e1 */ __asm { MOV ECX,0xc7e71c09 }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtProtectVirtualMemory  |  RVA: 0x9c90b0  |  Size: 30318 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtProtectVirtualMemory(void) {
    /* +0x9c90b0 */ __asm { PUSH RBP }
    /* +0x9c90b1 */ __asm { PUSH R13 }
    /* +0x9c90b3 */ __asm { PUSH R14 }
    /* +0x9c90b5 */ __asm { PUSH RBX }
    /* +0x9c90b6 */ __asm { PUSH RSI }
    /* +0x9c90b7 */ __asm { PUSH RDI }
    /* +0x9c90b8 */ __asm { PUSH R12 }
    /* +0x9c90ba */ __asm { PUSH R15 }
    /* +0x9c90bc */ __asm { SUB RSP,0xa58 }
    /* +0x9c90c3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x9c90cb */ __asm { MOVAPS xmmword ptr [RBP + 0x9c0],XMM15 }
    /* +0x9c90d3 */ __asm { MOV dword ptr [RBP + 0x5b8],R9D }
    /* +0x9c90da */ __asm { MOV qword ptr [RBP + 0x638],R8 }
    /* +0x9c90e1 */ __asm { MOV qword ptr [RBP + 0x5f8],RDX }
    /* +0x9c90e8 */ __asm { MOV dword ptr [RBP + 0xe0],0x91b61f5f }
    /* +0x9c90f2 */ __asm { MOV R9D,dword ptr [RBP + 0xe0] }
    /* +0x9c90f9 */ __asm { MOV dword ptr [RBP + 0xe0],0x640ec6fa }
    /* +0x9c9103 */ __asm { MOV R9D,dword ptr [RBP + 0xe0] }
    /* +0x9c910a */ __asm { CMP RCX,-0x1 }
    /* +0x9c910e */ __asm { MOV qword ptr [RBP + 0x608],RCX }
    /* +0x9c9115 */ __asm { JZ 0x7fffa51393ad }
    /* +0x9c911b */ __asm { MOV dword ptr [RBP + 0xe0],0x4b10b002 }
    /* +0x9c9125 */ __asm { MOV R9D,dword ptr [RBP + 0xe0] }
    /* +0x9c912c */ __asm { MOV R12,RAX }
    /* +0x9c912f */ __asm { MOV R9W,0xdf2b }
    /* +0x9c9134 */ __asm { MOV R14D,R9D }
    /* +0x9c9137 */ __asm { MOV R10D,0xa04d17bf }
    /* +0x9c913d */ __asm { MOV R9D,0x83c2ed90 }
    /* +0x9c9143 */ __asm { MOV dword ptr [RBP + 0x5c0],R9D }
    /* +0x9c914a */ __asm { LEA R9,[0x7fffa52dbf75] }
    /* +0x9c9151 */ __asm { MOV qword ptr [RBP + -0x8],R9 }
    /* +0x9c9155 */ __asm { MOV R13,R14 }
    /* +0x9c9158 */ __asm { MOV R9D,0x308808c3 }
    /* +0x9c915e */ __asm { MOV dword ptr [RBP + -0x10],R9D }
    /* +0x9c9162 */ __asm { MOV R9D,0x5002d9e4 }
    /* +0x9c9168 */ __asm { IMUL R9D,R9D,0x1605222d }
    /* +0x9c916f */ __asm { ROL R9D,0x1c }
    /* +0x9c9173 */ __asm { MOV R8D,0xe9559475 }
    /* +0x9c9179 */ __asm { XOR R8D,0x9d15a1eb }
    /* +0x9c9180 */ __asm { ADD R8D,0x5b4d0772 }
    /* +0x9c9187 */ __asm { MOVSXD R8,R8D }
    /* +0x9c918a */ __asm { MOV qword ptr [RBP + 0x28],R8 }
    /* +0x9c918e */ __asm { MOV R15,R12 }
    /* +0x9c9191 */ __asm { OR R15,R13 }
    /* +0x9c9194 */ __asm { NOT R15 }
    /* +0x9c9197 */ __asm { ADD R10D,0xaa788db5 }
    /* +0x9c919e */ __asm { ROL R10D,0x5 }
    /* +0x9c91a2 */ __asm { MOV RBX,RCX }
    /* +0x9c91a5 */ __asm { NOT RBX }
    /* +0x9c91a8 */ __asm { AND R15,RCX }
    /* +0x9c91ab */ __asm { MOV R11,R12 }
    /* +0x9c91ae */ __asm { AND R11,RBX }
    /* +0x9c91b1 */ __asm { OR R11,R13 }
    /* +0x9c91b4 */ __asm { ADD R11,R15 }
    /* +0x9c91b7 */ __asm { MOV R15,R12 }
    /* +0x9c91ba */ __asm { XOR R15,RCX }
    /* +0x9c91bd */ __asm { MOV RAX,RCX }
    /* +0x9c91c0 */ __asm { MOV RCX,R15 }
    /* +0x9c91c3 */ __asm { AND RCX,R13 }
    /* +0x9c91c6 */ __asm { IMUL RCX,R9 }
    /* +0x9c91ca */ __asm { MOV R9D,0x17f87aa3 }
    /* +0x9c91d0 */ __asm { IMUL EDI,R9D,0x7ffe0331 }
    /* +0x9c91d7 */ __asm { MOV RSI,-0xf12b85cb }
    /* +0x9c91e1 */ __asm { ADD RSI,RAX }
    /* +0x9c91e4 */ __asm { SHL RAX,0x3b }
    /* +0x9c91e8 */ __asm { ADD RAX,RSI }
    /* +0x9c91eb */ __asm { SHL RSI,0x3d }
    /* +0x9c91ef */ __asm { SUB RAX,RSI }
    /* +0x9c91f2 */ __asm { MOV RDX,R13 }
    /* +0x9c91f5 */ __asm { NOT RDX }
    /* +0x9c91f8 */ __asm { MOV RSI,R12 }
    /* +0x9c91fb */ __asm { NOT RSI }
    /* +0x9c91fe */ __asm { OR RSI,RBX }
    /* +0x9c9201 */ __asm { AND RSI,RDX }
    /* +0x9c9204 */ __asm { MOV R8,RBX }
    /* +0x9c9207 */ __asm { XOR R8,R12 }
    /* +0x9c920a */ __asm { MOV R9,R8 }
    /* +0x9c920d */ __asm { AND R9,RDX }
    /* +0x9c9210 */ __asm { XOR R15,RDX }
    /* +0x9c9213 */ __asm { IMUL R9,R9,0x44ae4a56 }
    /* +0x9c921a */ __asm { IMUL R15,R15,-0x44ae4951 }
    /* +0x9c9221 */ __asm { ADD R15,R9 }
    /* +0x9c9224 */ __asm { IMUL R9D,dword ptr [RBP + 0x5c0],-0x61a6de47 }
    /* +0x9c922f */ __asm { MOV dword ptr [RBP + 0x5c0],R9D }
    /* +0x9c9236 */ __asm { IMUL EDX,dword ptr [RBP + -0x10],0x2a1a0f65 }
    /* +0x9c923d */ __asm { XOR R14D,0xdf2b }
    /* +0x9c9244 */ __asm { MOV R9D,R14D }
    /* +0x9c9247 */ __asm { OR RBX,R12 }
    /* +0x9c924a */ __asm { MOV R14,R13 }
    /* +0x9c924d */ __asm { XOR R14,RBX }
    /* +0x9c9250 */ __asm { CMP RDI,R10 }
    /* +0x9c9253 */ __asm { CMOVA RBX,R8 }
    /* +0x9c9257 */ __asm { XOR RBX,R13 }
    /* +0x9c925a */ __asm { SUB R14,RBX }
    /* +0x9c925d */ __asm { MOV R8D,0xa66cf8e3 }
    /* +0x9c9263 */ __asm { IMUL R8,R14 }
    /* +0x9c9267 */ __asm { AND R12,qword ptr [RBP + 0x608] }
    /* +0x9c926e */ __asm { OR R12,R13 }
    /* +0x9c9271 */ __asm { ADD R12,RSI }
    /* +0x9c9274 */ __asm { IMUL R10,R12,-0x44cdcaae }
    /* +0x9c927b */ __asm { ADD R10,R15 }
    /* +0x9c927e */ __asm { ROL EDX,0x1e }
    /* +0x9c9281 */ __asm { MOVSXD R14,EDX }
    /* +0x9c9284 */ __asm { ADD R14,qword ptr [RBP + -0x8] }
    /* +0x9c9288 */ __asm { IMUL RDX,R11,0x105 }
    /* +0x9c928f */ __asm { ADD RDX,R10 }
    /* +0x9c9292 */ __asm { ADD RDX,RCX }
    /* +0x9c9295 */ __asm { ADD RDX,R8 }
    /* +0x9c9298 */ __asm { MOVZX R13D,R9W }
    /* +0x9c929c */ __asm { MOVSXD RBX,dword ptr [RBP + 0x5c0] }
    /* +0x9c92a3 */ __asm { MOV R9,RAX }
    /* +0x9c92a6 */ __asm { CALL R14 }
    /* +0x9c92a9 */ __asm { MOV R9D,EAX }
    /* +0x9c92ac */ __asm { ROR R9D,0x1 }
    /* +0x9c92af */ __asm { MOV R8D,EAX }
    /* +0x9c92b2 */ __asm { ROL R8D,0x16 }
    /* +0x9c92b6 */ __asm { XOR R8D,R9D }
    /* +0x9c92b9 */ __asm { XOR R8D,EAX }
    /* +0x9c92bc */ __asm { MOV R11D,R8D }
    /* +0x9c92bf */ __asm { MOV R9D,R8D }
    /* +0x9c92c2 */ __asm { ROL R9D,0x1e }
    /* +0x9c92c6 */ __asm { MOV EAX,R8D }
    /* +0x9c92c9 */ __asm { ROL R11D,0xc }
    /* +0x9c92cd */ __asm { SUB EAX,R11D }
    /* +0x9c92d0 */ __asm { XOR R11D,R8D }
    /* +0x9c92d3 */ __asm { CMP qword ptr [RBP + 0x28],RBX }
    /* +0x9c92d7 */ __asm { CMOVNZ R11D,EAX }
    /* +0x9c92db */ __asm { XOR R11D,R9D }
    /* +0x9c92de */ __asm { MOV R8D,R11D }
    /* +0x9c92e1 */ __asm { ROL R8D,0x18 }
    /* +0x9c92e5 */ __asm { MOV R9D,R11D }
    /* +0x9c92e8 */ __asm { ROL R9D,0x1c }
    /* +0x9c92ec */ __asm { XOR R9D,R8D }
    /* +0x9c92ef */ __asm { XOR R9D,R11D }
    /* +0x9c92f2 */ __asm { MOV R8D,R9D }
    /* +0x9c92f5 */ __asm { ROL R8D,0x18 }
    /* +0x9c92f9 */ __asm { MOV R11D,R9D }
    /* +0x9c92fc */ __asm { ROL R11D,0x10 }
    /* +0x9c9300 */ __asm { MOV EAX,R9D }
    /* +0x9c9303 */ __asm { XOR EAX,R11D }
    /* +0x9c9306 */ __asm { SUB R9D,R11D }
    /* +0x9c9309 */ __asm { MOV EDX,0xf672f79a }
    /* +0x9c930e */ __asm { ADD EDX,0x898014a7 }
    /* +0x9c9314 */ __asm { MOV R10D,0xf713c321 }
    /* +0x9c931a */ __asm { CMP RDX,R10 }
    /* +0x9c931d */ __asm { CMOVNZ R9D,EAX }
    /* +0x9c9321 */ __asm { XOR R9D,R8D }
    /* +0x9c9324 */ __asm { MOV R8D,R9D }
    /* +0x9c9327 */ __asm { ROL R8D,0x10 }
    /* +0x9c932b */ __asm { MOV R11D,R9D }
    /* +0x9c932e */ __asm { ROL R11D,0x17 }
    /* +0x9c9332 */ __asm { ROL R9D,0x13 }
    /* +0x9c9336 */ __asm { XOR R9D,R11D }
    /* +0x9c9339 */ __asm { XOR R9D,R8D }
    /* +0x9c933c */ __asm { MOV R8D,R9D }
    /* +0x9c933f */ __asm { ROL R8D,0xe }
    /* +0x9c9343 */ __asm { MOVD XMM5,R9D }
    /* +0x9c9348 */ __asm { MOV R11D,R9D }
    /* +0x9c934b */ __asm { AND R11D,R8D }
    /* +0x9c934e */ __asm { MOVD XMM1,R8D }
    /* +0x9c9353 */ __asm { PXOR XMM1,XMM5 }
    /* +0x9c9357 */ __asm { ROL R9D,0x6 }
    /* +0x9c935b */ __asm { MOVD R8D,XMM1 }
    /* +0x9c9360 */ __asm { MOV EAX,0x2a3741c9 }
    /* +0x9c9365 */ __asm { ADD EAX,0xbf9e2e12 }
    /* +0x9c936a */ __asm { CDQE }
    /* +0x9c936c */ __asm { CMP RAX,-0x162a9025 }
    /* +0x9c9372 */ __asm { CMOVNZ R8D,R11D }
    /* +0x9c9376 */ __asm { XOR R8D,R9D }
    /* +0x9c9379 */ __asm { MOV R9D,R8D }
    /* +0x9c937c */ __asm { ROL R9D,0xc }
    /* +0x9c9380 */ __asm { MOV R11D,R8D }
    /* +0x9c9383 */ __asm { ROL R11D,0x1c }
    /* +0x9c9387 */ __asm { XOR R11D,R9D }
    /* +0x9c938a */ __asm { XOR R11D,R8D }
    /* +0x9c938d */ __asm { MOVD XMM5,R11D }
    /* +0x9c9392 */ __asm { MOVDQA XMM1,XMM5 }
    /* +0x9c9396 */ __asm { PSRLD XMM1,0x18 }
    /* +0x9c939b */ __asm { PXOR XMM1,XMM5 }
    /* +0x9c939f */ __asm { MOVD R9D,XMM1 }
    /* +0x9c93a4 */ __asm { CMP R9D,R13D }
    /* +0x9c93a7 */ __asm { SETZ R12B }
    /* +0x9c93ab */ __asm { JMP 0x7fffa51393f0 }
    /* +0x9c93ad */ __asm { MOV R9W,0xac44 }
    /* +0x9c93b2 */ __asm { IMUL R9D,R9D,-0x647 }
    /* +0x9c93b9 */ __asm { ADD R9D,0x5f3c }
    /* +0x9c93c0 */ __asm { MOVZX EDX,R9W }
    /* +0x9c93c4 */ __asm { MOV R9,qword ptr GS:[RDX] }
    /* +0x9c93c8 */ __asm { MOV R9,qword ptr [R9 + 0x8c8] }
    /* +0x9c93cf */ __asm { MOV R8,-0x6ec71fc8d6e01a34 }
    /* +0x9c93d9 */ __asm { XOR R8,0xcd4eff2 }
    /* +0x9c93e0 */ __asm { ROL R8,0x26 }
    /* +0x9c93e4 */ __asm { MOV R12B,0x1 }
    /* +0x9c93e7 */ __asm { CMP R9,R8 }
    /* +0x9c93ea */ __asm { JZ 0x7fffa513b2bb }
    /* +0x9c93f0 */ __asm { MOV dword ptr [RBP + 0xe0],0x12d68df0 }
    /* +0x9c93fa */ __asm { MOV R9D,dword ptr [RBP + 0xe0] }
    /* +0x9c9401 */ __asm { TEST R9D,R9D }
    /* +0x9c9404 */ __asm { JS 0x7fffa513b2d6 }
    /* +0x9c940a */ __asm { MOV EDX,0x6ce1e45d }
    /* +0x9c940f */ __asm { MOV R9D,0x6ce1e45d }
    /* +0x9c9415 */ __asm { PUSHFQ }
    /* +0x9c9416 */ __asm { POP RAX }
    /* +0x9c9417 */ __asm { AND EAX,0x100 }
    /* +0x9c941c */ __asm { SUB EDX,R9D }
    /* +0x9c941f */ __asm { MOV qword ptr [RBP + 0x28],RDX }
    /* +0x9c9423 */ __asm { MOV qword ptr [RBP + -0x8],RAX }
    /* +0x9c9427 */ __asm { CMP RAX,RDX }
    /* +0x9c942a */ __asm { MOV R13D,dword ptr [RBP + 0x5b8] }
    /* +0x9c9431 */ __asm { NOP }
    /* +0x9c9432 */ __asm { NOP }
    /* +0x9c9433 */ __asm { NOP }
    /* +0x9c9434 */ __asm { NOP }
    /* +0x9c9435 */ __asm { NOP }
    /* +0x9c9436 */ __asm { MOV dword ptr [RBP + 0xe0],0x5d445e4 }
    /* +0x9c9440 */ __asm { MOV R9D,dword ptr [RBP + 0xe0] }
    /* +0x9c9447 */ __asm { CMP R9D,0xb2e6bb1 }
    /* +0x9c944e */ __asm { NOP }
    /* +0x9c944f */ __asm { NOP }
    /* +0x9c9450 */ __asm { NOP }
    /* +0x9c9451 */ __asm { NOP }
    /* +0x9c9452 */ __asm { NOP }
    /* +0x9c9453 */ __asm { MOV dword ptr [RBP + 0xe0],0xe5fbffcc }
    /* +0x9c945d */ __asm { MOV R9D,dword ptr [RBP + 0xe0] }
    /* +0x9c9464 */ __asm { CMP qword ptr [RBP + 0x5f8],0x0 }
    /* +0x9c946c */ __asm { MOV R14,qword ptr [RBP + 0xa40] }
    /* +0x9c9473 */ __asm { SETNZ R9B }
    /* +0x9c9477 */ __asm { AND R9B,R12B }
    /* +0x9c947a */ __asm { CMP R9B,0x1 }
    /* +0x9c947e */ __asm { JNZ 0x7fffa51399c7 }
    /* +0x9c9484 */ __asm { CMP qword ptr [RBP + 0x638],0x0 }
    /* +0x9c948c */ __asm { JZ 0x7fffa51399c7 }
    /* +0x9c9492 */ __asm { MOV R9W,0xd560 }
    /* +0x9c9497 */ __asm { ADD R9D,0x2b00 }
    /* +0x9c949e */ __asm { MOVZX EDX,R9W }
    /* +0x9c94a2 */ __asm { MOV R9,qword ptr GS:[RDX] }
    /* +0x9c94a6 */ __asm { MOV R9,qword ptr [R9 + 0x18] }
    /* +0x9c94aa */ __asm { MOV R8W,0xdc7f }
    /* +0x9c94af */ __asm { ADD R8D,0xffffa382 }
    /* +0x9c94b6 */ __asm { ROL R8W,0x6 }
    /* +0x9c94bb */ __asm { MOVZX EDX,R8W }
    /* +0x9c94bf */ __asm { MOV RBX,qword ptr GS:[RDX] }
    /* +0x9c94c3 */ __asm { ADD R9,qword ptr [RBX + 0x720] }
    /* +0x9c94ca */ __asm { MOV R8,-0x11a6354e219136dd }
    /* +0x9c94d4 */ __asm { CMP R9,R8 }
    /* +0x9c94d7 */ __asm { NOP }
    /* +0x9c94d8 */ __asm { NOP }
    /* +0x9c94d9 */ __asm { NOP }
    /* +0x9c94da */ __asm { NOP }
    /* +0x9c94db */ __asm { NOP }
    /* +0x9c94dc */ __asm { MOV EDX,0x23a80c31 }
    /* +0x9c94e1 */ __asm { LEA R8,[RBP + 0xe0] }
    /* +0x9c94e8 */ __asm { MOV R11W,0x8cf8 }
    /* +0x9c94ed */ __asm { XOR EDX,0x7963bd55 }
    /* +0x9c94f3 */ __asm { MOV R9,R8 }
    /* +0x9c94f6 */ __asm { SHL R9,0x3e }
    /* +0x9c94fa */ __asm { ADD R9,R8 }
    /* +0x9c94fd */ __asm { MOV R8,R9 }
    /* +0x9c9500 */ __asm { ROL R8,0x29 }
    /* +0x9c9504 */ __asm { LEA RAX,[RBP + 0x18] }
    /* +0x9c9508 */ __asm { MOV qword ptr [RBP + 0xe0],RAX }
    /* +0x9c950f */ __asm { LEA RAX,[RBP + 0x638] }
    /* +0x9c9516 */ __asm { MOV qword ptr [RBP + 0xf8],RAX }
    /* +0x9c951d */ __asm { LEA RAX,[0x7fffa54ab5f4] }
    /* +0x9c9524 */ __asm { LEA R10,[RBP + 0x5f8] }
    /* +0x9c952b */ __asm { MOV qword ptr [RBP + 0xe8],R10 }
    /* +0x9c9532 */ __asm { ADD R11D,0x6bab }
    /* +0x9c9539 */ __asm { XOR R11D,0x7c2f }
    /* +0x9c9540 */ __asm { MOVSX R10,R11W }
    /* +0x9c9544 */ __asm { ADD R10,RAX }
    /* +0x9c9547 */ __asm { MOV RAX,R9 }
    /* +0x9c954a */ __asm { ROL RAX,0x10 }
    /* +0x9c954e */ __asm { XOR RAX,R8 }
    /* +0x9c9551 */ __asm { XOR RAX,R9 }
    /* +0x9c9554 */ __asm { ADD RAX,RDX }
    /* +0x9c9557 */ __asm { LEA R9,[RBP + -0x30] }
    /* +0x9c955b */ __asm { MOV qword ptr [RBP + 0xf0],R9 }
    /* +0x9c9562 */ __asm { MOV RDX,-0x7b97c807 }
    /* +0x9c9569 */ __asm { CALL R10 }
    /* +0x9c956c */ __asm { MOV R9W,0xd28d }
    /* +0x9c9571 */ __asm { IMUL R9D,R9D,0x767f }
    /* +0x9c9578 */ __asm { MOVZX EDX,R9W }
    /* +0x9c957c */ __asm { XOR RDX,0x7193 }
    /* +0x9c9583 */ __asm { MOV R9D,0xd38 }
    /* +0x9c9589 */ __asm { ADD R9,qword ptr GS:[RDX] }
    /* +0x9c958d */ __asm { MOV R8,0x1743288c3dee282d }
    /* +0x9c9597 */ __asm { IMUL R8,R9 }
    /* +0x9c959b */ __asm { MOV R9,-0x10a72a6ac4eae94d }
    /* +0x9c95a5 */ __asm { CMP R8,R9 }
    /* +0x9c95a8 */ __asm { JZ 0x7fffa513b2b3 }
    /* +0x9c95ae */ __asm { MOV R9D,0x59b44f1a }
    /* +0x9c95b4 */ __asm { LEA R8,[0x7fffa47c40d8] }
    /* +0x9c95bb */ __asm { MOVSXD R11,R9D }
    /* +0x9c95be */ __asm { XOR R11,-0x59b4c82e }
    /* +0x9c95c5 */ __asm { LEA R9,[0x7fffa47bce6f] }
    /* +0x9c95cc */ __asm { MOV AX,0xf8c1 }
    /* +0x9c95d0 */ __asm { IMUL EAX,EAX,-0xf83 }
    /* +0x9c95d6 */ __asm { ROL AX,0xb }
    /* +0x9c95da */ __asm { MOVZX R11D,uint8_t ptr [R8 + R11*0x1 + 0xc] }
    /* +0x9c95e0 */ __asm { MOVSX R8,AX }
    /* +0x9c95e4 */ __asm { ADD R8,R9 }
    /* +0x9c95e7 */ __asm { MOVZX R9D,uint8_t ptr [R8 + R11*0x8 + 0x1c] }
    /* +0x9c95ed */ __asm { MOVZX ECX,uint8_t ptr [R8 + R11*0x8 + 0x1a] }
    /* +0x9c95f3 */ __asm { ROL CL,0x3 }
    /* +0x9c95f6 */ __asm { ROL R9B,0x3 }
    /* +0x9c95fa */ __asm { MOVZX EAX,uint8_t ptr [R8 + R11*0x8 + 0x17] }
    /* +0x9c9600 */ __asm { MOVZX EDX,uint8_t ptr [R8 + R11*0x8 + 0x1b] }
    /* +0x9c9606 */ __asm { ROL DL,0x3 }
    /* +0x9c9609 */ __asm { MOV uint8_t ptr [RBP + 0xe5],R9B }
    /* +0x9c9610 */ __asm { MOVZX R9D,uint8_t ptr [R8 + R11*0x8 + 0x19] }
    /* +0x9c9616 */ __asm { ROL R9B,0x3 }
    /* +0x9c961a */ __asm { MOV uint8_t ptr [RBP + 0xe2],R9B }
    /* +0x9c9621 */ __asm { MOVZX R9D,uint8_t ptr [R8 + R11*0x8 + 0x1d] }
    /* +0x9c9627 */ __asm { ROL R9B,0x3 }
    /* +0x9c962b */ __asm { ROL AL,0x3 }
    /* +0x9c962e */ __asm { MOV uint8_t ptr [RBP + 0xe6],R9B }
    /* +0x9c9635 */ __asm { MOVZX R9D,uint8_t ptr [R8 + R11*0x8 + 0x18] }
    /* +0x9c963b */ __asm { MOVZX R8D,uint8_t ptr [R8 + R11*0x8 + 0x1e] }
    /* +0x9c9641 */ __asm { MOV uint8_t ptr [RBP + 0xe0],AL }
    /* +0x9c9647 */ __asm { MOV uint8_t ptr [RBP + 0xe4],DL }
    /* +0x9c964d */ __asm { MOV uint8_t ptr [RBP + 0xe3],CL }
    /* +0x9c9653 */ __asm { ROL R8B,0x3 }
    /* +0x9c9657 */ __asm { ROL R9B,0x3 }
    /* +0x9c965b */ __asm { MOV uint8_t ptr [RBP + 0xe7],R8B }
    /* +0x9c9662 */ __asm { MOV uint8_t ptr [RBP + 0xe1],R9B }
    /* +0x9c9669 */ __asm { MOV R9,qword ptr [RBP + 0xe0] }
    /* +0x9c9670 */ __asm { MOV dword ptr [RBP + 0xe0],0x96c4bbeb }
    /* +0x9c967a */ __asm { MOV R8D,dword ptr [RBP + 0xe0] }
    /* +0x9c9681 */ __asm { MOV DX,0xd17d }
    /* +0x9c9685 */ __asm { MOV R8W,0xd146 }
    /* +0x9c968a */ __asm { MOVSX R8,R8W }
    /* +0x9c968e */ __asm { XOR R8,0x1e49 }
    /* +0x9c9695 */ __asm { LEA RAX,[0x7fffa478bf69] }
    /* +0x9c969c */ __asm { ADD EDX,0xffffb38b }
    /* +0x9c96a2 */ __asm { LEA R10,[0x7fffa47863df] }
    /* +0x9c96a9 */ __asm { MOV CX,0xdc27 }
    /* +0x9c96ad */ __asm { MOVSX R11,CX }
    /* +0x9c96b1 */ __asm { XOR R11,0x3cb5 }
    /* +0x9c96b8 */ __asm { MOVSX RDX,DX }
    /* +0x9c96bc */ __asm { LEA RCX,[0x7fffa4787562] }
    /* +0x9c96c3 */ __asm { ADD RCX,R8 }
    /* +0x9c96c6 */ __asm { MOVZX EDX,uint8_t ptr [RAX + RDX*0x1 + 0x8] }
    /* +0x9c96cb */ __asm { MOV R8,qword ptr [RCX + RDX*0x8 + 0xd] }
    /* +0x9c96d0 */ __asm { XOR R8,qword ptr [R10 + R11*0x1 + 0x2b] }
    /* +0x9c96d5 */ __asm { MOV qword ptr [RBP + 0xe0],R8 }
    /* +0x9c96dc */ __asm { MOV R8,qword ptr [RBP + 0xe0] }
    /* +0x9c96e3 */ __asm { MOV dword ptr [RBP + 0xe0],0x1300435 }
    /* +0x9c96ed */ __asm { MOV R11D,dword ptr [RBP + 0xe0] }
    /* +0x9c96f4 */ __asm { TEST R11B,0x1 }
    /* +0x9c96f8 */ __asm { NOP }
    /* +0x9c96f9 */ __asm { NOP }
    /* +0x9c96fa */ __asm { NOP }
    /* +0x9c96fb */ __asm { NOP }
    /* +0x9c96fc */ __asm { NOP }
    /* +0x9c96fd */ __asm { NOP }
    /* +0x9c96fe */ __asm { NOP }
    /* +0x9c96ff */ __asm { NOP }
    /* +0x9c9700 */ __asm { NOP }
    /* +0x9c9701 */ __asm { NOP }
    /* +0x9c9702 */ __asm { NOP }
    /* +0x9c9703 */ __asm { CMP qword ptr [RBP + 0x18],R8 }
    /* +0x9c9707 */ __asm { JNC 0x7fffa513a7df }
    /* +0x9c970d */ __asm { CMP R9,qword ptr [RBP + -0x30] }
    /* +0x9c9711 */ __asm { JA 0x7fffa513a7df }
    /* +0x9c9717 */ __asm { MOV dword ptr [RBP + 0xe0],0x62948480 }
    /* +0x9c9721 */ __asm { MOV R8D,dword ptr [RBP + 0xe0] }
    /* +0x9c9728 */ __asm { MOV R8,qword ptr [RBP + 0xa18] }
    /* +0x9c972f */ __asm { XOR R11D,R11D }
    /* +0x9c9732 */ __asm { LEA RBX,[0x7fffa579b95d] }
    /* +0x9c9739 */ __asm { MOV RAX,0x27bcc7dc71879819 }
    /* +0x9c9743 */ __asm { MOV RDX,0x3e149def2df35f59 }
    /* +0x9c974d */ __asm { MOV R14,0x8000000081b }
    /* +0x9c9757 */ __asm { JMP 0x7fffa513976e }
    /* +0x9c9760 */ __asm { ADD R11,0x8 }
    /* +0x9c9764 */ __asm { CMP R11,0x10 }
    /* +0x9c9768 */ __asm { JZ 0x7fffa513abcc }
    /* +0x9c976e */ __asm { MOV R15,RBX }
    /* +0x9c9771 */ __asm { MOV R13D,0x3fff0fbe }
    /* +0x9c9777 */ __asm { CMP R8,RAX }
    /* +0x9c977a */ __asm { JZ 0x7fffa5139946 }
    /* +0x9c9780 */ __asm { MOV RCX,0x0 }
    /* +0x9c9787 */ __asm { NOP }
    /* +0x9c9788 */ __asm { LEA R12,[0x7fffa4770000] }
    /* +0x9c978f */ __asm { TEST R9,R9 }
    /* +0x9c9792 */ __asm { JZ 0x7fffa5139870 }
    /* +0x9c9798 */ __asm { MOV ECX,dword ptr [R9 + 0x3c] }
    /* +0x9c979c */ __asm { ADD RCX,R9 }
    /* +0x9c979f */ __asm { JZ 0x7fffa5139870 }
    /* +0x9c97a5 */ __asm { MOVZX EDI,word ptr [RCX + 0x6] }
    /* +0x9c97a9 */ __asm { TEST RDI,RDI }
    /* +0x9c97ac */ __asm { JZ 0x7fffa5139870 }
    /* +0x9c97b2 */ __asm { MOV RAX,RBX }
    /* +0x9c97b5 */ __asm { MOVSXD RBX,R13D }
    /* +0x9c97b8 */ __asm { XOR RBX,-0x3ffffed3 }
    /* +0x9c97bf */ __asm { ADD R15,RBX }
    /* +0x9c97c2 */ __asm { MOV RSI,qword ptr [R15 + R11*0x1] }
    /* +0x9c97c6 */ __asm { MOVZX R13D,word ptr [RCX + 0x14] }
    /* +0x9c97cb */ __asm { LEA RBX,[RCX + R13*0x1] }
    /* +0x9c97cf */ __asm { LEA R15,[RCX + R13*0x1] }
    /* +0x9c97d3 */ __asm { ADD R15,0x18 }
    /* +0x9c97d7 */ __asm { LEA RCX,[RDI + RDI*0x4] }
    /* +0x9c97db */ __asm { LEA R12,[RBX + RCX*0x8] }
    /* +0x9c97df */ __asm { ADD R12,0x18 }
    /* +0x9c97e3 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0x9c97f0 */ __asm { MOV R13,qword ptr [R15] }
    /* +0x9c97f3 */ __asm { MOV qword ptr [RBP + 0xe0],R13 }
    /* +0x9c97fa */ __asm { MOV uint8_t ptr [RBP + 0xe8],0x0 }
    /* +0x9c9801 */ __asm { MOV RCX,RDX }
    /* +0x9c9804 */ __asm { TEST R13B,R13B }
    /* +0x9c9807 */ __asm { JZ 0x7fffa513984a }
    /* +0x9c9809 */ __asm { LEA RDI,[RBP + 0xe1] }
    /* +0x9c9810 */ __asm { MOV RBX,RDX }
    /* +0x9c9813 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0x9c9820 */ __asm { MOVZX ECX,R13B }
    /* +0x9c9824 */ __asm { NOP }
    /* +0x9c9826 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x9c982d */ __asm { MOV R13,0x0 }
    /* +0x9c9834 */ __asm { MOVZX R13D,uint8_t ptr [RDI] }
    /* +0x9c9838 */ __asm { XOR RCX,RBX }
    /* +0x9c983b */ __asm { IMUL RCX,R14 }
    /* +0x9c983f */ __asm { INC RDI }
    /* +0x9c9842 */ __asm { MOV RBX,RCX }
    /* +0x9c9845 */ __asm { TEST R13B,R13B }
    /* +0x9c9848 */ __asm { JNZ 0x7fffa5139820 }
    /* +0x9c984a */ __asm { CMP RCX,RSI }
    /* +0x9c984d */ __asm { JZ 0x7fffa513985b }
    /* +0x9c984f */ __asm { ADD R15,0x28 }
    /* +0x9c9853 */ __asm { CMP R15,R12 }
    /* +0x9c9856 */ __asm { JC 0x7fffa51397f0 }
    /* +0x9c9858 */ __asm { XOR R15D,R15D }
    /* +0x9c985b */ __asm { MOV RBX,RAX }
    /* +0x9c985e */ __asm { MOV RAX,0x27bcc7dc71879819 }
    /* +0x9c9868 */ __asm { JMP 0x7fffa5139873 }
    /* +0x9c9870 */ __asm { XOR R15D,R15D }
    /* +0x9c9873 */ __asm { MOV dword ptr [RBP + 0xe0],0x20701a27 }
    /* +0x9c987d */ __asm { MOV ECX,dword ptr [RBP + 0xe0] }
    /* +0x9c9883 */ __asm { TEST CL,0x1 }
    /* +0x9c9886 */ __asm { JZ 0x7fffa5139956 }
    /* +0x9c988c */ __asm { TEST R15,R15 }
    /* +0x9c988f */ __asm { JZ 0x7fffa5139970 }
    /* +0x9c9895 */ __asm { MOV dword ptr [RBP + 0xe0],0xa1213efb }
    /* +0x9c989f */ __asm { MOV ECX,dword ptr [RBP + 0xe0] }
    /* +0x9c98a5 */ __asm { CMP ECX,0x28d38216 }
    /* +0x9c98ab */ __asm { JBE 0x7fffa51399b7 }
    /* +0x9c98b1 */ __asm { MOV R13D,dword ptr [R15 + 0xc] }
    /* +0x9c98b5 */ __asm { MOV dword ptr [RBP + 0xe0],0x4414a020 }
    /* +0x9c98bf */ __asm { MOV ECX,dword ptr [RBP + 0xe0] }
    /* +0x9c98c5 */ __asm { MOV R10D,0x851779bf }
    /* +0x9c98cb */ __asm { ADD R10D,0x414c471f }
    /* +0x9c98d2 */ __asm { CMP ECX,R10D }
    /* +0x9c98d5 */ __asm { JNC 0x7fffa51399bf }
    /* +0x9c98db */ __asm { ADD R13,R9 }
    /* +0x9c98de */ __asm { MOV R10D,dword ptr [R15 + 0x8] }
    /* +0x9c98e2 */ __asm { MOV ECX,dword ptr [R15 + 0x10] }
    /* +0x9c98e6 */ __asm { CMP ECX,R10D }
    /* +0x9c98e9 */ __asm { CMOVA R10D,ECX }
    /* +0x9c98ed */ __asm { ADD R10,R13 }
    /* +0x9c98f0 */ __asm { MOV dword ptr [RBP + 0xe0],0xa9583abb }
    /* +0x9c98fa */ __asm { MOV ECX,dword ptr [RBP + 0xe0] }
    /* +0x9c9900 */ __asm { CMP qword ptr [RBP + 0x18],R10 }
    /* +0x9c9904 */ __asm { SETNC CL }
    /* +0x9c9907 */ __asm { CMP qword ptr [RBP + -0x30],R13 }
    /* +0x9c990b */ __asm { SETC R10B }
    /* +0x9c990f */ __asm { OR R10B,CL }
    /* +0x9c9912 */ __asm { CMP R10B,0x1 }
    /* +0x9c9916 */ __asm { JNZ 0x7fffa513abfe }
    /* +0x9c991c */ __asm { PUSHFQ }
    /* +0x9c991d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x9c9925 */ __asm { POPFQ }
    /* +0x9c9926 */ __asm { MOV dword ptr [RBP + 0xe0],0xefbf47b4 }
    /* +0x9c9930 */ __asm { MOV ECX,dword ptr [RBP + 0xe0] }
    /* +0x9c9936 */ __asm { TEST ECX,ECX }
    /* +0x9c9938 */ __asm { JS 0x7fffa5139760 }
    /* +0x9c993e */ __asm { MOV AL,CS:[0xfffe1ae9] }
    /* +0x9c9945 */ __asm { JMPF [RBX + -0x595a0e88] }
    /* +0x9c9956 */ __asm { MOV AL,FS:[-0xcc7af0007ab3] }
    /* +0x9c9961 */ __asm { JMP qword ptr [RSI + 0x66] }
    /* +0x9c9970 */ __asm { MOV CX,0xf120 }
    /* +0x9c9974 */ __asm { IMUL ECX,ECX,-0xbd5 }
    /* +0x9c997a */ __asm { MOV R10,qword ptr [R8 + -0x820] }
    /* +0x9c9981 */ __asm { MOVZX ECX,CX }
    /* +0x9c9984 */ __asm { MOV RCX,qword ptr GS:[RCX] }
    /* +0x9c9988 */ __asm { IMUL R10,qword ptr [RCX + 0x18] }
    /* +0x9c998d */ __asm { MOV RCX,-0x754d51af8bea0491 }
    /* +0x9c9997 */ __asm { CMP R10,RCX }
    /* +0x9c999a */ __asm { JNZ 0x7fffa5139760 }
    /* +0x9c99a0 */ __asm { NOP }
    /* +0x9c99a1 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x9c99a8 */ __asm { MOV RCX,0x0 }
    /* +0x9c99af */ __asm { IMUL EDI,dword ptr [RBP + -0x25617],0xdf726ff }
    /* +0x9c99ba */ __asm { JMP 0x7fffa51398b1 }
    /* +0x9c99c7 */ __asm { MOV dword ptr [RBP + 0xe0],0xf2785c45 }
    /* +0x9c99d1 */ __asm { MOV R11D,dword ptr [RBP + 0xe0] }
    /* +0x9c99d8 */ __asm { LEA R9D,[R11 + 0x1] }
    /* +0x9c99dc */ __asm { MOV R8D,0xffddcfbf }
    /* +0x9c99e2 */ __asm { IMUL EDX,R8D,-0x53c9710b }
    /* +0x9c99e9 */ __asm { MOV R8D,0xd78f2544 }
    /* +0x9c99ef */ __asm { MOV R10D,0x9069c61c }
    /* +0x9c99f5 */ __asm { MOV EAX,0xf05b03d2 }
    /* +0x9c99fa */ __asm { IMUL EAX,EAX,-0x442da21f }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtQueryVirtualMemory  |  RVA: 0x9e6370  |  Size: 13002 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtQueryVirtualMemory(void) {
    /* +0x9e6370 */ __asm { PUSH RDI }
    /* +0x9e6371 */ __asm { PUSH RBP }
    /* +0x9e6372 */ __asm { PUSH R14 }
    /* +0x9e6374 */ __asm { PUSH R12 }
    /* +0x9e6376 */ __asm { PUSH RBX }
    /* +0x9e6377 */ __asm { PUSH RSI }
    /* +0x9e6378 */ __asm { PUSH R13 }
    /* +0x9e637a */ __asm { PUSH R15 }
    /* +0x9e637c */ __asm { SUB RSP,0x1b8 }
    /* +0x9e6383 */ __asm { MOVDQA xmmword ptr [RSP + 0x1a0],XMM10 }
    /* +0x9e638d */ __asm { MOVDQA xmmword ptr [RSP + 0x190],XMM9 }
    /* +0x9e6397 */ __asm { MOV R14,R9 }
    /* +0x9e639a */ __asm { MOV EBX,R8D }
    /* +0x9e639d */ __asm { MOV RDI,RDX }
    /* +0x9e63a0 */ __asm { MOV RBP,RCX }
    /* +0x9e63a3 */ __asm { MOV CX,0xf9ed }
    /* +0x9e63a7 */ __asm { ADD ECX,0x673 }
    /* +0x9e63ad */ __asm { MOVZX R8D,CX }
    /* +0x9e63b1 */ __asm { MOV R11,qword ptr GS:[R8] }
    /* +0x9e63b5 */ __asm { MOV RAX,-0x51b9e0fcef2fc93d }
    /* +0x9e63bf */ __asm { CMP R11,RAX }
    /* +0x9e63c2 */ __asm { JZ 0x7fffa5156d05 }
    /* +0x9e63c8 */ __asm { MOV RSI,qword ptr [RSP + 0x228] }
    /* +0x9e63d0 */ __asm { MOV R13,qword ptr [RSP + 0x220] }
    /* +0x9e63d8 */ __asm { RDTSC }
    /* +0x9e63da */ __asm { SHL RDX,0x20 }
    /* +0x9e63de */ __asm { OR RDX,RAX }
    /* +0x9e63e1 */ __asm { MOV R11W,0x4af3 }
    /* +0x9e63e6 */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0x9e63f0 */ __asm { IMUL RAX,RDX }
    /* +0x9e63f4 */ __asm { MOV RDX,-0x22b18422c4a9c65e }
    /* +0x9e63fe */ __asm { ADD RDX,RAX }
    /* +0x9e6401 */ __asm { MOV R8,RDX }
    /* +0x9e6404 */ __asm { SHR R8,0x2d }
    /* +0x9e6408 */ __asm { MOV RCX,RDX }
    /* +0x9e640b */ __asm { SHR RCX,0x3b }
    /* +0x9e640f */ __asm { SHR RDX,0x1b }
    /* +0x9e6413 */ __asm { XOR R8D,EDX }
    /* +0x9e6416 */ __asm { ROR R8D,CL }
    /* +0x9e6419 */ __asm { ADD R11D,0xffffb50f }
    /* +0x9e6420 */ __asm { MOVZX ECX,R11W }
    /* +0x9e6424 */ __asm { AND R8D,0x3 }
    /* +0x9e6428 */ __asm { CMP R8D,ECX }
    /* +0x9e642b */ __asm { JNC 0x7fffa515665d }
    /* +0x9e6431 */ __asm { MOV CX,0x9a75 }
    /* +0x9e6435 */ __asm { XOR ECX,0x9a74 }
    /* +0x9e643b */ __asm { MOVZX ECX,CX }
    /* +0x9e643e */ __asm { CMP R8D,ECX }
    /* +0x9e6441 */ __asm { JNZ 0x7fffa51567b4 }
    /* +0x9e6447 */ __asm { LEA R9,[0x7fffa47b769c] }
    /* +0x9e644e */ __asm { MOV R11,0x6a341123fc81f789 }
    /* +0x9e6458 */ __asm { CMP R9,R11 }
    /* +0x9e645b */ __asm { JZ 0x7fffa5156d28 }
    /* +0x9e6461 */ __asm { MOV R8D,0xd0c1c04 }
    /* +0x9e6467 */ __asm { MOV ECX,0x1f272609 }
    /* +0x9e646c */ __asm { MOV R11D,0x15b13ab7 }
    /* +0x9e6472 */ __asm { ADD R8D,0xeaf435fb }
    /* +0x9e6479 */ __asm { ROL R8D,0x16 }
    /* +0x9e647d */ __asm { ADD ECX,0xdf253c78 }
    /* +0x9e6483 */ __asm { ADD R11D,0x8e8f794c }
    /* +0x9e648a */ __asm { MOVSXD R11,R11D }
    /* +0x9e648d */ __asm { MOVSXD RAX,ECX }
    /* +0x9e6490 */ __asm { MOVZX ECX,uint8_t ptr [R9 + 0x4ff1] }
    /* +0x9e6498 */ __asm { MOVZX R10D,uint8_t ptr [R9 + RCX*0x4 + 0x5001] }
    /* +0x9e64a1 */ __asm { ROL R10B,0x4 }
    /* +0x9e64a5 */ __asm { MOV uint8_t ptr [RSP + 0x60],R10B }
    /* +0x9e64aa */ __asm { MOVZX R10D,uint8_t ptr [R9 + RCX*0x4 + 0x5002] }
    /* +0x9e64b3 */ __asm { ROL R10B,0x4 }
    /* +0x9e64b7 */ __asm { MOV uint8_t ptr [RSP + 0x61],R10B }
    /* +0x9e64bc */ __asm { MOVZX R10D,uint8_t ptr [R9 + RCX*0x4 + 0x5003] }
    /* +0x9e64c5 */ __asm { ROL R10B,0x4 }
    /* +0x9e64c9 */ __asm { MOV uint8_t ptr [RSP + 0x62],R10B }
    /* +0x9e64ce */ __asm { MOVZX R9D,uint8_t ptr [R9 + RCX*0x4 + 0x5004] }
    /* +0x9e64d7 */ __asm { ROL R9B,0x4 }
    /* +0x9e64db */ __asm { MOV uint8_t ptr [RSP + 0x63],R9B }
    /* +0x9e64e0 */ __asm { MOV EDX,dword ptr [RSP + 0x60] }
    /* +0x9e64e4 */ __asm { LEA ECX,[RDX + 0x65e8ce72] }
    /* +0x9e64ea */ __asm { XOR EDX,0x65e8ce72 }
    /* +0x9e64f0 */ __asm { CMP RAX,R11 }
    /* +0x9e64f3 */ __asm { MOV R11D,dword ptr [R8] }
    /* +0x9e64f6 */ __asm { CMOVC EDX,ECX }
    /* +0x9e64f9 */ __asm { BT EDX,R11D }
    /* +0x9e64fd */ __asm { JNC 0x7fffa5156bc3 }
    /* +0x9e6503 */ __asm { PUSHFQ }
    /* +0x9e6504 */ __asm { POP RCX }
    /* +0x9e6505 */ __asm { PXOR XMM0,XMM0 }
    /* +0x9e6509 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM0 }
    /* +0x9e650f */ __asm { TEST ECX,0x100 }
    /* +0x9e6515 */ __asm { NOP }
    /* +0x9e6516 */ __asm { NOP }
    /* +0x9e6517 */ __asm { NOP }
    /* +0x9e6518 */ __asm { NOP }
    /* +0x9e6519 */ __asm { NOP }
    /* +0x9e651a */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x9e6521 */ __asm { NOP }
    /* +0x9e6522 */ __asm { MOV R9,0x0 }
    /* +0x9e6529 */ __asm { MOV dword ptr [RSP + 0x78],0x3512c2c2 }
    /* +0x9e6531 */ __asm { MOV R11D,dword ptr [RSP + 0x78] }
    /* +0x9e6536 */ __asm { TEST R11D,R11D }
    /* +0x9e6539 */ __asm { NOP }
    /* +0x9e653a */ __asm { NOP }
    /* +0x9e653b */ __asm { NOP }
    /* +0x9e653c */ __asm { NOP }
    /* +0x9e653d */ __asm { NOP }
    /* +0x9e653e */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0x9e6546 */ __asm { TEST ECX,0x100 }
    /* +0x9e654c */ __asm { NOP }
    /* +0x9e654d */ __asm { NOP }
    /* +0x9e654e */ __asm { NOP }
    /* +0x9e654f */ __asm { MOV dword ptr [RSP + 0x78],0xb095d34e }
    /* +0x9e6557 */ __asm { MOV ECX,dword ptr [RSP + 0x78] }
    /* +0x9e655b */ __asm { TEST ECX,ECX }
    /* +0x9e655d */ __asm { JNS 0x7fffa5159968 }
    /* +0x9e6563 */ __asm { MOV dword ptr [RSP + 0x78],0xbb2f6196 }
    /* +0x9e656b */ __asm { MOV ECX,dword ptr [RSP + 0x78] }
    /* +0x9e656f */ __asm { CMP ECX,0x8b131fce }
    /* +0x9e6575 */ __asm { NOP }
    /* +0x9e6576 */ __asm { NOP }
    /* +0x9e6577 */ __asm { NOP }
    /* +0x9e6578 */ __asm { NOP }
    /* +0x9e6579 */ __asm { NOP }
    /* +0x9e657a */ __asm { LEA RAX,[0x7fffa47b69d5] }
    /* +0x9e6581 */ __asm { MOV R11D,0x34c9fded }
    /* +0x9e6587 */ __asm { SUB R11,RAX }
    /* +0x9e658a */ __asm { MOV R8,0x18308421f0c5abb2 }
    /* +0x9e6594 */ __asm { MOV R10,-0xc0000091 }
    /* +0x9e659e */ __asm { ADD R10,R8 }
    /* +0x9e65a1 */ __asm { IMUL R10,R11 }
    /* +0x9e65a5 */ __asm { MOV R11,0x3b2de5085a76cb55 }
    /* +0x9e65af */ __asm { CMP R10,R11 }
    /* +0x9e65b2 */ __asm { JZ 0x7fffa5159970 }
    /* +0x9e65b8 */ __asm { MOV CX,0x9ab5 }
    /* +0x9e65bc */ __asm { XOR ECX,0x654a }
    /* +0x9e65c2 */ __asm { ROL CX,0x2 }
    /* +0x9e65c6 */ __asm { MOVSX R10,CX }
    /* +0x9e65ca */ __asm { MOV CX,0x9852 }
    /* +0x9e65ce */ __asm { LEA R12,[0x7fffa47be540] }
    /* +0x9e65d5 */ __asm { MOV R11D,0xc1ad62b1 }
    /* +0x9e65db */ __asm { IMUL R8D,R11D,0x1cb7ae4f }
    /* +0x9e65e2 */ __asm { XOR R8D,0xa0345497 }
    /* +0x9e65e9 */ __asm { MOV R11W,0xb }
    /* +0x9e65ee */ __asm { ADD R11D,0x5 }
    /* +0x9e65f2 */ __asm { MOVZX R9D,R11W }
    /* +0x9e65f6 */ __asm { MOV R11W,0xefd7 }
    /* +0x9e65fb */ __asm { MOVZX R11D,R11W }
    /* +0x9e65ff */ __asm { XOR R11,0xb5a8 }
    /* +0x9e6606 */ __asm { IMUL ECX,ECX,-0x2073 }
    /* +0x9e660c */ __asm { XOR ECX,0x5302 }
    /* +0x9e6612 */ __asm { MOVZX EDX,CX }
    /* +0x9e6615 */ __asm { MOV R15,-0x9aea4131 }
    /* +0x9e661f */ __asm { ADD R15,R12 }
    /* +0x9e6622 */ __asm { ADD R15,R8 }
    /* +0x9e6625 */ __asm { MOV qword ptr [RSP + 0x78],R8 }
    /* +0x9e662a */ __asm { MOV EAX,dword ptr [R11 + RAX*0x1 + 0x74] }
    /* +0x9e662f */ __asm { LEA R8,[RSP + 0x60] }
    /* +0x9e6634 */ __asm { SYSCALL }
    /* +0x9e6636 */ __asm { MOV R11,0x4e801845e89a0da5 }
    /* +0x9e6640 */ __asm { CMP R15,R11 }
    /* +0x9e6643 */ __asm { NOP }
    /* +0x9e6644 */ __asm { NOP }
    /* +0x9e6645 */ __asm { NOP }
    /* +0x9e6646 */ __asm { NOP }
    /* +0x9e6647 */ __asm { NOP }
    /* +0x9e6648 */ __asm { NOP }
    /* +0x9e6649 */ __asm { NOP }
    /* +0x9e664a */ __asm { NOP }
    /* +0x9e664b */ __asm { MOV qword ptr [RSP + 0x60],R9 }
    /* +0x9e6650 */ __asm { MOV EAX,dword ptr [R12 + -0x2060] }
    /* +0x9e6658 */ __asm { JMP 0x7fffa5156e7d }
    /* +0x9e665d */ __asm { MOV CX,0xfb5f }
    /* +0x9e6661 */ __asm { XOR ECX,0xfb5c }
    /* +0x9e6667 */ __asm { MOVZX ECX,CX }
    /* +0x9e666a */ __asm { CMP R8D,ECX }
    /* +0x9e666d */ __asm { JNC 0x7fffa51568e8 }
    /* +0x9e6673 */ __asm { MOV R9D,0xbac57820 }
    /* +0x9e6679 */ __asm { MOV R11,0x273558c51ba0bd51 }
    /* +0x9e6683 */ __asm { CMP R9,R11 }
    /* +0x9e6686 */ __asm { NOP }
    /* +0x9e6687 */ __asm { NOP }
    /* +0x9e6688 */ __asm { NOP }
    /* +0x9e6689 */ __asm { NOP }
    /* +0x9e668a */ __asm { NOP }
    /* +0x9e668b */ __asm { NOP }
    /* +0x9e668c */ __asm { NOP }
    /* +0x9e668d */ __asm { NOP }
    /* +0x9e668e */ __asm { NOP }
    /* +0x9e668f */ __asm { NOP }
    /* +0x9e6690 */ __asm { NOP }
    /* +0x9e6691 */ __asm { NOP }
    /* +0x9e6692 */ __asm { NOP }
    /* +0x9e6693 */ __asm { NOP }
    /* +0x9e6694 */ __asm { NOP }
    /* +0x9e6695 */ __asm { NOP }
    /* +0x9e6696 */ __asm { NOP }
    /* +0x9e67b4 */ __asm { PXOR XMM0,XMM0 }
    /* +0x9e67b8 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM0 }
    /* +0x9e67be */ __asm { MOV R11,-0x788 }
    /* +0x9e67c5 */ __asm { ADD R11,qword ptr [RSP + 0x1f8] }
    /* +0x9e67cd */ __asm { MOV R9,0x2fe67f86db79936d }
    /* +0x9e67d7 */ __asm { AND R9,R11 }
    /* +0x9e67da */ __asm { MOV R11,0x1a8d6e4d343c23d9 }
    /* +0x9e67e4 */ __asm { CMP R9,R11 }
    /* +0x9e67e7 */ __asm { JZ 0x7fffa5156d0e }
    /* +0x9e67ed */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0x9e67f5 */ __asm { MOV dword ptr [RSP + 0x78],0x509c0364 }
    /* +0x9e67fd */ __asm { MOV ECX,dword ptr [RSP + 0x78] }
    /* +0x9e6801 */ __asm { MOV dword ptr [RSP + 0x78],0xc211400 }
    /* +0x9e6809 */ __asm { MOV ECX,dword ptr [RSP + 0x78] }
    /* +0x9e680d */ __asm { CMP ECX,0xc6aa86a1 }
    /* +0x9e6813 */ __asm { JNC 0x7fffa5156d30 }
    /* +0x9e6819 */ __asm { LEA R8,[0x7fffa478c5e4] }
    /* +0x9e6820 */ __asm { MOV R9,R8 }
    /* +0x9e6823 */ __asm { ROL R9,0x37 }
    /* +0x9e6827 */ __asm { ADD R9,-0x443bbef3 }
    /* +0x9e682e */ __asm { MOV R11,-0x110283718b7ec6d2 }
    /* +0x9e6838 */ __asm { CMP R9,R11 }
    /* +0x9e683b */ __asm { JZ 0x7fffa5156d3e }
    /* +0x9e6841 */ __asm { MOV R9W,0xc516 }
    /* +0x9e6846 */ __asm { ADD R9D,0x3b12 }
    /* +0x9e684d */ __asm { MOV ECX,0x8a88f2dc }
    /* +0x9e6852 */ __asm { LEA R12,[0x7fffa47c4660] }
    /* +0x9e6859 */ __asm { MOV R15,-0x2d90b2635b6d6185 }
    /* +0x9e6863 */ __asm { IMUL R15,R12 }
    /* +0x9e6867 */ __asm { MOV R11,R15 }
    /* +0x9e686a */ __asm { XOR R11,-0x49874dbb }
    /* +0x9e6871 */ __asm { MOVZX EDX,R9W }
    /* +0x9e6875 */ __asm { MOV qword ptr [RSP + 0x78],R9 }
    /* +0x9e687a */ __asm { MOV R9D,0xcdeab2e2 }
    /* +0x9e6880 */ __asm { MOV EAX,0xcdeab2e1 }
    /* +0x9e6885 */ __asm { SUB EAX,R9D }
    /* +0x9e6888 */ __asm { MOVSXD R10,EAX }
    /* +0x9e688b */ __asm { MOV R9W,0xccd4 }
    /* +0x9e6890 */ __asm { LEA R9D,[R9 + R9*0x4] }
    /* +0x9e6894 */ __asm { XOR R9D,0x34 }
    /* +0x9e6898 */ __asm { MOVZX R9D,R9W }
    /* +0x9e689c */ __asm { AND R15,-0x49874dbb }
    /* +0x9e68a3 */ __asm { ADD ECX,0x20791e18 }
    /* +0x9e68a9 */ __asm { MOVSXD RAX,ECX }
    /* +0x9e68ac */ __asm { CMP RAX,-0x54fdef0c }
    /* +0x9e68b2 */ __asm { CMOVZ R15,R11 }
    /* +0x9e68b6 */ __asm { MOV EAX,dword ptr [R8 + -0x7758] }
    /* +0x9e68bd */ __asm { LEA R8,[RSP + 0x60] }
    /* +0x9e68c2 */ __asm { SYSCALL }
    /* +0x9e68c4 */ __asm { MOV R11,-0x2b4b1c4483a7e658 }
    /* +0x9e68ce */ __asm { CMP R15,R11 }
    /* +0x9e68d1 */ __asm { NOP }
    /* +0x9e68d2 */ __asm { NOP }
    /* +0x9e68d3 */ __asm { NOP }
    /* +0x9e68d4 */ __asm { NOP }
    /* +0x9e68d5 */ __asm { NOP }
    /* +0x9e68d6 */ __asm { MOV qword ptr [RSP + 0x60],R9 }
    /* +0x9e68db */ __asm { MOV EAX,dword ptr [R12 + -0x7650] }
    /* +0x9e68e3 */ __asm { JMP 0x7fffa5156e7d }
    /* +0x9e68e8 */ __asm { MOV R9D,0x73432fe1 }
    /* +0x9e68ee */ __asm { MOV R11,-0x238bc4b3c537c47d }
    /* +0x9e68f8 */ __asm { IMUL R11,R9 }
    /* +0x9e68fc */ __asm { MOV RAX,-0x16cf702c5dcd8b93 }
    /* +0x9e6906 */ __asm { ADD RAX,R11 }
    /* +0x9e6909 */ __asm { MOV R11,0x5fc08414791670d2 }
    /* +0x9e6913 */ __asm { CMP RAX,R11 }
    /* +0x9e6916 */ __asm { JZ 0x7fffa5156d45 }
    /* +0x9e691c */ __asm { CMP dword ptr [R9 + 0xcbad3df],0xd }
    /* +0x9e6924 */ __asm { JC 0x7fffa5156d54 }
    /* +0x9e692a */ __asm { PXOR XMM0,XMM0 }
    /* +0x9e692e */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM0 }
    /* +0x9e6934 */ __asm { MOV dword ptr [RSP + 0x78],0x910ceb9d }
    /* +0x9e693c */ __asm { MOV ECX,dword ptr [RSP + 0x78] }
    /* +0x9e6940 */ __asm { TEST CL,0x1 }
    /* +0x9e6943 */ __asm { JZ 0x7fffa51599ab }
    /* +0x9e6949 */ __asm { MOV R11W,0xbfb3 }
    /* +0x9e694e */ __asm { MOVZX R8D,R11W }
    /* +0x9e6952 */ __asm { XOR R8,0xbfd3 }
    /* +0x9e6959 */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0x9e6961 */ __asm { MOV R11,qword ptr GS:[R8] }
    /* +0x9e6965 */ __asm { MOV RAX,-0x3cf4ab8d9822b418 }
    /* +0x9e696f */ __asm { MOV R11,qword ptr [R11 + 0x30] }
    /* +0x9e6973 */ __asm { MOV R9,-0x46c1546c3919087 }
    /* +0x9e697d */ __asm { SUB R11,R9 }
    /* +0x9e6980 */ __asm { XOR R11,RAX }
    /* +0x9e6983 */ __asm { CMP R11,0x341c3667 }
    /* +0x9e698a */ __asm { JZ 0x7fffa5156d19 }
    /* +0x9e6990 */ __asm { PUSHFQ }
    /* +0x9e6991 */ __asm { POP RCX }
    /* +0x9e6992 */ __asm { TEST ECX,0x100 }
    /* +0x9e6998 */ __asm { NOP }
    /* +0x9e6999 */ __asm { NOP }
    /* +0x9e699a */ __asm { NOP }
    /* +0x9e699b */ __asm { NOP }
    /* +0x9e699c */ __asm { NOP }
    /* +0x9e699d */ __asm { MOV ECX,0x68925b3 }
    /* +0x9e69a2 */ __asm { IMUL ECX,ECX,-0x3b190747 }
    /* +0x9e69a8 */ __asm { ADD ECX,0x1c15fd17 }
    /* +0x9e69ae */ __asm { MOV dword ptr [RSP + 0x78],ECX }
    /* +0x9e69b2 */ __asm { MOV ECX,dword ptr [RSP + 0x78] }
    /* +0x9e69b6 */ __asm { TEST ECX,ECX }
    /* +0x9e69b8 */ __asm { JNS 0x7fffa51599b3 }
    /* +0x9e69be */ __asm { LEA R9,[0x7fffa478b492] }
    /* +0x9e69c5 */ __asm { MOV R11,0x329e83d08af41c43 }
    /* +0x9e69cf */ __asm { MOV EAX,0x8d619327 }
    /* +0x9e69d4 */ __asm { IMUL RAX,R11 }
    /* +0x9e69d8 */ __asm { ROL RAX,0x2f }
    /* +0x9e69dc */ __asm { NOP }
    /* +0x9e69dd */ __asm { MOV RDX,0x0 }
    /* +0x9e69e4 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x9e69eb */ __asm { CMP R9,RAX }
    /* +0x9e69ee */ __asm { JZ 0x7fffa51599bb }
    /* +0x9e69f4 */ __asm { MOV CX,0x243a }
    /* +0x9e69f8 */ __asm { ADD ECX,0xffffdbd6 }
    /* +0x9e69fe */ __asm { MOV R11W,0x22bc }
    /* +0x9e6a03 */ __asm { ADD R11D,0xffffdde4 }
    /* +0x9e6a0a */ __asm { ROL R11W,0xe }
    /* +0x9e6a0f */ __asm { MOVZX EDX,R11W }
    /* +0x9e6a13 */ __asm { LEA R12,[0x7fffa478a9a6] }
    /* +0x9e6a1a */ __asm { MOV R11,0x4d575af05cc44061 }
    /* +0x9e6a24 */ __asm { IMUL R11,R12 }
    /* +0x9e6a28 */ __asm { MOV R15,0x5a0a2fb30652a36e }
    /* +0x9e6a32 */ __asm { ADD R15,R11 }
    /* +0x9e6a35 */ __asm { MOV qword ptr [RSP + 0x78],R8 }
    /* +0x9e6a3a */ __asm { MOV EAX,dword ptr [R9 + -0x6606] }
    /* +0x9e6a41 */ __asm { MOVZX R9D,CX }
    /* +0x9e6a45 */ __asm { MOV ECX,0xe6fabcd }
    /* +0x9e6a4a */ __asm { IMUL ECX,ECX,0x722ac6fb }
    /* +0x9e6a50 */ __asm { ROL ECX,0xb }
    /* +0x9e6a53 */ __asm { MOVSXD R10,ECX }
    /* +0x9e6a56 */ __asm { LEA R8,[RSP + 0x60] }
    /* +0x9e6a5b */ __asm { SYSCALL }
    /* +0x9e6a5d */ __asm { MOV R11,-0x5f3456eca826505c }
    /* +0x9e6a67 */ __asm { CMP R15,R11 }
    /* +0x9e6a6a */ __asm { JZ 0x7fffa51599c6 }
    /* +0x9e6a70 */ __asm { MOV qword ptr [RSP + 0x60],R9 }
    /* +0x9e6a75 */ __asm { MOV EAX,dword ptr [R12 + -0x6336] }
    /* +0x9e6a7d */ __asm { JMP 0x7fffa5156e7d }
    /* +0x9e6bb1 */ __asm { MOV qword ptr [RSP + 0x60],R9 }
    /* +0x9e6bb6 */ __asm { MOV EAX,dword ptr [R12 + -0x5227] }
    /* +0x9e6bbe */ __asm { JMP 0x7fffa5156e7d }
    /* +0x9e6bc3 */ __asm { PXOR XMM0,XMM0 }
    /* +0x9e6bc7 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM0 }
    /* +0x9e6bcd */ __asm { MOV dword ptr [RSP + 0x78],0x8bdb6c44 }
    /* +0x9e6bd5 */ __asm { MOV ECX,dword ptr [RSP + 0x78] }
    /* +0x9e6bd9 */ __asm { MOV R11W,0x4708 }
    /* +0x9e6bde */ __asm { IMUL R11D,R11D,0x27 }
    /* +0x9e6be2 */ __asm { ADD R11D,0x2dc8 }
    /* +0x9e6be9 */ __asm { MOVZX R11D,R11W }
    /* +0x9e6bed */ __asm { AND ECX,0x1 }
    /* +0x9e6bf0 */ __asm { CMP ECX,R11D }
    /* +0x9e6bf3 */ __asm { NOP }
    /* +0x9e6bf4 */ __asm { NOP }
    /* +0x9e6bf5 */ __asm { NOP }
    /* +0x9e6bf6 */ __asm { NOP }
    /* +0x9e6bf7 */ __asm { NOP }
    /* +0x9e6bf8 */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0x9e6c00 */ __asm { MOV dword ptr [RSP + 0x78],0xafdea11 }
    /* +0x9e6c08 */ __asm { MOV ECX,dword ptr [RSP + 0x78] }
    /* +0x9e6c0c */ __asm { CMP ECX,0x144a8b0b }
    /* +0x9e6c12 */ __asm { JNC 0x7fffa51599e5 }
    /* +0x9e6c18 */ __asm { PUSHFQ }
    /* +0x9e6c19 */ __asm { POP RCX }
    /* +0x9e6c1a */ __asm { TEST ECX,0x100 }
    /* +0x9e6c20 */ __asm { NOP }
    /* +0x9e6c21 */ __asm { NOP }
    /* +0x9e6c22 */ __asm { NOP }
    /* +0x9e6c23 */ __asm { NOP }
    /* +0x9e6c24 */ __asm { NOP }
    /* +0x9e6c25 */ __asm { NOP }
    /* +0x9e6c26 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x9e6c2d */ __asm { MOV R9,0x0 }
    /* +0x9e6c34 */ __asm { MOV ECX,0xde2f43f9 }
    /* +0x9e6c39 */ __asm { XOR ECX,0x4d57c381 }
    /* +0x9e6c3f */ __asm { MOV dword ptr [RSP + 0x78],ECX }
    /* +0x9e6c43 */ __asm { MOV ECX,dword ptr [RSP + 0x78] }
    /* +0x9e6c47 */ __asm { TEST CL,0x1 }
    /* +0x9e6c4a */ __asm { NOP }
    /* +0x9e6c4b */ __asm { NOP }
    /* +0x9e6c4c */ __asm { NOP }
    /* +0x9e6c4d */ __asm { NOP }
    /* +0x9e6c4e */ __asm { NOP }
    /* +0x9e6c4f */ __asm { NOP }
    /* +0x9e6c50 */ __asm { LEA RAX,[0x7fffa47893de] }
    /* +0x9e6c57 */ __asm { MOV R11,-0x2214b65fc1c9518d }
    /* +0x9e6c61 */ __asm { CMP RAX,R11 }
    /* +0x9e6c64 */ __asm { JZ 0x7fffa51599f9 }
    /* +0x9e6c6a */ __asm { MOV qword ptr [RSP + 0x78],R9 }
    /* +0x9e6c6f */ __asm { MOV CX,0x83b1 }
    /* +0x9e6c73 */ __asm { XOR ECX,0x7dd9 }
    /* +0x9e6c79 */ __asm { ADD ECX,0x1a8 }
    /* +0x9e6c7f */ __asm { MOVZX R9D,CX }
    /* +0x9e6c83 */ __asm { LEA R12,[0x7fffa47bb1e2] }
    /* +0x9e6c8a */ __asm { MOV CX,0x67f6 }
    /* +0x9e6c8e */ __asm { IMUL ECX,ECX,0x6553 }
    /* +0x9e6c94 */ __asm { ADD ECX,0x3d66 }
    /* +0x9e6c9a */ __asm { MOV R11D,0x92b1384a }
    /* +0x9e6ca0 */ __asm { ADD R11D,0x6d4ec7b5 }
    /* +0x9e6ca7 */ __asm { MOVSXD R10,R11D }
    /* +0x9e6caa */ __asm { MOV R11,-0x4517978275c398e1 }
    /* +0x9e6cb4 */ __asm { IMUL R11,R11,-0x8bd6ceb }
    /* +0x9e6cbb */ __asm { MOV R15D,0xc0000096 }
    /* +0x9e6cc1 */ __asm { ADD R15,R11 }
    /* +0x9e6cc4 */ __asm { MOV R11D,0xdcae2bc5 }
    /* +0x9e6cca */ __asm { MOVZX EDX,CX }
    /* +0x9e6ccd */ __asm { ADD R11D,0x230b5b3a }
    /* +0x9e6cd4 */ __asm { ROL R11D,0x18 }
    /* +0x9e6cd8 */ __asm { MOVSXD R11,R11D }
    /* +0x9e6cdb */ __asm { MOV EAX,dword ptr [R11 + RAX*0x1 + 0x128] }
    /* +0x9e6ce3 */ __asm { LEA R8,[RSP + 0x60] }
    /* +0x9e6ce8 */ __asm { SYSCALL }
    /* +0x9e6cea */ __asm { CMP R12,R15 }
    /* +0x9e6ced */ __asm { JZ 0x7fffa5159a03 }
    /* +0x9e6cf3 */ __asm { MOV qword ptr [RSP + 0x60],R9 }
    /* +0x9e6cf8 */ __asm { MOV EAX,dword ptr [R12 + 0x12fe] }
    /* +0x9e6d00 */ __asm { JMP 0x7fffa5156e7d }
    /* +0x9e6d05 */ __asm { RETF 0x321a }
    /* +0x9e6d19 */ __asm { OR R10B,DL }
    /* +0x9e6d1c */ __asm { AND dword ptr [RDX + -0x5b],0xab2d54ed }
    /* +0x9e6d23 */ __asm { JMP 0x7fffa5156990 }
    /* +0x9e6d28 */ __asm { TEST dword ptr [R14 + -0x8ce17],0xf9881bff }
    /* +0x9e6d33 */ __asm { FCOM float ptr [RDX + RSI*0x2] }
    /* +0x9e6d36 */ __asm { MUL dword ptr [RSI] }
    /* +0x9e6d39 */ __asm { JMP 0x7fffa5156819 }
    /* +0x9e6d3e */ __asm { JZ 0x7fffa5156da1 }
    /* +0x9e6d40 */ __asm { JMP 0x7fffa5156841 }
    /* +0x9e6d45 */ __asm { JMP 0x7fffa5156d88 }
    /* +0x9e6d54 */ __asm { PXOR XMM0,XMM0 }
    /* +0x9e6d58 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM0 }
    /* +0x9e6d5e */ __asm { PUSHFQ }
    /* +0x9e6d5f */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x9e6d67 */ __asm { POPFQ }
    /* +0x9e6d68 */ __asm { MOV dword ptr [RSP + 0x78],0x14a656ce }
    /* +0x9e6d70 */ __asm { MOV ECX,dword ptr [RSP + 0x78] }
    /* +0x9e6d74 */ __asm { CMP ECX,0x46c45a02 }
    /* +0x9e6d7a */ __asm { NOP }
    /* +0x9e6d7b */ __asm { NOP }
    /* +0x9e6d7c */ __asm { NOP }
    /* +0x9e6d7d */ __asm { NOP }
    /* +0x9e6d7e */ __asm { NOP }
    /* +0x9e6d7f */ __asm { NOP }
    /* +0x9e6d80 */ __asm { NOP }
    /* +0x9e6d81 */ __asm { NOP }
    /* +0x9e6d82 */ __asm { NOP }
    /* +0x9e6d83 */ __asm { NOP }
    /* +0x9e6d84 */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0x9e6d8c */ __asm { MOV dword ptr [RSP + 0x78],0x44951a18 }
    /* +0x9e6d94 */ __asm { MOV ECX,dword ptr [RSP + 0x78] }
    /* +0x9e6d98 */ __asm { TEST ECX,ECX }
    /* +0x9e6d9a */ __asm { NOP }
    /* +0x9e6d9b */ __asm { NOP }
    /* +0x9e6d9c */ __asm { NOP }
    /* +0x9e6d9d */ __asm { NOP }
    /* +0x9e6d9e */ __asm { NOP }
    /* +0x9e6d9f */ __asm { MOV R8D,0x90909090 }
    /* +0x9e6da5 */ __asm { NOP }
    /* +0x9e6da6 */ __asm { NOP }
    /* +0x9e6da7 */ __asm { NOP }
    /* +0x9e6da8 */ __asm { NOP }
    /* +0x9e6da9 */ __asm { NOP }
    /* +0x9e6daa */ __asm { NOP }
    /* +0x9e6dab */ __asm { NOP }
    /* +0x9e6dac */ __asm { NOP }
    /* +0x9e6dad */ __asm { NOP }
    /* +0x9e6dae */ __asm { NOP }
    /* +0x9e6daf */ __asm { NOP }
    /* +0x9e6db0 */ __asm { NOP }
    /* +0x9e6db1 */ __asm { NOP }
    /* +0x9e6db2 */ __asm { NOP }
    /* +0x9e6db3 */ __asm { NOP }
    /* +0x9e6db4 */ __asm { NOP }
    /* +0x9e6db5 */ __asm { NOP }
    /* +0x9e6e7d */ __asm { MOV qword ptr [RSP + 0x30],RSI }
    /* +0x9e6e82 */ __asm { MOV qword ptr [RSP + 0x28],R13 }
    /* +0x9e6e87 */ __asm { MOV R9,R14 }
    /* +0x9e6e8a */ __asm { MOV R10,RBP }
    /* +0x9e6e8d */ __asm { MOV RDX,RDI }
    /* +0x9e6e90 */ __asm { MOV R8D,EBX }
    /* +0x9e6e93 */ __asm { SYSCALL }
    /* +0x9e6e95 */ __asm { CMP RBP,-0x1 }
    /* +0x9e6e99 */ __asm { JNZ 0x7fffa515992a }
    /* +0x9e6e9f */ __asm { TEST EAX,EAX }
    /* +0x9e6ea1 */ __asm { JS 0x7fffa515992a }
    /* +0x9e6ea7 */ __asm { MOV R8D,0x4c7270a5 }
    /* +0x9e6ead */ __asm { MOV ECX,0xc331b384 }
    /* +0x9e6eb2 */ __asm { ADD ECX,0x113f2f64 }
    /* +0x9e6eb8 */ __asm { MOVSXD R11,ECX }
    /* +0x9e6ebb */ __asm { XOR R8D,0x79dc13d9 }
    /* +0x9e6ec2 */ __asm { ROL R8D,0x13 }
    /* +0x9e6ec6 */ __asm { CMP R8,R11 }
    /* +0x9e6ec9 */ __asm { JLE 0x7fffa5156ef8 }
    /* +0x9e6ecb */ __asm { MOV ECX,0x4ef412c0 }
    /* +0x9e6ed0 */ __asm { MOV R11D,0x4a26be4a }
    /* +0x9e6ed6 */ __asm { IMUL R8D,R11D,0x416eec7f }
    /* +0x9e6edd */ __asm { ADD R8D,0x1395056e }
    /* +0x9e6ee4 */ __asm { MOV qword ptr [RSP + 0x98],R8 }
    /* +0x9e6eec */ __asm { ADD ECX,0xaaabe309 }
    /* +0x9e6ef2 */ __asm { MOV dword ptr [RSP + 0x78],ECX }
    /* +0x9e6ef6 */ __asm { JMP 0x7fffa5156f1b }
    /* +0x9e6ef8 */ __asm { MOV ECX,0x81f6d396 }
    /* +0x9e6efd */ __asm { IMUL R8D,ECX,0x788810bb }
    /* +0x9e6f04 */ __asm { ADD R8D,0x114b7506 }
    /* +0x9e6f0b */ __asm { MOV qword ptr [RSP + 0x98],R8 }
    /* +0x9e6f13 */ __asm { MOV dword ptr [RSP + 0x78],0xf99ff5c9 }
    /* +0x9e6f1b */ __asm { MOV ECX,dword ptr [RSP + 0x78] }
    /* +0x9e6f1f */ __asm { CMP EBX,0x3 }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtAllocateVirtualMemory  |  RVA: 0xb091c0  |  Size: 18941 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtAllocateVirtualMemory(void) {
    /* +0xb091c0 */ __asm { PUSH RBP }
    /* +0xb091c1 */ __asm { PUSH RDI }
    /* +0xb091c2 */ __asm { PUSH R13 }
    /* +0xb091c4 */ __asm { PUSH RBX }
    /* +0xb091c5 */ __asm { PUSH RSI }
    /* +0xb091c6 */ __asm { PUSH R14 }
    /* +0xb091c8 */ __asm { PUSH R15 }
    /* +0xb091ca */ __asm { PUSH R12 }
    /* +0xb091cc */ __asm { SUB RSP,0x1b8 }
    /* +0xb091d3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xb091db */ __asm { MOVDQA xmmword ptr [RBP + 0x120],XMM7 }
    /* +0xb091e3 */ __asm { MOVDQA xmmword ptr [RBP + 0x110],XMM9 }
    /* +0xb091ec */ __asm { MOVDQA xmmword ptr [RBP + 0x100],XMM11 }
    /* +0xb091f5 */ __asm { MOVAPS xmmword ptr [RBP + 0xf0],XMM14 }
    /* +0xb091fd */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM8 }
    /* +0xb09206 */ __asm { MOV qword ptr [RBP + 0xd8],-0x2 }
    /* +0xb09211 */ __asm { MOV qword ptr [RBP + 0xc0],R9 }
    /* +0xb09218 */ __asm { MOV qword ptr [RBP + -0x20],RDX }
    /* +0xb0921c */ __asm { MOV qword ptr [RBP + 0x40],RCX }
    /* +0xb09220 */ __asm { MOV EDX,0x6b059e1f }
    /* +0xb09225 */ __asm { MOV RBX,RAX }
    /* +0xb09228 */ __asm { MOV ECX,0x332a1ae0 }
    /* +0xb0922d */ __asm { MOV R11,RBX }
    /* +0xb09230 */ __asm { NOT R11 }
    /* +0xb09233 */ __asm { MOV R9D,0x1af0ee5d }
    /* +0xb09239 */ __asm { MOV RDI,R8 }
    /* +0xb0923c */ __asm { MOV R10,RBX }
    /* +0xb0923f */ __asm { XOR R10,RDI }
    /* +0xb09242 */ __asm { MOV qword ptr [RBP + -0x8],RDI }
    /* +0xb09246 */ __asm { MOVQ XMM5,RDI }
    /* +0xb0924b */ __asm { MOV qword ptr [RBP + 0x18],R11 }
    /* +0xb0924f */ __asm { AND RDI,R11 }
    /* +0xb09252 */ __asm { ADD R9D,0x1a6ad942 }
    /* +0xb09259 */ __asm { MOV R13D,0xd94516e3 }
    /* +0xb0925f */ __asm { ADD R13D,0x9c9bbad8 }
    /* +0xb09266 */ __asm { MOV ESI,0x25c74458 }
    /* +0xb0926b */ __asm { ADD ESI,0x303760ed }
    /* +0xb09271 */ __asm { MOV RAX,R12 }
    /* +0xb09274 */ __asm { MOV R15,R10 }
    /* +0xb09277 */ __asm { XOR R15,RAX }
    /* +0xb0927a */ __asm { IMUL R11,R15,-0x43b7df40 }
    /* +0xb09281 */ __asm { MOV qword ptr [RBP + 0xb8],R11 }
    /* +0xb09288 */ __asm { MOV R12D,0x3470473c }
    /* +0xb0928e */ __asm { IMUL R11D,R12D,0x664ee55d }
    /* +0xb09295 */ __asm { MOV qword ptr [RBP + 0x48],R11 }
    /* +0xb09299 */ __asm { XOR ECX,0x6296b014 }
    /* +0xb0929f */ __asm { MOV R14D,0x9eb8abcd }
    /* +0xb092a5 */ __asm { IMUL R15D,R14D,0x2c639047 }
    /* +0xb092ac */ __asm { XOR EDX,0x453cef95 }
    /* +0xb092b2 */ __asm { PCMPEQD XMM0,XMM0 }
    /* +0xb092b6 */ __asm { PXOR XMM0,XMM5 }
    /* +0xb092ba */ __asm { MOVQ R11,XMM0 }
    /* +0xb092bf */ __asm { AND R11,RBX }
    /* +0xb092c2 */ __asm { MOV R12,RAX }
    /* +0xb092c5 */ __asm { AND R12,R11 }
    /* +0xb092c8 */ __asm { IMUL R14,R12,0x66912286 }
    /* +0xb092cf */ __asm { CMP R15,RDX }
    /* +0xb092d2 */ __asm { LEA RDX,[R11 + RAX*0x1] }
    /* +0xb092d6 */ __asm { CMOVGE RDX,R12 }
    /* +0xb092da */ __asm { MOVQ XMM5,RAX }
    /* +0xb092df */ __asm { NOT RAX }
    /* +0xb092e2 */ __asm { AND R11,RAX }
    /* +0xb092e5 */ __asm { MOV R12,-0x8d8751e5 }
    /* +0xb092ef */ __asm { IMUL R12,R11 }
    /* +0xb092f3 */ __asm { MOVQ XMM14,RBX }
    /* +0xb092f8 */ __asm { IMUL R15,RDX,-0x10927d41 }
    /* +0xb092ff */ __asm { POR XMM0,XMM14 }
    /* +0xb09304 */ __asm { XOR RDI,RAX }
    /* +0xb09307 */ __asm { IMUL RSI,RDI }
    /* +0xb0930b */ __asm { MOV R11,RAX }
    /* +0xb0930e */ __asm { XOR R11,R10 }
    /* +0xb09311 */ __asm { MOVQ RDX,XMM0 }
    /* +0xb09316 */ __asm { MOV qword ptr [RBP + -0x10],RAX }
    /* +0xb0931a */ __asm { AND RDX,RAX }
    /* +0xb0931d */ __asm { ADD RDI,0x55fea545 }
    /* +0xb09324 */ __asm { CMP RCX,qword ptr [RBP + 0x48] }
    /* +0xb09328 */ __asm { CMOVNZ RDI,RSI }
    /* +0xb0932c */ __asm { MOV RSI,R8 }
    /* +0xb0932f */ __asm { MOV R8,-0x99b68485 }
    /* +0xb09339 */ __asm { IMUL R8,R11 }
    /* +0xb0933d */ __asm { ADD R8,qword ptr [RBP + 0xb8] }
    /* +0xb09344 */ __asm { ADD R8,R14 }
    /* +0xb09347 */ __asm { ADD R8,R12 }
    /* +0xb0934a */ __asm { MOV qword ptr [RBP + 0xb8],RBX }
    /* +0xb09351 */ __asm { MOV RCX,qword ptr [RBP + -0x8] }
    /* +0xb09355 */ __asm { LEA R11,[RCX + RBX*0x1] }
    /* +0xb09359 */ __asm { MOV RCX,-0x2 }
    /* +0xb09360 */ __asm { SUB RCX,R11 }
    /* +0xb09363 */ __asm { CMP R9,R13 }
    /* +0xb09366 */ __asm { CMOVC RCX,R10 }
    /* +0xb0936a */ __asm { MOVQ XMM0,RCX }
    /* +0xb0936f */ __asm { POR XMM0,XMM5 }
    /* +0xb09373 */ __asm { MOVQ R9,XMM0 }
    /* +0xb09378 */ __asm { ADD R9,RDX }
    /* +0xb0937b */ __asm { ADD R8,RDI }
    /* +0xb0937e */ __asm { MOV dword ptr [RBP + 0xa0],0xae3d1c62 }
    /* +0xb09388 */ __asm { MOV EDX,dword ptr [RBP + 0xa0] }
    /* +0xb0938e */ __asm { TEST DL,0x1 }
    /* +0xb09391 */ __asm { NOP }
    /* +0xb09392 */ __asm { NOP }
    /* +0xb09393 */ __asm { NOP }
    /* +0xb09394 */ __asm { NOP }
    /* +0xb09395 */ __asm { NOP }
    /* +0xb09396 */ __asm { NOP }
    /* +0xb09397 */ __asm { NOP }
    /* +0xb09398 */ __asm { IMUL RDX,R9,0x3788aca0 }
    /* +0xb0939f */ __asm { MOV RCX,R15 }
    /* +0xb093a2 */ __asm { ADD RCX,R8 }
    /* +0xb093a5 */ __asm { MOV dword ptr [RBP + 0xa0],0x4a3c2cc2 }
    /* +0xb093af */ __asm { MOV R8D,dword ptr [RBP + 0xa0] }
    /* +0xb093b6 */ __asm { TEST R8B,0x1 }
    /* +0xb093ba */ __asm { JZ 0x7fffa52793cb }
    /* +0xb093bc */ __asm { MOV BL,0x7c }
    /* +0xb093be */ __asm { JP 0x7fffa527940d }
    /* +0xb093c0 */ __asm { TEST uint8_t ptr [RAX + RDX*0x1 + 0x27],0x19 }
    /* +0xb093c5 */ __asm { POPFQ }
    /* +0xb093c6 */ __asm { RET 0xef76 }
    /* +0xb093cb */ __asm { MOV EBX,dword ptr [RBP + 0x1a8] }
    /* +0xb093d1 */ __asm { ADD RCX,RDX }
    /* +0xb093d4 */ __asm { MOV R13,-0x30ebf64fafbc6efb }
    /* +0xb093de */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xb093e8 */ __asm { TEST dword ptr [RBP + 0x1a0],0x1000 }
    /* +0xb093f2 */ __asm { MOV qword ptr [RBP + -0x8],RCX }
    /* +0xb093f6 */ __asm { MOV R12,qword ptr [RBP + 0x40] }
    /* +0xb093fa */ __asm { MOV R15,RSI }
    /* +0xb093fd */ __asm { JZ 0x7fffa5279b92 }
    /* +0xb09403 */ __asm { MOV dword ptr [RBP + 0xa0],0xa5e9af9f }
    /* +0xb0940d */ __asm { MOV R8D,dword ptr [RBP + 0xa0] }
    /* +0xb09414 */ __asm { TEST R8B,0x1 }
    /* +0xb09418 */ __asm { JZ 0x7fffa527dd3d }
    /* +0xb0941e */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xb09425 */ __asm { NOP }
    /* +0xb09427 */ __asm { MOV R10,0x0 }
    /* +0xb0942e */ __asm { TEST BL,0xf0 }
    /* +0xb09431 */ __asm { MOV RSI,R9 }
    /* +0xb09434 */ __asm { JZ 0x7fffa5279bf7 }
    /* +0xb0943a */ __asm { MOV dword ptr [RBP + 0xa0],0x583ec70 }
    /* +0xb09444 */ __asm { MOV R8D,dword ptr [RBP + 0xa0] }
    /* +0xb0944b */ __asm { MOV dword ptr [RBP + 0xa0],0x640ec6fa }
    /* +0xb09455 */ __asm { MOV R8D,dword ptr [RBP + 0xa0] }
    /* +0xb0945c */ __asm { MOVQ XMM8,RCX }
    /* +0xb09461 */ __asm { CMP R12,-0x1 }
    /* +0xb09465 */ __asm { MOV qword ptr [RBP + 0x48],R15 }
    /* +0xb09469 */ __asm { JZ 0x7fffa5279c56 }
    /* +0xb0946f */ __asm { MOV R8D,0x581427bb }
    /* +0xb09475 */ __asm { MOVD XMM5,R8D }
    /* +0xb0947a */ __asm { MOVD XMM11,ECX }
    /* +0xb0947f */ __asm { PXOR XMM5,XMM11 }
    /* +0xb09484 */ __asm { MOV R8D,0xd2489ff }
    /* +0xb0948a */ __asm { ADD R8D,ECX }
    /* +0xb0948d */ __asm { XOR R8D,0x2d1df27c }
    /* +0xb09494 */ __asm { MOVD R9D,XMM5 }
    /* +0xb09499 */ __asm { ADD R9D,0x3a7c1a55 }
    /* +0xb094a0 */ __asm { CMP R9,R8 }
    /* +0xb094a3 */ __asm { JLE 0x7fffa5279ce8 }
    /* +0xb094a9 */ __asm { MOV R15,RCX }
    /* +0xb094ac */ __asm { MOV R8D,0x41e7452c }
    /* +0xb094b2 */ __asm { MOVD XMM5,R8D }
    /* +0xb094b7 */ __asm { PSUBD XMM5,XMM11 }
    /* +0xb094bc */ __asm { MOVD EDI,XMM5 }
    /* +0xb094c0 */ __asm { ROL EDI,0x19 }
    /* +0xb094c3 */ __asm { MOV dword ptr [RBP + 0xa0],0x4b10b002 }
    /* +0xb094cd */ __asm { MOV R8D,dword ptr [RBP + 0xa0] }
    /* +0xb094d4 */ __asm { RDTSC }
    /* +0xb094d6 */ __asm { SHL RDX,0x20 }
    /* +0xb094da */ __asm { OR RDX,RAX }
    /* +0xb094dd */ __asm { IMUL RDX,R13 }
    /* +0xb094e1 */ __asm { ADD RDX,RSI }
    /* +0xb094e4 */ __asm { MOV RCX,RDX }
    /* +0xb094e7 */ __asm { SHR RCX,0x3b }
    /* +0xb094eb */ __asm { MOVQ XMM5,RDX }
    /* +0xb094f0 */ __asm { PSRLQ XMM5,0x1b }
    /* +0xb094f5 */ __asm { SHR RDX,0x2d }
    /* +0xb094f9 */ __asm { MOVD XMM0,EDX }
    /* +0xb094fd */ __asm { PXOR XMM0,XMM5 }
    /* +0xb09501 */ __asm { MOVQ RAX,XMM0 }
    /* +0xb09506 */ __asm { ROR EAX,CL }
    /* +0xb09508 */ __asm { AND EAX,0x3 }
    /* +0xb0950b */ __asm { CMP EAX,0x2 }
    /* +0xb0950e */ __asm { JL 0x7fffa5279d93 }
    /* +0xb09514 */ __asm { JNZ 0x7fffa5279ddf }
    /* +0xb0951a */ __asm { MOV R8,0x6d58b5de67a21ab7 }
    /* +0xb09524 */ __asm { MOV DX,0x3d79 }
    /* +0xb09528 */ __asm { MOVD XMM5,EDX }
    /* +0xb0952c */ __asm { RDTSC }
    /* +0xb0952e */ __asm { SHL RDX,0x20 }
    /* +0xb09532 */ __asm { OR RDX,RAX }
    /* +0xb09535 */ __asm { MOVD XMM0,R15D }
    /* +0xb0953a */ __asm { PXOR XMM0,XMM5 }
    /* +0xb0953e */ __asm { MOV R11,0x7facc0f7a00541bd }
    /* +0xb09548 */ __asm { IMUL R11,RDX }
    /* +0xb0954c */ __asm { MOVD EDX,XMM0 }
    /* +0xb09550 */ __asm { NOT EDX }
    /* +0xb09552 */ __asm { SUB EDX,EDI }
    /* +0xb09554 */ __asm { ROL DX,0x6 }
    /* +0xb09558 */ __asm { MOVZX R9D,DX }
    /* +0xb0955c */ __asm { ADD R8,RDI }
    /* +0xb0955f */ __asm { SUB R11,R8 }
    /* +0xb09562 */ __asm { MOV RCX,-0x86d8766a }
    /* +0xb0956c */ __asm { ADD RCX,R11 }
    /* +0xb0956f */ __asm { MOV R8,RCX }
    /* +0xb09572 */ __asm { SHR R8,0x2d }
    /* +0xb09576 */ __asm { MOVD XMM5,R8D }
    /* +0xb0957b */ __asm { MOVQ XMM0,RCX }
    /* +0xb09580 */ __asm { PSRLQ XMM0,0x1b }
    /* +0xb09585 */ __asm { PXOR XMM0,XMM5 }
    /* +0xb09589 */ __asm { SHR RCX,0x3b }
    /* +0xb0958d */ __asm { MOVD R8D,XMM0 }
    /* +0xb09592 */ __asm { ROR R8D,CL }
    /* +0xb09595 */ __asm { MOV R11,qword ptr GS:[R9] }
    /* +0xb09599 */ __asm { MOV EDX,0x9373f572 }
    /* +0xb0959e */ __asm { XOR EDX,EDI }
    /* +0xb095a0 */ __asm { XOR EDX,0x6ef277b8 }
    /* +0xb095a6 */ __asm { MOV R11,qword ptr [R11 + 0x18] }
    /* +0xb095aa */ __asm { MOV R10,0x7f88fddb1960b3d9 }
    /* +0xb095b4 */ __asm { IMUL R10,R11 }
    /* +0xb095b8 */ __asm { ROL R10,0xe }
    /* +0xb095bc */ __asm { IMUL EDX,EDX,0x6033c593 }
    /* +0xb095c2 */ __asm { MOVSXD R11,EDX }
    /* +0xb095c5 */ __asm { ADD R11,R10 }
    /* +0xb095c8 */ __asm { MOV RDX,-0x2455e7a4b1ca4621 }
    /* +0xb095d2 */ __asm { CMP R11,RDX }
    /* +0xb095d5 */ __asm { JZ 0x7fffa527dd08 }
    /* +0xb095db */ __asm { CMP R8D,0x45d1a26 }
    /* +0xb095e2 */ __asm { JA 0x7fffa5279b30 }
    /* +0xb095e8 */ __asm { MOV R8W,0x8b2 }
    /* +0xb095ed */ __asm { ADD R8D,0x29f1 }
    /* +0xb095f4 */ __asm { MOV EDX,R15D }
    /* +0xb095f7 */ __asm { XOR EDX,R8D }
    /* +0xb095fa */ __asm { MOV ECX,EDI }
    /* +0xb095fc */ __asm { ROL DX,CL }
    /* +0xb095ff */ __asm { MOVZX R8D,DX }
    /* +0xb09603 */ __asm { MOV R8,qword ptr GS:[R8] }
    /* +0xb09607 */ __asm { MOV R11,-0xd364e216df22367 }
    /* +0xb09611 */ __asm { CMP R8,R11 }
    /* +0xb09614 */ __asm { NOP }
    /* +0xb09615 */ __asm { NOP }
    /* +0xb09616 */ __asm { NOP }
    /* +0xb09617 */ __asm { NOP }
    /* +0xb09618 */ __asm { LEA R10,[0x7fffa47c11ed] }
    /* +0xb0961f */ __asm { MOV R8,-0x25b16f3e99985495 }
    /* +0xb09629 */ __asm { CMP R10,R8 }
    /* +0xb0962c */ __asm { JZ 0x7fffa527df27 }
    /* +0xb09632 */ __asm { MOVZX EAX,uint8_t ptr [R10 + -0x4aa4] }
    /* +0xb0963a */ __asm { MOVZX EDX,uint8_t ptr [R10 + RAX*0x4 + -0x4a9e] }
    /* +0xb09643 */ __asm { NOT DL }
    /* +0xb09645 */ __asm { ROL DL,0x5 }
    /* +0xb09648 */ __asm { MOV uint8_t ptr [RBP + 0xa0],DL }
    /* +0xb0964e */ __asm { MOVZX EDX,uint8_t ptr [R10 + RAX*0x4 + -0x4a9d] }
    /* +0xb09657 */ __asm { NOT DL }
    /* +0xb09659 */ __asm { ROL DL,0x5 }
    /* +0xb0965c */ __asm { MOV uint8_t ptr [RBP + 0xa1],DL }
    /* +0xb09662 */ __asm { MOVZX EDX,uint8_t ptr [R10 + RAX*0x4 + -0x4a9c] }
    /* +0xb0966b */ __asm { NOT DL }
    /* +0xb0966d */ __asm { ROL DL,0x5 }
    /* +0xb09670 */ __asm { MOV uint8_t ptr [RBP + 0xa2],DL }
    /* +0xb09676 */ __asm { MOVZX R10D,uint8_t ptr [R10 + RAX*0x4 + -0x4a9b] }
    /* +0xb0967f */ __asm { NOT R10B }
    /* +0xb09682 */ __asm { ROL R10B,0x5 }
    /* +0xb09686 */ __asm { MOV uint8_t ptr [RBP + 0xa3],R10B }
    /* +0xb0968d */ __asm { MOV R8D,0x9102c3cc }
    /* +0xb09693 */ __asm { XOR R8D,dword ptr [RBP + 0xa0] }
    /* +0xb0969a */ __asm { MOVD XMM5,R8D }
    /* +0xb0969f */ __asm { MOVD XMM0,dword ptr [0x7fffa5873000] }
    /* +0xb096a7 */ __asm { PAND XMM0,XMM5 }
    /* +0xb096ab */ __asm { MOVDQA XMM2,xmmword ptr [0x7fffa56b2660] }
    /* +0xb096b3 */ __asm { PSLLD XMM2,XMM0 }
    /* +0xb096b7 */ __asm { PAND XMM2,XMM5 }
    /* +0xb096bb */ __asm { MOVD R8D,XMM2 }
    /* +0xb096c0 */ __asm { TEST R8D,R8D }
    /* +0xb096c3 */ __asm { JZ 0x7fffa5279b30 }
    /* +0xb096c9 */ __asm { PXOR XMM5,XMM5 }
    /* +0xb096cd */ __asm { MOVDQA xmmword ptr [RBP + 0xa0],XMM5 }
    /* +0xb096d5 */ __asm { PUSHFQ }
    /* +0xb096d6 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb096de */ __asm { POPFQ }
    /* +0xb096df */ __asm { MOV dword ptr [RBP + 0x88],0xc4568976 }
    /* +0xb096e9 */ __asm { MOV R8D,dword ptr [RBP + 0x88] }
    /* +0xb096f0 */ __asm { MOV EDX,0xe331e8e }
    /* +0xb096f5 */ __asm { IMUL EDX,EDX,0x4589d91f }
    /* +0xb096fb */ __asm { MOV ECX,R15D }
    /* +0xb096fe */ __asm { ROR EDX,CL }
    /* +0xb09700 */ __asm { SUB EDX,EDI }
    /* +0xb09702 */ __asm { CMP R8D,EDX }
    /* +0xb09705 */ __asm { JA 0x7fffa527970f }
    /* +0xb09707 */ __asm { SBB uint8_t ptr [RDI],BH }
    /* +0xb09709 */ __asm { JLE 0x7fffa527977f }
    /* +0xb0970b */ __asm { JL 0x7fffa5279750 }
    /* +0xb0970d */ __asm { ADC AL,0xb2 }
    /* +0xb0970f */ __asm { MOV dword ptr [RBP + 0xa0],0x0 }
    /* +0xb09719 */ __asm { MOV dword ptr [RBP + 0x88],0x21002102 }
    /* +0xb09723 */ __asm { MOV EDX,dword ptr [RBP + 0x88] }
    /* +0xb09729 */ __asm { MOV R10D,0xeab01eae }
    /* +0xb0972f */ __asm { MOV R11D,0x189a2b9a }
    /* +0xb09735 */ __asm { XOR R8D,R8D }
    /* +0xb09738 */ __asm { CMP EDX,0x4416c5fb }
    /* +0xb0973e */ __asm { SETC R8B }
    /* +0xb09742 */ __asm { MOV R9D,0x13e14405 }
    /* +0xb09748 */ __asm { SUB R9D,EDI }
    /* +0xb0974b */ __asm { MOV ECX,R15D }
    /* +0xb0974e */ __asm { ROR R9D,CL }
    /* +0xb09751 */ __asm { MOVD XMM5,R11D }
    /* +0xb09756 */ __asm { PADDD XMM5,xmmword ptr [0x7fffa5872fa0] }
    /* +0xb0975e */ __asm { ADD R9D,0x5a0606aa }
    /* +0xb09765 */ __asm { MOVD XMM0,EDI }
    /* +0xb09769 */ __asm { POR XMM0,xmmword ptr [0x7fffa56b2660] }
    /* +0xb09771 */ __asm { PMULUDQ XMM0,XMM5 }
    /* +0xb09775 */ __asm { ADD R10D,0x763fab05 }
    /* +0xb0977c */ __asm { XOR R10D,0x84321cd }
    /* +0xb09783 */ __asm { SUB R10D,R15D }
    /* +0xb09786 */ __asm { XOR R10D,EDI }
    /* +0xb09789 */ __asm { XOR ECX,ECX }
    /* +0xb0978b */ __asm { CMP EDX,R10D }
    /* +0xb0978e */ __asm { SETL CL }
    /* +0xb09791 */ __asm { MOVD R11D,XMM0 }
    /* +0xb09796 */ __asm { NOT R11D }
    /* +0xb09799 */ __asm { MOV RDX,R15 }
    /* +0xb0979c */ __asm { ADD R11D,R15D }
    /* +0xb0979f */ __asm { CMP R11,R9 }
    /* +0xb097a2 */ __asm { CMOVBE R8D,ECX }
    /* +0xb097a6 */ __asm { TEST R8B,R8B }
    /* +0xb097a9 */ __asm { JNZ 0x7fffa52797b0 }
    /* +0xb097ab */ __asm { SBB EAX,0x47af6500 }
    /* +0xb097b0 */ __asm { MOV dword ptr [RBP + 0x88],0x181c73b1 }
    /* +0xb097ba */ __asm { MOV EAX,dword ptr [RBP + 0x88] }
    /* +0xb097c0 */ __asm { MOV ESI,0x342b589f }
    /* +0xb097c5 */ __asm { MOV R8D,EAX }
    /* +0xb097c8 */ __asm { NOT R8D }
    /* +0xb097cb */ __asm { MOV dword ptr [RBP + 0xd0],R8D }
    /* +0xb097d2 */ __asm { MOV R12D,EAX }
    /* +0xb097d5 */ __asm { AND R12D,0x1 }
    /* +0xb097d9 */ __asm { MOV R13D,R8D }
    /* +0xb097dc */ __asm { AND R13D,0x1 }
    /* +0xb097e0 */ __asm { XOR ESI,EDI }
    /* +0xb097e2 */ __asm { SUB ESI,EDX }
    /* +0xb097e4 */ __asm { ROL ESI,0x14 }
    /* +0xb097e7 */ __asm { MOV ECX,R8D }
    /* +0xb097ea */ __asm { OR ECX,0x1 }
    /* +0xb097ed */ __asm { MOV dword ptr [RBP + 0x30],ECX }
    /* +0xb097f0 */ __asm { MOV R10D,EAX }
    /* +0xb097f3 */ __asm { AND R10D,0xfffffffe }
    /* +0xb097f7 */ __asm { MOVD XMM5,EDI }
    /* +0xb097fb */ __asm { MOV R8D,0x489f2d6b }
    /* +0xb09801 */ __asm { IMUL R8D,R8D,-0x6d43795b }
    /* +0xb09808 */ __asm { MOV dword ptr [RBP],R8D }
    /* +0xb0980c */ __asm { MOV R14D,EAX }
    /* +0xb0980f */ __asm { OR R14D,0xfffffffe }
    /* +0xb09813 */ __asm { MOV ECX,0x3ab8ecef }
    /* +0xb09818 */ __asm { ADD ECX,0xc6a18c53 }
    /* +0xb0981e */ __asm { MOV R8D,EDI }
    /* +0xb09821 */ __asm { NOT R8D }
    /* +0xb09824 */ __asm { MOV R11D,R8D }
    /* +0xb09827 */ __asm { MOV R8D,EDX }
    /* +0xb0982a */ __asm { OR R8D,0x1 }
    /* +0xb0982e */ __asm { IMUL R8D,ECX }
    /* +0xb09832 */ __asm { XOR R8D,EDI }
    /* +0xb09835 */ __asm { ADD R8D,0xbcfa2274 }
    /* +0xb0983c */ __asm { MOV R9,qword ptr [RBP + -0x10] }
    /* +0xb09840 */ __asm { XOR R12D,R9D }
    /* +0xb09843 */ __asm { MOVD XMM0,R12D }
    /* +0xb09848 */ __asm { MOV ECX,R9D }
    /* +0xb0984b */ __asm { AND ECX,R10D }
    /* +0xb0984e */ __asm { MOV R12D,R11D }
    /* +0xb09851 */ __asm { AND ECX,R11D }
    /* +0xb09854 */ __asm { MOVDQA XMM2,XMM5 }
    /* +0xb09858 */ __asm { PANDN XMM2,XMM0 }
    /* +0xb0985c */ __asm { MOVD R11D,XMM2 }
    /* +0xb09861 */ __asm { SUB ECX,R11D }
    /* +0xb09864 */ __asm { MOV R11D,R10D }
    /* +0xb09867 */ __asm { XOR R10D,R9D }
    /* +0xb0986a */ __asm { XOR R10D,EDI }
    /* +0xb0986d */ __asm { IMUL R10D,R8D }
    /* +0xb09871 */ __asm { MOV R8D,EAX }
    /* +0xb09874 */ __asm { XOR R8D,0x1 }
    /* +0xb09878 */ __asm { XOR R14D,R9D }
    /* +0xb0987b */ __asm { AND R14D,EDI }
    /* +0xb0987e */ __asm { ADD R14D,ECX }
    /* +0xb09881 */ __asm { MOV ECX,R13D }
    /* +0xb09884 */ __asm { AND ECX,R9D }
    /* +0xb09887 */ __asm { XOR ECX,EDI }
    /* +0xb09889 */ __asm { MOV EDX,R8D }
    /* +0xb0988c */ __asm { XOR EDX,R9D }
    /* +0xb0988f */ __asm { AND EDX,R12D }
    /* +0xb09892 */ __asm { MOV EBX,R12D }
    /* +0xb09895 */ __asm { MOV dword ptr [RBP + 0x78],R12D }
    /* +0xb09899 */ __asm { MOV R12D,R9D }
    /* +0xb0989c */ __asm { NOT R12D }
    /* +0xb0989f */ __asm { AND R11D,R12D }
    /* +0xb098a2 */ __asm { MOVD XMM0,R11D }
    /* +0xb098a7 */ __asm { AND R11D,EDI }
    /* +0xb098aa */ __asm { IMUL R11D,R11D,0x363628ef }
    /* +0xb098b1 */ __asm { MOV dword ptr [RBP + 0x98],R11D }
    /* +0xb098b8 */ __asm { MOV R11D,R13D }
    /* +0xb098bb */ __asm { AND R11D,R12D }
    /* +0xb098be */ __asm { MOV R13D,R11D }
    /* +0xb098c1 */ __asm { AND R13D,EBX }
    /* +0xb098c4 */ __asm { AND R11D,EDI }
    /* +0xb098c7 */ __asm { MOV dword ptr [RBP + 0x50],R11D }
    /* +0xb098cb */ __asm { MOV EBX,R12D }
    /* +0xb098ce */ __asm { AND EBX,EDI }
    /* +0xb098d0 */ __asm { MOV R15D,R8D }
    /* +0xb098d3 */ __asm { OR R15D,R9D }
    /* +0xb098d6 */ __asm { AND R15D,EDI }
    /* +0xb098d9 */ __asm { IMUL R11D,R14D,0x7f9c502d }
    /* +0xb098e0 */ __asm { MOV dword ptr [RBP + -0x30],R11D }
    /* +0xb098e4 */ __asm { MOV R14D,R9D }
    /* +0xb098e7 */ __asm { AND R14D,dword ptr [RBP + 0x30] }
    /* +0xb098eb */ __asm { IMUL R11D,R15D,0x72a2f073 }
    /* +0xb098f2 */ __asm { MOV dword ptr [RBP + 0x58],R11D }
    /* +0xb098f6 */ __asm { IMUL ECX,ECX,-0x72a2f072 }
    /* +0xb098fc */ __asm { XOR R14D,EDI }
    /* +0xb098ff */ __asm { IMUL R11D,R14D,0x3c6cc784 }
    /* +0xb09906 */ __asm { MOV dword ptr [RBP + 0x60],R11D }
    /* +0xb0990a */ __asm { MOVDQA XMM2,XMM5 }
    /* +0xb0990e */ __asm { PANDN XMM2,XMM0 }
    /* +0xb09912 */ __asm { MOVD R14D,XMM2 }
    /* +0xb09917 */ __asm { IMUL R15D,R14D,-0x432f88ab }
    /* +0xb0991e */ __asm { MOV R14D,R15D }
    /* +0xb09921 */ __asm { NEG R14D }
    /* +0xb09924 */ __asm { MOV R11D,0xca1b526c }
    /* +0xb0992a */ __asm { CMP RSI,R11 }
    /* +0xb0992d */ __asm { LEA R11D,[RDI + -0x24d637bd] }
    /* +0xb09934 */ __asm { MOVD XMM2,R11D }
    /* +0xb09939 */ __asm { MOV R11D,dword ptr [RBP] }
    /* +0xb0993d */ __asm { NOT R11D }
    /* +0xb09940 */ __asm { MOVD XMM4,R11D }
    /* +0xb09945 */ __asm { MOVD XMM1,dword ptr [RBP + 0x98] }
    /* +0xb0994d */ __asm { MOVD XMM0,dword ptr [RBP + -0x30] }
    /* +0xb09952 */ __asm { MOVD XMM9,ECX }
    /* +0xb09957 */ __asm { MOVD XMM3,R13D }
    /* +0xb0995c */ __asm { CMOVZ R14D,R15D }
    /* +0xb09960 */ __asm { MOV RSI,qword ptr [RBP + -0x8] }
    /* +0xb09964 */ __asm { OR EAX,0x1 }
    /* +0xb09967 */ __asm { XOR R9D,EAX }
    /* +0xb0996a */ __asm { MOV ECX,EDI }
    /* +0xb0996c */ __asm { AND ECX,R9D }
    /* +0xb0996f */ __asm { MOV R15D,dword ptr [RBP + 0x78] }
    /* +0xb09973 */ __asm { AND R9D,R15D }
    /* +0xb09976 */ __asm { IMUL R13D,R9D,0x7f9c502c }
    /* +0xb0997d */ __asm { IMUL R11D,EDX,0xdc0bf62 }
    /* +0xb09984 */ __asm { ADD R11D,R13D }
    /* +0xb09987 */ __asm { OR R8D,R12D }
    /* +0xb0998a */ __asm { MOVD XMM7,R8D }
    /* +0xb0998f */ __asm { PAND XMM7,XMM5 }
    /* +0xb09993 */ __asm { MOVD R8D,XMM7 }
    /* +0xb09998 */ __asm { IMUL R8D,R8D,0xdc0bf60 }
    /* +0xb0999f */ __asm { ADD R8D,dword ptr [RBP + 0x58] }
    /* +0xb099a3 */ __asm { MOVD XMM5,R8D }
    /* +0xb099a8 */ __asm { PADDD XMM5,XMM9 }
    /* +0xb099ad */ __asm { ADD R11D,R10D }
    /* +0xb099b0 */ __asm { MOVD R8D,XMM5 }
    /* +0xb099b5 */ __asm { ADD R8D,dword ptr [RBP + 0x60] }
    /* +0xb099b9 */ __asm { SUB R8D,ECX }
    /* +0xb099bc */ __asm { AND EAX,R12D }
    /* +0xb099bf */ __asm { AND EAX,R15D }
    /* +0xb099c2 */ __asm { MOV EDX,dword ptr [RBP + 0xd0] }
    /* +0xb099c8 */ __asm { AND EDX,EBX }
    /* +0xb099ca */ __asm { AND EDX,0x7ffffffe }
    /* +0xb099d0 */ __asm { SUB EAX,EDX }
    /* +0xb099d2 */ __asm { AND EBX,dword ptr [RBP + 0x30] }
    /* +0xb099d5 */ __asm { MOV R9D,0x8c05cf97 }
    /* +0xb099db */ __asm { MOV R15,RSI }
    /* +0xb099de */ __asm { ADD R9D,ESI }
    /* +0xb099e1 */ __asm { MOV ECX,EDI }
    /* +0xb099e3 */ __asm { ROL R9D,CL }
    /* +0xb099e6 */ __asm { IMUL EDX,EBX,-0xcf95fb8 }
    /* +0xb099ec */ __asm { ADD EDX,R8D }
    /* +0xb099ef */ __asm { ROL R9D,0x18 }
    /* +0xb099f3 */ __asm { MOVD XMM5,EDX }
    /* +0xb099f7 */ __asm { NOT R9D }
    /* +0xb099fa */ __asm { IMUL R9D,dword ptr [RBP + 0x50] }
    /* +0xb099ff */ __asm { PADDD XMM4,XMM2 }
    /* +0xb09a03 */ __asm { PMULUDQ XMM3,XMM4 }
    /* +0xb09a07 */ __asm { ADD R9D,R11D }
    /* +0xb09a0a */ __asm { MOVD R8D,XMM3 }
    /* +0xb09a0f */ __asm { PADDD XMM5,XMM1 }
    /* +0xb09a13 */ __asm { ADD R9D,R8D }
    /* +0xb09a16 */ __asm { MOVD R8D,XMM5 }
    /* +0xb09a1b */ __asm { ADD R9D,R8D }
    /* +0xb09a1e */ __asm { LEA R8D,[R9 + RAX*0x2] }
    /* +0xb09a22 */ __asm { MOVD XMM5,R8D }
    /* +0xb09a27 */ __asm { PADDD XMM5,XMM0 }
    /* +0xb09a2b */ __asm { MOVD R8D,XMM5 }
    /* +0xb09a30 */ __asm { CMP R8D,R14D }
    /* +0xb09a33 */ __asm { NOP }
    /* +0xb09a34 */ __asm { NOP }
    /* +0xb09a35 */ __asm { NOP }
    /* +0xb09a36 */ __asm { NOP }
    /* +0xb09a37 */ __asm { NOP }
    /* +0xb09a38 */ __asm { MOV R8D,0xd9618543 }
    /* +0xb09a3e */ __asm { MOV EDX,0x82112460 }
    /* +0xb09a43 */ __asm { MOV R9D,0x5198551c }
    /* +0xb09a49 */ __asm { SUB R9D,EDX }
    /* +0xb09a4c */ __asm { ROL R9D,0xe }
    /* +0xb09a50 */ __asm { IMUL EDX,R8D,-0x30e5e8cd }
    /* +0xb09a57 */ __asm { MOV RCX,R15 }
    /* +0xb09a5a */ __asm { XOR R9D,ECX }
    /* +0xb09a5d */ __asm { ADD EDX,EDI }
    /* +0xb09a5f */ __asm { ROR EDX,CL }
    /* +0xb09a61 */ __asm { LEA R8,[0x7fffa47b7a40] }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtCreateSection  |  RVA: 0xb4bfb0  |  Size: 3706 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtCreateSection(void) {
    /* +0xb4bfb0 */ __asm { PUSH R15 }
    /* +0xb4bfb2 */ __asm { PUSH R12 }
    /* +0xb4bfb4 */ __asm { PUSH RSI }
    /* +0xb4bfb5 */ __asm { PUSH RDI }
    /* +0xb4bfb6 */ __asm { PUSH RBP }
    /* +0xb4bfb7 */ __asm { PUSH R14 }
    /* +0xb4bfb9 */ __asm { PUSH R13 }
    /* +0xb4bfbb */ __asm { PUSH RBX }
    /* +0xb4bfbc */ __asm { SUB RSP,0x78 }
    /* +0xb4bfc0 */ __asm { MOV qword ptr [RSP + 0x50],R9 }
    /* +0xb4bfc5 */ __asm { MOV qword ptr [RSP + 0x60],R8 }
    /* +0xb4bfca */ __asm { MOV dword ptr [RSP + 0x74],EDX }
    /* +0xb4bfce */ __asm { MOV qword ptr [RSP + 0x58],RCX }
    /* +0xb4bfd3 */ __asm { MOV EBX,dword ptr [RSP + 0xe8] }
    /* +0xb4bfda */ __asm { MOV R11W,0x4ba9 }
    /* +0xb4bfdf */ __asm { MOVZX R8D,R11W }
    /* +0xb4bfe3 */ __asm { XOR R8,0x4b99 }
    /* +0xb4bfea */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0xb4bfee */ __asm { MOV CX,0x50 }
    /* +0xb4bff2 */ __asm { ADD ECX,0x10 }
    /* +0xb4bff5 */ __asm { MOVZX R8D,CX }
    /* +0xb4bff9 */ __asm { MOV RCX,qword ptr [RAX + 0x60] }
    /* +0xb4bffd */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0xb4c001 */ __asm { XOR RCX,qword ptr [RAX + 0x18] }
    /* +0xb4c005 */ __asm { MOV RDX,0x2e0dc4753c622ed }
    /* +0xb4c00f */ __asm { CMP RCX,RDX }
    /* +0xb4c012 */ __asm { NOP }
    /* +0xb4c013 */ __asm { NOP }
    /* +0xb4c014 */ __asm { NOP }
    /* +0xb4c015 */ __asm { NOP }
    /* +0xb4c016 */ __asm { NOP }
    /* +0xb4c017 */ __asm { NOP }
    /* +0xb4c018 */ __asm { NOP }
    /* +0xb4c019 */ __asm { MOV RDI,RSI }
    /* +0xb4c01c */ __asm { MOV DX,0xe96d }
    /* +0xb4c020 */ __asm { MOV CX,0xa86d }
    /* +0xb4c024 */ __asm { IMUL R9D,EDX,-0x446b }
    /* +0xb4c02b */ __asm { MOV EDX,0xbac549d6 }
    /* +0xb4c030 */ __asm { MOV R8D,EBX }
    /* +0xb4c033 */ __asm { XOR R8D,0xe54d3d4e }
    /* +0xb4c03a */ __asm { MOV R11,RDI }
    /* +0xb4c03d */ __asm { NOT R11 }
    /* +0xb4c040 */ __asm { MOV R13,RAX }
    /* +0xb4c043 */ __asm { XOR R13,R8 }
    /* +0xb4c046 */ __asm { MOV R15,RDI }
    /* +0xb4c049 */ __asm { AND R15,R13 }
    /* +0xb4c04c */ __asm { MOV R10D,EBX }
    /* +0xb4c04f */ __asm { MOV R12,-0xe54d3d4f }
    /* +0xb4c059 */ __asm { XOR R12,R10 }
    /* +0xb4c05c */ __asm { MOV R10,R12 }
    /* +0xb4c05f */ __asm { OR R10,RAX }
    /* +0xb4c062 */ __asm { MOV RSI,R12 }
    /* +0xb4c065 */ __asm { XOR RSI,RAX }
    /* +0xb4c068 */ __asm { AND RSI,R11 }
    /* +0xb4c06b */ __asm { XOR R13,R11 }
    /* +0xb4c06e */ __asm { XOR R11,R10 }
    /* +0xb4c071 */ __asm { MOV RBP,-0x97687349 }
    /* +0xb4c07b */ __asm { IMUL RBP,R11 }
    /* +0xb4c07f */ __asm { XOR R10,RDI }
    /* +0xb4c082 */ __asm { MOV R14,-0xb271ef9f }
    /* +0xb4c08c */ __asm { IMUL R14,R10 }
    /* +0xb4c090 */ __asm { MOV R10,qword ptr [RSP + 0xf0] }
    /* +0xb4c098 */ __asm { ADD EDX,0x92d0a966 }
    /* +0xb4c09e */ __asm { NOT R9D }
    /* +0xb4c0a1 */ __asm { MOVSX R9,R9W }
    /* +0xb4c0a5 */ __asm { ADD R14,RBP }
    /* +0xb4c0a8 */ __asm { LEA R11,[0x7fffa53f81f2] }
    /* +0xb4c0af */ __asm { ADD R11,R9 }
    /* +0xb4c0b2 */ __asm { OR RSI,R15 }
    /* +0xb4c0b5 */ __asm { MOV R9D,R8D }
    /* +0xb4c0b8 */ __asm { ROL R9D,0x12 }
    /* +0xb4c0bc */ __asm { IMUL R10,R10,0x1c54cdef }
    /* +0xb4c0c3 */ __asm { ROL R10,0x19 }
    /* +0xb4c0c7 */ __asm { XOR ECX,0xffffbf56 }
    /* +0xb4c0cd */ __asm { ADD ECX,0xffffe8c4 }
    /* +0xb4c0d3 */ __asm { NEG R8 }
    /* +0xb4c0d6 */ __asm { SUB R13,RSI }
    /* +0xb4c0d9 */ __asm { IMUL RSI,R13,0x487e241d }
    /* +0xb4c0e0 */ __asm { MOV EBP,0x76c9fde1 }
    /* +0xb4c0e5 */ __asm { ADD EBP,0xde2a8ec0 }
    /* +0xb4c0eb */ __asm { CMP RBP,RDX }
    /* +0xb4c0ee */ __asm { MOVD XMM4,R9D }
    /* +0xb4c0f3 */ __asm { MOVQ XMM3,R10 }
    /* +0xb4c0f8 */ __asm { MOVQ XMM5,R14 }
    /* +0xb4c0fd */ __asm { MOVQ XMM2,RSI }
    /* +0xb4c102 */ __asm { CMOVC R12,R8 }
    /* +0xb4c106 */ __asm { OR R12,RAX }
    /* +0xb4c109 */ __asm { PADDQ XMM2,XMM5 }
    /* +0xb4c10d */ __asm { XOR R12,RDI }
    /* +0xb4c110 */ __asm { MOVQ RDX,XMM2 }
    /* +0xb4c115 */ __asm { IMUL RAX,R12,0x1b097c56 }
    /* +0xb4c11c */ __asm { ADD RAX,RDX }
    /* +0xb4c11f */ __asm { PSHUFD XMM5,XMM3,0x44 }
    /* +0xb4c124 */ __asm { MOVSX R14D,CX }
    /* +0xb4c128 */ __asm { PSHUFD XMM4,XMM4,0x0 }
    /* +0xb4c12d */ __asm { PCMPEQD XMM2,XMM2 }
    /* +0xb4c131 */ __asm { PXOR XMM2,XMM4 }
    /* +0xb4c135 */ __asm { PADDD XMM2,xmmword ptr [0x7fffa56bc4e0] }
    /* +0xb4c13d */ __asm { CALL R11 }
    /* +0xb4c140 */ __asm { IMUL ECX,R10D,-0x33333333 }
    /* +0xb4c147 */ __asm { MOV EDX,ECX }
    /* +0xb4c149 */ __asm { ROL EDX,0x1b }
    /* +0xb4c14c */ __asm { MOV R9D,ECX }
    /* +0xb4c14f */ __asm { ROL R9D,0x10 }
    /* +0xb4c153 */ __asm { MOVD XMM4,EDX }
    /* +0xb4c157 */ __asm { MOVD XMM3,R9D }
    /* +0xb4c15c */ __asm { PXOR XMM3,XMM4 }
    /* +0xb4c160 */ __asm { MOVD EAX,XMM3 }
    /* +0xb4c164 */ __asm { XOR EAX,ECX }
    /* +0xb4c166 */ __asm { ROL EAX,0xa }
    /* +0xb4c169 */ __asm { CMP EAX,R14D }
    /* +0xb4c16c */ __asm { JLE 0x7fffa52bcd8d }
    /* +0xb4c172 */ __asm { MOV CX,0x279f }
    /* +0xb4c176 */ __asm { ADD ECX,0xffffd891 }
    /* +0xb4c17c */ __asm { MOVZX R8D,CX }
    /* +0xb4c180 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0xb4c184 */ __asm { MOV RAX,qword ptr [RAX + 0x568] }
    /* +0xb4c18b */ __asm { MOV RCX,-0x745906c083145859 }
    /* +0xb4c195 */ __asm { SUB RAX,RCX }
    /* +0xb4c198 */ __asm { MOV RCX,0x7a0c8e0e990c89e2 }
    /* +0xb4c1a2 */ __asm { XOR RCX,RAX }
    /* +0xb4c1a5 */ __asm { CMP RCX,0x30f53903 }
    /* +0xb4c1ac */ __asm { NOP }
    /* +0xb4c1ad */ __asm { NOP }
    /* +0xb4c1ae */ __asm { NOP }
    /* +0xb4c1af */ __asm { NOP }
    /* +0xb4c1b0 */ __asm { NOP }
    /* +0xb4c1b1 */ __asm { NOP }
    /* +0xb4c1b2 */ __asm { NOP }
    /* +0xb4c1b3 */ __asm { NOP }
    /* +0xb4c1b4 */ __asm { NOP }
    /* +0xb4c1b5 */ __asm { NOP }
    /* +0xb4c1b6 */ __asm { NOP }
    /* +0xb4c1b7 */ __asm { RDTSC }
    /* +0xb4c1b9 */ __asm { SHL RDX,0x20 }
    /* +0xb4c1bd */ __asm { OR RDX,RAX }
    /* +0xb4c1c0 */ __asm { MOV R8,-0x30ebf64fafbc6efb }
    /* +0xb4c1ca */ __asm { IMUL RDX,R8 }
    /* +0xb4c1ce */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xb4c1d8 */ __asm { ADD R9,RDX }
    /* +0xb4c1db */ __asm { MOV RAX,R9 }
    /* +0xb4c1de */ __asm { SHR RAX,0x1b }
    /* +0xb4c1e2 */ __asm { MOV RCX,R9 }
    /* +0xb4c1e5 */ __asm { SHR RCX,0x3b }
    /* +0xb4c1e9 */ __asm { SHR R9,0x2d }
    /* +0xb4c1ed */ __asm { XOR EAX,R9D }
    /* +0xb4c1f0 */ __asm { ROR EAX,CL }
    /* +0xb4c1f2 */ __asm { MOV R13D,dword ptr [RSP + 0xe0] }
    /* +0xb4c1fa */ __asm { AND EAX,0x3 }
    /* +0xb4c1fd */ __asm { CMP EAX,0x2 }
    /* +0xb4c200 */ __asm { JNC 0x7fffa52bc428 }
    /* +0xb4c206 */ __asm { MOV CX,0x4347 }
    /* +0xb4c20a */ __asm { IMUL ECX,ECX,-0x6a09 }
    /* +0xb4c210 */ __asm { ADD ECX,0xffffc380 }
    /* +0xb4c216 */ __asm { MOVZX ECX,CX }
    /* +0xb4c219 */ __asm { CMP EAX,ECX }
    /* +0xb4c21b */ __asm { JNZ 0x7fffa52bc563 }
    /* +0xb4c221 */ __asm { MOV EAX,0x9a76030e }
    /* +0xb4c226 */ __asm { MOV RCX,RAX }
    /* +0xb4c229 */ __asm { XOR RCX,-0x7c0b9563 }
    /* +0xb4c230 */ __asm { MOV R8D,0x51e8a76b }
    /* +0xb4c236 */ __asm { ADD R8D,0x7ffe02f0 }
    /* +0xb4c23d */ __asm { MOV RDX,-0x72f5f81a34862e8f }
    /* +0xb4c247 */ __asm { MOV R11D,0x99ed9f85 }
    /* +0xb4c24d */ __asm { ROL RCX,0x33 }
    /* +0xb4c251 */ __asm { IMUL R11,RDX }
    /* +0xb4c255 */ __asm { XOR RCX,R8 }
    /* +0xb4c258 */ __asm { CMP R11,RCX }
    /* +0xb4c25b */ __asm { JNZ 0x7fffa52bc267 }
    /* +0xb4c25d */ __asm { JNZ 0x7fffa52bc216 }
    /* +0xb4c25f */ __asm { IMUL ESP,dword ptr [RSI],0x5538dcaf }
    /* +0xb4c265 */ __asm { INT3 }
    /* +0xb4c267 */ __asm { MOVZX R9D,uint8_t ptr [RAX + -0x1a7800ce] }
    /* +0xb4c26f */ __asm { RDTSC }
    /* +0xb4c271 */ __asm { SHL RDX,0x20 }
    /* +0xb4c275 */ __asm { OR RDX,RAX }
    /* +0xb4c278 */ __asm { TEST R9B,0x1 }
    /* +0xb4c27c */ __asm { JZ 0x7fffa52bc820 }
    /* +0xb4c282 */ __asm { MOV RAX,0x7facc0f7a00541bd }
    /* +0xb4c28c */ __asm { IMUL RDX,RAX }
    /* +0xb4c290 */ __asm { MOV RAX,-0x7abac2f83629c316 }
    /* +0xb4c29a */ __asm { ADD RAX,RDX }
    /* +0xb4c29d */ __asm { MOV R8,RAX }
    /* +0xb4c2a0 */ __asm { SHR R8,0x2d }
    /* +0xb4c2a4 */ __asm { MOV RCX,RAX }
    /* +0xb4c2a7 */ __asm { SHR RCX,0x3b }
    /* +0xb4c2ab */ __asm { SHR RAX,0x1b }
    /* +0xb4c2af */ __asm { XOR R8D,EAX }
    /* +0xb4c2b2 */ __asm { ROR R8D,CL }
    /* +0xb4c2b5 */ __asm { MOV dword ptr [RSP + 0x40],0x5d28eed4 }
    /* +0xb4c2bd */ __asm { MOV ECX,dword ptr [RSP + 0x40] }
    /* +0xb4c2c1 */ __asm { MOV DX,0xeffa }
    /* +0xb4c2c5 */ __asm { ADD EDX,0x1005 }
    /* +0xb4c2cb */ __asm { MOVSX EDX,DX }
    /* +0xb4c2ce */ __asm { CMP ECX,EDX }
    /* +0xb4c2d0 */ __asm { NOP }
    /* +0xb4c2d1 */ __asm { NOP }
    /* +0xb4c2d2 */ __asm { NOP }
    /* +0xb4c2d3 */ __asm { NOP }
    /* +0xb4c2d4 */ __asm { NOP }
    /* +0xb4c2d5 */ __asm { PUSHFQ }
    /* +0xb4c2d6 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb4c2de */ __asm { POPFQ }
    /* +0xb4c2df */ __asm { CMP R8D,0x4658b6 }
    /* +0xb4c2e6 */ __asm { JA 0x7fffa52bc3ff }
    /* +0xb4c2ec */ __asm { MOV R11W,0xb352 }
    /* +0xb4c2f1 */ __asm { MOVZX R8D,R11W }
    /* +0xb4c2f5 */ __asm { XOR R8,0xb332 }
    /* +0xb4c2fc */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0xb4c300 */ __asm { MOV RCX,0x27650f4459a906d5 }
    /* +0xb4c30a */ __asm { CMP qword ptr [RAX + 0x18],RCX }
    /* +0xb4c30e */ __asm { JZ 0x7fffa52bcda6 }
    /* +0xb4c314 */ __asm { MOV EAX,0xea18e2a9 }
    /* +0xb4c319 */ __asm { MOV RCX,-0x3f90be7bf0432d9f }
    /* +0xb4c323 */ __asm { CMP RAX,RCX }
    /* +0xb4c326 */ __asm { NOP }
    /* +0xb4c327 */ __asm { NOP }
    /* +0xb4c328 */ __asm { NOP }
    /* +0xb4c329 */ __asm { NOP }
    /* +0xb4c32a */ __asm { NOP }
    /* +0xb4c32b */ __asm { CMP dword ptr [RAX + -0x6a1adee9],0xd }
    /* +0xb4c332 */ __asm { JC 0x7fffa52bc3ff }
    /* +0xb4c338 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xb4c33f */ __asm { MOV RAX,0x0 }
    /* +0xb4c346 */ __asm { PXOR XMM4,XMM4 }
    /* +0xb4c34a */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM4 }
    /* +0xb4c350 */ __asm { MOV dword ptr [RSP + 0x68],0x5a139558 }
    /* +0xb4c358 */ __asm { MOV ECX,dword ptr [RSP + 0x68] }
    /* +0xb4c35c */ __asm { CMP ECX,0x6c7d9cf }
    /* +0xb4c362 */ __asm { NOP }
    /* +0xb4c363 */ __asm { NOP }
    /* +0xb4c364 */ __asm { NOP }
    /* +0xb4c365 */ __asm { NOP }
    /* +0xb4c366 */ __asm { NOP }
    /* +0xb4c367 */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xb4c36f */ __asm { MOV dword ptr [RSP + 0x68],0x5b36fca0 }
    /* +0xb4c377 */ __asm { MOV ECX,dword ptr [RSP + 0x68] }
    /* +0xb4c37b */ __asm { MOV dword ptr [RSP + 0x68],0xfe2c1802 }
    /* +0xb4c383 */ __asm { MOV ECX,dword ptr [RSP + 0x68] }
    /* +0xb4c387 */ __asm { LEA RAX,[0x7fffa47b9bca] }
    /* +0xb4c38e */ __asm { MOV RCX,-0x204476effc024d94 }
    /* +0xb4c398 */ __asm { IMUL RCX,RCX,0x82849a3 }
    /* +0xb4c39f */ __asm { CMP RAX,RCX }
    /* +0xb4c3a2 */ __asm { JZ 0x7fffa52bce3b }
    /* +0xb4c3a8 */ __asm { MOV RCX,0x0 }
    /* +0xb4c3af */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb4c3b6 */ __asm { NOP }
    /* +0xb4c3b7 */ __asm { MOV CX,0x5bac }
    /* +0xb4c3bb */ __asm { MOV DX,0xc53d }
    /* +0xb4c3bf */ __asm { IMUL R8D,EDX,-0x3a15 }
    /* +0xb4c3c6 */ __asm { MOVSX R10,R8W }
    /* +0xb4c3ca */ __asm { MOV DX,0xfc31 }
    /* +0xb4c3ce */ __asm { ADD ECX,0xffffa47c }
    /* +0xb4c3d4 */ __asm { MOV qword ptr [RSP + 0x68],R11 }
    /* +0xb4c3d9 */ __asm { ADD EDX,0x3df }
    /* +0xb4c3df */ __asm { MOVZX R9D,DX }
    /* +0xb4c3e3 */ __asm { MOVZX EDX,CX }
    /* +0xb4c3e6 */ __asm { MOV R11D,0x957ac8d }
    /* +0xb4c3ec */ __asm { XOR R11,0x9578407 }
    /* +0xb4c3f3 */ __asm { MOV EAX,dword ptr [RAX + R11*0x1 + 0x74] }
    /* +0xb4c3f8 */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xb4c3fd */ __asm { SYSCALL }
    /* +0xb4c3ff */ __asm { LEA RAX,[0x7fffa47879a8] }
    /* +0xb4c406 */ __asm { MOV RCX,0x5e8d3c2128a1613d }
    /* +0xb4c410 */ __asm { CMP RAX,RCX }
    /* +0xb4c413 */ __asm { NOP }
    /* +0xb4c414 */ __asm { NOP }
    /* +0xb4c415 */ __asm { NOP }
    /* +0xb4c416 */ __asm { NOP }
    /* +0xb4c417 */ __asm { NOP }
    /* +0xb4c418 */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0xb4c41d */ __asm { MOV EAX,dword ptr [RAX + -0x2b44] }
    /* +0xb4c423 */ __asm { JMP 0x7fffa52bcd62 }
    /* +0xb4c428 */ __asm { CMP EAX,0x3 }
    /* +0xb4c42b */ __asm { JZ 0x7fffa52bc5b5 }
    /* +0xb4c431 */ __asm { MOV R8D,0x3b923b8a }
    /* +0xb4c437 */ __asm { MOV EAX,0x181f42ec }
    /* +0xb4c43c */ __asm { ADD EAX,0x5e846000 }
    /* +0xb4c441 */ __asm { ADD R8D,0x4c329cea }
    /* +0xb4c448 */ __asm { ROL R8D,0x18 }
    /* +0xb4c44c */ __asm { LEA RCX,[0x7fffa47c0770] }
    /* +0xb4c453 */ __asm { MOV RDX,-0x3895a6885d60e059 }
    /* +0xb4c45d */ __asm { XOR R9D,R9D }
    /* +0xb4c460 */ __asm { XOR R11D,R11D }
    /* +0xb4c463 */ __asm { CMP RCX,RDX }
    /* +0xb4c466 */ __asm { SETA R9B }
    /* +0xb4c46a */ __asm { SETZ R11B }
    /* +0xb4c46e */ __asm { CMP RAX,R8 }
    /* +0xb4c471 */ __asm { CMOVC R11D,R9D }
    /* +0xb4c475 */ __asm { CMP R11B,0x1 }
    /* +0xb4c479 */ __asm { JZ 0x7fffa52bcdc0 }
    /* +0xb4c47f */ __asm { MOV EDX,0xe98608d7 }
    /* +0xb4c484 */ __asm { IMUL R8D,EDX,0x6a0e9ec7 }
    /* +0xb4c48b */ __asm { MOV EAX,0xa6c51e47 }
    /* +0xb4c490 */ __asm { MOV DX,0x9af0 }
    /* +0xb4c494 */ __asm { ADD R8D,0xa2c1be56 }
    /* +0xb4c49b */ __asm { IMUL EDX,EDX,0x2c13 }
    /* +0xb4c4a1 */ __asm { MOVSX RDX,DX }
    /* +0xb4c4a5 */ __asm { MOV R11,RCX }
    /* +0xb4c4a8 */ __asm { ADD R11,RDX }
    /* +0xb4c4ab */ __asm { MOVZX EDX,uint8_t ptr [RCX + RDX*0x1 + 0x9] }
    /* +0xb4c4b0 */ __asm { MOVZX R9D,uint8_t ptr [R11 + RDX*0x4 + 0xf] }
    /* +0xb4c4b6 */ __asm { NOT R9B }
    /* +0xb4c4b9 */ __asm { ROL R9B,0x5 }
    /* +0xb4c4bd */ __asm { MOV uint8_t ptr [RSP + 0x40],R9B }
    /* +0xb4c4c2 */ __asm { MOVZX R9D,uint8_t ptr [R11 + RDX*0x4 + 0x10] }
    /* +0xb4c4c8 */ __asm { NOT R9B }
    /* +0xb4c4cb */ __asm { ROL R9B,0x5 }
    /* +0xb4c4cf */ __asm { MOV uint8_t ptr [RSP + 0x41],R9B }
    /* +0xb4c4d4 */ __asm { MOVZX R9D,uint8_t ptr [R11 + RDX*0x4 + 0x11] }
    /* +0xb4c4da */ __asm { NOT R9B }
    /* +0xb4c4dd */ __asm { ROL R9B,0x5 }
    /* +0xb4c4e1 */ __asm { MOV uint8_t ptr [RSP + 0x42],R9B }
    /* +0xb4c4e6 */ __asm { MOVZX R9D,uint8_t ptr [R11 + RDX*0x4 + 0x12] }
    /* +0xb4c4ec */ __asm { NOT R9B }
    /* +0xb4c4ef */ __asm { ROL R9B,0x5 }
    /* +0xb4c4f3 */ __asm { MOV uint8_t ptr [RSP + 0x43],R9B }
    /* +0xb4c4f8 */ __asm { MOV ECX,0x9102c3cc }
    /* +0xb4c4fd */ __asm { XOR ECX,dword ptr [RSP + 0x40] }
    /* +0xb4c501 */ __asm { MOV EDX,0x1 }
    /* +0xb4c506 */ __asm { SHL EDX,CL }
    /* +0xb4c508 */ __asm { ADD EAX,0xc5eb0e12 }
    /* +0xb4c50d */ __asm { XOR R9D,R9D }
    /* +0xb4c510 */ __asm { XOR R11D,R11D }
    /* +0xb4c513 */ __asm { TEST ECX,EDX }
    /* +0xb4c515 */ __asm { SETLE R9B }
    /* +0xb4c519 */ __asm { SETZ R11B }
    /* +0xb4c51d */ __asm { CMP RAX,R8 }
    /* +0xb4c520 */ __asm { CMOVLE R11D,R9D }
    /* +0xb4c524 */ __asm { TEST R11B,R11B }
    /* +0xb4c527 */ __asm { JZ 0x7fffa52bca97 }
    /* +0xb4c52d */ __asm { LEA RAX,[0x7fffa47c20b8] }
    /* +0xb4c534 */ __asm { NOP }
    /* +0xb4c535 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb4c53c */ __asm { MOV RCX,0x0 }
    /* +0xb4c543 */ __asm { MOV RCX,0x4e3b59602519a437 }
    /* +0xb4c54d */ __asm { CMP RAX,RCX }
    /* +0xb4c550 */ __asm { NOP }
    /* +0xb4c551 */ __asm { NOP }
    /* +0xb4c552 */ __asm { NOP }
    /* +0xb4c553 */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0xb4c558 */ __asm { MOV EAX,dword ptr [RAX + -0x5c20] }
    /* +0xb4c55e */ __asm { JMP 0x7fffa52bcd62 }
    /* +0xb4c563 */ __asm { LEA RAX,[0x7fffa47c2579] }
    /* +0xb4c56a */ __asm { MOV RCX,0x1d1f573f3f5f2572 }
    /* +0xb4c574 */ __asm { CMP RAX,RCX }
    /* +0xb4c577 */ __asm { NOP }
    /* +0xb4c578 */ __asm { NOP }
    /* +0xb4c579 */ __asm { NOP }
    /* +0xb4c57a */ __asm { NOP }
    /* +0xb4c57b */ __asm { NOP }
    /* +0xb4c57c */ __asm { NOP }
    /* +0xb4c57d */ __asm { NOP }
    /* +0xb4c57e */ __asm { NOP }
    /* +0xb4c57f */ __asm { NOP }
    /* +0xb4c580 */ __asm { NOP }
    /* +0xb4c581 */ __asm { NOP }
    /* +0xb4c582 */ __asm { NOP }
    /* +0xb4c583 */ __asm { NOP }
    /* +0xb4c584 */ __asm { NOP }
    /* +0xb4c585 */ __asm { NOP }
    /* +0xb4c586 */ __asm { NOP }
    /* +0xb4c587 */ __asm { MOV ECX,0xebe47e70 }
    /* +0xb4c58c */ __asm { ADD ECX,0x141b2b67 }
    /* +0xb4c592 */ __asm { MOVSXD RDX,ECX }
    /* +0xb4c595 */ __asm { MOV RCX,0x0 }
    /* +0xb4c59c */ __asm { NOP }
    /* +0xb4c59d */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb4c5a4 */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0xb4c5a9 */ __asm { MOV EAX,dword ptr [RAX + RDX*0x1 + 0x120] }
    /* +0xb4c5b0 */ __asm { JMP 0x7fffa52bcd62 }
    /* +0xb4c5b5 */ __asm { MOV EAX,0x61934478 }
    /* +0xb4c5ba */ __asm { MOV RCX,-0x206d9f3c4c9f7d9c }
    /* +0xb4c5c4 */ __asm { CMP RAX,RCX }
    /* +0xb4c5c7 */ __asm { NOP }
    /* +0xb4c5c8 */ __asm { NOP }
    /* +0xb4c5c9 */ __asm { NOP }
    /* +0xb4c5ca */ __asm { NOP }
    /* +0xb4c5cb */ __asm { NOP }
    /* +0xb4c5cc */ __asm { MOV RCX,qword ptr [RAX + 0x1e6abb90] }
    /* +0xb4c5d3 */ __asm { MOV RDX,0x180991e3a2bdbf53 }
    /* +0xb4c5dd */ __asm { MOV RAX,RCX }
    /* +0xb4c5e0 */ __asm { MUL RDX }
    /* +0xb4c5e3 */ __asm { MOV R11,RDX }
    /* +0xb4c5e6 */ __asm { MOV EDX,0x1476a87 }
    /* +0xb4c5eb */ __asm { MOV RAX,RCX }
    /* +0xb4c5ee */ __asm { MUL RDX }
    /* +0xb4c5f1 */ __asm { ADD RAX,R11 }
    /* +0xb4c5f4 */ __asm { ADC RDX,0x0 }
    /* +0xb4c5f8 */ __asm { TEST DL,0x1 }
    /* +0xb4c5fb */ __asm { JNZ 0x7fffa52bcd27 }
    /* +0xb4c601 */ __asm { RDTSC }
    /* +0xb4c603 */ __asm { SHL RDX,0x20 }
    /* +0xb4c607 */ __asm { OR RDX,RAX }
    /* +0xb4c60a */ __asm { IMUL R8,RDX }
    /* +0xb4c60e */ __asm { MOV RCX,0x662ec505bab0fa36 }
    /* +0xb4c618 */ __asm { ADD RCX,R8 }
    /* +0xb4c61b */ __asm { MOV RAX,RCX }
    /* +0xb4c61e */ __asm { SHR RAX,0x1b }
    /* +0xb4c622 */ __asm { MOV R8,RCX }
    /* +0xb4c625 */ __asm { SHR R8,0x2d }
    /* +0xb4c629 */ __asm { XOR R8D,EAX }
    /* +0xb4c62c */ __asm { SHR RCX,0x3b }
    /* +0xb4c630 */ __asm { ROR R8D,CL }
    /* +0xb4c633 */ __asm { PUSHFQ }
    /* +0xb4c634 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb4c63c */ __asm { POPFQ }
    /* +0xb4c63d */ __asm { MOV dword ptr [RSP + 0x40],0xa4a130f6 }
    /* +0xb4c645 */ __asm { MOV ECX,dword ptr [RSP + 0x40] }
    /* +0xb4c649 */ __asm { MOV EDX,0x524d5514 }
    /* +0xb4c64e */ __asm { ADD EDX,0x6acc0562 }
    /* +0xb4c654 */ __asm { CMP ECX,EDX }
    /* +0xb4c656 */ __asm { NOP }
    /* +0xb4c657 */ __asm { NOP }
    /* +0xb4c658 */ __asm { NOP }
    /* +0xb4c659 */ __asm { NOP }
    /* +0xb4c65a */ __asm { NOP }
    /* +0xb4c65b */ __asm { NOP }
    /* +0xb4c65c */ __asm { NOP }
    /* +0xb4c65d */ __asm { NOP }
    /* +0xb4c65e */ __asm { NOP }
    /* +0xb4c65f */ __asm { NOP }
    /* +0xb4c660 */ __asm { NOP }
    /* +0xb4c661 */ __asm { NOP }
    /* +0xb4c662 */ __asm { CMP R8D,0x45cc0f }
    /* +0xb4c669 */ __asm { JA 0x7fffa52bc7f7 }
    /* +0xb4c66f */ __asm { PUSHFQ }
    /* +0xb4c670 */ __asm { POP RAX }
    /* +0xb4c671 */ __asm { MOV RCX,0x0 }
    /* +0xb4c678 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb4c67f */ __asm { NOP }
    /* +0xb4c680 */ __asm { TEST EAX,0x100 }
    /* +0xb4c685 */ __asm { NOP }
    /* +0xb4c686 */ __asm { NOP }
    /* +0xb4c687 */ __asm { NOP }
    /* +0xb4c688 */ __asm { NOP }
    /* +0xb4c689 */ __asm { NOP }
    /* +0xb4c68a */ __asm { MOV dword ptr [RSP + 0x40],0x30a0805 }
    /* +0xb4c692 */ __asm { MOV ECX,dword ptr [RSP + 0x40] }
    /* +0xb4c696 */ __asm { TEST ECX,ECX }
    /* +0xb4c698 */ __asm { NOP }
    /* +0xb4c699 */ __asm { NOP }
    /* +0xb4c69a */ __asm { NOP }
    /* +0xb4c69b */ __asm { NOP }
    /* +0xb4c69c */ __asm { NOP }
    /* +0xb4c69d */ __asm { NOP }
    /* +0xb4c69e */ __asm { NOP }
    /* +0xb4c69f */ __asm { NOP }
    /* +0xb4c6a0 */ __asm { NOP }
    /* +0xb4c6a1 */ __asm { NOP }
    /* +0xb4c6a2 */ __asm { NOP }
    /* +0xb4c6a3 */ __asm { LEA RAX,[0x7fffa47bcba9] }
    /* +0xb4c6aa */ __asm { MOV RCX,0x251172ac590ebdfa }
    /* +0xb4c6b4 */ __asm { CMP RAX,RCX }
    /* +0xb4c6b7 */ __asm { NOP }
    /* +0xb4c6b8 */ __asm { NOP }
    /* +0xb4c6b9 */ __asm { NOP }
    /* +0xb4c6ba */ __asm { NOP }
    /* +0xb4c6bb */ __asm { NOP }
    /* +0xb4c6bc */ __asm { NOP }
    /* +0xb4c6bd */ __asm { NOP }
    /* +0xb4c6be */ __asm { NOP }
    /* +0xb4c6bf */ __asm { MOV DX,0x51f8 }
    /* +0xb4c6c3 */ __asm { MOVZX R10D,uint8_t ptr [RAX + -0x460] }
    /* +0xb4c6cb */ __asm { MOVZX R9D,uint8_t ptr [RAX + R10*0x4 + -0x45a] }
    /* +0xb4c6d4 */ __asm { NOT R9B }
    /* +0xb4c6d7 */ __asm { ROL R9B,0x5 }
    /* +0xb4c6db */ __asm { MOV uint8_t ptr [RSP + 0x40],R9B }
    /* +0xb4c6e0 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R10*0x4 + -0x459] }
    /* +0xb4c6e9 */ __asm { NOT R9B }
    /* +0xb4c6ec */ __asm { ROL R9B,0x5 }
    /* +0xb4c6f0 */ __asm { MOV uint8_t ptr [RSP + 0x41],R9B }
    /* +0xb4c6f5 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R10*0x4 + -0x458] }
    /* +0xb4c6fe */ __asm { NOT R9B }
    /* +0xb4c701 */ __asm { ROL R9B,0x5 }
    /* +0xb4c705 */ __asm { MOV R11D,0x51f8 }
    /* +0xb4c70b */ __asm { MOV uint8_t ptr [RSP + 0x42],R9B }
    /* +0xb4c710 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R10*0x4 + -0x457] }
    /* +0xb4c719 */ __asm { NOT R9B }
    /* +0xb4c71c */ __asm { ROL R9B,0x5 }
    /* +0xb4c720 */ __asm { MOV uint8_t ptr [RSP + 0x43],R9B }
    /* +0xb4c725 */ __asm { MOV ECX,0x9102c3cc }
    /* +0xb4c72a */ __asm { XOR ECX,dword ptr [RSP + 0x40] }
    /* +0xb4c72e */ __asm { MOV R9D,0x1 }
    /* +0xb4c734 */ __asm { SHL R9D,CL }
    /* +0xb4c737 */ __asm { SUB R11D,EDX }
    /* +0xb4c73a */ __asm { MOVZX EDX,R11W }
    /* +0xb4c73e */ __asm { AND R9D,ECX }
    /* +0xb4c741 */ __asm { CMP R9D,EDX }
    /* +0xb4c744 */ __asm { JZ 0x7fffa52bc7f7 }
    /* +0xb4c74a */ __asm { MOV ECX,0xe3e2ac3e }
    /* +0xb4c74f */ __asm { XOR ECX,0x4f7dd23d }
    /* +0xb4c755 */ __asm { ADD ECX,0x73f606a0 }
    /* +0xb4c75b */ __asm { PXOR XMM4,XMM4 }
    /* +0xb4c75f */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM4 }
    /* +0xb4c765 */ __asm { MOV dword ptr [RSP + 0x68],ECX }
    /* +0xb4c769 */ __asm { MOV ECX,dword ptr [RSP + 0x68] }
    /* +0xb4c76d */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xb4c775 */ __asm { MOV dword ptr [RSP + 0x68],0x9494fafe }
    /* +0xb4c77d */ __asm { MOV ECX,dword ptr [RSP + 0x68] }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtUnmapViewOfSection  |  RVA: 0xc93d80  |  Size: 2711 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtUnmapViewOfSection(void) {
    /* +0xc93d80 */ __asm { PUSH R12 }
    /* +0xc93d82 */ __asm { PUSH RBX }
    /* +0xc93d83 */ __asm { PUSH RBP }
    /* +0xc93d84 */ __asm { PUSH R13 }
    /* +0xc93d86 */ __asm { SUB RSP,0x48 }
    /* +0xc93d8a */ __asm { MOV R12,RDX }
    /* +0xc93d8d */ __asm { MOV RBX,RCX }
    /* +0xc93d90 */ __asm { MOV EDX,0xff19fccf }
    /* +0xc93d95 */ __asm { ADD EDX,0xcc0dac3 }
    /* +0xc93d9b */ __asm { XOR RDX,0x7424dab2 }
    /* +0xc93da2 */ __asm { MOV RAX,qword ptr [RDX] }
    /* +0xc93da5 */ __asm { MOV RCX,0x26d630f3125d3af7 }
    /* +0xc93daf */ __asm { MOV R10,-0x2f685439b890c134 }
    /* +0xc93db9 */ __asm { CMP RAX,R10 }
    /* +0xc93dbc */ __asm { NOP }
    /* +0xc93dbd */ __asm { NOP }
    /* +0xc93dbe */ __asm { NOP }
    /* +0xc93dbf */ __asm { NOP }
    /* +0xc93dc0 */ __asm { NOP }
    /* +0xc93dc1 */ __asm { RDTSC }
    /* +0xc93dc3 */ __asm { SHL RDX,0x20 }
    /* +0xc93dc7 */ __asm { OR RDX,RAX }
    /* +0xc93dca */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0xc93dd4 */ __asm { IMUL RAX,RDX }
    /* +0xc93dd8 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xc93de2 */ __asm { ADD RCX,RAX }
    /* +0xc93de5 */ __asm { MOV R8,RCX }
    /* +0xc93de8 */ __asm { SHR R8,0x2d }
    /* +0xc93dec */ __asm { MOV RDX,RCX }
    /* +0xc93def */ __asm { SHR RDX,0x1b }
    /* +0xc93df3 */ __asm { SHR RCX,0x3b }
    /* +0xc93df7 */ __asm { XOR EDX,R8D }
    /* +0xc93dfa */ __asm { ROR EDX,CL }
    /* +0xc93dfc */ __asm { AND EDX,0x3 }
    /* +0xc93dff */ __asm { CMP EDX,0x2 }
    /* +0xc93e02 */ __asm { JC 0x7fffa5404014 }
    /* +0xc93e08 */ __asm { CMP EDX,0x3 }
    /* +0xc93e0b */ __asm { JNZ 0x7fffa54041e9 }
    /* +0xc93e11 */ __asm { LEA RCX,[0x7fffa47bf2ba] }
    /* +0xc93e18 */ __asm { MOV RAX,0xc72715d72141793 }
    /* +0xc93e22 */ __asm { CMP RCX,RAX }
    /* +0xc93e25 */ __asm { NOP }
    /* +0xc93e26 */ __asm { NOP }
    /* +0xc93e27 */ __asm { NOP }
    /* +0xc93e28 */ __asm { NOP }
    /* +0xc93e29 */ __asm { NOP }
    /* +0xc93e2a */ __asm { MOV R9D,0xc7af7cb2 }
    /* +0xc93e30 */ __asm { IMUL EDX,R9D,0x105a137f }
    /* +0xc93e37 */ __asm { MOVZX R11D,uint8_t ptr [RCX + -0x2c2d] }
    /* +0xc93e3f */ __asm { MOVZX EAX,uint8_t ptr [RCX + R11*0x4 + -0x2c1d] }
    /* +0xc93e48 */ __asm { ROL AL,0x4 }
    /* +0xc93e4b */ __asm { MOV uint8_t ptr [RSP + 0x30],AL }
    /* +0xc93e4f */ __asm { MOVZX EAX,uint8_t ptr [RCX + R11*0x4 + -0x2c1c] }
    /* +0xc93e58 */ __asm { ROL AL,0x4 }
    /* +0xc93e5b */ __asm { MOV uint8_t ptr [RSP + 0x31],AL }
    /* +0xc93e5f */ __asm { MOVZX EAX,uint8_t ptr [RCX + R11*0x4 + -0x2c1b] }
    /* +0xc93e68 */ __asm { ROL AL,0x4 }
    /* +0xc93e6b */ __asm { MOV uint8_t ptr [RSP + 0x32],AL }
    /* +0xc93e6f */ __asm { MOVZX EAX,uint8_t ptr [RCX + R11*0x4 + -0x2c1a] }
    /* +0xc93e78 */ __asm { ROL AL,0x4 }
    /* +0xc93e7b */ __asm { ADD EDX,0x7319edc6 }
    /* +0xc93e81 */ __asm { MOV uint8_t ptr [RSP + 0x33],AL }
    /* +0xc93e85 */ __asm { MOV R9D,0x65e8ce72 }
    /* +0xc93e8b */ __asm { XOR R9D,dword ptr [RSP + 0x30] }
    /* +0xc93e90 */ __asm { MOV R10D,dword ptr [RDX] }
    /* +0xc93e93 */ __asm { BT R9D,R10D }
    /* +0xc93e97 */ __asm { JNC 0x7fffa540448d }
    /* +0xc93e9d */ __asm { MOV R9D,0xbd6a602d }
    /* +0xc93ea3 */ __asm { XOR R9D,0x2f35f11b }
    /* +0xc93eaa */ __asm { ROL R9D,0xa }
    /* +0xc93eae */ __asm { PXOR XMM0,XMM0 }
    /* +0xc93eb2 */ __asm { MOVDQA xmmword ptr [RSP + 0x30],XMM0 }
    /* +0xc93eb8 */ __asm { MOV dword ptr [RSP + 0x40],R9D }
    /* +0xc93ebd */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xc93ec2 */ __asm { TEST R9D,R9D }
    /* +0xc93ec5 */ __asm { NOP }
    /* +0xc93ec6 */ __asm { NOP }
    /* +0xc93ec7 */ __asm { NOP }
    /* +0xc93ec8 */ __asm { NOP }
    /* +0xc93ec9 */ __asm { NOP }
    /* +0xc93eca */ __asm { NOP }
    /* +0xc93ecb */ __asm { NOP }
    /* +0xc93ecc */ __asm { NOP }
    /* +0xc93ecd */ __asm { NOP }
    /* +0xc93ece */ __asm { NOP }
    /* +0xc93ecf */ __asm { NOP }
    /* +0xc93ed0 */ __asm { NOP }
    /* +0xc93ed1 */ __asm { NOP }
    /* +0xc93ed2 */ __asm { NOP }
    /* +0xc93ed3 */ __asm { PUSHFQ }
    /* +0xc93ed4 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xc93edc */ __asm { POPFQ }
    /* +0xc93edd */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0xc93ee5 */ __asm { MOV R9W,0x81e7 }
    /* +0xc93eea */ __asm { IMUL R9D,R9D,0x4d89 }
    /* +0xc93ef1 */ __asm { NOT R9D }
    /* +0xc93ef4 */ __asm { MOVZX EDX,R9W }
    /* +0xc93ef8 */ __asm { MOV RAX,qword ptr GS:[RDX] }
    /* +0xc93efc */ __asm { MOV R9W,0x33 }
    /* +0xc93f01 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0xc93f05 */ __asm { ADD R9D,-0x3 }
    /* +0xc93f09 */ __asm { MOVZX EDX,R9W }
    /* +0xc93f0d */ __asm { MOV R10,qword ptr GS:[RDX] }
    /* +0xc93f11 */ __asm { MOV R10,-0x44b472b486a40ba }
    /* +0xc93f1b */ __asm { MOV ECX,0x62557a40 }
    /* +0xc93f20 */ __asm { SUB RCX,R10 }
    /* +0xc93f23 */ __asm { CMP RAX,RCX }
    /* +0xc93f26 */ __asm { NOP }
    /* +0xc93f27 */ __asm { NOP }
    /* +0xc93f28 */ __asm { NOP }
    /* +0xc93f29 */ __asm { NOP }
    /* +0xc93f2a */ __asm { NOP }
    /* +0xc93f2b */ __asm { MOV R9W,0xac72 }
    /* +0xc93f30 */ __asm { ADD R9D,0x2472 }
    /* +0xc93f37 */ __asm { MOVZX EDX,R9W }
    /* +0xc93f3b */ __asm { XOR RDX,0xd0d4 }
    /* +0xc93f42 */ __asm { MOV RAX,qword ptr GS:[RDX] }
    /* +0xc93f46 */ __asm { MOV R10,-0x21a748aa0032018b }
    /* +0xc93f50 */ __asm { CMP qword ptr [RAX + 0xe8],R10 }
    /* +0xc93f57 */ __asm { JZ 0x7fffa5404850 }
    /* +0xc93f5d */ __asm { MOV RAX,-0x219b3f7ca5aac64e }
    /* +0xc93f67 */ __asm { LEA RCX,[0x7fffa47b9d90] }
    /* +0xc93f6e */ __asm { MOV R11D,0x9bd4f3bf }
    /* +0xc93f74 */ __asm { ADD R11D,0x7183688 }
    /* +0xc93f7b */ __asm { MOV R10,RCX }
    /* +0xc93f7e */ __asm { ROL R10,0x4 }
    /* +0xc93f82 */ __asm { XOR RAX,0x31cec22c }
    /* +0xc93f88 */ __asm { ADD RAX,-0x2e1e7acc }
    /* +0xc93f8e */ __asm { ADD R10,R11 }
    /* +0xc93f91 */ __asm { ADD R10,-0x209cfa59 }
    /* +0xc93f98 */ __asm { CMP RAX,R10 }
    /* +0xc93f9b */ __asm { JZ 0x7fffa5404892 }
    /* +0xc93fa1 */ __asm { MOV R9W,0x64f3 }
    /* +0xc93fa6 */ __asm { MOV R11W,0x91c0 }
    /* +0xc93fab */ __asm { ADD R11D,0xffffd4d3 }
    /* +0xc93fb2 */ __asm { LEA R13,[0x7fffa47b649f] }
    /* +0xc93fb9 */ __asm { MOV DX,0x25ce }
    /* +0xc93fbd */ __asm { ADD EDX,0xffffda31 }
    /* +0xc93fc3 */ __asm { MOVSX R10,DX }
    /* +0xc93fc7 */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xc93fcc */ __asm { MOV EAX,dword ptr [RCX + 0x2738] }
    /* +0xc93fd2 */ __asm { ADD R9D,0xffff9b1d }
    /* +0xc93fd9 */ __asm { MOVZX R9D,R9W }
    /* +0xc93fdd */ __asm { XOR R11D,0x66bb }
    /* +0xc93fe4 */ __asm { MOVZX EDX,R11W }
    /* +0xc93fe8 */ __asm { LEA R8,[RSP + 0x30] }
    /* +0xc93fed */ __asm { SYSCALL }
    /* +0xc93fef */ __asm { MOV RAX,0x2afa0ca9e3850107 }
    /* +0xc93ff9 */ __asm { CMP R13,RAX }
    /* +0xc93ffc */ __asm { JNZ 0x7fffa5404003 }
    /* +0xc93ffe */ __asm { LODSD RSI }
    /* +0xc93fff */ __asm { STC }
    /* +0xc94000 */ __asm { JBE 0x7fffa5403fde }
    /* +0xc94003 */ __asm { MOV qword ptr [RSP + 0x30],RCX }
    /* +0xc94008 */ __asm { MOV EAX,dword ptr [R13 + 0x6bdd] }
    /* +0xc9400f */ __asm { JMP 0x7fffa540483d }
    /* +0xc94014 */ __asm { CMP EDX,0x1 }
    /* +0xc94017 */ __asm { JNZ 0x7fffa54042f4 }
    /* +0xc9401d */ __asm { LEA RCX,[0x7fffa47c19b3] }
    /* +0xc94024 */ __asm { MOV R10,RCX }
    /* +0xc94027 */ __asm { ADD R10,-0x6ad35854 }
    /* +0xc9402e */ __asm { MOV RAX,-0x5287f5d7fa81524d }
    /* +0xc94038 */ __asm { CMP R10,RAX }
    /* +0xc9403b */ __asm { JNZ 0x7fffa540404b }
    /* +0xc9403d */ __asm { SBB AL,0xce }
    /* +0xc9403f */ __asm { SUB ECX,EDX }
    /* +0xc94041 */ __asm { OUT DX,EAX }
    /* +0xc94043 */ __asm { XOR EDX,dword ptr [RDI] }
    /* +0xc94045 */ __asm { MOVSXD EBX,dword ptr [RBX + -0x32de2f19] }
    /* +0xc9404b */ __asm { MOV R9D,0xc3a2885c }
    /* +0xc94051 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xc94058 */ __asm { NOP }
    /* +0xc94059 */ __asm { MOV R10,0x0 }
    /* +0xc94060 */ __asm { MOVZX R11D,uint8_t ptr [RCX + -0x5326] }
    /* +0xc94068 */ __asm { MOVZX EAX,uint8_t ptr [RCX + R11*0x4 + -0x5316] }
    /* +0xc94071 */ __asm { ROL AL,0x4 }
    /* +0xc94074 */ __asm { MOV uint8_t ptr [RSP + 0x30],AL }
    /* +0xc94078 */ __asm { MOVZX EAX,uint8_t ptr [RCX + R11*0x4 + -0x5315] }
    /* +0xc94081 */ __asm { ROL AL,0x4 }
    /* +0xc94084 */ __asm { MOV uint8_t ptr [RSP + 0x31],AL }
    /* +0xc94088 */ __asm { MOVZX EAX,uint8_t ptr [RCX + R11*0x4 + -0x5314] }
    /* +0xc94091 */ __asm { ROL AL,0x4 }
    /* +0xc94094 */ __asm { MOV uint8_t ptr [RSP + 0x32],AL }
    /* +0xc94098 */ __asm { MOVZX EAX,uint8_t ptr [RCX + R11*0x4 + -0x5313] }
    /* +0xc940a1 */ __asm { ROL AL,0x4 }
    /* +0xc940a4 */ __asm { IMUL EDX,R9D,-0x48e3f3bd }
    /* +0xc940ab */ __asm { MOV uint8_t ptr [RSP + 0x33],AL }
    /* +0xc940af */ __asm { MOV R9D,0x65e8ce72 }
    /* +0xc940b5 */ __asm { XOR R9D,dword ptr [RSP + 0x30] }
    /* +0xc940ba */ __asm { MOV R10D,dword ptr [RDX] }
    /* +0xc940bd */ __asm { PXOR XMM0,XMM0 }
    /* +0xc940c1 */ __asm { BT R9D,R10D }
    /* +0xc940c5 */ __asm { JNC 0x7fffa54045ed }
    /* +0xc940cb */ __asm { MOVDQA xmmword ptr [RSP + 0x30],XMM0 }
    /* +0xc940d1 */ __asm { MOV dword ptr [RSP + 0x40],0xfabf7cf3 }
    /* +0xc940d9 */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xc940de */ __asm { CMP R9D,0x80a66754 }
    /* +0xc940e5 */ __asm { JBE 0x7fffa540489b }
    /* +0xc940eb */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0xc940f3 */ __asm { MOV dword ptr [RSP + 0x40],0x43480f8b }
    /* +0xc940fb */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xc94100 */ __asm { CMP R9D,0xd127e189 }
    /* +0xc94107 */ __asm { JNC 0x7fffa54048a2 }
    /* +0xc9410d */ __asm { MOV dword ptr [RSP + 0x40],0xa0fc6e77 }
    /* +0xc94115 */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xc9411a */ __asm { MOV R10D,0x6ca75aa7 }
    /* +0xc94120 */ __asm { IMUL R10D,R10D,0x3abab69 }
    /* +0xc94127 */ __asm { ADD R10D,0x12fe4328 }
    /* +0xc9412e */ __asm { CMP R9D,R10D }
    /* +0xc94131 */ __asm { NOP }
    /* +0xc94132 */ __asm { NOP }
    /* +0xc94133 */ __asm { NOP }
    /* +0xc94134 */ __asm { NOP }
    /* +0xc94135 */ __asm { NOP }
    /* +0xc94136 */ __asm { NOP }
    /* +0xc94137 */ __asm { NOP }
    /* +0xc94138 */ __asm { LEA RCX,[0x7fffa47bbe04] }
    /* +0xc9413f */ __asm { MOV RAX,0x378760a04bf96c1 }
    /* +0xc94149 */ __asm { IMUL RAX,RCX }
    /* +0xc9414d */ __asm { MOV R10,0x79a59cb1fe0c4ac6 }
    /* +0xc94157 */ __asm { ADD R10,RAX }
    /* +0xc9415a */ __asm { MOV RAX,0x5d44fe4a2570dae7 }
    /* +0xc94164 */ __asm { CMP R10,RAX }
    /* +0xc94167 */ __asm { JZ 0x7fffa54048aa }
    /* +0xc9416d */ __asm { MOV R9W,0xc4d }
    /* +0xc94172 */ __asm { LEA R13,[0x7fffa47825cf] }
    /* +0xc94179 */ __asm { ADD R9D,0xfffff3db }
    /* +0xc94180 */ __asm { MOVZX EDX,R9W }
    /* +0xc94184 */ __asm { MOV R10,0x0 }
    /* +0xc9418b */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xc94192 */ __asm { NOP }
    /* +0xc94193 */ __asm { MOV qword ptr [RSP + 0x40],R10 }
    /* +0xc94198 */ __asm { MOV EAX,dword ptr [RCX + 0x6c4] }
    /* +0xc9419e */ __asm { MOV R9W,0xd130 }
    /* +0xc941a3 */ __asm { MOV R10D,0x9d76d9c8 }
    /* +0xc941a9 */ __asm { XOR R10D,0x62892637 }
    /* +0xc941b0 */ __asm { MOVSXD R10,R10D }
    /* +0xc941b3 */ __asm { IMUL R9D,R9D,0x451b }
    /* +0xc941ba */ __asm { MOVZX R9D,R9W }
    /* +0xc941be */ __asm { LEA R8,[RSP + 0x30] }
    /* +0xc941c3 */ __asm { SYSCALL }
    /* +0xc941c5 */ __asm { MOV RAX,0x3d94ef65526919fe }
    /* +0xc941cf */ __asm { CMP R13,RAX }
    /* +0xc941d2 */ __asm { JZ 0x7fffa54048b2 }
    /* +0xc941d8 */ __asm { MOV qword ptr [RSP + 0x30],RCX }
    /* +0xc941dd */ __asm { MOV EAX,dword ptr [R13 + 0x27e9] }
    /* +0xc941e4 */ __asm { JMP 0x7fffa540483d }
    /* +0xc941e9 */ __asm { PXOR XMM0,XMM0 }
    /* +0xc941ed */ __asm { MOVDQA xmmword ptr [RSP + 0x30],XMM0 }
    /* +0xc941f3 */ __asm { MOV dword ptr [RSP + 0x40],0x34d3fc99 }
    /* +0xc941fb */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xc94200 */ __asm { CMP R9D,0x9913a424 }
    /* +0xc94207 */ __asm { NOP }
    /* +0xc94208 */ __asm { NOP }
    /* +0xc94209 */ __asm { NOP }
    /* +0xc9420a */ __asm { NOP }
    /* +0xc9420b */ __asm { NOP }
    /* +0xc9420c */ __asm { MOV R9D,0x632ffe16 }
    /* +0xc94212 */ __asm { IMUL R9D,R9D,-0x5fbd54d9 }
    /* +0xc94219 */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0xc94221 */ __asm { ADD R9D,0x996dd8ce }
    /* +0xc94228 */ __asm { MOV dword ptr [RSP + 0x40],R9D }
    /* +0xc9422d */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xc94232 */ __asm { MOV dword ptr [RSP + 0x40],0x3d656b3b }
    /* +0xc9423a */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xc9423f */ __asm { MOV RAX,-0x5d18ad63310c22b0 }
    /* +0xc94249 */ __asm { LEA RCX,[0x7fffa477d059] }
    /* +0xc94250 */ __asm { MOV R10,RCX }
    /* +0xc94253 */ __asm { XOR R10,RAX }
    /* +0xc94256 */ __asm { CMP R10,-0x44a68b9a }
    /* +0xc9425d */ __asm { JZ 0x7fffa5404882 }
    /* +0xc94263 */ __asm { MOV R9W,0x4033 }
    /* +0xc94268 */ __asm { MOV R10W,0x4881 }
    /* +0xc9426d */ __asm { IMUL R10D,R10D,0x87f }
    /* +0xc94274 */ __asm { LEA R13,[0x7fffa47bd245] }
    /* +0xc9427b */ __asm { MOV R11W,0x77f9 }
    /* +0xc94280 */ __asm { IMUL R11D,R11D,0x1f9d }
    /* +0xc94287 */ __asm { ROL R11W,0x1 }
    /* +0xc9428b */ __asm { ADD R9D,0xffffbff5 }
    /* +0xc94292 */ __asm { MOVZX EDX,R9W }
    /* +0xc94296 */ __asm { MOV R9W,0x8701 }
    /* +0xc9429b */ __asm { ADD R9D,0x7901 }
    /* +0xc942a2 */ __asm { ROL R9W,0x3 }
    /* +0xc942a7 */ __asm { MOVZX R9D,R9W }
    /* +0xc942ab */ __asm { MOVZX R8D,R11W }
    /* +0xc942af */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xc942b4 */ __asm { MOV EAX,dword ptr [R8 + RCX*0x1 + 0x58] }
    /* +0xc942b9 */ __asm { ROL R10W,0x5 }
    /* +0xc942be */ __asm { MOVSX R10,R10W }
    /* +0xc942c2 */ __asm { LEA R8,[RSP + 0x30] }
    /* +0xc942c7 */ __asm { SYSCALL }
    /* +0xc942c9 */ __asm { MOV RAX,-0x60878068e1015e19 }
    /* +0xc942d3 */ __asm { CMP R13,RAX }
    /* +0xc942d6 */ __asm { JNZ 0x7fffa54042e3 }
    /* +0xc942d8 */ __asm { ROR uint8_t ptr [RBX + 0x22],0x33 }
    /* +0xc942dc */ __asm { OR ECX,dword ptr [RAX + 0x2a36ffb1] }
    /* +0xc942e2 */ __asm { LAHF }
    /* +0xc942e3 */ __asm { MOV qword ptr [RSP + 0x30],RCX }
    /* +0xc942e8 */ __asm { MOV EAX,dword ptr [R13 + -0x1c9] }
    /* +0xc942ef */ __asm { JMP 0x7fffa540483d }
    /* +0xc942f4 */ __asm { LEA RCX,[0x7fffa47b96c6] }
    /* +0xc942fb */ __asm { MOV RAX,-0x466049d81f755141 }
    /* +0xc94305 */ __asm { CMP RCX,RAX }
    /* +0xc94308 */ __asm { JZ 0x7fffa540488a }
    /* +0xc9430e */ __asm { MOVZX R11D,uint8_t ptr [RCX + 0x3083] }
    /* +0xc94316 */ __asm { MOVZX EAX,uint8_t ptr [RCX + R11*0x4 + 0x3089] }
    /* +0xc9431f */ __asm { NOT AL }
    /* +0xc94321 */ __asm { ROL AL,0x5 }
    /* +0xc94324 */ __asm { MOV uint8_t ptr [RSP + 0x30],AL }
    /* +0xc94328 */ __asm { MOVZX EAX,uint8_t ptr [RCX + R11*0x4 + 0x308a] }
    /* +0xc94331 */ __asm { NOT AL }
    /* +0xc94333 */ __asm { ROL AL,0x5 }
    /* +0xc94336 */ __asm { MOV uint8_t ptr [RSP + 0x31],AL }
    /* +0xc9433a */ __asm { MOVZX EAX,uint8_t ptr [RCX + R11*0x4 + 0x308b] }
    /* +0xc94343 */ __asm { NOT AL }
    /* +0xc94345 */ __asm { ROL AL,0x5 }
    /* +0xc94348 */ __asm { MOV uint8_t ptr [RSP + 0x32],AL }
    /* +0xc9434c */ __asm { MOVZX EAX,uint8_t ptr [RCX + R11*0x4 + 0x308c] }
    /* +0xc94355 */ __asm { NOT AL }
    /* +0xc94357 */ __asm { ROL AL,0x5 }
    /* +0xc9435a */ __asm { MOV uint8_t ptr [RSP + 0x33],AL }
    /* +0xc9435e */ __asm { MOV R9D,0x9102c3cc }
    /* +0xc94364 */ __asm { XOR R9D,dword ptr [RSP + 0x30] }
    /* +0xc94369 */ __asm { BT R9D,R9D }
    /* +0xc9436d */ __asm { JNC 0x7fffa5404734 }
    /* +0xc94373 */ __asm { MOV R9W,0x80b0 }
    /* +0xc94378 */ __asm { XORPS XMM0,XMM0 }
    /* +0xc9437b */ __asm { MOVAPS xmmword ptr [RSP + 0x30],XMM0 }
    /* +0xc94380 */ __asm { XOR R9D,0xffff8a94 }
    /* +0xc94387 */ __asm { ADD R9D,0xfffff60c }
    /* +0xc9438e */ __asm { MOVZX EDX,R9W }
    /* +0xc94392 */ __asm { MOV RAX,qword ptr GS:[RDX] }
    /* +0xc94396 */ __asm { MOVQ XMM0,qword ptr [RAX + 0x60] }
    /* +0xc9439b */ __asm { MOV RCX,0x566e25e6f0a01b09 }
    /* +0xc943a5 */ __asm { MOVQ XMM1,RCX }
    /* +0xc943aa */ __asm { POR XMM1,XMM0 }
    /* +0xc943ae */ __asm { MOVQ RAX,XMM1 }
    /* +0xc943b3 */ __asm { MOV R10,0x22884693cfda7a8f }
    /* +0xc943bd */ __asm { CMP RAX,R10 }
    /* +0xc943c0 */ __asm { JZ 0x7fffa5404871 }
    /* +0xc943c6 */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0xc943ce */ __asm { MOV dword ptr [RSP + 0x40],0x4f9c6d26 }
    /* +0xc943d6 */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xc943db */ __asm { MOV dword ptr [RSP + 0x40],0x9b469827 }
    /* +0xc943e3 */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xc943e8 */ __asm { TEST R9B,0x1 }
    /* +0xc943ec */ __asm { NOP }
    /* +0xc943ed */ __asm { NOP }
    /* +0xc943ee */ __asm { NOP }
    /* +0xc943ef */ __asm { NOP }
    /* +0xc943f0 */ __asm { NOP }
    /* +0xc943f1 */ __asm { MOV RCX,0x0 }
    /* +0xc943f8 */ __asm { NOP }
    /* +0xc943f9 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xc94400 */ __asm { LEA RCX,[0x7fffa47b7b52] }
    /* +0xc94407 */ __asm { MOV RAX,-0x1c8e967edadcf9a }
    /* +0xc94411 */ __asm { CMP RCX,RAX }
    /* +0xc94414 */ __asm { JZ 0x7fffa54048c1 }
    /* +0xc9441a */ __asm { MOV R10W,0xd041 }
    /* +0xc9441f */ __asm { MOV R11W,0x7f18 }
    /* +0xc94424 */ __asm { MOV RBP,0x7ee45c9f0432f770 }
    /* +0xc9442e */ __asm { MOV R9W,0x24e3 }
    /* +0xc94433 */ __asm { XOR R9D,0x24f3 }
    /* +0xc9443a */ __asm { MOVZX R9D,R9W }
    /* +0xc9443e */ __asm { IMUL EDX,R10D,-0x3fc1 }
    /* +0xc94445 */ __asm { MOVSX R10,DX }
    /* +0xc94449 */ __asm { LEA R13,[0x7fffa47bbb24] }
    /* +0xc94450 */ __asm { ADD RBP,0x5bcd81e5 }
    /* +0xc94457 */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xc9445c */ __asm { MOV EAX,dword ptr [RCX + 0x4976] }
    /* +0xc94462 */ __asm { IMUL ECX,R11D,-0x3b09 }
    /* +0xc94469 */ __asm { MOVZX EDX,CX }
    /* +0xc9446c */ __asm { LEA R8,[RSP + 0x30] }
    /* +0xc94471 */ __asm { SYSCALL }
    /* +0xc94473 */ __asm { CMP R13,RBP }
    /* +0xc94476 */ __asm { JZ 0x7fffa54048ce }
    /* +0xc9447c */ __asm { MOV qword ptr [RSP + 0x30],RCX }
    /* +0xc94481 */ __asm { MOV EAX,dword ptr [R13 + 0x1558] }
    /* +0xc94488 */ __asm { JMP 0x7fffa540483d }
    /* +0xc9448d */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xc94494 */ __asm { MOV RCX,0x0 }
    /* +0xc9449b */ __asm { NOP }
    /* +0xc9449c */ __asm { PXOR XMM0,XMM0 }
    /* +0xc944a0 */ __asm { MOVDQA xmmword ptr [RSP + 0x30],XMM0 }
    /* +0xc944a6 */ __asm { MOV dword ptr [RSP + 0x40],0x2b5c47d4 }
    /* +0xc944ae */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xc944b3 */ __asm { CMP R9D,0x3019a4dc }
    /* +0xc944ba */ __asm { NOP }
    /* +0xc944bb */ __asm { NOP }
    /* +0xc944bc */ __asm { NOP }
    /* +0xc944bd */ __asm { NOP }
    /* +0xc944be */ __asm { NOP }
    /* +0xc944bf */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0xc944c7 */ __asm { MOV dword ptr [RSP + 0x40],0x78216e1e }
    /* +0xc944cf */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xc944d4 */ __asm { MOV R9W,0x43e0 }
    /* +0xc944d9 */ __asm { IMUL R9D,R9D,0x559d }
    /* +0xc944e0 */ __asm { MOVZX EDX,R9W }
    /* +0xc944e4 */ __asm { MOV RAX,qword ptr GS:[RDX] }
    /* +0xc944e8 */ __asm { MOV R11W,0x7f }
    /* +0xc944ed */ __asm { MOVZX EDX,R11W }
    /* +0xc944f1 */ __asm { XOR RDX,0x1f }
    /* +0xc944f5 */ __asm { MOV RAX,qword ptr [RAX + 0x30] }
    /* +0xc944f9 */ __asm { MOV R10,qword ptr GS:[RDX] }
    /* +0xc944fd */ __asm { XOR RAX,qword ptr [R10 + 0x30] }
    /* +0xc94501 */ __asm { MOV R10,0x55b39f018d94835b }
    /* +0xc9450b */ __asm { IMUL R10,RAX }
    /* +0xc9450f */ __asm { MOV RAX,0x22b04aef57e71fb9 }
    /* +0xc94519 */ __asm { ADD RAX,R10 }
    /* +0xc9451c */ __asm { MOV R10,0x61f14fa00d2a0936 }
    /* +0xc94526 */ __asm { CMP RAX,R10 }
    /* +0xc94529 */ __asm { NOP }
    /* +0xc9452a */ __asm { NOP }
    /* +0xc9452b */ __asm { NOP }
    /* +0xc9452c */ __asm { NOP }
    /* +0xc9452d */ __asm { NOP }
    /* +0xc9452e */ __asm { NOP }
    /* +0xc9452f */ __asm { NOP }
    /* +0xc94530 */ __asm { NOP }
    /* +0xc94531 */ __asm { NOP }
    /* +0xc94532 */ __asm { NOP }
    /* +0xc94533 */ __asm { NOP }
    /* +0xc94534 */ __asm { NOP }
    /* +0xc94535 */ __asm { NOP }
    /* +0xc94536 */ __asm { NOP }
    /* +0xc94537 */ __asm { NOP }
    /* +0xc94538 */ __asm { NOP }
    /* +0xc94539 */ __asm { NOP }
    /* +0xc945dc */ __asm { MOV qword ptr [RSP + 0x30],RCX }
    /* +0xc945e1 */ __asm { MOV EAX,dword ptr [R13 + 0x7b24] }
    /* +0xc945e8 */ __asm { JMP 0x7fffa540483d }
    /* +0xc945ed */ __asm { MOVDQA xmmword ptr [RSP + 0x30],XMM0 }
    /* +0xc945f3 */ __asm { MOV dword ptr [RSP + 0x40],0x50610cd0 }
    /* +0xc945fb */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xc94600 */ __asm { MOV R10W,0x4ab9 }
    /* +0xc94605 */ __asm { ADD R10D,0x3d04 }
    /* +0xc9460c */ __asm { XOR R10D,0x87bd }
    /* +0xc94613 */ __asm { AND R9D,0x1 }
    /* +0xc94617 */ __asm { MOVZX R10D,R10W }
    /* +0xc9461b */ __asm { CMP R9D,R10D }
    /* +0xc9461e */ __asm { NOP }
    /* +0xc9461f */ __asm { NOP }
    /* +0xc94620 */ __asm { NOP }
    /* +0xc94621 */ __asm { NOP }
    /* +0xc94622 */ __asm { MOV RCX,0x0 }
    /* +0xc94629 */ __asm { NOP }
    /* +0xc9462a */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xc94631 */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0xc94639 */ __asm { MOV R9W,0xa000 }
    /* +0xc9463e */ __asm { IMUL R9D,R9D,-0x1169 }
    /* +0xc94645 */ __asm { ROL R9W,0x8 }
    /* +0xc9464a */ __asm { MOVZX EDX,R9W }
    /* +0xc9464e */ __asm { MOV RAX,qword ptr GS:[RDX] }
    /* +0xc94652 */ __asm { MOV RAX,qword ptr [RAX + 0x30] }
    /* +0xc94656 */ __asm { MOV RCX,0x3af676b547a85f55 }
    /* +0xc94660 */ __asm { MOV R10,-0x7ef1e20ac14854aa }
    /* +0xc9466a */ __asm { CMP RAX,R10 }
    /* +0xc9466d */ __asm { JZ 0x7fffa5404879 }
    /* +0xc94673 */ __asm { MOV dword ptr [RSP + 0x40],0xca800084 }
    /* +0xc9467b */ __asm { MOV R9D,dword ptr [RSP + 0x40] }
    /* +0xc94680 */ __asm { LEA RCX,[0x7fffa47c027a] }
    /* +0xc94687 */ __asm { MOV RAX,-0xa683a1f8 }
    /* +0xc94691 */ __asm { XOR RAX,RCX }
    /* +0xc94694 */ __asm { MOV R10,-0x37f4b58b9fee65ef }
    /* +0xc9469e */ __asm { CMP RAX,R10 }
    /* +0xc946a1 */ __asm { JZ 0x7fffa54048de }
    /* +0xc946a7 */ __asm { LEA R13,[0x7fffa47be592] }
    /* +0xc946ae */ __asm { MOV RBP,-0x64f804d998ff32b6 }
    /* +0xc946b8 */ __asm { MOV R9W,0x2b55 }
    /* +0xc946bd */ __asm { MOV R10D,0x2b65 }
    /* +0xc946c3 */ __asm { SUB R10D,R9D }
    /* +0xc946c6 */ __asm { MOVZX R9D,R10W }
    /* +0xc946ca */ __asm { ADD RBP,-0x4d1afd52 }
    /* +0xc946d1 */ __asm { MOV qword ptr [RSP + 0x40],R10 }
    /* +0xc946d6 */ __asm { ROL RBP,0x8 }
    /* +0xc946da */ __asm { MOV DX,0x2e57 }
    /* +0xc946de */ __asm { XOR EDX,0xd1a8 }
    /* +0xc946e4 */ __asm { MOVSX R10,DX }
    /* +0xc946e8 */ __asm { MOV R11W,0x30c8 }
    /* +0xc946ed */ __asm { XOR R11D,0x30e0 }
    /* +0xc946f4 */ __asm { MOVZX EDX,R11W }
    /* +0xc946f8 */ __asm { MOV EAX,dword ptr [RCX + -0x3db2] }
    /* +0xc946fe */ __asm { LEA R8,[RSP + 0x30] }
    /* +0xc94703 */ __asm { SYSCALL }
    /* +0xc94705 */ __asm { CMP R13,RBP }
    /* +0xc94708 */ __asm { NOP }
    /* +0xc94709 */ __asm { NOP }
    /* +0xc9470a */ __asm { NOP }
    /* +0xc9470b */ __asm { NOP }
    /* +0xc9470c */ __asm { NOP }
    /* +0xc9470d */ __asm { NOP }
    /* +0xc9470e */ __asm { NOP }
    /* +0xc9470f */ __asm { NOP }
    /* +0xc94710 */ __asm { NOP }
    /* +0xc94711 */ __asm { NOP }
    /* +0xc94712 */ __asm { NOP }
    /* +0xc94713 */ __asm { NOP }
    /* +0xc94714 */ __asm { MOV RCX,0x0 }
    /* +0xc9471b */ __asm { NOP }
    /* +0xc9471c */ __asm { LEA R10,[0x7fffa4770000] }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtCreateSectionEx  |  RVA: 0xcb4c70  |  Size: 4575 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtCreateSectionEx(void) {
    /* +0xcb4c70 */ __asm { PUSH RDI }
    /* +0xcb4c71 */ __asm { PUSH R13 }
    /* +0xcb4c73 */ __asm { PUSH RBP }
    /* +0xcb4c74 */ __asm { PUSH R14 }
    /* +0xcb4c76 */ __asm { PUSH RBX }
    /* +0xcb4c77 */ __asm { PUSH R15 }
    /* +0xcb4c79 */ __asm { PUSH R12 }
    /* +0xcb4c7b */ __asm { PUSH RSI }
    /* +0xcb4c7c */ __asm { SUB RSP,0x88 }
    /* +0xcb4c83 */ __asm { MOV R13,R9 }
    /* +0xcb4c86 */ __asm { MOV RSI,R8 }
    /* +0xcb4c89 */ __asm { MOV EBP,EDX }
    /* +0xcb4c8b */ __asm { MOV R12,RCX }
    /* +0xcb4c8e */ __asm { MOV R14,qword ptr [RSP + 0x100] }
    /* +0xcb4c96 */ __asm { MOV R8D,dword ptr [RSP + 0xf8] }
    /* +0xcb4c9e */ __asm { MOV R11D,0x2f2ff341 }
    /* +0xcb4ca4 */ __asm { ADD R11D,0x17a99078 }
    /* +0xcb4cab */ __asm { MOV R10D,0xc2dbb509 }
    /* +0xcb4cb1 */ __asm { CMP R11,R10 }
    /* +0xcb4cb4 */ __asm { JNZ 0x7fffa5424ccd }
    /* +0xcb4cb6 */ __asm { MOV R15D,0xd8f00f2d }
    /* +0xcb4cbc */ __asm { XOR R15D,0xd5918c09 }
    /* +0xcb4cc3 */ __asm { MOV dword ptr [RSP + 0x7c],0x1f7bab24 }
    /* +0xcb4ccb */ __asm { JMP 0x7fffa5424cf4 }
    /* +0xcb4ccd */ __asm { MOV R11D,0xc9d09adc }
    /* +0xcb4cd3 */ __asm { MOV EAX,0x89a87f90 }
    /* +0xcb4cd8 */ __asm { IMUL EAX,EAX,0x29a68607 }
    /* +0xcb4cde */ __asm { MOVSXD R15,EAX }
    /* +0xcb4ce1 */ __asm { IMUL R11D,R11D,0x2201265d }
    /* +0xcb4ce8 */ __asm { ADD R11D,0x4dac138 }
    /* +0xcb4cef */ __asm { MOV dword ptr [RSP + 0x7c],R11D }
    /* +0xcb4cf4 */ __asm { MOV R11D,dword ptr [RSP + 0x7c] }
    /* +0xcb4cf9 */ __asm { MOV R11D,0x7c772179 }
    /* +0xcb4cff */ __asm { IMUL R11D,R11D,-0xf306c09 }
    /* +0xcb4d06 */ __asm { NOT R11D }
    /* +0xcb4d09 */ __asm { MOV EDI,0x27810d5b }
    /* +0xcb4d0e */ __asm { ADD EDI,0x4cffece9 }
    /* +0xcb4d14 */ __asm { MOV EAX,R8D }
    /* +0xcb4d17 */ __asm { XOR EAX,0xe54d3d4e }
    /* +0xcb4d1c */ __asm { MOV EBX,R15D }
    /* +0xcb4d1f */ __asm { OR EBX,0x1 }
    /* +0xcb4d22 */ __asm { IMUL EDI,EBX }
    /* +0xcb4d25 */ __asm { LEA R10,[0x7fffa53fcd40] }
    /* +0xcb4d2c */ __asm { ADD EDI,0x614ec2c9 }
    /* +0xcb4d32 */ __asm { MOVSXD RCX,R11D }
    /* +0xcb4d35 */ __asm { ROL EAX,0x12 }
    /* +0xcb4d38 */ __asm { MOVD XMM2,EAX }
    /* +0xcb4d3c */ __asm { PSHUFD XMM4,XMM2,0x0 }
    /* +0xcb4d41 */ __asm { PCMPEQD XMM2,XMM2 }
    /* +0xcb4d45 */ __asm { PXOR XMM2,XMM4 }
    /* +0xcb4d49 */ __asm { PADDD XMM2,xmmword ptr [0x7fffa56bc4e0] }
    /* +0xcb4d51 */ __asm { ADD RCX,R10 }
    /* +0xcb4d54 */ __asm { MOV R10,R14 }
    /* +0xcb4d57 */ __asm { IMUL R10,R10,0x1c54cdef }
    /* +0xcb4d5e */ __asm { ROL R10,0x19 }
    /* +0xcb4d62 */ __asm { MOVQ XMM4,R10 }
    /* +0xcb4d67 */ __asm { PSHUFD XMM5,XMM4,0x44 }
    /* +0xcb4d6c */ __asm { MOV EAX,0x97687349 }
    /* +0xcb4d71 */ __asm { CALL RCX }
    /* +0xcb4d73 */ __asm { IMUL R10D,EDI }
    /* +0xcb4d77 */ __asm { MOV R11D,R10D }
    /* +0xcb4d7a */ __asm { ROL R11D,0x1b }
    /* +0xcb4d7e */ __asm { MOV EAX,R10D }
    /* +0xcb4d81 */ __asm { ROL EAX,0x10 }
    /* +0xcb4d84 */ __asm { XOR EAX,R11D }
    /* +0xcb4d87 */ __asm { XOR EAX,R10D }
    /* +0xcb4d8a */ __asm { ROL EAX,0xa }
    /* +0xcb4d8d */ __asm { TEST EAX,EAX }
    /* +0xcb4d8f */ __asm { JS 0x7fffa5425a90 }
    /* +0xcb4d95 */ __asm { RDTSC }
    /* +0xcb4d97 */ __asm { SHL RDX,0x20 }
    /* +0xcb4d9b */ __asm { OR RDX,RAX }
    /* +0xcb4d9e */ __asm { MOV R10,-0x30ebf64fafbc6efb }
    /* +0xcb4da8 */ __asm { IMUL R10,RDX }
    /* +0xcb4dac */ __asm { MOV R8,-0x22b18422c4a9c65e }
    /* +0xcb4db6 */ __asm { ADD R8,R10 }
    /* +0xcb4db9 */ __asm { MOV RCX,R8 }
    /* +0xcb4dbc */ __asm { SHR RCX,0x3b }
    /* +0xcb4dc0 */ __asm { MOV R11,R8 }
    /* +0xcb4dc3 */ __asm { SHR R11,0x1b }
    /* +0xcb4dc7 */ __asm { SHR R8,0x2d }
    /* +0xcb4dcb */ __asm { XOR R11D,R8D }
    /* +0xcb4dce */ __asm { ROR R11D,CL }
    /* +0xcb4dd1 */ __asm { MOV RDI,qword ptr [RSP + 0x108] }
    /* +0xcb4dd9 */ __asm { MOV R9D,dword ptr [RSP + 0xf0] }
    /* +0xcb4de1 */ __asm { AND R11D,0x3 }
    /* +0xcb4de5 */ __asm { CMP R11D,0x2 }
    /* +0xcb4de9 */ __asm { JC 0x7fffa5425073 }
    /* +0xcb4def */ __asm { CMP R11D,0x3 }
    /* +0xcb4df3 */ __asm { JZ 0x7fffa54255dc }
    /* +0xcb4df9 */ __asm { MOV R10D,0xa60ead05 }
    /* +0xcb4dff */ __asm { MOV RCX,-0x7d4b36b2e6da54f4 }
    /* +0xcb4e09 */ __asm { CMP R10,RCX }
    /* +0xcb4e0c */ __asm { NOP }
    /* +0xcb4e0d */ __asm { NOP }
    /* +0xcb4e0e */ __asm { NOP }
    /* +0xcb4e0f */ __asm { NOP }
    /* +0xcb4e10 */ __asm { NOP }
    /* +0xcb4e11 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xcb4e18 */ __asm { MOV RDX,0x0 }
    /* +0xcb4e1f */ __asm { MOV R11D,dword ptr [R10 + -0x2610a945] }
    /* +0xcb4e26 */ __asm { RDTSC }
    /* +0xcb4e28 */ __asm { SHL RDX,0x20 }
    /* +0xcb4e2c */ __asm { OR RDX,RAX }
    /* +0xcb4e2f */ __asm { CMP R11D,0xd }
    /* +0xcb4e33 */ __asm { JNC 0x7fffa542567a }
    /* +0xcb4e39 */ __asm { MOV R10,-0x5b596a0ee0e87373 }
    /* +0xcb4e43 */ __asm { IMUL RDX,R10 }
    /* +0xcb4e47 */ __asm { MOV R8,-0x2dba901812c7596a }
    /* +0xcb4e51 */ __asm { ADD R8,RDX }
    /* +0xcb4e54 */ __asm { MOV RCX,R8 }
    /* +0xcb4e57 */ __asm { SHR RCX,0x3b }
    /* +0xcb4e5b */ __asm { MOV R11,R8 }
    /* +0xcb4e5e */ __asm { SHR R11,0x2d }
    /* +0xcb4e62 */ __asm { SHR R8,0x1b }
    /* +0xcb4e66 */ __asm { XOR R11D,R8D }
    /* +0xcb4e69 */ __asm { ROR R11D,CL }
    /* +0xcb4e6c */ __asm { MOV AX,0xdc20 }
    /* +0xcb4e70 */ __asm { XOR EAX,R15D }
    /* +0xcb4e73 */ __asm { IMUL EAX,EAX,0x4c4f }
    /* +0xcb4e79 */ __asm { MOVZX R8D,AX }
    /* +0xcb4e7d */ __asm { MOV R10,qword ptr GS:[R8] }
    /* +0xcb4e81 */ __asm { MOV R8D,0xdbb0baf }
    /* +0xcb4e87 */ __asm { MOV R10,qword ptr [R10 + 0xc98] }
    /* +0xcb4e8e */ __asm { MOV RDX,-0x74695e80141ecf75 }
    /* +0xcb4e98 */ __asm { ADD R8D,0xf4563ae2 }
    /* +0xcb4e9f */ __asm { ROL R8D,0x19 }
    /* +0xcb4ea3 */ __asm { MOV ECX,R15D }
    /* +0xcb4ea6 */ __asm { ROR R8D,CL }
    /* +0xcb4ea9 */ __asm { AND RDX,R10 }
    /* +0xcb4eac */ __asm { MOV R10,-0x18fadaa90db3da18 }
    /* +0xcb4eb6 */ __asm { ADD R10,R15 }
    /* +0xcb4eb9 */ __asm { NOT R10 }
    /* +0xcb4ebc */ __asm { XOR R8,RDX }
    /* +0xcb4ebf */ __asm { NOT R8 }
    /* +0xcb4ec2 */ __asm { IMUL R8,R10 }
    /* +0xcb4ec6 */ __asm { MOV R10,0x736e204c6906b8b8 }
    /* +0xcb4ed0 */ __asm { CMP R8,R10 }
    /* +0xcb4ed3 */ __asm { NOP }
    /* +0xcb4ed4 */ __asm { NOP }
    /* +0xcb4ed5 */ __asm { NOP }
    /* +0xcb4ed6 */ __asm { NOP }
    /* +0xcb4ed7 */ __asm { NOP }
    /* +0xcb4ed8 */ __asm { NOP }
    /* +0xcb4ed9 */ __asm { NOP }
    /* +0xcb4eda */ __asm { NOP }
    /* +0xcb4edb */ __asm { NOP }
    /* +0xcb4edc */ __asm { NOP }
    /* +0xcb4edd */ __asm { MOV EAX,0xb2703489 }
    /* +0xcb4ee2 */ __asm { XOR EAX,0xcc408d53 }
    /* +0xcb4ee7 */ __asm { IMUL EAX,EBX }
    /* +0xcb4eea */ __asm { CMP R11D,EAX }
    /* +0xcb4eed */ __asm { JNC 0x7fffa5425048 }
    /* +0xcb4ef3 */ __asm { MOV R11D,0xca9fb212 }
    /* +0xcb4ef9 */ __asm { IMUL R11D,R11D,-0x1623c8ab }
    /* +0xcb4f00 */ __asm { MOV ECX,R15D }
    /* +0xcb4f03 */ __asm { ROL R11D,CL }
    /* +0xcb4f06 */ __asm { MOV dword ptr [RSP + 0x60],R11D }
    /* +0xcb4f0b */ __asm { MOV R11D,dword ptr [RSP + 0x60] }
    /* +0xcb4f10 */ __asm { AND R11D,0x1 }
    /* +0xcb4f14 */ __asm { MOV AX,0x69b0 }
    /* +0xcb4f18 */ __asm { IMUL EAX,EAX,0x6edd }
    /* +0xcb4f1e */ __asm { SUB EAX,R15D }
    /* +0xcb4f21 */ __asm { MOVZX EAX,AX }
    /* +0xcb4f24 */ __asm { CMP R11D,EAX }
    /* +0xcb4f27 */ __asm { JZ 0x7fffa5425e01 }
    /* +0xcb4f2d */ __asm { PXOR XMM2,XMM2 }
    /* +0xcb4f31 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM2 }
    /* +0xcb4f37 */ __asm { MOV dword ptr [RSP + 0x80],0xab4be1a4 }
    /* +0xcb4f42 */ __asm { MOV R11D,dword ptr [RSP + 0x80] }
    /* +0xcb4f4a */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0xcb4f52 */ __asm { PUSHFQ }
    /* +0xcb4f53 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xcb4f5b */ __asm { POPFQ }
    /* +0xcb4f5c */ __asm { MOV dword ptr [RSP + 0x80],0xfefecfc8 }
    /* +0xcb4f67 */ __asm { MOV R11D,dword ptr [RSP + 0x80] }
    /* +0xcb4f6f */ __asm { CMP R11D,0x31914977 }
    /* +0xcb4f76 */ __asm { JA 0x7fffa5424f7a }
    /* +0xcb4f78 */ __asm { MOV DH,0xef }
    /* +0xcb4f7a */ __asm { MOV RBX,RDI }
    /* +0xcb4f7d */ __asm { MOV R10,qword ptr [RSP + 0xc8] }
    /* +0xcb4f85 */ __asm { MOVQ XMM2,qword ptr [R10 + -0x7f0] }
    /* +0xcb4f8e */ __asm { ADD R10,-0xe30 }
    /* +0xcb4f95 */ __asm { MOVQ XMM4,R10 }
    /* +0xcb4f9a */ __asm { PAND XMM4,XMM2 }
    /* +0xcb4f9e */ __asm { MOVQ R10,XMM4 }
    /* +0xcb4fa3 */ __asm { MOV RCX,-0xdd66d0a9 }
    /* +0xcb4fad */ __asm { ADD RCX,R10 }
    /* +0xcb4fb0 */ __asm { MOV R10,0x4e8996127582772e }
    /* +0xcb4fba */ __asm { CMP RCX,R10 }
    /* +0xcb4fbd */ __asm { NOP }
    /* +0xcb4fbe */ __asm { NOP }
    /* +0xcb4fbf */ __asm { NOP }
    /* +0xcb4fc0 */ __asm { NOP }
    /* +0xcb4fc1 */ __asm { NOP }
    /* +0xcb4fc2 */ __asm { MOV EDI,R9D }
    /* +0xcb4fc5 */ __asm { LEA R10,[0x7fffa4784b86] }
    /* +0xcb4fcc */ __asm { MOV RCX,0x7d470de0b8bc2b74 }
    /* +0xcb4fd6 */ __asm { CMP R10,RCX }
    /* +0xcb4fd9 */ __asm { NOP }
    /* +0xcb4fda */ __asm { NOP }
    /* +0xcb4fdb */ __asm { NOP }
    /* +0xcb4fdc */ __asm { NOP }
    /* +0xcb4fdd */ __asm { NOP }
    /* +0xcb4fde */ __asm { MOV R11W,0x4e28 }
    /* +0xcb4fe3 */ __asm { MOV R8W,0xbb85 }
    /* +0xcb4fe8 */ __asm { XOR R11D,R15D }
    /* +0xcb4feb */ __asm { MOVD XMM2,R15D }
    /* +0xcb4ff0 */ __asm { MOV qword ptr [RSP + 0x80],RDX }
    /* +0xcb4ff8 */ __asm { MOV EAX,dword ptr [R10 + 0x306] }
    /* +0xcb4fff */ __asm { MOVD XMM4,R8D }
    /* +0xcb5004 */ __asm { MOV R10W,0x230f }
    /* +0xcb5009 */ __asm { XOR R10D,R15D }
    /* +0xcb500c */ __asm { ROL R10W,0x8 }
    /* +0xcb5011 */ __asm { MOVSX R10,R10W }
    /* +0xcb5015 */ __asm { PXOR XMM4,XMM2 }
    /* +0xcb5019 */ __asm { MOVD R8D,XMM4 }
    /* +0xcb501e */ __asm { IMUL R8D,R8D,0x228f }
    /* +0xcb5025 */ __asm { ADD R8D,0xffffabcd }
    /* +0xcb502c */ __asm { MOVZX EDX,R8W }
    /* +0xcb5030 */ __asm { ADD R11D,0x6d38 }
    /* +0xcb5037 */ __asm { MOVZX R9D,R11W }
    /* +0xcb503b */ __asm { LEA R8,[RSP + 0x60] }
    /* +0xcb5040 */ __asm { SYSCALL }
    /* +0xcb5042 */ __asm { MOV R9D,EDI }
    /* +0xcb5045 */ __asm { MOV RDI,RBX }
    /* +0xcb5048 */ __asm { LEA R10,[0x7fffa478ac54] }
    /* +0xcb504f */ __asm { MOV RCX,0x33aba732dc4f5f43 }
    /* +0xcb5059 */ __asm { CMP R10,RCX }
    /* +0xcb505c */ __asm { JZ 0x7fffa5425dc8 }
    /* +0xcb5062 */ __asm { MOV qword ptr [RSP + 0x60],RDX }
    /* +0xcb5067 */ __asm { MOV EAX,dword ptr [R10 + -0x65ec] }
    /* +0xcb506e */ __asm { JMP 0x7fffa5425a5a }
    /* +0xcb5073 */ __asm { MOV EAX,0x87c8970a }
    /* +0xcb5078 */ __asm { IMUL EAX,EAX,0x552778af }
    /* +0xcb507e */ __asm { ADD EAX,0x3594f712 }
    /* +0xcb5083 */ __asm { MOV ECX,R15D }
    /* +0xcb5086 */ __asm { ROR EAX,CL }
    /* +0xcb5088 */ __asm { MOVSXD R10,EAX }
    /* +0xcb508b */ __asm { MOV R8D,0xadef386f }
    /* +0xcb5091 */ __asm { XOR R8D,0xa8040d61 }
    /* +0xcb5098 */ __asm { IMUL R8D,EBX }
    /* +0xcb509c */ __asm { CMP R10,R8 }
    /* +0xcb509f */ __asm { JC 0x7fffa54253af }
    /* +0xcb50a5 */ __asm { CMP R11D,0x1 }
    /* +0xcb50a9 */ __asm { JZ 0x7fffa54253af }
    /* +0xcb50af */ __asm { MOV R10,0x60029f715dd389d2 }
    /* +0xcb50b9 */ __asm { RDTSC }
    /* +0xcb50bb */ __asm { SHL RDX,0x20 }
    /* +0xcb50bf */ __asm { OR RDX,RAX }
    /* +0xcb50c2 */ __asm { MOV RCX,0x7facc0f7a00541bd }
    /* +0xcb50cc */ __asm { IMUL RCX,RDX }
    /* +0xcb50d0 */ __asm { MOV R11W,0x8f83 }
    /* +0xcb50d5 */ __asm { ADD R11D,0xffff88e3 }
    /* +0xcb50dc */ __asm { ROL R11W,0x3 }
    /* +0xcb50e1 */ __asm { MOVQ XMM2,RCX }
    /* +0xcb50e6 */ __asm { MOV EAX,R15D }
    /* +0xcb50e9 */ __asm { MOV R8D,0x9250d8cd }
    /* +0xcb50ef */ __asm { IMUL R8,R10 }
    /* +0xcb50f3 */ __asm { MOV ECX,R15D }
    /* +0xcb50f6 */ __asm { ROL R8,CL }
    /* +0xcb50f9 */ __asm { OR EAX,0x1 }
    /* +0xcb50fc */ __asm { IMUL EAX,R11D }
    /* +0xcb5100 */ __asm { MOVQ XMM4,R8 }
    /* +0xcb5105 */ __asm { PADDQ XMM4,XMM2 }
    /* +0xcb5109 */ __asm { MOVZX R8D,AX }
    /* +0xcb510d */ __asm { MOVQ R11,XMM4 }
    /* +0xcb5112 */ __asm { MOV RDX,R11 }
    /* +0xcb5115 */ __asm { SHR RDX,0x2d }
    /* +0xcb5119 */ __asm { MOV RCX,R11 }
    /* +0xcb511c */ __asm { SHR RCX,0x3b }
    /* +0xcb5120 */ __asm { SHR R11,0x1b }
    /* +0xcb5124 */ __asm { XOR R11D,EDX }
    /* +0xcb5127 */ __asm { ROR R11D,CL }
    /* +0xcb512a */ __asm { MOV R10,qword ptr GS:[R8] }
    /* +0xcb512e */ __asm { MOV RCX,0x33f145fdd027b7f1 }
    /* +0xcb5138 */ __asm { CMP qword ptr [R10 + 0x60],RCX }
    /* +0xcb513c */ __asm { NOP }
    /* +0xcb513d */ __asm { NOP }
    /* +0xcb513e */ __asm { NOP }
    /* +0xcb513f */ __asm { NOP }
    /* +0xcb5140 */ __asm { NOP }
    /* +0xcb5141 */ __asm { CMP R11D,0x10dd6a6 }
    /* +0xcb5148 */ __asm { JA 0x7fffa5425306 }
    /* +0xcb514e */ __asm { MOV dword ptr [RSP + 0x60],0x66081b6d }
    /* +0xcb5156 */ __asm { MOV R11D,dword ptr [RSP + 0x60] }
    /* +0xcb515b */ __asm { TEST R11B,0x1 }
    /* +0xcb515f */ __asm { NOP }
    /* +0xcb5160 */ __asm { NOP }
    /* +0xcb5161 */ __asm { NOP }
    /* +0xcb5162 */ __asm { NOP }
    /* +0xcb5163 */ __asm { NOP }
    /* +0xcb5164 */ __asm { NOP }
    /* +0xcb5165 */ __asm { NOP }
    /* +0xcb5166 */ __asm { NOP }
    /* +0xcb5167 */ __asm { NOP }
    /* +0xcb5168 */ __asm { NOP }
    /* +0xcb5169 */ __asm { NOP }
    /* +0xcb516a */ __asm { NOP }
    /* +0xcb516b */ __asm { NOP }
    /* +0xcb516c */ __asm { MOV EDI,R9D }
    /* +0xcb516f */ __asm { MOV R10D,0xac822648 }
    /* +0xcb5175 */ __asm { MOV RCX,-0x51ebe3fb76fffbdb }
    /* +0xcb517f */ __asm { CMP R10,RCX }
    /* +0xcb5182 */ __asm { NOP }
    /* +0xcb5183 */ __asm { NOP }
    /* +0xcb5184 */ __asm { NOP }
    /* +0xcb5185 */ __asm { NOP }
    /* +0xcb5186 */ __asm { NOP }
    /* +0xcb5187 */ __asm { MOV R11D,0xf295fd9c }
    /* +0xcb518d */ __asm { XOR R11D,0x8f8a0c64 }
    /* +0xcb5194 */ __asm { SUB R11D,R15D }
    /* +0xcb5197 */ __asm { ROL R11D,0x4 }
    /* +0xcb519b */ __asm { CMP dword ptr [R10 + -0x2c842288],0xd }
    /* +0xcb51a3 */ __asm { SETNC AL }
    /* +0xcb51a6 */ __asm { MOVD XMM2,EBX }
    /* +0xcb51aa */ __asm { MOV R10D,0x20a8aea3 }
    /* +0xcb51b0 */ __asm { ADD R10D,0xe0b890be }
    /* +0xcb51b7 */ __asm { MOVD XMM4,R10D }
    /* +0xcb51bc */ __asm { PMULUDQ XMM4,XMM2 }
    /* +0xcb51c0 */ __asm { MOVD R8D,XMM4 }
    /* +0xcb51c5 */ __asm { CMP R8,R11 }
    /* +0xcb51c8 */ __asm { SETG R9B }
    /* +0xcb51cc */ __asm { CMP R9B,AL }
    /* +0xcb51cf */ __asm { MOV R9D,EDI }
    /* +0xcb51d2 */ __asm { JZ 0x7fffa5425306 }
    /* +0xcb51d8 */ __asm { PXOR XMM2,XMM2 }
    /* +0xcb51dc */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM2 }
    /* +0xcb51e2 */ __asm { MOV dword ptr [RSP + 0x80],0xd4e3df44 }
    /* +0xcb51ed */ __asm { MOV R11D,dword ptr [RSP + 0x80] }
    /* +0xcb51f5 */ __asm { CMP R11D,0x79227aca }
    /* +0xcb51fc */ __asm { NOP }
    /* +0xcb51fd */ __asm { NOP }
    /* +0xcb51fe */ __asm { NOP }
    /* +0xcb51ff */ __asm { NOP }
    /* +0xcb5200 */ __asm { NOP }
    /* +0xcb5201 */ __asm { PUSHFQ }
    /* +0xcb5202 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xcb520a */ __asm { POPFQ }
    /* +0xcb520b */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0xcb5213 */ __asm { MOV dword ptr [RSP + 0x80],0x8b6dcf8 }
    /* +0xcb521e */ __asm { MOV R11D,dword ptr [RSP + 0x80] }
    /* +0xcb5226 */ __asm { MOV R11W,0x2880 }
    /* +0xcb522b */ __asm { MOV EAX,R15D }
    /* +0xcb522e */ __asm { XOR EAX,R11D }
    /* +0xcb5231 */ __asm { IMUL R11D,EAX,0x1f65 }
    /* +0xcb5238 */ __asm { MOVZX R11D,R11W }
    /* +0xcb523c */ __asm { MOV R10,qword ptr GS:[R11] }
    /* +0xcb5240 */ __asm { MOV RCX,0xe6906acb1ce562b }
    /* +0xcb524a */ __asm { CMP R10,RCX }
    /* +0xcb524d */ __asm { JNZ 0x7fffa5425254 }
    /* +0xcb524f */ __asm { PUSH RSI }
    /* +0xcb5250 */ __asm { ENTER 0x7eea,0x1 }
    /* +0xcb5254 */ __asm { MOV R10,-0xa9f738a37d4681d }
    /* +0xcb525e */ __asm { MOV R11,R15 }
    /* +0xcb5261 */ __asm { OR R11,0x1 }
    /* +0xcb5265 */ __asm { XOR R10,0x436db09c }
    /* +0xcb526c */ __asm { MOVQ XMM2,R10 }
    /* +0xcb5271 */ __asm { MOVQ XMM4,R11 }
    /* +0xcb5276 */ __asm { MOVDQA XMM5,XMM4 }
    /* +0xcb527a */ __asm { PSRLQ XMM5,0x20 }
    /* +0xcb527f */ __asm { PMULUDQ XMM5,XMM2 }
    /* +0xcb5283 */ __asm { MOVDQA XMM0,XMM2 }
    /* +0xcb5287 */ __asm { PSRLQ XMM0,0x20 }
    /* +0xcb528c */ __asm { PMULUDQ XMM0,XMM4 }
    /* +0xcb5290 */ __asm { PADDQ XMM0,XMM5 }
    /* +0xcb5294 */ __asm { PSLLQ XMM0,0x20 }
    /* +0xcb5299 */ __asm { PMULUDQ XMM4,XMM2 }
    /* +0xcb529d */ __asm { PADDQ XMM4,XMM0 }
    /* +0xcb52a1 */ __asm { MOVQ RCX,XMM4 }
    /* +0xcb52a6 */ __asm { LEA R10,[0x7fffa47ba214] }
    /* +0xcb52ad */ __asm { CMP R10,RCX }
    /* +0xcb52b0 */ __asm { NOP }
    /* +0xcb52b1 */ __asm { NOP }
    /* +0xcb52b2 */ __asm { NOP }
    /* +0xcb52b3 */ __asm { NOP }
    /* +0xcb52b4 */ __asm { NOP }
    /* +0xcb52b5 */ __asm { MOV R11W,0x98c8 }
    /* +0xcb52ba */ __asm { MOV AX,0x4310 }
    /* +0xcb52be */ __asm { MOV R8D,0xdc5b25af }
    /* +0xcb52c4 */ __asm { IMUL R8D,R8D,0x7a02aeb1 }
    /* +0xcb52cb */ __asm { ADD EAX,R15D }
    /* +0xcb52ce */ __asm { ROL AX,0x7 }
    /* +0xcb52d2 */ __asm { MOVZX R9D,AX }
    /* +0xcb52d6 */ __asm { MOV qword ptr [RSP + 0x80],RDX }
    /* +0xcb52de */ __asm { MOV EAX,dword ptr [R10 + 0x2dc4] }
    /* +0xcb52e5 */ __asm { MOV ECX,R15D }
    /* +0xcb52e8 */ __asm { ROR R8D,CL }
    /* +0xcb52eb */ __asm { MOVSXD R10,R8D }
    /* +0xcb52ee */ __asm { ADD R11D,0x4410 }
    /* +0xcb52f5 */ __asm { XOR R11D,R15D }
    /* +0xcb52f8 */ __asm { MOVZX EDX,R11W }
    /* +0xcb52fc */ __asm { LEA R8,[RSP + 0x60] }
    /* +0xcb5301 */ __asm { SYSCALL }
    /* +0xcb5303 */ __asm { MOV R9D,EDI }
    /* +0xcb5306 */ __asm { MOV R10,0x7b3864458c83316d }
    /* +0xcb5310 */ __asm { MOV ECX,0xa4efc31f }
    /* +0xcb5315 */ __asm { IMUL RCX,R10 }
    /* +0xcb5319 */ __asm { XOR R15,RCX }
    /* +0xcb531c */ __asm { LEA R10,[0x7fffa4781a17] }
    /* +0xcb5323 */ __asm { MOV RDX,R10 }
    /* +0xcb5326 */ __asm { ROL RDX,0x2b }
    /* +0xcb532a */ __asm { MOVQ XMM2,R15 }
    /* +0xcb532f */ __asm { MOVQ XMM4,RDX }
    /* +0xcb5334 */ __asm { MOVDQA XMM5,XMM4 }
    /* +0xcb5338 */ __asm { PSRLQ XMM5,0x20 }
    /* +0xcb533d */ __asm { PMULUDQ XMM5,XMM2 }
    /* +0xcb5341 */ __asm { MOVDQA XMM0,XMM2 }
    /* +0xcb5345 */ __asm { PSRLQ XMM0,0x20 }
    /* +0xcb534a */ __asm { PMULUDQ XMM0,XMM4 }
    /* +0xcb534e */ __asm { PADDQ XMM0,XMM5 }
    /* +0xcb5352 */ __asm { PSLLQ XMM0,0x20 }
    /* +0xcb5357 */ __asm { PMULUDQ XMM2,XMM4 }
    /* +0xcb535b */ __asm { PADDQ XMM2,XMM0 }
    /* +0xcb535f */ __asm { MOVQ RCX,XMM2 }
    /* +0xcb5364 */ __asm { MOV RAX,-0x59a84e3d63d9a1e7 }
    /* +0xcb536e */ __asm { CMP RCX,RAX }
    /* +0xcb5371 */ __asm { NOP }
    /* +0xcb5372 */ __asm { NOP }
    /* +0xcb5373 */ __asm { NOP }
    /* +0xcb5374 */ __asm { NOP }
    /* +0xcb5375 */ __asm { NOP }
    /* +0xcb5376 */ __asm { NOP }
    /* +0xcb5377 */ __asm { NOP }
    /* +0xcb5378 */ __asm { NOP }
    /* +0xcb5379 */ __asm { NOP }
    /* +0xcb537a */ __asm { NOP }
    /* +0xcb537b */ __asm { NOP }
    /* +0xcb537c */ __asm { NOP }
    /* +0xcb537d */ __asm { NOP }
    /* +0xcb537e */ __asm { NOP }
    /* +0xcb537f */ __asm { NOP }
    /* +0xcb5380 */ __asm { NOP }
    /* +0xcb5381 */ __asm { NOP }
    /* +0xcb53af */ __asm { LEA R10,[0x7fffa47c04c0] }
    /* +0xcb53b6 */ __asm { MOV RCX,0x611ff90e3709ce30 }
    /* +0xcb53c0 */ __asm { CMP R10,RCX }
    /* +0xcb53c3 */ __asm { JZ 0x7fffa5425d96 }
    /* +0xcb53c9 */ __asm { MOVD XMM2,R15D }
    /* +0xcb53ce */ __asm { MOV R11D,0x37320f7 }
    /* +0xcb53d4 */ __asm { MOVD XMM4,R11D }
    /* +0xcb53d9 */ __asm { PSUBD XMM4,XMM2 }
    /* +0xcb53dd */ __asm { MOVD R11D,XMM4 }
    /* +0xcb53e2 */ __asm { ROL R11D,0x12 }
    /* +0xcb53e6 */ __asm { MOVZX R9D,uint8_t ptr [R10 + -0x3e33] }
    /* +0xcb53ee */ __asm { MOVZX EAX,uint8_t ptr [R10 + R9*0x4 + -0x3e23] }
    /* +0xcb53f7 */ __asm { ROL AL,0x4 }
    /* +0xcb53fa */ __asm { MOV uint8_t ptr [RSP + 0x60],AL }
    /* +0xcb53fe */ __asm { MOVZX EAX,uint8_t ptr [R10 + R9*0x4 + -0x3e22] }
    /* +0xcb5407 */ __asm { ROL AL,0x4 }
    /* +0xcb540a */ __asm { MOV uint8_t ptr [RSP + 0x61],AL }
    /* +0xcb540e */ __asm { MOVZX EAX,uint8_t ptr [R10 + R9*0x4 + -0x3e21] }
    /* +0xcb5417 */ __asm { ROL AL,0x4 }
    /* +0xcb541a */ __asm { MOV uint8_t ptr [RSP + 0x62],AL }
    /* +0xcb541e */ __asm { MOVZX EAX,uint8_t ptr [R10 + R9*0x4 + -0x3e20] }
    /* +0xcb5427 */ __asm { ROL AL,0x4 }
    /* +0xcb542a */ __asm { MOV uint8_t ptr [RSP + 0x63],AL }
    /* +0xcb542e */ __asm { MOV R10D,0x65e8ce72 }
    /* +0xcb5434 */ __asm { XOR R10D,dword ptr [RSP + 0x60] }
    /* +0xcb5439 */ __asm { XOR R11,0x6fe316dd }
    /* +0xcb5440 */ __asm { MOV R11D,dword ptr [R11] }
    /* +0xcb5443 */ __asm { RDTSC }
    /* +0xcb5445 */ __asm { SHL RDX,0x20 }
    /* +0xcb5449 */ __asm { OR RDX,RAX }
    /* +0xcb544c */ __asm { BT R10D,R11D }
    /* +0xcb5450 */ __asm { JNC 0x7fffa5425aa4 }
    /* +0xcb5456 */ __asm { MOV R11D,0xb2cfb5e7 }
    /* +0xcb545c */ __asm { ADD R11D,0xc0000090 }
    /* +0xcb5463 */ __asm { MOV EAX,0x358fce6a }
    /* +0xcb5468 */ __asm { MOV ECX,R15D }
    /* +0xcb546b */ __asm { ROL R11D,CL }
    /* +0xcb546e */ __asm { MOV R8D,0x3dc2ced7 }
    /* +0xcb5474 */ __asm { ROL R11D,0x15 }
    /* +0xcb5478 */ __asm { MOV R9,R15 }
    /* +0xcb547b */ __asm { OR R9,0x1 }
    /* +0xcb547f */ __asm { MOV R10,-0x5a46117eacb056b3 }
    /* +0xcb5489 */ __asm { IMUL RDX,R10 }
    /* +0xcb548d */ __asm { NOT R8D }
    /* +0xcb5490 */ __asm { ADD R8D,R15D }
    /* +0xcb5493 */ __asm { MOV R10,qword ptr [R8] }
    /* +0xcb5496 */ __asm { MOV RCX,-0x5c0dfe66c5d18ce0 }
    /* +0xcb54a0 */ __asm { MOVQ XMM2,R9 }
    /* +0xcb54a5 */ __asm { MOV R9D,0x5e43e2e9 }
    /* +0xcb54ab */ __asm { MOV R8D,0xe01771a1 }
    /* +0xcb54b1 */ __asm { ADD R9D,R15D }
    /* +0xcb54b4 */ __asm { ROL R9D,0x17 }
    /* +0xcb54b8 */ __asm { XOR EAX,0x7c21d8c }
    /* +0xcb54bd */ __asm { XOR R8D,0x4e9fa74d }
    /* +0xcb54c4 */ __asm { ADD R8D,R15D }
    /* +0xcb54c7 */ __asm { ROL R8D,0x14 }
    /* +0xcb54cb */ __asm { IMUL R9D,R9D,0x37a04c4b }
    /* +0xcb54d2 */ __asm { IMUL EBX,EAX }
    /* +0xcb54d5 */ __asm { MOVQ XMM4,RCX }
    /* +0xcb54da */ __asm { MOVDQA XMM5,XMM4 }
    /* +0xcb54de */ __asm { PSRLQ XMM5,0x20 }
    /* +0xcb54e3 */ __asm { PMULUDQ XMM5,XMM2 }
    /* +0xcb54e7 */ __asm { MOVDQA XMM0,XMM2 }
    /* +0xcb54eb */ __asm { PSRLQ XMM0,0x20 }
    /* +0xcb54f0 */ __asm { PMULUDQ XMM0,XMM4 }
    /* +0xcb54f4 */ __asm { PADDQ XMM0,XMM5 }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtMapViewOfSection  |  RVA: 0xf2b5f0  |  Size: 8428 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtMapViewOfSection(void) {
    /* +0xf2b5f0 */ __asm { PUSH R15 }
    /* +0xf2b5f2 */ __asm { PUSH RSI }
    /* +0xf2b5f3 */ __asm { PUSH RBX }
    /* +0xf2b5f4 */ __asm { PUSH RDI }
    /* +0xf2b5f5 */ __asm { PUSH R13 }
    /* +0xf2b5f7 */ __asm { PUSH RBP }
    /* +0xf2b5f8 */ __asm { PUSH R14 }
    /* +0xf2b5fa */ __asm { PUSH R12 }
    /* +0xf2b5fc */ __asm { SUB RSP,0xf8 }
    /* +0xf2b603 */ __asm { MOV qword ptr [RSP + 0x98],R9 }
    /* +0xf2b60b */ __asm { MOV qword ptr [RSP + 0xb8],R8 }
    /* +0xf2b613 */ __asm { MOV qword ptr [RSP + 0xa0],RDX }
    /* +0xf2b61b */ __asm { MOV qword ptr [RSP + 0xb0],RCX }
    /* +0xf2b623 */ __asm { MOV EAX,0xcdf9daed }
    /* +0xf2b628 */ __asm { MOV dword ptr [RSP + 0xcc],EAX }
    /* +0xf2b62f */ __asm { MOV R8,R9 }
    /* +0xf2b632 */ __asm { MOV RAX,R8 }
    /* +0xf2b635 */ __asm { NOT RAX }
    /* +0xf2b638 */ __asm { MOV RCX,RAX }
    /* +0xf2b63b */ __asm { MOV R15,RCX }
    /* +0xf2b63e */ __asm { MOV EAX,0x2d548004 }
    /* +0xf2b643 */ __asm { MOV dword ptr [RSP + 0xac],EAX }
    /* +0xf2b64a */ __asm { MOV RSI,0x52c6db11d3115d48 }
    /* +0xf2b654 */ __asm { MOV R9,R10 }
    /* +0xf2b657 */ __asm { MOV RAX,R15 }
    /* +0xf2b65a */ __asm { NOT RAX }
    /* +0xf2b65d */ __asm { MOV R10,RDI }
    /* +0xf2b660 */ __asm { MOV qword ptr [RSP + 0x68],R10 }
    /* +0xf2b665 */ __asm { MOVQ XMM5,R10 }
    /* +0xf2b66a */ __asm { MOV R10,RBX }
    /* +0xf2b66d */ __asm { MOV qword ptr [RSP + 0x70],R10 }
    /* +0xf2b672 */ __asm { MOVQ XMM3,R10 }
    /* +0xf2b677 */ __asm { PXOR XMM3,XMM5 }
    /* +0xf2b67b */ __asm { MOV R13,R9 }
    /* +0xf2b67e */ __asm { NOT R13 }
    /* +0xf2b681 */ __asm { MOVQ RDX,XMM3 }
    /* +0xf2b686 */ __asm { MOV R10,RDX }
    /* +0xf2b689 */ __asm { NOT R10 }
    /* +0xf2b68c */ __asm { MOV R14,R9 }
    /* +0xf2b68f */ __asm { XOR R14,R8 }
    /* +0xf2b692 */ __asm { XOR R14,R10 }
    /* +0xf2b695 */ __asm { MOV RDI,R10 }
    /* +0xf2b698 */ __asm { OR R10,R13 }
    /* +0xf2b69b */ __asm { MOV qword ptr [RSP + 0xd8],R10 }
    /* +0xf2b6a3 */ __asm { MOVQ XMM5,R10 }
    /* +0xf2b6a8 */ __asm { MOVQ XMM2,R8 }
    /* +0xf2b6ad */ __asm { PXOR XMM2,XMM5 }
    /* +0xf2b6b1 */ __asm { MOVQ XMM5,R15 }
    /* +0xf2b6b6 */ __asm { MOV RBP,R15 }
    /* +0xf2b6b9 */ __asm { AND RBP,R8 }
    /* +0xf2b6bc */ __asm { MOV R10,RCX }
    /* +0xf2b6bf */ __asm { MOV qword ptr [RSP + 0x78],RCX }
    /* +0xf2b6c4 */ __asm { MOV R12,RCX }
    /* +0xf2b6c7 */ __asm { AND R12,R15 }
    /* +0xf2b6ca */ __asm { AND R14,RAX }
    /* +0xf2b6cd */ __asm { MOV RBX,R8 }
    /* +0xf2b6d0 */ __asm { XOR RBX,R15 }
    /* +0xf2b6d3 */ __asm { OR R15,R8 }
    /* +0xf2b6d6 */ __asm { OR R8,RAX }
    /* +0xf2b6d9 */ __asm { MOVQ R11,XMM2 }
    /* +0xf2b6de */ __asm { XOR R11,RAX }
    /* +0xf2b6e1 */ __asm { MOV qword ptr [RSP + 0xd0],R11 }
    /* +0xf2b6e9 */ __asm { MOV RCX,RAX }
    /* +0xf2b6ec */ __asm { AND RCX,R10 }
    /* +0xf2b6ef */ __asm { MOV R10,R9 }
    /* +0xf2b6f2 */ __asm { MOV qword ptr [RSP + 0xc0],R9 }
    /* +0xf2b6fa */ __asm { MOV R11,R9 }
    /* +0xf2b6fd */ __asm { AND R11,RDX }
    /* +0xf2b700 */ __asm { MOV RAX,qword ptr [RSP + 0x70] }
    /* +0xf2b705 */ __asm { XOR RAX,qword ptr [RSP + 0x68] }
    /* +0xf2b70a */ __asm { OR R10,RAX }
    /* +0xf2b70d */ __asm { IMUL R9,R10,0x7c52520e }
    /* +0xf2b714 */ __asm { MOV R10,RCX }
    /* +0xf2b717 */ __asm { AND R10,R11 }
    /* +0xf2b71a */ __asm { IMUL R10,RSI }
    /* +0xf2b71e */ __asm { NOT RAX }
    /* +0xf2b721 */ __asm { AND RAX,R13 }
    /* +0xf2b724 */ __asm { IMUL RAX,RAX,0x10395f6d }
    /* +0xf2b72b */ __asm { ADD RAX,R9 }
    /* +0xf2b72e */ __asm { MOV RSI,-0x8181588e }
    /* +0xf2b738 */ __asm { IMUL RSI,R14 }
    /* +0xf2b73c */ __asm { IMUL R11,R11,-0x59cba8d }
    /* +0xf2b743 */ __asm { ADD R11,RAX }
    /* +0xf2b746 */ __asm { MOV R14,RDI }
    /* +0xf2b749 */ __asm { AND R14,R13 }
    /* +0xf2b74c */ __asm { XOR RBX,R14 }
    /* +0xf2b74f */ __asm { IMUL R9,RBX,0x7be49e01 }
    /* +0xf2b756 */ __asm { ADD R9,R11 }
    /* +0xf2b759 */ __asm { MOV RBX,qword ptr [RSP + 0xc0] }
    /* +0xf2b761 */ __asm { MOV RAX,RBX }
    /* +0xf2b764 */ __asm { XOR RAX,RDX }
    /* +0xf2b767 */ __asm { MOV RDI,RDX }
    /* +0xf2b76a */ __asm { MOV R11,R15 }
    /* +0xf2b76d */ __asm { OR R11,R14 }
    /* +0xf2b770 */ __asm { AND R14,R12 }
    /* +0xf2b773 */ __asm { AND RAX,R12 }
    /* +0xf2b776 */ __asm { MOV RDX,-0x10fa91794 }
    /* +0xf2b780 */ __asm { IMUL RDX,RAX }
    /* +0xf2b784 */ __asm { MOV R12,qword ptr [RSP + 0x78] }
    /* +0xf2b789 */ __asm { OR R12,qword ptr [RSP + 0xd8] }
    /* +0xf2b791 */ __asm { XOR R13,RDI }
    /* +0xf2b794 */ __asm { MOV EAX,dword ptr [RSP + 0xcc] }
    /* +0xf2b79b */ __asm { XOR EAX,0x33b0229 }
    /* +0xf2b7a0 */ __asm { CDQE }
    /* +0xf2b7a2 */ __asm { OR R8,R13 }
    /* +0xf2b7a5 */ __asm { IMUL R8,RAX }
    /* +0xf2b7a9 */ __asm { AND RCX,R13 }
    /* +0xf2b7ac */ __asm { MOV EAX,0xde6bf058 }
    /* +0xf2b7b1 */ __asm { IMUL RAX,RCX }
    /* +0xf2b7b5 */ __asm { MOVQ XMM2,RBX }
    /* +0xf2b7ba */ __asm { POR XMM2,XMM3 }
    /* +0xf2b7be */ __asm { NOT R15 }
    /* +0xf2b7c1 */ __asm { MOVQ RCX,XMM2 }
    /* +0xf2b7c6 */ __asm { AND R15,RCX }
    /* +0xf2b7c9 */ __asm { MOV RCX,0x1046fa27a }
    /* +0xf2b7d3 */ __asm { IMUL RCX,R15 }
    /* +0xf2b7d7 */ __asm { ADD RCX,RAX }
    /* +0xf2b7da */ __asm { ADD RCX,R8 }
    /* +0xf2b7dd */ __asm { IMUL R10,R10,0x7ff4c07 }
    /* +0xf2b7e4 */ __asm { ADD RCX,R10 }
    /* +0xf2b7e7 */ __asm { NOT RBP }
    /* +0xf2b7ea */ __asm { OR R13,RBP }
    /* +0xf2b7ed */ __asm { IMUL R11,R11,0x313d273c }
    /* +0xf2b7f4 */ __asm { IMUL R8,R13,-0x7647e374 }
    /* +0xf2b7fb */ __asm { ADD R8,R11 }
    /* +0xf2b7fe */ __asm { ADD R8,R9 }
    /* +0xf2b801 */ __asm { ADD R8,RDX }
    /* +0xf2b804 */ __asm { ADD R8,RSI }
    /* +0xf2b807 */ __asm { MOV R10D,0xd8cf35cb }
    /* +0xf2b80d */ __asm { IMUL R10,qword ptr [RSP + 0xd0] }
    /* +0xf2b816 */ __asm { IMUL EAX,dword ptr [RSP + 0xac],0x1bf85d07 }
    /* +0xf2b821 */ __asm { ADD R10,R8 }
    /* +0xf2b824 */ __asm { MOV R9,qword ptr [RSP + 0x70] }
    /* +0xf2b829 */ __asm { MOV R8,R9 }
    /* +0xf2b82c */ __asm { NEG R8 }
    /* +0xf2b82f */ __asm { ADD R10,RCX }
    /* +0xf2b832 */ __asm { MOV ECX,0x5886b6d6 }
    /* +0xf2b837 */ __asm { IMUL EDX,ECX,-0x35ee6ad7 }
    /* +0xf2b83d */ __asm { NOT EDX }
    /* +0xf2b83f */ __asm { XOR EAX,0x36886c15 }
    /* +0xf2b844 */ __asm { CMP RDX,RAX }
    /* +0xf2b847 */ __asm { MOVQ XMM3,R12 }
    /* +0xf2b84c */ __asm { CMOVNC R8,R9 }
    /* +0xf2b850 */ __asm { XOR R8,qword ptr [RSP + 0x68] }
    /* +0xf2b855 */ __asm { OR R8,RBX }
    /* +0xf2b858 */ __asm { PXOR XMM3,XMM5 }
    /* +0xf2b85c */ __asm { IMUL R11,R8,-0x667c3814 }
    /* +0xf2b863 */ __asm { MOVQ XMM5,R11 }
    /* +0xf2b868 */ __asm { MOVQ R11,XMM3 }
    /* +0xf2b86d */ __asm { ADD R11,R14 }
    /* +0xf2b870 */ __asm { MOV ECX,dword ptr [RSP + 0x180] }
    /* +0xf2b877 */ __asm { IMUL R11,R11,-0x5cea97ca }
    /* +0xf2b87e */ __asm { ADD R11,R10 }
    /* +0xf2b881 */ __asm { MOVQ XMM3,R11 }
    /* +0xf2b886 */ __asm { PADDQ XMM3,XMM5 }
    /* +0xf2b88a */ __asm { MOV dword ptr [RSP + 0xe0],0x40fcb516 }
    /* +0xf2b895 */ __asm { MOV EAX,dword ptr [RSP + 0xe0] }
    /* +0xf2b89c */ __asm { MOV EAX,ECX }
    /* +0xf2b89e */ __asm { SHR EAX,0x1 }
    /* +0xf2b8a0 */ __asm { NOT EAX }
    /* +0xf2b8a2 */ __asm { OR EAX,ECX }
    /* +0xf2b8a4 */ __asm { MOV dword ptr [RSP + 0xe0],0x4a3c2cc2 }
    /* +0xf2b8af */ __asm { MOV ECX,dword ptr [RSP + 0xe0] }
    /* +0xf2b8b6 */ __asm { TEST CL,0x1 }
    /* +0xf2b8b9 */ __asm { JZ 0x7fffa569b8ca }
    /* +0xf2b8bb */ __asm { MOV BL,0x7c }
    /* +0xf2b8bd */ __asm { JP 0x7fffa569b90c }
    /* +0xf2b8bf */ __asm { TEST uint8_t ptr [RAX + RDX*0x1 + 0x27],0x19 }
    /* +0xf2b8c4 */ __asm { POPFQ }
    /* +0xf2b8c5 */ __asm { RET 0xef76 }
    /* +0xf2b8ca */ __asm { MOV R14D,dword ptr [RSP + 0x188] }
    /* +0xf2b8d2 */ __asm { MOVQ R15,XMM3 }
    /* +0xf2b8d7 */ __asm { MOV R8,0x0 }
    /* +0xf2b8de */ __asm { NOP }
    /* +0xf2b8df */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xf2b8e6 */ __asm { MOV R12,-0x30ebf64fafbc6efb }
    /* +0xf2b8f0 */ __asm { MOV R10,-0x22b18422c4a9c65e }
    /* +0xf2b8fa */ __asm { TEST EAX,0x1000 }
    /* +0xf2b8ff */ __asm { JZ 0x7fffa569bad6 }
    /* +0xf2b905 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xf2b90c */ __asm { NOP }
    /* +0xf2b90d */ __asm { MOV RAX,0x0 }
    /* +0xf2b914 */ __asm { MOV dword ptr [RSP + 0xe0],0xa5e9af9f }
    /* +0xf2b91f */ __asm { MOV EAX,dword ptr [RSP + 0xe0] }
    /* +0xf2b926 */ __asm { AND EAX,0x1 }
    /* +0xf2b929 */ __asm { MOV R13W,0xe606 }
    /* +0xf2b92e */ __asm { SUB R13D,R15D }
    /* +0xf2b931 */ __asm { MOV ECX,R13D }
    /* +0xf2b934 */ __asm { ROL CX,0xe }
    /* +0xf2b938 */ __asm { MOVZX ECX,CX }
    /* +0xf2b93b */ __asm { CMP EAX,ECX }
    /* +0xf2b93d */ __asm { MOV RBP,qword ptr [RSP + 0xa0] }
    /* +0xf2b945 */ __asm { JZ 0x7fffa569cc43 }
    /* +0xf2b94b */ __asm { TEST R14B,0xf0 }
    /* +0xf2b94f */ __asm { JZ 0x7fffa569cc5f }
    /* +0xf2b955 */ __asm { MOV dword ptr [RSP + 0xe0],0x583ec70 }
    /* +0xf2b960 */ __asm { MOV EAX,dword ptr [RSP + 0xe0] }
    /* +0xf2b967 */ __asm { MOV dword ptr [RSP + 0xe0],0x640ec6fa }
    /* +0xf2b972 */ __asm { MOV EAX,dword ptr [RSP + 0xe0] }
    /* +0xf2b979 */ __asm { CMP RBP,-0x1 }
    /* +0xf2b97d */ __asm { JZ 0x7fffa569bb34 }
    /* +0xf2b983 */ __asm { MOV EAX,0x82042979 }
    /* +0xf2b988 */ __asm { MOVD XMM3,EAX }
    /* +0xf2b98c */ __asm { MOV EAX,0xdfc03f0e }
    /* +0xf2b991 */ __asm { IMUL EAX,EAX,0x5558f1f7 }
    /* +0xf2b997 */ __asm { XOR EAX,R15D }
    /* +0xf2b99a */ __asm { LEA ECX,[R15 + -0x4f1ab78f] }
    /* +0xf2b9a1 */ __asm { MOVD XMM5,ECX }
    /* +0xf2b9a5 */ __asm { PADDD XMM5,XMM3 }
    /* +0xf2b9a9 */ __asm { MOVD R10D,XMM5 }
    /* +0xf2b9ae */ __asm { ADD EAX,0x84831654 }
    /* +0xf2b9b3 */ __asm { CMP RAX,R10 }
    /* +0xf2b9b6 */ __asm { JNC 0x7fffa569bb7c }
    /* +0xf2b9bc */ __asm { MOV EBX,0x30708142 }
    /* +0xf2b9c1 */ __asm { XOR EBX,R15D }
    /* +0xf2b9c4 */ __asm { ROL EBX,0x4 }
    /* +0xf2b9c7 */ __asm { MOV dword ptr [RSP + 0xe0],0x4b10b002 }
    /* +0xf2b9d2 */ __asm { RDTSC }
    /* +0xf2b9d4 */ __asm { SHL RDX,0x20 }
    /* +0xf2b9d8 */ __asm { OR RDX,RAX }
    /* +0xf2b9db */ __asm { IMUL RDX,R12 }
    /* +0xf2b9df */ __asm { MOV R11,-0x22b18422c4a9c65e }
    /* +0xf2b9e9 */ __asm { ADD RDX,R11 }
    /* +0xf2b9ec */ __asm { MOV RAX,RDX }
    /* +0xf2b9ef */ __asm { SHR RAX,0x3b }
    /* +0xf2b9f3 */ __asm { MOV R11,RDX }
    /* +0xf2b9f6 */ __asm { SHR R11,0x2d }
    /* +0xf2b9fa */ __asm { MOV ECX,dword ptr [RSP + 0xe0] }
    /* +0xf2ba01 */ __asm { MOV R10D,0x81299812 }
    /* +0xf2ba07 */ __asm { XOR R10D,0x54b3a79f }
    /* +0xf2ba0e */ __asm { ADD R10D,0x29e68892 }
    /* +0xf2ba15 */ __asm { MOV ECX,R15D }
    /* +0xf2ba18 */ __asm { ROR R10D,CL }
    /* +0xf2ba1b */ __asm { SHR RDX,0x1b }
    /* +0xf2ba1f */ __asm { XOR EDX,R11D }
    /* +0xf2ba22 */ __asm { MOV ECX,EAX }
    /* +0xf2ba24 */ __asm { ROR EDX,CL }
    /* +0xf2ba26 */ __asm { MOV EAX,EDX }
    /* +0xf2ba28 */ __asm { XOR EAX,0x3 }
    /* +0xf2ba2b */ __asm { AND EDX,0x3 }
    /* +0xf2ba2e */ __asm { MOV ECX,0x8b393133 }
    /* +0xf2ba33 */ __asm { XOR ECX,R15D }
    /* +0xf2ba36 */ __asm { ROL ECX,0x1 }
    /* +0xf2ba38 */ __asm { MOVSXD R11,ECX }
    /* +0xf2ba3b */ __asm { CMP R10,R11 }
    /* +0xf2ba3e */ __asm { CMOVL EDX,EAX }
    /* +0xf2ba41 */ __asm { CMP EDX,0x2 }
    /* +0xf2ba44 */ __asm { JGE 0x7fffa569bbe1 }
    /* +0xf2ba4a */ __asm { MOV EAX,EBX }
    /* +0xf2ba4c */ __asm { OR EAX,0x1 }
    /* +0xf2ba4f */ __asm { MOV R10D,0x936124eb }
    /* +0xf2ba55 */ __asm { IMUL R10D,EAX }
    /* +0xf2ba59 */ __asm { ROL R10D,0x12 }
    /* +0xf2ba5d */ __asm { MOV ECX,R15D }
    /* +0xf2ba60 */ __asm { ROL R10D,CL }
    /* +0xf2ba63 */ __asm { CMP EDX,0x1 }
    /* +0xf2ba66 */ __asm { SETZ R8B }
    /* +0xf2ba6a */ __asm { MOV ECX,0x6509da84 }
    /* +0xf2ba6f */ __asm { IMUL ECX,EAX }
    /* +0xf2ba72 */ __asm { ADD ECX,0x3fe5b043 }
    /* +0xf2ba78 */ __asm { XOR ECX,0xf6aebdd9 }
    /* +0xf2ba7e */ __asm { SUB ECX,R15D }
    /* +0xf2ba81 */ __asm { MOVSXD R11,ECX }
    /* +0xf2ba84 */ __asm { CMP R11,R10 }
    /* +0xf2ba87 */ __asm { SETG CL }
    /* +0xf2ba8a */ __asm { XOR CL,R8B }
    /* +0xf2ba8d */ __asm { JZ 0x7fffa569bf30 }
    /* +0xf2ba93 */ __asm { LEA RAX,[0x7fffa47b8cdd] }
    /* +0xf2ba9a */ __asm { MOV R11,-0x63c90b29348c2c30 }
    /* +0xf2baa4 */ __asm { CMP RAX,R11 }
    /* +0xf2baa7 */ __asm { JZ 0x7fffa569cca9 }
    /* +0xf2baad */ __asm { MOV ECX,0x390bc12d }
    /* +0xf2bab2 */ __asm { MOV qword ptr [RSP + 0xe0],R8 }
    /* +0xf2baba */ __asm { ADD ECX,R15D }
    /* +0xf2babd */ __asm { ROL ECX,0x5 }
    /* +0xf2bac0 */ __asm { MOV EAX,dword ptr [RAX + 0x38a3] }
    /* +0xf2bac6 */ __asm { IMUL ECX,ECX,0x1baabf65 }
    /* +0xf2bacc */ __asm { XOR ECX,EBX }
    /* +0xf2bace */ __asm { MOVSXD RDX,ECX }
    /* +0xf2bad1 */ __asm { JMP 0x7fffa569c237 }
    /* +0xf2bad6 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xf2badd */ __asm { MOV RAX,0x0 }
    /* +0xf2bae4 */ __asm { NOP }
    /* +0xf2bae5 */ __asm { PUSHFQ }
    /* +0xf2bae6 */ __asm { POP R9 }
    /* +0xf2bae8 */ __asm { TEST R9D,0x100 }
    /* +0xf2baef */ __asm { MOV RBP,qword ptr [RSP + 0xa0] }
    /* +0xf2baf7 */ __asm { NOP }
    /* +0xf2baf8 */ __asm { NOP }
    /* +0xf2baf9 */ __asm { NOP }
    /* +0xf2bafa */ __asm { NOP }
    /* +0xf2bafb */ __asm { NOP }
    /* +0xf2bafc */ __asm { NOP }
    /* +0xf2bafd */ __asm { NOP }
    /* +0xf2bafe */ __asm { NOP }
    /* +0xf2baff */ __asm { NOP }
    /* +0xf2bb00 */ __asm { NOP }
    /* +0xf2bb01 */ __asm { NOP }
    /* +0xf2bb02 */ __asm { NOP }
    /* +0xf2bb03 */ __asm { NOP }
    /* +0xf2bb04 */ __asm { NOP }
    /* +0xf2bb05 */ __asm { NOP }
    /* +0xf2bb06 */ __asm { NOP }
    /* +0xf2bb07 */ __asm { NOP }
    /* +0xf2bb34 */ __asm { MOV AX,0x4f8e }
    /* +0xf2bb38 */ __asm { MOV ECX,R15D }
    /* +0xf2bb3b */ __asm { XOR ECX,EAX }
    /* +0xf2bb3d */ __asm { MOV EAX,0xffffa9e8 }
    /* +0xf2bb42 */ __asm { SUB EAX,ECX }
    /* +0xf2bb44 */ __asm { MOVZX EAX,AX }
    /* +0xf2bb47 */ __asm { MOV R11,qword ptr GS:[RAX] }
    /* +0xf2bb4b */ __asm { MOV R9,0x72c28fa44e380dc9 }
    /* +0xf2bb55 */ __asm { CMP qword ptr [R11 + 0x8c8],R9 }
    /* +0xf2bb5c */ __asm { JNZ 0x7fffa569c24e }
    /* +0xf2bb62 */ __asm { MOV RAX,0x0 }
    /* +0xf2bb69 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xf2bb70 */ __asm { NOP }
    /* +0xf2bb71 */ __asm { PUSH RDX }
    /* +0xf2bb72 */ __asm { INSB RDI,DX }
    /* +0xf2bb73 */ __asm { PUSH RDI }
    /* +0xf2bb74 */ __asm { LEAVE }
    /* +0xf2bb75 */ __asm { INT 0xd5 }
    /* +0xf2bb77 */ __asm { JMP 0x7fffa569c24e }
    /* +0xf2bb7c */ __asm { MOV EAX,0x20b2fe78 }
    /* +0xf2bb81 */ __asm { IMUL EAX,EAX,0x5b2869d7 }
    /* +0xf2bb87 */ __asm { XOR EAX,R15D }
    /* +0xf2bb8a */ __asm { ADD EAX,0x56f975bd }
    /* +0xf2bb8f */ __asm { MOVSXD RBX,EAX }
    /* +0xf2bb92 */ __asm { MOV dword ptr [RSP + 0xe0],0x4b10b002 }
    /* +0xf2bb9d */ __asm { MOV EAX,dword ptr [RSP + 0xe0] }
    /* +0xf2bba4 */ __asm { RDTSC }
    /* +0xf2bba6 */ __asm { SHL RDX,0x20 }
    /* +0xf2bbaa */ __asm { OR RDX,RAX }
    /* +0xf2bbad */ __asm { IMUL RDX,R12 }
    /* +0xf2bbb1 */ __asm { MOV R8,-0x22b18422c4a9c65e }
    /* +0xf2bbbb */ __asm { LEA RCX,[RDX + R8*0x1] }
    /* +0xf2bbbf */ __asm { MOV RDX,RCX }
    /* +0xf2bbc2 */ __asm { SHR RDX,0x1b }
    /* +0xf2bbc6 */ __asm { MOV RAX,RCX }
    /* +0xf2bbc9 */ __asm { SHR RAX,0x2d }
    /* +0xf2bbcd */ __asm { XOR EDX,EAX }
    /* +0xf2bbcf */ __asm { SHR RCX,0x3b }
    /* +0xf2bbd3 */ __asm { ROR EDX,CL }
    /* +0xf2bbd5 */ __asm { AND EDX,0x3 }
    /* +0xf2bbd8 */ __asm { CMP EDX,0x2 }
    /* +0xf2bbdb */ __asm { JL 0x7fffa569ba4a }
    /* +0xf2bbe1 */ __asm { MOV AX,0xb1e3 }
    /* +0xf2bbe5 */ __asm { SUB EAX,EBX }
    /* +0xf2bbe7 */ __asm { MOV ECX,R15D }
    /* +0xf2bbea */ __asm { ROR AX,CL }
    /* +0xf2bbed */ __asm { ADD EAX,0xffff9f36 }
    /* +0xf2bbf2 */ __asm { MOVZX EAX,AX }
    /* +0xf2bbf5 */ __asm { CMP EDX,EAX }
    /* +0xf2bbf7 */ __asm { JGE 0x7fffa569bfe9 }
    /* +0xf2bbfd */ __asm { MOV R10W,0xf273 }
    /* +0xf2bc02 */ __asm { RDTSC }
    /* +0xf2bc04 */ __asm { MOV R11,-0xcd1fbf6513e3d9 }
    /* +0xf2bc0e */ __asm { IMUL R11,R11,-0x337d2e55 }
    /* +0xf2bc15 */ __asm { MOV R9,-0x1794b792505574f4 }
    /* +0xf2bc1f */ __asm { ADD R9,R11 }
    /* +0xf2bc22 */ __asm { SHL RDX,0x20 }
    /* +0xf2bc26 */ __asm { ADD R9,RBX }
    /* +0xf2bc29 */ __asm { MOV ECX,R15D }
    /* +0xf2bc2c */ __asm { ROR R9,CL }
    /* +0xf2bc2f */ __asm { OR RDX,RAX }
    /* +0xf2bc32 */ __asm { MOVQ XMM3,R9 }
    /* +0xf2bc37 */ __asm { MOV R11,0x7facc0f7a00541bd }
    /* +0xf2bc41 */ __asm { IMUL R11,RDX }
    /* +0xf2bc45 */ __asm { MOVQ XMM5,R11 }
    /* +0xf2bc4a */ __asm { PADDQ XMM5,XMM3 }
    /* +0xf2bc4e */ __asm { IMUL EAX,R10D,-0x64eb }
    /* +0xf2bc55 */ __asm { LEA EDX,[RAX + R15*0x1] }
    /* +0xf2bc59 */ __asm { ADD EDX,0xffff95eb }
    /* +0xf2bc5f */ __asm { MOVQ RAX,XMM5 }
    /* +0xf2bc64 */ __asm { MOV R10,RAX }
    /* +0xf2bc67 */ __asm { SHR R10,0x1b }
    /* +0xf2bc6b */ __asm { MOV RCX,RAX }
    /* +0xf2bc6e */ __asm { SHR RCX,0x3b }
    /* +0xf2bc72 */ __asm { SHR RAX,0x2d }
    /* +0xf2bc76 */ __asm { XOR EAX,R10D }
    /* +0xf2bc79 */ __asm { ROR EAX,CL }
    /* +0xf2bc7b */ __asm { MOVZX R10D,DX }
    /* +0xf2bc7f */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xf2bc83 */ __asm { MOV R11,qword ptr [R11 + 0x18] }
    /* +0xf2bc87 */ __asm { MOV R8,0x7f88fddb1960b3d9 }
    /* +0xf2bc91 */ __asm { IMUL R8,R11 }
    /* +0xf2bc95 */ __asm { MOV R11,0x3e8b6ea8616dd6f5 }
    /* +0xf2bc9f */ __asm { CMP R8,R11 }
    /* +0xf2bca2 */ __asm { JZ 0x7fffa569cc2a }
    /* +0xf2bca8 */ __asm { CMP EAX,0x45d1a26 }
    /* +0xf2bcad */ __asm { JA 0x7fffa569beef }
    /* +0xf2bcb3 */ __asm { MOV AX,0x3872 }
    /* +0xf2bcb7 */ __asm { SUB EAX,R15D }
    /* +0xf2bcba */ __asm { MOV ECX,EBX }
    /* +0xf2bcbc */ __asm { XOR ECX,EAX }
    /* +0xf2bcbe */ __asm { ADD ECX,0xffffd379 }
    /* +0xf2bcc4 */ __asm { MOVZX EAX,CX }
    /* +0xf2bcc7 */ __asm { MOV R11,qword ptr GS:[RAX] }
    /* +0xf2bccb */ __asm { MOV EAX,0xa4018f2f }
    /* +0xf2bcd0 */ __asm { ADD EAX,0x48d3519 }
    /* +0xf2bcd5 */ __asm { MOV ECX,0x5ff976ac }
    /* +0xf2bcda */ __asm { MOVD XMM3,ECX }
    /* +0xf2bcde */ __asm { XOR EAX,EBX }
    /* +0xf2bce0 */ __asm { MOV ECX,EBX }
    /* +0xf2bce2 */ __asm { SUB ECX,R15D }
    /* +0xf2bce5 */ __asm { MOVD XMM5,ECX }
    /* +0xf2bce9 */ __asm { PADDD XMM5,XMM3 }
    /* +0xf2bced */ __asm { ROL EAX,0xb }
    /* +0xf2bcf0 */ __asm { ADD EAX,R15D }
    /* +0xf2bcf3 */ __asm { MOVD ECX,XMM5 }
    /* +0xf2bcf7 */ __asm { IMUL R10D,ECX,0x1820504f }
    /* +0xf2bcfe */ __asm { SUB R11,R10 }
    /* +0xf2bd01 */ __asm { XOR R11,RAX }
    /* +0xf2bd04 */ __asm { MOV R9,-0xd364e22edf2230a }
    /* +0xf2bd0e */ __asm { CMP R11,R9 }
    /* +0xf2bd11 */ __asm { NOP }
    /* +0xf2bd12 */ __asm { NOP }
    /* +0xf2bd13 */ __asm { NOP }
    /* +0xf2bd14 */ __asm { NOP }
    /* +0xf2bd15 */ __asm { LEA RAX,[0x7fffa47c11ed] }
    /* +0xf2bd1c */ __asm { MOV R11,-0x25b16f3e99985495 }
    /* +0xf2bd26 */ __asm { CMP RAX,R11 }
    /* +0xf2bd29 */ __asm { JZ 0x7fffa569dda3 }
    /* +0xf2bd2f */ __asm { MOV CX,0x4920 }
    /* +0xf2bd33 */ __asm { IMUL R8D,ECX,-0x1c6d }
    /* +0xf2bd3a */ __asm { MOV ECX,R15D }
    /* +0xf2bd3d */ __asm { ROR R8W,CL }
    /* +0xf2bd41 */ __asm { MOVZX EDX,uint8_t ptr [RAX + -0x4aa4] }
    /* +0xf2bd48 */ __asm { MOVZX ECX,uint8_t ptr [RAX + RDX*0x4 + -0x4a9e] }
    /* +0xf2bd50 */ __asm { NOT CL }
    /* +0xf2bd52 */ __asm { ROL CL,0x5 }
    /* +0xf2bd55 */ __asm { MOV uint8_t ptr [RSP + 0xe0],CL }
    /* +0xf2bd5c */ __asm { MOVZX ECX,uint8_t ptr [RAX + RDX*0x4 + -0x4a9d] }
    /* +0xf2bd64 */ __asm { NOT CL }
    /* +0xf2bd66 */ __asm { ROL CL,0x5 }
    /* +0xf2bd69 */ __asm { MOV uint8_t ptr [RSP + 0xe1],CL }
    /* +0xf2bd70 */ __asm { MOVZX ECX,uint8_t ptr [RAX + RDX*0x4 + -0x4a9c] }
    /* +0xf2bd78 */ __asm { NOT CL }
    /* +0xf2bd7a */ __asm { ROL CL,0x5 }
    /* +0xf2bd7d */ __asm { LEA R10D,[RBX + R8*0x1] }
    /* +0xf2bd81 */ __asm { MOV uint8_t ptr [RSP + 0xe2],CL }
    /* +0xf2bd88 */ __asm { MOVZX R8D,uint8_t ptr [RAX + RDX*0x4 + -0x4a9b] }
    /* +0xf2bd91 */ __asm { NOT R8B }
    /* +0xf2bd94 */ __asm { ROL R8B,0x5 }
    /* +0xf2bd98 */ __asm { MOV uint8_t ptr [RSP + 0xe3],R8B }
    /* +0xf2bda0 */ __asm { MOV ECX,0x9102c3cc }
    /* +0xf2bda5 */ __asm { XOR ECX,dword ptr [RSP + 0xe0] }
    /* +0xf2bdac */ __asm { MOV EAX,0x1 }
    /* +0xf2bdb1 */ __asm { SHL EAX,CL }
    /* +0xf2bdb3 */ __asm { IMUL EDX,R10D,-0x2ced }
    /* +0xf2bdba */ __asm { MOVZX EDX,DX }
    /* +0xf2bdbd */ __asm { AND EAX,ECX }
    /* +0xf2bdbf */ __asm { CMP EAX,EDX }
    /* +0xf2bdc1 */ __asm { JZ 0x7fffa569beef }
    /* +0xf2bdc7 */ __asm { PXOR XMM3,XMM3 }
    /* +0xf2bdcb */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM3 }
    /* +0xf2bdd4 */ __asm { PUSHFQ }
    /* +0xf2bdd5 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xf2bddd */ __asm { POPFQ }
    /* +0xf2bdde */ __asm { MOV dword ptr [RSP + 0x80],0xc4568976 }
    /* +0xf2bde9 */ __asm { MOV EAX,dword ptr [RSP + 0x80] }
    /* +0xf2bdf0 */ __asm { CMP EAX,0x94a9a10d }
    /* +0xf2bdf5 */ __asm { JA 0x7fffa569bdff }
    /* +0xf2bdf7 */ __asm { SBB uint8_t ptr [RDI],BH }
    /* +0xf2bdf9 */ __asm { JLE 0x7fffa569be6f }
    /* +0xf2bdfb */ __asm { JL 0x7fffa569be40 }
    /* +0xf2bdfd */ __asm { ADC AL,0xb2 }
    /* +0xf2bdff */ __asm { MOV dword ptr [RSP + 0xe0],0x0 }
    /* +0xf2be0a */ __asm { MOV dword ptr [RSP + 0x80],0x21002102 }
    /* +0xf2be15 */ __asm { MOV EAX,dword ptr [RSP + 0x80] }
    /* +0xf2be1c */ __asm { CMP EAX,0x4416c5fb }
    /* +0xf2be21 */ __asm { JC 0x7fffa569be28 }
    /* +0xf2be23 */ __asm { SBB EAX,0x47af6500 }
    /* +0xf2be28 */ __asm { MOV dword ptr [RSP + 0x80],0x181c73b1 }
    /* +0xf2be33 */ __asm { MOV EAX,dword ptr [RSP + 0x80] }
    /* +0xf2be3a */ __asm { TEST AL,0x1 }
    /* +0xf2be3c */ __asm { NOP }
    /* +0xf2be3d */ __asm { NOP }
    /* +0xf2be3e */ __asm { NOP }
    /* +0xf2be3f */ __asm { NOP }
    /* +0xf2be40 */ __asm { NOP }
    /* +0xf2be41 */ __asm { LEA RAX,[0x7fffa47b7a40] }
    /* +0xf2be48 */ __asm { MOV R8,RAX }
    /* +0xf2be4b */ __asm { ROL R8,0x1b }
    /* +0xf2be4f */ __asm { MOV R11D,0x9d771b35 }
    /* +0xf2be55 */ __asm { XOR R11,R8 }
    /* +0xf2be58 */ __asm { MOV R9,-0x5c21d311fc43d0c }
    /* +0xf2be62 */ __asm { CMP R11,R9 }
    /* +0xf2be65 */ __asm { JZ 0x7fffa569de60 }
    /* +0xf2be6b */ __asm { MOV CX,0x328b }
    /* +0xf2be6f */ __asm { XOR ECX,EBX }
    /* +0xf2be71 */ __asm { MOV R10W,0xa439 }
    /* +0xf2be76 */ __asm { MOV DX,0x6d85 }
    /* +0xf2be7a */ __asm { XOR R10D,R15D }
    /* +0xf2be7d */ __asm { MOVD XMM3,EDX }
    /* +0xf2be81 */ __asm { MOVD XMM5,EBX }
    /* +0xf2be85 */ __asm { PSUBW XMM3,XMM5 }
    /* +0xf2be89 */ __asm { MOVD R11D,XMM3 }
    /* +0xf2be8e */ __asm { MOV EDX,R15D }
    /* +0xf2be91 */ __asm { OR EDX,0x1 }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtAllocateVirtualMemoryEx  |  RVA: 0xf2e360  |  Size: 4038 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtAllocateVirtualMemoryEx(void) {
    /* +0xf2e360 */ __asm { PUSH RBX }
    /* +0xf2e361 */ __asm { PUSH RSI }
    /* +0xf2e362 */ __asm { PUSH R13 }
    /* +0xf2e364 */ __asm { PUSH RBP }
    /* +0xf2e365 */ __asm { PUSH R12 }
    /* +0xf2e367 */ __asm { PUSH R15 }
    /* +0xf2e369 */ __asm { PUSH RDI }
    /* +0xf2e36a */ __asm { SUB RSP,0x60 }
    /* +0xf2e36e */ __asm { MOV RDI,RDX }
    /* +0xf2e371 */ __asm { MOV R10,RCX }
    /* +0xf2e374 */ __asm { MOV dword ptr [RSP + 0x40],0x6abfde29 }
    /* +0xf2e37c */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xf2e380 */ __asm { TEST EDX,EDX }
    /* +0xf2e382 */ __asm { JS 0x7fffa569f669 }
    /* +0xf2e388 */ __asm { PUSHFQ }
    /* +0xf2e389 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xf2e391 */ __asm { POPFQ }
    /* +0xf2e392 */ __asm { MOV dword ptr [RSP + 0x40],0x4a3c2cc2 }
    /* +0xf2e39a */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xf2e39e */ __asm { TEST DL,0x1 }
    /* +0xf2e3a1 */ __asm { JZ 0x7fffa569e3b2 }
    /* +0xf2e3a3 */ __asm { MOV BL,0x7c }
    /* +0xf2e3a5 */ __asm { JP 0x7fffa569e3f4 }
    /* +0xf2e3a7 */ __asm { TEST uint8_t ptr [RAX + RDX*0x1 + 0x27],0x19 }
    /* +0xf2e3ac */ __asm { POPFQ }
    /* +0xf2e3ad */ __asm { RET 0xef76 }
    /* +0xf2e3b2 */ __asm { MOV EBX,dword ptr [RSP + 0xc0] }
    /* +0xf2e3b9 */ __asm { MOV RSI,-0x30ebf64fafbc6efb }
    /* +0xf2e3c3 */ __asm { TEST R9D,0x1000 }
    /* +0xf2e3ca */ __asm { NOP }
    /* +0xf2e3cb */ __asm { NOP }
    /* +0xf2e3cc */ __asm { NOP }
    /* +0xf2e3cd */ __asm { NOP }
    /* +0xf2e3ce */ __asm { NOP }
    /* +0xf2e3cf */ __asm { NOP }
    /* +0xf2e3d0 */ __asm { NOP }
    /* +0xf2e3d1 */ __asm { NOP }
    /* +0xf2e3d2 */ __asm { NOP }
    /* +0xf2e3d3 */ __asm { NOP }
    /* +0xf2e3d4 */ __asm { NOP }
    /* +0xf2e3d5 */ __asm { NOP }
    /* +0xf2e3d6 */ __asm { NOP }
    /* +0xf2e3d7 */ __asm { NOP }
    /* +0xf2e3d8 */ __asm { NOP }
    /* +0xf2e3d9 */ __asm { NOP }
    /* +0xf2e3da */ __asm { NOP }
    /* +0xf2e3f4 */ __asm { NOP }
    /* +0xf2e3f5 */ __asm { NOP }
    /* +0xf2e3f6 */ __asm { NOP }
    /* +0xf2e3f7 */ __asm { NOP }
    /* +0xf2e3f8 */ __asm { NOP }
    /* +0xf2e3f9 */ __asm { NOP }
    /* +0xf2e3fa */ __asm { NOP }
    /* +0xf2e3fb */ __asm { NOP }
    /* +0xf2e3fc */ __asm { NOP }
    /* +0xf2e3fd */ __asm { NOP }
    /* +0xf2e3fe */ __asm { MOV RDX,0x0 }
    /* +0xf2e405 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xf2e40c */ __asm { MOV dword ptr [RSP + 0x40],0xa5e9af9f }
    /* +0xf2e414 */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xf2e418 */ __asm { MOV AX,0x1a6b }
    /* +0xf2e41c */ __asm { AND EDX,0x1 }
    /* +0xf2e41f */ __asm { XOR EAX,0x1a6b }
    /* +0xf2e424 */ __asm { MOVZX EAX,AX }
    /* +0xf2e427 */ __asm { CMP EDX,EAX }
    /* +0xf2e429 */ __asm { JZ 0x7fffa569f671 }
    /* +0xf2e42f */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xf2e436 */ __asm { MOV RDX,0x0 }
    /* +0xf2e43d */ __asm { TEST BL,0xf0 }
    /* +0xf2e440 */ __asm { JZ 0x7fffa569e5d0 }
    /* +0xf2e446 */ __asm { MOV RDX,0x0 }
    /* +0xf2e44d */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xf2e454 */ __asm { MOV dword ptr [RSP + 0x40],0x583ec70 }
    /* +0xf2e45c */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xf2e460 */ __asm { MOV dword ptr [RSP + 0x40],0x640ec6fa }
    /* +0xf2e468 */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xf2e46c */ __asm { CMP R10,-0x1 }
    /* +0xf2e470 */ __asm { JZ 0x7fffa569e640 }
    /* +0xf2e476 */ __asm { MOV dword ptr [RSP + 0x40],0x4b10b002 }
    /* +0xf2e47e */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xf2e482 */ __asm { RDTSC }
    /* +0xf2e484 */ __asm { SHL RDX,0x20 }
    /* +0xf2e488 */ __asm { OR RDX,RAX }
    /* +0xf2e48b */ __asm { IMUL RDX,RSI }
    /* +0xf2e48f */ __asm { MOV R11,-0x22b18422c4a9c65e }
    /* +0xf2e499 */ __asm { ADD R11,RDX }
    /* +0xf2e49c */ __asm { MOV RCX,R11 }
    /* +0xf2e49f */ __asm { SHR RCX,0x3b }
    /* +0xf2e4a3 */ __asm { MOV RDX,R11 }
    /* +0xf2e4a6 */ __asm { SHR RDX,0x1b }
    /* +0xf2e4aa */ __asm { SHR R11,0x2d }
    /* +0xf2e4ae */ __asm { XOR R11D,EDX }
    /* +0xf2e4b1 */ __asm { ROR R11D,CL }
    /* +0xf2e4b4 */ __asm { AND R11D,0x3 }
    /* +0xf2e4b8 */ __asm { CMP R11D,0x2 }
    /* +0xf2e4bc */ __asm { JNC 0x7fffa569e691 }
    /* +0xf2e4c2 */ __asm { CMP R11D,0x1 }
    /* +0xf2e4c6 */ __asm { JZ 0x7fffa569ea74 }
    /* +0xf2e4cc */ __asm { MOV EDX,0x25b4881e }
    /* +0xf2e4d1 */ __asm { MOV RCX,-0x42b14a729ced000f }
    /* +0xf2e4db */ __asm { CMP RDX,RCX }
    /* +0xf2e4de */ __asm { NOP }
    /* +0xf2e4df */ __asm { NOP }
    /* +0xf2e4e0 */ __asm { NOP }
    /* +0xf2e4e1 */ __asm { NOP }
    /* +0xf2e4e2 */ __asm { NOP }
    /* +0xf2e4e3 */ __asm { NOP }
    /* +0xf2e4e4 */ __asm { NOP }
    /* +0xf2e4e5 */ __asm { NOP }
    /* +0xf2e4e6 */ __asm { NOP }
    /* +0xf2e4e7 */ __asm { NOP }
    /* +0xf2e4e8 */ __asm { NOP }
    /* +0xf2e4e9 */ __asm { NOP }
    /* +0xf2e4ea */ __asm { NOP }
    /* +0xf2e4eb */ __asm { NOP }
    /* +0xf2e4ec */ __asm { NOP }
    /* +0xf2e4ed */ __asm { NOP }
    /* +0xf2e4ee */ __asm { NOP }
    /* +0xf2e5d0 */ __asm { MOV DX,0xd48c }
    /* +0xf2e5d4 */ __asm { ADD EDX,0x2ba4 }
    /* +0xf2e5da */ __asm { MOVZX R11D,DX }
    /* +0xf2e5de */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0xf2e5e2 */ __asm { MOV EDX,R11D }
    /* +0xf2e5e5 */ __asm { AND EDX,0x60 }
    /* +0xf2e5e8 */ __asm { ADD R11,0x60 }
    /* +0xf2e5ec */ __asm { MOV EAX,0x3ae2dae5 }
    /* +0xf2e5f1 */ __asm { IMUL ECX,EAX,0x7148c9e3 }
    /* +0xf2e5f7 */ __asm { ADD ECX,0x353adead }
    /* +0xf2e5fd */ __asm { CMP RCX,0x3524a50b }
    /* +0xf2e604 */ __asm { CMOVZ R11,RDX }
    /* +0xf2e608 */ __asm { MOVQ XMM2,qword ptr [R11] }
    /* +0xf2e60d */ __asm { MOV RDX,0xa9c605d8d2538df }
    /* +0xf2e617 */ __asm { MOVQ XMM5,RDX }
    /* +0xf2e61c */ __asm { PAND XMM5,XMM2 }
    /* +0xf2e620 */ __asm { MOVQ RCX,XMM5 }
    /* +0xf2e625 */ __asm { MOV RAX,-0x3d3ea140dd62bdd3 }
    /* +0xf2e62f */ __asm { CMP RCX,RAX }
    /* +0xf2e632 */ __asm { JNZ 0x7fffa569ec16 }
    /* +0xf2e638 */ __asm { IMUL R14,qword ptr [R9 + RBP*0x8 + 0x5d6],0x2fd9ba66 }
    /* +0xf2e644 */ __asm { XOR EDX,0xffffa7b9 }
    /* +0xf2e64a */ __asm { IMUL EDX,EDX,-0x66bf }
    /* +0xf2e650 */ __asm { MOVZX R10D,DX }
    /* +0xf2e654 */ __asm { MOV RCX,qword ptr GS:[R10] }
    /* +0xf2e658 */ __asm { MOV R10D,0x8fb9fe93 }
    /* +0xf2e65e */ __asm { ADD R10D,0xc5d422b0 }
    /* +0xf2e665 */ __asm { MOV RCX,qword ptr [RCX + 0x8c8] }
    /* +0xf2e66c */ __asm { ROL RCX,0x6 }
    /* +0xf2e670 */ __asm { SUB RCX,R10 }
    /* +0xf2e673 */ __asm { MOV RAX,-0x4f5c16ecc78aaee7 }
    /* +0xf2e67d */ __asm { CMP RCX,RAX }
    /* +0xf2e680 */ __asm { JNZ 0x7fffa569f0f7 }
    /* +0xf2e686 */ __asm { PUSH RDX }
    /* +0xf2e687 */ __asm { INSB RDI,DX }
    /* +0xf2e688 */ __asm { PUSH RDI }
    /* +0xf2e689 */ __asm { LEAVE }
    /* +0xf2e68a */ __asm { INT 0xd5 }
    /* +0xf2e68c */ __asm { JMP 0x7fffa569f0f7 }
    /* +0xf2e691 */ __asm { MOV EDX,0x35deaf4a }
    /* +0xf2e696 */ __asm { MOV ECX,0x4341846d }
    /* +0xf2e69b */ __asm { IMUL EDX,EDX,-0x3d9c8ea5 }
    /* +0xf2e6a1 */ __asm { XOR EDX,0xe70eb6c6 }
    /* +0xf2e6a7 */ __asm { MOVSXD RAX,EDX }
    /* +0xf2e6aa */ __asm { ADD ECX,0x71276df4 }
    /* +0xf2e6b0 */ __asm { CMP RAX,RCX }
    /* +0xf2e6b3 */ __asm { JGE 0x7fffa569e97d }
    /* +0xf2e6b9 */ __asm { CMP R11D,0x3 }
    /* +0xf2e6bd */ __asm { JZ 0x7fffa569e97d }
    /* +0xf2e6c3 */ __asm { RDTSC }
    /* +0xf2e6c5 */ __asm { SHL RDX,0x20 }
    /* +0xf2e6c9 */ __asm { OR RDX,RAX }
    /* +0xf2e6cc */ __asm { MOV RCX,0x7facc0f7a00541bd }
    /* +0xf2e6d6 */ __asm { IMUL RCX,RDX }
    /* +0xf2e6da */ __asm { MOV DX,0x4628 }
    /* +0xf2e6de */ __asm { MOV RAX,-0x6d58b5df06e60146 }
    /* +0xf2e6e8 */ __asm { ADD RAX,RCX }
    /* +0xf2e6eb */ __asm { MOV R11,RAX }
    /* +0xf2e6ee */ __asm { SHR R11,0x2d }
    /* +0xf2e6f2 */ __asm { MOV RCX,RAX }
    /* +0xf2e6f5 */ __asm { SHR RCX,0x3b }
    /* +0xf2e6f9 */ __asm { SHR RAX,0x1b }
    /* +0xf2e6fd */ __asm { XOR R11D,EAX }
    /* +0xf2e700 */ __asm { ROR R11D,CL }
    /* +0xf2e703 */ __asm { ADD EDX,0x6611 }
    /* +0xf2e709 */ __asm { MOVZX EDX,DX }
    /* +0xf2e70c */ __asm { XOR RDX,0xac59 }
    /* +0xf2e713 */ __asm { MOV RCX,qword ptr GS:[RDX] }
    /* +0xf2e717 */ __asm { MOV RAX,0x3e8b6ea85c1a4e13 }
    /* +0xf2e721 */ __asm { MOV RCX,qword ptr [RCX + 0x18] }
    /* +0xf2e725 */ __asm { MOV RDX,0x7f88fddb1960b3d9 }
    /* +0xf2e72f */ __asm { IMUL RDX,RCX }
    /* +0xf2e733 */ __asm { XOR RDX,RAX }
    /* +0xf2e736 */ __asm { CMP RDX,0x3d7798e6 }
    /* +0xf2e73d */ __asm { JZ 0x7fffa569f64d }
    /* +0xf2e743 */ __asm { MOV EDX,0xf9e50de8 }
    /* +0xf2e748 */ __asm { XOR EDX,0x49ebb5c8 }
    /* +0xf2e74e */ __asm { XOR EAX,EAX }
    /* +0xf2e750 */ __asm { XOR ECX,ECX }
    /* +0xf2e752 */ __asm { CMP R11D,0x45d1a27 }
    /* +0xf2e759 */ __asm { SETC AL }
    /* +0xf2e75c */ __asm { SETGE CL }
    /* +0xf2e75f */ __asm { MOVSXD RDX,EDX }
    /* +0xf2e762 */ __asm { MOV R11D,0x5ec73e58 }
    /* +0xf2e768 */ __asm { IMUL R11D,R11D,-0x198de291 }
    /* +0xf2e76f */ __asm { ROL R11D,0x5 }
    /* +0xf2e773 */ __asm { MOVSXD R11,R11D }
    /* +0xf2e776 */ __asm { CMP R11,RDX }
    /* +0xf2e779 */ __asm { CMOVL EAX,ECX }
    /* +0xf2e77c */ __asm { CMP AL,0x1 }
    /* +0xf2e77e */ __asm { JNZ 0x7fffa569e93d }
    /* +0xf2e784 */ __asm { MOV DX,0x12d5 }
    /* +0xf2e788 */ __asm { IMUL EDX,EDX,-0x6f75 }
    /* +0xf2e78e */ __asm { ADD EDX,0xfffff6b9 }
    /* +0xf2e794 */ __asm { MOVZX R11D,DX }
    /* +0xf2e798 */ __asm { MOV RCX,qword ptr GS:[R11] }
    /* +0xf2e79c */ __asm { NOT RCX }
    /* +0xf2e79f */ __asm { MOV RAX,0x48cd4e29a61a9cc9 }
    /* +0xf2e7a9 */ __asm { IMUL RAX,RCX }
    /* +0xf2e7ad */ __asm { MOV RCX,0x7f2ea4209d0bf316 }
    /* +0xf2e7b7 */ __asm { CMP RAX,RCX }
    /* +0xf2e7ba */ __asm { NOP }
    /* +0xf2e7bb */ __asm { NOP }
    /* +0xf2e7bc */ __asm { NOP }
    /* +0xf2e7bd */ __asm { NOP }
    /* +0xf2e7be */ __asm { LEA RDX,[0x7fffa47c11ed] }
    /* +0xf2e7c5 */ __asm { MOV RCX,-0x25b16f3e99985495 }
    /* +0xf2e7cf */ __asm { CMP RDX,RCX }
    /* +0xf2e7d2 */ __asm { JZ 0x7fffa569f74a }
    /* +0xf2e7d8 */ __asm { MOV AX,0xd701 }
    /* +0xf2e7dc */ __asm { MOVZX ECX,uint8_t ptr [RDX + -0x4aa4] }
    /* +0xf2e7e3 */ __asm { MOVZX R11D,uint8_t ptr [RDX + RCX*0x4 + -0x4a9e] }
    /* +0xf2e7ec */ __asm { NOT R11B }
    /* +0xf2e7ef */ __asm { ROL R11B,0x5 }
    /* +0xf2e7f3 */ __asm { MOV uint8_t ptr [RSP + 0x40],R11B }
    /* +0xf2e7f8 */ __asm { MOVZX R11D,uint8_t ptr [RDX + RCX*0x4 + -0x4a9d] }
    /* +0xf2e801 */ __asm { NOT R11B }
    /* +0xf2e804 */ __asm { ROL R11B,0x5 }
    /* +0xf2e808 */ __asm { MOV uint8_t ptr [RSP + 0x41],R11B }
    /* +0xf2e80d */ __asm { MOVZX R11D,uint8_t ptr [RDX + RCX*0x4 + -0x4a9c] }
    /* +0xf2e816 */ __asm { NOT R11B }
    /* +0xf2e819 */ __asm { ROL R11B,0x5 }
    /* +0xf2e81d */ __asm { IMUL EAX,EAX,-0x2901 }
    /* +0xf2e823 */ __asm { MOV uint8_t ptr [RSP + 0x42],R11B }
    /* +0xf2e828 */ __asm { MOVZX EDX,uint8_t ptr [RDX + RCX*0x4 + -0x4a9b] }
    /* +0xf2e830 */ __asm { NOT DL }
    /* +0xf2e832 */ __asm { ROL DL,0x5 }
    /* +0xf2e835 */ __asm { MOV uint8_t ptr [RSP + 0x43],DL }
    /* +0xf2e839 */ __asm { MOV ECX,0x9102c3cc }
    /* +0xf2e83e */ __asm { XOR ECX,dword ptr [RSP + 0x40] }
    /* +0xf2e842 */ __asm { MOV EDX,0x1 }
    /* +0xf2e847 */ __asm { SHL EDX,CL }
    /* +0xf2e849 */ __asm { NOT EAX }
    /* +0xf2e84b */ __asm { MOVZX EAX,AX }
    /* +0xf2e84e */ __asm { AND EDX,ECX }
    /* +0xf2e850 */ __asm { CMP EDX,EAX }
    /* +0xf2e852 */ __asm { JZ 0x7fffa569e93d }
    /* +0xf2e858 */ __asm { PXOR XMM2,XMM2 }
    /* +0xf2e85c */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM2 }
    /* +0xf2e862 */ __asm { PUSHFQ }
    /* +0xf2e863 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xf2e86b */ __asm { POPFQ }
    /* +0xf2e86c */ __asm { MOV dword ptr [RSP + 0x58],0xc4568976 }
    /* +0xf2e874 */ __asm { MOV EDX,dword ptr [RSP + 0x58] }
    /* +0xf2e878 */ __asm { MOV EAX,0x9e6cf616 }
    /* +0xf2e87d */ __asm { IMUL EAX,EAX,-0x11506cfd }
    /* +0xf2e883 */ __asm { ADD EAX,0x7b0a1ccb }
    /* +0xf2e888 */ __asm { CMP EDX,EAX }
    /* +0xf2e88a */ __asm { JA 0x7fffa569e894 }
    /* +0xf2e88c */ __asm { SBB uint8_t ptr [RDI],BH }
    /* +0xf2e88e */ __asm { JLE 0x7fffa569e904 }
    /* +0xf2e890 */ __asm { JL 0x7fffa569e8d5 }
    /* +0xf2e892 */ __asm { ADC AL,0xb2 }
    /* +0xf2e894 */ __asm { MOV EDX,0x68abf45d }
    /* +0xf2e899 */ __asm { ADD EDX,0xb8542ca5 }
    /* +0xf2e89f */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xf2e8a7 */ __asm { MOV dword ptr [RSP + 0x58],EDX }
    /* +0xf2e8ab */ __asm { MOV EDX,dword ptr [RSP + 0x58] }
    /* +0xf2e8af */ __asm { CMP EDX,0x4416c5fb }
    /* +0xf2e8b5 */ __asm { JC 0x7fffa569e8bc }
    /* +0xf2e8b7 */ __asm { SBB EAX,0x47af6500 }
    /* +0xf2e8bc */ __asm { MOV dword ptr [RSP + 0x58],0x181c73b1 }
    /* +0xf2e8c4 */ __asm { MOV EDX,dword ptr [RSP + 0x58] }
    /* +0xf2e8c8 */ __asm { TEST DL,0x1 }
    /* +0xf2e8cb */ __asm { NOP }
    /* +0xf2e8cc */ __asm { NOP }
    /* +0xf2e8cd */ __asm { NOP }
    /* +0xf2e8ce */ __asm { NOP }
    /* +0xf2e8cf */ __asm { NOP }
    /* +0xf2e8d0 */ __asm { MOV RBP,R8 }
    /* +0xf2e8d3 */ __asm { MOV R15D,R9D }
    /* +0xf2e8d6 */ __asm { MOV R12,R10 }
    /* +0xf2e8d9 */ __asm { LEA R8,[0x7fffa47b7a40] }
    /* +0xf2e8e0 */ __asm { MOV RCX,-0x5664c7c0b843a631 }
    /* +0xf2e8ea */ __asm { CMP R8,RCX }
    /* +0xf2e8ed */ __asm { JZ 0x7fffa569f776 }
    /* +0xf2e8f3 */ __asm { MOV DX,0x8acc }
    /* +0xf2e8f7 */ __asm { MOV ECX,0x72ca9e71 }
    /* +0xf2e8fc */ __asm { MOV AX,0xba83 }
    /* +0xf2e900 */ __asm { IMUL EAX,EAX,0x2e5 }
    /* +0xf2e906 */ __asm { ADD EDX,0x7544 }
    /* +0xf2e90c */ __asm { MOVZX R9D,DX }
    /* +0xf2e910 */ __asm { ADD EAX,0x22f9 }
    /* +0xf2e915 */ __asm { MOVZX EDX,AX }
    /* +0xf2e918 */ __asm { MOV qword ptr [RSP + 0x58],R10 }
    /* +0xf2e91d */ __asm { MOV EAX,dword ptr [R8 + 0x5598] }
    /* +0xf2e924 */ __asm { ADD ECX,0x8d35618e }
    /* +0xf2e92a */ __asm { MOVSXD R10,ECX }
    /* +0xf2e92d */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xf2e932 */ __asm { SYSCALL }
    /* +0xf2e934 */ __asm { MOV R10,R12 }
    /* +0xf2e937 */ __asm { MOV R9D,R15D }
    /* +0xf2e93a */ __asm { MOV R8,RBP }
    /* +0xf2e93d */ __asm { MOV RBP,R8 }
    /* +0xf2e940 */ __asm { MOV R15D,R9D }
    /* +0xf2e943 */ __asm { LEA R8,[0x7fffa477eb22] }
    /* +0xf2e94a */ __asm { MOV RCX,0x1f54290d8fb21aa3 }
    /* +0xf2e954 */ __asm { CMP R8,RCX }
    /* +0xf2e957 */ __asm { NOP }
    /* +0xf2e958 */ __asm { NOP }
    /* +0xf2e959 */ __asm { NOP }
    /* +0xf2e95a */ __asm { NOP }
    /* +0xf2e95b */ __asm { NOP }
    /* +0xf2e95c */ __asm { MOV R11W,0xb182 }
    /* +0xf2e961 */ __asm { XOR R11D,0x4e7d }
    /* +0xf2e968 */ __asm { MOV qword ptr [RSP + 0x40],RDX }
    /* +0xf2e96d */ __asm { MOVSX RDX,R11W }
    /* +0xf2e971 */ __asm { MOV EAX,dword ptr [R8 + 0x631a] }
    /* +0xf2e978 */ __asm { JMP 0x7fffa569ebf1 }
    /* +0xf2e97d */ __asm { LEA RDX,[0x7fffa47bb2f6] }
    /* +0xf2e984 */ __asm { MOV RCX,0x1e6d81c7832ea857 }
    /* +0xf2e98e */ __asm { CMP RDX,RCX }
    /* +0xf2e991 */ __asm { JZ 0x7fffa569f6e3 }
    /* +0xf2e997 */ __asm { MOV R11D,0xccba8a1f }
    /* +0xf2e99d */ __asm { ADD R11D,0xb34375f5 }
    /* +0xf2e9a4 */ __asm { MOVZX EAX,uint8_t ptr [RDX + 0x1397] }
    /* +0xf2e9ab */ __asm { MOVZX ECX,uint8_t ptr [RDX + RAX*0x4 + 0x13a7] }
    /* +0xf2e9b3 */ __asm { ROL CL,0x4 }
    /* +0xf2e9b6 */ __asm { MOV uint8_t ptr [RSP + 0x40],CL }
    /* +0xf2e9ba */ __asm { MOVZX ECX,uint8_t ptr [RDX + RAX*0x4 + 0x13a8] }
    /* +0xf2e9c2 */ __asm { ROL CL,0x4 }
    /* +0xf2e9c5 */ __asm { MOV uint8_t ptr [RSP + 0x41],CL }
    /* +0xf2e9c9 */ __asm { MOVZX ECX,uint8_t ptr [RDX + RAX*0x4 + 0x13a9] }
    /* +0xf2e9d1 */ __asm { ROL CL,0x4 }
    /* +0xf2e9d4 */ __asm { MOV uint8_t ptr [RSP + 0x42],CL }
    /* +0xf2e9d8 */ __asm { MOVZX EDX,uint8_t ptr [RDX + RAX*0x4 + 0x13aa] }
    /* +0xf2e9e0 */ __asm { ROL DL,0x4 }
    /* +0xf2e9e3 */ __asm { MOV uint8_t ptr [RSP + 0x43],DL }
    /* +0xf2e9e7 */ __asm { MOVZX ECX,uint8_t ptr [R11] }
    /* +0xf2e9eb */ __asm { MOV EDX,0x65e8ce72 }
    /* +0xf2e9f0 */ __asm { XOR EDX,dword ptr [RSP + 0x40] }
    /* +0xf2e9f4 */ __asm { MOVD XMM2,EDX }
    /* +0xf2e9f8 */ __asm { MOV EDX,0x1 }
    /* +0xf2e9fd */ __asm { SHL EDX,CL }
    /* +0xf2e9ff */ __asm { MOVD XMM5,EDX }
    /* +0xf2ea03 */ __asm { PAND XMM5,XMM2 }
    /* +0xf2ea07 */ __asm { MOVD EDX,XMM5 }
    /* +0xf2ea0b */ __asm { TEST EDX,EDX }
    /* +0xf2ea0d */ __asm { JZ 0x7fffa569eafb }
    /* +0xf2ea13 */ __asm { MOV RBP,R8 }
    /* +0xf2ea16 */ __asm { MOV R15D,R9D }
    /* +0xf2ea19 */ __asm { LEA R8,[0x7fffa47b93be] }
    /* +0xf2ea20 */ __asm { MOV RDX,R8 }
    /* +0xf2ea23 */ __asm { XOR RDX,0x514dd9ea }
    /* +0xf2ea2a */ __asm { ADD RDX,0x1aa661e1 }
    /* +0xf2ea31 */ __asm { MOV RCX,0x73b6eab54f9d7a11 }
    /* +0xf2ea3b */ __asm { CMP RDX,RCX }
    /* +0xf2ea3e */ __asm { NOP }
    /* +0xf2ea3f */ __asm { NOP }
    /* +0xf2ea40 */ __asm { NOP }
    /* +0xf2ea41 */ __asm { NOP }
    /* +0xf2ea42 */ __asm { NOP }
    /* +0xf2ea43 */ __asm { NOP }
    /* +0xf2ea44 */ __asm { NOP }
    /* +0xf2ea45 */ __asm { NOP }
    /* +0xf2ea46 */ __asm { NOP }
    /* +0xf2ea47 */ __asm { NOP }
    /* +0xf2ea48 */ __asm { NOP }
    /* +0xf2ea49 */ __asm { NOP }
    /* +0xf2ea4a */ __asm { NOP }
    /* +0xf2ea4b */ __asm { NOP }
    /* +0xf2ea4c */ __asm { NOP }
    /* +0xf2ea4d */ __asm { NOP }
    /* +0xf2ea4e */ __asm { NOP }
    /* +0xf2ea74 */ __asm { MOV RBP,R8 }
    /* +0xf2ea77 */ __asm { MOV R15D,R9D }
    /* +0xf2ea7a */ __asm { LEA RAX,[0x7fffa47b8cdd] }
    /* +0xf2ea81 */ __asm { MOV RCX,-0x63c90b29348c2c30 }
    /* +0xf2ea8b */ __asm { CMP RAX,RCX }
    /* +0xf2ea8e */ __asm { JZ 0x7fffa569f6eb }
    /* +0xf2ea94 */ __asm { MOV EDX,0x97941541 }
    /* +0xf2ea99 */ __asm { IMUL R11D,EDX,0x7c586b7 }
    /* +0xf2eaa0 */ __asm { MOV EDX,0xae1ebeec }
    /* +0xf2eaa5 */ __asm { ADD EDX,0x51e14113 }
    /* +0xf2eaab */ __asm { MOVSXD RDX,EDX }
    /* +0xf2eaae */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0xf2eab3 */ __asm { MOV EAX,dword ptr [R11 + RAX*0x1 + 0x12c] }
    /* +0xf2eabb */ __asm { JMP 0x7fffa569ebf1 }
    /* +0xf2eada */ __asm { MOV R11W,0x9678 }
    /* +0xf2eadf */ __asm { MOV qword ptr [RSP + 0x40],RDX }
    /* +0xf2eae4 */ __asm { MOV EAX,dword ptr [R8 + -0x4371] }
    /* +0xf2eaeb */ __asm { XOR R11D,0x6987 }
    /* +0xf2eaf2 */ __asm { MOVSX RDX,R11W }
    /* +0xf2eaf6 */ __asm { JMP 0x7fffa569ebf1 }
    /* +0xf2eafb */ __asm { PUSHFQ }
    /* +0xf2eafc */ __asm { POP R11 }
    /* +0xf2eafe */ __asm { MOV EBP,0x68390a44 }
    /* +0xf2eb03 */ __asm { MOV EDX,0xa3d4b8e7 }
    /* +0xf2eb08 */ __asm { ADD EDX,0x8eaa9fe }
    /* +0xf2eb0e */ __asm { ADD EBP,0x744deed0 }
    /* +0xf2eb14 */ __asm { MOVSXD R12,EDX }
    /* +0xf2eb17 */ __asm { RDTSC }
    /* +0xf2eb19 */ __asm { SHL RDX,0x20 }
    /* +0xf2eb1d */ __asm { OR RDX,RAX }
    /* +0xf2eb20 */ __asm { MOV RCX,0x7facc0f7a00541bd }
    /* +0xf2eb2a */ __asm { IMUL RCX,RDX }
    /* +0xf2eb2e */ __asm { MOV RAX,-0x3bdb0b602243f5a6 }
    /* +0xf2eb38 */ __asm { ADD RAX,RCX }
    /* +0xf2eb3b */ __asm { MOV RDX,RAX }
    /* +0xf2eb3e */ __asm { SHR RDX,0x1b }
    /* +0xf2eb42 */ __asm { MOV R13,RAX }
    /* +0xf2eb45 */ __asm { SHR R13,0x2d }
    /* +0xf2eb49 */ __asm { MOV RCX,RAX }
    /* +0xf2eb4c */ __asm { SHR RCX,0x3b }
    /* +0xf2eb50 */ __asm { XOR EAX,0x2d }
    /* +0xf2eb53 */ __asm { CMP R12,RBP }
    /* +0xf2eb56 */ __asm { CMOVBE R13D,EAX }
    /* +0xf2eb5a */ __asm { XOR EDX,R13D }
    /* +0xf2eb5d */ __asm { ROR EDX,CL }
    /* +0xf2eb5f */ __asm { TEST R11D,0x100 }
    /* +0xf2eb66 */ __asm { NOP }
    /* +0xf2eb67 */ __asm { NOP }
    /* +0xf2eb68 */ __asm { NOP }
    /* +0xf2eb69 */ __asm { NOP }
    /* +0xf2eb6a */ __asm { NOP }
    /* +0xf2eb6b */ __asm { MOV dword ptr [RSP + 0x40],0x6731778c }
    /* +0xf2eb73 */ __asm { MOV EAX,dword ptr [RSP + 0x40] }
    /* +0xf2eb77 */ __asm { CMP EAX,0xcbe5cacd }
    /* +0xf2eb7c */ __asm { JNC 0x7fffa569f75a }
    /* +0xf2eb82 */ __asm { CMP EDX,0x10a974 }
    /* +0xf2eb88 */ __asm { NOP }
    /* +0xf2eb89 */ __asm { NOP }
    /* +0xf2eb8a */ __asm { NOP }
    /* +0xf2eb8b */ __asm { NOP }
    /* +0xf2eb8c */ __asm { NOP }
    /* +0xf2eb8d */ __asm { NOP }
    /* +0xf2eb8e */ __asm { NOP }
    /* +0xf2eb8f */ __asm { NOP }
    /* +0xf2eb90 */ __asm { NOP }
    /* +0xf2eb91 */ __asm { NOP }
    /* +0xf2eb92 */ __asm { NOP }
    /* +0xf2eb93 */ __asm { NOP }
    /* +0xf2eb94 */ __asm { NOP }
    /* +0xf2eb95 */ __asm { NOP }
    /* +0xf2eb96 */ __asm { NOP }
    /* +0xf2eb97 */ __asm { NOP }
    /* +0xf2eb98 */ __asm { NOP }
    /* +0xf2ebf1 */ __asm { MOV R12,R10 }
    /* +0xf2ebf4 */ __asm { SYSCALL }
    /* +0xf2ebf6 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xf2ebfd */ __asm { MOV R8,0x0 }
    /* +0xf2ec04 */ __asm { NOP }
    /* +0xf2ec05 */ __asm { TEST EAX,EAX }
    /* +0xf2ec07 */ __asm { MOV R10,R12 }
    /* +0xf2ec0a */ __asm { MOV R9D,R15D }
    /* +0xf2ec0d */ __asm { MOV R8,RBP }
    /* +0xf2ec10 */ __asm { JZ 0x7fffa569f0f7 }
    /* +0xf2ec16 */ __asm { MOV DX,0x2c95 }
    /* +0xf2ec1a */ __asm { XOR EDX,0x2095 }
    /* +0xf2ec20 */ __asm { ROL DX,0xb }
    /* +0xf2ec24 */ __asm { MOVZX R11D,DX }
    /* +0xf2ec28 */ __asm { MOV RCX,qword ptr GS:[R11] }
    /* +0xf2ec2c */ __asm { MOV RAX,-0x595b42a679ce3253 }
    /* +0xf2ec36 */ __asm { CMP RCX,RAX }
    /* +0xf2ec39 */ __asm { NOP }
    /* +0xf2ec3a */ __asm { NOP }
    /* +0xf2ec3b */ __asm { NOP }
    /* +0xf2ec3c */ __asm { NOP }
    /* +0xf2ec3d */ __asm { NOP }
    /* +0xf2ec3e */ __asm { NOP }
    /* +0xf2ec3f */ __asm { NOP }
    /* +0xf2ec40 */ __asm { NOP }
    /* +0xf2ec41 */ __asm { NOP }
    /* +0xf2ec42 */ __asm { NOP }
    /* +0xf2ec43 */ __asm { MOV R15D,dword ptr [RSP + 0xd0] }
    /* +0xf2ec4b */ __asm { MOV RBP,qword ptr [RSP + 0xc8] }
    /* +0xf2ec53 */ __asm { MOV ECX,0x7ec100ba }
    /* +0xf2ec58 */ __asm { RDTSC }
    /* +0xf2ec5a */ __asm { SHL RDX,0x20 }
    /* +0xf2ec5e */ __asm { OR RDX,RAX }
    /* +0xf2ec61 */ __asm { IMUL EAX,ECX,0x10e916ad }
    /* +0xf2ec67 */ __asm { CDQE }
    /* +0xf2ec69 */ __asm { IMUL RDX,RSI }
    /* +0xf2ec6d */ __asm { MOVQ XMM2,RDX }
    /* +0xf2ec72 */ __asm { PADDQ XMM2,xmmword ptr [0x7fffa56bc560] }
    /* +0xf2ec7a */ __asm { MOVQ R11,XMM2 }
    /* +0xf2ec7f */ __asm { MOV RCX,R11 }
    /* +0xf2ec82 */ __asm { SHR RCX,0x3b }
    /* +0xf2ec86 */ __asm { PSRLQ XMM2,0x1b }
    /* +0xf2ec8b */ __asm { SHR R11,0x2d }
    /* +0xf2ec8f */ __asm { MOVD XMM5,R11D }
    /* +0xf2ec94 */ __asm { PXOR XMM5,XMM2 }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtUnmapViewOfSectionEx  |  RVA: 0xf3d900  |  Size: 2936 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtUnmapViewOfSectionEx(void) {
    /* +0xf3d900 */ __asm { PUSH RBP }
    /* +0xf3d901 */ __asm { PUSH R13 }
    /* +0xf3d903 */ __asm { PUSH RDI }
    /* +0xf3d904 */ __asm { PUSH RSI }
    /* +0xf3d905 */ __asm { PUSH R15 }
    /* +0xf3d907 */ __asm { PUSH RBX }
    /* +0xf3d908 */ __asm { SUB RSP,0x58 }
    /* +0xf3d90c */ __asm { MOV R15D,R8D }
    /* +0xf3d90f */ __asm { MOV RBP,RDX }
    /* +0xf3d912 */ __asm { MOV RDI,RCX }
    /* +0xf3d915 */ __asm { MOV DX,0xbc70 }
    /* +0xf3d919 */ __asm { ADD EDX,0x3514 }
    /* +0xf3d91f */ __asm { MOVSX RCX,DX }
    /* +0xf3d923 */ __asm { XOR RCX,0x4c4 }
    /* +0xf3d92a */ __asm { MOV R11,qword ptr [RSP + 0x88] }
    /* +0xf3d932 */ __asm { MOV RDX,-0x5c31b5ff2dbab763 }
    /* +0xf3d93c */ __asm { CMP qword ptr [RCX + R11*0x1],RDX }
    /* +0xf3d940 */ __asm { JNZ 0x7fffa56ad94b }
    /* +0xf3d942 */ __asm { LEAVE }
    /* +0xf3d944 */ __asm { CDQ }
    /* +0xf3d945 */ __asm { SBB DL,uint8_t ptr [RDI] }
    /* +0xf3d947 */ __asm { MOV GS,word ptr [RDI] }
    /* +0xf3d949 */ __asm { JNO 0x7fffa56ad95a }
    /* +0xf3d94b */ __asm { MOV ECX,0x3f761ee1 }
    /* +0xf3d950 */ __asm { XOR ECX,0xad72f75d }
    /* +0xf3d956 */ __asm { IMUL R10D,ECX,0x1827f90d }
    /* +0xf3d95d */ __asm { RDTSC }
    /* +0xf3d95f */ __asm { SHL RDX,0x20 }
    /* +0xf3d963 */ __asm { OR RDX,RAX }
    /* +0xf3d966 */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0xf3d970 */ __asm { IMUL RCX,RDX }
    /* +0xf3d974 */ __asm { MOV R8,-0x22b18422c4a9c65e }
    /* +0xf3d97e */ __asm { ADD R8,RCX }
    /* +0xf3d981 */ __asm { MOV RCX,R8 }
    /* +0xf3d984 */ __asm { SHR RCX,0x3b }
    /* +0xf3d988 */ __asm { MOV RDX,R8 }
    /* +0xf3d98b */ __asm { SHR RDX,0x2d }
    /* +0xf3d98f */ __asm { MOV R9D,0x408dcf2d }
    /* +0xf3d995 */ __asm { ADD R9D,0x350b96dc }
    /* +0xf3d99c */ __asm { SHR R8,0x1b }
    /* +0xf3d9a0 */ __asm { XOR R8D,EDX }
    /* +0xf3d9a3 */ __asm { MOV EDX,R8D }
    /* +0xf3d9a6 */ __asm { ROR EDX,CL }
    /* +0xf3d9a8 */ __asm { CMP R9,R10 }
    /* +0xf3d9ab */ __asm { CMOVL EDX,R8D }
    /* +0xf3d9af */ __asm { AND EDX,0x3 }
    /* +0xf3d9b2 */ __asm { CMP EDX,0x2 }
    /* +0xf3d9b5 */ __asm { JC 0x7fffa56adb93 }
    /* +0xf3d9bb */ __asm { CMP EDX,0x3 }
    /* +0xf3d9be */ __asm { JNZ 0x7fffa56adcb5 }
    /* +0xf3d9c4 */ __asm { MOV EDX,0x59202d9c }
    /* +0xf3d9c9 */ __asm { ADD EDX,0x7ffe0330 }
    /* +0xf3d9cf */ __asm { LEA RAX,[0x7fffa47bbf04] }
    /* +0xf3d9d6 */ __asm { MOV RCX,-0x153d5e0a07c5d135 }
    /* +0xf3d9e0 */ __asm { MOV R9D,0xcea73346 }
    /* +0xf3d9e6 */ __asm { ADD R9,RCX }
    /* +0xf3d9e9 */ __asm { MOV R10,RAX }
    /* +0xf3d9ec */ __asm { SUB R10,RDX }
    /* +0xf3d9ef */ __asm { XOR R10,-0x701f9b1e }
    /* +0xf3d9f6 */ __asm { CMP R9,R10 }
    /* +0xf3d9f9 */ __asm { NOP }
    /* +0xf3d9fa */ __asm { NOP }
    /* +0xf3d9fb */ __asm { NOP }
    /* +0xf3d9fc */ __asm { NOP }
    /* +0xf3d9fd */ __asm { NOP }
    /* +0xf3d9fe */ __asm { MOV CX,0x8462 }
    /* +0xf3da02 */ __asm { ADD ECX,0xffffddb8 }
    /* +0xf3da08 */ __asm { MOVZX R11D,CX }
    /* +0xf3da0c */ __asm { XOR R11,0x6a26 }
    /* +0xf3da13 */ __asm { MOV R9,RAX }
    /* +0xf3da16 */ __asm { ADD R9,R11 }
    /* +0xf3da19 */ __asm { MOVZX R11D,uint8_t ptr [RAX + R11*0x1 + 0x9] }
    /* +0xf3da1f */ __asm { MOVZX ECX,uint8_t ptr [R9 + R11*0x4 + 0xf] }
    /* +0xf3da25 */ __asm { NOT CL }
    /* +0xf3da27 */ __asm { ROL CL,0x5 }
    /* +0xf3da2a */ __asm { MOV uint8_t ptr [RSP + 0x40],CL }
    /* +0xf3da2e */ __asm { MOVZX ECX,uint8_t ptr [R9 + R11*0x4 + 0x10] }
    /* +0xf3da34 */ __asm { NOT CL }
    /* +0xf3da36 */ __asm { ROL CL,0x5 }
    /* +0xf3da39 */ __asm { MOV uint8_t ptr [RSP + 0x41],CL }
    /* +0xf3da3d */ __asm { MOVZX ECX,uint8_t ptr [R9 + R11*0x4 + 0x11] }
    /* +0xf3da43 */ __asm { NOT CL }
    /* +0xf3da45 */ __asm { ROL CL,0x5 }
    /* +0xf3da48 */ __asm { MOV uint8_t ptr [RSP + 0x42],CL }
    /* +0xf3da4c */ __asm { MOVZX R11D,uint8_t ptr [R9 + R11*0x4 + 0x12] }
    /* +0xf3da52 */ __asm { NOT R11B }
    /* +0xf3da55 */ __asm { ROL R11B,0x5 }
    /* +0xf3da59 */ __asm { MOV uint8_t ptr [RSP + 0x43],R11B }
    /* +0xf3da5e */ __asm { MOV ECX,0x9102c3cc }
    /* +0xf3da63 */ __asm { XOR ECX,dword ptr [RSP + 0x40] }
    /* +0xf3da67 */ __asm { MOV EDX,0x1 }
    /* +0xf3da6c */ __asm { SHL EDX,CL }
    /* +0xf3da6e */ __asm { MOVD XMM1,EDX }
    /* +0xf3da72 */ __asm { MOVD XMM5,ECX }
    /* +0xf3da76 */ __asm { PAND XMM5,XMM1 }
    /* +0xf3da7a */ __asm { MOVD ECX,XMM5 }
    /* +0xf3da7e */ __asm { TEST ECX,ECX }
    /* +0xf3da80 */ __asm { JZ 0x7fffa56ae0cd }
    /* +0xf3da86 */ __asm { PUSHFQ }
    /* +0xf3da87 */ __asm { POP RAX }
    /* +0xf3da88 */ __asm { PXOR XMM1,XMM1 }
    /* +0xf3da8c */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM1 }
    /* +0xf3da92 */ __asm { TEST EAX,0x100 }
    /* +0xf3da97 */ __asm { JZ 0x7fffa56ada9f }
    /* +0xf3da99 */ __asm { MOV ECX,0xe512a06e }
    /* +0xf3da9e */ __asm { OUT DX,EAX }
    /* +0xf3da9f */ __asm { MOV dword ptr [RSP + 0x38],0xdbd76db6 }
    /* +0xf3daa7 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3daab */ __asm { CMP ECX,0x328eb8e1 }
    /* +0xf3dab1 */ __asm { NOP }
    /* +0xf3dab2 */ __asm { NOP }
    /* +0xf3dab3 */ __asm { NOP }
    /* +0xf3dab4 */ __asm { NOP }
    /* +0xf3dab5 */ __asm { NOP }
    /* +0xf3dab6 */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xf3dabe */ __asm { MOV dword ptr [RSP + 0x38],0xf05e95b0 }
    /* +0xf3dac6 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3daca */ __asm { TEST ECX,ECX }
    /* +0xf3dacc */ __asm { JNS 0x7fffa56ae3e1 }
    /* +0xf3dad2 */ __asm { TEST EAX,0x100 }
    /* +0xf3dad7 */ __asm { NOP }
    /* +0xf3dad8 */ __asm { NOP }
    /* +0xf3dad9 */ __asm { NOP }
    /* +0xf3dada */ __asm { NOP }
    /* +0xf3dadb */ __asm { NOP }
    /* +0xf3dadc */ __asm { NOP }
    /* +0xf3dadd */ __asm { NOP }
    /* +0xf3dade */ __asm { NOP }
    /* +0xf3dadf */ __asm { NOP }
    /* +0xf3dae0 */ __asm { NOP }
    /* +0xf3dae1 */ __asm { MOV ECX,0xb800f326 }
    /* +0xf3dae6 */ __asm { IMUL ECX,ECX,-0x2aba0bed }
    /* +0xf3daec */ __asm { MOV dword ptr [RSP + 0x38],ECX }
    /* +0xf3daf0 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3daf4 */ __asm { CMP ECX,0x88ffdca }
    /* +0xf3dafa */ __asm { NOP }
    /* +0xf3dafb */ __asm { NOP }
    /* +0xf3dafc */ __asm { NOP }
    /* +0xf3dafd */ __asm { NOP }
    /* +0xf3dafe */ __asm { NOP }
    /* +0xf3daff */ __asm { NOP }
    /* +0xf3db00 */ __asm { LEA R13,[0x7fffa47ba89f] }
    /* +0xf3db07 */ __asm { MOV DX,0x5c11 }
    /* +0xf3db0b */ __asm { XOR EDX,0xffffb13c }
    /* +0xf3db11 */ __asm { MOV ECX,0x2f5fb2bf }
    /* +0xf3db16 */ __asm { ADD EDX,0x12e3 }
    /* +0xf3db1c */ __asm { MOVZX R9D,DX }
    /* +0xf3db20 */ __asm { LEA RAX,[0x7fffa47c0792] }
    /* +0xf3db27 */ __asm { MOV DX,0xff72 }
    /* +0xf3db2b */ __asm { MOV RSI,-0xa1f68a85 }
    /* +0xf3db35 */ __asm { SUB RSI,R13 }
    /* +0xf3db38 */ __asm { XOR EDX,0xd772 }
    /* +0xf3db3e */ __asm { ROL DX,0x8 }
    /* +0xf3db42 */ __asm { MOVZX EDX,DX }
    /* +0xf3db45 */ __asm { MOV qword ptr [RSP + 0x38],R10 }
    /* +0xf3db4a */ __asm { MOV EAX,dword ptr [RAX + -0x42ca] }
    /* +0xf3db50 */ __asm { XOR ECX,0xd0a04d40 }
    /* +0xf3db56 */ __asm { MOVSXD R10,ECX }
    /* +0xf3db59 */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xf3db5e */ __asm { SYSCALL }
    /* +0xf3db60 */ __asm { MOV RCX,0x6897ff23455fec65 }
    /* +0xf3db6a */ __asm { CMP RSI,RCX }
    /* +0xf3db6d */ __asm { JZ 0x7fffa56ae403 }
    /* +0xf3db73 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xf3db7a */ __asm { MOV RAX,0x0 }
    /* +0xf3db81 */ __asm { NOP }
    /* +0xf3db82 */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xf3db87 */ __asm { MOV EAX,dword ptr [R13 + 0x2745] }
    /* +0xf3db8e */ __asm { JMP 0x7fffa56ae3b8 }
    /* +0xf3db93 */ __asm { CMP EDX,0x1 }
    /* +0xf3db96 */ __asm { JZ 0x7fffa56addfc }
    /* +0xf3db9c */ __asm { MOV EAX,0x453b654c }
    /* +0xf3dba1 */ __asm { MOV RCX,0x6e6cbcb6013fe681 }
    /* +0xf3dbab */ __asm { CMP RAX,RCX }
    /* +0xf3dbae */ __asm { JZ 0x7fffa56ae2ce }
    /* +0xf3dbb4 */ __asm { TEST uint8_t ptr [RAX + 0x3ac29cf4],0x1 }
    /* +0xf3dbbb */ __asm { JZ 0x7fffa56ae2de }
    /* +0xf3dbc1 */ __asm { PXOR XMM1,XMM1 }
    /* +0xf3dbc5 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM1 }
    /* +0xf3dbcb */ __asm { MOV RAX,0x272021969c4dba67 }
    /* +0xf3dbd5 */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xf3dbdd */ __asm { MOV dword ptr [RSP + 0x38],0x8db06d3f }
    /* +0xf3dbe5 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3dbe9 */ __asm { MOV dword ptr [RSP + 0x38],0x1b2edf8d }
    /* +0xf3dbf1 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3dbf5 */ __asm { CMP ECX,0xf77db0f5 }
    /* +0xf3dbfb */ __asm { JNC 0x7fffa56ae42b }
    /* +0xf3dc01 */ __asm { PUSHFQ }
    /* +0xf3dc02 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xf3dc0a */ __asm { POPFQ }
    /* +0xf3dc0b */ __asm { LEA RAX,[0x7fffa47c3e8a] }
    /* +0xf3dc12 */ __asm { MOV RCX,-0x17a0038afbaca60 }
    /* +0xf3dc1c */ __asm { MOV EDX,0xc0000183 }
    /* +0xf3dc21 */ __asm { ADD RDX,RCX }
    /* +0xf3dc24 */ __asm { CMP RAX,RDX }
    /* +0xf3dc27 */ __asm { JZ 0x7fffa56ae43f }
    /* +0xf3dc2d */ __asm { MOV CX,0xfa0 }
    /* +0xf3dc31 */ __asm { XOR ECX,0xf88 }
    /* +0xf3dc37 */ __asm { MOVZX EDX,CX }
    /* +0xf3dc3a */ __asm { MOV CX,0x39d2 }
    /* +0xf3dc3e */ __asm { LEA RBX,[0x7fffa47c21f6] }
    /* +0xf3dc45 */ __asm { MOV R8D,0x17fea21e }
    /* +0xf3dc4b */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xf3dc52 */ __asm { MOV R9,0x0 }
    /* +0xf3dc59 */ __asm { NOP }
    /* +0xf3dc5b */ __asm { MOV qword ptr [RSP + 0x38],R9 }
    /* +0xf3dc60 */ __asm { MOV EAX,dword ptr [RAX + -0x79c2] }
    /* +0xf3dc66 */ __asm { MOV R10D,0x17fea21d }
    /* +0xf3dc6c */ __asm { SUB R10D,R8D }
    /* +0xf3dc6f */ __asm { MOVSXD R10,R10D }
    /* +0xf3dc72 */ __asm { XOR ECX,0x39c2 }
    /* +0xf3dc78 */ __asm { MOVZX R9D,CX }
    /* +0xf3dc7c */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xf3dc81 */ __asm { SYSCALL }
    /* +0xf3dc83 */ __asm { MOV RCX,0x308dc25ab70220e0 }
    /* +0xf3dc8d */ __asm { CMP RBX,RCX }
    /* +0xf3dc90 */ __asm { JZ 0x7fffa56ae447 }
    /* +0xf3dc96 */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xf3dc9b */ __asm { MOV ECX,0xf2c3c3d0 }
    /* +0xf3dca0 */ __asm { ADD ECX,0xa4fc3c18 }
    /* +0xf3dca6 */ __asm { ROL ECX,0xa }
    /* +0xf3dca9 */ __asm { MOVSXD RCX,ECX }
    /* +0xf3dcac */ __asm { MOV EAX,dword ptr [RCX + RBX*0x1 + 0x24] }
    /* +0xf3dcb0 */ __asm { JMP 0x7fffa56ae3b8 }
    /* +0xf3dcb5 */ __asm { MOV EAX,0xaf7dab1b }
    /* +0xf3dcba */ __asm { MOV RCX,-0x50079ee63ba24519 }
    /* +0xf3dcc4 */ __asm { XOR RCX,-0x52613d8e }
    /* +0xf3dccb */ __asm { MOV RDX,-0xba95a3f8 }
    /* +0xf3dcd5 */ __asm { ADD RDX,RCX }
    /* +0xf3dcd8 */ __asm { IMUL RDX,RAX }
    /* +0xf3dcdc */ __asm { MOV RCX,-0xd52d788c }
    /* +0xf3dce6 */ __asm { ADD RCX,RDX }
    /* +0xf3dce9 */ __asm { MOV RDX,0x2a89b0da1f320f63 }
    /* +0xf3dcf3 */ __asm { CMP RCX,RDX }
    /* +0xf3dcf6 */ __asm { JZ 0x7fffa56ae3d0 }
    /* +0xf3dcfc */ __asm { MOV ECX,0xdce8a7fa }
    /* +0xf3dd01 */ __asm { ADD ECX,0x352c7471 }
    /* +0xf3dd07 */ __asm { MOVSXD RCX,ECX }
    /* +0xf3dd0a */ __asm { XOR RCX,-0x3d6ab772 }
    /* +0xf3dd11 */ __asm { MOV ECX,dword ptr [RAX + RCX*0x1 + 0x240] }
    /* +0xf3dd18 */ __asm { AND ECX,0x1 }
    /* +0xf3dd1b */ __asm { MOV DX,0x850f }
    /* +0xf3dd1f */ __asm { ADD EDX,0x7af1 }
    /* +0xf3dd25 */ __asm { MOVZX EDX,DX }
    /* +0xf3dd28 */ __asm { CMP ECX,EDX }
    /* +0xf3dd2a */ __asm { JNZ 0x7fffa56adf4c }
    /* +0xf3dd30 */ __asm { PXOR XMM1,XMM1 }
    /* +0xf3dd34 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM1 }
    /* +0xf3dd3a */ __asm { MOV dword ptr [RSP + 0x38],0xe6dcc198 }
    /* +0xf3dd42 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3dd46 */ __asm { MOV CX,0xc4c2 }
    /* +0xf3dd4a */ __asm { ADD ECX,0x1b3d }
    /* +0xf3dd50 */ __asm { MOVSX ECX,CX }
    /* +0xf3dd53 */ __asm { MOV dword ptr [RSP + 0x38],ECX }
    /* +0xf3dd57 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3dd5b */ __asm { LEA RAX,[0x7fffa47b5bd1] }
    /* +0xf3dd62 */ __asm { MOV RCX,-0x1d6580d80e2e0101 }
    /* +0xf3dd6c */ __asm { IMUL RCX,RAX }
    /* +0xf3dd70 */ __asm { MOV RDX,-0x735af7818e774d33 }
    /* +0xf3dd7a */ __asm { ADD RDX,RCX }
    /* +0xf3dd7d */ __asm { XOR RDX,-0x3dffcc17 }
    /* +0xf3dd84 */ __asm { MOV RCX,0x52b5d42c08519d20 }
    /* +0xf3dd8e */ __asm { CMP RDX,RCX }
    /* +0xf3dd91 */ __asm { NOP }
    /* +0xf3dd92 */ __asm { NOP }
    /* +0xf3dd93 */ __asm { NOP }
    /* +0xf3dd94 */ __asm { NOP }
    /* +0xf3dd95 */ __asm { NOP }
    /* +0xf3dd96 */ __asm { LEA R13,[0x7fffa4784d1e] }
    /* +0xf3dd9d */ __asm { MOV CX,0x76af }
    /* +0xf3dda1 */ __asm { MOV R8W,0x27a9 }
    /* +0xf3dda6 */ __asm { ADD R8D,0xffffd867 }
    /* +0xf3ddad */ __asm { MOV qword ptr [RSP + 0x38],R9 }
    /* +0xf3ddb2 */ __asm { MOV EDX,0x97d63593 }
    /* +0xf3ddb7 */ __asm { ADD EDX,0x6829ca6c }
    /* +0xf3ddbd */ __asm { MOVSXD R10,EDX }
    /* +0xf3ddc0 */ __asm { IMUL ECX,ECX,0x5359 }
    /* +0xf3ddc6 */ __asm { NOT ECX }
    /* +0xf3ddc8 */ __asm { MOVZX EDX,CX }
    /* +0xf3ddcb */ __asm { MOV EAX,dword ptr [RAX + 0x7407] }
    /* +0xf3ddd1 */ __asm { MOVZX R9D,R8W }
    /* +0xf3ddd5 */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xf3ddda */ __asm { SYSCALL }
    /* +0xf3dddc */ __asm { MOV RCX,-0x23286b3300e6e5a3 }
    /* +0xf3dde6 */ __asm { CMP R13,RCX }
    /* +0xf3dde9 */ __asm { NOP }
    /* +0xf3ddea */ __asm { NOP }
    /* +0xf3ddeb */ __asm { NOP }
    /* +0xf3ddec */ __asm { NOP }
    /* +0xf3dded */ __asm { NOP }
    /* +0xf3ddee */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xf3ddf3 */ __asm { MOV EAX,dword ptr [R13 + 0x6a] }
    /* +0xf3ddf7 */ __asm { JMP 0x7fffa56ae3b8 }
    /* +0xf3ddfc */ __asm { MOV EDX,0xfa948d35 }
    /* +0xf3de01 */ __asm { MOV R8D,0x67aa331c }
    /* +0xf3de07 */ __asm { ADD EDX,0xc56b7357 }
    /* +0xf3de0d */ __asm { MOV RCX,-0xa402c506 }
    /* +0xf3de17 */ __asm { ADD RCX,R8 }
    /* +0xf3de1a */ __asm { ADD RCX,RDX }
    /* +0xf3de1d */ __asm { MOV RDX,-0x70e736565908a549 }
    /* +0xf3de27 */ __asm { CMP RCX,RDX }
    /* +0xf3de2a */ __asm { JNZ 0x7fffa56ade40 }
    /* +0xf3de2c */ __asm { NOP }
    /* +0xf3de2d */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xf3de34 */ __asm { MOV RAX,0x0 }
    /* +0xf3de3b */ __asm { ENTER 0x52e0,0x14 }
    /* +0xf3de3f */ __asm { SAHF }
    /* +0xf3de40 */ __asm { MOV ECX,0x5a00fd }
    /* +0xf3de45 */ __asm { IMUL EDX,ECX,0x7ffe03d9 }
    /* +0xf3de4b */ __asm { ADD EDX,0x3fffff6f }
    /* +0xf3de51 */ __asm { TEST uint8_t ptr [RDX + R8*0x1 + 0x240],0x1 }
    /* +0xf3de5a */ __asm { JZ 0x7fffa56ae1d9 }
    /* +0xf3de60 */ __asm { PXOR XMM1,XMM1 }
    /* +0xf3de64 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM1 }
    /* +0xf3de6a */ __asm { MOV dword ptr [RSP + 0x38],0xbdfcfd07 }
    /* +0xf3de72 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3de76 */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xf3de7e */ __asm { MOV dword ptr [RSP + 0x38],0xcad2658c }
    /* +0xf3de86 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3de8a */ __asm { CMP ECX,0x78e302d8 }
    /* +0xf3de90 */ __asm { JBE 0x7fffa56ae40b }
    /* +0xf3de96 */ __asm { PUSHFQ }
    /* +0xf3de97 */ __asm { POP RAX }
    /* +0xf3de98 */ __asm { TEST EAX,0x100 }
    /* +0xf3de9d */ __asm { NOP }
    /* +0xf3de9e */ __asm { NOP }
    /* +0xf3de9f */ __asm { NOP }
    /* +0xf3dea0 */ __asm { NOP }
    /* +0xf3dea1 */ __asm { NOP }
    /* +0xf3dea2 */ __asm { MOV dword ptr [RSP + 0x38],0x35229f9d }
    /* +0xf3deaa */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3deae */ __asm { LEA RAX,[0x7fffa4780559] }
    /* +0xf3deb5 */ __asm { MOV R9,RAX }
    /* +0xf3deb8 */ __asm { NOT R9 }
    /* +0xf3debb */ __asm { ROL R9,0x10 }
    /* +0xf3debf */ __asm { XOR R9,-0x867d6b7 }
    /* +0xf3dec6 */ __asm { MOV RCX,-0x42d2199cb9974eb6 }
    /* +0xf3ded0 */ __asm { CMP R9,RCX }
    /* +0xf3ded3 */ __asm { JZ 0x7fffa56ae414 }
    /* +0xf3ded9 */ __asm { MOV RSI,-0x70a695ff059d5cff }
    /* +0xf3dee3 */ __asm { MOV R11W,0x555c }
    /* +0xf3dee8 */ __asm { MOV qword ptr [RSP + 0x38],R9 }
    /* +0xf3deed */ __asm { LEA R13,[0x7fffa47b512b] }
    /* +0xf3def4 */ __asm { MOV ECX,0xb396e03 }
    /* +0xf3def9 */ __asm { XOR ECX,0xf4c691fc }
    /* +0xf3deff */ __asm { ROL ECX,0x11 }
    /* +0xf3df02 */ __asm { MOVSXD R10,ECX }
    /* +0xf3df05 */ __asm { MOV CX,0xb690 }
    /* +0xf3df09 */ __asm { IMUL ECX,ECX,-0x5b27 }
    /* +0xf3df0f */ __asm { MOVZX R9D,CX }
    /* +0xf3df13 */ __asm { LEA ECX,[R11 + R11*0x2] }
    /* +0xf3df17 */ __asm { ROL CX,0x1 }
    /* +0xf3df1a */ __asm { MOVZX EDX,CX }
    /* +0xf3df1d */ __asm { MOV EAX,dword ptr [RAX + 0x40c3] }
    /* +0xf3df23 */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xf3df28 */ __asm { SYSCALL }
    /* +0xf3df2a */ __asm { MOV ECX,0x6ee7ac3e }
    /* +0xf3df2f */ __asm { SUB RCX,RSI }
    /* +0xf3df32 */ __asm { CMP R13,RCX }
    /* +0xf3df35 */ __asm { JZ 0x7fffa56ae41c }
    /* +0xf3df3b */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xf3df40 */ __asm { MOV EAX,dword ptr [R13 + 0x734d] }
    /* +0xf3df47 */ __asm { JMP 0x7fffa56ae3b8 }
    /* +0xf3df4c */ __asm { ADD R11,-0xdb0 }
    /* +0xf3df53 */ __asm { MOV CX,0x1d1f }
    /* +0xf3df57 */ __asm { ADD ECX,0xffffe341 }
    /* +0xf3df5d */ __asm { XORPS XMM1,XMM1 }
    /* +0xf3df60 */ __asm { MOVAPS xmmword ptr [RSP + 0x40],XMM1 }
    /* +0xf3df65 */ __asm { MOVZX EDX,CX }
    /* +0xf3df68 */ __asm { MOV RCX,qword ptr GS:[RDX] }
    /* +0xf3df6c */ __asm { MOVQ XMM1,R11 }
    /* +0xf3df71 */ __asm { MOV EDX,0xafadffb7 }
    /* +0xf3df76 */ __asm { MOV R10D,0x97cfd831 }
    /* +0xf3df7c */ __asm { SUB R10D,EDX }
    /* +0xf3df7f */ __asm { MOV RCX,qword ptr [RCX + 0xd90] }
    /* +0xf3df86 */ __asm { OR R11,RCX }
    /* +0xf3df89 */ __asm { MOVQ XMM5,RCX }
    /* +0xf3df8e */ __asm { PXOR XMM5,XMM1 }
    /* +0xf3df92 */ __asm { MOVQ RCX,XMM5 }
    /* +0xf3df97 */ __asm { MOV EDX,0x9aa9e5d3 }
    /* +0xf3df9c */ __asm { ADD EDX,0xf7694dd9 }
    /* +0xf3dfa2 */ __asm { ROL EDX,0x13 }
    /* +0xf3dfa5 */ __asm { CMP RDX,R10 }
    /* +0xf3dfa8 */ __asm { CMOVGE RCX,R11 }
    /* +0xf3dfac */ __asm { NOT RCX }
    /* +0xf3dfaf */ __asm { ROL RCX,0x25 }
    /* +0xf3dfb3 */ __asm { ADD RCX,0x66005e48 }
    /* +0xf3dfba */ __asm { MOV RDX,0x1f7d1ac0ef47a362 }
    /* +0xf3dfc4 */ __asm { CMP RCX,RDX }
    /* +0xf3dfc7 */ __asm { NOP }
    /* +0xf3dfc8 */ __asm { NOP }
    /* +0xf3dfc9 */ __asm { NOP }
    /* +0xf3dfca */ __asm { NOP }
    /* +0xf3dfcb */ __asm { NOP }
    /* +0xf3dfcc */ __asm { NOP }
    /* +0xf3dfcd */ __asm { NOP }
    /* +0xf3dfce */ __asm { NOP }
    /* +0xf3dfcf */ __asm { NOP }
    /* +0xf3dfd0 */ __asm { NOP }
    /* +0xf3dfd1 */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xf3dfd9 */ __asm { MOV dword ptr [RSP + 0x38],0x1901f70a }
    /* +0xf3dfe1 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3dfe5 */ __asm { MOV ECX,0x928a5a64 }
    /* +0xf3dfea */ __asm { IMUL ECX,ECX,0x5bcc4583 }
    /* +0xf3dff0 */ __asm { MOV dword ptr [RSP + 0x38],ECX }
    /* +0xf3dff4 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3dff8 */ __asm { CMP ECX,0x5a72c1ec }
    /* +0xf3dffe */ __asm { JBE 0x7fffa56ae44f }
    /* +0xf3e004 */ __asm { LEA RAX,[0x7fffa47b81c2] }
    /* +0xf3e00b */ __asm { MOV R9,RAX }
    /* +0xf3e00e */ __asm { ROL R9,0x36 }
    /* +0xf3e012 */ __asm { MOV RCX,-0x4da8074f0d814d79 }
    /* +0xf3e01c */ __asm { IMUL RCX,R9 }
    /* +0xf3e020 */ __asm { MOV RDX,-0xfea3c5f8c1e0ad5 }
    /* +0xf3e02a */ __asm { CMP RCX,RDX }
    /* +0xf3e02d */ __asm { JZ 0x7fffa56ae461 }
    /* +0xf3e033 */ __asm { LEA RBX,[0x7fffa47bde2e] }
    /* +0xf3e03a */ __asm { MOV R13,RBX }
    /* +0xf3e03d */ __asm { ROL R13,0xb }
    /* +0xf3e041 */ __asm { MOV CX,0x398b }
    /* +0xf3e045 */ __asm { MOV qword ptr [RSP + 0x38],R9 }
    /* +0xf3e04a */ __asm { MOV DX,0x7291 }
    /* +0xf3e04e */ __asm { MOV R8W,0xad4e }
    /* +0xf3e053 */ __asm { MOV EAX,dword ptr [RAX + 0x4306] }
    /* +0xf3e059 */ __asm { IMUL R10D,ECX,0x59dd }
    /* +0xf3e060 */ __asm { MOVSX R10,R10W }
    /* +0xf3e064 */ __asm { ADD R13,-0x36df5af }
    /* +0xf3e06b */ __asm { ADD EDX,0x11b7 }
    /* +0xf3e071 */ __asm { XOR EDX,0x8458 }
    /* +0xf3e077 */ __asm { MOVZX R9D,DX }
    /* +0xf3e07b */ __asm { ADD R8D,0x52da }
    /* +0xf3e082 */ __asm { MOVZX EDX,R8W }
    /* +0xf3e086 */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xf3e08b */ __asm { SYSCALL }
    /* +0xf3e08d */ __asm { MOV RCX,-0x6f108a13876ae9b6 }
    /* +0xf3e097 */ __asm { CMP R13,RCX }
    /* +0xf3e09a */ __asm { NOP }
    /* +0xf3e09b */ __asm { NOP }
    /* +0xf3e09c */ __asm { NOP }
    /* +0xf3e09d */ __asm { NOP }
    /* +0xf3e09e */ __asm { NOP }
    /* +0xf3e09f */ __asm { MOV ECX,0xbb6ccd98 }
    /* +0xf3e0a4 */ __asm { ADD ECX,0x4493238a }
    /* +0xf3e0aa */ __asm { MOVSXD RCX,ECX }
    /* +0xf3e0ad */ __asm { MOV RAX,0x0 }
    /* +0xf3e0b4 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xf3e0bb */ __asm { NOP }
    /* +0xf3e0bc */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xf3e0c1 */ __asm { MOV EAX,dword ptr [RCX + RBX*0x1 + 0x94] }
    /* +0xf3e0c8 */ __asm { JMP 0x7fffa56ae3b8 }
    /* +0xf3e0cd */ __asm { PXOR XMM1,XMM1 }
    /* +0xf3e0d1 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM1 }
    /* +0xf3e0d7 */ __asm { MOV dword ptr [RSP + 0x38],0x41b893ee }
    /* +0xf3e0df */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3e0e3 */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xf3e0eb */ __asm { MOV dword ptr [RSP + 0x38],0xabf7fffe }
    /* +0xf3e0f3 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3e0f7 */ __asm { TEST CL,0x1 }
    /* +0xf3e0fa */ __asm { NOP }
    /* +0xf3e0fb */ __asm { NOP }
    /* +0xf3e0fc */ __asm { NOP }
    /* +0xf3e0fd */ __asm { NOP }
    /* +0xf3e0fe */ __asm { NOP }
    /* +0xf3e0ff */ __asm { MOV dword ptr [RSP + 0x38],0xd8d37168 }
    /* +0xf3e107 */ __asm { MOV ECX,dword ptr [RSP + 0x38] }
    /* +0xf3e10b */ __asm { MOV RCX,0x5ec3822fa1e1df05 }
    /* +0xf3e115 */ __asm { IMUL RCX,RCX,-0x4ff1f655 }
    /* +0xf3e11c */ __asm { LEA RAX,[0x7fffa47bc042] }
    /* +0xf3e123 */ __asm { ROL RCX,0x9 }
    /* +0xf3e127 */ __asm { CMP RAX,RCX }
    /* +0xf3e12a */ __asm { NOP }
    /* +0xf3e12b */ __asm { NOP }
    /* +0xf3e12c */ __asm { NOP }
    /* +0xf3e12d */ __asm { NOP }
    /* +0xf3e12e */ __asm { NOP }
    /* +0xf3e12f */ __asm { NOP }
    /* +0xf3e130 */ __asm { NOP }
    /* +0xf3e131 */ __asm { NOP }
    /* +0xf3e132 */ __asm { NOP }
    /* +0xf3e133 */ __asm { NOP }
    /* +0xf3e134 */ __asm { NOP }
    /* +0xf3e135 */ __asm { NOP }
    /* +0xf3e136 */ __asm { LEA R13,[0x7fffa47854de] }
    /* +0xf3e13d */ __asm { MOV qword ptr [RSP + 0x38],R9 }
    /* +0xf3e142 */ __asm { MOV EAX,dword ptr [RAX + 0x486] }
    /* +0xf3e148 */ __asm { MOV CX,0x33a1 }
    /* +0xf3e14c */ __asm { MOV DX,0xf138 }
    /* +0xf3e150 */ __asm { IMUL R10D,ECX,0x4b99 }
    /* +0xf3e157 */ __asm { XOR R10D,0xf9c6 }
    /* +0xf3e15e */ __asm { MOVSX R10,R10W }
    /* +0xf3e162 */ __asm { IMUL ECX,EDX,0x17f3 }
    /* +0xf3e168 */ __asm { MOVZX EDX,CX }
    /* +0xf3e16b */ __asm { MOV CX,0x82dd }
    /* +0xf3e16f */ __asm { XOR ECX,0x82cd }
    /* +0xf3e175 */ __asm { MOVZX R9D,CX }
    /* +0xf3e179 */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xf3e17e */ __asm { SYSCALL }
    /* +0xf3e180 */ __asm { MOV RCX,0xb510e626c811a86 }
    /* +0xf3e18a */ __asm { CMP R13,RCX }
    /* +0xf3e18d */ __asm { NOP }
}

