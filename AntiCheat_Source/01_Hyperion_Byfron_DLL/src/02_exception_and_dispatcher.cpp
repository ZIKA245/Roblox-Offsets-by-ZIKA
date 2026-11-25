// Subsystem: Exception & Page Fault Dispatchers
// Functions: 9
#include "../include/module_declarations.hpp"

// ============================================================================
// Function : Hook_ntdll_dll_NtRaiseHardError  |  RVA: 0xa08d20  |  Size: 1340 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtRaiseHardError(void) {
    /* +0xa08d20 */ __asm { PUSH R14 }
    /* +0xa08d22 */ __asm { PUSH RDI }
    /* +0xa08d23 */ __asm { PUSH RSI }
    /* +0xa08d24 */ __asm { PUSH RBP }
    /* +0xa08d25 */ __asm { PUSH RBX }
    /* +0xa08d26 */ __asm { PUSH R12 }
    /* +0xa08d28 */ __asm { SUB RSP,0x68 }
    /* +0xa08d2c */ __asm { MOV dword ptr [RSP + 0x50],0xda0be098 }
    /* +0xa08d34 */ __asm { MOV R11D,dword ptr [RSP + 0x50] }
    /* +0xa08d39 */ __asm { MOV R11D,0xe666667f }
    /* +0xa08d3f */ __asm { IMUL R11D,R11D,-0x3ffffffb }
    /* +0xa08d46 */ __asm { XOR EAX,EAX }
    /* +0xa08d48 */ __asm { CMP ECX,R11D }
    /* +0xa08d4b */ __asm { JZ 0x7fffa51792e0 }
    /* +0xa08d51 */ __asm { MOV EDI,ECX }
    /* +0xa08d53 */ __asm { MOV R12D,EDX }
    /* +0xa08d56 */ __asm { MOV RBX,qword ptr [RSP + 0xc8] }
    /* +0xa08d5e */ __asm { MOV R11D,0x5a823caa }
    /* +0xa08d64 */ __asm { NOP }
    /* +0xa08d65 */ __asm { MOV RCX,0x0 }
    /* +0xa08d6c */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xa08d73 */ __asm { RDTSC }
    /* +0xa08d75 */ __asm { SHL RDX,0x20 }
    /* +0xa08d79 */ __asm { OR RDX,RAX }
    /* +0xa08d7c */ __asm { MOV EAX,0x5e031805 }
    /* +0xa08d81 */ __asm { XOR EAX,0x9f269c8c }
    /* +0xa08d86 */ __asm { XOR R11D,0xc0000058 }
    /* +0xa08d8d */ __asm { ADD EAX,0x742ce9e4 }
    /* +0xa08d92 */ __asm { MOV R10W,0x6238 }
    /* +0xa08d97 */ __asm { ADD R10D,0xffff9dca }
    /* +0xa08d9e */ __asm { MOV RBP,-0x30ebf64fafbc6efb }
    /* +0xa08da8 */ __asm { IMUL RBP,RDX }
    /* +0xa08dac */ __asm { LEA EDX,[RBP + 0x3b563987] }
    /* +0xa08db2 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xa08dbc */ __asm { ADD RCX,RBP }
    /* +0xa08dbf */ __asm { MOV R14,RCX }
    /* +0xa08dc2 */ __asm { SHR R14,0x1b }
    /* +0xa08dc6 */ __asm { MOVQ XMM1,RCX }
    /* +0xa08dcb */ __asm { SHR RCX,0x3b }
    /* +0xa08dcf */ __asm { CMP R11,RAX }
    /* +0xa08dd2 */ __asm { CMOVA RDX,R14 }
    /* +0xa08dd6 */ __asm { PSRLQ XMM1,0x2d }
    /* +0xa08ddb */ __asm { MOVQ XMM4,RDX }
    /* +0xa08de0 */ __asm { PXOR XMM4,XMM1 }
    /* +0xa08de4 */ __asm { MOVD R11D,XMM4 }
    /* +0xa08de9 */ __asm { ROR R11D,CL }
    /* +0xa08dec */ __asm { MOV EBP,dword ptr [RSP + 0xc0] }
    /* +0xa08df3 */ __asm { MOVZX EDX,R10W }
    /* +0xa08df7 */ __asm { AND R11D,0x3 }
    /* +0xa08dfb */ __asm { CMP R11D,EDX }
    /* +0xa08dfe */ __asm { JNC 0x7fffa5179034 }
    /* +0xa08e04 */ __asm { CMP R11D,0x1 }
    /* +0xa08e08 */ __asm { JNZ 0x7fffa5179068 }
    /* +0xa08e0e */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xa08e15 */ __asm { MOV RCX,0x0 }
    /* +0xa08e1c */ __asm { NOP }
    /* +0xa08e1d */ __asm { RDTSC }
    /* +0xa08e1f */ __asm { SHL RDX,0x20 }
    /* +0xa08e23 */ __asm { OR RDX,RAX }
    /* +0xa08e26 */ __asm { MOV RAX,-0x83d143f70980d4b }
    /* +0xa08e30 */ __asm { IMUL RAX,RDX }
    /* +0xa08e34 */ __asm { MOV R11,-0x4d797d078b6caea6 }
    /* +0xa08e3e */ __asm { ADD R11,RAX }
    /* +0xa08e41 */ __asm { MOV RDX,R11 }
    /* +0xa08e44 */ __asm { SHR RDX,0x1b }
    /* +0xa08e48 */ __asm { MOV RCX,R11 }
    /* +0xa08e4b */ __asm { SHR RCX,0x3b }
    /* +0xa08e4f */ __asm { SHR R11,0x2d }
    /* +0xa08e53 */ __asm { XOR R11D,EDX }
    /* +0xa08e56 */ __asm { ROR R11D,CL }
    /* +0xa08e59 */ __asm { MOV dword ptr [RSP + 0x50],0xd7d7e6a1 }
    /* +0xa08e61 */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xa08e65 */ __asm { MOV R10D,0xca87054d }
    /* +0xa08e6b */ __asm { ADD R10D,0x712ee3f }
    /* +0xa08e72 */ __asm { CMP EDX,R10D }
    /* +0xa08e75 */ __asm { JA 0x7fffa5178e78 }
    /* +0xa08e77 */ __asm { PUSH RCX }
    /* +0xa08e78 */ __asm { CMP R11D,0x45c0d3e }
    /* +0xa08e7f */ __asm { MOV EDX,R12D }
    /* +0xa08e82 */ __asm { JA 0x7fffa5178fd7 }
    /* +0xa08e88 */ __asm { NOP }
    /* +0xa08e89 */ __asm { MOV RCX,0x0 }
    /* +0xa08e90 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xa08e97 */ __asm { MOV RAX,qword ptr [RSP + 0x98] }
    /* +0xa08e9f */ __asm { MOV R10,-0x3d8f3dca8ae743a3 }
    /* +0xa08ea9 */ __asm { CMP qword ptr [RAX + -0x628],R10 }
    /* +0xa08eb0 */ __asm { NOP }
    /* +0xa08eb1 */ __asm { NOP }
    /* +0xa08eb2 */ __asm { NOP }
    /* +0xa08eb3 */ __asm { NOP }
    /* +0xa08eb4 */ __asm { NOP }
    /* +0xa08eb5 */ __asm { NOP }
    /* +0xa08eb6 */ __asm { NOP }
    /* +0xa08eb7 */ __asm { NOP }
    /* +0xa08eb8 */ __asm { NOP }
    /* +0xa08eb9 */ __asm { NOP }
    /* +0xa08eba */ __asm { NOP }
    /* +0xa08ebb */ __asm { NOP }
    /* +0xa08ebc */ __asm { NOP }
    /* +0xa08ebd */ __asm { NOP }
    /* +0xa08ebe */ __asm { NOP }
    /* +0xa08ebf */ __asm { MOV ECX,0xdc9220e0 }
    /* +0xa08ec4 */ __asm { MOV R10,-0x5ddf9a7d0a5fa829 }
    /* +0xa08ece */ __asm { CMP RCX,R10 }
    /* +0xa08ed1 */ __asm { NOP }
    /* +0xa08ed2 */ __asm { NOP }
    /* +0xa08ed3 */ __asm { NOP }
    /* +0xa08ed4 */ __asm { NOP }
    /* +0xa08ed5 */ __asm { NOP }
    /* +0xa08ed6 */ __asm { TEST uint8_t ptr [RCX + -0x5c941ea0],0x1 }
    /* +0xa08edd */ __asm { JNZ 0x7fffa5178fd7 }
    /* +0xa08ee3 */ __asm { PXOR XMM1,XMM1 }
    /* +0xa08ee7 */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM1 }
    /* +0xa08eed */ __asm { MOV dword ptr [RSP + 0x60],0x58c3d220 }
    /* +0xa08ef5 */ __asm { MOV R11D,dword ptr [RSP + 0x60] }
    /* +0xa08efa */ __asm { MOV dword ptr [RSP + 0x50],0x0 }
    /* +0xa08f02 */ __asm { MOV RAX,qword ptr [RAX + -0x8a8] }
    /* +0xa08f09 */ __asm { MOV R11W,0xaa98 }
    /* +0xa08f0e */ __asm { ADD R11D,0x55c8 }
    /* +0xa08f15 */ __asm { MOVZX ECX,R11W }
    /* +0xa08f19 */ __asm { MOV RDX,qword ptr GS:[RCX] }
    /* +0xa08f1d */ __asm { MOV RDX,0x3d724c489fa4ef24 }
    /* +0xa08f27 */ __asm { CMP RAX,RDX }
    /* +0xa08f2a */ __asm { NOP }
    /* +0xa08f2b */ __asm { NOP }
    /* +0xa08f2c */ __asm { NOP }
    /* +0xa08f2d */ __asm { NOP }
    /* +0xa08f2e */ __asm { NOP }
    /* +0xa08f2f */ __asm { NOP }
    /* +0xa08f30 */ __asm { NOP }
    /* +0xa08f31 */ __asm { NOP }
    /* +0xa08f32 */ __asm { NOP }
    /* +0xa08f33 */ __asm { NOP }
    /* +0xa08f34 */ __asm { NOP }
    /* +0xa08f35 */ __asm { NOP }
    /* +0xa08f36 */ __asm { NOP }
    /* +0xa08f37 */ __asm { NOP }
    /* +0xa08f38 */ __asm { NOP }
    /* +0xa08f39 */ __asm { NOP }
    /* +0xa08f3a */ __asm { NOP }
    /* +0xa08f5b */ __asm { MOV ESI,R8D }
    /* +0xa08f5e */ __asm { MOV R14,R9 }
    /* +0xa08f61 */ __asm { PUSHFQ }
    /* +0xa08f62 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xa08f6a */ __asm { POPFQ }
    /* +0xa08f6b */ __asm { LEA RCX,[0x7fffa47b5185] }
    /* +0xa08f72 */ __asm { MOV R8,0x2ef04feccc4f1f85 }
    /* +0xa08f7c */ __asm { CMP RCX,R8 }
    /* +0xa08f7f */ __asm { NOP }
    /* +0xa08f80 */ __asm { NOP }
    /* +0xa08f81 */ __asm { NOP }
    /* +0xa08f82 */ __asm { NOP }
    /* +0xa08f83 */ __asm { NOP }
    /* +0xa08f84 */ __asm { MOV R11W,0x7624 }
    /* +0xa08f89 */ __asm { IMUL R11D,R11D,0x4b9d }
    /* +0xa08f90 */ __asm { ROL R11W,0x1 }
    /* +0xa08f94 */ __asm { MOV EDX,0xf083dc8f }
    /* +0xa08f99 */ __asm { ADD EDX,0x734f3b39 }
    /* +0xa08f9f */ __asm { XOR EDX,0x9c2ce837 }
    /* +0xa08fa5 */ __asm { MOVSXD R10,EDX }
    /* +0xa08fa8 */ __asm { MOVZX EDX,R11W }
    /* +0xa08fac */ __asm { MOV R11W,0x9d82 }
    /* +0xa08fb1 */ __asm { ADD R11D,0x628e }
    /* +0xa08fb8 */ __asm { MOVZX R9D,R11W }
    /* +0xa08fbc */ __asm { MOV qword ptr [RSP + 0x60],R8 }
    /* +0xa08fc1 */ __asm { MOV EAX,dword ptr [RCX + 0x7343] }
    /* +0xa08fc7 */ __asm { LEA R8,[RSP + 0x50] }
    /* +0xa08fcc */ __asm { SYSCALL }
    /* +0xa08fce */ __asm { MOV R9,R14 }
    /* +0xa08fd1 */ __asm { MOV EDX,R12D }
    /* +0xa08fd4 */ __asm { MOV R8D,ESI }
    /* +0xa08fd7 */ __asm { LEA RCX,[0x7fffa477f213] }
    /* +0xa08fde */ __asm { MOV R11D,0xffca6951 }
    /* +0xa08fe4 */ __asm { IMUL R11D,R11D,0x1a9ba01 }
    /* +0xa08feb */ __asm { XOR R11,RCX }
    /* +0xa08fee */ __asm { ADD R11,0x73ee405d }
    /* +0xa08ff5 */ __asm { MOV RAX,-0x4dcfd63dedc1c1d0 }
    /* +0xa08fff */ __asm { CMP R11,RAX }
    /* +0xa09002 */ __asm { NOP }
    /* +0xa09003 */ __asm { NOP }
    /* +0xa09004 */ __asm { NOP }
    /* +0xa09005 */ __asm { NOP }
    /* +0xa09006 */ __asm { NOP }
    /* +0xa09007 */ __asm { MOV qword ptr [RSP + 0x50],R10 }
    /* +0xa0900c */ __asm { MOV R11W,0x3468 }
    /* +0xa09011 */ __asm { ADD R11D,0x26e9 }
    /* +0xa09018 */ __asm { MOVZX EAX,R11W }
    /* +0xa0901c */ __asm { MOV EAX,dword ptr [RCX + RAX*0x1 + 0xb4] }
    /* +0xa09023 */ __asm { MOV qword ptr [RSP + 0x30],RBX }
    /* +0xa09028 */ __asm { MOV dword ptr [RSP + 0x28],EBP }
    /* +0xa0902c */ __asm { MOV R10D,EDI }
    /* +0xa0902f */ __asm { JMP 0x7fffa51792de }
    /* +0xa09034 */ __asm { CMP R11D,0x3 }
    /* +0xa09038 */ __asm { JZ 0x7fffa51790e2 }
    /* +0xa0903e */ __asm { LEA RCX,[0x7fffa47b692e] }
    /* +0xa09045 */ __asm { MOV RAX,-0x3e424dc60a6c0a46 }
    /* +0xa0904f */ __asm { CMP RCX,RAX }
    /* +0xa09052 */ __asm { JZ 0x7fffa51792ed }
    /* +0xa09058 */ __asm { MOV qword ptr [RSP + 0x50],R10 }
    /* +0xa0905d */ __asm { MOV EAX,dword ptr [RCX + 0x5b5e] }
    /* +0xa09063 */ __asm { JMP 0x7fffa51792cf }
    /* +0xa09068 */ __asm { MOV ECX,0x484b3eba }
    /* +0xa0906d */ __asm { MOV RAX,0x3290b788a4d844d8 }
    /* +0xa09077 */ __asm { CMP RCX,RAX }
    /* +0xa0907a */ __asm { JZ 0x7fffa51792f5 }
    /* +0xa09080 */ __asm { MOV R11W,0x1b8e }
    /* +0xa09085 */ __asm { XOR R11D,0x1b8e }
    /* +0xa0908c */ __asm { ROL R11W,0x6 }
    /* +0xa09091 */ __asm { MOVZX R11D,R11W }
    /* +0xa09095 */ __asm { MOV R10D,dword ptr [RCX + 0x37b2c386] }
    /* +0xa0909c */ __asm { AND R10D,0x1 }
    /* +0xa090a0 */ __asm { CMP R10D,R11D }
    /* +0xa090a3 */ __asm { JZ 0x7fffa51792ab }
    /* +0xa090a9 */ __asm { LEA RCX,[0x7fffa47bbc9e] }
    /* +0xa090b0 */ __asm { MOV RAX,0x565c68b187a653e4 }
    /* +0xa090ba */ __asm { CMP RCX,RAX }
    /* +0xa090bd */ __asm { JZ 0x7fffa5179308 }
    /* +0xa090c3 */ __asm { MOV R10,0x0 }
    /* +0xa090ca */ __asm { NOP }
    /* +0xa090cb */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xa090d2 */ __asm { MOV qword ptr [RSP + 0x50],R10 }
    /* +0xa090d7 */ __asm { MOV EAX,dword ptr [RCX + 0x131e] }
    /* +0xa090dd */ __asm { JMP 0x7fffa51792cf }
    /* +0xa090e2 */ __asm { NOP }
    /* +0xa090e3 */ __asm { MOV RCX,0x0 }
    /* +0xa090ea */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xa090f1 */ __asm { RDTSC }
    /* +0xa090f3 */ __asm { SHL RDX,0x20 }
    /* +0xa090f7 */ __asm { OR RDX,RAX }
    /* +0xa090fa */ __asm { MOV RAX,-0x4a9b10dd1385131b }
    /* +0xa09104 */ __asm { IMUL RAX,RDX }
    /* +0xa09108 */ __asm { MOV R11,0x6990eaafd45d6f76 }
    /* +0xa09112 */ __asm { ADD R11,RAX }
    /* +0xa09115 */ __asm { MOV RDX,R11 }
    /* +0xa09118 */ __asm { SHR RDX,0x1b }
    /* +0xa0911c */ __asm { MOV RCX,R11 }
    /* +0xa0911f */ __asm { SHR RCX,0x3b }
    /* +0xa09123 */ __asm { SHR R11,0x2d }
    /* +0xa09127 */ __asm { XOR EDX,R11D }
    /* +0xa0912a */ __asm { ROR EDX,CL }
    /* +0xa0912c */ __asm { MOV dword ptr [RSP + 0x50],0xdb8657ae }
    /* +0xa09134 */ __asm { MOV R11D,dword ptr [RSP + 0x50] }
    /* +0xa09139 */ __asm { CMP EDX,0x1034b3 }
    /* +0xa0913f */ __asm { JA 0x7fffa5179288 }
    /* +0xa09145 */ __asm { MOV R11W,0x7648 }
    /* +0xa0914a */ __asm { XOR R11D,0x7628 }
    /* +0xa09151 */ __asm { MOVZX ECX,R11W }
    /* +0xa09155 */ __asm { MOV RAX,qword ptr GS:[RCX] }
    /* +0xa09159 */ __asm { MOV RDX,-0x759b02be64b3e471 }
    /* +0xa09163 */ __asm { CMP qword ptr [RAX + 0x30],RDX }
    /* +0xa09167 */ __asm { NOP }
    /* +0xa09168 */ __asm { NOP }
    /* +0xa09169 */ __asm { NOP }
    /* +0xa0916a */ __asm { NOP }
    /* +0xa0916b */ __asm { NOP }
    /* +0xa0916c */ __asm { NOP }
    /* +0xa0916d */ __asm { MOV ECX,0x81463d06 }
    /* +0xa09172 */ __asm { MOV RAX,-0x338bdbf161844a80 }
    /* +0xa0917c */ __asm { MOV EDX,0xd3362978 }
    /* +0xa09181 */ __asm { ADD RDX,RAX }
    /* +0xa09184 */ __asm { CMP RCX,RDX }
    /* +0xa09187 */ __asm { JZ 0x7fffa517930f }
    /* +0xa0918d */ __asm { MOV R10,qword ptr [RCX + -0x1483cfe] }
    /* +0xa09194 */ __asm { MOV RDX,-0x69143846e337ce07 }
    /* +0xa0919e */ __asm { MOV RAX,R10 }
    /* +0xa091a1 */ __asm { MUL RDX }
    /* +0xa091a4 */ __asm { MOV RCX,RDX }
    /* +0xa091a7 */ __asm { MOV EDX,0x14678b4 }
    /* +0xa091ac */ __asm { MOV RAX,R10 }
    /* +0xa091af */ __asm { MUL RDX }
    /* +0xa091b2 */ __asm { ADD RAX,RCX }
    /* +0xa091b5 */ __asm { ADC RDX,0x0 }
    /* +0xa091b9 */ __asm { TEST DL,0x1 }
    /* +0xa091bc */ __asm { JZ 0x7fffa5179288 }
    /* +0xa091c2 */ __asm { PUSHFQ }
    /* +0xa091c3 */ __asm { POP RDX }
    /* +0xa091c4 */ __asm { PXOR XMM1,XMM1 }
    /* +0xa091c8 */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM1 }
    /* +0xa091ce */ __asm { TEST EDX,0x100 }
    /* +0xa091d4 */ __asm { NOP }
    /* +0xa091d5 */ __asm { NOP }
    /* +0xa091d6 */ __asm { NOP }
    /* +0xa091d7 */ __asm { NOP }
    /* +0xa091d8 */ __asm { NOP }
    /* +0xa091d9 */ __asm { NOP }
    /* +0xa091da */ __asm { NOP }
    /* +0xa091db */ __asm { NOP }
    /* +0xa091dc */ __asm { NOP }
    /* +0xa091dd */ __asm { NOP }
    /* +0xa091de */ __asm { NOP }
    /* +0xa091df */ __asm { NOP }
    /* +0xa091e0 */ __asm { NOP }
    /* +0xa091e1 */ __asm { NOP }
    /* +0xa091e2 */ __asm { NOP }
    /* +0xa091e3 */ __asm { NOP }
    /* +0xa091e4 */ __asm { NOP }
    /* +0xa09288 */ __asm { LEA RCX,[0x7fffa47852b7] }
    /* +0xa0928f */ __asm { MOV RAX,-0x2f4d3b5ba46925a0 }
    /* +0xa09299 */ __asm { CMP RCX,RAX }
    /* +0xa0929c */ __asm { JZ 0x7fffa5179302 }
    /* +0xa0929e */ __asm { MOV qword ptr [RSP + 0x50],R10 }
    /* +0xa092a3 */ __asm { MOV EAX,dword ptr [RCX + -0xc77] }
    /* +0xa092a9 */ __asm { JMP 0x7fffa51792cf }
    /* +0xa092ab */ __asm { LEA RCX,[0x7fffa47b9358] }
    /* +0xa092b2 */ __asm { MOV RAX,-0x7c863ebc5a06bf5f }
    /* +0xa092bc */ __asm { CMP RCX,RAX }
    /* +0xa092bf */ __asm { NOP }
    /* +0xa092c0 */ __asm { NOP }
    /* +0xa092c1 */ __asm { NOP }
    /* +0xa092c2 */ __asm { NOP }
    /* +0xa092c3 */ __asm { NOP }
    /* +0xa092c4 */ __asm { MOV qword ptr [RSP + 0x50],R10 }
    /* +0xa092c9 */ __asm { MOV EAX,dword ptr [RCX + 0x3c64] }
    /* +0xa092cf */ __asm { MOV qword ptr [RSP + 0x30],RBX }
    /* +0xa092d4 */ __asm { MOV dword ptr [RSP + 0x28],EBP }
    /* +0xa092d8 */ __asm { MOV R10D,EDI }
    /* +0xa092db */ __asm { MOV EDX,R12D }
    /* +0xa092de */ __asm { SYSCALL }
    /* +0xa092e0 */ __asm { ADD RSP,0x68 }
    /* +0xa092e4 */ __asm { POP R12 }
    /* +0xa092e6 */ __asm { POP RBX }
    /* +0xa092e7 */ __asm { POP RBP }
    /* +0xa092e8 */ __asm { POP RSI }
    /* +0xa092e9 */ __asm { POP RDI }
    /* +0xa092ea */ __asm { POP R14 }
    /* +0xa092ec */ __asm { RET }
    /* +0xa092ed */ __asm { SBB dword ptr GS:[RCX + -0x29c17],0x216959ff }
    /* +0xa092f8 */ __asm { MOV ESP,0xfe8c4a44 }
    /* +0xa092fd */ __asm { JMP 0x7fffa5179080 }
    /* +0xa09302 */ __asm { ADD EBP,ECX }
    /* +0xa09304 */ __asm { SBB dword ptr [RDI],EBP }
    /* +0xa09306 */ __asm { JMP 0x7fffa517929e }
    /* +0xa09308 */ __asm { PUSH RDI }
    /* +0xa09309 */ __asm { JMP 0x7fffa51790c3 }
    /* +0xa0930f */ __asm { TEST dword ptr [R14 + -0x18917],0x868147ff }
    /* +0xa0931a */ __asm { JMP 0x7fffa5178f5b }
}


