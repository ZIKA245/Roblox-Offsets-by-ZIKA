// Subsystem: Internal Routines Cluster 11 (0xaf2140 .. 0xb65830)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : Unwind@7fffa5262140  |  RVA: 0xaf2140  |  Size: 336 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5262140(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  uVar1 = (uint16_t)*(uint32_t *)(param_2 + 0x290) ^ 0x1b1c;
  (*(code *)((int64_t)
             (short)((uVar1 << 0xb | uVar1 >> 5) ^ (uint16_t)*(uint32_t *)(param_2 + 0x58)) +
            0x7fffa568c03a))
            (*(uint64_t *)(param_2 + 0x298),param_2,
             *(uint64_t *)(param_2 + 0x88) >> 0x3d ^ *(uint64_t *)(param_2 + 0x88));
  return;
}


// ============================================================================
// Function : Unwind@7fffa5262290  |  RVA: 0xaf2290  |  Size: 4246 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa5262290(void) {
    /* +0xaf2290 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0xaf2295 */ __asm { PUSH RBP }
    /* +0xaf2296 */ __asm { PUSH RDI }
    /* +0xaf2297 */ __asm { PUSH R12 }
    /* +0xaf2299 */ __asm { PUSH R14 }
    /* +0xaf229b */ __asm { PUSH RBX }
    /* +0xaf229c */ __asm { PUSH RSI }
    /* +0xaf229d */ __asm { PUSH R15 }
    /* +0xaf229f */ __asm { PUSH R13 }
    /* +0xaf22a1 */ __asm { SUB RSP,0xd8 }
    /* +0xaf22a8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0xaf22af */ __asm { MOVDQA xmmword ptr [RSP + 0x30],XMM7 }
    /* +0xaf22b5 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM8 }
    /* +0xaf22bc */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM12 }
    /* +0xaf22c3 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM15 }
    /* +0xaf22ca */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0xaf22d0 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM9 }
    /* +0xaf22da */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM10 }
    /* +0xaf22e4 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0xaf22ee */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM11 }
    /* +0xaf22f8 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM13 }
    /* +0xaf2302 */ __asm { CMP qword ptr [RBP + 0x1e0],0x0 }
    /* +0xaf230a */ __asm { JZ 0x7fffa5262455 }
    /* +0xaf2310 */ __asm { LEA RAX,[0x7fffa568e86c] }
    /* +0xaf2317 */ __asm { MOV R8W,0x3cd7 }
    /* +0xaf231c */ __asm { MOV R9,qword ptr [RBP + -0x28] }
    /* +0xaf2320 */ __asm { LEA R10D,[R9 + R8*0x1] }
    /* +0xaf2324 */ __asm { MOV ECX,0x1464e367 }
    /* +0xaf2329 */ __asm { XOR ECX,dword ptr [RBP + 0x210] }
    /* +0xaf232f */ __asm { ROR ECX,0x1 }
    /* +0xaf2331 */ __asm { MOV RSI,qword ptr [RBP + 0x1e0] }
    /* +0xaf2338 */ __asm { MOV R8D,0x3121c253 }
    /* +0xaf233e */ __asm { XOR R10D,0x256c }
    /* +0xaf2345 */ __asm { MOVSX R9,R10W }
    /* +0xaf2349 */ __asm { ADD R9,RAX }
    /* +0xaf234c */ __asm { MOV R11D,0x81ed9fa6 }
    /* +0xaf2352 */ __asm { SUB R11D,ECX }
    /* +0xaf2355 */ __asm { MOV RCX,RDX }
    /* +0xaf2358 */ __asm { MOV RAX,RCX }
    /* +0xaf235b */ __asm { NOT RAX }
    /* +0xaf235e */ __asm { ADD R8D,0xd0b7ad9c }
    /* +0xaf2365 */ __asm { XOR R8D,dword ptr [RBP + 0x218] }
    /* +0xaf236c */ __asm { IMUL R8D,dword ptr [RBP + 0xa8] }
    /* +0xaf2374 */ __asm { MOVSXD R8,R8D }
    /* +0xaf2377 */ __asm { MOVQ XMM4,RSI }
    /* +0xaf237c */ __asm { MOV R14,RSI }
    /* +0xaf237f */ __asm { SHR R14,0x3d }
    /* +0xaf2383 */ __asm { MOV RDX,RSI }
    /* +0xaf2386 */ __asm { XOR RDX,R14 }
    /* +0xaf2389 */ __asm { MOVQ XMM2,RDX }
    /* +0xaf238e */ __asm { OR RDX,RAX }
    /* +0xaf2391 */ __asm { MOVQ XMM5,R14 }
    /* +0xaf2396 */ __asm { MOV R10,-0x10e2fb757 }
    /* +0xaf23a0 */ __asm { IMUL R10,RDX }
    /* +0xaf23a4 */ __asm { MOV R13,R14 }
    /* +0xaf23a7 */ __asm { NOT R13 }
    /* +0xaf23aa */ __asm { MOV R15,RSI }
    /* +0xaf23ad */ __asm { OR R15,R13 }
    /* +0xaf23b0 */ __asm { AND R13,RSI }
    /* +0xaf23b3 */ __asm { MOV RDI,RCX }
    /* +0xaf23b6 */ __asm { AND RDI,R13 }
    /* +0xaf23b9 */ __asm { MOV RDX,RAX }
    /* +0xaf23bc */ __asm { XOR RDX,R15 }
    /* +0xaf23bf */ __asm { IMUL RDX,R8 }
    /* +0xaf23c3 */ __asm { AND R15,RAX }
    /* +0xaf23c6 */ __asm { MOV RBX,0x1621b1e9b }
    /* +0xaf23d0 */ __asm { IMUL RBX,R15 }
    /* +0xaf23d4 */ __asm { AND R13,RAX }
    /* +0xaf23d7 */ __asm { MOV R8,-0x21732eb11 }
    /* +0xaf23e1 */ __asm { IMUL R8,R13 }
    /* +0xaf23e5 */ __asm { MOV R13D,0xb517cc76 }
    /* +0xaf23eb */ __asm { IMUL R13,RDI }
    /* +0xaf23ef */ __asm { NOT RSI }
    /* +0xaf23f2 */ __asm { OR RSI,R14 }
    /* +0xaf23f5 */ __asm { PXOR XMM5,XMM4 }
    /* +0xaf23f9 */ __asm { MOVQ R14,XMM5 }
    /* +0xaf23fe */ __asm { AND RAX,R14 }
    /* +0xaf2401 */ __asm { MOV R15,0x1621b1e9c }
    /* +0xaf240b */ __asm { IMUL R15,RAX }
    /* +0xaf240f */ __asm { MOVQ XMM4,RCX }
    /* +0xaf2414 */ __asm { POR XMM2,XMM4 }
    /* +0xaf2418 */ __asm { XOR RSI,RCX }
    /* +0xaf241b */ __asm { AND R14,RCX }
    /* +0xaf241e */ __asm { MOV EAX,0xad035226 }
    /* +0xaf2423 */ __asm { IMUL RAX,R14 }
    /* +0xaf2427 */ __asm { MOVQ RCX,XMM2 }
    /* +0xaf242c */ __asm { IMUL RCX,RCX,0x612c6532 }
    /* +0xaf2433 */ __asm { ADD RAX,RCX }
    /* +0xaf2436 */ __asm { IMUL RCX,RSI,-0x53eb6744 }
    /* +0xaf243d */ __asm { ADD RCX,R10 }
    /* +0xaf2440 */ __asm { ADD RCX,R13 }
    /* +0xaf2443 */ __asm { ADD RCX,RBX }
    /* +0xaf2446 */ __asm { ADD RCX,R15 }
    /* +0xaf2449 */ __asm { ADD RCX,RAX }
    /* +0xaf244c */ __asm { ADD R8,RDX }
    /* +0xaf244f */ __asm { ADD R8,RCX }
    /* +0xaf2452 */ __asm { CALL R9 }
    /* +0xaf2455 */ __asm { MOV dword ptr [RBP + 0x160],0xddbdfe79 }
    /* +0xaf245f */ __asm { MOV R10D,dword ptr [RBP + 0x160] }
    /* +0xaf2466 */ __asm { MOV RBX,qword ptr [RBP + -0x8] }
    /* +0xaf246a */ __asm { RDTSC }
    /* +0xaf246c */ __asm { MOV RCX,RDX }
    /* +0xaf246f */ __asm { SHL RCX,0x20 }
    /* +0xaf2473 */ __asm { OR RCX,RAX }
    /* +0xaf2476 */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xaf2480 */ __asm { IMUL RCX,R9 }
    /* +0xaf2484 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xaf248e */ __asm { ADD RCX,R9 }
    /* +0xaf2491 */ __asm { MOVQ XMM2,RCX }
    /* +0xaf2496 */ __asm { SHR RCX,0x3b }
    /* +0xaf249a */ __asm { MOVDQA XMM4,XMM2 }
    /* +0xaf249e */ __asm { PSRLQ XMM4,0x2d }
    /* +0xaf24a3 */ __asm { PSRLQ XMM2,0x1b }
    /* +0xaf24a8 */ __asm { PXOR XMM2,XMM4 }
    /* +0xaf24ac */ __asm { MOVD R8D,XMM2 }
    /* +0xaf24b1 */ __asm { ROR R8D,CL }
    /* +0xaf24b4 */ __asm { AND R8D,0x3 }
    /* +0xaf24b8 */ __asm { CMP R8D,0x2 }
    /* +0xaf24bc */ __asm { JC 0x7fffa526265a }
    /* +0xaf24c2 */ __asm { CMP R8D,0x3 }
    /* +0xaf24c6 */ __asm { JZ 0x7fffa52627c7 }
    /* +0xaf24cc */ __asm { MOV R8D,0x54b3a407 }
    /* +0xaf24d2 */ __asm { MOV RCX,R8 }
    /* +0xaf24d5 */ __asm { ROR RCX,0x1 }
    /* +0xaf24d8 */ __asm { MOV R9,-0x64640cc17d15b7d5 }
    /* +0xaf24e2 */ __asm { IMUL R9,RCX }
    /* +0xaf24e6 */ __asm { MOV RAX,-0x1718441e82590a12 }
    /* +0xaf24f0 */ __asm { ADD RAX,R9 }
    /* +0xaf24f3 */ __asm { MOV R9,0x6231a52ada7cb430 }
    /* +0xaf24fd */ __asm { CMP RAX,R9 }
    /* +0xaf2500 */ __asm { JZ 0x7fffa5262ea5 }
    /* +0xaf2506 */ __asm { MOV R10D,dword ptr [R8 + 0x2b4a5ebd] }
    /* +0xaf250d */ __asm { MOV R9,0x5555555555555556 }
    /* +0xaf2517 */ __asm { IMUL R10,R9 }
    /* +0xaf251b */ __asm { RDTSC }
    /* +0xaf251d */ __asm { SHL RDX,0x20 }
    /* +0xaf2521 */ __asm { OR RDX,RAX }
    /* +0xaf2524 */ __asm { MOV R9,0x5555555555555555 }
    /* +0xaf252e */ __asm { CMP R10,R9 }
    /* +0xaf2531 */ __asm { JA 0x7fffa5262be4 }
    /* +0xaf2537 */ __asm { MOV R9,-0x2ecbdabc217d106b }
    /* +0xaf2541 */ __asm { IMUL RDX,R9 }
    /* +0xaf2545 */ __asm { MOV RCX,0x4506cfed922c7f02 }
    /* +0xaf254f */ __asm { ADD RCX,RDX }
    /* +0xaf2552 */ __asm { MOV R10,RCX }
    /* +0xaf2555 */ __asm { SHR R10,0x2d }
    /* +0xaf2559 */ __asm { MOVD XMM2,R10D }
    /* +0xaf255e */ __asm { MOVQ XMM4,RCX }
    /* +0xaf2563 */ __asm { PSRLQ XMM4,0x1b }
    /* +0xaf2568 */ __asm { PXOR XMM4,XMM2 }
    /* +0xaf256c */ __asm { SHR RCX,0x3b }
    /* +0xaf2570 */ __asm { MOVD R10D,XMM4 }
    /* +0xaf2575 */ __asm { ROR R10D,CL }
    /* +0xaf2578 */ __asm { MOV dword ptr [RBP + 0x160],0xa4d18d71 }
    /* +0xaf2582 */ __asm { MOV ECX,dword ptr [RBP + 0x160] }
    /* +0xaf2588 */ __asm { MOV R8W,0xbd50 }
    /* +0xaf258d */ __asm { ADD R8D,dword ptr [RBP + 0x218] }
    /* +0xaf2594 */ __asm { MOVD XMM2,R8D }
    /* +0xaf2599 */ __asm { AND ECX,0x1 }
    /* +0xaf259c */ __asm { MOVD XMM4,dword ptr [RBP + -0x28] }
    /* +0xaf25a1 */ __asm { PXOR XMM4,XMM2 }
    /* +0xaf25a5 */ __asm { MOVD R8D,XMM4 }
    /* +0xaf25aa */ __asm { ROL R8W,0xe }
    /* +0xaf25af */ __asm { MOVZX R8D,R8W }
    /* +0xaf25b3 */ __asm { CMP ECX,R8D }
    /* +0xaf25b6 */ __asm { JNZ 0x7fffa52625c1 }
    /* +0xaf25b8 */ __asm { MOV R10B,0x9e }
    /* +0xaf25bb */ __asm { RET 0x2644 }
    /* +0xaf25c1 */ __asm { CMP R10D,0x40bbe56 }
    /* +0xaf25c8 */ __asm { JA 0x7fffa526262e }
    /* +0xaf25ca */ __asm { PUSHFQ }
    /* +0xaf25cb */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xaf25d3 */ __asm { POPFQ }
    /* +0xaf25d4 */ __asm { MOV dword ptr [RBP + 0x160],0xee75c9ec }
    /* +0xaf25de */ __asm { MOV R10D,dword ptr [RBP + 0x160] }
    /* +0xaf25e5 */ __asm { MOV R9,qword ptr [RBP + -0x28] }
    /* +0xaf25e9 */ __asm { MOV ECX,R9D }
    /* +0xaf25ec */ __asm { SUB ECX,dword ptr [RBP + 0x218] }
    /* +0xaf25f2 */ __asm { MOV R8D,0x4461356c }
    /* +0xaf25f8 */ __asm { ADD R8D,ECX }
    /* +0xaf25fb */ __asm { IMUL ECX,R8D,0x263b3ee5 }
    /* +0xaf2602 */ __asm { XOR ECX,0xd696a557 }
    /* +0xaf2608 */ __asm { CMP R10D,ECX }
    /* +0xaf260b */ __asm { NOP }
    /* +0xaf260c */ __asm { NOP }
    /* +0xaf260d */ __asm { NOP }
    /* +0xaf260e */ __asm { NOP }
    /* +0xaf260f */ __asm { NOP }
    /* +0xaf2610 */ __asm { NOP }
    /* +0xaf2611 */ __asm { NOP }
    /* +0xaf2612 */ __asm { NOP }
    /* +0xaf2613 */ __asm { NOP }
    /* +0xaf2614 */ __asm { NOP }
    /* +0xaf2615 */ __asm { NOP }
    /* +0xaf2616 */ __asm { NOP }
    /* +0xaf2617 */ __asm { NOP }
    /* +0xaf2618 */ __asm { NOP }
    /* +0xaf2619 */ __asm { NOP }
    /* +0xaf261a */ __asm { NOP }
    /* +0xaf261b */ __asm { NOP }
    /* +0xaf262e */ __asm { LEA R8,[0x7fffa478bcb0] }
    /* +0xaf2635 */ __asm { MOV R9,-0x1b82e2be243cb769 }
    /* +0xaf263f */ __asm { CMP R8,R9 }
    /* +0xaf2642 */ __asm { NOP }
    /* +0xaf2643 */ __asm { NOP }
    /* +0xaf2644 */ __asm { NOP }
    /* +0xaf2645 */ __asm { NOP }
    /* +0xaf2646 */ __asm { NOP }
    /* +0xaf2647 */ __asm { MOV qword ptr [RBP + 0x160],RCX }
    /* +0xaf264e */ __asm { MOV EAX,dword ptr [R8 + -0x7680] }
    /* +0xaf2655 */ __asm { JMP 0x7fffa52631ec }
    /* +0xaf265a */ __asm { MOV R9,-0x2f06f550ea648e6c }
    /* +0xaf2664 */ __asm { XOR R10D,R10D }
    /* +0xaf2667 */ __asm { CMP R8D,0x1 }
    /* +0xaf266b */ __asm { SETZ R10B }
    /* +0xaf266f */ __asm { MOV ECX,0x5d72cd07 }
    /* +0xaf2674 */ __asm { MOVQ XMM2,R9 }
    /* +0xaf2679 */ __asm { SUB ECX,dword ptr [RBP + 0x218] }
    /* +0xaf267f */ __asm { MOVD XMM4,ECX }
    /* +0xaf2683 */ __asm { PMULUDQ XMM4,xmmword ptr [0x7fffa5872dc0] }
    /* +0xaf268b */ __asm { MOV CX,0x4613 }
    /* +0xaf268f */ __asm { SUB ECX,dword ptr [RBP + 0x210] }
    /* +0xaf2695 */ __asm { ROL CX,0xb }
    /* +0xaf2699 */ __asm { MOV R9,qword ptr [RBP + 0x110] }
    /* +0xaf26a0 */ __asm { MOV EDX,R9D }
    /* +0xaf26a3 */ __asm { IMUL EDX,ECX }
    /* +0xaf26a6 */ __asm { MOVZX ECX,DX }
    /* +0xaf26a9 */ __asm { XOR EDX,EDX }
    /* +0xaf26ab */ __asm { CMP R8D,ECX }
    /* +0xaf26ae */ __asm { SETBE DL }
    /* +0xaf26b1 */ __asm { PSUBD XMM4,xmmword ptr [RBP + 0x220] }
    /* +0xaf26b9 */ __asm { MOVD ECX,XMM4 }
    /* +0xaf26bd */ __asm { MOVSXD R9,ECX }
    /* +0xaf26c0 */ __asm { PSUBQ XMM2,xmmword ptr [RBP + 0x240] }
    /* +0xaf26c8 */ __asm { MOVQ RAX,XMM2 }
    /* +0xaf26cd */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xaf26d1 */ __asm { ROR RAX,CL }
    /* +0xaf26d4 */ __asm { IMUL RAX,RAX,0x224a352b }
    /* +0xaf26db */ __asm { CMP R9,RAX }
    /* +0xaf26de */ __asm { CMOVBE R10D,EDX }
    /* +0xaf26e2 */ __asm { TEST R10B,R10B }
    /* +0xaf26e5 */ __asm { JZ 0x7fffa5262b81 }
    /* +0xaf26eb */ __asm { MOV R8D,0x2b67dd27 }
    /* +0xaf26f1 */ __asm { MOV RCX,R8 }
    /* +0xaf26f4 */ __asm { NOT RCX }
    /* +0xaf26f7 */ __asm { MOV R9,0x56303dd664863755 }
    /* +0xaf2701 */ __asm { IMUL R9,RCX }
    /* +0xaf2705 */ __asm { XOR R9,0x119c2dc7 }
    /* +0xaf270c */ __asm { MOV RAX,-0x161b83878271b414 }
    /* +0xaf2716 */ __asm { CMP R9,RAX }
    /* +0xaf2719 */ __asm { JZ 0x7fffa5262ead }
    /* +0xaf271f */ __asm { CMP dword ptr [R8 + 0x54962699],0xd }
    /* +0xaf2727 */ __asm { JNC 0x7fffa5262ec1 }
    /* +0xaf272d */ __asm { LEA R8,[0x7fffa47b8d52] }
    /* +0xaf2734 */ __asm { MOV R9,0x3657b6f9fa1784d4 }
    /* +0xaf273e */ __asm { CMP R8,R9 }
    /* +0xaf2741 */ __asm { JZ 0x7fffa526311d }
    /* +0xaf2747 */ __asm { MOV R10D,0x523a5991 }
    /* +0xaf274d */ __asm { MOV ECX,0x86bed7f0 }
    /* +0xaf2752 */ __asm { MOVD XMM2,ECX }
    /* +0xaf2756 */ __asm { MOV RAX,R8 }
    /* +0xaf2759 */ __asm { OR RAX,0x41fe }
    /* +0xaf275f */ __asm { PXOR XMM2,xmmword ptr [RBP + 0x80] }
    /* +0xaf2767 */ __asm { MOVD ECX,XMM2 }
    /* +0xaf276b */ __asm { ROL ECX,0xc }
    /* +0xaf276e */ __asm { ADD R8,0x41fe }
    /* +0xaf2775 */ __asm { MOVD XMM2,ECX }
    /* +0xaf2779 */ __asm { MOVDQA XMM4,xmmword ptr [RBP + 0x250] }
    /* +0xaf2781 */ __asm { PMULUDQ XMM4,XMM2 }
    /* +0xaf2785 */ __asm { MOVD R11D,XMM4 }
    /* +0xaf278a */ __asm { MOV qword ptr [RBP + 0x160],RCX }
    /* +0xaf2791 */ __asm { IMUL R10D,R10D,-0x143d5adf }
    /* +0xaf2798 */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xaf279c */ __asm { ROL R10D,CL }
    /* +0xaf279f */ __asm { XOR R10D,0xe6059980 }
    /* +0xaf27a6 */ __asm { MOV R9,qword ptr [RBP + 0x118] }
    /* +0xaf27ad */ __asm { IMUL R9D,R10D }
    /* +0xaf27b1 */ __asm { MOVSXD R9,R9D }
    /* +0xaf27b4 */ __asm { CMP R9,R11 }
    /* +0xaf27b7 */ __asm { CMOVGE R8,RAX }
    /* +0xaf27bb */ __asm { MOV EAX,dword ptr [R8 + 0xe8] }
    /* +0xaf27c2 */ __asm { JMP 0x7fffa52631ec }
    /* +0xaf27c7 */ __asm { MOV R10D,0x244d0725 }
    /* +0xaf27cd */ __asm { MOV R8D,0xa40450d9 }
    /* +0xaf27d3 */ __asm { MOV R9,-0x31e3e43673813077 }
    /* +0xaf27dd */ __asm { CMP R8,R9 }
    /* +0xaf27e0 */ __asm { SETZ R9B }
    /* +0xaf27e4 */ __asm { XOR R10D,dword ptr [RBP + 0x218] }
    /* +0xaf27eb */ __asm { MOV RAX,qword ptr [RBP + -0x28] }
    /* +0xaf27ef */ __asm { ADD R10D,EAX }
    /* +0xaf27f2 */ __asm { NOT R10D }
    /* +0xaf27f5 */ __asm { MOV R11D,0xe7955bb7 }
    /* +0xaf27fb */ __asm { SUB R11D,EAX }
    /* +0xaf27fe */ __asm { ADD R11D,0x857eacc }
    /* +0xaf2805 */ __asm { MOV RCX,qword ptr [RBP + 0x210] }
    /* +0xaf280c */ __asm { ROL R11D,CL }
    /* +0xaf280f */ __asm { ADD R11D,0x8000001a }
    /* +0xaf2816 */ __asm { CMP R10,R11 }
    /* +0xaf2819 */ __asm { SETL R10B }
    /* +0xaf281d */ __asm { CMP R9B,R10B }
    /* +0xaf2820 */ __asm { NOP }
    /* +0xaf2821 */ __asm { NOP }
    /* +0xaf2822 */ __asm { NOP }
    /* +0xaf2823 */ __asm { NOP }
    /* +0xaf2824 */ __asm { NOP }
    /* +0xaf2825 */ __asm { MOV R9,qword ptr [R8 + -0x240650d1] }
    /* +0xaf282c */ __asm { MOV R11,-0x10d915f8525a3ea8 }
    /* +0xaf2836 */ __asm { MOV RAX,R9 }
    /* +0xaf2839 */ __asm { MUL R11 }
    /* +0xaf283c */ __asm { MOV R11,RDX }
    /* +0xaf283f */ __asm { MOV R10D,0x1472b65 }
    /* +0xaf2845 */ __asm { MOV RAX,R9 }
    /* +0xaf2848 */ __asm { MUL R10 }
    /* +0xaf284b */ __asm { ADD RAX,R11 }
    /* +0xaf284e */ __asm { ADC RDX,0x0 }
    /* +0xaf2852 */ __asm { TEST DL,0x1 }
    /* +0xaf2855 */ __asm { JZ 0x7fffa5262e79 }
    /* +0xaf285b */ __asm { RDTSC }
    /* +0xaf285d */ __asm { SHL RDX,0x20 }
    /* +0xaf2861 */ __asm { OR RDX,RAX }
    /* +0xaf2864 */ __asm { MOV R9,-0x4a9b10dd1385131b }
    /* +0xaf286e */ __asm { IMUL R9,RDX }
    /* +0xaf2872 */ __asm { MOV R10,0x76a99f3cc44787e2 }
    /* +0xaf287c */ __asm { ADD R10,R9 }
    /* +0xaf287f */ __asm { MOV R8D,0xb1306f65 }
    /* +0xaf2885 */ __asm { ADD R8D,0x53bfac64 }
    /* +0xaf288c */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xaf2890 */ __asm { ROL R8D,CL }
    /* +0xaf2893 */ __asm { MOV RCX,R10 }
    /* +0xaf2896 */ __asm { SHR RCX,0x3b }
    /* +0xaf289a */ __asm { IMUL R11D,R8D,-0x3fa97167 }
    /* +0xaf28a1 */ __asm { MOV R8D,0x13da0ccf }
    /* +0xaf28a7 */ __asm { XOR R8D,0xe48d9a2d }
    /* +0xaf28ae */ __asm { ROL R8D,0x1d }
    /* +0xaf28b2 */ __asm { IMUL R8D,dword ptr [RBP + 0x118] }
    /* +0xaf28ba */ __asm { MOVD XMM2,R8D }
    /* +0xaf28bf */ __asm { PSUBD XMM2,xmmword ptr [RBP + 0x220] }
    /* +0xaf28c7 */ __asm { MOVD EAX,XMM2 }
    /* +0xaf28cb */ __asm { MOV R8D,R10D }
    /* +0xaf28ce */ __asm { XOR R8D,0x1b }
    /* +0xaf28d2 */ __asm { MOV R9,R10 }
    /* +0xaf28d5 */ __asm { SHR R9,0x2d }
    /* +0xaf28d9 */ __asm { ADD R11D,dword ptr [RBP + 0x218] }
    /* +0xaf28e0 */ __asm { SHR R10,0x1b }
    /* +0xaf28e4 */ __asm { CMP R11,RAX }
    /* +0xaf28e7 */ __asm { CMOVGE R10D,R8D }
    /* +0xaf28eb */ __asm { XOR R9D,R10D }
    /* +0xaf28ee */ __asm { ROR R9D,CL }
    /* +0xaf28f1 */ __asm { MOV dword ptr [RBP + 0x160],0xc7802d7d }
    /* +0xaf28fb */ __asm { MOV R10D,dword ptr [RBP + 0x160] }
    /* +0xaf2902 */ __asm { CMP R9D,0x1188262 }
    /* +0xaf2909 */ __asm { JA 0x7fffa5262b3b }
    /* +0xaf290f */ __asm { MOV dword ptr [RBP + 0x160],0x68fb6d45 }
    /* +0xaf2919 */ __asm { MOV R10D,dword ptr [RBP + 0x160] }
    /* +0xaf2920 */ __asm { CMP R10D,0x55cbbfc8 }
    /* +0xaf2927 */ __asm { JA 0x7fffa5262933 }
    /* +0xaf2929 */ __asm { MOV ESP,0xfb542026 }
    /* +0xaf292e */ __asm { PUSH -0x18d80bfb }
    /* +0xaf2933 */ __asm { PUSHFQ }
    /* +0xaf2934 */ __asm { POP R10 }
    /* +0xaf2936 */ __asm { TEST R10D,0x100 }
    /* +0xaf293d */ __asm { NOP }
    /* +0xaf293e */ __asm { NOP }
    /* +0xaf293f */ __asm { NOP }
    /* +0xaf2940 */ __asm { NOP }
    /* +0xaf2941 */ __asm { NOP }
    /* +0xaf2942 */ __asm { LEA R8,[0x7fffa47bb538] }
    /* +0xaf2949 */ __asm { MOV R9,0x61d3850541de1488 }
    /* +0xaf2953 */ __asm { CMP R8,R9 }
    /* +0xaf2956 */ __asm { NOP }
    /* +0xaf2957 */ __asm { NOP }
    /* +0xaf2958 */ __asm { NOP }
    /* +0xaf2959 */ __asm { NOP }
    /* +0xaf295a */ __asm { NOP }
    /* +0xaf295b */ __asm { MOV R9,qword ptr [RBP + 0x210] }
    /* +0xaf2962 */ __asm { MOV R10D,R9D }
    /* +0xaf2965 */ __asm { OR R10D,0x1 }
    /* +0xaf2969 */ __asm { MOV CX,0x36fa }
    /* +0xaf296d */ __asm { IMUL ECX,R10D }
    /* +0xaf2971 */ __asm { ROR CX,0x1 }
    /* +0xaf2974 */ __asm { MOV R9,qword ptr [RBP + -0x28] }
    /* +0xaf2978 */ __asm { MOV R10D,R9D }
    /* +0xaf297b */ __asm { XOR R10D,ECX }
    /* +0xaf297e */ __asm { ROL R10W,0x8 }
    /* +0xaf2983 */ __asm { MOVZX ECX,uint8_t ptr [R8 + 0x1211] }
    /* +0xaf298b */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + 0x1217] }
    /* +0xaf2994 */ __asm { NOT R9B }
    /* +0xaf2997 */ __asm { ROL R9B,0x5 }
    /* +0xaf299b */ __asm { MOV uint8_t ptr [RBP + 0x160],R9B }
    /* +0xaf29a2 */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + 0x1218] }
    /* +0xaf29ab */ __asm { NOT R9B }
    /* +0xaf29ae */ __asm { ROL R9B,0x5 }
    /* +0xaf29b2 */ __asm { MOV uint8_t ptr [RBP + 0x161],R9B }
    /* +0xaf29b9 */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + 0x1219] }
    /* +0xaf29c2 */ __asm { NOT R9B }
    /* +0xaf29c5 */ __asm { ROL R9B,0x5 }
    /* +0xaf29c9 */ __asm { MOV uint8_t ptr [RBP + 0x162],R9B }
    /* +0xaf29d0 */ __asm { MOVZX R9D,uint8_t ptr [R8 + RCX*0x4 + 0x121a] }
    /* +0xaf29d9 */ __asm { NOT R9B }
    /* +0xaf29dc */ __asm { ROL R9B,0x5 }
    /* +0xaf29e0 */ __asm { MOV uint8_t ptr [RBP + 0x163],R9B }
    /* +0xaf29e7 */ __asm { MOV ECX,0x9102c3cc }
    /* +0xaf29ec */ __asm { XOR ECX,dword ptr [RBP + 0x160] }
    /* +0xaf29f2 */ __asm { MOV R8D,0x1 }
    /* +0xaf29f8 */ __asm { SHL R8D,CL }
    /* +0xaf29fb */ __asm { AND R8D,ECX }
    /* +0xaf29fe */ __asm { MOVZX R10D,R10W }
    /* +0xaf2a02 */ __asm { CMP R8D,R10D }
    /* +0xaf2a05 */ __asm { JZ 0x7fffa5262b3b }
    /* +0xaf2a0b */ __asm { PXOR XMM2,XMM2 }
    /* +0xaf2a0f */ __asm { MOVDQA xmmword ptr [RBP + 0x160],XMM2 }
    /* +0xaf2a17 */ __asm { PUSHFQ }
    /* +0xaf2a18 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xaf2a20 */ __asm { POPFQ }
    /* +0xaf2a21 */ __asm { MOV dword ptr [RBP + 0x140],0xc9bbbc72 }
    /* +0xaf2a2b */ __asm { MOV R10D,dword ptr [RBP + 0x140] }
    /* +0xaf2a32 */ __asm { TEST R10D,R10D }
    /* +0xaf2a35 */ __asm { JS 0x7fffa5262a39 }
    /* +0xaf2a37 */ __asm { JGE 0x7fffa52629cb }
    /* +0xaf2a39 */ __asm { MOV R10D,0x4cea5757 }
    /* +0xaf2a3f */ __asm { ADD R10D,dword ptr [RBP + -0x28] }
    /* +0xaf2a43 */ __asm { XOR R10D,0xd7c31ca4 }
    /* +0xaf2a4a */ __asm { IMUL R10D,R10D,-0x199c3d59 }
    /* +0xaf2a51 */ __asm { MOV RCX,qword ptr [RBP + 0x210] }
    /* +0xaf2a58 */ __asm { ROR R10D,CL }
    /* +0xaf2a5b */ __asm { MOV dword ptr [RBP + 0x160],0x0 }
    /* +0xaf2a65 */ __asm { MOV dword ptr [RBP + 0x140],R10D }
    /* +0xaf2a6c */ __asm { MOV R10D,dword ptr [RBP + 0x140] }
    /* +0xaf2a73 */ __asm { TEST R10B,0x1 }
    /* +0xaf2a77 */ __asm { NOP }
    /* +0xaf2a78 */ __asm { NOP }
    /* +0xaf2a79 */ __asm { NOP }
    /* +0xaf2a7a */ __asm { NOP }
    /* +0xaf2a7b */ __asm { NOP }
    /* +0xaf2a7c */ __asm { MOV dword ptr [RBP + 0x140],0x8fa2b74a }
    /* +0xaf2a86 */ __asm { MOV R10D,dword ptr [RBP + 0x140] }
    /* +0xaf2a8d */ __asm { CMP R10D,0xc6b7176 }
    /* +0xaf2a94 */ __asm { JBE 0x7fffa526312e }
    /* +0xaf2a9a */ __asm { LEA R8,[0x7fffa47b9f02] }
    /* +0xaf2aa1 */ __asm { MOV R9,-0x35069754870420c6 }
    /* +0xaf2aab */ __asm { CMP R8,R9 }
    /* +0xaf2aae */ __asm { NOP }
    /* +0xaf2aaf */ __asm { NOP }
    /* +0xaf2ab0 */ __asm { NOP }
    /* +0xaf2ab1 */ __asm { NOP }
    /* +0xaf2ab2 */ __asm { NOP }
    /* +0xaf2ab3 */ __asm { MOV qword ptr [RBP + 0x140],RCX }
    /* +0xaf2aba */ __asm { MOV DX,0xdf7c }
    /* +0xaf2abe */ __asm { MOV AX,0x47bc }
    /* +0xaf2ac2 */ __asm { MOV RCX,qword ptr [RBP + 0x210] }
    /* +0xaf2ac9 */ __asm { SUB EAX,ECX }
    /* +0xaf2acb */ __asm { MOV R10W,0xcd5a }
    /* +0xaf2ad0 */ __asm { MOV RDI,qword ptr [RBP + -0x28] }
    /* +0xaf2ad4 */ __asm { SUB R10D,EDI }
    /* +0xaf2ad7 */ __asm { ROL R10W,0x1 }
    /* +0xaf2adb */ __asm { XOR R10D,ECX }
    /* +0xaf2ade */ __asm { ADD R10D,0x709 }
    /* +0xaf2ae5 */ __asm { SUB EDX,ECX }
    /* +0xaf2ae7 */ __asm { MOV R11,qword ptr [RBP + 0x110] }
    /* +0xaf2aee */ __asm { IMUL R11D,EDX }
    /* +0xaf2af2 */ __asm { ADD R11D,0xfffffd10 }
    /* +0xaf2af9 */ __asm { MOVZX EDX,R11W }
    /* +0xaf2afd */ __asm { MOV R11W,0x1ef0 }
    /* +0xaf2b02 */ __asm { XOR R11D,EDI }
    /* +0xaf2b05 */ __asm { IMUL R11D,R11D,-0x4727 }
    /* +0xaf2b0c */ __asm { ADD R11D,0xffffde07 }
    /* +0xaf2b13 */ __asm { ROR R11W,CL }
    /* +0xaf2b17 */ __asm { MOVZX R9D,R11W }
    /* +0xaf2b1b */ __asm { MOV ECX,EDI }
    /* +0xaf2b1d */ __asm { ROL AX,CL }
    /* +0xaf2b20 */ __asm { MOVSX R10,R10W }
    /* +0xaf2b24 */ __asm { NOT EAX }
    /* +0xaf2b26 */ __asm { MOVZX R11D,AX }
    /* +0xaf2b2a */ __asm { MOV EAX,dword ptr [R11 + R8*0x1 + 0x88] }
    /* +0xaf2b32 */ __asm { LEA R8,[RBP + 0x160] }
    /* +0xaf2b39 */ __asm { SYSCALL }
    /* +0xaf2b3b */ __asm { LEA R8,[0x7fffa4781ab5] }
    /* +0xaf2b42 */ __asm { MOV R9,0x6d822e955e76f9db }
    /* +0xaf2b4c */ __asm { IMUL R9,R8 }
    /* +0xaf2b50 */ __asm { MOV RAX,0x2fc2691e8eb5133b }
    /* +0xaf2b5a */ __asm { ADD RAX,R9 }
    /* +0xaf2b5d */ __asm { MOV R9,0x76eb5a3949cabd8e }
    /* +0xaf2b67 */ __asm { CMP RAX,R9 }
    /* +0xaf2b6a */ __asm { NOP }
    /* +0xaf2b6b */ __asm { NOP }
    /* +0xaf2b6c */ __asm { NOP }
    /* +0xaf2b6d */ __asm { NOP }
    /* +0xaf2b6e */ __asm { MOV qword ptr [RBP + 0x160],RCX }
    /* +0xaf2b75 */ __asm { MOV EAX,dword ptr [R8 + 0x33a7] }
    /* +0xaf2b7c */ __asm { JMP 0x7fffa52631ec }
    /* +0xaf2b81 */ __asm { MOV R8,0x0 }
    /* +0xaf2b88 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xaf2b8f */ __asm { NOP }
    /* +0xaf2b90 */ __asm { MOV R8D,0xddcb8d2b }
    /* +0xaf2b96 */ __asm { MOV R9,-0x7a67cda43f5aab9e }
    /* +0xaf2ba0 */ __asm { CMP R8,R9 }
    /* +0xaf2ba3 */ __asm { JZ 0x7fffa5263138 }
    /* +0xaf2ba9 */ __asm { CMP dword ptr [R8 + -0x5dcd896b],0xd }
    /* +0xaf2bb1 */ __asm { JC 0x7fffa526314d }
    /* +0xaf2bb7 */ __asm { LEA R8,[0x7fffa47bbd7b] }
}


// ============================================================================
// Function : Unwind@7fffa5263360  |  RVA: 0xaf3360  |  Size: 3962 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa5263360(void) {
    /* +0xaf3360 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0xaf3365 */ __asm { PUSH RBP }
    /* +0xaf3366 */ __asm { PUSH RDI }
    /* +0xaf3367 */ __asm { PUSH R12 }
    /* +0xaf3369 */ __asm { PUSH R14 }
    /* +0xaf336b */ __asm { PUSH RBX }
    /* +0xaf336c */ __asm { PUSH RSI }
    /* +0xaf336d */ __asm { PUSH R15 }
    /* +0xaf336f */ __asm { PUSH R13 }
    /* +0xaf3371 */ __asm { SUB RSP,0xd8 }
    /* +0xaf3378 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0xaf337f */ __asm { MOVDQA xmmword ptr [RSP + 0x30],XMM7 }
    /* +0xaf3385 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM8 }
    /* +0xaf338c */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM12 }
    /* +0xaf3393 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM15 }
    /* +0xaf339a */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0xaf33a0 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM9 }
    /* +0xaf33aa */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM10 }
    /* +0xaf33b4 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0xaf33be */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM11 }
    /* +0xaf33c8 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM13 }
    /* +0xaf33d2 */ __asm { MOV RAX,qword ptr [RBP + 0xb0] }
    /* +0xaf33d9 */ __asm { LEA R14,[0x7fffa5695add] }
    /* +0xaf33e0 */ __asm { MOV R10W,0x2347 }
    /* +0xaf33e5 */ __asm { MOV R11D,0xbb720d72 }
    /* +0xaf33eb */ __asm { LEA R9,[0x7fffa568ed3e] }
    /* +0xaf33f2 */ __asm { MOV RBX,qword ptr [RBP + 0x210] }
    /* +0xaf33f9 */ __asm { MOVQ XMM2,RBX }
    /* +0xaf33fe */ __asm { MOV R8,RAX }
    /* +0xaf3401 */ __asm { SHR R8,0x3d }
    /* +0xaf3405 */ __asm { XOR R8,RAX }
    /* +0xaf3408 */ __asm { MOV ESI,0x298542e8 }
    /* +0xaf340d */ __asm { MOV RAX,qword ptr [RBP + -0x28] }
    /* +0xaf3411 */ __asm { ADD ESI,EAX }
    /* +0xaf3413 */ __asm { MOV EDI,0x8c1c0d9e }
    /* +0xaf3418 */ __asm { SHR RBX,0x3d }
    /* +0xaf341c */ __asm { MOV RDX,qword ptr [RBP + 0x1e0] }
    /* +0xaf3423 */ __asm { XOR ESI,EDX }
    /* +0xaf3425 */ __asm { ADD EDI,0x7db724e5 }
    /* +0xaf342b */ __asm { XOR EDI,EAX }
    /* +0xaf342d */ __asm { SUB EDI,EDX }
    /* +0xaf342f */ __asm { MOV R13,qword ptr [RBP + 0x240] }
    /* +0xaf3436 */ __asm { XOR EDI,R13D }
    /* +0xaf3439 */ __asm { ADD R11D,0xaa1ec7d }
    /* +0xaf3440 */ __asm { MOV ECX,R13D }
    /* +0xaf3443 */ __asm { ROR R11D,CL }
    /* +0xaf3446 */ __asm { SUB R11D,EAX }
    /* +0xaf3449 */ __asm { MOV ECX,EDX }
    /* +0xaf344b */ __asm { ROR R11D,CL }
    /* +0xaf344e */ __asm { ADD R10D,EDX }
    /* +0xaf3451 */ __asm { NOT R10D }
    /* +0xaf3454 */ __asm { MOV ECX,R13D }
    /* +0xaf3457 */ __asm { ROR R10W,CL }
    /* +0xaf345b */ __asm { MOVD XMM4,EBX }
    /* +0xaf345f */ __asm { PXOR XMM4,XMM2 }
    /* +0xaf3463 */ __asm { MOVQ RBX,XMM4 }
    /* +0xaf3468 */ __asm { XOR R10D,0xd7f9 }
    /* +0xaf346f */ __asm { ROL R10W,0x8 }
    /* +0xaf3474 */ __asm { MOVSX RAX,R10W }
    /* +0xaf3478 */ __asm { ADD RAX,R9 }
    /* +0xaf347b */ __asm { CALL RAX }
    /* +0xaf347d */ __asm { MOV ECX,R13D }
    /* +0xaf3480 */ __asm { ROR ESI,CL }
    /* +0xaf3482 */ __asm { XOR ESI,0x2e459ca7 }
    /* +0xaf3488 */ __asm { ADD ESI,0xf73bd6cb }
    /* +0xaf348e */ __asm { MOVSXD R9,ESI }
    /* +0xaf3491 */ __asm { ADD R9,R14 }
    /* +0xaf3494 */ __asm { MOV R11,RDI }
    /* +0xaf3497 */ __asm { MOV R8,RBX }
    /* +0xaf349a */ __asm { CALL R9 }
    /* +0xaf349d */ __asm { PUSHFQ }
    /* +0xaf349e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xaf34a6 */ __asm { POPFQ }
    /* +0xaf34a7 */ __asm { MOV dword ptr [RBP + 0x160],0x4daaccab }
    /* +0xaf34b1 */ __asm { MOV R10D,dword ptr [RBP + 0x160] }
    /* +0xaf34b8 */ __asm { TEST R10D,R10D }
    /* +0xaf34bb */ __asm { NOP }
    /* +0xaf34bc */ __asm { NOP }
    /* +0xaf34bd */ __asm { NOP }
    /* +0xaf34be */ __asm { NOP }
    /* +0xaf34bf */ __asm { NOP }
    /* +0xaf34c0 */ __asm { NOP }
    /* +0xaf34c1 */ __asm { NOP }
    /* +0xaf34c2 */ __asm { NOP }
    /* +0xaf34c3 */ __asm { MOV RBX,qword ptr [RBP + 0x140] }
    /* +0xaf34ca */ __asm { RDTSC }
    /* +0xaf34cc */ __asm { MOV RCX,RDX }
    /* +0xaf34cf */ __asm { SHL RCX,0x20 }
    /* +0xaf34d3 */ __asm { OR RCX,RAX }
    /* +0xaf34d6 */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xaf34e0 */ __asm { IMUL RCX,R9 }
    /* +0xaf34e4 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xaf34ee */ __asm { ADD RCX,R9 }
    /* +0xaf34f1 */ __asm { MOV R10,RCX }
    /* +0xaf34f4 */ __asm { SHR R10,0x2d }
    /* +0xaf34f8 */ __asm { MOVQ XMM2,RCX }
    /* +0xaf34fd */ __asm { SHR RCX,0x3b }
    /* +0xaf3501 */ __asm { PSRLQ XMM2,0x1b }
    /* +0xaf3506 */ __asm { MOVD XMM4,R10D }
    /* +0xaf350b */ __asm { PXOR XMM4,XMM2 }
    /* +0xaf350f */ __asm { MOVD R10D,XMM4 }
    /* +0xaf3514 */ __asm { ROR R10D,CL }
    /* +0xaf3517 */ __asm { AND R10D,0x3 }
    /* +0xaf351b */ __asm { CMP R10D,0x2 }
    /* +0xaf351f */ __asm { JC 0x7fffa5263a1d }
    /* +0xaf3525 */ __asm { CMP R10D,0x3 }
    /* +0xaf3529 */ __asm { JNZ 0x7fffa5263a89 }
    /* +0xaf352f */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xaf3536 */ __asm { MOV R8,0x0 }
    /* +0xaf353d */ __asm { NOP }
    /* +0xaf353e */ __asm { MOV R8D,0x2f53f74b }
    /* +0xaf3544 */ __asm { MOV R9,0x7f1ce97cd76c3368 }
    /* +0xaf354e */ __asm { CMP R8,R9 }
    /* +0xaf3551 */ __asm { NOP }
    /* +0xaf3552 */ __asm { NOP }
    /* +0xaf3553 */ __asm { NOP }
    /* +0xaf3554 */ __asm { NOP }
    /* +0xaf3555 */ __asm { NOP }
    /* +0xaf3556 */ __asm { CMP dword ptr [R8 + 0x50aa0c75],0xd }
    /* +0xaf355e */ __asm { JC 0x7fffa5263e8e }
    /* +0xaf3564 */ __asm { MOV R10W,0x5e36 }
    /* +0xaf3569 */ __asm { ADD R10D,0xffffa049 }
    /* +0xaf3570 */ __asm { MOV RDI,qword ptr [RBP + -0x28] }
    /* +0xaf3574 */ __asm { MOV ECX,EDI }
    /* +0xaf3576 */ __asm { ROL R10W,CL }
    /* +0xaf357a */ __asm { NOT R10D }
    /* +0xaf357d */ __asm { MOV RCX,qword ptr [RBP + 0x1e0] }
    /* +0xaf3584 */ __asm { ROR R10W,CL }
    /* +0xaf3588 */ __asm { MOVD XMM2,ECX }
    /* +0xaf358c */ __asm { MOV ECX,0xf65ae600 }
    /* +0xaf3591 */ __asm { MOVD XMM4,ECX }
    /* +0xaf3595 */ __asm { PSUBD XMM4,XMM2 }
    /* +0xaf3599 */ __asm { MOVD R8D,XMM4 }
    /* +0xaf359e */ __asm { MOV R14,qword ptr [RBP + 0x240] }
    /* +0xaf35a5 */ __asm { LEA ECX,[R14 + R8*0x1 + 0x59ff4eff] }
    /* +0xaf35ad */ __asm { MOVSXD R9,ECX }
    /* +0xaf35b0 */ __asm { RDTSC }
    /* +0xaf35b2 */ __asm { SHL RDX,0x20 }
    /* +0xaf35b6 */ __asm { OR RDX,RAX }
    /* +0xaf35b9 */ __asm { MOV RAX,-0x158b4ad174161d9b }
    /* +0xaf35c3 */ __asm { IMUL RAX,RDX }
    /* +0xaf35c7 */ __asm { MOV RCX,-0x63fa089a859ba0ba }
    /* +0xaf35d1 */ __asm { ADD RCX,RAX }
    /* +0xaf35d4 */ __asm { MOV R8,RCX }
    /* +0xaf35d7 */ __asm { SHR R8,0x2d }
    /* +0xaf35db */ __asm { MOV R11,RCX }
    /* +0xaf35de */ __asm { SHR R11,0x1b }
    /* +0xaf35e2 */ __asm { SHR RCX,0x3b }
    /* +0xaf35e6 */ __asm { ADD EAX,0x7a645f73 }
    /* +0xaf35eb */ __asm { CMP R9,-0x2e6240da }
    /* +0xaf35f2 */ __asm { CMOVNZ R8D,EAX }
    /* +0xaf35f6 */ __asm { XOR R11D,R8D }
    /* +0xaf35f9 */ __asm { ROR R11D,CL }
    /* +0xaf35fc */ __asm { MOVZX R10D,R10W }
    /* +0xaf3600 */ __asm { MOV R9,qword ptr GS:[R10] }
    /* +0xaf3604 */ __asm { MOV RAX,0x154bf1c30649e548 }
    /* +0xaf360e */ __asm { MOV R9,qword ptr [R9 + 0x30] }
    /* +0xaf3612 */ __asm { MOV R8,0x46c3f6c13349dd59 }
    /* +0xaf361c */ __asm { XOR RAX,R14 }
    /* +0xaf361f */ __asm { ADD RAX,qword ptr [RBP + 0x80] }
    /* +0xaf3626 */ __asm { ROL RAX,0x1e }
    /* +0xaf362a */ __asm { SUB R9,R8 }
    /* +0xaf362d */ __asm { XOR RAX,RDI }
    /* +0xaf3630 */ __asm { XOR RAX,R9 }
    /* +0xaf3633 */ __asm { CMP RAX,-0x1 }
    /* +0xaf3637 */ __asm { NOP }
    /* +0xaf3638 */ __asm { NOP }
    /* +0xaf3639 */ __asm { NOP }
    /* +0xaf363a */ __asm { NOP }
    /* +0xaf363b */ __asm { NOP }
    /* +0xaf363c */ __asm { CMP R11D,0x43fb90d }
    /* +0xaf3643 */ __asm { JA 0x7fffa526398e }
    /* +0xaf3649 */ __asm { MOV CX,0x80cf }
    /* +0xaf364d */ __asm { MOV EDX,0x572df154 }
    /* +0xaf3652 */ __asm { PUSHFQ }
    /* +0xaf3653 */ __asm { POP R10 }
    /* +0xaf3655 */ __asm { MOVD XMM4,ECX }
    /* +0xaf3659 */ __asm { LEA R9,[R10 + 0x100] }
    /* +0xaf3660 */ __asm { MOVD XMM5,dword ptr [RBP + 0x1f0] }
    /* +0xaf3668 */ __asm { PMULLW XMM5,XMM4 }
    /* +0xaf366c */ __asm { MOVD R8D,XMM5 }
    /* +0xaf3671 */ __asm { IMUL EDX,EDX,0x7ffe0325 }
    /* +0xaf3677 */ __asm { ADD EDX,dword ptr [RBP + -0x28] }
    /* +0xaf367a */ __asm { MOV RCX,qword ptr [RBP + 0x1e0] }
    /* +0xaf3681 */ __asm { ROL EDX,CL }
    /* +0xaf3683 */ __asm { MOV RCX,qword ptr [RBP + 0x240] }
    /* +0xaf368a */ __asm { XOR EDX,ECX }
    /* +0xaf368c */ __asm { MOVSXD RAX,EDX }
    /* +0xaf368f */ __asm { NOT R8D }
    /* +0xaf3692 */ __asm { ROL R8W,0x1 }
    /* +0xaf3696 */ __asm { ROR R8W,CL }
    /* +0xaf369a */ __asm { MOV EDX,0x992405de }
    /* +0xaf369f */ __asm { MOVD XMM4,EDX }
    /* +0xaf36a3 */ __asm { PMULUDQ XMM4,xmmword ptr [RBP + 0x50] }
    /* +0xaf36a8 */ __asm { MOVD EDX,XMM4 }
    /* +0xaf36ac */ __asm { ROL EDX,0xc }
    /* +0xaf36af */ __asm { AND R10D,0x100 }
    /* +0xaf36b6 */ __asm { MOVD XMM4,EDX }
    /* +0xaf36ba */ __asm { PSUBD XMM4,XMM2 }
    /* +0xaf36be */ __asm { MOVD EDX,XMM4 }
    /* +0xaf36c2 */ __asm { ROR EDX,CL }
    /* +0xaf36c4 */ __asm { MOVZX R11D,R8W }
    /* +0xaf36c8 */ __asm { ADD EDX,0x6175d121 }
    /* +0xaf36ce */ __asm { MOVSXD RCX,EDX }
    /* +0xaf36d1 */ __asm { CMP RCX,RAX }
    /* +0xaf36d4 */ __asm { CMOVC R10,R9 }
    /* +0xaf36d8 */ __asm { CMP R10,R11 }
    /* +0xaf36db */ __asm { NOP }
    /* +0xaf36dc */ __asm { NOP }
    /* +0xaf36dd */ __asm { NOP }
    /* +0xaf36de */ __asm { NOP }
    /* +0xaf36df */ __asm { NOP }
    /* +0xaf36e0 */ __asm { NOP }
    /* +0xaf36e1 */ __asm { NOP }
    /* +0xaf36e2 */ __asm { MOV dword ptr [RBP + 0x160],0x59ef00d5 }
    /* +0xaf36ec */ __asm { MOV R8D,dword ptr [RBP + 0x160] }
    /* +0xaf36f3 */ __asm { MOV R10D,0xb467f01f }
    /* +0xaf36f9 */ __asm { IMUL R11D,R10D,-0x3fffffd7 }
    /* +0xaf3700 */ __asm { ROL R11D,0x3 }
    /* +0xaf3704 */ __asm { MOV RAX,qword ptr [RBP + 0x240] }
    /* +0xaf370b */ __asm { MOV R10D,EAX }
    /* +0xaf370e */ __asm { OR R10D,0x1 }
    /* +0xaf3712 */ __asm { SUB R11D,dword ptr [RBP + 0x1e0] }
    /* +0xaf3719 */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xaf371d */ __asm { ROR R11D,CL }
    /* +0xaf3720 */ __asm { IMUL R11D,R10D }
    /* +0xaf3724 */ __asm { MOV EDX,0x1287690c }
    /* +0xaf3729 */ __asm { ADD EDX,ECX }
    /* +0xaf372b */ __asm { MOV ECX,EAX }
    /* +0xaf372d */ __asm { ROR EDX,CL }
    /* +0xaf372f */ __asm { MOVD XMM4,EDX }
    /* +0xaf3733 */ __asm { PXOR XMM4,xmmword ptr [0x7fffa5872d50] }
    /* +0xaf373b */ __asm { PADDD XMM2,XMM4 }
    /* +0xaf373f */ __asm { MOVD EAX,XMM2 }
    /* +0xaf3743 */ __asm { ROL EAX,0x5 }
    /* +0xaf3746 */ __asm { TEST R8D,R8D }
    /* +0xaf3749 */ __asm { SETNS R9B }
    /* +0xaf374d */ __asm { CMP R11,RAX }
    /* +0xaf3750 */ __asm { SETZ AL }
    /* +0xaf3753 */ __asm { TEST AL,R9B }
    /* +0xaf3756 */ __asm { JZ 0x7fffa5264269 }
    /* +0xaf375c */ __asm { MOV R8D,0x311b8199 }
    /* +0xaf3762 */ __asm { MOV R9,-0x54b6432d6e045d67 }
    /* +0xaf376c */ __asm { CMP R8,R9 }
    /* +0xaf376f */ __asm { JZ 0x7fffa5264271 }
    /* +0xaf3775 */ __asm { MOV R11D,dword ptr [R8 + 0x4ee2812b] }
    /* +0xaf377c */ __asm { MOV R9,0x5555555555555556 }
    /* +0xaf3786 */ __asm { IMUL R9,R11 }
    /* +0xaf378a */ __asm { MOV RAX,0x5555555555555555 }
    /* +0xaf3794 */ __asm { CMP R9,RAX }
    /* +0xaf3797 */ __asm { JA 0x7fffa526398e }
    /* +0xaf379d */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xaf37a1 */ __asm { MOV R11,RCX }
    /* +0xaf37a4 */ __asm { OR R11,0x1 }
    /* +0xaf37a8 */ __asm { MOVQ XMM2,R11 }
    /* +0xaf37ad */ __asm { MOVD XMM4,R10D }
    /* +0xaf37b2 */ __asm { MOV R8D,0xd8c5218 }
    /* +0xaf37b8 */ __asm { SUB R8D,dword ptr [RBP + 0x1e0] }
    /* +0xaf37bf */ __asm { MOV R9,-0x4e7c0001e06a2aa7 }
    /* +0xaf37c9 */ __asm { MOVQ XMM5,R9 }
    /* +0xaf37ce */ __asm { MOVDQA XMM0,XMM5 }
    /* +0xaf37d2 */ __asm { PSRLQ XMM0,0x20 }
    /* +0xaf37d7 */ __asm { PMULUDQ XMM0,XMM2 }
    /* +0xaf37db */ __asm { MOVDQA XMM3,XMM2 }
    /* +0xaf37df */ __asm { PSRLQ XMM3,0x20 }
    /* +0xaf37e4 */ __asm { PMULUDQ XMM3,XMM5 }
    /* +0xaf37e8 */ __asm { PADDQ XMM3,XMM0 }
    /* +0xaf37ec */ __asm { PSLLQ XMM3,0x20 }
    /* +0xaf37f1 */ __asm { PMULUDQ XMM5,XMM2 }
    /* +0xaf37f5 */ __asm { PADDQ XMM5,XMM3 }
    /* +0xaf37f9 */ __asm { PXOR XMM2,XMM2 }
    /* +0xaf37fd */ __asm { MOVDQA xmmword ptr [RBP + 0x160],XMM2 }
    /* +0xaf3805 */ __asm { MOVQ XMM2,qword ptr [RBP + 0x240] }
    /* +0xaf380d */ __asm { XOR R8D,0x55f039a6 }
    /* +0xaf3814 */ __asm { ROL R8D,CL }
    /* +0xaf3817 */ __asm { MOVQ R9,XMM5 }
    /* +0xaf381c */ __asm { ROL R9,0x39 }
    /* +0xaf3820 */ __asm { MOVQ XMM5,R9 }
    /* +0xaf3825 */ __asm { PXOR XMM5,XMM2 }
    /* +0xaf3829 */ __asm { MOVQ R9,XMM5 }
    /* +0xaf382e */ __asm { ADD R9,qword ptr [RBP + 0x80] }
    /* +0xaf3835 */ __asm { MOVD XMM5,R8D }
    /* +0xaf383a */ __asm { PMULUDQ XMM5,XMM4 }
    /* +0xaf383e */ __asm { MOVD R11D,XMM5 }
    /* +0xaf3843 */ __asm { MOV RAX,qword ptr [R11] }
    /* +0xaf3846 */ __asm { ROL RAX,0x38 }
    /* +0xaf384a */ __asm { IMUL R9,R9,0x57065e93 }
    /* +0xaf3851 */ __asm { XOR RAX,0x2ed1ccf7 }
    /* +0xaf3857 */ __asm { CMP R9,RAX }
    /* +0xaf385a */ __asm { NOP }
    /* +0xaf385b */ __asm { NOP }
    /* +0xaf385c */ __asm { NOP }
    /* +0xaf385d */ __asm { NOP }
    /* +0xaf385e */ __asm { NOP }
    /* +0xaf385f */ __asm { NOP }
    /* +0xaf3860 */ __asm { NOP }
    /* +0xaf3861 */ __asm { NOP }
    /* +0xaf3862 */ __asm { NOP }
    /* +0xaf3863 */ __asm { MOV dword ptr [RBP + 0x160],0x0 }
    /* +0xaf386d */ __asm { MOV dword ptr [RBP + 0x10],0xeeca5760 }
    /* +0xaf3874 */ __asm { MOV ECX,dword ptr [RBP + 0x10] }
    /* +0xaf3877 */ __asm { MOV dword ptr [RBP + 0x10],0x454fb254 }
    /* +0xaf387e */ __asm { MOV ECX,dword ptr [RBP + 0x10] }
    /* +0xaf3881 */ __asm { CMP ECX,0x21a061d0 }
    /* +0xaf3887 */ __asm { NOP }
    /* +0xaf3888 */ __asm { NOP }
    /* +0xaf3889 */ __asm { NOP }
    /* +0xaf388a */ __asm { NOP }
    /* +0xaf388b */ __asm { NOP }
    /* +0xaf388c */ __asm { NOP }
    /* +0xaf388d */ __asm { NOP }
    /* +0xaf388e */ __asm { NOP }
    /* +0xaf388f */ __asm { NOP }
    /* +0xaf3890 */ __asm { NOP }
    /* +0xaf3891 */ __asm { NOP }
    /* +0xaf3892 */ __asm { NOP }
    /* +0xaf3893 */ __asm { NOP }
    /* +0xaf3894 */ __asm { LEA R8,[0x7fffa4783fe9] }
    /* +0xaf389b */ __asm { MOV R9,0x59924809d9d3bbc6 }
    /* +0xaf38a5 */ __asm { MOV EAX,0xf5be097f }
    /* +0xaf38aa */ __asm { IMUL RAX,R9 }
    /* +0xaf38ae */ __asm { SUB RAX,qword ptr [RBP + -0x28] }
    /* +0xaf38b2 */ __asm { ROL RAX,0x3a }
    /* +0xaf38b6 */ __asm { MOVQ XMM4,RAX }
    /* +0xaf38bb */ __asm { PSUBQ XMM4,XMM2 }
    /* +0xaf38bf */ __asm { MOVQ R9,XMM4 }
    /* +0xaf38c4 */ __asm { MOV RCX,qword ptr [RBP + 0x80] }
    /* +0xaf38cb */ __asm { ROL R9,CL }
    /* +0xaf38ce */ __asm { CMP R8,R9 }
    /* +0xaf38d1 */ __asm { JZ 0x7fffa5264279 }
    /* +0xaf38d7 */ __asm { LEA R9,[R8 + 0xd7b] }
    /* +0xaf38de */ __asm { MOV R11D,0x9fafbfe0 }
    /* +0xaf38e4 */ __asm { IMUL R11D,R10D }
    /* +0xaf38e8 */ __asm { MOV qword ptr [RBP + 0x10],RCX }
    /* +0xaf38ec */ __asm { OR R8,0xd7b }
    /* +0xaf38f3 */ __asm { MOV RDI,qword ptr [RBP + 0x1e0] }
    /* +0xaf38fa */ __asm { MOV R10D,EDI }
    /* +0xaf38fd */ __asm { OR R10D,0x1 }
    /* +0xaf3901 */ __asm { MOV CX,0x5d9c }
    /* +0xaf3905 */ __asm { XOR ECX,EDI }
    /* +0xaf3907 */ __asm { XOR ECX,0x2861 }
    /* +0xaf390d */ __asm { MOV RSI,qword ptr [RBP + 0x240] }
    /* +0xaf3914 */ __asm { ADD ECX,ESI }
    /* +0xaf3916 */ __asm { MOVZX EDX,CX }
    /* +0xaf3919 */ __asm { MOV ECX,0xbb3121a3 }
    /* +0xaf391e */ __asm { MOV EAX,dword ptr [RBP + 0x118] }
    /* +0xaf3924 */ __asm { IMUL EAX,ECX }
    /* +0xaf3927 */ __asm { ROL EAX,0xd }
    /* +0xaf392a */ __asm { ADD EAX,ESI }
    /* +0xaf392c */ __asm { IMUL EAX,EAX,-0x3242cb6f }
    /* +0xaf3932 */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xaf3936 */ __asm { ROL EAX,CL }
    /* +0xaf3938 */ __asm { CMP RAX,0x728153d9 }
    /* +0xaf393e */ __asm { CMOVZ R8,R9 }
    /* +0xaf3942 */ __asm { MOV EAX,dword ptr [R8 + 0x128] }
    /* +0xaf3949 */ __asm { MOV R8W,0xb1f }
    /* +0xaf394e */ __asm { XOR R8D,0xd66d }
    /* +0xaf3955 */ __asm { MOV ECX,ESI }
    /* +0xaf3957 */ __asm { ROL R8W,CL }
    /* +0xaf395b */ __asm { IMUL R8D,R10D }
    /* +0xaf395f */ __asm { ADD R8D,0x2211 }
    /* +0xaf3966 */ __asm { MOV R10D,dword ptr [RBP + 0x1f0] }
    /* +0xaf396d */ __asm { IMUL R10D,R8D }
    /* +0xaf3971 */ __asm { MOVZX R9D,R10W }
    /* +0xaf3975 */ __asm { NOT R11D }
    /* +0xaf3978 */ __asm { SUB R11D,EDI }
    /* +0xaf397b */ __asm { ADD R11D,0x5d8bf6c3 }
    /* +0xaf3982 */ __asm { MOVSXD R10,R11D }
    /* +0xaf3985 */ __asm { LEA R8,[RBP + 0x160] }
    /* +0xaf398c */ __asm { SYSCALL }
    /* +0xaf398e */ __asm { LEA R8,[0x7fffa4786e51] }
    /* +0xaf3995 */ __asm { MOV R9D,0xc860dbe8 }
    /* +0xaf399b */ __asm { SUB R9,R8 }
    /* +0xaf399e */ __asm { MOV RAX,0x255a4956c5b92a1b }
    /* +0xaf39a8 */ __asm { MOVQ XMM2,RAX }
    /* +0xaf39ad */ __asm { MOV R10,qword ptr [RBP + 0x80] }
    /* +0xaf39b4 */ __asm { OR R10D,0x1 }
    /* +0xaf39b8 */ __asm { MOVD XMM4,R10D }
    /* +0xaf39bd */ __asm { MOVDQA XMM5,XMM2 }
    /* +0xaf39c1 */ __asm { PMULUDQ XMM5,XMM4 }
    /* +0xaf39c5 */ __asm { PSRLQ XMM2,0x20 }
    /* +0xaf39ca */ __asm { PMULUDQ XMM2,XMM4 }
    /* +0xaf39ce */ __asm { PSLLQ XMM2,0x20 }
    /* +0xaf39d3 */ __asm { PADDQ XMM2,XMM5 }
    /* +0xaf39d7 */ __asm { MOVQ RCX,XMM2 }
    /* +0xaf39dc */ __asm { MOV RAX,qword ptr [RBP + 0x240] }
    /* +0xaf39e3 */ __asm { ADD RAX,RCX }
    /* +0xaf39e6 */ __asm { ADD RAX,0x7074dba7 }
    /* +0xaf39ec */ __asm { ROL RAX,0x17 }
    /* +0xaf39f0 */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xaf39f4 */ __asm { ROL RAX,CL }
    /* +0xaf39f7 */ __asm { CMP RAX,R9 }
    /* +0xaf39fa */ __asm { JNZ 0x7fffa5263a0a }
    /* +0xaf39fc */ __asm { SAR dword ptr [RDX + 0x1772c860],0x1 }
    /* +0xaf3a02 */ __asm { SBB ESI,EBX }
    /* +0xaf3a04 */ __asm { RET 0xb088 }
    /* +0xaf3a0a */ __asm { MOV qword ptr [RBP + 0x160],RCX }
    /* +0xaf3a11 */ __asm { MOV EAX,dword ptr [R8 + -0x1ff5] }
    /* +0xaf3a18 */ __asm { JMP 0x7fffa5264207 }
    /* +0xaf3a1d */ __asm { MOV CX,0x4a04 }
    /* +0xaf3a21 */ __asm { MOV R8D,dword ptr [RBP + 0x1f0] }
    /* +0xaf3a28 */ __asm { IMUL R8D,ECX }
    /* +0xaf3a2c */ __asm { ROL R8W,0xd }
    /* +0xaf3a31 */ __asm { MOVD XMM2,R8D }
    /* +0xaf3a36 */ __asm { MOV R9,qword ptr [RBP + 0x1e0] }
    /* +0xaf3a3d */ __asm { MOV ECX,R9D }
    /* +0xaf3a40 */ __asm { SUB ECX,dword ptr [RBP + 0x240] }
    /* +0xaf3a46 */ __asm { MOVD XMM4,ECX }
    /* +0xaf3a4a */ __asm { PADDW XMM4,XMM2 }
    /* +0xaf3a4e */ __asm { PEXTRW ECX,XMM4,0x0 }
    /* +0xaf3a53 */ __asm { CMP R10D,ECX }
    /* +0xaf3a56 */ __asm { JZ 0x7fffa5263bda }
    /* +0xaf3a5c */ __asm { LEA R8,[0x7fffa47bedd0] }
    /* +0xaf3a63 */ __asm { MOV R9,-0x74e2864542e2b4e7 }
    /* +0xaf3a6d */ __asm { CMP R8,R9 }
    /* +0xaf3a70 */ __asm { JZ 0x7fffa5264281 }
    /* +0xaf3a76 */ __asm { MOV qword ptr [RBP + 0x160],RCX }
    /* +0xaf3a7d */ __asm { MOV EAX,dword ptr [R8 + -0x1d98] }
    /* +0xaf3a84 */ __asm { JMP 0x7fffa5264207 }
    /* +0xaf3a89 */ __asm { MOV R13,qword ptr [RBP + 0x240] }
    /* +0xaf3a90 */ __asm { MOVD XMM2,R13D }
    /* +0xaf3a95 */ __asm { MOV R10D,0x177594bb }
    /* +0xaf3a9b */ __asm { IMUL R10D,dword ptr [RBP + 0x118] }
    /* +0xaf3aa3 */ __asm { ADD R10D,R13D }
    /* +0xaf3aa6 */ __asm { MOV R8D,0x904b7a7f }
    /* +0xaf3aac */ __asm { MOV ECX,0x4cfabd38 }
    /* +0xaf3ab1 */ __asm { IMUL EDX,ECX,0x742f3c3 }
    /* +0xaf3ab7 */ __asm { MOV R9,0x81408b266b5eea7 }
    /* +0xaf3ac1 */ __asm { IMUL R9,R8 }
    /* +0xaf3ac5 */ __asm { MOV RAX,R9 }
    /* +0xaf3ac8 */ __asm { ROL EDX,0x6 }
    /* +0xaf3acb */ __asm { MOV R11D,0x1404bed5 }
    /* +0xaf3ad1 */ __asm { XOR R11D,0x364d519b }
    /* +0xaf3ad8 */ __asm { MOV RSI,qword ptr [RBP + 0x1e0] }
    /* +0xaf3adf */ __asm { SUB R11D,ESI }
    /* +0xaf3ae2 */ __asm { MOV ECX,R13D }
    /* +0xaf3ae5 */ __asm { ROL R11D,CL }
    /* +0xaf3ae8 */ __asm { MOVD XMM4,R11D }
    /* +0xaf3aed */ __asm { PXOR XMM4,xmmword ptr [RBP + 0x220] }
    /* +0xaf3af5 */ __asm { MOVD ECX,XMM4 }
    /* +0xaf3af9 */ __asm { ADD ECX,0xff794e4e }
    /* +0xaf3aff */ __asm { MOVSXD R14,ECX }
    /* +0xaf3b02 */ __asm { MOV ECX,0xf539679a }
    /* +0xaf3b07 */ __asm { IMUL R11D,ECX,0x1b483a15 }
    /* +0xaf3b0e */ __asm { MOV ECX,ESI }
    /* +0xaf3b10 */ __asm { ROL R11D,CL }
    /* +0xaf3b13 */ __asm { MOV RDI,qword ptr [RBP + -0x28] }
    /* +0xaf3b17 */ __asm { MOV ECX,EDI }
    /* +0xaf3b19 */ __asm { ROR R11D,CL }
    /* +0xaf3b1c */ __asm { XOR RAX,0x7bd1daff }
    /* +0xaf3b22 */ __asm { XOR EDX,EDI }
    /* +0xaf3b24 */ __asm { XOR R11D,R13D }
    /* +0xaf3b27 */ __asm { ADD R9,-0x7bd1daff }
    /* +0xaf3b2e */ __asm { MOVD XMM4,EDX }
    /* +0xaf3b32 */ __asm { PADDD XMM4,XMM2 }
    /* +0xaf3b36 */ __asm { MOVD EDX,XMM4 }
    /* +0xaf3b3a */ __asm { MOV ECX,ESI }
    /* +0xaf3b3c */ __asm { ROL EDX,CL }
    /* +0xaf3b3e */ __asm { SUB R10D,EDI }
    /* +0xaf3b41 */ __asm { MOVSXD RCX,EDX }
    /* +0xaf3b44 */ __asm { CMP R14,RCX }
    /* +0xaf3b47 */ __asm { CMOVBE R9,RAX }
    /* +0xaf3b4b */ __asm { MOV RAX,0x11068317cc2520d0 }
    /* +0xaf3b55 */ __asm { XOR ECX,ECX }
    /* +0xaf3b57 */ __asm { XOR EDX,EDX }
    /* +0xaf3b59 */ __asm { CMP R9,RAX }
    /* +0xaf3b5c */ __asm { SETZ CL }
    /* +0xaf3b5f */ __asm { SETA DL }
    /* +0xaf3b62 */ __asm { CMP R10,R11 }
    /* +0xaf3b65 */ __asm { CMOVGE ECX,EDX }
    /* +0xaf3b68 */ __asm { CMP CL,0x1 }
    /* +0xaf3b6b */ __asm { NOP }
    /* +0xaf3b6c */ __asm { NOP }
    /* +0xaf3b6d */ __asm { NOP }
    /* +0xaf3b6e */ __asm { NOP }
    /* +0xaf3b6f */ __asm { NOP }
    /* +0xaf3b70 */ __asm { NOP }
    /* +0xaf3b71 */ __asm { NOP }
    /* +0xaf3b72 */ __asm { NOP }
    /* +0xaf3b73 */ __asm { NOP }
    /* +0xaf3b74 */ __asm { NOP }
    /* +0xaf3b75 */ __asm { NOP }
    /* +0xaf3b76 */ __asm { NOP }
    /* +0xaf3b77 */ __asm { MOV R9,qword ptr [R8 + -0x104d7a77] }
    /* +0xaf3b7e */ __asm { MOV R11,-0x77601e2dbec050db }
    /* +0xaf3b88 */ __asm { MOV RAX,R9 }
    /* +0xaf3b8b */ __asm { MUL R11 }
    /* +0xaf3b8e */ __asm { MOV R11,RDX }
    /* +0xaf3b91 */ __asm { MOV R10D,0x146de6d }
    /* +0xaf3b97 */ __asm { MOV RAX,R9 }
    /* +0xaf3b9a */ __asm { MUL R10 }
    /* +0xaf3b9d */ __asm { ADD RAX,R11 }
    /* +0xaf3ba0 */ __asm { ADC RDX,0x0 }
    /* +0xaf3ba4 */ __asm { TEST DL,0x1 }
    /* +0xaf3ba7 */ __asm { JNZ 0x7fffa5263f0b }
    /* +0xaf3bad */ __asm { LEA R8,[0x7fffa47c26e0] }
    /* +0xaf3bb4 */ __asm { MOV R9,-0x9f51a8e2a41647e }
    /* +0xaf3bbe */ __asm { CMP R8,R9 }
    /* +0xaf3bc1 */ __asm { JZ 0x7fffa526428b }
    /* +0xaf3bc7 */ __asm { MOV qword ptr [RBP + 0x160],RCX }
}


// ============================================================================
// Function : Unwind@7fffa5264310  |  RVA: 0xaf4310  |  Size: 349 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_7fffa5264310(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x250)) {
    (*(code *)(&UNK_7fffa569005f +
              (int)~(*(int *)(param_2 + 0x180) *
                    ~((*(uint32_t *)(param_2 + 0x2a0) | (uint32_t)DAT_7fffa56b2660) * -0x72406eff))))
              (0x23440663,param_2,
               *(uint64_t *)(param_2 + 0x140) >> 0x3d ^ *(uint64_t *)(param_2 + 0x140));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5264470  |  RVA: 0xaf4470  |  Size: 5822 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Type propagation algorithm not settling */

IMAGE_DOS_HEADER * FUN_7fffa5264470(uint64_t *param_1,uint64_t param_2,int64_t param_3)

{
  uint64_t *puVar1;
  word *pwVar2;
  uint32_t *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint32_t uVar8;
  int64_t lVar9;
  uint8_t bVar10;
  bool bVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint64_t in_RAX;
  uint64_t uVar14;
  IMAGE_DOS_HEADER *pIVar15;
  uint8_t bVar16;
  int iVar17;
  uint32_t uVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  int64_t lVar21;
  uint64_t *puVar22;
  int iVar23;
  uint64_t *puVar24;
  int64_t lVar25;
  uint32_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  int64_t lVar29;
  uint64_t *puVar30;
  int iVar31;
  uint64_t uVar32;
  uint64_t *puVar33;
  word *pwVar34;
  uint8_t *pbVar35;
  uint32_t uVar36;
  uint64_t in_R10;
  uint64_t in_R11;
  uint64_t *puVar37;
  int64_t lVar38;
  int64_t lVar39;
  uint64_t *puVar40;
  uint8_t *pbVar41;
  uint32_t uVar42;
  uint16_t uVar43;
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  char cVar46;
  uint8_t uVar48;
  char cVar49;
  uint8_t uVar50;
  char cVar51;
  uint8_t uVar52;
  char cVar53;
  uint8_t auVar47 [16];
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  uint8_t *pbVar56;
  uint8_t auVar57 [16];
  uint8_t auVar58 [16];
  uint8_t auVar59 [16];
  uint32_t auStack_1d8 [66];
  uint64_t uStack_d0;
  uint64_t *puStack_c8;
  uint64_t uStack_c0;
  int64_t lStack_b8;
  uint64_t uStack_a8;
  IMAGE_DOS_HEADER *pIStack_a0;
  uint64_t *puStack_98;
  int iStack_90;
  uint32_t uStack_8c;
  uint64_t *puStack_80;
  uint64_t *puStack_78;
  uint64_t uStack_70;
  int64_t lStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t *puStack_50;
  uint64_t *puStack_48;
  
  puStack_48 = param_1;
  uVar26 = *(uint32_t *)(param_3 + 0x10c);
  uVar18 = 6;
  if (uVar26 < 6) {
    uVar18 = uVar26;
  }
  lStack_b8 = *(int64_t *)(param_3 + 8);
  uVar42 = (uint32_t)in_R10;
  pIStack_a0 = (IMAGE_DOS_HEADER *)(uint64_t)*(uint32_t *)(param_3 + 0x18);
  bVar16 = (uint8_t)in_R10 & 0x1f;
  uStack_60 = CONCAT44(uStack_60._4_4_,uVar42) | 1;
  uVar32 = ~((in_R10 | 1) * 0x4695f0ae31bcbb92);
  iVar17 = 0;
  if (6 < uVar26) {
    iVar17 = 1 << ((char)uVar26 - 6U & 0x1f);
  }
  uVar14 = (in_RAX << 0x27 | in_RAX >> 0x19) ^ (in_RAX << 0x1b | in_RAX >> 0x25) ^
           (in_RAX << 0x2d | in_RAX >> 0x13);
  uVar14 = (uVar14 << 0x34 | uVar14 >> 0xc) ^ (uVar14 << 0x1c | uVar14 >> 0x24) ^ uVar14;
  uVar28 = uVar14 << 0x28 | uVar14 >> 0x18;
  uVar19 = (uVar14 << 0x38 | uVar14 >> 8) ^ uVar14 ^ uVar28;
  lVar29 = ((~uVar28 & in_R11) - (~in_R11 & uVar28)) +
           ((uint64_t)((uVar42 | 1) * 0x17980000 | (uVar42 | 1) * 0x45d222f3 >> 0xd) - 0x301ed8ce)
           * uVar28 + (in_R11 | uVar28) * ((uVar32 << 0xb | uVar32 >> 0x35) + 0xccbf9480) +
           ((uint64_t)((0x567b0a43U >> bVar16 | 0x567b0a43 << 0x20 - bVar16) + 0x5ae0243f) -
           0xe001cf7c) * ~uVar28;
  puVar30 = (uint64_t *)(lVar29 - (lVar29 << 0x25));
  lVar21 = *(int64_t *)(param_3 + 0x38);
  uVar32 = *(uint64_t *)(param_3 + 0x60);
  uVar26 = *(uint32_t *)(param_3 + 0x1c);
  uVar36 = 1 << (*(uint8_t *)(param_3 + 0x100) & 0x1f);
  iVar23 = 1 << ((uint8_t)uVar18 & 0x1f);
  lVar29 = *(int64_t *)(param_3 + 0x70);
  uStack_70 = (int64_t)puVar30 - lStack_b8;
  uVar14 = *puVar30;
  puStack_98 = *(uint64_t **)(param_3 + 0xf8);
  uStack_58 = uVar14 * -0x30e4432340650000 >>
              (0x42U - *(char *)(*(uint64_t **)(param_3 + 0xf8) + 0x21) & 0x3f);
  uVar12 = (uint32_t)uStack_70;
  uVar18 = uVar12 - uVar36;
  if (uVar12 - uVar26 <= uVar36) {
    uVar18 = uVar26;
  }
  if ((uint64_t)(int64_t)(int)(uVar42 + 0x7af3c2ee) <
      (uint64_t)((uVar42 + 0xb2ba245c) * 0x20000 | uVar42 + 0xb2ba245c >> 0xf) ==
      (*(int *)(param_3 + 0x28) == 0)) {
    uVar18 = uVar26;
  }
  puStack_80 = (uint64_t *)(uint64_t)uVar18;
  puStack_78 = (uint64_t *)
               ((uVar19 << 0x10 | uVar19 >> 0x30) ^ (uVar19 << 0x30 | uVar19 >> 0x10) ^ uVar19);
  lStack_68._0_1_ = (char)*(int *)(param_3 + 0x34);
  if (*(int *)(param_3 + 300) == 0) {
    uVar26 = *(uint32_t *)(param_3 + 0x2c);
    uVar14 = (uint64_t)uVar26;
    lVar39 = lVar21;
    lVar38 = lVar29;
    if (0x180 < uVar12 - uVar26) {
      if (uVar26 < (uint32_t)(int)(short)(((uint16_t)in_R10 | 1) * 0x61a0)) {
        uVar18 = 0x38 - *(int *)(param_3 + 0x34);
        do {
          uVar28 = *(int64_t *)(lStack_b8 + 8 + uVar14) * -0x30e4432340650000;
          uVar19 = uVar28 ^ *(uint64_t *)(param_3 + 0x60);
          bVar16 = (uint8_t)uVar18;
          if ((int)uStack_60 * 0x42b25660 + 0xcff67bf5U < (uVar42 ^ 0x210943bb)) {
            uVar36 = (uint32_t)(uVar19 >> (bVar16 & 0x3f));
          }
          else {
            bVar10 = (uint8_t)in_R10 & 0x1f;
            uVar36 = -0x2c962573 << bVar10 | 0xd369da8dU >> 0x20 - bVar10;
            uVar28 = uVar28 * *(uint64_t *)(param_3 + 0x60);
            if ((int64_t)(int)(uVar36 << 0xc | uVar36 >> 0x14) <=
                (int64_t)(uint64_t)((uVar42 ^ 0x6de7092f) + 0xf42efd40)) {
              uVar28 = uVar19;
            }
            uVar36 = (uint32_t)(uVar28 >> (bVar16 & 0x3f));
            if ((uint64_t)(uVar42 + 0x21a6e2ee) == 0x2000000085d) {
              uVar36 = uVar18 | (uint32_t)uVar28;
            }
          }
          uVar19 = (uint64_t)((uint32_t)uVar14 & 7);
          uVar13 = *(uint32_t *)(param_3 + 0x40 + uVar19 * 4);
          uVar28 = (uint64_t)(uVar13 >> 2 & 0xffffffc0);
          *(uint32_t *)(param_3 + 0x40 + uVar19 * 4) = uVar36;
          lVar39 = 0;
          if ((*(uint8_t *)(lVar21 + uVar28) & 0x3f) == 1) {
            lVar39 = 0x3f;
          }
          lVar39 = lVar39 + (uint64_t)(*(uint8_t *)(lVar21 + uVar28) - 1 & 0x3f);
          *(char *)(lVar21 + uVar28) = (char)lVar39;
          *(char *)(uVar28 + lVar21 + lVar39) = (char)uVar13;
          *(uint32_t *)(lVar29 + uVar28 * 4 + lVar39 * 4) = (uint32_t)uVar14;
          uVar14 = uVar14 + 1;
        } while (uVar26 + 0x60 != uVar14);
        lVar39 = *(int64_t *)(param_3 + 0x38);
        lVar38 = *(int64_t *)(param_3 + 0x70);
      }
      uVar26 = uVar12 - 0x20;
      pbVar41 = (uint8_t *)(lStack_b8 + (uint64_t)uVar26);
      uVar36 = ((int)(uint8_t *)((int64_t)puVar30 + 1U) - (int)pbVar41) + 1;
      uVar18 = 8;
      if (uVar36 < 8) {
        uVar18 = uVar36;
      }
      uVar36 = 0;
      if (pbVar41 <= (uint8_t *)((int64_t)puVar30 + 1U)) {
        uVar36 = uVar18;
      }
      if (uVar26 < (uVar36 + uVar12) - 0x20) {
        uVar14 = *(uint64_t *)(param_3 + 0x60);
        uVar8 = *(uint32_t *)(param_3 + 0x34);
        uVar19 = (uint64_t)uVar26;
        do {
          *(int *)(param_3 + 0x40 + (uint64_t)((uint32_t)uVar19 & 7) * 4) =
               (int)((*(int64_t *)(lStack_b8 + uVar19) * -0x30e4432340650000 ^ uVar14) >>
                    (0x38U - (char)uVar8 & 0x3f));
          uVar36 = uVar36 - 1;
          uVar19 = uVar19 + 1;
        } while (uVar36 != 0);
      }
    }
    uStack_c0 = uStack_70 & 0xffffffff;
    if (uVar26 < uVar12) {
      lVar9 = *(int64_t *)(param_3 + 8);
      uVar14 = (uint64_t)uVar26;
      uVar8 = *(uint32_t *)(param_3 + 0x34);
      while( true ) {
        uVar28 = (uint64_t)((uint32_t)uVar14 & 7);
        uVar26 = *(uint32_t *)(param_3 + 0x40 + uVar28 * 4);
        uVar19 = (uint64_t)(uVar26 >> 2 & 0xffffffc0);
        *(int *)(param_3 + 0x40 + uVar28 * 4) =
             (int)((*(int64_t *)(lVar9 + 8 + uVar14) * -0x30e4432340650000 ^
                   *(uint64_t *)(param_3 + 0x60)) >> (0x38U - (char)uVar8 & 0x3f));
        lVar25 = 0;
        if ((*(uint8_t *)(lVar39 + uVar19) & 0x3f) == 1) {
          lVar25 = 0x3f;
        }
        lVar25 = (uint64_t)(*(uint8_t *)(lVar39 + uVar19) - 1 & 0x3f) + lVar25;
        *(char *)(lVar39 + uVar19) = (char)lVar25;
        *(char *)(lVar39 + uVar19 + lVar25) = (char)uVar26;
        *(uint32_t *)(lVar38 + uVar19 * 4 + lVar25 * 4) = (uint32_t)uVar14;
        if (uStack_c0 - 1 == uVar14) break;
        uVar14 = uVar14 + 1;
      }
    }
    *(uint32_t *)(param_3 + 0x2c) = uVar12;
    uVar26 = *(uint32_t *)(param_3 + 0x40 + (uint64_t)(uVar12 & 7) * 4);
    *(int *)(param_3 + 0x40 + (uint64_t)(uVar12 & 7) * 4) =
         (int)((*(int64_t *)(lStack_b8 + 8 + uStack_c0) * -0x30e4432340650000 ^ uVar32) >>
              (0x38U - (char)lStack_68 & 0x3f));
  }
  else {
    *(uint32_t *)(param_3 + 0x2c) = uVar12;
    uVar26 = (uint32_t)((uVar14 * -0x30e4432340650000 ^ uVar32) >> (0x38U - (char)lStack_68 & 0x3f));
  }
  auVar47[0] = (uint8_t)uVar26;
  uVar48 = (uint8_t)(uVar26 >> 8);
  uVar50 = (uint8_t)(uVar26 >> 0x10);
  uVar52 = (uint8_t)(uVar26 >> 0x18);
  if ((uint64_t)(int64_t)(int)(uVar42 + 0xb1e958db) <
      (uint64_t)((int)uStack_60 * 0x73c49e3f + 0x2e69ea97)) {
    auVar58._4_4_ =
         (int)(CONCAT35(CONCAT21(CONCAT11(uVar52,uVar52),uVar50),CONCAT14(uVar50,uVar26)) >> 0x20);
    auVar58[3] = uVar48;
    auVar58[2] = uVar48;
    auVar58[1] = auVar47[0];
    auVar58[0] = auVar47[0];
    auVar58._8_8_ = 0;
    auVar58 = pshuflw(auVar58,auVar58,0);
    auVar59._0_4_ = auVar58._0_4_;
    auVar59._4_4_ = auVar59._0_4_;
    auVar59._8_4_ = auVar59._0_4_;
    auVar59._12_4_ = auVar59._0_4_;
    *(uint32_t *)(param_3 + 0x68) = *(int *)(param_3 + 0x68) + uVar26;
    uStack_d0 = (uint64_t)(uVar42 + 0x5c522176);
  }
  else {
    auVar57._4_4_ =
         (int)(CONCAT35(CONCAT21(CONCAT11(uVar52,uVar52),uVar50),CONCAT14(uVar50,uVar26)) >> 0x20);
    auVar57[3] = uVar48;
    auVar57[2] = uVar48;
    auVar57[1] = auVar47[0];
    auVar57[0] = auVar47[0];
    auVar57._8_8_ = 0;
    auVar58 = pshuflw(auVar57,auVar57,0);
    *(int *)(param_3 + 0x68) = *(int *)(param_3 + 0x68) + uVar26;
    auVar59._0_4_ = auVar58._0_4_;
    auVar59._4_4_ = auVar59._0_4_;
    auVar59._8_4_ = auVar59._0_4_;
    auVar59._12_4_ = auVar59._0_4_;
    uStack_d0 = (int64_t)
                (int)((int)uStack_60 * 0xbc0c8f0 | (uint32_t)((int)uStack_60 * -0x1f43f371) >> 0x1c);
  }
  uVar32 = (uint64_t)(uVar26 >> 2 & 0xffffffc0);
  bVar16 = *(uint8_t *)(lVar21 + uVar32);
  auVar47._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar52,uVar52),uVar50),CONCAT14(uVar50,uVar26)) >> 0x20);
  auVar47[3] = uVar48;
  auVar47[2] = uVar48;
  auVar47[1] = auVar47[0];
  auVar47._8_8_ = 0;
  auVar58 = pshuflw(auVar47,auVar47,0);
  lVar29 = lVar29 + uVar32 * 4;
  pcVar7 = (char *)(lVar21 + uVar32);
  pcVar4 = (char *)(lVar21 + 0x10 + uVar32);
  pcVar5 = (char *)(lVar21 + 0x20 + uVar32);
  pcVar6 = (char *)(lVar21 + 0x30 + uVar32);
  auVar54[0] = -(*pcVar4 == auVar59[0]);
  auVar54[1] = -(pcVar4[1] == auVar59[1]);
  auVar54[2] = -(pcVar4[2] == auVar59[2]);
  auVar54[3] = -(pcVar4[3] == auVar59[3]);
  auVar54[4] = -(pcVar4[4] == auVar59[4]);
  auVar54[5] = -(pcVar4[5] == auVar59[5]);
  auVar54[6] = -(pcVar4[6] == auVar59[6]);
  auVar54[7] = -(pcVar4[7] == auVar59[7]);
  auVar54[8] = -(pcVar4[8] == auVar59[8]);
  auVar54[9] = -(pcVar4[9] == auVar59[9]);
  auVar54[10] = -(pcVar4[10] == auVar59[10]);
  auVar54[0xb] = -(pcVar4[0xb] == auVar59[0xb]);
  auVar54[0xc] = -(pcVar4[0xc] == auVar59[0xc]);
  auVar54[0xd] = -(pcVar4[0xd] == auVar59[0xd]);
  auVar54[0xe] = -(pcVar4[0xe] == auVar59[0xe]);
  auVar54[0xf] = -(pcVar4[0xf] == auVar59[0xf]);
  auVar44[0] = -(*pcVar7 == auVar59[0]);
  auVar44[1] = -(pcVar7[1] == auVar59[1]);
  auVar44[2] = -(pcVar7[2] == auVar59[2]);
  auVar44[3] = -(pcVar7[3] == auVar59[3]);
  auVar44[4] = -(pcVar7[4] == auVar59[4]);
  auVar44[5] = -(pcVar7[5] == auVar59[5]);
  auVar44[6] = -(pcVar7[6] == auVar59[6]);
  auVar44[7] = -(pcVar7[7] == auVar59[7]);
  auVar44[8] = -(pcVar7[8] == auVar59[8]);
  auVar44[9] = -(pcVar7[9] == auVar59[9]);
  auVar44[10] = -(pcVar7[10] == auVar59[10]);
  auVar44[0xb] = -(pcVar7[0xb] == auVar59[0xb]);
  auVar44[0xc] = -(pcVar7[0xc] == auVar59[0xc]);
  auVar44[0xd] = -(pcVar7[0xd] == auVar59[0xd]);
  auVar44[0xe] = -(pcVar7[0xe] == auVar59[0xe]);
  auVar44[0xf] = -(pcVar7[0xf] == auVar59[0xf]);
  cVar46 = auVar58[0];
  auVar45[0] = -(*pcVar5 == cVar46);
  cVar49 = auVar58[1];
  auVar45[1] = -(pcVar5[1] == cVar49);
  cVar51 = auVar58[2];
  auVar45[2] = -(pcVar5[2] == cVar51);
  cVar53 = auVar58[3];
  auVar45[3] = -(pcVar5[3] == cVar53);
  auVar45[4] = -(pcVar5[4] == cVar46);
  auVar45[5] = -(pcVar5[5] == cVar49);
  auVar45[6] = -(pcVar5[6] == cVar51);
  auVar45[7] = -(pcVar5[7] == cVar53);
  auVar45[8] = -(pcVar5[8] == cVar46);
  auVar45[9] = -(pcVar5[9] == cVar49);
  auVar45[10] = -(pcVar5[10] == cVar51);
  auVar45[0xb] = -(pcVar5[0xb] == cVar53);
  auVar45[0xc] = -(pcVar5[0xc] == cVar46);
  auVar45[0xd] = -(pcVar5[0xd] == cVar49);
  auVar45[0xe] = -(pcVar5[0xe] == cVar51);
  auVar45[0xf] = -(pcVar5[0xf] == cVar53);
  auVar55[0] = -(*pcVar6 == cVar46);
  auVar55[1] = -(pcVar6[1] == cVar49);
  auVar55[2] = -(pcVar6[2] == cVar51);
  auVar55[3] = -(pcVar6[3] == cVar53);
  auVar55[4] = -(pcVar6[4] == cVar46);
  auVar55[5] = -(pcVar6[5] == cVar49);
  auVar55[6] = -(pcVar6[6] == cVar51);
  auVar55[7] = -(pcVar6[7] == cVar53);
  auVar55[8] = -(pcVar6[8] == cVar46);
  auVar55[9] = -(pcVar6[9] == cVar49);
  auVar55[10] = -(pcVar6[10] == cVar51);
  auVar55[0xb] = -(pcVar6[0xb] == cVar53);
  auVar55[0xc] = -(pcVar6[0xc] == cVar46);
  auVar55[0xd] = -(pcVar6[0xd] == cVar49);
  auVar55[0xe] = -(pcVar6[0xe] == cVar51);
  auVar55[0xf] = -(pcVar6[0xf] == cVar53);
  uVar14 = (uint64_t)
           CONCAT22((uint16_t)(SUB161(auVar55 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar55[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar45 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar45[0xf] >> 7) << 0xf) << 0x20 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar54 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar54[0xf] >> 7) << 0xf) << 0x10 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar44 >> 7,0) & 1) |
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
                   (uint16_t)(auVar44[0xf] >> 7) << 0xf);
  uStack_a8 = in_R10;
  if (uVar14 == 0) {
    lStack_68 = 0;
  }
  else {
    uVar14 = uVar14 >> (bVar16 & 0x3f) | uVar14 << 0x40 - (bVar16 & 0x3f);
    lStack_68 = 0;
    uVar26 = (uint32_t)uStack_d0 | 1;
    do {
      uVar43 = 0x54b1 - (uint16_t)in_R10;
      iVar31 = 0;
      for (uVar19 = uVar14; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
        iVar31 = iVar31 + 1;
      }
      uVar18 = iVar31 + (uint32_t)bVar16 & 0x3f;
      if (uVar18 != ((uint16_t)(uVar43 * 0x2000 | uVar43 >> 3) * uVar26 & 0xffff)) {
        uVar18 = *(uint32_t *)(lVar29 + (uint64_t)uVar18 * 4);
        if (uVar18 < (uint32_t)puStack_80) break;
        iVar23 = iVar23 + -1;
        auStack_1d8[lStack_68] = uVar18;
        lStack_68 = lStack_68 + 1;
      }
      uVar18 = (uVar42 + 0xd4dedd61) * -0x44dbbaf1;
      bVar10 = (uint8_t)uStack_d0 & 0x1f;
      uVar19 = uVar14 - 1;
      if ((int)(uVar18 >> bVar10 | uVar18 << 0x20 - bVar10) <=
          (int)~(((uint32_t)uStack_d0 + 0x78bb111e) * 0x80 | (uint32_t)uStack_d0 + 0x78bb111e >> 0x19)) {
        uVar19 = -uVar14;
      }
      uVar14 = uVar14 & uVar19;
    } while (uVar14 != 0 && iVar23 != 0);
  }
  uVar14 = uStack_58;
  _iStack_90 = CONCAT44(uStack_8c,iVar23);
  uStack_58 = uStack_58 << 2;
  lVar39 = 0;
  if ((bVar16 & 0x3f) == 1) {
    lVar39 = 0x3f;
  }
  lVar39 = (uint64_t)(bVar16 - 1 & 0x3f) + lVar39;
  *(uint8_t *)(uVar32 + lVar21) = (char)lVar39;
  ((uint8_t *)(uVar32 + lVar21))[lVar39] = auVar47[0];
  iVar31 = *(int *)(param_3 + 0x2c);
  *(int *)(param_3 + 0x2c) = iVar31 + 1;
  *(int *)(lVar29 + lVar39 * 4) = iVar31;
  uVar26 = (uint32_t)uStack_70;
  bVar16 = (uint8_t)(uint32_t)uStack_d0;
  if (lStack_68 == 0) {
    pbVar41 = (uint8_t *)0x3;
  }
  else {
    puStack_80 = (uint64_t *)((int64_t)puStack_48 - 1U);
    uVar18 = uVar26 + 3;
    if ((uint64_t)(int64_t)(int)(~((int)uStack_60 * 0x3924a76d) * 0x362f6325 ^ (uint32_t)uStack_d0) <
        (uint64_t)(0x4b22df01 - ((uint32_t)uStack_d0 + 0x44e08ee4 ^ (uint32_t)uStack_a8))) {
      uVar18 = uVar26 & 3;
    }
    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar18);
    puVar1 = (uint64_t *)((int64_t)puStack_48 - 7);
    puStack_c8 = puVar30 + 1;
    pbVar35 = (uint8_t *)0x3;
    lVar29 = 0;
    puStack_50 = (uint64_t *)((int64_t)puStack_48 - 3U);
    do {
      uVar42 = auStack_1d8[lVar29];
      puVar24 = (uint64_t *)(lStack_b8 + (uint64_t)uVar42);
      if (*(int *)(pbVar35 + -3 + (int64_t)puVar24) ==
          *(int *)((int64_t)puVar30 + (int64_t)(pbVar35 + -3))) {
        if (puVar30 < puVar1) {
          if (*puVar24 == *puVar30) {
            puVar24 = (uint64_t *)(lStack_b8 + 8 + (uint64_t)uVar42);
            puVar20 = puStack_c8;
            puVar40 = puStack_c8;
            if (puStack_c8 < puVar1) {
LAB_7fffa5264e70:
              uVar32 = *puVar40;
              uVar19 = *puVar24;
              bVar11 = uVar19 < uVar32;
              if ((uint64_t)
                  ~(0x3fa2b9e8 << (bVar16 & 0x1f) | 0x3fa2b9e8U >> 0x20 - (bVar16 & 0x1f)) <
                  (uint64_t)(int64_t)(int)(((uint32_t)uStack_d0 ^ 0x4ac18239) * (int)uStack_60)) {
                bVar11 = uVar19 == uVar32;
              }
              if (bVar11) goto code_r0x7fffa5264ec8;
              uVar12 = 0;
              for (uVar32 = uVar32 ^ uVar19; (uVar32 & 1) == 0;
                  uVar32 = uVar32 >> 1 | 0x8000000000000000) {
                uVar12 = uVar12 + 1;
              }
              pbVar41 = (uint8_t *)((int64_t)puVar20 + ((uint64_t)(uVar12 >> 3) - (int64_t)puVar30))
              ;
              goto joined_r0x7fffa5264fc5;
            }
            goto LAB_7fffa5264eee;
          }
          uVar12 = 0;
          for (uVar32 = *puVar24 ^ *puVar30; (uVar32 & 1) == 0;
              uVar32 = uVar32 >> 1 | 0x8000000000000000) {
            uVar12 = uVar12 + 1;
          }
          pbVar41 = (uint8_t *)(uint64_t)(uVar12 >> 3);
        }
        else {
          puVar40 = puVar30;
LAB_7fffa5264eee:
          if ((puVar40 < (uint64_t *)((int64_t)puStack_48 - 3U)) &&
             ((uint32_t)*puVar24 == (uint32_t)*puVar40)) {
            puVar40 = (uint64_t *)((int64_t)puVar40 + 4);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
          }
          if ((puVar40 < (uint64_t *)((int64_t)puStack_48 - 1U)) &&
             ((short)*puVar24 == (short)*puVar40)) {
            puVar40 = (uint64_t *)((int64_t)puVar40 + 2);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
          }
          if (puVar40 < puStack_48) {
            puVar40 = (uint64_t *)
                      ((int64_t)puVar40 + (uint64_t)((uint8_t)*puVar24 == (uint8_t)*puVar40));
          }
          pbVar41 = (uint8_t *)((int64_t)puVar40 - (int64_t)puVar30);
        }
joined_r0x7fffa5264fc5:
        if (pbVar35 < pbVar41) {
          *puStack_78 = (uint64_t)(uVar18 - uVar42);
          pbVar35 = pbVar41;
          if ((uint64_t *)((int64_t)puVar30 + (int64_t)pbVar41) == puStack_48) break;
        }
      }
      lVar29 = lVar29 + 1;
      pbVar41 = pbVar35;
    } while (lVar29 != lStack_68);
  }
  pwVar2 = (word *)(pIStack_a0->e_magic + lStack_b8);
  pbVar35 = (uint8_t *)*puStack_98;
  lVar29 = puStack_98[1];
  uVar18 = *(uint32_t *)(puStack_98[0xe] + 0xc + uVar14 * 0x10);
  iVar31 = ((int)pbVar35 - (int)lVar29) - (int)pIStack_a0;
  uVar42 = iVar17 + iVar23;
  if (uVar42 == 0) {
    uVar32 = 0;
  }
  else {
    puVar1 = (uint64_t *)((int64_t)puVar30 + 4);
    uVar32 = 3;
    if (uVar42 < 3) {
      uVar32 = (uint64_t)uVar42;
    }
    puVar24 = (uint64_t *)((int64_t)puStack_48 + -7);
    uVar19 = 0;
    pIVar15 = pIStack_a0;
    do {
      uVar18 = *(uint32_t *)(uVar14 * 0x10 + puStack_98[0xe] + uVar19 * 4);
      if (uVar18 == (((uint32_t)uStack_d0 - 0xdb34) * 0x6441 + 0x5b38 & 0xffff)) {
        return pIVar15;
      }
      puVar3 = (uint32_t *)(lVar29 + (uint64_t)uVar18);
      uVar36 = *puVar3;
      pIVar15 = (IMAGE_DOS_HEADER *)(uint64_t)uVar36;
      uVar12 = (uint32_t)*puVar30;
      bVar11 = uVar36 == uVar12;
      if ((int64_t)
          (uint64_t)
          (((uint32_t)uStack_a8 ^ 0x604ddaae) << (bVar16 & 0x1f) |
          ((uint32_t)uStack_a8 ^ 0x604ddaae) >> 0x20 - (bVar16 & 0x1f)) <=
          (int64_t)
          (int)((0xae2ed0b << (bVar16 & 0x1f) | 0xae2ed0bU >> 0x20 - (bVar16 & 0x1f)) +
               (uint32_t)uStack_a8)) {
        bVar11 = uVar36 != uVar12 && (int)uVar12 <= (int)uVar36;
      }
      if (bVar11) {
        puVar40 = (uint64_t *)(puVar3 + 1);
        puVar20 = (uint64_t *)(((int64_t)pbVar35 - (int64_t)puVar40) + (int64_t)puVar1);
        if (puStack_48 <= puVar20) {
          puVar20 = puStack_48;
        }
        puVar22 = puVar40;
        puVar37 = puVar1;
        if (puVar1 < (uint64_t *)((int64_t)puVar20 - 7U)) {
          if (*puVar40 == *puVar1) {
            puVar22 = (uint64_t *)(lVar29 + 0xc + (uint64_t)uVar18);
            puVar33 = puVar1;
            puVar37 = (uint64_t *)((int64_t)puVar30 + 0xc);
            do {
              if ((uint64_t *)((int64_t)puVar20 - 7U) <= puVar37) goto LAB_7fffa526529a;
              uVar28 = *puVar37;
              uVar27 = *puVar22;
              puVar37 = puVar37 + 1;
              puVar33 = puVar33 + 1;
              puVar22 = puVar22 + 1;
            } while (uVar27 == uVar28);
            uVar12 = 0;
            for (uVar28 = uVar28 ^ uVar27; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar12 = uVar12 + 1;
            }
            pbVar56 = (uint8_t *)((int64_t)puVar33 + ((uint64_t)(uVar12 >> 3) - (int64_t)puVar1));
          }
          else {
            uVar12 = 0;
            for (uVar28 = *puVar40 ^ *puVar1; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar12 = uVar12 + 1;
            }
            pbVar56 = (uint8_t *)(uint64_t)(uVar12 >> 3);
          }
        }
        else {
LAB_7fffa526529a:
          if ((puVar37 < (uint64_t *)((int64_t)puVar20 - 3U)) &&
             ((uint32_t)*puVar22 == (uint32_t)*puVar37)) {
            puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
            puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
          }
          if ((puVar37 < (uint64_t *)((int64_t)puVar20 - 1U)) &&
             ((short)*puVar22 == (short)*puVar37)) {
            puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
            puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
          }
          if (puVar37 < puVar20) {
            puVar37 = (uint64_t *)
                      ((int64_t)puVar37 + (uint64_t)((uint8_t)*puVar22 == (uint8_t)*puVar37));
          }
          pbVar56 = (uint8_t *)((int64_t)puVar37 - (int64_t)puVar1);
        }
        if ((uint8_t *)((int64_t)puVar40 + (int64_t)pbVar56) == pbVar35) {
          puVar40 = (uint64_t *)((int64_t)puVar1 + (int64_t)pbVar56);
          pwVar34 = pwVar2;
          puVar20 = puVar40;
          if (puVar40 < puVar24) {
            if (*(uint64_t *)pwVar2 == *puVar40) {
              puVar20 = (uint64_t *)((int64_t)puVar30 + 0xc + (int64_t)pbVar56);
              lVar21 = 8;
              if (puVar20 < puVar24) {
LAB_7fffa5265370:
                if (*(uint64_t *)((int64_t)pwVar2 + lVar21) == *puVar20)
                goto code_r0x7fffa5265398;
                uVar12 = 0;
                for (uVar28 = *(uint64_t *)((int64_t)pwVar2 + lVar21) ^ *puVar20;
                    (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x8000000000000000) {
                  uVar12 = uVar12 + 1;
                }
                uVar28 = (uint64_t)(uVar12 >> 3) + lVar21;
                goto code_r0x7fffa526542d;
              }
LAB_7fffa52653aa:
              pwVar34 = (word *)(lVar21 + (int64_t)pwVar2);
              goto LAB_7fffa52653b2;
            }
            uVar12 = 0;
            for (uVar28 = *(uint64_t *)pwVar2 ^ *puVar40; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar12 = uVar12 + 1;
            }
            uVar28 = (uint64_t)(uVar12 >> 3);
          }
          else {
LAB_7fffa52653b2:
            if ((puVar20 < (uint64_t *)((int64_t)puStack_48 - 3U)) &&
               (*(uint32_t *)pwVar34 == (uint32_t)*puVar20)) {
              puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
              pwVar34 = pwVar34 + 2;
            }
            if ((puVar20 < (uint64_t *)((int64_t)puStack_48 - 1U)) && (*pwVar34 == (word)*puVar20)
               ) {
              pwVar34 = pwVar34 + 1;
              puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
            }
            if (puVar20 < puStack_48) {
              puVar20 = (uint64_t *)
                        ((int64_t)puVar20 + (uint64_t)((uint8_t)*pwVar34 == (uint8_t)*puVar20));
            }
            uVar28 = (int64_t)puVar20 - (int64_t)puVar40;
          }
code_r0x7fffa526542d:
          pbVar56 = pbVar56 + uVar28;
        }
        pbVar56 = pbVar56 + 4;
        if (pbVar41 < pbVar56) {
          *puStack_78 = (uint64_t)((uVar26 + 3 + iVar31) - uVar18);
          pbVar41 = pbVar56;
          if ((uint64_t *)((int64_t)puVar30 + (int64_t)pbVar56) == puStack_48) {
            return pIVar15;
          }
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar32);
    uVar18 = *(uint32_t *)(puStack_98[0xe] + (uStack_58 | 3) * 4);
  }
  uVar42 = uVar42 - (int)uVar32;
  uVar12 = uVar18 & 0xff;
  if (uVar12 <= uVar42) {
    uVar42 = uVar12;
  }
  if (uVar42 == 0) {
    return (IMAGE_DOS_HEADER *)(uint64_t)uVar12;
  }
  if (7 < uVar42) {
    for (uVar32 = 8; (uVar42 & 0xf8) != uVar32; uVar32 = uVar32 + 8) {
    }
  }
  if ((uint64_t)(uVar42 & 7) != 0) {
    uVar32 = 0;
    do {
      uVar32 = uVar32 + 1;
    } while ((uVar42 & 7) != uVar32);
  }
  uVar32 = (uint64_t)(uVar18 >> 8);
  puVar1 = (uint64_t *)((int64_t)puVar30 + 4);
  pIVar15 = (IMAGE_DOS_HEADER *)(uint64_t)((uint32_t)uStack_d0 | 1);
  uVar18 = (uint32_t)*puVar30;
  uVar12 = 0;
  do {
    uVar36 = *(uint32_t *)(puStack_98[0x10] + uVar32 * 4);
    uVar14 = (uint64_t)uVar36;
    if (*(uint32_t *)(lVar29 + uVar14) == uVar18) {
      puVar20 = (uint64_t *)(lVar29 + uVar14 + 4);
      pIVar15 = (IMAGE_DOS_HEADER *)
                (uint64_t)
                (0xf6310afd - (uint32_t)uStack_a8 >> (bVar16 & 0x1f) |
                0xf6310afd - (uint32_t)uStack_a8 << 0x20 - (bVar16 & 0x1f));
      puVar24 = (uint64_t *)(-4 - (lVar29 + uVar14));
      if (pIVar15 < (IMAGE_DOS_HEADER *)
                    (uint64_t)
                    ~((((uint32_t)uStack_a8 ^ 0xdbcfa6d0) + 0x986d5532) * ((uint32_t)uStack_d0 | 1))) {
        puVar24 = puVar20;
      }
      puVar40 = (uint64_t *)((int64_t)puVar24 + (int64_t)(pbVar35 + (int64_t)puVar1));
      if (puStack_48 <= (uint64_t *)((int64_t)puVar24 + (int64_t)(pbVar35 + (int64_t)puVar1))) {
        puVar40 = puStack_48;
      }
      puVar22 = puVar20;
      puVar24 = puVar1;
      if (puVar1 < (uint64_t *)((int64_t)puVar40 - 7U)) {
        if (*puVar20 == *puVar1) {
          lVar21 = lVar29 + 0xc + uVar14;
          lVar39 = 0;
          do {
            puVar24 = (uint64_t *)((int64_t)puVar30 + lVar39 + 0xc);
            if ((uint64_t *)((int64_t)puVar40 - 7U) <= puVar24) {
              puVar22 = (uint64_t *)(lVar21 + lVar39);
              goto LAB_7fffa5265835;
            }
            uVar14 = *(uint64_t *)(lVar21 + lVar39);
            uVar19 = *puVar24;
            lVar39 = lVar39 + 8;
          } while (uVar14 == uVar19);
          uVar13 = ((uint32_t)uStack_a8 ^ 0xa5525668) - 0xec129e;
          uVar13 = uVar13 << (bVar16 & 0x1f) | uVar13 >> 0x20 - (bVar16 & 0x1f);
          pIVar15 = (IMAGE_DOS_HEADER *)(uint64_t)uVar13;
          uVar28 = uVar14 | uVar19;
          if ((int64_t)(int)uVar13 <
              (int64_t)(uint64_t)(0xb60135c2 - ((uint32_t)uStack_a8 + 0xa3df83b6) ^ (uint32_t)uStack_d0))
          {
            uVar28 = uVar14 ^ uVar19;
          }
          uVar13 = 0;
          for (; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x8000000000000000) {
            uVar13 = uVar13 + 1;
          }
          uVar14 = (uint64_t)(uVar13 >> 3) + lVar39;
        }
        else {
          uVar13 = 0;
          for (uVar14 = *puVar20 ^ *puVar1; (uVar14 & 1) == 0;
              uVar14 = uVar14 >> 1 | 0x8000000000000000) {
            uVar13 = uVar13 + 1;
          }
          uVar14 = (uint64_t)(uVar13 >> 3);
        }
      }
      else {
LAB_7fffa5265835:
        if ((puVar24 < (uint64_t *)((int64_t)puVar40 - 3U)) &&
           (pIVar15 = (IMAGE_DOS_HEADER *)(uint64_t)(uint32_t)*puVar22,
           (uint32_t)*puVar22 == (uint32_t)*puVar24)) {
          puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
          puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
        }
        if ((puVar24 < (uint64_t *)((int64_t)puVar40 - 1U)) &&
           ((short)*puVar22 == (short)*puVar24)) {
          pIVar15 = &IMAGE_DOS_HEADER_7fffa4770000;
          puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
          puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
        }
        if (puVar24 < puVar40) {
          puVar24 = (uint64_t *)((int64_t)puVar24 + (uint64_t)((uint8_t)*puVar22 == (uint8_t)*puVar24))
          ;
        }
        uVar14 = (int64_t)puVar24 - (int64_t)puVar1;
      }
      if ((uint8_t *)((int64_t)puVar20 + uVar14) == pbVar35) {
        puVar24 = (uint64_t *)((int64_t)puVar1 + uVar14);
        puVar20 = puVar24;
        pwVar34 = pwVar2;
        if (puVar24 < (uint64_t *)((int64_t)puStack_48 - 7U)) {
          uVar19 = *puVar24;
          uVar28 = *(uint64_t *)pwVar2;
          if (uVar28 == uVar19) {
            puVar20 = (uint64_t *)((int64_t)puVar30 + uVar14 + 0xc);
            pbVar56 = (uint8_t *)((int64_t)puVar1 + uVar14);
            pwVar34 = (word *)(pIStack_a0->e_magic + lStack_b8 + 8);
            do {
              if ((uint64_t *)((int64_t)puStack_48 - 7U) <= puVar20) goto LAB_7fffa52659ae;
              uVar19 = *(uint64_t *)pwVar34;
              uVar28 = *puVar20;
              puVar20 = puVar20 + 1;
              pbVar56 = pbVar56 + 8;
              pwVar34 = pwVar34 + 4;
            } while (uVar19 == uVar28);
            uVar13 = 0;
            for (uVar19 = uVar19 ^ uVar28; (uVar19 & 1) == 0;
                uVar19 = uVar19 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            pbVar56 = pbVar56 + ((uint64_t)(uVar13 >> 3) - (int64_t)puVar24);
          }
          else {
            bVar10 = (uint8_t)uStack_a8 & 0x1f;
            pIVar15 = (IMAGE_DOS_HEADER *)
                      (uint64_t)
                      (((uint32_t)uStack_d0 ^ 0x3eeb938c) << bVar10 |
                      ((uint32_t)uStack_d0 ^ 0x3eeb938c) >> 0x20 - bVar10);
            uVar27 = uVar28 | uVar19;
            if (pIVar15 < (IMAGE_DOS_HEADER *)
                          (uint64_t)((-(uint32_t)uStack_a8 - (uint32_t)uStack_d0) + 0xf5020345)) {
              uVar27 = uVar28 ^ uVar19;
            }
            uVar13 = 0;
            for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            pbVar56 = (uint8_t *)(uint64_t)(uVar13 >> 3);
          }
        }
        else {
LAB_7fffa52659ae:
          if ((puVar20 < (uint64_t *)((int64_t)puStack_48 + -3)) &&
             (pIVar15 = (IMAGE_DOS_HEADER *)(uint64_t)*(uint32_t *)pwVar34,
             *(uint32_t *)pwVar34 == (uint32_t)*puVar20)) {
            pwVar34 = pwVar34 + 2;
            puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
          }
          if ((puVar20 < (uint64_t *)((int64_t)puStack_48 - 1U)) && (*pwVar34 == (word)*puVar20))
          {
            pwVar34 = pwVar34 + 1;
            puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
          }
          if (puVar20 < puStack_48) {
            pIVar15 = (IMAGE_DOS_HEADER *)(uint64_t)(uint8_t)*pwVar34;
            puVar20 = (uint64_t *)
                      ((int64_t)puVar20 + (uint64_t)((uint8_t)*pwVar34 == (uint8_t)*puVar20));
          }
          pbVar56 = (uint8_t *)((int64_t)puVar20 - (int64_t)puVar24);
        }
        uVar14 = uVar14 + (int64_t)pbVar56;
      }
      pbVar56 = (uint8_t *)(uVar14 + 4);
      if (pbVar41 < pbVar56) {
        *puStack_78 = (uint64_t)((uVar26 + iVar31 + 3) - uVar36);
        if ((uint64_t *)((int64_t)puVar30 + (int64_t)pbVar56) == puStack_48) {
          return pIVar15;
        }
        uVar18 = (uint32_t)*puVar30;
        pbVar41 = pbVar56;
      }
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == uVar42) {
      return pIVar15;
    }
    uVar32 = uVar32 + 1;
  } while( true );
code_r0x7fffa5264ec8:
  puVar40 = puVar40 + 1;
  puVar24 = puVar24 + 1;
  puVar20 = puVar20 + 1;
  if (puVar1 <= puVar40) goto LAB_7fffa5264eee;
  goto LAB_7fffa5264e70;
code_r0x7fffa5265398:
  puVar20 = puVar20 + 1;
  lVar21 = lVar21 + 8;
  if (puVar24 <= puVar20) goto LAB_7fffa52653aa;
  goto LAB_7fffa5265370;
}


// ============================================================================
// Function : FUN_7fffa5265b60  |  RVA: 0xaf5b60  |  Size: 302 bytes
// Callers  : FUN_7fffa507cf70@0x90cf70
// Callees  : FUN_7fffa4e90ae0@0x720ae0, FUN_7fffa54539d0@0xce39d0, FUN_7fffa507cd30@0x90cd30
// ============================================================================
void FUN_7fffa5265b60(int64_t *param_1,uint64_t *param_2,int64_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint32_t uVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lStackX_8;
  int64_t alStackX_18 [2];
  
  uVar8 = *(uint32_t *)(param_3 + 0xc);
  uVar7 = (uint64_t)uVar8;
  iVar2 = FUN_7fffa4e90ae0(param_3);
  lStackX_8 = *param_1;
  do {
    do {
      if (uVar8 == 0) goto LAB_7fffa5265c25;
      uVar8 = (int)uVar7 - 1;
      uVar7 = (uint64_t)uVar8;
      lVar6 = (int64_t)*(int *)(param_3 + 0x10) + uVar7 * 0x14 + param_2[1];
    } while ((iVar2 <= *(int *)(lVar6 + 4)) || (*(int *)(lVar6 + 8) < iVar2));
    puVar4 = (uint32_t *)(*(code *)&DAT_7ff8504cd6c0)(*param_2,alStackX_18,0);
    lVar10 = *(int *)(lVar6 + 0x10) + alStackX_18[0];
    uVar1 = *(uint32_t *)(lVar6 + 0xc);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if ((int64_t)*(int *)(lVar10 + 0xc + uVar5 * 0x14) == (uint64_t)*puVar4)
        goto LAB_7fffa5265c10;
        uVar3 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar3;
      } while (uVar3 < uVar1);
    }
  } while (uVar1 <= (uint32_t)uVar5);
LAB_7fffa5265c10:
  lStackX_8 = *(int64_t *)((int64_t)*(int *)(lVar10 + 0x10 + uVar5 * 0x14) + *param_1);
LAB_7fffa5265c25:
  iVar2 = FUN_7fffa4e90ae0(param_3,param_2);
  uVar8 = *(uint32_t *)(param_3 + 0xc);
  uVar7 = (uint64_t)uVar8;
  do {
    if (uVar8 == 0) {
      iVar9 = -1;
      break;
    }
    lVar6 = FUN_7fffa54539d0();
    uVar8 = (int)uVar7 - 1;
    uVar7 = (uint64_t)uVar8;
    lVar6 = (int64_t)*(int *)(param_3 + 0x10) + *(int64_t *)(lVar6 + 0x60);
    iVar9 = *(int *)(lVar6 + 4 + uVar7 * 0x14);
  } while ((iVar2 <= iVar9) || (*(int *)(lVar6 + 8 + uVar7 * 0x14) < iVar2));
  FUN_7fffa507cd30(&lStackX_8,param_2,param_3,iVar9);
  return;
}


// ============================================================================
// Function : FUN_7fffa5265c90  |  RVA: 0xaf5c90  |  Size: 2603 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5265c90(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                          uint32_t param_5)

{
  int64_t *plVar1;
  char *pcVar2;
  int64_t lVar3;
  bool bVar4;
  uint8_t uVar5;
  int64_t in_RAX;
  uint8_t bVar6;
  uint8_t bVar7;
  uint32_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint16_t uVar11;
  int iVar12;
  uint32_t uVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint32_t uVar16;
  uint64_t *puVar17;
  int64_t lVar18;
  int iVar19;
  uint64_t *in_R11;
  uint32_t uVar20;
  int64_t lVar21;
  uint64_t uVar22;
  int64_t lVar23;
  uint64_t uVar24;
  int64_t lVar25;
  uint8_t auVar26 [16];
  char cVar27;
  uint8_t uVar30;
  char cVar31;
  char cVar32;
  uint8_t uVar33;
  char cVar34;
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint32_t auStack_1a8 [66];
  uint64_t uStack_a0;
  uint64_t *puStack_98;
  uint64_t uStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  uint64_t uStack_70;
  uint64_t *puStack_68;
  uint64_t *puStack_60;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  uint32_t uStack_44;
  
  uVar15 = (uint64_t)(param_2 * 0x43bc00f4de0c7039) >> 2;
  uVar16 = 1 << (*(uint8_t *)(in_RAX + 0x100) & 0x1f);
  uVar13 = 4;
  if (*(uint32_t *)(in_RAX + 0x10c) < 4) {
    uVar13 = *(uint32_t *)(in_RAX + 0x10c);
  }
  lVar3 = *(int64_t *)(in_RAX + 8);
  iVar12 = 1 << ((uint8_t)uVar13 & 0x1f);
  uVar24 = uVar15 << 0xd ^ (param_2 * 0x43bc00f4de0c7039 << 0x3e | uVar15);
  uVar24 = uVar24 << 0x1a ^ uVar15 << 0x34 ^ uVar24;
  uVar24 = (uVar24 << 0xe | uVar24 >> 0x32) ^ (uVar24 >> 1 | (uint64_t)((uVar24 & 1) != 0) << 0x3f)
           ^ uVar24;
  uVar24 = (uVar24 << 0x1c | uVar24 >> 0x24) ^ (uVar24 << 0x3e | uVar24 >> 2) ^ uVar24;
  uStack_90 = (int64_t)in_R11 - lVar3;
  uVar13 = *(uint32_t *)(in_RAX + 0x1c);
  uVar24 = (uVar24 << 0x3c | uVar24 >> 4) ^ (uVar24 << 0x38 | uVar24 >> 8) ^ uVar24;
  uVar24 = (uVar24 << 0x38 | uVar24 >> 8) ^ (uVar24 << 0x30 | uVar24 >> 0x10) ^ uVar24;
  uVar24 = (uVar24 << 0x30 | uVar24 >> 0x10) ^ (uVar24 << 0x20 | uVar24 >> 0x20) ^ uVar24;
  uVar20 = (uint32_t)uStack_90;
  uVar8 = uVar20 - uVar16;
  if (uVar20 - uVar13 <= uVar16) {
    uVar8 = uVar13;
  }
  uStack_44 = *(uint32_t *)(in_RAX + 0x34);
  uStack_a0 = *(uint64_t *)(in_RAX + 0x60);
  if (*(int *)(in_RAX + 0x28) != 0) {
    uVar8 = uVar13;
  }
  puStack_68 = (uint64_t *)(uint64_t)uVar8;
  lVar21 = *(int64_t *)(in_RAX + 0x38);
  lStack_80 = *(int64_t *)(in_RAX + 0x70);
  puStack_98 = (uint64_t *)
               ((param_1 << 0x33 | (uint64_t)((param_1 << 0x20) + param_1) >> 0xd) *
               -0x7a83e1df98578f8b);
  puStack_60 = (uint64_t *)((uVar24 << 0x20 | uVar24 >> 0x20) - 0x1371f4b);
  cVar27 = (char)uStack_44;
  if (*(int *)(in_RAX + 300) == 0) {
    uVar13 = *(uint32_t *)(in_RAX + 0x2c);
    uVar15 = (uint64_t)uVar13;
    lVar25 = lVar21;
    lVar23 = lStack_80;
    if (0x180 < uVar20 - uVar13) {
      if (uVar13 < 0xffffffa0) {
        uVar24 = uVar15 + 0x5f;
        while( true ) {
          uVar22 = (uint64_t)((uint32_t)uVar15 & 7);
          uVar13 = *(uint32_t *)(in_RAX + 0x40 + uVar22 * 4);
          uVar9 = (uint64_t)(uVar13 >> 4 & 0xfffffff0);
          *(int *)(in_RAX + 0x40 + uVar22 * 4) =
               (int)((*(uint64_t *)(in_RAX + 0x60) ^
                     *(int64_t *)(lVar3 + 8 + uVar15) * -0x30e4432345000000) >>
                    (0x38U - cVar27 & 0x3f));
          lVar25 = 0xf;
          if ((*(uint8_t *)(lVar21 + uVar9) & 0xf) != 1) {
            lVar25 = 0;
          }
          lVar25 = (uint64_t)(*(uint8_t *)(lVar21 + uVar9) - 1 & 0xf) + lVar25;
          *(char *)(lVar21 + uVar9) = (char)lVar25;
          *(char *)(lVar21 + uVar9 + lVar25) = (char)uVar13;
          *(uint32_t *)(lStack_80 + uVar9 * 4 + lVar25 * 4) = (uint32_t)uVar15;
          if (uVar24 == uVar15) break;
          uVar15 = uVar15 + 1;
        }
        lVar25 = *(int64_t *)(in_RAX + 0x38);
        lVar23 = *(int64_t *)(in_RAX + 0x70);
      }
      uVar13 = uVar20 - 0x20;
      uVar15 = (uint64_t)uVar13;
      plVar1 = (int64_t *)(lVar3 + uVar15);
      uVar8 = ((int)(int64_t *)((int64_t)in_R11 + 1U) - (int)plVar1) + 1;
      uVar16 = 8;
      if (uVar8 < 8) {
        uVar16 = uVar8;
      }
      uVar8 = 0;
      if (plVar1 <= (int64_t *)((int64_t)in_R11 + 1U)) {
        uVar8 = uVar16;
      }
      if (uVar13 < uVar8 + uVar13) {
        uStack_70 = *(uint64_t *)(in_RAX + 0x60);
        iVar19 = 0x38 - *(int *)(in_RAX + 0x34);
        bVar6 = (uint8_t)iVar19;
        if ((uVar8 & 1) != 0) {
          uVar15 = uVar15 + 1;
          *(int *)(in_RAX + 0x40 + (uint64_t)(uVar13 & 7) * 4) =
               (int)((*plVar1 * -0x30e4432345000000 ^ uStack_70) >> (bVar6 & 0x3f));
        }
        if (uVar8 != 1) {
          do {
            uVar16 = (uint32_t)uVar15;
            *(int *)(in_RAX + 0x40 + (uint64_t)(uVar16 & 7) * 4) =
                 (int)((*(int64_t *)(lVar3 + uVar15) * -0x30e4432345000000 ^ uStack_70) >>
                      (bVar6 & 0x3f));
            plVar1 = (int64_t *)(lVar3 + 1 + uVar15);
            uVar15 = uVar15 + 2;
            *(int *)(in_RAX + 0x40 + (uint64_t)(uVar16 + 1 & 7) * 4) =
                 (int)((*plVar1 * -0x30e4432345000000 ^ uStack_70) >> iVar19);
          } while (uVar8 + uVar13 != (uint32_t)uVar15);
          lStack_88 = lVar23;
        }
      }
    }
    if (uVar13 < uVar20) {
      uStack_70 = lVar3;
      lVar18 = *(int64_t *)(in_RAX + 8);
      bVar6 = (uint8_t)*(uint32_t *)(in_RAX + 0x34);
      bVar7 = bVar6 | 0x38;
      if (0x73815df2 < ((param_5 ^ 0x38fbeefe) << 0x19 | (param_5 ^ 0x38fbeefe) >> 7)) {
        bVar7 = 0x38 - bVar6;
      }
      uVar15 = (uint64_t)uVar13;
      do {
        uVar24 = (uint64_t)((uint32_t)uVar15 & 7);
        uVar13 = *(uint32_t *)(in_RAX + 0x40 + uVar24 * 4);
        *(int *)(in_RAX + 0x40 + uVar24 * 4) =
             (int)((*(int64_t *)(lVar18 + 8 + uVar15) * -0x30e4432345000000 ^
                   *(uint64_t *)(in_RAX + 0x60)) >> (bVar7 & 0x3f));
        uVar24 = (uint64_t)(uVar13 >> 4 & 0xfffffff0);
        lVar10 = 0;
        if ((*(uint8_t *)(lVar25 + uVar24) & 0xf) == 1) {
          lVar10 = 0xf;
        }
        lVar10 = lVar10 + (uint64_t)(*(uint8_t *)(lVar25 + uVar24) - 1 & 0xf);
        *(char *)(lVar25 + uVar24) = (char)lVar10;
        *(char *)(lVar25 + uVar24 + lVar10) = (char)uVar13;
        *(uint32_t *)(lVar23 + uVar24 * 4 + lVar10 * 4) = (uint32_t)uVar15;
        uVar15 = uVar15 + 1;
        lStack_88 = lVar23;
      } while ((uStack_90 & 0xffffffff) != uVar15);
    }
    *(uint32_t *)(in_RAX + 0x2c) = uVar20;
    uVar15 = (uint64_t)*(uint32_t *)(in_RAX + 0x40 + (uint64_t)(uVar20 & 7) * 4);
    *(int *)(in_RAX + 0x40 + (uint64_t)(uVar20 & 7) * 4) =
         (int)((*(int64_t *)(lVar3 + 8 + (uStack_90 & 0xffffffff)) * -0x30e4432345000000 ^
               uStack_a0) >> (0x38U - cVar27 & 0x3f));
  }
  else {
    uVar15 = (uStack_a0 ^ *in_R11 * -0x30e4432345000000) >> (0x38U - cVar27 & 0x3f);
    *(uint32_t *)(in_RAX + 0x2c) = uVar20;
  }
  *(int *)(in_RAX + 0x68) = *(int *)(in_RAX + 0x68) + (int)uVar15;
  uVar5 = (uint8_t)(uVar15 >> 0x10);
  uVar33 = (uint8_t)(uVar15 >> 0x18);
  uVar30 = (uint8_t)(uVar15 >> 8);
  auVar28._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar33,uVar33),uVar5),CONCAT14(uVar5,(int)uVar15)) >> 0x20);
  auVar28[3] = uVar30;
  auVar28[2] = uVar30;
  auVar28[0] = (uint8_t)uVar15;
  auVar28[1] = auVar28[0];
  auVar28._8_8_ = 0;
  auVar29 = pshuflw(auVar28,auVar28,0);
  uVar15 = (uint64_t)((uint32_t)(uVar15 >> 4) & 0xffffff0);
  pcVar2 = (char *)(lVar21 + uVar15);
  cVar27 = auVar29[0];
  auVar26[0] = -(*pcVar2 == cVar27);
  cVar31 = auVar29[1];
  auVar26[1] = -(pcVar2[1] == cVar31);
  cVar32 = auVar29[2];
  auVar26[2] = -(pcVar2[2] == cVar32);
  cVar34 = auVar29[3];
  auVar26[3] = -(pcVar2[3] == cVar34);
  auVar26[4] = -(pcVar2[4] == cVar27);
  auVar26[5] = -(pcVar2[5] == cVar31);
  auVar26[6] = -(pcVar2[6] == cVar32);
  auVar26[7] = -(pcVar2[7] == cVar34);
  auVar26[8] = -(pcVar2[8] == cVar27);
  auVar26[9] = -(pcVar2[9] == cVar31);
  auVar26[10] = -(pcVar2[10] == cVar32);
  auVar26[0xb] = -(pcVar2[0xb] == cVar34);
  auVar26[0xc] = -(pcVar2[0xc] == cVar27);
  auVar26[0xd] = -(pcVar2[0xd] == cVar31);
  auVar26[0xe] = -(pcVar2[0xe] == cVar32);
  auVar26[0xf] = -(pcVar2[0xf] == cVar34);
  uVar11 = (uint16_t)(SUB161(auVar26 >> 7,0) & 1) | (uint16_t)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
           (uint16_t)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar26[0xf] >> 7) << 0xf;
  lVar25 = lStack_80 + uVar15 * 4;
  uVar13 = (uint32_t)*(uint8_t *)(lVar21 + uVar15);
  puStack_50 = in_R11;
  if (uVar11 == 0) {
    lVar23 = 0;
  }
  else {
    bVar6 = *(uint8_t *)(lVar21 + uVar15) & 0xf;
    uVar24 = (uint64_t)(uint16_t)(uVar11 >> bVar6 | uVar11 << 0x10 - bVar6);
    lVar23 = 0;
    do {
      iVar19 = 0;
      for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
        iVar19 = iVar19 + 1;
      }
      uVar16 = iVar19 + uVar13 & 0xf;
      if (uVar16 != 0) {
        uVar16 = *(uint32_t *)(lVar25 + (uint64_t)uVar16 * 4);
        if (uVar16 < (uint32_t)puStack_68) break;
        iVar12 = iVar12 + -1;
        auStack_1a8[lVar23] = uVar16;
        lVar23 = lVar23 + 1;
      }
      uVar24 = uVar24 & uVar24 - 1;
    } while (uVar24 != 0 && iVar12 != 0);
  }
  uVar11 = (short)param_5 + 0x3465;
  lVar18 = 0xf;
  if ((uVar13 & 0xf) != (uint32_t)(uint16_t)(uVar11 * 0x80 | uVar11 >> 9)) {
    lVar18 = 0;
  }
  lVar18 = lVar18 + (uint64_t)(uVar13 - 1 & 0xf);
  *(uint8_t *)(lVar21 + uVar15) = (char)lVar18;
  ((uint8_t *)(lVar21 + uVar15))[lVar18] = auVar28[0];
  iVar12 = *(int *)(in_RAX + 0x2c);
  *(int *)(in_RAX + 0x2c) = iVar12 + 1;
  *(int *)(lVar25 + lVar18 * 4) = iVar12;
  if (lVar23 == 0) {
    uVar15 = 3;
  }
  else {
    puStack_58 = (uint64_t *)((int64_t)puStack_98 - 1U);
    lStack_88 = CONCAT44(lStack_88._4_4_,uVar20 + 3);
    puStack_68 = (uint64_t *)((int64_t)puStack_98 + -3);
    lStack_78 = lVar3 + 8;
    uVar24 = 3;
    lVar21 = 0;
    do {
      uVar13 = auStack_1a8[lVar21];
      puVar17 = (uint64_t *)(lVar3 + (uint64_t)uVar13);
      if (*(int *)((uVar24 - 3) + (int64_t)puVar17) ==
          *(int *)((int64_t)puStack_50 + (uVar24 - 3))) {
        puVar14 = puStack_50;
        if (puStack_50 < (uint64_t *)((int64_t)puStack_98 - 7U)) {
          if (*puVar17 == *puStack_50) {
            lVar25 = lVar3 + 8 + (uint64_t)uVar13;
            lVar18 = 0;
            do {
              puVar14 = (uint64_t *)((int64_t)puStack_50 + lVar18 + 8);
              if ((uint64_t *)((int64_t)puStack_98 - 7U) <= puVar14) {
                puVar17 = (uint64_t *)(lVar25 + lVar18);
                goto joined_r0x7fffa526656b;
              }
              uVar15 = *(uint64_t *)(lVar25 + lVar18);
              lVar18 = lVar18 + 8;
            } while (uVar15 == *puVar14);
            uVar16 = 0;
            for (uVar15 = uVar15 ^ *puVar14; (uVar15 & 1) == 0;
                uVar15 = uVar15 >> 1 | 0x8000000000000000) {
              uVar16 = uVar16 + 1;
            }
            uVar15 = (uint64_t)(uVar16 >> 3) + lVar18;
          }
          else {
            uVar16 = 0;
            for (uVar15 = *puStack_50 ^ *puVar17; (uVar15 & 1) == 0;
                uVar15 = uVar15 >> 1 | 0x8000000000000000) {
              uVar16 = uVar16 + 1;
            }
            uVar15 = (uint64_t)(uVar16 >> 3);
          }
        }
        else {
joined_r0x7fffa526656b:
          if ((puVar14 < (uint64_t *)((int64_t)puStack_98 + -3)) &&
             ((int)*puVar17 == (int)*puVar14)) {
            puVar17 = (uint64_t *)((int64_t)puVar17 + 4);
            puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
          }
          if ((puVar14 < (uint64_t *)((int64_t)puStack_98 - 1U)) &&
             ((short)*puVar17 == (short)*puVar14)) {
            puVar17 = (uint64_t *)((int64_t)puVar17 + 2);
            puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
          }
          uVar16 = (param_5 | 1) * -0x5dda30c0 ^ 0xef54313e;
          bVar4 = puStack_98 < puVar14;
          if ((uVar16 << 1 | (uint32_t)((int)uVar16 < 0)) < (param_5 ^ 0xc2582c8e)) {
            bVar4 = puVar14 < puStack_98;
          }
          if (bVar4) {
            puVar14 = (uint64_t *)
                      ((int64_t)puVar14 + (uint64_t)((char)*puVar17 == (char)*puVar14));
          }
          uVar15 = (int64_t)puVar14 - (int64_t)puStack_50;
        }
        if (uVar24 < uVar15) {
          *puStack_60 = (uint64_t)((uVar20 + 3) - uVar13);
          uVar24 = uVar15;
          if ((uint64_t *)((int64_t)puStack_50 + uVar15) == puStack_98) break;
        }
      }
      lVar21 = lVar21 + 1;
      uVar15 = uVar24;
    } while (lVar21 != lVar23);
  }
  uVar15 = (uVar15 << 0x24 | uVar15 >> 0x1c) ^ (uVar15 << 0x23 | uVar15 >> 0x1d) ^ uVar15;
  return uVar15 << 0x3f ^ uVar15;
}


// ============================================================================
// Function : FUN_7fffa52666d0  |  RVA: 0xaf66d0  |  Size: 1096 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5266840) */

void FUN_7fffa52666d0(void)

{
  uint8_t bVar1;
  short sVar2;
  uint32_t uVar3;
  int64_t lVar4;
  uint32_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint64_t in_R9;
  uint64_t uVar11;
  uint16_t uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  
  uVar11 = CONCAT71((int7)((uint64_t)in_R9 >> 8),0x7a);
  uVar15 = ~uVar11;
  uVar13 = uVar15 | 0xbee36d43;
  lVar4 = (uVar11 & 0xffffffff411c92bc) * -0x1b3833f02 + uVar13 * -0x2ad4d011 +
          (uVar15 & 0xbee36d43) * -0x188ae6ef1 + (uVar11 ^ 0xbee36d43) * 0xc0000006 +
          (uVar15 ^ 0xbee36d43) * -0x5529325f +
          (uVar13 ^ uVar11 ^ 0xbee36d43) * 0xc306f0f2 +
          (uVar11 & 0xbee36d43) * -0xe0e01f26 + uVar15 * 0x55ac0e58 + 0x1641b49bd89f3b9c +
          (uVar15 & 0xffffffff411c92bc ^ ~uVar13) * -0x118b2ff4a + (~uVar13 & uVar11) * 0xc9314ae4;
  uVar3 = (uint32_t)lVar4;
  uVar9 = uVar3 | 1;
  sVar2 = (short)lVar4;
  lVar8 = (int64_t)(short)~((short)uVar9 * 0xcb5);
  *(uint8_t *)(((int64_t)(short)((short)uVar9 * -0x26df) ^ 0xffffffffffffe52bU) + 0x7fffa4782aad) =
       ((uint8_t)lVar4 | 1) * 'z' ^ 0xda;
  *(uint8_t (*) [16])(lVar8 + 0x7fffa4782d6b) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar8 + 0x7fffa4782d5b) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar8 + 0x7fffa4782d7b) = 0;
  *(uint64_t *)((int64_t)(short)(sVar2 + -0x1f9d) + 0x7fffa47844cc) =
       (uint64_t)(uint16_t)(((0x270 - sVar2) * 2 | (uint16_t)((short)(0x270 - sVar2) < 0)) * -0x4137);
  lVar8 = rdtsc();
  lVar6 = lVar8 * 0x5a6a87aa14fec45 + 1;
  lVar8 = 3;
  while( true ) {
    lVar6 = lVar6 * 0x5a6a87aa14fec45 + 1;
    lVar7 = lVar6 * 0x5a6a87aa14fec45 + 1;
    lVar14 = lVar7 * 0x5a6a87aa14fec45 + 1;
    *(char *)(lVar8 + (int64_t)(int)(uVar9 * -0x3026c756) + 0x7fffa478d057) =
         (char)((uint64_t)lVar7 >> 0x20);
    *(char *)(lVar8 + (int64_t)(short)((sVar2 + 0x302U) * 0x4000 | (uint16_t)(sVar2 + 0x302U) >> 2) +
                      0x7fffa478a604) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar8 + (int64_t)(int)((0x6b4ba26f - uVar3) * 0x80000 | 0x6b4ba26f - uVar3 >> 0xd) +
                      0x7fffa478ccf6) = (char)((uint64_t)lVar14 >> 0x20);
    if (lVar8 == 0x47) break;
    lVar6 = ((lVar4 + 0x69aa1eab168084d1U >> 6) - 0xd0a0dd8) * lVar14 + 1;
    *(char *)(lVar8 + (int64_t)(int)(0x7ffd49bf - uVar3) + 0x7fffa478e014) =
         (char)((uint64_t)lVar6 >> 0x20);
    lVar8 = lVar8 + 4;
  }
  bVar1 = (uint8_t)lVar4 & 0xf;
  uVar12 = -0x6915 << bVar1 | 0x96ebU >> 0x10 - bVar1;
  uVar5 = (uVar3 ^ 0xced75c07) + 0xc000002a;
  bVar1 = *(uint8_t *)((int64_t)(short)(-0x36d3 - sVar2) + 0x7fffa47860aa);
  uVar10 = (int)(char)bVar1;
  if ((uVar9 * -0x63423300 | uVar9 * -0x598d08cc >> 0x1a) * 0x5a35f52d <
      (uVar5 * 0x8000 | uVar5 >> 0x11)) {
    uVar10 = (uint32_t)bVar1;
  }
  uVar11 = 0;
  if (uVar9 * -0x5d10343a <= uVar3 + 0xef2ca2a2) {
    uVar11 = (uint64_t)(uVar10 * 0x33333334 + 0x33333334) * 5 >> 0x20;
  }
  *(uint64_t *)
   ((int64_t)(int)((0x4a864f62 - uVar3 ^ 0xb5755280) + 0x8001fd3c) + 0x7fffa4790bc7 + uVar11 * 8) =
       0xffffffffffffffff;
  *(char *)((int64_t)(short)(uVar12 << 8 | uVar12 >> 8) + 0x7fffa4783bd1) = (char)uVar11;
  return;
}


// ============================================================================
// Function : FUN_7fffa5266b20  |  RVA: 0xaf6b20  |  Size: 423 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5266b20(uint32_t param_1)

{
  code *pcVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t unaff_R15D;
  
  uVar3 = ~param_1;
  uVar3 = (uVar3 ^ (~param_1 | unaff_R15D)) * -0x7d23dceb +
          (param_1 & (unaff_R15D ^ param_1)) * -0x2044d53a + (~param_1 & unaff_R15D) * 0x78faff84 +
          (unaff_R15D ^ param_1 ^ uVar3) * 0x2044d53a +
          (~unaff_R15D & param_1 & param_1) * -0x7d23dceb +
          ((~param_1 ^ unaff_R15D) & uVar3) * 0x58b62a4a +
          (param_1 | ~unaff_R15D & param_1) * -0x9e12391;
  uVar2 = (uVar3 ^ 0x40931d27) + 0xc00000fd;
  (*(code *)((int64_t)(int)((uVar3 ^ 0xc065bfaf) + 0xb89e59f0) + 0x7fffa54bbaad))
            (uVar2 * 0x1000000 | uVar2 >> 8);
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5266cd0  |  RVA: 0xaf6cd0  |  Size: 1062 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa52670c8) */
/* WARNING: Removing unreachable block (ram,0x7fffa526723f) */

void FUN_7fffa5266cd0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  uRam00007fffa47844f8 = 0xd3716a6c23c992aa;
  uRam00007fffa4784500 = 0x1bed3644096f3367;
  uRam00007fffa4784508 = 0x4895aab5df70be2b;
  uRam00007fffa47844f0 = 0x8c6b536121d71cf7;
  uRam00007fffa4784510 = 0x38170d86f6129472;
  uVar3 = (int64_t)(&UNK_7fffa585a848 + (uRam00007fffa47815e8 ^ 0x9ede28e3087394ac)) * 0x80000 ^
          (uint64_t)(&UNK_7fffa585a848 + (uRam00007fffa47815e8 ^ 0x9ede28e3087394ac));
  uVar3 = uVar3 << 0x26 ^ uVar3;
  uRam00007fffa4784518 = uVar3 >> 0x1b ^ uVar3 >> 0x36 ^ uVar3;
  uVar1 = lRam00007fffa47814c0 + 0xe729593dbc51c61;
  uVar3 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28;
  uVar2 = uVar3 | uVar1 << 0x38;
  uVar2 = (uVar2 << 7 | (uVar1 & 0xff) >> 1) ^ (uVar3 << 0xd | uVar2 >> 0x33) ^ uVar2;
  uVar2 = (uVar2 << 0x1a | uVar2 >> 0x26) ^ (uVar2 << 0xe | uVar2 >> 0x32) ^ uVar2;
  uVar2 = (uVar2 << 0x34 | uVar2 >> 0xc) ^ (uVar2 << 0x1c | uVar2 >> 0x24) ^ uVar2;
  uVar2 = (uVar2 << 0x28 | uVar2 >> 0x18) ^ (uVar2 << 0x38 | uVar2 >> 8) ^ uVar2;
  uRam00007fffa4784528 = 0xca52c7502e69d6bc;
  uVar3 = uVar2 ^ 0x7b4569c3fc7654c2 ^
          (uVar2 << 0x10 | uVar2 >> 0x30) ^ (uVar2 << 0x30 | uVar2 >> 0x10);
  uVar3 = uVar3 >> 3 ^ uVar3;
  uVar3 = uVar3 >> 6 ^ uVar3;
  uVar3 = uVar3 >> 0xc ^ uVar3;
  uVar3 = uVar3 >> 0x30 ^ uVar3 >> 0x18 ^ uVar3;
  uVar3 = uVar3 >> 3 ^ uVar3;
  uVar3 = uVar3 >> 6 ^ uVar3;
  uVar3 = uVar3 >> 0xc ^ uVar3;
  uRam00007fffa4784520 = uVar3 >> 0x30 ^ uVar3 >> 0x18 ^ uVar3;
  return;
}


// ============================================================================
// Function : FUN_7fffa5267248  |  RVA: 0xaf7248  |  Size: 445 bytes
// Callers  : FUN_7fffa56084d0@0xe984d0
// Callees  : FUN_7fffa56ac990@0xf3c990
// ============================================================================
void FUN_7fffa5267248(char *param_1,uint64_t *param_2,char *param_3,int64_t *param_4,
                     int64_t *param_5)

{
  bool bVar1;
  char cVar2;
  uint32_t uVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (uint64_t *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar1 = false;
  do {
    if (*param_1 == '\"') {
      bVar1 = !bVar1;
      cVar2 = '\"';
      pcVar6 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      cVar2 = *param_1;
      pcVar6 = param_1 + 1;
      iVar4 = FUN_7fffa56ac990((int)cVar2);
      if (iVar4 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
        }
        pcVar6 = param_1 + 2;
      }
      if (cVar2 == '\0') {
        pcVar6 = pcVar6 + -1;
        goto LAB_7fffa52672fa;
      }
    }
    param_1 = pcVar6;
  } while ((bVar1) || ((cVar2 != ' ' && (cVar2 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_7fffa52672fa:
  bVar1 = false;
  while (cVar2 = *pcVar6, cVar2 != '\0') {
    while ((cVar2 == ' ' || (cVar2 == '\t'))) {
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar6;
    }
    if (cVar2 == '\0') break;
    if (param_2 != (uint64_t *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar5 = true;
      uVar3 = 0;
      while( true ) {
        if (*pcVar6 != '\\') break;
        pcVar6 = pcVar6 + 1;
        uVar3 = uVar3 + 1;
      }
      if (*pcVar6 == '\"') {
        if ((uVar3 & 1) == 0) {
          if ((bVar1) && (pcVar6[1] == '\"')) {
            pcVar6 = pcVar6 + 1;
          }
          else {
            bVar5 = false;
            bVar1 = !bVar1;
          }
        }
        uVar3 = uVar3 >> 1;
      }
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      cVar2 = *pcVar6;
      if ((cVar2 == '\0') || ((!bVar1 && ((cVar2 == ' ' || (cVar2 == '\t')))))) break;
      if (bVar5) {
        if (param_3 != (char *)0x0) {
          *param_3 = cVar2;
          param_3 = param_3 + 1;
        }
        iVar4 = FUN_7fffa56ac990((int)*pcVar6);
        if (iVar4 != 0) {
          *param_5 = *param_5 + 1;
          pcVar6 = pcVar6 + 1;
          if (param_3 != (char *)0x0) {
            *param_3 = *pcVar6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      pcVar6 = pcVar6 + 1;
    }
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (uint64_t *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa5267410  |  RVA: 0xaf7410  |  Size: 1392 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa5267972) overlaps instruction at (ram,0x7fffa5267971)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa52675ae) */
/* WARNING: Removing unreachable block (ram,0x7fffa5267967) */

uint64_t FUN_7fffa5267410(void)

{
  uint8_t bVar1;
  uint16_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint32_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t unaff_R14;
  
  uVar8 = ~unaff_R14;
  uRam00007fffa47baef0 = 0;
  uRam00007fffa47baef8 = 0;
  uRam00007fffa47baee0 = 0;
  uRam00007fffa47baee8 = 0;
  uRam00007fffa47baf00 = 0;
  lVar6 = (unaff_R14 ^ 0x4bfe7399) * -0x180aab40d + (unaff_R14 & 0x4bfe7399) * 0x12b87b79d +
          (unaff_R14 & 0xffffffffb4018c66) * 0x54fa1a94 + (uVar8 ^ 0x4bfe7399) * -0x197384ef1 +
          (uVar8 & 0xffffffffb4018c66) * 0x6b87b578 + (uVar8 & 0x4bfe7399) * 0x54fa1a94 +
          (uVar8 | 0xffffffffb4018c66) * 0xc0000225;
  uVar5 = (uint32_t)lVar6;
  uRam00007fffa47baed8 = (uint64_t)(uVar5 ^ 0x6bb09754);
  *(uint64_t *)((int64_t)(int)(uVar5 + 0x944ed4d2) + 0x7fffa47c42aa) =
       (lVar6 + 0x252b460508ba3307U) * 0x40 | lVar6 + 0x252b460508ba3307U >> 0x3a;
  lVar4 = lRam00007fffa4780b80;
  lVar3 = lRam00007fffa4780ac8;
  uVar8 = (uint64_t)(&UNK_7fffa5792652 + (int)((uVar5 ^ 0x4eb23062) * -0x13b49d2f)) ^ 0xffff4af0a;
  lRam00007fffa47baec8 =
       (uVar8 >> 0x16 ^
        (uint64_t)(&UNK_7fffa5792652 + (int)((uVar5 ^ 0x4eb23062) * -0x13b49d2f)) >> 0x2c ^ uVar8)
       * 0x4000000080000001 -
       (int64_t)(&UNK_7fffa5790bca + (int)((uVar5 ^ 0x7e9e53e) + 0x93a5e49c));
  bVar1 = (uint8_t)lVar6 & 0x1f;
  *(uint64_t *)
   (((int64_t)(int)(-0x12bc5b92 << bVar1 | 0xed43a46eU >> 0x20 - bVar1) ^ 0xffffffffb911b181U) +
   0x7fffa47c493d) = (uint64_t)(uVar5 ^ 0x6bb09754);
  uVar8 = lVar3 - lVar4;
  uVar2 = (uint16_t)lVar6;
  uVar7 = (uint64_t)
          (&UNK_7fffa573ca59 + (short)((0x96f6 - uVar2) * 0x20 | (uint16_t)(0x96f6 - uVar2) >> 0xb))
          >> 0x36 ^ (uint64_t)(&UNK_7fffa57485d4 + (int)(uVar5 + 0x944ea190)) ^
          (uint64_t)(&UNK_7fffa5746271 + (int)((uVar5 | 1) * -0x48d05f3e + 0x79fc8ddd)) >> 0x1b;
  uVar8 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
          (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
          (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
  *(uint64_t *)
   ((int64_t)(int)((uVar5 ^ 0x944c3b6b) << 0x1e | (uVar5 ^ 0x944c3b6b) >> 2) + 0x7fffa47c83f1) =
       uVar7 << 0x34 | uVar7 >> 0xc;
  uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f) << 4 | uVar8 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar8 = (uVar8 & 0x3333333333333333) * 4 + (uVar8 >> 2 & 0x3333333333333333);
  *(uint64_t *)
   ((int64_t)(short)((uVar2 + 0x47cf) * 2 | (uint16_t)((short)(uVar2 + 0x47cf) < 0)) + 0x7fffa47bf099
   ) = (uVar8 >> 1 & 0x5555555555555555) + (uVar8 & 0x5555555555555555) * 2 + 0x5f94f993d0415191;
  *(int64_t *)((int64_t)(short)(uVar2 ^ 0x405b) + 0x7fffa47bd7d9) =
       (int64_t)(short)((uVar2 | 1) * -0x661a + 0x2fcf) + 0x74e9524f6282b206;
  uVar8 = (uint64_t)
          ((int)(short)(~(uVar2 + 0xe9a8) << 7 | (uint16_t)~(uVar2 + 0xe9a8) >> 9) + 0xa56f7321);
  *(uint64_t *)((int64_t)(int)~(uVar5 + 0x94503155) + 0x7fffa47c779a) =
       (int64_t)(int)(uVar5 + 0x864fd2fb ^ 0xdff5bb9) + 0x7fffa56fc2eaU >> 0x1b | uVar8 << 0x25;
  return uVar8;
}


// ============================================================================
// Function : FUN_7fffa5267990  |  RVA: 0xaf7990  |  Size: 40 bytes
// Callers  : none
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184
// ============================================================================
uint64_t FUN_7fffa5267990(int64_t param_1,int64_t param_2)

{
  uint32_t *puVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar1 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar1 = 0x16;
    FUN_7fffa55c8ce0();
  }
  return 0x7fffffff;
}


// ============================================================================
// Function : FUN_7fffa52679b8  |  RVA: 0xaf79b8  |  Size: 93 bytes
// Callers  : FUN_7fffa4f445c0@0x7d45c0, FUN_7fffa56084d0@0xe984d0
// Callees  : FUN_7fffa5130600@0x9c0600, FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
uint64_t FUN_7fffa52679b8(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  
  if ((param_1 < 0x1fffffffffffffff) && (param_2 < 0xffffffffffffffff / param_3)) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      uVar1 = FUN_7fffa5130600(param_1 * 8 + param_2 * param_3,1);
      FUN_7fffa52d8dd0(0);
      return uVar1;
    }
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5267a20  |  RVA: 0xaf7a20  |  Size: 404 bytes
// Callers  : none
// Callees  : FUN_7fffa5491f30@0xd21f30, FUN_7fffa54991f0@0xd291f0, FUN_7fffa560e390@0xe9e390, FUN_7fffa54539d0@0xce39d0, FUN_7fffa5687b90@0xf17b90, FUN_7fffa5488e60@0xd18e60, FUN_7fffa5668b80@0xef8b80
// ============================================================================
uint64_t FUN_7fffa5267a20(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int *piVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint8_t auStack_48 [16];
  
  lVar6 = FUN_7fffa54539d0();
  uVar1 = *(uint64_t *)(lVar6 + 0x28);
  lVar6 = FUN_7fffa54539d0();
  uVar2 = *(uint64_t *)(lVar6 + 0x20);
  piVar3 = *(int **)(param_1 + 0x50);
  lVar6 = *(int64_t *)(param_1 + 0x48);
  uVar8 = *(uint64_t *)(param_1 + 0x40);
  uVar9 = *(uint64_t *)(param_1 + 0x30);
  plVar4 = *(int64_t **)(param_1 + 0x28);
  FUN_7fffa560e390(uVar8);
  lVar7 = FUN_7fffa54539d0();
  *(int **)(lVar7 + 0x20) = piVar3;
  lVar7 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar7 + 0x28) = uVar8;
  lVar7 = FUN_7fffa54539d0();
  uVar8 = FUN_7fffa5687b90(auStack_48,*(uint64_t *)(*(int64_t *)(lVar7 + 0x20) + 0x28));
  if (*(int64_t *)(param_1 + 0x58) != 0) {
    FUN_7fffa54539d0();
  }
  uVar9 = FUN_7fffa5668b80(uVar9,plVar4,0x100);
  FUN_7fffa5491f30(uVar8);
  if ((((*piVar3 == -0x1f928c9d) && (piVar3[6] == 4)) && (piVar3[8] + 0xe66cfae0U < 3)) &&
     (iVar5 = FUN_7fffa54991f0(*(uint64_t *)(piVar3 + 10)), iVar5 != 0)) {
    FUN_7fffa5488e60(piVar3,1);
  }
  lVar7 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar7 + 0x20) = uVar2;
  lVar7 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar7 + 0x28) = uVar1;
  *(uint64_t *)((int64_t)*(int *)(lVar6 + 0x1c) + *plVar4) = 0xfffffffffffffffe;
  return uVar9;
}


// ============================================================================
// Function : FUN_7fffa5267c30  |  RVA: 0xaf7c30  |  Size: 43 bytes
// Callers  : FUN_7fffa52c6460@0xb56460
// Callees  : FUN_7fffa52d8e60@0xb68e60, FUN_7fffa4ecf55c@0x75f55c
// ============================================================================
uint8_t FUN_7fffa5267c30(uint8_t param_1,char param_2)

{
  if ((DAT_7fffa4781bc0 == '\0') || (param_2 == '\0')) {
    FUN_7fffa4ecf55c();
    FUN_7fffa52d8e60(param_1);
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5267c60  |  RVA: 0xaf7c60  |  Size: 180 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5267d0c) */

uint64_t FUN_7fffa5267c60(int64_t param_1,int64_t param_2)

{
  if (*(int64_t *)((int64_t)ProcessEnvironmentBlock + 0x30) == -0x98a3f70677346bf) {
    return 0xf675c08f988cb941;
  }
  *(bool *)(param_2 + 0x27) = (*(uint32_t *)(*(int64_t *)(param_1 + 8) + 0x68) & 0x4000) == 0;
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5267d20  |  RVA: 0xaf7d20  |  Size: 1163 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5267e9a) */

void FUN_7fffa5267d20(uint64_t param_1)

{
  uint32_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t unaff_RBX;
  int64_t lVar4;
  uint64_t uVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint8_t bVar8;
  uint64_t in_R10;
  int64_t lVar9;
  uint16_t uVar10;
  uint64_t uVar11;
  short sVar12;
  
  uVar2 = ~unaff_RBX;
  uVar7 = ~in_R10;
  uVar5 = ~param_1;
  uVar11 = (unaff_RBX | in_R10) & uVar5;
  uVar2 = (uVar5 & in_R10 & uVar2) * -0x268070be + (~(param_1 | unaff_RBX) & uVar7) * -0x256a6999 +
          ((unaff_RBX | in_R10) ^ param_1) * -0x561b0514 +
          ((uVar2 ^ in_R10) & param_1) * 0x23c704c4 +
          ((uVar7 | uVar2) & param_1) * 0x561b0514 + ((in_R10 ^ unaff_RBX) & param_1) * -0x32540050
          + ((unaff_RBX & uVar7 | uVar5) - (param_1 & unaff_RBX & uVar7)) * 0x49316e5d +
          (param_1 | unaff_RBX | uVar7) * -0x268070be +
          ((uVar11 >> 0x20) * 0x30b09b7b << 0x20) + (uVar11 & 0xffffffff) * 0x30b09b7b;
  uVar1 = (uint32_t)uVar2;
  bVar8 = (uint8_t)uVar2 & 7;
  *(uint8_t *)((int64_t)(int)((uVar1 | 1) * 0x46585774) + 0x7fffa4790d91) =
       (0xbfU >> bVar8 | -0x41 << 8 - bVar8) ^ 0xef;
  lVar9 = (int64_t)(int)(uVar1 + 0xfd45dd68);
  *(uint8_t (*) [16])(lVar9 + 0x7fffa478ff22) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar9 + 0x7fffa478ff12) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar9 + 0x7fffa478ff02) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar9 + 0x7fffa478fef2) = (uint8_t  [16])0x0;
  *(uint64_t *)(((int64_t)(int)(uVar1 + 0x1e523883) ^ 0xffffffffdef49ecfU) + 0x7fffa4790df1) =
       (uint64_t)((uVar1 + 0xc554fbf3 ^ 0xaa6d05c5) + 0x9d9c9dd8);
  lVar9 = rdtsc();
  lVar3 = lVar9 * ((uVar2 ^ 0x1b0178705c320bdd) << 0xb | (uVar2 ^ 0x1b0178705c320bdd) >> 0x35) + 0xb
  ;
  lVar9 = 3;
  while( true ) {
    lVar3 = lVar3 * 0xbc382f45b0138d8 + 0xb;
    uVar10 = (short)uVar2 + 0x6883;
    lVar4 = lVar3 * 0xbc382f45b0138d8 + 0xb;
    bVar8 = (uint8_t)uVar2 & 0xf;
    sVar12 = (short)(uVar1 | 1);
    uVar5 = lVar4 * 0xbc382f45b0138d8 + 0xb;
    *(char *)(lVar9 + (int64_t)(short)(uVar10 * 0x400 | uVar10 >> 6) + 0x7fffa47850f8) =
         (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar9 + ((int64_t)(short)(sVar12 * -0x2000 | (uint16_t)(sVar12 * -0x7e91) >> 3) ^
                      0x6476U) + 0x7fffa4787a5f) = (char)(uVar5 >> 0x20);
    *(char *)(lVar9 + (int64_t)(short)(0x374eU >> bVar8 | 0x374e << 0x10 - bVar8) + 0x7fffa47874bd)
         = (char)((uint64_t)lVar4 >> 0x20);
    if (lVar9 == 0x5f) break;
    uVar6 = (uVar1 ^ 0xd2ead519) + 0x2f9d6f6c;
    uVar7 = uVar5 & 0xbc382f45b0138d0;
    if ((uVar1 ^ 0x10766a60) <= 0x597a1f14 - uVar1) {
      uVar7 = uVar5 * 0xbc382f45b0138d8;
    }
    lVar3 = uVar7 + 0xb;
    *(char *)(lVar9 + (int64_t)(int)(uVar6 * 0x10000000 | uVar6 >> 4) + 0x7fffa4793568) =
         (char)((uint64_t)lVar3 >> 0x20);
    lVar9 = lVar9 + 4;
  }
  bVar8 = *(char *)(((int64_t)(int)(0x430d29b0 - uVar1) ^ 0xffffffffbfacb08dU) + 0x7fffa4793b12) +
          1U & 7;
  *(uint64_t *)
   ((int64_t)(short)(0x5ae2U - (short)uVar2 ^ 0x559a) + 0x7fffa4788ce2 + (uint64_t)bVar8 * 8) =
       0xffffffffffffffff;
  *(uint8_t *)((int64_t)(int)(0x2b7f9fb - uVar1 >> 1 | (uint32_t)((0x2b7f9fb - uVar1 & 1) != 0) << 0x1f) +
           0x7fffa479014d) = bVar8;
  return;
}


// ============================================================================
// Function : FUN_7fffa52681b0  |  RVA: 0xaf81b0  |  Size: 2313 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52681b0(void) {
    /* +0xaf81b0 */ __asm { PUSH RBP }
    /* +0xaf81b1 */ __asm { PUSH R15 }
    /* +0xaf81b3 */ __asm { PUSH RSI }
    /* +0xaf81b4 */ __asm { PUSH R13 }
    /* +0xaf81b6 */ __asm { PUSH R12 }
    /* +0xaf81b8 */ __asm { PUSH RDI }
    /* +0xaf81b9 */ __asm { SUB RSP,0x48 }
    /* +0xaf81bd */ __asm { LEA RBP,[RSP + 0x40] }
    /* +0xaf81c2 */ __asm { MOV RDI,RDX }
    /* +0xaf81c5 */ __asm { MOV R9,-0xe5f1218e33519ab }
    /* +0xaf81cf */ __asm { XOR R9,-0x3c9f6f7 }
    /* +0xaf81d6 */ __asm { MOV ECX,EDI }
    /* +0xaf81d8 */ __asm { ROR R9,CL }
    /* +0xaf81db */ __asm { IMUL R9,R8 }
    /* +0xaf81df */ __asm { MOV dword ptr [RBP + -0x18],0x6f19f80d }
    /* +0xaf81e6 */ __asm { MOV EDX,dword ptr [RBP + -0x18] }
    /* +0xaf81e9 */ __asm { CMP EDX,0xdc340ba8 }
    /* +0xaf81ef */ __asm { JNC 0x7fffa5268ad1 }
    /* +0xaf81f5 */ __asm { MOV EDX,0xd1ee5392 }
    /* +0xaf81fa */ __asm { MOV R10,qword ptr [R9] }
    /* +0xaf81fd */ __asm { IMUL EDX,EDX,-0x4109507f }
    /* +0xaf8203 */ __asm { MOV ECX,EDI }
    /* +0xaf8205 */ __asm { ROL EDX,CL }
    /* +0xaf8207 */ __asm { ADD EDX,0x8bd8ab72 }
    /* +0xaf820d */ __asm { XOR R13D,R13D }
    /* +0xaf8210 */ __asm { CMP dword ptr [R10],EDX }
    /* +0xaf8213 */ __asm { JZ 0x7fffa5268235 }
    /* +0xaf8215 */ __asm { MOV R11D,R13D }
    /* +0xaf8218 */ __asm { SHL R11D,0x13 }
    /* +0xaf821c */ __asm { LEA R9D,[R11 + R13*0x1] }
    /* +0xaf8220 */ __asm { ADD R9D,0xdd2078f6 }
    /* +0xaf8227 */ __asm { ADD RSP,0x48 }
    /* +0xaf822b */ __asm { POP RDI }
    /* +0xaf822c */ __asm { POP R12 }
    /* +0xaf822e */ __asm { POP R13 }
    /* +0xaf8230 */ __asm { POP RSI }
    /* +0xaf8231 */ __asm { POP R15 }
    /* +0xaf8233 */ __asm { POP RBP }
    /* +0xaf8234 */ __asm { RET }
    /* +0xaf8235 */ __asm { MOV R8W,0x400 }
    /* +0xaf823a */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xaf8241 */ __asm { NOP }
    /* +0xaf8243 */ __asm { MOV R11,0x0 }
    /* +0xaf824a */ __asm { MOV EDX,EDI }
    /* +0xaf824c */ __asm { OR EDX,0x1 }
    /* +0xaf824f */ __asm { IMUL R8D,EDX }
    /* +0xaf8253 */ __asm { ROL R8W,0xa }
    /* +0xaf8258 */ __asm { MOVZX ECX,R8W }
    /* +0xaf825c */ __asm { MOV RCX,qword ptr GS:[RCX] }
    /* +0xaf8260 */ __asm { MOV RCX,qword ptr [RCX + 0x60] }
    /* +0xaf8264 */ __asm { MOV R8,-0x648ea83759ccf205 }
    /* +0xaf826e */ __asm { XOR R8,RCX }
    /* +0xaf8271 */ __asm { MOV RCX,-0x6c5cd22321a24ec9 }
    /* +0xaf827b */ __asm { CMP R8,RCX }
    /* +0xaf827e */ __asm { JZ 0x7fffa5268729 }
    /* +0xaf8284 */ __asm { MOV R8W,0x745 }
    /* +0xaf8289 */ __asm { NOP }
    /* +0xaf828b */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xaf8292 */ __asm { MOV R11,0x0 }
    /* +0xaf8299 */ __asm { ADD R8D,0xffffdbde }
    /* +0xaf82a0 */ __asm { MOV R10D,EDI }
    /* +0xaf82a3 */ __asm { XOR R10D,R8D }
    /* +0xaf82a6 */ __asm { MOVZX ECX,R10W }
    /* +0xaf82aa */ __asm { MOV RCX,qword ptr GS:[RCX] }
    /* +0xaf82ae */ __asm { MOV R8D,0x20a01d72 }
    /* +0xaf82b4 */ __asm { MOV R10D,EDI }
    /* +0xaf82b7 */ __asm { SUB R10D,R8D }
    /* +0xaf82ba */ __asm { MOV RCX,qword ptr [RCX + 0x30] }
    /* +0xaf82be */ __asm { ADD R10D,0x16a3ac2 }
    /* +0xaf82c5 */ __asm { SUB RCX,R10 }
    /* +0xaf82c8 */ __asm { MOV R10,0x4fa9f9c01da00c01 }
    /* +0xaf82d2 */ __asm { IMUL R10,RCX }
    /* +0xaf82d6 */ __asm { ADD R10,-0x58816fed }
    /* +0xaf82dd */ __asm { MOV RCX,0x6dbb4b1cc7dfdaf7 }
    /* +0xaf82e7 */ __asm { CMP R10,RCX }
    /* +0xaf82ea */ __asm { NOP }
    /* +0xaf82eb */ __asm { NOP }
    /* +0xaf82ec */ __asm { NOP }
    /* +0xaf82ed */ __asm { NOP }
    /* +0xaf82ee */ __asm { NOP }
    /* +0xaf82ef */ __asm { LEA R8,[0x7fffa4782fa3] }
    /* +0xaf82f6 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xaf82fd */ __asm { NOP }
    /* +0xaf82ff */ __asm { MOV R11,0x0 }
    /* +0xaf8306 */ __asm { MOV RCX,0x6f59aeb46d566c78 }
    /* +0xaf8310 */ __asm { CMP R8,RCX }
    /* +0xaf8313 */ __asm { JZ 0x7fffa5268ada }
    /* +0xaf8319 */ __asm { MOVZX R11D,uint8_t ptr [R8 + 0x15ec] }
    /* +0xaf8321 */ __asm { MOVZX R10D,uint8_t ptr [R8 + R11*0x4 + 0x15f6] }
    /* +0xaf832a */ __asm { NOT R10B }
    /* +0xaf832d */ __asm { ROL R10B,0x3 }
    /* +0xaf8331 */ __asm { MOV uint8_t ptr [RBP + -0x18],R10B }
    /* +0xaf8335 */ __asm { MOVZX R10D,uint8_t ptr [R8 + R11*0x4 + 0x15f7] }
    /* +0xaf833e */ __asm { NOT R10B }
    /* +0xaf8341 */ __asm { ROL R10B,0x3 }
    /* +0xaf8345 */ __asm { MOV uint8_t ptr [RBP + -0x17],R10B }
    /* +0xaf8349 */ __asm { MOVZX R10D,uint8_t ptr [R8 + R11*0x4 + 0x15f8] }
    /* +0xaf8352 */ __asm { NOT R10B }
    /* +0xaf8355 */ __asm { ROL R10B,0x3 }
    /* +0xaf8359 */ __asm { MOV uint8_t ptr [RBP + -0x16],R10B }
    /* +0xaf835d */ __asm { MOVZX R10D,uint8_t ptr [R8 + R11*0x4 + 0x15f9] }
    /* +0xaf8366 */ __asm { NOT R10B }
    /* +0xaf8369 */ __asm { ROL R10B,0x3 }
    /* +0xaf836d */ __asm { MOV uint8_t ptr [RBP + -0x15],R10B }
    /* +0xaf8371 */ __asm { MOV R8D,0x97cd0fa7 }
    /* +0xaf8377 */ __asm { XOR R8D,dword ptr [RBP + -0x18] }
    /* +0xaf837b */ __asm { BT R8D,R8D }
    /* +0xaf837f */ __asm { JC 0x7fffa5268215 }
    /* +0xaf8385 */ __asm { MOV R11D,0xed4fd7c2 }
    /* +0xaf838b */ __asm { ADD R11D,0x8001ffd0 }
    /* +0xaf8392 */ __asm { MOV CX,0x1cbc }
    /* +0xaf8396 */ __asm { PUSHFQ }
    /* +0xaf8397 */ __asm { POP RAX }
    /* +0xaf8398 */ __asm { XOR R10D,R10D }
    /* +0xaf839b */ __asm { AND EAX,0x100 }
    /* +0xaf83a0 */ __asm { SETZ R10B }
    /* +0xaf83a4 */ __asm { MOV R15D,0x60ca1b8f }
    /* +0xaf83aa */ __asm { ADD R15D,EDI }
    /* +0xaf83ad */ __asm { NOT R15D }
    /* +0xaf83b0 */ __asm { MOV R8D,EDI }
    /* +0xaf83b3 */ __asm { OR R8D,0x1 }
    /* +0xaf83b7 */ __asm { IMUL R11D,R8D }
    /* +0xaf83bb */ __asm { MOVSXD R11,R11D }
    /* +0xaf83be */ __asm { MOV ESI,EDI }
    /* +0xaf83c0 */ __asm { XOR ESI,ECX }
    /* +0xaf83c2 */ __asm { NOT ESI }
    /* +0xaf83c4 */ __asm { MOVZX ECX,SI }
    /* +0xaf83c7 */ __asm { XOR ESI,ESI }
    /* +0xaf83c9 */ __asm { CMP RAX,RCX }
    /* +0xaf83cc */ __asm { SETC SIL }
    /* +0xaf83d0 */ __asm { CMP R11,R15 }
    /* +0xaf83d3 */ __asm { CMOVZ R10D,ESI }
    /* +0xaf83d7 */ __asm { TEST R10B,R10B }
    /* +0xaf83da */ __asm { NOP }
    /* +0xaf83db */ __asm { NOP }
    /* +0xaf83dc */ __asm { NOP }
    /* +0xaf83dd */ __asm { NOP }
    /* +0xaf83de */ __asm { NOP }
    /* +0xaf83df */ __asm { MOV dword ptr [RBP + -0x18],0x8501a500 }
    /* +0xaf83e6 */ __asm { MOV R10D,dword ptr [RBP + -0x18] }
    /* +0xaf83ea */ __asm { MOV R11D,0xdc1d9125 }
    /* +0xaf83f0 */ __asm { XOR R11D,0x593e5625 }
    /* +0xaf83f7 */ __asm { SUB R11D,EDI }
    /* +0xaf83fa */ __asm { XOR R11D,0x1705fc25 }
    /* +0xaf8401 */ __asm { CMP R10D,R11D }
    /* +0xaf8404 */ __asm { NOP }
    /* +0xaf8405 */ __asm { NOP }
    /* +0xaf8406 */ __asm { NOP }
    /* +0xaf8407 */ __asm { NOP }
    /* +0xaf8408 */ __asm { NOP }
    /* +0xaf8409 */ __asm { NOP }
    /* +0xaf840a */ __asm { NOP }
    /* +0xaf840b */ __asm { NOP }
    /* +0xaf840c */ __asm { NOP }
    /* +0xaf840d */ __asm { NOP }
    /* +0xaf840e */ __asm { NOP }
    /* +0xaf840f */ __asm { NOP }
    /* +0xaf8410 */ __asm { NOP }
    /* +0xaf8411 */ __asm { NOP }
    /* +0xaf8412 */ __asm { MOV R10,qword ptr [R9 + 0x8] }
    /* +0xaf8416 */ __asm { MOV dword ptr [RBP + -0x18],0xf793d82a }
    /* +0xaf841d */ __asm { MOV R11D,dword ptr [RBP + -0x18] }
    /* +0xaf8421 */ __asm { MOV R11,qword ptr [R10 + 0x68] }
    /* +0xaf8425 */ __asm { MOV dword ptr [RBP + -0x18],0x4cd5379f }
    /* +0xaf842c */ __asm { MOV ECX,dword ptr [RBP + -0x18] }
    /* +0xaf842f */ __asm { TEST R11D,0xe000 }
    /* +0xaf8436 */ __asm { JNZ 0x7fffa5268731 }
    /* +0xaf843c */ __asm { MOV ECX,0x874f4b60 }
    /* +0xaf8441 */ __asm { MOVD XMM5,ECX }
    /* +0xaf8445 */ __asm { MOV ECX,R11D }
    /* +0xaf8448 */ __asm { AND ECX,0xf }
    /* +0xaf844b */ __asm { LEA RAX,[R11 + R11*0x4] }
    /* +0xaf844f */ __asm { LEA RAX,[RAX + RAX*0x2] }
    /* +0xaf8453 */ __asm { MOV R15D,0xe8260ad4 }
    /* +0xaf8459 */ __asm { ADD R15D,0x85ddf0ee }
    /* +0xaf8460 */ __asm { IMUL R15D,R8D }
    /* +0xaf8464 */ __asm { MOVD XMM2,EDI }
    /* +0xaf8468 */ __asm { PADDD XMM2,XMM5 }
    /* +0xaf846c */ __asm { MOVD ESI,XMM2 }
    /* +0xaf8470 */ __asm { IMUL R12D,ESI,-0x43c5e0bb }
    /* +0xaf8477 */ __asm { CMP R12,R15 }
    /* +0xaf847a */ __asm { CMOVBE RAX,RCX }
    /* +0xaf847e */ __asm { TEST RAX,RAX }
    /* +0xaf8481 */ __asm { JZ 0x7fffa52687b2 }
    /* +0xaf8487 */ __asm { MOV RCX,0x270532cc07e8afc3 }
    /* +0xaf8491 */ __asm { CMP qword ptr [RBP + 0x38],RCX }
    /* +0xaf8495 */ __asm { JNZ 0x7fffa526891a }
    /* +0xaf849b */ __asm { LEA RCX,[0x7fffa52d7bfa] }
    /* +0xaf84a2 */ __asm { MOV EAX,0xe4fe95 }
    /* +0xaf84a7 */ __asm { IMUL R12,qword ptr [0x7fff65d593f3],0x4c12c0c1 }
    /* +0xaf84b2 */ __asm { MOVSXD EAX,EAX }
    /* +0xaf84b4 */ __asm { ADD R8,RCX }
    /* +0xaf84b7 */ __asm { CMP qword ptr [R10 + 0x48],R8 }
    /* +0xaf84bb */ __asm { JNZ 0x7fffa526898d }
    /* +0xaf84c1 */ __asm { MOV R8D,0xd47fecb6 }
    /* +0xaf84c7 */ __asm { IMUL R15,qword ptr [RCX + -0xab5662f],0x4cc12944 }
    /* +0xaf84d2 */ __asm { LEA EAX,[0x7fffa5624628] }
    /* +0xaf84d8 */ __asm { XOR ECX,EDI }
    /* +0xaf84da */ __asm { MOVSXD RCX,ECX }
    /* +0xaf84dd */ __asm { ADD RCX,R8 }
    /* +0xaf84e0 */ __asm { AND EAX,0x504a3949 }
    /* +0xaf84e5 */ __asm { JNZ 0x7fffa526898d }
    /* +0xaf84eb */ __asm { MOV R8D,0x21df620f }
    /* +0xaf84f1 */ __asm { IMUL R8D,R8D,0x4ea87e01 }
    /* +0xaf84f8 */ __asm { LEA RAX,[0x7fffa559e00f] }
    /* +0xaf84ff */ __asm { MOV ECX,EDI }
    /* +0xaf8501 */ __asm { ROR R8D,CL }
    /* +0xaf8504 */ __asm { IMUL R12,qword ptr [0x7fffedeee858],0x3949c101 }
    /* +0xaf850f */ __asm { POP RAX }
    /* +0xaf8511 */ __asm { JNZ 0x7fffa526898d }
    /* +0xaf8517 */ __asm { IMUL R12,qword ptr [0x7fff77000e66],0x1e183e9 }
    /* +0xaf8522 */ __asm { TEST R11B,0x4 }
    /* +0xaf8526 */ __asm { MOV R8D,0x2 }
    /* +0xaf852c */ __asm { CMOVZ R8,RCX }
    /* +0xaf8530 */ __asm { LEA RCX,[0x7fffa50d4a3c] }
    /* +0xaf8537 */ __asm { MOV RAX,qword ptr [R10 + 0x60] }
    /* +0xaf853b */ __asm { MOV ESI,0x152b3401 }
    /* +0xaf8540 */ __asm { IMUL ESI,ESI,-0x73a65f07 }
    /* +0xaf8546 */ __asm { ROL ESI,0x8 }
    /* +0xaf8549 */ __asm { SUB ESI,EDI }
    /* +0xaf854b */ __asm { MOVSXD R15,ESI }
    /* +0xaf854e */ __asm { ADD R15,RCX }
    /* +0xaf8551 */ __asm { CMP RAX,R15 }
    /* +0xaf8554 */ __asm { JNZ 0x7fffa526898d }
    /* +0xaf855a */ __asm { AND R11D,0x8 }
    /* +0xaf855e */ __asm { MOV ECX,0x8e86f556 }
    /* +0xaf8563 */ __asm { LEA EAX,[RDI + 0x75045ff] }
    /* +0xaf8569 */ __asm { MOVD XMM5,ECX }
    /* +0xaf856d */ __asm { SHR R11D,0x3 }
    /* +0xaf8571 */ __asm { MOVD XMM2,EAX }
    /* +0xaf8575 */ __asm { MOV ECX,0x8a8720e }
    /* +0xaf857a */ __asm { IMUL EAX,ECX,0x97f9d1b }
    /* +0xaf8580 */ __asm { ADD EAX,0x5fc8c8ac }
    /* +0xaf8585 */ __asm { MOV CX,0xd618 }
    /* +0xaf8589 */ __asm { PADDD XMM2,XMM5 }
    /* +0xaf858d */ __asm { MOVD R15D,XMM2 }
    /* +0xaf8592 */ __asm { IMUL ECX,EDX }
    /* +0xaf8595 */ __asm { ADD ECX,0xffffafe8 }
    /* +0xaf859b */ __asm { MOVZX R12D,CX }
    /* +0xaf859f */ __asm { MOV ECX,EDI }
    /* +0xaf85a1 */ __asm { ROR EAX,CL }
    /* +0xaf85a3 */ __asm { MOVSXD RCX,EAX }
    /* +0xaf85a6 */ __asm { CMP RCX,R15 }
    /* +0xaf85a9 */ __asm { SETA CL }
    /* +0xaf85ac */ __asm { XOR CL,R11B }
    /* +0xaf85af */ __asm { MOV ECX,0x3 }
    /* +0xaf85b4 */ __asm { CMOVNZ RCX,R8 }
    /* +0xaf85b8 */ __asm { MOV R11,qword ptr GS:[R12] }
    /* +0xaf85bd */ __asm { MOV R8,-0x3124db61dd27d8a5 }
    /* +0xaf85c7 */ __asm { CMP qword ptr [R11 + 0x60],R8 }
    /* +0xaf85cb */ __asm { NOP }
    /* +0xaf85cc */ __asm { NOP }
    /* +0xaf85cd */ __asm { NOP }
    /* +0xaf85ce */ __asm { NOP }
    /* +0xaf85cf */ __asm { NOP }
    /* +0xaf85d0 */ __asm { NOP }
    /* +0xaf85d1 */ __asm { NOP }
    /* +0xaf85d2 */ __asm { MOV R8W,0x69d1 }
    /* +0xaf85d7 */ __asm { MOV R11,qword ptr [R9] }
    /* +0xaf85da */ __asm { ADD R8D,EDI }
    /* +0xaf85dd */ __asm { IMUL R8D,R8D,0x615 }
    /* +0xaf85e4 */ __asm { MOVSX R8,R8W }
    /* +0xaf85e8 */ __asm { LEA RAX,[0x7fffa56eec3c] }
    /* +0xaf85ef */ __asm { ADD RAX,R8 }
    /* +0xaf85f2 */ __asm { SHL ECX,0x4 }
    /* +0xaf85f5 */ __asm { MOV RCX,qword ptr [RCX + RAX*0x1 + 0x8] }
    /* +0xaf85fa */ __asm { CMP RCX,qword ptr [R11 + 0x10] }
    /* +0xaf85fe */ __asm { JNZ 0x7fffa526860d }
    /* +0xaf8600 */ __asm { CMP RCX,qword ptr [R10 + 0xf8] }
    /* +0xaf8607 */ __asm { JZ 0x7fffa526868d }
    /* +0xaf860d */ __asm { MOV R9D,0xe4fb76c8 }
    /* +0xaf8613 */ __asm { ADD R9D,0x4535004a }
    /* +0xaf861a */ __asm { MOV ECX,EDI }
    /* +0xaf861c */ __asm { ROL R9D,CL }
    /* +0xaf861f */ __asm { ADD R9D,0x6861dc5f }
    /* +0xaf8626 */ __asm { MOV dword ptr [RBP + -0x18],R9D }
    /* +0xaf862a */ __asm { MOV R9D,dword ptr [RBP + -0x18] }
    /* +0xaf862e */ __asm { ADD RSP,0x10 }
    /* +0xaf8632 */ __asm { MOV R9W,0xa7f5 }
    /* +0xaf8637 */ __asm { XOR R9D,0x877d }
    /* +0xaf863e */ __asm { ROL R9W,0x7 }
    /* +0xaf8643 */ __asm { IMUL EDX,R9D }
    /* +0xaf8647 */ __asm { MOVZX EDX,DX }
    /* +0xaf864a */ __asm { MOV R11,qword ptr GS:[RDX] }
    /* +0xaf864e */ __asm { MOV DX,0x33bb }
    /* +0xaf8652 */ __asm { LEA R9D,[RDI + RDX*0x1] }
    /* +0xaf8656 */ __asm { ADD R9D,0xffffb704 }
    /* +0xaf865d */ __asm { ROL R9W,0xa }
    /* +0xaf8662 */ __asm { MOVZX EDX,R9W }
    /* +0xaf8666 */ __asm { MOV R9,0x6d86e753ef579cd }
    /* +0xaf8670 */ __asm { CMP qword ptr [RDX + R11*0x1],R9 }
    /* +0xaf8674 */ __asm { JNZ 0x7fffa5268215 }
    /* +0xaf868d */ __asm { MOV DX,0x2b55 }
    /* +0xaf8691 */ __asm { IMUL EDX,EDX,0x317 }
    /* +0xaf8697 */ __asm { SUB EDX,EDI }
    /* +0xaf8699 */ __asm { MOVZX EDX,DX }
    /* +0xaf869c */ __asm { MOV ECX,0xca0 }
    /* +0xaf86a1 */ __asm { ADD RCX,qword ptr GS:[RDX] }
    /* +0xaf86a5 */ __asm { MOV DX,0xcc8a }
    /* +0xaf86a9 */ __asm { ADD EDX,EDI }
    /* +0xaf86ab */ __asm { IMUL EDX,EDX,0x12b }
    /* +0xaf86b1 */ __asm { MOVZX EDX,DX }
    /* +0xaf86b4 */ __asm { XOR RDX,0x545f }
    /* +0xaf86bb */ __asm { MOV RDX,qword ptr GS:[RDX] }
    /* +0xaf86bf */ __asm { OR RCX,qword ptr [RDX + 0x270] }
    /* +0xaf86c6 */ __asm { MOV RDX,0x2beaeec46cee87cb }
    /* +0xaf86d0 */ __asm { CMP RCX,RDX }
    /* +0xaf86d3 */ __asm { JNZ 0x7fffa52686e9 }
    /* +0xaf86d5 */ __asm { NOP }
    /* +0xaf86d7 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xaf86de */ __asm { MOV R8,0x0 }
    /* +0xaf86e5 */ __asm { INT 0xab }
    /* +0xaf86e8 */ __asm { PUSH RSP }
    /* +0xaf86e9 */ __asm { MOV dword ptr [RBP + -0x18],0x5d5d9816 }
    /* +0xaf86f0 */ __asm { MOV EDX,dword ptr [RBP + -0x18] }
    /* +0xaf86f3 */ __asm { LEA RDX,[0x7fffa545ef7f] }
    /* +0xaf86fa */ __asm { MOV R8D,0xc6d3c805 }
    /* +0xaf8700 */ __asm { NOT R8D }
    /* +0xaf8703 */ __asm { ADD R8D,EDI }
    /* +0xaf8706 */ __asm { IMUL R8D,R8D,0x4aeebac5 }
    /* +0xaf870d */ __asm { MOVSXD RCX,R8D }
    /* +0xaf8710 */ __asm { ADD RCX,RDX }
    /* +0xaf8713 */ __asm { MOV R9,qword ptr [R9 + 0x8] }
    /* +0xaf8717 */ __asm { MOV qword ptr [R9 + 0xf8],RCX }
    /* +0xaf871e */ __asm { MOV R13D,0xffffffff }
    /* +0xaf8724 */ __asm { JMP 0x7fffa5268215 }
    /* +0xaf8729 */ __asm { SBB qword ptr [R9 + -0x4ac17],-0x46be9901 }
    /* +0xaf8734 */ __asm { CMP EAX,dword ptr [RBP + 0x45] }
    /* +0xaf8737 */ __asm { IMUL ECX,ECX,0x7401 }
    /* +0xaf873d */ __asm { ADD R9D,0xfffffed1 }
    /* +0xaf8744 */ __asm { MOV ECX,EDI }
    /* +0xaf8746 */ __asm { ROL R9W,CL }
    /* +0xaf874a */ __asm { MOVZX EDX,R9W }
    /* +0xaf874e */ __asm { MOV R9,qword ptr GS:[RDX] }
    /* +0xaf8752 */ __asm { MOV RDX,-0x2d1222aff733399e }
    /* +0xaf875c */ __asm { MOV ECX,0xa61dee11 }
    /* +0xaf8761 */ __asm { IMUL RCX,RDX }
    /* +0xaf8765 */ __asm { MOV RDX,0x246030a5e1b3b4a6 }
    /* +0xaf876f */ __asm { ADD RDX,RCX }
    /* +0xaf8772 */ __asm { XOR RDX,RDI }
    /* +0xaf8775 */ __asm { CMP qword ptr [R9 + 0xd0],RDX }
    /* +0xaf877c */ __asm { NOP }
    /* +0xaf877d */ __asm { NOP }
    /* +0xaf877e */ __asm { NOP }
    /* +0xaf877f */ __asm { NOP }
    /* +0xaf8780 */ __asm { NOP }
    /* +0xaf8781 */ __asm { NOP }
    /* +0xaf8782 */ __asm { NOP }
    /* +0xaf8783 */ __asm { PUSH R9 }
    /* +0xaf8785 */ __asm { MOV dword ptr [RBP + -0x18],0x7a417c3f }
    /* +0xaf878c */ __asm { MOV R9D,dword ptr [RBP + -0x18] }
    /* +0xaf8790 */ __asm { MOV EDX,0xf717e9f4 }
    /* +0xaf8795 */ __asm { SUB EDX,EDI }
    /* +0xaf8797 */ __asm { ROL EDX,0x14 }
    /* +0xaf879a */ __asm { CMP R9D,EDX }
    /* +0xaf879d */ __asm { JA 0x7fffa5268215 }
    /* +0xaf87a3 */ __asm { PUSH RBP }
    /* +0xaf87b2 */ __asm { MOV R9,qword ptr [R9 + 0x8] }
    /* +0xaf87b6 */ __asm { MOV R9,qword ptr [R9 + 0xf8] }
    /* +0xaf87bd */ __asm { MOV qword ptr [RBP],R9 }
    /* +0xaf87c1 */ __asm { MOV dword ptr [RBP + -0x18],0x801202e1 }
    /* +0xaf87c8 */ __asm { MOV R9D,dword ptr [RBP + -0x18] }
    /* +0xaf87cc */ __asm { CMP R9D,0x9f5ce7a9 }
    /* +0xaf87d3 */ __asm { JNC 0x7fffa5268ae2 }
    /* +0xaf87d9 */ __asm { LEA R10,[0x7fffa4776914] }
    /* +0xaf87e0 */ __asm { MOV R9,qword ptr [RBP] }
    /* +0xaf87e4 */ __asm { MOV EDX,0xb0777a8d }
    /* +0xaf87e9 */ __asm { MOV R11W,0x8a6a }
    /* +0xaf87ee */ __asm { MOV EAX,0x2156 }
    /* +0xaf87f3 */ __asm { SUB EAX,R11D }
    /* +0xaf87f6 */ __asm { LEA RCX,[0x7fffa477f291] }
    /* +0xaf87fd */ __asm { MOVSX R11,AX }
    /* +0xaf8801 */ __asm { ADD R11,R10 }
    /* +0xaf8804 */ __asm { CMP R9,R11 }
    /* +0xaf8807 */ __asm { JC 0x7fffa5268a1c }
    /* +0xaf880d */ __asm { ADD EDX,0x20aa51d8 }
    /* +0xaf8813 */ __asm { IMUL EDX,R8D }
    /* +0xaf8817 */ __asm { MOVSXD R11,EDX }
    /* +0xaf881a */ __asm { LEA RDX,[RCX + R11*0x1] }
    /* +0xaf881e */ __asm { ADD RDX,0x2000000 }
    /* +0xaf8825 */ __asm { CMP R9,RDX }
    /* +0xaf8828 */ __asm { JNC 0x7fffa5268a1c }
    /* +0xaf882e */ __asm { MOV R8D,0x1dce6f6a }
    /* +0xaf8834 */ __asm { SUB R8D,EDI }
    /* +0xaf8837 */ __asm { LEA R9,[0x7fffa56a7ed4] }
    /* +0xaf883e */ __asm { MOV DX,0x927b }
    /* +0xaf8842 */ __asm { SUB EDX,EDI }
    /* +0xaf8844 */ __asm { ADD EDX,0xffffd4d4 }
    /* +0xaf884a */ __asm { MOVSX RDX,DX }
    /* +0xaf884e */ __asm { ADD RDX,R9 }
    /* +0xaf8851 */ __asm { ROL R8D,0x1 }
    /* +0xaf8854 */ __asm { CALL RDX }
    /* +0xaf8856 */ __asm { LEA R9,[RBP + -0x18] }
    /* +0xaf885a */ __asm { LEA RDX,[R9 + 0x15] }
    /* +0xaf885e */ __asm { MOVQ XMM5,R9 }
    /* +0xaf8863 */ __asm { MOV R11D,0xcb52a377 }
    /* +0xaf8869 */ __asm { SHL R9,0x15 }
    /* +0xaf886d */ __asm { LEA R10,[0x7fffa4cfcd46] }
    /* +0xaf8874 */ __asm { MOV R8D,0x6fa8cba1 }
    /* +0xaf887a */ __asm { MOV RCX,RBP }
    /* +0xaf887d */ __asm { MOV qword ptr [RBP + -0x10],RCX }
    /* +0xaf8881 */ __asm { IMUL R11D,R11D,0x56fc09d3 }
    /* +0xaf8888 */ __asm { MOV ECX,EDI }
    /* +0xaf888a */ __asm { ROL R11D,CL }
    /* +0xaf888d */ __asm { XOR R8D,0xd211b67a }
    /* +0xaf8894 */ __asm { ROR R8D,CL }
    /* +0xaf8897 */ __asm { LEA RCX,[RBP + -0x1] }
    /* +0xaf889b */ __asm { MOV qword ptr [RBP + -0x18],RCX }
    /* +0xaf889f */ __asm { ADD R8D,0x855a17bc }
    /* +0xaf88a6 */ __asm { MOV ECX,0x8c192acd }
    /* +0xaf88ab */ __asm { ADD ECX,EDI }
    /* +0xaf88ad */ __asm { MOV EAX,0x29a7f6a2 }
    /* +0xaf88b2 */ __asm { SUB EAX,ECX }
    /* +0xaf88b4 */ __asm { CMP RAX,-0x4020ba9c }
    /* +0xaf88ba */ __asm { CMOVZ R9,RDX }
    /* +0xaf88be */ __asm { MOVQ XMM2,R9 }
    /* +0xaf88c3 */ __asm { PADDQ XMM2,XMM5 }
    /* +0xaf88c7 */ __asm { MOVSXD R9,R11D }
    /* +0xaf88ca */ __asm { ADD R9,R10 }
    /* +0xaf88cd */ __asm { MOVQ RCX,XMM2 }
    /* +0xaf88d2 */ __asm { MOVSXD R10,R8D }
    /* +0xaf88d5 */ __asm { CALL R9 }
    /* +0xaf88d8 */ __asm { MOV dword ptr [RBP + -0x18],0x507ffd1a }
    /* +0xaf88df */ __asm { MOV R9D,dword ptr [RBP + -0x18] }
    /* +0xaf88e3 */ __asm { CMP uint8_t ptr [RBP + -0x1],0xf1 }
    /* +0xaf88e7 */ __asm { JNZ 0x7fffa5268a29 }
    /* +0xaf88ed */ __asm { MOV dword ptr [RBP + -0x18],0x48eccd08 }
    /* +0xaf88f4 */ __asm { MOV R9D,dword ptr [RBP + -0x18] }
    /* +0xaf88f8 */ __asm { TEST R9B,0x1 }
    /* +0xaf88fc */ __asm { JZ 0x7fffa5268a98 }
    /* +0xaf8902 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xaf8909 */ __asm { MOV R8,0x0 }
    /* +0xaf8910 */ __asm { NOP }
    /* +0xaf891a */ __asm { LEA R8,[0x7fffa52ca42e] }
    /* +0xaf8921 */ __asm { MOV CX,0xd3a3 }
    /* +0xaf8925 */ __asm { IMUL EAX,ECX,-0x351f }
    /* +0xaf892b */ __asm { MOV ECX,EDI }
    /* +0xaf892d */ __asm { ROL AX,CL }
    /* +0xaf8930 */ __asm { NOT EAX }
    /* +0xaf8932 */ __asm { MOVSX RCX,AX }
    /* +0xaf8936 */ __asm { ADD RCX,R8 }
    /* +0xaf8939 */ __asm { CMP qword ptr [R10 + 0x48],RCX }
    /* +0xaf893d */ __asm { JNZ 0x7fffa526898d }
    /* +0xaf893f */ __asm { LEA RCX,[0x7fffa5621095] }
    /* +0xaf8946 */ __asm { MOV R8W,0x9ec8 }
    /* +0xaf894b */ __asm { ADD R8D,0xffffff6b }
    /* +0xaf8952 */ __asm { MOV EAX,EDI }
    /* +0xaf8954 */ __asm { XOR EAX,R8D }
    /* +0xaf8957 */ __asm { ROL AX,0xb }
    /* +0xaf895b */ __asm { MOVSX R8,AX }
    /* +0xaf895f */ __asm { ADD R8,RCX }
    /* +0xaf8962 */ __asm { CMP qword ptr [R10 + 0x50],R8 }
    /* +0xaf8966 */ __asm { JNZ 0x7fffa526898d }
    /* +0xaf8968 */ __asm { LEA R8,[0x7fffa55a019b] }
    /* +0xaf896f */ __asm { MOV EAX,0xdd3a8bba }
    /* +0xaf8974 */ __asm { XOR EAX,0x22c33c15 }
    /* +0xaf8979 */ __asm { MOV ECX,EDI }
    /* +0xaf897b */ __asm { ROR EAX,CL }
    /* +0xaf897d */ __asm { MOVSXD RCX,EAX }
    /* +0xaf8980 */ __asm { ADD RCX,R8 }
    /* +0xaf8983 */ __asm { CMP qword ptr [R10 + 0x58],RCX }
    /* +0xaf8987 */ __asm { JZ 0x7fffa526851a }
    /* +0xaf898d */ __asm { MOV R9W,0xdb65 }
    /* +0xaf8992 */ __asm { IMUL R9D,R9D,0x6d23 }
    /* +0xaf8999 */ __asm { ROL R9W,0x1 }
    /* +0xaf899d */ __asm { NOT R9D }
    /* +0xaf89a0 */ __asm { MOVZX ECX,R9W }
    /* +0xaf89a4 */ __asm { MOV R9D,0x380 }
    /* +0xaf89aa */ __asm { ADD R9,qword ptr GS:[RCX] }
    /* +0xaf89ae */ __asm { MOV R8W,0xe3b6 }
    /* +0xaf89b3 */ __asm { IMUL EDX,R8D }
    /* +0xaf89b7 */ __asm { XOR EDX,0xfac2 }
    /* +0xaf89bd */ __asm { MOVZX EDX,DX }
    /* +0xaf89c0 */ __asm { MOV RDX,qword ptr GS:[RDX] }
    /* +0xaf89c4 */ __asm { OR R9,qword ptr [RDX + 0x30] }
    /* +0xaf89c8 */ __asm { MOV RDX,0x1ad8e15298abcb7d }
    /* +0xaf89d2 */ __asm { CMP R9,RDX }
    /* +0xaf89d5 */ __asm { NOP }
    /* +0xaf89d6 */ __asm { NOP }
    /* +0xaf89d7 */ __asm { NOP }
    /* +0xaf89d8 */ __asm { NOP }
    /* +0xaf89d9 */ __asm { NOP }
    /* +0xaf89da */ __asm { PUSH R12 }
    /* +0xaf89dc */ __asm { MOV R9W,0x74c9 }
    /* +0xaf89e1 */ __asm { ADD R9D,0xffff815a }
    /* +0xaf89e8 */ __asm { XOR R9D,0xf7a3 }
    /* +0xaf89ef */ __asm { MOV ECX,EDI }
    /* +0xaf89f1 */ __asm { ROR R9W,CL }
    /* +0xaf89f5 */ __asm { MOVZX EDX,R9W }
    /* +0xaf89f9 */ __asm { MOV R9,qword ptr GS:[RDX] }
    /* +0xaf89fd */ __asm { MOV RDX,0x4b8d0dc637e7109d }
    /* +0xaf8a07 */ __asm { CMP qword ptr [R9 + 0x610],RDX }
    /* +0xaf8a0e */ __asm { JNZ 0x7fffa5268215 }
    /* +0xaf8a14 */ __asm { OR qword ptr [R15 + -0x80617],-0x17ba3801 }
    /* +0xaf8a1f */ __asm { SCASB RDI }
    /* +0xaf8a20 */ __asm { JNS 0x7fffa5268a55 }
    /* +0xaf8a22 */ __asm { CWDE }
    /* +0xaf8a23 */ __asm { MOV R9D,dword ptr [RBP + -0x18] }
    /* +0xaf8a27 */ __asm { JMP 0x7fffa5268a66 }
    /* +0xaf8a29 */ __asm { MOV R9W,0x7bc4 }
}


// ============================================================================
// Function : FUN_7fffa5268b10  |  RVA: 0xaf8b10  |  Size: 7976 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa526941c) */
/* WARNING: Removing unreachable block (ram,0x7fffa5268f17) */
/* WARNING: Removing unreachable block (ram,0x7fffa5269c5d) */
/* WARNING: Removing unreachable block (ram,0x7fffa526a290) */
/* WARNING: Removing unreachable block (ram,0x7fffa5269fde) */
/* WARNING: Removing unreachable block (ram,0x7fffa52698e6) */

int64_t FUN_7fffa5268b10(uint64_t param_1,int64_t *param_2,int *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  char cVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint32_t uVar14;
  int iVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint32_t uVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  int64_t lVar21;
  uint32_t uVar22;
  int64_t lVar23;
  uint64_t *puVar24;
  code *pcVar25;
  uint64_t uVar26;
  uint64_t *puVar27;
  uint64_t *puVar28;
  uint32_t uVar29;
  int iVar30;
  int iVar31;
  uint64_t *puVar32;
  uint64_t uVar33;
  int *piVar34;
  uint8_t auStack_f423d [999605];
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t *puStack_178;
  uint64_t *puStack_170;
  uint64_t *puStack_168;
  int *piStack_160;
  uint64_t uStack_158;
  code *pcStack_150;
  uint64_t *puStack_148;
  uint32_t uStack_13c;
  code *pcStack_138;
  uint64_t *puStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t *puStack_118;
  int64_t lStack_110;
  uint32_t uStack_104;
  uint64_t *puStack_100;
  uint64_t *puStack_f8;
  int64_t *plStack_f0;
  int64_t lStack_e8;
  char *pcStack_e0;
  int64_t lStack_d8;
  uint32_t uStack_cc;
  uint64_t *puStack_c8;
  uint64_t uStack_c0;
  int64_t lStack_b8;
  int64_t lStack_b0;
  int iStack_a4;
  uint64_t *puStack_a0;
  uint64_t *puStack_98;
  uint64_t *puStack_90;
  int64_t lStack_88;
  uint64_t *puStack_80;
  int64_t lStack_78;
  uint32_t uStack_6c;
  uint64_t uStack_68;
  code *pcStack_60;
  
  uStack_cc = *(uint32_t *)(param_1 + 0x110);
  uVar29 = 6;
  if (uStack_cc < 6) {
    uVar29 = uStack_cc;
  }
  uStack_6c = *(uint32_t *)(param_1 + 0x10c);
  uVar10 = 6;
  if (uStack_6c < 6) {
    uVar10 = uStack_6c;
  }
  if (uVar10 < 5) {
    uVar10 = 4;
  }
  lStack_78 = *(int64_t *)(param_1 + 8);
  iVar30 = *param_3;
  lStack_e8 = CONCAT44(lStack_e8._4_4_,iVar30);
  iStack_a4 = param_3[1];
  if (uVar29 < 5) {
    uVar29 = 4;
  }
  uVar14 = *(uint32_t *)(param_1 + 0x2c);
  uVar9 = (uint64_t)uVar14;
  puStack_130 = (uint64_t *)((int64_t)param_4 + param_5 + -0x10);
  uVar22 = ((int)puStack_130 - (int)(uint64_t *)(uVar9 + lStack_78)) + 1;
  uVar11 = 8;
  if (uVar22 < 8) {
    uVar11 = uVar22;
  }
  uVar22 = 0;
  if ((uint64_t *)(uVar9 + lStack_78) <= puStack_130) {
    uVar22 = uVar11;
  }
  puVar3 = *(uint64_t **)(param_1 + 0xf8);
  puStack_178 = (uint64_t *)*puVar3;
  lStack_b8 = puVar3[1];
  puStack_118 = (uint64_t *)((uint64_t)*(uint32_t *)(puVar3 + 3) + lStack_b8);
  uVar11 = *(uint32_t *)(param_1 + 0x18);
  uStack_128 = (uint64_t)uVar11;
  puStack_f8 = (uint64_t *)(uStack_128 + lStack_78);
  pcStack_e0 = (char *)((int64_t)puStack_f8 + (int64_t)puStack_118);
  uStack_120 = (uint64_t)((int)param_4 + (int)puStack_178 == (int)pcStack_e0);
  *(uint32_t *)(param_1 + 300) = 0;
  puVar27 = (uint64_t *)((int64_t)param_4 + uStack_120);
  if (uVar14 < uVar22 + uVar14) {
    iVar31 = *(int *)(param_1 + 0x34);
    uVar26 = *(uint64_t *)(param_1 + 0x60);
    do {
      if (uStack_cc < 6) {
        if (uStack_cc != 5) goto LAB_7fffa5268d25;
        uVar12 = *(int64_t *)(lStack_78 + uVar9) * -0x30e4432345000000;
LAB_7fffa5268d73:
        uVar18 = (uint32_t)((uVar12 ^ uVar26) >> (uint64_t)(0x38 - iVar31));
      }
      else {
        if (((uVar29 + 0x50f4c7cc) * 0x10000 | uVar29 + 0x50f4c7cc >> 0x10) * -0x42ace699 ==
            0x52a2662c) {
          uVar12 = *(int64_t *)(lStack_78 + uVar9) * -0x30e4432340650000;
          goto LAB_7fffa5268d73;
        }
LAB_7fffa5268d25:
        uVar18 = (*(int *)(lStack_78 + uVar9) * -0x61c8864f ^ (uint32_t)uVar26) >>
                 (0x18U - (char)iVar31 & 0x1f);
      }
      *(uint32_t *)(param_1 + 0x40 + (uint64_t)((uint32_t)uVar9 & 7) * 4) = uVar18;
      uVar9 = uVar9 + 1;
    } while (uVar22 + uVar14 != uVar9);
  }
  puVar17 = (uint64_t *)(param_5 + (int64_t)param_4);
  piStack_160 = param_3;
  if (puVar27 < puStack_130) {
    uStack_13c = ((int)lStack_b8 - (int)puStack_178) + uVar11;
    puStack_a0 = (uint64_t *)((int64_t)puVar17 + -7);
    puStack_148 = (uint64_t *)((int64_t)puVar17 + -1);
    puStack_c8 = puVar17 + -4;
    lStack_b0 = lStack_b8 - (uint64_t)uStack_13c;
    puStack_168 = (uint64_t *)((int64_t)puVar17 + -3);
    uVar14 = (uStack_6c * -0x40e00000 | uStack_6c * 0x320adf9 >> 0xb) ^ 0xc0000091;
    uStack_158 = (uint64_t)uVar14;
    uStack_104 = (uint32_t)(uVar14 == 0x7ba1f4fd);
    uStack_c0 = (uint64_t)(0x7ba1f4fc < uVar14);
    puStack_170 = (uint64_t *)(uStack_128 + 8 + lStack_78);
    uStack_180 = param_1;
    puStack_100 = puVar17;
    plStack_f0 = param_2;
    puStack_98 = puVar27;
    puStack_90 = puStack_170;
    puStack_80 = puVar17;
    uStack_68 = uStack_128;
    do {
      puVar20 = puStack_80;
      plVar8 = plStack_f0;
      uVar9 = uStack_180;
      uVar14 = (((int)puVar27 - (int)lStack_78) - iVar30) + 1;
      piVar34 = (int *)((uint64_t)(uVar14 - uStack_13c) + lStack_b8);
      if ((uint32_t)uStack_68 <= uVar14) {
        piVar34 = (int *)(lStack_78 + (uint64_t)uVar14);
      }
      iVar31 = iVar30;
      if ((uVar14 - (uint32_t)uStack_68 < 0xfffffffd) &&
         (puVar28 = (uint64_t *)((int64_t)puVar27 + 1), *piVar34 == *(int *)puVar28)) {
        puVar20 = puVar17;
        if (uVar14 < (uint32_t)uStack_68) {
          puVar20 = puStack_178;
        }
        puVar13 = (uint64_t *)((int64_t)puVar27 + 5);
        puVar24 = (uint64_t *)(piVar34 + 1);
        puVar16 = (uint64_t *)((int64_t)puVar27 + (int64_t)puVar20 + (5 - (int64_t)puVar24));
        if (puVar17 <= puVar16) {
          puVar16 = puVar17;
        }
        puVar17 = puVar13;
        puVar32 = puVar24;
        if (puVar13 < (uint64_t *)((int64_t)puVar16 - 7U)) {
          if (*puVar24 == *puVar13) {
            lVar21 = 0;
LAB_7fffa5269ce0:
            puVar17 = (uint64_t *)((int64_t)puVar27 + lVar21 + 0xd);
            if (puVar17 < (uint64_t *)((int64_t)puVar16 - 7U)) {
              uVar9 = *puVar17;
              uVar26 = *(uint64_t *)((int64_t)piVar34 + lVar21 + 0xc);
              if (uVar26 == uVar9) goto code_r0x7fffa5269cff;
              uVar14 = 0;
              for (uVar9 = uVar9 ^ uVar26; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000
                  ) {
                uVar14 = uVar14 + 1;
              }
              uVar26 = (uint64_t)(uVar14 >> 3) + lVar21 + 8;
              goto LAB_7fffa526a030;
            }
            puVar17 = (uint64_t *)((int64_t)puVar27 + lVar21 + 0xd);
            puVar32 = (uint64_t *)((int64_t)piVar34 + lVar21 + 0xc);
            goto LAB_7fffa5269f8d;
          }
          uVar14 = 0;
          for (uVar9 = *puVar13 ^ *puVar24; (uVar9 & 1) == 0;
              uVar9 = uVar9 >> 1 | 0x8000000000000000) {
            uVar14 = uVar14 + 1;
          }
          uVar26 = (uint64_t)(uVar14 >> 3);
        }
        else {
LAB_7fffa5269f8d:
          if ((puVar17 < (uint64_t *)((int64_t)puVar16 - 3U)) && ((int)*puVar32 == (int)*puVar17))
          {
            puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            puVar17 = (uint64_t *)((int64_t)puVar17 + 4);
          }
          if ((puVar17 < (uint64_t *)((int64_t)puVar16 - 1U)) &&
             ((short)*puVar32 == (short)*puVar17)) {
            puVar17 = (uint64_t *)((int64_t)puVar17 + 2);
            puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
          }
          if (puVar17 < puVar16) {
            puVar17 = (uint64_t *)
                      ((int64_t)puVar17 + (uint64_t)((char)*puVar32 == (char)*puVar17));
          }
          uVar26 = (int64_t)puVar17 - (int64_t)puVar13;
        }
LAB_7fffa526a030:
        if ((uint64_t *)((int64_t)puVar24 + uVar26) == puVar20) {
          puVar13 = (uint64_t *)((int64_t)puVar13 + uVar26);
          puVar17 = puVar13;
          puVar20 = puStack_f8;
          if (puVar13 < puStack_a0) {
            if (*puStack_f8 == *puVar13) {
              puVar17 = (uint64_t *)((int64_t)puVar27 + uVar26 + 0xd);
              puVar24 = puVar17;
              puVar20 = puStack_90;
              if (puVar17 < puStack_a0) {
LAB_7fffa526a090:
                if (*puVar20 == *puVar17) goto code_r0x7fffa526a09f;
                uVar14 = 0;
                for (uVar9 = *puVar20 ^ *puVar17; (uVar9 & 1) == 0;
                    uVar9 = uVar9 >> 1 | 0x8000000000000000) {
                  uVar14 = uVar14 + 1;
                }
                uVar9 = (int64_t)puVar24 + ((uint64_t)(uVar14 >> 3) - (int64_t)puVar13);
                goto LAB_7fffa526a149;
              }
              goto LAB_7fffa526a0b5;
            }
            uVar14 = 0;
            for (uVar9 = *puStack_f8 ^ *puVar13; (uVar9 & 1) == 0;
                uVar9 = uVar9 >> 1 | 0x8000000000000000) {
              uVar14 = uVar14 + 1;
            }
            uVar9 = (uint64_t)(uVar14 >> 3);
          }
          else {
LAB_7fffa526a0b5:
            if ((puVar17 < puStack_168) && ((int)*puVar20 == (int)*puVar17)) {
              puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
              puVar17 = (uint64_t *)((int64_t)puVar17 + 4);
            }
            if ((puVar17 < puStack_148) && ((short)*puVar20 == (short)*puVar17)) {
              puVar17 = (uint64_t *)((int64_t)puVar17 + 2);
              puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
            }
            if (puVar17 < puStack_80) {
              puVar17 = (uint64_t *)
                        ((int64_t)puVar17 + (uint64_t)((char)*puVar20 == (char)*puVar17));
            }
            uVar9 = (int64_t)puVar17 - (int64_t)puVar13;
          }
LAB_7fffa526a149:
          uVar26 = uVar26 + uVar9;
        }
        uVar26 = uVar26 + 4;
        uStack_188 = 1;
        puVar17 = puStack_80;
        param_1 = uStack_180;
        puStack_98 = puVar27;
LAB_7fffa526a155:
        puVar27 = (uint64_t *)param_2[3];
        uVar9 = (int64_t)puVar28 - (int64_t)param_4;
        if (puStack_c8 < puVar28) {
          puVar17 = puVar27;
          if (param_4 <= puStack_c8) {
            uVar12 = param_4[1];
            *puVar27 = *param_4;
            puVar27[1] = uVar12;
            puVar17 = (uint64_t *)((int64_t)puVar27 + ((int64_t)puStack_c8 - (int64_t)param_4));
            if (0x10 < (int64_t)puStack_c8 - (int64_t)param_4) {
              lVar21 = 0x10;
              do {
                uVar5 = ((uint64_t *)((int64_t)param_4 + lVar21))[1];
                *(uint64_t *)((int64_t)puVar27 + lVar21) =
                     *(uint64_t *)((int64_t)param_4 + lVar21);
                ((uint64_t *)((int64_t)puVar27 + lVar21))[1] = uVar5;
                puVar3 = (uint64_t *)((int64_t)param_4 + lVar21 + 0x10);
                uVar5 = puVar3[1];
                puVar2 = (uint64_t *)((int64_t)puVar27 + lVar21 + 0x10);
                *puVar2 = *puVar3;
                puVar2[1] = uVar5;
                lVar23 = lVar21 + 0x20;
                lVar21 = lVar21 + 0x20;
              } while ((uint64_t *)((int64_t)puVar27 + lVar23) < puVar17);
            }
            param_4 = puStack_c8;
          }
          if (param_4 < puVar28) {
            uVar12 = (int64_t)puVar28 - (int64_t)param_4;
            if ((uint64_t)((int64_t)puVar17 - (int64_t)param_4) < 0x20 || uVar12 < 4) {
LAB_7fffa526a2a1:
              puVar27 = puVar17;
            }
            else {
              if (uVar12 < 0x20) {
                uVar33 = 0;
              }
              else {
                uVar33 = uVar12 & 0xffffffffffffffe0;
                lVar21 = 0;
                while( true ) {
                  uVar5 = *(uint64_t *)((int64_t)param_4 + lVar21);
                  uVar6 = ((uint64_t *)((int64_t)param_4 + lVar21))[1];
                  puVar3 = (uint64_t *)((int64_t)param_4 + lVar21 + 0x10);
                  uVar7 = puVar3[1];
                  puVar2 = (uint64_t *)((int64_t)puVar17 + lVar21 + 0x10);
                  *puVar2 = *puVar3;
                  puVar2[1] = uVar7;
                  *(uint64_t *)((int64_t)puVar17 + lVar21) = uVar5;
                  ((uint64_t *)((int64_t)puVar17 + lVar21))[1] = uVar6;
                  if (uVar33 - 0x20 == lVar21) break;
                  lVar21 = lVar21 + 0x20;
                }
                if (uVar12 == uVar33) goto LAB_7fffa526a440;
                if ((uVar12 & 0x1c) == 0) {
                  param_4 = (uint64_t *)((int64_t)param_4 + uVar33);
                  puVar17 = (uint64_t *)((int64_t)puVar17 + uVar33);
                  goto LAB_7fffa526a2a1;
                }
              }
              uVar19 = uVar12 & 0xfffffffffffffffc;
              puVar27 = (uint64_t *)((int64_t)puVar17 + uVar19);
              do {
                *(uint32_t *)((int64_t)puVar17 + uVar33) =
                     *(uint32_t *)((int64_t)param_4 + uVar33);
                uVar33 = uVar33 + 4;
              } while (uVar19 != uVar33);
              if (uVar12 == uVar19) goto LAB_7fffa526a440;
              param_4 = (uint64_t *)((int64_t)param_4 + uVar19);
            }
            uVar12 = (uint64_t)((int)puVar28 - (int)param_4 & 7);
            puVar17 = param_4;
            if (uVar12 != 0) {
              do {
                *(char *)puVar27 = (char)*puVar17;
                puVar27 = (uint64_t *)((int64_t)puVar27 + 1);
                puVar17 = (uint64_t *)((int64_t)puVar17 + 1);
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            if ((uint64_t)((int64_t)param_4 - (int64_t)puVar28) < 0xfffffffffffffff9) {
              lVar21 = 0;
              do {
                *(uint8_t *)((int64_t)puVar27 + lVar21) =
                     *(uint8_t *)((int64_t)puVar17 + lVar21);
                *(uint8_t *)((int64_t)puVar27 + lVar21 + 1) =
                     *(uint8_t *)((int64_t)puVar17 + lVar21 + 1);
                *(uint8_t *)((int64_t)puVar27 + lVar21 + 2) =
                     *(uint8_t *)((int64_t)puVar17 + lVar21 + 2);
                *(uint8_t *)((int64_t)puVar27 + lVar21 + 3) =
                     *(uint8_t *)((int64_t)puVar17 + lVar21 + 3);
                *(uint8_t *)((int64_t)puVar27 + lVar21 + 4) =
                     *(uint8_t *)((int64_t)puVar17 + lVar21 + 4);
                *(uint8_t *)((int64_t)puVar27 + lVar21 + 5) =
                     *(uint8_t *)((int64_t)puVar17 + lVar21 + 5);
                *(uint8_t *)((int64_t)puVar27 + lVar21 + 6) =
                     *(uint8_t *)((int64_t)puVar17 + lVar21 + 6);
                *(uint8_t *)((int64_t)puVar27 + lVar21 + 7) =
                     *(uint8_t *)((int64_t)puVar17 + lVar21 + 7);
                lVar23 = lVar21 + 8;
                lVar21 = lVar21 + 8;
              } while ((uint64_t *)((int64_t)puVar17 + lVar23) != puVar28);
            }
          }
LAB_7fffa526a440:
          lVar21 = param_2[1];
          param_2[3] = param_2[3] + uVar9;
          if (0xffff < uVar9) {
            *(uint32_t *)(param_2 + 9) = 1;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar21 - *param_2) >> 3);
          }
          puVar17 = puStack_80;
          param_1 = uStack_180;
        }
        else {
          uVar12 = param_4[1];
          *puVar27 = *param_4;
          puVar27[1] = uVar12;
          if (0x10 < uVar9) {
            lVar21 = param_2[3];
            uVar12 = param_4[3];
            *(uint64_t *)(lVar21 + 0x10) = param_4[2];
            *(uint64_t *)(lVar21 + 0x18) = uVar12;
            if (0x20 < (int64_t)uVar9) {
              lVar23 = 0;
              do {
                puVar2 = (uint64_t *)((int64_t)param_4 + lVar23 + 0x20);
                uVar5 = puVar2[1];
                puVar3 = (uint64_t *)(lVar21 + 0x20 + lVar23);
                *puVar3 = *puVar2;
                puVar3[1] = uVar5;
                puVar3 = (uint64_t *)((int64_t)param_4 + lVar23 + 0x30);
                uVar5 = puVar3[1];
                puVar2 = (uint64_t *)(lVar21 + 0x30 + lVar23);
                *puVar2 = *puVar3;
                puVar2[1] = uVar5;
                lVar1 = lVar21 + 0x20 + lVar23;
                lVar23 = lVar23 + 0x20;
              } while (lVar1 + 0x20U < lVar21 + uVar9);
            }
            goto LAB_7fffa526a440;
          }
          lVar21 = param_2[1];
          param_2[3] = param_2[3] + uVar9;
        }
        *(short *)(lVar21 + 4) = (short)uVar9;
        *(int *)param_2[1] = (int)uStack_188;
        if (0xffff < uVar26 - 3) {
          *(uint32_t *)(param_2 + 9) = 2;
          *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
        }
        *(short *)(param_2[1] + 6) = (short)(uVar26 - 3);
        param_2[1] = param_2[1] + 8;
        if (*(int *)(param_1 + 300) != 0) {
          lStack_e8 = CONCAT44(lStack_e8._4_4_,iVar31);
          uVar14 = *(uint32_t *)(param_1 + 0x2c);
          uVar9 = (uint64_t)uVar14;
          uVar22 = ((int)puStack_130 - (int)(uint64_t *)(lStack_78 + uVar9)) + 1;
          if (7 < uVar22) {
            uVar22 = 8;
          }
          if (puStack_130 < (uint64_t *)(lStack_78 + uVar9)) {
            uVar22 = 0;
          }
          if (uVar14 < uVar22 + uVar14) {
            uVar12 = *(uint64_t *)(uStack_180 + 0x60);
            cVar4 = (char)*(uint32_t *)(uStack_180 + 0x34);
            do {
              if (uVar29 < 6) {
                if (uVar29 != 5) goto LAB_7fffa526a5e2;
                lVar21 = *(int64_t *)(lStack_78 + uVar9);
                lVar23 = -0x30e4432345000000;
LAB_7fffa526a646:
                uVar18 = (uint32_t)((lVar21 * lVar23 ^ uVar12) >> (0x38U - cVar4 & 0x3f));
              }
              else {
                if (((uVar29 | 0x4c0) << 0x12 | 0xe459) == 0x1318e459) {
                  lVar21 = *(int64_t *)(lStack_78 + uVar9);
                  lVar23 = -0x30e4432340650000;
                  goto LAB_7fffa526a646;
                }
LAB_7fffa526a5e2:
                uVar18 = (*(int *)(lStack_78 + uVar9) * -0x61c8864f ^ (uint32_t)uVar12) >>
                         (0x18U - cVar4 & 0x1f);
              }
              *(uint32_t *)(uStack_180 + 0x40 + (uint64_t)((uint32_t)uVar9 & 7) * 4) = uVar18;
              if ((uint64_t)(uVar22 + uVar14) - 1 == uVar9) break;
              uVar9 = uVar9 + 1;
            } while( true );
          }
          *(uint32_t *)(uStack_180 + 300) = 0;
          puVar17 = puStack_80;
          param_1 = uStack_180;
        }
        param_4 = (uint64_t *)((int64_t)puVar28 + uVar26);
        if (puStack_130 < param_4) {
          puVar27 = param_4;
          iVar30 = iVar31;
          goto LAB_7fffa5268fb2;
        }
        iVar15 = iStack_a4;
        do {
          iStack_a4 = iVar31;
          uVar14 = ((int)param_4 - (int)lStack_78) - iVar15;
          lVar21 = lStack_78;
          if (uVar14 < (uint32_t)uStack_68) {
            lVar21 = lStack_b0;
          }
          if ((0xfffffffc < uVar14 - uVar11) ||
             (piVar34 = (int *)(lVar21 + (uint64_t)uVar14), *piVar34 != (int)*param_4)) {
            puVar27 = param_4;
            iVar30 = iStack_a4;
            iStack_a4 = iVar15;
            break;
          }
          puVar27 = puVar17;
          if (uVar14 < (uint32_t)uStack_68) {
            puVar27 = puStack_178;
          }
          puVar20 = (uint64_t *)((int64_t)param_4 + 4);
          puVar28 = (uint64_t *)(piVar34 + 1);
          puVar24 = (uint64_t *)((int64_t)param_4 + (int64_t)puVar27 + (4 - (int64_t)puVar28));
          if (puVar17 <= puVar24) {
            puVar24 = puVar17;
          }
          puVar13 = puVar20;
          puVar16 = puVar28;
          if (puVar20 < (uint64_t *)((int64_t)puVar24 - 7U)) {
            if (*puVar28 == *puVar20) {
              lVar21 = 0xc;
LAB_7fffa526a7d0:
              puVar13 = (uint64_t *)((int64_t)param_4 + lVar21);
              if (puVar13 < (uint64_t *)((int64_t)puVar24 - 7U)) {
                if (*(uint64_t *)((int64_t)piVar34 + lVar21) == *puVar13)
                goto code_r0x7fffa526a7e9;
                uVar14 = 0;
                for (uVar9 = *(uint64_t *)((int64_t)piVar34 + lVar21) ^ *puVar13; (uVar9 & 1) == 0
                    ; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
                  uVar14 = uVar14 + 1;
                }
                uVar9 = ((uint64_t)(uVar14 >> 3) + lVar21) - 4;
                goto LAB_7fffa526a86e;
              }
              puVar16 = (uint64_t *)((int64_t)piVar34 + lVar21);
              goto LAB_7fffa526a803;
            }
            uVar14 = 0;
            for (uVar9 = *puVar20 ^ *puVar28; (uVar9 & 1) == 0;
                uVar9 = uVar9 >> 1 | 0x8000000000000000) {
              uVar14 = uVar14 + 1;
            }
            uVar9 = (uint64_t)(uVar14 >> 3);
          }
          else {
LAB_7fffa526a803:
            if ((puVar13 < (uint64_t *)((int64_t)puVar24 - 3U)) &&
               ((int)*puVar16 == (int)*puVar13)) {
              puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
              puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
            }
            if ((puVar13 < (uint64_t *)((int64_t)puVar24 - 1U)) &&
               ((short)*puVar16 == (short)*puVar13)) {
              puVar13 = (uint64_t *)((int64_t)puVar13 + 2);
              puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
            }
            if (puVar13 < puVar24) {
              puVar13 = (uint64_t *)
                        ((int64_t)puVar13 + (uint64_t)((char)*puVar16 == (char)*puVar13));
            }
            uVar9 = (int64_t)puVar13 - (int64_t)puVar20;
          }
LAB_7fffa526a86e:
          if ((uint64_t *)((int64_t)puVar28 + uVar9) == puVar27) {
            puVar20 = (uint64_t *)((int64_t)puVar20 + uVar9);
            puVar27 = puStack_f8;
            puVar28 = puVar20;
            if (puVar20 < puStack_a0) {
              if (*puStack_f8 == *puVar20) {
                puVar28 = (uint64_t *)((int64_t)param_4 + uVar9 + 0xc);
                lVar21 = (int64_t)param_4 + uVar9 + 4;
                puVar27 = puStack_90;
                do {
                  if (puStack_a0 <= puVar28) goto LAB_7fffa526a990;
                  uVar26 = *puVar27;
                  uVar12 = *puVar28;
                  puVar28 = puVar28 + 1;
                  lVar21 = lVar21 + 8;
                  puVar27 = puVar27 + 1;
                } while (uVar26 == uVar12);
                uVar14 = 0;
                for (uVar12 = uVar12 ^ uVar26; (uVar12 & 1) == 0;
                    uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                  uVar14 = uVar14 + 1;
                }
                uVar26 = ((uint64_t)(uVar14 >> 3) + lVar21) - (int64_t)puVar20;
              }
              else {
                uVar14 = 0;
                for (uVar26 = *puVar20 ^ *puStack_f8; (uVar26 & 1) == 0;
                    uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                  uVar14 = uVar14 + 1;
                }
                uVar26 = (uint64_t)(uVar14 >> 3);
              }
            }
            else {
LAB_7fffa526a990:
              if ((puVar28 < puStack_168) && ((int)*puVar27 == (int)*puVar28)) {
                puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
                puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
              }
              if ((puVar28 < puStack_148) && ((short)*puVar27 == (short)*puVar28)) {
                puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
                puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
              }
              if (puVar28 < puVar17) {
                puVar28 = (uint64_t *)
                          ((int64_t)puVar28 + (uint64_t)((char)*puVar27 == (char)*puVar28));
              }
              uVar26 = (int64_t)puVar28 - (int64_t)puVar20;
            }
            uVar9 = uVar9 + uVar26;
          }
          if (param_4 <= puStack_c8) {
            puVar27 = (uint64_t *)param_2[3];
            uVar26 = param_4[1];
            *puVar27 = *param_4;
            puVar27[1] = uVar26;
          }
          *(uint16_t *)(param_2[1] + 4) = 0;
          *(uint32_t *)param_2[1] = 1;
          if (0xffff < uVar9 + 1) {
            *(uint32_t *)(param_2 + 9) = 2;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
          }
          param_4 = (uint64_t *)((int64_t)param_4 + uVar9 + 4);
          *(short *)(param_2[1] + 6) = (short)(uVar9 + 1);
          param_2[1] = param_2[1] + 8;
          puVar27 = param_4;
          iVar30 = iVar15;
          iVar31 = iVar15;
          iVar15 = iStack_a4;
        } while (param_4 <= puStack_130);
      }
      else {
        uStack_188 = 999999999;
        if (uStack_cc < 5) {
          if (uVar10 < 5) {
            pcStack_60 = (code *)CONCAT44(pcStack_60._4_4_,0xbbfbb5bf);
            pcStack_138 = (code *)CONCAT44(pcStack_138._4_4_,0x3303478c);
            pcStack_150 = FUN_7fffa52476c0;
            lStack_88 = (int64_t)register0x00000020 + -0x19d5515d;
            lStack_e8 = CONCAT44(lStack_e8._4_4_,iVar30);
            lStack_110 = CONCAT44(lStack_110._4_4_,0xc6aaa55d);
            puStack_98 = puVar27;
            uVar26 = FUN_7fffa52476c0(puStack_80,uStack_180);
            uVar26 = ((uVar26 ^ 0x8ed947b7) - 0x44044a41) * 0x3bbe326f51fd5753;
            puVar17 = puVar20;
            param_1 = uVar9;
            puVar27 = puStack_98;
            param_2 = plVar8;
          }
          else if (uStack_6c < 6) {
            uVar12 = ~(uint64_t)puVar27;
            lStack_e8 = ((uint64_t)puVar27 ^ (uint64_t)pcStack_e0) * 0x1ebf775b;
            uVar26 = ~(uint64_t)pcStack_e0;
            lVar21 = (uVar26 & uVar12) * -0x4da0b4bf + lStack_e8 +
                     ((uint64_t)puVar27 & uVar26) * -0x2d8c7b78;
            pcVar25 = FUN_7fffa55c9280;
            FUN_7fffa55c9280((uVar12 | (uint64_t)pcStack_e0) * -0x2d8c7b79 +
                             (uVar12 | uVar26) * 0x4da0b4be +
                             (uVar12 ^ (uint64_t)pcStack_e0) * 0x6c602c1a + lVar21,&uStack_188,
                             lVar21,(int64_t)puVar17 * -0x1ffff ^ (int64_t)puVar17 * -0x7fffc0000)
            ;
            uVar26 = ((int64_t)pcVar25 << 0x27 | (uint64_t)pcVar25 >> 0x19) ^
                     ((int64_t)pcVar25 << 0x1b | (uint64_t)pcVar25 >> 0x25) ^ (uint64_t)pcVar25;
            uVar26 = (uVar26 << 0xe | uVar26 >> 0x32) ^ (uVar26 << 0x36 | uVar26 >> 10) ^ uVar26;
            uVar26 = (uVar26 << 0x2c | uVar26 >> 0x14) ^ (uVar26 << 0x1c | uVar26 >> 0x24) ^ uVar26;
            uVar26 = (uVar26 << 0x38 | uVar26 >> 8) ^ (uVar26 << 0x18 | uVar26 >> 0x28) ^ uVar26;
            uVar26 = (uVar26 << 0xd | uVar26 >> 0x33) ^ (uVar26 << 0x2a | uVar26 >> 0x16) ^ uVar26;
            uVar26 = (uVar26 << 0x14 | uVar26 >> 0x2c) ^ (uVar26 << 0x1a | uVar26 >> 0x26) ^ uVar26;
            uVar26 = (uVar26 << 0x28 | uVar26 >> 0x18) ^ (uVar26 << 0x34 | uVar26 >> 0xc) ^ uVar26;
            uVar26 = (uVar26 << 0x10 | uVar26 >> 0x30) ^ (uVar26 << 0x28 | uVar26 >> 0x18) ^ uVar26;
            uVar26 = (uVar26 << 0x20 | uVar26 >> 0x20) ^ (uVar26 << 0x10 | uVar26 >> 0x30) ^ uVar26;
            uVar12 = (uVar26 << 0x2d | uVar26 >> 0x13) ^ (uVar26 << 0x16 | uVar26 >> 0x2a) ^
                     (uVar26 << 0x20 | uVar26 >> 0x20);
            uVar12 = (uVar12 << 0x2c | uVar12 >> 0x14) ^ (uVar12 << 0x1a | uVar12 >> 0x26) ^ uVar12;
            uVar12 = (uVar12 << 0x18 | uVar12 >> 0x28) ^ (uVar12 << 0x34 | uVar12 >> 0xc) ^ uVar12;
            uVar12 = (uVar12 << 0x28 | uVar12 >> 0x18) ^ (uVar12 << 0x30 | uVar12 >> 0x10) ^ uVar12;
            uVar26 = (uVar12 << 0x20 | uVar12 >> 0x20) ^ (uVar12 << 0x10 | uVar12 >> 0x30);
LAB_7fffa5269de8:
            uVar26 = (uVar26 ^ uVar12) << 0x20 | (uVar26 ^ uVar12) >> 0x20;
            param_1 = uVar9;
          }
          else {
            lVar21 = -0x38147459;
            FUN_7fffa5285090((param_1 << 0x1c | param_1 >> 0x24) ^ (param_1 << 0x3b | param_1 >> 5)
                             ^ param_1,0xacc8a187,puVar27,&uStack_188);
            uVar26 = lVar21 - (lVar21 << 0x2f);
          }
joined_r0x7fffa5269df3:
          if (3 < uVar26) {
LAB_7fffa5269ea0:
            puVar28 = puVar27;
            if (3 < uStack_188) {
              uVar9 = (int64_t)puVar27 + (-0xfffffffd - (lStack_78 + uStack_188));
              lVar21 = lStack_78;
              puVar20 = puStack_f8;
              if ((uint32_t)uVar9 < (uint32_t)uStack_68) {
                lVar21 = lStack_b0;
                puVar20 = puStack_118;
              }
              if ((param_4 < puVar27) &&
                 (uVar9 = uVar9 & 0xffffffff, puVar20 < (uint64_t *)(lVar21 + uVar9))) {
                puVar27 = (uint64_t *)(lVar21 + uVar9);
                while( true ) {
                  puVar24 = (uint64_t *)((int64_t)puVar28 + -1);
                  puVar27 = (uint64_t *)((int64_t)puVar27 + -1);
                  if (*(char *)puVar24 != *(char *)puVar27) break;
                  puVar28 = puVar24;
                  if (puVar24 <= param_4 || puVar27 <= puVar20) {
                    uVar26 = uVar26 + 1;
                    break;
                  }
                  uVar26 = uVar26 + 1;
                }
              }
              iVar31 = (int)uStack_188 + -3;
              iStack_a4 = iVar30;
            }
            goto LAB_7fffa526a155;
          }
        }
        else {
          if (uStack_cc != 5) {
            if (uVar10 < 5) {
              pcVar25 = FUN_7fffa55f99b0;
              uVar9 = param_1 + 0xbcfe81c ^ 0x6cd57e50;
              FUN_7fffa55f99b0(puVar17,0xcb552f47,0x7fffa55fef3e,
                               (uVar9 << 0x39 | uVar9 >> 7) ^
                               (uVar9 << 0x18 | param_1 + 0xbcfe81c >> 0x28) ^ uVar9);
              uVar26 = ((int64_t)pcVar25 << 9 | (uint64_t)pcVar25 >> 0x37) ^ (uint64_t)pcVar25 ^
                       ((int64_t)pcVar25 << 7 | (uint64_t)pcVar25 >> 0x39);
              uVar26 = (uVar26 << 0xe | uVar26 >> 0x32) ^ (uVar26 << 0x12 | uVar26 >> 0x2e) ^ uVar26
              ;
              uVar26 = (uVar26 << 0x1c | uVar26 >> 0x24) ^ (uVar26 << 0x24 | uVar26 >> 0x1c) ^
                       uVar26;
              uVar26 = (uVar26 << 0x38 | uVar26 >> 8) ^ (uVar26 << 8 | uVar26 >> 0x38) ^ uVar26;
              uVar12 = uVar26 << 0x10 | uVar26 >> 0x30;
              uVar33 = uVar26 << 0x30 | uVar26 >> 0x10;
LAB_7fffa5269cae:
              uVar26 = uVar33 ^ uVar12 ^ uVar26;
            }
            else {
              if (5 < uStack_6c) {
                FUN_7fffa5264470(puVar17,FUN_7fffa5264470,param_1,
                                 (int64_t)&uStack_188 << 0x2e | (uint64_t)&uStack_188 >> 0x12);
                piVar34 = piVar34 + -0x1ccb9eda;
                uVar12 = ((int64_t)piVar34 * 0x40000 | (uint64_t)piVar34 >> 0x2e) ^
                         ((int64_t)piVar34 * 0x800000 | (uint64_t)piVar34 >> 0x29) ^
                         (uint64_t)piVar34;
                uVar12 = (uVar12 << 0x24 | uVar12 >> 0x1c) ^ (uVar12 << 0x2e | uVar12 >> 0x12) ^
                         uVar12;
                uVar12 = (uVar12 << 0x1c | uVar12 >> 0x24) ^ (uVar12 << 8 | uVar12 >> 0x38) ^ uVar12
                ;
                uVar12 = (uVar12 << 0x10 | uVar12 >> 0x30) ^ (uVar12 << 0x38 | uVar12 >> 8) ^ uVar12
                ;
                uVar26 = (uVar12 << 0x30 | uVar12 >> 0x10) ^ (uVar12 << 0x20 | uVar12 >> 0x20);
                uVar9 = param_1;
                goto LAB_7fffa5269de8;
              }
              lStack_88 = CONCAT44(lStack_88._4_4_,0xf54137cf);
              pcStack_60 = (code *)0xbf228128;
              lStack_e8 = CONCAT44(lStack_e8._4_4_,iVar30);
              pcStack_150 = (code *)CONCAT44(pcStack_150._4_4_,0x92ca22cd);
              lStack_d8 = (int64_t)puVar17 - ((int64_t)puVar17 << 0x24);
              lStack_110 = (uStack_120 ^ (uint64_t)puStack_170) - ~(uint64_t)puStack_100;
              pcStack_138 = FUN_7fffa54921c0;
              uVar12 = uStack_180 << 0x24 ^ uStack_180;
              uVar26 = uVar12 ^ (uVar12 >> 1 | (uint64_t)((uVar12 & 1) != 0) << 0x3f);
              puVar17 = &uStack_188;
              puStack_98 = puVar27;
              FUN_7fffa54921c0(lStack_d8,uVar26,FUN_7fffa54921c0,
                               (uVar26 ^ (uVar12 << 9 | uVar12 >> 0x37)) + 0xa64eff1);
              uVar26 = (uint64_t)puVar17 ^ 0xffffffff92ca22cd;
              puVar17 = puVar20;
              param_1 = uVar9;
            }
            goto joined_r0x7fffa5269df3;
          }
          if (uStack_6c < 5) {
            uVar9 = (uint64_t)&uStack_188 >> 9 ^ (uint64_t)&uStack_188;
            FUN_7fffa4cf1f40(puVar17);
            uVar9 = uVar9 * -0x5555555555555555;
            uVar26 = (uVar9 >> 0x32 ^ uVar9 >> 0x19 ^ uVar9) - 0x9d74a442;
          }
          else {
            if (uStack_6c != 5) {
              lStack_e8 = CONCAT44(lStack_e8._4_4_,iVar30);
              uVar14 = (uint32_t)~uStack_158;
              pcStack_60 = FUN_7fffa5474f70;
              pcStack_150 = (code *)((int64_t)&uStack_188 * 0x55004a4d);
              uVar12 = (~uStack_158 & ~uStack_c0 & 0xfffffffffffffffe) * 0xaf29f680 +
                       (uint64_t)(uVar14 & (uint32_t)uStack_c0 & 1) * 0xeca8f5e7 +
                       ((uStack_c0 ^ 1) & uStack_158) * 0x3559fef3 +
                       (uStack_c0 & 0xfffffffffffffffe & uStack_158) * 0xb74ef6f4 +
                       ((uint64_t)((uint32_t)uStack_c0 | uVar14) | 0xfffffffffffffffe) * -0x4fa820d7;
              puStack_98 = puVar27;
              FUN_7fffa5474f70((uint64_t)puVar27 >> 0x26 ^ (uint64_t)puVar27);
              uVar26 = uVar12 ^ 0xd7c12ac9;
              uVar26 = (uVar26 << 1 | (uint64_t)((int64_t)uVar26 < 0)) ^
                       (uVar26 << 3 | uVar12 >> 0x3d) ^ uVar26;
              uVar26 = (uVar26 << 6 | uVar26 >> 0x3a) ^ (uVar26 << 2 | uVar26 >> 0x3e) ^ uVar26;
              uVar26 = (uVar26 << 4 | uVar26 >> 0x3c) ^ (uVar26 << 0xc | uVar26 >> 0x34) ^ uVar26;
              uVar26 = (uVar26 << 8 | uVar26 >> 0x38) ^ (uVar26 << 0x18 | uVar26 >> 0x28) ^ uVar26;
              uVar12 = uVar26 << 0x30 | uVar26 >> 0x10;
              uVar33 = uVar26 << 0x10 | uVar26 >> 0x30;
              puVar17 = puVar20;
              param_1 = uVar9;
              param_2 = plVar8;
              goto LAB_7fffa5269cae;
            }
            uVar9 = (param_1 << 4 | param_1 >> 0x3c) ^ (param_1 << 3 | param_1 >> 0x3d) ^ param_1;
            uVar12 = uVar9 << 0x39 | uVar9 >> 7;
            uVar26 = uVar12 ^ (uVar9 << 0x10 | uVar9 >> 0x30) ^ (uVar9 << 0x15 | uVar9 >> 0x2b);
            puStack_98 = puVar27;
            FUN_7fffa5175f20(uVar26,uVar12,puVar27,0x6ccddbb3);
            uVar26 = uVar26 - 0xc000012d;
          }
          if (3 < uVar26) goto LAB_7fffa5269ea0;
        }
        *(uint32_t *)(param_1 + 300) =
             (uint32_t)(0x7ff < (uint64_t)((int64_t)puVar27 - (int64_t)param_4));
        puVar27 = (uint64_t *)
                  ((int64_t)puVar27 + ((uint64_t)((int64_t)puVar27 - (int64_t)param_4) >> 8) + 1
                  );
LAB_7fffa5268fb2:
      }
    } while (puVar27 < puStack_130);
  }
  *piStack_160 = iVar30;
  piStack_160[1] = iStack_a4;
  return (int64_t)puVar17 - (int64_t)param_4;
code_r0x7fffa5269cff:
  lVar21 = lVar21 + 8;
  goto LAB_7fffa5269ce0;
code_r0x7fffa526a09f:
  puVar17 = puVar17 + 1;
  puVar24 = puVar24 + 1;
  puVar20 = puVar20 + 1;
  if (puStack_a0 <= puVar17) goto LAB_7fffa526a0b5;
  goto LAB_7fffa526a090;
code_r0x7fffa526a7e9:
  lVar21 = lVar21 + 8;
  goto LAB_7fffa526a7d0;
}


// ============================================================================
// Function : FUN_7fffa526aab0  |  RVA: 0xafaab0  |  Size: 286 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa526aab0(void)

{
  code *pcVar1;
  uint32_t in_EAX;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t in_R10;
  uint8_t **ppuStack_20;
  uint8_t *puStack_18;
  uint64_t uStack_10;
  
  uVar3 = in_R10 * 0xfffc000fffc001 - 0x6195d80f;
  lVar2 = (*(code *)&DAT_7ff8504e1240)
                    (*(uint64_t *)
                      (*(int64_t *)((uint64_t)((in_EAX ^ 0x8f6e) & 0xffff) + 0xff00000000) + 0x30)
                     ,0,uVar3 << 0x3c ^ uVar3);
  if (lVar2 == 0) {
    uStack_10 = 0;
    puStack_18 = &UNK_7fffa56f57d6 + (short)((uint16_t)(((uint16_t)in_EAX | 1) * -0x3ee5) >> 1 | 0x8000)
    ;
    ppuStack_20 = &PTR_FUN_7fffa56f52d8;
    (*(code *)(&UNK_7fffa4f46848 + (short)((uint16_t)in_EAX ^ 0x2616)))
              (&ppuStack_20,(int64_t)(int)(0x43003376 - (in_EAX + 0x7c8a68d4)) + 0x7fffa58993e4);
    pcVar1 = (code *)__debugbreak();
    (*pcVar1)();
    return;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa526ac10  |  RVA: 0xafac10  |  Size: 3151 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa526ac10(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4
                          )

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  uint8_t bVar10;
  uint64_t in_RAX;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint8_t bVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  uint8_t bVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  int64_t lVar21;
  uint32_t uVar22;
  int64_t lVar23;
  uint32_t uVar24;
  uint8_t bVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  uint64_t *puVar28;
  uint32_t uVar29;
  int64_t in_R10;
  uint64_t uVar30;
  uint64_t *puVar31;
  uint32_t uVar32;
  uint32_t uVar33;
  uint32_t uVar34;
  int64_t lVar35;
  uint64_t uVar36;
  uint64_t *puVar37;
  int iVar38;
  uint32_t uVar39;
  uint64_t *puVar40;
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  char cVar44;
  uint8_t uVar47;
  char cVar48;
  uint8_t uVar49;
  char cVar50;
  uint8_t uVar51;
  char cVar52;
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint32_t auStack_1a8 [66];
  uint64_t uStack_a0;
  uint64_t *puStack_98;
  int64_t lStack_90;
  uint32_t uStack_84;
  uint64_t uStack_80;
  uint64_t *puStack_78;
  uint64_t *puStack_70;
  int64_t lStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t *puStack_48;
  
  uVar26 = (uint32_t)param_4;
  uVar24 = (uVar26 ^ 0xbd60df96) + 0x954a887;
  uVar15 = in_R10 * 0x1000200040008001;
  uVar15 = (in_R10 * 0x20004000800000 | uVar15 >> 0x29) ^
           (in_R10 * 0x200040008000000 | uVar15 >> 0x25) ^ uVar15;
  uVar15 = (uVar15 << 0x2e | uVar15 >> 0x12) ^ (uVar15 << 0x36 | uVar15 >> 10) ^ uVar15;
  uStack_60 = param_4;
  uVar16 = (uVar15 << 0x2c | uVar15 >> 0x14) ^ uVar15;
  uVar30 = (uVar15 << 0x1c | uVar15 >> 0x24) ^ uVar16;
  uVar30 = (uVar30 << 0x38 | uVar30 >> 8) ^ (uVar30 << 0x18 | uVar30 >> 0x28) ^ uVar30;
  uVar15 = in_RAX ^ 0x6f44dc3c;
  puVar31 = (uint64_t *)(uVar15 * 0x5ec56b54b143041);
  uVar30 = uVar30 >> 6 ^ uVar30;
  uVar30 = uVar30 >> 0xc ^ uVar30;
  uVar11 = uVar30 >> 0x18 ^ uVar30;
  uVar36 = uVar30 >> 0x30;
  uVar20 = uVar16 & ~uVar36 & uVar11;
  uVar30 = (uint64_t)((uint32_t)(uint16_t)(uVar30 >> 0x30) & (uint32_t)uVar11);
  bVar14 = (uint8_t)uVar24;
  lVar21 = uVar20 - 0x3c0f1224;
  if (((uVar26 ^ 0xef15b5ab) >> (bVar14 & 0x1f) | (uVar26 ^ 0xef15b5ab) << 0x20 - (bVar14 & 0x1f))
      != 0xa98ae6cc) {
    lVar21 = uVar20 * -0x3c0f1224;
  }
  puStack_98 = (uint64_t *)
               (lVar21 + ((uVar16 ^ uVar30) - (uVar30 & ~uVar16)) * 0x1e6cf46c +
               ((uVar11 ^ uVar36 ^ uVar16) - ((~uVar11 ^ uVar36) & uVar16)) * 0x2bbc18e6 +
               (~uVar16 & (uVar11 ^ uVar36)) * -0x2bbc18e5 +
               ((((~uVar36 | ~uVar11) & uVar16) * -0x1e6cf46b + uVar20 * 0x3c0f1224) -
               (~(uVar36 | uVar11) & uVar16)));
  uVar32 = 1 << (*(uint8_t *)(param_2 + 0x100) & 0x1f);
  uVar22 = 6;
  if (*(uint32_t *)(param_2 + 0x10c) < 6) {
    uVar22 = *(uint32_t *)(param_2 + 0x10c);
  }
  iVar38 = 1 << ((uint8_t)uVar22 & 0x1f);
  lVar21 = *(int64_t *)(param_2 + 8);
  uVar22 = *(uint32_t *)(param_2 + 0x1c);
  uStack_80 = (int64_t)puVar31 - lVar21;
  uVar19 = (uint32_t)uStack_80;
  uVar34 = uVar19 - uVar32;
  if (uVar19 - uVar22 <= uVar32) {
    uVar34 = uVar22;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar34 = uVar22;
  }
  lStack_68 = *(int64_t *)(param_2 + 0x70);
  lVar35 = *(int64_t *)(param_2 + 0x38);
  uStack_50 = *(uint64_t *)(param_2 + 0x60);
  puStack_48 = param_3;
  puStack_70 = puVar31;
  cVar44 = (char)*(int *)(param_2 + 0x34);
  if (*(int *)(param_2 + 300) == 0) {
    uStack_84 = uVar34;
    uVar22 = *(uint32_t *)(param_2 + 0x2c);
    uVar30 = (uint64_t)uVar22;
    lStack_90 = lVar35;
    bVar10 = (uint8_t)param_4;
    lVar23 = lVar35;
    lVar13 = lStack_68;
    if (0x180 < uVar19 - uVar22) {
      if (uVar22 < 0xffffffa0) {
        uVar29 = 0x38 - *(int *)(param_2 + 0x34);
        uStack_58 = (uint64_t)uVar29;
        uVar32 = uVar24 | 1;
        uVar22 = uVar26 | 1;
        uVar33 = uVar22 * 0x3ff7798d + 0x2aa4748d;
        uVar27 = (uVar24 ^ 0x43b2babb) + 0x15cbf38d ^ 0x9efed4f7;
        uStack_a0 = (int64_t)(int)(uVar30 + 0x60);
        if ((uVar27 >> (bVar10 & 0x1f) | uVar27 << 0x20 - (bVar10 & 0x1f)) <
            (uVar33 * 0x40 | uVar33 >> 0x1a) * uVar32) {
          uStack_a0 = uVar30 + 0x60;
        }
        do {
          uVar27 = -0x2696d78e << (bVar10 & 0x1f) | 0xd9692872U >> 0x20 - (bVar10 & 0x1f);
          uVar11 = (uint64_t)((uint32_t)uVar30 & 7);
          if ((uVar22 * 0x654fcbfd + -0x7b594423) * uVar32 <=
              (uVar27 >> (bVar14 & 0x1f) | uVar27 << 0x20 - (bVar14 & 0x1f))) {
            uVar11 = uVar30 - 7;
          }
          uVar20 = *(int64_t *)(lVar21 + 8 + uVar30) * -0x30e4432345000000;
          uVar16 = uVar20 | *(uint64_t *)(param_2 + 0x60);
          if (uVar32 * 0x395217e8 == 0x129e5738) {
            uVar16 = uVar20 ^ *(uint64_t *)(param_2 + 0x60);
          }
          uVar39 = (uint32_t)(uVar16 >> ((uint8_t)uVar29 & 0x3f));
          if ((uVar24 ^ 0x5e724165) - uVar26 < (uVar26 ^ 0x5e78b726) - uVar24) {
            uVar27 = *(uint32_t *)(param_2 + 0x40 + uVar11 * 4);
            *(uint32_t *)(param_2 + 0x40 + uVar11 * 4) = uVar39;
            uVar16 = (uint64_t)(uVar27 >> 2 & 0xffffffc0);
            uVar33 = uVar22 * -0x1de87731 ^ uVar24;
            uVar33 = uVar33 << 0xf | uVar33 >> 0x11;
            bVar18 = *(uint8_t *)(lVar35 + uVar16);
            bVar25 = bVar18 - 1 & 0x3f;
          }
          else {
            uVar27 = *(uint32_t *)(param_2 + 0x40 + uVar11 * 4);
            uVar16 = (uint64_t)(uVar27 >> 2 & 0xffffffc0);
            *(uint32_t *)(param_2 + 0x40 + uVar11 * 4) = uVar39;
            bVar18 = *(uint8_t *)(lVar35 + uVar16);
            bVar25 = bVar18 + 0x3f & 0x3f;
            if ((-0x42315d34 - uVar26) * uVar32 <=
                ((uVar24 ^ 0x7f754b4d) << (bVar10 & 0x1f) |
                (uVar24 ^ 0x7f754b4d) >> 0x20 - (bVar10 & 0x1f)) + 0xa6851163) {
              bVar25 = bVar18 + 0x3f | 0x3f;
            }
            uVar33 = ((uVar26 + 0xb5e2cc23) * 0x10000000 | uVar26 + 0xb5e2cc23 >> 4) * uVar32;
          }
          uVar11 = (uint64_t)bVar25;
          lVar23 = 0x3f;
          if ((bVar18 & 0x3f) != 1) {
            lVar23 = 0;
          }
          if ((int64_t)(int)((uVar26 ^ 0x8ba7ca7f) * uVar32 + uVar33 ^ 0xc92a7cf0) == 0xf165159e) {
            uVar11 = (uint64_t)(uint32_t)(int)(char)bVar25;
          }
          lVar23 = uVar11 + lVar23;
          *(uint8_t *)(lVar35 + uVar16) = (char)lVar23;
          ((uint8_t *)(lVar35 + uVar16))[lVar23] = (char)uVar27;
          *(uint32_t *)(lStack_68 + uVar16 * 4 + lVar23 * 4) = (uint32_t)uVar30;
          uVar30 = uVar30 + 1;
        } while (uStack_a0 != uVar30);
        lVar23 = *(int64_t *)(param_2 + 0x38);
        lVar13 = *(int64_t *)(param_2 + 0x70);
      }
      uVar22 = uVar19 - 0x20;
      uVar30 = (uint64_t)uVar22;
      uVar27 = ((int)((int64_t)puVar31 + 1U) - (int)(lVar21 + uVar30)) + 1;
      uVar32 = 8;
      if (uVar27 < 8) {
        uVar32 = uVar27;
      }
      uVar27 = 0;
      if (lVar21 + uVar30 <= (int64_t)puVar31 + 1U) {
        uVar27 = uVar32;
      }
      uVar32 = (uVar27 + uVar19) - 0x20;
      if (uVar22 < uVar32) {
        iVar9 = *(int *)(param_2 + 0x34);
        uVar11 = *(uint64_t *)(param_2 + 0x60);
        do {
          plVar4 = (int64_t *)(lVar21 + uVar30);
          uVar27 = (uint32_t)uVar30;
          uVar30 = uVar30 + 1;
          *(int *)(param_2 + 0x40 + (uint64_t)(uVar27 & 7) * 4) =
               (int)((*plVar4 * -0x30e4432345000000 ^ uVar11) >> (uint64_t)(0x38 - iVar9));
        } while (uVar32 != (uint32_t)uVar30);
      }
    }
    if (uVar22 < uVar19) {
      lVar17 = *(int64_t *)(param_2 + 8);
      uVar30 = (uint64_t)uVar22;
      uVar39 = *(uint32_t *)(param_2 + 0x34);
      uStack_58._0_1_ = bVar14 | 1;
      do {
        uVar20 = *(int64_t *)(lVar17 + 8 + uVar30) * -0x30e4432345000000;
        uVar22 = (uint32_t)uVar30;
        uVar16 = (uint64_t)(uVar22 & 7);
        uVar30 = uVar30 + 1;
        uVar11 = uVar20 ^ *(uint64_t *)(param_2 + 0x60);
        if ((uint64_t)
            (int64_t)(int)(((0x7c2713f3 - uVar26) * 0x800000 | 0x7c2713f3 - uVar26 >> 9) - uVar24)
            <= (uint64_t)(~(uVar26 ^ 0xc4fb81da) * 0x2375d54f)) {
          uVar11 = uVar20 & *(uint64_t *)(param_2 + 0x60);
        }
        uVar32 = *(uint32_t *)(param_2 + 0x40 + uVar16 * 4);
        uVar20 = (uint64_t)(uVar32 >> 2 & 0xffffffc0);
        *(int *)(param_2 + 0x40 + uVar16 * 4) = (int)(uVar11 >> (0x38U - (char)uVar39 & 0x3f));
        lVar12 = 0;
        if ((uint8_t)(*(uint8_t *)(lVar23 + uVar20) & 0x3f) == (uint8_t)((uint8_t)uStack_58 * -0x54 + bVar10)) {
          lVar12 = 0x3f;
        }
        lVar12 = lVar12 + (uint64_t)(*(uint8_t *)(lVar23 + uVar20) - 1 & 0x3f);
        *(char *)(lVar23 + uVar20) = (char)lVar12;
        *(char *)(lVar23 + uVar20 + lVar12) = (char)uVar32;
        *(uint32_t *)(lVar13 + uVar20 * 4 + lVar12 * 4) = uVar22;
      } while ((uStack_80 & 0xffffffff) != uVar30);
    }
    if (((uVar24 ^ 0x3e2d9bbe) << (bVar10 & 0x1f) | (uVar24 ^ 0x3e2d9bbe) >> 0x20 - (bVar10 & 0x1f))
        < ((uVar24 ^ 0x2ce7b6c3) << 0xc | (uVar24 ^ 0x2ce7b6c3) >> 0x14) * (uVar26 | 1)) {
      *(uint32_t *)(param_2 + 0x2c) = uVar19;
      uVar39 = (uint32_t)
               ((*(int64_t *)(lVar21 + 8 + (uStack_80 & 0xffffffff)) * -0x30e4432345000000 ^
                uStack_50) >> (0x38U - cVar44 & 0x3f));
    }
    else {
      *(uint32_t *)(param_2 + 0x2c) = uVar19;
      uVar39 = (uint32_t)
               ((uStack_50 ^
                *(int64_t *)(lVar21 + 8 + (uStack_80 & 0xffffffff)) * -0x30e4432345000000) >>
               (0x38U - cVar44 & 0x3f));
    }
    uVar24 = *(uint32_t *)(param_2 + 0x40 + (uint64_t)(uVar19 & 7) * 4);
    *(uint32_t *)(param_2 + 0x40 + (uint64_t)(uVar19 & 7) * 4) = uVar39;
  }
  else {
    uVar30 = *puVar31;
    *(uint32_t *)(param_2 + 0x2c) = uVar19;
    uVar24 = (uint32_t)((uStack_50 ^ uVar30 * -0x30e4432345000000) >> (0x38U - cVar44 & 0x3f));
  }
  uVar51 = (uint8_t)(uVar24 >> 0x18);
  uVar49 = (uint8_t)(uVar24 >> 0x10);
  uVar47 = (uint8_t)(uVar24 >> 8);
  auVar45._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar51,uVar51),uVar49),CONCAT14(uVar49,uVar24)) >> 0x20);
  auVar45[3] = uVar47;
  auVar45[2] = uVar47;
  auVar45[0] = (uint8_t)uVar24;
  auVar45[1] = auVar45[0];
  auVar45._8_8_ = 0;
  auVar46 = pshuflw(auVar45,auVar45,0);
  *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + uVar24;
  uVar30 = (uint64_t)(uVar24 >> 2 & 0xffffffc0);
  bVar14 = *(uint8_t *)(lVar35 + uVar30);
  pcVar5 = (char *)(lVar35 + uVar30);
  pcVar6 = (char *)(lVar35 + 0x10 + uVar30);
  pcVar7 = (char *)(lVar35 + 0x20 + uVar30);
  pcVar8 = (char *)(lVar35 + 0x30 + uVar30);
  cVar44 = auVar46[0];
  auVar41[0] = -(*pcVar5 == cVar44);
  cVar48 = auVar46[1];
  auVar41[1] = -(pcVar5[1] == cVar48);
  cVar50 = auVar46[2];
  auVar41[2] = -(pcVar5[2] == cVar50);
  cVar52 = auVar46[3];
  auVar41[3] = -(pcVar5[3] == cVar52);
  auVar41[4] = -(pcVar5[4] == cVar44);
  auVar41[5] = -(pcVar5[5] == cVar48);
  auVar41[6] = -(pcVar5[6] == cVar50);
  auVar41[7] = -(pcVar5[7] == cVar52);
  auVar41[8] = -(pcVar5[8] == cVar44);
  auVar41[9] = -(pcVar5[9] == cVar48);
  auVar41[10] = -(pcVar5[10] == cVar50);
  auVar41[0xb] = -(pcVar5[0xb] == cVar52);
  auVar41[0xc] = -(pcVar5[0xc] == cVar44);
  auVar41[0xd] = -(pcVar5[0xd] == cVar48);
  auVar41[0xe] = -(pcVar5[0xe] == cVar50);
  auVar41[0xf] = -(pcVar5[0xf] == cVar52);
  lVar23 = lStack_68 + uVar30 * 4;
  auVar42[0] = -(*pcVar6 == cVar44);
  auVar42[1] = -(pcVar6[1] == cVar48);
  auVar42[2] = -(pcVar6[2] == cVar50);
  auVar42[3] = -(pcVar6[3] == cVar52);
  auVar42[4] = -(pcVar6[4] == cVar44);
  auVar42[5] = -(pcVar6[5] == cVar48);
  auVar42[6] = -(pcVar6[6] == cVar50);
  auVar42[7] = -(pcVar6[7] == cVar52);
  auVar42[8] = -(pcVar6[8] == cVar44);
  auVar42[9] = -(pcVar6[9] == cVar48);
  auVar42[10] = -(pcVar6[10] == cVar50);
  auVar42[0xb] = -(pcVar6[0xb] == cVar52);
  auVar42[0xc] = -(pcVar6[0xc] == cVar44);
  auVar42[0xd] = -(pcVar6[0xd] == cVar48);
  auVar42[0xe] = -(pcVar6[0xe] == cVar50);
  auVar42[0xf] = -(pcVar6[0xf] == cVar52);
  auVar46[0] = -(*pcVar7 == cVar44);
  auVar46[1] = -(pcVar7[1] == cVar48);
  auVar46[2] = -(pcVar7[2] == cVar50);
  auVar46[3] = -(pcVar7[3] == cVar52);
  auVar46[4] = -(pcVar7[4] == cVar44);
  auVar46[5] = -(pcVar7[5] == cVar48);
  auVar46[6] = -(pcVar7[6] == cVar50);
  auVar46[7] = -(pcVar7[7] == cVar52);
  auVar46[8] = -(pcVar7[8] == cVar44);
  auVar46[9] = -(pcVar7[9] == cVar48);
  auVar46[10] = -(pcVar7[10] == cVar50);
  auVar46[0xb] = -(pcVar7[0xb] == cVar52);
  auVar46[0xc] = -(pcVar7[0xc] == cVar44);
  auVar46[0xd] = -(pcVar7[0xd] == cVar48);
  auVar46[0xe] = -(pcVar7[0xe] == cVar50);
  auVar46[0xf] = -(pcVar7[0xf] == cVar52);
  auVar43[0] = -(*pcVar8 == cVar44);
  auVar43[1] = -(pcVar8[1] == cVar48);
  auVar43[2] = -(pcVar8[2] == cVar50);
  auVar43[3] = -(pcVar8[3] == cVar52);
  auVar43[4] = -(pcVar8[4] == cVar44);
  auVar43[5] = -(pcVar8[5] == cVar48);
  auVar43[6] = -(pcVar8[6] == cVar50);
  auVar43[7] = -(pcVar8[7] == cVar52);
  auVar43[8] = -(pcVar8[8] == cVar44);
  auVar43[9] = -(pcVar8[9] == cVar48);
  auVar43[10] = -(pcVar8[10] == cVar50);
  auVar43[0xb] = -(pcVar8[0xb] == cVar52);
  auVar43[0xc] = -(pcVar8[0xc] == cVar44);
  auVar43[0xd] = -(pcVar8[0xd] == cVar48);
  auVar43[0xe] = -(pcVar8[0xe] == cVar50);
  auVar43[0xf] = -(pcVar8[0xf] == cVar52);
  uVar11 = (uint64_t)
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
                    (uint16_t)(SUB161(auVar46 >> 7,0) & 1) |
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
                    (uint16_t)(auVar46[0xf] >> 7) << 0xf) << 0x20 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar42 >> 7,0) & 1) |
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
                   (uint16_t)(auVar42[0xf] >> 7) << 0xf) << 0x10 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar41 >> 7,0) & 1) |
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
  puStack_78 = (uint64_t *)param_2;
  if (uVar11 != 0) {
    uVar11 = uVar11 >> (bVar14 & 0x3f) | uVar11 << 0x40 - (bVar14 & 0x3f);
    lVar13 = 0;
    do {
      iVar9 = 0;
      for (uVar16 = uVar11; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x8000000000000000) {
        iVar9 = iVar9 + 1;
      }
      uVar24 = iVar9 + (uint32_t)bVar14 & 0x3f;
      if (uVar24 != 0) {
        uVar24 = *(uint32_t *)(lVar23 + (uint64_t)uVar24 * 4);
        if (uVar24 < uVar34) goto LAB_7fffa526b613;
        iVar38 = iVar38 + -1;
        auStack_1a8[lVar13] = uVar24;
        lVar13 = lVar13 + 1;
      }
      uVar11 = uVar11 - 1 & uVar11;
      if ((uVar11 == 0) || (iVar38 == 0)) goto LAB_7fffa526b613;
    } while( true );
  }
  lVar13 = 0;
LAB_7fffa526b613:
  lVar17 = 0x3f;
  if ((bVar14 & 0x3f) != 1) {
    lVar17 = 0;
  }
  lVar17 = lVar17 + (uint64_t)(bVar14 - 1 & 0x3f);
  *(uint8_t *)(lVar35 + uVar30) = (char)lVar17;
  ((uint8_t *)(lVar35 + uVar30))[lVar17] = auVar45[0];
  iVar38 = *(int *)((int64_t)puStack_78 + 0x2c);
  *(int *)((int64_t)puStack_78 + 0x2c) = iVar38 + 1;
  *(int *)(lVar23 + lVar17 * 4) = iVar38;
  if (lVar13 == 0) {
    uVar30 = 3;
  }
  else {
    puVar1 = (uint64_t *)((int64_t)param_3 - 1);
    puVar2 = (uint64_t *)((int64_t)param_3 - 7);
    puVar3 = (uint64_t *)((int64_t)param_3 - 3);
    puStack_78 = puVar31 + 1;
    uVar11 = 3;
    lVar35 = 0;
    do {
      uVar24 = auStack_1a8[lVar35];
      puVar40 = (uint64_t *)(lVar21 + (uint64_t)uVar24);
      if (*(int *)((uVar11 - 3) + (int64_t)puVar40) == *(int *)((int64_t)puVar31 + (uVar11 - 3)))
      {
        puVar37 = puVar31;
        if (puVar31 < puVar2) {
          if (*puVar40 == *puVar31) {
            puVar40 = (uint64_t *)(lVar21 + 8 + (uint64_t)uVar24);
            puVar28 = puVar31;
            puVar37 = puVar31 + 1;
            do {
              param_3 = puStack_48;
              if (puVar2 <= puVar37) goto joined_r0x7fffa526b76c;
              uVar30 = *puVar40;
              uVar16 = *puVar37;
              puVar37 = puVar37 + 1;
              puVar28 = puVar28 + 1;
              puVar40 = puVar40 + 1;
            } while (uVar30 == uVar16);
            uVar26 = 0;
            for (uVar30 = uVar30 ^ uVar16; (uVar30 & 1) == 0;
                uVar30 = uVar30 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            uVar30 = (int64_t)puVar28 + uVar15 * -0x5ec56b54b143041 + (uint64_t)(uVar26 >> 3);
          }
          else {
            uVar26 = 0;
            for (uVar30 = *puVar40 ^ *puVar31; (uVar30 & 1) == 0;
                uVar30 = uVar30 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            uVar30 = (uint64_t)(uVar26 >> 3);
          }
        }
        else {
joined_r0x7fffa526b76c:
          if ((puVar37 < puVar3) && ((int)*puVar40 == (int)*puVar37)) {
            puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
            puVar40 = (uint64_t *)((int64_t)puVar40 + 4);
          }
          if ((puVar37 < puVar1) && ((short)*puVar40 == (short)*puVar37)) {
            puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
            puVar40 = (uint64_t *)((int64_t)puVar40 + 2);
          }
          if (puVar37 < param_3) {
            puVar37 = (uint64_t *)
                      ((int64_t)puVar37 + (uint64_t)((char)*puVar40 == (char)*puVar37));
            param_3 = puStack_48;
          }
          uVar30 = (int64_t)puVar37 + uVar15 * -0x5ec56b54b143041;
        }
        if (uVar11 < uVar30) {
          *puStack_98 = (uint64_t)((uVar19 + 3) - uVar24);
          uVar11 = uVar30;
          if ((uint64_t *)((int64_t)puVar31 + uVar30) == param_3) break;
        }
      }
      lVar35 = lVar35 + 1;
      uVar30 = uVar11;
    } while (lVar35 != lVar13);
  }
  return (uVar30 << 0x3c | uVar30 >> 4) ^ (uVar30 << 0x2e | uVar30 >> 0x12) ^ uVar30;
}


// ============================================================================
// Function : FUN_7fffa526b890  |  RVA: 0xafb890  |  Size: 995 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7fffa526b890(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  
  bRam00007fffa47861ac = 0;
  uRam00007fffa47861db = 0;
  uRam00007fffa47861e3 = 0;
  uRam00007fffa47861cb = 0;
  uRam00007fffa47861d3 = 0;
  uRam00007fffa47861bb = 0;
  uRam00007fffa47861c3 = 0;
  uRam00007fffa47861eb = 0;
  _uRam00007fffa47861ff = 0;
  uVar1 = rdtsc();
  lVar7 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0xb9433a2daccdd55 + 1;
  lVar6 = 3;
  while( true ) {
    lVar7 = lVar7 * 0xb9433a2daccdd55 + 1;
    lVar9 = lVar7 * 0xb9433a2daccdd55 + 1;
    s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[lVar6 + 0x36] = (char)((uint64_t)lVar7 >> 0x20)
    ;
    s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[lVar6 + 0x37] = (char)((uint64_t)lVar9 >> 0x20)
    ;
    if (lVar6 == 0x6b) break;
    lVar9 = lVar9 * 0xb9433a2daccdd55 + 1;
    lVar7 = lVar9 * 0xb9433a2daccdd55 + 1;
    *(char *)(lVar6 + 0x7fffa47861a4) = (char)((uint64_t)lVar9 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47861a5) = (char)((uint64_t)lVar7 >> 0x20);
    lVar6 = lVar6 + 4;
  }
  lVar6 = (uint64_t)((uint32_t)bRam00007fffa47861ac * 0x24924925 + 0x24924925) * 7;
  uVar8 = (uint64_t)(uint32_t)((int)((uint64_t)lVar6 >> 0x20) << 3);
  bVar4 = bRam00007fffa4786204;
  bVar3 = bRam00007fffa4786203;
  bVar2 = bRam00007fffa4786206;
  *(uint8_t *)((int64_t)&uRam00007fffa47861bb + uVar8) =
       (uint8_t)uRam00007fffa47861ff << 3 | (uint8_t)uRam00007fffa47861ff >> 5;
  *(uint8_t *)((int64_t)&uRam00007fffa47861bb + uVar8 + 7) = bVar2 << 3 | bVar2 >> 5;
  bVar5 = bRam00007fffa4786205;
  bVar2 = bRam00007fffa4786201;
  *(uint8_t *)((int64_t)&uRam00007fffa47861bb + uVar8 + 5) = bVar4 << 3 | bVar4 >> 5;
  *(uint8_t *)((int64_t)&uRam00007fffa47861bb + uVar8 + 6) = bVar5 << 3 | bVar5 >> 5;
  *(uint8_t *)((int64_t)&uRam00007fffa47861bb + uVar8 + 2) = bVar2 << 3 | bVar2 >> 5;
  *(uint8_t *)((int64_t)&uRam00007fffa47861bb + uVar8 + 1) =
       uRam00007fffa47861ff._1_1_ << 3 | uRam00007fffa47861ff._1_1_ >> 5;
  bVar2 = bRam00007fffa4786202;
  *(uint8_t *)((int64_t)&uRam00007fffa47861bb + uVar8 + 4) = bVar3 << 3 | bVar3 >> 5;
  *(uint8_t *)((int64_t)&uRam00007fffa47861bb + uVar8 + 3) = bVar2 << 3 | bVar2 >> 5;
  bRam00007fffa47861ac = (char)((uint64_t)lVar6 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa526bc80  |  RVA: 0xafbc80  |  Size: 54214 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa526bc80(void) {
    /* +0xafbc80 */ __asm { PUSH R12 }
    /* +0xafbc82 */ __asm { PUSH R14 }
    /* +0xafbc84 */ __asm { PUSH RSI }
    /* +0xafbc85 */ __asm { PUSH RBP }
    /* +0xafbc86 */ __asm { PUSH RBX }
    /* +0xafbc87 */ __asm { PUSH RDI }
    /* +0xafbc88 */ __asm { PUSH R15 }
    /* +0xafbc8a */ __asm { PUSH R13 }
    /* +0xafbc8c */ __asm { SUB RSP,0x1f8 }
    /* +0xafbc93 */ __asm { MOVDQA xmmword ptr [RSP + 0x1e0],XMM14 }
    /* +0xafbc9d */ __asm { MOVDQA xmmword ptr [RSP + 0x1d0],XMM6 }
    /* +0xafbca6 */ __asm { MOVDQA xmmword ptr [RSP + 0x1c0],XMM13 }
    /* +0xafbcb0 */ __asm { MOVDQA xmmword ptr [RSP + 0x1b0],XMM9 }
    /* +0xafbcba */ __asm { MOVDQA xmmword ptr [RSP + 0x1a0],XMM12 }
    /* +0xafbcc4 */ __asm { MOVDQA xmmword ptr [RSP + 0x190],XMM11 }
    /* +0xafbcce */ __asm { MOVDQA xmmword ptr [RSP + 0x180],XMM10 }
    /* +0xafbcd8 */ __asm { MOVDQA xmmword ptr [RSP + 0x170],XMM8 }
    /* +0xafbce2 */ __asm { MOV RDI,R10 }
    /* +0xafbce5 */ __asm { MOV RBP,RAX }
    /* +0xafbce8 */ __asm { MOVQ RAX,XMM4 }
    /* +0xafbced */ __asm { MOV R11D,0x1ee693ea }
    /* +0xafbcf3 */ __asm { SUB R11,RAX }
    /* +0xafbcf6 */ __asm { MOV R12,-0xc62cb530dce9 }
    /* +0xafbd00 */ __asm { IMUL R12,R11 }
    /* +0xafbd04 */ __asm { MOV R11,R12 }
    /* +0xafbd07 */ __asm { SUB R11,RBP }
    /* +0xafbd0a */ __asm { CMP R11,0x1188 }
    /* +0xafbd11 */ __asm { MOV qword ptr [RSP + 0x90],R10 }
    /* +0xafbd19 */ __asm { JL 0x7fffa5275654 }
    /* +0xafbd1f */ __asm { MOV RBX,RDX }
    /* +0xafbd22 */ __asm { SHL RBX,0x36 }
    /* +0xafbd26 */ __asm { ADD RBX,RDX }
    /* +0xafbd29 */ __asm { MOV R9D,EDI }
    /* +0xafbd2c */ __asm { OR R9D,0x1 }
    /* +0xafbd30 */ __asm { MOVD XMM12,EDI }
    /* +0xafbd35 */ __asm { MOV dword ptr [RSP + 0x70],R9D }
    /* +0xafbd3a */ __asm { MOVD XMM13,R9D }
    /* +0xafbd3f */ __asm { MOVDQA XMM8,xmmword ptr [0x7fffa56bbc10] }
    /* +0xafbd48 */ __asm { MOV RSI,RBP }
    /* +0xafbd4b */ __asm { MOV RAX,R12 }
    /* +0xafbd4e */ __asm { JMP 0x7fffa526bdc4 }
    /* +0xafbd50 */ __asm { MOV R10D,0x32e2f57e }
    /* +0xafbd56 */ __asm { IMUL RAX,R12,-0x6fa244a7 }
    /* +0xafbd5d */ __asm { LEA R11,[0x7fffa527aad6] }
    /* +0xafbd64 */ __asm { MOVQ XMM5,RAX }
    /* +0xafbd69 */ __asm { PSHUFD XMM4,XMM5,0x44 }
    /* +0xafbd6e */ __asm { PADDQ XMM4,XMM8 }
    /* +0xafbd73 */ __asm { SUB R10D,EDI }
    /* +0xafbd76 */ __asm { ROL R10D,0x17 }
    /* +0xafbd7a */ __asm { MOV RAX,RBX }
    /* +0xafbd7d */ __asm { SHL RAX,0x36 }
    /* +0xafbd81 */ __asm { MOV RDX,RBX }
    /* +0xafbd84 */ __asm { SUB RDX,RAX }
    /* +0xafbd87 */ __asm { MOV R9D,0x8b37a40f }
    /* +0xafbd8d */ __asm { ADD R9D,0x710f07f0 }
    /* +0xafbd94 */ __asm { MOV ECX,EDI }
    /* +0xafbd96 */ __asm { ROL R9D,CL }
    /* +0xafbd99 */ __asm { ROL R9D,0xe }
    /* +0xafbd9d */ __asm { MOVSXD RCX,R9D }
    /* +0xafbda0 */ __asm { ADD RCX,R11 }
    /* +0xafbda3 */ __asm { MOV RAX,RBP }
    /* +0xafbda6 */ __asm { CALL RCX }
    /* +0xafbda8 */ __asm { MOV RAX,R15 }
    /* +0xafbdab */ __asm { MOV RBP,RSI }
    /* +0xafbdae */ __asm { MOV R12,R15 }
    /* +0xafbdb1 */ __asm { MOV R11,RAX }
    /* +0xafbdb4 */ __asm { SUB R11,RSI }
    /* +0xafbdb7 */ __asm { CMP R11,0x1187 }
    /* +0xafbdbe */ __asm { JLE 0x7fffa5275654 }
    /* +0xafbdc4 */ __asm { MOV R9D,0xc01900ef }
    /* +0xafbdca */ __asm { MOV ECX,0x2ae1547b }
    /* +0xafbdcf */ __asm { XOR R9D,EDI }
    /* +0xafbdd2 */ __asm { IMUL R9D,R9D,-0x287d4c3 }
    /* +0xafbdd9 */ __asm { IMUL ECX,dword ptr [RSP + 0x70] }
    /* +0xafbdde */ __asm { ROR ECX,0x1 }
    /* +0xafbde0 */ __asm { CMP R9,RCX }
    /* +0xafbde3 */ __asm { MOV qword ptr [RSP + 0x68],RAX }
    /* +0xafbde8 */ __asm { JLE 0x7fffa526be20 }
    /* +0xafbdea */ __asm { MOV RAX,R11 }
    /* +0xafbded */ __asm { MOV RDX,-0x1e1e1e1e1e1e1e1e }
    /* +0xafbdf7 */ __asm { MUL RDX }
    /* +0xafbdfa */ __asm { MOV R10,RDX }
    /* +0xafbdfd */ __asm { MOV RAX,R11 }
    /* +0xafbe00 */ __asm { MOV RDX,0x1e1e1e1e1e1e1e1 }
    /* +0xafbe0a */ __asm { MUL RDX }
    /* +0xafbe0d */ __asm { ADD RAX,R10 }
    /* +0xafbe10 */ __asm { ADC RDX,0x0 }
    /* +0xafbe14 */ __asm { JMP 0x7fffa526be22 }
    /* +0xafbe20 */ __asm { XOR EDX,EDX }
    /* +0xafbe22 */ __asm { XOR R8D,R8D }
    /* +0xafbe25 */ __asm { TEST RBX,RBX }
    /* +0xafbe28 */ __asm { MOV qword ptr [RSP + 0x80],R12 }
    /* +0xafbe30 */ __asm { MOV qword ptr [RSP + 0x168],RSI }
    /* +0xafbe38 */ __asm { JLE 0x7fffa52767a4 }
    /* +0xafbe3e */ __asm { SHLD R8,RDX,0x3f }
    /* +0xafbe43 */ __asm { MOV RAX,R8 }
    /* +0xafbe46 */ __asm { SHL RAX,0x7 }
    /* +0xafbe4a */ __asm { LEA RAX,[RAX + R8*0x8] }
    /* +0xafbe4e */ __asm { MOV qword ptr [RSP + 0x98],RAX }
    /* +0xafbe56 */ __asm { LEA R13,[RSI + RAX*0x1] }
    /* +0xafbe5a */ __asm { MOV R9W,0x7b6d }
    /* +0xafbe5f */ __asm { IMUL ECX,R9D,-0x5565 }
    /* +0xafbe66 */ __asm { NOT ECX }
    /* +0xafbe68 */ __asm { SUB ECX,EDI }
    /* +0xafbe6a */ __asm { MOVSX R14,CX }
    /* +0xafbe6e */ __asm { ADD R14,R12 }
    /* +0xafbe71 */ __asm { MOV R11,R14 }
    /* +0xafbe74 */ __asm { SUB R11,RSI }
    /* +0xafbe77 */ __asm { CMP R11,0x1541 }
    /* +0xafbe7e */ __asm { MOV qword ptr [RSP + 0x38],RBX }
    /* +0xafbe83 */ __asm { MOV qword ptr [RSP + 0x150],R13 }
    /* +0xafbe8b */ __asm { MOV qword ptr [RSP + 0x130],R14 }
    /* +0xafbe93 */ __asm { JL 0x7fffa526c460 }
    /* +0xafbe99 */ __asm { MOV qword ptr [RSP + 0x138],R8 }
    /* +0xafbea1 */ __asm { MOV RAX,R11 }
    /* +0xafbea4 */ __asm { MOV RDX,-0x1e1e1e1e1e1e1e1e }
    /* +0xafbeae */ __asm { MUL RDX }
    /* +0xafbeb1 */ __asm { MOV R10,RDX }
    /* +0xafbeb4 */ __asm { MOV RAX,R11 }
    /* +0xafbeb7 */ __asm { MOV RDX,0x1e1e1e1e1e1e1e1 }
    /* +0xafbec1 */ __asm { MUL RDX }
    /* +0xafbec4 */ __asm { ADD RAX,R10 }
    /* +0xafbec7 */ __asm { ADC RDX,0x1 }
    /* +0xafbecb */ __asm { MOV R11,RDX }
    /* +0xafbece */ __asm { SHR R11,0x3 }
    /* +0xafbed2 */ __asm { MOV RAX,0x3fffffffffffff8 }
    /* +0xafbedc */ __asm { AND RDX,RAX }
    /* +0xafbedf */ __asm { MOV qword ptr [RSP + 0x78],R11 }
    /* +0xafbee4 */ __asm { SHL R11,0x7 }
    /* +0xafbee8 */ __asm { ADD RDX,R11 }
    /* +0xafbeeb */ __asm { LEA R14,[RSI + RDX*0x1] }
    /* +0xafbeef */ __asm { MOV RBX,qword ptr [RSI + RDX*0x1 + 0x80] }
    /* +0xafbef7 */ __asm { CMP RBX,qword ptr [RSI + 0x80] }
    /* +0xafbefe */ __asm { MOV qword ptr [RSP + 0x48],R11 }
    /* +0xafbf03 */ __asm { JBE 0x7fffa526c4f0 }
    /* +0xafbf09 */ __asm { MOVZX ECX,uint8_t ptr [R14 + 0x60] }
    /* +0xafbf0e */ __asm { MOV qword ptr [RSP + 0x158],RCX }
    /* +0xafbf16 */ __asm { MOV RBP,qword ptr [R14 + 0x18] }
    /* +0xafbf1a */ __asm { MOVDQU XMM9,xmmword ptr [R14 + 0x8] }
    /* +0xafbf20 */ __asm { MOV qword ptr [R14 + 0x10],0x0 }
    /* +0xafbf28 */ __asm { MOVDQU XMM6,xmmword ptr [R14 + 0x28] }
    /* +0xafbf2e */ __asm { MOVDQU XMM14,xmmword ptr [R14 + 0x70] }
    /* +0xafbf34 */ __asm { MOV RAX,qword ptr [R14 + 0x40] }
    /* +0xafbf38 */ __asm { MOV qword ptr [RSP + 0x88],RAX }
    /* +0xafbf40 */ __asm { MOV qword ptr [R14 + 0x30],0x0 }
    /* +0xafbf48 */ __asm { MOV RAX,qword ptr [R14 + 0x20] }
    /* +0xafbf4c */ __asm { MOV qword ptr [RSP + 0x140],RAX }
    /* +0xafbf54 */ __asm { MOV R12,qword ptr [R14 + 0x38] }
    /* +0xafbf58 */ __asm { MOV qword ptr [R14 + 0x38],0xf }
    /* +0xafbf60 */ __asm { MOV RBX,qword ptr [R14] }
    /* +0xafbf63 */ __asm { MOVDQU XMM10,xmmword ptr [R14 + 0x48] }
    /* +0xafbf69 */ __asm { MOV RAX,qword ptr [R14 + 0x58] }
    /* +0xafbf6d */ __asm { MOV qword ptr [RSP + 0x50],RAX }
    /* +0xafbf72 */ __asm { MOV qword ptr [R14 + 0x58],0xf }
    /* +0xafbf7a */ __asm { MOV uint8_t ptr [R14 + 0x40],0x0 }
    /* +0xafbf7f */ __asm { MOV uint8_t ptr [R14 + 0x20],0x0 }
    /* +0xafbf84 */ __asm { MOV qword ptr [R14 + 0x18],0xf }
    /* +0xafbf8c */ __asm { MOV uint8_t ptr [R14],0x0 }
    /* +0xafbf90 */ __asm { MOV qword ptr [R14 + 0x50],0x0 }
    /* +0xafbf98 */ __asm { MOV RAX,qword ptr [R14 + 0x61] }
    /* +0xafbf9c */ __asm { MOV RDX,qword ptr [R14 + 0x68] }
    /* +0xafbfa0 */ __asm { MOV qword ptr [RSP + 0xa7],RDX }
    /* +0xafbfa8 */ __asm { MOV qword ptr [RSP + 0xa0],RAX }
    /* +0xafbfb0 */ __asm { MOV qword ptr [R14 + 0x70],0x0 }
    /* +0xafbfb8 */ __asm { MOV qword ptr [R14 + 0x78],0xf }
    /* +0xafbfc0 */ __asm { MOV RAX,qword ptr [R14 + 0x80] }
    /* +0xafbfc7 */ __asm { MOV qword ptr [RSP + 0x148],RAX }
    /* +0xafbfcf */ __asm { MOV uint8_t ptr [R14 + 0x60],0x0 }
    /* +0xafbfd4 */ __asm { CMP qword ptr [R14 + 0x18],0x10 }
    /* +0xafbfd9 */ __asm { JC 0x7fffa526c026 }
    /* +0xafbfdb */ __asm { LEA RAX,[0x7fffa56901a5] }
    /* +0xafbfe2 */ __asm { MOV R9D,0x27746251 }
    /* +0xafbfe8 */ __asm { MOVD XMM5,R9D }
    /* +0xafbfed */ __asm { MOV R11D,0x27b107ca }
    /* +0xafbff3 */ __asm { MOV RDX,qword ptr [R14] }
    /* +0xafbff6 */ __asm { MOV R8,RDX }
    /* +0xafbff9 */ __asm { SHR R8,0x3d }
    /* +0xafbffd */ __asm { XOR R8,RDX }
    /* +0xafc000 */ __asm { PXOR XMM5,XMM12 }
    /* +0xafc005 */ __asm { MOVD R9D,XMM5 }
    /* +0xafc00a */ __asm { ADD R9D,0x238ff8b2 }
    /* +0xafc011 */ __asm { MOVSXD RDX,R9D }
    /* +0xafc014 */ __asm { ADD RDX,RAX }
    /* +0xafc017 */ __asm { IMUL R11D,dword ptr [RSP + 0x70] }
    /* +0xafc01d */ __asm { ADD R11D,0xa150784b }
    /* +0xafc024 */ __asm { CALL RDX }
    /* +0xafc026 */ __asm { LEA R13,[R14 + 0x20] }
    /* +0xafc02a */ __asm { MOV qword ptr [R14 + 0x18],0xf }
    /* +0xafc032 */ __asm { MOV qword ptr [R14 + 0x10],0x0 }
    /* +0xafc03a */ __asm { MOV RAX,qword ptr [R14 + 0x38] }
    /* +0xafc03e */ __asm { MOV uint8_t ptr [R14],0x0 }
    /* +0xafc042 */ __asm { MOVUPS XMM5,xmmword ptr [RSI] }
    /* +0xafc045 */ __asm { MOVUPS XMM0,xmmword ptr [RSI + 0x10] }
    /* +0xafc049 */ __asm { MOVUPS xmmword ptr [R14 + 0x10],XMM0 }
    /* +0xafc04e */ __asm { MOVUPS xmmword ptr [R14],XMM5 }
    /* +0xafc052 */ __asm { MOV qword ptr [RSI + 0x10],0x0 }
    /* +0xafc05a */ __asm { MOV uint8_t ptr [RSI],0x0 }
    /* +0xafc05d */ __asm { MOV qword ptr [RSI + 0x18],0xf }
    /* +0xafc065 */ __asm { CMP RAX,0x10 }
    /* +0xafc069 */ __asm { JC 0x7fffa526c0a8 }
    /* +0xafc06b */ __asm { MOV R9W,0x3e1e }
    /* +0xafc070 */ __asm { MOV RAX,qword ptr [R13] }
    /* +0xafc074 */ __asm { MOV R11D,0xdbcec029 }
    /* +0xafc07a */ __asm { SUB R11D,EDI }
    /* +0xafc07d */ __asm { ROL R11D,0x11 }
    /* +0xafc081 */ __asm { ADD R9D,0xffff9dbb }
    /* +0xafc088 */ __asm { MOV ECX,EDI }
    /* +0xafc08a */ __asm { ROR R9W,CL }
    /* +0xafc08e */ __asm { MOVSX RDX,R9W }
    /* +0xafc092 */ __asm { MOV R8,RAX }
    /* +0xafc095 */ __asm { SHR R8,0x3d }
    /* +0xafc099 */ __asm { XOR R8,RAX }
    /* +0xafc09c */ __asm { LEA RAX,[0x7fffa568a255] }
    /* +0xafc0a3 */ __asm { ADD RAX,RDX }
    /* +0xafc0a6 */ __asm { CALL RAX }
    /* +0xafc0a8 */ __asm { LEA R15,[R14 + 0x40] }
    /* +0xafc0ac */ __asm { LEA RDI,[RSI + 0x20] }
    /* +0xafc0b0 */ __asm { MOV qword ptr [R14 + 0x38],0xf }
    /* +0xafc0b8 */ __asm { CMP qword ptr [R14 + 0x58],0x10 }
    /* +0xafc0bd */ __asm { MOV qword ptr [R14 + 0x30],0x0 }
    /* +0xafc0c5 */ __asm { MOV uint8_t ptr [R14 + 0x20],0x0 }
    /* +0xafc0ca */ __asm { MOVDQU XMM5,xmmword ptr [RDI] }
    /* +0xafc0ce */ __asm { MOVDQU XMM0,xmmword ptr [RDI + 0x10] }
    /* +0xafc0d3 */ __asm { MOVDQU xmmword ptr [R13 + 0x10],XMM0 }
    /* +0xafc0d9 */ __asm { MOVDQU xmmword ptr [R13],XMM5 }
    /* +0xafc0df */ __asm { MOV qword ptr [RSI + 0x30],0x0 }
    /* +0xafc0e7 */ __asm { MOV uint8_t ptr [RSI + 0x20],0x0 }
    /* +0xafc0eb */ __asm { MOV qword ptr [RSI + 0x38],0xf }
    /* +0xafc0f3 */ __asm { JC 0x7fffa526c14d }
    /* +0xafc0f5 */ __asm { MOV R9D,0x8b53ff00 }
    /* +0xafc0fb */ __asm { XOR R9D,0xc00000fd }
    /* +0xafc102 */ __asm { MOV RCX,qword ptr [RSP + 0x90] }
    /* +0xafc10a */ __asm { ROL R9D,CL }
    /* +0xafc10d */ __asm { ROL R9D,0x6 }
    /* +0xafc111 */ __asm { MOV R8D,0x373d4cc6 }
    /* +0xafc117 */ __asm { MOVSXD RAX,R9D }
    /* +0xafc11a */ __asm { MOV R9,qword ptr [R15] }
    /* +0xafc11d */ __asm { LEA RDX,[0x7fffa569295c] }
    /* +0xafc124 */ __asm { ADD RDX,RAX }
    /* +0xafc127 */ __asm { IMUL R11D,R8D,-0x4fac3add }
    /* +0xafc12e */ __asm { XOR R11D,ECX }
    /* +0xafc131 */ __asm { NOT R11D }
    /* +0xafc134 */ __asm { MOVQ XMM5,R9 }
    /* +0xafc139 */ __asm { SHR R9,0x3d }
    /* +0xafc13d */ __asm { MOVD XMM0,R9D }
    /* +0xafc142 */ __asm { PXOR XMM0,XMM5 }
    /* +0xafc146 */ __asm { MOVQ R8,XMM0 }
    /* +0xafc14b */ __asm { CALL RDX }
    /* +0xafc14d */ __asm { LEA RSI,[R14 + 0x60] }
    /* +0xafc151 */ __asm { MOV RAX,qword ptr [RSP + 0x168] }
    /* +0xafc159 */ __asm { LEA R13,[RAX + 0x40] }
    /* +0xafc15d */ __asm { MOV R9D,0xaf8744a5 }
    /* +0xafc163 */ __asm { XOR R9D,dword ptr [RSP + 0x90] }
    /* +0xafc16b */ __asm { MOV qword ptr [R14 + 0x50],0x0 }
    /* +0xafc173 */ __asm { MOV qword ptr [R14 + 0x58],0xf }
    /* +0xafc17b */ __asm { IMUL ECX,R9D,0x7cc2c9ab }
    /* +0xafc182 */ __asm { CMP qword ptr [R14 + 0x78],RCX }
    /* +0xafc186 */ __asm { MOV uint8_t ptr [R14 + 0x40],0x0 }
    /* +0xafc18b */ __asm { MOVDQU XMM5,xmmword ptr [R13] }
    /* +0xafc191 */ __asm { MOVDQU XMM0,xmmword ptr [R13 + 0x10] }
    /* +0xafc197 */ __asm { MOVDQU xmmword ptr [R15 + 0x10],XMM0 }
    /* +0xafc19d */ __asm { MOVDQU xmmword ptr [R15],XMM5 }
    /* +0xafc1a2 */ __asm { MOV qword ptr [RAX + 0x50],0x0 }
    /* +0xafc1aa */ __asm { MOV qword ptr [RAX + 0x58],0xf }
    /* +0xafc1b2 */ __asm { MOV uint8_t ptr [RAX + 0x40],0x0 }
    /* +0xafc1b6 */ __asm { JBE 0x7fffa526c205 }
    /* +0xafc1b8 */ __asm { LEA RAX,[0x7fffa5694a61] }
    /* +0xafc1bf */ __asm { MOV R9D,0xf041efdf }
    /* +0xafc1c5 */ __asm { MOV RDX,qword ptr [RSP + 0x90] }
    /* +0xafc1cd */ __asm { SUB R9D,EDX }
    /* +0xafc1d0 */ __asm { MOV RCX,qword ptr [RSI] }
    /* +0xafc1d3 */ __asm { MOV R11D,0x3069640a }
    /* +0xafc1d9 */ __asm { XOR R11D,EDX }
    /* +0xafc1dc */ __asm { XOR R9D,0xad93d98 }
    /* +0xafc1e3 */ __asm { MOVSXD RDX,R9D }
    /* +0xafc1e6 */ __asm { MOVQ XMM5,RCX }
    /* +0xafc1eb */ __asm { SHR RCX,0x3d }
    /* +0xafc1ef */ __asm { MOVD XMM0,ECX }
    /* +0xafc1f3 */ __asm { PXOR XMM0,XMM5 }
    /* +0xafc1f7 */ __asm { MOVQ R8,XMM0 }
    /* +0xafc1fc */ __asm { ADD RDX,RAX }
    /* +0xafc1ff */ __asm { ROL R11D,0x7 }
    /* +0xafc203 */ __asm { CALL RDX }
    /* +0xafc205 */ __asm { MOV RDX,qword ptr [RSP + 0x168] }
    /* +0xafc20d */ __asm { LEA R15,[RDX + 0x60] }
    /* +0xafc211 */ __asm { MOV RAX,qword ptr [RDX + 0x80] }
    /* +0xafc218 */ __asm { MOV uint8_t ptr [R14 + 0x60],0x0 }
    /* +0xafc21d */ __asm { MOV qword ptr [R14 + 0x78],0xf }
    /* +0xafc225 */ __asm { MOV qword ptr [R14 + 0x70],0x0 }
    /* +0xafc22d */ __asm { MOVDQU XMM5,xmmword ptr [R15] }
    /* +0xafc232 */ __asm { MOVDQU XMM0,xmmword ptr [R15 + 0x10] }
    /* +0xafc238 */ __asm { MOVDQU xmmword ptr [RSI + 0x10],XMM0 }
    /* +0xafc23d */ __asm { MOVDQU xmmword ptr [RSI],XMM5 }
    /* +0xafc241 */ __asm { MOV RSI,RDX }
    /* +0xafc244 */ __asm { MOV uint8_t ptr [RDX + 0x60],0x0 }
    /* +0xafc248 */ __asm { MOV qword ptr [RDX + 0x70],0x0 }
    /* +0xafc250 */ __asm { CMP qword ptr [RDX + 0x18],0x10 }
    /* +0xafc255 */ __asm { MOV qword ptr [RDX + 0x78],0xf }
    /* +0xafc25d */ __asm { MOV qword ptr [R14 + 0x80],RAX }
    /* +0xafc264 */ __asm { JC 0x7fffa526c2ac }
    /* +0xafc266 */ __asm { MOV RAX,qword ptr [RSI] }
    /* +0xafc269 */ __asm { MOV R9W,0xef48 }
    /* +0xafc26e */ __asm { MOV R11D,0xd3bc7db0 }
    /* +0xafc274 */ __asm { ADD R11D,0xf7b609d2 }
    /* +0xafc27b */ __asm { MOV RCX,qword ptr [RSP + 0x90] }
    /* +0xafc283 */ __asm { ROR R11D,CL }
    /* +0xafc286 */ __asm { MOV R8,RAX }
    /* +0xafc289 */ __asm { SHR R8,0x3d }
    /* +0xafc28d */ __asm { ROL R11D,0xf }
    /* +0xafc291 */ __asm { XOR R8,RAX }
    /* +0xafc294 */ __asm { LEA RAX,[0x7fffa568ce0a] }
    /* +0xafc29b */ __asm { MOV ECX,0xffff9d6e }
    /* +0xafc2a0 */ __asm { SUB ECX,R9D }
    /* +0xafc2a3 */ __asm { MOVSX RDX,CX }
    /* +0xafc2a7 */ __asm { ADD RDX,RAX }
    /* +0xafc2aa */ __asm { CALL RDX }
    /* +0xafc2ac */ __asm { MOV qword ptr [RSI + 0x18],RBP }
    /* +0xafc2b0 */ __asm { MOVDQU xmmword ptr [RSI + 0x8],XMM9 }
    /* +0xafc2b6 */ __asm { CMP qword ptr [RSI + 0x38],0x10 }
    /* +0xafc2bb */ __asm { MOV qword ptr [RSI],RBX }
    /* +0xafc2be */ __asm { JC 0x7fffa526c30e }
    /* +0xafc2c0 */ __asm { MOV R11D,0x1fd516e1 }
    /* +0xafc2c6 */ __asm { MOV R9W,0x237d }
    /* +0xafc2cb */ __asm { MOV RCX,qword ptr [RSP + 0x90] }
    /* +0xafc2d3 */ __asm { ADD R11D,ECX }
    /* +0xafc2d6 */ __asm { ROL R11D,0x1e }
    /* +0xafc2da */ __asm { SUB R9D,ECX }
    /* +0xafc2dd */ __asm { NOT R11D }
    /* +0xafc2e0 */ __asm { MOV RCX,qword ptr [RDI] }
    /* +0xafc2e3 */ __asm { LEA RAX,[0x7fffa5687c5c] }
    /* +0xafc2ea */ __asm { ROL R9W,0x2 }
    /* +0xafc2ef */ __asm { MOVSX RDX,R9W }
    /* +0xafc2f3 */ __asm { ADD RDX,RAX }
    /* +0xafc2f6 */ __asm { MOVQ XMM5,RCX }
    /* +0xafc2fb */ __asm { SHR RCX,0x3d }
    /* +0xafc2ff */ __asm { MOVD XMM0,ECX }
    /* +0xafc303 */ __asm { PXOR XMM0,XMM5 }
    /* +0xafc307 */ __asm { MOVQ R8,XMM0 }
    /* +0xafc30c */ __asm { CALL RDX }
    /* +0xafc30e */ __asm { MOV RAX,qword ptr [RSI + 0x58] }
    /* +0xafc312 */ __asm { MOVDQU xmmword ptr [RSI + 0x28],XMM6 }
    /* +0xafc317 */ __asm { MOV qword ptr [RSI + 0x38],R12 }
    /* +0xafc31b */ __asm { MOV RDX,qword ptr [RSP + 0x140] }
    /* +0xafc323 */ __asm { MOV qword ptr [RSI + 0x20],RDX }
    /* +0xafc327 */ __asm { CMP RAX,0x10 }
    /* +0xafc32b */ __asm { MOV R12,qword ptr [RSP + 0x90] }
    /* +0xafc333 */ __asm { JC 0x7fffa526c388 }
    /* +0xafc335 */ __asm { MOV R11D,0xb8da8631 }
    /* +0xafc33b */ __asm { XOR R11D,R12D }
    /* +0xafc33e */ __asm { ROL R11D,0x18 }
    /* +0xafc342 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xafc349 */ __asm { MOV RCX,0x0 }
    /* +0xafc350 */ __asm { MOV RCX,qword ptr [R13] }
    /* +0xafc354 */ __asm { LEA RAX,[0x7fffa569670b] }
    /* +0xafc35b */ __asm { MOV R9D,0xae633e30 }
    /* +0xafc361 */ __asm { MOV R8D,0xae625355 }
    /* +0xafc367 */ __asm { SUB R8D,R9D }
    /* +0xafc36a */ __asm { MOVSXD RDX,R8D }
    /* +0xafc36d */ __asm { MOVQ XMM5,RCX }
    /* +0xafc372 */ __asm { SHR RCX,0x3d }
    /* +0xafc376 */ __asm { ADD RDX,RAX }
    /* +0xafc379 */ __asm { MOVD XMM0,ECX }
    /* +0xafc37d */ __asm { PXOR XMM0,XMM5 }
    /* +0xafc381 */ __asm { MOVQ R8,XMM0 }
    /* +0xafc386 */ __asm { CALL RDX }
    /* +0xafc388 */ __asm { MOV RAX,qword ptr [RSP + 0x50] }
    /* +0xafc38d */ __asm { MOV qword ptr [RSI + 0x58],RAX }
    /* +0xafc391 */ __asm { MOV R9W,0x8331 }
    /* +0xafc396 */ __asm { MOV RAX,qword ptr [RSP + 0x88] }
    /* +0xafc39e */ __asm { MOV qword ptr [RSI + 0x40],RAX }
    /* +0xafc3a2 */ __asm { MOV RAX,qword ptr [RSI + 0x78] }
    /* +0xafc3a6 */ __asm { ADD R9D,R12D }
    /* +0xafc3a9 */ __asm { MOVDQU xmmword ptr [RSI + 0x48],XMM10 }
    /* +0xafc3af */ __asm { IMUL R9D,R9D,0x3907 }
    /* +0xafc3b6 */ __asm { MOVZX ECX,R9W }
    /* +0xafc3ba */ __asm { CMP RAX,RCX }
    /* +0xafc3bd */ __asm { JBE 0x7fffa526c419 }
    /* +0xafc3bf */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xafc3c6 */ __asm { MOV RCX,0x0 }
    /* +0xafc3cd */ __asm { LEA RAX,[0x7fffa5695d0b] }
    /* +0xafc3d4 */ __asm { MOV R9D,0x4aae587 }
    /* +0xafc3da */ __asm { ADD R9D,0x8001fc28 }
    /* +0xafc3e1 */ __asm { XOR R9D,0x7b53fe8a }
    /* +0xafc3e8 */ __asm { MOVSXD RDX,R9D }
    /* +0xafc3eb */ __asm { MOV R9D,0x1614f0d3 }
    /* +0xafc3f1 */ __asm { IMUL R11D,R9D,0x41e488f }
    /* +0xafc3f8 */ __asm { ADD R11D,R12D }
    /* +0xafc3fb */ __asm { MOV RCX,qword ptr [R15] }
    /* +0xafc3fe */ __asm { MOVQ XMM5,RCX }
    /* +0xafc403 */ __asm { SHR RCX,0x3d }
    /* +0xafc407 */ __asm { MOVD XMM0,ECX }
    /* +0xafc40b */ __asm { PXOR XMM0,XMM5 }
    /* +0xafc40f */ __asm { ADD RDX,RAX }
    /* +0xafc412 */ __asm { MOVQ R8,XMM0 }
    /* +0xafc417 */ __asm { CALL RDX }
    /* +0xafc419 */ __asm { MOV RCX,qword ptr [RSP + 0x158] }
    /* +0xafc421 */ __asm { MOV uint8_t ptr [RSI + 0x60],CL }
    /* +0xafc424 */ __asm { MOV RAX,qword ptr [RSP + 0xa0] }
    /* +0xafc42c */ __asm { MOV RDX,qword ptr [RSP + 0xa7] }
    /* +0xafc434 */ __asm { MOV qword ptr [RSI + 0x61],RAX }
    /* +0xafc438 */ __asm { MOV qword ptr [RSI + 0x68],RDX }
    /* +0xafc43c */ __asm { MOVDQU xmmword ptr [RSI + 0x70],XMM14 }
    /* +0xafc442 */ __asm { MOV RAX,qword ptr [RSP + 0x148] }
    /* +0xafc44a */ __asm { MOV qword ptr [RSI + 0x80],RAX }
    /* +0xafc451 */ __asm { MOV RBX,qword ptr [R14 + 0x80] }
    /* +0xafc458 */ __asm { JMP 0x7fffa526d860 }
    /* +0xafc460 */ __asm { MOV RBX,qword ptr [R13 + 0x80] }
    /* +0xafc467 */ __asm { CMP RBX,qword ptr [RSI + 0x80] }
    /* +0xafc46e */ __asm { JA 0x7fffa526c530 }
    /* +0xafc474 */ __asm { JNZ 0x7fffa526cb06 }
    /* +0xafc47a */ __asm { MOV R11W,0x2f63 }
    /* +0xafc47f */ __asm { LEA RAX,[0x7fffa4ac1868] }
    /* +0xafc486 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xafc48d */ __asm { MOV RCX,0x0 }
    /* +0xafc494 */ __asm { MOV RBP,qword ptr [R13 + 0x60] }
    /* +0xafc498 */ __asm { MOV R8,qword ptr [R13 + 0x70] }
    /* +0xafc49c */ __asm { MOV RDX,qword ptr [RSI + 0x70] }
    /* +0xafc4a0 */ __asm { MOV R10,qword ptr [RSI + 0x78] }
    /* +0xafc4a4 */ __asm { MOV R9D,0xbe09e5de }
    /* +0xafc4aa */ __asm { XOR R9D,EDI }
    /* +0xafc4ad */ __asm { XOR R15D,R15D }
    /* +0xafc4b0 */ __asm { CMP RDX,R8 }
    /* +0xafc4b3 */ __asm { CMOVC R8,RDX }
    /* +0xafc4b7 */ __asm { LEA RCX,[R13 + 0x60] }
    /* +0xafc4bb */ __asm { SETC R14B }
    /* +0xafc4bf */ __asm { CMP qword ptr [R13 + 0x78],0x10 }
    /* +0xafc4c4 */ __asm { CMOVNC RCX,RBP }
    /* +0xafc4c8 */ __asm { ADD R9D,0xbaedf9b9 }
    /* +0xafc4cf */ __asm { CMP R10,R9 }
    /* +0xafc4d2 */ __asm { JBE 0x7fffa526d7b5 }
    /* +0xafc4d8 */ __asm { MOV RDX,qword ptr [RSI + 0x60] }
    /* +0xafc4dc */ __asm { JMP 0x7fffa526d7b9 }
    /* +0xafc4f0 */ __asm { JNZ 0x7fffa526d860 }
    /* +0xafc4f6 */ __asm { MOV R9W,0x92e }
    /* +0xafc4fb */ __asm { LEA RAX,[0x7fffa4abd567] }
    /* +0xafc502 */ __asm { MOV RDX,qword ptr [RSI + 0x70] }
    /* +0xafc506 */ __asm { MOV R8,qword ptr [R14 + 0x70] }
    /* +0xafc50a */ __asm { XOR R15D,R15D }
    /* +0xafc50d */ __asm { CMP R8,RDX }
    /* +0xafc510 */ __asm { CMOVA R8,RDX }
    /* +0xafc514 */ __asm { SETA DIL }
    /* +0xafc518 */ __asm { CMP qword ptr [RSI + 0x78],0x10 }
    /* +0xafc51d */ __asm { JC 0x7fffa526d7fa }
    /* +0xafc523 */ __asm { MOV RDX,qword ptr [RSI + 0x60] }
    /* +0xafc527 */ __asm { JMP 0x7fffa526d7fe }
    /* +0xafc530 */ __asm { MOVZX EBP,uint8_t ptr [R13 + 0x60] }
    /* +0xafc535 */ __asm { MOVDQU XMM10,xmmword ptr [R13 + 0x48] }
    /* +0xafc53b */ __asm { MOV RAX,qword ptr [R13 + 0x38] }
    /* +0xafc53f */ __asm { MOV qword ptr [RSP + 0x148],RAX }
    /* +0xafc547 */ __asm { MOVDQU XMM9,xmmword ptr [R13 + 0x8] }
    /* +0xafc54d */ __asm { MOVDQU XMM14,xmmword ptr [R13 + 0x70] }
    /* +0xafc553 */ __asm { MOV RAX,qword ptr [R13 + 0x40] }
    /* +0xafc557 */ __asm { MOV qword ptr [RSP + 0x138],RAX }
    /* +0xafc55f */ __asm { MOVDQU XMM6,xmmword ptr [R13 + 0x28] }
    /* +0xafc565 */ __asm { MOV qword ptr [R13 + 0x30],0x0 }
    /* +0xafc56d */ __asm { MOV uint8_t ptr [R13 + 0x40],0x0 }
    /* +0xafc572 */ __asm { MOV qword ptr [R13 + 0x38],0xf }
    /* +0xafc57a */ __asm { MOV R12,qword ptr [R13] }
    /* +0xafc57e */ __asm { MOV uint8_t ptr [R13],0x0 }
    /* +0xafc583 */ __asm { MOV RSI,qword ptr [R13 + 0x20] }
    /* +0xafc587 */ __asm { MOV uint8_t ptr [R13 + 0x20],0x0 }
    /* +0xafc58c */ __asm { MOV qword ptr [R13 + 0x50],0x0 }
    /* +0xafc594 */ __asm { MOV qword ptr [R13 + 0x10],0x0 }
    /* +0xafc59c */ __asm { MOV RAX,qword ptr [R13 + 0x58] }
    /* +0xafc5a0 */ __asm { MOV qword ptr [RSP + 0x158],RAX }
    /* +0xafc5a8 */ __asm { MOV qword ptr [R13 + 0x58],0xf }
    /* +0xafc5b0 */ __asm { MOV RBX,qword ptr [R13 + 0x18] }
    /* +0xafc5b4 */ __asm { MOV qword ptr [R13 + 0x18],0xf }
    /* +0xafc5bc */ __asm { MOV RAX,qword ptr [R13 + 0x61] }
    /* +0xafc5c0 */ __asm { MOV RDX,qword ptr [R13 + 0x68] }
    /* +0xafc5c4 */ __asm { MOV qword ptr [RSP + 0xa7],RDX }
    /* +0xafc5cc */ __asm { MOV qword ptr [RSP + 0xa0],RAX }
    /* +0xafc5d4 */ __asm { MOV qword ptr [R13 + 0x78],0xf }
    /* +0xafc5dc */ __asm { CMP qword ptr [R13 + 0x18],0x10 }
    /* +0xafc5e1 */ __asm { MOV qword ptr [R13 + 0x70],0x0 }
    /* +0xafc5e9 */ __asm { MOV uint8_t ptr [R13 + 0x60],0x0 }
    /* +0xafc5ee */ __asm { MOV RAX,qword ptr [R13 + 0x80] }
    /* +0xafc5f5 */ __asm { MOV qword ptr [RSP + 0x48],RAX }
    /* +0xafc5fa */ __asm { JC 0x7fffa526c64b }
    /* +0xafc5fc */ __asm { LEA RAX,[0x7fffa568cc52] }
    /* +0xafc603 */ __asm { MOV R9W,0x7663 }
    /* +0xafc608 */ __asm { XOR R9D,0xa8cc }
    /* +0xafc60f */ __asm { MOV ECX,EDI }
    /* +0xafc611 */ __asm { ROL R9W,CL }
    /* +0xafc615 */ __asm { MOVSX RDX,R9W }
    /* +0xafc619 */ __asm { ADD RDX,RAX }
    /* +0xafc61c */ __asm { MOV R9D,0x5d1a9852 }
    /* +0xafc622 */ __asm { IMUL R11D,R9D,0x7ffe0261 }
    /* +0xafc629 */ __asm { NOT R11D }
    /* +0xafc62c */ __asm { SUB R11D,EDI }
    /* +0xafc62f */ __asm { MOV RCX,qword ptr [R13] }
    /* +0xafc633 */ __asm { MOVQ XMM5,RCX }
    /* +0xafc638 */ __asm { SHR RCX,0x3d }
    /* +0xafc63c */ __asm { MOVD XMM0,ECX }
    /* +0xafc640 */ __asm { PXOR XMM0,XMM5 }
    /* +0xafc644 */ __asm { MOVQ R8,XMM0 }
    /* +0xafc649 */ __asm { CALL RDX }
    /* +0xafc64b */ __asm { MOV qword ptr [RSP + 0x78],RBP }
    /* +0xafc650 */ __asm { LEA R14,[R13 + 0x20] }
    /* +0xafc654 */ __asm { CMP qword ptr [R13 + 0x38],0x10 }
}


// ============================================================================
// Function : Unwind@7fffa527df80  |  RVA: 0xb0df80  |  Size: 177 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa527df80(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  uint16_t uVar4;
  
  uVar4 = ~((uint16_t)*(uint64_t *)(param_2 + 0x78) ^ 0xcd5f);
  uVar3 = *(int *)(*(int64_t *)(param_2 + 0xf0) + 4) - 1;
  *(uint32_t *)(*(int64_t *)(param_2 + 0xf0) + 4) = uVar3;
  if (uVar3 == (uint16_t)(uVar4 << 0xe | uVar4 >> 2)) {
    puVar2 = *(uint32_t **)(param_2 + 0xf0);
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar2 + 2,uVar3,uVar1);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa527e040  |  RVA: 0xb0e040  |  Size: 42 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

void FUN_7fffa527e040(void)

{
  uint32_t unaff_EBX;
  int64_t unaff_RBP;
  
  *(uint32_t *)(unaff_RBP + 0x403c0021) = *(uint32_t *)(unaff_RBP + 0x403c0021) & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ============================================================================
// Function : FUN_7fffa5281120  |  RVA: 0xb11120  |  Size: 2976 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5281120(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  bool bVar9;
  uint8_t bVar10;
  uint16_t uVar11;
  uint32_t in_EAX;
  uint32_t uVar12;
  uint8_t bVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  char *pcVar16;
  uint64_t uVar17;
  int iVar18;
  uint64_t *puVar19;
  uint64_t uVar20;
  uint32_t uVar21;
  int64_t lVar22;
  uint64_t *puVar23;
  uint32_t uVar24;
  uint32_t uVar25;
  int64_t in_R10;
  uint64_t *puVar26;
  uint32_t uVar27;
  uint64_t in_R11;
  uint64_t uVar28;
  int64_t lVar29;
  int64_t lVar30;
  uint64_t uVar31;
  uint64_t *puVar32;
  uint64_t *puVar33;
  int64_t lVar34;
  uint64_t uVar35;
  int64_t lVar36;
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  char cVar39;
  uint8_t uVar42;
  char cVar43;
  uint8_t uVar44;
  char cVar45;
  uint8_t uVar46;
  char cVar47;
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar48 [16];
  uint32_t auStack_168 [66];
  uint64_t uStack_60;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  uint64_t *puStack_48;
  
  puVar19 = (uint64_t *)(in_R10 * -0x65fbdbcd66a2de67);
  uVar15 = (in_R11 << 0x1d | in_R11 >> 0x23) ^ (in_R11 << 0x13 | in_R11 >> 0x2d) ^ in_R11;
  uVar15 = (uVar15 << 0x26 | uVar15 >> 0x1a) ^ (uVar15 << 0x3a | uVar15 >> 6) ^ uVar15;
  uVar15 = (uVar15 << 0xc | uVar15 >> 0x34) ^ (uVar15 << 0x34 | uVar15 >> 0xc) ^ uVar15;
  uVar15 = (uVar15 << 0x28 | uVar15 >> 0x18) ^ (uVar15 << 0x18 | uVar15 >> 0x28) ^ uVar15;
  uVar15 = (uVar15 << 0x10 | uVar15 >> 0x30) ^ (uVar15 << 0x30 | uVar15 >> 0x10) ^ uVar15;
  uVar24 = 6;
  if (*(uint32_t *)(uVar15 + 0x10c) < 6) {
    uVar24 = *(uint32_t *)(uVar15 + 0x10c);
  }
  uVar25 = *(uint32_t *)(uVar15 + 0x1c);
  lVar5 = *(int64_t *)(uVar15 + 8);
  lVar6 = *(int64_t *)(uVar15 + 0x10);
  uVar28 = (int64_t)param_2 - lVar5;
  uVar12 = 1 << (*(uint8_t *)(uVar15 + 0x100) & 0x1f);
  uVar27 = (uint32_t)uVar28;
  uVar21 = uVar27 - uVar12;
  if (uVar27 - uVar25 <= uVar12) {
    uVar21 = uVar25;
  }
  if (*(uint32_t *)(uVar15 + 0x28) != (~(in_EAX + 0xe0c0) & 0xffff)) {
    uVar21 = uVar25;
  }
  iVar18 = 1 << ((uint8_t)uVar24 & 0x1f);
  uStack_60 = (uint64_t)*(uint32_t *)(uVar15 + 0x18);
  lVar34 = *(int64_t *)(uVar15 + 0x70);
  uVar35 = *(uint64_t *)(uVar15 + 0x60);
  lVar36 = *(int64_t *)(uVar15 + 0x38);
  puStack_58 = param_2;
  bVar10 = (uint8_t)in_EAX;
  if (*(int *)(uVar15 + 300) == 0) {
    uVar24 = *(uint32_t *)(uVar15 + 0x2c);
    uVar20 = (uint64_t)uVar24;
    uVar11 = (uint16_t)in_EAX ^ 0xdf3f;
    cVar39 = (char)*(int *)(uVar15 + 0x34);
    lVar30 = lVar34;
    lVar29 = lVar36;
    if ((uint32_t)(uint16_t)(uVar11 << 9 | uVar11 >> 7) < uVar27 - uVar24) {
      if (uVar24 < 0xffffffa0) {
        uVar17 = uVar20 + 0x60;
        do {
          uVar14 = (uint64_t)((uint32_t)uVar20 & 7);
          uVar24 = *(uint32_t *)(uVar15 + 0x40 + uVar14 * 4);
          uVar31 = (uint64_t)(uVar24 >> 2 & 0xffffffc0);
          *(int *)(uVar15 + 0x40 + uVar14 * 4) =
               (int)((*(int64_t *)(lVar5 + 8 + uVar20) * -0x30e4432345000000 ^
                     *(uint64_t *)(uVar15 + 0x60)) >> (0x38U - cVar39 & 0x3f));
          lVar29 = 0x3f;
          if ((uint8_t)(*(uint8_t *)(lVar36 + uVar31) & 0x3f) !=
              (uint8_t)(0x80U >> (bVar10 & 7) | -0x80 << 8 - (bVar10 & 7))) {
            lVar29 = 0;
          }
          lVar29 = (uint64_t)(*(uint8_t *)(lVar36 + uVar31) - 1 & 0x3f) + lVar29;
          *(char *)(lVar36 + uVar31) = (char)lVar29;
          *(char *)(lVar36 + uVar31 + lVar29) = (char)uVar24;
          *(uint32_t *)(lVar34 + uVar31 * 4 + lVar29 * 4) = (uint32_t)uVar20;
          uVar20 = uVar20 + 1;
        } while (uVar17 != uVar20);
        lVar29 = *(int64_t *)(uVar15 + 0x38);
        lVar30 = *(int64_t *)(uVar15 + 0x70);
      }
      uVar24 = uVar27 - 0x20;
      uVar20 = (uint64_t)uVar24;
      uVar12 = (((int)((int64_t)param_2 + 1U) - (int)(lVar5 + uVar20)) +
               (uint32_t)((in_EAX + 0xd8d3ed5c ^ 0xd64ecd01) + 0x4327e178 <=
                     ((in_EAX + 0xe146b120) * 0x4000000 | in_EAX + 0xe146b120 >> 6)) * 2) - 1;
      uVar25 = 8;
      if (uVar12 < 8) {
        uVar25 = uVar12;
      }
      uVar12 = 0;
      if (lVar5 + uVar20 <= (int64_t)param_2 + 1U) {
        uVar12 = uVar25;
      }
      if (uVar24 < (uVar12 + uVar27) - 0x20) {
        uVar17 = *(uint64_t *)(uVar15 + 0x60);
        uVar4 = *(uint32_t *)(uVar15 + 0x34);
        do {
          uVar25 = (uint32_t)uVar20;
          plVar1 = (int64_t *)(lVar5 + uVar20);
          uVar20 = uVar20 + 1;
          *(int *)(uVar15 + 0x40 + (uint64_t)(uVar25 & 7) * 4) =
               (int)((*plVar1 * -0x30e4432345000000 ^ uVar17) >> (0x38U - (char)uVar4 & 0x3f));
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    if (uVar24 < uVar27) {
      lVar7 = *(int64_t *)(uVar15 + 8);
      uVar4 = *(uint32_t *)(uVar15 + 0x34);
      uVar20 = (uint64_t)uVar24;
      do {
        uVar25 = (uint32_t)uVar20;
        uVar17 = (uint64_t)(uVar25 & 7);
        plVar1 = (int64_t *)(lVar7 + 8 + uVar20);
        uVar20 = uVar20 + 1;
        uVar24 = *(uint32_t *)(uVar15 + 0x40 + uVar17 * 4);
        *(int *)(uVar15 + 0x40 + uVar17 * 4) =
             (int)((*plVar1 * -0x30e4432345000000 ^ *(uint64_t *)(uVar15 + 0x60)) >>
                  (0x38U - (char)uVar4 & 0x3f));
        uVar17 = (uint64_t)(uVar24 >> 2 & 0xffffffc0);
        lVar22 = 0;
        if ((uint8_t)(*(uint8_t *)(lVar29 + uVar17) & 0x3f) == (uint8_t)(bVar10 - 0x3e)) {
          lVar22 = 0x3f;
        }
        lVar22 = (uint64_t)(*(uint8_t *)(lVar29 + uVar17) - 1 & 0x3f) + lVar22;
        *(char *)(lVar29 + uVar17) = (char)lVar22;
        *(char *)(lVar29 + uVar17 + lVar22) = (char)uVar24;
        *(uint32_t *)(lVar30 + uVar17 * 4 + lVar22 * 4) = uVar25;
      } while ((uVar28 & 0xffffffff) != uVar20);
    }
    *(uint32_t *)(uVar15 + 0x2c) = uVar27;
    puStack_48 = (uint64_t *)(uint64_t)*(uint32_t *)(uVar15 + 0x40 + (uint64_t)(uVar27 & 7) * 4);
    *(int *)(uVar15 + 0x40 + (uint64_t)(uVar27 & 7) * 4) =
         (int)((*(int64_t *)(lVar5 + 8 + (uVar28 & 0xffffffff)) * -0x30e4432345000000 ^ uVar35) >>
              (0x38U - cVar39 & 0x3f));
  }
  else {
    uVar24 = 0x38 - *(int *)(uVar15 + 0x34);
    uVar35 = uVar35 ^ *param_2 * -0x30e4432345000000;
    *(uint32_t *)(uVar15 + 0x2c) = uVar27;
    puStack_48 = (uint64_t *)(uVar35 >> ((uint8_t)uVar24 & 0x3f) & 0xffffffff);
    if ((-0x777678c8 << (bVar10 & 0x1f) | 0x88898738U >> 0x20 - (bVar10 & 0x1f)) == 0xd7391e5f) {
      puStack_48 = (uint64_t *)(uint64_t)((uint32_t)uVar35 & uVar24);
    }
  }
  uVar24 = (uint32_t)puStack_48;
  if ((0xafe55ba2U >> (bVar10 & 0x1f) | -0x501aa45e << 0x20 - (bVar10 & 0x1f)) <
      ((in_EAX ^ 0xcee36127) << 3 | (in_EAX ^ 0xcee36127) >> 0x1d)) {
    uVar28 = (uint64_t)(uVar24 >> 2 & 0xffffffc0);
    uVar25 = in_EAX + 0xf03ac3ee;
    bVar13 = *(uint8_t *)(lVar36 + uVar28);
    *(int *)(uVar15 + 0x68) = *(int *)(uVar15 + 0x68) + uVar24;
  }
  else {
    *(int *)(uVar15 + 0x68) = *(int *)(uVar15 + 0x68) + uVar24;
    uVar28 = (uint64_t)(uVar24 >> 2 & 0xffffffc0);
    bVar13 = *(uint8_t *)(lVar36 + uVar28);
    uVar25 = in_EAX ^ 0xbf596dbd;
  }
  pcVar16 = (char *)(lVar36 + uVar28);
  uVar46 = (uint8_t)((uint64_t)puStack_48 >> 0x18);
  uVar44 = (uint8_t)((uint64_t)puStack_48 >> 0x10);
  uVar42 = (uint8_t)((uint64_t)puStack_48 >> 8);
  auVar40._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar46,uVar46),uVar44),CONCAT14(uVar44,uVar24)) >> 0x20);
  auVar40[3] = uVar42;
  auVar40[2] = uVar42;
  auVar40[0] = SUB81(puStack_48,0);
  auVar40[1] = auVar40[0];
  auVar40._8_8_ = 0;
  auVar41 = pshuflw(auVar40,auVar40,0);
  cVar39 = auVar41[0];
  auVar37[0] = -(*pcVar16 == cVar39);
  cVar43 = auVar41[1];
  auVar37[1] = -(pcVar16[1] == cVar43);
  cVar45 = auVar41[2];
  auVar37[2] = -(pcVar16[2] == cVar45);
  cVar47 = auVar41[3];
  auVar37[3] = -(pcVar16[3] == cVar47);
  auVar37[4] = -(pcVar16[4] == cVar39);
  auVar37[5] = -(pcVar16[5] == cVar43);
  auVar37[6] = -(pcVar16[6] == cVar45);
  auVar37[7] = -(pcVar16[7] == cVar47);
  auVar37[8] = -(pcVar16[8] == cVar39);
  auVar37[9] = -(pcVar16[9] == cVar43);
  auVar37[10] = -(pcVar16[10] == cVar45);
  auVar37[0xb] = -(pcVar16[0xb] == cVar47);
  auVar37[0xc] = -(pcVar16[0xc] == cVar39);
  auVar37[0xd] = -(pcVar16[0xd] == cVar43);
  auVar37[0xe] = -(pcVar16[0xe] == cVar45);
  auVar37[0xf] = -(pcVar16[0xf] == cVar47);
  lVar34 = lVar34 + uVar28 * 4;
  auVar41[0] = -(pcVar16[0x10] == cVar39);
  auVar41[1] = -(pcVar16[0x11] == cVar43);
  auVar41[2] = -(pcVar16[0x12] == cVar45);
  auVar41[3] = -(pcVar16[0x13] == cVar47);
  auVar41[4] = -(pcVar16[0x14] == cVar39);
  auVar41[5] = -(pcVar16[0x15] == cVar43);
  auVar41[6] = -(pcVar16[0x16] == cVar45);
  auVar41[7] = -(pcVar16[0x17] == cVar47);
  auVar41[8] = -(pcVar16[0x18] == cVar39);
  auVar41[9] = -(pcVar16[0x19] == cVar43);
  auVar41[10] = -(pcVar16[0x1a] == cVar45);
  auVar41[0xb] = -(pcVar16[0x1b] == cVar47);
  auVar41[0xc] = -(pcVar16[0x1c] == cVar39);
  auVar41[0xd] = -(pcVar16[0x1d] == cVar43);
  auVar41[0xe] = -(pcVar16[0x1e] == cVar45);
  auVar41[0xf] = -(pcVar16[0x1f] == cVar47);
  auVar48[0] = -(pcVar16[0x20] == cVar39);
  auVar48[1] = -(pcVar16[0x21] == cVar43);
  auVar48[2] = -(pcVar16[0x22] == cVar45);
  auVar48[3] = -(pcVar16[0x23] == cVar47);
  auVar48[4] = -(pcVar16[0x24] == cVar39);
  auVar48[5] = -(pcVar16[0x25] == cVar43);
  auVar48[6] = -(pcVar16[0x26] == cVar45);
  auVar48[7] = -(pcVar16[0x27] == cVar47);
  auVar48[8] = -(pcVar16[0x28] == cVar39);
  auVar48[9] = -(pcVar16[0x29] == cVar43);
  auVar48[10] = -(pcVar16[0x2a] == cVar45);
  auVar48[0xb] = -(pcVar16[0x2b] == cVar47);
  auVar48[0xc] = -(pcVar16[0x2c] == cVar39);
  auVar48[0xd] = -(pcVar16[0x2d] == cVar43);
  auVar48[0xe] = -(pcVar16[0x2e] == cVar45);
  auVar48[0xf] = -(pcVar16[0x2f] == cVar47);
  auVar38[0] = -(pcVar16[0x30] == cVar39);
  auVar38[1] = -(pcVar16[0x31] == cVar43);
  auVar38[2] = -(pcVar16[0x32] == cVar45);
  auVar38[3] = -(pcVar16[0x33] == cVar47);
  auVar38[4] = -(pcVar16[0x34] == cVar39);
  auVar38[5] = -(pcVar16[0x35] == cVar43);
  auVar38[6] = -(pcVar16[0x36] == cVar45);
  auVar38[7] = -(pcVar16[0x37] == cVar47);
  auVar38[8] = -(pcVar16[0x38] == cVar39);
  auVar38[9] = -(pcVar16[0x39] == cVar43);
  auVar38[10] = -(pcVar16[0x3a] == cVar45);
  auVar38[0xb] = -(pcVar16[0x3b] == cVar47);
  auVar38[0xc] = -(pcVar16[0x3c] == cVar39);
  auVar38[0xd] = -(pcVar16[0x3d] == cVar43);
  auVar38[0xe] = -(pcVar16[0x3e] == cVar45);
  auVar38[0xf] = -(pcVar16[0x3f] == cVar47);
  uVar28 = (uint64_t)
           CONCAT22((uint16_t)(SUB161(auVar38 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar38[0xf] >> 7) << 0xf,
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
           (uint16_t)((uint16_t)(SUB161(auVar41 >> 7,0) & 1) |
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
                   (uint16_t)(auVar41[0xf] >> 7) << 0xf) << 0x10 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar37 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar37[0xf] >> 7) << 0xf);
  uVar24 = (uint32_t)bVar13;
  if (uVar28 == 0) {
    lVar36 = 0;
  }
  else {
    uVar28 = uVar28 >> (bVar13 & 0x3f) | uVar28 << 0x40 - (bVar13 & 0x3f);
    lVar36 = 0;
    do {
      iVar8 = 0;
      for (uVar35 = uVar28; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x8000000000000000) {
        iVar8 = iVar8 + 1;
      }
      uVar12 = iVar8 + uVar24 & 0x3f;
      if (uVar12 != 0) {
        uVar12 = *(uint32_t *)(lVar34 + (uint64_t)uVar12 * 4);
        if (uVar12 < uVar21) break;
        iVar18 = iVar18 + -1;
        auStack_168[lVar36] = uVar12;
        lVar36 = lVar36 + 1;
      }
      uVar28 = uVar28 & uVar28 - 1;
    } while (uVar28 != 0 && iVar18 != 0);
  }
  lVar29 = 0x3f;
  if ((uVar24 & 0x3f) != 1) {
    lVar29 = 0;
  }
  lVar29 = lVar29 + (uint64_t)(uVar24 - 1 & 0x3f);
  *pcVar16 = (char)lVar29;
  pcVar16[lVar29] = (char)puStack_48;
  iVar18 = *(int *)(uVar15 + 0x2c);
  *(int *)(uVar15 + 0x2c) = iVar18 + 1;
  *(int *)(lVar34 + lVar29 * 4) = iVar18;
  if (lVar36 == 0) {
    uVar15 = 3;
  }
  else {
    puVar2 = (uint64_t *)(lVar5 + uStack_60);
    puStack_50 = (uint64_t *)((int64_t)puVar19 - 3);
    puVar3 = (uint64_t *)((int64_t)param_2 + 4);
    puStack_48 = (uint64_t *)((int64_t)puVar19 - 7);
    uVar28 = 3;
    lVar34 = 0;
    puVar26 = param_2;
    do {
      uVar24 = auStack_168[lVar34];
      uVar15 = (uint64_t)uVar24;
      if (uVar24 < (uint32_t)uStack_60) {
        if (*(int *)(lVar6 + uVar15) != (int)*puVar26) goto LAB_7fffa5281830;
        puVar23 = (uint64_t *)(lVar6 + uVar15 + 4);
        puVar26 = (uint64_t *)
                  (((int64_t)(uStack_60 + lVar6) - (int64_t)puVar23) + (int64_t)puVar3);
        if (puVar19 <= puVar26) {
          puVar26 = puVar19;
        }
        puVar32 = puVar23;
        puVar33 = puVar3;
        if (puVar3 < (uint64_t *)((int64_t)puVar26 - 7U)) {
          if (*puVar23 == *puVar3) {
            lVar29 = lVar6 + 0xc + uVar15;
            lVar30 = 0;
            do {
              puVar33 = (uint64_t *)((int64_t)param_2 + lVar30 + 0xc);
              if ((uint64_t *)((int64_t)puVar26 - 7U) <= puVar33) {
                puVar32 = (uint64_t *)(lVar29 + lVar30);
                goto LAB_7fffa5281a16;
              }
              uVar15 = *(uint64_t *)(lVar29 + lVar30);
              lVar30 = lVar30 + 8;
            } while (uVar15 == *puVar33);
            uVar21 = 0;
            for (uVar15 = *puVar33 ^ uVar15; (uVar15 & 1) == 0;
                uVar15 = uVar15 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar15 = (uint64_t)(uVar21 >> 3) + lVar30;
          }
          else {
            uVar21 = 0;
            for (uVar15 = *puVar23 ^ *puVar3; (uVar15 & 1) == 0;
                uVar15 = uVar15 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar15 = (uint64_t)(uVar21 >> 3);
          }
        }
        else {
LAB_7fffa5281a16:
          if ((puVar33 < (uint64_t *)((int64_t)puVar26 - 3U)) && ((int)*puVar32 == (int)*puVar33))
          {
            puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
          }
          if ((puVar33 < (uint64_t *)((int64_t)puVar26 - 1U)) &&
             ((short)*puVar32 == (short)*puVar33)) {
            puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
            puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
          }
          if (puVar33 < puVar26) {
            puVar33 = (uint64_t *)
                      ((int64_t)puVar33 + (uint64_t)((char)*puVar32 == (char)*puVar33));
          }
          uVar15 = (int64_t)puVar33 - (int64_t)puVar3;
        }
        if ((char *)((int64_t)puVar23 + uVar15) == (char *)(uStack_60 + lVar6)) {
          puVar26 = (uint64_t *)((int64_t)puVar3 + uVar15);
          puVar23 = puVar26;
          puVar33 = puVar2;
          if (puVar26 < puStack_48) {
            if (*puVar2 == *puVar26) {
              puVar23 = (uint64_t *)((int64_t)param_2 + uVar15 + 0xc);
              lVar29 = 8;
              if (puVar23 < puStack_48) {
LAB_7fffa5281b00:
                if (*(uint64_t *)((int64_t)puVar2 + lVar29) == *puVar23)
                goto code_r0x7fffa5281b10;
                uVar21 = 0;
                for (uVar35 = *(uint64_t *)((int64_t)puVar2 + lVar29) ^ *puVar23;
                    (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x8000000000000000) {
                  uVar21 = uVar21 + 1;
                }
                uVar35 = (uint64_t)(uVar21 >> 3) + lVar29;
                goto LAB_7fffa5281c22;
              }
LAB_7fffa5281b22:
              puVar33 = (uint64_t *)(lVar29 + (int64_t)puVar2);
              goto LAB_7fffa5281b25;
            }
            uVar21 = 0;
            for (uVar35 = *puVar2 ^ *puVar26; (uVar35 & 1) == 0;
                uVar35 = uVar35 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar35 = (uint64_t)(uVar21 >> 3);
          }
          else {
LAB_7fffa5281b25:
            if ((puVar23 < puStack_50) && ((int)*puVar33 == (int)*puVar23)) {
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
              puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
            }
            if ((puVar23 < (uint64_t *)((int64_t)puVar19 + -1)) &&
               ((short)*puVar33 == (short)*puVar23)) {
              puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
            }
            if (puVar23 < puVar19) {
              puVar23 = (uint64_t *)
                        ((int64_t)puVar23 + (uint64_t)((char)*puVar33 == (char)*puVar23));
            }
            uVar35 = (int64_t)puVar23 - (int64_t)puVar26;
          }
LAB_7fffa5281c22:
          uVar15 = uVar15 + uVar35;
        }
        puVar26 = puStack_58;
        uVar15 = uVar15 + 4;
LAB_7fffa5281c39:
        if (uVar28 < uVar15) {
          uVar21 = ((uVar25 ^ 0xbbc851f5) << (bVar10 & 0x1f) |
                   (uVar25 ^ 0xbbc851f5) >> 0x20 - (bVar10 & 0x1f)) ^ 0xcaab274b;
          bVar13 = (uint8_t)uVar25 & 0x1f;
          uVar12 = (-0x1ae8e9c3 << bVar13 | 0xe517163dU >> 0x20 - bVar13) - in_EAX;
          bVar9 = (uint64_t *)((int64_t)puVar26 + uVar15) == puVar19;
          if ((uVar21 << 0x12 | uVar21 >> 0xe) < (uVar12 * 0x20000 | uVar12 >> 0xf)) {
            bVar9 = (int64_t)((int64_t)puVar26 + uVar15) < (int64_t)puVar19;
          }
          *param_3 = (uint64_t)((uVar27 + 3) - uVar24);
          uVar28 = uVar15;
          if (bVar9) break;
        }
      }
      else {
        puVar23 = (uint64_t *)(lVar5 + uVar15);
        if (*(int *)((uVar28 - 3) + (int64_t)puVar23) == *(int *)((int64_t)puVar26 + (uVar28 - 3))
           ) {
          puVar33 = puVar26;
          if (puVar26 < puStack_48) {
            if (*puVar23 != *puVar26) {
              uVar35 = 0;
              for (uVar15 = *puVar23 ^ *puVar26; (uVar15 & 1) == 0;
                  uVar15 = uVar15 >> 1 | 0x8000000000000000) {
                uVar35 = uVar35 + 1;
              }
              uVar15 = uVar35 + 3;
              if ((in_EAX + 0x2bdaac39) * (uVar25 | 1) <=
                  (((in_EAX | 1) * 0xad717b5 ^ uVar25) + 0x8f8fc16f ^ 0xe62e23e6)) {
                uVar15 = uVar35 >> 3 & 0x1fffffff;
              }
              goto LAB_7fffa5281c39;
            }
            lVar29 = 8;
LAB_7fffa5281940:
            puVar33 = (uint64_t *)((int64_t)puVar26 + lVar29);
            if (puVar33 < puStack_48) {
              if (*(uint64_t *)((int64_t)puVar23 + lVar29) == *puVar33) goto code_r0x7fffa5281962;
              uVar21 = 0;
              for (uVar15 = *(uint64_t *)((int64_t)puVar23 + lVar29) ^ *puVar33; (uVar15 & 1) == 0
                  ; uVar15 = uVar15 >> 1 | 0x8000000000000000) {
                uVar21 = uVar21 + 1;
              }
              uVar15 = (uint64_t)(uVar21 >> 3) + lVar29;
              goto LAB_7fffa5281c39;
            }
            puVar23 = (uint64_t *)((int64_t)puVar23 + lVar29);
          }
          if ((puVar33 < puStack_50) && ((int)*puVar23 == (int)*puVar33)) {
            puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
          }
          if ((puVar33 < (uint64_t *)((int64_t)puVar19 + -1)) &&
             ((short)*puVar23 == (short)*puVar33)) {
            puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
          }
          if (puVar33 < puVar19) {
            puVar33 = (uint64_t *)
                      ((int64_t)puVar33 + (uint64_t)((char)*puVar23 == (char)*puVar33));
          }
          uVar15 = (int64_t)puVar33 - (int64_t)puVar26;
          goto LAB_7fffa5281c39;
        }
      }
LAB_7fffa5281830:
      lVar34 = lVar34 + 1;
      uVar15 = uVar28;
    } while (lVar34 != lVar36);
  }
  return ~(uVar15 >> 0x33 ^ uVar15);
code_r0x7fffa5281b10:
  puVar23 = puVar23 + 1;
  lVar29 = lVar29 + 8;
  if (puStack_48 <= puVar23) goto LAB_7fffa5281b22;
  goto LAB_7fffa5281b00;
code_r0x7fffa5281962:
  lVar29 = lVar29 + 8;
  goto LAB_7fffa5281940;
}


// ============================================================================
// Function : FUN_7fffa5281ce4  |  RVA: 0xb11ce4  |  Size: 28 bytes
// Callers  : FUN_7fffa4f40a50@0x7d0a50, FUN_7fffa560e460@0xe9e460
// Callees  : FUN_7fffa5130768@0x9c0768, FUN_7fffa56266a0@0xeb66a0
// ============================================================================
void FUN_7fffa5281ce4(void)

{
  uint64_t uVar1;
  
  uVar1 = FUN_7fffa56266a0();
  FUN_7fffa5130768(uVar1,&DAT_7fffa47825c8);
  return;
}


// ============================================================================
// Function : FUN_7fffa5281d00  |  RVA: 0xb11d00  |  Size: 63 bytes
// Callers  : FUN_7fffa55cb0b4@0xe5b0b4
// Callees  : FUN_7fffa5476b88@0xd06b88, FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa5281d00(uint64_t param_1,uint32_t *param_2,uint64_t *param_3,uint32_t *param_4
                     )

{
  FUN_7fffa5476b88(*param_2);
  LOCK();
  **(int **)(*(int64_t *)*param_3 + 0x88) = **(int **)(*(int64_t *)*param_3 + 0x88) + 1;
  UNLOCK();
  FUN_7fffa4f54478(*param_4);
  return;
}


// ============================================================================
// Function : FUN_7fffa5281d40  |  RVA: 0xb11d40  |  Size: 66 bytes
// Callers  : FUN_7fffa5697680@0xf27680
// Callees  : none
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x7fffa5281d60) */
/* WARNING: Removing unreachable block (ram,0x7fffa5281d68) */
/* WARNING: Removing unreachable block (ram,0x7fffa5281d6e) */

void FUN_7fffa5281d40(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa5281d90  |  RVA: 0xb11d90  |  Size: 8516 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5281d90(void) {
    /* +0xb11d90 */ __asm { PUSH RBP }
    /* +0xb11d91 */ __asm { PUSH RDI }
    /* +0xb11d92 */ __asm { PUSH R15 }
    /* +0xb11d94 */ __asm { PUSH R14 }
    /* +0xb11d96 */ __asm { PUSH RSI }
    /* +0xb11d97 */ __asm { PUSH RBX }
    /* +0xb11d98 */ __asm { PUSH R13 }
    /* +0xb11d9a */ __asm { PUSH R12 }
    /* +0xb11d9c */ __asm { SUB RSP,0x118 }
    /* +0xb11da3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xb11dab */ __asm { MOV qword ptr [RBP + 0x90],-0x2 }
    /* +0xb11db6 */ __asm { MOV RCX,RAX }
    /* +0xb11db9 */ __asm { MOV EDI,R8D }
    /* +0xb11dbc */ __asm { MOV R9W,0x79f2 }
    /* +0xb11dc1 */ __asm { MOV EBX,ECX }
    /* +0xb11dc3 */ __asm { OR EBX,0x1 }
    /* +0xb11dc6 */ __asm { ADD R9D,0xffff881e }
    /* +0xb11dcd */ __asm { IMUL R9D,EBX }
    /* +0xb11dd1 */ __asm { PSHUFD XMM0,XMM3,0xee }
    /* +0xb11dd6 */ __asm { MOVQ R14,XMM0 }
    /* +0xb11ddb */ __asm { MOV R11,R14 }
    /* +0xb11dde */ __asm { ROL R11,0x2 }
    /* +0xb11de2 */ __asm { MOV RAX,R14 }
    /* +0xb11de5 */ __asm { ROL RAX,0x4 }
    /* +0xb11de9 */ __asm { XOR RAX,R11 }
    /* +0xb11dec */ __asm { XOR RAX,R14 }
    /* +0xb11def */ __asm { MOV R11,RAX }
    /* +0xb11df2 */ __asm { ROL R11,0x8 }
    /* +0xb11df6 */ __asm { MOV R10,RAX }
    /* +0xb11df9 */ __asm { ROL R10,0x4 }
    /* +0xb11dfd */ __asm { XOR R10,R11 }
    /* +0xb11e00 */ __asm { XOR R10,RAX }
    /* +0xb11e03 */ __asm { MOV R11,R10 }
    /* +0xb11e06 */ __asm { ROL R11,0x8 }
    /* +0xb11e0a */ __asm { MOV RAX,R10 }
    /* +0xb11e0d */ __asm { ROL RAX,0x10 }
    /* +0xb11e11 */ __asm { XOR RAX,R11 }
    /* +0xb11e14 */ __asm { XOR RAX,R10 }
    /* +0xb11e17 */ __asm { MOV R11,RAX }
    /* +0xb11e1a */ __asm { ROL R11,0x20 }
    /* +0xb11e1e */ __asm { MOVZX R9D,R9W }
    /* +0xb11e22 */ __asm { MOV RSI,RAX }
    /* +0xb11e25 */ __asm { ROL RSI,0x10 }
    /* +0xb11e29 */ __asm { XOR RSI,R11 }
    /* +0xb11e2c */ __asm { XOR RSI,RAX }
    /* +0xb11e2f */ __asm { ROL RSI,0x20 }
    /* +0xb11e33 */ __asm { MOV R11,qword ptr GS:[R9] }
    /* +0xb11e37 */ __asm { LEA RAX,[0x7fffa478db8a] }
    /* +0xb11e3e */ __asm { MOV R9D,0x800857bf }
    /* +0xb11e44 */ __asm { MOV EDX,0x3b815616 }
    /* +0xb11e49 */ __asm { XOR R9D,0x66c0d858 }
    /* +0xb11e50 */ __asm { MOV R11,qword ptr [R11 + 0x48] }
    /* +0xb11e54 */ __asm { IMUL R10D,EDX,0x685b0fbd }
    /* +0xb11e5b */ __asm { ADD R10D,0x3f200507 }
    /* +0xb11e62 */ __asm { ROL R10D,CL }
    /* +0xb11e65 */ __asm { MOV EDX,0xcc703f69 }
    /* +0xb11e6a */ __asm { ADD EDX,0x2edb7264 }
    /* +0xb11e70 */ __asm { ROL EDX,0xe }
    /* +0xb11e73 */ __asm { XOR EDX,ECX }
    /* +0xb11e75 */ __asm { MOVSXD R8,EDX }
    /* +0xb11e78 */ __asm { MOVZX R8D,uint8_t ptr [RAX + R8*0x1 + 0x10] }
    /* +0xb11e7e */ __asm { CMP R9,R10 }
    /* +0xb11e81 */ __asm { JGE 0x7fffa5281ebc }
    /* +0xb11e83 */ __asm { MOV R9D,0xd5be5686 }
    /* +0xb11e89 */ __asm { MOV EDX,0xd5bd763b }
    /* +0xb11e8e */ __asm { SUB EDX,R9D }
    /* +0xb11e91 */ __asm { MOVSXD R9,EDX }
    /* +0xb11e94 */ __asm { MOV R10D,0x67c755cd }
    /* +0xb11e9a */ __asm { ADD R10D,0xc67ab946 }
    /* +0xb11ea1 */ __asm { LEA RAX,[0x7fffa4793145] }
    /* +0xb11ea8 */ __asm { ADD RAX,R9 }
    /* +0xb11eab */ __asm { IMUL R10D,EBX }
    /* +0xb11eaf */ __asm { ADD R10D,0x1d347354 }
    /* +0xb11eb6 */ __asm { MOV qword ptr [RBP + -0x18],R10 }
    /* +0xb11eba */ __asm { JMP 0x7fffa5281eec }
    /* +0xb11ebc */ __asm { LEA R9,[0x7fffa4785d99] }
    /* +0xb11ec3 */ __asm { MOV EDX,0x710dec }
    /* +0xb11ec8 */ __asm { XOR EDX,0x86dc75ad }
    /* +0xb11ece */ __asm { MOV AX,0xec2e }
    /* +0xb11ed2 */ __asm { XOR EAX,0x21a9 }
    /* +0xb11ed7 */ __asm { ROR AX,CL }
    /* +0xb11eda */ __asm { ROR EDX,CL }
    /* +0xb11edc */ __asm { NOT EDX }
    /* +0xb11ede */ __asm { MOVSXD R10,EDX }
    /* +0xb11ee1 */ __asm { MOV qword ptr [RBP + -0x18],R10 }
    /* +0xb11ee5 */ __asm { MOVSX RAX,AX }
    /* +0xb11ee9 */ __asm { ADD RAX,R9 }
    /* +0xb11eec */ __asm { MOVZX R10D,uint8_t ptr [RAX + R8*0x8 + 0x1f] }
    /* +0xb11ef2 */ __asm { NOT R10B }
    /* +0xb11ef5 */ __asm { ROL R10B,0x1 }
    /* +0xb11ef8 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R8*0x8 + 0x22] }
    /* +0xb11efe */ __asm { NOT R9B }
    /* +0xb11f01 */ __asm { ROL R9B,0x1 }
    /* +0xb11f04 */ __asm { MOVZX EDX,uint8_t ptr [RAX + R8*0x8 + 0x21] }
    /* +0xb11f0a */ __asm { NOT DL }
    /* +0xb11f0c */ __asm { ROL DL,0x1 }
    /* +0xb11f0e */ __asm { MOVZX R12D,uint8_t ptr [RAX + R8*0x8 + 0x1d] }
    /* +0xb11f14 */ __asm { NOT R12B }
    /* +0xb11f17 */ __asm { ROL R12B,0x1 }
    /* +0xb11f1a */ __asm { MOVZX R15D,uint8_t ptr [RAX + R8*0x8 + 0x1c] }
    /* +0xb11f20 */ __asm { NOT R15B }
    /* +0xb11f23 */ __asm { ROL R15B,0x1 }
    /* +0xb11f26 */ __asm { MOVZX R13D,uint8_t ptr [RAX + R8*0x8 + 0x23] }
    /* +0xb11f2c */ __asm { MOV uint8_t ptr [RBP + 0x7e],R9B }
    /* +0xb11f30 */ __asm { MOV uint8_t ptr [RBP + 0x78],R15B }
    /* +0xb11f34 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R8*0x8 + 0x1e] }
    /* +0xb11f3a */ __asm { NOT R9B }
    /* +0xb11f3d */ __asm { ROL R9B,0x1 }
    /* +0xb11f40 */ __asm { MOV uint8_t ptr [RBP + 0x7b],R10B }
    /* +0xb11f44 */ __asm { NOT R13B }
    /* +0xb11f47 */ __asm { ROL R13B,0x1 }
    /* +0xb11f4a */ __asm { MOVZX R10D,uint8_t ptr [RAX + R8*0x8 + 0x20] }
    /* +0xb11f50 */ __asm { NOT R10B }
    /* +0xb11f53 */ __asm { ROL R10B,0x1 }
    /* +0xb11f56 */ __asm { MOV uint8_t ptr [RBP + 0x7d],DL }
    /* +0xb11f59 */ __asm { MOV uint8_t ptr [RBP + 0x79],R12B }
    /* +0xb11f5d */ __asm { MOV uint8_t ptr [RBP + 0x7a],R9B }
    /* +0xb11f61 */ __asm { MOV uint8_t ptr [RBP + 0x7c],R10B }
    /* +0xb11f65 */ __asm { MOV uint8_t ptr [RBP + 0x7f],R13B }
    /* +0xb11f69 */ __asm { CMP R11,qword ptr [RBP + 0x78] }
    /* +0xb11f6d */ __asm { JZ 0x7fffa5281f79 }
    /* +0xb11f6f */ __asm { MOV qword ptr [RBP + 0x58],0x0 }
    /* +0xb11f77 */ __asm { JMP 0x7fffa5281fe4 }
    /* +0xb11f79 */ __asm { MOV R9D,0x88c89ecc }
    /* +0xb11f7f */ __asm { MOV R10,qword ptr [RBP + -0x18] }
    /* +0xb11f83 */ __asm { SUB R9D,R10D }
    /* +0xb11f86 */ __asm { ADD R9D,ECX }
    /* +0xb11f89 */ __asm { ROL R9D,0x18 }
    /* +0xb11f8d */ __asm { MOV R15,qword ptr [R9] }
    /* +0xb11f90 */ __asm { MOV R9D,0xda6ff65c }
    /* +0xb11f96 */ __asm { MOV EDX,R10D }
    /* +0xb11f99 */ __asm { SUB EDX,ECX }
    /* +0xb11f9b */ __asm { IMUL R9D,R9D,-0x30296c8f }
    /* +0xb11fa2 */ __asm { NOT R9D }
    /* +0xb11fa5 */ __asm { ADD R9D,EDX }
    /* +0xb11fa8 */ __asm { MOV R11,qword ptr [R9] }
    /* +0xb11fab */ __asm { MOV R9W,0xc340 }
    /* +0xb11fb0 */ __asm { LEA RAX,[0x7fffa4788352] }
    /* +0xb11fb7 */ __asm { ADD R9D,0xffffbaab }
    /* +0xb11fbe */ __asm { IMUL R9D,EBX }
    /* +0xb11fc2 */ __asm { XOR R9D,R10D }
    /* +0xb11fc5 */ __asm { MOVSX R8,R9W }
    /* +0xb11fc9 */ __asm { MOV RAX,qword ptr [RAX + R8*0x1] }
    /* +0xb11fcd */ __asm { TEST RAX,RAX }
    /* +0xb11fd0 */ __asm { JZ 0x7fffa5281fd7 }
    /* +0xb11fd2 */ __asm { MOV R9,qword ptr [RAX] }
    /* +0xb11fd5 */ __asm { JMP 0x7fffa5281fda }
    /* +0xb11fd7 */ __asm { XOR R9D,R9D }
    /* +0xb11fda */ __asm { ADD R9,R11 }
    /* +0xb11fdd */ __asm { SUB R15,R9 }
    /* +0xb11fe0 */ __asm { MOV qword ptr [RBP + 0x58],R15 }
    /* +0xb11fe4 */ __asm { MOV R9W,0xf1e1 }
    /* +0xb11fe9 */ __asm { MOV EDX,0xc30fc267 }
    /* +0xb11fee */ __asm { XOR R9D,0x3139 }
    /* +0xb11ff5 */ __asm { MOV R10,qword ptr [RBP + -0x18] }
    /* +0xb11ff9 */ __asm { MOV EAX,R10D }
    /* +0xb11ffc */ __asm { OR EAX,0x1 }
    /* +0xb11fff */ __asm { LEA R11,[0x7fffa47c873e] }
    /* +0xb12006 */ __asm { MOV dword ptr [RBP + 0x3c],EAX }
    /* +0xb12009 */ __asm { IMUL EDX,EAX }
    /* +0xb1200c */ __asm { XOR EDX,ECX }
    /* +0xb1200e */ __asm { ADD EDX,0x8cb621d9 }
    /* +0xb12014 */ __asm { MOVSXD R8,EDX }
    /* +0xb12017 */ __asm { MOV dword ptr [RBP + -0x2c],EBX }
    /* +0xb1201a */ __asm { IMUL R9D,EBX }
    /* +0xb1201e */ __asm { NOT R9D }
    /* +0xb12021 */ __asm { MOVSX RDX,R9W }
    /* +0xb12025 */ __asm { MOV R9D,0xb1e04b8e }
    /* +0xb1202b */ __asm { MOV qword ptr [RBP + 0x18],RCX }
    /* +0xb1202f */ __asm { SUB R9D,ECX }
    /* +0xb12032 */ __asm { XOR R9D,R10D }
    /* +0xb12035 */ __asm { NOT R9D }
    /* +0xb12038 */ __asm { MOVSXD RAX,R9D }
    /* +0xb1203b */ __asm { LEA R9,[0x7fffa47c092b] }
    /* +0xb12042 */ __asm { MOVZX ECX,uint8_t ptr [R9 + RDX*0x1 + 0x5] }
    /* +0xb12048 */ __asm { LEA R9,[0x7fffa47c95a6] }
    /* +0xb1204f */ __asm { ADD R9,RAX }
    /* +0xb12052 */ __asm { MOV RAX,qword ptr [R9 + RCX*0x8 + 0xf] }
    /* +0xb12057 */ __asm { XOR RAX,qword ptr [R11 + R8*0x1 + 0x3e] }
    /* +0xb1205c */ __asm { MOV qword ptr [RBP + 0x78],RAX }
    /* +0xb12060 */ __asm { MOV R12,qword ptr [RBP + 0x78] }
    /* +0xb12064 */ __asm { TEST R12,R12 }
    /* +0xb12067 */ __asm { JZ 0x7fffa5282292 }
    /* +0xb1206d */ __asm { MOV R9D,EDI }
    /* +0xb12070 */ __asm { SHL R9D,0x6 }
    /* +0xb12074 */ __asm { XOR R9D,EDI }
    /* +0xb12077 */ __asm { MOV EDX,R9D }
    /* +0xb1207a */ __asm { SHL EDX,0xc }
    /* +0xb1207d */ __asm { MOV ECX,R9D }
    /* +0xb12080 */ __asm { SHL ECX,0x18 }
    /* +0xb12083 */ __asm { XOR ECX,EDX }
    /* +0xb12085 */ __asm { XOR ECX,R9D }
    /* +0xb12088 */ __asm { MOV RAX,0x0 }
    /* +0xb1208f */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xb12096 */ __asm { CMP ECX,0x1 }
    /* +0xb12099 */ __asm { JA 0x7fffa52820b1 }
    /* +0xb1209b */ __asm { MOV R8D,0x800 }
    /* +0xb120a1 */ __asm { MOV RCX,RSI }
    /* +0xb120a4 */ __asm { XOR EDX,EDX }
    /* +0xb120a6 */ __asm { CALL R12 }
    /* +0xb120a9 */ __asm { MOV R15,RAX }
    /* +0xb120ac */ __asm { TEST RAX,RAX }
    /* +0xb120af */ __asm { JNZ 0x7fffa52820c2 }
    /* +0xb120b1 */ __asm { MOV R8D,0x1000 }
    /* +0xb120b7 */ __asm { MOV RCX,RSI }
    /* +0xb120ba */ __asm { XOR EDX,EDX }
    /* +0xb120bc */ __asm { CALL R12 }
    /* +0xb120bf */ __asm { MOV R15,RAX }
    /* +0xb120c2 */ __asm { TEST DIL,0x1 }
    /* +0xb120c6 */ __asm { JNZ 0x7fffa52821c6 }
    /* +0xb120cc */ __asm { TEST R15,R15 }
    /* +0xb120cf */ __asm { JZ 0x7fffa52821c6 }
    /* +0xb120d5 */ __asm { LEA R11,[0x7fffa47c69bd] }
    /* +0xb120dc */ __asm { MOV R9W,0x3666 }
    /* +0xb120e1 */ __asm { LEA RAX,[0x7fffa47bf8d2] }
    /* +0xb120e8 */ __asm { MOV EDX,0x8773e38a }
    /* +0xb120ed */ __asm { MOV RCX,qword ptr [RBP + 0x18] }
    /* +0xb120f1 */ __asm { SUB EDX,ECX }
    /* +0xb120f3 */ __asm { ROL EDX,0x8 }
    /* +0xb120f6 */ __asm { MOVSXD R8,EDX }
    /* +0xb120f9 */ __asm { XOR R8,0x1828ad00 }
    /* +0xb12100 */ __asm { MOVZX R8D,uint8_t ptr [R11 + R8*0x1 + 0x9] }
    /* +0xb12106 */ __asm { XOR R9D,ECX }
    /* +0xb12109 */ __asm { IMUL R9D,R9D,0x229b }
    /* +0xb12110 */ __asm { MOV RCX,qword ptr [RBP + -0x18] }
    /* +0xb12114 */ __asm { ADD R9D,ECX }
    /* +0xb12117 */ __asm { ADD R9D,0xffffa6c3 }
    /* +0xb1211e */ __asm { MOVSX R11,R9W }
    /* +0xb12122 */ __asm { ADD R11,RAX }
    /* +0xb12125 */ __asm { MOVZX R10D,uint8_t ptr [R11 + R8*0x8 + 0x16] }
    /* +0xb1212b */ __asm { MOVZX EAX,uint8_t ptr [R11 + R8*0x8 + 0xf] }
    /* +0xb12131 */ __asm { ROL AL,0x3 }
    /* +0xb12134 */ __asm { MOVZX EDX,uint8_t ptr [R11 + R8*0x8 + 0x10] }
    /* +0xb1213a */ __asm { ROL R10B,0x3 }
    /* +0xb1213e */ __asm { MOV uint8_t ptr [RBP + 0x7f],R10B }
    /* +0xb12142 */ __asm { MOV uint8_t ptr [RBP + 0x78],AL }
    /* +0xb12145 */ __asm { ROL DL,0x3 }
    /* +0xb12148 */ __asm { MOV uint8_t ptr [RBP + 0x79],DL }
    /* +0xb1214b */ __asm { MOVZX R10D,uint8_t ptr [R11 + R8*0x8 + 0x13] }
    /* +0xb12151 */ __asm { MOVZX EAX,uint8_t ptr [R11 + R8*0x8 + 0x14] }
    /* +0xb12157 */ __asm { ROL AL,0x3 }
    /* +0xb1215a */ __asm { MOV uint8_t ptr [RBP + 0x7d],AL }
    /* +0xb1215d */ __asm { MOVZX EAX,uint8_t ptr [R11 + R8*0x8 + 0x15] }
    /* +0xb12163 */ __asm { ROL AL,0x3 }
    /* +0xb12166 */ __asm { ROL R10B,0x3 }
    /* +0xb1216a */ __asm { MOV uint8_t ptr [RBP + 0x7c],R10B }
    /* +0xb1216e */ __asm { MOV uint8_t ptr [RBP + 0x7e],AL }
    /* +0xb12171 */ __asm { MOVZX R10D,uint8_t ptr [R11 + R8*0x8 + 0x11] }
    /* +0xb12177 */ __asm { ROL R10B,0x3 }
    /* +0xb1217b */ __asm { MOV uint8_t ptr [RBP + 0x7a],R10B }
    /* +0xb1217f */ __asm { MOVZX R10D,uint8_t ptr [R11 + R8*0x8 + 0x12] }
    /* +0xb12185 */ __asm { ROL R10B,0x3 }
    /* +0xb12189 */ __asm { MOV uint8_t ptr [RBP + 0x7b],R10B }
    /* +0xb1218d */ __asm { MOV R8,qword ptr [RBP + 0x78] }
    /* +0xb12191 */ __asm { PUSHFQ }
    /* +0xb12192 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb1219a */ __asm { POPFQ }
    /* +0xb1219b */ __asm { MOV dword ptr [RBP + 0x78],0x1b264a56 }
    /* +0xb121a2 */ __asm { MOV R9D,dword ptr [RBP + 0x78] }
    /* +0xb121a6 */ __asm { CMP R9D,0x90dba0a2 }
    /* +0xb121ad */ __asm { NOP }
    /* +0xb121ae */ __asm { NOP }
    /* +0xb121af */ __asm { NOP }
    /* +0xb121b0 */ __asm { NOP }
    /* +0xb121b1 */ __asm { NOP }
    /* +0xb121b2 */ __asm { TEST R8,R8 }
    /* +0xb121b5 */ __asm { JZ 0x7fffa528262c }
    /* +0xb121bb */ __asm { MOV RDX,R15 }
    /* +0xb121be */ __asm { MOV ECX,0x1 }
    /* +0xb121c3 */ __asm { CALL R8 }
    /* +0xb121c6 */ __asm { MOV RSI,qword ptr [RBP + 0x58] }
    /* +0xb121ca */ __asm { TEST RSI,RSI }
    /* +0xb121cd */ __asm { JZ 0x7fffa528226a }
    /* +0xb121d3 */ __asm { MOV R9D,0xdfff7892 }
    /* +0xb121d9 */ __asm { MOV R11D,0xc0000091 }
    /* +0xb121df */ __asm { SUB R11D,R9D }
    /* +0xb121e2 */ __asm { ROL R11D,0x12 }
    /* +0xb121e6 */ __asm { MOV RCX,qword ptr [RBP + 0x18] }
    /* +0xb121ea */ __asm { ROL R11D,CL }
    /* +0xb121ed */ __asm { MOV R11,qword ptr [R11] }
    /* +0xb121f0 */ __asm { MOV R9D,0x974b0210 }
    /* +0xb121f6 */ __asm { IMUL R9D,R9D,-0x4ccd7a55 }
    /* +0xb121fd */ __asm { MOV R10,qword ptr [RBP + -0x18] }
    /* +0xb12201 */ __asm { SUB R9D,R10D }
    /* +0xb12204 */ __asm { ROL R9D,0x1c }
    /* +0xb12208 */ __asm { ROL R9D,CL }
    /* +0xb1220b */ __asm { MOV RAX,qword ptr [R9] }
    /* +0xb1220e */ __asm { LEA R9,[0x7fffa4793fff] }
    /* +0xb12215 */ __asm { MOV EDX,0xc286682 }
    /* +0xb1221a */ __asm { IMUL EDX,EDX,0x1f26e0c5 }
    /* +0xb12220 */ __asm { NOT EDX }
    /* +0xb12222 */ __asm { ADD EDX,R10D }
    /* +0xb12225 */ __asm { ROL EDX,0xb }
    /* +0xb12228 */ __asm { MOVSXD R8,EDX }
    /* +0xb1222b */ __asm { MOV R9,qword ptr [R9 + R8*0x1] }
    /* +0xb1222f */ __asm { TEST R9,R9 }
    /* +0xb12232 */ __asm { JZ 0x7fffa5282239 }
    /* +0xb12234 */ __asm { MOV R9,qword ptr [R9] }
    /* +0xb12237 */ __asm { JMP 0x7fffa528223c }
    /* +0xb12239 */ __asm { XOR R9D,R9D }
    /* +0xb1223c */ __asm { ADD RSI,RAX }
    /* +0xb1223f */ __asm { ADD RSI,R9 }
    /* +0xb12242 */ __asm { LEA RAX,[0x7fffa47c1d15] }
    /* +0xb12249 */ __asm { SUB R11,RSI }
    /* +0xb1224c */ __asm { MOV R9W,0xfea9 }
    /* +0xb12251 */ __asm { SUB R9D,ECX }
    /* +0xb12254 */ __asm { MOV RCX,qword ptr [RBP + -0x18] }
    /* +0xb12258 */ __asm { XOR ECX,R9D }
    /* +0xb1225b */ __asm { ADD ECX,0xffff842b }
    /* +0xb12261 */ __asm { MOVSX R8,CX }
    /* +0xb12265 */ __asm { ADD.LOCK qword ptr [RAX + R8*0x1],R11 }
    /* +0xb1226a */ __asm { MOV R11,R15 }
    /* +0xb1226d */ __asm { ROL R11,0x39 }
    /* +0xb12271 */ __asm { MOV RAX,R15 }
    /* +0xb12274 */ __asm { ROL RAX,0x34 }
    /* +0xb12278 */ __asm { XOR RAX,R11 }
    /* +0xb1227b */ __asm { XOR RAX,R15 }
    /* +0xb1227e */ __asm { ADD RSP,0x118 }
    /* +0xb12285 */ __asm { POP R12 }
    /* +0xb12287 */ __asm { POP R13 }
    /* +0xb12289 */ __asm { POP RBX }
    /* +0xb1228a */ __asm { POP RSI }
    /* +0xb1228b */ __asm { POP R14 }
    /* +0xb1228d */ __asm { POP R15 }
    /* +0xb1228f */ __asm { POP RDI }
    /* +0xb12290 */ __asm { POP RBP }
    /* +0xb12291 */ __asm { RET }
    /* +0xb12292 */ __asm { MOV R9W,0x10ad }
    /* +0xb12297 */ __asm { MOV RAX,0x0 }
    /* +0xb1229e */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xb122a5 */ __asm { MOV R10,qword ptr [RBP + -0x18] }
    /* +0xb122a9 */ __asm { MOV EAX,R10D }
    /* +0xb122ac */ __asm { OR EAX,0x1 }
    /* +0xb122af */ __asm { MOV dword ptr [RBP + 0x50],EAX }
    /* +0xb122b2 */ __asm { IMUL EAX,R9D }
    /* +0xb122b6 */ __asm { ADD EAX,0xffffa195 }
    /* +0xb122bb */ __asm { MOV RCX,qword ptr [RBP + 0x18] }
    /* +0xb122bf */ __asm { ROL AX,CL }
    /* +0xb122c2 */ __asm { MOVZX R9D,AX }
    /* +0xb122c6 */ __asm { MOV R11,qword ptr GS:[R9] }
    /* +0xb122ca */ __asm { MOV dword ptr [RBP + 0x78],0x6b38e5ec }
    /* +0xb122d1 */ __asm { MOV R9D,dword ptr [RBP + 0x78] }
    /* +0xb122d5 */ __asm { MOV EDX,0x96f0b618 }
    /* +0xb122da */ __asm { ADD EDX,R10D }
    /* +0xb122dd */ __asm { ROL EDX,0x11 }
    /* +0xb122e0 */ __asm { SUB EDX,ECX }
    /* +0xb122e2 */ __asm { CMP R9D,EDX }
    /* +0xb122e5 */ __asm { JNC 0x7fffa5283f3d }
    /* +0xb122eb */ __asm { PUSHFQ }
    /* +0xb122ec */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb122f4 */ __asm { POPFQ }
    /* +0xb122f5 */ __asm { MOV R10,qword ptr [R11 + 0x18] }
    /* +0xb122f9 */ __asm { MOV dword ptr [RBP + 0x78],0x7b2e9f5f }
    /* +0xb12300 */ __asm { MOV R9D,dword ptr [RBP + 0x78] }
    /* +0xb12304 */ __asm { XOR EDX,EDX }
    /* +0xb12306 */ __asm { MOV ECX,dword ptr [RBP + 0x50] }
    /* +0xb12309 */ __asm { IMUL ECX,EDX }
    /* +0xb1230c */ __asm { ROL CX,0xd }
    /* +0xb12310 */ __asm { MOV EAX,0x89e7257a }
    /* +0xb12315 */ __asm { MOV R8D,dword ptr [RBP + -0x2c] }
    /* +0xb12319 */ __asm { MOV EDX,R8D }
    /* +0xb1231c */ __asm { IMUL EDX,ECX }
    /* +0xb1231f */ __asm { MOVZX ECX,DX }
    /* +0xb12322 */ __asm { MOV R11,qword ptr [RBP + -0x18] }
    /* +0xb12326 */ __asm { XOR EAX,R11D }
    /* +0xb12329 */ __asm { AND R9D,0x1 }
    /* +0xb1232d */ __asm { XOR EDX,EDX }
    /* +0xb1232f */ __asm { CMP R9D,ECX }
    /* +0xb12332 */ __asm { SETNC DL }
    /* +0xb12335 */ __asm { MOV ECX,0xd336576b }
    /* +0xb1233a */ __asm { ADD ECX,R11D }
    /* +0xb1233d */ __asm { IMUL ECX,R8D }
    /* +0xb12341 */ __asm { NOT ECX }
    /* +0xb12343 */ __asm { IMUL EAX,EAX,-0x70fa6843 }
    /* +0xb12349 */ __asm { SUB EAX,dword ptr [RBP + 0x18] }
    /* +0xb1234c */ __asm { XOR R8D,R8D }
    /* +0xb1234f */ __asm { TEST R9D,R9D }
    /* +0xb12352 */ __asm { SETZ R8B }
    /* +0xb12356 */ __asm { CMP RAX,RCX }
    /* +0xb12359 */ __asm { CMOVGE R8D,EDX }
    /* +0xb1235d */ __asm { CMP R8B,0x1 }
    /* +0xb12361 */ __asm { JZ 0x7fffa5283f48 }
    /* +0xb12367 */ __asm { MOV R11,R10 }
    /* +0xb1236a */ __asm { MOV RAX,qword ptr [R10 + 0x10] }
    /* +0xb1236e */ __asm { ADD R11,0x10 }
    /* +0xb12372 */ __asm { TEST RAX,RAX }
    /* +0xb12375 */ __asm { SETZ R10B }
    /* +0xb12379 */ __asm { MOV qword ptr [RBP + -0x10],R11 }
    /* +0xb1237d */ __asm { MOV qword ptr [RBP + 0x48],RAX }
    /* +0xb12381 */ __asm { CMP RAX,R11 }
    /* +0xb12384 */ __asm { SETZ DL }
    /* +0xb12387 */ __asm { OR DL,R10B }
    /* +0xb1238a */ __asm { JZ 0x7fffa5282394 }
    /* +0xb1238c */ __asm { XOR R12D,R12D }
    /* +0xb1238f */ __asm { JMP 0x7fffa528206d }
    /* +0xb12394 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xb1239b */ __asm { MOV RCX,0x0 }
    /* +0xb123a2 */ __asm { PUSHFQ }
    /* +0xb123a3 */ __asm { POP RAX }
    /* +0xb123a4 */ __asm { MOV qword ptr [RBP + -0x50],RAX }
    /* +0xb123a8 */ __asm { XOR R12D,R12D }
    /* +0xb123ab */ __asm { MOV RBX,qword ptr [RBP + 0x18] }
    /* +0xb123af */ __asm { TEST dword ptr [RBP + -0x50],0x100 }
    /* +0xb123b6 */ __asm { NOP }
    /* +0xb123b7 */ __asm { NOP }
    /* +0xb123b8 */ __asm { NOP }
    /* +0xb123b9 */ __asm { NOP }
    /* +0xb123ba */ __asm { NOP }
    /* +0xb123bb */ __asm { MOV dword ptr [RBP + 0x78],0xd5add174 }
    /* +0xb123c2 */ __asm { MOV R9D,dword ptr [RBP + 0x78] }
    /* +0xb123c6 */ __asm { MOV DX,0xd0d2 }
    /* +0xb123ca */ __asm { IMUL EDX,EDX,0x107 }
    /* +0xb123d0 */ __asm { MOV RCX,qword ptr [RBP + 0x18] }
    /* +0xb123d4 */ __asm { ROR DX,CL }
    /* +0xb123d7 */ __asm { XOR EDX,dword ptr [RBP + -0x18] }
    /* +0xb123da */ __asm { MOVZX EDX,DX }
    /* +0xb123dd */ __asm { CMP R9D,EDX }
    /* +0xb123e0 */ __asm { NOP }
    /* +0xb123e1 */ __asm { NOP }
    /* +0xb123e2 */ __asm { NOP }
    /* +0xb123e3 */ __asm { NOP }
    /* +0xb123e4 */ __asm { NOP }
    /* +0xb123e5 */ __asm { MOV R11,qword ptr [RBP + 0x48] }
    /* +0xb123e9 */ __asm { MOVZX R9D,word ptr [R11 + 0x58] }
    /* +0xb123ee */ __asm { CMP R9D,0x2 }
    /* +0xb123f2 */ __asm { JNC 0x7fffa5282404 }
    /* +0xb123f4 */ __asm { MOV dword ptr [RBP + 0x78],0x9e048af0 }
    /* +0xb123fb */ __asm { MOV R9D,dword ptr [RBP + 0x78] }
    /* +0xb123ff */ __asm { JMP 0x7fffa5282534 }
    /* +0xb12404 */ __asm { SHR R9D,0x1 }
    /* +0xb12407 */ __asm { MOV R11,qword ptr [RBP + 0x48] }
    /* +0xb1240b */ __asm { MOV R11,qword ptr [R11 + 0x60] }
    /* +0xb1240f */ __asm { MOV qword ptr [RBP + -0x58],R11 }
    /* +0xb12413 */ __asm { MOV DX,0x1738 }
    /* +0xb12417 */ __asm { ADD EDX,0xffff8a86 }
    /* +0xb1241d */ __asm { IMUL EDX,dword ptr [RBP + 0x50] }
    /* +0xb12421 */ __asm { MOV qword ptr [RBP + 0x20],R9 }
    /* +0xb12425 */ __asm { MOVZX ECX,R9W }
    /* +0xb12429 */ __asm { XOR ECX,EDX }
    /* +0xb1242b */ __asm { MOVZX EDX,CX }
    /* +0xb1242e */ __asm { CMP EDX,0x7e63 }
    /* +0xb12434 */ __asm { JNZ 0x7fffa5282565 }
    /* +0xb1243a */ __asm { MOV R11,-0x5a8e4219ca8e3c15 }
    /* +0xb12444 */ __asm { MOV qword ptr [RBP + -0x28],R11 }
    /* +0xb12448 */ __asm { XOR R10D,R10D }
    /* +0xb1244b */ __asm { TEST uint8_t ptr [RBP + 0x20],0x1 }
    /* +0xb1244f */ __asm { JZ 0x7fffa52824dd }
    /* +0xb12455 */ __asm { MOV R9D,0x744884c }
    /* +0xb1245b */ __asm { MOV R8D,0xe71a9171 }
    /* +0xb12461 */ __asm { MOV DX,0x5258 }
    /* +0xb12465 */ __asm { IMUL R9D,dword ptr [RBP + 0x3c] }
    /* +0xb1246a */ __asm { MOV RCX,qword ptr [RBP + 0x18] }
    /* +0xb1246e */ __asm { ROL R9D,CL }
    /* +0xb12471 */ __asm { MOV R11,qword ptr [RBP + -0x18] }
    /* +0xb12475 */ __asm { ADD EDX,R11D }
    /* +0xb12478 */ __asm { ADD R9D,0xbd3b30f5 }
    /* +0xb1247f */ __asm { MOV RAX,qword ptr [RBP + -0x58] }
    /* +0xb12483 */ __asm { MOVZX R10D,word ptr [RAX + R10*0x2] }
    /* +0xb12488 */ __asm { MOV EAX,R10D }
    /* +0xb1248b */ __asm { OR EAX,0x20 }
    /* +0xb1248e */ __asm { ADD R8D,R11D }
    /* +0xb12491 */ __asm { IMUL R8D,dword ptr [RBP + -0x2c] }
    /* +0xb12496 */ __asm { ADD R8D,0x8001fcd0 }
    /* +0xb1249d */ __asm { ROL R8D,0xd }
    /* +0xb124a1 */ __asm { XOR EDX,ECX }
    /* +0xb124a3 */ __asm { MOV R11D,0x40 }
    /* +0xb124a9 */ __asm { SUB R11D,R10D }
    /* +0xb124ac */ __asm { CMP R11W,DX }
    /* +0xb124b0 */ __asm { CMOVBE EAX,R10D }
    /* +0xb124b4 */ __asm { MOVZX ECX,AL }
    /* +0xb124b7 */ __asm { MOV RAX,qword ptr [RBP + -0x28] }
    /* +0xb124bb */ __asm { XOR RAX,RCX }
    /* +0xb124be */ __asm { MOV R11,RAX }
    /* +0xb124c1 */ __asm { MOV R10,0x8000000081b }
    /* +0xb124cb */ __asm { AND R11,R10 }
    /* +0xb124ce */ __asm { IMUL RAX,R10 }
    /* +0xb124d2 */ __asm { CMP R9,R8 }
    /* +0xb124d5 */ __asm { CMOVL RAX,R11 }
    /* +0xb124d9 */ __asm { MOV qword ptr [RBP + -0x28],RAX }
    /* +0xb124dd */ __asm { MOV R9D,0xfcadd9b9 }
    /* +0xb124e3 */ __asm { MOV EDX,0xce711119 }
    /* +0xb124e8 */ __asm { IMUL R9D,dword ptr [RBP + -0x2c] }
    /* +0xb124ed */ __asm { ADD R9D,0xc0bbba9d }
    /* +0xb124f4 */ __asm { ADD EDX,0x8913df0b }
    /* +0xb124fa */ __asm { MOV RCX,qword ptr [RBP + 0x18] }
    /* +0xb124fe */ __asm { ROR EDX,CL }
    /* +0xb12500 */ __asm { IMUL R9D,dword ptr [RBP + 0x3c] }
    /* +0xb12505 */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xb12509 */ __asm { MOV R11D,0x9c8d5ae3 }
    /* +0xb1250f */ __asm { XOR RCX,R11 }
    /* +0xb12512 */ __asm { ADD R9,RCX }
    /* +0xb12515 */ __asm { MOV RCX,qword ptr [RBP + -0x18] }
    /* +0xb12519 */ __asm { ROL EDX,CL }
    /* +0xb1251b */ __asm { MOV dword ptr [RBP + 0x78],EDX }
    /* +0xb1251e */ __asm { MOV EDX,dword ptr [RBP + 0x78] }
    /* +0xb12521 */ __asm { MOV R11,-0xe0b78f837434b26 }
    /* +0xb1252b */ __asm { CMP R9,R11 }
    /* +0xb1252e */ __asm { JZ 0x7fffa52830f7 }
    /* +0xb12534 */ __asm { MOV RAX,0x221afcb7407d7407 }
    /* +0xb1253e */ __asm { MOV R11,qword ptr [RBP + 0x48] }
}


// ============================================================================
// Function : Unwind@7fffa5284f90  |  RVA: 0xb14f90  |  Size: 244 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5284f90(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  int iVar6;
  int64_t lVar7;
  
  uVar4 = (short)*(uint32_t *)(param_2 + 0x54) * 0x9f5;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x68) & 0xf;
  if (*(uint64_t *)(param_2 + 0xd8) !=
      (uint64_t)(uint16_t)((uVar4 << bVar2 | uVar4 >> 0x10 - bVar2) + 0x1101)) {
    uVar3 = (uint32_t)*(uint64_t *)(param_2 + 0x98);
    uVar5 = (*(uint32_t *)(param_2 + 0x68) ^ 0x855b8907) - uVar3;
    iVar6 = (uVar3 ^ 0x1ed7bda9) * *(int *)(param_2 + 0xbc);
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x98) & 0xf;
    plVar1 = *(int64_t **)
              ((int64_t)(short)(0x3cae << bVar2 | 0x3caeU >> 0x10 - bVar2) + 0x7fffa47874e8);
    if (plVar1 == (int64_t *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar1;
    }
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)(*(int *)(param_2 + 0x54) * 0x48951864 + *(int *)(param_2 + 0x68)) +
             0x7fffa47c7e8d);
    *plVar1 = *plVar1 + (*(int64_t *)
                          (uint64_t)((uVar5 >> 1 | (uint32_t)((uVar5 & 1) != 0) << 0x1f) + 0x7c3c7165)
                        - (*(int64_t *)(param_2 + 0xd8) +
                           *(int64_t *)(uint64_t)((iVar6 * 2 | (uint32_t)(iVar6 < 0)) + 0x288e4525) +
                          lVar7));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5285090  |  RVA: 0xb15090  |  Size: 4729 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5285090(uint64_t param_1,uint64_t param_2,uint64_t *param_3,uint64_t *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint8_t bVar5;
  uint32_t uVar6;
  int64_t lVar7;
  bool bVar8;
  uint8_t bVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  int64_t in_RAX;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  int iVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int iVar18;
  uint64_t *puVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint32_t uVar23;
  int64_t lVar24;
  int64_t lVar25;
  uint32_t uVar26;
  int64_t in_R10;
  int64_t lVar27;
  uint32_t uVar28;
  int64_t lVar29;
  uint64_t *puVar30;
  int64_t lVar31;
  uint64_t *puVar32;
  uint64_t *puVar33;
  uint64_t uVar34;
  int iVar35;
  uint32_t uVar36;
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  char cVar40;
  uint8_t uVar43;
  char cVar44;
  uint8_t uVar45;
  char cVar46;
  uint8_t uVar47;
  char cVar48;
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  char cStack_1d8;
  uint32_t uStack_1c8;
  uint32_t auStack_1b8 [64];
  uint64_t *puStack_b8;
  int iStack_ac;
  uint64_t *puStack_a8;
  uint64_t uStack_a0;
  int64_t lStack_98;
  uint64_t uStack_90;
  uint32_t uStack_88;
  uint32_t uStack_84;
  uint64_t uStack_78;
  uint64_t uStack_68;
  uint64_t *puStack_60;
  int iStack_58;
  uint32_t uStack_54;
  uint64_t *puStack_50;
  uint64_t uStack_48;
  
  uVar26 = (uint32_t)in_R10;
  bVar9 = (uint8_t)in_R10;
  param_1 = (param_1 << 0x3b | param_1 >> 5) ^ (param_1 << 0x1c | param_1 >> 0x24) ^ param_1;
  param_1 = (param_1 << 0x36 | param_1 >> 10) ^ (param_1 << 0x38 | param_1 >> 8) ^ param_1;
  param_1 = (param_1 << 0x30 | param_1 >> 0x10) ^ (param_1 << 0x2c | param_1 >> 0x14) ^ param_1;
  param_1 = (param_1 << 0x20 | param_1 >> 0x20) ^ (param_1 << 0x18 | param_1 >> 0x28) ^ param_1;
  uVar20 = param_1 << 0x10 | param_1 >> 0x30;
  puStack_b8 = (uint64_t *)((in_R10 + 0x5730fe28ea47c890) * in_RAX);
  uVar11 = *(uint32_t *)(uVar20 + 0x10c);
  uVar10 = 6;
  if (uVar11 < 6) {
    uVar10 = uVar11;
  }
  lVar7 = *(int64_t *)(uVar20 + 8);
  uVar28 = 1 << (*(uint8_t *)(uVar20 + 0x100) & 0x1f);
  iVar35 = 1 << ((uint8_t)uVar10 & 0x1f);
  uStack_90 = (int64_t)param_3 - lVar7;
  iStack_ac = 0;
  if ((uint16_t)(0xc00 << (bVar9 & 0xf) | 0xc00U >> 0x10 - (bVar9 & 0xf)) < uVar11) {
    iStack_ac = 1 << ((char)uVar11 - 6U & 0x1f);
  }
  uVar11 = *(uint32_t *)(uVar20 + 0x1c);
  uStack_78 = (uint64_t)*(uint32_t *)(uVar20 + 0x18);
  lStack_98 = *(int64_t *)(uVar20 + 0x70);
  lVar31 = *(int64_t *)(uVar20 + 0x38);
  puStack_a8 = param_3;
  uVar10 = (int)*param_3 * -0x61c8864f;
  uVar23 = uVar10 >> (0x22U - *(char *)(*(uint64_t **)(uVar20 + 0xf8) + 0x21) & 0x1f);
  puStack_60 = param_4;
  uStack_a0 = (int64_t)(int)uVar23;
  if (-0x15af08b6 <
      (int64_t)
      (uint64_t)
      ((-0x3f231a0f << (bVar9 & 0x1f) | 0xc0dce5f1U >> 0x20 - (bVar9 & 0x1f)) * -0x77d4e2ab)) {
    uStack_a0 = (uint64_t)uVar23;
  }
  uVar36 = (uint32_t)uStack_90;
  uVar23 = uVar36 - uVar28;
  if (uVar36 - uVar11 <= uVar28) {
    uVar23 = uVar11;
  }
  puStack_50 = *(uint64_t **)(uVar20 + 0xf8);
  if (*(int *)(uVar20 + 0x28) != 0) {
    uVar23 = uVar11;
  }
  cStack_1d8 = (char)*(uint32_t *)(uVar20 + 0x34);
  uStack_1c8 = (uint32_t)*(uint64_t *)(uVar20 + 0x60);
  if (*(int *)(uVar20 + 300) == 0) {
    uVar11 = *(uint32_t *)(uVar20 + 0x2c);
    uVar21 = (uint64_t)uVar11;
    lVar29 = lVar31;
    lVar25 = lStack_98;
    if (0x180 < uVar36 - uVar11) {
      if (uVar11 < 0xffffffa0) {
        uStack_68 = uVar21 + 0x60;
        uStack_48 = uVar21 + 0x5f;
        uVar22 = uVar21;
        do {
          uVar17 = (uint64_t)((uint32_t)uVar22 & 7);
          bVar8 = uVar21 + 0x60 <= uVar22 + 1;
          if ((uVar26 + 0x8ae78c27 ^ 0x1e125158) <= (0x409c60f7 - uVar26) * 0x149dea33 + 0xc240cfe0)
          {
            bVar8 = uVar21 + 0x5f == uVar22;
          }
          uVar11 = *(uint32_t *)(lVar7 + 8 + uVar22);
          uVar10 = uVar11 | 0x9e3779b1;
          if ((uint64_t)
              ((0x26e113c5 << (bVar9 & 0x1f) | 0x26e113c5U >> 0x20 - (bVar9 & 0x1f)) + 0xc8596f0c) <
              0xffffffffc261961c) {
            uVar10 = uVar11 * -0x61c8864f;
          }
          uVar11 = *(uint32_t *)(uVar20 + 0x40 + uVar17 * 4);
          uVar16 = (uint64_t)(uVar11 >> 2 & 0xffffffc0);
          *(uint32_t *)(uVar20 + 0x40 + uVar17 * 4) =
               (uVar10 ^ *(uint32_t *)(uVar20 + 0x60)) >> (0x18U - cStack_1d8 & 0x1f);
          lVar29 = 0;
          if ((*(uint8_t *)(lVar31 + uVar16) & 0x3f) == 1) {
            lVar29 = 0x3f;
          }
          lVar29 = (uint64_t)(*(uint8_t *)(lVar31 + uVar16) - 1 & 0x3f) + lVar29;
          *(char *)(lVar31 + uVar16) = (char)lVar29;
          *(char *)(lVar31 + uVar16 + lVar29) = (char)uVar11;
          *(uint32_t *)(lStack_98 + uVar16 * 4 + lVar29 * 4) = (uint32_t)uVar22;
          uVar22 = uVar22 + 1;
        } while (!bVar8);
        lVar29 = *(int64_t *)(uVar20 + 0x38);
        lVar25 = *(int64_t *)(uVar20 + 0x70);
      }
      uVar11 = uVar36 - 0x20;
      uVar21 = (uint64_t)uVar11 + lVar7;
      uVar28 = ((int)((int64_t)param_3 + 1U) - (int)uVar21) + 1;
      uVar10 = 8;
      if (uVar28 < 8) {
        uVar10 = uVar28;
      }
      uVar28 = 0;
      if (uVar21 <= (int64_t)param_3 + 1U) {
        uVar28 = uVar10;
      }
      if (uVar11 < (uVar36 + uVar28) - 0x20) {
        uVar6 = *(uint32_t *)(uVar20 + 0x34);
        uVar10 = *(uint32_t *)(uVar20 + 0x60);
        uVar21 = (uint64_t)uVar11;
        do {
          *(uint32_t *)(uVar20 + 0x40 + (uint64_t)((uint32_t)uVar21 & 7) * 4) =
               (*(int *)(lVar7 + uVar21) * -0x61c8864f ^ uVar10) >> (0x18U - (char)uVar6 & 0x1f);
          uVar28 = uVar28 - 1;
          uVar21 = uVar21 + 1;
        } while (uVar28 != 0);
      }
    }
    if (uVar11 < uVar36) {
      lVar27 = *(int64_t *)(uVar20 + 8);
      iVar15 = 0x18 - *(int *)(uVar20 + 0x34);
      uVar21 = (uint64_t)uVar11;
      uStack_68 = uStack_90 & 0xffffffff;
      while( true ) {
        uVar22 = (uint64_t)((uint32_t)uVar21 & 7);
        uVar10 = *(int *)(lVar27 + 8 + uVar21) * -0x61c8864f ^ *(uint32_t *)(uVar20 + 0x60);
        uVar11 = uVar10 >> ((uint8_t)iVar15 & 0x1f);
        if ((uVar26 ^ 0x12850d18) + 0x9be7ea8b <= 0x3467a5ef - uVar26) {
          uVar11 = uVar10 * iVar15;
        }
        uVar10 = *(uint32_t *)(uVar20 + 0x40 + uVar22 * 4);
        *(uint32_t *)(uVar20 + 0x40 + uVar22 * 4) = uVar11;
        uVar22 = (uint64_t)(uVar10 >> 2 & 0xffffffc0);
        lVar24 = 0x3f;
        if ((*(uint8_t *)(lVar29 + uVar22) & 0x3f) != 1) {
          lVar24 = 0;
        }
        lVar24 = (uint64_t)(*(uint8_t *)(lVar29 + uVar22) - 1 & 0x3f) + lVar24;
        *(char *)(lVar29 + uVar22) = (char)lVar24;
        *(char *)(lVar29 + uVar22 + lVar24) = (char)uVar10;
        *(uint32_t *)(lVar25 + uVar22 * 4 + lVar24 * 4) = (uint32_t)uVar21;
        if ((uStack_90 & 0xffffffff) - 1 == uVar21) break;
        uVar21 = uVar21 + 1;
      }
    }
    *(uint32_t *)(uVar20 + 0x2c) = uVar36;
    uVar11 = *(uint32_t *)(uVar20 + 0x40 + (uint64_t)(uVar36 & 7) * 4);
    *(uint32_t *)(uVar20 + 0x40 + (uint64_t)(uVar36 & 7) * 4) =
         (*(int *)(lVar7 + 8 + (uStack_90 & 0xffffffff)) * -0x61c8864f ^ uStack_1c8) >>
         (0x18U - cStack_1d8 & 0x1f);
  }
  else {
    *(uint32_t *)(uVar20 + 0x2c) = uVar36;
    uVar11 = (uVar10 ^ uStack_1c8) >> (0x18U - cStack_1d8 & 0x1f);
  }
  uVar22 = (uint64_t)(uVar11 >> 2 & 0xffffffc0);
  *(int *)(uVar20 + 0x68) = *(int *)(uVar20 + 0x68) + uVar11;
  uVar47 = (uint8_t)(uVar11 >> 0x18);
  uVar45 = (uint8_t)(uVar11 >> 0x10);
  uVar43 = (uint8_t)(uVar11 >> 8);
  auVar41._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar47,uVar47),uVar45),CONCAT14(uVar45,uVar11)) >> 0x20);
  auVar41[3] = uVar43;
  auVar41[2] = uVar43;
  auVar41[0] = (uint8_t)uVar11;
  auVar41[1] = auVar41[0];
  auVar41._8_8_ = 0;
  auVar42 = pshuflw(auVar41,auVar41,0);
  lVar29 = lStack_98 + uVar22 * 4;
  bVar5 = *(uint8_t *)(lVar31 + uVar22);
  pcVar1 = (char *)(lVar31 + uVar22);
  pcVar2 = (char *)(lVar31 + 0x10 + uVar22);
  pcVar3 = (char *)(lVar31 + 0x20 + uVar22);
  pcVar4 = (char *)(lVar31 + 0x30 + uVar22);
  cVar40 = auVar42[0];
  auVar37[0] = -(*pcVar2 == cVar40);
  cVar44 = auVar42[1];
  auVar37[1] = -(pcVar2[1] == cVar44);
  cVar46 = auVar42[2];
  auVar37[2] = -(pcVar2[2] == cVar46);
  cVar48 = auVar42[3];
  auVar37[3] = -(pcVar2[3] == cVar48);
  auVar37[4] = -(pcVar2[4] == cVar40);
  auVar37[5] = -(pcVar2[5] == cVar44);
  auVar37[6] = -(pcVar2[6] == cVar46);
  auVar37[7] = -(pcVar2[7] == cVar48);
  auVar37[8] = -(pcVar2[8] == cVar40);
  auVar37[9] = -(pcVar2[9] == cVar44);
  auVar37[10] = -(pcVar2[10] == cVar46);
  auVar37[0xb] = -(pcVar2[0xb] == cVar48);
  auVar37[0xc] = -(pcVar2[0xc] == cVar40);
  auVar37[0xd] = -(pcVar2[0xd] == cVar44);
  auVar37[0xe] = -(pcVar2[0xe] == cVar46);
  auVar37[0xf] = -(pcVar2[0xf] == cVar48);
  auVar39[0] = -(*pcVar3 == cVar40);
  auVar39[1] = -(pcVar3[1] == cVar44);
  auVar39[2] = -(pcVar3[2] == cVar46);
  auVar39[3] = -(pcVar3[3] == cVar48);
  auVar39[4] = -(pcVar3[4] == cVar40);
  auVar39[5] = -(pcVar3[5] == cVar44);
  auVar39[6] = -(pcVar3[6] == cVar46);
  auVar39[7] = -(pcVar3[7] == cVar48);
  auVar39[8] = -(pcVar3[8] == cVar40);
  auVar39[9] = -(pcVar3[9] == cVar44);
  auVar39[10] = -(pcVar3[10] == cVar46);
  auVar39[0xb] = -(pcVar3[0xb] == cVar48);
  auVar39[0xc] = -(pcVar3[0xc] == cVar40);
  auVar39[0xd] = -(pcVar3[0xd] == cVar44);
  auVar39[0xe] = -(pcVar3[0xe] == cVar46);
  auVar39[0xf] = -(pcVar3[0xf] == cVar48);
  auVar38[0] = -(*pcVar4 == cVar40);
  auVar38[1] = -(pcVar4[1] == cVar44);
  auVar38[2] = -(pcVar4[2] == cVar46);
  auVar38[3] = -(pcVar4[3] == cVar48);
  auVar38[4] = -(pcVar4[4] == cVar40);
  auVar38[5] = -(pcVar4[5] == cVar44);
  auVar38[6] = -(pcVar4[6] == cVar46);
  auVar38[7] = -(pcVar4[7] == cVar48);
  auVar38[8] = -(pcVar4[8] == cVar40);
  auVar38[9] = -(pcVar4[9] == cVar44);
  auVar38[10] = -(pcVar4[10] == cVar46);
  auVar38[0xb] = -(pcVar4[0xb] == cVar48);
  auVar38[0xc] = -(pcVar4[0xc] == cVar40);
  auVar38[0xd] = -(pcVar4[0xd] == cVar44);
  auVar38[0xe] = -(pcVar4[0xe] == cVar46);
  auVar38[0xf] = -(pcVar4[0xf] == cVar48);
  auVar42[0] = -(*pcVar1 == cVar40);
  auVar42[1] = -(pcVar1[1] == cVar44);
  auVar42[2] = -(pcVar1[2] == cVar46);
  auVar42[3] = -(pcVar1[3] == cVar48);
  auVar42[4] = -(pcVar1[4] == cVar40);
  auVar42[5] = -(pcVar1[5] == cVar44);
  auVar42[6] = -(pcVar1[6] == cVar46);
  auVar42[7] = -(pcVar1[7] == cVar48);
  auVar42[8] = -(pcVar1[8] == cVar40);
  auVar42[9] = -(pcVar1[9] == cVar44);
  auVar42[10] = -(pcVar1[10] == cVar46);
  auVar42[0xb] = -(pcVar1[0xb] == cVar48);
  auVar42[0xc] = -(pcVar1[0xc] == cVar40);
  auVar42[0xd] = -(pcVar1[0xd] == cVar44);
  auVar42[0xe] = -(pcVar1[0xe] == cVar46);
  auVar42[0xf] = -(pcVar1[0xf] == cVar48);
  uVar21 = (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar42 >> 7,0) & 1) |
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
                   (uint16_t)(auVar42[0xf] >> 7) << 0xf) |
           (uint64_t)
           CONCAT22((uint16_t)(SUB161(auVar38 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar38[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar39 >> 7,0) & 1) |
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
                    (uint16_t)(auVar39[0xf] >> 7) << 0xf) << 0x20 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar37 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar37[0xf] >> 7) << 0xf) << 0x10;
  if (uVar21 != 0) {
    uVar21 = uVar21 >> (bVar5 & 0x3f) | uVar21 << 0x40 - (bVar5 & 0x3f);
    lVar25 = 0;
    uStack_88 = uVar23;
    do {
      iVar15 = 0;
      for (uVar17 = uVar21; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
        iVar15 = iVar15 + 1;
      }
      uVar11 = iVar15 + (uint32_t)bVar5 & 0x3f;
      if (uVar11 != 0) {
        uVar11 = *(uint32_t *)(lVar29 + (uint64_t)uVar11 * 4);
        if (uVar11 < uStack_88) goto LAB_7fffa52857bf;
        auStack_1b8[lVar25] = uVar11;
        lVar25 = lVar25 + 1;
        iVar35 = iVar35 + -1;
      }
      uVar21 = uVar21 & uVar21 - 1;
      if ((uVar21 == (((0x4031 - uVar26) * 0x2d59 ^ 0x5fa) & 0xffff)) || (iVar35 == 0))
      goto LAB_7fffa52857bf;
    } while( true );
  }
  lVar25 = 0;
LAB_7fffa52857bf:
  uVar21 = uStack_a0;
  uStack_a0 = uStack_a0 << 2;
  lVar27 = 0x3f;
  if ((bVar5 & 0x3f) != 1) {
    lVar27 = 0;
  }
  lVar27 = lVar27 + (uint64_t)(bVar5 - 1 & 0x3f);
  *(uint8_t *)(lVar31 + uVar22) = (char)lVar27;
  ((uint8_t *)(lVar31 + uVar22))[lVar27] = auVar41[0];
  iVar15 = *(int *)(uVar20 + 0x2c);
  *(int *)(uVar20 + 0x2c) = iVar15 + 1;
  *(int *)(lVar29 + lVar27 * 4) = iVar15;
  _iStack_58 = CONCAT44(uStack_54,iVar35);
  iVar15 = (int)uStack_90;
  if (lVar25 == 0) {
    uVar20 = 3;
  }
  else {
    _uStack_88 = CONCAT44(uStack_84,iVar15 + 3);
    uVar22 = 3;
    lVar31 = 0;
    do {
      puVar33 = (uint64_t *)((uint64_t)auStack_1b8[lVar31] + lVar7);
      if (*(int *)((uVar22 - 3) + (int64_t)puVar33) == *(int *)((int64_t)param_3 + (uVar22 - 3)))
      {
        puVar13 = param_3;
        if (param_3 < (uint64_t *)((int64_t)puStack_b8 - 7U)) {
          if (*puVar33 == *param_3) {
            lVar29 = 8;
LAB_7fffa5285880:
            puVar13 = (uint64_t *)((int64_t)param_3 + lVar29);
            if (puVar13 < (uint64_t *)((int64_t)puStack_b8 - 7U)) {
              if (*(uint64_t *)((int64_t)puVar33 + lVar29) == *puVar13) goto code_r0x7fffa5285899;
              uVar11 = 0;
              for (uVar20 = *puVar13 ^ *(uint64_t *)((int64_t)puVar33 + lVar29); (uVar20 & 1) == 0
                  ; uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar11 = uVar11 + 1;
              }
              uVar20 = (uint64_t)(uVar11 >> 3) + lVar29;
              goto joined_r0x7fffa52859d6;
            }
            puVar33 = (uint64_t *)((int64_t)puVar33 + lVar29);
            goto joined_r0x7fffa52858a6;
          }
          uVar11 = 0;
          for (uVar20 = *puVar33 ^ *param_3; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar11 = uVar11 + 1;
          }
          uVar20 = (uint64_t)(uVar11 >> 3);
        }
        else {
joined_r0x7fffa52858a6:
          if ((puVar13 < (uint64_t *)((int64_t)puStack_b8 - 3U)) &&
             ((int)*puVar33 == (int)*puVar13)) {
            puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
          }
          if (puVar13 < (uint64_t *)((int64_t)puStack_b8 - 1U)) {
            bVar8 = (uint16_t)*puVar33 == (uint16_t)*puVar13;
            if (uVar26 == 0x61f5d176) {
              bVar8 = (uint16_t)*puVar33 <= (uint16_t)*puVar13;
            }
            if (bVar8) {
              puVar13 = (uint64_t *)((int64_t)puVar13 + 2);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
            }
          }
          if (puVar13 < puStack_b8) {
            puVar13 = (uint64_t *)
                      ((int64_t)puVar13 + (uint64_t)((char)*puVar33 == (char)*puVar13));
          }
          uVar20 = (int64_t)puVar13 - (int64_t)param_3;
        }
joined_r0x7fffa52859d6:
        if (uVar22 < uVar20) {
          *puStack_60 = (uint64_t)((iVar15 + 3) - auStack_1b8[lVar31]);
          uVar22 = uVar20;
          if ((uint64_t *)((int64_t)param_3 + uVar20) == puStack_b8) break;
        }
      }
      lVar31 = lVar31 + 1;
      uVar20 = uVar22;
    } while (lVar31 != lVar25);
  }
  puVar33 = (uint64_t *)(lVar7 + uStack_78);
  pcVar1 = (char *)*puStack_50;
  lVar7 = puStack_50[1];
  iVar18 = ((int)pcVar1 - (int)lVar7) - (int)uStack_78;
  uVar11 = *(uint32_t *)(puStack_50[0xe] + 0xc + uVar21 * 0x10);
  uVar10 = iStack_ac + iVar35;
  if (uVar10 == 0) {
    uVar22 = 0;
  }
  else {
    puVar13 = (uint64_t *)((int64_t)puStack_b8 - 7);
    uVar22 = 3;
    if (uVar10 < 3) {
      uVar22 = (uint64_t)uVar10;
    }
    puVar14 = (uint64_t *)((int64_t)puStack_a8 + 4);
    uVar17 = 0;
    do {
      uVar11 = *(uint32_t *)(puStack_50[0xe] + uVar21 * 0x10 + uVar17 * 4);
      uVar16 = (uint64_t)uVar11;
      if (uVar16 == 0) {
        return;
      }
      if (*(int *)(uVar16 + lVar7) == (int)*puStack_a8) {
        puVar19 = (uint64_t *)((int *)(uVar16 + lVar7) + 1);
        puVar12 = (uint64_t *)(((int64_t)pcVar1 - (int64_t)puVar19) + (int64_t)puVar14);
        if (puStack_b8 <= puVar12) {
          puVar12 = puStack_b8;
        }
        puVar32 = puVar14;
        puVar30 = puVar19;
        if (puVar14 < (uint64_t *)((int64_t)puVar12 - 7U)) {
          if (*puVar19 == *puVar14) {
            lVar31 = lVar7 + 0xc + uVar16;
            lVar29 = 0;
            do {
              puVar32 = (uint64_t *)((int64_t)puStack_a8 + lVar29 + 0xc);
              if ((uint64_t *)((int64_t)puVar12 - 7U) <= puVar32) {
                puVar30 = (uint64_t *)(lVar31 + lVar29);
                goto LAB_7fffa5285bed;
              }
              uVar16 = *(uint64_t *)(lVar31 + lVar29);
              lVar29 = lVar29 + 8;
            } while (uVar16 == *puVar32);
            uVar28 = 0;
            for (uVar16 = uVar16 ^ *puVar32; (uVar16 & 1) == 0;
                uVar16 = uVar16 >> 1 | 0x8000000000000000) {
              uVar28 = uVar28 + 1;
            }
            uVar16 = (uint64_t)(uVar28 >> 3) + lVar29;
          }
          else {
            uVar28 = 0;
            for (uVar16 = *puVar19 ^ *puVar14; (uVar16 & 1) == 0;
                uVar16 = uVar16 >> 1 | 0x8000000000000000) {
              uVar28 = uVar28 + 1;
            }
            uVar16 = (uint64_t)(uVar28 >> 3);
          }
        }
        else {
LAB_7fffa5285bed:
          if ((puVar32 < (uint64_t *)((int64_t)puVar12 - 3U)) && ((int)*puVar30 == (int)*puVar32))
          {
            puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
          }
          if ((puVar32 < (uint64_t *)((int64_t)puVar12 - 1U)) &&
             ((uint16_t)*puVar30 == (uint16_t)*puVar32)) {
            puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
            puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
          }
          if (puVar32 < puVar12) {
            puVar32 = (uint64_t *)
                      ((int64_t)puVar32 + (uint64_t)((char)*puVar30 == (char)*puVar32));
          }
          uVar16 = (int64_t)puVar32 - (int64_t)puVar14;
        }
        if ((char *)((int64_t)puVar19 + uVar16) == pcVar1) {
          puVar12 = (uint64_t *)((int64_t)puVar14 + uVar16);
          puVar19 = puVar12;
          puVar32 = puVar33;
          if (puVar12 < puVar13) {
            if (*puVar33 == *puVar12) {
              puVar19 = (uint64_t *)((int64_t)puStack_a8 + uVar16 + 0xc);
              lVar31 = 8;
              if (puVar19 < puVar13) {
LAB_7fffa5285c90:
                if (*(uint64_t *)((int64_t)puVar33 + lVar31) == *puVar19)
                goto code_r0x7fffa5285ca1;
                uVar28 = 0;
                for (uVar34 = *puVar19 ^ *(uint64_t *)((int64_t)puVar33 + lVar31);
                    (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x8000000000000000) {
                  uVar28 = uVar28 + 1;
                }
                uVar34 = (uint64_t)(uVar28 >> 3) + lVar31;
                goto LAB_7fffa5285db4;
              }
LAB_7fffa5285cb8:
              puVar32 = (uint64_t *)(lVar31 + (int64_t)puVar33);
              goto LAB_7fffa5285cbb;
            }
            uVar28 = 0;
            for (uVar34 = *puVar33 ^ *puVar12; (uVar34 & 1) == 0;
                uVar34 = uVar34 >> 1 | 0x8000000000000000) {
              uVar28 = uVar28 + 1;
            }
            uVar34 = (uint64_t)(uVar28 >> 3);
          }
          else {
LAB_7fffa5285cbb:
            if ((puVar19 < (uint64_t *)((int64_t)puStack_b8 - 3U)) &&
               ((int)*puVar32 == (int)*puVar19)) {
              puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            }
            if ((puVar19 < (uint64_t *)((int64_t)puStack_b8 + -1)) &&
               ((uint16_t)*puVar32 == (uint16_t)*puVar19)) {
              puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
            }
            if (puVar19 < puStack_b8) {
              puVar19 = (uint64_t *)
                        ((int64_t)puVar19 + (uint64_t)((char)*puVar32 == (char)*puVar19));
            }
            uVar34 = (int64_t)puVar19 - (int64_t)puVar12;
            if ((uint64_t)(int64_t)(int)((uVar26 + 0x4fc5b045) * -0x3d9a3f4d) <
                (uint64_t)(uVar26 + 0xf8147757)) {
              uVar34 = (uint64_t)puVar12 | (uint64_t)puVar19;
            }
          }
LAB_7fffa5285db4:
          uVar16 = uVar16 + uVar34;
        }
        uVar16 = uVar16 + 4;
        if (uVar20 < uVar16) {
          *puStack_60 = (uint64_t)((iVar15 + 3 + iVar18) - uVar11);
          uVar20 = uVar16;
          if ((uint64_t *)((int64_t)puStack_a8 + uVar16) == puStack_b8) {
            return;
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar22);
    uVar11 = *(uint32_t *)(puStack_50[0xe] + (uStack_a0 | 3) * 4);
    param_3 = puStack_a8;
  }
  uVar10 = uVar10 - (int)uVar22;
  if ((uVar11 & 0xff) <= uVar10) {
    uVar10 = uVar11 & 0xff;
  }
  if (uVar10 == (uint16_t)(0 << (bVar9 & 0xf) | 0U >> 0x10 - (bVar9 & 0xf))) {
    return;
  }
  if (7 < uVar10) {
    uVar21 = 0;
    do {
      uVar21 = uVar21 + 8;
    } while ((uVar10 & 0xf8) != uVar21);
  }
  if ((uVar10 & 7) != (-0x38147459 - uVar26) * -0x5bb4c14f) {
    uVar21 = 0;
    do {
      uVar22 = uVar21 + 1;
      uVar21 = uVar21 ^ 1;
      if ((uVar26 ^ 0xda003a13) + 0x3fffff6c < uVar26 + 0xfc2353b8) {
        uVar21 = uVar22;
      }
    } while (uVar21 != (uVar10 & 7));
  }
  param_3 = (uint64_t *)((int64_t)param_3 + 4);
  uVar21 = (uint64_t)(uVar11 >> 8);
  iVar35 = (int)*puStack_a8;
  puVar13 = (uint64_t *)((int64_t)puStack_b8 + -7);
  uVar11 = 0;
  do {
    uVar26 = *(uint32_t *)(puStack_50[0x10] + uVar21 * 4);
    uVar22 = (uint64_t)uVar26;
    if (*(int *)(lVar7 + uVar22) == iVar35) {
      puVar12 = (uint64_t *)(uVar22 + lVar7 + 4);
      puVar14 = (uint64_t *)(((int64_t)pcVar1 - (int64_t)puVar12) + (int64_t)param_3);
      if (puStack_b8 <= puVar14) {
        puVar14 = puStack_b8;
      }
      puVar19 = param_3;
      puVar32 = puVar12;
      if (param_3 < (uint64_t *)((int64_t)puVar14 - 7U)) {
        if (*puVar12 == *param_3) {
          lVar31 = lVar7 + 0xc + uVar22;
          lVar29 = 0;
          do {
            puVar19 = (uint64_t *)((int64_t)puStack_a8 + lVar29 + 0xc);
            if ((uint64_t *)((int64_t)puVar14 - 7U) <= puVar19) {
              puVar32 = (uint64_t *)(lVar31 + lVar29);
              goto LAB_7fffa5286116;
            }
            uVar22 = *(uint64_t *)(lVar31 + lVar29);
            lVar29 = lVar29 + 8;
          } while (uVar22 == *puVar19);
          uVar28 = 0;
          for (uVar22 = *puVar19 ^ uVar22; (uVar22 & 1) == 0;
              uVar22 = uVar22 >> 1 | 0x8000000000000000) {
            uVar28 = uVar28 + 1;
          }
          uVar22 = (uint64_t)(uVar28 >> 3) + lVar29;
        }
        else {
          uVar28 = 0;
          for (uVar22 = *param_3 ^ *puVar12; (uVar22 & 1) == 0;
              uVar22 = uVar22 >> 1 | 0x8000000000000000) {
            uVar28 = uVar28 + 1;
          }
          uVar22 = (uint64_t)(uVar28 >> 3);
        }
      }
      else {
LAB_7fffa5286116:
        if ((puVar19 < (uint64_t *)((int64_t)puVar14 - 3U)) && ((int)*puVar32 == (int)*puVar19)) {
          puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
          puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
        }
        if ((puVar19 < (uint64_t *)((int64_t)puVar14 - 1U)) &&
           ((uint16_t)*puVar32 == (uint16_t)*puVar19)) {
          puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
          puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
        }
        if (puVar19 < puVar14) {
          puVar19 = (uint64_t *)((int64_t)puVar19 + (uint64_t)((char)*puVar32 == (char)*puVar19))
          ;
        }
        uVar22 = (int64_t)puVar19 - (int64_t)param_3;
      }
      if ((char *)((int64_t)puVar12 + uVar22) == pcVar1) {
        puVar14 = (uint64_t *)((int64_t)param_3 + uVar22);
        puVar12 = puVar14;
        puVar19 = puVar33;
        if (puVar14 < puVar13) {
          if (*puVar33 == *puVar14) {
            puVar12 = (uint64_t *)((int64_t)puStack_a8 + uVar22 + 0xc);
            lVar31 = 8;
            if (puVar12 < puVar13) {
LAB_7fffa52861f0:
              if (*(uint64_t *)((int64_t)puVar33 + lVar31) == *puVar12) goto code_r0x7fffa5286201;
              uVar28 = 0;
              for (uVar17 = *(uint64_t *)((int64_t)puVar33 + lVar31) ^ *puVar12; (uVar17 & 1) == 0
                  ; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                uVar28 = uVar28 + 1;
              }
              uVar17 = (uint64_t)(uVar28 >> 3) + lVar31;
              goto LAB_7fffa52862a7;
            }
LAB_7fffa5286218:
            puVar19 = (uint64_t *)(lVar31 + (int64_t)puVar33);
            goto LAB_7fffa528621b;
          }
          uVar28 = 0;
          for (uVar17 = *puVar14 ^ *puVar33; (uVar17 & 1) == 0;
              uVar17 = uVar17 >> 1 | 0x8000000000000000) {
            uVar28 = uVar28 + 1;
          }
          uVar17 = (uint64_t)(uVar28 >> 3);
        }
        else {
LAB_7fffa528621b:
          if ((puVar12 < (uint64_t *)((int64_t)puStack_b8 - 3U)) &&
             ((int)*puVar19 == (int)*puVar12)) {
            puVar12 = (uint64_t *)((int64_t)puVar12 + 4);
            puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
          }
          if ((puVar12 < (uint64_t *)((int64_t)puStack_b8 - 1U)) &&
             ((uint16_t)*puVar19 == (uint16_t)*puVar12)) {
            puVar12 = (uint64_t *)((int64_t)puVar12 + 2);
            puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
          }
          if (puVar12 < puStack_b8) {
            puVar12 = (uint64_t *)
                      ((int64_t)puVar12 + (uint64_t)((char)*puVar19 == (char)*puVar12));
          }
          uVar17 = (int64_t)puVar12 - (int64_t)puVar14;
        }
LAB_7fffa52862a7:
        uVar22 = uVar22 + uVar17;
      }
      uVar22 = uVar22 + 4;
      if (uVar20 < uVar22) {
        *puStack_60 = (uint64_t)((iVar15 + iVar18 + 3) - uVar26);
        if ((uint64_t *)((int64_t)puStack_a8 + uVar22) == puStack_b8) {
          return;
        }
        iVar35 = (int)*puStack_a8;
        uVar20 = uVar22;
      }
    }
    uVar11 = uVar11 + 1;
    if (uVar11 == uVar10) {
      return;
    }
    uVar21 = uVar21 + 1;
  } while( true );
code_r0x7fffa5285899:
  lVar29 = lVar29 + 8;
  goto LAB_7fffa5285880;
code_r0x7fffa5285ca1:
  puVar19 = puVar19 + 1;
  lVar31 = lVar31 + 8;
  if (puVar13 <= puVar19) goto LAB_7fffa5285cb8;
  goto LAB_7fffa5285c90;
code_r0x7fffa5286201:
  puVar12 = puVar12 + 1;
  lVar31 = lVar31 + 8;
  if (puVar13 <= puVar12) goto LAB_7fffa5286218;
  goto LAB_7fffa52861f0;
}


// ============================================================================
// Function : FUN_7fffa5286318  |  RVA: 0xb16318  |  Size: 66 bytes
// Callers  : FUN_7fffa4ab28e0@0x3428e0, FUN_7fffa52bbf48@0xb4bf48
// Callees  : FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
void FUN_7fffa5286318(uint64_t *param_1)

{
  if (((*(uint32_t *)((int64_t)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint32_t *)((int64_t)param_1 + 0x14) >> 6 & 1) != 0)) {
    FUN_7fffa52d8dd0(param_1[1]);
    LOCK();
    *(uint32_t *)((int64_t)param_1 + 0x14) = *(uint32_t *)((int64_t)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(uint32_t *)(param_1 + 2) = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa528635c  |  RVA: 0xb1635c  |  Size: 65 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa528635c(char param_1)

{
  int64_t *plVar1;
  
  if (param_1 == '\0') {
    plVar1 = (int64_t *)0x7fffa4781e50;
    do {
      if (*plVar1 != 0) {
        if (*plVar1 != -1) {
          (*(code *)&DAT_7ff84ea3c7d0)();
        }
        *plVar1 = 0;
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != (int64_t *)0x7fffa4781f08);
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5287490  |  RVA: 0xb17490  |  Size: 2743 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5287490(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
                     uint64_t *param_5)

{
  uint64_t *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint8_t bVar6;
  uint32_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint8_t bVar10;
  uint8_t bVar11;
  int iVar12;
  bool bVar13;
  uint32_t uVar14;
  int64_t lVar15;
  uint8_t uVar16;
  uint32_t uVar17;
  uint64_t uVar18;
  int iVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint16_t uVar23;
  uint32_t uVar24;
  uint32_t uVar25;
  uint64_t in_R10;
  int64_t lVar26;
  int64_t lVar27;
  int64_t lVar28;
  uint32_t uVar29;
  uint64_t *puVar30;
  int64_t lVar31;
  uint32_t uVar32;
  uint64_t uVar33;
  int64_t lVar34;
  int iVar35;
  uint64_t *puVar36;
  uint8_t auVar37 [16];
  uint64_t in_XMM2_Qb;
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  char cVar40;
  uint8_t uVar43;
  char cVar44;
  uint8_t uVar45;
  char cVar46;
  uint8_t uVar47;
  char cVar48;
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint32_t auStack_198 [64];
  uint64_t *puStack_98;
  uint64_t uStack_90;
  int64_t lStack_88;
  uint32_t uStack_7c;
  uint64_t *puStack_78;
  uint64_t *puStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint32_t uStack_54;
  uint64_t uStack_50;
  uint32_t uStack_44;
  
  puStack_70 = param_4;
  param_1 = (param_1 << 0xb | param_1 >> 0x35) ^ (param_1 << 7 | param_1 >> 0x39) ^ param_1;
  param_1 = (param_1 << 0x16 | param_1 >> 0x2a) ^ (param_1 << 0xe | param_1 >> 0x32) ^ param_1;
  uVar14 = (uint32_t)in_R10;
  uVar29 = uVar14 | 1;
  param_1 = (param_1 << 0x2c | param_1 >> 0x14) ^ (param_1 << 0x1c | param_1 >> 0x24) ^ param_1;
  param_1 = (param_1 << 0x18 | param_1 >> 0x28) ^ (param_1 << 0x38 | param_1 >> 8) ^ param_1;
  bVar6 = (uint8_t)in_R10;
  if (uVar14 + 0x4f09c3e1 < ~(uVar29 * -0x4369ff60)) {
    iVar19 = -0x18d57c76 - uVar14;
    puStack_98 = (uint64_t *)(param_1 - 0xf999dc5b);
    lVar15 = ((in_XMM2_Qb << 4 | in_XMM2_Qb >> 0x3c) -
             (int64_t)(int)(0xa4af1297U >> (bVar6 & 0x1f) | -0x5b50ed69 << 0x20 - (bVar6 & 0x1f)))
             * 0x200004000080001;
  }
  else {
    iVar19 = (int)(in_R10 | 1) * 0x23cd0b53;
    lVar15 = ((in_XMM2_Qb << 4 | in_XMM2_Qb >> 0x3c) - (int64_t)(int)(uVar29 * 0x52bd5658)) *
             ((in_R10 | 1) * 0x3aabcae19845f0aa + 0x2ec0732f) * 0x258df1;
    puStack_98 = (uint64_t *)(param_1 - 0xf999dc5b);
  }
  lVar28 = *(int64_t *)(lVar15 + 0x70);
  bVar11 = (uint8_t)iVar19;
  uVar17 = *(uint32_t *)(lVar15 + 0x1c);
  uVar24 = (iVar19 + -0x221fc911) * 0x2eeb6d35;
  if ((~(uVar14 + 0x458a4cb5) << (bVar11 & 0x1f) | ~(uVar14 + 0x458a4cb5) >> 0x20 - (bVar11 & 0x1f))
      == ((uVar24 >> (bVar6 & 0x1f) | uVar24 << 0x20 - (bVar6 & 0x1f)) ^ 0xd5e61c2b)) {
    uVar18 = (uint64_t)
             ((0x666f03eeU >> (bVar11 & 0x1f) | 0x666f03ee << 0x20 - (bVar11 & 0x1f)) * uVar29);
  }
  else {
    uVar18 = (uint64_t)
             (int)(uVar14 + 0x2267d530 << (bVar11 & 0x1f) |
                  uVar14 + 0x2267d530 >> 0x20 - (bVar11 & 0x1f));
  }
  lVar8 = *(int64_t *)(lVar15 + 0x38);
  bVar10 = (uint8_t)uVar18 & 0x1f;
  lVar31 = *(int64_t *)(lVar15 + 8);
  lStack_88 = lVar31;
  uStack_50 = (int64_t)puStack_98 - lVar31;
  uVar32 = (uint32_t)uStack_50;
  uVar24 = uVar32 - uVar17;
  if (((uVar14 ^ 0x5a4f8918) << bVar10 | (uVar14 ^ 0x5a4f8918) >> 0x20 - bVar10) == 0xa0e80e6a) {
    uVar24 = uVar17 ^ uVar32;
  }
  uVar23 = 0x65d8 << (bVar6 & 0xf) | 0x65d8U >> 0x10 - (bVar6 & 0xf);
  uVar25 = 1 << (*(uint8_t *)(lVar15 + 0x100) & 0x1f);
  uStack_44 = uVar32 - uVar25;
  if (uVar24 <= uVar25) {
    uStack_44 = uVar17;
  }
  if (*(int *)(lVar15 + 0x28) != 0) {
    uStack_44 = uVar17;
  }
  uVar17 = 6;
  if (*(uint32_t *)(lVar15 + 0x10c) < 6) {
    uVar17 = *(uint32_t *)(lVar15 + 0x10c);
  }
  iVar35 = 1 << ((uint8_t)uVar17 & 0x1f);
  uStack_90 = uVar18;
  uStack_54 = uVar29;
  puStack_78._0_4_ = (uint32_t)*(uint64_t *)(lVar15 + 0x60);
  cVar40 = (char)*(uint32_t *)(lVar15 + 0x34);
  if (*(uint32_t *)(lVar15 + 300) ==
      ((uint32_t)(uint16_t)(uVar23 >> 1 | (uint16_t)((uVar23 & 1) != 0) << 0xf) - iVar19 & 0xffff)) {
    uStack_7c = *(uint32_t *)(lVar15 + 0x34);
    uVar17 = *(uint32_t *)(lVar15 + 0x2c);
    uVar22 = (uint64_t)uVar17;
    uVar23 = ((uint16_t)iVar19 | 1) * 0x60b;
    lVar27 = lVar8;
    lVar34 = lVar28;
    if ((uint32_t)(uint16_t)~(uVar23 << (bVar6 & 0xf) | uVar23 >> 0x10 - (bVar6 & 0xf)) < uVar32 - uVar17)
    {
      if (uVar17 < 0xffffffa0) {
        uVar20 = uVar22 + 0x5f;
        while( true ) {
          uVar21 = (uint64_t)((uint32_t)uVar22 & 7);
          uVar17 = *(uint32_t *)(lVar15 + 0x40 + uVar21 * 4);
          uVar33 = (uint64_t)(uVar17 >> 2 & 0xffffffc0);
          *(uint32_t *)(lVar15 + 0x40 + uVar21 * 4) =
               (*(int *)(lVar31 + 8 + uVar22) * -0x61c8864f ^ *(uint32_t *)(lVar15 + 0x60)) >>
               (0x18U - cVar40 & 0x1f);
          lVar27 = 0;
          if ((*(uint8_t *)(lVar8 + uVar33) & 0x3f) == 1) {
            lVar27 = 0x3f;
          }
          lVar27 = (uint64_t)(*(uint8_t *)(lVar8 + uVar33) - 1 & 0x3f) + lVar27;
          *(char *)(lVar8 + uVar33) = (char)lVar27;
          *(char *)(lVar8 + uVar33 + lVar27) = (char)uVar17;
          *(uint32_t *)(uVar33 * 4 + lVar28 + lVar27 * 4) = (uint32_t)uVar22;
          if (uVar20 == uVar22) break;
          uVar22 = uVar22 + 1;
        }
        lVar27 = *(int64_t *)(lVar15 + 0x38);
        lVar34 = *(int64_t *)(lVar15 + 0x70);
      }
      uVar17 = uVar32 - 0x20;
      uVar22 = (uint64_t)uVar17;
      uVar25 = ((int)((int64_t)puStack_98 + 1U) - (int)(lVar31 + uVar22)) + 1;
      uVar24 = 8;
      if (uVar25 < 8) {
        uVar24 = uVar25;
      }
      uVar25 = 0;
      if (lVar31 + uVar22 <= (int64_t)puStack_98 + 1U) {
        uVar25 = uVar24;
      }
      if (uVar17 < (uVar32 + uVar25) - 0x20) {
        uVar7 = *(uint32_t *)(lVar15 + 0x34);
        uVar24 = *(uint32_t *)(lVar15 + 0x60);
        while( true ) {
          uVar25 = uVar25 - 1;
          *(uint32_t *)(lVar15 + 0x40 + (uint64_t)((uint32_t)uVar22 & 7) * 4) =
               (*(int *)(lVar31 + uVar22) * -0x61c8864f ^ uVar24) >> (0x18U - (char)uVar7 & 0x1f);
          if (uVar25 == 0) break;
          uVar22 = uVar22 + 1;
        }
      }
    }
    if (uVar17 < uVar32) {
      lVar9 = *(int64_t *)(lVar15 + 8);
      uVar22 = (uint64_t)uVar17;
      uVar7 = *(uint32_t *)(lVar15 + 0x34);
      uStack_68 = uStack_50 & 0xffffffff;
      while( true ) {
        uVar20 = (uint64_t)((uint32_t)uVar22 & 7);
        uVar17 = *(uint32_t *)(lVar15 + 0x40 + uVar20 * 4);
        uVar21 = (uint64_t)(uVar17 >> 2 & 0xffffffc0);
        *(uint32_t *)(lVar15 + 0x40 + uVar20 * 4) =
             (*(int *)(lVar9 + 8 + uVar22) * -0x61c8864f ^ *(uint32_t *)(lVar15 + 0x60)) >>
             (0x18U - (char)uVar7 & 0x1f);
        lVar26 = 0x3f;
        if ((uint8_t)(*(uint8_t *)(lVar27 + uVar21) & 0x3f) !=
            (uint8_t)((~(bVar6 + 0x23) << 5 | (uint8_t)~(bVar6 + 0x23) >> 3) * (bVar11 | 1))) {
          lVar26 = 0;
        }
        lVar26 = lVar26 + (uint64_t)(*(uint8_t *)(lVar27 + uVar21) - 1 & 0x3f);
        *(char *)(lVar27 + uVar21) = (char)lVar26;
        *(char *)(lVar27 + uVar21 + lVar26) = (char)uVar17;
        *(uint32_t *)(lVar34 + uVar21 * 4 + lVar26 * 4) = (uint32_t)uVar22;
        if ((uStack_50 & 0xffffffff) - 1 == uVar22) break;
        uVar22 = uVar22 + 1;
      }
    }
    *(uint32_t *)(lVar15 + 0x2c) = uVar32;
    uVar17 = *(uint32_t *)(lVar15 + 0x40 + (uint64_t)(uVar32 & 7) * 4);
    *(uint32_t *)(lVar15 + 0x40 + (uint64_t)(uVar32 & 7) * 4) =
         (*(int *)(lVar31 + 8 + (uStack_50 & 0xffffffff)) * -0x61c8864f ^ (uint32_t)puStack_78) >>
         (0x18U - cVar40 & 0x1f);
  }
  else {
    uVar17 = ((uint32_t)puStack_78 ^ (int)*puStack_98 * -0x61c8864f) >> (0x18U - cVar40 & 0x1f);
    *(uint32_t *)(lVar15 + 0x2c) = uVar32;
  }
  puStack_78 = (uint64_t *)(uint64_t)uVar17;
  uVar16 = (uint8_t)uVar17;
  uVar22 = (uint64_t)(uVar17 >> 2 & 0x3fffffc0);
  uVar47 = (uint8_t)(uVar17 >> 0x18);
  uVar45 = (uint8_t)(uVar17 >> 0x10);
  uVar43 = (uint8_t)(uVar17 >> 8);
  auVar41._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar47,uVar47),uVar45),CONCAT14(uVar45,uVar17)) >> 0x20);
  auVar41[3] = uVar43;
  auVar41[2] = uVar43;
  auVar41[1] = uVar16;
  auVar41[0] = uVar16;
  auVar41._8_8_ = 0;
  *(int *)(lVar15 + 0x68) = *(int *)(lVar15 + 0x68) + uVar17;
  auVar42 = pshuflw(auVar41,auVar41,0);
  bVar6 = *(uint8_t *)(lVar8 + uVar22);
  pcVar2 = (char *)(lVar8 + uVar22);
  pcVar3 = (char *)(lVar8 + 0x10 + uVar22);
  pcVar4 = (char *)(lVar8 + 0x20 + uVar22);
  pcVar5 = (char *)(lVar8 + 0x30 + uVar22);
  cVar40 = auVar42[0];
  auVar38[0] = -(*pcVar4 == cVar40);
  cVar44 = auVar42[1];
  auVar38[1] = -(pcVar4[1] == cVar44);
  cVar46 = auVar42[2];
  auVar38[2] = -(pcVar4[2] == cVar46);
  cVar48 = auVar42[3];
  auVar38[3] = -(pcVar4[3] == cVar48);
  auVar38[4] = -(pcVar4[4] == cVar40);
  auVar38[5] = -(pcVar4[5] == cVar44);
  auVar38[6] = -(pcVar4[6] == cVar46);
  auVar38[7] = -(pcVar4[7] == cVar48);
  auVar38[8] = -(pcVar4[8] == cVar40);
  auVar38[9] = -(pcVar4[9] == cVar44);
  auVar38[10] = -(pcVar4[10] == cVar46);
  auVar38[0xb] = -(pcVar4[0xb] == cVar48);
  auVar38[0xc] = -(pcVar4[0xc] == cVar40);
  auVar38[0xd] = -(pcVar4[0xd] == cVar44);
  auVar38[0xe] = -(pcVar4[0xe] == cVar46);
  auVar38[0xf] = -(pcVar4[0xf] == cVar48);
  auVar42[0] = -(*pcVar5 == cVar40);
  auVar42[1] = -(pcVar5[1] == cVar44);
  auVar42[2] = -(pcVar5[2] == cVar46);
  auVar42[3] = -(pcVar5[3] == cVar48);
  auVar42[4] = -(pcVar5[4] == cVar40);
  auVar42[5] = -(pcVar5[5] == cVar44);
  auVar42[6] = -(pcVar5[6] == cVar46);
  auVar42[7] = -(pcVar5[7] == cVar48);
  auVar42[8] = -(pcVar5[8] == cVar40);
  auVar42[9] = -(pcVar5[9] == cVar44);
  auVar42[10] = -(pcVar5[10] == cVar46);
  auVar42[0xb] = -(pcVar5[0xb] == cVar48);
  auVar42[0xc] = -(pcVar5[0xc] == cVar40);
  auVar42[0xd] = -(pcVar5[0xd] == cVar44);
  auVar42[0xe] = -(pcVar5[0xe] == cVar46);
  auVar42[0xf] = -(pcVar5[0xf] == cVar48);
  bVar11 = (uint8_t)uVar18 & 0x1f;
  if (((uVar14 - (uint32_t)uVar18) + -0x181b9fa8) * -0x7445bd85 <
      ~(-0x8e0294a << bVar11 | 0xf71fd6b6U >> 0x20 - bVar11)) {
    auVar39[0] = -(cVar40 < *pcVar2);
    auVar39[1] = -(cVar44 < pcVar2[1]);
    auVar39[2] = -(cVar46 < pcVar2[2]);
    auVar39[3] = -(cVar48 < pcVar2[3]);
    auVar39[4] = -(cVar40 < pcVar2[4]);
    auVar39[5] = -(cVar44 < pcVar2[5]);
    auVar39[6] = -(cVar46 < pcVar2[6]);
    auVar39[7] = -(cVar48 < pcVar2[7]);
    auVar39[8] = -(cVar40 < pcVar2[8]);
    auVar39[9] = -(cVar44 < pcVar2[9]);
    auVar39[10] = -(cVar46 < pcVar2[10]);
    auVar39[0xb] = -(cVar48 < pcVar2[0xb]);
    auVar39[0xc] = -(cVar40 < pcVar2[0xc]);
    auVar39[0xd] = -(cVar44 < pcVar2[0xd]);
    auVar39[0xe] = -(cVar46 < pcVar2[0xe]);
    auVar39[0xf] = -(cVar48 < pcVar2[0xf]);
  }
  else {
    auVar39[0] = -(*pcVar2 == cVar40);
    auVar39[1] = -(pcVar2[1] == cVar44);
    auVar39[2] = -(pcVar2[2] == cVar46);
    auVar39[3] = -(pcVar2[3] == cVar48);
    auVar39[4] = -(pcVar2[4] == cVar40);
    auVar39[5] = -(pcVar2[5] == cVar44);
    auVar39[6] = -(pcVar2[6] == cVar46);
    auVar39[7] = -(pcVar2[7] == cVar48);
    auVar39[8] = -(pcVar2[8] == cVar40);
    auVar39[9] = -(pcVar2[9] == cVar44);
    auVar39[10] = -(pcVar2[10] == cVar46);
    auVar39[0xb] = -(pcVar2[0xb] == cVar48);
    auVar39[0xc] = -(pcVar2[0xc] == cVar40);
    auVar39[0xd] = -(pcVar2[0xd] == cVar44);
    auVar39[0xe] = -(pcVar2[0xe] == cVar46);
    auVar39[0xf] = -(pcVar2[0xf] == cVar48);
  }
  lVar28 = lVar28 + uVar22 * 4;
  auVar37[0] = -(*pcVar3 == cVar40);
  auVar37[1] = -(pcVar3[1] == cVar44);
  auVar37[2] = -(pcVar3[2] == cVar46);
  auVar37[3] = -(pcVar3[3] == cVar48);
  auVar37[4] = -(pcVar3[4] == cVar40);
  auVar37[5] = -(pcVar3[5] == cVar44);
  auVar37[6] = -(pcVar3[6] == cVar46);
  auVar37[7] = -(pcVar3[7] == cVar48);
  auVar37[8] = -(pcVar3[8] == cVar40);
  auVar37[9] = -(pcVar3[9] == cVar44);
  auVar37[10] = -(pcVar3[10] == cVar46);
  auVar37[0xb] = -(pcVar3[0xb] == cVar48);
  auVar37[0xc] = -(pcVar3[0xc] == cVar40);
  auVar37[0xd] = -(pcVar3[0xd] == cVar44);
  auVar37[0xe] = -(pcVar3[0xe] == cVar46);
  auVar37[0xf] = -(pcVar3[0xf] == cVar48);
  uVar20 = (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar37 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar37[0xf] >> 7) << 0xf) << 0x10 |
           (uint64_t)
           CONCAT22((uint16_t)(SUB161(auVar42 >> 7,0) & 1) |
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
                    (uint16_t)(auVar42[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar38 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar38[0xf] >> 7) << 0xf) << 0x20 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar39 >> 7,0) & 1) |
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
                   (uint16_t)(uint8_t)(auVar39[0xf] >> 7) << 0xf);
  uStack_60 = in_R10;
  if (uVar20 != 0) {
    uVar21 = uVar20 >> (bVar6 & 0x3f) | uVar20 << 0x40 - (bVar6 & 0x3f);
    uVar20 = 0;
    do {
      iVar12 = 0;
      for (uVar33 = uVar21; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x8000000000000000) {
        iVar12 = iVar12 + 1;
      }
      uVar14 = iVar12 + (uint32_t)bVar6 & 0x3f;
      if (uVar14 != 0) {
        uVar14 = *(uint32_t *)(lVar28 + (uint64_t)uVar14 * 4);
        if (uVar14 < uStack_44) goto LAB_7fffa5287c98;
        uVar17 = (uint32_t)uVar20;
        iVar35 = iVar35 + -1;
        auStack_198[uVar20] = uVar14;
        uVar20 = uVar20 + 1;
        if (((0x10dd7e48 - iVar19) * uVar29 ^ 0x70b08ee3) <
            (((uint32_t)uVar18 | 1) * 0x6e5b77bb ^ 0x68299bc7) * uVar29) {
          uVar20 = (uint64_t)(uVar17 & 1);
        }
      }
      uVar21 = uVar21 & uVar21 - 1;
      if ((uVar21 == 0) || (iVar35 == 0)) goto LAB_7fffa5287c98;
    } while( true );
  }
  uVar20 = 0;
  puStack_78._0_1_ = uVar16;
LAB_7fffa5287c98:
  lVar27 = 0x3f;
  if ((bVar6 & 0x3f) != 1) {
    lVar27 = 0;
  }
  lVar27 = lVar27 + (uint64_t)(bVar6 - 1 & 0x3f);
  *(uint8_t *)(lVar8 + uVar22) = (char)lVar27;
  ((uint8_t *)(lVar8 + uVar22))[lVar27] = puStack_78._0_1_;
  iVar19 = *(int *)(lVar15 + 0x2c);
  *(int *)(lVar15 + 0x2c) = iVar19 + 1;
  *(int *)(lVar28 + lVar27 * 4) = iVar19;
  if (uVar20 != 0) {
    uStack_44 = (int)uStack_50 + 3;
    puVar1 = (uint64_t *)((int64_t)param_5 - 7);
    puStack_78 = puStack_98 + 1;
    lVar15 = lVar31 + 8;
    uVar18 = 3;
    uVar22 = 0;
    do {
      uVar29 = auStack_198[uVar22];
      puVar36 = (uint64_t *)((uint64_t)uVar29 + lVar31);
      if (*(int *)((uVar18 - 3) + (int64_t)puVar36) ==
          *(int *)((int64_t)puStack_98 + (uVar18 - 3))) {
        if (puStack_98 < puVar1) {
          if (*puVar36 == *puStack_98) {
            puVar36 = (uint64_t *)(lVar15 + (uint64_t)uVar29);
            lVar28 = 8;
            puVar30 = puStack_78;
            if (puStack_78 < puVar1) {
LAB_7fffa5287e20:
              if (*puVar36 == *puVar30) goto code_r0x7fffa5287e2c;
              uVar14 = 0;
              for (uVar21 = *puVar30 ^ *puVar36; (uVar21 & 1) == 0;
                  uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                uVar14 = uVar14 + 1;
              }
              uVar21 = (uint64_t)(uVar14 >> 3) + lVar28;
              goto joined_r0x7fffa5287e6b;
            }
            goto code_r0x7fffa5287d61;
          }
          uVar14 = 0;
          for (uVar21 = *puVar36 ^ *puStack_98; (uVar21 & 1) == 0;
              uVar21 = uVar21 >> 1 | 0x8000000000000000) {
            uVar14 = uVar14 + 1;
          }
          uVar21 = (uint64_t)(uVar14 >> 3);
        }
        else {
          puVar30 = puStack_98;
code_r0x7fffa5287d61:
          if ((puVar30 < (uint64_t *)((int64_t)param_5 - 3U)) && ((int)*puVar36 == (int)*puVar30))
          {
            puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
            puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
          }
          if ((puVar30 < (uint64_t *)((int64_t)param_5 - 1U)) &&
             ((short)*puVar36 == (short)*puVar30)) {
            puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
            puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
          }
          if (puVar30 < param_5) {
            puVar30 = (uint64_t *)
                      ((int64_t)puVar30 + (uint64_t)((char)*puVar36 == (char)*puVar30));
          }
          uVar21 = (int64_t)puVar30 - (int64_t)puStack_98;
        }
joined_r0x7fffa5287e6b:
        if (uVar18 < uVar21) {
          uVar14 = (uint32_t)uStack_60 ^ 0xca305903;
          bVar6 = (uint8_t)uStack_90 & 0x1f;
          uVar17 = ((uint32_t)uStack_90 | 1) * -0x7d8b999f;
          bVar11 = (uint8_t)uStack_60 & 0x1f;
          bVar13 = (int64_t)param_5 <= (int64_t)((int64_t)puStack_98 + uVar21);
          if (~(uVar14 << bVar6 | uVar14 >> 0x20 - bVar6) <=
              ((uVar17 << bVar11 | uVar17 >> 0x20 - bVar11) ^ 0xc000008d)) {
            bVar13 = (uint64_t *)((int64_t)puStack_98 + uVar21) == param_5;
          }
          *puStack_70 = (uint64_t)(uStack_44 - uVar29);
          uVar18 = uVar21;
          lVar31 = lStack_88;
          if (bVar13) {
            return;
          }
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar20);
  }
  return;
code_r0x7fffa5287e2c:
  puVar30 = puVar30 + 1;
  lVar28 = lVar28 + 8;
  puVar36 = puVar36 + 1;
  if (puVar1 <= puVar30) goto code_r0x7fffa5287d61;
  goto LAB_7fffa5287e20;
}


// ============================================================================
// Function : FUN_7fffa5287f60  |  RVA: 0xb17f60  |  Size: 60 bytes
// Callers  : none
// Callees  : FUN_7fffa560b2b0@0xe9b2b0
// ============================================================================
uint64_t * FUN_7fffa5287f60(uint64_t *param_1,int64_t param_2)

{
  *param_1 = &PTR_FUN_7fffa56f3928;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_7fffa560b2b0(param_2 + 8);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa5287fa0  |  RVA: 0xb17fa0  |  Size: 71 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5287fa0(uint8_t param_1)

{
  code *pcVar1;
  
  FUN_7fffa47de300(&UNK_7fffa57865bf +
                   (short)(0x9509U >> (param_1 & 0xf) | -0x6af7 << 0x10 - (param_1 & 0xf)));
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5287ff0  |  RVA: 0xb17ff0  |  Size: 1061 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint32_t FUN_7fffa5287ff0(void)

{
  uint16_t uVar1;
  uint32_t uVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  int64_t in_RAX;
  uint8_t *pbVar5;
  uint8_t bVar6;
  uint8_t bVar7;
  uint64_t uVar8;
  uint32_t in_R9D;
  uint8_t bVar9;
  bool bVar10;
  
  pbVar5 = (uint8_t *)(in_RAX - (in_RAX << 0x2e));
  bVar7 = pbVar5[5];
  if (((char)bVar7 < '\0') && (((pbVar5[0x1a1] & 0x10) == 0 || ((*pbVar5 & 3) != 1)))) {
    bVar9 = (uint8_t)in_R9D & 0x1f;
    bVar10 = (short)(*(uint16_t *)(pbVar5 + 0x1c4) & 4) ==
             (uint16_t)(((uint16_t)(in_R9D ^ 0xc0c4) >> 1 |
                      (uint16_t)(((in_R9D ^ 0xc0c4) & 1) != 0) << 0xf) + 0x794b);
    if ((0xbfe5f26cU >> bVar9 | -0x401a0d94 << 0x20 - bVar9) + 0x93c9e254 < in_R9D + 0x6bbda51b) {
      bVar10 = SUB41((*(uint16_t *)(pbVar5 + 0x1c4) & 4) >> 2,0);
    }
    uVar4 = 0x8000000a;
    if ((bVar10 != false) ||
       (bVar9 = (pbVar5[0x40] & 0xf) + 0x83, (uint8_t)(bVar9 >> 1 | bVar9 * -0x80) != 0xc2))
    goto LAB_7fffa52883b9;
    pbVar5[9] = pbVar5[9] | 4;
  }
  bVar9 = pbVar5[0x1c];
  if (((0xdf44e5aa - in_R9D) * 0x100000 | 0xdf44e5aa - in_R9D >> 0xc) < (in_R9D ^ 0xee4d694b) ||
      bVar9 != 0) {
    uVar4 = 0x80000002;
    if ((*(uint64_t *)(pbVar5 + 0x1a0) & 0x100000000) != 0) goto LAB_7fffa52883b9;
    uVar1 = *(uint16_t *)(pbVar5 + 0x1c4);
    bVar6 = 4;
    if ((uVar1 & 1) == 0) {
      bVar6 = (char)uVar1 * '\x02' & 4;
    }
    bVar3 = pbVar5[9];
    pbVar5[10] = ((uVar1 & 0x40) != 0 && bVar9 == 0xf2) | pbVar5[10] & 0xfa | bVar6;
    bVar6 = bVar3 & 0xe7 | (char)uVar1 * '\b' & 0x18U;
    pbVar5[9] = bVar6;
    if ((((bVar3 & 4) != 0 || (uVar1 & 0x100) != 0) && ((pbVar5[0x40] & 0xf) == 2)) &&
       ((bVar3 = 0x20, (uVar1 & 0x18) != 0 && bVar9 == 0xf2 ||
        (bVar3 = 0x40, (uVar1 & 0x28) != 0 && bVar9 == 0xf3)))) {
      pbVar5[9] = bVar3 | bVar6;
    }
  }
  bVar9 = pbVar5[0x1d];
  if (bVar9 != 0) {
    if ((char)*(uint16_t *)(pbVar5 + 0x1c4) < '\0') {
      if ((char)bVar9 < '>') {
        bVar6 = 0x80;
        if (bVar9 != 0x2e) {
LAB_7fffa5288269:
          bVar6 = (bVar9 == 100) << 7;
        }
      }
      else {
        bVar6 = 0x80;
        if ((uint8_t)(bVar9 << 2 | bVar9 >> 6) != 0xf8) goto LAB_7fffa5288269;
      }
    }
    else {
      bVar6 = 0;
    }
    bVar3 = (uint8_t)in_R9D & 7;
    pbVar5[9] = pbVar5[9] & 0x7f | bVar6;
    bVar9 = (bVar9 == (uint8_t)(0x1fU >> bVar3 | '\x1f' << 8 - bVar3)) * '\x02';
    if ((*(uint16_t *)(pbVar5 + 0x1c4) & 0x200) == 0) {
      bVar9 = 0;
    }
    bVar6 = pbVar5[10] ^ 0xfd;
    if ((uint64_t)(0xc5392411 - in_R9D ^ 0x70c6914a) <
        (uint64_t)(int64_t)(int)(0x3c619158 - in_R9D)) {
      bVar6 = pbVar5[10] & 0xfd;
    }
    pbVar5[10] = bVar6 | bVar9;
  }
  if ((bVar7 & 0x20) != 0) {
    uVar8 = (uint64_t)((uint32_t)*(int64_t *)(pbVar5 + 0x1a0) & 0x4000000);
    if ((uint64_t)(int64_t)(int)(0x7d68e1b3 - in_R9D) < (uint64_t)(in_R9D + 0xc10f7bd9)) {
      uVar8 = *(int64_t *)(pbVar5 + 0x1a0) + 0x4000000;
    }
    uVar4 = 0x80000002;
    if (uVar8 != 0) goto LAB_7fffa52883b9;
  }
  uVar8 = *(uint64_t *)(pbVar5 + 0x1a0);
  uVar4 = 0x80000002;
  if (((uVar8 >> 0x21 & 1) == 0 || (bVar7 & 0x40) == 0) &&
     (((uint32_t)uVar8 & ((0xae5bcdaf - in_R9D) * 0x80 | 0xae5bcdaf - in_R9D >> 0x19)) == 0 ||
      (bVar7 & 2) == 0)) {
    uVar4 = 0;
    bVar7 = (~pbVar5[10] & 2) << 2;
    if ((uVar8 & 0x800000) == 0) {
      bVar7 = 0;
    }
    pbVar5[10] = bVar7 | pbVar5[10] & 0xf7;
  }
LAB_7fffa52883b9:
  uVar2 = 0;
  if ((int64_t)(int)((in_R9D ^ 0xdd9aa4cb) * -0x1b9a23c1) <
      (int64_t)(uint64_t)~(in_R9D + 0x4e431d73)) {
    uVar2 = uVar4 << 0x18 | uVar4 >> 8 | uVar4 << 0xb | uVar4 >> 0x15 | uVar4;
  }
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa5288420  |  RVA: 0xb18420  |  Size: 317 bytes
// Callers  : none
// Callees  : FUN_7fffa565caf0@0xeecaf0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5288420(void) {
    /* +0xb18420 */ __asm { PUSH R12 }
    /* +0xb18422 */ __asm { PUSH RBP }
    /* +0xb18423 */ __asm { PUSH R15 }
    /* +0xb18425 */ __asm { PUSH RDI }
    /* +0xb18426 */ __asm { PUSH RBX }
    /* +0xb18427 */ __asm { PUSH R14 }
    /* +0xb18429 */ __asm { PUSH RSI }
    /* +0xb1842a */ __asm { PUSH R13 }
    /* +0xb1842c */ __asm { PUSH RAX }
    /* +0xb1842d */ __asm { MOV EAX,0x1420 }
    /* +0xb18432 */ __asm { CALL 0x7fffa565caf0 }
    /* +0xb18437 */ __asm { SUB RSP,RAX }
    /* +0xb1843a */ __asm { MOV RAX,qword ptr [RSP + 0x1420] }
    /* +0xb18442 */ __asm { MOVDQA xmmword ptr [RSP + 0x1410],XMM8 }
    /* +0xb1844c */ __asm { MOVDQA xmmword ptr [RSP + 0x1400],XMM6 }
    /* +0xb18455 */ __asm { MOVDQA xmmword ptr [RSP + 0x13f0],XMM13 }
    /* +0xb1845f */ __asm { MOVDQA xmmword ptr [RSP + 0x13e0],XMM14 }
    /* +0xb18469 */ __asm { MOVDQA xmmword ptr [RSP + 0x13d0],XMM12 }
    /* +0xb18473 */ __asm { MOVDQA xmmword ptr [RSP + 0x13c0],XMM15 }
    /* +0xb1847d */ __asm { MOVDQA xmmword ptr [RSP + 0x13b0],XMM10 }
    /* +0xb18487 */ __asm { MOVDQA xmmword ptr [RSP + 0x13a0],XMM7 }
    /* +0xb18490 */ __asm { MOVDQA xmmword ptr [RSP + 0x1390],XMM11 }
    /* +0xb1849a */ __asm { MOVDQA xmmword ptr [RSP + 0x1380],XMM9 }
    /* +0xb184a4 */ __asm { MOV R13,RAX }
    /* +0xb184a7 */ __asm { MOV EAX,0xfb31c29f }
    /* +0xb184ac */ __asm { PUSHFQ }
    /* +0xb184ad */ __asm { POP RBX }
    /* +0xb184ae */ __asm { ROL R8,0x1 }
    /* +0xb184b1 */ __asm { MOV R14,0x4005ee0fd75de617 }
    /* +0xb184bb */ __asm { IMUL R14,R8 }
    /* +0xb184bf */ __asm { MOV R9D,0xe01a4e5f }
    /* +0xb184c5 */ __asm { ADD EAX,0xa00219ce }
    /* +0xb184ca */ __asm { ROL EAX,0x16 }
    /* +0xb184cd */ __asm { MOVD XMM2,EAX }
    /* +0xb184d1 */ __asm { MOV R15D,R13D }
    /* +0xb184d4 */ __asm { MOV R10,RDX }
    /* +0xb184d7 */ __asm { ROL R10,0xb }
    /* +0xb184db */ __asm { OR R15D,0x1 }
    /* +0xb184df */ __asm { MOV RAX,RDX }
    /* +0xb184e2 */ __asm { ROL RAX,0x28 }
    /* +0xb184e6 */ __asm { IMUL R9D,R15D }
    /* +0xb184ea */ __asm { ROL RDX,0x3b }
    /* +0xb184ee */ __asm { XOR RDX,RAX }
    /* +0xb184f1 */ __asm { XOR RDX,R10 }
    /* +0xb184f4 */ __asm { MOV R10,RDX }
    /* +0xb184f7 */ __asm { ROL R10,0x20 }
    /* +0xb184fb */ __asm { NOT R9D }
    /* +0xb184fe */ __asm { MOV RAX,RDX }
    /* +0xb18501 */ __asm { ROL RAX,0x3a }
    /* +0xb18505 */ __asm { MOVSXD R9,R9D }
    /* +0xb18508 */ __asm { XOR RAX,R10 }
    /* +0xb1850b */ __asm { XOR RAX,RDX }
    /* +0xb1850e */ __asm { MOV R10,RAX }
    /* +0xb18511 */ __asm { ROL R10,0x1c }
    /* +0xb18515 */ __asm { ROL RAX,0x2c }
    /* +0xb18519 */ __asm { ADD R10,R10 }
    /* +0xb1851c */ __asm { MOVD XMM5,R13D }
    /* +0xb18521 */ __asm { MOVDQA xmmword ptr [RSP + 0x10d0],XMM5 }
    /* +0xb1852a */ __asm { PSUBD XMM2,XMM5 }
    /* +0xb1852e */ __asm { MOVD R8D,XMM2 }
    /* +0xb18533 */ __asm { XOR EDX,EDX }
    /* +0xb18535 */ __asm { CMP R9,R8 }
    /* +0xb18538 */ __asm { CMOVBE RDX,R10 }
    /* +0xb1853c */ __asm { XOR RDX,RAX }
    /* +0xb1853f */ __asm { MOV RAX,RDX }
    /* +0xb18542 */ __asm { ROL RAX,0x20 }
    /* +0xb18546 */ __asm { TEST EBX,0x100 }
    /* +0xb1854c */ __asm { NOP }
    /* +0xb1854d */ __asm { NOP }
    /* +0xb1854e */ __asm { NOP }
    /* +0xb1854f */ __asm { NOP }
    /* +0xb18550 */ __asm { NOP }
    /* +0xb18551 */ __asm { NOP }
    /* +0xb18552 */ __asm { NOP }
    /* +0xb18553 */ __asm { NOP }
    /* +0xb18554 */ __asm { NOP }
    /* +0xb18555 */ __asm { NOP }
    /* +0xb18556 */ __asm { NOP }
    /* +0xb18557 */ __asm { NOP }
    /* +0xb18558 */ __asm { NOP }
    /* +0xb18559 */ __asm { NOP }
    /* +0xb1855a */ __asm { NOP }
    /* +0xb1855b */ __asm { NOP }
    /* +0xb1855c */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa52bbf48  |  RVA: 0xb4bf48  |  Size: 91 bytes
// Callers  : none
// Callees  : FUN_7fffa4cf48ec@0x5848ec, FUN_7fffa5286318@0xb16318, FUN_7fffa517bdb8@0xa0bdb8, FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa52bbf48(void)

{
  int64_t lVar1;
  
  FUN_7fffa4cf48ec();
  FUN_7fffa517bdb8();
  lVar1 = 0;
  do {
    FUN_7fffa5286318(*(uint64_t *)(lVar1 + _DAT_7fffa4781c18));
    (*(code *)&DAT_7ff850519980)(*(int64_t *)(lVar1 + _DAT_7fffa4781c18) + 0x30);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_7fffa52d8dd0(_DAT_7fffa4781c18);
  _DAT_7fffa4781c18 = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa52bce50  |  RVA: 0xb4ce50  |  Size: 6023 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52bce50(void) {
    /* +0xb4ce50 */ __asm { PUSH RBP }
    /* +0xb4ce51 */ __asm { PUSH RBX }
    /* +0xb4ce52 */ __asm { PUSH RDI }
    /* +0xb4ce53 */ __asm { PUSH RSI }
    /* +0xb4ce54 */ __asm { PUSH R15 }
    /* +0xb4ce56 */ __asm { PUSH R12 }
    /* +0xb4ce58 */ __asm { PUSH R13 }
    /* +0xb4ce5a */ __asm { PUSH R14 }
    /* +0xb4ce5c */ __asm { SUB RSP,0x348 }
    /* +0xb4ce63 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xb4ce6b */ __asm { MOVDQA xmmword ptr [RBP + 0x2b0],XMM6 }
    /* +0xb4ce73 */ __asm { MOVDQA xmmword ptr [RBP + 0x2a0],XMM7 }
    /* +0xb4ce7b */ __asm { MOVDQA xmmword ptr [RBP + 0x290],XMM8 }
    /* +0xb4ce84 */ __asm { MOV qword ptr [RBP + 0x288],-0x2 }
    /* +0xb4ce8f */ __asm { MOV R12,RDX }
    /* +0xb4ce92 */ __asm { MOV R9,R10 }
    /* +0xb4ce95 */ __asm { SHL R9,0x3a }
    /* +0xb4ce99 */ __asm { SUB R10,R9 }
    /* +0xb4ce9c */ __asm { XOR R11,0x2320a5df }
    /* +0xb4cea3 */ __asm { MOV RBX,-0x4fffffffb84045ec }
    /* +0xb4cead */ __asm { ADD RBX,R10 }
    /* +0xb4ceb0 */ __asm { MOV R14,0x3ffffff8000001 }
    /* +0xb4ceba */ __asm { IMUL R14,R11 }
    /* +0xb4cebe */ __asm { MOV dword ptr [RBP + 0x40],0xd2bdfdda }
    /* +0xb4cec5 */ __asm { MOV R11D,dword ptr [RBP + 0x40] }
    /* +0xb4cec9 */ __asm { LEA R9,[0x7fffa56a7b50] }
    /* +0xb4ced0 */ __asm { MOV RSI,qword ptr [RBX] }
    /* +0xb4ced3 */ __asm { MOV EAX,0x148eb752 }
    /* +0xb4ced8 */ __asm { NOT EAX }
    /* +0xb4ceda */ __asm { LEA R11D,[RAX + RDX*0x1] }
    /* +0xb4cede */ __asm { ADD R11D,0x4fcce7cc }
    /* +0xb4cee5 */ __asm { MOVSXD R11,R11D }
    /* +0xb4cee8 */ __asm { ADD R11,R9 }
    /* +0xb4ceeb */ __asm { MOV RCX,RSI }
    /* +0xb4ceee */ __asm { MOV EDX,0x2e }
    /* +0xb4cef3 */ __asm { CALL R11 }
    /* +0xb4cef6 */ __asm { TEST RAX,RAX }
    /* +0xb4cef9 */ __asm { JZ 0x7fffa52bd3c8 }
    /* +0xb4ceff */ __asm { MOV qword ptr [RBP + -0x8],R14 }
    /* +0xb4cf03 */ __asm { MOV dword ptr [RBP + 0x40],0xc70ca26f }
    /* +0xb4cf0a */ __asm { MOV R11D,dword ptr [RBP + 0x40] }
    /* +0xb4cf0e */ __asm { MOV R8,0x1f36b4bc0d13e4e3 }
    /* +0xb4cf18 */ __asm { MOV qword ptr [RBP + 0x30],R8 }
    /* +0xb4cf1c */ __asm { MOV qword ptr [RBP + 0x40],R8 }
    /* +0xb4cf20 */ __asm { MOV R9,-0x7c9a946e51875990 }
    /* +0xb4cf2a */ __asm { MOV R11W,0x6184 }
    /* +0xb4cf2f */ __asm { ADD R11D,0x5e7c }
    /* +0xb4cf36 */ __asm { MOV ECX,R12D }
    /* +0xb4cf39 */ __asm { ROL R11W,CL }
    /* +0xb4cf3d */ __asm { LEA R8,[RBP + 0x40] }
    /* +0xb4cf41 */ __asm { MOVZX EDI,R11W }
    /* +0xb4cf45 */ __asm { MOV qword ptr [RBP + -0x40],R9 }
    /* +0xb4cf49 */ __asm { MOV qword ptr [RBP + 0x48],R9 }
    /* +0xb4cf4d */ __asm { MOV R11D,dword ptr [R8] }
    /* +0xb4cf50 */ __asm { PXOR XMM6,XMM6 }
    /* +0xb4cf54 */ __asm { MOVDQA xmmword ptr [RBP + 0x130],XMM6 }
    /* +0xb4cf5c */ __asm { MOVDQA xmmword ptr [RBP + 0x120],XMM6 }
    /* +0xb4cf64 */ __asm { MOVDQA xmmword ptr [RBP + 0x110],XMM6 }
    /* +0xb4cf6c */ __asm { MOVDQA xmmword ptr [RBP + 0x100],XMM6 }
    /* +0xb4cf74 */ __asm { MOVDQA xmmword ptr [RBP + 0xf0],XMM6 }
    /* +0xb4cf7c */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM6 }
    /* +0xb4cf84 */ __asm { MOVDQA xmmword ptr [RBP + 0xd0],XMM6 }
    /* +0xb4cf8c */ __asm { MOVDQA xmmword ptr [RBP + 0xc0],XMM6 }
    /* +0xb4cf94 */ __asm { MOVDQA xmmword ptr [RBP + 0xb0],XMM6 }
    /* +0xb4cf9c */ __asm { MOVDQA xmmword ptr [RBP + 0xa0],XMM6 }
    /* +0xb4cfa4 */ __asm { MOVDQA xmmword ptr [RBP + 0x90],XMM6 }
    /* +0xb4cfac */ __asm { MOVDQA xmmword ptr [RBP + 0x80],XMM6 }
    /* +0xb4cfb4 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM6 }
    /* +0xb4cfb9 */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM6 }
    /* +0xb4cfbe */ __asm { MOVDQA xmmword ptr [RBP + 0x50],XMM6 }
    /* +0xb4cfc3 */ __asm { MOVDQA xmmword ptr [RBP + 0x40],XMM6 }
    /* +0xb4cfc8 */ __asm { MOV qword ptr [RBP + 0x140],0x0 }
    /* +0xb4cfd3 */ __asm { MOV R15,0x1f36b4bc617f80cd }
    /* +0xb4cfdd */ __asm { XOR R15D,R11D }
    /* +0xb4cfe0 */ __asm { MOV R13,RAX }
    /* +0xb4cfe3 */ __asm { MOV R9,RAX }
    /* +0xb4cfe6 */ __asm { SUB R9,RSI }
    /* +0xb4cfe9 */ __asm { CMP R9,0x103 }
    /* +0xb4cff0 */ __asm { MOV R14D,0x103 }
    /* +0xb4cff6 */ __asm { CMOVC R14,R9 }
    /* +0xb4cffa */ __asm { LEA RCX,[RBP + 0x40] }
    /* +0xb4cffe */ __asm { MOV R8,R14 }
    /* +0xb4d001 */ __asm { MOV RDX,RSI }
    /* +0xb4d004 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xb4d009 */ __asm { MOV dword ptr [RBP + R14*0x1 + 0x40],R15D }
    /* +0xb4d00e */ __asm { MOV R8,qword ptr GS:[RDI] }
    /* +0xb4d012 */ __asm { MOV R11,R13 }
    /* +0xb4d015 */ __asm { OR R11,R8 }
    /* +0xb4d018 */ __asm { MOV R10,R13 }
    /* +0xb4d01b */ __asm { NOT R10 }
    /* +0xb4d01e */ __asm { MOV R9,R8 }
    /* +0xb4d021 */ __asm { MOV RDX,R10 }
    /* +0xb4d024 */ __asm { MOV RAX,RBX }
    /* +0xb4d027 */ __asm { NOT RAX }
    /* +0xb4d02a */ __asm { AND R10,RAX }
    /* +0xb4d02d */ __asm { AND R10,R8 }
    /* +0xb4d030 */ __asm { XOR R8,R13 }
    /* +0xb4d033 */ __asm { MOVQ XMM4,R8 }
    /* +0xb4d038 */ __asm { MOV R14,RBX }
    /* +0xb4d03b */ __asm { AND R14,R11 }
    /* +0xb4d03e */ __asm { NOT R9 }
    /* +0xb4d041 */ __asm { AND RDX,R9 }
    /* +0xb4d044 */ __asm { MOV qword ptr [RBP + 0x230],R13 }
    /* +0xb4d04b */ __asm { OR R9,R13 }
    /* +0xb4d04e */ __asm { XOR R9,RBX }
    /* +0xb4d051 */ __asm { MOV CX,0x6547 }
    /* +0xb4d055 */ __asm { MOVQ XMM1,RAX }
    /* +0xb4d05a */ __asm { PAND XMM1,XMM4 }
    /* +0xb4d05e */ __asm { MOV RSI,RDX }
    /* +0xb4d061 */ __asm { AND RSI,RAX }
    /* +0xb4d064 */ __asm { IMUL RSI,RSI,-0x30339e82 }
    /* +0xb4d06b */ __asm { XOR R11,RAX }
    /* +0xb4d06e */ __asm { MOV EDI,0xffffa1c5 }
    /* +0xb4d073 */ __asm { SUB EDI,ECX }
    /* +0xb4d075 */ __asm { MOV ECX,R12D }
    /* +0xb4d078 */ __asm { ROR DI,CL }
    /* +0xb4d07b */ __asm { IMUL R11,R11,0x30339af9 }
    /* +0xb4d082 */ __asm { XOR RAX,RDX }
    /* +0xb4d085 */ __asm { MOVQ RDX,XMM1 }
    /* +0xb4d08a */ __asm { IMUL RCX,R14,-0x30339e80 }
    /* +0xb4d091 */ __asm { ADD RCX,R11 }
    /* +0xb4d094 */ __asm { SUB RCX,RDX }
    /* +0xb4d097 */ __asm { LEA R11,[RCX + R10*0x2] }
    /* +0xb4d09b */ __asm { ADD RSI,R9 }
    /* +0xb4d09e */ __asm { ADD RSI,R11 }
    /* +0xb4d0a1 */ __asm { MOVSX R10,DI }
    /* +0xb4d0a5 */ __asm { IMUL R10,RAX }
    /* +0xb4d0a9 */ __asm { AND R8,RBX }
    /* +0xb4d0ac */ __asm { SUB RSI,R8 }
    /* +0xb4d0af */ __asm { MOV R9,0x1a47bffccc58fe27 }
    /* +0xb4d0b9 */ __asm { CMP qword ptr [RSI + R10*0x1],R9 }
    /* +0xb4d0bd */ __asm { JZ 0x7fffa52bf300 }
    /* +0xb4d0c3 */ __asm { MOV R11D,R12D }
    /* +0xb4d0c6 */ __asm { OR R11D,0x1 }
    /* +0xb4d0ca */ __asm { MOV dword ptr [RBP + 0x3c],R11D }
    /* +0xb4d0ce */ __asm { LEA R9,[0x7fffa5633f86] }
    /* +0xb4d0d5 */ __asm { MOV R11D,0x400ef707 }
    /* +0xb4d0db */ __asm { SUB R11D,R12D }
    /* +0xb4d0de */ __asm { ADD R11D,0x84b1748a }
    /* +0xb4d0e5 */ __asm { MOVSXD R11,R11D }
    /* +0xb4d0e8 */ __asm { ADD R11,R9 }
    /* +0xb4d0eb */ __asm { LEA RCX,[RBP + 0x40] }
    /* +0xb4d0ef */ __asm { CALL R11 }
    /* +0xb4d0f2 */ __asm { MOVDQA xmmword ptr [RBP + 0x170],XMM6 }
    /* +0xb4d0fa */ __asm { MOV qword ptr [RBP + 0x180],0x0 }
    /* +0xb4d105 */ __asm { MOV qword ptr [RBP + 0x188],0x7 }
    /* +0xb4d110 */ __asm { XOR R15D,R15D }
    /* +0xb4d113 */ __asm { MOV R11D,R12D }
    /* +0xb4d116 */ __asm { OR R11D,0x1 }
    /* +0xb4d11a */ __asm { MOV dword ptr [RBP + 0x1f0],R11D }
    /* +0xb4d121 */ __asm { MOV qword ptr [RBP + 0x150],R12 }
    /* +0xb4d128 */ __asm { MOV qword ptr [RBP + -0x30],RAX }
    /* +0xb4d12c */ __asm { CMP RAX,R15 }
    /* +0xb4d12f */ __asm { JNZ 0x7fffa52bd159 }
    /* +0xb4d131 */ __asm { JMP 0x7fffa52bd39c }
    /* +0xb4d140 */ __asm { MOV word ptr [R9 + R8*0x2],R14W }
    /* +0xb4d145 */ __asm { MOV word ptr [R9 + R8*0x2 + 0x2],0x0 }
    /* +0xb4d14d */ __asm { INC R15 }
    /* +0xb4d150 */ __asm { CMP RAX,R15 }
    /* +0xb4d153 */ __asm { JZ 0x7fffa52bd39c }
    /* +0xb4d159 */ __asm { MOVSX R14D,uint8_t ptr [RBP + R15*0x1 + 0x40] }
    /* +0xb4d15f */ __asm { TEST R14W,R14W }
    /* +0xb4d163 */ __asm { JS 0x7fffa52bd41b }
    /* +0xb4d169 */ __asm { MOV R8,qword ptr [RBP + 0x180] }
    /* +0xb4d170 */ __asm { MOV RDX,qword ptr [RBP + 0x188] }
    /* +0xb4d177 */ __asm { CMP R8,RDX }
    /* +0xb4d17a */ __asm { JNC 0x7fffa52bd1a0 }
    /* +0xb4d17c */ __asm { LEA R9,[R8 + 0x1] }
    /* +0xb4d180 */ __asm { MOV qword ptr [RBP + 0x180],R9 }
    /* +0xb4d187 */ __asm { LEA R9,[RBP + 0x170] }
    /* +0xb4d18e */ __asm { CMP RDX,0x8 }
    /* +0xb4d192 */ __asm { JC 0x7fffa52bd140 }
    /* +0xb4d194 */ __asm { MOV R9,qword ptr [RBP + 0x170] }
    /* +0xb4d19b */ __asm { JMP 0x7fffa52bd140 }
    /* +0xb4d1a0 */ __asm { MOV R10,R8 }
    /* +0xb4d1a3 */ __asm { XOR R10,-0x5f93088a }
    /* +0xb4d1aa */ __asm { MOV R9,-0x7fffffffa06cf778 }
    /* +0xb4d1b4 */ __asm { CMP R10,R9 }
    /* +0xb4d1b7 */ __asm { MOV qword ptr [RBP + -0x28],R8 }
    /* +0xb4d1bb */ __asm { MOV qword ptr [RBP + -0x38],RDX }
    /* +0xb4d1bf */ __asm { JZ 0x7fffa52bfd4a }
    /* +0xb4d1c5 */ __asm { LEA R13,[R8 + 0x1] }
    /* +0xb4d1c9 */ __asm { MOV R9,R13 }
    /* +0xb4d1cc */ __asm { OR R9,0x7 }
    /* +0xb4d1d0 */ __asm { MOV R11,0x7ffffffffffffffe }
    /* +0xb4d1da */ __asm { MOV RBX,R11 }
    /* +0xb4d1dd */ __asm { CMP R9,R11 }
    /* +0xb4d1e0 */ __asm { JA 0x7fffa52bd20a }
    /* +0xb4d1e2 */ __asm { MOV R11,RDX }
    /* +0xb4d1e5 */ __asm { SHR R11,0x1 }
    /* +0xb4d1e8 */ __asm { MOV RBX,0x7ffffffffffffffe }
    /* +0xb4d1f2 */ __asm { MOV RAX,RBX }
    /* +0xb4d1f5 */ __asm { SUB RAX,R11 }
    /* +0xb4d1f8 */ __asm { CMP RDX,RAX }
    /* +0xb4d1fb */ __asm { JA 0x7fffa52bd20a }
    /* +0xb4d1fd */ __asm { ADD R11,RDX }
    /* +0xb4d200 */ __asm { CMP R9,R11 }
    /* +0xb4d203 */ __asm { CMOVA R11,R9 }
    /* +0xb4d207 */ __asm { MOV RBX,R11 }
    /* +0xb4d20a */ __asm { MOV R11D,0x1b556405 }
    /* +0xb4d210 */ __asm { MOV AX,0xdd65 }
    /* +0xb4d214 */ __asm { MOV EDX,0x39edf438 }
    /* +0xb4d219 */ __asm { IMUL R10D,EDX,-0x213d30b3 }
    /* +0xb4d220 */ __asm { XOR R10D,0xd212f94a }
    /* +0xb4d227 */ __asm { LEA RDI,[0x7fffa52724f7] }
    /* +0xb4d22e */ __asm { LEA RDX,[0x2 + RBX*0x2] }
    /* +0xb4d236 */ __asm { MOV R9,RDX }
    /* +0xb4d239 */ __asm { SHL R9,0x3c }
    /* +0xb4d23d */ __asm { XOR R9,RDX }
    /* +0xb4d240 */ __asm { LEA R8,[R9 + 0x6195d80f] }
    /* +0xb4d247 */ __asm { MOV RDX,R8 }
    /* +0xb4d24a */ __asm { MOV ECX,R12D }
    /* +0xb4d24d */ __asm { ROR R10D,CL }
    /* +0xb4d250 */ __asm { SHL RDX,0xe }
    /* +0xb4d254 */ __asm { SAR R8,0xe }
    /* +0xb4d258 */ __asm { IMUL EAX,dword ptr [RBP + 0x1f0] }
    /* +0xb4d25f */ __asm { ADD EAX,0x5e96 }
    /* +0xb4d264 */ __asm { MOVSX RCX,AX }
    /* +0xb4d268 */ __asm { ADD RCX,RDI }
    /* +0xb4d26b */ __asm { MOV EDI,0xf2d9fbd0 }
    /* +0xb4d270 */ __asm { IMUL R11D,R11D,-0x72dbfc33 }
    /* +0xb4d277 */ __asm { ROL R11D,0x18 }
    /* +0xb4d27b */ __asm { ADD R11D,R12D }
    /* +0xb4d27e */ __asm { MOVSXD RAX,R11D }
    /* +0xb4d281 */ __asm { ADD EDI,0x908f6971 }
    /* +0xb4d287 */ __asm { ROL EDI,0x3 }
    /* +0xb4d28a */ __asm { XOR EDI,R12D }
    /* +0xb4d28d */ __asm { CMP R10,RDI }
    /* +0xb4d290 */ __asm { CMOVBE R8,RDX }
    /* +0xb4d294 */ __asm { LEA R10,[R9 + R8*0x1] }
    /* +0xb4d298 */ __asm { ADD R10,0x6195d80f }
    /* +0xb4d29f */ __asm { MOV RSI,qword ptr [RBP + -0x28] }
    /* +0xb4d2a3 */ __asm { LEA R12,[RSI + RSI*0x1] }
    /* +0xb4d2a7 */ __asm { CALL RCX }
    /* +0xb4d2a9 */ __asm { MOV RDI,RCX }
    /* +0xb4d2ac */ __asm { ROL RDI,0x2c }
    /* +0xb4d2b0 */ __asm { MOV R9,RDI }
    /* +0xb4d2b3 */ __asm { SHL R9,0x36 }
    /* +0xb4d2b7 */ __asm { SUB RDI,R9 }
    /* +0xb4d2ba */ __asm { MOV qword ptr [RBP + 0x180],R13 }
    /* +0xb4d2c1 */ __asm { MOV qword ptr [RBP + 0x188],RBX }
    /* +0xb4d2c8 */ __asm { CMP qword ptr [RBP + -0x38],0x8 }
    /* +0xb4d2cd */ __asm { JC 0x7fffa52bd350 }
    /* +0xb4d2d3 */ __asm { MOV R13D,0x4145acc0 }
    /* +0xb4d2d9 */ __asm { MOV RDX,qword ptr [RBP + 0x170] }
    /* +0xb4d2e0 */ __asm { MOV RBX,RDX }
    /* +0xb4d2e3 */ __asm { MOVQ XMM6,RBX }
    /* +0xb4d2e8 */ __asm { SHR RBX,0x3d }
    /* +0xb4d2ec */ __asm { MOV RCX,RDI }
    /* +0xb4d2ef */ __asm { MOV R8,R12 }
    /* +0xb4d2f2 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xb4d2f7 */ __asm { MOV word ptr [RDI + RSI*0x2],R14W }
    /* +0xb4d2fc */ __asm { LEA R9,[0x7fffa5697646] }
    /* +0xb4d303 */ __asm { MOVD XMM4,EBX }
    /* +0xb4d307 */ __asm { PXOR XMM4,XMM6 }
    /* +0xb4d30b */ __asm { ADD R13D,0xf7913958 }
    /* +0xb4d312 */ __asm { MOV R11D,0xa41a9629 }
    /* +0xb4d318 */ __asm { MOV R12,qword ptr [RBP + 0x150] }
    /* +0xb4d31f */ __asm { XOR R11D,R12D }
    /* +0xb4d322 */ __asm { ADD R11D,0x1750db5a }
    /* +0xb4d329 */ __asm { ROL R11D,0x13 }
    /* +0xb4d32d */ __asm { MOVQ R8,XMM4 }
    /* +0xb4d332 */ __asm { XOR R13D,R12D }
    /* +0xb4d335 */ __asm { ROL R13D,0x16 }
    /* +0xb4d339 */ __asm { MOVSXD RAX,R13D }
    /* +0xb4d33c */ __asm { ADD RAX,R9 }
    /* +0xb4d33f */ __asm { MOV word ptr [RDI + RSI*0x2 + 0x2],0x0 }
    /* +0xb4d346 */ __asm { CALL RAX }
    /* +0xb4d348 */ __asm { JMP 0x7fffa52bd375 }
    /* +0xb4d350 */ __asm { MOV RCX,RDI }
    /* +0xb4d353 */ __asm { MOV R8,R12 }
    /* +0xb4d356 */ __asm { LEA RDX,[RBP + 0x170] }
    /* +0xb4d35d */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xb4d362 */ __asm { MOV word ptr [RDI + RSI*0x2],R14W }
    /* +0xb4d367 */ __asm { MOV word ptr [RDI + RSI*0x2 + 0x2],0x0 }
    /* +0xb4d36e */ __asm { MOV R12,qword ptr [RBP + 0x150] }
    /* +0xb4d375 */ __asm { MOV R8,0x0 }
    /* +0xb4d37c */ __asm { NOP }
    /* +0xb4d37e */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb4d385 */ __asm { MOV qword ptr [RBP + 0x170],RDI }
    /* +0xb4d38c */ __asm { INC R15 }
    /* +0xb4d38f */ __asm { MOV RAX,qword ptr [RBP + -0x30] }
    /* +0xb4d393 */ __asm { CMP RAX,R15 }
    /* +0xb4d396 */ __asm { JNZ 0x7fffa52bd159 }
    /* +0xb4d39c */ __asm { MOVDQA XMM4,xmmword ptr [RBP + 0x170] }
    /* +0xb4d3a4 */ __asm { MOVDQA XMM1,xmmword ptr [RBP + 0x180] }
    /* +0xb4d3ac */ __asm { MOVDQA xmmword ptr [RBP + 0x1b0],XMM1 }
    /* +0xb4d3b4 */ __asm { MOVDQA xmmword ptr [RBP + 0x1a0],XMM4 }
    /* +0xb4d3bc */ __asm { MOV uint8_t ptr [RBP + 0x1c0],0x1 }
    /* +0xb4d3c3 */ __asm { JMP 0x7fffa52bd49a }
    /* +0xb4d3c8 */ __asm { MOV R9,-0x2acd688eac15b20a }
    /* +0xb4d3d2 */ __asm { MOV R11,-0xc254a84d }
    /* +0xb4d3dc */ __asm { XOR R11,R9 }
    /* +0xb4d3df */ __asm { ADD R11,-0x7319636a }
    /* +0xb4d3e6 */ __asm { MOV R9,qword ptr [RBP + 0x308] }
    /* +0xb4d3ed */ __asm { MOV RAX,-0x29e63e60a60e1c33 }
    /* +0xb4d3f7 */ __asm { IMUL RAX,qword ptr [R9 + -0xbd0] }
    /* +0xb4d3ff */ __asm { MOV R9D,0xc7ae4910 }
    /* +0xb4d405 */ __asm { XOR R9,RAX }
    /* +0xb4d408 */ __asm { CMP R11,R9 }
    /* +0xb4d40b */ __asm { JNZ 0x7fffa52be416 }
    /* +0xb4d411 */ __asm { IMUL ESP,dword ptr CS:[RBP + 0x6ee9c931],0x48000020 }
    /* +0xb4d41c */ __asm { CMP dword ptr [RBP + 0x188],0x7 }
    /* +0xb4d423 */ __asm { MOV uint8_t ptr [RBP + 0x1c0],0x0 }
    /* +0xb4d42a */ __asm { JBE 0x7fffa52bfdc2 }
    /* +0xb4d430 */ __asm { LEA RAX,[0x7fffa568f230] }
    /* +0xb4d437 */ __asm { MOV R11D,0x5bcfb5f }
    /* +0xb4d43d */ __asm { MOV DX,0x1cfb }
    /* +0xb4d441 */ __asm { MOV R10D,R12D }
    /* +0xb4d444 */ __asm { XOR R10D,EDX }
    /* +0xb4d447 */ __asm { ADD R10D,0x38e4 }
    /* +0xb4d44e */ __asm { MOVSX R9,R10W }
    /* +0xb4d452 */ __asm { ADD R9,RAX }
    /* +0xb4d455 */ __asm { MOV RAX,qword ptr [RBP + 0x170] }
    /* +0xb4d45c */ __asm { MOVQ XMM4,RAX }
    /* +0xb4d461 */ __asm { SHR RAX,0x3d }
    /* +0xb4d465 */ __asm { IMUL R11D,dword ptr [RBP + 0x3c] }
    /* +0xb4d46a */ __asm { ROL R11D,0x18 }
    /* +0xb4d46e */ __asm { MOVD XMM1,EAX }
    /* +0xb4d472 */ __asm { PXOR XMM4,XMM1 }
    /* +0xb4d476 */ __asm { MOVQ R8,XMM4 }
    /* +0xb4d47b */ __asm { CALL R9 }
    /* +0xb4d47e */ __asm { MOVZX R9D,uint8_t ptr [RBP + 0x1c0] }
    /* +0xb4d486 */ __asm { TEST R9B,0x1 }
    /* +0xb4d48a */ __asm { JZ 0x7fffa52bfdc2 }
    /* +0xb4d490 */ __asm { TEST R9B,0x1 }
    /* +0xb4d494 */ __asm { JZ 0x7fffa52bfe0c }
    /* +0xb4d49a */ __asm { CMP qword ptr [RBP + 0x1b8],0x8 }
    /* +0xb4d4a2 */ __asm { JC 0x7fffa52bd4ad }
    /* +0xb4d4a4 */ __asm { MOV RSI,qword ptr [RBP + 0x1a0] }
    /* +0xb4d4ab */ __asm { JMP 0x7fffa52bd4b4 }
    /* +0xb4d4ad */ __asm { LEA RSI,[RBP + 0x1a0] }
    /* +0xb4d4b4 */ __asm { MOV dword ptr [RBP + 0x170],0x490a5108 }
    /* +0xb4d4be */ __asm { MOV R11D,dword ptr [RBP + 0x170] }
    /* +0xb4d4c5 */ __asm { PXOR XMM4,XMM4 }
    /* +0xb4d4c9 */ __asm { MOVDQA xmmword ptr [RBP + 0x170],XMM4 }
    /* +0xb4d4d1 */ __asm { MOV qword ptr [RBP + 0x180],0x0 }
    /* +0xb4d4dc */ __asm { MOV qword ptr [RBP + 0x188],0x7 }
    /* +0xb4d4e7 */ __asm { TEST RSI,RSI }
    /* +0xb4d4ea */ __asm { JZ 0x7fffa52bd565 }
    /* +0xb4d4ec */ __asm { MOV R11W,0xb02c }
    /* +0xb4d4f1 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xb4d4f8 */ __asm { MOV R8,0x0 }
    /* +0xb4d4ff */ __asm { NOP }
    /* +0xb4d500 */ __asm { IMUL R11D,R11D,-0x5c7d }
    /* +0xb4d507 */ __asm { ADD R11D,0xffffa5ea }
    /* +0xb4d50e */ __asm { MOV ECX,R12D }
    /* +0xb4d511 */ __asm { ROR R11W,CL }
    /* +0xb4d515 */ __asm { LEA R9,[0x7fffa5179550] }
    /* +0xb4d51c */ __asm { MOVSX R11,R11W }
    /* +0xb4d520 */ __asm { ADD R11,R9 }
    /* +0xb4d523 */ __asm { MOV RCX,RSI }
    /* +0xb4d526 */ __asm { CALL R11 }
    /* +0xb4d529 */ __asm { MOV R14,RAX }
    /* +0xb4d52c */ __asm { CMP RAX,0x7 }
    /* +0xb4d530 */ __asm { JA 0x7fffa52bd575 }
    /* +0xb4d532 */ __asm { MOV qword ptr [RBP + 0x180],R14 }
    /* +0xb4d539 */ __asm { MOV R8,R14 }
    /* +0xb4d53c */ __asm { ADD R8,R14 }
    /* +0xb4d53f */ __asm { LEA RCX,[RBP + 0x170] }
    /* +0xb4d546 */ __asm { MOV RDX,RSI }
    /* +0xb4d549 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xb4d54e */ __asm { MOV word ptr [RBP + R14*0x2 + 0x170],0x0 }
    /* +0xb4d559 */ __asm { MOV R15,qword ptr [RBP + 0x188] }
    /* +0xb4d560 */ __asm { JMP 0x7fffa52bd644 }
    /* +0xb4d565 */ __asm { LEA RCX,[RBP + 0x170] }
    /* +0xb4d56c */ __asm { MOV RSI,qword ptr [RBP + 0x30] }
    /* +0xb4d570 */ __asm { JMP 0x7fffa52bd65e }
    /* +0xb4d575 */ __asm { MOV R9,0x7fffffffffffffff }
    /* +0xb4d57f */ __asm { CMP R14,R9 }
    /* +0xb4d582 */ __asm { JNC 0x7fffa52bfda2 }
    /* +0xb4d588 */ __asm { MOV AX,0x7f1 }
    /* +0xb4d58c */ __asm { SUB EAX,R12D }
    /* +0xb4d58f */ __asm { MOV R10,R14 }
    /* +0xb4d592 */ __asm { OR R10,0x7 }
    /* +0xb4d596 */ __asm { CMP R10,0xb }
    /* +0xb4d59a */ __asm { MOV R15D,0xa }
    /* +0xb4d5a0 */ __asm { CMOVNC R15,R10 }
    /* +0xb4d5a4 */ __asm { ADD EAX,0x1f64 }
    /* +0xb4d5a9 */ __asm { LEA R11,[0x7fffa526d142] }
    /* +0xb4d5b0 */ __asm { MOVSX R9,AX }
    /* +0xb4d5b4 */ __asm { ADD R9,R11 }
    /* +0xb4d5b7 */ __asm { MOV R11,0x7ffffffffffffffe }
    /* +0xb4d5c1 */ __asm { CMP R15,R11 }
    /* +0xb4d5c4 */ __asm { CMOVNC R15,R11 }
    /* +0xb4d5c8 */ __asm { LEA R11,[0x2 + R15*0x2] }
    /* +0xb4d5d0 */ __asm { MOV RAX,R11 }
    /* +0xb4d5d3 */ __asm { SHL RAX,0x3c }
    /* +0xb4d5d7 */ __asm { XOR RAX,R11 }
    /* +0xb4d5da */ __asm { SHL R11,0xe }
    /* +0xb4d5de */ __asm { MOV R10,0x1865d799980f }
    /* +0xb4d5e8 */ __asm { ADD R10,R11 }
    /* +0xb4d5eb */ __asm { ADD R10,RAX }
    /* +0xb4d5ee */ __asm { MOV R11D,0x7026f2a7 }
    /* +0xb4d5f4 */ __asm { IMUL R11D,dword ptr [RBP + 0x3c] }
    /* +0xb4d5f9 */ __asm { ADD R11D,0x106e5f5d }
    /* +0xb4d600 */ __asm { MOVSXD RAX,R11D }
    /* +0xb4d603 */ __asm { CALL R9 }
    /* +0xb4d606 */ __asm { MOV RDI,RCX }
    /* +0xb4d609 */ __asm { ROL RDI,0x2c }
    /* +0xb4d60d */ __asm { MOV qword ptr [RBP + 0x188],R15 }
    /* +0xb4d614 */ __asm { MOV R9,RDI }
    /* +0xb4d617 */ __asm { SHL R9,0x36 }
    /* +0xb4d61b */ __asm { SUB RDI,R9 }
    /* +0xb4d61e */ __asm { MOV R8,R14 }
    /* +0xb4d621 */ __asm { ADD R8,R14 }
    /* +0xb4d624 */ __asm { MOV qword ptr [RBP + 0x180],R14 }
    /* +0xb4d62b */ __asm { MOV RCX,RDI }
    /* +0xb4d62e */ __asm { MOV RDX,RSI }
    /* +0xb4d631 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xb4d636 */ __asm { MOV word ptr [RDI + R14*0x2],0x0 }
    /* +0xb4d63d */ __asm { MOV qword ptr [RBP + 0x170],RDI }
    /* +0xb4d644 */ __asm { CMP R15,0x8 }
    /* +0xb4d648 */ __asm { MOV RSI,qword ptr [RBP + 0x30] }
    /* +0xb4d64c */ __asm { JC 0x7fffa52bd657 }
    /* +0xb4d64e */ __asm { MOV RCX,qword ptr [RBP + 0x170] }
    /* +0xb4d655 */ __asm { JMP 0x7fffa52bd65e }
    /* +0xb4d657 */ __asm { LEA RCX,[RBP + 0x170] }
    /* +0xb4d65e */ __asm { MOV R8,0x1f1bb4c80d6be486 }
    /* +0xb4d668 */ __asm { MOV R11,RBP }
    /* +0xb4d66b */ __asm { LEA R9,[0x7fffa5278b39] }
    /* +0xb4d672 */ __asm { MOV RAX,0x1f1bb4d50d63e482 }
    /* +0xb4d67c */ __asm { MOV EDX,0x86bc2bf7 }
    /* +0xb4d681 */ __asm { IMUL EDX,dword ptr [RBP + 0x3c] }
    /* +0xb4d685 */ __asm { MOV R10,qword ptr [RBP + -0x40] }
    /* +0xb4d689 */ __asm { MOV qword ptr [RBP + -0x18],R10 }
    /* +0xb4d68d */ __asm { MOV qword ptr [RBP + -0x20],RAX }
    /* +0xb4d691 */ __asm { MOV qword ptr [RBP + 0x278],R10 }
    /* +0xb4d698 */ __asm { MOV qword ptr [RBP + 0x270],R8 }
    /* +0xb4d69f */ __asm { MOV qword ptr [RBP + 0x8],R10 }
    /* +0xb4d6a3 */ __asm { MOV qword ptr [RBP],RSI }
    /* +0xb4d6a7 */ __asm { MOVDQA XMM4,xmmword ptr [R11] }
    /* +0xb4d6ac */ __asm { PXOR XMM4,xmmword ptr [RBP + -0x20] }
    /* +0xb4d6b1 */ __asm { MOVDQA xmmword ptr [RBP + -0x20],XMM4 }
    /* +0xb4d6b6 */ __asm { MOV R11D,0x6e3b1788 }
    /* +0xb4d6bc */ __asm { SUB R11D,EDX }
    /* +0xb4d6bf */ __asm { MOVSXD R11,R11D }
    /* +0xb4d6c2 */ __asm { ADD R11,R9 }
    /* +0xb4d6c5 */ __asm { LEA RDX,[RBP + -0x20] }
    /* +0xb4d6c9 */ __asm { MOV R8D,0x4 }
    /* +0xb4d6cf */ __asm { CALL R11 }
    /* +0xb4d6d2 */ __asm { TEST EAX,EAX }
    /* +0xb4d6d4 */ __asm { MOV R12,qword ptr [RBP + 0x150] }
    /* +0xb4d6db */ __asm { JZ 0x7fffa52bd7f2 }
    /* +0xb4d6e1 */ __asm { MOV R11D,0x8aa12878 }
    /* +0xb4d6e7 */ __asm { MOV R8,RBP }
    /* +0xb4d6ea */ __asm { LEA R9,[0x7fffa5276a99] }
    /* +0xb4d6f1 */ __asm { MOVDQA XMM4,xmmword ptr [RBP + 0x270] }
    /* +0xb4d6f9 */ __asm { MOV RAX,qword ptr [RBP + -0x40] }
    /* +0xb4d6fd */ __asm { MOV qword ptr [RBP + 0x8],RAX }
    /* +0xb4d701 */ __asm { MOV qword ptr [RBP],RSI }
    /* +0xb4d705 */ __asm { PXOR XMM4,xmmword ptr [R8] }
    /* +0xb4d70a */ __asm { XOR R11D,R12D }
    /* +0xb4d70d */ __asm { MOVDQA xmmword ptr [RBP + 0x270],XMM4 }
    /* +0xb4d715 */ __asm { CMP qword ptr [RBP + 0x188],0x8 }
    /* +0xb4d71d */ __asm { JC 0x7fffa52bd728 }
    /* +0xb4d71f */ __asm { MOV RCX,qword ptr [RBP + 0x170] }
    /* +0xb4d726 */ __asm { JMP 0x7fffa52bd72f }
    /* +0xb4d728 */ __asm { LEA RCX,[RBP + 0x170] }
    /* +0xb4d72f */ __asm { IMUL R11D,R11D,-0x79c50ca7 }
    /* +0xb4d736 */ __asm { MOVSXD R11,R11D }
    /* +0xb4d739 */ __asm { ADD R9,R11 }
    /* +0xb4d73c */ __asm { LEA RDX,[RBP + 0x270] }
    /* +0xb4d743 */ __asm { MOV R8D,0x4 }
    /* +0xb4d749 */ __asm { CALL R9 }
    /* +0xb4d74c */ __asm { TEST EAX,EAX }
    /* +0xb4d74e */ __asm { MOV R12,qword ptr [RBP + 0x150] }
    /* +0xb4d755 */ __asm { JZ 0x7fffa52bd7f2 }
    /* +0xb4d75b */ __asm { PUSHFQ }
    /* +0xb4d75c */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb4d764 */ __asm { POPFQ }
    /* +0xb4d765 */ __asm { MOV dword ptr [RBP],0xef6fffff }
    /* +0xb4d76c */ __asm { MOV R11D,dword ptr [RBP] }
    /* +0xb4d770 */ __asm { MOVD XMM4,R12D }
    /* +0xb4d775 */ __asm { MOV EDX,0x5a79d371 }
    /* +0xb4d77a */ __asm { IMUL EDX,EDX,-0x6c037fb7 }
    /* +0xb4d780 */ __asm { MOVD XMM1,EDX }
    /* +0xb4d784 */ __asm { PSUBD XMM1,XMM4 }
    /* +0xb4d788 */ __asm { MOVD EDX,XMM1 }
    /* +0xb4d78c */ __asm { ROL EDX,0x2 }
    /* +0xb4d78f */ __asm { CMP R11D,EDX }
    /* +0xb4d792 */ __asm { NOP }
    /* +0xb4d793 */ __asm { NOP }
    /* +0xb4d794 */ __asm { NOP }
    /* +0xb4d795 */ __asm { NOP }
    /* +0xb4d796 */ __asm { NOP }
    /* +0xb4d797 */ __asm { MOV R11W,0x495 }
    /* +0xb4d79c */ __asm { MOV EDX,0xb99e1ea3 }
    /* +0xb4d7a1 */ __asm { MOVD XMM4,dword ptr [RBP + 0x3c] }
    /* +0xb4d7a6 */ __asm { XOR R11D,0x3495 }
    /* +0xb4d7ad */ __asm { MOV ECX,R12D }
    /* +0xb4d7b0 */ __asm { ROR R11W,CL }
    /* +0xb4d7b4 */ __asm { MOVZX EAX,R11W }
    /* +0xb4d7b8 */ __asm { XOR EDX,0x40e966af }
    /* +0xb4d7be */ __asm { MOVD XMM1,EDX }
    /* +0xb4d7c2 */ __asm { PMULUDQ XMM1,XMM4 }
    /* +0xb4d7c6 */ __asm { MOVD R10D,XMM1 }
    /* +0xb4d7cb */ __asm { XOR R10D,0xbaf4eed3 }
    /* +0xb4d7d2 */ __asm { MOV R9,qword ptr [RBP + 0x180] }
    /* +0xb4d7d9 */ __asm { CMP qword ptr [RBP + 0x188],R10 }
}


// ============================================================================
// Function : Unwind@7fffa52c3730  |  RVA: 0xb53730  |  Size: 291 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa52c3730(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x2d8)) {
    pcVar1 = (code *)((int64_t)
                      (int)(*(int *)(param_2 + 0xbc) * 0x40000000 |
                           (uint32_t)(*(int *)(param_2 + 0xbc) * -0x31c7aca7) >> 2) + 0x7fffa568fd9d);
    (*pcVar1)(param_1,pcVar1,
              *(uint64_t *)(param_2 + 0x2c0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x2c0));
  }
  *(uint64_t *)(param_2 + 0x2d0) = 0;
  *(uint64_t *)(param_2 + 0x2d8) = 7;
  *(uint16_t *)(param_2 + 0x2c0) = 0;
  if (7 < *(uint64_t *)(param_2 + 0x98)) {
    (*(code *)((int64_t)(short)((short)*(uint32_t *)(param_2 + 0x58) * 0x2e5c) + 0x7fffa568fb2c))
              ();
  }
  *(uint16_t *)(param_2 + 0x80) = 0;
  *(uint64_t *)(param_2 + 0x98) = 7;
  *(uint64_t *)(param_2 + 0x90) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa52c3860  |  RVA: 0xb53860  |  Size: 224 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa52c3860(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  int64_t lVar5;
  uint32_t uVar6;
  
  if (*(int64_t *)(param_2 + 0x48) != 0) {
    uVar1 = *(uint64_t *)(param_2 + 0x1d0);
    bVar3 = (uint8_t)uVar1 & 0x1f;
    uVar6 = (uint32_t)uVar1 ^ 0x473ebdfa;
    uVar4 = (uint16_t)uVar1 | 1;
    plVar2 = *(int64_t **)
              ((int64_t)(short)(uVar4 * 0x4c00 | (uint16_t)(uVar4 * 0x7a53) >> 6) + 0x7fffa478d241);
    if (plVar2 == (int64_t *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar2;
    }
    LOCK();
    plVar2 = (int64_t *)((int64_t)~(*(int *)(param_2 + 0xbc) * 0xff34f57) + 0x7fffa47cb6aa);
    *plVar2 = *plVar2 + (*(int64_t *)(uint64_t)(0xff00043fU >> bVar3 | -0xfffbc1 << 0x20 - bVar3)
                        - (*(int64_t *)(uint64_t)(uVar6 << 5 | uVar6 >> 0x1b) +
                           *(int64_t *)(param_2 + 0x48) + lVar5));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa52c3940  |  RVA: 0xb53940  |  Size: 218 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa52c3940(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if ((uint64_t)(uint16_t)((short)*(uint32_t *)(param_2 + 0x1d0) + 0xb220) <
      *(uint64_t *)(param_2 + 0x208)) {
    pcVar1 = (code *)((int64_t)~(*(int *)(param_2 + 0xbc) * 0x28044021) + 0x7fffa56946f8);
    (*pcVar1)(param_1,pcVar1,
              *(uint64_t *)(param_2 + 0x1f0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1f0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa52c3a20  |  RVA: 0xb53a20  |  Size: 193 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa52c3a20(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  if ((*(char *)(param_2 + 0x240) == '\x01') && (7 < *(uint64_t *)(param_2 + 0x238))) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1d0) & 0x1f;
    pcVar2 = (code *)((int64_t)
                      (int)((0xc544a8c8U >> bVar1 | -0x3abb5738 << 0x20 - bVar1) * -0x4f983579) +
                     0x7fffa5692879);
    (*pcVar2)(*(uint64_t *)(param_2 + 0x1d0),pcVar2,
              *(uint64_t *)(param_2 + 0x220) >> 0x3d ^ *(uint64_t *)(param_2 + 0x220));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa52c3af0  |  RVA: 0xb53af0  |  Size: 247 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa52c3af0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  bool bVar3;
  uint32_t uVar4;
  uint16_t uVar5;
  
  uVar4 = ((uint32_t)*(uint64_t *)(param_2 + 0x1d0) ^ 0x2be48b3c) + 0x27bd680b;
  uVar1 = *(uint64_t *)(param_2 + 0x58);
  uVar5 = ((short)*(uint64_t *)(param_2 + 0x1d0) + -0x62ea) * 0x5795;
  bVar2 = (uint8_t)uVar1 & 0xf;
  bVar3 = 7 < *(uint64_t *)(param_2 + 0x48);
  if ((uVar4 * 0x80 | uVar4 >> 0x19) + (int)uVar1 <=
      (uint32_t)(uint16_t)(uVar5 >> bVar2 | uVar5 << 0x10 - bVar2)) {
    bVar3 = 7 < (int64_t)*(uint64_t *)(param_2 + 0x48);
  }
  if (bVar3) {
    (*(code *)((int64_t)(short)(-0x36ad - ((short)*(uint64_t *)(param_2 + 0x58) + 0x17cc)) +
              0x7fffa568caa7))
              (uVar1,0x17cc,
               *(uint64_t *)(param_2 + 0x1f0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1f0));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52c3bf0  |  RVA: 0xb53bf0  |  Size: 1 bytes
// Callers  : FUN_7fffa5427acf@0xcb7acf, FUN_7fffa4d25bdf@0x5b5bdf, FUN_7fffa560b2ce@0xe9b2ce, FUN_7fffa56a09c0@0xf309c0, FUN_7fffa5155450@0x9e5450, FUN_7fffa54539d0@0xce39d0
// Callees  : none
// ============================================================================
void FUN_7fffa52c3bf0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa52c3c00  |  RVA: 0xb53c00  |  Size: 37 bytes
// Callers  : FUN_7fffa56a0670@0xf30670, FUN_7fffa52c6460@0xb56460, FUN_7fffa5697680@0xf27680, FUN_7fffa55883d0@0xe183d0
// Callees  : FUN_7fffa5513ad0@0xda3ad0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa52c3c00(char param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  uVar2 = FUN_7fffa5513ad0();
  uVar1 = _DAT_7fffa4781bb8;
  if (((int)uVar2 != 0) && (param_1 == '\0')) {
    LOCK();
    _DAT_7fffa4781bb8 = 0;
    UNLOCK();
    uVar2 = uVar1;
  }
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa52c3c30  |  RVA: 0xb53c30  |  Size: 1036 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52c3c30(uint64_t param_1,uint64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint32_t uVar10;
  uint64_t in_R11;
  uint32_t uVar11;
  uint8_t bVar12;
  int64_t lVar13;
  
  uVar5 = CONCAT62((int6)((uint64_t)param_2 >> 0x10),0x4871);
  lVar9 = 0;
  uVar8 = (~uVar5 & ~in_R11) * -0xaa290e32 +
          (uVar5 | in_R11) * 0x16839b40 + (uVar5 & in_R11) * -0xc0aca972 +
          (uVar5 ^ in_R11) * -0xc0aca972;
  uVar10 = (uint32_t)uVar8;
  uVar2 = (uint16_t)uVar8;
  lVar13 = (int64_t)(int)((uVar10 | 1) * -0x43a913dc);
  uVar4 = (uVar2 ^ 0x4871) + 0x3615;
  bVar12 = (uint8_t)uVar8;
  *(uint8_t *)((int64_t)(short)(uVar4 * 0x10 | uVar4 >> 0xc) + 0x7fffa47893e9) = 0;
  *(uint8_t (*) [16])(lVar13 + 0x7fffa4795663) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar13 + 0x7fffa4795653) = (uint8_t  [16])0x0;
  *(uint64_t *)
   ((int64_t)
    (int)((0xd35e2423U >> (bVar12 & 0x1f) | -0x2ca1dbdd << 0x20 - (bVar12 & 0x1f)) + 0x76f66237) +
   0x7fffa4790293) = 0;
  uVar5 = rdtsc();
  lVar6 = (uVar5 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar5)) * 0xbc895788f47cd39 + 0xb;
  lVar13 = 0x7cdbad75972fae2b;
  while( true ) {
    lVar7 = lVar6 * 0xbc895788f47cd39 + 0xb;
    lVar6 = (uVar8 | 1) * lVar7 * -0xc68d0b22f430d1d;
    uVar5 = (uint64_t)((uint32_t)lVar6 & 0xb);
    if ((uint64_t)(0x7835ec12 - uVar10 ^ 0x2b444ff6) != (int64_t)(int)(uVar10 + 0x54e70eff)) {
      uVar5 = lVar6 + 0xb;
    }
    lVar6 = uVar5 * 0xbc895788f47cd39 + 0xb;
    *(char *)(lVar9 + (int64_t)
                      (int)(0x2bfbfffdU >> (bVar12 & 0x1f) | 0x2bfbfffd << 0x20 - (bVar12 & 0x1f)) +
                      0x7fffa4790e6d) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar9 + (int64_t)(short)((uVar2 | 1) * 0x262) + 0x7fffa47883e4) =
         (char)(uVar5 >> 0x20);
    lVar6 = ~(uVar8 + 0xf4376a86c68f2494) * lVar6 + 0xb;
    *(char *)(lVar9 + (int64_t)(int)((uVar10 | 1) * 0x486d83df + 0x6040d31b) + 0x7fffa4790ee4) =
         (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar9 + (int64_t)(short)(uVar2 ^ 0xc847) + 0x7fffa47892f4) =
         (char)((uint64_t)lVar7 >> 0x20);
    if (lVar13 - (uint64_t)(0x121ec5c3 << (bVar12 & 0x1f) | 0x121ec5c3U >> 0x20 - (bVar12 & 0x1f))
        == 0x4a9684cef31e4870) break;
    lVar13 = lVar13 + 0x7cdbad75972fae2c;
    lVar9 = lVar9 + 4;
  }
  bVar3 = (char)lVar9 + 4;
  bVar1 = bVar3 & 0xf;
  uVar2 = -0x30bf << bVar1 | 0xcf41U >> 0x10 - bVar1;
  uVar2 = uVar2 >> (bVar12 & 0xf) | uVar2 << 0x10 - (bVar12 & 0xf);
  bVar12 = *(char *)((int64_t)(((int)lVar9 + 5) * 0x10424f45 + -0x61e0467f) + 0x7fffa4794256) + 1U
           & 3;
  uVar11 = (0x65bc0e31 - uVar10) * 0x8000000 | 0x65bc0e31 - uVar10 >> 5;
  bVar3 = bVar3 & 0x1f;
  uVar11 = uVar11 << bVar3 | uVar11 >> 0x20 - bVar3;
  *(uint64_t *)
   ((int64_t)(int)(uVar11 << 0x12 | uVar11 >> 0xe) + 0x7fffa478e25a + (uint64_t)bVar12 * 8) =
       *(uint64_t *)((int64_t)(short)(uVar2 << 5 | uVar2 >> 0xb) + 0x7fffa478b8ba);
  *(uint8_t *)((int64_t)(int)((int)lVar9 + (uVar10 + 0xea50a9e1) * -0x6512c631 + 4) + 0x7fffa47946cf)
       = bVar12;
  return;
}


// ============================================================================
// Function : FUN_7fffa52c403c  |  RVA: 0xb5403c  |  Size: 31 bytes
// Callers  : FUN_7fffa52c8990@0xb58990, FUN_7fffa517b810@0xa0b810, FUN_7fffa54037a0@0xc937a0, FUN_7fffa4e8e990@0x71e990, FUN_7fffa4ecda70@0x75da70, Unwind@7fffa56253e0@0xeb53e0
// Callees  : _guard_dispatch_icall@0xf30810, FUN_7fffa56266a0@0xeb66a0, FUN_7fffa524fccc@0xadfccc
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_7fffa52c403c(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  
  lVar1 = FUN_7fffa56266a0();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
  FUN_7fffa524fccc();
  FUN_7fffa4f54478(**(uint32_t **)(param_2 + 0x58));
  return;
}


// ============================================================================
// Function : FUN_7fffa52c405b  |  RVA: 0xb5405b  |  Size: 25 bytes
// Callers  : none
// Callees  : FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa52c405b(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa4f54478(**(uint32_t **)(param_2 + 0x58));
  return;
}


// ============================================================================
// Function : FUN_7fffa52c4078  |  RVA: 0xb54078  |  Size: 445 bytes
// Callers  : FUN_7fffa562521c@0xeb521c, FUN_7fffa50c9318@0x959318
// Callees  : FUN_7fffa517b7fc@0xa0b7fc, FUN_7fffa52d7c04@0xb67c04, FUN_7fffa5488850@0xd18850, FUN_7fffa4ecdabc@0x75dabc
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa52c4078(uint64_t param_1,uint8_t *param_2,uint64_t param_3,uint32_t *param_4,
                     uint64_t param_5)

{
  uint8_t bVar1;
  uint64_t uVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  uint8_t *pbVar5;
  uint8_t bVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint32_t *puVar10;
  uint8_t auStack_78 [24];
  uint32_t auStack_60 [6];
  uint64_t uStack_48;
  
  uStack_48 = _DAT_7fffa4780040 ^ (uint64_t)auStack_78;
  puVar4 = (uint32_t *)0x7fffa4782640;
  if (param_4 != (uint32_t *)0x0) {
    puVar4 = param_4;
  }
  pbVar5 = &UNK_7fffa5873a7c;
  uVar2 = 1;
  if (param_2 != (uint8_t *)0x0) {
    pbVar5 = param_2;
    uVar2 = param_3;
  }
  puVar10 = (uint32_t *)(-(uint64_t)(param_2 != (uint8_t *)0x0) & param_1);
  if (uVar2 == 0) goto LAB_7fffa52c4219;
  if (*(short *)((int64_t)puVar4 + 6) == 0) {
    uVar3 = FUN_7fffa52d7c04(pbVar5);
    uVar7 = (uint64_t)(int)uVar3;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if (uVar3 < 2) {
      if (puVar10 != (uint32_t *)0x0) {
        *puVar10 = (uint32_t)bVar1;
      }
      goto LAB_7fffa52c4219;
    }
    if (uVar3 - 2 < 3) {
      bVar6 = (uint8_t)uVar3;
      uVar3 = (1 << (7 - bVar6 & 0x1f)) - 1U & (uint32_t)bVar1;
      goto LAB_7fffa52c4165;
    }
  }
  else {
    bVar1 = (uint8_t)puVar4[1];
    uVar7 = (uint64_t)bVar1;
    uVar3 = *puVar4;
    bVar6 = *(uint8_t *)((int64_t)puVar4 + 6);
    if ((((uint8_t)(bVar1 - 2) < 3) && (bVar6 != 0)) && (bVar6 < bVar1)) {
LAB_7fffa52c4165:
      uVar9 = (uint64_t)bVar6;
      uVar8 = uVar9;
      if (uVar2 <= uVar9) {
        uVar8 = uVar2;
      }
      while ((uint64_t)((int64_t)pbVar5 - (int64_t)param_2) < uVar8) {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        if ((bVar1 & 0xc0) != 0x80) goto LAB_7fffa52c420e;
        uVar3 = bVar1 & 0x3f | uVar3 << 6;
      }
      if (uVar8 < uVar9) {
        *(uint16_t *)(puVar4 + 1) = (uint16_t)uVar7 & 0xff;
        *(uint16_t *)((int64_t)puVar4 + 6) = (uint16_t)(uint8_t)(bVar6 - (char)uVar8);
        *puVar4 = uVar3;
        goto LAB_7fffa52c4219;
      }
      if ((0x7ff < uVar3 - 0xd800) && (uVar3 < 0x110000)) {
        auStack_60[2] = 0x80;
        auStack_60[3] = 0x800;
        auStack_60[4] = 0x10000;
        if (auStack_60[uVar7 & 0xff] <= uVar3) {
          if (puVar10 != (uint32_t *)0x0) {
            *puVar10 = uVar3;
          }
          FUN_7fffa517b7fc(-(uint64_t)(uVar3 != 0) & uVar9,puVar4);
          goto LAB_7fffa52c4219;
        }
      }
    }
  }
LAB_7fffa52c420e:
  FUN_7fffa4ecdabc(puVar4,param_5);
LAB_7fffa52c4219:
  FUN_7fffa5488850(uStack_48 ^ (uint64_t)auStack_78);
  return;
}


// ============================================================================
// Function : FUN_7fffa52c4238  |  RVA: 0xb54238  |  Size: 376 bytes
// Callers  : FUN_7fffa522496c@0xab496c
// Callees  : FUN_7fffa4fd1100@0x861100, FUN_7fffa562518c@0xeb518c, FUN_7fffa50c9318@0x959318
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7fffa52c4238(uint16_t *param_1,uint8_t *param_2,uint64_t param_3,int64_t param_4)

{
  int iVar1;
  int64_t *plVar2;
  int iVar3;
  
  if ((param_2 == (uint8_t *)0x0) || (param_3 == 0)) {
    _DAT_7fffa4782638 = 0;
  }
  else {
    if (*param_2 != 0) {
      if (*(char *)(param_4 + 0x28) == '\0') {
        FUN_7fffa4fd1100(param_4);
      }
      plVar2 = *(int64_t **)(param_4 + 0x18);
      iVar3 = *(int *)((int64_t)plVar2 + 0xc);
      if (iVar3 == 0xfde9) {
        iVar3 = FUN_7fffa50c9318(param_1,param_2,param_3,&DAT_7fffa4782638,param_4);
        if (iVar3 < 0) {
          return -1;
        }
        return iVar3;
      }
      if (plVar2[0x27] == 0) {
        if (param_1 != (uint16_t *)0x0) {
          *param_1 = (uint16_t)*param_2;
        }
        return 1;
      }
      if (*(short *)(*plVar2 + (uint64_t)*param_2 * 2) < 0) {
        iVar1 = (int)plVar2[1];
        if ((((1 < iVar1) && (iVar1 <= (int)param_3)) &&
            (iVar3 = FUN_7fffa562518c(iVar3,9,param_2,iVar1,param_1,param_1 != (uint16_t *)0x0),
            iVar3 != 0)) ||
           (((uint64_t)(int64_t)*(int *)(*(int64_t *)(param_4 + 0x18) + 8) <= param_3 &&
            (param_2[1] != 0)))) {
          return *(int *)(*(int64_t *)(param_4 + 0x18) + 8);
        }
      }
      else {
        iVar3 = FUN_7fffa562518c(iVar3,9,param_2,1,param_1,param_1 != (uint16_t *)0x0);
        if (iVar3 != 0) {
          return 1;
        }
      }
      *(uint8_t *)(param_4 + 0x30) = 1;
      *(uint32_t *)(param_4 + 0x2c) = 0x2a;
      return -1;
    }
    if (param_1 != (uint16_t *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa52c43b0  |  RVA: 0xb543b0  |  Size: 1 bytes
// Callers  : FUN_7fffa5488ca4@0xd18ca4
// Callees  : none
// ============================================================================
void FUN_7fffa52c43b0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa52c43f0  |  RVA: 0xb543f0  |  Size: 3417 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52c43f0(uint64_t *param_1,uint32_t param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint32_t uVar11;
  uint8_t bVar12;
  uint8_t bVar13;
  uint8_t uVar14;
  uint32_t uVar15;
  int64_t lVar16;
  int iVar17;
  int64_t lVar18;
  uint64_t uVar19;
  uint32_t uVar20;
  uint64_t *puVar21;
  uint32_t uVar22;
  uint64_t uVar23;
  int64_t lVar24;
  uint64_t uVar25;
  uint32_t uVar26;
  uint64_t *puVar27;
  char cVar28;
  uint32_t uVar29;
  uint32_t uVar30;
  uint64_t *in_R10;
  uint64_t uVar31;
  uint64_t *puVar32;
  uint64_t *puVar33;
  uint16_t uVar34;
  int64_t lVar35;
  uint64_t *puVar36;
  uint64_t uVar37;
  int64_t lVar38;
  uint64_t uVar39;
  int64_t lVar40;
  uint8_t uVar43;
  char cVar44;
  char cVar45;
  uint8_t uVar46;
  char cVar47;
  uint64_t in_XMM0_Qa;
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint32_t auStack_148 [66];
  
  uVar39 = ~(~in_XMM0_Qa * -0x437388c8c854128d);
  uVar23 = (param_3 & 0x1fffffffffffffff) >> 2 ^ (param_3 << 3 | param_3 >> 0x3d);
  uVar39 = (uVar39 << 0x1b | uVar39 >> 0x25) ^ (uVar39 << 0x27 | uVar39 >> 0x19) ^ uVar39;
  uVar23 = uVar23 >> 10 ^ uVar23;
  uVar22 = param_2 | 1;
  uVar23 = uVar23 >> 0x14 ^ uVar23;
  uVar25 = uVar23 * 0x28;
  if ((param_2 + 0xcd54df0d) * 0x659e4565 < (param_2 ^ 0xb4548b53) * -0x78bca2e7) {
    uVar25 = uVar23 >> 0x28;
  }
  uVar25 = uVar25 ^ uVar23;
  uVar30 = 6;
  if (*(uint32_t *)(uVar25 + 0x10c) < 6) {
    uVar30 = *(uint32_t *)(uVar25 + 0x10c);
  }
  iVar17 = 1 << ((uint8_t)uVar30 & 0x1f);
  uVar26 = 1 << (*(uint8_t *)(uVar25 + 0x100) & 0x1f);
  uVar39 = (uVar39 << 0x36 | uVar39 >> 10) ^ (uVar39 << 0xe | uVar39 >> 0x32) ^ uVar39;
  uVar39 = (uVar39 << 0x1c | uVar39 >> 0x24) ^ (uVar39 << 0x2c | uVar39 >> 0x14) ^ uVar39;
  uVar23 = (uVar39 << 0x18 | uVar39 >> 0x28) ^ uVar39;
  uVar39 = uVar39 << 0x38 | uVar39 >> 8;
  uVar30 = *(uint32_t *)(uVar25 + 0x34);
  uVar20 = *(uint32_t *)(uVar25 + 0x1c);
  lVar9 = *(int64_t *)(uVar25 + 8);
  lVar10 = *(int64_t *)(uVar25 + 0x10);
  lVar16 = *(int64_t *)(uVar25 + 0x70);
  puVar36 = (uint64_t *)(uVar39 | uVar23);
  if ((uint64_t)(uVar22 * -0xf72ba8d ^ 0x9ac8e2fe) != 0xffffffffcc224f02) {
    puVar36 = (uint64_t *)(uVar39 ^ uVar23);
  }
  uVar7 = *(uint32_t *)(uVar25 + 0x18);
  uVar23 = (uint64_t)uVar7;
  lVar38 = -lVar9;
  if ((param_2 ^ 0xc20d570b) * 0x204c76cb <= (param_2 + 0xbf9d3107 ^ 0x5f4716d0) * -0x6bf6729b) {
    lVar38 = lVar9;
  }
  uVar39 = lVar38 + (int64_t)in_R10;
  uVar15 = (uint32_t)uVar39;
  uVar29 = uVar15 - uVar26;
  if (uVar15 - uVar20 <= uVar26) {
    uVar29 = uVar20;
  }
  if (*(int *)(uVar25 + 0x28) != 0) {
    uVar29 = uVar20;
  }
  lVar38 = *(int64_t *)(uVar25 + 0x38);
  uVar19 = *(uint64_t *)(uVar25 + 0x60);
  bVar13 = (uint8_t)param_2;
  if (*(int *)(uVar25 + 300) == 0) {
    uVar20 = *(uint32_t *)(uVar25 + 0x2c);
    uVar37 = (uint64_t)uVar20;
    lVar24 = lVar38;
    lVar40 = lVar16;
    if (0x180 < uVar15 - uVar20) {
      if (uVar20 < (uint32_t)(int)(short)(((uint16_t)param_2 | 1) * 0x15a0)) {
        uVar26 = uVar30 | 0x38;
        if (param_2 + 0x5906afde < 0x760c4c6c) {
          uVar26 = 0x38 - uVar30;
        }
        while( true ) {
          uVar11 = uVar22 * -0x5c200000 >> 0x17;
          if ((uint64_t)(0x91ee92b0 - param_2 ^ (uVar22 * -0x40000000 | uVar11)) *
              -0x6d8365319350b6f3 == 0x1d55bac38eac081d) {
            cVar28 = -0x27 - ((char)uVar11 + 'C');
          }
          else {
            cVar28 = (char)(0xf6668b01 - param_2 >> 0xe);
          }
          uVar31 = (uint64_t)((uint32_t)uVar37 & 7);
          uVar11 = *(uint32_t *)(uVar25 + 0x40 + uVar31 * 4);
          *(int *)(uVar25 + 0x40 + uVar31 * 4) =
               (int)((*(int64_t *)(lVar9 + 8 + uVar37) * -0x30e4432340650000 ^
                     *(uint64_t *)(uVar25 + 0x60)) >> (uint64_t)uVar26);
          uVar31 = (uint64_t)(uVar11 >> 2 & 0xffffffc0);
          lVar24 = 0x3f;
          if ((uint8_t)(*(uint8_t *)(lVar38 + uVar31) & 0x3f) != (uint8_t)((bVar13 - cVar28) + 0x50)) {
            lVar24 = 0;
          }
          lVar24 = (uint64_t)(*(uint8_t *)(lVar38 + uVar31) - 1 & 0x3f) + lVar24;
          *(char *)(lVar38 + uVar31) = (char)lVar24;
          *(char *)(lVar38 + uVar31 + lVar24) = (char)uVar11;
          *(uint32_t *)(lVar16 + uVar31 * 4 + lVar24 * 4) = (uint32_t)uVar37;
          if ((uint64_t)(uVar20 + 0x60) - 1 == uVar37) break;
          uVar37 = uVar37 + 1;
        }
        lVar24 = *(int64_t *)(uVar25 + 0x38);
        lVar40 = *(int64_t *)(uVar25 + 0x70);
      }
      uVar20 = uVar15 - 0x20;
      uVar37 = lVar9 + (uint64_t)uVar20;
      uVar26 = ((int)((int64_t)in_R10 + 1U) - (int)uVar37) + 1;
      uVar22 = 8;
      if (uVar26 < 8) {
        uVar22 = uVar26;
      }
      uVar26 = 0;
      if (uVar37 <= (int64_t)in_R10 + 1U) {
        uVar26 = uVar22;
      }
      if (uVar20 < (uVar26 + uVar15) - 0x20) {
        iVar8 = *(int *)(uVar25 + 0x34);
        uVar37 = *(uint64_t *)(uVar25 + 0x60);
        uVar31 = (uint64_t)uVar20;
        do {
          *(int *)(uVar25 + 0x40 + (uint64_t)((uint32_t)uVar31 & 7) * 4) =
               (int)((*(int64_t *)(lVar9 + uVar31) * -0x30e4432340650000 ^ uVar37) >>
                    (uint64_t)(0x38 - iVar8));
          uVar26 = uVar26 - 1;
          uVar31 = uVar31 + 1;
        } while (uVar26 != 0);
      }
    }
    if (uVar20 < uVar15) {
      lVar18 = *(int64_t *)(uVar25 + 8);
      iVar8 = *(int *)(uVar25 + 0x34);
      uVar37 = (uint64_t)uVar20;
      while( true ) {
        uVar31 = (uint64_t)((uint32_t)uVar37 & 7);
        uVar22 = *(uint32_t *)(uVar25 + 0x40 + uVar31 * 4);
        *(int *)(uVar25 + 0x40 + uVar31 * 4) =
             (int)((*(int64_t *)(lVar18 + 8 + uVar37) * -0x30e4432340650000 ^
                   *(uint64_t *)(uVar25 + 0x60)) >> (uint64_t)(0x38 - iVar8));
        uVar31 = (uint64_t)(uVar22 >> 2 & 0xffffffc0);
        lVar35 = 0x3f;
        if ((*(uint8_t *)(lVar24 + uVar31) & 0x3f) != 1) {
          lVar35 = 0;
        }
        lVar35 = lVar35 + (uint64_t)(*(uint8_t *)(lVar24 + uVar31) - 1 & 0x3f);
        *(char *)(lVar24 + uVar31) = (char)lVar35;
        *(char *)(lVar24 + uVar31 + lVar35) = (char)uVar22;
        *(uint32_t *)(lVar40 + uVar31 * 4 + lVar35 * 4) = (uint32_t)uVar37;
        if ((uVar39 & 0xffffffff) - 1 == uVar37) break;
        uVar37 = uVar37 + 1;
      }
    }
    *(uint32_t *)(uVar25 + 0x2c) = uVar15;
    uVar37 = (uint64_t)*(uint32_t *)(uVar25 + 0x40 + (uint64_t)(uVar15 & 7) * 4);
    *(int *)(uVar25 + 0x40 + (uint64_t)(uVar15 & 7) * 4) =
         (int)((*(int64_t *)(lVar9 + 8 + (uVar39 & 0xffffffff)) * -0x30e4432340650000 ^ uVar19) >>
              (uint64_t)(0x38 - uVar30));
  }
  else {
    uVar39 = *in_R10;
    *(uint32_t *)(uVar25 + 0x2c) = uVar15;
    uVar37 = (uVar39 * -0x30e4432340650000 ^ uVar19) >> (0x38U - (char)uVar30 & 0x3f);
  }
  uVar19 = (uint64_t)((uint32_t)(uVar37 >> 2) & 0x3fffffc0);
  uVar14 = (uint8_t)(uVar37 >> 0x10);
  uVar46 = (uint8_t)(uVar37 >> 0x18);
  uVar43 = (uint8_t)(uVar37 >> 8);
  auVar41._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar46,uVar46),uVar14),CONCAT14(uVar14,(int)uVar37)) >> 0x20
            );
  auVar41[3] = uVar43;
  auVar41[2] = uVar43;
  auVar41[0] = (uint8_t)uVar37;
  auVar41[1] = auVar41[0];
  auVar41._8_8_ = 0;
  auVar42 = pshuflw(auVar41,auVar41,0);
  lVar16 = lVar16 + uVar19 * 4;
  *(int *)(uVar25 + 0x68) = *(int *)(uVar25 + 0x68) + (int)uVar37;
  pcVar3 = (char *)(lVar38 + uVar19);
  pcVar4 = (char *)(lVar38 + 0x10 + uVar19);
  pcVar5 = (char *)(lVar38 + 0x20 + uVar19);
  pcVar6 = (char *)(lVar38 + 0x30 + uVar19);
  cVar28 = auVar42[0];
  auVar50[0] = -(*pcVar3 == cVar28);
  cVar44 = auVar42[1];
  auVar50[1] = -(pcVar3[1] == cVar44);
  cVar45 = auVar42[2];
  auVar50[2] = -(pcVar3[2] == cVar45);
  cVar47 = auVar42[3];
  auVar50[3] = -(pcVar3[3] == cVar47);
  auVar50[4] = -(pcVar3[4] == cVar28);
  auVar50[5] = -(pcVar3[5] == cVar44);
  auVar50[6] = -(pcVar3[6] == cVar45);
  auVar50[7] = -(pcVar3[7] == cVar47);
  auVar50[8] = -(pcVar3[8] == cVar28);
  auVar50[9] = -(pcVar3[9] == cVar44);
  auVar50[10] = -(pcVar3[10] == cVar45);
  auVar50[0xb] = -(pcVar3[0xb] == cVar47);
  auVar50[0xc] = -(pcVar3[0xc] == cVar28);
  auVar50[0xd] = -(pcVar3[0xd] == cVar44);
  auVar50[0xe] = -(pcVar3[0xe] == cVar45);
  auVar50[0xf] = -(pcVar3[0xf] == cVar47);
  auVar42[0] = -(*pcVar5 == cVar28);
  auVar42[1] = -(pcVar5[1] == cVar44);
  auVar42[2] = -(pcVar5[2] == cVar45);
  auVar42[3] = -(pcVar5[3] == cVar47);
  auVar42[4] = -(pcVar5[4] == cVar28);
  auVar42[5] = -(pcVar5[5] == cVar44);
  auVar42[6] = -(pcVar5[6] == cVar45);
  auVar42[7] = -(pcVar5[7] == cVar47);
  auVar42[8] = -(pcVar5[8] == cVar28);
  auVar42[9] = -(pcVar5[9] == cVar44);
  auVar42[10] = -(pcVar5[10] == cVar45);
  auVar42[0xb] = -(pcVar5[0xb] == cVar47);
  auVar42[0xc] = -(pcVar5[0xc] == cVar28);
  auVar42[0xd] = -(pcVar5[0xd] == cVar44);
  auVar42[0xe] = -(pcVar5[0xe] == cVar45);
  auVar42[0xf] = -(pcVar5[0xf] == cVar47);
  auVar48[0] = -(*pcVar6 == cVar28);
  auVar48[1] = -(pcVar6[1] == cVar44);
  auVar48[2] = -(pcVar6[2] == cVar45);
  auVar48[3] = -(pcVar6[3] == cVar47);
  auVar48[4] = -(pcVar6[4] == cVar28);
  auVar48[5] = -(pcVar6[5] == cVar44);
  auVar48[6] = -(pcVar6[6] == cVar45);
  auVar48[7] = -(pcVar6[7] == cVar47);
  auVar48[8] = -(pcVar6[8] == cVar28);
  auVar48[9] = -(pcVar6[9] == cVar44);
  auVar48[10] = -(pcVar6[10] == cVar45);
  auVar48[0xb] = -(pcVar6[0xb] == cVar47);
  auVar48[0xc] = -(pcVar6[0xc] == cVar28);
  auVar48[0xd] = -(pcVar6[0xd] == cVar44);
  auVar48[0xe] = -(pcVar6[0xe] == cVar45);
  auVar48[0xf] = -(pcVar6[0xf] == cVar47);
  auVar49[0] = -(*pcVar4 == cVar28);
  auVar49[1] = -(pcVar4[1] == cVar44);
  auVar49[2] = -(pcVar4[2] == cVar45);
  auVar49[3] = -(pcVar4[3] == cVar47);
  auVar49[4] = -(pcVar4[4] == cVar28);
  auVar49[5] = -(pcVar4[5] == cVar44);
  auVar49[6] = -(pcVar4[6] == cVar45);
  auVar49[7] = -(pcVar4[7] == cVar47);
  auVar49[8] = -(pcVar4[8] == cVar28);
  auVar49[9] = -(pcVar4[9] == cVar44);
  auVar49[10] = -(pcVar4[10] == cVar45);
  auVar49[0xb] = -(pcVar4[0xb] == cVar47);
  auVar49[0xc] = -(pcVar4[0xc] == cVar28);
  auVar49[0xd] = -(pcVar4[0xd] == cVar44);
  auVar49[0xe] = -(pcVar4[0xe] == cVar45);
  auVar49[0xf] = -(pcVar4[0xf] == cVar47);
  uVar39 = (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar49 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar49[0xf] >> 7) << 0xf) << 0x10 |
           (uint64_t)
           CONCAT22((uint16_t)(SUB161(auVar48 >> 7,0) & 1) |
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
                    (uint16_t)(auVar48[0xf] >> 7) << 0xf,
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
           (uint16_t)((uint16_t)(SUB161(auVar50 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar50[0xf] >> 7) << 0xf);
  uVar22 = (uint32_t)*(uint8_t *)(lVar38 + uVar19);
  if (uVar39 != 0) {
    bVar12 = *(uint8_t *)(lVar38 + uVar19) & 0x3f;
    uVar39 = uVar39 >> bVar12 | uVar39 << 0x40 - bVar12;
    lVar24 = 0;
    do {
      iVar8 = 0;
      for (uVar37 = uVar39; (uVar37 & 1) == 0; uVar37 = uVar37 >> 1 | 0x8000000000000000) {
        iVar8 = iVar8 + 1;
      }
      uVar30 = iVar8 + uVar22 & 0x3f;
      if (uVar30 != 0) {
        uVar30 = *(uint32_t *)(lVar16 + (uint64_t)uVar30 * 4);
        if (uVar30 < uVar29) goto LAB_7fffa52c4b72;
        iVar17 = iVar17 + -1;
        auStack_148[lVar24] = uVar30;
        lVar24 = lVar24 + 1;
      }
      uVar37 = uVar39 - 1;
      if ((param_2 ^ 0xcac91db9) + 0xbb5acdb6 <
          (((param_2 + 0x52fea5a6) * 0x40 | param_2 + 0x52fea5a6 >> 0x1a) ^ 0x7ffe0240)) {
        uVar37 = 0xffffffffffffffff;
      }
      uVar39 = uVar39 & uVar37;
      uVar34 = (uint16_t)param_2 + 0x7170;
      if ((uVar39 == (uint16_t)(uVar34 * 0x100 | uVar34 >> 8)) || (iVar17 == 0))
      goto LAB_7fffa52c4b72;
    } while( true );
  }
  lVar24 = 0;
LAB_7fffa52c4b72:
  uVar30 = uVar22 ^ 0x3f;
  if (param_2 + 0x6c94aa39 < 0x9d2f0b3c - param_2) {
    uVar30 = uVar22 & 0x3f;
  }
  lVar40 = 0;
  if (uVar30 == 1) {
    lVar40 = 0x3f;
  }
  lVar40 = lVar40 + (uint64_t)(uVar22 - 1 & 0x3f);
  *(uint8_t *)(lVar38 + uVar19) = (char)lVar40;
  ((uint8_t *)(lVar38 + uVar19))[lVar40] = auVar41[0];
  iVar17 = *(int *)(uVar25 + 0x2c);
  *(int *)(uVar25 + 0x2c) = iVar17 + 1;
  *(int *)(lVar16 + lVar40 * 4) = iVar17;
  if (lVar24 != 0) {
    puVar1 = (uint64_t *)((int64_t)param_1 - 7);
    puVar2 = (uint64_t *)((int64_t)in_R10 + 4);
    uVar22 = uVar15 | 3;
    if ((0xa1d49d38U >> (bVar13 & 0x1f) | -0x5e2b62c8 << 0x20 - (bVar13 & 0x1f)) <
        (0x5c3def73U >> (bVar13 & 0x1f) | 0x5c3def73 << 0x20 - (bVar13 & 0x1f))) {
      uVar22 = uVar15 + 3;
    }
    lVar16 = lVar9 + uVar23 + 8;
    uVar25 = 3;
    lVar38 = 0;
    do {
      uVar30 = auStack_148[lVar38];
      uVar39 = (uint64_t)uVar30;
      if (uVar30 < uVar7) {
        if (*(int *)(lVar10 + uVar39) == (int)*in_R10) {
          puVar32 = (uint64_t *)(lVar10 + uVar39 + 4);
          puVar27 = (uint64_t *)
                    (((int64_t)(lVar10 + uVar23) - (int64_t)puVar32) + (int64_t)puVar2);
          if (param_1 <= puVar27) {
            puVar27 = param_1;
          }
          puVar21 = puVar32;
          puVar33 = puVar2;
          if (puVar2 < (uint64_t *)((int64_t)puVar27 - 7U)) {
            if (*puVar32 == *puVar2) {
              lVar40 = lVar10 + 0xc + uVar39;
              lVar18 = 0;
              do {
                puVar33 = (uint64_t *)((int64_t)in_R10 + lVar18 + 0xc);
                if ((uint64_t *)((int64_t)puVar27 - 7U) <= puVar33) {
                  puVar21 = (uint64_t *)(lVar40 + lVar18);
                  goto LAB_7fffa52c4e47;
                }
                uVar39 = *(uint64_t *)(lVar40 + lVar18);
                lVar18 = lVar18 + 8;
              } while (uVar39 == *puVar33);
              uVar20 = 0;
              for (uVar39 = *puVar33 ^ uVar39; (uVar39 & 1) == 0;
                  uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                uVar20 = uVar20 + 1;
              }
              uVar39 = (uint64_t)(uVar20 >> 3) + lVar18;
            }
            else {
              uVar20 = 0;
              for (uVar39 = *puVar2 ^ *puVar32; (uVar39 & 1) == 0;
                  uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                uVar20 = uVar20 + 1;
              }
              uVar39 = (uint64_t)(uVar20 >> 3);
            }
          }
          else {
LAB_7fffa52c4e47:
            if ((puVar33 < (uint64_t *)((int64_t)puVar27 - 3U)) &&
               ((int)*puVar21 == (int)*puVar33)) {
              puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
            }
            if ((~(0x5e91a940 << (bVar13 & 0x1f) | 0x5e91a940U >> 0x20 - (bVar13 & 0x1f)) <
                 (param_2 ^ 0xad56bd73) * 0x3c5e174d !=
                 puVar33 < (uint64_t *)((int64_t)puVar27 - 1U)) &&
               ((short)*puVar21 == (short)*puVar33)) {
              puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
            }
            if (puVar33 < puVar27) {
              puVar33 = (uint64_t *)
                        ((int64_t)puVar33 + (uint64_t)((char)*puVar21 == (char)*puVar33));
            }
            uVar39 = (int64_t)puVar33 - (int64_t)puVar2;
          }
          if ((char *)((int64_t)puVar32 + uVar39) == (char *)(lVar10 + uVar23)) {
            puVar27 = (uint64_t *)(uVar39 + (int64_t)puVar2);
            puVar32 = puVar27;
            puVar33 = (uint64_t *)(lVar9 + uVar23);
            if (puVar27 < puVar1) {
              uVar19 = *(uint64_t *)(lVar9 + uVar23);
              if (uVar19 == *puVar27) {
                lVar40 = 0;
                do {
                  puVar32 = (uint64_t *)((int64_t)in_R10 + lVar40 + uVar39 + 0xc);
                  if (puVar1 <= puVar32) {
                    puVar33 = (uint64_t *)(lVar40 + lVar16);
                    goto LAB_7fffa52c5058;
                  }
                  uVar19 = *(uint64_t *)(lVar16 + lVar40);
                  lVar40 = lVar40 + 8;
                } while (uVar19 == *puVar32);
                uVar20 = 0;
                for (uVar19 = uVar19 ^ *puVar32; (uVar19 & 1) == 0;
                    uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                  uVar20 = uVar20 + 1;
                }
                uVar19 = (uint64_t)(uVar20 >> 3) + lVar40;
              }
              else {
                uVar20 = 0;
                for (uVar19 = *puVar27 ^ uVar19; (uVar19 & 1) == 0;
                    uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                  uVar20 = uVar20 + 1;
                }
                uVar19 = (uint64_t)(uVar20 >> 3);
              }
            }
            else {
LAB_7fffa52c5058:
              if ((puVar32 < (uint64_t *)((int64_t)param_1 - 3U)) &&
                 ((int)*puVar33 == (int)*puVar32)) {
                puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
                puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
              }
              if ((puVar32 < (uint64_t *)((int64_t)param_1 - 1U)) &&
                 ((short)*puVar33 == (short)*puVar32)) {
                puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
                puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
              }
              if (puVar32 < param_1) {
                puVar32 = (uint64_t *)
                          ((int64_t)puVar32 + (uint64_t)((char)*puVar33 == (char)*puVar32));
              }
              uVar19 = (int64_t)puVar32 - (int64_t)puVar27;
            }
            uVar39 = uVar39 + uVar19;
          }
          uVar39 = uVar39 + 4;
          goto joined_r0x7fffa52c4e04;
        }
      }
      else {
        puVar27 = (uint64_t *)(lVar9 + uVar39);
        if (*(int *)((uVar25 - 3) + (int64_t)puVar27) == *(int *)((int64_t)in_R10 + (uVar25 - 3)))
        {
          puVar32 = in_R10;
          if (in_R10 < puVar1) {
            if (*puVar27 == *in_R10) {
              lVar40 = lVar9 + 8 + uVar39;
              lVar18 = 0;
              do {
                puVar32 = (uint64_t *)((int64_t)in_R10 + lVar18 + 8);
                if (puVar1 <= puVar32) {
                  puVar27 = (uint64_t *)(lVar40 + lVar18);
                  goto joined_r0x7fffa52c4f7c;
                }
                uVar39 = *(uint64_t *)(lVar40 + lVar18);
                lVar18 = lVar18 + 8;
              } while (uVar39 == *puVar32);
              uVar20 = 0;
              for (uVar39 = *puVar32 ^ uVar39; (uVar39 & 1) == 0;
                  uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                uVar20 = uVar20 + 1;
              }
              uVar39 = (uint64_t)(uVar20 >> 3) + lVar18;
            }
            else {
              uVar20 = 0;
              for (uVar39 = *in_R10 ^ *puVar27; (uVar39 & 1) == 0;
                  uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                uVar20 = uVar20 + 1;
              }
              uVar39 = (uint64_t)(uVar20 >> 3);
            }
          }
          else {
joined_r0x7fffa52c4f7c:
            if ((puVar32 < (uint64_t *)((int64_t)param_1 - 3U)) &&
               ((int)*puVar27 == (int)*puVar32)) {
              puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            }
            if ((puVar32 < (uint64_t *)((int64_t)param_1 - 1U)) &&
               ((short)*puVar27 == (short)*puVar32)) {
              puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
              puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
            }
            if (puVar32 < param_1) {
              uVar19 = (uint64_t)((char)*puVar27 == (char)*puVar32);
              uVar39 = -uVar19;
              if (param_2 + 0x51496fcd <= (param_2 ^ 0xb666cfad)) {
                uVar39 = uVar19;
              }
              puVar32 = (uint64_t *)((int64_t)puVar32 + uVar39);
            }
            uVar39 = (int64_t)puVar32 - (int64_t)in_R10;
          }
joined_r0x7fffa52c4e04:
          if (uVar25 < uVar39) {
            *puVar36 = (uint64_t)(uVar22 - uVar30);
            uVar25 = uVar39;
            if ((uint64_t *)((int64_t)in_R10 + uVar39) == param_1) {
              return;
            }
          }
        }
      }
      lVar38 = lVar38 + 1;
    } while (lVar38 != lVar24);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52c5160  |  RVA: 0xb55160  |  Size: 2507 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa52c5b26) overlaps instruction at (ram,0x7fffa52c5b25)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa52c5b25) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c5b1d) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c598e) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c5b15) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c594a) */

void FUN_7fffa52c5160(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  
  uRam00007fffa47bb4c8 = 0;
  uVar1 = ~uRam00007fffa4781400 << 0xb;
  uVar3 = ~uRam00007fffa4781400 ^ uVar1;
  uVar5 = ((uVar3 << 0x16 ^ uVar3 << 0x2c ^ uVar3) + 0x43b5118645a63ca ^ uRam00007fffa4780f98) +
          lRam00007fffa4780d50;
  uVar3 = (uRam00007fffa4780ce0 ^ 0x357a46068f4c5219) + 0xaf0aef0965afb6;
  uVar3 = (uVar3 << 0x38 | uVar3 >> 8) ^ (uVar3 * 0x400 | uVar3 >> 0x36) ^
          (uVar3 << 0x2d | uVar3 >> 0x13);
  uVar3 = (uVar3 << 0x16 | uVar3 >> 0x2a) ^ (uVar3 << 0x3a | uVar3 >> 6) ^ uVar3;
  uVar3 = (uVar3 << 0x34 | uVar3 >> 0xc) ^ (uVar3 << 0x2c | uVar3 >> 0x14) ^ uVar3;
  uVar3 = (uVar3 << 0x28 | uVar3 >> 0x18) ^ (uVar3 << 0x18 | uVar3 >> 0x28) ^ uVar3;
  uVar3 = ((uVar3 << 0x10 | uVar3 >> 0x30) ^ (uVar3 << 0x30 | uVar3 >> 0x10) ^ uVar3) +
          0x726b6c8dc1e6ed35;
  uVar3 = (uVar3 * 0x80 | uVar3 >> 0x39) ^ (uVar3 * 0x200000 | uVar3 >> 0x2b) ^ uVar3;
  uVar3 = (uVar3 << 0x2a | uVar3 >> 0x16) ^ (uVar3 << 0xe | uVar3 >> 0x32) ^ uVar3;
  uVar3 = (uVar3 << 0x14 | uVar3 >> 0x2c) ^ (uVar3 << 0x1c | uVar3 >> 0x24) ^ uVar3;
  uVar3 = (uVar3 << 0x38 | uVar3 >> 8) ^ (uVar3 << 0x28 | uVar3 >> 0x18) ^ uVar3;
  uRam00007fffa47bb4e0 = 0xe1bb23a1b44cb94f;
  uRam00007fffa47bb4f8 = 0x7b210a0d31410879;
  uVar7 = (uRam00007fffa4781308 << 0xb | uRam00007fffa4781308 >> 0x35) ^
          (uRam00007fffa4781308 << 0x1d | uRam00007fffa4781308 >> 0x23) ^ uRam00007fffa4781308;
  uVar8 = (uVar7 << 0x3a | uVar7 >> 6) ^ (uVar7 << 0x16 | uVar7 >> 0x2a);
  uVar2 = ~uVar1;
  uVar4 = ~uVar7 & uVar8;
  uVar6 = ~uVar8 & uVar7;
  uRam00007fffa47bb4f0 = 0xb1a8ab021765006b;
  uVar1 = (uVar4 & uVar2) * -0x838ac825 +
          (uVar6 & uVar1) * -0x113994a3 + (uVar2 ^ uVar4) * -0x94c45cca +
          ((~uVar7 | uVar8) & uVar2) * 0x838ac826 + ((uVar7 ^ uVar8) & uVar2) * 0x838ac827 +
          ((uVar6 ^ uVar1) - (uVar7 ^ uVar1 ^ uVar8)) * 0x94c45ccb + (uVar2 | uVar6) * 0x113994a4;
  uRam00007fffa47bb500 = 0xa8dd39a9240fea71;
  uVar1 = (uVar1 << 0x34 | uVar1 >> 0xc) ^ (uVar1 << 0x2c | uVar1 >> 0x14) ^ uVar1;
  uVar1 = (uVar1 << 0x18 | uVar1 >> 0x28) ^ (uVar1 << 0x28 | uVar1 >> 0x18) ^ uVar1;
  lRam00007fffa47bb4e8 =
       ((uVar1 << 0x10 | uVar1 >> 0x30) ^ (uVar1 << 0x30 | uVar1 >> 0x10) ^ uVar1) +
       0x56f232bba44e592b;
  uRam00007fffa47bb4d0 = uVar5 * 8 | uVar5 >> 0x3d;
  uRam00007fffa47bb4d8 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ (uVar3 << 0x30 | uVar3 >> 0x10) ^ uVar3;
  return;
}


// ============================================================================
// Function : FUN_7fffa52c5b40  |  RVA: 0xb55b40  |  Size: 396 bytes
// Callers  : FUN_7fffa560a390@0xe9a390
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa52c5bad) */

void FUN_7fffa52c5b40(int64_t *param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  code *pcVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint16_t unaff_DI;
  uint16_t uVar6;
  
  uVar6 = ~unaff_DI;
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    lVar2 = *param_1;
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (uint64_t)((lVar2 + -8) - lVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = uVar1 + 0x28;
    }
    uVar6 = (uVar6 & 0x240) * 0x7050 + (unaff_DI & 0x240) * 0x2aa5 +
            (unaff_DI ^ 0x240) * -0x6dc0 + (unaff_DI | 0x240) * -0x7455 + (uVar6 | 0xfdbf) * -0x679b
            + (uVar6 & 0x240) * -0x7050 + (uVar6 & 0xfdbf) * 0x1deb | 1;
    (*(code *)((int64_t)(short)(uVar6 * 0x47c8 | (uint16_t)(uVar6 * -0x3707) >> 0xd) + 0x7fffa50886b1
              ))(lVar4,uVar5);
  }
  param_1[3] = 0xf;
  *(uint8_t *)param_1 = 0;
  param_1[2] = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa52c5cd0  |  RVA: 0xb55cd0  |  Size: 107 bytes
// Callers  : none
// Callees  : FUN_7fffa4f54478@0x7e4478
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa52c5d17) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c5d2b) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c5d36) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa52c5cd0(void)

{
  return 0xe;
}


// ============================================================================
// Function : FUN_7fffa52c5d1c  |  RVA: 0xb55d1c  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52c5d1c(uint64_t param_1,int64_t param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    FUN_7fffa4f54478(3);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52c5d40  |  RVA: 0xb55d40  |  Size: 313 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa52c5e16) overlaps instruction at (ram,0x7fffa52c5e10)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa52c5e6a) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c5e6c) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c5e16) */

uint64_t FUN_7fffa52c5d40(void)

{
  uint64_t in_RAX;
  uint64_t uVar1;
  uint32_t in_R9D;
  uint64_t uVar2;
  uint32_t *puVar3;
  uint64_t *puVar4;
  uint32_t uVar5;
  uint64_t uStack_8;
  
  uVar1 = in_RAX << 0x3d | in_RAX >> 3;
  uVar2 = uVar1 - ((in_RAX >> 3) << 0x26);
  if (((0x33cee586 - in_R9D) * 0x2000 | 0x33cee586 - in_R9D >> 0x13) <
      (in_R9D | 1) * 0x6afc2aaa + 0x520c57d1) {
    uVar2 = uVar1 + 0x3fffffffff;
  }
  uVar2 = (uVar2 << 7 | uVar2 >> 0x39) ^ (uVar2 << 0x3b | uVar2 >> 5) ^ uVar2;
  uVar2 = (uVar2 << 0xe | uVar2 >> 0x32) ^ (uVar2 << 0x36 | uVar2 >> 10) ^ uVar2;
  uVar2 = (uVar2 << 0x2c | uVar2 >> 0x14) ^ (uVar2 << 0x1c | uVar2 >> 0x24) ^ uVar2;
  puVar4 = (uint64_t *)((uVar2 << 0x18 | uVar2 >> 0x28) ^ (uVar2 << 0x38 | uVar2 >> 8) ^ uVar2);
  uStack_8 = CONCAT44(0xfbfffb7f,(int)in_RAX);
  while( true ) {
    puVar3 = (uint32_t *)*puVar4;
    uVar5 = *puVar3;
    if ((*(uint64_t *)puVar4[1] <= (uint64_t)uVar5) || (*(uint32_t *)puVar4[3] <= *(uint32_t *)puVar4[2]))
    break;
    if (*(char *)(*(int64_t *)puVar4[4] + (uint64_t)uVar5) != '\0') {
      *(int64_t *)puVar4[5] = *(int64_t *)puVar4[5] + 1;
      puVar3 = (uint32_t *)*puVar4;
      uVar5 = *puVar3;
    }
    *puVar3 = uVar5 + 1;
    *(int *)puVar4[2] = *(int *)puVar4[2] + 1;
  }
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa52c5e80  |  RVA: 0xb55e80  |  Size: 1497 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa52c6458) overlaps instruction at (ram,0x7fffa52c6455)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa52c6445) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c63db) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c5f90) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c6455) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c6477) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c6484) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c64a1) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c64ed) */
/* WARNING: Removing unreachable block (ram,0x7fffa52c6447) */

uint64_t FUN_7fffa52c5e80(void)

{
  uint16_t uVar1;
  uint64_t in_RAX;
  int64_t lVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint8_t *puVar6;
  uint64_t unaff_RSI;
  uint64_t uVar7;
  uint32_t uVar8;
  uint64_t uVar9;
  
  uVar9 = ~unaff_RSI;
  uVar5 = (unaff_RSI & in_RAX) * -0x4b56dca6 +
          (in_RAX ^ unaff_RSI) * -0x744c65fb +
          (uVar9 & in_RAX) * 0x1dfb7b21 + (uVar9 | in_RAX) * -0x28f58955 +
          (~in_RAX & uVar9) * -0x4b56dca6 + (uVar9 & in_RAX) * 0xafa0e34;
  bVar3 = (uint8_t)uVar5;
  lVar2 = (int64_t)(short)((0xe3ffU >> (bVar3 & 0xf) | -0x1c01 << 0x10 - (bVar3 & 0xf)) * 0x2381);
  *(uint64_t *)(lVar2 + 0x7fffa47859ac) = 0;
  *(uint64_t *)(lVar2 + 0x7fffa47859b4) = 0;
  *(uint64_t *)(lVar2 + 0x7fffa478599c) = 0;
  *(uint64_t *)(lVar2 + 0x7fffa47859a4) = 0;
  *(uint64_t *)(lVar2 + 0x7fffa478598c) = 0;
  *(uint64_t *)(lVar2 + 0x7fffa4785994) = 0;
  *(uint64_t *)(lVar2 + 0x7fffa47859bc) = 0;
  *(uint64_t *)
   ((int64_t)(int)(0xf7fff845U >> (bVar3 & 0x1f) | -0x80007bb << 0x20 - (bVar3 & 0x1f)) +
   0x7fffa47942c2) =
       0x6d3e33be021bf9adU >> (bVar3 & 0x3f) | 0x6d3e33be021bf9ad << 0x40 - (bVar3 & 0x3f);
  uVar9 = uRam00007fffa4780f48 ^ 0xb39bcbedb04aa11b;
  uVar9 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
          (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
          (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f) << 4 | uVar9 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333) * 4;
  uVar7 = (uVar5 ^ 0x7cca5729412bd13) + 0xc000008c;
  uVar4 = (uint32_t)uVar5;
  if ((uVar7 * 0x200000 | uVar7 >> 0x2b) == 0x133874906f600811) {
    uVar9 = 0x133874906f600811;
  }
  else {
    in_RAX = 0x7fffa47873e5;
    lVar2 = *(int64_t *)
             ((int64_t)(short)(0x4486U >> (bVar3 & 0xf) | 0x4486 << 0x10 - (bVar3 & 0xf)) +
             0x7fffa4787c58);
    *(uint64_t *)((int64_t)(int)(uVar4 + 0xfde46429 ^ 0x8dcfb4ae) + 0x7fffa478cd06) =
         -0x4a2bce3c168e5bd << (bVar3 & 0x3f) | 0xfb5d431c3e971a43U >> 0x40 - (bVar3 & 0x3f);
    *(uint64_t *)
     ((int64_t)(int)((0x744c0f0f - uVar4) * 2 | (uint32_t)((int)(0x744c0f0f - uVar4) < 0)) +
     0x7fffa478f95f) = (uVar9 >> 1 & 0x5555555555555555) + (uVar9 & 0x5555555555555555) * 2 + lVar2;
    uVar9 = uRam00007fffa47813c8 ^ 0xafd3bf768d8bd5af;
  }
  uVar8 = uVar4 | 1;
  uVar1 = (uint16_t)uVar5;
  puVar6 = (uint8_t *)(uVar9 | 0x7fffa578aa38);
  if ((uint64_t)(0xf297c044 - uVar4) <
      (uint64_t)(int64_t)(int)((uVar8 * -0x395df400 | uVar8 * 0x4df1a883 >> 0x16) + 0x90c8adcb)) {
    puVar6 = &UNK_7fffa578b5ed + (int64_t)(short)((uVar1 - 0x851) * -0x562d + -0x78d3) + uVar9;
  }
  *(uint8_t **)((int64_t)(short)(0x11aa - uVar1) + 0x7fffa4789fe9) =
       puVar6 + *(int64_t *)(in_RAX - 0x63ed);
  uVar9 = uRam00007fffa4780f58 ^ 0xfdc49f7965d677d7;
  uVar7 = (uVar5 | 1) * 0x25bfa4bddfd48334;
  *(uint64_t *)((int64_t)(int)(uVar8 * 0x22cd0000 | uVar8 * -0x3556e998 >> 0x13) + 0x7fffa4794599)
       = (uVar7 << 0x32 | uVar7 >> 0xe) - 0xac925133;
  uVar9 = uVar9 * 0x149e4cf37478b7bb + 0x595dffd086ed4e7;
  uVar9 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
          (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
          (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f) << 4 | uVar9 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333) * 4;
  *(uint64_t *)((int64_t)(short)((uVar1 | 1) * -0x6ce + -0x1d9a) + 0x7fffa4785b34) =
       (uVar9 >> 1 & 0x5555555555555555) + (uVar9 & 0x5555555555555555) * 2;
  *(uint64_t *)((int64_t)(short)(0x630b - uVar1) + 0x7fffa4784ea0) = uVar5 + 0xf88be0f821749cbb;
                    /* WARNING: Could not recover jumptable at 0x7fffa52c63e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (uint64_t)
          (&UNK_7fffa586c4a8 +
          ~(uint64_t)
           (&UNK_7fffa5866461 +
           *(int64_t *)((int64_t)(short)((uVar1 | 1) * -0x57e5 + 0x57f2) + 0x7fffa4783e0d) +
           (int64_t)(int)(0xfffffbe2U >> (bVar3 & 0x1f) | -0x41e << 0x20 - (bVar3 & 0x1f))) +
          (int64_t)(int)((0xb44c4041 - uVar4) * 4 | 0xb44c4041 - uVar4 >> 0x1e)) ^
          0x9cd1c61222ab235;
  *(uint64_t *)
   ((int64_t)(short)(-0x20e9 << (bVar3 & 0xf) | 0xdf17U >> 0x10 - (bVar3 & 0xf)) + 0x7fffa4788cc0)
       = (uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18 |
          (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 |
          (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38) ^ uRam00007fffa4781430;
  return 0x7fffa4785838;
}


// ============================================================================
// Function : FUN_7fffa52c6500  |  RVA: 0xb56500  |  Size: 5409 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52c6500(void) {
    /* +0xb56500 */ __asm { PUSH RBX }
    /* +0xb56501 */ __asm { PUSH RSI }
    /* +0xb56502 */ __asm { PUSH R14 }
    /* +0xb56504 */ __asm { PUSH RDI }
    /* +0xb56505 */ __asm { PUSH R15 }
    /* +0xb56507 */ __asm { PUSH R13 }
    /* +0xb56509 */ __asm { PUSH RBP }
    /* +0xb5650a */ __asm { PUSH R12 }
    /* +0xb5650c */ __asm { SUB RSP,0x218 }
    /* +0xb56513 */ __asm { MOV RSI,RCX }
    /* +0xb56516 */ __asm { NOT R11 }
    /* +0xb56519 */ __asm { MOV RDI,RDX }
    /* +0xb5651c */ __asm { SHL RDI,0x3c }
    /* +0xb56520 */ __asm { MOV ECX,0x9d082a61 }
    /* +0xb56525 */ __asm { MOV qword ptr [RSP + 0x1b0],R8 }
    /* +0xb5652d */ __asm { MOV R15D,R8D }
    /* +0xb56530 */ __asm { OR R15D,0x1 }
    /* +0xb56534 */ __asm { IMUL ECX,R15D }
    /* +0xb56538 */ __asm { MOV RBX,0x7b291cbc690a71ef }
    /* +0xb56542 */ __asm { IMUL RBX,R11 }
    /* +0xb56546 */ __asm { ROL ECX,0x1d }
    /* +0xb56549 */ __asm { XOR RDI,RDX }
    /* +0xb5654c */ __asm { SUB RDI,RCX }
    /* +0xb5654f */ __asm { SUB RDI,RSI }
    /* +0xb56552 */ __asm { JZ 0x7fffa52c6656 }
    /* +0xb56558 */ __asm { MOV R11,qword ptr [RBX] }
    /* +0xb5655b */ __asm { CMP qword ptr [R11],0x0 }
    /* +0xb5655f */ __asm { MOV qword ptr [RSP + 0x48],RSI }
    /* +0xb56564 */ __asm { MOV qword ptr [RSP + 0x1a8],RDI }
    /* +0xb5656c */ __asm { MOV qword ptr [RSP + 0x68],R15 }
    /* +0xb56571 */ __asm { JZ 0x7fffa52c666a }
    /* +0xb56577 */ __asm { LEA RCX,[0x7fffa47c8f7e] }
    /* +0xb5657e */ __asm { MOV R9W,0xd301 }
    /* +0xb56583 */ __asm { LEA R11,[0x7fffa47bdf79] }
    /* +0xb5658a */ __asm { MOV R8D,0x7bfaadcc }
    /* +0xb56590 */ __asm { IMUL R8D,R8D,0x2fdb7561 }
    /* +0xb56597 */ __asm { MOV EAX,0xeb7389cd }
    /* +0xb5659c */ __asm { IMUL EAX,R15D }
    /* +0xb565a0 */ __asm { NOT EAX }
    /* +0xb565a2 */ __asm { MOVSXD RDX,EAX }
    /* +0xb565a5 */ __asm { LEA RAX,[0x7fffa47c7b9a] }
    /* +0xb565ac */ __asm { MOVZX EDX,uint8_t ptr [RCX + RDX*0x1 + 0x2] }
    /* +0xb565b1 */ __asm { ADD R8D,0x1111e84b }
    /* +0xb565b8 */ __asm { MOV RCX,qword ptr [RSP + 0x1b0] }
    /* +0xb565c0 */ __asm { ROR R8D,CL }
    /* +0xb565c3 */ __asm { MOVSXD R10,R8D }
    /* +0xb565c6 */ __asm { ADD R10,RAX }
    /* +0xb565c9 */ __asm { MOVQ XMM2,qword ptr [R10 + RDX*0x8 + 0x10] }
    /* +0xb565d0 */ __asm { MOVDQA XMM5,XMM2 }
    /* +0xb565d4 */ __asm { PSRLW XMM5,0x6 }
    /* +0xb565d9 */ __asm { PAND XMM5,xmmword ptr [0x7fffa56b8400] }
    /* +0xb565e1 */ __asm { MOV EBP,ECX }
    /* +0xb565e3 */ __asm { PSLLW XMM2,0x2 }
    /* +0xb565e8 */ __asm { PAND XMM2,xmmword ptr [0x7fffa56b8410] }
    /* +0xb565f0 */ __asm { OR EBP,0x1 }
    /* +0xb565f3 */ __asm { POR XMM2,XMM5 }
    /* +0xb565f7 */ __asm { IMUL R9D,EBP }
    /* +0xb565fb */ __asm { MOV EAX,0x2218 }
    /* +0xb56600 */ __asm { SUB EAX,R9D }
    /* +0xb56603 */ __asm { MOVSX RDX,AX }
    /* +0xb56607 */ __asm { MOVQ XMM5,qword ptr [R11 + RDX*0x1 + 0x28] }
    /* +0xb5660e */ __asm { PXOR XMM5,XMM2 }
    /* +0xb56612 */ __asm { MOVQ qword ptr [RSP + 0x90],XMM5 }
    /* +0xb5661b */ __asm { MOV R11,qword ptr [RSP + 0x90] }
    /* +0xb56623 */ __asm { TEST R11,R11 }
    /* +0xb56626 */ __asm { JZ 0x7fffa52c6a4c }
    /* +0xb5662c */ __asm { MOV RAX,qword ptr [RBX] }
    /* +0xb5662f */ __asm { MOV R9W,0x9f19 }
    /* +0xb56634 */ __asm { XOR R9D,ECX }
    /* +0xb56637 */ __asm { IMUL R9D,R9D,-0x799b }
    /* +0xb5663e */ __asm { MOVZX R9D,R9W }
    /* +0xb56642 */ __asm { MOV RCX,qword ptr [RAX] }
    /* +0xb56645 */ __asm { MOV R8D,EDI }
    /* +0xb56648 */ __asm { MOV RDX,RSI }
    /* +0xb5664b */ __asm { CALL R11 }
    /* +0xb5664e */ __asm { TEST EAX,EAX }
    /* +0xb56650 */ __asm { JS 0x7fffa52c6c48 }
    /* +0xb56656 */ __asm { ADD RSP,0x218 }
    /* +0xb5665d */ __asm { POP R12 }
    /* +0xb5665f */ __asm { POP RBP }
    /* +0xb56660 */ __asm { POP R13 }
    /* +0xb56662 */ __asm { POP R15 }
    /* +0xb56664 */ __asm { POP RDI }
    /* +0xb56665 */ __asm { POP R14 }
    /* +0xb56667 */ __asm { POP RSI }
    /* +0xb56668 */ __asm { POP RBX }
    /* +0xb56669 */ __asm { RET }
    /* +0xb5666a */ __asm { MOV R9D,0x88d1ae6c }
    /* +0xb56670 */ __asm { MOV RCX,qword ptr [RBX + 0x8] }
    /* +0xb56674 */ __asm { MOV R8D,dword ptr [RCX + 0x40] }
    /* +0xb56678 */ __asm { XOR EAX,EAX }
    /* +0xb5667a */ __asm { PXOR XMM2,XMM2 }
    /* +0xb5667e */ __asm { JMP 0x7fffa52c6724 }
    /* +0xb56690 */ __asm { MOV R9D,dword ptr [RSP + 0x50] }
    /* +0xb56695 */ __asm { ADD R9D,R10D }
    /* +0xb56698 */ __asm { ADD EBP,dword ptr [RSP + 0x38] }
    /* +0xb5669c */ __asm { ADD EDX,dword ptr [RSP + 0x84] }
    /* +0xb566a3 */ __asm { MOV R8D,dword ptr [RSP + 0x58] }
    /* +0xb566a8 */ __asm { ADD R8D,EAX }
    /* +0xb566ab */ __asm { ADD R11D,dword ptr [RSP + 0x1f8] }
    /* +0xb566b3 */ __asm { ADD EDI,dword ptr [RSP + 0x198] }
    /* +0xb566ba */ __asm { MOV dword ptr [RCX + 0x50],R8D }
    /* +0xb566be */ __asm { MOV dword ptr [RCX + 0x60],EBP }
    /* +0xb566c1 */ __asm { MOV R8D,dword ptr [RSP + 0x70] }
    /* +0xb566c6 */ __asm { ADD R8D,R15D }
    /* +0xb566c9 */ __asm { MOV dword ptr [RCX + 0x68],R11D }
    /* +0xb566cd */ __asm { ADD R12D,dword ptr [RSP + 0x1c0] }
    /* +0xb566d5 */ __asm { MOV dword ptr [RCX + 0x54],R12D }
    /* +0xb566d9 */ __asm { MOV dword ptr [RCX + 0x5c],R8D }
    /* +0xb566dd */ __asm { MOV dword ptr [RCX + 0x64],R9D }
    /* +0xb566e1 */ __asm { MOV dword ptr [RCX + 0x6c],EDI }
    /* +0xb566e4 */ __asm { MOV dword ptr [RCX + 0x58],EDX }
    /* +0xb566e7 */ __asm { MOV dword ptr [RCX + 0x40],0x0 }
    /* +0xb566ee */ __asm { ADD qword ptr [RCX + 0x48],0x200 }
    /* +0xb566f6 */ __asm { XOR R8D,R8D }
    /* +0xb566f9 */ __asm { MOV RSI,qword ptr [RSP + 0x48] }
    /* +0xb566fe */ __asm { MOV RDI,qword ptr [RSP + 0x1a8] }
    /* +0xb56706 */ __asm { MOV R15,qword ptr [RSP + 0x68] }
    /* +0xb5670b */ __asm { MOV R9D,0x88d1ae6c }
    /* +0xb56711 */ __asm { MOV RAX,qword ptr [RSP + 0x1a0] }
    /* +0xb56719 */ __asm { INC EAX }
    /* +0xb5671b */ __asm { CMP RDI,RAX }
    /* +0xb5671e */ __asm { JBE 0x7fffa52c6656 }
    /* +0xb56724 */ __asm { MOVZX R10D,uint8_t ptr [RSI + RAX*0x1] }
    /* +0xb56729 */ __asm { MOV EDX,R8D }
    /* +0xb5672c */ __asm { MOV uint8_t ptr [RCX + RDX*0x1],R10B }
    /* +0xb56730 */ __asm { MOV R8D,dword ptr [RCX + 0x40] }
    /* +0xb56734 */ __asm { INC R8D }
    /* +0xb56737 */ __asm { MOV dword ptr [RCX + 0x40],R8D }
    /* +0xb5673b */ __asm { CMP R8D,0x40 }
    /* +0xb5673f */ __asm { JNZ 0x7fffa52c6719 }
    /* +0xb56741 */ __asm { MOV qword ptr [RSP + 0x1a0],RAX }
    /* +0xb56749 */ __asm { XOR R8D,R8D }
    /* +0xb5674c */ __asm { NOP dword ptr [RAX] }
    /* +0xb56750 */ __asm { MOV R11D,0xd7e35e27 }
    /* +0xb56756 */ __asm { IMUL R11D,R15D }
    /* +0xb5675a */ __asm { ROL R11D,0x2 }
    /* +0xb5675e */ __asm { NOT R11D }
    /* +0xb56761 */ __asm { IMUL R10,R8,0x34 }
    /* +0xb56765 */ __asm { CMP R11,R9 }
    /* +0xb56768 */ __asm { LEA RAX,[0xd + R8*0x4] }
    /* +0xb56770 */ __asm { CMOVZ RAX,R10 }
    /* +0xb56774 */ __asm { MOVZX R11D,uint8_t ptr [RCX + R8*0x4 + 0x6] }
    /* +0xb5677a */ __asm { MOVZX R10D,uint8_t ptr [RCX + R8*0x4 + 0x3] }
    /* +0xb56780 */ __asm { MOVZX EDX,uint8_t ptr [RCX + R8*0x4 + 0xa] }
    /* +0xb56786 */ __asm { MOVZX R14D,uint8_t ptr [RCX + R8*0x4 + 0x2] }
    /* +0xb5678c */ __asm { SHL R11D,0x8 }
    /* +0xb56790 */ __asm { OR R11D,R14D }
    /* +0xb56793 */ __asm { SHL EDX,0x10 }
    /* +0xb56796 */ __asm { OR EDX,R11D }
    /* +0xb56799 */ __asm { MOVZX R11D,uint8_t ptr [RCX + R8*0x4 + 0xe] }
    /* +0xb5679f */ __asm { SHL R11D,0x18 }
    /* +0xb567a3 */ __asm { OR R11D,EDX }
    /* +0xb567a6 */ __asm { MOVZX EDX,uint8_t ptr [RCX + R8*0x4 + 0x5] }
    /* +0xb567ac */ __asm { MOVZX R14D,uint8_t ptr [RCX + R8*0x4 + 0x1] }
    /* +0xb567b2 */ __asm { MOVZX R12D,uint8_t ptr [RCX + R8*0x4 + 0x9] }
    /* +0xb567b8 */ __asm { MOVZX EDI,uint8_t ptr [RCX + R8*0x4 + 0xb] }
    /* +0xb567be */ __asm { MOVZX EBX,uint8_t ptr [RCX + R8*0x4 + 0x7] }
    /* +0xb567c4 */ __asm { SHL EBX,0x8 }
    /* +0xb567c7 */ __asm { OR EBX,R10D }
    /* +0xb567ca */ __asm { SHL EDI,0x10 }
    /* +0xb567cd */ __asm { OR EDI,EBX }
    /* +0xb567cf */ __asm { MOVZX R10D,uint8_t ptr [RCX + R8*0x4 + 0xf] }
    /* +0xb567d5 */ __asm { SHL R10D,0x18 }
    /* +0xb567d9 */ __asm { OR R10D,EDI }
    /* +0xb567dc */ __asm { SHL EDX,0x8 }
    /* +0xb567df */ __asm { OR EDX,R14D }
    /* +0xb567e2 */ __asm { SHL R12D,0x10 }
    /* +0xb567e6 */ __asm { OR R12D,EDX }
    /* +0xb567e9 */ __asm { MOVZX EAX,uint8_t ptr [RCX + RAX*0x1] }
    /* +0xb567ed */ __asm { SHL EAX,0x18 }
    /* +0xb567f0 */ __asm { OR EAX,R12D }
    /* +0xb567f3 */ __asm { MOVD XMM5,R11D }
    /* +0xb567f8 */ __asm { PUNPCKLBW XMM5,XMM2 }
    /* +0xb567fc */ __asm { PUNPCKLWD XMM5,XMM2 }
    /* +0xb56800 */ __asm { PSLLD XMM5,0x8 }
    /* +0xb56805 */ __asm { MOVD XMM3,R10D }
    /* +0xb5680a */ __asm { MOVD XMM1,EAX }
    /* +0xb5680e */ __asm { PUNPCKLBW XMM1,XMM2 }
    /* +0xb56812 */ __asm { PXOR XMM0,XMM0 }
    /* +0xb56816 */ __asm { PUNPCKLWD XMM0,XMM1 }
    /* +0xb5681a */ __asm { MOVZX EAX,uint8_t ptr [RCX + R8*0x4 + 0x4] }
    /* +0xb56820 */ __asm { MOVZX R11D,uint8_t ptr [RCX + R8*0x4] }
    /* +0xb56825 */ __asm { MOVD XMM1,R11D }
    /* +0xb5682a */ __asm { PINSRW XMM1,EAX,0x2 }
    /* +0xb5682f */ __asm { PUNPCKLBW XMM3,XMM2 }
    /* +0xb56833 */ __asm { MOVZX EAX,uint8_t ptr [RCX + R8*0x4 + 0x8] }
    /* +0xb56839 */ __asm { PINSRW XMM1,EAX,0x4 }
    /* +0xb5683e */ __asm { PUNPCKLWD XMM3,XMM2 }
    /* +0xb56842 */ __asm { MOVZX EAX,uint8_t ptr [RCX + R8*0x4 + 0xc] }
    /* +0xb56848 */ __asm { PINSRW XMM1,EAX,0x6 }
    /* +0xb5684d */ __asm { PSLLD XMM1,0x18 }
    /* +0xb56852 */ __asm { POR XMM1,XMM5 }
    /* +0xb56856 */ __asm { POR XMM1,XMM3 }
    /* +0xb5685a */ __asm { POR XMM1,XMM0 }
    /* +0xb5685e */ __asm { MOVDQA xmmword ptr [RSP + R8*0x4 + 0x90],XMM1 }
    /* +0xb56868 */ __asm { LEA R11,[R8 + 0x4] }
    /* +0xb5686c */ __asm { MOV R8,R11 }
    /* +0xb5686f */ __asm { CMP R11,0x10 }
    /* +0xb56873 */ __asm { JNZ 0x7fffa52c6750 }
    /* +0xb56879 */ __asm { MOV EAX,0x10 }
    /* +0xb5687e */ __asm { MOV R8D,dword ptr [RSP + 0x90] }
    /* +0xb56886 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0xb56890 */ __asm { MOV R10D,R8D }
    /* +0xb56893 */ __asm { MOV R8D,dword ptr [RSP + RAX*0x4 + 0x54] }
    /* +0xb56898 */ __asm { MOV R11D,dword ptr [RSP + RAX*0x4 + 0x88] }
    /* +0xb568a0 */ __asm { MOV EDX,R8D }
    /* +0xb568a3 */ __asm { ROL EDX,0xe }
    /* +0xb568a6 */ __asm { ADD R10D,dword ptr [RSP + RAX*0x4 + 0x74] }
    /* +0xb568ab */ __asm { MOV R14D,R11D }
    /* +0xb568ae */ __asm { ROL R14D,0xd }
    /* +0xb568b2 */ __asm { MOV R12D,R11D }
    /* +0xb568b5 */ __asm { ROL R12D,0xf }
    /* +0xb568b9 */ __asm { XOR R12D,R14D }
    /* +0xb568bc */ __asm { MOV R14D,R8D }
    /* +0xb568bf */ __asm { ROL R14D,0x19 }
    /* +0xb568c3 */ __asm { SHR R11D,0xa }
    /* +0xb568c7 */ __asm { XOR R11D,R12D }
    /* +0xb568ca */ __asm { ADD R11D,R10D }
    /* +0xb568cd */ __asm { XOR R14D,EDX }
    /* +0xb568d0 */ __asm { MOV R10D,R8D }
    /* +0xb568d3 */ __asm { SHR R10D,0x3 }
    /* +0xb568d7 */ __asm { XOR R10D,R14D }
    /* +0xb568da */ __asm { ADD R11D,R10D }
    /* +0xb568dd */ __asm { MOV dword ptr [RSP + RAX*0x4 + 0x90],R11D }
    /* +0xb568e5 */ __asm { CMP RAX,0x3f }
    /* +0xb568e9 */ __asm { JZ 0x7fffa52c68f0 }
    /* +0xb568eb */ __asm { INC RAX }
    /* +0xb568ee */ __asm { JMP 0x7fffa52c6890 }
    /* +0xb568f0 */ __asm { MOV EDX,dword ptr [RCX + 0x58] }
    /* +0xb568f3 */ __asm { MOV R14D,dword ptr [RCX + 0x6c] }
    /* +0xb568f7 */ __asm { MOV EAX,dword ptr [RCX + 0x50] }
    /* +0xb568fa */ __asm { MOV R12D,dword ptr [RCX + 0x54] }
    /* +0xb568fe */ __asm { MOV R8D,dword ptr [RCX + 0x68] }
    /* +0xb56902 */ __asm { MOV R13D,dword ptr [RCX + 0x64] }
    /* +0xb56906 */ __asm { MOV EBP,dword ptr [RCX + 0x60] }
    /* +0xb56909 */ __asm { MOV R9D,dword ptr [RCX + 0x5c] }
    /* +0xb5690d */ __asm { XOR ESI,ESI }
    /* +0xb5690f */ __asm { MOV dword ptr [RSP + 0x58],EAX }
    /* +0xb56913 */ __asm { MOV dword ptr [RSP + 0x1c0],R12D }
    /* +0xb5691b */ __asm { MOV dword ptr [RSP + 0x198],R14D }
    /* +0xb56923 */ __asm { MOV dword ptr [RSP + 0x1f8],R8D }
    /* +0xb5692b */ __asm { MOV dword ptr [RSP + 0x50],R13D }
    /* +0xb56930 */ __asm { MOV dword ptr [RSP + 0x38],EBP }
    /* +0xb56934 */ __asm { MOV dword ptr [RSP + 0x70],R9D }
    /* +0xb56939 */ __asm { MOV dword ptr [RSP + 0x84],EDX }
    /* +0xb56940 */ __asm { MOV dword ptr [RSP + 0x40],R9D }
    /* +0xb56945 */ __asm { MOV R15D,EDX }
    /* +0xb56948 */ __asm { MOV R10D,EBP }
    /* +0xb5694b */ __asm { MOV EBX,R13D }
    /* +0xb5694e */ __asm { MOV dword ptr [RSP + 0x1c8],R13D }
    /* +0xb56956 */ __asm { MOV EDI,R8D }
    /* +0xb56959 */ __asm { MOV EDX,R12D }
    /* +0xb5695c */ __asm { MOV R12D,EAX }
    /* +0xb5695f */ __asm { MOV R13D,EBP }
    /* +0xb56962 */ __asm { ROL R13D,0x15 }
    /* +0xb56966 */ __asm { MOV R8D,EAX }
    /* +0xb56969 */ __asm { ROL R8D,0x13 }
    /* +0xb5696d */ __asm { MOV R11,qword ptr [RSP + 0x1b0] }
    /* +0xb56975 */ __asm { MOV R9D,R11D }
    /* +0xb56978 */ __asm { OR R9D,0x1 }
    /* +0xb5697c */ __asm { LEA RAX,[0x7fffa5785003] }
    /* +0xb56983 */ __asm { MOV BP,0xf89b }
    /* +0xb56987 */ __asm { IMUL EBP,R9D }
    /* +0xb5698b */ __asm { MOV R9D,EDX }
    /* +0xb5698e */ __asm { XOR R9D,R15D }
    /* +0xb56991 */ __asm { MOVD XMM1,R9D }
    /* +0xb56996 */ __asm { MOV R9D,R12D }
    /* +0xb56999 */ __asm { ROL R9D,0x1e }
    /* +0xb5699d */ __asm { XOR R9D,R8D }
    /* +0xb569a0 */ __asm { MOV R11D,R10D }
    /* +0xb569a3 */ __asm { ROL R11D,0x7 }
    /* +0xb569a7 */ __asm { MOVD XMM3,R14D }
    /* +0xb569ac */ __asm { MOV R8D,R10D }
    /* +0xb569af */ __asm { ROL R8D,0x1a }
    /* +0xb569b3 */ __asm { XOR R8D,R13D }
    /* +0xb569b6 */ __asm { MOV R14D,EDX }
    /* +0xb569b9 */ __asm { AND R14D,R15D }
    /* +0xb569bc */ __asm { MOVD XMM5,R12D }
    /* +0xb569c1 */ __asm { XOR R8D,R11D }
    /* +0xb569c4 */ __asm { MOV R13D,R12D }
    /* +0xb569c7 */ __asm { ROL R13D,0xa }
    /* +0xb569cb */ __asm { PAND XMM5,XMM1 }
    /* +0xb569cf */ __asm { XOR R13D,R9D }
    /* +0xb569d2 */ __asm { MOV R9D,EBX }
    /* +0xb569d5 */ __asm { XOR R9D,EDI }
    /* +0xb569d8 */ __asm { AND R9D,R10D }
    /* +0xb569db */ __asm { XOR R9D,EDI }
    /* +0xb569de */ __asm { ADD EBP,0x213a }
    /* +0xb569e4 */ __asm { MOVSX R11,BP }
    /* +0xb569e8 */ __asm { MOVD XMM1,R9D }
    /* +0xb569ed */ __asm { PADDD XMM1,XMM3 }
    /* +0xb569f1 */ __asm { MOVD R9D,XMM1 }
    /* +0xb569f6 */ __asm { ADD R9D,R8D }
    /* +0xb569f9 */ __asm { LEA RBX,[RSI + 0x4b8ae614] }
    /* +0xb56a00 */ __asm { ADD R9D,dword ptr [RSP + RSI*0x4 + 0x90] }
    /* +0xb56a08 */ __asm { ADD R11,RAX }
    /* +0xb56a0b */ __asm { ADD R9D,dword ptr [R11 + RSI*0x4] }
    /* +0xb56a0f */ __asm { MOV R11D,dword ptr [RSP + 0x1c8] }
    /* +0xb56a17 */ __asm { INC RSI }
    /* +0xb56a1a */ __asm { MOV EBP,dword ptr [RSP + 0x40] }
    /* +0xb56a1e */ __asm { ADD EBP,R9D }
    /* +0xb56a21 */ __asm { MOVD EAX,XMM5 }
    /* +0xb56a25 */ __asm { XOR EAX,R14D }
    /* +0xb56a28 */ __asm { ADD EAX,R13D }
    /* +0xb56a2b */ __asm { ADD EAX,R9D }
    /* +0xb56a2e */ __asm { MOV R14D,EDI }
    /* +0xb56a31 */ __asm { MOV R8D,R11D }
    /* +0xb56a34 */ __asm { MOV R13D,R10D }
    /* +0xb56a37 */ __asm { MOV R9D,R15D }
    /* +0xb56a3a */ __asm { CMP RBX,0x4b8ae653 }
    /* +0xb56a41 */ __asm { JNZ 0x7fffa52c6940 }
    /* +0xb56a47 */ __asm { JMP 0x7fffa52c6690 }
    /* +0xb56a4c */ __asm { MOV R9W,0xddc7 }
    /* +0xb56a51 */ __asm { ADD R9D,ECX }
    /* +0xb56a54 */ __asm { IMUL R9D,R9D,0x6785 }
    /* +0xb56a5b */ __asm { MOVZX R11D,R9W }
    /* +0xb56a5f */ __asm { MOV R8,qword ptr GS:[R11] }
    /* +0xb56a63 */ __asm { MOV R11,qword ptr [RSP + 0x258] }
    /* +0xb56a6b */ __asm { MOV R9W,0xcf19 }
    /* +0xb56a70 */ __asm { SUB R9D,ECX }
    /* +0xb56a73 */ __asm { ROL R9W,0x9 }
    /* +0xb56a78 */ __asm { MOVZX EAX,R9W }
    /* +0xb56a7c */ __asm { MOV RAX,qword ptr GS:[RAX] }
    /* +0xb56a80 */ __asm { MOV RAX,qword ptr [RAX + 0x30] }
    /* +0xb56a84 */ __asm { ADD RAX,R11 }
    /* +0xb56a87 */ __asm { MOV R10,-0x59a73d29aa7ca645 }
    /* +0xb56a91 */ __asm { CMP RAX,R10 }
    /* +0xb56a94 */ __asm { JNZ 0x7fffa52c6a9f }
    /* +0xb56a96 */ __asm { ADC EBP,dword ptr [RSI + -0x9ba694c] }
    /* +0xb56a9c */ __asm { XCHG EAX,ESP }
    /* +0xb56a9d */ __asm { POP RBX }
    /* +0xb56a9e */ __asm { CMC }
    /* +0xb56a9f */ __asm { MOV R10,0x25acbe1754c84207 }
    /* +0xb56aa9 */ __asm { MOV RCX,0x10000000247 }
    /* +0xb56ab3 */ __asm { MOV RAX,qword ptr [R8 + 0x18] }
    /* +0xb56ab7 */ __asm { MOV dword ptr [RSP + 0x90],0x9865908c }
    /* +0xb56ac2 */ __asm { MOV R9D,dword ptr [RSP + 0x90] }
    /* +0xb56aca */ __asm { ADD RAX,0x10 }
    /* +0xb56ace */ __asm { LEA R8,[RCX + -0x1e] }
    /* +0xb56ad2 */ __asm { MOV R9,0x19cbb75458ed8453 }
    /* +0xb56adc */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0xb56adf */ __asm { MOV dword ptr [RSP + 0x90],0x8aafbc0d }
    /* +0xb56aea */ __asm { MOV ECX,dword ptr [RSP + 0x90] }
    /* +0xb56af1 */ __asm { MOVZX R12D,word ptr [RAX + 0x58] }
    /* +0xb56af6 */ __asm { CMP R12D,0x2 }
    /* +0xb56afa */ __asm { JC 0x7fffa52c6b55 }
    /* +0xb56afc */ __asm { MOV EDX,R12D }
    /* +0xb56aff */ __asm { SHR EDX,0x1 }
    /* +0xb56b01 */ __asm { MOV RCX,qword ptr [RAX + 0x60] }
    /* +0xb56b05 */ __asm { XOR R14D,R14D }
    /* +0xb56b08 */ __asm { CMP DX,0x1 }
    /* +0xb56b0c */ __asm { SETZ R14B }
    /* +0xb56b10 */ __asm { MOV EDI,0x5b84c0b8 }
    /* +0xb56b15 */ __asm { IMUL EDI,dword ptr [RSP + 0x68] }
    /* +0xb56b1a */ __asm { XOR R13D,R13D }
    /* +0xb56b1d */ __asm { CMP R12W,0x4 }
    /* +0xb56b22 */ __asm { SETC R13B }
    /* +0xb56b26 */ __asm { NOT EDI }
    /* +0xb56b28 */ __asm { MOV R12D,0xc8e8470a }
    /* +0xb56b2e */ __asm { ADD R12D,0xb0cb93b7 }
    /* +0xb56b35 */ __asm { XOR R12D,dword ptr [RSP + 0x1b0] }
    /* +0xb56b3d */ __asm { ROL R12D,0x2 }
    /* +0xb56b41 */ __asm { CMP R12,RDI }
    /* +0xb56b44 */ __asm { CMOVL R13D,R14D }
    /* +0xb56b48 */ __asm { TEST R13B,R13B }
    /* +0xb56b4b */ __asm { JZ 0x7fffa52c6b5c }
    /* +0xb56b4d */ __asm { MOV RDI,R10 }
    /* +0xb56b50 */ __asm { XOR R15D,R15D }
    /* +0xb56b53 */ __asm { JMP 0x7fffa52c6bbe }
    /* +0xb56b55 */ __asm { XOR ECX,ECX }
    /* +0xb56b57 */ __asm { JMP 0x7fffa52c6c06 }
    /* +0xb56b5c */ __asm { MOV R12D,EDX }
    /* +0xb56b5f */ __asm { AND R12D,0xfffffffe }
    /* +0xb56b63 */ __asm { MOV RDI,R10 }
    /* +0xb56b66 */ __asm { XOR R13D,R13D }
    /* +0xb56b69 */ __asm { MOVZX ESI,word ptr [RCX + R13*0x2] }
    /* +0xb56b6e */ __asm { MOV R14D,ESI }
    /* +0xb56b71 */ __asm { OR R14D,0x20 }
    /* +0xb56b75 */ __asm { LEA R15D,[RSI + -0x41] }
    /* +0xb56b79 */ __asm { CMP R15W,0x1a }
    /* +0xb56b7e */ __asm { CMOVNC R14D,ESI }
    /* +0xb56b82 */ __asm { LEA R15,[R13 + 0x2] }
    /* +0xb56b86 */ __asm { MOVZX ESI,R14B }
    /* +0xb56b8a */ __asm { XOR RSI,RDI }
    /* +0xb56b8d */ __asm { IMUL RSI,R8 }
    /* +0xb56b91 */ __asm { MOVZX EDI,word ptr [RCX + R13*0x2 + 0x2] }
    /* +0xb56b97 */ __asm { MOV R14D,EDI }
    /* +0xb56b9a */ __asm { OR R14D,0x20 }
    /* +0xb56b9e */ __asm { LEA R13D,[RDI + -0x41] }
    /* +0xb56ba2 */ __asm { CMP R13W,0x1a }
    /* +0xb56ba7 */ __asm { CMOVNC R14D,EDI }
    /* +0xb56bab */ __asm { MOVZX EDI,R14B }
    /* +0xb56baf */ __asm { XOR RDI,RSI }
    /* +0xb56bb2 */ __asm { IMUL RDI,R8 }
    /* +0xb56bb6 */ __asm { MOV R13,R15 }
    /* +0xb56bb9 */ __asm { CMP R12,R15 }
    /* +0xb56bbc */ __asm { JNZ 0x7fffa52c6b69 }
    /* +0xb56bbe */ __asm { TEST DL,0x1 }
    /* +0xb56bc1 */ __asm { JZ 0x7fffa52c6c00 }
    /* +0xb56bc3 */ __asm { MOVZX EDX,word ptr [RCX + R15*0x2] }
    /* +0xb56bc8 */ __asm { MOV R14D,EDX }
    /* +0xb56bcb */ __asm { OR R14D,0x20 }
    /* +0xb56bcf */ __asm { MOV R12W,0xa820 }
    /* +0xb56bd4 */ __asm { ADD R12D,0xffff8be0 }
    /* +0xb56bdb */ __asm { MOV RCX,qword ptr [RSP + 0x1b0] }
    /* +0xb56be3 */ __asm { ROR R12W,CL }
    /* +0xb56be7 */ __asm { LEA ECX,[RDX + -0x41] }
    /* +0xb56bea */ __asm { CMP CX,R12W }
    /* +0xb56bee */ __asm { CMOVNC R14D,EDX }
    /* +0xb56bf2 */ __asm { MOVZX ECX,R14B }
    /* +0xb56bf6 */ __asm { XOR RCX,RDI }
    /* +0xb56bf9 */ __asm { IMUL RCX,R8 }
    /* +0xb56bfd */ __asm { MOV RDI,RCX }
    /* +0xb56c00 */ __asm { CMP RDI,R9 }
    /* +0xb56c03 */ __asm { SETZ CL }
    /* +0xb56c06 */ __asm { PUSHFQ }
    /* +0xb56c07 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb56c0f */ __asm { POPFQ }
    /* +0xb56c10 */ __asm { MOV dword ptr [RSP + 0x90],0x4a13df52 }
    /* +0xb56c1b */ __asm { MOV EDX,dword ptr [RSP + 0x90] }
    /* +0xb56c22 */ __asm { CMP EDX,0xb050fc76 }
    /* +0xb56c28 */ __asm { NOP }
    /* +0xb56c29 */ __asm { NOP }
    /* +0xb56c2a */ __asm { NOP }
    /* +0xb56c2b */ __asm { NOP }
    /* +0xb56c2c */ __asm { NOP }
    /* +0xb56c2d */ __asm { TEST CL,CL }
    /* +0xb56c2f */ __asm { JNZ 0x7fffa52c6c91 }
    /* +0xb56c31 */ __asm { MOV dword ptr [RSP + 0x90],0xd7ecfb14 }
    /* +0xb56c3c */ __asm { MOV ECX,dword ptr [RSP + 0x90] }
    /* +0xb56c43 */ __asm { JMP 0x7fffa52c6adc }
    /* +0xb56c48 */ __asm { MOV DX,0x2fd }
    /* +0xb56c4c */ __asm { LEA R11,[0x7fffa5083c36] }
    /* +0xb56c53 */ __asm { XOR EDX,0xffffb629 }
    /* +0xb56c59 */ __asm { LEA EAX,[RDX + RDX*0x4] }
    /* +0xb56c5c */ __asm { LEA R9D,[RDX + RAX*0x8] }
    /* +0xb56c60 */ __asm { MOV RCX,qword ptr [RSP + 0x1b0] }
    /* +0xb56c68 */ __asm { ROR R9W,CL }
    /* +0xb56c6c */ __asm { MOVSX RAX,R9W }
    /* +0xb56c70 */ __asm { ADD RAX,R11 }
    /* +0xb56c73 */ __asm { MOV R9D,0xb538be8 }
    /* +0xb56c79 */ __asm { ADD R9D,ECX }
    /* +0xb56c7c */ __asm { IMUL R10D,R9D,0x4eb571e3 }
    /* +0xb56c83 */ __asm { ADD R10D,0xac4683f2 }
    /* +0xb56c8a */ __asm { CALL RAX }
    /* +0xb56c8c */ __asm { JMP 0x7fffa52c6656 }
    /* +0xb56c91 */ __asm { MOV RCX,0x30518e5ede604e7d }
    /* +0xb56c9b */ __asm { IMUL RCX,qword ptr [R11 + -0x788] }
    /* +0xb56ca3 */ __asm { MOV R11,-0x4eb7ac60206ef65e }
    /* +0xb56cad */ __asm { ADD R11,RCX }
    /* +0xb56cb0 */ __asm { MOV RCX,0x2cb0f35459e4d3cb }
    /* +0xb56cba */ __asm { CMP R11,RCX }
    /* +0xb56cbd */ __asm { NOP }
    /* +0xb56cbe */ __asm { NOP }
    /* +0xb56cbf */ __asm { NOP }
    /* +0xb56cc0 */ __asm { NOP }
    /* +0xb56cc1 */ __asm { NOP }
    /* +0xb56cc2 */ __asm { MOV RAX,qword ptr [RAX + 0x30] }
    /* +0xb56cc6 */ __asm { MOV R9W,0x1191 }
    /* +0xb56ccb */ __asm { IMUL R9D,R9D,0x3109 }
    /* +0xb56cd2 */ __asm { SUB R9D,dword ptr [RSP + 0x1b0] }
    /* +0xb56cda */ __asm { ROL R9W,0x7 }
    /* +0xb56cdf */ __asm { MOVZX ECX,R9W }
    /* +0xb56ce3 */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0xb56ce7 */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xb56cec */ __asm { TEST RAX,RAX }
    /* +0xb56cef */ __asm { JZ 0x7fffa52c6f18 }
    /* +0xb56cf5 */ __asm { MOV R9W,0x6fea }
    /* +0xb56cfa */ __asm { IMUL R9D,R9D,0x4dc7 }
    /* +0xb56d01 */ __asm { MOV RAX,qword ptr [RSP + 0x40] }
    /* +0xb56d06 */ __asm { MOV ECX,dword ptr [RAX + 0x3c] }
    /* +0xb56d09 */ __asm { XOR R9D,dword ptr [RSP + 0x1b0] }
    /* +0xb56d11 */ __asm { NOT R9D }
    /* +0xb56d14 */ __asm { MOVZX R11D,R9W }
    /* +0xb56d18 */ __asm { ADD RCX,RAX }
    /* +0xb56d1b */ __asm { CMP RCX,R11 }
    /* +0xb56d1e */ __asm { JZ 0x7fffa52c6f18 }
    /* +0xb56d24 */ __asm { MOV R9W,0x60d6 }
    /* +0xb56d29 */ __asm { MOV RAX,qword ptr [RSP + 0x1b0] }
    /* +0xb56d31 */ __asm { XOR R9D,EAX }
    /* +0xb56d34 */ __asm { NOT R9D }
    /* +0xb56d37 */ __asm { MOVZX R11D,R9W }
    /* +0xb56d3b */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0xb56d3f */ __asm { MOV R9W,0x1e62 }
    /* +0xb56d44 */ __asm { XOR R9D,0xffff812b }
    /* +0xb56d4b */ __asm { SUB R9D,EAX }
    /* +0xb56d4e */ __asm { MOVZX EAX,R9W }
    /* +0xb56d52 */ __asm { MOV R11,qword ptr [R11 + 0xfe8] }
    /* +0xb56d59 */ __asm { MOV RAX,qword ptr GS:[RAX] }
    /* +0xb56d5d */ __asm { ADD R11,qword ptr [RAX + 0x370] }
    /* +0xb56d64 */ __asm { MOV RAX,-0x5d293fd390ef0015 }
    /* +0xb56d6e */ __asm { CMP R11,RAX }
    /* +0xb56d71 */ __asm { NOP }
    /* +0xb56d72 */ __asm { NOP }
    /* +0xb56d73 */ __asm { NOP }
    /* +0xb56d74 */ __asm { NOP }
    /* +0xb56d75 */ __asm { NOP }
    /* +0xb56d76 */ __asm { NOP }
    /* +0xb56d77 */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa52c8990  |  RVA: 0xb58990  |  Size: 145 bytes
// Callers  : none
// Callees  : FUN_7fffa52c403c@0xb5403c, FUN_7fffa54539d0@0xce39d0
// ============================================================================
uint32_t FUN_7fffa52c8990(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  *(uint64_t *)(param_2 + 0x30) = param_1;
  if (*(char *)(param_2 + 0x58) != '\0') {
    *(uint64_t *)(param_2 + 0x28) = **(uint64_t **)(param_2 + 0x30);
    if (((**(int **)(param_2 + 0x28) == -0x1f928c9d) &&
        (*(int *)(*(int64_t *)(param_2 + 0x28) + 0x18) == 4)) &&
       ((*(int *)(*(int64_t *)(param_2 + 0x28) + 0x20) == 0x19930520 ||
        ((*(int *)(*(int64_t *)(param_2 + 0x28) + 0x20) == 0x19930521 ||
         (*(int *)(*(int64_t *)(param_2 + 0x28) + 0x20) == 0x19930522)))))) {
      lVar2 = FUN_7fffa54539d0();
      *(uint64_t *)(lVar2 + 0x20) = *(uint64_t *)(param_2 + 0x28);
      uVar1 = *(uint64_t *)(*(int64_t *)(param_2 + 0x30) + 8);
      lVar2 = FUN_7fffa54539d0();
      *(uint64_t *)(lVar2 + 0x28) = uVar1;
      FUN_7fffa52c403c();
    }
  }
  *(uint32_t *)(param_2 + 0x20) = 0;
  return *(uint32_t *)(param_2 + 0x20);
}


// ============================================================================
// Function : FUN_7fffa52c8a30  |  RVA: 0xb58a30  |  Size: 2039 bytes
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
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint32_t FUN_7fffa52c8a30(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                     uint64_t param_5,uint64_t param_6)

{
  char *pcVar1;
  uint8_t uVar2;
  char cVar3;
  short sVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  bool bVar7;
  uint16_t uVar8;
  int iVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint16_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint64_t uVar15;
  code *pcVar16;
  uint64_t ******ppppppuVar17;
  uint64_t ******ppppppuVar18;
  uint64_t ******ppppppuVar19;
  uint8_t *puVar20;
  uint32_t *puVar21;
  uint64_t *******pppppppuVar22;
  uint32_t uVar23;
  uint32_t *puVar24;
  uint32_t *puVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  uint64_t uVar28;
  uint64_t ******ppppppuVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  int in_R11D;
  uint32_t *puVar32;
  uint64_t ******ppppppuVar33;
  uint64_t ******ppppppuVar34;
  uint64_t unaff_R12;
  uint64_t unaff_R15;
  uint8_t in_AF;
  uint8_t bVar35;
  uint8_t bVar36;
  uint8_t in_IF;
  uint8_t bVar37;
  bool bVar38;
  uint8_t in_NT;
  uint8_t bVar39;
  uint8_t in_AC;
  uint8_t bVar40;
  uint8_t bVar41;
  uint8_t bVar42;
  uint8_t in_ID;
  uint8_t bVar43;
  uint8_t auStack_350 [32];
  uint64_t uStack_330;
  int64_t lStack_328;
  uint64_t *******apppppppuStack_2d0 [2];
  uint8_t auStack_2c0 [96];
  uint64_t uStack_260;
  uint32_t uStack_1e4;
  uint32_t uStack_1a8;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint32_t *puStack_138;
  uint32_t *puStack_130;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint32_t uStack_f8;
  uint32_t uStack_f4;
  uint32_t auStack_a8 [3];
  uint32_t uStack_9c;
  uint64_t uStack_88;
  int64_t lStack_80;
  uint64_t uStack_68;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint64_t uStack_50;
  int64_t lStack_48;
  
  puVar21 = auStack_a8;
  puVar24 = (uint32_t *)(param_2 * -0x7ff001ffc007ff);
  uVar15 = param_1 + 0x624a330e;
  uVar15 = (uVar15 * 0x4000 | uVar15 >> 0x32) ^ (uVar15 << 0x37 | uVar15 >> 9) ^ uVar15;
  uVar27 = (uint32_t)param_6;
  bVar39 = (in_NT & 1) != 0;
  bVar37 = (in_IF & 1) != 0;
  bVar35 = (in_AF & 1) != 0;
  bVar43 = (in_ID & 1) != 0;
  bVar40 = (in_AC & 1) != 0;
  uVar15 = (uVar15 << 0x2e | uVar15 >> 0x12) ^ (uVar15 << 0x1c | uVar15 >> 0x24) ^ uVar15;
  bVar5 = (uint8_t)param_6;
  uVar31 = uVar15 << 0x38 | uVar15 >> 8;
  uVar28 = uVar31 ^ uVar15;
  if (uVar27 + 0x35554da6 < (-0x5fa5d5ec << (bVar5 & 0x1f) | 0xa05a2a14U >> 0x20 - (bVar5 & 0x1f)))
  {
    uVar28 = uVar15 * uVar31;
  }
  uVar28 = (uVar15 << 0x1c | uVar15 >> 0x24) ^ uVar28;
  uVar28 = (uVar28 << 0x30 | uVar28 >> 0x10) ^ (uVar28 << 0x38 | uVar28 >> 8) ^ uVar28;
  uStack_f8 = 0x474c8727;
  uStack_54 = (((uint32_t)((uVar28 << 0x30) >> 0x20) | (uint32_t)(uint16_t)(uVar28 >> 0x30)) ^ (uint32_t)uVar28 ^
              (uint32_t)(uVar28 >> 0x20)) - in_R11D;
  uStack_50 = 0;
  lStack_48 = uStack_54 + param_5;
  uVar28 = (uint64_t)*(uint32_t *)((int64_t)puVar24 + (uint64_t)(uint32_t)puVar24[0xf] + 0x38);
  uVar28 = -uVar28 & (*(uint32_t *)((int64_t)puVar24 + (uint64_t)(uint32_t)puVar24[0xf] + 0x54) + uVar28)
                     - 1;
  if (uStack_54 < uVar28) {
    uStack_f8 = 0x888d4c6c;
    uStack_50 = uVar28;
    if (param_5 < uVar28) {
      uStack_50 = param_5;
    }
    uStack_54 = (uint32_t)uVar28;
  }
  bVar38 = false;
  bVar36 = 0;
  bVar42 = 0;
  bVar41 = 0;
  uStack_9c = uVar27 | 1;
  uStack_58 = uVar27 | 1;
  uVar28 = 0;
  uVar15 = (uint64_t)(int)~(uVar27 ^ 0x63dd4ce0);
  uStack_108 = (uint64_t)((int64_t)&uStack_88 * -0x588a4b2fc588a4b3) >> 0x1d ^
               (int64_t)&uStack_88 * -0x588a4b2fc588a4b3;
  uVar31 = (uint64_t)(int)((uVar27 ^ 0x6f751ae0) << 0x16 | (uVar27 ^ 0x6f751ae0) >> 10);
  ppppppuVar29 = (uint64_t ******)0x7fffa565f3d4;
  uVar8 = (uint16_t)param_6;
  pcVar16 = (code *)((int64_t)(short)(uVar8 ^ 0xeeb6) + 0x7fffa565f3d4);
  puStack_130 = (uint32_t *)0x7fffa52c8cda;
  (*pcVar16)(pcVar16,0);
  bVar7 = lStack_80 == 0;
  if (uVar15 < uVar31) {
    bVar7 = lStack_80 < 0;
  }
  uVar11 = 0;
  if (!bVar7) {
    uVar28 = uStack_88 + lStack_80 * 0x28;
    uStack_68 = uVar28;
    uVar15 = uStack_88;
    do {
      uVar11 = (uint64_t)(uVar27 + 0x33bc144a ^ 0x48be6f22);
      if (*(uint64_t *)(puVar21 + 0x18) <= (uint64_t)puVar21[0x15]) {
        *puVar21 = 0xa00000b9;
        break;
      }
      *puVar21 = 0xd7ee6c51;
      uVar23 = *puVar21;
      uVar26 = -0x155798e << (bVar5 & 0x1f) | 0xfeaa8672U >> 0x20 - (bVar5 & 0x1f);
      uVar13 = uVar26 * -0x7748ede5;
      uVar26 = uVar23 + uVar26 * 0x7748ede5;
      if (uVar23 < uVar13 || uVar26 == 0) {
        in(0xe9);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar31 = (uint64_t)(bVar39 & 1) * 0x4000 | (uint64_t)SBORROW4(uVar23,uVar13) * 0x800 |
               (uint64_t)bVar38 * 0x400 | (uint64_t)(bVar37 & 1) * 0x200 |
               (uint64_t)(bVar36 & 1) * 0x100 | (uint64_t)((int)uVar26 < 0) * 0x80 |
               (uint64_t)(uVar26 == 0) * 0x40 | (uint64_t)(bVar35 & 1) * 0x10 |
               (uint64_t)((POPCOUNT(uVar26 & 0xff) & 1U) == 0) * 4 | (uint64_t)(uVar23 < uVar13) |
               (uint64_t)(bVar43 & 1) * 0x200000 | (uint64_t)(bVar42 & 1) * 0x100000 |
               (uint64_t)(bVar41 & 1) * 0x80000 | (uint64_t)(bVar40 & 1) * 0x40000;
      puStack_130 = (uint32_t *)uVar31;
      if (puVar21[0x15] < *(uint32_t *)(uVar15 + 0xc)) {
        puStack_130 = (uint32_t *)0x7fffa52c91c9;
        (*(code *)((int64_t)(short)(0x3422 << (bVar5 & 0xf) | 0x3422U >> 0x10 - (bVar5 & 0xf)) +
                  0x7fffa508ade0))();
      }
      uVar12 = (uVar8 ^ 0x39da) << 2 | uVar8 >> 0xe;
      uVar23 = *(uint32_t *)(uVar15 + 8);
      unaff_R15 = (uint64_t)uVar23;
      unaff_R12 = (uint64_t)uVar12;
      if (uVar23 == uVar12) {
        uVar26 = *(uint32_t *)(uVar15 + 0x10);
        if (puVar24 != (uint32_t *)0x0) goto LAB_7fffa52c8df6;
LAB_7fffa52c8e10:
        puVar32 = (uint32_t *)0x38;
      }
      else {
        uVar26 = uVar23;
        if (puVar24 == (uint32_t *)0x0) goto LAB_7fffa52c8e10;
LAB_7fffa52c8df6:
        puVar32 = (uint32_t *)((int64_t)puVar24 + (uint64_t)(uint32_t)puVar24[0xf] + 0x38);
      }
      uVar13 = *puVar32;
      uVar11 = (uint64_t)uVar13;
      ppppppuVar29 = (uint64_t ******)(uint64_t)-uVar13;
      uVar14 = (uVar26 - ((puVar21[0x14] * 0x48768000 | puVar21[0x14] * -0x670f6f13 >> 0x11) <=
                         (uVar27 ^ 0x6318a173) + 0xaa6397a8)) + uVar13 & -uVar13;
      puVar21[7] = uVar14;
      uVar14 = uVar14 + *(int *)(uVar15 + 0xc);
      uVar26 = puVar21[0x15];
      uVar13 = uVar14 - uVar26;
      if (uVar14 < uVar26 || uVar13 == 0) {
        *puVar21 = 0xff39d2de;
      }
      else {
        puStack_130 = (uint32_t *)((uint64_t)(bVar39 & 1) * 0x4000 |
                               (uint64_t)SBORROW4(uVar14,uVar26) * 0x800 |
                               (uint64_t)bVar38 * 0x400 | (uint64_t)(bVar37 & 1) * 0x200 |
                               (uint64_t)((int)uVar13 < 0) * 0x80 | (uint64_t)(uVar13 == 0) * 0x40
                               | (uint64_t)(bVar35 & 1) * 0x10 |
                               (uint64_t)((POPCOUNT(uVar13 & 0xff) & 1U) == 0) * 4 |
                               (uint64_t)(uVar14 < uVar26) | (uint64_t)(bVar43 & 1) * 0x200000 |
                               (uint64_t)(bVar42 & 1) * 0x100000 |
                               (uint64_t)(bVar41 & 1) * 0x80000 | (uint64_t)(bVar40 & 1) * 0x40000
                              );
        bVar39 = (uint64_t)(bVar39 & 1) != 0;
        bVar38 = (uint64_t)bVar38 != 0;
        bVar37 = (uint64_t)(bVar37 & 1) != 0;
        bVar36 = 0;
        bVar35 = (uint64_t)(bVar35 & 1) != 0;
        bVar43 = (uint64_t)(bVar43 & 1) != 0;
        bVar40 = (uint64_t)(bVar40 & 1) != 0;
        bVar42 = 0;
        bVar41 = 0;
        *puVar21 = 0x365926e9;
        if (*puVar21 < 0x143fb7f3) {
          puVar21 = (uint32_t *)(uint64_t)(uint32_t)(*(int *)((int64_t)puVar24 + -0x35817) * -0x72089a01);
LAB_7fffa52c90e7:
          *(uint32_t **)(puVar21 + -0xc) = puVar21 + 0xe;
          *(uint32_t **)(puVar21 + -0xe) = puVar21 + 7;
          *(uint32_t **)(puVar21 + -10) = puVar21 + 0x16;
          puVar32 = puVar21 + -0x14;
          *(uint32_t **)(puVar21 + -0x10) = puVar21 + 0xd;
          *(uint32_t **)(puVar21 + -0x12) = puVar21 + 0x18;
          *(uint32_t **)(puVar21 + -0x14) = puVar21 + 0x15;
          bVar6 = (uint8_t)(param_6 & 0xffffffff) & 0x1f;
          ppppppuVar29 = (uint64_t ******)
                         (uint64_t)(-0x7eef7403 << bVar6 | 0x81108bfdU >> 0x20 - bVar6);
          uVar28 = *(uint64_t *)(puVar21 + 0x10);
          puStack_130 = (uint32_t *)0x7fffa52c917a;
          uVar11 = (*(code *)((int64_t)(short)((short)puVar21[3] * 0x3651) + 0x7fffa52cdcf5))
                             (param_6 & 0xffffffff,
                              ((int64_t)puVar32 << 0x3b | (uint64_t)puVar32 >> 5) ^
                              ((int64_t)puVar32 * 0x80 | (uint64_t)puVar32 >> 0x39) ^
                              (uint64_t)puVar32);
          puVar25 = puVar24;
        }
        else {
          puVar21[0xd] = puVar21[0x15] - *(int *)(uVar15 + 0xc);
          *puVar21 = 0x20500204;
          uVar31 = (uint64_t)(*(int *)(uVar15 + 0x10) - puVar21[0xd]);
          uVar28 = *(int64_t *)(puVar21 + 0x18) - (uint64_t)puVar21[0x15];
          if (uVar31 <= *(int64_t *)(puVar21 + 0x18) - (uint64_t)puVar21[0x15]) {
            uVar28 = uVar31;
          }
          *puVar21 = 0x858aaecf - uVar27;
          uVar26 = *(uint32_t *)(uVar15 + 0x14);
          uVar13 = (uint32_t)uVar28;
          puVar21[0x13] = uVar13;
          *(uint64_t *)(puVar21 + 4) =
               (int64_t)puVar24 + (uint64_t)puVar21[0xd] + (uint64_t)uVar26;
          *(uint64_t *)puVar21 = (uint64_t)puVar21[0x15] + *(int64_t *)(puVar21 + 0xe);
          puVar21[6] = 0;
          *(uint32_t **)(puVar21 + -4) = puVar21;
          *(uint32_t **)(puVar21 + -2) = puVar21 + 6;
          *(uint32_t **)(puVar21 + -6) = puVar21 + 4;
          *(uint32_t **)(puVar21 + -8) = puVar21 + 0x13;
          puStack_130 = (uint32_t *)0x7fffa52c8f64;
          (*(code *)((int64_t)
                     (int)(0xc3fffd00U >> (bVar5 & 0x1f) | -0x3c000300 << 0x20 - (bVar5 & 0x1f)) +
                    0x7fffa5410ce0))
                    (puVar21 + 4,(uint64_t)(puVar21 + -8) >> 0x2c ^ (uint64_t)(puVar21 + -8));
          uVar31 = (uint64_t)(uVar23 == uVar12);
          *(uint64_t *)(puVar21 + 0x16) = *(int64_t *)(puVar21 + 0x16) + (uint64_t)puVar21[6];
          uVar28 = -uVar31;
          if (puVar21[0x14] * -0x387c52d6 ==
              ((uVar27 + 0xf835a1ee) * 0x80000 | uVar27 + 0xf835a1ee >> 0xd)) {
            uVar28 = uVar31;
          }
          lVar10 = ((uint64_t)ProcessEnvironmentBlock | uVar28) * -0x1ea698fe;
          uVar30 = ~uVar28;
          unaff_R12 = (~(uint64_t)ProcessEnvironmentBlock | uVar30) *
                      (uint64_t)(uVar27 ^ 0x4f2aff5f);
          uVar31 = (uVar30 & (uint64_t)ProcessEnvironmentBlock) * 0x1036d19b;
          uVar11 = (uint64_t)ProcessEnvironmentBlock ^ uVar30;
          if ((uint64_t)
              (((uVar27 + 0x4cea5dbc) * 0x400000 | uVar27 + 0x4cea5dbc >> 10) + 0x9a4cee8b) !=
              0xfffffffffd682abd) {
            uVar11 = uVar30 & (uint64_t)ProcessEnvironmentBlock;
          }
          ppppppuVar29 = (uint64_t ******)
                         ((uVar28 & (uint64_t)ProcessEnvironmentBlock) * 0x1ea698cf + lVar10 +
                          unaff_R12 + (uVar28 ^ (uint64_t)ProcessEnvironmentBlock) * -0x199c2db7 +
                         uVar31);
          puVar25 = puVar24;
          if (*(int64_t *)
               ((int64_t)ppppppuVar29 +
               uVar11 * -0x1036d19a + (uVar30 & ~(uint64_t)ProcessEnvironmentBlock) * -0x3842c6b5)
              == 0x42256573da1baf87) {
            puVar25 = puVar24 + (uint64_t)bVar38 * -2 + 1;
            *puVar24 = (int)lVar10;
          }
          puVar21[0xd] = puVar21[0xd] + uVar13;
          puVar21[0x15] = puVar21[0x15] + uVar13;
          *puVar21 = 0x467d3dda;
          *puVar21 = 0x728ae460;
          uVar23 = *puVar21;
          uVar26 = uVar27 + 0xda8898da;
          puVar24 = puVar25;
          if (uVar26 < uVar23) goto LAB_7fffa52c90e7;
          puVar21 = (uint32_t *)0x4eb805;
          pcVar1 = (char *)((uint64_t)uVar23 * 5 + -0x17);
          *pcVar1 = *pcVar1 + (char)uVar26;
          uVar28 = uRam00000000004eb845;
          bVar6 = (uint8_t)uVar23 & 0xf;
          uVar11 = 0;
          uRam00000000004eb859 = uRam00000000004eb859 + 0xfff & 0xfffff000;
          uRam00000000004eb839 = iRam00000000004eb821 + 0xfffU & 0xfffff000;
          uVar30 = *(int64_t *)
                    ((uint64_t)(uint16_t)((uint16_t)uVar26 << bVar6 | (uint16_t)uVar26 >> 0x10 - bVar6) +
                    0xff00000000) + 0x3cd6c72a;
          if ((uVar30 << 0x20 | uVar30 >> 0x20) == 0x926abcbb2249c250) {
            uVar15 = CONCAT62((int6)(uVar15 >> 0x10),
                              CONCAT11((char)(uRam00000000004eb839 >> 8),(char)uVar15));
            *(uint8_t *)(uVar31 - 0x69) = *(uint8_t *)(uVar31 - 0x69);
          }
        }
        *puVar21 = 0x4fac4ff;
        puVar24 = puVar25;
      }
      uVar15 = uVar15 + 0x28;
    } while (uVar15 != uVar28);
  }
  iVar9 = (int)CONCAT62((int6)(uVar11 >> 0x10),0xc751) + 0x50af;
  bVar5 = (uint8_t)(param_6 & 0xffffffff) & 0xf;
  uVar8 = (uint16_t)iVar9;
  uVar8 = uVar8 << bVar5 | uVar8 >> 0x10 - bVar5;
  ppppppuVar18 = (uint64_t ******)(uint64_t)uVar8;
  if (ppppppuVar18[0x1fe0000000][3] != (uint64_t ****)0xa37125cd81e72e89) {
    return CONCAT22((short)((uint32_t)iVar9 >> 0x10),uVar8);
  }
  puStack_130 = puVar21;
  puStack_138 = puVar24;
  uStack_140 = uVar31;
  uStack_148 = uVar15;
  uStack_150 = uVar28;
  uStack_158 = unaff_R12;
  uStack_160 = param_6;
  uStack_168 = unaff_R15;
  puVar20 = auStack_350;
  uStack_260 = param_6 & 0xffffffff;
  lVar10 = CONCAT44(uStack_f4,uStack_f8);
  uStack_1a8 = 0x640ec6fa;
  pppppppuVar22 = (uint64_t *******)apppppppuStack_2d0;
  ppppppuVar34 = ppppppuVar18;
  if (ppppppuVar29 == (uint64_t ******)0xffffffffffffffff) {
    if (*(int64_t *)((int64_t)ProcessEnvironmentBlock + 0x8c8) == 0x72c28fa44e380dc9) {
      ppppppuVar34 = (uint64_t ******)((int64_t)ppppppuVar18 + (uint64_t)bVar38 * -2 + 1);
      uVar2 = in(0);
      *(uint8_t *)ppppppuVar18 = uVar2;
      pcVar16 = (code *)swi(0xd5);
      (*pcVar16)();
      puVar20 = auStack_2c0;
      pppppppuVar22 = apppppppuStack_2d0[0];
    }
  }
  else {
    uStack_1e4 = 0x4b10b002;
    uVar27 = FUN_7fffa52cf7f0(FUN_7fffa52cf7f0,0x44cdc9a9,ppppppuVar18,
                              (((int64_t)ppppppuVar29 << 0x3b) +
                              ((int64_t)ppppppuVar29 - 0xf12b85cbU)) -
                              ((int64_t)ppppppuVar29 - 0xf12b85cbU << 0x3d));
    uVar27 = (uVar27 >> 1 | (uint32_t)((uVar27 & 1) != 0) << 0x1f) ^ (uVar27 << 0x16 | uVar27 >> 10) ^
             uVar27;
    uVar27 = (uVar27 << 0x1e | uVar27 >> 2) ^ (uVar27 << 0xc | uVar27 >> 0x14) ^ uVar27;
    puVar20 = auStack_350;
    uVar27 = (uVar27 << 0x1c | uVar27 >> 4) ^ (uVar27 << 0x18 | uVar27 >> 8) ^ uVar27;
    uVar27 = (uVar27 << 0x18 | uVar27 >> 8) ^ (uVar27 << 0x10 | uVar27 >> 0x10) ^ uVar27;
    uVar27 = (uVar27 << 0x17 | uVar27 >> 9) ^ (uVar27 << 0x13 | uVar27 >> 0xd) ^
             (uVar27 << 0x10 | uVar27 >> 0x10);
    uVar27 = (uVar27 << 6 | uVar27 >> 0x1a) ^ (uVar27 << 0xe | uVar27 >> 0x12) ^ uVar27;
    if (((uVar27 << 0xc | uVar27 >> 0x14) ^ (uVar27 << 0x1c | uVar27 >> 4)) != uVar27) {
      uStack_1a8 = 0x9ca1300;
      uStack_330 = (uStack_260 << 0x10 | uStack_260 >> 0x30) ^
                   (uStack_260 << 0x1d | uStack_260 >> 0x23) ^ uStack_260;
      lStack_328 = lVar10;
      FUN_7fffa5103050(ppppppuVar18,uStack_100,ppppppuVar29,0x3ee99ce1);
      return (uint32_t)ppppppuVar18 << 0x1e ^ (uint32_t)ppppppuVar18;
    }
  }
  *(uint32_t *)(pppppppuVar22 + 0x17) = 0xa4770000;
  pppppppuVar22[-3] = ppppppuVar34;
  pppppppuVar22[0x12] = ppppppuVar29;
  *(uint32_t *)((int64_t)pppppppuVar22 + 0x8c) = 0x54424e2;
  *(uint32_t *)(pppppppuVar22 + 0x25) = 0x1077cbbb;
  pppppppuVar22[-1] = *(uint64_t *******)(lVar10 + 0x78);
  pppppppuVar22[0x29] = (uint64_t ******)0x75f2c675;
  pppppppuVar22[7] = (uint64_t ******)0x68d2e46f;
  pppppppuVar22[1] = (uint64_t ******)0xaee7ce6;
  pppppppuVar22[0x19] = (uint64_t ******)0xffffffffdc561f6c;
  pppppppuVar22[3] = (uint64_t ******)0x1b64042c;
  pppppppuVar22[-7] = (uint64_t ******)0x78cc4efe;
  uVar26 = (uint32_t)ppppppuRam00007fffa4784d58;
  *(uint32_t *)((int64_t)pppppppuVar22 + 0x14) = (uVar26 & 0xc0) << 0x18;
  pppppppuVar22[8] = (uint64_t ******)0xbc4da0d9;
  pppppppuVar22[0x2c] = (uint64_t ******)0x1c91b279;
  pppppppuVar22[0x22] = (uint64_t ******)0x55c4cc37;
  pppppppuVar22[9] = (uint64_t ******)0x5f39b033;
  pppppppuVar22[0x13] = (uint64_t ******)0x69f17963;
  pppppppuVar22[0x2a] = (uint64_t ******)0x9364147e;
  pppppppuVar22[0x23] = (uint64_t ******)FUN_7fffa5699750;
  pppppppuVar22[-6] = (uint64_t ******)0x4b459ef0;
  ppppppuVar17 = (uint64_t ******)(uRam00007fffa4784d48 >> 0x15);
  pppppppuVar22[-5] = ppppppuVar17;
  pppppppuVar22[5] = ppppppuVar17;
  uVar28 = ~(uint64_t)ppppppuVar17 & 0xffffffffffffffdf;
  pppppppuVar22[0xf] =
       (uint64_t ******)(uint64_t)(0x37f - (int)CONCAT62((int6)(uVar28 >> 0x10),0x9a8));
  pppppppuVar22[0xb] =
       (uint64_t ******)((int64_t)ppppppuRam00007fffa4784d58 << 0x10 & 0x2000000000);
  pppppppuVar22[0x24] =
       (uint64_t ******)((int64_t)ppppppuRam00007fffa4784d58 << 0x10 | 0x2000000000);
  pppppppuVar22[-2] = (uint64_t ******)0x176f6450;
  pppppppuVar22[0xd] = ppppppuRam00007fffa4784d58;
  pppppppuVar22[0x18] = (uint64_t ******)((int64_t)ppppppuRam00007fffa4784d58 << 0x12);
  pppppppuVar22[4] = (uint64_t ******)((int64_t)ppppppuRam00007fffa4784d58 << 5);
  pppppppuVar22[0x15] = (uint64_t ******)((uint64_t)(uVar26 & 0x3000) << 0x14);
  pppppppuVar22[0x2b] = (uint64_t ******)((uint64_t)ppppppuRam00007fffa4784d58 & 0x1c000000000);
  pppppppuVar22[0xc] = (uint64_t ******)((int64_t)ppppppuRam00007fffa4784d58 << 0x11);
  pppppppuVar22[1] = (uint64_t ******)(uint64_t)((uint32_t)pppppppuVar22[1] ^ 0xd2062291);
  pppppppuVar22[0x1a] = (uint64_t ******)0xd8e85e77;
  uVar27 = (uint32_t)(uRam00007fffa4784d48 >> 0x20);
  pppppppuVar22[0x1e] = (uint64_t ******)(uint64_t)(uVar27 >> 7 & 0x3800);
  uVar23 = (uint32_t)uRam00007fffa4784d50;
  pppppppuVar22[0x1c] = (uint64_t ******)(uint64_t)((uint32_t)(uRam00007fffa4784d50 >> 8) & 0x800000);
  *pppppppuVar22 = (uint64_t ******)(uint64_t)((uint32_t)(uRam00007fffa4784d50 >> 0x18) & 0x4000000);
  pppppppuVar22[-4] = (uint64_t ******)(uRam00007fffa4784d50 >> 0x20);
  uVar13 = (uint32_t)(uRam00007fffa4784d50 >> 0x20);
  pppppppuVar22[0x1f] = (uint64_t ******)(uint64_t)(uVar13 & 0x8000000);
  pppppppuVar22[0x1b] =
       (uint64_t ******)(uint64_t)((uint32_t)(uRam00007fffa4784d50 >> 0xd) & 0x1000000);
  pppppppuVar22[0x16] = (uint64_t ******)(uRam00007fffa4784d50 >> 0x21);
  pppppppuVar22[0x20] = (uint64_t ******)(uint64_t)(uVar13 >> 1 & 0x10000000);
  pppppppuVar22[0x10] = (uint64_t ******)(uint64_t)(uVar27 >> 3 & 0x600);
  pppppppuVar22[0x21] = (uint64_t ******)(uint64_t)(uVar27 >> 0xc & 0x8000);
  ppppppuVar18 = pppppppuVar22[-5];
  uVar15 = (uint64_t)ppppppuVar18 ^ 0x20;
  ppppppuVar34 = pppppppuVar22[5];
  pppppppuVar22[10] = (uint64_t ******)(uRam00007fffa4784d48 >> 0x29);
  pppppppuVar22[5] = (uint64_t ******)(uint64_t)((uVar23 & 0x600) << 8);
  pppppppuVar22[-5] =
       (uint64_t ******)(uint64_t)((uint32_t)(uRam00007fffa4784d50 >> 0x12) & 0x2000000);
  ppppppuVar29 = pppppppuVar22[0x19];
  ppppppuVar33 = pppppppuVar22[0x24];
  if (pppppppuVar22[-6] <= pppppppuVar22[0x2a]) {
    ppppppuVar33 = pppppppuVar22[0xb];
  }
  pppppppuVar22[0x24] = ppppppuVar33;
  uVar15 = ((uint64_t)ppppppuVar29 & 0xffffffff) * (uVar15 & 0xffffffff) +
           (((uint64_t)ppppppuVar29 >> 0x20) * (uVar15 & 0xffffffff) +
            ((uint64_t)ppppppuVar18 >> 0x20) * ((uint64_t)ppppppuVar29 & 0xffffffff) << 0x20) +
           ((uint64_t)ppppppuVar34 & 0xffffffffffffffdf) * 0x4753c127 +
           ((((uint64_t)ppppppuVar17 | 0xffffffffffffffdf) * -0x23a9e093 +
             (~(uint64_t)ppppppuVar17 | 0x20) * 0x23a9e094 +
            (uint64_t)
            ((uint32_t)(uRam00007fffa4784d48 >> 0x11) & 0xc |
             (uint32_t)(uRam00007fffa4784d48 >> 0xf) & 2 | (uint32_t)uRam00007fffa4784d48 & 1 |
            (uint32_t)(uRam00007fffa4784d48 >> 0x12) & 0x10)) - uVar28) +
           (uint64_t)((uint32_t)(uRam00007fffa4784d48 >> 0x1c) & 0x40);
  ppppppuVar29 = pppppppuVar22[0xd];
  uVar28 = 0;
  if (0x2b110c39 < (int64_t)pppppppuVar22[9]) {
    uVar28 = (uint64_t)((uint32_t)(uRam00007fffa4784d48 >> 0x1d) & 0x80);
  }
  uVar27 = (int)pppppppuVar22[0x29] + 0xd678c121;
  ppppppuVar18 = (uint64_t ******)((int64_t)ppppppuVar29 + 0x11);
  if ((uint64_t ******)(uint64_t)(uVar27 * 8 | uVar27 >> 0x1d) <= pppppppuVar22[8]) {
    ppppppuVar18 = pppppppuVar22[0xc];
  }
  uVar31 = (int64_t)ppppppuVar18 << 0x24;
  if (pppppppuVar22[7] <= pppppppuVar22[0x13]) {
    uVar31 = (uint64_t)ppppppuVar18 & 0x1000000000;
  }
  ppppppuVar18 = (uint64_t ******)((int64_t)ppppppuVar29 + 5);
  if (pppppppuVar22[1] == pppppppuVar22[0x1a]) {
    ppppppuVar18 = pppppppuVar22[4];
  }
  cVar3 = *(char *)(pppppppuVar22 + 0x3d);
  ppppppuVar34 = (uint64_t ******)((int64_t)ppppppuVar29 + 0xfffffffee);
  if ((int64_t)pppppppuVar22[3] < (int64_t)pppppppuVar22[0x22]) {
    ppppppuVar34 = pppppppuVar22[0x18];
  }
  uVar27 = (uint32_t)pppppppuVar22[10] & 0x4000;
  uVar11 = (uint64_t)(uVar27 & (uint32_t)uVar15);
  if ((int64_t)pppppppuVar22[0x2c] <= (int64_t)pppppppuVar22[-7]) {
    uVar11 = (uint64_t)((uint32_t)(uRam00007fffa4784d48 >> 0x1f) & 0x100) +
             (int64_t)pppppppuVar22[0x10] + (int64_t)pppppppuVar22[0x1e] | uVar28 |
             (uint64_t)uVar27 | uVar15;
  }
  sVar4 = *(short *)(pppppppuVar22 + 0xf);
  uVar27 = *(uint32_t *)((int64_t)pppppppuVar22 + 0x14);
  ppppppuVar19 = (uint64_t ******)
                 (((uint64_t)((uint32_t)(uRam00007fffa4784d50 >> 4) & 0x400000) |
                   (uint64_t)pppppppuVar22[0x1c] | (uint64_t)pppppppuVar22[0x1b] |
                   (uint64_t)pppppppuVar22[-5] | (uint64_t)*pppppppuVar22 |
                   (uint64_t)pppppppuVar22[0x1f] | (uint64_t)pppppppuVar22[0x20] |
                   (uint64_t)pppppppuVar22[0x21] |
                   (uint64_t)(uVar23 & 0x80000) | (uint64_t)pppppppuVar22[0x24] |
                   (uint64_t)((uVar23 & 0x10) << 0xc) | (uint64_t)pppppppuVar22[5] |
                   (uint64_t)((uint32_t)(uRam00007fffa4784d50 >> 3) & 0x300000) |
                   ((uint64_t)(((uint32_t)ppppppuVar29 & 1) << 0x1d) + (int64_t)pppppppuVar22[0x15] |
                   (uint64_t)(uVar26 & 0x2000000) << 0xd) + (int64_t)pppppppuVar22[0x2b] * 4 +
                   ((uint64_t)pppppppuVar22[0xd] & 0x40000000000) * 2 |
                   (uint64_t)ppppppuVar34 & 0xc00000000 | uVar31 |
                   (uint64_t)ppppppuVar18 & 0x8000000000 | (uint64_t)uVar27 | uVar11) << 4);
  pppppppuVar22[1] = ppppppuVar19;
  *(uint64_t *)(puVar20 + -8) = 0x7fffa52c9c6c;
  (*(code *)((int64_t)sVar4 + 0x7fffa4f69b79))
            (((uint64_t)ppppppuVar19 ^ 0xfffffffff6475171) * 0x2000000,
             ((uint64_t)ppppppuVar19 ^ 0xfffffffff6475171) * -0x1ffffff);
  ppppppuVar29 = pppppppuVar22[0xe];
  ppppppuVar18 = pppppppuVar22[0x3a];
  *(uint64_t *******)(puVar20 + 0x28) = pppppppuVar22[-2];
  *(uint32_t *)(puVar20 + 0x20) = (uint32_t)(uint8_t)(cVar3 + 0x97U);
  ppppppuVar34 = pppppppuVar22[-3];
  ppppppuVar33 = pppppppuVar22[0x12];
  ppppppuVar17 = pppppppuVar22[0x23];
  *(uint64_t *)(puVar20 + -8) = 0x7fffa52c9ccc;
  (*(code *)ppppppuVar17)
            (ppppppuVar29,
             -0x7f40d721 -
             (((int64_t)ppppppuVar18 << 0x21 | (uint64_t)ppppppuVar18 >> 0x1f) ^
              ((int64_t)ppppppuVar18 << 0x32 | (uint64_t)ppppppuVar18 >> 0xe) ^
             (uint64_t)ppppppuVar18),ppppppuVar33,ppppppuVar34);
  uVar23 = (int)ppppppuVar29 + 0x4b7705cb;
  if (-1 < (int)uVar23) {
    pppppppuVar22[6] = (uint64_t ******)0x0;
    pppppppuVar22[0x14] = (uint64_t ******)0x0;
    pppppppuVar22[0x25] = (uint64_t ******)(pppppppuVar22 + 6);
    pppppppuVar22[0x28] = (uint64_t ******)(pppppppuVar22 + 0x14);
    pppppppuVar22[0x27] = (uint64_t ******)(pppppppuVar22 + 0x3a);
    pppppppuVar22[0x26] = (uint64_t ******)(pppppppuVar22 + 0xe);
    ppppppuVar34 = (uint64_t ******)
                   ((int64_t)pppppppuVar22 << 0x3e ^ (uint64_t)(pppppppuVar22 + 0x25));
    *(uint64_t *)(puVar20 + 0x20) = 0x1d52a412;
    *(uint64_t *)(puVar20 + -8) = 0x7fffa52c9d6a;
    (*(code *)&UNK_7fffa5246870)();
    pppppppuVar22[0x17] = pppppppuVar22[0x14];
    *(uint32_t *)(pppppppuVar22 + 0x23) = 0xd361e9ce;
    ppppppuVar29 = pppppppuVar22[6];
    ppppppuVar18 = pppppppuVar22[-1];
    pppppppuVar22[0x24] = ppppppuVar34;
    pppppppuVar22[-3] = (uint64_t ******)(uint64_t)(uint8_t)(cVar3 + 0x97U);
    *(uint32_t *)(pppppppuVar22 + 0xd) = uVar23;
    uVar15 = ((int64_t)ppppppuVar18 << 0x2b | (uint64_t)ppppppuVar18 >> 0x15) ^
             ((int64_t)ppppppuVar18 << 0x20 | (uint64_t)ppppppuVar18 >> 0x20) ^
             (uint64_t)ppppppuVar18;
    pppppppuVar22[0x12] = (uint64_t ******)(uint64_t)uVar27;
    ppppppuVar18 = pppppppuVar22[0x24];
    uVar31 = (uint64_t)ppppppuVar19 ^ (uint64_t)ppppppuVar18;
    ppppppuVar34 = pppppppuVar22[-3];
    uVar28 = (uint64_t)pppppppuVar22[0x24] ^ (uint64_t)ppppppuVar19 | uVar15;
    ppppppuVar33 = pppppppuVar22[0x12];
    uVar23 = *(uint32_t *)(pppppppuVar22 + 0xd);
    ppppppuVar17 = pppppppuVar22[0x17];
    *(uint64_t *)(puVar20 + -8) = 0x7fffa52c9eff;
    FUN_7fffa5497dc0(uVar28,(int64_t)ppppppuVar29 * 0x1000001,ppppppuVar17,
                     uVar28 * -0x28b6252f +
                     ((~(uint64_t)ppppppuVar19 ^ (uint64_t)ppppppuVar18) & ~uVar15) * -0x6258aa5f
                     + (uVar31 & uVar15) * -0x39a28530 + (uVar15 ^ uVar31) * -0x39a28530);
    ppppppuVar29 = pppppppuVar22[6];
    uVar28 = (int64_t)ppppppuVar29 << 0x11 ^ (uint64_t)ppppppuVar29;
    *(uint64_t *)(puVar20 + -8) = 0x7fffa52c9fc9;
    FUN_7fffa55acb60(0xffffffffd1ac0251,0xffffffff13eb3407,
                     ((int64_t)ppppppuVar29 << 0x3d | uVar28 >> 3) ^
                     (uVar28 << 10 | uVar28 >> 0x36) ^ uVar28,
                     ((uint64_t)ppppppuVar34 ^ ~(uint64_t)ppppppuVar33) * -0xec14cbf9);
  }
  uVar27 = *(uint32_t *)((int64_t)pppppppuVar22 + 0x8c);
  ppppppuVar29 = pppppppuVar22[1];
  uVar28 = ~(uint64_t)pppppppuVar22[-4] | (uint64_t)uVar27;
  lVar10 = (~(uVar28 ^ (uint64_t)pppppppuVar22[0x16]) + (uVar28 ^ (uint64_t)pppppppuVar22[0x16]))
           * -0xfbba70e2;
  *(int64_t *)(puVar20 + 0x20) = lVar10;
  *(uint64_t *)(puVar20 + -8) = 0x7fffa52ca053;
  FUN_7fffa548da80(FUN_7fffa548da80,lVar10,(uint64_t)uVar27,
                   (int64_t)ppppppuVar29 * 0xc0000421 - 0x53308f2eU ^ 0xb017cc5d);
  return uVar23;
}


// ============================================================================
// Function : FUN_7fffa52ca180  |  RVA: 0xb5a180  |  Size: 130 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52ca180(void)

{
  FUN_7fffa548da80();
  return;
}


// ============================================================================
// Function : FUN_7fffa52ca210  |  RVA: 0xb5a210  |  Size: 8930 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52ca210(void) {
    /* +0xb5a210 */ __asm { PUSH RDI }
    /* +0xb5a211 */ __asm { PUSH R14 }
    /* +0xb5a213 */ __asm { PUSH RBX }
    /* +0xb5a214 */ __asm { PUSH R13 }
    /* +0xb5a216 */ __asm { PUSH R12 }
    /* +0xb5a218 */ __asm { PUSH RBP }
    /* +0xb5a219 */ __asm { PUSH RSI }
    /* +0xb5a21a */ __asm { PUSH R15 }
    /* +0xb5a21c */ __asm { SUB RSP,0x5c8 }
    /* +0xb5a223 */ __asm { MOVDQA xmmword ptr [RSP + 0x5b0],XMM11 }
    /* +0xb5a22d */ __asm { MOVDQA xmmword ptr [RSP + 0x5a0],XMM6 }
    /* +0xb5a236 */ __asm { MOV R9D,0xd1d9d424 }
    /* +0xb5a23c */ __asm { MOV RDX,RAX }
    /* +0xb5a23f */ __asm { MOV ECX,0xf9a67d8f }
    /* +0xb5a244 */ __asm { MOV R10,RDX }
    /* +0xb5a247 */ __asm { NOT R10 }
    /* +0xb5a24a */ __asm { MOV R8D,0xd8b2903d }
    /* +0xb5a250 */ __asm { SUB R8D,ECX }
    /* +0xb5a253 */ __asm { ADD R9D,0xf92b526 }
    /* +0xb5a25a */ __asm { MOVSXD R9,R9D }
    /* +0xb5a25d */ __asm { MOV ECX,0xd0f1bd18 }
    /* +0xb5a262 */ __asm { IMUL R11D,ECX,0x4b36637f }
    /* +0xb5a269 */ __asm { ROL R11D,0xf }
    /* +0xb5a26d */ __asm { MOVQ XMM5,R9 }
    /* +0xb5a272 */ __asm { MOV RAX,RBX }
    /* +0xb5a275 */ __asm { MOVSXD R9,R8D }
    /* +0xb5a278 */ __asm { MOV ECX,0xae9c8e89 }
    /* +0xb5a27d */ __asm { ADD ECX,0xf5c3cc17 }
    /* +0xb5a283 */ __asm { MOV R8,-0xc2f3d156 }
    /* +0xb5a28d */ __asm { ADD R8,RCX }
    /* +0xb5a290 */ __asm { MOV RCX,R10 }
    /* +0xb5a293 */ __asm { AND RCX,RAX }
    /* +0xb5a296 */ __asm { MOV R15,RAX }
    /* +0xb5a299 */ __asm { XOR R15,RDX }
    /* +0xb5a29c */ __asm { IMUL R15,R8 }
    /* +0xb5a2a0 */ __asm { CMP R11,R9 }
    /* +0xb5a2a3 */ __asm { CMOVA R10,RDX }
    /* +0xb5a2a7 */ __asm { XOR R10,RAX }
    /* +0xb5a2aa */ __asm { NOT RAX }
    /* +0xb5a2ad */ __asm { MOVQ XMM1,R15 }
    /* +0xb5a2b2 */ __asm { MOVQ XMM4,R10 }
    /* +0xb5a2b7 */ __asm { MOVDQA XMM0,XMM5 }
    /* +0xb5a2bb */ __asm { PSRLQ XMM0,0x20 }
    /* +0xb5a2c0 */ __asm { PMULUDQ XMM0,XMM4 }
    /* +0xb5a2c4 */ __asm { MOVDQA XMM2,XMM4 }
    /* +0xb5a2c8 */ __asm { PSRLQ XMM2,0x20 }
    /* +0xb5a2cd */ __asm { PMULUDQ XMM2,XMM5 }
    /* +0xb5a2d1 */ __asm { PADDQ XMM2,XMM0 }
    /* +0xb5a2d5 */ __asm { PSLLQ XMM2,0x20 }
    /* +0xb5a2da */ __asm { PMULUDQ XMM4,XMM5 }
    /* +0xb5a2de */ __asm { PADDQ XMM4,XMM2 }
    /* +0xb5a2e2 */ __asm { MOVQ R9,XMM4 }
    /* +0xb5a2e7 */ __asm { OR RAX,RDX }
    /* +0xb5a2ea */ __asm { ADD RAX,RCX }
    /* +0xb5a2ed */ __asm { IMUL R11,RAX,0x65d5ba11 }
    /* +0xb5a2f4 */ __asm { MOVQ XMM5,R11 }
    /* +0xb5a2f9 */ __asm { PADDQ XMM5,XMM1 }
    /* +0xb5a2fd */ __asm { MOVQ R11,XMM5 }
    /* +0xb5a302 */ __asm { MOV dword ptr [RSP + 0xd0],0x24584f6d }
    /* +0xb5a30d */ __asm { MOV ECX,dword ptr [RSP + 0xd0] }
    /* +0xb5a314 */ __asm { TEST CL,0x1 }
    /* +0xb5a317 */ __asm { JZ 0x7fffa52cbf71 }
    /* +0xb5a31d */ __asm { ADD R11,R9 }
    /* +0xb5a320 */ __asm { MOV qword ptr [RSP + 0x88],R11 }
    /* +0xb5a328 */ __asm { MOV dword ptr [RSP + 0xd0],0x809000 }
    /* +0xb5a333 */ __asm { MOV R9D,dword ptr [RSP + 0xd0] }
    /* +0xb5a33b */ __asm { MOV dword ptr [RSP + 0xd0],0x3ab78f42 }
    /* +0xb5a346 */ __asm { MOV R9D,dword ptr [RSP + 0xd0] }
    /* +0xb5a34e */ __asm { CMP R9D,0x976135b5 }
    /* +0xb5a355 */ __asm { NOP }
    /* +0xb5a356 */ __asm { NOP }
    /* +0xb5a357 */ __asm { NOP }
    /* +0xb5a358 */ __asm { NOP }
    /* +0xb5a359 */ __asm { NOP }
    /* +0xb5a35a */ __asm { MOV RAX,0x4fd20fa98ffd72c8 }
    /* +0xb5a364 */ __asm { MOV RCX,0x1f40b4d90d57e4bf }
    /* +0xb5a36e */ __asm { MOV R10,-0x7e6df35855008406 }
    /* +0xb5a378 */ __asm { MOV R9,-0x7cc6940b51e459e7 }
    /* +0xb5a382 */ __asm { MOV R8,-0x14c21ecc66b14862 }
    /* +0xb5a38c */ __asm { MOV RDX,-0x7c9a946e51875990 }
    /* +0xb5a396 */ __asm { MOV R11,0x4fab0fda8f9c728d }
    /* +0xb5a3a0 */ __asm { MOV R15,0x1972575809da0937 }
    /* +0xb5a3aa */ __asm { MOV RBP,-0x4fa0cad969fb0e1e }
    /* +0xb5a3b4 */ __asm { MOV R13,0x3150cb3deabed324 }
    /* +0xb5a3be */ __asm { MOV RSI,0x1f36b4bc0d13e4e3 }
    /* +0xb5a3c8 */ __asm { MOV R12,-0x7e04f32c556e8445 }
    /* +0xb5a3d2 */ __asm { MOV RBX,0x1913573d09b20974 }
    /* +0xb5a3dc */ __asm { LEA RDI,[RSP + 0xd0] }
    /* +0xb5a3e4 */ __asm { MOV R14,0x311fcb78eae1d350 }
    /* +0xb5a3ee */ __asm { MOV qword ptr [RSP + 0x50],RAX }
    /* +0xb5a3f3 */ __asm { MOV qword ptr [RSP + 0x58],R12 }
    /* +0xb5a3f8 */ __asm { MOV qword ptr [RSP + 0x68],R14 }
    /* +0xb5a3fd */ __asm { MOV qword ptr [RSP + 0x70],RBP }
    /* +0xb5a402 */ __asm { MOV qword ptr [RSP + 0x48],R9 }
    /* +0xb5a407 */ __asm { MOV qword ptr [RSP + 0x60],RBX }
    /* +0xb5a40c */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0xb5a411 */ __asm { MOV qword ptr [RSP + 0x78],R8 }
    /* +0xb5a416 */ __asm { MOV qword ptr [RSP + 0xf0],R15 }
    /* +0xb5a41e */ __asm { MOVDQA XMM5,xmmword ptr [RSP + 0x50] }
    /* +0xb5a424 */ __asm { MOV qword ptr [RSP + 0xe0],R11 }
    /* +0xb5a42c */ __asm { MOV qword ptr [RSP + 0xd0],RSI }
    /* +0xb5a434 */ __asm { MOVDQA XMM1,xmmword ptr [RSP + 0x60] }
    /* +0xb5a43a */ __asm { MOV qword ptr [RSP + 0xe8],R10 }
    /* +0xb5a442 */ __asm { MOV qword ptr [RSP + 0xf8],R13 }
    /* +0xb5a44a */ __asm { MOVDQA XMM4,xmmword ptr [RSP + 0x40] }
    /* +0xb5a450 */ __asm { MOVDQA XMM0,xmmword ptr [RSP + 0x70] }
    /* +0xb5a456 */ __asm { MOV qword ptr [RSP + 0x108],R8 }
    /* +0xb5a45e */ __asm { MOV R10,-0x4fa0cad969fb0e4f }
    /* +0xb5a468 */ __asm { MOV qword ptr [RSP + 0x100],R10 }
    /* +0xb5a470 */ __asm { PXOR XMM0,xmmword ptr [RDI + 0x30] }
    /* +0xb5a475 */ __asm { PXOR XMM1,xmmword ptr [RDI + 0x20] }
    /* +0xb5a47a */ __asm { MOV qword ptr [RSP + 0xd8],RDX }
    /* +0xb5a482 */ __asm { PXOR XMM4,xmmword ptr [RDI] }
    /* +0xb5a486 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM4 }
    /* +0xb5a48c */ __asm { PXOR XMM5,xmmword ptr [RDI + 0x10] }
    /* +0xb5a491 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM1 }
    /* +0xb5a497 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM0 }
    /* +0xb5a49d */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM5 }
    /* +0xb5a4a3 */ __asm { MOV dword ptr [RSP + 0xd0],0x800fc3af }
    /* +0xb5a4ae */ __asm { MOV R9D,dword ptr [RSP + 0xd0] }
    /* +0xb5a4b6 */ __asm { CMP R9D,0x3d9667e3 }
    /* +0xb5a4bd */ __asm { JBE 0x7fffa52cbf80 }
    /* +0xb5a4c3 */ __asm { MOV R9D,0x3b3dcdb5 }
    /* +0xb5a4c9 */ __asm { MOV R12,qword ptr [RSP + 0x88] }
    /* +0xb5a4d1 */ __asm { SUB R9D,R12D }
    /* +0xb5a4d4 */ __asm { ROL R9D,0xd }
    /* +0xb5a4d8 */ __asm { PUSHFQ }
    /* +0xb5a4d9 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb5a4e1 */ __asm { POPFQ }
    /* +0xb5a4e2 */ __asm { MOV dword ptr [RSP + 0xc0],0x320032 }
    /* +0xb5a4ed */ __asm { LEA R11,[RSP + 0x40] }
    /* +0xb5a4f2 */ __asm { MOV qword ptr [RSP + 0xc8],R11 }
    /* +0xb5a4fa */ __asm { MOV dword ptr [RSP + 0xd0],R9D }
    /* +0xb5a502 */ __asm { MOV R9D,dword ptr [RSP + 0xd0] }
    /* +0xb5a50a */ __asm { TEST R9D,R9D }
    /* +0xb5a50d */ __asm { NOP }
    /* +0xb5a50e */ __asm { NOP }
    /* +0xb5a50f */ __asm { NOP }
    /* +0xb5a510 */ __asm { NOP }
    /* +0xb5a511 */ __asm { NOP }
    /* +0xb5a512 */ __asm { MOV ECX,0x19f7f4de }
    /* +0xb5a517 */ __asm { ADD ECX,R12D }
    /* +0xb5a51a */ __asm { MOV R9D,0xbcb80056 }
    /* +0xb5a520 */ __asm { IMUL R10D,R9D,0x1780b91b }
    /* +0xb5a527 */ __asm { PUSHFQ }
    /* +0xb5a528 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb5a530 */ __asm { POPFQ }
    /* +0xb5a531 */ __asm { ADD R10D,R12D }
    /* +0xb5a534 */ __asm { NOT R10D }
    /* +0xb5a537 */ __asm { ROL ECX,0xd }
    /* +0xb5a53a */ __asm { CMP RCX,R10 }
    /* +0xb5a53d */ __asm { JL 0x7fffa52ca5eb }
    /* +0xb5a543 */ __asm { LEA R9,[RSP + 0xf0] }
    /* +0xb5a54b */ __asm { MOV dword ptr [RSP + 0xd0],0x30 }
    /* +0xb5a556 */ __asm { LEA R11,[RSP + 0xc0] }
    /* +0xb5a55e */ __asm { MOV qword ptr [RSP + 0xe0],R11 }
    /* +0xb5a566 */ __asm { MOV EBX,0x36b9ce97 }
    /* +0xb5a56b */ __asm { MOV qword ptr [RSP + 0xd8],0x0 }
    /* +0xb5a577 */ __asm { MOV dword ptr [RSP + 0xe8],0x40 }
    /* +0xb5a582 */ __asm { PXOR XMM5,XMM5 }
    /* +0xb5a586 */ __asm { MOVDQU xmmword ptr [R9],XMM5 }
    /* +0xb5a58b */ __asm { ADD EBX,R12D }
    /* +0xb5a58e */ __asm { XOR EBX,0x9285b279 }
    /* +0xb5a594 */ __asm { ROL EBX,0x13 }
    /* +0xb5a597 */ __asm { MOV dword ptr [RSP + 0x90],0xa9309024 }
    /* +0xb5a5a2 */ __asm { MOV R9D,dword ptr [RSP + 0x90] }
    /* +0xb5a5aa */ __asm { RDTSC }
    /* +0xb5a5ac */ __asm { SHL RDX,0x20 }
    /* +0xb5a5b0 */ __asm { OR RDX,RAX }
    /* +0xb5a5b3 */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xb5a5bd */ __asm { IMUL R9,RDX }
    /* +0xb5a5c1 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xb5a5cb */ __asm { ADD RCX,R9 }
    /* +0xb5a5ce */ __asm { MOV R11,RCX }
    /* +0xb5a5d1 */ __asm { SHR R11,0x2d }
    /* +0xb5a5d5 */ __asm { MOV R10,RCX }
    /* +0xb5a5d8 */ __asm { SHR R10,0x1b }
    /* +0xb5a5dc */ __asm { XOR R10D,R11D }
    /* +0xb5a5df */ __asm { SHR RCX,0x3b }
    /* +0xb5a5e3 */ __asm { ROR R10D,CL }
    /* +0xb5a5e6 */ __asm { JMP 0x7fffa52ca67f }
    /* +0xb5a5eb */ __asm { RDTSC }
    /* +0xb5a5ed */ __asm { SHL RDX,0x20 }
    /* +0xb5a5f1 */ __asm { OR RDX,RAX }
    /* +0xb5a5f4 */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xb5a5fe */ __asm { IMUL R9,RDX }
    /* +0xb5a602 */ __asm { MOV R10,-0x22b18422c4a9c65e }
    /* +0xb5a60c */ __asm { ADD R10,R9 }
    /* +0xb5a60f */ __asm { MOV RCX,R10 }
    /* +0xb5a612 */ __asm { SHR RCX,0x3b }
    /* +0xb5a616 */ __asm { MOV dword ptr [RSP + 0x90],0xa9309024 }
    /* +0xb5a621 */ __asm { MOVQ XMM5,R10 }
    /* +0xb5a626 */ __asm { PSRLQ XMM5,0x1b }
    /* +0xb5a62b */ __asm { SHR R10,0x2d }
    /* +0xb5a62f */ __asm { MOVD XMM1,R10D }
    /* +0xb5a634 */ __asm { PXOR XMM1,XMM5 }
    /* +0xb5a638 */ __asm { LEA R9,[RSP + 0xc0] }
    /* +0xb5a640 */ __asm { MOV qword ptr [RSP + 0xe0],R9 }
    /* +0xb5a648 */ __asm { MOVQ R10,XMM1 }
    /* +0xb5a64d */ __asm { MOV R9D,0x24013ea }
    /* +0xb5a653 */ __asm { IMUL EBX,R9D,-0x24fb2e7b }
    /* +0xb5a65a */ __asm { XOR EBX,R12D }
    /* +0xb5a65d */ __asm { ROR R10D,CL }
    /* +0xb5a660 */ __asm { MOV R9D,dword ptr [RSP + 0x90] }
    /* +0xb5a668 */ __asm { MOV dword ptr [RSP + 0xd0],0x30 }
    /* +0xb5a673 */ __asm { MOV qword ptr [RSP + 0xd8],0x0 }
    /* +0xb5a67f */ __asm { MOV R15D,R12D }
    /* +0xb5a682 */ __asm { OR R15D,0x1 }
    /* +0xb5a686 */ __asm { AND R10D,0x3 }
    /* +0xb5a68a */ __asm { CMP R10D,0x2 }
    /* +0xb5a68e */ __asm { JC 0x7fffa52caa7d }
    /* +0xb5a694 */ __asm { CMP R10D,0x3 }
    /* +0xb5a698 */ __asm { JNZ 0x7fffa52cab80 }
    /* +0xb5a69e */ __asm { LEA RDX,[0x7fffa47bedd8] }
    /* +0xb5a6a5 */ __asm { MOV R9,-0x149f9277e9278b98 }
    /* +0xb5a6af */ __asm { CMP RDX,R9 }
    /* +0xb5a6b2 */ __asm { JZ 0x7fffa52cbf98 }
    /* +0xb5a6b8 */ __asm { MOV R10D,0x9b49b71b }
    /* +0xb5a6be */ __asm { SUB R10D,EBX }
    /* +0xb5a6c1 */ __asm { XOR R10D,0x72e2378a }
    /* +0xb5a6c8 */ __asm { MOV ECX,R12D }
    /* +0xb5a6cb */ __asm { ROL R10D,CL }
    /* +0xb5a6ce */ __asm { MOVZX ECX,uint8_t ptr [RDX + -0x274b] }
    /* +0xb5a6d5 */ __asm { MOVZX R8D,uint8_t ptr [RDX + RCX*0x4 + -0x273b] }
    /* +0xb5a6de */ __asm { ROL R8B,0x4 }
    /* +0xb5a6e2 */ __asm { MOV uint8_t ptr [RSP + 0x90],R8B }
    /* +0xb5a6ea */ __asm { MOVZX R8D,uint8_t ptr [RDX + RCX*0x4 + -0x273a] }
    /* +0xb5a6f3 */ __asm { ROL R8B,0x4 }
    /* +0xb5a6f7 */ __asm { MOV uint8_t ptr [RSP + 0x91],R8B }
    /* +0xb5a6ff */ __asm { MOVZX R8D,uint8_t ptr [RDX + RCX*0x4 + -0x2739] }
    /* +0xb5a708 */ __asm { ROL R8B,0x4 }
    /* +0xb5a70c */ __asm { MOV uint8_t ptr [RSP + 0x92],R8B }
    /* +0xb5a714 */ __asm { MOVZX R8D,uint8_t ptr [RDX + RCX*0x4 + -0x2738] }
    /* +0xb5a71d */ __asm { ROL R8B,0x4 }
    /* +0xb5a721 */ __asm { MOV uint8_t ptr [RSP + 0x93],R8B }
    /* +0xb5a729 */ __asm { MOV R9D,0x65e8ce72 }
    /* +0xb5a72f */ __asm { XOR R9D,dword ptr [RSP + 0x90] }
    /* +0xb5a737 */ __asm { MOV ECX,dword ptr [R10] }
    /* +0xb5a73a */ __asm { BT R9D,ECX }
    /* +0xb5a73e */ __asm { JNC 0x7fffa52cafb3 }
    /* +0xb5a744 */ __asm { RDTSC }
    /* +0xb5a746 */ __asm { SHL RDX,0x20 }
    /* +0xb5a74a */ __asm { OR RDX,RAX }
    /* +0xb5a74d */ __asm { MOV R9,-0x4a9b10dd1385131b }
    /* +0xb5a757 */ __asm { IMUL R9,RDX }
    /* +0xb5a75b */ __asm { MOV R11,-0x76102c1987b0210e }
    /* +0xb5a765 */ __asm { ADD R11,R9 }
    /* +0xb5a768 */ __asm { MOV R10,R11 }
    /* +0xb5a76b */ __asm { SHR R10,0x1b }
    /* +0xb5a76f */ __asm { MOV RCX,R11 }
    /* +0xb5a772 */ __asm { SHR RCX,0x3b }
    /* +0xb5a776 */ __asm { SHR R11,0x2d }
    /* +0xb5a77a */ __asm { XOR R10D,R11D }
    /* +0xb5a77d */ __asm { ROR R10D,CL }
    /* +0xb5a780 */ __asm { MOV dword ptr [RSP + 0x90],0x851c9ec2 }
    /* +0xb5a78b */ __asm { MOV R9D,dword ptr [RSP + 0x90] }
    /* +0xb5a793 */ __asm { CMP R9D,0xda7ad99b }
    /* +0xb5a79a */ __asm { JC 0x7fffa52ca7a9 }
    /* +0xb5a79c */ __asm { TEST uint8_t ptr [RBP + -0x12fac2de],0xe3 }
    /* +0xb5a7a3 */ __asm { INC uint8_t ptr [0x7fff9e4674fd] }
    /* +0xb5a7a9 */ __asm { CMP R10D,0x1186e2a }
    /* +0xb5a7b0 */ __asm { JA 0x7fffa52caa23 }
    /* +0xb5a7b6 */ __asm { MOV R9W,0x6c7e }
    /* +0xb5a7bb */ __asm { XOR R9D,0xffffd17b }
    /* +0xb5a7c2 */ __asm { SUB R9D,R12D }
    /* +0xb5a7c5 */ __asm { MOVZX ECX,R9W }
    /* +0xb5a7c9 */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0xb5a7cd */ __asm { MOV R9D,EBX }
    /* +0xb5a7d0 */ __asm { OR R9D,0x1 }
    /* +0xb5a7d4 */ __asm { MOVD XMM5,R12D }
    /* +0xb5a7d9 */ __asm { MOV CX,0x10b0 }
    /* +0xb5a7dd */ __asm { IMUL ECX,R9D }
    /* +0xb5a7e1 */ __asm { MOVD XMM1,ECX }
    /* +0xb5a7e5 */ __asm { PADDW XMM1,XMM5 }
    /* +0xb5a7e9 */ __asm { MOVD ECX,XMM1 }
    /* +0xb5a7ed */ __asm { IMUL ECX,ECX,-0x5bdd }
    /* +0xb5a7f3 */ __asm { NOT ECX }
    /* +0xb5a7f5 */ __asm { MOVZX ECX,CX }
    /* +0xb5a7f8 */ __asm { MOV RDX,qword ptr GS:[RCX] }
    /* +0xb5a7fc */ __asm { ADD R11,qword ptr [RDX + 0x30] }
    /* +0xb5a800 */ __asm { MOV RDX,0x7b5d9ab59b3f7d23 }
    /* +0xb5a80a */ __asm { CMP R11,RDX }
    /* +0xb5a80d */ __asm { NOP }
    /* +0xb5a80e */ __asm { NOP }
    /* +0xb5a80f */ __asm { NOP }
    /* +0xb5a810 */ __asm { NOP }
    /* +0xb5a811 */ __asm { NOP }
    /* +0xb5a812 */ __asm { MOV R11,-0x57061a5a53b64ff2 }
    /* +0xb5a81c */ __asm { MOV RCX,RBX }
    /* +0xb5a81f */ __asm { SUB RCX,R11 }
    /* +0xb5a822 */ __asm { ADD RCX,-0x5b8c9d35 }
    /* +0xb5a829 */ __asm { LEA RDX,[0x7fffa47b626f] }
    /* +0xb5a830 */ __asm { CMP RDX,RCX }
    /* +0xb5a833 */ __asm { JNZ 0x7fffa52ca844 }
    /* +0xb5a835 */ __asm { TEST uint8_t ptr [RAX],BH }
    /* +0xb5a837 */ __asm { JNO 0x7fffa52ca83e }
    /* +0xb5a839 */ __asm { ROR CH,0xc4 }
    /* +0xb5a83c */ __asm { AND EDX,EBP }
    /* +0xb5a83e */ __asm { STC }
    /* +0xb5a83f */ __asm { ADC AL,0x7 }
    /* +0xb5a841 */ __asm { RET }
    /* +0xb5a844 */ __asm { IMUL R11,RDX,0x64d1 }
    /* +0xb5a84b */ __asm { MOV ECX,EBX }
    /* +0xb5a84d */ __asm { OR ECX,0x1 }
    /* +0xb5a850 */ __asm { MOV R10D,0xdf0c3119 }
    /* +0xb5a856 */ __asm { IMUL R10D,ECX }
    /* +0xb5a85a */ __asm { SUB R10D,R12D }
    /* +0xb5a85d */ __asm { ROR R10D,0x1 }
    /* +0xb5a860 */ __asm { ADD RDX,0x64d1 }
    /* +0xb5a867 */ __asm { MOV ECX,0x3f1aeb2a }
    /* +0xb5a86c */ __asm { XOR ECX,EBX }
    /* +0xb5a86e */ __asm { IMUL ECX,ECX,-0x5c6d99d }
    /* +0xb5a874 */ __asm { ADD ECX,R12D }
    /* +0xb5a877 */ __asm { CMP RCX,R10 }
    /* +0xb5a87a */ __asm { CMOVZ RDX,R11 }
    /* +0xb5a87e */ __asm { MOVZX ECX,uint8_t ptr [RDX + 0x9] }
    /* +0xb5a882 */ __asm { MOVZX R10D,uint8_t ptr [RDX + RCX*0x4 + 0xf] }
    /* +0xb5a888 */ __asm { NOT R10B }
    /* +0xb5a88b */ __asm { ROL R10B,0x5 }
    /* +0xb5a88f */ __asm { MOV uint8_t ptr [RSP + 0x90],R10B }
    /* +0xb5a897 */ __asm { MOVZX R10D,uint8_t ptr [RDX + RCX*0x4 + 0x10] }
    /* +0xb5a89d */ __asm { NOT R10B }
    /* +0xb5a8a0 */ __asm { ROL R10B,0x5 }
    /* +0xb5a8a4 */ __asm { MOV uint8_t ptr [RSP + 0x91],R10B }
    /* +0xb5a8ac */ __asm { MOVZX R10D,uint8_t ptr [RDX + RCX*0x4 + 0x11] }
    /* +0xb5a8b2 */ __asm { NOT R10B }
    /* +0xb5a8b5 */ __asm { ROL R10B,0x5 }
    /* +0xb5a8b9 */ __asm { MOV uint8_t ptr [RSP + 0x92],R10B }
    /* +0xb5a8c1 */ __asm { MOVZX R10D,uint8_t ptr [RDX + RCX*0x4 + 0x12] }
    /* +0xb5a8c7 */ __asm { NOT R10B }
    /* +0xb5a8ca */ __asm { ROL R10B,0x5 }
    /* +0xb5a8ce */ __asm { MOV uint8_t ptr [RSP + 0x93],R10B }
    /* +0xb5a8d6 */ __asm { MOV ECX,0x9102c3cc }
    /* +0xb5a8db */ __asm { XOR ECX,dword ptr [RSP + 0x90] }
    /* +0xb5a8e2 */ __asm { BT ECX,ECX }
    /* +0xb5a8e5 */ __asm { JNC 0x7fffa52caa23 }
    /* +0xb5a8eb */ __asm { MOV R10D,0x51cc37fc }
    /* +0xb5a8f1 */ __asm { PXOR XMM5,XMM5 }
    /* +0xb5a8f5 */ __asm { ADD R10D,0x18ab2e64 }
    /* +0xb5a8fc */ __asm { IMUL R10D,R15D }
    /* +0xb5a900 */ __asm { MOV ECX,EBX }
    /* +0xb5a902 */ __asm { ROL R10D,CL }
    /* +0xb5a905 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM5 }
    /* +0xb5a90e */ __asm { PUSHFQ }
    /* +0xb5a90f */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb5a917 */ __asm { POPFQ }
    /* +0xb5a918 */ __asm { MOV dword ptr [RSP + 0xb0],R10D }
    /* +0xb5a920 */ __asm { MOV ECX,dword ptr [RSP + 0xb0] }
    /* +0xb5a927 */ __asm { MOV dword ptr [RSP + 0x90],0x0 }
    /* +0xb5a932 */ __asm { MOV dword ptr [RSP + 0xb0],0xc3be0d27 }
    /* +0xb5a93d */ __asm { MOV ECX,dword ptr [RSP + 0xb0] }
    /* +0xb5a944 */ __asm { CMP ECX,0xd724b10e }
    /* +0xb5a94a */ __asm { JNC 0x7fffa52cd1da }
    /* +0xb5a950 */ __asm { PUSHFQ }
    /* +0xb5a951 */ __asm { POP RAX }
    /* +0xb5a952 */ __asm { TEST EAX,0x100 }
    /* +0xb5a957 */ __asm { NOP }
    /* +0xb5a958 */ __asm { NOP }
    /* +0xb5a959 */ __asm { NOP }
    /* +0xb5a95a */ __asm { NOP }
    /* +0xb5a95b */ __asm { NOP }
    /* +0xb5a95c */ __asm { MOV dword ptr [RSP + 0xb0],0x3c8945f1 }
    /* +0xb5a967 */ __asm { MOV ECX,dword ptr [RSP + 0xb0] }
    /* +0xb5a96e */ __asm { TEST ECX,ECX }
    /* +0xb5a970 */ __asm { NOP }
    /* +0xb5a971 */ __asm { NOP }
    /* +0xb5a972 */ __asm { NOP }
    /* +0xb5a973 */ __asm { NOP }
    /* +0xb5a974 */ __asm { NOP }
    /* +0xb5a975 */ __asm { NOP }
    /* +0xb5a976 */ __asm { NOP }
    /* +0xb5a977 */ __asm { NOP }
    /* +0xb5a978 */ __asm { NOP }
    /* +0xb5a979 */ __asm { NOP }
    /* +0xb5a97a */ __asm { NOP }
    /* +0xb5a97b */ __asm { NOP }
    /* +0xb5a97c */ __asm { NOP }
    /* +0xb5a97d */ __asm { NOP }
    /* +0xb5a97e */ __asm { LEA R8,[0x7fffa47b69b5] }
    /* +0xb5a985 */ __asm { MOV R11,0x6395bd57bc6a06d9 }
    /* +0xb5a98f */ __asm { CMP R8,R11 }
    /* +0xb5a992 */ __asm { JZ 0x7fffa52cd1e2 }
    /* +0xb5a998 */ __asm { MOV R11W,0xcd23 }
    /* +0xb5a99d */ __asm { MOV RDX,0x0 }
    /* +0xb5a9a4 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xb5a9ab */ __asm { NOP }
    /* +0xb5a9ac */ __asm { MOV CX,0x972d }
    /* +0xb5a9b0 */ __asm { ADD ECX,0x1104 }
    /* +0xb5a9b6 */ __asm { IMUL R9D,ECX }
    /* +0xb5a9ba */ __asm { MOV ECX,R12D }
    /* +0xb5a9bd */ __asm { ROL R9W,CL }
    /* +0xb5a9c1 */ __asm { MOVD XMM5,EBX }
    /* +0xb5a9c5 */ __asm { ADD R9D,0xffffa808 }
    /* +0xb5a9cc */ __asm { MOVZX EDX,R9W }
    /* +0xb5a9d0 */ __asm { MOV qword ptr [RSP + 0xb0],R10 }
    /* +0xb5a9d8 */ __asm { MOV R9D,0xbcaa0313 }
    /* +0xb5a9de */ __asm { MOVD XMM1,R9D }
    /* +0xb5a9e3 */ __asm { MOVD XMM4,EBX }
    /* +0xb5a9e7 */ __asm { PSUBD XMM4,XMM1 }
    /* +0xb5a9eb */ __asm { MOVD R9D,XMM4 }
    /* +0xb5a9f0 */ __asm { ADD R9D,0xf27e1381 }
    /* +0xb5a9f7 */ __asm { MOVSXD R10,R9D }
    /* +0xb5a9fa */ __asm { SUB R11D,R12D }
    /* +0xb5a9fd */ __asm { MOVD XMM1,R11D }
    /* +0xb5aa02 */ __asm { PXOR XMM1,XMM5 }
    /* +0xb5aa06 */ __asm { MOVD R9D,XMM1 }
    /* +0xb5aa0b */ __asm { NOT R9D }
    /* +0xb5aa0e */ __asm { MOVZX R9D,R9W }
    /* +0xb5aa12 */ __asm { MOV EAX,dword ptr [R8 + 0x6623] }
    /* +0xb5aa19 */ __asm { LEA R8,[RSP + 0x90] }
    /* +0xb5aa21 */ __asm { SYSCALL }
    /* +0xb5aa23 */ __asm { MOV R9,0x5e581ee5e101f5ee }
    /* +0xb5aa2d */ __asm { MOV R11,-0xcaee47d2 }
    /* +0xb5aa37 */ __asm { ADD R11,R9 }
    /* +0xb5aa3a */ __asm { ADD R11,RBX }
    /* +0xb5aa3d */ __asm { LEA RDX,[0x7fffa478c536] }
    /* +0xb5aa44 */ __asm { MOV RCX,R12 }
    /* +0xb5aa47 */ __asm { OR RCX,0x1 }
    /* +0xb5aa4b */ __asm { IMUL RCX,R11 }
    /* +0xb5aa4f */ __asm { CMP RDX,RCX }
    /* +0xb5aa52 */ __asm { NOP }
    /* +0xb5aa53 */ __asm { NOP }
    /* +0xb5aa54 */ __asm { NOP }
    /* +0xb5aa55 */ __asm { NOP }
    /* +0xb5aa56 */ __asm { NOP }
    /* +0xb5aa57 */ __asm { MOV CX,0x3296 }
    /* +0xb5aa5b */ __asm { MOV qword ptr [RSP + 0x90],R10 }
    /* +0xb5aa63 */ __asm { MOV EAX,dword ptr [RDX + -0x7e8e] }
    /* +0xb5aa69 */ __asm { LEA R9D,[R12 + RCX*0x1] }
    /* +0xb5aa6d */ __asm { MOV ECX,0xffffef3c }
    /* +0xb5aa72 */ __asm { SUB ECX,R9D }
    /* +0xb5aa75 */ __asm { MOVZX EDX,CX }
    /* +0xb5aa78 */ __asm { JMP 0x7fffa52cb005 }
    /* +0xb5aa7d */ __asm { CMP R10D,0x1 }
    /* +0xb5aa81 */ __asm { JNZ 0x7fffa52cae53 }
    /* +0xb5aa87 */ __asm { MOV EDX,0xf4a16634 }
    /* +0xb5aa8c */ __asm { MOV R9,-0x7a98c91554b36ed4 }
    /* +0xb5aa96 */ __asm { CMP RDX,R9 }
    /* +0xb5aa99 */ __asm { NOP }
    /* +0xb5aa9a */ __asm { NOP }
    /* +0xb5aa9b */ __asm { NOP }
    /* +0xb5aa9c */ __asm { NOP }
    /* +0xb5aa9d */ __asm { NOP }
    /* +0xb5aa9e */ __asm { NOP }
    /* +0xb5aa9f */ __asm { NOP }
    /* +0xb5aaa0 */ __asm { NOP }
    /* +0xb5aaa1 */ __asm { NOP }
    /* +0xb5aaa2 */ __asm { NOP }
    /* +0xb5aaa3 */ __asm { NOP }
    /* +0xb5aaa4 */ __asm { NOP }
    /* +0xb5aaa5 */ __asm { NOP }
    /* +0xb5aaa6 */ __asm { MOV R9,qword ptr [RDX + -0x74a3662c] }
    /* +0xb5aaad */ __asm { MOV R11,0x44d21e2c20460abc }
    /* +0xb5aab7 */ __asm { MOV RAX,R9 }
    /* +0xb5aaba */ __asm { MUL R11 }
    /* +0xb5aabd */ __asm { MOV R11,RDX }
    /* +0xb5aac0 */ __asm { MOV EDX,0x1475454 }
    /* +0xb5aac5 */ __asm { MOV RAX,R9 }
    /* +0xb5aac8 */ __asm { MUL RDX }
    /* +0xb5aacb */ __asm { ADD RAX,R11 }
    /* +0xb5aace */ __asm { ADC RDX,0x0 }
    /* +0xb5aad2 */ __asm { TEST DL,0x1 }
    /* +0xb5aad5 */ __asm { JNZ 0x7fffa52caf30 }
    /* +0xb5aadb */ __asm { MOV RCX,R12 }
    /* +0xb5aade */ __asm { OR RCX,0x1 }
    /* +0xb5aae2 */ __asm { MOV R10,0x260aa9f6c57732c4 }
    /* +0xb5aaec */ __asm { LEA R9,[RBX + R10*0x1] }
    /* +0xb5aaf0 */ __asm { ADD R9,-0x173f3f64 }
    /* +0xb5aaf7 */ __asm { MOVQ XMM5,R9 }
    /* +0xb5aafc */ __asm { LEA RDX,[0x7fffa47b96f8] }
    /* +0xb5ab03 */ __asm { MOV R10,RDX }
    /* +0xb5ab06 */ __asm { ADD R10,-0x5e398d12 }
    /* +0xb5ab0d */ __asm { IMUL R10,RCX }
    /* +0xb5ab11 */ __asm { MOVQ XMM1,R10 }
    /* +0xb5ab16 */ __asm { MOVDQA XMM4,XMM5 }
    /* +0xb5ab1a */ __asm { PSRLQ XMM4,0x20 }
    /* +0xb5ab1f */ __asm { PMULUDQ XMM4,XMM1 }
    /* +0xb5ab23 */ __asm { MOVDQA XMM0,XMM1 }
    /* +0xb5ab27 */ __asm { PSRLQ XMM0,0x20 }
    /* +0xb5ab2c */ __asm { PMULUDQ XMM0,XMM5 }
    /* +0xb5ab30 */ __asm { PADDQ XMM0,XMM4 }
    /* +0xb5ab34 */ __asm { PSLLQ XMM0,0x20 }
    /* +0xb5ab39 */ __asm { PMULUDQ XMM1,XMM5 }
    /* +0xb5ab3d */ __asm { PADDQ XMM1,XMM0 }
    /* +0xb5ab41 */ __asm { MOVQ R9,XMM1 }
    /* +0xb5ab46 */ __asm { MOV R11,0x33513c0746a74a5e }
    /* +0xb5ab50 */ __asm { CMP R9,R11 }
    /* +0xb5ab53 */ __asm { JZ 0x7fffa52cbfb5 }
    /* +0xb5ab59 */ __asm { MOV R9W,0xae36 }
    /* +0xb5ab5e */ __asm { SUB R9D,EBX }
    /* +0xb5ab61 */ __asm { MOV qword ptr [RSP + 0x90],R10 }
    /* +0xb5ab69 */ __asm { MOV EAX,dword ptr [RDX + 0x38f8] }
    /* +0xb5ab6f */ __asm { XOR R9D,R12D }
    /* +0xb5ab72 */ __asm { ROL R9W,0x7 }
    /* +0xb5ab77 */ __asm { MOVZX EDX,R9W }
    /* +0xb5ab7b */ __asm { JMP 0x7fffa52cb005 }
    /* +0xb5ab80 */ __asm { RDTSC }
    /* +0xb5ab82 */ __asm { SHL RDX,0x20 }
    /* +0xb5ab86 */ __asm { OR RDX,RAX }
    /* +0xb5ab89 */ __asm { MOV R9,-0x5a46117eacb056b3 }
}


// ============================================================================
// Function : FUN_7fffa52cd2c0  |  RVA: 0xb5d2c0  |  Size: 1352 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52cd2c0(void)

{
  char *pcVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  code *pcVar7;
  uint32_t *puVar8;
  uint32_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint8_t auVar13 [16];
  char cVar14;
  char cVar17;
  char cVar18;
  uint8_t bVar19;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t *puStack_90;
  uint8_t auStack_88 [28];
  uint32_t uStack_6c;
  
  lRam00007fffa47bd120 = 0;
  puRam00007fffa47bd118 = &UNK_7fffa56ee720;
  uRam00007fffa47bd108 = 0x3f;
  uRam00007fffa47bd110 = 1;
  auRam00007fffa47bd128 = (uint8_t  [16])0x0;
  lVar10 = 0;
  do {
    auVar13 = ZEXT216(*(uint16_t *)(&UNK_7fffa56ec3b8 + lVar10)) * ZEXT816(0x9e3779b97f4a7c15);
    uVar12 = auVar13._8_8_ ^ auVar13._0_8_;
    uVar4 = uVar12 >> ((uint8_t)uRam00007fffa47bd108 & 0x3f);
    uStack_6c = *(uint32_t *)(&UNK_7fffa5830f20 + (uVar12 & 0xff) * 4);
    uVar11 = 0;
    uVar6 = uVar4;
    do {
      pcVar1 = puRam00007fffa47bd118 + uVar6 * 0x10;
      cVar14 = (char)uStack_6c;
      auVar13[0] = -(*pcVar1 == cVar14);
      cVar17 = (char)((uint32_t)uStack_6c >> 8);
      auVar13[1] = -(pcVar1[1] == cVar17);
      cVar18 = (char)((uint32_t)uStack_6c >> 0x10);
      auVar13[2] = -(pcVar1[2] == cVar18);
      bVar19 = (uint8_t)((uint32_t)uStack_6c >> 0x18);
      auVar13[3] = -(pcVar1[3] == bVar19);
      auVar13[4] = -(pcVar1[4] == cVar14);
      auVar13[5] = -(pcVar1[5] == cVar17);
      auVar13[6] = -(pcVar1[6] == cVar18);
      auVar13[7] = -(pcVar1[7] == bVar19);
      auVar13[8] = -(pcVar1[8] == cVar14);
      auVar13[9] = -(pcVar1[9] == cVar17);
      auVar13[10] = -(pcVar1[10] == cVar18);
      auVar13[0xb] = -(pcVar1[0xb] == bVar19);
      auVar13[0xc] = -(pcVar1[0xc] == cVar14);
      auVar13[0xd] = -(pcVar1[0xd] == cVar17);
      auVar13[0xe] = -(pcVar1[0xe] == cVar18);
      auVar13[0xf] = -(pcVar1[0xf] == bVar19);
      uVar9 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar13 >> 7,0) & 1) |
                             (uint16_t)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                             (uint16_t)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                             (uint16_t)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                             (uint16_t)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                             (uint16_t)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                             (uint16_t)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                             (uint16_t)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                             (uint16_t)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                             (uint16_t)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                             (uint16_t)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                             (uint16_t)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                             (uint16_t)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                             (uint16_t)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                            (uint16_t)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe);
      if (uVar9 != 0) {
        do {
          uVar2 = 0;
          for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          if (*(uint16_t *)(&UNK_7fffa56ec3b8 + lVar10) ==
              **(uint16_t **)(lRam00007fffa47bd120 + uVar6 * 0x78 + (uint64_t)uVar2 * 8))
          goto LAB_7fffa52cd570;
          uVar9 = uVar9 - 1 & uVar9;
        } while (uVar9 != 0);
      }
      if (((&UNK_7fffa586f028)[(uint32_t)uVar12 & 7] & pcVar1[0xf]) == 0) break;
      lVar5 = uVar6 + uVar11;
      uVar11 = uVar11 + 1;
      uVar6 = lVar5 + 1U & uRam00007fffa47bd110;
    } while (uVar11 <= uRam00007fffa47bd110);
    if (auRam00007fffa47bd128._8_8_ < auRam00007fffa47bd128._0_8_) {
      puStack_90 = puRam00007fffa47bd118 + uVar4 * 0x10;
      pcVar1 = puRam00007fffa47bd118 + uVar4 * 0x10;
      auVar15[0] = -(*pcVar1 == '\0');
      auVar15[1] = -(pcVar1[1] == '\0');
      auVar15[2] = -(pcVar1[2] == '\0');
      auVar15[3] = -(pcVar1[3] == '\0');
      auVar15[4] = -(pcVar1[4] == '\0');
      auVar15[5] = -(pcVar1[5] == '\0');
      auVar15[6] = -(pcVar1[6] == '\0');
      auVar15[7] = -(pcVar1[7] == '\0');
      auVar15[8] = -(pcVar1[8] == '\0');
      auVar15[9] = -(pcVar1[9] == '\0');
      auVar15[10] = -(pcVar1[10] == '\0');
      auVar15[0xb] = -(pcVar1[0xb] == '\0');
      auVar15[0xc] = -(pcVar1[0xc] == '\0');
      auVar15[0xd] = -(pcVar1[0xd] == '\0');
      auVar15[0xe] = -(pcVar1[0xe] == '\0');
      auVar15[0xf] = -(pcVar1[0xf] == '\0');
      uVar9 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar15 >> 7,0) & 1) |
                             (uint16_t)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                             (uint16_t)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                             (uint16_t)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                             (uint16_t)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                             (uint16_t)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                             (uint16_t)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                             (uint16_t)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                             (uint16_t)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                             (uint16_t)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                             (uint16_t)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                             (uint16_t)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                             (uint16_t)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                             (uint16_t)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                            (uint16_t)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe);
      if (uVar9 == 0) {
        lVar5 = 1;
        do {
          puStack_90[0xf] = puStack_90[0xf] | '\x01' << ((uint8_t)uVar12 & 7);
          uVar4 = uVar4 + lVar5 & uRam00007fffa47bd110;
          puStack_90 = puRam00007fffa47bd118 + uVar4 * 0x10;
          pcVar1 = puRam00007fffa47bd118 + uVar4 * 0x10;
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
          uVar9 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar16 >> 7,0) & 1) |
                                 (uint16_t)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
                                (uint16_t)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe);
          lVar5 = lVar5 + 1;
        } while (uVar9 == 0);
      }
      uVar2 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      lVar5 = uVar4 * 0x78 + lRam00007fffa47bd120;
      pcVar7 = FUN_7fffa526aab0;
      FUN_7fffa526aab0();
      puVar8 = (uint32_t *)
               (((int64_t)pcVar7 << 0x2c | (uint64_t)pcVar7 >> 0x14) -
               (((uint64_t)pcVar7 >> 0x14) << 0x36));
      *(uint32_t **)(lVar5 + (uint64_t)uVar2 * 8) = puVar8;
      *puVar8 = *(uint32_t *)(&UNK_7fffa56ec3b8 + lVar10);
      puStack_90[uVar2] = (char)uStack_6c;
      auRam00007fffa47bd128._8_8_ = auRam00007fffa47bd128._8_8_ + 1;
    }
    else {
      uVar9 = *(uint32_t *)(&UNK_7fffa56ec3b8 + lVar10);
      uVar6 = (uVar12 << 0x32 | uVar12 >> 0xe) ^ uVar12 ^ (uVar12 << 0x22 | uVar12 >> 0x1e);
      uVar9 = ((uVar9 << 0x10 | uVar9 >> 0x10) ^ (uVar9 << 0x1d | uVar9 >> 3) ^ uVar9) + 0xa1aed1c2;
      FUN_7fffa5669010(auStack_88,
                       (uVar6 << 0x33 | uVar6 >> 0xd) ^ (uVar6 << 0x11 | uVar6 >> 0x2f) ^
                       (uVar6 << 0x22 | uVar6 >> 0x1e),FUN_7fffa5669010,
                       (uVar9 * 0x20000 | uVar9 >> 0xf) ^ (uVar9 * 8 | uVar9 >> 0x1d) ^ uVar9);
    }
LAB_7fffa52cd570:
    lVar10 = lVar10 + 4;
    if (lVar10 == 0x20) {
      return;
    }
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa52cd810  |  RVA: 0xb5d810  |  Size: 16 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa52cd810(void)

{
  uint32_t in_EAX;
  uint64_t uStack_8;
  
  uStack_8 = CONCAT44(0x20909601,in_EAX);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa52cd820  |  RVA: 0xb5d820  |  Size: 6774 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa52cd99b) */
/* WARNING: Removing unreachable block (ram,0x7fffa52cda84) */
/* WARNING: Removing unreachable block (ram,0x7fffa52cde50) */

void FUN_7fffa52cd820(void)

{
  uint16_t uVar1;
  short sVar2;
  uint16_t uVar3;
  short sVar4;
  uint8_t bVar5;
  int64_t lVar6;
  uint8_t (*pauVar7) [16];
  int64_t lVar8;
  uint16_t uVar9;
  uint32_t uVar10;
  uint8_t bVar11;
  uint8_t bVar12;
  short sVar13;
  uint32_t uVar14;
  uint16_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint8_t bVar18;
  int64_t lVar19;
  uint8_t bVar20;
  uint32_t uVar21;
  int iVar22;
  int64_t lVar23;
  int64_t lVar24;
  uint8_t bVar25;
  uint32_t uVar26;
  uint64_t uStack_60;
  
  bRam00007fffa478442e = 0;
  uRam00007fffa4784441 = 0;
  uRam00007fffa4784449 = 0;
  uRam00007fffa4784431 = 0;
  uRam00007fffa4784439 = 0;
  uRam00007fffa4784451 = 0;
  _uRam00007fffa4784460 = 0;
  uVar17 = rdtsc();
  lVar8 = (uVar17 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar17)) * 0xd98212eadb5070c + 0xb;
  lVar6 = 2;
  do {
    lVar8 = lVar8 * 0xd98212eadb5070c + 0xb;
    *(char *)(lVar6 + 0x7fffa478441d) = (char)((uint64_t)(lVar8 * 0x2eadb5070c) >> 0x20);
    *(char *)(lVar6 + 0x7fffa478441c) = (char)((uint64_t)lVar8 >> 0x20);
    lVar8 = lVar8 * 0x24fdcbd92f29a890 + -0x6a7692fe8938b271;
    *(char *)(lVar6 + 0x7fffa478441e) = (char)((uint64_t)lVar8 >> 0x20);
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x4d);
  uVar17 = (uint64_t)((uint32_t)bRam00007fffa478442e * 0x33333334 + 0x33333334) * 5;
  lVar6 = (uVar17 >> 0x20) * 8;
  *(uint8_t *)(lVar6 + 0x7fffa4784431) =
       ~(uint8_t)uRam00007fffa4784460 << 5 | (uint8_t)~(uint8_t)uRam00007fffa4784460 >> 3;
  *(uint8_t *)(lVar6 + 0x7fffa4784432) =
       ~uRam00007fffa4784460._1_1_ << 5 | (uint8_t)~uRam00007fffa4784460._1_1_ >> 3;
  *(uint8_t *)(lVar6 + 0x7fffa4784433) = ~bRam00007fffa4784462 << 5 | (uint8_t)~bRam00007fffa4784462 >> 3;
  *(uint8_t *)(lVar6 + 0x7fffa4784434) = ~bRam00007fffa4784463 << 5 | (uint8_t)~bRam00007fffa4784463 >> 3;
  *(uint8_t *)(lVar6 + 0x7fffa4784435) = ~bRam00007fffa4784464 << 5 | (uint8_t)~bRam00007fffa4784464 >> 3;
  *(uint8_t *)(lVar6 + 0x7fffa4784436) = ~bRam00007fffa4784465 << 5 | (uint8_t)~bRam00007fffa4784465 >> 3;
  *(uint8_t *)(lVar6 + 0x7fffa4784437) = ~bRam00007fffa4784466 << 5 | (uint8_t)~bRam00007fffa4784466 >> 3;
  *(uint8_t *)(lVar6 + 0x7fffa4784438) = ~bRam00007fffa4784467 << 5 | (uint8_t)~bRam00007fffa4784467 >> 3;
  bRam00007fffa478442e = (uint8_t)(uVar17 >> 0x20);
  bRam00007fffa47bbcfa = 0;
  auRam00007fffa47bbd12 = (uint8_t  [16])0x0;
  auRam00007fffa47bbd02 = (uint8_t  [16])0x0;
  uVar17 = rdtsc();
  lVar6 = (uVar17 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar17)) * 0x7709e2bd2375537 + 1;
  uVar17 = 0;
  while( true ) {
    lVar8 = lVar6 * 0x7709e2bd2375537 + 1;
    lVar23 = lVar8 * 0x7709e2bd2375537 + 1;
    lVar24 = lVar23 * 0x7709e2bd2375537 + 1;
    lVar6 = lVar24 * 0x7709e2bd2375537 + 1;
    *(char *)(uVar17 + 0x7fffa47bbcf3) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(uVar17 + 0x7fffa47bbcf2) = (char)((uint64_t)lVar24 >> 0x20);
    *(char *)((uVar17 | 1) + 0x7fffa47bbcf0) = (char)((uint64_t)lVar23 >> 0x20);
    *(char *)(uVar17 + 0x7fffa47bbcf0) = (char)((uint64_t)lVar8 >> 0x20);
    if (uVar17 == 0x30) break;
    uVar17 = uVar17 + 4;
  }
  uVar17 = (uint64_t)((uint32_t)bRam00007fffa47bbcfa * 0x55555556 + 0x55555556) * 3;
  *(uint64_t *)((uVar17 >> 0x20) * 8 + 0x7fffa47bbd02) = ~auRam00007fffa47bbd12._8_8_;
  bRam00007fffa47bbcfa = (uint8_t)(uVar17 >> 0x20);
  bRam00007fffa47bf77a = 0;
  uRam00007fffa47bf78c = 0;
  uRam00007fffa47bf788 = 0;
  uRam00007fffa47bf792 = 0;
  uVar17 = rdtsc();
  lVar8 = (uVar17 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar17)) * 0x67a2edcd7a842a4;
  lVar6 = 0;
  do {
    lVar23 = lVar8 * 0x73b4b5ae40;
    lVar24 = lVar8 * 0x1670098f910;
    lVar19 = lVar8 * 0xdcd7a842a4;
    lVar8 = lVar8 * -0x662639b74aafdf00;
    *(char *)(lVar6 + 0x7fffa47bf771) = (char)((uint64_t)lVar19 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bf772) = (char)((uint64_t)lVar24 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bf774) = (char)((uint64_t)lVar8 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bf773) = (char)((uint64_t)lVar23 >> 0x20);
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x2c);
  uVar17 = (uint64_t)((uint32_t)bRam00007fffa47bf77a * 0x24924925 + 0x24924925) * 7;
  *(uint8_t *)((uVar17 >> 0x20) + 0x7fffa47bf788) = 0xff;
  bRam00007fffa4784c82 = 0;
  bRam00007fffa47bf77a = (uint8_t)(uVar17 >> 0x20);
  auRam00007fffa4784c8a = (uint8_t  [16])0x0;
  uRam00007fffa4784c9a = 0;
  _uRam00007fffa4784ca5 = 0;
  uVar17 = rdtsc();
  lVar8 = (uVar17 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar17)) * 0x5387e163fb6279a;
  lVar6 = 3;
  while( true ) {
    lVar8 = lVar8 * 0x5387e163fb6279a + 0x5387e163fb6279a;
    *(char *)(lVar6 + 0x7fffa4784c71) = (char)((uint64_t)lVar8 >> 0x20);
    if (lVar6 == 0x37) break;
    lVar8 = lVar8 * 0x5387e163fb6279a + 0x5387e163fb6279a;
    *(char *)(lVar6 + 0x7fffa4784c72) = (char)((uint64_t)lVar8 >> 0x20);
    uVar17 = lVar8 * 0x5387e163fb6279a + 0x5387e163fb6279a;
    lVar8 = (uVar17 & 0xffffffff) * 0x3fb6279a +
            ((uVar17 >> 0x20) * 0x3fb6279a + (uVar17 & 0xffffffff) * 0x5387e16 << 0x20) +
            0x5387e163fb6279a;
    *(char *)(lVar6 + 0x7fffa4784c74) = (char)((uint64_t)lVar8 >> 0x20);
    *(char *)(lVar6 + 0x7fffa4784c73) = (char)(uVar17 >> 0x20);
    lVar6 = lVar6 + 4;
  }
  uVar17 = (uint64_t)((uint32_t)bRam00007fffa4784c82 * 0x33333334 + 0x33333334) * 5;
  uVar16 = uVar17 >> 0x20;
  *(uint8_t *)(uVar16 * 4 + 0x7fffa4784c8a) = (uint8_t)uRam00007fffa4784ca5;
  *(uint8_t *)(uVar16 * 4 + 0x7fffa4784c8b) = uRam00007fffa4784ca5._1_1_;
  *(uint8_t *)(uVar16 * 4 + 0x7fffa4784c8c) = uRam00007fffa4784ca7;
  *(uint8_t *)(uVar16 * 4 + 0x7fffa4784c8d) = uRam00007fffa4784ca8;
  uRam00007fffa47bab17 = 0;
  bRam00007fffa4784c82 = (uint8_t)(uVar17 >> 0x20);
  auRam00007fffa47bab37 = (uint8_t  [16])0x0;
  auRam00007fffa47bab27 = (uint8_t  [16])0x0;
  uRam00007fffa47bab47 = 0;
  uRam00007fffa47bab5b = 0;
  uVar17 = rdtsc();
  lVar8 = (uVar17 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar17)) * 0xd54d5871188a7a3;
  uVar17 = 0xffffffffffffffff;
  lVar6 = 0;
  while( true ) {
    *(char *)(lVar6 + 0x7fffa47bab0a) = (char)((uint64_t)(lVar8 * 0x567e0f71fb) >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bab09) = (char)((uint64_t)(lVar8 * 0x2030f611c9) >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bab08) = (char)((uint64_t)(lVar8 * 0x871188a7a3) >> 0x20);
    if ((uVar17 << 0x2d | uVar17 >> 0x13) == 0xfff4ffffffffffff) break;
    lVar8 = lVar8 * -0x5df5348e7077b02f;
    *(char *)(lVar6 + 0x7fffa47bab0b) = (char)((uint64_t)lVar8 >> 0x20);
    lVar6 = lVar6 + 4;
    uVar17 = uVar17 - 4;
  }
  uVar10 = (uint32_t)lVar6;
  bVar5 = (uint8_t)lVar6;
  sVar2 = (short)(lVar6 + 1);
  lVar8 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)
                           (short)((0x2ecc << (bVar5 & 0xf) | 0x2eccU >> 0x10 - (bVar5 & 0xf)) ^
                                  0x7223) + 0x7fffa47bed0a) * 0x33333334 + 0x33333334) * 5;
  *(uint64_t *)
   ((uint64_t)(uint32_t)((int)((uint64_t)lVar8 >> 0x20) << 3) +
   (int64_t)(short)((sVar2 * -0x3e50 | (uint16_t)(sVar2 * -0x7ca) >> 0xd) + 0xa89e) + 0x7fffa47bac57)
       = 0;
  uVar15 = sVar2 * 0x64e0 + 0x1efa;
  *(uint8_t *)((int64_t)(short)(uVar15 * 8 | uVar15 >> 0xd) + 0x7fffa47c700d) =
       ~((uint8_t)(0x57 - bVar5) >> 2 | 0xc0);
  lVar23 = (int64_t)(short)(0xbcb6U >> (bVar5 & 0xf) | -0x434a << 0x10 - (bVar5 & 0xf));
  uVar15 = (uint16_t)lVar6;
  *(char *)((int64_t)
            (int)((0x7518293dU >> (bVar5 & 0x1f) | 0x7518293d << 0x20 - (bVar5 & 0x1f)) * 0x78f7883
                 + -0x39453a0c) + 0x7fffa47c9a44) = (char)((uint64_t)lVar8 >> 0x20);
  *(uint8_t (*) [16])(lVar23 + 0x7fffa47c4038) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar23 + 0x7fffa47c4028) = (uint8_t  [16])0x0;
  *(uint64_t *)((int64_t)(short)(0xd4c6 - uVar15 ^ 0x7223) + 0x7fffa47c50c3) =
       (uint64_t)((uVar10 - 0x1379) * 0x1b047223 + 0x4f83 & 0xffff);
  lVar8 = rdtsc();
  lVar8 = lVar8 * 0x66ffc1f2b5176c6;
  for (lVar23 = 3;
      *(char *)(lVar23 + (int64_t)
                         (int)((~(uVar10 ^ 0x81b05554) << 4 | ~(uVar10 ^ 0x81b05554) >> 0x1c) +
                              0x1b047223) + 0x7fffa47cd573) =
           (char)((uint64_t)(lVar8 * 0x1f2b5176c6) >> 0x20), lVar23 != 0x4f; lVar23 = lVar23 + 4) {
    *(char *)(lVar23 + ((int64_t)(short)(uVar15 + 0xc69) ^ 0xfffffffffffff9aaU) + 0x7fffa47c0164) =
         (char)((uint64_t)((lVar6 + 0xaab96e3980) * lVar8) >> 0x20);
    uVar14 = ~((uVar10 | 1) * 0x34da9b93);
    *(char *)(lVar23 + (int64_t)(int)(uVar14 << 3 | uVar14 >> 0x1d) + 0x7fffa47ca7aa) =
         (char)((uint64_t)(lVar8 * 0xc6e4672124) >> 0x20);
    lVar8 = lVar8 * -0x7acfc7bc30bdb2f0;
    *(char *)(lVar23 + (int64_t)(short)(-0x632d << (bVar5 & 0xf) | 0x9cd3U >> 0x10 - (bVar5 & 0xf))
                       + 0x7fffa47c2334) = (char)((uint64_t)lVar8 >> 0x20);
  }
  iVar22 = (int)(lVar6 + 1);
  bVar18 = *(char *)((int64_t)(iVar22 * -0x3f47eaac) + 0x7fffa47c8caa) + 1U & 3;
  *(uint64_t *)((uint64_t)bVar18 * 8 + 0x7fffa47bf6e4) =
       *(uint64_t *)
        ((int64_t)(short)~(0x2022 << (bVar5 & 0xf) | 0x2022U >> 0x10 - (bVar5 & 0xf)) +
        0x7fffa47c1931);
  *(uint8_t *)((int64_t)(short)((uVar15 + 0x6d5b) * 0x100 | (uint16_t)(uVar15 + 0x6d5b) >> 8) +
           0x7fffa47c4371) = bVar18;
  uVar1 = (uVar15 ^ 0xb114) >> 0xb;
  lVar6 = (int64_t)(short)(0xb09 - uVar15 ^ 0xcc05);
  *(uint8_t *)((int64_t)(short)((uVar15 ^ 0xd8ab) * -0x4d89) + 0x7fffa478764a) = 0;
  *(uint8_t (*) [16])(lVar6 + 0x7fffa4787ea4) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar6 + 0x7fffa4787e94) = (uint8_t  [16])0x0;
  *(uint32_t *)((int64_t)(short)((uint16_t)((uVar15 ^ 0xb114) << 5 | uVar1) >> 3 | uVar1 << 0xd) +
           0x7fffa4788044) = 0x6846 - (uVar10 ^ 0x681e) & 0xffff;
  uVar17 = rdtsc();
  lVar6 = (uVar17 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar17)) * 0x855adca64c6b2bf + 0xb;
  uStack_60 = 0;
  sVar4 = 0;
  do {
    sVar13 = sVar4;
    uVar17 = uStack_60 + 4;
    lVar8 = lVar6 * 0x855adca64c6b2bf + 0xb;
    lVar23 = lVar8 * 0x855adca64c6b2bf + 0xb;
    lVar6 = lVar23 * 0x855adca64c6b2bf + 0xb;
    uVar14 = uVar10 + 0x5ef9deb9 ^ 0x610616dd;
    *(char *)(uStack_60 + (int64_t)(int)(uVar14 << 2 | uVar14 >> 0x1e) + 0x7fffa4791e02) =
         (char)((uint64_t)lVar6 >> 0x20);
    lVar6 = lVar6 * 0x855adca64c6b2bf + 0xb;
    *(char *)(uStack_60 +
             (int64_t)(int)((uVar10 + 0xdfffe0dc) * 8 | uVar10 + 0xdfffe0dc >> 0x1d) +
             0x7fffa4793b8d) = (char)((uint64_t)lVar6 >> 0x20);
    uVar14 = (uVar10 ^ 0xc37f359e) + 0x3c7b7161;
    *(char *)(uStack_60 +
             (int64_t)
             (int)((iVar22 * 0x6ba48dd0 | (uint32_t)(iVar22 * -0x728b6e46) >> 0x1d) + 0x93ca2650) +
             0x7fffa478d190) = (char)((uint64_t)lVar23 >> 0x20);
    *(char *)(uStack_60 + (int64_t)(int)(uVar14 >> 3 | uVar14 * 0x20000000) + 0x7fffa478f04c) =
         (char)((uint64_t)lVar8 >> 0x20);
    uStack_60 = uVar17;
    sVar4 = sVar13 + 4;
  } while ((uVar17 * 0x8000000 | uVar17 >> 0x25) != 0x280000000);
  uVar21 = (uint32_t)uVar17;
  uVar3 = (uint16_t)uVar17;
  uVar1 = uVar3 | 1;
  uVar14 = uVar10 + 0xf5a3b1cd ^ uVar21;
  bVar18 = *(char *)((int64_t)(short)(sVar2 * 0x4694) + 0x7fffa478bbcb) + 1U & 7;
  *(uint32_t *)
   ((int64_t)(int)(uVar14 * -0x1bba0000 | uVar14 * 0x1b047223 >> 0xf) + 0x7fffa4790dee +
   (uint64_t)bVar18 * 4) =
       *(uint32_t *)((int64_t)(short)(uVar1 * 0x3525 - uVar15 ^ 0x7223) + 0x7fffa478a2f8);
  *(uint8_t *)(((int64_t)(short)(-0x28f8 - uVar15) ^ 0x5965U) + 0x7fffa478b56a) = bVar18;
  bVar18 = (uint8_t)uVar17;
  bVar25 = (bVar5 ^ 0xff) * (bVar18 + 1) + 0x72;
  lVar6 = (int64_t)(short)(((sVar13 + 0xe52) - uVar15) * -0x7fd3 + 0x6e81);
  pauVar7 = (uint8_t (*) [16])
            (*(code *)((int64_t)(int)(-0xc157 - uVar10) + 0x7fffa52316cf))(0x80);
  *pauVar7 = (uint8_t  [16])0x0;
  pauVar7[1] = (uint8_t  [16])0x0;
  pauVar7[2] = (uint8_t  [16])0x0;
  pauVar7[3] = (uint8_t  [16])0x0;
  pauVar7[4] = (uint8_t  [16])0x0;
  pauVar7[5] = (uint8_t  [16])0x0;
  pauVar7[6] = (uint8_t  [16])0x0;
  pauVar7[7] = (uint8_t  [16])0x0;
  *(uint8_t *)((int64_t)
            (int)(((0x69b999b4U >> (bVar5 & 0x1f) | 0x69b999b4 << 0x20 - (bVar5 & 0x1f)) ^ uVar21) +
                 0x46655ef3) + 0x7fffa47ca1dc) = (bVar25 * '\b' | bVar25 >> 5) + 0xb6;
  *(uint8_t (*) [16])(lVar6 + 0x7fffa47bc462) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar6 + 0x7fffa47bc452) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar6 + 0x7fffa47bc442) = (uint8_t  [16])0x0;
  *(uint64_t *)((int64_t)(short)(((0x77ef - uVar15) * -0x638f ^ 0x7223) * uVar1) + 0x7fffa47c1c89)
       = (uint64_t)
         (uint16_t)(((uint16_t)(uVar15 + 0x861c) >> (bVar18 & 0xf) |
                  uVar15 + 0x861c << 0x10 - (bVar18 & 0xf)) + 0x798c);
  lVar6 = rdtsc();
  lVar6 = lVar6 * 0xae0ed0b4632de7d + 0xb;
  lVar8 = 0;
  while( true ) {
    uVar9 = uVar3 ^ ((0x42aa - uVar15) * 0x80 | (uint16_t)(0x42aa - uVar15) >> 9) + 0x966e;
    lVar6 = lVar6 * 0xae0ed0b4632de7d + 0xb;
    *(char *)(lVar8 + (int64_t)(short)(uVar9 >> 3 | uVar9 << 0xd) + 0x7fffa47bbd0d) =
         (char)((uint64_t)lVar6 >> 0x20);
    lVar6 = lVar6 * 0xae0ed0b4632de7d + 0xb;
    *(char *)(lVar8 + (int64_t)(short)~(uVar1 * 0x5992) + 0x7fffa47c0c3c) =
         (char)((uint64_t)lVar6 >> 0x20);
    if ((uint64_t)((0x7982f944 - (uVar10 ^ 0xcddb9783)) * -0x2cb01f3 + 0xe4fb8ddd) + lVar8 ==
        0x3d75ae82) break;
    uVar9 = (uVar3 ^ 0x583) + 0x7223;
    lVar6 = lVar6 * 0xae0ed0b4632de7d + 0xb;
    *(char *)(lVar8 + (int64_t)(short)(uVar9 >> (bVar5 & 0xf) | uVar9 << 0x10 - (bVar5 & 0xf)) +
                      0x7fffa47bbe93) = (char)((uint64_t)lVar6 >> 0x20);
    lVar6 = lVar6 * 0xae0ed0b4632de7d + 0xb;
    *(char *)(lVar8 + (int64_t)(int)(-0xc3bf - uVar21) + 0x7fffa47c791a) =
         (char)((uint64_t)lVar6 >> 0x20);
    lVar8 = lVar8 + 4;
  }
  bVar5 = (uint8_t)lVar8 & 0x1f;
  uVar14 = 0x8a111b2 << bVar5 | 0x8a111b2U >> 0x20 - bVar5;
  bVar20 = ~(uint8_t)((uint64_t)pauVar7 >> 0x10);
  uVar26 = (uVar21 ^ 0x548a1961 - uVar10) * -0x3a7d9ee9;
  bVar5 = (uint8_t)lVar8 & 0x1f;
  lVar6 = (int64_t)(int)(uVar26 >> bVar5 | uVar26 << 0x20 - bVar5);
  bVar5 = ~(uint8_t)((uint64_t)pauVar7 >> 8);
  bVar12 = ~(uint8_t)((uint64_t)pauVar7 >> 0x28);
  bVar25 = ~(uint8_t)((uint64_t)pauVar7 >> 0x18);
  bVar11 = ~(uint8_t)((uint64_t)pauVar7 >> 0x30);
  uVar17 = (uint64_t)
           ((uint32_t)*(uint8_t *)((int64_t)
                            (int)(iVar22 * (uVar14 >> (bVar18 & 0x1f) |
                                           uVar14 << 0x20 - (bVar18 & 0x1f))) + 0x7fffa47c8e26) *
            0x2aaaaaab + 0x2aaaaaab) * 6;
  uVar16 = uVar17 >> 0x20;
  *(uint8_t *)(lVar6 + 0x7fffa47c6ce2 + uVar16 * 8) = bVar12 << 2 | bVar12 >> 6;
  *(uint8_t *)(lVar6 + 0x7fffa47c6ce0 + uVar16 * 8) = bVar25 << 2 | bVar25 >> 6;
  *(uint8_t *)(lVar6 + 0x7fffa47c6cdf + uVar16 * 8) = bVar20 << 2 | bVar20 >> 6;
  *(uint8_t *)(lVar6 + 0x7fffa47c6cde + uVar16 * 8) = bVar5 << 2 | bVar5 >> 6;
  *(uint8_t *)(lVar6 + 0x7fffa47c6ce3 + uVar16 * 8) = bVar11 << 2 | bVar11 >> 6;
  *(uint8_t *)(lVar6 + 0x7fffa47c6cdd + uVar16 * 8) = ~(uint8_t)pauVar7 << 2 | (uint8_t)~(uint8_t)pauVar7 >> 6;
  bVar18 = ~(uint8_t)((uint64_t)pauVar7 >> 0x20);
  bVar5 = ~(uint8_t)((uint64_t)pauVar7 >> 0x38);
  *(uint8_t *)(lVar6 + 0x7fffa47c6ce1 + uVar16 * 8) = bVar18 << 2 | bVar18 >> 6;
  *(uint8_t *)(lVar6 + 0x7fffa47c6ce4 + uVar16 * 8) = bVar5 << 2 | bVar5 >> 6;
  *(char *)((int64_t)(int)((((int)lVar8 + 0xe4fa8f9dU ^ uVar10) + 0x1b047223) - uVar21) +
           0x7fffa47cb380) = (char)(uVar17 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa52cf298  |  RVA: 0xb5f298  |  Size: 1 bytes
// Callers  : FUN_7fffa4ee8dac@0x778dac
// Callees  : none
// ============================================================================
void FUN_7fffa52cf298(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa52cf2a0  |  RVA: 0xb5f2a0  |  Size: 53 bytes
// Callers  : none
// Callees  : FUN_7fffa5253720@0xae3720
// ============================================================================
void FUN_7fffa52cf2a0(uint64_t *param_1,int64_t param_2)

{
  FUN_7fffa5253720(*(uint64_t *)(param_2 + 0x60),*(uint32_t *)(param_2 + 0x68),
                   *(uint64_t *)(param_2 + 0x70),FUN_7fffa4ab2990,*(uint32_t *)*param_1,param_1)
  ;
  return;
}


// ============================================================================
// Function : FUN_7fffa52cf2e0  |  RVA: 0xb5f2e0  |  Size: 794 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa52cf5ee) overlaps instruction at (ram,0x7fffa52cf5eb)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa52cf5e3) */
/* WARNING: Removing unreachable block (ram,0x7fffa52cf5e1) */
/* WARNING: Removing unreachable block (ram,0x7fffa52cf5eb) */
/* WARNING: Removing unreachable block (ram,0x7fffa52cf5f0) */
/* WARNING: Removing unreachable block (ram,0x7fffa52cf413) */

void FUN_7fffa52cf2e0(void)

{
  uint64_t uVar1;
  
  uRam00007fffa4784ee8 = uRam00007fffa4781668 ^ 0x20a5f54affff0000;
  uRam00007fffa4784ef0 =
       ((lRam00007fffa4780f08 + 0x1888125efb09ac29U) * 0x40000000 |
       lRam00007fffa4780f08 + 0x1888125efb09ac29U >> 0x22) - 0x7fffa56fd940 ^ 0xf5850459166ec0f0;
  uVar1 = lRam00007fffa47814a0 - 1;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x39) ^ (uVar1 * 0x200000 | uVar1 >> 0x2b) ^ uVar1;
  uVar1 = (uVar1 << 0x2a | uVar1 >> 0x16) ^ (uVar1 << 0xe | uVar1 >> 0x32) ^ uVar1;
  uVar1 = (uVar1 << 0x14 | uVar1 >> 0x2c) ^ (uVar1 << 0x1c | uVar1 >> 0x24) ^ uVar1;
  uVar1 = (uVar1 << 0x38 | uVar1 >> 8) ^ (uVar1 << 0x28 | uVar1 >> 0x18) ^ uVar1;
  uVar1 = (uVar1 << 0x30 | uVar1 >> 0x10) ^ (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar1;
  uRam00007fffa4784ef8 = uVar1 * -0x4395d0d9e0920800 | uVar1 * -0x278872ba1b3c1241 >> 0x35;
  uRam00007fffa4784f10 = 0xad2383cdfeb1d422;
  uRam00007fffa4784f20 = 0x786a875a0080ffff;
  uRam00007fffa4784f08 = 0x579be83d1b15b602;
  uRam00007fffa4784f18 = 0x2388bd6eaa93652c;
  lRam00007fffa4784f00 = lRam00007fffa4781560 + -1;
  return;
}


// ============================================================================
// Function : FUN_7fffa52cf600  |  RVA: 0xb5f600  |  Size: 486 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52cf600(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint8_t bVar3;
  code *pcVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint32_t in_R11D;
  uint64_t in_stack_00000028;
  
  in_stack_00000028 =
       (in_stack_00000028 << 0x15 | in_stack_00000028 >> 0x2b) ^
       (in_stack_00000028 << 6 | in_stack_00000028 >> 0x3a) ^ in_stack_00000028;
  in_stack_00000028 =
       (in_stack_00000028 << 0xc | in_stack_00000028 >> 0x34) ^
       (in_stack_00000028 << 0x2a | in_stack_00000028 >> 0x16) ^ in_stack_00000028;
  in_stack_00000028 =
       (in_stack_00000028 << 0x18 | in_stack_00000028 >> 0x28) ^
       (in_stack_00000028 << 0x14 | in_stack_00000028 >> 0x2c) ^ in_stack_00000028;
  in_stack_00000028 =
       (in_stack_00000028 << 0x30 | in_stack_00000028 >> 0x10) ^
       (in_stack_00000028 << 0x28 | in_stack_00000028 >> 0x18) ^ in_stack_00000028;
  in_stack_00000028 =
       (in_stack_00000028 << 0x20 | in_stack_00000028 >> 0x20) ^
       (in_stack_00000028 << 0x10 | in_stack_00000028 >> 0x30) ^ in_stack_00000028;
  uVar7 = in_stack_00000028 << 0x20 | in_stack_00000028 >> 0x20;
  if (uVar7 - 0x1095e01f != 0) {
    uVar1 = *(uint64_t *)(uVar7 - 0x1095dfd7);
    if (0xf < uVar1) {
      lVar2 = *(int64_t *)(uVar7 - 0x1095dfef);
      uVar5 = uVar1 + 1;
      lVar6 = lVar2;
      if (0xfff < uVar5) {
        lVar6 = *(int64_t *)(lVar2 + -8);
        if ((uint64_t)~((in_R11D | 1) * -0x748042fb) <= (uint64_t)((lVar2 + -8) - lVar6))
        goto LAB_7fffa52cf7e4;
        uVar5 = uVar1 + 0x28;
      }
      (*(code *)(&UNK_7fffa508fdb4 + (int)((in_R11D ^ 0x385bcb0e) + 0x59217cb0)))(lVar6,uVar5);
    }
    uVar1 = *(uint64_t *)(uVar7 - 0x1095dff7);
    *(uint64_t *)(uVar7 - 0x1095dfdf) = 0;
    *(uint64_t *)(uVar7 - 0x1095dfd7) = 0xf;
    *(uint8_t *)(uVar7 - 0x1095dfef) = 0;
    if (0xf < uVar1) {
      uVar5 = uVar1 + 1;
      lVar2 = *(int64_t *)(uVar7 - 0x1095e00f);
      lVar6 = lVar2;
      if (0xfff < uVar5) {
        lVar6 = *(int64_t *)(lVar2 + -8);
        if (0x1f < (uint64_t)((lVar2 + -8) - lVar6)) {
LAB_7fffa52cf7e4:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar5 = uVar1 + 0x28;
      }
      (*(code *)(&UNK_7fffa508cd13 + (int)((in_R11D | 1) * -0x25afe27f + 0x25f2f3da)))(lVar6,uVar5);
    }
    *(uint8_t *)(uVar7 - 0x1095e00f) = 0;
    *(uint64_t *)(uVar7 - 0x1095dfff) = 0;
    *(uint64_t *)(uVar7 - 0x1095dff7) = 0xf;
    bVar3 = (uint8_t)in_R11D & 0xf;
    (*(code *)((int64_t)(short)((0x6573U >> bVar3 | 0x6573 << 0x10 - bVar3) + 0xaa77) +
              0x7fffa508ac2d))(uVar7 - 0x1095e01f,0x50);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52cf7f0  |  RVA: 0xb5f7f0  |  Size: 1872 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52cf7f0(void) {
    /* +0xb5f7f0 */ __asm { PUSH R13 }
    /* +0xb5f7f2 */ __asm { PUSH RDI }
    /* +0xb5f7f3 */ __asm { SUB RSP,0x58 }
    /* +0xb5f7f7 */ __asm { MOV R13,RDX }
    /* +0xb5f7fa */ __asm { RDTSC }
    /* +0xb5f7fc */ __asm { SHL RDX,0x20 }
    /* +0xb5f800 */ __asm { OR RDX,RAX }
    /* +0xb5f803 */ __asm { MOV R8D,R13D }
    /* +0xb5f806 */ __asm { OR R8D,0x1 }
    /* +0xb5f80a */ __asm { MOV R11D,0xa4749be3 }
    /* +0xb5f810 */ __asm { SUB R11D,R13D }
    /* +0xb5f813 */ __asm { MOV R10,-0x30ebf64fafbc6efb }
    /* +0xb5f81d */ __asm { IMUL R10,RDX }
    /* +0xb5f821 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xb5f82b */ __asm { ADD RCX,R10 }
    /* +0xb5f82e */ __asm { MOV RDX,RCX }
    /* +0xb5f831 */ __asm { SHR RDX,0x2d }
    /* +0xb5f835 */ __asm { MOV R10,RCX }
    /* +0xb5f838 */ __asm { SHR R10,0x1b }
    /* +0xb5f83c */ __asm { XOR EDX,R10D }
    /* +0xb5f83f */ __asm { MOV RAX,0x1800000000000001 }
    /* +0xb5f849 */ __asm { IMUL RAX,R9 }
    /* +0xb5f84d */ __asm { MOV R9D,0xaae27bc1 }
    /* +0xb5f853 */ __asm { SHR RCX,0x3b }
    /* +0xb5f857 */ __asm { ROR EDX,CL }
    /* +0xb5f859 */ __asm { MOVD XMM0,R9D }
    /* +0xb5f85e */ __asm { MOV R9D,EDX }
    /* +0xb5f861 */ __asm { OR R9D,0x3 }
    /* +0xb5f865 */ __asm { AND EDX,0x3 }
    /* +0xb5f868 */ __asm { MOV R10,-0x57ffffff0ed47a35 }
    /* +0xb5f872 */ __asm { ADD R10,RAX }
    /* +0xb5f875 */ __asm { MOVD XMM1,R8D }
    /* +0xb5f87a */ __asm { PMULUDQ XMM1,XMM0 }
    /* +0xb5f87e */ __asm { MOVD ECX,XMM1 }
    /* +0xb5f882 */ __asm { ROL ECX,0xd }
    /* +0xb5f885 */ __asm { ADD ECX,0xa90cf6c }
    /* +0xb5f88b */ __asm { ADD R11D,0x605930b4 }
    /* +0xb5f892 */ __asm { CMP R11,RCX }
    /* +0xb5f895 */ __asm { CMOVL EDX,R9D }
    /* +0xb5f899 */ __asm { CMP EDX,0x2 }
    /* +0xb5f89c */ __asm { JGE 0x7fffa52cf8e5 }
    /* +0xb5f89e */ __asm { CMP EDX,0x1 }
    /* +0xb5f8a1 */ __asm { JNZ 0x7fffa52cf981 }
    /* +0xb5f8a7 */ __asm { LEA R8,[0x7fffa47b8cdd] }
    /* +0xb5f8ae */ __asm { MOV RCX,-0x63c90b29348c2c30 }
    /* +0xb5f8b8 */ __asm { CMP R8,RCX }
    /* +0xb5f8bb */ __asm { JZ 0x7fffa52cffc6 }
    /* +0xb5f8c1 */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0xb5f8c6 */ __asm { MOV R9D,0x5dc0a62f }
    /* +0xb5f8cc */ __asm { SUB R9D,R13D }
    /* +0xb5f8cf */ __asm { ADD R9D,0xe70d2379 }
    /* +0xb5f8d6 */ __asm { MOV EAX,dword ptr [R8 + 0x38a3] }
    /* +0xb5f8dd */ __asm { MOVSXD RDX,R9D }
    /* +0xb5f8e0 */ __asm { JMP 0x7fffa52cff7f }
    /* +0xb5f8e5 */ __asm { JZ 0x7fffa52cfa93 }
    /* +0xb5f8eb */ __asm { MOV RCX,-0x64378686e540509f }
    /* +0xb5f8f5 */ __asm { MOV EDX,0xb92d4407 }
    /* +0xb5f8fa */ __asm { ADD RDX,RCX }
    /* +0xb5f8fd */ __asm { LEA RCX,[0x7fffa47bb2f6] }
    /* +0xb5f904 */ __asm { MOV R11,R13 }
    /* +0xb5f907 */ __asm { OR R11,0x1 }
    /* +0xb5f90b */ __asm { IMUL R11,RDX }
    /* +0xb5f90f */ __asm { XOR R11,RCX }
    /* +0xb5f912 */ __asm { CMP R11,-0x1 }
    /* +0xb5f916 */ __asm { JZ 0x7fffa52cffd7 }
    /* +0xb5f91c */ __asm { MOV R9D,0xc197dfe7 }
    /* +0xb5f922 */ __asm { SUB R9D,R13D }
    /* +0xb5f925 */ __asm { IMUL EDX,R9D,0x14acded1 }
    /* +0xb5f92c */ __asm { ADD EDX,0xcf344d5d }
    /* +0xb5f932 */ __asm { MOV R9D,0x224c80e5 }
    /* +0xb5f938 */ __asm { ADD R9D,R13D }
    /* +0xb5f93b */ __asm { XOR R9D,0x8f347eff }
    /* +0xb5f942 */ __asm { IMUL R11D,R9D,-0x39be4559 }
    /* +0xb5f949 */ __asm { CMP R11,RDX }
    /* +0xb5f94c */ __asm { JL 0x7fffa52cfd3a }
    /* +0xb5f952 */ __asm { MOV R11D,0xbb32c317 }
    /* +0xb5f958 */ __asm { ADD R11D,R13D }
    /* +0xb5f95b */ __asm { ROL R11D,0x18 }
    /* +0xb5f95f */ __asm { MOVZX EAX,uint8_t ptr [RCX + 0x1397] }
    /* +0xb5f966 */ __asm { LEA RDX,[RCX + RAX*0x4] }
    /* +0xb5f96a */ __asm { ADD RDX,0x13a7 }
    /* +0xb5f971 */ __asm { MOVZX ECX,uint8_t ptr [RCX + RAX*0x4 + 0x13a7] }
    /* +0xb5f979 */ __asm { ROL CL,0x4 }
    /* +0xb5f97c */ __asm { JMP 0x7fffa52cfd67 }
    /* +0xb5f981 */ __asm { MOV R11D,0x25b4881e }
    /* +0xb5f987 */ __asm { MOV RCX,-0x42b14a729ced000f }
    /* +0xb5f991 */ __asm { CMP R11,RCX }
    /* +0xb5f994 */ __asm { NOP }
    /* +0xb5f995 */ __asm { NOP }
    /* +0xb5f996 */ __asm { NOP }
    /* +0xb5f997 */ __asm { NOP }
    /* +0xb5f998 */ __asm { NOP }
    /* +0xb5f999 */ __asm { MOV R9D,0x49c343c8 }
    /* +0xb5f99f */ __asm { MOV EAX,0x6e7f34f5 }
    /* +0xb5f9a4 */ __asm { SUB EAX,R9D }
    /* +0xb5f9a7 */ __asm { MOV R9D,0x26b17842 }
    /* +0xb5f9ad */ __asm { XOR R9D,0x26b17842 }
    /* +0xb5f9b4 */ __asm { MOV ECX,R13D }
    /* +0xb5f9b7 */ __asm { ROR R9D,CL }
    /* +0xb5f9ba */ __asm { ROL EAX,0x19 }
    /* +0xb5f9bd */ __asm { MOV RCX,qword ptr [R11 + RAX*0x1 + 0x8] }
    /* +0xb5f9c2 */ __asm { MOV RDX,-0x12cc2d741ccfe993 }
    /* +0xb5f9cc */ __asm { MOV RAX,RCX }
    /* +0xb5f9cf */ __asm { MUL RDX }
    /* +0xb5f9d2 */ __asm { MOV R11,RDX }
    /* +0xb5f9d5 */ __asm { MOV EDX,0x1477a56 }
    /* +0xb5f9da */ __asm { MOV RAX,RCX }
    /* +0xb5f9dd */ __asm { MUL RDX }
    /* +0xb5f9e0 */ __asm { ADD RAX,R11 }
    /* +0xb5f9e3 */ __asm { ADC RDX,0x0 }
    /* +0xb5f9e7 */ __asm { AND EDX,0x1 }
    /* +0xb5f9ea */ __asm { OR RDX,R9 }
    /* +0xb5f9ed */ __asm { JNZ 0x7fffa52cfe07 }
    /* +0xb5f9f3 */ __asm { MOV EDX,0x4ba1de6d }
    /* +0xb5f9f8 */ __asm { LEA RCX,[0x7fffa47bcf52] }
    /* +0xb5f9ff */ __asm { MOV R9D,0xd7e37d75 }
    /* +0xb5fa05 */ __asm { XOR EDX,R13D }
    /* +0xb5fa08 */ __asm { IMUL R11D,R9D,-0x4d5e354b }
    /* +0xb5fa0f */ __asm { MOV R9D,0x252f6113 }
    /* +0xb5fa15 */ __asm { NOT EDX }
    /* +0xb5fa17 */ __asm { MOV RAX,RCX }
    /* +0xb5fa1a */ __asm { NOT RAX }
    /* +0xb5fa1d */ __asm { MOV EDI,0xfdd72dfd }
    /* +0xb5fa22 */ __asm { IMUL RDI,RAX }
    /* +0xb5fa26 */ __asm { IMUL R9D,R9D,0x647f3e83 }
    /* +0xb5fa2d */ __asm { ROL R9D,0xa }
    /* +0xb5fa31 */ __asm { SUB R11D,R13D }
    /* +0xb5fa34 */ __asm { XOR R9D,R13D }
    /* +0xb5fa37 */ __asm { SUB RAX,R9 }
    /* +0xb5fa3a */ __asm { CMP RDX,-0x3644934f }
    /* +0xb5fa41 */ __asm { CMOVZ RAX,RDI }
    /* +0xb5fa45 */ __asm { ADD RAX,R11 }
    /* +0xb5fa48 */ __asm { MOV RDX,-0x372f0b5bc768c88d }
    /* +0xb5fa52 */ __asm { CMP RAX,RDX }
    /* +0xb5fa55 */ __asm { JZ 0x7fffa52cffdf }
    /* +0xb5fa5b */ __asm { MOV R9D,0x8c616785 }
    /* +0xb5fa61 */ __asm { ADD R9D,0x2085589d }
    /* +0xb5fa68 */ __asm { ROL R9D,0xb }
    /* +0xb5fa6c */ __asm { IMUL R9D,R8D }
    /* +0xb5fa70 */ __asm { MOVSXD RDX,R9D }
    /* +0xb5fa73 */ __asm { NOP }
    /* +0xb5fa75 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb5fa7c */ __asm { MOV R8,0x0 }
    /* +0xb5fa83 */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0xb5fa88 */ __asm { MOV EAX,dword ptr [RCX + -0x9d2] }
    /* +0xb5fa8e */ __asm { JMP 0x7fffa52cff7f }
    /* +0xb5fa93 */ __asm { MOV R9W,0x4f5 }
    /* +0xb5fa98 */ __asm { ADD R9D,0x130b }
    /* +0xb5fa9f */ __asm { RDTSC }
    /* +0xb5faa1 */ __asm { SHL RDX,0x20 }
    /* +0xb5faa5 */ __asm { OR RDX,RAX }
    /* +0xb5faa8 */ __asm { MOV RCX,0x7facc0f7a00541bd }
    /* +0xb5fab2 */ __asm { IMUL RCX,RDX }
    /* +0xb5fab6 */ __asm { MOV RDX,-0x6d58b5df06e60146 }
    /* +0xb5fac0 */ __asm { ADD RDX,RCX }
    /* +0xb5fac3 */ __asm { MOV RCX,RDX }
    /* +0xb5fac6 */ __asm { SHR RCX,0x2d }
    /* +0xb5faca */ __asm { MOV R11,RDX }
    /* +0xb5facd */ __asm { SHR R11,0x1b }
    /* +0xb5fad1 */ __asm { XOR R11D,ECX }
    /* +0xb5fad4 */ __asm { MOV ECX,R13D }
    /* +0xb5fad7 */ __asm { ROR R9W,CL }
    /* +0xb5fadb */ __asm { ROL R9W,0x3 }
    /* +0xb5fae0 */ __asm { MOVZX R9D,R9W }
    /* +0xb5fae4 */ __asm { SHR RDX,0x3b }
    /* +0xb5fae8 */ __asm { MOV ECX,EDX }
    /* +0xb5faea */ __asm { ROR R11D,CL }
    /* +0xb5faed */ __asm { MOV RCX,qword ptr GS:[R9] }
    /* +0xb5faf1 */ __asm { MOV RCX,qword ptr [RCX + 0x18] }
    /* +0xb5faf5 */ __asm { MOV R9,0x7f88fddb1960b3d9 }
    /* +0xb5faff */ __asm { MOV RDX,0x7eb96467563ee239 }
    /* +0xb5fb09 */ __asm { IMUL RDX,R9 }
    /* +0xb5fb0d */ __asm { IMUL RDX,RCX }
    /* +0xb5fb11 */ __asm { MOV RCX,0x8437a2ab3d5b7a2 }
    /* +0xb5fb1b */ __asm { ADD RCX,RDX }
    /* +0xb5fb1e */ __asm { MOV RDX,0x72b8730eba64de2f }
    /* +0xb5fb28 */ __asm { CMP RCX,RDX }
    /* +0xb5fb2b */ __asm { JZ 0x7fffa52cffb8 }
    /* +0xb5fb31 */ __asm { MOV RCX,0x0 }
    /* +0xb5fb38 */ __asm { NOP }
    /* +0xb5fb39 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xb5fb40 */ __asm { CMP R11D,0x45d1a26 }
    /* +0xb5fb47 */ __asm { JA 0x7fffa52cfcff }
    /* +0xb5fb4d */ __asm { MOV R9W,0xf349 }
    /* +0xb5fb52 */ __asm { SUB R9D,R13D }
    /* +0xb5fb55 */ __asm { IMUL R9D,R9D,0x3e8f }
    /* +0xb5fb5c */ __asm { MOVZX ECX,R9W }
    /* +0xb5fb60 */ __asm { MOV RCX,qword ptr GS:[RCX] }
    /* +0xb5fb64 */ __asm { MOV RDX,-0xd364e216df22367 }
    /* +0xb5fb6e */ __asm { CMP RCX,RDX }
    /* +0xb5fb71 */ __asm { NOP }
    /* +0xb5fb72 */ __asm { NOP }
    /* +0xb5fb73 */ __asm { NOP }
    /* +0xb5fb74 */ __asm { NOP }
    /* +0xb5fb75 */ __asm { MOV R9D,0x7e4a5fc2 }
    /* +0xb5fb7b */ __asm { IMUL R8D,R9D }
    /* +0xb5fb7f */ __asm { XOR R8D,0x36891728 }
    /* +0xb5fb86 */ __asm { MOVSXD RCX,R8D }
    /* +0xb5fb89 */ __asm { LEA R8,[0x7fffa47c11ed] }
    /* +0xb5fb90 */ __asm { MOV R11,R8 }
    /* +0xb5fb93 */ __asm { NOT R11 }
    /* +0xb5fb96 */ __asm { ADD R11,RCX }
    /* +0xb5fb99 */ __asm { MOV RCX,0x25b16f3e65c3f2ce }
    /* +0xb5fba3 */ __asm { CMP R11,RCX }
    /* +0xb5fba6 */ __asm { JZ 0x7fffa52cfff1 }
    /* +0xb5fbac */ __asm { MOVZX R11D,uint8_t ptr [R8 + -0x4aa4] }
    /* +0xb5fbb4 */ __asm { MOVZX EDX,uint8_t ptr [R8 + R11*0x4 + -0x4a9e] }
    /* +0xb5fbbd */ __asm { NOT DL }
    /* +0xb5fbbf */ __asm { ROL DL,0x5 }
    /* +0xb5fbc2 */ __asm { MOV uint8_t ptr [RSP + 0x40],DL }
    /* +0xb5fbc6 */ __asm { MOVZX EDX,uint8_t ptr [R8 + R11*0x4 + -0x4a9d] }
    /* +0xb5fbcf */ __asm { NOT DL }
    /* +0xb5fbd1 */ __asm { ROL DL,0x5 }
    /* +0xb5fbd4 */ __asm { MOV uint8_t ptr [RSP + 0x41],DL }
    /* +0xb5fbd8 */ __asm { MOVZX EDX,uint8_t ptr [R8 + R11*0x4 + -0x4a9c] }
    /* +0xb5fbe1 */ __asm { NOT DL }
    /* +0xb5fbe3 */ __asm { ROL DL,0x5 }
    /* +0xb5fbe6 */ __asm { MOV uint8_t ptr [RSP + 0x42],DL }
    /* +0xb5fbea */ __asm { MOVZX EDX,uint8_t ptr [R8 + R11*0x4 + -0x4a9b] }
    /* +0xb5fbf3 */ __asm { NOT DL }
    /* +0xb5fbf5 */ __asm { ROL DL,0x5 }
    /* +0xb5fbf8 */ __asm { MOV uint8_t ptr [RSP + 0x43],DL }
    /* +0xb5fbfc */ __asm { MOV R9D,0x9102c3cc }
    /* +0xb5fc02 */ __asm { XOR R9D,dword ptr [RSP + 0x40] }
    /* +0xb5fc07 */ __asm { BT R9D,R9D }
    /* +0xb5fc0b */ __asm { JNC 0x7fffa52cfcff }
    /* +0xb5fc11 */ __asm { PXOR XMM0,XMM0 }
    /* +0xb5fc15 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM0 }
    /* +0xb5fc1b */ __asm { PUSHFQ }
    /* +0xb5fc1c */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xb5fc24 */ __asm { POPFQ }
    /* +0xb5fc25 */ __asm { MOV dword ptr [RSP + 0x38],0xc4568976 }
    /* +0xb5fc2d */ __asm { MOV R9D,dword ptr [RSP + 0x38] }
    /* +0xb5fc32 */ __asm { MOV EAX,0xffb009b6 }
    /* +0xb5fc37 */ __asm { ADD EAX,0x871a4b1a }
    /* +0xb5fc3c */ __asm { MOV ECX,R13D }
    /* +0xb5fc3f */ __asm { ROL EAX,CL }
    /* +0xb5fc41 */ __asm { CMP R9D,EAX }
    /* +0xb5fc44 */ __asm { JA 0x7fffa52cfc4e }
    /* +0xb5fc46 */ __asm { SBB uint8_t ptr [RDI],BH }
    /* +0xb5fc48 */ __asm { JLE 0x7fffa52cfcbe }
    /* +0xb5fc4a */ __asm { JL 0x7fffa52cfc8f }
    /* +0xb5fc4c */ __asm { ADC AL,0xb2 }
    /* +0xb5fc4e */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xb5fc56 */ __asm { MOV dword ptr [RSP + 0x38],0x21002102 }
    /* +0xb5fc5e */ __asm { MOV R9D,dword ptr [RSP + 0x38] }
    /* +0xb5fc63 */ __asm { CMP R9D,0x4416c5fb }
    /* +0xb5fc6a */ __asm { JC 0x7fffa52cfc71 }
    /* +0xb5fc6c */ __asm { SBB EAX,0x47af6500 }
    /* +0xb5fc71 */ __asm { MOV dword ptr [RSP + 0x38],0x181c73b1 }
    /* +0xb5fc79 */ __asm { MOV R9D,dword ptr [RSP + 0x38] }
    /* +0xb5fc7e */ __asm { TEST R9B,0x1 }
    /* +0xb5fc82 */ __asm { NOP }
    /* +0xb5fc83 */ __asm { NOP }
    /* +0xb5fc84 */ __asm { NOP }
    /* +0xb5fc85 */ __asm { NOP }
    /* +0xb5fc86 */ __asm { NOP }
    /* +0xb5fc87 */ __asm { MOV RDI,R10 }
    /* +0xb5fc8a */ __asm { LEA R8,[0x7fffa47b7a40] }
    /* +0xb5fc91 */ __asm { MOV RCX,-0x5664c7c0b843a631 }
    /* +0xb5fc9b */ __asm { CMP R8,RCX }
    /* +0xb5fc9e */ __asm { JZ 0x7fffa52d0011 }
    /* +0xb5fca4 */ __asm { MOV R9W,0xbc44 }
    /* +0xb5fca9 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xb5fcb0 */ __asm { NOP }
    /* +0xb5fcb1 */ __asm { MOV RCX,0x0 }
    /* +0xb5fcb8 */ __asm { SUB R9D,R13D }
    /* +0xb5fcbb */ __asm { XOR R9D,0xf28b }
    /* +0xb5fcc2 */ __asm { MOVZX R9D,R9W }
    /* +0xb5fcc6 */ __asm { MOV AX,0x367e }
    /* +0xb5fcca */ __asm { XOR EAX,R13D }
    /* +0xb5fccd */ __asm { NOT EAX }
    /* +0xb5fccf */ __asm { MOVZX EDX,AX }
    /* +0xb5fcd2 */ __asm { MOV qword ptr [RSP + 0x38],RCX }
    /* +0xb5fcd7 */ __asm { MOV EAX,dword ptr [R8 + 0x5598] }
    /* +0xb5fcde */ __asm { MOV R10W,0x6135 }
    /* +0xb5fce3 */ __asm { IMUL R10D,R10D,0x56e3 }
    /* +0xb5fcea */ __asm { MOV ECX,R13D }
    /* +0xb5fced */ __asm { ROL R10W,CL }
    /* +0xb5fcf1 */ __asm { MOVSX R10,R10W }
    /* +0xb5fcf5 */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xb5fcfa */ __asm { SYSCALL }
    /* +0xb5fcfc */ __asm { MOV R10,RDI }
    /* +0xb5fcff */ __asm { LEA R8,[0x7fffa477eb22] }
    /* +0xb5fd06 */ __asm { MOV RCX,0x1f54290d8fb21aa3 }
    /* +0xb5fd10 */ __asm { CMP R8,RCX }
    /* +0xb5fd13 */ __asm { NOP }
    /* +0xb5fd14 */ __asm { NOP }
    /* +0xb5fd15 */ __asm { NOP }
    /* +0xb5fd16 */ __asm { NOP }
    /* +0xb5fd17 */ __asm { NOP }
    /* +0xb5fd18 */ __asm { MOV CX,0x1731 }
    /* +0xb5fd1c */ __asm { MOV qword ptr [RSP + 0x40],R11 }
    /* +0xb5fd21 */ __asm { XOR ECX,0xffffde99 }
    /* +0xb5fd27 */ __asm { SUB ECX,R13D }
    /* +0xb5fd2a */ __asm { MOVSX RDX,CX }
    /* +0xb5fd2e */ __asm { MOV EAX,dword ptr [R8 + 0x631a] }
    /* +0xb5fd35 */ __asm { JMP 0x7fffa52cff7f }
    /* +0xb5fd3a */ __asm { MOV R11D,0x16fbb5 }
    /* +0xb5fd40 */ __asm { MOVZX EAX,uint8_t ptr [RCX + 0x1397] }
    /* +0xb5fd47 */ __asm { LEA RDX,[RCX + RAX*0x4] }
    /* +0xb5fd4b */ __asm { ADD RDX,0x13a7 }
    /* +0xb5fd52 */ __asm { MOVZX ECX,uint8_t ptr [RCX + RAX*0x4 + 0x13a7] }
    /* +0xb5fd5a */ __asm { ROL CL,0x4 }
    /* +0xb5fd5d */ __asm { ADD R11D,R13D }
    /* +0xb5fd60 */ __asm { ADD R11D,0x3f1d8b06 }
    /* +0xb5fd67 */ __asm { MOV uint8_t ptr [RSP + 0x40],CL }
    /* +0xb5fd6b */ __asm { MOVZX ECX,uint8_t ptr [RDX + 0x1] }
    /* +0xb5fd6f */ __asm { MOVZX R9D,uint8_t ptr [RDX + 0x2] }
    /* +0xb5fd74 */ __asm { ROL R9B,0x4 }
    /* +0xb5fd78 */ __asm { MOV uint8_t ptr [RSP + 0x42],R9B }
    /* +0xb5fd7d */ __asm { MOVZX EDX,uint8_t ptr [RDX + 0x3] }
    /* +0xb5fd81 */ __asm { ROL DL,0x4 }
    /* +0xb5fd84 */ __asm { MOV uint8_t ptr [RSP + 0x43],DL }
    /* +0xb5fd88 */ __asm { MOV EDX,0xd41660a9 }
    /* +0xb5fd8d */ __asm { IMUL EDX,R8D }
    /* +0xb5fd91 */ __asm { SUB EDX,R11D }
    /* +0xb5fd94 */ __asm { ROL EDX,0x2 }
    /* +0xb5fd97 */ __asm { ROL CL,0x4 }
    /* +0xb5fd9a */ __asm { MOV uint8_t ptr [RSP + 0x41],CL }
    /* +0xb5fd9e */ __asm { MOV R9D,0x65e8ce72 }
    /* +0xb5fda4 */ __asm { XOR R9D,dword ptr [RSP + 0x40] }
    /* +0xb5fda9 */ __asm { MOV EAX,dword ptr [RDX] }
    /* +0xb5fdab */ __asm { BT R9D,EAX }
    /* +0xb5fdaf */ __asm { JNC 0x7fffa52cfe6a }
    /* +0xb5fdb5 */ __asm { LEA R8,[0x7fffa47b93be] }
    /* +0xb5fdbc */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xb5fdc3 */ __asm { NOP }
    /* +0xb5fdc4 */ __asm { MOV RCX,0x0 }
    /* +0xb5fdcb */ __asm { MOV RCX,0x73b6eab565bac1da }
    /* +0xb5fdd5 */ __asm { CMP R8,RCX }
    /* +0xb5fdd8 */ __asm { NOP }
    /* +0xb5fdd9 */ __asm { NOP }
    /* +0xb5fdda */ __asm { NOP }
    /* +0xb5fddb */ __asm { NOP }
    /* +0xb5fddc */ __asm { NOP }
    /* +0xb5fddd */ __asm { MOV R9D,0x3bf012a7 }
    /* +0xb5fde3 */ __asm { ADD R9D,R13D }
    /* +0xb5fde6 */ __asm { MOV ECX,R11D }
    /* +0xb5fde9 */ __asm { ROL R9D,CL }
    /* +0xb5fdec */ __asm { IMUL R9D,R9D,0x370cbc5d }
    /* +0xb5fdf3 */ __asm { MOVSXD RDX,R9D }
    /* +0xb5fdf6 */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0xb5fdfb */ __asm { MOV EAX,dword ptr [R8 + 0x31c2] }
    /* +0xb5fe02 */ __asm { JMP 0x7fffa52cff7f }
    /* +0xb5fe07 */ __asm { LEA R8,[0x7fffa47c13b1] }
    /* +0xb5fe0e */ __asm { MOV RCX,R8 }
    /* +0xb5fe11 */ __asm { ADD RCX,-0x7f89a38b }
    /* +0xb5fe18 */ __asm { XOR RCX,0x23f20f7a }
    /* +0xb5fe1f */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xb5fe26 */ __asm { NOP }
    /* +0xb5fe28 */ __asm { MOV R11,0x0 }
    /* +0xb5fe2f */ __asm { MOV RDX,0x1d273ebbcf60c623 }
    /* +0xb5fe39 */ __asm { CMP RCX,RDX }
    /* +0xb5fe3c */ __asm { JZ 0x7fffa52cfff9 }
    /* +0xb5fe42 */ __asm { MOV R9W,0xf697 }
    /* +0xb5fe47 */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0xb5fe4c */ __asm { MOV EAX,dword ptr [R8 + -0x4371] }
    /* +0xb5fe53 */ __asm { IMUL R9D,R9D,0x16d9 }
    /* +0xb5fe5a */ __asm { MOV ECX,R13D }
    /* +0xb5fe5d */ __asm { ROR R9W,CL }
    /* +0xb5fe61 */ __asm { MOVSX RDX,R9W }
    /* +0xb5fe65 */ __asm { JMP 0x7fffa52cff7f }
    /* +0xb5fe6a */ __asm { PUSHFQ }
    /* +0xb5fe6b */ __asm { POP R9 }
    /* +0xb5fe6d */ __asm { RDTSC }
    /* +0xb5fe6f */ __asm { SHL RDX,0x20 }
    /* +0xb5fe73 */ __asm { OR RDX,RAX }
    /* +0xb5fe76 */ __asm { MOV RCX,0x7facc0f7a00541bd }
    /* +0xb5fe80 */ __asm { IMUL RCX,RDX }
    /* +0xb5fe84 */ __asm { MOV RDX,-0x3bdb0b602243f5a6 }
    /* +0xb5fe8e */ __asm { ADD RDX,RCX }
    /* +0xb5fe91 */ __asm { MOV RAX,RDX }
    /* +0xb5fe94 */ __asm { SHR RAX,0x1b }
    /* +0xb5fe98 */ __asm { MOV RCX,RDX }
    /* +0xb5fe9b */ __asm { SHR RCX,0x3b }
    /* +0xb5fe9f */ __asm { SHR RDX,0x2d }
    /* +0xb5fea3 */ __asm { XOR EDX,EAX }
    /* +0xb5fea5 */ __asm { ROR EDX,CL }
    /* +0xb5fea7 */ __asm { TEST R9D,0x100 }
    /* +0xb5feae */ __asm { NOP }
    /* +0xb5feaf */ __asm { NOP }
    /* +0xb5feb0 */ __asm { NOP }
    /* +0xb5feb1 */ __asm { NOP }
    /* +0xb5feb2 */ __asm { NOP }
    /* +0xb5feb3 */ __asm { NOP }
    /* +0xb5feb4 */ __asm { NOP }
    /* +0xb5feb5 */ __asm { NOP }
    /* +0xb5feb6 */ __asm { NOP }
    /* +0xb5feb7 */ __asm { NOP }
    /* +0xb5feb8 */ __asm { NOP }
    /* +0xb5feb9 */ __asm { NOP }
    /* +0xb5feba */ __asm { NOP }
    /* +0xb5febb */ __asm { NOP }
    /* +0xb5febc */ __asm { NOP }
    /* +0xb5febd */ __asm { NOP }
    /* +0xb5febe */ __asm { NOP }
    /* +0xb5ff64 */ __asm { ADD EAX,0xf181414b }
    /* +0xb5ff69 */ __asm { SUB dword ptr [RCX + 0xf452891],EDI }
    /* +0xb5ff6f */ __asm { SCASD RDI }
    /* +0xb5ff70 */ __asm { ROR dword ptr [RCX + 0x63],0xd0 }
    /* +0xb5ff74 */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0xb5ff79 */ __asm { MOV EAX,dword ptr [RCX + 0x3b61] }
    /* +0xb5ff7f */ __asm { SYSCALL }
    /* +0xb5ff81 */ __asm { MOV R9D,EAX }
    /* +0xb5ff84 */ __asm { SHR R9D,0x18 }
    /* +0xb5ff88 */ __asm { XOR R9D,EAX }
    /* +0xb5ff8b */ __asm { MOV EAX,R9D }
    /* +0xb5ff8e */ __asm { ROL EAX,0x3 }
    /* +0xb5ff91 */ __asm { MOV R10D,R9D }
    /* +0xb5ff94 */ __asm { ROL R10D,0x7 }
    /* +0xb5ff98 */ __asm { XOR R10D,EAX }
    /* +0xb5ff9b */ __asm { XOR R10D,R9D }
    /* +0xb5ff9e */ __asm { MOV R9D,R10D }
    /* +0xb5ffa1 */ __asm { ROR R9D,0x1 }
    /* +0xb5ffa4 */ __asm { MOV EAX,R10D }
    /* +0xb5ffa7 */ __asm { ROL EAX,0x16 }
    /* +0xb5ffaa */ __asm { XOR EAX,R9D }
    /* +0xb5ffad */ __asm { XOR EAX,R10D }
    /* +0xb5ffb0 */ __asm { ADD RSP,0x58 }
    /* +0xb5ffb4 */ __asm { POP RDI }
    /* +0xb5ffb5 */ __asm { POP R13 }
    /* +0xb5ffb7 */ __asm { RET }
    /* +0xb5ffb8 */ __asm { JMP 0x7fffa52cff64 }
    /* +0xb5ffc6 */ __asm { JMP 0x7fffa52cff9e }
    /* +0xb5ffd7 */ __asm { MOV R13,0x5f304bfffff93de9 }
    /* +0xb5ffe2 */ __asm { MOV BL,0x36 }
    /* +0xb5ffe4 */ __asm { FBSTP tword ptr [RCX + -0x2a] }
    /* +0xb5ffe7 */ __asm { JBE 0x7fffa52cffdf }
    /* +0xb5ffe9 */ __asm { MOV EDI,0x6ae9146b }
    /* +0xb5ffee */ __asm { CLI }
    /* +0xb5fff1 */ __asm { TEST dword ptr [R14 + -0x44c17],0x998164ff }
    /* +0xb5fffc */ __asm { JMP 0x7fffa52cfe42 }
}


// ============================================================================
// Function : FUN_7fffa52d0020  |  RVA: 0xb60020  |  Size: 626 bytes
// Callers  : FUN_7fffa5496290@0xd26290
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa5488850@0xd18850
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa52d0020(uint8_t (*param_1) [16],int64_t param_2,uint8_t (*param_3) [16],
                     int64_t param_4)

{
  uint8_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  uint8_t (*pauVar6) [16];
  uint8_t *puVar7;
  uint8_t (*pauVar8) [16];
  uint32_t uVar9;
  uint64_t uVar10;
  uint32_t uVar11;
  bool bVar12;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint32_t uVar18;
  uint8_t auVar17 [16];
  uint8_t auStack_98 [32];
  uint8_t auStack_78 [16];
  uint64_t uStack_68;
  
  uStack_68 = _DAT_7fffa4780040 ^ (uint64_t)auStack_98;
  uVar3 = param_2 * 2;
  uVar4 = param_4 * 2;
  uVar9 = (uint32_t)uVar3 & 0xf;
  uVar10 = (uint64_t)uVar9;
  puVar7 = *param_1 + uVar3;
  puVar1 = *param_1 + uVar10;
  if (uVar4 < 0x11) {
    FUN_7fffa56a5f20(auStack_78,param_3,uVar4);
    auVar16 = auStack_78;
    do {
      if (puVar7 == puVar1) {
        if (uVar10 != 0) {
          if (uVar3 < 0x10) {
            FUN_7fffa56a5f20(auStack_78,param_1,uVar3);
          }
          else {
            auStack_78 = *param_1;
          }
          pcmpestri(auVar16,auStack_78,0x71,(int)param_4,uVar9 >> 1);
        }
        break;
      }
      pauVar8 = (uint8_t (*) [16])(puVar7 + -0x10);
      bVar12 = (uint8_t *)0xf < puVar7;
      puVar7 = puVar7 + -0x10;
      pcmpestri(auStack_78,*pauVar8,0x71,(int)param_4,8);
    } while (bVar12);
  }
  else {
    uVar11 = (uint32_t)uVar4 & 0xf;
    pauVar8 = (uint8_t (*) [16])(*param_3 + (uVar4 & 0xfffffffffffffff0));
    FUN_7fffa56a5f20(auStack_78,pauVar8,uVar11);
    auVar16 = auStack_78;
    uVar11 = uVar11 >> 1;
    if (puVar7 != puVar1) {
      do {
        auVar15 = *(uint8_t (*) [16])(puVar7 + -0x10);
        puVar7 = puVar7 + -0x10;
        auVar13 = pcmpestrm(*param_3,auVar15,0x31,8,8);
        pauVar6 = param_3;
        while( true ) {
          uVar5 = auVar13._8_4_;
          uVar18 = auVar13._12_4_;
          if (pauVar6 == pauVar8) break;
          auVar14 = *pauVar6;
          pauVar6 = pauVar6 + 1;
          auVar14 = pcmpestrm(auVar14,auVar15,0x31,8,8);
          auVar17._0_4_ = auVar13._0_4_ & auVar14._0_4_;
          auVar17._4_4_ = auVar13._4_4_ & auVar14._4_4_;
          auVar17._8_4_ = uVar5 & auVar14._8_4_;
          auVar17._12_4_ = uVar18 & auVar14._12_4_;
          auVar13 = auVar17;
        }
        if (uVar11 != 0) {
          auVar15 = pcmpestrm(auStack_78,auVar15,0x31,uVar11,8);
          auVar13._0_4_ = auVar13._0_4_ & auVar15._0_4_;
          auVar13._4_4_ = 0;
          auVar13._8_4_ = uVar5 & auVar15._8_4_;
          auVar13._12_4_ = uVar18 & auVar15._12_4_;
        }
        uVar5 = auVar13._0_4_;
        if (uVar5 != 0) {
          iVar2 = 0x1f;
          if (uVar5 != 0) {
            for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          if (iVar2 != -1) goto LAB_7fffa52d026f;
        }
      } while (puVar7 != puVar1);
    }
    if (uVar10 != 0) {
      uVar9 = uVar9 >> 1;
      if (uVar3 < 0x10) {
        FUN_7fffa56a5f20(auStack_78,param_1,uVar3);
      }
      else {
        auStack_78 = *param_1;
      }
      auVar15 = pcmpestrm(*param_3,auStack_78,0x31,8,uVar9);
      while( true ) {
        uVar5 = auVar15._8_4_;
        uVar18 = auVar15._12_4_;
        if (param_3 == pauVar8) break;
        auVar13 = *param_3;
        param_3 = param_3 + 1;
        auVar13 = pcmpestrm(auVar13,auStack_78,0x31,8,uVar9);
        auVar14._0_4_ = auVar15._0_4_ & auVar13._0_4_;
        auVar14._4_4_ = auVar15._4_4_ & auVar13._4_4_;
        auVar14._8_4_ = uVar5 & auVar13._8_4_;
        auVar14._12_4_ = uVar18 & auVar13._12_4_;
        auVar15 = auVar14;
      }
      if (uVar11 != 0) {
        auVar16 = pcmpestrm(auVar16,auStack_78,0x31,uVar11,uVar9);
        auVar15._0_4_ = auVar15._0_4_ & auVar16._0_4_;
        auVar15._4_4_ = 0;
        auVar15._8_4_ = uVar5 & auVar16._8_4_;
        auVar15._12_4_ = uVar18 & auVar16._12_4_;
      }
      uVar9 = auVar15._0_4_;
      if ((uVar9 != 0) && (iVar2 = 0x1f, uVar9 != 0)) {
        for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
    }
  }
LAB_7fffa52d026f:
  FUN_7fffa5488850(uStack_68 ^ (uint64_t)auStack_98);
  return;
}


// ============================================================================
// Function : FUN_7fffa52d02a0  |  RVA: 0xb602a0  |  Size: 360 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52d02a0(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
                     int64_t param_5)

{
  uint8_t bVar1;
  char cVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  uint8_t in_R10B;
  char in_R11B;
  
  if (param_1 < (uint64_t)in_R10B + (uint64_t)(uint8_t)(in_R11B * 'I')) {
    return;
  }
  uVar4 = (uint8_t)(in_R11B * 'I') & 0xf;
  *(uint8_t *)(param_5 + 6) = *(uint8_t *)(param_5 + 6) | 0x40;
  uVar5 = (uint32_t)param_2 ^ 0x9e8132c9;
  puVar6 = (uint32_t *)(param_4 * (param_2 + -0x4009fdeeed7) + (uint64_t)in_R10B);
  cVar2 = in_R10B * '\x10';
  if (((uint32_t)param_2 | 1) * 0x4435ad26 < (uVar5 << 6 | uVar5 >> 0x1a) * -0x1f05f725) {
    cVar2 = in_R10B * -0x10;
  }
  *(uint8_t *)(param_5 + 0xe) = *(uint8_t *)(param_5 + 0xe) & 0xf | in_R11B * -0x70;
  *(uint8_t *)(param_5 + 0x12) = cVar2 + (*(uint8_t *)(param_5 + 0x12) & 0xf);
  bVar3 = (uint8_t)uVar4;
  if (bVar3 < 6) {
    if (bVar3 < 4) {
      if (bVar3 == (uint8_t)(-(uint8_t)param_2 - 0x25)) {
        uVar5 = (uint32_t)(uint8_t)*puVar6;
        goto LAB_7fffa52d03bc;
      }
    }
    else if (bVar3 == 4) {
      uVar5 = (uint32_t)(uint16_t)*puVar6;
      goto LAB_7fffa52d03bc;
    }
  }
  else if (bVar3 < 10) {
    if (bVar3 == 6) {
LAB_7fffa52d03b9:
      uVar5 = *puVar6;
      goto LAB_7fffa52d03bc;
    }
  }
  else {
    bVar1 = (uint8_t)param_2 & 7;
    if (bVar3 == (uint8_t)('\n' << bVar1 | 10U >> 8 - bVar1)) goto LAB_7fffa52d03b9;
  }
  uVar5 = 0;
LAB_7fffa52d03bc:
  *(uint32_t *)(param_5 + 0x28) = uVar5;
  *(uint16_t *)(param_5 + 0x2c) = *(uint16_t *)((int64_t)puVar6 + ((uint64_t)uVar4 - 2));
  *(uint8_t *)(param_5 + 0xb) = *(char *)(param_5 + 0xb) + bVar3;
  return;
}


// ============================================================================
// Function : FUN_7fffa52d0410  |  RVA: 0xb60410  |  Size: 2215 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa52d05cf) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d0970) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d0c02) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d0c07) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d0c26) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d0c2a) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d0c47) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d0c4b) */

void FUN_7fffa52d0410(uint64_t param_1,uint64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  code *pcVar5;
  int iVar6;
  uint8_t *puVar7;
  uint32_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint16_t uVar11;
  int iVar12;
  uint64_t uStack_108;
  
  uVar8 = (uint32_t)param_2;
  if ((uint64_t)((uVar8 ^ 0xf14756b4) + 0x2bff5f69) == 0xe26f74fede6d8d1d) {
    return;
  }
  bVar2 = (uint8_t)param_2 & 0x1f;
  uVar10 = (uint64_t)bRam00007fffa478681c;
  bVar1 = *(uint8_t *)(((uint64_t)(uint16_t)(((uint16_t)param_2 | 1) * -0x65b1) ^ 0x417c) + 0x7fffa4786810
                   );
  iVar12 = -0x15750852 - uVar8;
  bVar4 = *(uint8_t *)(uVar10 * 8 + 0x7fffa4786827);
  bVar3 = bVar4 * bVar1;
  if ((((uVar8 ^ 0xcbd37a3) << 0x15 | (uVar8 ^ 0xcbd37a3) >> 0xb) ^ 0xcc47f41) < 0xc3e1e575) {
    bVar3 = bVar4 ^ bVar1;
  }
  uStack_108 = CONCAT17(bRam00007fffa4786877 ^ *(uint8_t *)(uVar10 * 8 + 0x7fffa478682d),
                        CONCAT16(*(uint8_t *)(uVar10 * 8 + 0x7fffa478682c) ^ bRam00007fffa4786876,
                                 CONCAT15(bRam00007fffa4786875 ^
                                          *(uint8_t *)(uVar10 * 8 + 0x7fffa478682b),
                                          CONCAT14(bRam00007fffa4786874 ^
                                                   *(uint8_t *)(uVar10 * 8 + 0x7fffa478682a),
                                                   CONCAT13(*(uint8_t *)((uint64_t)
                                                                      ((uVar8 ^ 0x1bf64eb0) & 0xffff
                                                                      ) + 0x7fffa4786810) ^
                                                            *(uint8_t *)(uVar10 * 8 + 0x7fffa4786829),
                                                            CONCAT12(*(uint8_t *)((uint64_t)
                                                                               (0x3100000U >> bVar2
                                                                               | 0x3100000 <<
                                                                                 0x20 - bVar2) +
                                                                              0x7fffa4786810) ^
                                                                     *(uint8_t *)(uVar10 * 8 +
                                                                              0x7fffa4786828),
                                                                     CONCAT11(bVar3,*(uint8_t *)(uVar10
                                                                                              * 8 + 
                                                  0x7fffa4786826) ^ bRam00007fffa4786870)))))));
  if (uStack_108 != 0) {
    lVar9 = 0;
    do {
      bVar1 = (uint8_t)param_2 & 0x1f;
      bVar4 = (uint8_t)iVar12;
      uVar10 = (param_2 ^ 0x7fffffff88604ed3) << (bVar4 & 0x3f) |
               (param_2 ^ 0x7fffffff88604ed3) >> 0x40 - (bVar4 & 0x3f);
      if ((int64_t)(uVar10 << 0x10 | uVar10 >> 0x30) <
          (int64_t)(uint64_t)((0x69b4b81f << bVar1 | 0x69b4b81fU >> 0x20 - bVar1) - iVar12)) {
        uVar11 = (uint16_t)param_2 + 0x8346;
        puVar7 = (uint8_t *)
                 ((int64_t)(short)~(uVar11 >> (bVar4 & 0xf) | uVar11 << 0x10 - (bVar4 & 0xf)) +
                 0x7fffa585c97b);
      }
      else {
        uVar11 = (short)iVar12 + 0x2593;
        uVar11 = ~(uVar11 * 0x2000 | uVar11 >> 3);
        puVar7 = &UNK_7fffa585f9b7 + (short)(uVar11 << 6 | uVar11 >> 10);
      }
      iVar6 = ((int)CONCAT62((int6)((uint64_t)puVar7 >> 0x10),0xafd0) - uVar8) + 0x2700;
      uVar11 = (uint16_t)iVar6;
      uVar11 = uVar11 >> (bVar4 & 0xf) | uVar11 << 0x10 - (bVar4 & 0xf);
      pcVar5 = (code *)((int64_t)(short)uVar11 + 0x7fffa4fe1180);
      (*pcVar5)(pcVar5,CONCAT22((short)((uint32_t)iVar6 >> 0x10),uVar11),0x81622b8a);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 4);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52d0cd4  |  RVA: 0xb60cd4  |  Size: 71 bytes
// Callers  : FUN_7fffa56606b8@0xef06b8, FUN_7fffa548d338@0xd1d338, FUN_7fffa4f445c0@0x7d45c0, FUN_7fffa5668bc0@0xef8bc0, FUN_7fffa5497d30@0xd27d30
// Callees  : FUN_7fffa56962a0@0xf262a0
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

void FUN_7fffa52d0cd4(void)

{
  code *pcVar1;
  int iVar2;
  uint8_t *puVar3;
  uint8_t auStack_28 [8];
  uint8_t auStack_20 [32];
  
  iVar2 = (*(code *)&DAT_7ff84ea3d8d0)(0x17);
  puVar3 = auStack_28;
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(uint64_t *)(puVar3 + -8) = 0x7fffa52d0d02;
  FUN_7fffa56962a0(2,0xc0000417);
  *(uint64_t *)(puVar3 + -8) = 0x7fffa52d0d08;
  (*(code *)&DAT_7ff84ea23e40)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ============================================================================
// Function : FUN_7fffa52d0d20  |  RVA: 0xb60d20  |  Size: 402 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa52d0d20(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t in_RAX;
  uint32_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t in_R10;
  uint32_t *puVar4;
  
  uVar3 = (in_R10 << 0xf | in_R10 >> 0x31) ^ (in_R10 << 0x1e | in_R10 >> 0x22) ^ in_R10;
  lVar2 = ((uint64_t)(2 - (param_3 < 0x20)) + 1) - (uint64_t)(param_3 < 0x1000);
  uVar3 = (uVar3 << 0x1e | uVar3 >> 0x22) ^ (uVar3 << 0x3c | uVar3 >> 4) ^ uVar3;
  uVar3 = (uVar3 << 0x3c | uVar3 >> 4) ^ (uVar3 << 0x38 | uVar3 >> 8) ^ uVar3;
  uVar3 = (uVar3 << 0x38 | uVar3 >> 8) ^ (uVar3 << 0x30 | uVar3 >> 0x10) ^ uVar3;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) ^ (uVar3 << 0x30 | uVar3 >> 0x10) ^ uVar3;
  uVar3 = (uVar3 << 0x3c | uVar3 >> 4) ^ (uVar3 << 0x2e | uVar3 >> 0x12) ^
          (uVar3 << 0x20 | uVar3 >> 0x20);
  uVar3 = (uVar3 << 0x1c | uVar3 >> 0x24) ^ (uVar3 << 0x38 | uVar3 >> 8) ^ uVar3;
  uVar3 = (uVar3 << 0x30 | uVar3 >> 0x10) ^ (uVar3 << 0x38 | uVar3 >> 8) ^ uVar3;
  uVar3 = (uVar3 << 0x30 | uVar3 >> 0x10) ^ (uVar3 << 0x20 | uVar3 >> 0x20) ^ uVar3;
  puVar4 = (uint32_t *)((uVar3 << 0x20 | uVar3 >> 0x20) - 0xf3b3c0d9);
  uVar1 = (uint32_t)lVar2;
  if (uVar1 < 3) {
    if (uVar1 == 2) {
      *(uint16_t *)puVar4 = (uint16_t)((int)param_3 << 4) | 5;
    }
    else {
      *(char *)puVar4 = (char)param_3 * '\b' + '\x01';
    }
  }
  else {
    *puVar4 = (int)param_3 << 4 | 0xd;
  }
  uVar3 = (uint64_t)(uVar1 + 0x9019889d);
  *(char *)((int64_t)puVar4 + lVar2) =
       *(char *)((in_RAX + (uint64_t)((int)param_1 + 0xa0a0dc86)) *
                (param_1 + 0xadb02179af8394f7U << 0x3b | param_1 + 0xadb02179af8394f7U >> 5));
  return (uVar3 << 0x28 | 0x90) ^ (uVar3 << 0x3b | (uint64_t)(uVar1 + 0x9019889d >> 5)) ^ uVar3;
}


// ============================================================================
// Function : FUN_7fffa52d0eb4  |  RVA: 0xb60eb4  |  Size: 1 bytes
// Callers  : FUN_7fffa56084d0@0xe984d0
// Callees  : none
// ============================================================================
void FUN_7fffa52d0eb4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa52d0ec0  |  RVA: 0xb60ec0  |  Size: 2145 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa52d0ec0(int64_t param_1)

{
  uint8_t *puVar1;
  uint32_t uVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  bool bVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [13];
  uint8_t auVar8 [13];
  uint8_t auVar9 [13];
  uint8_t auVar10 [13];
  uint8_t auVar11 [15];
  uint8_t auVar12 [15];
  uint8_t auVar13 [15];
  uint8_t auVar14 [15];
  uint8_t auVar15 [13];
  uint8_t auVar16 [13];
  uint5 uVar17;
  uint8_t auVar18 [11];
  int64_t *plVar19;
  uint64_t uVar20;
  int64_t lVar21;
  int64_t lVar22;
  uint32_t uVar23;
  uint32_t uVar24;
  int iVar25;
  uint32_t uVar26;
  code *pcVar27;
  uint8_t *puVar28;
  uint8_t *puVar29;
  uint64_t uVar30;
  uint32_t uVar31;
  uint64_t uVar32;
  uint32_t uVar33;
  uint64_t uVar34;
  uint32_t uVar35;
  uint64_t uVar36;
  uint64_t in_R10;
  int64_t in_R11;
  uint64_t *puVar37;
  int64_t lVar38;
  uint32_t uVar39;
  uint32_t uVar40;
  int64_t *plVar41;
  uint32_t uVar42;
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  uint32_t auStack_1b4 [3];
  uint64_t uStack_1a8;
  uint32_t uStack_19c;
  uint32_t uStack_198;
  uint32_t uStack_194;
  int64_t *plStack_190;
  uint64_t *puStack_188;
  uint64_t uStack_180;
  uint32_t auStack_178 [9];
  uint32_t auStack_154 [5];
  uint32_t auStack_140 [51];
  uint32_t uStack_74;
  int64_t lStack_70;
  uint32_t uStack_68;
  uint32_t uStack_64;
  int64_t lStack_60;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint8_t *puStack_50;
  int64_t lStack_48;
  
  bVar3 = (uint8_t)param_1 & 0x1f;
  uVar36 = (in_R10 << 0x11 | in_R10 >> 0x2f) ^ (in_R10 << 0x3a | in_R10 >> 6) ^ in_R10;
  uVar36 = (uVar36 << 0x22 | uVar36 >> 0x1e) ^ (uVar36 << 0x34 | uVar36 >> 0xc) ^ uVar36;
  uVar36 = (uVar36 << 4 | uVar36 >> 0x3c) ^ (uVar36 << 0x28 | uVar36 >> 0x18) ^ uVar36;
  uVar23 = 0x110ac526U - (int)param_1 ^ 0x6fe951d7;
  uVar36 = (uVar36 << 8 | uVar36 >> 0x38) ^ (uVar36 << 0x10 | uVar36 >> 0x30) ^ uVar36;
  uVar36 = (uVar36 << 0x20 | uVar36 >> 0x20) ^ (uVar36 << 0x10 | uVar36 >> 0x30) ^ uVar36;
  puVar37 = (uint64_t *)(in_R11 - (int)(uVar23 << 0x18 | uVar23 >> 8));
  uVar36 = (uVar36 << 5 | uVar36 >> 0x3b) ^ (uVar36 << 1 | (uint64_t)((int64_t)uVar36 < 0)) ^
           (uVar36 << 0x20 | uVar36 >> 0x20);
  uVar36 = (uVar36 << 2 | uVar36 >> 0x3e) ^ (uVar36 << 10 | uVar36 >> 0x36) ^ uVar36;
  uVar36 = (uVar36 << 0x14 | uVar36 >> 0x2c) ^ (uVar36 << 4 | uVar36 >> 0x3c) ^ uVar36;
  plVar19 = (int64_t *)
            ((uVar36 << 8 | uVar36 >> 0x38) ^ (uVar36 << 0x28 | uVar36 >> 0x18) ^ uVar36);
  auStack_178[0] = (0x162f0227 << bVar3 | 0x162f0227U >> 0x20 - bVar3) * 0x3e607777;
  puVar29 = (uint8_t *)*puVar37;
  uVar36 = puVar37[1];
  if (uVar36 == 0) {
    plVar41 = (int64_t *)plVar19[1];
    uVar20 = plVar41[2];
    uVar30 = plVar41[3];
    uVar32 = 0;
  }
  else {
    lVar22 = *plVar19;
    uVar23 = *(uint32_t *)(lVar22 + 0x40);
    uVar32 = 0;
    puStack_50 = puVar29;
    lStack_60 = param_1;
    lStack_70 = lVar22;
    do {
      *(uint8_t *)(lVar22 + (uint64_t)uVar23) = puVar29[uVar32];
      uVar23 = *(int *)(lVar22 + 0x40) + 1;
      *(uint32_t *)(lVar22 + 0x40) = uVar23;
      if (uVar23 == 0x40) {
        for (uVar20 = 0; bVar3 = *(uint8_t *)(lVar22 + (uVar20 | 5)),
            auVar7[0xc] = *(uint8_t *)(lVar22 + 0xe + uVar20), auVar7._0_12_ = ZEXT712(0),
            uVar17 = CONCAT32(auVar7._10_3_,(uint16_t)*(uint8_t *)(lVar22 + 10 + uVar20)),
            auVar15._5_8_ = 0, auVar15._0_5_ = uVar17,
            uVar23 = CONCAT31(0,*(uint8_t *)(lVar22 + 2 + uVar20)),
            auVar8[4] = *(uint8_t *)(lVar22 + 6 + uVar20), auVar8._0_4_ = uVar23, auVar8[5] = 0,
            auVar8._6_7_ = SUB137(auVar15 << 0x40,6), auVar45._0_4_ = uVar23 << 8,
            auVar45._4_4_ = auVar8._4_4_ << 8, auVar45._8_4_ = (int)uVar17 << 8,
            auVar45._12_4_ = (uint32_t)(uint3)(auVar7._10_3_ >> 0x10) << 8,
            auVar6._1_4_ = (uint32_t)*(uint8_t *)(lVar22 + 4 + uVar20) << 0x18,
            auVar6[0] = *(uint8_t *)(lVar22 + uVar20),
            auVar6._5_4_ = (uint32_t)*(uint8_t *)(lVar22 + 8 + uVar20) << 0x18,
            auVar6._9_4_ = (uint32_t)*(uint8_t *)(lVar22 + 0xc + uVar20) << 0x18, auVar6._13_3_ = 0,
            auVar9[0xc] = *(uint8_t *)(lVar22 + 0xf + uVar20), auVar9._0_12_ = ZEXT712(0),
            auVar16[1] = 0, auVar16[0] = *(uint8_t *)(lVar22 + 0xb + uVar20),
            auVar16._2_3_ = auVar9._10_3_, auVar16._5_8_ = 0,
            auVar44._0_4_ = CONCAT31(0,*(uint8_t *)(lVar22 + 3 + uVar20)),
            auVar10[4] = *(uint8_t *)(lVar22 + 7 + uVar20), auVar10._0_4_ = auVar44._0_4_,
            auVar10[5] = 0, auVar10._6_7_ = SUB137(auVar16 << 0x40,6), auVar44._4_9_ = auVar10._4_9_
            , auVar44._13_3_ = 0, auVar11._12_2_ = 0,
            auVar11._0_12_ = SUB1612((uint8_t  [16])0x0,0),
            auVar11[0xe] = *(uint8_t *)(lVar22 + 0xd + uVar20),
            auVar12[10] = *(uint8_t *)(lVar22 + 9 + uVar20),
            auVar12._0_10_ = SUB1610((uint8_t  [16])0x0,0), auVar12[0xb] = 0,
            auVar12._12_3_ = auVar11._12_3_, auVar13._10_5_ = auVar12._10_5_,
            auVar13._0_10_ = (unkuint10)0, auVar14._8_7_ = auVar13._8_7_,
            auVar14._0_8_ = (uint64_t)bVar3 << 0x30, auVar18._9_2_ = 0,
            auVar18._0_9_ = auVar14._6_9_,
            auVar43._0_4_ = (CONCAT11(bVar3,*(uint8_t *)(lVar22 + 1 + uVar20)) & 0xff) << 0x10,
            auVar43._4_11_ = auVar18 << 0x10, auVar43[0xf] = 0,
            *(uint8_t (*) [16])((int64_t)auStack_178 + uVar20) =
                 auVar43 | auVar6 << 0x18 | auVar44 | auVar45, uVar20 != 0x30;
            uVar20 = uVar20 + 0x10) {
        }
        lVar21 = 0x10;
        uVar20 = 0x1f846182f636f420;
        uVar23 = auStack_178[0];
        do {
          uVar26 = auStack_178[lVar21 + -2];
          uVar2 = auStack_1b4[lVar21];
          uVar30 = (int64_t)(0x52f1b981 - (int)param_1) ^ uVar20;
          auStack_178[lVar21] =
               uVar23 + auStack_178[lVar21 + -7] +
               (uVar26 >> 10 ^ (uVar26 << 0xf | uVar26 >> 0x11) ^ (uVar26 << 0xd | uVar26 >> 0x13))
               + (uVar2 >> 3 ^ (uVar2 << 0x19 | uVar2 >> 7) ^ (uVar2 << 0xe | uVar2 >> 0x12));
          lVar21 = lVar21 + 1;
          uVar20 = uVar20 + 0xe4f913698d147d8b;
          uVar23 = uVar2;
        } while (uVar30 != 0xd6c10e1c54095335);
        uStack_194 = *(uint32_t *)(lVar22 + 100);
        uStack_58 = *(uint32_t *)(lVar22 + 0x60);
        uStack_19c = *(uint32_t *)(lVar22 + 0x58);
        uStack_74 = *(uint32_t *)(lVar22 + 0x50);
        uStack_198 = *(uint32_t *)(lVar22 + 0x54);
        uStack_64 = *(uint32_t *)(lVar22 + 0x68);
        uStack_68 = *(uint32_t *)(lVar22 + 0x6c);
        auStack_1b4[2] = *(int *)(lVar22 + 0x5c);
        lVar22 = -0x336fb7ed;
        lVar21 = 0;
        lStack_48 = CONCAT44(lStack_48._4_4_,auStack_1b4[2]);
        uVar23 = uStack_194;
        uVar26 = uStack_58;
        uVar2 = uStack_19c;
        uVar40 = uStack_74;
        uVar39 = uStack_198;
        uVar31 = uStack_64;
        uVar42 = uStack_68;
        do {
          uVar33 = uVar31;
          uStack_54 = uVar39;
          uVar39 = uVar40;
          uVar35 = uVar2;
          uVar24 = uVar26;
          uVar31 = uVar23;
          lVar38 = (lStack_60 + 0x7e5c5f2d6d5da75a) * lVar22;
          iVar25 = ((uVar31 ^ uVar33) & uVar24 ^ uVar33) + uVar42 +
                   ((uVar24 << 0x15 | uVar24 >> 0xb) ^ (uVar24 << 0x1a | uVar24 >> 6) ^
                   (uVar24 << 7 | uVar24 >> 0x19)) +
                   *(int *)(&UNK_7fffa57817c6 +
                           lVar21 * 4 + (int64_t)(short)~(((uint16_t)lStack_60 | 1) * 0x77b5)) +
                   auStack_178[lVar21];
          lVar21 = lVar21 + 1;
          uVar40 = ((uVar39 << 0x1e | uVar39 >> 2) ^ (uVar39 << 0x13 | uVar39 >> 0xd) ^
                   (uVar39 << 10 | uVar39 >> 0x16)) +
                   ((uVar35 ^ uStack_54) & uVar39 ^ uStack_54 & uVar35) + iVar25;
          uVar26 = iVar25 + (int)lStack_48;
          lVar22 = lVar22 + -0x336fb7ed;
          lStack_48 = CONCAT44(lStack_48._4_4_,uVar35);
          uVar23 = uVar24;
          uVar2 = uStack_54;
          uVar42 = uVar33;
        } while (lVar38 != 0x740e404f70852440);
        *(uint32_t *)(lStack_70 + 0x54) = uVar39 + uStack_198;
        *(uint32_t *)(lStack_70 + 0x68) = uVar31 + uStack_64;
        *(uint32_t *)(lStack_70 + 100) = uVar24 + uStack_194;
        *(uint32_t *)(lStack_70 + 0x60) = uVar26 + uStack_58;
        *(uint32_t *)(lStack_70 + 0x58) = uStack_54 + uStack_19c;
        *(uint32_t *)(lStack_70 + 0x6c) = uVar33 + uStack_68;
        *(uint32_t *)(lStack_70 + 0x5c) = auStack_1b4[2] + uVar35;
        *(uint32_t *)(lStack_70 + 0x50) = uStack_74 + uVar40;
        *(uint32_t *)(lStack_70 + 0x40) = 0;
        *(int64_t *)(lStack_70 + 0x48) = *(int64_t *)(lStack_70 + 0x48) + 0x200;
        uVar23 = 0;
        puVar29 = puStack_50;
        param_1 = lStack_60;
        lVar22 = lStack_70;
        uStack_1a8 = uVar32;
      }
      uVar32 = (uint64_t)((int)uVar32 + 1);
    } while (uVar32 < uVar36);
    puVar29 = (uint8_t *)*puVar37;
    uVar32 = puVar37[1];
    plVar41 = (int64_t *)plVar19[1];
    uVar20 = plVar41[2];
    uVar30 = plVar41[3];
    plStack_190 = plVar19;
    puStack_188 = puVar37;
    uStack_180 = uVar36;
    if (uVar30 - uVar20 < uVar32) {
      uVar36 = 0x7fffffffffffffff;
      iVar25 = (int)param_1;
      if (0x7fffffffffffffff - uVar20 < uVar32) {
        uVar23 = ~((int)CONCAT62((int6)((uint64_t)puVar29 >> 0x10),0xb96b) + iVar25);
        (*(code *)(&UNK_7fffa519c35d + (short)uVar23))(0,uVar23,0);
        pcVar27 = (code *)__debugbreak();
        (*pcVar27)();
        return;
      }
      uVar34 = uVar20 + uVar32;
      if ((-1 < (int64_t)uVar34) && (uVar30 <= (uVar30 >> 1 ^ 0x7fffffffffffffff))) {
        uVar36 = (uVar30 >> 1) + uVar30;
        if (uVar36 < (uVar34 | 0xf)) {
          uVar36 = uVar34 | 0xf;
        }
      }
      bVar3 = (uint8_t)param_1 & 0x1f;
      uVar23 = 0xd918034U - iVar25 ^ 0x43160426;
      bVar4 = (uint8_t)param_1 & 0x1f;
      pcVar27 = (code *)((int64_t)(int)(0x9c9fffeU >> bVar3 | 0x9c9fffe << 0x20 - bVar3) +
                        0x7fffa527a5cc);
      puStack_50 = puVar29;
      (*pcVar27)(pcVar27,uVar36 + 1 << 0x3c ^ uVar36 + 1,iVar25 + -0x387d6e3);
      lVar22 = ((int64_t)pcVar27 << 0x2c | (uint64_t)pcVar27 >> 0x14) -
               (((uint64_t)pcVar27 >> 0x14) << 0x36);
      plVar41[3] = uVar36;
      plVar41[2] = uVar34;
      if ((uint64_t)((0xf2614c8eU >> bVar4 | -0xd9eb372 << 0x20 - bVar4) ^ 0x292bd2e4) <
          (uint64_t)(int64_t)(int)(uVar23 >> 1 | (uint32_t)((uVar23 & 1) != 0) << 0x1f) ==
          uVar30 < 0x10) {
        FUN_7fffa56a5f20(lVar22,plVar41,uVar20);
        FUN_7fffa56a5f20(lVar22 + uVar20,puStack_50,uVar32);
        *(uint8_t *)(uVar32 + lVar22 + uVar20) = *(uint8_t *)((int64_t)plVar41 + uVar20);
      }
      else {
        lStack_48 = *plVar41;
        uVar23 = (uint32_t)lStack_60 ^ 0x15082151;
        FUN_7fffa56a5f20(lVar22,lStack_48,uVar20);
        FUN_7fffa56a5f20(lVar22 + uVar20,puStack_50,uVar32);
        *(uint8_t *)(uVar32 + lVar22 + uVar20) = *(uint8_t *)(lStack_48 + uVar20);
        (*(code *)((int64_t)(int)((uVar23 << 9 | uVar23 >> 0x17) + 0x1376038f) + 0x7fffa56936e8))()
        ;
      }
      *plVar41 = lVar22;
      return;
    }
  }
  uVar23 = (uint32_t)param_1 | 1;
  puVar1 = puVar29 + uVar32;
  plVar19 = plVar41;
  if (0xf < uVar30) {
    plVar19 = (int64_t *)*plVar41;
  }
  puVar28 = (uint8_t *)((int64_t)plVar19 + uVar20);
  bVar5 = puVar1 <= puVar28;
  if (~((uint32_t)param_1 ^ 0x4a7f296b) <= uVar23 * -0x73fba259 + 0xdaa348ec) {
    bVar5 = puVar1 == puVar28;
  }
  uVar36 = uVar20 + uVar32;
  if (~(uVar23 * -0x3946ed2d) < uVar23 * -0x73fabf10 + 0xc73ebe53) {
    uVar36 = uVar32 & uVar20;
  }
  plVar41[2] = uVar36;
  uVar36 = uVar32;
  if (((puVar29 <= puVar28) && (!bVar5)) &&
     (uVar36 = (int64_t)puVar28 - (int64_t)puVar29, puVar28 < puVar29 || uVar36 == 0)) {
    uVar36 = 0;
  }
  puVar28[uVar32] = *puVar28;
  FUN_7fffa56a5f20();
  FUN_7fffa56a5f20(puVar28 + uVar36,puVar1 + uVar36,uVar32 - uVar36);
  return;
}


// ============================================================================
// Function : FUN_7fffa52d1730  |  RVA: 0xb61730  |  Size: 251 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa52d1730(uint64_t param_1,uint32_t param_2)

{
  uint8_t bVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint32_t in_XMM4_Dc;
  uint32_t in_XMM4_Dd;
  
  uVar2 = (CONCAT44(in_XMM4_Dd,in_XMM4_Dc) << 0x2f | CONCAT44(in_XMM4_Dd,in_XMM4_Dc) >> 0x11) -
          0xbfe9b432;
  uVar4 = uVar2 * 0x4000 ^ uVar2;
  uVar4 = uVar2 << 0x38 ^ uVar4 << 0x1c ^ uVar4;
  uVar3 = uVar4 << 0x14 | uVar4 >> 0x2c;
  uVar4 = (uVar4 << 3 | uVar4 >> 0x3d) ^ (uVar4 << 0xd | uVar4 >> 0x33);
  bVar1 = (uint8_t)param_2 & 0x1f;
  uVar2 = uVar4 & uVar3;
  if ((0x1b5affdf << bVar1 | 0x1b5affdfU >> 0x20 - bVar1) <= 0xb40ead5f - (param_2 ^ 0x5eaaa340)) {
    uVar2 = uVar4 ^ uVar3;
  }
  uVar2 = (uVar2 << 0x2c | uVar2 >> 0x14) ^ (uVar2 << 0xe | uVar2 >> 0x32) ^ uVar2;
  uVar2 = (uVar2 << 0x18 | uVar2 >> 0x28) ^ (uVar2 << 0x1c | uVar2 >> 0x24) ^ uVar2;
  uVar2 = (uVar2 << 0x38 | uVar2 >> 8) ^ (uVar2 << 0x30 | uVar2 >> 0x10) ^ uVar2;
  uVar2 = (uVar2 << 0x30 | uVar2 >> 0x10) ^ (uVar2 << 0x20 | uVar2 >> 0x20) ^ uVar2;
  puVar5 = (uint64_t *)(uVar2 << 0x20 | uVar2 >> 0x20);
  FUN_7fffa56a5f20(*(uint64_t *)*puVar5,**(uint64_t **)puVar5[1],*(uint64_t *)puVar5[2]);
  return;
}


// ============================================================================
// Function : FUN_7fffa52d1830  |  RVA: 0xb61830  |  Size: 543 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
void FUN_7fffa52d1830(uint64_t param_1)

{
  int64_t lVar1;
  uint16_t uVar2;
  code *pcVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint32_t in_R11D;
  int64_t *plVar10;
  uint64_t uVar11;
  int64_t in_XMM5_Qa;
  
  uVar7 = in_XMM5_Qa + 0x1900dcae;
  uVar7 = (uVar7 * 0x100000 | uVar7 >> 0x2c) ^ (uVar7 * 0x10000000 | uVar7 >> 0x24) ^ uVar7;
  plVar10 = (int64_t *)(param_1 >> 0x22 ^ param_1);
  lVar1 = *plVar10;
  lVar5 = plVar10[1];
  uVar8 = (uVar7 << 0x38 | uVar7 >> 8) ^ (uVar7 << 0x28 | uVar7 >> 0x18) ^ uVar7;
  uVar6 = lVar5 - lVar1;
  uVar8 = (uVar8 << 0x10 | uVar8 >> 0x30) ^ (uVar8 << 0x30 | uVar8 >> 0x10) ^ uVar8;
  lVar4 = uVar8 - uVar6;
  if (uVar8 < uVar6) {
    plVar10[1] = lVar1 + uVar8;
  }
  else if (lVar4 != 0) {
    uVar9 = plVar10[2] - lVar1;
    if (uVar9 < uVar8) {
      if ((int64_t)uVar8 < 0) {
        uVar2 = (uint16_t)in_R11D ^ 0x8332;
        (*(code *)(&UNK_7fffa542b4e2 + (short)(uVar2 << 0xb | uVar2 >> 5)))();
        pcVar3 = (code *)__debugbreak();
        (*pcVar3)();
        return;
      }
      uVar2 = 0xa7a6 - (uint16_t)in_R11D ^ 0x6c7c;
      pcVar3 = (code *)((int64_t)(short)(uVar2 << 2 | uVar2 >> 0xe) + 0x7fffa526df92);
      uVar11 = (uVar9 >> 1) + uVar9;
      if (uVar11 <= uVar8) {
        uVar11 = uVar8;
      }
      if ((uVar9 >> 1 ^ 0x7fffffffffffffff) < uVar9) {
        uVar11 = 0x7fffffffffffffff;
      }
      (*pcVar3)(pcVar3,uVar7,uVar11 << 0x3c ^ uVar11);
      lVar5 = ((int64_t)pcVar3 << 0x2c | (uint64_t)pcVar3 >> 0x14) -
              (((uint64_t)pcVar3 >> 0x14) << 0x36);
      FUN_7fffa4ecf8e0(lVar5 + uVar6,0,lVar4);
      FUN_7fffa56a5f20(lVar5,lVar1,uVar6);
      if (lVar1 != 0) {
        (*(code *)((int64_t)(int)((in_R11D | 1) * 0x57c2f340) + 0x7fffa5693070))();
      }
      plVar10[2] = uVar11 + lVar5;
      plVar10[1] = uVar8 + lVar5;
      *plVar10 = lVar5;
    }
    else {
      FUN_7fffa4ecf8e0(lVar5,0,lVar4);
      plVar10[1] = lVar5 + lVar4;
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52d1b50  |  RVA: 0xb61b50  |  Size: 926 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7fffa52d1b50(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  
  bRam00007fffa47bb310 = 0;
  uRam00007fffa47bb326 = 0;
  uRam00007fffa47bb32e = 0;
  uRam00007fffa47bb316 = 0;
  uRam00007fffa47bb31e = 0;
  uRam00007fffa47bb336 = 0;
  _uRam00007fffa47bb342 = 0;
  uVar1 = rdtsc();
  lVar5 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x86e18e44386575d + 1;
  lVar8 = 3;
  while( true ) {
    lVar5 = lVar5 * 0x86e18e44386575d + 1;
    lVar6 = lVar5 * 0x86e18e44386575d + 1;
    *(char *)(lVar8 + 0x7fffa47bb2fd) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar8 + 0x7fffa47bb2fe) = (char)((uint64_t)lVar6 >> 0x20);
    if (lVar8 == 0x4b) break;
    lVar6 = lVar6 * 0x86e18e44386575d + 1;
    lVar5 = lVar6 * 0x86e18e44386575d + 1;
    *(char *)(lVar8 + 0x7fffa47bb300) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar8 + 0x7fffa47bb2ff) = (char)((uint64_t)lVar6 >> 0x20);
    lVar8 = lVar8 + 4;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47bb310 * 0x33333334 + 0x33333334) * 5;
  uVar7 = uVar2 >> 0x20;
  *(uint8_t *)((int64_t)&uRam00007fffa47bb316 + uVar7 * 8 + 3) =
       bRam00007fffa47bb345 << 2 | bRam00007fffa47bb345 >> 6;
  *(uint8_t *)((int64_t)&uRam00007fffa47bb316 + uVar7 * 8 + 7) =
       bRam00007fffa47bb349 << 2 | bRam00007fffa47bb349 >> 6;
  bVar3 = bRam00007fffa47bb344;
  *(uint8_t *)((int64_t)&uRam00007fffa47bb316 + uVar7 * 8 + 1) =
       uRam00007fffa47bb342._1_1_ << 2 | uRam00007fffa47bb342._1_1_ >> 6;
  bVar4 = bRam00007fffa47bb347;
  *(uint8_t *)((int64_t)&uRam00007fffa47bb316 + uVar7 * 8 + 2) = bVar3 << 2 | bVar3 >> 6;
  *(uint8_t *)((int64_t)&uRam00007fffa47bb316 + uVar7 * 8 + 5) = bVar4 << 2 | bVar4 >> 6;
  bVar4 = bRam00007fffa47bb348;
  *(uint8_t *)(&uRam00007fffa47bb316 + uVar7) =
       (uint8_t)uRam00007fffa47bb342 << 2 | (uint8_t)uRam00007fffa47bb342 >> 6;
  bVar3 = bRam00007fffa47bb346;
  *(uint8_t *)((int64_t)&uRam00007fffa47bb316 + uVar7 * 8 + 6) = bVar4 << 2 | bVar4 >> 6;
  *(uint8_t *)((int64_t)&uRam00007fffa47bb316 + uVar7 * 8 + 4) = bVar3 << 2 | bVar3 >> 6;
  bRam00007fffa47bb310 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa52d1ef0  |  RVA: 0xb61ef0  |  Size: 405 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52d1ef0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  bRam00007fffa47bc749 = 0;
  uRam00007fffa47bc75f = 0;
  uRam00007fffa47bc763 = 0;
  uRam00007fffa47bc74f = 0;
  uRam00007fffa47bc757 = 0;
  uRam00007fffa47bc75b = 0;
  uVar1 = rdtsc();
  lVar4 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0xaa4980d9db6b2f + 0xb;
  lVar3 = 2;
  do {
    lVar5 = lVar4 * 0xaa4980d9db6b2f + 0xb;
    lVar6 = lVar5 * 0xaa4980d9db6b2f + 0xb;
    lVar4 = lVar6 * 0xaa4980d9db6b2f + 0xb;
    *(char *)(lVar3 + 0x7fffa47bc740) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bc73e) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bc73f) = (char)((uint64_t)lVar6 >> 0x20);
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x2f);
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47bc749 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint32_t *)((uVar2 >> 0x20) * 4 + 0x7fffa47bc74f) = 0x73efe199;
  bRam00007fffa47bc749 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa52d2088  |  RVA: 0xb62088  |  Size: 54 bytes
// Callers  : FUN_7fffa5007cbc@0x897cbc, FUN_7fffa5697680@0xf27680
// Callees  : _guard_dispatch_icall@0xf30810
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_7fffa52d2088(uint64_t *param_1,uint64_t *param_2)

{
  if (param_1 != param_2) {
    do {
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52d20c0  |  RVA: 0xb620c0  |  Size: 1 bytes
// Callers  : FUN_7fffa55ca84c@0xe5a84c
// Callees  : none
// ============================================================================
void FUN_7fffa52d20c0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa52d20d0  |  RVA: 0xb620d0  |  Size: 831 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa52d2423) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d2418) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d2404) */

void FUN_7fffa52d20d0(void)

{
  uRam00007fffa47bcf10 = uRam00007fffa4780fd8;
  uRam00007fffa47bcf20 = 0x5677199bab767331;
  lRam00007fffa47bcf18 =
       (-lRam00007fffa47811d8 << 0x3d | (uint64_t)-lRam00007fffa47811d8 >> 3) - 0x7fffa5851ee8;
  uRam00007fffa47bcf28 = uRam00007fffa4780bf0 << 0x25 | uRam00007fffa4780bf0 >> 0x1b;
  uRam00007fffa47bcf40 = 0xc20400407ff7ffff;
  uRam00007fffa47bcf30 = uRam00007fffa4780fa0 << 0x3d | uRam00007fffa4780fa0 >> 3;
  uRam00007fffa47bcf48 = 0x27b82529e5833eb9;
  uRam00007fffa47bcf38 = 0x8f3913b7778cea1a;
  return;
}


// ============================================================================
// Function : FUN_7fffa52d242c  |  RVA: 0xb6242c  |  Size: 623 bytes
// Callers  : FUN_7fffa55c6b44@0xe56b44
// Callees  : FUN_7fffa5130768@0x9c0768, FUN_7fffa54511cc@0xce11cc, FUN_7fffa507ecd4@0x90ecd4, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa4ed9184@0x769184, FUN_7fffa4cf5f50@0x585f50, FUN_7fffa53ef258@0xc7f258, FUN_7fffa56a65a0@0xf365a0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7fffa52d242c(uint32_t param_1,char param_2,int64_t param_3,uint64_t *param_4)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  int iVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint32_t *puVar19;
  uint64_t *puVar20;
  int64_t lVar21;
  int64_t lVar22;
  int64_t lStackX_18;
  uint64_t *puStackX_20;
  uint8_t auStack_268 [4];
  uint32_t uStack_264;
  uint32_t auStack_260 [2];
  int64_t *plStack_258;
  uint64_t **ppuStack_250;
  uint64_t auStack_248 [70];
  
  lStackX_18 = param_3;
  puStackX_20 = param_4;
  FUN_7fffa5130768(param_3,param_4);
  iVar16 = FUN_7fffa54511cc(param_1);
  if (iVar16 == *(int *)(*(int64_t *)(lStackX_18 + 0x88) + 4)) {
    iVar16 = 0;
  }
  else {
    puVar17 = (uint64_t *)FUN_7fffa56a65a0(0x228);
    if (puVar17 == (uint64_t *)0x0) {
      FUN_7fffa52d8dd0(0);
      iVar16 = -1;
    }
    else {
      lVar21 = 4;
      lVar22 = 4;
      puVar14 = *(uint64_t **)(lStackX_18 + 0x88);
      puVar15 = auStack_248;
      do {
        puVar20 = puVar15;
        puVar18 = puVar14;
        uVar2 = puVar18[1];
        uVar11 = puVar18[2];
        uVar12 = puVar18[3];
        *puVar20 = *puVar18;
        puVar20[1] = uVar2;
        uVar2 = puVar18[4];
        uVar13 = puVar18[5];
        puVar20[2] = uVar11;
        puVar20[3] = uVar12;
        uVar11 = puVar18[6];
        uVar12 = puVar18[7];
        puVar20[4] = uVar2;
        puVar20[5] = uVar13;
        uVar2 = puVar18[8];
        uVar13 = puVar18[9];
        puVar20[6] = uVar11;
        puVar20[7] = uVar12;
        uVar11 = puVar18[10];
        uVar12 = puVar18[0xb];
        puVar20[8] = uVar2;
        puVar20[9] = uVar13;
        uVar2 = puVar18[0xc];
        uVar13 = puVar18[0xd];
        puVar20[10] = uVar11;
        puVar20[0xb] = uVar12;
        uVar11 = puVar18[0xe];
        uVar12 = puVar18[0xf];
        puVar20[0xc] = uVar2;
        puVar20[0xd] = uVar13;
        puVar20[0xe] = uVar11;
        puVar20[0xf] = uVar12;
        lVar22 = lVar22 + -1;
        puVar14 = puVar18 + 0x10;
        puVar15 = puVar20 + 0x10;
      } while (lVar22 != 0);
      uVar11 = puVar18[0x11];
      uVar12 = puVar18[0x12];
      uVar13 = puVar18[0x13];
      uVar2 = puVar18[0x14];
      puVar20[0x10] = puVar18[0x10];
      puVar20[0x11] = uVar11;
      puVar20[0x12] = uVar12;
      puVar20[0x13] = uVar13;
      puVar20[0x14] = uVar2;
      puVar14 = auStack_248;
      puVar15 = puVar17;
      do {
        puVar20 = puVar15;
        puVar18 = puVar14;
        uVar2 = puVar18[1];
        uVar11 = puVar18[2];
        uVar12 = puVar18[3];
        *puVar20 = *puVar18;
        puVar20[1] = uVar2;
        uVar2 = puVar18[4];
        uVar13 = puVar18[5];
        puVar20[2] = uVar11;
        puVar20[3] = uVar12;
        uVar11 = puVar18[6];
        uVar12 = puVar18[7];
        puVar20[4] = uVar2;
        puVar20[5] = uVar13;
        uVar2 = puVar18[8];
        uVar13 = puVar18[9];
        puVar20[6] = uVar11;
        puVar20[7] = uVar12;
        uVar11 = puVar18[10];
        uVar12 = puVar18[0xb];
        puVar20[8] = uVar2;
        puVar20[9] = uVar13;
        uVar2 = puVar18[0xc];
        uVar13 = puVar18[0xd];
        puVar20[10] = uVar11;
        puVar20[0xb] = uVar12;
        uVar11 = puVar18[0xe];
        uVar12 = puVar18[0xf];
        puVar20[0xc] = uVar2;
        puVar20[0xd] = uVar13;
        puVar20[0xe] = uVar11;
        puVar20[0xf] = uVar12;
        lVar21 = lVar21 + -1;
        puVar14 = puVar18 + 0x10;
        puVar15 = puVar20 + 0x10;
      } while (lVar21 != 0);
      uVar4 = *(uint32_t *)((int64_t)puVar18 + 0x84);
      uVar5 = *(uint32_t *)(puVar18 + 0x11);
      uVar6 = *(uint32_t *)((int64_t)puVar18 + 0x8c);
      uVar7 = *(uint32_t *)(puVar18 + 0x12);
      uVar8 = *(uint32_t *)((int64_t)puVar18 + 0x94);
      uVar9 = *(uint32_t *)(puVar18 + 0x13);
      uVar10 = *(uint32_t *)((int64_t)puVar18 + 0x9c);
      uVar2 = puVar18[0x14];
      *(uint32_t *)(puVar20 + 0x10) = *(uint32_t *)(puVar18 + 0x10);
      *(uint32_t *)((int64_t)puVar20 + 0x84) = uVar4;
      *(uint32_t *)(puVar20 + 0x11) = uVar5;
      *(uint32_t *)((int64_t)puVar20 + 0x8c) = uVar6;
      *(uint32_t *)(puVar20 + 0x12) = uVar7;
      *(uint32_t *)((int64_t)puVar20 + 0x94) = uVar8;
      *(uint32_t *)(puVar20 + 0x13) = uVar9;
      *(uint32_t *)((int64_t)puVar20 + 0x9c) = uVar10;
      puVar20[0x14] = uVar2;
      *(uint32_t *)puVar17 = 0;
      iVar16 = FUN_7fffa4cf5f50(iVar16,puVar17);
      if (iVar16 == -1) {
        puVar19 = (uint32_t *)FUN_7fffa4ed9184();
        *puVar19 = 0x16;
        FUN_7fffa52d8dd0(puVar17);
        iVar16 = -1;
      }
      else {
        if (param_2 == '\0') {
          FUN_7fffa53ef258();
        }
        piVar3 = *(int **)(lStackX_18 + 0x88);
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (*(int64_t *)(lStackX_18 + 0x88) != 0x7fffa4780250)) {
          FUN_7fffa52d8dd0();
        }
        *(uint32_t *)puVar17 = 1;
        *(uint64_t **)(lStackX_18 + 0x88) = puVar17;
        if ((_DAT_7fffa4780900 & *(uint32_t *)(lStackX_18 + 0x3a8)) == 0) {
          plStack_258 = &lStackX_18;
          ppuStack_250 = &puStackX_20;
          uStack_264 = 5;
          auStack_260[0] = 5;
          FUN_7fffa507ecd4(auStack_268,auStack_260,&plStack_258,&uStack_264);
          if (param_2 != '\0') {
            _DAT_7fffa47808f0 = *puStackX_20;
          }
        }
        FUN_7fffa52d8dd0(0);
      }
    }
  }
  return iVar16;
}


// ============================================================================
// Function : _guard_dispatch_icall  |  RVA: 0xb626b0  |  Size: 6 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: This is an inlined function */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void _guard_dispatch_icall(void)

{
  code *in_RAX;
  
  (*in_RAX)();
  return;
}


// ============================================================================
// Function : FUN_7fffa52d26d0  |  RVA: 0xb626d0  |  Size: 5176 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa52d26d0(uint64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  uint32_t uVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  char *pcVar6;
  uint32_t uVar7;
  bool bVar8;
  uint8_t bVar9;
  uint64_t *in_RAX;
  uint8_t bVar10;
  uint8_t bVar11;
  uint8_t bVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  int64_t lVar17;
  uint32_t uVar18;
  int64_t lVar19;
  uint32_t uVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  int64_t lVar23;
  uint64_t *puVar24;
  int iVar25;
  uint32_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint16_t uVar29;
  uint32_t uVar30;
  uint32_t uVar31;
  uint32_t uVar32;
  int iVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint64_t uVar36;
  uint64_t *in_R10;
  uint64_t uVar37;
  uint32_t in_R11D;
  uint64_t uVar38;
  uint64_t *puVar39;
  uint64_t *puVar40;
  uint64_t *puVar41;
  uint64_t *puVar42;
  uint64_t *puVar43;
  uint64_t uVar44;
  uint32_t uVar45;
  uint64_t uVar46;
  uint64_t uVar47;
  int64_t in_stack_00000028;
  
  uVar13 = in_R11D | 1;
  bVar9 = (uint8_t)in_R11D;
  param_1 = (param_1 << 0x1f | param_1 >> 0x21) ^ (param_1 << 2 | param_1 >> 0x3e) ^ param_1;
  uVar27 = in_stack_00000028 * 0xfffe0003fff8001 ^ in_stack_00000028 * 0x1fffc000800000;
  uVar15 = (param_1 << 0x3e | param_1 >> 2) ^ (param_1 << 4 | param_1 >> 0x3c) ^ param_1;
  uVar34 = uVar15 << 8 | uVar15 >> 0x38;
  puVar42 = (uint64_t *)(in_stack_00000028 * -0x1fffc00000000000 ^ uVar27);
  uVar37 = uVar34 ^ uVar15;
  if ((uint64_t)~(-0x57c79218 << (bVar9 & 0x1f) | 0xa8386de8U >> 0x20 - (bVar9 & 0x1f)) ==
      0xffffffffef374cc4) {
    uVar37 = uVar34 & uVar15;
  }
  uVar37 = uVar37 ^ (uVar15 << 0x3c | uVar15 >> 4);
  uVar35 = (uVar37 << 0x10 | uVar37 >> 0x30) ^ uVar37;
  uVar15 = uVar37 << 0x38 | uVar37 >> 8;
  uVar46 = ~uVar15;
  uVar34 = ~param_1;
  uVar28 = uVar46 & uVar35;
  uVar36 = ~uVar35;
  uVar38 = (~(param_1 | uVar35) & uVar46) * -0x128219bad;
  uVar37 = param_1 + 1;
  if (uVar13 * 0x41616eae <= (0x77e1402b << (bVar9 & 0x1f) | 0x77e1402bU >> 0x20 - (bVar9 & 0x1f)))
  {
    uVar37 = uVar34;
  }
  uVar15 = (uVar37 ^ uVar28) * -0x11af70d3 + ((uVar15 ^ uVar36) & uVar34) * 0x68219b1f +
           (uint64_t)(in_R11D + 4) * ((uVar46 ^ uVar35) & param_1) + (uVar34 ^ uVar28) * 0x698dd641
           + (param_1 | uVar35 | uVar15) * -0xc000008d +
           ((uVar36 & uVar15 & param_1) + (uVar28 & uVar34)) * 0x57de656e +
           ((uVar35 ^ uVar15) & param_1 | (uVar46 | uVar36) & uVar34) * 0x68219b20;
  uVar37 = uVar15 | uVar38;
  if ((uint64_t)((in_R11D ^ 0xee8450a) + 0x61e18c6e) <
      (uint64_t)(int64_t)(int)(uVar13 * -0x41cee433)) {
    uVar37 = uVar38 + uVar15;
  }
  uVar37 = (uVar37 << 0x20 | uVar37 >> 0x20) ^ (uVar37 << 0x30 | uVar37 >> 0x10) ^ uVar37;
  uVar15 = uVar37 >> 0x20;
  uVar34 = uVar37 << 0x20 | uVar15;
  uVar15 = uVar15 << 0x3e;
  uVar37 = uVar15 ^ uVar34;
  if ((in_R11D + 0xbf4e39c5) * -0x797a4201 <=
      (-0x545b8ab9 << (bVar9 & 0x1f) | 0xaba47547U >> 0x20 - (bVar9 & 0x1f))) {
    uVar37 = uVar34 + uVar15;
  }
  uVar3 = *(uint32_t *)(uVar37 + 0x18);
  if ((0xfa3e685bU >> (bVar9 & 0x1f) | -0x5c197a5 << 0x20 - (bVar9 & 0x1f)) <
      uVar13 * -0x6b8c4bfa + 0xce14a957) {
    uVar18 = in_R11D + 0x50dfeaa8;
  }
  else {
    uVar18 = uVar13 * 0x1c19ae45;
  }
  lVar17 = *(int64_t *)(uVar37 + 8);
  uVar20 = (int)uVar27 - (int)lVar17;
  bVar10 = (uint8_t)uVar18;
  uVar14 = uVar18 | 1;
  bVar11 = (uint8_t)*(uint32_t *)(uVar37 + 0x104);
  uVar26 = *(uint32_t *)(uVar37 + 0x104) | 1;
  if ((uint64_t)((uVar14 * -0x64b3f3de - in_R11D) * -0x2de3f1fb + 0x23be3cb6) <
      (uint64_t)
      (int64_t)
      (int)(((uVar18 ^ 0x437008cb) << 0x1a | (uVar18 ^ 0x437008cb) >> 6) + in_R11D + 0x538f32b2)) {
    uVar26 = 1 << (bVar11 & 0x1f);
  }
  uVar31 = uVar20 - uVar26;
  if (uVar20 < uVar26) {
    uVar31 = 0;
  }
  uVar22 = 1 << (*(uint8_t *)(uVar37 + 0x100) & 0x1f);
  uVar32 = *(uint32_t *)(uVar37 + 0x1c);
  puVar4 = *(uint64_t **)(uVar37 + 0xf8);
  uVar45 = -uVar22;
  if ((uint64_t)(int64_t)(int)(((-0x211fc8c6 - uVar18) * -0x3dac6087 + -0x2b84a2cf) * uVar13) <
      (uint64_t)(uVar14 * 0x5ce841b9)) {
    uVar45 = uVar22;
  }
  uVar34 = *puVar42 * -0x30e4432340650000 >> (0x42U - *(char *)(puVar4 + 0x21) & 0x3f);
  uVar21 = *(uint32_t *)(uVar37 + 0x2c);
  uVar15 = (uint64_t)uVar21;
  bVar12 = 0x40 - (char)*(uint32_t *)(uVar37 + 0x108);
  uVar7 = uVar20;
  if (uVar20 < uVar21) {
    uVar7 = uVar21;
  }
  uVar45 = uVar45 + uVar20;
  if (uVar20 - uVar32 <= uVar22) {
    uVar45 = uVar32;
  }
  if (*(int *)(uVar37 + 0x28) != 0) {
    uVar45 = uVar32;
  }
  uVar28 = (uint64_t)uVar45;
  uVar22 = 1 << (*(uint8_t *)(uVar37 + 0x10c) & 0x1f);
  puVar2 = (uint64_t *)(lVar17 + (uint64_t)uVar3);
  lVar5 = *(int64_t *)(uVar37 + 0x80);
  lVar23 = *(int64_t *)(uVar37 + 0x70);
  uVar32 = *(uint32_t *)(uVar37 + 300);
  for (; uVar15 != uVar7;
      uVar15 = ((uVar44 ^ uVar36) + (~(uVar28 | uVar15) & uVar27) * 0xa71da8bf +
                (uVar46 & uVar28) * -0xd148e639 + ((uVar38 ^ uVar27) & uVar36) * -0x2a2b3d78 +
                (uVar44 | uVar28) * 0xa71da8c1 + (uVar36 ^ uVar46) * 0x2a2b3d77 + uVar47) -
               ((uVar35 & ~(uVar27 | uVar28)) + (~uVar27 & uVar38 & uVar28))) {
    uVar35 = (uint64_t)(*(int64_t *)(lVar17 + uVar15) * -0x30e4432340650000) >> (bVar12 & 0x3f);
    *(uint32_t *)(lVar5 + (uint64_t)((uint32_t)uVar15 & ~(-1 << (bVar11 & 0x1f))) * 4) =
         *(uint32_t *)(lVar23 + uVar35 * 4);
    *(uint32_t *)(lVar23 + uVar35 * 4) = (uint32_t)uVar15;
    if (uVar32 != ((uint16_t)(0x112U >> (bVar10 & 0xf) | 0x112 << 0x10 - (bVar10 & 0xf)) - in_R11D &
                  0xffff)) break;
    uVar38 = ~uVar15;
    uVar36 = ~uVar28;
    uVar44 = ~uVar27 & uVar15;
    uVar46 = uVar27 ^ uVar15;
    uVar30 = (in_R11D ^ 0x6b854147) * 0xe9fa31f;
    uVar21 = (0x7e6f6ebb << (bVar9 & 0x1f) | 0x7e6f6ebbU >> 0x20 - (bVar9 & 0x1f)) + 0x91eefb51;
    uVar35 = uVar38;
    if ((uVar21 << (bVar10 & 0x1f) | uVar21 >> 0x20 - (bVar10 & 0x1f)) <
        (uVar30 >> (bVar10 & 0x1f) | uVar30 << 0x20 - (bVar10 & 0x1f))) {
      uVar35 = uVar15;
    }
    uVar47 = (uVar28 ^ uVar46) * -0xa71da8c1;
    if ((~(uVar14 * 0x3948ec6a) << 4 | ~(uVar14 * 0x3948ec6a) >> 0x1c) * 0x1f6b146d != -0x40de7b88)
    {
      uVar47 = uVar28 ^ uVar46 ^ 0xffffffff58e2573f;
    }
  }
  *(uint32_t *)(uVar37 + 0x2c) = uVar20;
  uVar32 = *(uint32_t *)(lVar23 + (*puVar42 * -0x30e4432340650000 >> (bVar12 & 0x3f)) * 4);
  uVar37 = 3;
  if (uVar45 <= uVar32) {
    uVar15 = uVar37;
    do {
      puVar39 = (uint64_t *)(lVar17 + (uint64_t)uVar32);
      if (*(int *)((uVar15 - 3) + (int64_t)puVar39) == *(int *)((int64_t)puVar42 + (uVar15 - 3)))
      {
        puVar16 = puVar42;
        if (puVar42 < (uint64_t *)((int64_t)in_RAX - 7U)) {
          if (*puVar39 == *puVar42) {
            puVar39 = (uint64_t *)(lVar17 + 8 + (uint64_t)uVar32);
            lVar23 = 0;
            do {
              puVar16 = puVar16 + 1;
              if ((uint64_t *)((int64_t)in_RAX - 7U) <= puVar16) goto joined_r0x7fffa52d2f76;
              uVar37 = *puVar39;
              lVar23 = lVar23 + 8;
              puVar39 = puVar39 + 1;
            } while (uVar37 == *puVar16);
            uVar21 = 0;
            for (uVar37 = uVar37 ^ *puVar16; (uVar37 & 1) == 0;
                uVar37 = uVar37 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar37 = (uint64_t)(uVar21 >> 3) + lVar23;
          }
          else {
            uVar21 = 0;
            for (uVar37 = *puVar39 ^ *puVar42; (uVar37 & 1) == 0;
                uVar37 = uVar37 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar37 = (uint64_t)(uVar21 >> 3);
          }
        }
        else {
joined_r0x7fffa52d2f76:
          if ((puVar16 < (uint64_t *)((int64_t)in_RAX - 3U)) && ((int)*puVar39 == (int)*puVar16))
          {
            puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
            puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
          }
          if ((puVar16 < (uint64_t *)((int64_t)in_RAX - 1U)) &&
             ((short)*puVar39 == (short)*puVar16)) {
            puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
            puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
          }
          if (puVar16 < in_RAX) {
            puVar16 = (uint64_t *)
                      ((int64_t)puVar16 + (uint64_t)((char)*puVar39 == (char)*puVar16));
          }
          uVar37 = (int64_t)puVar16 - (int64_t)puVar42;
        }
        if (uVar15 < uVar37) {
          *in_R10 = (uint64_t)((uVar20 + 3) - uVar32);
          uVar15 = uVar37;
          if ((uint64_t *)((int64_t)puVar42 + uVar37) == in_RAX) break;
        }
      }
      uVar37 = uVar15;
      if ((uVar32 <= uVar31) ||
         (uVar22 = uVar22 - 1, uVar22 == ((0x55f8 - uVar18) * (in_R11D | 1) - 0x247f & 0xffff)))
      break;
      uVar32 = *(uint32_t *)(lVar5 + (uint64_t)(uVar32 & uVar26 - 1) * 4);
      uVar15 = uVar37;
      if (uVar32 < uVar45) break;
    } while( true );
  }
  uVar26 = 3;
  if (uVar22 < 3) {
    uVar26 = uVar22;
  }
  if ((int64_t)(uint64_t)(((in_R11D - uVar18) + -0x534b6ff8) * -0xed7d4a1) <
      (int64_t)(int)((in_R11D + 0x64ce7a9) * 0x20000 | in_R11D + 0x64ce7a9 >> 0xf)) {
    uVar31 = (0x569a694eU >> (bVar10 & 0x1f) | 0x569a694e << 0x20 - (bVar10 & 0x1f)) + in_R11D;
  }
  else {
    uVar31 = uVar14 * -0xa1fca52;
  }
  pcVar6 = (char *)*puVar4;
  lVar5 = puVar4[1];
  uVar32 = *(uint32_t *)(puVar4[0xe] + 0xc + uVar34 * 0x10);
  iVar25 = ((int)pcVar6 - (int)lVar5) - uVar3;
  if (uVar22 == 0) {
    uVar26 = 0;
  }
  else {
    puVar16 = (uint64_t *)((int64_t)in_RAX + -7);
    puVar39 = (uint64_t *)((int64_t)puVar42 + 4);
    uVar15 = 0;
    do {
      uVar29 = (short)(uVar31 | 1) * -0x44f2 + 0x46ae;
      uVar32 = *(uint32_t *)(puVar4[0xe] + uVar34 * 0x10 + uVar15 * 4);
      if (uVar32 == (uint16_t)(uVar29 << (bVar9 & 0xf) | uVar29 >> 0x10 - (bVar9 & 0xf)))
      goto LAB_7fffa52d3af2;
      piVar1 = (int *)(lVar5 + (uint64_t)uVar32);
      if (*piVar1 == (int)*puVar42) {
        puVar24 = (uint64_t *)(piVar1 + 1);
        puVar40 = (uint64_t *)(((int64_t)pcVar6 - (int64_t)puVar24) + (int64_t)puVar39);
        if (in_RAX <= puVar40) {
          puVar40 = in_RAX;
        }
        puVar41 = puVar39;
        puVar43 = puVar24;
        if (puVar39 < (uint64_t *)((int64_t)puVar40 - 7U)) {
          if (*puVar24 == *puVar39) {
            lVar23 = lVar5 + 0xc + (uint64_t)uVar32;
            lVar19 = 0;
            do {
              puVar41 = (uint64_t *)((int64_t)puVar42 + lVar19 + 0xc);
              if ((uint64_t *)((int64_t)puVar40 - 7U) <= puVar41) {
                puVar43 = (uint64_t *)(lVar23 + lVar19);
                goto LAB_7fffa52d3303;
              }
              uVar27 = *(uint64_t *)(lVar23 + lVar19);
              lVar19 = lVar19 + 8;
            } while (uVar27 == *puVar41);
            uVar45 = 0;
            for (uVar27 = *puVar41 ^ uVar27; (uVar27 & 1) == 0;
                uVar27 = uVar27 >> 1 | 0x8000000000000000) {
              uVar45 = uVar45 + 1;
            }
            uVar27 = (uint64_t)(uVar45 >> 3) + lVar19;
          }
          else {
            uVar45 = 0;
            for (uVar27 = *puVar24 ^ *puVar39; (uVar27 & 1) == 0;
                uVar27 = uVar27 >> 1 | 0x8000000000000000) {
              uVar45 = uVar45 + 1;
            }
            uVar27 = (uint64_t)(uVar45 >> 3);
          }
        }
        else {
LAB_7fffa52d3303:
          if ((puVar41 < (uint64_t *)((int64_t)puVar40 - 3U)) && ((int)*puVar43 == (int)*puVar41))
          {
            puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
            puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
          }
          if ((puVar41 < (uint64_t *)((int64_t)puVar40 - 1U)) &&
             ((short)*puVar43 == (short)*puVar41)) {
            puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
            puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
          }
          if (puVar41 < puVar40) {
            puVar41 = (uint64_t *)
                      ((int64_t)puVar41 + (uint64_t)((char)*puVar43 == (char)*puVar41));
          }
          uVar27 = (int64_t)puVar41 - (int64_t)puVar39;
        }
        if ((char *)((int64_t)puVar24 + uVar27) == pcVar6) {
          puVar40 = (uint64_t *)((int64_t)puVar39 + uVar27);
          puVar41 = puVar2;
          puVar24 = puVar40;
          if (puVar40 < puVar16) {
            if (*puVar2 == *puVar40) {
              puVar24 = (uint64_t *)((int64_t)puVar42 + uVar27 + 0xc);
              lVar23 = 8;
              if (puVar24 < puVar16) {
LAB_7fffa52d33e0:
                if (*(uint64_t *)((int64_t)puVar2 + lVar23) == *puVar24)
                goto code_r0x7fffa52d33f0;
                uVar45 = 0;
                for (uVar28 = *(uint64_t *)((int64_t)puVar2 + lVar23) ^ *puVar24;
                    (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x8000000000000000) {
                  uVar45 = uVar45 + 1;
                }
                uVar28 = (uint64_t)(uVar45 >> 3) + lVar23;
                goto LAB_7fffa52d34bc;
              }
LAB_7fffa52d33fd:
              puVar41 = (uint64_t *)(lVar23 + (int64_t)puVar2);
              goto LAB_7fffa52d3408;
            }
            uVar45 = 0;
            for (uVar28 = *puVar40 ^ *puVar2; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar45 = uVar45 + 1;
            }
            uVar28 = (uint64_t)(uVar45 >> 3);
          }
          else {
LAB_7fffa52d3408:
            if ((puVar24 < (uint64_t *)((int64_t)in_RAX - 3U)) && ((int)*puVar41 == (int)*puVar24)
               ) {
              puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
              puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
            }
            if ((puVar24 < (uint64_t *)((int64_t)in_RAX - 1U)) &&
               ((short)*puVar41 == (short)*puVar24)) {
              puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
              puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
            }
            if (puVar24 < in_RAX) {
              puVar24 = (uint64_t *)
                        ((int64_t)puVar24 + (uint64_t)((char)*puVar41 == (char)*puVar24));
            }
            uVar28 = (int64_t)puVar24 - (int64_t)puVar40;
          }
LAB_7fffa52d34bc:
          uVar27 = uVar27 + uVar28;
        }
        uVar27 = uVar27 + 4;
        if (uVar37 < uVar27) {
          uVar32 = (uVar20 + 3 + iVar25) - uVar32;
          uVar37 = (uint64_t)uVar32;
          if ((int64_t)(uint64_t)(((uVar31 | 1) * 0x49086d00 + in_R11D ^ 0x9157e069) + 0xfe31bcb1)
              <= (int64_t)(int)((uVar14 * 0x60e84d84 ^ 0xc0000093) * uVar13)) {
            uVar37 = (int64_t)(int)uVar32;
          }
          *in_R10 = uVar37;
          uVar37 = uVar27;
          if ((uint64_t *)((int64_t)puVar42 + uVar27) == in_RAX) goto LAB_7fffa52d3af5;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar26);
    uVar32 = *(uint32_t *)(puVar4[0xe] + (uVar34 * 4 | 3) * 4);
  }
  uVar14 = uVar22 - uVar26;
  if ((uVar32 & 0xff) <= uVar22 - uVar26) {
    uVar14 = uVar32 & 0xff;
  }
  if (uVar14 == 0) {
LAB_7fffa52d3af2:
    uVar27 = uVar37;
LAB_7fffa52d3af5:
    return (uVar27 << 0x35 | uVar27 >> 0xb) ^ (uVar27 << 0x24 | uVar27 >> 0x1c) ^ uVar27;
  }
  if (7 < uVar14) {
    uVar15 = 8;
    while( true ) {
      bVar8 = (uVar14 & 0xf8) < uVar15;
      if ((0x38b8a9e6 << (bVar9 & 0x1f) | 0x38b8a9e6U >> 0x20 - (bVar9 & 0x1f)) + uVar18 ==
          -0x7dcc485e) {
        bVar8 = (uVar14 & 0xf8) == uVar15;
      }
      if (bVar8) break;
      uVar15 = uVar15 + 8;
    }
  }
  if ((uVar14 & 7) != 0) {
    uVar15 = 0;
    do {
      uVar15 = uVar15 + 4;
    } while ((uVar14 & 7) << 2 != uVar15);
  }
  uVar15 = (uint64_t)(uVar32 >> 8);
  iVar33 = uVar20 + 3 + iVar25;
  if (~((0x18ad6d7eU >> (bVar9 & 0x1f) | 0x18ad6d7e << 0x20 - (bVar9 & 0x1f)) + uVar18) <=
      uVar13 * (uVar18 + 0x8a940258) + 0x309e3c1e) {
    iVar33 = (uVar20 + 3) * iVar25;
  }
  puVar39 = (uint64_t *)((int64_t)puVar42 + 4);
  iVar25 = (int)*puVar42;
  lVar17 = (uint64_t)uVar3 + lVar17 + 8;
  uVar13 = 0;
  do {
    uVar3 = *(uint32_t *)(puVar4[0x10] + uVar15 * 4);
    uVar27 = (uint64_t)uVar3;
    if (*(int *)(lVar5 + uVar27) == iVar25) {
      puVar40 = (uint64_t *)(lVar5 + uVar27 + 4);
      puVar16 = (uint64_t *)(((int64_t)pcVar6 - (int64_t)puVar40) + (int64_t)puVar39);
      if (in_RAX <= puVar16) {
        puVar16 = in_RAX;
      }
      puVar24 = puVar39;
      puVar41 = puVar40;
      if (puVar39 < (uint64_t *)((int64_t)puVar16 - 7U)) {
        uVar20 = (uVar18 ^ 0x277a3847) + 0x7d0281f6;
        uVar26 = (uVar18 - in_R11D) + 0x765f954d;
        uVar34 = *puVar40;
        uVar28 = *puVar39;
        bVar8 = uVar28 <= uVar34;
        if ((uVar20 << (bVar9 & 0x1f) | uVar20 >> 0x20 - (bVar9 & 0x1f)) <=
            (uVar26 * 0x10000 | uVar26 >> 0x10)) {
          bVar8 = uVar34 == uVar28;
        }
        if (bVar8) {
          lVar23 = lVar5 + 0xc + uVar27;
          lVar19 = 0;
          do {
            puVar24 = (uint64_t *)((int64_t)puVar42 + lVar19 + 0xc);
            if ((uint64_t *)((int64_t)puVar16 - 7U) <= puVar24) {
              puVar41 = (uint64_t *)(lVar23 + lVar19);
              goto LAB_7fffa52d393f;
            }
            uVar27 = *(uint64_t *)(lVar23 + lVar19);
            lVar19 = lVar19 + 8;
          } while (uVar27 == *puVar24);
          uVar26 = 0;
          for (uVar27 = *puVar24 ^ uVar27; (uVar27 & 1) == 0;
              uVar27 = uVar27 >> 1 | 0x8000000000000000) {
            uVar26 = uVar26 + 1;
          }
          uVar27 = (uint64_t)(uVar26 >> 3) + lVar19;
        }
        else {
          uVar26 = 0;
          for (uVar34 = uVar34 ^ uVar28; (uVar34 & 1) == 0;
              uVar34 = uVar34 >> 1 | 0x8000000000000000) {
            uVar26 = uVar26 + 1;
          }
          uVar27 = (uint64_t)(uVar26 >> 3);
        }
      }
      else {
LAB_7fffa52d393f:
        if ((puVar24 < (uint64_t *)((int64_t)puVar16 - 3U)) && ((int)*puVar41 == (int)*puVar24)) {
          puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
          puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
        }
        if ((puVar24 < (uint64_t *)((int64_t)puVar16 - 1U)) &&
           ((short)*puVar41 == (short)*puVar24)) {
          puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
          puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
        }
        if (puVar24 < puVar16) {
          puVar24 = (uint64_t *)((int64_t)puVar24 + (uint64_t)((char)*puVar41 == (char)*puVar24))
          ;
        }
        uVar27 = (int64_t)puVar24 - (int64_t)puVar39;
      }
      if ((char *)((int64_t)puVar40 + uVar27) == pcVar6) {
        puVar16 = (uint64_t *)((int64_t)puVar39 + uVar27);
        puVar24 = puVar2;
        puVar40 = puVar16;
        if (puVar16 < (uint64_t *)((int64_t)in_RAX - 7U)) {
          if (*puVar2 == *puVar16) {
            lVar23 = 0;
            do {
              puVar40 = (uint64_t *)((int64_t)puVar42 + lVar23 + uVar27 + 0xc);
              if ((uint64_t *)((int64_t)in_RAX - 7U) <= puVar40) {
                puVar24 = (uint64_t *)(lVar23 + lVar17);
                goto LAB_7fffa52d3a42;
              }
              uVar34 = *(uint64_t *)(lVar17 + lVar23);
              lVar23 = lVar23 + 8;
            } while (uVar34 == *puVar40);
            uVar26 = 0;
            for (uVar34 = uVar34 ^ *puVar40; (uVar34 & 1) == 0;
                uVar34 = uVar34 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            uVar34 = (uint64_t)(uVar26 >> 3) + lVar23;
          }
          else {
            uVar26 = 0;
            for (uVar34 = *puVar2 ^ *puVar16; (uVar34 & 1) == 0;
                uVar34 = uVar34 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            uVar34 = (uint64_t)(uVar26 >> 3);
          }
        }
        else {
LAB_7fffa52d3a42:
          if ((puVar40 < (uint64_t *)((int64_t)in_RAX - 3U)) && ((int)*puVar24 == (int)*puVar40))
          {
            puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
            puVar40 = (uint64_t *)((int64_t)puVar40 + 4);
          }
          if ((puVar40 < (uint64_t *)((int64_t)in_RAX - 1U)) &&
             ((short)*puVar24 == (short)*puVar40)) {
            puVar40 = (uint64_t *)((int64_t)puVar40 + 2);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
          }
          if (puVar40 < in_RAX) {
            puVar40 = (uint64_t *)
                      ((int64_t)puVar40 + (uint64_t)((char)*puVar24 == (char)*puVar40));
          }
          uVar34 = (int64_t)puVar40 - (int64_t)puVar16;
        }
        uVar27 = uVar27 + uVar34;
      }
      uVar27 = uVar27 + 4;
      if (uVar37 < uVar27) {
        *in_R10 = (uint64_t)(iVar33 - uVar3);
        if ((uint64_t *)((int64_t)puVar42 + uVar27) == in_RAX) goto LAB_7fffa52d3af5;
        iVar25 = (int)*puVar42;
        uVar37 = uVar27;
      }
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == uVar14) goto LAB_7fffa52d3af2;
    uVar15 = uVar15 + 1;
  } while( true );
code_r0x7fffa52d33f0:
  puVar24 = puVar24 + 1;
  lVar23 = lVar23 + 8;
  if (puVar16 <= puVar24) goto LAB_7fffa52d33fd;
  goto LAB_7fffa52d33e0;
}


// ============================================================================
// Function : FUN_7fffa52d3b30  |  RVA: 0xb63b30  |  Size: 59 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa52d3b5f) */

uint64_t FUN_7fffa52d3b30(void)

{
  uint32_t in_EAX;
  uint64_t uStack_8;
  
  uStack_8 = CONCAT44(0x7b576f7c,in_EAX);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa52d3b70  |  RVA: 0xb63b70  |  Size: 60 bytes
// Callers  : none
// Callees  : FUN_7fffa560b2b0@0xe9b2b0
// ============================================================================
uint64_t * FUN_7fffa52d3b70(uint64_t *param_1,int64_t param_2)

{
  *param_1 = &PTR_FUN_7fffa56f3928;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_7fffa560b2b0(param_2 + 8);
  *param_1 = std::length_error::vftable;
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa52d3bb0  |  RVA: 0xb63bb0  |  Size: 126 bytes
// Callers  : FUN_7fffa548d338@0xd1d338, FUN_7fffa560b2ce@0xe9b2ce
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184
// ============================================================================
uint64_t FUN_7fffa52d3bb0(char *param_1,int64_t param_2,int64_t param_3)

{
  char cVar1;
  uint32_t *puVar2;
  char *pcVar3;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = pcVar3[param_3 - (int64_t)param_1];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = '\0';
      puVar2 = (uint32_t *)FUN_7fffa4ed9184();
      *puVar2 = 0x22;
      FUN_7fffa55c8ce0();
      return 0x22;
    }
    *param_1 = '\0';
  }
  puVar2 = (uint32_t *)FUN_7fffa4ed9184();
  *puVar2 = 0x16;
  FUN_7fffa55c8ce0();
  return 0x16;
}


// ============================================================================
// Function : FUN_7fffa52d3c30  |  RVA: 0xb63c30  |  Size: 80 bytes
// Callers  : FUN_7fffa55ce178@0xe5e178
// Callees  : FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
void FUN_7fffa52d3c30(int64_t param_1)

{
  int64_t lVar1;
  
  if (param_1 != 0) {
    for (lVar1 = param_1; lVar1 != param_1 + 0x1200; lVar1 = lVar1 + 0x48) {
      (*(code *)&DAT_7ff850519980)(lVar1);
    }
    FUN_7fffa52d8dd0(param_1);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52d3c80  |  RVA: 0xb63c80  |  Size: 207 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52d3c80(uint64_t param_1,uint8_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  code *pcVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  
  param_4 = (param_4 << 0xf | param_4 >> 0x31) ^ (param_4 << 0x18 | param_4 >> 0x28) ^ param_4;
  param_4 = (param_4 << 0x1e | param_4 >> 0x22) ^ (param_4 << 0x30 | param_4 >> 0x10) ^ param_4;
  param_4 = (param_4 << 0x20 | param_4 >> 0x20) ^ (param_4 << 0x3c | param_4 >> 4) ^ param_4;
  plVar5 = (int64_t *)(param_4 << 8 | param_4 >> 0x38);
  lVar1 = *plVar5;
  if (lVar1 != 0) {
    uVar4 = plVar5[2] - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (uint64_t)((lVar1 + -8) - lVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = uVar4 + 0x27;
    }
    (*(code *)(&UNK_7fffa5091b8b +
              (int)(0xffc51d7fU >> (param_2 & 0x1f) | -0x3ae281 << 0x20 - (param_2 & 0x1f))))
              (lVar3,uVar4);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52d3d80  |  RVA: 0xb63d80  |  Size: 841 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa52d3d80(uint64_t param_1,int64_t param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint8_t bVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  code *pcVar6;
  uint8_t (*pauVar7) [16];
  uint64_t uVar8;
  uint32_t in_R10D;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint8_t (*pauVar11) [16];
  uint64_t uVar12;
  int64_t in_XMM4_Qa;
  
  uVar4 = param_2 * 0x794072ba41e2c013;
  uVar4 = (param_2 * 0x483c580260000000 | uVar4 >> 0x23) ^ (uVar4 << 0x32 | uVar4 >> 0xe) ^ uVar4;
  uVar4 = (uVar4 << 0x3a | uVar4 >> 6) ^ (uVar4 << 0x24 | uVar4 >> 0x1c) ^ uVar4;
  uVar4 = (uVar4 << 8 | uVar4 >> 0x38) ^ (uVar4 << 0x34 | uVar4 >> 0xc) ^ uVar4;
  uVar4 = (uVar4 << 0x28 | uVar4 >> 0x18) ^ (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar4;
  uVar12 = in_XMM4_Qa + 0xee2b93fa;
  lVar2 = param_3[2];
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) ^ (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar4;
  uVar8 = uVar4 << 0x20 | uVar4 >> 0x20;
  uVar5 = (*(code *)((int64_t)(short)((uint16_t)in_R10D + 0x51e8) + 0x7fffa517d6d4))(uVar8);
  uVar12 = (uVar12 << 0x3a | uVar12 >> 6) ^ (uVar12 * 0x1000 | uVar12 >> 0x34) ^ uVar12;
  uVar12 = (uVar12 << 0x34 | uVar12 >> 0xc) ^ (uVar12 << 0x18 | uVar12 >> 0x28) ^ uVar12;
  uVar12 = (uVar12 << 0x30 | uVar12 >> 0x10) ^ (uVar12 << 0x28 | uVar12 >> 0x18) ^ uVar12;
  uVar12 = (uVar12 << 0x20 | uVar12 >> 0x20) ^ (uVar12 << 0x10 | uVar12 >> 0x30) ^ uVar12;
  uVar4 = (uVar12 << 0x2e | uVar12 >> 0x12) ^ (uVar12 << 0x10 | uVar12 >> 0x30) ^
          (uVar12 << 0x20 | uVar12 >> 0x20);
  uVar12 = (uVar4 << 0x1c | uVar4 >> 0x24) ^ uVar4;
  uVar10 = uVar4 << 0x20 | uVar4 >> 0x20;
  uVar4 = uVar10 & uVar12;
  if ((int64_t)(int)(in_R10D + 0xd9411f5d ^ 0x2442e831) <=
      (int64_t)(uint64_t)((in_R10D ^ 0xa20bf3c7) * -0x46958285 + 0x6d899217)) {
    uVar4 = uVar10 ^ uVar12;
  }
  pauVar11 = (uint8_t (*) [16])(uVar4 << 8 | uVar4 >> 0x38);
  if (0x7ffffffffffffffeU - lVar2 < uVar5) {
    (*(code *)(&UNK_7fffa51a1a53 + (short)(((uint16_t)in_R10D ^ 0xf3ba) + 0x634b ^ 0x9574)))();
    pcVar6 = (code *)__debugbreak();
    (*pcVar6)();
    return;
  }
  puVar9 = (uint64_t *)*param_3;
  uVar12 = param_3[3];
  uVar4 = lVar2 + uVar5;
  *pauVar11 = (uint8_t  [16])0x0;
  if (uVar4 < 8) {
    uVar10 = 7;
    pauVar7 = pauVar11;
  }
  else {
    uVar10 = 10;
    if (10 < (uVar4 | 7)) {
      uVar10 = uVar4 | 7;
    }
    if (0x7ffffffffffffffd < uVar10) {
      uVar10 = 0x7ffffffffffffffe;
    }
    uVar1 = uVar10 * 2 + 2;
    pcVar6 = (code *)((int64_t)(int)(-0x71d4974 - in_R10D) + 0x7fffa5273e58);
    (*pcVar6)(uVar1 << 0x3c ^ uVar1,-0x71d4974 - in_R10D,(0x1f7a2f6e - in_R10D) * 0x5a9e8773);
    pauVar7 = (uint8_t (*) [16])
              (((int64_t)pcVar6 << 0x2c | (uint64_t)pcVar6 >> 0x14) -
              (((uint64_t)pcVar6 >> 0x14) << 0x36));
    *(uint8_t (**) [16])*pauVar11 = pauVar7;
  }
  *(uint64_t *)pauVar11[1] = uVar4;
  bVar3 = (uint8_t)in_R10D & 0x1f;
  if (uVar12 <= (0x7000 << bVar3 | 0x7000U >> 0x20 - bVar3)) {
    puVar9 = param_3;
  }
  *(uint64_t *)(pauVar11[1] + 8) = uVar10;
  FUN_7fffa56a5f20(pauVar7,uVar8,uVar5 * 2);
  FUN_7fffa56a5f20(*pauVar7 + uVar5 * 2,puVar9,lVar2 * 2);
  *(uint16_t *)(*pauVar7 + uVar4 * 2) = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa52d40d0  |  RVA: 0xb640d0  |  Size: 5686 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52d40d0(void) {
    /* +0xb640d0 */ __asm { PUSH R13 }
    /* +0xb640d2 */ __asm { PUSH RBP }
    /* +0xb640d3 */ __asm { PUSH R15 }
    /* +0xb640d5 */ __asm { PUSH R12 }
    /* +0xb640d7 */ __asm { PUSH R14 }
    /* +0xb640d9 */ __asm { PUSH RDI }
    /* +0xb640da */ __asm { PUSH RBX }
    /* +0xb640db */ __asm { PUSH RSI }
    /* +0xb640dc */ __asm { SUB RSP,0x1f8 }
    /* +0xb640e3 */ __asm { MOV dword ptr [RSP + 0x40],0x37c648df }
    /* +0xb640eb */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xb640ef */ __asm { CMP EDX,0x8a4959ee }
    /* +0xb640f5 */ __asm { JNC 0x7fffa52d57af }
    /* +0xb640fb */ __asm { MOV qword ptr [RSP + 0xb0],R8 }
    /* +0xb64103 */ __asm { MOV RAX,-0x7c9a946e51875990 }
    /* +0xb6410d */ __asm { MOV R11,-0x7c9a946e518759fe }
    /* +0xb64117 */ __asm { MOV RDX,0x1f36b4bc0d13e4e3 }
    /* +0xb64121 */ __asm { MOV R9,0x1f59b4ce0d61e4a6 }
    /* +0xb6412b */ __asm { MOV qword ptr [RSP + 0x180],R9 }
    /* +0xb64133 */ __asm { MOV qword ptr [RSP + 0x188],R11 }
    /* +0xb6413b */ __asm { MOVAPS XMM5,xmmword ptr [RSP + 0x180] }
    /* +0xb64143 */ __asm { MOV qword ptr [RSP + 0x1b8],RDX }
    /* +0xb6414b */ __asm { MOV qword ptr [RSP + 0x40],RDX }
    /* +0xb64150 */ __asm { MOV qword ptr [RSP + 0x170],RAX }
    /* +0xb64158 */ __asm { MOV qword ptr [RSP + 0x48],RAX }
    /* +0xb6415d */ __asm { LEA R11,[RSP + 0x40] }
    /* +0xb64162 */ __asm { XORPS XMM5,xmmword ptr [R11] }
    /* +0xb64166 */ __asm { MOVAPS xmmword ptr [RSP + 0x180],XMM5 }
    /* +0xb6416e */ __asm { MOV dword ptr [RSP + 0x40],0xff02219f }
    /* +0xb64176 */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xb6417a */ __asm { CMP EDX,0xeaf73841 }
    /* +0xb64180 */ __asm { JBE 0x7fffa52d57b8 }
    /* +0xb64186 */ __asm { MOV R11,0x7488bfbfa8c63ae3 }
    /* +0xb64190 */ __asm { MOV qword ptr [RSP + 0x178],R11 }
    /* +0xb64198 */ __asm { MOV R11,0x3150cb3deabed324 }
    /* +0xb641a2 */ __asm { MOV qword ptr [RSP + 0x1c0],R11 }
    /* +0xb641aa */ __asm { MOV R11,-0x4fa0cad969fb0e4f }
    /* +0xb641b4 */ __asm { MOV qword ptr [RSP + 0x1a0],R11 }
    /* +0xb641bc */ __asm { MOV R11,-0x7e6df35855008406 }
    /* +0xb641c6 */ __asm { MOV qword ptr [RSP + 0x1a8],R11 }
    /* +0xb641ce */ __asm { MOV R11,0x2cf895dd0972c9ab }
    /* +0xb641d8 */ __asm { MOV qword ptr [RSP + 0x1b0],R11 }
    /* +0xb641e0 */ __asm { MOV R11,-0x16044821e5d904e4 }
    /* +0xb641ea */ __asm { MOV qword ptr [RSP + 0x1d0],R11 }
    /* +0xb641f2 */ __asm { MOV R13W,0xa4c }
    /* +0xb641f7 */ __asm { MOV R15,0x3136cb4feadbd354 }
    /* +0xb64201 */ __asm { MOV R11,0x1972575809da0937 }
    /* +0xb6420b */ __asm { MOV qword ptr [RSP + 0x1e0],R11 }
    /* +0xb64213 */ __asm { MOV R11,0x1f5ab4de0d7ce4b1 }
    /* +0xb6421d */ __asm { MOV qword ptr [RSP + 0x1c8],R11 }
    /* +0xb64225 */ __asm { MOV R11,0x2c9695b40925c98b }
    /* +0xb6422f */ __asm { MOV qword ptr [RSP + 0x1e8],R11 }
    /* +0xb64237 */ __asm { MOV R11,0x74eabf9fa8a83a82 }
    /* +0xb64241 */ __asm { MOV qword ptr [RSP + 0x168],R11 }
    /* +0xb64249 */ __asm { MOV RBX,-0x6c34aa3b88ffc0b0 }
    /* +0xb64253 */ __asm { MOV R14,-0x4fc9cab469890e22 }
    /* +0xb6425d */ __asm { MOV RBP,-0x14a31eec66d64810 }
    /* +0xb64267 */ __asm { MOV RSI,0x4fc30fa98ffd72ff }
    /* +0xb64271 */ __asm { MOV R11,-0x774944d5cb6c52b }
    /* +0xb6427b */ __asm { MOV qword ptr [RSP + 0x1f0],R11 }
    /* +0xb64283 */ __asm { LEA RDI,[RSP + 0x40] }
    /* +0xb64288 */ __asm { MOV R12,0x4fab0fda8f9c728d }
    /* +0xb64292 */ __asm { MOV R8,-0x14c21ecc66b14862 }
    /* +0xb6429c */ __asm { MOV R10,-0x16774856e5b60488 }
    /* +0xb642a6 */ __asm { MOV RCX,0x1952572109a80963 }
    /* +0xb642b0 */ __asm { MOV RDX,-0x7cf9944e51ff59e1 }
    /* +0xb642ba */ __asm { MOV RAX,-0x7e4df37655648461 }
    /* +0xb642c4 */ __asm { MOV R9,-0x71194215cd5c50b }
    /* +0xb642ce */ __asm { MOV R11,-0x25b816ca0dfcc614 }
    /* +0xb642d8 */ __asm { MOV qword ptr [RSP + 0x158],R11 }
    /* +0xb642e0 */ __asm { MOV qword ptr [RSP + 0x118],R15 }
    /* +0xb642e8 */ __asm { MOV R15,qword ptr [RSP + 0x1d0] }
    /* +0xb642f0 */ __asm { MOV qword ptr [RSP + 0x138],R15 }
    /* +0xb642f8 */ __asm { MOV qword ptr [RSP + 0x120],R14 }
    /* +0xb64300 */ __asm { MOV qword ptr [RSP + 0x108],RAX }
    /* +0xb64308 */ __asm { MOV qword ptr [RSP + 0x150],RBX }
    /* +0xb64310 */ __asm { MOV qword ptr [RSP + 0x140],R9 }
    /* +0xb64318 */ __asm { MOV qword ptr [RSP + 0x128],RBP }
    /* +0xb64320 */ __asm { MOV R9,qword ptr [RSP + 0x1c8] }
    /* +0xb64328 */ __asm { MOV qword ptr [RSP + 0xf0],R9 }
    /* +0xb64330 */ __asm { MOV R9,qword ptr [RSP + 0x178] }
    /* +0xb64338 */ __asm { MOV qword ptr [RSP + 0x148],R9 }
    /* +0xb64340 */ __asm { MOV qword ptr [RSP + 0x110],RCX }
    /* +0xb64348 */ __asm { MOV qword ptr [RSP + 0xf8],RDX }
    /* +0xb64350 */ __asm { MOV qword ptr [RSP + 0x100],RSI }
    /* +0xb64358 */ __asm { MOV R9,qword ptr [RSP + 0x1b0] }
    /* +0xb64360 */ __asm { MOV qword ptr [RSP + 0x130],R9 }
    /* +0xb64368 */ __asm { MOV qword ptr [RSP + 0xa8],R11 }
    /* +0xb64370 */ __asm { MOV R11,qword ptr [RSP + 0x1b8] }
    /* +0xb64378 */ __asm { MOV qword ptr [RSP + 0x40],R11 }
    /* +0xb6437d */ __asm { MOV qword ptr [RSP + 0x88],R10 }
    /* +0xb64385 */ __asm { MOV R11,qword ptr [RSP + 0x1e8] }
    /* +0xb6438d */ __asm { MOV qword ptr [RSP + 0x80],R11 }
    /* +0xb64395 */ __asm { MOV R11,qword ptr [RSP + 0x1e0] }
    /* +0xb6439d */ __asm { MOV qword ptr [RSP + 0x60],R11 }
    /* +0xb643a2 */ __asm { MOV qword ptr [RSP + 0x78],R8 }
    /* +0xb643a7 */ __asm { MOV R11,qword ptr [RSP + 0x1c0] }
    /* +0xb643af */ __asm { MOV qword ptr [RSP + 0x68],R11 }
    /* +0xb643b4 */ __asm { MOV R11,qword ptr [RSP + 0x170] }
    /* +0xb643bc */ __asm { MOV qword ptr [RSP + 0x48],R11 }
    /* +0xb643c1 */ __asm { MOV R11,-0x6c1aaa4f8890c0c1 }
    /* +0xb643cb */ __asm { MOV qword ptr [RSP + 0xa0],R11 }
    /* +0xb643d3 */ __asm { MOVAPS XMM5,xmmword ptr [RSP + 0x150] }
    /* +0xb643db */ __asm { XORPS XMM5,xmmword ptr [RDI + 0x60] }
    /* +0xb643df */ __asm { MOV R11,qword ptr [RSP + 0x1a8] }
    /* +0xb643e7 */ __asm { MOV qword ptr [RSP + 0x58],R11 }
    /* +0xb643ec */ __asm { MOV R11,qword ptr [RSP + 0x168] }
    /* +0xb643f4 */ __asm { MOV qword ptr [RSP + 0x98],R11 }
    /* +0xb643fc */ __asm { MOV qword ptr [RSP + 0x50],R12 }
    /* +0xb64401 */ __asm { MOV R11,qword ptr [RSP + 0x1a0] }
    /* +0xb64409 */ __asm { MOV qword ptr [RSP + 0x70],R11 }
    /* +0xb6440e */ __asm { MOV R11,qword ptr [RSP + 0x1f0] }
    /* +0xb64416 */ __asm { MOV qword ptr [RSP + 0x90],R11 }
    /* +0xb6441e */ __asm { MOVAPS XMM1,xmmword ptr [RSP + 0x100] }
    /* +0xb64426 */ __asm { MOVDQA XMM0,xmmword ptr [RSP + 0x140] }
    /* +0xb6442f */ __asm { MOVDQA XMM2,xmmword ptr [RSP + 0xf0] }
    /* +0xb64438 */ __asm { MOVAPS XMM4,xmmword ptr [RSP + 0x130] }
    /* +0xb64440 */ __asm { PXOR XMM2,xmmword ptr [RDI] }
    /* +0xb64444 */ __asm { MOVAPS XMM3,xmmword ptr [RDI + 0x20] }
    /* +0xb64448 */ __asm { XORPS XMM3,xmmword ptr [RSP + 0x110] }
    /* +0xb64450 */ __asm { XORPS XMM1,xmmword ptr [RDI + 0x10] }
    /* +0xb64454 */ __asm { XORPS XMM4,xmmword ptr [RDI + 0x40] }
    /* +0xb64458 */ __asm { MOVAPS xmmword ptr [RSP + 0x110],XMM3 }
    /* +0xb64460 */ __asm { MOVAPS XMM3,xmmword ptr [RDI + 0x30] }
    /* +0xb64464 */ __asm { PXOR XMM0,xmmword ptr [RDI + 0x50] }
    /* +0xb64469 */ __asm { MOV R15,qword ptr [RSP + 0xb0] }
    /* +0xb64471 */ __asm { MOV R10D,R15D }
    /* +0xb64474 */ __asm { OR R10D,0x1 }
    /* +0xb64478 */ __asm { XOR R13D,0xffffeaec }
    /* +0xb6447f */ __asm { IMUL R13D,R10D }
    /* +0xb64483 */ __asm { XORPS XMM3,xmmword ptr [RSP + 0x120] }
    /* +0xb6448b */ __asm { MOVZX EDX,R13W }
    /* +0xb6448f */ __asm { MOVAPS xmmword ptr [RSP + 0x120],XMM3 }
    /* +0xb64497 */ __asm { MOVDQA xmmword ptr [RSP + 0x140],XMM0 }
    /* +0xb644a0 */ __asm { MOVDQA xmmword ptr [RSP + 0xf0],XMM2 }
    /* +0xb644a9 */ __asm { MOVAPS xmmword ptr [RSP + 0x100],XMM1 }
    /* +0xb644b1 */ __asm { MOVAPS xmmword ptr [RSP + 0x130],XMM4 }
    /* +0xb644b9 */ __asm { MOVAPS xmmword ptr [RSP + 0x150],XMM5 }
    /* +0xb644c1 */ __asm { MOV RDX,qword ptr GS:[RDX] }
    /* +0xb644c5 */ __asm { MOV R8,0x72dea884e7ee79b9 }
    /* +0xb644cf */ __asm { IMUL R8,qword ptr [RDX + 0x30] }
    /* +0xb644d4 */ __asm { MOV RDX,0x2335de9d0186be70 }
    /* +0xb644de */ __asm { ADD RDX,R8 }
    /* +0xb644e1 */ __asm { MOV R8,-0x6c034fb0a59745e1 }
    /* +0xb644eb */ __asm { CMP RDX,R8 }
    /* +0xb644ee */ __asm { NOP }
    /* +0xb644ef */ __asm { NOP }
    /* +0xb644f0 */ __asm { NOP }
    /* +0xb644f1 */ __asm { NOP }
    /* +0xb644f2 */ __asm { NOP }
    /* +0xb644f3 */ __asm { NOP }
    /* +0xb644f4 */ __asm { NOP }
    /* +0xb644f5 */ __asm { NOP }
    /* +0xb644f6 */ __asm { NOP }
    /* +0xb644f7 */ __asm { NOP }
    /* +0xb644f8 */ __asm { NOP }
    /* +0xb644f9 */ __asm { NOP }
    /* +0xb644fa */ __asm { NOP }
    /* +0xb644fb */ __asm { NOP }
    /* +0xb644fc */ __asm { MOV dword ptr [RSP + 0xbc],0x0 }
    /* +0xb64507 */ __asm { LEA RDX,[RSP + 0x180] }
    /* +0xb6450f */ __asm { MOV qword ptr [RSP + 0xe8],RDX }
    /* +0xb64517 */ __asm { MOV dword ptr [RSP + 0xe0],0xa000a }
    /* +0xb64522 */ __asm { LEA RDX,[RSP + 0xf0] }
    /* +0xb6452a */ __asm { MOV qword ptr [RSP + 0x198],RDX }
    /* +0xb64532 */ __asm { MOV dword ptr [RSP + 0x190],0x680068 }
    /* +0xb6453d */ __asm { MOV dword ptr [RSP + 0x40],0xe0481ce8 }
    /* +0xb64545 */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xb64549 */ __asm { MOV qword ptr [RSP + 0x50],0x10 }
    /* +0xb64552 */ __asm { MOV R11D,0xf4eb9ea8 }
    /* +0xb64558 */ __asm { MOV EDX,0x2d70b794 }
    /* +0xb6455d */ __asm { XOR EDX,0x9c6ddc76 }
    /* +0xb64563 */ __asm { MOV ECX,R15D }
    /* +0xb64566 */ __asm { ROL EDX,CL }
    /* +0xb64568 */ __asm { MOVD XMM1,R11D }
    /* +0xb6456d */ __asm { LEA R8,[RSP + 0x190] }
    /* +0xb64575 */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0xb6457a */ __asm { ADD EDX,0x72e98b8b }
    /* +0xb64580 */ __asm { LEA R8,[RSP + 0xe0] }
    /* +0xb64588 */ __asm { MOV qword ptr [RSP + 0x48],R8 }
    /* +0xb6458d */ __asm { MOVD XMM5,R15D }
    /* +0xb64592 */ __asm { PXOR XMM1,XMM5 }
    /* +0xb64596 */ __asm { MOVD EAX,XMM1 }
    /* +0xb6459a */ __asm { NOT EAX }
    /* +0xb6459c */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xb645a6 */ __asm { MOV R8,-0x22b18422c4a9c65e }
    /* +0xb645b0 */ __asm { CMP RDX,RAX }
    /* +0xb645b3 */ __asm { JBE 0x7fffa52d4610 }
    /* +0xb645b5 */ __asm { MOV ESI,0x925aff00 }
    /* +0xb645ba */ __asm { ADD ESI,0x65dea082 }
    /* +0xb645c0 */ __asm { MOV ECX,R15D }
    /* +0xb645c3 */ __asm { ROL ESI,CL }
    /* +0xb645c5 */ __asm { XOR ESI,0x218010e5 }
    /* +0xb645cb */ __asm { MOV EDX,dword ptr [RSP + 0xdc] }
    /* +0xb645d2 */ __asm { RDTSC }
    /* +0xb645d4 */ __asm { SHL RDX,0x20 }
    /* +0xb645d8 */ __asm { OR RDX,RAX }
    /* +0xb645db */ __asm { MOV qword ptr [RSP + 0x58],0x1388 }
    /* +0xb645e4 */ __asm { MOV dword ptr [RSP + 0xdc],0xb6feafe2 }
    /* +0xb645ef */ __asm { IMUL R11,RDX }
    /* +0xb645f3 */ __asm { ADD R11,R8 }
    /* +0xb645f6 */ __asm { MOV RDX,R11 }
    /* +0xb645f9 */ __asm { SHR RDX,0x1b }
    /* +0xb645fd */ __asm { MOV R8,R11 }
    /* +0xb64600 */ __asm { SHR R8,0x2d }
    /* +0xb64604 */ __asm { XOR EDX,R8D }
    /* +0xb64607 */ __asm { SHR R11,0x3b }
    /* +0xb6460b */ __asm { MOV ECX,R11D }
    /* +0xb6460e */ __asm { JMP 0x7fffa52d465f }
    /* +0xb64610 */ __asm { MOV qword ptr [RSP + 0x58],0x1388 }
    /* +0xb64619 */ __asm { MOV ESI,0xb3ddec4c }
    /* +0xb6461e */ __asm { ADD ESI,0xe2ff59b4 }
    /* +0xb64624 */ __asm { IMUL ESI,R10D }
    /* +0xb64628 */ __asm { MOV dword ptr [RSP + 0xdc],0xb6feafe2 }
    /* +0xb64633 */ __asm { MOV EDX,dword ptr [RSP + 0xdc] }
    /* +0xb6463a */ __asm { RDTSC }
    /* +0xb6463c */ __asm { SHL RDX,0x20 }
    /* +0xb64640 */ __asm { OR RDX,RAX }
    /* +0xb64643 */ __asm { IMUL RDX,R11 }
    /* +0xb64647 */ __asm { ADD RDX,R8 }
    /* +0xb6464a */ __asm { MOV RCX,RDX }
    /* +0xb6464d */ __asm { SHR RCX,0x3b }
    /* +0xb64651 */ __asm { MOV R11,RDX }
    /* +0xb64654 */ __asm { SHR R11,0x1b }
    /* +0xb64658 */ __asm { SHR RDX,0x2d }
    /* +0xb6465c */ __asm { XOR EDX,R11D }
    /* +0xb6465f */ __asm { ROR EDX,CL }
    /* +0xb64661 */ __asm { MOV R11W,0x3f50 }
    /* +0xb64666 */ __asm { MOV R9D,ESI }
    /* +0xb64669 */ __asm { SUB R9D,R11D }
    /* +0xb6466c */ __asm { ADD R9D,0x3550 }
    /* +0xb64673 */ __asm { ROL R9W,0x4 }
    /* +0xb64678 */ __asm { MOVZX R11D,R9W }
    /* +0xb6467c */ __asm { AND EDX,0x3 }
    /* +0xb6467f */ __asm { CMP EDX,R11D }
    /* +0xb64682 */ __asm { JC 0x7fffa52d4890 }
    /* +0xb64688 */ __asm { MOV R9W,0x382c }
    /* +0xb6468d */ __asm { MOV R11D,ESI }
    /* +0xb64690 */ __asm { OR R11D,0x1 }
    /* +0xb64694 */ __asm { IMUL R9D,R11D }
    /* +0xb64698 */ __asm { MOV ECX,R15D }
    /* +0xb6469b */ __asm { ROR R9W,CL }
    /* +0xb6469f */ __asm { ROL R9W,0xb }
    /* +0xb646a4 */ __asm { ADD R9D,0xfffffd3c }
    /* +0xb646ab */ __asm { MOVZX R9D,R9W }
    /* +0xb646af */ __asm { CMP EDX,R9D }
    /* +0xb646b2 */ __asm { JC 0x7fffa52d4cf9 }
    /* +0xb646b8 */ __asm { MOV R9D,0xe7f0c69a }
    /* +0xb646be */ __asm { MOV RDX,0x161f2dea2178acd4 }
    /* +0xb646c8 */ __asm { CMP R9,RDX }
    /* +0xb646cb */ __asm { NOP }
    /* +0xb646cc */ __asm { NOP }
    /* +0xb646cd */ __asm { NOP }
    /* +0xb646ce */ __asm { NOP }
    /* +0xb646cf */ __asm { NOP }
    /* +0xb646d0 */ __asm { MOV R9D,dword ptr [R9 + -0x67f2c2da] }
    /* +0xb646d7 */ __asm { RDTSC }
    /* +0xb646d9 */ __asm { SHL RDX,0x20 }
    /* +0xb646dd */ __asm { OR RDX,RAX }
    /* +0xb646e0 */ __asm { CMP R9D,0xd }
    /* +0xb646e4 */ __asm { JNC 0x7fffa52d4e7c }
    /* +0xb646ea */ __asm { MOV R9D,0x95f0824e }
    /* +0xb646f0 */ __asm { MOV R8D,0x9b667873 }
    /* +0xb646f6 */ __asm { IMUL R8D,R8D,0x1ca57c1f }
    /* +0xb646fd */ __asm { MOVD XMM1,R8D }
    /* +0xb64702 */ __asm { MOV R8,-0x4b061743ec0c107b }
    /* +0xb6470c */ __asm { IMUL RDX,R8 }
    /* +0xb64710 */ __asm { MOV RAX,0x5b15a01398f243e6 }
    /* +0xb6471a */ __asm { ADD RAX,RDX }
    /* +0xb6471d */ __asm { MOV RDX,RAX }
    /* +0xb64720 */ __asm { SHR RDX,0x2d }
    /* +0xb64724 */ __asm { MOV R8,RAX }
    /* +0xb64727 */ __asm { SHR R8,0x1b }
    /* +0xb6472b */ __asm { XOR R8D,EDX }
    /* +0xb6472e */ __asm { MOV RDX,RAX }
    /* +0xb64731 */ __asm { SHR RDX,0x3b }
    /* +0xb64735 */ __asm { XOR EAX,0x1b }
    /* +0xb64738 */ __asm { MOV R13D,0x9fd637d7 }
    /* +0xb6473e */ __asm { ADD R9D,0x75232573 }
    /* +0xb64745 */ __asm { MOV ECX,ESI }
    /* +0xb64747 */ __asm { ROL R9D,CL }
    /* +0xb6474a */ __asm { MOVD XMM0,ESI }
    /* +0xb6474e */ __asm { PADDD XMM0,XMM1 }
    /* +0xb64752 */ __asm { MOVD ECX,XMM0 }
    /* +0xb64756 */ __asm { IMUL EDI,ECX,-0x3fffff73 }
    /* +0xb6475c */ __asm { MOV ECX,R15D }
    /* +0xb6475f */ __asm { ROL EDI,CL }
    /* +0xb64761 */ __asm { MOVD XMM1,R13D }
    /* +0xb64766 */ __asm { MOVSXD RCX,EDI }
    /* +0xb64769 */ __asm { LEA R14,[0x7fffa4770000] }
    /* +0xb64770 */ __asm { NOP }
    /* +0xb64771 */ __asm { MOV RBP,0x0 }
    /* +0xb64778 */ __asm { ADD R9D,R15D }
    /* +0xb6477b */ __asm { MOV R9,qword ptr [R9] }
    /* +0xb6477e */ __asm { PSUBD XMM1,XMM5 }
    /* +0xb64782 */ __asm { MOVD R13D,XMM1 }
    /* +0xb64787 */ __asm { ADD R13D,0x713970e7 }
    /* +0xb6478e */ __asm { MOVSXD R12,R13D }
    /* +0xb64791 */ __asm { CMP R12,RCX }
    /* +0xb64794 */ __asm { CMOVG EDX,EAX }
    /* +0xb64797 */ __asm { MOV ECX,EDX }
    /* +0xb64799 */ __asm { ROR R8D,CL }
    /* +0xb6479c */ __asm { MOV RDX,0x7aa6aef104ae64e5 }
    /* +0xb647a6 */ __asm { CMP R9,RDX }
    /* +0xb647a9 */ __asm { JZ 0x7fffa52d578e }
    /* +0xb647af */ __asm { CMP R8D,0x42cf396 }
    /* +0xb647b6 */ __asm { JA 0x7fffa52d47ee }
    /* +0xb647b8 */ __asm { MOV DX,0xd479 }
    /* +0xb647bc */ __asm { MOVD XMM5,EDX }
    /* +0xb647c0 */ __asm { MOVD XMM1,R15D }
    /* +0xb647c5 */ __asm { PADDW XMM1,XMM5 }
    /* +0xb647c9 */ __asm { MOVD EDX,XMM1 }
    /* +0xb647cd */ __asm { XOR EDX,ESI }
    /* +0xb647cf */ __asm { IMUL EDX,EDX,-0xb03 }
    /* +0xb647d5 */ __asm { MOVZX EDX,DX }
    /* +0xb647d8 */ __asm { MOV RDX,qword ptr GS:[RDX] }
    /* +0xb647dc */ __asm { MOV R8,-0x4857e8a01211c465 }
    /* +0xb647e6 */ __asm { CMP RDX,R8 }
    /* +0xb647e9 */ __asm { JNZ 0x7fffa52d47ee }
    /* +0xb647eb */ __asm { RET }
    /* +0xb647ee */ __asm { LEA R9,[0x7fffa478a283] }
    /* +0xb647f5 */ __asm { MOV RDX,-0x6426aeb47857e53d }
    /* +0xb647ff */ __asm { IMUL RDX,R9 }
    /* +0xb64803 */ __asm { XOR RDX,0x5f6cb644 }
    /* +0xb6480a */ __asm { MOV R8,-0xf9b58f4ff5e1bcd }
    /* +0xb64814 */ __asm { CMP RDX,R8 }
    /* +0xb64817 */ __asm { NOP }
    /* +0xb64818 */ __asm { NOP }
    /* +0xb64819 */ __asm { NOP }
    /* +0xb6481a */ __asm { NOP }
    /* +0xb6481b */ __asm { NOP }
    /* +0xb6481c */ __asm { MOV DX,0x2363 }
    /* +0xb64820 */ __asm { MOV AX,0xfe7d }
    /* +0xb64824 */ __asm { IMUL EAX,R10D }
    /* +0xb64828 */ __asm { IMUL R11D,EDX }
    /* +0xb6482c */ __asm { LEA EDX,[RSI + RAX*0x1] }
    /* +0xb6482f */ __asm { ADD EDX,0x14b9 }
    /* +0xb64835 */ __asm { MOV R10D,0x46295c53 }
    /* +0xb6483b */ __asm { IMUL R10D,R10D,-0x565a2e11 }
    /* +0xb64842 */ __asm { ADD R10D,ESI }
    /* +0xb64845 */ __asm { XOR R10D,0x18091255 }
    /* +0xb6484c */ __asm { MOV ECX,R15D }
    /* +0xb6484f */ __asm { ROR R10D,CL }
    /* +0xb64852 */ __asm { MOVZX EDX,DX }
    /* +0xb64855 */ __asm { MOVD XMM5,ESI }
    /* +0xb64859 */ __asm { NOT R11D }
    /* +0xb6485c */ __asm { ADD R11D,R15D }
    /* +0xb6485f */ __asm { MOV qword ptr [RSP + 0xc0],RAX }
    /* +0xb64867 */ __asm { MOV EAX,dword ptr [R9 + -0x546b] }
    /* +0xb6486e */ __asm { MOV R9W,0x4b5f }
    /* +0xb64873 */ __asm { MOVD XMM1,R9D }
    /* +0xb64878 */ __asm { PXOR XMM1,XMM5 }
    /* +0xb6487c */ __asm { MOVZX R8D,R11W }
    /* +0xb64880 */ __asm { MOVD R11D,XMM1 }
    /* +0xb64885 */ __asm { NOT R11D }
    /* +0xb64888 */ __asm { ADD R11D,R15D }
    /* +0xb6488b */ __asm { JMP 0x7fffa52d516a }
    /* +0xb64890 */ __asm { MOV R11W,0x96c2 }
    /* +0xb64895 */ __asm { MOVD XMM1,R11D }
    /* +0xb6489a */ __asm { MOVD XMM0,R10D }
    /* +0xb6489f */ __asm { PMULLW XMM0,XMM1 }
    /* +0xb648a3 */ __asm { MOVD R11D,XMM0 }
    /* +0xb648a8 */ __asm { ADD R11D,0xffffd5f3 }
    /* +0xb648af */ __asm { MOVZX R11D,R11W }
    /* +0xb648b3 */ __asm { CMP EDX,R11D }
    /* +0xb648b6 */ __asm { JZ 0x7fffa52d4dd3 }
    /* +0xb648bc */ __asm { LEA R11,[0x7fffa47c3f8d] }
    /* +0xb648c3 */ __asm { MOV EDX,0xd7649f07 }
    /* +0xb648c8 */ __asm { ADD EDX,0xa442c14d }
    /* +0xb648ce */ __asm { MOV ECX,R15D }
    /* +0xb648d1 */ __asm { ROR EDX,CL }
    /* +0xb648d3 */ __asm { SUB EDX,ESI }
    /* +0xb648d5 */ __asm { ROL EDX,0x1b }
    /* +0xb648d8 */ __asm { ADD RDX,R11 }
    /* +0xb648db */ __asm { MOV R8,-0x33463587d31f000f }
    /* +0xb648e5 */ __asm { IMUL R8,RDX }
    /* +0xb648e9 */ __asm { MOV RDX,0x70bcdc727c443e77 }
    /* +0xb648f3 */ __asm { CMP R8,RDX }
    /* +0xb648f6 */ __asm { JZ 0x7fffa52d57c0 }
    /* +0xb648fc */ __asm { MOVZX R9D,uint8_t ptr [R11 + -0x7844] }
    /* +0xb64904 */ __asm { MOVZX ECX,uint8_t ptr [R11 + R9*0x4 + -0x783e] }
    /* +0xb6490d */ __asm { NOT CL }
    /* +0xb6490f */ __asm { ROL CL,0x5 }
    /* +0xb64912 */ __asm { MOV uint8_t ptr [RSP + 0xc0],CL }
    /* +0xb64919 */ __asm { MOVZX ECX,uint8_t ptr [R11 + R9*0x4 + -0x783d] }
    /* +0xb64922 */ __asm { NOT CL }
    /* +0xb64924 */ __asm { ROL CL,0x5 }
    /* +0xb64927 */ __asm { MOV uint8_t ptr [RSP + 0xc1],CL }
    /* +0xb6492e */ __asm { MOVZX ECX,uint8_t ptr [R11 + R9*0x4 + -0x783c] }
    /* +0xb64937 */ __asm { NOT CL }
    /* +0xb64939 */ __asm { ROL CL,0x5 }
    /* +0xb6493c */ __asm { MOV uint8_t ptr [RSP + 0xc2],CL }
    /* +0xb64943 */ __asm { MOVZX R11D,uint8_t ptr [R11 + R9*0x4 + -0x783b] }
    /* +0xb6494c */ __asm { NOT R11B }
    /* +0xb6494f */ __asm { ROL R11B,0x5 }
    /* +0xb64953 */ __asm { MOV uint8_t ptr [RSP + 0xc3],R11B }
    /* +0xb6495b */ __asm { MOV ECX,0x9102c3cc }
    /* +0xb64960 */ __asm { XOR ECX,dword ptr [RSP + 0xc0] }
    /* +0xb64967 */ __asm { MOVD XMM1,ECX }
    /* +0xb6496b */ __asm { MOV EDX,0x1 }
    /* +0xb64970 */ __asm { SHL EDX,CL }
    /* +0xb64972 */ __asm { MOVD XMM0,EDX }
    /* +0xb64976 */ __asm { PAND XMM0,XMM1 }
    /* +0xb6497a */ __asm { MOVD EDX,XMM0 }
    /* +0xb6497e */ __asm { TEST EDX,EDX }
    /* +0xb64980 */ __asm { JNZ 0x7fffa52d5173 }
    /* +0xb64986 */ __asm { RDTSC }
    /* +0xb64988 */ __asm { SHL RDX,0x20 }
    /* +0xb6498c */ __asm { MOV R11W,0xa80b }
    /* +0xb64991 */ __asm { IMUL R11D,R11D,-0x18b }
    /* +0xb64998 */ __asm { MOVD XMM5,ESI }
    /* +0xb6499c */ __asm { XOR R11D,R15D }
    /* +0xb6499f */ __asm { MOVD XMM1,R11D }
    /* +0xb649a4 */ __asm { PADDW XMM1,XMM5 }
    /* +0xb649a8 */ __asm { PEXTRW R11D,XMM1,0x0 }
    /* +0xb649ae */ __asm { OR RDX,RAX }
    /* +0xb649b1 */ __asm { MOV R8,0x7facc0f7a00541bd }
    /* +0xb649bb */ __asm { IMUL R8,RDX }
    /* +0xb649bf */ __asm { MOV RCX,0x5b58cde547513c4e }
    /* +0xb649c9 */ __asm { ADD RCX,R8 }
    /* +0xb649cc */ __asm { MOV R8,RCX }
    /* +0xb649cf */ __asm { SHR R8,0x2d }
    /* +0xb649d3 */ __asm { MOV RDX,RCX }
    /* +0xb649d6 */ __asm { SHR RDX,0x1b }
    /* +0xb649da */ __asm { SHR RCX,0x3b }
    /* +0xb649de */ __asm { XOR EDX,R8D }
    /* +0xb649e1 */ __asm { ROR EDX,CL }
    /* +0xb649e3 */ __asm { MOV R8,qword ptr GS:[R11] }
    /* +0xb649e7 */ __asm { MOVD XMM5,R15D }
    /* +0xb649ec */ __asm { MOV R11W,0x9e06 }
    /* +0xb649f1 */ __asm { MOVD XMM1,R11D }
    /* +0xb649f6 */ __asm { PCMPEQD XMM0,XMM0 }
    /* +0xb649fa */ __asm { PXOR XMM0,XMM1 }
    /* +0xb649fe */ __asm { PADDW XMM0,XMM5 }
    /* +0xb64a02 */ __asm { MOV R8,qword ptr [R8 + 0x18] }
    /* +0xb64a06 */ __asm { MOVD R11D,XMM0 }
    /* +0xb64a0b */ __asm { IMUL R11D,R11D,-0x3bc7 }
    /* +0xb64a12 */ __asm { MOVZX R11D,R11W }
    /* +0xb64a16 */ __asm { MOV RAX,qword ptr GS:[R11] }
    /* +0xb64a1a */ __asm { SUB R8,qword ptr [RAX + 0x18] }
    /* +0xb64a1e */ __asm { MOV EAX,0xd551208d }
    /* +0xb64a23 */ __asm { XOR RAX,R8 }
    /* +0xb64a26 */ __asm { ADD RAX,-0x5375616 }
    /* +0xb64a2c */ __asm { MOV R8,-0x1903ee399282e806 }
    /* +0xb64a36 */ __asm { CMP RAX,R8 }
    /* +0xb64a39 */ __asm { NOP }
    /* +0xb64a3a */ __asm { NOP }
    /* +0xb64a3b */ __asm { NOP }
    /* +0xb64a3c */ __asm { NOP }
    /* +0xb64a3d */ __asm { NOP }
    /* +0xb64a3e */ __asm { CMP EDX,0x450d9f }
    /* +0xb64a44 */ __asm { JA 0x7fffa52d4c5c }
    /* +0xb64a4a */ __asm { MOV dword ptr [RSP + 0xc0],0x3a6a2b51 }
    /* +0xb64a55 */ __asm { MOV EDX,dword ptr [RSP + 0xc0] }
    /* +0xb64a5c */ __asm { CMP EDX,0x2f14d995 }
    /* +0xb64a62 */ __asm { JBE 0x7fffa52d57e7 }
    /* +0xb64a68 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xb64a6f */ __asm { NOP }
    /* +0xb64a71 */ __asm { MOV R11,0x0 }
    /* +0xb64a78 */ __asm { MOV RDX,0x3a3c033d6dd37f2c }
    /* +0xb64a82 */ __asm { MOVQ XMM1,RDX }
    /* +0xb64a87 */ __asm { MOVQ XMM5,R15 }
    /* +0xb64a8c */ __asm { PADDQ XMM1,XMM5 }
    /* +0xb64a90 */ __asm { MOVQ RDX,XMM1 }
    /* +0xb64a95 */ __asm { XOR RDX,RSI }
    /* +0xb64a98 */ __asm { MOV R11D,0x82661a46 }
    /* +0xb64a9e */ __asm { ROL RDX,0x17 }
    /* +0xb64aa2 */ __asm { CMP R11,RDX }
    /* +0xb64aa5 */ __asm { JZ 0x7fffa52d57ef }
    /* +0xb64aab */ __asm { MOV R8,qword ptr [R11 + -0x2681a3e] }
    /* +0xb64ab2 */ __asm { MOV RDX,-0x629c4f0fe3c88777 }
    /* +0xb64abc */ __asm { MOV RAX,R8 }
    /* +0xb64abf */ __asm { MUL RDX }
    /* +0xb64ac2 */ __asm { MOV R11,RDX }
    /* +0xb64ac5 */ __asm { MOV EDX,0x14770b1 }
    /* +0xb64aca */ __asm { MOV RAX,R8 }
    /* +0xb64acd */ __asm { MUL RDX }
    /* +0xb64ad0 */ __asm { ADD RAX,R11 }
    /* +0xb64ad3 */ __asm { ADC RDX,0x0 }
    /* +0xb64ad7 */ __asm { TEST DL,0x1 }
    /* +0xb64ada */ __asm { JZ 0x7fffa52d4c5c }
    /* +0xb64ae0 */ __asm { MOV DX,0x26ff }
    /* +0xb64ae4 */ __asm { MOV R11D,ESI }
    /* +0xb64ae7 */ __asm { OR R11D,0x1 }
    /* +0xb64aeb */ __asm { IMUL EDX,R11D }
    /* +0xb64aef */ __asm { NOT EDX }
    /* +0xb64af1 */ __asm { ROL DX,0xc }
    /* +0xb64af5 */ __asm { MOVZX EDX,DX }
    /* +0xb64af8 */ __asm { PXOR XMM1,XMM1 }
    /* +0xb64afc */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM1 }
    /* +0xb64b05 */ __asm { MOV R9,qword ptr GS:[RDX] }
    /* +0xb64b09 */ __asm { MOV AX,0x4f70 }
    /* +0xb64b0d */ __asm { IMUL EAX,R11D }
    /* +0xb64b11 */ __asm { MOV RDX,-0x33d892e9abf56fee }
    /* +0xb64b1b */ __asm { LEA R11D,[R15 + RAX*0x1] }
    /* +0xb64b1f */ __asm { ADD R11D,0xfffff531 }
    /* +0xb64b26 */ __asm { MOVZX R11D,R11W }
    /* +0xb64b2a */ __asm { MOVQ XMM1,RDX }
    /* +0xb64b2f */ __asm { PSUBQ XMM5,XMM1 }
    /* +0xb64b33 */ __asm { MOVQ RDX,XMM5 }
}


// ============================================================================
// Function : FUN_7fffa52d5830  |  RVA: 0xb65830  |  Size: 737 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa52d59f0) */
/* WARNING: Removing unreachable block (ram,0x7fffa52d5a39) */

void FUN_7fffa52d5830(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa47bba08 = 0;
  auRam00007fffa47bba11 = (uint8_t  [16])0x0;
  uRam00007fffa47bba21 = 0;
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa47bba29[10] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa47bba29[0xb] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa47bba29[0xc] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa47bba29[0xd] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa47bba29[0xe] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa47bba29[0xf] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa47bba29[0x10] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa47bba29[0x11] = '\0';
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x5e4ba54dff9f544 + 0xb;
  lVar5 = -3;
  while( true ) {
    lVar3 = lVar3 * 0x5e4ba54dff9f544 + 0xb;
    lVar4 = lVar3 * 0x5e4ba54dff9f544 + 0xb;
    *(char *)(lVar5 + 0x7fffa47bba06) = (char)((uint64_t)lVar4 >> 0x20);
    lVar4 = lVar4 * 0x5e4ba54dff9f544 + 0xb;
    *(char *)(lVar5 + 0x7fffa47bba05) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar5 + 0x7fffa47bba07) = (char)((uint64_t)lVar4 >> 0x20);
    if (lVar5 == 0x3d) break;
    lVar3 = lVar4 * 0x5e4ba54dff9f544 + 0xb;
    *(char *)(lVar5 + 0x7fffa47bba08) = (char)((uint64_t)lVar3 >> 0x20);
    lVar5 = lVar5 + 4;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47bba08 * 0x55555556 + 0x55555556) * 3;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa47bba11) =
       ~s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa47bba29._10_8_;
  bRam00007fffa47bba08 = (char)(uVar2 >> 0x20);
  return;
}

