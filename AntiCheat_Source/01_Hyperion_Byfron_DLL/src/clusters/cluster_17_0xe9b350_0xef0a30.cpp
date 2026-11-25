// Subsystem: Internal Routines Cluster 17 (0xe9b350 .. 0xef0a30)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : FUN_7fffa560b350  |  RVA: 0xe9b350  |  Size: 6073 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa560b350(void) {
    /* +0xe9b350 */ __asm { PUSH RBP }
    /* +0xe9b351 */ __asm { PUSH RBX }
    /* +0xe9b352 */ __asm { PUSH R13 }
    /* +0xe9b354 */ __asm { PUSH R12 }
    /* +0xe9b356 */ __asm { PUSH R15 }
    /* +0xe9b358 */ __asm { PUSH RSI }
    /* +0xe9b359 */ __asm { PUSH RDI }
    /* +0xe9b35a */ __asm { PUSH R14 }
    /* +0xe9b35c */ __asm { SUB RSP,0x548 }
    /* +0xe9b363 */ __asm { MOV RDX,R10 }
    /* +0xe9b366 */ __asm { SHR RDX,0x1e }
    /* +0xe9b36a */ __asm { MOV R13,R10 }
    /* +0xe9b36d */ __asm { SHR R13,0x3c }
    /* +0xe9b371 */ __asm { XOR R13,RDX }
    /* +0xe9b374 */ __asm { XOR R13,R10 }
    /* +0xe9b377 */ __asm { MOV dword ptr [RSP + 0x60],0x1a3949b8 }
    /* +0xe9b37f */ __asm { MOV ECX,dword ptr [RSP + 0x60] }
    /* +0xe9b383 */ __asm { MOV dword ptr [RSP + 0x90],0x100010 }
    /* +0xe9b38e */ __asm { RDTSC }
    /* +0xe9b390 */ __asm { SHL RDX,0x20 }
    /* +0xe9b394 */ __asm { OR RDX,RAX }
    /* +0xe9b397 */ __asm { MOV RBP,-0x30ebf64fafbc6efb }
    /* +0xe9b3a1 */ __asm { IMUL RDX,RBP }
    /* +0xe9b3a5 */ __asm { MOV RBX,-0x22b18422c4a9c65e }
    /* +0xe9b3af */ __asm { LEA RCX,[RDX + RBX*0x1] }
    /* +0xe9b3b3 */ __asm { MOV R9,RCX }
    /* +0xe9b3b6 */ __asm { SHR R9,0x1b }
    /* +0xe9b3ba */ __asm { MOV R10,RCX }
    /* +0xe9b3bd */ __asm { SHR R10,0x2d }
    /* +0xe9b3c1 */ __asm { XOR R9D,R10D }
    /* +0xe9b3c4 */ __asm { SHR RCX,0x3b }
    /* +0xe9b3c8 */ __asm { ROR R9D,CL }
    /* +0xe9b3cb */ __asm { MOV R14,qword ptr [RSP + 0x5b0] }
    /* +0xe9b3d3 */ __asm { AND R9D,0x3 }
    /* +0xe9b3d7 */ __asm { CMP R9D,0x2 }
    /* +0xe9b3db */ __asm { JNC 0x7fffa560b492 }
    /* +0xe9b3e1 */ __asm { CMP R9D,0x1 }
    /* +0xe9b3e5 */ __asm { JZ 0x7fffa560b753 }
    /* +0xe9b3eb */ __asm { MOV ECX,0xa7db3f84 }
    /* +0xe9b3f0 */ __asm { MOV RDX,0x64bcdc82f3b51b41 }
    /* +0xe9b3fa */ __asm { CMP RCX,RDX }
    /* +0xe9b3fd */ __asm { JZ 0x7fffa560cd14 }
    /* +0xe9b403 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xe9b40a */ __asm { MOV RDX,0x0 }
    /* +0xe9b411 */ __asm { NOP }
    /* +0xe9b412 */ __asm { MOV DX,0x3552 }
    /* +0xe9b416 */ __asm { MOV R9D,R14D }
    /* +0xe9b419 */ __asm { OR R9D,0x1 }
    /* +0xe9b41d */ __asm { IMUL EDX,R9D }
    /* +0xe9b421 */ __asm { ADD EDX,0x279a }
    /* +0xe9b427 */ __asm { MOVZX EDX,DX }
    /* +0xe9b42a */ __asm { CMP dword ptr [RCX + -0x27dd3bc4],EDX }
    /* +0xe9b430 */ __asm { JA 0x7fffa560bfdc }
    /* +0xe9b436 */ __asm { MOV R9,R14 }
    /* +0xe9b439 */ __asm { OR R9,0x1 }
    /* +0xe9b43d */ __asm { MOV RDX,0x6269262898bea564 }
    /* +0xe9b447 */ __asm { IMUL RDX,R9 }
    /* +0xe9b44b */ __asm { ROL RDX,0x15 }
    /* +0xe9b44f */ __asm { LEA RCX,[0x7fffa47ba5aa] }
    /* +0xe9b456 */ __asm { CMP RCX,RDX }
    /* +0xe9b459 */ __asm { NOP }
    /* +0xe9b45a */ __asm { NOP }
    /* +0xe9b45b */ __asm { NOP }
    /* +0xe9b45c */ __asm { NOP }
    /* +0xe9b45d */ __asm { NOP }
    /* +0xe9b45e */ __asm { NOP }
    /* +0xe9b45f */ __asm { MOV DX,0x76e3 }
    /* +0xe9b463 */ __asm { MOV R9D,0x76e1 }
    /* +0xe9b469 */ __asm { SUB R9D,EDX }
    /* +0xe9b46c */ __asm { NOP }
    /* +0xe9b46d */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xe9b474 */ __asm { MOV RDX,0x0 }
    /* +0xe9b47b */ __asm { MOVSX R10,R9W }
    /* +0xe9b47f */ __asm { MOV qword ptr [RSP + 0x530],RDX }
    /* +0xe9b487 */ __asm { MOV EAX,dword ptr [RCX + 0x2a6e] }
    /* +0xe9b48d */ __asm { JMP 0x7fffa560c38f }
    /* +0xe9b492 */ __asm { CMP R9D,0x3 }
    /* +0xe9b496 */ __asm { JNZ 0x7fffa560bd63 }
    /* +0xe9b49c */ __asm { RDTSC }
    /* +0xe9b49e */ __asm { SHL RDX,0x20 }
    /* +0xe9b4a2 */ __asm { OR RDX,RAX }
    /* +0xe9b4a5 */ __asm { MOV R11,-0x5b596a0ee0e87373 }
    /* +0xe9b4af */ __asm { IMUL R11,RDX }
    /* +0xe9b4b3 */ __asm { MOV R10,0x30d18090cd147352 }
    /* +0xe9b4bd */ __asm { ADD R10,R11 }
    /* +0xe9b4c0 */ __asm { MOV R9,R10 }
    /* +0xe9b4c3 */ __asm { SHR R9,0x1b }
    /* +0xe9b4c7 */ __asm { MOV RCX,R10 }
    /* +0xe9b4ca */ __asm { SHR RCX,0x3b }
    /* +0xe9b4ce */ __asm { SHR R10,0x2d }
    /* +0xe9b4d2 */ __asm { XOR R9D,R10D }
    /* +0xe9b4d5 */ __asm { ROR R9D,CL }
    /* +0xe9b4d8 */ __asm { MOV dword ptr [RSP + 0x530],0xfd4fa51b }
    /* +0xe9b4e3 */ __asm { MOV ECX,dword ptr [RSP + 0x530] }
    /* +0xe9b4ea */ __asm { CMP ECX,0xf7736884 }
    /* +0xe9b4f0 */ __asm { JBE 0x7fffa560cd28 }
    /* +0xe9b4f6 */ __asm { CMP R9D,0x4275c6 }
    /* +0xe9b4fd */ __asm { JA 0x7fffa560b707 }
    /* +0xe9b503 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xe9b50a */ __asm { MOV RCX,0x0 }
    /* +0xe9b511 */ __asm { MOV CX,0xf47f }
    /* +0xe9b515 */ __asm { SUB ECX,R14D }
    /* +0xe9b518 */ __asm { ADD ECX,0x5ac2 }
    /* +0xe9b51e */ __asm { MOVZX R9D,CX }
    /* +0xe9b522 */ __asm { MOV ECX,0x37e42f0f }
    /* +0xe9b527 */ __asm { MOV EDX,0x950 }
    /* +0xe9b52c */ __asm { ADD RDX,qword ptr GS:[R9] }
    /* +0xe9b530 */ __asm { MOV R9D,R14D }
    /* +0xe9b533 */ __asm { OR R9D,0x1 }
    /* +0xe9b537 */ __asm { IMUL R9D,ECX }
    /* +0xe9b53b */ __asm { ROL R9D,0x17 }
    /* +0xe9b53f */ __asm { OR RDX,qword ptr [R9] }
    /* +0xe9b542 */ __asm { MOV R11,-0x3890d62544a1b459 }
    /* +0xe9b54c */ __asm { CMP RDX,R11 }
    /* +0xe9b54f */ __asm { NOP }
    /* +0xe9b550 */ __asm { NOP }
    /* +0xe9b551 */ __asm { NOP }
    /* +0xe9b552 */ __asm { NOP }
    /* +0xe9b553 */ __asm { NOP }
    /* +0xe9b554 */ __asm { MOV ECX,0xdcd686ff }
    /* +0xe9b559 */ __asm { MOV RDX,0x5f094bd599fed8e1 }
    /* +0xe9b563 */ __asm { CMP RCX,RDX }
    /* +0xe9b566 */ __asm { NOP }
    /* +0xe9b567 */ __asm { NOP }
    /* +0xe9b568 */ __asm { NOP }
    /* +0xe9b569 */ __asm { NOP }
    /* +0xe9b56a */ __asm { NOP }
    /* +0xe9b56b */ __asm { NOP }
    /* +0xe9b56c */ __asm { NOP }
    /* +0xe9b56d */ __asm { NOP }
    /* +0xe9b56e */ __asm { MOV R11,qword ptr [RCX + -0x5cd886f7] }
    /* +0xe9b575 */ __asm { MOV RDX,-0x6065a55bc8b5255e }
    /* +0xe9b57f */ __asm { MOV RAX,R11 }
    /* +0xe9b582 */ __asm { MUL RDX }
    /* +0xe9b585 */ __asm { MOV R10,RDX }
    /* +0xe9b588 */ __asm { MOV EDX,0x1467849 }
    /* +0xe9b58d */ __asm { MOV RAX,R11 }
    /* +0xe9b590 */ __asm { MUL RDX }
    /* +0xe9b593 */ __asm { ADD RAX,R10 }
    /* +0xe9b596 */ __asm { ADC RDX,0x0 }
    /* +0xe9b59a */ __asm { TEST DL,0x1 }
    /* +0xe9b59d */ __asm { JZ 0x7fffa560b707 }
    /* +0xe9b5a3 */ __asm { MOV CX,0x7f01 }
    /* +0xe9b5a7 */ __asm { PXOR XMM1,XMM1 }
    /* +0xe9b5ab */ __asm { MOVDQA xmmword ptr [RSP + 0x530],XMM1 }
    /* +0xe9b5b4 */ __asm { ADD ECX,0xffffd070 }
    /* +0xe9b5ba */ __asm { XOR ECX,R14D }
    /* +0xe9b5bd */ __asm { MOVZX R9D,CX }
    /* +0xe9b5c1 */ __asm { MOV RDX,qword ptr GS:[R9] }
    /* +0xe9b5c5 */ __asm { MOV R11,-0x50dc6fb76fbf3467 }
    /* +0xe9b5cf */ __asm { CMP qword ptr [RDX + 0x30],R11 }
    /* +0xe9b5d3 */ __asm { JZ 0x7fffa560ccda }
    /* +0xe9b5d9 */ __asm { MOV CX,0x4f1d }
    /* +0xe9b5dd */ __asm { SUB ECX,R14D }
    /* +0xe9b5e0 */ __asm { ROL CX,0x3 }
    /* +0xe9b5e4 */ __asm { MOVZX R9D,CX }
    /* +0xe9b5e8 */ __asm { MOV RCX,0x0 }
    /* +0xe9b5ef */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xe9b5f6 */ __asm { MOV dword ptr [RSP + 0x530],0x0 }
    /* +0xe9b601 */ __asm { MOV RDX,qword ptr GS:[R9] }
    /* +0xe9b605 */ __asm { MOV R11,0xf47c3a7047c1510 }
    /* +0xe9b60f */ __asm { XOR R11,R14 }
    /* +0xe9b612 */ __asm { MOV R10,0x2eaacd20d332827d }
    /* +0xe9b61c */ __asm { IMUL R10,qword ptr [RDX + 0x310] }
    /* +0xe9b624 */ __asm { ADD R11,-0x90d33b0 }
    /* +0xe9b62b */ __asm { ADD R10,-0x34d30f52 }
    /* +0xe9b632 */ __asm { CMP R11,R10 }
    /* +0xe9b635 */ __asm { NOP }
    /* +0xe9b636 */ __asm { NOP }
    /* +0xe9b637 */ __asm { NOP }
    /* +0xe9b638 */ __asm { NOP }
    /* +0xe9b639 */ __asm { NOP }
    /* +0xe9b63a */ __asm { MOV RCX,0x0 }
    /* +0xe9b641 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xe9b648 */ __asm { MOV R9D,R14D }
    /* +0xe9b64b */ __asm { OR R9D,0x1 }
    /* +0xe9b64f */ __asm { MOV CX,0x20df }
    /* +0xe9b653 */ __asm { IMUL ECX,R9D }
    /* +0xe9b657 */ __asm { NOT ECX }
    /* +0xe9b659 */ __asm { MOVZX R10D,CX }
    /* +0xe9b65d */ __asm { MOV RDX,qword ptr GS:[R10] }
    /* +0xe9b661 */ __asm { MOV RDX,qword ptr [RDX + 0x60] }
    /* +0xe9b665 */ __asm { MOV RCX,-0x211bc9550aee7d7b }
    /* +0xe9b66f */ __asm { MOV R11D,0x8b00f80d }
    /* +0xe9b675 */ __asm { ADD R11,RCX }
    /* +0xe9b678 */ __asm { ADD R11,RDX }
    /* +0xe9b67b */ __asm { ROL R11,0x32 }
    /* +0xe9b67f */ __asm { XOR R11,0x1e016bc8 }
    /* +0xe9b686 */ __asm { MOV RDX,0xfaacfe07461cb8a }
    /* +0xe9b690 */ __asm { CMP R11,RDX }
    /* +0xe9b693 */ __asm { NOP }
    /* +0xe9b694 */ __asm { NOP }
    /* +0xe9b695 */ __asm { NOP }
    /* +0xe9b696 */ __asm { NOP }
    /* +0xe9b697 */ __asm { NOP }
    /* +0xe9b698 */ __asm { LEA R11,[0x7fffa47c48db] }
    /* +0xe9b69f */ __asm { MOV RDX,-0x587b5bdefe0fcd83 }
    /* +0xe9b6a9 */ __asm { CMP R11,RDX }
    /* +0xe9b6ac */ __asm { JZ 0x7fffa560cd6b }
    /* +0xe9b6b2 */ __asm { MOV CX,0xef15 }
    /* +0xe9b6b6 */ __asm { IMUL EDX,ECX,0x26c5 }
    /* +0xe9b6bc */ __asm { MOV qword ptr [RSP + 0x58],RCX }
    /* +0xe9b6c1 */ __asm { ADD EDX,0xffffe727 }
    /* +0xe9b6c7 */ __asm { MOV ECX,R14D }
    /* +0xe9b6ca */ __asm { ROR DX,CL }
    /* +0xe9b6cd */ __asm { MOVZX EDX,DX }
    /* +0xe9b6d0 */ __asm { XOR ECX,ECX }
    /* +0xe9b6d2 */ __asm { IMUL R9D,ECX }
    /* +0xe9b6d6 */ __asm { MOV CX,0x8b07 }
    /* +0xe9b6da */ __asm { IMUL EAX,ECX,-0x18b3 }
    /* +0xe9b6e0 */ __asm { ADD EAX,0xffffde05 }
    /* +0xe9b6e5 */ __asm { MOV ECX,R14D }
    /* +0xe9b6e8 */ __asm { ROR AX,CL }
    /* +0xe9b6eb */ __asm { NOT R9D }
    /* +0xe9b6ee */ __asm { MOVSX R10,R9W }
    /* +0xe9b6f2 */ __asm { MOVZX R9D,AX }
    /* +0xe9b6f6 */ __asm { MOV EAX,dword ptr [R11 + -0x7903] }
    /* +0xe9b6fd */ __asm { LEA R8,[RSP + 0x530] }
    /* +0xe9b705 */ __asm { SYSCALL }
    /* +0xe9b707 */ __asm { LEA RDX,[0x7fffa478a801] }
    /* +0xe9b70e */ __asm { MOV R11,0x61b935dc8d0821bf }
    /* +0xe9b718 */ __asm { XOR R11,-0xcbf72ad }
    /* +0xe9b71f */ __asm { MOV ECX,R14D }
    /* +0xe9b722 */ __asm { ROR R11,CL }
    /* +0xe9b725 */ __asm { CMP RDX,R11 }
    /* +0xe9b728 */ __asm { NOP }
    /* +0xe9b729 */ __asm { NOP }
    /* +0xe9b72a */ __asm { NOP }
    /* +0xe9b72b */ __asm { NOP }
    /* +0xe9b72c */ __asm { NOP }
    /* +0xe9b72d */ __asm { MOV R9W,0x9d7f }
    /* +0xe9b732 */ __asm { XOR R9D,R14D }
    /* +0xe9b735 */ __asm { MOV qword ptr [RSP + 0x530],RCX }
    /* +0xe9b73d */ __asm { ADD R9D,0x2d90 }
    /* +0xe9b744 */ __asm { MOVSX R10,R9W }
    /* +0xe9b748 */ __asm { MOV EAX,dword ptr [RDX + -0x6231] }
    /* +0xe9b74e */ __asm { JMP 0x7fffa560c38f }
    /* +0xe9b753 */ __asm { MOV qword ptr [RSP + 0x48],R13 }
    /* +0xe9b758 */ __asm { MOV R9D,0xf876fa5c }
    /* +0xe9b75e */ __asm { MOV EDX,0x79fea56c }
    /* +0xe9b763 */ __asm { MOV ECX,0xc7b3f148 }
    /* +0xe9b768 */ __asm { MOV dword ptr [RSP + 0x544],ECX }
    /* +0xe9b76f */ __asm { MOV ECX,0xe6506bea }
    /* +0xe9b774 */ __asm { MOV EAX,0xa2d467c2 }
    /* +0xe9b779 */ __asm { MOV R10D,0xf8e55124 }
    /* +0xe9b77f */ __asm { MOV R13,R14 }
    /* +0xe9b782 */ __asm { ADD R10D,0x1ddb95f0 }
    /* +0xe9b789 */ __asm { MOV ESI,0x9753c9d4 }
    /* +0xe9b78e */ __asm { MOV R11,R14 }
    /* +0xe9b791 */ __asm { MOV R14,RSI }
    /* +0xe9b794 */ __asm { OR R14,-0x917ac42 }
    /* +0xe9b79b */ __asm { MOV R8,RSI }
    /* +0xe9b79e */ __asm { XOR R8,0x917ac41 }
    /* +0xe9b7a5 */ __asm { MOVQ XMM1,R14 }
    /* +0xe9b7aa */ __asm { MOV R12,RSI }
    /* +0xe9b7ad */ __asm { AND R12,-0x917ac42 }
    /* +0xe9b7b4 */ __asm { MOV RBX,RSI }
    /* +0xe9b7b7 */ __asm { XOR RBX,-0x917ac42 }
    /* +0xe9b7be */ __asm { MOV RBP,0xfffffff6e853be }
    /* +0xe9b7c8 */ __asm { XOR RBP,R12 }
    /* +0xe9b7cb */ __asm { MOV RDI,R13 }
    /* +0xe9b7ce */ __asm { NOT RDI }
    /* +0xe9b7d1 */ __asm { AND RBX,RDI }
    /* +0xe9b7d4 */ __asm { MOV R15D,0x9f027309 }
    /* +0xe9b7da */ __asm { IMUL R15,RBX }
    /* +0xe9b7de */ __asm { MOV qword ptr [RSP + 0x50],R15 }
    /* +0xe9b7e3 */ __asm { MOV RBX,R12 }
    /* +0xe9b7e6 */ __asm { OR RBX,R13 }
    /* +0xe9b7e9 */ __asm { AND R14,R13 }
    /* +0xe9b7ec */ __asm { IMUL R14,R14,-0x6faa2f85 }
    /* +0xe9b7f3 */ __asm { IMUL RBX,RBX,-0xfd596f4 }
    /* +0xe9b7fa */ __asm { ADD RBX,R14 }
    /* +0xe9b7fd */ __asm { MOV R14,R13 }
    /* +0xe9b800 */ __asm { XOR R14,R8 }
    /* +0xe9b803 */ __asm { AND R12,RDI }
    /* +0xe9b806 */ __asm { ADD R12,R14 }
    /* +0xe9b809 */ __asm { MOV R15D,0xee95bd23 }
    /* +0xe9b80f */ __asm { IMUL R14D,R15D,0x3e61aa81 }
    /* +0xe9b816 */ __asm { IMUL ECX,ECX,-0x337d3b09 }
    /* +0xe9b81c */ __asm { IMUL R15,R12,0x576c04ff }
    /* +0xe9b823 */ __asm { ADD R15,RBX }
    /* +0xe9b826 */ __asm { MOV EBX,0x4121272b }
    /* +0xe9b82b */ __asm { XOR R9D,0x677224d6 }
    /* +0xe9b832 */ __asm { NOT ECX }
    /* +0xe9b834 */ __asm { MOVSXD R12,ECX }
    /* +0xe9b837 */ __asm { MOV ECX,R11D }
    /* +0xe9b83a */ __asm { ROR R10D,CL }
    /* +0xe9b83d */ __asm { SUB R14D,R11D }
    /* +0xe9b840 */ __asm { ADD R9D,R11D }
    /* +0xe9b843 */ __asm { MOV ECX,R11D }
    /* +0xe9b846 */ __asm { OR ECX,0x1 }
    /* +0xe9b849 */ __asm { ADD EAX,R11D }
    /* +0xe9b84c */ __asm { ROL R9D,0xe }
    /* +0xe9b850 */ __asm { IMUL EBX,ECX }
    /* +0xe9b853 */ __asm { ADD EBX,0x25267027 }
    /* +0xe9b859 */ __asm { ROL EBX,0x15 }
    /* +0xe9b85c */ __asm { CMP RBX,R14 }
    /* +0xe9b85f */ __asm { MOV R14,R11 }
    /* +0xe9b862 */ __asm { CMOVLE RBP,R8 }
    /* +0xe9b866 */ __asm { MOVQ XMM0,R13 }
    /* +0xe9b86b */ __asm { OR RBP,RDI }
    /* +0xe9b86e */ __asm { IMUL R8,RBP,-0x576c0500 }
    /* +0xe9b875 */ __asm { SUB EDX,R14D }
    /* +0xe9b878 */ __asm { ROL EDX,0x1c }
    /* +0xe9b87b */ __asm { ADD R8,R15 }
    /* +0xe9b87e */ __asm { ROL EAX,0x13 }
    /* +0xe9b881 */ __asm { ADD EAX,0xf4309e11 }
    /* +0xe9b886 */ __asm { IMUL ECX,dword ptr [RSP + 0x544] }
    /* +0xe9b88e */ __asm { ROL ECX,0x19 }
    /* +0xe9b891 */ __asm { OR R13D,ESI }
    /* +0xe9b894 */ __asm { AND R13D,0x917ac41 }
    /* +0xe9b89b */ __asm { XOR R13,0x917ac41 }
    /* +0xe9b8a2 */ __asm { IMUL RBP,R13,-0x2813c17a }
    /* +0xe9b8a9 */ __asm { MOV R15D,ESI }
    /* +0xe9b8ac */ __asm { AND R15D,0x917ac41 }
    /* +0xe9b8b3 */ __asm { MOV R13D,R15D }
    /* +0xe9b8b6 */ __asm { AND R13D,EDI }
    /* +0xe9b8b9 */ __asm { OR RDI,R15 }
    /* +0xe9b8bc */ __asm { PXOR XMM0,XMM1 }
    /* +0xe9b8c0 */ __asm { MOVQ RBX,XMM0 }
    /* +0xe9b8c5 */ __asm { IMUL RBX,RBX,-0x6faa2f85 }
    /* +0xe9b8cc */ __asm { CMP RAX,R12 }
    /* +0xe9b8cf */ __asm { MOVSXD RDX,EDX }
    /* +0xe9b8d2 */ __asm { MOVQ XMM1,RDX }
    /* +0xe9b8d7 */ __asm { MOVQ XMM4,RDI }
    /* +0xe9b8dc */ __asm { MOVSXD RDX,ECX }
    /* +0xe9b8df */ __asm { MOVQ XMM5,RDX }
    /* +0xe9b8e4 */ __asm { PXOR XMM5,XMM0 }
    /* +0xe9b8e8 */ __asm { MOVQ RDX,XMM5 }
    /* +0xe9b8ed */ __asm { CMOVGE RDX,RBX }
    /* +0xe9b8f1 */ __asm { PADDQ XMM1,xmmword ptr [0x7fffa56bc5f0] }
    /* +0xe9b8f9 */ __asm { MOVDQA XMM0,XMM4 }
    /* +0xe9b8fd */ __asm { PSRLQ XMM0,0x20 }
    /* +0xe9b902 */ __asm { PMULUDQ XMM0,XMM1 }
    /* +0xe9b906 */ __asm { MOVDQA XMM5,XMM1 }
    /* +0xe9b90a */ __asm { PSRLQ XMM5,0x20 }
    /* +0xe9b90f */ __asm { PMULUDQ XMM5,XMM4 }
    /* +0xe9b913 */ __asm { PADDQ XMM5,XMM0 }
    /* +0xe9b917 */ __asm { PSLLQ XMM5,0x20 }
    /* +0xe9b91c */ __asm { PMULUDQ XMM1,XMM4 }
    /* +0xe9b920 */ __asm { PADDQ XMM1,XMM5 }
    /* +0xe9b924 */ __asm { ADD RDX,R8 }
    /* +0xe9b927 */ __asm { MOVQ R8,XMM1 }
    /* +0xe9b92c */ __asm { ADD RDX,R8 }
    /* +0xe9b92f */ __asm { MOV R11,qword ptr [RSP + 0x50] }
    /* +0xe9b934 */ __asm { MOV R8,R11 }
    /* +0xe9b937 */ __asm { AND R8,RDX }
    /* +0xe9b93a */ __asm { ADD RDX,R11 }
    /* +0xe9b93d */ __asm { CMP R10,R9 }
    /* +0xe9b940 */ __asm { CMOVBE RDX,R8 }
    /* +0xe9b944 */ __asm { LEA R11,[R13*0x2] }
    /* +0xe9b94c */ __asm { ADD R11,RBP }
    /* +0xe9b94f */ __asm { ADD RDX,R11 }
    /* +0xe9b952 */ __asm { MOV R11,-0x465c2302e5857a85 }
    /* +0xe9b95c */ __asm { IMUL R11,RDX }
    /* +0xe9b960 */ __asm { MOV RDX,0x5b8719041570c484 }
    /* +0xe9b96a */ __asm { CMP R11,RDX }
    /* +0xe9b96d */ __asm { NOP }
    /* +0xe9b96e */ __asm { NOP }
    /* +0xe9b96f */ __asm { NOP }
    /* +0xe9b970 */ __asm { MOV EAX,0x30a97f63 }
    /* +0xe9b975 */ __asm { LEA RDX,[RSI + -0x1755c9d4] }
    /* +0xe9b97c */ __asm { MOV R9D,0x99821504 }
    /* +0xe9b982 */ __asm { SUB EAX,R14D }
    /* +0xe9b985 */ __asm { MOV R10D,0x772ecca }
    /* +0xe9b98b */ __asm { XOR R10D,R14D }
    /* +0xe9b98e */ __asm { XOR R9D,0x58e73726 }
    /* +0xe9b995 */ __asm { MOV ECX,R14D }
    /* +0xe9b998 */ __asm { ROR R9D,CL }
    /* +0xe9b99b */ __asm { ADD R9D,0x22d18209 }
    /* +0xe9b9a2 */ __asm { IMUL EAX,EAX,-0x37ca24e9 }
    /* +0xe9b9a8 */ __asm { MOVSXD R11,R9D }
    /* +0xe9b9ab */ __asm { ADD R10D,0x7dc79251 }
    /* +0xe9b9b2 */ __asm { MOVSXD R10,R10D }
    /* +0xe9b9b5 */ __asm { IMUL R10,RSI }
    /* +0xe9b9b9 */ __asm { CMP RAX,R11 }
    /* +0xe9b9bc */ __asm { CMOVG R10,RDX }
    /* +0xe9b9c0 */ __asm { MOV R9D,dword ptr [R10 + 0x2c4] }
    /* +0xe9b9c7 */ __asm { MOV R11,0x5555555555555556 }
    /* +0xe9b9d1 */ __asm { IMUL R9,R11 }
    /* +0xe9b9d5 */ __asm { MOV RDX,0x5555555555555555 }
    /* +0xe9b9df */ __asm { CMP R9,RDX }
    /* +0xe9b9e2 */ __asm { JA 0x7fffa560c1e8 }
    /* +0xe9b9e8 */ __asm { MOV R9D,0x1ad3b740 }
    /* +0xe9b9ee */ __asm { ADD R9D,R14D }
    /* +0xe9b9f1 */ __asm { XOR R9D,0xfe5b040 }
    /* +0xe9b9f8 */ __asm { RDTSC }
    /* +0xe9b9fa */ __asm { SHL RDX,0x20 }
    /* +0xe9b9fe */ __asm { OR RDX,RAX }
    /* +0xe9ba01 */ __asm { MOV RAX,-0x5a46117eacb056b3 }
    /* +0xe9ba0b */ __asm { IMUL RAX,RDX }
    /* +0xe9ba0f */ __asm { LEA EDX,[RAX + -0x6a447839] }
    /* +0xe9ba15 */ __asm { MOV R8D,0x8a05b90c }
    /* +0xe9ba1b */ __asm { XOR R8D,0xa6eb4158 }
    /* +0xe9ba22 */ __asm { ADD R8D,0x520935cc }
    /* +0xe9ba29 */ __asm { XOR R8D,R14D }
    /* +0xe9ba2c */ __asm { MOV R10,0x1d72cac795bb879a }
    /* +0xe9ba36 */ __asm { ADD R10,RAX }
    /* +0xe9ba39 */ __asm { MOV RAX,R10 }
    /* +0xe9ba3c */ __asm { SHR RAX,0x2d }
    /* +0xe9ba40 */ __asm { MOV RCX,R10 }
    /* +0xe9ba43 */ __asm { SHR RCX,0x3b }
    /* +0xe9ba47 */ __asm { SHR R10,0x1b }
    /* +0xe9ba4b */ __asm { CMP R8,R9 }
    /* +0xe9ba4e */ __asm { CMOVA EAX,EDX }
    /* +0xe9ba51 */ __asm { XOR R10D,EAX }
    /* +0xe9ba54 */ __asm { ROR R10D,CL }
    /* +0xe9ba57 */ __asm { MOV dword ptr [RSP + 0x530],0xe9d5eb63 }
    /* +0xe9ba62 */ __asm { MOV ECX,dword ptr [RSP + 0x530] }
    /* +0xe9ba69 */ __asm { CMP ECX,0x5c45fb92 }
    /* +0xe9ba6f */ __asm { JA 0x7fffa560ba76 }
    /* +0xe9ba71 */ __asm { XCHG EAX,EBP }
    /* +0xe9ba72 */ __asm { JG 0x7fffa560ba1e }
    /* +0xe9ba74 */ __asm { AND AL,0xe6 }
    /* +0xe9ba76 */ __asm { CMP R10D,0x431b06a }
    /* +0xe9ba7d */ __asm { MOV RBP,-0x30ebf64fafbc6efb }
    /* +0xe9ba87 */ __asm { MOV RBX,-0x22b18422c4a9c65e }
    /* +0xe9ba91 */ __asm { MOV R13,qword ptr [RSP + 0x48] }
    /* +0xe9ba96 */ __asm { JA 0x7fffa560bc91 }
    /* +0xe9ba9c */ __asm { MOV dword ptr [RSP + 0x530],0xdf194869 }
    /* +0xe9baa7 */ __asm { MOV ECX,dword ptr [RSP + 0x530] }
    /* +0xe9baae */ __asm { CMP ECX,0x70cf7725 }
    /* +0xe9bab4 */ __asm { JBE 0x7fffa560cd7d }
    /* +0xe9baba */ __asm { MOV R9D,0x1e4d064e }
    /* +0xe9bac0 */ __asm { MOV ECX,0xd9587118 }
    /* +0xe9bac5 */ __asm { ADD R9D,R14D }
    /* +0xe9bac8 */ __asm { ROL R9D,0x3 }
    /* +0xe9bacc */ __asm { IMUL R10D,ECX,0x2b42e953 }
    /* +0xe9bad3 */ __asm { PUSHFQ }
    /* +0xe9bad4 */ __asm { POP R8 }
    /* +0xe9bad6 */ __asm { MOV EAX,R8D }
    /* +0xe9bad9 */ __asm { AND EAX,0x100 }
    /* +0xe9bade */ __asm { ADD R8,-0x100 }
    /* +0xe9bae5 */ __asm { SUB R10D,R14D }
    /* +0xe9bae8 */ __asm { ADD R10D,0xa5af7745 }
    /* +0xe9baef */ __asm { CMP R10,R9 }
    /* +0xe9baf2 */ __asm { CMOVZ R8,RAX }
    /* +0xe9baf6 */ __asm { TEST R8,R8 }
    /* +0xe9baf9 */ __asm { JZ 0x7fffa560bafd }
    /* +0xe9bafb */ __asm { ADD AL,0x24 }
    /* +0xe9bafd */ __asm { MOV EDX,0x108415c0 }
    /* +0xe9bb02 */ __asm { MOV RCX,RDX }
    /* +0xe9bb05 */ __asm { ROL RCX,0x17 }
    /* +0xe9bb09 */ __asm { MOV RAX,-0x6ebe886f7a54f52c }
    /* +0xe9bb13 */ __asm { LEA R10,[R14 + RAX*0x1] }
    /* +0xe9bb17 */ __asm { ADD R10,-0x67ffa217 }
    /* +0xe9bb1e */ __asm { XOR RCX,0x104fdd59 }
    /* +0xe9bb25 */ __asm { XOR RCX,R10 }
    /* +0xe9bb28 */ __asm { NOP }
    /* +0xe9bb29 */ __asm { MOV RAX,0x0 }
    /* +0xe9bb30 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xe9bb37 */ __asm { MOV R10D,0xf4e4f36e }
    /* +0xe9bb3d */ __asm { CMP RCX,R10 }
    /* +0xe9bb40 */ __asm { JZ 0x7fffa560cd85 }
    /* +0xe9bb46 */ __asm { MOV R10,-0x555555360a8ff11f }
    /* +0xe9bb50 */ __asm { MOV R9D,0xb53a9bc9 }
    /* +0xe9bb56 */ __asm { ADD R9,R10 }
    /* +0xe9bb59 */ __asm { MOV ECX,R14D }
    /* +0xe9bb5c */ __asm { ROR R9,CL }
    /* +0xe9bb5f */ __asm { MOV R10D,dword ptr [RDX + 0x6f79ed04] }
    /* +0xe9bb66 */ __asm { IMUL R10,R11 }
    /* +0xe9bb6a */ __asm { ROL R9,0x2c }
    /* +0xe9bb6e */ __asm { CMP R10,R9 }
    /* +0xe9bb71 */ __asm { JNC 0x7fffa560bc91 }
    /* +0xe9bb77 */ __asm { PXOR XMM1,XMM1 }
    /* +0xe9bb7b */ __asm { MOVDQA xmmword ptr [RSP + 0x530],XMM1 }
    /* +0xe9bb84 */ __asm { MOV dword ptr [RSP + 0x58],0xc8069f03 }
    /* +0xe9bb8c */ __asm { MOV ECX,dword ptr [RSP + 0x58] }
    /* +0xe9bb90 */ __asm { MOV dword ptr [RSP + 0x530],0x0 }
    /* +0xe9bb9b */ __asm { MOV dword ptr [RSP + 0x58],0x6d717aa0 }
    /* +0xe9bba3 */ __asm { MOV ECX,dword ptr [RSP + 0x58] }
    /* +0xe9bba7 */ __asm { CMP ECX,0x586f7da3 }
    /* +0xe9bbad */ __asm { NOP }
    /* +0xe9bbae */ __asm { NOP }
    /* +0xe9bbaf */ __asm { NOP }
    /* +0xe9bbb0 */ __asm { NOP }
    /* +0xe9bbb1 */ __asm { NOP }
    /* +0xe9bbb2 */ __asm { TEST R8,R8 }
    /* +0xe9bbb5 */ __asm { NOP }
    /* +0xe9bbb6 */ __asm { NOP }
    /* +0xe9bbb7 */ __asm { NOP }
    /* +0xe9bbb8 */ __asm { NOP }
    /* +0xe9bbb9 */ __asm { NOP }
    /* +0xe9bbba */ __asm { NOP }
    /* +0xe9bbbb */ __asm { NOP }
    /* +0xe9bbbc */ __asm { NOP }
    /* +0xe9bbbd */ __asm { MOV dword ptr [RSP + 0x58],0x58ab5e82 }
    /* +0xe9bbc5 */ __asm { MOV ECX,dword ptr [RSP + 0x58] }
    /* +0xe9bbc9 */ __asm { CMP ECX,0xa2d2aa43 }
    /* +0xe9bbcf */ __asm { NOP }
    /* +0xe9bbd0 */ __asm { NOP }
    /* +0xe9bbd1 */ __asm { NOP }
    /* +0xe9bbd2 */ __asm { NOP }
    /* +0xe9bbd3 */ __asm { NOP }
    /* +0xe9bbd4 */ __asm { MOV ECX,0x5dd9dcc1 }
    /* +0xe9bbd9 */ __asm { LEA RDX,[0x7fffa478ac19] }
    /* +0xe9bbe0 */ __asm { IMUL ECX,ECX,0x4c299415 }
    /* +0xe9bbe6 */ __asm { SUB ECX,R14D }
    /* +0xe9bbe9 */ __asm { MOVSXD R11,ECX }
    /* +0xe9bbec */ __asm { MOV RCX,RDX }
}


// ============================================================================
// Function : FUN_7fffa560ce20  |  RVA: 0xe9ce20  |  Size: 3596 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int64_t FUN_7fffa560ce20(uint64_t *param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4,
                         int64_t param_5)

{
  char *pcVar1;
  int64_t *plVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint32_t uVar6;
  int iVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint8_t bVar11;
  uint32_t uVar12;
  int64_t lVar13;
  uint64_t *puVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint32_t uVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  uint64_t uVar20;
  int64_t lVar21;
  uint64_t *puVar22;
  uint8_t *pbVar23;
  uint32_t uVar24;
  uint32_t uVar25;
  uint64_t in_R10;
  int64_t lVar26;
  uint32_t uVar27;
  uint64_t *in_R11;
  uint64_t uVar28;
  uint64_t uVar29;
  uint64_t *puVar30;
  uint32_t uVar31;
  int64_t lVar32;
  int64_t lVar33;
  uint32_t uVar34;
  uint64_t *puVar35;
  int iVar36;
  uint64_t uVar37;
  uint32_t uVar38;
  uint64_t uVar39;
  uint64_t *puVar40;
  uint64_t *puVar41;
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  char cVar45;
  uint8_t bVar46;
  uint8_t uVar49;
  char cVar50;
  uint8_t bVar51;
  uint8_t uVar52;
  char cVar53;
  uint8_t bVar54;
  uint8_t uVar55;
  char cVar56;
  uint8_t bVar57;
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  uint8_t auVar58 [16];
  uint8_t auVar59 [16];
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  uint8_t uStack_180;
  uint32_t auStack_178 [66];
  uint64_t *puStack_70;
  int64_t lStack_68;
  uint64_t uStack_60;
  uint64_t *puStack_58;
  uint64_t uStack_50;
  int iStack_44;
  
  puVar19 = (uint64_t *)(in_R10 >> 0x34 ^ in_R10 >> 0x1a ^ in_R10);
  bVar11 = (uint8_t)param_3;
  if (0x7752d707 - param_3 < 0x1df86e0f - param_3) {
    uVar24 = 0x153106b2U >> (bVar11 & 0x1f) | 0x153106b2 << 0x20 - (bVar11 & 0x1f);
  }
  else {
    uVar24 = param_3 + 0x36a613f7;
  }
  uVar18 = *param_1;
  uVar12 = 6;
  if (*(uint32_t *)(param_5 + -0x34b0d0d6) < 6) {
    uVar12 = *(uint32_t *)(param_5 + -0x34b0d0d6);
  }
  iVar36 = 1 << ((uint8_t)uVar12 & 0x1f);
  iStack_44 = *(int *)(param_5 + -0x34b0d1ae);
  uVar25 = 1 << (*(uint8_t *)(param_5 + -0x34b0d0e2) & 0x1f);
  puVar8 = *(uint64_t **)(param_5 + -0x34b0d0ea);
  uVar39 = uVar18 * -0x30e4432340650000 >> (0x38U - *(char *)((int64_t)puVar8 + 0x34) & 0x3f);
  uVar12 = *(uint32_t *)(param_5 + -0x34b0d1ca);
  uVar38 = *(uint32_t *)(param_5 + -0x34b0d1c6);
  lVar13 = *(int64_t *)(param_5 + -0x34b0d1da);
  uStack_60 = (int64_t)param_1 - lVar13;
  uVar34 = (uint32_t)uStack_60;
  uVar31 = uVar34 - uVar25;
  if (uVar34 - uVar38 <= uVar25) {
    uVar31 = uVar38;
  }
  lVar15 = puVar8[7];
  lVar21 = *(int64_t *)(param_5 + -0x34b0d172);
  if (*(int *)(param_5 + -0x34b0d1ba) != 0) {
    uVar31 = uVar38;
  }
  uVar29 = *(uint64_t *)(param_5 + -0x34b0d182);
  lVar16 = *(int64_t *)(param_5 + -0x34b0d1aa);
  lStack_68 = puVar8[0xe];
  uStack_50 = (uint64_t)((uint32_t)(uVar39 >> 2) & 0x3fffffc0);
  puStack_58 = param_1;
  if (*(int *)(param_5 + -0x34b0d0b6) == 0) {
    uVar38 = *(uint32_t *)(param_5 + -0x34b0d1b6);
    uVar18 = (uint64_t)uVar38;
    lVar26 = lVar16;
    lVar33 = lVar21;
    if (0x180 < uVar34 - uVar38) {
      if (uVar38 < 0xffffffa0) {
        puStack_70 = (uint64_t *)(uint64_t)(0x38U - iStack_44);
        uVar10 = uVar18 + 0x60;
        do {
          uVar25 = (uint32_t)uVar18;
          uVar20 = (uint64_t)(uVar25 & 7);
          plVar2 = (int64_t *)(lVar13 + 8 + uVar18);
          uVar18 = uVar18 + 1;
          uVar38 = *(uint32_t *)(param_5 + -0x34b0d1a2 + uVar20 * 4);
          *(int *)(param_5 + -0x34b0d1a2 + uVar20 * 4) =
               (int)((*plVar2 * -0x30e4432340650000 ^ *(uint64_t *)(param_5 + -0x34b0d182)) >>
                    ((uint8_t)(0x38U - iStack_44) & 0x3f));
          uVar20 = (uint64_t)(uVar38 >> 2 & 0xffffffc0);
          bVar46 = *(uint8_t *)(lVar16 + uVar20);
          bVar51 = bVar46 & 0x3f;
          if ((int64_t)(uint64_t)~((uVar24 + 0x65475c7) * (param_3 | 1)) <
              (int64_t)
              (int)(((uVar24 ^ 0x6a8acca1) << 0x10 | (uVar24 ^ 0x6a8acca1) >> 0x10) - param_3)) {
            bVar51 = bVar46 * '?';
          }
          lVar26 = 0x3f;
          if (bVar51 != (uint8_t)((('\x15' - bVar11) * '\x02' | (char)('\x15' - bVar11) < '\0') +
                              (char)uVar24)) {
            lVar26 = 0;
          }
          lVar26 = (uint64_t)(bVar46 - 1 & 0x3f) + lVar26;
          *(char *)(lVar16 + uVar20) = (char)lVar26;
          *(char *)(lVar16 + uVar20 + lVar26) = (char)uVar38;
          *(uint32_t *)(lVar21 + uVar20 * 4 + lVar26 * 4) = uVar25;
        } while (uVar10 != uVar18);
        lVar26 = *(int64_t *)(param_5 + -0x34b0d1aa);
        lVar33 = *(int64_t *)(param_5 + -0x34b0d172);
      }
      uVar38 = uVar34 - 0x20;
      uVar18 = (uint64_t)uVar38;
      uVar27 = ((int)((int64_t)param_1 + 1U) - (int)(lVar13 + uVar18)) + 1;
      uVar25 = 8;
      if (uVar27 < 8) {
        uVar25 = uVar27;
      }
      uVar27 = 0;
      if (lVar13 + uVar18 <= (int64_t)param_1 + 1U) {
        uVar27 = uVar25;
      }
      uVar25 = (uVar27 + uVar34) - 0x20;
      if (uVar38 < uVar25) {
        uVar27 = 0x38 - *(int *)(param_5 + -0x34b0d1ae);
        puStack_70 = (uint64_t *)(uint64_t)uVar27;
        uVar10 = *(uint64_t *)(param_5 + -0x34b0d182);
        do {
          uVar28 = uVar18 | 1;
          uVar37 = *(int64_t *)(lVar13 + uVar18) * -0x30e4432340650000;
          uVar20 = uVar37 - uVar10;
          if ((0xd0bd1993 - uVar24 >> (bVar11 & 0x1f) |
              0xd0bd1993 - uVar24 << 0x20 - (bVar11 & 0x1f)) + 0x2f53a1d2 <=
              (((-0x2ac6ae7 - param_3) * 2 | (uint32_t)((int)(-0x2ac6ae7 - param_3) < 0)) ^ uVar24)) {
            uVar20 = uVar10 ^ uVar37;
          }
          uVar17 = ~((uVar24 | 1) * 0x5b455404) + param_3;
          *(int *)(param_5 + -0x34b0d1a2 + (uint64_t)((uint32_t)uVar18 & 7) * 4) =
               (int)(uVar20 >> ((uint8_t)uVar27 & 0x3f));
          uVar18 = uVar18 + 1;
          if ((int64_t)
              (uint64_t)
              (~(uVar24 ^ 0xca13f0ce) << (bVar11 & 0x1f) |
              ~(uVar24 ^ 0xca13f0ce) >> 0x20 - (bVar11 & 0x1f)) <=
              (int64_t)(int)(uVar17 * 0x10 | uVar17 >> 0x1c)) {
            uVar18 = uVar28;
          }
        } while (uVar25 != (uint32_t)uVar18);
      }
    }
    if ((int64_t)(uint64_t)((param_3 ^ 0x7c8ec5d8) << 0x1b | (param_3 ^ 0x7c8ec5d8) >> 5) <
        (int64_t)(int)(((param_3 | 1) * 0x2c155712 ^ 0x3b2f6679) * (uVar24 | 1)) != uVar38 < uVar34
       ) {
      lVar9 = *(int64_t *)(param_5 + -0x34b0d1da);
      uVar6 = *(uint32_t *)(param_5 + -0x34b0d1ae);
      uVar18 = (uint64_t)uVar38;
      do {
        uVar25 = (uint32_t)uVar18;
        uVar10 = (uint64_t)(uVar25 & 7);
        plVar2 = (int64_t *)(lVar9 + 8 + uVar18);
        uVar18 = uVar18 + 1;
        uVar38 = *(uint32_t *)(param_5 + -0x34b0d1a2 + uVar10 * 4);
        *(int *)(param_5 + -0x34b0d1a2 + uVar10 * 4) =
             (int)((*plVar2 * -0x30e4432340650000 ^ *(uint64_t *)(param_5 + -0x34b0d182)) >>
                  (0x38U - (char)uVar6 & 0x3f));
        uVar10 = (uint64_t)(uVar38 >> 2 & 0xffffffc0);
        lVar32 = 0;
        if ((*(uint8_t *)(lVar26 + uVar10) & 0x3f) == 1) {
          lVar32 = 0x3f;
        }
        lVar32 = (uint64_t)(*(uint8_t *)(lVar26 + uVar10) - 1 & 0x3f) + lVar32;
        *(char *)(lVar26 + uVar10) = (char)lVar32;
        *(char *)(lVar26 + uVar10 + lVar32) = (char)uVar38;
        *(uint32_t *)(lVar33 + uVar10 * 4 + lVar32 * 4) = uVar25;
      } while ((uStack_60 & 0xffffffff) != uVar18);
    }
    *(uint32_t *)(param_5 + -0x34b0d1b6) = uVar34;
    uVar38 = *(uint32_t *)(param_5 + -0x34b0d1a2 + (uint64_t)(uVar34 & 7) * 4);
    *(int *)(param_5 + -0x34b0d1a2 + (uint64_t)(uVar34 & 7) * 4) =
         (int)((uVar29 ^ *(int64_t *)(lVar13 + 8 + (uStack_60 & 0xffffffff)) * -0x30e4432340650000)
              >> (0x38U - (char)iStack_44 & 0x3f));
  }
  else {
    *(uint32_t *)(param_5 + -0x34b0d1b6) = uVar34;
    uVar38 = (uint32_t)((uVar18 * -0x30e4432340650000 ^ uVar29) >> (0x38U - (char)iStack_44 & 0x3f));
  }
  uVar55 = (uint8_t)(uVar38 >> 0x18);
  uVar52 = (uint8_t)(uVar38 >> 0x10);
  uVar49 = (uint8_t)(uVar38 >> 8);
  auVar47._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar55,uVar55),uVar52),CONCAT14(uVar52,uVar38)) >> 0x20);
  auVar47[3] = uVar49;
  auVar47[2] = uVar49;
  auVar47[0] = (uint8_t)uVar38;
  auVar47[1] = auVar47[0];
  auVar47._8_8_ = 0;
  auVar48 = pshuflw(auVar47,auVar47,0);
  *(int *)(param_5 + -0x34b0d17a) = *(int *)(param_5 + -0x34b0d17a) + uVar38;
  uVar29 = (uint64_t)(uVar38 >> 2 & 0xffffffc0);
  lVar21 = lVar21 + uVar29 * 4;
  bVar11 = *(uint8_t *)(lVar16 + uVar29);
  pcVar1 = (char *)(lVar16 + uVar29);
  pcVar3 = (char *)(lVar16 + 0x10 + uVar29);
  pcVar4 = (char *)(lVar16 + 0x20 + uVar29);
  pcVar5 = (char *)(lVar16 + 0x30 + uVar29);
  cVar45 = auVar48[0];
  auVar58[0] = -(*pcVar1 == cVar45);
  cVar50 = auVar48[1];
  auVar58[1] = -(pcVar1[1] == cVar50);
  cVar53 = auVar48[2];
  auVar58[2] = -(pcVar1[2] == cVar53);
  cVar56 = auVar48[3];
  auVar58[3] = -(pcVar1[3] == cVar56);
  auVar58[4] = -(pcVar1[4] == cVar45);
  auVar58[5] = -(pcVar1[5] == cVar50);
  auVar58[6] = -(pcVar1[6] == cVar53);
  auVar58[7] = -(pcVar1[7] == cVar56);
  auVar58[8] = -(pcVar1[8] == cVar45);
  auVar58[9] = -(pcVar1[9] == cVar50);
  auVar58[10] = -(pcVar1[10] == cVar53);
  auVar58[0xb] = -(pcVar1[0xb] == cVar56);
  auVar58[0xc] = -(pcVar1[0xc] == cVar45);
  auVar58[0xd] = -(pcVar1[0xd] == cVar50);
  auVar58[0xe] = -(pcVar1[0xe] == cVar53);
  auVar58[0xf] = -(pcVar1[0xf] == cVar56);
  auVar60[0] = -(*pcVar3 == cVar45);
  auVar60[1] = -(pcVar3[1] == cVar50);
  auVar60[2] = -(pcVar3[2] == cVar53);
  auVar60[3] = -(pcVar3[3] == cVar56);
  auVar60[4] = -(pcVar3[4] == cVar45);
  auVar60[5] = -(pcVar3[5] == cVar50);
  auVar60[6] = -(pcVar3[6] == cVar53);
  auVar60[7] = -(pcVar3[7] == cVar56);
  auVar60[8] = -(pcVar3[8] == cVar45);
  auVar60[9] = -(pcVar3[9] == cVar50);
  auVar60[10] = -(pcVar3[10] == cVar53);
  auVar60[0xb] = -(pcVar3[0xb] == cVar56);
  auVar60[0xc] = -(pcVar3[0xc] == cVar45);
  auVar60[0xd] = -(pcVar3[0xd] == cVar50);
  auVar60[0xe] = -(pcVar3[0xe] == cVar53);
  auVar60[0xf] = -(pcVar3[0xf] == cVar56);
  auVar48[0] = -(*pcVar4 == cVar45);
  auVar48[1] = -(pcVar4[1] == cVar50);
  auVar48[2] = -(pcVar4[2] == cVar53);
  auVar48[3] = -(pcVar4[3] == cVar56);
  auVar48[4] = -(pcVar4[4] == cVar45);
  auVar48[5] = -(pcVar4[5] == cVar50);
  auVar48[6] = -(pcVar4[6] == cVar53);
  auVar48[7] = -(pcVar4[7] == cVar56);
  auVar48[8] = -(pcVar4[8] == cVar45);
  auVar48[9] = -(pcVar4[9] == cVar50);
  auVar48[10] = -(pcVar4[10] == cVar53);
  auVar48[0xb] = -(pcVar4[0xb] == cVar56);
  auVar48[0xc] = -(pcVar4[0xc] == cVar45);
  auVar48[0xd] = -(pcVar4[0xd] == cVar50);
  auVar48[0xe] = -(pcVar4[0xe] == cVar53);
  auVar48[0xf] = -(pcVar4[0xf] == cVar56);
  auVar43[0] = -(*pcVar5 == cVar45);
  auVar43[1] = -(pcVar5[1] == cVar50);
  auVar43[2] = -(pcVar5[2] == cVar53);
  auVar43[3] = -(pcVar5[3] == cVar56);
  auVar43[4] = -(pcVar5[4] == cVar45);
  auVar43[5] = -(pcVar5[5] == cVar50);
  auVar43[6] = -(pcVar5[6] == cVar53);
  auVar43[7] = -(pcVar5[7] == cVar56);
  auVar43[8] = -(pcVar5[8] == cVar45);
  auVar43[9] = -(pcVar5[9] == cVar50);
  auVar43[10] = -(pcVar5[10] == cVar53);
  auVar43[0xb] = -(pcVar5[0xb] == cVar56);
  auVar43[0xc] = -(pcVar5[0xc] == cVar45);
  auVar43[0xd] = -(pcVar5[0xd] == cVar50);
  auVar43[0xe] = -(pcVar5[0xe] == cVar53);
  auVar43[0xf] = -(pcVar5[0xf] == cVar56);
  uVar18 = (uint64_t)
           CONCAT22((uint16_t)(SUB161(auVar43 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar43[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar48 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar48[0xf] >> 7) << 0xf) << 0x20 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar60 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar60[0xf] >> 7) << 0xf) << 0x10 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar58 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar58[0xf] >> 7) << 0xf);
  if (uVar18 != 0) {
    uVar18 = uVar18 >> (bVar11 & 0x3f) | uVar18 << 0x40 - (bVar11 & 0x3f);
    lVar26 = 0;
    do {
      iVar7 = 0;
      for (uVar10 = uVar18; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
        iVar7 = iVar7 + 1;
      }
      uVar38 = iVar7 + (uint32_t)bVar11 & 0x3f;
      if (uVar38 != 0) {
        uVar38 = *(uint32_t *)(lVar21 + (uint64_t)uVar38 * 4);
        if (uVar38 < uVar31) goto LAB_7fffa560d662;
        auStack_178[lVar26] = uVar38;
        lVar26 = lVar26 + 1;
        iVar36 = iVar36 + -1;
      }
      uVar18 = uVar18 & uVar18 - 1;
      if (((uVar18 == (((0x28b6 - uVar24 ^ 0x23cf) - param_3) + 0x2c74 & 0xffff)) ||
          (((uVar24 | 1) * -0x1fe31b08 + param_3) * -0x54c3edc7 != -0x7027b993)) || (iVar36 == 0))
      goto LAB_7fffa560d662;
    } while( true );
  }
  lVar26 = 0;
LAB_7fffa560d662:
  pbVar23 = (uint8_t *)(lVar15 + uStack_50);
  lVar15 = 0;
  if ((bVar11 & 0x3f) == 1) {
    lVar15 = 0x3f;
  }
  lVar15 = lVar15 + (uint64_t)(bVar11 - 1 & 0x3f);
  *(uint8_t *)(lVar16 + uVar29) = (char)lVar15;
  ((uint8_t *)(lVar16 + uVar29))[lVar15] = auVar47[0];
  iVar7 = *(int *)(param_5 + -0x34b0d1b6);
  *(int *)(param_5 + -0x34b0d1b6) = iVar7 + 1;
  *(int *)(lVar21 + lVar15 * 4) = iVar7;
  if (lVar26 == 0) {
    uVar18 = 3;
  }
  else {
    lVar21 = 0;
    uVar29 = 3;
    do {
      puVar35 = (uint64_t *)(lVar13 + (uint64_t)auStack_178[lVar21]);
      if (*(int *)((uVar29 - 3) + (int64_t)puVar35) ==
          *(int *)((int64_t)puStack_58 + (uVar29 - 3))) {
        puVar14 = puStack_58;
        if (puStack_58 < (uint64_t *)((int64_t)puVar19 - 7U)) {
          if (*puVar35 == *puStack_58) {
            lVar15 = 8;
LAB_7fffa560d760:
            puVar14 = (uint64_t *)((int64_t)puStack_58 + lVar15);
            if (puVar14 < (uint64_t *)((int64_t)puVar19 - 7U)) {
              if (*(uint64_t *)((int64_t)puVar35 + lVar15) == *puVar14) goto code_r0x7fffa560d77a;
              uVar24 = 0;
              for (uVar18 = *(uint64_t *)((int64_t)puVar35 + lVar15) ^ *puVar14; (uVar18 & 1) == 0
                  ; uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                uVar24 = uVar24 + 1;
              }
              uVar18 = (uint64_t)(uVar24 >> 3) + lVar15;
              goto LAB_7fffa560d7df;
            }
            puVar35 = (uint64_t *)((int64_t)puVar35 + lVar15);
            goto joined_r0x7fffa560d786;
          }
          uVar24 = 0;
          for (uVar18 = *puStack_58 ^ *puVar35; (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x8000000000000000) {
            uVar24 = uVar24 + 1;
          }
          uVar18 = (uint64_t)(uVar24 >> 3);
        }
        else {
joined_r0x7fffa560d786:
          if ((puVar14 < (uint64_t *)((int64_t)puVar19 - 3U)) && ((int)*puVar35 == (int)*puVar14))
          {
            puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
            puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
          }
          if ((puVar14 < (uint64_t *)((int64_t)puVar19 - 1U)) &&
             ((short)*puVar35 == (short)*puVar14)) {
            puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
            puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
          }
          if (puVar14 < puVar19) {
            puVar14 = (uint64_t *)
                      ((int64_t)puVar14 + (uint64_t)((char)*puVar35 == (char)*puVar14));
          }
          uVar18 = (int64_t)puVar14 - (int64_t)puStack_58;
        }
LAB_7fffa560d7df:
        if (uVar29 < uVar18) {
          *in_R11 = (uint64_t)(((int)uStack_60 + 3) - auStack_178[lVar21]);
          uVar29 = uVar18;
          if ((uint64_t *)((int64_t)puStack_58 + uVar18) == puVar19) break;
        }
      }
      uVar18 = uVar29;
      lVar21 = lVar21 + 1;
      uVar29 = uVar18;
    } while (lVar21 != lVar26);
  }
  uStack_180 = (uint8_t)uVar39;
  auVar48 = pshuflw(ZEXT216(CONCAT11(uStack_180,uStack_180)),
                    ZEXT216(CONCAT11(uStack_180,uStack_180)),0);
  bVar11 = *pbVar23;
  bVar46 = auVar48[0];
  auVar59[0] = -(*pbVar23 == bVar46);
  bVar51 = auVar48[1];
  auVar59[1] = -(pbVar23[1] == bVar51);
  bVar54 = auVar48[2];
  auVar59[2] = -(pbVar23[2] == bVar54);
  bVar57 = auVar48[3];
  auVar59[3] = -(pbVar23[3] == bVar57);
  auVar59[4] = -(pbVar23[4] == bVar46);
  auVar59[5] = -(pbVar23[5] == bVar51);
  auVar59[6] = -(pbVar23[6] == bVar54);
  auVar59[7] = -(pbVar23[7] == bVar57);
  auVar59[8] = -(pbVar23[8] == bVar46);
  auVar59[9] = -(pbVar23[9] == bVar51);
  auVar59[10] = -(pbVar23[10] == bVar54);
  auVar59[0xb] = -(pbVar23[0xb] == bVar57);
  auVar59[0xc] = -(pbVar23[0xc] == bVar46);
  auVar59[0xd] = -(pbVar23[0xd] == bVar51);
  auVar59[0xe] = -(pbVar23[0xe] == bVar54);
  auVar59[0xf] = -(pbVar23[0xf] == bVar57);
  auVar61[0] = -(pbVar23[0x10] == bVar46);
  auVar61[1] = -(pbVar23[0x11] == bVar51);
  auVar61[2] = -(pbVar23[0x12] == bVar54);
  auVar61[3] = -(pbVar23[0x13] == bVar57);
  auVar61[4] = -(pbVar23[0x14] == bVar46);
  auVar61[5] = -(pbVar23[0x15] == bVar51);
  auVar61[6] = -(pbVar23[0x16] == bVar54);
  auVar61[7] = -(pbVar23[0x17] == bVar57);
  auVar61[8] = -(pbVar23[0x18] == bVar46);
  auVar61[9] = -(pbVar23[0x19] == bVar51);
  auVar61[10] = -(pbVar23[0x1a] == bVar54);
  auVar61[0xb] = -(pbVar23[0x1b] == bVar57);
  auVar61[0xc] = -(pbVar23[0x1c] == bVar46);
  auVar61[0xd] = -(pbVar23[0x1d] == bVar51);
  auVar61[0xe] = -(pbVar23[0x1e] == bVar54);
  auVar61[0xf] = -(pbVar23[0x1f] == bVar57);
  auVar42[0] = -(pbVar23[0x20] == bVar46);
  auVar42[1] = -(pbVar23[0x21] == bVar51);
  auVar42[2] = -(pbVar23[0x22] == bVar54);
  auVar42[3] = -(pbVar23[0x23] == bVar57);
  auVar42[4] = -(pbVar23[0x24] == bVar46);
  auVar42[5] = -(pbVar23[0x25] == bVar51);
  auVar42[6] = -(pbVar23[0x26] == bVar54);
  auVar42[7] = -(pbVar23[0x27] == bVar57);
  auVar42[8] = -(pbVar23[0x28] == bVar46);
  auVar42[9] = -(pbVar23[0x29] == bVar51);
  auVar42[10] = -(pbVar23[0x2a] == bVar54);
  auVar42[0xb] = -(pbVar23[0x2b] == bVar57);
  auVar42[0xc] = -(pbVar23[0x2c] == bVar46);
  auVar42[0xd] = -(pbVar23[0x2d] == bVar51);
  auVar42[0xe] = -(pbVar23[0x2e] == bVar54);
  auVar42[0xf] = -(pbVar23[0x2f] == bVar57);
  auVar44[0] = -(pbVar23[0x30] == bVar46);
  auVar44[1] = -(pbVar23[0x31] == bVar51);
  auVar44[2] = -(pbVar23[0x32] == bVar54);
  auVar44[3] = -(pbVar23[0x33] == bVar57);
  auVar44[4] = -(pbVar23[0x34] == bVar46);
  auVar44[5] = -(pbVar23[0x35] == bVar51);
  auVar44[6] = -(pbVar23[0x36] == bVar54);
  auVar44[7] = -(pbVar23[0x37] == bVar57);
  auVar44[8] = -(pbVar23[0x38] == bVar46);
  auVar44[9] = -(pbVar23[0x39] == bVar51);
  auVar44[10] = -(pbVar23[0x3a] == bVar54);
  auVar44[0xb] = -(pbVar23[0x3b] == bVar57);
  auVar44[0xc] = -(pbVar23[0x3c] == bVar46);
  auVar44[0xd] = -(pbVar23[0x3d] == bVar51);
  auVar44[0xe] = -(pbVar23[0x3e] == bVar54);
  auVar44[0xf] = -(pbVar23[0x3f] == bVar57);
  uVar39 = (uint64_t)
           CONCAT22((uint16_t)(SUB161(auVar44 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar44[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar42 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar42[0xf] >> 7) << 0xf) << 0x20 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar61 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar61[0xf] >> 7) << 0xf) << 0x10 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar59 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar59[0xf] >> 7) << 0xf);
  bVar46 = bVar11 & 0x3f;
  uVar29 = uVar39 >> bVar46 | uVar39 << 0x40 - bVar46;
  if (uVar39 != 0 && iVar36 != 0) {
    puVar35 = (uint64_t *)(lVar13 + (uint64_t)uVar12);
    pcVar1 = (char *)*puVar8;
    lVar21 = puVar8[1];
    uVar24 = *(uint32_t *)(puVar8 + 3);
    lVar15 = 0;
    do {
      iVar7 = 0;
      for (uVar39 = uVar29; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x8000000000000000) {
        iVar7 = iVar7 + 1;
      }
      uVar38 = iVar7 + (bVar11 & 0x3f) & 0x3f;
      if (uVar38 != 0) {
        uVar38 = *(uint32_t *)(lStack_68 + uStack_50 * 4 + (uint64_t)uVar38 * 4);
        if (uVar38 < uVar24) goto LAB_7fffa560d948;
        iVar36 = iVar36 + -1;
        auStack_178[lVar15] = uVar38;
        lVar15 = lVar15 + 1;
      }
      uVar29 = uVar29 & uVar29 - 1;
      if ((uVar29 == 0) || (iVar36 == 0)) goto LAB_7fffa560d948;
    } while( true );
  }
  goto LAB_7fffa560dc2f;
code_r0x7fffa560d77a:
  lVar15 = lVar15 + 8;
  goto LAB_7fffa560d760;
LAB_7fffa560d948:
  if (lVar15 != 0) {
    iVar36 = (int)*puStack_58;
    puVar14 = (uint64_t *)((int64_t)puStack_58 + 4);
    puStack_70 = (uint64_t *)((int64_t)puVar19 + -3);
    lVar13 = (uint64_t)uVar12 + lVar13 + 8;
    lVar16 = 0;
    uVar39 = uVar18;
    do {
      uVar18 = (uint64_t)auStack_178[lVar16];
      if (*(int *)(lVar21 + uVar18) == iVar36) {
        puVar22 = (uint64_t *)(lVar21 + uVar18 + 4);
        puVar30 = (uint64_t *)(((int64_t)pcVar1 - (int64_t)puVar22) + (int64_t)puVar14);
        if (puVar19 <= puVar30) {
          puVar30 = puVar19;
        }
        puVar41 = puVar14;
        puVar40 = puVar22;
        if (puVar14 < (uint64_t *)((int64_t)puVar30 - 7U)) {
          if (*puVar22 == *puVar14) {
            lVar26 = lVar21 + 0xc + uVar18;
            lVar33 = 0;
            do {
              puVar41 = (uint64_t *)((int64_t)puStack_58 + lVar33 + 0xc);
              if ((uint64_t *)((int64_t)puVar30 - 7U) <= puVar41) {
                puVar40 = (uint64_t *)(lVar26 + lVar33);
                goto LAB_7fffa560da66;
              }
              uVar18 = *(uint64_t *)(lVar26 + lVar33);
              lVar33 = lVar33 + 8;
            } while (uVar18 == *puVar41);
            uVar24 = 0;
            for (uVar18 = uVar18 ^ *puVar41; (uVar18 & 1) == 0;
                uVar18 = uVar18 >> 1 | 0x8000000000000000) {
              uVar24 = uVar24 + 1;
            }
            uVar18 = (uint64_t)(uVar24 >> 3) + lVar33;
          }
          else {
            uVar24 = 0;
            for (uVar18 = *puVar22 ^ *puVar14; (uVar18 & 1) == 0;
                uVar18 = uVar18 >> 1 | 0x8000000000000000) {
              uVar24 = uVar24 + 1;
            }
            uVar18 = (uint64_t)(uVar24 >> 3);
          }
        }
        else {
LAB_7fffa560da66:
          if ((puVar41 < (uint64_t *)((int64_t)puVar30 - 3U)) && ((int)*puVar40 == (int)*puVar41))
          {
            puVar40 = (uint64_t *)((int64_t)puVar40 + 4);
            puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
          }
          if ((puVar41 < (uint64_t *)((int64_t)puVar30 - 1U)) &&
             ((short)*puVar40 == (short)*puVar41)) {
            puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
            puVar40 = (uint64_t *)((int64_t)puVar40 + 2);
          }
          if (puVar41 < puVar30) {
            puVar41 = (uint64_t *)
                      ((int64_t)puVar41 + (uint64_t)((char)*puVar40 == (char)*puVar41));
          }
          uVar18 = (int64_t)puVar41 - (int64_t)puVar14;
        }
        if ((char *)((int64_t)puVar22 + uVar18) == pcVar1) {
          puVar30 = (uint64_t *)((int64_t)puVar14 + uVar18);
          puVar22 = puVar30;
          puVar41 = puVar35;
          if (puVar30 < (uint64_t *)((int64_t)puVar19 - 7U)) {
            uVar29 = *puVar35;
            if (uVar29 == *puVar30) {
              lVar26 = 0;
              do {
                puVar22 = (uint64_t *)((int64_t)puStack_58 + lVar26 + uVar18 + 0xc);
                if ((uint64_t *)((int64_t)puVar19 - 7U) <= puVar22) {
                  puVar41 = (uint64_t *)(lVar26 + lVar13);
                  goto LAB_7fffa560db48;
                }
                uVar29 = *(uint64_t *)(lVar13 + lVar26);
                lVar26 = lVar26 + 8;
              } while (uVar29 == *puVar22);
              uVar24 = 0;
              for (uVar29 = uVar29 ^ *puVar22; (uVar29 & 1) == 0;
                  uVar29 = uVar29 >> 1 | 0x8000000000000000) {
                uVar24 = uVar24 + 1;
              }
              uVar29 = (uint64_t)(uVar24 >> 3) + lVar26;
            }
            else {
              uVar24 = 0;
              for (uVar29 = uVar29 ^ *puVar30; (uVar29 & 1) == 0;
                  uVar29 = uVar29 >> 1 | 0x8000000000000000) {
                uVar24 = uVar24 + 1;
              }
              uVar29 = (uint64_t)(uVar24 >> 3);
            }
          }
          else {
LAB_7fffa560db48:
            if ((puVar22 < (uint64_t *)((int64_t)puVar19 + -3)) &&
               ((int)*puVar41 == (int)*puVar22)) {
              puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
              puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
            }
            if ((puVar22 < (uint64_t *)((int64_t)puVar19 - 1U)) &&
               ((short)*puVar41 == (short)*puVar22)) {
              puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
              puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
            }
            if (puVar22 < puVar19) {
              puVar22 = (uint64_t *)
                        ((int64_t)puVar22 + (uint64_t)((char)*puVar41 == (char)*puVar22));
            }
            uVar29 = (int64_t)puVar22 - (int64_t)puVar30;
          }
          uVar18 = uVar18 + uVar29;
        }
        uVar18 = uVar18 + 4;
        if (uVar39 < uVar18) {
          *in_R11 = (uint64_t)
                    (((((int)uStack_60 - uVar12) + ((int)pcVar1 - (int)lVar21)) -
                     auStack_178[lVar16]) + 3);
          if ((uint64_t *)((int64_t)puStack_58 + uVar18) == puVar19) break;
          iVar36 = (int)*puStack_58;
          uVar39 = uVar18;
        }
      }
      uVar18 = uVar39;
      lVar16 = lVar16 + 1;
      uVar39 = uVar18;
    } while (lVar16 != lVar15);
  }
LAB_7fffa560dc2f:
  return uVar18 << 0x10;
}


// ============================================================================
// Function : FUN_7fffa560dc50  |  RVA: 0xe9dc50  |  Size: 998 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa560df45) */

void FUN_7fffa560dc50(void)

{
  uint64_t uVar1;
  
  uRam00007fffa47bb5e8 = 0x47bbb85ddb717140;
  uRam00007fffa47bb5f8 = 0xc7bdd0f9e2fb8993;
  uRam00007fffa47bb5f0 = 0xa8bc4b70be9dc104;
  uRam00007fffa47bb620 = 0xe1795355bbe0ac72;
  uRam00007fffa47bb610 = 0x4b3f3c7555250f43;
  uVar1 = (uRam00007fffa47813c0 ^ 0xffe2e27c813ec218) * 0x4000000080000001;
  uVar1 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  lRam00007fffa47bb608 =
       (uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2 + 0x6df20213161dc4bc;
  uRam00007fffa47bb618 = 0x41332ab886516628;
  lRam00007fffa47bb600 = lRam00007fffa4781010 + -0x110bff79d2960e5;
  return;
}


// ============================================================================
// Function : FUN_7fffa560e038  |  RVA: 0xe9e038  |  Size: 59 bytes
// Callers  : none
// Callees  : FUN_7fffa5476b88@0xd06b88, FUN_7fffa5699634@0xf29634, FUN_7fffa5609524@0xe99524, FUN_7fffa4f54478@0x7e4478, FUN_7fffa55f3150@0xe83150
// ============================================================================
bool FUN_7fffa560e038(void)

{
  int iVar1;
  
  FUN_7fffa5476b88(7);
  iVar1 = FUN_7fffa5609524(0);
  if (iVar1 == 0) {
    FUN_7fffa55f3150();
    FUN_7fffa5699634();
  }
  FUN_7fffa4f54478(7);
  return iVar1 == 0;
}


// ============================================================================
// Function : FUN_7fffa560e074  |  RVA: 0xe9e074  |  Size: 1 bytes
// Callers  : FUN_7fffa5174bf0@0xa04bf0
// Callees  : none
// ============================================================================
void FUN_7fffa560e074(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa560e0a0  |  RVA: 0xe9e0a0  |  Size: 322 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa560e0a0(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa560e210  |  RVA: 0xe9e210  |  Size: 372 bytes
// Callers  : FUN_7fffa54037a0@0xc937a0, FUN_7fffa507ae2a@0x90ae2a
// Callees  : FUN_7fffa5488850@0xd18850
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa560e210(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                     uint64_t param_5,uint64_t param_6,int param_7,int param_8,int64_t param_9,
                     uint64_t *param_10,uint8_t param_11)

{
  uint8_t auStack_e8 [32];
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  code *pcStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int64_t lStack_80;
  uint64_t uStack_78;
  int64_t lStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int64_t lStack_50;
  uint64_t uStack_48;
  int64_t lStack_40;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint64_t uStack_28;
  uint64_t uStack_18;
  
  uStack_18 = _DAT_7fffa4780040 ^ (uint64_t)auStack_e8;
  uStack_b8 = 0x180000029;
  uStack_b0 = 0;
  pcStack_98 = FUN_7fffa55afd40;
  uStack_a8 = 0;
  uStack_a0 = 0xf;
  uStack_88 = param_5;
  lStack_80 = (int64_t)param_7;
  uStack_60 = (uint64_t)param_11;
  lStack_70 = *(int64_t *)(param_9 + 0x18) + param_10[1];
  lStack_50 = *(int64_t *)(param_9 + 0x20) + param_10[1];
  lStack_40 = (int64_t)param_8;
  uStack_48 = 0;
  uStack_c0 = param_10[8];
  uStack_c8 = param_10[5];
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_58 = 0x19930520;
  uStack_90 = param_4;
  uStack_78 = param_3;
  uStack_68 = param_2;
  (*(code *)&DAT_7ff8504cda30)(*param_1,*param_10,&uStack_b8,0);
  FUN_7fffa5488850(uStack_18 ^ (uint64_t)auStack_e8);
  return;
}


// ============================================================================
// Function : FUN_7fffa560e390  |  RVA: 0xe9e390  |  Size: 55 bytes
// Callers  : FUN_7fffa55aec50@0xe3ec50, FUN_7fffa507cf70@0x90cf70, FUN_7fffa5215120@0xaa5120, FUN_7fffa54765d0@0xd065d0, FUN_7fffa5267a20@0xaf7a20
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa560e3a3) */
/* WARNING: Removing unreachable block (ram,0x7fffa560e3b9) */
/* WARNING: Removing unreachable block (ram,0x7fffa560e3bf) */

void FUN_7fffa560e390(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa560e3c8  |  RVA: 0xe9e3c8  |  Size: 150 bytes
// Callers  : FUN_7fffa5513504@0xda3504, FUN_7fffa56a06d0@0xf306d0
// Callees  : FUN_7fffa564c5c0@0xedc5c0, FUN_7fffa5488508@0xd18508
// ============================================================================
void FUN_7fffa560e3c8(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4,
                     uint32_t param_5,uint64_t param_6,uint32_t param_7,uint32_t param_8,
                     uint32_t param_9)

{
  int64_t lStack_28;
  uint8_t auStack_20 [16];
  char cStack_10;
  
  FUN_7fffa564c5c0(&lStack_28,param_1);
  FUN_7fffa5488508(auStack_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (cStack_10 != '\0') {
    *(uint32_t *)(lStack_28 + 0x3a8) = *(uint32_t *)(lStack_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa560e460  |  RVA: 0xe9e460  |  Size: 53 bytes
// Callers  : FUN_7fffa4fd1100@0x861100
// Callees  : FUN_7fffa5281ce4@0xb11ce4
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa560e460(int64_t param_1,int64_t *param_2,int64_t param_3)

{
  int64_t lVar1;
  
  if ((*param_2 != *(int64_t *)(&DAT_7fffa47825c8 + param_3 * 8)) &&
     ((_DAT_7fffa4780900 & *(uint32_t *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_7fffa5281ce4();
    *param_2 = lVar1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa560e4a0  |  RVA: 0xe9e4a0  |  Size: 33 bytes
// Callers  : none
// Callees  : thunk_FUN_7fffa55eeda0@0x913000
// ============================================================================
uint64_t FUN_7fffa560e4a0(uint64_t param_1,uint64_t param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_7fffa55eeda0(param_1,0x10);
  }
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa560e4d0  |  RVA: 0xe9e4d0  |  Size: 772 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa560e4d0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                     uint64_t param_5)

{
  char *pcVar1;
  int64_t lVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  code *pcVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint8_t *puVar11;
  int64_t *plVar12;
  uint32_t uVar13;
  uint64_t uVar14;
  uint16_t uVar15;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  
  uVar14 = param_2 * -0x7ac65e493d9d553b;
  uVar5 = (uint32_t)param_5;
  uVar15 = (uint16_t)param_5 | 1;
  lVar9 = *(int64_t *)
           ((int64_t)(short)((uVar15 * -0x7400 | (uint16_t)(uVar15 * -0x741d) >> 6) + 0x7adb) +
           0x7fffa47bbc80);
  lVar10 = lVar9 + param_2 * 0x539a1b6c262aac50;
  pcVar1 = (char *)(lVar9 + param_2 * 0x539a1b6c262aac50);
  auVar16[0] = -(*pcVar1 == '\0');
  auVar16[1] = -(pcVar1[1] == '\0');
  auVar16[2] = -(pcVar1[2] == '\0');
  auVar16[3] = -(pcVar1[3] == '\0');
  auVar16[4] = -(pcVar1[4] == '\0');
  auVar16[5] = -(pcVar1[5] == '\0');
  auVar16[6] = -(pcVar1[6] == '\0');
  auVar16[7] = -(pcVar1[7] == '\0');
  auVar16[8] = -(pcVar1[8] == '\0');
  auVar16[9] = -(pcVar1[9] == '\0');
  auVar16[10] = -(pcVar1[10] == '\0');
  auVar16[0xb] = -(pcVar1[0xb] == '\0');
  auVar16[0xc] = -(pcVar1[0xc] == '\0');
  auVar16[0xd] = -(pcVar1[0xd] == '\0');
  auVar16[0xe] = -(pcVar1[0xe] == '\0');
  auVar16[0xf] = -(pcVar1[0xf] == '\0');
  uVar15 = (uint16_t)(SUB161(auVar16 >> 7,0) & 1) | (uint16_t)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
           (uint16_t)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
           (uint16_t)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
           (uint16_t)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
           (uint16_t)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
           (uint16_t)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
           (uint16_t)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
           (uint16_t)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
           (uint16_t)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
           (uint16_t)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
           (uint16_t)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
           (uint16_t)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
           (uint16_t)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
           (uint16_t)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe;
  uVar13 = (uint32_t)uVar15;
  if (uVar15 == 0) {
    lVar9 = 1;
    while( true ) {
      *(uint8_t *)(lVar10 + 0xf) = *(uint8_t *)(lVar10 + 0xf) | 1;
      uVar14 = uVar14 + lVar9 & uRam00007fffa47bae50;
      lVar2 = *(int64_t *)((int64_t)(int)(uVar5 + 0x7bfa8011) + 0x7fffa47c4288);
      lVar10 = lVar2 + uVar14 * 0x10;
      pcVar1 = (char *)(lVar2 + uVar14 * 0x10);
      auVar17[0] = -(*pcVar1 == '\0');
      auVar17[1] = -(pcVar1[1] == '\0');
      auVar17[2] = -(pcVar1[2] == '\0');
      auVar17[3] = -(pcVar1[3] == '\0');
      auVar17[4] = -(pcVar1[4] == '\0');
      auVar17[5] = -(pcVar1[5] == '\0');
      auVar17[6] = -(pcVar1[6] == '\0');
      auVar17[7] = -(pcVar1[7] == '\0');
      auVar17[8] = -(pcVar1[8] == '\0');
      auVar17[9] = -(pcVar1[9] == '\0');
      auVar17[10] = -(pcVar1[10] == '\0');
      auVar17[0xb] = -(pcVar1[0xb] == '\0');
      auVar17[0xc] = -(pcVar1[0xc] == '\0');
      auVar17[0xd] = -(pcVar1[0xd] == '\0');
      auVar17[0xe] = -(pcVar1[0xe] == '\0');
      auVar17[0xf] = -(pcVar1[0xf] == '\0');
      uVar13 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar17 >> 7,0) & 1) |
                              (uint16_t)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
                             (uint16_t)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe);
      if (uVar13 != 0) break;
      lVar9 = lVar9 + 1;
    }
  }
  uVar4 = 0;
  for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
    uVar4 = uVar4 + 1;
  }
  uVar8 = (uint64_t)uVar4;
  bVar3 = (uint8_t)param_5 & 0xf;
  uVar15 = 0xf2acU >> bVar3 | -0xd54 << 0x10 - bVar3;
  pcVar6 = (code *)((int64_t)(int)((uVar5 | 1) * 0x2f040d0) + 0x7fffa5275f80);
  (*pcVar6)();
  lVar9 = uVar14 * 0x78 + lRam00007fffa47bae60;
  puVar11 = (uint8_t *)
            (((int64_t)pcVar6 << 0x2c | (uint64_t)pcVar6 >> 0x14) -
            (((uint64_t)pcVar6 >> 0x14) << 0x36));
  *(uint8_t **)(lVar9 + uVar8 * 8) = puVar11;
  *puVar11 = 9;
  *(uint8_t (*) [16])(puVar11 + 8) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(puVar11 + 0x18) = (uint8_t  [16])0x0;
  *(uint64_t *)(puVar11 + 0x28) = 0;
  plVar12 = (int64_t *)((0x8008404ebc0 - param_5) * param_3);
  (*(code *)((int64_t)(int)~((uVar5 + 0xc73445f4) * -0x6eeb5421) + 0x7fffa527869e))();
  puVar7 = (uint64_t *)((param_5 << 0x2c | param_5 >> 0x14) - ((param_5 >> 0x14) << 0x36));
  *plVar12 = lVar10;
  *(uint64_t **)(puVar11 + 8) = puVar7;
  *puVar7 = puVar11 + 8;
  plVar12[2] = uVar8 * 8 + lVar9;
  puVar7[1] = 0;
  *(uint8_t *)(lVar10 + uVar8) = 0xb8;
  *(int64_t *)((int64_t)(int)(uVar5 ^ 0x7bfbc0f2) + 0x7fffa47c8323) =
       *(int64_t *)((int64_t)(short)(uVar15 << 0xc | uVar15 >> 4) + 0x7fffa47c101b) + 1;
  *(uint32_t *)(plVar12 + 1) = uVar4;
  return;
}


// ============================================================================
// Function : FUN_7fffa560e7e0  |  RVA: 0xe9e7e0  |  Size: 1136 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa560eb83) */
/* WARNING: Removing unreachable block (ram,0x7fffa560e9e0) */

void FUN_7fffa560e7e0(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  
  bRam00007fffa47843d6 = 0;
  uRam00007fffa4784406 = 0;
  uRam00007fffa478440e = 0;
  uRam00007fffa47843f6 = 0;
  uRam00007fffa47843fe = 0;
  uRam00007fffa47843e6 = 0;
  uRam00007fffa47843ee = 0;
  _uRam00007fffa4784416 = 0;
  uVar1 = rdtsc();
  lVar7 = (uVar1 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar1)) * 0x8300248996762f2;
  lVar6 = 3;
  while( true ) {
    lVar7 = lVar7 * 0x8300248996762f2 + 0x8300248996762f2;
    *(char *)(lVar6 + 0x7fffa47843c6) = (char)((uint64_t)lVar7 >> 0x20);
    if (lVar6 == 0x57) break;
    lVar8 = lVar7 * 0x8300248996762f2 + 0x8300248996762f2;
    lVar10 = lVar8 * 0x8300248996762f2 + 0x8300248996762f2;
    lVar7 = lVar10 * 0x8300248996762f2 + 0x8300248996762f2;
    *(char *)(lVar6 + 0x7fffa47843c9) = (char)((uint64_t)lVar7 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47843c8) = (char)((uint64_t)lVar10 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47843c7) = (char)((uint64_t)lVar8 >> 0x20);
    lVar6 = lVar6 + 4;
  }
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa47843d6 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  uVar9 = uVar1 >> 0x20;
  bVar2 = bRam00007fffa4784418;
  bVar3 = uRam00007fffa4784416._1_1_;
  bVar5 = ~bRam00007fffa4784419;
  bVar4 = ~bRam00007fffa478441d;
  *(uint8_t *)(uVar9 * 8 + 0x7fffa47843ea) =
       ~bRam00007fffa478441a << 5 | (uint8_t)~bRam00007fffa478441a >> 3;
  *(uint8_t *)(uVar9 * 8 + 0x7fffa47843eb) =
       ~bRam00007fffa478441b << 5 | (uint8_t)~bRam00007fffa478441b >> 3;
  *(uint8_t *)(uVar9 * 8 + 0x7fffa47843e8) = ~bVar2 << 5 | (uint8_t)~bVar2 >> 3;
  *(uint8_t *)(uVar9 * 8 + 0x7fffa47843ed) = bVar4 << 5 | bVar4 >> 3;
  *(uint8_t *)(uVar9 * 8 + 0x7fffa47843ec) =
       ~bRam00007fffa478441c << 5 | (uint8_t)~bRam00007fffa478441c >> 3;
  bVar2 = (uint8_t)uRam00007fffa4784416;
  *(uint8_t *)(uVar9 * 8 + 0x7fffa47843e9) = bVar5 << 5 | bVar5 >> 3;
  *(uint8_t *)(uVar9 * 8 + 0x7fffa47843e7) = ~bVar3 << 5 | (uint8_t)~bVar3 >> 3;
  *(uint8_t *)(uVar9 * 8 + 0x7fffa47843e6) = ~bVar2 << 5 | (uint8_t)~bVar2 >> 3;
  bRam00007fffa47843d6 = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa560ec50  |  RVA: 0xe9ec50  |  Size: 1 bytes
// Callers  : FUN_7fffa564c350@0xedc350
// Callees  : none
// ============================================================================
void FUN_7fffa560ec50(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa560ec60  |  RVA: 0xe9ec60  |  Size: 931 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa560ec60(void)

{
  uRam00007fffa4785418 = 0x215cc7910d3352d4;
  uRam00007fffa4785420 = 0x93ad3c82a86c3751;
  uRam00007fffa4785410 = 0xfbdc6757562fcb1e;
  uRam00007fffa4785448 = 0x9cb234e8b1eb6474;
  uRam00007fffa4785438 = 0xaae07978778b28e5;
  uRam00007fffa4785428 = 0x8a73886ff17cd667;
  uRam00007fffa4785430 = 0x8336dd2603419dc3;
  uRam00007fffa4785440 = 0x2dee2520113355b8;
  return;
}


// ============================================================================
// Function : FUN_7fffa560f010  |  RVA: 0xe9f010  |  Size: 4418 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa560f010(void)

{
  uint64_t *puVar1;
  char *pcVar2;
  char *pcVar3;
  uint32_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint32_t uVar7;
  bool bVar8;
  uint8_t bVar9;
  uint8_t auVar10 [15];
  uint8_t auVar11 [15];
  uint8_t auVar12 [15];
  uint8_t auVar13 [15];
  uint8_t auVar14 [15];
  uint64_t *puVar15;
  int iVar16;
  int64_t in_RAX;
  uint8_t bVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint64_t *puVar20;
  uint64_t uVar21;
  uint64_t *puVar22;
  int64_t lVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t in_R9;
  uint64_t *in_R10;
  int64_t *plVar26;
  uint64_t *puVar27;
  uint64_t uVar28;
  int64_t in_R11;
  int iVar29;
  int64_t lVar30;
  uint64_t *puVar31;
  uint32_t uVar32;
  uint32_t uVar33;
  uint64_t uVar34;
  int64_t lVar35;
  int64_t lVar36;
  uint64_t uVar37;
  uint32_t uVar38;
  uint8_t auVar39 [16];
  uint8_t bVar41;
  uint8_t bVar42;
  uint8_t bVar43;
  uint8_t auVar40 [16];
  char cVar44;
  uint8_t uVar48;
  uint8_t uVar50;
  uint8_t uVar52;
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  char cVar49;
  char cVar51;
  char cVar53;
  uint8_t auVar47 [16];
  uint32_t in_stack_00000028;
  uint32_t auStack_1c8 [64];
  uint64_t *puStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t *puStack_a8;
  uint64_t *puStack_a0;
  char *pcStack_98;
  uint64_t uStack_90;
  uint32_t uStack_84;
  int64_t lStack_80;
  uint64_t uStack_78;
  uint64_t *puStack_70;
  uint64_t *puStack_68;
  uint64_t uStack_60;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  int64_t lStack_48;
  
  auVar40 = _DAT_7fffa56bb100;
  uVar37 = ~(in_R11 * 0x352cc83d42f00769);
  in_R9 = (in_R9 << 0x39 | in_R9 >> 7) ^ (in_R9 << 6 | in_R9 >> 0x3a) ^ in_R9;
  uVar34 = uVar37 << 0x22 | uVar37 >> 0x1e;
  in_R9 = (in_R9 << 0xc | in_R9 >> 0x34) ^ (in_R9 << 0x32 | in_R9 >> 0xe) ^ in_R9;
  uVar25 = in_R9 << 0x18 | in_R9 >> 0x28;
  uVar24 = in_R9 << 0x24 | in_R9 >> 0x1c;
  uVar21 = uVar25 ^ in_R9;
  if (0x21339913 - in_stack_00000028 <= (in_stack_00000028 ^ 0xda9e4148) + 0xcbb79092) {
    uVar21 = in_R9 & uVar25;
  }
  bVar9 = (uint8_t)in_stack_00000028;
  uVar25 = uVar34 ^ uVar37;
  if ((uint64_t)(in_stack_00000028 + 0xce955393) == 0xffffffffe871323a) {
    uVar25 = uVar37 + uVar34;
  }
  uVar25 = uVar25 ^ (uVar37 << 0x35 | uVar37 >> 0xb);
  uVar25 = (uVar25 << 4 | uVar25 >> 0x3c) ^ (uVar25 << 0x2a | uVar25 >> 0x16) ^ uVar25;
  uVar25 = (uVar25 << 8 | uVar25 >> 0x38) ^ (uVar25 << 0x14 | uVar25 >> 0x2c) ^ uVar25;
  uVar25 = (uVar25 << 0x28 | uVar25 >> 0x18) ^ (uVar25 << 0x10 | uVar25 >> 0x30) ^ uVar25;
  uVar25 = (uVar25 << 0x20 | uVar25 >> 0x20) ^ (uVar25 << 0x10 | uVar25 >> 0x30) ^ uVar25;
  uVar32 = 5;
  if (*(uint32_t *)(in_RAX + 0x10c) < 5) {
    uVar32 = *(uint32_t *)(in_RAX + 0x10c);
  }
  iVar29 = 1 << ((uint8_t)uVar32 & 0x1f);
  uVar32 = 1 << (*(uint8_t *)(in_RAX + 0x100) & 0x1f);
  uVar34 = uVar21 & uVar24;
  if ((in_stack_00000028 ^ 0xb59ebbac) * -0x6c01e187 != -0x7cf831d6) {
    uVar34 = uVar21 ^ uVar24;
  }
  uVar34 = (uVar34 << 0x30 | uVar34 >> 0x10) ^ (uVar34 << 8 | uVar34 >> 0x38) ^ uVar34;
  uVar34 = (uVar34 << 0x20 | uVar34 >> 0x20) ^ (uVar34 << 0x10 | uVar34 >> 0x30) ^ uVar34;
  uVar34 = ~(uVar34 << 0x20 | uVar34 >> 0x20);
  uVar34 = (uVar34 << 10 | uVar34 >> 0x36) ^ (uVar34 << 0x37 | uVar34 >> 9) ^ uVar34;
  uVar34 = (uVar34 << 0x14 | uVar34 >> 0x2c) ^ (uVar34 << 0x2e | uVar34 >> 0x12) ^ uVar34;
  uVar34 = (uVar34 << 0x1c | uVar34 >> 0x24) ^ (uVar34 << 0x28 | uVar34 >> 0x18) ^ uVar34;
  uVar34 = (uVar34 << 0x38 | uVar34 >> 8) ^ (uVar34 << 0x10 | uVar34 >> 0x30) ^ uVar34;
  lStack_80 = *(int64_t *)(in_RAX + 8);
  uStack_78 = (uint64_t)*(uint32_t *)(in_RAX + 0x18);
  uVar34 = (uVar34 << 0x30 | uVar34 >> 0x10) ^ (uVar34 << 0x20 | uVar34 >> 0x20) ^ uVar34;
  puStack_50 = (uint64_t *)(uVar34 << 0x20 | uVar34 >> 0x20);
  puStack_a0 = *(uint64_t **)(in_RAX + 0xf8);
  uVar21 = *puStack_50;
  uStack_b8 = uVar21 * -0x30e4432345000000 >>
              (0x38U - *(char *)((int64_t)puStack_a0 + 0x34) & 0x3f);
  uVar24 = 0;
  if (((in_stack_00000028 ^ 0x6660baaa) << 3 | (in_stack_00000028 ^ 0x6660baaa) >> 0x1d) <
      ~(in_stack_00000028 + 0xb6cd1e8a)) {
    uVar24 = (uint64_t)((uint32_t)(uStack_b8 >> 3) & 0x1fffffe0);
  }
  uStack_c0 = (int64_t)puStack_50 - lStack_80;
  uVar18 = (uint32_t)uStack_c0;
  uVar38 = *(uint32_t *)(in_RAX + 0x1c);
  uVar33 = uVar18 - uVar32;
  if (uVar18 - uVar38 <= uVar32) {
    uVar33 = uVar38;
  }
  if (*(int *)(in_RAX + 0x28) != 0) {
    uVar33 = uVar38;
  }
  lVar23 = puStack_a0[7];
  puStack_70 = (uint64_t *)(uVar25 << 0x20 | uVar25 >> 0x20);
  uStack_b0 = *(int64_t *)(in_RAX + 0x70);
  uStack_90 = *(uint64_t *)(in_RAX + 0x60);
  lVar30 = *(int64_t *)(in_RAX + 0x38);
  puStack_68 = (uint64_t *)puStack_a0[0xe];
  pcStack_98 = (char *)uVar24;
  cVar44 = (char)*(uint32_t *)(in_RAX + 0x34);
  if (((-0x43203d4a << (bVar9 & 0x1f) | 0xbcdfc2b6U >> 0x20 - (bVar9 & 0x1f)) < 0xf2224395) &&
     (*(int *)(in_RAX + 300) == 0)) {
    lStack_48 = CONCAT44(lStack_48._4_4_,*(uint32_t *)(in_RAX + 0x34));
    uStack_84 = uVar33;
    uVar32 = *(uint32_t *)(in_RAX + 0x2c);
    uVar21 = (uint64_t)uVar32;
    lVar36 = lVar30;
    lVar35 = uStack_b0;
    if (0x180 < uVar18 - uVar32) {
      if (uVar32 < 0xffffffa0) {
        uVar25 = uVar21 + 0x5f;
        while( true ) {
          uVar37 = (uint64_t)((uint32_t)uVar21 & 7);
          uVar32 = *(uint32_t *)(in_RAX + 0x40 + uVar37 * 4);
          *(int *)(in_RAX + 0x40 + uVar37 * 4) =
               (int)((*(int64_t *)(lStack_80 + 8 + uVar21) * -0x30e4432345000000 ^
                     *(uint64_t *)(in_RAX + 0x60)) >> (0x38U - cVar44 & 0x3f));
          uVar37 = (uint64_t)(uVar32 >> 3 & 0xffffffe0);
          iVar16 = 0x1f;
          if ((*(uint8_t *)(lVar30 + uVar37) & 0x1f) != 1) {
            iVar16 = 0;
          }
          auVar11._9_6_ = 0;
          auVar11._0_9_ = SUB159(ZEXT815(0),6);
          auVar12._10_5_ = 0;
          auVar12._0_10_ = SUB1510(auVar11 << 0x30,5);
          auVar13._11_4_ = 0;
          auVar13._0_11_ = SUB1511(auVar12 << 0x28,4);
          auVar14._12_3_ = 0;
          auVar14._0_12_ = SUB1512(auVar13 << 0x20,3);
          auVar10._2_13_ = SUB1513(auVar14 << 0x18,2);
          auVar10._0_2_ = (uint16_t)(uint8_t)(*(uint8_t *)(lVar30 + uVar37) - 1) & auVar40._0_2_;
          uVar38 = auVar10._0_4_ + iVar16;
          *(char *)(lVar30 + uVar37) = (char)uVar38;
          *(char *)((uint64_t)uVar38 + lVar30 + uVar37) = (char)uVar32;
          *(uint32_t *)(uStack_b0 + uVar37 * 4 + (uint64_t)uVar38 * 4) = (uint32_t)uVar21;
          if (uVar25 == uVar21) break;
          uVar21 = uVar21 + 1;
        }
        lVar36 = *(int64_t *)(in_RAX + 0x38);
        lVar35 = *(int64_t *)(in_RAX + 0x70);
      }
      uVar32 = uVar18 - 0x20;
      uVar21 = (uint64_t)uVar32;
      plVar26 = (int64_t *)(lStack_80 + uVar21);
      uVar19 = ((int)(int64_t *)((int64_t)puStack_50 + 1U) - (int)plVar26) + 1;
      uVar38 = 8;
      if (uVar19 < 8) {
        uVar38 = uVar19;
      }
      uVar19 = 0;
      if (plVar26 <= (int64_t *)((int64_t)puStack_50 + 1U)) {
        uVar19 = uVar38;
      }
      if (uVar32 < (uVar19 + uVar18) - 0x20) {
        uVar38 = 0x38 - *(int *)(in_RAX + 0x34);
        uStack_60 = *(uint64_t *)(in_RAX + 0x60);
        if ((uVar19 & 1) != 0) {
          uVar21 = uVar21 + 1;
          *(int *)(in_RAX + 0x40 + (uint64_t)(uVar32 & 7) * 4) =
               (int)((*plVar26 * -0x30e4432345000000 ^ uStack_60) >> (uint64_t)uVar38);
        }
        if (uVar19 != 1) {
          while( true ) {
            uVar7 = (uint32_t)uVar21;
            bVar17 = (uint8_t)uVar38;
            *(int *)(in_RAX + 0x40 + (uint64_t)(uVar7 & 7) * 4) =
                 (int)((*(int64_t *)(lStack_80 + uVar21) * -0x30e4432345000000 ^ uStack_60) >>
                      (bVar17 & 0x3f));
            *(int *)(in_RAX + 0x40 + (uint64_t)(uVar7 + 1 & 7) * 4) =
                 (int)((*(int64_t *)(lStack_80 + 1 + uVar21) * -0x30e4432345000000 ^ uStack_60) >>
                      (bVar17 & 0x3f));
            if ((((int)lStack_80 - uVar19) - (int)(uVar34 >> 0x20)) + uVar7 == -0x22) break;
            uVar21 = uVar21 + 2;
          }
        }
      }
    }
    if (uVar32 < uVar18) {
      lVar5 = *(int64_t *)(in_RAX + 8);
      uVar21 = (uint64_t)uVar32;
      uVar4 = *(uint32_t *)(in_RAX + 0x34);
      do {
        uVar34 = (uint64_t)((uint32_t)uVar21 & 7);
        uVar32 = *(uint32_t *)(in_RAX + 0x40 + uVar34 * 4);
        uVar25 = (uint64_t)(uVar32 >> 3 & 0xffffffe0);
        *(int *)(in_RAX + 0x40 + uVar34 * 4) =
             (int)((*(int64_t *)(lVar5 + 8 + uVar21) * -0x30e4432345000000 ^
                   *(uint64_t *)(in_RAX + 0x60)) >> (0x38U - (char)uVar4 & 0x3f));
        iVar16 = 0x1f;
        if ((*(uint8_t *)(lVar36 + uVar25) & 0x1f) != 1) {
          iVar16 = 0;
        }
        uVar38 = (uint32_t)(*(uint8_t *)(lVar36 + uVar25) - 1 & 0x1f) + iVar16;
        *(char *)(lVar36 + uVar25) = (char)uVar38;
        *(char *)((uint64_t)uVar38 + lVar36 + uVar25) = (char)uVar32;
        *(uint32_t *)(lVar35 + uVar25 * 4 + (uint64_t)uVar38 * 4) = (uint32_t)uVar21;
        uVar21 = uVar21 + 1;
      } while ((uStack_c0 & 0xffffffff) != uVar21);
    }
    *(uint32_t *)(in_RAX + 0x2c) = uVar18;
    uVar32 = *(uint32_t *)(in_RAX + 0x40 + (uint64_t)(uVar18 & 7) * 4);
    *(int *)(in_RAX + 0x40 + (uint64_t)(uVar18 & 7) * 4) =
         (int)((*(int64_t *)(lStack_80 + 8 + (uStack_c0 & 0xffffffff)) * -0x30e4432345000000 ^
               uStack_90) >> (0x38U - cVar44 & 0x3f));
  }
  else {
    *(uint32_t *)(in_RAX + 0x2c) = uVar18;
    uVar32 = (uint32_t)((uStack_90 ^ uVar21 * -0x30e4432345000000) >> (0x38U - cVar44 & 0x3f));
  }
  uVar21 = (uint64_t)(uVar32 >> 3 & 0xffffffe0);
  lVar36 = uStack_b0 + uVar21 * 4;
  uVar52 = (uint8_t)(uVar32 >> 0x18);
  uVar50 = (uint8_t)(uVar32 >> 0x10);
  uVar48 = (uint8_t)(uVar32 >> 8);
  auVar45._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar52,uVar52),uVar50),CONCAT14(uVar50,uVar32)) >> 0x20);
  auVar45[3] = uVar48;
  auVar45[2] = uVar48;
  auVar45[0] = (uint8_t)uVar32;
  auVar45[1] = auVar45[0];
  auVar45._8_8_ = 0;
  *(int *)(in_RAX + 0x68) = *(int *)(in_RAX + 0x68) + uVar32;
  auVar46 = pshuflw(auVar45,auVar45,0);
  bVar17 = *(uint8_t *)(lVar30 + uVar21);
  pcVar2 = (char *)(lVar30 + uVar21);
  pcVar3 = (char *)(lVar30 + 0x10 + uVar21);
  cVar44 = auVar46[0];
  auVar40[0] = -(*pcVar2 == cVar44);
  cVar49 = auVar46[1];
  auVar40[1] = -(pcVar2[1] == cVar49);
  cVar51 = auVar46[2];
  auVar40[2] = -(pcVar2[2] == cVar51);
  cVar53 = auVar46[3];
  auVar40[3] = -(pcVar2[3] == cVar53);
  auVar40[4] = -(pcVar2[4] == cVar44);
  auVar40[5] = -(pcVar2[5] == cVar49);
  auVar40[6] = -(pcVar2[6] == cVar51);
  auVar40[7] = -(pcVar2[7] == cVar53);
  auVar40[8] = -(pcVar2[8] == cVar44);
  auVar40[9] = -(pcVar2[9] == cVar49);
  auVar40[10] = -(pcVar2[10] == cVar51);
  auVar40[0xb] = -(pcVar2[0xb] == cVar53);
  auVar40[0xc] = -(pcVar2[0xc] == cVar44);
  auVar40[0xd] = -(pcVar2[0xd] == cVar49);
  auVar40[0xe] = -(pcVar2[0xe] == cVar51);
  auVar40[0xf] = -(pcVar2[0xf] == cVar53);
  auVar46[0] = -(*pcVar3 == cVar44);
  auVar46[1] = -(pcVar3[1] == cVar49);
  auVar46[2] = -(pcVar3[2] == cVar51);
  auVar46[3] = -(pcVar3[3] == cVar53);
  auVar46[4] = -(pcVar3[4] == cVar44);
  auVar46[5] = -(pcVar3[5] == cVar49);
  auVar46[6] = -(pcVar3[6] == cVar51);
  auVar46[7] = -(pcVar3[7] == cVar53);
  auVar46[8] = -(pcVar3[8] == cVar44);
  auVar46[9] = -(pcVar3[9] == cVar49);
  auVar46[10] = -(pcVar3[10] == cVar51);
  auVar46[0xb] = -(pcVar3[0xb] == cVar53);
  auVar46[0xc] = -(pcVar3[0xc] == cVar44);
  auVar46[0xd] = -(pcVar3[0xd] == cVar49);
  auVar46[0xe] = -(pcVar3[0xe] == cVar51);
  auVar46[0xf] = -(pcVar3[0xf] == cVar53);
  uVar38 = CONCAT22((uint16_t)(SUB161(auVar46 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar46[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar40 >> 7,0) & 1) |
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
                    (uint16_t)(auVar40[0xf] >> 7) << 0xf);
  uVar32 = (uint32_t)bVar17;
  puStack_c8 = in_R10;
  if (uVar38 != 0) {
    uVar34 = (uint64_t)(uVar38 >> (bVar17 & 0x1f) | uVar38 << 0x20 - (bVar17 & 0x1f));
    uVar25 = 0;
    do {
      iVar16 = 0;
      for (uVar37 = uVar34; (uVar37 & 1) == 0; uVar37 = uVar37 >> 1 | 0x8000000000000000) {
        iVar16 = iVar16 + 1;
      }
      uVar38 = iVar16 + uVar32 & 0x1f;
      if (uVar38 != 0) {
        uVar38 = *(uint32_t *)(lVar36 + (uint64_t)uVar38 * 4);
        if (uVar38 < uVar33) goto LAB_7fffa560f8ff;
        iVar29 = iVar29 + -1;
        auStack_1c8[uVar25] = uVar38;
        uVar25 = uVar25 + 1;
      }
      uVar34 = uVar34 & uVar34 - 1;
      if ((uVar34 == 0) || (iVar29 == 0)) goto LAB_7fffa560f8ff;
    } while( true );
  }
  uVar25 = 0;
LAB_7fffa560f8ff:
  puVar15 = puStack_50;
  puStack_a8 = (uint64_t *)(lVar23 + uVar24);
  uStack_b0 = CONCAT44(uStack_b0._4_4_,in_stack_00000028) | 1;
  lVar23 = 0x1f;
  if ((uVar32 & 0x1f) != 1) {
    lVar23 = 0;
  }
  uVar38 = in_stack_00000028 + 0x78e971dd ^ 0x9e3ffa8f;
  uVar32 = -uVar32;
  if ((uint64_t)((in_stack_00000028 | 1) * 0x2584065) <=
      (uint64_t)(int64_t)(int)(0x26e5410d - in_stack_00000028 ^ 0x9fe1d2d1)) {
    uVar32 = bVar17 - 1;
  }
  lVar23 = lVar23 + (uint64_t)(uVar32 & 0x1f);
  *(uint8_t *)(lVar30 + uVar21) = (char)lVar23;
  ((uint8_t *)(lVar30 + uVar21))[lVar23] = auVar45[0];
  iVar16 = *(int *)(in_RAX + 0x2c);
  *(int *)(in_RAX + 0x2c) = iVar16 + 1;
  *(int *)(lVar36 + lVar23 * 4) = iVar16;
  uVar21 = 3;
  if (uVar25 != (uVar38 << 5 | uVar38 >> 0x1b)) {
    puVar1 = (uint64_t *)((int64_t)puStack_c8 - 7);
    iVar16 = (int)uStack_c0 + 3;
    uStack_60 = CONCAT44(uStack_60._4_4_,iVar16);
    puStack_58 = puStack_50 + 1;
    lStack_48 = lStack_80 + 8;
    uVar24 = 0;
    uVar34 = 3;
    do {
      uVar32 = auStack_1c8[uVar24];
      puVar20 = (uint64_t *)(lStack_80 + (uint64_t)uVar32);
      if (*(int *)((uVar34 - 3) + (int64_t)puVar20) ==
          *(int *)((int64_t)puStack_50 + (uVar34 - 3))) {
        if (puStack_50 < puVar1) {
          if (*puVar20 == *puStack_50) {
            puVar20 = (uint64_t *)(lStack_80 + 8 + (uint64_t)uVar32);
            lVar23 = 8;
            puVar22 = puStack_58;
            if (puStack_58 < puVar1) {
LAB_7fffa560fba0:
              if (*puVar20 == *puVar22) goto code_r0x7fffa560fbab;
              uVar38 = 0;
              for (uVar21 = *puVar20 ^ *puVar22; (uVar21 & 1) == 0;
                  uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                uVar38 = uVar38 + 1;
              }
              uVar21 = (uint64_t)(uVar38 >> 3) + lVar23;
              goto joined_r0x7fffa560fbd2;
            }
            goto LAB_7fffa560faa3;
          }
          uVar38 = 0;
          for (uVar21 = *puVar20 ^ *puStack_50; (uVar21 & 1) == 0;
              uVar21 = uVar21 >> 1 | 0x8000000000000000) {
            uVar38 = uVar38 + 1;
          }
          uVar21 = (uint64_t)(uVar38 >> 3);
        }
        else {
          puVar22 = puStack_50;
LAB_7fffa560faa3:
          if ((puVar22 < (uint64_t *)((int64_t)puStack_c8 - 3U)) &&
             ((int)*puVar20 == (int)*puVar22)) {
            puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
            puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
          }
          if ((puVar22 < (uint64_t *)((int64_t)puStack_c8 - 1U)) &&
             ((short)*puVar20 == (short)*puVar22)) {
            puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
            puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
          }
          bVar8 = (int64_t)puStack_c8 < (int64_t)puVar22;
          if (0x7011a014 - in_stack_00000028 < (in_stack_00000028 ^ 0x2ef6bb54) + 0x745dcefe) {
            bVar8 = puVar22 < puStack_c8;
          }
          if (bVar8) {
            puVar22 = (uint64_t *)
                      ((int64_t)puVar22 + (uint64_t)((char)*puVar20 == (char)*puVar22));
          }
          uVar21 = (int64_t)puVar22 - (int64_t)puStack_50;
        }
joined_r0x7fffa560fbd2:
        if (uVar34 < uVar21) {
          *puStack_70 = (uint64_t)(iVar16 - uVar32);
          uVar34 = uVar21;
          if ((uint64_t *)((int64_t)puStack_50 + uVar21) == puStack_c8) break;
        }
      }
      uVar21 = uVar34;
      uVar32 = (uint32_t)uVar24;
      uVar24 = uVar24 + 1;
      if ((uint32_t)((int)uStack_b0 * 0x7278fa9a) < 0xc0000420) {
        uVar24 = (uint64_t)(uVar32 & 1);
      }
      uVar34 = uVar21;
    } while (uVar24 != uVar25);
  }
  auVar40 = pshuflw(ZEXT216(CONCAT11((uint8_t)uStack_b8,(uint8_t)uStack_b8)),
                    ZEXT216(CONCAT11((uint8_t)uStack_b8,(uint8_t)uStack_b8)),0);
  bVar17 = auVar40[0];
  auVar47[0] = -(*(uint8_t *)puStack_a8 == bVar17);
  bVar41 = auVar40[1];
  auVar47[1] = -(*(uint8_t *)((int64_t)puStack_a8 + 1) == bVar41);
  bVar42 = auVar40[2];
  auVar47[2] = -(*(uint8_t *)((int64_t)puStack_a8 + 2) == bVar42);
  bVar43 = auVar40[3];
  auVar47[3] = -(*(uint8_t *)((int64_t)puStack_a8 + 3) == bVar43);
  auVar47[4] = -(*(uint8_t *)((int64_t)puStack_a8 + 4) == bVar17);
  auVar47[5] = -(*(uint8_t *)((int64_t)puStack_a8 + 5) == bVar41);
  auVar47[6] = -(*(uint8_t *)((int64_t)puStack_a8 + 6) == bVar42);
  auVar47[7] = -(*(uint8_t *)((int64_t)puStack_a8 + 7) == bVar43);
  auVar47[8] = -(*(uint8_t *)((int64_t)puStack_a8 + 8) == bVar17);
  auVar47[9] = -(*(uint8_t *)((int64_t)puStack_a8 + 9) == bVar41);
  auVar47[10] = -(*(uint8_t *)((int64_t)puStack_a8 + 10) == bVar42);
  auVar47[0xb] = -(*(uint8_t *)((int64_t)puStack_a8 + 0xb) == bVar43);
  auVar47[0xc] = -(*(uint8_t *)((int64_t)puStack_a8 + 0xc) == bVar17);
  auVar47[0xd] = -(*(uint8_t *)((int64_t)puStack_a8 + 0xd) == bVar41);
  auVar47[0xe] = -(*(uint8_t *)((int64_t)puStack_a8 + 0xe) == bVar42);
  auVar47[0xf] = -(*(uint8_t *)((int64_t)puStack_a8 + 0xf) == bVar43);
  auVar39[0] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x10) == bVar17);
  auVar39[1] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x11) == bVar41);
  auVar39[2] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x12) == bVar42);
  auVar39[3] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x13) == bVar43);
  auVar39[4] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x14) == bVar17);
  auVar39[5] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x15) == bVar41);
  auVar39[6] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x16) == bVar42);
  auVar39[7] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x17) == bVar43);
  auVar39[8] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x18) == bVar17);
  auVar39[9] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x19) == bVar41);
  auVar39[10] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x1a) == bVar42);
  auVar39[0xb] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x1b) == bVar43);
  auVar39[0xc] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x1c) == bVar17);
  auVar39[0xd] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x1d) == bVar41);
  auVar39[0xe] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x1e) == bVar42);
  auVar39[0xf] = -(*(uint8_t *)((int64_t)puStack_a8 + 0x1f) == bVar43);
  uVar32 = CONCAT22((uint16_t)(SUB161(auVar39 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar39[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar47 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar47[0xf] >> 7) << 0xf);
  if (uVar32 == 0 || iVar29 == 0) {
    return uVar21;
  }
  puStack_58 = (uint64_t *)(lStack_80 + uStack_78);
  uVar38 = *(uint32_t *)(puStack_a0 + 3);
  bVar17 = *(uint8_t *)puStack_a8;
  pcVar2 = (char *)*puStack_a0;
  lVar23 = puStack_a0[1];
  lStack_48 = CONCAT44(lStack_48._4_4_,(int)pcVar2 - (int)lVar23);
  bVar41 = bVar17 & 0x1f;
  uVar25 = (uint64_t)(uVar32 >> bVar41 | uVar32 << 0x20 - bVar41);
  uVar24 = 0;
  do {
    iVar16 = 0;
    for (uVar34 = uVar25; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x8000000000000000) {
      iVar16 = iVar16 + 1;
    }
    uVar32 = iVar16 + (uint32_t)bVar17 & 0x1f;
    if (uVar32 != 0) {
      uVar32 = *(uint32_t *)((int64_t)puStack_68 + (int64_t)pcStack_98 * 4 + (uint64_t)uVar32 * 4);
      if (uVar32 < uVar38) {
LAB_7fffa560fce0:
        if (uVar24 != (0x88b2 - in_stack_00000028 & 0xffff)) {
          puStack_a0 = (uint64_t *)((int64_t)puStack_c8 - 3U);
          puStack_68 = (uint64_t *)((int64_t)puStack_c8 - 1U);
          puStack_a8 = (uint64_t *)((int64_t)puStack_c8 + -7);
          puVar1 = (uint64_t *)((int64_t)puVar15 + 4);
          uStack_60._0_4_ = (int)*puVar15;
          uStack_b8 = lVar23 + 0xc;
          lStack_80 = uStack_78 + lStack_80 + 8;
          pcStack_98 = pcVar2;
          uVar25 = 0;
          do {
            uVar34 = (uint64_t)auStack_1c8[uVar25];
            if (*(int *)(lVar23 + uVar34) == (int)uStack_60) {
              puVar22 = (uint64_t *)(lVar23 + uVar34 + 4);
              puVar20 = (uint64_t *)(((int64_t)pcVar2 - (int64_t)puVar22) + (int64_t)puVar1);
              if (puStack_c8 <= puVar20 ==
                  (uint32_t)((int)uStack_b0 * 0x78850f41) <
                  (0xff860c46U >> (bVar9 & 0x1f) | -0x79f3ba << 0x20 - (bVar9 & 0x1f))) {
                puVar20 = puStack_c8;
              }
              puVar31 = puVar1;
              puVar27 = puVar22;
              if (puVar1 < (uint64_t *)((int64_t)puVar20 - 7U)) {
                uVar37 = *puVar1;
                uVar6 = *puVar22;
                if (uVar6 == uVar37) {
                  lVar30 = lVar23 + 0xc + uVar34;
                  lVar36 = 0;
                  do {
                    puVar31 = (uint64_t *)((int64_t)puVar15 + lVar36 + 0xc);
                    if ((uint64_t *)((int64_t)puVar20 - 7U) <= puVar31) {
                      puVar27 = (uint64_t *)(lVar30 + lVar36);
                      goto LAB_7fffa560fefc;
                    }
                    uVar34 = *(uint64_t *)(lVar30 + lVar36);
                    lVar36 = lVar36 + 8;
                  } while (uVar34 == *puVar31);
                  uVar32 = 0;
                  for (uVar34 = uVar34 ^ *puVar31; (uVar34 & 1) == 0;
                      uVar34 = uVar34 >> 1 | 0x8000000000000000) {
                    uVar32 = uVar32 + 1;
                  }
                  uVar34 = (uint64_t)(uVar32 >> 3) + lVar36;
                }
                else {
                  uVar34 = uVar37 ^ uVar6;
                  if ((-0x14085e5b << (bVar9 & 0x1f) | 0xebf7a1a5U >> 0x20 - (bVar9 & 0x1f)) <
                      ((in_stack_00000028 + 0x799733) * 0x20000 |
                      in_stack_00000028 + 0x799733 >> 0xf)) {
                    uVar34 = uVar37 | uVar6;
                  }
                  uVar32 = 0;
                  for (; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x8000000000000000) {
                    uVar32 = uVar32 + 1;
                  }
                  uVar34 = (uint64_t)(uVar32 >> 3);
                }
              }
              else {
LAB_7fffa560fefc:
                if ((puVar31 < (uint64_t *)((int64_t)puVar20 - 3U)) &&
                   ((int)*puVar27 == (int)*puVar31)) {
                  puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
                  puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
                }
                if ((puVar31 < (uint64_t *)((int64_t)puVar20 - 1U)) &&
                   ((short)*puVar27 == (short)*puVar31)) {
                  puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
                  puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
                }
                if (puVar31 < puVar20) {
                  puVar31 = (uint64_t *)
                            ((int64_t)puVar31 + (uint64_t)((char)*puVar27 == (char)*puVar31));
                }
                uVar34 = (int64_t)puVar31 - (int64_t)puVar1;
              }
              if ((char *)((int64_t)puVar22 + uVar34) == pcVar2) {
                puVar20 = (uint64_t *)((int64_t)puVar1 + uVar34);
                puVar22 = puVar20;
                puVar31 = puStack_58;
                if (puVar20 < puStack_a8) {
                  if (*puStack_58 == *puVar20) {
                    lVar30 = 0;
                    do {
                      puVar22 = (uint64_t *)((int64_t)puVar15 + lVar30 + uVar34 + 0xc);
                      if (puStack_a8 <= puVar22) {
                        puVar31 = (uint64_t *)(lVar30 + lStack_80);
                        goto LAB_7fffa5610048;
                      }
                      uVar37 = *(uint64_t *)(lStack_80 + lVar30);
                      uVar6 = *puVar22;
                      lVar30 = lVar30 + 8;
                    } while (uVar37 == uVar6);
                    uVar28 = uVar37 & uVar6;
                    if ((0x4d7a77e7U >> (bVar9 & 0x1f) | 0x4d7a77e7 << 0x20 - (bVar9 & 0x1f)) !=
                        0x530c7075) {
                      uVar28 = uVar6 ^ uVar37;
                    }
                    uVar32 = 0;
                    for (; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x8000000000000000) {
                      uVar32 = uVar32 + 1;
                    }
                    uVar37 = (uint64_t)(uVar32 >> 3) + lVar30;
                  }
                  else {
                    uVar32 = 0;
                    for (uVar37 = *puVar20 ^ *puStack_58; (uVar37 & 1) == 0;
                        uVar37 = uVar37 >> 1 | 0x8000000000000000) {
                      uVar32 = uVar32 + 1;
                    }
                    uVar37 = (uint64_t)(uVar32 >> 3);
                  }
                }
                else {
LAB_7fffa5610048:
                  if ((puVar22 < (uint64_t *)((int64_t)puStack_c8 - 3U)) &&
                     ((int)*puVar31 == (int)*puVar22)) {
                    puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
                    puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
                  }
                  if ((puVar22 < (uint64_t *)((int64_t)puStack_c8 - 1U)) &&
                     ((short)*puVar31 == (short)*puVar22)) {
                    puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
                    puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
                  }
                  if (puVar22 < puStack_c8) {
                    puVar22 = (uint64_t *)
                              ((int64_t)puVar22 + (uint64_t)((char)*puVar31 == (char)*puVar22));
                  }
                  uVar37 = (int64_t)puVar22 - (int64_t)puVar20;
                  if (in_stack_00000028 != 0x255688b2) {
                    uVar37 = (uint64_t)puVar22 & (uint64_t)puVar20;
                  }
                }
                uVar34 = uVar34 + uVar37;
              }
              uVar34 = uVar34 + 4;
              if (uVar21 < uVar34) {
                *puStack_70 = (uint64_t)
                              (((((int)uStack_c0 - (int)uStack_78) + (int)lStack_48) -
                               auStack_1c8[uVar25]) + 3);
                if ((uint64_t *)((int64_t)puStack_50 + uVar34) == puStack_c8) {
                  return uVar34;
                }
                uStack_60._0_4_ = (int)*puStack_50;
                uVar21 = uVar34;
              }
            }
            bVar8 = uVar25 + 1 == uVar24;
            if ((-0x4ab54775 - in_stack_00000028) * -0x693e9829 <= in_stack_00000028 + 0x1e7169cf) {
              bVar8 = uVar25 < uVar24;
            }
            uVar25 = uVar25 + 1;
          } while (!bVar8);
        }
                    /* WARNING: Read-only address (ram,0x7fffa56bb100) is written */
        return uVar21;
      }
      iVar29 = iVar29 + -1;
      auStack_1c8[uVar24] = uVar32;
      uVar24 = uVar24 + 1;
    }
    uVar25 = uVar25 & uVar25 - 1;
    if ((uVar25 == 0) || (iVar29 == 0)) goto LAB_7fffa560fce0;
  } while( true );
code_r0x7fffa560fbab:
  puVar22 = puVar22 + 1;
  lVar23 = lVar23 + 8;
  puVar20 = puVar20 + 1;
  if (puVar1 <= puVar22) goto LAB_7fffa560faa3;
  goto LAB_7fffa560fba0;
}


// ============================================================================
// Function : FUN_7fffa5610170  |  RVA: 0xea0170  |  Size: 236 bytes
// Callers  : FUN_7fffa5215120@0xaa5120, FUN_7fffa54037a0@0xc937a0, FUN_7fffa507ae2a@0x90ae2a
// Callees  : none
// ============================================================================
uint32_t * FUN_7fffa5610170(uint32_t *param_1,int64_t param_2,int64_t param_3)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint8_t *pbVar3;
  uint8_t *pbVar4;
  uint32_t *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    *param_1 = 0;
    return param_1;
  }
  pbVar3 = (uint8_t *)(param_3 + *(int *)(param_2 + 0xc));
  *(uint8_t **)(param_1 + 2) = pbVar3;
  bVar1 = (&UNK_7fffa56b3160)[*pbVar3 & 0xf];
  pbVar3 = pbVar3 + -(int64_t)(char)(&UNK_7fffa56b3150)[*pbVar3 & 0xf];
  uVar2 = *(uint32_t *)(pbVar3 + -4);
  *(uint8_t **)(param_1 + 2) = pbVar3;
  *param_1 = uVar2 >> (bVar1 & 0x1f);
  *(uint8_t **)(param_1 + 4) = pbVar3;
  bVar1 = (&UNK_7fffa56b3160)[*pbVar3 & 0xf];
  pbVar3 = pbVar3 + -(int64_t)(char)(&UNK_7fffa56b3150)[*pbVar3 & 0xf];
  uVar2 = *(uint32_t *)(pbVar3 + -4);
  *(uint8_t **)(param_1 + 2) = pbVar3;
  param_1[6] = uVar2 >> (bVar1 & 0x1f);
  pbVar4 = pbVar3 + -(int64_t)(char)(&UNK_7fffa56b3150)[*pbVar3 & 0xf];
  param_1[7] = *(uint32_t *)(pbVar4 + -4) >> ((&UNK_7fffa56b3160)[*pbVar3 & 0xf] & 0x1f);
  *(uint8_t **)(param_1 + 2) = pbVar4;
  puVar5 = (uint32_t *)(pbVar4 + -(int64_t)(char)(&UNK_7fffa56b3150)[*pbVar4 & 0xf]);
  param_1[8] = puVar5[-1] >> ((&UNK_7fffa56b3160)[*pbVar4 & 0xf] & 0x1f);
  *(uint32_t **)(param_1 + 2) = puVar5;
  uVar2 = *puVar5;
  *(uint32_t **)(param_1 + 2) = puVar5 + 1;
  param_1[9] = uVar2;
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa5613f70  |  RVA: 0xea3f70  |  Size: 1859 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t * FUN_7fffa5613f70(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  bool bVar11;
  uint32_t in_EAX;
  uint64_t *puVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint64_t *puVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  int iVar21;
  char *pcVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  uint64_t *puVar26;
  int in_R10D;
  uint32_t in_register_00000094;
  int64_t in_R11;
  uint64_t *puVar27;
  int64_t lVar28;
  uint64_t *puVar29;
  uint32_t uVar30;
  uint32_t uVar31;
  int64_t lVar32;
  uint32_t uVar33;
  
  uVar23 = (param_3 << 4 | param_3 >> 0x3c) ^ (param_3 << 0x21 | param_3 >> 0x1f) ^
           (param_3 << 0x38 | param_3 >> 8);
  param_2 = (param_2 << 0x25 | param_2 >> 0x1b) ^ (param_2 << 0x3d | param_2 >> 3) ^ param_2;
  param_2 = (param_2 << 10 | param_2 >> 0x36) ^ (param_2 << 0x3a | param_2 >> 6) ^ param_2;
  uVar23 = (uVar23 << 0x18 | uVar23 >> 0x28) ^ (uVar23 << 0x12 | uVar23 >> 0x2e) ^ uVar23;
  uVar23 = (uVar23 << 0x24 | uVar23 >> 0x1c) ^ (uVar23 << 0x30 | uVar23 >> 0x10) ^ uVar23;
  uVar23 = (uVar23 << 0x20 | uVar23 >> 0x20) ^ (uVar23 << 8 | uVar23 >> 0x38) ^ uVar23;
  puVar26 = (uint64_t *)(uVar23 << 0x30 | uVar23 >> 0x10);
  uVar18 = *(uint32_t *)(in_R11 + 0x2c);
  uVar23 = (uint64_t)uVar18;
  lVar6 = *(int64_t *)(in_R11 + 8);
  bVar2 = *(uint8_t *)(in_R11 + 0x104);
  uVar30 = in_R10D - (int)lVar6;
  uVar31 = 1 << (bVar2 & 0x1f);
  iVar21 = 1 << (*(uint8_t *)(in_R11 + 0x10c) & 0x1f);
  uVar3 = *(uint32_t *)(in_R11 + 0x18);
  puVar15 = (uint64_t *)((uint64_t)uVar3 + lVar6);
  uVar14 = uVar30;
  if (uVar30 < uVar18) {
    uVar14 = uVar18;
  }
  uVar18 = uVar30 - uVar31;
  if (uVar30 < uVar31) {
    uVar18 = 0;
  }
  uVar33 = 1 << (uint64_t)*(uint32_t *)(in_R11 + 0x100);
  uVar4 = *(uint32_t *)(in_R11 + 0x1c);
  uVar13 = 0x40 - *(int *)(in_R11 + 0x108);
  uVar19 = uVar30 - uVar33;
  if (uVar30 - uVar4 <= uVar33) {
    uVar19 = uVar4;
  }
  if (*(int *)(in_R11 + 0x28) != 0) {
    uVar19 = uVar4;
  }
  lVar7 = *(int64_t *)(in_R11 + 0x10);
  lVar8 = *(int64_t *)(in_R11 + 0x80);
  puVar9 = *(uint64_t **)(in_R11 + 0x70);
  pcVar22 = (char *)(lVar7 + (uint64_t)uVar3);
  iVar5 = *(int *)(in_R11 + 300);
  for (; uVar14 != uVar23; uVar23 = uVar23 + 1) {
    uVar20 = (uint64_t)(*(int64_t *)(lVar6 + uVar23) * -0x30e4432345000000) >>
             ((uint8_t)uVar13 & 0x3f);
    *(uint32_t *)(lVar8 + (uint64_t)((uint32_t)uVar23 & ~(-1 << (bVar2 & 0x1f))) * 4) =
         *(uint32_t *)((int64_t)puVar9 + uVar20 * 4);
    *(uint32_t *)((int64_t)puVar9 + uVar20 * 4) = (uint32_t)uVar23;
    if (iVar5 != 0) break;
  }
  *(uint32_t *)(in_R11 + 0x2c) = uVar30;
  uVar14 = *(uint32_t *)((int64_t)puVar9 +
                    ((uint64_t)
                     (*(int64_t *)CONCAT44(in_register_00000094,in_R10D) * -0x30e4432345000000) >>
                    (uint64_t)uVar13) * 4);
  if (uVar14 < uVar19) {
    return puVar9;
  }
  puVar9 = (uint64_t *)(CONCAT44(in_register_00000094,in_R10D) + 4);
  puVar1 = (uint64_t *)((int64_t)puVar26 - 7);
  uVar23 = 3;
  do {
    uVar20 = (uint64_t)uVar14;
    if (uVar14 < uVar3) {
      puVar12 = (uint64_t *)(uint64_t)*(uint32_t *)(lVar7 + uVar20);
      if (*(uint32_t *)(lVar7 + uVar20) == *(uint32_t *)CONCAT44(in_register_00000094,in_R10D)) {
        lVar28 = lVar7 + uVar20;
        puVar25 = (uint64_t *)(lVar28 + 4);
        puVar27 = (uint64_t *)(((int64_t)pcVar22 - (int64_t)puVar25) + (int64_t)puVar9);
        if (puVar26 <= puVar27) {
          puVar27 = puVar26;
        }
        puVar12 = puVar9;
        puVar29 = puVar9;
        puVar24 = puVar25;
        if (puVar9 < (uint64_t *)((int64_t)puVar27 - 7U)) {
          uVar20 = *puVar9;
          puVar12 = (uint64_t *)
                    (uint64_t)((0x863e9c0e - in_EAX) * 8 | 0x863e9c0e - in_EAX >> 0x1d);
          uVar16 = *puVar25;
          bVar11 = (int64_t)uVar16 < (int64_t)uVar20;
          if ((uint64_t *)(uint64_t)(in_EAX ^ 0x5df6424f) < puVar12) {
            bVar11 = uVar16 == uVar20;
          }
          if (bVar11) {
            lVar32 = 0xc;
LAB_7fffa56142d0:
            puVar29 = (uint64_t *)(CONCAT44(in_register_00000094,in_R10D) + lVar32);
            if (puVar29 < (uint64_t *)((int64_t)puVar27 - 7U)) {
              puVar12 = *(uint64_t **)(lVar28 + lVar32);
              if (puVar12 == (uint64_t *)*puVar29) goto code_r0x7fffa56142fc;
              uVar4 = 0;
              puVar12 = (uint64_t *)((uint64_t)puVar12 ^ *puVar29);
              for (puVar27 = puVar12; ((uint64_t)puVar27 & 1) == 0;
                  puVar27 = (uint64_t *)((uint64_t)puVar27 >> 1 | 0x8000000000000000)) {
                uVar4 = uVar4 + 1;
              }
              uVar20 = ((uint64_t)(uVar4 >> 3) + lVar32) - 4;
              goto LAB_7fffa56144af;
            }
            puVar24 = (uint64_t *)(lVar28 + lVar32);
            goto LAB_7fffa56143bf;
          }
          uVar4 = 0;
          for (uVar20 = uVar20 ^ uVar16; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar4 = uVar4 + 1;
          }
          uVar20 = (uint64_t)(uVar4 >> 3);
        }
        else {
LAB_7fffa56143bf:
          if ((puVar29 < (uint64_t *)((int64_t)puVar27 - 3U)) &&
             (puVar12 = (uint64_t *)(uint64_t)(uint32_t)*puVar24, (uint32_t)*puVar24 == (uint32_t)*puVar29)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
          }
          if ((puVar29 < (uint64_t *)((int64_t)puVar27 - 1U)) &&
             (puVar12 = (uint64_t *)(uint64_t)(uint16_t)*puVar24,
             (uint16_t)*puVar24 == (uint16_t)*puVar29)) {
            puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
          }
          if (puVar29 < puVar27) {
            puVar12 = (uint64_t *)(uint64_t)((char)*puVar24 == (char)*puVar29);
            puVar29 = (uint64_t *)((int64_t)puVar29 + (int64_t)puVar12);
          }
          uVar20 = (int64_t)puVar29 - (int64_t)puVar9;
        }
LAB_7fffa56144af:
        if ((char *)((int64_t)puVar25 + uVar20) == pcVar22) {
          puVar25 = (uint64_t *)((int64_t)puVar9 + uVar20);
          puVar12 = (uint64_t *)0x0;
          puVar27 = puVar25;
          puVar29 = puVar15;
          if (puVar25 < puVar1) {
            if (*puVar15 == *puVar25) {
              puVar27 = (uint64_t *)(CONCAT44(in_register_00000094,in_R10D) + 0xc + uVar20);
              lVar28 = 8;
              if (puVar27 < puVar1) {
LAB_7fffa5614510:
                uVar16 = *(uint64_t *)((int64_t)puVar15 + lVar28);
                uVar10 = *puVar27;
                if (uVar16 == uVar10) goto code_r0x7fffa5614521;
                puVar12 = (uint64_t *)(uint64_t)(0x70fc9cee - in_EAX);
                uVar17 = uVar10 + uVar16;
                if (((0x70fc9cee - in_EAX) * 0x3b2f3e3b ^ 0xca78622e) <= (in_EAX ^ 0x77ecb2d8)) {
                  uVar17 = uVar16 ^ uVar10;
                }
                uVar4 = 0;
                for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                  uVar4 = uVar4 + 1;
                }
                uVar16 = (uint64_t)(uVar4 >> 3) + lVar28;
                goto LAB_7fffa561464d;
              }
LAB_7fffa5614533:
              puVar29 = (uint64_t *)(lVar28 + (int64_t)puVar15);
              goto LAB_7fffa5614536;
            }
            uVar4 = 0;
            for (uVar16 = *puVar25 ^ *puVar15; (uVar16 & 1) == 0;
                uVar16 = uVar16 >> 1 | 0x8000000000000000) {
              uVar4 = uVar4 + 1;
            }
            uVar16 = (uint64_t)(uVar4 >> 3);
          }
          else {
LAB_7fffa5614536:
            if ((puVar27 < (uint64_t *)((int64_t)puVar26 - 3U)) &&
               ((uint32_t)*puVar29 == (uint32_t)*puVar27)) {
              puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
              puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            }
            puVar12 = (uint64_t *)0x0;
            if ((puVar27 < (uint64_t *)((int64_t)puVar26 - 1U)) &&
               (puVar12 = (uint64_t *)(uint64_t)(uint16_t)*puVar29,
               (uint16_t)*puVar29 == (uint16_t)*puVar27)) {
              puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
              puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
            }
            if (puVar27 < puVar26) {
              puVar12 = (uint64_t *)(uint64_t)((char)*puVar29 == (char)*puVar27);
              puVar27 = (uint64_t *)((int64_t)puVar27 + (int64_t)puVar12);
            }
            uVar16 = (int64_t)puVar27 - (int64_t)puVar25;
          }
LAB_7fffa561464d:
          uVar20 = uVar20 + uVar16;
        }
        uVar20 = uVar20 + 4;
joined_r0x7fffa56145e6:
        if (uVar23 < uVar20) goto LAB_7fffa5614659;
      }
    }
    else {
      puVar25 = (uint64_t *)(lVar6 + uVar20);
      uVar4 = *(uint32_t *)((uVar23 - 3) + (int64_t)puVar25);
      puVar12 = (uint64_t *)(uint64_t)uVar4;
      if (uVar4 != *(uint32_t *)(CONCAT44(in_register_00000094,in_R10D) + -3 + uVar23))
      goto LAB_7fffa5614670;
      if ((uint64_t *)CONCAT44(in_register_00000094,in_R10D) < puVar1) {
        if (*puVar25 == *(uint64_t *)CONCAT44(in_register_00000094,in_R10D)) {
          lVar28 = 8;
LAB_7fffa5614390:
          puVar27 = (uint64_t *)(CONCAT44(in_register_00000094,in_R10D) + lVar28);
          if (puVar27 < puVar1) {
            if (*(uint64_t *)((int64_t)puVar25 + lVar28) == *puVar27) break;
            puVar12 = (uint64_t *)0xd1233e2;
            uVar4 = 0;
            for (uVar20 = *(uint64_t *)((int64_t)puVar25 + lVar28) ^ *puVar27; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar4 = uVar4 + 1;
            }
            uVar16 = (uint64_t)(uVar4 >> 3) + lVar28;
            bVar2 = (uint8_t)in_EAX & 0x1f;
            uVar20 = uVar16 + CONCAT44(in_register_00000094,in_R10D) ^
                     CONCAT44(in_register_00000094,in_R10D);
            if (0x72ebcf41 < (-0x68584a46 << bVar2 | 0x97a7b5baU >> 0x20 - bVar2)) {
              uVar20 = uVar16;
            }
            goto joined_r0x7fffa56145e6;
          }
          puVar25 = (uint64_t *)((int64_t)puVar25 + lVar28);
          goto joined_r0x7fffa561435b;
        }
        uVar4 = 0;
        for (uVar20 = *puVar25 ^ *(uint64_t *)CONCAT44(in_register_00000094,in_R10D);
            (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x8000000000000000) {
          uVar4 = uVar4 + 1;
        }
        uVar20 = (uint64_t)(uVar4 >> 3);
      }
      else {
        puVar27 = (uint64_t *)CONCAT44(in_register_00000094,in_R10D);
joined_r0x7fffa561435b:
        if ((puVar27 < (uint64_t *)((int64_t)puVar26 - 3U)) && ((uint32_t)*puVar25 == (uint32_t)*puVar27))
        {
          puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
          puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
        }
        if ((puVar27 < (uint64_t *)((int64_t)puVar26 - 1U)) &&
           ((uint16_t)*puVar25 == (uint16_t)*puVar27)) {
          puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
          puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
        }
        puVar12 = (uint64_t *)0x0;
        if (puVar27 < puVar26) {
          puVar27 = (uint64_t *)((int64_t)puVar27 + (uint64_t)((char)*puVar25 == (char)*puVar27))
          ;
        }
        uVar20 = (int64_t)puVar27 - CONCAT44(in_register_00000094,in_R10D);
      }
      if (uVar20 <= uVar23) goto LAB_7fffa5614670;
LAB_7fffa5614659:
      uVar23 = uVar20;
      *(uint64_t *)
       ((param_2 << 0x14 | param_2 >> 0x2c) ^ (param_2 << 0x34 | param_2 >> 0xc) ^ param_2) =
           (uint64_t)((uVar30 + 3) - uVar14);
      if ((uint64_t *)(CONCAT44(in_register_00000094,in_R10D) + uVar23) == puVar26) {
        return puVar12;
      }
    }
LAB_7fffa5614670:
    if (uVar14 <= uVar18) {
      return puVar12;
    }
    iVar21 = iVar21 + -1;
    if (iVar21 == 0) {
      return puVar12;
    }
    uVar14 = *(uint32_t *)(lVar8 + (uint64_t)(uVar14 & uVar31 - 1) * 4);
    if (uVar14 < uVar19) {
      return puVar12;
    }
  } while( true );
  lVar28 = lVar28 + 8;
  goto LAB_7fffa5614390;
code_r0x7fffa56142fc:
  lVar32 = lVar32 + 8;
  goto LAB_7fffa56142d0;
code_r0x7fffa5614521:
  puVar27 = puVar27 + 1;
  lVar28 = lVar28 + 8;
  if (puVar1 <= puVar27) goto LAB_7fffa5614533;
  goto LAB_7fffa5614510;
}


// ============================================================================
// Function : FUN_7fffa56146d0  |  RVA: 0xea46d0  |  Size: 8613 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa56146d0(void) {
    /* +0xea46d0 */ __asm { PUSH RBP }
    /* +0xea46d1 */ __asm { PUSH R14 }
    /* +0xea46d3 */ __asm { PUSH RSI }
    /* +0xea46d4 */ __asm { PUSH R15 }
    /* +0xea46d6 */ __asm { PUSH RBX }
    /* +0xea46d7 */ __asm { PUSH R13 }
    /* +0xea46d9 */ __asm { PUSH R12 }
    /* +0xea46db */ __asm { PUSH RDI }
    /* +0xea46dc */ __asm { SUB RSP,0x238 }
    /* +0xea46e3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xea46eb */ __asm { MOVAPS xmmword ptr [RBP + 0x1a0],XMM15 }
    /* +0xea46f3 */ __asm { MOV qword ptr [RBP + 0x198],-0x2 }
    /* +0xea46fe */ __asm { MOV R8D,R9D }
    /* +0xea4701 */ __asm { ROL R8D,0x2 }
    /* +0xea4705 */ __asm { MOV R11,RDX }
    /* +0xea4708 */ __asm { ROL R11,0x1c }
    /* +0xea470c */ __asm { MOV ECX,R9D }
    /* +0xea470f */ __asm { ROL ECX,0x19 }
    /* +0xea4712 */ __asm { XOR ECX,R8D }
    /* +0xea4715 */ __asm { XOR ECX,R9D }
    /* +0xea4718 */ __asm { MOV R8D,ECX }
    /* +0xea471b */ __asm { ROL R8D,0x12 }
    /* +0xea471f */ __asm { MOV R9D,ECX }
    /* +0xea4722 */ __asm { ROL R9D,0x4 }
    /* +0xea4726 */ __asm { XOR R9D,R8D }
    /* +0xea4729 */ __asm { XOR R9D,ECX }
    /* +0xea472c */ __asm { MOV R8D,R9D }
    /* +0xea472f */ __asm { ROL R8D,0x4 }
    /* +0xea4733 */ __asm { MOV ECX,R9D }
    /* +0xea4736 */ __asm { ROL ECX,0x8 }
    /* +0xea4739 */ __asm { XOR ECX,R8D }
    /* +0xea473c */ __asm { XOR ECX,R9D }
    /* +0xea473f */ __asm { MOV R9D,ECX }
    /* +0xea4742 */ __asm { ROL R9D,0x8 }
    /* +0xea4746 */ __asm { MOV R8D,ECX }
    /* +0xea4749 */ __asm { ROL R8D,0x10 }
    /* +0xea474d */ __asm { XOR R8D,R9D }
    /* +0xea4750 */ __asm { XOR R8D,ECX }
    /* +0xea4753 */ __asm { ROL R8D,0x10 }
    /* +0xea4757 */ __asm { MOV R10,RDX }
    /* +0xea475a */ __asm { ROL R10,0x13 }
    /* +0xea475e */ __asm { XOR R10,R11 }
    /* +0xea4761 */ __asm { XOR R10,RDX }
    /* +0xea4764 */ __asm { MOV R11,R10 }
    /* +0xea4767 */ __asm { ROL R11,0x26 }
    /* +0xea476b */ __asm { MOV RDX,R10 }
    /* +0xea476e */ __asm { ROL RDX,0x38 }
    /* +0xea4772 */ __asm { XOR RDX,R11 }
    /* +0xea4775 */ __asm { XOR RDX,R10 }
    /* +0xea4778 */ __asm { MOV R11,RDX }
    /* +0xea477b */ __asm { ROL R11,0x30 }
    /* +0xea477f */ __asm { MOV R10,RDX }
    /* +0xea4782 */ __asm { ROL R10,0xc }
    /* +0xea4786 */ __asm { XOR R10,R11 }
    /* +0xea4789 */ __asm { XOR R10,RDX }
    /* +0xea478c */ __asm { MOV R11,R10 }
    /* +0xea478f */ __asm { ROL R11,0x20 }
    /* +0xea4793 */ __asm { MOV RDI,RAX }
    /* +0xea4796 */ __asm { MOV R12,R10 }
    /* +0xea4799 */ __asm { ROL R12,0x18 }
    /* +0xea479d */ __asm { XOR R12,R11 }
    /* +0xea47a0 */ __asm { XOR R12,R10 }
    /* +0xea47a3 */ __asm { ROL R12,0x10 }
    /* +0xea47a7 */ __asm { MOV dword ptr [RBP + 0x60],0xf40b32f4 }
    /* +0xea47ae */ __asm { MOV R9D,dword ptr [RBP + 0x60] }
    /* +0xea47b2 */ __asm { CMP R9D,0xea06f28a }
    /* +0xea47b9 */ __asm { JBE 0x7fffa5615987 }
    /* +0xea47bf */ __asm { MOV R13D,EDI }
    /* +0xea47c2 */ __asm { OR R13D,0x1 }
    /* +0xea47c6 */ __asm { MOV R9D,R8D }
    /* +0xea47c9 */ __asm { AND R9D,0x1fff0000 }
    /* +0xea47d0 */ __asm { MOVZX R11D,R8W }
    /* +0xea47d4 */ __asm { CMP R9D,0x70000 }
    /* +0xea47db */ __asm { CMOVNZ R11D,R8D }
    /* +0xea47df */ __asm { MOV dword ptr [RBP + 0x4],R11D }
    /* +0xea47e3 */ __asm { TEST R11D,0x10000000 }
    /* +0xea47ea */ __asm { MOV qword ptr [RBP + 0x180],R12 }
    /* +0xea47f1 */ __asm { MOV qword ptr [RBP + 0x10],RDI }
    /* +0xea47f5 */ __asm { MOV qword ptr [RBP + 0x168],R13 }
    /* +0xea47fc */ __asm { JZ 0x7fffa561486c }
    /* +0xea47fe */ __asm { MOV R8W,0xfbdc }
    /* +0xea4803 */ __asm { ADD R8D,EDI }
    /* +0xea4806 */ __asm { ROL R8W,0x5 }
    /* +0xea480b */ __asm { NOT R8D }
    /* +0xea480e */ __asm { MOVZX R10D,R8W }
    /* +0xea4812 */ __asm { MOV RAX,qword ptr GS:[R10] }
    /* +0xea4816 */ __asm { MOV dword ptr [RBP + 0x60],0xdc1b147f }
    /* +0xea481d */ __asm { MOV R8D,dword ptr [RBP + 0x60] }
    /* +0xea4821 */ __asm { MOV R8D,0x6c58c8cb }
    /* +0xea4827 */ __asm { MOV R14,qword ptr [RAX + 0x18] }
    /* +0xea482b */ __asm { XOR R8D,EDI }
    /* +0xea482e */ __asm { MOV R9D,0x95fa12f8 }
    /* +0xea4834 */ __asm { SUB R9D,R8D }
    /* +0xea4837 */ __asm { MOV dword ptr [RBP + 0x60],R9D }
    /* +0xea483b */ __asm { MOV R8D,dword ptr [RBP + 0x60] }
    /* +0xea483f */ __asm { CMP R8D,0xe48237d0 }
    /* +0xea4846 */ __asm { JA 0x7fffa561484f }
    /* +0xea4848 */ __asm { RET 0xc957 }
    /* +0xea484f */ __asm { MOV RAX,qword ptr [R14 + 0x10] }
    /* +0xea4853 */ __asm { ADD R14,0x10 }
    /* +0xea4857 */ __asm { CMP RAX,R14 }
    /* +0xea485a */ __asm { SETZ R10B }
    /* +0xea485e */ __asm { MOV R11,RAX }
    /* +0xea4861 */ __asm { TEST RAX,RAX }
    /* +0xea4864 */ __asm { SETZ AL }
    /* +0xea4867 */ __asm { OR AL,R10B }
    /* +0xea486a */ __asm { JZ 0x7fffa5614879 }
    /* +0xea486c */ __asm { MOV qword ptr [RBP + 0x8],0x0 }
    /* +0xea4874 */ __asm { JMP 0x7fffa5614ba1 }
    /* +0xea4879 */ __asm { PUSHFQ }
    /* +0xea487a */ __asm { POP R15 }
    /* +0xea487c */ __asm { AND R15D,0x100 }
    /* +0xea4883 */ __asm { MOV R8D,0x704f06e7 }
    /* +0xea4889 */ __asm { IMUL ESI,R8D,-0x1449b5f7 }
    /* +0xea4890 */ __asm { NOT ESI }
    /* +0xea4892 */ __asm { ADD ESI,EDI }
    /* +0xea4894 */ __asm { MOV qword ptr [RBP + 0x8],0x0 }
    /* +0xea489c */ __asm { MOV RBX,0x100000008a7 }
    /* +0xea48a6 */ __asm { MOV R12,R11 }
    /* +0xea48a9 */ __asm { MOV qword ptr [RBP + -0x10],R14 }
    /* +0xea48ad */ __asm { MOV qword ptr [RBP + 0x30],R15 }
    /* +0xea48b1 */ __asm { MOV qword ptr [RBP + 0x20],RSI }
    /* +0xea48b5 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0xea48c0 */ __asm { CMP R15D,ESI }
    /* +0xea48c3 */ __asm { NOP }
    /* +0xea48c4 */ __asm { NOP }
    /* +0xea48c5 */ __asm { NOP }
    /* +0xea48c6 */ __asm { NOP }
    /* +0xea48c7 */ __asm { NOP }
    /* +0xea48c8 */ __asm { MOV dword ptr [RBP + 0x60],0xe7451077 }
    /* +0xea48cf */ __asm { MOV R8D,dword ptr [RBP + 0x60] }
    /* +0xea48d3 */ __asm { TEST R8D,R8D }
    /* +0xea48d6 */ __asm { JNS 0x7fffa5614b63 }
    /* +0xea48dc */ __asm { MOVZX R10D,word ptr [R12 + 0x58] }
    /* +0xea48e2 */ __asm { CMP R10D,0x2 }
    /* +0xea48e6 */ __asm { JC 0x7fffa5614920 }
    /* +0xea48e8 */ __asm { MOV qword ptr [RBP + 0x18],R12 }
    /* +0xea48ec */ __asm { MOV R8,qword ptr [R12 + 0x60] }
    /* +0xea48f1 */ __asm { SHR R10D,0x1 }
    /* +0xea48f4 */ __asm { CMP R10W,0x1 }
    /* +0xea48f9 */ __asm { MOV qword ptr [RBP + -0x18],R10 }
    /* +0xea48fd */ __asm { JNZ 0x7fffa5614940 }
    /* +0xea48ff */ __asm { MOV RDX,-0x24ea75ceaaf2bca3 }
    /* +0xea4909 */ __asm { XOR R10D,R10D }
    /* +0xea490c */ __asm { JMP 0x7fffa5614a0f }
    /* +0xea4920 */ __asm { XOR R8D,R8D }
    /* +0xea4923 */ __asm { CMP R15D,ESI }
    /* +0xea4926 */ __asm { JNZ 0x7fffa5614ab4 }
    /* +0xea492c */ __asm { JMP 0x7fffa5614ab7 }
    /* +0xea4940 */ __asm { MOV R12D,R10D }
    /* +0xea4943 */ __asm { AND R12D,0xfffffffe }
    /* +0xea4947 */ __asm { MOV RDX,-0x24ea75ceaaf2bca3 }
    /* +0xea4951 */ __asm { XOR R13D,R13D }
    /* +0xea4954 */ __asm { MOV R14,qword ptr [RBP + 0x168] }
    /* +0xea495b */ __asm { MOV R11,-0xecf6919f }
    /* +0xea4965 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0xea4970 */ __asm { MOV R15D,0x8a3f8f14 }
    /* +0xea4976 */ __asm { XOR R15D,EDI }
    /* +0xea4979 */ __asm { MOVZX R10D,word ptr [R8 + R13*0x2 + 0x2] }
    /* +0xea497f */ __asm { LEA R9D,[R10 + -0x41] }
    /* +0xea4983 */ __asm { MOV ECX,R10D }
    /* +0xea4986 */ __asm { OR ECX,0x20 }
    /* +0xea4989 */ __asm { CMP R9W,0x1a }
    /* +0xea498e */ __asm { CMOVNC ECX,R10D }
    /* +0xea4992 */ __asm { MOV R10D,0xa3b39d99 }
    /* +0xea4998 */ __asm { MOV RSI,-0x130965ba8479f72f }
    /* +0xea49a2 */ __asm { MOV R9D,0xe3559bdb }
    /* +0xea49a8 */ __asm { SUB R9D,R15D }
    /* +0xea49ab */ __asm { ADD R10D,0xdec01fe0 }
    /* +0xea49b2 */ __asm { IMUL R10D,R14D }
    /* +0xea49b6 */ __asm { MOVZX R15D,word ptr [R8 + R13*0x2] }
    /* +0xea49bb */ __asm { LEA EDI,[R15 + -0x41] }
    /* +0xea49bf */ __asm { MOV EAX,R15D }
    /* +0xea49c2 */ __asm { OR EAX,0x20 }
    /* +0xea49c5 */ __asm { CMP DI,0x1a }
    /* +0xea49c9 */ __asm { MOV RDI,qword ptr [RBP + 0x10] }
    /* +0xea49cd */ __asm { CMOVNC EAX,R15D }
    /* +0xea49d1 */ __asm { MOVZX EAX,AL }
    /* +0xea49d4 */ __asm { XOR RAX,RDX }
    /* +0xea49d7 */ __asm { IMUL RAX,RBX }
    /* +0xea49db */ __asm { MOVZX EDX,CL }
    /* +0xea49de */ __asm { XOR RDX,RAX }
    /* +0xea49e1 */ __asm { MOV EAX,0x8479f82f }
    /* +0xea49e6 */ __asm { ADD RSI,RAX }
    /* +0xea49e9 */ __asm { MOV ECX,EDI }
    /* +0xea49eb */ __asm { ROR RSI,CL }
    /* +0xea49ee */ __asm { ADD RSI,R11 }
    /* +0xea49f1 */ __asm { AND RSI,RDX }
    /* +0xea49f4 */ __asm { IMUL RDX,RBX }
    /* +0xea49f8 */ __asm { CMP R10,R9 }
    /* +0xea49fb */ __asm { LEA R10,[R13 + 0x2] }
    /* +0xea49ff */ __asm { CMOVGE RDX,RSI }
    /* +0xea4a03 */ __asm { MOV R13,R10 }
    /* +0xea4a06 */ __asm { CMP R12,R10 }
    /* +0xea4a09 */ __asm { JNZ 0x7fffa5614970 }
    /* +0xea4a0f */ __asm { TEST uint8_t ptr [RBP + -0x18],0x1 }
    /* +0xea4a13 */ __asm { JZ 0x7fffa5614a87 }
    /* +0xea4a15 */ __asm { MOV RAX,0x0 }
    /* +0xea4a1c */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xea4a23 */ __asm { MOV R9W,0xb827 }
    /* +0xea4a28 */ __asm { MOV ECX,0xffffb841 }
    /* +0xea4a2d */ __asm { SUB ECX,R9D }
    /* +0xea4a30 */ __asm { MOVZX EAX,word ptr [R8 + R10*0x2] }
    /* +0xea4a35 */ __asm { MOV R8D,EAX }
    /* +0xea4a38 */ __asm { OR R8D,0x20 }
    /* +0xea4a3c */ __asm { MOV R10D,0xf569c205 }
    /* +0xea4a42 */ __asm { MOV R9D,0x109c18d3 }
    /* +0xea4a48 */ __asm { MOV R12D,0x16923e5f }
    /* +0xea4a4e */ __asm { XOR R10D,EDI }
    /* +0xea4a51 */ __asm { ROL R10D,0xa }
    /* +0xea4a55 */ __asm { SUB R12D,R9D }
    /* +0xea4a58 */ __asm { XOR R10D,0xa2eeb159 }
    /* +0xea4a5f */ __asm { LEA R9D,[RAX + -0x41] }
    /* +0xea4a63 */ __asm { CMP R9W,CX }
    /* +0xea4a67 */ __asm { CMOVNC R8D,EAX }
    /* +0xea4a6b */ __asm { MOVZX EAX,R8B }
    /* +0xea4a6f */ __asm { MOV R9,RAX }
    /* +0xea4a72 */ __asm { IMUL R9,RDX }
    /* +0xea4a76 */ __asm { XOR RAX,RDX }
    /* +0xea4a79 */ __asm { CMP R10,R12 }
    /* +0xea4a7c */ __asm { CMOVNZ RAX,R9 }
    /* +0xea4a80 */ __asm { IMUL RAX,RBX }
    /* +0xea4a84 */ __asm { MOV RDX,RAX }
    /* +0xea4a87 */ __asm { MOV RAX,-0x7168bc00f1c7ff61 }
    /* +0xea4a91 */ __asm { CMP RDX,RAX }
    /* +0xea4a94 */ __asm { SETZ R8B }
    /* +0xea4a98 */ __asm { MOV R13,qword ptr [RBP + 0x168] }
    /* +0xea4a9f */ __asm { MOV R14,qword ptr [RBP + -0x10] }
    /* +0xea4aa3 */ __asm { MOV R15,qword ptr [RBP + 0x30] }
    /* +0xea4aa7 */ __asm { MOV RSI,qword ptr [RBP + 0x20] }
    /* +0xea4aab */ __asm { MOV R12,qword ptr [RBP + 0x18] }
    /* +0xea4aaf */ __asm { CMP R15D,ESI }
    /* +0xea4ab2 */ __asm { NOP }
    /* +0xea4ab3 */ __asm { NOP }
    /* +0xea4ab4 */ __asm { NOP }
    /* +0xea4ab5 */ __asm { NOP }
    /* +0xea4ab6 */ __asm { NOP }
    /* +0xea4ab7 */ __asm { MOV dword ptr [RBP + 0x60],0x9727a600 }
    /* +0xea4abe */ __asm { MOV R9D,dword ptr [RBP + 0x60] }
    /* +0xea4ac2 */ __asm { CMP R9D,0x9d3d0488 }
    /* +0xea4ac9 */ __asm { JNC 0x7fffa5614b6b }
    /* +0xea4acf */ __asm { TEST R8B,R8B }
    /* +0xea4ad2 */ __asm { JNZ 0x7fffa5614b77 }
    /* +0xea4ad8 */ __asm { MOV R8W,0xbcc9 }
    /* +0xea4add */ __asm { XOR R8D,0xa128 }
    /* +0xea4ae4 */ __asm { MOV ECX,EDI }
    /* +0xea4ae6 */ __asm { ROR R8W,CL }
    /* +0xea4aea */ __asm { ADD R8D,0xffffe27f }
    /* +0xea4af1 */ __asm { MOVZX R10D,R8W }
    /* +0xea4af5 */ __asm { MOV RAX,qword ptr GS:[R10] }
    /* +0xea4af9 */ __asm { MOV R11,0x2b85793b5ff14a75 }
    /* +0xea4b03 */ __asm { CMP qword ptr [RAX + 0x30],R11 }
    /* +0xea4b07 */ __asm { NOP }
    /* +0xea4b08 */ __asm { NOP }
    /* +0xea4b09 */ __asm { NOP }
    /* +0xea4b0a */ __asm { NOP }
    /* +0xea4b0b */ __asm { NOP }
    /* +0xea4b0c */ __asm { MOV R12,qword ptr [R12] }
    /* +0xea4b10 */ __asm { TEST R12,R12 }
    /* +0xea4b13 */ __asm { SETZ R10B }
    /* +0xea4b17 */ __asm { MOV EAX,0x4ac08e4a }
    /* +0xea4b1c */ __asm { CMP R12,R14 }
    /* +0xea4b1f */ __asm { SETZ CL }
    /* +0xea4b22 */ __asm { MOV R9D,ECX }
    /* +0xea4b25 */ __asm { OR R9B,R10B }
    /* +0xea4b28 */ __asm { MOV R8D,0x1f7b34c0 }
    /* +0xea4b2e */ __asm { XOR R8D,EDI }
    /* +0xea4b31 */ __asm { IMUL EDX,R8D,0x72a6d733 }
    /* +0xea4b38 */ __asm { XOR EAX,0xbfea13e5 }
    /* +0xea4b3d */ __asm { IMUL EAX,R13D }
    /* +0xea4b41 */ __asm { ADD EAX,0x6d0dbda4 }
    /* +0xea4b46 */ __asm { XOR CL,R10B }
    /* +0xea4b49 */ __asm { CMP RDX,RAX }
    /* +0xea4b4c */ __asm { MOVZX R8D,R9B }
    /* +0xea4b50 */ __asm { MOVZX R9D,CL }
    /* +0xea4b54 */ __asm { CMOVNZ R9D,R8D }
    /* +0xea4b58 */ __asm { TEST R9B,R9B }
    /* +0xea4b5b */ __asm { JZ 0x7fffa56148c0 }
    /* +0xea4b61 */ __asm { JMP 0x7fffa5614b9a }
    /* +0xea4b63 */ __asm { MOV R12,-0x5c99c10000028e17 }
    /* +0xea4b6e */ __asm { TEST R8B,R8B }
    /* +0xea4b71 */ __asm { JZ 0x7fffa5614ad8 }
    /* +0xea4b77 */ __asm { MOV dword ptr [RBP + 0x60],0xfa8bc72c }
    /* +0xea4b7e */ __asm { MOV R8D,dword ptr [RBP + 0x60] }
    /* +0xea4b82 */ __asm { TEST R12,R12 }
    /* +0xea4b85 */ __asm { JZ 0x7fffa5614b92 }
    /* +0xea4b87 */ __asm { MOV RAX,qword ptr [R12 + 0x30] }
    /* +0xea4b8c */ __asm { MOV qword ptr [RBP + 0x8],RAX }
    /* +0xea4b90 */ __asm { JMP 0x7fffa5614b9a }
    /* +0xea4b92 */ __asm { MOV qword ptr [RBP + 0x8],0x0 }
    /* +0xea4b9a */ __asm { MOV R12,qword ptr [RBP + 0x180] }
    /* +0xea4ba1 */ __asm { MOV R10W,0x57f0 }
    /* +0xea4ba6 */ __asm { LEA R11,[0x7fffa526fe81] }
    /* +0xea4bad */ __asm { MOV R8D,0xe6d55304 }
    /* +0xea4bb3 */ __asm { ADD R8D,EDI }
    /* +0xea4bb6 */ __asm { IMUL R8D,R8D,0xbebe005 }
    /* +0xea4bbd */ __asm { ROL R8D,0xd }
    /* +0xea4bc1 */ __asm { MOVSXD RAX,R8D }
    /* +0xea4bc4 */ __asm { XOR R10D,EDI }
    /* +0xea4bc7 */ __asm { NOT R10D }
    /* +0xea4bca */ __asm { MOVSX RDX,R10W }
    /* +0xea4bce */ __asm { ADD RDX,R11 }
    /* +0xea4bd1 */ __asm { MOV R8,0x0 }
    /* +0xea4bd8 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xea4bdf */ __asm { NOP }
    /* +0xea4be1 */ __asm { XORPS XMM15,XMM15 }
    /* +0xea4be5 */ __asm { MOVUPS xmmword ptr [R12],XMM15 }
    /* +0xea4bea */ __asm { MOV qword ptr [R12 + 0x10],0x0 }
    /* +0xea4bf3 */ __asm { MOV qword ptr [R12 + 0x18],0x7 }
    /* +0xea4bfc */ __asm { MOV R10,0x1866179e981f }
    /* +0xea4c06 */ __asm { CALL RDX }
    /* +0xea4c08 */ __asm { MOV RAX,RCX }
    /* +0xea4c0b */ __asm { MOV qword ptr [R12 + 0x10],0x8000 }
    /* +0xea4c14 */ __asm { ROL RAX,0x2c }
    /* +0xea4c18 */ __asm { MOV R11,RAX }
    /* +0xea4c1b */ __asm { SHL R11,0x36 }
    /* +0xea4c1f */ __asm { SUB RAX,R11 }
    /* +0xea4c22 */ __asm { MOV qword ptr [R12 + 0x18],0x8007 }
    /* +0xea4c2b */ __asm { XOR R15D,R15D }
    /* +0xea4c2e */ __asm { MOV R11D,0x8f0e4eba }
    /* +0xea4c34 */ __asm { MOV R10,-0x5ad3e7937f6b55a5 }
    /* +0xea4c3e */ __asm { MOV RDX,0x3390fe743d433df7 }
    /* +0xea4c48 */ __asm { NOP dword ptr [RAX + RAX*0x1] }
    /* +0xea4c50 */ __asm { MOV R8D,0x4913b1f1 }
    /* +0xea4c56 */ __asm { ADD R8D,0x91bd046a }
    /* +0xea4c5d */ __asm { MOV ECX,EDI }
    /* +0xea4c5f */ __asm { ROL R8D,CL }
    /* +0xea4c62 */ __asm { IMUL ECX,R8D,-0x3ae03a1f }
    /* +0xea4c69 */ __asm { XOR R8D,R8D }
    /* +0xea4c6c */ __asm { CMP RCX,R11 }
    /* +0xea4c6f */ __asm { SETNZ R8B }
    /* +0xea4c73 */ __asm { ADD R8,R15 }
    /* +0xea4c76 */ __asm { MOV RCX,-0x80 }
    /* +0xea4c7d */ __asm { SUB RCX,R8 }
    /* +0xea4c80 */ __asm { XOR RCX,0x10768a6a }
    /* +0xea4c87 */ __asm { IMUL RCX,R10 }
    /* +0xea4c8b */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0x10],XMM15 }
    /* +0xea4c91 */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2],XMM15 }
    /* +0xea4c96 */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0x20],XMM15 }
    /* +0xea4c9c */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0x30],XMM15 }
    /* +0xea4ca2 */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0x40],XMM15 }
    /* +0xea4ca8 */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0x50],XMM15 }
    /* +0xea4cae */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0x60],XMM15 }
    /* +0xea4cb4 */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0x70],XMM15 }
    /* +0xea4cba */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0x80],XMM15 }
    /* +0xea4cc3 */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0x90],XMM15 }
    /* +0xea4ccc */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0xa0],XMM15 }
    /* +0xea4cd5 */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0xb0],XMM15 }
    /* +0xea4cde */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0xd0],XMM15 }
    /* +0xea4ce7 */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0xc0],XMM15 }
    /* +0xea4cf0 */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0xf0],XMM15 }
    /* +0xea4cf9 */ __asm { MOVUPS xmmword ptr [RAX + R15*0x2 + 0xe0],XMM15 }
    /* +0xea4d02 */ __asm { ADD R15,0x80 }
    /* +0xea4d09 */ __asm { CMP RCX,RDX }
    /* +0xea4d0c */ __asm { JNZ 0x7fffa5614c50 }
    /* +0xea4d12 */ __asm { MOV R9W,0xef2f }
    /* +0xea4d17 */ __asm { MOV R8D,0xb7facbca }
    /* +0xea4d1d */ __asm { ADD R8D,0x3e3620cc }
    /* +0xea4d24 */ __asm { MOV ECX,0x902aa036 }
    /* +0xea4d29 */ __asm { ADD ECX,0xbfffffee }
    /* +0xea4d2f */ __asm { IMUL ECX,R13D }
    /* +0xea4d33 */ __asm { LEA R11,[0x7fffa479389e] }
    /* +0xea4d3a */ __asm { LEA R10,[0x7fffa478c975] }
    /* +0xea4d41 */ __asm { MOVSXD RCX,ECX }
    /* +0xea4d44 */ __asm { LEA RDX,[0x7fffa4792ca3] }
    /* +0xea4d4b */ __asm { MOV word ptr [RAX + 0x10000],0x0 }
    /* +0xea4d54 */ __asm { MOV qword ptr [R12],RAX }
    /* +0xea4d58 */ __asm { MOV EAX,R15D }
    /* +0xea4d5b */ __asm { SUB EAX,R9D }
    /* +0xea4d5e */ __asm { ADD EAX,0x321 }
    /* +0xea4d63 */ __asm { MOV R9D,EDI }
    /* +0xea4d66 */ __asm { XOR R9D,EAX }
    /* +0xea4d69 */ __asm { MOVSX RAX,R9W }
    /* +0xea4d6d */ __asm { ADD RAX,R10 }
    /* +0xea4d70 */ __asm { IMUL R8D,R13D }
    /* +0xea4d74 */ __asm { NOT R8D }
    /* +0xea4d77 */ __asm { MOVSXD R10,R8D }
    /* +0xea4d7a */ __asm { MOVZX R10D,uint8_t ptr [R11 + R10*0x1 + 0x1] }
    /* +0xea4d80 */ __asm { MOVQ XMM5,qword ptr [RDX + RCX*0x1 + 0x54] }
    /* +0xea4d86 */ __asm { MOVQ XMM3,qword ptr [RAX + R10*0x8 + 0xf] }
    /* +0xea4d8d */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0xea4d91 */ __asm { PXOR XMM4,XMM3 }
    /* +0xea4d95 */ __asm { MOVDQA XMM3,XMM4 }
    /* +0xea4d99 */ __asm { PSRLW XMM3,0x5 }
    /* +0xea4d9e */ __asm { PAND XMM3,xmmword ptr [0x7fffa56b8420] }
    /* +0xea4da6 */ __asm { PSLLW XMM4,0x3 }
    /* +0xea4dab */ __asm { PAND XMM4,xmmword ptr [0x7fffa56b8430] }
    /* +0xea4db3 */ __asm { POR XMM4,XMM3 }
    /* +0xea4db7 */ __asm { PXOR XMM4,XMM5 }
    /* +0xea4dbb */ __asm { MOVQ qword ptr [RBP + 0x60],XMM4 }
    /* +0xea4dc0 */ __asm { MOV R10,qword ptr [RBP + 0x60] }
    /* +0xea4dc4 */ __asm { TEST R10,R10 }
    /* +0xea4dc7 */ __asm { MOV qword ptr [RBP + 0x18],R15 }
    /* +0xea4dcb */ __asm { JZ 0x7fffa561598d }
    /* +0xea4dd1 */ __asm { MOV RAX,qword ptr [RBP + 0x1f8] }
    /* +0xea4dd8 */ __asm { MOV R11,-0x190c0ac50196a797 }
    /* +0xea4de2 */ __asm { CMP qword ptr [RAX + -0x8b0],R11 }
    /* +0xea4de9 */ __asm { NOP }
    /* +0xea4dea */ __asm { NOP }
    /* +0xea4deb */ __asm { NOP }
    /* +0xea4dec */ __asm { NOP }
    /* +0xea4ded */ __asm { NOP }
    /* +0xea4dee */ __asm { NOP }
    /* +0xea4def */ __asm { NOP }
    /* +0xea4df0 */ __asm { NOP }
    /* +0xea4df1 */ __asm { NOP }
    /* +0xea4df2 */ __asm { NOP }
    /* +0xea4df3 */ __asm { NOP }
    /* +0xea4df4 */ __asm { NOP }
    /* +0xea4df5 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xea4dfc */ __asm { MOV RDX,0x0 }
    /* +0xea4e03 */ __asm { MOV R8D,dword ptr [R12 + 0x10] }
    /* +0xea4e08 */ __asm { MOV R9W,0x318f }
    /* +0xea4e0d */ __asm { XOR R9D,EDI }
    /* +0xea4e10 */ __asm { ADD R9D,0xffffe451 }
    /* +0xea4e17 */ __asm { MOV RDX,qword ptr [RBP + 0x8] }
    /* +0xea4e1b */ __asm { TEST RDX,RDX }
    /* +0xea4e1e */ __asm { MOVZX R9D,R9W }
    /* +0xea4e22 */ __asm { MOV ECX,0x1200 }
    /* +0xea4e27 */ __asm { CMOVNZ ECX,R9D }
    /* +0xea4e2b */ __asm { CMP qword ptr [R12 + 0x18],0x8 }
    /* +0xea4e31 */ __asm { MOV RAX,R12 }
    /* +0xea4e34 */ __asm { JC 0x7fffa5614e3a }
    /* +0xea4e36 */ __asm { MOV RAX,qword ptr [R12] }
    /* +0xea4e3a */ __asm { MOV dword ptr [RSP + 0x28],R8D }
    /* +0xea4e3f */ __asm { MOV qword ptr [RSP + 0x20],RAX }
    /* +0xea4e44 */ __asm { MOV qword ptr [RSP + 0x30],0x0 }
    /* +0xea4e4d */ __asm { XOR R9D,R9D }
    /* +0xea4e50 */ __asm { MOV R8D,dword ptr [RBP + 0x4] }
    /* +0xea4e54 */ __asm { CALL R10 }
    /* +0xea4e57 */ __asm { MOV R15D,EAX }
    /* +0xea4e5a */ __asm { MOV R14,qword ptr [RBP + 0x180] }
    /* +0xea4e61 */ __asm { MOV RDI,qword ptr [R14 + 0x10] }
    /* +0xea4e65 */ __asm { MOV RSI,R15 }
    /* +0xea4e68 */ __asm { SUB RSI,RDI }
    /* +0xea4e6b */ __asm { JA 0x7fffa5614e87 }
    /* +0xea4e6d */ __asm { MOV qword ptr [R14 + 0x10],R15 }
    /* +0xea4e71 */ __asm { CMP qword ptr [R14 + 0x18],0x8 }
    /* +0xea4e76 */ __asm { MOV R12,R14 }
    /* +0xea4e79 */ __asm { JC 0x7fffa5614fe5 }
    /* +0xea4e7f */ __asm { MOV R12,qword ptr [R14] }
    /* +0xea4e82 */ __asm { JMP 0x7fffa5614fe5 }
    /* +0xea4e87 */ __asm { MOV R11,R14 }
    /* +0xea4e8a */ __asm { MOV R14,qword ptr [R14 + 0x18] }
    /* +0xea4e8e */ __asm { MOV RAX,R14 }
    /* +0xea4e91 */ __asm { SUB RAX,RDI }
    /* +0xea4e94 */ __asm { CMP RSI,RAX }
    /* +0xea4e97 */ __asm { JBE 0x7fffa5614fb3 }
    /* +0xea4e9d */ __asm { MOV RAX,0x7ffffffffffffffe }
    /* +0xea4ea7 */ __asm { MOV R11,RAX }
    /* +0xea4eaa */ __asm { SUB R11,RDI }
    /* +0xea4ead */ __asm { CMP R11,RSI }
    /* +0xea4eb0 */ __asm { JC 0x7fffa561592b }
    /* +0xea4eb6 */ __asm { MOV R10,R15 }
    /* +0xea4eb9 */ __asm { OR R10,0x7 }
    /* +0xea4ebd */ __asm { MOV R8D,0x6d1e4b55 }
    /* +0xea4ec3 */ __asm { XOR R8D,0x92e136f4 }
    /* +0xea4eca */ __asm { MOVSXD RDX,R8D }
    /* +0xea4ecd */ __asm { LEA R11,[0x7fffa5272d0f] }
    /* +0xea4ed4 */ __asm { ADD R11,RDX }
    /* +0xea4ed7 */ __asm { MOV R13,R14 }
    /* +0xea4eda */ __asm { SHR R13,0x1 }
    /* +0xea4edd */ __asm { MOV RDX,RAX }
    /* +0xea4ee0 */ __asm { SUB RDX,R13 }
    /* +0xea4ee3 */ __asm { ADD R13,R14 }
    /* +0xea4ee6 */ __asm { CMP R10,R13 }
    /* +0xea4ee9 */ __asm { CMOVA R13,R10 }
    /* +0xea4eed */ __asm { CMP R14,RDX }
    /* +0xea4ef0 */ __asm { CMOVA R13,RAX }
    /* +0xea4ef4 */ __asm { LEA RAX,[0x2 + R13*0x2] }
    /* +0xea4efc */ __asm { MOV RDX,RAX }
    /* +0xea4eff */ __asm { SHL RDX,0x3c }
    /* +0xea4f03 */ __asm { XOR RDX,RAX }
    /* +0xea4f06 */ __asm { SHL RAX,0xe }
    /* +0xea4f0a */ __asm { MOV R10,0x1865d799980f }
    /* +0xea4f14 */ __asm { MOV R8D,0xd41ad5f6 }
    /* +0xea4f1a */ __asm { XOR R8D,0x1afc6760 }
    /* +0xea4f21 */ __asm { IMUL R8D,R8D,0x3d4a4135 }
    /* +0xea4f28 */ __asm { SUB R8D,dword ptr [RBP + 0x18] }
    /* +0xea4f2c */ __asm { MOV RBX,qword ptr [RBP + 0x10] }
    /* +0xea4f30 */ __asm { MOV ECX,EBX }
    /* +0xea4f32 */ __asm { ROL R8D,CL }
    /* +0xea4f35 */ __asm { ADD R10,RAX }
    /* +0xea4f38 */ __asm { ADD R10,RDX }
    /* +0xea4f3b */ __asm { MOVSXD RAX,R8D }
    /* +0xea4f3e */ __asm { CALL R11 }
    /* +0xea4f41 */ __asm { MOV R12,RCX }
    /* +0xea4f44 */ __asm { ROL R12,0x2c }
    /* +0xea4f48 */ __asm { MOV RAX,R12 }
    /* +0xea4f4b */ __asm { SHL RAX,0x36 }
    /* +0xea4f4f */ __asm { SUB R12,RAX }
    /* +0xea4f52 */ __asm { LEA R8,[RDI + RDI*0x1] }
    /* +0xea4f56 */ __asm { MOV RDX,qword ptr [RBP + 0x180] }
    /* +0xea4f5d */ __asm { MOV qword ptr [RDX + 0x18],R13 }
    /* +0xea4f61 */ __asm { MOV qword ptr [RDX + 0x10],R15 }
    /* +0xea4f65 */ __asm { CMP R14,0x8 }
    /* +0xea4f69 */ __asm { JNC 0x7fffa5614ff8 }
    /* +0xea4f6f */ __asm { LEA R14,[R12 + RDI*0x2] }
    /* +0xea4f73 */ __asm { MOV RCX,R12 }
    /* +0xea4f76 */ __asm { CALL 0x7fffa56a5f20 }
}


// ============================================================================
// Function : Unwind@7fffa5617a80  |  RVA: 0xea7a80  |  Size: 190 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5617a80(uint64_t param_1,int64_t param_2)

{
  uint16_t *puVar1;
  
  if (7 < *(uint64_t *)(*(int64_t *)(param_2 + 0x200) + 0x18)) {
    (*(code *)((int64_t)(short)((uint16_t)*(uint64_t *)(param_2 + 0x90) ^ 0x82b2) + 0x7fffa568f59e)
    )(*(uint64_t *)(param_2 + 0x90),param_2,
      **(uint64_t **)(param_2 + 0x200) >> 0x3d ^ **(uint64_t **)(param_2 + 0x200),
      (uint32_t)*(uint64_t *)(param_2 + 0x98) | 1);
  }
  puVar1 = *(uint16_t **)(param_2 + 0x200);
  *puVar1 = 0;
  *(uint64_t *)(puVar1 + 0xc) = 7;
  *(uint64_t *)(puVar1 + 8) = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa5617b40  |  RVA: 0xea7b40  |  Size: 3644 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa5617b40(uint64_t *param_1,uint32_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  bool bVar4;
  uint64_t uVar5;
  uint8_t bVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint32_t uVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  uint64_t *puVar21;
  int64_t in_XMM0_Qa;
  uint64_t uVar22;
  
  uVar19 = in_XMM0_Qa * -0x4964f159585a84ad + 0xd93641615302c7f8;
  uVar9 = uVar19 >> 4;
  puVar20 = (uint64_t *)((uVar19 << 0x3c | uVar9) - (uVar9 << 0x20));
  uVar9 = (int64_t)puVar20 - (int64_t)param_1;
  bVar6 = (uint8_t)param_2;
  if (0x200 < (int64_t)uVar9) {
    uVar19 = (param_3 ^ 0xb01a658b) - 0x437126e7;
    puVar21 = puVar20;
    do {
      uVar5 = uVar9 >> 5;
      if ((int64_t)uVar19 < (int64_t)(uint64_t)(0xe7d9a0e2 - param_2)) {
        uVar19 = (uVar9 >> 4) - 1;
        uVar11 = uVar19 >> 1;
        do {
          uVar22 = uVar5 - 1;
          uVar8 = param_1[uVar22 * 2];
          uVar3 = param_1[uVar22 * 2 + 1];
          uVar7 = uVar22;
          if ((int64_t)uVar5 <= (int64_t)uVar11) {
            uVar15 = uVar22;
            do {
              uVar7 = uVar15 * 2 + 2;
              uVar1 = (uint64_t)
                      ((param_2 + 0x9b3e5f00 ^ 0x537b727a) + 0xaf9174d1 <
                      (0x2b687aa0U >> (bVar6 & 0x1f) | 0x2b687aa0 << 0x20 - (bVar6 & 0x1f)) +
                      0x9bd85048) + uVar15 * 2;
              if ((param_1[uVar7 * 2] < param_1[uVar1 * 2]) ||
                 ((param_1[uVar7 * 2] == param_1[uVar1 * 2] &&
                  ((uint32_t)param_1[uVar7 * 2 + 1] < (uint32_t)param_1[uVar1 * 2 + 1])))) {
                uVar7 = uVar1;
              }
              uVar1 = (param_1 + uVar7 * 2)[1];
              param_1[uVar15 * 2] = param_1[uVar7 * 2];
              (param_1 + uVar15 * 2)[1] = uVar1;
              uVar15 = uVar7;
            } while ((int64_t)uVar7 < (int64_t)uVar11);
          }
          if ((uVar7 == uVar11) && ((uVar9 & 0x10) == 0)) {
            uVar7 = (param_1 + uVar19 * 2)[1];
            param_1[uVar11 * 2] = param_1[uVar19 * 2];
            (param_1 + uVar11 * 2)[1] = uVar7;
            uVar7 = uVar19;
          }
          uVar15 = uVar7;
          if ((int64_t)uVar5 <= (int64_t)uVar7) {
            do {
              uVar7 = (int64_t)(uVar15 - 1) >> 1;
              puVar20 = param_1 + uVar7 * 2;
              if ((uVar8 <= param_1[uVar7 * 2]) &&
                 ((param_1[uVar7 * 2] != uVar8 || ((uint32_t)uVar3 <= (uint32_t)puVar20[1])))) {
                uVar7 = uVar15;
                break;
              }
              uVar1 = puVar20[1];
              param_1[uVar15 * 2] = *puVar20;
              (param_1 + uVar15 * 2)[1] = uVar1;
              uVar15 = uVar7;
            } while ((int64_t)uVar5 <= (int64_t)uVar7);
          }
          param_1[uVar7 * 2] = uVar8;
          param_1[uVar7 * 2 + 1] = uVar3;
          bVar4 = (int64_t)(uint64_t)(param_2 + 0x5f20 & 0xffff) < (int64_t)uVar5;
          uVar5 = uVar22;
        } while (bVar4);
        do {
          uVar9 = puVar21[-2];
          uVar19 = puVar21[-1];
          uVar5 = param_1[1];
          puVar21[-2] = *param_1;
          puVar21[-1] = uVar5;
          puVar21 = puVar21 + -2;
          uVar22 = (int64_t)puVar21 - (int64_t)param_1;
          uVar11 = ((int64_t)uVar22 >> 4) - 1;
          uVar5 = (int64_t)uVar11 >> 1;
          if ((int64_t)(uint64_t)(uint16_t)((0x5927 - (uint16_t)param_2 ^ 0x91) + 0x4729) <
              (int64_t)uVar5) {
            uVar8 = 0;
            do {
              uVar7 = uVar8 * 2 + 2;
              uVar3 = uVar8 * 2 + 1;
              if ((param_1[uVar7 * 2] < param_1[uVar3 * 2]) ||
                 ((param_1[uVar7 * 2] == param_1[uVar3 * 2] &&
                  ((uint32_t)param_1[uVar7 * 2 + 1] < (uint32_t)param_1[uVar3 * 2 + 1])))) {
                uVar7 = uVar3;
              }
              uVar3 = (param_1 + uVar7 * 2)[1];
              param_1[uVar8 * 2] = param_1[uVar7 * 2];
              (param_1 + uVar8 * 2)[1] = uVar3;
              uVar8 = uVar7;
            } while ((int64_t)uVar7 < (int64_t)uVar5);
          }
          else {
            uVar7 = 0;
          }
          if ((uVar7 == uVar5) && ((uVar22 & 0x10) == 0)) {
            uVar7 = (param_1 + uVar11 * 2)[1];
            param_1[uVar5 * 2] = param_1[uVar11 * 2];
            (param_1 + uVar5 * 2)[1] = uVar7;
            uVar7 = uVar11;
          }
          if (0 < (int64_t)uVar7) {
            do {
              uVar5 = uVar7 - 1;
              uVar11 = uVar5 >> 1;
              puVar20 = param_1 + uVar11 * 2;
              if ((uVar9 <= param_1[uVar11 * 2]) &&
                 ((param_1[uVar11 * 2] != uVar9 || ((uint32_t)uVar19 <= (uint32_t)puVar20[1]))))
              goto LAB_7fffa5618893;
              uVar8 = puVar20[1];
              param_1[uVar7 * 2] = *puVar20;
              (param_1 + uVar7 * 2)[1] = uVar8;
              uVar7 = uVar11;
            } while (1 < uVar5);
            uVar7 = 0;
          }
LAB_7fffa5618893:
          param_1[uVar7 * 2] = uVar9;
          param_1[uVar7 * 2 + 1] = uVar19;
          if ((int64_t)uVar22 < 0x11) {
            return;
          }
        } while( true );
      }
      puVar20 = puVar21 + -2;
      lVar10 = (int64_t)puVar20 - (int64_t)param_1 >> 4;
      puVar14 = param_1 + uVar5 * 2;
      if (lVar10 < 0x29) {
        uVar9 = *puVar14;
        if ((uVar9 < *param_1) || ((uVar9 == *param_1 && ((uint32_t)puVar14[1] < (uint32_t)param_1[1])))) {
          uVar9 = *puVar14;
          uVar11 = puVar14[1];
          uVar22 = param_1[1];
          *puVar14 = *param_1;
          puVar14[1] = uVar22;
          *param_1 = uVar9;
          param_1[1] = uVar11;
          uVar9 = *puVar14;
        }
        if ((*puVar20 < uVar9) || ((*puVar20 == uVar9 && ((uint32_t)puVar21[-1] < (uint32_t)puVar14[1])))) {
          uVar9 = *puVar20;
          uVar11 = puVar21[-1];
          uVar22 = puVar14[1];
          *puVar20 = *puVar14;
          puVar21[-1] = uVar22;
          *puVar14 = uVar9;
          puVar14[1] = uVar11;
          uVar9 = *puVar14;
          uVar11 = *param_1;
          bVar4 = uVar9 < uVar11;
          if (0x26660a42 < (param_2 ^ 0xc61d0fd0)) {
            bVar4 = (int64_t)uVar9 <= (int64_t)uVar11;
          }
          if ((bVar4) || ((uVar9 == uVar11 && ((uint32_t)puVar14[1] < (uint32_t)param_1[1])))) {
            uVar9 = *puVar14;
            uVar11 = puVar14[1];
            uVar22 = param_1[1];
            *puVar14 = *param_1;
            puVar14[1] = uVar22;
            *param_1 = uVar9;
            param_1[1] = uVar11;
          }
        }
      }
      else {
        uVar11 = lVar10 + 1U >> 3;
        puVar16 = param_1 + uVar11 * 2;
        uVar9 = param_1[uVar11 * 2];
        if ((uVar9 < *param_1) || ((uVar9 == *param_1 && ((uint32_t)puVar16[1] < (uint32_t)param_1[1])))) {
          uVar9 = *puVar16;
          uVar22 = puVar16[1];
          uVar7 = param_1[1];
          *puVar16 = *param_1;
          puVar16[1] = uVar7;
          *param_1 = uVar9;
          param_1[1] = uVar22;
          uVar9 = *puVar16;
        }
        puVar18 = param_1 + uVar11 * 4;
        if ((*puVar18 < uVar9) || ((*puVar18 == uVar9 && ((uint32_t)puVar18[1] < (uint32_t)puVar16[1])))) {
          uVar9 = *puVar18;
          uVar22 = puVar18[1];
          uVar7 = puVar16[1];
          *puVar18 = *puVar16;
          puVar18[1] = uVar7;
          *puVar16 = uVar9;
          puVar16[1] = uVar22;
          if ((*puVar16 < *param_1) ||
             ((*puVar16 == *param_1 && ((uint32_t)puVar16[1] < (uint32_t)param_1[1])))) {
            uVar9 = *puVar16;
            uVar22 = puVar16[1];
            uVar7 = param_1[1];
            *puVar16 = *param_1;
            puVar16[1] = uVar7;
            *param_1 = uVar9;
            param_1[1] = uVar22;
          }
        }
        uVar9 = *puVar14;
        puVar18 = puVar14 + uVar11 * -2;
        if ((uVar9 < *puVar18) || ((uVar9 == *puVar18 && ((uint32_t)puVar14[1] < (uint32_t)puVar18[1])))) {
          uVar9 = *puVar14;
          uVar22 = puVar14[1];
          uVar7 = puVar18[1];
          *puVar14 = *puVar18;
          puVar14[1] = uVar7;
          *puVar18 = uVar9;
          puVar18[1] = uVar22;
          uVar9 = *puVar14;
        }
        puVar17 = puVar14 + uVar11 * 2;
        if ((*puVar17 < uVar9) || ((*puVar17 == uVar9 && ((uint32_t)puVar17[1] < (uint32_t)puVar14[1])))) {
          uVar9 = *puVar17;
          uVar22 = puVar17[1];
          uVar7 = puVar14[1];
          *puVar17 = *puVar14;
          puVar17[1] = uVar7;
          *puVar14 = uVar9;
          puVar14[1] = uVar22;
          if ((*puVar14 < *puVar18) ||
             ((*puVar14 == *puVar18 && ((uint32_t)puVar14[1] < (uint32_t)puVar18[1])))) {
            uVar9 = *puVar14;
            uVar22 = puVar14[1];
            uVar7 = puVar18[1];
            *puVar14 = *puVar18;
            puVar14[1] = uVar7;
            *puVar18 = uVar9;
            puVar18[1] = uVar22;
          }
        }
        puVar18 = puVar20 + uVar11 * -2;
        uVar22 = puVar20[uVar11 * -2];
        puVar17 = puVar20 + uVar11 * -4;
        uVar9 = puVar20[uVar11 * -4];
        uVar13 = (param_2 | 1) * -0x27a6ab61 + 0x3ffffffb;
        bVar4 = (int64_t)uVar9 < (int64_t)uVar22;
        if ((int64_t)(int)(param_2 + 0xed917f64 ^ 0x72fab300) <=
            (int64_t)(uint64_t)(uVar13 * 0x200 | uVar13 >> 0x17)) {
          bVar4 = uVar22 < uVar9;
        }
        if (bVar4) {
LAB_7fffa5618130:
          uVar9 = *puVar18;
          uVar11 = puVar18[1];
          uVar22 = puVar17[1];
          *puVar18 = *puVar17;
          puVar18[1] = uVar22;
          *puVar17 = uVar9;
          puVar17[1] = uVar11;
          uVar22 = *puVar18;
        }
        else {
          uVar13 = (param_2 | 1) * 0x5031b722 + 0xc00002ee;
          bVar4 = (int64_t)uVar22 <= (int64_t)uVar9;
          if ((uVar13 * 0x4000000 | uVar13 >> 6) < 0x420bff9b) {
            bVar4 = uVar22 == uVar9;
          }
          if ((bVar4) && ((uint32_t)puVar18[1] < (uint32_t)puVar17[1])) goto LAB_7fffa5618130;
        }
        if ((*puVar20 < uVar22) || ((*puVar20 == uVar22 && ((uint32_t)puVar21[-1] < (uint32_t)puVar18[1]))))
        {
          uVar9 = *puVar20;
          uVar11 = puVar21[-1];
          uVar22 = puVar18[1];
          *puVar20 = *puVar18;
          puVar21[-1] = uVar22;
          *puVar18 = uVar9;
          puVar18[1] = uVar11;
          if ((*puVar18 < *puVar17) ||
             ((*puVar18 == *puVar17 && ((uint32_t)puVar18[1] < (uint32_t)puVar17[1])))) {
            uVar9 = *puVar18;
            uVar11 = puVar18[1];
            uVar22 = puVar17[1];
            *puVar18 = *puVar17;
            puVar18[1] = uVar22;
            *puVar17 = uVar9;
            puVar17[1] = uVar11;
          }
        }
        uVar9 = *puVar14;
        if ((uVar9 < *puVar16) || ((uVar9 == *puVar16 && ((uint32_t)puVar14[1] < (uint32_t)puVar16[1])))) {
          uVar9 = *puVar14;
          uVar11 = puVar14[1];
          uVar22 = puVar16[1];
          *puVar14 = *puVar16;
          puVar14[1] = uVar22;
          *puVar16 = uVar9;
          puVar16[1] = uVar11;
          uVar9 = *puVar14;
        }
        if ((*puVar18 < uVar9) || ((*puVar18 == uVar9 && ((uint32_t)puVar18[1] < (uint32_t)puVar14[1])))) {
          uVar9 = *puVar18;
          uVar11 = puVar18[1];
          uVar22 = puVar14[1];
          *puVar18 = *puVar14;
          puVar18[1] = uVar22;
          *puVar14 = uVar9;
          puVar14[1] = uVar11;
          if ((*puVar14 < *puVar16) ||
             ((*puVar14 == *puVar16 && ((uint32_t)puVar14[1] < (uint32_t)puVar16[1])))) {
            uVar9 = *puVar14;
            uVar11 = puVar14[1];
            uVar22 = puVar16[1];
            *puVar14 = *puVar16;
            puVar14[1] = uVar22;
            *puVar16 = uVar9;
            puVar16[1] = uVar11;
          }
        }
      }
      puVar16 = param_1 + uVar5 * 2 + -2;
      uVar9 = *puVar16;
      while ((uVar9 == *puVar14 && ((int)puVar16[3] == (int)puVar16[1]))) {
        if (puVar16 <= param_1) goto LAB_7fffa56182ec;
        puVar16 = puVar16 + -2;
        uVar9 = *puVar16;
      }
      puVar16 = puVar16 + 2;
LAB_7fffa56182ec:
      puVar14 = puVar14 + 2;
      if (puVar14 < puVar21) {
        puVar20 = puVar14;
        do {
          puVar14 = puVar20;
          if (((*puVar14 < *puVar16) || (*puVar14 != *puVar16)) ||
             ((int)puVar16[1] != (int)puVar14[1])) goto LAB_7fffa561833a;
          puVar20 = puVar14 + 2;
        } while (puVar14 + 2 < puVar21);
        puVar14 = puVar14 + 2;
      }
LAB_7fffa561833a:
      puVar17 = puVar14;
      puVar18 = puVar16;
LAB_7fffa5618374:
      puVar20 = puVar17;
      if (puVar17 < puVar21) {
        do {
          puVar17 = puVar20;
          uVar9 = *puVar17;
          uVar5 = *puVar18;
          if ((uVar9 <= uVar5) && ((uVar5 != uVar9 || ((uint32_t)puVar17[1] <= (uint32_t)puVar18[1])))) {
            if ((uVar9 < uVar5) || ((uint32_t)puVar17[1] < (uint32_t)puVar18[1])) goto LAB_7fffa5618417;
            if (puVar17 == puVar14) {
              puVar14 = puVar14 + 2;
            }
            else {
              uVar9 = *puVar14;
              uVar5 = puVar14[1];
              uVar11 = puVar17[1];
              *puVar14 = *puVar17;
              puVar14[1] = uVar11;
              puVar14 = puVar14 + 2;
              *puVar17 = uVar9;
              puVar17[1] = uVar5;
            }
          }
          puVar20 = puVar17 + 2;
        } while (puVar17 + 2 < puVar21);
        puVar17 = puVar17 + 2;
      }
LAB_7fffa5618417:
      puVar20 = puVar18;
      if (param_1 < puVar16) {
        do {
          puVar12 = puVar16 + -2;
          uVar9 = *puVar20;
          uVar5 = *puVar12;
          puVar18 = puVar20;
          if ((uVar9 <= uVar5) && ((uVar5 != uVar9 || ((uint32_t)puVar20[1] <= (uint32_t)puVar16[-1])))) {
            if ((uVar9 < uVar5) || ((uint32_t)puVar20[1] < (uint32_t)puVar16[-1])) break;
            bVar4 = puVar16 != puVar20 && (int64_t)puVar20 <= (int64_t)puVar16;
            if ((-0x7bf33f42 << (bVar6 & 0x1f) | 0x840cc0beU >> 0x20 - (bVar6 & 0x1f)) <=
                (param_2 | 1) * 0x41da626c + 0x80000002) {
              bVar4 = puVar16 == puVar20;
            }
            puVar18 = puVar20 + -2;
            if (!bVar4) {
              uVar9 = *puVar18;
              uVar5 = puVar20[-1];
              uVar11 = puVar16[-1];
              *puVar18 = *puVar12;
              puVar20[-1] = uVar11;
              *puVar12 = uVar9;
              puVar16[-1] = uVar5;
            }
          }
          puVar20 = puVar18;
          puVar16 = puVar12;
        } while (param_1 < puVar12);
      }
      if ((puVar17 != puVar21) || (puVar16 != param_1)) {
        if (puVar16 == param_1) {
          if (puVar14 != puVar17) {
            uVar9 = *puVar20;
            uVar5 = puVar20[1];
            uVar11 = puVar14[1];
            *puVar20 = *puVar14;
            puVar20[1] = uVar11;
            *puVar14 = uVar9;
            puVar14[1] = uVar5;
          }
          puVar14 = puVar14 + 2;
          puVar18 = puVar20 + 2;
          uVar9 = *puVar20;
          uVar5 = puVar20[1];
          uVar11 = puVar17[1];
          *puVar20 = *puVar17;
          puVar20[1] = uVar11;
          *puVar17 = uVar9;
          puVar17[1] = uVar5;
          puVar17 = puVar17 + 2;
        }
        else {
          puVar12 = puVar16 + -2;
          if (puVar17 == puVar21) {
            puVar18 = puVar20 + -2;
            if (puVar16 != puVar20) {
              uVar9 = *puVar12;
              uVar5 = puVar16[-1];
              uVar11 = puVar20[-1];
              *puVar12 = *puVar18;
              puVar16[-1] = uVar11;
              *puVar18 = uVar9;
              puVar20[-1] = uVar5;
            }
            uVar9 = *puVar18;
            uVar5 = puVar20[-1];
            uVar11 = puVar14[-1];
            *puVar18 = puVar14[-2];
            puVar20[-1] = uVar11;
            puVar14[-2] = uVar9;
            puVar14[-1] = uVar5;
            puVar14 = puVar14 + -2;
            puVar16 = puVar12;
          }
          else {
            uVar9 = *puVar17;
            uVar5 = puVar17[1];
            uVar11 = puVar16[-1];
            *puVar17 = *puVar12;
            puVar17[1] = uVar11;
            puVar17 = puVar17 + 2;
            *puVar12 = uVar9;
            puVar16[-1] = uVar5;
            puVar16 = puVar12;
            puVar18 = puVar20;
          }
        }
        goto LAB_7fffa5618374;
      }
      uVar19 = (uVar19 >> 2) + (uVar19 >> 1);
      if ((int64_t)puVar20 - (int64_t)param_1 < (int64_t)puVar21 - (int64_t)puVar14) {
        (*(code *)((int64_t)(short)~(((uint16_t)param_2 | 1) * 0x14a) + 0x7fffa561dd4b))
                  (param_1,param_2,
                   (uint64_t)(-0x27f2cd3b << (bVar6 & 0x1f) | 0xd80d32c5U >> 0x20 - (bVar6 & 0x1f))
                   ^ uVar19 + 0x437126e7);
        puVar20 = puVar21;
        param_1 = puVar14;
      }
      else {
        (*(code *)((int64_t)(int)(-0x18271f88 - param_2) + 0x7fffa5623ba9))
                  (puVar14,param_2,uVar19 + 0x437126e7 ^ 0xb01a658b);
      }
      uVar9 = (int64_t)puVar20 - (int64_t)param_1;
      puVar21 = puVar20;
    } while ((int64_t)(uint64_t)((param_2 + 0x18275f9f) * 0x2000000 | param_2 + 0x18275f9f >> 7)
             <= (int64_t)uVar9);
  }
  if ((param_1 == puVar20) || (puVar21 = param_1 + 2, puVar21 == puVar20)) {
    return;
  }
  puVar14 = puVar21;
  puVar16 = param_1;
LAB_7fffa5617c55:
  puVar18 = puVar14;
  uVar2 = *(uint32_t *)((int64_t)puVar16 + 0x1c);
  uVar9 = puVar16[2];
  uVar13 = (uint32_t)puVar16[3];
  if ((*param_1 <= uVar9) &&
     ((puVar14 = puVar18, uVar9 != *param_1 || ((uint32_t)param_1[1] <= uVar13)))) {
    do {
      uVar19 = puVar14[-2];
      if (uVar19 <= uVar9) {
        bVar4 = uVar9 == uVar19;
        if ((param_2 | 1) * -0x490418fc != -0x4dd3757c) {
          bVar4 = (int64_t)uVar9 < (int64_t)uVar19;
        }
        if ((!bVar4) || ((uint32_t)puVar14[-1] <= uVar13)) goto LAB_7fffa5617cf2;
      }
      *puVar14 = puVar14[-2];
      puVar14[1] = puVar14[-1];
      puVar14 = puVar14 + -2;
    } while( true );
  }
  FUN_7fffa56a5f20(puVar21,param_1,(int64_t)puVar18 - (int64_t)param_1);
  *(uint32_t *)((int64_t)param_1 + 0xc) = uVar2;
  *(uint32_t *)(param_1 + 1) = uVar13;
  *param_1 = uVar9;
  goto LAB_7fffa5617c0d;
LAB_7fffa5617cf2:
  *(uint32_t *)(puVar14 + 1) = uVar13;
  *puVar14 = uVar9;
  *(uint32_t *)((int64_t)puVar14 + 0xc) = uVar2;
LAB_7fffa5617c0d:
  puVar14 = puVar18 + 2;
  bVar4 = puVar14 < puVar20;
  if ((0x5c052ff3 << (bVar6 & 0x1f) | 0x5c052ff3U >> 0x20 - (bVar6 & 0x1f)) + 0x58aecf15 <
      (param_2 ^ 0xfd70b873) * 0x6661ed35) {
    bVar4 = puVar14 == puVar20;
  }
  puVar16 = puVar18;
  if (bVar4) {
    return;
  }
  goto LAB_7fffa5617c55;
}


// ============================================================================
// Function : FUN_7fffa5618a30  |  RVA: 0xea8a30  |  Size: 2605 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Type propagation algorithm not settling */

IMAGE_DOS_HEADER *
FUN_7fffa5618a30(IMAGE_DOS_HEADER *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                uint64_t *param_5)

{
  int *piVar1;
  int *piVar2;
  uint32_t uVar3;
  int64_t lVar4;
  int iVar5;
  uint64_t uVar6;
  bool bVar7;
  int64_t in_RAX;
  IMAGE_DOS_HEADER *pIVar8;
  uint8_t bVar9;
  uint32_t uVar10;
  int iVar11;
  IMAGE_DOS_HEADER *pIVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  int64_t lVar15;
  char *pcVar16;
  uint32_t uVar17;
  int64_t lVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint32_t uVar21;
  uint64_t *puVar22;
  uint32_t uVar23;
  uint32_t uVar24;
  uint32_t uVar25;
  uint64_t uVar26;
  int64_t lVar27;
  uint16_t uVar28;
  uint8_t auVar29 [16];
  char cVar30;
  uint8_t uVar33;
  char cVar34;
  uint8_t uVar35;
  char cVar36;
  uint8_t uVar37;
  char cVar38;
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  char *pcVar39;
  uint32_t auStack_198 [64];
  uint64_t uStack_98;
  int64_t lStack_90;
  uint64_t uStack_88;
  int iStack_7c;
  IMAGE_DOS_HEADER *pIStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint32_t uStack_48;
  int iStack_44;
  
  param_2 = param_2 << 10 ^ param_2;
  param_2 = param_2 << 0x14 ^ param_2;
  uVar17 = (uint32_t)param_3;
  param_2 = param_2 << 0x28 ^ param_2;
  uVar23 = *(uint32_t *)(param_2 + 0x1c);
  uVar13 = 1 << (*(uint8_t *)(param_2 + 0x100) & 0x1f);
  iStack_7c = *(int *)(param_2 + 0x34);
  lVar4 = *(int64_t *)(param_2 + 8);
  uVar25 = 5;
  if (*(uint32_t *)(param_2 + 0x10c) < 5) {
    uVar25 = *(uint32_t *)(param_2 + 0x10c);
  }
  uStack_58 = (int64_t)param_1 - lVar4;
  uVar10 = (uint32_t)uStack_58;
  uStack_48 = uVar10 - uVar13;
  if (uVar10 - uVar23 <= uVar13) {
    uStack_48 = uVar23;
  }
  lStack_90 = *(int64_t *)(param_2 + 0x70);
  lVar27 = *(int64_t *)(param_2 + 0x38);
  if (*(int *)(param_2 + 0x28) != 0) {
    uStack_48 = uVar23;
  }
  iVar11 = 1 << ((uint8_t)uVar25 & 0x1f);
  uVar19 = (uint64_t)(0x92cd03e - uVar17) + in_RAX;
  uVar19 = uVar19 * 0x100 ^ uVar19;
  uVar19 = uVar19 << 0x10 ^ uVar19;
  pIStack_78 = (IMAGE_DOS_HEADER *)(uVar19 << 0x20 ^ uVar19);
  uVar23 = (uint32_t)*(uint64_t *)(param_2 + 0x60);
  if (*(int *)(param_2 + 300) == 0) {
    uStack_88 = *(uint64_t *)(param_2 + 0x60);
    lStack_70 = lVar4;
    uVar25 = *(uint32_t *)(param_2 + 0x2c);
    uVar19 = (uint64_t)uVar25;
    iStack_44 = iVar11;
    lStack_68 = lVar27;
    lVar15 = lVar27;
    lVar20 = lStack_90;
    if (0x180 < uVar10 - uVar25) {
      uVar13 = uVar17 | 1;
      if (uVar25 < 0xffffffa0) {
        do {
          uVar24 = (uint32_t)uVar19;
          if (((uVar17 + 0xaaf276ae) * 0x40 | uVar17 + 0xaaf276ae >> 0x1a) < uVar17 + 0xfdf46970) {
            lVar15 = 1;
            uVar26 = (uint64_t)(uVar24 & 7);
          }
          else {
            bVar9 = (uint8_t)param_3 & 0x1f;
            lVar15 = (uint64_t)
                     ((uint64_t)~(0x7cf1ed8d << bVar9 | 0x7cf1ed8dU >> 0x20 - bVar9) !=
                     0x1000000082f) * 2 + -1;
            uVar26 = uVar19 - 7;
            if (~(uVar13 * -0x69c3011) <
                ((uVar17 ^ 0xd2c89807) << 7 | (uVar17 ^ 0xd2c89807) >> 0x19)) {
              uVar26 = (uint64_t)(uVar24 & 7);
            }
          }
          piVar2 = (int *)(lVar4 + 8 + uVar19);
          uVar19 = uVar19 + lVar15;
          uVar14 = *(uint32_t *)(param_2 + 0x40 + uVar26 * 4);
          *(uint32_t *)(param_2 + 0x40 + uVar26 * 4) =
               (*piVar2 * -0x61c8864f ^ *(uint32_t *)(param_2 + 0x60)) >>
               (0x18U - (char)iStack_7c & 0x1f);
          uVar26 = (uint64_t)(uVar14 >> 3 & 0xffffffe0);
          lVar15 = 0;
          if ((*(uint8_t *)(lVar27 + uVar26) & 0x1f) == 1) {
            lVar15 = 0x1f;
          }
          lVar15 = lVar15 + (uint64_t)(*(uint8_t *)(lVar27 + uVar26) - 1 & 0x1f);
          *(char *)(lVar27 + uVar26) = (char)lVar15;
          *(char *)(lVar27 + uVar26 + lVar15) = (char)uVar14;
          *(uint32_t *)(lStack_90 + uVar26 * 4 + lVar15 * 4) = uVar24;
        } while (uVar19 != uVar25 + 0x60);
        lVar15 = *(int64_t *)(param_2 + 0x38);
        lVar20 = *(int64_t *)(param_2 + 0x70);
      }
      piVar2 = (int *)((int64_t)param_1->e_magic + 1);
      uVar21 = uVar13 * 0x588b55b7 ^ 0xb914bb66;
      uVar25 = uVar10 - 0x20;
      uStack_98 = (uint64_t)uVar25;
      piVar1 = (int *)(lVar4 + uStack_98);
      uVar14 = ((int)piVar2 - (int)piVar1) + 1;
      uVar24 = 8;
      if (uVar14 < 8) {
        uVar24 = uVar14;
      }
      uVar14 = 0;
      if (piVar1 <= piVar2) {
        uVar14 = uVar24;
      }
      bVar7 = uVar25 < uVar25 + uVar14;
      if ((int64_t)(uint64_t)~(uVar13 * -0x4878982) <=
          (int64_t)(int)(uVar21 << 6 | uVar21 >> 0x1a)) {
        bVar7 = CARRY4(uVar25,uVar14);
      }
      if (bVar7) {
        uVar13 = *(uint32_t *)(param_2 + 0x60);
        bVar9 = 0x18 - (char)*(uint32_t *)(param_2 + 0x34);
        if ((uVar14 & 1) == 0) {
          uVar19 = uStack_98;
        }
        else {
          *(uint32_t *)(param_2 + 0x40 + (uint64_t)(uVar25 & 7) * 4) =
               (*piVar1 * -0x61c8864f ^ uVar13) >> (bVar9 & 0x1f);
          uVar19 = uStack_98 + 1;
        }
        uVar28 = (short)param_3 + 0x9366;
        if (uVar14 != (uint16_t)(uVar28 >> 1 | (uint16_t)((uVar28 & 1) != 0) << 0xf)) {
          uVar14 = (int)uVar19 - uVar14;
          uStack_50 = param_3 | 1;
          uStack_60 = param_3;
          do {
            uVar26 = (uint64_t)((uint32_t)uVar19 & 7);
            if ((param_3 | 1) * 0x6229976094b647b5 + 0x433aea8e <
                (uint64_t)((0x494f416f - uVar17) * 0x34c5f011)) {
              uVar26 = uVar19 | 7;
            }
            *(uint32_t *)(param_2 + 0x40 + uVar26 * 4) =
                 (*(int *)(lVar4 + uVar19) * -0x61c8864f ^ uVar13) >> (bVar9 & 0x1f);
            *(uint32_t *)(param_2 + 0x40 + (uint64_t)((uint32_t)uVar19 + 1 & 7) * 4) =
                 (*(int *)(lVar4 + 1 + uVar19) * -0x61c8864f ^ uVar13) >> (bVar9 & 0x1f);
            uVar19 = uVar19 + 2;
            uVar14 = uVar14 + 2;
          } while (uVar25 != uVar14);
        }
      }
      else {
      }
    }
    if (uVar25 < uVar10) {
      uStack_60 = *(int64_t *)(param_2 + 8);
      uVar3 = *(uint32_t *)(param_2 + 0x34);
      uVar19 = (uint64_t)uVar25;
      do {
        piVar2 = (int *)(uStack_60 + 8 + uVar19);
        uVar13 = (uint32_t)uVar19;
        uVar26 = (uint64_t)(uVar13 & 7);
        uVar19 = uVar19 + 1;
        uVar25 = *(uint32_t *)(param_2 + 0x40 + uVar26 * 4);
        *(uint32_t *)(param_2 + 0x40 + uVar26 * 4) =
             (*piVar2 * -0x61c8864f ^ *(uint32_t *)(param_2 + 0x60)) >> (0x18U - (char)uVar3 & 0x1f);
        uVar26 = (uint64_t)(uVar25 >> 3 & 0xffffffe0);
        lVar18 = 0;
        if ((*(uint8_t *)(lVar15 + uVar26) & 0x1f) == 1) {
          lVar18 = 0x1f;
        }
        lVar18 = (uint64_t)(*(uint8_t *)(lVar15 + uVar26) - 1 & 0x1f) + lVar18;
        *(char *)(lVar15 + uVar26) = (char)lVar18;
        *(char *)(lVar15 + uVar26 + lVar18) = (char)uVar25;
        *(uint32_t *)(uVar26 * 4 + lVar20 + lVar18 * 4) = uVar13;
      } while (uVar19 != (uStack_58 & 0xffffffff));
    }
    *(uint32_t *)(param_2 + 0x2c) = uVar10;
    uVar23 = uVar23 ^ *(int *)(lVar4 + 8 + (uStack_58 & 0xffffffff)) * -0x61c8864f;
    bVar9 = (uint8_t)param_3 & 0x1f;
    uVar25 = (0x18 - iStack_7c) + uVar23;
    if ((uint64_t)(-0x60d0534c << bVar9 | 0x9f2facb4U >> 0x20 - bVar9) < 0xfffffffffd9b34a5) {
      uVar25 = uVar23 >> ((uint8_t)(0x18 - iStack_7c) & 0x1f);
    }
    uVar23 = *(uint32_t *)(param_2 + 0x40 + (uint64_t)(uVar10 & 7) * 4);
    *(uint32_t *)(param_2 + 0x40 + (uint64_t)(uVar10 & 7) * 4) = uVar25;
  }
  else {
    uVar25 = *(uint32_t *)param_1;
    *(uint32_t *)(param_2 + 0x2c) = uVar10;
    uVar23 = (uVar25 * -0x61c8864f ^ uVar23) >> (0x18U - (char)iStack_7c & 0x1f);
  }
  uVar37 = (uint8_t)(uVar23 >> 0x18);
  uVar35 = (uint8_t)(uVar23 >> 0x10);
  uVar33 = (uint8_t)(uVar23 >> 8);
  auVar31._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar37,uVar37),uVar35),CONCAT14(uVar35,uVar23)) >> 0x20);
  auVar31[3] = uVar33;
  auVar31[2] = uVar33;
  auVar31[0] = (uint8_t)uVar23;
  auVar31[1] = auVar31[0];
  auVar31._8_8_ = 0;
  auVar32 = pshuflw(auVar31,auVar31,0);
  *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + uVar23;
  uVar19 = (uint64_t)(uVar23 >> 3 & 0xffffffe0);
  lVar15 = lStack_90 + uVar19 * 4;
  pcVar16 = (char *)(lVar27 + uVar19);
  pcVar39 = (char *)(lVar27 + 0x10 + uVar19);
  cVar30 = auVar32[0];
  auVar29[0] = -(*pcVar16 == cVar30);
  cVar34 = auVar32[1];
  auVar29[1] = -(pcVar16[1] == cVar34);
  cVar36 = auVar32[2];
  auVar29[2] = -(pcVar16[2] == cVar36);
  cVar38 = auVar32[3];
  auVar29[3] = -(pcVar16[3] == cVar38);
  auVar29[4] = -(pcVar16[4] == cVar30);
  auVar29[5] = -(pcVar16[5] == cVar34);
  auVar29[6] = -(pcVar16[6] == cVar36);
  auVar29[7] = -(pcVar16[7] == cVar38);
  auVar29[8] = -(pcVar16[8] == cVar30);
  auVar29[9] = -(pcVar16[9] == cVar34);
  auVar29[10] = -(pcVar16[10] == cVar36);
  auVar29[0xb] = -(pcVar16[0xb] == cVar38);
  auVar29[0xc] = -(pcVar16[0xc] == cVar30);
  auVar29[0xd] = -(pcVar16[0xd] == cVar34);
  auVar29[0xe] = -(pcVar16[0xe] == cVar36);
  auVar29[0xf] = -(pcVar16[0xf] == cVar38);
  auVar32[0] = -(*pcVar39 == cVar30);
  auVar32[1] = -(pcVar39[1] == cVar34);
  auVar32[2] = -(pcVar39[2] == cVar36);
  auVar32[3] = -(pcVar39[3] == cVar38);
  auVar32[4] = -(pcVar39[4] == cVar30);
  auVar32[5] = -(pcVar39[5] == cVar34);
  auVar32[6] = -(pcVar39[6] == cVar36);
  auVar32[7] = -(pcVar39[7] == cVar38);
  auVar32[8] = -(pcVar39[8] == cVar30);
  auVar32[9] = -(pcVar39[9] == cVar34);
  auVar32[10] = -(pcVar39[10] == cVar36);
  auVar32[0xb] = -(pcVar39[0xb] == cVar38);
  auVar32[0xc] = -(pcVar39[0xc] == cVar30);
  auVar32[0xd] = -(pcVar39[0xd] == cVar34);
  auVar32[0xe] = -(pcVar39[0xe] == cVar36);
  auVar32[0xf] = -(pcVar39[0xf] == cVar38);
  uVar25 = CONCAT22((uint16_t)(SUB161(auVar32 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar32[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar29 >> 7,0) & 1) |
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
                    (uint16_t)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar29[0xf] >> 7) << 0xf);
  uVar23 = (uint32_t)*(uint8_t *)(lVar27 + uVar19);
  if (uVar25 != 0) {
    bVar9 = *(uint8_t *)(lVar27 + uVar19) & 0x1f;
    uVar26 = (uint64_t)(uVar25 >> bVar9 | uVar25 << 0x20 - bVar9);
    lVar20 = 0;
    do {
      iVar5 = 0;
      for (uVar6 = uVar26; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
        iVar5 = iVar5 + 1;
      }
      uVar25 = iVar5 + uVar23 & 0x1f;
      if (uVar25 != ((uVar17 ^ 0x6c9c) * 0x2005 & 0xffff)) {
        uVar25 = *(uint32_t *)(lVar15 + (uint64_t)uVar25 * 4);
        if (uVar25 < uStack_48) goto LAB_7fffa5619244;
        iVar11 = iVar11 + -1;
        auStack_198[lVar20] = uVar25;
        lVar20 = lVar20 + 1;
      }
      uVar26 = uVar26 - 1 & uVar26;
      if ((uVar26 == 0) || (iVar11 == 0)) goto LAB_7fffa5619244;
    } while( true );
  }
  lVar20 = 0;
LAB_7fffa5619244:
  lVar18 = 0x1f;
  if ((uVar23 & 0x1f) != 1) {
    lVar18 = 0;
  }
  lVar18 = (uint64_t)(uVar23 - 1 & 0x1f) + lVar18;
  *(uint8_t *)(lVar27 + uVar19) = (char)lVar18;
  ((uint8_t *)(lVar27 + uVar19))[lVar18] = auVar31[0];
  uVar23 = *(uint32_t *)(param_2 + 0x2c);
  pIVar8 = (IMAGE_DOS_HEADER *)(uint64_t)uVar23;
  *(uint32_t *)(param_2 + 0x2c) = uVar23 + 1;
  *(uint32_t *)(lVar15 + lVar18 * 4) = uVar23;
  if (lVar20 != 0) {
    pcVar16 = (char *)0x3;
    lVar27 = 0;
    do {
      puVar22 = (uint64_t *)(lVar4 + (uint64_t)auStack_198[lVar27]);
      pIVar8 = (IMAGE_DOS_HEADER *)
               (uint64_t)*(uint32_t *)((int64_t)(pcVar16 + -3) + (int64_t)puVar22);
      if (*(uint32_t *)((int64_t)(pcVar16 + -3) + (int64_t)puVar22) ==
          *(uint32_t *)(param_1[-1].e_program + 0x35 + (int64_t)pcVar16)) {
        pIVar12 = param_1;
        if (param_1 < (IMAGE_DOS_HEADER *)(pIStack_78[-1].e_program + 0x31)) {
          uVar19._0_1_ = param_1->e_magic[0];
          uVar19._1_1_ = param_1->e_magic[1];
          uVar19._2_2_ = param_1->e_cblp;
          uVar19._4_2_ = param_1->e_cp;
          uVar19._6_2_ = param_1->e_crlc;
          if (*puVar22 == uVar19) {
            pIVar8 = (IMAGE_DOS_HEADER *)0x8;
LAB_7fffa5619320:
            pIVar12 = (IMAGE_DOS_HEADER *)(pIVar8->e_magic + (int64_t)param_1->e_magic);
            if (pIVar12 < (IMAGE_DOS_HEADER *)(pIStack_78[-1].e_program + 0x31)) {
              uVar26._0_1_ = pIVar12->e_magic[0];
              uVar26._1_1_ = pIVar12->e_magic[1];
              uVar26._2_2_ = pIVar12->e_cblp;
              uVar26._4_2_ = pIVar12->e_cp;
              uVar26._6_2_ = pIVar12->e_crlc;
              if (*(uint64_t *)((int64_t)puVar22 + (int64_t)pIVar8) == uVar26)
              goto code_r0x7fffa561933a;
              uVar23 = 0;
              for (uVar26 = *(uint64_t *)((int64_t)puVar22 + (int64_t)pIVar8) ^ uVar26;
                  (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                uVar23 = uVar23 + 1;
              }
              pcVar39 = pIVar8->e_magic + (uVar23 >> 3);
              goto joined_r0x7fffa5619421;
            }
            puVar22 = (uint64_t *)((int64_t)puVar22 + (int64_t)pIVar8);
            goto joined_r0x7fffa561936d;
          }
          uVar23 = 0;
          pIVar8 = (IMAGE_DOS_HEADER *)(*puVar22 ^ uVar19);
          for (pIVar12 = pIVar8; ((uint64_t)pIVar12 & 1) == 0;
              pIVar12 = (IMAGE_DOS_HEADER *)((uint64_t)pIVar12 >> 1 | 0x8000000000000000)) {
            uVar23 = uVar23 + 1;
          }
          pcVar39 = (char *)(uint64_t)(uVar23 >> 3);
        }
        else {
joined_r0x7fffa561936d:
          if ((pIVar12 < (IMAGE_DOS_HEADER *)(pIStack_78[-1].e_program + 0x35)) &&
             (pIVar8 = (IMAGE_DOS_HEADER *)(uint64_t)(uint32_t)*puVar22,
             uVar23._0_1_ = pIVar12->e_magic[0], uVar23._1_1_ = pIVar12->e_magic[1],
             uVar23._2_2_ = pIVar12->e_cblp, (uint32_t)*puVar22 == uVar23)) {
            puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
            pIVar8 = &IMAGE_DOS_HEADER_7fffa4770000;
            pIVar12 = (IMAGE_DOS_HEADER *)&pIVar12->e_cp;
          }
          if ((pIVar12 < (IMAGE_DOS_HEADER *)(pIStack_78[-1].e_program + 0x37)) &&
             ((short)*puVar22 == *(short *)pIVar12->e_magic)) {
            puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
            pIVar12 = (IMAGE_DOS_HEADER *)&pIVar12->e_cblp;
          }
          if (pIVar12 < pIStack_78) {
            pIVar8 = (IMAGE_DOS_HEADER *)(uint64_t)(uint8_t)*puVar22;
            pIVar12 = (IMAGE_DOS_HEADER *)
                      ((int64_t)pIVar12->e_magic +
                      (uint64_t)((uint8_t)*puVar22 == (uint8_t)*(word *)pIVar12->e_magic));
          }
          pcVar39 = (char *)((int64_t)pIVar12 - (int64_t)param_1);
        }
joined_r0x7fffa5619421:
        if (pcVar16 < pcVar39) {
          pIVar8 = (IMAGE_DOS_HEADER *)(pcVar39 + (int64_t)param_1->e_magic);
          *param_5 = (uint64_t)(((int)uStack_58 + 3) - auStack_198[lVar27]);
          pcVar16 = pcVar39;
          if (pIVar8 == pIStack_78) {
            return pIVar8;
          }
        }
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 != lVar20);
  }
  return pIVar8;
code_r0x7fffa561933a:
  pIVar8 = (IMAGE_DOS_HEADER *)&pIVar8->e_cparhdr;
  goto LAB_7fffa5619320;
}


// ============================================================================
// Function : FUN_7fffa5619480  |  RVA: 0xea9480  |  Size: 12349 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5619480(void) {
    /* +0xea9480 */ __asm { PUSH R15 }
    /* +0xea9482 */ __asm { PUSH R12 }
    /* +0xea9484 */ __asm { PUSH RBP }
    /* +0xea9485 */ __asm { PUSH RDI }
    /* +0xea9486 */ __asm { PUSH RBX }
    /* +0xea9487 */ __asm { PUSH RSI }
    /* +0xea9488 */ __asm { PUSH R13 }
    /* +0xea948a */ __asm { PUSH R14 }
    /* +0xea948c */ __asm { SUB RSP,0x5e8 }
    /* +0xea9493 */ __asm { MOV RAX,R12 }
    /* +0xea9496 */ __asm { MOV EDX,0x15132b0a }
    /* +0xea949b */ __asm { IMUL R9D,EDX,0x434b370b }
    /* +0xea94a2 */ __asm { MOV EDX,0xa1e3aa0e }
    /* +0xea94a7 */ __asm { IMUL R10D,EDX,0x15db37d }
    /* +0xea94ae */ __asm { MOV RDX,RAX }
    /* +0xea94b1 */ __asm { NOT RDX }
    /* +0xea94b4 */ __asm { MOVQ XMM3,RDX }
    /* +0xea94b9 */ __asm { MOV R11,RBX }
    /* +0xea94bc */ __asm { MOVQ XMM1,R11 }
    /* +0xea94c1 */ __asm { PAND XMM1,XMM3 }
    /* +0xea94c5 */ __asm { MOV R8,RAX }
    /* +0xea94c8 */ __asm { XOR R8,R11 }
    /* +0xea94cb */ __asm { IMUL R8,R8,0x17bfb59f }
    /* +0xea94d2 */ __asm { MOV R14,R11 }
    /* +0xea94d5 */ __asm { NOT R14 }
    /* +0xea94d8 */ __asm { MOVQ RCX,XMM1 }
    /* +0xea94dd */ __asm { MOV RBP,-0x19a462157 }
    /* +0xea94e7 */ __asm { IMUL RBP,RCX }
    /* +0xea94eb */ __asm { NOT R9D }
    /* +0xea94ee */ __asm { IMUL R9,RCX }
    /* +0xea94f2 */ __asm { MOV qword ptr [RSP + 0x78],R14 }
    /* +0xea94f7 */ __asm { AND RAX,R14 }
    /* +0xea94fa */ __asm { MOV RCX,-0xda4620c6 }
    /* +0xea9504 */ __asm { IMUL RCX,RAX }
    /* +0xea9508 */ __asm { XOR RDX,R11 }
    /* +0xea950b */ __asm { IMUL R15,RDX,0x7474a547 }
    /* +0xea9512 */ __asm { ADD R15,R8 }
    /* +0xea9515 */ __asm { LEA RAX,[R9 + R15*0x1] }
    /* +0xea9519 */ __asm { MOV R8,-0x136fb106e }
    /* +0xea9523 */ __asm { IMUL R8,RDX }
    /* +0xea9527 */ __asm { ADD R8,RCX }
    /* +0xea952a */ __asm { ADD R8,RBP }
    /* +0xea952d */ __asm { IMUL R15,R9 }
    /* +0xea9531 */ __asm { MOV R9D,0xa3541733 }
    /* +0xea9537 */ __asm { ADD R9D,0x85daaebf }
    /* +0xea953e */ __asm { XOR R10D,0xc0e8e711 }
    /* +0xea9545 */ __asm { CMP R10,R9 }
    /* +0xea9548 */ __asm { CMOVNC R15,RAX }
    /* +0xea954c */ __asm { ADD R15,R8 }
    /* +0xea954f */ __asm { MOV dword ptr [RSP + 0xb0],0xb1a7177d }
    /* +0xea955a */ __asm { MOV EDX,dword ptr [RSP + 0xb0] }
    /* +0xea9561 */ __asm { MOV R10D,0x5eb79530 }
    /* +0xea9567 */ __asm { XOR R10D,0x2078cb68 }
    /* +0xea956e */ __asm { MOV R9D,0x41cfe31f }
    /* +0xea9574 */ __asm { XOR R9D,R15D }
    /* +0xea9577 */ __asm { NOT R9D }
    /* +0xea957a */ __asm { CMP R10,R9 }
    /* +0xea957d */ __asm { JC 0x7fffa56195ed }
    /* +0xea957f */ __asm { MOV EDX,0x1e6d3dd4 }
    /* +0xea9584 */ __asm { IMUL ESI,EDX,0x3a695497 }
    /* +0xea958a */ __asm { XOR ESI,R15D }
    /* +0xea958d */ __asm { MOV dword ptr [RSP + 0xac],0x43084991 }
    /* +0xea9598 */ __asm { MOV EDX,dword ptr [RSP + 0xac] }
    /* +0xea959f */ __asm { MOV dword ptr [RSP + 0x110],0x484bd5c5 }
    /* +0xea95aa */ __asm { MOV EDX,dword ptr [RSP + 0x110] }
    /* +0xea95b1 */ __asm { MOV RAX,0x1913573d09b20974 }
    /* +0xea95bb */ __asm { MOV R8,-0x7cc6940b51e459e7 }
    /* +0xea95c5 */ __asm { LEA RDX,[RSP + 0x110] }
    /* +0xea95cd */ __asm { MOV R9,0x1f40b4d90d57e4bf }
    /* +0xea95d7 */ __asm { MOV RBP,-0x14c21ecc66b14862 }
    /* +0xea95e1 */ __asm { MOV RCX,0x4fd20fa98ffd72c8 }
    /* +0xea95eb */ __asm { JMP 0x7fffa561966a }
    /* +0xea95ed */ __asm { MOV RAX,0x1913573d09b20974 }
    /* +0xea95f7 */ __asm { MOV dword ptr [RSP + 0x110],0x484bd5c5 }
    /* +0xea9602 */ __asm { MOV EDX,dword ptr [RSP + 0x110] }
    /* +0xea9609 */ __asm { MOV RCX,0x4fd20fa98ffd72c8 }
    /* +0xea9613 */ __asm { MOV R9,0x1f40b4d90d57e4bf }
    /* +0xea961d */ __asm { MOV R8,-0x7cc6940b51e459e7 }
    /* +0xea9627 */ __asm { MOV EDX,dword ptr [RSP + 0xac] }
    /* +0xea962e */ __asm { MOV EDX,R15D }
    /* +0xea9631 */ __asm { OR EDX,0x1 }
    /* +0xea9634 */ __asm { MOV R10D,0x8591bfc8 }
    /* +0xea963a */ __asm { ADD R10D,0x285738bf }
    /* +0xea9641 */ __asm { IMUL R10D,EDX }
    /* +0xea9645 */ __asm { MOV dword ptr [RSP + 0xac],R10D }
    /* +0xea964d */ __asm { MOV RBP,-0x14c21ecc66b14862 }
    /* +0xea9657 */ __asm { LEA RDX,[RSP + 0x110] }
    /* +0xea965f */ __asm { MOV ESI,0x4c09c583 }
    /* +0xea9664 */ __asm { XOR ESI,R15D }
    /* +0xea9667 */ __asm { ROL ESI,0x7 }
    /* +0xea966a */ __asm { MOV R12,-0x7e04f32c556e8445 }
    /* +0xea9674 */ __asm { MOV R13,0x1972575809da0937 }
    /* +0xea967e */ __asm { MOV RBX,0x311fcb78eae1d350 }
    /* +0xea9688 */ __asm { MOV R10,-0x7e6df35855008406 }
    /* +0xea9692 */ __asm { MOV RDI,0x4fab0fda8f9c728d }
    /* +0xea969c */ __asm { MOV R14D,0x4973b3af }
    /* +0xea96a2 */ __asm { MOV qword ptr [RSP + 0xe8],RBP }
    /* +0xea96aa */ __asm { MOV qword ptr [RSP + 0xb0],R9 }
    /* +0xea96b2 */ __asm { MOV R9,-0x4fa0cad969fb0e4f }
    /* +0xea96bc */ __asm { MOV qword ptr [RSP + 0xc8],R12 }
    /* +0xea96c4 */ __asm { MOV R12,-0x7c9a946e51875990 }
    /* +0xea96ce */ __asm { MOV qword ptr [RSP + 0xb8],R8 }
    /* +0xea96d6 */ __asm { MOV R8,0x3150cb3deabed324 }
    /* +0xea96e0 */ __asm { MOV qword ptr [RSP + 0xd8],RBX }
    /* +0xea96e8 */ __asm { MOV RBX,-0x4fa0cad969fb0e1e }
    /* +0xea96f2 */ __asm { MOV qword ptr [RSP + 0xe0],RBX }
    /* +0xea96fa */ __asm { MOV qword ptr [RSP + 0xd0],RAX }
    /* +0xea9702 */ __asm { MOV qword ptr [RSP + 0xc0],RCX }
    /* +0xea970a */ __asm { MOV qword ptr [RSP + 0x118],R12 }
    /* +0xea9712 */ __asm { MOV qword ptr [RSP + 0x130],R13 }
    /* +0xea971a */ __asm { MOV qword ptr [RSP + 0x148],RBP }
    /* +0xea9722 */ __asm { MOV qword ptr [RSP + 0x120],RDI }
    /* +0xea972a */ __asm { MOV qword ptr [RSP + 0x138],R8 }
    /* +0xea9732 */ __asm { MOV qword ptr [RSP + 0x140],R9 }
    /* +0xea973a */ __asm { MOV qword ptr [RSP + 0x128],R10 }
    /* +0xea9742 */ __asm { MOV RAX,0x1f36b4bc0d13e4e3 }
    /* +0xea974c */ __asm { MOVAPS XMM3,xmmword ptr [RSP + 0xd0] }
    /* +0xea9754 */ __asm { XORPS XMM3,xmmword ptr [RDX + 0x20] }
    /* +0xea9758 */ __asm { MOVDQA XMM1,xmmword ptr [RDX + 0x10] }
    /* +0xea975d */ __asm { MOV qword ptr [RSP + 0x110],RAX }
    /* +0xea9765 */ __asm { MOVDQA XMM2,xmmword ptr [RSP + 0xb0] }
    /* +0xea976e */ __asm { PXOR XMM1,xmmword ptr [RSP + 0xc0] }
    /* +0xea9777 */ __asm { PXOR XMM2,xmmword ptr [RDX] }
    /* +0xea977b */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM2 }
    /* +0xea9784 */ __asm { MOVAPS xmmword ptr [RSP + 0xd0],XMM3 }
    /* +0xea978c */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM1 }
    /* +0xea9795 */ __asm { MOVDQA XMM3,xmmword ptr [RDX + 0x30] }
    /* +0xea979a */ __asm { PXOR XMM3,xmmword ptr [RSP + 0xe0] }
    /* +0xea97a3 */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM3 }
    /* +0xea97ac */ __asm { ADD R14D,0x82e87f4 }
    /* +0xea97b3 */ __asm { XOR R14D,ESI }
    /* +0xea97b6 */ __asm { ADD R14D,R15D }
    /* +0xea97b9 */ __asm { MOV dword ptr [RSP + 0x110],R14D }
    /* +0xea97c1 */ __asm { MOV EDX,dword ptr [RSP + 0x110] }
    /* +0xea97c8 */ __asm { CMP EDX,0x3d9667e3 }
    /* +0xea97ce */ __asm { MOV RBP,R15 }
    /* +0xea97d1 */ __asm { MOV RDI,RSI }
    /* +0xea97d4 */ __asm { JBE 0x7fffa561b3b0 }
    /* +0xea97da */ __asm { PUSHFQ }
    /* +0xea97db */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xea97e3 */ __asm { POPFQ }
    /* +0xea97e4 */ __asm { LEA RDX,[RSP + 0xb0] }
    /* +0xea97ec */ __asm { MOV qword ptr [RSP + 0x70],RDX }
    /* +0xea97f1 */ __asm { MOV dword ptr [RSP + 0x68],0x320032 }
    /* +0xea97f9 */ __asm { MOV dword ptr [RSP + 0x50],0x2221050 }
    /* +0xea9801 */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xea9805 */ __asm { TEST EDX,EDX }
    /* +0xea9807 */ __asm { NOP }
    /* +0xea9808 */ __asm { NOP }
    /* +0xea9809 */ __asm { NOP }
    /* +0xea980a */ __asm { NOP }
    /* +0xea980b */ __asm { NOP }
    /* +0xea980c */ __asm { MOV R13D,EDI }
    /* +0xea980f */ __asm { MOV EDX,0x51ac72ce }
    /* +0xea9814 */ __asm { LEA R9D,[RDI + RDX*0x1] }
    /* +0xea9818 */ __asm { ADD R9D,0x1d78841e }
    /* +0xea981f */ __asm { MOV ECX,EBP }
    /* +0xea9821 */ __asm { ROR R9D,CL }
    /* +0xea9824 */ __asm { MOV R10D,0x46c3801f }
    /* +0xea982a */ __asm { ADD R10D,EDI }
    /* +0xea982d */ __asm { ROR R10D,CL }
    /* +0xea9830 */ __asm { OR R13D,0x1 }
    /* +0xea9834 */ __asm { ADD R10D,0xc03f4103 }
    /* +0xea983b */ __asm { CMP R10,R9 }
    /* +0xea983e */ __asm { JGE 0x7fffa56198ba }
    /* +0xea9840 */ __asm { MOV EDX,0xe08208a9 }
    /* +0xea9845 */ __asm { ADD EDX,EBP }
    /* +0xea9847 */ __asm { XOR EDX,0xf2c9f329 }
    /* +0xea984d */ __asm { IMUL EDX,R13D }
    /* +0xea9851 */ __asm { MOVSXD RSI,EDX }
    /* +0xea9854 */ __asm { MOV dword ptr [RSP + 0x9c],0xa9309024 }
    /* +0xea985f */ __asm { MOV dword ptr [RSP + 0x110],0x30 }
    /* +0xea986a */ __asm { MOV dword ptr [RSP + 0x128],0x40 }
    /* +0xea9875 */ __asm { PUSHFQ }
    /* +0xea9876 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xea987e */ __asm { POPFQ }
    /* +0xea987f */ __asm { MOV qword ptr [RSP + 0x118],0x0 }
    /* +0xea988b */ __asm { MOV EDX,dword ptr [RSP + 0x9c] }
    /* +0xea9892 */ __asm { RDTSC }
    /* +0xea9894 */ __asm { MOV RCX,RDX }
    /* +0xea9897 */ __asm { SHL RCX,0x20 }
    /* +0xea989b */ __asm { OR RCX,RAX }
    /* +0xea989e */ __asm { LEA RDX,[RSP + 0x68] }
    /* +0xea98a3 */ __asm { MOV qword ptr [RSP + 0x120],RDX }
    /* +0xea98ab */ __asm { PXOR XMM3,XMM3 }
    /* +0xea98af */ __asm { MOVDQU xmmword ptr [RSP + 0x130],XMM3 }
    /* +0xea98b8 */ __asm { JMP 0x7fffa5619935 }
    /* +0xea98ba */ __asm { MOV ESI,0x7bf56e1 }
    /* +0xea98bf */ __asm { ADD ESI,0xcd05a56d }
    /* +0xea98c5 */ __asm { MOV ECX,EDI }
    /* +0xea98c7 */ __asm { ROL ESI,CL }
    /* +0xea98c9 */ __asm { ADD ESI,EBP }
    /* +0xea98cb */ __asm { XOR ESI,0xffab86dd }
    /* +0xea98d1 */ __asm { PUSHFQ }
    /* +0xea98d2 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xea98da */ __asm { POPFQ }
    /* +0xea98db */ __asm { MOV qword ptr [RSP + 0x118],0x0 }
    /* +0xea98e7 */ __asm { MOV dword ptr [RSP + 0x110],0x30 }
    /* +0xea98f2 */ __asm { MOV dword ptr [RSP + 0x128],0x40 }
    /* +0xea98fd */ __asm { LEA RDX,[RSP + 0x68] }
    /* +0xea9902 */ __asm { MOV qword ptr [RSP + 0x120],RDX }
    /* +0xea990a */ __asm { PXOR XMM3,XMM3 }
    /* +0xea990e */ __asm { MOVDQU xmmword ptr [RSP + 0x130],XMM3 }
    /* +0xea9917 */ __asm { MOV dword ptr [RSP + 0x9c],0xa9309024 }
    /* +0xea9922 */ __asm { MOV EDX,dword ptr [RSP + 0x9c] }
    /* +0xea9929 */ __asm { RDTSC }
    /* +0xea992b */ __asm { MOV RCX,RDX }
    /* +0xea992e */ __asm { SHL RCX,0x20 }
    /* +0xea9932 */ __asm { OR RCX,RAX }
    /* +0xea9935 */ __asm { MOV RDX,-0x30ebf64fafbc6efb }
    /* +0xea993f */ __asm { IMUL RCX,RDX }
    /* +0xea9943 */ __asm { MOV RDX,-0x22b18422c4a9c65e }
    /* +0xea994d */ __asm { ADD RCX,RDX }
    /* +0xea9950 */ __asm { MOV RDX,RCX }
    /* +0xea9953 */ __asm { SHR RDX,0x2d }
    /* +0xea9957 */ __asm { MOV R10,RCX }
    /* +0xea995a */ __asm { SHR R10,0x1b }
    /* +0xea995e */ __asm { XOR R10D,EDX }
    /* +0xea9961 */ __asm { SHR RCX,0x3b }
    /* +0xea9965 */ __asm { ROR R10D,CL }
    /* +0xea9968 */ __asm { AND R10D,0x3 }
    /* +0xea996c */ __asm { CMP R10D,0x2 }
    /* +0xea9970 */ __asm { JC 0x7fffa56199fe }
    /* +0xea9976 */ __asm { CMP R10D,0x3 }
    /* +0xea997a */ __asm { JNZ 0x7fffa5619ad8 }
    /* +0xea9980 */ __asm { LEA RAX,[0x7fffa47bedd8] }
    /* +0xea9987 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xea998e */ __asm { MOV RDX,0x0 }
    /* +0xea9995 */ __asm { NOP }
    /* +0xea9996 */ __asm { MOV RDX,-0x149f9277e9278b98 }
    /* +0xea99a0 */ __asm { CMP RAX,RDX }
    /* +0xea99a3 */ __asm { JZ 0x7fffa561b3c8 }
    /* +0xea99a9 */ __asm { MOV R10D,0xd38e9814 }
    /* +0xea99af */ __asm { ADD R10D,0xe5124b30 }
    /* +0xea99b6 */ __asm { MOV ECX,EBP }
    /* +0xea99b8 */ __asm { ROR R10D,CL }
    /* +0xea99bb */ __asm { NOT R10D }
    /* +0xea99be */ __asm { CMP R10,0x768ebe39 }
    /* +0xea99c5 */ __asm { JNZ 0x7fffa561a077 }
    /* +0xea99cb */ __asm { MOV R11D,0x678ba427 }
    /* +0xea99d1 */ __asm { MOVZX EDX,uint8_t ptr [RAX + -0x274b] }
    /* +0xea99d8 */ __asm { LEA RDX,[RAX + RDX*0x4] }
    /* +0xea99dc */ __asm { ADD RDX,-0x273b }
    /* +0xea99e3 */ __asm { LEA R8D,[R11 + RBP*0x1] }
    /* +0xea99e7 */ __asm { ADD R8D,0xd8560831 }
    /* +0xea99ee */ __asm { MOV R9D,ESI }
    /* +0xea99f1 */ __asm { OR R9D,0x1 }
    /* +0xea99f5 */ __asm { IMUL R9D,R8D }
    /* +0xea99f9 */ __asm { JMP 0x7fffa561a09f }
    /* +0xea99fe */ __asm { CMP R10D,0x1 }
    /* +0xea9a02 */ __asm { JZ 0x7fffa5619d4d }
    /* +0xea9a08 */ __asm { MOV EAX,0x8257cf15 }
    /* +0xea9a0d */ __asm { MOV RDX,RAX }
    /* +0xea9a10 */ __asm { ADD RDX,0x4d971e5a }
    /* +0xea9a17 */ __asm { MOV R10,-0x376135fdbfaf537c }
    /* +0xea9a21 */ __asm { SUB R10,RBP }
    /* +0xea9a24 */ __asm { XOR R10,-0x6342496a }
    /* +0xea9a2b */ __asm { MOV ECX,ESI }
    /* +0xea9a2d */ __asm { ROL R10,CL }
    /* +0xea9a30 */ __asm { MOV R9,-0xbc6369f5 }
    /* +0xea9a3a */ __asm { ADD R9,R10 }
    /* +0xea9a3d */ __asm { CMP R9,RDX }
    /* +0xea9a40 */ __asm { JZ 0x7fffa561b3ce }
    /* +0xea9a46 */ __asm { MOV R8D,0x40672e53 }
    /* +0xea9a4c */ __asm { MOV R10,qword ptr [RAX + -0x259cf0d] }
    /* +0xea9a53 */ __asm { MOV RDX,-0x15b893d97dde9192 }
    /* +0xea9a5d */ __asm { MOV RAX,R10 }
    /* +0xea9a60 */ __asm { MUL RDX }
    /* +0xea9a63 */ __asm { MOV R9,RDX }
    /* +0xea9a66 */ __asm { MOV EDX,0x14740ec }
    /* +0xea9a6b */ __asm { MOV RAX,R10 }
    /* +0xea9a6e */ __asm { MUL RDX }
    /* +0xea9a71 */ __asm { ADD RAX,R9 }
    /* +0xea9a74 */ __asm { ADC RDX,0x0 }
    /* +0xea9a78 */ __asm { IMUL R10D,R8D,-0x761e7bfb }
    /* +0xea9a7f */ __asm { ADD R10D,EDI }
    /* +0xea9a82 */ __asm { ROL R10D,0x15 }
    /* +0xea9a86 */ __asm { XOR R10D,EBP }
    /* +0xea9a89 */ __asm { CMP R10,-0x5f326404 }
    /* +0xea9a90 */ __asm { JZ 0x7fffa561a01e }
    /* +0xea9a96 */ __asm { AND EDX,0x1 }
    /* +0xea9a99 */ __asm { JNZ 0x7fffa561a01e }
    /* +0xea9a9f */ __asm { LEA RAX,[0x7fffa47c4730] }
    /* +0xea9aa6 */ __asm { MOV RDX,-0x121c533c0635a106 }
    /* +0xea9ab0 */ __asm { CMP RAX,RDX }
    /* +0xea9ab3 */ __asm { JZ 0x7fffa561b3d6 }
    /* +0xea9ab9 */ __asm { MOV DX,0x41f7 }
    /* +0xea9abd */ __asm { SUB EDX,ESI }
    /* +0xea9abf */ __asm { XOR EDX,0xdae6 }
    /* +0xea9ac5 */ __asm { MOVZX EDX,DX }
    /* +0xea9ac8 */ __asm { MOV qword ptr [RSP + 0x50],R10 }
    /* +0xea9acd */ __asm { MOV EAX,dword ptr [RAX + -0x7740] }
    /* +0xea9ad3 */ __asm { JMP 0x7fffa561a5b0 }
    /* +0xea9ad8 */ __asm { RDTSC }
    /* +0xea9ada */ __asm { SHL RDX,0x20 }
    /* +0xea9ade */ __asm { OR RDX,RAX }
    /* +0xea9ae1 */ __asm { MOV R10,-0x5a46117eacb056b3 }
    /* +0xea9aeb */ __asm { IMUL R10,RDX }
    /* +0xea9aef */ __asm { MOV R9,-0x5505a0b48b2b406e }
    /* +0xea9af9 */ __asm { ADD R9,R10 }
    /* +0xea9afc */ __asm { MOV RCX,R9 }
    /* +0xea9aff */ __asm { SHR RCX,0x3b }
    /* +0xea9b03 */ __asm { MOV R10,R9 }
    /* +0xea9b06 */ __asm { SHR R10,0x2d }
    /* +0xea9b0a */ __asm { SHR R9,0x1b }
    /* +0xea9b0e */ __asm { XOR R10D,R9D }
    /* +0xea9b11 */ __asm { ROR R10D,CL }
    /* +0xea9b14 */ __asm { MOV dword ptr [RSP + 0x50],0x577e4a7e }
    /* +0xea9b1c */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xea9b20 */ __asm { MOV R8D,0xdcfa1cfb }
    /* +0xea9b26 */ __asm { XOR R8D,EBP }
    /* +0xea9b29 */ __asm { MOV EAX,ESI }
    /* +0xea9b2b */ __asm { OR EAX,0x1 }
    /* +0xea9b2e */ __asm { MOVD XMM3,EAX }
    /* +0xea9b32 */ __asm { ROL R8D,0x5 }
    /* +0xea9b36 */ __asm { MOVD XMM1,R8D }
    /* +0xea9b3b */ __asm { PMULUDQ XMM1,XMM3 }
    /* +0xea9b3f */ __asm { MOVD R8D,XMM1 }
    /* +0xea9b44 */ __asm { CMP EDX,R8D }
    /* +0xea9b47 */ __asm { NOP }
    /* +0xea9b48 */ __asm { NOP }
    /* +0xea9b49 */ __asm { NOP }
    /* +0xea9b4a */ __asm { NOP }
    /* +0xea9b4b */ __asm { NOP }
    /* +0xea9b4c */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xea9b53 */ __asm { MOV RAX,0x0 }
    /* +0xea9b5a */ __asm { CMP R10D,0x4505b8 }
    /* +0xea9b61 */ __asm { JA 0x7fffa5619cf2 }
    /* +0xea9b67 */ __asm { MOV dword ptr [RSP + 0x50],0xebec7326 }
    /* +0xea9b6f */ __asm { MOV EDX,dword ptr [RSP + 0x50] }
    /* +0xea9b73 */ __asm { MOV EAX,0x46156a5a }
    /* +0xea9b78 */ __asm { MOV RDX,0x3eb90e63f98e63d8 }
    /* +0xea9b82 */ __asm { CMP RAX,RDX }
    /* +0xea9b85 */ __asm { JZ 0x7fffa561b3df }
    /* +0xea9b8b */ __asm { MOV R10,qword ptr [RAX + 0x39e895ae] }
    /* +0xea9b92 */ __asm { MOV RDX,0x10de372433d436bc }
    /* +0xea9b9c */ __asm { MOV RAX,R10 }
    /* +0xea9b9f */ __asm { MUL RDX }
    /* +0xea9ba2 */ __asm { MOV R9,RDX }
    /* +0xea9ba5 */ __asm { MOV EDX,0x1474d8f }
    /* +0xea9baa */ __asm { MOV RAX,R10 }
    /* +0xea9bad */ __asm { MUL RDX }
    /* +0xea9bb0 */ __asm { ADD RAX,R9 }
    /* +0xea9bb3 */ __asm { ADC RDX,0x0 }
    /* +0xea9bb7 */ __asm { TEST DL,0x1 }
    /* +0xea9bba */ __asm { JZ 0x7fffa5619cf2 }
    /* +0xea9bc0 */ __asm { PXOR XMM3,XMM3 }
    /* +0xea9bc4 */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM3 }
    /* +0xea9bca */ __asm { MOV dword ptr [RSP + 0x90],0x54fab2ca }
    /* +0xea9bd5 */ __asm { MOV EDX,dword ptr [RSP + 0x90] }
    /* +0xea9bdc */ __asm { MOV dword ptr [RSP + 0x50],0x0 }
    /* +0xea9be4 */ __asm { MOV RDX,-0x1b468ad57a1e6e96 }
    /* +0xea9bee */ __asm { XOR RDX,RBP }
    /* +0xea9bf1 */ __asm { MOV R10D,0x2a6c6240 }
    /* +0xea9bf7 */ __asm { SUB R10,RDX }
    /* +0xea9bfa */ __asm { MOV EDX,0xb78049f4 }
    /* +0xea9bff */ __asm { MOV R9D,EDI }
    /* +0xea9c02 */ __asm { SUB R9D,EDX }
    /* +0xea9c05 */ __asm { ADD R9D,0x4b52e751 }
    /* +0xea9c0c */ __asm { MOV RDX,qword ptr [R9] }
    /* +0xea9c0f */ __asm { ROL RDX,0x1c }
    /* +0xea9c13 */ __asm { MOV R9,-0x3292e366350bcb71 }
    /* +0xea9c1d */ __asm { IMUL R9,RDX }
    /* +0xea9c21 */ __asm { CMP R10,R9 }
    /* +0xea9c24 */ __asm { NOP }
    /* +0xea9c25 */ __asm { NOP }
    /* +0xea9c26 */ __asm { NOP }
    /* +0xea9c27 */ __asm { NOP }
    /* +0xea9c28 */ __asm { NOP }
    /* +0xea9c29 */ __asm { MOV dword ptr [RSP + 0x90],0xf4892843 }
    /* +0xea9c34 */ __asm { MOV EDX,dword ptr [RSP + 0x90] }
    /* +0xea9c3b */ __asm { CMP EDX,0xd9fb81a4 }
    /* +0xea9c41 */ __asm { NOP }
    /* +0xea9c42 */ __asm { NOP }
    /* +0xea9c43 */ __asm { NOP }
    /* +0xea9c44 */ __asm { NOP }
    /* +0xea9c45 */ __asm { NOP }
    /* +0xea9c46 */ __asm { PUSHFQ }
    /* +0xea9c47 */ __asm { POP R11 }
    /* +0xea9c49 */ __asm { TEST R11D,0x100 }
    /* +0xea9c50 */ __asm { NOP }
    /* +0xea9c51 */ __asm { NOP }
    /* +0xea9c52 */ __asm { NOP }
    /* +0xea9c53 */ __asm { NOP }
    /* +0xea9c54 */ __asm { NOP }
    /* +0xea9c55 */ __asm { NOP }
    /* +0xea9c56 */ __asm { LEA RAX,[0x7fffa4784b47] }
    /* +0xea9c5d */ __asm { MOV RDX,0x1b9dd092665c256a }
    /* +0xea9c67 */ __asm { CMP RAX,RDX }
    /* +0xea9c6a */ __asm { NOP }
    /* +0xea9c6b */ __asm { NOP }
    /* +0xea9c6c */ __asm { NOP }
    /* +0xea9c6d */ __asm { NOP }
    /* +0xea9c6e */ __asm { NOP }
    /* +0xea9c6f */ __asm { MOV DX,0xa7d1 }
    /* +0xea9c73 */ __asm { MOV R8W,0xb6af }
    /* +0xea9c78 */ __asm { MOV R10W,0x4f64 }
    /* +0xea9c7d */ __asm { ADD EDX,0x442e }
    /* +0xea9c83 */ __asm { MOV ECX,EBP }
    /* +0xea9c85 */ __asm { ROR DX,CL }
    /* +0xea9c88 */ __asm { IMUL R8D,R8D,-0x653f }
    /* +0xea9c8f */ __asm { MOV R11W,0xbd5c }
    /* +0xea9c94 */ __asm { MOV qword ptr [RSP + 0x90],RCX }
    /* +0xea9c9c */ __asm { IMUL R10D,R10D,-0x6703 }
    /* +0xea9ca3 */ __asm { NOT R10D }
    /* +0xea9ca6 */ __asm { MOV R9D,EBP }
    /* +0xea9ca9 */ __asm { OR R9D,0x1 }
    /* +0xea9cad */ __asm { XOR R11D,ESI }
    /* +0xea9cb0 */ __asm { ADD R11D,0x25b3 }
    /* +0xea9cb7 */ __asm { SUB R10D,ESI }
    /* +0xea9cba */ __asm { MOV ECX,ESI }
    /* +0xea9cbc */ __asm { ROL DX,CL }
    /* +0xea9cbf */ __asm { IMUL R10D,R9D }
    /* +0xea9cc3 */ __asm { MOVZX R9D,R10W }
    /* +0xea9cc7 */ __asm { NOT EDX }
    /* +0xea9cc9 */ __asm { MOVZX EDX,DX }
    /* +0xea9ccc */ __asm { MOV ECX,EBP }
    /* +0xea9cce */ __asm { ROR R11W,CL }
    /* +0xea9cd2 */ __asm { MOVSX R10,R11W }
    /* +0xea9cd6 */ __asm { MOV EAX,dword ptr [RAX + R9*0x1 + 0x128] }
    /* +0xea9cde */ __asm { NOT R8D }
    /* +0xea9ce1 */ __asm { MOV ECX,ESI }
    /* +0xea9ce3 */ __asm { ROL R8W,CL }
    /* +0xea9ce7 */ __asm { MOVZX R9D,R8W }
    /* +0xea9ceb */ __asm { LEA R8,[RSP + 0x50] }
    /* +0xea9cf0 */ __asm { SYSCALL }
    /* +0xea9cf2 */ __asm { LEA RAX,[0x7fffa478c21f] }
    /* +0xea9cf9 */ __asm { MOV RDX,-0x2f52ca923ea61477 }
    /* +0xea9d03 */ __asm { IMUL RDX,RAX }
    /* +0xea9d07 */ __asm { MOV R10,0x48f7a81fafca1989 }
    /* +0xea9d11 */ __asm { ADD R10,RDX }
    /* +0xea9d14 */ __asm { MOV RDX,0x62bce0536262a538 }
    /* +0xea9d1e */ __asm { CMP R10,RDX }
    /* +0xea9d21 */ __asm { NOP }
    /* +0xea9d22 */ __asm { NOP }
    /* +0xea9d23 */ __asm { NOP }
    /* +0xea9d24 */ __asm { NOP }
    /* +0xea9d25 */ __asm { NOP }
    /* +0xea9d26 */ __asm { MOV qword ptr [RSP + 0x50],RDX }
    /* +0xea9d2b */ __asm { MOV R11W,0x6186 }
    /* +0xea9d30 */ __asm { LEA EDX,[R11 + R11*0x4] }
    /* +0xea9d34 */ __asm { LEA EDX,[R11 + RDX*0x4] }
    /* +0xea9d38 */ __asm { NOT EDX }
    /* +0xea9d3a */ __asm { MOV ECX,ESI }
    /* +0xea9d3c */ __asm { ROR DX,CL }
    /* +0xea9d3f */ __asm { MOVZX EDX,DX }
    /* +0xea9d42 */ __asm { MOV EAX,dword ptr [RAX + -0x7b77] }
    /* +0xea9d48 */ __asm { JMP 0x7fffa561a5b0 }
    /* +0xea9d4d */ __asm { MOV R14,RSI }
    /* +0xea9d50 */ __asm { MOV qword ptr [RSP + 0x100],R13 }
    /* +0xea9d58 */ __asm { MOV qword ptr [RSP + 0xf8],RDI }
    /* +0xea9d60 */ __asm { MOV qword ptr [RSP + 0xa0],RBP }
    /* +0xea9d68 */ __asm { MOV ECX,0xf4a16634 }
    /* +0xea9d6d */ __asm { MOV RDX,-0x7a98c91554b36ed4 }
    /* +0xea9d77 */ __asm { CMP RCX,RDX }
    /* +0xea9d7a */ __asm { NOP }
    /* +0xea9d7b */ __asm { NOP }
    /* +0xea9d7c */ __asm { NOP }
    /* +0xea9d7d */ __asm { NOP }
    /* +0xea9d7e */ __asm { NOP }
    /* +0xea9d7f */ __asm { NOP }
    /* +0xea9d80 */ __asm { NOP }
    /* +0xea9d81 */ __asm { NOP }
    /* +0xea9d82 */ __asm { NOP }
    /* +0xea9d83 */ __asm { NOP }
    /* +0xea9d84 */ __asm { NOP }
    /* +0xea9d85 */ __asm { NOP }
    /* +0xea9d86 */ __asm { NOP }
    /* +0xea9d87 */ __asm { MOVQ XMM2,R9 }
    /* +0xea9d8c */ __asm { MOV RDX,R9 }
    /* +0xea9d8f */ __asm { OR RDX,RCX }
    /* +0xea9d92 */ __asm { MOV qword ptr [RSP + 0x60],RDX }
    /* +0xea9d97 */ __asm { MOV EDX,0xfe86ff6 }
    /* +0xea9d9c */ __asm { MOV dword ptr [RSP + 0x108],EDX }
    /* +0xea9da3 */ __asm { MOV DI,0x6766 }
    /* +0xea9da7 */ __asm { MOV EDX,0xbb7cfacc }
    /* +0xea9dac */ __asm { MOV RBP,RCX }
    /* +0xea9daf */ __asm { NOT RBP }
    /* +0xea9db2 */ __asm { MOV R12,R9 }
    /* +0xea9db5 */ __asm { NOT R12 }
    /* +0xea9db8 */ __asm { MOVQ XMM3,R12 }
    /* +0xea9dbd */ __asm { AND R12,RCX }
    /* +0xea9dc0 */ __asm { MOV R10,R12 }
    /* +0xea9dc3 */ __asm { AND R10,R11 }
    /* +0xea9dc6 */ __asm { MOV RSI,qword ptr [RSP + 0x78] }
    /* +0xea9dcb */ __asm { AND R12,RSI }
    /* +0xea9dce */ __asm { MOVQ XMM1,RCX }
    /* +0xea9dd3 */ __asm { AND RCX,R9 }
    /* +0xea9dd6 */ __asm { MOV R8,R11 }
    /* +0xea9dd9 */ __asm { XOR R8,RCX }
    /* +0xea9ddc */ __asm { MOV RAX,-0xf9d79862 }
    /* +0xea9de6 */ __asm { IMUL RAX,R8 }
    /* +0xea9dea */ __asm { PXOR XMM2,XMM1 }
    /* +0xea9dee */ __asm { MOVQ R8,XMM2 }
    /* +0xea9df3 */ __asm { OR R8,RSI }
    /* +0xea9df6 */ __asm { MOV R15D,0xfb2ff524 }
    /* +0xea9dfc */ __asm { IMUL R15,R8 }
    /* +0xea9e00 */ __asm { AND RCX,RSI }
    /* +0xea9e03 */ __asm { MOV R8,-0xfc6c1e8e }
    /* +0xea9e0d */ __asm { IMUL R8,RCX }
}


// ============================================================================
// Function : FUN_7fffa561c840  |  RVA: 0xeac840  |  Size: 1018 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa561c840(void)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint32_t uVar5;
  uint16_t uVar6;
  int64_t lVar7;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint8_t bVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  
  lVar7 = ~(unaff_RDI | unaff_RSI) * -0xc2685788 +
          (unaff_RDI | unaff_RSI) * -0xdd7856f8 + (unaff_RSI & unaff_RDI) * 0x1b0fff70 +
          (unaff_RSI ^ unaff_RDI) * 0x1b0fff70;
  uVar5 = (uint32_t)lVar7;
  iVar9 = uVar5 + 1;
  *(uint64_t *)((int64_t)(int)((-0x7e179fe9 - uVar5) * -0x3d090e41) + 0x7fffa47cf8d0) = 0;
  lVar11 = (int64_t)(int)((uVar5 ^ 0x56b414c8) + 0x6b22d384);
  *(uint64_t *)(lVar11 + 0x7fffa47ce3aa) = 0;
  *(uint64_t *)(lVar11 + 0x7fffa47ce3b2) = 0;
  *(uint64_t *)(lVar11 + 0x7fffa47ce39a) = 0;
  *(uint64_t *)(lVar11 + 0x7fffa47ce3a2) = 0;
  *(uint64_t *)(lVar11 + 0x7fffa47ce38a) = 0;
  *(uint64_t *)(lVar11 + 0x7fffa47ce392) = 0;
  *(uint64_t *)(lVar11 + 0x7fffa47ce37a) = 0;
  *(uint64_t *)(lVar11 + 0x7fffa47ce382) = 0;
  *(uint8_t *)(lVar11 + 0x7fffa47ce3ba) = 0;
  uVar10 = rdtsc();
  lVar11 = (CONCAT44(0x7fff,(int)(uVar10 >> 0x20)) << 0x20 | uVar10 & 0xffffffff) *
           0x538b13d2427c0f3 + 0xb;
  lVar12 = 3;
  uVar6 = (uint16_t)lVar7;
  while( true ) {
    lVar13 = (lVar7 + 0x538b13cef841f05U ^ 0x95cbb67e) * lVar11 + 0xb;
    lVar11 = lVar13 * 0x538b13d2427c0f3 + 0xb;
    *(char *)(lVar12 + (int64_t)(short)((uVar6 | 1) * 0x2de3) + 0x7fffa47c46b2) =
         (char)((uint64_t)lVar13 >> 0x20);
    *(char *)(lVar12 + (int64_t)(iVar9 * -0x2c464723) + 0x7fffa47cf0e9) =
         (char)((uint64_t)lVar11 >> 0x20);
    if (lVar12 == 99) break;
    lVar13 = lVar11 * 0x538b13d2427c0f3 + 0xb;
    lVar11 = lVar13 * 0x538b13d2427c0f3 + 0xb;
    *(char *)(lVar12 + (int64_t)(int)((uVar5 ^ 0x6b2dc0f3) + 0x56b9cc8c) + 0x7fffa47c9629) =
         (char)((uint64_t)lVar11 >> 0x20);
    *(char *)(lVar12 + (int64_t)(short)(uVar6 ^ 0xac88) + 0x7fffa47bff2f) =
         (char)((uint64_t)lVar13 >> 0x20);
    lVar12 = lVar12 + 4;
  }
  lVar11 = (int64_t)(iVar9 * 0x2c7a436 + 0x869d647);
  bVar4 = (uint8_t)lVar7 & 0x1f;
  bVar3 = (uint8_t)lVar7 & 0x1f;
  bVar8 = *(char *)((int64_t)(short)((uVar6 + 0xbe1e) * 8 | (uint16_t)(uVar6 + 0xbe1e) >> 0xd) +
                   0x7fffa47c4d0e) + 1U & 7;
  uVar10 = (uint64_t)bVar8;
  bVar1 = *(uint8_t *)((int64_t)(iVar9 * 0x320f0508) + 0x7fffa47c913e);
  bVar3 = *(uint8_t *)((int64_t)(int)(0x67ffff43 << bVar3 | 0x67ffff43U >> 0x20 - bVar3) +
                   0x7fffa47cb71e);
  bVar2 = *(uint8_t *)((int64_t)(int)(uVar5 ^ 0x3d972658) + 0x7fffa47c88b3);
  *(uint8_t *)(lVar11 + 0x7fffa47ce916 + uVar10 * 8) = bVar3 << 2 | bVar3 >> 6;
  bVar3 = *(uint8_t *)((int64_t)(int)((0x22684b4b - uVar5) * 0x10 | 0x22684b4b - uVar5 >> 0x1c) +
                   0x7fffa47cbe4c);
  bVar4 = *(uint8_t *)((int64_t)(int)(0xff5124ffU >> bVar4 | -0xaedb01 << 0x20 - bVar4) +
                   0x7fffa47ca963);
  *(uint8_t *)(lVar11 + 0x7fffa47ce918 + uVar10 * 8) = bVar4 << 2 | bVar4 >> 6;
  *(uint8_t *)(lVar11 + 0x7fffa47ce914 + uVar10 * 8) = bVar2 << 2 | bVar2 >> 6;
  *(uint8_t *)(lVar11 + 0x7fffa47ce919 + uVar10 * 8) =
       bRam00007fffa47bfa88 << 2 | bRam00007fffa47bfa88 >> 6;
  bVar2 = *(uint8_t *)((int64_t)(short)(uVar6 ^ 0xd0d0) + 0x7fffa47c732a);
  *(uint8_t *)(lVar11 + 0x7fffa47ce913 + uVar10 * 8) = bVar2 << 2 | bVar2 >> 6;
  *(uint8_t *)(lVar11 + 0x7fffa47ce917 + uVar10 * 8) = bVar1 << 2 | bVar1 >> 6;
  bVar1 = bRam00007fffa47bfa84;
  *(uint8_t *)(lVar11 + 0x7fffa47ce912 + uVar10 * 8) = bVar3 << 2 | bVar3 >> 6;
  *(uint8_t *)(lVar11 + 0x7fffa47ce915 + uVar10 * 8) = bVar1 << 2 | bVar1 >> 6;
  *(uint8_t *)((int64_t)(short)((uVar6 ^ 0x3c78) << 1 | (uint16_t)((short)(uVar6 ^ 0x3c78) < 0)) +
           0x7fffa47c225e) = bVar8;
  return;
}


// ============================================================================
// Function : FUN_7fffa561cc40  |  RVA: 0xeacc40  |  Size: 556 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa561cc40(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar4 = 0;
  bRam00007fffa47bb39d = 0;
  uRam00007fffa47bb3bf = 0;
  uRam00007fffa47bb3c7 = 0;
  uRam00007fffa47bb3af = 0;
  uRam00007fffa47bb3b7 = 0;
  uRam00007fffa47bb39f = 0;
  uRam00007fffa47bb3a7 = 0;
  uRam00007fffa47bb3cf = 0;
  uRam00007fffa47bb3d9 = 0;
  uVar1 = rdtsc();
  lVar2 = (uVar1 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar1)) * 0x2d464291dfe2e3 + 1;
  while( true ) {
    lVar2 = lVar2 * 0x2d464291dfe2e3 + 1;
    *(char *)(uVar4 + 0x7fffa47bb390) = (char)((uint64_t)lVar2 >> 0x20);
    lVar2 = lVar2 * 0x2d464291dfe2e3 + 1;
    *(char *)(uVar4 + 0x7fffa47bb391) = (char)((uint64_t)lVar2 >> 0x20);
    if (uVar4 == 0x50) break;
    lVar3 = lVar2 * 0x2d464291dfe2e3 + 1;
    lVar2 = lVar3 * 0x2d464291dfe2e3 + 1;
    *(char *)((uVar4 | 3) + 0x7fffa47bb390) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(uVar4 + 0x7fffa47bb392) = (char)((uint64_t)lVar3 >> 0x20);
    uVar4 = uVar4 + 4;
  }
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa47bb39d * 0x24924925 + 0x24924925) * 7;
  *(uint64_t *)((uVar1 >> 0x20) * 8 + 0x7fffa47bb39f) = 0;
  bRam00007fffa47bb39d = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa561ce70  |  RVA: 0xeace70  |  Size: 3025 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa561d877) */
/* WARNING: Removing unreachable block (ram,0x7fffa561d87d) */

void FUN_7fffa561ce70(void)

{
  uint64_t *puVar1;
  bool bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  short sVar5;
  uint64_t *puVar6;
  uint8_t bVar7;
  uint32_t in_EAX;
  uint8_t bVar8;
  uint32_t uVar9;
  uint8_t (*pauVar10) [16];
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint16_t uVar17;
  uint16_t uVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  int iVar21;
  uint8_t uVar22;
  uint64_t in_R11;
  uint64_t uVar23;
  uint32_t uVar24;
  uint64_t *puVar25;
  uint32_t uStack_70;
  
  iVar21 = (int)ClientId.UniqueThread;
  if (*(int *)((int64_t)(int)((in_EAX ^ 0xa044283e) << 1 | (uint32_t)((int)(in_EAX ^ 0xa044283e) < 0))
              + 0x7fffa47ca1e5) != iVar21) {
    (*(code *)&DAT_7ff8504ead30)
              ((int64_t)(int)((in_EAX + 0xa022be24) * 0x4000000 | in_EAX + 0xa022be24 >> 6) +
               0x7fffa47c7c3a);
    LOCK();
    *(int *)((int64_t)(int)~(in_EAX + 0xa04577b6) + 0x7fffa47cee82) = iVar21;
    UNLOCK();
  }
  uVar24 = in_EAX | 1;
  uVar16 = (uint64_t)
           ((uint32_t)*(uint8_t *)((int64_t)(int)(uVar24 * 0x562d91ff + -0x6a6e78e3) + 0x7fffa47c8bf8) *
            0x24924925 + 0x24924925) * 7;
  bVar3 = (uint8_t)in_EAX;
  uVar23 = uVar16 >> 0x20;
  lVar15 = (int64_t)(short)((0x78ecU >> (bVar3 & 0xf) | 0x78ec << 0x10 - (bVar3 & 0xf)) + 0x6b3d) +
           0x7fffa47c6ebc;
  *(int *)((int64_t)(int)(0xdffff944U >> (bVar3 & 0x1f) | -0x200006bc << 0x20 - (bVar3 & 0x1f)) +
          0x7fffa47ccc99) = *(int *)((int64_t)(int)(in_EAX + 0xa043f849) + 0x7fffa47c7b50) + 1;
  uVar22 = (uint8_t)(uVar16 >> 0x20);
  uVar18 = (uint16_t)in_EAX;
  if (uVar24 * 0x7f0baf24 + 0x3c7e26cd < 0x939117d5) {
    *(uint8_t *)(lVar15 + uVar23) = 0xff;
    uVar19 = (in_EAX - 0x50e283) * 0x800000 | in_EAX - 0x50e283 >> 9;
    *(uint8_t *)
     ((int64_t)(int)(-0x174a41 << (bVar3 & 0x1f) | 0xffe8b5bfU >> 0x20 - (bVar3 & 0x1f)) +
     0x7fffa47cb1cd) = uVar22;
    lVar15 = (uint64_t)
             *(uint8_t *)((int64_t)(short)(0xbf37U >> (bVar3 & 0xf) | -0x40c9 << 0x10 - (bVar3 & 0xf))
                      + 0x7fffa47bce11) * 8 + 0x7fffa47bb508;
  }
  else {
    uVar19 = (0xfd551f1e - in_EAX) * 0x1000 | 0xfd551f1e - in_EAX >> 0x14;
    *(uint8_t *)((int64_t)(short)((uVar18 | 1) * -0x3dc2) + 0x7fffa47c1df0) = uVar22;
    bVar7 = *(uint8_t *)((int64_t)(int)((in_EAX ^ 0x904471ab) << 4 | (in_EAX ^ 0x904471ab) >> 0x1c) +
                     0x7fffa47cb1fc);
    *(uint8_t *)(lVar15 + uVar23) = 0xff;
    lVar15 = (int64_t)(short)(0x9d32U >> (bVar3 & 0xf) | -0x62ce << 0x10 - (bVar3 & 0xf)) +
             0x7fffa47c0eb5 + (uint64_t)bVar7 * 8;
  }
  puVar6 = (uint64_t *)
           CONCAT17(~*(uint8_t *)(lVar15 + 0x10) << 6 | (uint8_t)~*(uint8_t *)(lVar15 + 0x10) >> 2,
                    CONCAT16(~*(uint8_t *)(lVar15 + 0xf) << 6 | (uint8_t)~*(uint8_t *)(lVar15 + 0xf) >> 2,
                             CONCAT15(~*(uint8_t *)(lVar15 + 0xe) << 6 |
                                      (uint8_t)~*(uint8_t *)(lVar15 + 0xe) >> 2,
                                      CONCAT14(~*(uint8_t *)(lVar15 + 0xd) << 6 |
                                               (uint8_t)~*(uint8_t *)(lVar15 + 0xd) >> 2,
                                               CONCAT13(~*(uint8_t *)(lVar15 + 0xc) << 6 |
                                                        (uint8_t)~*(uint8_t *)(lVar15 + 0xc) >> 2,
                                                        CONCAT12(~*(uint8_t *)(lVar15 + 0xb) << 6 |
                                                                 (uint8_t)~*(uint8_t *)(lVar15 + 0xb) >> 2
                                                                 ,CONCAT11(~*(uint8_t *)(lVar15 + 10)
                                                                           << 6 | (uint8_t)~*(uint8_t *)(
                                                  lVar15 + 10) >> 2,
                                                  ~*(uint8_t *)(lVar15 + 9) << 6 |
                                                  (uint8_t)~*(uint8_t *)(lVar15 + 9) >> 2)))))));
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  bVar8 = (uint8_t)uVar19;
  uVar20 = ~(0x3140400U >> (bVar8 & 0x1f) | 0x3140400 << 0x20 - (bVar8 & 0x1f));
  uVar12 = ((in_EAX ^ 0x3777d54f) - uVar19) + 0xb4d1f778;
  uVar13 = uVar12 * 0x4000000 | uVar12 >> 6;
  uVar11 = (0x94db9fcdU >> (bVar8 & 0x1f) | -0x6b246033 << 0x20 - (bVar8 & 0x1f)) + in_EAX;
  uVar9 = -0x60c9799c << (bVar3 & 0x1f) | 0x9f368664U >> 0x20 - (bVar3 & 0x1f);
  bVar7 = *(uint8_t *)((int64_t)(int)((in_EAX ^ 0x2c74198b) + uVar19) + 0x7fffa478f6cf);
  uVar12 = (uint32_t)bVar7;
  if ((uint64_t)
      ((-0x2e7ac2a0 << (bVar3 & 0x1f) | 0xd1853d60U >> 0x20 - (bVar3 & 0x1f)) * (uVar19 | 1)) ==
      0xffffffff9e1454d2) {
    uVar12 = (int)(char)bVar7;
  }
  uVar16 = (uint64_t)(uVar12 * 0x33333334 + 0x33333334);
  bVar2 = uVar13 < in_EAX + 0x97acf500;
  if ((uVar11 * 0x10 | uVar11 >> 0x1c) <= (uVar9 >> (bVar8 & 0x1f) | uVar9 << 0x20 - (bVar8 & 0x1f))
     ) {
    bVar2 = uVar13 == in_EAX + 0x97acf500;
  }
  uVar23 = uVar16 - 5;
  if (0xe9460398 - (uVar19 + 0x8f2300c) < (0xd016947a - in_EAX ^ uVar19)) {
    uVar23 = uVar16 * 5;
  }
  lVar15 = (int64_t)(int)(uVar20 >> (bVar3 & 0x1f) | uVar20 << 0x20 - (bVar3 & 0x1f));
  uVar16 = uVar23 ^ 0x20;
  if ((int64_t)(int)(~(in_EAX ^ 0xf8dd743b) + uVar19) != 0xac89472c) {
    uVar16 = uVar23 >> 0x20;
  }
  bVar7 = ~*(uint8_t *)((int64_t)(short)((short)uVar19 + 0xa056U ^ uVar18) + 0x7fffa4787022);
  bVar7 = bVar7 << 5 | bVar7 >> 3;
  if (bVar2) {
    uVar12 = uVar24 * -0x43650e3 ^ 0xbefe714b;
    *(uint8_t *)(lVar15 + 0x7fffa4790933 + uVar16 * 8) = bVar7;
    lVar14 = (int64_t)
             (int)((uVar12 >> (bVar8 & 0x1f) | uVar12 << 0x20 - (bVar8 & 0x1f)) + 0x5a7613ec) +
             0x7fffa4793143;
    uStack_70 = (uVar19 ^ 0xde61e0ca) << (bVar3 & 0x1f) |
                (uVar19 ^ 0xde61e0ca) >> 0x20 - (bVar3 & 0x1f);
  }
  else {
    *(uint8_t *)(lVar15 + 0x7fffa4790933 + uVar16 * 8) = bVar7;
    uVar17 = (uVar18 | 1) * 0x564f;
    lVar14 = (int64_t)(short)(-0x7d02 - (uVar17 << (bVar8 & 0xf) | uVar17 >> 0x10 - (bVar8 & 0xf)))
             + 0x7fffa478498a;
    uStack_70 = ((uVar19 - in_EAX) + -0x5053897f) * 0x70c67ed7;
  }
  *(uint8_t *)(lVar15 + 0x7fffa4790934 + uVar16 * 8) =
       ~*(uint8_t *)(lVar14 + 0x43) << 5 | (uint8_t)~*(uint8_t *)(lVar14 + 0x43) >> 3;
  bVar7 = ~*(uint8_t *)((int64_t)(int)((uVar24 * -0x1b6cd8da - uVar19) * -0x5d8c44d3) + 0x7fffa4790feb
                    );
  *(uint8_t *)(lVar15 + 0x7fffa4790935 + uVar16 * 8) = bVar7 << 5 | bVar7 >> 3;
  uVar24 = (in_EAX + 0x3a9bbe65) * -0x251f639b;
  bVar4 = (uint8_t)uStack_70;
  bVar7 = ~*(uint8_t *)((int64_t)
                     (short)((uint16_t)(29000 - uVar18) >> (bVar8 & 0xf) |
                            29000 - uVar18 << 0x10 - (bVar8 & 0xf)) + 0x7fffa4786508);
  *(uint8_t *)(lVar15 + 0x7fffa4790936 + uVar16 * 8) = bVar7 << 5 | bVar7 >> 3;
  bVar7 = ~*(uint8_t *)((int64_t)(int)~(uVar24 >> (bVar4 & 0x1f) | uVar24 << 0x20 - (bVar4 & 0x1f)) +
                    0x7fffa4793b29);
  *(uint8_t *)(lVar15 + 0x7fffa4790937 + uVar16 * 8) = bVar7 << 5 | bVar7 >> 3;
  bVar7 = ~*(uint8_t *)((int64_t)
                     (int)((0xd8588102 - uVar19 << (bVar3 & 0x1f) |
                           0xd8588102 - uVar19 >> 0x20 - (bVar3 & 0x1f)) * 0x44432f49) +
                    0x7fffa47920e0);
  *(uint8_t *)(lVar15 + 0x7fffa4790938 + uVar16 * 8) = bVar7 << 5 | bVar7 >> 3;
  bVar7 = ~*(uint8_t *)((int64_t)(int)(in_EAX + 0x75b17337 + uStack_70) + 0x7fffa478dce8);
  *(uint8_t *)(lVar15 + 0x7fffa4790939 + uVar16 * 8) = bVar7 << 5 | bVar7 >> 3;
  bVar7 = ~*(uint8_t *)((int64_t)(int)((in_EAX ^ 0xd3949cf9) - uVar19) + 0x7fffa478dc54);
  *(uint8_t *)(lVar15 + 0x7fffa479093a + uVar16 * 8) = bVar7 << 5 | bVar7 >> 3;
  uVar24 = (uStack_70 - in_EAX) + 0x25290608;
  bVar7 = *(uint8_t *)((int64_t)(int)~((in_EAX + 0xf9ac7e67) * 0x4000 | in_EAX + 0xf9ac7e67 >> 0x12) +
                   0x7fffa47c5355);
  *(char *)((int64_t)(int)(uVar24 * 0x10 | uVar24 >> 0x1c) + 0x7fffa478d290) = (char)uVar16;
  sVar5 = (short)(in_EAX | 1);
  uVar17 = (uint16_t)((in_EAX | 1) * 0x1239);
  uVar16 = (uint64_t)((uint32_t)bVar7 * 0x55555556 + 0x55555556) * 3;
  *(uint64_t *)
   ((int64_t)(short)((uVar17 << 0xe | uVar17 >> 2) ^ (uint16_t)uStack_70) + 0x7fffa47c3a36 +
   (uVar16 >> 0x20) * 8) =
       ~*(uint64_t *)
         ((int64_t)(int)(((in_EAX - uStack_70) + 0x4013aa3e) * -0x50a0a355 + 0x63304a34) +
         0x7fffa47c95d7);
  *(char *)((int64_t)(short)((sVar5 * -0x1b0 | (uint16_t)(sVar5 * 0x6fe5) >> 0xc) + (short)uVar19) +
           0x7fffa47bbd39) = (char)(uVar16 >> 0x20);
  uVar24 = ~((uVar19 | 1) * 0x53e2a1c);
  uVar24 = uVar24 >> (bVar3 & 0x1f) | uVar24 << 0x20 - (bVar3 & 0x1f);
  uVar16 = (uint64_t)uVar24;
  if (0x3ffff7c5 < uVar24) {
    uVar24 = 0xc16480db - in_EAX ^ 0x1b700b1;
    uVar17 = (0x698dU >> (bVar4 & 0xf) | 0x698d << 0x10 - (bVar4 & 0xf)) + uVar18;
    iVar21 = *(int *)((int64_t)(short)(uVar17 * 0x200 | uVar17 >> 7) + 0x7fffa47c1300) + -1;
    *(int *)((int64_t)(int)(uVar24 << (bVar4 & 0x1f) | uVar24 >> 0x20 - (bVar4 & 0x1f)) +
            0x7fffa47cdf33) = iVar21;
    if (iVar21 == 0) {
      uVar24 = (uStack_70 | 1) * 0x678c4b9b;
      LOCK();
      *(uint32_t *)
       ((int64_t)(int)(uVar24 << (bVar3 & 0x1f) | uVar24 >> 0x20 - (bVar3 & 0x1f)) + 0x7fffa47cf443
       ) = 0;
      UNLOCK();
      uVar18 = (0xbc3a - uVar18 ^ 0x5783) * ((uint16_t)uStack_70 | 1);
      (*(code *)&DAT_7ff8504eba90)((int64_t)(short)(uVar18 * 0x400 | uVar18 >> 6) + 0x7fffa47c4469)
      ;
    }
    uVar16 = (in_R11 << 0x39 | in_R11 >> 7) ^ (in_R11 << 0x3d | in_R11 >> 3) ^ in_R11;
    uVar16 = (uVar16 << 0x32 | uVar16 >> 0xe) ^ (uVar16 << 0x3a | uVar16 >> 6) ^ uVar16;
    uVar16 = (uVar16 << 0x24 | uVar16 >> 0x1c) ^ (uVar16 << 0x34 | uVar16 >> 0xc) ^ uVar16;
    *(uint32_t *)((uVar16 << 0x28 | uVar16 >> 0x18) ^ (uVar16 << 8 | uVar16 >> 0x38) ^ uVar16) = 0
    ;
    return;
  }
                    /* WARNING: Read-only address (ram,0x7fffa5609d7a) is written */
  uVar23 = uVar16 * -0xfffffc000000;
                    /* WARNING: Read-only address (ram,0x7fffa5609d7a) is written */
  uRam00007fffa5609d7a = 0x410c40ec;
  uVar16 = (uVar16 * 0x200000000000000 | uVar23 >> 0x21) ^
           (uVar16 * 0x100000000000000 | uVar23 >> 0x22);
  uVar23 = uVar16 ^ uVar23;
  uVar23 = (uVar16 << 0x3c | uVar23 >> 4) ^ (uVar16 << 0x3e | uVar23 >> 2) ^ uVar23;
  uVar23 = (uVar23 << 0x38 | uVar23 >> 8) ^ (uVar23 << 0x3c | uVar23 >> 4) ^ uVar23;
  uVar23 = (uVar23 << 0x30 | uVar23 >> 0x10) ^ (uVar23 << 0x38 | uVar23 >> 8) ^ uVar23;
  uVar23 = (uVar23 << 0x20 | uVar23 >> 0x20) ^ (uVar23 << 0x30 | uVar23 >> 0x10) ^ uVar23;
  pauVar10 = (uint8_t (*) [16])(uVar23 << 0x20 | uVar23 >> 0x20);
  puVar25 = *(uint64_t **)*pauVar10;
  if (puVar25 != (uint64_t *)0x0) {
    puVar1 = *(uint64_t **)(*pauVar10 + 8);
    for (; puVar25 != puVar1; puVar25 = puVar25 + 3) {
      uVar16 = *puVar25;
      if (uVar16 != 0) {
        iVar21 = (int)CONCAT62((int6)(uVar16 >> 0x10),0x429) * 0x3d43;
        iVar21 = (CONCAT22((short)((uint32_t)iVar21 >> 0x10),(uint16_t)iVar21 >> 1) | 0x8000) + 0x3ffff7c5
        ;
        (*(code *)(&UNK_7fffa568a89f + (short)iVar21))
                  (&UNK_7fffa568a89f,iVar21,uVar16 >> 0x3d ^ uVar16);
        *puVar25 = 0;
        puVar25[1] = 0;
        puVar25[2] = 0;
      }
    }
    (*(code *)0x8000242e8e41)();
    *pauVar10 = (uint8_t  [16])0x0;
    *(uint64_t *)pauVar10[1] = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa561d890  |  RVA: 0xead890  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa561d890(void)

{
  uint64_t *puVar1;
  uint64_t in_RAX;
  uint64_t uVar2;
  int iVar3;
  uint8_t (*pauVar4) [16];
  uint32_t in_R10D;
  uint64_t uVar5;
  uint64_t *puVar6;
  
  uVar2 = in_RAX << 0x1a | in_RAX >> 0x26;
  uVar5 = uVar2 + 0xfffffc00001;
  if ((in_R10D | 1) * -0x7ec21125 + 0x3d8eebd3 < ((in_R10D | 1) * 0x3c43ceeb ^ 0xf7d22c96)) {
    uVar5 = uVar2 * 0xfffffc00001;
  }
  uVar5 = (uVar5 << 0x1f | uVar5 >> 0x21) ^ (uVar5 << 0x1e | uVar5 >> 0x22) ^ uVar5;
  uVar5 = (uVar5 << 0x3c | uVar5 >> 4) ^ (uVar5 << 0x3e | uVar5 >> 2) ^ uVar5;
  uVar5 = (uVar5 << 0x38 | uVar5 >> 8) ^ (uVar5 << 0x3c | uVar5 >> 4) ^ uVar5;
  uVar5 = (uVar5 << 0x30 | uVar5 >> 0x10) ^ (uVar5 << 0x38 | uVar5 >> 8) ^ uVar5;
  uVar5 = (uVar5 << 0x20 | uVar5 >> 0x20) ^ (uVar5 << 0x30 | uVar5 >> 0x10) ^ uVar5;
  pauVar4 = (uint8_t (*) [16])(uVar5 << 0x20 | uVar5 >> 0x20);
  puVar6 = *(uint64_t **)*pauVar4;
  if (puVar6 != (uint64_t *)0x0) {
    puVar1 = *(uint64_t **)(*pauVar4 + 8);
    for (; puVar6 != puVar1; puVar6 = puVar6 + 3) {
      uVar5 = *puVar6;
      if (uVar5 != 0) {
        iVar3 = (int)CONCAT62((int6)(uVar5 >> 0x10),0x429) * 0x3d43;
        iVar3 = (CONCAT22((short)((uint32_t)iVar3 >> 0x10),(uint16_t)iVar3 >> 1) | 0x8000) + in_R10D;
        (*(code *)(&UNK_7fffa568a89f + (short)iVar3))(&UNK_7fffa568a89f,iVar3,uVar5 >> 0x3d ^ uVar5)
        ;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
      }
    }
    (*(code *)((int64_t)(int)(in_R10D + 0x3ec524b1) + 0x7fffa56971cb))();
    *pauVar4 = (uint8_t  [16])0x0;
    *(uint64_t *)pauVar4[1] = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa561da50  |  RVA: 0xeada50  |  Size: 172 bytes
// Callers  : none
// Callees  : FUN_7fffa547a3f0@0xd0a3f0, FUN_7fffa54539d0@0xce39d0
// ============================================================================
uint32_t FUN_7fffa561da50(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  *(uint64_t *)(param_2 + 0x48) = param_1;
  lVar2 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar2 + 0x70) = *(uint64_t *)(param_2 + 0x80);
  lVar2 = *(int64_t *)(param_2 + 0x98);
  uVar1 = *(uint64_t *)(lVar2 + 8);
  lVar3 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar3 + 0x60) = uVar1;
  uVar1 = *(uint64_t *)(**(int64_t **)(param_2 + 0x48) + 0x38);
  lVar3 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar3 + 0x68) = uVar1;
  FUN_7fffa547a3f0(**(uint64_t **)(param_2 + 0x48),*(uint64_t *)(param_2 + 0x88),
                   *(uint64_t *)(param_2 + 0x90),lVar2,*(uint64_t *)(param_2 + 0xa0),0,0,1);
  lVar2 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar2 + 0x70) = 0;
  *(uint32_t *)(param_2 + 0x40) = 1;
  *(uint32_t *)(param_2 + 0x44) = 1;
  return *(uint32_t *)(param_2 + 0x44);
}


// ============================================================================
// Function : FUN_7fffa561db00  |  RVA: 0xeadb00  |  Size: 16 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa561db00(uint8_t *param_1,uint8_t *param_2,int64_t param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa561db10  |  RVA: 0xeadb10  |  Size: 1 bytes
// Callers  : FUN_7fffa564c350@0xedc350
// Callees  : none
// ============================================================================
void FUN_7fffa561db10(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa561db20  |  RVA: 0xeadb20  |  Size: 101 bytes
// Callers  : FUN_7fffa565d310@0xeed310
// Callees  : none
// ============================================================================
int FUN_7fffa561db20(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint32_t uVar2;
  uint8_t *pbVar3;
  uint8_t *pbVar4;
  int iVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    return -1;
  }
  uVar1 = param_2[1];
  uVar2 = *(uint8_t *)(uVar1 + (int64_t)iVar5) & 0xf;
  pbVar3 = (uint8_t *)((uVar1 + (int64_t)iVar5) - (int64_t)(char)(&UNK_7fffa56b3150)[uVar2]);
  uVar2 = *(uint32_t *)(pbVar3 + -4) >> ((&UNK_7fffa56b3160)[uVar2] & 0x1f);
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar7 = 0;
    iVar5 = -1;
    do {
      pbVar4 = pbVar3 + -(int64_t)(char)(&UNK_7fffa56b3150)[*pbVar3 & 0xf];
      uVar7 = uVar7 + (*(uint32_t *)(pbVar4 + -4) >> ((&UNK_7fffa56b3160)[*pbVar3 & 0xf] & 0x1f));
      if (*param_2 < (uint64_t)uVar7 + *(uint32_t *)param_2[2] + uVar1) break;
      uVar6 = uVar6 + 1;
      pbVar3 = pbVar4 + -(int64_t)(char)(&UNK_7fffa56b3150)[*pbVar4 & 0xf];
      iVar5 = (*(uint32_t *)(pbVar3 + -4) >> ((&UNK_7fffa56b3160)[*pbVar4 & 0xf] & 0x1f)) - 1;
    } while (uVar6 < uVar2);
    if (uVar6 != 0) {
      return iVar5;
    }
  }
  return -1;
}


// ============================================================================
// Function : FUN_7fffa561db85  |  RVA: 0xeadb85  |  Size: 129 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int FUN_7fffa561db85(uint64_t param_1,uint8_t *param_2,uint64_t param_3,uint32_t param_4)

{
  uint32_t *in_RAX;
  uint8_t *pbVar1;
  uint32_t unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int iVar2;
  uint32_t uVar3;
  uint64_t *in_R11;
  
  uVar3 = 0;
  iVar2 = -1;
  do {
    pbVar1 = param_2 + -(int64_t)*(char *)((uint64_t)(*param_2 & 0xf) + 0xf43150 + unaff_RBP);
    uVar3 = uVar3 + (*(uint32_t *)(pbVar1 + -4) >>
                    (*(uint8_t *)((uint64_t)(*param_2 & 0xf) + 0xf43160 + unaff_RBP) & 0x1f));
    if (*in_R11 < (uint64_t)uVar3 + (uint64_t)*in_RAX + unaff_RDI) break;
    param_4 = param_4 + 1;
    param_2 = pbVar1 + -(int64_t)*(char *)((uint64_t)(*pbVar1 & 0xf) + 0xf43150 + unaff_RBP);
    iVar2 = (*(uint32_t *)(param_2 + -4) >>
            (*(uint8_t *)((uint64_t)(*pbVar1 & 0xf) + 0xf43160 + unaff_RBP) & 0x1f)) - 1;
  } while (param_4 < unaff_EBX);
  if (param_4 == 0) {
    iVar2 = -1;
  }
  return iVar2;
}


// ============================================================================
// Function : FUN_7fffa561dc06  |  RVA: 0xeadc06  |  Size: 24 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa561dc06(void)

{
  return 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa561dc20  |  RVA: 0xeadc20  |  Size: 3095 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa561dc20(uint64_t *param_1,uint64_t *param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char *pcVar3;
  int *piVar4;
  uint32_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  bool bVar8;
  uint16_t uVar9;
  int64_t in_RAX;
  uint8_t bVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  int64_t lVar17;
  uint64_t *puVar18;
  uint32_t uVar19;
  uint64_t *puVar20;
  uint32_t uVar21;
  int iVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t *puVar25;
  short sVar26;
  uint32_t uVar27;
  uint32_t uVar28;
  uint64_t uVar29;
  uint64_t in_R11;
  int64_t lVar30;
  uint64_t *puVar31;
  uint64_t uVar32;
  int64_t lVar33;
  uint32_t uVar34;
  int64_t lVar35;
  uint64_t uVar36;
  int iVar37;
  char cVar38;
  uint8_t uVar42;
  uint8_t uVar44;
  uint8_t uVar46;
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  char cVar43;
  char cVar45;
  char cVar47;
  uint8_t auVar41 [16];
  uint32_t auStack_178 [64];
  uint64_t *puStack_78;
  uint64_t *puStack_70;
  uint64_t *puStack_68;
  char *pcStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int64_t lStack_48;
  
  uVar28 = (uint32_t)in_RAX;
  bVar10 = (uint8_t)in_RAX;
  uStack_58 = (uint64_t)(uVar28 | 1);
  puVar15 = (uint64_t *)((in_RAX + -0x7fffffff927350c7) * param_3);
  uVar29 = in_R11 ^ 0x10000000000001;
  if ((uVar28 + 0xd7d28e3e ^ 0x4b5b9441) * -0x63a38ec5 <=
      (0xd752873U >> (bVar10 & 0x1f) | 0xd752873 << 0x20 - (bVar10 & 0x1f))) {
    uVar29 = (in_R11 << 0x34) + in_R11;
  }
  uVar29 = uVar29 ^ 0xffffffffa21ec8f9;
  uVar29 = (uVar29 << 2 | uVar29 >> 0x3e) ^ (uVar29 << 9 | uVar29 >> 0x37) ^ uVar29;
  uVar23 = uVar29 << 4 | uVar29 >> 0x3c;
  uVar24 = uVar23 ^ uVar29;
  if (0x91ba6d5 - uVar28 <=
      (0xd8ad874dU >> (bVar10 & 0x1f) | -0x275278b3 << 0x20 - (bVar10 & 0x1f)) * 0x139a0dc1) {
    uVar24 = uVar29 - uVar23;
  }
  uVar24 = uVar24 ^ (uVar29 << 0x12 | uVar29 >> 0x2e);
  uVar24 = (uVar24 << 8 | uVar24 >> 0x38) ^ (uVar24 << 0x24 | uVar24 >> 0x1c) ^ uVar24;
  uVar24 = (uVar24 << 0x10 | uVar24 >> 0x30) ^ (uVar24 << 8 | uVar24 >> 0x38) ^ uVar24;
  uVar24 = (uVar24 << 0x20 | uVar24 >> 0x20) ^ (uVar24 << 0x10 | uVar24 >> 0x30) ^ uVar24;
  uVar29 = uVar24 << 0x20 | uVar24 >> 0x20;
  uVar11 = 4;
  if (*(uint32_t *)(uVar29 + 0x10c) < 4) {
    uVar11 = *(uint32_t *)(uVar29 + 0x10c);
  }
  iVar37 = 1 << ((uint8_t)uVar11 & 0x1f);
  uVar27 = 1 << (*(uint8_t *)(uVar29 + 0x100) & 0x1f);
  lVar6 = *(int64_t *)(uVar29 + 8);
  uVar11 = *(uint32_t *)(uVar29 + 0x1c);
  uStack_50 = (int64_t)param_2 - lVar6;
  uVar19 = (uint32_t)uStack_50;
  uVar12 = uVar19 - uVar27;
  if (uVar19 - uVar11 <= uVar27) {
    uVar12 = uVar11;
  }
  iVar22 = *(int *)(uVar29 + 0x34);
  lStack_48 = *(int64_t *)(uVar29 + 0x10);
  if (*(uint32_t *)(uVar29 + 0x28) != ((uVar28 | 1) * 0x2d49 - 0x5e51 & 0xffff)) {
    uVar12 = uVar11;
  }
  pcStack_60 = (char *)(uint64_t)uVar12;
  lVar17 = *(int64_t *)(uVar29 + 0x38);
  lVar30 = *(int64_t *)(uVar29 + 0x70);
  uVar11 = *(uint32_t *)(uVar29 + 0x18);
  uVar12 = (uint32_t)*(uint64_t *)(uVar29 + 0x60);
  cVar38 = (char)iVar22;
  if (*(int *)(uVar29 + 300) == 0) {
    uVar27 = *(uint32_t *)(uVar29 + 0x2c);
    uVar24 = (uint64_t)uVar27;
    sVar26 = (uint16_t)in_RAX + 0xd185;
    lVar14 = lVar17;
    lVar33 = lVar30;
    if ((uint32_t)(uint16_t)((sVar26 * 2 | (uint16_t)(sVar26 < 0)) + 0xbce6) < uVar19 - uVar27) {
      bVar8 = uVar27 == 0xffffffa0;
      if (0xa26523c3 - uVar28 < 0xcc50912f) {
        bVar8 = uVar27 < 0xffffffa0;
      }
      if (bVar8) {
        uVar23 = uVar24 + 0x60;
        do {
          uVar27 = (uint32_t)uVar24;
          uVar36 = (uint64_t)(uVar27 & 7);
          uVar32 = uVar24 ^ 1;
          piVar4 = (int *)(lVar6 + 8 + uVar24);
          uVar24 = uVar24 + 1;
          if ((-0x3bcf79aa << (bVar10 & 0x1f) | 0xc4308656U >> 0x20 - (bVar10 & 0x1f)) == 0x6d980e76
             ) {
            uVar24 = uVar32;
          }
          uVar21 = *(uint32_t *)(uVar29 + 0x40 + uVar36 * 4);
          uVar32 = (uint64_t)(uVar21 >> 4 & 0xfffffff0);
          *(uint32_t *)(uVar29 + 0x40 + uVar36 * 4) =
               (*piVar4 * -0x61c8864f ^ *(uint32_t *)(uVar29 + 0x60)) >> (uint64_t)(0x18 - iVar22);
          lVar14 = 0;
          if ((*(uint8_t *)(lVar17 + uVar32) & 0xf) == 1) {
            lVar14 = 0xf;
          }
          lVar14 = lVar14 + (uint64_t)(*(uint8_t *)(lVar17 + uVar32) - 1 & 0xf);
          *(char *)(lVar17 + uVar32) = (char)lVar14;
          *(char *)(lVar17 + uVar32 + lVar14) = (char)uVar21;
          *(uint32_t *)(lVar30 + uVar32 * 4 + lVar14 * 4) = uVar27;
        } while (uVar24 != uVar23);
        lVar14 = *(int64_t *)(uVar29 + 0x38);
        lVar33 = *(int64_t *)(uVar29 + 0x70);
      }
      uVar34 = uVar19 - 0x20;
      uVar24 = (uint64_t)uVar34;
      piVar4 = (int *)(lVar6 + uVar24);
      uVar21 = ((int)(int *)((int64_t)param_2 + 1U) - (int)piVar4) + 1;
      uVar27 = 8;
      if (uVar21 < 8) {
        uVar27 = uVar21;
      }
      uVar21 = 0;
      if (piVar4 <= (int *)((int64_t)param_2 + 1U)) {
        uVar21 = uVar27;
      }
      if (uVar34 < (uVar21 + uVar19) - 0x20) {
        uVar27 = *(uint32_t *)(uVar29 + 0x60);
        bVar10 = 0x18 - (char)*(uint32_t *)(uVar29 + 0x34);
        if ((uVar21 & 1) == 0) {
          uVar23 = uVar24;
        }
        else {
          uVar23 = uVar24 + 1;
          *(uint32_t *)(uVar29 + 0x40 + (uint64_t)(uVar34 & 7) * 4) =
               (*piVar4 * -0x61c8864f ^ uVar27) >> (bVar10 & 0x1f);
        }
        if (uVar21 != 1) {
          iVar22 = (((uVar21 + (int)param_2) - (int)uVar23) - (int)lVar6) + -0x20;
          do {
            uVar21 = (uint32_t)uVar23;
            *(uint32_t *)(uVar29 + 0x40 + (uint64_t)(uVar21 & 7) * 4) =
                 (*(int *)(lVar6 + uVar23) * -0x61c8864f ^ uVar27) >> (bVar10 & 0x1f);
            piVar4 = (int *)(lVar6 + 1 + uVar23);
            uVar23 = uVar23 + 2;
            *(uint32_t *)(uVar29 + 0x40 + (uint64_t)(uVar21 + 1 & 7) * 4) =
                 (*piVar4 * -0x61c8864f ^ uVar27) >> (bVar10 & 0x1f);
            iVar22 = iVar22 + -2;
          } while (iVar22 != 0);
        }
      }
    }
    if ((uint32_t)uVar24 < uVar19) {
      lVar7 = *(int64_t *)(uVar29 + 8);
      uVar5 = *(uint32_t *)(uVar29 + 0x34);
      do {
        uVar27 = (uint32_t)uVar24;
        if (0x15b594bc - uVar28 < (uVar28 ^ 0xa2474b56) * -0x58fc95d3) {
          uVar23 = uVar24 | 7;
          if ((uVar28 ^ 0x2427f776) * -0x2da5451 == 0x346094e2) {
            uVar23 = (uint64_t)(uVar27 & 7);
          }
        }
        else {
          uVar23 = (uint64_t)(uVar27 & 7);
        }
        uVar21 = *(uint32_t *)(uVar29 + 0x40 + uVar23 * 4);
        *(uint32_t *)(uVar29 + 0x40 + uVar23 * 4) =
             (*(int *)(lVar7 + 8 + uVar24) * -0x61c8864f ^ *(uint32_t *)(uVar29 + 0x60)) >>
             (0x18U - (char)uVar5 & 0x1f);
        uVar23 = (uint64_t)(uVar21 >> 4 & 0xfffffff0);
        lVar35 = 0;
        if ((*(uint8_t *)(lVar14 + uVar23) & 0xf) == 1) {
          lVar35 = 0xf;
        }
        lVar35 = lVar35 + (uint64_t)(*(uint8_t *)(lVar14 + uVar23) - 1 & 0xf);
        *(char *)(lVar14 + uVar23) = (char)lVar35;
        *(char *)(lVar14 + uVar23 + lVar35) = (char)uVar21;
        *(uint32_t *)(lVar33 + uVar23 * 4 + lVar35 * 4) = uVar27;
        uVar24 = uVar24 + 1;
      } while ((uStack_50 & 0xffffffff) != uVar24);
    }
    *(uint32_t *)(uVar29 + 0x2c) = uVar19;
    uVar28 = *(uint32_t *)(uVar29 + 0x40 + (uint64_t)(uVar19 & 7) * 4);
    *(uint32_t *)(uVar29 + 0x40 + (uint64_t)(uVar19 & 7) * 4) =
         (*(int *)(lVar6 + 8 + (uStack_50 & 0xffffffff)) * -0x61c8864f ^ uVar12) >>
         (0x18U - cVar38 & 0x1f);
  }
  else {
    uVar28 = ((int)*param_2 * -0x61c8864f ^ uVar12) >> (0x18U - cVar38 & 0x1f);
    *(uint32_t *)(uVar29 + 0x2c) = uVar19;
  }
  uVar24 = (uint64_t)(uVar28 >> 4 & 0xfffffff0);
  *(int *)(uVar29 + 0x68) = *(int *)(uVar29 + 0x68) + uVar28;
  lVar30 = uVar24 * 4 + lVar30;
  bVar10 = *(uint8_t *)(lVar17 + uVar24);
  pcVar3 = (char *)(lVar17 + uVar24);
  uVar46 = (uint8_t)(uVar28 >> 0x18);
  uVar44 = (uint8_t)(uVar28 >> 0x10);
  uVar42 = (uint8_t)(uVar28 >> 8);
  auVar39._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar46,uVar46),uVar44),CONCAT14(uVar44,uVar28)) >> 0x20);
  auVar39[3] = uVar42;
  auVar39[2] = uVar42;
  auVar39[0] = (uint8_t)uVar28;
  auVar39[1] = auVar39[0];
  auVar39._8_8_ = 0;
  auVar40 = pshuflw(auVar39,auVar39,0);
  cVar38 = auVar40[0];
  auVar41[0] = -(cVar38 == *pcVar3);
  cVar43 = auVar40[1];
  auVar41[1] = -(cVar43 == pcVar3[1]);
  cVar45 = auVar40[2];
  auVar41[2] = -(cVar45 == pcVar3[2]);
  cVar47 = auVar40[3];
  auVar41[3] = -(cVar47 == pcVar3[3]);
  auVar41[4] = -(cVar38 == pcVar3[4]);
  auVar41[5] = -(cVar43 == pcVar3[5]);
  auVar41[6] = -(cVar45 == pcVar3[6]);
  auVar41[7] = -(cVar47 == pcVar3[7]);
  auVar41[8] = -(cVar38 == pcVar3[8]);
  auVar41[9] = -(cVar43 == pcVar3[9]);
  auVar41[10] = -(cVar45 == pcVar3[10]);
  auVar41[0xb] = -(cVar47 == pcVar3[0xb]);
  auVar41[0xc] = -(cVar38 == pcVar3[0xc]);
  auVar41[0xd] = -(cVar43 == pcVar3[0xd]);
  auVar41[0xe] = -(cVar45 == pcVar3[0xe]);
  auVar41[0xf] = -(cVar47 == pcVar3[0xf]);
  uVar9 = (uint16_t)(SUB161(auVar41 >> 7,0) & 1) | (uint16_t)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
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
          (uint16_t)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar41[0xf] >> 7) << 0xf;
  if (uVar9 != 0) {
    uVar23 = (uint64_t)(uint16_t)(uVar9 >> (bVar10 & 0xf) | uVar9 << 0x10 - (bVar10 & 0xf));
    uVar36 = 0;
    do {
      iVar22 = 0;
      for (uVar32 = uVar23; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x8000000000000000) {
        iVar22 = iVar22 + 1;
      }
      uVar28 = iVar22 + (uint32_t)bVar10 & 0xf;
      if (uVar28 != 0) {
        uVar28 = *(uint32_t *)(lVar30 + (uint64_t)uVar28 * 4);
        if (uVar28 < (uint32_t)pcStack_60) goto LAB_7fffa561e286;
        auStack_178[uVar36] = uVar28;
        uVar36 = uVar36 + 1;
        iVar37 = iVar37 + -1;
      }
      uVar23 = uVar23 & uVar23 - 1;
      if ((uVar23 == 0) || (iVar37 == 0)) goto LAB_7fffa561e286;
    } while( true );
  }
  uVar36 = 0;
LAB_7fffa561e286:
  lVar14 = 0;
  if ((bVar10 & 0xf) == 1) {
    lVar14 = 0xf;
  }
  uVar9 = (uint16_t)in_RAX ^ 0x50c8;
  lVar14 = lVar14 + (uint64_t)(bVar10 - 1 & 0xf);
  *(uint8_t *)(lVar17 + uVar24) = (char)lVar14;
  ((uint8_t *)(lVar17 + uVar24))[lVar14] = auVar39[0];
  iVar37 = *(int *)(uVar29 + 0x2c);
  *(int *)(uVar29 + 0x2c) = iVar37 + 1;
  *(int *)(lVar30 + lVar14 * 4) = iVar37;
  if (uVar36 != (uint16_t)(uVar9 << 0xb | uVar9 >> 5)) {
    pcStack_60 = (char *)(lStack_48 + (uint64_t)uVar11);
    puStack_68 = (uint64_t *)((uint64_t)uVar11 + lVar6);
    iVar37 = (int)uStack_50 + 3;
    uStack_50 = CONCAT44(uStack_50._4_4_,iVar37);
    puVar1 = (uint64_t *)((int64_t)param_2 + 4);
    puVar2 = (uint64_t *)((int64_t)puVar15 - 7);
    puStack_78 = param_2 + 1;
    puStack_70 = (uint64_t *)((int64_t)param_2 + 0xc);
    uVar29 = 3;
    uVar24 = 0;
    do {
      uVar28 = auStack_178[uVar24];
      uVar23 = (uint64_t)uVar28;
      if (uVar28 < uVar11) {
        if (*(int *)(lStack_48 + uVar23) != (int)*param_2) goto LAB_7fffa561e3c0;
        puVar31 = (uint64_t *)(lStack_48 + uVar23 + 4);
        puVar25 = (uint64_t *)(((int64_t)pcStack_60 - (int64_t)puVar31) + (int64_t)puVar1);
        if (puVar15 <= puVar25) {
          puVar25 = puVar15;
        }
        puVar18 = (uint64_t *)((int64_t)puVar25 - 7);
        puVar16 = puVar31;
        puVar20 = puVar1;
        if (puVar1 < puVar18) {
          if (*puVar31 == *puVar1) {
            puVar16 = (uint64_t *)(lStack_48 + 0xc + uVar23);
            puVar13 = puStack_70;
            puVar20 = puStack_70;
            if (puStack_70 < puVar18) {
LAB_7fffa561e500:
              if (*puVar16 == *puVar20) goto code_r0x7fffa561e510;
              uVar12 = 0;
              for (uVar23 = *puVar20 ^ *puVar16; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar12 = uVar12 + 1;
              }
              uVar23 = (int64_t)puVar13 + ((uint64_t)(uVar12 >> 3) - (int64_t)puVar1);
              goto LAB_7fffa561e608;
            }
            goto LAB_7fffa561e52b;
          }
          uVar12 = 0;
          for (uVar23 = *puVar31 ^ *puVar1; (uVar23 & 1) == 0;
              uVar23 = uVar23 >> 1 | 0x8000000000000000) {
            uVar12 = uVar12 + 1;
          }
          uVar23 = (uint64_t)(uVar12 >> 3);
        }
        else {
LAB_7fffa561e52b:
          if ((puVar20 < (uint64_t *)((int64_t)puVar25 - 3U)) && ((int)*puVar16 == (int)*puVar20))
          {
            puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
            puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
          }
          if ((puVar20 < (uint64_t *)((int64_t)puVar25 - 1U)) &&
             ((short)*puVar16 == (short)*puVar20)) {
            puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
            puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
          }
          if (puVar20 < puVar25) {
            puVar20 = (uint64_t *)
                      ((int64_t)puVar20 + (uint64_t)((char)*puVar16 == (char)*puVar20));
          }
          uVar23 = (int64_t)puVar20 - (int64_t)puVar1;
        }
LAB_7fffa561e608:
        if ((char *)((int64_t)puVar31 + uVar23) == pcStack_60) {
          puVar25 = (uint64_t *)((int64_t)puVar1 + uVar23);
          puVar18 = puStack_68;
          puVar31 = puVar25;
          if (puVar25 < puVar2) {
            if (*puStack_68 == *puVar25) {
              puVar31 = (uint64_t *)((int64_t)puStack_70 + uVar23);
              lVar17 = 8;
              if (puVar31 < puVar2) {
LAB_7fffa561e670:
                if (*(uint64_t *)((int64_t)puStack_68 + lVar17) == *puVar31)
                goto code_r0x7fffa561e680;
                uVar12 = 0;
                for (uVar32 = *(uint64_t *)((int64_t)puStack_68 + lVar17) ^ *puVar31;
                    (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x8000000000000000) {
                  uVar12 = uVar12 + 1;
                }
                uVar32 = (uint64_t)(uVar12 >> 3) + lVar17;
                goto LAB_7fffa561e71f;
              }
LAB_7fffa561e695:
              puVar18 = (uint64_t *)(lVar17 + (int64_t)puStack_68);
              goto LAB_7fffa561e698;
            }
            uVar12 = 0;
            for (uVar32 = *puStack_68 ^ *puVar25; (uVar32 & 1) == 0;
                uVar32 = uVar32 >> 1 | 0x8000000000000000) {
              uVar12 = uVar12 + 1;
            }
            uVar32 = (uint64_t)(uVar12 >> 3);
          }
          else {
LAB_7fffa561e698:
            if ((puVar31 < (uint64_t *)((int64_t)puVar15 - 3U)) &&
               ((int)*puVar18 == (int)*puVar31)) {
              puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
              puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
            }
            if ((puVar31 < (uint64_t *)((int64_t)puVar15 - 1U)) &&
               ((short)*puVar18 == (short)*puVar31)) {
              puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
              puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
            }
            if (puVar31 < puVar15) {
              puVar31 = (uint64_t *)
                        ((int64_t)puVar31 + (uint64_t)((char)*puVar18 == (char)*puVar31));
            }
            uVar32 = (int64_t)puVar31 - (int64_t)puVar25;
          }
LAB_7fffa561e71f:
          uVar23 = uVar23 + uVar32;
        }
        uVar23 = uVar23 + 4;
LAB_7fffa561e72b:
        if (uVar29 < uVar23) {
          *param_1 = (uint64_t)(iVar37 - uVar28);
          uVar29 = uVar23;
          if ((uint64_t *)((int64_t)param_2 + uVar23) == puVar15) {
            return;
          }
        }
      }
      else {
        puVar25 = (uint64_t *)(lVar6 + uVar23);
        if (*(int *)((uVar29 - 3) + (int64_t)puVar25) == *(int *)((int64_t)param_2 + (uVar29 - 3))
           ) {
          if (param_2 < puVar2) {
            if (*puVar25 == *param_2) {
              puVar25 = (uint64_t *)(lVar6 + 8 + uVar23);
              puVar31 = param_2 + 1;
              puVar18 = param_2;
              do {
                if (puVar2 <= puVar31) goto LAB_7fffa561e494;
                uVar23 = *puVar31;
                uVar32 = *puVar25;
                puVar31 = puVar31 + 1;
                puVar18 = puVar18 + 1;
                puVar25 = puVar25 + 1;
              } while (uVar32 == uVar23);
              uVar12 = 0;
              for (uVar23 = uVar23 ^ uVar32; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar12 = uVar12 + 1;
              }
              uVar23 = (int64_t)puVar18 + ((uint64_t)(uVar12 >> 3) - (int64_t)param_2);
            }
            else {
              uVar12 = 0;
              for (uVar23 = *param_2 ^ *puVar25; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar12 = uVar12 + 1;
              }
              uVar23 = (uint64_t)(uVar12 >> 3);
            }
          }
          else {
            puVar31 = param_2;
LAB_7fffa561e494:
            if ((puVar31 < (uint64_t *)((int64_t)puVar15 - 3U)) &&
               ((int)*puVar25 == (int)*puVar31)) {
              puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
              puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
            }
            if ((puVar31 < (uint64_t *)((int64_t)puVar15 - 1U)) &&
               ((short)*puVar25 == (short)*puVar31)) {
              puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
              puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
            }
            if (puVar31 < puVar15) {
              puVar31 = (uint64_t *)
                        ((int64_t)puVar31 + (uint64_t)((char)*puVar25 == (char)*puVar31));
            }
            uVar23 = (int64_t)puVar31 - (int64_t)param_2;
          }
          goto LAB_7fffa561e72b;
        }
      }
LAB_7fffa561e3c0:
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar36);
  }
  return;
code_r0x7fffa561e510:
  puVar20 = puVar20 + 1;
  puVar16 = puVar16 + 1;
  puVar13 = puVar13 + 1;
  if (puVar18 <= puVar20) goto LAB_7fffa561e52b;
  goto LAB_7fffa561e500;
code_r0x7fffa561e680:
  puVar31 = puVar31 + 1;
  lVar17 = lVar17 + 8;
  if (puVar2 <= puVar31) goto LAB_7fffa561e695;
  goto LAB_7fffa561e670;
}


// ============================================================================
// Function : FUN_7fffa561e850  |  RVA: 0xeae850  |  Size: 24161 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa561f6b8) */
/* WARNING: Removing unreachable block (ram,0x7fffa56214a6) */
/* WARNING: Removing unreachable block (ram,0x7fffa56210cd) */
/* WARNING: Removing unreachable block (ram,0x7fffa56241c6) */
/* WARNING: Removing unreachable block (ram,0x7fffa562455c) */
/* WARNING: Removing unreachable block (ram,0x7fffa5622b20) */
/* WARNING: Removing unreachable block (ram,0x7fffa5622b52) */
/* WARNING: Removing unreachable block (ram,0x7fffa561e8ad) */
/* WARNING: Removing unreachable block (ram,0x7fffa562355e) */
/* WARNING: Removing unreachable block (ram,0x7fffa5622c10) */
/* WARNING: Removing unreachable block (ram,0x7fffa561f347) */
/* WARNING: Removing unreachable block (ram,0x7fffa561f022) */
/* WARNING: Removing unreachable block (ram,0x7fffa562130d) */
/* WARNING: Removing unreachable block (ram,0x7fffa5620e5b) */
/* WARNING: Removing unreachable block (ram,0x7fffa561fb22) */
/* WARNING: Removing unreachable block (ram,0x7fffa56237fa) */
/* WARNING: Removing unreachable block (ram,0x7fffa5620628) */
/* WARNING: Removing unreachable block (ram,0x7fffa561f391) */
/* WARNING: Removing unreachable block (ram,0x7fffa56207c2) */
/* WARNING: Removing unreachable block (ram,0x7fffa5621ad4) */
/* WARNING: Removing unreachable block (ram,0x7fffa5621ae5) */
/* WARNING: Type propagation algorithm not settling */

int64_t FUN_7fffa561e850(int64_t param_1,int64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  char cVar6;
  char cVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int iVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint8_t bVar19;
  uint32_t uVar20;
  uint64_t *puVar21;
  int64_t lVar22;
  uint64_t *puVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  uint64_t uVar26;
  uint64_t *puVar27;
  uint64_t *puVar28;
  uint64_t *puVar29;
  uint64_t *puVar30;
  uint64_t uVar31;
  int iVar32;
  int iVar33;
  uint64_t *puVar34;
  uint32_t uVar35;
  uint32_t uVar36;
  uint32_t uVar37;
  uint64_t uVar38;
  int64_t lVar39;
  uint64_t uVar40;
  uint32_t uVar41;
  uint64_t uVar42;
  uint64_t uVar43;
  uint64_t uVar44;
  uint64_t uVar45;
  uint32_t uVar46;
  int64_t lVar47;
  bool bVar48;
  uint32_t uVar49;
  uint64_t uStack_d0;
  uint64_t uStack_68;
  
  lVar8 = *(int64_t *)(param_1 + 0x70);
  iVar32 = *(int *)(param_1 + 0x110);
  if (1 < *(uint32_t *)(param_1 + 0x114)) {
    lVar9 = *(int64_t *)(param_1 + 8);
    iVar33 = (int)lVar9;
    iVar13 = ((int)param_5 + (int)param_4) - iVar33;
    uVar15 = *(uint32_t *)(param_1 + 0x18);
    uVar41 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
    uVar14 = iVar13 - uVar41;
    if (iVar13 - uVar15 <= uVar41) {
      uVar14 = uVar15;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar14 = uVar15;
    }
    puVar21 = (uint64_t *)((uint64_t)uVar14 + lVar9);
    puVar25 = (uint64_t *)((uint64_t)(param_4 == puVar21) + (int64_t)param_4);
    iVar13 = (int)puVar25 - iVar33;
    uVar49 = iVar13 - uVar41;
    if (iVar13 - uVar15 <= uVar41) {
      uVar49 = uVar15;
    }
    uVar41 = *param_3;
    uVar16 = param_3[1];
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar49 = uVar15;
    }
    puVar1 = (uint64_t *)((int64_t)param_4 + param_5);
    uVar26 = (uint64_t)(*(uint32_t *)(param_1 + 0x114) + 1);
    uVar49 = iVar13 - uVar49;
    uStack_68._0_4_ = uVar16;
    if (uVar49 < uVar16) {
      uStack_68._0_4_ = 0;
    }
    uVar15 = 0;
    if (uVar41 <= uVar49) {
      uVar15 = uVar41;
    }
    uStack_d0 = (uint64_t)uVar15;
    puVar23 = (uint64_t *)((int64_t)puVar25 + uVar26);
    puVar17 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
    puVar29 = (uint64_t *)((int64_t)puVar25 + uVar26 + 1);
    if (iVar32 < 6) {
      if (iVar32 == 5) {
        if (puVar29 < puVar17) {
          puVar4 = puVar1 + -4;
          puVar27 = (uint64_t *)((int64_t)puVar1 - 7);
          uVar20 = 0x40 - *(int *)(param_1 + 0x108);
          puVar18 = param_4;
          do {
            uVar15 = (uint32_t)uStack_d0;
            puVar34 = puVar25 + 0x10;
            bVar19 = (uint8_t)uVar20;
            uVar38 = *puVar25 * -0x30e4432345000000 >> (bVar19 & 0x3f);
            uVar36 = *(uint32_t *)(lVar8 + uVar38 * 4);
            lVar47 = -uStack_d0;
            uVar42 = *(uint64_t *)((int64_t)puVar25 + 1);
            uVar44 = uVar26;
            puVar24 = (uint64_t *)((int64_t)puVar25 + 1);
            while( true ) {
              puVar28 = puVar23;
              uVar42 = uVar42 * -0x30e4432345000000 >> (bVar19 & 0x3f);
              uVar35 = (int)puVar25 - iVar33;
              iVar32 = *(int *)((int64_t)puVar28 + lVar47);
              *(uint32_t *)(lVar8 + uVar38 * 4) = uVar35;
              if ((uVar15 != 0) && ((int)*puVar28 == iVar32)) {
                uVar44 = (uint64_t)
                         (*(char *)((int64_t)puVar28 - 1) ==
                         *(char *)((int64_t)puVar28 + lVar47 + -1));
                puVar25 = (uint64_t *)((int64_t)puVar28 - uVar44);
                lVar47 = (int64_t)puVar28 + (lVar47 - uVar44);
                *(int *)(lVar8 + uVar42 * 4) = (int)puVar24 - iVar33;
                uVar44 = uVar44 | 4;
                iVar32 = 1;
                uStack_68 = (uint64_t)(uint32_t)uStack_68;
                uVar42 = uStack_d0;
                goto LAB_7fffa561ecd4;
              }
              if ((uVar14 <= uVar36) &&
                 (uVar31 = (uint64_t)uVar36, (int)*puVar25 == *(int *)(lVar9 + uVar31)))
              goto LAB_7fffa561edb7;
              uVar38 = *puVar28 * -0x30e4432345000000 >> (bVar19 & 0x3f);
              uVar36 = *(uint32_t *)(lVar8 + uVar42 * 4);
              uVar31 = (uint64_t)uVar36;
              uVar35 = (int)puVar24 - iVar33;
              *(uint32_t *)(lVar8 + uVar42 * 4) = uVar35;
              if ((uVar14 <= uVar36) && ((int)*puVar24 == *(int *)(lVar9 + uVar31))) break;
              uVar36 = *(uint32_t *)(lVar8 + uVar38 * 4);
              puVar23 = (uint64_t *)(uVar44 + (int64_t)puVar28);
              if (puVar23 < puVar34) {
                uVar31 = uVar44;
              }
              else {
                puVar34 = puVar34 + 0x10;
                uVar31 = uVar44 + 1;
              }
              puVar30 = (uint64_t *)(uVar44 + (int64_t)puVar29);
              uVar42 = *puVar29;
              uVar44 = uVar31;
              puVar24 = puVar29;
              puVar29 = puVar30;
              puVar25 = puVar28;
              if (puVar17 <= puVar30) {
                puVar25 = puVar18;
                goto LAB_7fffa562444c;
              }
            }
            puVar25 = puVar24;
            puVar24 = puVar28;
            uVar42 = uVar38;
            if (uVar44 < 5) {
LAB_7fffa561edb7:
              *(int *)(lVar8 + uVar42 * 4) = (int)puVar24 - iVar33;
            }
            lVar47 = uVar31 + lVar9;
            uVar15 = (int)puVar25 - (int)lVar47;
            uVar42 = (uint64_t)uVar15;
            iVar32 = uVar15 + 3;
            uVar44 = 4;
            uStack_68 = uStack_d0;
            if ((uVar14 < uVar36) && (puVar18 < puVar25)) {
              lVar39 = 0;
              do {
                if (*(char *)((int64_t)puVar25 + lVar39 + -1) != *(char *)(lVar47 + -1 + lVar39)) {
                  puVar25 = (uint64_t *)((int64_t)puVar25 + lVar39);
                  uVar44 = 4 - lVar39;
                  lVar47 = lVar47 + lVar39;
                  goto LAB_7fffa561ecd4;
                }
                lVar22 = lVar39 + -1;
              } while ((puVar21 < (uint64_t *)(lVar39 + lVar47 + -1)) &&
                      (lVar3 = lVar39 + -1, lVar39 = lVar22,
                      puVar18 < (uint64_t *)((int64_t)puVar25 + lVar3)));
              puVar25 = (uint64_t *)((int64_t)puVar25 + lVar22);
              uVar44 = 4 - lVar22;
              lVar47 = lVar47 + lVar22;
            }
LAB_7fffa561ecd4:
            puVar23 = (uint64_t *)(uVar44 + lVar47);
            puVar29 = (uint64_t *)((int64_t)puVar25 + uVar44);
            puVar34 = puVar29;
            if (puVar29 < puVar27) {
              if (*puVar23 == *puVar29) {
                lVar39 = 0;
                do {
                  puVar23 = (uint64_t *)((int64_t)puVar25 + lVar39 + uVar44 + 8);
                  if (puVar27 <= puVar23) {
                    puVar23 = (uint64_t *)(lVar39 + lVar47 + uVar44 + 8);
                    puVar34 = (uint64_t *)((int64_t)puVar25 + lVar39 + uVar44 + 8);
                    goto joined_r0x7fffa561ee7c;
                  }
                  uVar38 = *(uint64_t *)(uVar44 + lVar47 + 8 + lVar39);
                  uVar31 = *puVar23;
                  lVar39 = lVar39 + 8;
                } while (uVar38 == uVar31);
                uVar15 = 0;
                for (uVar38 = uVar38 ^ uVar31; (uVar38 & 1) == 0;
                    uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                  uVar15 = uVar15 + 1;
                }
                uVar38 = (uint64_t)(uVar15 >> 3) + lVar39;
              }
              else {
                uVar15 = 0;
                for (uVar38 = *puVar29 ^ *puVar23; (uVar38 & 1) == 0;
                    uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                  uVar15 = uVar15 + 1;
                }
                uVar38 = (uint64_t)(uVar15 >> 3);
              }
            }
            else {
joined_r0x7fffa561ee7c:
              if ((puVar34 < (uint64_t *)((int64_t)puVar1 - 3U)) &&
                 ((int)*puVar23 == (int)*puVar34)) {
                puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
                puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
              }
              if ((puVar34 < (uint64_t *)((int64_t)puVar1 - 1U)) &&
                 ((short)*puVar23 == (short)*puVar34)) {
                puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
                puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
              }
              if (puVar34 < puVar1) {
                puVar34 = (uint64_t *)
                          ((int64_t)puVar34 + (uint64_t)((char)*puVar23 == (char)*puVar34));
              }
              uVar38 = (int64_t)puVar34 - (int64_t)puVar29;
            }
            uVar31 = (int64_t)puVar25 - (int64_t)puVar18;
            puVar23 = (uint64_t *)param_2[3];
            if (puVar4 < puVar25) {
              puVar29 = puVar23;
              if (puVar18 <= puVar4) {
                uVar40 = puVar18[1];
                puVar29 = (uint64_t *)((int64_t)puVar23 + ((int64_t)puVar4 - (int64_t)puVar18));
                *puVar23 = *puVar18;
                puVar23[1] = uVar40;
                if (0x10 < (int64_t)puVar4 - (int64_t)puVar18) {
                  lVar47 = 0x10;
                  do {
                    uVar10 = ((uint64_t *)((int64_t)puVar18 + lVar47))[1];
                    *(uint64_t *)((int64_t)puVar23 + lVar47) =
                         *(uint64_t *)((int64_t)puVar18 + lVar47);
                    ((uint64_t *)((int64_t)puVar23 + lVar47))[1] = uVar10;
                    puVar2 = (uint64_t *)((int64_t)puVar18 + lVar47 + 0x10);
                    uVar10 = puVar2[1];
                    puVar5 = (uint64_t *)((int64_t)puVar23 + lVar47 + 0x10);
                    *puVar5 = *puVar2;
                    puVar5[1] = uVar10;
                    lVar39 = lVar47 + 0x20;
                    lVar47 = lVar47 + 0x20;
                  } while ((uint64_t *)((int64_t)puVar23 + lVar39) < puVar29);
                }
                puVar18 = puVar4;
              }
              if (puVar18 < puVar25) {
                uVar40 = (int64_t)puVar25 - (int64_t)puVar18;
                puVar23 = puVar29;
                if ((3 < uVar40) && (0x1f < (uint64_t)((int64_t)puVar29 - (int64_t)puVar18))) {
                  if (uVar40 < 0x20) {
                    uVar43 = 0;
                  }
                  else {
                    uVar43 = uVar40 & 0xffffffffffffffe0;
                    lVar47 = 0;
                    while( true ) {
                      uVar10 = *(uint64_t *)((int64_t)puVar18 + lVar47);
                      uVar11 = ((uint64_t *)((int64_t)puVar18 + lVar47))[1];
                      puVar2 = (uint64_t *)((int64_t)puVar18 + lVar47 + 0x10);
                      uVar12 = puVar2[1];
                      puVar5 = (uint64_t *)((int64_t)puVar29 + lVar47 + 0x10);
                      *puVar5 = *puVar2;
                      puVar5[1] = uVar12;
                      *(uint64_t *)((int64_t)puVar29 + lVar47) = uVar10;
                      ((uint64_t *)((int64_t)puVar29 + lVar47))[1] = uVar11;
                      if (uVar43 - 0x20 == lVar47) break;
                      lVar47 = lVar47 + 0x20;
                    }
                    if (uVar40 == uVar43) goto LAB_7fffa561f206;
                    if ((uVar40 & 0x1c) == 0) {
                      puVar18 = (uint64_t *)((int64_t)puVar18 + uVar43);
                      puVar23 = (uint64_t *)((int64_t)puVar29 + uVar43);
                      goto LAB_7fffa561f148;
                    }
                  }
                  uVar45 = uVar40 & 0xfffffffffffffffc;
                  puVar23 = (uint64_t *)((int64_t)puVar29 + uVar45);
                  for (; *(uint32_t *)((int64_t)puVar29 + uVar43) =
                              *(uint32_t *)((int64_t)puVar18 + uVar43), uVar45 - 4 != uVar43;
                      uVar43 = uVar43 + 4) {
                  }
                  if (uVar40 == uVar45) goto LAB_7fffa561f206;
                  puVar18 = (uint64_t *)((int64_t)puVar18 + uVar45);
                }
LAB_7fffa561f148:
                uVar15 = (int)puVar25 - (int)puVar18 & 7;
                uVar40 = (uint64_t)uVar15;
                puVar34 = puVar23;
                puVar29 = puVar18;
                if (uVar15 == 0) {
                  puVar24 = puVar18;
                }
                else {
                  do {
                    uVar40 = uVar40 - 1;
                    puVar23 = (uint64_t *)((int64_t)puVar34 + 1);
                    *(char *)puVar34 = (char)*puVar29;
                    puVar24 = (uint64_t *)((int64_t)puVar29 + 1);
                    puVar34 = puVar23;
                    puVar29 = (uint64_t *)((int64_t)puVar29 + 1);
                  } while (uVar40 != 0);
                }
                if ((uint64_t)((int64_t)puVar18 - (int64_t)puVar25) < 0xfffffffffffffff9) {
                  lVar47 = 0;
                  do {
                    *(uint8_t *)((int64_t)puVar23 + lVar47) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47);
                    *(uint8_t *)((int64_t)puVar23 + lVar47 + 1) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 1);
                    *(uint8_t *)((int64_t)puVar23 + lVar47 + 2) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 2);
                    *(uint8_t *)((int64_t)puVar23 + lVar47 + 3) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 3);
                    *(uint8_t *)((int64_t)puVar23 + lVar47 + 4) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 4);
                    *(uint8_t *)((int64_t)puVar23 + lVar47 + 5) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 5);
                    *(uint8_t *)((int64_t)puVar23 + lVar47 + 6) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 6);
                    *(uint8_t *)((int64_t)puVar23 + lVar47 + 7) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 7);
                    lVar39 = lVar47 + 8;
                    lVar47 = lVar47 + 8;
                  } while ((uint64_t *)((int64_t)puVar24 + lVar39) != puVar25);
                }
              }
LAB_7fffa561f206:
              lVar47 = param_2[1];
              param_2[3] = param_2[3] + uVar31;
              if (0xffff < uVar31) {
                *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
                *(uint32_t *)(param_2 + 9) = 1;
              }
            }
            else {
              uVar40 = puVar18[1];
              *puVar23 = *puVar18;
              puVar23[1] = uVar40;
              if (0x10 < uVar31) {
                lVar47 = param_2[3];
                uVar40 = puVar18[3];
                *(uint64_t *)(lVar47 + 0x10) = puVar18[2];
                *(uint64_t *)(lVar47 + 0x18) = uVar40;
                if (0x20 < (int64_t)uVar31) {
                  lVar39 = 0;
                  do {
                    puVar5 = (uint64_t *)((int64_t)puVar18 + lVar39 + 0x20);
                    uVar10 = puVar5[1];
                    puVar2 = (uint64_t *)(lVar47 + 0x20 + lVar39);
                    *puVar2 = *puVar5;
                    puVar2[1] = uVar10;
                    puVar2 = (uint64_t *)((int64_t)puVar18 + lVar39 + 0x30);
                    uVar10 = puVar2[1];
                    puVar5 = (uint64_t *)(lVar47 + 0x30 + lVar39);
                    *puVar5 = *puVar2;
                    puVar5[1] = uVar10;
                    lVar22 = lVar47 + 0x20 + lVar39;
                    lVar39 = lVar39 + 0x20;
                  } while (lVar22 + 0x20U < lVar47 + uVar31);
                }
                goto LAB_7fffa561f206;
              }
              lVar47 = param_2[1];
              param_2[3] = param_2[3] + uVar31;
            }
            *(short *)(lVar47 + 4) = (short)uVar31;
            *(int *)param_2[1] = iVar32;
            uVar31 = (uVar38 + uVar44) - 3;
            if (0xffff < uVar31) {
              *(uint32_t *)(param_2 + 9) = 2;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
            }
            *(short *)(param_2[1] + 6) = (short)uVar31;
            param_2[1] = param_2[1] + 8;
            puVar25 = (uint64_t *)((int64_t)puVar25 + uVar38 + uVar44);
            if (puVar25 <= puVar17) {
              uVar15 = ~uVar20;
              *(uint32_t *)(lVar8 + ((uint64_t)
                                 (*(int64_t *)(lVar9 + 2 + (uint64_t)uVar35) * -0x30e4432345000000
                                 ) >> (uint64_t)uVar20) * 4) =
                   ((uVar20 | uVar35) * -0x25994baa - (uVar35 ^ uVar20)) +
                   (uVar20 | ~uVar35) * 0x25994ba9 +
                   (uVar15 & uVar35) * -0x5837fef7 + (~uVar35 & uVar15) * -0x25994bab +
                   (uVar15 & uVar35) * 0x7dd14aa1;
              *(int *)(lVar8 + ((uint64_t)
                                (*(int64_t *)((int64_t)puVar25 + -2) * -0x30e4432345000000) >>
                               (bVar19 & 0x3f)) * 4) = ((int)puVar25 + -2) - iVar33;
              if ((uint32_t)uStack_68 == 0) {
                uStack_68._0_4_ = 0;
              }
              else {
                do {
                  uVar15 = (uint32_t)uVar42;
                  if ((int)*puVar25 != *(int *)((int64_t)puVar25 - (uint64_t)(uint32_t)uStack_68))
                  break;
                  lVar47 = -(uint64_t)(uint32_t)uStack_68;
                  puVar23 = (uint64_t *)((int64_t)puVar25 + 4);
                  puVar29 = (uint64_t *)((int64_t)puVar25 + lVar47 + 4);
                  if (puVar23 < puVar27) {
                    if (*puVar29 == *puVar23) {
                      lVar39 = 0xc;
LAB_7fffa561f4a0:
                      puVar18 = (uint64_t *)((int64_t)puVar25 + lVar39);
                      if (puVar18 < puVar27) {
                        uVar42 = *(uint64_t *)((int64_t)puVar25 + lVar39 + lVar47);
                        if (uVar42 == *puVar18) goto code_r0x7fffa561f4c9;
                        uVar36 = 0;
                        for (uVar42 = uVar42 ^ *puVar18; (uVar42 & 1) == 0;
                            uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                          uVar36 = uVar36 + 1;
                        }
                        uVar42 = ((uint64_t)(uVar36 >> 3) + lVar39) - 4;
                        goto LAB_7fffa561f5b5;
                      }
                      puVar29 = (uint64_t *)(lVar47 + (int64_t)puVar18);
                      goto code_r0x7fffa561f4de;
                    }
                    uVar36 = 0;
                    for (uVar42 = *puVar23 ^ *puVar29; (uVar42 & 1) == 0;
                        uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                      uVar36 = uVar36 + 1;
                    }
                    uVar42 = (uint64_t)(uVar36 >> 3);
                  }
                  else {
                    puVar18 = puVar23;
code_r0x7fffa561f4de:
                    if ((puVar18 < (uint64_t *)((int64_t)puVar1 - 3U)) &&
                       ((int)*puVar29 == (int)*puVar18)) {
                      puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
                      puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
                    }
                    if ((puVar18 < (uint64_t *)((int64_t)puVar1 - 1U)) &&
                       ((short)*puVar29 == (short)*puVar18)) {
                      puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
                      puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
                    }
                    if (puVar18 < puVar1) {
                      puVar18 = (uint64_t *)
                                ((int64_t)puVar18 + (uint64_t)((char)*puVar29 == (char)*puVar18));
                    }
                    uVar42 = (int64_t)puVar18 - (int64_t)puVar23;
                  }
LAB_7fffa561f5b5:
                  *(int *)(lVar8 + (*puVar25 * -0x30e4432345000000 >> (bVar19 & 0x3f)) * 4) =
                       (int)puVar25 - iVar33;
                  if (puVar25 <= puVar4) {
                    uVar44 = puVar25[1];
                    puVar23 = (uint64_t *)param_2[3];
                    *puVar23 = *puVar25;
                    puVar23[1] = uVar44;
                  }
                  *(uint16_t *)(param_2[1] + 4) = 0;
                  *(uint32_t *)param_2[1] = 1;
                  if (0xffff < uVar42 + 1) {
                    *(uint32_t *)(param_2 + 9) = 2;
                    *(int *)((int64_t)param_2 + 0x4c) =
                         (int)((uint64_t)(param_2[1] - *param_2) >> 3);
                  }
                  *(short *)(param_2[1] + 6) = (short)(uVar42 + 1);
                  param_2[1] = param_2[1] + 8;
                  puVar25 = (uint64_t *)((int64_t)puVar25 + uVar42 + 4);
                  uVar42 = (uint64_t)(uint32_t)uStack_68;
                  uStack_68._0_4_ = uVar15;
                } while (puVar25 <= puVar17);
              }
            }
            puVar23 = (uint64_t *)((int64_t)puVar25 + uVar26);
            puVar29 = (uint64_t *)((int64_t)puVar25 + uVar26 + 1);
            uVar15 = (uint32_t)uVar42;
            uStack_d0 = uVar42;
            puVar18 = puVar25;
          } while (puVar29 < puVar17);
        }
        else {
          puVar25 = param_4;
        }
LAB_7fffa562444c:
        if (uVar16 <= uVar49) {
          uVar16 = 0;
        }
        uVar14 = uVar16;
        if (uVar15 != 0) {
          uVar14 = uVar41;
        }
        uVar20 = 0;
        if (uVar49 < uVar41) {
          uVar16 = uVar14;
          uVar20 = uVar41;
        }
        if (uVar15 != 0) {
          uVar20 = uVar15;
        }
        if ((uint32_t)uStack_68 != 0) {
          uVar16 = (uint32_t)uStack_68;
        }
        param_3[1] = uVar16;
        *param_3 = uVar20;
        goto LAB_7fffa562456e;
      }
    }
    else {
      if (iVar32 == 6) {
        if (puVar29 < puVar17) {
          puVar4 = puVar1 + -4;
          bVar19 = 0x40 - (char)*(uint32_t *)(param_1 + 0x108);
          puVar27 = (uint64_t *)((int64_t)puVar1 - 7);
          puVar18 = param_4;
          do {
            uVar42 = *(uint64_t *)((int64_t)puVar25 + 1);
            uVar15 = (uint32_t)uStack_d0;
            uVar38 = *puVar25 * -0x30e4432340650000 >> (bVar19 & 0x3f);
            lVar47 = -uStack_d0;
            puVar34 = puVar25 + 0x10;
            uVar20 = *(uint32_t *)(lVar8 + uVar38 * 4);
            puVar24 = (uint64_t *)((int64_t)puVar25 + 1);
            uVar44 = uVar26;
            while( true ) {
              puVar28 = puVar23;
              uVar36 = (int)puVar25 - iVar33;
              uVar42 = uVar42 * -0x30e4432340650000 >> (bVar19 & 0x3f);
              iVar32 = *(int *)((int64_t)puVar28 + lVar47);
              *(uint32_t *)(lVar8 + uVar38 * 4) = uVar36;
              if (((int)*puVar28 == iVar32) && (uVar15 != 0)) {
                uVar44 = (uint64_t)
                         (*(char *)((int64_t)puVar28 - 1) ==
                         *(char *)((int64_t)puVar28 + lVar47 + -1));
                puVar23 = (uint64_t *)((int64_t)puVar28 + (lVar47 - uVar44));
                puVar25 = (uint64_t *)((int64_t)puVar28 - uVar44);
                *(int *)(lVar8 + uVar42 * 4) = (int)puVar24 - iVar33;
                uVar44 = uVar44 | 4;
                iVar32 = 1;
                uStack_68 = (uint64_t)(uint32_t)uStack_68;
                uVar42 = uStack_d0;
                goto LAB_7fffa56232d0;
              }
              if ((uVar14 <= uVar20) &&
                 (uVar31 = (uint64_t)uVar20, (int)*puVar25 == *(int *)(lVar9 + uVar31))) {
                puVar28 = puVar24;
                goto LAB_7fffa562321e;
              }
              uVar38 = *puVar28 * -0x30e4432340650000 >> (bVar19 & 0x3f);
              uVar36 = (int)puVar24 - iVar33;
              uVar20 = *(uint32_t *)(lVar8 + uVar42 * 4);
              uVar31 = (uint64_t)uVar20;
              *(uint32_t *)(lVar8 + uVar42 * 4) = uVar36;
              if ((uVar14 <= uVar20) && ((int)*puVar24 == *(int *)(lVar9 + uVar31))) break;
              uVar20 = *(uint32_t *)(lVar8 + uVar38 * 4);
              if ((uint64_t *)(uVar44 + (int64_t)puVar28) < puVar34) {
                uVar31 = uVar44;
              }
              else {
                uVar31 = uVar44 + 1;
                puVar34 = puVar34 + 0x10;
              }
              puVar30 = (uint64_t *)(uVar44 + (int64_t)puVar29);
              uVar42 = *puVar29;
              puVar24 = puVar29;
              puVar29 = puVar30;
              puVar23 = (uint64_t *)(uVar44 + (int64_t)puVar28);
              uVar44 = uVar31;
              puVar25 = puVar28;
              if (puVar17 <= puVar30) {
                puVar25 = puVar18;
                goto LAB_7fffa56246b7;
              }
            }
            puVar25 = puVar24;
            uVar42 = uVar38;
            if (uVar44 < 5) {
LAB_7fffa562321e:
              *(int *)(lVar8 + uVar42 * 4) = (int)puVar28 - iVar33;
            }
            puVar23 = (uint64_t *)(uVar31 + lVar9);
            uVar15 = (int)puVar25 - (int)puVar23;
            uVar42 = (uint64_t)uVar15;
            iVar32 = uVar15 + 3;
            uVar44 = 4;
            uStack_68 = uStack_d0;
            if (puVar18 < puVar25) {
              if (uVar14 < uVar20) {
                for (lVar47 = 0;
                    *(char *)((int64_t)puVar25 + lVar47 + -1) ==
                    *(char *)((int64_t)puVar23 + lVar47 + -1); lVar47 = lVar47 + -1) {
                  puVar29 = (uint64_t *)((int64_t)puVar25 + lVar47 + -1);
                  puVar34 = (uint64_t *)((int64_t)puVar23 + lVar47 + -1);
                  if ((puVar34 <= puVar21) || (puVar29 <= puVar18)) {
                    uVar44 = uVar44 + 1;
                    puVar25 = puVar29;
                    puVar23 = puVar34;
                    goto LAB_7fffa56232d0;
                  }
                  uVar44 = uVar44 + 1;
                }
                puVar25 = (uint64_t *)((int64_t)puVar25 + lVar47);
                puVar23 = (uint64_t *)((int64_t)puVar23 + lVar47);
              }
            }
            else {
            }
LAB_7fffa56232d0:
            uStack_d0 = uVar42;
            puVar23 = (uint64_t *)((int64_t)puVar23 + uVar44);
            puVar29 = (uint64_t *)((int64_t)puVar25 + uVar44);
            puVar34 = puVar29;
            if (puVar29 < puVar27) {
              if (*puVar23 == *puVar29) {
                lVar47 = 8;
LAB_7fffa5623310:
                puVar34 = (uint64_t *)((int64_t)puVar29 + lVar47);
                if (puVar34 < puVar27) {
                  if (*(uint64_t *)((int64_t)puVar23 + lVar47) == *puVar34)
                  goto code_r0x7fffa5623329;
                  uVar15 = 0;
                  for (uVar42 = *(uint64_t *)((int64_t)puVar23 + lVar47) ^ *puVar34;
                      (uVar42 & 1) == 0; uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  uVar42 = (uint64_t)(uVar15 >> 3) + lVar47;
                  goto LAB_7fffa56233da;
                }
                puVar23 = (uint64_t *)((int64_t)puVar23 + lVar47);
                goto joined_r0x7fffa562334b;
              }
              uVar15 = 0;
              for (uVar42 = *puVar29 ^ *puVar23; (uVar42 & 1) == 0;
                  uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                uVar15 = uVar15 + 1;
              }
              uVar42 = (uint64_t)(uVar15 >> 3);
            }
            else {
joined_r0x7fffa562334b:
              if ((puVar34 < (uint64_t *)((int64_t)puVar1 - 3U)) &&
                 ((int)*puVar23 == (int)*puVar34)) {
                puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
                puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
              }
              if ((puVar34 < (uint64_t *)((int64_t)puVar1 - 1U)) &&
                 ((short)*puVar23 == (short)*puVar34)) {
                puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
                puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
              }
              if (puVar34 < puVar1) {
                puVar34 = (uint64_t *)
                          ((int64_t)puVar34 + (uint64_t)((char)*puVar23 == (char)*puVar34));
              }
              uVar42 = (int64_t)puVar34 - (int64_t)puVar29;
            }
LAB_7fffa56233da:
            uVar38 = (int64_t)puVar25 - (int64_t)puVar18;
            puVar23 = (uint64_t *)param_2[3];
            if (puVar4 < puVar25) {
              puVar29 = puVar23;
              if (puVar18 <= puVar4) {
                uVar31 = puVar18[1];
                *puVar23 = *puVar18;
                puVar23[1] = uVar31;
                puVar29 = (uint64_t *)((int64_t)puVar23 + ((int64_t)puVar4 - (int64_t)puVar18));
                if (0x10 < (int64_t)puVar4 - (int64_t)puVar18) {
                  lVar47 = 0x10;
                  do {
                    uVar10 = ((uint64_t *)((int64_t)puVar18 + lVar47))[1];
                    *(uint64_t *)((int64_t)puVar23 + lVar47) =
                         *(uint64_t *)((int64_t)puVar18 + lVar47);
                    ((uint64_t *)((int64_t)puVar23 + lVar47))[1] = uVar10;
                    puVar2 = (uint64_t *)((int64_t)puVar18 + lVar47 + 0x10);
                    uVar10 = puVar2[1];
                    puVar5 = (uint64_t *)((int64_t)puVar23 + lVar47 + 0x10);
                    *puVar5 = *puVar2;
                    puVar5[1] = uVar10;
                    lVar39 = lVar47 + 0x20;
                    lVar47 = lVar47 + 0x20;
                  } while ((uint64_t *)((int64_t)puVar23 + lVar39) < puVar29);
                }
                puVar18 = puVar4;
              }
              if (puVar18 < puVar25) {
                uVar31 = (int64_t)puVar25 - (int64_t)puVar18;
                puVar23 = puVar29;
                if ((3 < uVar31) && (0x1f < (uint64_t)((int64_t)puVar29 - (int64_t)puVar18))) {
                  if (uVar31 < 0x20) {
                    uVar40 = 0;
                  }
                  else {
                    uVar40 = uVar31 & 0xffffffffffffffe0;
                    uVar43 = 0x20;
                    while( true ) {
                      puVar2 = (uint64_t *)((int64_t)puVar18 + (uVar43 - 0x20));
                      uVar10 = puVar2[1];
                      puVar5 = (uint64_t *)((int64_t)puVar18 + (uVar43 - 0x10));
                      uVar11 = *puVar5;
                      uVar12 = puVar5[1];
                      puVar5 = (uint64_t *)((int64_t)puVar29 + (uVar43 - 0x20));
                      *puVar5 = *puVar2;
                      puVar5[1] = uVar10;
                      puVar2 = (uint64_t *)((int64_t)puVar29 + (uVar43 - 0x10));
                      *puVar2 = uVar11;
                      puVar2[1] = uVar12;
                      if (uVar40 == uVar43) break;
                      uVar43 = uVar43 + 0x20;
                    }
                    if (uVar31 == uVar40) goto LAB_7fffa562370d;
                    if ((uVar31 & 0x1c) == 0) {
                      puVar18 = (uint64_t *)((int64_t)puVar18 + uVar40);
                      puVar23 = (uint64_t *)((int64_t)puVar29 + uVar40);
                      goto LAB_7fffa5623613;
                    }
                  }
                  uVar43 = uVar31 & 0xfffffffffffffffc;
                  puVar23 = (uint64_t *)((int64_t)puVar29 + uVar43);
                  for (; *(uint32_t *)((int64_t)puVar29 + uVar40) =
                              *(uint32_t *)((int64_t)puVar18 + uVar40), uVar43 - 4 != uVar40;
                      uVar40 = uVar40 + 4) {
                  }
                  if (uVar31 == uVar43) goto LAB_7fffa562370d;
                  puVar18 = (uint64_t *)((int64_t)puVar18 + uVar43);
                }
LAB_7fffa5623613:
                uVar15 = (int)puVar25 - (int)puVar18 & 7;
                uVar31 = (uint64_t)uVar15;
                puVar34 = puVar23;
                puVar29 = puVar18;
                if (uVar15 == 0) {
                  puVar24 = puVar18;
                }
                else {
                  do {
                    puVar24 = (uint64_t *)((int64_t)puVar29 + 1);
                    puVar23 = (uint64_t *)((int64_t)puVar34 + 1);
                    uVar31 = uVar31 - 1;
                    *(char *)puVar34 = (char)*puVar29;
                    puVar34 = puVar23;
                    puVar29 = puVar24;
                  } while (uVar31 != 0);
                }
                if ((uint64_t)((int64_t)puVar18 - (int64_t)puVar25) < 0xfffffffffffffff9) {
                  while( true ) {
                    *(char *)puVar23 = (char)*puVar24;
                    *(uint8_t *)((int64_t)puVar23 + 1) = *(uint8_t *)((int64_t)puVar24 + 1);
                    *(uint8_t *)((int64_t)puVar23 + 2) = *(uint8_t *)((int64_t)puVar24 + 2);
                    *(uint8_t *)((int64_t)puVar23 + 3) = *(uint8_t *)((int64_t)puVar24 + 3);
                    *(uint8_t *)((int64_t)puVar23 + 4) = *(uint8_t *)((int64_t)puVar24 + 4);
                    *(uint8_t *)((int64_t)puVar23 + 5) = *(uint8_t *)((int64_t)puVar24 + 5);
                    *(uint8_t *)((int64_t)puVar23 + 6) = *(uint8_t *)((int64_t)puVar24 + 6);
                    *(uint8_t *)((int64_t)puVar23 + 7) = *(uint8_t *)((int64_t)puVar24 + 7);
                    if (puVar24 + 1 == puVar25) break;
                    puVar23 = puVar23 + 1;
                    puVar24 = puVar24 + 1;
                  }
                }
              }
LAB_7fffa562370d:
              lVar47 = param_2[1];
              param_2[3] = param_2[3] + uVar38;
              if (0xffff < uVar38) {
                *(uint32_t *)(param_2 + 9) = 1;
                *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
              }
            }
            else {
              uVar31 = puVar18[1];
              *puVar23 = *puVar18;
              puVar23[1] = uVar31;
              if (0x10 < uVar38) {
                uVar31 = puVar18[3];
                lVar47 = param_2[3];
                *(uint64_t *)(lVar47 + 0x10) = puVar18[2];
                *(uint64_t *)(lVar47 + 0x18) = uVar31;
                if (0x20 < (int64_t)uVar38) {
                  lVar39 = 0;
                  do {
                    puVar5 = (uint64_t *)((int64_t)puVar18 + lVar39 + 0x20);
                    uVar10 = puVar5[1];
                    puVar2 = (uint64_t *)(lVar47 + 0x20 + lVar39);
                    *puVar2 = *puVar5;
                    puVar2[1] = uVar10;
                    puVar2 = (uint64_t *)((int64_t)puVar18 + lVar39 + 0x30);
                    uVar10 = puVar2[1];
                    puVar5 = (uint64_t *)(lVar47 + 0x30 + lVar39);
                    *puVar5 = *puVar2;
                    puVar5[1] = uVar10;
                    lVar22 = lVar47 + 0x20 + lVar39;
                    lVar39 = lVar39 + 0x20;
                  } while (lVar22 + 0x20U < lVar47 + uVar38);
                }
                goto LAB_7fffa562370d;
              }
              lVar47 = param_2[1];
              param_2[3] = param_2[3] + uVar38;
            }
            uVar31 = (uVar44 + uVar42) - 3;
            *(short *)(lVar47 + 4) = (short)uVar38;
            *(int *)param_2[1] = iVar32;
            if (0xffff < uVar31) {
              *(uint32_t *)(param_2 + 9) = 2;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
            }
            puVar25 = (uint64_t *)((int64_t)puVar25 + uVar44 + uVar42);
            *(short *)(param_2[1] + 6) = (short)uVar31;
            param_2[1] = param_2[1] + 8;
            if (puVar25 <= puVar17) {
              *(uint32_t *)(lVar8 + ((uint64_t)
                                 (*(int64_t *)(lVar9 + 2 + (uint64_t)uVar36) * -0x30e4432340650000
                                 ) >> (bVar19 & 0x3f)) * 4) = uVar36 + 2;
              *(int *)(lVar8 + ((uint64_t)
                                (*(int64_t *)((int64_t)puVar25 + -2) * -0x30e4432340650000) >>
                               (bVar19 & 0x3f)) * 4) = ((int)puVar25 + -2) - iVar33;
              if ((uint32_t)uStack_68 == 0) {
                uStack_68._0_4_ = 0;
              }
              else {
                do {
                  uVar15 = (uint32_t)uStack_d0;
                  if ((int)*puVar25 != *(int *)((int64_t)puVar25 - (uint64_t)(uint32_t)uStack_68))
                  break;
                  lVar47 = -(uint64_t)(uint32_t)uStack_68;
                  puVar23 = (uint64_t *)((int64_t)puVar25 + 4);
                  puVar18 = (uint64_t *)((int64_t)puVar25 + lVar47 + 4);
                  puVar29 = puVar23;
                  if (puVar23 < puVar27) {
                    if (*puVar18 == *puVar23) {
                      lVar39 = 0xc;
LAB_7fffa56238e0:
                      puVar29 = (uint64_t *)((int64_t)puVar25 + lVar39);
                      if (puVar29 < puVar27) {
                        uVar42 = *(uint64_t *)((int64_t)puVar25 + lVar39 + lVar47);
                        if (uVar42 == *puVar29) goto code_r0x7fffa56238f9;
                        uVar20 = 0;
                        for (uVar42 = uVar42 ^ *puVar29; (uVar42 & 1) == 0;
                            uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                          uVar20 = uVar20 + 1;
                        }
                        uVar42 = ((uint64_t)(uVar20 >> 3) + lVar39) - 4;
                        goto LAB_7fffa562394d;
                      }
                      puVar18 = (uint64_t *)(lVar47 + (int64_t)puVar29);
                      goto joined_r0x7fffa562390d;
                    }
                    uVar20 = 0;
                    for (uVar42 = *puVar18 ^ *puVar23; (uVar42 & 1) == 0;
                        uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                      uVar20 = uVar20 + 1;
                    }
                    uVar42 = (uint64_t)(uVar20 >> 3);
                  }
                  else {
joined_r0x7fffa562390d:
                    if ((puVar29 < (uint64_t *)((int64_t)puVar1 - 3U)) &&
                       ((int)*puVar18 == (int)*puVar29)) {
                      puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
                      puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
                    }
                    if ((puVar29 < (uint64_t *)((int64_t)puVar1 - 1U)) &&
                       ((short)*puVar18 == (short)*puVar29)) {
                      puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
                      puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
                    }
                    if (puVar29 < puVar1) {
                      puVar29 = (uint64_t *)
                                ((int64_t)puVar29 + (uint64_t)((char)*puVar18 == (char)*puVar29));
                    }
                    uVar42 = (int64_t)puVar29 - (int64_t)puVar23;
                  }
LAB_7fffa562394d:
                  *(int *)(lVar8 + (*puVar25 * -0x30e4432340650000 >> (bVar19 & 0x3f)) * 4) =
                       (int)puVar25 - iVar33;
                  if (puVar25 <= puVar4) {
                    uVar44 = puVar25[1];
                    puVar23 = (uint64_t *)param_2[3];
                    *puVar23 = *puVar25;
                    puVar23[1] = uVar44;
                  }
                  *(uint16_t *)(param_2[1] + 4) = 0;
                  *(uint32_t *)param_2[1] = 1;
                  if (0xffff < uVar42 + 1) {
                    *(uint32_t *)(param_2 + 9) = 2;
                    *(int *)((int64_t)param_2 + 0x4c) =
                         (int)((uint64_t)(param_2[1] - *param_2) >> 3);
                  }
                  *(short *)(param_2[1] + 6) = (short)(uVar42 + 1);
                  param_2[1] = param_2[1] + 8;
                  puVar25 = (uint64_t *)((int64_t)puVar25 + uVar42 + 4);
                  uStack_d0 = (uint64_t)(uint32_t)uStack_68;
                  uStack_68._0_4_ = uVar15;
                } while (puVar25 <= puVar17);
              }
            }
            puVar23 = (uint64_t *)((int64_t)puVar25 + uVar26);
            puVar29 = (uint64_t *)((int64_t)puVar25 + uVar26 + 1);
            uVar15 = (uint32_t)uStack_d0;
            puVar18 = puVar25;
          } while (puVar29 < puVar17);
        }
        else {
          puVar25 = param_4;
        }
LAB_7fffa56246b7:
        if (uVar16 <= uVar49) {
          uVar16 = 0;
        }
        uVar14 = uVar16;
        if (uVar15 != 0) {
          uVar14 = uVar41;
        }
        uVar20 = 0;
        if (uVar49 < uVar41) {
          uVar16 = uVar14;
          uVar20 = uVar41;
        }
        if (uVar15 != 0) {
          uVar20 = uVar15;
        }
        *param_3 = uVar20;
        if ((uint32_t)uStack_68 != 0) {
          uVar16 = (uint32_t)uStack_68;
        }
        param_3[1] = uVar16;
        goto LAB_7fffa562456e;
      }
      if (iVar32 == 7) {
        if (puVar29 < puVar17) {
          puVar4 = puVar1 + -4;
          puVar27 = (uint64_t *)((int64_t)puVar1 - 7);
          bVar19 = 0x40 - (char)*(uint32_t *)(param_1 + 0x108);
          puVar18 = param_4;
          do {
            uVar15 = (uint32_t)uStack_d0;
            puVar34 = puVar25 + 0x10;
            lVar47 = -uStack_d0;
            uVar38 = *puVar25 * -0x30e44323405a9d00 >> (bVar19 & 0x3f);
            uVar42 = *(uint64_t *)((int64_t)puVar25 + 1);
            uVar20 = *(uint32_t *)(lVar8 + uVar38 * 4);
            uVar44 = uVar26;
            puVar24 = (uint64_t *)((int64_t)puVar25 + 1);
            while( true ) {
              puVar28 = puVar29;
              uVar36 = (int)puVar25 - iVar33;
              uVar42 = uVar42 * -0x30e44323405a9d00 >> (bVar19 & 0x3f);
              iVar32 = *(int *)((int64_t)puVar23 + lVar47);
              *(uint32_t *)(lVar8 + uVar38 * 4) = uVar36;
              if (((int)*puVar23 == iVar32) && (uVar15 != 0)) {
                uVar44 = (uint64_t)
                         (*(char *)((int64_t)puVar23 - 1) ==
                         *(char *)((int64_t)puVar23 + lVar47 + -1));
                lVar39 = uVar44 + 4;
                *(int *)(lVar8 + uVar42 * 4) = (int)puVar24 - iVar33;
                puVar25 = (uint64_t *)((int64_t)puVar23 - uVar44);
                puVar23 = (uint64_t *)((int64_t)puVar23 + (lVar47 - uVar44));
                iVar32 = 1;
                uStack_68 = (uint64_t)(uint32_t)uStack_68;
                uVar42 = uStack_d0;
                goto LAB_7fffa562054a;
              }
              if ((uVar14 <= uVar20) &&
                 (uVar31 = (uint64_t)uVar20, (int)*puVar25 == *(int *)(lVar9 + uVar31))) {
                puVar23 = puVar24;
                goto LAB_7fffa56204a1;
              }
              uVar20 = *(uint32_t *)(lVar8 + uVar42 * 4);
              uVar31 = (uint64_t)uVar20;
              uVar38 = *puVar23 * -0x30e44323405a9d00 >> (bVar19 & 0x3f);
              uVar36 = (int)puVar24 - iVar33;
              *(uint32_t *)(lVar8 + uVar42 * 4) = uVar36;
              if ((uVar14 <= uVar20) && ((int)*puVar24 == *(int *)(lVar9 + uVar31))) break;
              puVar24 = (uint64_t *)(uVar44 + (int64_t)puVar23);
              uVar42 = *puVar28;
              uVar20 = *(uint32_t *)(lVar8 + uVar38 * 4);
              if (puVar24 < puVar34) {
                uVar31 = uVar44;
              }
              else {
                puVar34 = puVar34 + 0x10;
                uVar31 = uVar44 + 1;
              }
              puVar29 = (uint64_t *)(uVar44 + (int64_t)puVar28);
              uVar44 = uVar31;
              puVar25 = puVar23;
              puVar23 = puVar24;
              puVar24 = puVar28;
              if (puVar17 <= puVar29) {
                puVar25 = puVar18;
                goto LAB_7fffa56245c4;
              }
            }
            uVar42 = uVar38;
            puVar25 = puVar24;
            if (uVar44 < 5) {
LAB_7fffa56204a1:
              *(int *)(lVar8 + uVar42 * 4) = (int)puVar23 - iVar33;
            }
            puVar23 = (uint64_t *)(uVar31 + lVar9);
            uVar15 = (int)puVar25 - (int)puVar23;
            uVar42 = (uint64_t)uVar15;
            iVar32 = uVar15 + 3;
            lVar39 = 4;
            uStack_68 = uStack_d0;
            if (uVar14 < uVar20) {
              if (puVar18 < puVar25) {
                for (lVar47 = 0;
                    *(char *)((int64_t)puVar25 + lVar47 + -1) ==
                    *(char *)((int64_t)puVar23 + lVar47 + -1); lVar47 = lVar47 + -1) {
                  puVar29 = (uint64_t *)((int64_t)puVar25 + lVar47 + -1);
                  puVar34 = (uint64_t *)((int64_t)puVar23 + lVar47 + -1);
                  if ((puVar29 <= puVar18) || (puVar34 <= puVar21)) {
                    lVar39 = 5 - lVar47;
                    puVar25 = puVar29;
                    puVar23 = puVar34;
                    goto LAB_7fffa562054a;
                  }
                }
                puVar25 = (uint64_t *)((int64_t)puVar25 + lVar47);
                lVar39 = 4 - lVar47;
                puVar23 = (uint64_t *)((int64_t)puVar23 + lVar47);
              }
            }
            else {
            }
LAB_7fffa562054a:
            uStack_d0 = uVar42;
            puVar29 = (uint64_t *)((int64_t)puVar25 + lVar39);
            puVar23 = (uint64_t *)((int64_t)puVar23 + lVar39);
            puVar34 = puVar29;
            if (puVar29 < puVar27) {
              if (*puVar23 == *puVar29) {
                lVar47 = 8;
LAB_7fffa5620590:
                puVar34 = (uint64_t *)((int64_t)puVar29 + lVar47);
                if (puVar34 < puVar27) {
                  if (*(uint64_t *)((int64_t)puVar23 + lVar47) == *puVar34)
                  goto code_r0x7fffa56205ae;
                  uVar15 = 0;
                  for (uVar42 = *(uint64_t *)((int64_t)puVar23 + lVar47) ^ *puVar34;
                      (uVar42 & 1) == 0; uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  uVar42 = (uint64_t)(uVar15 >> 3) + lVar47;
                  goto LAB_7fffa5620667;
                }
                puVar23 = (uint64_t *)((int64_t)puVar23 + lVar47);
                goto joined_r0x7fffa56205d5;
              }
              uVar15 = 0;
              for (uVar42 = *puVar29 ^ *puVar23; (uVar42 & 1) == 0;
                  uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                uVar15 = uVar15 + 1;
              }
              uVar42 = (uint64_t)(uVar15 >> 3);
            }
            else {
joined_r0x7fffa56205d5:
              if ((puVar34 < (uint64_t *)((int64_t)puVar1 - 3U)) &&
                 ((int)*puVar23 == (int)*puVar34)) {
                puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
                puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
              }
              if ((puVar34 < (uint64_t *)((int64_t)puVar1 - 1U)) &&
                 ((short)*puVar23 == (short)*puVar34)) {
                puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
                puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
              }
              if (puVar34 < puVar1) {
                puVar34 = (uint64_t *)
                          ((int64_t)puVar34 + (uint64_t)((char)*puVar23 == (char)*puVar34));
              }
              uVar42 = (int64_t)puVar34 - (int64_t)puVar29;
            }
LAB_7fffa5620667:
            uVar44 = (int64_t)puVar25 - (int64_t)puVar18;
            puVar23 = (uint64_t *)param_2[3];
            if (puVar4 < puVar25) {
              puVar29 = puVar23;
              if (puVar18 <= puVar4) {
                puVar29 = (uint64_t *)((int64_t)puVar23 + ((int64_t)puVar4 - (int64_t)puVar18));
                uVar38 = puVar18[1];
                *puVar23 = *puVar18;
                puVar23[1] = uVar38;
                if (0x10 < (int64_t)puVar4 - (int64_t)puVar18) {
                  lVar47 = 0x10;
                  do {
                    uVar10 = ((uint64_t *)((int64_t)puVar18 + lVar47))[1];
                    *(uint64_t *)((int64_t)puVar23 + lVar47) =
                         *(uint64_t *)((int64_t)puVar18 + lVar47);
                    ((uint64_t *)((int64_t)puVar23 + lVar47))[1] = uVar10;
                    puVar2 = (uint64_t *)((int64_t)puVar18 + lVar47 + 0x10);
                    uVar10 = puVar2[1];
                    puVar5 = (uint64_t *)((int64_t)puVar23 + lVar47 + 0x10);
                    *puVar5 = *puVar2;
                    puVar5[1] = uVar10;
                    lVar22 = lVar47 + 0x20;
                    lVar47 = lVar47 + 0x20;
                  } while ((uint64_t *)((int64_t)puVar23 + lVar22) < puVar29);
                }
                puVar18 = puVar4;
              }
              if (puVar18 < puVar25) {
                uVar38 = (int64_t)puVar25 - (int64_t)puVar18;
                if ((3 < uVar38) && (0x1f < (uint64_t)((int64_t)puVar29 - (int64_t)puVar18))) {
                  if (uVar38 < 0x20) {
                    uVar31 = 0;
                  }
                  else {
                    uVar31 = uVar38 & 0xffffffffffffffe0;
                    uVar40 = 0;
                    do {
                      uVar10 = ((uint64_t *)((int64_t)puVar18 + uVar40))[1];
                      puVar2 = (uint64_t *)((int64_t)puVar18 + uVar40 + 0x10);
                      uVar11 = *puVar2;
                      uVar12 = puVar2[1];
                      *(uint64_t *)((int64_t)puVar29 + uVar40) =
                           *(uint64_t *)((int64_t)puVar18 + uVar40);
                      ((uint64_t *)((int64_t)puVar29 + uVar40))[1] = uVar10;
                      puVar2 = (uint64_t *)((int64_t)puVar29 + uVar40 + 0x10);
                      *puVar2 = uVar11;
                      puVar2[1] = uVar12;
                      uVar40 = uVar40 + 0x20;
                    } while (uVar31 != uVar40);
                    if (uVar38 == uVar31) goto LAB_7fffa5620977;
                    if ((uVar38 & 0x1c) == 0) {
                      puVar18 = (uint64_t *)((int64_t)puVar18 + uVar31);
                      puVar29 = (uint64_t *)((int64_t)puVar29 + uVar31);
                      goto LAB_7fffa56208c1;
                    }
                  }
                  uVar40 = uVar38 & 0xfffffffffffffffc;
                  do {
                    *(uint32_t *)((int64_t)puVar29 + uVar31) =
                         *(uint32_t *)((int64_t)puVar18 + uVar31);
                    uVar31 = uVar31 + 4;
                  } while (uVar40 != uVar31);
                  if (uVar38 == uVar40) goto LAB_7fffa5620977;
                  puVar18 = (uint64_t *)((int64_t)puVar18 + uVar40);
                  puVar29 = (uint64_t *)((int64_t)puVar29 + uVar40);
                }
LAB_7fffa56208c1:
                uVar15 = (int)puVar25 - (int)puVar18 & 7;
                uVar38 = (uint64_t)uVar15;
                puVar34 = puVar29;
                puVar23 = puVar18;
                if (uVar15 == 0) {
                  puVar24 = puVar18;
                }
                else {
                  do {
                    uVar38 = uVar38 - 1;
                    puVar29 = (uint64_t *)((int64_t)puVar34 + 1);
                    *(char *)puVar34 = (char)*puVar23;
                    puVar24 = (uint64_t *)((int64_t)puVar23 + 1);
                    puVar34 = puVar29;
                    puVar23 = (uint64_t *)((int64_t)puVar23 + 1);
                  } while (uVar38 != 0);
                }
                if ((uint64_t)((int64_t)puVar18 - (int64_t)puVar25) < 0xfffffffffffffff9) {
                  lVar47 = 0;
                  do {
                    *(uint8_t *)((int64_t)puVar29 + lVar47) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47);
                    *(uint8_t *)((int64_t)puVar29 + lVar47 + 1) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 1);
                    *(uint8_t *)((int64_t)puVar29 + lVar47 + 2) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 2);
                    *(uint8_t *)((int64_t)puVar29 + lVar47 + 3) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 3);
                    *(uint8_t *)((int64_t)puVar29 + lVar47 + 4) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 4);
                    *(uint8_t *)((int64_t)puVar29 + lVar47 + 5) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 5);
                    *(uint8_t *)((int64_t)puVar29 + lVar47 + 6) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 6);
                    *(uint8_t *)((int64_t)puVar29 + lVar47 + 7) =
                         *(uint8_t *)((int64_t)puVar24 + lVar47 + 7);
                    lVar22 = lVar47 + 8;
                    lVar47 = lVar47 + 8;
                  } while ((uint64_t *)((int64_t)puVar24 + lVar22) != puVar25);
                }
              }
LAB_7fffa5620977:
              lVar47 = param_2[1];
              param_2[3] = param_2[3] + uVar44;
              if (0xffff < uVar44) {
                *(uint32_t *)(param_2 + 9) = 1;
                *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
              }
            }
            else {
              uVar38 = puVar18[1];
              *puVar23 = *puVar18;
              puVar23[1] = uVar38;
              if (0x10 < uVar44) {
                uVar38 = puVar18[3];
                lVar47 = param_2[3];
                *(uint64_t *)(lVar47 + 0x10) = puVar18[2];
                *(uint64_t *)(lVar47 + 0x18) = uVar38;
                if (0x20 < (int64_t)uVar44) {
                  lVar22 = 0;
                  do {
                    puVar5 = (uint64_t *)((int64_t)puVar18 + lVar22 + 0x20);
                    uVar10 = puVar5[1];
                    puVar2 = (uint64_t *)(lVar47 + 0x20 + lVar22);
                    *puVar2 = *puVar5;
                    puVar2[1] = uVar10;
                    puVar2 = (uint64_t *)((int64_t)puVar18 + lVar22 + 0x30);
                    uVar10 = puVar2[1];
                    puVar5 = (uint64_t *)(lVar47 + 0x30 + lVar22);
                    *puVar5 = *puVar2;
                    puVar5[1] = uVar10;
                    lVar3 = lVar47 + 0x20 + lVar22;
                    lVar22 = lVar22 + 0x20;
                  } while (lVar3 + 0x20U < lVar47 + uVar44);
                }
                goto LAB_7fffa5620977;
              }
              lVar47 = param_2[1];
              param_2[3] = param_2[3] + uVar44;
            }
            uVar38 = (lVar39 + uVar42) - 3;
            *(short *)(lVar47 + 4) = (short)uVar44;
            *(int *)param_2[1] = iVar32;
            if (0xffff < uVar38) {
              *(uint32_t *)(param_2 + 9) = 2;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
            }
            puVar25 = (uint64_t *)((int64_t)puVar25 + lVar39 + uVar42);
            *(short *)(param_2[1] + 6) = (short)uVar38;
            param_2[1] = param_2[1] + 8;
            if (puVar25 <= puVar17) {
              *(uint32_t *)(lVar8 + ((uint64_t)
                                 (*(int64_t *)(lVar9 + 2 + (uint64_t)uVar36) * -0x30e44323405a9d00
                                 ) >> (bVar19 & 0x3f)) * 4) = uVar36 + 2;
              *(int *)(lVar8 + ((uint64_t)
                                (*(int64_t *)((int64_t)puVar25 + -2) * -0x30e44323405a9d00) >>
                               (bVar19 & 0x3f)) * 4) = ((int)puVar25 + -2) - iVar33;
              if ((uint32_t)uStack_68 == 0) {
                uStack_68._0_4_ = 0;
              }
              else {
                do {
                  uVar15 = (uint32_t)uStack_d0;
                  if ((int)*puVar25 != *(int *)((int64_t)puVar25 - (uint64_t)(uint32_t)uStack_68))
                  break;
                  lVar47 = -(uint64_t)(uint32_t)uStack_68;
                  puVar23 = (uint64_t *)((int64_t)puVar25 + 4);
                  puVar18 = (uint64_t *)((int64_t)puVar25 + lVar47 + 4);
                  puVar29 = puVar23;
                  if (puVar23 < puVar27) {
                    if (*puVar18 == *puVar23) {
                      lVar39 = 0xc;
LAB_7fffa5620b30:
                      puVar29 = (uint64_t *)((int64_t)puVar25 + lVar39);
                      if (puVar29 < puVar27) {
                        uVar42 = *(uint64_t *)((int64_t)puVar25 + lVar39 + lVar47);
                        if (uVar42 == *puVar29) goto code_r0x7fffa5620b4e;
                        uVar20 = 0;
                        for (uVar42 = *puVar29 ^ uVar42; (uVar42 & 1) == 0;
                            uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                          uVar20 = uVar20 + 1;
                        }
                        uVar42 = ((uint64_t)(uVar20 >> 3) + lVar39) - 4;
                        goto LAB_7fffa5620bb2;
                      }
                      puVar18 = (uint64_t *)(lVar47 + (int64_t)puVar29);
                      goto joined_r0x7fffa5620b18;
                    }
                    uVar20 = 0;
                    for (uVar42 = *puVar23 ^ *puVar18; (uVar42 & 1) == 0;
                        uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                      uVar20 = uVar20 + 1;
                    }
                    uVar42 = (uint64_t)(uVar20 >> 3);
                  }
                  else {
joined_r0x7fffa5620b18:
                    if ((puVar29 < (uint64_t *)((int64_t)puVar1 - 3U)) &&
                       ((int)*puVar18 == (int)*puVar29)) {
                      puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
                      puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
                    }
                    if ((puVar29 < (uint64_t *)((int64_t)puVar1 - 1U)) &&
                       ((short)*puVar18 == (short)*puVar29)) {
                      puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
                      puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
                    }
                    if (puVar29 < puVar1) {
                      puVar29 = (uint64_t *)
                                ((int64_t)puVar29 + (uint64_t)((char)*puVar18 == (char)*puVar29));
                    }
                    uVar42 = (int64_t)puVar29 - (int64_t)puVar23;
                  }
LAB_7fffa5620bb2:
                  *(int *)(lVar8 + (*puVar25 * -0x30e44323405a9d00 >> (bVar19 & 0x3f)) * 4) =
                       (int)puVar25 - iVar33;
                  if (puVar25 <= puVar4) {
                    puVar23 = (uint64_t *)param_2[3];
                    uVar44 = puVar25[1];
                    *puVar23 = *puVar25;
                    puVar23[1] = uVar44;
                  }
                  *(uint16_t *)(param_2[1] + 4) = 0;
                  *(uint32_t *)param_2[1] = 1;
                  if (0xffff < uVar42 + 1) {
                    *(int *)((int64_t)param_2 + 0x4c) =
                         (int)((uint64_t)(param_2[1] - *param_2) >> 3);
                    *(uint32_t *)(param_2 + 9) = 2;
                  }
                  *(short *)(param_2[1] + 6) = (short)(uVar42 + 1);
                  param_2[1] = param_2[1] + 8;
                  puVar25 = (uint64_t *)((int64_t)puVar25 + uVar42 + 4);
                  uStack_d0 = (uint64_t)(uint32_t)uStack_68;
                  uStack_68._0_4_ = uVar15;
                } while (puVar25 <= puVar17);
              }
            }
            uVar15 = (uint32_t)uStack_d0;
            puVar23 = (uint64_t *)((int64_t)puVar25 + uVar26);
            puVar29 = (uint64_t *)((int64_t)puVar25 + uVar26 + 1);
            puVar18 = puVar25;
          } while (puVar29 < puVar17);
        }
        else {
          puVar25 = param_4;
        }
LAB_7fffa56245c4:
        uVar14 = 0;
        if (uVar49 < uVar41) {
          uVar14 = uVar41;
        }
        uVar20 = 0;
        if (uVar49 < uVar16) {
          uVar20 = uVar16;
        }
        uVar16 = uVar20;
        if (uVar15 != 0) {
          uVar16 = uVar41;
          uVar14 = uVar15;
        }
        *param_3 = uVar14;
        if (uVar41 <= uVar49) {
          uVar16 = uVar20;
        }
        if ((uint32_t)uStack_68 != 0) {
          uVar16 = (uint32_t)uStack_68;
        }
        param_3[1] = uVar16;
        goto LAB_7fffa562456e;
      }
    }
    uVar20 = (uint32_t)uStack_68;
    if (puVar29 < puVar17) {
      bVar19 = 0x20 - (char)*(uint32_t *)(param_1 + 0x108);
      puVar4 = (uint64_t *)((int64_t)puVar1 - 7);
      puVar27 = puVar1 + -4;
      puVar18 = param_4;
      do {
        uVar15 = (uint32_t)uStack_d0;
        iVar32 = *(int *)((int64_t)puVar25 + 1);
        uVar44 = (uint64_t)((uint32_t)((int)*puVar25 * -0x61c8864f) >> (bVar19 & 0x1f));
        puVar34 = puVar25 + 0x10;
        uVar36 = *(uint32_t *)(lVar8 + uVar44 * 4);
        lVar47 = -uStack_d0;
        uVar42 = uVar26;
        puVar24 = (uint64_t *)((int64_t)puVar25 + 1);
        while( true ) {
          puVar28 = puVar29;
          iVar13 = *(int *)((int64_t)puVar23 + lVar47);
          uVar38 = (uint64_t)((uint32_t)(iVar32 * -0x61c8864f) >> (bVar19 & 0x1f));
          uVar35 = (int)puVar25 - iVar33;
          *(uint32_t *)(lVar8 + uVar44 * 4) = uVar35;
          if (((int)*puVar23 == iVar13) && (uVar15 != 0)) {
            uVar42 = (uint64_t)
                     (*(char *)((int64_t)puVar23 - 1) == *(char *)((int64_t)puVar23 + lVar47 + -1)
                     );
            puVar29 = (uint64_t *)((int64_t)puVar23 - uVar42);
            puVar23 = (uint64_t *)((int64_t)puVar23 + (lVar47 - uVar42));
            uVar42 = uVar42 | 4;
            *(int *)(lVar8 + uVar38 * 4) = (int)puVar24 - iVar33;
            iVar32 = 1;
            uStack_68 = (uint64_t)uVar20;
            goto LAB_7fffa5621b90;
          }
          if ((uVar14 <= uVar36) &&
             (uVar31 = (uint64_t)uVar36, (int)*puVar25 == *(int *)(lVar9 + uVar31))) {
            puVar23 = puVar24;
            goto LAB_7fffa5621a54;
          }
          uVar44 = (uint64_t)((uint32_t)((int)*puVar23 * -0x61c8864f) >> (bVar19 & 0x1f));
          uVar35 = (int)puVar24 - iVar33;
          uVar36 = *(uint32_t *)(lVar8 + uVar38 * 4);
          uVar31 = (uint64_t)uVar36;
          *(uint32_t *)(lVar8 + uVar38 * 4) = uVar35;
          if ((uVar14 <= uVar36) && ((int)*puVar24 == *(int *)(lVar9 + uVar31))) break;
          puVar24 = (uint64_t *)(uVar42 + (int64_t)puVar23);
          uVar36 = *(uint32_t *)(lVar8 + uVar44 * 4);
          if (puVar24 < puVar34) {
            uVar38 = uVar42;
          }
          else {
            puVar34 = puVar34 + 0x10;
            uVar38 = uVar42 + 1;
          }
          puVar29 = (uint64_t *)(uVar42 + (int64_t)puVar28);
          iVar32 = (int)*puVar28;
          uVar42 = uVar38;
          puVar25 = puVar23;
          puVar23 = puVar24;
          puVar24 = puVar28;
          if (puVar17 <= puVar29) {
            puVar25 = puVar18;
            goto LAB_7fffa5622ec7;
          }
        }
        uVar38 = uVar44;
        puVar25 = puVar24;
        if (uVar42 < 5) {
LAB_7fffa5621a54:
          *(int *)(lVar8 + uVar38 * 4) = (int)puVar23 - iVar33;
        }
        puVar23 = (uint64_t *)(uVar31 + lVar9);
        uVar15 = (int)puVar25 - (int)puVar23;
        iVar32 = uVar15 + 3;
        uVar42 = 4;
        puVar29 = puVar25;
        uStack_68 = uStack_d0;
        if ((puVar18 < puVar25) && (uVar14 < uVar36)) {
          for (lVar47 = 0;
              *(char *)((int64_t)puVar25 + lVar47 + -1) ==
              *(char *)((int64_t)puVar23 + lVar47 + -1); lVar47 = lVar47 + -1) {
            puVar34 = (uint64_t *)((int64_t)puVar23 + lVar47 + -1);
            puVar29 = (uint64_t *)((int64_t)puVar25 + lVar47 + -1);
            if ((puVar29 <= puVar18) || (puVar34 <= puVar21)) {
              uVar42 = 5 - lVar47;
              puVar23 = puVar34;
              goto LAB_7fffa5621b90;
            }
          }
          puVar29 = (uint64_t *)((int64_t)puVar25 + lVar47);
          uVar42 = 4 - lVar47;
          puVar23 = (uint64_t *)((int64_t)puVar23 + lVar47);
        }
LAB_7fffa5621b90:
        puVar25 = (uint64_t *)((int64_t)puVar29 + uVar42);
        puVar23 = (uint64_t *)((int64_t)puVar23 + uVar42);
        puVar34 = puVar25;
        if (puVar25 < puVar4) {
          if (*puVar23 == *puVar25) {
            lVar47 = 8;
code_r0x7fffa5621bf1:
            puVar34 = (uint64_t *)((int64_t)puVar25 + lVar47);
            if (puVar34 < puVar4) {
              if (*(uint64_t *)((int64_t)puVar23 + lVar47) == *puVar34) goto code_r0x7fffa5621c1a;
              uVar20 = 0;
              for (uVar44 = *puVar34 ^ *(uint64_t *)((int64_t)puVar23 + lVar47); (uVar44 & 1) == 0
                  ; uVar44 = uVar44 >> 1 | 0x8000000000000000) {
                uVar20 = uVar20 + 1;
              }
              uVar44 = (uint64_t)(uVar20 >> 3) + lVar47;
              goto code_r0x7fffa5621caa;
            }
            puVar23 = (uint64_t *)((int64_t)puVar23 + lVar47);
            goto joined_r0x7fffa5621c3e;
          }
          uVar20 = 0;
          for (uVar44 = *puVar23 ^ *puVar25; (uVar44 & 1) == 0;
              uVar44 = uVar44 >> 1 | 0x8000000000000000) {
            uVar20 = uVar20 + 1;
          }
          uVar44 = (uint64_t)(uVar20 >> 3);
        }
        else {
joined_r0x7fffa5621c3e:
          if ((puVar34 < (uint64_t *)((int64_t)puVar1 - 3U)) && ((int)*puVar23 == (int)*puVar34))
          {
            puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
            puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
          }
          if ((puVar34 < (uint64_t *)((int64_t)puVar1 - 1U)) &&
             ((short)*puVar23 == (short)*puVar34)) {
            puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
            puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
          }
          if (puVar34 < puVar1) {
            puVar34 = (uint64_t *)
                      ((int64_t)puVar34 + (uint64_t)((char)*puVar23 == (char)*puVar34));
          }
          uVar44 = (int64_t)puVar34 - (int64_t)puVar25;
        }
code_r0x7fffa5621caa:
        uVar38 = (int64_t)puVar29 - (int64_t)puVar18;
        puVar25 = (uint64_t *)param_2[3];
        if (puVar27 < puVar29) {
          puVar23 = puVar25;
          if (puVar18 <= puVar27) {
            uVar31 = puVar18[1];
            *puVar25 = *puVar18;
            puVar25[1] = uVar31;
            puVar23 = (uint64_t *)((int64_t)puVar25 + ((int64_t)puVar27 - (int64_t)puVar18));
            if (0x10 < (int64_t)puVar27 - (int64_t)puVar18) {
              lVar47 = 0x10;
              do {
                uVar10 = ((uint64_t *)((int64_t)puVar18 + lVar47))[1];
                *(uint64_t *)((int64_t)puVar25 + lVar47) =
                     *(uint64_t *)((int64_t)puVar18 + lVar47);
                ((uint64_t *)((int64_t)puVar25 + lVar47))[1] = uVar10;
                puVar2 = (uint64_t *)((int64_t)puVar18 + lVar47 + 0x10);
                uVar10 = puVar2[1];
                puVar5 = (uint64_t *)((int64_t)puVar25 + lVar47 + 0x10);
                *puVar5 = *puVar2;
                puVar5[1] = uVar10;
                lVar39 = lVar47 + 0x20;
                lVar47 = lVar47 + 0x20;
              } while ((uint64_t *)((int64_t)puVar25 + lVar39) < puVar23);
            }
            puVar18 = puVar27;
          }
          if (puVar18 < puVar29) {
            uVar31 = (int64_t)puVar29 - (int64_t)puVar18;
            if (uVar31 < 4 || (uint64_t)((int64_t)puVar23 - (int64_t)puVar18) < 0x20) {
LAB_7fffa5621d70:
              puVar25 = puVar23;
            }
            else {
              if (uVar31 < 0x20) {
                uVar43 = 0;
              }
              else {
                uVar43 = uVar31 & 0xffffffffffffffe0;
                uVar40 = 0;
                do {
                  uVar10 = *(uint64_t *)((int64_t)puVar18 + uVar40);
                  uVar11 = ((uint64_t *)((int64_t)puVar18 + uVar40))[1];
                  puVar2 = (uint64_t *)((int64_t)puVar18 + uVar40 + 0x10);
                  uVar12 = puVar2[1];
                  puVar5 = (uint64_t *)((int64_t)puVar23 + uVar40 + 0x10);
                  *puVar5 = *puVar2;
                  puVar5[1] = uVar12;
                  *(uint64_t *)((int64_t)puVar23 + uVar40) = uVar10;
                  ((uint64_t *)((int64_t)puVar23 + uVar40))[1] = uVar11;
                  uVar40 = uVar40 + 0x20;
                } while (uVar43 != uVar40);
                if (uVar31 == uVar43) goto LAB_7fffa5621fe7;
                if ((uVar31 & 0x1c) == 0) {
                  puVar23 = (uint64_t *)((int64_t)puVar23 + uVar43);
                  puVar18 = (uint64_t *)((int64_t)puVar18 + uVar43);
                  goto LAB_7fffa5621d70;
                }
              }
              uVar40 = uVar31 & 0xfffffffffffffffc;
              puVar25 = (uint64_t *)((int64_t)puVar23 + uVar40);
              do {
                *(uint32_t *)((int64_t)puVar23 + uVar43) =
                     *(uint32_t *)((int64_t)puVar18 + uVar43);
                uVar43 = uVar43 + 4;
              } while (uVar40 != uVar43);
              if (uVar31 == uVar40) goto LAB_7fffa5621fe7;
              puVar18 = (uint64_t *)((int64_t)puVar18 + uVar40);
            }
            uVar20 = (int)puVar29 - (int)puVar18 & 7;
            uVar31 = (uint64_t)uVar20;
            puVar23 = puVar18;
            if (uVar20 != 0) {
              do {
                *(char *)puVar25 = (char)*puVar23;
                puVar25 = (uint64_t *)((int64_t)puVar25 + 1);
                puVar23 = (uint64_t *)((int64_t)puVar23 + 1);
                uVar31 = uVar31 - 1;
              } while (uVar31 != 0);
            }
            if ((uint64_t)((int64_t)puVar18 - (int64_t)puVar29) < 0xfffffffffffffff9) {
              lVar47 = 0;
              do {
                *(uint8_t *)((int64_t)puVar25 + lVar47) =
                     *(uint8_t *)((int64_t)puVar23 + lVar47);
                *(uint8_t *)((int64_t)puVar25 + lVar47 + 1) =
                     *(uint8_t *)((int64_t)puVar23 + lVar47 + 1);
                *(uint8_t *)((int64_t)puVar25 + lVar47 + 2) =
                     *(uint8_t *)((int64_t)puVar23 + lVar47 + 2);
                *(uint8_t *)((int64_t)puVar25 + lVar47 + 3) =
                     *(uint8_t *)((int64_t)puVar23 + lVar47 + 3);
                *(uint8_t *)((int64_t)puVar25 + lVar47 + 4) =
                     *(uint8_t *)((int64_t)puVar23 + lVar47 + 4);
                *(uint8_t *)((int64_t)puVar25 + lVar47 + 5) =
                     *(uint8_t *)((int64_t)puVar23 + lVar47 + 5);
                *(uint8_t *)((int64_t)puVar25 + lVar47 + 6) =
                     *(uint8_t *)((int64_t)puVar23 + lVar47 + 6);
                *(uint8_t *)((int64_t)puVar25 + lVar47 + 7) =
                     *(uint8_t *)((int64_t)puVar23 + lVar47 + 7);
                lVar39 = lVar47 + 8;
                lVar47 = lVar47 + 8;
              } while ((uint64_t *)((int64_t)puVar23 + lVar39) != puVar29);
            }
          }
LAB_7fffa5621fe7:
          param_2[3] = param_2[3] + uVar38;
          lVar47 = param_2[1];
          if (0xffff < uVar38) {
            *(uint32_t *)(param_2 + 9) = 1;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
          }
        }
        else {
          uVar31 = puVar18[1];
          *puVar25 = *puVar18;
          puVar25[1] = uVar31;
          if (0x10 < uVar38) {
            uVar31 = puVar18[3];
            lVar47 = param_2[3];
            *(uint64_t *)(lVar47 + 0x10) = puVar18[2];
            *(uint64_t *)(lVar47 + 0x18) = uVar31;
            if (0x20 < (int64_t)uVar38) {
              lVar39 = 0;
              do {
                puVar5 = (uint64_t *)((int64_t)puVar18 + lVar39 + 0x20);
                uVar10 = puVar5[1];
                puVar2 = (uint64_t *)(lVar47 + 0x20 + lVar39);
                *puVar2 = *puVar5;
                puVar2[1] = uVar10;
                puVar2 = (uint64_t *)((int64_t)puVar18 + lVar39 + 0x30);
                uVar10 = puVar2[1];
                puVar5 = (uint64_t *)(lVar47 + 0x30 + lVar39);
                *puVar5 = *puVar2;
                puVar5[1] = uVar10;
                lVar22 = lVar47 + 0x20 + lVar39;
                lVar39 = lVar39 + 0x20;
              } while (lVar22 + 0x20U < lVar47 + uVar38);
            }
            goto LAB_7fffa5621fe7;
          }
          lVar47 = param_2[1];
          param_2[3] = param_2[3] + uVar38;
        }
        *(short *)(lVar47 + 4) = (short)uVar38;
        uVar38 = (uVar44 + uVar42) - 3;
        *(int *)param_2[1] = iVar32;
        if (0xffff < uVar38) {
          *(uint32_t *)(param_2 + 9) = 2;
          *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
        }
        puVar25 = (uint64_t *)((int64_t)puVar29 + uVar44 + uVar42);
        *(short *)(param_2[1] + 6) = (short)uVar38;
        param_2[1] = param_2[1] + 8;
        if (puVar17 < puVar25) {
          uVar20 = (uint32_t)uStack_68;
        }
        else {
          *(uint32_t *)(lVar8 + (uint64_t)
                            ((uint32_t)(*(int *)(lVar9 + 2 + (uint64_t)uVar35) * -0x61c8864f) >>
                            (bVar19 & 0x1f)) * 4) = uVar35 + 2;
          *(int *)(lVar8 + (uint64_t)
                           ((uint32_t)(*(int *)((int64_t)puVar25 + -2) * -0x61c8864f) >>
                           (bVar19 & 0x1f)) * 4) = ((int)puVar25 + -2) - iVar33;
          if ((uint32_t)uStack_68 == 0) {
            uVar20 = 0;
          }
          else {
            do {
              uVar36 = uVar15;
              uVar20 = (uint32_t)uStack_68;
              if ((int)*puVar25 != *(int *)((int64_t)puVar25 - uStack_68)) {
                uVar15 = uVar36;
                break;
              }
              lVar47 = -uStack_68;
              puVar23 = (uint64_t *)((int64_t)puVar25 + 4);
              puVar29 = (uint64_t *)((int64_t)puVar25 + lVar47 + 4);
              puVar18 = puVar23;
              if (puVar23 < puVar4) {
                if (*puVar29 == *puVar23) {
                  lVar39 = 0;
                  do {
                    puVar29 = (uint64_t *)((int64_t)puVar25 + lVar39 + 0xc);
                    if (puVar4 <= puVar29) {
                      puVar29 = (uint64_t *)((int64_t)puVar25 + lVar47 + 0xc + lVar39);
                      puVar18 = (uint64_t *)((int64_t)puVar25 + lVar39 + 0xc);
                      goto joined_r0x7fffa5622198;
                    }
                    uVar42 = *puVar29;
                    uVar44 = *(uint64_t *)((int64_t)puVar25 + lVar39 + lVar47 + 0xc);
                    lVar39 = lVar39 + 8;
                  } while (uVar44 == uVar42);
                  uVar15 = 0;
                  for (uVar44 = uVar44 ^ uVar42; (uVar44 & 1) == 0;
                      uVar44 = uVar44 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  uVar42 = (uint64_t)(uVar15 >> 3) + lVar39;
                }
                else {
                  uVar15 = 0;
                  for (uVar42 = *puVar23 ^ *puVar29; (uVar42 & 1) == 0;
                      uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  uVar42 = (uint64_t)(uVar15 >> 3);
                }
              }
              else {
joined_r0x7fffa5622198:
                if ((puVar18 < (uint64_t *)((int64_t)puVar1 - 3U)) &&
                   ((int)*puVar29 == (int)*puVar18)) {
                  puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
                  puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
                }
                if ((puVar18 < (uint64_t *)((int64_t)puVar1 - 1U)) &&
                   ((short)*puVar29 == (short)*puVar18)) {
                  puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
                  puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
                }
                if (puVar18 < puVar1) {
                  puVar18 = (uint64_t *)
                            ((int64_t)puVar18 + (uint64_t)((char)*puVar29 == (char)*puVar18));
                }
                uVar42 = (int64_t)puVar18 - (int64_t)puVar23;
              }
              *(int *)(lVar8 + (uint64_t)((uint32_t)((int)*puVar25 * -0x61c8864f) >> (bVar19 & 0x1f)) *
                               4) = (int)puVar25 - iVar33;
              if (puVar25 <= puVar27) {
                uVar44 = puVar25[1];
                puVar23 = (uint64_t *)param_2[3];
                *puVar23 = *puVar25;
                puVar23[1] = uVar44;
              }
              *(uint16_t *)(param_2[1] + 4) = 0;
              *(uint32_t *)param_2[1] = 1;
              if (0xffff < uVar42 + 1) {
                *(uint32_t *)(param_2 + 9) = 2;
                *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
              }
              *(short *)(param_2[1] + 6) = (short)(uVar42 + 1);
              param_2[1] = param_2[1] + 8;
              puVar25 = (uint64_t *)((int64_t)puVar25 + uVar42 + 4);
              uStack_68 = (uint64_t)uVar36;
              uVar15 = uVar20;
              uVar20 = uVar36;
            } while (puVar25 <= puVar17);
          }
        }
        puVar23 = (uint64_t *)((int64_t)puVar25 + uVar26);
        puVar29 = (uint64_t *)((int64_t)puVar25 + uVar26 + 1);
        uStack_d0 = (uint64_t)uVar15;
        puVar18 = puVar25;
      } while (puVar29 < puVar17);
    }
    else {
      puVar25 = param_4;
    }
LAB_7fffa5622ec7:
    if (uVar16 <= uVar49) {
      uVar16 = 0;
    }
    uVar14 = uVar16;
    if (uVar15 != 0) {
      uVar14 = uVar41;
    }
    if (uVar41 <= uVar49) {
      uVar14 = uVar16;
    }
    uVar16 = 0;
    if (uVar49 < uVar41) {
      uVar16 = uVar41;
    }
    if (uVar15 != 0) {
      uVar16 = uVar15;
    }
    if (uVar20 != 0) {
      uVar14 = uVar20;
    }
    *param_3 = uVar16;
    param_3[1] = uVar14;
    goto LAB_7fffa562456e;
  }
  lVar9 = *(int64_t *)(param_1 + 8);
  iVar13 = (int)lVar9;
  iVar33 = ((int)param_5 + (int)param_4) - iVar13;
  uVar41 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  uVar15 = *(uint32_t *)(param_1 + 0x18);
  uVar14 = iVar33 - uVar41;
  if (iVar33 - uVar15 <= uVar41) {
    uVar14 = uVar15;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar14 = uVar15;
  }
  puVar21 = (uint64_t *)((uint64_t)uVar14 + lVar9);
  puVar25 = (uint64_t *)((int64_t)param_4 + (uint64_t)(param_4 == puVar21));
  iVar33 = (int)puVar25 - iVar13;
  uVar49 = iVar33 - uVar41;
  if (iVar33 - uVar15 <= uVar41) {
    uVar49 = uVar15;
  }
  uVar41 = *param_3;
  uVar16 = param_3[1];
  puVar1 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar49 = uVar15;
  }
  puVar23 = (uint64_t *)((int64_t)param_4 + (uint64_t)(param_4 == puVar21) + 3);
  puVar29 = (uint64_t *)(param_5 + (int64_t)param_4);
  bVar48 = puVar23 < puVar1;
  uVar49 = iVar33 - uVar49;
  uVar15 = uVar41;
  if (uVar49 < uVar41) {
    uVar15 = 0;
  }
  uVar20 = 0;
  if (uVar16 <= uVar49) {
    uVar20 = uVar16;
  }
  if (iVar32 < 6) {
    if (iVar32 == 5) {
      if (bVar48) {
        bVar19 = 0x40 - (char)*(uint32_t *)(param_1 + 0x108);
        puVar17 = puVar29 + -4;
        puVar4 = (uint64_t *)((int64_t)puVar29 - 7);
        puVar27 = param_4;
        do {
          uVar26 = *(uint64_t *)((int64_t)puVar25 + 1);
          puVar18 = puVar25 + 0x10;
          uVar44 = *puVar25 * -0x30e4432345000000 >> (bVar19 & 0x3f);
          uVar36 = *(uint32_t *)(lVar8 + uVar44 * 4);
          lVar47 = -(uint64_t)uVar15;
          puVar34 = (uint64_t *)((int64_t)puVar25 + 1);
          puVar24 = (uint64_t *)((int64_t)puVar25 + 2);
          uVar42 = 2;
          while( true ) {
            puVar28 = puVar24;
            uVar38 = (uint64_t)uVar36;
            iVar32 = *(int *)((int64_t)puVar28 + lVar47);
            uVar26 = uVar26 * -0x30e4432345000000 >> (bVar19 & 0x3f);
            uVar35 = (int)puVar25 - iVar13;
            *(uint32_t *)(lVar8 + uVar44 * 4) = uVar35;
            if (((int)*puVar28 == iVar32) && (uVar15 != 0)) {
              cVar6 = *(char *)((int64_t)puVar28 - 1);
              cVar7 = *(char *)((int64_t)puVar28 + lVar47 + -1);
              *(int *)(lVar8 + uVar26 * 4) = (int)puVar34 - iVar13;
              uVar26 = (uint64_t)(cVar6 == cVar7);
              lVar39 = uVar26 + 4;
              lVar47 = (int64_t)puVar28 + (lVar47 - uVar26);
              puVar25 = (uint64_t *)((int64_t)puVar28 - uVar26);
              iVar32 = 1;
              uVar37 = uVar15;
              goto LAB_7fffa561fa36;
            }
            if ((uVar14 <= uVar36) && ((int)*puVar25 == *(int *)(lVar9 + uVar38))) {
              puVar28 = puVar34;
              goto LAB_7fffa561fade;
            }
            uVar44 = *puVar28 * -0x30e4432345000000 >> (bVar19 & 0x3f);
            uVar35 = (int)puVar34 - iVar13;
            uVar36 = *(uint32_t *)(lVar8 + uVar26 * 4);
            uVar38 = (uint64_t)uVar36;
            *(uint32_t *)(lVar8 + uVar26 * 4) = uVar35;
            if ((uVar14 <= uVar36) && ((int)*puVar34 == *(int *)(lVar9 + uVar38))) break;
            uVar36 = *(uint32_t *)(lVar8 + uVar44 * 4);
            if ((uint64_t *)(uVar42 + (int64_t)puVar28) < puVar18) {
              uVar38 = uVar42;
            }
            else {
              puVar18 = puVar18 + 0x10;
              uVar38 = uVar42 + 1;
            }
            uVar26 = *puVar23;
            puVar30 = (uint64_t *)(uVar42 + (int64_t)puVar23);
            puVar34 = puVar23;
            puVar23 = puVar30;
            puVar24 = (uint64_t *)(uVar42 + (int64_t)puVar28);
            puVar25 = puVar28;
            uVar42 = uVar38;
            if (puVar1 <= puVar30) {
              puVar25 = puVar27;
              goto LAB_7fffa56244ef;
            }
          }
          uVar26 = uVar44;
          puVar25 = puVar34;
          if (uVar42 < 5) {
LAB_7fffa561fade:
            *(int *)(lVar8 + uVar26 * 4) = (int)puVar28 - iVar13;
          }
          lVar47 = uVar38 + lVar9;
          uVar37 = (int)puVar25 - (int)lVar47;
          iVar32 = uVar37 + 3;
          lVar39 = 4;
          uVar20 = uVar15;
          if ((uVar14 < uVar36) && (puVar27 < puVar25)) {
            lVar22 = 0;
            do {
              if (*(char *)((int64_t)puVar25 + lVar22 + -1) != *(char *)(lVar47 + -1 + lVar22)) {
                puVar25 = (uint64_t *)((int64_t)puVar25 + lVar22);
                lVar39 = 4 - lVar22;
                lVar47 = lVar47 + lVar22;
                goto LAB_7fffa561fa36;
              }
              lVar3 = lVar22 + -1;
            } while ((puVar27 < (uint64_t *)((int64_t)puVar25 + lVar22 + -1)) &&
                    (lVar39 = lVar47 + lVar22, lVar22 = lVar3, puVar21 < (uint64_t *)(lVar39 + -1))
                    );
            puVar25 = (uint64_t *)((int64_t)puVar25 + lVar3);
            lVar39 = 4 - lVar3;
            lVar47 = lVar47 + lVar3;
          }
LAB_7fffa561fa36:
          puVar23 = (uint64_t *)((int64_t)puVar25 + lVar39);
          puVar34 = (uint64_t *)(lVar47 + lVar39);
          puVar18 = puVar23;
          if (puVar23 < puVar4) {
            if (*puVar34 == *puVar23) {
              lVar47 = 8;
LAB_7fffa561fa90:
              puVar18 = (uint64_t *)((int64_t)puVar23 + lVar47);
              if (puVar18 < puVar4) {
                if (*(uint64_t *)((int64_t)puVar34 + lVar47) == *puVar18)
                goto code_r0x7fffa561faad;
                uVar15 = 0;
                for (uVar26 = *puVar18 ^ *(uint64_t *)((int64_t)puVar34 + lVar47);
                    (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                  uVar15 = uVar15 + 1;
                }
                uVar26 = (uint64_t)(uVar15 >> 3) + lVar47;
                goto LAB_7fffa561fc24;
              }
              puVar34 = (uint64_t *)((int64_t)puVar34 + lVar47);
              goto joined_r0x7fffa561fbc6;
            }
            uVar15 = 0;
            for (uVar26 = *puVar34 ^ *puVar23; (uVar26 & 1) == 0;
                uVar26 = uVar26 >> 1 | 0x8000000000000000) {
              uVar15 = uVar15 + 1;
            }
            uVar26 = (uint64_t)(uVar15 >> 3);
          }
          else {
joined_r0x7fffa561fbc6:
            if ((puVar18 < (uint64_t *)((int64_t)puVar29 - 3U)) &&
               ((int)*puVar34 == (int)*puVar18)) {
              puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
              puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
            }
            if ((puVar18 < (uint64_t *)((int64_t)puVar29 - 1U)) &&
               ((short)*puVar34 == (short)*puVar18)) {
              puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
              puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
            }
            if (puVar18 < puVar29) {
              puVar18 = (uint64_t *)
                        ((int64_t)puVar18 + (uint64_t)((char)*puVar34 == (char)*puVar18));
            }
            uVar26 = (int64_t)puVar18 - (int64_t)puVar23;
          }
LAB_7fffa561fc24:
          uVar42 = (int64_t)puVar25 - (int64_t)puVar27;
          puVar23 = (uint64_t *)param_2[3];
          if (puVar17 < puVar25) {
            puVar18 = puVar23;
            if (puVar27 <= puVar17) {
              puVar18 = (uint64_t *)((int64_t)puVar23 + ((int64_t)puVar17 - (int64_t)puVar27));
              uVar44 = puVar27[1];
              *puVar23 = *puVar27;
              puVar23[1] = uVar44;
              if (0x10 < (int64_t)puVar17 - (int64_t)puVar27) {
                lVar47 = 0x10;
                do {
                  uVar10 = ((uint64_t *)((int64_t)puVar27 + lVar47))[1];
                  *(uint64_t *)((int64_t)puVar23 + lVar47) =
                       *(uint64_t *)((int64_t)puVar27 + lVar47);
                  ((uint64_t *)((int64_t)puVar23 + lVar47))[1] = uVar10;
                  puVar2 = (uint64_t *)((int64_t)puVar27 + lVar47 + 0x10);
                  uVar10 = puVar2[1];
                  puVar5 = (uint64_t *)((int64_t)puVar23 + lVar47 + 0x10);
                  *puVar5 = *puVar2;
                  puVar5[1] = uVar10;
                  lVar22 = lVar47 + 0x20;
                  lVar47 = lVar47 + 0x20;
                } while ((uint64_t *)((int64_t)puVar23 + lVar22) < puVar18);
              }
              puVar27 = puVar17;
            }
            if (puVar27 < puVar25) {
              uVar44 = (int64_t)puVar25 - (int64_t)puVar27;
              if ((uVar44 < 4) || ((uint64_t)((int64_t)puVar18 - (int64_t)puVar27) < 0x20)) {
LAB_7fffa561fd24:
                puVar23 = puVar18;
              }
              else {
                if (uVar44 < 0x20) {
                  uVar38 = 0;
                }
                else {
                  uVar38 = uVar44 & 0xffffffffffffffe0;
                  uVar31 = 0;
                  do {
                    uVar10 = ((uint64_t *)((int64_t)puVar27 + uVar31))[1];
                    puVar2 = (uint64_t *)((int64_t)puVar27 + uVar31 + 0x10);
                    uVar11 = *puVar2;
                    uVar12 = puVar2[1];
                    *(uint64_t *)((int64_t)puVar18 + uVar31) =
                         *(uint64_t *)((int64_t)puVar27 + uVar31);
                    ((uint64_t *)((int64_t)puVar18 + uVar31))[1] = uVar10;
                    puVar2 = (uint64_t *)((int64_t)puVar18 + uVar31 + 0x10);
                    *puVar2 = uVar11;
                    puVar2[1] = uVar12;
                    uVar31 = uVar31 + 0x20;
                  } while (uVar38 != uVar31);
                  if (uVar44 == uVar38) goto LAB_7fffa561fec9;
                  if ((uVar44 & 0x1c) == 0) {
                    puVar27 = (uint64_t *)((int64_t)puVar27 + uVar38);
                    puVar18 = (uint64_t *)((int64_t)puVar18 + uVar38);
                    goto LAB_7fffa561fd24;
                  }
                }
                uVar31 = uVar44 & 0xfffffffffffffffc;
                puVar23 = (uint64_t *)((int64_t)puVar18 + uVar31);
                do {
                  *(uint32_t *)((int64_t)puVar18 + uVar38) =
                       *(uint32_t *)((int64_t)puVar27 + uVar38);
                  uVar38 = uVar38 + 4;
                } while (uVar31 != uVar38);
                if (uVar44 == uVar31) goto LAB_7fffa561fec9;
                puVar27 = (uint64_t *)((int64_t)puVar27 + uVar31);
              }
              uVar15 = (int)puVar25 - (int)puVar27 & 7;
              uVar44 = (uint64_t)uVar15;
              puVar18 = puVar27;
              puVar34 = puVar27;
              if (uVar15 != 0) {
                do {
                  puVar18 = (uint64_t *)((int64_t)puVar34 + 1);
                  *(char *)puVar23 = (char)*puVar34;
                  puVar23 = (uint64_t *)((int64_t)puVar23 + 1);
                  uVar44 = uVar44 - 1;
                  puVar34 = puVar18;
                } while (uVar44 != 0);
              }
              if ((uint64_t)((int64_t)puVar27 - (int64_t)puVar25) < 0xfffffffffffffff9) {
                lVar47 = 0;
                while( true ) {
                  *(uint8_t *)((int64_t)puVar23 + lVar47) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 1) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 1);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 2) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 2);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 3) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 3);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 4) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 4);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 5) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 5);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 6) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 6);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 7) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 7);
                  if ((uint64_t *)((int64_t)puVar18 + lVar47 + 8) == puVar25) break;
                  lVar47 = lVar47 + 8;
                }
              }
            }
LAB_7fffa561fec9:
            lVar47 = param_2[1];
            param_2[3] = param_2[3] + uVar42;
            if (0xffff < uVar42) {
              *(uint32_t *)(param_2 + 9) = 1;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
            }
          }
          else {
            uVar44 = puVar27[1];
            *puVar23 = *puVar27;
            puVar23[1] = uVar44;
            if (0x10 < uVar42) {
              lVar47 = param_2[3];
              uVar44 = puVar27[3];
              *(uint64_t *)(lVar47 + 0x10) = puVar27[2];
              *(uint64_t *)(lVar47 + 0x18) = uVar44;
              if (0x20 < (int64_t)uVar42) {
                uVar44 = lVar47 + 0x40;
                puVar27 = puVar27 + 6;
                while( true ) {
                  uVar38 = puVar27[-1];
                  *(uint64_t *)(uVar44 - 0x20) = puVar27[-2];
                  *(uint64_t *)(uVar44 - 0x18) = uVar38;
                  uVar38 = puVar27[1];
                  *(uint64_t *)(uVar44 - 0x10) = *puVar27;
                  *(uint64_t *)(uVar44 - 8) = uVar38;
                  if (lVar47 + uVar42 <= uVar44) break;
                  uVar44 = uVar44 + 0x20;
                  puVar27 = puVar27 + 4;
                }
              }
              goto LAB_7fffa561fec9;
            }
            lVar47 = param_2[1];
            param_2[3] = param_2[3] + uVar42;
          }
          uVar44 = (lVar39 + uVar26) - 3;
          *(short *)(lVar47 + 4) = (short)uVar42;
          *(int *)param_2[1] = iVar32;
          if (0xffff < uVar44) {
            *(uint32_t *)(param_2 + 9) = 2;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
          }
          puVar25 = (uint64_t *)((int64_t)puVar25 + lVar39 + uVar26);
          *(short *)(param_2[1] + 6) = (short)uVar44;
          param_2[1] = param_2[1] + 8;
          uVar15 = uVar37;
          if (puVar1 < puVar25) {
          }
          else {
            *(uint32_t *)(lVar8 + ((uint64_t)
                               (*(int64_t *)(lVar9 + 2 + (uint64_t)uVar35) * -0x30e4432345000000)
                              >> (bVar19 & 0x3f)) * 4) = uVar35 + 2;
            *(int *)(lVar8 + ((uint64_t)
                              (*(int64_t *)((int64_t)puVar25 + -2) * -0x30e4432345000000) >>
                             (bVar19 & 0x3f)) * 4) = ((int)puVar25 + -2) - iVar13;
            if (uVar20 == 0) {
              uVar20 = 0;
            }
            else {
              do {
                uVar36 = uVar20;
                if ((int)*puVar25 != *(int *)((int64_t)puVar25 - (uint64_t)uVar36)) {
                  uVar20 = uVar36;
                  break;
                }
                lVar47 = -(uint64_t)uVar36;
                puVar23 = (uint64_t *)((int64_t)puVar25 + 4);
                puVar27 = (uint64_t *)((int64_t)puVar25 + lVar47 + 4);
                puVar18 = puVar23;
                if (puVar23 < puVar4) {
                  if (*puVar27 == *puVar23) {
                    lVar39 = 0;
                    do {
                      puVar27 = (uint64_t *)((int64_t)puVar25 + lVar39 + 0xc);
                      if (puVar4 <= puVar27) {
                        puVar27 = (uint64_t *)((int64_t)puVar25 + lVar47 + 0xc + lVar39);
                        puVar18 = (uint64_t *)((int64_t)puVar25 + lVar39 + 0xc);
                        goto joined_r0x7fffa5620098;
                      }
                      uVar26 = *puVar27;
                      uVar42 = *(uint64_t *)((int64_t)puVar25 + lVar39 + lVar47 + 0xc);
                      lVar39 = lVar39 + 8;
                    } while (uVar42 == uVar26);
                    uVar20 = 0;
                    for (uVar26 = uVar26 ^ uVar42; (uVar26 & 1) == 0;
                        uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                      uVar20 = uVar20 + 1;
                    }
                    uVar26 = (uint64_t)(uVar20 >> 3) + lVar39;
                  }
                  else {
                    uVar20 = 0;
                    for (uVar26 = *puVar27 ^ *puVar23; (uVar26 & 1) == 0;
                        uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                      uVar20 = uVar20 + 1;
                    }
                    uVar26 = (uint64_t)(uVar20 >> 3);
                  }
                }
                else {
joined_r0x7fffa5620098:
                  if ((puVar18 < (uint64_t *)((int64_t)puVar29 - 3U)) &&
                     ((int)*puVar27 == (int)*puVar18)) {
                    puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
                    puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
                  }
                  if ((puVar18 < (uint64_t *)((int64_t)puVar29 - 1U)) &&
                     ((short)*puVar27 == (short)*puVar18)) {
                    puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
                    puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
                  }
                  if (puVar18 < puVar29) {
                    puVar18 = (uint64_t *)
                              ((int64_t)puVar18 + (uint64_t)((char)*puVar27 == (char)*puVar18));
                  }
                  uVar26 = (int64_t)puVar18 - (int64_t)puVar23;
                }
                *(int *)(lVar8 + (*puVar25 * -0x30e4432345000000 >> (bVar19 & 0x3f)) * 4) =
                     (int)puVar25 - iVar13;
                if (puVar25 <= puVar17) {
                  puVar23 = (uint64_t *)param_2[3];
                  uVar42 = puVar25[1];
                  *puVar23 = *puVar25;
                  puVar23[1] = uVar42;
                }
                *(uint16_t *)(param_2[1] + 4) = 0;
                *(uint32_t *)param_2[1] = 1;
                if (0xffff < uVar26 + 1) {
                  *(uint32_t *)(param_2 + 9) = 2;
                  *(int *)((int64_t)param_2 + 0x4c) =
                       (int)((uint64_t)(param_2[1] - *param_2) >> 3);
                }
                *(short *)(param_2[1] + 6) = (short)(uVar26 + 1);
                param_2[1] = param_2[1] + 8;
                puVar25 = (uint64_t *)((int64_t)puVar25 + uVar26 + 4);
                uVar20 = uVar15;
                uVar15 = uVar36;
              } while (puVar25 <= puVar1);
            }
          }
          puVar23 = (uint64_t *)((int64_t)puVar25 + 3);
          puVar27 = puVar25;
        } while (puVar23 < puVar1);
      }
      else {
        puVar25 = param_4;
      }
LAB_7fffa56244ef:
      uVar14 = 0;
      if (uVar49 < uVar41) {
        uVar14 = uVar41;
      }
      uVar36 = 0;
      if (uVar49 < uVar16) {
        uVar36 = uVar16;
      }
      uVar16 = uVar36;
      if (uVar15 != 0) {
        uVar16 = uVar41;
        uVar14 = uVar15;
      }
      if (uVar41 <= uVar49) {
        uVar16 = uVar36;
      }
      *param_3 = uVar14;
      if (uVar20 != 0) {
        uVar16 = uVar20;
      }
      param_3[1] = uVar16;
      goto LAB_7fffa562456e;
    }
  }
  else {
    if (iVar32 == 6) {
      if (bVar48) {
        puVar17 = puVar29 + -4;
        bVar19 = 0x40 - (char)*(uint32_t *)(param_1 + 0x108);
        puVar4 = (uint64_t *)((int64_t)puVar29 - 7);
        puVar27 = param_4;
        do {
          uVar26 = *(uint64_t *)((int64_t)puVar25 + 1);
          uVar44 = *puVar25 * -0x30e4432340650000 >> (bVar19 & 0x3f);
          uVar36 = *(uint32_t *)(lVar8 + uVar44 * 4);
          puVar18 = puVar25 + 0x10;
          lVar47 = -(uint64_t)uVar15;
          puVar34 = (uint64_t *)((int64_t)puVar25 + 2);
          puVar24 = (uint64_t *)((int64_t)puVar25 + 1);
          uVar42 = 2;
          while( true ) {
            puVar28 = puVar23;
            uVar38 = (uint64_t)uVar36;
            uVar35 = (int)puVar25 - iVar13;
            uVar26 = uVar26 * -0x30e4432340650000 >> (bVar19 & 0x3f);
            iVar32 = *(int *)((int64_t)puVar34 + lVar47);
            *(uint32_t *)(lVar8 + uVar44 * 4) = uVar35;
            if (((int)*puVar34 == iVar32) && (uVar15 != 0)) {
              cVar6 = *(char *)((int64_t)puVar34 - 1);
              cVar7 = *(char *)((int64_t)puVar34 + lVar47 + -1);
              *(int *)(lVar8 + uVar26 * 4) = (int)puVar24 - iVar13;
              uVar26 = (uint64_t)(cVar6 == cVar7);
              puVar23 = (uint64_t *)((int64_t)puVar34 + (lVar47 - uVar26));
              puVar25 = (uint64_t *)((int64_t)puVar34 - uVar26);
              uVar26 = uVar26 | 4;
              iVar32 = 1;
              goto LAB_7fffa5623d01;
            }
            if ((uVar14 <= uVar36) && ((int)*puVar25 == *(int *)(lVar9 + uVar38))) {
              puVar34 = puVar24;
              goto LAB_7fffa5623c64;
            }
            uVar44 = *puVar34 * -0x30e4432340650000 >> (bVar19 & 0x3f);
            uVar35 = (int)puVar24 - iVar13;
            uVar36 = *(uint32_t *)(lVar8 + uVar26 * 4);
            uVar38 = (uint64_t)uVar36;
            *(uint32_t *)(lVar8 + uVar26 * 4) = uVar35;
            if ((uVar14 <= uVar36) && ((int)*puVar24 == *(int *)(lVar9 + uVar38))) break;
            uVar36 = *(uint32_t *)(lVar8 + uVar44 * 4);
            if ((uint64_t *)(uVar42 + (int64_t)puVar34) < puVar18) {
              uVar38 = uVar42;
            }
            else {
              uVar38 = uVar42 + 1;
              puVar18 = puVar18 + 0x10;
            }
            puVar23 = (uint64_t *)(uVar42 + (int64_t)puVar28);
            uVar26 = *puVar28;
            puVar25 = puVar34;
            puVar34 = (uint64_t *)(uVar42 + (int64_t)puVar34);
            puVar24 = puVar28;
            uVar42 = uVar38;
            if (puVar1 <= puVar23) {
              puVar25 = puVar27;
              goto LAB_7fffa5624719;
            }
          }
          uVar26 = uVar44;
          puVar25 = puVar24;
          if (uVar42 < 5) {
LAB_7fffa5623c64:
            *(int *)(lVar8 + uVar26 * 4) = (int)puVar34 - iVar13;
          }
          puVar23 = (uint64_t *)(uVar38 + lVar9);
          uVar37 = (int)puVar25 - (int)puVar23;
          iVar32 = uVar37 + 3;
          uVar26 = 4;
          uVar20 = uVar15;
          if ((puVar27 < puVar25) && (uVar14 < uVar36)) {
            for (lVar47 = 0;
                *(char *)((int64_t)puVar25 + lVar47 + -1) ==
                *(char *)((int64_t)puVar23 + lVar47 + -1); lVar47 = lVar47 + -1) {
              puVar34 = (uint64_t *)((int64_t)puVar25 + lVar47 + -1);
              puVar18 = (uint64_t *)((int64_t)puVar23 + lVar47 + -1);
              if ((puVar18 <= puVar21) || (puVar34 <= puVar27)) {
                uVar26 = uVar26 + 1;
                puVar23 = puVar18;
                puVar25 = puVar34;
                uVar15 = uVar37;
                goto LAB_7fffa5623d01;
              }
              uVar26 = uVar26 + 1;
            }
            puVar25 = (uint64_t *)((int64_t)puVar25 + lVar47);
            puVar23 = (uint64_t *)((int64_t)puVar23 + lVar47);
          }
          uVar15 = uVar37;
LAB_7fffa5623d01:
          puVar23 = (uint64_t *)((int64_t)puVar23 + uVar26);
          puVar18 = (uint64_t *)((int64_t)puVar25 + uVar26);
          puVar34 = puVar18;
          if (puVar18 < puVar4) {
            if (*puVar23 == *puVar18) {
              lVar47 = 8;
LAB_7fffa5623d60:
              puVar34 = (uint64_t *)((int64_t)puVar18 + lVar47);
              if (puVar34 < puVar4) {
                if (*(uint64_t *)((int64_t)puVar23 + lVar47) == *puVar34)
                goto code_r0x7fffa5623d7a;
                uVar36 = 0;
                for (uVar42 = *puVar34 ^ *(uint64_t *)((int64_t)puVar23 + lVar47);
                    (uVar42 & 1) == 0; uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                  uVar36 = uVar36 + 1;
                }
                uVar42 = (uint64_t)(uVar36 >> 3) + lVar47;
                goto LAB_7fffa5623dce;
              }
              puVar23 = (uint64_t *)((int64_t)puVar23 + lVar47);
              goto joined_r0x7fffa5623d8b;
            }
            uVar36 = 0;
            for (uVar42 = *puVar23 ^ *puVar18; (uVar42 & 1) == 0;
                uVar42 = uVar42 >> 1 | 0x8000000000000000) {
              uVar36 = uVar36 + 1;
            }
            uVar42 = (uint64_t)(uVar36 >> 3);
          }
          else {
joined_r0x7fffa5623d8b:
            if ((puVar34 < (uint64_t *)((int64_t)puVar29 - 3U)) &&
               ((int)*puVar23 == (int)*puVar34)) {
              puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
              puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
            }
            if ((puVar34 < (uint64_t *)((int64_t)puVar29 - 1U)) &&
               ((short)*puVar23 == (short)*puVar34)) {
              puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
              puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
            }
            if (puVar34 < puVar29) {
              puVar34 = (uint64_t *)
                        ((int64_t)puVar34 + (uint64_t)((char)*puVar23 == (char)*puVar34));
            }
            uVar42 = (int64_t)puVar34 - (int64_t)puVar18;
          }
LAB_7fffa5623dce:
          uVar44 = (int64_t)puVar25 - (int64_t)puVar27;
          puVar23 = (uint64_t *)param_2[3];
          if (puVar17 < puVar25) {
            puVar18 = puVar23;
            if (puVar27 <= puVar17) {
              puVar18 = (uint64_t *)((int64_t)puVar23 + ((int64_t)puVar17 - (int64_t)puVar27));
              uVar38 = puVar27[1];
              *puVar23 = *puVar27;
              puVar23[1] = uVar38;
              if (0x10 < (int64_t)puVar17 - (int64_t)puVar27) {
                lVar47 = 0x10;
                do {
                  uVar10 = ((uint64_t *)((int64_t)puVar27 + lVar47))[1];
                  *(uint64_t *)((int64_t)puVar23 + lVar47) =
                       *(uint64_t *)((int64_t)puVar27 + lVar47);
                  ((uint64_t *)((int64_t)puVar23 + lVar47))[1] = uVar10;
                  puVar2 = (uint64_t *)((int64_t)puVar27 + lVar47 + 0x10);
                  uVar10 = puVar2[1];
                  puVar5 = (uint64_t *)((int64_t)puVar23 + lVar47 + 0x10);
                  *puVar5 = *puVar2;
                  puVar5[1] = uVar10;
                  lVar39 = lVar47 + 0x20;
                  lVar47 = lVar47 + 0x20;
                } while ((uint64_t *)((int64_t)puVar23 + lVar39) < puVar18);
              }
              puVar27 = puVar17;
            }
            if (puVar27 < puVar25) {
              uVar38 = (int64_t)puVar25 - (int64_t)puVar27;
              if (uVar38 < 4 || (uint64_t)((int64_t)puVar18 - (int64_t)puVar27) < 0x20) {
                puVar23 = puVar18;
              }
              else {
                if (uVar38 < 0x20) {
                  uVar31 = 0;
                }
                else {
                  uVar31 = uVar38 & 0xffffffffffffffe0;
                  uVar40 = 0;
                  do {
                    uVar10 = ((uint64_t *)((int64_t)puVar27 + uVar40))[1];
                    puVar2 = (uint64_t *)((int64_t)puVar27 + uVar40 + 0x10);
                    uVar11 = *puVar2;
                    uVar12 = puVar2[1];
                    *(uint64_t *)((int64_t)puVar18 + uVar40) =
                         *(uint64_t *)((int64_t)puVar27 + uVar40);
                    ((uint64_t *)((int64_t)puVar18 + uVar40))[1] = uVar10;
                    puVar2 = (uint64_t *)((int64_t)puVar18 + uVar40 + 0x10);
                    *puVar2 = uVar11;
                    puVar2[1] = uVar12;
                    uVar40 = uVar40 + 0x20;
                  } while (uVar31 != uVar40);
                  if (uVar38 == uVar31) goto LAB_7fffa56240f7;
                  if ((uVar38 & 0x1c) == 0) {
                    puVar23 = (uint64_t *)((int64_t)puVar18 + uVar31);
                    puVar27 = (uint64_t *)((int64_t)puVar27 + uVar31);
                    goto LAB_7fffa5624044;
                  }
                }
                uVar40 = uVar38 & 0xfffffffffffffffc;
                puVar23 = (uint64_t *)((int64_t)puVar18 + uVar40);
                for (; *(uint32_t *)((int64_t)puVar18 + uVar31) =
                            *(uint32_t *)((int64_t)puVar27 + uVar31), uVar40 - 4 != uVar31;
                    uVar31 = uVar31 + 4) {
                }
                if (uVar38 == uVar40) goto LAB_7fffa56240f7;
                puVar27 = (uint64_t *)((int64_t)puVar27 + uVar40);
              }
LAB_7fffa5624044:
              uVar36 = (int)puVar25 - (int)puVar27 & 7;
              uVar38 = (uint64_t)uVar36;
              puVar18 = puVar27;
              puVar34 = puVar27;
              if (uVar36 != 0) {
                do {
                  puVar18 = (uint64_t *)((int64_t)puVar34 + 1);
                  *(char *)puVar23 = (char)*puVar34;
                  puVar23 = (uint64_t *)((int64_t)puVar23 + 1);
                  uVar38 = uVar38 - 1;
                  puVar34 = puVar18;
                } while (uVar38 != 0);
              }
              if ((uint64_t)((int64_t)puVar27 - (int64_t)puVar25) < 0xfffffffffffffff9) {
                lVar47 = 0;
                do {
                  *(uint8_t *)((int64_t)puVar23 + lVar47) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 1) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 1);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 2) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 2);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 3) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 3);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 4) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 4);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 5) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 5);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 6) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 6);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 7) =
                       *(uint8_t *)((int64_t)puVar18 + lVar47 + 7);
                  lVar39 = lVar47 + 8;
                  lVar47 = lVar47 + 8;
                } while ((uint64_t *)((int64_t)puVar18 + lVar39) != puVar25);
              }
            }
LAB_7fffa56240f7:
            lVar47 = param_2[1];
            param_2[3] = param_2[3] + uVar44;
            if (0xffff < uVar44) {
              *(uint32_t *)(param_2 + 9) = 1;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
            }
          }
          else {
            uVar38 = puVar27[1];
            *puVar23 = *puVar27;
            puVar23[1] = uVar38;
            if (0x10 < uVar44) {
              uVar38 = puVar27[3];
              lVar47 = param_2[3];
              *(uint64_t *)(lVar47 + 0x10) = puVar27[2];
              *(uint64_t *)(lVar47 + 0x18) = uVar38;
              if (0x20 < (int64_t)uVar44) {
                lVar39 = 0;
                do {
                  puVar5 = (uint64_t *)((int64_t)puVar27 + lVar39 + 0x20);
                  uVar10 = puVar5[1];
                  puVar2 = (uint64_t *)(lVar47 + 0x20 + lVar39);
                  *puVar2 = *puVar5;
                  puVar2[1] = uVar10;
                  puVar2 = (uint64_t *)((int64_t)puVar27 + lVar39 + 0x30);
                  uVar10 = puVar2[1];
                  puVar5 = (uint64_t *)(lVar47 + 0x30 + lVar39);
                  *puVar5 = *puVar2;
                  puVar5[1] = uVar10;
                  lVar22 = lVar47 + 0x20 + lVar39;
                  lVar39 = lVar39 + 0x20;
                } while (lVar22 + 0x20U < lVar47 + uVar44);
              }
              goto LAB_7fffa56240f7;
            }
            lVar47 = param_2[1];
            param_2[3] = param_2[3] + uVar44;
          }
          uVar38 = (uVar42 + uVar26) - 3;
          *(short *)(lVar47 + 4) = (short)uVar44;
          *(int *)param_2[1] = iVar32;
          if (0xffff < uVar38) {
            *(uint32_t *)(param_2 + 9) = 2;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
          }
          puVar25 = (uint64_t *)((int64_t)puVar25 + uVar42 + uVar26);
          *(short *)(param_2[1] + 6) = (short)uVar38;
          param_2[1] = param_2[1] + 8;
          if (puVar1 < puVar25) {
          }
          else {
            *(uint32_t *)(lVar8 + ((uint64_t)
                               (*(int64_t *)(lVar9 + 2 + (uint64_t)uVar35) * -0x30e4432340650000)
                              >> (bVar19 & 0x3f)) * 4) = uVar35 + 2;
            *(int *)(lVar8 + ((uint64_t)
                              (*(int64_t *)((int64_t)puVar25 + -2) * -0x30e4432340650000) >>
                             (bVar19 & 0x3f)) * 4) = ((int)puVar25 + -2) - iVar13;
            if (uVar20 == 0) {
              uVar20 = 0;
            }
            else {
              do {
                uVar36 = uVar20;
                if ((int)*puVar25 != *(int *)((int64_t)puVar25 - (uint64_t)uVar36)) {
                  uVar20 = uVar36;
                  break;
                }
                lVar47 = -(uint64_t)uVar36;
                puVar23 = (uint64_t *)((int64_t)puVar25 + 4);
                puVar18 = (uint64_t *)((int64_t)puVar25 + lVar47 + 4);
                puVar27 = puVar23;
                if (puVar23 < puVar4) {
                  if (*puVar18 == *puVar23) {
                    lVar39 = 0xc;
LAB_7fffa56242e0:
                    puVar27 = (uint64_t *)((int64_t)puVar25 + lVar39);
                    if (puVar27 < puVar4) {
                      uVar26 = *(uint64_t *)((int64_t)puVar25 + lVar39 + lVar47);
                      if (uVar26 == *puVar27) goto code_r0x7fffa56242f9;
                      uVar20 = 0;
                      for (uVar26 = uVar26 ^ *puVar27; (uVar26 & 1) == 0;
                          uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                        uVar20 = uVar20 + 1;
                      }
                      uVar26 = ((uint64_t)(uVar20 >> 3) + lVar39) - 4;
                      goto LAB_7fffa562434f;
                    }
                    puVar18 = (uint64_t *)(lVar47 + (int64_t)puVar27);
                    goto joined_r0x7fffa562430d;
                  }
                  uVar20 = 0;
                  for (uVar26 = *puVar23 ^ *puVar18; (uVar26 & 1) == 0;
                      uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                    uVar20 = uVar20 + 1;
                  }
                  uVar26 = (uint64_t)(uVar20 >> 3);
                }
                else {
joined_r0x7fffa562430d:
                  if ((puVar27 < (uint64_t *)((int64_t)puVar29 - 3U)) &&
                     ((int)*puVar18 == (int)*puVar27)) {
                    puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
                    puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
                  }
                  if ((puVar27 < (uint64_t *)((int64_t)puVar29 - 1U)) &&
                     ((short)*puVar18 == (short)*puVar27)) {
                    puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
                    puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
                  }
                  if (puVar27 < puVar29) {
                    puVar27 = (uint64_t *)
                              ((int64_t)puVar27 + (uint64_t)((char)*puVar18 == (char)*puVar27));
                  }
                  uVar26 = (int64_t)puVar27 - (int64_t)puVar23;
                }
LAB_7fffa562434f:
                *(int *)(lVar8 + (*puVar25 * -0x30e4432340650000 >> (bVar19 & 0x3f)) * 4) =
                     (int)puVar25 - iVar13;
                if (puVar25 <= puVar17) {
                  uVar42 = puVar25[1];
                  puVar23 = (uint64_t *)param_2[3];
                  *puVar23 = *puVar25;
                  puVar23[1] = uVar42;
                }
                *(uint16_t *)(param_2[1] + 4) = 0;
                *(uint32_t *)param_2[1] = 1;
                if (0xffff < uVar26 + 1) {
                  *(uint32_t *)(param_2 + 9) = 2;
                  *(int *)((int64_t)param_2 + 0x4c) =
                       (int)((uint64_t)(param_2[1] - *param_2) >> 3);
                }
                *(short *)(param_2[1] + 6) = (short)(uVar26 + 1);
                param_2[1] = param_2[1] + 8;
                puVar25 = (uint64_t *)((int64_t)puVar25 + uVar26 + 4);
                uVar20 = uVar15;
                uVar15 = uVar36;
              } while (puVar25 <= puVar1);
            }
          }
          puVar23 = (uint64_t *)((int64_t)puVar25 + 3);
          puVar27 = puVar25;
        } while (puVar23 < puVar1);
      }
      else {
        puVar25 = param_4;
      }
LAB_7fffa5624719:
      uVar14 = 0;
      if (uVar49 < uVar41) {
        uVar14 = uVar41;
      }
      uVar36 = 0;
      if (uVar49 < uVar16) {
        uVar36 = uVar16;
      }
      uVar16 = uVar36;
      if (uVar15 != 0) {
        uVar16 = uVar41;
        uVar14 = uVar15;
      }
      if (uVar41 <= uVar49) {
        uVar16 = uVar36;
      }
      *param_3 = uVar14;
      if (uVar20 != 0) {
        uVar16 = uVar20;
      }
      param_3[1] = uVar16;
      goto LAB_7fffa562456e;
    }
    if (iVar32 == 7) {
      if (bVar48) {
        puVar17 = puVar29 + -4;
        bVar19 = 0x40 - (char)*(uint32_t *)(param_1 + 0x108);
        puVar4 = (uint64_t *)((int64_t)puVar29 - 7);
        puVar27 = param_4;
        do {
          lVar47 = -(uint64_t)uVar15;
          puVar18 = puVar25 + 0x10;
          uVar26 = *(uint64_t *)((int64_t)puVar25 + 1);
          uVar44 = *puVar25 * -0x30e44323405a9d00 >> (bVar19 & 0x3f);
          uVar36 = *(uint32_t *)(lVar8 + uVar44 * 4);
          puVar34 = (uint64_t *)((int64_t)puVar25 + 2);
          uVar42 = 2;
          puVar24 = (uint64_t *)((int64_t)puVar25 + 1);
          while( true ) {
            puVar30 = puVar23;
            puVar28 = puVar34;
            uVar38 = (uint64_t)uVar36;
            uVar26 = uVar26 * -0x30e44323405a9d00 >> (bVar19 & 0x3f);
            uVar35 = (int)puVar25 - iVar13;
            iVar32 = *(int *)((int64_t)puVar28 + lVar47);
            *(uint32_t *)(lVar8 + uVar44 * 4) = uVar35;
            if ((uVar15 != 0) && ((int)*puVar28 == iVar32)) {
              uVar42 = (uint64_t)uVar35;
              cVar6 = *(char *)((int64_t)puVar28 - 1);
              cVar7 = *(char *)((int64_t)puVar28 + lVar47 + -1);
              *(int *)(lVar8 + uVar26 * 4) = (int)puVar24 - iVar13;
              uVar26 = (uint64_t)(cVar6 == cVar7);
              lVar39 = uVar26 + 4;
              puVar23 = (uint64_t *)((int64_t)puVar28 + (lVar47 - uVar26));
              puVar25 = (uint64_t *)((int64_t)puVar28 - uVar26);
              iVar32 = 1;
              uVar37 = uVar15;
              goto LAB_7fffa5621058;
            }
            if ((uVar14 <= uVar36) && ((int)*puVar25 == *(int *)(lVar9 + uVar38))) {
              puVar28 = puVar24;
              goto LAB_7fffa5620fb3;
            }
            uVar44 = *puVar28 * -0x30e44323405a9d00 >> (bVar19 & 0x3f);
            uVar35 = (int)puVar24 - iVar13;
            uVar36 = *(uint32_t *)(lVar8 + uVar26 * 4);
            uVar38 = (uint64_t)uVar36;
            *(uint32_t *)(lVar8 + uVar26 * 4) = uVar35;
            if ((uVar14 <= uVar36) && ((int)*puVar24 == *(int *)(lVar9 + uVar38))) break;
            uVar36 = *(uint32_t *)(lVar8 + uVar44 * 4);
            uVar26 = *puVar30;
            if ((uint64_t *)((int64_t)puVar28 + uVar42) < puVar18) {
              uVar38 = uVar42;
            }
            else {
              uVar38 = uVar42 + 1;
              puVar18 = puVar18 + 0x10;
            }
            puVar23 = (uint64_t *)(uVar42 + (int64_t)puVar30);
            puVar34 = (uint64_t *)((int64_t)puVar28 + uVar42);
            uVar42 = uVar38;
            puVar24 = puVar30;
            puVar25 = puVar28;
            if (puVar1 <= puVar23) {
              puVar25 = puVar27;
              goto LAB_7fffa5624637;
            }
          }
          uVar26 = uVar44;
          puVar25 = puVar24;
          if (uVar42 < 5) {
LAB_7fffa5620fb3:
            *(int *)(lVar8 + uVar26 * 4) = (int)puVar28 - iVar13;
          }
          puVar23 = (uint64_t *)(uVar38 + lVar9);
          uVar37 = (int)puVar25 - (int)puVar23;
          iVar32 = uVar37 + 3;
          lVar39 = 4;
          uVar42 = (uint64_t)uVar35;
          uVar20 = uVar15;
          if (puVar27 < puVar25) {
            if (uVar14 < uVar36) {
              for (lVar47 = 0;
                  *(char *)((int64_t)puVar25 + lVar47 + -1) ==
                  *(char *)((int64_t)puVar23 + lVar47 + -1); lVar47 = lVar47 + -1) {
                puVar18 = (uint64_t *)((int64_t)puVar23 + lVar47 + -1);
                puVar34 = (uint64_t *)((int64_t)puVar25 + lVar47 + -1);
                if ((puVar18 <= puVar21) || (puVar34 <= puVar27)) {
                  lVar39 = 5 - lVar47;
                  puVar23 = puVar18;
                  puVar25 = puVar34;
                  goto LAB_7fffa5621058;
                }
              }
              puVar25 = (uint64_t *)((int64_t)puVar25 + lVar47);
              lVar39 = 4 - lVar47;
              puVar23 = (uint64_t *)((int64_t)puVar23 + lVar47);
            }
          }
          else {
          }
LAB_7fffa5621058:
          puVar18 = (uint64_t *)((int64_t)puVar25 + lVar39);
          puVar23 = (uint64_t *)((int64_t)puVar23 + lVar39);
          puVar34 = puVar18;
          if (puVar18 < puVar4) {
            if (*puVar23 == *puVar18) {
              lVar47 = 8;
LAB_7fffa56210f0:
              puVar34 = (uint64_t *)((int64_t)puVar18 + lVar47);
              if (puVar34 < puVar4) {
                if (*(uint64_t *)((int64_t)puVar23 + lVar47) == *puVar34)
                goto code_r0x7fffa562110b;
                uVar15 = 0;
                for (uVar26 = *puVar34 ^ *(uint64_t *)((int64_t)puVar23 + lVar47);
                    (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                  uVar15 = uVar15 + 1;
                }
                uVar26 = (uint64_t)(uVar15 >> 3) + lVar47;
                goto LAB_7fffa562115b;
              }
              puVar23 = (uint64_t *)((int64_t)puVar23 + lVar47);
              goto joined_r0x7fffa56210e1;
            }
            uVar26 = 0;
            for (uVar44 = *puVar23 ^ *puVar18; (uVar44 & 1) == 0;
                uVar44 = uVar44 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            uVar26 = uVar26 >> 3 & 0x1fffffff;
          }
          else {
joined_r0x7fffa56210e1:
            if ((puVar34 < (uint64_t *)((int64_t)puVar29 - 3U)) &&
               ((int)*puVar23 == (int)*puVar34)) {
              puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
              puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
            }
            if ((puVar34 < (uint64_t *)((int64_t)puVar29 - 1U)) &&
               ((short)*puVar23 == (short)*puVar34)) {
              puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
              puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
            }
            if (puVar34 < puVar29) {
              puVar34 = (uint64_t *)
                        ((int64_t)puVar34 + (uint64_t)((char)*puVar23 == (char)*puVar34));
            }
            uVar26 = (int64_t)puVar34 - (int64_t)puVar18;
          }
LAB_7fffa562115b:
          uVar44 = (int64_t)puVar25 - (int64_t)puVar27;
          puVar23 = (uint64_t *)param_2[3];
          if (puVar17 < puVar25) {
            puVar18 = puVar23;
            if (puVar27 <= puVar17) {
              puVar18 = (uint64_t *)((int64_t)puVar23 + ((int64_t)puVar17 - (int64_t)puVar27));
              uVar38 = puVar27[1];
              *puVar23 = *puVar27;
              puVar23[1] = uVar38;
              if (0x10 < (int64_t)puVar17 - (int64_t)puVar27) {
                lVar47 = 0x10;
                do {
                  uVar10 = ((uint64_t *)((int64_t)puVar27 + lVar47))[1];
                  *(uint64_t *)((int64_t)puVar23 + lVar47) =
                       *(uint64_t *)((int64_t)puVar27 + lVar47);
                  ((uint64_t *)((int64_t)puVar23 + lVar47))[1] = uVar10;
                  puVar2 = (uint64_t *)((int64_t)puVar27 + lVar47 + 0x10);
                  uVar10 = puVar2[1];
                  puVar5 = (uint64_t *)((int64_t)puVar23 + lVar47 + 0x10);
                  *puVar5 = *puVar2;
                  puVar5[1] = uVar10;
                  lVar22 = lVar47 + 0x20;
                  lVar47 = lVar47 + 0x20;
                } while ((uint64_t *)((int64_t)puVar23 + lVar22) < puVar18);
              }
              puVar27 = puVar17;
            }
            if (puVar27 < puVar25) {
              uVar38 = (int64_t)puVar25 - (int64_t)puVar27;
              puVar23 = puVar18;
              if (!((uint64_t)((int64_t)puVar18 - (int64_t)puVar27) < 0x20 || uVar38 < 4)) {
                if (uVar38 < 0x20) {
                  uVar31 = 0;
                }
                else {
                  uVar31 = uVar38 & 0xffffffffffffffe0;
                  uVar40 = 0x20;
                  do {
                    puVar2 = (uint64_t *)((int64_t)puVar27 + (uVar40 - 0x20));
                    uVar10 = puVar2[1];
                    puVar5 = (uint64_t *)((int64_t)puVar27 + (uVar40 - 0x10));
                    uVar11 = *puVar5;
                    uVar12 = puVar5[1];
                    puVar5 = (uint64_t *)((int64_t)puVar18 + (uVar40 - 0x20));
                    *puVar5 = *puVar2;
                    puVar5[1] = uVar10;
                    puVar2 = (uint64_t *)((int64_t)puVar18 + (uVar40 - 0x10));
                    *puVar2 = uVar11;
                    puVar2[1] = uVar12;
                    bVar48 = uVar31 != uVar40;
                    uVar40 = uVar40 + 0x20;
                  } while (bVar48);
                  if (uVar38 == uVar31) goto LAB_7fffa562144c;
                  if ((uVar38 & 0x1c) == 0) {
                    puVar27 = (uint64_t *)((int64_t)puVar27 + uVar31);
                    puVar23 = (uint64_t *)((int64_t)puVar18 + uVar31);
                    goto LAB_7fffa56213fd;
                  }
                }
                uVar40 = uVar38 & 0xfffffffffffffffc;
                puVar23 = (uint64_t *)((int64_t)puVar18 + uVar40);
                do {
                  *(uint32_t *)((int64_t)puVar18 + uVar31) =
                       *(uint32_t *)((int64_t)puVar27 + uVar31);
                  uVar31 = uVar31 + 4;
                } while (uVar40 != uVar31);
                if (uVar38 == uVar40) goto LAB_7fffa562144c;
                puVar27 = (uint64_t *)((int64_t)puVar27 + uVar40);
              }
LAB_7fffa56213fd:
              uVar15 = (int)puVar25 - (int)puVar27 & 7;
              uVar38 = (uint64_t)uVar15;
              puVar34 = puVar23;
              puVar18 = puVar27;
              if (uVar15 == 0) {
                puVar24 = puVar27;
              }
              else {
                do {
                  uVar38 = uVar38 - 1;
                  puVar23 = (uint64_t *)((int64_t)puVar34 + 1);
                  *(char *)puVar34 = (char)*puVar18;
                  puVar24 = (uint64_t *)((int64_t)puVar18 + 1);
                  puVar34 = puVar23;
                  puVar18 = (uint64_t *)((int64_t)puVar18 + 1);
                } while (uVar38 != 0);
              }
              if ((uint64_t)((int64_t)puVar27 - (int64_t)puVar25) < 0xfffffffffffffff9) {
                lVar47 = 0;
                while( true ) {
                  *(uint8_t *)((int64_t)puVar23 + lVar47) =
                       *(uint8_t *)((int64_t)puVar24 + lVar47);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 1) =
                       *(uint8_t *)((int64_t)puVar24 + lVar47 + 1);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 2) =
                       *(uint8_t *)((int64_t)puVar24 + lVar47 + 2);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 3) =
                       *(uint8_t *)((int64_t)puVar24 + lVar47 + 3);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 4) =
                       *(uint8_t *)((int64_t)puVar24 + lVar47 + 4);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 5) =
                       *(uint8_t *)((int64_t)puVar24 + lVar47 + 5);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 6) =
                       *(uint8_t *)((int64_t)puVar24 + lVar47 + 6);
                  *(uint8_t *)((int64_t)puVar23 + lVar47 + 7) =
                       *(uint8_t *)((int64_t)puVar24 + lVar47 + 7);
                  if ((uint64_t *)((int64_t)puVar24 + lVar47 + 8) == puVar25) break;
                  lVar47 = lVar47 + 8;
                }
              }
            }
LAB_7fffa562144c:
            lVar47 = param_2[1];
            param_2[3] = param_2[3] + uVar44;
            if (0xffff < uVar44) {
              *(uint32_t *)(param_2 + 9) = 1;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
            }
          }
          else {
            uVar38 = puVar27[1];
            *puVar23 = *puVar27;
            puVar23[1] = uVar38;
            if (0x10 < uVar44) {
              lVar47 = param_2[3];
              uVar38 = puVar27[3];
              *(uint64_t *)(lVar47 + 0x10) = puVar27[2];
              *(uint64_t *)(lVar47 + 0x18) = uVar38;
              if (0x20 < (int64_t)uVar44) {
                lVar22 = 0;
                do {
                  puVar5 = (uint64_t *)((int64_t)puVar27 + lVar22 + 0x20);
                  uVar10 = puVar5[1];
                  puVar2 = (uint64_t *)(lVar47 + 0x20 + lVar22);
                  *puVar2 = *puVar5;
                  puVar2[1] = uVar10;
                  puVar2 = (uint64_t *)((int64_t)puVar27 + lVar22 + 0x30);
                  uVar10 = puVar2[1];
                  puVar5 = (uint64_t *)(lVar47 + 0x30 + lVar22);
                  *puVar5 = *puVar2;
                  puVar5[1] = uVar10;
                  lVar3 = lVar47 + 0x20 + lVar22;
                  lVar22 = lVar22 + 0x20;
                } while (lVar3 + 0x20U < lVar47 + uVar44);
              }
              goto LAB_7fffa562144c;
            }
            lVar47 = param_2[1];
            param_2[3] = param_2[3] + uVar44;
          }
          uVar38 = (lVar39 + uVar26) - 3;
          *(short *)(lVar47 + 4) = (short)uVar44;
          *(int *)param_2[1] = iVar32;
          if (0xffff < uVar38) {
            *(uint32_t *)(param_2 + 9) = 2;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
          }
          *(short *)(param_2[1] + 6) = (short)uVar38;
          param_2[1] = param_2[1] + 8;
          puVar27 = (uint64_t *)((int64_t)puVar25 + lVar39 + uVar26);
          uVar15 = uVar37;
          if (puVar1 < puVar27) {
          }
          else {
            *(int *)(lVar8 + ((uint64_t)(*(int64_t *)(lVar9 + 2 + uVar42) * -0x30e44323405a9d00)
                             >> (bVar19 & 0x3f)) * 4) = (int)uVar42 + 2;
            *(int *)(lVar8 + ((uint64_t)
                              (*(int64_t *)((int64_t)puVar27 + -2) * -0x30e44323405a9d00) >>
                             (bVar19 & 0x3f)) * 4) = ((int)puVar27 + -2) - iVar13;
            if (uVar20 == 0) {
              uVar20 = 0;
            }
            else {
              uVar36 = uVar20;
              do {
                uVar35 = uVar37;
                if ((int)*puVar27 != *(int *)((int64_t)puVar27 - (uint64_t)uVar36)) {
                  uVar20 = uVar36;
                  uVar15 = uVar35;
                  break;
                }
                lVar47 = -(uint64_t)uVar36;
                puVar25 = (uint64_t *)((int64_t)puVar27 + 4);
                puVar18 = (uint64_t *)((int64_t)puVar27 + lVar47 + 4);
                puVar23 = puVar25;
                if (puVar25 < puVar4) {
                  if (*puVar18 == *puVar25) {
                    lVar39 = 0xc;
LAB_7fffa5621660:
                    puVar23 = (uint64_t *)((int64_t)puVar27 + lVar39);
                    if (puVar23 < puVar4) {
                      uVar26 = *(uint64_t *)((int64_t)puVar27 + lVar39 + lVar47);
                      if (uVar26 == *puVar23) goto code_r0x7fffa562167b;
                      uVar15 = 0;
                      for (uVar26 = uVar26 ^ *puVar23; (uVar26 & 1) == 0;
                          uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                        uVar15 = uVar15 + 1;
                      }
                      uVar26 = ((uint64_t)(uVar15 >> 3) + lVar39) - 4;
                      goto LAB_7fffa56216da;
                    }
                    puVar18 = (uint64_t *)(lVar47 + (int64_t)puVar23);
                    goto joined_r0x7fffa5621698;
                  }
                  uVar15 = 0;
                  for (uVar26 = *puVar25 ^ *puVar18; (uVar26 & 1) == 0;
                      uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  uVar26 = (uint64_t)(uVar15 >> 3);
                }
                else {
joined_r0x7fffa5621698:
                  if ((puVar23 < (uint64_t *)((int64_t)puVar29 - 3U)) &&
                     ((int)*puVar18 == (int)*puVar23)) {
                    puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
                    puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
                  }
                  if ((puVar23 < (uint64_t *)((int64_t)puVar29 - 1U)) &&
                     ((short)*puVar18 == (short)*puVar23)) {
                    puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
                    puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
                  }
                  if (puVar23 < puVar29) {
                    puVar23 = (uint64_t *)
                              ((int64_t)puVar23 + (uint64_t)((char)*puVar18 == (char)*puVar23));
                  }
                  uVar26 = (int64_t)puVar23 - (int64_t)puVar25;
                }
LAB_7fffa56216da:
                *(int *)(lVar8 + (*puVar27 * -0x30e44323405a9d00 >> (bVar19 & 0x3f)) * 4) =
                     (int)puVar27 - iVar13;
                if (puVar27 <= puVar17) {
                  uVar42 = puVar27[1];
                  puVar25 = (uint64_t *)param_2[3];
                  *puVar25 = *puVar27;
                  puVar25[1] = uVar42;
                }
                *(uint16_t *)(param_2[1] + 4) = 0;
                *(uint32_t *)param_2[1] = 1;
                if (0xffff < uVar26 + 1) {
                  *(uint32_t *)(param_2 + 9) = 2;
                  *(int *)((int64_t)param_2 + 0x4c) =
                       (int)((uint64_t)(param_2[1] - *param_2) >> 3);
                }
                *(short *)(param_2[1] + 6) = (short)(uVar26 + 1);
                param_2[1] = param_2[1] + 8;
                puVar27 = (uint64_t *)((int64_t)puVar27 + uVar26 + 4);
                uVar20 = uVar35;
                uVar37 = uVar36;
                uVar15 = uVar36;
                uVar36 = uVar35;
              } while (puVar27 <= puVar1);
            }
          }
          puVar23 = (uint64_t *)((int64_t)puVar27 + 3);
          puVar25 = puVar27;
        } while (puVar23 < puVar1);
      }
      else {
        puVar25 = param_4;
      }
LAB_7fffa5624637:
      if (uVar16 <= uVar49) {
        uVar16 = 0;
      }
      uVar14 = uVar16;
      if (uVar15 != 0) {
        uVar14 = uVar41;
      }
      if (uVar41 <= uVar49) {
        uVar14 = uVar16;
      }
      uVar16 = 0;
      if (uVar49 < uVar41) {
        uVar16 = uVar41;
      }
      if (uVar15 != 0) {
        uVar16 = uVar15;
      }
      if (uVar20 != 0) {
        uVar14 = uVar20;
      }
      param_3[1] = uVar14;
      *param_3 = uVar16;
      goto LAB_7fffa562456e;
    }
  }
  if (bVar48) {
    puVar17 = (uint64_t *)((int64_t)puVar29 - 7);
    puVar4 = puVar29 + -4;
    uVar36 = 0x20 - *(int *)(param_1 + 0x108);
    puVar27 = param_4;
    do {
      lVar47 = -(uint64_t)uVar15;
      bVar19 = (uint8_t)uVar36;
      uVar42 = (uint64_t)((uint32_t)((int)*puVar25 * -0x61c8864f) >> (bVar19 & 0x1f));
      iVar32 = *(int *)((int64_t)puVar25 + 1);
      puVar18 = puVar25 + 0x10;
      uVar35 = *(uint32_t *)(lVar8 + uVar42 * 4);
      puVar24 = (uint64_t *)((int64_t)puVar25 + 1);
      uVar26 = 2;
      puVar34 = (uint64_t *)((int64_t)puVar25 + 2);
      while( true ) {
        puVar28 = puVar34;
        uVar44 = (uint64_t)uVar35;
        uVar38 = (uint64_t)((uint32_t)(iVar32 * -0x61c8864f) >> (bVar19 & 0x1f));
        uVar37 = (int)puVar25 - iVar13;
        iVar32 = *(int *)((int64_t)puVar28 + lVar47);
        *(uint32_t *)(lVar8 + uVar42 * 4) = uVar37;
        uVar42 = *puVar28;
        if ((uVar15 != 0) && ((int)uVar42 == iVar32)) {
          uVar26 = (uint64_t)
                   (*(char *)((int64_t)puVar28 - 1) == *(char *)((int64_t)puVar28 + lVar47 + -1));
          lVar39 = uVar26 + 4;
          *(int *)(lVar8 + uVar38 * 4) = (int)puVar24 - iVar13;
          lVar47 = (int64_t)puVar28 + (lVar47 - uVar26);
          puVar25 = (uint64_t *)((int64_t)puVar28 - uVar26);
          iVar32 = 1;
          uVar46 = uVar15;
          goto LAB_7fffa562258c;
        }
        if ((uVar14 <= uVar35) && ((int)*puVar25 == *(int *)(lVar9 + uVar44))) {
          puVar28 = puVar24;
          goto LAB_7fffa5622663;
        }
        uVar37 = (int)puVar24 - iVar13;
        uVar35 = *(uint32_t *)(lVar8 + uVar38 * 4);
        uVar44 = (uint64_t)uVar35;
        *(uint32_t *)(lVar8 + uVar38 * 4) = uVar37;
        uVar38 = (uint64_t)((uint32_t)((int)uVar42 * -0x61c8864f) >> (bVar19 & 0x1f));
        if ((uVar14 <= uVar35) && ((int)*puVar24 == *(int *)(lVar9 + uVar44))) break;
        puVar34 = (uint64_t *)(uVar26 + (int64_t)puVar28);
        uVar35 = *(uint32_t *)(lVar8 + uVar38 * 4);
        if (puVar34 < puVar18) {
          uVar42 = uVar26;
        }
        else {
          puVar18 = puVar18 + 0x10;
          uVar42 = uVar26 + 1;
        }
        puVar30 = (uint64_t *)(uVar26 + (int64_t)puVar23);
        iVar32 = (int)*puVar23;
        puVar24 = puVar23;
        puVar23 = puVar30;
        uVar26 = uVar42;
        uVar42 = uVar38;
        puVar25 = puVar28;
        if (puVar1 <= puVar30) {
          puVar25 = puVar27;
          goto LAB_7fffa5622f2b;
        }
      }
      puVar25 = puVar24;
      if (uVar26 < 5) {
LAB_7fffa5622663:
        *(int *)(lVar8 + uVar38 * 4) = (int)puVar28 - iVar13;
      }
      lVar47 = uVar44 + lVar9;
      uVar46 = (int)puVar25 - (int)lVar47;
      iVar32 = uVar46 + 3;
      lVar39 = 4;
      uVar20 = uVar15;
      if ((puVar27 < puVar25) && (uVar14 < uVar35)) {
        lVar22 = 0;
        do {
          if (*(char *)((int64_t)puVar25 + lVar22 + -1) != *(char *)(lVar47 + -1 + lVar22)) {
            puVar25 = (uint64_t *)((int64_t)puVar25 + lVar22);
            lVar39 = 4 - lVar22;
            lVar47 = lVar47 + lVar22;
            goto LAB_7fffa562258c;
          }
          lVar3 = lVar22 + -1;
        } while ((puVar27 < (uint64_t *)((int64_t)puVar25 + lVar22 + -1)) &&
                (lVar39 = lVar47 + lVar22, lVar22 = lVar3, puVar21 < (uint64_t *)(lVar39 + -1)));
        puVar25 = (uint64_t *)((int64_t)puVar25 + lVar3);
        lVar39 = 4 - lVar3;
        lVar47 = lVar47 + lVar3;
      }
LAB_7fffa562258c:
      puVar23 = (uint64_t *)(lVar47 + lVar39);
      puVar18 = (uint64_t *)((int64_t)puVar25 + lVar39);
      puVar34 = puVar18;
      if (puVar18 < puVar17) {
        if (*puVar23 == *puVar18) {
          lVar22 = 0;
          do {
            puVar23 = (uint64_t *)((int64_t)puVar25 + lVar22 + lVar39 + 8);
            if (puVar17 <= puVar23) {
              puVar23 = (uint64_t *)(lVar22 + lVar47 + lVar39 + 8);
              puVar34 = (uint64_t *)((int64_t)puVar25 + lVar22 + lVar39 + 8);
              goto joined_r0x7fffa56225d1;
            }
            uVar26 = *puVar23;
            uVar42 = *(uint64_t *)(lVar47 + lVar39 + 8 + lVar22);
            lVar22 = lVar22 + 8;
          } while (uVar42 == uVar26);
          uVar15 = 0;
          for (uVar26 = uVar26 ^ uVar42; (uVar26 & 1) == 0;
              uVar26 = uVar26 >> 1 | 0x8000000000000000) {
            uVar15 = uVar15 + 1;
          }
          uVar26 = (uint64_t)(uVar15 >> 3) + lVar22;
        }
        else {
          uVar15 = 0;
          for (uVar26 = *puVar23 ^ *puVar18; (uVar26 & 1) == 0;
              uVar26 = uVar26 >> 1 | 0x8000000000000000) {
            uVar15 = uVar15 + 1;
          }
          uVar26 = (uint64_t)(uVar15 >> 3);
        }
      }
      else {
joined_r0x7fffa56225d1:
        if ((puVar34 < (uint64_t *)((int64_t)puVar29 - 3U)) && ((int)*puVar23 == (int)*puVar34)) {
          puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
          puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
        }
        if ((puVar34 < (uint64_t *)((int64_t)puVar29 - 1U)) &&
           ((short)*puVar23 == (short)*puVar34)) {
          puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
          puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
        }
        if (puVar34 < puVar29) {
          puVar34 = (uint64_t *)((int64_t)puVar34 + (uint64_t)((char)*puVar23 == (char)*puVar34))
          ;
        }
        uVar26 = (int64_t)puVar34 - (int64_t)puVar18;
      }
      uVar42 = (int64_t)puVar25 - (int64_t)puVar27;
      puVar23 = (uint64_t *)param_2[3];
      if (puVar4 < puVar25) {
        puVar18 = puVar23;
        if (puVar27 <= puVar4) {
          puVar18 = (uint64_t *)((int64_t)puVar23 + ((int64_t)puVar4 - (int64_t)puVar27));
          uVar44 = puVar27[1];
          *puVar23 = *puVar27;
          puVar23[1] = uVar44;
          if (0x10 < (int64_t)puVar4 - (int64_t)puVar27) {
            lVar47 = 0x10;
            do {
              uVar10 = ((uint64_t *)((int64_t)puVar27 + lVar47))[1];
              *(uint64_t *)((int64_t)puVar23 + lVar47) =
                   *(uint64_t *)((int64_t)puVar27 + lVar47);
              ((uint64_t *)((int64_t)puVar23 + lVar47))[1] = uVar10;
              puVar2 = (uint64_t *)((int64_t)puVar27 + lVar47 + 0x10);
              uVar10 = puVar2[1];
              puVar5 = (uint64_t *)((int64_t)puVar23 + lVar47 + 0x10);
              *puVar5 = *puVar2;
              puVar5[1] = uVar10;
              lVar22 = lVar47 + 0x20;
              lVar47 = lVar47 + 0x20;
            } while ((uint64_t *)((int64_t)puVar23 + lVar22) < puVar18);
          }
          puVar27 = puVar4;
        }
        if (puVar27 < puVar25) {
          uVar44 = (int64_t)puVar25 - (int64_t)puVar27;
          if (uVar44 < 4 || (uint64_t)((int64_t)puVar18 - (int64_t)puVar27) < 0x20) {
LAB_7fffa5622884:
            puVar23 = puVar18;
          }
          else {
            if (uVar44 < 0x20) {
              uVar38 = 0;
            }
            else {
              uVar38 = uVar44 & 0xffffffffffffffe0;
              uVar31 = 0;
              do {
                uVar10 = *(uint64_t *)((int64_t)puVar27 + uVar31);
                uVar11 = ((uint64_t *)((int64_t)puVar27 + uVar31))[1];
                puVar2 = (uint64_t *)((int64_t)puVar27 + uVar31 + 0x10);
                uVar12 = puVar2[1];
                puVar5 = (uint64_t *)((int64_t)puVar18 + uVar31 + 0x10);
                *puVar5 = *puVar2;
                puVar5[1] = uVar12;
                *(uint64_t *)((int64_t)puVar18 + uVar31) = uVar10;
                ((uint64_t *)((int64_t)puVar18 + uVar31))[1] = uVar11;
                uVar31 = uVar31 + 0x20;
              } while (uVar38 != uVar31);
              if (uVar44 == uVar38) goto LAB_7fffa5622a04;
              if ((uVar44 & 0x1c) == 0) {
                puVar27 = (uint64_t *)((int64_t)puVar27 + uVar38);
                puVar18 = (uint64_t *)((int64_t)puVar18 + uVar38);
                goto LAB_7fffa5622884;
              }
            }
            uVar31 = uVar44 & 0xfffffffffffffffc;
            puVar23 = (uint64_t *)((int64_t)puVar18 + uVar31);
            for (; *(uint32_t *)((int64_t)puVar18 + uVar38) =
                        *(uint32_t *)((int64_t)puVar27 + uVar38), uVar31 - 4 != uVar38;
                uVar38 = uVar38 + 4) {
            }
            if (uVar44 == uVar31) goto LAB_7fffa5622a04;
            puVar27 = (uint64_t *)((int64_t)puVar27 + uVar31);
          }
          puVar18 = puVar27;
          for (uVar44 = (uint64_t)((int)puVar25 - (int)puVar27 & 7); uVar44 != 0;
              uVar44 = uVar44 - 1) {
            uVar38 = *puVar18;
            puVar18 = (uint64_t *)((int64_t)puVar18 + 1);
            *(char *)puVar23 = (char)uVar38;
            puVar23 = (uint64_t *)((int64_t)puVar23 + 1);
          }
          if ((uint64_t)((int64_t)puVar27 - (int64_t)puVar25) < 0xfffffffffffffff9) {
            while( true ) {
              *(char *)puVar23 = (char)*puVar18;
              *(uint8_t *)((int64_t)puVar23 + 1) = *(uint8_t *)((int64_t)puVar18 + 1);
              *(uint8_t *)((int64_t)puVar23 + 2) = *(uint8_t *)((int64_t)puVar18 + 2);
              *(uint8_t *)((int64_t)puVar23 + 3) = *(uint8_t *)((int64_t)puVar18 + 3);
              *(uint8_t *)((int64_t)puVar23 + 4) = *(uint8_t *)((int64_t)puVar18 + 4);
              *(uint8_t *)((int64_t)puVar23 + 5) = *(uint8_t *)((int64_t)puVar18 + 5);
              *(uint8_t *)((int64_t)puVar23 + 6) = *(uint8_t *)((int64_t)puVar18 + 6);
              *(uint8_t *)((int64_t)puVar23 + 7) = *(uint8_t *)((int64_t)puVar18 + 7);
              if (puVar18 + 1 == puVar25) break;
              puVar23 = puVar23 + 1;
              puVar18 = puVar18 + 1;
            }
          }
        }
LAB_7fffa5622a04:
        param_2[3] = param_2[3] + uVar42;
        lVar47 = param_2[1];
        if (0xffff < uVar42) {
          *(uint32_t *)(param_2 + 9) = 1;
          *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar47 - *param_2) >> 3);
        }
      }
      else {
        uVar44 = puVar27[1];
        *puVar23 = *puVar27;
        puVar23[1] = uVar44;
        if (0x10 < uVar42) {
          lVar47 = param_2[3];
          uVar44 = puVar27[3];
          *(uint64_t *)(lVar47 + 0x10) = puVar27[2];
          *(uint64_t *)(lVar47 + 0x18) = uVar44;
          if (0x20 < (int64_t)uVar42) {
            uVar44 = lVar47 + 0x40;
            puVar27 = puVar27 + 6;
            while( true ) {
              uVar38 = puVar27[-1];
              *(uint64_t *)(uVar44 - 0x20) = puVar27[-2];
              *(uint64_t *)(uVar44 - 0x18) = uVar38;
              uVar38 = puVar27[1];
              *(uint64_t *)(uVar44 - 0x10) = *puVar27;
              *(uint64_t *)(uVar44 - 8) = uVar38;
              if (lVar47 + uVar42 <= uVar44) break;
              uVar44 = uVar44 + 0x20;
              puVar27 = puVar27 + 4;
            }
          }
          goto LAB_7fffa5622a04;
        }
        lVar47 = param_2[1];
        param_2[3] = param_2[3] + uVar42;
      }
      *(short *)(lVar47 + 4) = (short)uVar42;
      uVar42 = (lVar39 + uVar26) - 3;
      *(int *)param_2[1] = iVar32;
      if (0xffff < uVar42) {
        *(uint32_t *)(param_2 + 9) = 2;
        *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
      }
      puVar25 = (uint64_t *)((int64_t)puVar25 + lVar39 + uVar26);
      *(short *)(param_2[1] + 6) = (short)uVar42;
      param_2[1] = param_2[1] + 8;
      uVar15 = uVar46;
      if (puVar25 <= puVar1) {
        *(uint32_t *)(lVar8 + (uint64_t)
                          ((uint32_t)(*(int *)(lVar9 + 2 + (uint64_t)uVar37) * -0x61c8864f) >>
                          (bVar19 & 0x1f)) * 4) = uVar37 + 2;
        *(int *)(lVar8 + (uint64_t)
                         ((uint32_t)(*(int *)((int64_t)puVar25 + -2) * -0x61c8864f) >>
                         (uint64_t)uVar36) * 4) = ((int)puVar25 + -2) - iVar13;
        if (uVar20 == 0) {
          uVar20 = 0;
        }
        else {
          do {
            uVar35 = uVar20;
            uVar20 = uVar35;
            uVar15 = uVar46;
            if ((int)*puVar25 != *(int *)((int64_t)puVar25 - (uint64_t)uVar35)) break;
            lVar47 = -(uint64_t)uVar35;
            puVar23 = (uint64_t *)((int64_t)puVar25 + 4);
            puVar27 = (uint64_t *)((int64_t)puVar25 + lVar47 + 4);
            if (puVar23 < puVar17) {
              if (*puVar27 == *puVar23) {
                lVar39 = 0xc;
LAB_7fffa5622d00:
                puVar18 = (uint64_t *)((int64_t)puVar25 + lVar39);
                if (puVar18 < puVar17) {
                  uVar26 = *(uint64_t *)((int64_t)puVar25 + lVar39 + lVar47);
                  if (uVar26 == *puVar18) goto code_r0x7fffa5622d19;
                  uVar15 = 0;
                  for (uVar26 = *puVar18 ^ uVar26; (uVar26 & 1) == 0;
                      uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  uVar26 = ((uint64_t)(uVar15 >> 3) + lVar39) - 4;
                  goto LAB_7fffa5622dba;
                }
                puVar27 = (uint64_t *)(lVar47 + (int64_t)puVar18);
                goto LAB_7fffa5622d4f;
              }
              uVar15 = 0;
              for (uVar26 = *puVar23 ^ *puVar27; (uVar26 & 1) == 0;
                  uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                uVar15 = uVar15 + 1;
              }
              uVar26 = (uint64_t)(uVar15 >> 3);
            }
            else {
              puVar18 = puVar23;
LAB_7fffa5622d4f:
              if ((puVar18 < (uint64_t *)((int64_t)puVar29 - 3U)) &&
                 ((int)*puVar27 == (int)*puVar18)) {
                puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
                puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
              }
              if ((puVar18 < (uint64_t *)((int64_t)puVar29 - 1U)) &&
                 ((short)*puVar27 == (short)*puVar18)) {
                puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
                puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
              }
              if (puVar18 < puVar29) {
                puVar18 = (uint64_t *)
                          ((int64_t)puVar18 + (uint64_t)((char)*puVar27 == (char)*puVar18));
              }
              uVar26 = (int64_t)puVar18 - (int64_t)puVar23;
            }
LAB_7fffa5622dba:
            *(int *)(lVar8 + (uint64_t)((uint32_t)((int)*puVar25 * -0x61c8864f) >> (bVar19 & 0x1f)) * 4
                    ) = (int)puVar25 - iVar13;
            if (puVar25 <= puVar4) {
              puVar23 = (uint64_t *)param_2[3];
              uVar42 = puVar25[1];
              *puVar23 = *puVar25;
              puVar23[1] = uVar42;
            }
            *(uint16_t *)(param_2[1] + 4) = 0;
            *(uint32_t *)param_2[1] = 1;
            if (0xffff < uVar26 + 1) {
              *(uint32_t *)(param_2 + 9) = 2;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
            }
            *(short *)(param_2[1] + 6) = (short)(uVar26 + 1);
            param_2[1] = param_2[1] + 8;
            puVar25 = (uint64_t *)((int64_t)puVar25 + uVar26 + 4);
            uVar20 = uVar46;
            uVar46 = uVar35;
            uVar15 = uVar35;
          } while (puVar25 <= puVar1);
        }
      }
      puVar23 = (uint64_t *)((int64_t)puVar25 + 3);
      puVar27 = puVar25;
    } while (puVar23 < puVar1);
  }
  else {
    puVar25 = param_4;
  }
LAB_7fffa5622f2b:
  uVar14 = 0;
  if (uVar49 < uVar41) {
    uVar14 = uVar41;
  }
  if (uVar16 <= uVar49) {
    uVar16 = 0;
  }
  uVar36 = uVar16;
  if (uVar15 != 0) {
    uVar36 = uVar41;
    uVar14 = uVar15;
  }
  if (uVar41 <= uVar49) {
    uVar36 = uVar16;
  }
  *param_3 = uVar14;
  if (uVar20 != 0) {
    uVar36 = uVar20;
  }
  param_3[1] = uVar36;
LAB_7fffa562456e:
  return (int64_t)param_4 + (param_5 - (int64_t)puVar25);
code_r0x7fffa561f4c9:
  lVar39 = lVar39 + 8;
  goto LAB_7fffa561f4a0;
code_r0x7fffa5623329:
  lVar47 = lVar47 + 8;
  goto LAB_7fffa5623310;
code_r0x7fffa56238f9:
  lVar39 = lVar39 + 8;
  goto LAB_7fffa56238e0;
code_r0x7fffa56205ae:
  lVar47 = lVar47 + 8;
  goto LAB_7fffa5620590;
code_r0x7fffa5620b4e:
  lVar39 = lVar39 + 8;
  goto LAB_7fffa5620b30;
code_r0x7fffa5621c1a:
  lVar47 = lVar47 + 8;
  goto code_r0x7fffa5621bf1;
code_r0x7fffa561faad:
  lVar47 = lVar47 + 8;
  goto LAB_7fffa561fa90;
code_r0x7fffa5623d7a:
  lVar47 = lVar47 + 8;
  goto LAB_7fffa5623d60;
code_r0x7fffa56242f9:
  lVar39 = lVar39 + 8;
  goto LAB_7fffa56242e0;
code_r0x7fffa562110b:
  lVar47 = lVar47 + 8;
  goto LAB_7fffa56210f0;
code_r0x7fffa562167b:
  lVar39 = lVar39 + 8;
  goto LAB_7fffa5621660;
code_r0x7fffa5622d19:
  lVar39 = lVar39 + 8;
  goto LAB_7fffa5622d00;
}


// ============================================================================
// Function : FUN_7fffa5624780  |  RVA: 0xeb4780  |  Size: 1807 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5624780(void)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  char *pcVar10;
  uint32_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  code *pcVar14;
  uint32_t uVar15;
  uint64_t uVar16;
  uint8_t *pbVar17;
  int64_t lVar18;
  uint64_t uVar19;
  char *pcVar20;
  int64_t in_R9;
  uint32_t *puVar21;
  int64_t in_R10;
  uint64_t uVar22;
  uint32_t uVar23;
  uint64_t *puVar24;
  uint64_t uVar25;
  bool bVar26;
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint32_t in_stack_00000028;
  
  uVar22 = in_R10 - (in_R10 << 0x2e);
  uVar12 = in_R9 * -0x4640cbbd8ab3a71b;
  bVar3 = (uint8_t)in_stack_00000028 & 0x1f;
  uVar15 = in_stack_00000028 | 1;
  uVar22 = (in_R10 * 0x80000000 | uVar22 >> 0x21) ^ (in_R10 << 0x38 | uVar22 >> 8) ^ uVar22;
  uVar12 = (uVar12 << 0x23 | uVar12 >> 0x1d) ^ (uVar12 << 0x38 | uVar12 >> 8) ^ uVar12;
  uVar12 = (uVar12 << 0x30 | uVar12 >> 0x10) ^ (uVar12 << 6 | uVar12 >> 0x3a) ^ uVar12;
  uVar16 = uVar12 << 0xc | uVar12 >> 0x34;
  uVar25 = uVar12 >> 0x20;
  uVar8 = uVar16 + uVar12;
  if (in_stack_00000028 + 0x976647b0 < uVar15 * 0x57f8ee14) {
    uVar8 = uVar16 ^ uVar12;
  }
  uVar22 = (uVar22 << 0x30 | uVar22 >> 0x10) ^ (uVar22 << 0x3e | uVar22 >> 2) ^ uVar22;
  uVar19 = uVar22 << 0x3c | uVar22 >> 4;
  uVar16 = uVar22 - uVar19;
  if (((in_stack_00000028 + 0x7f89087b) * 0x10 | in_stack_00000028 + 0x7f89087b >> 0x1c) <
      (0x7f5774de << bVar3 | 0x7f5774deU >> 0x20 - bVar3)) {
    uVar16 = uVar19 ^ uVar22;
  }
  uVar16 = uVar16 ^ (uVar22 << 0x20 | uVar22 >> 0x20);
  puVar24 = (uint64_t *)((uVar16 << 8 | uVar16 >> 0x38) ^ 0xffffffffb7828ed2);
  uVar22 = (uVar8 & 0xffffffff) * uVar25 +
           ((uVar8 >> 0x20) * uVar25 + (uVar12 & 0xffffffff) * (uVar8 & 0xffffffff) << 0x20);
  if (in_stack_00000028 == 0xa6864f75) {
    uVar22 = (uVar12 << 0x20 | uVar25) ^ uVar8;
  }
  uVar8 = uVar22 << 0x18 | uVar22 >> 0x28;
  uVar25 = puVar24[3];
  uVar12 = (uVar22 ^ uVar8) - uVar22;
  if (((in_stack_00000028 ^ 0xe236214) >> 1 |
      (uint32_t)(((in_stack_00000028 ^ 0xe236214) & 1) != 0) << 0x1f) != 0xee12ce0d) {
    uVar12 = uVar8;
  }
  pbVar17 = (uint8_t *)(uVar12 << 0x10 | uVar12 >> 0x30);
  if (uVar25 == 0) goto LAB_7fffa5624e10;
  pcVar10 = (char *)puVar24[2];
  if (pcVar10 == pcVar10 + puVar24[1] * 0x10 + 0x10) {
    if (puVar24[5] != 0) goto LAB_7fffa5624c31;
joined_r0x7fffa5624c1e:
    if (uVar25 == 0) goto LAB_7fffa5624e10;
  }
  else {
    pcVar20 = pcVar10 + puVar24[1] * 0x10;
    lVar18 = 0;
    while( true ) {
      auVar28[0] = -(*pcVar10 == '\0');
      auVar28[1] = -(pcVar10[1] == '\0');
      auVar28[2] = -(pcVar10[2] == '\0');
      auVar28[3] = -(pcVar10[3] == '\0');
      auVar28[4] = -(pcVar10[4] == '\0');
      auVar28[5] = -(pcVar10[5] == '\0');
      auVar28[6] = -(pcVar10[6] == '\0');
      auVar28[7] = -(pcVar10[7] == '\0');
      auVar28[8] = -(pcVar10[8] == '\0');
      auVar28[9] = -(pcVar10[9] == '\0');
      auVar28[10] = -(pcVar10[10] == '\0');
      auVar28[0xb] = -(pcVar10[0xb] == '\0');
      auVar28[0xc] = -(pcVar10[0xc] == '\0');
      auVar28[0xd] = -(pcVar10[0xd] == '\0');
      auVar28[0xe] = -(pcVar10[0xe] == '\0');
      auVar28[0xf] = -(pcVar10[0xf] == '\0');
      uVar23 = ((uint16_t)((uint16_t)(SUB161(auVar28 >> 7,0) & 1) |
                         (uint16_t)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                         (uint16_t)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                         (uint16_t)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                         (uint16_t)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                         (uint16_t)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                         (uint16_t)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                         (uint16_t)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                         (uint16_t)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                         (uint16_t)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                         (uint16_t)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                         (uint16_t)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                         (uint16_t)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                         (uint16_t)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                         (uint16_t)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                        (uint16_t)(auVar28[0xf] >> 7) << 0xf) ^ 0x7fff) &
               ((uint32_t)(pcVar10 != pcVar20) << 0xe | 0x3fff);
      if (uVar23 != 0) {
        do {
          uVar11 = 0;
          for (uVar4 = uVar23; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          uVar22 = (uint64_t)uVar11;
          puVar21 = *(uint32_t **)(uVar25 + uVar22 * 8);
          uVar12 = SUB168(ZEXT416(*puVar21) * ZEXT816(0x9e3779b97f4a7c15),8) ^
                   SUB168(ZEXT416(*puVar21) * ZEXT816(0x9e3779b97f4a7c15),0);
          uVar8 = uVar12 >> (*pbVar17 & 0x3f);
          lVar9 = *(int64_t *)(pbVar17 + 0x10) + uVar8 * 0x10;
          pcVar1 = (char *)(*(int64_t *)(pbVar17 + 0x10) + uVar8 * 0x10);
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
          uVar11 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar29 >> 7,0) & 1) |
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
          if (uVar11 == 0) {
            lVar13 = 1;
            while( true ) {
              *(uint8_t *)(lVar9 + 0xf) = *(uint8_t *)(lVar9 + 0xf) | '\x01' << ((uint8_t)uVar12 & 7);
              uVar8 = uVar8 + lVar13 & *(uint64_t *)(pbVar17 + 8);
              lVar9 = *(int64_t *)(pbVar17 + 0x10) + uVar8 * 0x10;
              pcVar1 = (char *)(*(int64_t *)(pbVar17 + 0x10) + uVar8 * 0x10);
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
              uVar11 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar27 >> 7,0) & 1) |
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
              if (uVar11 != 0) break;
              lVar13 = lVar13 + 1;
            }
            puVar21 = *(uint32_t **)(uVar25 + uVar22 * 8);
          }
          uVar4 = 0;
          for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          uVar2 = (&UNK_7fffa583edca)
                  [(uVar12 & 0xff) * 4 + (int64_t)(int)(in_stack_00000028 + 0x5978d1e1)];
          *(uint32_t **)(uVar8 * 0x78 + *(int64_t *)(pbVar17 + 0x18) + (uint64_t)uVar4 * 8) = puVar21;
          *(uint64_t *)(uVar25 + uVar22 * 8) = 0;
          *(uint8_t *)(lVar9 + (uint64_t)uVar4) = uVar2;
          lVar9 = *(int64_t *)(uVar25 + uVar22 * 8);
          if (lVar9 != 0) {
            uVar12 = *(uint64_t *)(lVar9 + 8);
            if (uVar12 != 0) {
              uVar11 = in_stack_00000028 + 0xb235c1d2 ^ 0x61e41bfc;
              uVar8 = (uint64_t)((uint32_t)uVar12 & 0x3d);
              if (uVar15 * -0x583a0178 < uVar11) {
                uVar8 = uVar12 >> 0x3d;
              }
              (*(code *)((int64_t)(int)~(in_stack_00000028 + 0x597a9b3e) + 0x7fffa56966e4))
                        (uVar11,uVar12 >> 0x3d,uVar8 ^ uVar12);
              *(uint8_t (*) [16])(lVar9 + 8) = (uint8_t  [16])0x0;
              *(uint64_t *)(lVar9 + 0x18) = 0;
            }
            (*(code *)((int64_t)(short)((uint16_t)in_stack_00000028 ^ 0xe8c7) + 0x7fffa568d47e))();
          }
          lVar18 = lVar18 + 1;
          uVar23 = uVar23 - 1 & uVar23;
        } while (uVar23 != 0);
      }
      if (pcVar10 == pcVar20) break;
      uVar25 = uVar25 + 0x78;
      pcVar10 = pcVar10 + 0x10;
    }
    uVar25 = puVar24[3];
    if (lVar18 == puVar24[5]) goto joined_r0x7fffa5624c1e;
LAB_7fffa5624c31:
    if (uVar25 == 0) goto LAB_7fffa5624e10;
    lVar18 = puVar24[1];
    pcVar10 = (char *)puVar24[2];
    if (pcVar10 != pcVar10 + lVar18 * 0x10 + 0x10) {
      pcVar20 = pcVar10;
      do {
        auVar30[0] = -(*pcVar20 == '\0');
        auVar30[1] = -(pcVar20[1] == '\0');
        auVar30[2] = -(pcVar20[2] == '\0');
        auVar30[3] = -(pcVar20[3] == '\0');
        auVar30[4] = -(pcVar20[4] == '\0');
        auVar30[5] = -(pcVar20[5] == '\0');
        auVar30[6] = -(pcVar20[6] == '\0');
        auVar30[7] = -(pcVar20[7] == '\0');
        auVar30[8] = -(pcVar20[8] == '\0');
        auVar30[9] = -(pcVar20[9] == '\0');
        auVar30[10] = -(pcVar20[10] == '\0');
        auVar30[0xb] = -(pcVar20[0xb] == '\0');
        auVar30[0xc] = -(pcVar20[0xc] == '\0');
        auVar30[0xd] = -(pcVar20[0xd] == '\0');
        auVar30[0xe] = -(pcVar20[0xe] == '\0');
        auVar30[0xf] = -(pcVar20[0xf] == '\0');
        for (uVar23 = ~(uint32_t)(uint16_t)((uint16_t)(SUB161(auVar30 >> 7,0) & 1) |
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
                                     (uint16_t)(auVar30[0xf] >> 7) << 0xf) &
                      ((uint32_t)(pcVar20 != pcVar10 + lVar18 * 0x10) << 0xe | 0x3fff); uVar23 != 0;
            uVar23 = uVar23 - 1 & uVar23) {
          uVar11 = 0;
          for (uVar4 = uVar23; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          uVar12 = *(uint64_t *)(uVar25 + (uint64_t)uVar11 * 8);
          if (uVar12 != 0) {
            uVar8 = *(uint64_t *)(uVar12 + 8);
            if (uVar8 != 0) {
              pcVar14 = (code *)((int64_t)(int)(uVar15 * 0x178a0e7d) + 0x7fffa5694a0f);
              (*pcVar14)(uVar15 * 0x178a0e7d,pcVar14,uVar8 >> 0x3d ^ uVar8);
              *(uint8_t (*) [16])(uVar12 + 8) = (uint8_t  [16])0x0;
              *(uint64_t *)(uVar12 + 0x18) = 0;
              uVar12 = *(uint64_t *)(uVar25 + (uint64_t)uVar11 * 8);
            }
            bVar3 = (uint8_t)in_stack_00000028 & 0x1f;
            pcVar14 = (code *)((int64_t)(short)((uint16_t)in_stack_00000028 + 0x6012) +
                              0x7fffa568cca9);
            uVar8 = uVar12 | 0x3d;
            if ((int64_t)(int)(~(in_stack_00000028 ^ 0x5069c117) * 0x7ffe03c1) <
                (int64_t)(uint64_t)(0x19391494 << bVar3 | 0x19391494U >> 0x20 - bVar3)) {
              uVar8 = uVar12 >> 0x3d;
            }
            (*pcVar14)(pcVar14,uVar12 >> 0x3d,uVar8 ^ uVar12);
          }
        }
        uVar25 = uVar25 + 0x78;
        bVar26 = pcVar20 != pcVar10 + lVar18 * 0x10;
        pcVar20 = pcVar20 + 0x10;
      } while (bVar26);
      uVar25 = puVar24[3];
      goto joined_r0x7fffa5624c1e;
    }
  }
  (*(code *)((int64_t)(int)(-0x597a4072 - in_stack_00000028) + 0x7fffa5690c17))
            (-0x597a4072 - in_stack_00000028,0x7fffa5690c17,uVar25 >> 0x3d ^ uVar25);
LAB_7fffa5624e10:
  uVar5 = *(uint64_t *)pbVar17;
  uVar6 = *(uint64_t *)(pbVar17 + 8);
  uVar7 = *(uint64_t *)(pbVar17 + 0x18);
  puVar24[2] = *(uint64_t *)(pbVar17 + 0x10);
  puVar24[3] = uVar7;
  *puVar24 = uVar5;
  puVar24[1] = uVar6;
  uVar25 = puVar24[1] * 0xf + 0xe;
  if (puVar24[3] == 0) {
    uVar25 = 0;
  }
  uVar12 = (uint64_t)((float)uVar25 * 0.875);
  uVar12 = (int64_t)((float)uVar25 * 0.875 - 9.223372e+18) & (int64_t)uVar12 >> 0x3f | uVar12;
  if (uVar25 < 0x1e) {
    uVar12 = uVar25;
  }
  puVar24[4] = uVar12;
  return;
}


// ============================================================================
// Function : FUN_7fffa5624ec0  |  RVA: 0xeb4ec0  |  Size: 715 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5624ec0(void)

{
  uint64_t uVar1;
  uint64_t in_RAX;
  uint8_t bVar2;
  uint32_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint8_t bVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  
  bRam00007fffa4785008 = 0;
  uRam00007fffa4785016 = 0;
  uRam00007fffa478501e = 0;
  uRam00007fffa4785026 = 0;
  _uRam00007fffa4785030 = 0;
  uVar1 = rdtsc();
  lVar4 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar1)) * 0xb88af56773431dc;
  uVar8 = 0;
  while( true ) {
    lVar5 = lVar4 * 0xb88af56773431dc + 0xb88af56773431dc;
    lVar4 = lVar5 * 0xb88af56773431dc + 0xb88af56773431dc;
    *(char *)(uVar8 + 0x7fffa4784ff9) = (char)((uint64_t)lVar4 >> 0x20);
    lVar6 = lVar4 * 0xb88af56773431dc + 0xb88af56773431dc;
    lVar4 = lVar6 * 0xb88af56773431dc + 0xb88af56773431dc;
    *(char *)(uVar8 + 0x7fffa4784ffb) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)((uVar8 | 2) + 0x7fffa4784ff8) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(uVar8 + 0x7fffa4784ff8) = (char)((uint64_t)lVar5 >> 0x20);
    if (uVar8 == 0x38) break;
    uVar8 = uVar8 + 4;
  }
  uVar3 = (uint32_t)bRam00007fffa4785008 * 0x33333334 + 0x33333334;
  uVar9 = (uint64_t)uVar3 * 4 + (uint64_t)uVar3;
  uVar8 = uVar9 >> 0x20;
  bVar7 = (uint8_t)uRam00007fffa4785030 ^ 0x48;
  *(uint8_t *)(uVar8 * 4 + 0x7fffa4785017) =
       (uRam00007fffa4785030._1_1_ ^ 0xf7) << 1 | (char)(uRam00007fffa4785030._1_1_ ^ 0xf7) < '\0';
  bVar2 = bRam00007fffa4785033 ^ 0x52;
  *(uint8_t *)(uVar8 * 4 + 0x7fffa4785016) = bVar7 << 1 | (char)bVar7 < '\0';
  *(uint8_t *)(uVar8 * 4 + 0x7fffa4785019) = bVar2 << 1 | (char)bVar2 < '\0';
  *(uint8_t *)(uVar8 * 4 + 0x7fffa4785018) =
       (bRam00007fffa4785032 ^ 0x1f) << 1 | (char)(bRam00007fffa4785032 ^ 0x1f) < '\0';
  bRam00007fffa4785008 = (char)(uVar9 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa562518c  |  RVA: 0xeb518c  |  Size: 144 bytes
// Callers  : FUN_7fffa5244e38@0xad4e38, FUN_7fffa54e557c@0xd7557c, FUN_7fffa5488508@0xd18508, FUN_7fffa52c4238@0xb54238
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

void FUN_7fffa562518c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ============================================================================
// Function : FUN_7fffa562521c  |  RVA: 0xeb521c  |  Size: 437 bytes
// Callers  : FUN_7fffa522496c@0xab496c
// Callees  : FUN_7fffa52c4078@0xb54078
// ============================================================================
int64_t FUN_7fffa562521c(uint16_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4,
                         int64_t param_5)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint16_t *puVar4;
  char *pcVar5;
  char cVar6;
  uint32_t auStackX_8 [2];
  
  pcVar5 = (char *)*param_2;
  puVar4 = param_1;
  if (param_1 == (uint16_t *)0x0) {
    lVar1 = 0;
    while( true ) {
      if (*pcVar5 == '\0') {
        cVar6 = '\x01';
      }
      else if (pcVar5[1] == '\0') {
        cVar6 = '\x02';
      }
      else {
        cVar6 = (pcVar5[2] != '\0') + '\x03';
      }
      lVar2 = FUN_7fffa52c4078(0,pcVar5,cVar6,param_4,param_5);
      if (lVar2 == -1) {
        *(uint8_t *)(param_5 + 0x30) = 1;
        *(uint32_t *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (lVar2 == 0) break;
      pcVar5 = pcVar5 + lVar2;
      lVar3 = lVar1 + 1;
      if (lVar2 != 4) {
        lVar3 = lVar1;
      }
      lVar1 = lVar3 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (*pcVar5 == '\0') {
        cVar6 = '\x01';
      }
      else if (pcVar5[1] == '\0') {
        cVar6 = '\x02';
      }
      else {
        cVar6 = (pcVar5[2] != '\0') + '\x03';
      }
      auStackX_8[0] = 0;
      lVar1 = FUN_7fffa52c4078(auStackX_8,pcVar5,cVar6,param_4,param_5);
      if (lVar1 == -1) {
        *param_2 = pcVar5;
        *(uint8_t *)(param_5 + 0x30) = 1;
        *(uint32_t *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (lVar1 == 0) {
        pcVar5 = (char *)0x0;
        *puVar4 = 0;
        break;
      }
      if (0xffff < auStackX_8[0]) {
        if (param_3 < 2) break;
        param_3 = param_3 - 1;
        *puVar4 = (uint16_t)(auStackX_8[0] - 0x10000 >> 10) | 0xd800;
        puVar4 = puVar4 + 1;
        auStackX_8[0] = (uint32_t)((uint16_t)(auStackX_8[0] - 0x10000) & 0x3ff | 0xdc00);
      }
      *puVar4 = (uint16_t)auStackX_8[0];
      pcVar5 = pcVar5 + lVar1;
      puVar4 = puVar4 + 1;
    }
    *param_2 = pcVar5;
    lVar1 = (int64_t)puVar4 - (int64_t)param_1 >> 1;
  }
  return lVar1;
}


// ============================================================================
// Function : Unwind@7fffa56253e0  |  RVA: 0xeb53e0  |  Size: 10 bytes
// Callers  : none
// Callees  : FUN_7fffa52c403c@0xb5403c
// ============================================================================
void Unwind_7fffa56253e0(void)

{
  code *pcVar1;
  
  FUN_7fffa52c403c();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa56253f0  |  RVA: 0xeb53f0  |  Size: 959 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56253f0(void)

{
  uint8_t bVar1;
  uint8_t bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  
  bRam00007fffa479c1f6 = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x1e] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x1f] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x20] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x21] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x22] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x23] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x24] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x25] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x26] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x27] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x28] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x29] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x2a] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x2b] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x2c] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x2d] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0xe] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0xf] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x10] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x11] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x12] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x13] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x14] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x15] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x16] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x17] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x18] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x19] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x1a] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x1b] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x1c] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x1d] = '\0';
  uRam00007fffa479c20c = 0;
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[6] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[7] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[8] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[9] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[10] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0xb] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0xc] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0xd] = '\0';
  uRam00007fffa479c1fc = 0;
  uRam00007fffa479c204 = 0;
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x34] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x35] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x36] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x37] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x38] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x39] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x3a] = '\0';
  s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x3b] = '\0';
  uVar7 = rdtsc();
  lVar6 = (CONCAT44(0x7fff,(int)(uVar7 >> 0x20)) << 0x20 | uVar7 & 0xffffffff) * 0xb1c992ae036822;
  lVar8 = 0;
  while( true ) {
    lVar6 = lVar6 * 0xb1c992ae036822 + 0xb1c992ae036822;
    lVar9 = lVar6 * 0xb1c992ae036822 + 0xb1c992ae036822;
    *(char *)(lVar8 + 0x7fffa479c1e9) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar8 + 0x7fffa479c1ea) = (char)((uint64_t)lVar9 >> 0x20);
    if (lVar8 == 0x68) break;
    lVar9 = lVar9 * 0xb1c992ae036822 + 0xb1c992ae036822;
    lVar6 = lVar9 * 0xb1c992ae036822 + 0xb1c992ae036822;
    *(char *)(lVar8 + 0x7fffa479c1eb) = (char)((uint64_t)lVar9 >> 0x20);
    *(char *)(lVar8 + 0x7fffa479c1ec) = (char)((uint64_t)lVar6 >> 0x20);
    lVar8 = lVar8 + 4;
  }
  bRam00007fffa479c1f6 = bRam00007fffa479c1f6 + 1 & 7;
  uVar7 = (uint64_t)bRam00007fffa479c1f6;
  cVar4 = s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x3a];
  cVar5 = s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x3b];
  cVar3 = s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x34];
  *(uint8_t *)(uVar7 * 8 + 0x7fffa479c201) =
       s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x39] << 4 |
       (uint8_t)s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x39] >> 4;
  bVar1 = s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x36] << 4;
  bVar2 = (uint8_t)s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x36] >> 4;
  *(uint8_t *)(uVar7 * 8 + 0x7fffa479c1fc) = cVar3 << 4 | (uint8_t)cVar3 >> 4;
  *(uint8_t *)(uVar7 * 8 + 0x7fffa479c1fe) = bVar1 | bVar2;
  bVar1 = s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x35] << 4;
  bVar2 = (uint8_t)s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x35] >> 4;
  *(uint8_t *)(uVar7 * 8 + 0x7fffa479c1ff) =
       s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x37] << 4 |
       (uint8_t)s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x37] >> 4;
  *(uint8_t *)(uVar7 * 8 + 0x7fffa479c1fd) = bVar1 | bVar2;
  *(uint8_t *)(uVar7 * 8 + 0x7fffa479c203) = cVar5 << 4 | (uint8_t)cVar5 >> 4;
  *(uint8_t *)(uVar7 * 8 + 0x7fffa479c202) = cVar4 << 4 | (uint8_t)cVar4 >> 4;
  *(uint8_t *)(uVar7 * 8 + 0x7fffa479c200) =
       s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x38] << 4 |
       (uint8_t)s_cccccccccccccccccccccccccccccccc_7fffa479c20e[0x38] >> 4;
  return;
}


// ============================================================================
// Function : FUN_7fffa56257b0  |  RVA: 0xeb57b0  |  Size: 546 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56257b0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  bRam00007fffa47865ab = '\0';
  uRam00007fffa47865c0 = 0;
  uRam00007fffa47865c8 = 0;
  uRam00007fffa47865b0 = 0;
  uRam00007fffa47865b8 = 0;
  uRam00007fffa47865d3 = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x3696af99ac2cd5e + 0xb;
  lVar4 = 3;
  while( true ) {
    lVar2 = lVar2 * 0x3696af99ac2cd5e + 0xb;
    lVar3 = lVar2 * 0x3696af99ac2cd5e + 0xb;
    *(char *)(lVar4 + 0x7fffa47865a0) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(lVar4 + 0x7fffa47865a1) = (char)((uint64_t)lVar3 >> 0x20);
    if (lVar4 == 0x3f) break;
    lVar3 = lVar3 * 0x3696af99ac2cd5e + 0xb;
    lVar2 = lVar3 * 0x3696af99ac2cd5e + 0xb;
    *(char *)(lVar4 + 0x7fffa47865a3) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(lVar4 + 0x7fffa47865a2) = (char)((uint64_t)lVar3 >> 0x20);
    lVar4 = lVar4 + 4;
  }
  bRam00007fffa47865ab = bRam00007fffa47865ab + 1 & 3;
  *(uint64_t *)((uint64_t)bRam00007fffa47865ab * 8 + 0x7fffa47865b0) = uRam00007fffa47865d3;
  return;
}


// ============================================================================
// Function : FUN_7fffa56259e0  |  RVA: 0xeb59e0  |  Size: 832 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56259e0(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  uint8_t bVar4;
  uint64_t uVar5;
  int64_t lVar6;
  
  uRam00007fffa47bf836 = 0;
  uRam00007fffa47bf869 = 0;
  uRam00007fffa47bf871 = 0;
  uRam00007fffa47bf859 = 0;
  uRam00007fffa47bf861 = 0;
  uRam00007fffa47bf849 = 0;
  uRam00007fffa47bf851 = 0;
  uRam00007fffa47bf839 = 0;
  uRam00007fffa47bf841 = 0;
  uRam00007fffa47bf889 = 0;
  uVar1 = rdtsc();
  lVar6 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x9f964354d224361 + 1;
  uVar5 = 0;
  while( true ) {
    lVar6 = lVar6 * 0x9f964354d224361 + 1;
    *(char *)(uVar5 + 0x7fffa47bf82e) = (char)((uint64_t)lVar6 >> 0x20);
    lVar6 = lVar6 * 0x9f964354d224361 + 1;
    *(char *)(uVar5 + 0x7fffa47bf82f) = (char)((uint64_t)lVar6 >> 0x20);
    lVar6 = lVar6 * 0x9f964354d224361 + 1;
    *(char *)(uVar5 + 0x7fffa47bf830) = (char)((uint64_t)lVar6 >> 0x20);
    if ((uVar5 << 0x31 | uVar5 >> 0xf) == 0xc8000000000000) break;
    lVar6 = lVar6 * 0x9f964354d224361 + 1;
    *(char *)(uVar5 + 0x7fffa47bf831) = (char)((uint64_t)lVar6 >> 0x20);
    uVar5 = uVar5 + 4;
  }
  bVar2 = (uint8_t)uVar5 & 0x1f;
  uVar3 = (uint16_t)uVar5 ^ 0x20e0;
  bVar4 = *(char *)((int64_t)(short)(uVar3 * 0x2640 | (uint16_t)(uVar3 * 0x99) >> 10) +
                   0x7fffa47c3f1b) + 1U & 7;
  *(uint64_t *)
   ((int64_t)(int)(0xfff30dffU >> bVar2 | -0xcf201 << 0x20 - bVar2) + 0x7fffa47cc75a +
   (uint64_t)bVar4 * 8) = 0;
  *(uint8_t *)((int64_t)(short)((((uint16_t)uVar5 + 1) * -0x4b63 ^ 0xfc6d) + 0xe5db) + 0x7fffa47c54bf) =
       bVar4;
  return;
}


// ============================================================================
// Function : FUN_7fffa5625d30  |  RVA: 0xeb5d30  |  Size: 168 bytes
// Callers  : none
// Callees  : none
// ============================================================================
char * FUN_7fffa5625d30(uint64_t *param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  
  lVar3 = -(int64_t)param_1;
  while (((uint64_t)param_1 & 7) != 0) {
    uVar1 = *param_1;
    param_1 = (uint64_t *)((int64_t)param_1 + 1);
    if ((char)uVar1 == '\0') goto LAB_7fffa5625da8;
  }
  do {
    do {
      puVar2 = param_1;
      param_1 = puVar2 + 1;
    } while (((~*puVar2 ^ *puVar2 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    uVar1 = *puVar2;
    if ((char)uVar1 == '\0') {
      return (char *)((int64_t)puVar2 + lVar3);
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (char *)((int64_t)puVar2 + lVar3 + 1);
    }
    if ((char)(uVar1 >> 0x10) == '\0') {
      return (char *)((int64_t)puVar2 + lVar3 + 2);
    }
    if ((char)(uVar1 >> 0x18) == '\0') {
      return (char *)((int64_t)puVar2 + lVar3 + 3);
    }
    if ((char)(uVar1 >> 0x20) == '\0') {
      return (char *)((int64_t)puVar2 + lVar3 + 4);
    }
    if ((char)(uVar1 >> 0x28) == '\0') {
      return (char *)((int64_t)puVar2 + lVar3 + 5);
    }
    if ((char)(uVar1 >> 0x30) == '\0') {
      return (char *)((int64_t)puVar2 + lVar3 + 6);
    }
  } while ((char)(uVar1 >> 0x38) != '\0');
LAB_7fffa5625da8:
  return (char *)((int64_t)param_1 + lVar3 + -1);
}


// ============================================================================
// Function : FUN_7fffa5625de0  |  RVA: 0xeb5de0  |  Size: 558 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5625de0(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint8_t bVar8;
  
  uRam00007fffa47862cd = 0;
  uRam00007fffa47862ec = 0;
  uRam00007fffa47862f4 = 0;
  uRam00007fffa47862dc = 0;
  uRam00007fffa47862e4 = 0;
  uRam00007fffa4786307 = 0;
  uVar1 = rdtsc();
  lVar6 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x471cffe1d12f0e2;
  uVar5 = 0;
  do {
    lVar6 = lVar6 * 0x471cffe1d12f0e2 + 0x471cffe1d12f0e2;
    *(char *)(uVar5 + 0x7fffa47862bd) = (char)((uint64_t)lVar6 >> 0x20);
    lVar7 = lVar6 * 0x471cffe1d12f0e2 + 0x471cffe1d12f0e2;
    lVar6 = lVar7 * 0x471cffe1d12f0e2 + 0x471cffe1d12f0e2;
    *(char *)(uVar5 + 0x7fffa47862bf) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(uVar5 + 0x7fffa47862be) = (char)((uint64_t)lVar7 >> 0x20);
    uVar5 = uVar5 + 3;
  } while (((uVar5 * 0x4000000 | uVar5 >> 0x26) - 0x11ba0ce5) * 0x3e1e21ad83cdab6f !=
           -0x7fb8054630a98e4b);
  bVar2 = (uint8_t)uVar5 & 0xf;
  bVar3 = (uint8_t)uVar5 & 0xf;
  uVar4 = (uint32_t)uVar5 | 1;
  bVar8 = *(char *)((int64_t)(int)~((uint32_t)uVar5 + 0xd0a4) + 0x7fffa47933c0) + 1U & 7;
  *(uint32_t *)((int64_t)(int)(uVar4 * -0x23a54608 | uVar4 * 0x7716ae7e >> 0x1e) + 0x7fffa478ff52 +
           (uint64_t)bVar8 * 4) =
       *(uint32_t *)((int64_t)(short)(-0x436e << bVar3 | 0xbc92U >> 0x10 - bVar3) + 0x7fffa478b3e3) ^
       0x484f770c;
  *(uint8_t *)((int64_t)(short)(0x54ba << bVar2 | 0x54baU >> 0x10 - bVar2) + 0x7fffa478cd9f) = bVar8;
  return;
}


// ============================================================================
// Function : FUN_7fffa5626010  |  RVA: 0xeb6010  |  Size: 1668 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5626010(uint64_t param_1,uint64_t param_2,uint32_t param_3)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t auVar3 [16];
  uint16_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint16_t uVar9;
  uint32_t uVar10;
  uint8_t bVar11;
  uint8_t bVar12;
  int64_t lVar13;
  code *pcVar14;
  uint32_t uVar15;
  uint64_t uVar16;
  char *pcVar17;
  int64_t lVar18;
  uint64_t uVar19;
  int64_t lVar20;
  char *pcVar21;
  uint64_t uVar22;
  int64_t in_R11;
  uint64_t *puVar23;
  uint8_t *pbVar24;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint64_t uVar29;
  
  uVar29 = in_R11 + (uint64_t)(param_3 + 0xefc51ab8);
  uVar29 = (uVar29 * 0x800 | uVar29 >> 0x35) ^ (uVar29 * 0x8000000 | uVar29 >> 0x25) ^ uVar29;
  uVar16 = *(uint64_t *)((int64_t)(int)((param_3 | 1) * 0xd25f236) + 0x7fffa478d9b6);
  pbVar24 = (uint8_t *)((uVar29 << 0x16 | uVar29 >> 0x2a) ^ (uVar29 << 0x36 | uVar29 >> 10) ^ uVar29);
  bVar11 = (uint8_t)param_3;
  if (uVar16 == 0) goto LAB_7fffa5626572;
  pcVar17 = *(char **)((int64_t)(int)(param_3 ^ 0xa76efc2) + 0x7fffa4789ae7);
  lVar20 = *(int64_t *)
            ((int64_t)(int)(0xc7fff9a2U >> (bVar11 & 0x1f) | -0x3800065e << 0x20 - (bVar11 & 0x1f))
            + 0x7fffa478df40) * 0x10;
  uVar9 = (uint16_t)param_3;
  if (pcVar17 == pcVar17 + lVar20 + 0x10) {
    lVar20 = 0;
  }
  else {
    pcVar21 = pcVar17 + lVar20;
    lVar20 = 0;
    while( true ) {
      auVar25[0] = -(*pcVar17 == '\0');
      auVar25[1] = -(pcVar17[1] == '\0');
      auVar25[2] = -(pcVar17[2] == '\0');
      auVar25[3] = -(pcVar17[3] == '\0');
      auVar25[4] = -(pcVar17[4] == '\0');
      auVar25[5] = -(pcVar17[5] == '\0');
      auVar25[6] = -(pcVar17[6] == '\0');
      auVar25[7] = -(pcVar17[7] == '\0');
      auVar25[8] = -(pcVar17[8] == '\0');
      auVar25[9] = -(pcVar17[9] == '\0');
      auVar25[10] = -(pcVar17[10] == '\0');
      auVar25[0xb] = -(pcVar17[0xb] == '\0');
      auVar25[0xc] = -(pcVar17[0xc] == '\0');
      auVar25[0xd] = -(pcVar17[0xd] == '\0');
      auVar25[0xe] = -(pcVar17[0xe] == '\0');
      auVar25[0xf] = -(pcVar17[0xf] == '\0');
      for (uVar15 = ~(uint32_t)(uint16_t)((uint16_t)(SUB161(auVar25 >> 7,0) & 1) |
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
                                   (uint16_t)(auVar25[0xf] >> 7) << 0xf) &
                    ((uint32_t)(pcVar17 != pcVar21) << 0xe | 0x3fff); uVar15 != 0;
          uVar15 = uVar15 - 1 & uVar15) {
        uVar10 = 0;
        for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar22 = (uint64_t)uVar10;
        puVar23 = *(uint64_t **)(uVar16 + uVar22 * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (*puVar23 >> 3) + *puVar23;
        uVar29 = SUB168(auVar3 * ZEXT816(0x9e3779b97f4a7c15),8) ^
                 SUB168(auVar3 * ZEXT816(0x9e3779b97f4a7c15),0);
        uVar19 = uVar29 >> (*pbVar24 & 0x3f);
        lVar18 = *(int64_t *)(pbVar24 + 0x10) + uVar19 * 0x10;
        pcVar1 = (char *)(*(int64_t *)(pbVar24 + 0x10) + uVar19 * 0x10);
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
        uVar4 = (uint16_t)(SUB161(auVar26 >> 7,0) & 1) | (uint16_t)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
                (uint16_t)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe;
        uVar10 = (uint32_t)uVar4;
        if (uVar4 == (uint16_t)((-0x6885 - uVar9) * 2 | (uint16_t)((short)(-0x6885 - uVar9) < 0))) {
          bVar12 = (uint8_t)uVar29 & 7;
          if (0xb5899b9f - param_3 <
              ((0x6a7d44fc - param_3) * 0x4000000 | 0x6a7d44fc - param_3 >> 6)) {
            bVar12 = (uint8_t)uVar29 * '\a';
          }
          lVar13 = 1;
          do {
            *(uint8_t *)(lVar18 + 0xf) = *(uint8_t *)(lVar18 + 0xf) | '\x01' << (bVar12 & 0x1f);
            uVar19 = uVar19 + lVar13 & *(uint64_t *)(pbVar24 + 8);
            lVar18 = *(int64_t *)(pbVar24 + 0x10) + uVar19 * 0x10;
            pcVar1 = (char *)(*(int64_t *)(pbVar24 + 0x10) + uVar19 * 0x10);
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
            lVar13 = lVar13 + 1;
          } while (uVar10 == 0);
          puVar23 = *(uint64_t **)(uVar16 + uVar22 * 8);
        }
        uVar5 = 0;
        for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar2 = (&UNK_7fffa5832d06)
                [(uVar29 & 0xff) * 4 + (int64_t)(short)((uVar9 ^ 0x1a99) * 0x63dd)];
        *(uint64_t **)(uVar19 * 0x78 + *(int64_t *)(pbVar24 + 0x18) + (uint64_t)uVar5 * 8) =
             puVar23;
        *(uint64_t *)(uVar16 + uVar22 * 8) = 0;
        *(uint8_t *)(lVar18 + (uint64_t)uVar5) = uVar2;
        uVar29 = *(uint64_t *)(uVar16 + uVar22 * 8);
        if (uVar29 != 0) {
          pcVar14 = (code *)((int64_t)(short)~(uVar9 ^ 0xb02b) + 0x7fffa568a381);
          (*pcVar14)(&UNK_7fffa5832d06,pcVar14,uVar29 >> 0x3d ^ uVar29);
        }
        lVar20 = lVar20 + 1;
      }
      if (pcVar17 == pcVar21) break;
      pcVar17 = pcVar17 + 0x10;
      uVar16 = uVar16 + 0x78;
    }
    uVar16 = *(uint64_t *)((int64_t)(short)((uVar9 | 1) * 0x586d) + 0x7fffa4784c49);
  }
  if (lVar20 == *(int64_t *)
                 ((int64_t)
                  (short)((-0x1e3c << (bVar11 & 0xf) | 0xe1c4U >> 0x10 - (bVar11 & 0xf)) + 0xcd86) +
                 0x7fffa4781f24)) {
LAB_7fffa562652f:
    if (uVar16 == 0) goto LAB_7fffa5626572;
  }
  else {
    if (uVar16 == 0) goto LAB_7fffa5626572;
    pcVar17 = *(char **)((int64_t)(int)(param_3 + 0xa75b90e) + 0x7fffa478c317);
    lVar20 = *(int64_t *)
              (((int64_t)(short)((uVar9 ^ 0xbba4) * 0xd73) ^ 0xfffffffffffff5d9U) + 0x7fffa47884a4)
             * 0x10;
    if (pcVar17 != pcVar17 + lVar20 + 0x10) {
      pcVar21 = pcVar17 + lVar20;
      while( true ) {
        auVar28[0] = -(*pcVar17 == '\0');
        auVar28[1] = -(pcVar17[1] == '\0');
        auVar28[2] = -(pcVar17[2] == '\0');
        auVar28[3] = -(pcVar17[3] == '\0');
        auVar28[4] = -(pcVar17[4] == '\0');
        auVar28[5] = -(pcVar17[5] == '\0');
        auVar28[6] = -(pcVar17[6] == '\0');
        auVar28[7] = -(pcVar17[7] == '\0');
        auVar28[8] = -(pcVar17[8] == '\0');
        auVar28[9] = -(pcVar17[9] == '\0');
        auVar28[10] = -(pcVar17[10] == '\0');
        auVar28[0xb] = -(pcVar17[0xb] == '\0');
        auVar28[0xc] = -(pcVar17[0xc] == '\0');
        auVar28[0xd] = -(pcVar17[0xd] == '\0');
        auVar28[0xe] = -(pcVar17[0xe] == '\0');
        auVar28[0xf] = -(pcVar17[0xf] == '\0');
        for (uVar15 = ~(uint32_t)(uint16_t)((uint16_t)(SUB161(auVar28 >> 7,0) & 1) |
                                      (uint16_t)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                      (uint16_t)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                      (uint16_t)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                      (uint16_t)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                      (uint16_t)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                      (uint16_t)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                      (uint16_t)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                      (uint16_t)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                      (uint16_t)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                      (uint16_t)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                      (uint16_t)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                      (uint16_t)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                      (uint16_t)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                      (uint16_t)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                     (uint16_t)(auVar28[0xf] >> 7) << 0xf) &
                      ((uint32_t)(pcVar17 != pcVar21) << 0xe | 0x3fff); uVar15 != 0;
            uVar15 = uVar15 - 1 & uVar15) {
          uVar10 = 0;
          for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar10 = uVar10 + 1;
          }
          uVar29 = *(uint64_t *)(uVar16 + (uint64_t)uVar10 * 8);
          if (uVar29 != 0) {
            uVar19 = uVar29 >> 0x3d;
            if ((0x57d5234b - param_3 ^ 0x1db58904) < (param_3 ^ 0x4fbaa63f) + 0xbcb8d75c) {
              uVar19 = uVar29 - 0x3d;
            }
            (*(code *)(&UNK_7fffa5690371 +
                      (int)(0xfffffbc5U >> (bVar11 & 0x1f) | -0x43b << 0x20 - (bVar11 & 0x1f))))
                      (&UNK_7fffa5690371 +
                       (int)(0xfffffbc5U >> (bVar11 & 0x1f) | -0x43b << 0x20 - (bVar11 & 0x1f)),
                       uVar29,uVar19 ^ uVar29);
          }
        }
        if (pcVar17 == pcVar21) break;
        uVar16 = uVar16 + 0x78;
        pcVar17 = pcVar17 + 0x10;
      }
      uVar16 = *(uint64_t *)((int64_t)(int)((param_3 ^ 0x15d1e9c) * 0x3c4b6983) + 0x7fffa478c373);
      goto LAB_7fffa562652f;
    }
  }
  pcVar14 = (code *)((int64_t)
                     (int)(-0x16b5c1 << (bVar11 & 0x1f) | 0xffe94a3fU >> 0x20 - (bVar11 & 0x1f)) +
                    0x7fffa56931df);
  (*pcVar14)(param_3,pcVar14,uVar16 >> 0x3d ^ uVar16);
LAB_7fffa5626572:
  lVar20 = (int64_t)(short)~(0x2283U >> (bVar11 & 0xf) | 0x2283 << 0x10 - (bVar11 & 0xf));
  uVar6 = *(uint64_t *)pbVar24;
  uVar7 = *(uint64_t *)(pbVar24 + 8);
  uVar8 = *(uint64_t *)(pbVar24 + 0x18);
  *(uint64_t *)(lVar20 + 0x7fffa4786405) = *(uint64_t *)(pbVar24 + 0x10);
  *(uint64_t *)(lVar20 + 0x7fffa478640d) = uVar8;
  *(uint64_t *)(lVar20 + 0x7fffa47863f5) = uVar6;
  *(uint64_t *)(lVar20 + 0x7fffa47863fd) = uVar7;
  uVar16 = *(int64_t *)((int64_t)(int)(-0xa773c08 - param_3) + 0x7fffa478e71b) * 0xf + 0xe;
  if (*(int64_t *)
       (((int64_t)(int)((param_3 + 0x275685a5) * 0x46645dbf) ^ 0xffffffffe9b53454U) +
       0x7fffa478a4f4) == 0) {
    uVar16 = 0;
  }
  uVar29 = (uint64_t)((float)uVar16 * 0.875);
  uVar29 = (int64_t)((float)uVar16 * 0.875 - 9.223372e+18) & (int64_t)uVar29 >> 0x3f | uVar29;
  if (uVar16 < 0x1e) {
    uVar29 = uVar16;
  }
  *(uint64_t *)
   ((int64_t)(short)(-0x632a << (bVar11 & 0xf) | 0x9cd6U >> 0x10 - (bVar11 & 0xf)) + 0x7fffa4785eca
   ) = uVar29;
  return;
}


// ============================================================================
// Function : FUN_7fffa56266a0  |  RVA: 0xeb66a0  |  Size: 25 bytes
// Callers  : FUN_7fffa52c403c@0xb5403c, FUN_7fffa569b130@0xf2b130, FUN_7fffa4d03fd8@0x593fd8, FUN_7fffa564c60d@0xedc60d, FUN_7fffa5281ce4@0xb11ce4, FUN_7fffa50082d0@0x8982d0, FUN_7fffa4ecfc70@0x75fc70, FUN_7fffa54e6ac4@0xd76ac4
// Callees  : FUN_7fffa4f5c658@0x7ec658, FUN_7fffa524fccc@0xadfccc
// ============================================================================
void FUN_7fffa56266a0(void)

{
  code *pcVar1;
  int64_t lVar2;
  
  lVar2 = FUN_7fffa4f5c658();
  if (lVar2 == 0) {
    FUN_7fffa524fccc();
    pcVar1 = (code *)__debugbreak();
    (*pcVar1)();
    return;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa56266c0  |  RVA: 0xeb66c0  |  Size: 5309 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa56266c0(void) {
    /* +0xeb66c0 */ __asm { PUSH RBX }
    /* +0xeb66c1 */ __asm { PUSH RBP }
    /* +0xeb66c2 */ __asm { PUSH R12 }
    /* +0xeb66c4 */ __asm { PUSH R15 }
    /* +0xeb66c6 */ __asm { PUSH RDI }
    /* +0xeb66c7 */ __asm { PUSH R14 }
    /* +0xeb66c9 */ __asm { PUSH RSI }
    /* +0xeb66ca */ __asm { PUSH R13 }
    /* +0xeb66cc */ __asm { SUB RSP,0x118 }
    /* +0xeb66d3 */ __asm { MOVDQA xmmword ptr [RSP + 0x100],XMM10 }
    /* +0xeb66dd */ __asm { MOV qword ptr [RSP + 0x70],RDX }
    /* +0xeb66e2 */ __asm { MOV EBP,0xc4c14de7 }
    /* +0xeb66e7 */ __asm { MOV R11,-0x5e6ffa5b }
    /* +0xeb66ee */ __asm { LEA R10,[RBP + 0x3e54bfa] }
    /* +0xeb66f5 */ __asm { XOR R10,R11 }
    /* +0xeb66f8 */ __asm { MOV RAX,RAX }
    /* +0xeb66fb */ __asm { MOV R9,R9 }
    /* +0xeb66fe */ __asm { MOVQ XMM3,RAX }
    /* +0xeb6703 */ __asm { MOV R8D,0xef2bd602 }
    /* +0xeb6709 */ __asm { MOV R13,R13 }
    /* +0xeb670c */ __asm { MOV RSI,R13 }
    /* +0xeb670f */ __asm { NOT RSI }
    /* +0xeb6712 */ __asm { MOV R11,R13 }
    /* +0xeb6715 */ __asm { MOV RDX,R9 }
    /* +0xeb6718 */ __asm { NOT RDX }
    /* +0xeb671b */ __asm { MOV RBX,RSI }
    /* +0xeb671e */ __asm { OR RBX,RDX }
    /* +0xeb6721 */ __asm { AND RDX,R13 }
    /* +0xeb6724 */ __asm { OR R13,RAX }
    /* +0xeb6727 */ __asm { MOV R15,-0x154d5bb5d }
    /* +0xeb6731 */ __asm { ADD R15,RBP }
    /* +0xeb6734 */ __asm { ADD R15,-0x6b4f646 }
    /* +0xeb673b */ __asm { AND R11,R9 }
    /* +0xeb673e */ __asm { XOR R11,RAX }
    /* +0xeb6741 */ __asm { IMUL R11,R15 }
    /* +0xeb6745 */ __asm { MOV R12,R9 }
    /* +0xeb6748 */ __asm { XOR R12,RSI }
    /* +0xeb674b */ __asm { OR RSI,R9 }
    /* +0xeb674e */ __asm { XOR RSI,RAX }
    /* +0xeb6751 */ __asm { MOV R15,RAX }
    /* +0xeb6754 */ __asm { OR R15,RDX }
    /* +0xeb6757 */ __asm { AND RDX,RAX }
    /* +0xeb675a */ __asm { NOT RAX }
    /* +0xeb675d */ __asm { NOT R13 }
    /* +0xeb6760 */ __asm { MOVQ XMM5,RBX }
    /* +0xeb6765 */ __asm { PXOR XMM5,XMM3 }
    /* +0xeb6769 */ __asm { AND R12,RAX }
    /* +0xeb676c */ __asm { AND R13,R9 }
    /* +0xeb676f */ __asm { ADD R13,R12 }
    /* +0xeb6772 */ __asm { IMUL R9,R15,0x2107f1ff }
    /* +0xeb6779 */ __asm { IMUL RDX,RDX,0x28370863 }
    /* +0xeb6780 */ __asm { ADD RDX,R9 }
    /* +0xeb6783 */ __asm { IMUL R9,R13,0x493efa62 }
    /* +0xeb678a */ __asm { ADD R9,RDX }
    /* +0xeb678d */ __asm { ADD R9,R11 }
    /* +0xeb6790 */ __asm { IMUL R8D,R8D,0x6ace526b }
    /* +0xeb6797 */ __asm { ADD R8D,0xcc4de0c7 }
    /* +0xeb679e */ __asm { MOVSXD R11,R8D }
    /* +0xeb67a1 */ __asm { IMUL R11,RSI }
    /* +0xeb67a5 */ __asm { MOVQ RBX,XMM5 }
    /* +0xeb67aa */ __asm { IMUL RBX,R10 }
    /* +0xeb67ae */ __asm { ADD RBX,R9 }
    /* +0xeb67b1 */ __asm { ADD RBX,R11 }
    /* +0xeb67b4 */ __asm { MOV dword ptr [RSP + 0x98],0x94a4a100 }
    /* +0xeb67bf */ __asm { MOV R10D,dword ptr [RSP + 0x98] }
    /* +0xeb67c7 */ __asm { CMP R10D,0xdaeea8ca }
    /* +0xeb67ce */ __asm { JNC 0x7fffa56282b0 }
    /* +0xeb67d4 */ __asm { MOV dword ptr [RSP + 0x98],0xfb9d0e3f }
    /* +0xeb67df */ __asm { MOV R10D,dword ptr [RSP + 0x98] }
    /* +0xeb67e7 */ __asm { MOV R11W,0xa4e9 }
    /* +0xeb67ec */ __asm { LEA R10D,[RBX + R11*0x1] }
    /* +0xeb67f0 */ __asm { ADD R10D,0xffffe9ba }
    /* +0xeb67f7 */ __asm { MOVZX R10D,R10W }
    /* +0xeb67fb */ __asm { MOV R10,qword ptr GS:[R10] }
    /* +0xeb67ff */ __asm { TEST RCX,RCX }
    /* +0xeb6802 */ __asm { MOV R8,RCX }
    /* +0xeb6805 */ __asm { MOV qword ptr [RSP + 0x48],RCX }
    /* +0xeb680a */ __asm { JZ 0x7fffa56269de }
    /* +0xeb6810 */ __asm { MOV R10D,dword ptr [R8 + 0x3c] }
    /* +0xeb6814 */ __asm { ADD R10,R8 }
    /* +0xeb6817 */ __asm { JZ 0x7fffa56282c4 }
    /* +0xeb681d */ __asm { MOV R8W,0x5e21 }
    /* +0xeb6822 */ __asm { ADD R8D,0xffffa35f }
    /* +0xeb6829 */ __asm { MOV ECX,EBX }
    /* +0xeb682b */ __asm { ROL R8W,CL }
    /* +0xeb682f */ __asm { MOVZX ECX,R8W }
    /* +0xeb6833 */ __asm { MOV RCX,qword ptr GS:[RCX] }
    /* +0xeb6837 */ __asm { MOV RCX,qword ptr [RCX + 0xfe8] }
    /* +0xeb683e */ __asm { MOV R8W,0xc3bb }
    /* +0xeb6843 */ __asm { IMUL R8D,R8D,0x277 }
    /* +0xeb684a */ __asm { SUB R8D,EBX }
    /* +0xeb684d */ __asm { MOVZX R9D,R8W }
    /* +0xeb6851 */ __asm { MOV R11,qword ptr GS:[R9] }
    /* +0xeb6855 */ __asm { ADD RCX,qword ptr [R11 + 0x370] }
    /* +0xeb685c */ __asm { MOV R11,-0x5d293fd390ef0015 }
    /* +0xeb6866 */ __asm { CMP RCX,R11 }
    /* +0xeb6869 */ __asm { NOP }
    /* +0xeb686a */ __asm { NOP }
    /* +0xeb686b */ __asm { NOP }
    /* +0xeb686c */ __asm { NOP }
    /* +0xeb686d */ __asm { NOP }
    /* +0xeb686e */ __asm { NOP }
    /* +0xeb686f */ __asm { NOP }
    /* +0xeb6870 */ __asm { NOP }
    /* +0xeb6871 */ __asm { NOP }
    /* +0xeb6872 */ __asm { NOP }
    /* +0xeb6873 */ __asm { NOP }
    /* +0xeb6874 */ __asm { NOP }
    /* +0xeb6875 */ __asm { NOP }
    /* +0xeb6876 */ __asm { NOP }
    /* +0xeb6877 */ __asm { NOP }
    /* +0xeb6878 */ __asm { NOP }
    /* +0xeb6879 */ __asm { NOP }
    /* +0xeb69de */ __asm { XOR R14D,R14D }
    /* +0xeb69e1 */ __asm { MOV RSI,RDI }
    /* +0xeb69e4 */ __asm { SHR RSI,0x20 }
    /* +0xeb69e8 */ __asm { ADD ESI,EDI }
    /* +0xeb69ea */ __asm { XOR R13D,R13D }
    /* +0xeb69ed */ __asm { XOR R9D,R9D }
    /* +0xeb69f0 */ __asm { MOV qword ptr [RSP + 0xd0],RDI }
    /* +0xeb69f8 */ __asm { CMP R13,R14 }
    /* +0xeb69fb */ __asm { JNZ 0x7fffa5626c59 }
    /* +0xeb6a01 */ __asm { TEST R9,R9 }
    /* +0xeb6a04 */ __asm { JNZ 0x7fffa56273c6 }
    /* +0xeb6a0a */ __asm { MOV dword ptr [RSP + 0x98],0x84900910 }
    /* +0xeb6a15 */ __asm { MOV ECX,dword ptr [RSP + 0x98] }
    /* +0xeb6a1c */ __asm { CMP ECX,0x31d1575d }
    /* +0xeb6a22 */ __asm { JBE 0x7fffa56282b8 }
    /* +0xeb6a28 */ __asm { MOV CX,0xb5a2 }
    /* +0xeb6a2c */ __asm { MOV R10D,0xffffb8a2 }
    /* +0xeb6a32 */ __asm { SUB R10D,ECX }
    /* +0xeb6a35 */ __asm { MOV ECX,EBX }
    /* +0xeb6a37 */ __asm { ROL R10W,CL }
    /* +0xeb6a3b */ __asm { MOV dword ptr [RSP + 0x98],0xdd92607b }
    /* +0xeb6a46 */ __asm { MOV ECX,dword ptr [RSP + 0x98] }
    /* +0xeb6a4d */ __asm { MOVZX ECX,R10W }
    /* +0xeb6a51 */ __asm { MOV R10,qword ptr GS:[RCX] }
    /* +0xeb6a55 */ __asm { TEST R8,R8 }
    /* +0xeb6a58 */ __asm { JZ 0x7fffa5626e5e }
    /* +0xeb6a5e */ __asm { MOV R10D,dword ptr [R8 + 0x3c] }
    /* +0xeb6a62 */ __asm { ADD R10,R8 }
    /* +0xeb6a65 */ __asm { MOV CX,0x8e43 }
    /* +0xeb6a69 */ __asm { ADD ECX,EBX }
    /* +0xeb6a6b */ __asm { IMUL ECX,ECX,0x161 }
    /* +0xeb6a71 */ __asm { ROL CX,0x7 }
    /* +0xeb6a75 */ __asm { MOVZX ECX,CX }
    /* +0xeb6a78 */ __asm { CMP R10,RCX }
    /* +0xeb6a7b */ __asm { JZ 0x7fffa56282d1 }
    /* +0xeb6a81 */ __asm { MOV ECX,EBX }
    /* +0xeb6a83 */ __asm { OR ECX,0x1 }
    /* +0xeb6a86 */ __asm { MOV R8W,0x9783 }
    /* +0xeb6a8b */ __asm { ADD R8D,0x7b79 }
    /* +0xeb6a92 */ __asm { ROL R8W,0x2 }
    /* +0xeb6a97 */ __asm { IMUL R8D,ECX }
    /* +0xeb6a9b */ __asm { MOVZX R9D,R8W }
    /* +0xeb6a9f */ __asm { MOV R11,qword ptr GS:[R9] }
    /* +0xeb6aa3 */ __asm { MOV R9W,0x7564 }
    /* +0xeb6aa8 */ __asm { LEA EAX,[R9 + R9*0x8] }
    /* +0xeb6aac */ __asm { LEA R8D,[RAX + RAX*0x2] }
    /* +0xeb6ab0 */ __asm { ADD R9D,R9D }
    /* +0xeb6ab3 */ __asm { MOV R11,qword ptr [R11 + 0xfe8] }
    /* +0xeb6aba */ __asm { ADD R9D,EBX }
    /* +0xeb6abd */ __asm { ADD R9D,R8D }
    /* +0xeb6ac0 */ __asm { MOVZX R9D,R9W }
    /* +0xeb6ac4 */ __asm { XOR R9,0xbe21 }
    /* +0xeb6acb */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0xeb6acf */ __asm { ADD R11,qword ptr [R9 + 0x370] }
    /* +0xeb6ad6 */ __asm { MOV R9,0x63e55c6fdef7bdf }
    /* +0xeb6ae0 */ __asm { IMUL R9,R11 }
    /* +0xeb6ae4 */ __asm { ADD R9,-0x70a63f14 }
    /* +0xeb6aeb */ __asm { XOR R9,0x2e5b45c2 }
    /* +0xeb6af2 */ __asm { MOV R11,0x63af349d8bd8d263 }
    /* +0xeb6afc */ __asm { CMP R9,R11 }
    /* +0xeb6aff */ __asm { NOP }
    /* +0xeb6b00 */ __asm { NOP }
    /* +0xeb6b01 */ __asm { NOP }
    /* +0xeb6b02 */ __asm { NOP }
    /* +0xeb6b03 */ __asm { NOP }
    /* +0xeb6b04 */ __asm { MOV RDX,qword ptr [R10 + 0x88] }
    /* +0xeb6b0b */ __asm { MOV qword ptr [RSP + 0x60],0x0 }
    /* +0xeb6b14 */ __asm { MOV R10,RDX }
    /* +0xeb6b17 */ __asm { SHR R10,0x20 }
    /* +0xeb6b1b */ __asm { MOV R8,qword ptr [RSP + 0x48] }
    /* +0xeb6b20 */ __asm { JZ 0x7fffa56273c1 }
    /* +0xeb6b26 */ __asm { MOV R11D,EDX }
    /* +0xeb6b29 */ __asm { TEST R11,R11 }
    /* +0xeb6b2c */ __asm { JZ 0x7fffa56273c1 }
    /* +0xeb6b32 */ __asm { NOP }
    /* +0xeb6b34 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xeb6b3b */ __asm { MOV R10,0x0 }
    /* +0xeb6b42 */ __asm { PUSHFQ }
    /* +0xeb6b43 */ __asm { POP R10 }
    /* +0xeb6b45 */ __asm { TEST R10D,0x100 }
    /* +0xeb6b4c */ __asm { NOP }
    /* +0xeb6b4d */ __asm { NOP }
    /* +0xeb6b4e */ __asm { NOP }
    /* +0xeb6b4f */ __asm { NOP }
    /* +0xeb6b50 */ __asm { NOP }
    /* +0xeb6b51 */ __asm { NOP }
    /* +0xeb6b52 */ __asm { NOP }
    /* +0xeb6b53 */ __asm { NOP }
    /* +0xeb6b54 */ __asm { NOP }
    /* +0xeb6b55 */ __asm { MOV dword ptr [RSP + 0x98],0xaa54569c }
    /* +0xeb6b60 */ __asm { MOV R10D,dword ptr [RSP + 0x98] }
    /* +0xeb6b68 */ __asm { TEST R10D,R10D }
    /* +0xeb6b6b */ __asm { JNS 0x7fffa56282ec }
    /* +0xeb6b71 */ __asm { MOV R10W,0x9d80 }
    /* +0xeb6b76 */ __asm { IMUL ECX,R10D }
    /* +0xeb6b7a */ __asm { XOR ECX,0xc780 }
    /* +0xeb6b80 */ __asm { MOVZX ECX,CX }
    /* +0xeb6b83 */ __asm { CMP dword ptr [R8 + R11*0x1 + 0x1c],ECX }
    /* +0xeb6b88 */ __asm { JZ 0x7fffa56273a6 }
    /* +0xeb6b8e */ __asm { CMP dword ptr [R8 + R11*0x1 + 0x20],0x0 }
    /* +0xeb6b94 */ __asm { JZ 0x7fffa56273a6 }
    /* +0xeb6b9a */ __asm { CMP dword ptr [R8 + R11*0x1 + 0x24],0x0 }
    /* +0xeb6ba0 */ __asm { JZ 0x7fffa56273a6 }
    /* +0xeb6ba6 */ __asm { MOV dword ptr [RSP + 0x98],0xb1676a98 }
    /* +0xeb6bb1 */ __asm { MOV ECX,dword ptr [RSP + 0x98] }
    /* +0xeb6bb8 */ __asm { MOV R15D,dword ptr [R8 + R11*0x1 + 0x1c] }
    /* +0xeb6bbd */ __asm { ADD R15,R8 }
    /* +0xeb6bc0 */ __asm { MOV dword ptr [RSP + 0x98],0x5d52e0ba }
    /* +0xeb6bcb */ __asm { MOV ECX,dword ptr [RSP + 0x98] }
    /* +0xeb6bd2 */ __asm { CMP ECX,0xb5807139 }
    /* +0xeb6bd8 */ __asm { JNC 0x7fffa562830b }
    /* +0xeb6bde */ __asm { MOV EDI,dword ptr [R8 + R11*0x1 + 0x20] }
    /* +0xeb6be3 */ __asm { ADD RDI,R8 }
    /* +0xeb6be6 */ __asm { MOV dword ptr [RSP + 0x98],0x7c0c5dd9 }
    /* +0xeb6bf1 */ __asm { MOV ECX,dword ptr [RSP + 0x98] }
    /* +0xeb6bf8 */ __asm { MOV R13D,dword ptr [R8 + R11*0x1 + 0x24] }
    /* +0xeb6bfd */ __asm { ADD R13,R8 }
    /* +0xeb6c00 */ __asm { MOV dword ptr [RSP + 0x98],0x8645c168 }
    /* +0xeb6c0b */ __asm { MOV ECX,dword ptr [RSP + 0x98] }
    /* +0xeb6c12 */ __asm { MOV ECX,dword ptr [R8 + R11*0x1 + 0x10] }
    /* +0xeb6c17 */ __asm { MOV dword ptr [RSP + 0xd0],ECX }
    /* +0xeb6c1e */ __asm { MOV ECX,dword ptr [R8 + R11*0x1 + 0x18] }
    /* +0xeb6c23 */ __asm { MOV qword ptr [RSP + 0x60],RCX }
    /* +0xeb6c28 */ __asm { JMP 0x7fffa5626e67 }
    /* +0xeb6c30 */ __asm { MOV dword ptr [RSP + 0xc8],0xe74f1127 }
    /* +0xeb6c3b */ __asm { MOV ECX,dword ptr [RSP + 0xc8] }
    /* +0xeb6c42 */ __asm { XOR EDX,EDX }
    /* +0xeb6c44 */ __asm { TEST RDX,RDX }
    /* +0xeb6c47 */ __asm { JNZ 0x7fffa5627906 }
    /* +0xeb6c4d */ __asm { INC R13 }
    /* +0xeb6c50 */ __asm { CMP R13,R14 }
    /* +0xeb6c53 */ __asm { JZ 0x7fffa5626a01 }
    /* +0xeb6c59 */ __asm { MOV R11D,dword ptr [R15 + R13*0x4] }
    /* +0xeb6c5d */ __asm { LEA R10,[R8 + R11*0x1] }
    /* +0xeb6c61 */ __asm { TEST R11,R11 }
    /* +0xeb6c64 */ __asm { CMOVZ R10,R11 }
    /* +0xeb6c68 */ __asm { MOV qword ptr [RSP + 0xa0],R10 }
    /* +0xeb6c70 */ __asm { MOVZX R11D,word ptr [R12 + R13*0x2] }
    /* +0xeb6c75 */ __asm { MOV RCX,qword ptr [RSP + 0x60] }
    /* +0xeb6c7a */ __asm { MOV ECX,dword ptr [RCX + R11*0x4] }
    /* +0xeb6c7e */ __asm { CMP ECX,ESI }
    /* +0xeb6c80 */ __asm { SETC AL }
    /* +0xeb6c83 */ __asm { CMP ECX,EDI }
    /* +0xeb6c85 */ __asm { SETNC DL }
    /* +0xeb6c88 */ __asm { AND DL,AL }
    /* +0xeb6c8a */ __asm { ADD R11D,EBP }
    /* +0xeb6c8d */ __asm { MOV ECX,ECX }
    /* +0xeb6c8f */ __asm { ADD RCX,R8 }
    /* +0xeb6c92 */ __asm { MOV uint8_t ptr [RSP + 0xac],DL }
    /* +0xeb6c99 */ __asm { MOV dword ptr [RSP + 0xa8],R11D }
    /* +0xeb6ca1 */ __asm { MOV qword ptr [RSP + 0x98],RCX }
    /* +0xeb6ca9 */ __asm { TEST R10,R10 }
    /* +0xeb6cac */ __asm { JZ 0x7fffa5626c30 }
    /* +0xeb6cae */ __asm { MOV dword ptr [RSP + 0xc8],0x52658ddc }
    /* +0xeb6cb9 */ __asm { MOV ECX,dword ptr [RSP + 0xc8] }
    /* +0xeb6cc0 */ __asm { MOV R11,qword ptr [RSP + 0xa0] }
    /* +0xeb6cc8 */ __asm { MOVZX EAX,uint8_t ptr [R11] }
    /* +0xeb6ccc */ __asm { TEST AL,AL }
    /* +0xeb6cce */ __asm { JZ 0x7fffa5626dd0 }
    /* +0xeb6cd4 */ __asm { LEA RCX,[R11 + 0x1] }
    /* +0xeb6cd8 */ __asm { MOV R10D,0xb5383f }
    /* +0xeb6cde */ __asm { NOP }
    /* +0xeb6ce0 */ __asm { MOVZX R8D,AL }
    /* +0xeb6ce4 */ __asm { XOR R8D,R10D }
    /* +0xeb6ce7 */ __asm { IMUL R10D,R8D,0x10001ab }
    /* +0xeb6cee */ __asm { MOV DL,0xa8 }
    /* +0xeb6cf0 */ __asm { ADD DL,BL }
    /* +0xeb6cf2 */ __asm { ADD DL,0x9b }
    /* +0xeb6cf5 */ __asm { MOVZX EAX,uint8_t ptr [RCX] }
    /* +0xeb6cf8 */ __asm { INC RCX }
    /* +0xeb6cfb */ __asm { CMP AL,DL }
    /* +0xeb6cfd */ __asm { JNZ 0x7fffa5626ce0 }
    /* +0xeb6cff */ __asm { AND R10D,0x7fffffff }
    /* +0xeb6d06 */ __asm { MOV R8D,0x2c0fae5f }
    /* +0xeb6d0c */ __asm { ADD R8D,0x3ffffffb }
    /* +0xeb6d13 */ __asm { MOV ECX,EBX }
    /* +0xeb6d15 */ __asm { ROR R8D,CL }
    /* +0xeb6d18 */ __asm { CMP R10D,R8D }
    /* +0xeb6d1b */ __asm { JNZ 0x7fffa5626dd0 }
    /* +0xeb6d21 */ __asm { TEST R9,R9 }
    /* +0xeb6d24 */ __asm { CMOVZ R9,R11 }
    /* +0xeb6d28 */ __asm { CMP uint8_t ptr [RSP + 0xac],0x1 }
    /* +0xeb6d30 */ __asm { MOV R8,qword ptr [RSP + 0x48] }
    /* +0xeb6d35 */ __asm { JNZ 0x7fffa5626e40 }
    /* +0xeb6d3b */ __asm { LEA RCX,[0x7fffa52ca98b] }
    /* +0xeb6d42 */ __asm { MOV RDI,R9 }
    /* +0xeb6d45 */ __asm { MOV R9,R8 }
    /* +0xeb6d48 */ __asm { LEA R10,[RSP + 0x98] }
    /* +0xeb6d50 */ __asm { MOV R11,R10 }
    /* +0xeb6d53 */ __asm { SHL R11,0x3a }
    /* +0xeb6d57 */ __asm { ADD R10,R11 }
    /* +0xeb6d5a */ __asm { ADD R10,-0x47bfba14 }
    /* +0xeb6d61 */ __asm { MOV R11,R9 }
    /* +0xeb6d64 */ __asm { SHL R11,0x1b }
    /* +0xeb6d68 */ __asm { MOV EDX,0x7e48a20b }
    /* +0xeb6d6d */ __asm { SUB EDX,EBX }
    /* +0xeb6d6f */ __asm { XOR EDX,0x213bc8d6 }
    /* +0xeb6d75 */ __asm { ROL EDX,0x13 }
    /* +0xeb6d78 */ __asm { ADD R11,R9 }
    /* +0xeb6d7b */ __asm { XOR R11,0x2320a5df }
    /* +0xeb6d82 */ __asm { MOV R8D,0xe001fb90 }
    /* +0xeb6d88 */ __asm { SUB R8D,EBX }
    /* +0xeb6d8b */ __asm { XOR R8D,0x95bfad16 }
    /* +0xeb6d92 */ __asm { MOVSXD R9,R8D }
    /* +0xeb6d95 */ __asm { ADD R9,RCX }
    /* +0xeb6d98 */ __asm { CALL R9 }
    /* +0xeb6d9b */ __asm { MOV R9,RDI }
    /* +0xeb6d9e */ __asm { MOV RDI,qword ptr [RSP + 0xd0] }
    /* +0xeb6da6 */ __asm { MOV R8,qword ptr [RSP + 0x48] }
    /* +0xeb6dab */ __asm { MOV RDX,RCX }
    /* +0xeb6dae */ __asm { ADD RDX,-0x526c897e }
    /* +0xeb6db5 */ __asm { TEST RDX,RDX }
    /* +0xeb6db8 */ __asm { JZ 0x7fffa5626c4d }
    /* +0xeb6dbe */ __asm { JMP 0x7fffa5627906 }
    /* +0xeb6dd0 */ __asm { MOV CX,0x252d }
    /* +0xeb6dd4 */ __asm { SUB ECX,EBX }
    /* +0xeb6dd6 */ __asm { ROR CX,0x1 }
    /* +0xeb6dd9 */ __asm { ADD ECX,0xffffa6a8 }
    /* +0xeb6ddf */ __asm { MOVZX ECX,CX }
    /* +0xeb6de2 */ __asm { MOV R10,qword ptr GS:[RCX] }
    /* +0xeb6de6 */ __asm { MOV R10,qword ptr [R10 + 0xc00] }
    /* +0xeb6ded */ __asm { MOV CX,0xd1fd }
    /* +0xeb6df1 */ __asm { MOV R8D,0xffffd22d }
    /* +0xeb6df7 */ __asm { SUB R8D,ECX }
    /* +0xeb6dfa */ __asm { MOVZX ECX,R8W }
    /* +0xeb6dfe */ __asm { MOV R11,-0x90119a46f07011b }
    /* +0xeb6e08 */ __asm { XOR R11,RBX }
    /* +0xeb6e0b */ __asm { ADD R11,-0x7c60b2a5 }
    /* +0xeb6e12 */ __asm { ROL R11,0x2d }
    /* +0xeb6e16 */ __asm { MOV RCX,qword ptr GS:[RCX] }
    /* +0xeb6e1a */ __asm { MOV EDX,0x6a8 }
    /* +0xeb6e1f */ __asm { ADD RCX,RDX }
    /* +0xeb6e22 */ __asm { IMUL RCX,R10 }
    /* +0xeb6e26 */ __asm { CMP RCX,R11 }
    /* +0xeb6e29 */ __asm { JZ 0x7fffa5626e56 }
    /* +0xeb6e2b */ __asm { XOR EDX,EDX }
    /* +0xeb6e2d */ __asm { MOV R8,qword ptr [RSP + 0x48] }
    /* +0xeb6e32 */ __asm { TEST RDX,RDX }
    /* +0xeb6e35 */ __asm { JZ 0x7fffa5626c4d }
    /* +0xeb6e3b */ __asm { JMP 0x7fffa5627906 }
    /* +0xeb6e40 */ __asm { MOV RDX,qword ptr [RSP + 0x98] }
    /* +0xeb6e48 */ __asm { TEST RDX,RDX }
    /* +0xeb6e4b */ __asm { JZ 0x7fffa5626c4d }
    /* +0xeb6e51 */ __asm { JMP 0x7fffa5627906 }
    /* +0xeb6e56 */ __asm { ADD CL,uint8_t ptr [R13 + -0x141312f2] }
    /* +0xeb6e5d */ __asm { INT 0x48 }
    /* +0xeb6e5f */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0xeb6e67 */ __asm { MOV RSI,RDX }
    /* +0xeb6e6a */ __asm { SHR RSI,0x20 }
    /* +0xeb6e6e */ __asm { ADD ESI,EDX }
    /* +0xeb6e70 */ __asm { XOR EBP,EBP }
    /* +0xeb6e72 */ __asm { MOV R12D,EBX }
    /* +0xeb6e75 */ __asm { OR R12D,0x1 }
    /* +0xeb6e79 */ __asm { MOV qword ptr [RSP + 0xe0],0x0 }
    /* +0xeb6e85 */ __asm { CMP RBP,qword ptr [RSP + 0x60] }
    /* +0xeb6e8a */ __asm { JZ 0x7fffa5627178 }
    /* +0xeb6e90 */ __asm { MOV R10D,0x287fb2c5 }
    /* +0xeb6e96 */ __asm { XOR R10D,0x10fbffea }
    /* +0xeb6e9d */ __asm { MOV ECX,EBX }
    /* +0xeb6e9f */ __asm { ROL R10D,CL }
    /* +0xeb6ea2 */ __asm { IMUL ECX,R10D,0x583b5097 }
    /* +0xeb6ea9 */ __asm { MOV R10D,0x90822d4c }
    /* +0xeb6eaf */ __asm { MOV R9D,0x55b2d363 }
    /* +0xeb6eb5 */ __asm { SUB R9D,R10D }
    /* +0xeb6eb8 */ __asm { ROL R9D,0x11 }
    /* +0xeb6ebc */ __asm { CMP R9,RCX }
    /* +0xeb6ebf */ __asm { JNC 0x7fffa5626f10 }
    /* +0xeb6ec1 */ __asm { MOV ECX,0x40f781ae }
    /* +0xeb6ec6 */ __asm { ADD ECX,EBX }
    /* +0xeb6ec8 */ __asm { ROL ECX,0xe }
    /* +0xeb6ecb */ __asm { MOV R9D,0xce7a2b3e }
    /* +0xeb6ed1 */ __asm { ADD R9D,0xb64a5f95 }
    /* +0xeb6ed8 */ __asm { ROL R9D,0x4 }
    /* +0xeb6edc */ __asm { XOR R9D,EBX }
    /* +0xeb6edf */ __asm { MOV R10D,0x159883ee }
    /* +0xeb6ee5 */ __asm { ADD R10D,EBX }
    /* +0xeb6ee8 */ __asm { XOR R10D,0x3fffff69 }
    /* +0xeb6eef */ __asm { MOVSX R11,word ptr [R13 + RBP*0x2] }
    /* +0xeb6ef5 */ __asm { MOVZX EAX,R11W }
    /* +0xeb6ef9 */ __asm { MOVSXD R10,R10D }
    /* +0xeb6efc */ __asm { CMP R10,RCX }
    /* +0xeb6eff */ __asm { CMOVG RAX,R11 }
    /* +0xeb6f03 */ __asm { MOV ECX,dword ptr [R15 + RAX*0x4] }
    /* +0xeb6f07 */ __asm { JMP 0x7fffa5626f33 }
    /* +0xeb6f10 */ __asm { MOV R10D,0xf8340438 }
    /* +0xeb6f16 */ __asm { XOR R10D,0x1a781093 }
    /* +0xeb6f1d */ __asm { MOV ECX,EBX }
    /* +0xeb6f1f */ __asm { ROR R10D,CL }
    /* +0xeb6f22 */ __asm { ROL R10D,0xa }
    /* +0xeb6f26 */ __asm { MOVSXD R9,R10D }
    /* +0xeb6f29 */ __asm { MOVZX R11D,word ptr [R13 + RBP*0x2] }
    /* +0xeb6f2f */ __asm { MOV ECX,dword ptr [R15 + R11*0x4] }
    /* +0xeb6f33 */ __asm { MOV R10,RCX }
    /* +0xeb6f36 */ __asm { ADD R10,R8 }
    /* +0xeb6f39 */ __asm { MOV qword ptr [RSP + 0x98],R10 }
    /* +0xeb6f41 */ __asm { MOV R14,RDX }
    /* +0xeb6f44 */ __asm { CMP ECX,EDX }
    /* +0xeb6f46 */ __asm { SETNC AL }
    /* +0xeb6f49 */ __asm { CMP ECX,ESI }
    /* +0xeb6f4b */ __asm { SETC DL }
    /* +0xeb6f4e */ __asm { MOV CX,0x5995 }
    /* +0xeb6f52 */ __asm { ADD ECX,0x54d6 }
    /* +0xeb6f58 */ __asm { AND DL,AL }
    /* +0xeb6f5a */ __asm { MOV uint8_t ptr [RSP + 0xac],DL }
    /* +0xeb6f61 */ __asm { MOV R10D,dword ptr [RDI + RBP*0x4] }
    /* +0xeb6f65 */ __asm { IMUL ECX,R12D }
    /* +0xeb6f69 */ __asm { NOT ECX }
    /* +0xeb6f6b */ __asm { MOVZX ECX,CX }
    /* +0xeb6f6e */ __asm { MOV RDX,R10 }
    /* +0xeb6f71 */ __asm { ADD RDX,R8 }
    /* +0xeb6f74 */ __asm { CMP R10D,ECX }
    /* +0xeb6f77 */ __asm { MOV ECX,0x0 }
    /* +0xeb6f7c */ __asm { CMOVNZ RCX,RDX }
    /* +0xeb6f80 */ __asm { MOV qword ptr [RSP + 0xa0],RCX }
    /* +0xeb6f88 */ __asm { MOVZX R10D,R11W }
    /* +0xeb6f8c */ __asm { ADD R10D,dword ptr [RSP + 0xd0] }
    /* +0xeb6f94 */ __asm { MOV dword ptr [RSP + 0xa8],R10D }
    /* +0xeb6f9c */ __asm { TEST RCX,RCX }
    /* +0xeb6f9f */ __asm { JZ 0x7fffa5627010 }
    /* +0xeb6fa1 */ __asm { MOV dword ptr [RSP + 0xc8],0x52658ddc }
    /* +0xeb6fac */ __asm { MOV ECX,dword ptr [RSP + 0xc8] }
    /* +0xeb6fb3 */ __asm { MOV R11,qword ptr [RSP + 0xa0] }
    /* +0xeb6fbb */ __asm { MOVZX EDX,uint8_t ptr [R11] }
    /* +0xeb6fbf */ __asm { MOV AL,0xbc }
    /* +0xeb6fc1 */ __asm { ADD AL,0x43 }
    /* +0xeb6fc3 */ __asm { MOV ECX,EBX }
    /* +0xeb6fc5 */ __asm { ROL AL,CL }
    /* +0xeb6fc7 */ __asm { NOT AL }
    /* +0xeb6fc9 */ __asm { MOV R10D,R9D }
    /* +0xeb6fcc */ __asm { OR R10B,0x1 }
    /* +0xeb6fd0 */ __asm { MUL R10B }
    /* +0xeb6fd3 */ __asm { CMP DL,AL }
    /* +0xeb6fd5 */ __asm { JZ 0x7fffa56270e0 }
    /* +0xeb6fdb */ __asm { LEA R10,[R11 + 0x1] }
    /* +0xeb6fdf */ __asm { MOV ECX,0xb5383f }
    /* +0xeb6fe4 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0xeb6ff0 */ __asm { MOVZX R8D,DL }
    /* +0xeb6ff4 */ __asm { XOR R8D,ECX }
    /* +0xeb6ff7 */ __asm { MOVZX EDX,uint8_t ptr [R10] }
    /* +0xeb6ffb */ __asm { IMUL ECX,R8D,0x10001ab }
    /* +0xeb7002 */ __asm { TEST DL,DL }
    /* +0xeb7004 */ __asm { JZ 0x7fffa5627030 }
    /* +0xeb7006 */ __asm { INC R10 }
    /* +0xeb7009 */ __asm { JMP 0x7fffa5626ff0 }
    /* +0xeb7010 */ __asm { MOV dword ptr [RSP + 0xc8],0xe74f1127 }
    /* +0xeb701b */ __asm { MOV ECX,dword ptr [RSP + 0xc8] }
    /* +0xeb7022 */ __asm { JMP 0x7fffa5627140 }
    /* +0xeb7030 */ __asm { AND ECX,0x7fffffff }
    /* +0xeb7036 */ __asm { CMP ECX,0x6fd0fca6 }
    /* +0xeb703c */ __asm { MOV R8,qword ptr [RSP + 0x48] }
    /* +0xeb7041 */ __asm { JNZ 0x7fffa56270e0 }
    /* +0xeb7047 */ __asm { MOV R10,qword ptr [RSP + 0xe0] }
    /* +0xeb704f */ __asm { TEST R10,R10 }
    /* +0xeb7052 */ __asm { CMOVZ R10,R11 }
    /* +0xeb7056 */ __asm { MOV qword ptr [RSP + 0xe0],R10 }
    /* +0xeb705e */ __asm { CMP uint8_t ptr [RSP + 0xac],0x1 }
    /* +0xeb7066 */ __asm { JNZ 0x7fffa562715e }
    /* +0xeb706c */ __asm { LEA R10,[RSP + 0x98] }
    /* +0xeb7074 */ __asm { MOV RAX,R10 }
    /* +0xeb7077 */ __asm { SHL RAX,0x3a }
    /* +0xeb707b */ __asm { MOV RCX,R8 }
    /* +0xeb707e */ __asm { MOV R11,RCX }
    /* +0xeb7081 */ __asm { SHL R11,0x1b }
    /* +0xeb7085 */ __asm { ADD R11,RCX }
    /* +0xeb7088 */ __asm { ADD R10,RAX }
    /* +0xeb708b */ __asm { ADD R10,-0x47bfba14 }
    /* +0xeb7092 */ __asm { MOV CX,0x9818 }
    /* +0xeb7096 */ __asm { LEA RDX,[0x7fffa52bf031] }
    /* +0xeb709d */ __asm { ADD R9D,ECX }
    /* +0xeb70a0 */ __asm { MOV ECX,EBX }
    /* +0xeb70a2 */ __asm { ROR R9W,CL }
    /* +0xeb70a6 */ __asm { XOR R11,0x2320a5df }
    /* +0xeb70ad */ __asm { IMUL ECX,R9D,-0x5163 }
    /* +0xeb70b4 */ __asm { MOVSX RCX,CX }
    /* +0xeb70b8 */ __asm { ADD RCX,RDX }
    /* +0xeb70bb */ __asm { MOV EDX,0xc4c14de7 }
    /* +0xeb70c0 */ __asm { CALL RCX }
    /* +0xeb70c2 */ __asm { MOV R8,qword ptr [RSP + 0x48] }
    /* +0xeb70c7 */ __asm { MOV RDX,RCX }
    /* +0xeb70ca */ __asm { ADD RDX,-0x526c897e }
    /* +0xeb70d1 */ __asm { TEST RDX,RDX }
    /* +0xeb70d4 */ __asm { JZ 0x7fffa562714b }
    /* +0xeb70d6 */ __asm { JMP 0x7fffa56283b5 }
    /* +0xeb70e0 */ __asm { MOV CX,0xbbe7 }
    /* +0xeb70e4 */ __asm { ADD ECX,0xffff8417 }
    /* +0xeb70ea */ __asm { MOV R10D,R12D }
    /* +0xeb70ed */ __asm { IMUL R10D,ECX }
}


// ============================================================================
// Function : FUN_7fffa562a3a0  |  RVA: 0xeba3a0  |  Size: 44 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa562a3a0(void)

{
  int64_t alStackX_8 [4];
  
  if (_DAT_7fffa4781840 == 0) {
    (*(code *)&DAT_7ff84ea326b0)(alStackX_8);
    _DAT_7fffa4781840 = alStackX_8[0];
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa562a3d0  |  RVA: 0xeba3d0  |  Size: 320 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa562a49e) */

uint32_t FUN_7fffa562a3d0(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t in_R10D;
  uint32_t uVar2;
  uint32_t unaff_R13D;
  uint32_t uStack_3c;
  
  uVar1 = ~unaff_R13D;
  uVar2 = ~in_R10D & uVar1;
  (*(code *)((int64_t)
             (int)(((param_1 & in_R10D & uVar1) * 0x7d026a0a + (uVar2 & param_1) * -0x4a59dc78 +
                    (~(param_1 & in_R10D) | unaff_R13D) * 0x7d026a0a +
                    ((~in_R10D | uVar1) ^ param_1) * 0x3cad109d +
                    (in_R10D & unaff_R13D ^ param_1) * -0x78f912eb +
                    ((~param_1 ^ unaff_R13D ^ in_R10D) - (uVar2 & ~param_1)) * -0x4a59dc78 | 1) *
                   0x40df940d + 0x7849edcc) + 0x7fffa562a71f))();
  return uStack_3c;
}


// ============================================================================
// Function : FUN_7fffa562a510  |  RVA: 0xeba510  |  Size: 106989 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa562a510(void) {
    /* +0xeba510 */ __asm { PUSH RBX }
    /* +0xeba511 */ __asm { PUSH R12 }
    /* +0xeba513 */ __asm { PUSH R14 }
    /* +0xeba515 */ __asm { PUSH RBP }
    /* +0xeba516 */ __asm { PUSH RDI }
    /* +0xeba517 */ __asm { PUSH R15 }
    /* +0xeba519 */ __asm { PUSH RSI }
    /* +0xeba51a */ __asm { PUSH R13 }
    /* +0xeba51c */ __asm { SUB RSP,0x338 }
    /* +0xeba523 */ __asm { MOVDQA xmmword ptr [RSP + 0x320],XMM8 }
    /* +0xeba52d */ __asm { MOVDQA xmmword ptr [RSP + 0x310],XMM12 }
    /* +0xeba537 */ __asm { MOVDQA xmmword ptr [RSP + 0x300],XMM14 }
    /* +0xeba541 */ __asm { MOVDQA xmmword ptr [RSP + 0x2f0],XMM15 }
    /* +0xeba54b */ __asm { MOVDQA xmmword ptr [RSP + 0x2e0],XMM6 }
    /* +0xeba554 */ __asm { MOVDQA xmmword ptr [RSP + 0x2d0],XMM13 }
    /* +0xeba55e */ __asm { MOV RBP,R8 }
    /* +0xeba561 */ __asm { MOV R11W,0xca1b }
    /* +0xeba566 */ __asm { IMUL R11D,R11D,-0x56a3 }
    /* +0xeba56d */ __asm { ADD R11D,0xffffc161 }
    /* +0xeba574 */ __asm { MOVZX R8D,R11W }
    /* +0xeba578 */ __asm { MOV R11,qword ptr GS:[R8] }
    /* +0xeba57c */ __asm { MOV R8D,0xfbc0072c }
    /* +0xeba582 */ __asm { MOV RCX,R11 }
    /* +0xeba585 */ __asm { SHL RCX,0x5 }
    /* +0xeba589 */ __asm { LEA R10,[RCX + RCX*0x2] }
    /* +0xeba58d */ __asm { MOV EDX,0xa27a4329 }
    /* +0xeba592 */ __asm { SUB EDX,R8D }
    /* +0xeba595 */ __asm { MOV R8D,0xa165afc5 }
    /* +0xeba59b */ __asm { SUB R8D,EBP }
    /* +0xeba59e */ __asm { ADD R8D,0xf8d989c0 }
    /* +0xeba5a5 */ __asm { MOVSXD R9,R8D }
    /* +0xeba5a8 */ __asm { ADD R11,0x60 }
    /* +0xeba5ac */ __asm { CMP RDX,R9 }
    /* +0xeba5af */ __asm { CMOVA R11,R10 }
    /* +0xeba5b3 */ __asm { MOV R10,-0x40a799bdf4981dc5 }
    /* +0xeba5bd */ __asm { CMP qword ptr [R11],R10 }
    /* +0xeba5c0 */ __asm { NOP }
    /* +0xeba5c1 */ __asm { NOP }
    /* +0xeba5c2 */ __asm { NOP }
    /* +0xeba5c3 */ __asm { NOP }
    /* +0xeba5c4 */ __asm { NOP }
    /* +0xeba5c5 */ __asm { MOV R11W,0x60fd }
    /* +0xeba5ca */ __asm { XOR R11D,0xffffa402 }
    /* +0xeba5d1 */ __asm { SUB R11D,EBP }
    /* +0xeba5d4 */ __asm { XOR R11D,0xbc8c }
    /* +0xeba5db */ __asm { MOVZX R8D,R11W }
    /* +0xeba5df */ __asm { MOV R11,qword ptr GS:[R8] }
    /* +0xeba5e3 */ __asm { MOV R10,-0x7dc8071688f48a53 }
    /* +0xeba5ed */ __asm { CMP R11,R10 }
    /* +0xeba5f0 */ __asm { JNZ 0x7fffa562a5fe }
    /* +0xeba5f2 */ __asm { FISTTP qword ptr [RAX] }
    /* +0xeba5f5 */ __asm { AND EDX,0x4b }
    /* +0xeba5f8 */ __asm { ADD EDX,dword ptr [RDX + RDX*0x2] }
    /* +0xeba5fb */ __asm { ADD dword ptr [RBP + -0x4b],ESI }
    /* +0xeba5fe */ __asm { LEA R9,[0x7fffa478094a] }
    /* +0xeba605 */ __asm { MOV R11,0x54aae89cedc0b687 }
    /* +0xeba60f */ __asm { CMP R9,R11 }
    /* +0xeba612 */ __asm { NOP }
    /* +0xeba613 */ __asm { NOP }
    /* +0xeba614 */ __asm { NOP }
    /* +0xeba615 */ __asm { NOP }
    /* +0xeba616 */ __asm { NOP }
    /* +0xeba617 */ __asm { MOV R11W,0xb5d5 }
    /* +0xeba61c */ __asm { MOVZX ECX,uint8_t ptr [R9 + 0x3c45] }
    /* +0xeba624 */ __asm { MOV R8D,0xffffb5d5 }
    /* +0xeba62a */ __asm { MOVZX R10D,uint8_t ptr [R9 + RCX*0x4 + 0x3c4f] }
    /* +0xeba633 */ __asm { NOT R10B }
    /* +0xeba636 */ __asm { ROL R10B,0x3 }
    /* +0xeba63a */ __asm { MOV uint8_t ptr [RSP + 0xa0],R10B }
    /* +0xeba642 */ __asm { MOVZX R10D,uint8_t ptr [R9 + RCX*0x4 + 0x3c50] }
    /* +0xeba64b */ __asm { NOT R10B }
    /* +0xeba64e */ __asm { ROL R10B,0x3 }
    /* +0xeba652 */ __asm { MOV uint8_t ptr [RSP + 0xa1],R10B }
    /* +0xeba65a */ __asm { MOVZX R10D,uint8_t ptr [R9 + RCX*0x4 + 0x3c51] }
    /* +0xeba663 */ __asm { NOT R10B }
    /* +0xeba666 */ __asm { ROL R10B,0x3 }
    /* +0xeba66a */ __asm { SUB R8D,R11D }
    /* +0xeba66d */ __asm { MOV uint8_t ptr [RSP + 0xa2],R10B }
    /* +0xeba675 */ __asm { MOVZX R9D,uint8_t ptr [R9 + RCX*0x4 + 0x3c52] }
    /* +0xeba67e */ __asm { NOT R9B }
    /* +0xeba681 */ __asm { ROL R9B,0x3 }
    /* +0xeba685 */ __asm { MOV uint8_t ptr [RSP + 0xa3],R9B }
    /* +0xeba68d */ __asm { MOV R11D,0x97cd0fa7 }
    /* +0xeba693 */ __asm { XOR R11D,dword ptr [RSP + 0xa0] }
    /* +0xeba69b */ __asm { MOV EDI,0x1 }
    /* +0xeba6a0 */ __asm { MOV ECX,R11D }
    /* +0xeba6a3 */ __asm { SHL EDI,CL }
    /* +0xeba6a5 */ __asm { MOV ECX,EBP }
    /* +0xeba6a7 */ __asm { ROL R8W,CL }
    /* +0xeba6ab */ __asm { AND EDI,R11D }
    /* +0xeba6ae */ __asm { MOVZX R14D,R8W }
    /* +0xeba6b2 */ __asm { CMP EDI,R14D }
    /* +0xeba6b5 */ __asm { JNZ 0x7fffa562b218 }
    /* +0xeba6bb */ __asm { MOV dword ptr [RSP + 0x1c4],R14D }
    /* +0xeba6c3 */ __asm { MOV dword ptr [RSP + 0x6c],EDI }
    /* +0xeba6c7 */ __asm { MOV R11D,0x9dee11a9 }
    /* +0xeba6cd */ __asm { ADD R11D,0x8001fd10 }
    /* +0xeba6d4 */ __asm { XOR R11D,EBP }
    /* +0xeba6d7 */ __asm { MOV dword ptr [RSP + 0xa0],R11D }
    /* +0xeba6df */ __asm { MOV R11D,dword ptr [RSP + 0xa0] }
    /* +0xeba6e7 */ __asm { MOV dword ptr [RSP + 0xa0],0xcd034f8e }
    /* +0xeba6f2 */ __asm { MOV R11D,dword ptr [RSP + 0xa0] }
    /* +0xeba6fa */ __asm { LEA R10,[0x7fffa478b7e0] }
    /* +0xeba701 */ __asm { MOV R11,-0x26ed0d289b33f30a }
    /* +0xeba70b */ __asm { CMP R10,R11 }
    /* +0xeba70e */ __asm { JZ 0x7fffa562d27e }
    /* +0xeba714 */ __asm { MOV ESI,0x794aa8a0 }
    /* +0xeba719 */ __asm { MOV R8D,0x3e8038c0 }
    /* +0xeba71f */ __asm { ADD R8D,EBP }
    /* +0xeba722 */ __asm { XOR ESI,EBP }
    /* +0xeba724 */ __asm { ADD ESI,0x988ef13d }
    /* +0xeba72a */ __asm { LEA R11,[0x7fffa544e065] }
    /* +0xeba731 */ __asm { MOV qword ptr [RSP + 0x128],R11 }
    /* +0xeba739 */ __asm { MOV R11D,EBP }
    /* +0xeba73c */ __asm { OR R11D,0x1 }
    /* +0xeba740 */ __asm { MOV ECX,R11D }
    /* +0xeba743 */ __asm { MOV EDX,0xe48e4d86 }
    /* +0xeba748 */ __asm { MOV R11D,0xf51fe122 }
    /* +0xeba74e */ __asm { NOT R8D }
    /* +0xeba751 */ __asm { MOVSXD R9,R8D }
    /* +0xeba754 */ __asm { MOV qword ptr [RSP + 0xf0],R9 }
    /* +0xeba75c */ __asm { MOV R9D,0xa53c17c2 }
    /* +0xeba762 */ __asm { IMUL EDX,ECX }
    /* +0xeba765 */ __asm { MOV R8W,0x84ac }
    /* +0xeba76a */ __asm { MOV EAX,0xbda8b139 }
    /* +0xeba76f */ __asm { ROL EDX,0x1c }
    /* +0xeba772 */ __asm { NOT EDX }
    /* +0xeba774 */ __asm { MOV qword ptr [RSP + 0x228],RDX }
    /* +0xeba77c */ __asm { MOV EDX,0x4ec9e337 }
    /* +0xeba781 */ __asm { SUB EDX,R9D }
    /* +0xeba784 */ __asm { ROL EDX,0x1c }
    /* +0xeba787 */ __asm { MOV qword ptr [RSP + 0x190],RDX }
    /* +0xeba78f */ __asm { MOV R12D,0xddfcc5b6 }
    /* +0xeba795 */ __asm { XOR R12D,0x755602e1 }
    /* +0xeba79c */ __asm { MOV dword ptr [RSP + 0x1ac],ECX }
    /* +0xeba7a3 */ __asm { IMUL R12D,ECX }
    /* +0xeba7a7 */ __asm { ROR R12D,0x1 }
    /* +0xeba7aa */ __asm { ADD EAX,0x5e4ad4f8 }
    /* +0xeba7af */ __asm { IMUL EAX,ECX }
    /* +0xeba7b2 */ __asm { MOVSXD R9,EAX }
    /* +0xeba7b5 */ __asm { MOV qword ptr [RSP + 0x220],R9 }
    /* +0xeba7bd */ __asm { MOV ECX,0xe55f2085 }
    /* +0xeba7c2 */ __asm { MOV R14,qword ptr [R10 + -0x6a98] }
    /* +0xeba7c9 */ __asm { MOV R9,R14 }
    /* +0xeba7cc */ __asm { SHR R9,0x19 }
    /* +0xeba7d0 */ __asm { AND R9D,0x180 }
    /* +0xeba7d7 */ __asm { MOV qword ptr [RSP + 0x170],RBP }
    /* +0xeba7df */ __asm { MOV R13D,R14D }
    /* +0xeba7e2 */ __asm { SHR R13D,0x13 }
    /* +0xeba7e6 */ __asm { AND R13D,0x40 }
    /* +0xeba7ea */ __asm { OR R13D,R9D }
    /* +0xeba7ed */ __asm { MOV R9,R14 }
    /* +0xeba7f0 */ __asm { SHR R9,0x1c }
    /* +0xeba7f4 */ __asm { AND R9D,0x200 }
    /* +0xeba7fb */ __asm { OR R13D,R9D }
    /* +0xeba7fe */ __asm { MOV R9,R14 }
    /* +0xeba801 */ __asm { SHR R9,0x1e }
    /* +0xeba805 */ __asm { AND R9D,0x400 }
    /* +0xeba80c */ __asm { OR R13D,R9D }
    /* +0xeba80f */ __asm { MOV R9,R14 }
    /* +0xeba812 */ __asm { SHR R9,0x1f }
    /* +0xeba816 */ __asm { AND R9D,0x1800 }
    /* +0xeba81d */ __asm { OR R13D,R9D }
    /* +0xeba820 */ __asm { MOV R9,0x4fc50f868fef72e1 }
    /* +0xeba82a */ __asm { MOV qword ptr [RSP + 0x240],R9 }
    /* +0xeba832 */ __asm { MOV R9,-0x7e6df35855008406 }
    /* +0xeba83c */ __asm { MOV qword ptr [RSP + 0x238],R9 }
    /* +0xeba844 */ __asm { MOV R9,-0x7c9a946e51875990 }
    /* +0xeba84e */ __asm { MOV qword ptr [RSP + 0x218],R9 }
    /* +0xeba856 */ __asm { IMUL R11D,R11D,0x46db7613 }
    /* +0xeba85d */ __asm { MOV qword ptr [RSP + 0x208],R11 }
    /* +0xeba865 */ __asm { LEA R9,[RSP + 0xa0] }
    /* +0xeba86d */ __asm { MOV qword ptr [RSP + 0x108],R9 }
    /* +0xeba875 */ __asm { XOR R8D,0xffffae48 }
    /* +0xeba87c */ __asm { IMUL R8D,R8D,0x5bcd }
    /* +0xeba883 */ __asm { MOV qword ptr [RSP + 0x1e0],R8 }
    /* +0xeba88b */ __asm { MOV R9,0x1f36b4bc0d13e4e3 }
    /* +0xeba895 */ __asm { MOV qword ptr [RSP + 0x198],R9 }
    /* +0xeba89d */ __asm { MOV R9,0x4fab0fda8f9c728d }
    /* +0xeba8a7 */ __asm { MOV qword ptr [RSP + 0x60],R9 }
    /* +0xeba8ac */ __asm { MOV R9,0x3150cb3deabed324 }
    /* +0xeba8b6 */ __asm { MOV qword ptr [RSP + 0x1b8],R9 }
    /* +0xeba8be */ __asm { MOV R9,-0x7cf6942a51e959f9 }
    /* +0xeba8c8 */ __asm { MOV qword ptr [RSP + 0x230],R9 }
    /* +0xeba8d0 */ __asm { XOR ECX,0x3ffffdd2 }
    /* +0xeba8d6 */ __asm { ADD ECX,0xda42b983 }
    /* +0xeba8dc */ __asm { MOV qword ptr [RSP + 0x180],RCX }
    /* +0xeba8e4 */ __asm { MOV R9,-0x7e01f33455648472 }
    /* +0xeba8ee */ __asm { MOV qword ptr [RSP + 0x1d0],R9 }
    /* +0xeba8f6 */ __asm { MOV R9,0x191e573409be0919 }
    /* +0xeba900 */ __asm { MOV qword ptr [RSP + 0x110],R9 }
    /* +0xeba908 */ __asm { MOV R9,0x1972575809da0937 }
    /* +0xeba912 */ __asm { MOV qword ptr [RSP + 0x1f0],R9 }
    /* +0xeba91a */ __asm { MOV R8D,R14D }
    /* +0xeba91d */ __asm { SHR R8D,0x2 }
    /* +0xeba921 */ __asm { MOV R11D,R14D }
    /* +0xeba924 */ __asm { SHR R11D,0x9 }
    /* +0xeba928 */ __asm { AND R11D,0x10 }
    /* +0xeba92c */ __asm { MOV dword ptr [RSP + 0x5c],R11D }
    /* +0xeba931 */ __asm { AND R8D,0x2 }
    /* +0xeba935 */ __asm { MOV dword ptr [RSP + 0x17c],R8D }
    /* +0xeba93d */ __asm { MOV EBP,R14D }
    /* +0xeba940 */ __asm { SHR EBP,0x5 }
    /* +0xeba943 */ __asm { MOV EDI,R14D }
    /* +0xeba946 */ __asm { SHR EDI,0x1 }
    /* +0xeba948 */ __asm { MOV R8,R14 }
    /* +0xeba94b */ __asm { SHR R8,0x2a }
    /* +0xeba94f */ __asm { AND R8D,0x4000 }
    /* +0xeba956 */ __asm { MOV qword ptr [RSP + 0x200],R8 }
    /* +0xeba95e */ __asm { MOV EAX,R14D }
    /* +0xeba961 */ __asm { SHR EAX,0x3 }
    /* +0xeba964 */ __asm { AND EAX,0x4 }
    /* +0xeba967 */ __asm { MOV R15,qword ptr [R10 + -0x6a90] }
    /* +0xeba96e */ __asm { MOV RCX,qword ptr [R10 + -0x6a88] }
    /* +0xeba975 */ __asm { MOV R8D,ECX }
    /* +0xeba978 */ __asm { AND R8D,0x40000 }
    /* +0xeba97f */ __asm { SHL R8,0x14 }
    /* +0xeba983 */ __asm { MOV qword ptr [RSP + 0x100],R8 }
    /* +0xeba98b */ __asm { MOV R11,RCX }
    /* +0xeba98e */ __asm { SHL R11,0x16 }
    /* +0xeba992 */ __asm { MOV qword ptr [RSP + 0x188],R11 }
    /* +0xeba99a */ __asm { MOV R9,RCX }
    /* +0xeba99d */ __asm { SHL R9,0x1f }
    /* +0xeba9a1 */ __asm { MOV R11,R15 }
    /* +0xeba9a4 */ __asm { SHR R11,0xa }
    /* +0xeba9a8 */ __asm { MOV R8,R11 }
    /* +0xeba9ab */ __asm { MOV R11D,R15D }
    /* +0xeba9ae */ __asm { SHL R11D,0xa }
    /* +0xeba9b2 */ __asm { AND R11D,0x20000 }
    /* +0xeba9b9 */ __asm { MOV qword ptr [RSP + 0x1a0],R11 }
    /* +0xeba9c1 */ __asm { MOV R10,R15 }
    /* +0xeba9c4 */ __asm { SHR R10,0x5 }
    /* +0xeba9c8 */ __asm { MOV R11,R15 }
    /* +0xeba9cb */ __asm { SHR R11,0xd }
    /* +0xeba9cf */ __asm { MOV RBX,R11 }
    /* +0xeba9d2 */ __asm { AND R8D,0x1000000 }
    /* +0xeba9d9 */ __asm { MOV qword ptr [RSP + 0x248],R8 }
    /* +0xeba9e1 */ __asm { MOV R11,R15 }
    /* +0xeba9e4 */ __asm { SHR R11,0xf }
    /* +0xeba9e8 */ __asm { MOV qword ptr [RSP + 0x1b0],R11 }
    /* +0xeba9f0 */ __asm { MOV R8D,R15D }
    /* +0xeba9f3 */ __asm { SHR R8D,0x7 }
    /* +0xeba9f7 */ __asm { AND R8D,0x800000 }
    /* +0xeba9fe */ __asm { MOV qword ptr [RSP + 0x2c0],R8 }
    /* +0xebaa06 */ __asm { MOV R8,R10 }
    /* +0xebaa09 */ __asm { XOR R8,0x100000 }
    /* +0xebaa10 */ __asm { AND EBX,0x1e000000 }
    /* +0xebaa16 */ __asm { MOV qword ptr [RSP + 0x118],RBX }
    /* +0xebaa1e */ __asm { MOV R11D,ECX }
    /* +0xebaa21 */ __asm { AND R11D,0x100 }
    /* +0xebaa28 */ __asm { SHL R11,0x1c }
    /* +0xebaa2c */ __asm { MOV qword ptr [RSP + 0x1d8],R11 }
    /* +0xebaa34 */ __asm { MOV R11,0xfffffffe1 }
    /* +0xebaa3e */ __asm { ADD R11,RCX }
    /* +0xebaa41 */ __asm { MOV EBX,ECX }
    /* +0xebaa43 */ __asm { AND EBX,0x1000000 }
    /* +0xebaa49 */ __asm { MOV qword ptr [RSP + 0x210],RBX }
    /* +0xebaa51 */ __asm { MOV EDX,R15D }
    /* +0xebaa54 */ __asm { SHR EDX,0x6 }
    /* +0xebaa57 */ __asm { MOV EBX,ECX }
    /* +0xebaa59 */ __asm { AND EBX,0x100000 }
    /* +0xebaa5f */ __asm { MOV qword ptr [RSP + 0x2c8],RBX }
    /* +0xebaa67 */ __asm { AND R10D,0x100000 }
    /* +0xebaa6e */ __asm { CMP qword ptr [RSP + 0x220],RSI }
    /* +0xebaa76 */ __asm { CMOVG R10,R8 }
    /* +0xebaa7a */ __asm { MOV qword ptr [RSP + 0xf8],R10 }
    /* +0xebaa82 */ __asm { MOV R8,qword ptr [RSP + 0x180] }
    /* +0xebaa8a */ __asm { MOV qword ptr [RSP + 0x180],R8 }
    /* +0xebaa92 */ __asm { MOV R8D,0x7ca8f7ed }
    /* +0xebaa98 */ __asm { MOV dword ptr [RSP + 0x50],R8D }
    /* +0xebaa9d */ __asm { AND EDX,0x600000 }
    /* +0xebaaa3 */ __asm { MOV qword ptr [RSP + 0x1c8],RDX }
    /* +0xebaaab */ __asm { MOV EDX,R15D }
    /* +0xebaaae */ __asm { SHR EDX,0x1 }
    /* +0xebaab0 */ __asm { AND EDX,0x80000 }
    /* +0xebaab6 */ __asm { MOV R8D,R15D }
    /* +0xebaab9 */ __asm { AND R8D,0x20 }
    /* +0xebaabd */ __asm { SHL R8D,0xb }
    /* +0xebaac1 */ __asm { MOV ESI,0x93aa0291 }
    /* +0xebaac6 */ __asm { XOR ESI,dword ptr [RSP + 0x170] }
    /* +0xebaacd */ __asm { ADD ESI,0x354f7e2a }
    /* +0xebaad3 */ __asm { CMP R12,RSI }
    /* +0xebaad6 */ __asm { CMOVG R11,R9 }
    /* +0xebaada */ __asm { MOV qword ptr [RSP + 0x220],R11 }
    /* +0xebaae2 */ __asm { MOV R11,qword ptr [RSP + 0x1e0] }
    /* +0xebaaea */ __asm { NOT R11D }
    /* +0xebaaed */ __asm { MOVSX R10,R11W }
    /* +0xebaaf1 */ __asm { ADD R10,qword ptr [RSP + 0x128] }
    /* +0xebaaf9 */ __asm { MOV qword ptr [RSP + 0xe8],R10 }
    /* +0xebab01 */ __asm { MOV R9,qword ptr [RSP + 0x230] }
    /* +0xebab09 */ __asm { MOV qword ptr [RSP + 0x268],R9 }
    /* +0xebab11 */ __asm { MOV R9,qword ptr [RSP + 0x1d0] }
    /* +0xebab19 */ __asm { MOV qword ptr [RSP + 0x278],R9 }
    /* +0xebab21 */ __asm { MOV R9,qword ptr [RSP + 0x110] }
    /* +0xebab29 */ __asm { MOV qword ptr [RSP + 0x280],R9 }
    /* +0xebab31 */ __asm { MOV RSI,qword ptr [RSP + 0x1b8] }
    /* +0xebab39 */ __asm { MOV qword ptr [RSP + 0x288],RSI }
    /* +0xebab41 */ __asm { MOV R9,qword ptr [RSP + 0x240] }
    /* +0xebab49 */ __asm { MOV qword ptr [RSP + 0x270],R9 }
    /* +0xebab51 */ __asm { MOV R10D,0xeb027c36 }
    /* +0xebab57 */ __asm { MOVD XMM3,R10D }
    /* +0xebab5c */ __asm { AND EDI,0x1 }
    /* +0xebab5f */ __asm { ADD EDI,dword ptr [RSP + 0x17c] }
    /* +0xebab66 */ __asm { OR EDI,EAX }
    /* +0xebab68 */ __asm { MOVD XMM15,dword ptr [RSP + 0x170] }
    /* +0xebab72 */ __asm { MOV R9,R14 }
    /* +0xebab75 */ __asm { SHR R9,0x24 }
    /* +0xebab79 */ __asm { AND R9D,0x2000 }
    /* +0xebab80 */ __asm { MOV qword ptr [RSP + 0x128],R15 }
    /* +0xebab88 */ __asm { MOV R12D,R15D }
    /* +0xebab8b */ __asm { SHL R12D,0x6 }
    /* +0xebab8f */ __asm { AND R12D,0x40000 }
    /* +0xebab96 */ __asm { PSUBD XMM3,XMM15 }
    /* +0xebab9b */ __asm { MOVD R10D,XMM3 }
    /* +0xebaba0 */ __asm { XOR R10D,0x6b11a457 }
    /* +0xebaba7 */ __asm { MOV RBX,0x1f59b4d20d58e4bf }
    /* +0xebabb1 */ __asm { MOV EAX,R14D }
    /* +0xebabb4 */ __asm { SHR EAX,0xc }
    /* +0xebabb7 */ __asm { AND EAX,0x20 }
    /* +0xebabba */ __asm { MOV R11,qword ptr [RSP + 0x208] }
    /* +0xebabc2 */ __asm { XOR R11D,0xb135c718 }
    /* +0xebabc9 */ __asm { IMUL R11D,dword ptr [RSP + 0x1ac] }
    /* +0xebabd2 */ __asm { CMP R11,0x21d74dba }
    /* +0xebabd9 */ __asm { MOV R15,RCX }
    /* +0xebabdc */ __asm { MOV R11,qword ptr [RSP + 0x188] }
    /* +0xebabe4 */ __asm { CMOVNZ R11,RCX }
    /* +0xebabe8 */ __asm { MOV qword ptr [RSP + 0x188],R11 }
    /* +0xebabf0 */ __asm { AND EBP,0x8 }
    /* +0xebabf3 */ __asm { OR EBP,EDI }
    /* +0xebabf5 */ __asm { ADD EBP,dword ptr [RSP + 0x5c] }
    /* +0xebabf9 */ __asm { OR EBP,EAX }
    /* +0xebabfb */ __asm { XOR R11D,R11D }
    /* +0xebabfe */ __asm { MOV RAX,qword ptr [RSP + 0x180] }
    /* +0xebac06 */ __asm { CMP qword ptr [RSP + 0x190],RAX }
    /* +0xebac0e */ __asm { MOVD XMM3,R13D }
    /* +0xebac13 */ __asm { MOV R13,qword ptr [RSP + 0x170] }
    /* +0xebac1b */ __asm { MOVD XMM1,R9D }
    /* +0xebac20 */ __asm { CMOVC R11,RBP }
    /* +0xebac24 */ __asm { MOVD XMM2,R8D }
    /* +0xebac29 */ __asm { SHR R14,0x2d }
    /* +0xebac2d */ __asm { AND R14D,0x8000 }
    /* +0xebac34 */ __asm { OR R14D,dword ptr [RSP + 0x200] }
    /* +0xebac3c */ __asm { POR XMM1,XMM3 }
    /* +0xebac40 */ __asm { MOVQ R8,XMM1 }
    /* +0xebac45 */ __asm { OR R14D,R8D }
    /* +0xebac48 */ __asm { MOVD XMM3,R14D }
    /* +0xebac4d */ __asm { OR R12,qword ptr [RSP + 0x1a0] }
    /* +0xebac55 */ __asm { OR R12,RDX }
    /* +0xebac58 */ __asm { OR R12,qword ptr [RSP + 0x1c8] }
    /* +0xebac60 */ __asm { OR R12,qword ptr [RSP + 0x2c0] }
    /* +0xebac68 */ __asm { OR R12,qword ptr [RSP + 0x248] }
    /* +0xebac70 */ __asm { OR R12,qword ptr [RSP + 0xf8] }
    /* +0xebac78 */ __asm { OR R12,R11 }
    /* +0xebac7b */ __asm { POR XMM3,XMM2 }
    /* +0xebac7f */ __asm { MOVQ R11,XMM3 }
    /* +0xebac84 */ __asm { OR R12,R11 }
    /* +0xebac87 */ __asm { MOV R9,qword ptr [RSP + 0x118] }
    /* +0xebac8f */ __asm { LEA R11,[R9 + R12*0x1] }
    /* +0xebac93 */ __asm { OR R12,R9 }
    /* +0xebac96 */ __asm { CMP qword ptr [RSP + 0xf0],R10 }
    /* +0xebac9e */ __asm { MOV qword ptr [RSP + 0xf0],RBX }
    /* +0xebaca6 */ __asm { MOV qword ptr [RSP + 0x260],RBX }
    /* +0xebacae */ __asm { MOV R9,qword ptr [RSP + 0x1f0] }
    /* +0xebacb6 */ __asm { MOV qword ptr [RSP + 0xc0],R9 }
    /* +0xebacbe */ __asm { MOVDQA XMM3,xmmword ptr [RSP + 0x280] }
    /* +0xebacc7 */ __asm { MOV R9,qword ptr [RSP + 0x238] }
    /* +0xebaccf */ __asm { MOV qword ptr [RSP + 0xb8],R9 }
    /* +0xebacd7 */ __asm { MOV R9,qword ptr [RSP + 0x218] }
    /* +0xebacdf */ __asm { MOV qword ptr [RSP + 0xa8],R9 }
    /* +0xebace7 */ __asm { MOV R9,qword ptr [RSP + 0x198] }
    /* +0xebacef */ __asm { MOV qword ptr [RSP + 0xa0],R9 }
    /* +0xebacf7 */ __asm { MOVDQA XMM1,xmmword ptr [RSP + 0x270] }
    /* +0xebad00 */ __asm { MOV qword ptr [RSP + 0xc8],RSI }
    /* +0xebad08 */ __asm { MOV R9,qword ptr [RSP + 0x108] }
    /* +0xebad10 */ __asm { PXOR XMM3,xmmword ptr [R9 + 0x20] }
    /* +0xebad16 */ __asm { MOV R10,qword ptr [RSP + 0x60] }
    /* +0xebad1b */ __asm { MOV qword ptr [RSP + 0xb0],R10 }
    /* +0xebad23 */ __asm { MOVDQA XMM2,xmmword ptr [R9] }
    /* +0xebad28 */ __asm { PXOR XMM1,xmmword ptr [R9 + 0x10] }
    /* +0xebad2e */ __asm { CMOVGE R12,R11 }
    /* +0xebad32 */ __asm { MOV qword ptr [RSP + 0x190],R12 }
    /* +0xebad3a */ __asm { PXOR XMM2,xmmword ptr [RSP + 0x260] }
    /* +0xebad43 */ __asm { MOVDQA xmmword ptr [RSP + 0x270],XMM1 }
    /* +0xebad4c */ __asm { MOVDQA xmmword ptr [RSP + 0x260],XMM2 }
    /* +0xebad55 */ __asm { MOVDQA xmmword ptr [RSP + 0x280],XMM3 }
    /* +0xebad5e */ __asm { MOV dword ptr [RSP + 0xa0],0x1443ba29 }
    /* +0xebad69 */ __asm { MOV R11D,dword ptr [RSP + 0xa0] }
    /* +0xebad71 */ __asm { MOV R11W,0xc892 }
    /* +0xebad76 */ __asm { MOV R8D,0x3549f4e9 }
    /* +0xebad7c */ __asm { IMUL R8D,R8D,-0x2d26d84d }
    /* +0xebad83 */ __asm { LEA R10,[0x7fffa5181a5e] }
    /* +0xebad8a */ __asm { ADD R8D,0xbd789aa7 }
    /* +0xebad91 */ __asm { MOVSXD R9,R8D }
    /* +0xebad94 */ __asm { ADD R9,R10 }
    /* +0xebad97 */ __asm { ADD R11D,0x18e }
    /* +0xebad9e */ __asm { MOV R14D,R13D }
    /* +0xebada1 */ __asm { OR R14D,0x1 }
    /* +0xebada5 */ __asm { IMUL R11D,R14D }
    /* +0xebada9 */ __asm { MOVZX EBP,R11W }
    /* +0xebadad */ __asm { LEA RBX,[RSP + 0x260] }
    /* +0xebadb5 */ __asm { MOV RCX,RBX }
    /* +0xebadb8 */ __asm { CALL R9 }
    /* +0xebadbb */ __asm { MOV qword ptr [RSP + 0x258],RBX }
    /* +0xebadc3 */ __asm { ADD EAX,EAX }
    /* +0xebadc5 */ __asm { MOV word ptr [RSP + 0x250],AX }
    /* +0xebadcd */ __asm { MOV word ptr [RSP + 0x252],AX }
    /* +0xebadd5 */ __asm { MOV dword ptr [RSP + 0x130],0x30 }
    /* +0xebade0 */ __asm { LEA R11,[RSP + 0x250] }
    /* +0xebade8 */ __asm { MOV qword ptr [RSP + 0x140],R11 }
    /* +0xebadf0 */ __asm { MOV qword ptr [RSP + 0x138],0x0 }
    /* +0xebadfc */ __asm { MOV dword ptr [RSP + 0x148],0x40 }
    /* +0xebae07 */ __asm { PXOR XMM3,XMM3 }
    /* +0xebae0b */ __asm { MOVDQU xmmword ptr [RSP + 0x150],XMM3 }
    /* +0xebae14 */ __asm { MOV R11,qword ptr GS:[RBP] }
    /* +0xebae19 */ __asm { MOV R11,qword ptr [R11 + 0x18] }
    /* +0xebae1d */ __asm { MOV R8D,0xd95d5d6e }
    /* +0xebae23 */ __asm { ADD R8D,R13D }
    /* +0xebae26 */ __asm { IMUL R8D,R8D,0x2e3ff8d9 }
    /* +0xebae2d */ __asm { XOR R8D,0xc000009d }
    /* +0xebae34 */ __asm { SUB R11,R8 }
    /* +0xebae37 */ __asm { MOV R10,-0x26dc81574eb381b5 }
    /* +0xebae41 */ __asm { IMUL R10,R11 }
    /* +0xebae45 */ __asm { MOV R11,-0x50c2b883e5da52e1 }
    /* +0xebae4f */ __asm { CMP R10,R11 }
    /* +0xebae52 */ __asm { JNZ 0x7fffa562ae57 }
    /* +0xebae54 */ __asm { FLD ST7 }
    /* +0xebae57 */ __asm { MOV RBX,qword ptr [RSP + 0x2c8] }
    /* +0xebae5f */ __asm { SHL RBX,0x13 }
    /* +0xebae63 */ __asm { MOVD XMM12,dword ptr [RSP + 0x50] }
    /* +0xebae6a */ __asm { NOP }
    /* +0xebae6c */ __asm { MOV R9,0x0 }
    /* +0xebae73 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xebae7a */ __asm { MOV qword ptr [RSP + 0x1e8],0x0 }
    /* +0xebae86 */ __asm { RDTSC }
    /* +0xebae88 */ __asm { SHL RDX,0x20 }
    /* +0xebae8c */ __asm { OR RDX,RAX }
    /* +0xebae8f */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xebae99 */ __asm { IMUL RDX,R11 }
    /* +0xebae9d */ __asm { MOV R11,-0x22b18422c4a9c65e }
    /* +0xebaea7 */ __asm { ADD RDX,R11 }
    /* +0xebaeaa */ __asm { MOV RCX,RDX }
    /* +0xebaead */ __asm { MOV R8,RDX }
    /* +0xebaeb0 */ __asm { SHR R8,0x1b }
    /* +0xebaeb4 */ __asm { SHR RDX,0x2d }
    /* +0xebaeb8 */ __asm { XOR EDX,R8D }
    /* +0xebaebb */ __asm { MOV R12D,R15D }
    /* +0xebaebe */ __asm { AND R12D,0x20000000 }
    /* +0xebaec5 */ __asm { SHR RCX,0x3b }
    /* +0xebaec9 */ __asm { ROR EDX,CL }
    /* +0xebaecb */ __asm { MOV RBP,qword ptr [RSP + 0x1d8] }
    /* +0xebaed3 */ __asm { ADD RBP,qword ptr [RSP + 0x100] }
    /* +0xebaedb */ __asm { AND EDX,0x3 }
    /* +0xebaede */ __asm { MOVD XMM8,dword ptr [RSP + 0x1ac] }
    /* +0xebaee8 */ __asm { CMP EDX,0x2 }
    /* +0xebaeeb */ __asm { MOV R13,qword ptr [RSP + 0x128] }
    /* +0xebaef3 */ __asm { JC 0x7fffa562b2ac }
    /* +0xebaef9 */ __asm { CMP EDX,0x3 }
    /* +0xebaefc */ __asm { MOV RDI,qword ptr [RSP + 0x210] }
    /* +0xebaf04 */ __asm { MOV RSI,qword ptr [RSP + 0x170] }
    /* +0xebaf0c */ __asm { JZ 0x7fffa562b345 }
    /* +0xebaf12 */ __asm { RDTSC }
    /* +0xebaf14 */ __asm { SHL RDX,0x20 }
    /* +0xebaf18 */ __asm { OR RDX,RAX }
    /* +0xebaf1b */ __asm { MOV R11,-0x83d143f70980d4b }
    /* +0xebaf25 */ __asm { IMUL R11,RDX }
    /* +0xebaf29 */ __asm { MOV R8,0x2237da8dd233d396 }
    /* +0xebaf33 */ __asm { ADD R8,R11 }
    /* +0xebaf36 */ __asm { MOV RDX,R8 }
    /* +0xebaf39 */ __asm { SHR RDX,0x1b }
    /* +0xebaf3d */ __asm { MOV RCX,R8 }
    /* +0xebaf40 */ __asm { SHR RCX,0x3b }
    /* +0xebaf44 */ __asm { SHR R8,0x2d }
    /* +0xebaf48 */ __asm { XOR R8D,EDX }
    /* +0xebaf4b */ __asm { ROR R8D,CL }
    /* +0xebaf4e */ __asm { PUSHFQ }
    /* +0xebaf4f */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xebaf57 */ __asm { POPFQ }
    /* +0xebaf58 */ __asm { MOV dword ptr [RSP + 0xa0],0x254987ea }
    /* +0xebaf63 */ __asm { MOV R11D,dword ptr [RSP + 0xa0] }
    /* +0xebaf6b */ __asm { CMP R8D,0x43358e4 }
    /* +0xebaf72 */ __asm { JA 0x7fffa562b1c8 }
    /* +0xebaf78 */ __asm { MOVD XMM3,ESI }
    /* +0xebaf7c */ __asm { MOV R11W,0xd61d }
    /* +0xebaf81 */ __asm { MOVD XMM1,R11D }
    /* +0xebaf86 */ __asm { PADDW XMM1,XMM3 }
    /* +0xebaf8a */ __asm { MOVD R11D,XMM1 }
    /* +0xebaf8f */ __asm { MOV R8D,0xffffde90 }
    /* +0xebaf95 */ __asm { SUB R8D,R11D }
    /* +0xebaf98 */ __asm { MOVZX R8D,R8W }
    /* +0xebaf9c */ __asm { MOV R10,qword ptr GS:[R8] }
    /* +0xebafa0 */ __asm { MOV R8D,0x6af0fa68 }
    /* +0xebafa6 */ __asm { XOR R8D,0x6cba7b16 }
    /* +0xebafad */ __asm { ROL R8D,0x15 }
    /* +0xebafb1 */ __asm { MOV ECX,ESI }
    /* +0xebafb3 */ __asm { ROR R8D,CL }
    /* +0xebafb6 */ __asm { MOV R11,-0x6ad82c7bf519cfd6 }
    /* +0xebafc0 */ __asm { MOV R10,qword ptr [R10 + 0x30] }
    /* +0xebafc4 */ __asm { MOV R9,0x7adba4761cddd4fb }
    /* +0xebafce */ __asm { IMUL R9,R9,0x252265b3 }
    /* +0xebafd5 */ __asm { ROL R9,CL }
}


// ============================================================================
// Function : FUN_7fffa5649960  |  RVA: 0xed9960  |  Size: 9760 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa564ad38) */

void FUN_7fffa5649960(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
                     uint64_t param_5)

{
  int64_t lVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint32_t uVar7;
  int64_t in_RAX;
  uint64_t uVar8;
  uint64_t *puVar9;
  code *pcVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  uint64_t *******pppppppuVar15;
  char cVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  int64_t lVar19;
  uint64_t *puVar20;
  int64_t lVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint16_t uVar24;
  uint64_t *puVar25;
  uint16_t uVar26;
  uint64_t uVar27;
  int64_t lVar28;
  int64_t lVar29;
  short sVar30;
  uint64_t *puVar31;
  int64_t lVar32;
  bool bVar33;
  uint64_t *******pppppppuStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t *puStack_98;
  uint64_t *puStack_90;
  uint64_t *puStack_88;
  uint64_t uStack_80;
  uint64_t *puStack_78;
  uint64_t *puStack_70;
  uint64_t uStack_68;
  uint64_t *puStack_60;
  int64_t lStack_58;
  uint64_t uStack_50;
  uint64_t *puStack_48;
  
  puVar31 = (uint64_t *)(param_5 ^ 0xffffffff99b562bf);
  uVar8 = (int64_t)param_4 - (int64_t)puVar31;
  bVar2 = (uint8_t)param_3 & 0x1f;
  uStack_50 = param_3;
  if (0x400 < (int64_t)uVar8) {
    uVar27 = in_RAX + (uint64_t)(-0x4cb1fdad << bVar2 | 0xb34e0253U >> 0x20 - bVar2);
    uStack_80 = CONCAT44(uStack_80._4_4_,(int)param_3) | 1;
    puVar14 = param_4;
    uStack_68 = puVar31;
    do {
      puVar31 = uStack_68;
      puVar25 = (uint64_t *)(uVar8 >> 6);
      if ((int64_t)uVar27 < 1) {
        puStack_78 = (uint64_t *)((uVar8 >> 5) - 1);
        puStack_88 = uStack_68 + (int64_t)puStack_78 * 4;
        puVar31 = (uint64_t *)((int64_t)puStack_78 >> 1);
        puStack_70 = (uint64_t *)
                     CONCAT71(puStack_70._1_7_,
                              puVar31 == puStack_78 | (uint8_t)(((uint32_t)uVar8 & 0x20) >> 5));
        puStack_48 = uStack_68 + (int64_t)puVar31 * 4;
        uVar27 = uStack_50;
        puStack_60 = (uint64_t *)uVar8;
        goto LAB_7fffa564b573;
      }
      lStack_58 = (int64_t)puVar25 * 0x20;
      puVar11 = uStack_68 + (int64_t)puVar25 * 4;
      puVar9 = puVar14 + -4;
      lVar19 = (int64_t)puVar9 - (int64_t)uStack_68 >> 5;
      puStack_88 = (uint64_t *)uVar27;
      puStack_78 = puVar11;
      puStack_48 = puVar14;
      if (lVar19 < 0x29) {
        puVar25 = uStack_68;
        if (0xf < uStack_68[3]) {
          puVar25 = (uint64_t *)*uStack_68;
        }
        puVar17 = (uint64_t *)*puVar11;
        uVar27 = puVar11[2];
        uVar8 = uStack_68[2];
        uVar18 = uVar8;
        if (uVar27 <= uVar8) {
          uVar18 = uVar27;
        }
        uVar23 = puVar11[3];
        puVar20 = puVar17;
        if (uVar23 <= (((uint32_t)uStack_50 | 1) * 0xdc06 + 5 & 0xffff)) {
          puVar20 = puVar11;
        }
        iVar5 = (*(code *)((int64_t)(int)((uint32_t)uStack_50 ^ 0x1601170b) + 0x7fffa4ac6763))
                          (puVar20,puVar25,uVar18);
        bVar33 = uVar8 <= uVar27;
        if (iVar5 != 0) {
          bVar33 = -1 < iVar5;
        }
        if (!bVar33) {
          pppppppuStack_b8 = (uint64_t *******)*puVar11;
          uStack_b0 = puVar11[1];
          uStack_a8 = puVar11[2];
          uStack_a0 = puVar11[3];
          uVar8 = *puVar31;
          uVar27 = puVar31[1];
          uVar18 = puVar31[3];
          puVar11[2] = puVar31[2];
          puVar11[3] = uVar18;
          *puVar11 = uVar8;
          puVar11[1] = uVar27;
          puVar31[2] = uStack_a8;
          puVar31[3] = uStack_a0;
          *puVar31 = (uint64_t)pppppppuStack_b8;
          puVar31[1] = uStack_b0;
          puVar17 = (uint64_t *)*puVar11;
          uVar27 = puVar11[2];
          uVar23 = puVar11[3];
        }
        uVar8 = puVar14[-2];
        bVar2 = (uint8_t)uStack_50 & 0xf;
        puVar25 = puVar17;
        if (uVar23 < 0x10) {
          puVar25 = puVar11;
        }
        puVar20 = puVar9;
        if (0xf < puVar14[-1]) {
          puVar20 = (uint64_t *)puVar14[-4];
        }
        uVar18 = uVar8;
        if (uVar27 < uVar8) {
          uVar18 = uVar27;
        }
        iVar5 = (*(code *)(&UNK_7fffa4ac0c8b + (short)(-0x2974 << bVar2 | 0xd68cU >> 0x10 - bVar2)))
                          (puVar20,puVar25,uVar18);
        lVar19 = lStack_58;
        bVar33 = uVar8 < uVar27;
        if (iVar5 != 0) {
          bVar33 = iVar5 < 0;
        }
        if (bVar33) {
          if (puVar9 != puVar11) {
            pppppppuStack_b8 = (uint64_t *******)*puVar9;
            uStack_b0 = puVar14[-3];
            uStack_a8 = puVar14[-2];
            uStack_a0 = puVar14[-1];
            uVar8 = *puVar11;
            uVar27 = puVar11[1];
            uVar18 = puVar11[3];
            puVar14[-2] = puVar11[2];
            puVar14[-1] = uVar18;
            *puVar9 = uVar8;
            puVar14[-3] = uVar27;
            puVar11[2] = uStack_a8;
            puVar11[3] = uStack_a0;
            *puVar11 = (uint64_t)pppppppuStack_b8;
            puVar11[1] = uStack_b0;
            puVar17 = (uint64_t *)*puVar11;
            uVar27 = puVar11[2];
            uVar23 = puVar11[3];
          }
          uVar8 = puVar31[2];
          if (uVar23 < 0x10) {
            puVar17 = puVar11;
          }
          puVar25 = puVar31;
          if (0xf < puVar31[3]) {
            puVar25 = (uint64_t *)*puVar31;
          }
          uVar18 = uVar27;
          if (uVar8 < uVar27) {
            uVar18 = uVar8;
          }
          uVar26 = (uint16_t)uStack_50 ^ 0x12e6;
          iVar5 = (*(code *)((int64_t)(short)~(uVar26 << 6 | uVar26 >> 10) + 0x7fffa4ac1bd4))
                            (puVar17,puVar25,uVar18);
          bVar33 = uVar8 <= uVar27;
          if (iVar5 != 0) {
            bVar33 = -1 < iVar5;
          }
          if (!bVar33) {
            pppppppuStack_b8 = (uint64_t *******)*puVar11;
            uStack_b0 = puVar11[1];
            uStack_a8 = puVar11[2];
            uStack_a0 = puVar11[3];
            uVar8 = *puVar31;
            uVar27 = puVar31[1];
            uVar18 = puVar31[3];
            puVar11[2] = puVar31[2];
            puVar11[3] = uVar18;
            *puVar11 = uVar8;
            puVar11[1] = uVar27;
            puVar31[2] = uStack_a8;
            puVar31[3] = uStack_a0;
            *puVar31 = (uint64_t)pppppppuStack_b8;
            puVar31[1] = uStack_b0;
          }
        }
      }
      else {
        puVar20 = (uint64_t *)(lVar19 + 1U >> 3);
        puVar17 = uStack_68 + (int64_t)puVar20 * 4;
        puVar31 = (uint64_t *)uStack_68[(int64_t)puVar20 * 4];
        uVar8 = uStack_68[(int64_t)puVar20 * 4 + 2];
        uVar27 = uStack_68[2];
        uVar18 = uVar27;
        if (uVar8 <= uVar27) {
          uVar18 = uVar8;
        }
        uVar23 = uStack_68[(int64_t)puVar20 * 4 + 3];
        puVar13 = puVar31;
        if (uVar23 < 0x10) {
          puVar13 = puVar17;
        }
        puVar12 = uStack_68;
        if ((uint64_t)((uint32_t)((int)uStack_80 * 0x66504800) >> 0xb) < uStack_68[3]) {
          puVar12 = (uint64_t *)*uStack_68;
        }
        puStack_98 = puVar9;
        puStack_90 = puVar25;
        puStack_70 = puVar20;
        iVar5 = FUN_7fffa4abafc0(puVar13,puVar12,uVar18);
        uVar18 = uStack_50;
        bVar33 = uVar27 <= uVar8;
        if (iVar5 != 0) {
          bVar33 = -1 < iVar5;
        }
        if (!bVar33) {
          pppppppuStack_b8 = (uint64_t *******)*puVar17;
          uStack_b0 = puVar17[1];
          uStack_a8 = puVar17[2];
          uStack_a0 = puVar17[3];
          uVar8 = *uStack_68;
          uVar27 = uStack_68[1];
          uVar23 = uStack_68[3];
          puVar17[2] = uStack_68[2];
          puVar17[3] = uVar23;
          *puVar17 = uVar8;
          puVar17[1] = uVar27;
          uStack_68[2] = uStack_a8;
          uStack_68[3] = uStack_a0;
          *uStack_68 = (uint64_t)pppppppuStack_b8;
          uStack_68[1] = uStack_b0;
          uVar23 = puVar17[3];
          puVar31 = (uint64_t *)*puVar17;
          uVar8 = puVar17[2];
        }
        puVar25 = uStack_68 + (int64_t)puStack_70 * 8;
        uVar27 = puVar25[2];
        if (uVar23 < 0x10) {
          puVar31 = puVar17;
        }
        puVar9 = puVar25;
        if (0xf < puVar25[3]) {
          puVar9 = (uint64_t *)*puVar25;
        }
        uVar26 = (short)uStack_50 + 0x8fb8;
        uVar23 = uVar27;
        if (uVar8 < uVar27) {
          uVar23 = uVar8;
        }
        iVar5 = (*(code *)((int64_t)(short)(uVar26 * 0x1000 | uVar26 >> 4) + 0x7fffa4abc0d0))
                          (puVar9,puVar31,uVar23);
        bVar33 = uVar27 < uVar8;
        if (iVar5 != 0) {
          bVar33 = iVar5 < (int)(-(int)uVar18 - 0xa0aaU & 0xffff);
        }
        if (bVar33) {
          pppppppuStack_b8 = (uint64_t *******)*puVar25;
          uStack_b0 = puVar25[1];
          uVar18 = puVar25[2];
          uVar23 = puVar25[3];
          uVar8 = *puVar17;
          uVar27 = puVar17[1];
          uVar22 = puVar17[3];
          puVar25[2] = puVar17[2];
          puVar25[3] = uVar22;
          *puVar25 = uVar8;
          puVar25[1] = uVar27;
          uStack_a8._0_4_ = (uint32_t)uVar18;
          uStack_a8._4_4_ = (uint32_t)(uVar18 >> 0x20);
          uStack_a0._0_4_ = (uint32_t)uVar23;
          uStack_a0._4_4_ = (uint32_t)(uVar23 >> 0x20);
          *(uint32_t *)(puVar17 + 2) = (uint32_t)uStack_a8;
          *(uint32_t *)((int64_t)puVar17 + 0x14) = uStack_a8._4_4_;
          *(uint32_t *)(puVar17 + 3) = (uint32_t)uStack_a0;
          *(uint32_t *)((int64_t)puVar17 + 0x1c) = uStack_a0._4_4_;
          *puVar17 = (uint64_t)pppppppuStack_b8;
          puVar17[1] = uStack_b0;
          uVar8 = puVar17[2];
          uVar27 = uStack_68[2];
          uVar22 = uVar8;
          if (uVar27 < uVar8) {
            uVar22 = uVar27;
          }
          puVar31 = puVar17;
          if ((uint64_t)((uint32_t)uStack_50 ^ 0xe9fe5f59) < puVar17[3]) {
            puVar31 = (uint64_t *)*puVar17;
          }
          iVar5 = (int)uStack_80 * 0x6790e741;
          puVar25 = uStack_68;
          if (0xf < uStack_68[3]) {
            puVar25 = (uint64_t *)*uStack_68;
          }
          uStack_a8 = uVar18;
          uStack_a0 = uVar23;
          iVar6 = (*(code *)(&UNK_7fffa4ac131e +
                            (short)(((short)uStack_50 * -0x4000 |
                                    (uint16_t)(0xbcdcU - (short)uStack_50) >> 2) ^ 0xbc3)))
                            (puVar31,puVar25,uVar22);
          bVar33 = iVar6 == 0;
          if (iVar5 != -0x6c7249e9) {
            bVar33 = 0 < iVar6;
          }
          bVar4 = uVar27 <= uVar8;
          if (!bVar33) {
            bVar4 = -1 < iVar6;
          }
          if (!bVar4) {
            pppppppuStack_b8 = (uint64_t *******)*puVar17;
            uStack_b0 = puVar17[1];
            uStack_a8 = puVar17[2];
            uStack_a0 = puVar17[3];
            uVar8 = *uStack_68;
            uVar27 = uStack_68[1];
            uVar18 = uStack_68[3];
            puVar17[2] = uStack_68[2];
            puVar17[3] = uVar18;
            *puVar17 = uVar8;
            puVar17[1] = uVar27;
            uStack_68[2] = uStack_a8;
            uStack_68[3] = uStack_a0;
            *uStack_68 = (uint64_t)pppppppuStack_b8;
            uStack_68[1] = uStack_b0;
          }
        }
        puVar31 = (uint64_t *)*puVar11;
        uVar8 = puVar11[2];
        puVar25 = puVar11 + (int64_t)puVar20 * -4;
        uVar27 = puVar25[2];
        uVar18 = uVar27;
        if (uVar8 <= uVar27) {
          uVar18 = uVar8;
        }
        puStack_60 = (uint64_t *)CONCAT71(puStack_60._1_7_,uVar27 <= uVar8);
        uVar27 = puVar11[3];
        puVar9 = puVar25;
        if (0xf < puVar25[3]) {
          puVar9 = (uint64_t *)*puVar25;
        }
        uVar26 = (uint16_t)uStack_50 ^ 0xc686;
        puVar13 = puVar11 + (int64_t)puVar20 * 4;
        puVar20 = puVar11;
        if (0xf < uVar27) {
          puVar20 = puVar31;
        }
        iVar5 = (*(code *)((int64_t)(short)(0x28cb - (uint16_t)uStack_50) + 0x7fffa4abe64b))
                          (puVar20,puVar9,uVar18);
        cVar16 = (char)puStack_60;
        if (iVar5 != 0) {
          cVar16 = (short)((uVar26 << 9 | uVar26 >> 7) * -0x41fb) < iVar5;
        }
        if (cVar16 == '\0') {
          pppppppuStack_b8 = (uint64_t *******)*puVar11;
          uStack_b0 = puVar11[1];
          uStack_a8 = puVar11[2];
          uStack_a0 = puVar11[3];
          uVar8 = *puVar25;
          uVar27 = puVar25[1];
          uVar18 = puVar25[3];
          puVar11[2] = puVar25[2];
          puVar11[3] = uVar18;
          *puVar11 = uVar8;
          puVar11[1] = uVar27;
          puVar25[2] = uStack_a8;
          puVar25[3] = uStack_a0;
          *puVar25 = (uint64_t)pppppppuStack_b8;
          puVar25[1] = uStack_b0;
          puVar31 = (uint64_t *)*puVar11;
          uVar8 = puVar11[2];
          uVar27 = puVar11[3];
        }
        uVar18 = puVar13[2];
        uVar23 = uVar18;
        if (uVar8 < uVar18) {
          uVar23 = uVar8;
        }
        sVar30 = (short)uStack_50;
        if (uVar27 < 0x10) {
          puVar31 = puVar11;
        }
        puVar11 = puVar13;
        if ((uint64_t)(uint16_t)((sVar30 + 0xa82aU) * 0x200 | (uint16_t)(sVar30 + 0xa82aU) >> 7) <
            puVar13[3]) {
          puVar11 = (uint64_t *)*puVar13;
        }
        bVar2 = (uint8_t)uStack_50 & 0xf;
        iVar5 = (*(code *)((int64_t)(short)(-0x680a << bVar2 | 0x97f6U >> 0x10 - bVar2) +
                          0x7fffa4abb21b))(puVar11,puVar31,uVar23);
        bVar33 = uVar18 < uVar8;
        if (iVar5 != 0) {
          bVar33 = iVar5 < 0;
        }
        if (bVar33) {
          pppppppuStack_b8 = (uint64_t *******)*puVar13;
          uStack_b0 = puVar13[1];
          uVar18 = puVar13[2];
          uVar23 = puVar13[3];
          uVar8 = *puStack_78;
          uVar27 = puStack_78[1];
          uVar22 = puStack_78[3];
          puVar13[2] = puStack_78[2];
          puVar13[3] = uVar22;
          *puVar13 = uVar8;
          puVar13[1] = uVar27;
          uStack_a8._0_4_ = (uint32_t)uVar18;
          uStack_a8._4_4_ = (uint32_t)(uVar18 >> 0x20);
          uStack_a0._0_4_ = (uint32_t)uVar23;
          uStack_a0._4_4_ = (uint32_t)(uVar23 >> 0x20);
          *(uint32_t *)(puStack_78 + 2) = (uint32_t)uStack_a8;
          *(uint32_t *)((int64_t)puStack_78 + 0x14) = uStack_a8._4_4_;
          *(uint32_t *)(puStack_78 + 3) = (uint32_t)uStack_a0;
          *(uint32_t *)((int64_t)puStack_78 + 0x1c) = uStack_a0._4_4_;
          *puStack_78 = (uint64_t)pppppppuStack_b8;
          puStack_78[1] = uStack_b0;
          uVar8 = puVar25[2];
          uVar27 = puStack_78[2];
          uVar22 = uVar27;
          if (uVar8 < uVar27) {
            uVar22 = uVar8;
          }
          puVar31 = puStack_78;
          if (0xf < puStack_78[3]) {
            puVar31 = (uint64_t *)*puStack_78;
          }
          uVar7 = (uint32_t)uStack_50;
          iVar5 = (uint32_t)uStack_50 + 0x84e195f;
          puVar11 = puVar25;
          if (0xf < puVar25[3]) {
            puVar11 = (uint64_t *)*puVar25;
          }
          sVar30 = (short)uStack_50;
          uStack_a8 = uVar18;
          uStack_a0 = uVar23;
          iVar6 = (*(code *)((int64_t)
                             (int)(((uint32_t)uStack_50 ^ 0x160722c1) << 0x1d |
                                  ((uint32_t)uStack_50 ^ 0x160722c1) >> 3) + 0x7fffa4ac800e))
                            (puVar31,puVar11,uVar22);
          bVar33 = uVar8 <= uVar27;
          if ((uint32_t)(iVar5 * 0x322f71cb) <= (uVar7 ^ 0xabb9918) + 0x44be999d) {
            bVar33 = (int64_t)uVar27 < (int64_t)uVar8;
          }
          bVar4 = (short)(sVar30 + -0x5f57) < iVar6;
          if (iVar6 == 0) {
            bVar4 = bVar33;
          }
          if (!bVar4) {
            pppppppuStack_b8 = (uint64_t *******)*puStack_78;
            uStack_b0 = puStack_78[1];
            uStack_a8 = puStack_78[2];
            uStack_a0 = puStack_78[3];
            uVar8 = *puVar25;
            uVar27 = puVar25[1];
            uVar18 = puVar25[3];
            puStack_78[2] = puVar25[2];
            puStack_78[3] = uVar18;
            *puStack_78 = uVar8;
            puStack_78[1] = uVar27;
            puVar25[2] = uStack_a8;
            puVar25[3] = uStack_a0;
            *puVar25 = (uint64_t)pppppppuStack_b8;
            puVar25[1] = uStack_b0;
          }
        }
        puVar25 = puStack_70;
        puVar31 = (uint64_t *)puVar14[(int64_t)puStack_70 * -4 + -4];
        uVar8 = puVar14[(int64_t)puStack_70 * -4 + -2];
        uVar27 = puVar14[(int64_t)puStack_70 * -4 + -1];
        puStack_60 = puVar14 + (int64_t)puStack_70 * -4 + -4;
        puVar11 = puVar31;
        if (uVar27 < 0x10) {
          puVar11 = puStack_60;
        }
        puVar9 = puStack_98 + (int64_t)puStack_70 * -8;
        uVar18 = puVar9[2];
        uVar23 = uVar18;
        if (uVar8 <= uVar18) {
          uVar23 = uVar8;
        }
        puVar20 = puVar9;
        if ((uint64_t)(uint16_t)((-0x20a3 - sVar30) * 2 | (uint16_t)((short)(-0x20a3 - sVar30) < 0)) <
            puVar9[3]) {
          puVar20 = (uint64_t *)*puVar9;
        }
        uVar26 = (short)uStack_50 + 0xa0a9;
        iVar5 = (*(code *)(&UNK_7fffa4ac2e92 + (short)((short)uStack_50 + 0x21d8)))
                          (puVar11,puVar20,uVar23);
        lVar19 = lStack_58;
        puVar11 = puStack_78;
        bVar33 = uVar18 <= uVar8;
        if (iVar5 != 0) {
          bVar33 = (short)(uVar26 * 0x10 | uVar26 >> 0xc) < iVar5;
        }
        if (!bVar33) {
          pppppppuStack_b8 = (uint64_t *******)*puStack_60;
          uStack_b0 = puStack_60[1];
          uStack_a8 = puStack_60[2];
          uStack_a0 = puStack_60[3];
          uVar8 = *puVar9;
          uVar27 = puVar9[1];
          uVar18 = puVar9[3];
          puStack_60[2] = puVar9[2];
          puStack_60[3] = uVar18;
          *puStack_60 = uVar8;
          puStack_60[1] = uVar27;
          puVar9[2] = uStack_a8;
          puVar9[3] = uStack_a0;
          *puVar9 = (uint64_t)pppppppuStack_b8;
          puVar9[1] = uStack_b0;
          uVar27 = puVar14[(int64_t)puVar25 * -4 + -1];
          puVar31 = (uint64_t *)puVar14[(int64_t)puVar25 * -4 + -4];
          uVar8 = puVar14[(int64_t)puVar25 * -4 + -2];
        }
        uVar18 = puVar14[-2];
        uVar23 = uVar18;
        if (uVar8 < uVar18) {
          uVar23 = uVar8;
        }
        if (uVar27 < 0x10) {
          puVar31 = puStack_60;
        }
        puVar20 = puStack_98;
        if (0xf < puVar14[-1]) {
          puVar20 = (uint64_t *)puVar14[-4];
        }
        iVar5 = (*(code *)(&UNK_7fffa4ac780a + (int)((int)uStack_80 * 0x450520ac ^ 0xad7ad9c2)))
                          (puVar20,puVar31,uVar23);
        bVar33 = uVar18 < uVar8;
        if (iVar5 != 0) {
          bVar33 = iVar5 < 0;
        }
        if (bVar33) {
          pppppppuStack_b8 = (uint64_t *******)*puStack_98;
          uStack_b0 = puStack_98[1];
          uVar8 = puStack_98[2];
          uVar27 = puStack_98[3];
          uVar18 = *puStack_60;
          uVar23 = puStack_60[1];
          uVar22 = puStack_60[3];
          puStack_98[2] = puStack_60[2];
          puStack_98[3] = uVar22;
          *puStack_98 = uVar18;
          puStack_98[1] = uVar23;
          uStack_a8._0_4_ = (uint32_t)uVar8;
          uStack_a8._4_4_ = (uint32_t)(uVar8 >> 0x20);
          uStack_a0._0_4_ = (uint32_t)uVar27;
          uStack_a0._4_4_ = (uint32_t)(uVar27 >> 0x20);
          *(uint32_t *)(puStack_60 + 2) = (uint32_t)uStack_a8;
          *(uint32_t *)((int64_t)puStack_60 + 0x14) = uStack_a8._4_4_;
          *(uint32_t *)(puStack_60 + 3) = (uint32_t)uStack_a0;
          *(uint32_t *)((int64_t)puStack_60 + 0x1c) = uStack_a0._4_4_;
          *puStack_60 = (uint64_t)pppppppuStack_b8;
          puStack_60[1] = uStack_b0;
          puVar31 = puStack_60;
          if (0xf < puVar14[(int64_t)puVar25 * -4 + -1]) {
            puVar31 = (uint64_t *)puVar14[(int64_t)puVar25 * -4 + -4];
          }
          uVar18 = puVar14[(int64_t)puVar25 * -4 + -2];
          uVar23 = puVar9[2];
          bVar3 = (uint8_t)uStack_50 & 0xf;
          bVar2 = (uint8_t)uStack_50 & 0xf;
          puVar20 = puVar9;
          if (0xf < puVar9[3]) {
            puVar20 = (uint64_t *)*puVar9;
          }
          uVar22 = uVar18;
          if (uVar23 < uVar18) {
            uVar22 = uVar23;
          }
          uStack_a8 = uVar8;
          uStack_a0 = uVar27;
          uVar7 = (*(code *)(&UNK_7fffa4ac019f + (short)(-0x7948 << bVar2 | 0x86b8U >> 0x10 - bVar2)
                            ))(puVar31,puVar20,uVar22);
          bVar33 = uVar23 <= uVar18;
          if (uVar7 != (uint16_t)(0U >> bVar3 | 0 << 0x10 - bVar3)) {
            bVar33 = -1 < (int)uVar7;
          }
          if (!bVar33) {
            pppppppuStack_b8 = (uint64_t *******)*puStack_60;
            uStack_b0 = puStack_60[1];
            uStack_a8 = puStack_60[2];
            uStack_a0 = puStack_60[3];
            uVar8 = *puVar9;
            uVar27 = puVar9[1];
            uVar18 = puVar9[3];
            puStack_60[2] = puVar9[2];
            puStack_60[3] = uVar18;
            *puStack_60 = uVar8;
            puStack_60[1] = uVar27;
            puVar9[2] = uStack_a8;
            puVar9[3] = uStack_a0;
            *puVar9 = (uint64_t)pppppppuStack_b8;
            puVar9[1] = uStack_b0;
          }
        }
        puVar9 = (uint64_t *)*puVar11;
        uVar18 = puVar11[2];
        uVar8 = puVar17[2];
        uVar27 = puVar11[3];
        puVar31 = puVar17;
        if (0xf < puVar17[3]) {
          puVar31 = (uint64_t *)*puVar17;
        }
        uVar23 = uVar8;
        if (uVar18 <= uVar8) {
          uVar23 = uVar18;
        }
        puVar20 = puVar9;
        if (uVar27 <= 0xf - (uint64_t)
                            ((uint64_t)(int64_t)((int)uStack_80 * -0xcf68929) <
                            (uint64_t)((int)uStack_50 + 0x3565ed38))) {
          puVar20 = puVar11;
        }
        iVar5 = (*(code *)(&UNK_7fffa4ac0df3 +
                          (short)(((uint16_t)uStack_50 | 1) * 0x727 + 0x36e3 ^ 0xbfe9)))
                          (puVar20,puVar31,uVar23);
        puVar31 = uStack_68;
        bVar33 = uVar8 <= uVar18;
        if (iVar5 != 0) {
          bVar33 = -1 < iVar5;
        }
        if ((!bVar33) && (puStack_90 != puStack_70)) {
          pppppppuStack_b8 = (uint64_t *******)*puVar11;
          uStack_b0 = puVar11[1];
          uStack_a8 = puVar11[2];
          uStack_a0 = puVar11[3];
          uVar8 = *puVar17;
          uVar27 = puVar17[1];
          uVar18 = puVar17[3];
          puVar11[2] = puVar17[2];
          puVar11[3] = uVar18;
          *puVar11 = uVar8;
          puVar11[1] = uVar27;
          puVar17[2] = uStack_a8;
          puVar17[3] = uStack_a0;
          *puVar17 = (uint64_t)pppppppuStack_b8;
          puVar17[1] = uStack_b0;
          puVar9 = (uint64_t *)*puVar11;
          uVar18 = puVar11[2];
          uVar27 = puVar11[3];
        }
        uVar8 = puVar14[(int64_t)puVar25 * -4 + -2];
        puVar20 = puStack_60;
        if (0xf < puVar14[(int64_t)puVar25 * -4 + -1]) {
          puVar20 = (uint64_t *)puVar14[(int64_t)puVar25 * -4 + -4];
        }
        puVar25 = puVar9;
        if (uVar27 < 0x10) {
          puVar25 = puVar11;
        }
        uVar23 = uVar8;
        if (uVar18 < uVar8) {
          uVar23 = uVar18;
        }
        iVar5 = (*(code *)((int64_t)(short)(0x45ad - (short)uStack_50) + 0x7fffa4abc969))
                          (puVar20,puVar25,uVar23);
        bVar33 = uVar8 < uVar18;
        if (iVar5 != 0) {
          bVar33 = iVar5 < 0;
        }
        if (bVar33) {
          if (puStack_60 != puVar11) {
            pppppppuStack_b8 = (uint64_t *******)*puStack_60;
            uStack_b0 = puStack_60[1];
            uStack_a8 = puStack_60[2];
            uStack_a0 = puStack_60[3];
            uVar8 = *puVar11;
            uVar27 = puVar11[1];
            uVar18 = puVar11[3];
            puStack_60[2] = puVar11[2];
            puStack_60[3] = uVar18;
            *puStack_60 = uVar8;
            puStack_60[1] = uVar27;
            puVar11[2] = uStack_a8;
            puVar11[3] = uStack_a0;
            *puVar11 = (uint64_t)pppppppuStack_b8;
            puVar11[1] = uStack_b0;
            uVar27 = puVar11[3];
            puVar9 = (uint64_t *)*puVar11;
            uVar18 = puVar11[2];
          }
          uVar8 = puVar17[2];
          uVar23 = uVar18;
          if (uVar8 < uVar18) {
            uVar23 = uVar8;
          }
          puVar25 = puVar17;
          if (0xf < puVar17[3]) {
            puVar25 = (uint64_t *)*puVar17;
          }
          bVar2 = (uint8_t)uStack_50 & 0xf;
          if (uVar27 <= (uint16_t)(0x3c00 << bVar2 | 0x3c00U >> 0x10 - bVar2)) {
            puVar9 = puVar11;
          }
          iVar5 = (*(code *)((int64_t)(short)(~((short)uStack_50 + 0x53a6U) * 0x75e7) +
                            0x7fffa4abd30b))(puVar9,puVar25,uVar23);
          bVar33 = uVar8 <= uVar18;
          if (iVar5 != 0) {
            bVar33 = -1 < iVar5;
          }
          if ((puStack_90 != puStack_70) && (!bVar33)) {
            pppppppuStack_b8 = (uint64_t *******)*puVar11;
            uStack_b0 = puVar11[1];
            uStack_a8 = puVar11[2];
            uStack_a0 = puVar11[3];
            uVar8 = *puVar17;
            uVar27 = puVar17[1];
            uVar18 = puVar17[3];
            puVar11[2] = puVar17[2];
            puVar11[3] = uVar18;
            *puVar11 = uVar8;
            puVar11[1] = uVar27;
            puVar17[2] = uStack_a8;
            puVar17[3] = uStack_a0;
            *puVar17 = (uint64_t)pppppppuStack_b8;
            puVar17[1] = uStack_b0;
          }
        }
      }
      do {
        puVar25 = puStack_78;
        if (puStack_78 <= puVar31) break;
        bVar2 = (uint8_t)uStack_50 & 0xf;
        puVar11 = puStack_78 + -4;
        if (0xf < puStack_78[-1]) {
          puVar11 = (uint64_t *)puStack_78[-4];
        }
        uVar8 = puStack_78[-2];
        puVar9 = puStack_78;
        if (0xf < puStack_78[3]) {
          puVar9 = (uint64_t *)*puStack_78;
        }
        uVar27 = puStack_78[2];
        uVar18 = uVar8;
        if (uVar27 < uVar8) {
          uVar18 = uVar27;
        }
        puStack_78 = puStack_78 + -4;
        iVar5 = (*(code *)((int64_t)(short)(-0x60d2 << bVar2 | 0x9f2eU >> 0x10 - bVar2) +
                          0x7fffa4abe419))(puVar11,puVar9,uVar18);
        bVar33 = uVar8 < uVar27;
        if (iVar5 != 0) {
          bVar33 = iVar5 < 0;
        }
        if (bVar33) break;
        iVar5 = (*(code *)((int64_t)(int)(-0x16024fe7 - (uint32_t)uStack_50) + 0x7fffa4ac5efd))
                          (puVar9,puVar11,uVar18);
        bVar33 = iVar5 < 0;
        if (iVar5 == 0) {
          bVar33 = uVar27 < uVar8;
        }
      } while (!bVar33);
      puStack_78 = (uint64_t *)((int64_t)puVar31 + lVar19);
      do {
        puVar31 = puStack_78 + 4;
        if (puVar14 <= puVar31) break;
        puVar11 = puVar25;
        if (0xf < puVar25[3]) {
          puVar11 = (uint64_t *)*puVar25;
        }
        uVar8 = puVar25[2];
        uVar27 = puStack_78[6];
        uVar18 = uVar27;
        if (uVar8 < uVar27) {
          uVar18 = uVar8;
        }
        puVar9 = puVar31;
        if ((uint64_t)(~((uint32_t)uStack_50 + 0x9e40c698) * 0x63f4181f) < puStack_78[7]) {
          puVar9 = (uint64_t *)*puVar31;
        }
        uVar26 = (uint16_t)uStack_50 | 1;
        puStack_78 = puVar31;
        iVar5 = (*(code *)(&UNK_7fffa4ac12c1 + (short)((uint16_t)uStack_50 + 0x3da9)))
                          (puVar9,puVar11,uVar18);
        bVar33 = uVar27 < uVar8;
        if (iVar5 != 0) {
          bVar33 = iVar5 < (int)(uint32_t)(uint16_t)~(uVar26 * 0xe64 | (uint16_t)(uVar26 * 0x399) >> 0xe);
        }
        puVar31 = puStack_78;
        if (bVar33) break;
        uVar7 = (*(code *)((int64_t)((int)uStack_80 * -0x7a021f23) + 0x7fffa4ac41a5))
                          (puVar11,puVar9,uVar18);
        bVar33 = (int)uVar7 < 0;
        if (uVar7 == (0xc8115f56 - (uint32_t)uStack_50 & 0xffff)) {
          bVar33 = uVar8 < uVar27;
        }
        puVar31 = puStack_78;
      } while (!bVar33);
      puStack_78 = puVar31;
      puVar9 = puStack_78;
      puVar31 = puVar25;
      puVar11 = puStack_78;
LAB_7fffa564aabf:
      puStack_78 = puVar11;
      param_4 = puVar31;
      if (puVar9 < puVar14) {
        puVar31 = puVar9;
        puStack_70 = puVar25;
        do {
          puVar9 = puVar31;
          uVar8 = param_4[2];
          uVar27 = puVar9[2];
          uVar18 = uVar8;
          if (uVar27 < uVar8) {
            uVar18 = uVar27;
          }
          puVar31 = puVar9;
          if (0xf < puVar9[3]) {
            puVar31 = (uint64_t *)*puVar9;
          }
          puVar25 = param_4;
          if (0xf < param_4[3]) {
            puVar25 = (uint64_t *)*param_4;
          }
          iVar5 = (*(code *)(&UNK_7fffa4acaf78 + (int)(0x69b0edcd - ((uint32_t)uStack_50 + 0x7fb38e2f)))
                  )(puVar25,puVar31,uVar18);
          bVar33 = uVar8 < uVar27;
          if (iVar5 != 0) {
            bVar33 = iVar5 < 0;
          }
          if (!bVar33) {
            iVar5 = (*(code *)((int64_t)(int)((int)uStack_80 * 0x1cd8399 + 0x3f9e48fcU ^ 0xce69845)
                              + 0x7fffa4ac5f02))(puVar31,puVar25,uVar18);
            bVar33 = iVar5 < 0;
            if (iVar5 == 0) {
              bVar33 = uVar27 < uVar8;
            }
            if (bVar33) goto LAB_7fffa564ac86;
            if (puVar9 != puStack_78) {
              pppppppuStack_b8 = (uint64_t *******)*puStack_78;
              uStack_b0 = puStack_78[1];
              uStack_a8 = puStack_78[2];
              uStack_a0 = puStack_78[3];
              uVar8 = *puVar9;
              uVar27 = puVar9[1];
              uVar18 = puVar9[3];
              puStack_78[2] = puVar9[2];
              puStack_78[3] = uVar18;
              *puStack_78 = uVar8;
              puStack_78[1] = uVar27;
              puVar9[2] = uStack_a8;
              puVar9[3] = uStack_a0;
              *puVar9 = (uint64_t)pppppppuStack_b8;
              puVar9[1] = uStack_b0;
            }
            puStack_78 = puStack_78 + 4;
          }
          puVar31 = puVar9 + 4;
        } while (puVar9 + 4 < puVar14);
        puVar9 = puVar9 + 4;
LAB_7fffa564ac86:
        puVar25 = puStack_70;
        if (uStack_68 < puStack_70) goto LAB_7fffa564ac98;
      }
      else if (uStack_68 < puVar25) {
LAB_7fffa564ac98:
        puStack_70 = puVar9;
        do {
          puVar31 = puVar25 + -4;
          uVar8 = puVar25[-2];
          uVar27 = param_4[2];
          uVar18 = uVar8;
          if (uVar27 < uVar8) {
            uVar18 = uVar27;
          }
          puVar11 = puVar31;
          if (0xf < puVar25[-1]) {
            puVar11 = (uint64_t *)*puVar31;
          }
          puVar9 = param_4;
          if (0xf < param_4[3]) {
            puVar9 = (uint64_t *)*param_4;
          }
          iVar5 = (*(code *)((int64_t)(short)(((uint16_t)uStack_50 ^ 0xd171) + 0x65eb) +
                            0x7fffa4abbbae))(puVar11,puVar9,uVar18);
          bVar33 = uVar8 < uVar27;
          if (iVar5 != 0) {
            bVar33 = iVar5 < 0;
          }
          if (bVar33) {
            puVar11 = param_4;
          }
          else {
            iVar6 = (int)uStack_50;
            iVar5 = (*(code *)((int64_t)(short)((short)uStack_50 + 0x32e7) + 0x7fffa4ac1d83))
                              (puVar9,puVar11,uVar18);
            bVar33 = uVar27 < uVar8;
            if (iVar5 != 0) {
              bVar33 = iVar5 < 0;
            }
            if (bVar33) break;
            puVar11 = param_4 + -4;
            bVar33 = puVar25 < param_4;
            if (0x5286e7c6 < iVar6 + 0xd19904d9U) {
              bVar33 = puVar25 == param_4;
            }
            if (!bVar33) {
              pppppppuStack_b8 = (uint64_t *******)*puVar11;
              uStack_b0 = param_4[-3];
              uStack_a8 = param_4[-2];
              uStack_a0 = param_4[-1];
              uVar8 = *puVar31;
              uVar27 = puVar25[-3];
              uVar18 = puVar25[-1];
              param_4[-2] = puVar25[-2];
              param_4[-1] = uVar18;
              *puVar11 = uVar8;
              param_4[-3] = uVar27;
              puVar25[-2] = uStack_a8;
              puVar25[-1] = uStack_a0;
              *puVar31 = (uint64_t)pppppppuStack_b8;
              puVar25[-3] = uStack_b0;
            }
          }
          param_4 = puVar11;
          puVar25 = puVar31;
        } while (uStack_68 < puVar31);
        puVar9 = puStack_70;
      }
      puVar31 = uStack_68;
      puVar11 = puStack_78;
      if ((puVar9 != puVar14) || (puVar25 != uStack_68)) {
        if (puVar25 == uStack_68) {
          if (param_4 != puStack_78 && puStack_78 != puVar9) {
            pppppppuStack_b8 = (uint64_t *******)*param_4;
            uStack_b0 = param_4[1];
            uStack_a8 = param_4[2];
            uStack_a0 = param_4[3];
            uVar8 = *puStack_78;
            uVar27 = puStack_78[1];
            uVar18 = puStack_78[3];
            param_4[2] = puStack_78[2];
            param_4[3] = uVar18;
            *param_4 = uVar8;
            param_4[1] = uVar27;
            puStack_78[2] = uStack_a8;
            puStack_78[3] = uStack_a0;
            *puStack_78 = (uint64_t)pppppppuStack_b8;
            puStack_78[1] = uStack_b0;
          }
          if (param_4 != puVar9) {
            pppppppuStack_b8 = (uint64_t *******)*param_4;
            uStack_b0 = param_4[1];
            uStack_a8 = param_4[2];
            uStack_a0 = param_4[3];
            uVar8 = *puVar9;
            uVar27 = puVar9[1];
            uVar18 = puVar9[3];
            param_4[2] = puVar9[2];
            param_4[3] = uVar18;
            *param_4 = uVar8;
            param_4[1] = uVar27;
            puVar9[2] = uStack_a8;
            puVar9[3] = uStack_a0;
            *puVar9 = (uint64_t)pppppppuStack_b8;
            puVar9[1] = uStack_b0;
          }
          puStack_78 = puStack_78 + 4;
          param_4 = param_4 + 4;
          puVar17 = puVar25;
LAB_7fffa564aab4:
          puVar9 = puVar9 + 4;
          puVar25 = puVar17;
          puVar31 = param_4;
          puVar11 = puStack_78;
        }
        else {
          puVar17 = puVar25 + -4;
          if (puVar9 != puVar14) {
            if (puVar9 != puVar17) {
              pppppppuStack_b8 = (uint64_t *******)*puVar9;
              uStack_b0 = puVar9[1];
              uStack_a8 = puVar9[2];
              uStack_a0 = puVar9[3];
              uVar8 = *puVar17;
              uVar27 = puVar25[-3];
              uVar18 = puVar25[-1];
              puVar9[2] = puVar25[-2];
              puVar9[3] = uVar18;
              *puVar9 = uVar8;
              puVar9[1] = uVar27;
              puVar25[-2] = uStack_a8;
              puVar25[-1] = uStack_a0;
              *puVar17 = (uint64_t)pppppppuStack_b8;
              puVar25[-3] = uStack_b0;
            }
            goto LAB_7fffa564aab4;
          }
          puVar31 = param_4 + -4;
          if (puVar25 != param_4) {
            pppppppuStack_b8 = (uint64_t *******)*puVar17;
            uStack_b0 = puVar25[-3];
            uStack_a8 = puVar25[-2];
            uStack_a0 = puVar25[-1];
            uVar8 = *puVar31;
            uVar27 = param_4[-3];
            uVar18 = param_4[-1];
            puVar25[-2] = param_4[-2];
            puVar25[-1] = uVar18;
            *puVar17 = uVar8;
            puVar25[-3] = uVar27;
            param_4[-2] = uStack_a8;
            param_4[-1] = uStack_a0;
            *puVar31 = (uint64_t)pppppppuStack_b8;
            param_4[-3] = uStack_b0;
          }
          puVar11 = puStack_78 + -4;
          puVar25 = puVar17;
          if (param_4 != puStack_78) {
            pppppppuStack_b8 = (uint64_t *******)*puVar31;
            uStack_b0 = param_4[-3];
            uStack_a8 = param_4[-2];
            uStack_a0 = param_4[-1];
            uVar8 = *puVar11;
            uVar27 = puStack_78[-3];
            uVar18 = puStack_78[-1];
            param_4[-2] = puStack_78[-2];
            param_4[-1] = uVar18;
            *puVar31 = uVar8;
            param_4[-3] = uVar27;
            puStack_78[-2] = uStack_a8;
            puStack_78[-1] = uStack_a0;
            *puVar11 = (uint64_t)pppppppuStack_b8;
            puStack_78[-3] = uStack_b0;
          }
        }
        goto LAB_7fffa564aabf;
      }
      uVar27 = ((uint64_t)puStack_88 >> 2) + ((uint64_t)puStack_88 >> 1);
      if ((int64_t)param_4 - (int64_t)uStack_68 < (int64_t)puStack_48 - (int64_t)puStack_78) {
        FUN_7fffa5649960(FUN_7fffa5649960,0x7fffa564cf1e,
                         (0xb3987ea - (uint32_t)uStack_50 ^ 0x7ffe0004) + 0x8b3936c6,param_4,
                         (uint64_t)uStack_68 ^ 0xffffffff99b562bf);
        param_4 = puVar14;
        puVar31 = puVar11;
      }
      else {
        lVar19 = (int64_t)(short)((short)uStack_50 + 0x6cb0);
        pcVar10 = (code *)(lVar19 + 0x7fffa564cd5a);
        (*pcVar10)(pcVar10,lVar19,uStack_50 & 0xffffffff,puVar14,
                   ~((uint64_t)((uint32_t)uStack_50 ^ 0x8fb4c216) ^ (uint64_t)puStack_78));
      }
      uVar8 = (int64_t)param_4 - (int64_t)puVar31;
      puVar14 = param_4;
      uStack_68 = puVar31;
    } while (0x400 < (int64_t)uVar8);
  }
  if ((puVar31 == param_4) || (puVar14 = puVar31 + 4, puVar14 == param_4)) {
    return;
  }
  uStack_80 = -0x20;
  uStack_68 = (uint64_t *)(CONCAT44(uStack_68._4_4_,(int)uStack_50) | 1);
  uVar26 = (uint16_t)uStack_50 | 1;
  uVar8 = uStack_50;
  puStack_78 = puVar31;
  do {
    bVar2 = (uint8_t)uVar8 & 0xf;
    pppppppuStack_b8 = (uint64_t *******)*puVar14;
    uStack_b0 = puVar14[1];
    uVar18 = puVar14[2];
    uStack_a0 = puVar14[3];
    puVar31[6] = 0;
    puVar31[7] = 0xf;
    *(uint8_t *)(puVar31 + 4) = 0;
    uVar27 = puStack_78[2];
    pppppppuVar15 = &pppppppuStack_b8;
    if (0xf < uStack_a0) {
      pppppppuVar15 = pppppppuStack_b8;
    }
    puVar31 = puStack_78;
    if (0xf < puStack_78[3]) {
      puVar31 = (uint64_t *)*puStack_78;
    }
    uVar8 = uVar27;
    if (uVar18 <= uVar27) {
      uVar8 = uVar18;
    }
    uStack_a8 = uVar18;
    iVar5 = (*(code *)((int64_t)(short)(0x1629 << bVar2 | 0x1629U >> 0x10 - bVar2) + 0x7fffa4ac257b
                      ))(pppppppuVar15,puVar31,uVar8);
    uVar8 = uStack_50;
    puVar25 = puStack_78;
    lVar19 = uStack_80;
    bVar33 = uVar18 < uVar27;
    if (iVar5 != 0) {
      bVar33 = iVar5 < 0;
    }
    puStack_70 = puVar14;
    if (bVar33) {
      puVar31 = puVar14;
      lVar28 = uStack_80;
      do {
        if (0xf < puVar31[3]) {
          uVar7 = (uint32_t)uVar8 ^ 0xee01a160;
          (*(code *)((int64_t)(int)(uVar7 << 7 | uVar7 >> 0x19) + 0x7fffa569612d))();
        }
        *(uint8_t *)puVar31 = 0;
        puVar31[2] = 0;
        puVar31[3] = 0xf;
        puVar31[2] = puVar31[-2];
        puVar31[3] = puVar31[-1];
        *puVar31 = puVar31[-4];
        puVar31[1] = puVar31[-3];
        puVar31[-2] = 0;
        *(uint8_t *)(puVar31 + -4) = 0;
        puVar31[-1] = 0xf;
        lVar28 = lVar28 + 0x20;
        puVar31 = puVar31 + -4;
      } while (lVar28 != 0);
      bVar2 = (uint8_t)uVar8 & 0xf;
      puVar31 = puVar14;
      puVar14 = puVar25;
      if ((uint64_t)(uint16_t)(0x3c0U >> bVar2 | 0x3c0 << 0x10 - bVar2) < puVar25[3])
      goto LAB_7fffa564b43e;
    }
    else {
      while( true ) {
        uVar8 = puVar14[-2];
        uVar27 = uVar8;
        if (uVar18 <= uVar8) {
          uVar27 = uVar18;
        }
        puVar31 = puVar14 + -4;
        uVar23 = puVar14[3];
        puVar25 = puVar31;
        if (0xf < puVar14[-1]) {
          puVar25 = (uint64_t *)puVar14[-4];
        }
        iVar5 = (*(code *)((int64_t)(short)(uVar26 * 0x7d4c | (uint16_t)(uVar26 * -0x60ad) >> 0xe) +
                          0x7fffa4abe6e9))(pppppppuVar15,puVar25,uVar27);
        bVar33 = uVar18 < uVar8;
        if (iVar5 != 0) {
          bVar33 = iVar5 < 0;
        }
        if (!bVar33) break;
        if (0xf < uVar23) {
          uVar24 = (uint16_t)uStack_50 ^ 0xe916;
          (*(code *)((int64_t)(short)(uVar24 << 2 | uVar24 >> 0xe) + 0x7fffa568a32e))();
        }
        puVar14[2] = puVar14[-2];
        puVar14[3] = puVar14[-1];
        *puVar14 = *puVar31;
        puVar14[1] = puVar14[-3];
        puVar14[-2] = 0;
        *(uint8_t *)(puVar14 + -4) = 0;
        puVar14[-1] = 0xf;
        puVar14 = puVar31;
      }
      puVar31 = puStack_70;
      puVar25 = puVar14;
      uVar8 = uStack_50;
      lVar19 = uStack_80;
      if (0xf < uVar23) {
LAB_7fffa564b43e:
        uVar27 = *puVar14;
        (*(code *)((int64_t)((int)uStack_68 * 0x4e15371e + -0x666eb510) + 0x7fffa569540e))
                  (uVar8 & 0xffffffff,uVar27,uVar27 >> 0x3d ^ uVar27);
        puVar25 = puVar14;
      }
    }
    puVar25[2] = uStack_a8;
    puVar25[3] = uStack_a0;
    *puVar25 = (uint64_t)pppppppuStack_b8;
    puVar25[1] = uStack_b0;
    puVar14 = puVar31 + 4;
    if (puVar14 == param_4) {
      return;
    }
    uStack_80 = lVar19 + -0x20;
  } while( true );
LAB_7fffa564b573:
  puVar11 = (uint64_t *)((int64_t)puVar25 + -1);
  pppppppuStack_b8 = (uint64_t *******)uStack_68[(int64_t)puVar11 * 4];
  uStack_b0 = (uStack_68 + (int64_t)puVar11 * 4)[1];
  uStack_a8 = uStack_68[(int64_t)puVar11 * 4 + 2];
  uStack_a0 = (uStack_68 + (int64_t)puVar11 * 4 + 2)[1];
  *(uint8_t *)(uStack_68 + (int64_t)puVar11 * 4) = 0;
  uStack_68[(int64_t)puVar11 * 4 + 2] = 0;
  uStack_68[(int64_t)puVar11 * 4 + 3] = 0xf;
  puVar9 = puVar11;
  if ((int64_t)puVar25 <= (int64_t)puVar31) {
    puVar17 = puVar11;
    do {
      bVar2 = (uint8_t)uVar27 & 0xf;
      puVar9 = (uint64_t *)((int64_t)puVar17 * 2 + 1);
      if (uStack_68[(int64_t)puVar9 * 4 + 3] < 0x10) {
        puVar20 = uStack_68 + (int64_t)puVar9 * 4;
      }
      else {
        puVar20 = (uint64_t *)uStack_68[(int64_t)puVar9 * 4];
      }
      uVar8 = uStack_68[(int64_t)puVar9 * 4 + 2];
      puVar13 = (uint64_t *)((int64_t)puVar17 * 2 + 2);
      uVar18 = uStack_68[(int64_t)puVar13 * 4 + 2];
      if (uStack_68[(int64_t)puVar13 * 4 + 3] < 0x10) {
        puVar12 = uStack_68 + (int64_t)puVar13 * 4;
      }
      else {
        puVar12 = (uint64_t *)uStack_68[(int64_t)puVar13 * 4];
      }
      uVar27 = uVar18;
      if (uVar8 < uVar18) {
        uVar27 = uVar8;
      }
      uVar7 = (*(code *)((int64_t)(short)(((uint16_t)uStack_50 ^ 0x9225) + 0x189) + 0x7fffa4abe0c4))
                        (puVar12,puVar20,uVar27);
      uVar27 = uStack_50;
      bVar33 = uVar18 < uVar8;
      if (uVar7 != (uint16_t)((0x1611U >> bVar2 | 0x1611 << 0x10 - bVar2) + 0xbba8)) {
        bVar33 = (int)uVar7 < 0;
      }
      if (!bVar33) {
        puVar9 = puVar13;
      }
      if (puVar17 != puVar9) {
        puVar17 = uStack_68 + (int64_t)puVar17 * 4;
        if (0xf < puVar17[3]) {
          FUN_7fffa5687c30();
        }
        puVar20 = uStack_68 + (int64_t)puVar9 * 4;
        puVar17[3] = 0xf;
        puVar17[2] = 0;
        *(uint8_t *)puVar17 = 0;
        uVar8 = *puVar20;
        uVar18 = puVar20[1];
        uVar23 = puVar20[3];
        puVar17[2] = puVar20[2];
        puVar17[3] = uVar23;
        *puVar17 = uVar8;
        puVar17[1] = uVar18;
        puVar20[2] = 0;
        *(uint8_t *)puVar20 = 0;
        puVar20[3] = 0xf;
      }
      puVar17 = puVar9;
    } while ((int64_t)puVar9 < (int64_t)puVar31);
  }
  puVar17 = puStack_48;
  uVar7 = (uint32_t)uVar27 ^ 0x46125ff7;
  bVar33 = (int64_t)puVar9 < (int64_t)puVar31;
  if ((uint64_t)((int)uStack_80 * 0x8e91f39 + 0x56acb29d) <
      (uint64_t)(int64_t)(int)(uVar7 << 9 | uVar7 >> 0x17)) {
    bVar33 = puVar9 != puVar31;
  }
  if ((bVar33 | (uint8_t)puStack_70) == 1) {
    puVar17 = puStack_78;
    if (((uint64_t)puStack_60 & 0x20) != 0) {
      puVar17 = puVar9;
    }
    if (bVar33 != false) {
      puVar17 = puVar9;
    }
    if ((int64_t)puVar17 < (int64_t)puVar25) goto LAB_7fffa564b89a;
LAB_7fffa564b8f8:
    do {
      puVar20 = (uint64_t *)((int64_t)puVar17 + -1 >> 1);
      puVar9 = uStack_68 + (int64_t)puVar20 * 4;
      uVar8 = uStack_68[(int64_t)puVar20 * 4 + 2];
      uVar18 = uVar8;
      if (uStack_a8 < uVar8) {
        uVar18 = uStack_a8;
      }
      bVar33 = uVar8 < uStack_a8;
      puVar13 = puVar9;
      if ((uint64_t)~((uint32_t)uVar27 ^ 0x1601a0a6) < uStack_68[(int64_t)puVar20 * 4 + 3]) {
        puVar13 = (uint64_t *)uStack_68[(int64_t)puVar20 * 4];
      }
      pppppppuVar15 = &pppppppuStack_b8;
      if (0xf < uStack_a0) {
        pppppppuVar15 = pppppppuStack_b8;
      }
      iVar6 = (int)uStack_50;
      iVar5 = (*(code *)((int64_t)(-0x16028e64 - iVar6) + 0x7fffa4ac9d7a))
                        (puVar13,pppppppuVar15,uVar18);
      uVar27 = uStack_50;
      if (iVar5 != 0) {
        bVar33 = iVar5 < (int)(0x5f56U - iVar6 & 0xffff);
      }
      if (!bVar33) break;
      if (puVar17 != puVar20) {
        puVar17 = uStack_68 + (int64_t)puVar17 * 4;
        if (0xf < puVar17[3]) {
          FUN_7fffa5687c30();
        }
        *(uint8_t *)puVar17 = 0;
        puVar17[3] = 0xf;
        puVar17[2] = 0;
        uVar8 = *puVar9;
        uVar18 = puVar9[1];
        uVar23 = puVar9[3];
        puVar17[2] = puVar9[2];
        puVar17[3] = uVar23;
        *puVar17 = uVar8;
        puVar17[1] = uVar18;
        puVar9[3] = 0xf;
        puVar9[2] = 0;
        *(uint8_t *)puVar9 = 0;
      }
      puVar17 = puVar20;
    } while ((int64_t)puVar25 <= (int64_t)puVar20);
  }
  else {
    if ((uint64_t)((uint32_t)uVar27 - 0x5f47 & 0xffff) < puStack_48[3]) {
      FUN_7fffa5687c30(uVar27 & 0xffffffff,FUN_7fffa5687c30,*puStack_48 >> 0x3d ^ *puStack_48);
    }
    puVar17[3] = 0xf;
    puVar17[2] = 0;
    *(uint8_t *)puVar17 = 0;
    uVar8 = *puStack_88;
    uVar18 = puStack_88[1];
    uVar23 = puStack_88[3];
    puVar17[2] = puStack_88[2];
    puVar17[3] = uVar23;
    *puVar17 = uVar8;
    puVar17[1] = uVar18;
    *(uint8_t *)puStack_88 = 0;
    puStack_88[2] = 0;
    puStack_88[3] = 0xf;
    puVar17 = puStack_78;
    if ((int64_t)puVar25 <= (int64_t)puStack_78) goto LAB_7fffa564b8f8;
LAB_7fffa564b89a:
  }
  iVar5 = (int)uVar27;
  puVar9 = uStack_68 + (int64_t)puVar17 * 4;
  bVar33 = 0xf < (int64_t)uStack_68[(int64_t)puVar17 * 4 + 3];
  if ((uint32_t)((int)uStack_80 * -0x589094fe) <=
      ((0xb497cff6U - iVar5) * 0x400 | 0xb497cff6U - iVar5 >> 0x16)) {
    bVar33 = (uint64_t)((0x2bc3U - iVar5 ^ 0xcc62) & 0xffff) < uStack_68[(int64_t)puVar17 * 4 + 3]
    ;
  }
  if (bVar33) {
    (*(code *)((int64_t)(iVar5 + 0x1600c250) + 0x7fffa5695a8a))
              (uVar27 & 0xffffffff,(int64_t)(iVar5 + 0x1600c250),*puVar9 >> 0x3d ^ *puVar9);
  }
  puVar9[3] = 0xf;
  *(uint8_t *)puVar9 = 0;
  puVar9[2] = 0;
  puVar9[2] = uStack_a8;
  puVar9[3] = uStack_a0;
  *puVar9 = (uint64_t)pppppppuStack_b8;
  puVar9[1] = uStack_b0;
  bVar33 = puVar25 < (uint64_t *)0x2;
  puVar25 = puVar11;
  if (bVar33) {
    uVar26 = (uint16_t)uVar27;
    puVar31 = uStack_68;
    do {
      if (0x20 < (int64_t)puVar14 - (int64_t)puVar31) {
        pppppppuStack_b8 = (uint64_t *******)puVar14[-4];
        uStack_b0 = puVar14[-3];
        uStack_a8 = puVar14[-2];
        uStack_a0 = puVar14[-1];
        puVar14[-2] = 0;
        puVar14[-1] = 0xf;
        *(uint8_t *)(puVar14 + -4) = 0;
        lVar19 = (int64_t)(puVar14 + -4) - (int64_t)puVar31;
        if (lVar19 != 0) {
          uVar8 = *puVar31;
          uVar18 = puVar31[1];
          uVar23 = puVar31[3];
          puVar14[-2] = puVar31[2];
          puVar14[-1] = uVar23;
          puVar14[-4] = uVar8;
          puVar14[-3] = uVar18;
          puVar31[2] = 0;
          puVar31[3] = 0xf;
          *(uint8_t *)puVar31 = 0;
        }
        lVar32 = (lVar19 >> 5) + -1;
        lVar28 = lVar32 >> 1;
        if (lVar28 < 1) {
          lVar21 = 0;
        }
        else {
          lVar29 = 0;
          do {
            bVar2 = (uint8_t)uVar27 & 0x1f;
            lVar1 = lVar29 * 2 + 2;
            if (uStack_68[lVar1 * 4 + 3] < 0x10) {
              puVar31 = uStack_68 + lVar1 * 4;
            }
            else {
              puVar31 = (uint64_t *)uStack_68[lVar1 * 4];
            }
            lVar21 = lVar29 * 2 + 1;
            uVar8 = uStack_68[lVar1 * 4 + 2];
            uVar18 = uStack_68[lVar21 * 4 + 2];
            uVar27 = uVar8;
            if (uVar18 < uVar8) {
              uVar27 = uVar18;
            }
            if (uStack_68[lVar21 * 4 + 3] < 0x10) {
              puVar25 = uStack_68 + lVar21 * 4;
            }
            else {
              puVar25 = (uint64_t *)uStack_68[lVar21 * 4];
            }
            iVar5 = (*(code *)((int64_t)(int)(-0x313e801 << bVar2 | 0xfcec17ffU >> 0x20 - bVar2) +
                              0x7fffa4ac74bb))(puVar31,puVar25,uVar27);
            uVar27 = uStack_50;
            bVar33 = uVar8 < uVar18;
            if (iVar5 != 0) {
              bVar33 = iVar5 < 0;
            }
            if (!bVar33) {
              lVar21 = lVar1;
            }
            if (lVar29 != lVar21) {
              puVar31 = uStack_68 + lVar29 * 4;
              if ((uint64_t)
                  ((uint64_t)((uint32_t)uStack_50 ^ 0x825a117b) <
                  (uint64_t)
                  (int64_t)
                  (int)~((int)uStack_80 * -0x7c620000 | (uint32_t)((int)uStack_80 * -0x7afc7c62) >> 0x10
                        )) + 0xe < puVar31[3]) {
                (*(code *)((int64_t)(short)(-0x11 - ((short)uStack_50 + -0x138f)) + 0x7fffa568c808)
                )(uStack_50 & 0xffffffff,0x7fffa568c808,*puVar31 >> 0x3d ^ *puVar31);
              }
              puVar25 = uStack_68 + lVar21 * 4;
              puVar31[3] = 0xf;
              puVar31[2] = 0;
              *(uint8_t *)puVar31 = 0;
              uVar8 = *puVar25;
              uVar18 = puVar25[1];
              uVar23 = puVar25[3];
              puVar31[2] = puVar25[2];
              puVar31[3] = uVar23;
              *puVar31 = uVar8;
              puVar31[1] = uVar18;
              puVar25[2] = 0;
              puVar25[3] = 0xf;
              *(uint8_t *)puVar25 = 0;
            }
            lVar29 = lVar21;
          } while (lVar21 < lVar28);
        }
        uVar7 = (uint32_t)uVar27;
        if ((((uint32_t)lVar19 & 0x20) == ((0xe9fe5f56 - uVar7) * 0x200000 | 0xe9fe5f56 - uVar7 >> 0xb))
           && (lVar21 == lVar28)) {
          if (lVar28 != lVar32) {
            puVar31 = uStack_68 + lVar28 * 4;
            if (0xf < puVar31[3]) {
              (*(code *)((int64_t)(int)((uVar7 ^ 0xfc308d2d) + 0xea30885b) + 0x7fffa569215a))();
            }
            puVar25 = uStack_68 + lVar32 * 4;
            *(uint8_t *)puVar31 = 0;
            puVar31[3] = 0xf;
            puVar31[2] = 0;
            uVar8 = *puVar25;
            uVar18 = puVar25[1];
            uVar23 = puVar25[3];
            puVar31[2] = puVar25[2];
            puVar31[3] = uVar23;
            *puVar31 = uVar8;
            puVar31[1] = uVar18;
            puVar25[3] = 0xf;
            puVar25[2] = 0;
            *(uint8_t *)puVar25 = 0;
          }
          lVar21 = lVar32;
        }
        puVar31 = uStack_68;
        if ((int64_t)(uint64_t)(uVar7 ^ 0xe9fe5f56) < lVar21) {
          do {
            lVar19 = lVar21 + -1 >> 1;
            puVar25 = puVar31 + lVar19 * 4;
            puVar11 = puVar25;
            if (0xf < puVar31[lVar19 * 4 + 3]) {
              puVar11 = (uint64_t *)puVar31[lVar19 * 4];
            }
            uVar8 = puVar31[lVar19 * 4 + 2];
            bVar33 = uVar8 < uStack_a8;
            pppppppuVar15 = &pppppppuStack_b8;
            if (0xf < uStack_a0) {
              pppppppuVar15 = pppppppuStack_b8;
            }
            if (uStack_a8 < uVar8) {
              uVar8 = uStack_a8;
            }
            iVar5 = FUN_7fffa4abafc0(puVar11,pppppppuVar15,uVar8);
            if (iVar5 != 0) {
              bVar33 = iVar5 < 0;
            }
            if (!bVar33) break;
            if (lVar21 != lVar19) {
              puVar11 = puVar31 + lVar21 * 4;
              if (0xf < puVar11[3]) {
                (*(code *)((int64_t)(short)((uVar26 | 1) * 0x1664) + 0x7fffa568c434))();
              }
              *(uint8_t *)puVar11 = 0;
              puVar11[2] = 0;
              puVar11[3] = 0xf;
              uVar8 = *puVar25;
              uVar18 = puVar25[1];
              uVar23 = puVar25[3];
              puVar11[2] = puVar25[2];
              puVar11[3] = uVar23;
              *puVar11 = uVar8;
              puVar11[1] = uVar18;
              puVar25[3] = 0xf;
              puVar25[2] = 0;
              *(uint8_t *)puVar25 = 0;
            }
            lVar21 = lVar19;
          } while (0 < lVar19);
        }
        else {
        }
        puVar25 = puVar31 + lVar21 * 4;
        if ((uint64_t)((0xd4ae - uVar7 ^ 0x7557) & 0xffff) < puVar31[lVar21 * 4 + 3]) {
          uVar8 = *puVar25;
          (*(code *)((int64_t)(short)((uint16_t)uVar27 ^ 0xef5c) + 0x7fffa568cc26))
                    (uVar27 & 0xffffffff,uVar8,uVar8 >> 0x3d ^ uVar8);
        }
        puVar25[2] = 0;
        *(uint8_t *)puVar25 = 0;
        puVar25[3] = 0xf;
        *puVar25 = (uint64_t)pppppppuStack_b8;
        puVar25[1] = uStack_b0;
        puVar25[2] = uStack_a8;
        puVar25[3] = uStack_a0;
      }
      puVar14 = puVar14 + -4;
      if ((int64_t)puVar14 - (int64_t)puVar31 < 0x21) {
        return;
      }
    } while( true );
  }
  goto LAB_7fffa564b573;
}


// ============================================================================
// Function : FUN_7fffa564c070  |  RVA: 0xedc070  |  Size: 1 bytes
// Callers  : FUN_7fffa4ee8dac@0x778dac
// Callees  : none
// ============================================================================
void FUN_7fffa564c070(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : _guard_check_icall  |  RVA: 0xedc080  |  Size: 1 bytes
// Callers  : FUN_7fffa5697520@0xf27520, FUN_7fffa51816dc@0xa116dc, FUN_7fffa47de1c0@0x6e1c0, FUN_7fffa560a390@0xe9a390, FUN_7fffa50c96be@0x9596be, FUN_7fffa565706d@0xee706d
// Callees  : none
// ============================================================================
void _guard_check_icall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa564c090  |  RVA: 0xedc090  |  Size: 701 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa564c259) */
/* WARNING: Removing unreachable block (ram,0x7fffa564c2b0) */

void FUN_7fffa564c090(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint8_t auVar4 [16];
  
  auVar4 = psllw(ZEXT416(0xf2),2);
  bRam00007fffa47bba8f = auVar4[0] + '8';
  auRam00007fffa47bbac2 = (uint8_t  [16])0x0;
  auRam00007fffa47bbab2 = (uint8_t  [16])0x0;
  auRam00007fffa47bbaa2 = (uint8_t  [16])0x0;
  auRam00007fffa47bba92 = (uint8_t  [16])0x0;
  uRam00007fffa47bbada = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x9b0719936dfdc88;
  for (lVar3 = 3;
      *(char *)(lVar3 + 0x7fffa47bba80) = (char)((uint64_t)(lVar2 * 0x9936dfdc88) >> 0x20),
      lVar3 != 99; lVar3 = lVar3 + 4) {
    *(char *)(lVar3 + 0x7fffa47bba83) = (char)((uint64_t)(lVar2 * -0x3463df43eabbf000) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bba81) = (char)((uint64_t)(lVar2 * 0x5b52ea0840) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bba82) = (char)((uint64_t)(lVar2 * 0x9fdb2b6200) >> 0x20);
    lVar2 = lVar2 * -0x3463df43eabbf000;
  }
  bRam00007fffa47bba8f = bRam00007fffa47bba8f + 1 & 7;
  *(uint64_t *)((uint64_t)bRam00007fffa47bba8f * 8 + 0x7fffa47bba92) = 0xffffffffffffffff;
  return;
}


// ============================================================================
// Function : FUN_7fffa564c350  |  RVA: 0xedc350  |  Size: 27 bytes
// Callers  : FUN_7fffa5697680@0xf27680
// Callees  : FUN_7fffa560ec50@0xe9ec50, FUN_7fffa561db10@0xeadb10
// ============================================================================
void FUN_7fffa564c350(void)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_7fffa560ec50();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (uint64_t *)FUN_7fffa561db10();
  *puVar1 = *puVar1 | 2;
  return;
}


// ============================================================================
// Function : FUN_7fffa564c370  |  RVA: 0xedc370  |  Size: 577 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa564c370(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  bRam00007fffa4785e2e = 0;
  uRam00007fffa4785e44 = 0;
  uRam00007fffa4785e4c = 0;
  uRam00007fffa4785e34 = 0;
  uRam00007fffa4785e3c = 0;
  uRam00007fffa4785e54 = 0;
  uRam00007fffa4785e5e = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x546090d9cc9e1e5 + 1;
  uVar4 = 0;
  while( true ) {
    lVar2 = lVar2 * 0x546090d9cc9e1e5 + 1;
    lVar3 = lVar2 * 0x546090d9cc9e1e5 + 1;
    *(char *)(uVar4 + 0x7fffa4785e28) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)((uVar4 | 1) + 0x7fffa4785e28) = (char)((uint64_t)lVar3 >> 0x20);
    if (uVar4 == 0x48) break;
    lVar3 = lVar3 * 0x546090d9cc9e1e5 + 1;
    lVar2 = lVar3 * 0x546090d9cc9e1e5 + 1;
    *(char *)(uVar4 + 0x7fffa4785e2a) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(uVar4 + 0x7fffa4785e2b) = (char)((uint64_t)lVar2 >> 0x20);
    uVar4 = uVar4 + 4;
  }
  uVar4 = (uint64_t)((uint32_t)bRam00007fffa4785e2e * 0x33333334 + 0x33333334) * 5;
  *(uint64_t *)((uVar4 >> 0x20) * 8 + 0x7fffa4785e34) = 0;
  bRam00007fffa4785e2e = (char)(uVar4 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa564c5c0  |  RVA: 0xedc5c0  |  Size: 77 bytes
// Callers  : FUN_7fffa54511cc@0xce11cc, FUN_7fffa5101d40@0x991d40, FUN_7fffa55ca84c@0xe5a84c, FUN_7fffa4eca6f8@0x75a6f8, FUN_7fffa54e557c@0xd7557c, FUN_7fffa560e3c8@0xe9e3c8, FUN_7fffa5605b34@0xe95b34, FUN_7fffa56a06d0@0xf306d0
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t * FUN_7fffa564c5c0(int64_t *param_1,int64_t *param_2)

{
  uint32_t uVar1;
  int64_t lVar2;
  
  *(uint8_t *)(param_1 + 3) = 0;
  lVar2 = _DAT_7fffa47808f0;
  if (param_2 != (int64_t *)0x0) {
    lVar2 = param_2[1];
    param_1[1] = *param_2;
    param_1[2] = lVar2;
    return param_1;
  }
  if (_DAT_7fffa4782620 == 0) {
    param_1[1] = (int64_t)PTR_PTR_7fffa47808e8;
    param_1[2] = lVar2;
    return param_1;
  }
  lVar2 = FUN_7fffa56266a0();
  *param_1 = lVar2;
  param_1[1] = *(int64_t *)(lVar2 + 0x90);
  param_1[2] = *(int64_t *)(lVar2 + 0x88);
  FUN_7fffa5002dcc(lVar2,param_1 + 1);
  FUN_7fffa4f40a50(*param_1,param_1 + 2);
  uVar1 = *(uint32_t *)(*param_1 + 0x3a8);
  if ((uVar1 & 2) == 0) {
    *(uint32_t *)(*param_1 + 0x3a8) = uVar1 | 2;
    *(uint8_t *)(param_1 + 3) = 1;
  }
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa564c60d  |  RVA: 0xedc60d  |  Size: 77 bytes
// Callers  : none
// Callees  : FUN_7fffa4f40a50@0x7d0a50, FUN_7fffa5002dcc@0x892dcc, FUN_7fffa56266a0@0xeb66a0
// ============================================================================
void FUN_7fffa564c60d(void)

{
  uint32_t uVar1;
  int64_t lVar2;
  int64_t *unaff_RDI;
  
  lVar2 = FUN_7fffa56266a0();
  *unaff_RDI = lVar2;
  unaff_RDI[1] = *(int64_t *)(lVar2 + 0x90);
  unaff_RDI[2] = *(int64_t *)(lVar2 + 0x88);
  FUN_7fffa5002dcc(lVar2,unaff_RDI + 1);
  FUN_7fffa4f40a50(*unaff_RDI,unaff_RDI + 2);
  uVar1 = *(uint32_t *)(*unaff_RDI + 0x3a8);
  if ((uVar1 & 2) == 0) {
    *(uint32_t *)(*unaff_RDI + 0x3a8) = uVar1 | 2;
    *(uint8_t *)(unaff_RDI + 3) = 1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa564c65a  |  RVA: 0xedc65a  |  Size: 27 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa564c65a(int64_t param_1)

{
  uint32_t in_EAX;
  int64_t unaff_RDI;
  
  *(uint32_t *)(param_1 + 0x3a8) = in_EAX | 2;
  *(uint8_t *)(unaff_RDI + 0x18) = 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa564c680  |  RVA: 0xedc680  |  Size: 66 bytes
// Callers  : none
// Callees  : thunk_FUN_7fffa55eeda0@0x913000, FUN_7fffa5155450@0x9e5450
// ============================================================================
uint64_t * FUN_7fffa564c680(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &PTR_FUN_7fffa56f3928;
  FUN_7fffa5155450(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_7fffa55eeda0(param_1,0x28);
  }
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa564c6d0  |  RVA: 0xedc6d0  |  Size: 156 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa564c830) */
/* WARNING: Removing unreachable block (ram,0x7fffa564c820) */

void FUN_7fffa564c6d0(int64_t param_1,uint32_t param_2)

{
  char *pcVar1;
  code *pcVar2;
  int in_EAX;
  char unaff_BL;
  int64_t unaff_RBP;
  
  if (-0x1bbf2e85 < (int)(~(in_EAX + 0xe9baU) & 0xffff)) {
    pcVar2 = (code *)swi(1);
    (*pcVar2)(param_1,param_2,0x3226a976);
    return;
  }
  pcVar1 = (char *)(unaff_RBP + -0x17);
  *pcVar1 = *pcVar1 + unaff_BL;
  do {
    param_1 = param_1 + -1;
  } while (param_1 != 0 && *pcVar1 != '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ============================================================================
// Function : FUN_7fffa564c860  |  RVA: 0xedc860  |  Size: 37170 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa564c860(void) {
    /* +0xedc860 */ __asm { PUSH RBP }
    /* +0xedc861 */ __asm { PUSH R12 }
    /* +0xedc863 */ __asm { PUSH R13 }
    /* +0xedc865 */ __asm { PUSH RSI }
    /* +0xedc866 */ __asm { PUSH RDI }
    /* +0xedc867 */ __asm { PUSH R14 }
    /* +0xedc869 */ __asm { PUSH R15 }
    /* +0xedc86b */ __asm { PUSH RBX }
    /* +0xedc86c */ __asm { SUB RSP,0x5f8 }
    /* +0xedc873 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xedc87b */ __asm { MOVAPS xmmword ptr [RBP + 0x560],XMM14 }
    /* +0xedc883 */ __asm { MOVAPS xmmword ptr [RBP + 0x550],XMM12 }
    /* +0xedc88b */ __asm { MOVAPS xmmword ptr [RBP + 0x540],XMM7 }
    /* +0xedc892 */ __asm { MOVDQA xmmword ptr [RBP + 0x530],XMM9 }
    /* +0xedc89b */ __asm { MOVAPS xmmword ptr [RBP + 0x520],XMM11 }
    /* +0xedc8a3 */ __asm { MOVAPS xmmword ptr [RBP + 0x510],XMM13 }
    /* +0xedc8ab */ __asm { MOVAPS xmmword ptr [RBP + 0x500],XMM6 }
    /* +0xedc8b2 */ __asm { MOVAPS xmmword ptr [RBP + 0x4f0],XMM8 }
    /* +0xedc8ba */ __asm { MOVAPS xmmword ptr [RBP + 0x4e0],XMM10 }
    /* +0xedc8c2 */ __asm { MOVAPS xmmword ptr [RBP + 0x4d0],XMM15 }
    /* +0xedc8ca */ __asm { MOV qword ptr [RBP + 0x4c8],-0x2 }
    /* +0xedc8d5 */ __asm { MOV R11,R9 }
    /* +0xedc8d8 */ __asm { MOV EDX,0x4130ac7e }
    /* +0xedc8dd */ __asm { ADD EDX,0x8001ffec }
    /* +0xedc8e3 */ __asm { MOV RAX,R10 }
    /* +0xedc8e6 */ __asm { SHR RAX,0x27 }
    /* +0xedc8ea */ __asm { PUSHFQ }
    /* +0xedc8eb */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xedc8f3 */ __asm { POPFQ }
    /* +0xedc8f4 */ __asm { XOR RAX,R10 }
    /* +0xedc8f7 */ __asm { ROL EDX,0x1d }
    /* +0xedc8fa */ __asm { SUB EDX,R11D }
    /* +0xedc8fd */ __asm { SUB RAX,RDX }
    /* +0xedc900 */ __asm { MOV dword ptr [RBP + 0x380],0x8c53914a }
    /* +0xedc90a */ __asm { MOV R9D,dword ptr [RBP + 0x380] }
    /* +0xedc911 */ __asm { TEST R9D,R9D }
    /* +0xedc914 */ __asm { NOP }
    /* +0xedc915 */ __asm { NOP }
    /* +0xedc916 */ __asm { NOP }
    /* +0xedc917 */ __asm { NOP }
    /* +0xedc918 */ __asm { NOP }
    /* +0xedc919 */ __asm { MOV R9,0x0 }
    /* +0xedc920 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xedc927 */ __asm { NOP }
    /* +0xedc928 */ __asm { MOV R9,0x17f50f9071e228c5 }
    /* +0xedc932 */ __asm { MOV R9W,0xf5ae }
    /* +0xedc937 */ __asm { SUB R9D,R11D }
    /* +0xedc93a */ __asm { ROL R9W,0x6 }
    /* +0xedc93f */ __asm { MOVZX EDX,R9W }
    /* +0xedc943 */ __asm { MOV R9,qword ptr GS:[RDX] }
    /* +0xedc947 */ __asm { MOV R9,qword ptr [R9 + 0xc30] }
    /* +0xedc94e */ __asm { ROL R9,0x24 }
    /* +0xedc952 */ __asm { ADD R9,0x82b00b7 }
    /* +0xedc959 */ __asm { MOV RDX,0x6e411096f5c05504 }
    /* +0xedc963 */ __asm { CMP R9,RDX }
    /* +0xedc966 */ __asm { NOP }
    /* +0xedc967 */ __asm { NOP }
    /* +0xedc968 */ __asm { NOP }
    /* +0xedc969 */ __asm { NOP }
    /* +0xedc96a */ __asm { NOP }
    /* +0xedc96b */ __asm { SHR RCX,0x18 }
    /* +0xedc96f */ __asm { AND ECX,0xfffe }
    /* +0xedc975 */ __asm { LEA RDX,[RBP + 0x170] }
    /* +0xedc97c */ __asm { XORPS XMM13,XMM13 }
    /* +0xedc980 */ __asm { MOV R9,R11 }
    /* +0xedc983 */ __asm { OR R9,0x1 }
    /* +0xedc987 */ __asm { MOV qword ptr [RBP + -0x10],R9 }
    /* +0xedc98b */ __asm { MOV R9D,R11D }
    /* +0xedc98e */ __asm { OR R9D,0x1 }
    /* +0xedc992 */ __asm { MOV dword ptr [RBP + 0xa0],R9D }
    /* +0xedc999 */ __asm { MOV R9D,R11D }
    /* +0xedc99c */ __asm { OR R9D,0x1 }
    /* +0xedc9a0 */ __asm { MOV dword ptr [RBP + 0x200],R9D }
    /* +0xedc9a7 */ __asm { MOV R9D,R11D }
    /* +0xedc9aa */ __asm { OR R9D,0x1 }
    /* +0xedc9ae */ __asm { MOV dword ptr [RBP + 0x148],R9D }
    /* +0xedc9b5 */ __asm { MOV R9D,R11D }
    /* +0xedc9b8 */ __asm { OR R9D,0x1 }
    /* +0xedc9bc */ __asm { MOV dword ptr [RBP + 0x1f8],R9D }
    /* +0xedc9c3 */ __asm { MOV R9D,R11D }
    /* +0xedc9c6 */ __asm { OR R9D,0x1 }
    /* +0xedc9ca */ __asm { MOV dword ptr [RBP + -0x8],R9D }
    /* +0xedc9ce */ __asm { MOVDQA XMM12,xmmword ptr [0x7fffa56b9c30] }
    /* +0xedc9d7 */ __asm { MOVDQA XMM8,xmmword ptr [0x7fffa56bc670] }
    /* +0xedc9e0 */ __asm { MOVDQA XMM11,xmmword ptr [0x7fffa56bc660] }
    /* +0xedc9e9 */ __asm { MOVDQA XMM7,xmmword ptr [0x7fffa56bc650] }
    /* +0xedc9f1 */ __asm { MOVDQA XMM6,xmmword ptr [0x7fffa56bc690] }
    /* +0xedc9f9 */ __asm { MOVDQA XMM15,xmmword ptr [0x7fffa56bc6a0] }
    /* +0xedca02 */ __asm { PCMPEQD XMM9,XMM9 }
    /* +0xedca07 */ __asm { MOVDQA XMM14,xmmword ptr [0x7fffa56bc680] }
    /* +0xedca10 */ __asm { MOVDQA XMM10,xmmword ptr [0x7fffa56b9800] }
    /* +0xedca19 */ __asm { MOV R8D,R11D }
    /* +0xedca1c */ __asm { OR R8D,0x1 }
    /* +0xedca20 */ __asm { MOV qword ptr [RBP + 0x210],R8 }
    /* +0xedca27 */ __asm { MOV R9D,R11D }
    /* +0xedca2a */ __asm { OR R9D,0x1 }
    /* +0xedca2e */ __asm { MOV dword ptr [RBP + 0x220],R9D }
    /* +0xedca35 */ __asm { MOV R9D,R11D }
    /* +0xedca38 */ __asm { OR R9D,0x1 }
    /* +0xedca3c */ __asm { MOV dword ptr [RBP + 0xb8],R9D }
    /* +0xedca43 */ __asm { MOV R9D,R11D }
    /* +0xedca46 */ __asm { OR R9D,0x1 }
    /* +0xedca4a */ __asm { MOV dword ptr [RBP + 0xb0],R9D }
    /* +0xedca51 */ __asm { MOV R9D,R11D }
    /* +0xedca54 */ __asm { OR R9D,0x1 }
    /* +0xedca58 */ __asm { MOV dword ptr [RBP + -0x30],R9D }
    /* +0xedca5c */ __asm { LEA R13,[RBP + 0x108] }
    /* +0xedca63 */ __asm { MOV R10,-0x30ebf64fafbc6efb }
    /* +0xedca6d */ __asm { MOV R8,-0x22b18422c4a9c65e }
    /* +0xedca77 */ __asm { XOR R15D,R15D }
    /* +0xedca7a */ __asm { MOV qword ptr [RBP + 0xf8],R11 }
    /* +0xedca81 */ __asm { MOV qword ptr [RBP + 0x1f0],RCX }
    /* +0xedca88 */ __asm { MOV qword ptr [RBP + 0x50],RAX }
    /* +0xedca8c */ __asm { MOV dword ptr [RBP + -0x38],R15D }
    /* +0xedca90 */ __asm { MOV word ptr [RBP + 0x10a],CX }
    /* +0xedca97 */ __asm { MOV word ptr [RBP + 0x108],CX }
    /* +0xedca9e */ __asm { MOV qword ptr [RBP + 0x110],RAX }
    /* +0xedcaa5 */ __asm { MOVAPS xmmword ptr [RBP + 0x160],XMM13 }
    /* +0xedcaad */ __asm { MOVAPS xmmword ptr [RBP + 0x150],XMM13 }
    /* +0xedcab5 */ __asm { MOV qword ptr [RBP + 0x160],R13 }
    /* +0xedcabc */ __asm { MOV dword ptr [RBP + 0x150],0x30 }
    /* +0xedcac6 */ __asm { MOV dword ptr [RBP + 0x168],0x40 }
    /* +0xedcad0 */ __asm { MOVUPS xmmword ptr [RDX],XMM13 }
    /* +0xedcad4 */ __asm { MOV qword ptr [RBP + -0x40],0x0 }
    /* +0xedcadc */ __asm { RDTSC }
    /* +0xedcade */ __asm { SHL RDX,0x20 }
    /* +0xedcae2 */ __asm { OR RDX,RAX }
    /* +0xedcae5 */ __asm { IMUL RDX,R10 }
    /* +0xedcae9 */ __asm { ADD RDX,R8 }
    /* +0xedcaec */ __asm { MOV R8,RDX }
    /* +0xedcaef */ __asm { SHR R8,0x2d }
    /* +0xedcaf3 */ __asm { MOV RCX,RDX }
    /* +0xedcaf6 */ __asm { SHR RCX,0x3b }
    /* +0xedcafa */ __asm { SHR RDX,0x1b }
    /* +0xedcafe */ __asm { XOR R8D,EDX }
    /* +0xedcb01 */ __asm { ROR R8D,CL }
    /* +0xedcb04 */ __asm { AND R8D,0x3 }
    /* +0xedcb08 */ __asm { CMP R8D,0x2 }
    /* +0xedcb0c */ __asm { JNC 0x7fffa564cd80 }
    /* +0xedcb12 */ __asm { MOV R9W,0x5325 }
    /* +0xedcb17 */ __asm { SUB R9D,R11D }
    /* +0xedcb1a */ __asm { ROL R9W,0x1 }
    /* +0xedcb1e */ __asm { IMUL R9D,R9D,-0x9ef }
    /* +0xedcb25 */ __asm { MOVZX R9D,R9W }
    /* +0xedcb29 */ __asm { CMP R8D,R9D }
    /* +0xedcb2c */ __asm { JZ 0x7fffa564d0c0 }
    /* +0xedcb32 */ __asm { MOV R9D,0xd14069cc }
    /* +0xedcb38 */ __asm { MOV RDX,-0x77b63c3267aecdbf }
    /* +0xedcb42 */ __asm { CMP R9,RDX }
    /* +0xedcb45 */ __asm { JZ 0x7fffa5651b30 }
    /* +0xedcb4b */ __asm { MOV R10D,0x7d1b9510 }
    /* +0xedcb51 */ __asm { ADD R10,0x7a6a8ff4 }
    /* +0xedcb58 */ __asm { MOV R9,qword ptr [R9 + -0x514269c4] }
    /* +0xedcb5f */ __asm { MOV RAX,R9 }
    /* +0xedcb62 */ __asm { MOV RDX,-0x126dfc240b1727c5 }
    /* +0xedcb6c */ __asm { MUL RDX }
    /* +0xedcb6f */ __asm { MOV R11,RDX }
    /* +0xedcb72 */ __asm { MOV RAX,R9 }
    /* +0xedcb75 */ __asm { MOV R9D,0x147223a }
    /* +0xedcb7b */ __asm { MUL R9 }
    /* +0xedcb7e */ __asm { ADD RAX,R11 }
    /* +0xedcb81 */ __asm { ADC RDX,0x0 }
    /* +0xedcb85 */ __asm { AND EDX,0x1 }
    /* +0xedcb88 */ __asm { MOV R9D,0xf7862504 }
    /* +0xedcb8e */ __asm { XOR R10,R9 }
    /* +0xedcb91 */ __asm { OR R10,RDX }
    /* +0xedcb94 */ __asm { JZ 0x7fffa564d2c4 }
    /* +0xedcb9a */ __asm { RDTSC }
    /* +0xedcb9c */ __asm { SHL RDX,0x20 }
    /* +0xedcba0 */ __asm { OR RDX,RAX }
    /* +0xedcba3 */ __asm { MOV R9,-0x6bdeac2e46be109b }
    /* +0xedcbad */ __asm { IMUL RDX,R9 }
    /* +0xedcbb1 */ __asm { MOV R11,0x718533bdc9b85732 }
    /* +0xedcbbb */ __asm { LEA RCX,[RDX + R11*0x1] }
    /* +0xedcbbf */ __asm { MOV RDX,RCX }
    /* +0xedcbc2 */ __asm { SHR RDX,0x2d }
    /* +0xedcbc6 */ __asm { MOV R8,RCX }
    /* +0xedcbc9 */ __asm { SHR R8,0x1b }
    /* +0xedcbcd */ __asm { XOR EDX,R8D }
    /* +0xedcbd0 */ __asm { SHR RCX,0x3b }
    /* +0xedcbd4 */ __asm { ROR EDX,CL }
    /* +0xedcbd6 */ __asm { MOV dword ptr [RBP + 0x380],0xfdfff1fd }
    /* +0xedcbe0 */ __asm { MOV R9D,dword ptr [RBP + 0x380] }
    /* +0xedcbe7 */ __asm { CMP R9D,0x98295335 }
    /* +0xedcbee */ __asm { MOV RCX,qword ptr [RBP + 0xf8] }
    /* +0xedcbf5 */ __asm { NOP }
    /* +0xedcbf6 */ __asm { NOP }
    /* +0xedcbf7 */ __asm { NOP }
    /* +0xedcbf8 */ __asm { NOP }
    /* +0xedcbf9 */ __asm { NOP }
    /* +0xedcbfa */ __asm { NOP }
    /* +0xedcbfb */ __asm { NOP }
    /* +0xedcbfc */ __asm { NOP }
    /* +0xedcbfd */ __asm { NOP }
    /* +0xedcbfe */ __asm { NOP }
    /* +0xedcbff */ __asm { NOP }
    /* +0xedcc00 */ __asm { NOP }
    /* +0xedcc01 */ __asm { NOP }
    /* +0xedcc03 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xedcc0a */ __asm { MOV R9,0x0 }
    /* +0xedcc11 */ __asm { MOV R9D,0x8d0277b9 }
    /* +0xedcc17 */ __asm { XOR R9D,0x441a97b1 }
    /* +0xedcc1e */ __asm { ROR R9D,CL }
    /* +0xedcc21 */ __asm { PUSHFQ }
    /* +0xedcc22 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xedcc2a */ __asm { POPFQ }
    /* +0xedcc2b */ __asm { CMP EDX,R9D }
    /* +0xedcc2e */ __asm { JNC 0x7fffa564cd1c }
    /* +0xedcc34 */ __asm { MOV R9W,0x33f4 }
    /* +0xedcc39 */ __asm { XOR R9D,ECX }
    /* +0xedcc3c */ __asm { IMUL R9D,R9D,-0x49e7 }
    /* +0xedcc43 */ __asm { ADD R9D,0xffffdbaf }
    /* +0xedcc4a */ __asm { MOVZX EDX,R9W }
    /* +0xedcc4e */ __asm { MOV RDX,qword ptr GS:[RDX] }
    /* +0xedcc52 */ __asm { MOV R9,0x7a392497e2ecfec1 }
    /* +0xedcc5c */ __asm { MOV R11D,0x8017ee03 }
    /* +0xedcc62 */ __asm { MOV R10D,0x1fc05edb }
    /* +0xedcc68 */ __asm { IMUL R10D,R10D,0x4fe592ad }
    /* +0xedcc6f */ __asm { NOT R10D }
    /* +0xedcc72 */ __asm { MOV RCX,qword ptr [RBP + 0xf8] }
    /* +0xedcc79 */ __asm { ROL R10D,CL }
    /* +0xedcc7c */ __asm { IMUL R9,qword ptr [RBP + -0x10] }
    /* +0xedcc81 */ __asm { ADD R9,0x39739cd8 }
    /* +0xedcc88 */ __asm { IMUL R9,qword ptr [RDX + R10*0x1] }
    /* +0xedcc8d */ __asm { MOV RDX,qword ptr [RBP + 0xf8] }
    /* +0xedcc94 */ __asm { ADD EDX,R11D }
    /* +0xedcc97 */ __asm { ADD EDX,0x197a5c0c }
    /* +0xedcc9d */ __asm { MOV RCX,qword ptr [RBP + 0xf8] }
    /* +0xedcca4 */ __asm { XOR R9,RDX }
    /* +0xedcca7 */ __asm { MOV RDX,-0xf657ad19 }
    /* +0xedccb1 */ __asm { ADD R9,RDX }
    /* +0xedccb4 */ __asm { XOR R10D,R10D }
    /* +0xedccb7 */ __asm { MOV RDX,-0x523736ac8288aa21 }
    /* +0xedccc1 */ __asm { CMP R9,RDX }
    /* +0xedccc4 */ __asm { SETA R10B }
    /* +0xedccc8 */ __asm { XOR EDX,EDX }
    /* +0xedccca */ __asm { MOV RAX,-0x523736ac8288aa20 }
    /* +0xedccd4 */ __asm { CMP R9,RAX }
    /* +0xedccd7 */ __asm { SETZ DL }
    /* +0xedccda */ __asm { MOV R9D,0x88f79da }
    /* +0xedcce0 */ __asm { IMUL R8D,R9D,0x5a104415 }
    /* +0xedcce7 */ __asm { ADD R8D,0x8047d147 }
    /* +0xedccee */ __asm { ROL R8D,CL }
    /* +0xedccf1 */ __asm { MOV R9D,0x43305652 }
    /* +0xedccf7 */ __asm { NOT R9D }
    /* +0xedccfa */ __asm { ADD R9D,ECX }
    /* +0xedccfd */ __asm { IMUL R9D,R9D,-0x4f0dd047 }
    /* +0xedcd04 */ __asm { CMP R9,R8 }
    /* +0xedcd07 */ __asm { CMOVBE EDX,R10D }
    /* +0xedcd0b */ __asm { CMP DL,0x1 }
    /* +0xedcd0e */ __asm { JNZ 0x7fffa564cd1c }
    /* +0xedcd10 */ __asm { CDQ }
    /* +0xedcd11 */ __asm { STC }
    /* +0xedcd12 */ __asm { JMP 0x7fffa564ccba }
    /* +0xedcd1c */ __asm { MOV R9,0x0 }
    /* +0xedcd23 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xedcd2a */ __asm { NOP }
    /* +0xedcd2b */ __asm { LEA RAX,[0x7fffa477dbd3] }
    /* +0xedcd32 */ __asm { MOV R9,-0x481c695a4c9573d8 }
    /* +0xedcd3c */ __asm { CMP RAX,R9 }
    /* +0xedcd3f */ __asm { JZ 0x7fffa5651b36 }
    /* +0xedcd45 */ __asm { MOV qword ptr [RBP + 0x380],R9 }
    /* +0xedcd4c */ __asm { MOV R9W,0x3d68 }
    /* +0xedcd51 */ __asm { IMUL R9D,R9D,0x3425 }
    /* +0xedcd58 */ __asm { ROL R9W,CL }
    /* +0xedcd5c */ __asm { MOVZX EDX,R9W }
    /* +0xedcd60 */ __asm { MOV R9W,0xe3a3 }
    /* +0xedcd65 */ __asm { XOR R9D,ECX }
    /* +0xedcd68 */ __asm { NOT R9D }
    /* +0xedcd6b */ __asm { MOVZX R8D,R9W }
    /* +0xedcd6f */ __asm { MOV EAX,dword ptr [R8 + RAX*0x1 + 0x50] }
    /* +0xedcd74 */ __asm { JMP 0x7fffa564d380 }
    /* +0xedcd80 */ __asm { CMP R8D,0x3 }
    /* +0xedcd84 */ __asm { JNZ 0x7fffa564d280 }
    /* +0xedcd8a */ __asm { RDTSC }
    /* +0xedcd8c */ __asm { SHL RDX,0x20 }
    /* +0xedcd90 */ __asm { OR RDX,RAX }
    /* +0xedcd93 */ __asm { MOV R9,0x7facc0f7a00541bd }
    /* +0xedcd9d */ __asm { IMUL RDX,R9 }
    /* +0xedcda1 */ __asm { MOV R9,-0x72dfc79ea40d85ee }
    /* +0xedcdab */ __asm { LEA RCX,[RDX + R9*0x1] }
    /* +0xedcdaf */ __asm { MOV RDX,RCX }
    /* +0xedcdb2 */ __asm { SHR RDX,0x2d }
    /* +0xedcdb6 */ __asm { MOV R8,RCX }
    /* +0xedcdb9 */ __asm { SHR R8,0x1b }
    /* +0xedcdbd */ __asm { XOR EDX,R8D }
    /* +0xedcdc0 */ __asm { SHR RCX,0x3b }
    /* +0xedcdc4 */ __asm { ROR EDX,CL }
    /* +0xedcdc6 */ __asm { MOV dword ptr [RBP + 0x380],0xb1da29b4 }
    /* +0xedcdd0 */ __asm { MOV R9D,dword ptr [RBP + 0x380] }
    /* +0xedcdd7 */ __asm { CMP R9D,0xd059cb0e }
    /* +0xedcdde */ __asm { NOP }
    /* +0xedcddf */ __asm { NOP }
    /* +0xedcde0 */ __asm { NOP }
    /* +0xedcde1 */ __asm { NOP }
    /* +0xedcde2 */ __asm { NOP }
    /* +0xedcde3 */ __asm { NOP }
    /* +0xedcde4 */ __asm { NOP }
    /* +0xedcde5 */ __asm { NOP }
    /* +0xedcde6 */ __asm { NOP }
    /* +0xedcde7 */ __asm { NOP }
    /* +0xedcde8 */ __asm { NOP }
    /* +0xedcde9 */ __asm { NOP }
    /* +0xedcdea */ __asm { NOP }
    /* +0xedcdeb */ __asm { NOP }
    /* +0xedcdec */ __asm { CMP EDX,0x113852 }
    /* +0xedcdf2 */ __asm { JA 0x7fffa564d04f }
    /* +0xedcdf8 */ __asm { MOV dword ptr [RBP + 0x380],0xaa1d74c5 }
    /* +0xedce02 */ __asm { MOV R9D,dword ptr [RBP + 0x380] }
    /* +0xedce09 */ __asm { LEA R11,[0x7fffa47b77fb] }
    /* +0xedce10 */ __asm { MOV R9,-0x27105f5b20680fa3 }
    /* +0xedce1a */ __asm { CMP R11,R9 }
    /* +0xedce1d */ __asm { JZ 0x7fffa5651b3e }
    /* +0xedce23 */ __asm { MOV EDX,0xad5b4ea8 }
    /* +0xedce28 */ __asm { ADD EDX,0xb784ade }
    /* +0xedce2e */ __asm { MOV R10D,0xee73491f }
    /* +0xedce34 */ __asm { MOV RBX,qword ptr [RBP + 0xf8] }
    /* +0xedce3b */ __asm { MOV R9D,EBX }
    /* +0xedce3e */ __asm { OR R9D,0x1 }
    /* +0xedce42 */ __asm { IMUL EDX,R9D }
    /* +0xedce46 */ __asm { MOV R8D,0x473e69db }
    /* +0xedce4c */ __asm { IMUL R8D,R8D,-0x2d08ba53 }
    /* +0xedce53 */ __asm { MOV ECX,EBX }
    /* +0xedce55 */ __asm { ROR R8D,CL }
    /* +0xedce58 */ __asm { IMUL R10D,R9D }
    /* +0xedce5c */ __asm { MOVZX ECX,uint8_t ptr [R11 + 0x4e92] }
    /* +0xedce64 */ __asm { NOT R10D }
    /* +0xedce67 */ __asm { ROL R10D,0x5 }
    /* +0xedce6b */ __asm { MOVSXD RAX,R10D }
    /* +0xedce6e */ __asm { MOVZX R10D,uint8_t ptr [R11 + RCX*0x4 + 0x4ea2] }
    /* +0xedce77 */ __asm { ROL R10B,0x4 }
    /* +0xedce7b */ __asm { MOV uint8_t ptr [RBP + 0x380],R10B }
    /* +0xedce82 */ __asm { MOVZX R10D,uint8_t ptr [R11 + RCX*0x4 + 0x4ea3] }
    /* +0xedce8b */ __asm { ROL R10B,0x4 }
    /* +0xedce8f */ __asm { MOV uint8_t ptr [RBP + 0x381],R10B }
    /* +0xedce96 */ __asm { MOVZX R10D,uint8_t ptr [R11 + RCX*0x4 + 0x4ea4] }
    /* +0xedce9f */ __asm { ROL R10B,0x4 }
    /* +0xedcea3 */ __asm { MOV uint8_t ptr [RBP + 0x382],R10B }
    /* +0xedceaa */ __asm { MOVZX R11D,uint8_t ptr [R11 + RCX*0x4 + 0x4ea5] }
    /* +0xedceb3 */ __asm { ROL R11B,0x4 }
    /* +0xedceb7 */ __asm { MOV uint8_t ptr [RBP + 0x383],R11B }
    /* +0xedcebe */ __asm { MOVZX ECX,uint8_t ptr [R8] }
    /* +0xedcec2 */ __asm { MOV R10D,0x1 }
    /* +0xedcec8 */ __asm { SHL R10D,CL }
    /* +0xedcecb */ __asm { MOV R8D,dword ptr [RBP + 0x380] }
    /* +0xedced2 */ __asm { MOV R11D,0x65e8ce72 }
    /* +0xedced8 */ __asm { XOR R8D,R11D }
    /* +0xedcedb */ __asm { XOR R11D,R11D }
    /* +0xedcede */ __asm { XOR ECX,ECX }
    /* +0xedcee0 */ __asm { TEST R10D,R8D }
    /* +0xedcee3 */ __asm { SETZ R11B }
    /* +0xedcee7 */ __asm { SETS CL }
    /* +0xedceea */ __asm { CMP RDX,RAX }
    /* +0xedceed */ __asm { CMOVA R11D,ECX }
    /* +0xedcef1 */ __asm { TEST R11B,R11B }
    /* +0xedcef4 */ __asm { MOV R11,RBX }
    /* +0xedcef7 */ __asm { JNZ 0x7fffa564d04f }
    /* +0xedcefd */ __asm { MOV RDX,0x0 }
    /* +0xedcf04 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xedcf0b */ __asm { MOV R10D,0xed33dea1 }
    /* +0xedcf11 */ __asm { ADD R10D,0xccc13b1 }
    /* +0xedcf18 */ __asm { MOV ECX,R11D }
    /* +0xedcf1b */ __asm { ROL R10D,CL }
    /* +0xedcf1e */ __asm { MOVAPS xmmword ptr [RBP + 0x380],XMM13 }
    /* +0xedcf26 */ __asm { MOV dword ptr [RBP + 0x260],R10D }
    /* +0xedcf2d */ __asm { MOV R10D,dword ptr [RBP + 0x260] }
    /* +0xedcf34 */ __asm { MOV dword ptr [RBP + 0x380],0x0 }
    /* +0xedcf3e */ __asm { MOV dword ptr [RBP + 0x260],0x7eb9622e }
    /* +0xedcf48 */ __asm { MOV R10D,dword ptr [RBP + 0x260] }
    /* +0xedcf4f */ __asm { MOV EDX,0xaa2cf7ee }
    /* +0xedcf54 */ __asm { XOR EDX,0x6eab8186 }
    /* +0xedcf5a */ __asm { IMUL R9D,EDX }
    /* +0xedcf5e */ __asm { NOT R9D }
    /* +0xedcf61 */ __asm { CMP R10D,R9D }
    /* +0xedcf64 */ __asm { JNC 0x7fffa5653024 }
    /* +0xedcf6a */ __asm { MOV R9W,0x1b2f }
    /* +0xedcf6f */ __asm { IMUL R9D,dword ptr [RBP + -0x30] }
    /* +0xedcf74 */ __asm { ADD R9D,0x269d }
    /* +0xedcf7b */ __asm { MOVZX EDX,R9W }
    /* +0xedcf7f */ __asm { MOV R9,qword ptr GS:[RDX] }
    /* +0xedcf83 */ __asm { MOV EDX,0x3227a145 }
    /* +0xedcf88 */ __asm { XOR EDX,0x46645eb5 }
    /* +0xedcf8e */ __asm { MOV ECX,R11D }
    /* +0xedcf91 */ __asm { ROL EDX,CL }
    /* +0xedcf93 */ __asm { MOV RDX,qword ptr [RDX] }
    /* +0xedcf96 */ __asm { AND RDX,qword ptr [R9 + 0x30] }
    /* +0xedcf9a */ __asm { MOV R9,0x6710f432f878f269 }
    /* +0xedcfa4 */ __asm { CMP RDX,R9 }
    /* +0xedcfa7 */ __asm { NOP }
    /* +0xedcfa8 */ __asm { NOP }
    /* +0xedcfa9 */ __asm { NOP }
    /* +0xedcfaa */ __asm { MOV R9,0x6d9d1510f0b91f21 }
    /* +0xedcfb4 */ __asm { XOR R9,R11 }
    /* +0xedcfb7 */ __asm { LEA RDX,[0x7fffa4784b15] }
    /* +0xedcfbe */ __asm { MOV RCX,RDX }
    /* +0xedcfc1 */ __asm { MOV RAX,0x52098c5aaaf195a3 }
    /* +0xedcfcb */ __asm { IMUL RCX,RAX }
    /* +0xedcfcf */ __asm { MOV RAX,0x59f2d6392d64722d }
    /* +0xedcfd9 */ __asm { ADD RCX,RAX }
    /* +0xedcfdc */ __asm { ADD R9,0x5c45eab3 }
    /* +0xedcfe3 */ __asm { ROL R9,0xc }
    /* +0xedcfe7 */ __asm { CMP R9,RCX }
    /* +0xedcfea */ __asm { NOP }
    /* +0xedcfeb */ __asm { NOP }
    /* +0xedcfec */ __asm { NOP }
    /* +0xedcfed */ __asm { NOP }
    /* +0xedcfee */ __asm { NOP }
    /* +0xedcfef */ __asm { MOV qword ptr [RBP + 0x260],R9 }
    /* +0xedcff6 */ __asm { MOV R9W,0xc753 }
    /* +0xedcffb */ __asm { MOV EAX,dword ptr [RDX + -0x4f9] }
    /* +0xedd001 */ __asm { MOV DX,0xa422 }
    /* +0xedd005 */ __asm { ADD EDX,0xffffdc1d }
    /* +0xedd00b */ __asm { XOR EDX,0xa6d }
    /* +0xedd011 */ __asm { ADD EDX,R11D }
    /* +0xedd014 */ __asm { MOVSX R10,DX }
    /* +0xedd018 */ __asm { MOV DX,0x4923 }
    /* +0xedd01c */ __asm { XOR EDX,0x89 }
    /* +0xedd022 */ __asm { ADD EDX,0xffffb65b }
    /* +0xedd028 */ __asm { MOV ECX,R11D }
    /* +0xedd02b */ __asm { ROR DX,CL }
    /* +0xedd02e */ __asm { MOVZX EDX,DX }
    /* +0xedd031 */ __asm { IMUL R9D,R9D,0x1eb1 }
    /* +0xedd038 */ __asm { ADD R9D,R11D }
    /* +0xedd03b */ __asm { MOVZX R9D,R9W }
    /* +0xedd03f */ __asm { LEA R8,[RBP + 0x380] }
    /* +0xedd046 */ __asm { SYSCALL }
    /* +0xedd048 */ __asm { MOV R11,qword ptr [RBP + 0xf8] }
    /* +0xedd04f */ __asm { MOV R10D,0xbb6507b3 }
    /* +0xedd055 */ __asm { ADD R10D,0x1cf05eee }
    /* +0xedd05c */ __asm { LEA R9,[0x7fffa47801f1] }
    /* +0xedd063 */ __asm { MOV RDX,R9 }
    /* +0xedd066 */ __asm { ROL RDX,0x2a }
    /* +0xedd06a */ __asm { ROL R10D,0x16 }
    /* +0xedd06e */ __asm { MOV ECX,R11D }
    /* +0xedd071 */ __asm { ROR R10D,CL }
    /* +0xedd074 */ __asm { MOVSXD RAX,R10D }
    /* +0xedd077 */ __asm { SUB RDX,RAX }
    /* +0xedd07a */ __asm { MOV RAX,-0x71a91d7437614eb7 }
    /* +0xedd084 */ __asm { CMP RDX,RAX }
    /* +0xedd087 */ __asm { NOP }
    /* +0xedd088 */ __asm { NOP }
    /* +0xedd089 */ __asm { NOP }
    /* +0xedd08a */ __asm { NOP }
    /* +0xedd08b */ __asm { NOP }
    /* +0xedd08c */ __asm { MOV R10W,0xe2f7 }
    /* +0xedd091 */ __asm { ADD R10D,0xffff92b5 }
    /* +0xedd098 */ __asm { XOR R10D,R11D }
    /* +0xedd09b */ __asm { MOVZX EDX,R10W }
    /* +0xedd09f */ __asm { MOV qword ptr [RBP + 0x380],RCX }
    /* +0xedd0a6 */ __asm { MOV EAX,dword ptr [R9 + 0x4c37] }
    /* +0xedd0ad */ __asm { JMP 0x7fffa564d380 }
    /* +0xedd0c0 */ __asm { MOV R9D,0xf3218738 }
    /* +0xedd0c6 */ __asm { MOV RDX,-0x32a9eda2e4080260 }
    /* +0xedd0d0 */ __asm { CMP R9,RDX }
    /* +0xedd0d3 */ __asm { NOP }
    /* +0xedd0d4 */ __asm { NOP }
    /* +0xedd0d5 */ __asm { NOP }
    /* +0xedd0d6 */ __asm { NOP }
    /* +0xedd0d7 */ __asm { NOP }
    /* +0xedd0d8 */ __asm { MOV R9,qword ptr [R9 + -0x73238730] }
    /* +0xedd0df */ __asm { MOV RAX,R9 }
    /* +0xedd0e2 */ __asm { MOV RDX,-0x134f7dab8e3f9812 }
    /* +0xedd0ec */ __asm { MUL RDX }
    /* +0xedd0ef */ __asm { MOV R11,RDX }
    /* +0xedd0f2 */ __asm { MOV RAX,R9 }
    /* +0xedd0f5 */ __asm { MOV R9D,0x14652c7 }
    /* +0xedd0fb */ __asm { MUL R9 }
    /* +0xedd0fe */ __asm { ADD RAX,R11 }
    /* +0xedd101 */ __asm { ADC RDX,0x0 }
    /* +0xedd105 */ __asm { TEST DL,0x1 }
    /* +0xedd108 */ __asm { JNZ 0x7fffa564d31c }
    /* +0xedd10e */ __asm { MOV R9D,0x4fbb4e79 }
    /* +0xedd114 */ __asm { IMUL R9D,R9D,0x5b858e85 }
    /* +0xedd11b */ __asm { MOV R10D,0x26f01f9b }
    /* +0xedd121 */ __asm { MOV RBX,qword ptr [RBP + 0xf8] }
    /* +0xedd128 */ __asm { SUB R10D,EBX }
    /* +0xedd12b */ __asm { NOT R9D }
    /* +0xedd12e */ __asm { MOVSXD R9,R9D }
    /* +0xedd131 */ __asm { XOR R10D,0x8875b1e3 }
    /* +0xedd138 */ __asm { MOVSXD R11,R10D }
    /* +0xedd13b */ __asm { RDTSC }
    /* +0xedd13d */ __asm { SHL RDX,0x20 }
    /* +0xedd141 */ __asm { OR RDX,RAX }
    /* +0xedd144 */ __asm { MOV RAX,-0x4a9b10dd1385131b }
    /* +0xedd14e */ __asm { IMUL RDX,RAX }
    /* +0xedd152 */ __asm { LEA R10D,[RDX + 0x1b] }
    /* +0xedd156 */ __asm { MOV RAX,-0x1ec2043d9f0ceea }
    /* +0xedd160 */ __asm { ADD RDX,RAX }
    /* +0xedd163 */ __asm { MOV R8,RDX }
    /* +0xedd166 */ __asm { SHR R8,0x2d }
    /* +0xedd16a */ __asm { MOV RCX,RDX }
    /* +0xedd16d */ __asm { SHR RCX,0x3b }
    /* +0xedd171 */ __asm { CMP R11,R9 }
    /* +0xedd174 */ __asm { MOV R11,RBX }
    /* +0xedd177 */ __asm { MOV R9D,0x50d76a84 }
    /* +0xedd17d */ __asm { CMOVNC ECX,R10D }
    /* +0xedd181 */ __asm { SHR RDX,0x1b }
    /* +0xedd185 */ __asm { XOR EDX,R8D }
    /* +0xedd188 */ __asm { MOV R10D,R11D }
    /* +0xedd18b */ __asm { OR R10D,0x1 }
}


// ============================================================================
// Function : Unwind@7fffa5655f70  |  RVA: 0xee5f70  |  Size: 299 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5655f70(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x418)) {
    uVar1 = *(uint64_t *)(param_2 + 0x400);
    FUN_7fffa5687c30(*(uint64_t *)(param_2 + 0x178),uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa56560a0  |  RVA: 0xee60a0  |  Size: 2620 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa56560a0(void) {
    /* +0xee60a0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0xee60a5 */ __asm { PUSH RBP }
    /* +0xee60a6 */ __asm { PUSH R12 }
    /* +0xee60a8 */ __asm { PUSH R13 }
    /* +0xee60aa */ __asm { PUSH RSI }
    /* +0xee60ab */ __asm { PUSH RDI }
    /* +0xee60ac */ __asm { PUSH R14 }
    /* +0xee60ae */ __asm { PUSH R15 }
    /* +0xee60b0 */ __asm { PUSH RBX }
    /* +0xee60b1 */ __asm { SUB RSP,0xe8 }
    /* +0xee60b8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0xee60bf */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM14 }
    /* +0xee60c6 */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM12 }
    /* +0xee60cd */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM7 }
    /* +0xee60d3 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM9 }
    /* +0xee60da */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM11 }
    /* +0xee60e4 */ __asm { MOVAPS xmmword ptr [RSP + 0x90],XMM13 }
    /* +0xee60ed */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM6 }
    /* +0xee60f6 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM8 }
    /* +0xee6100 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM10 }
    /* +0xee610a */ __asm { MOVDQA xmmword ptr [RSP + 0xd0],XMM15 }
    /* +0xee6114 */ __asm { MOV R9D,0x102f4bbd }
    /* +0xee611a */ __asm { ADD R9D,0x708f3884 }
    /* +0xee6121 */ __asm { ROL R9D,0x1c }
    /* +0xee6125 */ __asm { MOV R10,qword ptr [RBP + 0xf8] }
    /* +0xee612c */ __asm { SUB R9D,R10D }
    /* +0xee612f */ __asm { MOVSXD R9,R9D }
    /* +0xee6132 */ __asm { MOV RDX,qword ptr [RBP + 0x118] }
    /* +0xee6139 */ __asm { MOV R8,RDX }
    /* +0xee613c */ __asm { SHR R8,0x3d }
    /* +0xee6140 */ __asm { XOR R8,RDX }
    /* +0xee6143 */ __asm { LEA RDX,[0x7fffa5690999] }
    /* +0xee614a */ __asm { ADD RDX,R9 }
    /* +0xee614d */ __asm { MOV R11D,0xc71c1c3e }
    /* +0xee6153 */ __asm { SUB R11D,R10D }
    /* +0xee6156 */ __asm { ROL R11D,0x1a }
    /* +0xee615a */ __asm { NOT R11D }
    /* +0xee615d */ __asm { CALL RDX }
    /* +0xee615f */ __asm { MOV R10,qword ptr [RBP + -0x40] }
    /* +0xee6163 */ __asm { RDTSC }
    /* +0xee6165 */ __asm { SHL RDX,0x20 }
    /* +0xee6169 */ __asm { OR RDX,RAX }
    /* +0xee616c */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xee6176 */ __asm { IMUL RDX,R9 }
    /* +0xee617a */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xee6184 */ __asm { ADD RCX,RDX }
    /* +0xee6187 */ __asm { MOV RDX,RCX }
    /* +0xee618a */ __asm { SHR RDX,0x2d }
    /* +0xee618e */ __asm { MOV R8,RCX }
    /* +0xee6191 */ __asm { SHR R8,0x1b }
    /* +0xee6195 */ __asm { SHR RCX,0x3b }
    /* +0xee6199 */ __asm { XOR EDX,R8D }
    /* +0xee619c */ __asm { ROR EDX,CL }
    /* +0xee619e */ __asm { AND EDX,0x3 }
    /* +0xee61a1 */ __asm { CMP EDX,0x2 }
    /* +0xee61a4 */ __asm { JC 0x7fffa56562c6 }
    /* +0xee61aa */ __asm { CMP EDX,0x3 }
    /* +0xee61ad */ __asm { JZ 0x7fffa5656446 }
    /* +0xee61b3 */ __asm { LEA R9,[0x7fffa47b8de9] }
    /* +0xee61ba */ __asm { MOV RDX,-0x136f07d87f87b8e6 }
    /* +0xee61c4 */ __asm { CMP R9,RDX }
    /* +0xee61c7 */ __asm { NOP }
    /* +0xee61c8 */ __asm { NOP }
    /* +0xee61c9 */ __asm { NOP }
    /* +0xee61ca */ __asm { NOP }
    /* +0xee61cb */ __asm { NOP }
    /* +0xee61cc */ __asm { MOV R11D,0x69ef9b1b }
    /* +0xee61d2 */ __asm { MOV RDX,qword ptr [RBP + 0xf8] }
    /* +0xee61d9 */ __asm { LEA R8D,[RDX + R11*0x1] }
    /* +0xee61dd */ __asm { ADD R8D,0xf7c097fd }
    /* +0xee61e4 */ __asm { XOR R8D,0x8a845215 }
    /* +0xee61eb */ __asm { MOV R11D,0x6a2dffd1 }
    /* +0xee61f1 */ __asm { MOV EAX,0x2693f0dd }
    /* +0xee61f6 */ __asm { MOV EDX,0x6a0d0452 }
    /* +0xee61fb */ __asm { SUB EDX,EAX }
    /* +0xee61fd */ __asm { MOVSXD RAX,R8D }
    /* +0xee6200 */ __asm { MOVZX ECX,uint8_t ptr [R9 + 0x38a4] }
    /* +0xee6208 */ __asm { MOVZX R8D,uint8_t ptr [R9 + RCX*0x4 + 0x38b4] }
    /* +0xee6211 */ __asm { ROL R8B,0x4 }
    /* +0xee6215 */ __asm { MOV uint8_t ptr [RBP + 0x380],R8B }
    /* +0xee621c */ __asm { MOV R8,qword ptr [RBP + 0xf0] }
    /* +0xee6223 */ __asm { IMUL R8D,R11D }
    /* +0xee6227 */ __asm { ADD R8D,0x93343ec2 }
    /* +0xee622e */ __asm { ROL R8D,0x15 }
    /* +0xee6232 */ __asm { MOVZX R11D,uint8_t ptr [R9 + RCX*0x4 + 0x38b5] }
    /* +0xee623b */ __asm { ROL R11B,0x4 }
    /* +0xee623f */ __asm { MOV uint8_t ptr [RBP + 0x381],R11B }
    /* +0xee6246 */ __asm { MOVZX R11D,uint8_t ptr [R9 + RCX*0x4 + 0x38b6] }
    /* +0xee624f */ __asm { ROL R11B,0x4 }
    /* +0xee6253 */ __asm { MOV uint8_t ptr [RBP + 0x382],R11B }
    /* +0xee625a */ __asm { MOVZX R9D,uint8_t ptr [R9 + RCX*0x4 + 0x38b7] }
    /* +0xee6263 */ __asm { ROL R9B,0x4 }
    /* +0xee6267 */ __asm { MOV uint8_t ptr [RBP + 0x383],R9B }
    /* +0xee626e */ __asm { MOV R9D,0x65e8ce72 }
    /* +0xee6274 */ __asm { XOR R9D,dword ptr [RBP + 0x380] }
    /* +0xee627b */ __asm { MOV R8D,dword ptr [R8] }
    /* +0xee627e */ __asm { MOV R11D,R8D }
    /* +0xee6281 */ __asm { NEG R11B }
    /* +0xee6284 */ __asm { CMP RDX,RAX }
    /* +0xee6287 */ __asm { MOVZX EDX,R11B }
    /* +0xee628b */ __asm { CMOVGE EDX,R8D }
    /* +0xee628f */ __asm { BT R9D,EDX }
    /* +0xee6293 */ __asm { JNC 0x7fffa5656ed7 }
    /* +0xee6299 */ __asm { LEA R9,[0x7fffa47b6136] }
    /* +0xee62a0 */ __asm { MOV RDX,-0x618149f4d226f560 }
    /* +0xee62aa */ __asm { CMP R9,RDX }
    /* +0xee62ad */ __asm { JZ 0x7fffa5656f6d }
    /* +0xee62b3 */ __asm { MOV qword ptr [RBP + 0x380],RDX }
    /* +0xee62ba */ __asm { MOV EAX,dword ptr [R9 + 0x6f02] }
    /* +0xee62c1 */ __asm { JMP 0x7fffa5656f03 }
    /* +0xee62c6 */ __asm { CMP EDX,0x1 }
    /* +0xee62c9 */ __asm { JNZ 0x7fffa56564b2 }
    /* +0xee62cf */ __asm { MOV R9D,0x135b5b60 }
    /* +0xee62d5 */ __asm { MOV RDX,R9 }
    /* +0xee62d8 */ __asm { XOR RDX,-0x7b2d558 }
    /* +0xee62df */ __asm { MOV RAX,-0x3dcb7b6ed8d5e25b }
    /* +0xee62e9 */ __asm { CMP RDX,RAX }
    /* +0xee62ec */ __asm { NOP }
    /* +0xee62ed */ __asm { NOP }
    /* +0xee62ee */ __asm { NOP }
    /* +0xee62ef */ __asm { NOP }
    /* +0xee62f0 */ __asm { NOP }
    /* +0xee62f1 */ __asm { NOP }
    /* +0xee62f2 */ __asm { NOP }
    /* +0xee62f3 */ __asm { NOP }
    /* +0xee62f4 */ __asm { NOP }
    /* +0xee62f5 */ __asm { NOP }
    /* +0xee62f6 */ __asm { NOP }
    /* +0xee62f7 */ __asm { NOP }
    /* +0xee62f8 */ __asm { NOP }
    /* +0xee62f9 */ __asm { NOP }
    /* +0xee62fa */ __asm { NOP }
    /* +0xee62fb */ __asm { NOP }
    /* +0xee62fc */ __asm { NOP }
    /* +0xee6446 */ __asm { MOV R9D,0x9f13a816 }
    /* +0xee644c */ __asm { MOV RDX,-0x52e9baea65df855b }
    /* +0xee6456 */ __asm { CMP R9,RDX }
    /* +0xee6459 */ __asm { JZ 0x7fffa5656f7f }
    /* +0xee645f */ __asm { CMP dword ptr [R9 + -0x1f15a456],0xd }
    /* +0xee6467 */ __asm { MOV R11,qword ptr [RBP + 0xf8] }
    /* +0xee646e */ __asm { JNC 0x7fffa5656b97 }
    /* +0xee6474 */ __asm { MOV RDX,-0x21515689f328ad37 }
    /* +0xee647e */ __asm { ADD RDX,0x1424e9c7 }
    /* +0xee6485 */ __asm { LEA R9,[0x7fffa47c4b6c] }
    /* +0xee648c */ __asm { MOV RCX,R9 }
    /* +0xee648f */ __asm { XOR RCX,RDX }
    /* +0xee6492 */ __asm { CMP RCX,0x6ebf89a6 }
    /* +0xee6499 */ __asm { JZ 0x7fffa5656f87 }
    /* +0xee649f */ __asm { MOV qword ptr [RBP + 0x380],RDX }
    /* +0xee64a6 */ __asm { MOV EAX,dword ptr [R9 + -0x7b34] }
    /* +0xee64ad */ __asm { JMP 0x7fffa5656f03 }
    /* +0xee64b2 */ __asm { MOV R9,0x5eebb75899d9bd8c }
    /* +0xee64bc */ __asm { ADD R9,0x4e77a1ab }
    /* +0xee64c3 */ __asm { MOV R11,qword ptr [RBP + 0xf8] }
    /* +0xee64ca */ __asm { XOR R9,R11 }
    /* +0xee64cd */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xee64d4 */ __asm { MOV RDX,0x0 }
    /* +0xee64db */ __asm { RDTSC }
    /* +0xee64dd */ __asm { SHL RDX,0x20 }
    /* +0xee64e1 */ __asm { OR RDX,RAX }
    /* +0xee64e4 */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0xee64ee */ __asm { IMUL RDX,RAX }
    /* +0xee64f2 */ __asm { ADD RDX,R9 }
    /* +0xee64f5 */ __asm { MOV RCX,RDX }
    /* +0xee64f8 */ __asm { SHR RCX,0x3b }
    /* +0xee64fc */ __asm { MOV R8,RDX }
    /* +0xee64ff */ __asm { SHR R8,0x2d }
    /* +0xee6503 */ __asm { SHR RDX,0x1b }
    /* +0xee6507 */ __asm { XOR R8D,EDX }
    /* +0xee650a */ __asm { ROR R8D,CL }
    /* +0xee650d */ __asm { PUSHFQ }
    /* +0xee650e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xee6516 */ __asm { POPFQ }
    /* +0xee6517 */ __asm { MOV dword ptr [RBP + 0x380],0xb40cfc3c }
    /* +0xee6521 */ __asm { MOV R9D,dword ptr [RBP + 0x380] }
    /* +0xee6528 */ __asm { CMP R9D,0x45739538 }
    /* +0xee652f */ __asm { NOP }
    /* +0xee6530 */ __asm { NOP }
    /* +0xee6531 */ __asm { NOP }
    /* +0xee6532 */ __asm { NOP }
    /* +0xee6533 */ __asm { NOP }
    /* +0xee6534 */ __asm { CMP R8D,0x4613623 }
    /* +0xee653b */ __asm { JA 0x7fffa5656890 }
    /* +0xee6541 */ __asm { MOV dword ptr [RBP + 0x380],0xdde596e4 }
    /* +0xee654b */ __asm { MOV R9D,dword ptr [RBP + 0x380] }
    /* +0xee6552 */ __asm { MOV R9D,0xbfb3e253 }
    /* +0xee6558 */ __asm { MOV RDX,-0x2c2e6413e5ed3a26 }
    /* +0xee6562 */ __asm { CMP R9,RDX }
    /* +0xee6565 */ __asm { JZ 0x7fffa5656f8f }
    /* +0xee656b */ __asm { MOV R8D,0xaee8a3b6 }
    /* +0xee6571 */ __asm { LEA RDX,[R9 + -0x3fb5e253] }
    /* +0xee6578 */ __asm { XOR R8D,R11D }
    /* +0xee657b */ __asm { IMUL R8D,R8D,-0x4ab883b7 }
    /* +0xee6582 */ __asm { ROL R8D,0x11 }
    /* +0xee6586 */ __asm { MOV ECX,0x1f61df6c }
    /* +0xee658b */ __asm { IMUL ECX,dword ptr [RBP + 0xf0] }
    /* +0xee6592 */ __asm { MOV R11D,0xa4b6a382 }
    /* +0xee6598 */ __asm { SUB R11D,dword ptr [RBP + 0xf8] }
    /* +0xee659f */ __asm { MOV RAX,-0x555555554d5920fc }
    /* +0xee65a9 */ __asm { ROL ECX,0x1e }
    /* +0xee65ac */ __asm { NOT ECX }
    /* +0xee65ae */ __asm { XOR RAX,qword ptr [RBP + 0xf8] }
    /* +0xee65b5 */ __asm { ADD R11D,0x339fefd8 }
    /* +0xee65bc */ __asm { MOVSXD R11,R11D }
    /* +0xee65bf */ __asm { XOR R11,R9 }
    /* +0xee65c2 */ __asm { CMP R8,RCX }
    /* +0xee65c5 */ __asm { CMOVBE R11,RDX }
    /* +0xee65c9 */ __asm { NOT RAX }
    /* +0xee65cc */ __asm { MOV EDX,dword ptr [R11 + 0x2c4] }
    /* +0xee65d3 */ __asm { MOV RCX,qword ptr [RBP + 0xf8] }
    /* +0xee65da */ __asm { MOV R9,0x5555555555555556 }
    /* +0xee65e4 */ __asm { IMUL RDX,R9 }
    /* +0xee65e8 */ __asm { CMP RDX,RAX }
    /* +0xee65eb */ __asm { JNC 0x7fffa5656890 }
    /* +0xee65f1 */ __asm { MOV qword ptr [RBP + 0x120],R10 }
    /* +0xee65f8 */ __asm { MOV R9W,0xdefd }
    /* +0xee65fd */ __asm { XORPS XMM3,XMM3 }
    /* +0xee6600 */ __asm { MOVAPS xmmword ptr [RBP + 0x380],XMM3 }
    /* +0xee6607 */ __asm { MOV R10D,0xffffdf5d }
    /* +0xee660d */ __asm { SUB R10D,R9D }
    /* +0xee6610 */ __asm { MOVZX EDX,R10W }
    /* +0xee6614 */ __asm { MOV R9,qword ptr GS:[RDX] }
    /* +0xee6618 */ __asm { MOV R9,qword ptr [R9 + 0x18] }
    /* +0xee661c */ __asm { MOV EDX,0x1e6467a1 }
    /* +0xee6621 */ __asm { XOR EDX,0xdf08685e }
    /* +0xee6627 */ __asm { ROR EDX,CL }
    /* +0xee6629 */ __asm { SUB R9,qword ptr [RDX] }
    /* +0xee662c */ __asm { ROL R9,0x1 }
    /* +0xee662f */ __asm { XOR R9,0x43fbd98b }
    /* +0xee6636 */ __asm { MOV RDX,0x26ad3af607a3bcb5 }
    /* +0xee6640 */ __asm { CMP R9,RDX }
    /* +0xee6643 */ __asm { NOP }
    /* +0xee6644 */ __asm { NOP }
    /* +0xee6645 */ __asm { NOP }
    /* +0xee6646 */ __asm { NOP }
    /* +0xee6647 */ __asm { NOP }
    /* +0xee6648 */ __asm { MOV dword ptr [RBP + 0x380],0x0 }
    /* +0xee6652 */ __asm { MOV dword ptr [RBP + 0x260],0x525f263f }
    /* +0xee665c */ __asm { MOV R9D,dword ptr [RBP + 0x260] }
    /* +0xee6663 */ __asm { MOV R10D,0xaf4d4c33 }
    /* +0xee6669 */ __asm { MOV EDX,0x6ee101a0 }
    /* +0xee666e */ __asm { SUB EDX,R10D }
    /* +0xee6671 */ __asm { MOV R8D,0xb1a7a58a }
    /* +0xee6677 */ __asm { SUB R8D,ECX }
    /* +0xee667a */ __asm { ADD R8D,0xe23bf277 }
    /* +0xee6681 */ __asm { CMP R8,RDX }
    /* +0xee6684 */ __asm { SETC DL }
    /* +0xee6687 */ __asm { CMP R9D,0xb31abe76 }
    /* +0xee668e */ __asm { SETNC R9B }
    /* +0xee6692 */ __asm { XOR R9B,DL }
    /* +0xee6695 */ __asm { NOP }
    /* +0xee6696 */ __asm { NOP }
    /* +0xee6697 */ __asm { NOP }
    /* +0xee6698 */ __asm { NOP }
    /* +0xee6699 */ __asm { NOP }
    /* +0xee669a */ __asm { MOV R9D,0x2dee40b6 }
    /* +0xee66a0 */ __asm { XOR R9D,ECX }
    /* +0xee66a3 */ __asm { ROL R9D,0x12 }
    /* +0xee66a7 */ __asm { PUSHFQ }
    /* +0xee66a8 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xee66b0 */ __asm { POPFQ }
    /* +0xee66b1 */ __asm { MOV dword ptr [RBP + 0x260],R9D }
    /* +0xee66b8 */ __asm { MOV R9D,dword ptr [RBP + 0x260] }
    /* +0xee66bf */ __asm { CMP R9D,0xd8046760 }
    /* +0xee66c6 */ __asm { NOP }
    /* +0xee66c7 */ __asm { NOP }
    /* +0xee66c8 */ __asm { NOP }
    /* +0xee66c9 */ __asm { NOP }
    /* +0xee66ca */ __asm { NOP }
    /* +0xee66cb */ __asm { NOP }
    /* +0xee66cc */ __asm { NOP }
    /* +0xee66cd */ __asm { NOP }
    /* +0xee66ce */ __asm { NOP }
    /* +0xee66cf */ __asm { NOP }
    /* +0xee66d0 */ __asm { NOP }
    /* +0xee66d1 */ __asm { NOP }
    /* +0xee66d2 */ __asm { NOP }
    /* +0xee66d3 */ __asm { NOP }
    /* +0xee66d4 */ __asm { NOP }
    /* +0xee66d5 */ __asm { NOP }
    /* +0xee66d6 */ __asm { NOP }
    /* +0xee6890 */ __asm { LEA R9,[0x7fffa4784a93] }
    /* +0xee6897 */ __asm { MOV RDX,-0x51afb7997d83465d }
    /* +0xee68a1 */ __asm { CMP R9,RDX }
    /* +0xee68a4 */ __asm { NOP }
    /* +0xee68a5 */ __asm { NOP }
    /* +0xee68a6 */ __asm { NOP }
    /* +0xee68a7 */ __asm { NOP }
    /* +0xee68a8 */ __asm { NOP }
    /* +0xee68a9 */ __asm { NOP }
    /* +0xee68aa */ __asm { NOP }
    /* +0xee68ab */ __asm { NOP }
    /* +0xee68ac */ __asm { NOP }
    /* +0xee68ad */ __asm { MOV qword ptr [RBP + 0x380],RDX }
    /* +0xee68b4 */ __asm { MOV EAX,dword ptr [R9 + -0x463] }
    /* +0xee68bb */ __asm { JMP 0x7fffa5656f03 }
    /* +0xee69a7 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xee69ae */ __asm { MOV RDX,0x0 }
    /* +0xee69b5 */ __asm { MOV R11D,0x40ed8c8a }
    /* +0xee69bb */ __asm { ADD R11D,0x7ffe026c }
    /* +0xee69c2 */ __asm { ROL R11D,0x5 }
    /* +0xee69c6 */ __asm { SUB R11D,dword ptr [RBP + 0xf8] }
    /* +0xee69cd */ __asm { TEST uint8_t ptr [R9 + R11*0x1 + 0x240],0x1 }
    /* +0xee69d6 */ __asm { MOV R10,R13 }
    /* +0xee69d9 */ __asm { JNZ 0x7fffa5656b54 }
    /* +0xee69df */ __asm { XORPS XMM3,XMM3 }
    /* +0xee69e2 */ __asm { MOVAPS xmmword ptr [RBP + 0x380],XMM3 }
    /* +0xee69e9 */ __asm { MOV R9W,0xe4ca }
    /* +0xee69ee */ __asm { MOV R10D,0xffffe52a }
    /* +0xee69f4 */ __asm { SUB R10D,R9D }
    /* +0xee69f7 */ __asm { MOVZX EDX,R10W }
    /* +0xee69fb */ __asm { MOV R11,qword ptr GS:[RDX] }
    /* +0xee69ff */ __asm { MOV R9W,0x236c }
    /* +0xee6a04 */ __asm { ADD R9D,0xffffb52f }
    /* +0xee6a0b */ __asm { MOV RCX,qword ptr [RBP + 0xf8] }
    /* +0xee6a12 */ __asm { ROL R9W,CL }
    /* +0xee6a16 */ __asm { ADD R9D,0xffff907d }
    /* +0xee6a1d */ __asm { MOVZX EDX,R9W }
    /* +0xee6a21 */ __asm { MOV R9,-0x35cb1e5c08b7eadf }
    /* +0xee6a2b */ __asm { CMP qword ptr [RDX + R11*0x1],R9 }
    /* +0xee6a2f */ __asm { NOP }
    /* +0xee6a30 */ __asm { NOP }
    /* +0xee6a31 */ __asm { NOP }
    /* +0xee6a32 */ __asm { NOP }
    /* +0xee6a33 */ __asm { NOP }
    /* +0xee6a34 */ __asm { NOP }
    /* +0xee6a35 */ __asm { NOP }
    /* +0xee6a36 */ __asm { NOP }
    /* +0xee6a37 */ __asm { NOP }
    /* +0xee6a38 */ __asm { NOP }
    /* +0xee6a39 */ __asm { NOP }
    /* +0xee6a3a */ __asm { NOP }
    /* +0xee6a3b */ __asm { NOP }
    /* +0xee6a3c */ __asm { NOP }
    /* +0xee6a3d */ __asm { NOP }
    /* +0xee6a3e */ __asm { NOP }
    /* +0xee6a3f */ __asm { PUSHFQ }
    /* +0xee6a40 */ __asm { POP R10 }
    /* +0xee6a42 */ __asm { MOV dword ptr [RBP + 0x380],0x0 }
    /* +0xee6a4c */ __asm { TEST R10D,0x100 }
    /* +0xee6a53 */ __asm { NOP }
    /* +0xee6a54 */ __asm { NOP }
    /* +0xee6a55 */ __asm { NOP }
    /* +0xee6a56 */ __asm { NOP }
    /* +0xee6a57 */ __asm { NOP }
    /* +0xee6a58 */ __asm { NOP }
    /* +0xee6a59 */ __asm { NOP }
    /* +0xee6a5a */ __asm { NOP }
    /* +0xee6a5b */ __asm { NOP }
    /* +0xee6a5c */ __asm { NOP }
    /* +0xee6a5d */ __asm { NOP }
    /* +0xee6a5e */ __asm { NOP }
    /* +0xee6a5f */ __asm { NOP }
    /* +0xee6a60 */ __asm { NOP }
    /* +0xee6a61 */ __asm { NOP }
    /* +0xee6a62 */ __asm { NOP }
    /* +0xee6a63 */ __asm { NOP }
    /* +0xee6b54 */ __asm { LEA R9,[0x7fffa4788dfb] }
    /* +0xee6b5b */ __asm { MOV RDX,0x5e1559c606df4a7f }
    /* +0xee6b65 */ __asm { CMP R9,RDX }
    /* +0xee6b68 */ __asm { NOP }
    /* +0xee6b69 */ __asm { NOP }
    /* +0xee6b6a */ __asm { NOP }
    /* +0xee6b6b */ __asm { NOP }
    /* +0xee6b6c */ __asm { NOP }
    /* +0xee6b6d */ __asm { MOV EDX,0x2a4f01a6 }
    /* +0xee6b72 */ __asm { IMUL EDX,EDX,-0x4108dfe5 }
    /* +0xee6b78 */ __asm { NOT EDX }
    /* +0xee6b7a */ __asm { IMUL EDX,EDX,0x20d9475d }
    /* +0xee6b80 */ __asm { MOVSXD R11,EDX }
    /* +0xee6b83 */ __asm { MOV qword ptr [RBP + 0x380],RDX }
    /* +0xee6b8a */ __asm { MOV EAX,dword ptr [R9 + R11*0x1 + 0xf8] }
    /* +0xee6b92 */ __asm { JMP 0x7fffa5656f03 }
    /* +0xee6b97 */ __asm { MOV R9D,0x7e4d4557 }
    /* +0xee6b9d */ __asm { RDTSC }
    /* +0xee6b9f */ __asm { SHL RDX,0x20 }
    /* +0xee6ba3 */ __asm { OR RDX,RAX }
    /* +0xee6ba6 */ __asm { MOV RAX,-0x4a9b10dd1385131b }
    /* +0xee6bb0 */ __asm { IMUL RAX,RDX }
    /* +0xee6bb4 */ __asm { PUSHFQ }
    /* +0xee6bb5 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xee6bbd */ __asm { POPFQ }
    /* +0xee6bbe */ __asm { MOV R8,0x4a9b10dd1385131b }
    /* +0xee6bc8 */ __asm { XOR R9D,0x9408ed44 }
    /* +0xee6bcf */ __asm { MOV ECX,R11D }
    /* +0xee6bd2 */ __asm { ROL R9D,CL }
    /* +0xee6bd5 */ __asm { ADD R8,RDX }
    /* +0xee6bd8 */ __asm { MOV EDX,0xdf4b19bc }
    /* +0xee6bdd */ __asm { IMUL EDX,EDX,0x490948b9 }
    /* +0xee6be3 */ __asm { XOR EDX,R11D }
    /* +0xee6be6 */ __asm { ADD EDX,0xcf976582 }
    /* +0xee6bec */ __asm { CMP RDX,R9 }
    /* +0xee6bef */ __asm { CMOVA R8,RAX }
    /* +0xee6bf3 */ __asm { MOV R9,-0x3e195d9f9242cce6 }
    /* +0xee6bfd */ __asm { ADD R8,R9 }
    /* +0xee6c00 */ __asm { MOV RDX,R8 }
    /* +0xee6c03 */ __asm { SHR RDX,0x1b }
    /* +0xee6c07 */ __asm { MOV RCX,R8 }
    /* +0xee6c0a */ __asm { SHR RCX,0x3b }
    /* +0xee6c0e */ __asm { SHR R8,0x2d }
    /* +0xee6c12 */ __asm { XOR R8D,EDX }
    /* +0xee6c15 */ __asm { ROR R8D,CL }
    /* +0xee6c18 */ __asm { MOV dword ptr [RBP + 0x380],0x43503830 }
    /* +0xee6c22 */ __asm { MOV R9D,dword ptr [RBP + 0x380] }
    /* +0xee6c29 */ __asm { TEST R9D,R9D }
    /* +0xee6c2c */ __asm { NOP }
    /* +0xee6c2d */ __asm { NOP }
    /* +0xee6c2e */ __asm { NOP }
    /* +0xee6c2f */ __asm { NOP }
    /* +0xee6c30 */ __asm { NOP }
    /* +0xee6c31 */ __asm { MOV R9D,0xdc986c41 }
    /* +0xee6c37 */ __asm { XOR R9D,0x38686e70 }
    /* +0xee6c3e */ __asm { MOV ECX,R11D }
    /* +0xee6c41 */ __asm { ROL R9D,CL }
    /* +0xee6c44 */ __asm { CMP R8D,R9D }
    /* +0xee6c47 */ __asm { JNC 0x7fffa5656e89 }
    /* +0xee6c4d */ __asm { MOV R13,R10 }
    /* +0xee6c50 */ __asm { NOP }
    /* +0xee6c51 */ __asm { MOV R9,0x0 }
    /* +0xee6c58 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xee6c5f */ __asm { MOV R9W,0x8a4a }
    /* +0xee6c64 */ __asm { XOR R9D,R11D }
    /* +0xee6c67 */ __asm { NOT R9D }
    /* +0xee6c6a */ __asm { ROL R9W,0x2 }
    /* +0xee6c6f */ __asm { MOVZX EDX,R9W }
    /* +0xee6c73 */ __asm { MOV R9,qword ptr GS:[RDX] }
    /* +0xee6c77 */ __asm { MOV RDX,-0x353e2b66d2383f56 }
    /* +0xee6c81 */ __asm { ADD RDX,0x7447c2c9 }
    /* +0xee6c88 */ __asm { MOV ECX,R11D }
    /* +0xee6c8b */ __asm { ROL RDX,CL }
    /* +0xee6c8e */ __asm { IMUL RDX,RDX,-0x12ce38e3 }
    /* +0xee6c95 */ __asm { CMP R9,RDX }
    /* +0xee6c98 */ __asm { JZ 0x7fffa5656f65 }
    /* +0xee6c9e */ __asm { MOV R9D,0x5fffa32d }
    /* +0xee6ca4 */ __asm { MOV RDX,-0x6ce4946c68e76d16 }
    /* +0xee6cae */ __asm { CMP R9,RDX }
    /* +0xee6cb1 */ __asm { NOP }
    /* +0xee6cb2 */ __asm { NOP }
    /* +0xee6cb3 */ __asm { NOP }
    /* +0xee6cb4 */ __asm { NOP }
    /* +0xee6cb5 */ __asm { NOP }
    /* +0xee6cb6 */ __asm { NOP }
    /* +0xee6cb7 */ __asm { NOP }
    /* +0xee6cb8 */ __asm { NOP }
    /* +0xee6cb9 */ __asm { NOP }
    /* +0xee6cba */ __asm { NOP }
    /* +0xee6cbb */ __asm { MOV R8D,0x1858de17 }
    /* +0xee6cc1 */ __asm { ADD R8D,0x94b583c0 }
    /* +0xee6cc8 */ __asm { MOV R9,qword ptr [R9 + 0x1ffe5cdb] }
    /* +0xee6ccf */ __asm { MOV RAX,R9 }
    /* +0xee6cd2 */ __asm { MOV RDX,0x2e7452a8b5303300 }
    /* +0xee6cdc */ __asm { MUL RDX }
    /* +0xee6cdf */ __asm { MOV R11,RDX }
    /* +0xee6ce2 */ __asm { MOV EDX,0x1472c10 }
    /* +0xee6ce7 */ __asm { MOV RAX,R9 }
    /* +0xee6cea */ __asm { MUL RDX }
    /* +0xee6ced */ __asm { ADD RAX,R11 }
    /* +0xee6cf0 */ __asm { ADC RDX,0x0 }
    /* +0xee6cf4 */ __asm { MOV R9D,0x7649a863 }
    /* +0xee6cfa */ __asm { MOV R11,qword ptr [RBP + 0xf8] }
    /* +0xee6d01 */ __asm { ADD R9D,R11D }
    /* +0xee6d04 */ __asm { IMUL R9D,R9D,0x7990acdb }
    /* +0xee6d0b */ __asm { ADD R9D,0x5d5d66f7 }
    /* +0xee6d12 */ __asm { TEST DL,0x1 }
    /* +0xee6d15 */ __asm { SETZ DL }
    /* +0xee6d18 */ __asm { MOV ECX,R11D }
    /* +0xee6d1b */ __asm { ROL R8D,CL }
    /* +0xee6d1e */ __asm { XOR R8D,0x88800b7d }
    /* +0xee6d25 */ __asm { CMP R9,R8 }
    /* +0xee6d28 */ __asm { SETA R9B }
    /* +0xee6d2c */ __asm { TEST R9B,DL }
    /* +0xee6d2f */ __asm { MOV R10,R13 }
    /* +0xee6d32 */ __asm { JNZ 0x7fffa5656e89 }
    /* +0xee6d38 */ __asm { XORPS XMM3,XMM3 }
    /* +0xee6d3b */ __asm { MOVAPS xmmword ptr [RBP + 0x380],XMM3 }
    /* +0xee6d42 */ __asm { PUSHFQ }
    /* +0xee6d43 */ __asm { POP R10 }
    /* +0xee6d45 */ __asm { TEST R10D,0x100 }
    /* +0xee6d4c */ __asm { JZ 0x7fffa5656d53 }
    /* +0xee6d4e */ __asm { JP 0x7fffa5656d3c }
    /* +0xee6d50 */ __asm { AND dword ptr [RSI + 0x1c],EBX }
    /* +0xee6d53 */ __asm { MOV dword ptr [RBP + 0x260],0xa5c0d209 }
    /* +0xee6d5d */ __asm { MOV R9D,dword ptr [RBP + 0x260] }
    /* +0xee6d64 */ __asm { CMP R9D,0x2dd67222 }
    /* +0xee6d6b */ __asm { JBE 0x7fffa5656f9f }
    /* +0xee6d71 */ __asm { MOV dword ptr [RBP + 0x380],0x0 }
    /* +0xee6d7b */ __asm { MOV R9D,0xf4732040 }
    /* +0xee6d81 */ __asm { ADD R9D,0x23372b9d }
    /* +0xee6d88 */ __asm { MOV RDX,qword ptr [RBP + 0xf8] }
    /* +0xee6d8f */ __asm { XOR R9D,EDX }
    /* +0xee6d92 */ __asm { MOV dword ptr [RBP + 0x260],R9D }
    /* +0xee6d99 */ __asm { MOV R9D,dword ptr [RBP + 0x260] }
    /* +0xee6da0 */ __asm { AND R9D,0x1 }
    /* +0xee6da4 */ __asm { MOV R10W,0x55cc }
    /* +0xee6da9 */ __asm { ADD R10D,EDX }
    /* +0xee6dac */ __asm { XOR R10D,0xcb79 }
    /* +0xee6db3 */ __asm { MOVZX R10D,R10W }
    /* +0xee6db7 */ __asm { CMP R9D,R10D }
    /* +0xee6dba */ __asm { JNZ 0x7fffa5656fa6 }
    /* +0xee6dc0 */ __asm { PUSHFQ }
}


// ============================================================================
// Function : FUN_7fffa5656fe0  |  RVA: 0xee6fe0  |  Size: 21 bytes
// Callers  : none
// Callees  : FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa5656fe0(void)

{
  FUN_7fffa4f54478(0);
  return;
}


// ============================================================================
// Function : FUN_7fffa5656ff6  |  RVA: 0xee6ff6  |  Size: 21 bytes
// Callers  : none
// Callees  : FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa5656ff6(void)

{
  FUN_7fffa4f54478(0);
  return;
}


// ============================================================================
// Function : FUN_7fffa565700c  |  RVA: 0xee700c  |  Size: 1 bytes
// Callers  : FUN_7fffa4a91118@0x321118, FUN_7fffa517c9b4@0xa0c9b4, FUN_7fffa507aca4@0x90aca4, FUN_7fffa50cce4e@0x95ce4e, FUN_7fffa569f785@0xf2f785
// Callees  : none
// ============================================================================
void FUN_7fffa565700c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5657040  |  RVA: 0xee7040  |  Size: 81 bytes
// Callers  : FUN_7fffa560a390@0xe9a390
// Callees  : FUN_7fffa50c9690@0x959690
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa565708a) */
/* WARNING: Removing unreachable block (ram,0x7fffa56570af) */
/* WARNING: Removing unreachable block (ram,0x7fffa56570b3) */
/* WARNING: Removing unreachable block (ram,0x7fffa56570b6) */
/* WARNING: Removing unreachable block (ram,0x7fffa56570ba) */

uint64_t * FUN_7fffa5657040(uint64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint8_t uStackX_8;
  
  lVar1 = param_1[2];
  if ((uint64_t)(param_1[3] - lVar1) < param_3) {
    puVar2 = (uint64_t *)FUN_7fffa50c9690(param_1,param_3,uStackX_8,param_2,param_3);
    return puVar2;
  }
  param_1[2] = lVar1 + param_3;
  if ((uint64_t)param_1[3] < 0x10) {
    puVar2 = param_1;
  }
  else {
    puVar2 = (uint64_t *)*param_1;
  }
  FUN_7fffa56a5f20(lVar1 + (int64_t)puVar2,param_2,param_3);
  *(uint8_t *)(lVar1 + (int64_t)puVar2 + param_3) = 0;
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa565706d  |  RVA: 0xee706d  |  Size: 101 bytes
// Callers  : none
// Callees  : _guard_check_icall@0xedc080
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa565708a) */
/* WARNING: Removing unreachable block (ram,0x7fffa56570af) */
/* WARNING: Removing unreachable block (ram,0x7fffa56570b3) */
/* WARNING: Removing unreachable block (ram,0x7fffa56570b6) */
/* WARNING: Removing unreachable block (ram,0x7fffa56570ba) */

void FUN_7fffa565706d(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  uint64_t *unaff_RDI;
  
  unaff_RDI[2] = unaff_RBX + unaff_RSI;
  if (0xf < (uint64_t)unaff_RDI[3]) {
    unaff_RDI = (uint64_t *)*unaff_RDI;
  }
  FUN_7fffa56a5f20(unaff_RBX + (int64_t)unaff_RDI);
  *(uint8_t *)(unaff_RBX + (int64_t)unaff_RDI + unaff_RSI) = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa56570cf  |  RVA: 0xee70cf  |  Size: 43 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa56570cf(void)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  
  lVar1 = *unaff_RDI;
  FUN_7fffa56a5f20(unaff_RBX + lVar1);
  *(uint8_t *)(unaff_RBX + lVar1 + unaff_RSI) = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa5657130  |  RVA: 0xee7130  |  Size: 856 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa565753c) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574b7) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574b9) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574c0) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574c7) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574cc) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574d1) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574ac) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574ae) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574d6) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574df) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574e6) */
/* WARNING: Removing unreachable block (ram,0x7fffa565747d) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574ed) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574f6) */
/* WARNING: Removing unreachable block (ram,0x7fffa56574fb) */
/* WARNING: Removing unreachable block (ram,0x7fffa5657500) */
/* WARNING: Removing unreachable block (ram,0x7fffa5657505) */
/* WARNING: Removing unreachable block (ram,0x7fffa565750a) */
/* WARNING: Removing unreachable block (ram,0x7fffa565750f) */
/* WARNING: Removing unreachable block (ram,0x7fffa5657514) */
/* WARNING: Removing unreachable block (ram,0x7fffa5657519) */
/* WARNING: Removing unreachable block (ram,0x7fffa565751b) */
/* WARNING: Removing unreachable block (ram,0x7fffa565751e) */
/* WARNING: Removing unreachable block (ram,0x7fffa5657520) */
/* WARNING: Removing unreachable block (ram,0x7fffa5657526) */
/* WARNING: Removing unreachable block (ram,0x7fffa5657528) */
/* WARNING: Removing unreachable block (ram,0x7fffa5657538) */
/* WARNING: Removing unreachable block (ram,0x7fffa5657540) */
/* WARNING: Removing unreachable block (ram,0x7fffa5657542) */
/* WARNING: Removing unreachable block (ram,0x7fffa5657547) */
/* WARNING: Removing unreachable block (ram,0x7fffa5657549) */
/* WARNING: Removing unreachable block (ram,0x7ff84ea32570) */

void FUN_7fffa5657130(void)

{
  uint64_t uVar1;
  
  uRam00007fffa47bbe78 = 0x47cdf4f3c45c2b2;
  uRam00007fffa47bbe80 = 0x592c92febadc7366;
  lRam00007fffa47bbe88 = lRam00007fffa47815f0 + -0x7aa9d448547f60bd;
  uRam00007fffa47bbe90 = 0x2f3bf5c4208837d0;
  uVar1 = uRam00007fffa4781130 ^ 0x834d17fbc9262be8;
  uVar1 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  uVar1 = ((uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2) *
          -0x718df1be3fc7f7ff + 0x5a0f51012d01a69;
  uRam00007fffa47bbea0 = 0xbdf0e434a0c741f9;
  uRam00007fffa47bbe98 = uVar1 * 8 | uVar1 >> 0x3d;
  uVar1 = (lRam00007fffa4780f50 + 0xd165822e0a0223e3U & 0xf0f0f0f0f0f0f0f) << 4 |
          lRam00007fffa4780f50 + 0xd165822e0a0223e3U >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  uRam00007fffa47bbeb0 = 0xd24da64df8d7b6b4;
  lRam00007fffa47bbea8 =
       (uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2 + -0x78e24d17ee913e94;
  return;
}


// ============================================================================
// Function : FUN_7fffa5657488  |  RVA: 0xee7488  |  Size: 222 bytes
// Callers  : FUN_7fffa569ad70@0xf2ad70, FUN_7fffa51552c8@0x9e52c8, FUN_7fffa51476a0@0x9d76a0, FUN_7fffa522496c@0xab496c, FUN_7fffa56aab2c@0xf3ab2c, FUN_7fffa5488508@0xd18508
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

void FUN_7fffa5657488(int param_1)

{
  uint32_t *in_stack_00000040;
  
  if ((param_1 - 65000U < 2) && (in_stack_00000040 != (uint32_t *)0x0)) {
    *in_stack_00000040 = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ============================================================================
// Function : FUN_7fffa5657570  |  RVA: 0xee7570  |  Size: 778 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa5657871) overlaps instruction at (ram,0x7fffa565786e)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa56576af) */
/* WARNING: Removing unreachable block (ram,0x7fffa5657866) */
/* WARNING: Removing unreachable block (ram,0x7fffa565787a) */
/* WARNING: Removing unreachable block (ram,0x7fffa565786e) */
/* WARNING: Removing unreachable block (ram,0x7fffa565787f) */
/* WARNING: Removing unreachable block (ram,0x7fffa565785c) */

uint64_t FUN_7fffa5657570(uint64_t *param_1)

{
  *param_1 = uRam00007fffa4786640;
  param_1[1] = uRam00007fffa47bb1d0;
  param_1[2] = uRam00007fffa47bc858;
  param_1[3] = uRam00007fffa4785508;
  param_1[4] = uRam00007fffa47bcf08;
  param_1[5] = uRam00007fffa4785450;
  param_1[6] = uRam00007fffa47bf428;
  param_1[7] = uRam00007fffa47bbd70;
  param_1[8] = uRam00007fffa47852f0;
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5657890  |  RVA: 0xee7890  |  Size: 693 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5657a68) */

int64_t FUN_7fffa5657890(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint64_t uVar3;
  uint8_t bVar4;
  int64_t lVar5;
  
  uRam00007fffa47bf8a5 = 0;
  uRam00007fffa47bf8c3 = 0;
  uRam00007fffa47bf8cb = 0;
  uRam00007fffa47bf8b3 = 0;
  uRam00007fffa47bf8bb = 0;
  uRam00007fffa47bf8d4 = 0;
  uVar1 = rdtsc();
  uVar3 = 0;
  lVar5 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x917c81dd06d99f;
  while( true ) {
    *(char *)(uVar3 + 0x7fffa47bf8a0) = (char)((uint64_t)(lVar5 * 0x81dd06d99f) >> 0x20);
    *(char *)(uVar3 + 0x7fffa47bf8a1) = (char)((uint64_t)(lVar5 * 0x297272f0c1) >> 0x20);
    if ((uVar3 << 0x16 | uVar3 >> 0x2a) * -0x1f9bee36a1892a95 == -0x3377097ebb000000) break;
    *(char *)(uVar3 + 0x7fffa47bf8a3) = (char)((uint64_t)(lVar5 * 0x61d90bd9324e7181) >> 0x20);
    *(char *)(uVar3 + 0x7fffa47bf8a2) = (char)((uint64_t)(lVar5 * 0x8ac4fd20df) >> 0x20);
    uVar3 = uVar3 + 4;
    lVar5 = lVar5 * 0x61d90bd9324e7181;
  }
  bVar2 = (uint8_t)uVar3 & 0x1f;
  bVar4 = *(char *)((int64_t)(int)(0x9ffff1d8U >> bVar2 | -0x60000e28 << 0x20 - bVar2) +
                   0x7fffa47cdb1c) + 1U & 3;
  bVar2 = (uint8_t)uVar3 & 0x1f;
  *(uint64_t *)((uint64_t)((uint32_t)bVar4 * 8) + 0x7fffa47bf8b3) = 0;
  *(uint8_t *)((int64_t)(int)(0xffff345U >> bVar2 | 0xffff345 << 0x20 - bVar2) + 0x7fffa47cc455) =
       bVar4;
  return (int64_t)(short)((0x2a89 - (short)uVar3) * 0x1223 + 0x5406) + 0x7fffa47c7213;
}


// ============================================================================
// Function : FUN_7fffa5657b48  |  RVA: 0xee7b48  |  Size: 1 bytes
// Callers  : FUN_7fffa5253720@0xae3720
// Callees  : none
// ============================================================================
void FUN_7fffa5657b48(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5657b60  |  RVA: 0xee7b60  |  Size: 4310 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5657b60(void) {
    /* +0xee7b60 */ __asm { PUSH R15 }
    /* +0xee7b62 */ __asm { PUSH RBP }
    /* +0xee7b63 */ __asm { PUSH RDI }
    /* +0xee7b64 */ __asm { PUSH R13 }
    /* +0xee7b66 */ __asm { PUSH R14 }
    /* +0xee7b68 */ __asm { PUSH R12 }
    /* +0xee7b6a */ __asm { PUSH RBX }
    /* +0xee7b6b */ __asm { PUSH RSI }
    /* +0xee7b6c */ __asm { SUB RSP,0x58 }
    /* +0xee7b70 */ __asm { MOV R11,R9 }
    /* +0xee7b73 */ __asm { ROL R11,0x25 }
    /* +0xee7b77 */ __asm { MOV R15,RCX }
    /* +0xee7b7a */ __asm { ROL R15,0xb }
    /* +0xee7b7e */ __asm { MOV AX,0x5796 }
    /* +0xee7b82 */ __asm { MOV R12,R9 }
    /* +0xee7b85 */ __asm { ROL R12,0x7 }
    /* +0xee7b89 */ __asm { MOV R8D,0x5ceada1a }
    /* +0xee7b8f */ __asm { MOV RDI,RCX }
    /* +0xee7b92 */ __asm { ROL RDI,0x14 }
    /* +0xee7b96 */ __asm { MOV R10D,0xe2ae1808 }
    /* +0xee7b9c */ __asm { XOR R12,R11 }
    /* +0xee7b9f */ __asm { XOR R10D,0x2d307491 }
    /* +0xee7ba6 */ __asm { ROR R10D,0x1 }
    /* +0xee7ba9 */ __asm { XOR R12,R9 }
    /* +0xee7bac */ __asm { MOV R9,R12 }
    /* +0xee7baf */ __asm { ROL R9,0xa }
    /* +0xee7bb3 */ __asm { MOV R11,R12 }
    /* +0xee7bb6 */ __asm { ROL R11,0xe }
    /* +0xee7bba */ __asm { MOV R13,RDX }
    /* +0xee7bbd */ __asm { XOR R11,R9 }
    /* +0xee7bc0 */ __asm { XOR R11,R12 }
    /* +0xee7bc3 */ __asm { MOV RDX,R11 }
    /* +0xee7bc6 */ __asm { ROL RDX,0x1c }
    /* +0xee7bca */ __asm { XOR RDI,R15 }
    /* +0xee7bcd */ __asm { XOR RDI,RCX }
    /* +0xee7bd0 */ __asm { MOV RCX,RDI }
    /* +0xee7bd3 */ __asm { ROL RCX,0x28 }
    /* +0xee7bd7 */ __asm { MOV R9,RDI }
    /* +0xee7bda */ __asm { ROL R9,0x16 }
    /* +0xee7bde */ __asm { XOR R9,RCX }
    /* +0xee7be1 */ __asm { XOR R9,RDI }
    /* +0xee7be4 */ __asm { MOV RCX,R9 }
    /* +0xee7be7 */ __asm { ROL RCX,0x2c }
    /* +0xee7beb */ __asm { MOV RDI,R9 }
    /* +0xee7bee */ __asm { ROL RDI,0x10 }
    /* +0xee7bf2 */ __asm { SUB R8D,R13D }
    /* +0xee7bf5 */ __asm { SUB R10D,R13D }
    /* +0xee7bf8 */ __asm { ROL R8D,0x8 }
    /* +0xee7bfc */ __asm { XOR RDI,RCX }
    /* +0xee7bff */ __asm { XOR RDI,R9 }
    /* +0xee7c02 */ __asm { MOV RCX,RDI }
    /* +0xee7c05 */ __asm { ROL RCX,0x18 }
    /* +0xee7c09 */ __asm { ADD R8D,0xff640c7d }
    /* +0xee7c10 */ __asm { MOVQ XMM4,RDI }
    /* +0xee7c15 */ __asm { ROL RDI,0x20 }
    /* +0xee7c19 */ __asm { XOR RDI,RCX }
    /* +0xee7c1c */ __asm { MOVQ XMM1,RDI }
    /* +0xee7c21 */ __asm { PXOR XMM1,XMM4 }
    /* +0xee7c25 */ __asm { MOVQ RBX,XMM1 }
    /* +0xee7c2a */ __asm { MOV R9,RBX }
    /* +0xee7c2d */ __asm { ROL R9,0x30 }
    /* +0xee7c31 */ __asm { MOV RCX,R11 }
    /* +0xee7c34 */ __asm { ROL RCX,0x14 }
    /* +0xee7c38 */ __asm { XOR RCX,RDX }
    /* +0xee7c3b */ __asm { XOR RCX,R11 }
    /* +0xee7c3e */ __asm { MOV RDX,RCX }
    /* +0xee7c41 */ __asm { ROL RDX,0x28 }
    /* +0xee7c45 */ __asm { MOV RDI,RCX }
    /* +0xee7c48 */ __asm { ROL RDI,0x38 }
    /* +0xee7c4c */ __asm { XOR RDI,RDX }
    /* +0xee7c4f */ __asm { XOR RDI,RCX }
    /* +0xee7c52 */ __asm { MOV RCX,RDI }
    /* +0xee7c55 */ __asm { ROL RCX,0x10 }
    /* +0xee7c59 */ __asm { LEA RDX,[R9 + RBX*0x1] }
    /* +0xee7c5d */ __asm { MOVQ XMM4,RDI }
    /* +0xee7c62 */ __asm { ROL RDI,0x30 }
    /* +0xee7c66 */ __asm { XOR RDI,RCX }
    /* +0xee7c69 */ __asm { IMUL R11D,EAX,-0x365f }
    /* +0xee7c70 */ __asm { MOVQ XMM1,RDI }
    /* +0xee7c75 */ __asm { PXOR XMM1,XMM4 }
    /* +0xee7c79 */ __asm { MOVQ RDI,XMM1 }
    /* +0xee7c7e */ __asm { XOR RDI,0x57828f61 }
    /* +0xee7c85 */ __asm { XOR R11D,0xdbd6 }
    /* +0xee7c8c */ __asm { MOV ECX,R13D }
    /* +0xee7c8f */ __asm { ROR R11W,CL }
    /* +0xee7c93 */ __asm { XOR R9,RBX }
    /* +0xee7c96 */ __asm { CMP R8,R10 }
    /* +0xee7c99 */ __asm { CMOVA R9,RDX }
    /* +0xee7c9d */ __asm { XOR R9,RBX }
    /* +0xee7ca0 */ __asm { ROL R9,0x20 }
    /* +0xee7ca4 */ __asm { RDTSC }
    /* +0xee7ca6 */ __asm { SHL RDX,0x20 }
    /* +0xee7caa */ __asm { OR RDX,RAX }
    /* +0xee7cad */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0xee7cb7 */ __asm { IMUL RAX,RDX }
    /* +0xee7cbb */ __asm { MOV RDX,-0x22b18422c4a9c65e }
    /* +0xee7cc5 */ __asm { ADD RDX,RAX }
    /* +0xee7cc8 */ __asm { MOV R8,RDX }
    /* +0xee7ccb */ __asm { SHR R8,0x2d }
    /* +0xee7ccf */ __asm { MOV RCX,RDX }
    /* +0xee7cd2 */ __asm { SHR RCX,0x3b }
    /* +0xee7cd6 */ __asm { SHR RDX,0x1b }
    /* +0xee7cda */ __asm { XOR R8D,EDX }
    /* +0xee7cdd */ __asm { ROR R8D,CL }
    /* +0xee7ce0 */ __asm { MOVZX R10D,R11W }
    /* +0xee7ce4 */ __asm { AND R8D,0x3 }
    /* +0xee7ce8 */ __asm { CMP R8D,R10D }
    /* +0xee7ceb */ __asm { JNC 0x7fffa565803f }
    /* +0xee7cf1 */ __asm { CMP R8D,0x1 }
    /* +0xee7cf5 */ __asm { JZ 0x7fffa5658364 }
    /* +0xee7cfb */ __asm { MOV RAX,-0x3e81c1fd66b64107 }
    /* +0xee7d05 */ __asm { MOV R10D,0x1f48b473 }
    /* +0xee7d0b */ __asm { MOV R8,0x154809e7a }
    /* +0xee7d15 */ __asm { ADD R8,R10 }
    /* +0xee7d18 */ __asm { MOV ECX,0x9116e1fd }
    /* +0xee7d1d */ __asm { IMUL RCX,RAX }
    /* +0xee7d21 */ __asm { XOR RCX,R13 }
    /* +0xee7d24 */ __asm { CMP RCX,R8 }
    /* +0xee7d27 */ __asm { NOP }
    /* +0xee7d28 */ __asm { NOP }
    /* +0xee7d29 */ __asm { NOP }
    /* +0xee7d2a */ __asm { NOP }
    /* +0xee7d2b */ __asm { NOP }
    /* +0xee7d2c */ __asm { MOV R10,qword ptr [R10 + 0x60b54b95] }
    /* +0xee7d33 */ __asm { MOV R8,-0x36fea249a71af406 }
    /* +0xee7d3d */ __asm { MOV RAX,R10 }
    /* +0xee7d40 */ __asm { MUL R8 }
    /* +0xee7d43 */ __asm { MOV R8,RDX }
    /* +0xee7d46 */ __asm { MOV ECX,0x1468ff4 }
    /* +0xee7d4b */ __asm { MOV RAX,R10 }
    /* +0xee7d4e */ __asm { MUL RCX }
    /* +0xee7d51 */ __asm { MOV R10,RDX }
    /* +0xee7d54 */ __asm { ADD RAX,R8 }
    /* +0xee7d57 */ __asm { ADC R10,0x0 }
    /* +0xee7d5b */ __asm { RDTSC }
    /* +0xee7d5d */ __asm { SHL RDX,0x20 }
    /* +0xee7d61 */ __asm { OR RDX,RAX }
    /* +0xee7d64 */ __asm { TEST R10B,0x1 }
    /* +0xee7d68 */ __asm { JNZ 0x7fffa565877e }
    /* +0xee7d6e */ __asm { MOV RAX,-0x5b596a0ee0e87373 }
    /* +0xee7d78 */ __asm { IMUL RDX,RAX }
    /* +0xee7d7c */ __asm { MOV RAX,-0x589601b709daa083 }
    /* +0xee7d86 */ __asm { IMUL RAX,RAX,0x7ffe0331 }
    /* +0xee7d8d */ __asm { NOT RAX }
    /* +0xee7d90 */ __asm { IMUL R8,RAX,-0x3436b669 }
    /* +0xee7d97 */ __asm { ADD R8,RDX }
    /* +0xee7d9a */ __asm { MOV RCX,R8 }
    /* +0xee7d9d */ __asm { SHR RCX,0x3b }
    /* +0xee7da1 */ __asm { MOV RDX,R8 }
    /* +0xee7da4 */ __asm { SHR RDX,0x1b }
    /* +0xee7da8 */ __asm { SHR R8,0x2d }
    /* +0xee7dac */ __asm { XOR R8D,EDX }
    /* +0xee7daf */ __asm { ROR R8D,CL }
    /* +0xee7db2 */ __asm { MOV dword ptr [RSP + 0x40],0xa8f8d7b3 }
    /* +0xee7dba */ __asm { MOV R10D,dword ptr [RSP + 0x40] }
    /* +0xee7dbf */ __asm { CMP R8D,0x4178e80 }
    /* +0xee7dc6 */ __asm { JA 0x7fffa5657f98 }
    /* +0xee7dcc */ __asm { PUSHFQ }
    /* +0xee7dcd */ __asm { POP RCX }
    /* +0xee7dce */ __asm { NOP }
    /* +0xee7dcf */ __asm { MOV R10,0x0 }
    /* +0xee7dd6 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xee7ddd */ __asm { TEST ECX,0x100 }
    /* +0xee7de3 */ __asm { NOP }
    /* +0xee7de4 */ __asm { NOP }
    /* +0xee7de5 */ __asm { NOP }
    /* +0xee7de6 */ __asm { NOP }
    /* +0xee7de7 */ __asm { NOP }
    /* +0xee7de8 */ __asm { NOP }
    /* +0xee7de9 */ __asm { NOP }
    /* +0xee7dea */ __asm { NOP }
    /* +0xee7deb */ __asm { NOP }
    /* +0xee7dec */ __asm { NOP }
    /* +0xee7ded */ __asm { MOV dword ptr [RSP + 0x40],0x995ad2c8 }
    /* +0xee7df5 */ __asm { MOV R8D,dword ptr [RSP + 0x40] }
    /* +0xee7dfa */ __asm { TEST R8D,R8D }
    /* +0xee7dfd */ __asm { NOP }
    /* +0xee7dfe */ __asm { NOP }
    /* +0xee7dff */ __asm { NOP }
    /* +0xee7e00 */ __asm { NOP }
    /* +0xee7e01 */ __asm { NOP }
    /* +0xee7e02 */ __asm { LEA R10,[0x7fffa47c13f4] }
    /* +0xee7e09 */ __asm { MOV RAX,0x497e39c6e902eace }
    /* +0xee7e13 */ __asm { CMP R10,RAX }
    /* +0xee7e16 */ __asm { JZ 0x7fffa5658e16 }
    /* +0xee7e1c */ __asm { MOVZX EAX,uint8_t ptr [R10 + -0x4cab] }
    /* +0xee7e24 */ __asm { MOVZX R8D,uint8_t ptr [R10 + RAX*0x4 + -0x4ca5] }
    /* +0xee7e2d */ __asm { NOT R8B }
    /* +0xee7e30 */ __asm { ROL R8B,0x5 }
    /* +0xee7e34 */ __asm { MOV uint8_t ptr [RSP + 0x40],R8B }
    /* +0xee7e39 */ __asm { MOVZX R8D,uint8_t ptr [R10 + RAX*0x4 + -0x4ca4] }
    /* +0xee7e42 */ __asm { NOT R8B }
    /* +0xee7e45 */ __asm { ROL R8B,0x5 }
    /* +0xee7e49 */ __asm { MOV uint8_t ptr [RSP + 0x41],R8B }
    /* +0xee7e4e */ __asm { MOVZX R8D,uint8_t ptr [R10 + RAX*0x4 + -0x4ca3] }
    /* +0xee7e57 */ __asm { NOT R8B }
    /* +0xee7e5a */ __asm { ROL R8B,0x5 }
    /* +0xee7e5e */ __asm { MOV uint8_t ptr [RSP + 0x42],R8B }
    /* +0xee7e63 */ __asm { MOVZX EAX,uint8_t ptr [R10 + RAX*0x4 + -0x4ca2] }
    /* +0xee7e6c */ __asm { NOT AL }
    /* +0xee7e6e */ __asm { ROL AL,0x5 }
    /* +0xee7e71 */ __asm { MOV uint8_t ptr [RSP + 0x43],AL }
    /* +0xee7e75 */ __asm { MOV R8D,0x9102c3cc }
    /* +0xee7e7b */ __asm { XOR R8D,dword ptr [RSP + 0x40] }
    /* +0xee7e80 */ __asm { BT R8D,R8D }
    /* +0xee7e84 */ __asm { JNC 0x7fffa5657f98 }
    /* +0xee7e8a */ __asm { PXOR XMM4,XMM4 }
    /* +0xee7e8e */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM4 }
    /* +0xee7e94 */ __asm { MOV dword ptr [RSP + 0x50],0xd8ffdf53 }
    /* +0xee7e9c */ __asm { MOV R8D,dword ptr [RSP + 0x50] }
    /* +0xee7ea1 */ __asm { CMP R8D,0xba42b7e9 }
    /* +0xee7ea8 */ __asm { JBE 0x7fffa5658e5a }
    /* +0xee7eae */ __asm { PUSHFQ }
    /* +0xee7eaf */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xee7eb7 */ __asm { POPFQ }
    /* +0xee7eb8 */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xee7ec0 */ __asm { TEST ECX,0x100 }
    /* +0xee7ec6 */ __asm { NOP }
    /* +0xee7ec7 */ __asm { NOP }
    /* +0xee7ec8 */ __asm { NOP }
    /* +0xee7ec9 */ __asm { NOP }
    /* +0xee7eca */ __asm { NOP }
    /* +0xee7ecb */ __asm { MOV dword ptr [RSP + 0x50],0xaa0fcdb1 }
    /* +0xee7ed3 */ __asm { MOV R8D,dword ptr [RSP + 0x50] }
    /* +0xee7ed8 */ __asm { TEST R8D,R8D }
    /* +0xee7edb */ __asm { NOP }
    /* +0xee7edc */ __asm { NOP }
    /* +0xee7edd */ __asm { NOP }
    /* +0xee7ede */ __asm { NOP }
    /* +0xee7edf */ __asm { NOP }
    /* +0xee7ee0 */ __asm { MOV dword ptr [RSP + 0x50],0xdeabab2f }
    /* +0xee7ee8 */ __asm { MOV R8D,dword ptr [RSP + 0x50] }
    /* +0xee7eed */ __asm { TEST R8B,0x1 }
    /* +0xee7ef1 */ __asm { JZ 0x7fffa5658e62 }
    /* +0xee7ef7 */ __asm { MOV R15,R9 }
    /* +0xee7efa */ __asm { LEA R9,[0x7fffa47b4fa2] }
    /* +0xee7f01 */ __asm { MOV RAX,0x7fe5183616f8c27f }
    /* +0xee7f0b */ __asm { CMP R9,RAX }
    /* +0xee7f0e */ __asm { JZ 0x7fffa5658e71 }
    /* +0xee7f14 */ __asm { MOV R8D,0x975fb2db }
    /* +0xee7f1a */ __asm { NOP }
    /* +0xee7f1b */ __asm { MOV R10,0x0 }
    /* +0xee7f22 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xee7f29 */ __asm { MOV CX,0x6bce }
    /* +0xee7f2d */ __asm { MOV R10D,0x49dea9c5 }
    /* +0xee7f33 */ __asm { SUB R10D,R13D }
    /* +0xee7f36 */ __asm { ROL R10D,0x3 }
    /* +0xee7f3a */ __asm { LEA RAX,[R9 + 0x7fae] }
    /* +0xee7f41 */ __asm { MOV qword ptr [RSP + 0x50],RDX }
    /* +0xee7f46 */ __asm { MOVSXD R10,R10D }
    /* +0xee7f49 */ __asm { SUB ECX,R13D }
    /* +0xee7f4c */ __asm { IMUL EDX,ECX,0x56c5 }
    /* +0xee7f52 */ __asm { IMUL R8D,R8D,0x1846f80f }
    /* +0xee7f59 */ __asm { MOV ECX,R13D }
    /* +0xee7f5c */ __asm { ROL R8D,CL }
    /* +0xee7f5f */ __asm { XOR R9,0x7fae }
    /* +0xee7f66 */ __asm { MOVZX EDX,DX }
    /* +0xee7f69 */ __asm { CMP R8,0x7463503f }
    /* +0xee7f70 */ __asm { CMOVNZ R9,RAX }
    /* +0xee7f74 */ __asm { MOV EAX,dword ptr [R9 + 0x88] }
    /* +0xee7f7b */ __asm { MOV R8W,0xa946 }
    /* +0xee7f80 */ __asm { XOR R8D,0x90 }
    /* +0xee7f87 */ __asm { SUB R8D,R13D }
    /* +0xee7f8a */ __asm { MOVZX R9D,R8W }
    /* +0xee7f8e */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xee7f93 */ __asm { SYSCALL }
    /* +0xee7f95 */ __asm { MOV R9,R15 }
    /* +0xee7f98 */ __asm { LEA RDX,[0x7fffa477e30b] }
    /* +0xee7f9f */ __asm { MOV RAX,0x671bc2212a46a876 }
    /* +0xee7fa9 */ __asm { CMP RDX,RAX }
    /* +0xee7fac */ __asm { NOP }
    /* +0xee7fad */ __asm { NOP }
    /* +0xee7fae */ __asm { NOP }
    /* +0xee7faf */ __asm { NOP }
    /* +0xee7fb0 */ __asm { NOP }
    /* +0xee7fb1 */ __asm { NOP }
    /* +0xee7fb2 */ __asm { NOP }
    /* +0xee7fb3 */ __asm { NOP }
    /* +0xee7fb4 */ __asm { NOP }
    /* +0xee7fb5 */ __asm { MOVD XMM4,R13D }
    /* +0xee7fba */ __asm { MOV R8W,0xa59d }
    /* +0xee7fbf */ __asm { ADD R8D,R13D }
    /* +0xee7fc2 */ __asm { NOP }
    /* +0xee7fc4 */ __asm { MOV R10,0x0 }
    /* +0xee7fcb */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xee7fd2 */ __asm { MOV R10W,0xfb13 }
    /* +0xee7fd7 */ __asm { XOR R10D,0x52dd }
    /* +0xee7fde */ __asm { MOVD XMM1,R10D }
    /* +0xee7fe3 */ __asm { MOV CX,0x55f9 }
    /* +0xee7fe7 */ __asm { ADD ECX,R13D }
    /* +0xee7fea */ __asm { NOT ECX }
    /* +0xee7fec */ __asm { ROL CX,0xc }
    /* +0xee7ff0 */ __asm { MOV R10W,0xb7f1 }
    /* +0xee7ff5 */ __asm { IMUL R10D,R10D,-0x3ceb }
    /* +0xee7ffc */ __asm { SUB R10D,R13D }
    /* +0xee7fff */ __asm { MOVSX R10,R10W }
    /* +0xee8003 */ __asm { MOVZX ECX,CX }
    /* +0xee8006 */ __asm { MOV qword ptr [RSP + 0x40],R11 }
    /* +0xee800b */ __asm { XOR R8D,0x4ee4 }
    /* +0xee8012 */ __asm { ADD R8D,0xfffffe79 }
    /* +0xee8019 */ __asm { MOVZX R8D,R8W }
    /* +0xee801d */ __asm { MOV EAX,dword ptr [RDX + 0x6a59] }
    /* +0xee8023 */ __asm { PSUBW XMM1,XMM4 }
    /* +0xee8027 */ __asm { MOVD EDX,XMM1 }
    /* +0xee802b */ __asm { ROL DX,0x9 }
    /* +0xee802f */ __asm { MOVZX EDX,DX }
    /* +0xee8032 */ __asm { MOV dword ptr [RSP + 0x30],ECX }
    /* +0xee8036 */ __asm { MOV dword ptr [RSP + 0x28],EDX }
    /* +0xee803a */ __asm { JMP 0x7fffa5658dbc }
    /* +0xee803f */ __asm { MOV EBP,R13D }
    /* +0xee8042 */ __asm { OR EBP,0x1 }
    /* +0xee8045 */ __asm { CMP R8D,0x3 }
    /* +0xee8049 */ __asm { JNZ 0x7fffa56586b8 }
    /* +0xee804f */ __asm { MOV EAX,0xb07d3662 }
    /* +0xee8054 */ __asm { MOV R10,0x32d65bcbc1d74edd }
    /* +0xee805e */ __asm { CMP RAX,R10 }
    /* +0xee8061 */ __asm { JZ 0x7fffa5658cfa }
    /* +0xee8067 */ __asm { MOV R8D,0x59fefd7f }
    /* +0xee806d */ __asm { XOR R8D,0x40a18e1b }
    /* +0xee8074 */ __asm { SUB R8D,R13D }
    /* +0xee8077 */ __asm { MOVSXD R10,R8D }
    /* +0xee807a */ __asm { MOVZX R8D,uint8_t ptr [R10 + RAX*0x1 + 0x240] }
    /* +0xee8083 */ __asm { RDTSC }
    /* +0xee8085 */ __asm { SHL RDX,0x20 }
    /* +0xee8089 */ __asm { OR RDX,RAX }
    /* +0xee808c */ __asm { TEST R8B,0x1 }
    /* +0xee8090 */ __asm { JZ 0x7fffa56589c6 }
    /* +0xee8096 */ __asm { MOV RAX,0x5851f42d4c957f2d }
    /* +0xee80a0 */ __asm { IMUL RDX,RAX }
    /* +0xee80a4 */ __asm { MOV R8,-0x46680b6d367fcfa6 }
    /* +0xee80ae */ __asm { ADD R8,RDX }
    /* +0xee80b1 */ __asm { MOV RCX,R8 }
    /* +0xee80b4 */ __asm { SHR RCX,0x3b }
    /* +0xee80b8 */ __asm { MOV RDX,R8 }
    /* +0xee80bb */ __asm { SHR RDX,0x1b }
    /* +0xee80bf */ __asm { SHR R8,0x2d }
    /* +0xee80c3 */ __asm { XOR R8D,EDX }
    /* +0xee80c6 */ __asm { ROR R8D,CL }
    /* +0xee80c9 */ __asm { MOV dword ptr [RSP + 0x40],0x655509e4 }
    /* +0xee80d1 */ __asm { MOV R10D,dword ptr [RSP + 0x40] }
    /* +0xee80d6 */ __asm { CMP R8D,0x100ec1c }
    /* +0xee80dd */ __asm { JA 0x7fffa56582e1 }
    /* +0xee80e3 */ __asm { MOV R10W,0xd54c }
    /* +0xee80e8 */ __asm { XOR R10D,0xffff854c }
    /* +0xee80ef */ __asm { MOV R8D,R13D }
    /* +0xee80f2 */ __asm { OR R8D,0x1 }
    /* +0xee80f6 */ __asm { IMUL R10D,R8D }
    /* +0xee80fa */ __asm { ROL R10W,0x9 }
    /* +0xee80ff */ __asm { MOVZX EDX,R10W }
    /* +0xee8103 */ __asm { MOV RAX,qword ptr GS:[RDX] }
    /* +0xee8107 */ __asm { MOV R10,-0x392c4da0226baf1f }
    /* +0xee8111 */ __asm { CMP qword ptr [RAX + 0x18],R10 }
    /* +0xee8115 */ __asm { NOP }
    /* +0xee8116 */ __asm { NOP }
    /* +0xee8117 */ __asm { NOP }
    /* +0xee8118 */ __asm { NOP }
    /* +0xee8119 */ __asm { MOV RAX,-0x482ad00ab1a8f4f7 }
    /* +0xee8123 */ __asm { SUB RAX,R13 }
    /* +0xee8126 */ __asm { LEA R10,[0x7fffa47c0ec9] }
    /* +0xee812d */ __asm { MOV ECX,0x9e16db77 }
    /* +0xee8132 */ __asm { SUB ECX,R13D }
    /* +0xee8135 */ __asm { ADD ECX,0x94e9fb96 }
    /* +0xee813b */ __asm { MOVSXD RCX,ECX }
    /* +0xee813e */ __asm { MOV RDX,R10 }
    /* +0xee8141 */ __asm { SUB RDX,RCX }
    /* +0xee8144 */ __asm { MOV ECX,0xfd6cedc8 }
    /* +0xee8149 */ __asm { ADD RCX,RDX }
    /* +0xee814c */ __asm { MOV EDX,0xba06d3cc }
    /* +0xee8151 */ __asm { ADD RDX,RAX }
    /* +0xee8154 */ __asm { CMP RDX,RCX }
    /* +0xee8157 */ __asm { NOP }
    /* +0xee8158 */ __asm { NOP }
    /* +0xee8159 */ __asm { NOP }
    /* +0xee815a */ __asm { NOP }
    /* +0xee815b */ __asm { NOP }
    /* +0xee815c */ __asm { MOV EDX,0x4ccad0ce }
    /* +0xee8161 */ __asm { XOR EDX,R13D }
    /* +0xee8164 */ __asm { NOT EDX }
    /* +0xee8166 */ __asm { MOVZX EAX,uint8_t ptr [R10 + -0x4780] }
    /* +0xee816e */ __asm { MOVZX ECX,uint8_t ptr [R10 + RAX*0x4 + -0x477a] }
    /* +0xee8177 */ __asm { NOT CL }
    /* +0xee8179 */ __asm { ROL CL,0x5 }
    /* +0xee817c */ __asm { MOV uint8_t ptr [RSP + 0x40],CL }
    /* +0xee8180 */ __asm { MOVZX ECX,uint8_t ptr [R10 + RAX*0x4 + -0x4779] }
    /* +0xee8189 */ __asm { NOT CL }
    /* +0xee818b */ __asm { ROL CL,0x5 }
    /* +0xee818e */ __asm { MOV uint8_t ptr [RSP + 0x41],CL }
    /* +0xee8192 */ __asm { MOVZX ECX,uint8_t ptr [R10 + RAX*0x4 + -0x4778] }
    /* +0xee819b */ __asm { NOT CL }
    /* +0xee819d */ __asm { ROL CL,0x5 }
    /* +0xee81a0 */ __asm { MOV uint8_t ptr [RSP + 0x42],CL }
    /* +0xee81a4 */ __asm { MOVZX EAX,uint8_t ptr [R10 + RAX*0x4 + -0x4777] }
    /* +0xee81ad */ __asm { NOT AL }
    /* +0xee81af */ __asm { ROL AL,0x5 }
    /* +0xee81b2 */ __asm { MOV uint8_t ptr [RSP + 0x43],AL }
    /* +0xee81b6 */ __asm { MOV ECX,0x9102c3cc }
    /* +0xee81bb */ __asm { XOR ECX,dword ptr [RSP + 0x40] }
    /* +0xee81bf */ __asm { MOV R10D,0x1 }
    /* +0xee81c5 */ __asm { SHL R10D,CL }
    /* +0xee81c8 */ __asm { MOV EAX,0xfaeb86f7 }
    /* +0xee81cd */ __asm { CMP RDX,RAX }
    /* +0xee81d0 */ __asm { JNZ 0x7fffa56581db }
    /* +0xee81d2 */ __asm { AND ECX,R10D }
    /* +0xee81d5 */ __asm { JZ 0x7fffa56582e1 }
    /* +0xee81db */ __asm { PUSHFQ }
    /* +0xee81dc */ __asm { POP RCX }
    /* +0xee81dd */ __asm { PXOR XMM4,XMM4 }
    /* +0xee81e1 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM4 }
    /* +0xee81e7 */ __asm { TEST ECX,0x100 }
    /* +0xee81ed */ __asm { NOP }
    /* +0xee81ee */ __asm { NOP }
    /* +0xee81ef */ __asm { NOP }
    /* +0xee81f0 */ __asm { NOP }
    /* +0xee81f1 */ __asm { NOP }
    /* +0xee81f2 */ __asm { NOP }
    /* +0xee81f3 */ __asm { NOP }
    /* +0xee81f4 */ __asm { NOP }
    /* +0xee81f5 */ __asm { NOP }
    /* +0xee81f6 */ __asm { NOP }
    /* +0xee81f7 */ __asm { NOP }
    /* +0xee81f8 */ __asm { NOP }
    /* +0xee81f9 */ __asm { NOP }
    /* +0xee81fa */ __asm { NOP }
    /* +0xee81fb */ __asm { NOP }
    /* +0xee81fc */ __asm { NOP }
    /* +0xee81fd */ __asm { NOP }
    /* +0xee82e1 */ __asm { LEA RDX,[0x7fffa4783a5e] }
    /* +0xee82e8 */ __asm { MOV RAX,0x5c12219b1eb9fcb0 }
    /* +0xee82f2 */ __asm { CMP RDX,RAX }
    /* +0xee82f5 */ __asm { JZ 0x7fffa5658de0 }
    /* +0xee82fb */ __asm { MOV R8W,0x48f7 }
    /* +0xee8300 */ __asm { MOV R10D,0x58f7 }
    /* +0xee8306 */ __asm { SUB R10D,R8D }
    /* +0xee8309 */ __asm { MOV R8D,0xdd7bda34 }
    /* +0xee830f */ __asm { MOV ECX,R13D }
    /* +0xee8312 */ __asm { OR ECX,0x1 }
    /* +0xee8315 */ __asm { MOV AX,0xf2a3 }
    /* +0xee8319 */ __asm { IMUL R11D,EAX,0x16c5 }
    /* +0xee8320 */ __asm { ADD R11D,0x666d }
    /* +0xee8327 */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xee832c */ __asm { MOV AX,0xa9c6 }
    /* +0xee8330 */ __asm { XOR EAX,R13D }
    /* +0xee8333 */ __asm { NOT EAX }
    /* +0xee8335 */ __asm { MOVZX R13D,R10W }
    /* +0xee8339 */ __asm { MOVSX R10,AX }
    /* +0xee833d */ __asm { MOV EAX,dword ptr [RDX + 0xc42] }
    /* +0xee8343 */ __asm { IMUL R8D,EBP }
    /* +0xee8347 */ __asm { XOR R8D,0xfb6af26c }
    /* +0xee834e */ __asm { IMUL R11D,ECX }
    /* +0xee8352 */ __asm { MOVZX ECX,R11W }
    /* +0xee8356 */ __asm { MOV dword ptr [RSP + 0x28],R13D }
    /* +0xee835b */ __asm { MOV dword ptr [RSP + 0x30],ECX }
    /* +0xee835f */ __asm { JMP 0x7fffa5658dbc }
    /* +0xee8364 */ __asm { MOV R10D,0x9a0a82bb }
    /* +0xee836a */ __asm { MOV RAX,-0x1493e44ea89ceaef }
    /* +0xee8374 */ __asm { CMP R10,RAX }
    /* +0xee8377 */ __asm { JZ 0x7fffa5658d09 }
    /* +0xee837d */ __asm { MOV R8D,dword ptr [R10 + -0x1a0c7ff7] }
    /* +0xee8384 */ __asm { MOV RAX,0x5555555555555556 }
    /* +0xee838e */ __asm { IMUL RAX,R8 }
    /* +0xee8392 */ __asm { MOV R10,0x5555555505f1e61e }
    /* +0xee839c */ __asm { ADD R10,0x4fa36f37 }
    /* +0xee83a3 */ __asm { ROL R10,0x30 }
    /* +0xee83a7 */ __asm { MOV ECX,R13D }
    /* +0xee83aa */ __asm { ROR R10,CL }
    /* +0xee83ad */ __asm { CMP RAX,R10 }
    /* +0xee83b0 */ __asm { JNC 0x7fffa5658c28 }
    /* +0xee83b6 */ __asm { RDTSC }
    /* +0xee83b8 */ __asm { SHL RDX,0x20 }
    /* +0xee83bc */ __asm { OR RDX,RAX }
    /* +0xee83bf */ __asm { MOV RAX,-0x5a46117eacb056b3 }
    /* +0xee83c9 */ __asm { IMUL RAX,RDX }
    /* +0xee83cd */ __asm { MOV RDX,-0x5244e9ce45497092 }
    /* +0xee83d7 */ __asm { ADD RDX,RAX }
    /* +0xee83da */ __asm { MOV RCX,RDX }
    /* +0xee83dd */ __asm { SHR RCX,0x3b }
    /* +0xee83e1 */ __asm { MOV R8,RDX }
    /* +0xee83e4 */ __asm { SHR R8,0x2d }
    /* +0xee83e8 */ __asm { SHR RDX,0x1b }
    /* +0xee83ec */ __asm { XOR R8D,EDX }
    /* +0xee83ef */ __asm { ROR R8D,CL }
    /* +0xee83f2 */ __asm { PUSHFQ }
    /* +0xee83f3 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xee83fb */ __asm { POPFQ }
    /* +0xee83fc */ __asm { MOV dword ptr [RSP + 0x40],0xfa5d8069 }
    /* +0xee8404 */ __asm { MOV R10D,dword ptr [RSP + 0x40] }
    /* +0xee8409 */ __asm { CMP R10D,0x48412f85 }
    /* +0xee8410 */ __asm { NOP }
    /* +0xee8411 */ __asm { NOP }
    /* +0xee8412 */ __asm { NOP }
    /* +0xee8413 */ __asm { NOP }
    /* +0xee8414 */ __asm { NOP }
    /* +0xee8415 */ __asm { NOP }
    /* +0xee8416 */ __asm { CMP R8D,0x431343 }
    /* +0xee841d */ __asm { JA 0x7fffa5658635 }
    /* +0xee8423 */ __asm { MOV R8D,0x6e9a0145 }
    /* +0xee8429 */ __asm { ADD R8D,R13D }
    /* +0xee842c */ __asm { IMUL R8D,R8D,0x2b394113 }
    /* +0xee8433 */ __asm { PUSHFQ }
    /* +0xee8434 */ __asm { AND qword ptr [RSP],-0x101 }
}


// ============================================================================
// Function : FUN_7fffa5658ed0  |  RVA: 0xee8ed0  |  Size: 606 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5658ed0(void)

{
  uint64_t uVar1;
  uint32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  
  bRam00007fffa47baf39 = 0;
  uRam00007fffa47baf5f = 0;
  uRam00007fffa47baf67 = 0;
  uRam00007fffa47baf4f = 0;
  uRam00007fffa47baf57 = 0;
  uRam00007fffa47baf3f = 0;
  uRam00007fffa47baf47 = 0;
  uRam00007fffa47baf6f = 0;
  uRam00007fffa47baf7e = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x1f0e9861effd4b1 + 1;
  lVar6 = 3;
  while( true ) {
    lVar3 = lVar3 * 0x1f0e9861effd4b1 + 1;
    lVar4 = lVar3 * 0x1f0e9861effd4b1 + 1;
    lVar5 = lVar4 * 0x1f0e9861effd4b1 + 1;
    *(char *)(lVar6 + 0x7fffa47baf2d) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47baf2f) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47baf2e) = (char)((uint64_t)lVar4 >> 0x20);
    if (lVar6 == 0x5b) break;
    lVar3 = lVar5 * 0x1f0e9861effd4b1 + 1;
    *(char *)(lVar6 + 0x7fffa47baf30) = (char)((uint64_t)lVar3 >> 0x20);
    lVar6 = lVar6 + 4;
  }
  uVar2 = (uint32_t)bRam00007fffa47baf39 * 0x24924925 + 0x24924925;
  uVar7 = (uint64_t)uVar2 * 8 - (uint64_t)uVar2;
  *(uint64_t *)((uVar7 >> 0x20) * 8 + 0x7fffa47baf3f) = 0;
  bRam00007fffa47baf39 = (char)(uVar7 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5659210  |  RVA: 0xee9210  |  Size: 2101 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa565939d) */

uint32_t FUN_7fffa5659210(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint8_t bVar4;
  uint32_t uVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint8_t bVar10;
  uint32_t uVar11;
  uint8_t bVar12;
  uint64_t *puVar13;
  uint32_t uVar14;
  uint64_t *puVar15;
  uint32_t uVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  uint64_t uVar21;
  uint64_t *in_R10;
  int64_t lVar22;
  uint64_t *puVar23;
  uint32_t in_R11D;
  int iVar24;
  uint32_t uVar25;
  int64_t lVar26;
  int64_t lVar27;
  uint64_t *puVar28;
  uint64_t *puVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint32_t uVar32;
  
  puVar13 = (uint64_t *)((param_2 << 0x3d) + param_2);
  bVar12 = 0x40 - (char)*(uint32_t *)(param_3 + 0x108);
  uVar32 = *(uint32_t *)(param_3 + 0x2c);
  uVar30 = (uint64_t)uVar32;
  uVar5 = *(uint32_t *)(param_3 + 0x18);
  uVar17 = (uint64_t)uVar5;
  lVar22 = *(int64_t *)(param_3 + 0x70);
  uVar16 = 1 << (*(uint8_t *)(param_3 + 0x100) & 0x1f);
  param_4 = (param_4 << 4 | param_4 >> 0x3c) ^ (param_4 << 0x1b | param_4 >> 0x25) ^ param_4;
  param_4 = (param_4 << 8 | param_4 >> 0x38) ^ (param_4 << 0x36 | param_4 >> 10) ^ param_4;
  param_4 = (param_4 << 0x2c | param_4 >> 0x14) ^ (param_4 << 0x10 | param_4 >> 0x30) ^ param_4;
  iVar24 = 1 << (*(uint8_t *)(param_3 + 0x10c) & 0x1f);
  param_4 = (param_4 << 0x20 | param_4 >> 0x20) ^ (param_4 << 0x18 | param_4 >> 0x28) ^ param_4;
  uVar21 = param_4 >> 0x30;
  puVar18 = (uint64_t *)((param_4 << 0x10 | uVar21) - (uVar21 << 0x34));
  bVar4 = *(uint8_t *)(param_3 + 0x104);
  uVar14 = 1 << (bVar4 & 0x1f);
  bVar10 = (uint8_t)in_R11D & 0x1f;
  lVar7 = *(int64_t *)(param_3 + 8);
  lVar8 = *(int64_t *)(param_3 + 0x10);
  iVar6 = *(int *)(param_3 + 300);
  lVar9 = *(int64_t *)(param_3 + 0x80);
  uVar25 = *(uint32_t *)(param_3 + 0x1c);
  uVar19 = (int)puVar18 - (int)lVar7;
  uVar11 = uVar19;
  if (uVar19 < uVar32) {
    uVar11 = uVar32;
  }
  uVar32 = uVar19 - uVar14;
  if (uVar19 < uVar14) {
    uVar32 = 0;
  }
  uVar20 = uVar19 << (*(uint8_t *)(param_3 + 0x100) & 0x1f);
  if (((in_R11D ^ 0x8bdfc729) + 0xa8e9d58d ^ 0x429de409) <=
      (-0x29f15ac8 << bVar10 | 0xd60ea538U >> 0x20 - bVar10) + 0x358c5623) {
    uVar20 = uVar19 - uVar16;
  }
  if (uVar19 - uVar25 <= uVar16) {
    uVar20 = uVar25;
  }
  if (*(int *)(param_3 + 0x28) != 0) {
    uVar20 = uVar25;
  }
  for (; uVar11 != uVar30; uVar30 = uVar30 + 1) {
    uVar21 = (uint64_t)(*(int64_t *)(lVar7 + uVar30) * -0x30e4432340650000) >> (bVar12 & 0x3f);
    *(uint32_t *)(lVar9 + (uint64_t)((uint32_t)uVar30 & ~(-1 << (bVar4 & 0x1f))) * 4) =
         *(uint32_t *)(lVar22 + uVar21 * 4);
    *(uint32_t *)(lVar22 + uVar21 * 4) = (uint32_t)uVar30;
    if (iVar6 != 0) break;
  }
  *(uint32_t *)(param_3 + 0x2c) = uVar19;
  uVar25 = *(uint32_t *)(lVar22 + (*puVar18 * -0x30e4432340650000 >> (bVar12 & 0x3f)) * 4);
  if (uVar25 < uVar20) {
LAB_7fffa56599e3:
    return (in_R11D | 1) * 0x69cf48d ^ 0x6228dd62;
  }
  puVar1 = (uint64_t *)((int64_t)puVar18 + 4);
  puVar2 = (uint64_t *)((int64_t)puVar13 - 7);
  puVar3 = puVar18 + 1;
  lVar22 = lVar7 + uVar17 + 8;
  uVar21 = 3;
  do {
    uVar30 = (uint64_t)uVar25;
    if (uVar25 < uVar5) {
      if (*(int *)(lVar8 + uVar30) != (int)*puVar18) goto LAB_7fffa56599ae;
      lVar27 = lVar8 + uVar30;
      puVar29 = (uint64_t *)(lVar27 + 4);
      puVar28 = (uint64_t *)(((int64_t)(lVar8 + uVar17) - (int64_t)puVar29) + (int64_t)puVar1);
      if (puVar13 <= puVar28) {
        puVar28 = puVar13;
      }
      puVar23 = puVar1;
      puVar15 = puVar29;
      if (puVar1 < (uint64_t *)((int64_t)puVar28 - 7U)) {
        if (*puVar29 == *puVar1) {
          lVar26 = 0xc;
LAB_7fffa56595b0:
          puVar23 = (uint64_t *)((int64_t)puVar18 + lVar26);
          if (puVar23 < (uint64_t *)((int64_t)puVar28 - 7U)) {
            if (*(uint64_t *)(lVar27 + lVar26) == *puVar23) break;
            uVar11 = 0;
            for (uVar30 = *puVar23 ^ *(uint64_t *)(lVar27 + lVar26); (uVar30 & 1) == 0;
                uVar30 = uVar30 >> 1 | 0x8000000000000000) {
              uVar11 = uVar11 + 1;
            }
            uVar30 = ((uint64_t)(uVar11 >> 3) + lVar26) - 4;
            goto LAB_7fffa5659838;
          }
          puVar15 = (uint64_t *)(lVar27 + lVar26);
          goto LAB_7fffa565976f;
        }
        uVar11 = 0;
        for (uVar30 = *puVar29 ^ *puVar1; (uVar30 & 1) == 0;
            uVar30 = uVar30 >> 1 | 0x8000000000000000) {
          uVar11 = uVar11 + 1;
        }
        uVar30 = (uint64_t)(uVar11 >> 3);
      }
      else {
LAB_7fffa565976f:
        if ((puVar23 < (uint64_t *)((int64_t)puVar28 - 3U)) && ((int)*puVar15 == (int)*puVar23)) {
          puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
          puVar15 = (uint64_t *)((int64_t)puVar15 + 4);
        }
        if ((puVar23 < (uint64_t *)((int64_t)puVar28 - 1U)) &&
           ((short)*puVar15 == (short)*puVar23)) {
          puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
          puVar15 = (uint64_t *)((int64_t)puVar15 + 2);
        }
        if (puVar23 < puVar28) {
          puVar23 = (uint64_t *)((int64_t)puVar23 + (uint64_t)((char)*puVar15 == (char)*puVar23))
          ;
        }
        bVar4 = (uint8_t)in_R11D & 0x1f;
        uVar30 = (int64_t)puVar23 - (int64_t)puVar1;
        if ((0xea4339cdU >> bVar4 | -0x15bcc633 << 0x20 - bVar4) <
            (in_R11D + 0xe0637af0 ^ 0x6e5e7627)) {
          uVar30 = (uint64_t)puVar1 | (uint64_t)puVar23;
        }
      }
LAB_7fffa5659838:
      if ((char *)((int64_t)puVar29 + uVar30) == (char *)(lVar8 + uVar17)) {
        puVar29 = (uint64_t *)((int64_t)puVar1 + uVar30);
        puVar23 = (uint64_t *)(lVar7 + uVar17);
        puVar28 = puVar29;
        if (puVar29 < puVar2) {
          uVar31 = *(uint64_t *)(lVar7 + uVar17);
          if (uVar31 == *puVar29) {
            lVar27 = 0;
            do {
              puVar28 = (uint64_t *)((int64_t)puVar18 + lVar27 + uVar30 + 0xc);
              if (puVar2 <= puVar28) {
                puVar23 = (uint64_t *)(lVar27 + lVar22);
                goto LAB_7fffa5659927;
              }
              uVar31 = *(uint64_t *)(lVar22 + lVar27);
              lVar27 = lVar27 + 8;
            } while (uVar31 == *puVar28);
            uVar11 = 0;
            for (uVar31 = *puVar28 ^ uVar31; (uVar31 & 1) == 0;
                uVar31 = uVar31 >> 1 | 0x8000000000000000) {
              uVar11 = uVar11 + 1;
            }
            uVar31 = (uint64_t)(uVar11 >> 3) + lVar27;
          }
          else {
            uVar11 = 0;
            for (uVar31 = uVar31 ^ *puVar29; (uVar31 & 1) == 0;
                uVar31 = uVar31 >> 1 | 0x8000000000000000) {
              uVar11 = uVar11 + 1;
            }
            uVar31 = (uint64_t)(uVar11 >> 3);
          }
        }
        else {
LAB_7fffa5659927:
          if ((puVar28 < (uint64_t *)((int64_t)puVar13 - 3U)) && ((int)*puVar23 == (int)*puVar28))
          {
            puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
            puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
          }
          if ((puVar28 < (uint64_t *)((int64_t)puVar13 - 1U)) &&
             ((short)*puVar23 == (short)*puVar28)) {
            puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
            puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
          }
          if (puVar28 < puVar13) {
            puVar28 = (uint64_t *)
                      ((int64_t)puVar28 + (uint64_t)((char)*puVar23 == (char)*puVar28));
          }
          uVar31 = (int64_t)puVar28 - (int64_t)puVar29;
        }
        uVar30 = uVar30 + uVar31;
      }
      uVar30 = uVar30 + 4;
joined_r0x7fffa56598fc:
      if (uVar30 <= uVar21) goto LAB_7fffa56599ae;
LAB_7fffa565998f:
      uVar21 = uVar30;
      *in_R10 = (uint64_t)((uVar19 + 3) - uVar25);
      if ((uint64_t *)((int64_t)puVar18 + uVar21) == puVar13) goto LAB_7fffa56599e3;
    }
    else {
      puVar29 = (uint64_t *)(lVar7 + uVar30);
      if ((*(int *)((uVar21 - 3) + (int64_t)puVar29) != *(int *)((int64_t)puVar18 + (uVar21 - 3)))
          != (in_R11D + 0x91a3ddec) * 0x35a0e7dd < 0xd609fd60 - in_R11D) {
        if (puVar18 < puVar2) {
          if (*puVar29 == *puVar18) {
            puVar29 = (uint64_t *)(lVar7 + 8 + uVar30);
            lVar27 = 8;
            puVar28 = puVar3;
            if (puVar3 < puVar2) {
LAB_7fffa5659670:
              if (*puVar29 == *puVar28) goto code_r0x7fffa565968f;
              uVar11 = 0;
              for (uVar30 = *puVar29 ^ *puVar28; (uVar30 & 1) == 0;
                  uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                uVar11 = uVar11 + 1;
              }
              uVar30 = (uint64_t)(uVar11 >> 3) + lVar27;
              goto joined_r0x7fffa56598fc;
            }
LAB_7fffa56596a0:
            goto code_r0x7fffa56596be;
          }
          uVar11 = 0;
          for (uVar30 = *puVar18 ^ *puVar29; (uVar30 & 1) == 0;
              uVar30 = uVar30 >> 1 | 0x8000000000000000) {
            uVar11 = uVar11 + 1;
          }
          uVar30 = (uint64_t)(uVar11 >> 3);
        }
        else {
          puVar28 = puVar18;
code_r0x7fffa56596be:
          if ((puVar28 < (uint64_t *)((int64_t)puVar13 - 3U)) && ((int)*puVar29 == (int)*puVar28))
          {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
          }
          if ((puVar28 < (uint64_t *)((int64_t)puVar13 - 1U)) &&
             ((short)*puVar29 == (short)*puVar28)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
          }
          if (puVar28 < puVar13) {
            puVar28 = (uint64_t *)
                      ((int64_t)puVar28 + (uint64_t)((char)*puVar29 == (char)*puVar28));
          }
          uVar30 = (int64_t)puVar28 - (int64_t)puVar18;
        }
        if (uVar21 < uVar30) goto LAB_7fffa565998f;
      }
    }
LAB_7fffa56599ae:
    if (((uVar25 <= uVar32) ||
        (uVar25 = *(uint32_t *)(lVar9 + (uint64_t)(uVar25 & uVar14 - 1) * 4), uVar25 < uVar20)) ||
       (iVar24 = iVar24 + -1, iVar24 == 0)) goto LAB_7fffa56599e3;
  } while( true );
  lVar26 = lVar26 + 8;
  goto LAB_7fffa56595b0;
code_r0x7fffa565968f:
  puVar28 = puVar28 + 1;
  lVar27 = lVar27 + 8;
  puVar29 = puVar29 + 1;
  if (puVar2 <= puVar28) goto LAB_7fffa56596a0;
  goto LAB_7fffa5659670;
}


// ============================================================================
// Function : FUN_7fffa5659a60  |  RVA: 0xee9a60  |  Size: 42 bytes
// Callers  : FUN_7fffa55aec50@0xe3ec50
// Callees  : FUN_7fffa5488ca0@0xd18ca0, FUN_7fffa5453ab0@0xce3ab0
// ============================================================================
void FUN_7fffa5659a60(uint64_t param_1,uint64_t *param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_7fffa5453ab0(param_1,*param_2);
  (*pcVar1)();
  FUN_7fffa5488ca0();
  return;
}


// ============================================================================
// Function : FUN_7fffa5659a90  |  RVA: 0xee9a90  |  Size: 1323 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa5659a90(uint64_t param_1,uint64_t param_2,uint32_t param_3,int64_t param_4,
                     uint64_t param_5)

{
  char *pcVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint32_t uVar7;
  uint8_t auVar8 [16];
  uint64_t in_RAX;
  int64_t lVar9;
  uint64_t uVar10;
  code *pcVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint8_t *puVar14;
  uint16_t uVar15;
  uint32_t uVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  uint32_t uVar19;
  uint64_t *in_R11;
  uint8_t *puVar20;
  int64_t lVar21;
  uint8_t bVar22;
  float fVar23;
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  int64_t lStack_50;
  
  uVar10 = (in_RAX << 0x24 | in_RAX >> 0x1c) ^ (in_RAX << 0x26 | in_RAX >> 0x1a) ^ in_RAX;
  uVar18 = param_4 * 0x4e91431fe9de59d1;
  uVar18 = (param_4 * 0x18ff4ef2ce880000 | uVar18 >> 0x2d) ^ (uVar18 << 0x3e | uVar18 >> 2) ^ uVar18
  ;
  uVar18 = (uVar18 << 0x3c | uVar18 >> 4) ^ (uVar18 << 0x26 | uVar18 >> 0x1a) ^ uVar18;
  uVar18 = (uVar18 << 0x38 | uVar18 >> 8) ^ (uVar18 << 0xc | uVar18 >> 0x34) ^ uVar18;
  uVar18 = (uVar18 << 0x18 | uVar18 >> 0x28) ^ (uVar18 << 0x30 | uVar18 >> 0x10) ^ uVar18;
  uVar10 = (uVar10 << 0xc | uVar10 >> 0x34) ^ (uVar10 << 8 | uVar10 >> 0x38) ^ uVar10;
  uVar10 = (uVar10 << 0x10 | uVar10 >> 0x30) ^ (uVar10 << 0x18 | uVar10 >> 0x28) ^ uVar10;
  uVar10 = (uVar10 << 0x20 | uVar10 >> 0x20) ^ (uVar10 << 0x30 | uVar10 >> 0x10) ^ uVar10;
  uVar12 = uVar10 >> 0x20;
  lVar9 = (uVar10 << 0x20 | uVar12) + 0x40000000174728e2 + (uVar12 << 0x3d);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(uint64_t *)(lVar9 + 0x28);
  lStack_50 = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(uint64_t *)(lVar9 + 0x28);
  auVar8._8_8_ = 1;
  auVar8._0_8_ = 0x4325c53ef368eb0;
  fVar23 = (float)FUN_7fffa5102fa0((float)(SUB168(auVar4 * auVar8,8) +
                                           (uint64_t)
                                           CARRY8(SUB168(auVar4 * ZEXT816(0x4325c53ef368eb0),0),
                                                  SUB168(auVar3 * ZEXT816(0x4325c53ef368eb05),8)) +
                                          1) / 0.875);
  uVar10 = (int64_t)(fVar23 - 9.223372e+18) & (int64_t)fVar23 >> 0x3f | (int64_t)fVar23;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar10;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar10;
  uVar12 = SUB168(auVar6 * ZEXT816(0x1111111111111111),8) +
           (uint64_t)
           CARRY8(SUB168(auVar6 * ZEXT816(0x1111111111111111),0),
                  SUB168(auVar5 * ZEXT816(0x1111111111111112),8));
  lVar21 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar21 == 0; lVar21 = lVar21 + -1) {
    }
  }
  bVar22 = 0x3f;
  if (0x1d < uVar10) {
    bVar22 = (uint8_t)lVar21 ^ 0x3f;
  }
  lVar21 = 1L << (-bVar22 & 0x3f);
  if (uVar10 == 0) {
    puVar14 = &UNK_7fffa56ee720;
  }
  else {
    lVar13 = 0x78L << (0x40 - bVar22 & 0x3f);
    uVar12 = 0x7fffa5273579;
    (*(code *)((int64_t)(int)((param_3 ^ 0xff24546f) << 2 | (param_3 ^ 0xff24546f) >> 0x1e) +
              0x7fffa5273579))();
    lStack_50 = (uVar12 << 0x2c | uVar12 >> 0x14) - ((uVar12 >> 0x14) << 0x36);
    puVar14 = (uint8_t *)
              ((uint64_t)(-((int)lVar13 + (int)lStack_50 + -8) & 0xf) + lVar13 + lStack_50 + -8);
    FUN_7fffa4ecf8e0(puVar14,0,0x10L << (0x40 - bVar22 & 0x3f));
    puVar14[lVar21 * 0x10 + -2] = 1;
  }
  uVar10 = (uVar18 << 0x20 | uVar18 >> 0x20) ^ (uVar18 << 0x30 | uVar18 >> 0x10) ^ uVar18;
  uVar16 = param_3 | 1;
  uVar12 = param_5 >> (bVar22 & 0x3f);
  *in_R11 = 0;
  in_R11[2] = 0;
  puVar20 = puVar14 + uVar12 * 0x10;
  pcVar1 = puVar14 + uVar12 * 0x10;
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
  *(uint32_t *)(in_R11 + 1) = 0;
  uVar19 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar24 >> 7,0) & 1) |
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
  if (uVar19 == 0) {
    lVar13 = 1;
    do {
      puVar20[0xf] = puVar20[0xf] | '\x01' << ((uint8_t)param_5 & 7);
      uVar12 = uVar12 + lVar13 & lVar21 - 1U;
      puVar20 = puVar14 + uVar12 * 0x10;
      pcVar1 = puVar14 + uVar12 * 0x10;
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
      uVar19 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar25 >> 7,0) & 1) |
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
      lVar13 = lVar13 + 1;
    } while (uVar19 == 0);
  }
  uVar7 = 0;
  for (; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
    uVar7 = uVar7 + 1;
  }
  plVar2 = (int64_t *)(uVar12 * 0x78 + lStack_50 + (uint64_t)uVar7 * 8);
  bVar22 = (uint8_t)param_3 & 0xf;
  pcVar11 = (code *)((int64_t)(short)(0xcf67U >> bVar22 | -0x3099 << 0x10 - bVar22) +
                    0x7fffa526b6d7);
  (*pcVar11)(pcVar11,0x91834230);
  puVar17 = (uint64_t *)
            (((int64_t)pcVar11 << 0x2c | (uint64_t)pcVar11 >> 0x14) -
            (((uint64_t)pcVar11 >> 0x14) << 0x36));
  if ((int)(uVar16 * -0xd20000 | uVar16 * 0x2da6ff97 >> 0xf) < (int)(param_3 + 0xf15f4437)) {
    bVar22 = (uint8_t)param_3 & 0x1f;
    uVar15 = (uint16_t)(0x68e5d59 >> bVar22) | (uint16_t)(0x68e5d59 << 0x20 - bVar22);
  }
  else {
    uVar15 = (short)uVar16 * -0x3f0e;
  }
  *plVar2 = (int64_t)puVar17;
  *puVar17 = uVar10 << 0x20 | uVar10 >> 0x20;
  puVar20[uVar7] =
       (&UNK_7fffa583f159)
       [(param_5 & 0xff) * 4 +
        (int64_t)(int)((param_3 + 0xe324766c) * 0x200 | param_3 + 0xe324766c >> 0x17)];
  in_R11[2] = plVar2;
  *(uint32_t *)(in_R11 + 1) = uVar7 & 0xffff;
  *in_R11 = puVar20;
  pcVar11 = (code *)((int64_t)
                     (short)((((uVar15 | 1) * 0x2000 | (uint16_t)((uVar15 | 1) * -0x7fef) >> 3) -
                             (short)param_3) * -0x61db) + 0x7fffa4d04c92);
  uVar12 = lVar9 + 0x67c7be3e;
  uVar12 = (uVar12 * 8 | uVar12 >> 0x3d) ^ (uVar12 * 0x100000 | uVar12 >> 0x2c) ^ uVar12;
  (*pcVar11)(pcVar11,0x8011,(uVar12 << 3 | uVar12 >> 0x3d) ^ 0xffffffffffffffff);
  *(int64_t *)(lVar9 + 0x28) = *(int64_t *)(lVar9 + 0x28) + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa5659fc0  |  RVA: 0xee9fc0  |  Size: 6189 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5659fc0(uint8_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                     int64_t param_5)

{
  int *piVar1;
  char *pcVar2;
  short *psVar3;
  uint8_t bVar4;
  char cVar5;
  uint8_t bVar6;
  int iVar7;
  bool bVar8;
  uint8_t bVar9;
  uint16_t uVar10;
  uint16_t uVar11;
  uint16_t uVar12;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  int in_EAX;
  uint32_t uVar16;
  uint32_t uVar17;
  uint8_t bVar18;
  short sVar19;
  uint32_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint32_t uVar24;
  uint64_t uVar25;
  uint8_t *pbVar26;
  uint64_t uVar27;
  int64_t lVar28;
  int64_t lVar29;
  uint32_t uVar30;
  uint32_t uVar31;
  int iVar32;
  int iVar33;
  uint64_t uVar34;
  short sVar35;
  int iVar36;
  uint32_t uVar37;
  short sVar38;
  uint32_t uVar39;
  uint8_t *pbVar40;
  uint64_t uVar41;
  uint16_t uVar42;
  uint32_t in_R10D;
  int iVar43;
  uint32_t uVar44;
  uint64_t uVar45;
  int64_t lVar46;
  int iVar47;
  int64_t in_R11;
  int64_t lVar48;
  uint64_t uVar49;
  uint64_t uVar50;
  int64_t lVar51;
  int64_t lVar52;
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  short asStackY_228 [80];
  int iStack_158;
  uint32_t auStack_128 [2];
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint16_t uStack_110;
  undefined6 uStack_10e;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int64_t lStack_b8;
  int64_t lStack_b0;
  uint8_t auStack_a8 [10];
  undefined6 uStack_9e;
  unkbyte10 Stack_98;
  uint32_t uStack_8c;
  uint64_t uStack_88;
  int64_t lStack_80;
  
  param_3 = param_3 << 0x30 ^ param_3;
  uStack_c0 = (uint64_t)(-(int)param_2 & 3);
  if ((0x12ff < (param_3 >> 0x25 ^ param_3 ^ 0x61b83d1e) - uStack_c0) && (in_R10D < 0x100)) {
    uVar16 = in_EAX + 0x6b1d35e5;
    piVar1 = (int *)(param_2 + uStack_c0);
    uVar16 = (uVar16 * 0x400000 | uVar16 >> 10) ^ (uVar16 * 2 | (uint32_t)((int)uVar16 < 0)) ^ uVar16;
    uVar16 = (uVar16 << 2 | uVar16 >> 0x1e) ^ (uVar16 << 0xc | uVar16 >> 0x14) ^ uVar16;
    uVar16 = (uVar16 << 4 | uVar16 >> 0x1c) ^ (uVar16 << 0x18 | uVar16 >> 8) ^ uVar16;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar16);
    uStack_d8 = CONCAT44(uStack_d8._4_4_,
                         (uVar16 << 0x10 | uVar16 >> 0x10) ^ (uVar16 << 8 | uVar16 >> 0x18));
    uVar30 = in_R10D + 1;
    uVar49 = 0;
    lStack_b0 = param_2;
    FUN_7fffa4ecf8e0(piVar1,0,0x1300);
    uVar16 = (uint32_t)param_5;
    bVar6 = (uint8_t)param_5;
    if (in_R10D != (uint16_t)(0U >> (bVar6 & 0xf) | 0 << 0x10 - (bVar6 & 0xf))) {
      uVar49 = 0;
      do {
        uVar31 = *(uint32_t *)(in_R11 + uVar49 * 4);
        uVar44 = 0x1f;
        if (uVar31 != 0) {
          for (; uVar31 >> uVar44 == 0; uVar44 = uVar44 - 1) {
          }
        }
        uVar44 = ((uVar16 | 1) * 0xc4cf & 0xffff) - (uVar44 ^ 0x1f);
        if (uVar31 < ((uVar16 | 1) * 0x947 & 0xffff)) {
          uVar44 = uVar31;
        }
        *(short *)(piVar1 + (uint64_t)uVar44 + 0x400) =
             (short)piVar1[(uint64_t)uVar44 + 0x400] + 1;
        uVar31 = *(uint32_t *)(in_R11 + 4 + uVar49 * 4);
        iVar43 = 0x1f;
        if (uVar31 != 0) {
          for (; uVar31 >> iVar43 == 0; iVar43 = iVar43 + -1) {
          }
        }
        uVar44 = iVar43 + 0x9e;
        if (uVar31 < 0xa5) {
          uVar44 = uVar31;
        }
        *(short *)(piVar1 + (uint64_t)uVar44 + 0x400) =
             (short)piVar1[(uint64_t)uVar44 + 0x400] + 1;
        uVar49 = uVar49 + 2;
      } while (uVar49 != (uVar30 & 0x1fe));
    }
    uStack_e0 = (uint64_t)in_R10D;
    if ((uVar30 & 1) != 0) {
      uVar31 = *(uint32_t *)(in_R11 + uVar49 * 4);
      iVar43 = 0x1f;
      if (uVar31 != 0) {
        for (; uVar31 >> iVar43 == 0; iVar43 = iVar43 + -1) {
        }
      }
      uVar44 = iVar43 + 0x9e;
      if (uVar31 < 0xa5) {
        uVar44 = uVar31;
      }
      *(short *)(piVar1 + (uint64_t)uVar44 + 0x400) = (short)piVar1[(uint64_t)uVar44 + 0x400] + 1;
    }
    lVar46 = lStack_b0 + uStack_c0;
    lVar29 = lVar46 + 8;
    uVar31 = ((uint32_t)uStack_d0 ^ (uint32_t)uStack_d8) << 0x10 |
             ((uint32_t)uStack_d0 ^ (uint32_t)uStack_d8) >> 0x10;
    sVar19 = *(short *)(lStack_b0 + 0x12fc + uStack_c0);
    lVar48 = 0;
    while( true ) {
      sVar19 = sVar19 + *(short *)(lVar46 + 0x12f8 + lVar48 * 4);
      sVar38 = *(short *)(lVar46 + 0x12f4 + lVar48 * 4) + sVar19;
      sVar35 = *(short *)(lVar46 + 0x12f0 + lVar48 * 4) + sVar38;
      *(short *)(lVar46 + 0x12f4 + lVar48 * 4) = sVar38;
      *(short *)(lVar46 + 0x12f6 + lVar48 * 4) = sVar38;
      *(short *)(lVar46 + 0x12f8 + lVar48 * 4) = sVar19;
      *(short *)(lVar46 + 0x12fa + lVar48 * 4) = sVar19;
      *(short *)(lVar46 + 0x12f0 + lVar48 * 4) = sVar35;
      *(short *)(lVar46 + 0x12f2 + lVar48 * 4) = sVar35;
      if (lVar48 == -0xbc) break;
      sVar19 = sVar35 + *(short *)(lVar46 + 0x12ec + lVar48 * 4);
      *(short *)(lVar46 + 0x12ec + lVar48 * 4) = sVar19;
      *(short *)(lVar46 + 0x12ee + lVar48 * 4) = sVar19;
      lVar48 = lVar48 + -4;
    }
    lVar48 = 0;
    while( true ) {
      uVar44 = *(uint32_t *)(in_R11 + lVar48 * 4);
      iVar43 = 0x1f;
      if (uVar44 != 0) {
        for (; uVar44 >> iVar43 == 0; iVar43 = iVar43 + -1) {
        }
      }
      uVar17 = iVar43 + 0x9e;
      if (uVar44 < 0xa5) {
        uVar17 = uVar44;
      }
      uVar42 = *(uint16_t *)((int64_t)piVar1 + (uint64_t)uVar17 * 4 + 0x1006);
      *(uint16_t *)((int64_t)piVar1 + (uint64_t)uVar17 * 4 + 0x1006) = uVar42 + 1;
      piVar1[(uint64_t)uVar42 * 2 + 2] = uVar44;
      *(char *)((int64_t)piVar1 + (uint64_t)uVar42 * 8 + 0xe) = (char)lVar48;
      if ((uint64_t)uVar30 - 1 == lVar48) break;
      lVar48 = lVar48 + 1;
    }
    uStack_c8 = (uint64_t)in_R10D;
    lVar52 = lStack_b0 + uStack_c0;
    lVar51 = -0x3bf53259267f2f09;
    lVar48 = 0;
    while( true ) {
      uVar42 = *(uint16_t *)(lVar52 + 0x1294 + lVar48 * 4);
      iVar43 = (uint32_t)*(uint16_t *)(lVar52 + 0x1296 + lVar48 * 4) - (uint32_t)uVar42;
      uVar10 = (uint16_t)param_5;
      if ((int)(uint32_t)(uint16_t)~((uint16_t)(uVar16 + 0xa34b) >> 1 |
                              (uint16_t)((uVar16 + 0xa34b & 1) != 0) << 0xf) < iVar43) {
        uVar49 = (uint64_t)uVar42 * 8 + lVar29;
        uVar49 = uVar49 >> 0xe ^ uVar49;
        (*(code *)((int64_t)(short)((uVar10 + 0x4a82) * 0x2000 | (uint16_t)(uVar10 + 0x4a82) >> 3) +
                  0x7fffa514d08a))
                  (&IMAGE_DOS_HEADER_7fffa4770000,
                   (uVar16 + 0xfc81fccb) * 0x40 | uVar16 + 0xfc81fccb >> 0x1a,uVar49,0,
                   (uVar49 << 0x33 | uVar49 >> 0xd) ^ (uVar49 << 0x32 | uVar49 >> 0xe) ^ uVar49,
                   iVar43 + -1);
      }
      if (lVar51 == -0x16f20be5bad29b40) break;
      lVar48 = lVar48 + 1;
      lVar51 = lVar51 + 0x67e167f02306e731;
    }
    uVar49 = lVar48 + 0xa6;
    uVar44 = (int)uStack_c8 + 0xff;
    uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar44);
    lStack_80 = uStack_e0 << 0x20;
    uVar45 = uStack_e0 * 8;
    for (lStack_b8 = 0; iVar43 = *(int *)(uStack_c0 + uStack_e0 * 8 + lStack_b0 + 8 + lStack_b8 * 8)
        , iVar43 == 0; lStack_b8 = lStack_b8 + -1) {
      lStack_80 = lStack_80 + -0x100000000;
      uVar45 = uVar45 - 8;
    }
    lVar51 = uStack_e0 * 8 + uStack_c0 + lStack_b0;
    uStack_f0 = uStack_e0 + lStack_b8;
    *(uint16_t *)(lVar51 + 4 + lStack_b8 * 8) = 0x100;
    iVar36 = (int)uStack_e0 + 0xff + (int)lStack_b8;
    *(uint16_t *)(lVar51 + 0xc + lStack_b8 * 8) = 0x100;
    *(int *)(lStack_b0 + 0x808 + uStack_c0) = iVar43 + *(int *)(lVar51 + lStack_b8 * 8);
    if ((uint32_t)uStack_d8 == (uint32_t)uStack_d0) {
      uVar31 = 0xb;
    }
    uStack_d0 = uVar49;
    uVar17 = (uint32_t)uVar49;
    bVar9 = (uint8_t)uVar49;
    iStack_158 = (int)lVar48;
    if ((int64_t)uStack_f0 < 2) {
      *(uint8_t *)((int64_t)piVar1 + (int64_t)iVar36 * 8 + 0xf) = 0;
      *piVar1 = (uVar17 ^ 0xf21f26dd) * (uVar16 | 1) + 0x3af8f17a;
    }
    else {
      uVar25 = (uint64_t)uVar44 + lStack_b8;
      uVar39 = (uint32_t)uVar25;
      uVar44 = 0x101;
      if (0x101 < (int)uVar39) {
        uVar44 = uVar39;
      }
      lVar51 = 0x101;
      uStack_8c = uVar31;
      if (0x107 < (int)uVar39) {
        lVar52 = uStack_c0 + lStack_b0;
        uStack_88 = uVar25;
        uVar24 = 0x101;
        if (0x101 < (int)uVar39) {
          uVar24 = uVar39;
        }
        uStack_e8._0_4_ = uVar16 | 1;
        lVar28 = 0;
        do {
          lVar51 = lVar28;
          uVar37 = 0x20000 << (bVar9 & 0x1f) | 0x20000U >> 0x20 - (bVar9 & 0x1f);
          uVar20 = -iStack_158 + 0x1019;
          *(uint32_t *)(lVar52 + 0x838 + lVar51 * 8) =
               uVar20 << (bVar6 & 0x1f) | uVar20 >> 0x20 - (bVar6 & 0x1f);
          *(uint32_t *)(lVar52 + 0x848 + lVar51 * 8) = (uVar17 ^ 0xc00000bf) * (uint32_t)uStack_e8;
          *(uint32_t *)(lVar52 + 0x820 + lVar51 * 8) =
               uVar37 >> (bVar6 & 0x1f) | uVar37 << 0x20 - (bVar6 & 0x1f);
          *(uint32_t *)(lVar52 + 0x828 + lVar51 * 8) =
               0x1000 << (bVar6 & 0x1f) | 0x1000U >> 0x20 - (bVar6 & 0x1f);
          *(uint32_t *)(lVar52 + 0x840 + lVar51 * 8) =
               (-0x19b4b964 << (bVar9 & 0x1f) | 0xe64b469cU >> 0x20 - (bVar9 & 0x1f)) + uVar16;
          *(uint32_t *)(lVar52 + 0x830 + lVar51 * 8) = 0x31c38782 - (uVar17 ^ 0xf1c3873d);
          *(uint32_t *)(lVar52 + 0x810 + lVar51 * 8) = (-iStack_158 + 0x30bc4307) * 0x4c11a2af ^ uVar16;
          *(uint32_t *)(lVar52 + 0x818 + lVar51 * 8) =
               0x20000000U >> (bVar9 & 0x1f) | 0x20000000 << 0x20 - (bVar9 & 0x1f);
          lVar28 = lVar51 + 8;
        } while ((uint64_t)(uVar24 & 0x7ffffff8) - 0x100 != lVar51 + 8);
        lVar51 = lVar51 + 0x109;
      }
      auVar15 = _DAT_7fffa56bc4f0;
      auVar14 = _DAT_7fffa56b8d90;
      auVar13 = _DAT_7fffa56b26a0;
      uVar34 = (uint64_t)((int)uStack_c8 - 2) + lStack_b8;
      if ((uint64_t)(uVar44 & 7) != 0) {
        lVar52 = (uint64_t)(uVar44 & 7) - 1;
        auVar53._8_4_ = (int)lVar52;
        auVar53._0_8_ = lVar52;
        auVar53._12_4_ = (int)((uint64_t)lVar52 >> 0x20);
        uVar44 = 0x101;
        if (0x101 < (int)uVar39) {
          uVar44 = uVar39;
        }
        lVar52 = uStack_c0 + lVar51 * 8 + lStack_b0;
        lVar51 = 0;
        auVar53 = auVar53 ^ _DAT_7fffa56b26a0;
        while( true ) {
          auVar54._8_4_ = (int)lVar51;
          auVar54._0_8_ = lVar51;
          auVar54._12_4_ = (int)((uint64_t)lVar51 >> 0x20);
          auVar55 = (auVar54 | auVar14) ^ auVar13;
          iVar43 = auVar53._0_4_;
          bVar8 = iVar43 < auVar55._0_4_;
          iVar32 = auVar53._4_4_;
          iVar33 = auVar55._4_4_;
          if ((bool)(~(iVar32 < iVar33 || iVar33 == iVar32 && bVar8) & 1)) {
            uVar24 = (0x22da09e7 - uVar16) * -0x541302e3;
            *(uint32_t *)(lVar52 + 8 + lVar51 * 8) =
                 (uVar24 << (bVar9 & 0x1f) | uVar24 >> 0x20 - (bVar9 & 0x1f)) * 0x6dc405b7;
          }
          if (iVar32 >= iVar33 && (iVar33 != iVar32 || !bVar8)) {
            *(uint32_t *)(lVar52 + 0x10 + lVar51 * 8) =
                 ((uVar17 + 0x36972be4) * 0x4000000 | uVar17 + 0x36972be4 >> 6) ^ uVar16;
          }
          auVar54 = (auVar54 | auVar15) ^ auVar13;
          if (auVar54._4_4_ <= iVar32 && (auVar54._0_4_ <= iVar43 || auVar54._4_4_ != iVar32)) {
            *(uint32_t *)(lVar52 + 0x18 + lVar51 * 8) =
                 ((uVar16 ^ 0x7325a3f3) + iStack_158) * -0x3fffff71 + -0x7fffa346;
          }
          if (auVar54._12_4_ <= auVar53._12_4_ &&
              (auVar54._8_4_ <= auVar53._8_4_ || auVar54._12_4_ != auVar53._12_4_)) {
            uVar24 = (uVar17 ^ 0xb695ccf0) * (uVar16 | 1) + 0xa08fc0c3;
            *(uint32_t *)(lVar52 + 0x20 + lVar51 * 8) = uVar24 * 4 | uVar24 >> 0x1e;
          }
          if ((uint64_t)((uVar44 & 7) + 3 & 0xfffffffc) - 4 == lVar51) break;
          lVar51 = lVar51 + 4;
        }
      }
      uStack_d8 = uStack_e0 + lStack_b8 + 0xfe;
      uVar50 = 0x101;
      if (0x101 < (int)uVar39) {
        uVar50 = uVar25 & 0xffffffff;
      }
      *piVar1 = (0x2000 << (bVar6 & 0x1f) | 0x2000U >> 0x20 - (bVar6 & 0x1f)) * (uVar17 | 1);
      iVar43 = 0x100;
      uVar25 = 0x101;
      while( true ) {
        iVar32 = (int)uVar34;
        uVar44 = piVar1[(int64_t)iVar32 * 2 + 2];
        uVar39 = piVar1[(int64_t)iVar43 * 2 + 2];
        iVar33 = iVar32 - (uint32_t)(uVar44 < uVar39);
        if (uVar44 >= uVar39) {
          iVar32 = iVar43;
        }
        uVar24 = piVar1[(int64_t)iVar33 * 2 + 2];
        iVar47 = (iVar43 + 1) - (uint32_t)(uVar44 < uVar39);
        uVar44 = piVar1[(int64_t)iVar47 * 2 + 2];
        iVar43 = iVar33;
        if (uVar44 <= uVar24) {
          iVar43 = iVar47;
        }
        iVar7 = piVar1[(int64_t)iVar32 * 2 + 2];
        *(short *)(piVar1 + (int64_t)iVar43 * 2 + 3) = (short)uVar25;
        *(short *)(piVar1 + (int64_t)iVar32 * 2 + 3) = (short)uVar25;
        piVar1[uVar25 * 2 + 2] = iVar7 + piVar1[(int64_t)iVar43 * 2 + 2];
        if (uVar50 == uVar25) break;
        iVar43 = (iVar47 + 1) - (uint32_t)(uVar24 < uVar44);
        uVar39 = (uint32_t)(uVar24 < uVar44);
        uVar44 = iVar33 - uVar39;
        if (((uVar16 | 1) * 0x29400000 | (uVar16 | 1) * -0x8c83f5b >> 10) + (-0xa6 - iStack_158) !=
            -0x28249280) {
          uVar44 = -uVar39 * iVar33;
        }
        uVar34 = (uint64_t)uVar44;
        uVar25 = uVar25 + 1;
      }
      *(uint8_t *)(lVar46 + 0xf + (int64_t)iVar36 * 8) = 0;
      uVar25 = (uStack_d8 & 0xffffffff) + 1;
      do {
        *(char *)((int64_t)piVar1 + uVar25 * 8 + 7) =
             *(char *)((int64_t)piVar1 + (uint64_t)*(uint16_t *)(piVar1 + uVar25 * 2 + 1) * 8 + 0xf)
             + '\x01';
        uVar25 = uVar25 - 1;
      } while (0x100 < uVar25);
    }
    uVar25 = uStack_e0 + lStack_b8 + 1;
    uVar34 = (uint64_t)
             ((uVar16 ^ 0xccda5cb2) >> (bVar9 & 0x1f) |
             (uVar16 ^ 0xccda5cb2) << 0x20 - (bVar9 & 0x1f));
    uVar44 = (uint32_t)uVar25;
    if ((int64_t)uVar34 <= (int64_t)uStack_f0) {
      bVar9 = (char)lVar48 + 0xa6U & 0xf;
      if ((int)lStack_b8 +
          ((int)uStack_e0 -
          (uint32_t)(uint16_t)(0x5cb4 - uVar10 << bVar9 | (uint16_t)(0x5cb4 - uVar10) >> 0x10 - bVar9)) ==
          -1) {
        uVar50 = 0;
      }
      else {
        uVar50 = 2;
        while( true ) {
          uVar39 = (uVar17 ^ 0xfec030dd) >> (bVar6 & 0x1f) |
                   (uVar17 ^ 0xfec030dd) << 0x20 - (bVar6 & 0x1f);
          if ((int64_t)((uVar49 | 1) * -0x32ee9369e395eb07 + param_5) <
              (int64_t)(int)((uVar39 << 10 | uVar39 >> 0x16) + 0x328b803d)) {
            uVar21 = (int64_t)(short)*(uint16_t *)(piVar1 + uVar50 * 2 + -1);
            if (((0x6f330b70 - uVar16) * -0x33f04987 ^ uVar17) == 0x6d47ab71) {
              uVar21 = (uint64_t)*(uint16_t *)(piVar1 + uVar50 * 2 + -1);
            }
          }
          else {
            uVar21 = (uint64_t)*(uint16_t *)(piVar1 + uVar50 * 2 + -1);
          }
          *(char *)((int64_t)piVar1 + uVar50 * 8 + -1) =
               *(char *)((int64_t)piVar1 + uVar21 * 8 + 0xf) + '\x01';
          *(char *)((int64_t)piVar1 + uVar50 * 8 + 7) =
               *(char *)((int64_t)piVar1 +
                        (uint64_t)*(uint16_t *)(piVar1 + uVar50 * 2 + 1) * 8 + 0xf) + '\x01';
          if ((uVar44 & 0xfffffffe) == uVar50) break;
          uVar50 = uVar50 + 2;
        }
      }
      if ((uVar25 & 1) != 0) {
        *(char *)(lVar46 + 0xf + uVar50 * 8) =
             *(char *)(lVar46 + 0xf + (uint64_t)*(uint16_t *)(lVar46 + 0xc + uVar50 * 8) * 8) +
             '\x01';
      }
    }
    bVar9 = *(uint8_t *)(lVar46 + 0xf + (uVar45 & 0x7fffffff8));
    iVar43 = bVar9 - uVar31;
    if (bVar9 < uVar31 || iVar43 == 0) {
      uVar17 = (uint32_t)bVar9;
      lVar51 = lStack_b0;
    }
    else {
      lVar51 = lStack_80 >> 0x1d;
      bVar4 = *(uint8_t *)(lVar46 + 0xf + lVar51);
      uVar39 = (uint32_t)bVar4;
      bVar18 = (uint8_t)iVar43;
      if (uVar31 < bVar4) {
        lStack_80 = uStack_f0 << 0x20;
        uVar45 = uStack_f0 & 0xffffffff;
        uStack_88._0_4_ = 0;
        pbVar26 = (uint8_t *)(lVar51 + lVar29 + 7);
        pbVar40 = (uint8_t *)((int64_t)piVar1 + (int64_t)(int)uStack_f0 * 8 + 7);
        do {
          cVar5 = (char)uVar39;
          *pbVar26 = (uint8_t)uVar31;
          uVar39 = (uint32_t)*pbVar40;
          uStack_88._0_4_ =
               (uint32_t)uStack_88 + (1 << (bVar18 & 0x1f)) + (-1 << (bVar9 - cVar5 & 0x1f));
          uVar45 = (uint64_t)((int)uVar45 - 1);
          lStack_80 = lStack_80 + -0x100000000;
          pbVar26 = pbVar40;
          pbVar40 = pbVar40 + -8;
        } while (uVar31 < uVar39);
      }
      else {
        uStack_88._0_4_ = 0;
        uVar45 = uStack_f0 & 0xffffffff;
      }
      lVar28 = lStack_80 >> 0x20;
      lVar51 = uStack_c0 + lStack_b0;
      lVar52 = lVar51 + 0xf;
      while( true ) {
        uVar39 = (uint32_t)*(uint8_t *)(lVar52 + lVar28 * 8);
        bVar8 = (int)uVar31 <= (int)uVar39;
        if (uVar16 * 0x3fffff69 + iStack_158 + 0x5a0d998b <= ~(uVar17 ^ 0x85e4f843) * -0x627d11e3) {
          bVar8 = uVar31 == uVar39;
        }
        uVar39 = (uint32_t)uVar45;
        if (!bVar8) break;
        uVar45 = (uint64_t)(uVar39 - 1);
        lVar28 = lVar28 + -1;
      }
      uStack_88 = CONCAT44(uStack_88._4_4_,(int)(uint32_t)uStack_88 >> (bVar18 & 0x1f));
      uStack_f8 = 0xf0f0f0f0f0f0f0f0;
      uStack_108 = 0xf0f0f0f0f0f0f0f0;
      uStack_100 = 0xf0f0f0f0f0f0f0f0;
      uStack_118 = 0xf0f0f0f0f0f0f0f0;
      uStack_110 = 0xf0f0;
      uStack_10e = 0xf0f0f0f0f0f0;
      auStack_128[1] = -0xf0f0f10;
      uStack_120._0_2_ = 0xf0f0;
      uStack_120._2_6_ = 0xf0f0f0f0f0f0;
      if (-1 < lVar28) {
        uVar17 = uVar31;
        if ((uVar45 & 1) == 0) {
          bVar9 = *(uint8_t *)(lVar46 + 0xf + uVar45 * 8);
          uVar24 = uVar31 - bVar9;
          if (bVar9 <= uVar31 && uVar24 != 0) {
            *(uint32_t *)((int64_t)&uStack_120 + ((uint64_t)uVar24 * 2 + -4) * 2) = uVar39;
            uVar17 = (uint32_t)bVar9;
          }
          uVar45 = uVar45 - 1;
        }
        if (((0x5ccbU - iStack_158 ^ uVar16) & 0xffff) != uVar39) {
          do {
            bVar9 = *(uint8_t *)(lVar52 + uVar45 * 8);
            if (bVar9 < uVar17) {
              uVar17 = (uint32_t)bVar9;
              *(int *)((int64_t)&uStack_120 + ((uint64_t)(uVar31 - uVar17) * 2 + -4) * 2) =
                   (int)uVar45;
            }
            bVar9 = *(uint8_t *)(lVar51 + 7 + uVar45 * 8);
            if (bVar9 < uVar17) {
              uVar17 = (uint32_t)bVar9;
              *(int *)((int64_t)&uStack_120 + ((uint64_t)(uVar31 - uVar17) * 2 + -4) * 2) =
                   (int)uVar45 + -1;
            }
            bVar8 = 1 < (int64_t)uVar45;
            uVar45 = uVar45 - 2;
          } while (bVar8);
        }
      }
      uVar45 = uStack_d0;
      lStack_80 = lVar28;
      uVar17 = uVar31;
      uVar39 = (uint32_t)uStack_88;
      if (0 < (int)(uint32_t)uStack_88) {
        uStack_d8 = -lVar48;
        uStack_e8 = 0xffffffff;
        uStack_8c = uVar31;
        do {
          uStack_88 = CONCAT44(uStack_88._4_4_,uVar39);
          uVar24 = 0x1f;
          if (uVar39 != 0) {
            for (; uVar39 >> uVar24 == 0; uVar24 = uVar24 - 1) {
            }
          }
          uVar49 = 1;
          if ((uVar24 ^ 0x1f) * -0x4bff1513 != -0x33e38d4d) {
            uVar25 = (uint64_t)(0x20 - (uVar24 ^ 0x1f));
            uVar50 = -uVar25;
            do {
              uVar21 = uVar25 - 1;
              uVar22 = (uint64_t)*(uint32_t *)((int64_t)&uStack_120 + (uVar25 * 2 + -4) * 2);
              uVar41 = uVar21 & 0xffffffff;
              if ((int64_t)
                  (uStack_d8 + 0x800000081a4019 << (bVar6 & 0x3f) |
                  uStack_d8 + 0x800000081a4019 >> 0x40 - (bVar6 & 0x3f)) <
                  (int64_t)
                  (int)((0x5c5a992c - uVar16 >> 1 | (uint32_t)((0x5c5a992c - uVar16 & 1) != 0) << 0x1f)
                        + -iStack_158 + -0xa6 ^ 0xa8a40d29)) {
                uVar41 = uVar21 ^ uStack_e8;
              }
              uVar17 = uStack_8c;
              if ((uVar22 != 0xf0f0f0f0) &&
                 ((uVar39 = *(uint32_t *)((int64_t)&uStack_120 + (uVar41 * 2 + -4) * 2),
                  ((-iStack_158 + 0xf8268142U ^ uVar16) + 0x6e896658 ^ uVar39) == 0x5376b303 ||
                  (*(uint32_t *)(lVar29 + uVar22 * 8) <=
                   (uint32_t)(*(int *)(lVar29 + (uint64_t)uVar39 * 8) * 2))))) {
                if (0xc < uVar25) goto LAB_7fffa565b1a3;
                uVar49 = uVar25;
                break;
              }
              uVar39 = (uint32_t)uVar45 | 1;
              uVar20 = (uint32_t)uVar50;
              uVar27 = uVar50 ^ 0xfffffffe;
              uVar24 = uVar39 * 0x1a93e200 ^ uVar16;
              uVar22 = uVar50 & 0xffffffff00000001;
              uVar23 = uVar50 ^ 0xfffffffe;
              uVar37 = ((uint32_t)uVar45 ^ 0x22593195) + 0x72699486;
              uVar37 = uVar37 >> (bVar6 & 0x1f) | uVar37 << 0x20 - (bVar6 & 0x1f);
              uVar41 = (int64_t)(int)(uVar24 << 0xc | uVar24 >> 0x14) *
                       (uVar21 & 0xffffffff00000001);
              if ((uint64_t)(int64_t)(int)((uVar16 + 0x6ccf3e01) * uVar39 + -0x3a8c9ba1) <=
                  (uint64_t)(uVar37 << 1 | (uint32_t)((int)uVar37 < 0))) {
                uVar41 = uVar21 & 0xffffffff00000000;
              }
              uVar50 = uVar50 + 1;
              uVar25 = uVar21;
            } while (uVar41 + (uVar27 + (uVar20 & 0xfffffffe)) * 0x7ce19aca +
                              ((uVar21 & 0xffffffff00000001) * 0x80b67942 - uVar22) + uVar23 +
                              0x7ce19aca != 0);
          }
          do {
            uVar39 = *(uint32_t *)((int64_t)&uStack_120 + (uVar49 * 2 + -4) * 2);
            if ((uVar39 << 0x19 | uVar39 >> 7) != 0xe1e1e1e1) {
              uVar25 = uVar49 & 0xffffffff;
              goto LAB_7fffa565b1a3;
            }
            uVar49 = uVar49 + 1;
          } while (uVar49 != 0xd);
          uVar25 = 0xd;
LAB_7fffa565b1a3:
          iVar43 = (int)uVar25;
          uVar20 = iVar43 - 1;
          uVar39 = *(uint32_t *)((int64_t)&uStack_120 + ((uint64_t)uVar20 * 2 + -4) * 2);
          uVar24 = *(uint32_t *)((int64_t)&uStack_120 + ((uVar25 & 0xffffffff) * 2 + -4) * 2);
          uVar50 = (uint64_t)uVar24;
          if (uVar39 == 0xf0f0f0f0) {
            uVar39 = uVar24;
          }
          cVar5 = *(char *)(lVar46 + 0xf + uVar50 * 8);
          *(uint32_t *)((int64_t)&uStack_120 + ((uint64_t)uVar20 * 2 + -4) * 2) = uVar39;
          uVar49 = uStack_d0;
          *(char *)(lVar46 + 0xf + uVar50 * 8) = cVar5 + '\x01';
          if (uVar50 == 0) {
            uVar24 = 0xf0f0f0f0;
          }
          else {
            uVar24 = uVar24 - 1;
            bVar9 = (uint8_t)uStack_d0 & 0x1f;
            iVar36 = -iVar43;
            if (~((0x3a88b618 << bVar9 | 0x3a88b618U >> 0x20 - bVar9) * (uVar16 | 1)) <
                (uVar16 + 0x6ef1067f ^ (uint32_t)uStack_d0)) {
              iVar36 = iVar43;
            }
            if (iVar36 + uVar31 != (uint32_t)*(uint8_t *)(lVar46 + 0xf + (uint64_t)uVar24 * 8)) {
              uVar24 = 0xf0f0f0f0;
            }
          }
          uVar39 = (-1 << ((uint8_t)uVar20 & 0x1f)) + (uint32_t)uStack_88;
          *(uint32_t *)((int64_t)&uStack_120 + ((uVar25 & 0xffffffff) * 2 + -4) * 2) = uVar24;
        } while (0 < (int)uVar39);
      }
      lVar51 = lStack_b0;
      if ((int)uVar39 < 0) {
        do {
          uVar31 = uVar39;
          for (iVar43 = auStack_128[1] + 0xf0f0f10; iVar43 != 0; iVar43 = iVar43 + 1) {
            pcVar2 = (char *)(lVar46 + 0xf + (uint64_t)(iVar43 + 0xf0f0f0f1) * 8);
            *pcVar2 = *pcVar2 + -1;
            if (uVar31 == (int)(short)(((uVar10 ^ 0x7c7a) << 5 | (uVar10 ^ 0x7c7a) >> 0xb) ^ 0xe6fb)
               ) goto LAB_7fffa565b21a;
            uVar31 = uVar31 + 1;
          }
          lVar52 = (int64_t)(int)lStack_80 + 1;
          auStack_128[1] = (int)lStack_80 + 2;
          do {
            lVar28 = lVar52 * 8;
            lVar52 = lVar52 + -1;
            auStack_128[1] = auStack_128[1] + -1;
          } while (uVar17 == *(uint8_t *)((int64_t)piVar1 + lVar28 + 7));
          lStack_80 = lVar52;
          uVar39 = uVar31 + 1;
          pcVar2 = (char *)(lVar46 + 0xf + (int64_t)(int)auStack_128[1] * 8);
          *pcVar2 = *pcVar2 + -1;
        } while ((int)uVar31 < -1);
      }
    }
LAB_7fffa565b21a:
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_120._0_2_ = 0;
    uStack_120._2_6_ = 0;
    Stack_98 = SUB1610((uint8_t  [16])0x0,6);
    auStack_a8 = SUB1610((uint8_t  [16])0x0,0);
    uStack_9e = 0;
    if ((int64_t)uVar34 <= (int64_t)uStack_f0) {
      lVar52 = 7;
      if ((uint32_t)uStack_e0 + (int)lStack_b8 != 0) {
        lVar28 = uStack_c0 + lVar51;
        uVar45 = 0;
        do {
          psVar3 = (short *)((int64_t)&uStack_120 +
                            ((uint64_t)*(uint8_t *)(lVar28 + 0xf + uVar45 * 8) - 4) * 2);
          *psVar3 = *psVar3 + 1;
          psVar3 = (short *)((int64_t)&uStack_120 +
                            ((uint64_t)*(uint8_t *)(lVar28 + 0x17 + uVar45 * 8) - 4) * 2);
          *psVar3 = *psVar3 + 1;
          uVar45 = uVar45 + 2;
          lVar52 = lVar52 + 0x10;
        } while ((uVar44 & 0xfffffffe) != uVar45);
      }
      if (((uint32_t)uStack_f0 & 1) == ((iStack_158 - 0x19U) * 0x10000 | iStack_158 - 0x19U >> 0x10)) {
        uVar31 = ~(((uint32_t)uVar49 | 1) * 0x49336a11);
        uVar49 = (int64_t)(char)*(uint8_t *)(lVar29 + lVar52);
        if ((iStack_158 + 0x360ce6e9U >> (bVar6 & 0x1f) |
            iStack_158 + 0x360ce6e9U << 0x20 - (bVar6 & 0x1f)) <= (uVar31 << 0x18 | uVar31 >> 8)) {
          uVar49 = (uint64_t)*(uint8_t *)(lVar29 + lVar52);
        }
        psVar3 = (short *)((int64_t)&uStack_120 + (uVar49 - 4) * 2);
        *psVar3 = *psVar3 + 1;
      }
    }
    uVar49 = (uint64_t)uVar17;
    if (uVar17 != 0) {
      if (uVar17 < ((uint32_t)(uint16_t)(0x7fd1 << (bVar6 & 0xf) | 0x7fd1U >> 0x10 - (bVar6 & 0xf)) +
                    iStack_158 + 0xa6 & 0xffff)) {
        uVar42 = 0;
      }
      else {
        uVar25 = (uint64_t)(uVar17 & 0xc);
        uVar42 = 0;
        uVar45 = uVar49;
        do {
          uVar49 = uVar45 - 4;
          uVar25 = uVar25 - 4;
          uVar10 = (uint16_t)(*(short *)((int64_t)&uStack_120 + uVar49 * 2) + uVar42) >> 1;
          uVar11 = (uint16_t)(*(short *)((int64_t)&uStack_120 + (uVar45 - 5) * 2) + uVar10) >> 1;
          uVar12 = (uint16_t)(*(short *)((int64_t)&uStack_120 + (uVar45 - 6) * 2) + uVar11) >> 1;
          sVar19 = *(short *)((int64_t)&uStack_120 + (uVar45 - 7) * 2);
          *(uint16_t *)(auStack_a8 + (uVar45 - 2) * 2 + 4) = uVar42;
          uVar42 = (uint16_t)(sVar19 + uVar12) >> 1;
          *(uint16_t *)(auStack_a8 + (uVar45 - 3) * 2 + 4) = uVar10;
          *(uint16_t *)(auStack_a8 + (uVar45 - 5) * 2 + 4) = uVar12;
          *(uint16_t *)(auStack_a8 + uVar49 * 2 + 4) = uVar11;
          uVar45 = uVar49;
        } while (uVar25 != 0);
      }
      if ((uVar17 & 3) != ((uVar16 ^ 0xfa3da3f3) + iStack_158 + 0xa6 & 0xffff)) {
        lVar29 = 0;
        do {
          *(uint16_t *)(auStack_a8 + lVar29 * 2 + uVar49 * 2) = uVar42;
          uVar42 = (uint16_t)(uVar42 + *(short *)((int64_t)&uStack_120 + (uVar49 + lVar29 + -4) * 2))
                   >> 1;
          lVar29 = lVar29 + -1;
        } while (-lVar29 != (uint64_t)(uVar17 & 3));
      }
    }
    if ((uint32_t)uStack_e0 < 3) {
      uVar49 = 0;
    }
    else {
      sVar19 = (short)lVar48 + 0xe5;
      lVar29 = uStack_c0 + lVar51;
      uVar45 = 0;
      do {
        uVar25 = uVar45 * 8 | 0x18;
        uVar49 = uVar45 + 4;
        *(uint64_t *)(param_1 + (uint64_t)*(uint8_t *)(lVar29 + 0xe + uVar45 * 8) * 8 + 8) =
             (uint64_t)*(uint8_t *)(lVar29 + 0xf + uVar45 * 8);
        *(uint64_t *)(param_1 + (uint64_t)*(uint8_t *)(lVar29 + 0x16 + uVar45 * 8) * 8 + 8) =
             (uint64_t)*(uint8_t *)(lVar29 + 0x17 + uVar45 * 8);
        *(uint64_t *)(param_1 + (uint64_t)*(uint8_t *)(lVar29 + 0x1e + uVar45 * 8) * 8 + 8) =
             (uint64_t)*(uint8_t *)(lVar29 + 0x1f + uVar45 * 8);
        *(uint64_t *)(param_1 + (uint64_t)*(uint8_t *)(lVar46 + 0xe + uVar25) * 8 + 8) =
             (uint64_t)*(uint8_t *)(lVar46 + 0xf + uVar25);
        uVar45 = uVar49;
      } while ((uVar30 & (uint16_t)(sVar19 * 2 | (uint16_t)(sVar19 < 0))) != uVar49);
    }
    if ((uint64_t)(uVar30 & 3) != 0) {
      lVar51 = uStack_c0 + uVar49 * 8 + lVar51;
      lVar46 = 0;
      while( true ) {
        bVar6 = *(uint8_t *)(lVar51 + 0xe + lVar46 * 8);
        bVar9 = (uint8_t)(uint32_t)uStack_d0 & 0x1f;
        uVar49 = (uint64_t)bVar6;
        if ((int64_t)
            (uint64_t)(~(uVar16 ^ 0x93a5b152) >> bVar9 | ~(uVar16 ^ 0x93a5b152) << 0x20 - bVar9) <
            (int64_t)(int)((uVar16 - iStack_158) + 0x24e6e0df)) {
          uVar49 = (int64_t)(char)bVar6;
        }
        *(uint64_t *)(param_1 + uVar49 * 8 + 8) = (uint64_t)*(uint8_t *)(lVar51 + 0xf + lVar46 * 8);
        if ((uint64_t)(uVar30 & 3) - 1 == lVar46) break;
        lVar46 = lVar46 + 1;
      }
    }
    uVar49 = 1;
    while( true ) {
      uVar45 = *(uint64_t *)(param_1 + uVar49 * 8);
      uVar25 = uVar45 & 0xff;
      uVar42 = *(uint16_t *)(auStack_a8 + uVar25 * 2);
      *(uint16_t *)(auStack_a8 + uVar25 * 2) = uVar42 + 1;
      if (uVar25 != 0) {
        uVar25 = (0x40 - uVar25) + (uint64_t)uVar42;
        if (((0x66098c0a - (uint32_t)uStack_d0) * (uVar16 | 1) + 0x32bd80ef ^ 0x19c664c2) <=
            ((uVar16 ^ 0x5cb52a48) << 0x1c | (uVar16 ^ 0x5cb52a48) >> 4)) {
          uVar25 = (uint64_t)uVar42 << (-(char)uVar45 & 0x3fU);
        }
        *(uint64_t *)(param_1 + uVar49 * 8) = uVar25 | uVar45;
      }
      if (uVar30 == uVar49) break;
      uVar49 = uVar49 + 1;
    }
    param_1[1] = (uint8_t)uStack_c8;
    *param_1 = (char)uVar17;
    *(uint32_t *)(param_1 + 2) = 0;
    *(uint16_t *)(param_1 + 6) = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa565b830  |  RVA: 0xeeb830  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa565b830(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa565b84c  |  RVA: 0xeeb84c  |  Size: 122 bytes
// Callers  : FUN_7fffa56605e8@0xef05e8
// Callees  : FUN_7fffa4fcf020@0x85f020, FUN_7fffa4ab28e0@0x3428e0, FUN_7fffa55f8750@0xe88750, FUN_7fffa5668bc0@0xef8bc0, FUN_7fffa507b150@0x90b150
// ============================================================================
uint32_t FUN_7fffa565b84c(int64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  if (param_1 == 0) {
    *(uint8_t *)(param_2 + 0x30) = 1;
    *(uint32_t *)(param_2 + 0x2c) = 0x16;
    FUN_7fffa5668bc0(0,0,0,0,0,param_2);
  }
  else {
    if ((*(uint32_t *)(param_1 + 0x14) >> 0xc & 1) == 0) {
      FUN_7fffa507b150();
      uVar1 = FUN_7fffa4ab28e0(param_1,param_2);
      FUN_7fffa4fcf020(param_1);
      return uVar1;
    }
    FUN_7fffa55f8750();
  }
  return 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa565b8d0  |  RVA: 0xeeb8d0  |  Size: 4526 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa565b9d9) */

int64_t FUN_7fffa565b8d0(uint64_t param_1,int64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint8_t bVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t in_RAX;
  uint64_t uVar15;
  uint64_t *puVar16;
  int *piVar17;
  uint64_t *puVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint32_t uVar22;
  uint32_t uVar23;
  uint32_t uVar24;
  int iVar25;
  int64_t lVar26;
  uint64_t *puVar27;
  uint64_t *puVar28;
  uint64_t uVar29;
  int64_t lVar30;
  uint64_t *puVar31;
  uint32_t uVar32;
  uint64_t *puVar33;
  uint16_t uVar34;
  uint32_t uVar35;
  int64_t lVar36;
  uint32_t uVar37;
  uint32_t uVar38;
  uint64_t *puVar39;
  uint32_t uVar40;
  uint64_t uStack_b8;
  int64_t lStack_b0;
  uint64_t *puStack_a8;
  uint64_t *puStack_a0;
  uint64_t uStack_98;
  uint32_t *puStack_90;
  uint64_t *puStack_88;
  uint64_t *puStack_80;
  uint64_t uStack_78;
  int64_t lStack_70;
  uint64_t *puStack_68;
  uint64_t *puStack_60;
  
  uStack_78 = 0xf1658962;
  uVar20 = ~(uint64_t)param_4;
  puVar8 = *(uint64_t **)(param_1 + 0xf8);
  puStack_88 = (uint64_t *)*puVar8;
  uVar9 = puVar8[1];
  uVar5 = *(uint32_t *)(puVar8 + 3);
  lVar10 = *(int64_t *)(param_1 + 8);
  uVar6 = *(uint32_t *)(param_1 + 0x18);
  uStack_98 = (uint64_t)uVar6;
  puStack_60 = (uint64_t *)(lVar10 + uStack_98);
  puStack_a8 = (uint64_t *)((int64_t)param_4 + param_5);
  puStack_80 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  uVar23 = *param_3;
  uVar38 = param_3[1];
  uVar7 = *(uint32_t *)(param_1 + 0x110);
  *(uint32_t *)(param_1 + 300) = 0;
  puVar18 = (uint64_t *)
            ((uint64_t)
             ((int)param_4 + (int)puStack_88 == (int)(uint64_t *)(uVar5 + uVar9) + (int)puStack_60)
            + (int64_t)param_4);
  if (puVar18 < puStack_80) {
    lVar36 = ((((uint64_t)param_4 ^ in_RAX) & 0x44b0542f) +
             ((in_RAX ^ uVar20) & 0xffffffffbb4fabd0)) * 0x46098141 +
             ((uVar20 | in_RAX | 0x44b0542f) + (~(in_RAX | 0x44b0542f) & (uint64_t)param_4)) *
             0x74dd7e09 +
             ((uint64_t)param_4 ^ in_RAX ^ 0x44b0542f) * -0x2acf799d +
             ((~in_RAX & uVar20 & 0x44b0542f) - (~in_RAX & uVar20 & 0xffffffffbb4fabd0)) *
             0x70d8fade + (in_RAX & (uint64_t)param_4 ^ 0x44b0542f) * -0x70d8fade;
    uVar32 = ((int)uVar9 - (int)puStack_88) + uVar6;
    lStack_70 = uVar9 - uVar32;
    puVar1 = (uint64_t *)((int64_t)puStack_a8 - 7);
    puVar2 = puStack_a8 + -4;
    puStack_a0 = (uint64_t *)((int64_t)puStack_a8 + -1);
    puVar3 = (uint64_t *)((int64_t)puStack_a8 - 3);
    lStack_b0 = uStack_98 + 8 + lVar10;
    uVar20 = uVar9;
    puStack_90 = param_3;
    do {
      uVar22 = (((int)puVar18 - (int)lVar10) - uVar23) + 1;
      piVar17 = (int *)((uint64_t)uVar22 + lVar10);
      if (uVar22 < (uint32_t)uStack_98) {
        piVar17 = (int *)((uVar22 - uVar32) + uVar9);
      }
      uVar37 = (uint32_t)uStack_78;
      uVar24 = (uint32_t)lVar36;
      uVar40 = uVar23;
      if ((uVar22 - uVar6 < 0xfffffffd) && (*piVar17 == *(int *)((int64_t)puVar18 + 1))) {
        puVar28 = (uint64_t *)(piVar17 + 1);
        puVar39 = (uint64_t *)((int64_t)puVar18 + 5);
        puVar33 = puStack_a8;
        if (uVar22 < (uint32_t)uStack_98) {
          puVar33 = puStack_88;
        }
        puVar16 = (uint64_t *)((int64_t)puVar18 + (int64_t)puVar33 + (5 - (int64_t)puVar28));
        if (puStack_a8 <= puVar16) {
          puVar16 = puStack_a8;
        }
        puVar31 = puVar39;
        puVar27 = puVar28;
        if (puVar39 < (uint64_t *)((int64_t)puVar16 - 7U)) {
          if (*puVar28 == *puVar39) {
            lVar26 = 0;
LAB_7fffa565bd60:
            puVar31 = (uint64_t *)((int64_t)puVar18 + lVar26 + 0xd);
            if (puVar31 < (uint64_t *)((int64_t)puVar16 - 7U)) {
              uVar20 = *puVar31;
              uVar15 = *(uint64_t *)((int64_t)piVar17 + lVar26 + 0xc);
              if (uVar15 == uVar20) goto code_r0x7fffa565bd7f;
              uVar23 = 0;
              for (uVar20 = uVar20 ^ uVar15; (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar23 = uVar23 + 1;
              }
              uVar15 = (uint64_t)(uVar23 >> 3) + lVar26 + 8;
              puStack_68 = puVar39;
              goto LAB_7fffa565c23d;
            }
            puVar31 = (uint64_t *)((int64_t)puVar18 + lVar26 + 0xd);
            puVar27 = (uint64_t *)((int64_t)piVar17 + lVar26 + 0xc);
            puStack_68 = puVar39;
            goto LAB_7fffa565c17b;
          }
          uVar23 = 0;
          for (uVar20 = *puVar39 ^ *puVar28; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar23 = uVar23 + 1;
          }
          uVar15 = (uint64_t)(uVar23 >> 3);
        }
        else {
LAB_7fffa565c17b:
          if ((puVar31 < (uint64_t *)((int64_t)puVar16 - 3U)) && ((int)*puVar27 == (int)*puVar31))
          {
            puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
            puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
          }
          if ((puVar31 < (uint64_t *)((int64_t)puVar16 - 1U)) &&
             ((short)*puVar27 == (short)*puVar31)) {
            puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
            puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
          }
          if (puVar31 < puVar16) {
            uVar15 = (uint64_t)((char)*puVar27 == (char)*puVar31);
            uVar20 = -uVar15;
            if (((uVar24 | 1) * 0x34b35aa4 ^ (uint32_t)uStack_78) <
                ((uVar24 ^ 0xf134896b) << 1 | (uint32_t)((int)(uVar24 ^ 0xf134896b) < 0)) -
                (uint32_t)uStack_78) {
              uVar20 = uVar15;
            }
            puVar31 = (uint64_t *)((int64_t)puVar31 + uVar20);
            puStack_68 = puVar39;
          }
          uVar15 = (int64_t)puVar31 - (int64_t)puVar39;
        }
LAB_7fffa565c23d:
        if ((uint64_t *)((int64_t)puVar28 + uVar15) == puVar33) {
          puVar39 = (uint64_t *)((int64_t)puVar39 + uVar15);
          puVar28 = puVar39;
          puVar33 = puStack_60;
          if (puVar39 < puVar1) {
            if (*puStack_60 == *puVar39) {
              puVar28 = (uint64_t *)((int64_t)puVar18 + uVar15 + 0xd);
              lVar26 = 8;
              if (puVar28 < puVar1) {
LAB_7fffa565c280:
                if (*(uint64_t *)((int64_t)puStack_60 + lVar26) == *puVar28)
                goto code_r0x7fffa565c2a7;
                uVar23 = 0;
                for (uVar20 = *(uint64_t *)((int64_t)puStack_60 + lVar26) ^ *puVar28;
                    (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                  uVar23 = uVar23 + 1;
                }
                uVar20 = (uint64_t)(uVar23 >> 3) + lVar26;
                goto LAB_7fffa565c3b2;
              }
LAB_7fffa565c2b4:
              puVar33 = (uint64_t *)(lVar26 + (int64_t)puStack_60);
              goto LAB_7fffa565c2bc;
            }
            uVar23 = 0;
            for (uVar20 = *puStack_60 ^ *puVar39; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar23 = uVar23 + 1;
            }
            uVar22 = uVar23 >> 3;
            if ((int64_t)(uint64_t)(0xc69cd8d7 - uVar24) <
                (int64_t)(int)(((uint32_t)uStack_78 ^ 0x9b76431b) + uVar24 + 0xbb118008 ^ 0x5e0774d8))
            {
              uVar22 = uVar23 & 3;
            }
            uVar20 = (uint64_t)uVar22;
          }
          else {
LAB_7fffa565c2bc:
            if ((puVar28 < puVar3) && ((int)*puVar33 == (int)*puVar28)) {
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
              puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
            }
            if ((puVar28 < puStack_a0) && ((short)*puVar33 == (short)*puVar28)) {
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
              puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
            }
            if (puVar28 < puStack_a8) {
              puVar28 = (uint64_t *)
                        ((int64_t)puVar28 + (uint64_t)((char)*puVar33 == (char)*puVar28));
            }
            uVar20 = (int64_t)puVar28 - (int64_t)puVar39;
          }
LAB_7fffa565c3b2:
          uVar15 = uVar15 + uVar20;
        }
        uVar15 = uVar15 + 4;
        uStack_b8 = 1;
        puVar18 = (uint64_t *)((int64_t)puVar18 + 1);
LAB_7fffa565c3bf:
        puVar28 = (uint64_t *)param_2[3];
        uVar20 = (int64_t)puVar18 - (int64_t)param_4;
        if (puVar2 < puVar18) {
          puVar39 = puVar28;
          if (param_4 <= puVar2) {
            uVar29 = param_4[1];
            *puVar28 = *param_4;
            puVar28[1] = uVar29;
            puVar39 = (uint64_t *)((int64_t)puVar28 + ((int64_t)puVar2 - (int64_t)param_4));
            if (0x10 < (int64_t)puVar2 - (int64_t)param_4) {
              lVar26 = 0x10;
              do {
                uVar12 = ((uint64_t *)((int64_t)param_4 + lVar26))[1];
                *(uint64_t *)((int64_t)puVar28 + lVar26) =
                     *(uint64_t *)((int64_t)param_4 + lVar26);
                ((uint64_t *)((int64_t)puVar28 + lVar26))[1] = uVar12;
                puVar8 = (uint64_t *)((int64_t)param_4 + lVar26 + 0x10);
                uVar12 = puVar8[1];
                puVar4 = (uint64_t *)((int64_t)puVar28 + lVar26 + 0x10);
                *puVar4 = *puVar8;
                puVar4[1] = uVar12;
                lVar30 = lVar26 + 0x20;
                lVar26 = lVar26 + 0x20;
              } while ((uint64_t *)((int64_t)puVar28 + lVar30) < puVar39);
            }
            param_4 = puVar2;
          }
          if (param_4 < puVar18) {
            uVar29 = (int64_t)puVar18 - (int64_t)param_4;
            puVar28 = puVar39;
            if (!(uVar29 < 4 || (uint64_t)((int64_t)puVar39 - (int64_t)param_4) < 0x20)) {
              if (uVar29 < 0x20) {
                uVar19 = 0;
              }
              else {
                uVar19 = uVar29 & 0xffffffffffffffe0;
                lVar26 = 0;
                while( true ) {
                  uVar12 = *(uint64_t *)((int64_t)param_4 + lVar26);
                  uVar13 = ((uint64_t *)((int64_t)param_4 + lVar26))[1];
                  puVar8 = (uint64_t *)((int64_t)param_4 + lVar26 + 0x10);
                  uVar14 = puVar8[1];
                  puVar4 = (uint64_t *)((int64_t)puVar39 + lVar26 + 0x10);
                  *puVar4 = *puVar8;
                  puVar4[1] = uVar14;
                  *(uint64_t *)((int64_t)puVar39 + lVar26) = uVar12;
                  ((uint64_t *)((int64_t)puVar39 + lVar26))[1] = uVar13;
                  if (uVar19 - 0x20 == lVar26) break;
                  lVar26 = lVar26 + 0x20;
                }
                if (uVar29 == uVar19) goto LAB_7fffa565c660;
                if ((uVar29 & 0x1c) == 0) {
                  puVar28 = (uint64_t *)((int64_t)puVar39 + uVar19);
                  param_4 = (uint64_t *)((int64_t)param_4 + uVar19);
                  goto LAB_7fffa565c5b6;
                }
              }
              uVar21 = uVar29 & 0xfffffffffffffffc;
              puVar28 = (uint64_t *)((int64_t)puVar39 + uVar21);
              for (; *(uint32_t *)((int64_t)puVar39 + uVar19) =
                          *(uint32_t *)((int64_t)param_4 + uVar19), uVar21 - 4 != uVar19;
                  uVar19 = uVar19 + 4) {
              }
              if (uVar29 == uVar21) goto LAB_7fffa565c660;
              param_4 = (uint64_t *)((int64_t)param_4 + uVar21);
            }
LAB_7fffa565c5b6:
            uVar23 = (int)puVar18 - (int)param_4 & 7;
            uVar29 = (uint64_t)uVar23;
            puVar39 = param_4;
            puVar33 = param_4;
            if (uVar23 != 0) {
              do {
                puVar39 = (uint64_t *)((int64_t)puVar33 + 1);
                *(char *)puVar28 = (char)*puVar33;
                puVar28 = (uint64_t *)((int64_t)puVar28 + 1);
                uVar29 = uVar29 - 1;
                puVar33 = puVar39;
              } while (uVar29 != 0);
            }
            if ((uint64_t)((int64_t)param_4 - (int64_t)puVar18) < 0xfffffffffffffff9) {
              while( true ) {
                *(char *)puVar28 = (char)*puVar39;
                *(uint8_t *)((int64_t)puVar28 + 1) = *(uint8_t *)((int64_t)puVar39 + 1);
                *(uint8_t *)((int64_t)puVar28 + 2) = *(uint8_t *)((int64_t)puVar39 + 2);
                *(uint8_t *)((int64_t)puVar28 + 3) = *(uint8_t *)((int64_t)puVar39 + 3);
                *(uint8_t *)((int64_t)puVar28 + 4) = *(uint8_t *)((int64_t)puVar39 + 4);
                *(uint8_t *)((int64_t)puVar28 + 5) = *(uint8_t *)((int64_t)puVar39 + 5);
                *(uint8_t *)((int64_t)puVar28 + 6) = *(uint8_t *)((int64_t)puVar39 + 6);
                *(uint8_t *)((int64_t)puVar28 + 7) = *(uint8_t *)((int64_t)puVar39 + 7);
                if (puVar39 + 1 == puVar18) break;
                puVar28 = puVar28 + 1;
                puVar39 = puVar39 + 1;
              }
            }
          }
LAB_7fffa565c660:
          lVar26 = param_2[1];
          param_2[3] = param_2[3] + uVar20;
          if (0xffff < uVar20) {
            *(uint32_t *)(param_2 + 9) = 1;
            uVar24 = uVar24 | 1;
            uVar23 = uVar24 * 0x7ef227c8 ^ 0xe290bb24;
            bVar11 = (uint8_t)uStack_78 & 0x1f;
            iVar25 = (int)((uint64_t)(lVar26 - *param_2) >> 3);
            if ((int64_t)
                (uint64_t)((uVar24 * 0x24000000 | uVar24 * -0x697b6f6e >> 7) - (int)uStack_78) <
                (int64_t)(int)((uVar23 >> bVar11 | uVar23 << 0x20 - bVar11) * -0x4036a3c9)) {
              iVar25 = (int)(lVar26 - *param_2) * 3;
            }
            *(int *)((int64_t)param_2 + 0x4c) = iVar25;
          }
        }
        else {
          uVar29 = param_4[1];
          *puVar28 = *param_4;
          puVar28[1] = uVar29;
          if (0x10 < uVar20) {
            lVar26 = param_2[3];
            uVar29 = param_4[3];
            *(uint64_t *)(lVar26 + 0x10) = param_4[2];
            *(uint64_t *)(lVar26 + 0x18) = uVar29;
            if (0x20 < (int64_t)uVar20) {
              lVar30 = 0;
              while( true ) {
                puVar4 = (uint64_t *)((int64_t)param_4 + lVar30 + 0x20);
                uVar12 = puVar4[1];
                puVar8 = (uint64_t *)(lVar26 + 0x20 + lVar30);
                *puVar8 = *puVar4;
                puVar8[1] = uVar12;
                puVar8 = (uint64_t *)((int64_t)param_4 + lVar30 + 0x30);
                uVar12 = puVar8[1];
                puVar4 = (uint64_t *)(lVar26 + 0x30 + lVar30);
                *puVar4 = *puVar8;
                puVar4[1] = uVar12;
                if (lVar26 + uVar20 <= lVar26 + 0x20 + lVar30 + 0x20U) break;
                lVar30 = lVar30 + 0x20;
              }
            }
            goto LAB_7fffa565c660;
          }
          lVar26 = param_2[1];
          param_2[3] = param_2[3] + uVar20;
        }
        *(short *)(lVar26 + 4) = (short)uVar20;
        *(int *)param_2[1] = (int)uStack_b8;
        if (0xffff < uVar15 - 3) {
          *(uint32_t *)(param_2 + 9) = 2;
          uVar20 = (uint64_t)(param_2[1] - *param_2) >> 3;
          *(int *)((int64_t)param_2 + 0x4c) = (int)uVar20;
        }
        *(short *)(param_2[1] + 6) = (short)(uVar15 - 3);
        param_2[1] = param_2[1] + 8;
        if (*(int *)(param_1 + 300) != 0) {
          *(uint32_t *)(param_1 + 300) = 0;
        }
        param_4 = (uint64_t *)((int64_t)puVar18 + uVar15);
        if (puStack_80 < param_4) {
          puVar18 = param_4;
          uVar23 = uVar40;
        }
        else {
          uVar20 = (uint64_t)uVar40;
          do {
            uVar22 = (uint32_t)uVar20;
            uVar37 = ((int)param_4 - (int)lVar10) - uVar38;
            uVar23 = (uint32_t)uStack_98;
            lVar26 = lVar10;
            if (uVar37 < uVar23) {
              lVar26 = lStack_70;
            }
            if ((0xfffffffc < uVar37 - uVar23) ||
               (piVar17 = (int *)((uint64_t)uVar37 + lVar26), *piVar17 != (int)*param_4)) {
              puVar18 = param_4;
              uVar23 = uVar22;
              break;
            }
            puVar18 = puStack_a8;
            if (uVar37 < uVar23) {
              puVar18 = puStack_88;
            }
            puVar28 = (uint64_t *)((int64_t)param_4 + 4);
            puVar39 = (uint64_t *)(piVar17 + 1);
            puVar33 = (uint64_t *)((int64_t)param_4 + (int64_t)puVar18 + (4 - (int64_t)puVar39))
            ;
            if (puStack_a8 <= puVar33) {
              puVar33 = puStack_a8;
            }
            puVar16 = puVar28;
            puVar31 = puVar39;
            if (puVar28 < (uint64_t *)((int64_t)puVar33 - 7U)) {
              if (*puVar39 == *puVar28) {
                lVar30 = 0;
                do {
                  puVar16 = (uint64_t *)((int64_t)param_4 + lVar30 + 0xc);
                  if ((uint64_t *)((int64_t)puVar33 - 7U) <= puVar16) {
                    puVar16 = (uint64_t *)((int64_t)param_4 + lVar30 + 0xc);
                    puVar31 = (uint64_t *)((int64_t)piVar17 + lVar30 + 0xc);
                    goto LAB_7fffa565c8c9;
                  }
                  uVar20 = *puVar16;
                  uVar15 = *(uint64_t *)(lVar26 + (uint64_t)uVar37 + 0xc + lVar30);
                  lVar30 = lVar30 + 8;
                } while (uVar15 == uVar20);
                uVar23 = 0;
                for (uVar15 = uVar15 ^ uVar20; (uVar15 & 1) == 0;
                    uVar15 = uVar15 >> 1 | 0x8000000000000000) {
                  uVar23 = uVar23 + 1;
                }
                uVar20 = (uint64_t)(uVar23 >> 3) + lVar30;
              }
              else {
                uVar23 = 0;
                for (uVar20 = *puVar39 ^ *puVar28; (uVar20 & 1) == 0;
                    uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                  uVar23 = uVar23 + 1;
                }
                uVar20 = (uint64_t)(uVar23 >> 3);
              }
            }
            else {
LAB_7fffa565c8c9:
              if ((puVar16 < (uint64_t *)((int64_t)puVar33 - 3U)) &&
                 ((int)*puVar31 == (int)*puVar16)) {
                puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
                puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
              }
              if ((puVar16 < (uint64_t *)((int64_t)puVar33 - 1U)) &&
                 ((short)*puVar31 == (short)*puVar16)) {
                puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
                puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
              }
              if (puVar16 < puVar33) {
                puVar16 = (uint64_t *)
                          ((int64_t)puVar16 + (uint64_t)((char)*puVar31 == (char)*puVar16));
              }
              uVar20 = (int64_t)puVar16 - (int64_t)puVar28;
            }
            if ((uint64_t *)((int64_t)puVar39 + uVar20) == puVar18) {
              puVar28 = (uint64_t *)((int64_t)puVar28 + uVar20);
              puVar18 = puStack_60;
              puVar39 = puVar28;
              if (puVar28 < puVar1) {
                if (*puStack_60 == *puVar28) {
                  lVar26 = 0;
                  do {
                    puVar18 = (uint64_t *)((int64_t)param_4 + lVar26 + uVar20 + 0xc);
                    if (puVar1 <= puVar18) {
                      puVar39 = (uint64_t *)((int64_t)param_4 + lVar26 + uVar20 + 0xc);
                      puVar18 = (uint64_t *)(lVar26 + lStack_b0);
                      goto LAB_7fffa565ca13;
                    }
                    uVar15 = *puVar18;
                    puVar18 = (uint64_t *)(lStack_b0 + lVar26);
                    lVar26 = lVar26 + 8;
                  } while (*puVar18 == uVar15);
                  uVar23 = 0;
                  for (uVar15 = uVar15 ^ *puVar18; (uVar15 & 1) == 0;
                      uVar15 = uVar15 >> 1 | 0x8000000000000000) {
                    uVar23 = uVar23 + 1;
                  }
                  uVar15 = (uint64_t)(uVar23 >> 3) + lVar26;
                }
                else {
                  uVar23 = 0;
                  for (uVar15 = *puStack_60 ^ *puVar28; (uVar15 & 1) == 0;
                      uVar15 = uVar15 >> 1 | 0x8000000000000000) {
                    uVar23 = uVar23 + 1;
                  }
                  uVar15 = (uint64_t)(uVar23 >> 3);
                }
              }
              else {
LAB_7fffa565ca13:
                if ((puVar39 < puVar3) && ((int)*puVar18 == (int)*puVar39)) {
                  puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
                  puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
                }
                if ((puVar39 < puStack_a0) && ((short)*puVar18 == (short)*puVar39)) {
                  puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
                  puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
                }
                if (puVar39 < puStack_a8) {
                  puVar39 = (uint64_t *)
                            ((int64_t)puVar39 + (uint64_t)((char)*puVar18 == (char)*puVar39));
                }
                uVar15 = (int64_t)puVar39 - (int64_t)puVar28;
              }
              uVar20 = uVar20 + uVar15;
            }
            if (param_4 <= puVar2) {
              uVar15 = param_4[1];
              puVar18 = (uint64_t *)param_2[3];
              *puVar18 = *param_4;
              puVar18[1] = uVar15;
            }
            *(uint16_t *)(param_2[1] + 4) = 0;
            *(uint32_t *)param_2[1] = 1;
            if (0xffff < uVar20 + 1) {
              *(uint32_t *)(param_2 + 9) = 2;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
            }
            *(short *)(param_2[1] + 6) = (short)(uVar20 + 1);
            param_4 = (uint64_t *)((int64_t)param_4 + uVar20 + 4);
            param_2[1] = param_2[1] + 8;
            uVar20 = (uint64_t)uVar38;
            puVar18 = param_4;
            uVar23 = uVar38;
            uVar38 = uVar22;
          } while (param_4 <= puStack_80);
        }
      }
      else {
        uStack_b8 = 999999999;
        if (uVar7 < 6) {
          if (uVar7 == 5) {
            uVar20 = param_1 >> 0x18 ^ param_1;
            uVar20 = (uVar20 << 0xb | param_1 >> 0x35) ^ (uVar20 << 0x29 | uVar20 >> 0x17) ^ uVar20;
            piVar17 = (int *)((int64_t)puStack_a8 + -0xf777dd4c);
            uVar34 = (uint16_t)lVar36 - 0x54 ^ 0xb40d;
            bVar11 = (uint8_t)uStack_78 & 0xf;
            lVar26 = (*(code *)(&UNK_7fffa5198cb6 +
                               (short)~(uVar34 << bVar11 | uVar34 >> 0x10 - bVar11)))
                               (&uStack_b8,0xffffffffa30fee6e,
                                ((int64_t)piVar17 * 2 | (uint64_t)((int64_t)piVar17 < 0)) ^
                                ((int64_t)piVar17 * 0x1000 | (uint64_t)piVar17 >> 0x34) ^
                                (uint64_t)piVar17,
                                (uVar20 << 0x21 | uVar20 >> 0x1f) ^ (uVar20 << 7 | uVar20 >> 0x39) ^
                                uVar20,puVar18);
            uVar15 = lVar26 - 0x7fad762a;
          }
          else {
            bVar11 = (uint8_t)lVar36 & 0x1f;
            uVar35 = 0xa50bfffcU >> bVar11 | -0x5af40004 << 0x20 - bVar11;
            bVar11 = (uint8_t)uStack_78 & 0x1f;
            puVar28 = puVar18;
            (*(code *)((int64_t)(int)(uVar35 << bVar11 | uVar35 >> 0x20 - bVar11) + 0x7fffa54aa8ce)
            )((uint64_t)&uStack_b8 >> 0x23 ^ (uint64_t)&uStack_b8,uVar20,(uint64_t)uVar22,puVar18
              ,param_1 + 0x41763feb >> 0x31 ^ param_1 + 0x41763feb);
            uVar15 = ((int64_t)puVar28 << 0x1c | (uint64_t)puVar28 >> 0x24) ^
                     ((int64_t)puVar28 << 0x2a | (uint64_t)puVar28 >> 0x16) ^ (uint64_t)puVar28;
            uVar15 = (uVar15 << 0x14 | uVar15 >> 0x2c) ^ (uVar15 << 0x38 | uVar15 >> 8) ^ uVar15;
            uVar15 = (uVar15 << 0x28 | uVar15 >> 0x18) ^ (uVar15 << 0x30 | uVar15 >> 0x10) ^ uVar15;
            uVar15 = (uVar15 << 0x20 | uVar15 >> 0x20) ^ (uVar15 << 0x10 | uVar15 >> 0x30) ^ uVar15;
            uVar20 = uVar15 >> 0x20;
            uVar15 = uVar15 << 0x20 | uVar20;
            uVar15 = (uVar15 << 0x1c ^ uVar20 << 0x38 ^ uVar15) + 0x8c93ca4c;
          }
        }
        else {
          bVar11 = (uint8_t)lVar36 & 0x1f;
          lVar26 = (*(code *)(&UNK_7fffa5433426 +
                             (int)(-0xf85f627 -
                                  (-0x533000f9 << bVar11 | 0xaccfff07U >> 0x20 - bVar11))))
                             ((int64_t)puStack_a8 * 0x8123f93f + 0x16dee2a53c85815,
                              (param_1 << 0x3e) + param_1,
                              &UNK_7fffa5433426 +
                              (int)(-0xf85f627 -
                                   (-0x533000f9 << bVar11 | 0xaccfff07U >> 0x20 - bVar11)),
                              0x2426ca81);
          uVar15 = (uint64_t)(lVar26 * -0x131d0b969556be71) >> 8 ^ lVar26 * -0x131d0b969556be71;
          uVar15 = uVar15 >> 0x10 ^ uVar15;
          uVar15 = uVar15 >> 0x20 ^ uVar15;
          uVar37 = (uint32_t)uStack_78;
        }
        uVar34 = ~(((uint16_t)lVar36 | 1) * 0x1086);
        bVar11 = (uint8_t)uVar37;
        if ((uint16_t)(uVar34 << (bVar11 & 0xf) | uVar34 >> 0x10 - (bVar11 & 0xf)) <= uVar15) {
          if (3 < uStack_b8) {
            uVar20 = (int64_t)puVar18 +
                     (0xfb5f1fb90U - lVar36 >> (bVar11 & 0x3f) |
                     0xfb5f1fb90U - lVar36 << 0x40 - (bVar11 & 0x3f)) + (-uStack_b8 - lVar10);
            puVar28 = puStack_60;
            lVar26 = lVar10;
            if ((uint32_t)uVar20 < (uint32_t)uStack_98) {
              puVar28 = (uint64_t *)(uVar5 + uVar9);
              lVar26 = lStack_70;
            }
            uVar20 = uVar20 & 0xffffffff;
            if (puVar28 < (uint64_t *)(lVar26 + uVar20) && param_4 < puVar18) {
              puVar39 = (uint64_t *)(lVar26 + uVar20);
              while( true ) {
                puVar39 = (uint64_t *)((int64_t)puVar39 + -1);
                puVar33 = (uint64_t *)((int64_t)puVar18 + -1);
                if (*(char *)puVar33 != *(char *)puVar39) break;
                uVar15 = uVar15 + 1;
                puVar18 = puVar33;
                if ((puVar33 <= param_4) || (puVar39 <= puVar28)) break;
              }
            }
            uVar40 = (int)uStack_b8 - 3;
            uVar38 = uVar23;
          }
          goto LAB_7fffa565c3bf;
        }
        uVar29 = (int64_t)puVar18 - (int64_t)param_4;
        uVar37 = (uVar24 + 0x358c371e) * 0x10000 | uVar24 + 0x358c371e >> 0x10;
        uVar22 = (uVar24 | 1) * -0x6a756307;
        uVar22 = ~(uVar22 >> (bVar11 & 0x1f) | uVar22 << 0x20 - (bVar11 & 0x1f));
        uVar20 = (uint64_t)uVar22;
        uVar15 = uVar29 >> 8;
        if ((int64_t)(uint64_t)(uVar37 >> (bVar11 & 0x1f) | uVar37 << 0x20 - (bVar11 & 0x1f)) <
            (int64_t)(int)uVar22) {
          uVar15 = (int64_t)uVar29 >> 8;
        }
        puVar18 = (uint64_t *)((int64_t)puVar18 + uVar15 + 1);
        *(uint32_t *)(param_1 + 300) = (uint32_t)(0x7ff < uVar29);
      }
    } while (puVar18 < puStack_80);
    param_3 = puStack_90;
  }
  param_3[1] = uVar38;
  *param_3 = uVar23;
  return (int64_t)puStack_a8 - (int64_t)param_4;
code_r0x7fffa565bd7f:
  lVar26 = lVar26 + 8;
  goto LAB_7fffa565bd60;
code_r0x7fffa565c2a7:
  puVar28 = puVar28 + 1;
  lVar26 = lVar26 + 8;
  if (puVar1 <= puVar28) goto LAB_7fffa565c2b4;
  goto LAB_7fffa565c280;
}


// ============================================================================
// Function : FUN_7fffa565cb40  |  RVA: 0xeecb40  |  Size: 281 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa565cb40(void)

{
  uint16_t uVar1;
  uint64_t in_RAX;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t in_R10;
  uint8_t (*pauVar6) [16];
  uint64_t in_stack_00000028;
  
  uVar4 = (in_RAX << 4 | in_RAX >> 0x3c) ^ (in_RAX >> 1 | (uint64_t)((in_RAX & 1) != 0) << 0x3f) ^
          in_RAX;
  uVar2 = uVar4 << 8 | uVar4 >> 0x38;
  uVar3 = uVar2 ^ uVar4;
  if ((uint64_t)(int64_t)(int)((uint32_t)in_R10 + 0xe36d5946) <=
      (uint64_t)(0x7ffe03df - ((uint32_t)in_R10 ^ 0xfd9b0fb3))) {
    uVar3 = uVar2 + uVar4;
  }
  uVar3 = uVar3 ^ (uVar4 << 0x3e | uVar4 >> 2);
  pauVar6 = (uint8_t (*) [16])
            ((-0xf3fffffe0 - in_R10) * ((in_R10 ^ 0x872947f3debf056c) + 0xa2225012) *
            (in_stack_00000028 >> 0x3a ^ in_stack_00000028 >> 0x1d ^ in_stack_00000028));
  uVar3 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ (uVar3 << 0x3c | uVar3 >> 4) ^ uVar3;
  uVar3 = (uVar3 << 0x38 | uVar3 >> 8) ^ (uVar3 << 0x20 | uVar3 >> 0x20) ^ uVar3;
  uVar3 = uVar3 << 0x10 | uVar3 >> 0x30;
  if ((uVar3 == 0) || (lVar5 = *(uint32_t *)(uVar3 + 0x3c) + uVar3, lVar5 == 0)) {
    *pauVar6 = (uint8_t  [16])0x0;
  }
  else {
    uVar1 = *(uint16_t *)(lVar5 + 6);
    *(uint64_t *)*pauVar6 = lVar5 + (uint64_t)*(uint16_t *)(lVar5 + 0x14) + 0x18;
    *(uint64_t *)(*pauVar6 + 8) = (uint64_t)uVar1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa565cc60  |  RVA: 0xeecc60  |  Size: 87 bytes
// Callers  : none
// Callees  : FUN_7fffa560b2b0@0xe9b2b0
// ============================================================================
uint64_t * FUN_7fffa565cc60(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  *param_1 = &PTR_FUN_7fffa56f3928;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_7fffa560b2b0(param_2 + 8);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(uint64_t *)(param_2 + 0x18);
  uVar2 = *(uint64_t *)(param_2 + 0x20);
  *param_1 = std::system_error::vftable;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa565ccc0  |  RVA: 0xeeccc0  |  Size: 815 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa565ccc0(void)

{
  uint64_t uVar1;
  int iVar2;
  int64_t lVar3;
  uint16_t uVar4;
  uint32_t in_R10D;
  uint64_t uVar5;
  uint32_t in_R11D;
  uint32_t uVar6;
  uint8_t bVar7;
  uint32_t uVar8;
  
  uVar4 = (uint16_t)in_R11D;
  uVar8 = in_R10D << 0x16 ^ in_R10D;
  uVar6 = in_R11D | 1;
  iVar2 = (int)*(uint64_t *)
                ((uint64_t)(uint16_t)~((uVar4 + 0x8762) * 0x800 | (uint16_t)(uVar4 + 0x8762) >> 5) +
                0xff00000000);
  if (*(int *)((int64_t)(int)((uVar6 * -0x46000000 | uVar6 * 0xe6dc8dd >> 7) + 0xede10f43) +
              0x7fffa47c87e8) != iVar2) {
    (*(code *)&DAT_7ff8504ead30)(0x7fffa47bf538);
    LOCK();
    *(int *)((int64_t)(int)(in_R11D ^ 0xa2e015ba) + 0x7fffa47c7b09) = iVar2;
    UNLOCK();
  }
  iRam00007fffa47bf534 =
       *(int *)((int64_t)(int)(uVar6 * 0x2fb15b68 | uVar6 * 0x25f62b6d >> 0x1d) + 0x7fffa47cce66) +
       1;
  lVar3 = (int64_t)(int)((in_R11D ^ 0x2ccfd1e9) + 0x8e2e8854);
  uVar1 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(short)((0x2759 - uVar4) * -0x349f) + 0x7fffa4789a46) *
           0x33333334 + 0x33333334) * 5;
  uVar5 = uVar1 >> 0x20;
  *(uint8_t *)(lVar3 + 0x7fffa47905c2 + uVar5 * 4) =
       ~((~(uint8_t)in_R10D << 1 | -1 < (char)(uint8_t)in_R10D) ^
        *(uint8_t *)((int64_t)(int)(in_R11D + 0xa2dfa995) + 0x7fffa4793373));
  bVar7 = (uint8_t)(in_R10D >> 8);
  *(uint8_t *)(lVar3 + 0x7fffa47905c3 + uVar5 * 4) =
       ~((~bVar7 << 1 | -1 < (char)bVar7) ^
        *(uint8_t *)((int64_t)(short)((uVar4 ^ 0x8699) + 0x9a05) + 0x7fffa478c99d));
  bVar7 = (uint8_t)(uVar8 >> 0x10);
  *(uint8_t *)(lVar3 + 0x7fffa47905c4 + uVar5 * 4) =
       ~((~bVar7 << 1 | -1 < (char)bVar7) ^
        *(uint8_t *)((int64_t)(int)((in_R11D + 0xc4e3a2c3) * -0x3701927 + -0x5abd6b06) +
                 0x7fffa478e44d));
  *(uint8_t *)(lVar3 + 0x7fffa47905c5 + uVar5 * 4) =
       ~((~(uint8_t)(uVar8 >> 0x18) << 1 | -1 < (int)uVar8) ^
        *(uint8_t *)(((int64_t)(short)(0x72dc - uVar4) ^ 0xffffffffffffcc95U) + 0x7fffa4787cfe));
  bVar7 = (uint8_t)in_R11D;
  uVar6 = 0xe4fd1fffU >> (bVar7 & 0x1f) | -0x1b02e001 << 0x20 - (bVar7 & 0x1f);
  uRam00007fffa4784c82 = (uint8_t)(uVar1 >> 0x20);
  iVar2 = *(int *)((int64_t)(int)(uVar6 << 0x10 | uVar6 >> 0x10) + 0x7fffa47ccd4c) + -1;
  *(int *)((int64_t)(short)(0xff86U >> (bVar7 & 0xf) | -0x7a << 0x10 - (bVar7 & 0xf)) +
          0x7fffa47bf8fd) = iVar2;
  if (iVar2 == 0) {
    LOCK();
    *(uint32_t *)
     ((int64_t)(int)(0xffffe500U >> (bVar7 & 0x1f) | -0x1b00 << 0x20 - (bVar7 & 0x1f)) +
     0x7fffa47ccd29) = 0;
    UNLOCK();
    uVar4 = (uint16_t)(-0x5b83ac79 - in_R11D);
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(short)((uVar4 << 10 | uVar4 >> 6) * 0x75df) + 0x7fffa47c28a7);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa565cff0  |  RVA: 0xeecff0  |  Size: 293 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa565d2a1) overlaps instruction at (ram,0x7fffa565d29e)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa565d296) */
/* WARNING: Removing unreachable block (ram,0x7fffa565d2a3) */
/* WARNING: Removing unreachable block (ram,0x7fffa565d28e) */

void FUN_7fffa565cff0(void)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint32_t unaff_EDI;
  uint32_t uVar3;
  uint32_t in_R11D;
  uint16_t in_SS;
  uint64_t uVar4;
  
  uVar2 = (uint16_t)in_R11D | 1;
  *(uint16_t *)((int64_t)(short)(((uint16_t)in_R11D ^ 0x2e87) * 0x59) + 0x7fffa47bfa9b) = in_SS;
  uVar3 = (int)(short)~(uVar2 * -0x1c55) + 0xa47be1d6;
  uVar4 = (*(code *)((int64_t)(int)((in_R11D | 1) * 0x70000000 | (in_R11D | 1) * -0x11468919 >> 4)
                    + 0x7fffa561359d))();
  if ((int)(uVar3 << 0x1a ^ uVar3) < 0) {
    uVar4 = (*(code *)(&UNK_7fffa5090e59 + (int)(0x7c020e3f - in_R11D)))();
  }
  uVar4 = (*(code *)((int64_t)(short)(uVar2 * 0x4680 | (uint16_t)(uVar2 * 0x1234) >> 0xb) +
                    0x7fffa52d90ae))(uVar4,&IMAGE_DOS_HEADER_7fffa4770000);
  (*(code *)(&UNK_7fffa518afe7 + (int)((in_R11D ^ 0x73694a6e) + 0xf0935883)))
            (uVar4,&UNK_7fffa518afe7 + (int)((in_R11D ^ 0x73694a6e) + 0xf0935883),&UNK_7fffa518afe7,
             (in_R11D ^ 0x747b92b2) + 0x55323004);
  bVar1 = (uint8_t)in_R11D & 0xf;
  if (*(int64_t *)
       (*(int64_t *)((uint64_t)(uint16_t)(0x6000 << bVar1 | 0x6000U >> 0x10 - bVar1) + 0xff00000000)
       + 0x30) == 0x534eac1181600d5f) {
    IMAGE_DOS_HEADER_7fffa4770000.e_magic[0] = -0x31;
    IMAGE_DOS_HEADER_7fffa4770000.e_magic[1] = -1;
    IMAGE_DOS_HEADER_7fffa4770000.e_cblp = 0xffff;
                    /* WARNING: Read-only address (ram,0x7fffa4770033) is written */
                    /* WARNING: Read-only address (ram,0x7fffa4770000) is written */
    IMAGE_DOS_HEADER_7fffa4770000.e_res2_10_._11_4_ = unaff_EDI;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa565d310  |  RVA: 0xeed310  |  Size: 109 bytes
// Callers  : FUN_7fffa54037a0@0xc937a0, FUN_7fffa55f6f60@0xe86f60
// Callees  : FUN_7fffa561db20@0xeadb20, FUN_7fffa54539d0@0xce39d0, FUN_7fffa524fccc@0xadfccc
// ============================================================================
uint64_t FUN_7fffa565d310(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  code *pcVar1;
  uint32_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar2 = FUN_7fffa561db20(param_3);
  if (*(int *)(param_2 + 0x48) == 0) {
    lVar3 = FUN_7fffa54539d0();
    if (*(int *)(lVar3 + 0x78) != -2) {
      lVar3 = FUN_7fffa54539d0();
      uVar2 = *(uint32_t *)(lVar3 + 0x78);
      lVar3 = FUN_7fffa54539d0();
      *(uint32_t *)(lVar3 + 0x78) = 0xfffffffe;
    }
    return (uint64_t)uVar2;
  }
  lVar3 = FUN_7fffa54539d0();
  if (*(int *)(lVar3 + 0x78) == -2) {
    return (uint64_t)(*(int *)(param_2 + 0x48) - 2);
  }
  FUN_7fffa524fccc();
  pcVar1 = (code *)__debugbreak();
  uVar4 = (*pcVar1)();
  return uVar4;
}


// ============================================================================
// Function : FUN_7fffa565d380  |  RVA: 0xeed380  |  Size: 69 bytes
// Callers  : FUN_7fffa55cb0b4@0xe5b0b4
// Callees  : FUN_7fffa54e570c@0xd7570c, FUN_7fffa5476b88@0xd06b88, FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa565d380(uint64_t param_1,uint32_t *param_2,uint64_t *param_3,uint32_t *param_4
                     )

{
  FUN_7fffa5476b88(*param_2);
  FUN_7fffa54e570c(*(uint64_t *)*param_3,**(uint64_t **)param_3[1]);
  FUN_7fffa4f54478(*param_4);
  return;
}


// ============================================================================
// Function : FUN_7fffa565d3d0  |  RVA: 0xeed3d0  |  Size: 311 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa565d3d0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint8_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(uint8_t *)param_1 = *(uint8_t *)param_2;
    return;
  case 2:
    *(uint16_t *)param_1 = *(uint16_t *)param_2;
    return;
  case 3:
    uVar3 = *(uint8_t *)((int64_t)param_2 + 2);
    *(uint16_t *)param_1 = *(uint16_t *)param_2;
    *(uint8_t *)((int64_t)param_1 + 2) = uVar3;
    return;
  case 4:
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    return;
  case 5:
    uVar3 = *(uint8_t *)((int64_t)param_2 + 4);
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    *(uint8_t *)((int64_t)param_1 + 4) = uVar3;
    return;
  case 6:
    uVar4 = *(uint16_t *)((int64_t)param_2 + 4);
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    *(uint16_t *)((int64_t)param_1 + 4) = uVar4;
    return;
  case 7:
    uVar4 = *(uint16_t *)((int64_t)param_2 + 4);
    uVar3 = *(uint8_t *)((int64_t)param_2 + 6);
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    *(uint16_t *)((int64_t)param_1 + 4) = uVar4;
    *(uint8_t *)((int64_t)param_1 + 6) = uVar3;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar3 = *(uint8_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(uint8_t *)(param_1 + 1) = uVar3;
    return;
  case 10:
    uVar4 = *(uint16_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(uint16_t *)(param_1 + 1) = uVar4;
    return;
  case 0xb:
    uVar4 = *(uint16_t *)(param_2 + 1);
    uVar3 = *(uint8_t *)((int64_t)param_2 + 10);
    *param_1 = *param_2;
    *(uint16_t *)(param_1 + 1) = uVar4;
    *(uint8_t *)((int64_t)param_1 + 10) = uVar3;
    return;
  case 0xc:
    uVar5 = *(uint32_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar5;
    return;
  case 0xd:
    uVar5 = *(uint32_t *)(param_2 + 1);
    uVar3 = *(uint8_t *)((int64_t)param_2 + 0xc);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar5;
    *(uint8_t *)((int64_t)param_1 + 0xc) = uVar3;
    return;
  case 0xe:
    uVar5 = *(uint32_t *)(param_2 + 1);
    uVar4 = *(uint16_t *)((int64_t)param_2 + 0xc);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar5;
    *(uint16_t *)((int64_t)param_1 + 0xc) = uVar4;
    return;
  case 0xf:
    uVar5 = *(uint32_t *)(param_2 + 1);
    uVar4 = *(uint16_t *)((int64_t)param_2 + 0xc);
    uVar3 = *(uint8_t *)((int64_t)param_2 + 0xe);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar5;
    *(uint16_t *)((int64_t)param_1 + 0xc) = uVar4;
    *(uint8_t *)((int64_t)param_1 + 0xe) = uVar3;
    return;
  }
  if (param_3 < 0x21) {
    uVar6 = param_2[1];
    puVar13 = (uint64_t *)((int64_t)param_2 + (param_3 - 0x10));
    uVar7 = *puVar13;
    uVar8 = puVar13[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    param_1 = (uint64_t *)((int64_t)param_1 + (param_3 - 0x10));
    *param_1 = uVar7;
    param_1[1] = uVar8;
    return;
  }
  puVar13 = (uint64_t *)((int64_t)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar13 = param_1;
  }
  if (param_1 < puVar13) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    lVar16 = (int64_t)param_2 - (int64_t)param_1;
    puVar13 = (uint64_t *)((int64_t)param_1 + lVar16 + (param_3 - 0x10));
    uVar8 = *puVar13;
    uVar9 = puVar13[1];
    puVar12 = (uint64_t *)((int64_t)param_1 + (param_3 - 0x10));
    uVar14 = param_3 - 0x10;
    puVar13 = puVar12;
    uVar17 = uVar8;
    uVar18 = uVar9;
    if (((uint64_t)puVar12 & 0xf) != 0) {
      puVar13 = (uint64_t *)((uint64_t)puVar12 & 0xfffffffffffffff0);
      uVar17 = *(uint64_t *)((int64_t)puVar13 + lVar16);
      uVar18 = ((uint64_t *)((int64_t)puVar13 + lVar16))[1];
      *puVar12 = uVar8;
      *(uint64_t *)((int64_t)param_1 + (param_3 - 8)) = uVar9;
      uVar14 = (int64_t)puVar13 - (int64_t)param_1;
    }
    uVar15 = uVar14 >> 7;
    if (uVar15 != 0) {
      *puVar13 = uVar17;
      puVar13[1] = uVar18;
      puVar12 = puVar13;
      while( true ) {
        puVar1 = (uint64_t *)((int64_t)puVar12 + lVar16 + -0x10);
        uVar8 = puVar1[1];
        puVar13 = (uint64_t *)((int64_t)puVar12 + lVar16 + -0x20);
        uVar9 = *puVar13;
        uVar17 = puVar13[1];
        puVar13 = puVar12 + -0x10;
        puVar12[-2] = *puVar1;
        puVar12[-1] = uVar8;
        puVar12[-4] = uVar9;
        puVar12[-3] = uVar17;
        puVar1 = (uint64_t *)((int64_t)puVar12 + lVar16 + -0x30);
        uVar8 = puVar1[1];
        puVar2 = (uint64_t *)((int64_t)puVar12 + lVar16 + -0x40);
        uVar9 = *puVar2;
        uVar17 = puVar2[1];
        uVar15 = uVar15 - 1;
        puVar12[-6] = *puVar1;
        puVar12[-5] = uVar8;
        puVar12[-8] = uVar9;
        puVar12[-7] = uVar17;
        puVar1 = (uint64_t *)((int64_t)puVar12 + lVar16 + -0x50);
        uVar8 = puVar1[1];
        puVar2 = (uint64_t *)((int64_t)puVar12 + lVar16 + -0x60);
        uVar9 = *puVar2;
        uVar17 = puVar2[1];
        puVar12[-10] = *puVar1;
        puVar12[-9] = uVar8;
        puVar12[-0xc] = uVar9;
        puVar12[-0xb] = uVar17;
        puVar1 = (uint64_t *)((int64_t)puVar12 + lVar16 + -0x70);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        uVar17 = *(uint64_t *)((int64_t)puVar13 + lVar16);
        uVar18 = ((uint64_t *)((int64_t)puVar13 + lVar16))[1];
        if (uVar15 == 0) break;
        puVar12[-0xe] = uVar8;
        puVar12[-0xd] = uVar9;
        *puVar13 = uVar17;
        puVar12[-0xf] = uVar18;
        puVar12 = puVar13;
      }
      puVar12[-0xe] = uVar8;
      puVar12[-0xd] = uVar9;
      uVar14 = uVar14 & 0x7f;
    }
    for (uVar15 = uVar14 >> 4; uVar15 != 0; uVar15 = uVar15 - 1) {
      *puVar13 = uVar17;
      puVar13[1] = uVar18;
      puVar13 = puVar13 + -2;
      uVar17 = *(uint64_t *)((int64_t)puVar13 + lVar16);
      uVar18 = ((uint64_t *)((int64_t)puVar13 + lVar16))[1];
    }
    if ((uVar14 & 0xf) != 0) {
      *param_1 = uVar6;
      param_1[1] = uVar7;
    }
    *puVar13 = uVar17;
    puVar13[1] = uVar18;
    return;
  }
  if (0x7ff < param_3) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(uint8_t *)param_1 = *(uint8_t *)param_2;
      param_2 = (uint64_t *)((int64_t)param_2 + 1);
      param_1 = (uint64_t *)((int64_t)param_1 + 1);
    }
    return;
  }
  uVar6 = *param_2;
  if (0x80 < param_3) {
    lVar16 = ((uint64_t)param_1 & 0xf) - 0x10;
    param_1 = (uint64_t *)((int64_t)param_1 - lVar16);
    param_2 = (uint64_t *)((int64_t)param_2 - lVar16);
    param_3 = param_3 + lVar16;
    if (0x80 < param_3) {
      do {
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar9 = param_2[3];
        uVar17 = param_2[4];
        uVar18 = param_2[5];
        uVar10 = param_2[6];
        uVar11 = param_2[7];
        *param_1 = *param_2;
        param_1[1] = uVar7;
        param_1[2] = uVar8;
        param_1[3] = uVar9;
        param_1[4] = uVar17;
        param_1[5] = uVar18;
        param_1[6] = uVar10;
        param_1[7] = uVar11;
        uVar7 = param_2[9];
        uVar8 = param_2[10];
        uVar9 = param_2[0xb];
        uVar17 = param_2[0xc];
        uVar18 = param_2[0xd];
        uVar10 = param_2[0xe];
        uVar11 = param_2[0xf];
        param_1[8] = param_2[8];
        param_1[9] = uVar7;
        param_1[10] = uVar8;
        param_1[0xb] = uVar9;
        param_1[0xc] = uVar17;
        param_1[0xd] = uVar18;
        param_1[0xe] = uVar10;
        param_1[0xf] = uVar11;
        param_1 = param_1 + 0x10;
        param_2 = param_2 + 0x10;
        param_3 = param_3 - 0x80;
      } while (0x7f < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7fffa565d5f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_7fffa4770000.e_magic +
            *(uint32_t *)(&UNK_7fffa5894780 + (param_3 + 0xf >> 4) * 4)))(uVar6);
  return;
}


// ============================================================================
// Function : FUN_7fffa56605e8  |  RVA: 0xef05e8  |  Size: 152 bytes
// Callers  : FUN_7fffa517bdb8@0xa0bdb8
// Callees  : FUN_7fffa565b84c@0xeeb84c, FUN_7fffa5181628@0xa11628
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_7fffa56605e8(uint32_t param_1)

{
  uint32_t uVar1;
  int64_t lVar2;
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
    param_1 = PTR_PTR_7fffa47808e8._0_4_;
  }
  uVar1 = FUN_7fffa565b84c(param_1,alStack_48);
  if (cStack_20 == '\x02') {
    *(uint32_t *)(alStack_48[0] + 0x3a8) = *(uint32_t *)(alStack_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (cStack_18 != '\0') {
    lVar2 = FUN_7fffa5181628(alStack_48);
    *(uint32_t *)(lVar2 + 0x20) = uStack_1c;
  }
  if (cStack_10 != '\0') {
    lVar2 = FUN_7fffa5181628(alStack_48);
    *(uint32_t *)(lVar2 + 0x24) = uStack_14;
  }
  return uVar1;
}


// ============================================================================
// Function : FUN_7fffa5660680  |  RVA: 0xef0680  |  Size: 53 bytes
// Callers  : FUN_7fffa4fd1100@0x861100
// Callees  : FUN_7fffa50082d0@0x8982d0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5660680(int64_t param_1,int64_t *param_2,int64_t param_3)

{
  int64_t lVar1;
  
  if (((uint8_t *)*param_2 != (&PTR_PTR_7fffa4782608)[param_3]) &&
     ((_DAT_7fffa4780900 & *(uint32_t *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_7fffa50082d0();
    *param_2 = lVar1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa56606b8  |  RVA: 0xef06b8  |  Size: 388 bytes
// Callers  : FUN_7fffa55ca84c@0xe5a84c, FUN_7fffa4f445c0@0x7d45c0
// Callees  : FUN_7fffa5130600@0x9c0600, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa51450e0@0x9d50e0, FUN_7fffa52d0cd4@0xb60cd4, FUN_7fffa5155790@0x9e5790
// ============================================================================
uint64_t FUN_7fffa56606b8(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  code *pcVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  
  uVar5 = 0;
  lVar3 = -1;
  do {
    lVar6 = lVar3;
    lVar3 = lVar6 + 1;
  } while (*(char *)(param_1 + lVar3) != '\0');
  uVar4 = lVar6 + 2;
  if (~param_3 < uVar4) {
    return 0xc;
  }
  lVar6 = param_3 + 1 + uVar4;
  lVar3 = FUN_7fffa5130600(lVar6);
  if (((param_3 != 0) && (iVar2 = FUN_7fffa51450e0(lVar3,lVar6,param_2,param_3), iVar2 != 0)) ||
     (iVar2 = FUN_7fffa51450e0(lVar3 + param_3,lVar6 - param_3,param_1,uVar4), iVar2 != 0)) {
    FUN_7fffa52d0cd4(0,0,0,0,0);
    pcVar1 = (code *)__debugbreak();
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      lVar6 = FUN_7fffa5130600(4,8);
      *param_4 = lVar6;
      FUN_7fffa52d8dd0(0);
      lVar6 = *param_4;
      if (lVar6 != 0) {
        param_4[1] = lVar6;
        param_4[2] = lVar6 + 0x20;
        goto LAB_7fffa566080e;
      }
    }
    else {
      uVar4 = param_4[2] - *param_4 >> 3;
      if (uVar4 < 0x8000000000000000) {
        lVar6 = FUN_7fffa5155790(*param_4,uVar4 * 2,8);
        if (lVar6 != 0) {
          *param_4 = lVar6;
          param_4[1] = lVar6 + uVar4 * 8;
          param_4[2] = lVar6 + uVar4 * 0x10;
          FUN_7fffa52d8dd0(0);
          goto LAB_7fffa566080e;
        }
        FUN_7fffa52d8dd0(0);
      }
    }
    uVar5 = 0xc;
    FUN_7fffa52d8dd0(lVar3);
  }
  else {
LAB_7fffa566080e:
    *(int64_t *)param_4[1] = lVar3;
    param_4[1] = param_4[1] + 8;
  }
  FUN_7fffa52d8dd0(0);
  return uVar5;
}


// ============================================================================
// Function : FUN_7fffa566083c  |  RVA: 0xef083c  |  Size: 16 bytes
// Callers  : FUN_7fffa50cad90@0x95ad90
// Callees  : FUN_7fffa5213f88@0xaa3f88
// ============================================================================
uint8_t FUN_7fffa566083c(void)

{
  FUN_7fffa5213f88();
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5660850  |  RVA: 0xef0850  |  Size: 187 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t * FUN_7fffa5660850(uint64_t *param_1,int param_2)

{
  *param_1 = &PTR_FUN_7fffa56f3928;
  FUN_7fffa5155450(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_7fffa55eeda0(param_1,0x18);
  }
  return param_1;
}


// ============================================================================
// Function : Unwind@7fffa5660910  |  RVA: 0xef0910  |  Size: 49 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5660910(void)

{
  code *pcVar1;
  
  Unwind_7fffa56253e0();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5660944  |  RVA: 0xef0944  |  Size: 227 bytes
// Callers  : none
// Callees  : FUN_7fffa56091b0@0xe991b0, FUN_7fffa50082b4@0x8982b4, FUN_7fffa55d84cc@0xe684cc, FUN_7fffa4ee8f10@0x778f10, FUN_7fffa55f3250@0xe83250
// ============================================================================
void FUN_7fffa5660944(uint32_t param_1,uint32_t param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  bool bVar6;
  uint32_t auStackX_10 [2];
  int aiStackX_18 [2];
  uint8_t auStackX_20 [8];
  uint8_t auStack_38 [4];
  uint32_t uStack_34;
  uint32_t auStack_30 [2];
  uint64_t uStack_28;
  uint32_t *puStack_20;
  int *piStack_18;
  uint8_t *puStack_10;
  
  uStack_28 = 0xfffffffffffffffe;
  auStackX_10[0] = param_2;
  aiStackX_18[0] = param_3;
  if (param_3 == 0) {
    psVar4 = (short *)(*(code *)&DAT_7ff84ea3b600)(0);
    if ((((psVar4 != (short *)0x0) && (*psVar4 == 0x5a4d)) &&
        (piVar5 = (int *)((int64_t)*(int *)(psVar4 + 0x1e) + (int64_t)psVar4), *piVar5 == 0x4550))
       && ((((short)piVar5[6] == 0x20b && (0xe < (uint32_t)piVar5[0x21])) && (piVar5[0x3e] != 0)))) {
      FUN_7fffa55d84cc(param_1);
    }
  }
  auStackX_20[0] = 0;
  puStack_20 = auStackX_10;
  piStack_18 = aiStackX_18;
  puStack_10 = auStackX_20;
  uStack_34 = 2;
  auStack_30[0] = 2;
  FUN_7fffa55f3250(auStack_38,auStack_30,&puStack_20,&uStack_34);
  if (aiStackX_18[0] == 0) {
    iVar3 = FUN_7fffa4ee8f10();
    if (iVar3 == 1) {
      bVar6 = false;
    }
    else {
      cVar2 = FUN_7fffa50082b4();
      bVar6 = cVar2 == '\0';
    }
    if (aiStackX_18[0] == 0) {
      FUN_7fffa56091b0(param_1,bVar6);
      pcVar1 = (code *)__debugbreak();
      (*pcVar1)();
      return;
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5660a30  |  RVA: 0xef0a30  |  Size: 26426 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa5660a30(int param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4,
                          uint64_t param_5,uint64_t *param_6,uint32_t param_7,uint64_t param_8)

{
  uint8_t *pbVar1;
  uint8_t *pbVar2;
  short sVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint8_t bVar9;
  uint8_t bVar10;
  int iVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  uint32_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint32_t uVar25;
  uint64_t in_R10;
  int64_t lVar26;
  uint8_t bVar27;
  uint8_t bVar28;
  uint32_t uVar29;
  int64_t in_R11;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint64_t uVar36;
  uint64_t *puVar37;
  uint64_t uVar38;
  uint64_t uVar39;
  int64_t lVar40;
  uint8_t bVar41;
  uint64_t uVar42;
  uint64_t uVar43;
  bool bVar44;
  uint8_t bStack_150;
  uint64_t *puStack_130;
  uint64_t *puStack_f8;
  uint8_t bStack_b0;
  uint64_t *puStack_90;
  uint64_t uStack_58;
  
  uVar18 = (uint32_t)param_8;
  uVar22 = (in_R10 << 0x12 | in_R10 >> 0x2e) ^ (in_R10 << 0x3c | in_R10 >> 4) ^ in_R10;
  uVar22 = (uVar22 << 0x24 | uVar22 >> 0x1c) ^ (uVar22 << 0x38 | uVar22 >> 8) ^ uVar22;
  uVar19 = uVar18 | 1;
  uVar12 = param_2 - (int64_t)param_3;
  uVar22 = (uVar22 << 8 | uVar22 >> 0x38) ^ (uVar22 << 0x30 | uVar22 >> 0x10) ^ uVar22;
  lVar40 = (~param_5 << 0x3d) + ~param_5;
  uVar6 = (uVar22 << 0x20 | uVar22 >> 0x20) ^ (uVar22 << 0x10 | uVar22 >> 0x30) ^ uVar22;
  uVar6 = (uVar6 & 0xffffffff) >> 0x15 ^ (uVar6 << 0x20 | uVar6 >> 0x20);
  bVar10 = (uint8_t)param_8;
  uVar4 = (uint16_t)param_8;
  if (param_1 != 0) {
    uVar21 = param_7 << 0x17 | param_7 >> 9;
    uVar29 = 0x4b367740 << (bVar10 & 0x1f) | 0x4b367740U >> 0x20 - (bVar10 & 0x1f);
    uVar25 = uVar21 | param_7;
    if ((uVar29 << 0xf | uVar29 >> 0x11) <
        (-0x262dd4f0 << (bVar10 & 0x1f) | 0xd9d22b10U >> 0x20 - (bVar10 & 0x1f))) {
      uVar25 = uVar21 ^ param_7;
    }
    lVar40 = uVar12 * 0x35;
    if ((uint64_t)(uVar19 * 0x2408ff28 + 0x5745d5cd) <=
        (uint64_t)(int64_t)(int)(uVar18 + 0x740e2ac4 ^ 0xdac3023f)) {
      lVar40 = uVar12 << 0x35;
    }
    lVar40 = lVar40 + uVar12 + 0x5cdb28f9;
    (*(code *)((int64_t)(int)((uVar18 + 0x9217896c) * 0x35ec0de3) + 0x7fffa55a66eb))
              (lVar40,uVar25 ^ (param_7 << 0x10 | param_7 >> 0x10),param_6,uVar6);
    uVar12 = lVar40 * 0x3ffffff8000001 + 0xb8b12188e9dbcedf;
    goto LAB_7fffa5660bef;
  }
  uVar30 = *param_6;
  uVar21 = (uint32_t)uVar30 & 0xff;
  uVar25 = (uint32_t)uVar6;
  if ((param_7 & 1) == 0) {
    if (uVar12 < 8) {
      return 0;
    }
    if (((uint64_t)
         (((uVar18 ^ 0xfc11d238) << 1 | (uint32_t)((int)(uVar18 ^ 0xfc11d238) < 0)) + 0x19a53f83) ^
        (uVar12 << 0x38 | uVar12 >> 8)) -
        (uint64_t)(((uVar18 + 0xdf00591e) * 0x800000 | uVar18 + 0xdf00591e >> 9) + 0xbb096e04) ==
        0x7ffffff861e20aa) {
      return 0;
    }
    puVar7 = (uint64_t *)((int64_t)param_3 + (uVar12 - 8));
    if (uVar12 < ((uVar30 & 0xff) * uVar6 >> 3) + 8 || 0xb < uVar21) {
      if ((uVar6 & 3) == 0) {
        uStack_58 = 0;
        puStack_90 = (uint64_t *)0x0;
        puVar37 = param_3;
      }
      else {
        if ((uVar25 & 3) ==
            (uint32_t)(uint16_t)((uVar4 ^ 0x206b) << 1 | (uint16_t)((short)(uVar4 ^ 0x206b) < 0))) {
          uVar21 = 0;
          puStack_90 = (uint64_t *)0;
          uVar12 = uVar6;
        }
        else {
          uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar6) + 1];
          uVar21 = (int)uVar22 + (int)param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar6) + 1];
          uVar12 = uVar6 - 2;
          uVar30 = (param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar6) + 1] & 0xffffffffffffff00) >>
                   ((uint8_t)uVar22 & 0x3f);
          puStack_90 = (uint64_t *)(uVar30 | uVar22 & 0xffffffffffffff00);
          if ((uint64_t)(int64_t)(int)((uVar18 ^ 0x4d3657d8) + 0x9bdb12f5) <=
              (uint64_t)(uVar18 + 0x31c35438)) {
            puStack_90 = (uint64_t *)((uVar22 & 0xffffffffffffff00) * uVar30);
          }
        }
        if ((uVar6 & 1) != 0) {
          pbVar1 = (uint8_t *)(lVar40 + -1 + uVar12);
          uVar12 = uVar12 - 1;
          uVar22 = param_6[(uint64_t)*pbVar1 + 1];
          uVar21 = uVar21 + (int)uVar22;
          puStack_90 = (uint64_t *)
                       ((uint64_t)puStack_90 >> ((uint8_t)uVar22 & 0x3f) | uVar22 & 0xffffffffffffff00
                       );
        }
        uVar25 = (uint32_t)uVar12;
        uStack_58 = (uint64_t)(uVar21 & 7);
        puVar37 = (uint64_t *)((uint64_t)((uVar21 & 0xff) >> 3) + (int64_t)param_3);
        if (puVar7 < puVar37) {
          puVar37 = puVar7;
        }
        *param_3 = (uint64_t)puStack_90 >> (-(char)uVar21 & 0x3fU);
      }
      if ((uVar25 & 7) == (uVar18 + 0x5f95 & 0xffff)) {
        puStack_f8 = puVar37;
      }
      else {
        lVar26 = (int64_t)(int)uVar25;
        uVar25 = uVar25 - 4;
        bVar41 = *(uint8_t *)(lVar40 + -3 + lVar26);
        uVar12 = (int64_t)(char)bVar41;
        if ((uint64_t)(uVar19 * 0x1a680000 | uVar19 * -0x3400bcb3 >> 0xd) <=
            (uint64_t)(int64_t)(int)(uVar18 ^ 0xb4ba9cd7)) {
          uVar12 = (uint64_t)bVar41;
        }
        uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + lVar26) + 1];
        uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + lVar26) + 1];
        uVar12 = param_6[uVar12 + 1];
        bVar41 = (uint8_t)uVar12;
        uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + lVar26) + 1];
        if (uVar19 * -0xeabfe13 == -0xdcd11f1) {
          uVar39 = ((uint64_t)puStack_90 >> ((uint8_t)uVar13 & 0x3f) | uVar13) >>
                   ((uint8_t)uVar30 & 0x3f) | uVar30;
          uVar34 = uVar22 + uStack_58 + uVar30 + uVar13 + uVar12;
          uVar19 = (uint32_t)uVar34;
          uVar34 = uVar34 & 0xff;
          puStack_f8 = (uint64_t *)((uVar34 >> 3) + (int64_t)puVar37);
          if (puVar7 < puStack_f8) {
            puStack_f8 = puVar7;
          }
          uVar30 = uVar39 >> (bVar41 & 0x3f);
          if (uVar18 != 0xa2aa06b) {
            uVar30 = uVar39 << (bVar41 & 0x3f);
          }
        }
        else {
          uVar34 = uStack_58 + uVar22 + uVar30 + uVar13 + uVar12;
          uVar19 = (uint32_t)uVar34;
          uVar34 = uVar34 & 0xff;
          puStack_f8 = (uint64_t *)((uVar34 >> 3) + (int64_t)puVar37);
          if ((int64_t)(uint64_t)((uVar18 + 0xd6a4871) * -0x59e0ac87) <
              (int64_t)
              (int)(uVar18 + 0xdc697000 >> 1 | (uint32_t)((uVar18 + 0xdc697000 & 1) != 0) << 0x1f) !=
              puVar7 < puStack_f8) {
            puStack_f8 = puVar7;
          }
          uVar30 = (((uint64_t)puStack_90 >> ((uint8_t)uVar13 & 0x3f) | uVar13) >> (uVar30 & 0xff) |
                   uVar30) >> (bVar41 & 0x3f);
        }
        puStack_90 = (uint64_t *)
                     ((uVar30 | uVar12) >> ((uint8_t)uVar22 & 0x3f) | uVar22 & 0xffffffffffffff00);
        uStack_58 = (uint64_t)(uVar19 & 7);
        *puVar37 = (uint64_t)puStack_90 >> (-(char)uVar34 & 0x3fU);
      }
      if (0 < (int)uVar25) {
        uVar12 = (uint64_t)uVar25;
        while( true ) {
          if (((uVar18 + 0xc7a3db8f) * 0x8000000 | uVar18 + 0xc7a3db8f >> 5) ==
              (-0x26164b43 << (bVar10 & 0x1f) | 0xd9e9b4bdU >> 0x20 - (bVar10 & 0x1f))) {
            uVar19 = (0xf0c2e198 - uVar18) * 0x10000 | 0xf0c2e198 - uVar18 >> 0x10;
          }
          else {
            uVar19 = (uVar18 + 0xef9846cb) * -0x3fffff6f ^ 0xf8721ef5;
          }
          uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
          uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + uVar12) + 1];
          uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + uVar12) + 1];
          uVar25 = 0xb20ffc86 - uVar19 ^ 0xfcdf1157;
          uVar39 = (uint64_t)puStack_90 ^ uVar22 & 0xff;
          if ((int64_t)(int)(~(uVar18 ^ 0x184b49cb) << 5 | ~(uVar18 ^ 0x184b49cb) >> 0x1b) <
              (int64_t)(uint64_t)(~(uVar19 + 0x76f45799) + uVar18)) {
            uVar39 = (uint64_t)puStack_90 >> ((uint8_t)uVar22 & 0x3f);
          }
          uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar12) + 1];
          uVar15 = uStack_58 + uVar22 + uVar13 + uVar30 + uVar34;
          uVar13 = (((uVar39 | uVar22) >> ((uint8_t)uVar34 & 0x3f) | uVar34) >> ((uint8_t)uVar30 & 0x3f) |
                   uVar30) >> ((uint8_t)uVar13 & 0x3f) | uVar13 & 0xffffffffffffff00;
          *puStack_f8 = uVar13 >> (-(char)uVar15 & 0x3fU);
          uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + uVar12) + 1];
          uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1];
          puVar37 = (uint64_t *)(((uVar15 & 0xff) >> 3) + (int64_t)puStack_f8);
          if (puVar7 < puVar37) {
            puVar37 = puVar7;
          }
          uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + uVar12) + 1];
          bVar41 = (uint8_t)uVar39 - 1;
          if (((0xf1b6b63 - uVar19) * 0x10000 | 0xf1b6b63 - uVar19 >> 0x10) <=
              ~(uVar25 << (bVar10 & 0x1f) | uVar25 >> 0x20 - (bVar10 & 0x1f))) {
            bVar41 = (uint8_t)uVar39;
          }
          uVar34 = uVar30 + uVar22 +
                   param_6[(uint64_t)*(uint8_t *)((short)~(uVar4 + 0x5f99) + lVar40 + uVar12) + 1] +
                   uVar39;
          uVar15 = ((uint32_t)uVar15 & 7) + uVar34;
          puStack_f8 = (uint64_t *)(((uVar15 & 0xff) >> 3) + (int64_t)puVar37);
          uStack_58 = (uint64_t)((uint32_t)uVar15 & 7);
          if (puVar7 < puStack_f8) {
            puStack_f8 = puVar7;
          }
          uVar31 = uVar13 >> ((uint8_t)uVar34 & 0x3f);
          if ((uint64_t)(int64_t)(int)((uVar18 - uVar19) + -0x5fd42848) <
              (uint64_t)(((uVar19 + 0xe1db462f) * 0x57c25551 - uVar18) + 0xf46f775f)) {
            uVar31 = uVar34 & 0xff | uVar13;
          }
          puStack_90 = (uint64_t *)
                       (uVar31 | ((param_6[(uint64_t)
                                           *(uint8_t *)((short)~(uVar4 + 0x5f99) + lVar40 + uVar12) + 1
                                          ] >> ((uint8_t)uVar30 & 0x3f) | uVar30) >> (uVar22 & 0xff) |
                                 uVar22) >> (bVar41 & 0x3f) | uVar39 & 0xffffffffffffff00);
          *puVar37 = (uint64_t)puStack_90 >> (-(char)uVar15 & 0x3fU);
          if (uVar12 < 9) break;
          uVar12 = uVar12 - 8;
        }
      }
    }
    else {
      puStack_f8 = param_3;
      if (uVar21 < 9) {
        if (uVar21 != 8) {
          if (uVar21 == (uVar18 + 0x5f9c & 0xffff)) {
            uVar12 = uVar6;
            if ((uVar6 & 7) == 0) {
              uStack_58 = 0;
              puStack_90 = (uint64_t *)0x0;
            }
            else {
              if ((uVar25 & 7) == 1) {
                puStack_90 = (uint64_t *)0x0;
                uVar21 = 0;
              }
              else {
                uVar25 = uVar25 & 6;
                puStack_90 = (uint64_t *)0x0;
                lVar26 = 0;
                do {
                  uVar25 = uVar25 - 2;
                  uVar12 = uVar12 - 2;
                  uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + uVar12) + 1];
                  uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + 1 + uVar12) + 1];
                  lVar26 = lVar26 + uVar22 + uVar30;
                  uVar21 = (uint32_t)lVar26;
                  uVar13 = uVar30 ^ 0xffffffffffffff00;
                  if (0x16116bec - uVar18 <=
                      ((0xf70c7264U >> (bVar10 & 0x1f) | -0x8f38d9c << 0x20 - (bVar10 & 0x1f)) ^
                      0xed046c14)) {
                    uVar13 = uVar30 & 0xffffffffffffff00;
                  }
                  puStack_90 = (uint64_t *)
                               ((uVar13 | (uint64_t)puStack_90 >> ((uint8_t)uVar30 & 0x3f)) >>
                                (uVar22 & 0xff) | uVar22 & 0xffffffffffffff00);
                } while (uVar25 != 0);
              }
              if ((uVar6 & 1) != 0) {
                uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
                uVar12 = uVar12 - 1;
                uVar21 = uVar21 + (int)uVar22;
                puStack_90 = (uint64_t *)
                             ((uint64_t)puStack_90 >> ((uint8_t)uVar22 & 0x3f) |
                             uVar22 & 0xffffffffffffff00);
              }
              uStack_58 = (uint64_t)(uVar21 & 7);
              *param_3 = (uint64_t)puStack_90 >> (-(char)uVar21 & 0x3fU);
              puStack_f8 = (uint64_t *)((uint64_t)((uVar21 & 0xff) >> 3) + (int64_t)param_3);
            }
            if ((uVar12 & 0xf) != 0) {
              lVar26 = (int64_t)(int)uVar12;
              uVar12 = lVar26 - 8;
              if (uVar19 * 0x58568c30 == -0x1c5567f0) {
                uVar25 = 0x3caafc72 - uVar18;
              }
              else {
                uVar25 = uVar19 * -0x362e6e30 + 0x4f23250e;
              }
              uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + lVar26) + 1];
              uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + uVar12) + 1];
              bVar41 = (uint8_t)uVar25 & 0x1f;
              uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + lVar26) + 1];
              uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + lVar26) + 1];
              uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + lVar26) + 1];
              uVar21 = (0x6a342946 - uVar25) * 0x42af9d63;
              uVar15 = ((uint64_t)puStack_90 >> ((uint8_t)uVar13 & 0x3f) | uVar13) >>
                       ((uint8_t)uVar39 & 0x3f) | uVar39;
              uVar31 = uVar15 >> ((uint8_t)uVar34 & 0x3f);
              if ((uint64_t)
                  (int64_t)(int)(((uVar18 ^ 0xfae7152e) + 0x4a03387a ^ 0xb8d70f22) + uVar25) <=
                  (uint64_t)~((0x4cc4ac72 << bVar41 | 0x4cc4ac72U >> 0x20 - bVar41) * 0x66e67a89))
              {
                uVar31 = uVar15 | uVar34 & 0xff;
              }
              uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + lVar26) + 1];
              bVar41 = *(uint8_t *)(lVar40 + -6 + lVar26);
              uVar42 = (uint64_t)bVar41;
              if ((uint64_t)(int64_t)(int)((0x5f6c43ab - uVar18 ^ uVar25) + 0x41a9e013) <=
                  (uint64_t)((0x705cf3b2 - uVar25) * 0xa91fd01 ^ uVar18)) {
                uVar42 = (int64_t)(char)bVar41;
              }
              uVar42 = param_6[uVar42 + 1];
              uVar33 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + lVar26) + 1];
              lVar14 = uVar39 + uVar22 + uVar13 + uStack_58 + uVar34 + uVar33 + uVar42;
              lVar26 = lVar14 + uVar15;
              if ((uVar21 >> (bVar10 & 0x1f) | uVar21 << 0x20 - (bVar10 & 0x1f)) != 0x4bab6f20) {
                lVar26 = uVar15 * lVar14;
              }
              uVar13 = lVar26 + uVar30;
              puStack_90 = (uint64_t *)
                           ((((((uVar31 | uVar34) >> ((uint8_t)uVar33 & 0x3f) | uVar33) >>
                               ((uint8_t)uVar22 & 0x3f) | uVar22) >> ((uint8_t)uVar42 & 0x3f) | uVar42) >>
                             ((uint8_t)uVar15 & 0x3f) | uVar15) >> ((uint8_t)uVar30 & 0x3f) |
                           uVar30 & 0xffffffffffffff00);
              *puStack_f8 = (uint64_t)puStack_90 >> (-(char)uVar13 & 0x3fU);
              puStack_f8 = (uint64_t *)(((uVar13 & 0xff) >> 3) + (int64_t)puStack_f8);
              uStack_58 = (uint64_t)((uint32_t)uVar13 & 7);
            }
            if (0 < (int)uVar12) {
              puVar37 = puStack_f8;
              uVar12 = uVar12 & 0xffffffff;
              do {
                if ((int64_t)(uint64_t)((uVar18 ^ 0x5487d895) + 0x8d97048c) <
                    (int64_t)(int)((uVar18 + 0xb4907d4d ^ 0xd670c057) + 0x62a36757)) {
                  uVar25 = uVar18 ^ 0x75d4a34f;
                }
                else {
                  uVar25 = (uVar18 ^ 0x32170200) * 0x201f4593 + 0x7c7d6b35;
                }
                uVar21 = uVar25 | 1;
                bVar41 = (uint8_t)uVar25 & 0x1f;
                uVar29 = (uVar18 + 0x9078c771) * uVar21 + 0xc83777b9;
                uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + uVar12) + 1];
                uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + uVar12) + 1];
                uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + uVar12) + 1];
                if ((uVar29 * 0x40000000 | uVar29 >> 2) <
                    ((0x31480e4cU >> bVar41 | 0x31480e4c << 0x20 - bVar41) ^ uVar18)) {
                  uVar29 = 0x826555bf - (uVar18 ^ 0x8358b743) * uVar21;
                }
                else {
                  uVar29 = (uVar25 - uVar18) + 0xd5f7648a ^ 0x3b6a482c;
                }
                uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + uVar12) + 1];
                uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
                uVar5 = uVar21 * -0x7254e945 << (bVar10 & 0x1f) |
                        uVar21 * -0x7254e945 >> 0x20 - (bVar10 & 0x1f);
                uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1];
                uVar21 = -0x1ed292ef << (bVar10 & 0x1f) | 0xe12d6d11U >> 0x20 - (bVar10 & 0x1f);
                uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar12) + 1];
                bVar41 = (uint8_t)uVar29 & 0x1f;
                uVar42 = param_6[(uint64_t)*(uint8_t *)((int)(uVar18 + 0xf5d55f90) + lVar40 + uVar12)
                                 + 1];
                uVar24 = uVar39 + uVar15 + uVar42 + uVar31 +
                         uVar13 + uVar30 + uVar22 + uStack_58 + uVar34;
                uVar33 = (uVar24 & 0xff) >> 3;
                bVar9 = -(uint8_t)uVar22;
                if ((uint64_t)((uVar19 * -0x9aae000 | uVar19 * 0x7b6f6552 >> 0x14) + uVar25) <
                    (uint64_t)(int64_t)(int)(uVar21 >> bVar41 | uVar21 << 0x20 - bVar41)) {
                  bVar9 = (uint8_t)uVar22;
                }
                uVar36 = ((((((((uint64_t)puStack_90 >> ((uint8_t)uVar34 & 0x3f) | uVar34) >>
                               ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar39 & 0x3f) | uVar39) >>
                             ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar42 & 0x3f) | uVar42) >>
                           ((uint8_t)uVar15 & 0x3f) | uVar15) >> (bVar9 & 0x3f) | uVar22) >>
                         ((uint8_t)uVar13 & 0x3f) | uVar13 & 0xffffffffffffff00;
                *puVar37 = uVar36 >> (-(char)uVar24 & 0x3fU);
                uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x10 + uVar12) + 1];
                uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xb + uVar12) + 1];
                uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xf + uVar12) + 1];
                uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xe + uVar12) + 1];
                uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xc + uVar12) + 1];
                uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xd + uVar12) + 1];
                uVar31 = param_6[(uint64_t)
                                 *(uint8_t *)(((int64_t)(short)(-0x9e3 - uVar4) ^ 0xffffffffffffaa44U)
                                           + lVar40 + uVar12) + 1];
                lVar26 = uVar13 + uVar39 + uVar22 + uVar30 + uVar34 + uVar31 + uVar15 +
                         param_6[(uint64_t)*(uint8_t *)(lVar40 + -9 + uVar12) + 1];
                uVar42 = (uint64_t)((uint32_t)uVar24 & 7) + lVar26;
                uStack_58 = (uint64_t)((uint32_t)uVar42 & 7);
                bVar41 = (uint8_t)lVar26;
                bVar9 = bVar41 - 1;
                if ((((0x9cf593bb - uVar29) * 0x80000 | 0x9cf593bb - uVar29 >> 0xd) + 0xda4aca0d) *
                    uVar19 <= (uVar5 << 8 | uVar5 >> 0x18) + 0x7f56f1f2) {
                  bVar9 = bVar41;
                }
                puStack_f8 = (uint64_t *)((int64_t)puVar37 + uVar33 + ((uVar42 & 0xff) >> 3));
                uVar34 = (((param_6[(uint64_t)*(uint8_t *)(lVar40 + -9 + uVar12) + 1] >>
                            ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                          (uVar34 & 0xff) | uVar34) >> ((uint8_t)uVar15 & 0x3f);
                uVar30 = (uVar34 & 0xffffffff) * (uVar15 & 0xffffffff) +
                         ((uVar34 >> 0x20) * (uVar15 & 0xffffffff) +
                          (uVar15 >> 0x20) * (uVar34 & 0xffffffff) << 0x20);
                if ((int)(((-0x5397932c << (bVar10 & 0x1f) | 0xac686cd4U >> 0x20 - (bVar10 & 0x1f))
                          ^ uVar25) + 0x5f07a425) < (int)~(uVar25 ^ 0x4ce3b72b)) {
                  uVar30 = uVar34 | uVar15;
                }
                bVar41 = -(uint8_t)uVar39;
                if (uVar25 + 0x2d6f0bec <= (uVar29 ^ 0xf071af75) + uVar18) {
                  bVar41 = (uint8_t)uVar39;
                }
                bStack_b0 = (uint8_t)uVar22;
                uVar13 = (uVar30 >> (bVar41 & 0x3f) | uVar39) >> ((uint8_t)uVar13 & 0x3f) | uVar13;
                uVar30 = uVar13 >> (bStack_b0 & 0x3f);
                if (uVar19 * -0x1c8d4ad7 - uVar29 < ~(uVar19 * -0x6cfba84e ^ uVar25)) {
                  uVar30 = (uVar22 & 0xff) * uVar13;
                }
                puStack_90 = (uint64_t *)
                             (uVar36 >> (bVar9 & 0x3f) | uVar22 & 0xffffffffffffff00 | uVar30);
                *(uint64_t *)((int64_t)puVar37 + uVar33) =
                     (uint64_t)puStack_90 >> (-(char)uVar42 & 0x3fU);
                bVar44 = 0x10 < uVar12;
                puVar37 = puStack_f8;
                uVar12 = uVar12 - 0x10;
              } while (bVar44);
            }
            goto LAB_7fffa5666c77;
          }
          uVar25 = uVar25 + (int)((uVar6 & 0xffffffff) / 9) * -9;
          uVar12 = uVar6;
          if (uVar25 == 0) {
            uStack_58 = 0;
            puStack_90 = (uint64_t *)0x0;
          }
          else {
            if (uVar25 == 1) {
              uVar29 = 0;
              puStack_90 = (uint64_t *)0x0;
LAB_7fffa5664423:
              pbVar1 = (uint8_t *)(lVar40 + -1 + uVar12);
              uVar12 = uVar12 - 1;
              uVar22 = param_6[(uint64_t)*pbVar1 + 1];
              uVar29 = uVar29 + (int)uVar22;
              puStack_90 = (uint64_t *)
                           ((uint64_t)puStack_90 >> ((uint8_t)uVar22 & 0x3f) |
                           uVar22 & 0xffffffffffffff00);
            }
            else {
              uVar21 = uVar25 & 0xe;
              puStack_90 = (uint64_t *)0x0;
              lVar26 = 0;
              do {
                uVar21 = uVar21 - 2;
                uVar12 = uVar12 - 2;
                uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + uVar12) + 1];
                uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + 1 + uVar12) + 1];
                lVar26 = lVar26 + uVar30 + uVar22;
                uVar29 = (uint32_t)lVar26;
                uVar13 = uVar22 | 0xff;
                if ((int64_t)
                    (int)(0x75b3d4dd << (bVar10 & 0x1f) | 0x75b3d4ddU >> 0x20 - (bVar10 & 0x1f)) <
                    (int64_t)
                    (uint64_t)
                    (0x4d8fffc0 << (bVar10 & 0x1f) | 0x4d8fffc0U >> 0x20 - (bVar10 & 0x1f))) {
                  uVar13 = uVar22 & 0xff;
                }
                puStack_90 = (uint64_t *)
                             ((uVar30 & 0xffffffffffffff00 |
                              (uint64_t)puStack_90 >> ((uint8_t)uVar30 & 0x3f)) >> uVar13 |
                             uVar22 & 0xffffffffffffff00);
              } while (uVar21 != 0);
              if ((uVar25 & 1) != 0) goto LAB_7fffa5664423;
            }
            uStack_58 = (uint64_t)(uVar29 & 7);
            *param_3 = (uint64_t)puStack_90 >> (-(char)uVar29 & 0x3fU);
            puStack_f8 = (uint64_t *)((uint64_t)((uVar29 & 0xff) >> 3) + (int64_t)param_3);
          }
          uVar25 = (int)uVar12 * 0x38e38e39 + 0xe38e38e;
          if (0xe38e38e < (uVar25 >> 1 | (uint32_t)((uVar25 & 1) != 0) << 0x1f)) {
            uVar25 = -0x568c9790 << (bVar10 & 0x1f) | 0xa9736870U >> 0x20 - (bVar10 & 0x1f);
            lVar26 = (int64_t)(int)uVar12;
            uVar12 = lVar26 - 9;
            if (((uVar25 << 0x12 | uVar25 >> 0xe) == 0x1f590d79 - uVar18) ==
                (0x89a53a08U >> (bVar10 & 0x1f) | -0x765ac5f8 << 0x20 - (bVar10 & 0x1f)) <
                (0x9d21cb93U >> (bVar10 & 0x1f) | -0x62de346d << 0x20 - (bVar10 & 0x1f))) {
              bVar41 = (char)(uVar18 + 0x703eb429) * '\x02' | (int)(uVar18 + 0x703eb429) < 0;
            }
            else {
              bVar41 = (char)(0x522a806c - uVar18) * '\x10' | (uint8_t)(0x522a806c - uVar18 >> 0x1c);
            }
            uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + uVar12) + 1];
            uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + lVar26) + 1];
            uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + lVar26) + 1];
            uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + lVar26) + 1];
            uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + lVar26) + 1];
            uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + lVar26) + 1];
            uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + lVar26) + 1];
            uVar42 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + lVar26) + 1];
            uVar33 = param_6[(uint64_t)
                             *(uint8_t *)((int64_t)
                                       (int)((uVar18 + 0x22144010 << (bVar41 & 0x1f) |
                                             uVar18 + 0x22144010 >> 0x20 - (bVar41 & 0x1f)) +
                                            0xc11f84cf) + lVar40 + lVar26) + 1];
            uVar24 = uStack_58 + uVar31 + uVar22 + uVar30 + uVar15 + uVar13 + uVar39 + uVar42 +
                     uVar34 + uVar33;
            puStack_90 = (uint64_t *)
                         ((((((((((uint64_t)puStack_90 >> ((uint8_t)uVar42 & 0x3f) | uVar42) >>
                                 ((uint8_t)uVar39 & 0x3f) | uVar39) >> ((uint8_t)uVar13 & 0x3f) | uVar13)
                               >> (uVar31 & 0xff) | uVar31) >> ((uint8_t)uVar33 & 0x3f) | uVar33) >>
                             ((uint8_t)uVar15 & 0x3f) | uVar15) >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                           ((uint8_t)uVar34 & 0x3f) | uVar34) >> ((uint8_t)uVar22 & 0x3f) | uVar22);
            *puStack_f8 = (uint64_t)puStack_90 >> (-(char)uVar24 & 0x3fU);
            puStack_f8 = (uint64_t *)(((uVar24 & 0xff) >> 3) + (int64_t)puStack_f8);
            uStack_58 = (uint64_t)((uint32_t)uVar24 & 7);
          }
          if ((int)(uint32_t)(uint16_t)(0U >> (bVar10 & 0xf) | 0 << 0x10 - (bVar10 & 0xf)) < (int)uVar12)
          {
            uVar12 = (uVar12 & 0xffffffff) + 0x12;
            puVar37 = puStack_f8;
            do {
              uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x19 + uVar12) + 1];
              uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x13 + uVar12) + 1];
              if (~(uVar18 + 0x1e192a86) < 0x5f4682a2 - uVar18) {
                uVar25 = uVar18 ^ 0x98715e67;
              }
              else {
                uVar25 = uVar19 * 0x763830ea + 0xbb9d7eff;
              }
              uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x17 + uVar12) + 1];
              uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x1a + uVar12) + 1];
              uVar21 = uVar25 | 1;
              uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x1b + uVar12) + 1];
              uVar31 = (uint64_t)puStack_90 >> ((uint8_t)uVar30 & 0x3f);
              uVar15 = uVar31 & uVar30;
              if (((uVar18 + 0x4a4c8955) * 0x20 | uVar18 + 0x4a4c8955 >> 0x1b) * uVar21 ==
                  (uVar19 * 0x68c3521d ^ uVar25) * 0x72c3ded9) {
                uVar15 = uVar30 | uVar31;
              }
              bVar41 = (uint8_t)uVar25;
              uVar29 = 0x5d38ee2e - uVar18 >> (bVar41 & 0x1f) |
                       0x5d38ee2e - uVar18 << 0x20 - (bVar41 & 0x1f);
              uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x18 + uVar12) + 1];
              if (((uVar25 ^ 0x15f14db0) - uVar18) + 0xfe7e298b < (uVar29 << 0xd | uVar29 >> 0x13))
              {
                uVar29 = uVar25 + 0x4d4ae176 ^ uVar18;
                uVar29 = uVar29 << 2 | uVar29 >> 0x1e;
              }
              else {
                uVar29 = ~(0x11ecccfb << (bVar41 & 0x1f) | 0x11ecccfbU >> 0x20 - (bVar41 & 0x1f));
              }
              bStack_150 = (uint8_t)uVar13;
              lVar26 = uVar30 + uStack_58;
              uStack_58._0_1_ = (uint8_t)uVar22;
              uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x14 + uVar12) + 1];
              if ((-0x3fbad96a << (bVar10 & 0x1f) | 0xc0452696U >> 0x20 - (bVar10 & 0x1f)) +
                  0xdd419f43 <
                  ((0x4ac42236 << (bVar41 & 0x1f) | 0x4ac42236U >> 0x20 - (bVar41 & 0x1f)) +
                   0x5e3d715 ^ uVar18)) {
                uVar42 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x15 + uVar12) + 1];
                uVar33 = lVar26 + uVar30 + uVar42;
                uVar42 = (uVar15 >> ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar42 & 0x3f) |
                         uVar42;
                uVar5 = 0x7475c412 - uVar18 >> (bVar41 & 0x1f) |
                        0x7475c412 - uVar18 << 0x20 - (bVar41 & 0x1f);
              }
              else {
                uVar42 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x15 + uVar12) + 1];
                uVar33 = lVar26 + uVar30 + uVar42;
                uVar5 = ((uVar25 ^ 0x64dd4064) - uVar18) + 0x9068f508;
                uVar42 = (uVar15 >> ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar42 & 0x3f) |
                         uVar42;
              }
              uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x16 + uVar12) + 1];
              uVar42 = (((((uVar42 >> ((uint8_t)uVar30 & 0x3f) | uVar30) >> (bStack_150 & 0x3f) |
                          uVar13) >> ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uStack_58 & 0x3f) |
                        uVar22) >> ((uint8_t)uVar39 & 0x3f) | uVar39) >> ((uint8_t)uVar34 & 0x3f) | uVar34
              ;
              uVar15 = uVar33 & uVar30;
              if (~((uVar29 | 1) * -0x22465246) * uVar19 + 0xb4a9ede3 <=
                  (0xfe5939c7 - uVar18 << (bVar41 & 0x1f) |
                  0xfe5939c7 - uVar18 >> 0x20 - (bVar41 & 0x1f)) + 0xfd457a73) {
                uVar15 = uVar33 + uVar30;
              }
              uVar15 = uVar39 + uVar34 + uVar22 + uVar13 + uVar31 + uVar15;
              uVar30 = (uVar15 & 0xff) >> 3;
              *puVar37 = uVar42 >> (-(char)uVar15 & 0x3fU);
              bVar41 = *(uint8_t *)((int)((0xa19a06a - uVar18) * 0x10000 | 0xa19a06a - uVar18 >> 0x10)
                                 + lVar40 + -0x12 + uVar12);
              uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x20 + uVar12) + 1];
              uVar13 = (int64_t)(char)bVar41;
              if (uVar5 + (uVar19 * 0x7ed52200 | uVar19 * 0x58fdaa44 >> 0x19) == -0x166f777e) {
                uVar13 = (uint64_t)bVar41;
              }
              uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x1f + uVar12) + 1];
              bVar41 = *(uint8_t *)(lVar40 + -0x22 + uVar12);
              uVar34 = (int64_t)(char)bVar41;
              if ((uint64_t)
                  (0xf4c7fdde - ((uVar29 + 0x5c0bc482) * 0x800000 | uVar29 + 0x5c0bc482 >> 9)) <=
                  (uint64_t)
                  (int64_t)
                  (int)((0x1cc96803 << (bVar10 & 0x1f) | 0x1cc96803U >> 0x20 - (bVar10 & 0x1f)) *
                       uVar21)) {
                uVar34 = (uint64_t)bVar41;
              }
              uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x1d + uVar12) + 1];
              uVar33 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x1e + uVar12) + 1];
              uVar13 = param_6[uVar13 + 1];
              uVar24 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x21 + uVar12) + 1];
              uVar36 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x23 + uVar12) + 1];
              uVar34 = param_6[uVar34 + 1];
              uVar43 = (((((param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x1c + uVar12) + 1] >>
                            ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar33 & 0x3f) | uVar33) >>
                          ((uint8_t)uVar39 & 0x3f) | uVar39) >> ((uint8_t)uVar22 & 0x3f) | uVar22) >>
                        ((uint8_t)uVar24 & 0x3f) | uVar24) >> ((uint8_t)uVar34 & 0x3f);
              lVar26 = uVar33 + uVar24 +
                       uVar31 + uVar22 + uVar39 +
                                param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x1c + uVar12) + 1] + uVar36
                                + uVar13 + uVar34;
              uVar39 = (uint64_t)((uint32_t)uVar15 & 7) + lVar26;
              puStack_f8 = (uint64_t *)((int64_t)puVar37 + ((uVar39 & 0xff) >> 3) + uVar30);
              uStack_58 = (uint64_t)((uint32_t)uVar39 & 7);
              uVar21 = uVar21 * 0x342b7c7d + 0x93fd60dc;
              uVar22 = uVar43 * uVar34;
              if (~(0x2bcdb2d7 - uVar25 << (bVar10 & 0x1f) |
                   0x2bcdb2d7 - uVar25 >> 0x20 - (bVar10 & 0x1f)) <=
                  ~(uVar21 << (bVar10 & 0x1f) | uVar21 >> 0x20 - (bVar10 & 0x1f))) {
                uVar22 = uVar43 | uVar34;
              }
              puStack_90 = (uint64_t *)
                           ((uVar22 >> ((uint8_t)uVar36 & 0x3f) | uVar36) >> ((uint8_t)uVar13 & 0x3f) |
                            uVar13 | uVar42 >> ((uint8_t)lVar26 & 0x3f));
              *(uint64_t *)((int64_t)puVar37 + uVar30) =
                   (uint64_t)puStack_90 >> (-(char)uVar39 & 0x3fU);
              uVar12 = uVar12 - 0x12;
              puVar37 = puStack_f8;
            } while (0x12 < uVar12);
          }
          goto LAB_7fffa5666c77;
        }
        iVar11 = (int)((uVar6 & 0xffffffff) * 0x24924925 >> 0x20);
        uVar21 = ((uVar25 - iVar11 >> 1) + iVar11 >> 2) * -7 + uVar25;
        if (uVar21 == ((uVar18 | 1) * 0xe216 - 0x3f32 & 0xffff)) {
          uStack_58 = 0;
          puStack_90 = (uint64_t *)0x0;
        }
        else {
          if (uVar21 == 1) {
            uVar29 = 0;
            puStack_90 = (uint64_t *)0x0;
            uVar12 = uVar6;
LAB_7fffa5662656:
            uVar22 = uVar12 - 1;
            uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
            uVar29 = uVar29 + (int)uVar12;
            puStack_90 = (uint64_t *)
                         ((uint64_t)puStack_90 >> ((uint8_t)uVar12 & 0x3f) |
                         uVar12 & 0xffffffffffffff00);
          }
          else {
            uVar25 = uVar21 & 6;
            puStack_90 = (uint64_t *)0x0;
            lVar26 = 0;
            uVar22 = uVar6;
            do {
              uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar22) + 1];
              uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar22) + 1];
              lVar26 = lVar26 + uVar30 + uVar12;
              uVar29 = (uint32_t)lVar26;
              uVar22 = uVar22 - 2;
              uVar12 = ((uint64_t)puStack_90 >> ((uint8_t)uVar12 & 0x3f) | uVar12 & 0xffffffffffffff00
                       ) >> ((uint8_t)uVar30 & 0x3f);
              puStack_90 = (uint64_t *)(uVar12 - (uVar30 & 0xffffffffffffff00));
              if (uVar19 * -0x2c08a00b <= uVar19 * 0x416a859 + 0x103) {
                puStack_90 = (uint64_t *)(uVar12 | uVar30 & 0xffffffffffffff00);
              }
              uVar25 = uVar25 - 2;
            } while (uVar25 != 0);
            uVar12 = uVar22;
            if ((uVar21 & 1) != 0) goto LAB_7fffa5662656;
          }
          uVar25 = (uint32_t)uVar22;
          *param_3 = (uint64_t)puStack_90 >> (-(char)uVar29 & 0x3fU);
          puStack_f8 = (uint64_t *)((uint64_t)((uVar29 & 0xff) >> 3) + (int64_t)param_3);
          uStack_58 = (uint64_t)(uVar29 & 7);
        }
        uVar21 = uVar25 * -0x49249249 + 0x12492492;
        if (0x12492492 < (uVar21 >> 1 | (uint32_t)((uVar21 & 1) != 0) << 0x1f)) {
          if ((int)(-0x3dc71a18 << (bVar10 & 0x1f) | 0xc238e5e8U >> 0x20 - (bVar10 & 0x1f)) <
              -0x14e89b7f) {
            uVar21 = 0x8a28a073 - uVar18;
          }
          else {
            uVar21 = 0xdc795d43;
          }
          lVar26 = (int64_t)(int)uVar25;
          uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + lVar26) + 1];
          bVar9 = (uint8_t)uVar21 & 0x1f;
          uVar5 = ~((0x6ce51232 - uVar18) * (uVar21 | 1));
          uVar29 = ~((uVar21 | 1) * -0x47f71194);
          uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + lVar26) + 1];
          bVar41 = *(uint8_t *)(lVar40 + -2 + lVar26);
          uVar30 = (uint64_t)bVar41;
          if ((uVar5 << 6 | uVar5 >> 0x1a) < ((uVar21 - uVar18) + -0x454457e3) * 0x4c7b37a7) {
            uVar30 = (int64_t)(char)bVar41;
          }
          uVar30 = param_6[uVar30 + 1];
          uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + lVar26) + 1];
          uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + lVar26) + 1];
          bVar41 = (uint8_t)uVar22 + 1;
          if ((uVar29 << 0x1e | uVar29 >> 2) != 0xc0e1af67) {
            bVar41 = (uint8_t)uVar22;
          }
          uVar34 = param_6[(uint64_t)
                           *(uint8_t *)((int64_t)
                                     (int)((uVar18 + 0x9f8ef5b4 << bVar9 |
                                           uVar18 + 0x9f8ef5b4 >> 0x20 - bVar9) * -0x38b6c6fd) +
                                    lVar40 + lVar26) + 1];
          uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + lVar26) + 1];
          uVar31 = uVar39 + uVar34 + uStack_58 + uVar22 + uVar12 + uVar15 + uVar30 + uVar13;
          puStack_90 = (uint64_t *)
                       (uVar15 & 0xffffffffffffff00 |
                       (((((((uint64_t)puStack_90 >> ((uint8_t)uVar39 & 0x3f) | uVar39) >>
                            ((uint8_t)uVar30 & 0x3f) | uVar30) >> (uVar13 & 0xff) | uVar13) >>
                          (bVar41 & 0x3f) | uVar22) >> ((uint8_t)uVar34 & 0x3f) | uVar34) >>
                        ((uint8_t)uVar12 & 0x3f) | uVar12) >> ((uint8_t)uVar15 & 0x3f));
          *puStack_f8 = (uint64_t)puStack_90 >> (-(char)uVar31 & 0x3fU);
          puStack_f8 = (uint64_t *)(((uVar31 & 0xff) >> 3) + (int64_t)puStack_f8);
          uVar25 = uVar25 - 7;
          uStack_58 = (uint64_t)((uint32_t)uVar31 & 7);
        }
        if (0 < (int)uVar25) {
          sVar3 = (short)(uVar18 | 1);
          uVar12 = (uint64_t)uVar25;
          do {
            uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + uVar12) + 1];
            uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar12) + 1];
            uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + uVar12) + 1];
            bVar41 = (uint8_t)uVar13;
            if ((0x401db30d << (bVar10 & 0x1f) | 0x401db30dU >> 0x20 - (bVar10 & 0x1f)) ==
                0x63b48e2a) {
              uVar25 = (uVar19 * -0x1105f16a + 0xdd5b911b ^ 0x63b48e2a) * 0x6cb6829;
            }
            else {
              if ((uint64_t)(int64_t)(int)~(uVar19 * 0xb2f1999) <=
                  (uint64_t)(uVar19 * -0x37a60741)) {
                bVar41 = bVar41 ^ 0xff;
              }
              uVar25 = (0x77a925f6 << (bVar10 & 0x1f) | 0x77a925f6U >> 0x20 - (bVar10 & 0x1f)) ^
                       0x6b74884d;
            }
            uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1];
            uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
            uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + uVar12) + 1];
            uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + uVar12) + 1];
            uVar42 = uVar15 + uVar39 + uVar31 + uVar34 + uStack_58 + uVar22 + uVar13 + uVar30;
            uVar22 = (((((((uint64_t)puStack_90 >> ((uint8_t)uVar34 & 0x3f) | uVar34) >>
                          ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar15 & 0x3f) | uVar15) >>
                        (bVar41 & 0x3f) | uVar13) >> (uVar22 & 0xff) | uVar22) >>
                      ((uint8_t)uVar39 & 0x3f) | uVar39) >> ((uint8_t)uVar31 & 0x3f) |
                     uVar31 & 0xffffffffffffff00;
            *puStack_f8 = uVar22 >> (-(char)uVar42 & 0x3fU);
            puStack_f8 = (uint64_t *)(((uVar42 & 0xff) >> 3) + (int64_t)puStack_f8);
            uVar30 = (uint64_t)*(uint8_t *)(lVar40 + -9 + uVar12);
            if ((uVar25 | 1) * 0x24fd2401 - uVar18 == 0xdcb7f86) {
              uVar25 = (uVar25 ^ 0x271ff9bc) >> 1 | (uint32_t)(((uVar25 ^ 0x271ff9bc) & 1) != 0) << 0x1f
              ;
              bVar41 = *(uint8_t *)(lVar40 + -0xd + uVar12);
              uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + uVar12) + 1];
              uVar39 = (int64_t)(char)bVar41;
              if ((uVar25 >> (bVar10 & 0x1f) | uVar25 << 0x20 - (bVar10 & 0x1f)) == 0x24c0544c) {
                uVar39 = (uint64_t)bVar41;
              }
              uVar30 = param_6[uVar30 + 1];
            }
            else {
              uVar39 = (uint64_t)*(uint8_t *)(lVar40 + -0xd + uVar12);
              uVar30 = param_6[uVar30 + 1];
              uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + uVar12) + 1];
            }
            uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xb + uVar12) + 1];
            uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xe + uVar12) + 1];
            uVar31 = param_6[(uint64_t)
                             *(uint8_t *)(((int64_t)
                                        (short)(sVar3 * -0x17aa |
                                               (uint16_t)((short)(sVar3 * 0x742b) < 0)) ^ 0x2404U) +
                                       lVar40 + uVar12) + 1];
            uVar33 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xc + uVar12) + 1];
            uVar39 = param_6[uVar39 + 1];
            lVar26 = uVar31 + uVar33 + uVar15 + uVar30 + uVar13 + uVar34 + uVar39;
            uVar42 = lVar26 + (uint64_t)((uint32_t)uVar42 & 7);
            puStack_90 = (uint64_t *)
                         ((((((uVar13 >> ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar31 & 0x3f) |
                             uVar31) >> ((uint8_t)uVar34 & 0x3f) | uVar34) >> ((uint8_t)uVar33 & 0x3f) |
                           uVar33) >> ((uint8_t)uVar39 & 0x3f) | uVar39) >> ((uint8_t)uVar15 & 0x3f) |
                          uVar15 & 0xffffffffffffff00 | uVar22 >> ((uint8_t)lVar26 & 0x3f));
            *puStack_f8 = (uint64_t)puStack_90 >> (-(char)uVar42 & 0x3fU);
            puStack_f8 = (uint64_t *)(((uVar42 & 0xff) >> 3) + (int64_t)puStack_f8);
            uStack_58 = (uint64_t)((uint32_t)uVar42 & 7);
            bVar44 = 0xe < uVar12;
            uVar12 = uVar12 - 0xe;
          } while (bVar44);
        }
      }
      else {
        if (uVar21 != 9) {
          uVar29 = uVar25 + (int)((uVar6 & 0xffffffff) / 5) * -5;
          if (10 < uVar21) {
            if (uVar29 == 0) {
              uStack_58 = 0;
              puStack_90 = (uint64_t *)0x0;
              puVar37 = param_3;
            }
            else {
              if (uVar29 == (uint16_t)(0x20 << (bVar10 & 0xf) | 0x20U >> 0x10 - (bVar10 & 0xf))) {
                uVar21 = 0;
                puStack_90 = (uint64_t *)0x0;
                uVar12 = uVar6;
LAB_7fffa5663f77:
                uVar22 = uVar12 - 1;
                uVar13 = (param_8 | 1) * -0x2f00e03b1466919 + 0x52378d73;
                uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
                uVar21 = uVar21 + (int)uVar12;
                uVar30 = uVar12 & 0xffffffffffffff00;
                if ((uVar13 * 0x800 | uVar13 >> 0x35) <
                    (uint64_t)
                    (0x9d44ca40U >> (bVar10 & 0x1f) | -0x62bb35c0 << 0x20 - (bVar10 & 0x1f))) {
                  uVar30 = uVar12 * -0x100;
                }
                puStack_90 = (uint64_t *)((uint64_t)puStack_90 >> ((uint8_t)uVar12 & 0x3f) | uVar30);
              }
              else {
                uVar25 = uVar29 & 6;
                puStack_90 = (uint64_t *)0x0;
                lVar26 = 0;
                uVar22 = uVar6;
                do {
                  uVar25 = uVar25 - 2;
                  uVar22 = uVar22 - 2;
                  uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + uVar22) + 1];
                  uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + 1 + uVar22) + 1];
                  lVar26 = lVar26 + uVar30 + uVar12;
                  uVar21 = (uint32_t)lVar26;
                  puStack_90 = (uint64_t *)
                               ((uVar30 & 0xffffffffffffff00 |
                                (uint64_t)puStack_90 >> ((uint8_t)uVar30 & 0x3f)) >>
                                ((uint8_t)uVar12 & 0x3f) | uVar12 & 0xffffffffffffff00);
                } while (uVar25 != 0);
                uVar12 = uVar22;
                if ((uVar29 & 1) != 0) goto LAB_7fffa5663f77;
              }
              uVar25 = (uint32_t)uVar22;
              uStack_58 = (uint64_t)(uVar21 & 7);
              *param_3 = (uint64_t)puStack_90 >> (-(char)uVar21 & 0x3fU);
              puVar37 = (uint64_t *)((uint64_t)((uVar21 & 0xff) >> 3) + (int64_t)param_3);
            }
            uVar21 = uVar25 * -0x33333333 + 0x19999998;
            puStack_f8 = puVar37;
            if (0x19999998 < (uVar21 >> 1 | (uint32_t)((uVar21 & 1) != 0) << 0x1f)) {
              lVar26 = (int64_t)(int)uVar25;
              uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + lVar26) + 1];
              uVar25 = uVar25 - 5;
              uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + lVar26) + 1];
              uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + lVar26) + 1];
              uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + lVar26) + 1];
              uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + lVar26) + 1];
              uVar34 = uVar30 + uVar39 + uVar13 + uStack_58 + uVar12 + uVar22;
              uStack_58 = (uint64_t)((uint32_t)uVar34 & 7);
              puStack_90 = (uint64_t *)
                           ((((((uint64_t)puStack_90 >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                               ((uint8_t)uVar22 & 0x3f) | uVar22) >> ((uint8_t)uVar12 & 0x3f) | uVar12) >>
                             ((uint8_t)uVar13 & 0x3f) | uVar13) >> ((uint8_t)uVar39 & 0x3f) |
                           uVar39 & 0xffffffffffffff00);
              puStack_f8 = (uint64_t *)(((uVar34 & 0xff) >> 3) + (int64_t)puVar37);
              *puVar37 = (uint64_t)puStack_90 >> (-(char)uVar34 & 0x3fU);
            }
            if ((int)(uint32_t)(uint16_t)(0U >> (bVar10 & 0xf) | 0 << 0x10 - (bVar10 & 0xf)) < (int)uVar25
               ) {
              uVar12 = (uint64_t)uVar25;
              puStack_130 = puStack_f8;
              do {
                if ((uint64_t)(uVar19 * 0x605b96c0 | uVar19 * -0x6a7e91a5 >> 0x1a) ==
                    0xffffffff9a0972ca) {
                  lVar26 = (int64_t)(int)(-0x19fc2ead - (uVar18 + 0xdbd930f2));
                  uVar25 = ((uVar18 ^ 0x52798866) << 0xd | (uVar18 ^ 0x52798866) >> 0x13) ^
                           0xfb7a280f;
                }
                else {
                  uVar25 = (uVar18 ^ 0x44192e2c) + 0xebb0d8db;
                  uVar25 = uVar25 * 8 | uVar25 >> 0x1d;
                  lVar26 = -10;
                }
                uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + uVar12) + 1];
                uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
                uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar12) + 1];
                uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + uVar12) + 1];
                uVar15 = (((uint64_t)puStack_90 >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                          ((uint8_t)uVar13 & 0x3f) | uVar13) >> ((uint8_t)uVar39 & 0x3f);
                uVar34 = param_6[(uint64_t)
                                 *(uint8_t *)(((int64_t)(short)(-0x351c - uVar4) ^ 0xffffffffffffd582U
                                           ) + lVar40 + uVar12) + 1];
                uVar31 = uVar30 + uVar34 + uVar13 + uVar22 + uStack_58 + uVar39;
                uVar30 = (uVar31 & 0xff) >> 3;
                bVar10 = (uint8_t)uVar25 & 0x1f;
                uVar13 = uVar15 | uVar39;
                if ((int)((uVar19 * 0x63e2a61e << bVar10 | uVar19 * 0x63e2a61e >> 0x20 - bVar10) *
                         0x6d94ff9f) < (int)(uVar25 + 0xbae8c0ce)) {
                  uVar13 = uVar39 * uVar15;
                }
                uVar13 = (uVar13 >> ((uint8_t)uVar22 & 0x3f) | uVar22) >> ((uint8_t)uVar34 & 0x3f) |
                         uVar34 & 0xffffffffffffff00;
                uVar22 = (0x40 - (uVar31 & 0xff)) + uVar13;
                if ((uint64_t)((uVar18 + 0x2301e2a) - uVar25) <=
                    (uint64_t)(int64_t)(int)((uVar18 + 0xd82186e6 ^ uVar25) * 0x41e681fb)) {
                  uVar22 = uVar13 >> (-(char)uVar31 & 0x3fU);
                }
                *puStack_130 = uVar22;
                uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -9 + uVar12) + 1];
                uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + uVar12) + 1];
                uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + uVar12) + 1];
                uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -10 + uVar12) + 1];
                lVar14 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1] + uVar39 + uVar22 +
                         uVar34 + uVar15;
                uVar42 = (uint64_t)((uint32_t)uVar31 & 7) + lVar14;
                uVar31 = uVar42 & SUB168(ZEXT416(0xff),0);
                puStack_90 = (uint64_t *)
                             ((((param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1] >>
                                 ((uint8_t)uVar34 & 0x3f) | uVar34) >> ((uint8_t)uVar39 & 0x3f) | uVar39)
                               >> (uVar22 & 0xff) | uVar22) >> ((uint8_t)uVar15 & 0x3f) |
                             uVar15 & 0xffffffffffffff00 | uVar13 >> ((uint8_t)lVar14 & 0x3f));
                *(uint64_t *)((int64_t)puStack_130 + uVar30) =
                     (uint64_t)puStack_90 >> (-(char)uVar31 & 0x3fU);
                uStack_58 = (uint64_t)((uint32_t)uVar42 & 7);
                puStack_f8 = (uint64_t *)((int64_t)puStack_130 + uVar30 + (uVar31 >> 3));
                bVar44 = 10 < uVar12;
                uVar12 = lVar26 + uVar12;
                puStack_130 = puStack_f8;
              } while (bVar44);
            }
            goto LAB_7fffa5666c77;
          }
          if (uVar29 == (uVar18 + 0xcca45f95 & 0xffff)) {
            uStack_58 = 0;
            puStack_90 = (uint64_t *)0x0;
            puVar37 = param_3;
          }
          else {
            uVar12 = uVar6;
            if (uVar29 == 1) {
              uVar22 = 0;
              puStack_90 = (uint64_t *)0x0;
LAB_7fffa5666822:
              pbVar1 = (uint8_t *)(lVar40 + -1 + uVar12);
              uVar12 = uVar12 - 1;
              uVar30 = param_6[(uint64_t)*pbVar1 + 1];
              uVar22 = uVar22 + uVar30;
              puStack_90 = (uint64_t *)
                           ((uint64_t)puStack_90 >> ((uint8_t)uVar30 & 0x3f) |
                           uVar30 & 0xffffffffffffff00);
            }
            else {
              uVar25 = uVar29 & 6;
              if (uVar19 * -0x78ed96c7 <= uVar19 * -0x86af01a) {
                uVar25 = uVar29 + 6;
              }
              puStack_90 = (uint64_t *)0x0;
              uVar22 = 0;
              do {
                pbVar1 = (uint8_t *)(lVar40 + -2 + uVar12);
                pbVar2 = (uint8_t *)(lVar40 + -1 + uVar12);
                uVar12 = uVar12 - 2;
                uVar30 = param_6[(uint64_t)*pbVar1 + 1];
                uVar13 = param_6[(uint64_t)*pbVar2 + 1];
                uVar22 = uVar22 + uVar30 + uVar13;
                puStack_90 = (uint64_t *)
                             ((uVar13 & 0xffffffffffffff00 |
                              (uint64_t)puStack_90 >> ((uint8_t)uVar13 & 0x3f)) >>
                              ((uint8_t)uVar30 & 0x3f) | uVar30 & 0xffffffffffffff00);
                uVar25 = uVar25 - 2;
              } while (uVar25 != 0);
              if ((uVar29 & 1) != 0) goto LAB_7fffa5666822;
            }
            uVar25 = (uint32_t)uVar12;
            uStack_58 = (uint64_t)((uint32_t)uVar22 & 7);
            uVar22 = uVar22 & 0xff;
            *param_3 = (uint64_t)puStack_90 >> 0x40 - uVar22;
            uVar12 = uVar22 >> 3;
            if (0x20000a2aa214 - param_8 == (int64_t)(int)(uVar18 ^ 0xa950572c)) {
              uVar12 = uVar22 * 3;
            }
            puVar37 = (uint64_t *)(uVar12 + (int64_t)param_3);
          }
          uVar19 = uVar25 * -0x33333333 + 0x19999998;
          puStack_f8 = puVar37;
          if (0x19999998 < (uVar19 >> 1 | (uint32_t)((uVar19 & 1) != 0) << 0x1f)) {
            lVar26 = (int64_t)(int)uVar25;
            uVar25 = uVar25 - 5;
            uVar12 = (uint64_t)uVar25;
            if ((param_8 ^ 0xe1f2b6f55e040236) * 0xcd462007 != 0x3998fe29) {
              uVar12 = (int64_t)(int)uVar25;
            }
            uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + lVar26) + 1];
            uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + lVar26) + 1];
            uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + uVar12) + 1];
            uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + lVar26) + 1];
            uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + lVar26) + 1];
            uVar34 = uStack_58 + uVar39 + uVar13 + uVar22 + uVar30 + uVar12;
            puStack_90 = (uint64_t *)
                         ((((((uint64_t)puStack_90 >> ((uint8_t)uVar39 & 0x3f) | uVar39) >>
                             (uVar22 & 0xff) | uVar22) >> ((uint8_t)uVar13 & 0x3f) | uVar13) >>
                           ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar12 & 0x3f) | uVar12);
            uStack_58 = (uint64_t)((uint32_t)uVar34 & 7);
            puStack_f8 = (uint64_t *)(((uVar34 & 0xff) >> 3) + (int64_t)puVar37);
            *puVar37 = (uint64_t)puStack_90 >> (-(char)uVar34 & 0x3fU);
          }
          if (0 < (int)uVar25) {
            uVar12 = (uint64_t)uVar25;
            while( true ) {
              iVar11 = (0x9d97fc8dU >> (bVar10 & 0x1f) | -0x62680373 << 0x20 - (bVar10 & 0x1f)) +
                       0xf8c660ac;
              uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
              uVar30 = (uint64_t)*(uint8_t *)(lVar40 + -2 + uVar12);
              if ((int64_t)iVar11 - 0x3df9d28aU == (uint64_t)~(uVar18 ^ 0x77d36e02)) {
                bVar41 = (uint8_t)iVar11 & 0x1f;
                uVar19 = ~((0x1ef183deU >> bVar41 | 0x1ef183de << 0x20 - bVar41) ^ uVar18);
                uVar30 = param_6[uVar30 + 1];
                uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + uVar12) + 1];
                uVar39 = (((uint64_t)puStack_90 >> ((uint8_t)uVar22 & 0x3f) | uVar22) >>
                          ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar13 & 0x3f) | uVar13;
              }
              else {
                uVar30 = param_6[uVar30 + 1];
                uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + uVar12) + 1];
                uVar39 = (((uint64_t)puStack_90 >> ((uint8_t)uVar22 & 0x3f) | uVar22) >>
                          ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar13 & 0x3f) | uVar13;
                uVar19 = (0x7a2838 - uVar18) * 0x2bc1ca49 + 0x14617b8c;
              }
              uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + uVar12) + 1];
              uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + uVar12) + 1];
              uVar39 = uVar39 >> ((uint8_t)uVar15 & 0x3f) | uVar15;
              uVar13 = uVar15 + uVar34 + uStack_58 + uVar22 + uVar13 + uVar30;
              uVar22 = (uVar13 & 0xff) >> 3;
              uVar30 = uVar39 * (uVar34 & 0xff);
              if (uVar18 != 0x5b22a44c) {
                uVar30 = uVar39 >> ((uint8_t)uVar34 & 0x3f);
              }
              *puStack_f8 = (uVar30 | uVar34) >> (-(char)uVar13 & 0x3fU);
              uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -10 + uVar12) + 1];
              uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + uVar12) + 1];
              uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -9 + uVar12) + 1];
              uVar42 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + uVar12) + 1];
              lVar26 = uVar15 + uVar31 +
                       param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1] + uVar39 + uVar42;
              uVar33 = (uint64_t)((uint32_t)uVar13 & 7) + lVar26;
              uStack_58 = (uint64_t)((uint32_t)uVar33 & 7);
              uVar33 = uVar33 & SUB168(ZEXT416(0xff),0);
              uVar13 = uVar33 >> 3;
              if ((((uVar19 ^ 0x7b855602) << 0xd | (uVar19 ^ 0x7b855602) >> 0x13) ^ 0x579eec1c) -
                  uVar18 == -0x45e79a3a) {
                uVar13 = uVar33 - 3;
              }
              puStack_90 = (uint64_t *)
                           ((((param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1] >>
                               ((uint8_t)uVar42 & 0x3f) | uVar42) >> ((uint8_t)uVar15 & 0x3f) | uVar15) >>
                             ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar39 & 0x3f) | uVar39 |
                           (uVar30 | uVar34) >> ((uint8_t)lVar26 & 0x3f));
              *(uint64_t *)((int64_t)puStack_f8 + uVar22) =
                   (uint64_t)puStack_90 >> (-(char)uVar33 & 0x3fU);
              puStack_f8 = (uint64_t *)((int64_t)puStack_f8 + uVar22 + uVar13);
              if (uVar12 < 0xb) break;
              uVar12 = uVar12 - 10;
            }
          }
          goto LAB_7fffa5666c77;
        }
        uVar21 = uVar25 + (int)((uVar6 & 0xffffffff) / 6) * -6;
        if (uVar21 == (uint16_t)~(-1 << (bVar10 & 0xf) | 0xffffU >> 0x10 - (bVar10 & 0xf))) {
          uStack_58 = 0;
          puStack_90 = (uint64_t *)0x0;
        }
        else {
          uVar12 = uVar6;
          if (uVar21 == 1) {
            uVar29 = 0;
            puStack_90 = (uint64_t *)0x0;
LAB_7fffa5662c4a:
            pbVar1 = (uint8_t *)(lVar40 + -1 + uVar12);
            uVar12 = uVar12 - 1;
            uVar22 = param_6[(uint64_t)*pbVar1 + 1];
            uVar29 = uVar29 + (int)uVar22;
            puStack_90 = (uint64_t *)
                         ((uint64_t)puStack_90 >> ((uint8_t)uVar22 & 0x3f) |
                         uVar22 & 0xffffffffffffff00);
          }
          else {
            uVar25 = uVar21 & 6;
            puStack_90 = (uint64_t *)0x0;
            lVar26 = 0;
            do {
              uVar25 = uVar25 - 2;
              uVar12 = uVar12 - 2;
              uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + uVar12) + 1];
              uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + 1 + uVar12) + 1];
              lVar26 = lVar26 + uVar30 + uVar22;
              uVar29 = (uint32_t)lVar26;
              uVar39 = (uint64_t)puStack_90 >> ((uint8_t)uVar30 & 0x3f);
              uVar13 = uVar30 & 0xffffffffffffff00;
              if ((uVar18 ^ 0xa0b13dab) < 0x7fdc4b1b) {
                uVar13 = uVar30 | 0xffffffffffffff00;
              }
              uVar30 = uVar13 | uVar39;
              if ((int64_t)
                  (uint64_t)
                  (-0x201457b8 << (bVar10 & 0x1f) | 0xdfeba848U >> 0x20 - (bVar10 & 0x1f)) <=
                  (int64_t)(int)(uVar18 ^ 0xa0ddad6d)) {
                uVar30 = uVar13 ^ uVar39;
              }
              puStack_90 = (uint64_t *)
                           (uVar30 >> ((uint8_t)uVar22 & 0x3f) | uVar22 & 0xffffffffffffff00);
            } while (uVar25 != 0);
            if ((uVar21 & 1) != 0) goto LAB_7fffa5662c4a;
          }
          uVar25 = (uint32_t)uVar12;
          uStack_58 = (uint64_t)(uVar29 & 7);
          puStack_f8 = (uint64_t *)((uint64_t)((uVar29 & 0xff) >> 3) + (int64_t)param_3);
          *param_3 = (uint64_t)puStack_90 >> (-(char)uVar29 & 0x3fU);
        }
        if (0x15555554 < (uVar25 * -0x55555555 + 0x2aaaaaa8 >> 2 | uVar25 * -0x40000000)) {
          lVar26 = (int64_t)(int)uVar25;
          uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + lVar26) + 1];
          uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + lVar26) + 1];
          uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + lVar26) + 1];
          bVar41 = *(uint8_t *)(lVar40 + -4 + lVar26);
          uVar13 = (uint64_t)bVar41;
          if ((uint64_t)(uVar18 + 0x715ddcd6) == 0xffffffff9b8c27b2) {
            uVar13 = (int64_t)(char)bVar41;
          }
          uVar13 = param_6[uVar13 + 1];
          uVar25 = uVar25 - 6;
          uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + lVar26) + 1];
          uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + lVar26) + 1];
          uVar15 = uVar12 + uVar34 + uVar30 + uStack_58 + uVar22 + uVar13 + uVar39;
          uStack_58 = (uint64_t)((uint32_t)uVar15 & 7);
          puStack_90 = (uint64_t *)
                       (((((((uint64_t)puStack_90 >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                            ((uint8_t)uVar22 & 0x3f) | uVar22) >> ((uint8_t)uVar34 & 0x3f) | uVar34) >>
                          ((uint8_t)uVar13 & 0x3f) | uVar13) >> ((uint8_t)uVar12 & 0x3f) | uVar12) >>
                        ((uint8_t)uVar39 & 0x3f) | uVar39 & 0xffffffffffffff00);
          *puStack_f8 = (uint64_t)puStack_90 >> (-(char)uVar15 & 0x3fU);
          puStack_f8 = (uint64_t *)(((uVar15 & 0xff) >> 3) + (int64_t)puStack_f8);
        }
        if (0 < (int)uVar25) {
          uVar12 = (uint64_t)uVar25;
          do {
            uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + uVar12) + 1];
            uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
            uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + uVar12) + 1];
            uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1];
            uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar12) + 1];
            uVar15 = uStack_58 + uVar30 & uVar34;
            if ((uint64_t)((uVar18 + 0x958fb7b0) * -0x24f38e33) < 0xffffffffd98fe29e) {
              uVar15 = uVar34 + uStack_58 + uVar30;
            }
            uVar31 = param_6[(uint64_t)
                             *(uint8_t *)((int)((0x9b02d146U >> (bVar10 & 0x1f) |
                                             -0x64fd2eba << 0x20 - (bVar10 & 0x1f)) + 0xd72c9fa1) +
                                       lVar40 + uVar12) + 1];
            uVar15 = uVar39 + uVar13 + uVar31 + uVar22 + uVar15;
            puVar37 = (uint64_t *)(((uVar15 & 0xff) >> 3) + (int64_t)puStack_f8);
            bVar41 = -(uint8_t)uVar34;
            if ((int64_t)(int)(uVar19 * 0x5c319eba) <= (int64_t)(uint64_t)(0xe1d0c235 - uVar18))
            {
              bVar41 = (uint8_t)uVar34;
            }
            uVar22 = ((((((uint64_t)puStack_90 >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                         (bVar41 & 0x3f) | uVar34) >> ((uint8_t)uVar22 & 0x3f) | uVar22) >>
                       ((uint8_t)uVar13 & 0x3f) | uVar13) >> ((uint8_t)uVar31 & 0x3f) | uVar31) >>
                     ((uint8_t)uVar39 & 0x3f) | uVar39 & 0xffffffffffffff00;
            uVar30 = uVar22 >> (-(char)uVar15 & 0x3fU);
            lVar26 = (int64_t)(short)((uVar4 | 1) * -0x2180 | (uint16_t)((uVar4 | 1) * 0x31bd) >> 9);
            if (uVar19 * -0x5dabbe87 != -0x603026d) {
              lVar26 = 0xc;
            }
            if ((0x1731c16e << (bVar10 & 0x1f) | 0x1731c16eU >> 0x20 - (bVar10 & 0x1f)) <
                ((uVar18 ^ 0x58818874) << 1 | (uint32_t)((int)(uVar18 ^ 0x58818874) < 0)) * -0x44dab673)
            {
              uVar25 = (0x32caef3b - uVar18) * -0x520f6b03;
              *puStack_f8 = uVar30;
            }
            else {
              uVar25 = ~(uVar19 * 0x216a591a);
              *puStack_f8 = uVar30;
            }
            uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + uVar12) + 1];
            uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -10 + uVar12) + 1];
            uVar21 = (uVar25 | 1) * -0x653bb63e;
            bVar41 = (uint8_t)uVar25 & 0x1f;
            uVar25 = uVar18 + 0xa914a886 >> bVar41 | uVar18 + 0xa914a886 << 0x20 - bVar41;
            uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -9 + uVar12) + 1];
            uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xb + uVar12) + 1];
            uVar42 = uVar39 + param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + uVar12) + 1] + uVar30;
            uVar31 = uVar42 + uVar13;
            if ((int64_t)
                (uint64_t)
                ((uVar21 << (bVar10 & 0x1f) | uVar21 >> 0x20 - (bVar10 & 0x1f)) ^ 0x2fd1b3c7) <=
                (int64_t)(int)(uVar25 << 0x17 | uVar25 >> 9)) {
              uVar31 = uVar13 & uVar42;
            }
            uVar42 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xc + uVar12) + 1];
            lVar14 = uVar31 + uVar42 + uVar34;
            uVar31 = lVar14 + (uint64_t)((uint32_t)uVar15 & 7);
            uVar15 = uVar31 & SUB168(ZEXT416(0xff),0);
            puStack_90 = (uint64_t *)
                         (uVar22 >> ((uint8_t)lVar14 & 0x3f) |
                         ((((param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + uVar12) + 1] >>
                             ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar39 & 0x3f) | uVar39) >>
                           ((uint8_t)uVar13 & 0x3f) | uVar13) >> ((uint8_t)uVar34 & 0x3f) | uVar34) >>
                         ((uint8_t)uVar42 & 0x3f) | uVar42 & 0xffffffffffffff00);
            *puVar37 = (uint64_t)puStack_90 >> (-(char)uVar15 & 0x3fU);
            puStack_f8 = (uint64_t *)((uVar15 >> 3) + (int64_t)puVar37);
            uStack_58 = (uint64_t)((uint32_t)uVar31 & 7);
            bVar44 = 0xc < uVar12;
            uVar12 = lVar26 + uVar12;
          } while (bVar44);
        }
      }
    }
LAB_7fffa5666c77:
    uStack_58 = uStack_58 + 0x8000000000000001;
    uVar19 = (uint32_t)uStack_58;
    *puStack_f8 = ((uint64_t)puStack_90 >> 1 | 0x8000000000000000) >> (-(char)uStack_58 & 0x3fU);
    puStack_f8 = (uint64_t *)((uStack_58 >> 3 & 0x1fffffff) + (int64_t)puStack_f8);
    if (puVar7 < puStack_f8) {
      puStack_f8 = puVar7;
    }
    if (puVar7 <= puStack_f8) {
      return 0;
    }
  }
  else {
    if (uVar12 < 8) {
      return 0;
    }
    if ((uVar12 * 0x20cc532624684c70 | uVar12 * 0x320cc532624684c7 >> 0x3c) == 0x662993123426389) {
      return 0;
    }
    puVar7 = (uint64_t *)((int64_t)param_3 + (uVar12 - 8));
    if ((uVar12 < ((uVar30 & 0xff) * uVar6 >> 3) + 8) || ((0x228a076 - uVar18 & 0xffff) < uVar21)) {
      uVar12 = uVar6;
      if ((uVar6 & 3) == 0) {
        puStack_f8 = (uint64_t *)0x0;
        uVar13 = 0;
        puVar37 = param_3;
      }
      else {
        uVar21 = uVar25 ^ 1;
        if (uVar19 * -0x14046bec <= ~(uVar19 * -0x387c6bc0 >> 4)) {
          uVar21 = uVar25 & 1;
        }
        if ((uVar25 & 3) == 1) {
          uVar13 = 0;
          uVar25 = 0;
        }
        else {
          uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar6) + 1];
          uVar25 = (int)uVar12 + (int)param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar6) + 1];
          uVar13 = (param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar6) + 1] & 0xffffffffffffff00) >>
                   ((uint8_t)uVar12 & 0x3f) | uVar12 & 0xffffffffffffff00;
          uVar12 = uVar6 - 2;
        }
        if (uVar21 != 0) {
          pbVar1 = (uint8_t *)(lVar40 + -1 + uVar12);
          uVar12 = uVar12 - 1;
          uVar22 = param_6[(uint64_t)*pbVar1 + 1];
          uVar25 = uVar25 + (int)uVar22;
          uVar30 = uVar22 - 0x100;
          if ((uVar18 ^ 0x63427d3d) <= 0x8a28a443 - uVar18) {
            uVar30 = uVar22 & 0xffffffffffffff00;
          }
          uVar13 = uVar13 >> ((uint8_t)uVar22 & 0x3f) | uVar30;
        }
        puStack_f8 = (uint64_t *)(uint64_t)(uVar25 & 7);
        puVar37 = (uint64_t *)((uint64_t)((uVar25 & 0xff) >> 3) + (int64_t)param_3);
        bVar44 = (int64_t)puVar37 <= (int64_t)puVar7;
        if (uVar19 * -0x686d74fd == -0x226005bf) {
          bVar44 = puVar7 < puVar37;
        }
        *param_3 = uVar13 >> (-(char)uVar25 & 0x3fU);
        if (bVar44) {
          puVar37 = puVar7;
        }
      }
      uVar25 = (uint32_t)uVar12;
      puStack_90 = puVar37;
      if ((uVar12 & 7) != 0) {
        lVar26 = (int64_t)(int)uVar25;
        uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + lVar26) + 1];
        bVar10 = *(uint8_t *)(lVar40 + -3 + lVar26);
        uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + lVar26) + 1];
        bVar41 = *(uint8_t *)(lVar40 + -2 + lVar26);
        uVar30 = (uint64_t)bVar41;
        if ((int64_t)(uint64_t)((uVar18 ^ 0x4a2b5e3f) + 0x7ffe0240) <
            (int64_t)(int)(uVar18 ^ 0x99092bbd)) {
          uVar30 = (int64_t)(char)bVar41;
        }
        uVar30 = param_6[uVar30 + 1];
        uVar39 = (uint64_t)bVar10;
        if ((int64_t)(uint64_t)~(uVar18 + 0x4cb72b5c) <=
            (int64_t)(int)((uVar18 + 0xc7301025) * -0x3cf4ec75)) {
          uVar39 = (int64_t)(char)bVar10;
        }
        uVar39 = param_6[uVar39 + 1];
        uVar34 = (int64_t)puStack_f8 + uVar22 + uVar12 + uVar39 + uVar30;
        puStack_90 = (uint64_t *)(((uVar34 & 0xff) >> 3) + (int64_t)puVar37);
        puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar34 & 7);
        if (puVar7 < puStack_90) {
          puStack_90 = puVar7;
        }
        uVar13 = (((uVar13 >> ((uint8_t)uVar22 & 0x3f) | uVar22) >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                  ((uint8_t)uVar39 & 0x3f) | uVar39) >> ((uint8_t)uVar12 & 0x3f) |
                 uVar12 & 0xffffffffffffff00;
        *puVar37 = uVar13 >> (-(char)uVar34 & 0x3fU);
        uVar25 = uVar25 - 4;
      }
      if (0 < (int)uVar25) {
        uVar12 = (uint64_t)uVar25;
        while( true ) {
          uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar12) + 1];
          uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + uVar12) + 1];
          uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
          uVar34 = (uVar13 >> ((uint8_t)uVar39 & 0x3f) | uVar39) >> ((uint8_t)uVar22 & 0x3f);
          uVar13 = uVar22 | uVar34;
          if ((int64_t)(uint64_t)(0x5f37b807 - uVar18) <= (int64_t)(int)(-0xef421d4 - uVar18)) {
            uVar13 = uVar34 - uVar22;
          }
          uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + uVar12) + 1];
          uVar13 = (uVar13 >> ((uint8_t)uVar34 & 0x3f) | uVar34) >> ((uint8_t)uVar30 & 0x3f) |
                   uVar30 & 0xffffffffffffff00;
          lVar26 = uVar30 + uVar34 + (int64_t)puStack_f8 + uVar22;
          uVar22 = lVar26 + uVar39;
          uVar30 = uVar22 & 0xff;
          if ((uint64_t)(int64_t)(int)~(uVar19 * 0x4563d0c1) < (uint64_t)(uVar18 + 0x5fb0b688)) {
            uVar30 = uVar39 + 0xff + lVar26;
          }
          puVar37 = (uint64_t *)((uVar30 >> 3) + (int64_t)puStack_90);
          if (puVar7 < puVar37) {
            puVar37 = puVar7;
          }
          *puStack_90 = uVar13 >> (-(char)uVar30 & 0x3fU);
          uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + uVar12) + 1];
          uVar39 = uVar30 & 0xffffffffffffff00;
          if ((int64_t)
              (uint64_t)
              ((uVar18 + 0xbbd7a6be >> 1 | (uint32_t)((uVar18 + 0xbbd7a6be & 1) != 0) << 0x1f) +
              0x88ef50a2) < (int64_t)(int)(uVar19 * -0x3e8886db ^ 0xdd1e4c1)) {
            uVar39 = uVar30 + 0x100;
          }
          uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1];
          uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + uVar12) + 1];
          lVar26 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + uVar12) + 1] + uVar30 +
                   uVar15 + uVar34;
          uVar31 = (uint64_t)((uint32_t)uVar22 & 7) + lVar26;
          uVar22 = uVar31 & 0xff;
          uVar13 = uVar13 >> ((uint8_t)lVar26 & 0x3f) |
                   ((param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + uVar12) + 1] >>
                     ((uint8_t)uVar34 & 0x3f) | uVar34) >> ((uint8_t)uVar15 & 0x3f) | uVar15) >>
                   ((uint8_t)uVar30 & 0x3f) | uVar39;
          puStack_90 = (uint64_t *)((uVar22 >> 3) + (int64_t)puVar37);
          if (puVar7 < puStack_90) {
            puStack_90 = puVar7;
          }
          *puVar37 = uVar13 >> 0x40 - uVar22;
          puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar31 & 7);
          if (uVar12 < 9) break;
          uVar12 = uVar12 - 8;
        }
      }
    }
    else {
      puStack_90 = param_3;
      if (uVar21 < 9) {
        if (uVar21 != 8) {
          if (uVar21 == ((0x15e8 - uVar18 ^ 0xffffef45) + 0x65cf & 0xffff)) {
            uVar12 = uVar6;
            if ((uVar6 & 7) == 0) {
              puStack_f8 = (uint64_t *)0x0;
              uVar13 = 0;
            }
            else {
              if ((uVar25 & 7) == 1) {
                uVar13 = 0;
                uVar22 = 0;
              }
              else {
                uVar25 = uVar25 & 6;
                uVar13 = 0;
                uVar22 = 0;
                do {
                  uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar12) + 1];
                  uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
                  uVar22 = uVar22 + uVar30 + uVar39;
                  uVar12 = uVar12 - 2;
                  uVar13 = (uVar13 >> ((uint8_t)uVar39 & 0x3f) | uVar39 & 0xffffffffffffff00) >>
                           ((uint8_t)uVar30 & 0x3f) | uVar30 & 0xffffffffffffff00;
                  uVar25 = uVar25 - 2;
                } while (uVar25 != 0);
              }
              if ((uVar6 & 1) != 0) {
                pbVar1 = (uint8_t *)(lVar40 + -1 + uVar12);
                uVar12 = uVar12 - 1;
                uVar30 = param_6[(uint64_t)*pbVar1 + 1];
                uVar22 = uVar22 + uVar30;
                uVar13 = uVar13 >> ((uint8_t)uVar30 & 0x3f) | uVar30 & 0xffffffffffffff00;
              }
              *param_3 = uVar13 >> (-(char)uVar22 & 0x3fU);
              puStack_90 = (uint64_t *)(((uVar22 & 0xff) >> 3) + (int64_t)param_3);
              puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar22 & 7);
            }
            uVar25 = (uint32_t)uVar12;
            if ((uVar12 & 0xf) != 0) {
              lVar26 = (int64_t)(int)uVar25;
              uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + lVar26) + 1];
              uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + lVar26) + 1];
              uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + lVar26) + 1];
              uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + lVar26) + 1];
              uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + lVar26) + 1];
              uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + lVar26) + 1];
              uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + lVar26) + 1];
              uVar42 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + lVar26) + 1];
              uVar33 = uVar12 + uVar15 + uVar34 + uVar30 + uVar39 + uVar22 +
                       uVar31 + (int64_t)puStack_f8 + uVar42;
              uVar13 = (((((((uVar13 >> ((uint8_t)uVar12 & 0x3f) | uVar12) >> ((uint8_t)uVar30 & 0x3f) |
                            uVar30) >> ((uint8_t)uVar22 & 0x3f) | uVar22) >> ((uint8_t)uVar31 & 0x3f) |
                          uVar31) >> ((uint8_t)uVar42 & 0x3f) | uVar42) >> ((uint8_t)uVar34 & 0x3f) |
                        uVar34) >> ((uint8_t)uVar15 & 0x3f) | uVar15) >> ((uint8_t)uVar39 & 0x3f) |
                       uVar39 & 0xffffffffffffff00;
              *puStack_90 = uVar13 >> (-(char)uVar33 & 0x3fU);
              puStack_90 = (uint64_t *)(((uVar33 & 0xff) >> 3) + (int64_t)puStack_90);
              uVar25 = uVar25 - 8;
              puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar33 & 7);
            }
            if (0 < (int)uVar25) {
              uVar12 = (uint64_t)uVar25;
              while( true ) {
                uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar12) + 1];
                if ((uint64_t)((uVar18 ^ 0xc8493b14) * -0x71d79539 ^ 0x4226fadc) == 0x200000001ad)
                {
                  uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
                  uVar13 = uVar13 >> ((uint8_t)uVar30 & 0x3f) | uVar30;
                }
                else {
                  bVar10 = *(uint8_t *)(lVar40 + -1 + uVar12);
                  uVar30 = (int64_t)(char)bVar10;
                  if ((int)(uVar18 + 0x8d87e7e9) < (int)~(uVar18 + 0x3cab72f2)) {
                    uVar30 = (uint64_t)bVar10;
                  }
                  uVar30 = param_6[uVar30 + 1];
                  uVar13 = uVar13 >> ((uint8_t)uVar30 & 0x3f) | uVar30;
                }
                uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1];
                uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + uVar12) + 1];
                uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + uVar12) + 1];
                uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + uVar12) + 1];
                uVar42 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + uVar12) + 1];
                uVar33 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + uVar12) + 1];
                uVar24 = uVar31 + uVar33 + uVar42 +
                         uVar22 + uVar34 + uVar39 + (int64_t)puStack_f8 + uVar30 + uVar15;
                uVar42 = ((((uVar42 | ((uVar13 >> ((uint8_t)uVar22 & 0x3f) | uVar22) >>
                                       ((uint8_t)uVar15 & 0x3f) | uVar15) >> ((uint8_t)uVar42 & 0x3f)) >>
                            ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar39 & 0x3f) | uVar39) >>
                          ((uint8_t)uVar33 & 0x3f) | uVar33) >> ((uint8_t)uVar34 & 0x3f) |
                         uVar34 & 0xffffffffffffff00;
                *puStack_90 = uVar42 >> (-(char)uVar24 & 0x3fU);
                uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xb + uVar12) + 1];
                uVar30 = param_6[(uint64_t)*(uint8_t *)((int)~(uVar19 * -0xf536cdc) + lVar40 + uVar12)
                                 + 1];
                uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -10 + uVar12) + 1];
                uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x10 + uVar12) + 1];
                uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xf + uVar12) + 1];
                uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xc + uVar12) + 1];
                uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xe + uVar12) + 1];
                uVar33 = uVar39 + uVar34 + uVar15 +
                         uVar13 + uVar22 + uVar30 +
                         param_6[(uint64_t)*(uint8_t *)(lVar40 + -9 + uVar12) + 1] + uVar31;
                uVar43 = ((uint32_t)uVar24 & 7) + uVar33;
                uVar36 = uVar43 & 0xff;
                uVar13 = ((((((param_6[(uint64_t)*(uint8_t *)(lVar40 + -9 + uVar12) + 1] >>
                               ((uint8_t)uVar13 & 0x3f) | uVar13) >> ((uint8_t)uVar22 & 0x3f) | uVar22) >>
                             ((uint8_t)uVar15 & 0x3f) | uVar15) >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                           ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar34 & 0x3f) | uVar34) >>
                         ((uint8_t)uVar39 & 0x3f) | uVar39 & 0xffffffffffffff00 |
                         uVar42 >> (uVar33 & 0xff);
                uVar22 = (uVar24 & 0xff) >> 3;
                *(uint64_t *)((int64_t)puStack_90 + uVar22) = uVar13 >> 0x40 - uVar36;
                puStack_90 = (uint64_t *)((int64_t)puStack_90 + uVar22 + (uVar36 >> 3));
                puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar43 & 7);
                if (uVar12 < 0x11) break;
                uVar12 = uVar12 - 0x10;
              }
            }
            goto LAB_7fffa56670aa;
          }
          uVar21 = uVar25 + (int)((uVar6 & 0xffffffff) / 9) * -9;
          if (uVar21 == 0) {
            puStack_f8 = (uint64_t *)0x0;
            uVar13 = 0;
          }
          else {
            uVar12 = uVar6;
            if (uVar21 == 1) {
              uVar29 = 0;
              uVar13 = 0;
LAB_7fffa56654df:
              pbVar1 = (uint8_t *)(lVar40 + -1 + uVar12);
              uVar12 = uVar12 - 1;
              uVar22 = param_6[(uint64_t)*pbVar1 + 1];
              uVar29 = uVar29 + (int)uVar22;
              uVar30 = uVar22 * 0xff;
              if ((uint64_t)(uVar18 + 0xcbbba870 ^ 0xbf28b309) <
                  (uint64_t)(int64_t)(int)((uVar18 + 0x5c347c46 ^ 0xb8636c74) + 0xeb298bdb)) {
                uVar30 = uVar22 & 0xff;
              }
              uVar13 = uVar13 >> uVar30 | uVar22 & 0xffffffffffffff00;
            }
            else {
              uVar25 = uVar21 & 0xe;
              uVar13 = 0;
              lVar26 = 0;
              do {
                pbVar1 = (uint8_t *)(lVar40 + -2 + uVar12);
                pbVar2 = (uint8_t *)(lVar40 + -1 + uVar12);
                uVar12 = uVar12 - 2;
                uVar22 = param_6[(uint64_t)*pbVar2 + 1];
                uVar30 = param_6[(uint64_t)*pbVar1 + 1];
                uVar13 = uVar13 >> ((uint8_t)uVar22 & 0x3f);
                lVar26 = lVar26 + uVar22 + uVar30;
                uVar29 = (uint32_t)lVar26;
                uVar39 = uVar13 | uVar22 & 0xffffffffffffff00;
                if (uVar18 != 0xa2aa06b) {
                  uVar39 = uVar13 & uVar22 & 0xffffffffffffff00;
                }
                uVar13 = uVar39 >> ((uint8_t)uVar30 & 0x3f) | uVar30 & 0xffffffffffffff00;
                uVar25 = uVar25 - 2;
              } while (uVar25 != 0);
              if ((uVar21 & 1) != (~((uVar18 | 1) * 0xf3bd) & 0xffff)) goto LAB_7fffa56654df;
            }
            uVar25 = (uint32_t)uVar12;
            puStack_f8 = (uint64_t *)(uint64_t)(uVar29 & 7);
            *param_3 = uVar13 >> (-(char)uVar29 & 0x3fU);
            puStack_90 = (uint64_t *)((uint64_t)((uVar29 & 0xff) >> 3) + (int64_t)param_3);
          }
          uVar21 = uVar25 * 0x38e38e39 + 0xe38e38e;
          if (0xe38e38e < (uVar21 >> 1 | (uint32_t)((uVar21 & 1) != 0) << 0x1f)) {
            lVar26 = (int64_t)(int)uVar25;
            uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + lVar26) + 1];
            uVar21 = uVar19 * -0x3bb1c03e + 0xb23180dd;
            uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + lVar26) + 1];
            uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + lVar26) + 1];
            uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + lVar26) + 1];
            uVar15 = uVar12 + uVar39 + (int64_t)puStack_f8;
            uVar34 = uVar15 + uVar30;
            if ((uVar21 * 0x2000 | uVar21 >> 0x13) ==
                (~(uVar18 + 0x69818d85) << 0x19 | ~(uVar18 + 0x69818d85) >> 7)) {
              uVar34 = uVar30 | uVar15;
            }
            uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + lVar26) + 1];
            uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + lVar26) + 1];
            uVar42 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -9 + lVar26) + 1];
            uVar33 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + lVar26) + 1];
            uVar24 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + lVar26) + 1];
            uVar13 = ((((((((uVar13 >> ((uint8_t)uVar12 & 0x3f) | uVar12) >> ((uint8_t)uVar39 & 0x3f) |
                           uVar39) >> ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar15 & 0x3f) |
                         uVar15) >> ((uint8_t)uVar33 & 0x3f) | uVar33) >> ((uint8_t)uVar31 & 0x3f) |
                       uVar31) >> ((uint8_t)uVar22 & 0x3f) | uVar22) >> ((uint8_t)uVar24 & 0x3f) | uVar24)
                     >> ((uint8_t)uVar42 & 0x3f) | uVar42;
            uVar34 = uVar33 + uVar24 + uVar15 + uVar42 + uVar31 + uVar22 + uVar34;
            *puStack_90 = uVar13 >> (-(char)uVar34 & 0x3fU);
            puStack_90 = (uint64_t *)((int64_t)puStack_90 + ((uVar34 & 0xff) >> 3));
            uVar25 = uVar25 - 9;
            puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar34 & 7);
          }
          if (0 < (int)uVar25) {
            uVar12 = (uint64_t)uVar25;
            puStack_130 = (uint64_t *)uVar13;
            while( true ) {
              if ((int64_t)
                  (int)(((0xda85890f - uVar18) * 0x20000 | 0xda85890f - uVar18 >> 0xf) + 0x21cb2e59)
                  == 0xe7b5cc74) {
                bVar44 = 0x12 < uVar12;
                uVar25 = 0x8a28a2cb - uVar18;
              }
              else {
                uVar25 = uVar18 + 0xa7373dae;
                bVar44 = uVar18 + 0xf5d55fa7 < uVar12;
              }
              uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + uVar12) + 1];
              uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + uVar12) + 1];
              bVar10 = (uint8_t)uVar25;
              uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1];
              bVar41 = (uint8_t)uVar22;
              if ((int)(0x1ea80f7c -
                       (uVar19 * 0x6c9a3a23 << (bVar10 & 0x1f) |
                       uVar19 * 0x6c9a3a23 >> 0x20 - (bVar10 & 0x1f))) <
                  (int)((uVar25 ^ 0x1f545673) * uVar19)) {
                bVar9 = ~bVar41;
                uVar21 = ~(uVar25 + 0xd71a22fe >> 1 | (uint32_t)((uVar25 + 0xd71a22fe & 1) != 0) << 0x1f
                          );
                bVar27 = 0xfe;
                if ((uVar21 << 0x1c | uVar21 >> 4) ==
                    (-0x62872d05 << (bVar10 & 0x1f) | 0x9d78d2fbU >> 0x20 - (bVar10 & 0x1f)) *
                    uVar19) {
                  bVar27 = 0;
                }
                uVar21 = 0xd1d2bdaf - uVar18 ^ 0x1a0fa63c;
                bVar28 = bVar27 ^ bVar9;
                if ((uVar18 + 0x2bf63028) * -0x5398fa91 == 0x7320a418) {
                  bVar28 = bVar27 & bVar9;
                }
                bVar41 = bVar41 * '\x04' + '\x03' + bVar9 * 'V' +
                         bVar28 * -0x53 +
                         (-((uint64_t)
                            (int64_t)
                            (int)(uVar21 >> (bVar10 & 0x1f) | uVar21 << 0x20 - (bVar10 & 0x1f)) <
                           (uint64_t)((uVar18 ^ 0x79bd28b4) + 0x4f634c96 ^ uVar25)) & bVar41) *
                         -0x53;
              }
              uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
              uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar12) + 1];
              uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + uVar12) + 1];
              uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -9 + uVar12) + 1];
              uVar42 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + uVar12) + 1];
              uVar25 = uVar19 * 0xd71e084 + 0x3835c52e;
              uVar33 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + uVar12) + 1];
              uVar43 = uVar42 + uVar31 + uVar15 + uVar33 +
                       (int64_t)puStack_f8 + uVar39 + uVar34 + uVar13 + uVar30 + uVar22;
              uVar24 = (uVar43 & 0xff) >> 3;
              uVar31 = (((((((((uint64_t)puStack_130 >> ((uint8_t)uVar39 & 0x3f) | uVar39) >>
                              ((uint8_t)uVar34 & 0x3f) | uVar34) >> (bVar41 & 0x3f) | uVar22) >>
                            ((uint8_t)uVar42 & 0x3f) | uVar42) >> (uVar15 & 0xff) | uVar15) >>
                          ((uint8_t)uVar13 & 0x3f) | uVar13) >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                        ((uint8_t)uVar33 & 0x3f) | uVar33) >> ((uint8_t)uVar31 & 0x3f) | uVar31;
              *puStack_90 = uVar31 >> (-(char)uVar43 & 0x3fU);
              uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x10 + uVar12) + 1];
              uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xf + uVar12) + 1];
              uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xd + uVar12) + 1];
              uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x12 + uVar12) + 1];
              uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xe + uVar12) + 1];
              uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xc + uVar12) + 1];
              uVar42 = param_6[(uint64_t)
                               *(uint8_t *)((short)((uVar4 | 1) * -0x4589 + -0x4fc8) + lVar40 + uVar12)
                               + 1];
              uVar36 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -10 + uVar12) + 1] >>
                       ((uint8_t)uVar42 & 0x3f) | uVar42;
              uVar33 = uVar36 >> ((uint8_t)uVar15 & 0x3f);
              if ((uVar25 >> (bVar10 & 0x1f) | uVar25 << 0x20 - (bVar10 & 0x1f)) != 0x648e2d00) {
                uVar33 = uVar36 - (uVar15 & 0xff);
              }
              uVar36 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x11 + uVar12) + 1];
              uVar42 = uVar34 + uVar30 + uVar13 +
                       param_6[(uint64_t)*(uint8_t *)(lVar40 + -10 + uVar12) + 1] + uVar15 + uVar39 +
                       uVar22 + uVar36 + uVar42;
              uVar43 = ((uint32_t)uVar43 & 7) + uVar42;
              uVar13 = ((((((uVar33 | uVar15) >> ((uint8_t)uVar13 & 0x3f) | uVar13) >>
                           ((uint8_t)uVar34 & 0x3f) | uVar34) >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                         ((uint8_t)uVar22 & 0x3f) | uVar22) >> ((uint8_t)uVar36 & 0x3f) | uVar36) >>
                       ((uint8_t)uVar39 & 0x3f) | uVar39 | uVar31 >> (uVar42 & 0xff);
              *(uint64_t *)((int64_t)puStack_90 + uVar24) = uVar13 >> (-(char)uVar43 & 0x3fU);
              puStack_90 = (uint64_t *)((int64_t)puStack_90 + uVar24 + ((uVar43 & 0xff) >> 3));
              puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar43 & 7);
              if (!bVar44) break;
              uVar12 = uVar12 - 0x12;
              puStack_130 = (uint64_t *)uVar13;
            }
          }
          goto LAB_7fffa56670aa;
        }
        iVar11 = (int)((uVar6 & 0xffffffff) * 0x24924925 >> 0x20);
        uVar21 = ((uVar25 - iVar11 >> 1) + iVar11 >> 2) * -7 + uVar25;
        if ((uint64_t)
            ((0xb1add63U >> (bVar10 & 0x1f) | 0xb1add63 << 0x20 - (bVar10 & 0x1f)) ^ 0xc4d70b16) <
            0xffffffff980b6805 && uVar21 == 0) {
          puStack_f8 = (uint64_t *)0x0;
          uVar13 = 0;
        }
        else {
          uVar12 = uVar6;
          if (uVar21 == 1) {
            uVar39 = 0;
            uVar13 = 0;
LAB_7fffa5663233:
            pbVar1 = (uint8_t *)(lVar40 + -1 + uVar12);
            uVar12 = uVar12 - 1;
            uVar34 = param_6[(uint64_t)*pbVar1 + 1];
            bVar41 = -(uint8_t)uVar34;
            if (uVar18 != 0x4d8ae20f) {
              bVar41 = (uint8_t)uVar34;
            }
            uVar39 = uVar34 + uVar39;
            uVar13 = uVar13 >> (bVar41 & 0x3f) | uVar34 & 0xffffffffffffff00;
          }
          else {
            uVar25 = uVar21 & 6;
            uVar13 = 0;
            uVar39 = 0;
            do {
              uVar25 = uVar25 - 2;
              uVar12 = uVar12 - 2;
              uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + 1 + uVar12) + 1];
              uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + uVar12) + 1];
              uVar39 = uVar39 + uVar15 + uVar34;
              uVar13 = uVar15 & 0xffffffffffffff00 |
                       (uVar13 >> ((uint8_t)uVar34 & 0x3f) | uVar34 & 0xffffffffffffff00) >>
                       ((uint8_t)uVar15 & 0x3f);
            } while (uVar25 != 0);
            if ((uVar21 & 1) != 0) goto LAB_7fffa5663233;
          }
          uVar25 = (uint32_t)uVar12;
          puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar39 & 7);
          *param_3 = uVar13 >> (-(char)uVar39 & 0x3fU);
          puStack_90 = (uint64_t *)(((uVar39 & 0xff) >> 3) + (int64_t)param_3);
        }
        uVar21 = uVar25 * -0x49249249 + 0x12492492;
        if (0x12492492 < (uVar21 >> 1 | (uint32_t)((uVar21 & 1) != 0) << 0x1f)) {
          uVar39 = (uint64_t)(int)uVar25;
          uVar12 = (uint64_t)uVar25;
          uVar25 = (int)(short)(-0xc1 << (bVar10 & 0xf) | 0xff3fU >> 0x10 - (bVar10 & 0xf)) + uVar25
          ;
          if ((int64_t)(int)(uVar18 + 0xa6bc19c4) < 0xc6fdd1b2) {
            uVar12 = uVar39;
          }
          if ((uVar19 * -0x6f5dd998 ^ 0x78afa8f9) < 0x8bcafb6b) {
            iVar11 = uVar18 + 0xcfdcf46d;
            bVar41 = *(uint8_t *)(lVar40 + -3 + uVar12);
            uVar39 = (uint64_t)bVar41;
            if ((0x93e9a61fU >> (bVar10 & 0x1f) | -0x6c1659e1 << 0x20 - (bVar10 & 0x1f)) <=
                (uVar19 * 0x6247e400 | uVar19 * 0x291891f9 >> 0x16)) {
              uVar39 = (int64_t)(char)bVar41;
            }
          }
          else {
            iVar11 = (uVar18 ^ 0xa4f7173b) + 0x11b10c47;
            uVar39 = (uint64_t)*(uint8_t *)(lVar40 + -3 + uVar12);
          }
          uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
          uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + uVar12) + 1];
          uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar12) + 1];
          uVar39 = param_6[uVar39 + 1];
          uVar42 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1];
          uVar33 = param_6[(uint64_t)*(uint8_t *)(lVar40 + (int)uVar25) + 1];
          uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + uVar12) + 1];
          uVar24 = ((((uVar13 >> ((uint8_t)uVar34 & 0x3f) | uVar34) >> ((uint8_t)uVar31 & 0x3f) | uVar31)
                     >> ((uint8_t)uVar39 & 0x3f) | uVar39) >> ((uint8_t)uVar12 & 0x3f) | uVar12) >>
                   ((uint8_t)uVar15 & 0x3f);
          uVar13 = uVar24 & uVar15;
          if (((uVar18 - iVar11) + -0x19d1e7f6) * 0x3374ba39 <= (uVar18 ^ 0x31b65cb4) - iVar11) {
            uVar13 = uVar24 | uVar15;
          }
          uVar13 = (uVar13 >> ((uint8_t)uVar42 & 0x3f) | uVar42) >> ((uint8_t)uVar33 & 0x3f) |
                   uVar33 & 0xffffffffffffff00;
          uVar33 = (int64_t)puStack_f8 + uVar34 + uVar42 + uVar15 + uVar31 + uVar12 + uVar39 +
                   uVar33;
          *puStack_90 = uVar13 >> (-(char)uVar33 & 0x3fU);
          puStack_90 = (uint64_t *)(((uVar33 & 0xff) >> 3) + (int64_t)puStack_90);
          puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar33 & 7);
        }
        if (0 < (int)uVar25) {
          puStack_130 = (uint64_t *)((uint64_t)uVar25 + 0xe);
          uVar12 = ~uVar30;
          puVar37 = puStack_90;
          do {
            uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x10 + (int64_t)puStack_130) + 1];
            uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x14 + (int64_t)puStack_130) + 1];
            uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xf + (int64_t)puStack_130) + 1];
            uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x12 + (int64_t)puStack_130) + 1];
            uVar42 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x11 + (int64_t)puStack_130) + 1];
            uVar13 = (uVar13 >> ((uint8_t)uVar15 & 0x3f) | uVar15) >> ((uint8_t)uVar39 & 0x3f) | uVar39;
            lVar26 = (int64_t)puStack_f8 + uVar15 + uVar39;
            if (uVar19 * 0x471f9e66 <= uVar18 + 0x5298934a) {
              lVar26 = ((int64_t)puStack_f8 + uVar15) * uVar39;
            }
            if ((uint64_t)
                (int64_t)
                (int)(0xf27f6422U >> (bVar10 & 0x1f) | -0xd809bde << 0x20 - (bVar10 & 0x1f)) <
                (uint64_t)(uVar19 * 0x4cb922e5 + 0x2229bcd2)) {
              uVar15 = (uint64_t)
                       (0x690b649f << (bVar10 & 0x1f) | 0x690b649fU >> 0x20 - (bVar10 & 0x1f));
              uVar33 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x15 + (int64_t)puStack_130) + 1];
              uVar24 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x13 + (int64_t)puStack_130) + 1];
              lVar14 = uVar34 + uVar31 + uVar24 + uVar33;
              uVar24 = ((uVar13 >> ((uint8_t)uVar42 & 0x3f) | uVar42) >> ((uint8_t)uVar31 & 0x3f) | uVar31
                       ) >> ((uint8_t)uVar24 & 0x3f) | uVar24;
            }
            else {
              uVar39 = (uVar13 >> ((uint8_t)uVar42 & 0x3f) | uVar42) >> ((uint8_t)uVar31 & 0x3f);
              uVar15 = 0xffffffffe6e30762;
              uVar13 = uVar39 | uVar31;
              if ((-0x4fb0e16b << (bVar10 & 0x1f) | 0xb04f1e95U >> 0x20 - (bVar10 & 0x1f)) ==
                  0xdddea1e1) {
                uVar13 = uVar39 + uVar31;
              }
              uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x13 + (int64_t)puStack_130) + 1];
              uVar33 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x15 + (int64_t)puStack_130) + 1];
              uVar24 = uVar13 >> ((uint8_t)uVar39 & 0x3f) | uVar39;
              lVar14 = uVar34 + uVar31 + uVar33 + uVar39;
            }
            uVar36 = lVar14 + lVar26 + uVar42;
            uVar29 = (uint32_t)uVar15;
            bVar9 = (uint8_t)uVar15 & 0x1f;
            uVar32 = (uVar24 >> (uVar34 & 0xff) | uVar34) >> ((uint8_t)uVar33 & 0x3f) |
                     uVar33 & 0xffffffffffffff00;
            *puVar37 = uVar32 >> (-(char)uVar36 & 0x3fU);
            uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x1c + (int64_t)puStack_130) + 1];
            uVar35 = ~uVar13;
            uVar42 = (uVar36 & 0xff) >> 3;
            uVar25 = uVar29 | 1;
            uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x1a + (int64_t)puStack_130) + 1];
            uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x19 + (int64_t)puStack_130) + 1];
            uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x1b + (int64_t)puStack_130) + 1];
            uVar24 = uVar13 ^ 0xff;
            uVar43 = uVar13 & 0xffffffffffffff00;
            bVar41 = *(uint8_t *)(lVar40 + -0x17 + (int64_t)puStack_130);
            uVar21 = uVar29 + 0x6ba2ddc5 >> (bVar10 & 0x1f) |
                     uVar29 + 0x6ba2ddc5 << 0x20 - (bVar10 & 0x1f);
            uVar33 = (int64_t)(char)bVar41;
            if ((int64_t)(int)(uVar21 << 0x18 | uVar21 >> 8) <
                (int64_t)
                (uint64_t)
                ((~(uVar18 + 0xa7b8c755) << 0x11 | ~(uVar18 + 0xa7b8c755) >> 0xf) ^ 0xd769ccb4)) {
              uVar33 = (uint64_t)bVar41;
            }
            uVar8 = (uVar43 & uVar22 | uVar30) *
                    (uint64_t)((uVar18 + 0xd41b1f86 ^ uVar29) + 0xdb477fa6);
            uVar16 = ~uVar22;
            uVar21 = (uint32_t)uVar16 & (uint32_t)(uVar35 & 0xff);
            uVar33 = param_6[uVar33 + 1];
            uVar17 = (uVar16 ^ uVar13 & 0xff) & uVar30;
            uVar20 = (uVar43 ^ uVar16) + uVar12;
            if (uVar25 * 0x63aaea39 + 0xae7cdc39 <
                (0xb7f6933e - uVar18 >> bVar9 | 0xb7f6933e - uVar18 << 0x20 - bVar9)) {
              uVar20 = uVar12 & (uVar43 ^ uVar16);
            }
            uVar23 = uVar36 - 7;
            if ((int64_t)(int)~(uVar18 + 0xb47ab705 ^ uVar29) <
                (int64_t)(uint64_t)((uVar18 + 0x1ed5bdc3) * uVar25 - 0x107)) {
              uVar23 = (uint64_t)((uint32_t)uVar36 & 7);
            }
            uVar38 = (uVar35 & uVar22 & 0x1fffffffffffff00 ^ uVar30) * -0x13ee3838 +
                     ((uVar22 ^ uVar24) & uVar30) * 0x1f87879c +
                     ((uVar25 * 0x6a589326 + uVar18) * 0x1647791b) * uVar17;
            uVar36 = uVar38 & uVar8;
            if (((uVar18 + 0x44e6e0fa) * 2 | (uint32_t)((int)(uVar18 + 0x44e6e0fa) < 0)) * -0x18a4b0ff -
                uVar29 == -0x3715ae98) {
              uVar36 = uVar8 + uVar38;
            }
            uVar8 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x18 + (int64_t)puStack_130) + 1];
            lVar26 = uVar8 + uVar34 + uVar39 +
                     param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x16 + (int64_t)puStack_130) + 1] +
                     uVar31 + uVar33 + uVar13;
            uVar23 = uVar23 + lVar26;
            puStack_90 = (uint64_t *)((int64_t)puVar37 + uVar42 + ((uVar23 & 0xff) >> 3));
            puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar23 & 7);
            uVar38 = uVar13 - 0xff;
            if ((int64_t)(uint64_t)(uVar29 ^ 0xef6e4b52) < (int64_t)(uVar15 + 0x800191cfb65)) {
              uVar38 = uVar24;
            }
            uVar13 = ((uVar17 * -0x5aece5d7 + (uVar16 & uVar30 & uVar24) * -0x3375bfd3 +
                       ((uVar13 ^ 0xffffffffffffff00) & uVar22 & uVar30) * -0x3375bfd5 +
                      (uint64_t)(uVar21 & (uint32_t)uVar30) * 0x13ee3836) -
                     ((uint64_t)(uVar21 & (uint32_t)uVar12) | (uVar35 & 0xff ^ uVar16) & uVar30)) +
                     uVar36 + (uVar38 & ~(uVar22 | uVar30)) *
                              (int64_t)(int)(uVar25 * -0x4b6b8d7d ^ 0xcca31a60) +
                              (((((uint64_t)((uint32_t)uVar22 | (uint32_t)uVar35) | 0x1fffffffffffff00) ^
                                uVar30) + (((uVar13 | 0xff) ^ uVar22) & uVar12)) -
                              (uVar20 + ((uVar43 | uVar22) ^ uVar30))) * 0x13ee3838 |
                     uVar32 >> ((uint8_t)lVar26 & 0x3f) |
                     ((((uVar8 | (param_6[(uint64_t)
                                          *(uint8_t *)(lVar40 + -0x16 + (int64_t)puStack_130) + 1] >>
                                  ((uint8_t)uVar33 & 0x3f) | uVar33) >> ((uint8_t)uVar8 & 0x3f)) >>
                        ((uint8_t)uVar34 & 0x3f) | uVar34) >> ((uint8_t)uVar39 & 0x3f) | uVar39) >>
                      ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar13 & 0x3f);
            *(uint64_t *)((int64_t)puVar37 + uVar42) = uVar13 >> (-(char)uVar23 & 0x3fU);
            puStack_130 = (uint64_t *)((int64_t)puStack_130 - 0xe);
            puVar37 = puStack_90;
          } while (0xe < puStack_130);
        }
      }
      else {
        if (((uVar18 | 1) * 0xee38 + 0x6ea2 & 0xffff) <= uVar21) {
          if (uVar21 < 0xb) {
            uVar21 = uVar25 + (int)((uVar6 & 0xffffffff) / 5) * -5;
            if (uVar21 == (uVar18 + 0x5f95 & 0xffff)) {
              puStack_f8 = (uint64_t *)0x0;
              uVar13 = 0;
              puVar37 = param_3;
            }
            else {
              uVar12 = uVar6;
              if (uVar21 == 1) {
                uVar29 = 0;
                uVar13 = 0;
LAB_7fffa5666d98:
                uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
                uVar12 = uVar12 - 1;
                uVar29 = uVar29 + (int)uVar22;
                uVar13 = uVar13 >> ((uint8_t)uVar22 & 0x3f) | uVar22 & 0xffffffffffffff00;
              }
              else {
                uVar25 = uVar21 & 6;
                uVar13 = 0;
                lVar26 = 0;
                do {
                  uVar25 = uVar25 - 2;
                  uVar12 = uVar12 - 2;
                  uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + uVar12) + 1];
                  uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + 1 + uVar12) + 1];
                  lVar26 = lVar26 + uVar22 + uVar30;
                  uVar29 = (uint32_t)lVar26;
                  uVar30 = (uVar13 >> ((uint8_t)uVar30 & 0x3f) | uVar30 & 0xffffffffffffff00) >>
                           ((uint8_t)uVar22 & 0x3f);
                  uVar13 = uVar30 | uVar22 & 0xffffffffffffff00;
                  if ((uint64_t)(int64_t)(int)(uVar19 * 0x1fc40000 | uVar19 * 0x34e83f88 >> 0x11)
                      < (uint64_t)(uVar18 ^ 0x75cb956e)) {
                    uVar13 = uVar30 ^ uVar22 & 0xffffffffffffff00;
                  }
                } while (uVar25 != 0);
                if ((uVar21 & 1) != ((uVar18 ^ 0xa06b) & 0xffff)) goto LAB_7fffa5666d98;
              }
              uVar25 = (uint32_t)uVar12;
              puStack_f8 = (uint64_t *)(uint64_t)(uVar29 & 7);
              *param_3 = uVar13 >> (-(char)uVar29 & 0x3fU);
              puVar37 = (uint64_t *)((uint64_t)((uVar29 & 0xff) >> 3) + (int64_t)param_3);
            }
            uVar19 = uVar25 * -0x33333333 + 0x19999998;
            puStack_90 = puVar37;
            if (0x19999998 < (uVar19 >> 1 | (uint32_t)((uVar19 & 1) != 0) << 0x1f)) {
              lVar26 = (int64_t)(int)uVar25;
              uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + lVar26) + 1];
              uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + lVar26) + 1];
              uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + lVar26) + 1];
              uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + lVar26) + 1];
              uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + lVar26) + 1];
              uVar31 = uVar39 + (int64_t)puStack_f8 + uVar12 + uVar22 + uVar34 + uVar30;
              uVar13 = uVar13 >> ((uint8_t)uVar34 & 0x3f);
              puStack_90 = (uint64_t *)(((uVar31 & 0xff) >> 3) + (int64_t)puVar37);
              puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar31 & 7);
              uVar15 = uVar13 | uVar34;
              if (((uVar18 + 0x36e981ca) * 0x40000 | uVar18 + 0x36e981ca >> 0xe) != 0x88d50450) {
                uVar15 = uVar13 & uVar34;
              }
              uVar22 = uVar15 >> ((uint8_t)uVar22 & 0x3f) | uVar22;
              uVar13 = ((uVar22 ^ 0x8000000000000000) >> (uVar39 & 0xff)) -
                       (0x8000000000000000U >> (uVar39 & 0xff));
              if ((int64_t)(int)((uVar18 + 0x598b5d53) * 0x80 | uVar18 + 0x598b5d53 >> 0x19) <=
                  (int64_t)(uint64_t)(0xbacc656a - uVar18 ^ 0x987450b4)) {
                uVar13 = uVar22 >> ((uint8_t)uVar39 & 0x3f);
              }
              uVar13 = ((uVar13 | uVar39) >> ((uint8_t)uVar12 & 0x3f) | uVar12) >>
                       ((uint8_t)uVar30 & 0x3f) | uVar30;
              *puVar37 = uVar13 >> (-(char)uVar31 & 0x3fU);
              uVar25 = uVar25 - 5;
            }
            if (0 < (int)uVar25) {
              uVar12 = (uint64_t)uVar25 + 10;
              puVar37 = puStack_90;
              do {
                uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xc + uVar12) + 1];
                uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xb + uVar12) + 1];
                uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xd + uVar12) + 1];
                uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xe + uVar12) + 1];
                uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xf + uVar12) + 1];
                uVar42 = uVar22 + uVar39 + (int64_t)puStack_f8 + uVar30 + uVar15 + uVar34;
                uVar31 = (uVar42 & 0xff) >> 3;
                uVar15 = ((((uVar13 >> ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar22 & 0x3f) |
                           uVar22) >> ((uint8_t)uVar39 & 0x3f) | uVar39) >> ((uint8_t)uVar34 & 0x3f) |
                         uVar34) >> ((uint8_t)uVar15 & 0x3f) | uVar15;
                *puVar37 = uVar15 >> (-(char)uVar42 & 0x3fU);
                uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x11 + uVar12) + 1];
                uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x13 + uVar12) + 1];
                uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x12 + uVar12) + 1];
                uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x14 + uVar12) + 1];
                lVar26 = uVar22 + param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x10 + uVar12) + 1] +
                         uVar13 + uVar39 + uVar30;
                uVar34 = lVar26 + (uint64_t)((uint32_t)uVar42 & 7);
                puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar34 & 7);
                puStack_90 = (uint64_t *)((int64_t)puVar37 + ((uVar34 & 0xff) >> 3) + uVar31);
                uVar13 = uVar15 >> ((uint8_t)lVar26 & 0x3f) |
                         (((param_6[(uint64_t)*(uint8_t *)(lVar40 + -0x10 + uVar12) + 1] >>
                            ((uint8_t)uVar22 & 0x3f) | uVar22) >> ((uint8_t)uVar13 & 0x3f) | uVar13) >>
                          ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar39 & 0x3f) | uVar39;
                *(uint64_t *)((int64_t)puVar37 + uVar31) = uVar13 >> (-(char)uVar34 & 0x3fU);
                uVar12 = uVar12 - 10;
                puVar37 = puStack_90;
              } while (10 < uVar12);
            }
            goto LAB_7fffa56670aa;
          }
          uVar21 = uVar25 + (int)((uVar6 & 0xffffffff) / 5) * -5;
          if (uVar21 == 0) {
            puStack_f8 = (uint64_t *)0x0;
            uVar13 = 0;
          }
          else {
            if (uVar21 == (~((uVar18 | 1) * 0xe77a) & 0xffff)) {
              uVar29 = 0;
              uVar13 = 0;
              uVar12 = uVar6;
LAB_7fffa5665cd7:
              uVar22 = uVar12 - 1;
              uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
              uVar29 = uVar29 + (int)uVar12;
              uVar30 = uVar13 << ((uint8_t)uVar12 & 0x3f);
              if ((int64_t)(int)(uVar18 + 0x7fb27758) <= (int64_t)(uint64_t)(0x92fe23e7 - uVar18)
                 ) {
                uVar30 = uVar13 >> ((uint8_t)uVar12 & 0x3f);
              }
              uVar13 = uVar30 | uVar12 & 0xffffffffffffff00;
            }
            else {
              uVar25 = uVar21 & 6;
              uVar13 = 0;
              lVar26 = 0;
              uVar22 = uVar6;
              do {
                uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar22) + 1];
                uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar22) + 1];
                lVar26 = lVar26 + uVar30 + uVar12;
                uVar29 = (uint32_t)lVar26;
                uVar22 = uVar22 - 2;
                uVar13 = (uVar13 >> ((uint8_t)uVar12 & 0x3f) | uVar12 & 0xffffffffffffff00) >>
                         ((uint8_t)uVar30 & 0x3f) | uVar30 & 0xffffffffffffff00;
                uVar25 = uVar25 - 2;
              } while (uVar25 != 0);
              uVar12 = uVar22;
              if ((uVar21 & 1) != 0) goto LAB_7fffa5665cd7;
            }
            uVar25 = (uint32_t)uVar22;
            puStack_90 = (uint64_t *)((uint64_t)((uVar29 & 0xff) >> 3) + (int64_t)param_3);
            *param_3 = uVar13 >> (-(char)uVar29 & 0x3fU);
            puStack_f8 = (uint64_t *)(uint64_t)(uVar29 & 7);
          }
          uVar21 = uVar25 * -0x33333333 + 0x19999998;
          if (0x19999998 < (uVar21 >> 1 | (uint32_t)((uVar21 & 1) != 0) << 0x1f)) {
            if ((int64_t)(int)((uVar18 + 0x1f5ac944) * -0x66cda1a5) <
                (int64_t)(uint64_t)((uVar18 + 0xa130a151) * 0x2000 | uVar18 + 0xa130a151 >> 0x13))
            {
              uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + (int64_t)(int)uVar25) + 1];
              uVar22 = uVar13 >> ((uint8_t)uVar12 & 0x3f) | uVar12;
              uVar21 = ~((uVar18 + 0x5deb79f9) * -0x6758dd83);
            }
            else {
              uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + (int64_t)(int)uVar25) + 1];
              uVar39 = ~uVar12;
              uVar13 = uVar13 >> ((uint8_t)uVar12 & 0x3f);
              uVar30 = ~uVar13;
              uVar21 = (uVar18 ^ 0xdb0d0b7a) + 0x3a8f872b;
              uVar22 = 0xffffffffffffffff;
              if (0x2a88a6bb <
                  (-0x6502389f << (bVar10 & 0x1f) | 0x9afdc761U >> 0x20 - (bVar10 & 0x1f))) {
                uVar22 = uVar30;
              }
              uVar22 = (uVar22 & uVar39) * 0x123f6f3f8 + uVar39 * -0x63f6f36d +
                       (uVar30 | uVar39) * -0xc000008b + (uVar39 & uVar13) * 0x123f6f3f9 +
                       (uint64_t)(uVar18 + 0xa616f42d ^ 0x70419414) * (uVar12 & uVar30) +
                       (uVar13 & uVar12);
            }
            lVar26 = (int64_t)(int)uVar25;
            uVar25 = uVar25 - 5;
            uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + lVar26) + 1];
            uVar13 = (int64_t)(int)uVar25;
            if ((int64_t)(uint64_t)(((uVar21 | 1) * -0x558ff382 ^ 0x5a79d54b) * uVar19) <
                (int64_t)(int)((uVar18 ^ 0x34022244) + uVar21)) {
              uVar13 = (uint64_t)uVar25;
            }
            uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + lVar26) + 1];
            uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + lVar26) + 1];
            uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + uVar13) + 1];
            uVar12 = uVar12 + uVar30 + (int64_t)puStack_f8 + uVar39 + uVar34 + uVar13;
            uVar13 = (((uVar22 >> ((uint8_t)uVar39 & 0x3f) | uVar39) >> ((uint8_t)uVar34 & 0x3f) | uVar34)
                      >> (uVar30 & 0xff) | uVar30) >> ((uint8_t)uVar13 & 0x3f) |
                     uVar13 & 0xffffffffffffff00;
            *puStack_90 = uVar13 >> (-(char)uVar12 & 0x3fU);
            puStack_90 = (uint64_t *)(((uVar12 & 0xff) >> 3) + (int64_t)puStack_90);
            puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar12 & 7);
          }
          if ((int)(-uVar18 - 0x5f95 & 0xffff) < (int)uVar25) {
            uVar12 = (uint64_t)uVar25;
            do {
              if (0x6383b2bd - uVar18 <
                  (0x3ed4d2c9U >> (bVar10 & 0x1f) | 0x3ed4d2c9 << 0x20 - (bVar10 & 0x1f)) +
                  0x100a4b39) {
                uVar25 = ((uVar18 ^ 0x432cfe61) << 0x14 | (uVar18 ^ 0x432cfe61) >> 0xc) + 0x48817c56
                ;
              }
              else {
                uVar25 = 0x1bfb0c9bU >> (bVar10 & 0x1f) | 0x1bfb0c9b << 0x20 - (bVar10 & 0x1f);
              }
              uVar22 = param_6[(uint64_t)*(uint8_t *)((short)(uVar4 ^ 0x5f90) + lVar40 + uVar12) + 1];
              uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
              uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + uVar12) + 1];
              uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + uVar12) + 1];
              uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar12) + 1];
              uVar31 = (((uVar13 >> ((uint8_t)uVar30 & 0x3f) | uVar30) >> ((uint8_t)uVar15 & 0x3f) |
                        uVar15) >> ((uint8_t)uVar39 & 0x3f) | uVar39) >> ((uint8_t)uVar34 & 0x3f) | uVar34
              ;
              uVar39 = uVar30 + uVar34 + uVar15 + uVar22 + uVar39 + (int64_t)puStack_f8;
              uVar30 = (uVar39 & 0xff) >> 3;
              uVar13 = uVar31 >> ((uint8_t)uVar22 & 0x3f);
              if (((uVar19 * -0x2a528000 | uVar19 * 0x4115ab5b >> 0x11) ^ 0x32a6884a) + uVar25 <
                  ((0xb229af8 - uVar18) * 0x34996513 + -0x6a2217e3) * (uVar25 | 1)) {
                uVar13 = uVar31 ^ uVar22 & 0xff;
              }
              uVar13 = uVar13 | uVar22 & 0xffffffffffffff00;
              *puStack_90 = uVar13 >> (-(char)uVar39 & 0x3fU);
              uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + uVar12) + 1];
              uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -10 + uVar12) + 1];
              uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -9 + uVar12) + 1];
              uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + uVar12) + 1];
              lVar26 = uVar31 + uVar22 + uVar15 + uVar34 +
                       param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1];
              uVar39 = lVar26 + (uint64_t)((uint32_t)uVar39 & 7);
              uVar13 = uVar13 >> ((uint8_t)lVar26 & 0x3f) |
                       (((param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1] >>
                          ((uint8_t)uVar31 & 0x3f) | uVar31) >> ((uint8_t)uVar22 & 0x3f) | uVar22) >>
                        ((uint8_t)uVar15 & 0x3f) | uVar15) >> ((uint8_t)uVar34 & 0x3f) |
                       uVar34 & 0xffffffffffffff00;
              *(uint64_t *)((int64_t)puStack_90 + uVar30) = uVar13 >> (-(char)uVar39 & 0x3fU);
              puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar39 & 7);
              puStack_90 = (uint64_t *)((int64_t)puStack_90 + uVar30 + ((uVar39 & 0xff) >> 3));
              uVar12 = uVar12 - 10;
            } while (10 < uVar12);
          }
          goto LAB_7fffa56670aa;
        }
        uVar21 = uVar25 + (int)((uVar6 & 0xffffffff) / 6) * -6;
        if (uVar21 == 0) {
          puStack_f8 = (uint64_t *)0x0;
          uVar13 = 0;
        }
        else {
          uVar12 = uVar6;
          if (uVar21 == 1) {
            uVar22 = 0;
            uVar13 = 0;
LAB_7fffa56620e4:
            pbVar1 = (uint8_t *)(lVar40 + -1 + uVar12);
            uVar12 = uVar12 - 1;
            uVar39 = param_6[(uint64_t)*pbVar1 + 1];
            uVar30 = uVar39 + uVar22;
            uVar22 = uVar22 & uVar39;
            if (uVar18 == 0xa2aa06b) {
              uVar22 = uVar30;
            }
            uVar13 = uVar13 >> ((uint8_t)uVar39 & 0x3f) | uVar39 & 0xffffffffffffff00;
          }
          else {
            uVar25 = uVar21 & 6;
            uVar13 = 0;
            uVar22 = 0;
            do {
              uVar25 = uVar25 - 2;
              uVar12 = uVar12 - 2;
              uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + 1 + uVar12) + 1];
              uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + uVar12) + 1];
              uVar22 = uVar22 + uVar30 + uVar39;
              uVar13 = uVar39 & 0xffffffffffffff00 |
                       (uVar30 & 0xffffffffffffff00 | uVar13 >> ((uint8_t)uVar30 & 0x3f)) >>
                       ((uint8_t)uVar39 & 0x3f);
            } while (uVar25 != 0);
            if ((uVar21 & 1) != (uVar18 + 0x15f95 & 0xffff)) goto LAB_7fffa56620e4;
          }
          uVar25 = (uint32_t)uVar12;
          *param_3 = uVar13 >> (-(char)uVar22 & 0x3fU);
          puStack_90 = (uint64_t *)(((uVar22 & 0xff) >> 3) + (int64_t)param_3);
          puStack_f8 = (uint64_t *)(uVar22 ^ 7);
          if ((uint64_t)(uVar18 ^ 0xda0503d) <= (uint64_t)(int64_t)(int)(uVar19 * 0x31f65b79)) {
            puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar22 & 7);
          }
        }
        if (0x15555554 < (uVar25 * -0x55555555 + 0x2aaaaaa8 >> 2 | uVar25 * -0x40000000)) {
          lVar26 = (int64_t)(int)uVar25;
          bVar10 = *(uint8_t *)(lVar40 + -3 + lVar26);
          uVar12 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + lVar26) + 1];
          uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + lVar26) + 1];
          uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + lVar26) + 1];
          uVar13 = uVar13 >> ((uint8_t)uVar30 & 0x3f);
          uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + lVar26) + 1];
          uVar34 = uVar13 - uVar30;
          if (0x2a12cb03 < ((0xaad32be2 - uVar18) * 0x400 | 0xaad32be2 - uVar18 >> 0x16)) {
            uVar34 = uVar30 | uVar13;
          }
          uVar13 = (uint64_t)bVar10;
          if (((uVar18 + 0xe0ac7ad) * 4 | uVar18 + 0xe0ac7ad >> 0x1e) < 0x4743521c - uVar18) {
            uVar13 = (int64_t)(char)bVar10;
          }
          uVar13 = param_6[uVar13 + 1];
          uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + lVar26) + 1];
          uVar30 = uVar12 + uVar30 + uVar22 + uVar39 + uVar15 + (int64_t)puStack_f8 + uVar13;
          uVar13 = ((((uVar34 >> ((uint8_t)uVar39 & 0x3f) | uVar39) >> ((uint8_t)uVar13 & 0x3f) | uVar13)
                     >> ((uint8_t)uVar12 & 0x3f) | uVar12) >> ((uint8_t)uVar15 & 0x3f) | uVar15) >>
                   ((uint8_t)uVar22 & 0x3f) | uVar22 & (uint64_t)DAT_7fffa56bc580;
          *puStack_90 = uVar13 >> (-(char)uVar30 & 0x3fU);
          puStack_90 = (uint64_t *)(((uVar30 & 0xff) >> 3) + (int64_t)puStack_90);
          uVar25 = uVar25 - 6;
          puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar30 & 7);
        }
        if (0 < (int)uVar25) {
          uVar12 = (uint64_t)uVar25;
          do {
            uVar22 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -5 + uVar12) + 1];
            uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -2 + uVar12) + 1];
            uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -3 + uVar12) + 1];
            uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -6 + uVar12) + 1];
            uVar15 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -1 + uVar12) + 1];
            uVar31 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -4 + uVar12) + 1];
            uVar42 = uVar34 + uVar15 + uVar31 + (int64_t)puStack_f8 + uVar22 + uVar39 + uVar30;
            uVar15 = (((((uVar13 >> ((uint8_t)uVar15 & 0x3f) | uVar15) >> ((uint8_t)uVar30 & 0x3f) |
                        uVar30) >> ((uint8_t)uVar39 & 0x3f) | uVar39) >> ((uint8_t)uVar31 & 0x3f) | uVar31
                      ) >> ((uint8_t)uVar22 & 0x3f) | uVar22) >> ((uint8_t)uVar34 & 0x3f) |
                     uVar34 & 0xffffffffffffff00;
            *puStack_90 = uVar15 >> (-(char)uVar42 & 0x3fU);
            uVar22 = param_6[(uint64_t)
                             *(uint8_t *)((short)((uint16_t)~(uVar18 ^ 0xa477a079) >> 1 |
                                              (uint16_t)((~(uVar18 ^ 0xa477a079) & 1) != 0) << 0xf) +
                                       lVar40 + uVar12) + 1];
            uVar30 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xb + uVar12) + 1];
            uVar13 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -0xc + uVar12) + 1];
            uVar39 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -9 + uVar12) + 1];
            uVar34 = param_6[(uint64_t)*(uint8_t *)(lVar40 + -8 + uVar12) + 1];
            lVar26 = uVar34 + uVar30 +
                     uVar22 + param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + uVar12) + 1] + uVar39 +
                     uVar13;
            uVar31 = (uint64_t)((uint32_t)uVar42 & 7) + lVar26;
            uVar13 = ((((param_6[(uint64_t)*(uint8_t *)(lVar40 + -7 + uVar12) + 1] >>
                         ((uint8_t)uVar34 & 0x3f) | uVar34) >> ((uint8_t)uVar39 & 0x3f) | uVar39) >>
                       ((uint8_t)uVar22 & 0x3f) | uVar22) >> ((uint8_t)uVar30 & 0x3f) | uVar30) >>
                     ((uint8_t)uVar13 & 0x3f) |
                     uVar15 >> ((uint8_t)lVar26 & 0x3f) | uVar13 & 0xffffffffffffff00;
            uVar22 = (uVar42 & 0xff) >> 3;
            *(uint64_t *)((int64_t)puStack_90 + uVar22) = uVar13 >> (-(char)uVar31 & 0x3fU);
            puStack_f8 = (uint64_t *)(uint64_t)((uint32_t)uVar31 & 7);
            puStack_90 = (uint64_t *)((int64_t)puStack_90 + ((uVar31 & 0xff) >> 3) + uVar22);
            bVar44 = 0xc < uVar12;
            uVar12 = (int64_t)(short)(0xcda - (uVar4 ^ 0xac8d)) + uVar12;
          } while (bVar44);
        }
      }
    }
LAB_7fffa56670aa:
    uVar22 = (int64_t)puStack_f8 + 0x8000000000000001;
    uVar19 = (uint32_t)uVar22;
    *puStack_90 = (uVar13 >> 1 | 0x8000000000000000) >> (-(char)uVar22 & 0x3fU);
    uVar12 = (uVar22 & 0xff) * 3;
    if ((uVar18 + 0xff99994) * -0x65dd951f <= ~(uVar18 ^ 0x4cdc8ad1)) {
      uVar12 = (uVar22 & 0xff) >> 3;
    }
    puStack_f8 = (uint64_t *)(uVar12 + (int64_t)puStack_90);
    if (puVar7 < (uint64_t *)(uVar12 + (int64_t)puStack_90)) {
      puStack_f8 = puVar7;
    }
    if (puVar7 <= puStack_f8) {
      return 0;
    }
  }
  uVar12 = (int64_t)puStack_f8 - ((int64_t)param_3 + ((uint64_t)((uVar19 & 7) == 0) - 1));
LAB_7fffa5660bef:
  if ((uint64_t)(int64_t)(short)(~(uVar4 ^ 0xaeab) << 0xb | (uint16_t)~(uVar4 ^ 0xaeab) >> 5) <=
      uVar12) {
    return uVar12;
  }
  if (uVar12 == 0) {
                    /* WARNING: Read-only address (ram,0x7fffa56bc580) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc580) is written */
    return 0;
  }
  uVar12 = (int64_t)param_3 + (uVar12 - in_R11);
  if (uVar12 < uVar6 - 1) {
    return uVar12;
  }
  return 0;
}