// ============================================================================
// Function : Hook_ntdll_dll_KiRaiseUserExceptionDispatcher  |  RVA: 0xa11850  |  Size: 4358 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_KiRaiseUserExceptionDispatcher(void) {
    /* +0xa11850 */ __asm { SUB RSP,0x68 }
    /* +0xa11854 */ __asm { PUSHFQ }
    /* +0xa11855 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xa1185d */ __asm { POPFQ }
    /* +0xa1185e */ __asm { MOV dword ptr [RSP + 0x50],0x94b898bd }
    /* +0xa11866 */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xa1186b */ __asm { CMP R10D,0xf87cdafa }
    /* +0xa11872 */ __asm { JNC 0x7fffa5182905 }
    /* +0xa11878 */ __asm { MOV R10D,0x652f2811 }
    /* +0xa1187e */ __asm { MOV EDX,0xd47137c4 }
    /* +0xa11883 */ __asm { IMUL R8D,EDX,0x5b9e2b6d }
    /* +0xa1188a */ __asm { RDTSC }
    /* +0xa1188c */ __asm { SHL RDX,0x20 }
    /* +0xa11890 */ __asm { OR RDX,RAX }
    /* +0xa11893 */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xa1189d */ __asm { IMUL R11,RDX }
    /* +0xa118a1 */ __asm { ADD R10D,0x369dda32 }
    /* +0xa118a8 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xa118b2 */ __asm { ADD RCX,R11 }
    /* +0xa118b5 */ __asm { MOV R9,RCX }
    /* +0xa118b8 */ __asm { SHR R9,0x1b }
    /* +0xa118bc */ __asm { MOV RDX,RCX }
    /* +0xa118bf */ __asm { SHR RDX,0x2d }
    /* +0xa118c3 */ __asm { XOR R9D,EDX }
    /* +0xa118c6 */ __asm { SHR RCX,0x3b }
    /* +0xa118ca */ __asm { ROR R9D,CL }
    /* +0xa118cd */ __asm { LEA EDX,[R9 + R9*0x2] }
    /* +0xa118d1 */ __asm { MOV ECX,R9D }
    /* +0xa118d4 */ __asm { AND ECX,0x3 }
    /* +0xa118d7 */ __asm { CMP R10,R8 }
    /* +0xa118da */ __asm { CMOVG EDX,ECX }
    /* +0xa118dd */ __asm { CMP EDX,0x2 }
    /* +0xa118e0 */ __asm { JL 0x7fffa5181a06 }
    /* +0xa118e6 */ __asm { JNZ 0x7fffa5181c83 }
    /* +0xa118ec */ __asm { LEA R10,[0x7fffa47b4838] }
    /* +0xa118f3 */ __asm { MOV R11D,0xedf61e98 }
    /* +0xa118f9 */ __asm { XOR R11,R10 }
    /* +0xa118fc */ __asm { ADD R11,0x61bd9463 }
    /* +0xa11903 */ __asm { MOV RDX,0x7bd108989200f2bb }
    /* +0xa1190d */ __asm { CMP R11,RDX }
    /* +0xa11910 */ __asm { JZ 0x7fffa518290c }
    /* +0xa11916 */ __asm { MOV EDX,0x85e53312 }
    /* +0xa1191b */ __asm { MOV CX,0x53a6 }
    /* +0xa1191f */ __asm { XOR ECX,0xffffe5b3 }
    /* +0xa11925 */ __asm { ADD ECX,0x49eb }
    /* +0xa1192b */ __asm { MOVZX R9D,uint8_t ptr [R10 + 0x7e55] }
    /* +0xa11933 */ __asm { MOVZX R11D,uint8_t ptr [R10 + R9*0x4 + 0x7e65] }
    /* +0xa1193c */ __asm { ROL R11B,0x4 }
    /* +0xa11940 */ __asm { MOV uint8_t ptr [RSP + 0x50],R11B }
    /* +0xa11945 */ __asm { MOVZX R11D,uint8_t ptr [R10 + R9*0x4 + 0x7e66] }
    /* +0xa1194e */ __asm { ROL R11B,0x4 }
    /* +0xa11952 */ __asm { MOV uint8_t ptr [RSP + 0x51],R11B }
    /* +0xa11957 */ __asm { MOVZX R11D,uint8_t ptr [R10 + R9*0x4 + 0x7e67] }
    /* +0xa11960 */ __asm { ROL R11B,0x4 }
    /* +0xa11964 */ __asm { MOV uint8_t ptr [RSP + 0x52],R11B }
    /* +0xa11969 */ __asm { MOVZX R10D,uint8_t ptr [R10 + R9*0x4 + 0x7e68] }
    /* +0xa11972 */ __asm { ROL R10B,0x4 }
    /* +0xa11976 */ __asm { MOVZX R9D,CX }
    /* +0xa1197a */ __asm { MOV uint8_t ptr [RSP + 0x53],R10B }
    /* +0xa1197f */ __asm { MOV R10D,0x65e8ce72 }
    /* +0xa11985 */ __asm { IMUL EDX,EDX,-0x41ee2121 }
    /* +0xa1198b */ __asm { ADD EDX,0x5adae766 }
    /* +0xa11991 */ __asm { MOVZX ECX,uint8_t ptr [RDX] }
    /* +0xa11994 */ __asm { MOV EDX,0x1 }
    /* +0xa11999 */ __asm { SHL EDX,CL }
    /* +0xa1199b */ __asm { XOR R10D,dword ptr [RSP + 0x50] }
    /* +0xa119a0 */ __asm { AND EDX,R10D }
    /* +0xa119a3 */ __asm { CMP EDX,R9D }
    /* +0xa119a6 */ __asm { JNZ 0x7fffa5182051 }
    /* +0xa119ac */ __asm { LEA RCX,[0x7fffa47c49a5] }
    /* +0xa119b3 */ __asm { MOV R11,-0x30a988e2c64c1bbb }
    /* +0xa119bd */ __asm { CMP RCX,R11 }
    /* +0xa119c0 */ __asm { JZ 0x7fffa5182925 }
    /* +0xa119c6 */ __asm { MOV EDX,0x2953a334 }
    /* +0xa119cb */ __asm { MOV R8W,0xee44 }
    /* +0xa119d0 */ __asm { MOV qword ptr [RSP + 0x50],R10 }
    /* +0xa119d5 */ __asm { MOV R10D,0x8dea2a5d }
    /* +0xa119db */ __asm { XOR R10D,0x7215d5a2 }
    /* +0xa119e2 */ __asm { MOVSXD R10,R10D }
    /* +0xa119e5 */ __asm { IMUL EDX,EDX,-0x92fcf41 }
    /* +0xa119eb */ __asm { XOR EDX,0xd64083c4 }
    /* +0xa119f1 */ __asm { ADD R8D,0xffff9767 }
    /* +0xa119f8 */ __asm { MOVSX R11,R8W }
    /* +0xa119fc */ __asm { MOV EAX,dword ptr [R11 + RCX*0x1 + 0x68] }
    /* +0xa11a01 */ __asm { JMP 0x7fffa51828d5 }
    /* +0xa11a06 */ __asm { CMP EDX,0x1 }
    /* +0xa11a09 */ __asm { JNZ 0x7fffa5181d6b }
    /* +0xa11a0f */ __asm { MOV R10D,0x11094203 }
    /* +0xa11a15 */ __asm { MOV R11,-0x4274b46aaac58a76 }
    /* +0xa11a1f */ __asm { CMP R10,R11 }
    /* +0xa11a22 */ __asm { NOP }
    /* +0xa11a23 */ __asm { NOP }
    /* +0xa11a24 */ __asm { NOP }
    /* +0xa11a25 */ __asm { NOP }
    /* +0xa11a26 */ __asm { NOP }
    /* +0xa11a27 */ __asm { MOV R10D,dword ptr [R10 + 0x6ef4c1bd] }
    /* +0xa11a2e */ __asm { RDTSC }
    /* +0xa11a30 */ __asm { SHL RDX,0x20 }
    /* +0xa11a34 */ __asm { OR RDX,RAX }
    /* +0xa11a37 */ __asm { CMP R10D,0xd }
    /* +0xa11a3b */ __asm { JC 0x7fffa5182383 }
    /* +0xa11a41 */ __asm { MOV R11,-0x5e5e6ed319ebbbfb }
    /* +0xa11a4b */ __asm { MOV RCX,-0x5a46117eacb056b3 }
    /* +0xa11a55 */ __asm { IMUL RDX,RCX }
    /* +0xa11a59 */ __asm { IMUL R11,R11,0x2c1269a7 }
    /* +0xa11a60 */ __asm { MOV R10D,0xc366bdeb }
    /* +0xa11a66 */ __asm { ADD R10,R11 }
    /* +0xa11a69 */ __asm { ADD R10,RDX }
    /* +0xa11a6c */ __asm { MOV RCX,R10 }
    /* +0xa11a6f */ __asm { SHR RCX,0x3b }
    /* +0xa11a73 */ __asm { MOV RDX,R10 }
    /* +0xa11a76 */ __asm { SHR RDX,0x2d }
    /* +0xa11a7a */ __asm { SHR R10,0x1b }
    /* +0xa11a7e */ __asm { XOR EDX,R10D }
    /* +0xa11a81 */ __asm { ROR EDX,CL }
    /* +0xa11a83 */ __asm { MOV dword ptr [RSP + 0x50],0x402804 }
    /* +0xa11a8b */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xa11a90 */ __asm { CMP EDX,0x44ecc6a }
    /* +0xa11a96 */ __asm { JA 0x7fffa5181bdd }
    /* +0xa11a9c */ __asm { MOV dword ptr [RSP + 0x50],0x20fe4c19 }
    /* +0xa11aa4 */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xa11aa9 */ __asm { CMP R10D,0xadf6f8d5 }
    /* +0xa11ab0 */ __asm { JNC 0x7fffa518295c }
    /* +0xa11ab6 */ __asm { MOV R10D,0x4a58b1d }
    /* +0xa11abc */ __asm { MOV R11,0x4f74ac2e414225ec }
    /* +0xa11ac6 */ __asm { CMP R10,R11 }
    /* +0xa11ac9 */ __asm { JNZ 0x7fffa5181ad1 }
    /* +0xa11acb */ __asm { LAHF }
    /* +0xa11acc */ __asm { MOV AL,0xac }
    /* +0xa11ace */ __asm { OUT 0x5e,AL }
    /* +0xa11ad1 */ __asm { CMP dword ptr [R10 + 0x7b5878a3],0xd }
    /* +0xa11ad9 */ __asm { JC 0x7fffa5181bdd }
    /* +0xa11adf */ __asm { XORPS XMM0,XMM0 }
    /* +0xa11ae2 */ __asm { MOVAPS xmmword ptr [RSP + 0x50],XMM0 }
    /* +0xa11ae7 */ __asm { MOV dword ptr [RSP + 0x48],0xaaf120ae }
    /* +0xa11aef */ __asm { MOV R10D,dword ptr [RSP + 0x48] }
    /* +0xa11af4 */ __asm { MOV dword ptr [RSP + 0x50],0x0 }
    /* +0xa11afc */ __asm { MOV R10D,0x51eb83f5 }
    /* +0xa11b02 */ __asm { ADD R10D,0x3f551fcd }
    /* +0xa11b09 */ __asm { MOV dword ptr [RSP + 0x48],R10D }
    /* +0xa11b0e */ __asm { MOV R10D,dword ptr [RSP + 0x48] }
    /* +0xa11b13 */ __asm { CMP R10D,0x9210a0f7 }
    /* +0xa11b1a */ __asm { JNC 0x7fffa518298b }
    /* +0xa11b20 */ __asm { MOV R10D,0xc04f4e91 }
    /* +0xa11b26 */ __asm { IMUL R10D,R10D,0x7f22ae6b }
    /* +0xa11b2d */ __asm { PUSHFQ }
    /* +0xa11b2e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xa11b36 */ __asm { POPFQ }
    /* +0xa11b37 */ __asm { MOV dword ptr [RSP + 0x48],R10D }
    /* +0xa11b3c */ __asm { MOV R10D,dword ptr [RSP + 0x48] }
    /* +0xa11b41 */ __asm { TEST R10D,R10D }
    /* +0xa11b44 */ __asm { NOP }
    /* +0xa11b45 */ __asm { NOP }
    /* +0xa11b46 */ __asm { NOP }
    /* +0xa11b47 */ __asm { NOP }
    /* +0xa11b48 */ __asm { NOP }
    /* +0xa11b49 */ __asm { NOP }
    /* +0xa11b4a */ __asm { NOP }
    /* +0xa11b4b */ __asm { NOP }
    /* +0xa11b4c */ __asm { NOP }
    /* +0xa11b4d */ __asm { NOP }
    /* +0xa11b4e */ __asm { NOP }
    /* +0xa11b4f */ __asm { NOP }
    /* +0xa11b50 */ __asm { NOP }
    /* +0xa11b51 */ __asm { NOP }
    /* +0xa11b52 */ __asm { NOP }
    /* +0xa11b53 */ __asm { LEA R8,[0x7fffa47b62fc] }
    /* +0xa11b5a */ __asm { MOV R11,0x7901949e524c054e }
    /* +0xa11b64 */ __asm { CMP R8,R11 }
    /* +0xa11b67 */ __asm { JZ 0x7fffa5182993 }
    /* +0xa11b6d */ __asm { MOV R10W,0xa2a0 }
    /* +0xa11b72 */ __asm { XOR R10D,0xa2b0 }
    /* +0xa11b79 */ __asm { MOV EDX,0xf23bdba2 }
    /* +0xa11b7e */ __asm { MOVZX R9D,R10W }
    /* +0xa11b82 */ __asm { MOV CX,0xce38 }
    /* +0xa11b86 */ __asm { XOR ECX,0xce10 }
    /* +0xa11b8c */ __asm { MOV R11D,0xe33f3b9a }
    /* +0xa11b92 */ __asm { XOR EDX,0x4b456d41 }
    /* +0xa11b98 */ __asm { ADD EDX,0x4681491c }
    /* +0xa11b9e */ __asm { MOVSXD R10,EDX }
    /* +0xa11ba1 */ __asm { ADD R11D,0xcbc84013 }
    /* +0xa11ba8 */ __asm { MOV qword ptr [RSP + 0x48],RAX }
    /* +0xa11bad */ __asm { MOVQ XMM0,R8 }
    /* +0xa11bb2 */ __asm { MOVZX EDX,CX }
    /* +0xa11bb5 */ __asm { MOVD XMM4,R11D }
    /* +0xa11bba */ __asm { PXOR XMM4,xmmword ptr [0x7fffa5784680] }
    /* +0xa11bc2 */ __asm { XORPS XMM1,XMM1 }
    /* +0xa11bc5 */ __asm { MOVSS XMM1,XMM4 }
    /* +0xa11bc9 */ __asm { PADDQ XMM1,XMM0 }
    /* +0xa11bcd */ __asm { MOVQ R11,XMM1 }
    /* +0xa11bd2 */ __asm { MOV EAX,dword ptr [R11 + 0x74] }
    /* +0xa11bd6 */ __asm { LEA R8,[RSP + 0x50] }
    /* +0xa11bdb */ __asm { SYSCALL }
    /* +0xa11bdd */ __asm { MOV R10D,0x606d2033 }
    /* +0xa11be3 */ __asm { IMUL R10D,R10D,0xc9754bf }
    /* +0xa11bea */ __asm { MOVD XMM0,R10D }
    /* +0xa11bef */ __asm { PADDD XMM0,xmmword ptr [0x7fffa5784690] }
    /* +0xa11bf7 */ __asm { XORPS XMM4,XMM4 }
    /* +0xa11bfa */ __asm { MOVSS XMM4,XMM0 }
    /* +0xa11bfe */ __asm { LEA R8,[0x7fffa4786601] }
    /* +0xa11c05 */ __asm { MOVQ XMM0,R8 }
    /* +0xa11c0a */ __asm { PXOR XMM0,XMM4 }
    /* +0xa11c0e */ __asm { MOVQ R11,XMM0 }
    /* +0xa11c13 */ __asm { MOV RDX,-0x73298c83f893ec33 }
    /* +0xa11c1d */ __asm { IMUL RDX,R11 }
    /* +0xa11c21 */ __asm { MOV R11,-0x2978e1fb5c1f4ed8 }
    /* +0xa11c2b */ __asm { ADD R11,RDX }
    /* +0xa11c2e */ __asm { MOV RDX,0x7f800b05a93b788b }
    /* +0xa11c38 */ __asm { CMP R11,RDX }
    /* +0xa11c3b */ __asm { JZ 0x7fffa518292d }
    /* +0xa11c41 */ __asm { MOV R10,0x0 }
    /* +0xa11c48 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xa11c4f */ __asm { NOP }
    /* +0xa11c50 */ __asm { MOV EDX,0x1335e04d }
    /* +0xa11c55 */ __asm { ADD EDX,0xacca1fbb }
    /* +0xa11c5b */ __asm { MOV qword ptr [RSP + 0x50],R10 }
    /* +0xa11c60 */ __asm { MOV R10D,0xa710187a }
    /* +0xa11c66 */ __asm { XOR R10D,0x30f93fb3 }
    /* +0xa11c6d */ __asm { IMUL R10D,R10D,0x27d85d87 }
    /* +0xa11c74 */ __asm { MOVSXD R10,R10D }
    /* +0xa11c77 */ __asm { MOV EAX,dword ptr [R8 + -0x187d] }
    /* +0xa11c7e */ __asm { JMP 0x7fffa51828d5 }
    /* +0xa11c83 */ __asm { LEA R10,[0x7fffa47bbe70] }
    /* +0xa11c8a */ __asm { MOV R11,-0x3d57a9f671894538 }
    /* +0xa11c94 */ __asm { CMP R10,R11 }
    /* +0xa11c97 */ __asm { NOP }
    /* +0xa11c98 */ __asm { NOP }
    /* +0xa11c99 */ __asm { NOP }
    /* +0xa11c9a */ __asm { NOP }
    /* +0xa11c9b */ __asm { NOP }
    /* +0xa11c9c */ __asm { MOV EDX,0x6e64b920 }
    /* +0xa11ca1 */ __asm { MOVZX R9D,uint8_t ptr [R10 + 0x81d] }
    /* +0xa11ca9 */ __asm { MOVZX ECX,uint8_t ptr [R10 + R9*0x4 + 0x82d] }
    /* +0xa11cb2 */ __asm { ROL CL,0x4 }
    /* +0xa11cb5 */ __asm { MOV uint8_t ptr [RSP + 0x50],CL }
    /* +0xa11cb9 */ __asm { MOVZX ECX,uint8_t ptr [R10 + R9*0x4 + 0x82e] }
    /* +0xa11cc2 */ __asm { ROL CL,0x4 }
    /* +0xa11cc5 */ __asm { MOV uint8_t ptr [RSP + 0x51],CL }
    /* +0xa11cc9 */ __asm { MOVZX ECX,uint8_t ptr [R10 + R9*0x4 + 0x82f] }
    /* +0xa11cd2 */ __asm { ROL CL,0x4 }
    /* +0xa11cd5 */ __asm { MOV uint8_t ptr [RSP + 0x52],CL }
    /* +0xa11cd9 */ __asm { MOVZX R10D,uint8_t ptr [R10 + R9*0x4 + 0x830] }
    /* +0xa11ce2 */ __asm { ROL R10B,0x4 }
    /* +0xa11ce6 */ __asm { ADD EDX,0x119946f4 }
    /* +0xa11cec */ __asm { MOV uint8_t ptr [RSP + 0x53],R10B }
    /* +0xa11cf1 */ __asm { MOV R10D,0x65e8ce72 }
    /* +0xa11cf7 */ __asm { XOR R10D,dword ptr [RSP + 0x50] }
    /* +0xa11cfc */ __asm { MOV EDX,dword ptr [RDX] }
    /* +0xa11cfe */ __asm { BT R10D,EDX }
    /* +0xa11d02 */ __asm { JNC 0x7fffa5182600 }
    /* +0xa11d08 */ __asm { LEA R8,[0x7fffa47c3025] }
    /* +0xa11d0f */ __asm { MOV R11,-0x3ac227b2e2a851f9 }
    /* +0xa11d19 */ __asm { CMP R8,R11 }
    /* +0xa11d1c */ __asm { NOP }
    /* +0xa11d1d */ __asm { NOP }
    /* +0xa11d1e */ __asm { NOP }
    /* +0xa11d1f */ __asm { NOP }
    /* +0xa11d20 */ __asm { NOP }
    /* +0xa11d21 */ __asm { NOP }
    /* +0xa11d22 */ __asm { NOP }
    /* +0xa11d23 */ __asm { NOP }
    /* +0xa11d24 */ __asm { NOP }
    /* +0xa11d25 */ __asm { NOP }
    /* +0xa11d26 */ __asm { NOP }
    /* +0xa11d27 */ __asm { NOP }
    /* +0xa11d28 */ __asm { NOP }
    /* +0xa11d29 */ __asm { NOP }
    /* +0xa11d2a */ __asm { NOP }
    /* +0xa11d2b */ __asm { NOP }
    /* +0xa11d2c */ __asm { NOP }
    /* +0xa11d6b */ __asm { MOV R10D,0xb19def99 }
    /* +0xa11d71 */ __asm { MOV R11,0x1f7940aaa3e36377 }
    /* +0xa11d7b */ __asm { CMP R10,R11 }
    /* +0xa11d7e */ __asm { JZ 0x7fffa5182915 }
    /* +0xa11d84 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xa11d8b */ __asm { NOP }
    /* +0xa11d8c */ __asm { MOV R8,0x0 }
    /* +0xa11d93 */ __asm { MOV R11,qword ptr [R10 + -0x319fef91] }
    /* +0xa11d9a */ __asm { MOV RDX,0xc79ab0f1178cb44 }
    /* +0xa11da4 */ __asm { MOV RAX,R11 }
    /* +0xa11da7 */ __asm { MUL RDX }
    /* +0xa11daa */ __asm { MOV RCX,RDX }
    /* +0xa11dad */ __asm { MOV EDX,0x1463d9c }
    /* +0xa11db2 */ __asm { MOV RAX,R11 }
    /* +0xa11db5 */ __asm { MUL RDX }
    /* +0xa11db8 */ __asm { ADD RAX,RCX }
    /* +0xa11dbb */ __asm { ADC RDX,0x0 }
    /* +0xa11dbf */ __asm { AND EDX,0x1 }
    /* +0xa11dc2 */ __asm { MOV R11,-0x7f88d1e597bbcb4a }
    /* +0xa11dcc */ __asm { MOV RCX,R11 }
    /* +0xa11dcf */ __asm { MOV R10,0x2be29e0ce5cebf40 }
    /* +0xa11dd9 */ __asm { MOV R8,R10 }
    /* +0xa11ddc */ __asm { XOR R8,R10 }
    /* +0xa11ddf */ __asm { XOR RCX,R11 }
    /* +0xa11de2 */ __asm { OR RCX,RDX }
    /* +0xa11de5 */ __asm { OR RCX,R8 }
    /* +0xa11de8 */ __asm { JNZ 0x7fffa5182599 }
    /* +0xa11dee */ __asm { RDTSC }
    /* +0xa11df0 */ __asm { SHL RDX,0x20 }
    /* +0xa11df4 */ __asm { OR RDX,RAX }
    /* +0xa11df7 */ __asm { MOV R11,0x5851f42d4c957f2d }
    /* +0xa11e01 */ __asm { IMUL R11,RDX }
    /* +0xa11e05 */ __asm { MOV R10D,0xa99f87a4 }
    /* +0xa11e0b */ __asm { MOV RCX,-0x1cf47a5d87ed1812 }
    /* +0xa11e15 */ __asm { ADD RCX,R11 }
    /* +0xa11e18 */ __asm { MOV RDX,RCX }
    /* +0xa11e1b */ __asm { SHR RDX,0x1b }
    /* +0xa11e1f */ __asm { MOV R8,RCX }
    /* +0xa11e22 */ __asm { SHR R8,0x2d }
    /* +0xa11e26 */ __asm { XOR EDX,R8D }
    /* +0xa11e29 */ __asm { SHR RCX,0x3b }
    /* +0xa11e2d */ __asm { ROR EDX,CL }
    /* +0xa11e2f */ __asm { XOR R10D,0xf7578b50 }
    /* +0xa11e36 */ __asm { MOV dword ptr [RSP + 0x50],R10D }
    /* +0xa11e3b */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xa11e40 */ __asm { CMP EDX,0x10f856 }
    /* +0xa11e46 */ __asm { JA 0x7fffa518200c }
    /* +0xa11e4c */ __asm { PUSHFQ }
    /* +0xa11e4d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xa11e55 */ __asm { POPFQ }
    /* +0xa11e56 */ __asm { MOV dword ptr [RSP + 0x50],0x53e3e01b }
    /* +0xa11e5e */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xa11e63 */ __asm { CMP R10D,0x55b31f0f }
    /* +0xa11e6a */ __asm { NOP }
    /* +0xa11e6b */ __asm { NOP }
    /* +0xa11e6c */ __asm { NOP }
    /* +0xa11e6d */ __asm { NOP }
    /* +0xa11e6e */ __asm { NOP }
    /* +0xa11e6f */ __asm { MOV R8D,0x40d3d2b4 }
    /* +0xa11e75 */ __asm { MOV R11,-0x27996ee20a8cfd4 }
    /* +0xa11e7f */ __asm { CMP R8,R11 }
    /* +0xa11e82 */ __asm { NOP }
    /* +0xa11e83 */ __asm { NOP }
    /* +0xa11e84 */ __asm { NOP }
    /* +0xa11e85 */ __asm { NOP }
    /* +0xa11e86 */ __asm { NOP }
    /* +0xa11e87 */ __asm { MOV R10W,0x34d5 }
    /* +0xa11e8c */ __asm { MOV EDX,0x5c32bb56 }
    /* +0xa11e91 */ __asm { MOV ECX,0x60090d29 }
    /* +0xa11e96 */ __asm { ADD ECX,0xf78c1812 }
    /* +0xa11e9c */ __asm { ROL ECX,0x13 }
    /* +0xa11e9f */ __asm { MOV R9D,0xd03a2932 }
    /* +0xa11ea5 */ __asm { XOR R9D,0xef10047e }
    /* +0xa11eac */ __asm { MOVD XMM0,R9D }
    /* +0xa11eb1 */ __asm { MOVQ XMM4,R8 }
    /* +0xa11eb6 */ __asm { PADDQ XMM4,XMM0 }
    /* +0xa11eba */ __asm { MOVQ R11,XMM4 }
    /* +0xa11ebf */ __asm { MOV R9D,dword ptr [R11 + 0x240] }
    /* +0xa11ec6 */ __asm { LEA R8D,[R9 + 0x1] }
    /* +0xa11eca */ __asm { AND R9D,0x1 }
    /* +0xa11ece */ __asm { ADD EDX,0x47eecce9 }
    /* +0xa11ed4 */ __asm { MOVSXD R11,EDX }
    /* +0xa11ed7 */ __asm { CMP RCX,R11 }
    /* +0xa11eda */ __asm { CMOVLE R9D,R8D }
    /* +0xa11ede */ __asm { XOR R10D,0x34d5 }
    /* +0xa11ee5 */ __asm { MOVZX R10D,R10W }
    /* +0xa11ee9 */ __asm { CMP R9D,R10D }
    /* +0xa11eec */ __asm { JNZ 0x7fffa518200c }
    /* +0xa11ef2 */ __asm { PUSHFQ }
    /* +0xa11ef3 */ __asm { POP R11 }
    /* +0xa11ef5 */ __asm { MOV EDX,0x4e367087 }
    /* +0xa11efa */ __asm { MOV R10D,0xe0701afa }
    /* +0xa11f00 */ __asm { XOR R10D,0xbe2f4f62 }
    /* +0xa11f07 */ __asm { ADD EDX,0x3ffffbdc }
    /* +0xa11f0d */ __asm { ROL EDX,0x1e }
    /* +0xa11f10 */ __asm { PXOR XMM0,XMM0 }
    /* +0xa11f14 */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM0 }
    /* +0xa11f1a */ __asm { CMP R10,RDX }
    /* +0xa11f1d */ __asm { JA 0x7fffa5181f28 }
    /* +0xa11f1f */ __asm { AND R11D,0x100 }
    /* +0xa11f26 */ __asm { NOP }
    /* +0xa11f27 */ __asm { NOP }
    /* +0xa11f28 */ __asm { NOP }
    /* +0xa11f29 */ __asm { NOP }
    /* +0xa11f2a */ __asm { NOP }
    /* +0xa11f2b */ __asm { MOV dword ptr [RSP + 0x48],0xceea720a }
    /* +0xa11f33 */ __asm { MOV R10D,dword ptr [RSP + 0x48] }
    /* +0xa11f38 */ __asm { CMP R10D,0xb22e72fc }
    /* +0xa11f3f */ __asm { NOP }
    /* +0xa11f40 */ __asm { NOP }
    /* +0xa11f41 */ __asm { NOP }
    /* +0xa11f42 */ __asm { NOP }
    /* +0xa11f43 */ __asm { NOP }
    /* +0xa11f44 */ __asm { MOV dword ptr [RSP + 0x50],0x0 }
    /* +0xa11f4c */ __asm { MOV R10D,0x5a58f36c }
    /* +0xa11f52 */ __asm { IMUL R10D,R10D,-0x3d0e1a3f }
    /* +0xa11f59 */ __asm { MOV dword ptr [RSP + 0x48],R10D }
    /* +0xa11f5e */ __asm { MOV R10D,dword ptr [RSP + 0x48] }
    /* +0xa11f63 */ __asm { MOV dword ptr [RSP + 0x48],0x8ce1782a }
    /* +0xa11f6b */ __asm { MOV R10D,dword ptr [RSP + 0x48] }
    /* +0xa11f70 */ __asm { CMP R10D,0xb7ca114b }
    /* +0xa11f77 */ __asm { JNC 0x7fffa518299b }
    /* +0xa11f7d */ __asm { LEA R8,[0x7fffa477ceaa] }
    /* +0xa11f84 */ __asm { MOV R11,0xefb6cbdb803a571 }
    /* +0xa11f8e */ __asm { CMP R8,R11 }
    /* +0xa11f91 */ __asm { JZ 0x7fffa51829a3 }
    /* +0xa11f97 */ __asm { MOV R10W,0x32e9 }
    /* +0xa11f9c */ __asm { MOV DX,0xb841 }
    /* +0xa11fa0 */ __asm { MOV CX,0x60c9 }
    /* +0xa11fa4 */ __asm { ADD EDX,0x47e7 }
    /* +0xa11faa */ __asm { MOVZX EDX,DX }
    /* +0xa11fad */ __asm { XOR ECX,0xffffb94a }
    /* +0xa11fb3 */ __asm { ADD R10D,0xffffcd18 }
    /* +0xa11fba */ __asm { ROL R10W,0x4 }
    /* +0xa11fbf */ __asm { MOVZX R9D,R10W }
    /* +0xa11fc3 */ __asm { MOV R10W,0x13a4 }
    /* +0xa11fc8 */ __asm { ADD R10D,0xffffec5b }
    /* +0xa11fcf */ __asm { MOVSX R10,R10W }
    /* +0xa11fd3 */ __asm { MOVQ XMM0,R8 }
    /* +0xa11fd8 */ __asm { MOV qword ptr [RSP + 0x48],R8 }
    /* +0xa11fdd */ __asm { MOVD XMM4,ECX }
    /* +0xa11fe1 */ __asm { PADDW XMM4,xmmword ptr [0x7fffa5784670] }
    /* +0xa11fe9 */ __asm { PXOR XMM1,XMM1 }
    /* +0xa11fed */ __asm { PUNPCKLWD XMM4,XMM1 }
    /* +0xa11ff1 */ __asm { MOVSS XMM1,XMM4 }
    /* +0xa11ff5 */ __asm { PADDQ XMM1,XMM0 }
    /* +0xa11ff9 */ __asm { MOVQ R11,XMM1 }
    /* +0xa11ffe */ __asm { MOV EAX,dword ptr [R11 + 0x128] }
    /* +0xa12005 */ __asm { LEA R8,[RSP + 0x50] }
    /* +0xa1200a */ __asm { SYSCALL }
    /* +0xa1200c */ __asm { LEA R8,[0x7fffa477f2f9] }
    /* +0xa12013 */ __asm { MOV R11,0x6f8d9587a1eeb192 }
    /* +0xa1201d */ __asm { CMP R8,R11 }
    /* +0xa12020 */ __asm { NOP }
    /* +0xa12021 */ __asm { NOP }
    /* +0xa12022 */ __asm { NOP }
    /* +0xa12023 */ __asm { NOP }
    /* +0xa12024 */ __asm { NOP }
    /* +0xa12025 */ __asm { MOV R10D,0x3ebb9411 }
    /* +0xa1202b */ __asm { ADD R10D,0xc1446bee }
    /* +0xa12032 */ __asm { MOVSXD R10,R10D }
    /* +0xa12035 */ __asm { MOV qword ptr [RSP + 0x50],RCX }
    /* +0xa1203a */ __asm { MOV EDX,0x611eaca2 }
    /* +0xa1203f */ __asm { XOR EDX,0xa11eacaa }
    /* +0xa12045 */ __asm { MOV EAX,dword ptr [R8 + 0x52df] }
    /* +0xa1204c */ __asm { JMP 0x7fffa51828d5 }
    /* +0xa12051 */ __asm { MOV R11,0x27f7295672c886f3 }
    /* +0xa1205b */ __asm { MOV R10W,0x79b }
    /* +0xa12060 */ __asm { XOR R10D,0x8d }
    /* +0xa12067 */ __asm { RDTSC }
    /* +0xa12069 */ __asm { SHL RDX,0x20 }
    /* +0xa1206d */ __asm { OR RDX,RAX }
    /* +0xa12070 */ __asm { MOV RCX,-0x6bdeac2e46be109b }
    /* +0xa1207a */ __asm { IMUL RCX,RDX }
    /* +0xa1207e */ __asm { MOVQ XMM0,RCX }
    /* +0xa12083 */ __asm { ADD R11,-0x81001f4 }
    /* +0xa1208a */ __asm { ROL R11,0x28 }
    /* +0xa1208e */ __asm { MOVQ XMM4,R11 }
    /* +0xa12093 */ __asm { PADDQ XMM4,XMM0 }
    /* +0xa12097 */ __asm { MOVQ RDX,XMM4 }
    /* +0xa1209c */ __asm { MOV R8,RDX }
    /* +0xa1209f */ __asm { SHR R8,0x1b }
    /* +0xa120a3 */ __asm { MOV RCX,RDX }
    /* +0xa120a6 */ __asm { SHR RCX,0x3b }
    /* +0xa120aa */ __asm { SHR RDX,0x2d }
    /* +0xa120ae */ __asm { XOR EDX,R8D }
    /* +0xa120b1 */ __asm { ROR EDX,CL }
    /* +0xa120b3 */ __asm { ADD R10D,0xfffff94a }
    /* +0xa120ba */ __asm { MOVZX R10D,R10W }
    /* +0xa120be */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xa120c2 */ __asm { MOV R10W,0xe15 }
    /* +0xa120c7 */ __asm { IMUL R10D,R10D,-0x635b }
    /* +0xa120ce */ __asm { ADD R10D,0x20a7 }
    /* +0xa120d5 */ __asm { MOVZX R8D,R10W }
    /* +0xa120d9 */ __asm { MOV R10D,0x6c910a74 }
    /* +0xa120df */ __asm { ADD R10D,0xc5a833ee }
    /* +0xa120e6 */ __asm { MOVQ XMM0,qword ptr GS:[R8] }
    /* +0xa120ec */ __asm { MOV CX,0x16a }
    /* +0xa120f0 */ __asm { ADD ECX,0xd86 }
    /* +0xa120f6 */ __asm { MOVZX R8D,CX }
    /* +0xa120fa */ __asm { MOV RAX,0x10caa552f3c4eb27 }
    /* +0xa12104 */ __asm { MOV ECX,0xdedfd7b1 }
    /* +0xa12109 */ __asm { IMUL RCX,RAX }
    /* +0xa1210d */ __asm { MOV R9D,0x4f0d4307 }
    /* +0xa12113 */ __asm { IMUL EAX,R9D,0x500a594b }
    /* +0xa1211a */ __asm { ADD EAX,0x2c89ee88 }
    /* +0xa1211f */ __asm { MOV R9W,0xcbcd }
    /* +0xa12124 */ __asm { XOR R9D,0xc53d }
    /* +0xa1212b */ __asm { MOVZX R9D,R9W }
    /* +0xa1212f */ __asm { NEG R9 }
    /* +0xa12132 */ __asm { CMP R10,RAX }
    /* +0xa12135 */ __asm { CMOVLE R9,R8 }
    /* +0xa12139 */ __asm { MOVQ XMM4,R9 }
    /* +0xa1213e */ __asm { PADDQ XMM4,XMM0 }
    /* +0xa12142 */ __asm { MOVQ R10,XMM4 }
    /* +0xa12147 */ __asm { MOV R9,qword ptr [R10] }
    /* +0xa1214a */ __asm { ADD R11,R9 }
    /* +0xa1214d */ __asm { ADD R11,0x640 }
    /* +0xa12154 */ __asm { CMP R11,RCX }
    /* +0xa12157 */ __asm { JNZ 0x7fffa518215e }
    /* +0xa12159 */ __asm { CLD }
    /* +0xa1215b */ __asm { RET }
    /* +0xa1215e */ __asm { MOV R10D,0x1f2e761 }
    /* +0xa12164 */ __asm { IMUL R10D,R10D,0x8cc0a9 }
    /* +0xa1216b */ __asm { NOT R10D }
    /* +0xa1216e */ __asm { CMP EDX,R10D }
    /* +0xa12171 */ __asm { JNC 0x7fffa5182337 }
    /* +0xa12177 */ __asm { MOV dword ptr [RSP + 0x50],0x40b339fc }
    /* +0xa1217f */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xa12184 */ __asm { TEST R10D,R10D }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtContinue  |  RVA: 0xa25eb0  |  Size: 80 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtContinue(void) {
    /* +0xa25eb0 */ __asm { PUSH RBX }
    /* +0xa25eb1 */ __asm { PUSH RSI }
    /* +0xa25eb2 */ __asm { PUSH R12 }
    /* +0xa25eb4 */ __asm { PUSH RDI }
    /* +0xa25eb5 */ __asm { PUSH R13 }
    /* +0xa25eb7 */ __asm { PUSH R14 }
    /* +0xa25eb9 */ __asm { PUSH RBP }
    /* +0xa25eba */ __asm { PUSH R15 }
    /* +0xa25ebc */ __asm { SUB RSP,0x148 }
    /* +0xa25ec3 */ __asm { MOV uint8_t ptr [RSP + 0x137],DL }
    /* +0xa25eca */ __asm { MOV R9D,0x79edbc97 }
    /* +0xa25ed0 */ __asm { XOR R9D,0x80c13bee }
    /* +0xa25ed7 */ __asm { ADD R9D,0x74bc2fe0 }
    /* +0xa25ede */ __asm { MOV dword ptr [RSP + 0x60],R9D }
    /* +0xa25ee3 */ __asm { MOV R9D,dword ptr [RSP + 0x60] }
    /* +0xa25ee8 */ __asm { CMP R9D,0xf2bf6cb0 }
    /* +0xa25eef */ __asm { NOP }
    /* +0xa25ef0 */ __asm { NOP }
    /* +0xa25ef1 */ __asm { NOP }
    /* +0xa25ef2 */ __asm { NOP }
    /* +0xa25ef3 */ __asm { NOP }
    /* +0xa25ef4 */ __asm { NOP }
    /* +0xa25ef5 */ __asm { NOP }
    /* +0xa25ef6 */ __asm { NOP }
    /* +0xa25ef7 */ __asm { NOP }
    /* +0xa25ef8 */ __asm { NOP }
    /* +0xa25ef9 */ __asm { NOP }
    /* +0xa25efa */ __asm { NOP }
    /* +0xa25efb */ __asm { NOP }
    /* +0xa25efc */ __asm { NOP }
    /* +0xa25efd */ __asm { NOP }
    /* +0xa25efe */ __asm { NOP }
    /* +0xa25eff */ __asm { NOP }
}


// ============================================================================
// Function : Hook_ntdll_dll_NtRaiseException  |  RVA: 0xb163a0  |  Size: 2827 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Hook_ntdll_dll_NtRaiseException(void) {
    /* +0xb163a0 */ __asm { PUSH R14 }
    /* +0xb163a2 */ __asm { PUSH RBX }
    /* +0xb163a3 */ __asm { PUSH R12 }
    /* +0xb163a5 */ __asm { PUSH RDI }
    /* +0xb163a6 */ __asm { PUSH RBP }
    /* +0xb163a7 */ __asm { PUSH R15 }
    /* +0xb163a9 */ __asm { PUSH R13 }
    /* +0xb163ab */ __asm { PUSH RSI }
    /* +0xb163ac */ __asm { SUB RSP,0x68 }
    /* +0xb163b0 */ __asm { MOV R13,RDX }
    /* +0xb163b3 */ __asm { MOV RDX,R13 }
    /* +0xb163b6 */ __asm { MOV R15,R9 }
    /* +0xb163b9 */ __asm { MOV EDI,0x9aaad7c4 }
    /* +0xb163be */ __asm { ADD EDI,0x5af45e02 }
    /* +0xb163c4 */ __asm { MOV R10,RDX }
    /* +0xb163c7 */ __asm { MOV R9D,0xef099d9 }
    /* +0xb163cd */ __asm { XOR R9D,0x710e9af9 }
    /* +0xb163d4 */ __asm { MOV R14D,0xca4193d0 }
    /* +0xb163da */ __asm { ADD R14D,0x306f0082 }
    /* +0xb163e1 */ __asm { MOV EAX,0x95ffb5bc }
    /* +0xb163e6 */ __asm { ADD EAX,0xcfefd32f }
    /* +0xb163eb */ __asm { MOV R11,RDX }
    /* +0xb163ee */ __asm { NOT R11 }
    /* +0xb163f1 */ __asm { MOV EBX,0xd0aa2d1a }
    /* +0xb163f6 */ __asm { IMUL EBP,EBX,0x318827f1 }
    /* +0xb163fc */ __asm { XOR R10,R15 }
    /* +0xb163ff */ __asm { MOV RBX,R10 }
    /* +0xb16402 */ __asm { XOR RBX,RDX }
    /* +0xb16405 */ __asm { MOV R15,R11 }
    /* +0xb16408 */ __asm { AND R15,R10 }
    /* +0xb1640b */ __asm { IMUL RSI,RBX,0x545df4a1 }
    /* +0xb16412 */ __asm { XOR R11,R10 }
    /* +0xb16415 */ __asm { IMUL R12,RBX,0xd8156dc }
    /* +0xb1641c */ __asm { AND EBX,0xd8156dc }
    /* +0xb16422 */ __asm { CMP R14,RDI }
    /* +0xb16425 */ __asm { CMOVNC RBX,R12 }
    /* +0xb16429 */ __asm { MOV R14,RCX }
    /* +0xb1642c */ __asm { MOV RCX,RDX }
    /* +0xb1642f */ __asm { OR RCX,R10 }
    /* +0xb16432 */ __asm { IMUL RCX,RCX,-0x545df4a0 }
    /* +0xb16439 */ __asm { ADD RCX,RSI }
    /* +0xb1643c */ __asm { MOV RDI,R10 }
    /* +0xb1643f */ __asm { NOT RDI }
    /* +0xb16442 */ __asm { AND RDI,RDX }
    /* +0xb16445 */ __asm { AND R10,RDX }
    /* +0xb16448 */ __asm { IMUL RBP,RDI }
    /* +0xb1644c */ __asm { IMUL RDX,R15,0x36b45240 }
    /* +0xb16453 */ __asm { ADD RDX,RBP }
    /* +0xb16456 */ __asm { SUB RCX,RDI }
    /* +0xb16459 */ __asm { IMUL RSI,R11,0x4435a91c }
    /* +0xb16460 */ __asm { IMUL R10,R10,0x545df4a0 }
    /* +0xb16467 */ __asm { CMP RAX,R9 }
    /* +0xb1646a */ __asm { MOVQ XMM3,RBX }
    /* +0xb1646f */ __asm { MOVQ XMM5,RDX }
    /* +0xb16474 */ __asm { LEA RDX,[R11 + -0x4435a91c] }
    /* +0xb1647b */ __asm { CMOVNC RSI,RDX }
    /* +0xb1647f */ __asm { ADD R10,R11 }
    /* +0xb16482 */ __asm { ADD R10,RCX }
    /* +0xb16485 */ __asm { PADDQ XMM5,XMM3 }
    /* +0xb16489 */ __asm { IMUL RDI,R10,0x162f193a }
    /* +0xb16490 */ __asm { ADD RDI,RSI }
    /* +0xb16493 */ __asm { MOVQ RDX,XMM5 }
    /* +0xb16498 */ __asm { ADD RDI,RDX }
    /* +0xb1649b */ __asm { MOV dword ptr [RSP + 0x50],0x1002ba44 }
    /* +0xb164a3 */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xb164a8 */ __asm { CMP R10D,0x757f8c4d }
    /* +0xb164af */ __asm { JNC 0x7fffa52873f4 }
    /* +0xb164b5 */ __asm { MOV R10W,0x6432 }
    /* +0xb164ba */ __asm { IMUL R10D,R10D,-0x4a29 }
    /* +0xb164c1 */ __asm { NOT R10D }
    /* +0xb164c4 */ __asm { MOV ECX,EDI }
    /* +0xb164c6 */ __asm { ROR R10W,CL }
    /* +0xb164ca */ __asm { MOVZX ECX,R10W }
    /* +0xb164ce */ __asm { MOV RDX,qword ptr GS:[RCX] }
    /* +0xb164d2 */ __asm { MOV R9,-0x10e8ccd39b8fc3c5 }
    /* +0xb164dc */ __asm { CMP qword ptr [RDX + 0x30],R9 }
    /* +0xb164e0 */ __asm { NOP }
    /* +0xb164e1 */ __asm { NOP }
    /* +0xb164e2 */ __asm { NOP }
    /* +0xb164e3 */ __asm { NOP }
    /* +0xb164e4 */ __asm { NOP }
    /* +0xb164e5 */ __asm { TEST R14,R14 }
    /* +0xb164e8 */ __asm { JZ 0x7fffa5286758 }
    /* +0xb164ee */ __asm { MOV R10W,0x458a }
    /* +0xb164f3 */ __asm { XOR R10D,EDI }
    /* +0xb164f6 */ __asm { ADD R10D,0xffff9fe0 }
    /* +0xb164fd */ __asm { ROL R10W,0xa }
    /* +0xb16502 */ __asm { MOVZX ECX,R10W }
    /* +0xb16506 */ __asm { MOV RDX,qword ptr GS:[RCX] }
    /* +0xb1650a */ __asm { MOV R10,0x26951d87c4e7424f }
    /* +0xb16514 */ __asm { MOV R9,0x6c3d797249fdd0ee }
    /* +0xb1651e */ __asm { CMP RDX,R9 }
    /* +0xb16521 */ __asm { JZ 0x7fffa52873c6 }
    /* +0xb16527 */ __asm { MOV R9D,dword ptr [R14] }
    /* +0xb1652a */ __asm { MOV R10D,0x35905417 }
    /* +0xb16530 */ __asm { ADD R10D,EDI }
    /* +0xb16533 */ __asm { MOV ECX,R9D }
    /* +0xb16536 */ __asm { ROL ECX,0x4 }
    /* +0xb16539 */ __asm { ROL R10D,0xc }
    /* +0xb1653d */ __asm { XOR R10D,ECX }
    /* +0xb16540 */ __asm { CMP R10D,0xb91c1dee }
    /* +0xb16547 */ __asm { JNZ 0x7fffa5286728 }
    /* +0xb1654d */ __asm { MOV dword ptr [RSP + 0x50],0x240c0601 }
    /* +0xb16555 */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xb1655a */ __asm { CMP dword ptr [R14 + 0x18],0x2 }
    /* +0xb1655f */ __asm { JNZ 0x7fffa5286712 }
    /* +0xb16565 */ __asm { MOV dword ptr [RSP + 0x50],0xdc8094b1 }
    /* +0xb1656d */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xb16572 */ __asm { LEA R11,[0x7fffa47883fb] }
    /* +0xb16579 */ __asm { LEA RDX,[0x7fffa47958cf] }
    /* +0xb16580 */ __asm { MOV R10D,0x46433fd3 }
    /* +0xb16586 */ __asm { MOV EAX,0xbfd1cc4f }
    /* +0xb1658b */ __asm { ADD EAX,R9D }
    /* +0xb1658e */ __asm { MOV ECX,EDI }
    /* +0xb16590 */ __asm { ROR EAX,CL }
    /* +0xb16592 */ __asm { LEA RSI,[0x7fffa47961d9] }
    /* +0xb16599 */ __asm { MOV BX,0x4eea }
    /* +0xb1659d */ __asm { XOR EBX,EDI }
    /* +0xb1659f */ __asm { MOV ECX,R9D }
    /* +0xb165a2 */ __asm { ROL BX,CL }
    /* +0xb165a5 */ __asm { ADD EBX,0xffff980a }
    /* +0xb165ab */ __asm { ROL BX,0x1 }
    /* +0xb165ae */ __asm { MOV BP,0x68c3 }
    /* +0xb165b2 */ __asm { SUB EBP,R9D }
    /* +0xb165b5 */ __asm { MOV ECX,EDI }
    /* +0xb165b7 */ __asm { ROL BP,CL }
    /* +0xb165ba */ __asm { ADD EBP,0xffffea73 }
    /* +0xb165c0 */ __asm { MOVSX RCX,BP }
    /* +0xb165c4 */ __asm { ADD RCX,R11 }
    /* +0xb165c7 */ __asm { XOR EAX,0xeae0f244 }
    /* +0xb165cc */ __asm { CDQE }
    /* +0xb165ce */ __asm { SUB R10D,R9D }
    /* +0xb165d1 */ __asm { ADD R10D,0x79bbcf73 }
    /* +0xb165d8 */ __asm { MOVSXD R10,R10D }
    /* +0xb165db */ __asm { MOVZX EDX,uint8_t ptr [RDX + R10*0x1 + 0xc] }
    /* +0xb165e1 */ __asm { MOV R11,qword ptr [RSI + RAX*0x1 + 0x60] }
    /* +0xb165e6 */ __asm { XOR R11,qword ptr [RCX + RDX*0x8 + 0x16] }
    /* +0xb165eb */ __asm { MOVZX ECX,BX }
    /* +0xb165ee */ __asm { MOV qword ptr [RSP + 0x50],R11 }
    /* +0xb165f3 */ __asm { MOV RDX,qword ptr [RSP + 0x50] }
    /* +0xb165f8 */ __asm { MOV RCX,qword ptr GS:[RCX] }
    /* +0xb165fc */ __asm { MOV R11,0x728ae97cbe5219c7 }
    /* +0xb16606 */ __asm { CMP qword ptr [RCX + 0x60],R11 }
    /* +0xb1660a */ __asm { NOP }
    /* +0xb1660b */ __asm { NOP }
    /* +0xb1660c */ __asm { NOP }
    /* +0xb1660d */ __asm { NOP }
    /* +0xb1660e */ __asm { NOP }
    /* +0xb1660f */ __asm { MOV RCX,qword ptr [R14 + 0x28] }
    /* +0xb16613 */ __asm { CMP RCX,RDX }
    /* +0xb16616 */ __asm { SETC AL }
    /* +0xb16619 */ __asm { ADD RDX,0x9368000 }
    /* +0xb16620 */ __asm { CMP RCX,RDX }
    /* +0xb16623 */ __asm { SETNC DL }
    /* +0xb16626 */ __asm { OR DL,AL }
    /* +0xb16628 */ __asm { JNZ 0x7fffa5286687 }
    /* +0xb1662a */ __asm { MOV dword ptr [RSP + 0x50],0x128c58b9 }
    /* +0xb16632 */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xb16637 */ __asm { LEA RDX,[0x7fffa4786ceb] }
    /* +0xb1663e */ __asm { MOV RCX,-0x48efd033da707ef3 }
    /* +0xb16648 */ __asm { CMP RDX,RCX }
    /* +0xb1664b */ __asm { JZ 0x7fffa5287461 }
    /* +0xb16651 */ __asm { MOVZX EAX,uint8_t ptr [RDX + -0xa1e] }
    /* +0xb16658 */ __asm { INC AL }
    /* +0xb1665a */ __asm { AND AL,0x7 }
    /* +0xb1665c */ __asm { MOVZX R10D,AL }
    /* +0xb16660 */ __asm { MOV ECX,0xb7b088f3 }
    /* +0xb16665 */ __asm { XOR ECX,dword ptr [RDX + -0x9e4] }
    /* +0xb1666b */ __asm { MOV dword ptr [RDX + R10*0x4 + -0xa0f],ECX }
    /* +0xb16673 */ __asm { MOV uint8_t ptr [RDX + -0xa1e],R10B }
    /* +0xb1667a */ __asm { MOV dword ptr [RSP + 0x50],0x57bee7d8 }
    /* +0xb16682 */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xb16687 */ __asm { MOV R10W,0xafc4 }
    /* +0xb1668c */ __asm { MOV ECX,R9D }
    /* +0xb1668f */ __asm { XOR ECX,R10D }
    /* +0xb16692 */ __asm { SUB ECX,EDI }
    /* +0xb16694 */ __asm { MOVZX ECX,CX }
    /* +0xb16697 */ __asm { XOR RCX,0x7227 }
    /* +0xb1669e */ __asm { MOV RDX,qword ptr GS:[RCX] }
    /* +0xb166a2 */ __asm { MOV RCX,0x277c05f932 }
    /* +0xb166ac */ __asm { MOV R11,-0x1ffdb4a29c8 }
    /* +0xb166b6 */ __asm { MOV R10,-0xc9a13697 }
    /* +0xb166c0 */ __asm { ADD R10,RDI }
    /* +0xb166c3 */ __asm { MOVQ XMM3,R10 }
    /* +0xb166c8 */ __asm { MOVQ XMM5,R9 }
    /* +0xb166cd */ __asm { PSUBQ XMM3,XMM5 }
    /* +0xb166d1 */ __asm { MOVQ R10,XMM3 }
    /* +0xb166d6 */ __asm { ADD R10,RCX }
    /* +0xb166d9 */ __asm { XOR R11,R9 }
    /* +0xb166dc */ __asm { MOV R9D,0xe4b6d672 }
    /* +0xb166e2 */ __asm { SUB R9,R11 }
    /* +0xb166e5 */ __asm { ROL R10,0x25 }
    /* +0xb166e9 */ __asm { MOV RCX,-0x5175d0f384dd553d }
    /* +0xb166f3 */ __asm { XOR EAX,EAX }
    /* +0xb166f5 */ __asm { XOR R11D,R11D }
    /* +0xb166f8 */ __asm { CMP qword ptr [RDX + 0x60],RCX }
    /* +0xb166fc */ __asm { SETC AL }
    /* +0xb166ff */ __asm { SETZ R11B }
    /* +0xb16703 */ __asm { CMP R10,R9 }
    /* +0xb16706 */ __asm { CMOVA EAX,R11D }
    /* +0xb1670a */ __asm { CMP AL,0x1 }
    /* +0xb1670c */ __asm { JZ 0x7fffa52873d5 }
    /* +0xb16712 */ __asm { MOV dword ptr [RSP + 0x50],0x3750e92d }
    /* +0xb1671a */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xb1671f */ __asm { TEST R10B,0x1 }
    /* +0xb16723 */ __asm { NOP }
    /* +0xb16724 */ __asm { NOP }
    /* +0xb16725 */ __asm { NOP }
    /* +0xb16726 */ __asm { NOP }
    /* +0xb16727 */ __asm { NOP }
    /* +0xb16728 */ __asm { MOV dword ptr [RSP + 0x50],0xb6190c18 }
    /* +0xb16730 */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xb16735 */ __asm { MOV R9D,0xcc74d1d0 }
    /* +0xb1673b */ __asm { LEA ECX,[RDI + R9*0x1] }
    /* +0xb1673f */ __asm { ADD ECX,0x5c926f2c }
    /* +0xb16745 */ __asm { CMP R10D,ECX }
    /* +0xb16748 */ __asm { JNC 0x7fffa5287400 }
    /* +0xb1674e */ __asm { PUSHFQ }
    /* +0xb1674f */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb16757 */ __asm { POPFQ }
    /* +0xb16758 */ __asm { MOV R10W,0x3b22 }
    /* +0xb1675d */ __asm { IMUL R10D,R10D,0x35 }
    /* +0xb16761 */ __asm { SUB R10D,EDI }
    /* +0xb16764 */ __asm { MOVZX ECX,R10W }
    /* +0xb16768 */ __asm { MOV R9,qword ptr GS:[RCX] }
    /* +0xb1676c */ __asm { MOV EDX,0xdb29ebef }
    /* +0xb16771 */ __asm { LEA ECX,[RDI + RDX*0x1 + 0x7f3ae1bf] }
    /* +0xb16778 */ __asm { MOV RDX,qword ptr [RCX + R9*0x1] }
    /* +0xb1677c */ __asm { MOV R10W,0xd990 }
    /* +0xb16781 */ __asm { XOR R10D,0x3e6f }
    /* +0xb16788 */ __asm { ROL R10W,0x9 }
    /* +0xb1678d */ __asm { NOT R10D }
    /* +0xb16790 */ __asm { MOVZX ECX,R10W }
    /* +0xb16794 */ __asm { MOV R9,qword ptr GS:[RCX] }
    /* +0xb16798 */ __asm { IMUL RDX,qword ptr [R9 + 0x60] }
    /* +0xb1679d */ __asm { MOV R9,0x462eeb6bcdb4b4f9 }
    /* +0xb167a7 */ __asm { CMP RDX,R9 }
    /* +0xb167aa */ __asm { NOP }
    /* +0xb167ab */ __asm { NOP }
    /* +0xb167ac */ __asm { NOP }
    /* +0xb167ad */ __asm { NOP }
    /* +0xb167ae */ __asm { NOP }
    /* +0xb167af */ __asm { NOP }
    /* +0xb167b0 */ __asm { NOP }
    /* +0xb167b1 */ __asm { RDTSC }
    /* +0xb167b3 */ __asm { SHL RDX,0x20 }
    /* +0xb167b7 */ __asm { OR RDX,RAX }
    /* +0xb167ba */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xb167c4 */ __asm { IMUL R9,RDX }
    /* +0xb167c8 */ __asm { MOV R10,-0x22b18422c4a9c65e }
    /* +0xb167d2 */ __asm { ADD R10,R9 }
    /* +0xb167d5 */ __asm { MOV RCX,R10 }
    /* +0xb167d8 */ __asm { SHR RCX,0x3b }
    /* +0xb167dc */ __asm { MOVQ XMM3,R10 }
    /* +0xb167e1 */ __asm { SHR R10,0x2d }
    /* +0xb167e5 */ __asm { MOVD XMM5,R10D }
    /* +0xb167ea */ __asm { PSRLQ XMM3,0x1b }
    /* +0xb167ef */ __asm { PXOR XMM3,XMM5 }
    /* +0xb167f3 */ __asm { MOVD R10D,XMM3 }
    /* +0xb167f8 */ __asm { ROR R10D,CL }
    /* +0xb167fb */ __asm { AND R10D,0x3 }
    /* +0xb167ff */ __asm { CMP R10D,0x2 }
    /* +0xb16803 */ __asm { JNC 0x7fffa5286878 }
    /* +0xb16805 */ __asm { CMP R10D,0x1 }
    /* +0xb16809 */ __asm { JZ 0x7fffa5286b3a }
    /* +0xb1680f */ __asm { MOV EDX,0x9aa1dd6f }
    /* +0xb16814 */ __asm { MOV R9,-0x62316826398fcd95 }
    /* +0xb1681e */ __asm { CMP RDX,R9 }
    /* +0xb16821 */ __asm { JZ 0x7fffa5287407 }
    /* +0xb16827 */ __asm { MOV ECX,dword ptr [RDX + -0x1aa3daab] }
    /* +0xb1682d */ __asm { MOV RDX,0x5555555555555556 }
    /* +0xb16837 */ __asm { IMUL RDX,RCX }
    /* +0xb1683b */ __asm { MOV R9,0x5555555555555555 }
    /* +0xb16845 */ __asm { CMP RDX,R9 }
    /* +0xb16848 */ __asm { JA 0x7fffa5286caf }
    /* +0xb1684e */ __asm { LEA RDX,[0x7fffa47baa33] }
    /* +0xb16855 */ __asm { MOV R9,0x32bc756c880b3d41 }
    /* +0xb1685f */ __asm { CMP RDX,R9 }
    /* +0xb16862 */ __asm { JZ 0x7fffa5287422 }
    /* +0xb16868 */ __asm { MOV qword ptr [RSP + 0x50],R10 }
    /* +0xb1686d */ __asm { MOV EAX,dword ptr [RDX + 0x25f1] }
    /* +0xb16873 */ __asm { JMP 0x7fffa52873ad }
    /* +0xb16878 */ __asm { MOV CX,0x802b }
    /* +0xb1687c */ __asm { IMUL ECX,ECX,0x7b7b }
    /* +0xb16882 */ __asm { XOR ECX,EDI }
    /* +0xb16884 */ __asm { MOVZX ECX,CX }
    /* +0xb16887 */ __asm { CMP R10D,ECX }
    /* +0xb1688a */ __asm { JNC 0x7fffa5286bf7 }
    /* +0xb16890 */ __asm { MOV R9D,0x5bd603b9 }
    /* +0xb16896 */ __asm { MOV RDX,-0x4624bf51a5a932ca }
    /* +0xb168a0 */ __asm { MOV RCX,-0xa927ab69 }
    /* +0xb168aa */ __asm { ADD RCX,RDX }
    /* +0xb168ad */ __asm { ADD RCX,RDI }
    /* +0xb168b0 */ __asm { CMP R9,RCX }
    /* +0xb168b3 */ __asm { NOP }
    /* +0xb168b4 */ __asm { NOP }
    /* +0xb168b5 */ __asm { NOP }
    /* +0xb168b6 */ __asm { NOP }
    /* +0xb168b7 */ __asm { NOP }
    /* +0xb168b8 */ __asm { NOP }
    /* +0xb168b9 */ __asm { NOP }
    /* +0xb168ba */ __asm { NOP }
    /* +0xb168bb */ __asm { NOP }
    /* +0xb168bc */ __asm { NOP }
    /* +0xb168bd */ __asm { NOP }
    /* +0xb168be */ __asm { NOP }
    /* +0xb168bf */ __asm { NOP }
    /* +0xb168c0 */ __asm { NOP }
    /* +0xb168c1 */ __asm { NOP }
    /* +0xb168c2 */ __asm { NOP }
    /* +0xb168c3 */ __asm { NOP }
    /* +0xb16b3a */ __asm { LEA RDX,[0x7fffa47b6f9d] }
    /* +0xb16b41 */ __asm { MOV R9,0x67040609358e78ae }
    /* +0xb16b4b */ __asm { CMP RDX,R9 }
    /* +0xb16b4e */ __asm { NOP }
    /* +0xb16b4f */ __asm { NOP }
    /* +0xb16b50 */ __asm { NOP }
    /* +0xb16b51 */ __asm { NOP }
    /* +0xb16b52 */ __asm { NOP }
    /* +0xb16b53 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xb16b5a */ __asm { MOV R10,0x0 }
    /* +0xb16b61 */ __asm { NOP }
    /* +0xb16b62 */ __asm { MOV ECX,0xa59b3a9a }
    /* +0xb16b67 */ __asm { SUB ECX,EDI }
    /* +0xb16b69 */ __asm { MOVZX R9D,uint8_t ptr [RDX + 0x56f0] }
    /* +0xb16b71 */ __asm { MOVZX EAX,uint8_t ptr [RDX + R9*0x4 + 0x5700] }
    /* +0xb16b7a */ __asm { ROL AL,0x4 }
    /* +0xb16b7d */ __asm { MOV uint8_t ptr [RSP + 0x50],AL }
    /* +0xb16b81 */ __asm { MOVZX EAX,uint8_t ptr [RDX + R9*0x4 + 0x5701] }
    /* +0xb16b8a */ __asm { ROL AL,0x4 }
    /* +0xb16b8d */ __asm { MOV uint8_t ptr [RSP + 0x51],AL }
    /* +0xb16b91 */ __asm { MOVZX EAX,uint8_t ptr [RDX + R9*0x4 + 0x5702] }
    /* +0xb16b9a */ __asm { ROL AL,0x4 }
    /* +0xb16b9d */ __asm { MOV uint8_t ptr [RSP + 0x52],AL }
    /* +0xb16ba1 */ __asm { MOVZX EDX,uint8_t ptr [RDX + R9*0x4 + 0x5703] }
    /* +0xb16baa */ __asm { ROL DL,0x4 }
    /* +0xb16bad */ __asm { ADD ECX,0x7ffe0324 }
    /* +0xb16bb3 */ __asm { MOV uint8_t ptr [RSP + 0x53],DL }
    /* +0xb16bb7 */ __asm { MOV R10D,dword ptr [RCX] }
    /* +0xb16bba */ __asm { MOV ECX,0x65e8ce72 }
    /* +0xb16bbf */ __asm { XOR ECX,dword ptr [RSP + 0x50] }
    /* +0xb16bc3 */ __asm { BT ECX,R10D }
    /* +0xb16bc7 */ __asm { JNC 0x7fffa5287020 }
    /* +0xb16bcd */ __asm { LEA RDX,[0x7fffa47bf1e7] }
    /* +0xb16bd4 */ __asm { MOV R9,-0x4b3144d24a18ad50 }
    /* +0xb16bde */ __asm { CMP RDX,R9 }
    /* +0xb16be1 */ __asm { JZ 0x7fffa528741a }
    /* +0xb16be7 */ __asm { MOV qword ptr [RSP + 0x50],R10 }
    /* +0xb16bec */ __asm { MOV EAX,dword ptr [RDX + -0x21c3] }
    /* +0xb16bf2 */ __asm { JMP 0x7fffa52873ad }
    /* +0xb16bf7 */ __asm { LEA RDX,[0x7fffa47c1538] }
    /* +0xb16bfe */ __asm { MOV R9,0x666afe6d1aed2fa9 }
    /* +0xb16c08 */ __asm { CMP RDX,R9 }
    /* +0xb16c0b */ __asm { JZ 0x7fffa528740f }
    /* +0xb16c11 */ __asm { MOVZX R9D,uint8_t ptr [RDX + -0x4def] }
    /* +0xb16c19 */ __asm { MOVZX EAX,uint8_t ptr [RDX + R9*0x4 + -0x4de9] }
    /* +0xb16c22 */ __asm { NOT AL }
    /* +0xb16c24 */ __asm { ROL AL,0x5 }
    /* +0xb16c27 */ __asm { MOV uint8_t ptr [RSP + 0x50],AL }
    /* +0xb16c2b */ __asm { MOVZX EAX,uint8_t ptr [RDX + R9*0x4 + -0x4de8] }
    /* +0xb16c34 */ __asm { NOT AL }
    /* +0xb16c36 */ __asm { ROL AL,0x5 }
    /* +0xb16c39 */ __asm { MOV uint8_t ptr [RSP + 0x51],AL }
    /* +0xb16c3d */ __asm { MOVZX EAX,uint8_t ptr [RDX + R9*0x4 + -0x4de7] }
    /* +0xb16c46 */ __asm { NOT AL }
    /* +0xb16c48 */ __asm { ROL AL,0x5 }
    /* +0xb16c4b */ __asm { MOV uint8_t ptr [RSP + 0x52],AL }
    /* +0xb16c4f */ __asm { MOVZX EDX,uint8_t ptr [RDX + R9*0x4 + -0x4de6] }
    /* +0xb16c58 */ __asm { NOT DL }
    /* +0xb16c5a */ __asm { ROL DL,0x5 }
    /* +0xb16c5d */ __asm { MOV uint8_t ptr [RSP + 0x53],DL }
    /* +0xb16c61 */ __asm { MOV R10D,0x9102c3cc }
    /* +0xb16c67 */ __asm { XOR R10D,dword ptr [RSP + 0x50] }
    /* +0xb16c6c */ __asm { BT R10D,R10D }
    /* +0xb16c70 */ __asm { JNC 0x7fffa52872ec }
    /* +0xb16c76 */ __asm { LEA RDX,[0x7fffa47b5bd4] }
    /* +0xb16c7d */ __asm { MOV R9,0x4798691f072cee4c }
    /* +0xb16c87 */ __asm { CMP RDX,R9 }
    /* +0xb16c8a */ __asm { NOP }
    /* +0xb16c8b */ __asm { NOP }
    /* +0xb16c8c */ __asm { NOP }
    /* +0xb16c8d */ __asm { NOP }
    /* +0xb16c8e */ __asm { NOP }
    /* +0xb16c8f */ __asm { NOP }
    /* +0xb16c90 */ __asm { NOP }
    /* +0xb16c91 */ __asm { MOV R9D,0xa59ad529 }
    /* +0xb16c97 */ __asm { NOT R9D }
    /* +0xb16c9a */ __asm { ADD R9D,EDI }
    /* +0xb16c9d */ __asm { MOV qword ptr [RSP + 0x50],R10 }
    /* +0xb16ca2 */ __asm { MOV EAX,dword ptr [RDX + R9*0x1 + 0x110] }
    /* +0xb16caa */ __asm { JMP 0x7fffa52873ad }
    /* +0xb16caf */ __asm { RDTSC }
    /* +0xb16cb1 */ __asm { SHL RDX,0x20 }
    /* +0xb16cb5 */ __asm { OR RDX,RAX }
    /* +0xb16cb8 */ __asm { MOV RCX,-0x5a46117eacb056b3 }
    /* +0xb16cc2 */ __asm { IMUL RCX,RDX }
    /* +0xb16cc6 */ __asm { MOV R9,-0x6d4c4f8f2fb5aeae }
    /* +0xb16cd0 */ __asm { ADD R9,RCX }
    /* +0xb16cd3 */ __asm { MOV R10,R9 }
    /* +0xb16cd6 */ __asm { SHR R10,0x2d }
    /* +0xb16cda */ __asm { MOV RCX,R9 }
    /* +0xb16cdd */ __asm { SHR RCX,0x3b }
    /* +0xb16ce1 */ __asm { SHR R9,0x1b }
    /* +0xb16ce5 */ __asm { XOR R9D,R10D }
    /* +0xb16ce8 */ __asm { ROR R9D,CL }
    /* +0xb16ceb */ __asm { PUSHFQ }
    /* +0xb16cec */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb16cf4 */ __asm { POPFQ }
    /* +0xb16cf5 */ __asm { MOV dword ptr [RSP + 0x50],0x5244ddc5 }
    /* +0xb16cfd */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xb16d02 */ __asm { TEST R10D,R10D }
    /* +0xb16d05 */ __asm { NOP }
    /* +0xb16d06 */ __asm { NOP }
    /* +0xb16d07 */ __asm { NOP }
    /* +0xb16d08 */ __asm { NOP }
    /* +0xb16d09 */ __asm { NOP }
    /* +0xb16d0a */ __asm { NOP }
    /* +0xb16d0b */ __asm { NOP }
    /* +0xb16d0c */ __asm { NOP }
    /* +0xb16d0d */ __asm { NOP }
    /* +0xb16d0e */ __asm { NOP }
    /* +0xb16d0f */ __asm { NOP }
    /* +0xb16d10 */ __asm { NOP }
    /* +0xb16d11 */ __asm { NOP }
    /* +0xb16d12 */ __asm { NOP }
    /* +0xb16d13 */ __asm { NOP }
    /* +0xb16d14 */ __asm { NOP }
    /* +0xb16d15 */ __asm { NOP }
    /* +0xb17020 */ __asm { MOV R10W,0x4ebb }
    /* +0xb17025 */ __asm { IMUL R10D,R10D,0x4673 }
    /* +0xb1702c */ __asm { MOV ECX,EDI }
    /* +0xb1702e */ __asm { ROR R10W,CL }
    /* +0xb17032 */ __asm { RDTSC }
    /* +0xb17034 */ __asm { SHL RDX,0x20 }
    /* +0xb17038 */ __asm { OR RDX,RAX }
    /* +0xb1703b */ __asm { MOV R11,qword ptr [RSP + 0xa8] }
    /* +0xb17043 */ __asm { MOVZX R10D,R10W }
    /* +0xb17047 */ __asm { MOV R9,0x5851f42d4c957f2d }
    /* +0xb17051 */ __asm { IMUL R9,RDX }
    /* +0xb17055 */ __asm { MOV RAX,0x1495d1bf14f0a46e }
    /* +0xb1705f */ __asm { ADD RAX,R9 }
    /* +0xb17062 */ __asm { MOV R9,RAX }
    /* +0xb17065 */ __asm { SHR R9,0x1b }
    /* +0xb17069 */ __asm { MOV RCX,RAX }
    /* +0xb1706c */ __asm { SHR RCX,0x3b }
    /* +0xb17070 */ __asm { SHR RAX,0x2d }
    /* +0xb17074 */ __asm { XOR R9D,EAX }
    /* +0xb17077 */ __asm { MOV RDX,qword ptr [R11 + 0x88] }
    /* +0xb1707e */ __asm { ROR R9D,CL }
    /* +0xb17081 */ __asm { MOV RCX,qword ptr GS:[R10] }
    /* +0xb17085 */ __asm { SUB RDX,qword ptr [RCX + 0x18] }
    /* +0xb17089 */ __asm { XOR RDX,0x61a211e0 }
    /* +0xb17090 */ __asm { MOV RCX,-0xc7d36bd7 }
    /* +0xb1709a */ __asm { ADD RCX,RDX }
    /* +0xb1709d */ __asm { MOV RDX,-0x7cb34437c5d416ea }
    /* +0xb170a7 */ __asm { CMP RCX,RDX }
    /* +0xb170aa */ __asm { JZ 0x7fffa52873e5 }
    /* +0xb170b0 */ __asm { NOP }
    /* +0xb170b1 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb170b8 */ __asm { MOV RDX,0x0 }
    /* +0xb170bf */ __asm { CMP R9D,0x410f01c }
    /* +0xb170c6 */ __asm { JA 0x7fffa52872c2 }
    /* +0xb170cc */ __asm { MOV R10W,0x6526 }
    /* +0xb170d1 */ __asm { IMUL R10D,R10D,0x6f9b }
    /* +0xb170d8 */ __asm { MOV ECX,EDI }
    /* +0xb170da */ __asm { ROL R10W,CL }
    /* +0xb170de */ __asm { IMUL R10D,R10D,-0x6dcb }
    /* +0xb170e5 */ __asm { MOVZX ECX,R10W }
    /* +0xb170e9 */ __asm { MOV RDX,qword ptr GS:[RCX] }
    /* +0xb170ed */ __asm { MOV R9D,0x22f55c7f }
    /* +0xb170f3 */ __asm { XOR R9,qword ptr [RDX + 0x30] }
    /* +0xb170f7 */ __asm { ADD R9,0x1d2d2dca }
    /* +0xb170fe */ __asm { MOV RDX,-0x41570fe98c09b3a8 }
    /* +0xb17108 */ __asm { CMP R9,RDX }
    /* +0xb1710b */ __asm { NOP }
    /* +0xb1710c */ __asm { NOP }
    /* +0xb1710d */ __asm { NOP }
    /* +0xb1710e */ __asm { NOP }
    /* +0xb1710f */ __asm { LEA RDX,[0x7fffa47b6459] }
    /* +0xb17116 */ __asm { MOV R9,0x318ef27a323bb1e8 }
    /* +0xb17120 */ __asm { CMP RDX,R9 }
    /* +0xb17123 */ __asm { NOP }
    /* +0xb17124 */ __asm { NOP }
    /* +0xb17125 */ __asm { NOP }
    /* +0xb17126 */ __asm { NOP }
    /* +0xb17127 */ __asm { NOP }
    /* +0xb17128 */ __asm { NOP }
    /* +0xb17129 */ __asm { MOV ECX,0xf06f84ac }
    /* +0xb1712e */ __asm { XOR ECX,EDI }
    /* +0xb17130 */ __asm { MOVZX R9D,uint8_t ptr [RDX + 0x6234] }
    /* +0xb17138 */ __asm { MOVZX EAX,uint8_t ptr [RDX + R9*0x4 + 0x6244] }
    /* +0xb17141 */ __asm { ROL AL,0x4 }
    /* +0xb17144 */ __asm { MOV uint8_t ptr [RSP + 0x50],AL }
    /* +0xb17148 */ __asm { MOVZX EAX,uint8_t ptr [RDX + R9*0x4 + 0x6245] }
    /* +0xb17151 */ __asm { ROL AL,0x4 }
    /* +0xb17154 */ __asm { MOV uint8_t ptr [RSP + 0x51],AL }
    /* +0xb17158 */ __asm { MOVZX EAX,uint8_t ptr [RDX + R9*0x4 + 0x6246] }
    /* +0xb17161 */ __asm { ROL AL,0x4 }
    /* +0xb17164 */ __asm { MOV uint8_t ptr [RSP + 0x52],AL }
    /* +0xb17168 */ __asm { MOVZX EDX,uint8_t ptr [RDX + R9*0x4 + 0x6247] }
}


// ============================================================================
// Function : MasterExceptionDispatcher  |  RVA: 0xb75d30  |  Size: 8712 bytes
// Callers  : Hook_ntdll_dll_KiUserExceptionDispatcher@0xce37c0
// Callees  : FUN_7fffa565caf0@0xeecaf0
// ============================================================================
// [Structured Disassembly Fallback]
void MasterExceptionDispatcher(void) {
    /* +0xb75d30 */ __asm { PUSH RBP }
    /* +0xb75d31 */ __asm { PUSH R13 }
    /* +0xb75d33 */ __asm { PUSH R14 }
    /* +0xb75d35 */ __asm { PUSH R15 }
    /* +0xb75d37 */ __asm { PUSH RBX }
    /* +0xb75d38 */ __asm { PUSH RSI }
    /* +0xb75d39 */ __asm { PUSH R12 }
    /* +0xb75d3b */ __asm { PUSH RDI }
    /* +0xb75d3c */ __asm { MOV EAX,0x14c8 }
    /* +0xb75d41 */ __asm { CALL 0x7fffa565caf0 }
    /* +0xb75d46 */ __asm { SUB RSP,RAX }
    /* +0xb75d49 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xb75d51 */ __asm { MOVDQA xmmword ptr [RBP + 0x1430],XMM7 }
    /* +0xb75d59 */ __asm { MOVDQA xmmword ptr [RBP + 0x1420],XMM12 }
    /* +0xb75d62 */ __asm { MOVDQA xmmword ptr [RBP + 0x1410],XMM9 }
    /* +0xb75d6b */ __asm { MOVDQA xmmword ptr [RBP + 0x1400],XMM13 }
    /* +0xb75d74 */ __asm { MOVDQA xmmword ptr [RBP + 0x13f0],XMM14 }
    /* +0xb75d7d */ __asm { MOVDQA xmmword ptr [RBP + 0x13e0],XMM8 }
    /* +0xb75d86 */ __asm { MOVDQA xmmword ptr [RBP + 0x13d0],XMM11 }
    /* +0xb75d8f */ __asm { MOVDQA xmmword ptr [RBP + 0x13c0],XMM6 }
    /* +0xb75d97 */ __asm { MOVDQA xmmword ptr [RBP + 0x13b0],XMM15 }
    /* +0xb75da0 */ __asm { MOVDQA xmmword ptr [RBP + 0x13a0],XMM10 }
    /* +0xb75da9 */ __asm { MOV qword ptr [RBP + 0x1398],-0x2 }
    /* +0xb75db4 */ __asm { MOV R14,RDX }
    /* +0xb75db7 */ __asm { MOV qword ptr [RBP + 0x580],RCX }
    /* +0xb75dbe */ __asm { MOV R10,RBX }
    /* +0xb75dc1 */ __asm { MOV R9,R10 }
    /* +0xb75dc4 */ __asm { NOT R9 }
    /* +0xb75dc7 */ __asm { MOV RSI,R13 }
    /* +0xb75dca */ __asm { MOV RDX,RSI }
    /* +0xb75dcd */ __asm { XOR RDX,R10 }
    /* +0xb75dd0 */ __asm { MOV R11,-0xaa45752c }
    /* +0xb75dda */ __asm { IMUL R11,RDX }
    /* +0xb75dde */ __asm { IMUL RDX,RDX,0x63dc1dd5 }
    /* +0xb75de5 */ __asm { MOV R12,RSI }
    /* +0xb75de8 */ __asm { NOT R12 }
    /* +0xb75deb */ __asm { MOV RDI,R10 }
    /* +0xb75dee */ __asm { AND RDI,R12 }
    /* +0xb75df1 */ __asm { MOV RCX,R9 }
    /* +0xb75df4 */ __asm { AND RCX,R12 }
    /* +0xb75df7 */ __asm { IMUL R8,RCX,-0x46695757 }
    /* +0xb75dfe */ __asm { MOV RCX,R10 }
    /* +0xb75e01 */ __asm { AND RCX,RSI }
    /* +0xb75e04 */ __asm { IMUL RAX,RCX,-0x36059d86 }
    /* +0xb75e0b */ __asm { ADD RAX,R11 }
    /* +0xb75e0e */ __asm { IMUL R11,RCX,-0x1063b9d1 }
    /* +0xb75e15 */ __asm { ADD R11,RDX }
    /* +0xb75e18 */ __asm { IMUL RDX,RDI,0x778c5025 }
    /* +0xb75e1f */ __asm { IMUL RCX,RDI,-0x778c5025 }
    /* +0xb75e26 */ __asm { ADD RCX,RAX }
    /* +0xb75e29 */ __asm { ADD RCX,R8 }
    /* +0xb75e2c */ __asm { PUSHFQ }
    /* +0xb75e2d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb75e35 */ __asm { POPFQ }
    /* +0xb75e36 */ __asm { ADD RDX,R11 }
    /* +0xb75e39 */ __asm { ADD RCX,RDX }
    /* +0xb75e3c */ __asm { MOV dword ptr [RBP + 0x5e0],0x491aa885 }
    /* +0xb75e46 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb75e4d */ __asm { TEST R11D,R11D }
    /* +0xb75e50 */ __asm { JS 0x7fffa534ab14 }
    /* +0xb75e56 */ __asm { MOV R11W,0xcdcd }
    /* +0xb75e5b */ __asm { ADD R11D,0xffffd675 }
    /* +0xb75e62 */ __asm { ROL R11W,CL }
    /* +0xb75e66 */ __asm { MOVZX R8D,word ptr [R14 + 0x38] }
    /* +0xb75e6b */ __asm { MOV EAX,R8D }
    /* +0xb75e6e */ __asm { AND EAX,0x3 }
    /* +0xb75e71 */ __asm { ROL R11W,0x1 }
    /* +0xb75e75 */ __asm { ADD R11D,EAX }
    /* +0xb75e78 */ __asm { IMUL R11D,R11D,-0x1cfb }
    /* +0xb75e7f */ __asm { ADD R11D,0xffffcedb }
    /* +0xb75e86 */ __asm { MOVZX R11D,R11W }
    /* +0xb75e8a */ __asm { CMP R11D,0x311e }
    /* +0xb75e91 */ __asm { MOV qword ptr [RBP + 0x1038],RCX }
    /* +0xb75e98 */ __asm { JZ 0x7fffa52e5ec4 }
    /* +0xb75e9a */ __asm { MOV dword ptr [RBP + 0x5e0],0xc6de42c5 }
    /* +0xb75ea4 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb75eab */ __asm { TEST R11B,0x1 }
    /* +0xb75eaf */ __asm { JZ 0x7fffa534d8f1 }
    /* +0xb75eb5 */ __asm { XOR R13D,R13D }
    /* +0xb75eb8 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xb75ebf */ __asm { JMP 0x7fffa5361e15 }
    /* +0xb75ec4 */ __asm { MOV qword ptr [RBP + 0x50],RDX }
    /* +0xb75ec8 */ __asm { MOV qword ptr [RBP + 0x1040],RSI }
    /* +0xb75ecf */ __asm { MOV qword ptr [RBP + 0x11e8],R10 }
    /* +0xb75ed6 */ __asm { MOV qword ptr [RBP + 0xf40],R9 }
    /* +0xb75edd */ __asm { MOV R11W,0xe82d }
    /* +0xb75ee2 */ __asm { IMUL R10D,R11D,0x4c51 }
    /* +0xb75ee9 */ __asm { MOVZX R9D,AX }
    /* +0xb75eed */ __asm { LEA R11D,[R10 + R9*0x1] }
    /* +0xb75ef1 */ __asm { ADD R11D,0x45c0 }
    /* +0xb75ef8 */ __asm { ROR R11W,CL }
    /* +0xb75efc */ __asm { MOVZX R10D,R11W }
    /* +0xb75f00 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xb75f04 */ __asm { MOV RDX,0x2b4bf8dd508b44c1 }
    /* +0xb75f0e */ __asm { CMP R11,RDX }
    /* +0xb75f11 */ __asm { NOP }
    /* +0xb75f12 */ __asm { NOP }
    /* +0xb75f13 */ __asm { NOP }
    /* +0xb75f14 */ __asm { NOP }
    /* +0xb75f15 */ __asm { NOP }
    /* +0xb75f16 */ __asm { MOV dword ptr [RBP + 0x590],R8D }
    /* +0xb75f1d */ __asm { MOV qword ptr [RBP + 0x1048],RAX }
    /* +0xb75f24 */ __asm { MOV R10D,0xbd65bcdf }
    /* +0xb75f2a */ __asm { ADD R10D,R9D }
    /* +0xb75f2d */ __asm { ROL R10D,0x7 }
    /* +0xb75f31 */ __asm { NOT R10D }
    /* +0xb75f34 */ __asm { MOV R11D,0x19922b6a }
    /* +0xb75f3a */ __asm { IMUL EDX,R11D,0x1e2a9121 }
    /* +0xb75f41 */ __asm { MOV ECX,R9D }
    /* +0xb75f44 */ __asm { ROR EDX,CL }
    /* +0xb75f46 */ __asm { MOV RSI,qword ptr [RBP + 0x1038] }
    /* +0xb75f4d */ __asm { ADD EDX,ESI }
    /* +0xb75f4f */ __asm { ROL EDX,0x13 }
    /* +0xb75f52 */ __asm { CMP RDX,R10 }
    /* +0xb75f55 */ __asm { MOV qword ptr [RBP + 0x1298],R9 }
    /* +0xb75f5c */ __asm { JBE 0x7fffa52e5ffa }
    /* +0xb75f62 */ __asm { MOV R11W,0xb6a6 }
    /* +0xb75f67 */ __asm { ADD R11D,R9D }
    /* +0xb75f6a */ __asm { MOV R10D,0xffffb6d9 }
    /* +0xb75f70 */ __asm { MOV EAX,0xb66f9c13 }
    /* +0xb75f75 */ __asm { IMUL EDX,EAX,-0x2adfb4b5 }
    /* +0xb75f7b */ __asm { MOV ECX,ESI }
    /* +0xb75f7d */ __asm { ROL EDX,CL }
    /* +0xb75f7f */ __asm { SUB R10D,R11D }
    /* +0xb75f82 */ __asm { MOVZX R10D,R10W }
    /* +0xb75f86 */ __asm { XOR EDX,R9D }
    /* +0xb75f89 */ __asm { MOV qword ptr [RBP + 0x480],RDX }
    /* +0xb75f90 */ __asm { MOV R15,qword ptr GS:[R10] }
    /* +0xb75f94 */ __asm { MOV R11W,0xb548 }
    /* +0xb75f99 */ __asm { MOV R10D,ESI }
    /* +0xb75f9c */ __asm { OR R10D,0x1 }
    /* +0xb75fa0 */ __asm { MOV EAX,0xffffcf8f }
    /* +0xb75fa5 */ __asm { SUB EAX,R11D }
    /* +0xb75fa8 */ __asm { MOV ECX,R9D }
    /* +0xb75fab */ __asm { ROR AX,CL }
    /* +0xb75fae */ __asm { MOVSX R8,AX }
    /* +0xb75fb2 */ __asm { LEA R11,[0x7fffa47c0363] }
    /* +0xb75fb9 */ __asm { MOV CX,0x3977 }
    /* +0xb75fbd */ __asm { NOT ECX }
    /* +0xb75fbf */ __asm { ADD ECX,R9D }
    /* +0xb75fc2 */ __asm { IMUL ECX,R10D }
    /* +0xb75fc6 */ __asm { MOVSX RDX,CX }
    /* +0xb75fca */ __asm { LEA RAX,[0x7fffa47bd658] }
    /* +0xb75fd1 */ __asm { ADD RDX,R11 }
    /* +0xb75fd4 */ __asm { MOVZX R8D,uint8_t ptr [RAX + R8*0x1 + 0xc] }
    /* +0xb75fda */ __asm { LEA R11,[RDX + R8*0x8] }
    /* +0xb75fde */ __asm { ADD R11,0x17 }
    /* +0xb75fe2 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R8*0x8 + 0x1b] }
    /* +0xb75fe8 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R8*0x8 + 0x1c] }
    /* +0xb75fee */ __asm { ROL R10B,0x3 }
    /* +0xb75ff2 */ __asm { ROL CL,0x3 }
    /* +0xb75ff5 */ __asm { JMP 0x7fffa52e60a5 }
    /* +0xb75ffa */ __asm { MOV R8W,0xa8c7 }
    /* +0xb75fff */ __asm { LEA R11D,[RSI + R8*0x1] }
    /* +0xb76003 */ __asm { ADD R11D,0x7ffb }
    /* +0xb7600a */ __asm { ROL R11W,0x1 }
    /* +0xb7600e */ __asm { SUB R11D,R9D }
    /* +0xb76011 */ __asm { MOVZX R10D,R11W }
    /* +0xb76015 */ __asm { MOV RCX,R9 }
    /* +0xb76018 */ __asm { MOV R15,qword ptr GS:[R10] }
    /* +0xb7601c */ __asm { MOV R10W,0xd0f6 }
    /* +0xb76021 */ __asm { LEA RDX,[0x7fffa47be406] }
    /* +0xb76028 */ __asm { MOV EAX,ESI }
    /* +0xb7602a */ __asm { OR EAX,0x1 }
    /* +0xb7602d */ __asm { LEA R11,[0x7fffa47c81e5] }
    /* +0xb76034 */ __asm { MOV R8D,0x7c033205 }
    /* +0xb7603a */ __asm { IMUL R8D,EAX }
    /* +0xb7603e */ __asm { ROL R8D,CL }
    /* +0xb76041 */ __asm { XOR R10D,ESI }
    /* +0xb76044 */ __asm { ADD R10D,0xffff83cc }
    /* +0xb7604b */ __asm { XOR R10D,0x51de }
    /* +0xb76052 */ __asm { ROL R10W,CL }
    /* +0xb76056 */ __asm { MOVSX R9,R10W }
    /* +0xb7605a */ __asm { MOVZX R9D,uint8_t ptr [RDX + R9*0x1 + 0xc] }
    /* +0xb76060 */ __asm { ADD R8D,0xae09cc0b }
    /* +0xb76067 */ __asm { MOVSXD RDX,R8D }
    /* +0xb7606a */ __asm { MOV qword ptr [RBP + 0x480],RDX }
    /* +0xb76071 */ __asm { MOV R10D,0xee1db735 }
    /* +0xb76077 */ __asm { SUB R10D,ECX }
    /* +0xb7607a */ __asm { ROL R10D,0x13 }
    /* +0xb7607e */ __asm { ADD R10D,ESI }
    /* +0xb76081 */ __asm { NOT R10D }
    /* +0xb76084 */ __asm { MOVSXD RDX,R10D }
    /* +0xb76087 */ __asm { ADD RDX,R11 }
    /* +0xb7608a */ __asm { LEA R11,[RDX + R9*0x8] }
    /* +0xb7608e */ __asm { ADD R11,0x17 }
    /* +0xb76092 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R9*0x8 + 0x1c] }
    /* +0xb76098 */ __asm { ROL CL,0x3 }
    /* +0xb7609b */ __asm { MOVZX R10D,uint8_t ptr [RDX + R9*0x8 + 0x1b] }
    /* +0xb760a1 */ __asm { ROL R10B,0x3 }
    /* +0xb760a5 */ __asm { MOVZX R9D,uint8_t ptr [R11 + 0x7] }
    /* +0xb760aa */ __asm { ROL R9B,0x3 }
    /* +0xb760ae */ __asm { MOVZX EDX,uint8_t ptr [R11 + 0x6] }
    /* +0xb760b3 */ __asm { ROL DL,0x3 }
    /* +0xb760b6 */ __asm { MOV uint8_t ptr [RBP + 0x5e6],DL }
    /* +0xb760bc */ __asm { MOV uint8_t ptr [RBP + 0x5e4],R10B }
    /* +0xb760c3 */ __asm { MOVZX R10D,uint8_t ptr [R11] }
    /* +0xb760c7 */ __asm { ROL R10B,0x3 }
    /* +0xb760cb */ __asm { MOV uint8_t ptr [RBP + 0x5e0],R10B }
    /* +0xb760d2 */ __asm { MOVZX EDX,uint8_t ptr [R11 + 0x2] }
    /* +0xb760d7 */ __asm { MOVZX R10D,uint8_t ptr [R11 + 0x3] }
    /* +0xb760dc */ __asm { ROL R10B,0x3 }
    /* +0xb760e0 */ __asm { ROL DL,0x3 }
    /* +0xb760e3 */ __asm { MOV uint8_t ptr [RBP + 0x5e3],R10B }
    /* +0xb760ea */ __asm { MOV uint8_t ptr [RBP + 0x5e7],R9B }
    /* +0xb760f1 */ __asm { MOV uint8_t ptr [RBP + 0x4a8],DL }
    /* +0xb760f7 */ __asm { MOV uint8_t ptr [RBP + 0x5e2],DL }
    /* +0xb760fd */ __asm { MOVZX R10D,uint8_t ptr [R11 + 0x1] }
    /* +0xb76102 */ __asm { MOV uint8_t ptr [RBP + 0x5e5],CL }
    /* +0xb76108 */ __asm { ROL R10B,0x3 }
    /* +0xb7610c */ __asm { MOV uint8_t ptr [RBP + 0x1f0],R10B }
    /* +0xb76113 */ __asm { MOV uint8_t ptr [RBP + 0x5e1],R10B }
    /* +0xb7611a */ __asm { CMP R14,qword ptr [RBP + 0x5e0] }
    /* +0xb76121 */ __asm { JC 0x7fffa52e61d6 }
    /* +0xb76127 */ __asm { MOV R10D,0x7fa05d7f }
    /* +0xb7612d */ __asm { LEA R11,[0x7fffa4791d18] }
    /* +0xb76134 */ __asm { MOV CX,0x17c4 }
    /* +0xb76138 */ __asm { MOV RSI,qword ptr [RBP + 0x1038] }
    /* +0xb7613f */ __asm { ADD ECX,ESI }
    /* +0xb76141 */ __asm { LEA R8,[0x7fffa478c7ba] }
    /* +0xb76148 */ __asm { LEA RDX,[0x7fffa4784cd6] }
    /* +0xb7614f */ __asm { MOV EAX,0x8ea300ec }
    /* +0xb76154 */ __asm { MOV R9,qword ptr [RBP + 0x480] }
    /* +0xb7615b */ __asm { MOV R13,R12 }
    /* +0xb7615e */ __asm { MOV R12,R14 }
    /* +0xb76161 */ __asm { MOV R14,R9 }
    /* +0xb76164 */ __asm { XOR ECX,R14D }
    /* +0xb76167 */ __asm { XOR ECX,0x1048 }
    /* +0xb7616d */ __asm { ADD ECX,0xffffde26 }
    /* +0xb76173 */ __asm { MOVSX R9,CX }
    /* +0xb76177 */ __asm { MOV RBX,R15 }
    /* +0xb7617a */ __asm { MOV R15D,ESI }
    /* +0xb7617d */ __asm { OR R15D,0x1 }
    /* +0xb76181 */ __asm { OR R14D,0x1 }
    /* +0xb76185 */ __asm { IMUL EAX,R14D }
    /* +0xb76189 */ __asm { IMUL R14D,R10D }
    /* +0xb7618d */ __asm { MOV RCX,qword ptr [RBP + 0x1298] }
    /* +0xb76194 */ __asm { ROL R14D,CL }
    /* +0xb76197 */ __asm { IMUL R14D,R15D }
    /* +0xb7619b */ __asm { MOV R15,RBX }
    /* +0xb7619e */ __asm { ADD EAX,ESI }
    /* +0xb761a0 */ __asm { XOR EAX,ECX }
    /* +0xb761a2 */ __asm { NOT EAX }
    /* +0xb761a4 */ __asm { MOVSXD RCX,EAX }
    /* +0xb761a7 */ __asm { MOVZX R8D,uint8_t ptr [R8 + RCX*0x1 + 0x8] }
    /* +0xb761ad */ __asm { NOT R14D }
    /* +0xb761b0 */ __asm { MOVSXD RAX,R14D }
    /* +0xb761b3 */ __asm { MOV R14,R12 }
    /* +0xb761b6 */ __asm { MOV R12,R13 }
    /* +0xb761b9 */ __asm { ADD RAX,R11 }
    /* +0xb761bc */ __asm { MOV R11,qword ptr [RAX + R8*0x8 + 0xd] }
    /* +0xb761c1 */ __asm { XOR R11,qword ptr [RDX + R9*0x1 + 0x2b] }
    /* +0xb761c6 */ __asm { MOV qword ptr [RBP + 0x5e0],R11 }
    /* +0xb761cd */ __asm { CMP R14,qword ptr [RBP + 0x5e0] }
    /* +0xb761d4 */ __asm { JC 0x7fffa52e622a }
    /* +0xb761d6 */ __asm { CMP R14,qword ptr [R15 + 0x10] }
    /* +0xb761da */ __asm { JC 0x7fffa52e61e2 }
    /* +0xb761dc */ __asm { CMP R14,qword ptr [R15 + 0x8] }
    /* +0xb761e0 */ __asm { JC 0x7fffa52e622a }
    /* +0xb761e2 */ __asm { MOV R11,-0x7744cc8dc5cd288d }
    /* +0xb761ec */ __asm { IMUL R11,R11,0x7ce81ef3 }
    /* +0xb761f3 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb761fa */ __asm { ROR R11,CL }
    /* +0xb761fd */ __asm { SUB R11,qword ptr [RBP + 0x480] }
    /* +0xb76204 */ __asm { MOV RDI,qword ptr [RBP + 0x1038] }
    /* +0xb7620b */ __asm { XOR R11,RDI }
    /* +0xb7620e */ __asm { NOT R11 }
    /* +0xb76211 */ __asm { XOR R13D,R13D }
    /* +0xb76214 */ __asm { CMP qword ptr [RBP + 0x1488],R11 }
    /* +0xb7621b */ __asm { JNZ 0x7fffa5361e15 }
    /* +0xb76221 */ __asm { MOV FS,word ptr [RDI + -0x10] }
    /* +0xb7622a */ __asm { MOV dword ptr [RBP + 0x5e0],0x1db0d97e }
    /* +0xb76234 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb7623b */ __asm { MOV R11D,0xb9f92695 }
    /* +0xb76241 */ __asm { MOV R10D,0xa563e237 }
    /* +0xb76247 */ __asm { SUB R10D,R11D }
    /* +0xb7624a */ __asm { LEA RDX,[0x7fffa47c7e73] }
    /* +0xb76251 */ __asm { MOV R11,qword ptr [RBP + 0x480] }
    /* +0xb76258 */ __asm { MOV R9D,R11D }
    /* +0xb7625b */ __asm { OR R9D,0x1 }
    /* +0xb7625f */ __asm { MOV qword ptr [RBP + 0x11d8],R9 }
    /* +0xb76266 */ __asm { MOV R11D,0x2ba342e }
    /* +0xb7626c */ __asm { IMUL R11D,R11D,0x60a93569 }
    /* +0xb76273 */ __asm { MOV RCX,qword ptr [RBP + 0x1038] }
    /* +0xb7627a */ __asm { ROL R11D,CL }
    /* +0xb7627d */ __asm { IMUL R11D,R9D }
    /* +0xb76281 */ __asm { MOV R9,qword ptr [RBP + 0x1298] }
    /* +0xb76288 */ __asm { ADD R11D,R9D }
    /* +0xb7628b */ __asm { OR ECX,0x1 }
    /* +0xb7628e */ __asm { MOV qword ptr [RBP + 0xe8],RCX }
    /* +0xb76295 */ __asm { IMUL R10D,ECX }
    /* +0xb76299 */ __asm { SUB R10D,R9D }
    /* +0xb7629c */ __asm { LEA R8,[0x7fffa47ca0a3] }
    /* +0xb762a3 */ __asm { MOVSXD R11,R11D }
    /* +0xb762a6 */ __asm { ADD R11,R8 }
    /* +0xb762a9 */ __asm { ADD R10D,0x77836922 }
    /* +0xb762b0 */ __asm { MOVSXD R8,R10D }
    /* +0xb762b3 */ __asm { MOVZX R8D,uint8_t ptr [RDX + R8*0x1 + 0xc] }
    /* +0xb762b9 */ __asm { MOVZX ECX,uint8_t ptr [R11 + R8*0x8 + 0x17] }
    /* +0xb762bf */ __asm { ROL CL,0x3 }
    /* +0xb762c2 */ __asm { MOV uint8_t ptr [RBP + 0x3b0],CL }
    /* +0xb762c8 */ __asm { MOV uint8_t ptr [RBP + 0x5e0],CL }
    /* +0xb762ce */ __asm { MOVZX ECX,uint8_t ptr [R11 + R8*0x8 + 0x1a] }
    /* +0xb762d4 */ __asm { ROL CL,0x3 }
    /* +0xb762d7 */ __asm { MOVZX R10D,uint8_t ptr [R11 + R8*0x8 + 0x1c] }
    /* +0xb762dd */ __asm { MOVZX R9D,uint8_t ptr [R11 + R8*0x8 + 0x1d] }
    /* +0xb762e3 */ __asm { ROL R9B,0x3 }
    /* +0xb762e7 */ __asm { MOVZX EDX,uint8_t ptr [R11 + R8*0x8 + 0x19] }
    /* +0xb762ed */ __asm { ROL R10B,0x3 }
    /* +0xb762f1 */ __asm { MOV uint8_t ptr [RBP + 0x5e6],R9B }
    /* +0xb762f8 */ __asm { MOV uint8_t ptr [RBP + 0x5e5],R10B }
    /* +0xb762ff */ __asm { ROL DL,0x3 }
    /* +0xb76302 */ __asm { MOV uint8_t ptr [RBP + 0x5e3],CL }
    /* +0xb76308 */ __asm { MOVZX ECX,uint8_t ptr [R11 + R8*0x8 + 0x1b] }
    /* +0xb7630e */ __asm { MOV uint8_t ptr [RBP + 0x5e2],DL }
    /* +0xb76314 */ __asm { ROL CL,0x3 }
    /* +0xb76317 */ __asm { MOV uint8_t ptr [RBP + 0x5e4],CL }
    /* +0xb7631d */ __asm { MOVZX ECX,uint8_t ptr [R11 + R8*0x8 + 0x1e] }
    /* +0xb76323 */ __asm { ROL CL,0x3 }
    /* +0xb76326 */ __asm { MOV uint8_t ptr [RBP + 0x5e7],CL }
    /* +0xb7632c */ __asm { MOVZX ECX,uint8_t ptr [R11 + R8*0x8 + 0x18] }
    /* +0xb76332 */ __asm { ROL CL,0x3 }
    /* +0xb76335 */ __asm { MOV uint8_t ptr [RBP + 0x5e1],CL }
    /* +0xb7633b */ __asm { MOV RBX,qword ptr [RBP + 0x5e0] }
    /* +0xb76342 */ __asm { MOV RDX,qword ptr [RBP + 0x580] }
    /* +0xb76349 */ __asm { CMP RDX,RBX }
    /* +0xb7634c */ __asm { JC 0x7fffa52e6406 }
    /* +0xb76352 */ __asm { LEA RDX,[0x7fffa478a474] }
    /* +0xb76359 */ __asm { LEA R11,[0x7fffa478a894] }
    /* +0xb76360 */ __asm { MOV R10W,0xd6f }
    /* +0xb76365 */ __asm { MOV RSI,R14 }
    /* +0xb76368 */ __asm { MOV R14W,0x2bcc }
    /* +0xb7636d */ __asm { MOV R13,R15 }
    /* +0xb76370 */ __asm { MOV R15,qword ptr [RBP + 0x1038] }
    /* +0xb76377 */ __asm { ADD R14D,R15D }
    /* +0xb7637a */ __asm { ADD R10D,0x4766 }
    /* +0xb76381 */ __asm { ROL R10W,0xa }
    /* +0xb76386 */ __asm { LEA R8,[0x7fffa47888fe] }
    /* +0xb7638d */ __asm { MOV AX,0x264f }
    /* +0xb76391 */ __asm { IMUL R9D,EAX,-0x3cf1 }
    /* +0xb76398 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0xb7639f */ __asm { LEA EAX,[RCX + R14*0x1] }
    /* +0xb763a3 */ __asm { ADD EAX,0xffffd22a }
    /* +0xb763a8 */ __asm { MOV R14,RSI }
    /* +0xb763ab */ __asm { MOVSX RAX,AX }
    /* +0xb763af */ __asm { ADD R10D,ECX }
    /* +0xb763b2 */ __asm { ROL R9W,CL }
    /* +0xb763b6 */ __asm { MOV ECX,R15D }
    /* +0xb763b9 */ __asm { ROR R9W,CL }
    /* +0xb763bd */ __asm { NOT R10D }
    /* +0xb763c0 */ __asm { ADD R10D,R15D }
    /* +0xb763c3 */ __asm { MOV R15,R13 }
    /* +0xb763c6 */ __asm { MOVZX R8D,uint8_t ptr [R8 + RAX*0x1 + 0x8] }
    /* +0xb763cc */ __asm { MOVSX RCX,R10W }
    /* +0xb763d0 */ __asm { SUB R9D,dword ptr [RBP + 0x1298] }
    /* +0xb763d7 */ __asm { ADD R9D,0xffffea30 }
    /* +0xb763de */ __asm { MOVSX RAX,R9W }
    /* +0xb763e2 */ __asm { ADD RAX,RDX }
    /* +0xb763e5 */ __asm { MOV RDX,qword ptr [RAX + R8*0x8 + 0xd] }
    /* +0xb763ea */ __asm { XOR RDX,qword ptr [R11 + RCX*0x1 + 0x2b] }
    /* +0xb763ef */ __asm { MOV qword ptr [RBP + 0x5e0],RDX }
    /* +0xb763f6 */ __asm { MOV RDX,qword ptr [RBP + 0x580] }
    /* +0xb763fd */ __asm { CMP RDX,qword ptr [RBP + 0x5e0] }
    /* +0xb76404 */ __asm { JC 0x7fffa52e647c }
    /* +0xb76406 */ __asm { CMP RDX,qword ptr [R15 + 0x10] }
    /* +0xb7640a */ __asm { JC 0x7fffa52e6412 }
    /* +0xb7640c */ __asm { CMP RDX,qword ptr [R15 + 0x8] }
    /* +0xb76410 */ __asm { JC 0x7fffa52e647c }
    /* +0xb76412 */ __asm { PUSHFQ }
    /* +0xb76413 */ __asm { POP RDX }
    /* +0xb76414 */ __asm { TEST EDX,0x100 }
    /* +0xb7641a */ __asm { NOP }
    /* +0xb7641b */ __asm { NOP }
    /* +0xb7641c */ __asm { NOP }
    /* +0xb7641d */ __asm { NOP }
    /* +0xb7641e */ __asm { NOP }
    /* +0xb7641f */ __asm { NOP }
    /* +0xb76420 */ __asm { NOP }
    /* +0xb76421 */ __asm { NOP }
    /* +0xb76422 */ __asm { NOP }
    /* +0xb76423 */ __asm { NOP }
    /* +0xb76424 */ __asm { NOP }
    /* +0xb76425 */ __asm { NOP }
    /* +0xb76426 */ __asm { NOP }
    /* +0xb76427 */ __asm { NOP }
    /* +0xb76428 */ __asm { NOP }
    /* +0xb76429 */ __asm { NOP }
    /* +0xb7642a */ __asm { NOP }
    /* +0xb76474 */ __asm { XOR R13D,R13D }
    /* +0xb76477 */ __asm { JMP 0x7fffa5361e15 }
    /* +0xb7647c */ __asm { MOV dword ptr [RBP + 0x5e0],0xb8be057b }
    /* +0xb76486 */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb7648d */ __asm { MOV R11D,dword ptr [RDX] }
    /* +0xb76490 */ __asm { MOV R10D,R11D }
    /* +0xb76493 */ __asm { ROL R10D,0x7 }
    /* +0xb76497 */ __asm { ADD R10D,0xf52e2fdf }
    /* +0xb7649e */ __asm { CMP R10D,0xf52e32bf }
    /* +0xb764a5 */ __asm { JNZ 0x7fffa52e64dc }
    /* +0xb764a7 */ __asm { MOV R10W,0x2d19 }
    /* +0xb764ac */ __asm { IMUL R10D,R10D,-0x2dcf }
    /* +0xb764b3 */ __asm { SUB R10D,dword ptr [RBP + 0x1298] }
    /* +0xb764ba */ __asm { IMUL R10D,R10D,-0x503d }
    /* +0xb764c1 */ __asm { ADD R10D,dword ptr [RBP + 0x480] }
    /* +0xb764c8 */ __asm { XOR R10D,R11D }
    /* +0xb764cb */ __asm { NOT R10D }
    /* +0xb764ce */ __asm { MOVZX R10D,R10W }
    /* +0xb764d2 */ __asm { CMP dword ptr [RDX + 0x18],R10D }
    /* +0xb764d6 */ __asm { JNZ 0x7fffa52e67ea }
    /* +0xb764dc */ __asm { MOV R11,-0x22874162aef391 }
    /* +0xb764e6 */ __asm { CMP R15,R11 }
    /* +0xb764e9 */ __asm { NOP }
    /* +0xb764ea */ __asm { NOP }
    /* +0xb764eb */ __asm { NOP }
    /* +0xb764ec */ __asm { NOP }
    /* +0xb764ed */ __asm { NOP }
    /* +0xb764ee */ __asm { MOV R13,RBX }
    /* +0xb764f1 */ __asm { MOV qword ptr [RBP + 0x1b0],R15 }
    /* +0xb764f8 */ __asm { MOV qword ptr [RBP + 0x1320],R12 }
    /* +0xb764ff */ __asm { MOV qword ptr [RBP + 0x5b0],R14 }
    /* +0xb76506 */ __asm { LEA R8,[0x7fffa477d136] }
    /* +0xb7650d */ __asm { MOV R11,-0x63ea9535a7d8b344 }
    /* +0xb76517 */ __asm { CMP R8,R11 }
    /* +0xb7651a */ __asm { NOP }
    /* +0xb7651b */ __asm { NOP }
    /* +0xb7651c */ __asm { NOP }
    /* +0xb7651d */ __asm { NOP }
    /* +0xb7651e */ __asm { NOP }
    /* +0xb7651f */ __asm { MOV R11W,0xd137 }
    /* +0xb76524 */ __asm { IMUL R11D,R11D,0x104f }
    /* +0xb7652b */ __asm { MOV R12,qword ptr [RBP + 0x480] }
    /* +0xb76532 */ __asm { MOV ECX,R12D }
    /* +0xb76535 */ __asm { ROL R11W,CL }
    /* +0xb76539 */ __asm { MOVZX R9D,uint8_t ptr [R8 + 0x7459] }
    /* +0xb76541 */ __asm { NOT R11D }
    /* +0xb76544 */ __asm { MOV R15,qword ptr [RBP + 0x1038] }
    /* +0xb7654b */ __asm { MOV ECX,R15D }
    /* +0xb7654e */ __asm { ROR R11W,CL }
    /* +0xb76552 */ __asm { MOV dword ptr [RBP + 0xa0],R11D }
    /* +0xb76559 */ __asm { MOVZX ECX,uint8_t ptr [R8 + R9*0x4 + 0x7463] }
    /* +0xb76562 */ __asm { NOT CL }
    /* +0xb76564 */ __asm { MOV uint8_t ptr [RBP + 0x510],CL }
    /* +0xb7656a */ __asm { ROL CL,0x3 }
    /* +0xb7656d */ __asm { MOV RSI,qword ptr [RBP + 0x1298] }
    /* +0xb76574 */ __asm { MOV EDX,ESI }
    /* +0xb76576 */ __asm { MOV uint8_t ptr [RBP + 0x5e0],CL }
    /* +0xb7657c */ __asm { MOVZX ECX,uint8_t ptr [R8 + R9*0x4 + 0x7464] }
    /* +0xb76585 */ __asm { NOT CL }
    /* +0xb76587 */ __asm { ROL CL,0x3 }
    /* +0xb7658a */ __asm { MOV uint8_t ptr [RBP + 0x5e1],CL }
    /* +0xb76590 */ __asm { MOVZX ECX,uint8_t ptr [R8 + R9*0x4 + 0x7465] }
    /* +0xb76599 */ __asm { NOT CL }
    /* +0xb7659b */ __asm { ROL CL,0x3 }
    /* +0xb7659e */ __asm { MOV uint8_t ptr [RBP + 0x5e2],CL }
    /* +0xb765a4 */ __asm { MOVZX ECX,uint8_t ptr [R8 + R9*0x4 + 0x7466] }
    /* +0xb765ad */ __asm { NOT CL }
    /* +0xb765af */ __asm { ROL CL,0x3 }
    /* +0xb765b2 */ __asm { OR EDX,0x1 }
    /* +0xb765b5 */ __asm { MOV uint8_t ptr [RBP + 0x5e3],CL }
    /* +0xb765bb */ __asm { MOV EBX,dword ptr [RBP + 0x5e0] }
    /* +0xb765c1 */ __asm { XOR EBX,0x97cd0fa7 }
    /* +0xb765c7 */ __asm { MOV dword ptr [RBP + 0x390],EBX }
    /* +0xb765cd */ __asm { AND EBX,0x1f }
    /* +0xb765d0 */ __asm { MOV R11D,0x1 }
    /* +0xb765d6 */ __asm { MOV ECX,EBX }
    /* +0xb765d8 */ __asm { SHL R11D,CL }
    /* +0xb765db */ __asm { MOV dword ptr [RBP + 0x560],R11D }
    /* +0xb765e2 */ __asm { MOV dword ptr [RBP + 0x5e0],0xfefebc5e }
    /* +0xb765ec */ __asm { MOV R11D,dword ptr [RBP + 0x5e0] }
    /* +0xb765f3 */ __asm { MOV R10W,0x4442 }
    /* +0xb765f8 */ __asm { ADD R10D,R15D }
    /* +0xb765fb */ __asm { ROL R10W,0xd }
    /* +0xb76600 */ __asm { XOR R10D,R12D }
    /* +0xb76603 */ __asm { MOV qword ptr [RBP + 0xd0],RDX }
    /* +0xb7660a */ __asm { IMUL R10D,EDX }
    /* +0xb7660e */ __asm { NOT R10D }
    /* +0xb76611 */ __asm { MOVZX R10D,R10W }
    /* +0xb76615 */ __asm { CMP R11D,R10D }
    /* +0xb76618 */ __asm { JGE 0x7fffa53505ca }
    /* +0xb7661e */ __asm { MOV R14,R12 }
    /* +0xb76621 */ __asm { MOV R11W,0x68b5 }
    /* +0xb76626 */ __asm { ADD R11D,R15D }
    /* +0xb76629 */ __asm { ROL R11W,0x8 }
    /* +0xb7662e */ __asm { PUSHFQ }
    /* +0xb7662f */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb76637 */ __asm { POPFQ }
    /* +0xb76638 */ __asm { MOV ECX,R12D }
    /* +0xb7663b */ __asm { ROR R11W,CL }
    /* +0xb7663f */ __asm { XOR R11D,ESI }
    /* +0xb76642 */ __asm { MOVZX R10D,R11W }
    /* +0xb76646 */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xb7664a */ __asm { LEA RAX,[0x7fffa4791257] }
    /* +0xb76651 */ __asm { MOV R11,qword ptr [R11 + 0x48] }
    /* +0xb76655 */ __asm { LEA RDX,[0x7fffa4788700] }
    /* +0xb7665c */ __asm { MOV R10W,0xb852 }
    /* +0xb76661 */ __asm { SUB R10D,R12D }
    /* +0xb76664 */ __asm { XOR R10D,0x3925 }
    /* +0xb7666b */ __asm { ROL R10W,0x4 }
    /* +0xb76670 */ __asm { SUB R10D,R15D }
    /* +0xb76673 */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0xb7667a */ __asm { ROL R10W,CL }
}


// ============================================================================
// Function : Hook_ntdll_dll_KiUserExceptionDispatcher  |  RVA: 0xce37c0  |  Size: 18 bytes
// Callers  : none
// Callees  : MasterExceptionDispatcher@0xb75d30
// ============================================================================
void Hook_ntdll_dll_KiUserExceptionDispatcher(void)

{
  code *pcVar1;
  uint8_t auStackX_8 [32];
  
  MasterExceptionDispatcher((int64_t)register0x00000020 + 0x4f0);
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Hook_KERNELBASE_dll_SetUnhandledExceptionFilter  |  RVA: 0xd17810  |  Size: 865 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa54878be) overlaps instruction at (ram,0x7fffa54878b7)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa5487875) */

void Hook_KERNELBASE_dll_SetUnhandledExceptionFilter(uint64_t param_1)

{
  char *pcVar1;
  char cVar2;
  uint8_t bVar3;
  uint8_t *puVar4;
  uint8_t bVar5;
  int64_t unaff_RBP;
  uint32_t uVar6;
  uint8_t bVar7;
  uint64_t uVar8;
  uint8_t bVar9;
  uint8_t bVar10;
  uint8_t bVar11;
  uint8_t bVar12;
  uint8_t bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  uint64_t uVar17;
  uint8_t auStack_78 [8];
  uint8_t auStack_70 [48];
  
  puVar4 = auStack_78;
  uVar8 = (int64_t)ProcessEnvironmentBlock + 0xdf8U ^
          *(uint64_t *)((int64_t)ProcessEnvironmentBlock + 0xda8);
  bVar14 = true;
  bVar16 = false;
  bVar15 = false;
  if ((uVar8 * 0x95789f2d74f734c | uVar8 * 0x4255e27cb5d3dcd3 >> 0x3e) == 0xdbc88bebd4f91faf) {
    while (bVar14 || bVar16 != bVar15) {
      param_1 = 0x60;
      *(int *)(unaff_RBP + 0x39) = (int)in_ST0;
      pcVar1 = (char *)(unaff_RBP + 0xc);
      cVar2 = *pcVar1;
      *pcVar1 = *pcVar1 << 1;
      bVar16 = cVar2 < '\0' != *pcVar1 < '\0';
      bVar15 = *pcVar1 < '\0';
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
      bVar14 = *pcVar1 == '\0';
    }
    puVar4 = auStack_70;
  }
  uVar8 = (uint64_t)bRam00007fffa47bb25c;
  puVar4[0x30] = bRam00007fffa47bb28d ^ *(uint8_t *)(uVar8 * 8 + 0x7fffa47bb25f);
  puVar4[0x31] = bRam00007fffa47bb28e ^ *(uint8_t *)(uVar8 * 8 + 0x7fffa47bb260);
  puVar4[0x32] = bRam00007fffa47bb28f ^ *(uint8_t *)(uVar8 * 8 + 0x7fffa47bb261);
  puVar4[0x33] = bRam00007fffa47bb290 ^ *(uint8_t *)(uVar8 * 8 + 0x7fffa47bb262);
  puVar4[0x34] = bRam00007fffa47bb291 ^ *(uint8_t *)(uVar8 * 8 + 0x7fffa47bb263);
  puVar4[0x35] = bRam00007fffa47bb292 ^ *(uint8_t *)(uVar8 * 8 + 0x7fffa47bb264);
  puVar4[0x36] = bRam00007fffa47bb293 ^ *(uint8_t *)(uVar8 * 8 + 0x7fffa47bb265);
  puVar4[0x37] = bRam00007fffa47bb294 ^ *(uint8_t *)(uVar8 * 8 + 0x7fffa47bb266);
  if (*(int64_t *)(puVar4 + 0x30) != -1) {
    bVar11 = ~(uint8_t)((uint64_t)param_1 >> 0x20);
    bVar10 = ~(uint8_t)((uint64_t)param_1 >> 0x38);
    bVar13 = ~(uint8_t)((uint64_t)param_1 >> 0x10);
    bVar9 = ~(uint8_t)((uint64_t)param_1 >> 0x30);
    bVar5 = ~(uint8_t)((uint64_t)param_1 >> 0x28);
    bVar3 = ~(uint8_t)((uint64_t)param_1 >> 8);
    uVar6 = (uint32_t)bRam00007fffa47856a0 * 0x33333334 + 0x33333334;
    bVar7 = ~(uint8_t)((uint64_t)param_1 >> 0x18);
    uVar17 = (uint64_t)uVar6 * 4 + (uint64_t)uVar6;
    uVar8 = uVar17 >> 0x20;
    bVar3 = (bVar3 << 6 | bVar3 >> 2) ^ bRam00007fffa47856d1;
    bVar12 = (~(uint8_t)param_1 << 6 | (uint8_t)~(uint8_t)param_1 >> 2) ^ bRam00007fffa47856d0;
    *(uint8_t *)(uVar8 * 8 + 0x7fffa47856a8) = (bVar7 << 6 | bVar7 >> 2) ^ bRam00007fffa47856d3;
    *(uint8_t *)(uVar8 * 8 + 0x7fffa47856a5) = bVar12;
    *(uint8_t *)(uVar8 * 8 + 0x7fffa47856a7) = (bVar13 << 6 | bVar13 >> 2) ^ bRam00007fffa47856d2;
    *(uint8_t *)(uVar8 * 8 + 0x7fffa47856a6) = bVar3;
    bVar7 = (bVar10 << 6 | bVar10 >> 2) ^ bRam00007fffa47856d7;
    bVar3 = (bVar5 << 6 | bVar5 >> 2) ^ bRam00007fffa47856d5;
    *(uint8_t *)(uVar8 * 8 + 0x7fffa47856ab) = (bVar9 << 6 | bVar9 >> 2) ^ bRam00007fffa47856d6;
    *(uint8_t *)(uVar8 * 8 + 0x7fffa47856aa) = bVar3;
    *(uint8_t *)(uVar8 * 8 + 0x7fffa47856a9) = (bVar11 << 6 | bVar11 >> 2) ^ bRam00007fffa47856d4;
    *(uint8_t *)(uVar8 * 8 + 0x7fffa47856ac) = bVar7;
    bRam00007fffa47856a0 = (uint8_t)(uVar17 >> 0x20);
  }
  *(uint64_t *)(puVar4 + 0x30) =
       *(uint64_t *)((uint64_t)bRam00007fffa4785a46 * 8 + 0x7fffa4785a4c) ^ uRam00007fffa4785a8b ^
       0xffffffffffffffff;
  *(uint64_t *)(puVar4 + -8) = 0x7fffa5487b5f;
  (**(code **)(puVar4 + 0x30))();
  return;
}


// ============================================================================
// Function : Hook_ntdll_dll_NtContinueEx  |  RVA: 0xe88770  |  Size: 1182 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa55f8959) overlaps instruction at (ram,0x7fffa55f8954)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa55f8a58) */
/* WARNING: Removing unreachable block (ram,0x7fffa55f8af0) */
/* WARNING: Removing unreachable block (ram,0x7fffa55f8b96) */
/* WARNING: Removing unreachable block (ram,0x7fffa55f8954) */
/* WARNING: Removing unreachable block (ram,0x7fffa55f8c0a) */
/* WARNING: Removing unreachable block (ram,0x7fffa55f8c0f) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00ff00000060 : 0x7fffa55f8970 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint32_t Hook_ntdll_dll_NtContinueEx(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  if (param_1 == 0) {
    uVar3 = (int64_t)ProcessEnvironmentBlock * 2 + 0xef8;
    if ((uVar3 * 0x20 | uVar3 >> 0x3b) == 0xd36df08fcf7b0336) {
      uRam00000000bfa10030 = 0;
      in((short)ProcessEnvironmentBlock);
    }
  }
  else {
    FUN_7fffa5007fb0(0x75a150e1,0xffffffffc666b320,0x1ae1d590,FUN_7fffa5007fb0);
  }
  param_1 = (param_1 << 0x13 | param_1 >> 0x2d) ^ (param_1 << 0x2c | param_1 >> 0x14) ^ param_1;
  uVar2 = 0xa4ed1890;
  param_1 = (param_1 << 0x39 | param_1 >> 7) ^ (param_1 << 0x1d | param_1 >> 0x23) ^ param_1;
  uVar3 = (param_1 << 0x26 | param_1 >> 0x1a) ^ param_1;
  uVar4 = param_1 << 0xf | param_1 >> 0x31;
  lVar1 = (uVar3 ^ ~uVar4) * -0x3de3f0cd;
  FUN_7fffa4ed1890(lVar1,(uVar4 & ~uVar3) * -0x3de3f0cc + (~uVar3 | uVar4) * 0x3de3f0cd +
                         (~uVar4 & uVar3) + lVar1,
                   param_2 << 0x2f | (param_2 << 0x25) + (param_2 << 0x1d ^ param_2) >> 0x11);
  uVar2 = (uVar2 << 0x1d | uVar2 >> 3) ^ uVar2 ^ (uVar2 << 0x14 | uVar2 >> 0xc);
  uVar2 = (uVar2 << 0x1a | uVar2 >> 6) ^ (uVar2 << 8 | uVar2 >> 0x18) ^ uVar2;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x10) ^ (uVar2 << 0x14 | uVar2 >> 0xc) ^ uVar2;
  return (uVar2 << 8 | uVar2 >> 0x18) << 0x10 | (uVar2 & 0xffffff) >> 8;
}


// ============================================================================
// Function : FUN_7fffa565caf0  |  RVA: 0xeecaf0  |  Size: 78 bytes
// Callers  : FUN_7fffa5513c50@0xda3c50, FUN_7fffa51552c8@0x9e52c8, FUN_7fffa54e557c@0xd7557c, FUN_7fffa4e99600@0x729600, FUN_7fffa5003110@0x893110, MasterExceptionDispatcher@0xb75d30, FUN_7fffa4abb6a0@0x34b6a0, FUN_7fffa5288420@0xb18420
// Callees  : none
// ============================================================================
void FUN_7fffa565caf0(void)

{
  uint8_t *in_RAX;
  uint8_t *puVar1;
  uint8_t *puVar2;
  uint8_t auStackX_8 [32];
  
  puVar1 = auStackX_8 + -(int64_t)in_RAX;
  if (auStackX_8 < in_RAX) {
    puVar1 = (uint8_t *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((uint8_t *)((uint64_t)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}

