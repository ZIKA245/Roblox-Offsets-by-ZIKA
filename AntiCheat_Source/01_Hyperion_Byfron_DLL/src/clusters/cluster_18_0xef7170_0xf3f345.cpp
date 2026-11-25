// Subsystem: Internal Routines Cluster 18 (0xef7170 .. 0xf3f345)
// Functions: 94
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : FUN_7fffa5667170  |  RVA: 0xef7170  |  Size: 265 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5667170(uint64_t param_1,uint32_t param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t in_R10;
  uint64_t in_R11;
  uint64_t *puVar4;
  
  uVar2 = *(uint64_t *)(param_3 + 0x1f342c14);
  if (uVar2 != 0) {
    puVar4 = *(uint64_t **)(param_3 + 0x1f342c24);
    puVar1 = *(uint64_t **)(param_3 + 0x1f342c2c);
    if (puVar4 != puVar1) {
      do {
        if (0xf < puVar4[3]) {
          in_R10 = 0x5f424ed7;
          iVar3 = ((int)CONCAT62((int6)(in_R11 >> 0x10),0x583) - param_2) * -0x6a47 + 0x392c;
          in_R11 = (uint64_t)
                   (((param_2 | 1) * 0x3b5c0000 | (param_2 | 1) * 0x5f424ed7 >> 0xe) + 0x48a6cd99);
          (*(code *)((int64_t)(short)iVar3 + 0x7fffa568c609))
                    (param_1,iVar3,*puVar4 >> 0x3d ^ *puVar4);
        }
        *(uint8_t *)puVar4 = 0;
        puVar4[2] = 0;
        puVar4[3] = 0xf;
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar1);
      uVar2 = *(uint64_t *)(param_3 + 0x1f342c14);
    }
    iVar3 = (int)CONCAT62((int6)((uint64_t)in_R10 >> 0x10),0x144f) * -0x4d5d + param_2 + 0x79e5;
    (*(code *)((int64_t)(short)iVar3 + 0x7fffa568a2ce))(param_1,iVar3,uVar2 >> 0x3d ^ uVar2);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5667280  |  RVA: 0xef7280  |  Size: 635 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa56674cb) */

void FUN_7fffa5667280(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  uRam00007fffa4784ecd = 0;
  uRam00007fffa4784ebc = 0;
  uRam00007fffa4784ebd = 0;
  uRam00007fffa4784eac = 0;
  uRam00007fffa4784eb4 = 0;
  uRam00007fffa4784eb5 = 0;
  uRam00007fffa4784e9c = 0;
  uRam00007fffa4784ea4 = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x6368cdad47b807e + 0xb;
  lVar5 = 0;
  while( true ) {
    lVar3 = lVar3 * 0x6368cdad47b807e + 0xb;
    lVar4 = lVar3 * 0x6368cdad47b807e + 0xb;
    *(char *)(lVar5 + 0x7fffa4784e94) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar5 + 0x7fffa4784e95) = (char)((uint64_t)lVar4 >> 0x20);
    if (lVar5 == 0x48) break;
    lVar3 = lVar4 * 0x6368cdad47b807e + 0xb;
    *(char *)(lVar5 + 0x7fffa4784e96) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0x6368cdad47b807e + 0xb;
    *(char *)(lVar5 + 0x7fffa4784e97) = (char)((uint64_t)lVar3 >> 0x20);
    lVar5 = lVar5 + 4;
  }
  uVar2 = (uint64_t)((uint32_t)(uint8_t)uRam00007fffa4784e9c * 0x33333334 + 0x33333334) * 5;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa4784e9d) = 0;
  uRam00007fffa4784e9c = CONCAT71(uRam00007fffa4784e9c._1_7_,(char)(uVar2 >> 0x20));
  return;
}


// ============================================================================
// Function : FUN_7fffa5667500  |  RVA: 0xef7500  |  Size: 5010 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5667500(void) {
    /* +0xef7500 */ __asm { PUSH RBX }
    /* +0xef7501 */ __asm { PUSH RSI }
    /* +0xef7502 */ __asm { PUSH R13 }
    /* +0xef7504 */ __asm { PUSH R15 }
    /* +0xef7506 */ __asm { PUSH RBP }
    /* +0xef7507 */ __asm { PUSH R14 }
    /* +0xef7509 */ __asm { PUSH R12 }
    /* +0xef750b */ __asm { SUB RSP,0x90 }
    /* +0xef7512 */ __asm { MOV RSI,RDX }
    /* +0xef7515 */ __asm { MOV R11,-0x454b5b7f }
    /* +0xef751c */ __asm { SUB R11,qword ptr [RSP + 0xf0] }
    /* +0xef7524 */ __asm { MOV RAX,-0x210a26294c5a0775 }
    /* +0xef752e */ __asm { IMUL RAX,R11 }
    /* +0xef7532 */ __asm { MOV dword ptr [RSP + 0x50],0x800fc3af }
    /* +0xef753a */ __asm { MOV R9D,dword ptr [RSP + 0x50] }
    /* +0xef753f */ __asm { CMP R9D,0x3d9667e3 }
    /* +0xef7546 */ __asm { JBE 0x7fffa56685ce }
    /* +0xef754c */ __asm { PUSHFQ }
    /* +0xef754d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xef7555 */ __asm { POPFQ }
    /* +0xef7556 */ __asm { MOV R11,qword ptr [RAX] }
    /* +0xef7559 */ __asm { MOV R9D,dword ptr [RAX + 0x8] }
    /* +0xef755d */ __asm { ADD R9D,R9D }
    /* +0xef7560 */ __asm { MOV word ptr [RSP + 0x3a],R9W }
    /* +0xef7566 */ __asm { MOV word ptr [RSP + 0x38],R9W }
    /* +0xef756c */ __asm { MOV qword ptr [RSP + 0x40],R11 }
    /* +0xef7571 */ __asm { MOV R9D,0x958a8150 }
    /* +0xef7577 */ __asm { IMUL R9D,R9D,0x6394e8dd }
    /* +0xef757e */ __asm { MOV ECX,ESI }
    /* +0xef7580 */ __asm { ROL R9D,CL }
    /* +0xef7583 */ __asm { MOV dword ptr [RSP + 0x50],R9D }
    /* +0xef7588 */ __asm { MOV R9D,dword ptr [RSP + 0x50] }
    /* +0xef758d */ __asm { TEST R9D,R9D }
    /* +0xef7590 */ __asm { NOP }
    /* +0xef7591 */ __asm { NOP }
    /* +0xef7592 */ __asm { NOP }
    /* +0xef7593 */ __asm { NOP }
    /* +0xef7594 */ __asm { NOP }
    /* +0xef7595 */ __asm { PUSHFQ }
    /* +0xef7596 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xef759e */ __asm { POPFQ }
    /* +0xef759f */ __asm { MOV dword ptr [RSP + 0x68],0x40 }
    /* +0xef75a7 */ __asm { LEA RAX,[RSP + 0x38] }
    /* +0xef75ac */ __asm { MOV qword ptr [RSP + 0x60],RAX }
    /* +0xef75b1 */ __asm { MOV dword ptr [RSP + 0x50],0x30 }
    /* +0xef75b9 */ __asm { MOV qword ptr [RSP + 0x58],0x0 }
    /* +0xef75c2 */ __asm { PXOR XMM5,XMM5 }
    /* +0xef75c6 */ __asm { MOVDQU xmmword ptr [RSP + 0x70],XMM5 }
    /* +0xef75cc */ __asm { MOV dword ptr [RSP + 0x80],0xa9309024 }
    /* +0xef75d7 */ __asm { MOV R9D,dword ptr [RSP + 0x80] }
    /* +0xef75df */ __asm { RDTSC }
    /* +0xef75e1 */ __asm { SHL RDX,0x20 }
    /* +0xef75e5 */ __asm { OR RDX,RAX }
    /* +0xef75e8 */ __asm { MOV RBX,-0x30ebf64fafbc6efb }
    /* +0xef75f2 */ __asm { IMUL RDX,RBX }
    /* +0xef75f6 */ __asm { MOV R12,-0x22b18422c4a9c65e }
    /* +0xef7600 */ __asm { ADD RDX,R12 }
    /* +0xef7603 */ __asm { MOV RCX,RDX }
    /* +0xef7606 */ __asm { SHR RCX,0x3b }
    /* +0xef760a */ __asm { MOV R10,RDX }
    /* +0xef760d */ __asm { SHR R10,0x2d }
    /* +0xef7611 */ __asm { SHR RDX,0x1b }
    /* +0xef7615 */ __asm { XOR EDX,R10D }
    /* +0xef7618 */ __asm { ROR EDX,CL }
    /* +0xef761a */ __asm { AND EDX,0x3 }
    /* +0xef761d */ __asm { CMP EDX,0x2 }
    /* +0xef7620 */ __asm { JC 0x7fffa5667a18 }
    /* +0xef7626 */ __asm { MOV EBP,ESI }
    /* +0xef7628 */ __asm { OR EBP,0x1 }
    /* +0xef762b */ __asm { MOV R9W,0x5154 }
    /* +0xef7630 */ __asm { XOR R9D,0xfffffbff }
    /* +0xef7637 */ __asm { IMUL R9D,EBP }
    /* +0xef763b */ __asm { MOVZX R9D,R9W }
    /* +0xef763f */ __asm { CMP EDX,R9D }
    /* +0xef7642 */ __asm { JC 0x7fffa5667ab3 }
    /* +0xef7648 */ __asm { LEA RDX,[0x7fffa47bedd8] }
    /* +0xef764f */ __asm { MOV RAX,-0x149f9277e9278b98 }
    /* +0xef7659 */ __asm { CMP RDX,RAX }
    /* +0xef765c */ __asm { JZ 0x7fffa56685e6 }
    /* +0xef7662 */ __asm { MOV R9D,0xf7891aeb }
    /* +0xef7668 */ __asm { MOV R11D,0x5853dc7 }
    /* +0xef766e */ __asm { MOV R13D,ESI }
    /* +0xef7671 */ __asm { OR R13D,0x1 }
    /* +0xef7675 */ __asm { IMUL R13D,R9D }
    /* +0xef7679 */ __asm { MOVD XMM5,ESI }
    /* +0xef767d */ __asm { ADD R13D,0x81fda396 }
    /* +0xef7684 */ __asm { MOVZX EAX,uint8_t ptr [RDX + -0x274b] }
    /* +0xef768b */ __asm { MOV R9D,R13D }
    /* +0xef768e */ __asm { OR R9D,0x1 }
    /* +0xef7692 */ __asm { XOR R11D,0x7498bfdc }
    /* +0xef7699 */ __asm { IMUL R11D,R9D }
    /* +0xef769d */ __asm { MOVD XMM0,R11D }
    /* +0xef76a2 */ __asm { PXOR XMM0,XMM5 }
    /* +0xef76a6 */ __asm { MOVD ECX,XMM0 }
    /* +0xef76aa */ __asm { MOVZX R11D,uint8_t ptr [RDX + RAX*0x4 + -0x273b] }
    /* +0xef76b3 */ __asm { ROL R11B,0x4 }
    /* +0xef76b7 */ __asm { MOV uint8_t ptr [RSP + 0x80],R11B }
    /* +0xef76bf */ __asm { MOVZX R11D,uint8_t ptr [RDX + RAX*0x4 + -0x273a] }
    /* +0xef76c8 */ __asm { ROL R11B,0x4 }
    /* +0xef76cc */ __asm { MOV uint8_t ptr [RSP + 0x81],R11B }
    /* +0xef76d4 */ __asm { MOVZX R11D,uint8_t ptr [RDX + RAX*0x4 + -0x2739] }
    /* +0xef76dd */ __asm { ROL R11B,0x4 }
    /* +0xef76e1 */ __asm { MOV uint8_t ptr [RSP + 0x82],R11B }
    /* +0xef76e9 */ __asm { MOVZX R11D,uint8_t ptr [RDX + RAX*0x4 + -0x2738] }
    /* +0xef76f2 */ __asm { ROL R11B,0x4 }
    /* +0xef76f6 */ __asm { NOT ECX }
    /* +0xef76f8 */ __asm { MOV uint8_t ptr [RSP + 0x83],R11B }
    /* +0xef7700 */ __asm { MOV R9D,0x65e8ce72 }
    /* +0xef7706 */ __asm { XOR R9D,dword ptr [RSP + 0x80] }
    /* +0xef770e */ __asm { MOV R11D,dword ptr [RCX] }
    /* +0xef7711 */ __asm { BT R9D,R11D }
    /* +0xef7715 */ __asm { JNC 0x7fffa5667e70 }
    /* +0xef771b */ __asm { RDTSC }
    /* +0xef771d */ __asm { SHL RDX,0x20 }
    /* +0xef7721 */ __asm { OR RDX,RAX }
    /* +0xef7724 */ __asm { MOV RAX,-0x4a9b10dd1385131b }
    /* +0xef772e */ __asm { IMUL RAX,RDX }
    /* +0xef7732 */ __asm { MOV R10,-0x76102c1987b0210e }
    /* +0xef773c */ __asm { ADD R10,RAX }
    /* +0xef773f */ __asm { MOV RCX,R10 }
    /* +0xef7742 */ __asm { SHR RCX,0x3b }
    /* +0xef7746 */ __asm { MOV RAX,R10 }
    /* +0xef7749 */ __asm { SHR RAX,0x2d }
    /* +0xef774d */ __asm { SHR R10,0x1b }
    /* +0xef7751 */ __asm { XOR R10D,EAX }
    /* +0xef7754 */ __asm { ROR R10D,CL }
    /* +0xef7757 */ __asm { MOV dword ptr [RSP + 0x80],0x851c9ec2 }
    /* +0xef7762 */ __asm { MOV R9D,dword ptr [RSP + 0x80] }
    /* +0xef776a */ __asm { CMP R9D,0xda7ad99b }
    /* +0xef7771 */ __asm { JC 0x7fffa5667780 }
    /* +0xef7773 */ __asm { TEST uint8_t ptr [RBP + -0x12fac2de],0xe3 }
    /* +0xef777a */ __asm { INC uint8_t ptr [0x7fff9e8044d4] }
    /* +0xef7780 */ __asm { CMP R10D,0x1186e2a }
    /* +0xef7787 */ __asm { JA 0x7fffa56679d6 }
    /* +0xef778d */ __asm { MOV R9W,0xbedd }
    /* +0xef7792 */ __asm { IMUL R9D,EBP }
    /* +0xef7796 */ __asm { ROL R9W,0x6 }
    /* +0xef779b */ __asm { MOV ECX,R13D }
    /* +0xef779e */ __asm { ROL R9W,CL }
    /* +0xef77a2 */ __asm { MOVZX ECX,R9W }
    /* +0xef77a6 */ __asm { XOR RCX,0xda82 }
    /* +0xef77ad */ __asm { MOV RAX,qword ptr GS:[RCX] }
    /* +0xef77b1 */ __asm { MOV R9W,0xafeb }
    /* +0xef77b6 */ __asm { ADD R9D,0x7797 }
    /* +0xef77bd */ __asm { MOV ECX,ESI }
    /* +0xef77bf */ __asm { ROR R9W,CL }
    /* +0xef77c3 */ __asm { ADD R9D,R13D }
    /* +0xef77c6 */ __asm { ROL R9W,0xa }
    /* +0xef77cb */ __asm { MOVZX ECX,R9W }
    /* +0xef77cf */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0xef77d3 */ __asm { MOV R9,-0x7b5d98b5e4c61164 }
    /* +0xef77dd */ __asm { MOV R10,0x20000000856 }
    /* +0xef77e7 */ __asm { SUB R10,R9 }
    /* +0xef77ea */ __asm { XOR R10,R13 }
    /* +0xef77ed */ __asm { MOV RCX,qword ptr [R11 + 0x30] }
    /* +0xef77f1 */ __asm { ADD RAX,RCX }
    /* +0xef77f4 */ __asm { ADD RAX,0xf40 }
    /* +0xef77fa */ __asm { CMP RAX,R10 }
    /* +0xef77fd */ __asm { NOP }
    /* +0xef77fe */ __asm { NOP }
    /* +0xef77ff */ __asm { NOP }
    /* +0xef7800 */ __asm { NOP }
    /* +0xef7801 */ __asm { NOP }
    /* +0xef7802 */ __asm { NOP }
    /* +0xef7803 */ __asm { NOP }
    /* +0xef7804 */ __asm { NOP }
    /* +0xef7805 */ __asm { NOP }
    /* +0xef7806 */ __asm { NOP }
    /* +0xef7807 */ __asm { NOP }
    /* +0xef7808 */ __asm { NOP }
    /* +0xef7809 */ __asm { NOP }
    /* +0xef780a */ __asm { NOP }
    /* +0xef780b */ __asm { NOP }
    /* +0xef780c */ __asm { NOP }
    /* +0xef780d */ __asm { NOP }
    /* +0xef796b */ __asm { MOV R9W,0xd188 }
    /* +0xef7970 */ __asm { MOV DX,0x8c55 }
    /* +0xef7974 */ __asm { IMUL EDX,EDX,0x4dab }
    /* +0xef797a */ __asm { ADD EDX,R13D }
    /* +0xef797d */ __asm { IMUL EDX,EBP }
    /* +0xef7980 */ __asm { ROL DX,0xe }
    /* +0xef7984 */ __asm { MOVZX EDX,DX }
    /* +0xef7987 */ __asm { MOV qword ptr [RSP + 0x30],R10 }
    /* +0xef798c */ __asm { MOV R10W,0x86f5 }
    /* +0xef7991 */ __asm { ADD R10D,R13D }
    /* +0xef7994 */ __asm { XOR R10D,0xffff8401 }
    /* +0xef799b */ __asm { IMUL R10D,R10D,-0x6e2f }
    /* +0xef79a2 */ __asm { MOV EAX,R13D }
    /* +0xef79a5 */ __asm { OR EAX,0x1 }
    /* +0xef79a8 */ __asm { IMUL EAX,R9D }
    /* +0xef79ac */ __asm { ROL AX,0x1 }
    /* +0xef79af */ __asm { IMUL EAX,EBP }
    /* +0xef79b2 */ __asm { XOR EAX,0xcd09 }
    /* +0xef79b7 */ __asm { MOVZX R9D,AX }
    /* +0xef79bb */ __asm { MOV EAX,dword ptr [R11 + 0x6623] }
    /* +0xef79c2 */ __asm { MOV ECX,ESI }
    /* +0xef79c4 */ __asm { ROL R10W,CL }
    /* +0xef79c8 */ __asm { MOVSX R10,R10W }
    /* +0xef79cc */ __asm { LEA R8,[RSP + 0x80] }
    /* +0xef79d4 */ __asm { SYSCALL }
    /* +0xef79d6 */ __asm { LEA RDX,[0x7fffa478c536] }
    /* +0xef79dd */ __asm { MOV RAX,-0x51de9a88fe7b537f }
    /* +0xef79e7 */ __asm { CMP RDX,RAX }
    /* +0xef79ea */ __asm { NOP }
    /* +0xef79eb */ __asm { NOP }
    /* +0xef79ec */ __asm { NOP }
    /* +0xef79ed */ __asm { NOP }
    /* +0xef79ee */ __asm { NOP }
    /* +0xef79ef */ __asm { MOV R9W,0x8315 }
    /* +0xef79f4 */ __asm { MOV qword ptr [RSP + 0x80],R11 }
    /* +0xef79fc */ __asm { MOV EAX,dword ptr [RDX + -0x7e8e] }
    /* +0xef7a02 */ __asm { XOR R9D,0x51fd }
    /* +0xef7a09 */ __asm { IMUL EBP,R9D }
    /* +0xef7a0d */ __asm { ADD EBP,R13D }
    /* +0xef7a10 */ __asm { MOVZX EDX,BP }
    /* +0xef7a13 */ __asm { JMP 0x7fffa5667ed9 }
    /* +0xef7a18 */ __asm { CMP EDX,0x1 }
    /* +0xef7a1b */ __asm { JNZ 0x7fffa5667d38 }
    /* +0xef7a21 */ __asm { MOV EDX,0xf4a16634 }
    /* +0xef7a26 */ __asm { MOV RAX,-0x7a98c91554b36ed4 }
    /* +0xef7a30 */ __asm { CMP RDX,RAX }
    /* +0xef7a33 */ __asm { NOP }
    /* +0xef7a34 */ __asm { NOP }
    /* +0xef7a35 */ __asm { NOP }
    /* +0xef7a36 */ __asm { NOP }
    /* +0xef7a37 */ __asm { NOP }
    /* +0xef7a38 */ __asm { NOP }
    /* +0xef7a39 */ __asm { NOP }
    /* +0xef7a3a */ __asm { NOP }
    /* +0xef7a3b */ __asm { NOP }
    /* +0xef7a3c */ __asm { NOP }
    /* +0xef7a3d */ __asm { NOP }
    /* +0xef7a3e */ __asm { NOP }
    /* +0xef7a3f */ __asm { NOP }
    /* +0xef7a40 */ __asm { MOV R11,qword ptr [RDX + -0x74a3662c] }
    /* +0xef7a47 */ __asm { MOV R9,0x44d21e2c20460abc }
    /* +0xef7a51 */ __asm { MOV RAX,R11 }
    /* +0xef7a54 */ __asm { MUL R9 }
    /* +0xef7a57 */ __asm { MOV R9,RDX }
    /* +0xef7a5a */ __asm { MOV R10D,0x1475454 }
    /* +0xef7a60 */ __asm { MOV RAX,R11 }
    /* +0xef7a63 */ __asm { MUL R10 }
    /* +0xef7a66 */ __asm { ADD RAX,R9 }
    /* +0xef7a69 */ __asm { ADC RDX,0x0 }
    /* +0xef7a6d */ __asm { TEST DL,0x1 }
    /* +0xef7a70 */ __asm { JZ 0x7fffa5667deb }
    /* +0xef7a76 */ __asm { LEA R11,[0x7fffa47b6ff6] }
    /* +0xef7a7d */ __asm { MOV RAX,-0x75606baaeb7022a1 }
    /* +0xef7a87 */ __asm { CMP R11,RAX }
    /* +0xef7a8a */ __asm { NOP }
    /* +0xef7a8b */ __asm { NOP }
    /* +0xef7a8c */ __asm { NOP }
    /* +0xef7a8d */ __asm { NOP }
    /* +0xef7a8e */ __asm { NOP }
    /* +0xef7a8f */ __asm { MOV R9W,0x8e3e }
    /* +0xef7a94 */ __asm { MOV EDX,0xffff8e3f }
    /* +0xef7a99 */ __asm { SUB EDX,R9D }
    /* +0xef7a9c */ __asm { MOVZX EDX,DX }
    /* +0xef7a9f */ __asm { MOV qword ptr [RSP + 0x80],R10 }
    /* +0xef7aa7 */ __asm { MOV EAX,dword ptr [R11 + 0x5ffa] }
    /* +0xef7aae */ __asm { JMP 0x7fffa5667ed9 }
    /* +0xef7ab3 */ __asm { RDTSC }
    /* +0xef7ab5 */ __asm { SHL RDX,0x20 }
    /* +0xef7ab9 */ __asm { OR RDX,RAX }
    /* +0xef7abc */ __asm { MOV RAX,-0x5a46117eacb056b3 }
    /* +0xef7ac6 */ __asm { IMUL RAX,RDX }
    /* +0xef7aca */ __asm { MOV RCX,-0x1281a37aa018eb4 }
    /* +0xef7ad4 */ __asm { MOV R10,RSI }
    /* +0xef7ad7 */ __asm { OR R10,0x1 }
    /* +0xef7adb */ __asm { IMUL RCX,R10 }
    /* +0xef7adf */ __asm { NOT RCX }
    /* +0xef7ae2 */ __asm { LEA R9,[RAX + RCX*0x1] }
    /* +0xef7ae6 */ __asm { ADD R9,-0x67d144c1 }
    /* +0xef7aed */ __asm { MOV RCX,R9 }
    /* +0xef7af0 */ __asm { SHR RCX,0x3b }
    /* +0xef7af4 */ __asm { MOV RAX,R9 }
    /* +0xef7af7 */ __asm { SHR RAX,0x1b }
    /* +0xef7afb */ __asm { SHR R9,0x2d }
    /* +0xef7aff */ __asm { XOR EAX,R9D }
    /* +0xef7b02 */ __asm { ROR EAX,CL }
    /* +0xef7b04 */ __asm { MOV dword ptr [RSP + 0x80],0x577e4a7e }
    /* +0xef7b0f */ __asm { MOV R9D,dword ptr [RSP + 0x80] }
    /* +0xef7b17 */ __asm { MOVD XMM5,ESI }
    /* +0xef7b1b */ __asm { MOV R11D,0x5e582cf0 }
    /* +0xef7b21 */ __asm { MOVD XMM0,R11D }
    /* +0xef7b26 */ __asm { PSUBD XMM0,XMM5 }
    /* +0xef7b2a */ __asm { MOVD R11D,XMM0 }
    /* +0xef7b2f */ __asm { ROL R11D,0x1a }
    /* +0xef7b33 */ __asm { CMP R9D,R11D }
    /* +0xef7b36 */ __asm { NOP }
    /* +0xef7b37 */ __asm { NOP }
    /* +0xef7b38 */ __asm { NOP }
    /* +0xef7b39 */ __asm { NOP }
    /* +0xef7b3a */ __asm { NOP }
    /* +0xef7b3b */ __asm { CMP EAX,0x4505b8 }
    /* +0xef7b40 */ __asm { JA 0x7fffa5667cfc }
    /* +0xef7b46 */ __asm { MOV R9D,0x8dcc4871 }
    /* +0xef7b4c */ __asm { XOR R9D,0xe6263b5f }
    /* +0xef7b53 */ __asm { SUB R9D,ESI }
    /* +0xef7b56 */ __asm { MOV dword ptr [RSP + 0x80],R9D }
    /* +0xef7b5e */ __asm { MOV R9D,dword ptr [RSP + 0x80] }
    /* +0xef7b66 */ __asm { MOV EDX,0x46156a5a }
    /* +0xef7b6b */ __asm { MOV RAX,0x3eb90e63f98e63d8 }
    /* +0xef7b75 */ __asm { CMP RDX,RAX }
    /* +0xef7b78 */ __asm { JZ 0x7fffa56685f4 }
    /* +0xef7b7e */ __asm { MOV R11,qword ptr [RDX + 0x39e895ae] }
    /* +0xef7b85 */ __asm { MOV R9,0x10de372433d436bc }
    /* +0xef7b8f */ __asm { MOV RAX,R11 }
    /* +0xef7b92 */ __asm { MUL R9 }
    /* +0xef7b95 */ __asm { MOV R9,RDX }
    /* +0xef7b98 */ __asm { MOV ECX,0x1474d8f }
    /* +0xef7b9d */ __asm { MOV RAX,R11 }
    /* +0xef7ba0 */ __asm { MUL RCX }
    /* +0xef7ba3 */ __asm { ADD RAX,R9 }
    /* +0xef7ba6 */ __asm { ADC RDX,0x0 }
    /* +0xef7baa */ __asm { TEST DL,0x1 }
    /* +0xef7bad */ __asm { JZ 0x7fffa5667cfc }
    /* +0xef7bb3 */ __asm { PXOR XMM5,XMM5 }
    /* +0xef7bb7 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM5 }
    /* +0xef7bc0 */ __asm { MOV dword ptr [RSP + 0x30],0x54fab2ca }
    /* +0xef7bc8 */ __asm { MOV R9D,dword ptr [RSP + 0x30] }
    /* +0xef7bcd */ __asm { MOV R9D,0x74afa2b4 }
    /* +0xef7bd3 */ __asm { MOV dword ptr [RSP + 0x80],0x0 }
    /* +0xef7bde */ __asm { ADD R9D,ESI }
    /* +0xef7be1 */ __asm { IMUL EAX,R9D,-0x3ffffbdf }
    /* +0xef7be8 */ __asm { ADD EAX,0x62eb3092 }
    /* +0xef7bed */ __asm { MOV R9D,0x67cc9597 }
    /* +0xef7bf3 */ __asm { MOV R8D,0x65cd1e16 }
    /* +0xef7bf9 */ __asm { SUB R8D,R9D }
    /* +0xef7bfc */ __asm { MOV ECX,ESI }
    /* +0xef7bfe */ __asm { ROR R8D,CL }
    /* +0xef7c01 */ __asm { MOV R11,0x5c8b7175440705dd }
    /* +0xef7c0b */ __asm { IMUL R10,R11 }
    /* +0xef7c0f */ __asm { XOR R10,-0x277acf08 }
    /* +0xef7c16 */ __asm { MOV R11,qword ptr [R8] }
    /* +0xef7c19 */ __asm { MOV R9,-0x35a4fa2fbcd1c85b }
    /* +0xef7c23 */ __asm { XOR EDX,EDX }
    /* +0xef7c25 */ __asm { CMP R11,R9 }
    /* +0xef7c28 */ __asm { SETZ DL }
    /* +0xef7c2b */ __asm { MOV R9,-0x35a4fa2fbcd1c85a }
    /* +0xef7c35 */ __asm { XOR ECX,ECX }
    /* +0xef7c37 */ __asm { CMP R11,R9 }
    /* +0xef7c3a */ __asm { SETL CL }
    /* +0xef7c3d */ __asm { CMP R10,RAX }
    /* +0xef7c40 */ __asm { CMOVLE EDX,ECX }
    /* +0xef7c43 */ __asm { CMP DL,0x1 }
    /* +0xef7c46 */ __asm { NOP }
    /* +0xef7c47 */ __asm { NOP }
    /* +0xef7c48 */ __asm { NOP }
    /* +0xef7c49 */ __asm { NOP }
    /* +0xef7c4a */ __asm { NOP }
    /* +0xef7c4b */ __asm { MOV dword ptr [RSP + 0x30],0xf4892843 }
    /* +0xef7c53 */ __asm { MOV R9D,dword ptr [RSP + 0x30] }
    /* +0xef7c58 */ __asm { CMP R9D,0xd9fb81a4 }
    /* +0xef7c5f */ __asm { NOP }
    /* +0xef7c60 */ __asm { NOP }
    /* +0xef7c61 */ __asm { NOP }
    /* +0xef7c62 */ __asm { NOP }
    /* +0xef7c63 */ __asm { NOP }
    /* +0xef7c64 */ __asm { PUSHFQ }
    /* +0xef7c65 */ __asm { POP R9 }
    /* +0xef7c67 */ __asm { AND R9D,0x100 }
    /* +0xef7c6e */ __asm { MOV R11W,0x9955 }
    /* +0xef7c73 */ __asm { IMUL R11D,R11D,0x6403 }
    /* +0xef7c7a */ __asm { NOT R11D }
    /* +0xef7c7d */ __asm { MOVZX R11D,R11W }
    /* +0xef7c81 */ __asm { CMP R9D,R11D }
    /* +0xef7c84 */ __asm { NOP }
    /* +0xef7c85 */ __asm { NOP }
    /* +0xef7c86 */ __asm { NOP }
    /* +0xef7c87 */ __asm { NOP }
    /* +0xef7c88 */ __asm { NOP }
    /* +0xef7c89 */ __asm { NOP }
    /* +0xef7c8a */ __asm { LEA RDX,[0x7fffa4784b47] }
    /* +0xef7c91 */ __asm { MOV RAX,0x1b9dd092665c256a }
    /* +0xef7c9b */ __asm { CMP RDX,RAX }
    /* +0xef7c9e */ __asm { NOP }
    /* +0xef7c9f */ __asm { NOP }
    /* +0xef7ca0 */ __asm { NOP }
    /* +0xef7ca1 */ __asm { NOP }
    /* +0xef7ca2 */ __asm { NOP }
    /* +0xef7ca3 */ __asm { MOV R8W,0x9c2b }
    /* +0xef7ca8 */ __asm { MOV R9W,0x7155 }
    /* +0xef7cad */ __asm { XOR R9D,0xffffe88d }
    /* +0xef7cb4 */ __asm { MOV qword ptr [RSP + 0x30],R11 }
    /* +0xef7cb9 */ __asm { ADD R9D,ESI }
    /* +0xef7cbc */ __asm { XOR R9D,0x99f0 }
    /* +0xef7cc3 */ __asm { MOVZX R9D,R9W }
    /* +0xef7cc7 */ __asm { MOV R11W,0xfeb4 }
    /* +0xef7ccc */ __asm { ADD R11D,0x14b }
    /* +0xef7cd3 */ __asm { MOV ECX,ESI }
    /* +0xef7cd5 */ __asm { ROL R11W,CL }
    /* +0xef7cd9 */ __asm { MOVSX R10,R11W }
    /* +0xef7cdd */ __asm { MOV EAX,dword ptr [RDX + 0x345] }
    /* +0xef7ce3 */ __asm { LEA R11D,[RSI + R8*0x1] }
    /* +0xef7ce7 */ __asm { ADD R11D,0x63f5 }
    /* +0xef7cee */ __asm { MOVZX EDX,R11W }
    /* +0xef7cf2 */ __asm { LEA R8,[RSP + 0x80] }
    /* +0xef7cfa */ __asm { SYSCALL }
    /* +0xef7cfc */ __asm { LEA RDX,[0x7fffa478c21f] }
    /* +0xef7d03 */ __asm { MOV RAX,-0x3d95b31245e32889 }
    /* +0xef7d0d */ __asm { CMP RDX,RAX }
    /* +0xef7d10 */ __asm { NOP }
    /* +0xef7d11 */ __asm { NOP }
    /* +0xef7d12 */ __asm { NOP }
    /* +0xef7d13 */ __asm { NOP }
    /* +0xef7d14 */ __asm { NOP }
    /* +0xef7d15 */ __asm { MOV R9W,0x71c8 }
    /* +0xef7d1a */ __asm { MOV qword ptr [RSP + 0x80],R11 }
    /* +0xef7d22 */ __asm { MOV EAX,dword ptr [RDX + -0x7b77] }
    /* +0xef7d28 */ __asm { IMUL EBP,R9D }
    /* +0xef7d2c */ __asm { ROL BP,0xd }
    /* +0xef7d30 */ __asm { MOVZX EDX,BP }
    /* +0xef7d33 */ __asm { JMP 0x7fffa5667ed9 }
    /* +0xef7d38 */ __asm { MOV EDX,0x8257cf15 }
    /* +0xef7d3d */ __asm { MOV RAX,0x35fee176edd0af12 }
    /* +0xef7d47 */ __asm { CMP RDX,RAX }
    /* +0xef7d4a */ __asm { JZ 0x7fffa56685ec }
    /* +0xef7d50 */ __asm { MOV ECX,0x75262713 }
    /* +0xef7d55 */ __asm { MOV R11,qword ptr [RDX + -0x259cf0d] }
    /* +0xef7d5c */ __asm { MOV R9,-0x15b893d97dde9192 }
    /* +0xef7d66 */ __asm { MOV RAX,R11 }
    /* +0xef7d69 */ __asm { MUL R9 }
    /* +0xef7d6c */ __asm { MOV R9,RDX }
    /* +0xef7d6f */ __asm { MOV R10D,0x14740ec }
    /* +0xef7d75 */ __asm { MOV RAX,R11 }
    /* +0xef7d78 */ __asm { MUL R10 }
    /* +0xef7d7b */ __asm { ADD RAX,R9 }
    /* +0xef7d7e */ __asm { ADC RDX,0x0 }
    /* +0xef7d82 */ __asm { AND EDX,0x1 }
    /* +0xef7d85 */ __asm { ADD ECX,ESI }
    /* +0xef7d87 */ __asm { XOR ECX,0xf524271b }
    /* +0xef7d8d */ __asm { OR RCX,RDX }
    /* +0xef7d90 */ __asm { JNZ 0x7fffa5667e30 }
    /* +0xef7d96 */ __asm { LEA R11,[0x7fffa47c4730] }
    /* +0xef7d9d */ __asm { MOV RDX,R11 }
    /* +0xef7da0 */ __asm { ROL RDX,0x6 }
    /* +0xef7da4 */ __asm { MOV RAX,-0x842a6343 }
    /* +0xef7dae */ __asm { ADD RAX,RDX }
    /* +0xef7db1 */ __asm { MOV R9,0x78eb30fdee6d5b78 }
    /* +0xef7dbb */ __asm { CMP RAX,R9 }
    /* +0xef7dbe */ __asm { JZ 0x7fffa56685fc }
    /* +0xef7dc4 */ __asm { MOV R9W,0xa989 }
    /* +0xef7dc9 */ __asm { ADD R9D,ESI }
    /* +0xef7dcc */ __asm { IMUL R9D,R9D,0x3771 }
    /* +0xef7dd3 */ __asm { MOVZX EDX,R9W }
    /* +0xef7dd7 */ __asm { MOV qword ptr [RSP + 0x80],R10 }
    /* +0xef7ddf */ __asm { MOV EAX,dword ptr [R11 + -0x7740] }
    /* +0xef7de6 */ __asm { JMP 0x7fffa5667ed9 }
    /* +0xef7deb */ __asm { LEA RDX,[0x7fffa47b96f8] }
    /* +0xef7df2 */ __asm { MOV RAX,0x3474b8e15391c5f8 }
    /* +0xef7dfc */ __asm { CMP RDX,RAX }
    /* +0xef7dff */ __asm { JZ 0x7fffa5668605 }
    /* +0xef7e05 */ __asm { MOV qword ptr [RSP + 0x80],R11 }
    /* +0xef7e0d */ __asm { MOV EAX,dword ptr [RDX + 0x38f8] }
    /* +0xef7e13 */ __asm { MOV R9W,0x82c7 }
    /* +0xef7e18 */ __asm { MOV R11D,0xffff83c7 }
    /* +0xef7e1e */ __asm { SUB R11D,R9D }
    /* +0xef7e21 */ __asm { MOV ECX,ESI }
    /* +0xef7e23 */ __asm { ROR R11W,CL }
    /* +0xef7e27 */ __asm { MOVZX EDX,R11W }
    /* +0xef7e2b */ __asm { JMP 0x7fffa5667ed9 }
    /* +0xef7e30 */ __asm { LEA RDX,[0x7fffa47b569b] }
    /* +0xef7e37 */ __asm { MOV RAX,-0x313e6694bb8f3fd3 }
    /* +0xef7e41 */ __asm { CMP RDX,RAX }
    /* +0xef7e44 */ __asm { JZ 0x7fffa566860e }
    /* +0xef7e4a */ __asm { MOV R9W,0xf1ee }
    /* +0xef7e4f */ __asm { MOV qword ptr [RSP + 0x80],R11 }
    /* +0xef7e57 */ __asm { MOV EAX,dword ptr [RDX + 0x6e75] }
    /* +0xef7e5d */ __asm { ADD R9D,0x609d }
    /* +0xef7e64 */ __asm { XOR R9D,ESI }
    /* +0xef7e67 */ __asm { IMUL R9D,R9D,0xc2b }
    /* +0xef7e6e */ __asm { JMP 0x7fffa5667ed5 }
    /* +0xef7e70 */ __asm { MOV R9D,0x8b7880ba }
    /* +0xef7e76 */ __asm { SUB R9D,ESI }
    /* +0xef7e79 */ __asm { XOR R9D,R13D }
    /* +0xef7e7c */ __asm { NOT R9D }
    /* +0xef7e7f */ __asm { LEA RDX,[0x7fffa47bb2c4] }
    /* +0xef7e86 */ __asm { MOV RAX,-0x792f9d8dd2db1c3b }
    /* +0xef7e90 */ __asm { IMUL RAX,RDX }
    /* +0xef7e94 */ __asm { MOVSXD R11,R9D }
    /* +0xef7e97 */ __asm { SUB RAX,R11 }
    /* +0xef7e9a */ __asm { MOV R11,0x764227082335d07d }
    /* +0xef7ea4 */ __asm { CMP RAX,R11 }
    /* +0xef7ea7 */ __asm { JNZ 0x7fffa5667eae }
    /* +0xef7ea9 */ __asm { VPADDB YMM15,YMM12,YMM6 }
    /* +0xef7ead */ __asm { CLI }
    /* +0xef7eae */ __asm { MOV R9W,0x2a08 }
    /* +0xef7eb3 */ __asm { MOV R11D,ESI }
    /* +0xef7eb6 */ __asm { XOR R11D,R9D }
    /* +0xef7eb9 */ __asm { IMUL R9D,R11D,-0x58c3 }
    /* +0xef7ec0 */ __asm { MOV qword ptr [RSP + 0x80],R11 }
    /* +0xef7ec8 */ __asm { MOV EAX,dword ptr [RDX + 0x1d2c] }
    /* +0xef7ece */ __asm { MOV ECX,R13D }
    /* +0xef7ed1 */ __asm { ROR R9W,CL }
    /* +0xef7ed5 */ __asm { MOVZX EDX,R9W }
    /* +0xef7ed9 */ __asm { LEA R10,[RSP + 0x48] }
    /* +0xef7ede */ __asm { LEA R8,[RSP + 0x50] }
    /* +0xef7ee3 */ __asm { SYSCALL }
    /* +0xef7ee5 */ __asm { MOV dword ptr [RSP + 0x80],0x9ab949dc }
}


// ============================================================================
// Function : FUN_7fffa5668b80  |  RVA: 0xef8b80  |  Size: 64 bytes
// Callers  : FUN_7fffa55f6f60@0xe86f60, FUN_7fffa507cd30@0x90cd30, FUN_7fffa5267a20@0xaf7a20
// Callees  : FUN_7fffa5488ca0@0xd18ca0, FUN_7fffa5453ab0@0xce3ab0
// ============================================================================
void FUN_7fffa5668b80(uint64_t param_1,uint64_t *param_2)

{
  code *pcVar1;
  uint64_t uVar2;
  
  pcVar1 = (code *)FUN_7fffa5453ab0(param_1,*param_2);
  (*pcVar1)();
  uVar2 = FUN_7fffa5488ca0();
  FUN_7fffa5453ab0(uVar2,*param_2,2);
  return;
}


// ============================================================================
// Function : FUN_7fffa5668bc0  |  RVA: 0xef8bc0  |  Size: 183 bytes
// Callers  : FUN_7fffa549ab90@0xd2ab90, FUN_7fffa4ab28e0@0x3428e0, FUN_7fffa507aca4@0x90aca4, FUN_7fffa5427f8c@0xcb7f8c, FUN_7fffa565b84c@0xeeb84c, FUN_7fffa52d5b14@0xb65b14, FUN_7fffa50c9360@0x959360
// Callees  : _guard_dispatch_icall@0xf30810, FUN_7fffa4f4120c@0x7d120c, FUN_7fffa52d0cd4@0xb60cd4, FUN_7fffa568783c@0xf1783c
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5668bc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4,
                     uint64_t param_5,uint64_t param_6)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint8_t bVar3;
  code *pcVar4;
  
  lVar1 = FUN_7fffa4f4120c(param_6);
  if ((lVar1 == 0) || (pcVar4 = *(code **)(lVar1 + 0x3b8), pcVar4 == (code *)0x0)) {
    puVar2 = (uint64_t *)FUN_7fffa568783c(0x7fffa47825d8,param_6);
    bVar3 = (uint8_t)_DAT_7fffa4780040 & 0x3f;
    pcVar4 = (code *)((*puVar2 ^ _DAT_7fffa4780040) >> bVar3 |
                     (*puVar2 ^ _DAT_7fffa4780040) << 0x40 - bVar3);
    if (pcVar4 == (code *)0x0) {
      FUN_7fffa52d0cd4(param_1,param_2,param_3,param_4,param_5);
      pcVar4 = (code *)__debugbreak();
      (*pcVar4)();
      return;
    }
  }
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return;
}


// ============================================================================
// Function : FUN_7fffa5668c80  |  RVA: 0xef8c80  |  Size: 21 bytes
// Callers  : none
// Callees  : FUN_7fffa4e8e990@0x71e990
// ============================================================================
void FUN_7fffa5668c80(void)

{
  FUN_7fffa4e8e990();
  return;
}


// ============================================================================
// Function : FUN_7fffa5668c96  |  RVA: 0xef8c96  |  Size: 34 bytes
// Callers  : none
// Callees  : FUN_7fffa54539d0@0xce39d0
// ============================================================================
void FUN_7fffa5668c96(void)

{
  int64_t lVar1;
  
  lVar1 = FUN_7fffa54539d0();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_7fffa54539d0();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5668cb9  |  RVA: 0xef8cb9  |  Size: 23 bytes
// Callers  : none
// Callees  : FUN_7fffa4fcf020@0x85f020
// ============================================================================
void FUN_7fffa5668cb9(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa4fcf020(*(uint64_t *)(param_2 + 0x40));
  return;
}


// ============================================================================
// Function : FUN_7fffa5668ce0  |  RVA: 0xef8ce0  |  Size: 765 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5668ce0(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t in_R11;
  
  uVar5 = (~in_R11 & 0x7fffa4790e61) * -0x52b4f43c +
          (in_R11 | 0xffff80005b86f19e) * 0x4ab59d56 + (in_R11 & 0xffff80005b86f19e) * -0x9d6a9192 +
          (in_R11 ^ 0xffff80005b86f19e) * -0x9d6a9192;
  uVar4 = (uint32_t)uVar5;
  uVar3 = (uint16_t)uVar5;
  lVar6 = (int64_t)(short)(0x2065 - (uVar3 ^ 0x6295));
  *(uint8_t *)((int64_t)
            (int)((uVar4 ^ 0x2ada8eb3) * 0x3ea1b4fa |
                 (uint32_t)((int)((uVar4 ^ 0x2ada8eb3) * -0x60af2583) < 0)) + 0x7fffa4790e69) =
       ((uint8_t)uVar5 + 1) * '\x13' + 'y';
  *(uint8_t (*) [16])(lVar6 + 0x7fffa478c07d) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar6 + 0x7fffa478c06d) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar6 + 0x7fffa478c05d) = (uint8_t  [16])0x0;
  *(uint64_t *)
   ((int64_t)(int)((uVar4 + 0xa557e3c3) * 0x200000 | uVar4 + 0xa557e3c3 >> 0xb) + 0x7fffa47948ba) =
       (uint64_t)((uVar4 ^ 0xe197fb19) + 0x4cdcf0db);
  uVar1 = rdtsc();
  uVar7 = 0;
  lVar6 = (uVar1 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar1)) * 0x6832190dca7d39b;
  do {
    *(char *)(uVar7 + (int64_t)(short)(uVar3 ^ 0x1724) + 0x7fffa47866f3) =
         (char)((uint64_t)(lVar6 * 0x2204a0a31f5fc5f1) >> 0x20);
    *(char *)(uVar7 + (int64_t)(int)(uVar4 ^ 0xad4ba2f1) + 0x7fffa478f33c) =
         (char)(lVar6 * (uVar5 | 1) * 0xbaa745a5d7e27cd >> 0x20);
    *(char *)((uVar7 | 2) + (int64_t)(short)((uVar3 ^ 0x4cb8) + 0xff1) + 0x7fffa4788193) =
         (char)((uint64_t)(lVar6 * 0x5e5f2c6363) >> 0x20);
    *(char *)(uVar7 + 0x7fffa4784a08) = (char)((uint64_t)(lVar6 * 0x90dca7d39b) >> 0x20);
    uVar7 = uVar7 + 4;
    lVar6 = lVar6 * 0x2204a0a31f5fc5f1;
  } while (uVar7 != ~(uVar4 ^ 0xad4b0b97));
  bVar2 = (uint8_t)uVar5 & 0x1f;
  uVar1 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(int)(-0xdcc61 << bVar2 | 0xfff2339fU >> 0x20 - bVar2) +
                          0x7fffa47926d7) * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)
   ((int64_t)(int)((uVar4 ^ 0xb408606a) + 0x1942c088) + 0x7fffa478f53b + (uVar1 >> 0x20) * 8) =
       *(uint64_t *)((int64_t)(short)(uVar3 - 0xe86) + 0x7fffa478649e);
  *(char *)((int64_t)(short)((uVar3 + 0xcc13) * 0x200 | (uint16_t)(uVar3 + 0xcc13) >> 7) +
           0x7fffa478aa90) = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5668fe0  |  RVA: 0xef8fe0  |  Size: 42 bytes
// Callers  : none
// Callees  : FUN_7fffa56a06d0@0xf306d0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa5668fe0(uint64_t param_1)

{
  uint32_t uVar1;
  
  if (_DAT_7fffa4782620 == 0) {
    if ((int)param_1 - 0x61U < 0x1a) {
      param_1 = (uint64_t)((int)param_1 - 0x20);
    }
  }
  else {
    uVar1 = FUN_7fffa56a06d0(param_1,0);
    param_1 = (uint64_t)uVar1;
  }
  return param_1 & 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa5669010  |  RVA: 0xef9010  |  Size: 1907 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa5669010(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t bVar8;
  uint8_t bVar9;
  uint8_t bVar10;
  uint8_t auVar11 [15];
  uint16_t uVar12;
  uint8_t auVar13 [15];
  uint8_t auVar14 [15];
  uint8_t auVar15 [15];
  uint8_t auVar16 [15];
  uint8_t auVar17 [15];
  uint8_t auVar18 [15];
  uint8_t auVar19 [15];
  uint8_t auVar20 [15];
  uint8_t auVar21 [15];
  uint8_t auVar22 [15];
  uint8_t auVar23 [15];
  uint8_t auVar24 [15];
  uint64_t uVar25;
  uint32_t *puVar26;
  uint32_t uVar27;
  uint32_t uVar28;
  uint32_t uVar29;
  int64_t lVar30;
  uint8_t *puVar31;
  uint64_t uVar32;
  int64_t lVar33;
  uint32_t uVar34;
  int64_t lVar35;
  uint32_t uVar36;
  uint64_t uVar37;
  uint32_t uVar38;
  uint64_t uVar39;
  float fVar40;
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  short sVar43;
  uint32_t in_XMM5_Da;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint8_t *puStack_a8;
  int64_t lStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t *puStack_70;
  uint64_t uStack_68;
  uint8_t *puStack_60;
  
  uVar34 = (uint32_t)param_4;
  uVar29 = uVar34 | 1;
  bVar9 = (uint8_t)param_4;
  puStack_60 = (uint8_t *)
               (uint64_t)(0x487367cbU >> (bVar9 & 0x1f) | 0x487367cb << 0x20 - (bVar9 & 0x1f));
  uStack_98 = (uint64_t)((uVar34 ^ 0xeb36def1) << 0x10 | (uVar34 ^ 0xeb36def1) >> 0x10);
  uStack_80 = (uint64_t)((-0x2c63a104 - uVar34) * -0x53328455);
  uStack_90 = (uint64_t)(int)(0xd42bab5bU >> (bVar9 & 0x1f) | -0x2bd454a5 << 0x20 - (bVar9 & 0x1f))
  ;
  uVar28 = in_XMM5_Da ^ 0x5e941bec;
  uStack_78 = (uint64_t)(int)(~(uVar34 ^ 0xca0fedcd) << 6 | ~(uVar34 ^ 0xca0fedcd) >> 0x1a);
  param_2 = (param_2 << 0x2f | param_2 >> 0x11) ^ (param_2 << 0x11 | param_2 >> 0x2f) ^ param_2;
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar34) | 1;
  uVar32 = *(uint64_t *)
            ((int64_t)
             (short)((uint16_t)(uVar29 * 0xcf63) >> 1 | (uint16_t)((uVar29 * 0xcf63 & 1) != 0) << 0xf) +
            0x7fffa47be617);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar32;
  uVar39 = param_2 << 0x22 | param_2 >> 0x1e;
  uVar25 = uVar39 | param_2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar32;
  auVar7._8_8_ = 1;
  auVar7._0_8_ = 0x4325c53ef368eb0;
  uVar28 = uVar28 ^ (uVar28 << 3 | uVar28 >> 0x1d) ^ (uVar28 << 0x11 | uVar28 >> 0xf);
  uVar28 = (uVar28 << 6 | uVar28 >> 0x1a) ^ (uVar28 << 2 | uVar28 >> 0x1e) ^ uVar28;
  uVar28 = (uVar28 << 0xc | uVar28 >> 0x14) ^ (uVar28 << 4 | uVar28 >> 0x1c) ^ uVar28;
  uVar28 = (uVar28 << 8 | uVar28 >> 0x18) ^ (uVar28 << 0x18 | uVar28 >> 8) ^ uVar28;
  uVar38 = uVar28 << 0x10 | uVar28 >> 0x10;
  uVar27 = uVar28 + uVar38;
  if (uVar29 * 0x26bb94ea + 0x54f9e548 < uStack_90) {
    uVar27 = uVar38 ^ uVar28;
  }
  uVar28 = (uVar27 ^ uVar38) + 0x5e512e3e;
  uVar28 = (uVar28 * 0x10000 | uVar28 >> 0x10) ^ (uVar28 * 0x20000000 | uVar28 >> 3) ^ uVar28;
  uVar27 = uVar28 >> 10;
  uVar28 = uVar28 << 0x16 | uVar27;
  uVar37 = (uint64_t)uVar28;
  uVar32 = uVar37 - 1;
  if ((0x74943841 - uVar34 >> 1 | (uint32_t)((0x74943841 - uVar34 & 1) != 0) << 0x1f) == 0x45300ca8) {
    uVar32 = ~uVar37;
  }
  uVar32 = (param_2 << 0x1e | param_2 >> 0x22) ^
           ((uVar25 | uVar37) - ((~param_2 | uVar39) & uVar37)) * 0x2ef5451a +
           (int64_t)(int)(uVar34 ^ 0x3b3ea414) * (uVar32 & uVar25) +
           ((uint64_t)(~(uint32_t)(param_2 >> 0x1e) & (uint32_t)param_2 & uVar28) * -0x2ef5451a -
           (uint64_t)(~(uint32_t)uVar25 & uVar28)) + ((uVar39 ^ param_2) & ~uVar37) * 2 +
           (uVar39 & param_2 ^ uVar37);
  uVar39 = (uVar32 << 4 | uVar32 >> 0x3c) ^ uVar32;
  uVar25 = uVar32 << 0x3c | uVar32 >> 4;
  uVar32 = uVar25 ^ uVar39;
  if (uStack_78 <= (uint64_t)(int64_t)(int)(-0x6bec0312 - uVar34)) {
    uVar32 = uVar25 * uVar39;
  }
  uVar32 = (uVar32 << 0x38 | uVar32 >> 8) ^ (uVar32 << 8 | uVar32 >> 0x38) ^ uVar32;
  uVar32 = (uVar32 << 0x10 | uVar32 >> 0x30) ^ (uVar32 << 0x30 | uVar32 >> 0x10) ^ uVar32;
  uVar32 = (uVar32 << 0x10 | uVar32 >> 0x30) ^ uVar32 ^ (uVar32 << 0x1e | uVar32 >> 0x22);
  uVar25 = (uVar32 << 0x24 | uVar32 >> 0x1c) ^ uVar32;
  uVar39 = uVar32 << 4 | uVar32 >> 0x3c;
  uVar32 = uVar39 | uVar25;
  if (uStack_98 <= (uVar29 * 0x4ae56e85 ^ 0xbd766103)) {
    uVar32 = uVar25 ^ uVar39;
  }
  uVar25 = uVar32 << 0x20 | uVar32 >> 0x20 | uVar32;
  if (uStack_80 < puStack_60) {
    uVar25 = uVar32;
  }
  lStack_a0 = 0;
  uStack_88 = param_4;
  puStack_70 = param_1;
  fVar40 = (float)FUN_7fffa5102fa0((float)(SUB168(auVar4 * auVar7,8) +
                                           (uint64_t)
                                           CARRY8(SUB168(auVar4 * ZEXT816(0x4325c53ef368eb0),0),
                                                  SUB168(auVar3 * ZEXT816(0x4325c53ef368eb05),8)) +
                                          1) / 0.875);
  uVar37 = (int64_t)(fVar40 - 9.223372e+18) & (int64_t)fVar40 >> 0x3f | (int64_t)fVar40;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar37;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar37;
  uVar39 = SUB168(auVar6 * ZEXT816(0x1111111111111111),8) +
           (uint64_t)
           CARRY8(SUB168(auVar6 * ZEXT816(0x1111111111111111),0),
                  SUB168(auVar5 * ZEXT816(0x1111111111111112),8));
  uVar32 = 0x3f;
  if (uVar39 != 0) {
    for (; uVar39 >> uVar32 == 0; uVar32 = uVar32 - 1) {
    }
  }
  uStack_b8 = 0x3f;
  if (0x1d < uVar37) {
    uStack_b8 = uVar32 ^ 0x3f;
  }
  bVar8 = (uint8_t)uStack_b8;
  lVar35 = 1L << (-bVar8 & 0x3f);
  uStack_b0 = lVar35 - 1;
  if (uVar37 == 0) {
    lVar33 = 0;
    puVar31 = &UNK_7fffa56ee720;
  }
  else {
    bVar10 = (uint8_t)(0x40 - uStack_b8);
    uVar32 = 0x40 - uStack_b8 & 0xffffffff;
    lVar30 = 0x78L << ((uint8_t)uVar32 & 0x3f);
    FUN_7fffa526aab0(uVar32,0,0x7fffa527098e,
                     ((0x88L << (bVar10 & 0x3f)) + 0xeU & 0xfffffffffffffff8) << 0xe);
    lVar33 = (uVar32 << 0x2c | uVar32 >> 0x14) - ((uVar32 >> 0x14) << 0x36);
    puVar31 = (uint8_t *)
              ((uint64_t)(-((int)lVar33 + (int)lVar30 + -8) & 0xf) + lVar33 + lVar30 + -8);
    lStack_a0 = lVar33;
    FUN_7fffa4ecf8e0(puVar31,0,0x10L << (bVar10 & 0x3f));
    puVar31[lVar35 * 0x10 + -2] = 1;
  }
  uStack_98 = uVar25 >> (bVar8 & 0x3f);
  *puStack_70 = 0;
  puStack_60 = puVar31 + uStack_98 * 0x10;
  pcVar1 = puVar31 + uStack_98 * 0x10;
  auVar41[0] = -(*pcVar1 == '\0');
  auVar41[1] = -(pcVar1[1] == '\0');
  auVar41[2] = -(pcVar1[2] == '\0');
  auVar41[3] = -(pcVar1[3] == '\0');
  auVar41[4] = -(pcVar1[4] == '\0');
  auVar41[5] = -(pcVar1[5] == '\0');
  auVar41[6] = -(pcVar1[6] == '\0');
  auVar41[7] = -(pcVar1[7] == '\0');
  auVar41[8] = -(pcVar1[8] == '\0');
  auVar41[9] = -(pcVar1[9] == '\0');
  auVar41[10] = -(pcVar1[10] == '\0');
  auVar41[0xb] = -(pcVar1[0xb] == '\0');
  auVar41[0xc] = -(pcVar1[0xc] == '\0');
  auVar41[0xd] = -(pcVar1[0xd] == '\0');
  auVar41[0xe] = -(pcVar1[0xe] == '\0');
  auVar41[0xf] = -(pcVar1[0xf] == '\0');
  *(uint32_t *)(puStack_70 + 1) = 0;
  puStack_70[2] = 0;
  uVar29 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar41 >> 7,0) & 1) |
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
                         (uint16_t)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe);
  if (uVar29 == 0) {
    lVar35 = 1;
    do {
      puStack_60[0xf] = puStack_60[0xf] | '\x01' << ((uint8_t)uVar25 & 7);
      uStack_98 = uStack_98 + lVar35 & uStack_b0;
      puStack_60 = puVar31 + uStack_98 * 0x10;
      pcVar1 = puVar31 + uStack_98 * 0x10;
      auVar42[0] = -(*pcVar1 == '\0');
      auVar42[1] = -(pcVar1[1] == '\0');
      auVar42[2] = -(pcVar1[2] == '\0');
      auVar42[3] = -(pcVar1[3] == '\0');
      auVar42[4] = -(pcVar1[4] == '\0');
      auVar42[5] = -(pcVar1[5] == '\0');
      auVar42[6] = -(pcVar1[6] == '\0');
      auVar42[7] = -(pcVar1[7] == '\0');
      auVar42[8] = -(pcVar1[8] == '\0');
      auVar42[9] = -(pcVar1[9] == '\0');
      auVar42[10] = -(pcVar1[10] == '\0');
      auVar42[0xb] = -(pcVar1[0xb] == '\0');
      auVar42[0xc] = -(pcVar1[0xc] == '\0');
      auVar42[0xd] = -(pcVar1[0xd] == '\0');
      auVar42[0xe] = -(pcVar1[0xe] == '\0');
      auVar42[0xf] = -(pcVar1[0xf] == '\0');
      uVar29 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar42 >> 7,0) & 1) |
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
                             (uint16_t)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe);
      lVar35 = lVar35 + 1;
    } while (uVar29 == 0);
    lVar33 = lStack_a0;
  }
  else {
  }
  uVar12 = (uint16_t)param_4;
  uStack_80 = 0x7fffa47c3414;
  auVar11._8_6_ = 0;
  auVar11._0_8_ = uVar25;
  auVar11[0xe] = (char)(uVar25 >> 0x38);
  auVar13._8_4_ = 0;
  auVar13._0_8_ = uVar25;
  auVar13[0xc] = (char)(uVar25 >> 0x30);
  auVar13._13_2_ = auVar11._13_2_;
  auVar14._8_4_ = 0;
  auVar14._0_8_ = uVar25;
  auVar14._12_3_ = auVar13._12_3_;
  auVar15._8_2_ = 0;
  auVar15._0_8_ = uVar25;
  auVar15[10] = (char)(uVar25 >> 0x28);
  auVar15._11_4_ = auVar14._11_4_;
  auVar16._8_2_ = 0;
  auVar16._0_8_ = uVar25;
  auVar16._10_5_ = auVar15._10_5_;
  auVar17[8] = (char)(uVar25 >> 0x20);
  auVar17._0_8_ = uVar25;
  auVar17._9_6_ = auVar16._9_6_;
  auVar19._7_8_ = 0;
  auVar19._0_7_ = auVar17._8_7_;
  auVar20._8_7_ = 0;
  auVar20._0_8_ = SUB158(auVar19 << 0x40,7);
  auVar21._9_6_ = 0;
  auVar21._0_9_ = SUB159(auVar20 << 0x38,6);
  auVar22._10_5_ = 0;
  auVar22._0_10_ = SUB1510(auVar21 << 0x30,5);
  auVar23._11_4_ = 0;
  auVar23._0_11_ = SUB1511(auVar22 << 0x28,4);
  auVar24._12_3_ = 0;
  auVar24._0_12_ = SUB1512(auVar23 << 0x20,3);
  auVar18._2_13_ = SUB1513(auVar24 << 0x18,2);
  auVar18._0_2_ = (uint16_t)uVar25 & 0xff;
  uVar36 = (uint32_t)CONCAT62((int6)(uStack_98 >> 0x10),0xe5d1) ^ 0xffffea65;
  sVar43 = (short)uVar36 * (short)uStack_68;
  uVar38 = 0;
  for (; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
    uVar38 = uVar38 + 1;
  }
  uVar25 = (uint64_t)uVar38;
  uVar39 = ((int64_t)&uStack_b8 * 0x2000000 | (uint64_t)&uStack_b8 >> 0x27) ^
           ((int64_t)&uStack_b8 << 0x26 | (uint64_t)&uStack_b8 >> 0x1a) ^ (uint64_t)&uStack_b8;
  uVar32 = (uint64_t)CONCAT22((short)(uVar36 >> 0x10) * (short)(uStack_68 >> 0x10),sVar43);
  uStack_68 = (uint64_t)sVar43;
  puStack_a8 = puVar31;
  (*(code *)((int64_t)(short)(-0x39ee - uVar12) + 0x7fffa527038f))();
  puVar26 = (uint32_t *)((uVar32 << 0x2c | uVar32 >> 0x14) - ((uVar32 >> 0x14) << 0x36));
  lVar33 = uStack_98 * 0x78 + lVar33;
  *(uint32_t **)(lVar33 + uVar25 * 8) = puVar26;
  uVar2 = (&UNK_7fffa5836091)[auVar18._0_8_ * 4 + (int64_t)(short)(uVar12 ^ 0xb07e)];
  *puVar26 = uVar27 << 0x10 | uVar28 >> 0x10;
  puStack_60[uVar25] = uVar2;
  *(uint32_t *)(puStack_70 + 1) = uVar38;
  *puStack_70 = puStack_60;
  puStack_70[2] = lVar33 + uVar25 * 8;
  (*(code *)(&UNK_7fffa55dd45b +
            (int)(0xc3ebfffeU >> (bVar9 & 0x1f) | -0x3c140002 << 0x20 - (bVar9 & 0x1f))))
            (uVar39 << 0x2a | uVar39 >> 0x16,uVar2,
             (uVar34 ^ 0x32685b26) << 0x16 | (uVar34 ^ 0x32685b26) >> 10);
  *(int64_t *)(uStack_80 + 0x28 + (int64_t)(short)((uVar12 ^ 0x822c) + 0x17)) =
       *(int64_t *)(uStack_68 + 0x7fffa47bf0bc) + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa5669790  |  RVA: 0xef9790  |  Size: 1604 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5669b2a) */
/* WARNING: Removing unreachable block (ram,0x7fffa5669b8b) */
/* WARNING: Removing unreachable block (ram,0x7fffa5669cf7) */

void FUN_7fffa5669790(void)

{
  uint64_t uVar1;
  
  uRam00007fffa47bb808 = 0x4cdf1cc78920bfdd;
  uRam00007fffa47bb7f8 = 0x10190ceb5df37d33;
  uRam00007fffa47bb800 = 0xd40861c37e6fe0ac;
  uVar1 = uRam00007fffa47813e8 ^ 0x10615bc286bea472;
  uRam00007fffa47bb818 = 0xe8f89cf0815e4ba3;
  uVar1 = (uVar1 << 0x14 | uVar1 >> 0x2c) ^ (uVar1 << 0xe | uVar1 >> 0x32) ^
          (uVar1 << 0x39 | uVar1 >> 7);
  uVar1 = (uVar1 << 0x36 | uVar1 >> 10) ^ (uVar1 << 0x2a | uVar1 >> 0x16) ^ uVar1;
  uVar1 = (uVar1 << 0x14 | uVar1 >> 0x2c) ^ (uVar1 << 0x2c | uVar1 >> 0x14) ^ uVar1;
  uVar1 = (uVar1 << 0x28 | uVar1 >> 0x18) ^ (uVar1 << 0x18 | uVar1 >> 0x28) ^ uVar1;
  uRam00007fffa47bb810 = (uVar1 << 0x30 | uVar1 >> 0x10) ^ (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar1;
  lRam00007fffa47bb820 = lRam00007fffa4780f68 + 0x119a9d10a184ae94;
  uRam00007fffa47bb830 = 0x49470a4368b0e824;
  uRam00007fffa47bb828 = 0xbcafe72f121feadb;
  return;
}


// ============================================================================
// Function : FUN_7fffa5669df0  |  RVA: 0xef9df0  |  Size: 121169 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5669df0(void) {
    /* +0xef9df0 */ __asm { PUSH R12 }
    /* +0xef9df2 */ __asm { PUSH R13 }
    /* +0xef9df4 */ __asm { PUSH R14 }
    /* +0xef9df6 */ __asm { PUSH RBX }
    /* +0xef9df7 */ __asm { PUSH RDI }
    /* +0xef9df8 */ __asm { PUSH RBP }
    /* +0xef9df9 */ __asm { PUSH R15 }
    /* +0xef9dfb */ __asm { PUSH RSI }
    /* +0xef9dfc */ __asm { SUB RSP,0x548 }
    /* +0xef9e03 */ __asm { MOVDQA xmmword ptr [RSP + 0x530],XMM12 }
    /* +0xef9e0d */ __asm { MOVDQA xmmword ptr [RSP + 0x520],XMM14 }
    /* +0xef9e17 */ __asm { MOVDQA xmmword ptr [RSP + 0x510],XMM15 }
    /* +0xef9e21 */ __asm { MOVDQA xmmword ptr [RSP + 0x500],XMM7 }
    /* +0xef9e2a */ __asm { MOVDQA xmmword ptr [RSP + 0x4f0],XMM13 }
    /* +0xef9e34 */ __asm { MOVDQA xmmword ptr [RSP + 0x4e0],XMM11 }
    /* +0xef9e3e */ __asm { MOVDQA xmmword ptr [RSP + 0x4d0],XMM10 }
    /* +0xef9e48 */ __asm { MOVDQA xmmword ptr [RSP + 0x4c0],XMM8 }
    /* +0xef9e52 */ __asm { MOVDQA xmmword ptr [RSP + 0x4b0],XMM9 }
    /* +0xef9e5c */ __asm { MOVDQA xmmword ptr [RSP + 0x4a0],XMM6 }
    /* +0xef9e65 */ __asm { MOV RBX,RDX }
    /* +0xef9e68 */ __asm { MOV RBP,RCX }
    /* +0xef9e6b */ __asm { MOV qword ptr [RSP + 0x2e0],R11 }
    /* +0xef9e73 */ __asm { MOV qword ptr [RSP + 0x78],R9 }
    /* +0xef9e78 */ __asm { LEA R8,[0x7fffa55bd6f3] }
    /* +0xef9e7f */ __asm { MOV R11D,0xa403867c }
    /* +0xef9e85 */ __asm { MOV R10D,0x267ed610 }
    /* +0xef9e8b */ __asm { ADD R10D,0x2a8125f6 }
    /* +0xef9e92 */ __asm { ROR R10D,0x1 }
    /* +0xef9e95 */ __asm { MOV ECX,EBX }
    /* +0xef9e97 */ __asm { ROL R10D,CL }
    /* +0xef9e9a */ __asm { MOV R15D,0x8095c4d6 }
    /* +0xef9ea0 */ __asm { MOV R14D,EBX }
    /* +0xef9ea3 */ __asm { OR R14D,0x1 }
    /* +0xef9ea7 */ __asm { MOV RCX,RAX }
    /* +0xef9eaa */ __asm { ROL RCX,0x12 }
    /* +0xef9eae */ __asm { MOV RDX,RAX }
    /* +0xef9eb1 */ __asm { ROL RDX,0x4 }
    /* +0xef9eb5 */ __asm { MOV R9W,0xefc4 }
    /* +0xef9eba */ __asm { IMUL R9D,R14D }
    /* +0xef9ebe */ __asm { ROL R9W,0xa }
    /* +0xef9ec3 */ __asm { XOR RDX,RCX }
    /* +0xef9ec6 */ __asm { XOR RDX,RAX }
    /* +0xef9ec9 */ __asm { MOV RCX,RDX }
    /* +0xef9ecc */ __asm { ROL RCX,0x8 }
    /* +0xef9ed0 */ __asm { MOVSX R13,R9W }
    /* +0xef9ed4 */ __asm { LEA RAX,[RSP + 0x360] }
    /* +0xef9edc */ __asm { MOV R9,RAX }
    /* +0xef9edf */ __asm { SHR R9,0x3c }
    /* +0xef9ee3 */ __asm { XOR R9,RAX }
    /* +0xef9ee6 */ __asm { MOV RDI,R9 }
    /* +0xef9ee9 */ __asm { SHL RDI,0x3a }
    /* +0xef9eed */ __asm { MOV qword ptr [RSP + 0x1d0],R9 }
    /* +0xef9ef5 */ __asm { ADD RDI,R9 }
    /* +0xef9ef8 */ __asm { MOV R12,RDI }
    /* +0xef9efb */ __asm { ROL R12,0xb }
    /* +0xef9eff */ __asm { ADD R13,R8 }
    /* +0xef9f02 */ __asm { MOV R8,RDX }
    /* +0xef9f05 */ __asm { ROL R8,0x24 }
    /* +0xef9f09 */ __asm { XOR R8,RCX }
    /* +0xef9f0c */ __asm { MOV R9,RDI }
    /* +0xef9f0f */ __asm { ROL R9,0x12 }
    /* +0xef9f13 */ __asm { XOR R8,RDX }
    /* +0xef9f16 */ __asm { MOV RDX,R8 }
    /* +0xef9f19 */ __asm { ROL RDX,0x10 }
    /* +0xef9f1d */ __asm { XOR R9,R12 }
    /* +0xef9f20 */ __asm { MOV RSI,R8 }
    /* +0xef9f23 */ __asm { ROL RSI,0x8 }
    /* +0xef9f27 */ __asm { IMUL EAX,R11D,0x3b605a1 }
    /* +0xef9f2e */ __asm { XOR RSI,RDX }
    /* +0xef9f31 */ __asm { MOV R12D,0xa8ae7b31 }
    /* +0xef9f37 */ __asm { ADD R12D,EBX }
    /* +0xef9f3a */ __asm { XOR R12D,0x748c23b4 }
    /* +0xef9f41 */ __asm { NOT EAX }
    /* +0xef9f43 */ __asm { MOV qword ptr [RSP + 0x298],RBX }
    /* +0xef9f4b */ __asm { MOV ECX,EBX }
    /* +0xef9f4d */ __asm { ROL EAX,CL }
    /* +0xef9f4f */ __asm { XOR RSI,R8 }
    /* +0xef9f52 */ __asm { MOV R8,RSI }
    /* +0xef9f55 */ __asm { ROL R8,0x10 }
    /* +0xef9f59 */ __asm { XOR R9,RDI }
    /* +0xef9f5c */ __asm { MOV RDX,RSI }
    /* +0xef9f5f */ __asm { ROL RDX,0x20 }
    /* +0xef9f63 */ __asm { XOR RDX,R8 }
    /* +0xef9f66 */ __asm { XOR RDX,RSI }
    /* +0xef9f69 */ __asm { ROL RDX,0x20 }
    /* +0xef9f6d */ __asm { MOV R8,0x3ffffffe0000001 }
    /* +0xef9f77 */ __asm { IMUL R8,RDX }
    /* +0xef9f7b */ __asm { MOV RDI,-0x21aa7cbef2ac1a05 }
    /* +0xef9f85 */ __asm { ADD RDI,R8 }
    /* +0xef9f88 */ __asm { MOV R8,qword ptr [RDI + 0xc80] }
    /* +0xef9f8f */ __asm { MOV R11,qword ptr [RDI + 0xc88] }
    /* +0xef9f96 */ __asm { ADD RAX,RDI }
    /* +0xef9f99 */ __asm { MOV qword ptr [RSP + 0x200],R8 }
    /* +0xef9fa1 */ __asm { XOR R10,R8 }
    /* +0xef9fa4 */ __asm { MOV R8,qword ptr [RDI + 0xdc0] }
    /* +0xef9fab */ __asm { LEA RDX,[RDI + 0xe8] }
    /* +0xef9fb2 */ __asm { MOV qword ptr [RSP + 0x20],R12 }
    /* +0xef9fb7 */ __asm { MOV qword ptr [RSP + 0x1a0],RAX }
    /* +0xef9fbf */ __asm { CALL R13 }
    /* +0xef9fc2 */ __asm { ADD R11,0x453ba0f2 }
    /* +0xef9fc9 */ __asm { LEA RBX,[R15 + 0x9a7c1d8] }
    /* +0xef9fd0 */ __asm { XOR RBX,R11 }
    /* +0xef9fd3 */ __asm { CMP RBX,-0x78 }
    /* +0xef9fd7 */ __asm { JA 0x7fffa5680ac6 }
    /* +0xef9fdd */ __asm { MOV R8,RBP }
    /* +0xef9fe0 */ __asm { ROL R8,0x5 }
    /* +0xef9fe4 */ __asm { MOV RAX,RBP }
    /* +0xef9fe7 */ __asm { ROL RAX,0x25 }
    /* +0xef9feb */ __asm { ROL RBP,0x2 }
    /* +0xef9fef */ __asm { XOR RBP,RAX }
    /* +0xef9ff2 */ __asm { XOR RBP,R8 }
    /* +0xef9ff5 */ __asm { MOV R11D,0xf92aabe }
    /* +0xef9ffb */ __asm { ADD R11D,0x94cdc505 }
    /* +0xefa002 */ __asm { IMUL R11D,R14D }
    /* +0xefa006 */ __asm { LEA R8,[R15 + 0x234bcf25] }
    /* +0xefa00d */ __asm { CMP R11,R8 }
    /* +0xefa010 */ __asm { JZ 0x7fffa566a04d }
    /* +0xefa012 */ __asm { MOV RAX,qword ptr [RSP + 0x1a0] }
    /* +0xefa01a */ __asm { MOV RDX,qword ptr [RAX] }
    /* +0xefa01d */ __asm { MOV RCX,qword ptr [RDI + 0x3c0] }
    /* +0xefa024 */ __asm { CMP RCX,RDX }
    /* +0xefa027 */ __asm { SETZ R10B }
    /* +0xefa02b */ __asm { MOV EAX,0xb1206f1 }
    /* +0xefa030 */ __asm { MOV RSI,qword ptr [RSP + 0x298] }
    /* +0xefa038 */ __asm { LEA R11D,[RSI + RAX*0x1] }
    /* +0xefa03c */ __asm { ADD R11D,0xe7d8a491 }
    /* +0xefa043 */ __asm { MOV qword ptr [RSP + 0x1f0],R11 }
    /* +0xefa04b */ __asm { JMP 0x7fffa566a08a }
    /* +0xefa04d */ __asm { MOV R11D,0xed12cd32 }
    /* +0xefa053 */ __asm { XOR R11D,0x48d895bc }
    /* +0xefa05a */ __asm { MOV RAX,qword ptr [RSP + 0x1a0] }
    /* +0xefa062 */ __asm { MOV RDX,qword ptr [RAX] }
    /* +0xefa065 */ __asm { IMUL R11D,R14D }
    /* +0xefa069 */ __asm { NOT R11D }
    /* +0xefa06c */ __asm { MOV qword ptr [RSP + 0x1f0],R11 }
    /* +0xefa074 */ __asm { MOV RCX,qword ptr [RDI + 0x3c0] }
    /* +0xefa07b */ __asm { CMP RCX,RDX }
    /* +0xefa07e */ __asm { SETZ R10B }
    /* +0xefa082 */ __asm { MOV RSI,qword ptr [RSP + 0x298] }
    /* +0xefa08a */ __asm { MOV R15,qword ptr [RSP + 0x78] }
    /* +0xefa08f */ __asm { MOV RAX,qword ptr [RSP + 0x5b0] }
    /* +0xefa097 */ __asm { ROL RBP,0x6 }
    /* +0xefa09b */ __asm { MOV qword ptr [RSP + 0x1e8],RBP }
    /* +0xefa0a3 */ __asm { MOV R11,qword ptr [RDI + 0x3c8] }
    /* +0xefa0aa */ __asm { MOV R8,qword ptr [RDI + 0xc88] }
    /* +0xefa0b1 */ __asm { MOV qword ptr [RSP + 0x58],R8 }
    /* +0xefa0b6 */ __asm { MOV R12D,dword ptr [RSP + 0x360] }
    /* +0xefa0be */ __asm { MOV R13,qword ptr [RDI + 0x3d0] }
    /* +0xefa0c5 */ __asm { ADD qword ptr [RSP + 0x2e0],R15 }
    /* +0xefa0cd */ __asm { MOV R8,qword ptr [RDI + 0x3e8] }
    /* +0xefa0d4 */ __asm { MOV qword ptr [RSP + 0x60],R8 }
    /* +0xefa0d9 */ __asm { MOV R8,qword ptr [RDI + 0x3e0] }
    /* +0xefa0e0 */ __asm { MOV qword ptr [RSP + 0x2b8],R8 }
    /* +0xefa0e8 */ __asm { XOR R9D,R9D }
    /* +0xefa0eb */ __asm { CMP R12D,0x2 }
    /* +0xefa0ef */ __asm { SETZ R9B }
    /* +0xefa0f3 */ __asm { MOV dword ptr [RSP + 0x74],R9D }
    /* +0xefa0f8 */ __asm { MOV R8,qword ptr [RDI + 0x3d8] }
    /* +0xefa0ff */ __asm { MOV qword ptr [RSP + 0x208],R8 }
    /* +0xefa107 */ __asm { MOV R8,qword ptr [RDI + 0x120] }
    /* +0xefa10e */ __asm { CMP R8,0x53d }
    /* +0xefa115 */ __asm { MOV R9D,0x53c }
    /* +0xefa11b */ __asm { CMOVNC R9,R8 }
    /* +0xefa11f */ __asm { MOV qword ptr [RSP + 0x138],R9 }
    /* +0xefa127 */ __asm { MOV R8,qword ptr [RDI + 0xc80] }
    /* +0xefa12e */ __asm { MOV qword ptr [RSP + 0x250],R8 }
    /* +0xefa136 */ __asm { MOV qword ptr [RSP + 0x340],R13 }
    /* +0xefa13e */ __asm { MOV qword ptr [RSP + 0x160],R11 }
    /* +0xefa146 */ __asm { SUB R13,R11 }
    /* +0xefa149 */ __asm { MOV qword ptr [RSP + 0x218],R13 }
    /* +0xefa151 */ __asm { MOV R9D,dword ptr [RDI + 0x8] }
    /* +0xefa155 */ __asm { MOV dword ptr [RSP + 0x90],R9D }
    /* +0xefa15d */ __asm { TEST R10B,R10B }
    /* +0xefa160 */ __asm { MOV qword ptr [RSP + 0x330],RDX }
    /* +0xefa168 */ __asm { MOV dword ptr [RSP + 0x1c4],R14D }
    /* +0xefa170 */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0xefa175 */ __asm { JZ 0x7fffa566a1a6 }
    /* +0xefa177 */ __asm { MOV dword ptr [RSP + 0x1cc],0x1 }
    /* +0xefa182 */ __asm { MOV qword ptr [RSP + 0xf8],0x0 }
    /* +0xefa18e */ __asm { MOV R13,RDX }
    /* +0xefa191 */ __asm { MOV qword ptr [RSP + 0x278],RAX }
    /* +0xefa199 */ __asm { MOV RDX,R15 }
    /* +0xefa19c */ __asm { XOR EBX,EBX }
    /* +0xefa19e */ __asm { XOR R14D,R14D }
    /* +0xefa1a1 */ __asm { JMP 0x7fffa567a3bc }
    /* +0xefa1a6 */ __asm { MOV qword ptr [RSP + 0xc0],RDI }
    /* +0xefa1ae */ __asm { MOV RDI,qword ptr [RDI + 0xdc0] }
    /* +0xefa1b5 */ __asm { MOVQ XMM5,RDX }
    /* +0xefa1ba */ __asm { MOVQ XMM0,RCX }
    /* +0xefa1bf */ __asm { PSUBQ XMM0,XMM5 }
    /* +0xefa1c3 */ __asm { MOVQ RAX,XMM0 }
    /* +0xefa1c8 */ __asm { MOV qword ptr [RSP + 0xf8],RAX }
    /* +0xefa1d0 */ __asm { MOV RBX,RAX }
    /* +0xefa1d3 */ __asm { SAR RBX,0x3 }
    /* +0xefa1d7 */ __asm { CMP R12D,0x2 }
    /* +0xefa1db */ __asm { MOV qword ptr [RSP + 0x118],RBX }
    /* +0xefa1e3 */ __asm { JL 0x7fffa566a486 }
    /* +0xefa1e9 */ __asm { LEA R9D,[R12 + -0x2] }
    /* +0xefa1ee */ __asm { CMP R9D,0x2 }
    /* +0xefa1f2 */ __asm { MOV R8,qword ptr [RSP + 0x218] }
    /* +0xefa1fa */ __asm { JNC 0x7fffa566a4c7 }
    /* +0xefa200 */ __asm { MOV R9W,0x143d }
    /* +0xefa205 */ __asm { MOV R11D,EDI }
    /* +0xefa208 */ __asm { AND R11D,0x3 }
    /* +0xefa20c */ __asm { ADD R9D,dword ptr [RSP + 0x1f0] }
    /* +0xefa214 */ __asm { ROL R9W,0x7 }
    /* +0xefa219 */ __asm { MOV EAX,dword ptr [RSP + 0x1c4] }
    /* +0xefa220 */ __asm { IMUL EAX,R9D }
    /* +0xefa224 */ __asm { NOT EAX }
    /* +0xefa226 */ __asm { MOVZX R9D,AX }
    /* +0xefa22a */ __asm { MOV RCX,R8 }
    /* +0xefa22d */ __asm { CMP R11D,R9D }
    /* +0xefa230 */ __asm { JNZ 0x7fffa566a822 }
    /* +0xefa236 */ __asm { MOVD XMM5,dword ptr [RSP + 0x1f0] }
    /* +0xefa23f */ __asm { MOV R9W,0x78a2 }
    /* +0xefa244 */ __asm { MOVD XMM0,R9D }
    /* +0xefa249 */ __asm { PXOR XMM0,XMM5 }
    /* +0xefa24d */ __asm { MOVD R9D,XMM0 }
    /* +0xefa252 */ __asm { ADD R9D,ESI }
    /* +0xefa255 */ __asm { NOT R9D }
    /* +0xefa258 */ __asm { IMUL R9D,R9D,0x79d3 }
    /* +0xefa25f */ __asm { MOVZX R11D,R9W }
    /* +0xefa263 */ __asm { CMP R8,R11 }
    /* +0xefa266 */ __asm { MOV R13,R8 }
    /* +0xefa269 */ __asm { JC 0x7fffa566a4ce }
    /* +0xefa26f */ __asm { MOV R8D,0x1000 }
    /* +0xefa275 */ __asm { XOR EDX,EDX }
    /* +0xefa277 */ __asm { MOV RCX,RDI }
    /* +0xefa27a */ __asm { CALL 0x7fffa4ecf8e0 }
    /* +0xefa27f */ __asm { MOV R8,qword ptr [RSP + 0x160] }
    /* +0xefa287 */ __asm { CMP R13,0x14 }
    /* +0xefa28b */ __asm { JL 0x7fffa566a522 }
    /* +0xefa291 */ __asm { MOV R10,qword ptr [RSP + 0x160] }
    /* +0xefa299 */ __asm { MOV RAX,qword ptr [RSP + 0x218] }
    /* +0xefa2a1 */ __asm { LEA R8,[R10 + RAX*0x1] }
    /* +0xefa2a5 */ __asm { ADD R8,-0xf }
    /* +0xefa2a9 */ __asm { MOV qword ptr [RSP + 0x2a8],R8 }
    /* +0xefa2b1 */ __asm { LEA R8,[RDI + 0xc00] }
    /* +0xefa2b8 */ __asm { MOV qword ptr [RSP + 0x260],R8 }
    /* +0xefa2c0 */ __asm { MOV ECX,dword ptr [R10] }
    /* +0xefa2c3 */ __asm { MOV R9D,ESI }
    /* +0xefa2c6 */ __asm { MOV R11,qword ptr [RSP + 0x1f0] }
    /* +0xefa2ce */ __asm { XOR R9D,R11D }
    /* +0xefa2d1 */ __asm { MOV dword ptr [RSP + 0x2d0],R9D }
    /* +0xefa2d9 */ __asm { OR R11D,0x1 }
    /* +0xefa2dd */ __asm { JMP 0x7fffa566a41a }
    /* +0xefa2e2 */ __asm { SHL EAX,0x2 }
    /* +0xefa2e5 */ __asm { MOV RDX,qword ptr [RSP + 0x260] }
    /* +0xefa2ed */ __asm { LEA R13,[RDX + RAX*0x1] }
    /* +0xefa2f1 */ __asm { MOV R14D,dword ptr [RDI + RAX*0x1 + 0xc00] }
    /* +0xefa2f9 */ __asm { MOV EBX,dword ptr [R10 + 0x4] }
    /* +0xefa2fd */ __asm { INC dword ptr [RDI + R8*0x4] }
    /* +0xefa301 */ __asm { LEA R8,[R10 + 0x10] }
    /* +0xefa305 */ __asm { MOVZX EAX,CH }
    /* +0xefa308 */ __asm { MOV R15D,ECX }
    /* +0xefa30b */ __asm { SHR R15D,0x10 }
    /* +0xefa30f */ __asm { INC R14D }
    /* +0xefa312 */ __asm { MOVZX ECX,BL }
    /* +0xefa315 */ __asm { MOVZX ESI,R15B }
    /* +0xefa319 */ __asm { MOV R15D,dword ptr [RDI + RCX*0x4] }
    /* +0xefa31d */ __asm { MOV EDX,dword ptr [RDI + RSI*0x4 + 0x800] }
    /* +0xefa324 */ __asm { INC dword ptr [RDI + RAX*0x4 + 0x400] }
    /* +0xefa32b */ __asm { MOVZX EBP,BH }
    /* +0xefa32e */ __asm { MOV R9D,dword ptr [RDI + RBP*0x4 + 0x400] }
    /* +0xefa336 */ __asm { MOV dword ptr [R13],R14D }
    /* +0xefa33a */ __asm { INC R9D }
    /* +0xefa33d */ __asm { INC EDX }
    /* +0xefa33f */ __asm { MOV dword ptr [RDI + RSI*0x4 + 0x800],EDX }
    /* +0xefa346 */ __asm { MOV EDX,EBX }
    /* +0xefa348 */ __asm { SHR EDX,0xe }
    /* +0xefa34b */ __asm { AND EDX,0x3fc }
    /* +0xefa351 */ __asm { MOV EAX,dword ptr [R10 + 0x8] }
    /* +0xefa355 */ __asm { INC dword ptr [RDI + RDX*0x1 + 0x800] }
    /* +0xefa35c */ __asm { MOV dword ptr [RDI + RBP*0x4 + 0x400],R9D }
    /* +0xefa364 */ __asm { MOVZX ESI,AL }
    /* +0xefa367 */ __asm { MOVZX EBP,AH }
    /* +0xefa36a */ __asm { MOV R9D,dword ptr [RDI + RBP*0x4 + 0x400] }
    /* +0xefa372 */ __asm { INC R9D }
    /* +0xefa375 */ __asm { MOV EDX,EAX }
    /* +0xefa377 */ __asm { SHR EDX,0xe }
    /* +0xefa37a */ __asm { AND EDX,0x3fc }
    /* +0xefa380 */ __asm { MOV R14D,dword ptr [RDI + RDX*0x1 + 0x800] }
    /* +0xefa388 */ __asm { INC R15D }
    /* +0xefa38b */ __asm { MOV dword ptr [RDI + RCX*0x4],R15D }
    /* +0xefa38f */ __asm { MOV ECX,dword ptr [RDI + RSI*0x4] }
    /* +0xefa392 */ __asm { SHR EBX,0x18 }
    /* +0xefa395 */ __asm { INC dword ptr [RDI + RBX*0x4 + 0xc00] }
    /* +0xefa39c */ __asm { INC R14D }
    /* +0xefa39f */ __asm { INC ECX }
    /* +0xefa3a1 */ __asm { SHR EAX,0x18 }
    /* +0xefa3a4 */ __asm { MOV EBX,dword ptr [R10 + 0xc] }
    /* +0xefa3a8 */ __asm { INC dword ptr [RDI + RAX*0x4 + 0xc00] }
    /* +0xefa3af */ __asm { MOV dword ptr [RDI + RBP*0x4 + 0x400],R9D }
    /* +0xefa3b7 */ __asm { MOV dword ptr [RDI + RDX*0x1 + 0x800],R14D }
    /* +0xefa3bf */ __asm { MOVZX EAX,BL }
    /* +0xefa3c2 */ __asm { MOV dword ptr [RDI + RSI*0x4],ECX }
    /* +0xefa3c5 */ __asm { MOV ECX,dword ptr [R10 + 0x10] }
    /* +0xefa3c9 */ __asm { INC dword ptr [RDI + RAX*0x4] }
    /* +0xefa3cc */ __asm { MOV EAX,EBX }
    /* +0xefa3ce */ __asm { SHR EAX,0xe }
    /* +0xefa3d1 */ __asm { AND EAX,0x3fc }
    /* +0xefa3d6 */ __asm { MOV R9D,dword ptr [RDI + RAX*0x1 + 0x800] }
    /* +0xefa3de */ __asm { MOVZX EDX,BH }
    /* +0xefa3e1 */ __asm { INC dword ptr [RDI + RDX*0x4 + 0x400] }
    /* +0xefa3e8 */ __asm { SHR EBX,0x18 }
    /* +0xefa3eb */ __asm { INC dword ptr [RDI + RBX*0x4 + 0xc00] }
    /* +0xefa3f2 */ __asm { INC R9D }
    /* +0xefa3f5 */ __asm { MOV dword ptr [RDI + RAX*0x1 + 0x800],R9D }
    /* +0xefa3fd */ __asm { LEA RAX,[R8 + 0x4] }
    /* +0xefa401 */ __asm { MOV R10,R8 }
    /* +0xefa404 */ __asm { CMP RAX,qword ptr [RSP + 0x2a8] }
    /* +0xefa40c */ __asm { MOV RSI,qword ptr [RSP + 0x298] }
    /* +0xefa414 */ __asm { JNC 0x7fffa566a522 }
    /* +0xefa41a */ __asm { MOV R8D,0x83157972 }
    /* +0xefa420 */ __asm { MOV R14D,0xf5363a10 }
    /* +0xefa426 */ __asm { IMUL R14D,R11D }
    /* +0xefa42a */ __asm { ROL R14D,0x8 }
    /* +0xefa42e */ __asm { IMUL R14D,dword ptr [RSP + 0x1c4] }
    /* +0xefa437 */ __asm { ADD R14D,0xc0000420 }
    /* +0xefa43e */ __asm { MOV EAX,ECX }
    /* +0xefa440 */ __asm { SHR EAX,0x18 }
    /* +0xefa443 */ __asm { MOV EBX,0x367fed1b }
    /* +0xefa448 */ __asm { SUB EBX,R8D }
    /* +0xefa44b */ __asm { XOR EBX,dword ptr [RSP + 0x2d0] }
    /* +0xefa452 */ __asm { MOVZX R8D,CL }
    /* +0xefa456 */ __asm { MOV R8D,R8D }
    /* +0xefa459 */ __asm { CMP RBX,R14 }
    /* +0xefa45c */ __asm { JGE 0x7fffa566a2e2 }
    /* +0xefa462 */ __asm { MOV EBX,dword ptr [R10 + 0x4] }
    /* +0xefa466 */ __asm { INC dword ptr [RDI + R8*0x4] }
    /* +0xefa46a */ __asm { SHL EAX,0x2 }
    /* +0xefa46d */ __asm { MOV R8,qword ptr [RSP + 0x260] }
    /* +0xefa475 */ __asm { LEA R13,[R8 + RAX*0x1] }
    /* +0xefa479 */ __asm { MOV R14D,dword ptr [RDI + RAX*0x1 + 0xc00] }
    /* +0xefa481 */ __asm { JMP 0x7fffa566a301 }
    /* +0xefa486 */ __asm { MOV R9W,0x1d5d }
    /* +0xefa48b */ __asm { XOR R9D,0x2b1d }
    /* +0xefa492 */ __asm { IMUL R9D,R9D,0x68f9 }
    /* +0xefa499 */ __asm { ADD R9D,dword ptr [RSP + 0x1f0] }
    /* +0xefa4a1 */ __asm { MOVZX R9D,R9W }
    /* +0xefa4a5 */ __asm { MOV ECX,0x1 }
    /* +0xefa4aa */ __asm { CMP R12D,R9D }
    /* +0xefa4ad */ __asm { MOV R8,qword ptr [RSP + 0x218] }
    /* +0xefa4b5 */ __asm { JGE 0x7fffa566a822 }
    /* +0xefa4bb */ __asm { MOV RCX,R8 }
    /* +0xefa4be */ __asm { TEST R12D,R12D }
    /* +0xefa4c1 */ __asm { JZ 0x7fffa566a822 }
    /* +0xefa4c7 */ __asm { XOR ECX,ECX }
    /* +0xefa4c9 */ __asm { JMP 0x7fffa566a822 }
    /* +0xefa4ce */ __asm { XOR ESI,ESI }
    /* +0xefa4d0 */ __asm { MOV R8D,0x400 }
    /* +0xefa4d6 */ __asm { XOR EDX,EDX }
    /* +0xefa4d8 */ __asm { MOV RCX,RDI }
    /* +0xefa4db */ __asm { CALL 0x7fffa4ecf8e0 }
    /* +0xefa4e0 */ __asm { TEST R13,R13 }
    /* +0xefa4e3 */ __asm { JZ 0x7fffa566a6a2 }
    /* +0xefa4e9 */ __asm { MOV R8,qword ptr [RSP + 0x160] }
    /* +0xefa4f1 */ __asm { INC R8 }
    /* +0xefa4f4 */ __asm { MOV RDX,qword ptr [RSP + 0x340] }
    /* +0xefa4fc */ __asm { MOV RSI,qword ptr [RSP + 0x298] }
    /* +0xefa504 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0xefa510 */ __asm { MOVZX EAX,uint8_t ptr [R8 + -0x1] }
    /* +0xefa515 */ __asm { INC dword ptr [RDI + RAX*0x4] }
    /* +0xefa518 */ __asm { CMP R8,RDX }
    /* +0xefa51b */ __asm { JNC 0x7fffa566a576 }
    /* +0xefa51d */ __asm { INC R8 }
    /* +0xefa520 */ __asm { JMP 0x7fffa566a510 }
    /* +0xefa522 */ __asm { MOV RDX,qword ptr [RSP + 0x340] }
    /* +0xefa52a */ __asm { CMP R8,RDX }
    /* +0xefa52d */ __asm { JNC 0x7fffa566a5f4 }
    /* +0xefa533 */ __asm { MOVQ XMM5,RDX }
    /* +0xefa538 */ __asm { MOVQ XMM0,R8 }
    /* +0xefa53d */ __asm { MOVDQA XMM2,XMM5 }
    /* +0xefa541 */ __asm { PSUBQ XMM2,XMM0 }
    /* +0xefa545 */ __asm { MOVQ RAX,XMM2 }
    /* +0xefa54a */ __asm { AND RAX,0x3 }
    /* +0xefa54e */ __asm { JZ 0x7fffa566a5ae }
    /* +0xefa550 */ __asm { INC R8 }
    /* +0xefa553 */ __asm { XOR R11D,R11D }
    /* +0xefa556 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0xefa560 */ __asm { MOVZX R10D,uint8_t ptr [R8 + -0x1] }
    /* +0xefa565 */ __asm { INC dword ptr [RDI + R10*0x4] }
    /* +0xefa569 */ __asm { INC R11 }
    /* +0xefa56c */ __asm { CMP R11,RAX }
    /* +0xefa56f */ __asm { JZ 0x7fffa566a5ae }
    /* +0xefa571 */ __asm { INC R8 }
    /* +0xefa574 */ __asm { JMP 0x7fffa566a560 }
    /* +0xefa576 */ __asm { MOV R9D,0xff }
    /* +0xefa57c */ __asm { NOP dword ptr [RAX] }
    /* +0xefa580 */ __asm { MOV R8D,R9D }
    /* +0xefa583 */ __asm { MOV EAX,R9D }
    /* +0xefa586 */ __asm { LEA R9D,[R8 + -0x1] }
    /* +0xefa58a */ __asm { CMP dword ptr [RDI + RAX*0x4],0x0 }
    /* +0xefa58e */ __asm { JZ 0x7fffa566a580 }
    /* +0xefa590 */ __asm { CMP R8D,0x6 }
    /* +0xefa594 */ __asm { JA 0x7fffa566a6bd }
    /* +0xefa59a */ __asm { NOP }
    /* +0xefa59b */ __asm { MOV RCX,0x0 }
    /* +0xefa5a2 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xefa5a9 */ __asm { JMP 0x7fffa566a6e7 }
    /* +0xefa5ae */ __asm { PSUBQ XMM0,XMM5 }
    /* +0xefa5b2 */ __asm { MOVQ RAX,XMM0 }
    /* +0xefa5b7 */ __asm { CMP RAX,-0x4 }
    /* +0xefa5bb */ __asm { JA 0x7fffa566a5f4 }
    /* +0xefa5bd */ __asm { NOP }
    /* +0xefa5be */ __asm { MOV RCX,0x0 }
    /* +0xefa5c5 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xefa5cc */ __asm { MOVZX EAX,uint8_t ptr [R8] }
    /* +0xefa5d0 */ __asm { INC dword ptr [RDI + RAX*0x4] }
    /* +0xefa5d3 */ __asm { MOVZX EAX,uint8_t ptr [R8 + 0x1] }
    /* +0xefa5d8 */ __asm { INC dword ptr [RDI + RAX*0x4] }
    /* +0xefa5db */ __asm { MOVZX EAX,uint8_t ptr [R8 + 0x2] }
    /* +0xefa5e0 */ __asm { INC dword ptr [RDI + RAX*0x4] }
    /* +0xefa5e3 */ __asm { MOVZX EAX,uint8_t ptr [R8 + 0x3] }
    /* +0xefa5e8 */ __asm { INC dword ptr [RDI + RAX*0x4] }
    /* +0xefa5eb */ __asm { ADD R8,0x4 }
    /* +0xefa5ef */ __asm { CMP R8,RDX }
    /* +0xefa5f2 */ __asm { JC 0x7fffa566a5bd }
    /* +0xefa5f4 */ __asm { XOR EAX,EAX }
    /* +0xefa5f6 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0xefa600 */ __asm { MOVDQU XMM5,xmmword ptr [RDI + RAX*0x4 + 0x400] }
    /* +0xefa609 */ __asm { MOVDQU XMM0,xmmword ptr [RDI + RAX*0x4 + 0x800] }
    /* +0xefa612 */ __asm { MOVDQU XMM2,xmmword ptr [RDI + RAX*0x4 + 0x810] }
    /* +0xefa61b */ __asm { MOVDQU XMM1,xmmword ptr [RDI + RAX*0x4 + 0x410] }
    /* +0xefa624 */ __asm { PADDD XMM1,XMM2 }
    /* +0xefa628 */ __asm { MOVDQU XMM2,xmmword ptr [RDI + RAX*0x4] }
    /* +0xefa62d */ __asm { PADDD XMM2,XMM0 }
    /* +0xefa631 */ __asm { MOVDQU XMM0,xmmword ptr [RDI + RAX*0x4 + 0x10] }
    /* +0xefa637 */ __asm { MOVDQU XMM3,xmmword ptr [RDI + RAX*0x4 + 0xc00] }
    /* +0xefa640 */ __asm { PADDD XMM3,XMM5 }
    /* +0xefa644 */ __asm { PADDD XMM3,XMM2 }
    /* +0xefa648 */ __asm { MOVDQU XMM5,xmmword ptr [RDI + RAX*0x4 + 0xc10] }
    /* +0xefa651 */ __asm { PADDD XMM5,XMM0 }
    /* +0xefa655 */ __asm { PADDD XMM5,XMM1 }
    /* +0xefa659 */ __asm { MOVDQU xmmword ptr [RDI + RAX*0x4 + 0x10],XMM5 }
    /* +0xefa65f */ __asm { MOVDQU xmmword ptr [RDI + RAX*0x4],XMM3 }
    /* +0xefa664 */ __asm { LEA R8,[RAX + 0x8] }
    /* +0xefa668 */ __asm { MOV RAX,R8 }
    /* +0xefa66b */ __asm { CMP R8,0x100 }
    /* +0xefa672 */ __asm { JNZ 0x7fffa566a600 }
    /* +0xefa674 */ __asm { MOV R9D,0xff }
    /* +0xefa67a */ __asm { MOV RBX,qword ptr [RSP + 0x118] }
    /* +0xefa682 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0xefa690 */ __asm { MOV R8D,R9D }
    /* +0xefa693 */ __asm { MOV EAX,R9D }
    /* +0xefa696 */ __asm { LEA R9D,[R8 + -0x1] }
    /* +0xefa69a */ __asm { CMP dword ptr [RDI + RAX*0x4],0x0 }
    /* +0xefa69e */ __asm { JZ 0x7fffa566a690 }
    /* +0xefa6a0 */ __asm { JMP 0x7fffa566a6d9 }
    /* +0xefa6a2 */ __asm { MOV R11D,0x1 }
    /* +0xefa6a8 */ __asm { XOR R8D,R8D }
    /* +0xefa6ab */ __asm { MOV R15,qword ptr [RSP + 0x58] }
    /* +0xefa6b0 */ __asm { MOV R14,qword ptr [RSP + 0x298] }
    /* +0xefa6b8 */ __asm { JMP 0x7fffa566a791 }
    /* +0xefa6bd */ __asm { INC RAX }
    /* +0xefa6c0 */ __asm { AND RAX,-0x8 }
    /* +0xefa6c4 */ __asm { XOR R11D,R11D }
    /* +0xefa6c7 */ __asm { NOP word ptr [RAX + RAX*0x1] }
    /* +0xefa6d0 */ __asm { ADD R11,0x8 }
    /* +0xefa6d4 */ __asm { CMP R11,RAX }
    /* +0xefa6d7 */ __asm { JNZ 0x7fffa566a6d0 }
    /* +0xefa6d9 */ __asm { MOV EAX,0x3 }
    /* +0xefa6de */ __asm { TEST R8D,R8D }
    /* +0xefa6e1 */ __asm { JS 0x7fffa566a80d }
    /* +0xefa6e7 */ __asm { MOV RDX,RSI }
    /* +0xefa6ea */ __asm { LEA R11D,[R8 + 0x1] }
    /* +0xefa6ee */ __asm { CMP R8D,0x3 }
    /* +0xefa6f2 */ __asm { JNC 0x7fffa566a706 }
    /* +0xefa6f4 */ __asm { XOR ESI,ESI }
    /* +0xefa6f6 */ __asm { XOR R8D,R8D }
    /* +0xefa6f9 */ __asm { MOV R15,qword ptr [RSP + 0x58] }
    /* +0xefa6fe */ __asm { MOV R14,RDX }
    /* +0xefa701 */ __asm { JMP 0x7fffa566a791 }
    /* +0xefa706 */ __asm { MOV ESI,R11D }
    /* +0xefa709 */ __asm { AND ESI,0xfffffffc }
    /* +0xefa70c */ __asm { PXOR XMM5,XMM5 }
    /* +0xefa710 */ __asm { XOR EAX,EAX }
    /* +0xefa712 */ __asm { MOVDQA XMM0,xmmword ptr [0x7fffa56b8440] }
    /* +0xefa71a */ __asm { PXOR XMM2,XMM2 }
    /* +0xefa71e */ __asm { MOV R15,qword ptr [RSP + 0x58] }
    /* +0xefa723 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0xefa730 */ __asm { MOVDQU XMM1,xmmword ptr [R15 + RAX*0x8 + 0x8] }
    /* +0xefa737 */ __asm { MOVDQU XMM3,xmmword ptr [R15 + RAX*0x8 + 0x18] }
    /* +0xefa73e */ __asm { PAND XMM1,XMM0 }
    /* +0xefa742 */ __asm { PAND XMM3,XMM0 }
    /* +0xefa746 */ __asm { MOVQ XMM4,qword ptr [RDI + RAX*0x4 + 0x8] }
    /* +0xefa74c */ __asm { PSHUFD XMM4,XMM4,0xd4 }
    /* +0xefa751 */ __asm { PMULUDQ XMM4,XMM3 }
    /* +0xefa755 */ __asm { PADDQ XMM2,XMM4 }
    /* +0xefa759 */ __asm { MOVQ XMM3,qword ptr [RDI + RAX*0x4] }
    /* +0xefa75e */ __asm { PSHUFD XMM3,XMM3,0xd4 }
    /* +0xefa763 */ __asm { PMULUDQ XMM3,XMM1 }
    /* +0xefa767 */ __asm { PADDQ XMM5,XMM3 }
    /* +0xefa76b */ __asm { ADD RAX,0x4 }
    /* +0xefa76f */ __asm { CMP RAX,RSI }
    /* +0xefa772 */ __asm { JNZ 0x7fffa566a730 }
    /* +0xefa774 */ __asm { PADDQ XMM5,XMM2 }
    /* +0xefa778 */ __asm { PSHUFD XMM0,XMM5,0xee }
    /* +0xefa77d */ __asm { PADDQ XMM0,XMM5 }
    /* +0xefa781 */ __asm { MOVQ R8,XMM0 }
}


// ============================================================================
// Function : FUN_7fffa568783c  |  RVA: 0xf1783c  |  Size: 76 bytes
// Callers  : FUN_7fffa5668bc0@0xef8bc0
// Callees  : none
// ============================================================================
int64_t FUN_7fffa568783c(int64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  int64_t lVar2;
  
  lVar2 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    uVar1 = (*(code *)&DAT_7ff84ea18640)();
    *(uint64_t *)(param_2 + 8) = 0;
    *(uint8_t *)(param_2 + 0x10) = 1;
    (*(code *)&DAT_7ff84ea28280)(uVar1);
  }
  else {
    lVar2 = *(int64_t *)(param_2 + 8);
  }
  return param_1 + lVar2 * 8;
}


// ============================================================================
// Function : FUN_7fffa5687890  |  RVA: 0xf17890  |  Size: 482 bytes
// Callers  : FUN_7fffa4e8ea00@0x71ea00
// Callees  : FUN_7fffa55d63a0@0xe663a0, FUN_7fffa56a5f20@0xf35f20, FUN_7fffa5210660@0xaa0660, FUN_7fffa5246e30@0xad6e30, FUN_7fffa524fccc@0xadfccc
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa5687890(int64_t param_1,int64_t *param_2,int64_t param_3,uint8_t *param_4)

{
  int iVar1;
  uint32_t uVar2;
  int64_t lVar3;
  code *pcVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == 0) {
    return 0;
  }
  lVar5 = FUN_7fffa55d63a0();
  if (lVar5 + iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_7fffa55d63a0();
    lVar5 = lVar5 + iVar1;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    return 0;
  }
  if ((*(uint32_t *)(param_3 + 0xc) == 0) && (-1 < *(int *)(param_3 + 4))) {
    return 0;
  }
  uVar2 = *(uint32_t *)(param_3 + 4);
  if (-1 < (int)uVar2) {
    param_2 = (int64_t *)((uint64_t)*(uint32_t *)(param_3 + 0xc) + *param_2);
  }
  if ((((char)uVar2 < '\0') && ((*param_4 & 0x10) != 0)) && (_DAT_7fffa4781c08 != (code *)0x0)) {
    lVar5 = (*_DAT_7fffa4781c08)();
    if ((lVar5 != 0) && (param_2 != (int64_t *)0x0)) {
      *param_2 = lVar5;
      lVar5 = FUN_7fffa5210660(lVar5,param_4 + 8);
      *param_2 = lVar5;
      return 0;
    }
    FUN_7fffa524fccc();
LAB_7fffa5687a56:
    FUN_7fffa524fccc();
LAB_7fffa5687a5b:
    FUN_7fffa524fccc();
  }
  else {
    if ((uVar2 & 8) != 0) {
      lVar5 = *(int64_t *)(param_1 + 0x28);
      if ((lVar5 != 0) && (param_2 != (int64_t *)0x0)) {
        *param_2 = lVar5;
        lVar5 = FUN_7fffa5210660(lVar5,param_4 + 8);
        *param_2 = lVar5;
        return 0;
      }
      goto LAB_7fffa5687a56;
    }
    if ((*param_4 & 1) != 0) {
      if ((*(int64_t *)(param_1 + 0x28) != 0) && (param_2 != (int64_t *)0x0)) {
        FUN_7fffa56a5f20(param_2,*(int64_t *)(param_1 + 0x28),(int64_t)*(int *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 8) {
          return 0;
        }
        if (*param_2 == 0) {
          return 0;
        }
        lVar5 = FUN_7fffa5210660(*param_2,param_4 + 8);
        *param_2 = lVar5;
        return 0;
      }
      goto LAB_7fffa5687a5b;
    }
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_7fffa5246e30();
      lVar5 = lVar5 + iVar1;
    }
    lVar3 = *(int64_t *)(param_1 + 0x28);
    if (lVar5 != 0) {
      if ((((lVar3 != 0) && (param_2 != (int64_t *)0x0)) &&
          (iVar1 = *(int *)(param_4 + 0x18), iVar1 != 0)) &&
         (lVar5 = FUN_7fffa5246e30(), lVar5 + iVar1 != 0)) {
        return (uint64_t)(((*param_4 & 4) != 0) + 1);
      }
      goto LAB_7fffa5687a65;
    }
    if ((lVar3 != 0) && (param_2 != (int64_t *)0x0)) {
      iVar1 = *(int *)(param_4 + 0x14);
      uVar6 = FUN_7fffa5210660(lVar3,param_4 + 8);
      FUN_7fffa56a5f20(param_2,uVar6,(int64_t)iVar1);
      return 0;
    }
  }
  FUN_7fffa524fccc();
LAB_7fffa5687a65:
  FUN_7fffa524fccc();
  FUN_7fffa524fccc();
  pcVar4 = (code *)__debugbreak();
  uVar7 = (*pcVar4)();
  return uVar7;
}


// ============================================================================
// Function : FUN_7fffa5687a80  |  RVA: 0xf17a80  |  Size: 272 bytes
// Callers  : FUN_7fffa548e3e0@0xd1e3e0
// Callees  : none
// ============================================================================
int64_t FUN_7fffa5687a80(uint8_t *param_1,uint8_t *param_2,int64_t param_3,int param_4,char param_5)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  code *pcVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint8_t *pbVar7;
  uint8_t *pbVar8;
  
  bVar1 = *param_1;
  pbVar8 = param_1 + 1;
  *param_2 = bVar1;
  if ((bVar1 & 4) != 0) {
    bVar2 = *pbVar8;
    pbVar8 = pbVar8 + -(int64_t)(char)(&UNK_7fffa56b3150)[bVar2 & 0xf];
    *(uint32_t *)(param_2 + 4) = *(uint32_t *)(pbVar8 + -4) >> ((&UNK_7fffa56b3160)[bVar2 & 0xf] & 0x1f);
  }
  if ((bVar1 & 8) != 0) {
    uVar3 = *(uint32_t *)pbVar8;
    pbVar8 = pbVar8 + 4;
    *(uint32_t *)(param_2 + 8) = uVar3;
  }
  if ((bVar1 & 0x10) != 0) {
    uVar3 = *(uint32_t *)pbVar8;
    pbVar8 = pbVar8 + 4;
    *(uint32_t *)(param_2 + 0xc) = uVar3;
  }
  pbVar7 = pbVar8 + 4;
  if ((param_5 == '\0') && ((bVar1 & 2) != 0)) {
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    if (*(int *)pbVar8 == 0) {
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(7);
    }
    else {
      pbVar8 = (uint8_t *)(*(int *)pbVar8 + param_3);
      uVar5 = *pbVar8 & 0xf;
      pbVar8 = pbVar8 + -(int64_t)(char)(&UNK_7fffa56b3150)[uVar5];
      uVar6 = 0;
      uVar5 = *(uint32_t *)(pbVar8 + -4) >> ((&UNK_7fffa56b3160)[uVar5] & 0x1f);
      if (uVar5 != 0) {
        do {
          if (*(int *)pbVar8 == param_4) {
            *(uint32_t *)(param_2 + 0x10) = *(uint32_t *)(pbVar8 + 4);
            break;
          }
          pbVar8 = pbVar8 + 8;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
    }
  }
  else {
    *(uint32_t *)(param_2 + 0x10) = *(uint32_t *)pbVar8;
  }
  if ((bVar1 & 1) != 0) {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + -(int64_t)(char)(&UNK_7fffa56b3150)[bVar1 & 0xf];
    *(uint32_t *)(param_2 + 0x14) = *(uint32_t *)(pbVar7 + -4) >> ((&UNK_7fffa56b3160)[bVar1 & 0xf] & 0x1f);
  }
  return (int64_t)pbVar7 - (int64_t)param_1;
}


// ============================================================================
// Function : FUN_7fffa5687b90  |  RVA: 0xf17b90  |  Size: 58 bytes
// Callers  : FUN_7fffa55aec50@0xe3ec50, FUN_7fffa5267a20@0xaf7a20
// Callees  : FUN_7fffa54539d0@0xce39d0
// ============================================================================
uint64_t * FUN_7fffa5687b90(uint64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  *param_1 = param_2;
  lVar1 = FUN_7fffa54539d0();
  if (param_1 < *(uint64_t **)(lVar1 + 0x58)) {
    lVar1 = FUN_7fffa54539d0();
    uVar2 = *(uint64_t *)(lVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  lVar1 = FUN_7fffa54539d0();
  *(uint64_t **)(lVar1 + 0x58) = param_1;
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa5687c00  |  RVA: 0xf17c00  |  Size: 46 bytes
// Callers  : FUN_7fffa524fccc@0xadfccc
// Callees  : FUN_7fffa56960b0@0xf260b0
// ============================================================================
void FUN_7fffa5687c00(void)

{
  uint8_t auStackX_8 [8];
  uint32_t auStackX_10 [2];
  uint32_t auStackX_18 [4];
  
  auStackX_10[0] = 3;
  auStackX_18[0] = 3;
  FUN_7fffa56960b0(auStackX_8,auStackX_18,auStackX_8,auStackX_10);
  return;
}


// ============================================================================
// Function : FUN_7fffa5687c30  |  RVA: 0xf17c30  |  Size: 72 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5687c30(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint16_t in_R11W;
  
  (*(code *)&DAT_7ff84ea23e50)
            (*(uint64_t *)
              (*(int64_t *)
                ((uint64_t)(uint16_t)((in_R11W ^ 0xc169) << 3 | (in_R11W ^ 0xc169) >> 0xd) +
                0xff00000000) + 0x30),0,param_3 ^ param_3 >> 0x3d);
  return;
}


// ============================================================================
// Function : Unwind@7fffa5687c80  |  RVA: 0xf17c80  |  Size: 51 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5687c80(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)((-0x631ae9fe - *(int *)(param_2 + 0x20)) * 0x2212399f + -0x1a150ecb) +
            0x7fffa562e028))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5687cc0  |  RVA: 0xf17cc0  |  Size: 149 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5687da8) */

uint64_t FUN_7fffa5687cc0(uint64_t param_1,uint64_t param_2,short param_3)

{
  uint8_t bVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = param_2 << 7 | param_2 >> 0x39;
  bVar1 = (uint8_t)param_3 & 0x1f;
  uVar4 = 0xfffeb8bdU >> bVar1 | -0x14743 << 0x20 - bVar1;
  lVar3 = (int64_t)(int)(uVar4 << 7 | uVar4 >> 0x19);
  uVar2 = *(uint64_t *)(lVar3 + 0x7fffa47c66fa);
  *(uint64_t *)(uVar5 + 0x2b82ceb) = *(uint64_t *)(lVar3 + 0x7fffa47c66f2);
  *(uint64_t *)(uVar5 + 0x2b82cf3) = uVar2;
  uVar2 = s__AMD_Ryzen_5_5500_7fffa47bc34f._25_8_;
  *(uint64_t *)(uVar5 + 0x2b82cfb) = s__AMD_Ryzen_5_5500_7fffa47bc34f._17_8_;
  *(uint64_t *)(uVar5 + 0x2b82d03) = uVar2;
  uVar2 = *(uint64_t *)(&DAT_7fffa47bfa98 + (short)(param_3 + 0xab8));
  *(uint64_t *)(uVar5 + 0x2b82d0b) =
       *(uint64_t *)((int64_t)(short)(param_3 + 0xab8) + 0x7fffa47bfa90);
  *(uint64_t *)(uVar5 + 0x2b82d13) = uVar2;
  return 0xcfbbbfcc92a2f7bb;
}


// ============================================================================
// Function : FUN_7fffa5687db0  |  RVA: 0xf17db0  |  Size: 48308 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5687db0(void) {
    /* +0xf17db0 */ __asm { PUSH RBP }
    /* +0xf17db1 */ __asm { PUSH R15 }
    /* +0xf17db3 */ __asm { PUSH RDI }
    /* +0xf17db4 */ __asm { PUSH R13 }
    /* +0xf17db6 */ __asm { PUSH RSI }
    /* +0xf17db7 */ __asm { PUSH R12 }
    /* +0xf17db9 */ __asm { PUSH RBX }
    /* +0xf17dba */ __asm { PUSH R14 }
    /* +0xf17dbc */ __asm { SUB RSP,0x358 }
    /* +0xf17dc3 */ __asm { MOVAPS xmmword ptr [RSP + 0x340],XMM7 }
    /* +0xf17dcb */ __asm { MOVAPS xmmword ptr [RSP + 0x330],XMM13 }
    /* +0xf17dd4 */ __asm { MOV RBX,RDX }
    /* +0xf17dd7 */ __asm { MOV RAX,RCX }
    /* +0xf17dda */ __asm { MOV R15,RAX }
    /* +0xf17ddd */ __asm { NOT R15 }
    /* +0xf17de0 */ __asm { MOV R14,R15 }
    /* +0xf17de3 */ __asm { OR R14,RBX }
    /* +0xf17de6 */ __asm { IMUL R9,R14,-0x737e0448 }
    /* +0xf17ded */ __asm { MOV RBP,RBX }
    /* +0xf17df0 */ __asm { XOR RBP,RAX }
    /* +0xf17df3 */ __asm { MOV R8,-0xcb128e28 }
    /* +0xf17dfd */ __asm { IMUL R8,RBP }
    /* +0xf17e01 */ __asm { MOV R13D,0xf8362443 }
    /* +0xf17e07 */ __asm { IMUL R13,RBP }
    /* +0xf17e0b */ __asm { ADD R13,R9 }
    /* +0xf17e0e */ __asm { MOV RSI,R15 }
    /* +0xf17e11 */ __asm { AND RSI,RBX }
    /* +0xf17e14 */ __asm { IMUL R9,RSI,0x737e0448 }
    /* +0xf17e1b */ __asm { MOV R10D,0x4f48af5a }
    /* +0xf17e21 */ __asm { IMUL R10D,R10D,0x7d387f3 }
    /* +0xf17e28 */ __asm { NOT R10D }
    /* +0xf17e2b */ __asm { MOV RDI,RBX }
    /* +0xf17e2e */ __asm { XOR RDI,R15 }
    /* +0xf17e31 */ __asm { MOV R12D,0xa0a19a63 }
    /* +0xf17e37 */ __asm { IMUL R12,RDI }
    /* +0xf17e3b */ __asm { ADD R12,R8 }
    /* +0xf17e3e */ __asm { ADD R12,R9 }
    /* +0xf17e41 */ __asm { ADD R12,R13 }
    /* +0xf17e44 */ __asm { ADD R10D,R12D }
    /* +0xf17e47 */ __asm { MOV dword ptr [RSP + 0x50],R10D }
    /* +0xf17e4c */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xf17e51 */ __asm { TEST RCX,RCX }
    /* +0xf17e54 */ __asm { JZ 0x7fffa5688094 }
    /* +0xf17e5a */ __asm { MOV RDX,0x0 }
    /* +0xf17e61 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xf17e68 */ __asm { NOP }
    /* +0xf17e69 */ __asm { CMP qword ptr [RCX],0x0 }
    /* +0xf17e6d */ __asm { JZ 0x7fffa5688094 }
    /* +0xf17e73 */ __asm { MOV dword ptr [RSP + 0x50],0x729d07b0 }
    /* +0xf17e7b */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xf17e80 */ __asm { CMP R10D,0x30eb17f }
    /* +0xf17e87 */ __asm { NOP }
    /* +0xf17e88 */ __asm { NOP }
    /* +0xf17e89 */ __asm { NOP }
    /* +0xf17e8a */ __asm { NOP }
    /* +0xf17e8b */ __asm { NOP }
    /* +0xf17e8c */ __asm { MOV R10W,0x789a }
    /* +0xf17e91 */ __asm { XOR R10D,0x12df }
    /* +0xf17e98 */ __asm { SUB R10D,R12D }
    /* +0xf17e9b */ __asm { MOVZX R11D,R10W }
    /* +0xf17e9f */ __asm { MOV R9,qword ptr GS:[R11] }
    /* +0xf17ea3 */ __asm { MOV R8,-0x24ffef6a97a73e91 }
    /* +0xf17ead */ __asm { CMP qword ptr [R9 + 0x18],R8 }
    /* +0xf17eb1 */ __asm { NOP }
    /* +0xf17eb2 */ __asm { NOP }
    /* +0xf17eb3 */ __asm { NOP }
    /* +0xf17eb4 */ __asm { NOP }
    /* +0xf17eb5 */ __asm { NOP }
    /* +0xf17eb6 */ __asm { MOV R10D,0x986f29ac }
    /* +0xf17ebc */ __asm { XOR R10D,0x2b26f4e4 }
    /* +0xf17ec3 */ __asm { SUB R10D,R12D }
    /* +0xf17ec6 */ __asm { MOV R9,qword ptr [RCX] }
    /* +0xf17ec9 */ __asm { CMP dword ptr [R9],R10D }
    /* +0xf17ecc */ __asm { JNZ 0x7fffa5687eeb }
    /* +0xf17ece */ __asm { MOV R10W,0x239b }
    /* +0xf17ed3 */ __asm { XOR R10D,R12D }
    /* +0xf17ed6 */ __asm { ADD R10D,0xffffb585 }
    /* +0xf17edd */ __asm { MOVZX R10D,R10W }
    /* +0xf17ee1 */ __asm { CMP dword ptr [R9 + 0x18],R10D }
    /* +0xf17ee5 */ __asm { JA 0x7fffa5688179 }
    /* +0xf17eeb */ __asm { MOV R10W,0x19a9 }
    /* +0xf17ef0 */ __asm { XOR R10D,0x19dc }
    /* +0xf17ef7 */ __asm { ADD R10D,-0x15 }
    /* +0xf17efb */ __asm { MOVZX R11D,R10W }
    /* +0xf17eff */ __asm { MOV R9,qword ptr GS:[R11] }
    /* +0xf17f03 */ __asm { MOV R8,-0x4b7a91fd }
    /* +0xf17f0a */ __asm { ADD R8,qword ptr [R9 + 0x18] }
    /* +0xf17f0e */ __asm { MOV R11,-0x756a8d840aa9e512 }
    /* +0xf17f18 */ __asm { CMP R8,R11 }
    /* +0xf17f1b */ __asm { NOP }
    /* +0xf17f1c */ __asm { NOP }
    /* +0xf17f1d */ __asm { NOP }
    /* +0xf17f1e */ __asm { NOP }
    /* +0xf17f1f */ __asm { NOP }
    /* +0xf17f20 */ __asm { MOV R10D,0x2e779382 }
    /* +0xf17f26 */ __asm { SUB R10D,R12D }
    /* +0xf17f29 */ __asm { IMUL R10D,R10D,-0x3fffff6b }
    /* +0xf17f30 */ __asm { MOV R8,qword ptr [RCX] }
    /* +0xf17f33 */ __asm { ADD R10D,0xdb529e31 }
    /* +0xf17f3a */ __asm { CMP dword ptr [R8],R10D }
    /* +0xf17f3d */ __asm { JNZ 0x7fffa5687f4a }
    /* +0xf17f3f */ __asm { CMP dword ptr [R8 + 0x18],0x0 }
    /* +0xf17f44 */ __asm { JNZ 0x7fffa56884cb }
    /* +0xf17f4a */ __asm { MOV R9,RCX }
    /* +0xf17f4d */ __asm { MOV R10W,0xdc98 }
    /* +0xf17f52 */ __asm { ADD R10D,0x69bb }
    /* +0xf17f59 */ __asm { XOR R10D,0x2c16 }
    /* +0xf17f60 */ __asm { SUB R10D,R12D }
    /* +0xf17f63 */ __asm { MOVZX R11D,R10W }
    /* +0xf17f67 */ __asm { MOV R8,qword ptr GS:[R11] }
    /* +0xf17f6b */ __asm { MOV R10D,0x8f3999c7 }
    /* +0xf17f71 */ __asm { IMUL EDX,R10D,0x61058f93 }
    /* +0xf17f78 */ __asm { SUB EDX,R12D }
    /* +0xf17f7b */ __asm { MOV R11,-0xc07c6218 }
    /* +0xf17f85 */ __asm { ADD R11,qword ptr [R8 + RDX*0x1] }
    /* +0xf17f89 */ __asm { XOR R11,0x108eb37d }
    /* +0xf17f90 */ __asm { MOV R8,0x1000000082f }
    /* +0xf17f9a */ __asm { ADD R8,R11 }
    /* +0xf17f9d */ __asm { MOV R11,0x22e13a60db969e7f }
    /* +0xf17fa7 */ __asm { CMP R8,R11 }
    /* +0xf17faa */ __asm { NOP }
    /* +0xf17fab */ __asm { NOP }
    /* +0xf17fac */ __asm { NOP }
    /* +0xf17fad */ __asm { NOP }
    /* +0xf17fae */ __asm { NOP }
    /* +0xf17faf */ __asm { NOP }
    /* +0xf17fb0 */ __asm { NOP }
    /* +0xf17fb1 */ __asm { NOP }
    /* +0xf17fb2 */ __asm { NOP }
    /* +0xf17fb3 */ __asm { NOP }
    /* +0xf17fb4 */ __asm { NOP }
    /* +0xf17fb5 */ __asm { NOP }
    /* +0xf17fb6 */ __asm { NOP }
    /* +0xf17fb7 */ __asm { NOP }
    /* +0xf17fb8 */ __asm { NOP }
    /* +0xf17fb9 */ __asm { NOP }
    /* +0xf17fba */ __asm { NOP }
    /* +0xf18094 */ __asm { MOV R10W,0xfde2 }
    /* +0xf18099 */ __asm { XOR R10D,0xffff8c0e }
    /* +0xf180a0 */ __asm { SUB R10D,R12D }
    /* +0xf180a3 */ __asm { ADD R10D,0xfffff859 }
    /* +0xf180aa */ __asm { MOVZX R11D,R10W }
    /* +0xf180ae */ __asm { MOV R9,qword ptr GS:[R11] }
    /* +0xf180b2 */ __asm { MOV R9,qword ptr [R9 + 0x30] }
    /* +0xf180b6 */ __asm { MOV RDX,0x76866bbe051b11e5 }
    /* +0xf180c0 */ __asm { XOR RDX,R9 }
    /* +0xf180c3 */ __asm { XOR EAX,EAX }
    /* +0xf180c5 */ __asm { MOV R9,-0xc1186993c7d23bd }
    /* +0xf180cf */ __asm { CMP RDX,R9 }
    /* +0xf180d2 */ __asm { JZ 0x7fffa56880f9 }
    /* +0xf180d4 */ __asm { MOVAPS XMM13,xmmword ptr [RSP + 0x330] }
    /* +0xf180dd */ __asm { MOVAPS XMM7,xmmword ptr [RSP + 0x340] }
    /* +0xf180e5 */ __asm { ADD RSP,0x358 }
    /* +0xf180ec */ __asm { POP R14 }
    /* +0xf180ee */ __asm { POP RBX }
    /* +0xf180ef */ __asm { POP R12 }
    /* +0xf180f1 */ __asm { POP RSI }
    /* +0xf180f2 */ __asm { POP R13 }
    /* +0xf180f4 */ __asm { POP RDI }
    /* +0xf180f5 */ __asm { POP R15 }
    /* +0xf180f7 */ __asm { POP RBP }
    /* +0xf180f8 */ __asm { RET }
    /* +0xf180f9 */ __asm { MOV AH,0xc2 }
    /* +0xf180fb */ __asm { CDQ }
    /* +0xf180fc */ __asm { JMP 0x7fffa56880d4 }
    /* +0xf18179 */ __asm { MOV qword ptr [RSP + 0x1b0],RCX }
    /* +0xf18181 */ __asm { PUSHFQ }
    /* +0xf18182 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xf1818a */ __asm { POPFQ }
    /* +0xf1818b */ __asm { MOV dword ptr [RSP + 0x50],0xbfdf3dbb }
    /* +0xf18193 */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xf18198 */ __asm { MOV EDX,0x6f0aeec5 }
    /* +0xf1819d */ __asm { ADD EDX,0xf28a0a26 }
    /* +0xf181a3 */ __asm { MOV ECX,R12D }
    /* +0xf181a6 */ __asm { ROL EDX,CL }
    /* +0xf181a8 */ __asm { CMP R10D,EDX }
    /* +0xf181ab */ __asm { NOP }
    /* +0xf181ac */ __asm { NOP }
    /* +0xf181ad */ __asm { NOP }
    /* +0xf181ae */ __asm { NOP }
    /* +0xf181af */ __asm { NOP }
    /* +0xf181b0 */ __asm { MOV RCX,qword ptr [RSP + 0x1b0] }
    /* +0xf181b8 */ __asm { MOV R9,qword ptr [RCX] }
    /* +0xf181bb */ __asm { MOV R9,qword ptr [R9 + 0x38] }
    /* +0xf181bf */ __asm { MOV qword ptr [RSP + 0xc0],R9 }
    /* +0xf181c7 */ __asm { TEST R9,R9 }
    /* +0xf181ca */ __asm { JZ 0x7fffa5687eeb }
    /* +0xf181d0 */ __asm { MOV qword ptr [RSP + 0xe0],RAX }
    /* +0xf181d8 */ __asm { MOV R10D,0xa82bc23f }
    /* +0xf181de */ __asm { ADD R10D,R12D }
    /* +0xf181e1 */ __asm { IMUL R10D,R10D,0x3a0063fb }
    /* +0xf181e8 */ __asm { MOV dword ptr [RSP + 0x50],R10D }
    /* +0xf181ed */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xf181f2 */ __asm { CMP R10D,0x4179cb0e }
    /* +0xf181f9 */ __asm { JBE 0x7fffa5695d87 }
    /* +0xf181ff */ __asm { MOV R10D,R12D }
    /* +0xf18202 */ __asm { OR R10D,0x1 }
    /* +0xf18206 */ __asm { MOV dword ptr [RSP + 0xcc],R10D }
    /* +0xf1820e */ __asm { MOV R11D,0x32d6bc6b }
    /* +0xf18214 */ __asm { MOV R10D,0x6e0d11de }
    /* +0xf1821a */ __asm { XOR R11D,R12D }
    /* +0xf1821d */ __asm { MOV ECX,R12D }
    /* +0xf18220 */ __asm { OR ECX,0x1 }
    /* +0xf18223 */ __asm { PXOR XMM1,XMM1 }
    /* +0xf18227 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM1 }
    /* +0xf1822d */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM1 }
    /* +0xf18233 */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM1 }
    /* +0xf18239 */ __asm { RDTSC }
    /* +0xf1823b */ __asm { SHL RDX,0x20 }
    /* +0xf1823f */ __asm { OR RDX,RAX }
    /* +0xf18242 */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xf1824c */ __asm { MOV R8,RDX }
    /* +0xf1824f */ __asm { IMUL R8,R9 }
    /* +0xf18253 */ __asm { ADD RDX,R9 }
    /* +0xf18256 */ __asm { MOV dword ptr [RSP + 0x2e0],ECX }
    /* +0xf1825d */ __asm { IMUL R10D,ECX }
    /* +0xf18261 */ __asm { XOR R10D,0xa3e05a11 }
    /* +0xf18268 */ __asm { MOVSXD R9,R10D }
    /* +0xf1826b */ __asm { ADD R11D,0x718f59e }
    /* +0xf18272 */ __asm { CMP R11,R9 }
    /* +0xf18275 */ __asm { CMOVG RDX,R8 }
    /* +0xf18279 */ __asm { MOV R11,-0x22b18422c4a9c65e }
    /* +0xf18283 */ __asm { ADD R11,RDX }
    /* +0xf18286 */ __asm { MOV R10,R11 }
    /* +0xf18289 */ __asm { SHR R10,0x2d }
    /* +0xf1828d */ __asm { MOV RCX,R11 }
    /* +0xf18290 */ __asm { SHR RCX,0x3b }
    /* +0xf18294 */ __asm { SHR R11,0x1b }
    /* +0xf18298 */ __asm { XOR R11D,R10D }
    /* +0xf1829b */ __asm { ROR R11D,CL }
    /* +0xf1829e */ __asm { AND R11D,0x3 }
    /* +0xf182a2 */ __asm { MOV R10W,0xe515 }
    /* +0xf182a7 */ __asm { IMUL R10D,dword ptr [RSP + 0xcc] }
    /* +0xf182b0 */ __asm { XOR R10D,0x88cb }
    /* +0xf182b7 */ __asm { MOVZX R10D,R10W }
    /* +0xf182bb */ __asm { CMP R11D,R10D }
    /* +0xf182be */ __asm { JNC 0x7fffa56894cc }
    /* +0xf182c4 */ __asm { CMP R11D,0x1 }
    /* +0xf182c8 */ __asm { JNZ 0x7fffa568a47a }
    /* +0xf182ce */ __asm { MOV EDX,0x65119e5a }
    /* +0xf182d3 */ __asm { MOV R9,-0x16294a5532ff4bed }
    /* +0xf182dd */ __asm { CMP RDX,R9 }
    /* +0xf182e0 */ __asm { JZ 0x7fffa5695da6 }
    /* +0xf182e6 */ __asm { MOV R9,qword ptr [RDX + 0x1aec61ae] }
    /* +0xf182ed */ __asm { MOV R8,0x4a5d22de514cd071 }
    /* +0xf182f7 */ __asm { MOV RAX,R9 }
    /* +0xf182fa */ __asm { MUL R8 }
    /* +0xf182fd */ __asm { MOV R8,RDX }
    /* +0xf18300 */ __asm { MOV R11D,0x147216b }
    /* +0xf18306 */ __asm { MOV RAX,R9 }
    /* +0xf18309 */ __asm { MUL R11 }
    /* +0xf1830c */ __asm { ADD RAX,R8 }
    /* +0xf1830f */ __asm { ADC RDX,0x0 }
    /* +0xf18313 */ __asm { TEST DL,0x1 }
    /* +0xf18316 */ __asm { JZ 0x7fffa5691eaa }
    /* +0xf1831c */ __asm { MOV R10D,0x2954c5dc }
    /* +0xf18322 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM1 }
    /* +0xf1832b */ __asm { ADD R10D,0x7ce62fb5 }
    /* +0xf18332 */ __asm { MOV ECX,R12D }
    /* +0xf18335 */ __asm { ROL R10D,CL }
    /* +0xf18338 */ __asm { ADD R10D,0xd16b56e5 }
    /* +0xf1833f */ __asm { MOV dword ptr [RSP + 0x1c0],R10D }
    /* +0xf18347 */ __asm { MOV R10D,dword ptr [RSP + 0x1c0] }
    /* +0xf1834f */ __asm { TEST R10B,0x1 }
    /* +0xf18353 */ __asm { NOP }
    /* +0xf18354 */ __asm { NOP }
    /* +0xf18355 */ __asm { NOP }
    /* +0xf18356 */ __asm { NOP }
    /* +0xf18357 */ __asm { NOP }
    /* +0xf18358 */ __asm { NOP }
    /* +0xf18359 */ __asm { NOP }
    /* +0xf1835a */ __asm { NOP }
    /* +0xf1835b */ __asm { NOP }
    /* +0xf1835c */ __asm { NOP }
    /* +0xf1835d */ __asm { MOV dword ptr [RSP + 0x90],0x0 }
    /* +0xf18368 */ __asm { MOV dword ptr [RSP + 0x1c0],0xee3a1ad6 }
    /* +0xf18373 */ __asm { MOV R10D,dword ptr [RSP + 0x1c0] }
    /* +0xf1837b */ __asm { TEST R10D,R10D }
    /* +0xf1837e */ __asm { NOP }
    /* +0xf1837f */ __asm { NOP }
    /* +0xf18380 */ __asm { NOP }
    /* +0xf18381 */ __asm { NOP }
    /* +0xf18382 */ __asm { NOP }
    /* +0xf18383 */ __asm { NOP }
    /* +0xf18384 */ __asm { NOP }
    /* +0xf18385 */ __asm { NOP }
    /* +0xf18386 */ __asm { NOP }
    /* +0xf18387 */ __asm { NOP }
    /* +0xf18388 */ __asm { NOP }
    /* +0xf18389 */ __asm { NOP }
    /* +0xf1838a */ __asm { NOP }
    /* +0xf1838b */ __asm { NOP }
    /* +0xf1838c */ __asm { NOP }
    /* +0xf1838d */ __asm { NOP }
    /* +0xf1838e */ __asm { NOP }
    /* +0xf184cb */ __asm { MOV R14,RAX }
    /* +0xf184ce */ __asm { MOV dword ptr [RSP + 0x50],0xaabb6d7 }
    /* +0xf184d6 */ __asm { MOV R10D,dword ptr [RSP + 0x50] }
    /* +0xf184db */ __asm { MOV EDX,0x5d904f22 }
    /* +0xf184e0 */ __asm { IMUL EDX,EDX,-0x4cb3f67f }
    /* +0xf184e6 */ __asm { ROL EDX,0x16 }
    /* +0xf184e9 */ __asm { XOR EDX,R12D }
    /* +0xf184ec */ __asm { CMP R10D,EDX }
    /* +0xf184ef */ __asm { JNC 0x7fffa5695d76 }
    /* +0xf184f5 */ __asm { LEA RBP,[0x7fffa47c0431] }
    /* +0xf184fc */ __asm { MOV R8,qword ptr [RCX] }
    /* +0xf184ff */ __asm { MOV RAX,qword ptr [R8 + 0x20] }
    /* +0xf18503 */ __asm { MOV R11D,0xb25321fc }
    /* +0xf18509 */ __asm { MOV RDX,RBP }
    /* +0xf1850c */ __asm { ROL RDX,0x37 }
    /* +0xf18510 */ __asm { MOV R8,0xb4e937afe87d277 }
    /* +0xf1851a */ __asm { IMUL R8,RDX }
    /* +0xf1851e */ __asm { IMUL R10,R8,-0x59ac7524 }
    /* +0xf18525 */ __asm { XOR R11D,0xa0b613ff }
    /* +0xf1852c */ __asm { ADD R8,0x59ac7524 }
    /* +0xf18533 */ __asm { ADD R11D,0xd521bb65 }
    /* +0xf1853a */ __asm { MOV ECX,0xeaca0116 }
    /* +0xf1853f */ __asm { CMP R11,RCX }
    /* +0xf18542 */ __asm { CMOVZ R8,R10 }
    /* +0xf18546 */ __asm { NOT R8 }
    /* +0xf18549 */ __asm { MOV R11,0x616d791c2405e0cb }
    /* +0xf18553 */ __asm { IMUL R11,R8 }
    /* +0xf18557 */ __asm { MOV R8,-0x74ffdf0303a8ad7e }
    /* +0xf18561 */ __asm { MOV qword ptr [RSP + 0x100],R11 }
    /* +0xf18569 */ __asm { CMP R11,R8 }
    /* +0xf1856c */ __asm { NOP }
    /* +0xf1856d */ __asm { NOP }
    /* +0xf1856e */ __asm { NOP }
    /* +0xf1856f */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xf18576 */ __asm { MOV RDX,0x0 }
    /* +0xf1857d */ __asm { NOP }
    /* +0xf1857e */ __asm { MOV qword ptr [RSP + 0x148],RBP }
    /* +0xf18586 */ __asm { MOV R11D,dword ptr [RBP + -0x44f1] }
    /* +0xf1858d */ __asm { MOV R8,-0x30ebf64fafbc6efb }
    /* +0xf18597 */ __asm { IMUL R8,R11 }
    /* +0xf1859b */ __asm { MOV R11,-0xbf873a79f8898c6 }
    /* +0xf185a5 */ __asm { ADD R11,R8 }
    /* +0xf185a8 */ __asm { MOV RCX,R11 }
    /* +0xf185ab */ __asm { SHR RCX,0x3b }
    /* +0xf185af */ __asm { MOV R10,R11 }
    /* +0xf185b2 */ __asm { SHR R10,0x2d }
    /* +0xf185b6 */ __asm { SHR R11,0x1b }
    /* +0xf185ba */ __asm { XOR R11D,R10D }
    /* +0xf185bd */ __asm { ROR R11D,CL }
    /* +0xf185c0 */ __asm { AND R11D,0x7 }
    /* +0xf185c4 */ __asm { CMP R11D,0x4 }
    /* +0xf185c8 */ __asm { JC 0x7fffa5688c41 }
    /* +0xf185ce */ __asm { CMP R11D,0x6 }
    /* +0xf185d2 */ __asm { JNC 0x7fffa5689695 }
    /* +0xf185d8 */ __asm { CMP R11D,0x5 }
    /* +0xf185dc */ __asm { JZ 0x7fffa568a866 }
    /* +0xf185e2 */ __asm { LEA RBX,[0x7fffa4788500] }
    /* +0xf185e9 */ __asm { MOV R8,RAX }
    /* +0xf185ec */ __asm { SHR R8,0xf }
    /* +0xf185f0 */ __asm { XOR R8,RAX }
    /* +0xf185f3 */ __asm { BSWAP R8 }
    /* +0xf185f6 */ __asm { MOV R11,R8 }
    /* +0xf185f9 */ __asm { SHR R11,0x3 }
    /* +0xf185fd */ __asm { XOR R11,R8 }
    /* +0xf18600 */ __asm { MOV R8,R11 }
    /* +0xf18603 */ __asm { SHR R8,0x4 }
    /* +0xf18607 */ __asm { MOV RAX,0xf0f0f0f0f0f0f0f }
    /* +0xf18611 */ __asm { AND R8,RAX }
    /* +0xf18614 */ __asm { AND R11,RAX }
    /* +0xf18617 */ __asm { SHL R11,0x4 }
    /* +0xf1861b */ __asm { OR R11,R8 }
    /* +0xf1861e */ __asm { MOV R8,0x3333333333333333 }
    /* +0xf18628 */ __asm { MOV RDX,R11 }
    /* +0xf1862b */ __asm { AND RDX,R8 }
    /* +0xf1862e */ __asm { SHR R11,0x2 }
    /* +0xf18632 */ __asm { AND R11,R8 }
    /* +0xf18635 */ __asm { LEA R8,[R11 + RDX*0x4] }
    /* +0xf18639 */ __asm { MOV RCX,0x5555555555555555 }
    /* +0xf18643 */ __asm { MOV RDX,R8 }
    /* +0xf18646 */ __asm { AND RDX,RCX }
    /* +0xf18649 */ __asm { SHR R8,0x1 }
    /* +0xf1864c */ __asm { AND R8,RCX }
    /* +0xf1864f */ __asm { LEA R10,[R8 + RDX*0x2] }
    /* +0xf18653 */ __asm { ROL R10,0x3d }
    /* +0xf18657 */ __asm { MOV R8,-0x1a2e7eef3a1ede94 }
    /* +0xf18661 */ __asm { CMP RBX,R8 }
    /* +0xf18664 */ __asm { NOP }
    /* +0xf18665 */ __asm { NOP }
    /* +0xf18666 */ __asm { NOP }
    /* +0xf18667 */ __asm { NOP }
    /* +0xf18668 */ __asm { NOP }
    /* +0xf18669 */ __asm { NOP }
    /* +0xf1866a */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xf18671 */ __asm { MOV RDX,0x0 }
    /* +0xf18678 */ __asm { LEA RDX,[0x7fffa5867497] }
    /* +0xf1867f */ __asm { MOV R15,-0x2bb6211bbf69c228 }
    /* +0xf18689 */ __asm { MOV R11D,0xb133912b }
    /* +0xf1868f */ __asm { MOV R13,0x5f4359fa248dd06f }
    /* +0xf18699 */ __asm { MOV R8D,0x81a738d7 }
    /* +0xf1869f */ __asm { MOV EAX,0x6d8d64b7 }
    /* +0xf186a4 */ __asm { MOV EBP,0x603ada3c }
    /* +0xf186a9 */ __asm { MOV R14,-0x13922190d7b38cf0 }
    /* +0xf186b3 */ __asm { LEA RDI,[0x7fffa586ae7b] }
    /* +0xf186ba */ __asm { SUB R10,qword ptr [RBX + -0x77d8] }
    /* +0xf186c1 */ __asm { MOV RBX,R10 }
    /* +0xf186c4 */ __asm { ROL RBX,0x1b }
    /* +0xf186c8 */ __asm { MOV RSI,R10 }
    /* +0xf186cb */ __asm { ROL RSI,0xf }
    /* +0xf186cf */ __asm { XOR RSI,RBX }
    /* +0xf186d2 */ __asm { SUB R8D,R12D }
    /* +0xf186d5 */ __asm { XOR R13,0x65d310dd }
    /* +0xf186dc */ __asm { ADD R13,R12 }
    /* +0xf186df */ __asm { XOR EAX,R12D }
    /* +0xf186e2 */ __asm { ROL EAX,0x4 }
    /* +0xf186e5 */ __asm { IMUL EAX,EAX,0x61d81727 }
    /* +0xf186eb */ __asm { CDQE }
    /* +0xf186ed */ __asm { XOR RSI,R10 }
    /* +0xf186f0 */ __asm { LEA R10,[RSI*0x8] }
    /* +0xf186f8 */ __asm { SUB RSI,R10 }
    /* +0xf186fb */ __asm { MOV R10,0x583d4c35c0c6377a }
    /* +0xf18705 */ __asm { ADD R10,RSI }
    /* +0xf18708 */ __asm { MOV RSI,R10 }
    /* +0xf1870b */ __asm { ROL RSI,0x17 }
    /* +0xf1870f */ __asm { ADD RDI,RAX }
    /* +0xf18712 */ __asm { MOV RAX,R10 }
    /* +0xf18715 */ __asm { ROL RAX,0x1f }
    /* +0xf18719 */ __asm { XOR RAX,RSI }
    /* +0xf1871c */ __asm { XOR RAX,R10 }
    /* +0xf1871f */ __asm { MOV R10,RAX }
    /* +0xf18722 */ __asm { SHL R10,0x1f }
    /* +0xf18726 */ __asm { SUB RAX,R10 }
    /* +0xf18729 */ __asm { XOR R14,R12 }
    /* +0xf1872c */ __asm { ROL R14,0x10 }
    /* +0xf18730 */ __asm { XOR R14,RAX }
    /* +0xf18733 */ __asm { LEA R10D,[R12 + RBP*0x1] }
    /* +0xf18737 */ __asm { ADD R10D,0x4ce8bbe0 }
    /* +0xf1873e */ __asm { IMUL R10,R14 }
    /* +0xf18742 */ __asm { NOT R10 }
    /* +0xf18745 */ __asm { BSWAP R10 }
    /* +0xf18748 */ __asm { ADD R10,RDI }
    /* +0xf1874b */ __asm { MOV RAX,-0x4e1fa6d0c9f54f4d }
    /* +0xf18755 */ __asm { IMUL RAX,R10 }
    /* +0xf18759 */ __asm { MOV R10,RAX }
    /* +0xf1875c */ __asm { SHR R10,0x1b }
    /* +0xf18760 */ __asm { XOR R10,RAX }
    /* +0xf18763 */ __asm { BSWAP R10 }
    /* +0xf18766 */ __asm { MOV RAX,R10 }
    /* +0xf18769 */ __asm { SHR RAX,0x4 }
    /* +0xf1876d */ __asm { MOV RSI,0xf0f0f0f0f0f0f0f }
    /* +0xf18777 */ __asm { AND RAX,RSI }
    /* +0xf1877a */ __asm { AND R10,RSI }
    /* +0xf1877d */ __asm { SHL R10,0x4 }
    /* +0xf18781 */ __asm { OR R10,RAX }
    /* +0xf18784 */ __asm { MOV RAX,R10 }
    /* +0xf18787 */ __asm { MOV RSI,0x3333333333333333 }
    /* +0xf18791 */ __asm { AND RAX,RSI }
    /* +0xf18794 */ __asm { SHR R10,0x2 }
    /* +0xf18798 */ __asm { AND R10,RSI }
    /* +0xf1879b */ __asm { LEA RAX,[R10 + RAX*0x4] }
    /* +0xf1879f */ __asm { MOV R10,RAX }
    /* +0xf187a2 */ __asm { AND R10,RCX }
    /* +0xf187a5 */ __asm { SHR RAX,0x1 }
    /* +0xf187a8 */ __asm { AND RAX,RCX }
    /* +0xf187ab */ __asm { LEA R14,[RAX + R10*0x2] }
    /* +0xf187af */ __asm { IMUL R14,R13 }
    /* +0xf187b3 */ __asm { ADD R11D,R12D }
    /* +0xf187b6 */ __asm { MOV R10D,0xd2dcfa73 }
    /* +0xf187bc */ __asm { NOT R10D }
    /* +0xf187bf */ __asm { ADD R10D,R12D }
    /* +0xf187c2 */ __asm { MOVSXD R13,R10D }
    /* +0xf187c5 */ __asm { ADD R13,RDX }
    /* +0xf187c8 */ __asm { MOV RSI,-0x3d7c0a52709555a1 }
    /* +0xf187d2 */ __asm { XOR RSI,R12 }
    /* +0xf187d5 */ __asm { ROL R8D,0x4 }
    /* +0xf187d9 */ __asm { MOV RDX,R12 }
    /* +0xf187dc */ __asm { OR RDX,0x1 }
    /* +0xf187e0 */ __asm { IMUL R15,RDX }
    /* +0xf187e4 */ __asm { MOV EAX,0xfafd9e9c }
    /* +0xf187e9 */ __asm { XOR RAX,R15 }
    /* +0xf187ec */ __asm { XOR R11D,0xfbf1fb04 }
    /* +0xf187f3 */ __asm { LEA RBX,[0x7fffa477ef77] }
    /* +0xf187fa */ __asm { MOV RBP,RBX }
    /* +0xf187fd */ __asm { XOR RBP,0x27d35b00 }
    /* +0xf18804 */ __asm { SUB RBP,R11 }
    /* +0xf18807 */ __asm { ADD RBP,R8 }
    /* +0xf1880a */ __asm { IMUL R8,R14,-0x206cf6e7 }
    /* +0xf18811 */ __asm { ADD R8,RAX }
    /* +0xf18814 */ __asm { MOV R11,R8 }
    /* +0xf18817 */ __asm { SHR R11,0xf }
    /* +0xf1881b */ __asm { XOR R11,R8 }
    /* +0xf1881e */ __asm { ROL R11,0x29 }
    /* +0xf18822 */ __asm { BSWAP R11 }
    /* +0xf18825 */ __asm { MOV RAX,R11 }
    /* +0xf18828 */ __asm { SHR RAX,0x1b }
    /* +0xf1882c */ __asm { XOR RAX,R11 }
    /* +0xf1882f */ __asm { LEA R8,[RSI + RAX*0x1] }
    /* +0xf18833 */ __asm { ADD R8,0x7da75aba }
    /* +0xf1883a */ __asm { MOV R11,R8 }
    /* +0xf1883d */ __asm { ROL R11,0x5 }
    /* +0xf18841 */ __asm { MOV RAX,R8 }
    /* +0xf18844 */ __asm { ROL RAX,0x3 }
    /* +0xf18848 */ __asm { XOR RAX,R11 }
    /* +0xf1884b */ __asm { XOR RAX,R8 }
    /* +0xf1884e */ __asm { MOV R8,0x38c740fa25ab307d }
    /* +0xf18858 */ __asm { IMUL R8,RAX }
}


// ============================================================================
// Function : FUN_7fffa56960b0  |  RVA: 0xf260b0  |  Size: 72 bytes
// Callers  : FUN_7fffa5687c00@0xf17c00
// Callees  : FUN_7fffa5476b88@0xd06b88, FUN_7fffa4f54478@0x7e4478
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa56960b0(uint64_t param_1,uint32_t *param_2,uint64_t param_3,
                          uint32_t *param_4)

{
  uint8_t bVar1;
  uint64_t uVar2;
  
  FUN_7fffa5476b88(*param_2);
  bVar1 = (uint8_t)_DAT_7fffa4780040 & 0x3f;
  uVar2 = _DAT_7fffa47825f0 ^ _DAT_7fffa4780040;
  FUN_7fffa4f54478(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}


// ============================================================================
// Function : FUN_7fffa5696100  |  RVA: 0xf26100  |  Size: 416 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
void FUN_7fffa5696100(uint64_t param_1,uint64_t param_2)

{
  code *pcVar1;
  uint64_t in_RAX;
  int64_t lVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t in_XMM5_Qa;
  
  lVar8 = in_XMM5_Qa * 0x40f0b03cb2b34af5;
  uVar5 = (in_RAX << 0x18 | in_RAX >> 0x28) ^ (in_RAX << 0x12 | in_RAX >> 0x2e) ^ in_RAX;
  uVar5 = (uVar5 << 0x30 | uVar5 >> 0x10) ^ (uVar5 << 0x24 | uVar5 >> 0x1c) ^ uVar5;
  uVar5 = (uVar5 << 8 | uVar5 >> 0x38) ^ (uVar5 << 0x20 | uVar5 >> 0x20) ^ uVar5;
  uVar5 = (uVar5 << 0x30 | uVar5 >> 0x10) + 0x6f341c52;
  uVar5 = uVar5 * 2 ^ uVar5;
  uVar4 = uVar5 * 4 ^ uVar5;
  uVar6 = uVar4 << 4 ^ uVar4;
  uVar6 = uVar6 << 8 ^ uVar6;
  uVar7 = uVar6 << 0x10 ^ uVar6;
  *(uint8_t (*) [16])(lVar8 + -0x5aa42ea) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar8 + -0x5aa42da) = 0;
  if (uVar7 << 0x20 != uVar7) {
    uVar7 = uVar7 << 0x20 ^ uVar7;
    if ((int64_t)uVar7 < 0) {
      FUN_7fffa5427f40(0xffff6750,param_2,uVar6,0x43ff4595 - (int)param_2);
      pcVar1 = (code *)__debugbreak();
      (*pcVar1)();
      return;
    }
    uVar3 = ~((int)param_2 + (int)CONCAT62((int6)(uVar5 >> 0x10),0x27d2));
    uVar5 = 0xc6768f0e;
    (*(code *)((int64_t)(short)uVar3 + 0x7fffa5271808))
              (0xc6768f0e,uVar3,(uVar4 << 0x3c ^ uVar7) * 0x4001);
    lVar2 = (uVar5 << 0x2c | uVar5 >> 0x14) - ((uVar5 >> 0x14) << 0x36);
    *(int64_t *)*(uint8_t (*) [16])(lVar8 + -0x5aa42ea) = lVar2;
    *(uint64_t *)(lVar8 + -0x5aa42da) = lVar2 + uVar7;
    FUN_7fffa4ecf8e0(lVar2,0,uVar7);
    *(uint64_t *)(lVar8 + -0x5aa42e2) = lVar2 + uVar7;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa56962a0  |  RVA: 0xf262a0  |  Size: 365 bytes
// Callers  : FUN_7fffa52d0cd4@0xb60cd4, FUN_7fffa524fccc@0xadfccc
// Callees  : FUN_7fffa5488850@0xd18850, FUN_7fffa516abf0@0x9fabf0, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa56962a0(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  uint8_t auStackX_8 [8];
  uint8_t auStack_608 [32];
  uint8_t *puStack_5e8;
  uint64_t *puStack_5e0;
  uint64_t *puStack_5d8;
  uint64_t uStack_5d0;
  uint64_t uStack_5c8;
  uint64_t uStack_5c0;
  uint64_t uStack_5b8;
  uint32_t *puStack_5b0;
  uint8_t *puStack_5a8;
  uint32_t uStack_598;
  uint32_t uStack_594;
  uint8_t auStack_4f8 [152];
  uint8_t *puStack_460;
  uint64_t uStack_400;
  uint64_t uStack_28;
  
  uStack_28 = _DAT_7fffa4780040 ^ (uint64_t)auStack_608;
  if (param_1 != -1) {
    FUN_7fffa516abf0();
  }
  FUN_7fffa4ecf8e0(&uStack_598,0,0x98);
  FUN_7fffa4ecf8e0(auStack_4f8,0,0x4d0);
  uStack_5c0 = 0;
  puStack_5b0 = &uStack_598;
  uStack_5c8 = 0;
  uStack_5b8 = 0;
  puStack_5a8 = auStack_4f8;
  (*(code *)&DAT_7ff8505d6c00)(auStack_4f8);
  lVar3 = (*(code *)&DAT_7ff8504cd6c0)(uStack_400,&uStack_5c8,0);
  if (lVar3 != 0) {
    uStack_5d0 = 0;
    puStack_5d8 = &uStack_5c0;
    puStack_5e0 = &uStack_5b8;
    puStack_5e8 = auStack_4f8;
    (*(code *)&DAT_7ff8504d1270)(0,uStack_5c8,uStack_400,lVar3);
  }
  puStack_460 = auStackX_8;
  uStack_598 = param_2;
  uStack_594 = param_3;
  iVar1 = (*(code *)&DAT_7ff84ea3d8a0)();
  (*(code *)&DAT_7ff84ea43500)(0);
  iVar2 = (*(code *)&DAT_7ff84ea5c330)(&puStack_5b0);
  if (((iVar2 == 0) && (iVar1 == 0)) && (param_1 != -1)) {
    FUN_7fffa516abf0(param_1);
  }
  FUN_7fffa5488850(uStack_28 ^ (uint64_t)auStack_608);
  return;
}


// ============================================================================
// Function : FUN_7fffa5696410  |  RVA: 0xf26410  |  Size: 3432 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int64_t FUN_7fffa5696410(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t param_4)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  uint32_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  bool bVar12;
  uint8_t bVar13;
  int64_t in_RAX;
  uint64_t *puVar14;
  uint8_t bVar15;
  uint8_t bVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  uint32_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  int64_t lVar26;
  uint64_t *puVar27;
  int64_t lVar28;
  uint32_t uVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t *puVar32;
  int iVar33;
  uint32_t in_R10D;
  int64_t lVar34;
  uint64_t *puVar35;
  int64_t lVar36;
  int64_t lVar37;
  int iVar38;
  uint64_t uVar39;
  uint32_t uVar40;
  uint8_t auVar41 [16];
  char cVar42;
  uint8_t uVar45;
  char cVar46;
  uint8_t uVar47;
  char cVar48;
  uint8_t uVar49;
  char cVar50;
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint32_t auStack_148 [66];
  
  lVar28 = in_RAX * 0x4edbfdb010915e99;
  uVar29 = in_R10D | 1;
  bVar13 = (uint8_t)in_R10D;
  lVar9 = *(int64_t *)(lVar28 + 8);
  uVar18 = *(uint32_t *)(lVar28 + 0x1c);
  uVar24 = (int64_t)param_1 - lVar9;
  uVar21 = 1 << (*(uint8_t *)(lVar28 + 0x100) & 0x1f);
  uVar23 = (uint32_t)uVar24;
  uVar17 = uVar23 - uVar21;
  if (uVar23 - uVar18 <= uVar21) {
    uVar17 = uVar18;
  }
  uVar31 = *(uint64_t *)(lVar28 + 0x60);
  if (*(int *)(lVar28 + 0x28) != 0) {
    uVar17 = uVar18;
  }
  uVar18 = 5;
  if (*(uint32_t *)(lVar28 + 0x10c) < 5) {
    uVar18 = *(uint32_t *)(lVar28 + 0x10c);
  }
  lVar10 = *(int64_t *)(lVar28 + 0x10);
  lVar26 = *(int64_t *)(lVar28 + 0x38);
  iVar33 = 1 << ((uint8_t)uVar18 & 0x1f);
  lVar37 = *(int64_t *)(lVar28 + 0x70);
  uVar18 = *(uint32_t *)(lVar28 + 0x18);
  uVar19 = (uint64_t)uVar18;
  cVar42 = (char)*(uint32_t *)(lVar28 + 0x34);
  if (*(uint32_t *)(lVar28 + 300) == (uint32_t)(uint16_t)(0U >> (bVar13 & 0xf) | 0 << 0x10 - (bVar13 & 0xf)))
  {
    uVar21 = *(uint32_t *)(lVar28 + 0x2c);
    uVar39 = (uint64_t)uVar21;
    lVar36 = lVar37;
    lVar34 = lVar26;
    if (0x180 < uVar23 - uVar21) {
      if (uVar21 < 0xffffffa0) {
        uVar30 = uVar39 + 0x60;
        do {
          uVar25 = (uint64_t)((uint32_t)uVar39 & 7);
          uVar21 = *(uint32_t *)(lVar28 + 0x40 + uVar25 * 4);
          *(int *)(lVar28 + 0x40 + uVar25 * 4) =
               (int)((*(int64_t *)(lVar9 + 8 + uVar39) * -0x30e4432340650000 ^
                     *(uint64_t *)(lVar28 + 0x60)) >> (0x38U - cVar42 & 0x3f));
          uVar25 = (uint64_t)(uVar21 >> 3 & 0xffffffe0);
          iVar38 = 0x1f;
          if ((*(uint8_t *)(lVar26 + uVar25) & 0x1f) != 1) {
            iVar38 = 0;
          }
          uVar40 = iVar38 + (uint32_t)(*(uint8_t *)(lVar26 + uVar25) - 1 & 0x1f);
          *(char *)(lVar26 + uVar25) = (char)uVar40;
          *(char *)((uint64_t)uVar40 + uVar25 + lVar26) = (char)uVar21;
          *(uint32_t *)(lVar37 + uVar25 * 4 + (uint64_t)uVar40 * 4) = (uint32_t)uVar39;
          uVar39 = uVar39 + 1;
        } while (uVar30 != uVar39);
        lVar34 = *(int64_t *)(lVar28 + 0x38);
        lVar36 = *(int64_t *)(lVar28 + 0x70);
      }
      uVar21 = uVar23 ^ 0xffffffe0;
      if (-0x61b7828f <
          (int64_t)(uint64_t)(~(in_R10D ^ 0xfaedf58d) << 10 | ~(in_R10D ^ 0xfaedf58d) >> 0x16)) {
        uVar21 = uVar23 - 0x20;
      }
      uVar39 = (uint64_t)uVar21;
      plVar1 = (int64_t *)((int64_t)param_1 + 1);
      plVar4 = (int64_t *)(lVar9 + uVar39);
      bVar12 = plVar1 < plVar4;
      if (0x5f0bd275 - in_R10D <= (in_R10D ^ 0xaea427ce) + 0x4f4837e6) {
        bVar12 = plVar4 == plVar1;
      }
      uVar22 = ((int)plVar1 - (int)plVar4) + 1;
      uVar40 = 8;
      if (uVar22 < 8) {
        uVar40 = uVar22;
      }
      uVar22 = 0;
      if (!bVar12) {
        uVar22 = uVar40;
      }
      if (uVar21 < uVar22 + uVar21) {
        uVar40 = 0xa300000U >> (bVar13 & 0x1f) | 0xa300000 << 0x20 - (bVar13 & 0x1f);
        bVar16 = (uint8_t)*(uint32_t *)(lVar28 + 0x34);
        bVar15 = bVar16 | 0x38;
        if (~(uVar29 * 0x3b800000 | uVar29 * 0x5fee8677 >> 9) < (uVar40 << 2 | uVar40 >> 0x1e)) {
          bVar15 = 0x38 - bVar16;
        }
        uVar30 = *(uint64_t *)(lVar28 + 0x60);
        if ((uVar22 & 1) != 0) {
          uVar39 = uVar39 + 1;
          *(int *)(lVar28 + 0x40 + (uint64_t)(uVar21 & 7) * 4) =
               (int)((*plVar4 * -0x30e4432340650000 ^ uVar30) >> (bVar15 & 0x3f));
        }
        if (uVar22 != (((in_R10D | 1) * 0x7f91 ^ 0xe28) & 0xffff)) {
          while( true ) {
            uVar40 = (uint32_t)uVar39;
            uVar25 = *(int64_t *)(lVar9 + uVar39) * -0x30e4432340650000 ^ uVar30;
            uVar8 = (int)(uVar25 >> (bVar15 & 0x3f));
            if (in_R10D == 0xfe0c8cc2) {
              uVar8 = (int)((int64_t)uVar25 >> (bVar15 & 0x3f));
            }
            *(uint32_t *)(lVar28 + 0x40 + (uint64_t)(uVar40 & 7) * 4) = uVar8;
            *(int *)(lVar28 + 0x40 + (uint64_t)(uVar40 + 1 & 7) * 4) =
                 (int)((*(int64_t *)(lVar9 + 1 + uVar39) * -0x30e4432340650000 ^ uVar30) >>
                      (bVar15 & 0x3f));
            if ((uVar22 + uVar21) - 2 == uVar40) break;
            uVar39 = uVar39 + 2;
          }
        }
      }
    }
    if (uVar21 < uVar23) {
      lVar11 = *(int64_t *)(lVar28 + 8);
      uVar8 = *(uint32_t *)(lVar28 + 0x34);
      uVar39 = (uint64_t)uVar21;
      while( true ) {
        uVar30 = (uint64_t)((uint32_t)uVar39 & 7);
        uVar21 = *(uint32_t *)(lVar28 + 0x40 + uVar30 * 4);
        *(int *)(lVar28 + 0x40 + uVar30 * 4) =
             (int)((*(int64_t *)(lVar11 + 8 + uVar39) * -0x30e4432340650000 ^
                   *(uint64_t *)(lVar28 + 0x60)) >> (0x38U - (char)uVar8 & 0x3f));
        uVar30 = (uint64_t)(uVar21 >> 3 & 0xffffffe0);
        bVar16 = (bVar13 ^ 0x25) - 0x3c;
        if ((0x91c0 << (bVar13 & 0x1f) | 0x91c0U >> 0x20 - (bVar13 & 0x1f)) < in_R10D + 0x8a76c79c)
        {
          bVar16 = 0;
        }
        lVar20 = 0x1f;
        if ((*(uint8_t *)(lVar34 + uVar30) & 0x1f) != bVar16) {
          lVar20 = 0;
        }
        lVar20 = lVar20 + (uint64_t)(*(uint8_t *)(lVar34 + uVar30) - 1 & 0x1f);
        *(char *)(lVar34 + uVar30) = (char)lVar20;
        *(char *)(lVar34 + uVar30 + lVar20) = (char)uVar21;
        *(uint32_t *)(lVar36 + uVar30 * 4 + lVar20 * 4) = (uint32_t)uVar39;
        if ((uVar24 & 0xffffffff) - 1 == uVar39) break;
        uVar39 = uVar39 + 1;
      }
    }
    *(uint32_t *)(lVar28 + 0x2c) = uVar23;
    uVar21 = *(uint32_t *)(lVar28 + 0x40 + (uint64_t)(uVar23 & 7) * 4);
    *(int *)(lVar28 + 0x40 + (uint64_t)(uVar23 & 7) * 4) =
         (int)((uVar31 ^ *(int64_t *)(lVar9 + 8 + (uVar24 & 0xffffffff)) * -0x30e4432340650000) >>
              (0x38U - cVar42 & 0x3f));
  }
  else {
    uVar24 = *param_1;
    *(uint32_t *)(lVar28 + 0x2c) = uVar23;
    uVar21 = (uint32_t)((uVar31 ^ uVar24 * -0x30e4432340650000) >> (0x38U - cVar42 & 0x3f));
  }
  uVar24 = (uint64_t)(uVar21 >> 3 & 0xffffffe0);
  lVar37 = lVar37 + uVar24 * 4;
  uVar49 = (uint8_t)(uVar21 >> 0x18);
  uVar47 = (uint8_t)(uVar21 >> 0x10);
  uVar45 = (uint8_t)(uVar21 >> 8);
  auVar43._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar49,uVar49),uVar47),CONCAT14(uVar47,uVar21)) >> 0x20);
  auVar43[3] = uVar45;
  auVar43[2] = uVar45;
  auVar43[0] = (uint8_t)uVar21;
  auVar43[1] = auVar43[0];
  auVar43._8_8_ = 0;
  *(int *)(lVar28 + 0x68) = *(int *)(lVar28 + 0x68) + uVar21;
  auVar44 = pshuflw(auVar43,auVar43,0);
  bVar16 = *(uint8_t *)(lVar26 + uVar24);
  pcVar7 = (char *)(lVar26 + uVar24);
  pcVar6 = (char *)(lVar26 + 0x10 + uVar24);
  cVar42 = auVar44[0];
  auVar41[0] = -(*pcVar7 == cVar42);
  cVar46 = auVar44[1];
  auVar41[1] = -(pcVar7[1] == cVar46);
  cVar48 = auVar44[2];
  auVar41[2] = -(pcVar7[2] == cVar48);
  cVar50 = auVar44[3];
  auVar41[3] = -(pcVar7[3] == cVar50);
  auVar41[4] = -(pcVar7[4] == cVar42);
  auVar41[5] = -(pcVar7[5] == cVar46);
  auVar41[6] = -(pcVar7[6] == cVar48);
  auVar41[7] = -(pcVar7[7] == cVar50);
  auVar41[8] = -(pcVar7[8] == cVar42);
  auVar41[9] = -(pcVar7[9] == cVar46);
  auVar41[10] = -(pcVar7[10] == cVar48);
  auVar41[0xb] = -(pcVar7[0xb] == cVar50);
  auVar41[0xc] = -(pcVar7[0xc] == cVar42);
  auVar41[0xd] = -(pcVar7[0xd] == cVar46);
  auVar41[0xe] = -(pcVar7[0xe] == cVar48);
  auVar41[0xf] = -(pcVar7[0xf] == cVar50);
  auVar44[0] = -(*pcVar6 == cVar42);
  auVar44[1] = -(pcVar6[1] == cVar46);
  auVar44[2] = -(pcVar6[2] == cVar48);
  auVar44[3] = -(pcVar6[3] == cVar50);
  auVar44[4] = -(pcVar6[4] == cVar42);
  auVar44[5] = -(pcVar6[5] == cVar46);
  auVar44[6] = -(pcVar6[6] == cVar48);
  auVar44[7] = -(pcVar6[7] == cVar50);
  auVar44[8] = -(pcVar6[8] == cVar42);
  auVar44[9] = -(pcVar6[9] == cVar46);
  auVar44[10] = -(pcVar6[10] == cVar48);
  auVar44[0xb] = -(pcVar6[0xb] == cVar50);
  auVar44[0xc] = -(pcVar6[0xc] == cVar42);
  auVar44[0xd] = -(pcVar6[0xd] == cVar46);
  auVar44[0xe] = -(pcVar6[0xe] == cVar48);
  auVar44[0xf] = -(pcVar6[0xf] == cVar50);
  uVar21 = CONCAT22((uint16_t)(SUB161(auVar44 >> 7,0) & 1) |
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
  if (uVar21 == 0) {
    lVar34 = 0;
  }
  else {
    uVar31 = (uint64_t)(uVar21 >> (bVar16 & 0x1f) | uVar21 << 0x20 - (bVar16 & 0x1f));
    lVar34 = 0;
    do {
      iVar38 = 0;
      for (uVar39 = uVar31; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x8000000000000000) {
        iVar38 = iVar38 + 1;
      }
      uVar21 = iVar38 + (uint32_t)bVar16 & 0x1f;
      if (uVar21 != 0) {
        uVar21 = *(uint32_t *)(lVar37 + (uint64_t)uVar21 * 4);
        if (uVar21 < uVar17) break;
        auStack_148[lVar34] = uVar21;
        lVar34 = lVar34 + 1;
        iVar33 = iVar33 + -1;
      }
      uVar31 = uVar31 & uVar31 - 1;
    } while (uVar31 != ((in_R10D + 0x432876e8) * 0x10000000 | in_R10D + 0x432876e8 >> 4) &&
             iVar33 != 0);
  }
  uVar17 = bVar16 - 0x1f;
  if (uVar29 * -0x510e9431 + 0x9b834a39 <
      (0xd541ff0eU >> (bVar13 & 0x1f) | -0x2abe00f2 << 0x20 - (bVar13 & 0x1f)) * -0x47a3231b) {
    uVar17 = bVar16 & 0x1f;
  }
  lVar36 = 0;
  if (uVar17 == 1) {
    lVar36 = 0x1f;
  }
  lVar36 = lVar36 + (uint64_t)(bVar16 - 1 & 0x1f);
  *(uint8_t *)(uVar24 + lVar26) = (char)lVar36;
  ((uint8_t *)(uVar24 + lVar26))[lVar36] = auVar43[0];
  iVar33 = *(int *)(lVar28 + 0x2c);
  *(int *)(lVar28 + 0x2c) = iVar33 + 1;
  *(int *)(lVar37 + lVar36 * 4) = iVar33;
  uVar24 = 3;
  if (lVar34 != 0) {
    puVar2 = (uint64_t *)((int64_t)param_2 - 7);
    puVar3 = (uint64_t *)((int64_t)param_2 - 3);
    puVar5 = (uint64_t *)((int64_t)param_1 + 4);
    lVar28 = lVar9 + uVar19 + 8;
    lVar37 = 0;
    uVar31 = 3;
    do {
      uVar17 = auStack_148[lVar37];
      uVar24 = (uint64_t)uVar17;
      if ((in_R10D == 0x9dc1692d) == uVar17 < uVar18) {
        puVar14 = (uint64_t *)(lVar9 + uVar24);
        if (*(int *)((uVar31 - 3) + (int64_t)puVar14) == *(int *)((int64_t)param_1 + (uVar31 - 3))
           ) {
          puVar35 = param_1;
          if (param_1 < puVar2) {
            if (*puVar14 == *param_1) {
              lVar26 = lVar9 + 8 + uVar24;
              lVar36 = 0;
              do {
                puVar35 = (uint64_t *)((int64_t)param_1 + lVar36 + 8);
                if (puVar2 <= puVar35) {
                  puVar14 = (uint64_t *)(lVar26 + lVar36);
                  goto joined_r0x7fffa5697011;
                }
                uVar24 = *(uint64_t *)(lVar26 + lVar36);
                lVar36 = lVar36 + 8;
              } while (uVar24 == *puVar35);
              uVar21 = 0;
              for (uVar24 = *puVar35 ^ uVar24; (uVar24 & 1) == 0;
                  uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                uVar21 = uVar21 + 1;
              }
              uVar24 = (uint64_t)(uVar21 >> 3) + lVar36;
            }
            else {
              uVar21 = 0;
              for (uVar24 = *param_1 ^ *puVar14; (uVar24 & 1) == 0;
                  uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                uVar21 = uVar21 + 1;
              }
              uVar24 = (uint64_t)(uVar21 >> 3);
            }
          }
          else {
joined_r0x7fffa5697011:
            if ((puVar35 < puVar3) && ((int)*puVar14 == (int)*puVar35)) {
              puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
              puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
            }
            if ((puVar35 < (uint64_t *)((int64_t)param_2 - 1U)) &&
               ((short)*puVar14 == (short)*puVar35)) {
              puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
              puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
            }
            if (puVar35 < param_2) {
              puVar35 = (uint64_t *)
                        ((int64_t)puVar35 + (uint64_t)((char)*puVar14 == (char)*puVar35));
            }
            uVar24 = (int64_t)puVar35 - (int64_t)param_1;
          }
          goto joined_r0x7fffa5696eb8;
        }
      }
      else if (*(int *)(lVar10 + uVar24) == (int)*param_1) {
        puVar35 = (uint64_t *)(lVar10 + uVar24 + 4);
        puVar14 = (uint64_t *)
                  (((int64_t)(lVar10 + uVar19) - (int64_t)puVar35) + (int64_t)puVar5);
        if (param_2 <= puVar14) {
          puVar14 = param_2;
        }
        puVar27 = puVar5;
        puVar32 = puVar35;
        if (puVar5 < (uint64_t *)((int64_t)puVar14 - 7U)) {
          if (*puVar35 == *puVar5) {
            lVar26 = lVar10 + 0xc + uVar24;
            lVar36 = 0;
            do {
              puVar27 = (uint64_t *)((int64_t)param_1 + lVar36 + 0xc);
              if ((uint64_t *)((int64_t)puVar14 - 7U) <= puVar27) {
                puVar32 = (uint64_t *)(lVar26 + lVar36);
                goto LAB_7fffa5696efb;
              }
              uVar24 = *(uint64_t *)(lVar26 + lVar36);
              lVar36 = lVar36 + 8;
            } while (uVar24 == *puVar27);
            uVar21 = 0;
            for (uVar24 = uVar24 ^ *puVar27; (uVar24 & 1) == 0;
                uVar24 = uVar24 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar24 = (uint64_t)(uVar21 >> 3) + lVar36;
          }
          else {
            uVar21 = 0;
            for (uVar24 = *puVar5 ^ *puVar35; (uVar24 & 1) == 0;
                uVar24 = uVar24 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar24 = (uint64_t)(uVar21 >> 3);
          }
        }
        else {
LAB_7fffa5696efb:
          if ((puVar27 < (uint64_t *)((int64_t)puVar14 - 3U)) && ((int)*puVar32 == (int)*puVar27))
          {
            puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
          }
          if ((puVar27 < (uint64_t *)((int64_t)puVar14 - 1U)) &&
             ((short)*puVar32 == (short)*puVar27)) {
            puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
            puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
          }
          if (puVar27 < puVar14) {
            puVar27 = (uint64_t *)
                      ((int64_t)puVar27 + (uint64_t)((char)*puVar32 == (char)*puVar27));
          }
          uVar24 = (int64_t)puVar27 - (int64_t)puVar5;
        }
        if ((char *)((int64_t)puVar35 + uVar24) == (char *)(lVar10 + uVar19)) {
          puVar14 = (uint64_t *)((int64_t)puVar5 + uVar24);
          puVar27 = (uint64_t *)(lVar9 + uVar19);
          puVar35 = puVar14;
          if (puVar14 < puVar2) {
            uVar39 = *(uint64_t *)(lVar9 + uVar19);
            if (uVar39 == *puVar14) {
              lVar26 = 0;
              do {
                puVar35 = (uint64_t *)((int64_t)param_1 + lVar26 + uVar24 + 0xc);
                if (puVar2 <= puVar35) {
                  puVar27 = (uint64_t *)(lVar26 + lVar28);
                  goto LAB_7fffa5697091;
                }
                uVar39 = *(uint64_t *)(lVar28 + lVar26);
                lVar26 = lVar26 + 8;
              } while (uVar39 == *puVar35);
              uVar21 = 0;
              for (uVar39 = *puVar35 ^ uVar39; (uVar39 & 1) == 0;
                  uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                uVar21 = uVar21 + 1;
              }
              uVar39 = (uint64_t)(uVar21 >> 3) + lVar26;
            }
            else {
              uVar21 = 0;
              for (uVar39 = *puVar14 ^ uVar39; (uVar39 & 1) == 0;
                  uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                uVar21 = uVar21 + 1;
              }
              uVar39 = (uint64_t)(uVar21 >> 3);
            }
          }
          else {
LAB_7fffa5697091:
            bVar12 = puVar35 == puVar3;
            if ((uint64_t)((in_R10D + 0xb3793057) * 0x100000 | in_R10D + 0xb3793057 >> 0xc) <=
                (uint64_t)(int64_t)(int)(uVar29 * -0x77fe799)) {
              bVar12 = puVar35 < puVar3;
            }
            if ((bVar12) && ((int)*puVar27 == (int)*puVar35)) {
              puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
              puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
            }
            if ((puVar35 < (uint64_t *)((int64_t)param_2 - 1U)) &&
               ((short)*puVar27 == (short)*puVar35)) {
              puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
              puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
            }
            if (puVar35 < param_2) {
              puVar35 = (uint64_t *)
                        ((int64_t)puVar35 + (uint64_t)((char)*puVar27 == (char)*puVar35));
            }
            uVar39 = (int64_t)puVar35 - (int64_t)puVar14;
          }
          uVar24 = uVar24 + uVar39;
        }
        uVar24 = uVar24 + 4;
joined_r0x7fffa5696eb8:
        if (uVar31 < uVar24) {
          *(uint64_t *)
           (((0x2ddb31f0f0f0f0d6 << (bVar13 & 0x3f) | 0x2ddb31f0f0f0f0d6U >> 0x40 - (bVar13 & 0x3f))
            + 0x1ac315c0) *
           ((param_4 << 0x25) + param_4 ^ param_4 << 0x30 ^ param_4 * 0x2000000001000000)) =
               (uint64_t)((uVar23 + 3) - uVar17);
          uVar31 = uVar24;
          if ((uint64_t *)((int64_t)param_1 + uVar24) == param_2) break;
        }
      }
      uVar24 = uVar31;
      lVar37 = lVar37 + 1;
      uVar31 = uVar24;
    } while (lVar37 != lVar34);
  }
  return ((uVar24 << 0xb | uVar24 >> 0x35) ^ (uVar24 << 0x17 | uVar24 >> 0x29) ^ uVar24) *
         0x45ff12d9;
}


// ============================================================================
// Function : FUN_7fffa56971a0  |  RVA: 0xf271a0  |  Size: 710 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56971a0(uint32_t param_1)

{
  uint64_t uVar1;
  uint16_t uVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  
  uVar4 = (param_1 ^ 0xa47c7eb6 | 0xa47c307d) * -0x12f5db75 + (~param_1 & 0xa47c3034) * 0x26cad314 +
          ((param_1 ^ 0x5b838149) & 0x5b83cf82) * 0x13d4f79f +
          (((param_1 | 0x5b838149) ^ 0x5b83cf82) + (param_1 & 0x5b838100)) * 0x26cad314;
  bVar3 = (uint8_t)uVar4;
  *(uint8_t *)((int64_t)(int)((uVar4 + 0xe6150ca) * -0x679b1c4d) + 0x7fffa47c307d) =
       ~((bVar3 ^ 0x9e) << 4 | (bVar3 ^ 0x9e) >> 4);
  lVar7 = (int64_t)(short)(0x787bU >> (bVar3 & 0xf) | 0x787b << 0x10 - (bVar3 & 0xf));
  *(uint64_t *)(lVar7 + 0x7fffa47bee73) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47bee7b) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47bee63) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47bee6b) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47bee53) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47bee5b) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47bee83) = 0;
  *(uint64_t *)((int64_t)(int)(-0x19e4924b - (uVar4 ^ 0xa3749bc)) + 0x7fffa47c7ef1) =
       (uint64_t)(0xe0c50861 - uVar4 & 0xffff);
  uVar1 = rdtsc();
  lVar5 = (uVar1 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar1)) * 0xc455ffcd4937c8b + 0xb;
  lVar7 = 3;
  while( true ) {
    lVar5 = lVar5 * 0xc455ffcd4937c8b + 0xb;
    *(char *)(lVar7 + (int64_t)
                      (int)(0xfffefb29U >> (bVar3 & 0x1f) | -0x104d7 << 0x20 - (bVar3 & 0x1f)) +
                      0x7fffa47c2cf7) = (char)((uint64_t)lVar5 >> 0x20);
    uVar2 = (uint16_t)uVar4;
    lVar5 = lVar5 * 0xc455ffcd4937c8b + 0xb;
    lVar6 = lVar5 * 0xc455ffcd4937c8b + 0xb;
    *(char *)(lVar7 + (int64_t)(short)(uVar2 ^ 0xd92d) + 0x7fffa47bd940) =
         (char)((uint64_t)lVar5 >> 0x20);
    lVar5 = lVar6 * 0xc455ffcd4937c8b + 0xb;
    *(char *)(lVar7 + (int64_t)(short)(uVar2 + 0x8a75) + 0x7fffa47c17b8) =
         (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar7 + (int64_t)(short)(~(uVar2 + 0xdea) << 2 | (uint16_t)~(uVar2 + 0xdea) >> 0xe) +
                      0x7fffa47c03ba) = (char)((uint64_t)lVar6 >> 0x20);
    if (lVar7 == 0x43) break;
    lVar7 = lVar7 + 4;
  }
  lVar7 = (uint64_t)
          ((uint32_t)*(uint8_t *)(((int64_t)(short)((uVar2 ^ 0xc316) + 0x95) ^ 0x4cceU) + 0x7fffa47c29cc)
           * 0x24924925 + 0x24924925) * 7;
  *(uint64_t *)
   ((uint64_t)(uint32_t)((int)((uint64_t)lVar7 >> 0x20) << 3) +
   (int64_t)(short)(-0x3aa2 << (bVar3 & 0xf) | 0xc55eU >> 0x10 - (bVar3 & 0xf)) + 0x7fffa47c1fd3) =
       0;
  *(char *)((int64_t)(short)((uVar2 ^ 0x907d) << 4 | (uVar2 ^ 0x907d) >> 0xc) + 0x7fffa47c28c5) =
       (char)((uint64_t)lVar7 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5697520  |  RVA: 0xf27520  |  Size: 348 bytes
// Callers  : FUN_7fffa560a390@0xe9a390
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa5102fc0@0x992fc0, FUN_7fffa519a400@0xa2a400, FUN_7fffa5225520@0xab5520, _guard_check_icall@0xedc080
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa569762e) */
/* WARNING: Removing unreachable block (ram,0x7fffa5697653) */
/* WARNING: Removing unreachable block (ram,0x7fffa5697657) */
/* WARNING: Removing unreachable block (ram,0x7fffa569765a) */
/* WARNING: Removing unreachable block (ram,0x7fffa569765e) */

uint64_t * FUN_7fffa5697520(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint8_t *puVar8;
  uint64_t uStack_50;
  uint8_t auStack_48 [40];
  
  puVar8 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  if (0x7fffffffffffffff < uVar1) {
    FUN_7fffa519a400();
    pcVar2 = (code *)__debugbreak();
    puVar7 = (uint64_t *)(*pcVar2)();
    return puVar7;
  }
  if (uVar1 < 0x10) {
    param_1[2] = uVar1;
    param_1[3] = 0xf;
    FUN_7fffa56a5f20(0,param_2,uVar1 + 1);
    return param_1;
  }
  uVar3 = uVar1 | 0xf;
  if (uVar3 < 0x8000000000000000) goto LAB_7fffa56975b9;
  uVar4 = 0x8000000000000027;
  puVar8 = auStack_48;
  uVar3 = 0x7fffffffffffffff;
  while( true ) {
    *(uint64_t *)(puVar8 + -8) = 0x7fffa56975aa;
    lVar5 = FUN_7fffa5225520(uVar4);
    if (lVar5 != 0) break;
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar8 = puVar8 + 8;
LAB_7fffa56975b9:
    if (uVar3 < 0x16) {
      uVar3 = 0x16;
    }
    if (uVar3 == 0xffffffffffffffff) goto LAB_7fffa5697601;
    if (uVar3 + 1 < 0x1000) {
      *(uint64_t *)(puVar8 + -8) = 0x7fffa5697601;
      uVar6 = FUN_7fffa5225520();
      goto LAB_7fffa5697601;
    }
    uVar4 = uVar3 + 0x28;
    if (uVar4 <= uVar3 + 1) {
      *(uint64_t *)(puVar8 + -8) = 0x7fffa569767b;
      FUN_7fffa5102fc0();
      pcVar2 = (code *)__debugbreak();
      puVar7 = (uint64_t *)(*pcVar2)();
      return puVar7;
    }
  }
  uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
  *(int64_t *)(uVar6 - 8) = lVar5;
LAB_7fffa5697601:
  *param_1 = uVar6;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  *(uint64_t *)(puVar8 + -8) = 0x7fffa569761b;
  FUN_7fffa56a5f20(uVar6,param_2,uVar1 + 1);
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa5697680  |  RVA: 0xf27680  |  Size: 261 bytes
// Callers  : FUN_7fffa4ab2990@0x342990
// Callees  : FUN_7fffa56a57c0@0xf357c0, FUN_7fffa5487f80@0xd17f80, FUN_7fffa564c350@0xedc350, FUN_7fffa52d2088@0xb62088, FUN_7fffa5182a80@0xa12a80, FUN_7fffa5281d40@0xb11d40, FUN_7fffa52c3c00@0xb53c00, FUN_7fffa517e320@0xa0e320
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa5697680(uint64_t param_1,uint64_t param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint8_t uVar4;
  int iVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  
  cVar3 = FUN_7fffa5400390(0);
  if (cVar3 != '\0') {
    uVar4 = FUN_7fffa507eeb0();
    bVar2 = true;
    if (_DAT_7fffa4781bb0 != 0) {
      FUN_7fffa5146560(7);
      pcVar1 = (code *)__debugbreak();
      uVar7 = (*pcVar1)();
      return uVar7;
    }
    _DAT_7fffa4781bb0 = 1;
    cVar3 = FUN_7fffa56a57c0();
    if (cVar3 != '\0') {
      FUN_7fffa5281d40();
      FUN_7fffa5182a80();
      FUN_7fffa564c350();
      iVar5 = FUN_7fffa5487f80(&UNK_7fffa5877088,&UNK_7fffa58770a8);
      if (iVar5 == 0) {
        cVar3 = FUN_7fffa517e320();
        if (cVar3 != '\0') {
          FUN_7fffa52d2088(&UNK_7fffa58769c8,&UNK_7fffa5877080);
          _DAT_7fffa4781bb0 = 2;
          bVar2 = false;
        }
      }
    }
    FUN_7fffa52c3c00(uVar4);
    if (!bVar2) {
      plVar6 = (int64_t *)FUN_7fffa5177ca0();
      if (*plVar6 != 0) {
        cVar3 = FUN_7fffa5009290(plVar6);
        if (cVar3 != '\0') {
          (*(code *)*plVar6)(param_1,2,param_2);
        }
      }
      _DAT_7fffa4781b88 = _DAT_7fffa4781b88 + 1;
      return 1;
    }
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5697790  |  RVA: 0xf27790  |  Size: 7725 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int64_t FUN_7fffa5697790(uint64_t param_1,int64_t *param_2,int *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  bool bVar12;
  short sVar13;
  uint8_t bVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint32_t uVar18;
  int iVar19;
  uint64_t uVar20;
  uint64_t *puVar21;
  uint32_t uVar22;
  uint64_t *puVar23;
  uint32_t uVar24;
  uint64_t *puVar25;
  uint64_t unaff_RBX;
  uint64_t uVar26;
  uint64_t *puVar27;
  uint32_t uVar28;
  uint64_t *puVar29;
  uint64_t *puVar30;
  uint64_t *puVar31;
  uint32_t uVar32;
  uint64_t *puVar33;
  uint64_t uVar34;
  int64_t lVar35;
  uint64_t in_R10;
  uint64_t *puVar36;
  uint64_t uVar37;
  uint64_t *puVar38;
  uint16_t uVar39;
  uint32_t uVar40;
  uint64_t uVar41;
  uint64_t *puVar42;
  int64_t lVar43;
  uint64_t uVar44;
  uint64_t uVar45;
  uint64_t uVar46;
  uint64_t uVar47;
  int *piVar48;
  int iVar49;
  int iStack_1f4;
  uint64_t uStack_180;
  int64_t lStack_168;
  uint64_t uStack_160;
  uint64_t *puStack_150;
  int iStack_13c;
  uint64_t *puStack_128;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int64_t lStack_c8;
  uint64_t *puStack_c0;
  uint64_t *puStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t *puStack_a0;
  
  uVar20 = ~(uint64_t)param_4;
  uVar41 = ~unaff_RBX;
  uVar47 = uVar41 ^ in_R10 | uVar20;
  puStack_c0 = *(uint64_t **)(param_1 + 0xf8);
  uVar9 = *(uint32_t *)(param_1 + 0x110);
  uVar40 = 6;
  if (uVar9 < 6) {
    uVar40 = uVar9;
  }
  uVar24 = 4;
  if (4 < uVar40) {
    uVar24 = uVar40;
  }
  uVar40 = *(uint32_t *)(param_1 + 0x18);
  uVar26 = (uint64_t)uVar40;
  uVar10 = puStack_c0[1];
  lVar11 = *(int64_t *)(param_1 + 8);
  puVar4 = (uint64_t *)(lVar11 + uVar26);
  puVar42 = (uint64_t *)((uint32_t)puStack_c0[3] + uVar10);
  uVar22 = ((int)param_4 - (int)puVar4) - (int)puVar42;
  puStack_c0 = (uint64_t *)*puStack_c0;
  iStack_13c = *param_3;
  iStack_1f4 = param_3[1];
  *(uint32_t *)(param_1 + 300) = 0;
  uVar20 = (uVar41 & in_R10 & (uint64_t)param_4) * -0x9aae3e68 +
           ((uVar41 | in_R10) & (uint64_t)param_4 | uVar20 & ~in_R10 & unaff_RBX) * 0x806f4c14 +
           ((uVar41 | in_R10) & uVar20) * 0xac674f15 +
           ((uVar20 & uVar41 & in_R10) + (in_R10 ^ unaff_RBX ^ uVar20)) * -0x2bf80301 +
           (~in_R10 & unaff_RBX & (uint64_t)param_4) * -0x1a3ef254 +
           (uVar47 & 0xffffffff) * 0x3959be97 +
           ((uVar47 >> 0x20) * 0x3959be97 + (uVar47 & 0xffffffff) * 0xffffffff << 0x20);
  uVar32 = (uint32_t)uVar20;
  uVar28 = (uint32_t)puStack_c0;
  uVar18 = uVar22 + uVar28;
  if ((uint64_t)(uVar32 + 0x3d7f60c4) == 0xffffffffe6a887a4) {
    uVar18 = uVar22 & uVar28;
  }
  puVar27 = (uint64_t *)((int64_t)param_4 + (uint64_t)(uVar18 == 0));
  puVar5 = (uint64_t *)(param_5 + (int64_t)param_4);
  puVar29 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  if (puVar29 <= puVar27) {
LAB_7fffa56995d4:
    param_3[1] = iStack_1f4;
    *param_3 = iStack_13c;
    return (int64_t)puVar5 - (int64_t)param_4;
  }
  uVar18 = ((int)uVar10 - uVar28) + uVar40;
  puVar1 = (uint64_t *)((int64_t)puVar5 - 3);
  puVar2 = puVar5 + -4;
  puVar3 = (uint64_t *)((int64_t)puVar5 - 7);
  puStack_b8 = (uint64_t *)((int64_t)puVar5 - 1);
  puVar30 = (uint64_t *)(uVar26 + lVar11 + 8);
LAB_7fffa5697b2a:
  iVar49 = (int)lVar11;
  uVar28 = uVar32 | 1;
  puStack_150 = (uint64_t *)((int64_t)puVar27 + 1);
  uVar22 = (-(uint32_t)((uint64_t)(int64_t)(int)~(uVar28 * 0x38b21bb8) <
                   (uint64_t)(uVar28 * -0x4dc00000 | uVar28 * 0x32ed0ac9 >> 10)) | 1) +
           (((int)puVar27 - iVar49) - iStack_13c);
  piVar48 = (int *)((uVar22 - uVar18) + uVar10);
  if (uVar40 <= uVar22) {
    piVar48 = (int *)((uint64_t)uVar22 + lVar11);
  }
  if ((uVar22 - uVar40 < 0xfffffffd) && (*piVar48 == *(int *)puStack_150)) {
    puVar23 = puVar5;
    if (uVar22 < uVar40) {
      puVar23 = puStack_c0;
    }
    puVar36 = (uint64_t *)(piVar48 + 1);
    puVar31 = (uint64_t *)((int64_t)puVar27 + 5);
    puVar33 = (uint64_t *)((int64_t)puVar27 + (int64_t)puVar23 + (5 - (int64_t)puVar36));
    if (puVar5 <= puVar33) {
      puVar33 = puVar5;
    }
    puVar25 = puVar36;
    puVar21 = puVar31;
    if (puVar31 < (uint64_t *)((int64_t)puVar33 - 7U)) {
      if (*puVar36 == *puVar31) {
        lVar43 = 0;
LAB_7fffa5697c10:
        puVar25 = (uint64_t *)((int64_t)puVar27 + lVar43 + 0xd);
        if (puVar25 < (uint64_t *)((int64_t)puVar33 - 7U)) {
          uVar41 = *puVar25;
          uVar47 = *(uint64_t *)((int64_t)piVar48 + lVar43 + 0xc);
          if (uVar47 == uVar41) goto code_r0x7fffa5697c2b;
          uVar22 = 0;
          for (uVar41 = uVar41 ^ uVar47; (uVar41 & 1) == 0;
              uVar41 = uVar41 >> 1 | 0x8000000000000000) {
            uVar22 = uVar22 + 1;
          }
          uVar41 = (uint64_t)(uVar22 >> 3) + lVar43 + 8;
          goto LAB_7fffa5697ce4;
        }
        puVar21 = (uint64_t *)((int64_t)puVar27 + lVar43 + 0xd);
        puVar25 = (uint64_t *)((int64_t)piVar48 + lVar43 + 0xc);
        goto LAB_7fffa5697c88;
      }
      uVar22 = 0;
      for (uVar41 = *puVar36 ^ *puVar31; (uVar41 & 1) == 0;
          uVar41 = uVar41 >> 1 | 0x8000000000000000) {
        uVar22 = uVar22 + 1;
      }
      uVar41 = (uint64_t)(uVar22 >> 3);
    }
    else {
LAB_7fffa5697c88:
      if ((puVar21 < (uint64_t *)((int64_t)puVar33 - 3U)) && ((int)*puVar25 == (int)*puVar21)) {
        puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
        puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
      }
      if ((puVar21 < (uint64_t *)((int64_t)puVar33 - 1U)) && ((short)*puVar25 == (short)*puVar21))
      {
        puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
        puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
      }
      if (puVar21 < puVar33) {
        puVar21 = (uint64_t *)((int64_t)puVar21 + (uint64_t)((char)*puVar25 == (char)*puVar21));
      }
      uVar41 = (int64_t)puVar21 - (int64_t)puVar31;
    }
LAB_7fffa5697ce4:
    if ((uint64_t *)((int64_t)puVar36 + uVar41) == puVar23) {
      puVar31 = (uint64_t *)((int64_t)puVar31 + uVar41);
      puVar23 = puVar31;
      puVar36 = puVar4;
      if (puVar31 < puVar3) {
        if (*puVar4 == *puVar31) {
          puVar23 = (uint64_t *)((int64_t)puVar27 + uVar41 + 0xd);
          lVar43 = 8;
          if (puVar23 < puVar3) {
LAB_7fffa5697d30:
            if (*(uint64_t *)((int64_t)puVar4 + lVar43) == *puVar23) goto code_r0x7fffa5697d48;
            uVar22 = 0;
            for (uVar47 = *(uint64_t *)((int64_t)puVar4 + lVar43) ^ *puVar23; (uVar47 & 1) == 0;
                uVar47 = uVar47 >> 1 | 0x8000000000000000) {
              uVar22 = uVar22 + 1;
            }
            uVar47 = (uint64_t)(uVar22 >> 3) + lVar43;
            goto LAB_7fffa5697e06;
          }
LAB_7fffa5697d57:
          puVar36 = (uint64_t *)(lVar43 + (int64_t)puVar4);
          goto LAB_7fffa5697d5f;
        }
        uVar22 = 0;
        for (uVar47 = *puVar4 ^ *puVar31; (uVar47 & 1) == 0;
            uVar47 = uVar47 >> 1 | 0x8000000000000000) {
          uVar22 = uVar22 + 1;
        }
        uVar47 = (uint64_t)(uVar22 >> 3);
      }
      else {
LAB_7fffa5697d5f:
        if ((puVar23 < puVar1) && ((int)*puVar36 == (int)*puVar23)) {
          puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
          puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
        }
        if ((puVar23 < puStack_b8) && ((short)*puVar36 == (short)*puVar23)) {
          puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
          puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
        }
        if (puVar23 < puVar5) {
          puVar23 = (uint64_t *)((int64_t)puVar23 + (uint64_t)((char)*puVar36 == (char)*puVar23))
          ;
        }
        uVar47 = (int64_t)puVar23 - (int64_t)puVar31;
      }
LAB_7fffa5697e06:
      uVar41 = uVar41 + uVar47;
    }
    uVar41 = uVar41 + 4;
  }
  else {
    uVar41 = 0;
  }
  uStack_e0 = 999999999;
  sVar13 = (short)uVar20;
  bVar14 = (uint8_t)uVar20;
  if (uVar9 < 5) {
    uVar47 = (int64_t)puVar27 - 0x98cea511;
    uVar44 = (param_1 >> 1 | (uint64_t)((param_1 & 1) != 0) << 0x3f) ^
             (param_1 << 0x23 | param_1 >> 0x1d) ^ param_1;
    (*(code *)(&UNK_7fffa56b633d + (short)(sVar13 + -0x73e2)))
              (((0x2c3e16be - uVar32) * 0x8000 | 0x2c3e16be - uVar32 >> 0x11) ^ 0xe689a808,puVar5,
               &uStack_e0,
               ((uVar47 >> 9 ^ (uVar47 * 4 | uVar47 >> 0x3e) ^ uVar47) & 0xffffffff) * 0xc5def21d);
    uVar47 = uVar44 << 0xf ^ uVar44;
    uVar47 = (uVar47 << 0x2b) + (uVar47 << 0x1e ^ uVar44 << 0x3c ^ uVar47);
  }
  else if (uVar9 == 5) {
    lVar43 = 0x38028426;
    (*(code *)(&UNK_7fffa4d1252c + (int)(0x46361499 - uVar32)))
              (((int64_t)puVar5 * -0x7fffffffff800000 ^
               (int64_t)puVar5 - ((int64_t)puVar5 << 0x28)) * -3,0x38028426,param_1,&uStack_e0);
    uVar47 = lVar43 * 0x3fffffff80000001;
  }
  else {
    uVar45 = param_1 << 0x3e ^ param_1;
    uVar47 = ~uVar26 & uVar10;
    uVar44 = uVar47 * 0x719f7163;
    uVar47 = uVar47 | 0x719f7163;
    if ((0x8de84cf << (bVar14 & 0x1f) | 0x8de84cfU >> 0x20 - (bVar14 & 0x1f)) == 0x99e11bd0) {
      uVar47 = uVar44;
    }
    uVar44 = (*(code *)((int64_t)
                        (short)(((0xac8bU - sVar13) * 0x40 | (uint16_t)(0xac8bU - sVar13) >> 10) +
                               0xd60a) + 0x7fffa52d8319))
                       ((param_1 << 0x1f | uVar45 >> 0x21) ^ (param_1 << 2 | uVar45 >> 0x3e) ^
                        uVar45,((int64_t)
                                (int)(0x6402c592 << (bVar14 & 0x1f) |
                                     0x6402c592U >> 0x20 - (bVar14 & 0x1f)) +
                               (int64_t)
                               (int)(-0x64070393 << (bVar14 & 0x1f) |
                                    0x9bf8fc6dU >> 0x20 - (bVar14 & 0x1f))) * (~uVar26 ^ uVar10),
                        uVar47,uVar44,((int64_t)puVar27 << 0x17 ^ (uint64_t)puVar27) * 0x8001);
    uVar45 = uVar44 << 0x24 | uVar44 >> 0x1c;
    uVar44 = (uVar44 << 0x35 | uVar44 >> 0xb) ^ uVar44;
    uVar47 = uVar44 ^ uVar45;
    if (0xff06ad06 < ((uVar32 ^ 0xff0ab87e) << 2 | (uVar32 ^ 0xff0ab87e) >> 0x1e)) {
      uVar47 = uVar45 * uVar44;
    }
    uVar47 = (uVar47 << 8 | uVar47 >> 0x38) ^ (uVar47 << 0x2a | uVar47 >> 0x16) ^ uVar47;
    uVar47 = (uVar47 << 0x10 | uVar47 >> 0x30) ^ (uVar47 << 0x14 | uVar47 >> 0x2c) ^ uVar47;
    uVar47 = (uVar47 << 0x20 | uVar47 >> 0x20) ^ (uVar47 << 0x28 | uVar47 >> 0x18) ^ uVar47;
    uVar47 = uVar47 << 0x30 | uVar47 >> 0x10;
  }
  uStack_160 = uVar41;
  if (uVar41 < uVar47) {
    uStack_160 = uVar47;
  }
  if (3 < uStack_160) {
    if (uVar41 < uVar47) {
      puStack_150 = puVar27;
    }
    else {
      uStack_e0 = 1;
    }
    puStack_128 = (uint64_t *)((int64_t)puVar27 + 0xd);
    lStack_168 = (int64_t)puVar27 + 5;
    puStack_a0 = puStack_128;
    do {
      puVar23 = (uint64_t *)((int64_t)puVar27 + 1);
      uVar22 = ((int)puVar23 - iVar49) - iStack_13c;
      piVar48 = (int *)((uVar22 - uVar18) + uVar10);
      if (uVar40 <= uVar22) {
        piVar48 = (int *)((uint64_t)uVar22 + lVar11);
      }
      uStack_180 = uStack_e0;
      if ((uVar22 - uVar40 < 0xfffffffd) && (*piVar48 == *(int *)puVar23)) {
        puVar36 = (uint64_t *)(piVar48 + 1);
        puVar31 = (uint64_t *)((int64_t)puVar27 + 5);
        puVar33 = puVar5;
        if (uVar22 < uVar40) {
          puVar33 = puStack_c0;
        }
        puVar25 = (uint64_t *)((int64_t)puVar27 + (int64_t)puVar33 + (5 - (int64_t)puVar36));
        if (puVar5 <= puVar25) {
          puVar25 = puVar5;
        }
        puVar21 = puVar36;
        puVar38 = puVar31;
        if (puVar31 < (uint64_t *)((int64_t)puVar25 - 7U)) {
          if (*puVar36 == *puVar31) {
            puVar21 = (uint64_t *)(piVar48 + 3);
            lVar43 = lStack_168;
            puVar38 = puStack_a0;
            do {
              if ((uint64_t *)((int64_t)puVar25 - 7U) <= puVar38) goto LAB_7fffa5698a81;
              uVar44 = *puVar21;
              uVar45 = *puVar38;
              puVar38 = puVar38 + 1;
              lVar43 = lVar43 + 8;
              puVar21 = puVar21 + 1;
            } while (uVar44 == uVar45);
            uVar22 = 0;
            for (uVar45 = uVar45 ^ uVar44; (uVar45 & 1) == 0;
                uVar45 = uVar45 >> 1 | 0x8000000000000000) {
              uVar22 = uVar22 + 1;
            }
            uVar44 = ((uint64_t)(uVar22 >> 3) + lVar43) - (int64_t)puVar31;
          }
          else {
            uVar22 = 0;
            for (uVar44 = *puVar31 ^ *puVar36; (uVar44 & 1) == 0;
                uVar44 = uVar44 >> 1 | 0x8000000000000000) {
              uVar22 = uVar22 + 1;
            }
            uVar44 = (uint64_t)(uVar22 >> 3);
          }
        }
        else {
LAB_7fffa5698a81:
          if ((puVar38 < (uint64_t *)((int64_t)puVar25 - 3U)) && ((int)*puVar21 == (int)*puVar38))
          {
            puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
          }
          if ((puVar38 < (uint64_t *)((int64_t)puVar25 - 1U)) &&
             ((short)*puVar21 == (short)*puVar38)) {
            puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
            puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
          }
          if (puVar38 < puVar25) {
            puVar38 = (uint64_t *)
                      ((int64_t)puVar38 + (uint64_t)((char)*puVar21 == (char)*puVar38));
          }
          uVar44 = (int64_t)puVar38 - (int64_t)puVar31;
        }
        if ((uint64_t *)((int64_t)puVar36 + uVar44) == puVar33) {
          puVar31 = (uint64_t *)((int64_t)puVar31 + uVar44);
          puVar36 = puVar31;
          puVar33 = puVar4;
          if (puVar31 < puVar3) {
            if (*puVar4 == *puVar31) {
              lVar43 = 0;
LAB_7fffa5698b50:
              puVar36 = (uint64_t *)((int64_t)puStack_a0 + lVar43 + uVar44);
              if (puVar36 < puVar3) {
                if (*(uint64_t *)((int64_t)puVar30 + lVar43) == *puVar36)
                goto code_r0x7fffa5698b70;
                uVar22 = 0;
                for (uVar45 = *puVar36 ^ *(uint64_t *)((int64_t)puVar30 + lVar43);
                    (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x8000000000000000) {
                  uVar22 = uVar22 + 1;
                }
                uVar45 = (int64_t)puStack_128 +
                         (((uint64_t)(uVar22 >> 3) + lVar43 + uVar44) - (int64_t)puVar31);
                goto LAB_7fffa5698bc6;
              }
              puVar33 = (uint64_t *)(lVar43 + (int64_t)puVar30);
              goto LAB_7fffa5698b7b;
            }
            uVar22 = 0;
            for (uVar45 = *puVar31 ^ *puVar4; (uVar45 & 1) == 0;
                uVar45 = uVar45 >> 1 | 0x8000000000000000) {
              uVar22 = uVar22 + 1;
            }
            uVar45 = (uint64_t)(uVar22 >> 3);
          }
          else {
LAB_7fffa5698b7b:
            if ((puVar36 < puVar1) && ((int)*puVar33 == (int)*puVar36)) {
              puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
            }
            if ((puVar36 < puStack_b8) && ((short)*puVar33 == (short)*puVar36)) {
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
              puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
            }
            if (puVar36 < puVar5) {
              puVar36 = (uint64_t *)
                        ((int64_t)puVar36 + (uint64_t)((char)*puVar33 == (char)*puVar36));
            }
            uVar45 = (int64_t)puVar36 - (int64_t)puVar31;
          }
LAB_7fffa5698bc6:
          uVar44 = uVar44 + uVar45;
        }
        bVar12 = uVar44 < 0xfffffffffffffffc;
        if ((uVar28 * 0x40000000 | uVar28 * -0x69f4876 >> 3) < uVar32 + 0xcb2a9c19) {
          bVar12 = -5 < (int64_t)uVar44;
        }
        if (bVar12) {
          uVar22 = 0x1f;
          uStack_180._0_4_ = (uint32_t)uStack_e0;
          if ((uint32_t)uStack_180 != 0) {
            for (; (uint32_t)uStack_180 >> uVar22 == 0; uVar22 = uVar22 - 1) {
            }
          }
          if ((int)((uVar22 ^ 0x1f) + (int)uStack_160 * 3 + -0x1e) < (int)(uVar44 + 4) * 3) {
            uStack_180 = 1;
            puStack_150 = puVar23;
            uStack_160 = uVar44 + 4;
          }
        }
      }
      else {
      }
      uVar22 = 0x27ed8376 - uVar32 ^ 0x7ffe03c0;
      uStack_e0 = 999999999;
      bVar12 = uVar9 < 5;
      if ((uVar22 << 0x15 | uVar22 >> 0xb) < 0x2fbd0a0e) {
        bVar12 = uVar24 < (uint16_t)(0x2800 << (bVar14 & 0xf) | 0x2800U >> 0x10 - (bVar14 & 0xf));
      }
      if (bVar12) {
        puVar27 = puVar27 + -0x1319d4a2;
        uVar45 = (param_1 >> 1 | (uint64_t)((param_1 & 1) != 0) << 0x3f) ^
                 (param_1 << 0x23 | param_1 >> 0x1d) ^ param_1;
        uVar44 = (uint64_t)puVar27 >> 9 ^ ((int64_t)puVar27 * 4 | (uint64_t)puVar27 >> 0x3e) ^
                 (uint64_t)puVar27;
        if ((int64_t)(uint64_t)(0xf6e58a43 - uVar32) <=
            (int64_t)(int)((uVar32 + 0xe596a125) * -0x79c81e41)) {
          uVar44 = 0;
        }
        (*(code *)(&UNK_7fffa56b6cff + (int)(uVar32 + 0xb9c8825c)))
                  (0x763d5b0b,puVar5,&uStack_e0,(uVar44 & 0xffffffff) * 0xc5def21d);
        uVar44 = uVar45 << 0xf ^ uVar45;
        uVar44 = (uVar44 << 0x2b) + (uVar44 << 0x1e ^ uVar45 << 0x3c ^ uVar44);
      }
      else if (uVar9 < 6) {
        uVar22 = uVar28 * 0x2b3978 + 0x43a97019;
        lVar43 = 0x38028426;
        (*(code *)(&UNK_7fffa4d129f3 +
                  (int)(((0x9d0a136d - uVar32) * 0x2000000 | 0x9d0a136d - uVar32 >> 7) ^ 0xcf52bc41)
                  ))(((int64_t)puVar5 - ((int64_t)puVar5 << 0x28) ^
                     (int64_t)puVar5 * -0x7fffffffff800000) * -3,0x38028426,param_1,
                     ((uint64_t)puVar23 & 0xffffffff) * (uint64_t)uVar22 +
                     ((uint64_t)(uint32_t)((int)uVar22 >> 0x1f) * ((uint64_t)puVar23 & 0xffffffff) +
                      ((uint64_t)puVar23 >> 0x20) * (uint64_t)uVar22 << 0x20));
        uVar44 = lVar43 * 0x3fffffff80000001;
      }
      else {
        uStack_a8 = 0x6f820967;
        uStack_b0 = 0x7fffa52d45e3;
        uStack_d0 = (uint64_t)~(uVar32 ^ 0xbbbf81c2);
        uVar44 = param_1 << 0x3e ^ param_1;
        lVar43 = ((int64_t)puVar23 * 0x800000 ^ (uint64_t)puVar23) * 0x8001;
        lStack_c8 = 0x35cd56b4;
        uStack_d8 = (uint64_t)(0x7261922c - uVar32);
        uVar45 = (*(code *)((int64_t)
                            (short)((0xb455U >> (bVar14 & 0xf) | -0x4bab << 0x10 - (bVar14 & 0xf)) +
                                   0x334b) + 0x7fffa52d45e3))
                           ((param_1 << 0x1f | uVar44 >> 0x21) ^ (param_1 << 2 | uVar44 >> 0x3e) ^
                            uVar44,uVar20 - 0x80123b43aad ^ 0xffffffff2282be95,lVar43,
                            uVar41 < uVar47 ^ param_1,lVar43);
        uVar45 = (uVar45 << 0x24 | uVar45 >> 0x1c) ^ (uVar45 << 0x35 | uVar45 >> 0xb) ^ uVar45;
        uVar37 = uVar45 << 0x2a | uVar45 >> 0x16;
        uVar44 = uVar37 ^ uVar45;
        if ((uVar32 ^ 0xc308a04a) * 0x1c540393 != -0x7009c233) {
          uVar44 = uVar45 + uVar37;
        }
        uVar44 = uVar44 ^ (uVar45 << 8 | uVar45 >> 0x38);
        uVar44 = (uVar44 << 0x10 | uVar44 >> 0x30) ^ (uVar44 << 0x14 | uVar44 >> 0x2c) ^ uVar44;
        uVar44 = (uVar44 << 0x28 | uVar44 >> 0x18) ^ (uVar44 << 0x20 | uVar44 >> 0x20) ^ uVar44;
        uVar37 = uVar44 << 0x10 | uVar44 >> 0x30;
        uVar46 = ~uVar44;
        uVar34 = ~uVar37;
        uVar45 = uVar34;
        if (lStack_c8 <= (int64_t)(uint64_t)(0x7261922c - uVar32)) {
          uVar45 = uVar37 + 1;
        }
        uVar44 = (uVar46 & uVar34) * (uVar20 ^ 0xffffffff0f8e0d40) +
                 (uVar37 & uVar46) * ((uVar20 | 1) * -0x746dcfcaab9cb112 + -0x7ffe02f0) +
                 (uVar44 & uVar34) * -0xb64707ea + (uVar45 | uVar46) * 0xb64707eb ^ uVar44;
        uVar44 = uVar44 << 0x20 | uVar44 >> 0x20;
      }
      if (uVar44 < 4) goto LAB_7fffa5698cbd;
      uVar22 = 0x1f;
      if ((uint32_t)uStack_180 != 0) {
        for (; (uint32_t)uStack_180 >> uVar22 == 0; uVar22 = uVar22 - 1) {
        }
      }
      iVar19 = 0x1f;
      if ((uint32_t)uStack_e0 != 0) {
        for (; (uint32_t)uStack_e0 >> iVar19 == 0; iVar19 = iVar19 + -1) {
        }
      }
      if ((int)uVar44 * 4 - iVar19 <= (int)((uVar22 ^ 0x1f) + (int)uStack_160 * 4 + -0x1b))
      goto LAB_7fffa5698cbd;
      uStack_160 = uVar44;
      if (puVar29 <= puVar23) goto LAB_7fffa5698cb2;
      puStack_a0 = (uint64_t *)((int64_t)puStack_a0 + 1);
      lStack_168 = lStack_168 + 1;
      puStack_128 = (uint64_t *)((int64_t)puStack_128 + 1);
      puVar27 = puVar23;
      puStack_150 = puVar23;
    } while( true );
  }
  uVar41 = (int64_t)puVar27 - (int64_t)param_4;
  puVar27 = (uint64_t *)((int64_t)puVar27 + (uVar41 >> 8) + 1);
  *(uint32_t *)(param_1 + 300) = (uint32_t)(0x7ff < uVar41);
  goto LAB_7fffa5697b17;
code_r0x7fffa5697c2b:
  lVar43 = lVar43 + 8;
  goto LAB_7fffa5697c10;
code_r0x7fffa5697d48:
  puVar23 = puVar23 + 1;
  lVar43 = lVar43 + 8;
  if (puVar3 <= puVar23) goto LAB_7fffa5697d57;
  goto LAB_7fffa5697d30;
code_r0x7fffa5698b70:
  lVar43 = lVar43 + 8;
  goto LAB_7fffa5698b50;
LAB_7fffa5698cb2:
  uStack_180 = uStack_e0;
  puStack_150 = puVar23;
LAB_7fffa5698cbd:
  if (3 < uStack_180) {
    uVar41 = (int64_t)puStack_150 + (-uStack_180 - lVar11) + -0xfffffffd;
    puVar27 = puVar4;
    lVar43 = lVar11;
    if ((uint32_t)uVar41 < uVar40) {
      puVar27 = puVar42;
      lVar43 = uVar10 - uVar18;
    }
    if (param_4 < puStack_150) {
      uVar41 = uVar41 & 0xffffffff;
      if (puVar27 < (uint64_t *)(lVar43 + uVar41)) {
        puVar23 = (uint64_t *)(lVar43 + uVar41);
        while( true ) {
          puVar23 = (uint64_t *)((int64_t)puVar23 + -1);
          puVar36 = (uint64_t *)((int64_t)puStack_150 + -1);
          if (*(char *)puVar36 != *(char *)puVar23) break;
          uStack_160 = uStack_160 + 1;
          puStack_150 = puVar36;
          if ((puVar36 <= param_4) || (puVar23 <= puVar27)) break;
        }
      }
    }
    iStack_1f4 = iStack_13c;
    iStack_13c = (int)uStack_180 + -3;
  }
  puVar27 = (uint64_t *)param_2[3];
  uVar41 = (int64_t)puStack_150 - (int64_t)param_4;
  if (puVar2 < puStack_150) {
    puVar23 = puVar27;
    if (param_4 <= puVar2) {
      uVar47 = param_4[1];
      *puVar27 = *param_4;
      puVar27[1] = uVar47;
      puVar23 = (uint64_t *)((int64_t)puVar27 + ((int64_t)puVar2 - (int64_t)param_4));
      if ((int64_t)
          (uint64_t)(uint16_t)((sVar13 + 0x1babU) * 0x100 | (uint16_t)(sVar13 + 0x1babU) >> 8) <=
          (int64_t)puVar2 - (int64_t)param_4) {
        lVar43 = 0x10;
        while( true ) {
          uVar15 = ((uint64_t *)((int64_t)param_4 + lVar43))[1];
          *(uint64_t *)((int64_t)puVar27 + lVar43) = *(uint64_t *)((int64_t)param_4 + lVar43);
          ((uint64_t *)((int64_t)puVar27 + lVar43))[1] = uVar15;
          puVar7 = (uint64_t *)((int64_t)param_4 + lVar43 + 0x10);
          uVar15 = puVar7[1];
          puVar8 = (uint64_t *)((int64_t)puVar27 + lVar43 + 0x10);
          *puVar8 = *puVar7;
          puVar8[1] = uVar15;
          if (puVar23 <= (uint64_t *)((int64_t)puVar27 + lVar43 + 0x20)) break;
          lVar43 = lVar43 + 0x20;
        }
      }
      param_4 = puVar2;
    }
    if (param_4 < puStack_150) {
      uVar47 = (int64_t)puStack_150 - (int64_t)param_4;
      puVar27 = puVar23;
      if ((3 < uVar47) &&
         ((uint64_t)(0x10000 << (bVar14 & 0x1f) | 0x10000U >> 0x20 - (bVar14 & 0x1f)) <=
          (uint64_t)((int64_t)puVar23 - (int64_t)param_4))) {
        if (uVar47 < 0x20) {
          uVar44 = 0;
        }
        else {
          uVar44 = uVar47 & 0xffffffffffffffe0;
          lVar43 = 0;
          while( true ) {
            uVar15 = ((uint64_t *)((int64_t)param_4 + lVar43))[1];
            puVar7 = (uint64_t *)((int64_t)param_4 + lVar43 + 0x10);
            uVar16 = *puVar7;
            uVar17 = puVar7[1];
            *(uint64_t *)((int64_t)puVar23 + lVar43) =
                 *(uint64_t *)((int64_t)param_4 + lVar43);
            ((uint64_t *)((int64_t)puVar23 + lVar43))[1] = uVar15;
            puVar7 = (uint64_t *)((int64_t)puVar23 + lVar43 + 0x10);
            *puVar7 = uVar16;
            puVar7[1] = uVar17;
            if (uVar44 - 0x20 == lVar43) break;
            lVar43 = lVar43 + 0x20;
          }
          if (uVar47 == uVar44) goto LAB_7fffa56990a0;
          if ((uVar47 & 0x1c) == 0) {
            param_4 = (uint64_t *)((int64_t)param_4 + uVar44);
            puVar27 = (uint64_t *)((int64_t)puVar23 + uVar44);
            goto LAB_7fffa5698fbf;
          }
        }
        uVar45 = uVar47 & 0xfffffffffffffffc;
        puVar27 = (uint64_t *)((int64_t)puVar23 + uVar45);
        for (; *(uint32_t *)((int64_t)puVar23 + uVar44) =
                    *(uint32_t *)((int64_t)param_4 + uVar44), uVar45 - 4 != uVar44;
            uVar44 = uVar44 + 4) {
        }
        if (uVar47 == uVar45) goto LAB_7fffa56990a0;
        param_4 = (uint64_t *)((int64_t)param_4 + uVar45);
      }
LAB_7fffa5698fbf:
      uVar22 = (int)puStack_150 - (int)param_4 & 7;
      uVar47 = (uint64_t)uVar22;
      puVar36 = puVar27;
      puVar23 = param_4;
      if (uVar22 == 0) {
        puVar31 = param_4;
      }
      else {
        do {
          uVar47 = uVar47 - 1;
          puVar27 = (uint64_t *)((int64_t)puVar36 + 1);
          *(char *)puVar36 = (char)*puVar23;
          puVar31 = (uint64_t *)((int64_t)puVar23 + 1);
          puVar36 = puVar27;
          puVar23 = (uint64_t *)((int64_t)puVar23 + 1);
        } while (uVar47 != 0);
      }
      uVar39 = -0x39 << (bVar14 & 0xf) | 0xffc7U >> 0x10 - (bVar14 & 0xf);
      if ((uint64_t)((int64_t)param_4 - (int64_t)puStack_150) <=
          (uint64_t)(int64_t)(short)(uVar39 << 8 | uVar39 >> 8)) {
        while( true ) {
          *(char *)puVar27 = (char)*puVar31;
          *(uint8_t *)((int64_t)puVar27 + 1) = *(uint8_t *)((int64_t)puVar31 + 1);
          *(uint8_t *)((int64_t)puVar27 + 2) = *(uint8_t *)((int64_t)puVar31 + 2);
          *(uint8_t *)((int64_t)puVar27 + 3) = *(uint8_t *)((int64_t)puVar31 + 3);
          *(uint8_t *)((int64_t)puVar27 + 4) = *(uint8_t *)((int64_t)puVar31 + 4);
          *(uint8_t *)((int64_t)puVar27 + 5) = *(uint8_t *)((int64_t)puVar31 + 5);
          *(uint8_t *)((int64_t)puVar27 + 6) = *(uint8_t *)((int64_t)puVar31 + 6);
          *(uint8_t *)((int64_t)puVar27 + 7) = *(uint8_t *)((int64_t)puVar31 + 7);
          if (puVar31 + 1 == puStack_150) break;
          puVar27 = puVar27 + 1;
          puVar31 = puVar31 + 1;
        }
      }
    }
  }
  else {
    uVar47 = param_4[1];
    *puVar27 = *param_4;
    puVar27[1] = uVar47;
    if (uVar41 <= (uVar32 ^ 0x478da125) * -0x1f469b89) {
      param_2[3] = param_2[3] + uVar41;
      lVar43 = param_2[1];
      goto LAB_7fffa56990d5;
    }
    uVar47 = param_4[3];
    lVar43 = param_2[3];
    *(uint64_t *)(lVar43 + 0x10) = param_4[2];
    *(uint64_t *)(lVar43 + 0x18) = uVar47;
    if (0x20 < (int64_t)uVar41) {
      lVar35 = 0;
      do {
        puVar8 = (uint64_t *)((int64_t)param_4 + lVar35 + 0x20);
        uVar15 = puVar8[1];
        puVar7 = (uint64_t *)(lVar43 + 0x20 + lVar35);
        *puVar7 = *puVar8;
        puVar7[1] = uVar15;
        puVar7 = (uint64_t *)((int64_t)param_4 + lVar35 + 0x30);
        uVar15 = puVar7[1];
        puVar8 = (uint64_t *)(lVar43 + 0x30 + lVar35);
        *puVar8 = *puVar7;
        puVar8[1] = uVar15;
        lVar6 = lVar43 + 0x20 + lVar35;
        lVar35 = lVar35 + 0x20;
      } while (lVar6 + 0x20U < lVar43 + uVar41);
    }
  }
LAB_7fffa56990a0:
  param_2[3] = param_2[3] + uVar41;
  lVar43 = param_2[1];
  if (0xffff < uVar41) {
    *(uint32_t *)(param_2 + 9) = 1;
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar43 - *param_2) >> 3);
  }
LAB_7fffa56990d5:
  *(short *)(lVar43 + 4) = (short)uVar41;
  *(int *)param_2[1] = (int)uStack_180;
  if (0xffff < uStack_160 - 3) {
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
    *(uint32_t *)(param_2 + 9) = 2;
  }
  *(short *)(param_2[1] + 6) = (short)(uStack_160 - 3);
  param_2[1] = param_2[1] + 8;
  if (*(int *)(param_1 + 300) != 0) {
    *(uint32_t *)(param_1 + 300) = 0;
  }
  param_4 = (uint64_t *)((int64_t)puStack_150 + uStack_160);
  if (puVar29 < param_4) {
    puVar27 = param_4;
  }
  else {
    do {
      iVar19 = iStack_1f4;
      uVar22 = ((int)param_4 - iVar49) - iVar19;
      lVar43 = lVar11;
      if (uVar22 < uVar40) {
        lVar43 = uVar10 - uVar18;
      }
      bVar12 = -4 < (int)(uVar22 - uVar40);
      if ((uint64_t)(uVar32 + 0xb10d1451) < 0xffffffff94a8d91b) {
        bVar12 = uVar22 - uVar40 < 0xfffffffd;
      }
      if ((!bVar12) || (piVar48 = (int *)(lVar43 + (uint64_t)uVar22), *piVar48 != (int)*param_4)) {
        puVar27 = param_4;
        iStack_1f4 = iVar19;
        break;
      }
      puVar36 = (uint64_t *)(piVar48 + 1);
      puVar27 = (uint64_t *)((int64_t)param_4 + 4);
      puVar23 = puVar5;
      if (uVar22 < uVar40) {
        puVar23 = puStack_c0;
      }
      puVar31 = (uint64_t *)((int64_t)param_4 + (int64_t)puVar23 + (4 - (int64_t)puVar36));
      if (puVar5 <= puVar31) {
        puVar31 = puVar5;
      }
      puVar25 = puVar36;
      puVar33 = puVar27;
      if (puVar27 < (uint64_t *)((int64_t)puVar31 - 7U)) {
        if (*puVar36 == *puVar27) {
          puVar33 = (uint64_t *)((int64_t)param_4 + 0xc);
          piVar48 = (int *)((int64_t)param_4 + 4);
          puVar25 = (uint64_t *)(lVar43 + (uint64_t)uVar22 + 0xc);
          do {
            if ((uint64_t *)((int64_t)puVar31 - 7U) <= puVar33) goto LAB_7fffa5699345;
            uVar41 = *puVar33;
            uVar47 = *puVar25;
            puVar33 = puVar33 + 1;
            piVar48 = piVar48 + 2;
            puVar25 = puVar25 + 1;
          } while (uVar47 == uVar41);
          uVar22 = 0;
          for (uVar41 = uVar41 ^ uVar47; (uVar41 & 1) == 0;
              uVar41 = uVar41 >> 1 | 0x8000000000000000) {
            uVar22 = uVar22 + 1;
          }
          uVar41 = (int64_t)piVar48 + ((uint64_t)(uVar22 >> 3) - (int64_t)puVar27);
        }
        else {
          uVar22 = 0;
          for (uVar41 = *puVar36 ^ *puVar27; (uVar41 & 1) == 0;
              uVar41 = uVar41 >> 1 | 0x8000000000000000) {
            uVar22 = uVar22 + 1;
          }
          uVar41 = (uint64_t)(uVar22 >> 3);
        }
      }
      else {
LAB_7fffa5699345:
        if ((puVar33 < (uint64_t *)((int64_t)puVar31 - 3U)) && ((int)*puVar25 == (int)*puVar33)) {
          puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
          puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
        }
        if ((puVar33 < (uint64_t *)((int64_t)puVar31 - 1U)) &&
           ((short)*puVar25 == (short)*puVar33)) {
          puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
          puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
        }
        if (puVar33 < puVar31) {
          puVar33 = (uint64_t *)((int64_t)puVar33 + (uint64_t)((char)*puVar25 == (char)*puVar33))
          ;
        }
        uVar41 = (int64_t)puVar33 - (int64_t)puVar27;
      }
      if ((uint64_t *)((int64_t)puVar36 + uVar41) == puVar23) {
        puVar27 = (uint64_t *)((int64_t)puVar27 + uVar41);
        puVar23 = puVar27;
        puVar36 = puVar4;
        if (puVar27 < puVar3) {
          if (*puVar4 == *puVar27) {
            puVar23 = (uint64_t *)((int64_t)param_4 + uVar41 + 0xc);
            lVar43 = (int64_t)param_4 + uVar41 + 4;
            puVar36 = puVar30;
            do {
              if (puVar3 <= puVar23) goto LAB_7fffa5699543;
              uVar47 = *puVar23;
              uVar44 = *puVar36;
              puVar23 = puVar23 + 1;
              lVar43 = lVar43 + 8;
              puVar36 = puVar36 + 1;
            } while (uVar44 == uVar47);
            uVar22 = 0;
            for (uVar44 = uVar44 ^ uVar47; (uVar44 & 1) == 0;
                uVar44 = uVar44 >> 1 | 0x8000000000000000) {
              uVar22 = uVar22 + 1;
            }
            uVar47 = ((uint64_t)(uVar22 >> 3) + lVar43) - (int64_t)puVar27;
          }
          else {
            uVar22 = 0;
            for (uVar47 = *puVar4 ^ *puVar27; (uVar47 & 1) == 0;
                uVar47 = uVar47 >> 1 | 0x8000000000000000) {
              uVar22 = uVar22 + 1;
            }
            uVar47 = (uint64_t)(uVar22 >> 3);
          }
        }
        else {
LAB_7fffa5699543:
          if ((puVar23 < puVar1) && ((int)*puVar36 == (int)*puVar23)) {
            puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
            puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
          }
          if ((puVar23 < puStack_b8) && ((short)*puVar36 == (short)*puVar23)) {
            puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
            puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
          }
          if (puVar23 < puVar5) {
            puVar23 = (uint64_t *)
                      ((int64_t)puVar23 + (uint64_t)((char)*puVar36 == (char)*puVar23));
          }
          uVar47 = (int64_t)puVar23 - (int64_t)puVar27;
        }
        uVar41 = uVar41 + uVar47;
      }
      if (param_4 <= puVar2) {
        puVar27 = (uint64_t *)param_2[3];
        uVar47 = param_4[1];
        *puVar27 = *param_4;
        puVar27[1] = uVar47;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar41 + 1) {
        *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
        *(uint32_t *)(param_2 + 9) = 2;
      }
      *(short *)(param_2[1] + 6) = (short)(uVar41 + 1);
      param_2[1] = param_2[1] + 8;
      param_4 = (uint64_t *)((int64_t)param_4 + uVar41 + 4);
      puVar27 = param_4;
      iStack_1f4 = iStack_13c;
      iStack_13c = iVar19;
    } while (param_4 <= puVar29);
  }
LAB_7fffa5697b17:
  if (puVar29 <= puVar27) goto LAB_7fffa56995d4;
  goto LAB_7fffa5697b2a;
}


// ============================================================================
// Function : FUN_7fffa5699634  |  RVA: 0xf29634  |  Size: 264 bytes
// Callers  : FUN_7fffa560e038@0xe9e038
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5699634(void)

{
  uint8_t *pbVar1;
  int64_t lVar2;
  uint32_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint32_t uVar7;
  int64_t lVar8;
  
  uVar7 = 0;
  lVar8 = 0;
  do {
    uVar5 = (uint64_t)(uVar7 & 0x3f);
    lVar2 = *(int64_t *)(&DAT_7fffa4782180 + ((int64_t)(int)uVar7 >> 6) * 8);
    if (*(int64_t *)(lVar2 + 0x28 + uVar5 * 0x48) + 2U < 2) {
      *(uint8_t *)(lVar2 + 0x38 + uVar5 * 0x48) = 0x81;
      if (uVar7 == 0) {
        uVar6 = 0xfffffff6;
      }
      else if (uVar7 == 1) {
        uVar6 = 0xfffffff5;
      }
      else {
        uVar6 = 0xfffffff4;
      }
      lVar4 = (*(code *)&DAT_7ff84ea3fa30)(uVar6);
      if (1 < lVar4 + 1U) {
        uVar3 = (*(code *)&DAT_7ff84ea57530)(lVar4);
        if (uVar3 != 0) {
          *(int64_t *)(lVar2 + 0x28 + uVar5 * 0x48) = lVar4;
          if ((uVar3 & 0xff) == 2) {
            pbVar1 = (uint8_t *)(lVar2 + 0x38 + uVar5 * 0x48);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else if ((uVar3 & 0xff) == 3) {
            pbVar1 = (uint8_t *)(lVar2 + 0x38 + uVar5 * 0x48);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_7fffa5699712;
        }
      }
      pbVar1 = (uint8_t *)(lVar2 + 0x38 + uVar5 * 0x48);
      *pbVar1 = *pbVar1 | 0x40;
      *(uint64_t *)(lVar2 + 0x28 + uVar5 * 0x48) = 0xfffffffffffffffe;
      if (_DAT_7fffa4781c18 != 0) {
        *(uint32_t *)(*(int64_t *)(lVar8 + _DAT_7fffa4781c18) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pbVar1 = (uint8_t *)(lVar2 + 0x38 + uVar5 * 0x48);
      *pbVar1 = *pbVar1 | 0x80;
    }
LAB_7fffa5699712:
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 8;
    if (uVar7 == 3) {
      return;
    }
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa569973c  |  RVA: 0xf2973c  |  Size: 1 bytes
// Callers  : FUN_7fffa53eebb0@0xc7ebb0
// Callees  : none
// ============================================================================
void FUN_7fffa569973c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5699750  |  RVA: 0xf29750  |  Size: 3123 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5699750(void) {
    /* +0xf29750 */ __asm { PUSH RSI }
    /* +0xf29751 */ __asm { PUSH RBP }
    /* +0xf29752 */ __asm { PUSH R12 }
    /* +0xf29754 */ __asm { PUSH R14 }
    /* +0xf29756 */ __asm { PUSH RBX }
    /* +0xf29757 */ __asm { PUSH R15 }
    /* +0xf29759 */ __asm { PUSH RDI }
    /* +0xf2975a */ __asm { PUSH R13 }
    /* +0xf2975c */ __asm { SUB RSP,0xa8 }
    /* +0xf29763 */ __asm { MOV RSI,R8 }
    /* +0xf29766 */ __asm { MOV R8,R9 }
    /* +0xf29769 */ __asm { MOV dword ptr [RSP + 0x94],EAX }
    /* +0xf29770 */ __asm { MOV RBX,RCX }
    /* +0xf29773 */ __asm { MOV RBP,qword ptr [RSP + 0x118] }
    /* +0xf2977b */ __asm { MOV R9,-0x7f40d721 }
    /* +0xf29782 */ __asm { SUB R9,RDX }
    /* +0xf29785 */ __asm { MOV RAX,R9 }
    /* +0xf29788 */ __asm { ROL RAX,0x32 }
    /* +0xf2978c */ __asm { MOV RDX,R9 }
    /* +0xf2978f */ __asm { ROL RDX,0x21 }
    /* +0xf29793 */ __asm { XOR RDX,RAX }
    /* +0xf29796 */ __asm { XOR RDX,R9 }
    /* +0xf29799 */ __asm { MOV R9,RDX }
    /* +0xf2979c */ __asm { ROL R9,0x24 }
    /* +0xf297a0 */ __asm { MOV RAX,RDX }
    /* +0xf297a3 */ __asm { ROL RAX,0x2 }
    /* +0xf297a7 */ __asm { XOR RAX,R9 }
    /* +0xf297aa */ __asm { XOR RAX,RDX }
    /* +0xf297ad */ __asm { MOV R9,RAX }
    /* +0xf297b0 */ __asm { ROL R9,0x4 }
    /* +0xf297b4 */ __asm { MOV RDX,RAX }
    /* +0xf297b7 */ __asm { ROL RDX,0x8 }
    /* +0xf297bb */ __asm { XOR RDX,R9 }
    /* +0xf297be */ __asm { XOR RDX,RAX }
    /* +0xf297c1 */ __asm { MOV R9,RDX }
    /* +0xf297c4 */ __asm { ROL R9,0x8 }
    /* +0xf297c8 */ __asm { MOV R15,RDX }
    /* +0xf297cb */ __asm { ROL R15,0x10 }
    /* +0xf297cf */ __asm { XOR R15,R9 }
    /* +0xf297d2 */ __asm { XOR R15,RDX }
    /* +0xf297d5 */ __asm { MOV R13,R15 }
    /* +0xf297d8 */ __asm { ROL R13,0x10 }
    /* +0xf297dc */ __asm { MOVZX R14D,uint8_t ptr [RSP + 0x110] }
    /* +0xf297e5 */ __asm { MOV R12,R15 }
    /* +0xf297e8 */ __asm { ROL R12,0x20 }
    /* +0xf297ec */ __asm { MOV EDI,0x341f24c0 }
    /* +0xf297f1 */ __asm { ADD EDI,0xf1378e53 }
    /* +0xf297f7 */ __asm { XOR EDI,EBP }
    /* +0xf297f9 */ __asm { RDTSC }
    /* +0xf297fb */ __asm { SHL RDX,0x20 }
    /* +0xf297ff */ __asm { OR RDX,RAX }
    /* +0xf29802 */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xf2980c */ __asm { IMUL R9,RDX }
    /* +0xf29810 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xf2981a */ __asm { ADD RCX,R9 }
    /* +0xf2981d */ __asm { MOV RDX,RCX }
    /* +0xf29820 */ __asm { SHR RDX,0x1b }
    /* +0xf29824 */ __asm { MOV R9,RCX }
    /* +0xf29827 */ __asm { SHR R9,0x2d }
    /* +0xf2982b */ __asm { XOR R9D,EDX }
    /* +0xf2982e */ __asm { SHR RCX,0x3b }
    /* +0xf29832 */ __asm { ROR R9D,CL }
    /* +0xf29835 */ __asm { ADD R14B,0x69 }
    /* +0xf29839 */ __asm { AND R9D,0x3 }
    /* +0xf2983d */ __asm { XOR R12,R13 }
    /* +0xf29840 */ __asm { XOR R12,R15 }
    /* +0xf29843 */ __asm { ROL R12,0x20 }
    /* +0xf29847 */ __asm { CMP R9D,0x2 }
    /* +0xf2984b */ __asm { JNC 0x7fffa5699acc }
    /* +0xf29851 */ __asm { MOV DX,0x48cb }
    /* +0xf29855 */ __asm { ADD EDX,0xffffb73d }
    /* +0xf2985b */ __asm { MOV ECX,EBP }
    /* +0xf2985d */ __asm { ROL DX,CL }
    /* +0xf29860 */ __asm { MOV ECX,EDI }
    /* +0xf29862 */ __asm { ROR DX,CL }
    /* +0xf29865 */ __asm { MOVZX EDX,DX }
    /* +0xf29868 */ __asm { CMP R9D,EDX }
    /* +0xf2986b */ __asm { JNZ 0x7fffa5699cb5 }
    /* +0xf29871 */ __asm { MOV RAX,0x0 }
    /* +0xf29878 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xf2987f */ __asm { MOV EAX,0x50ef7f90 }
    /* +0xf29884 */ __asm { MOV R9,0x37d0efb7954d1b64 }
    /* +0xf2988e */ __asm { CMP RAX,R9 }
    /* +0xf29891 */ __asm { NOP }
    /* +0xf29892 */ __asm { NOP }
    /* +0xf29893 */ __asm { NOP }
    /* +0xf29894 */ __asm { NOP }
    /* +0xf29895 */ __asm { NOP }
    /* +0xf29896 */ __asm { NOP }
    /* +0xf29897 */ __asm { MOV RDX,0x0 }
    /* +0xf2989e */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xf298a5 */ __asm { CMP dword ptr [RAX + 0x2f0e8430],0xd }
    /* +0xf298ac */ __asm { JC 0x7fffa5699ec9 }
    /* +0xf298b2 */ __asm { RDTSC }
    /* +0xf298b4 */ __asm { SHL RDX,0x20 }
    /* +0xf298b8 */ __asm { OR RDX,RAX }
    /* +0xf298bb */ __asm { MOV R9,-0x583f2dd720db9bdb }
    /* +0xf298c5 */ __asm { IMUL R9,RDX }
    /* +0xf298c9 */ __asm { MOV RDX,-0x23e899f46ca8753e }
    /* +0xf298d3 */ __asm { ADD RDX,R9 }
    /* +0xf298d6 */ __asm { MOV R9,RDX }
    /* +0xf298d9 */ __asm { SHR R9,0x1b }
    /* +0xf298dd */ __asm { MOV RCX,RDX }
    /* +0xf298e0 */ __asm { SHR RCX,0x3b }
    /* +0xf298e4 */ __asm { SHR RDX,0x2d }
    /* +0xf298e8 */ __asm { XOR R9D,EDX }
    /* +0xf298eb */ __asm { ROR R9D,CL }
    /* +0xf298ee */ __asm { MOV dword ptr [RSP + 0x70],0xd13396f3 }
    /* +0xf298f6 */ __asm { MOV EDX,dword ptr [RSP + 0x70] }
    /* +0xf298fa */ __asm { CMP R9D,0x11501e4 }
    /* +0xf29901 */ __asm { JA 0x7fffa5699aa3 }
    /* +0xf29907 */ __asm { MOV qword ptr [RSP + 0x68],RBX }
    /* +0xf2990c */ __asm { MOV dword ptr [RSP + 0x70],0x1dd3ddda }
    /* +0xf29914 */ __asm { MOV R9D,dword ptr [RSP + 0x70] }
    /* +0xf29919 */ __asm { XORPS XMM0,XMM0 }
    /* +0xf2991c */ __asm { MOVAPS xmmword ptr [RSP + 0x70],XMM0 }
    /* +0xf29921 */ __asm { MOV dword ptr [RSP + 0xa0],0xff7fff4f }
    /* +0xf2992c */ __asm { MOV R9D,dword ptr [RSP + 0xa0] }
    /* +0xf29934 */ __asm { MOV dword ptr [RSP + 0x70],0x0 }
    /* +0xf2993c */ __asm { PUSHFQ }
    /* +0xf2993d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xf29945 */ __asm { POPFQ }
    /* +0xf29946 */ __asm { MOV dword ptr [RSP + 0xa0],0xca12ed08 }
    /* +0xf29951 */ __asm { MOV R9D,dword ptr [RSP + 0xa0] }
    /* +0xf29959 */ __asm { CMP R9D,0x7b982475 }
    /* +0xf29960 */ __asm { NOP }
    /* +0xf29961 */ __asm { NOP }
    /* +0xf29962 */ __asm { NOP }
    /* +0xf29963 */ __asm { NOP }
    /* +0xf29964 */ __asm { NOP }
    /* +0xf29965 */ __asm { NOP }
    /* +0xf29966 */ __asm { NOP }
    /* +0xf29967 */ __asm { MOV R9W,0xcdf7 }
    /* +0xf2996c */ __asm { SUB R9D,EDI }
    /* +0xf2996f */ __asm { IMUL R9D,R9D,0x4a5 }
    /* +0xf29976 */ __asm { XOR R9D,EBP }
    /* +0xf29979 */ __asm { ADD R9D,0x49dc }
    /* +0xf29980 */ __asm { MOVZX ECX,R9W }
    /* +0xf29984 */ __asm { MOV R15,qword ptr GS:[RCX] }
    /* +0xf29988 */ __asm { MOV R9,-0x410650291e4baa2 }
    /* +0xf29992 */ __asm { MOV EDX,0x770d9dd9 }
    /* +0xf29997 */ __asm { MOV RAX,-0x4879fe4e60c6ab6d }
    /* +0xf299a1 */ __asm { ADD RAX,0x9edf768 }
    /* +0xf299a7 */ __asm { XOR RAX,RDI }
    /* +0xf299aa */ __asm { MOV ECX,EBP }
    /* +0xf299ac */ __asm { ROL RAX,CL }
    /* +0xf299af */ __asm { XOR R9,RBP }
    /* +0xf299b2 */ __asm { MOV RCX,RDI }
    /* +0xf299b5 */ __asm { OR RCX,0x1 }
    /* +0xf299b9 */ __asm { ROL R9,0x14 }
    /* +0xf299bd */ __asm { IMUL R9,RCX }
    /* +0xf299c1 */ __asm { MOV RCX,qword ptr [R15 + 0x60] }
    /* +0xf299c5 */ __asm { MOV RBX,-0x40d3bb317acc8825 }
    /* +0xf299cf */ __asm { IMUL RBX,RCX }
    /* +0xf299d3 */ __asm { IMUL R15,RBX,-0xf360879 }
    /* +0xf299da */ __asm { ADD RBX,0xf360879 }
    /* +0xf299e1 */ __asm { ADD EDX,0x4b2dc2d1 }
    /* +0xf299e7 */ __asm { XOR EDX,0x84af45af }
    /* +0xf299ed */ __asm { MOV ECX,EBP }
    /* +0xf299ef */ __asm { ROR EDX,CL }
    /* +0xf299f1 */ __asm { ADD EDX,EDI }
    /* +0xf299f3 */ __asm { CMP RDX,0xca28642 }
    /* +0xf299fa */ __asm { CMOVZ RBX,R15 }
    /* +0xf299fe */ __asm { XOR RBX,0x5e8147e2 }
    /* +0xf29a05 */ __asm { IMUL RBX,R9 }
    /* +0xf29a09 */ __asm { CMP RAX,RBX }
    /* +0xf29a0c */ __asm { NOP }
    /* +0xf29a0d */ __asm { NOP }
    /* +0xf29a0e */ __asm { NOP }
    /* +0xf29a0f */ __asm { NOP }
    /* +0xf29a10 */ __asm { NOP }
    /* +0xf29a11 */ __asm { MOV RBX,R11 }
    /* +0xf29a14 */ __asm { MOV R15,R10 }
    /* +0xf29a17 */ __asm { MOV R13,R8 }
    /* +0xf29a1a */ __asm { LEA R10,[0x7fffa477cce2] }
    /* +0xf29a21 */ __asm { MOV R8,0x15bf165649e7d61a }
    /* +0xf29a2b */ __asm { CMP R10,R8 }
    /* +0xf29a2e */ __asm { JZ 0x7fffa569a566 }
    /* +0xf29a34 */ __asm { MOV R11W,0x7625 }
    /* +0xf29a39 */ __asm { MOV R9W,0x3869 }
    /* +0xf29a3e */ __asm { SUB R11D,EBP }
    /* +0xf29a41 */ __asm { MOV EDX,0x3891 }
    /* +0xf29a46 */ __asm { SUB EDX,R9D }
    /* +0xf29a49 */ __asm { MOV ECX,EDI }
    /* +0xf29a4b */ __asm { ROR R11W,CL }
    /* +0xf29a4f */ __asm { IMUL R11D,R11D,0x4549 }
    /* +0xf29a56 */ __asm { MOV ECX,EBP }
    /* +0xf29a58 */ __asm { ROL DX,CL }
    /* +0xf29a5b */ __asm { ADD R11D,0x1b86 }
    /* +0xf29a62 */ __asm { MOVZX EDX,DX }
    /* +0xf29a65 */ __asm { MOVZX R9D,R11W }
    /* +0xf29a69 */ __asm { MOV qword ptr [RSP + 0xa0],R8 }
    /* +0xf29a71 */ __asm { MOV EAX,dword ptr [R10 + 0x793a] }
    /* +0xf29a78 */ __asm { MOV R11D,0xd39222ee }
    /* +0xf29a7e */ __asm { NOT R11D }
    /* +0xf29a81 */ __asm { ADD R11D,EBP }
    /* +0xf29a84 */ __asm { IMUL R11D,R11D,-0x200b22a1 }
    /* +0xf29a8b */ __asm { MOVSXD R10,R11D }
    /* +0xf29a8e */ __asm { LEA R8,[RSP + 0x70] }
    /* +0xf29a93 */ __asm { SYSCALL }
    /* +0xf29a95 */ __asm { MOV R8,R13 }
    /* +0xf29a98 */ __asm { MOV R10,R15 }
    /* +0xf29a9b */ __asm { MOV R11,RBX }
    /* +0xf29a9e */ __asm { MOV RBX,qword ptr [RSP + 0x68] }
    /* +0xf29aa3 */ __asm { LEA RAX,[0x7fffa4782b3f] }
    /* +0xf29aaa */ __asm { MOV R9,0x63b825fec23db26a }
    /* +0xf29ab4 */ __asm { CMP RAX,R9 }
    /* +0xf29ab7 */ __asm { NOP }
    /* +0xf29ab8 */ __asm { NOP }
    /* +0xf29ab9 */ __asm { NOP }
    /* +0xf29aba */ __asm { NOP }
    /* +0xf29abb */ __asm { NOP }
    /* +0xf29abc */ __asm { MOV qword ptr [RSP + 0x70],RDX }
    /* +0xf29ac1 */ __asm { MOV EAX,dword ptr [RAX + 0x1ad1] }
    /* +0xf29ac7 */ __asm { JMP 0x7fffa569a4c5 }
    /* +0xf29acc */ __asm { RDTSC }
    /* +0xf29ace */ __asm { SHL RDX,0x20 }
    /* +0xf29ad2 */ __asm { OR RDX,RAX }
    /* +0xf29ad5 */ __asm { CMP R9D,0x3 }
    /* +0xf29ad9 */ __asm { JZ 0x7fffa5699d3a }
    /* +0xf29adf */ __asm { MOV R9,-0x83d143f70980d4b }
    /* +0xf29ae9 */ __asm { IMUL RDX,R9 }
    /* +0xf29aed */ __asm { MOV R9,-0x34d08ace3c8cbc26 }
    /* +0xf29af7 */ __asm { ADD R9,RDX }
    /* +0xf29afa */ __asm { MOV RDX,R9 }
    /* +0xf29afd */ __asm { SHR RDX,0x1b }
    /* +0xf29b01 */ __asm { MOV RCX,R9 }
    /* +0xf29b04 */ __asm { SHR RCX,0x3b }
    /* +0xf29b08 */ __asm { SHR R9,0x2d }
    /* +0xf29b0c */ __asm { XOR R9D,EDX }
    /* +0xf29b0f */ __asm { ROR R9D,CL }
    /* +0xf29b12 */ __asm { MOV dword ptr [RSP + 0x70],0xf2a0f2ee }
    /* +0xf29b1a */ __asm { MOV EDX,dword ptr [RSP + 0x70] }
    /* +0xf29b1e */ __asm { CMP R9D,0x4114c9 }
    /* +0xf29b25 */ __asm { JA 0x7fffa5699c74 }
    /* +0xf29b2b */ __asm { MOV R9D,EDI }
    /* +0xf29b2e */ __asm { OR R9D,0x1 }
    /* +0xf29b32 */ __asm { MOV EDX,0x5a0bf2bf }
    /* +0xf29b37 */ __asm { IMUL EDX,R9D }
    /* +0xf29b3b */ __asm { ROL EDX,0x1a }
    /* +0xf29b3e */ __asm { XOR EDX,0xf7d217c3 }
    /* +0xf29b44 */ __asm { PUSHFQ }
    /* +0xf29b45 */ __asm { POP RCX }
    /* +0xf29b46 */ __asm { AND ECX,0x100 }
    /* +0xf29b4c */ __asm { CMP ECX,EDX }
    /* +0xf29b4e */ __asm { NOP }
    /* +0xf29b4f */ __asm { NOP }
    /* +0xf29b50 */ __asm { NOP }
    /* +0xf29b51 */ __asm { NOP }
    /* +0xf29b52 */ __asm { NOP }
    /* +0xf29b53 */ __asm { MOV RAX,0x0 }
    /* +0xf29b5a */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xf29b61 */ __asm { MOV dword ptr [RSP + 0x70],0xb9f7ffdc }
    /* +0xf29b69 */ __asm { MOV R9D,dword ptr [RSP + 0x70] }
    /* +0xf29b6e */ __asm { CMP R9D,0x83cb9102 }
    /* +0xf29b75 */ __asm { JBE 0x7fffa569a52c }
    /* +0xf29b7b */ __asm { MOV qword ptr [RSP + 0x68],RBX }
    /* +0xf29b80 */ __asm { XORPS XMM0,XMM0 }
    /* +0xf29b83 */ __asm { MOVAPS xmmword ptr [RSP + 0x70],XMM0 }
    /* +0xf29b88 */ __asm { MOV dword ptr [RSP + 0xa0],0x1b066713 }
    /* +0xf29b93 */ __asm { MOV R9D,dword ptr [RSP + 0xa0] }
    /* +0xf29b9b */ __asm { MOV dword ptr [RSP + 0x70],0x0 }
    /* +0xf29ba3 */ __asm { MOV dword ptr [RSP + 0xa0],0xb8a65165 }
    /* +0xf29bae */ __asm { MOV R9D,dword ptr [RSP + 0xa0] }
    /* +0xf29bb6 */ __asm { PUSHFQ }
    /* +0xf29bb7 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xf29bbf */ __asm { POPFQ }
    /* +0xf29bc0 */ __asm { MOV R9D,0x21ccbfa0 }
    /* +0xf29bc6 */ __asm { XOR R9D,EBP }
    /* +0xf29bc9 */ __asm { ROL R9D,0xd }
    /* +0xf29bcd */ __asm { MOV ECX,EDI }
    /* +0xf29bcf */ __asm { ROL R9D,CL }
    /* +0xf29bd2 */ __asm { MOV dword ptr [RSP + 0xa0],R9D }
    /* +0xf29bda */ __asm { MOV R9D,dword ptr [RSP + 0xa0] }
    /* +0xf29be2 */ __asm { TEST R9D,R9D }
    /* +0xf29be5 */ __asm { JNS 0x7fffa569a53f }
    /* +0xf29beb */ __asm { MOV R15,R11 }
    /* +0xf29bee */ __asm { MOV R13,R10 }
    /* +0xf29bf1 */ __asm { MOV RBX,R8 }
    /* +0xf29bf4 */ __asm { LEA R10,[0x7fffa47c299e] }
    /* +0xf29bfb */ __asm { MOV R8,0x71bf5b2f8103927 }
    /* +0xf29c05 */ __asm { CMP R10,R8 }
    /* +0xf29c08 */ __asm { NOP }
    /* +0xf29c09 */ __asm { NOP }
    /* +0xf29c0a */ __asm { NOP }
    /* +0xf29c0b */ __asm { NOP }
    /* +0xf29c0c */ __asm { NOP }
    /* +0xf29c0d */ __asm { MOV R8W,0x6ea8 }
    /* +0xf29c12 */ __asm { MOV qword ptr [RSP + 0xa0],R11 }
    /* +0xf29c1a */ __asm { MOV EAX,dword ptr [R10 + -0x64d6] }
    /* +0xf29c21 */ __asm { MOV R11W,0x5873 }
    /* +0xf29c26 */ __asm { XOR R11D,EDI }
    /* +0xf29c29 */ __asm { IMUL R11D,R11D,0x3b }
    /* +0xf29c2d */ __asm { LEA R9D,[RDI + R8*0x1] }
    /* +0xf29c31 */ __asm { ADD R9D,0xffffba3d }
    /* +0xf29c38 */ __asm { MOV ECX,EBP }
    /* +0xf29c3a */ __asm { ROL R11W,CL }
    /* +0xf29c3e */ __asm { MOVZX EDX,R9W }
    /* +0xf29c42 */ __asm { MOVZX R9D,R11W }
    /* +0xf29c46 */ __asm { MOV R11W,0x36b9 }
    /* +0xf29c4b */ __asm { ADD R11D,EDI }
    /* +0xf29c4e */ __asm { MOV R10D,0xdfb }
    /* +0xf29c54 */ __asm { SUB R10D,R11D }
    /* +0xf29c57 */ __asm { ROL R10W,CL }
    /* +0xf29c5b */ __asm { MOVSX R10,R10W }
    /* +0xf29c5f */ __asm { LEA R8,[RSP + 0x70] }
    /* +0xf29c64 */ __asm { SYSCALL }
    /* +0xf29c66 */ __asm { MOV R8,RBX }
    /* +0xf29c69 */ __asm { MOV R10,R13 }
    /* +0xf29c6c */ __asm { MOV R11,R15 }
    /* +0xf29c6f */ __asm { MOV RBX,qword ptr [RSP + 0x68] }
    /* +0xf29c74 */ __asm { LEA RAX,[0x7fffa478a421] }
    /* +0xf29c7b */ __asm { MOV R9,-0x21f70b34807ca887 }
    /* +0xf29c85 */ __asm { CMP RAX,R9 }
    /* +0xf29c88 */ __asm { JZ 0x7fffa569a503 }
    /* +0xf29c8e */ __asm { OR EBP,0x1 }
    /* +0xf29c91 */ __asm { MOV R9D,0x3bddf5d1 }
    /* +0xf29c97 */ __asm { MOV qword ptr [RSP + 0x70],RDX }
    /* +0xf29c9c */ __asm { IMUL R9D,EBP }
    /* +0xf29ca0 */ __asm { MOV EDX,0x1df0cc4 }
    /* +0xf29ca5 */ __asm { SUB EDX,R9D }
    /* +0xf29ca8 */ __asm { MOVSXD R9,EDX }
    /* +0xf29cab */ __asm { MOV EAX,dword ptr [R9 + RAX*0x1 + 0x4c] }
    /* +0xf29cb0 */ __asm { JMP 0x7fffa569a4c5 }
    /* +0xf29cb5 */ __asm { MOV EAX,0xbee97b9b }
    /* +0xf29cba */ __asm { MOV RDX,0x0 }
    /* +0xf29cc1 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xf29cc8 */ __asm { MOV R9,-0x1b0f0024f446a0 }
    /* +0xf29cd2 */ __asm { CMP RAX,R9 }
    /* +0xf29cd5 */ __asm { JZ 0x7fffa569a50b }
    /* +0xf29cdb */ __asm { MOV R9,qword ptr [RAX + -0x3eeb7b93] }
    /* +0xf29ce2 */ __asm { MOV RDX,-0x2d5b62d38239f2ec }
    /* +0xf29cec */ __asm { MOV RAX,R9 }
    /* +0xf29cef */ __asm { MUL RDX }
    /* +0xf29cf2 */ __asm { MOV RCX,RDX }
    /* +0xf29cf5 */ __asm { MOV EDX,0x1474ddb }
    /* +0xf29cfa */ __asm { MOV RAX,R9 }
    /* +0xf29cfd */ __asm { MUL RDX }
    /* +0xf29d00 */ __asm { ADD RAX,RCX }
    /* +0xf29d03 */ __asm { ADC RDX,0x0 }
    /* +0xf29d07 */ __asm { TEST DL,0x1 }
    /* +0xf29d0a */ __asm { JZ 0x7fffa5699ef2 }
    /* +0xf29d10 */ __asm { LEA RAX,[0x7fffa47c2609] }
    /* +0xf29d17 */ __asm { MOV R9,0x375cb74dfb020db6 }
    /* +0xf29d21 */ __asm { CMP RAX,R9 }
    /* +0xf29d24 */ __asm { JZ 0x7fffa569a555 }
    /* +0xf29d2a */ __asm { MOV qword ptr [RSP + 0x70],RDX }
    /* +0xf29d2f */ __asm { MOV EAX,dword ptr [RAX + -0x6099] }
    /* +0xf29d35 */ __asm { JMP 0x7fffa569a4c5 }
    /* +0xf29d3a */ __asm { MOV RAX,-0x2ecbdabc217d106b }
    /* +0xf29d44 */ __asm { MOV R9,RDX }
    /* +0xf29d47 */ __asm { OR R9,RAX }
    /* +0xf29d4a */ __asm { MOV ECX,EBP }
    /* +0xf29d4c */ __asm { OR ECX,0x1 }
    /* +0xf29d4f */ __asm { MOV R15D,0xa41b678e }
    /* +0xf29d55 */ __asm { IMUL R15D,R15D,-0x3fffff73 }
    /* +0xf29d5c */ __asm { IMUL RDX,RAX }
    /* +0xf29d60 */ __asm { LEA EAX,[R15 + RBP*0x1] }
    /* +0xf29d64 */ __asm { ADD EAX,0x69ce7fc0 }
    /* +0xf29d69 */ __asm { XOR EAX,EDI }
    /* +0xf29d6b */ __asm { MOV R15D,0x77ef97b0 }
    /* +0xf29d71 */ __asm { ADD R15D,EDI }
    /* +0xf29d74 */ __asm { ROL R15D,0xa }
    /* +0xf29d78 */ __asm { IMUL R15D,ECX }
    /* +0xf29d7c */ __asm { CMP RAX,R15 }
    /* +0xf29d7f */ __asm { CMOVGE RDX,R9 }
    /* +0xf29d83 */ __asm { MOV RAX,0x73ee922795605a9e }
    /* +0xf29d8d */ __asm { ADD RAX,RDX }
    /* +0xf29d90 */ __asm { MOV R9,RAX }
    /* +0xf29d93 */ __asm { SHR R9,0x2d }
    /* +0xf29d97 */ __asm { MOV RCX,RAX }
    /* +0xf29d9a */ __asm { SHR RCX,0x3b }
    /* +0xf29d9e */ __asm { SHR RAX,0x1b }
    /* +0xf29da2 */ __asm { XOR R9D,EAX }
    /* +0xf29da5 */ __asm { ROR R9D,CL }
    /* +0xf29da8 */ __asm { MOV dword ptr [RSP + 0x70],0x3a6645e5 }
    /* +0xf29db0 */ __asm { MOV EDX,dword ptr [RSP + 0x70] }
    /* +0xf29db4 */ __asm { CMP EDX,0x34a9fdb }
    /* +0xf29dba */ __asm { JBE 0x7fffa569a513 }
    /* +0xf29dc0 */ __asm { CMP R9D,0x100935 }
    /* +0xf29dc7 */ __asm { JA 0x7fffa569a47e }
    /* +0xf29dcd */ __asm { MOV R9W,0x5af3 }
    /* +0xf29dd2 */ __asm { SUB R9D,EDI }
    /* +0xf29dd5 */ __asm { IMUL R9D,R9D,-0x1e67 }
    /* +0xf29ddc */ __asm { XOR R9D,EBP }
    /* +0xf29ddf */ __asm { MOVZX ECX,R9W }
    /* +0xf29de3 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xf29dea */ __asm { MOV RAX,0x0 }
    /* +0xf29df1 */ __asm { MOV R9,qword ptr GS:[RCX] }
    /* +0xf29df5 */ __asm { MOV EDX,EBP }
    /* +0xf29df7 */ __asm { SUB EDX,EDI }
    /* +0xf29df9 */ __asm { MOV R9,qword ptr [R9 + 0x18] }
    /* +0xf29dfd */ __asm { MOV CX,0x4be1 }
    /* +0xf29e01 */ __asm { IMUL ECX,ECX,0x7f83 }
    /* +0xf29e07 */ __asm { ADD ECX,EDX }
    /* +0xf29e09 */ __asm { MOVZX ECX,CX }
    /* +0xf29e0c */ __asm { MOV RAX,qword ptr GS:[RCX] }
    /* +0xf29e10 */ __asm { SUB R9,qword ptr [RAX + 0x60] }
    /* +0xf29e14 */ __asm { ROL R9,0x37 }
    /* +0xf29e18 */ __asm { ADD R9,0x23f27c81 }
    /* +0xf29e1f */ __asm { MOV RAX,-0x74326f9357ab5d01 }
    /* +0xf29e29 */ __asm { CMP R9,RAX }
    /* +0xf29e2c */ __asm { NOP }
    /* +0xf29e2d */ __asm { NOP }
    /* +0xf29e2e */ __asm { NOP }
    /* +0xf29e2f */ __asm { NOP }
    /* +0xf29e30 */ __asm { NOP }
    /* +0xf29e31 */ __asm { NOP }
    /* +0xf29e32 */ __asm { LEA RDX,[0x7fffa47c052f] }
    /* +0xf29e39 */ __asm { MOV R9,-0x3f90a20efc7e50ee }
    /* +0xf29e43 */ __asm { SUB R9,RDI }
    /* +0xf29e46 */ __asm { IMUL R9,R9,0x7b75a7a9 }
    /* +0xf29e4d */ __asm { SUB R9,RBP }
    /* +0xf29e50 */ __asm { ROL R9,0x3d }
    /* +0xf29e54 */ __asm { CMP RDX,R9 }
    /* +0xf29e57 */ __asm { JZ 0x7fffa569a55e }
    /* +0xf29e5d */ __asm { MOV EAX,EDI }
    /* +0xf29e5f */ __asm { OR EAX,0x1 }
    /* +0xf29e62 */ __asm { MOV ECX,0xe0c3c01e }
    /* +0xf29e67 */ __asm { IMUL ECX,EAX }
    /* +0xf29e6a */ __asm { MOV R9D,0x52d532d2 }
    /* +0xf29e70 */ __asm { XOR R9D,EBP }
    /* +0xf29e73 */ __asm { XOR R9D,EDI }
    /* +0xf29e76 */ __asm { ADD ECX,0xc2d0a094 }
    /* +0xf29e7c */ __asm { XOR ECX,EBP }
    /* +0xf29e7e */ __asm { NOT R9D }
    /* +0xf29e81 */ __asm { CMP RCX,R9 }
    /* +0xf29e84 */ __asm { MOV qword ptr [RSP + 0x68],RBX }
    /* +0xf29e89 */ __asm { JZ 0x7fffa569a243 }
    /* +0xf29e8f */ __asm { MOV R9D,0x72dd4535 }
    /* +0xf29e95 */ __asm { XOR R9D,EBP }
    /* +0xf29e98 */ __asm { NOT R9D }
    /* +0xf29e9b */ __asm { ROL R9D,0x14 }
    /* +0xf29e9f */ __asm { MOVZX R15D,uint8_t ptr [RDX + -0x3de6] }
    /* +0xf29ea7 */ __asm { LEA RCX,[RDX + R15*0x4] }
    /* +0xf29eab */ __asm { ADD RCX,-0x3de0 }
    /* +0xf29eb2 */ __asm { MOVZX EDX,uint8_t ptr [RDX + R15*0x4 + -0x3de0] }
    /* +0xf29ebb */ __asm { NOT DL }
    /* +0xf29ebd */ __asm { ROL DL,0x5 }
    /* +0xf29ec0 */ __asm { MOV uint8_t ptr [RSP + 0x70],DL }
    /* +0xf29ec4 */ __asm { JMP 0x7fffa569a27c }
    /* +0xf29ec9 */ __asm { LEA RAX,[0x7fffa47b915b] }
    /* +0xf29ed0 */ __asm { MOV R9,0x1b7e82f7a56de514 }
    /* +0xf29eda */ __asm { CMP RAX,R9 }
    /* +0xf29edd */ __asm { NOP }
    /* +0xf29ede */ __asm { NOP }
    /* +0xf29edf */ __asm { NOP }
    /* +0xf29ee0 */ __asm { NOP }
    /* +0xf29ee1 */ __asm { NOP }
    /* +0xf29ee2 */ __asm { MOV qword ptr [RSP + 0x70],RDX }
    /* +0xf29ee7 */ __asm { MOV EAX,dword ptr [RAX + 0x3e79] }
    /* +0xf29eed */ __asm { JMP 0x7fffa569a4c5 }
    /* +0xf29ef2 */ __asm { MOV R9W,0xf6ee }
    /* +0xf29ef7 */ __asm { XOR R9D,0xffffde03 }
    /* +0xf29efe */ __asm { ADD R9D,EDI }
    /* +0xf29f01 */ __asm { MOV ECX,EBP }
    /* +0xf29f03 */ __asm { ROL R9W,CL }
    /* +0xf29f07 */ __asm { MOVZX R9D,R9W }
    /* +0xf29f0b */ __asm { RDTSC }
    /* +0xf29f0d */ __asm { SHL RDX,0x20 }
    /* +0xf29f11 */ __asm { OR RDX,RAX }
    /* +0xf29f14 */ __asm { MOV RAX,-0x4a9b10dd1385131b }
    /* +0xf29f1e */ __asm { IMUL RAX,RDX }
    /* +0xf29f22 */ __asm { MOV RDX,-0xa127659d79dcf0a }
    /* +0xf29f2c */ __asm { ADD RDX,RAX }
    /* +0xf29f2f */ __asm { MOV RCX,RDX }
    /* +0xf29f32 */ __asm { SHR RCX,0x3b }
    /* +0xf29f36 */ __asm { MOV RAX,RDX }
    /* +0xf29f39 */ __asm { SHR RAX,0x2d }
    /* +0xf29f3d */ __asm { SHR RDX,0x1b }
    /* +0xf29f41 */ __asm { XOR EAX,EDX }
    /* +0xf29f43 */ __asm { ROR EAX,CL }
    /* +0xf29f45 */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0xf29f49 */ __asm { MOV R9D,0xab535b32 }
    /* +0xf29f4f */ __asm { XOR R9D,EDI }
    /* +0xf29f52 */ __asm { MOV ECX,EBP }
    /* +0xf29f54 */ __asm { ROR R9D,CL }
    /* +0xf29f57 */ __asm { MOV EDX,0x90a3934b }
    /* +0xf29f5c */ __asm { SUB EDX,R9D }
    /* +0xf29f5f */ __asm { CMP EAX,EDX }
    /* +0xf29f61 */ __asm { JNC 0x7fffa569a1f5 }
    /* +0xf29f67 */ __asm { MOV R9D,EBP }
    /* +0xf29f6a */ __asm { OR R9D,0x1 }
    /* +0xf29f6e */ __asm { MOV DX,0x7965 }
    /* +0xf29f72 */ __asm { IMUL EDX,R9D }
    /* +0xf29f76 */ __asm { ROL DX,0xa }
    /* +0xf29f7a */ __asm { SUB EDX,EDI }
    /* +0xf29f7c */ __asm { MOVZX ECX,DX }
    /* +0xf29f7f */ __asm { MOV R9,qword ptr GS:[RCX] }
    /* +0xf29f83 */ __asm { MOV RCX,RDI }
    /* +0xf29f86 */ __asm { SUB RCX,RBP }
    /* +0xf29f89 */ __asm { MOV R9,qword ptr [R9 + 0x60] }
    /* +0xf29f8d */ __asm { MOV RAX,-0x118358e474ce5a47 }
    /* +0xf29f97 */ __asm { MOV RAX,-0x869b002b3c3e16d }
    /* +0xf29fa1 */ __asm { XOR RAX,0x584da044 }
    /* +0xf29fa7 */ __asm { ADD RAX,RCX }
    /* +0xf29faa */ __asm { ADD RAX,0x2560ab7f }
    /* +0xf29fb0 */ __asm { CMP R9,RAX }
    /* +0xf29fb3 */ __asm { NOP }
    /* +0xf29fb4 */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa569a590  |  RVA: 0xf2a590  |  Size: 1347 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa569a731) */

void FUN_7fffa569a590(uint32_t param_1)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint16_t uVar5;
  uint8_t bVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t unaff_R12D;
  int iVar12;
  
  uVar9 = ~unaff_R12D | 0xfc8324ec;
  uVar11 = ~param_1;
  uVar11 = ((unaff_R12D | 0xfc8324ec) ^ param_1) * 0x2c13aa54 +
           (~(unaff_R12D | 0x37cdb13) & param_1) * 0x6270d4b4 +
           (uVar11 | unaff_R12D & 0x37cdb13) * -0x6224349c + (param_1 ^ uVar9) * -0x3b6af6b0 +
           (param_1 & 0xfc8324ec & unaff_R12D) * 0x2c13aa54 + (uVar9 & uVar11) * -0x2c13aa54 +
           (unaff_R12D & 0x37cdb13 & uVar11) * -0x677ea104 +
           (param_1 & (unaff_R12D ^ 0x37cdb13)) * 0x365d2a60 +
           (uVar11 & ~unaff_R12D & 0x37cdb13) * 0x2c13aa54;
  bVar2 = (uint8_t)uVar11;
  lVar7 = (int64_t)
          (int)(-0x5ead70ba - (0x5b7a1536 << (bVar2 & 0x1f) | 0x5b7a1536U >> 0x20 - (bVar2 & 0x1f)))
  ;
  *(uint8_t *)((int64_t)(short)(-0x1676 << (bVar2 & 0xf) | 0xe98aU >> 0x10 - (bVar2 & 0xf)) +
           0x7fffa47c1743) = (bVar2 ^ 0x4c) * -0x47;
  *(uint8_t (*) [16])(lVar7 + 0x7fffa47c9c7e) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar7 + 0x7fffa47c9c6e) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar7 + 0x7fffa47c9c5e) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar7 + 0x7fffa47c9c4e) = (uint8_t  [16])0x0;
  *(uint64_t *)
   ((int64_t)(int)~(~(uVar11 ^ 0x6277bd5b) << 0x1d | ~(uVar11 ^ 0x6277bd5b) >> 3) + 0x7fffa47cb36b)
       = (uint64_t)
         ((uint16_t)(0x3262 << (bVar2 & 0xf) | 0x3262U >> 0x10 - (bVar2 & 0xf)) + 0x64f5dcda & 0xffff)
  ;
  lVar7 = rdtsc();
  lVar7 = lVar7 * 0x25031b9d80863b7;
  uVar5 = (uint16_t)uVar11 | 1;
  uVar8 = 0;
  while( true ) {
    *(char *)(uVar8 + (int64_t)(short)~(uVar5 * 0x558b) + 0x7fffa47bd9ac) =
         (char)((uint64_t)(lVar7 * 0x932470cd1) >> 0x20);
    *(char *)(uVar8 + (int64_t)(int)(uVar11 ^ 0x6270674e) + 0x7fffa47c79db) =
         (char)((uint64_t)(lVar7 * 0x162946fc67) >> 0x20);
    *(char *)(uVar8 + ((int64_t)(int)((uVar11 ^ 0x384f7dac) * -0x64f5d6a3 + -0x62e2af01) ^
                      0x5959d960U) + 0x7fffa47cac9c) =
         (char)((uint64_t)(lVar7 * 0xb9d80863b7) >> 0x20);
    if ((~uVar8 << 0x2e | ~uVar8 >> 0x12) == 0xffe9ffffffffffff) break;
    lVar7 = lVar7 * 0x3595856bc09242a1;
    uVar1 = uVar8 * 4;
    *(char *)(uVar8 + (int64_t)
                      (int)(0xf05c9fffU >> (bVar2 & 0x1f) | -0xfa36001 << 0x20 - (bVar2 & 0x1f)) +
                      0x7fffa47cc015) = (char)((uint64_t)lVar7 >> 0x20);
    uVar8 = uVar8 + 4;
    if ((uint64_t)((uVar11 | 1) * -0x2154a1e4) == 0xffffffff92aa2635) {
      uVar8 = uVar1;
    }
  }
  uVar9 = (uint32_t)uVar8 | 1;
  iVar12 = (uVar11 ^ 0x9de683ac) + 0x9b0a295d;
  uVar10 = (uVar11 | 1) * -0x69c5e831 + 0x7017c1e4;
  bVar3 = (uint8_t)uVar8 & 0x1f;
  bVar4 = (uint8_t)uVar8 & 0xf;
  bVar2 = *(uint8_t *)((int64_t)(short)~(uVar5 * -0xd46 + (short)uVar8) + 0x7fffa47c0626);
  bVar6 = bVar2 | 1;
  if ((uVar10 << bVar3 | uVar10 >> 0x20 - bVar3) <
      (iVar12 * 0x20000000 | (uint32_t)(iVar12 * -0x5d39d20f) >> 3) * uVar9) {
    bVar6 = bVar2 + 1;
  }
  *(uint64_t *)
   ((int64_t)(int)(uVar9 * -0x3e2cc38c ^ uVar11) + 0x7fffa47c96c5 + (uint64_t)(bVar6 & 7) * 8) =
       0xffffffffffffffff;
  *(uint8_t *)((int64_t)(short)((uint16_t)uVar11 + (0x2e85U >> bVar4 | 0x2e85 << 0x10 - bVar4)) +
           0x7fffa47c1561) = bVar6 & 7;
  return;
}


// ============================================================================
// Function : FUN_7fffa569aae0  |  RVA: 0xf2aae0  |  Size: 1 bytes
// Callers  : FUN_7fffa55d63c0@0xe663c0
// Callees  : none
// ============================================================================
void FUN_7fffa569aae0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa569ab10  |  RVA: 0xf2ab10  |  Size: 608 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa569ac90) */

void FUN_7fffa569ab10(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  uRam00007fffa47bc9f8 = 0;
  uRam00007fffa47bca0d = 0;
  uRam00007fffa47bca15 = 0;
  uRam00007fffa47bc9fd = 0;
  uRam00007fffa47bca05 = 0;
  uRam00007fffa47bca1d = 0;
  uRam00007fffa47bca35 = 0;
  uVar1 = rdtsc();
  lVar3 = (uVar1 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar1)) * 0x89edddd62ba4328 + 0xb;
  lVar2 = -0x6769db0c;
  lVar5 = 0;
  while( true ) {
    lVar3 = lVar3 * 0x89edddd62ba4328 + 0xb;
    lVar4 = lVar3 * 0x89edddd62ba4328 + 0xb;
    lVar6 = lVar4 * 0x89edddd62ba4328 + 0xb;
    *(char *)(lVar5 + 0x7fffa47bc9ea) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar5 + 0x7fffa47bc9ec) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar5 + 0x7fffa47bc9eb) = (char)((uint64_t)lVar4 >> 0x20);
    if (lVar2 == -0x6769db5c) break;
    lVar3 = lVar6 * 0x89edddd62ba4328 + 0xb;
    *(char *)(lVar5 + 0x7fffa47bc9ed) = (char)((uint64_t)lVar3 >> 0x20);
    lVar5 = lVar5 + 4;
    lVar2 = lVar2 + -4;
  }
  uVar1 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(short)(-0x65be - (short)lVar5) + 0x7fffa47c3006) * 0x33333334
          + 0x33333334) * 5;
  *(uint64_t *)
   ((int64_t)(short)(0x26cd - ((short)lVar5 + 0x629a)) + 0x7fffa47c061a + (uVar1 >> 0x20) * 8) =
       0xffffffffffffffff;
  *(char *)((int64_t)(int)(((uint32_t)lVar5 ^ 0xccaa8f18) * -0x4ea8ec01) + 0x7fffa47cb940) =
       (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa569ad70  |  RVA: 0xf2ad70  |  Size: 281 bytes
// Callers  : FUN_7fffa55d6410@0xe66410
// Callees  : FUN_7fffa51817f8@0xa117f8, FUN_7fffa4ed9184@0x769184, FUN_7fffa5657488@0xee7488
// ============================================================================
uint32_t FUN_7fffa569ad70(short *param_1,int64_t param_2,uint64_t param_3,uint32_t param_4)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(uint8_t *)(param_2 + 0x28) = 0;
    }
    *(uint64_t *)(param_2 + 0x10) = 0;
    *(uint64_t *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_7fffa5657488(param_4,0,param_1,0xffffffff,0,0,0,0);
      if (iVar1 != 0) {
        if (*(uint64_t *)(param_2 + 0x18) < (uint64_t)(int64_t)iVar1) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            *(uint8_t *)(param_2 + 0x28) = 0;
          }
          goto LAB_7fffa569adc4;
        }
        iVar1 = FUN_7fffa5657488(param_4,0,param_1,0xffffffff,*(uint64_t *)(param_2 + 0x10),
                                 (int)*(uint64_t *)(param_2 + 0x18),0,0);
        if ((int64_t)iVar1 != 0) {
          *(int64_t *)(param_2 + 0x20) = (int64_t)iVar1 + -1;
          return 0;
        }
      }
      uVar2 = (*(code *)&DAT_7ff84ea18640)();
      FUN_7fffa51817f8(uVar2);
      puVar3 = (uint32_t *)FUN_7fffa4ed9184();
      return *puVar3;
    }
    if (*(int64_t *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(uint8_t *)(param_2 + 0x28) = 0;
      }
LAB_7fffa569adc4:
      puVar3 = (uint32_t *)FUN_7fffa4ed9184();
      *puVar3 = 0x22;
      *(uint8_t *)(param_2 + 0x28) = 0;
      *(uint64_t *)(param_2 + 0x18) = 0;
      return 0x22;
    }
    **(uint8_t **)(param_2 + 0x10) = 0;
  }
  *(uint64_t *)(param_2 + 0x20) = 0;
  return 0;
}


// ============================================================================
// Function : FUN_7fffa569ae90  |  RVA: 0xf2ae90  |  Size: 663 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa569ae90(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  bRam00007fffa47bb631 = 0;
  uRam00007fffa47bb645 = 0;
  uRam00007fffa47bb63d = 0;
  uRam00007fffa47bb654 = 0;
  uVar3 = rdtsc();
  lVar1 = (uVar3 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar3)) * 0x2bb3bc5ee299d76 + 0xb;
  uVar3 = 0;
  do {
    lVar2 = lVar1 * 0x2bb3bc5ee299d76 + 0xb;
    lVar1 = lVar2 * 0x2bb3bc5ee299d76 + 0xb;
    *(char *)(uVar3 + 0x7fffa47bb631) = (char)((uint64_t)lVar1 >> 0x20);
    *(char *)(uVar3 + 0x7fffa47bb630) = (char)((uint64_t)lVar2 >> 0x20);
    lVar1 = lVar1 * 0x2bb3bc5ee299d76 + 0xb;
    *(char *)(uVar3 + 0x7fffa47bb632) = (char)((uint64_t)lVar1 >> 0x20);
    lVar1 = lVar1 * 0x2bb3bc5ee299d76 + 0xb;
    *(char *)((uVar3 | 3) + 0x7fffa47bb630) = (char)((uint64_t)lVar1 >> 0x20);
    uVar3 = uVar3 + 4;
  } while (uVar3 != 0x28);
  uVar3 = ((uint64_t)bRam00007fffa47bb631 * 0x55555556 + 0x55555556 & 0xffffffff) * 3;
  *(uint32_t *)((uVar3 >> 0x20) * 4 + 0x7fffa47bb63d) = uRam00007fffa47bb654 ^ 0xf42e1872;
  bRam00007fffa47bb631 = (char)(uVar3 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa569b130  |  RVA: 0xf2b130  |  Size: 250 bytes
// Callers  : none
// Callees  : FUN_7fffa569b2e8@0xf2b2e8, FUN_7fffa5151ef0@0x9e1ef0, FUN_7fffa4f40a50@0x7d0a50, FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184, FUN_7fffa5002dcc@0x892dcc, FUN_7fffa56266a0@0xeb66a0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa569b130(uint16_t *param_1,uint16_t *param_2,int64_t param_3,int64_t *param_4)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint32_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint32_t uVar6;
  int64_t lStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  char cStack_20;
  
  if ((param_1 == (uint16_t *)0x0) || (param_2 == (uint16_t *)0x0)) {
    puVar3 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar3 = 0x16;
    FUN_7fffa55c8ce0();
    return 0x7fffffff;
  }
  if (param_3 == 0) {
    return 0;
  }
  cStack_20 = '\0';
  if (param_4 == (int64_t *)0x0) {
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
    uStack_30 = *param_4;
    uStack_28 = param_4[1];
  }
  lVar5 = uStack_30;
  if (*(int64_t *)(uStack_30 + 0x138) == 0) {
    FUN_7fffa5151ef0(param_1,param_2,param_3);
    uVar4 = FUN_7fffa569b2e8();
    return uVar4;
  }
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    if (uVar1 < 0x100) {
      uVar4 = (uint64_t)(uint8_t)uVar1;
      if (((&UNK_7fffa56b4832)[uVar4 * 2] & 1) != 0) {
        uVar4 = (uint64_t)*(uint8_t *)(uVar4 + *(int64_t *)(lVar5 + 0x110));
      }
      uVar1 = (uint16_t)uVar4;
    }
    else {
      uVar1 = FUN_7fffa4eca6f8(uVar1,&uStack_30);
      lVar5 = uStack_30;
    }
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    if (uVar2 < 0x100) {
      uVar4 = (uint64_t)(uint8_t)uVar2;
      if (((&UNK_7fffa56b4832)[uVar4 * 2] & 1) != 0) {
        uVar4 = (uint64_t)*(uint8_t *)(uVar4 + *(int64_t *)(lVar5 + 0x110));
      }
      uVar2 = (uint16_t)uVar4;
    }
    else {
      uVar2 = FUN_7fffa4eca6f8(uVar2,&uStack_30);
      lVar5 = uStack_30;
    }
    uVar6 = (uint32_t)uVar1 - (uint32_t)uVar2;
  } while (((uVar6 == 0) && (uVar1 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  if (cStack_20 != '\0') {
    *(uint32_t *)(lStack_38 + 0x3a8) = *(uint32_t *)(lStack_38 + 0x3a8) & 0xfffffffd;
  }
  return (uint64_t)uVar6;
}


// ============================================================================
// Function : FUN_7fffa569b22a  |  RVA: 0xf2b22a  |  Size: 190 bytes
// Callers  : none
// Callees  : FUN_7fffa4eca6f8@0x75a6f8
// ============================================================================
int FUN_7fffa569b22a(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                    int64_t param_5,uint64_t param_6,char param_7)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint64_t uVar3;
  uint16_t *unaff_RBX;
  int64_t unaff_RBP;
  int iVar4;
  uint16_t *unaff_R14;
  int64_t lStackX_20;
  
  do {
    uVar1 = *unaff_RBX;
    unaff_RBX = unaff_RBX + 1;
    if (uVar1 < 0x100) {
      uVar3 = (uint64_t)(uint8_t)uVar1;
      if (((&UNK_7fffa56b4832)[uVar3 * 2] & 1) != 0) {
        uVar3 = (uint64_t)*(uint8_t *)(uVar3 + *(int64_t *)(param_2 + 0x110));
      }
      uVar1 = (uint16_t)uVar3;
    }
    else {
      uVar1 = FUN_7fffa4eca6f8(uVar1,&param_5);
      param_2 = param_5;
    }
    uVar2 = *unaff_R14;
    unaff_R14 = unaff_R14 + 1;
    if (uVar2 < 0x100) {
      uVar3 = (uint64_t)(uint8_t)uVar2;
      if (((&UNK_7fffa56b4832)[uVar3 * 2] & 1) != 0) {
        uVar3 = (uint64_t)*(uint8_t *)(uVar3 + *(int64_t *)(param_2 + 0x110));
      }
      uVar2 = (uint16_t)uVar3;
    }
    else {
      uVar2 = FUN_7fffa4eca6f8(uVar2,&param_5);
      param_2 = param_5;
    }
    iVar4 = (uint32_t)uVar1 - (uint32_t)uVar2;
  } while (((iVar4 == 0) && (uVar1 != 0)) && (unaff_RBP = unaff_RBP + -1, unaff_RBP != 0));
  if (param_7 != '\0') {
    *(uint32_t *)(lStackX_20 + 0x3a8) = *(uint32_t *)(lStackX_20 + 0x3a8) & 0xfffffffd;
  }
  return iVar4;
}


// ============================================================================
// Function : FUN_7fffa569b2e8  |  RVA: 0xf2b2e8  |  Size: 35 bytes
// Callers  : FUN_7fffa569b130@0xf2b130
// Callees  : none
// ============================================================================
uint32_t FUN_7fffa569b2e8(void)

{
  uint32_t unaff_EDI;
  int64_t lStackX_20;
  char in_stack_00000038;
  
  if (in_stack_00000038 != '\0') {
    *(uint32_t *)(lStackX_20 + 0x3a8) = *(uint32_t *)(lStackX_20 + 0x3a8) & 0xfffffffd;
  }
  return unaff_EDI;
}


// ============================================================================
// Function : FUN_7fffa569b30c  |  RVA: 0xf2b30c  |  Size: 1 bytes
// Callers  : FUN_7fffa4ee8dac@0x778dac
// Callees  : none
// ============================================================================
void FUN_7fffa569b30c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa569b330  |  RVA: 0xf2b330  |  Size: 687 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa569b330(void) {
    /* +0xf2b330 */ __asm { PUSH RBP }
    /* +0xf2b331 */ __asm { PUSH RDI }
    /* +0xf2b332 */ __asm { PUSH R12 }
    /* +0xf2b334 */ __asm { PUSH RBX }
    /* +0xf2b335 */ __asm { SUB RSP,0x38 }
    /* +0xf2b339 */ __asm { MOV RDI,RAX }
    /* +0xf2b33c */ __asm { MOV EAX,0x63af3f66 }
    /* +0xf2b341 */ __asm { LEA R10,[0x7fffa478ef63] }
    /* +0xf2b348 */ __asm { LEA RDX,[0x7fffa55bc01b] }
    /* +0xf2b34f */ __asm { MOV R11D,0x49f77172 }
    /* +0xf2b355 */ __asm { IMUL R11D,R11D,-0x194afe5d }
    /* +0xf2b35c */ __asm { XOR R11D,EDI }
    /* +0xf2b35f */ __asm { MOVSXD R8,R11D }
    /* +0xf2b362 */ __asm { SUB EAX,EDI }
    /* +0xf2b364 */ __asm { ROL EAX,0xf }
    /* +0xf2b367 */ __asm { ADD R8,RDX }
    /* +0xf2b36a */ __asm { IMUL EAX,EAX,0x66a03817 }
    /* +0xf2b370 */ __asm { MOVSXD RCX,EAX }
    /* +0xf2b373 */ __asm { ADD RCX,R10 }
    /* +0xf2b376 */ __asm { CALL R8 }
    /* +0xf2b379 */ __asm { TEST EAX,EAX }
    /* +0xf2b37b */ __asm { JNZ 0x7fffa569b545 }
    /* +0xf2b381 */ __asm { MOV EAX,0x516ff70b }
    /* +0xf2b386 */ __asm { ADD EAX,0x6028f8d0 }
    /* +0xf2b38b */ __asm { LEA R10,[0x7fffa478a220] }
    /* +0xf2b392 */ __asm { XOR EAX,EDI }
    /* +0xf2b394 */ __asm { CDQE }
    /* +0xf2b396 */ __asm { MOV ECX,dword ptr [R10 + RAX*0x1 + 0x4c] }
    /* +0xf2b39b */ __asm { MOV EAX,ECX }
    /* +0xf2b39d */ __asm { ROL EAX,0xf }
    /* +0xf2b3a0 */ __asm { IMUL EAX,EAX,-0xa51f0c1 }
    /* +0xf2b3a6 */ __asm { ADD EAX,0xca55000f }
    /* +0xf2b3ab */ __asm { CMP EAX,0x50d730d0 }
    /* +0xf2b3b0 */ __asm { JZ 0x7fffa569b578 }
    /* +0xf2b3b6 */ __asm { MOV R10W,0x7998 }
    /* +0xf2b3bb */ __asm { LEA RDX,[0x7fffa4788773] }
    /* +0xf2b3c2 */ __asm { MOV EAX,EDI }
    /* +0xf2b3c4 */ __asm { OR EAX,0x1 }
    /* +0xf2b3c7 */ __asm { MOV R9,0x0 }
    /* +0xf2b3ce */ __asm { NOP }
    /* +0xf2b3cf */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xf2b3d6 */ __asm { MOV R11D,0x99ef5f89 }
    /* +0xf2b3dc */ __asm { ADD R11D,0x3c460ecd }
    /* +0xf2b3e3 */ __asm { IMUL R11D,EAX }
    /* +0xf2b3e7 */ __asm { ROL R11D,0x8 }
    /* +0xf2b3eb */ __asm { LEA R8,[0x7fffa478e9cc] }
    /* +0xf2b3f2 */ __asm { XOR ECX,ECX }
    /* +0xf2b3f4 */ __asm { MOVSXD R9,R11D }
    /* +0xf2b3f7 */ __asm { MOV R11D,dword ptr [R8 + R9*0x1 + 0x98] }
    /* +0xf2b3ff */ __asm { DEC R11D }
    /* +0xf2b402 */ __asm { MOV EBX,EDI }
    /* +0xf2b404 */ __asm { OR EBX,0x1 }
    /* +0xf2b407 */ __asm { IMUL ECX,EBX }
    /* +0xf2b40a */ __asm { ROL CX,0x9 }
    /* +0xf2b40e */ __asm { ADD R10D,0xffff890e }
    /* +0xf2b415 */ __asm { XOR R10D,EDI }
    /* +0xf2b418 */ __asm { MOVSX R10,R10W }
    /* +0xf2b41c */ __asm { MOV dword ptr [RDX + R10*0x1 + 0x98],R11D }
    /* +0xf2b424 */ __asm { MOVZX R10D,CX }
    /* +0xf2b428 */ __asm { CMP R11D,R10D }
    /* +0xf2b42b */ __asm { JNZ 0x7fffa569b4e5 }
    /* +0xf2b431 */ __asm { LEA RBP,[0x7fffa522bd0c] }
    /* +0xf2b438 */ __asm { MOV AX,0xcd52 }
    /* +0xf2b43c */ __asm { MOV R11D,0xad3716c }
    /* +0xf2b442 */ __asm { ADD EAX,0x709b }
    /* +0xf2b447 */ __asm { IMUL EBX,EAX }
    /* +0xf2b44a */ __asm { MOV EAX,0xb503cfb5 }
    /* +0xf2b44f */ __asm { XOR EAX,EDI }
    /* +0xf2b451 */ __asm { ADD EAX,0x49b3298 }
    /* +0xf2b456 */ __asm { MOVSXD R10,EAX }
    /* +0xf2b459 */ __asm { MOV EAX,0xad2a821 }
    /* +0xf2b45e */ __asm { SUB EAX,R11D }
    /* +0xf2b461 */ __asm { LEA RDX,[0x7fffa478d553] }
    /* +0xf2b468 */ __asm { LEA R12,[0x7fffa4787b2b] }
    /* +0xf2b46f */ __asm { MOV R11W,0xae11 }
    /* +0xf2b474 */ __asm { ADD R11D,0x51ef }
    /* +0xf2b47b */ __asm { MOV ECX,EDI }
    /* +0xf2b47d */ __asm { ROR R11W,CL }
    /* +0xf2b481 */ __asm { LEA R8,[0x7fffa52e1212] }
    /* +0xf2b488 */ __asm { MOV R9D,0x11a77fa7 }
    /* +0xf2b48e */ __asm { ADD R9D,0xdd762058 }
    /* +0xf2b495 */ __asm { ROL R9D,CL }
    /* +0xf2b498 */ __asm { ADD R8,R10 }
    /* +0xf2b49b */ __asm { MOVZX R10D,R11W }
    /* +0xf2b49f */ __asm { MOVSXD R9,R9D }
    /* +0xf2b4a2 */ __asm { CDQE }
    /* +0xf2b4a4 */ __asm { MOV dword ptr [RDX + RAX*0x1 + 0x9c],R10D }
    /* +0xf2b4ac */ __asm { LEA RCX,[0x7fffa478931c] }
    /* +0xf2b4b3 */ __asm { ADD RCX,R9 }
    /* +0xf2b4b6 */ __asm { CALL R8 }
    /* +0xf2b4b9 */ __asm { MOV AX,0xdb5f }
    /* +0xf2b4bd */ __asm { XOR EAX,0xffffd204 }
    /* +0xf2b4c2 */ __asm { IMUL R10D,EAX,0x1905 }
    /* +0xf2b4c9 */ __asm { XOR R10D,EDI }
    /* +0xf2b4cc */ __asm { MOVSX RAX,R10W }
    /* +0xf2b4d0 */ __asm { ADD RAX,RBP }
    /* +0xf2b4d3 */ __asm { ROL BX,0x2 }
    /* +0xf2b4d7 */ __asm { MOVSX R10,BX }
    /* +0xf2b4db */ __asm { LEA RCX,[R12 + R10*0x1] }
    /* +0xf2b4df */ __asm { ADD RCX,0x50 }
    /* +0xf2b4e3 */ __asm { JMP 0x7fffa569b528 }
    /* +0xf2b4e5 */ __asm { LEA R10,[0x7fffa4784151] }
    /* +0xf2b4ec */ __asm { MOV R11W,0xa87a }
    /* +0xf2b4f1 */ __asm { ADD R11D,0x1c7 }
    /* +0xf2b4f8 */ __asm { LEA RDX,[0x7fffa52e6ebf] }
    /* +0xf2b4ff */ __asm { MOV R8D,0x318649ec }
    /* +0xf2b505 */ __asm { MOV ECX,EDI }
    /* +0xf2b507 */ __asm { ROR R11W,CL }
    /* +0xf2b50b */ __asm { IMUL EAX,R8D }
    /* +0xf2b50f */ __asm { NOT R11D }
    /* +0xf2b512 */ __asm { MOVSX RCX,R11W }
    /* +0xf2b516 */ __asm { ADD RCX,R10 }
    /* +0xf2b519 */ __asm { ADD EAX,0xb3016829 }
    /* +0xf2b51e */ __asm { XOR EAX,0x7e98b55c }
    /* +0xf2b523 */ __asm { CDQE }
    /* +0xf2b525 */ __asm { ADD RAX,RDX }
    /* +0xf2b528 */ __asm { CALL RAX }
    /* +0xf2b52a */ __asm { MOV R9,0x0 }
    /* +0xf2b531 */ __asm { NOP }
    /* +0xf2b533 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xf2b53a */ __asm { NOP }
    /* +0xf2b53b */ __asm { ADD RSP,0x38 }
    /* +0xf2b53f */ __asm { POP RBX }
    /* +0xf2b540 */ __asm { POP R12 }
    /* +0xf2b542 */ __asm { POP RDI }
    /* +0xf2b543 */ __asm { POP RBP }
    /* +0xf2b544 */ __asm { RET }
    /* +0xf2b545 */ __asm { MOV AX,0x9485 }
    /* +0xf2b549 */ __asm { LEA R10,[0x7fffa5249fe7] }
    /* +0xf2b550 */ __asm { IMUL R11D,EAX,-0x678d }
    /* +0xf2b557 */ __asm { MOV ECX,EDI }
    /* +0xf2b559 */ __asm { ROL R11W,CL }
    /* +0xf2b55d */ __asm { ADD R11D,0x300c }
    /* +0xf2b564 */ __asm { MOVSX RAX,R11W }
    /* +0xf2b568 */ __asm { ADD RAX,R10 }
    /* +0xf2b56b */ __asm { MOV ECX,0x5 }
    /* +0xf2b570 */ __asm { CALL RAX }
    /* +0xf2b572 */ __asm { NOP }
    /* +0xf2b573 */ __asm { JMP 0x7fffa5693bf1 }
    /* +0xf2b578 */ __asm { MOV EAX,0xffe2da5e }
    /* +0xf2b57d */ __asm { ADD EAX,EDI }
    /* +0xf2b57f */ __asm { MOV R10D,ECX }
    /* +0xf2b582 */ __asm { OR R10D,0x1 }
    /* +0xf2b586 */ __asm { IMUL R10D,EAX }
    /* +0xf2b58a */ __asm { LEA RAX,[0x7fffa524d52e] }
    /* +0xf2b591 */ __asm { MOV R11D,0x2475c7cd }
    /* +0xf2b597 */ __asm { MOV EDX,0x953f8b75 }
    /* +0xf2b59c */ __asm { SUB EDX,EDI }
    /* +0xf2b59e */ __asm { ROL EDX,CL }
    /* +0xf2b5a0 */ __asm { ADD R10D,0xce49c5fa }
    /* +0xf2b5a7 */ __asm { MOVSXD R10,R10D }
    /* +0xf2b5aa */ __asm { ADD EDX,0x5c93fd5d }
    /* +0xf2b5b0 */ __asm { LEA R8,[0x7fffa478a69f] }
    /* +0xf2b5b7 */ __asm { MOV dword ptr [R8 + R10*0x1 + 0x4c],EDX }
    /* +0xf2b5bc */ __asm { XOR R11D,0x44163718 }
    /* +0xf2b5c3 */ __asm { ADD R11D,0xd1350e1d }
    /* +0xf2b5ca */ __asm { XOR R11D,EDI }
    /* +0xf2b5cd */ __asm { SUB R11D,ECX }
    /* +0xf2b5d0 */ __asm { MOVSXD R10,R11D }
    /* +0xf2b5d3 */ __asm { ADD R10,RAX }
    /* +0xf2b5d6 */ __asm { MOV ECX,0x6 }
    /* +0xf2b5db */ __asm { CALL R10 }
    /* +0xf2b5de */ __asm { INT3 }
}


// ============================================================================
// Function : FUN_7fffa569dec0  |  RVA: 0xf2dec0  |  Size: 1182 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa569dec0(uint64_t param_1,int64_t param_2,uint32_t param_3,uint64_t *param_4)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t bVar7;
  uint8_t bVar8;
  uint32_t uVar9;
  uint8_t auVar10 [16];
  uint8_t bVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t in_R10;
  uint32_t uVar19;
  int64_t lVar20;
  uint8_t *puVar21;
  float fVar22;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t *puStack_a0;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint8_t *puStack_70;
  int64_t lStack_68;
  uint64_t *puStack_60;
  
  uVar17 = *(uint64_t *)((int64_t)(short)(((uint16_t)param_3 | 1) * -0x2617) + 0x7fffa4783fa1);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar17;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar17;
  auVar10._8_8_ = 1;
  auVar10._0_8_ = 0x4325c53ef368eb0;
  uVar14 = in_R10 * 0x5977ecef5d828e4b;
  fVar22 = (float)FUN_7fffa5102fa0((float)(SUB168(auVar4 * auVar10,8) +
                                           (uint64_t)
                                           CARRY8(SUB168(auVar4 * ZEXT816(0x4325c53ef368eb0),0),
                                                  SUB168(auVar3 * ZEXT816(0x4325c53ef368eb05),8)) +
                                          1) / 0.875);
  uVar18 = (int64_t)(fVar22 - 9.223372e+18) & (int64_t)fVar22 >> 0x3f | (int64_t)fVar22;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar18;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar18;
  uVar13 = SUB168(auVar6 * ZEXT816(0x1111111111111111),8) +
           (uint64_t)
           CARRY8(SUB168(auVar6 * ZEXT816(0x1111111111111111),0),
                  SUB168(auVar5 * ZEXT816(0x1111111111111112),8));
  uVar17 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> uVar17 == 0; uVar17 = uVar17 - 1) {
    }
  }
  uStack_80 = 0x3f;
  if (0x1d < uVar18) {
    uStack_80 = uVar17 ^ 0x3f;
  }
  bVar8 = (uint8_t)uStack_80;
  lVar16 = 1L << (-bVar8 & 0x3f);
  uStack_78 = lVar16 - 1;
  lStack_68 = 0;
  if (uVar18 == 0) {
    lVar15 = 0;
    puVar21 = &UNK_7fffa56ee720;
  }
  else {
    bVar11 = 0x40 - bVar8;
    lVar20 = 0x78L << (bVar11 & 0x3f);
    uVar17 = (uint64_t)param_3;
    bVar7 = (uint8_t)param_3 & 0x1f;
    (*(code *)((int64_t)(int)(-0x14c95 << bVar7 | 0xfffeb36bU >> 0x20 - bVar7) + 0x7fffa52750fb))
              (uVar17,((0x88L << (bVar11 & 0x3f)) + 0xeU & 0xfffffffffffffff8) << 0xe,
               (param_3 | 1) * 0x7a413ff2);
    lVar15 = (uVar17 << 0x2c | uVar17 >> 0x14) - ((uVar17 >> 0x14) << 0x36);
    puVar21 = (uint8_t *)
              ((uint64_t)(-((int)lVar20 + -8 + (int)lVar15) & 0xf) + lVar15 + lVar20 + -8);
    lStack_68 = lVar15;
    FUN_7fffa4ecf8e0(puVar21,0,0x10L << (bVar11 & 0x3f));
    puVar21[lVar16 * 0x10 + -2] = 1;
  }
  uVar17 = uVar14 >> (bVar8 & 0x3f);
  puStack_a0 = puVar21 + uVar17 * 0x10;
  *param_4 = 0;
  pcVar1 = puVar21 + uVar17 * 0x10;
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
  *(uint32_t *)(param_4 + 1) = 0;
  param_4[2] = 0;
  uVar19 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar23 >> 7,0) & 1) |
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
  if (uVar19 == 0) {
    lVar16 = 1;
    do {
      puStack_a0[0xf] = puStack_a0[0xf] | '\x01' << ((uint8_t)uVar14 & 7);
      uVar17 = uVar17 + lVar16 & uStack_78;
      puStack_a0 = puVar21 + uVar17 * 0x10;
      pcVar1 = puVar21 + uVar17 * 0x10;
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
      lVar16 = lVar16 + 1;
    } while (uVar19 == 0);
    lVar15 = lStack_68;
  }
  else {
  }
  lVar15 = uVar17 * 0x78 + lVar15;
  uVar13 = (int64_t)&uStack_80 * 0x70f4d129 + 0x5857dc464cfe2385;
  uVar17 = (uint64_t)param_3;
  uVar9 = 0;
  for (; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
    uVar9 = uVar9 + 1;
  }
  uVar18 = (uint64_t)uVar9;
  lVar16 = (int64_t)(short)(-0x5b87208e - param_3);
  bVar8 = (uint8_t)param_3 & 0x1f;
  puStack_70 = puVar21;
  puStack_60 = param_4;
  (*(code *)((int64_t)(short)(-0x4a6d - (uint16_t)param_3) + 0x7fffa526f89c))
            (uVar17,lVar16,-0x5b87208e - param_3,0x7a413ff2);
  plVar12 = (int64_t *)((uVar17 << 0x2c | uVar17 >> 0x14) - ((uVar17 >> 0x14) << 0x36));
  *(int64_t **)(lVar15 + uVar18 * 8) = plVar12;
  *plVar12 = param_2 * -0xfff000fff000fff;
  *(uint8_t (*) [16])(plVar12 + 5) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(plVar12 + 3) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(plVar12 + 1) = (uint8_t  [16])0x0;
  plVar12[7] = 0;
  uVar2 = (&UNK_7fffa583bf68)[(uVar14 & 0xff) * 4 + (int64_t)(int)(param_3 + 0x3d734c39)];
  puStack_a0[uVar18] = uVar2;
  *puStack_60 = puStack_a0;
  *(uint32_t *)(puStack_60 + 1) = uVar9;
  puStack_60[2] = lVar15 + uVar18 * 8;
  FUN_7fffa55f6140(uVar2,0x9f9cc90f,puStack_a0,
                   (uVar13 >> 6 | 0x1400000000000000) ^ (uVar13 * 0x8000000 | uVar13 >> 0x25) ^
                   uVar13);
  *(int64_t *)((int64_t)(int)~(0x18d8e << bVar8 | 0x18d8eU >> 0x20 - bVar8) + 0x7fffa478dc00) =
       *(int64_t *)(lVar16 + 0x7fffa4783945) + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa569f785  |  RVA: 0xf2f785  |  Size: 25 bytes
// Callers  : none
// Callees  : FUN_7fffa565700c@0xee700c
// ============================================================================
void FUN_7fffa569f785(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa565700c(**(uint32_t **)(param_2 + 0x48));
  return;
}


// ============================================================================
// Function : FUN_7fffa569f7a0  |  RVA: 0xf2f7a0  |  Size: 237 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa569f7a0(int param_1,uint64_t param_2,uint32_t param_3,int64_t param_4)

{
  char cVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  int64_t in_R10;
  int in_R11D;
  
  uVar2 = param_1 * -0x55555555;
  uVar2 = (param_1 * -0x54000000 | uVar2 >> 6) ^ (param_1 * 0x60000000 | uVar2 >> 3) ^ uVar2;
  uVar2 = (uVar2 << 0x14 | uVar2 >> 0xc) ^ (uVar2 << 0x1a | uVar2 >> 6) ^ uVar2;
  uVar2 = (uVar2 << 8 | uVar2 >> 0x18) ^ (uVar2 << 0x14 | uVar2 >> 0xc) ^ uVar2;
  if ((*(uint8_t *)(in_R10 + 8) & 0x28) != 0) {
    *(uint64_t *)(in_R10 + 0x1e0 + (uint64_t)param_3 * 8) = 0;
  }
  uVar3 = param_4 - (uint64_t)(in_R11D + 0x9f98eb18) ^ 0xccc191f;
  cVar1 = ((uint8_t)uVar2 ^ (uint8_t)(uVar2 >> 8) ^ (uint8_t)(uVar2 >> 0x10)) * -3;
  if (cVar1 < (char)(-0x3d - (char)in_R11D)) {
    if (cVar1 == '\x01') {
      *(char *)(in_R10 + 0x1e0 + (uint64_t)param_3 * 8) = (char)uVar3;
      goto LAB_7fffa569f86b;
    }
  }
  else if (cVar1 < '\x04') {
    if (cVar1 == '\x02') {
      *(short *)(in_R10 + 0x1e0 + (uint64_t)param_3 * 8) = (short)uVar3;
      goto LAB_7fffa569f86b;
    }
  }
  else if (cVar1 == '\x04') {
    *(uint64_t *)(in_R10 + 0x1e0 + (uint64_t)param_3 * 8) = uVar3 & 0xffffffff;
    goto LAB_7fffa569f86b;
  }
  *(uint64_t *)(in_R10 + 0x1e0 + (uint64_t)param_3 * 8) = uVar3;
LAB_7fffa569f86b:
  *(uint16_t *)(in_R10 + 0x540) = *(uint16_t *)(in_R10 + 0x540) | (uint16_t)(1 << ((uint8_t)param_3 & 0x1f));
  return;
}


// ============================================================================
// Function : FUN_7fffa569f890  |  RVA: 0xf2f890  |  Size: 213 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa569f890(uint64_t param_1,int64_t param_2)

{
  uint64_t in_RAX;
  uint32_t uVar1;
  uint32_t uVar2;
  int64_t unaff_retaddr;
  
  uVar1 = (uint32_t)param_2;
  uVar2 = uVar1 | 1;
  if ((0x29b70f9501d8e3e4U - param_2 << 0x37 | 0x29b70f9501d8e3e4U - param_2 >> 9) - 0x78f44020 ==
      ((uint64_t)(uVar2 * -0x40000000 | uVar2 * 0x95ea147 >> 2) ^
      (uint64_t)(uVar2 * 0x1db2c49 + 0xcf5636cc) + *(int64_t *)(unaff_retaddr + -0xd98))) {
    return in_RAX;
  }
  (*(code *)((int64_t)(int)(~(uVar1 ^ 0x938aeeb7) << 0x12 | ~(uVar1 ^ 0x938aeeb7) >> 0xe) +
            0x7fffa506888c))((uVar1 + 0x53bd8824) * 0x8000 | uVar1 + 0x53bd8824 >> 0x11);
  (*(code *)((int64_t)(int)((uVar1 + 0x9f4b4aa) * -0x61a80cdd) + 0x7fffa55ba1ed))();
  return 1;
}


// ============================================================================
// Function : FUN_7fffa569faf0  |  RVA: 0xf2faf0  |  Size: 122 bytes
// Callers  : FUN_7fffa5155790@0x9e5790
// Callees  : FUN_7fffa50fecc0@0x98ecc0, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa4ed9184@0x769184, FUN_7fffa50030d0@0x8930d0, FUN_7fffa56a65a0@0xf365a0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t FUN_7fffa569faf0(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint32_t *puVar3;
  
  if (param_1 == 0) {
    lVar2 = FUN_7fffa56a65a0(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_7fffa52d8dd0();
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          lVar2 = (*(code *)&DAT_7ff85050bd90)(_DAT_7fffa4782170,0,param_1,param_2);
          if (lVar2 != 0) {
            return lVar2;
          }
          iVar1 = FUN_7fffa50030d0();
        } while ((iVar1 != 0) && (iVar1 = FUN_7fffa50fecc0(param_2), iVar1 != 0));
      }
      puVar3 = (uint32_t *)FUN_7fffa4ed9184();
      *puVar3 = 0xc;
    }
    lVar2 = 0;
  }
  return lVar2;
}


// ============================================================================
// Function : FUN_7fffa569fb70  |  RVA: 0xf2fb70  |  Size: 76 bytes
// Callers  : FUN_7fffa548e3e0@0xd1e3e0, FUN_7fffa5513b90@0xda3b90
// Callees  : FUN_7fffa5215120@0xaa5120, FUN_7fffa54539d0@0xce39d0
// ============================================================================
uint32_t FUN_7fffa569fb70(void)

{
  uint32_t uVar1;
  int64_t lVar2;
  
  uVar1 = FUN_7fffa5215120();
  lVar2 = FUN_7fffa54539d0();
  *(uint32_t *)(lVar2 + 0x78) = 0xfffffffe;
  return uVar1;
}


// ============================================================================
// Function : FUN_7fffa569fbd0  |  RVA: 0xf2fbd0  |  Size: 1807 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa569fbd0(int64_t param_1,uint8_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int64_t *plVar2;
  char *pcVar3;
  uint8_t uVar4;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint32_t uVar9;
  uint8_t bVar10;
  uint16_t uVar11;
  uint64_t in_RAX;
  uint64_t *puVar12;
  uint8_t bVar13;
  uint16_t uVar14;
  uint32_t uVar15;
  uint8_t *puVar16;
  int64_t lVar17;
  uint64_t uVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  uint32_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  uint32_t uVar25;
  uint8_t *puVar26;
  int64_t lVar27;
  float fVar28;
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint64_t *puStack_b8;
  int64_t lStack_98;
  uint8_t *puStack_88;
  
  uVar21 = (uint32_t)param_4;
  bVar13 = (uint8_t)param_4;
  uVar25 = 0 << (bVar13 & 0x1f) | 0U >> 0x20 - (bVar13 & 0x1f);
  uVar20 = (uint64_t)(0x78bc4c0b << (bVar13 & 0x1f) | 0x78bc4c0bU >> 0x20 - (bVar13 & 0x1f)) ^
           param_1 - (param_1 << 0x2d);
  puVar12 = (uint64_t *)(in_RAX ^ 0xffffffffe865c94d);
  if (((param_4 | 1) * 0x458e390000000000 | (param_4 | 1) * 0x456b458e39000000 >> 0x30) !=
      0x10000000229) {
    puVar12 = (uint64_t *)(in_RAX * -0x179a36b3);
  }
  uVar23 = *(uint64_t *)
            ((int64_t)(short)(-0x178 << (bVar13 & 0xf) | 0xfe88U >> 0x10 - (bVar13 & 0xf)) +
            0x7fffa47c2572);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar23;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar23;
  lVar17 = SUB168(auVar6 * ZEXT816(0x4325c53ef368eb0),8) +
           (uint64_t)
           CARRY8(SUB168(auVar6 * ZEXT816(0x4325c53ef368eb0),0),
                  SUB168(auVar5 * ZEXT816(0x4325c53ef368eb05),8));
  lStack_98 = 0;
  if (0xc6ebf74b - uVar21 <= (uVar21 ^ 0x5ca864a1)) {
    lVar17 = 0;
  }
  uVar1 = uVar20 + 0x6ed74a08;
  fVar28 = (float)FUN_7fffa5102fa0((float)(uVar23 + lVar17 + 1) / 0.875);
  uVar22 = (int64_t)(fVar28 - 9.223372e+18) & (int64_t)fVar28 >> 0x3f | (int64_t)fVar28;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar22;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar22;
  uVar18 = SUB168(auVar8 * ZEXT816(0x1111111111111111),8) +
           (uint64_t)
           CARRY8(SUB168(auVar8 * ZEXT816(0x1111111111111111),0),
                  SUB168(auVar7 * ZEXT816(0x1111111111111112),8));
  uVar23 = 0x3f;
  if (uVar18 != 0) {
    for (; uVar18 >> uVar23 == 0; uVar23 = uVar23 - 1) {
    }
  }
  uVar18 = 0x3f;
  if (((uVar21 ^ 0x10016) & 0xffff) <= uVar22) {
    uVar18 = uVar23 ^ 0x3f;
  }
  lVar17 = 1L << (-(uint8_t)uVar18 & 0x3f);
  uVar11 = (uint16_t)param_4;
  if (uVar22 == (uVar25 << 0x1e | uVar25 >> 2)) {
    puVar26 = &UNK_7fffa56ee720;
  }
  else {
    bVar10 = (uint8_t)(0x40 - uVar18);
    uVar23 = 0x40 - uVar18 & 0xffffffff;
    lVar27 = 0x78L << ((uint8_t)uVar23 & 0x3f);
    (*(code *)((int64_t)(short)(uVar11 + 0x9f73 ^ 0x30d4) + 0x7fffa526fb01))
              (uVar23,0xec6768f << (bVar13 & 0x1f) | 0xec6768fU >> 0x20 - (bVar13 & 0x1f),
               ((0x88L << (bVar10 & 0x3f)) + 0xeU & 0xfffffffffffffff8) << 0xe);
    lStack_98 = (uVar23 << 0x2c | uVar23 >> 0x14) - ((uVar23 >> 0x14) << 0x36);
    puVar26 = (uint8_t *)
              ((uint64_t)(-((int)lStack_98 + (int)lVar27 + -8) & 0xf) + lStack_98 + lVar27 + -8);
    FUN_7fffa4ecf8e0(puVar26,0,0x10L << (bVar10 & 0x3f));
    puVar26[lVar17 * 0x10 + -2] = 1;
  }
  puVar12[2] = 0;
  *(uint32_t *)(puVar12 + 1) = 0;
  uVar23 = uVar1 >> ((uint8_t)uVar18 & 0x3f);
  puStack_88 = puVar26 + uVar23 * 0x10;
  pcVar3 = puVar26 + uVar23 * 0x10;
  auVar29[0] = -(*pcVar3 == '\0');
  auVar29[1] = -(pcVar3[1] == '\0');
  auVar29[2] = -(pcVar3[2] == '\0');
  auVar29[3] = -(pcVar3[3] == '\0');
  auVar29[4] = -(pcVar3[4] == '\0');
  auVar29[5] = -(pcVar3[5] == '\0');
  auVar29[6] = -(pcVar3[6] == '\0');
  auVar29[7] = -(pcVar3[7] == '\0');
  auVar29[8] = -(pcVar3[8] == '\0');
  auVar29[9] = -(pcVar3[9] == '\0');
  auVar29[10] = -(pcVar3[10] == '\0');
  auVar29[0xb] = -(pcVar3[0xb] == '\0');
  auVar29[0xc] = -(pcVar3[0xc] == '\0');
  auVar29[0xd] = -(pcVar3[0xd] == '\0');
  auVar29[0xe] = -(pcVar3[0xe] == '\0');
  auVar29[0xf] = -(pcVar3[0xf] == '\0');
  *puVar12 = 0;
  uVar25 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar29 >> 7,0) & 1) |
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
  if (uVar25 == 0) {
    lVar27 = 1;
    do {
      puStack_88[0xf] = puStack_88[0xf] | '\x01' << ((uint8_t)uVar20 & 7);
      uVar23 = uVar23 + lVar27 & lVar17 - 1U;
      puStack_88 = puVar26 + uVar23 * 0x10;
      pcVar3 = puVar26 + uVar23 * 0x10;
      auVar30[0] = -(*pcVar3 == '\0');
      auVar30[1] = -(pcVar3[1] == '\0');
      auVar30[2] = -(pcVar3[2] == '\0');
      auVar30[3] = -(pcVar3[3] == '\0');
      auVar30[4] = -(pcVar3[4] == '\0');
      auVar30[5] = -(pcVar3[5] == '\0');
      auVar30[6] = -(pcVar3[6] == '\0');
      auVar30[7] = -(pcVar3[7] == '\0');
      auVar30[8] = -(pcVar3[8] == '\0');
      auVar30[9] = -(pcVar3[9] == '\0');
      auVar30[10] = -(pcVar3[10] == '\0');
      auVar30[0xb] = -(pcVar3[0xb] == '\0');
      auVar30[0xc] = -(pcVar3[0xc] == '\0');
      auVar30[0xd] = -(pcVar3[0xd] == '\0');
      auVar30[0xe] = -(pcVar3[0xe] == '\0');
      auVar30[0xf] = -(pcVar3[0xf] == '\0');
      uVar25 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar30 >> 7,0) & 1) |
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
      lVar27 = lVar27 + 1;
    } while (uVar25 == 0);
  }
  uVar20 = (uint64_t)(uVar21 ^ 0x4e889444);
  uVar9 = 0;
  for (; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
    uVar9 = uVar9 + 1;
  }
  (*(code *)((int64_t)(int)(uVar21 + 0x800110d4) + 0x7fffa52799d4))();
  puVar16 = (uint8_t *)((uVar20 << 0x2c | uVar20 >> 0x14) - ((uVar20 >> 0x14) << 0x36));
  plVar2 = (int64_t *)(uVar23 * 0x78 + lStack_98 + (uint64_t)uVar9 * 8);
  if (((uVar21 | 1) * -0x1b9926ee ^ 0x8001fc7f) < (uVar21 ^ 0x4e889444) * 0x3f41e095) {
    uVar25 = ~(uVar21 ^ 0x3718f864) << 0xc | ~(uVar21 ^ 0x3718f864) >> 0x14;
    *plVar2 = (int64_t)puVar16;
    *puVar16 = param_2;
    *(uint8_t (*) [16])(puVar16 + 8) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(puVar16 + 0x18) = (uint8_t  [16])0x0;
    *(uint64_t *)(puVar16 + 0x28) = 0;
  }
  else {
    *plVar2 = (int64_t)puVar16;
    *puVar16 = param_2;
    *(uint8_t (*) [16])(puVar16 + 8) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(puVar16 + 0x18) = (uint8_t  [16])0x0;
    *(uint64_t *)(puVar16 + 0x28) = 0;
    uVar25 = 0xcfd95efb - uVar21 ^ 0x2fef9439;
  }
  puStack_b8 = (uint64_t *)(puVar16 + 8);
  uVar19 = (uVar21 | 1) * -0x6fe178da;
  bVar13 = (uint8_t)uVar25;
  uVar15 = ((int)CONCAT62((uint6)(uint16_t)(uVar25 >> 0x10),0x832d) + uVar21) * (uVar25 | 1) ^ 0xd28e;
  uVar20 = (uint64_t)uVar15;
  (*(code *)((int64_t)(short)uVar15 + 0x7fffa526b6c5))();
  puVar24 = (uint64_t *)((uVar20 << 0x2c | uVar20 >> 0x14) - ((uVar20 >> 0x14) << 0x36));
  uVar14 = (uVar11 ^ 0x70c4) + 0x9565;
  *puVar24 = puStack_b8;
  *puStack_b8 = puVar24;
  uVar4 = (&UNK_7fffa58392bd)
          [(uint64_t)((uint16_t)uVar1 & 0xff) * 4 + (int64_t)(int)(uVar21 ^ 0x80017c6b)];
  puVar24[1] = 0;
  puStack_88[uVar9] = uVar4;
  puVar12[2] = plVar2;
  *puVar12 = puStack_88;
  *(uint32_t *)(puVar12 + 1) = uVar9 & 0xffff;
  (*(code *)(&UNK_7fffa542ded2 +
            (short)(0x528f << (bVar13 & 0xf) | 0x528fU >> 0x10 - (bVar13 & 0xf))))
            ((uVar25 | 1) * -0x4b005eb2 + uVar21);
  *(uint64_t *)
   ((int64_t)
    (short)(((0xa62aU >> (bVar13 & 0xf) | -0x59d6 << 0x10 - (bVar13 & 0xf)) ^ 0xa1b1) + uVar11) +
   0x7fffa47bbbc4) =
       (uint64_t)
       ((uVar19 >> (bVar13 & 0x1f) | uVar19 << 0x20 - (bVar13 & 0x1f)) + 0xfd3f2a0e !=
       ~(0x9076c7b6 - uVar21 ^ uVar25)) +
       *(int64_t *)
        ((int64_t)(short)((uVar14 * 0x200 | uVar14 >> 7) + (short)uVar25) + 0x7fffa47c10f3);
  return;
}


// ============================================================================
// Function : FUN_7fffa56a02e0  |  RVA: 0xf302e0  |  Size: 41 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa56a0306) overlaps instruction at (ram,0x7fffa56a0304)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa56a02f7) */

uint64_t FUN_7fffa56a02e0(void)

{
  uint32_t in_EAX;
  uint64_t uStack_8;
  
  uStack_8 = CONCAT44(0x8774bb77,in_EAX);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa56a0310  |  RVA: 0xf30310  |  Size: 129 bytes
// Callers  : FUN_7fffa517b810@0xa0b810, FUN_7fffa54037a0@0xc937a0
// Callees  : FUN_7fffa55d63a0@0xe663a0, FUN_7fffa4f54450@0x7e4450
// ============================================================================
uint64_t FUN_7fffa56a0310(int *param_1)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = param_1[1];
      lVar2 = FUN_7fffa55d63a0();
      if (*(int *)(lVar2 + iVar1 + 4 + (int64_t)iVar3 * 0x14) == 0) {
        lVar2 = 0;
      }
      else {
        iVar1 = param_1[1];
        lVar2 = FUN_7fffa55d63a0();
        iVar1 = *(int *)(lVar2 + (int64_t)iVar3 * 0x14 + 4 + (int64_t)iVar1);
        lVar2 = FUN_7fffa55d63a0();
        lVar2 = lVar2 + iVar1;
      }
      iVar1 = FUN_7fffa4f54450(lVar2 + 8,0x7fffa4781798);
      if (iVar1 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *param_1);
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa56a03a0  |  RVA: 0xf303a0  |  Size: 630 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56a03a0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint32_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  
  uRam00007fffa47bf5f6 = 0;
  uRam00007fffa47bf611 = 0;
  uRam00007fffa47bf619 = 0;
  uRam00007fffa47bf601 = 0;
  uRam00007fffa47bf609 = 0;
  uRam00007fffa47bf621 = 0;
  uRam00007fffa47bf639 = 0;
  uVar1 = rdtsc();
  lVar4 = (uVar1 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar1)) * 0x1ebca6ffab92cae + 0xb;
  uVar1 = 0;
  do {
    uVar7 = uVar1;
    uVar1 = uVar7 + 4;
    lVar4 = lVar4 * 0x1ebca6ffab92cae + 0xb;
    lVar5 = lVar4 * 0x1ebca6ffab92cae + 0xb;
    lVar6 = lVar5 * 0x1ebca6ffab92cae + 0xb;
    *(char *)(uVar7 + 0x7fffa47bf5f5) = (char)((uint64_t)lVar4 >> 0x20);
    lVar4 = lVar6 * 0x1ebca6ffab92cae + 0xb;
    *(char *)(uVar7 + 0x7fffa47bf5f8) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(uVar7 + 0x7fffa47bf5f7) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(uVar7 + 0x7fffa47bf5f6) = (char)((uint64_t)lVar5 >> 0x20);
  } while ((uVar1 * 8 | uVar1 >> 0x3d) * -0x46aa752af8628ca1 != 0x55db149309a06d80);
  uVar3 = -(uint32_t)uVar1 - 0x1380b;
  uVar2 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(int)(uVar3 >> 1 | (uint32_t)((uVar3 & 1) != 0) << 0x1f) +
                          0x7fffa47c9224) * 0x33333334 + 0x33333334) * 5;
  *(uint64_t *)
   ((int64_t)(short)(((short)uVar7 + 5) * 0x62dc + 0x7cb9) + 0x7fffa47c31ac + (uVar2 >> 0x20) * 8)
       = *(uint64_t *)((int64_t)(int)((uint32_t)uVar1 ^ 0xffff7840) + 0x7fffa47c7e29);
  *(char *)((int64_t)(short)((short)uVar7 + -0x7d4c) + 0x7fffa47c72f6) = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa56a0618  |  RVA: 0xf30618  |  Size: 76 bytes
// Callers  : FUN_7fffa55f14d0@0xe814d0
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184, FUN_7fffa5145080@0x9d5080
// ============================================================================
uint32_t FUN_7fffa56a0618(uint32_t *param_1)

{
  char cVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  
  if (param_1 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar3 = 0x16;
    FUN_7fffa55c8ce0();
    uVar2 = 0x16;
  }
  else {
    *param_1 = 0;
    cVar1 = FUN_7fffa5145080(param_1,4);
    if (cVar1 == '\0') {
      puVar3 = (uint32_t *)FUN_7fffa4ed9184();
      *puVar3 = 0xc;
      puVar3 = (uint32_t *)FUN_7fffa4ed9184();
      uVar2 = *puVar3;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa56a0670  |  RVA: 0xf30670  |  Size: 23 bytes
// Callers  : none
// Callees  : FUN_7fffa52c3c00@0xb53c00
// ============================================================================
void FUN_7fffa56a0670(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa52c3c00(*(uint8_t *)(param_2 + 0x60));
  return;
}


// ============================================================================
// Function : FUN_7fffa56a0690  |  RVA: 0xf30690  |  Size: 61 bytes
// Callers  : FUN_7fffa56a085c@0xf3085c
// Callees  : FUN_7fffa54e570c@0xd7570c, FUN_7fffa5476b88@0xd06b88, FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa56a0690(uint64_t param_1,uint32_t *param_2,uint64_t *param_3,uint32_t *param_4
                     )

{
  FUN_7fffa5476b88(*param_2);
  FUN_7fffa54e570c(*(uint64_t *)*param_3,0);
  FUN_7fffa4f54478(*param_4);
  return;
}


// ============================================================================
// Function : FUN_7fffa56a06d0  |  RVA: 0xf306d0  |  Size: 307 bytes
// Callers  : FUN_7fffa5668fe0@0xef8fe0
// Callees  : FUN_7fffa564c5c0@0xedc5c0, FUN_7fffa560e3c8@0xe9e3c8, FUN_7fffa4ed9184@0x769184
// ============================================================================
uint32_t FUN_7fffa56a06d0(uint32_t param_1)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint8_t uStackX_8;
  uint8_t uStackX_9;
  uint8_t uStackX_a;
  uint16_t uStackX_18;
  uint8_t uStackX_1a;
  int64_t lStack_28;
  int64_t *aplStack_20 [2];
  char cStack_10;
  
  uVar4 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    FUN_7fffa564c5c0(&lStack_28);
    if (param_1 < 0x100) {
      uVar4 = (uint32_t)*(uint8_t *)(aplStack_20[0][0x23] + ((uint64_t)param_1 & 0xff));
      if (cStack_10 != '\0') {
        *(uint32_t *)(lStack_28 + 0x3a8) = *(uint32_t *)(lStack_28 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      uStackX_a = 0;
      if (((int)aplStack_20[0][1] < 2) ||
         (-1 < *(short *)(*aplStack_20[0] + (uint64_t)((int)param_1 >> 8 & 0xff) * 2))) {
        puVar2 = (uint32_t *)FUN_7fffa4ed9184();
        uVar3 = 1;
        *puVar2 = 0x2a;
        uStackX_9 = 0;
        uStackX_8 = (char)param_1;
      }
      else {
        uVar3 = 2;
        uStackX_8 = (char)(param_1 >> 8);
        uStackX_9 = (char)param_1;
      }
      uStackX_18 = 0;
      uStackX_1a = 0;
      iVar1 = FUN_7fffa560e3c8(aplStack_20,aplStack_20[0][0x27],0x200,&uStackX_8,uVar3,&uStackX_18,3
                               ,*(uint32_t *)((int64_t)aplStack_20[0] + 0xc),1);
      if (iVar1 != 0) {
        param_1 = (uint32_t)(uint8_t)uStackX_18;
        if (iVar1 != 1) {
          param_1 = (uint32_t)CONCAT11((uint8_t)uStackX_18,uStackX_18._1_1_);
        }
      }
      uVar4 = param_1;
      if (cStack_10 != '\0') {
        *(uint32_t *)(lStack_28 + 0x3a8) = *(uint32_t *)(lStack_28 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  return uVar4;
}


// ============================================================================
// Function : _guard_dispatch_icall  |  RVA: 0xf30810  |  Size: 6 bytes
// Callers  : FUN_7fffa5147134@0x9d7134, FUN_7fffa5487f80@0xd17f80, FUN_7fffa56ab604@0xf3b604, FUN_7fffa5008150@0x898150, FUN_7fffa5007cbc@0x897cbc, FUN_7fffa5405074@0xc95074, FUN_7fffa5487f0c@0xd17f0c, FUN_7fffa52d2088@0xb62088
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
// Function : FUN_7fffa56a0818  |  RVA: 0xf30818  |  Size: 66 bytes
// Callers  : FUN_7fffa55c6b44@0xe56b44
// Callees  : FUN_7fffa4ecd2c4@0x75d2c4, FUN_7fffa5608650@0xe98650, FUN_7fffa524fccc@0xadfccc
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa56a0818(void)

{
  code *pcVar1;
  int64_t lVar2;
  
  if (_DAT_7fffa4780244 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_7fffa5608650();
  }
  if (lVar2 == -1) {
LAB_7fffa56a0854:
    FUN_7fffa524fccc();
    pcVar1 = (code *)__debugbreak();
    (*pcVar1)();
    return;
  }
  if (lVar2 == 0) {
    lVar2 = FUN_7fffa4ecd2c4();
    if (lVar2 == 0) goto LAB_7fffa56a0854;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa56a085c  |  RVA: 0xf3085c  |  Size: 245 bytes
// Callers  : FUN_7fffa5605af8@0xe95af8, FUN_7fffa5213f88@0xaa3f88
// Callees  : FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa5513b30@0xda3b30, FUN_7fffa56a0690@0xf30690
// ============================================================================
void FUN_7fffa56a085c(int64_t *param_1)

{
  uint8_t auStackX_10 [8];
  uint32_t auStackX_18 [2];
  uint32_t auStackX_20 [2];
  uint32_t uStack_28;
  uint32_t uStack_24;
  int64_t *plStack_20;
  int64_t **pplStack_18;
  int64_t **pplStack_10;
  
  pplStack_18 = &plStack_20;
  auStackX_18[0] = 5;
  auStackX_20[0] = 5;
  pplStack_10 = &plStack_20;
  uStack_28 = 4;
  uStack_24 = 4;
  plStack_20 = param_1;
  if ((uint8_t *)*param_1 != &UNK_7fffa56b35c0) {
    FUN_7fffa52d8dd0((uint8_t *)*param_1);
  }
  FUN_7fffa52d8dd0(plStack_20[0xe]);
  FUN_7fffa52d8dd0(plStack_20[0xb]);
  FUN_7fffa52d8dd0(plStack_20[0xc]);
  FUN_7fffa52d8dd0(plStack_20[0xd]);
  FUN_7fffa52d8dd0(plStack_20[9]);
  FUN_7fffa52d8dd0(plStack_20[10]);
  FUN_7fffa52d8dd0(plStack_20[0xf]);
  FUN_7fffa52d8dd0(plStack_20[0x10]);
  FUN_7fffa52d8dd0(plStack_20[0x78]);
  FUN_7fffa5513b30(auStackX_10,auStackX_20,&pplStack_18,auStackX_18);
  FUN_7fffa56a0690(auStackX_10,&uStack_24,&pplStack_10,&uStack_28);
  return;
}


// ============================================================================
// Function : FUN_7fffa56a0960  |  RVA: 0xf30960  |  Size: 96 bytes
// Callers  : FUN_7fffa55abf00@0xe3bf00
// Callees  : FUN_7fffa56a0a17@0xf30a17
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t FUN_7fffa56a0960(void)

{
  uint32_t uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  if (_DAT_7fffa4780240 == -1) {
    return 0;
  }
  uVar1 = (*(code *)&DAT_7ff84ea18640)();
  lVar3 = (*(code *)&DAT_7ff84ea12a00)(_DAT_7fffa4780240);
  if (lVar3 == -1) {
LAB_7fffa56a09b7:
    lVar3 = FUN_7fffa56a0a17();
    return lVar3;
  }
  if (lVar3 == 0) {
    iVar2 = (*(code *)&DAT_7ff84ea37cf0)(_DAT_7fffa4780240,0xffffffffffffffff);
    if (iVar2 == 0) goto LAB_7fffa56a09b7;
    lVar4 = FUN_7fffa5215110(1,0x80);
    if ((lVar4 == 0) || (iVar2 = (*(code *)&DAT_7ff84ea37cf0)(_DAT_7fffa4780240,lVar4), iVar2 == 0))
    {
      (*(code *)&DAT_7ff84ea37cf0)(_DAT_7fffa4780240,0);
      lVar3 = 0;
      lVar5 = lVar4;
    }
    else {
      *(uint32_t *)(lVar4 + 0x78) = 0xfffffffe;
      lVar5 = 0;
      lVar3 = lVar4;
    }
    FUN_7fffa52c3bf0(lVar5);
  }
  (*(code *)&DAT_7ff84ea28280)(uVar1);
  return lVar3;
}


// ============================================================================
// Function : FUN_7fffa56a09c0  |  RVA: 0xf309c0  |  Size: 87 bytes
// Callers  : none
// Callees  : FUN_7fffa5215110@0xaa5110, FUN_7fffa52c3bf0@0xb53bf0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t FUN_7fffa56a09c0(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint32_t unaff_EBX;
  int64_t lVar4;
  
  lVar2 = FUN_7fffa5215110(1);
  if ((lVar2 == 0) || (iVar1 = (*(code *)&DAT_7ff84ea37cf0)(_DAT_7fffa4780240,lVar2), iVar1 == 0)) {
    (*(code *)&DAT_7ff84ea37cf0)(_DAT_7fffa4780240,0);
    lVar4 = 0;
    lVar3 = lVar2;
  }
  else {
    *(uint32_t *)(lVar2 + 0x78) = 0xfffffffe;
    lVar3 = 0;
    lVar4 = lVar2;
  }
  FUN_7fffa52c3bf0(lVar3);
  (*(code *)&DAT_7ff84ea28280)(unaff_EBX);
  return lVar4;
}


// ============================================================================
// Function : FUN_7fffa56a0a17  |  RVA: 0xf30a17  |  Size: 26 bytes
// Callers  : FUN_7fffa56a0960@0xf30960
// Callees  : none
// ============================================================================
void FUN_7fffa56a0a17(void)

{
  uint32_t unaff_EBX;
  
  (*(code *)&DAT_7ff84ea28280)(unaff_EBX);
  return;
}


// ============================================================================
// Function : FUN_7fffa56a0a40  |  RVA: 0xf30a40  |  Size: 2266 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa56a0a40(void) {
    /* +0xf30a40 */ __asm { PUSH RSI }
    /* +0xf30a41 */ __asm { PUSH RBX }
    /* +0xf30a42 */ __asm { PUSH R15 }
    /* +0xf30a44 */ __asm { PUSH RBP }
    /* +0xf30a45 */ __asm { PUSH RDI }
    /* +0xf30a46 */ __asm { PUSH R14 }
    /* +0xf30a48 */ __asm { PUSH R12 }
    /* +0xf30a4a */ __asm { PUSH R13 }
    /* +0xf30a4c */ __asm { SUB RSP,0x58 }
    /* +0xf30a50 */ __asm { MOV RBP,RCX }
    /* +0xf30a53 */ __asm { MOV EDX,0xd933ffe6 }
    /* +0xf30a58 */ __asm { MOV R10D,0xdbe6309 }
    /* +0xf30a5e */ __asm { MOV R11,R14 }
    /* +0xf30a61 */ __asm { MOV R9,RCX }
    /* +0xf30a64 */ __asm { IMUL EAX,R10D,0x658b16c7 }
    /* +0xf30a6b */ __asm { PUSHFQ }
    /* +0xf30a6c */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xf30a74 */ __asm { POPFQ }
    /* +0xf30a75 */ __asm { MOV R10,R9 }
    /* +0xf30a78 */ __asm { XOR R10,R11 }
    /* +0xf30a7b */ __asm { IMUL R8,R10,-0x7a3642d }
    /* +0xf30a82 */ __asm { NOT R11 }
    /* +0xf30a85 */ __asm { MOV R10,R11 }
    /* +0xf30a88 */ __asm { XOR R10,R9 }
    /* +0xf30a8b */ __asm { AND R11,R9 }
    /* +0xf30a8e */ __asm { IMUL R9,R11,0x302d34ba }
    /* +0xf30a95 */ __asm { IMUL R11,R11,-0x302d34ba }
    /* +0xf30a9c */ __asm { MOV ECX,0xfa6b8ca1 }
    /* +0xf30aa1 */ __asm { SUB ECX,EDX }
    /* +0xf30aa3 */ __asm { IMUL R14,R10,-0x7a3642d }
    /* +0xf30aaa */ __asm { ADD R14,R11 }
    /* +0xf30aad */ __asm { ADD R14,R8 }
    /* +0xf30ab0 */ __asm { MOV RDX,R14 }
    /* +0xf30ab3 */ __asm { OR RDX,R9 }
    /* +0xf30ab6 */ __asm { ADD R14,R9 }
    /* +0xf30ab9 */ __asm { CMP RAX,RCX }
    /* +0xf30abc */ __asm { CMOVL R14,RDX }
    /* +0xf30ac0 */ __asm { MOV dword ptr [RSP + 0x30],0x104900c1 }
    /* +0xf30ac8 */ __asm { MOV EDX,dword ptr [RSP + 0x30] }
    /* +0xf30acc */ __asm { MOV R10W,0x7ce3 }
    /* +0xf30ad1 */ __asm { ADD R10D,0xfffffdbe }
    /* +0xf30ad8 */ __asm { XOR R10D,0x855e }
    /* +0xf30adf */ __asm { MOV ECX,R14D }
    /* +0xf30ae2 */ __asm { ROR R10W,CL }
    /* +0xf30ae6 */ __asm { MOVSX R10D,R10W }
    /* +0xf30aea */ __asm { CMP EDX,R10D }
    /* +0xf30aed */ __asm { JLE 0x7fffa56a1336 }
    /* +0xf30af3 */ __asm { LEA R11,[0x7fffa47c06ec] }
    /* +0xf30afa */ __asm { MOV EDX,0x9061497e }
    /* +0xf30aff */ __asm { IMUL EAX,EDX,0x5cc6bc1f }
    /* +0xf30b05 */ __asm { NOT EAX }
    /* +0xf30b07 */ __asm { ADD R11,-0x4bf4 }
    /* +0xf30b0e */ __asm { MOV R8D,0x2194e1cd }
    /* +0xf30b14 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xf30b1b */ __asm { MOV R10,0x0 }
    /* +0xf30b22 */ __asm { NOP }
    /* +0xf30b23 */ __asm { MOV EBX,R14D }
    /* +0xf30b26 */ __asm { OR EBX,0x1 }
    /* +0xf30b29 */ __asm { IMUL EAX,EBX }
    /* +0xf30b2c */ __asm { IMUL R8D,EBX }
    /* +0xf30b30 */ __asm { ROL R8D,0x1a }
    /* +0xf30b34 */ __asm { XOR R8D,0x44c2fe3c }
    /* +0xf30b3b */ __asm { CMP R8,RAX }
    /* +0xf30b3e */ __asm { JG 0x7fffa56a0b76 }
    /* +0xf30b40 */ __asm { MOVZX R9D,uint8_t ptr [R11 + 0x4e] }
    /* +0xf30b45 */ __asm { MOV uint8_t ptr [RSP + 0x46],R9B }
    /* +0xf30b4a */ __asm { MOVD XMM4,EBX }
    /* +0xf30b4e */ __asm { MOVZX R9D,uint8_t ptr [R11 + 0xb] }
    /* +0xf30b53 */ __asm { LEA RDX,[R11 + R9*0x8] }
    /* +0xf30b57 */ __asm { ADD RDX,0xe }
    /* +0xf30b5b */ __asm { MOV R10D,0x49cdfea8 }
    /* +0xf30b61 */ __asm { MOVD XMM2,R10D }
    /* +0xf30b66 */ __asm { PMULUDQ XMM2,XMM4 }
    /* +0xf30b6a */ __asm { MOVD ESI,XMM2 }
    /* +0xf30b6e */ __asm { ADD ESI,0x3c4baf6f }
    /* +0xf30b74 */ __asm { JMP 0x7fffa56a0b97 }
    /* +0xf30b76 */ __asm { MOVZX R9D,uint8_t ptr [R11 + 0xb] }
    /* +0xf30b7b */ __asm { MOV ESI,0x9ac00abd }
    /* +0xf30b80 */ __asm { NOT ESI }
    /* +0xf30b82 */ __asm { ADD ESI,R14D }
    /* +0xf30b85 */ __asm { MOVZX R10D,uint8_t ptr [R11 + 0x4e] }
    /* +0xf30b8a */ __asm { MOV uint8_t ptr [RSP + 0x46],R10B }
    /* +0xf30b8f */ __asm { LEA RDX,[R11 + R9*0x8] }
    /* +0xf30b93 */ __asm { ADD RDX,0xe }
    /* +0xf30b97 */ __asm { MOV R10D,0x59c6ff3e }
    /* +0xf30b9d */ __asm { MOVD XMM2,R10D }
    /* +0xf30ba2 */ __asm { MOVD XMM4,R14D }
    /* +0xf30ba7 */ __asm { PADDD XMM2,XMM4 }
    /* +0xf30bab */ __asm { MOVZX R9D,uint8_t ptr [RDX] }
    /* +0xf30baf */ __asm { MOV uint8_t ptr [RSP + 0x47],R9B }
    /* +0xf30bb4 */ __asm { MOVZX R13D,uint8_t ptr [R11 + 0x4d] }
    /* +0xf30bb9 */ __asm { MOVZX R8D,uint8_t ptr [R11 + 0x50] }
    /* +0xf30bbe */ __asm { MOVD R9D,XMM2 }
    /* +0xf30bc3 */ __asm { ROL R9D,0x8 }
    /* +0xf30bc7 */ __asm { MOV ECX,ESI }
    /* +0xf30bc9 */ __asm { ROR R9D,CL }
    /* +0xf30bcc */ __asm { MOVZX EAX,uint8_t ptr [R11 + 0x52] }
    /* +0xf30bd1 */ __asm { IMUL R9D,R9D,0x79a7f2e1 }
    /* +0xf30bd8 */ __asm { CMP R9,0x6a7312cd }
    /* +0xf30bdf */ __asm { MOV qword ptr [RSP + 0x38],RBP }
    /* +0xf30be4 */ __asm { JZ 0x7fffa56a0c05 }
    /* +0xf30be6 */ __asm { MOV R9D,0x6d2dc258 }
    /* +0xf30bec */ __asm { ADD R9D,0xd4c28909 }
    /* +0xf30bf3 */ __asm { MOV ECX,R14D }
    /* +0xf30bf6 */ __asm { ROL R9D,CL }
    /* +0xf30bf9 */ __asm { ADD R9D,0xcc90d559 }
    /* +0xf30c00 */ __asm { XOR R9D,ESI }
    /* +0xf30c03 */ __asm { JMP 0x7fffa56a0c23 }
    /* +0xf30c05 */ __asm { MOV R9D,0x2b046386 }
    /* +0xf30c0b */ __asm { MOVD XMM2,ESI }
    /* +0xf30c0f */ __asm { PSUBD XMM4,XMM2 }
    /* +0xf30c13 */ __asm { MOVD ECX,XMM4 }
    /* +0xf30c17 */ __asm { ADD ECX,R9D }
    /* +0xf30c1a */ __asm { XOR ECX,0x7d3aa5dd }
    /* +0xf30c20 */ __asm { MOVSXD R9,ECX }
    /* +0xf30c23 */ __asm { MOV qword ptr [RSP + 0x48],R9 }
    /* +0xf30c28 */ __asm { MOVZX R12D,uint8_t ptr [R11 + 0x4c] }
    /* +0xf30c2d */ __asm { MOV R15D,0x2facca7 }
    /* +0xf30c33 */ __asm { MOVZX EDI,uint8_t ptr [RDX + 0x1] }
    /* +0xf30c37 */ __asm { MOVZX R9D,uint8_t ptr [RDX + 0x4] }
    /* +0xf30c3c */ __asm { MOVZX ECX,uint8_t ptr [RDX + 0x6] }
    /* +0xf30c40 */ __asm { MOV dword ptr [RSP + 0x54],ECX }
    /* +0xf30c44 */ __asm { MOV RCX,0x715ac000de6b05de }
    /* +0xf30c4e */ __asm { MOV RBP,-0xe66b1e61 }
    /* +0xf30c58 */ __asm { ADD RBP,RCX }
    /* +0xf30c5b */ __asm { MOV ECX,0xcecf91b }
    /* +0xf30c60 */ __asm { XOR R13B,uint8_t ptr [RDX + 0x2] }
    /* +0xf30c64 */ __asm { SUB ECX,R14D }
    /* +0xf30c67 */ __asm { ROL ECX,0x17 }
    /* +0xf30c6a */ __asm { SUB ECX,ESI }
    /* +0xf30c6c */ __asm { MOV R10,RSI }
    /* +0xf30c6f */ __asm { MOV ESI,0xaa092e99 }
    /* +0xf30c74 */ __asm { CMP RCX,RSI }
    /* +0xf30c77 */ __asm { MOVZX ECX,uint8_t ptr [RSP + 0x47] }
    /* +0xf30c7c */ __asm { MOVD XMM4,ECX }
    /* +0xf30c80 */ __asm { SETZ uint8_t ptr [RSP + 0x47] }
    /* +0xf30c85 */ __asm { IMUL R15D,EBX }
    /* +0xf30c89 */ __asm { XOR R15D,0x3cc455bb }
    /* +0xf30c90 */ __asm { MOV qword ptr [RSP + 0x28],R10 }
    /* +0xf30c95 */ __asm { MOV ECX,R10D }
    /* +0xf30c98 */ __asm { ROR R15D,CL }
    /* +0xf30c9b */ __asm { XOR R8B,uint8_t ptr [RDX + 0x5] }
    /* +0xf30c9f */ __asm { MOVZX ESI,uint8_t ptr [RSP + 0x46] }
    /* +0xf30ca4 */ __asm { XOR SIL,uint8_t ptr [RDX + 0x3] }
    /* +0xf30ca8 */ __asm { XOR AL,uint8_t ptr [RDX + 0x7] }
    /* +0xf30cab */ __asm { XOR R9B,uint8_t ptr [R11 + 0x4f] }
    /* +0xf30caf */ __asm { MOVD XMM2,dword ptr [RSP + 0x54] }
    /* +0xf30cb5 */ __asm { MOV uint8_t ptr [RSP + 0x35],R8B }
    /* +0xf30cba */ __asm { MOV R8D,EDI }
    /* +0xf30cbd */ __asm { OR R8B,R12B }
    /* +0xf30cc0 */ __asm { MOV uint8_t ptr [RSP + 0x37],AL }
    /* +0xf30cc4 */ __asm { XOR DIL,R12B }
    /* +0xf30cc7 */ __asm { MOV uint8_t ptr [RSP + 0x32],R13B }
    /* +0xf30ccc */ __asm { MOV uint8_t ptr [RSP + 0x34],R9B }
    /* +0xf30cd1 */ __asm { MOVZX EDX,uint8_t ptr [R11 + 0x51] }
    /* +0xf30cd6 */ __asm { MOVD XMM1,EDX }
    /* +0xf30cda */ __asm { PXOR XMM1,XMM2 }
    /* +0xf30cde */ __asm { MOVZX EDX,uint8_t ptr [R11 + 0x4b] }
    /* +0xf30ce3 */ __asm { MOVD XMM2,EDX }
    /* +0xf30ce7 */ __asm { PXOR XMM2,XMM4 }
    /* +0xf30ceb */ __asm { MOVD EDX,XMM2 }
    /* +0xf30cef */ __asm { MOV uint8_t ptr [RSP + 0x30],DL }
    /* +0xf30cf3 */ __asm { MOV ECX,R14D }
    /* +0xf30cf6 */ __asm { ROR RBP,CL }
    /* +0xf30cf9 */ __asm { MOVD EDX,XMM1 }
    /* +0xf30cfd */ __asm { MOV R9,-0xc414749a }
    /* +0xf30d07 */ __asm { XOR R9,RBP }
    /* +0xf30d0a */ __asm { ADD R15D,0x7e2187b8 }
    /* +0xf30d11 */ __asm { CMP R15,R9 }
    /* +0xf30d14 */ __asm { MOVZX R10D,R8B }
    /* +0xf30d18 */ __asm { MOVZX EAX,DIL }
    /* +0xf30d1c */ __asm { CMOVGE EAX,R10D }
    /* +0xf30d20 */ __asm { MOV uint8_t ptr [RSP + 0x31],AL }
    /* +0xf30d24 */ __asm { MOV uint8_t ptr [RSP + 0x36],DL }
    /* +0xf30d28 */ __asm { MOV uint8_t ptr [RSP + 0x33],SIL }
    /* +0xf30d2d */ __asm { MOV RDI,qword ptr [RSP + 0x30] }
    /* +0xf30d32 */ __asm { MOV RBP,qword ptr [RSP + 0x38] }
    /* +0xf30d37 */ __asm { CMP RBP,RDI }
    /* +0xf30d3a */ __asm { SETA R9B }
    /* +0xf30d3e */ __asm { CMP R9B,uint8_t ptr [RSP + 0x47] }
    /* +0xf30d43 */ __asm { JZ 0x7fffa56a12cf }
    /* +0xf30d49 */ __asm { LEA R9,[RDI + 0x200000] }
    /* +0xf30d50 */ __asm { CMP RBP,R9 }
    /* +0xf30d53 */ __asm { JNC 0x7fffa56a12cf }
    /* +0xf30d59 */ __asm { MOV DX,0x80fd }
    /* +0xf30d5d */ __asm { MOV R15D,R14D }
    /* +0xf30d60 */ __asm { OR R15D,0x1 }
    /* +0xf30d64 */ __asm { NOP }
    /* +0xf30d66 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xf30d6d */ __asm { MOV R11,0x0 }
    /* +0xf30d74 */ __asm { IMUL EDX,R15D }
    /* +0xf30d78 */ __asm { ADD EDX,0x241f }
    /* +0xf30d7e */ __asm { MOV R13,qword ptr [RSP + 0x48] }
    /* +0xf30d83 */ __asm { XOR EDX,R13D }
    /* +0xf30d86 */ __asm { MOVZX EAX,DX }
    /* +0xf30d89 */ __asm { MOV R9,qword ptr GS:[RAX] }
    /* +0xf30d8d */ __asm { MOV RDX,-0x2c0074332f9b32ef }
    /* +0xf30d97 */ __asm { CMP qword ptr [R9 + 0x18],RDX }
    /* +0xf30d9b */ __asm { JZ 0x7fffa56a12f2 }
    /* +0xf30da1 */ __asm { LEA R11,[0x7fffa47b6593] }
    /* +0xf30da8 */ __asm { MOV R9,-0x51f0be50cad82870 }
    /* +0xf30db2 */ __asm { CMP R11,R9 }
    /* +0xf30db5 */ __asm { JZ 0x7fffa56a134e }
    /* +0xf30dbb */ __asm { MOV RSI,R11 }
    /* +0xf30dbe */ __asm { ADD RSI,0x6ed5 }
    /* +0xf30dc5 */ __asm { MOV DX,0xf9e4 }
    /* +0xf30dc9 */ __asm { MOV R10D,R14D }
    /* +0xf30dcc */ __asm { ADD R10D,EDX }
    /* +0xf30dcf */ __asm { MOVZX EAX,R10W }
    /* +0xf30dd3 */ __asm { XOR RAX,0x5e59 }
    /* +0xf30dd9 */ __asm { MOV R12,qword ptr GS:[RAX] }
    /* +0xf30ddd */ __asm { MOV EDX,dword ptr [R11 + 0x6ed5] }
    /* +0xf30de4 */ __asm { CMP EDX,R12D }
    /* +0xf30de7 */ __asm { JZ 0x7fffa56a0df6 }
    /* +0xf30de9 */ __asm { LEA RCX,[RSI + 0x8] }
    /* +0xf30ded */ __asm { CALL qword ptr [0x7fffa5877480] }
    /* +0xf30df3 */ __asm { XCHG dword ptr [RSI],R12D }
    /* +0xf30df6 */ __asm { INC dword ptr [RSI + 0x4] }
    /* +0xf30df9 */ __asm { LEA R11,[0x7fffa47c3b48] }
    /* +0xf30e00 */ __asm { MOV R9,0x23980f98eb54cacb }
    /* +0xf30e0a */ __asm { CMP R11,R9 }
    /* +0xf30e0d */ __asm { NOP }
    /* +0xf30e0e */ __asm { NOP }
    /* +0xf30e0f */ __asm { NOP }
    /* +0xf30e10 */ __asm { NOP }
    /* +0xf30e11 */ __asm { NOP }
    /* +0xf30e12 */ __asm { MOV EAX,0xb7170562 }
    /* +0xf30e17 */ __asm { ADD EAX,0x16437428 }
    /* +0xf30e1c */ __asm { MOV EDX,0x1e01530b }
    /* +0xf30e21 */ __asm { ADD EDX,0x7ffffffb }
    /* +0xf30e27 */ __asm { IMUL EBX,EDX }
    /* +0xf30e2a */ __asm { MOV ECX,R13D }
    /* +0xf30e2d */ __asm { ROR EBX,CL }
    /* +0xf30e2f */ __asm { ROL EAX,CL }
    /* +0xf30e31 */ __asm { ADD EAX,R14D }
    /* +0xf30e34 */ __asm { CMP RBX,RAX }
    /* +0xf30e37 */ __asm { JBE 0x7fffa56a0e55 }
    /* +0xf30e39 */ __asm { MOVZX R9D,uint8_t ptr [R11 + -0x47f0] }
    /* +0xf30e41 */ __asm { LEA R9,[R11 + R9*0x4] }
    /* +0xf30e45 */ __asm { ADD R9,-0x47e8 }
    /* +0xf30e4c */ __asm { ADD R11,-0x47f3 }
    /* +0xf30e53 */ __asm { JMP 0x7fffa56a0e6f }
    /* +0xf30e55 */ __asm { MOVZX R9D,uint8_t ptr [R11 + -0x47f0] }
    /* +0xf30e5d */ __asm { LEA R9,[R11 + R9*0x4] }
    /* +0xf30e61 */ __asm { ADD R9,-0x47e8 }
    /* +0xf30e68 */ __asm { ADD R11,-0x47f3 }
    /* +0xf30e6f */ __asm { MOVZX R10D,uint8_t ptr [R11 + 0x2f] }
    /* +0xf30e74 */ __asm { MOVZX R8D,uint8_t ptr [R9 + 0x1] }
    /* +0xf30e79 */ __asm { MOVZX EAX,uint8_t ptr [R9 + 0x3] }
    /* +0xf30e7e */ __asm { MOVZX EDX,uint8_t ptr [R9] }
    /* +0xf30e82 */ __asm { XOR R8B,uint8_t ptr [R11 + 0x2e] }
    /* +0xf30e86 */ __asm { MOVD XMM4,EDX }
    /* +0xf30e8a */ __asm { NOT R8B }
    /* +0xf30e8d */ __asm { ROR R8B,0x1 }
    /* +0xf30e90 */ __asm { MOV uint8_t ptr [RSP + 0x31],R8B }
    /* +0xf30e95 */ __asm { XOR AL,uint8_t ptr [R11 + 0x30] }
    /* +0xf30e99 */ __asm { NOT AL }
    /* +0xf30e9b */ __asm { ROR AL,0x1 }
    /* +0xf30e9d */ __asm { XOR R10B,uint8_t ptr [R9 + 0x2] }
    /* +0xf30ea1 */ __asm { MOV uint8_t ptr [RSP + 0x33],AL }
    /* +0xf30ea5 */ __asm { NOT R10B }
    /* +0xf30ea8 */ __asm { ROR R10B,0x1 }
    /* +0xf30eab */ __asm { MOV uint8_t ptr [RSP + 0x32],R10B }
    /* +0xf30eb0 */ __asm { MOVZX EDX,uint8_t ptr [R11 + 0x2d] }
    /* +0xf30eb5 */ __asm { MOVD XMM2,EDX }
    /* +0xf30eb9 */ __asm { PXOR XMM2,XMM4 }
    /* +0xf30ebd */ __asm { MOVD EDX,XMM2 }
    /* +0xf30ec1 */ __asm { NOT DL }
    /* +0xf30ec3 */ __asm { ROR DL,0x1 }
    /* +0xf30ec5 */ __asm { MOV uint8_t ptr [RSP + 0x30],DL }
    /* +0xf30ec9 */ __asm { MOV EBX,dword ptr [RSP + 0x30] }
    /* +0xf30ecd */ __asm { TEST EBX,EBX }
    /* +0xf30ecf */ __asm { JZ 0x7fffa56a12fa }
    /* +0xf30ed5 */ __asm { MOV dword ptr [RSP + 0x30],0xd8721050 }
    /* +0xf30edd */ __asm { MOV EDX,dword ptr [RSP + 0x30] }
    /* +0xf30ee1 */ __asm { LEA R11,[RBP + -0x20] }
    /* +0xf30ee5 */ __asm { MOV uint8_t ptr [RBP + -0x8],0x0 }
    /* +0xf30ee9 */ __asm { MOVQ XMM4,qword ptr [RBP + -0x10] }
    /* +0xf30eee */ __asm { MOVQ XMM2,qword ptr [RDI + 0x210] }
    /* +0xf30ef6 */ __asm { PSUBQ XMM2,XMM4 }
    /* +0xf30efa */ __asm { MOVQ qword ptr [RDI + 0x210],XMM2 }
    /* +0xf30f02 */ __asm { MOV R9,qword ptr [RBP + -0x20] }
    /* +0xf30f06 */ __asm { MOV RDX,qword ptr [RBP + -0x18] }
    /* +0xf30f0a */ __asm { TEST RDX,RDX }
    /* +0xf30f0d */ __asm { JZ 0x7fffa56a0f53 }
    /* +0xf30f0f */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xf30f16 */ __asm { MOV R10,0x0 }
    /* +0xf30f1d */ __asm { NOP }
    /* +0xf30f1e */ __asm { MOVZX R10D,uint8_t ptr [RDX + 0x18] }
    /* +0xf30f23 */ __asm { TEST R9,R9 }
    /* +0xf30f26 */ __asm { JZ 0x7fffa56a1001 }
    /* +0xf30f2c */ __asm { MOVZX R8D,uint8_t ptr [R9 + 0x18] }
    /* +0xf30f31 */ __asm { MOV EAX,R10D }
    /* +0xf30f34 */ __asm { OR AL,R8B }
    /* +0xf30f37 */ __asm { TEST AL,0x1 }
    /* +0xf30f39 */ __asm { JZ 0x7fffa56a10b6 }
    /* +0xf30f3f */ __asm { TEST R10B,R10B }
    /* +0xf30f42 */ __asm { JZ 0x7fffa56a1038 }
    /* +0xf30f48 */ __asm { TEST R8B,0x1 }
    /* +0xf30f4c */ __asm { JZ 0x7fffa56a0f76 }
    /* +0xf30f4e */ __asm { JMP 0x7fffa56a1006 }
    /* +0xf30f53 */ __asm { TEST R9,R9 }
    /* +0xf30f56 */ __asm { JZ 0x7fffa56a1006 }
    /* +0xf30f5c */ __asm { NOP }
    /* +0xf30f5d */ __asm { MOV R10,0x0 }
    /* +0xf30f64 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xf30f6b */ __asm { CMP uint8_t ptr [R9 + 0x18],0x0 }
    /* +0xf30f70 */ __asm { JNZ 0x7fffa56a1006 }
    /* +0xf30f76 */ __asm { MOV R8,qword ptr [R9 + 0x10] }
    /* +0xf30f7a */ __asm { MOV RAX,qword ptr [R9 + 0x20] }
    /* +0xf30f7e */ __asm { MOV RDX,qword ptr [R9 + 0x28] }
    /* +0xf30f82 */ __asm { SHR R8,0x6 }
    /* +0xf30f86 */ __asm { TEST RAX,RAX }
    /* +0xf30f89 */ __asm { JZ 0x7fffa56a0f8f }
    /* +0xf30f8b */ __asm { MOV qword ptr [RAX + 0x28],RDX }
    /* +0xf30f8f */ __asm { BSR RCX,R8 }
    /* +0xf30f93 */ __asm { TEST RDX,RDX }
    /* +0xf30f96 */ __asm { JZ 0x7fffa56a0faf }
    /* +0xf30f98 */ __asm { MOV R10,0x0 }
    /* +0xf30f9f */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xf30fa6 */ __asm { NOP }
    /* +0xf30fa7 */ __asm { MOV R8,qword ptr [R9 + 0x20] }
    /* +0xf30fab */ __asm { MOV qword ptr [RDX + 0x20],R8 }
    /* +0xf30faf */ __asm { CMP qword ptr [RDI + RCX*0x8],R9 }
    /* +0xf30fb3 */ __asm { JNZ 0x7fffa56a0fd3 }
    /* +0xf30fb5 */ __asm { MOV RDX,qword ptr [R9 + 0x20] }
    /* +0xf30fb9 */ __asm { MOV qword ptr [RDI + RCX*0x8],RDX }
    /* +0xf30fbd */ __asm { TEST RDX,RDX }
    /* +0xf30fc0 */ __asm { JNZ 0x7fffa56a0fd3 }
    /* +0xf30fc2 */ __asm { MOV RDX,-0x2 }
    /* +0xf30fc9 */ __asm { ROL RDX,CL }
    /* +0xf30fcc */ __asm { AND qword ptr [RDI + 0x200],RDX }
    /* +0xf30fd3 */ __asm { MOVQ XMM4,qword ptr [RBP + -0x10] }
    /* +0xf30fd8 */ __asm { MOVQ XMM2,qword ptr [R9 + 0x10] }
    /* +0xf30fde */ __asm { PADDQ XMM2,XMM4 }
    /* +0xf30fe2 */ __asm { MOVQ qword ptr [RBP + -0x10],XMM2 }
    /* +0xf30fe7 */ __asm { MOV qword ptr [R9 + 0x10],0x0 }
    /* +0xf30fef */ __asm { MOV R9,qword ptr [R9] }
    /* +0xf30ff2 */ __asm { MOV qword ptr [RBP + -0x20],R9 }
    /* +0xf30ff6 */ __asm { TEST R9,R9 }
    /* +0xf30ff9 */ __asm { JZ 0x7fffa56a1006 }
    /* +0xf30ffb */ __asm { MOV qword ptr [R9 + 0x8],R11 }
    /* +0xf30fff */ __asm { JMP 0x7fffa56a1006 }
    /* +0xf31001 */ __asm { TEST R10B,R10B }
    /* +0xf31004 */ __asm { JZ 0x7fffa56a1038 }
    /* +0xf31006 */ __asm { MOV R9,qword ptr [RBP + -0x10] }
    /* +0xf3100a */ __asm { SHR R9,0x6 }
    /* +0xf3100e */ __asm { BSR RCX,R9 }
    /* +0xf31012 */ __asm { MOV R9,qword ptr [RDI + RCX*0x8] }
    /* +0xf31016 */ __asm { MOV qword ptr [RBP + 0x8],0x0 }
    /* +0xf3101e */ __asm { MOV qword ptr [RBP],R9 }
    /* +0xf31022 */ __asm { MOV R9,qword ptr [RDI + RCX*0x8] }
    /* +0xf31026 */ __asm { TEST R9,R9 }
    /* +0xf31029 */ __asm { JZ 0x7fffa56a102f }
    /* +0xf3102b */ __asm { MOV qword ptr [R9 + 0x28],R11 }
    /* +0xf3102f */ __asm { MOV qword ptr [RDI + RCX*0x8],R11 }
    /* +0xf31033 */ __asm { JMP 0x7fffa56a1260 }
    /* +0xf31038 */ __asm { MOV R8,qword ptr [RDX + 0x10] }
    /* +0xf3103c */ __asm { MOV RAX,qword ptr [RDX + 0x20] }
    /* +0xf31040 */ __asm { SHR R8,0x6 }
    /* +0xf31044 */ __asm { MOV R11,qword ptr [RDX + 0x28] }
    /* +0xf31048 */ __asm { TEST RAX,RAX }
    /* +0xf3104b */ __asm { JZ 0x7fffa56a1051 }
    /* +0xf3104d */ __asm { MOV qword ptr [RAX + 0x28],R11 }
    /* +0xf31051 */ __asm { BSR RCX,R8 }
    /* +0xf31055 */ __asm { TEST R11,R11 }
    /* +0xf31058 */ __asm { JZ 0x7fffa56a1062 }
    /* +0xf3105a */ __asm { MOV R8,qword ptr [RDX + 0x20] }
    /* +0xf3105e */ __asm { MOV qword ptr [R11 + 0x20],R8 }
    /* +0xf31062 */ __asm { CMP qword ptr [RDI + RCX*0x8],RDX }
    /* +0xf31066 */ __asm { JNZ 0x7fffa56a1086 }
    /* +0xf31068 */ __asm { MOV R11,qword ptr [RDX + 0x20] }
    /* +0xf3106c */ __asm { MOV qword ptr [RDI + RCX*0x8],R11 }
    /* +0xf31070 */ __asm { TEST R11,R11 }
    /* +0xf31073 */ __asm { JNZ 0x7fffa56a1086 }
    /* +0xf31075 */ __asm { MOV R11,-0x2 }
    /* +0xf3107c */ __asm { ROL R11,CL }
    /* +0xf3107f */ __asm { AND qword ptr [RDI + 0x200],R11 }
    /* +0xf31086 */ __asm { MOVQ XMM4,qword ptr [RDX + 0x10] }
    /* +0xf3108b */ __asm { MOVQ XMM2,qword ptr [RBP + -0x10] }
    /* +0xf31090 */ __asm { PADDQ XMM2,XMM4 }
    /* +0xf31094 */ __asm { MOVQ qword ptr [RDX + 0x10],XMM2 }
    /* +0xf31099 */ __asm { MOV qword ptr [RBP + -0x10],0x0 }
    /* +0xf310a1 */ __asm { MOV qword ptr [RDX],R9 }
    /* +0xf310a4 */ __asm { TEST R9,R9 }
    /* +0xf310a7 */ __asm { JZ 0x7fffa56a1233 }
    /* +0xf310ad */ __asm { MOV qword ptr [R9 + 0x8],RDX }
    /* +0xf310b1 */ __asm { JMP 0x7fffa56a1233 }
    /* +0xf310b6 */ __asm { MOV R8,qword ptr [RDX + 0x10] }
    /* +0xf310ba */ __asm { MOV RAX,qword ptr [RDX + 0x20] }
    /* +0xf310be */ __asm { MOV RCX,R8 }
    /* +0xf310c1 */ __asm { OR RCX,0x6 }
    /* +0xf310c5 */ __asm { MOV R10D,0xfa5282e0 }
    /* +0xf310cb */ __asm { MOV R11,qword ptr [RDX + 0x28] }
    /* +0xf310cf */ __asm { NOT R10D }
    /* +0xf310d2 */ __asm { ADD R10D,R14D }
    /* +0xf310d5 */ __asm { ADD R10D,dword ptr [RSP + 0x28] }
    /* +0xf310da */ __asm { IMUL R10D,R10D,-0x6ef5ae0f }
    /* +0xf310e1 */ __asm { MOVSXD R10,R10D }
    /* +0xf310e4 */ __asm { SHR R8,0x6 }
    /* +0xf310e8 */ __asm { MOV EBP,0xf3a2ee0f }
    /* +0xf310ed */ __asm { CMP R10,RBP }
    /* +0xf310f0 */ __asm { CMOVZ R8,RCX }
    /* +0xf310f4 */ __asm { TEST RAX,RAX }
    /* +0xf310f7 */ __asm { JZ 0x7fffa56a10fd }
    /* +0xf310f9 */ __asm { MOV qword ptr [RAX + 0x28],R11 }
    /* +0xf310fd */ __asm { BSR RCX,R8 }
    /* +0xf31101 */ __asm { MOV R10,0x0 }
    /* +0xf31108 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xf3110f */ __asm { NOP }
    /* +0xf31110 */ __asm { TEST R11,R11 }
    /* +0xf31113 */ __asm { JZ 0x7fffa56a111d }
    /* +0xf31115 */ __asm { MOV R8,qword ptr [RDX + 0x20] }
    /* +0xf31119 */ __asm { MOV qword ptr [R11 + 0x20],R8 }
    /* +0xf3111d */ __asm { CMP qword ptr [RDI + RCX*0x8],RDX }
    /* +0xf31121 */ __asm { MOV RBP,qword ptr [RSP + 0x38] }
    /* +0xf31126 */ __asm { JNZ 0x7fffa56a1146 }
    /* +0xf31128 */ __asm { MOV R11,qword ptr [RDX + 0x20] }
    /* +0xf3112c */ __asm { MOV qword ptr [RDI + RCX*0x8],R11 }
    /* +0xf31130 */ __asm { TEST R11,R11 }
    /* +0xf31133 */ __asm { JNZ 0x7fffa56a1146 }
    /* +0xf31135 */ __asm { MOV R11,-0x2 }
    /* +0xf3113c */ __asm { ROL R11,CL }
    /* +0xf3113f */ __asm { AND qword ptr [RDI + 0x200],R11 }
    /* +0xf31146 */ __asm { MOV R10D,0x2aee87dd }
    /* +0xf3114c */ __asm { MOV R11,qword ptr [R9 + 0x10] }
    /* +0xf31150 */ __asm { MOV R8,qword ptr [R9 + 0x20] }
    /* +0xf31154 */ __asm { MOV EAX,0x2c1c8ede }
    /* +0xf31159 */ __asm { XOR EAX,0xedd1ff7e }
    /* +0xf3115e */ __asm { ADD EAX,R13D }
    /* +0xf31161 */ __asm { MOV ECX,R14D }
    /* +0xf31164 */ __asm { ROR EAX,CL }
    /* +0xf31166 */ __asm { SHR R11,0x6 }
    /* +0xf3116a */ __asm { NOT EAX }
    /* +0xf3116c */ __asm { ADD R10D,0x63aec6f8 }
    /* +0xf31173 */ __asm { XOR R10D,dword ptr [RSP + 0x28] }
    /* +0xf31178 */ __asm { ROR R10D,CL }
    /* +0xf3117b */ __asm { MOVSXD RCX,R10D }
    /* +0xf3117e */ __asm { XOR R10D,R10D }
    /* +0xf31181 */ __asm { XOR R14D,R14D }
    /* +0xf31184 */ __asm { TEST R8,R8 }
    /* +0xf31187 */ __asm { SETZ R10B }
    /* +0xf3118b */ __asm { SETLE R14B }
    /* +0xf3118f */ __asm { CMP RAX,RCX }
    /* +0xf31192 */ __asm { CMOVBE R14D,R10D }
    /* +0xf31196 */ __asm { MOV RAX,qword ptr [R9 + 0x28] }
    /* +0xf3119a */ __asm { TEST R14B,R14B }
    /* +0xf3119d */ __asm { JNZ 0x7fffa56a11b2 }
    /* +0xf3119f */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xf311a6 */ __asm { NOP }
    /* +0xf311a7 */ __asm { MOV R10,0x0 }
    /* +0xf311ae */ __asm { MOV qword ptr [R8 + 0x28],RAX }
    /* +0xf311b2 */ __asm { BSR RCX,R11 }
    /* +0xf311b6 */ __asm { TEST RAX,RAX }
    /* +0xf311b9 */ __asm { JZ 0x7fffa56a11c3 }
    /* +0xf311bb */ __asm { MOV R11,qword ptr [R9 + 0x20] }
    /* +0xf311bf */ __asm { MOV qword ptr [RAX + 0x20],R11 }
    /* +0xf311c3 */ __asm { CMP qword ptr [RDI + RCX*0x8],R9 }
    /* +0xf311c7 */ __asm { MOV R13,qword ptr [RSP + 0x48] }
    /* +0xf311cc */ __asm { JNZ 0x7fffa56a11ec }
    /* +0xf311ce */ __asm { MOV R11,qword ptr [R9 + 0x20] }
    /* +0xf311d2 */ __asm { MOV qword ptr [RDI + RCX*0x8],R11 }
    /* +0xf311d6 */ __asm { TEST R11,R11 }
    /* +0xf311d9 */ __asm { JNZ 0x7fffa56a11ec }
    /* +0xf311db */ __asm { MOV R11,-0x2 }
    /* +0xf311e2 */ __asm { ROL R11,CL }
    /* +0xf311e5 */ __asm { AND qword ptr [RDI + 0x200],R11 }
    /* +0xf311ec */ __asm { MOVQ XMM4,qword ptr [R9 + 0x10] }
    /* +0xf311f2 */ __asm { MOVQ XMM2,qword ptr [RBP + -0x10] }
    /* +0xf311f7 */ __asm { PADDQ XMM2,XMM4 }
    /* +0xf311fb */ __asm { MOVQ R11,XMM2 }
    /* +0xf31200 */ __asm { ADD qword ptr [RDX + 0x10],R11 }
    /* +0xf31204 */ __asm { MOV qword ptr [RBP + -0x10],0x0 }
    /* +0xf3120c */ __asm { MOV qword ptr [R9 + 0x10],0x0 }
    /* +0xf31214 */ __asm { MOV R9,qword ptr [R9] }
    /* +0xf31217 */ __asm { MOV qword ptr [RDX],R9 }
    /* +0xf3121a */ __asm { TEST R9,R9 }
    /* +0xf3121d */ __asm { JZ 0x7fffa56a1223 }
    /* +0xf3121f */ __asm { MOV qword ptr [R9 + 0x8],RDX }
    /* +0xf31223 */ __asm { NOP }
    /* +0xf31225 */ __asm { MOV R11,0x0 }
    /* +0xf3122c */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xf31233 */ __asm { MOV R9,qword ptr [RDX + 0x10] }
    /* +0xf31237 */ __asm { SHR R9,0x6 }
    /* +0xf3123b */ __asm { BSR RCX,R9 }
    /* +0xf3123f */ __asm { MOV R9,qword ptr [RDI + RCX*0x8] }
    /* +0xf31243 */ __asm { MOV qword ptr [RDX + 0x28],0x0 }
    /* +0xf3124b */ __asm { MOV qword ptr [RDX + 0x20],R9 }
    /* +0xf3124f */ __asm { MOV R9,qword ptr [RDI + RCX*0x8] }
    /* +0xf31253 */ __asm { TEST R9,R9 }
    /* +0xf31256 */ __asm { JZ 0x7fffa56a125c }
    /* +0xf31258 */ __asm { MOV qword ptr [R9 + 0x28],RDX }
    /* +0xf3125c */ __asm { MOV qword ptr [RDI + RCX*0x8],RDX }
    /* +0xf31260 */ __asm { MOV R9D,0x1 }
    /* +0xf31266 */ __asm { SHL R9,CL }
    /* +0xf31269 */ __asm { OR qword ptr [RDI + 0x200],R9 }
    /* +0xf31270 */ __asm { MOV EDX,dword ptr [RSI + 0x4] }
    /* +0xf31273 */ __asm { MOV R10W,0x735a }
    /* +0xf31278 */ __asm { XOR R13D,R10D }
    /* +0xf3127b */ __asm { IMUL R15D,R13D }
}


// ============================================================================
// Function : FUN_7fffa56a1360  |  RVA: 0xf31360  |  Size: 479 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56a1360(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                     uint32_t param_5)

{
  uint8_t *puVar1;
  uint8_t *puVar2;
  uint64_t uVar3;
  bool bVar4;
  uint64_t uVar5;
  uint8_t *puVar6;
  uint8_t (*pauVar7) [16];
  
  uVar5 = param_2 * -0x15e68211ffcfb9ed;
  uVar5 = (param_2 * -0x579a0847ff3ee7b4 | uVar5 >> 0x3e) ^
          (param_2 * -0x34108ffe7dcf6800 | uVar5 >> 0x35) ^ uVar5;
  uVar5 = (uVar5 << 4 | uVar5 >> 0x3c) ^ (uVar5 << 0x16 | uVar5 >> 0x2a) ^ uVar5;
  uVar5 = (uVar5 << 8 | uVar5 >> 0x38) ^ (uVar5 << 0x2c | uVar5 >> 0x14) ^ uVar5;
  uVar5 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ (uVar5 << 0x18 | uVar5 >> 0x28) ^ uVar5;
  uVar5 = (uVar5 << 0x30 | uVar5 >> 0x10) ^ (uVar5 << 0x20 | uVar5 >> 0x20) ^ uVar5;
  uVar3 = uVar5 >> 0x20;
  pauVar7 = (uint8_t (*) [16])((uVar3 << 0x3e) + (uVar5 << 0x20 | uVar3));
  puVar1 = *(uint8_t **)*pauVar7;
  if (puVar1 != (uint8_t *)0x0) {
    puVar2 = *(uint8_t **)(*pauVar7 + 8);
    bVar4 = puVar2 < puVar1;
    if (((param_5 ^ 0x26a22113) << 6 | (param_5 ^ 0x26a22113) >> 0x1a) + 0x89850527 <
        ((param_5 + 0xeaa037f3) * 0x80000 | param_5 + 0xeaa037f3 >> 0xd)) {
      bVar4 = puVar1 == puVar2;
    }
    if (!bVar4) {
      do {
        puVar6 = puVar1 + 0x20;
        if (0xf < *(uint64_t *)(puVar1 + 0x18)) {
          FUN_7fffa5687c30();
        }
        *(uint64_t *)(puVar1 + 0x10) = 0;
        *(uint64_t *)(puVar1 + 0x18) = 0xf;
        *puVar1 = 0;
        puVar1 = puVar6;
      } while (puVar6 != puVar2);
    }
    FUN_7fffa5687c30();
    *pauVar7 = (uint8_t  [16])0x0;
    *(uint64_t *)pauVar7[1] = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa56a1540  |  RVA: 0xf31540  |  Size: 71 bytes
// Callers  : FUN_7fffa55f6f60@0xe86f60
// Callees  : FUN_7fffa5488ca0@0xd18ca0, FUN_7fffa5453ab0@0xce3ab0
// ============================================================================
void FUN_7fffa56a1540(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)

{
  code *pcVar1;
  uint64_t uVar2;
  
  pcVar1 = (code *)FUN_7fffa5453ab0(param_1,param_2,param_4);
  (*pcVar1)(param_3);
  uVar2 = FUN_7fffa5488ca0();
  FUN_7fffa5453ab0(uVar2,param_2,2);
  return;
}


// ============================================================================
// Function : FUN_7fffa56a15d8  |  RVA: 0xf315d8  |  Size: 152 bytes
// Callers  : FUN_7fffa4cf5f50@0x585f50
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
void FUN_7fffa56a15d8(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint16_t *puVar3;
  int64_t lVar4;
  
  FUN_7fffa4ecf8e0(param_1 + 0x18,0,0x101);
  lVar2 = 0;
  *(uint64_t *)(param_1 + 4) = 0;
  *(uint64_t *)(param_1 + 0x220) = 0;
  puVar3 = (uint16_t *)(param_1 + 0xc);
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  lVar1 = 0;
  do {
    lVar4 = lVar1 + 1;
    *(uint8_t *)(param_1 + lVar1 + 0x18) = *(uint8_t *)(lVar1 + 0x7fffa4780268);
    lVar1 = lVar4;
  } while (lVar4 < 0x101);
  do {
    lVar1 = lVar2 + 1;
    *(uint8_t *)(param_1 + lVar2 + 0x119) = *(uint8_t *)(lVar2 + 0x7fffa4780369);
    lVar2 = lVar1;
  } while (lVar1 < 0x100);
  return;
}


// ============================================================================
// Function : FUN_7fffa56a1670  |  RVA: 0xf31670  |  Size: 532 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56a1670(uint64_t param_1)

{
  uint64_t uVar1;
  short sVar2;
  uint8_t bVar3;
  int64_t lVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint64_t unaff_R12;
  uint64_t uVar7;
  
  uVar6 = ~unaff_R12;
  uVar7 = (param_1 & 0xffffffff79d7a338 & unaff_R12) * -0x5d6d5c0f +
          ((unaff_R12 | param_1 | 0xffffffff79d7a338) - (param_1 & 0xffffffff79d7a338 & uVar6)) *
          0x107 + (~param_1 & 0x86285cc7 | uVar6) * -0x5d6d5c0f +
          (param_1 ^ 0x86285cc7 ^ unaff_R12) * -0x5d6d5c0f +
          ((param_1 ^ 0x86285cc7) & uVar6) * 0x5d6d5d16;
  uVar5 = (uint32_t)uVar7 | 1;
  sVar2 = (short)uVar5;
  lVar4 = (int64_t)(short)(sVar2 * 0x318d + -0x1cbb);
  *(uint8_t (*) [16])(lVar4 + 0x7fffa47899ee) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar4 + 0x7fffa47899de) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar4 + 0x7fffa47899ce) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar4 + 0x7fffa47899fe) = 0;
  *(uint64_t *)((int64_t)(int)(uVar5 * 0x731c0000 | uVar5 * -0x79d7a339 >> 0xe) + 0x7fffa478e97d)
       = (uVar7 ^ 0xf2ba56cb7f1d8417) * 0x246b0c5;
  lVar4 = lRam00007fffa47811d0;
  uVar6 = uRam00007fffa47812b8 << 0x2d;
  uVar1 = uRam00007fffa47812b8 >> 0x13;
  bVar3 = (uint8_t)uVar7;
  *(uint64_t *)
   ((int64_t)(int)(0x18ffff75 << (bVar3 & 0x1f) | 0x18ffff75U >> 0x20 - (bVar3 & 0x1f)) +
   0x7fffa478e500) = (uint64_t)(0U >> (bVar3 & 0x1f) | 0 << 0x20 - (bVar3 & 0x1f));
  uVar6 = ((lVar4 - (uVar6 | uVar1)) + 0x31401c40b01be09e ^ 0x97d9a1799769b184) * -0x7ff001ffc007ff;
  uRam00007fffa4785a08 = uVar6 << 0x31 | uVar6 >> 0xf;
  *(int64_t *)
   ((int64_t)
    (int)((-0x172325b1 << (bVar3 & 0x1f) | 0xe8dcda4fU >> 0x20 - (bVar3 & 0x1f)) * 0x5a3a11b) +
   0x7fffa4790498) =
       -0x5ef12b1cc0de921e -
       (int64_t)
       (&UNK_7fffa56f532a +
       (int)(-0x7100008a << (bVar3 & 0x1f) | 0x8effff76U >> 0x20 - (bVar3 & 0x1f)));
  *(uint64_t *)
   ((int64_t)(short)(sVar2 * 0x5f20 | (uint16_t)(sVar2 * -0x7507) >> 0xb) + 0x7fffa478a1f4) =
       uRam00007fffa4780ba0;
  *(uint64_t *)((int64_t)(short)((short)uVar7 + 0x5e27) + 0x7fffa478a101) =
       ((int64_t)&UNWIND_INFO_7fffa587e108 +
       (int64_t)(int)(-0x470000d8 << (bVar3 & 0x1f) | 0xb8ffff28U >> 0x20 - (bVar3 & 0x1f))) *
       0x3683426fdf4204e5 + 0x5e575f524240b23cU ^ 0x4c057ffbdaa9b9aa;
  *(uint64_t *)((int64_t)(int)~(uVar5 * 0x54b3f0f9) + 0x7fffa47955ea) =
       uVar7 + 0x17fd001e0e185fc ^ 0x3e0ee6fb;
  uVar5 = 0x5d69e4b7 - (uint32_t)uVar7;
  uVar6 = (uRam00007fffa4780d58 ^ 0xa5fa36e9924798cf) * -0x729a63941da1a8bf + 0x62b6936157d77f9f;
  uVar6 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
          (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
          (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f) << 4 | uVar6 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333) * 4;
  *(uint64_t *)((int64_t)(int)(uVar5 * 0x40000000 | uVar5 >> 2) + 0x7fffa47937cd) =
       (uVar6 >> 1 & 0x5555555555555555) + (uVar6 & 0x5555555555555555) * 2;
  return;
}


// ============================================================================
// Function : FUN_7fffa56a1b90  |  RVA: 0xf31b90  |  Size: 715 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56a1b90(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint8_t bVar1;
  uint32_t uVar2;
  int iVar3;
  uint8_t bVar4;
  uint16_t uVar5;
  code *pcVar6;
  int64_t lVar7;
  int64_t lVar8;
  short sVar9;
  uint8_t auVar10 [16];
  uint8_t auStack_f423d [999957];
  
  bVar4 = (uint8_t)(param_2 & 0xffffffff);
  bVar1 = bVar4 & 0x1f;
  uVar2 = 0xb13a6accU >> bVar1 | -0x4ec59534 << 0x20 - bVar1;
  bVar4 = bVar4 & 0x1f;
  if ((int)uVar2 < (int)(0x788bed0f << bVar4 | 0x788bed0fU >> 0x20 - bVar4)) {
    lVar8 = (param_3 ^ 0x749b8684) - 0x4722edf4;
  }
  else {
    lVar8 = ((param_3 >> 0x20) * 0x4722edf4 << 0x20) +
            ((param_3 ^ 0x749b8684) & 0xffffffff) * 0x4722edf4;
  }
  iVar3 = (int)CONCAT62((uint6)(uint16_t)(uVar2 >> 0x10),0x15b) * 0x67cf;
  sVar9 = (short)iVar3 - (uint16_t)param_2;
  pcVar6 = (code *)((int64_t)sVar9 + 0x7fffa54996cf);
  lVar7 = (int64_t)register0x00000020 + -0x319d5ef9;
  auVar10._8_4_ = (int)lVar7;
  auVar10._0_8_ = lVar7;
  auVar10._12_4_ = (int)((uint64_t)lVar7 >> 0x20);
  (*pcVar6)(param_2 & 0xffffffff,
            CONCAT22((short)((uint32_t)iVar3 >> 0x10) - (short)(param_2 >> 0x10),sVar9),pcVar6,
            (int)(auVar10._8_8_ + -0x8ed0da6));
  uVar2 = (uint32_t)param_2 | 1;
  if ((int)(uVar2 * 0x4f4ee61e) <= (int)(uVar2 * 0x6664c405) && lVar8 == -0x9ec56bba) {
    uVar5 = (uint16_t)param_2 ^ 0x5877;
    (*(code *)(&UNK_7fffa55b184b + (short)((uVar5 << 0xc | uVar5 >> 4) + 0x9849)))(0);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa56a1f00  |  RVA: 0xf31f00  |  Size: 68 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa56a1f00(void)

{
  uint64_t in_RAX;
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)(in_RAX >> 0x2f ^ in_RAX);
  if (*(int64_t *)*puVar1 != 0) {
    FUN_7fffa56a5f20(*(int64_t *)puVar1[1] + 0x28,*(int64_t *)*puVar1,*(uint64_t *)puVar1[2],
                     0xf8c48ee8);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa56a1f50  |  RVA: 0xf31f50  |  Size: 293 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56a1f50(uint32_t param_1)

{
  uint64_t uVar1;
  uint32_t in_EAX;
  uint64_t uVar2;
  uint64_t in_XMM0_Qa;
  uint8_t auStack_38 [8];
  int64_t lStack_30;
  uint32_t uStack_24;
  int64_t *plStack_20;
  uint8_t *puStack_18;
  uint32_t *puStack_10;
  
  param_1 = param_1 >> 5 ^ param_1;
  param_1 = param_1 >> 10 ^ param_1;
  uStack_24 = param_1 >> 0x14 ^ param_1;
  uVar2 = (in_XMM0_Qa << 0x30 | in_XMM0_Qa >> 0x10) ^ 0x7ace172;
  uVar2 = (uVar2 << 0x2e | uVar2 >> 0x12) ^ (uVar2 << 1 | (uint64_t)((int64_t)uVar2 < 0)) ^ uVar2;
  uVar2 = (uVar2 << 2 | uVar2 >> 0x3e) ^ (uVar2 << 0x1c | uVar2 >> 0x24) ^ uVar2;
  uVar2 = (uVar2 << 4 | uVar2 >> 0x3c) ^ (uVar2 << 0x38 | uVar2 >> 8) ^ uVar2;
  uVar2 = (uVar2 << 8 | uVar2 >> 0x38) ^ (uVar2 << 0x30 | uVar2 >> 0x10) ^ uVar2;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ (uVar2 << 0x20 | uVar2 >> 0x20) ^ uVar2;
  uVar1 = uVar2 >> 0x20;
  lStack_30 = (uVar2 << 0x20 | uVar1) - (uVar1 << 0x21);
  puStack_18 = auStack_38;
  puStack_10 = &uStack_24;
  plStack_20 = &lStack_30;
  (*(code *)(&UNK_7fffa518d8b9 + (int)((in_EAX ^ 0x3e607d65) + 0x37698f02)))();
  return;
}


// ============================================================================
// Function : FUN_7fffa56a2080  |  RVA: 0xf32080  |  Size: 2037 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa56a2080(void) {
    /* +0xf32080 */ __asm { PUSH R12 }
    /* +0xf32082 */ __asm { PUSH R13 }
    /* +0xf32084 */ __asm { PUSH RBP }
    /* +0xf32085 */ __asm { PUSH RSI }
    /* +0xf32086 */ __asm { PUSH R15 }
    /* +0xf32088 */ __asm { PUSH RBX }
    /* +0xf32089 */ __asm { PUSH R14 }
    /* +0xf3208b */ __asm { PUSH RDI }
    /* +0xf3208c */ __asm { SUB RSP,0x78 }
    /* +0xf32090 */ __asm { MOV RSI,RAX }
    /* +0xf32093 */ __asm { MOV R9,R8 }
    /* +0xf32096 */ __asm { ROL R9,0x32 }
    /* +0xf3209a */ __asm { ROL R11,0x9 }
    /* +0xf3209e */ __asm { MOV RDI,0xfffffc00001 }
    /* +0xf320a8 */ __asm { IMUL RDI,R11 }
    /* +0xf320ac */ __asm { MOVQ XMM3,R8 }
    /* +0xf320b1 */ __asm { MOVQ XMM2,R9 }
    /* +0xf320b6 */ __asm { PXOR XMM2,XMM3 }
    /* +0xf320ba */ __asm { MOV EBP,ESI }
    /* +0xf320bc */ __asm { OR EBP,0x1 }
    /* +0xf320bf */ __asm { RDTSC }
    /* +0xf320c1 */ __asm { SHL RDX,0x20 }
    /* +0xf320c5 */ __asm { OR RDX,RAX }
    /* +0xf320c8 */ __asm { ROL R8,0x2a }
    /* +0xf320cc */ __asm { MOV R9D,0x536df81a }
    /* +0xf320d2 */ __asm { XOR R9D,0xb40b1504 }
    /* +0xf320d9 */ __asm { IMUL R9D,EBP }
    /* +0xf320dd */ __asm { MOVSXD R9,R9D }
    /* +0xf320e0 */ __asm { MOVQ RCX,XMM2 }
    /* +0xf320e5 */ __asm { MOV R11,RCX }
    /* +0xf320e8 */ __asm { XOR R11,R8 }
    /* +0xf320eb */ __asm { OR R8,RCX }
    /* +0xf320ee */ __asm { CMP R9,-0x64c9dbee }
    /* +0xf320f5 */ __asm { CMOVZ R8,R11 }
    /* +0xf320f9 */ __asm { MOV RCX,R8 }
    /* +0xf320fc */ __asm { ROL RCX,0x24 }
    /* +0xf32100 */ __asm { MOV R9,R8 }
    /* +0xf32103 */ __asm { ROL R9,0x14 }
    /* +0xf32107 */ __asm { XOR R9,RCX }
    /* +0xf3210a */ __asm { XOR R9,R8 }
    /* +0xf3210d */ __asm { MOV R8,R9 }
    /* +0xf32110 */ __asm { ROL R8,0x28 }
    /* +0xf32114 */ __asm { MOV R13,R9 }
    /* +0xf32117 */ __asm { ROL R13,0x8 }
    /* +0xf3211b */ __asm { XOR R13,R8 }
    /* +0xf3211e */ __asm { MOV R8,-0x30ebf64fafbc6efb }
    /* +0xf32128 */ __asm { IMUL R8,RDX }
    /* +0xf3212c */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0xf32136 */ __asm { ADD RAX,R8 }
    /* +0xf32139 */ __asm { MOV RCX,RAX }
    /* +0xf3213c */ __asm { SHR RCX,0x3b }
    /* +0xf32140 */ __asm { MOV RDX,RAX }
    /* +0xf32143 */ __asm { SHR RDX,0x1b }
    /* +0xf32147 */ __asm { SHR RAX,0x2d }
    /* +0xf3214b */ __asm { XOR EAX,EDX }
    /* +0xf3214d */ __asm { ROR EAX,CL }
    /* +0xf3214f */ __asm { XOR R13,R9 }
    /* +0xf32152 */ __asm { AND EAX,0x3 }
    /* +0xf32155 */ __asm { CMP EAX,0x2 }
    /* +0xf32158 */ __asm { JC 0x7fffa56a2341 }
    /* +0xf3215e */ __asm { CMP EAX,0x3 }
    /* +0xf32161 */ __asm { JZ 0x7fffa56a258d }
    /* +0xf32167 */ __asm { PXOR XMM3,XMM3 }
    /* +0xf3216b */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM3 }
    /* +0xf32171 */ __asm { MOV dword ptr [RSP + 0x58],0xa6feebb6 }
    /* +0xf32179 */ __asm { MOV R9D,dword ptr [RSP + 0x58] }
    /* +0xf3217e */ __asm { MOV EAX,0x1fd70300 }
    /* +0xf32183 */ __asm { ADD EAX,0x6222d15f }
    /* +0xf32188 */ __asm { MOV ECX,ESI }
    /* +0xf3218a */ __asm { ROR EAX,CL }
    /* +0xf3218c */ __asm { CMP R9D,EAX }
    /* +0xf3218f */ __asm { JBE 0x7fffa56a2bf1 }
    /* +0xf32195 */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0xf3219d */ __asm { MOV R9W,0xc61a }
    /* +0xf321a2 */ __asm { ADD R9D,ESI }
    /* +0xf321a5 */ __asm { ROL R9W,0x7 }
    /* +0xf321aa */ __asm { MOVZX EAX,R9W }
    /* +0xf321ae */ __asm { MOV R9,qword ptr GS:[RAX] }
    /* +0xf321b2 */ __asm { MOV EAX,ESI }
    /* +0xf321b4 */ __asm { OR EAX,0x1 }
    /* +0xf321b7 */ __asm { MOV R11W,0x5629 }
    /* +0xf321bc */ __asm { IMUL R11D,EAX }
    /* +0xf321c0 */ __asm { NOT R11D }
    /* +0xf321c3 */ __asm { ROL R11W,0x8 }
    /* +0xf321c8 */ __asm { MOVZX EAX,R11W }
    /* +0xf321cc */ __asm { MOV R9,qword ptr [R9 + 0x3d0] }
    /* +0xf321d3 */ __asm { MOV RDX,qword ptr GS:[RAX] }
    /* +0xf321d7 */ __asm { ADD R9,qword ptr [RDX + 0xa88] }
    /* +0xf321de */ __asm { MOV RDX,-0x5576c5e6340f9a71 }
    /* +0xf321e8 */ __asm { CMP R9,RDX }
    /* +0xf321eb */ __asm { NOP }
    /* +0xf321ec */ __asm { NOP }
    /* +0xf321ed */ __asm { NOP }
    /* +0xf321ee */ __asm { NOP }
    /* +0xf321ef */ __asm { NOP }
    /* +0xf321f0 */ __asm { MOV R9D,0xe7e6af72 }
    /* +0xf321f6 */ __asm { ADD R9D,ESI }
    /* +0xf321f9 */ __asm { ROL R9D,0x1a }
    /* +0xf321fd */ __asm { ADD R9D,0xa6332e40 }
    /* +0xf32204 */ __asm { MOV dword ptr [RSP + 0x58],R9D }
    /* +0xf32209 */ __asm { MOV R9D,dword ptr [RSP + 0x58] }
    /* +0xf3220e */ __asm { LEA RAX,[0x7fffa4780df9] }
    /* +0xf32215 */ __asm { MOV R9,-0x6e336dcce53371b0 }
    /* +0xf3221f */ __asm { CMP RAX,R9 }
    /* +0xf32222 */ __asm { JZ 0x7fffa56a2c0c }
    /* +0xf32228 */ __asm { MOV R9W,0xca4a }
    /* +0xf3222d */ __asm { MOV RDX,0x4624b5d7815dd7e1 }
    /* +0xf32237 */ __asm { MOV R8,0x4000000025b }
    /* +0xf32241 */ __asm { XOR R8,RDX }
    /* +0xf32244 */ __asm { MOVD XMM3,ESI }
    /* +0xf32248 */ __asm { MOV R11W,0x9c35 }
    /* +0xf3224d */ __asm { ROL R8,0x19 }
    /* +0xf32251 */ __asm { MOV RBP,RSI }
    /* +0xf32254 */ __asm { ADD RBP,R8 }
    /* +0xf32257 */ __asm { MOV R10D,0xdf06f9e6 }
    /* +0xf3225d */ __asm { LEA R12,[0x7fffa47c41df] }
    /* +0xf32264 */ __asm { MOVD XMM2,R10D }
    /* +0xf32269 */ __asm { PXOR XMM2,XMM3 }
    /* +0xf3226d */ __asm { MOVD R10D,XMM2 }
    /* +0xf32272 */ __asm { NOT R10D }
    /* +0xf32275 */ __asm { ROL R10D,0xf }
    /* +0xf32279 */ __asm { MOV RDX,R12 }
    /* +0xf3227c */ __asm { ROL RDX,0xd }
    /* +0xf32280 */ __asm { MOV R8,0x51e2dae4436b7b39 }
    /* +0xf3228a */ __asm { IMUL R8,RDX }
    /* +0xf3228e */ __asm { MOV R15,-0x1a3f3fd49541f102 }
    /* +0xf32298 */ __asm { ADD R15,R8 }
    /* +0xf3229b */ __asm { MOVSXD R10,R10D }
    /* +0xf3229e */ __asm { MOVD XMM3,R9D }
    /* +0xf322a3 */ __asm { MOVD XMM2,ESI }
    /* +0xf322a7 */ __asm { PADDW XMM2,XMM3 }
    /* +0xf322ab */ __asm { MOVD R9D,XMM2 }
    /* +0xf322b0 */ __asm { IMUL R9D,R9D,-0x1f95 }
    /* +0xf322b7 */ __asm { MOVZX R9D,R9W }
    /* +0xf322bb */ __asm { MOV qword ptr [RSP + 0x58],RDX }
    /* +0xf322c0 */ __asm { MOV EAX,dword ptr [RAX + 0x4093] }
    /* +0xf322c6 */ __asm { ADD R11D,ESI }
    /* +0xf322c9 */ __asm { ROL R11W,0xa }
    /* +0xf322ce */ __asm { IMUL R11D,R11D,0xf6f }
    /* +0xf322d5 */ __asm { MOVZX EDX,R11W }
    /* +0xf322d9 */ __asm { LEA R8,[RSP + 0x60] }
    /* +0xf322de */ __asm { SYSCALL }
    /* +0xf322e0 */ __asm { CMP RBP,R15 }
    /* +0xf322e3 */ __asm { JZ 0x7fffa56a2c17 }
    /* +0xf322e9 */ __asm { MOV R9W,0x72a4 }
    /* +0xf322ee */ __asm { MOV R10W,0xede3 }
    /* +0xf322f3 */ __asm { XOR R9D,0xffffa87a }
    /* +0xf322fa */ __asm { MOV R11W,0x6f0b }
    /* +0xf322ff */ __asm { ADD R9D,0x2522 }
    /* +0xf32306 */ __asm { MOV qword ptr [RSP + 0x60],RAX }
    /* +0xf3230b */ __asm { MOV EAX,dword ptr [R12 + -0x71cf] }
    /* +0xf32313 */ __asm { ADD R11D,0xffff9cf5 }
    /* +0xf3231a */ __asm { MOV ECX,ESI }
    /* +0xf3231c */ __asm { ROR R11W,CL }
    /* +0xf32320 */ __asm { MOVZX EDX,R11W }
    /* +0xf32324 */ __asm { LEA ECX,[RSI + R10*0x1] }
    /* +0xf32328 */ __asm { ADD ECX,0x1836 }
    /* +0xf3232e */ __asm { MOVSX R10,CX }
    /* +0xf32332 */ __asm { MOV ECX,ESI }
    /* +0xf32334 */ __asm { ROL R9W,CL }
    /* +0xf32338 */ __asm { MOVZX R8D,R9W }
    /* +0xf3233c */ __asm { JMP 0x7fffa56a2bc0 }
    /* +0xf32341 */ __asm { MOV R9W,0xf6a4 }
    /* +0xf32346 */ __asm { MOVD XMM3,R9D }
    /* +0xf3234b */ __asm { MOV R14D,ESI }
    /* +0xf3234e */ __asm { OR R14D,0x1 }
    /* +0xf32352 */ __asm { MOVD XMM2,R14D }
    /* +0xf32357 */ __asm { PMULLW XMM2,XMM3 }
    /* +0xf3235b */ __asm { MOVD R9D,XMM2 }
    /* +0xf32360 */ __asm { ADD R9D,0x497d }
    /* +0xf32367 */ __asm { XOR R9D,0x5b78 }
    /* +0xf3236e */ __asm { MOVZX R9D,R9W }
    /* +0xf32372 */ __asm { CMP EAX,R9D }
    /* +0xf32375 */ __asm { JZ 0x7fffa56a2770 }
    /* +0xf3237b */ __asm { MOV EAX,0x56707eb0 }
    /* +0xf32380 */ __asm { MOV R9,0x59ae38269908b7ac }
    /* +0xf3238a */ __asm { CMP RAX,R9 }
    /* +0xf3238d */ __asm { JNZ 0x7fffa56a2392 }
    /* +0xf3238f */ __asm { OR dword ptr DS:[RCX],ESP }
    /* +0xf32392 */ __asm { MOV R11W,0x501 }
    /* +0xf32397 */ __asm { MOV R9,qword ptr [RAX + 0x298d8158] }
    /* +0xf3239e */ __asm { MOV RDX,0x45345318800054a }
    /* +0xf323a8 */ __asm { MOV RAX,R9 }
    /* +0xf323ab */ __asm { MUL RDX }
    /* +0xf323ae */ __asm { MOV R8,RDX }
    /* +0xf323b1 */ __asm { MOV EDX,0x14635cb }
    /* +0xf323b6 */ __asm { MOV RAX,R9 }
    /* +0xf323b9 */ __asm { MUL RDX }
    /* +0xf323bc */ __asm { ADD R11D,0xffff9e33 }
    /* +0xf323c3 */ __asm { ADD RAX,R8 }
    /* +0xf323c6 */ __asm { ADC RDX,0x0 }
    /* +0xf323ca */ __asm { AND EDX,0x1 }
    /* +0xf323cd */ __asm { MOV R9D,R14D }
    /* +0xf323d0 */ __asm { IMUL R9D,R11D }
    /* +0xf323d4 */ __asm { XOR R9D,0xd7ec }
    /* +0xf323db */ __asm { MOVZX EAX,R9W }
    /* +0xf323df */ __asm { OR RAX,RDX }
    /* +0xf323e2 */ __asm { JZ 0x7fffa56a292c }
    /* +0xf323e8 */ __asm { PXOR XMM3,XMM3 }
    /* +0xf323ec */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM3 }
    /* +0xf323f2 */ __asm { MOV dword ptr [RSP + 0x58],0x154890 }
    /* +0xf323fa */ __asm { MOV R9D,dword ptr [RSP + 0x58] }
    /* +0xf323ff */ __asm { CMP R9D,0xd18b47f2 }
    /* +0xf32406 */ __asm { NOP }
    /* +0xf32407 */ __asm { NOP }
    /* +0xf32408 */ __asm { NOP }
    /* +0xf32409 */ __asm { NOP }
    /* +0xf3240a */ __asm { NOP }
    /* +0xf3240b */ __asm { MOVQ XMM3,RSI }
    /* +0xf32410 */ __asm { MOV R9,0x59992befca69c56 }
    /* +0xf3241a */ __asm { MOV EDX,0xa97303ea }
    /* +0xf3241f */ __asm { XOR RDX,R9 }
    /* +0xf32422 */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0xf3242a */ __asm { MOV RAX,0x2ebe98dbc490e4c1 }
    /* +0xf32434 */ __asm { ROL RDX,0x35 }
    /* +0xf32438 */ __asm { MOVQ XMM2,RDX }
    /* +0xf3243d */ __asm { PSUBQ XMM2,XMM3 }
    /* +0xf32441 */ __asm { MOV R9,-0xf98 }
    /* +0xf32448 */ __asm { ADD R9,qword ptr [RSP + 0xb8] }
    /* +0xf32450 */ __asm { MOVQ XMM3,R9 }
    /* +0xf32455 */ __asm { MOVQ R9,XMM2 }
    /* +0xf3245a */ __asm { MOVQ XMM2,RAX }
    /* +0xf3245f */ __asm { PSUBQ XMM3,XMM2 }
    /* +0xf32463 */ __asm { MOVQ RDX,XMM3 }
    /* +0xf32468 */ __asm { XOR RDX,0xc71474c }
    /* +0xf3246f */ __asm { MOV R8,0x4e7634343aa11e6f }
    /* +0xf32479 */ __asm { IMUL R8,RDX }
    /* +0xf3247d */ __asm { CMP R9,R8 }
    /* +0xf32480 */ __asm { NOP }
    /* +0xf32481 */ __asm { NOP }
    /* +0xf32482 */ __asm { NOP }
    /* +0xf32483 */ __asm { NOP }
    /* +0xf32484 */ __asm { NOP }
    /* +0xf32485 */ __asm { MOV R9D,0x8447033e }
    /* +0xf3248b */ __asm { XOR R9D,ESI }
    /* +0xf3248e */ __asm { ADD R9D,0xcf5499a0 }
    /* +0xf32495 */ __asm { MOV dword ptr [RSP + 0x58],R9D }
    /* +0xf3249a */ __asm { MOV R9D,dword ptr [RSP + 0x58] }
    /* +0xf3249f */ __asm { CMP R9D,0x3ea93699 }
    /* +0xf324a6 */ __asm { JNC 0x7fffa56a2c36 }
    /* +0xf324ac */ __asm { LEA RAX,[0x7fffa47be07e] }
    /* +0xf324b3 */ __asm { MOV R9,-0x141f318957a51eb3 }
    /* +0xf324bd */ __asm { CMP RAX,R9 }
    /* +0xf324c0 */ __asm { JZ 0x7fffa56a2c3d }
    /* +0xf324c6 */ __asm { LEA R12,[0x7fffa4789180] }
    /* +0xf324cd */ __asm { MOV qword ptr [RSP + 0x58],R10 }
    /* +0xf324d2 */ __asm { MOV R9W,0x2281 }
    /* +0xf324d7 */ __asm { MOV EAX,dword ptr [RAX + -0x1bb6] }
    /* +0xf324dd */ __asm { MOV R11W,0x8eea }
    /* +0xf324e2 */ __asm { MOV R10W,0xc4cc }
    /* +0xf324e7 */ __asm { IMUL R10D,R14D }
    /* +0xf324eb */ __asm { ROL R10W,0x1 }
    /* +0xf324ef */ __asm { MOVZX EDX,R10W }
    /* +0xf324f3 */ __asm { IMUL ECX,R11D,0x4905 }
    /* +0xf324fa */ __asm { SUB ECX,ESI }
    /* +0xf324fc */ __asm { ADD ECX,0x7553 }
    /* +0xf32502 */ __asm { MOVSX R10,CX }
    /* +0xf32506 */ __asm { XOR R9D,0x1dd1 }
    /* +0xf3250d */ __asm { IMUL R9D,R9D,0x305d }
    /* +0xf32514 */ __asm { MOVZX R9D,R9W }
    /* +0xf32518 */ __asm { LEA R8,[RSP + 0x60] }
    /* +0xf3251d */ __asm { SYSCALL }
    /* +0xf3251f */ __asm { MOV R9,-0x13847d7df73c3baa }
    /* +0xf32529 */ __asm { CMP R12,R9 }
    /* +0xf3252c */ __asm { JZ 0x7fffa56a2c4d }
    /* +0xf32532 */ __asm { MOVD XMM3,ESI }
    /* +0xf32536 */ __asm { MOV R9W,0x4770 }
    /* +0xf3253b */ __asm { MOVD XMM2,R9D }
    /* +0xf32540 */ __asm { MOV R9D,0x3bfa07d5 }
    /* +0xf32546 */ __asm { MOV qword ptr [RSP + 0x60],RAX }
    /* +0xf3254b */ __asm { MOV AX,0x13b2 }
    /* +0xf3254f */ __asm { XOR EAX,ESI }
    /* +0xf32551 */ __asm { XOR EAX,0xea54 }
    /* +0xf32556 */ __asm { MOVZX R8D,AX }
    /* +0xf3255a */ __asm { PXOR XMM2,XMM3 }
    /* +0xf3255e */ __asm { XOR R9D,0xf968f1fc }
    /* +0xf32565 */ __asm { IMUL R9D,EBP }
    /* +0xf32569 */ __asm { ROL R9D,0x1e }
    /* +0xf3256d */ __asm { MOVSXD R10,R9D }
    /* +0xf32570 */ __asm { MOV EAX,dword ptr [R12 + -0x4b10] }
    /* +0xf32578 */ __asm { MOVD R9D,XMM2 }
    /* +0xf3257d */ __asm { ADD R9D,0x419a }
    /* +0xf32584 */ __asm { MOVZX EDX,R9W }
    /* +0xf32588 */ __asm { JMP 0x7fffa56a2bc0 }
    /* +0xf3258d */ __asm { PUSHFQ }
    /* +0xf3258e */ __asm { POP R9 }
    /* +0xf32590 */ __asm { PXOR XMM3,XMM3 }
    /* +0xf32594 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM3 }
    /* +0xf3259a */ __asm { TEST R9D,0x100 }
    /* +0xf325a1 */ __asm { NOP }
    /* +0xf325a2 */ __asm { NOP }
    /* +0xf325a3 */ __asm { NOP }
    /* +0xf325a4 */ __asm { NOP }
    /* +0xf325a5 */ __asm { NOP }
    /* +0xf325a6 */ __asm { MOV dword ptr [RSP + 0x58],0x41467b23 }
    /* +0xf325ae */ __asm { MOV R9D,dword ptr [RSP + 0x58] }
    /* +0xf325b3 */ __asm { TEST R9D,R9D }
    /* +0xf325b6 */ __asm { NOP }
    /* +0xf325b7 */ __asm { NOP }
    /* +0xf325b8 */ __asm { NOP }
    /* +0xf325b9 */ __asm { NOP }
    /* +0xf325ba */ __asm { NOP }
    /* +0xf325bb */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0xf325c3 */ __asm { MOV dword ptr [RSP + 0x58],0x840e6138 }
    /* +0xf325cb */ __asm { MOV R9D,dword ptr [RSP + 0x58] }
    /* +0xf325d0 */ __asm { AND R9D,0x1 }
    /* +0xf325d4 */ __asm { MOV AX,0xf9e6 }
    /* +0xf325d8 */ __asm { MOVD XMM3,EAX }
    /* +0xf325dc */ __asm { MOVD XMM2,ESI }
    /* +0xf325e0 */ __asm { PXOR XMM2,XMM3 }
    /* +0xf325e4 */ __asm { MOVD EAX,XMM2 }
    /* +0xf325e8 */ __asm { ROL AX,0x8 }
    /* +0xf325ec */ __asm { MOVZX EAX,AX }
    /* +0xf325ef */ __asm { CMP R9D,EAX }
    /* +0xf325f2 */ __asm { NOP }
    /* +0xf325f3 */ __asm { NOP }
    /* +0xf325f4 */ __asm { NOP }
    /* +0xf325f5 */ __asm { NOP }
    /* +0xf325f6 */ __asm { NOP }
    /* +0xf325f7 */ __asm { MOV R9,RSI }
    /* +0xf325fa */ __asm { OR R9,0x1 }
    /* +0xf325fe */ __asm { MOV EAX,0x980564d0 }
    /* +0xf32603 */ __asm { SUB EAX,ESI }
    /* +0xf32605 */ __asm { ADD EAX,0x4f01752d }
    /* +0xf3260a */ __asm { ROL EAX,0x4 }
    /* +0xf3260d */ __asm { MOV RDX,qword ptr [RAX] }
    /* +0xf32610 */ __asm { MOV R8,-0x248f7c6ff689b840 }
    /* +0xf3261a */ __asm { ADD R8,-0x26d288b1 }
    /* +0xf32621 */ __asm { IMUL R8,R9 }
    /* +0xf32625 */ __asm { CMP RDX,R8 }
    /* +0xf32628 */ __asm { NOP }
    /* +0xf32629 */ __asm { NOP }
    /* +0xf3262a */ __asm { NOP }
    /* +0xf3262b */ __asm { NOP }
    /* +0xf3262c */ __asm { NOP }
    /* +0xf3262d */ __asm { NOP }
    /* +0xf3262e */ __asm { NOP }
    /* +0xf3262f */ __asm { NOP }
    /* +0xf32630 */ __asm { NOP }
    /* +0xf32631 */ __asm { MOV qword ptr [RSP + 0x70],RDI }
    /* +0xf32636 */ __asm { LEA RAX,[0x7fffa47809b9] }
    /* +0xf3263d */ __asm { MOV R9,-0x6427744f3367df68 }
    /* +0xf32647 */ __asm { CMP RAX,R9 }
    /* +0xf3264a */ __asm { JNZ 0x7fffa56a2654 }
    /* +0xf3264c */ __asm { NOP }
    /* +0xf3264d */ __asm { NOP }
    /* +0xf3264e */ __asm { NOP }
    /* +0xf3264f */ __asm { NOP }
    /* +0xf32650 */ __asm { NOP }
    /* +0xf32651 */ __asm { NOP }
    /* +0xf32652 */ __asm { NOP }
    /* +0xf32653 */ __asm { NOP }
    /* +0xf32654 */ __asm { NOP }
    /* +0xf32655 */ __asm { NOP }
    /* +0xf32656 */ __asm { NOP }
    /* +0xf32657 */ __asm { NOP }
    /* +0xf32658 */ __asm { NOP }
    /* +0xf32659 */ __asm { NOP }
    /* +0xf3265a */ __asm { NOP }
    /* +0xf3265b */ __asm { NOP }
    /* +0xf3265c */ __asm { NOP }
    /* +0xf32770 */ __asm { MOV R9D,0xcfc1f145 }
    /* +0xf32776 */ __asm { MOV EAX,0x7ad530bd }
    /* +0xf3277b */ __asm { MOV RDX,0xea3d0e253acd96b }
    /* +0xf32785 */ __asm { CMP RAX,RDX }
    /* +0xf32788 */ __asm { SETNZ R8B }
    /* +0xf3278c */ __asm { XOR R9D,0x1c84552a }
    /* +0xf32793 */ __asm { MOV ECX,ESI }
    /* +0xf32795 */ __asm { ROL R9D,CL }
    /* +0xf32798 */ __asm { MOVSXD R9,R9D }
    /* +0xf3279b */ __asm { CMP R9,-0x2e96e40c }
    /* +0xf327a2 */ __asm { SETZ R9B }
    /* +0xf327a6 */ __asm { CMP R8B,R9B }
    /* +0xf327a9 */ __asm { NOP }
    /* +0xf327aa */ __asm { NOP }
    /* +0xf327ab */ __asm { NOP }
    /* +0xf327ac */ __asm { NOP }
    /* +0xf327ad */ __asm { NOP }
    /* +0xf327ae */ __asm { NOP }
    /* +0xf327af */ __asm { NOP }
    /* +0xf327b0 */ __asm { NOP }
    /* +0xf327b1 */ __asm { NOP }
    /* +0xf327b2 */ __asm { NOP }
    /* +0xf327b3 */ __asm { NOP }
    /* +0xf327b4 */ __asm { NOP }
    /* +0xf327b5 */ __asm { NOP }
    /* +0xf327b6 */ __asm { NOP }
    /* +0xf327b7 */ __asm { NOP }
    /* +0xf327b8 */ __asm { NOP }
    /* +0xf327b9 */ __asm { NOP }
    /* +0xf3292c */ __asm { PUSHFQ }
    /* +0xf3292d */ __asm { POP R9 }
    /* +0xf3292f */ __asm { PXOR XMM3,XMM3 }
    /* +0xf32933 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM3 }
    /* +0xf32939 */ __asm { TEST R9D,0x100 }
    /* +0xf32940 */ __asm { NOP }
    /* +0xf32941 */ __asm { NOP }
    /* +0xf32942 */ __asm { NOP }
    /* +0xf32943 */ __asm { NOP }
    /* +0xf32944 */ __asm { NOP }
    /* +0xf32945 */ __asm { MOV dword ptr [RSP + 0x58],0xd15735f6 }
    /* +0xf3294d */ __asm { MOV R9D,dword ptr [RSP + 0x58] }
    /* +0xf32952 */ __asm { TEST R9D,R9D }
    /* +0xf32955 */ __asm { JNS 0x7fffa56a2c56 }
    /* +0xf3295b */ __asm { MOV dword ptr [RSP + 0x60],0x0 }
    /* +0xf32963 */ __asm { MOV dword ptr [RSP + 0x58],0x16de3425 }
    /* +0xf3296b */ __asm { MOV R9D,dword ptr [RSP + 0x58] }
    /* +0xf32970 */ __asm { MOV dword ptr [RSP + 0x58],0x222bb54a }
    /* +0xf32978 */ __asm { MOV R9D,dword ptr [RSP + 0x58] }
    /* +0xf3297d */ __asm { LEA RAX,[0x7fffa478b530] }
    /* +0xf32984 */ __asm { MOV R9,-0x7cabd7947bb8a376 }
    /* +0xf3298e */ __asm { CMP RAX,R9 }
    /* +0xf32991 */ __asm { JZ 0x7fffa56a2c5e }
    /* +0xf32997 */ __asm { LEA R12,[0x7fffa47c265b] }
    /* +0xf3299e */ __asm { MOV R9W,0x79e4 }
    /* +0xf329a3 */ __asm { XOR R9D,ESI }
    /* +0xf329a6 */ __asm { ROL R9W,0x4 }
    /* +0xf329ab */ __asm { MOV qword ptr [RSP + 0x58],R10 }
    /* +0xf329b0 */ __asm { MOV R11W,0x69db }
    /* +0xf329b5 */ __asm { MOVD XMM3,R11D }
    /* +0xf329ba */ __asm { MOV R11W,0xffd1 }
    /* +0xf329bf */ __asm { MOVZX EDX,R9W }
    /* +0xf329c3 */ __asm { MOVD XMM2,ESI }
    /* +0xf329c7 */ __asm { PXOR XMM2,XMM3 }
    /* +0xf329cb */ __asm { XOR R11D,0x62a1 }
    /* +0xf329d2 */ __asm { MOV EAX,dword ptr [RAX + -0x66a4] }
    /* +0xf329d8 */ __asm { IMUL R11D,R14D }
    /* +0xf329dc */ __asm { MOVZX R9D,R11W }
    /* +0xf329e0 */ __asm { MOVD R11D,XMM2 }
    /* +0xf329e5 */ __asm { IMUL ECX,R11D,-0x4217 }
    /* +0xf329ec */ __asm { ADD ECX,0xffffaf7a }
    /* +0xf329f2 */ __asm { MOVSX R10,CX }
    /* +0xf329f6 */ __asm { LEA R8,[RSP + 0x60] }
    /* +0xf329fb */ __asm { SYSCALL }
    /* +0xf329fd */ __asm { MOV R9,-0xe16801cecff8b4 }
    /* +0xf32a07 */ __asm { CMP R12,R9 }
    /* +0xf32a0a */ __asm { NOP }
    /* +0xf32a0b */ __asm { NOP }
    /* +0xf32a0c */ __asm { NOP }
    /* +0xf32a0d */ __asm { NOP }
    /* +0xf32a0e */ __asm { NOP }
    /* +0xf32a0f */ __asm { MOV R9W,0x30b9 }
    /* +0xf32a14 */ __asm { MOV EDX,0xd1b34e36 }
    /* +0xf32a19 */ __asm { MOV R11D,0x22561cd1 }
    /* +0xf32a1f */ __asm { MOVD XMM3,ESI }
    /* +0xf32a23 */ __asm { IMUL R9D,R9D,0x2a77 }
    /* +0xf32a2a */ __asm { XOR EDX,0xd1b34e06 }
    /* +0xf32a30 */ __asm { MOV qword ptr [RSP + 0x60],RAX }
    /* +0xf32a35 */ __asm { ROL R9W,0xd }
    /* +0xf32a3a */ __asm { NOT R9D }
    /* +0xf32a3d */ __asm { MOVZX R8D,R9W }
    /* +0xf32a41 */ __asm { MOV EAX,dword ptr [R12 + -0x564b] }
    /* +0xf32a49 */ __asm { MOVD XMM2,R11D }
    /* +0xf32a4e */ __asm { PADDD XMM2,XMM3 }
    /* +0xf32a52 */ __asm { MOVD R9D,XMM2 }
    /* +0xf32a57 */ __asm { ROL R9D,0x17 }
    /* +0xf32a5b */ __asm { ADD R9D,0xa47f5174 }
    /* +0xf32a62 */ __asm { JMP 0x7fffa56a2bbd }
    /* +0xf32bbd */ __asm { MOVSXD R10,R9D }
    /* +0xf32bc0 */ __asm { MOV qword ptr [RSP + 0x28],RDX }
    /* +0xf32bc5 */ __asm { MOV qword ptr [RSP + 0x30],0x0 }
    /* +0xf32bce */ __asm { MOV R9,RDI }
    /* +0xf32bd1 */ __asm { MOV RDX,R13 }
    /* +0xf32bd4 */ __asm { SYSCALL }
    /* +0xf32bd6 */ __asm { ADD EAX,0xac9afa6e }
    /* +0xf32bdb */ __asm { XOR EAX,0x823d5472 }
    /* +0xf32be0 */ __asm { ADD RSP,0x78 }
    /* +0xf32be4 */ __asm { POP RDI }
    /* +0xf32be5 */ __asm { POP R14 }
    /* +0xf32be7 */ __asm { POP RBX }
    /* +0xf32be8 */ __asm { POP R15 }
    /* +0xf32bea */ __asm { POP RSI }
    /* +0xf32beb */ __asm { POP RBP }
    /* +0xf32bec */ __asm { POP R13 }
    /* +0xf32bee */ __asm { POP R12 }
    /* +0xf32bf0 */ __asm { RET }
    /* +0xf32bf1 */ __asm { NOP }
    /* +0xf32bf2 */ __asm { MOV RAX,0x0 }
    /* +0xf32bf9 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xf32c00 */ __asm { AND EDX,dword ptr [RDI + -0x51] }
    /* +0xf32c03 */ __asm { MOV CH,uint8_t ptr [RSI + RCX*0x8 + -0x67] }
    /* +0xf32c07 */ __asm { JMP 0x7fffa56a2195 }
    /* +0xf32c0c */ __asm { JMPF 0xe949:0xb4e86543 }
    /* +0xf32c17 */ __asm { STI }
    /* +0xf32c18 */ __asm { JMP 0x7fffa56a22e9 }
    /* +0xf32c25 */ __asm { CMP ECX,dword ptr [RDX + -0x78] }
    /* +0xf32c28 */ __asm { HLT }
    /* +0xf32c3d */ __asm { MOV ESP,0x3ef7710b }
    /* +0xf32c42 */ __asm { TEST dword ptr [RBX + RAX*0x8],0xe92a1218 }
    /* +0xf32c49 */ __asm { JNS 0x7fffa56a2c43 }
    /* +0xf32c4d */ __asm { ADD DH,BH }
    /* +0xf32c4f */ __asm { MOV DH,0xa2 }
    /* +0xf32c51 */ __asm { JMP 0x7fffa56a2532 }
    /* +0xf32c56 */ __asm { JMP 0x7fffa56a2c25 }
    /* +0xf32c5e */ __asm { MOV R10,0x0 }
    /* +0xf32c65 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xf32c6c */ __asm { NOP }
    /* +0xf32c6d */ __asm { MOV ESP,0xfffd24e9 }
    /* +0xf32c72 */ __asm { CALLF [0x7fff34b5807d] }
}


// ============================================================================
// Function : FUN_7fffa56a2ca0  |  RVA: 0xf32ca0  |  Size: 633 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56a2ca0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  int64_t lVar5;
  
  uRam00007fffa47bb87a = 0;
  uRam00007fffa47bb8a6 = 0;
  uRam00007fffa47bb8ae = 0;
  uRam00007fffa47bb896 = 0;
  uRam00007fffa47bb89e = 0;
  uRam00007fffa47bb886 = 0;
  uRam00007fffa47bb88e = 0;
  uRam00007fffa47bb8c4 = 0;
  uVar1 = rdtsc();
  lVar5 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0xbb9ebd9f4a0d9bf;
  uVar3 = 0;
  while( true ) {
    *(char *)((uVar3 | 2) + 0x7fffa47bb878) = (char)((uint64_t)(lVar5 * 0x21b8195d3f) >> 0x20);
    *(char *)(uVar3 + 0x7fffa47bb879) = (char)((uint64_t)(lVar5 * 0xf2fff55c81) >> 0x20);
    *(char *)(uVar3 + 0x7fffa47bb878) = (char)((uint64_t)(lVar5 * 0xd9f4a0d9bf) >> 0x20);
    if (((uVar3 ^ 0x3b10df0b) << 9 | uVar3 >> 0x37) * -0x1fab830e1934eeb9 == 0x14e84a52a6e60a00)
    break;
    lVar5 = lVar5 * 0x1cd643572e56f901;
    *(char *)(uVar3 + 0x7fffa47bb87b) = (char)((uint64_t)lVar5 >> 0x20);
    uVar3 = uVar3 + 4;
  }
  uVar4 = (int)uVar3 + 0x285fff9d;
  uVar2 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(int)((0xc26de2feU - (int)uVar3 ^ 0x37e04ab8) + 0xa71926b) +
                          0x7fffa47c7df1) * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)((int64_t)(short)~((uint16_t)uVar3 ^ 0x7d95) + 0x7fffa47c3654 + (uVar2 >> 0x20) * 8)
       = ~*(uint64_t *)((int64_t)(short)(((uint16_t)uVar3 ^ 0xc97e) + 0xcba2) + 0x7fffa47c23fc);
  *(char *)((int64_t)(int)(uVar4 * 0x1000 | uVar4 >> 0x14) + 0x7fffa47c65f5) =
       (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa56a2f20  |  RVA: 0xf32f20  |  Size: 9240 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa56a2fce) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a4cf5) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a308a) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a30af) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a30b3) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a30bc) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a30c0) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a30d2) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a30d6) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a30da) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a30de) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a4881) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a4061) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a4c54) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a31d7) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a4267) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a470b) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a4cad) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a4d0f) */
/* WARNING: Removing unreachable block (ram,0x7fffa56a47e6) */

int64_t FUN_7fffa56a2f20(code *param_1,int64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  int iVar9;
  uint32_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  uint64_t uVar21;
  int64_t lVar22;
  uint32_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint32_t uVar27;
  uint32_t uVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  int64_t lVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  uint64_t *puVar34;
  uint64_t *puVar35;
  code *pcVar36;
  uint64_t uVar37;
  uint64_t *puVar38;
  uint32_t uVar39;
  uint64_t *puVar40;
  uint64_t uVar41;
  uint64_t uVar42;
  uint32_t uVar43;
  bool bVar44;
  uint32_t uStack_164;
  uint64_t uStack_f8;
  code *pcStack_f0;
  uint32_t uStack_e8;
  uint8_t bStack_e1;
  code *pcStack_e0;
  uint8_t auStack_d8 [152];
  
  uVar7 = *param_3;
  lVar11 = *(int64_t *)(param_1 + 8);
  uVar28 = *(uint32_t *)(param_1 + 0x2c);
  uVar37 = (uint64_t)uVar28;
  puVar40 = (uint64_t *)(param_5 + (int64_t)param_4);
  uVar20 = *(uint32_t *)(param_1 + 0x18);
  uVar8 = *(uint32_t *)(param_1 + 0x10c);
  uVar15 = *(uint32_t *)(param_1 + 0x110);
  if (5 < uVar15) {
    uVar15 = 6;
  }
  if (uVar15 < 5) {
    uVar15 = 4;
  }
  uVar43 = 6;
  if (uVar8 < 6) {
    uVar43 = uVar8;
  }
  if (uVar43 < 5) {
    uVar43 = 4;
  }
  uVar25 = (uint64_t)uVar20 + lVar11;
  puVar1 = puVar40 + -2;
  uVar19 = ((int)puVar1 - (int)(uint64_t *)(lVar11 + uVar37)) + 1;
  uVar27 = 8;
  if (uVar19 < 8) {
    uVar27 = uVar19;
  }
  bStack_e1 = puVar1 < (uint64_t *)(lVar11 + uVar37);
  if ((bool)bStack_e1) {
    uVar27 = 0;
  }
  uVar27 = uVar27 + uVar28;
  uVar29 = (uint64_t)uVar27;
  uVar16 = 1 << ((uint8_t)param_1[0x100] & 0x1f);
  bVar44 = (int)param_4 == (int)uVar25;
  uVar33 = (uint64_t)bVar44;
  puVar18 = (uint64_t *)(uVar33 + (int64_t)param_4);
  uVar24 = (int64_t)puVar18 - lVar11;
  uVar23 = (uint32_t)uVar24;
  uVar19 = uVar23 - uVar16;
  if (uVar23 - uVar20 <= uVar16) {
    uVar19 = uVar20;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar19 = uVar20;
  }
  uVar20 = param_3[1];
  uVar19 = uVar23 - uVar19;
  uStack_164 = uVar20;
  if (uVar19 < uVar20) {
    uStack_164 = 0;
  }
  uStack_e8 = 0;
  if (uVar7 <= uVar19) {
    uStack_e8 = uVar7;
  }
  *(uint32_t *)(param_1 + 300) = 0;
  uVar30 = uVar29;
  if (uVar28 < uVar27) {
    uVar21 = *(uint64_t *)(param_1 + 0x60);
    iVar9 = *(int *)(param_1 + 0x34);
    uVar28 = 0x38 - iVar9;
    uVar30 = 0x6982c1d;
    do {
      if ((int)uVar15 < 6) {
        if (uVar15 != 5) goto LAB_7fffa56a333a;
        uVar16 = (uint32_t)((*(int64_t *)(lVar11 + uVar37) * -0x30e4432345000000 ^ uVar21) >>
                       (uint64_t)uVar28);
      }
      else if (uVar15 == 6) {
        uVar16 = (uint32_t)((*(int64_t *)(lVar11 + uVar37) * -0x30e4432340650000 ^ uVar21) >>
                       (uint64_t)uVar28);
      }
      else {
LAB_7fffa56a333a:
        uVar16 = (*(int *)(lVar11 + uVar37) * -0x61c8864f ^ (uint32_t)uVar21) >>
                 (0x18U - (char)iVar9 & 0x1f);
      }
      *(uint32_t *)(param_1 + (uint64_t)((uint32_t)uVar37 & 7) * 4 + 0x40) = uVar16;
      if (uVar29 - 1 == uVar37) break;
      uVar37 = uVar37 + 1;
    } while( true );
  }
  if (puVar18 < puVar1) {
    puVar2 = puVar40 + -4;
    puVar3 = (uint64_t *)((int64_t)puVar40 - 7);
    do {
      puVar17 = (uint64_t *)((int64_t)puVar18 + 1);
      uVar28 = *(uint32_t *)((int64_t)puVar17 - (uint64_t)uStack_e8);
      if ((uVar28 == *(uint32_t *)((int64_t)puVar18 + 1)) && (uStack_e8 != 0)) {
        lVar31 = -(uint64_t)uStack_e8;
        puVar38 = (uint64_t *)((int64_t)puVar18 + 5);
        puVar34 = (uint64_t *)((int64_t)puVar18 + lVar31 + 5);
        if (puVar38 < puVar3) {
          if (*puVar34 == *puVar38) {
            lVar22 = 0xd;
LAB_7fffa56a3c60:
            puVar35 = (uint64_t *)((int64_t)puVar18 + lVar22);
            if (puVar35 < puVar3) {
              uVar37 = *(uint64_t *)((int64_t)puVar18 + lVar22 + lVar31);
              if (uVar37 == *puVar35) goto code_r0x7fffa56a3c87;
              uVar28 = 0;
              for (uVar37 = uVar37 ^ *puVar35; (uVar37 & 1) == 0;
                  uVar37 = uVar37 >> 1 | 0x8000000000000000) {
                uVar28 = uVar28 + 1;
              }
              uVar37 = ((uint64_t)(uVar28 >> 3) + lVar22) - 5;
              goto LAB_7fffa56a45d0;
            }
            puVar34 = (uint64_t *)(lVar31 + (int64_t)puVar35);
            goto LAB_7fffa56a3c93;
          }
          uVar28 = 0;
          for (uVar37 = *puVar34 ^ *puVar38; (uVar37 & 1) == 0;
              uVar37 = uVar37 >> 1 | 0x8000000000000000) {
            uVar28 = uVar28 + 1;
          }
          uVar37 = (uint64_t)(uVar28 >> 3);
        }
        else {
          puVar35 = puVar38;
LAB_7fffa56a3c93:
          if ((puVar35 < (uint64_t *)((int64_t)puVar40 - 3U)) && ((int)*puVar34 == (int)*puVar35))
          {
            puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
            puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
          }
          if ((puVar35 < (uint64_t *)((int64_t)puVar40 - 1U)) &&
             ((short)*puVar34 == (short)*puVar35)) {
            puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
            puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
          }
          if (puVar35 < puVar40) {
            puVar35 = (uint64_t *)
                      ((int64_t)puVar35 + (uint64_t)((char)*puVar34 == (char)*puVar35));
          }
          uVar37 = (int64_t)puVar35 - (int64_t)puVar38;
        }
LAB_7fffa56a45d0:
        uVar37 = uVar37 + 4;
        uStack_f8 = 1;
LAB_7fffa56a45da:
        puVar18 = puVar17;
LAB_7fffa56a45e2:
        uVar21 = (int64_t)puVar18 - (int64_t)param_4;
        puVar17 = (uint64_t *)param_2[3];
        if (puVar2 < puVar18) {
          puVar38 = puVar17;
          if (param_4 <= puVar2) {
            uVar32 = param_4[1];
            *puVar17 = *param_4;
            puVar17[1] = uVar32;
            puVar38 = (uint64_t *)((int64_t)puVar17 + ((int64_t)puVar2 - (int64_t)param_4));
            if (0x10 < (int64_t)puVar2 - (int64_t)param_4) {
              lVar31 = 0x10;
              do {
                uVar12 = ((uint64_t *)((int64_t)param_4 + lVar31))[1];
                *(uint64_t *)((int64_t)puVar17 + lVar31) =
                     *(uint64_t *)((int64_t)param_4 + lVar31);
                ((uint64_t *)((int64_t)puVar17 + lVar31))[1] = uVar12;
                puVar4 = (uint64_t *)((int64_t)param_4 + lVar31 + 0x10);
                uVar12 = puVar4[1];
                puVar6 = (uint64_t *)((int64_t)puVar17 + lVar31 + 0x10);
                *puVar6 = *puVar4;
                puVar6[1] = uVar12;
                lVar22 = lVar31 + 0x20;
                lVar31 = lVar31 + 0x20;
              } while ((uint64_t *)((int64_t)puVar17 + lVar22) < puVar38);
            }
            param_4 = puVar2;
          }
          if (param_4 < puVar18) {
            uVar32 = (~(uint64_t)puVar18 & (uint64_t)param_4) * -0x4bf059eb +
                     ((uint64_t)param_4 & ~(uint64_t)puVar18) * 0x644b6842 +
                     (~(uint64_t)param_4 & (uint64_t)puVar18) * 0x185b0e59 +
                     ((uint64_t)param_4 ^ (uint64_t)puVar18) * -0x185b0e58;
            if ((3 < uVar32) && (0x1f < (uint64_t)((int64_t)puVar38 - (int64_t)param_4))) {
              if (uVar32 < 0x20) {
                uVar42 = 0;
              }
              else {
                uVar42 = uVar32 & 0xffffffffffffffe0;
                lVar31 = 0;
                while( true ) {
                  uVar12 = ((uint64_t *)((int64_t)param_4 + lVar31))[1];
                  puVar4 = (uint64_t *)((int64_t)param_4 + lVar31 + 0x10);
                  uVar13 = *puVar4;
                  uVar14 = puVar4[1];
                  *(uint64_t *)((int64_t)puVar38 + lVar31) =
                       *(uint64_t *)((int64_t)param_4 + lVar31);
                  ((uint64_t *)((int64_t)puVar38 + lVar31))[1] = uVar12;
                  puVar4 = (uint64_t *)((int64_t)puVar38 + lVar31 + 0x10);
                  *puVar4 = uVar13;
                  puVar4[1] = uVar14;
                  if (uVar42 - 0x20 == lVar31) break;
                  lVar31 = lVar31 + 0x20;
                }
                if (uVar32 == uVar42) goto LAB_7fffa56a4e70;
                if ((uVar32 & 0x1c) == 0) {
                  param_4 = (uint64_t *)((int64_t)param_4 + uVar42);
                  puVar38 = (uint64_t *)((int64_t)puVar38 + uVar42);
                  goto LAB_7fffa56a4d89;
                }
              }
              uVar26 = uVar32 & 0xfffffffffffffffc;
              for (; *(uint32_t *)((int64_t)puVar38 + uVar42) =
                          *(uint32_t *)((int64_t)param_4 + uVar42), uVar26 - 4 != uVar42;
                  uVar42 = uVar42 + 4) {
              }
              if (uVar32 == uVar26) goto LAB_7fffa56a4e70;
              param_4 = (uint64_t *)((int64_t)param_4 + uVar26);
              puVar38 = (uint64_t *)((int64_t)puVar38 + uVar26);
            }
LAB_7fffa56a4d89:
            uVar28 = (int)puVar18 - (int)param_4 & 7;
            uVar32 = (uint64_t)uVar28;
            if (uVar28 == 0) {
              puVar17 = param_4;
            }
            else {
              puVar34 = puVar38;
              puVar35 = param_4;
              do {
                puVar38 = (uint64_t *)((int64_t)puVar34 + 1);
                puVar17 = (uint64_t *)((int64_t)puVar35 + 1);
                *(char *)puVar34 = (char)*puVar35;
                uVar32 = uVar32 - 1;
                puVar34 = puVar38;
                puVar35 = puVar17;
              } while (uVar32 != 0);
            }
            if ((uint64_t)((int64_t)param_4 - (int64_t)puVar18) < 0xfffffffffffffff9) {
              lVar31 = 0;
              do {
                *(uint8_t *)((int64_t)puVar38 + lVar31) =
                     *(uint8_t *)((int64_t)puVar17 + lVar31);
                *(uint8_t *)((int64_t)puVar38 + lVar31 + 1) =
                     *(uint8_t *)((int64_t)puVar17 + lVar31 + 1);
                *(uint8_t *)((int64_t)puVar38 + lVar31 + 2) =
                     *(uint8_t *)((int64_t)puVar17 + lVar31 + 2);
                *(uint8_t *)((int64_t)puVar38 + lVar31 + 3) =
                     *(uint8_t *)((int64_t)puVar17 + lVar31 + 3);
                *(uint8_t *)((int64_t)puVar38 + lVar31 + 4) =
                     *(uint8_t *)((int64_t)puVar17 + lVar31 + 4);
                *(uint8_t *)((int64_t)puVar38 + lVar31 + 5) =
                     *(uint8_t *)((int64_t)puVar17 + lVar31 + 5);
                *(uint8_t *)((int64_t)puVar38 + lVar31 + 6) =
                     *(uint8_t *)((int64_t)puVar17 + lVar31 + 6);
                *(uint8_t *)((int64_t)puVar38 + lVar31 + 7) =
                     *(uint8_t *)((int64_t)puVar17 + lVar31 + 7);
                lVar22 = lVar31 + 8;
                lVar31 = lVar31 + 8;
              } while ((uint64_t *)((int64_t)puVar17 + lVar22) != puVar18);
            }
          }
LAB_7fffa56a4e70:
          lVar31 = param_2[1];
          param_2[3] = param_2[3] + uVar21;
          if (0xffff < uVar21) {
            *(uint32_t *)(param_2 + 9) = 1;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar31 - *param_2) >> 3);
          }
        }
        else {
          uVar32 = param_4[1];
          *puVar17 = *param_4;
          puVar17[1] = uVar32;
          if (0x10 < uVar21) {
            lVar31 = param_2[3];
            uVar32 = param_4[3];
            *(uint64_t *)(lVar31 + 0x10) = param_4[2];
            *(uint64_t *)(lVar31 + 0x18) = uVar32;
            if (0x20 < (int64_t)uVar21) {
              lVar22 = 0;
              do {
                puVar6 = (uint64_t *)((int64_t)param_4 + lVar22 + 0x20);
                uVar12 = puVar6[1];
                puVar4 = (uint64_t *)(lVar31 + 0x20 + lVar22);
                *puVar4 = *puVar6;
                puVar4[1] = uVar12;
                puVar4 = (uint64_t *)((int64_t)param_4 + lVar22 + 0x30);
                uVar12 = puVar4[1];
                puVar6 = (uint64_t *)(lVar31 + 0x30 + lVar22);
                *puVar6 = *puVar4;
                puVar6[1] = uVar12;
                lVar5 = lVar31 + 0x20 + lVar22;
                lVar22 = lVar22 + 0x20;
              } while (lVar5 + 0x20U < lVar31 + uVar21);
            }
            goto LAB_7fffa56a4e70;
          }
          lVar31 = param_2[1];
          param_2[3] = param_2[3] + uVar21;
        }
        *(short *)(lVar31 + 4) = (short)uVar21;
        *(int *)param_2[1] = (int)uStack_f8;
        if (0xffff < uVar37 - 3) {
          *(uint32_t *)(param_2 + 9) = 2;
          *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
        }
        *(short *)(param_2[1] + 6) = (short)(uVar37 - 3);
        param_2[1] = param_2[1] + 8;
        if (*(int *)(param_1 + 300) != 0) {
          uVar28 = *(uint32_t *)(param_1 + 0x2c);
          uVar21 = (uint64_t)uVar28;
          uVar16 = ((int)puVar1 - (int)(uint64_t *)(lVar11 + uVar21)) + 1;
          if (7 < uVar16) {
            uVar16 = 8;
          }
          if (puVar1 < (uint64_t *)(lVar11 + uVar21)) {
            uVar16 = 0;
          }
          if (uVar28 < uVar28 + uVar16) {
            uVar10 = *(uint32_t *)(param_1 + 0x34);
            uVar32 = *(uint64_t *)(param_1 + 0x60);
            do {
              if ((int)uVar15 < 6) {
                if (uVar15 == 5) {
                  uVar42 = *(int64_t *)(lVar11 + uVar21) * -0x30e4432345000000;
                  goto LAB_7fffa56a52d5;
                }
LAB_7fffa56a52e0:
                uVar39 = (*(int *)(lVar11 + uVar21) * -0x61c8864f ^ (uint32_t)uVar32) >>
                         (0x18U - (char)uVar10 & 0x1f);
              }
              else {
                if (uVar15 != 6) goto LAB_7fffa56a52e0;
                uVar42 = *(int64_t *)(lVar11 + uVar21) * -0x30e4432340650000;
LAB_7fffa56a52d5:
                uVar39 = (uint32_t)((uVar42 ^ uVar32) >> (0x38U - (char)uVar10 & 0x3f));
              }
              *(uint32_t *)(param_1 + (uint64_t)((uint32_t)uVar21 & 7) * 4 + 0x40) = uVar39;
              if ((uint64_t)(uVar28 + uVar16) - 1 == uVar21) break;
              uVar21 = uVar21 + 1;
            } while( true );
          }
          *(uint32_t *)(param_1 + 300) = 0;
        }
        puVar18 = (uint64_t *)((int64_t)puVar18 + uVar37);
        if ((uStack_164 == 0) || (puVar1 < puVar18)) {
          param_4 = puVar18;
        }
        else {
          uVar37 = (uint64_t)uStack_164;
          uVar21 = (uint64_t)uStack_e8;
          do {
            uVar32 = uVar37;
            uStack_e8 = (uint32_t)uVar32;
            uVar28 = (uint32_t)uVar21;
            if ((int)*puVar18 != *(int *)((int64_t)puVar18 - uVar32)) {
              param_4 = puVar18;
              uStack_164 = uStack_e8;
              uStack_e8 = uVar28;
              break;
            }
            lVar31 = -uVar32;
            puVar17 = (uint64_t *)((int64_t)puVar18 + 4);
            puVar34 = (uint64_t *)((int64_t)puVar18 + lVar31 + 4);
            puVar38 = puVar17;
            if (puVar17 < puVar3) {
              if (*puVar34 == *puVar17) {
                puVar34 = (uint64_t *)((int64_t)puVar18 + 0xc);
                puVar38 = puVar34;
                if (puVar34 < puVar3) {
LAB_7fffa56a5000:
                  if (*(uint64_t *)((int64_t)puVar38 + lVar31) == *puVar38)
                  goto code_r0x7fffa56a5010;
                  uVar16 = 0;
                  for (uVar37 = *puVar38 ^ *(uint64_t *)((int64_t)puVar38 + lVar31);
                      (uVar37 & 1) == 0; uVar37 = uVar37 >> 1 | 0x8000000000000000) {
                    uVar16 = uVar16 + 1;
                  }
                  uVar37 = (int64_t)puVar34 + ((uint64_t)(uVar16 >> 3) - (int64_t)puVar17);
                  goto joined_r0x7fffa56a51a6;
                }
LAB_7fffa56a501d:
                puVar34 = (uint64_t *)(lVar31 + (int64_t)puVar38);
                goto joined_r0x7fffa56a503b;
              }
              uVar16 = 0;
              for (uVar37 = *puVar34 ^ *puVar17; (uVar37 & 1) == 0;
                  uVar37 = uVar37 >> 1 | 0x8000000000000000) {
                uVar16 = uVar16 + 1;
              }
              uVar37 = (uint64_t)(uVar16 >> 3);
            }
            else {
joined_r0x7fffa56a503b:
              if ((puVar38 < (uint64_t *)((int64_t)puVar40 - 3U)) &&
                 ((int)*puVar34 == (int)*puVar38)) {
                puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
                puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
              }
              if ((puVar38 < (uint64_t *)((int64_t)puVar40 - 1U)) &&
                 ((short)*puVar34 == (short)*puVar38)) {
                puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
                puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
              }
              if (puVar38 < puVar40) {
                puVar38 = (uint64_t *)
                          ((int64_t)puVar38 + (uint64_t)((char)*puVar34 == (char)*puVar38));
              }
              uVar37 = (int64_t)puVar38 - (int64_t)puVar17;
            }
joined_r0x7fffa56a51a6:
            if (puVar18 <= puVar2) {
              uVar42 = puVar18[1];
              puVar17 = (uint64_t *)param_2[3];
              *puVar17 = *puVar18;
              puVar17[1] = uVar42;
            }
            *(uint16_t *)(param_2[1] + 4) = 0;
            *(uint32_t *)param_2[1] = 1;
            if (0xffff < uVar37 + 1) {
              *(uint32_t *)(param_2 + 9) = 2;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
            }
            puVar18 = (uint64_t *)((int64_t)puVar18 + uVar37 + 4);
            *(short *)(param_2[1] + 6) = (short)(uVar37 + 1);
            param_2[1] = param_2[1] + 8;
            param_4 = puVar18;
            uStack_164 = uVar28;
            if (uVar28 == 0) {
              break;
            }
            uVar37 = uVar21;
            uVar21 = uVar32;
          } while (puVar18 <= puVar1);
        }
      }
      else {
        uStack_f8 = 999999999;
        if ((int)uVar15 < 5) {
          if ((int)uVar43 < 5) {
            uVar37 = ((int64_t)puVar18 << 1 | (uint64_t)((int64_t)puVar18 < 0)) ^
                     ((int64_t)puVar18 << 0x23 | (uint64_t)puVar18 >> 0x1d) ^ (uint64_t)puVar18 ^
                     0x7087e94d;
            FUN_7fffa5215390(uVar37,0x67f52c4d,param_1,puVar40);
            uVar37 = uVar37 << 0x3d ^ uVar37;
          }
          else if (uVar43 == 5) {
            pcVar36 = FUN_7fffa5618a30;
            FUN_7fffa5618a30(puVar18,(int64_t)param_1 << 10 ^ (uint64_t)param_1,0xe6af6c9c);
            uVar37 = ~(uint64_t)pcVar36 * -0x46175c118ede08a9;
            uVar37 = (~(uint64_t)pcVar36 * -0x18ede08a90000000 | uVar37 >> 0x24) ^
                     (uVar37 << 0x29 | uVar37 >> 0x17) ^ uVar37;
            uVar37 = (uVar37 << 0x38 | uVar37 >> 8) ^ (uVar37 << 0x12 | uVar37 >> 0x2e) ^ uVar37;
            uVar37 = (uVar37 << 0x24 | uVar37 >> 0x1c) ^ (uVar37 << 0x30 | uVar37 >> 0x10) ^ uVar37;
            uVar37 = (uVar37 << 8 | uVar37 >> 0x38) ^ (uVar37 << 0x20 | uVar37 >> 0x20) ^ uVar37;
            uVar37 = uVar37 << 0x30 | uVar37 >> 0x10;
          }
          else {
            uVar37 = (int64_t)puVar18 + 0xf999dc5b;
            uVar21 = (int64_t)param_1 * -0x7ffff - 0x6b42da88;
            lVar31 = 0x17acfd2d;
            FUN_7fffa5287490((uVar37 * 0x800 | uVar37 >> 0x35) ^ (uVar37 * 0x80 | uVar37 >> 0x39) ^
                             uVar37,(int64_t)param_1 * -0x80000,
                             (uVar21 * 4 | uVar21 >> 0x3e) << 0x3b |
                             (uVar21 & 0x3fffffffffffffff) >> 3,&uStack_f8);
            uVar37 = lVar31 - 0x38a8af91;
          }
joined_r0x7fffa56a3c43:
          if (3 < uVar37) {
LAB_7fffa56a4070:
            if (3 < uStack_f8) {
              puVar17 = puVar18;
              if ((param_4 < puVar18) && (uVar25 < (int64_t)puVar18 + (3 - uStack_f8))) {
                while (puVar17 = puVar18,
                      *(char *)((int64_t)puVar18 - 1) ==
                      *(char *)((int64_t)puVar18 + (2 - uStack_f8))) {
                  puVar17 = (uint64_t *)((int64_t)puVar18 - 1);
                  uVar37 = uVar37 + 1;
                  if ((puVar17 <= param_4) ||
                     (uVar21 = (int64_t)puVar18 + (2 - uStack_f8), puVar18 = puVar17,
                     uVar21 <= uVar25)) break;
                }
              }
              uStack_164 = uStack_e8;
              uStack_e8 = (int)uStack_f8 - 3;
              goto LAB_7fffa56a45da;
            }
            goto LAB_7fffa56a45e2;
          }
        }
        else {
          if ((int)uVar15 < 6) {
            if ((int)uVar43 < 5) {
              pcStack_f0 = (code *)0x340991cd;
              uVar37 = (int64_t)register0x00000020 + 0x1371e53;
              uVar37 = (uVar37 * 0x4000 | uVar37 >> 0x32) ^
                       (uVar37 >> 1 | (uint64_t)((uVar37 & 1) != 0) << 0x3f) ^ uVar37;
              uVar37 = uVar37 << 0xd ^ uVar37;
              uVar32 = (int64_t)puVar40 * 0x9dfbbfba000 |
                       (uint64_t)((int64_t)puVar40 * 0x4efddfdd) >> 0x33;
              uVar21 = uVar32 << 0x20;
              pcStack_e0 = (code *)(uint64_t)(uVar27 & (uint32_t)uVar32);
              uVar42 = uVar29 ^ (~uVar32 | uVar21);
              FUN_7fffa5265c90((uVar29 ^ uVar32 ^ ~uVar21) * -0xc0000168 +
                               (int64_t)pcStack_e0 * 0xc0000167 + uVar42 * -0x71762ec6 +
                               ((uVar21 ^ uVar32) & ~uVar29) * -3 + uVar42 * 0x71762ec8 +
                               (~(uVar21 | uVar29) & uVar32) * -0xc0000162 +
                               ((~uVar21 | uVar32) & ~uVar29) * 0xc0000166,
                               (uVar37 << 2 & 0xffffffff | uVar37 >> 0x3e) * 0xfcf47e09 +
                               ((uVar37 << 2 & 0xffffffff | uVar37 >> 0x3e) * 0xffffffff +
                                ((uVar37 & 0x3fffffffffffffff) >> 0x1e) * 0xfcf47e09 << 0x20));
              uVar37 = uVar32 << 0x3f ^ uVar32;
              uVar37 = (uVar32 << 0x24 | uVar37 >> 0x1c) ^ (uVar32 << 0x23 | uVar37 >> 0x1d) ^
                       uVar37;
              uVar37 = (uVar37 << 6 | uVar37 >> 0x3a) ^ (uVar37 << 8 | uVar37 >> 0x38) ^ uVar37;
              uVar37 = (uVar37 << 0x10 | uVar37 >> 0x30) ^ (uVar37 << 0xc | uVar37 >> 0x34) ^ uVar37
              ;
              uVar37 = (uVar37 << 0x18 | uVar37 >> 0x28) ^ (uVar37 << 0x20 | uVar37 >> 0x20) ^
                       uVar37;
              uVar37 = uVar37 << 0x10 | uVar37 >> 0x30;
            }
            else if (uVar43 == 5) {
              uVar32 = (uint64_t)bStack_e1;
              pcStack_e0 = FUN_7fffa55c81c0;
              pcStack_f0 = (code *)(~((int64_t)puVar40 << 0x3c | uVar32) * -0x544a9973);
              uVar21 = (int64_t)puVar40 << 0x3c | uVar33;
              uVar37 = uVar21 ^ uVar32;
              FUN_7fffa55c81c0(uVar37,(uint32_t)~uVar32 & (uint32_t)bVar44,&uStack_f8,
                               (uVar21 ^ ~uVar32) * 0x4843fc9b);
              uVar37 = uVar37 * -0x3ffbffe001ffffff;
            }
            else {
              uVar37 = 0xb411f215;
              FUN_7fffa526ac10(FUN_7fffa526ac10,param_1,puVar40,0xcda283bd);
              uVar37 = uVar37 >> 0x11 ^ uVar37;
              uVar37 = uVar37 >> 0x22 ^ uVar37;
              uVar37 = (uVar37 << 0x2e | uVar37 >> 0x12) ^ (uVar37 << 0x3c | uVar37 >> 4) ^ uVar37;
              uVar37 = (uVar37 << 0x1c | uVar37 >> 0x24) ^ (uVar37 << 0x38 | uVar37 >> 8) ^ uVar37;
              uVar37 = (uVar37 << 0x30 | uVar37 >> 0x10) ^ (uVar37 << 0x38 | uVar37 >> 8) ^ uVar37;
              uVar37 = (uVar37 << 0x20 | uVar37 >> 0x20) ^ (uVar37 << 0x30 | uVar37 >> 0x10) ^
                       uVar37;
              uVar37 = uVar37 << 0x20 | uVar37 >> 0x20;
            }
          }
          else {
            if ((int)uVar43 < 5) {
              uVar42 = (uint64_t)(uVar8 == 5);
              uVar32 = ((int64_t)&uStack_f8 * 0x80 | (uint64_t)&uStack_f8 >> 0x39) ^
                       ((int64_t)&uStack_f8 * 0x2000 | (uint64_t)&uStack_f8 >> 0x33) ^
                       (uint64_t)&uStack_f8;
              uVar21 = uVar24 & 0xffffffff;
              pcStack_f0 = FUN_7fffa55d7850;
              uVar26 = (uint64_t)puVar2 ^ uVar42;
              uVar28 = ~(uint32_t)puVar2 & (uint32_t)(uVar8 == 5);
              uVar42 = ~uVar42;
              uVar41 = ~uVar21;
              uVar37 = (int64_t)param_1 << 0x28 ^ (uint64_t)param_1;
              uVar37 = (uVar37 << 5 | uVar37 >> 0x3b) ^ ((int64_t)param_1 << 0x2a | uVar37 >> 0x16)
                       ^ uVar37;
              pcStack_e0 = param_1;
              FUN_7fffa55d7850(((uVar42 ^ (uint64_t)puVar2) & uVar41) * 0x6f2977ed +
                               (uint64_t)(uVar28 & uVar23) * -0x6683f969 +
                               (uint64_t)((uint32_t)uVar41 & uVar28) * 0x6683f969 +
                               ((uVar42 | (uint64_t)puVar2) ^ uVar21) * -0x6f2977ed +
                               (uVar42 & (uint64_t)puVar2 ^ uVar41) * -0xd5ad7156 +
                               (uVar21 ^ uVar26) * -0x8f568fe5 +
                               ((uVar42 ^ (uint64_t)puVar2) & uVar21) * 0x39a720ff +
                               (uVar26 ^ uVar41) * 0x7ffe0270 + (uVar26 & uVar41) * 0xa8d098ec,
                               (uVar32 << 0x38 | uVar32 >> 8) ^ (uVar32 << 0x1a | uVar32 >> 0x26) ^
                               (uVar32 << 0x2a | uVar32 >> 0x16));
              uVar37 = uVar37 ^ 0xbad4cb10;
              goto joined_r0x7fffa56a3c43;
            }
            if ((int)uVar43 < 6) {
              pcStack_e0 = (code *)((uint64_t)param_1 | 0xb411f215);
              pcStack_f0 = (code *)0x0;
              uVar21 = ~(uint64_t)uVar28;
              uVar16 = (uint32_t)uVar21 & uStack_164;
              uVar37 = uVar16 & uVar30;
              FUN_7fffa55c6c40((int64_t)param_1 * 0xb411f215,
                               (~(uStack_164 | uVar30) & uVar21) * -0x1aed8f0f +
                               (uStack_164 | uVar30 | (uint64_t)uVar28) * -0x1aed8f0f +
                               (uint64_t)(uVar16 & (uint32_t)uVar30) * -0x7ffe02e4 +
                               uVar37 * 0x7ffe02e4);
              uVar37 = (uVar37 << 6 | uVar37 >> 0x3a) ^ (uVar37 << 0x16 | uVar37 >> 0x2a) ^ uVar37;
              uVar37 = (uVar37 << 0xc | uVar37 >> 0x34) ^ (uVar37 << 0x2c | uVar37 >> 0x14) ^ uVar37
              ;
            }
            else {
              uVar37 = ((int64_t)param_1 << 0x35 | (uint64_t)param_1 >> 0xb) ^
                       ((int64_t)param_1 << 1 | (uint64_t)((int64_t)param_1 < 0)) ^
                       (uint64_t)param_1;
              FUN_7fffa5476bb0(((int64_t)&uStack_f8 * 2 | (uint64_t)((int64_t)&uStack_f8 < 0)) ^
                               ((int64_t)&uStack_f8 << 0x27 | (uint64_t)&uStack_f8 >> 0x19) ^
                               (uint64_t)&uStack_f8,puVar40,puVar18);
              uVar37 = uVar37 - 0x86db7c86;
            }
          }
          if (3 < uVar37) goto LAB_7fffa56a4070;
        }
        uVar37 = (int64_t)puVar18 - (int64_t)param_4;
        puVar18 = (uint64_t *)((int64_t)puVar18 + (uVar37 >> 8) + 1);
        *(uint32_t *)(param_1 + 300) = (uint32_t)(0x7ff < uVar37);
      }
    } while (puVar18 < puVar1);
  }
  if (uVar20 <= uVar19) {
    uVar20 = 0;
  }
  uVar28 = uVar20;
  if (uStack_e8 != 0) {
    uVar28 = uVar7;
  }
  if (uVar7 <= uVar19) {
    uVar28 = uVar20;
  }
  uVar20 = 0;
  if (uVar19 < uVar7) {
    uVar20 = uVar7;
  }
  if (uStack_e8 != 0) {
    uVar20 = uStack_e8;
  }
  *param_3 = uVar20;
  if (uStack_164 != 0) {
    uVar28 = uStack_164;
  }
  param_3[1] = uVar28;
  return (int64_t)puVar40 - (int64_t)param_4;
code_r0x7fffa56a3c87:
  lVar22 = lVar22 + 8;
  goto LAB_7fffa56a3c60;
code_r0x7fffa56a5010:
  puVar38 = puVar38 + 1;
  puVar34 = puVar34 + 1;
  if (puVar3 <= puVar38) goto LAB_7fffa56a501d;
  goto LAB_7fffa56a5000;
}


// ============================================================================
// Function : FUN_7fffa56a5390  |  RVA: 0xf35390  |  Size: 1059 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56a5390(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint16_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint32_t uVar4;
  uint64_t unaff_RSI;
  uint64_t uVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint8_t bVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  
  uVar10 = ~param_3;
  uVar11 = uVar10 | unaff_RSI;
  uVar5 = unaff_RSI | param_3;
  uVar8 = ~uVar11;
  uVar8 = (~uVar5 & uVar8) * -0x501817c2 + (uVar5 & uVar8) * 0x5959f1a9 +
          (uVar11 & uVar5) * -0x8ba96388 + (uVar5 ^ uVar11) * -0xa972096b +
          (((~unaff_RSI | uVar10) & uVar11) -
          ((uVar8 & ~unaff_RSI & param_3) + (uVar8 | unaff_RSI & uVar10))) * 0x1dc8a5e3;
  bVar9 = (uint8_t)uVar8 + 0x78;
  uVar4 = (uint32_t)uVar8;
  uVar1 = (uint16_t)uVar8;
  *(uint8_t *)((int64_t)(short)~((0x3b6e - uVar1) * 0x10 | (uint16_t)(0x3b6e - uVar1) >> 0xc) +
           0x7fffa47c7812) = bVar9 * '\b' | bVar9 >> 5;
  uVar6 = uVar4 | 1;
  lVar2 = (int64_t)(int)(0x3f2d549d - uVar4 ^ 0x4c7cb2b8);
  *(uint8_t (*) [16])(lVar2 + 0x7fffa47cb608) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar2 + 0x7fffa47cb618) = 0;
  *(uint64_t *)((int64_t)(short)(uVar1 + 0x2620) + 0x7fffa47c702f) =
       (uint64_t)(uVar6 * 0x4597 + 0x5d31 & 0xffff);
  uVar5 = rdtsc();
  uVar10 = (uVar5 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar5)) * (uVar8 + 0x1d2cebab24012ce)
           + 0xb;
  uVar5 = 0;
  do {
    uVar7 = uVar5 + 3;
    uVar11 = ((uVar8 | 1) * 0x78badacbe0000000 | (uVar8 | 1) * -0x256022fc3a2929a1 >> 0x23) +
             0x452b969e;
    lVar2 = (uVar10 & 0xffffffff) * (uVar11 & 0xffffffff) +
            ((uVar11 >> 0x20) * (uVar10 & 0xffffffff) + (uVar10 >> 0x20) * (uVar11 & 0xffffffff) <<
            0x20) + 0xb;
    lVar3 = lVar2 * 0x1d2cebb3de97656 + 0xb;
    uVar10 = lVar3 * 0x1d2cebb3de97656 + 0xb;
    *(char *)(uVar5 + (int64_t)(int)(-0x2e8fd4dc - (uVar4 ^ 0x5ad99071)) + 0x7fffa47cc277) =
         (char)(uVar10 >> 0x20);
    *(char *)(uVar5 + 0x7fffa47bf9a0) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(uVar5 + (int64_t)(int)~(uVar6 * -0xfa0864f) + 0x7fffa47c8c5b) =
         (char)((uint64_t)lVar3 >> 0x20);
    uVar5 = uVar7;
  } while ((uVar7 << 0x2f | uVar7 >> 0x11) != 0x22800000000000);
  bVar9 = (uint8_t)uVar7 & 0x1f;
  uVar4 = -0x7a4a1 << bVar9 | 0xfff85b5fU >> 0x20 - bVar9;
  bVar9 = (uint8_t)uVar8 & 0x1f;
  uVar5 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(short)(uVar1 ^ 0xc9d8) + 0x7fffa47c4f54) * 0x55555556 +
          0x55555556) * 3;
  *(uint64_t *)
   ((int64_t)(int)(uVar4 >> bVar9 | uVar4 << 0x20 - bVar9) + 0x7fffa47cee4a + (uVar5 >> 0x20) * 8)
       = 0;
  *(char *)((int64_t)(short)((short)uVar6 * ((short)uVar7 + -0x131c)) + 0x7fffa47c33b3) =
       (char)(uVar5 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa56a57c0  |  RVA: 0xf357c0  |  Size: 121 bytes
// Callers  : FUN_7fffa5697680@0xf27680
// Callees  : FUN_7fffa5513ad0@0xda3ad0, FUN_7fffa56ab060@0xf3b060
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_7fffa56a57c0(void)

{
  int iVar1;
  
  if (DAT_7fffa4781bc1 == '\0') {
    iVar1 = FUN_7fffa5513ad0();
    if (iVar1 == 0) {
      _DAT_7fffa4781bc8 = 0xffffffffffffffff;
      uRam00007fffa4781bd0 = 0xffffffffffffffff;
      _DAT_7fffa4781bd8 = 0xffffffffffffffff;
      _DAT_7fffa4781be0 = 0xffffffffffffffff;
      uRam00007fffa4781be8 = 0xffffffffffffffff;
      _DAT_7fffa4781bf0 = 0xffffffffffffffff;
    }
    else {
      iVar1 = FUN_7fffa56ab060(&DAT_7fffa4781bc8);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = FUN_7fffa56ab060(&DAT_7fffa4781be0);
      if (iVar1 != 0) {
        return 0;
      }
    }
    DAT_7fffa4781bc1 = '\x01';
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa56a5840  |  RVA: 0xf35840  |  Size: 829 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
void FUN_7fffa56a5840(uint64_t param_1,uint64_t param_2,int64_t *param_3,uint64_t param_4,
                     uint32_t param_5,int64_t param_6)

{
  uint64_t uVar1;
  uint64_t uVar2;
  code *pcVar3;
  uint8_t bVar4;
  bool bVar5;
  uint32_t in_EAX;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint32_t uVar13;
  uint64_t in_XMM2_Qa;
  
  uVar12 = (in_XMM2_Qa << 0x29 | in_XMM2_Qa >> 0x17) - 0x40ec5f0e;
  uVar12 = (uVar12 << 0x39 | uVar12 >> 7) ^ (uVar12 << 0x3e | uVar12 >> 2) ^
           (uVar12 * 0x4000 | uVar12 >> 0x32);
  uVar12 = (uVar12 << 0x16 | uVar12 >> 0x2a) ^ (uVar12 << 0x20 | uVar12 >> 0x20) ^ uVar12;
  uVar9 = uVar12 << 0x14 | uVar12 >> 0x2c;
  uVar1 = param_3[2];
  uVar12 = uVar9 + 4;
  uVar10 = uVar12 - uVar1;
  if (uVar12 < uVar1 || uVar10 == 0) {
    param_3[2] = uVar12;
    plVar6 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      plVar6 = (int64_t *)*param_3;
    }
    *(uint8_t *)((int64_t)plVar6 + uVar12) = 0;
  }
  else {
    uVar2 = param_3[3];
    if (uVar2 - uVar1 < uVar10) {
      uVar11 = 0x7fffffffffffffff;
      lVar8 = uVar1 << 0x3f;
      uVar13 = in_EAX | 1;
      if (uVar13 * -0x1fb35799 + 0x1ba42296 <
          ((in_EAX ^ 0x38ec6d1a) << 0x11 | (in_EAX ^ 0x38ec6d1a) >> 0xf)) {
        lVar8 = 0x7fffffffffffffff;
      }
      if (lVar8 - uVar1 < uVar10) {
        (*(code *)((int64_t)(int)(~(in_EAX ^ 0x9406ad2b) * 0x4643d089) + 0x7fffa51a629d))();
        pcVar3 = (code *)__debugbreak();
        (*pcVar3)();
        return;
      }
      if ((-1 < (int64_t)uVar12) && (uVar2 <= (uVar2 >> 1 ^ 0x7fffffffffffffff))) {
        uVar11 = (uVar2 >> 1) + uVar2;
        if (uVar11 < (uVar12 | 0xf)) {
          uVar11 = uVar12 | 0xf;
        }
      }
      bVar4 = (uint8_t)in_EAX & 0x1f;
      uVar7 = (uint64_t)(0x61bd77ce - in_EAX);
      bVar5 = 0xe < (int64_t)uVar2;
      if (~(uVar13 * 0x53578000 | uVar13 * -0x9335951 >> 0x11) < uVar7) {
        bVar5 = ((0xf7da - in_EAX) * 0x167d & 0xffff) < uVar2;
      }
      (*(code *)((int64_t)(int)((-0x30797859 - in_EAX) * -0x7ffffff9) + 0x7fffa52782b8))
                (uVar7,(int64_t)
                       (int)((0xa532c546U >> bVar4 | -0x5acd3aba << 0x20 - bVar4) ^ 0x8c130583));
      param_3[2] = uVar12;
      param_3[3] = uVar11;
      lVar8 = (uVar7 << 0x2c | uVar7 >> 0x14) - ((uVar7 >> 0x14) << 0x36);
      if (bVar5) {
        FUN_7fffa56a5f20(lVar8,*param_3,uVar1);
        FUN_7fffa4ecf8e0(uVar1 + lVar8,0,uVar10);
        *(uint8_t *)(lVar8 + uVar12) = 0;
        (*(code *)((int64_t)(int)(-0x550c2437 - in_EAX) + 0x7fffa568fdc6))();
      }
      else {
        FUN_7fffa56a5f20(lVar8,param_3,uVar1);
        FUN_7fffa4ecf8e0(uVar1 + lVar8,0,uVar10);
        *(uint8_t *)(lVar8 + uVar12) = 0;
      }
      *param_3 = lVar8;
    }
    else {
      param_3[2] = uVar12;
      plVar6 = param_3;
      if (0xf < uVar2) {
        plVar6 = (int64_t *)*param_3;
      }
      FUN_7fffa4ecf8e0(uVar1 + (int64_t)plVar6,0,uVar10);
      *(uint8_t *)((int64_t)plVar6 + uVar12) = 0;
    }
  }
  plVar6 = param_3;
  if (0xf < (uint64_t)param_3[3]) {
    plVar6 = (int64_t *)*param_3;
  }
  *(uint32_t *)plVar6 = param_5;
  if (0xf < (uint64_t)param_3[3]) {
    param_3 = (int64_t *)*param_3;
  }
  FUN_7fffa56a5f20((int64_t)param_3 + 4,param_6 * 0x6f108369bf05900f,uVar9);
  return;
}


// ============================================================================
// Function : FUN_7fffa56a5b90  |  RVA: 0xf35b90  |  Size: 668 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56a5b90(uint32_t param_1)

{
  uint8_t bVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t in_R10;
  uint16_t uVar7;
  
  uVar5 = in_R10 ^ (in_R10 << 0x2c | in_R10 >> 0x14) ^ (in_R10 << 0x14 | in_R10 >> 0x2c);
  uVar3 = (uVar5 << 0x18 | uVar5 >> 0x28) ^ uVar5;
  uVar6 = uVar5 << 0x28 | uVar5 >> 0x18;
  bVar1 = (uint8_t)param_1 & 0x1f;
  uVar5 = uVar6 * uVar3;
  if ((param_1 | 1) * 0x4a8404c + 0xdba28e7b < (0xfe8fec15U >> bVar1 | -0x17013eb << 0x20 - bVar1))
  {
    uVar5 = uVar3 ^ uVar6;
  }
  puVar4 = (uint64_t *)((uVar5 << 0x10 | uVar5 >> 0x30) ^ (uVar5 << 0x30 | uVar5 >> 0x10) ^ uVar5);
  if (0xf < puVar4[0xf]) {
    FUN_7fffa5687c30(FUN_7fffa5687c30,0x7fffa568e2d8,puVar4[0xc] >> 0x3d ^ puVar4[0xc]);
  }
  puVar4[0xf] = 0xf;
  *(uint8_t *)(puVar4 + 0xc) = 0;
  puVar4[0xe] = 0;
  if (0xf < puVar4[0xb]) {
    uVar5 = puVar4[8];
    uVar3 = uVar5 << 0x3d;
    if (0x8243ce5 < param_1 + 0x52ad22a7) {
      uVar3 = uVar5 >> 0x3d;
    }
    (*(code *)((int64_t)(int)(param_1 + 0xb72e2422) + 0x7fffa56943da))
              (0x8243ce6,uVar5 >> 0x3d,uVar3 ^ uVar5);
  }
  puVar4[0xb] = 0xf;
  *(uint8_t *)(puVar4 + 8) = 0;
  puVar4[10] = 0;
  if (0xf < puVar4[7]) {
    pcVar2 = (code *)((int64_t)(int)(param_1 + 0xb72e0e64) + 0x7fffa5695998);
    (*pcVar2)(pcVar2,0x7fffa5695998,puVar4[4] >> 0x3d ^ puVar4[4]);
  }
  *(uint8_t *)(puVar4 + 4) = 0;
  puVar4[6] = 0;
  puVar4[7] = 0xf;
  if (0xf < puVar4[3]) {
    uVar5 = *puVar4;
    uVar7 = 0x822b - (short)param_1;
    pcVar2 = (code *)((int64_t)(short)(uVar7 * 0x2000 | uVar7 >> 3) + 0x7fffa5688e72);
    (*pcVar2)(uVar5 >> 0x3d,pcVar2,uVar5 >> 0x3d ^ uVar5);
  }
  *(uint8_t *)puVar4 = 0;
  puVar4[3] = 0xf;
  puVar4[2] = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa56a5f20  |  RVA: 0xf35f20  |  Size: 991 bytes
// Callers  : FUN_7fffa505cb10@0x8ecb10, FUN_7fffa51ab910@0xa3b910, FUN_7fffa53ef270@0xc7f270, FUN_7fffa51a5f90@0xa35f90, FUN_7fffa56a1f00@0xf31f00, FUN_7fffa52d0ec0@0xb60ec0, FUN_7fffa56a5840@0xf35840, FUN_7fffa5588cf0@0xe18cf0
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa56a5f20(uint64_t *param_1,uint64_t *param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint8_t auVar3 [32];
  uint8_t auVar4 [32];
  uint8_t auVar5 [32];
  uint8_t auVar6 [32];
  uint8_t uVar7;
  uint16_t uVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint8_t (*pauVar23) [32];
  uint8_t (*pauVar24) [32];
  uint64_t *puVar25;
  uint64_t *puVar26;
  uint8_t (*pauVar27) [32];
  uint8_t (*pauVar28) [32];
  uint64_t uVar29;
  int64_t lVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  
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
    uVar7 = *(uint8_t *)((int64_t)param_2 + 2);
    *(uint16_t *)param_1 = *(uint16_t *)param_2;
    *(uint8_t *)((int64_t)param_1 + 2) = uVar7;
    return;
  case 4:
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    return;
  case 5:
    uVar7 = *(uint8_t *)((int64_t)param_2 + 4);
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    *(uint8_t *)((int64_t)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(uint16_t *)((int64_t)param_2 + 4);
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    *(uint16_t *)((int64_t)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(uint16_t *)((int64_t)param_2 + 4);
    uVar7 = *(uint8_t *)((int64_t)param_2 + 6);
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    *(uint16_t *)((int64_t)param_1 + 4) = uVar8;
    *(uint8_t *)((int64_t)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(uint8_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(uint8_t *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(uint16_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(uint16_t *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(uint16_t *)(param_2 + 1);
    uVar7 = *(uint8_t *)((int64_t)param_2 + 10);
    *param_1 = *param_2;
    *(uint16_t *)(param_1 + 1) = uVar8;
    *(uint8_t *)((int64_t)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(uint32_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(uint32_t *)(param_2 + 1);
    uVar7 = *(uint8_t *)((int64_t)param_2 + 0xc);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar9;
    *(uint8_t *)((int64_t)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(uint32_t *)(param_2 + 1);
    uVar8 = *(uint16_t *)((int64_t)param_2 + 0xc);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar9;
    *(uint16_t *)((int64_t)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(uint32_t *)(param_2 + 1);
    uVar8 = *(uint16_t *)((int64_t)param_2 + 0xc);
    uVar7 = *(uint8_t *)((int64_t)param_2 + 0xe);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar9;
    *(uint16_t *)((int64_t)param_1 + 0xc) = uVar8;
    *(uint8_t *)((int64_t)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar26 = (uint64_t *)((int64_t)param_2 + (param_3 - 0x10));
    uVar11 = *puVar26;
    uVar12 = puVar26[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    param_1 = (uint64_t *)((int64_t)param_1 + (param_3 - 0x10));
    *param_1 = uVar11;
    param_1[1] = uVar12;
    return;
  }
  puVar26 = (uint64_t *)((int64_t)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar26 = param_1;
  }
  if (param_1 < puVar26) {
    uVar10 = *param_2;
    uVar11 = param_2[1];
    lVar30 = (int64_t)param_2 - (int64_t)param_1;
    puVar26 = (uint64_t *)((int64_t)param_1 + lVar30 + (param_3 - 0x10));
    uVar12 = *puVar26;
    uVar13 = puVar26[1];
    puVar25 = (uint64_t *)((int64_t)param_1 + (param_3 - 0x10));
    uVar29 = param_3 - 0x10;
    puVar26 = puVar25;
    uVar32 = uVar12;
    uVar33 = uVar13;
    if (((uint64_t)puVar25 & 0xf) != 0) {
      puVar26 = (uint64_t *)((uint64_t)puVar25 & 0xfffffffffffffff0);
      uVar32 = *(uint64_t *)((int64_t)puVar26 + lVar30);
      uVar33 = ((uint64_t *)((int64_t)puVar26 + lVar30))[1];
      *puVar25 = uVar12;
      *(uint64_t *)((int64_t)param_1 + (param_3 - 8)) = uVar13;
      uVar29 = (int64_t)puVar26 - (int64_t)param_1;
    }
    uVar31 = uVar29 >> 7;
    if (uVar31 != 0) {
      *puVar26 = uVar32;
      puVar26[1] = uVar33;
      puVar25 = puVar26;
      while( true ) {
        puVar1 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x10);
        uVar12 = puVar1[1];
        puVar26 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x20);
        uVar13 = *puVar26;
        uVar32 = puVar26[1];
        puVar26 = puVar25 + -0x10;
        puVar25[-2] = *puVar1;
        puVar25[-1] = uVar12;
        puVar25[-4] = uVar13;
        puVar25[-3] = uVar32;
        puVar1 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x30);
        uVar12 = puVar1[1];
        puVar2 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x40);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        uVar31 = uVar31 - 1;
        puVar25[-6] = *puVar1;
        puVar25[-5] = uVar12;
        puVar25[-8] = uVar13;
        puVar25[-7] = uVar32;
        puVar1 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x50);
        uVar12 = puVar1[1];
        puVar2 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x60);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        puVar25[-10] = *puVar1;
        puVar25[-9] = uVar12;
        puVar25[-0xc] = uVar13;
        puVar25[-0xb] = uVar32;
        puVar1 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x70);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar32 = *(uint64_t *)((int64_t)puVar26 + lVar30);
        uVar33 = ((uint64_t *)((int64_t)puVar26 + lVar30))[1];
        if (uVar31 == 0) break;
        puVar25[-0xe] = uVar12;
        puVar25[-0xd] = uVar13;
        *puVar26 = uVar32;
        puVar25[-0xf] = uVar33;
        puVar25 = puVar26;
      }
      puVar25[-0xe] = uVar12;
      puVar25[-0xd] = uVar13;
      uVar29 = uVar29 & 0x7f;
    }
    for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
      *puVar26 = uVar32;
      puVar26[1] = uVar33;
      puVar26 = puVar26 + -2;
      uVar32 = *(uint64_t *)((int64_t)puVar26 + lVar30);
      uVar33 = ((uint64_t *)((int64_t)puVar26 + lVar30))[1];
    }
    if ((uVar29 & 0xf) != 0) {
      *param_1 = uVar10;
      param_1[1] = uVar11;
    }
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    return;
  }
  if (_DAT_7fffa47800e0 < 3) {
    if ((param_3 < 0x801) || ((DAT_7fffa4781b80 & 2) == 0)) {
      if (0x80 < param_3) {
        lVar30 = ((uint64_t)param_1 & 0xf) - 0x10;
        param_1 = (uint64_t *)((int64_t)param_1 - lVar30);
        param_2 = (uint64_t *)((int64_t)param_2 - lVar30);
        param_3 = param_3 + lVar30;
        if (0x80 < param_3) {
          do {
            uVar10 = param_2[1];
            uVar11 = param_2[2];
            uVar12 = param_2[3];
            uVar13 = param_2[4];
            uVar32 = param_2[5];
            uVar33 = param_2[6];
            uVar14 = param_2[7];
            *param_1 = *param_2;
            param_1[1] = uVar10;
            param_1[2] = uVar11;
            param_1[3] = uVar12;
            param_1[4] = uVar13;
            param_1[5] = uVar32;
            param_1[6] = uVar33;
            param_1[7] = uVar14;
            uVar10 = param_2[9];
            uVar11 = param_2[10];
            uVar12 = param_2[0xb];
            uVar13 = param_2[0xc];
            uVar32 = param_2[0xd];
            uVar33 = param_2[0xe];
            uVar14 = param_2[0xf];
            param_1[8] = param_2[8];
            param_1[9] = uVar10;
            param_1[10] = uVar11;
            param_1[0xb] = uVar12;
            param_1[0xc] = uVar13;
            param_1[0xd] = uVar32;
            param_1[0xe] = uVar33;
            param_1[0xf] = uVar14;
            param_1 = param_1 + 0x10;
            param_2 = param_2 + 0x10;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x7fffa56a6446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_7fffa4770000.e_magic +
                *(uint32_t *)(&UNK_7fffa5873218 + (param_3 + 0xf >> 4) * 4)))();
      return;
    }
FUN_7fffa55ee750:
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(uint8_t *)param_1 = *(uint8_t *)param_2;
      param_2 = (uint64_t *)((int64_t)param_2 + 1);
      param_1 = (uint64_t *)((int64_t)param_1 + 1);
    }
    return;
  }
  if ((0x2000 < param_3) && (param_3 < 0x180001)) {
    puVar26 = param_1 + 8;
    if (param_2 < param_1) {
      puVar26 = param_2;
    }
    if ((puVar26 <= param_2) && ((DAT_7fffa4781b80 & 2) != 0)) goto FUN_7fffa55ee750;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  puVar26 = (uint64_t *)((int64_t)param_2 + (param_3 - 0x20));
  uVar32 = *puVar26;
  uVar33 = puVar26[1];
  uVar14 = puVar26[2];
  uVar15 = puVar26[3];
  if (0x100 < param_3) {
    lVar30 = ((uint64_t)param_1 & 0x1f) - 0x20;
    pauVar23 = (uint8_t (*) [32])((int64_t)param_1 - lVar30);
    pauVar27 = (uint8_t (*) [32])((int64_t)param_2 - lVar30);
    param_3 = param_3 + lVar30;
    if (0x100 < param_3) {
      if (0x180000 < param_3) {
        do {
          uVar29 = param_3;
          pauVar28 = pauVar27;
          pauVar24 = pauVar23;
          auVar3 = pauVar28[1];
          auVar4 = pauVar28[2];
          auVar5 = pauVar28[3];
          auVar6 = vmovntdq_avx(*pauVar28);
          *pauVar24 = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[3] = auVar3;
          auVar3 = pauVar28[5];
          auVar4 = pauVar28[6];
          auVar5 = pauVar28[7];
          auVar6 = vmovntdq_avx(pauVar28[4]);
          pauVar24[4] = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[7] = auVar3;
          pauVar23 = pauVar24 + 8;
          pauVar27 = pauVar28 + 8;
          param_3 = uVar29 - 0x100;
        } while (0xff < uVar29 - 0x100);
        uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar29) {
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
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(*pauVar28 + uVar31));
          *(uint8_t (*) [32])(*pauVar24 + uVar31) = auVar3;
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
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(pauVar28[1] + uVar31));
          *(uint8_t (*) [32])(pauVar24[1] + uVar31) = auVar3;
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
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(pauVar28[2] + uVar31));
          *(uint8_t (*) [32])(pauVar24[2] + uVar31) = auVar3;
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
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(pauVar28[3] + uVar31));
          *(uint8_t (*) [32])(pauVar24[3] + uVar31) = auVar3;
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
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(pauVar28[4] + uVar31));
          *(uint8_t (*) [32])(pauVar24[4] + uVar31) = auVar3;
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
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(pauVar28[5] + uVar31));
          *(uint8_t (*) [32])(pauVar24[5] + uVar31) = auVar3;
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
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(pauVar28[6] + uVar31));
          *(uint8_t (*) [32])(pauVar24[6] + uVar31) = auVar3;
        default:
          puVar26 = (uint64_t *)(pauVar24[-1] + uVar29);
          *puVar26 = uVar32;
          puVar26[1] = uVar33;
          puVar26[2] = uVar14;
          puVar26[3] = uVar15;
        case 0x100:
          *param_1 = uVar10;
          param_1[1] = uVar11;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          return;
        }
      }
      do {
        uVar10 = *(uint64_t *)(*pauVar27 + 8);
        uVar11 = *(uint64_t *)(*pauVar27 + 0x10);
        uVar12 = *(uint64_t *)(*pauVar27 + 0x18);
        uVar13 = *(uint64_t *)pauVar27[1];
        uVar32 = *(uint64_t *)(pauVar27[1] + 8);
        uVar33 = *(uint64_t *)(pauVar27[1] + 0x10);
        uVar14 = *(uint64_t *)(pauVar27[1] + 0x18);
        uVar15 = *(uint64_t *)pauVar27[2];
        uVar16 = *(uint64_t *)(pauVar27[2] + 8);
        uVar17 = *(uint64_t *)(pauVar27[2] + 0x10);
        uVar18 = *(uint64_t *)(pauVar27[2] + 0x18);
        uVar19 = *(uint64_t *)pauVar27[3];
        uVar20 = *(uint64_t *)(pauVar27[3] + 8);
        uVar21 = *(uint64_t *)(pauVar27[3] + 0x10);
        uVar22 = *(uint64_t *)(pauVar27[3] + 0x18);
        *(uint64_t *)*pauVar23 = *(uint64_t *)*pauVar27;
        *(uint64_t *)(*pauVar23 + 8) = uVar10;
        *(uint64_t *)(*pauVar23 + 0x10) = uVar11;
        *(uint64_t *)(*pauVar23 + 0x18) = uVar12;
        *(uint64_t *)pauVar23[1] = uVar13;
        *(uint64_t *)(pauVar23[1] + 8) = uVar32;
        *(uint64_t *)(pauVar23[1] + 0x10) = uVar33;
        *(uint64_t *)(pauVar23[1] + 0x18) = uVar14;
        *(uint64_t *)pauVar23[2] = uVar15;
        *(uint64_t *)(pauVar23[2] + 8) = uVar16;
        *(uint64_t *)(pauVar23[2] + 0x10) = uVar17;
        *(uint64_t *)(pauVar23[2] + 0x18) = uVar18;
        *(uint64_t *)pauVar23[3] = uVar19;
        *(uint64_t *)(pauVar23[3] + 8) = uVar20;
        *(uint64_t *)(pauVar23[3] + 0x10) = uVar21;
        *(uint64_t *)(pauVar23[3] + 0x18) = uVar22;
        uVar10 = *(uint64_t *)(pauVar27[4] + 8);
        uVar11 = *(uint64_t *)(pauVar27[4] + 0x10);
        uVar12 = *(uint64_t *)(pauVar27[4] + 0x18);
        uVar13 = *(uint64_t *)pauVar27[5];
        uVar32 = *(uint64_t *)(pauVar27[5] + 8);
        uVar33 = *(uint64_t *)(pauVar27[5] + 0x10);
        uVar14 = *(uint64_t *)(pauVar27[5] + 0x18);
        uVar15 = *(uint64_t *)pauVar27[6];
        uVar16 = *(uint64_t *)(pauVar27[6] + 8);
        uVar17 = *(uint64_t *)(pauVar27[6] + 0x10);
        uVar18 = *(uint64_t *)(pauVar27[6] + 0x18);
        uVar19 = *(uint64_t *)pauVar27[7];
        uVar20 = *(uint64_t *)(pauVar27[7] + 8);
        uVar21 = *(uint64_t *)(pauVar27[7] + 0x10);
        uVar22 = *(uint64_t *)(pauVar27[7] + 0x18);
        *(uint64_t *)pauVar23[4] = *(uint64_t *)pauVar27[4];
        *(uint64_t *)(pauVar23[4] + 8) = uVar10;
        *(uint64_t *)(pauVar23[4] + 0x10) = uVar11;
        *(uint64_t *)(pauVar23[4] + 0x18) = uVar12;
        *(uint64_t *)pauVar23[5] = uVar13;
        *(uint64_t *)(pauVar23[5] + 8) = uVar32;
        *(uint64_t *)(pauVar23[5] + 0x10) = uVar33;
        *(uint64_t *)(pauVar23[5] + 0x18) = uVar14;
        *(uint64_t *)pauVar23[6] = uVar15;
        *(uint64_t *)(pauVar23[6] + 8) = uVar16;
        *(uint64_t *)(pauVar23[6] + 0x10) = uVar17;
        *(uint64_t *)(pauVar23[6] + 0x18) = uVar18;
        *(uint64_t *)pauVar23[7] = uVar19;
        *(uint64_t *)(pauVar23[7] + 8) = uVar20;
        *(uint64_t *)(pauVar23[7] + 0x10) = uVar21;
        *(uint64_t *)(pauVar23[7] + 0x18) = uVar22;
        pauVar23 = pauVar23 + 8;
        pauVar27 = pauVar27 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7fffa56a61a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_7fffa4770000.e_magic +
            *(uint32_t *)(&UNK_7fffa58731d0 + (param_3 + 0x1f >> 5) * 4)))();
  return;
}


// ============================================================================
// Function : FUN_7fffa56a65a0  |  RVA: 0xf365a0  |  Size: 94 bytes
// Callers  : FUN_7fffa52d242c@0xb6242c, FUN_7fffa5244e38@0xad4e38, FUN_7fffa51476a0@0x9d76a0, FUN_7fffa54e557c@0xd7557c, FUN_7fffa56aab2c@0xf3ab2c, FUN_7fffa5488508@0xd18508, FUN_7fffa569faf0@0xf2faf0
// Callees  : FUN_7fffa50fecc0@0x98ecc0, FUN_7fffa4ed9184@0x769184, FUN_7fffa50030d0@0x8930d0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t FUN_7fffa56a65a0(uint64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  uint32_t *puVar3;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      lVar2 = (*(code *)&DAT_7ff8504e1240)(_DAT_7fffa4782170,0,param_1);
      if (lVar2 != 0) {
        return lVar2;
      }
      iVar1 = FUN_7fffa50030d0();
    } while ((iVar1 != 0) && (iVar1 = FUN_7fffa50fecc0(param_1), iVar1 != 0));
  }
  puVar3 = (uint32_t *)FUN_7fffa4ed9184();
  *puVar3 = 0xc;
  return 0;
}


// ============================================================================
// Function : FUN_7fffa56a6600  |  RVA: 0xf36600  |  Size: 2738 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa56a6600(void) {
    /* +0xf36600 */ __asm { PUSH RBP }
    /* +0xf36601 */ __asm { PUSH R14 }
    /* +0xf36603 */ __asm { PUSH R13 }
    /* +0xf36605 */ __asm { PUSH RSI }
    /* +0xf36606 */ __asm { PUSH RBX }
    /* +0xf36607 */ __asm { PUSH R12 }
    /* +0xf36609 */ __asm { PUSH RDI }
    /* +0xf3660a */ __asm { PUSH R15 }
    /* +0xf3660c */ __asm { SUB RSP,0x338 }
    /* +0xf36613 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xf3661b */ __asm { MOVDQA xmmword ptr [RBP + 0x2a0],XMM10 }
    /* +0xf36624 */ __asm { MOVDQA xmmword ptr [RBP + 0x290],XMM13 }
    /* +0xf3662d */ __asm { MOVDQA xmmword ptr [RBP + 0x280],XMM11 }
    /* +0xf36636 */ __asm { MOV qword ptr [RBP + 0x278],-0x2 }
    /* +0xf36641 */ __asm { MOV RBX,RAX }
    /* +0xf36644 */ __asm { MOV R10,RCX }
    /* +0xf36647 */ __asm { MOV R9D,0xfaf6c3bd }
    /* +0xf3664d */ __asm { MOV R8D,0x45546ed }
    /* +0xf36653 */ __asm { ADD R8D,0xcb017cf8 }
    /* +0xf3665a */ __asm { MOV RDX,0x3fffdfffdf2a1b57 }
    /* +0xf36664 */ __asm { ADD RDX,0x20d5e4a9 }
    /* +0xf3666b */ __asm { MOV ECX,EBX }
    /* +0xf3666d */ __asm { ROR RDX,CL }
    /* +0xf36670 */ __asm { IMUL RDX,R10 }
    /* +0xf36674 */ __asm { MOV R10,RDX }
    /* +0xf36677 */ __asm { ROL R10,0x2f }
    /* +0xf3667b */ __asm { ROL R8D,CL }
    /* +0xf3667e */ __asm { MOV RAX,RDX }
    /* +0xf36681 */ __asm { ROL RAX,0xc }
    /* +0xf36685 */ __asm { XOR RAX,R10 }
    /* +0xf36688 */ __asm { XOR RAX,RDX }
    /* +0xf3668b */ __asm { MOV R10,RAX }
    /* +0xf3668e */ __asm { ROL R10,0x18 }
    /* +0xf36692 */ __asm { MOV RDX,RAX }
    /* +0xf36695 */ __asm { ROL RDX,0x1e }
    /* +0xf36699 */ __asm { XOR RDX,R10 }
    /* +0xf3669c */ __asm { XOR RDX,RAX }
    /* +0xf3669f */ __asm { MOV R10,RDX }
    /* +0xf366a2 */ __asm { ROL R10,0x30 }
    /* +0xf366a6 */ __asm { MOV RAX,RDX }
    /* +0xf366a9 */ __asm { ROL RAX,0x3c }
    /* +0xf366ad */ __asm { XOR RAX,R10 }
    /* +0xf366b0 */ __asm { XOR RAX,RDX }
    /* +0xf366b3 */ __asm { MOV RDX,RAX }
    /* +0xf366b6 */ __asm { ROL RDX,0x38 }
    /* +0xf366ba */ __asm { MOV R10,RAX }
    /* +0xf366bd */ __asm { ROL R10,0x20 }
    /* +0xf366c1 */ __asm { XOR R10,RDX }
    /* +0xf366c4 */ __asm { XOR R10,RAX }
    /* +0xf366c7 */ __asm { MOV ECX,EBX }
    /* +0xf366c9 */ __asm { OR ECX,0x1 }
    /* +0xf366cc */ __asm { MOV dword ptr [RBP + 0x250],ECX }
    /* +0xf366d2 */ __asm { IMUL R9D,ECX }
    /* +0xf366d6 */ __asm { ROL R9D,0x1c }
    /* +0xf366da */ __asm { MOV RDX,R10 }
    /* +0xf366dd */ __asm { ROL RDX,0x30 }
    /* +0xf366e1 */ __asm { ROL R10,0x10 }
    /* +0xf366e5 */ __asm { MOV RAX,RDX }
    /* +0xf366e8 */ __asm { XOR RAX,R10 }
    /* +0xf366eb */ __asm { ADD R10,RDX }
    /* +0xf366ee */ __asm { CMP R9,R8 }
    /* +0xf366f1 */ __asm { CMOVL R10,RAX }
    /* +0xf366f5 */ __asm { MOV ECX,0xbde8bb69 }
    /* +0xf366fa */ __asm { XOR RCX,RDX }
    /* +0xf366fd */ __asm { XOR RCX,R10 }
    /* +0xf36700 */ __asm { MOV R10,qword ptr [RCX + 0x30] }
    /* +0xf36704 */ __asm { MOV RDX,qword ptr [RCX + 0x8] }
    /* +0xf36708 */ __asm { MOV RAX,qword ptr [RCX + 0x10] }
    /* +0xf3670c */ __asm { MOV R11,qword ptr [RCX + 0x28] }
    /* +0xf36710 */ __asm { MOV R9,qword ptr [RCX + 0x20] }
    /* +0xf36714 */ __asm { MOV R9,qword ptr [R9] }
    /* +0xf36717 */ __asm { MOV R8D,dword ptr [R11] }
    /* +0xf3671a */ __asm { MOV dword ptr [RBP + 0x258],R8D }
    /* +0xf36721 */ __asm { MOV ESI,dword ptr [RDX] }
    /* +0xf36723 */ __asm { MOV R10,qword ptr [R10] }
    /* +0xf36726 */ __asm { MOV qword ptr [RBP + 0x268],R10 }
    /* +0xf3672d */ __asm { MOV qword ptr [RBP + 0xe0],RCX }
    /* +0xf36734 */ __asm { MOV R10,qword ptr [RCX + 0x18] }
    /* +0xf36738 */ __asm { MOV EDI,dword ptr [R10] }
    /* +0xf3673b */ __asm { MOV R10,-0x3b7750b50cf3bd7 }
    /* +0xf36745 */ __asm { MOV RDX,qword ptr [RAX] }
    /* +0xf36748 */ __asm { MOV qword ptr [RBP + 0x30],RDX }
    /* +0xf3674c */ __asm { MOV qword ptr [RBP + 0x18],R9 }
    /* +0xf36750 */ __asm { CMP R9,R10 }
    /* +0xf36753 */ __asm { JZ 0x7fffa56aa890 }
    /* +0xf36759 */ __asm { MOV CX,0xb739 }
    /* +0xf3675d */ __asm { ADD ECX,0x20af }
    /* +0xf36763 */ __asm { MOV R9D,EBX }
    /* +0xf36766 */ __asm { OR R9D,0x1 }
    /* +0xf3676a */ __asm { MOV qword ptr [RBP + 0xe8],R9 }
    /* +0xf36771 */ __asm { IMUL ECX,R9D }
    /* +0xf36775 */ __asm { MOVZX R9D,CX }
    /* +0xf36779 */ __asm { MOV R14,qword ptr GS:[R9] }
    /* +0xf3677d */ __asm { LEA R10,[0x7fffa47c3a49] }
    /* +0xf36784 */ __asm { MOV R9W,0x2170 }
    /* +0xf36789 */ __asm { XOR R9D,0x3fc }
    /* +0xf36790 */ __asm { ROL R9W,0x1 }
    /* +0xf36794 */ __asm { NOT R9D }
    /* +0xf36797 */ __asm { MOVSX R8,R9W }
    /* +0xf3679b */ __asm { MOV ECX,dword ptr [R10 + R8*0x1] }
    /* +0xf3679f */ __asm { CMP ECX,R14D }
    /* +0xf367a2 */ __asm { JZ 0x7fffa56a67e7 }
    /* +0xf367a4 */ __asm { MOV CX,0x6e6a }
    /* +0xf367a8 */ __asm { LEA R12,[0x7fffa47c59ec] }
    /* +0xf367af */ __asm { MOV R15W,0x3527 }
    /* +0xf367b4 */ __asm { ADD R15D,EBX }
    /* +0xf367b7 */ __asm { IMUL R9D,ECX,0x17a9 }
    /* +0xf367be */ __asm { SUB R9D,EBX }
    /* +0xf367c1 */ __asm { MOVSX R8,R9W }
    /* +0xf367c5 */ __asm { LEA R10,[0x7fffa47c3033] }
    /* +0xf367cc */ __asm { LEA RCX,[R10 + R8*0x1] }
    /* +0xf367d0 */ __asm { ADD RCX,0x8 }
    /* +0xf367d4 */ __asm { CALL qword ptr [0x7fffa5877480] }
    /* +0xf367da */ __asm { ROL R15W,0xd }
    /* +0xf367df */ __asm { MOVSX R8,R15W }
    /* +0xf367e3 */ __asm { XCHG dword ptr [R12 + R8*0x1],R14D }
    /* +0xf367e7 */ __asm { LEA R10,[0x7fffa47c82ec] }
    /* +0xf367ee */ __asm { MOV ECX,0xecf73d3d }
    /* +0xf367f3 */ __asm { MOV R8D,0x182f46e4 }
    /* +0xf367f9 */ __asm { XOR R8D,EBX }
    /* +0xf367fc */ __asm { LEA RAX,[0x7fffa47cca81] }
    /* +0xf36803 */ __asm { MOV DL,0xe5 }
    /* +0xf36805 */ __asm { MOVZX EDX,DL }
    /* +0xf36808 */ __asm { IMUL EDX,EDX,0x39 }
    /* +0xf3680b */ __asm { IMUL R8D,R8D,0x7f0ff257 }
    /* +0xf36812 */ __asm { ROL R8D,0x19 }
    /* +0xf36816 */ __asm { MOVSXD R8,R8D }
    /* +0xf36819 */ __asm { LEA R11,[0x7fffa47c23b6] }
    /* +0xf36820 */ __asm { SUB ECX,EBX }
    /* +0xf36822 */ __asm { ADD ECX,0xf876be5e }
    /* +0xf36828 */ __asm { MOVSXD R9,ECX }
    /* +0xf3682b */ __asm { MOV CX,0x1995 }
    /* +0xf3682f */ __asm { MOV R15D,EBX }
    /* +0xf36832 */ __asm { XOR R15D,ECX }
    /* +0xf36835 */ __asm { ROL R15W,0x9 }
    /* +0xf3683a */ __asm { MOVSX RCX,R15W }
    /* +0xf3683e */ __asm { LEA R12,[0x7fffa47c9e92] }
    /* +0xf36845 */ __asm { MOV ECX,dword ptr [R11 + RCX*0x1 + 0x4] }
    /* +0xf3684a */ __asm { INC ECX }
    /* +0xf3684c */ __asm { MOV dword ptr [R12 + R9*0x1 + 0x4],ECX }
    /* +0xf36851 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R8*0x1 + 0x9] }
    /* +0xf36857 */ __asm { MOV R8D,0x9d9450b7 }
    /* +0xf3685d */ __asm { ADD R8D,0x226b9dd9 }
    /* +0xf36864 */ __asm { MOV ECX,EBX }
    /* +0xf36866 */ __asm { ROR R8D,CL }
    /* +0xf36869 */ __asm { MOVSXD R8,R8D }
    /* +0xf3686c */ __asm { ADD R8,R10 }
    /* +0xf3686f */ __asm { MOV qword ptr [RBP + 0x28],RBX }
    /* +0xf36873 */ __asm { XOR DL,BL }
    /* +0xf36875 */ __asm { MOVZX R11D,uint8_t ptr [R9 + R8*0x1 + 0x17] }
    /* +0xf3687b */ __asm { NOT R11B }
    /* +0xf3687e */ __asm { ROL R11B,0x3 }
    /* +0xf36882 */ __asm { MOV uint8_t ptr [RBP + 0xf0],R11B }
    /* +0xf36889 */ __asm { CMP uint8_t ptr [RBP + 0xf0],DL }
    /* +0xf3688f */ __asm { JZ 0x7fffa56aa898 }
    /* +0xf36895 */ __asm { MOV dword ptr [RBP + 0xf0],0x5932d38c }
    /* +0xf3689f */ __asm { MOV ECX,dword ptr [RBP + 0xf0] }
    /* +0xf368a5 */ __asm { TEST CL,0x1 }
    /* +0xf368a8 */ __asm { JNZ 0x7fffa56aa8d7 }
    /* +0xf368ae */ __asm { RDTSC }
    /* +0xf368b0 */ __asm { SHL RDX,0x20 }
    /* +0xf368b4 */ __asm { OR RDX,RAX }
    /* +0xf368b7 */ __asm { MOV R10,-0x6bdeac2e46be109b }
    /* +0xf368c1 */ __asm { IMUL R10,RDX }
    /* +0xf368c5 */ __asm { MOV R9,0x2ac46bd1bec03abe }
    /* +0xf368cf */ __asm { ADD R9,R10 }
    /* +0xf368d2 */ __asm { MOV RCX,R9 }
    /* +0xf368d5 */ __asm { SHR RCX,0x3b }
    /* +0xf368d9 */ __asm { MOV R8,R9 }
    /* +0xf368dc */ __asm { SHR R8,0x2d }
    /* +0xf368e0 */ __asm { SHR R9,0x1b }
    /* +0xf368e4 */ __asm { XOR R8D,R9D }
    /* +0xf368e7 */ __asm { ROR R8D,CL }
    /* +0xf368ea */ __asm { MOV dword ptr [RBP + 0xf0],0x896e9510 }
    /* +0xf368f4 */ __asm { MOV ECX,dword ptr [RBP + 0xf0] }
    /* +0xf368fa */ __asm { CMP R8D,0x11458e }
    /* +0xf36901 */ __asm { MOV R13,qword ptr [RBP + 0x28] }
    /* +0xf36905 */ __asm { JA 0x7fffa56a6c51 }
    /* +0xf3690b */ __asm { MOV ECX,0x9f606b35 }
    /* +0xf36910 */ __asm { XOR ECX,0xab177332 }
    /* +0xf36916 */ __asm { IMUL ECX,dword ptr [RBP + 0x250] }
    /* +0xf3691d */ __asm { XOR ECX,0x5497a0e3 }
    /* +0xf36923 */ __asm { MOVSXD R10,ECX }
    /* +0xf36926 */ __asm { MOV EDX,0x950646c }
    /* +0xf3692b */ __asm { ADD EDX,0x8001fc80 }
    /* +0xf36931 */ __asm { MOV ECX,R13D }
    /* +0xf36934 */ __asm { ROL EDX,CL }
    /* +0xf36936 */ __asm { MOVSXD RDX,EDX }
    /* +0xf36939 */ __asm { CMP RDX,R10 }
    /* +0xf3693c */ __asm { JA 0x7fffa56a6967 }
    /* +0xf3693e */ __asm { MOV R9D,0x342d2f3a }
    /* +0xf36944 */ __asm { XOR R9D,R13D }
    /* +0xf36947 */ __asm { ROL R9D,0x16 }
    /* +0xf3694b */ __asm { NOT R9D }
    /* +0xf3694e */ __asm { MOV dword ptr [RBP + 0xdc],0x77effe97 }
    /* +0xf36958 */ __asm { MOV ECX,dword ptr [RBP + 0xdc] }
    /* +0xf3695e */ __asm { LEA RAX,[0x7fffa47c370a] }
    /* +0xf36965 */ __asm { JMP 0x7fffa56a69a5 }
    /* +0xf36967 */ __asm { MOV ECX,0x9232cfaa }
    /* +0xf3696c */ __asm { ADD ECX,0x494d6ac0 }
    /* +0xf36972 */ __asm { XOR ECX,R13D }
    /* +0xf36975 */ __asm { IMUL ECX,ECX,0x7895a001 }
    /* +0xf3697b */ __asm { MOV dword ptr [RBP + 0xdc],ECX }
    /* +0xf36981 */ __asm { LEA RAX,[0x7fffa47c370a] }
    /* +0xf36988 */ __asm { MOV ECX,dword ptr [RBP + 0xdc] }
    /* +0xf3698e */ __asm { MOV R9D,0x6c4e2b41 }
    /* +0xf36994 */ __asm { XOR R9D,0xc0000095 }
    /* +0xf3699b */ __asm { ADD R9D,0xbfc13b5d }
    /* +0xf369a2 */ __asm { XOR R9D,R13D }
    /* +0xf369a5 */ __asm { MOV R8D,0x24bf910 }
    /* +0xf369ab */ __asm { IMUL R8D,dword ptr [RBP + 0x250] }
    /* +0xf369b3 */ __asm { MOV ECX,R9D }
    /* +0xf369b6 */ __asm { ROL R8D,CL }
    /* +0xf369b9 */ __asm { NOT R8D }
    /* +0xf369bc */ __asm { MOV R10D,0xf74f9365 }
    /* +0xf369c2 */ __asm { CMP R8,R10 }
    /* +0xf369c5 */ __asm { SETZ DL }
    /* +0xf369c8 */ __asm { NEG DL }
    /* +0xf369ca */ __asm { MOVZX R8D,uint8_t ptr [RAX + -0x6fc1] }
    /* +0xf369d2 */ __asm { XOR DL,uint8_t ptr [RAX + R8*0x4 + -0x6fbb] }
    /* +0xf369da */ __asm { ROL DL,0x5 }
    /* +0xf369dd */ __asm { MOV uint8_t ptr [RBP + 0xf0],DL }
    /* +0xf369e3 */ __asm { MOVZX EDX,uint8_t ptr [RAX + R8*0x4 + -0x6fba] }
    /* +0xf369ec */ __asm { NOT DL }
    /* +0xf369ee */ __asm { ROL DL,0x5 }
    /* +0xf369f1 */ __asm { MOV uint8_t ptr [RBP + 0xf1],DL }
    /* +0xf369f7 */ __asm { MOVZX EDX,uint8_t ptr [RAX + R8*0x4 + -0x6fb9] }
    /* +0xf36a00 */ __asm { NOT DL }
    /* +0xf36a02 */ __asm { ROL DL,0x5 }
    /* +0xf36a05 */ __asm { MOV uint8_t ptr [RBP + 0xf2],DL }
    /* +0xf36a0b */ __asm { MOVZX EDX,uint8_t ptr [RAX + R8*0x4 + -0x6fb8] }
    /* +0xf36a14 */ __asm { NOT DL }
    /* +0xf36a16 */ __asm { ROL DL,0x5 }
    /* +0xf36a19 */ __asm { MOV uint8_t ptr [RBP + 0xf3],DL }
    /* +0xf36a1f */ __asm { MOV ECX,0x9102c3cc }
    /* +0xf36a24 */ __asm { XOR ECX,dword ptr [RBP + 0xf0] }
    /* +0xf36a2a */ __asm { BT ECX,ECX }
    /* +0xf36a2d */ __asm { JNC 0x7fffa56a6c51 }
    /* +0xf36a33 */ __asm { PUSHFQ }
    /* +0xf36a34 */ __asm { POP R11 }
    /* +0xf36a36 */ __asm { NOP }
    /* +0xf36a37 */ __asm { MOV RAX,0x0 }
    /* +0xf36a3e */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xf36a45 */ __asm { TEST R11D,0x100 }
    /* +0xf36a4c */ __asm { NOP }
    /* +0xf36a4d */ __asm { NOP }
    /* +0xf36a4e */ __asm { NOP }
    /* +0xf36a4f */ __asm { NOP }
    /* +0xf36a50 */ __asm { NOP }
    /* +0xf36a51 */ __asm { MOV ECX,0xc73d9e3 }
    /* +0xf36a56 */ __asm { SUB ECX,R13D }
    /* +0xf36a59 */ __asm { ROL ECX,0x1 }
    /* +0xf36a5b */ __asm { SUB ECX,R9D }
    /* +0xf36a5e */ __asm { MOV dword ptr [RBP + 0xf0],ECX }
    /* +0xf36a64 */ __asm { MOV ECX,dword ptr [RBP + 0xf0] }
    /* +0xf36a6a */ __asm { CMP ECX,0xa7d56db6 }
    /* +0xf36a70 */ __asm { JNC 0x7fffa56aa8e5 }
    /* +0xf36a76 */ __asm { MOV R10,0xa043cc16504a188 }
    /* +0xf36a80 */ __asm { MOV R8,R9 }
    /* +0xf36a83 */ __asm { OR R8,0x1 }
    /* +0xf36a87 */ __asm { IMUL R8,R10 }
    /* +0xf36a8b */ __asm { MOV R10,-0x2646f67c }
    /* +0xf36a92 */ __asm { SUB R10,R8 }
    /* +0xf36a95 */ __asm { MOV R8,0x1dde70 }
    /* +0xf36a9c */ __asm { LEA R14,[0x7fffa4ac9100] }
    /* +0xf36aa3 */ __asm { NOP }
    /* +0xf36aa5 */ __asm { IMUL R10,R10,0x1efcd7 }
    /* +0xf36aac */ __asm { CMP R14,R10 }
    /* +0xf36aaf */ __asm { JZ 0x7fffa56aa8ee }
    /* +0xf36ab5 */ __asm { MOV dword ptr [RBP + 0xf0],0x23fd2163 }
    /* +0xf36abf */ __asm { MOV ECX,dword ptr [RBP + 0xf0] }
    /* +0xf36ac5 */ __asm { MOV R10D,0xe64bd43c }
    /* +0xf36acb */ __asm { XOR R10,R8 }
    /* +0xf36ace */ __asm { MOV dword ptr [RBP + 0xf0],0xff3bff4c }
    /* +0xf36ad8 */ __asm { MOV ECX,dword ptr [RBP + 0xf0] }
    /* +0xf36ade */ __asm { CMP ECX,0x8beb0cf9 }
    /* +0xf36ae4 */ __asm { JBE 0x7fffa56aa8f8 }
    /* +0xf36aea */ __asm { MOV ECX,0xa8ef6b47 }
    /* +0xf36aef */ __asm { MOV RAX,R10 }
    /* +0xf36af2 */ __asm { MUL RCX }
    /* +0xf36af5 */ __asm { MOV R11,RAX }
    /* +0xf36af8 */ __asm { MOV RAX,RDX }
    /* +0xf36afb */ __asm { MOV RDX,qword ptr [RBP + 0x2f8] }
    /* +0xf36b02 */ __asm { ADD RBX,RCX }
    /* +0xf36b05 */ __asm { XOR RAX,R10 }
    /* +0xf36b08 */ __asm { ADD R10,RAX }
    /* +0xf36b0b */ __asm { MOV R10,0x7e2aa08539ccb2d7 }
    /* +0xf36b15 */ __asm { CMP RDX,R10 }
    /* +0xf36b18 */ __asm { NOP }
    /* +0xf36b19 */ __asm { NOP }
    /* +0xf36b1a */ __asm { NOP }
    /* +0xf36b1b */ __asm { NOP }
    /* +0xf36b1c */ __asm { NOP }
    /* +0xf36b1d */ __asm { XOR RAX,R11 }
    /* +0xf36b20 */ __asm { MOV R10,0x7fb8309e9ebb7181 }
    /* +0xf36b2a */ __asm { CMP R14,R10 }
    /* +0xf36b2d */ __asm { NOP }
    /* +0xf36b2e */ __asm { NOP }
    /* +0xf36b2f */ __asm { NOP }
    /* +0xf36b30 */ __asm { NOP }
    /* +0xf36b31 */ __asm { NOP }
    /* +0xf36b32 */ __asm { XOR RAX,RCX }
    /* +0xf36b35 */ __asm { ADD R14,0x8 }
    /* +0xf36b39 */ __asm { ADD R8,-0x10 }
    /* +0xf36b3d */ __asm { MOV R10D,R13D }
    /* +0xf36b40 */ __asm { SUB R10D,R9D }
    /* +0xf36b43 */ __asm { MOV R12D,0x2449c8fd }
    /* +0xf36b49 */ __asm { MOV R15D,0xe64bd43c }
    /* +0xf36b4f */ __asm { NOP }
    /* +0xf36b50 */ __asm { MOV ECX,0x67a98c8f }
    /* +0xf36b55 */ __asm { IMUL EDX,ECX,0x6fcd36d9 }
    /* +0xf36b5b */ __asm { ADD EDX,R9D }
    /* +0xf36b5e */ __asm { MOV ECX,R13D }
    /* +0xf36b61 */ __asm { ROR EDX,CL }
    /* +0xf36b63 */ __asm { MOV ECX,0xd5460de7 }
    /* +0xf36b68 */ __asm { IMUL ECX,ECX,0x113f8a19 }
    /* +0xf36b6e */ __asm { XOR ECX,R9D }
    /* +0xf36b71 */ __asm { SUB ECX,R13D }
    /* +0xf36b74 */ __asm { IMUL ECX,ECX,0x4c81b065 }
    /* +0xf36b7a */ __asm { CMP RDX,RCX }
    /* +0xf36b7d */ __asm { JGE 0x7fffa56a6bc0 }
    /* +0xf36b7f */ __asm { XOR R11,RAX }
    /* +0xf36b82 */ __asm { MOV R11,qword ptr [R14 + -0x8] }
    /* +0xf36b86 */ __asm { XOR R11,R12 }
    /* +0xf36b89 */ __asm { SBB RDX,R11 }
    /* +0xf36b8c */ __asm { MOV EDX,0x2673f3e8 }
    /* +0xf36b91 */ __asm { MOV RCX,RAX }
    /* +0xf36b94 */ __asm { XOR RCX,qword ptr [R14] }
    /* +0xf36b97 */ __asm { SBB RAX,RAX }
    /* +0xf36b9a */ __asm { LEA EBX,[R10 + RDX*0x1] }
    /* +0xf36b9e */ __asm { ADD EBX,0xb94b291c }
    /* +0xf36ba4 */ __asm { XOR RCX,R15 }
    /* +0xf36ba7 */ __asm { MOV RAX,R11 }
    /* +0xf36baa */ __asm { MUL RCX }
    /* +0xf36bad */ __asm { XOR RAX,R11 }
    /* +0xf36bb0 */ __asm { XOR RDX,RCX }
    /* +0xf36bb3 */ __asm { JMP 0x7fffa56a6bfd }
    /* +0xf36bc0 */ __asm { MOV R11,qword ptr [R14 + -0x8] }
    /* +0xf36bc4 */ __asm { SBB RDX,RAX }
    /* +0xf36bc7 */ __asm { MOV R13,RAX }
    /* +0xf36bca */ __asm { XOR R13,qword ptr [R14] }
    /* +0xf36bcd */ __asm { XOR R11,R12 }
    /* +0xf36bd0 */ __asm { XOR R13,R15 }
    /* +0xf36bd3 */ __asm { XOR RAX,RAX }
    /* +0xf36bd6 */ __asm { MOV RAX,R11 }
    /* +0xf36bd9 */ __asm { MUL R13 }
    /* +0xf36bdc */ __asm { XOR RAX,R11 }
    /* +0xf36bdf */ __asm { MOV EBX,0x9a46abab }
    /* +0xf36be4 */ __asm { XOR EBX,0xd3b2fb48 }
    /* +0xf36bea */ __asm { ADD EBX,R9D }
    /* +0xf36bed */ __asm { MOV RCX,qword ptr [RBP + 0x28] }
    /* +0xf36bf1 */ __asm { ROR EBX,CL }
    /* +0xf36bf3 */ __asm { XOR RDX,R13 }
    /* +0xf36bf6 */ __asm { MOV R13,qword ptr [RBP + 0x28] }
    /* +0xf36bfa */ __asm { SBB R11,R11 }
    /* +0xf36bfd */ __asm { XOR RAX,RDX }
    /* +0xf36c00 */ __asm { AND R11,RDX }
    /* +0xf36c03 */ __asm { OR R11,RAX }
    /* +0xf36c06 */ __asm { MOV ECX,0x32ce5546 }
    /* +0xf36c0b */ __asm { XOR ECX,EBX }
    /* +0xf36c0d */ __asm { ADD ECX,0x7ccb5052 }
    /* +0xf36c13 */ __asm { XOR ECX,R13D }
    /* +0xf36c16 */ __asm { ADD ECX,0x7508fe95 }
    /* +0xf36c1c */ __asm { CMP R8,RCX }
    /* +0xf36c1f */ __asm { JZ 0x7fffa56a6c2e }
    /* +0xf36c21 */ __asm { ADD R14,0x10 }
    /* +0xf36c25 */ __asm { ADD R8,-0x10 }
    /* +0xf36c29 */ __asm { JMP 0x7fffa56a6b50 }
    /* +0xf36c2e */ __asm { MOV R11,0x6682f6e2add983d }
    /* +0xf36c38 */ __asm { MOV dword ptr [RBP + 0xf0],0xee9689ee }
    /* +0xf36c42 */ __asm { MOV ECX,dword ptr [RBP + 0xf0] }
    /* +0xf36c48 */ __asm { CMP R11,RAX }
    /* +0xf36c4b */ __asm { JZ 0x7fffa56a6c51 }
    /* +0xf36c4d */ __asm { SUB RSP,0x8 }
    /* +0xf36c51 */ __asm { CMP ESI,0x3 }
    /* +0xf36c54 */ __asm { MOV EBX,dword ptr [RBP + 0x250] }
    /* +0xf36c5a */ __asm { JL 0x7fffa56a6eed }
    /* +0xf36c60 */ __asm { JZ 0x7fffa56a74a2 }
    /* +0xf36c66 */ __asm { CMP ESI,0x5 }
    /* +0xf36c69 */ __asm { JL 0x7fffa56a75f5 }
    /* +0xf36c6f */ __asm { JNZ 0x7fffa56a75db }
    /* +0xf36c75 */ __asm { PUSHFQ }
    /* +0xf36c76 */ __asm { POP R11 }
    /* +0xf36c78 */ __asm { NOP }
    /* +0xf36c79 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xf36c80 */ __asm { MOV RAX,0x0 }
    /* +0xf36c87 */ __asm { TEST R11D,0x100 }
    /* +0xf36c8e */ __asm { NOP }
    /* +0xf36c8f */ __asm { NOP }
    /* +0xf36c90 */ __asm { NOP }
    /* +0xf36c91 */ __asm { NOP }
    /* +0xf36c92 */ __asm { NOP }
    /* +0xf36c93 */ __asm { MOV RAX,0x0 }
    /* +0xf36c9a */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xf36ca1 */ __asm { NOP }
    /* +0xf36ca2 */ __asm { MOV dword ptr [RBP + 0xf0],0x50460ee8 }
    /* +0xf36cac */ __asm { MOV ECX,dword ptr [RBP + 0xf0] }
    /* +0xf36cb2 */ __asm { TEST ECX,ECX }
    /* +0xf36cb4 */ __asm { MOV R10,qword ptr [RBP + 0x268] }
    /* +0xf36cbb */ __asm { JS 0x7fffa56aa913 }
    /* +0xf36cc1 */ __asm { MOV dword ptr [RBP + 0xf0],0xa5ef4481 }
    /* +0xf36ccb */ __asm { MOV ECX,dword ptr [RBP + 0xf0] }
    /* +0xf36cd1 */ __asm { TEST CL,0x1 }
    /* +0xf36cd4 */ __asm { NOP }
    /* +0xf36cd5 */ __asm { NOP }
    /* +0xf36cd6 */ __asm { NOP }
    /* +0xf36cd7 */ __asm { NOP }
    /* +0xf36cd8 */ __asm { NOP }
    /* +0xf36cd9 */ __asm { NOP }
    /* +0xf36cda */ __asm { NOP }
    /* +0xf36cdb */ __asm { NOP }
    /* +0xf36cdc */ __asm { NOP }
    /* +0xf36cdd */ __asm { NOP }
    /* +0xf36cde */ __asm { NOP }
    /* +0xf36cdf */ __asm { NOP }
    /* +0xf36ce0 */ __asm { NOP }
    /* +0xf36ce1 */ __asm { NOP }
    /* +0xf36ce2 */ __asm { NOP }
    /* +0xf36ce3 */ __asm { NOP }
    /* +0xf36ce4 */ __asm { NOP }
    /* +0xf36eed */ __asm { CMP ESI,0x2 }
    /* +0xf36ef0 */ __asm { JZ 0x7fffa56a75a2 }
    /* +0xf36ef6 */ __asm { XOR EDX,EDX }
    /* +0xf36ef8 */ __asm { XOR ECX,ECX }
    /* +0xf36efa */ __asm { CMP ESI,0x1 }
    /* +0xf36efd */ __asm { SETZ DL }
    /* +0xf36f00 */ __asm { MOV R9D,0xbe2d61d }
    /* +0xf36f06 */ __asm { SETL CL }
    /* +0xf36f09 */ __asm { MOV R8D,0xcbbcba0d }
    /* +0xf36f0f */ __asm { ADD R8D,R13D }
    /* +0xf36f12 */ __asm { ROL R8D,0x15 }
    /* +0xf36f16 */ __asm { ADD R8D,0x7019521a }
    /* +0xf36f1d */ __asm { XOR R9D,0x4abc28c3 }
    /* +0xf36f24 */ __asm { ROL R9D,0x1c }
    /* +0xf36f28 */ __asm { SUB R9D,R13D }
    /* +0xf36f2b */ __asm { CMP R9,R8 }
    /* +0xf36f2e */ __asm { MOV EBX,dword ptr [RBP + 0x250] }
    /* +0xf36f34 */ __asm { CMOVA ECX,EDX }
    /* +0xf36f37 */ __asm { CMP CL,0x1 }
    /* +0xf36f3a */ __asm { JNZ 0x7fffa56a75db }
    /* +0xf36f40 */ __asm { MOV CX,0x64fd }
    /* +0xf36f44 */ __asm { XOR ECX,R13D }
    /* +0xf36f47 */ __asm { ROL CX,0x6 }
    /* +0xf36f4b */ __asm { MOVZX R9D,CX }
    /* +0xf36f4f */ __asm { MOV R10,qword ptr GS:[R9] }
    /* +0xf36f53 */ __asm { MOV RDX,qword ptr [R10 + 0xf48] }
    /* +0xf36f5a */ __asm { MOV R10,0x2739e13aeac672ac }
    /* +0xf36f64 */ __asm { MOV R9,R13 }
    /* +0xf36f67 */ __asm { ADD R9,R10 }
    /* +0xf36f6a */ __asm { IMUL R10,R9,0x4d982629 }
    /* +0xf36f71 */ __asm { MOV qword ptr [RBP + 0x230],RDX }
    /* +0xf36f78 */ __asm { MOV qword ptr [RBP + 0x38],R10 }
    /* +0xf36f7c */ __asm { CMP RDX,R10 }
    /* +0xf36f7f */ __asm { JNZ 0x7fffa56a6f90 }
    /* +0xf36f81 */ __asm { SHL dword ptr [RCX + 0x6a],0x1 }
    /* +0xf36f84 */ __asm { INT 0x21 }
    /* +0xf36f86 */ __asm { OUT 0xac,AL }
    /* +0xf36f88 */ __asm { SHL EBP,0x1 }
    /* +0xf36f8a */ __asm { NOP }
    /* +0xf36f8b */ __asm { NOP }
    /* +0xf36f8c */ __asm { NOP }
    /* +0xf36f8d */ __asm { NOP }
    /* +0xf36f8e */ __asm { NOP }
    /* +0xf36f8f */ __asm { NOP }
    /* +0xf36f90 */ __asm { NOP }
    /* +0xf36f91 */ __asm { NOP }
    /* +0xf36f92 */ __asm { NOP }
    /* +0xf36f93 */ __asm { NOP }
    /* +0xf36f94 */ __asm { NOP }
    /* +0xf36f95 */ __asm { NOP }
    /* +0xf36f96 */ __asm { NOP }
    /* +0xf36f97 */ __asm { NOP }
    /* +0xf36f98 */ __asm { NOP }
    /* +0xf36f99 */ __asm { NOP }
    /* +0xf36f9a */ __asm { NOP }
    /* +0xf36f9b */ __asm { NOP }
    /* +0xf36f9c */ __asm { NOP }
    /* +0xf36f9d */ __asm { NOP }
    /* +0xf36f9e */ __asm { NOP }
    /* +0xf36f9f */ __asm { NOP }
    /* +0xf36fa0 */ __asm { NOP }
    /* +0xf374a2 */ __asm { MOV dword ptr [RBP + 0xf0],0x8ee9c72c }
    /* +0xf374ac */ __asm { MOV ECX,dword ptr [RBP + 0xf0] }
    /* +0xf374b2 */ __asm { MOV dword ptr [RBP + 0xf0],0x4e3adf50 }
    /* +0xf374bc */ __asm { MOV ECX,dword ptr [RBP + 0xf0] }
    /* +0xf374c2 */ __asm { MOV R10,qword ptr [RBP + 0x268] }
    /* +0xf374c9 */ __asm { TEST R10,R10 }
    /* +0xf374cc */ __asm { JZ 0x7fffa56a74d5 }
    /* +0xf374ce */ __asm { MOV dword ptr [R10],0x0 }
    /* +0xf374d5 */ __asm { MOV CX,0x829d }
    /* +0xf374d9 */ __asm { SUB ECX,R13D }
    /* +0xf374dc */ __asm { IMUL ECX,ECX,-0x7b51 }
    /* +0xf374e2 */ __asm { MOVZX R9D,CX }
    /* +0xf374e6 */ __asm { MOV R10,qword ptr GS:[R9] }
    /* +0xf374ea */ __asm { MOV R10,qword ptr [R10 + 0xa88] }
    /* +0xf374f1 */ __asm { ROL R10,0x26 }
    /* +0xf374f5 */ __asm { MOV RDX,-0x13b68d6769d3f93b }
    /* +0xf374ff */ __asm { IMUL RDX,R10 }
    /* +0xf37503 */ __asm { ADD RDX,-0x4e78104 }
    /* +0xf3750a */ __asm { MOV R10,-0x1374cb624a2604b3 }
}


// ============================================================================
// Function : Unwind@7fffa56aa930  |  RVA: 0xf3a930  |  Size: 246 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa56aa930(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  int iVar2;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xa8) & 0xf;
  iVar2 = *(int *)((int64_t)(short)(0x7838U >> bVar1 | 0x7838 << 0x10 - bVar1) + 0x7fffa47c3371) +
          -1;
  *(int *)((int64_t)(short)(0x62dd - (short)*(uint64_t *)(param_2 + 0xa8)) + 0x7fffa47c3754) =
       iVar2;
  if (iVar2 == 0) {
    LOCK();
    *(uint32_t *)
     ((int64_t)(short)((short)*(uint64_t *)(param_2 + 0x168) * 0x240e) + 0x7fffa47c5b5a) = 0;
    UNLOCK();
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xa8) & 0x1f;
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(int)(-0x771d9 << bVar1 | 0xfff88e27U >> 0x20 - bVar1) + 0x7fffa47ce374);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa56aaad0  |  RVA: 0xf3aad0  |  Size: 89 bytes
// Callers  : FUN_7fffa5496290@0xd26290
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa56aaad0(uint8_t (*param_1) [16],int64_t param_2)

{
  uint8_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint8_t (*pauVar4) [16];
  
  uVar2 = param_2 * 2;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  puVar1 = *param_1;
  for (; param_1 != (uint8_t (*) [16])(puVar1 + uVar3); param_1 = param_1 + 1) {
    if ((*param_1 & _DAT_7fffa56b26c0) != (uint8_t  [16])0x0) goto LAB_7fffa56aab26;
  }
  uVar2 = (uint64_t)((uint32_t)uVar2 & 0xf);
  pauVar4 = (uint8_t (*) [16])(*(uint8_t (*) [16])(puVar1 + uVar3) + uVar2);
  while( true ) {
    if (param_1 == pauVar4) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
    uVar2 = (uint64_t)*(uint16_t *)*param_1;
    if ((*(uint16_t *)*param_1 & 0xff00) != 0) break;
    param_1 = (uint8_t (*) [16])(*param_1 + 2);
  }
LAB_7fffa56aab26:
  return uVar2 & 0xffffffffffffff00;
}


// ============================================================================
// Function : FUN_7fffa56aab2c  |  RVA: 0xf3ab2c  |  Size: 428 bytes
// Callers  : FUN_7fffa55ca84c@0xe5a84c
// Callees  : FUN_7fffa51817f8@0xa117f8, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa4ed9184@0x769184, FUN_7fffa56a65a0@0xf365a0, FUN_7fffa5657488@0xee7488
// ============================================================================
uint32_t FUN_7fffa56aab2c(short *param_1,int64_t param_2,uint64_t param_3,uint32_t param_4)

{
  int iVar1;
  uint32_t uVar2;
  int64_t lVar3;
  uint32_t *puVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  bool bVar8;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_7fffa52d8dd0(*(uint64_t *)(param_2 + 0x10));
      *(uint8_t *)(param_2 + 0x28) = 0;
    }
    *(uint64_t *)(param_2 + 0x10) = 0;
    *(uint64_t *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_7fffa5657488(param_4,0,param_1,0xffffffff,0,0,0,0);
      uVar7 = (uint64_t)iVar1;
      if (iVar1 != 0) {
        uVar6 = *(uint64_t *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_7fffa52d8dd0(*(uint64_t *)(param_2 + 0x10));
            *(uint8_t *)(param_2 + 0x28) = 0;
          }
          lVar3 = FUN_7fffa56a65a0(uVar7);
          *(int64_t *)(param_2 + 0x10) = lVar3;
          uVar6 = -(uint64_t)(lVar3 != 0) & uVar7;
          uVar5 = ~-(uint32_t)(lVar3 != 0) & 0xc;
          if (lVar3 != 0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = lVar3 != 0;
          *(uint64_t *)(param_2 + 0x18) = uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_7fffa5657488(param_4,0,param_1,0xffffffff,*(uint64_t *)(param_2 + 0x10),
                                 (int)uVar6,0,0);
        if ((int64_t)iVar1 != 0) {
          *(int64_t *)(param_2 + 0x20) = (int64_t)iVar1 + -1;
          return 0;
        }
      }
      uVar2 = (*(code *)&DAT_7ff84ea18640)();
      FUN_7fffa51817f8(uVar2);
      puVar4 = (uint32_t *)FUN_7fffa4ed9184();
      return *puVar4;
    }
    if (*(int64_t *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_7fffa52d8dd0(*(uint64_t *)(param_2 + 0x10));
        *(uint8_t *)(param_2 + 0x28) = 0;
      }
      lVar3 = FUN_7fffa56a65a0(1);
      *(int64_t *)(param_2 + 0x10) = lVar3;
      uVar5 = ~-(uint32_t)(lVar3 != 0) & 0xc;
      bVar8 = lVar3 != 0;
      if (bVar8) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar8;
      *(uint64_t *)(param_2 + 0x18) = (uint64_t)bVar8;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(uint8_t **)(param_2 + 0x10) = 0;
  }
  *(uint64_t *)(param_2 + 0x20) = 0;
  return 0;
}


// ============================================================================
// Function : FUN_7fffa56aace0  |  RVA: 0xf3ace0  |  Size: 853 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa56ab00b) */
/* WARNING: Removing unreachable block (ram,0x7fffa56ab06e) */
/* WARNING: Removing unreachable block (ram,0x7fffa56aaf6a) */
/* WARNING: Removing unreachable block (ram,0x7fffa56ab02a) */
/* WARNING: Removing unreachable block (ram,0x7fffa56ab01b) */

void FUN_7fffa56aace0(void)

{
  uint64_t uVar1;
  
  uRam00007fffa47bb920 = 0xc4e7ebce255d5cae;
  uRam00007fffa47bb930 = 0xf33c1ee3d305cc35;
  uRam00007fffa47bb940 = 0x3fffffffe0;
  uRam00007fffa47bb938 = 0x24b6e8f1e72f1f5;
  lRam00007fffa47bb928 = -0x1000000000080001 - lRam00007fffa47812c0;
  uVar1 = 0x2c5e9572965bee6f - lRam00007fffa47810f0;
  uVar1 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  uVar1 = (uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2;
  uVar1 = uVar1 >> 0xb ^ uVar1;
  uRam00007fffa47bb950 = 0x45943ac0bd615504;
  uRam00007fffa47bb958 = 0xfe807ccf7b821352;
  lRam00007fffa47bb948 = (uVar1 >> 0x16 ^ uVar1 >> 0x2c ^ uVar1) * 0xfffe0003fff8001;
  return;
}


// ============================================================================
// Function : FUN_7fffa56ab050  |  RVA: 0xf3b050  |  Size: 16 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t
FUN_7fffa56ab050(uint8_t *param_1,uint8_t param_2,int64_t param_3,uint64_t param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return param_4;
}


// ============================================================================
// Function : FUN_7fffa56ab060  |  RVA: 0xf3b060  |  Size: 1 bytes
// Callers  : FUN_7fffa56a57c0@0xf357c0, FUN_7fffa4f2ed40@0x7bed40
// Callees  : none
// ============================================================================
void FUN_7fffa56ab060(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa56ab090  |  RVA: 0xf3b090  |  Size: 1384 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56ab090(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                     uint32_t param_5)

{
  char *pcVar1;
  uint8_t auVar2 [16];
  uint8_t bVar3;
  uint32_t uVar4;
  short sVar5;
  float fVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint32_t uVar10;
  int64_t in_RAX;
  int iVar11;
  code *pcVar12;
  uint32_t uVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  char *pcVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  char *pcVar21;
  int64_t lVar22;
  int64_t lVar23;
  uint8_t *pbVar24;
  int64_t lVar25;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  
  param_2 = (param_2 << 0x31 | param_2 >> 0xf) ^ (param_2 << 0x2f | param_2 >> 0x11) ^ param_2;
  param_2 = (param_2 << 0x1e | param_2 >> 0x22) ^ (param_2 << 0x22 | param_2 >> 0x1e) ^ param_2;
  param_2 = (param_2 << 4 | param_2 >> 0x3c) ^ (param_2 << 0x3c | param_2 >> 4) ^ param_2;
  param_2 = (param_2 << 0x38 | param_2 >> 8) ^ (param_2 << 8 | param_2 >> 0x38) ^ param_2;
  uVar14 = (param_2 << 0x30 | param_2 >> 0x10) ^ param_2;
  uVar17 = param_2 << 0x10 | param_2 >> 0x30;
  puVar15 = (uint64_t *)(uVar14 + uVar17);
  if (((0x51d15744 - param_5) * 0x8000 | 0x51d15744 - param_5 >> 0x11) <=
      (param_5 + 0xbc95d2) * 0xdcdeb05) {
    puVar15 = (uint64_t *)(uVar17 ^ uVar14);
  }
  bVar3 = (uint8_t)param_5 & 0x1f;
  uVar14 = in_RAX - (int)(0x3e354549 << bVar3 | 0x3e354549U >> 0x20 - bVar3);
  uVar20 = (uVar14 << 0x2b | uVar14 >> 0x15) ^ uVar14;
  uVar17 = uVar14 << 0x37 | uVar14 >> 9;
  uVar14 = uVar17 ^ uVar20;
  if (((param_5 ^ 0x4d764936) << 0x19 | (param_5 ^ 0x4d764936) >> 7) == 0x661d8a1) {
    uVar14 = uVar20 * uVar17;
  }
  uVar14 = (uVar14 << 0x16 | uVar14 >> 0x2a) ^ (uVar14 << 0x2e | uVar14 >> 0x12) ^ uVar14;
  uVar14 = (uVar14 << 0x1c | uVar14 >> 0x24) ^ (uVar14 << 0x2c | uVar14 >> 0x14) ^ uVar14;
  uVar17 = puVar15[3];
  pbVar24 = (uint8_t *)((uVar14 << 0x38 | uVar14 >> 8) ^ (uVar14 << 0x18 | uVar14 >> 0x28) ^ uVar14);
  if (uVar17 == 0) goto LAB_7fffa56ab527;
  pcVar21 = (char *)puVar15[2];
  if (pcVar21 == pcVar21 + puVar15[1] * 0x10 + 0x10) {
    if (puVar15[5] != 0) goto LAB_7fffa56ab3c5;
LAB_7fffa56ab4ba:
    if (uVar17 == 0) goto LAB_7fffa56ab527;
  }
  else {
    pcVar18 = pcVar21 + puVar15[1] * 0x10;
    lVar25 = 0;
    while( true ) {
      auVar26[0] = -(*pcVar21 == '\0');
      auVar26[1] = -(pcVar21[1] == '\0');
      auVar26[2] = -(pcVar21[2] == '\0');
      auVar26[3] = -(pcVar21[3] == '\0');
      auVar26[4] = -(pcVar21[4] == '\0');
      auVar26[5] = -(pcVar21[5] == '\0');
      auVar26[6] = -(pcVar21[6] == '\0');
      auVar26[7] = -(pcVar21[7] == '\0');
      auVar26[8] = -(pcVar21[8] == '\0');
      auVar26[9] = -(pcVar21[9] == '\0');
      auVar26[10] = -(pcVar21[10] == '\0');
      auVar26[0xb] = -(pcVar21[0xb] == '\0');
      auVar26[0xc] = -(pcVar21[0xc] == '\0');
      auVar26[0xd] = -(pcVar21[0xd] == '\0');
      auVar26[0xe] = -(pcVar21[0xe] == '\0');
      auVar26[0xf] = -(pcVar21[0xf] == '\0');
      for (uVar13 = ((uint16_t)((uint16_t)(SUB161(auVar26 >> 7,0) & 1) |
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
                              (uint16_t)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                             (uint16_t)(auVar26[0xf] >> 7) << 0xf) ^ 0x7fff) &
                    ((uint32_t)(pcVar21 != pcVar18) << 0xe | 0x3fff); uVar13 != 0;
          uVar13 = uVar13 - 1 & uVar13) {
        uVar10 = 0;
        for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar19 = (uint64_t)uVar10;
        puVar16 = *(uint64_t **)(uVar17 + uVar19 * 8);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *puVar16;
        uVar14 = SUB168(ZEXT816(0x9e3779b97f4a7c15) * auVar2,8) ^
                 SUB168(ZEXT816(0x9e3779b97f4a7c15) * auVar2,0);
        uVar20 = uVar14 >> (*pbVar24 & 0x3f);
        lVar22 = *(int64_t *)(pbVar24 + 0x10) + uVar20 * 0x10;
        pcVar1 = (char *)(*(int64_t *)(pbVar24 + 0x10) + uVar20 * 0x10);
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
        if (uVar10 == 0) {
          lVar23 = 1;
          while( true ) {
            *(uint8_t *)(lVar22 + 0xf) = *(uint8_t *)(lVar22 + 0xf) | '\x01' << ((uint8_t)uVar14 & 7);
            uVar20 = uVar20 + lVar23 & *(uint64_t *)(pbVar24 + 8);
            lVar22 = *(int64_t *)(pbVar24 + 0x10) + uVar20 * 0x10;
            pcVar1 = (char *)(*(int64_t *)(pbVar24 + 0x10) + uVar20 * 0x10);
            auVar28[0] = -(*pcVar1 == '\0');
            auVar28[1] = -(pcVar1[1] == '\0');
            auVar28[2] = -(pcVar1[2] == '\0');
            auVar28[3] = -(pcVar1[3] == '\0');
            auVar28[4] = -(pcVar1[4] == '\0');
            auVar28[5] = -(pcVar1[5] == '\0');
            auVar28[6] = -(pcVar1[6] == '\0');
            auVar28[7] = -(pcVar1[7] == '\0');
            auVar28[8] = -(pcVar1[8] == '\0');
            auVar28[9] = -(pcVar1[9] == '\0');
            auVar28[10] = -(pcVar1[10] == '\0');
            auVar28[0xb] = -(pcVar1[0xb] == '\0');
            auVar28[0xc] = -(pcVar1[0xc] == '\0');
            auVar28[0xd] = -(pcVar1[0xd] == '\0');
            auVar28[0xe] = -(pcVar1[0xe] == '\0');
            auVar28[0xf] = -(pcVar1[0xf] == '\0');
            uVar10 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar28 >> 7,0) & 1) |
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
                                   (uint16_t)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe);
            if (uVar10 != 0) break;
            lVar23 = lVar23 + 1;
          }
          puVar16 = *(uint64_t **)(uVar17 + uVar19 * 8);
        }
        uVar4 = 0;
        for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        *(uint64_t **)(uVar20 * 0x78 + *(int64_t *)(pbVar24 + 0x18) + (uint64_t)uVar4 * 8) =
             puVar16;
        *(uint64_t *)(uVar17 + uVar19 * 8) = 0;
        *(uint8_t *)(lVar22 + (uint64_t)uVar4) =
             (&UNK_7fffa5838287)
             [(uVar14 & 0xff) * 4 +
              (int64_t)
              (short)(((uint16_t)(param_5 ^ 0x1fe) >> 1 |
                      (uint16_t)(((param_5 ^ 0x1fe) & 1) != 0) << 0xf) - 0x260)];
        uVar14 = *(uint64_t *)(uVar17 + uVar19 * 8);
        if (uVar14 != 0) {
          sVar5 = (short)(param_5 | 1);
          (*(code *)((int64_t)(short)(sVar5 * 0x7000 | (uint16_t)(sVar5 * -0x7429) >> 4) +
                    0x7fffa568c252))(param_5 | 1,uVar14,uVar14 >> 0x3d ^ uVar14);
        }
        lVar25 = lVar25 + 1;
      }
      if (pcVar21 == pcVar18) break;
      pcVar21 = pcVar21 + 0x10;
      uVar17 = uVar17 + 0x78;
    }
    uVar17 = puVar15[3];
    if (lVar25 == puVar15[5]) goto LAB_7fffa56ab4ba;
LAB_7fffa56ab3c5:
    if (uVar17 == 0) goto LAB_7fffa56ab527;
    pcVar21 = (char *)puVar15[2];
    if (pcVar21 != pcVar21 + puVar15[1] * 0x10 + 0x10) {
      pcVar18 = pcVar21 + puVar15[1] * 0x10;
      while( true ) {
        auVar29[0] = -(*pcVar21 == '\0');
        auVar29[1] = -(pcVar21[1] == '\0');
        auVar29[2] = -(pcVar21[2] == '\0');
        auVar29[3] = -(pcVar21[3] == '\0');
        auVar29[4] = -(pcVar21[4] == '\0');
        auVar29[5] = -(pcVar21[5] == '\0');
        auVar29[6] = -(pcVar21[6] == '\0');
        auVar29[7] = -(pcVar21[7] == '\0');
        auVar29[8] = -(pcVar21[8] == '\0');
        auVar29[9] = -(pcVar21[9] == '\0');
        auVar29[10] = -(pcVar21[10] == '\0');
        auVar29[0xb] = -(pcVar21[0xb] == '\0');
        auVar29[0xc] = -(pcVar21[0xc] == '\0');
        auVar29[0xd] = -(pcVar21[0xd] == '\0');
        auVar29[0xe] = -(pcVar21[0xe] == '\0');
        auVar29[0xf] = -(pcVar21[0xf] == '\0');
        for (uVar13 = ((uint16_t)((uint16_t)(SUB161(auVar29 >> 7,0) & 1) |
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
                               (uint16_t)(auVar29[0xf] >> 7) << 0xf) ^ 0x7fff) &
                      ((uint32_t)(pcVar21 != pcVar18) << 0xe | 0x3fff); uVar13 != 0;
            uVar13 = uVar13 - 1 & uVar13) {
          uVar10 = 0;
          for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar10 = uVar10 + 1;
          }
          uVar14 = *(uint64_t *)(uVar17 + (uint64_t)uVar10 * 8);
          if (uVar14 != 0) {
            pcVar12 = (code *)((int64_t)(short)(((uint16_t)param_5 | 1) * -0xf62 + 0x68c6) +
                              0x7fffa5689364);
            (*pcVar12)(pcVar12,uVar14,uVar14 >> 0x3d ^ uVar14,0);
          }
        }
        if (pcVar21 == pcVar18) break;
        pcVar21 = pcVar21 + 0x10;
        uVar17 = uVar17 + 0x78;
      }
      uVar17 = puVar15[3];
      goto LAB_7fffa56ab4ba;
    }
  }
  iVar11 = (param_5 | 1) * -0x14205330;
  (*(code *)((int64_t)(short)iVar11 + 0x7fffa568f5a0))
            (iVar11,0x7fffa568f5a0,uVar17 >> 0x3d ^ uVar17,0);
LAB_7fffa56ab527:
  uVar7 = *(uint64_t *)pbVar24;
  uVar8 = *(uint64_t *)(pbVar24 + 8);
  uVar9 = *(uint64_t *)(pbVar24 + 0x18);
  puVar15[2] = *(uint64_t *)(pbVar24 + 0x10);
  puVar15[3] = uVar9;
  *puVar15 = uVar7;
  puVar15[1] = uVar8;
  bVar3 = (uint8_t)param_5 & 0x1f;
  uVar13 = 0x4a37f482U >> bVar3 | 0x4a37f482 << 0x20 - bVar3;
  uVar14 = puVar15[1] * 0xf + 0xe;
  if (puVar15[3] == 0) {
    uVar14 = 0;
  }
  fVar6 = (float)uVar14;
  if ((uVar13 << 0x19 | uVar13 >> 7) ==
      ((-0x12700f92 - param_5) * 0x68451640 | (-0x12700f92 - param_5) * -0x225eeba7 >> 0x1a)) {
    fVar6 = (float)(int64_t)uVar14;
  }
  uVar17 = (uint64_t)(fVar6 * 0.875);
  uVar17 = (int64_t)(fVar6 * 0.875 - 9.223372e+18) & (int64_t)uVar17 >> 0x3f | uVar17;
  if (uVar14 < (param_5 + 0x1ceda849 ^ 0x17ecc448)) {
    uVar17 = uVar14;
  }
  puVar15[4] = uVar17;
  return;
}


// ============================================================================
// Function : FUN_7fffa56ab604  |  RVA: 0xf3b604  |  Size: 363 bytes
// Callers  : none
// Callees  : _guard_dispatch_icall@0xf30810, FUN_7fffa4f5c658@0x7ec658
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

uint32_t FUN_7fffa56ab604(int param_1,uint64_t param_2)

{
  uint32_t uVar1;
  int *piVar2;
  code *pcVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int *piVar6;
  int *piVar7;
  uint32_t uVar8;
  
  puVar5 = (uint64_t *)FUN_7fffa4f5c658();
  if (puVar5 != (uint64_t *)0x0) {
    piVar2 = (int *)*puVar5;
    for (piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
      if (*piVar6 == param_1) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        pcVar3 = *(code **)(piVar6 + 2);
        if (pcVar3 == (code *)0x0) {
          return 0;
        }
        if (pcVar3 == (code *)0x5) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (pcVar3 != (code *)0x1) {
          uVar4 = puVar5[1];
          puVar5[1] = param_2;
          if (piVar6[1] == 8) {
            for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            uVar1 = *(uint32_t *)(puVar5 + 2);
            if (*piVar6 == -0x3fffff73) {
              uVar8 = 0x82;
LAB_7fffa56ab742:
              *(uint32_t *)(puVar5 + 2) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto LAB_7fffa56ab742;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto LAB_7fffa56ab742;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto LAB_7fffa56ab742;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto LAB_7fffa56ab742;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto LAB_7fffa56ab742;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto LAB_7fffa56ab742;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto LAB_7fffa56ab742;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto LAB_7fffa56ab742;
              }
            }
            (*pcVar3)(8,uVar8);
            *(uint32_t *)(puVar5 + 2) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            (*pcVar3)(piVar6[1]);
          }
          puVar5[1] = uVar4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa56ab770  |  RVA: 0xf3b770  |  Size: 4494 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa56ab770(void)

{
  uint64_t uVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t bVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint32_t *puVar14;
  uint32_t *puVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint32_t *puVar20;
  uint64_t uVar21;
  uint32_t *puVar22;
  int64_t lVar23;
  uint64_t uVar24;
  uint32_t *puVar25;
  uint64_t uVar26;
  uint32_t *puVar27;
  uint64_t uVar28;
  uint64_t in_R9;
  uint64_t in_R10;
  uint32_t in_R11D;
  uint32_t *puVar29;
  uint32_t uVar30;
  bool bVar31;
  uint32_t *puVar32;
  uint64_t in_stack_00000028;
  uint32_t uStack_50;
  
  uVar21 = (in_R10 << 0x28 | in_R10 >> 0x18) ^ (in_R10 << 0x3b | in_R10 >> 5) ^ in_R10;
  uVar13 = in_R9 << 0x30 ^ in_R9 << 0x18 ^ in_R9;
  uVar13 = (in_R9 << 0x3e | uVar13 >> 2) ^ (uVar13 << 0x1d | uVar13 >> 0x23) ^
           (uVar13 << 0x20 | uVar13 >> 0x20);
  bVar10 = (uint8_t)in_R11D;
  uVar21 = (uVar21 << 0x36 | uVar21 >> 10) ^ (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar21;
  uVar21 = (uVar21 << 0x20 | uVar21 >> 0x20) ^ (uVar21 << 0x2c | uVar21 >> 0x14) ^ uVar21;
  uVar21 = uVar21 << 0x28 | uVar21 >> 0x18;
  uVar13 = (uVar13 << 0x3a | uVar13 >> 6) ^ (uVar13 << 0x3c | uVar13 >> 4) ^ uVar13;
  uVar13 = (uVar13 << 0x38 | uVar13 >> 8) ^ (uVar13 << 0x34 | uVar13 >> 0xc) ^ uVar13;
  lVar23 = 0;
  if ((uint64_t)(in_R11D ^ 0x7b6633c3) <
      (uint64_t)
      (int64_t)(int)(0x29665d1b << (bVar10 & 0x1f) | 0x29665d1bU >> 0x20 - (bVar10 & 0x1f))) {
    lVar23 = uVar21 * 0x687f1294;
  }
  puVar32 = (uint32_t *)(lVar23 + uVar21 * 0x6a87e0392 + -0xef02e9db + ~uVar21 * -0xef02e9db);
  uVar13 = (uVar13 << 0x30 | uVar13 >> 0x10) ^ (uVar13 << 0x28 | uVar13 >> 0x18) ^ uVar13;
  uVar24 = uVar13 << 0x20 | uVar13 >> 0x20;
  uVar13 = (uVar13 << 0x10 | uVar13 >> 0x30) ^ uVar13;
  uVar21 = uVar24 ^ uVar13;
  if (((in_R11D | 1) * 0x5b3a77ca ^ 0x58ad8a06) <= (in_R11D | 1) * -0x22585efc) {
    uVar21 = uVar24 | uVar13;
  }
  puVar25 = (uint32_t *)(uVar21 << 0x20 | uVar21 >> 0x20);
  uVar13 = (int64_t)puVar32 - (int64_t)puVar25;
  if ((int64_t)(uint64_t)(in_R11D - 0x7d91) <= (int64_t)uVar13) {
    uStack_50 = in_R11D | 1;
    puVar29 = puVar32;
    do {
      if ((uint64_t)((in_R11D ^ 0x67736024) << 0x1b | (in_R11D ^ 0x67736024) >> 5) ==
          0xffffffffd7362026) {
        uVar13 = (uint64_t)(0xf555555555555555 < (uint64_t)(0x5555555555555554 < uVar13));
      }
      else {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar13;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar13;
        uVar13 = SUB168(auVar7 * ZEXT816(0xaaaaaaaaaaaaaaa),8) +
                 (uint64_t)
                 CARRY8(SUB168(auVar7 * ZEXT816(0xaaaaaaaaaaaaaaa),0),
                        SUB168(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),8));
      }
      if ((int64_t)in_stack_00000028 < 1) {
        uVar21 = uVar13 - 1;
        uVar28 = uVar21 >> 1;
        puVar32 = puVar25 + uVar21 * 6;
        puVar14 = puVar25 + uVar28 * 6;
        uVar24 = uVar13 >> 1;
        do {
          uVar26 = uVar24 - 1;
          uVar18 = puVar25[uVar26 * 6];
          uVar30 = puVar25[uVar26 * 6 + 3];
          uVar3 = *(uint64_t *)(puVar25 + uVar26 * 6 + 1);
          uVar4 = *(uint64_t *)(puVar25 + uVar26 * 6 + 4);
          uVar17 = uVar26;
          if ((int64_t)uVar24 <= (int64_t)uVar28) {
            uVar16 = uVar26;
            do {
              uVar1 = uVar16 * 2 + 2;
              uVar17 = uVar16 * 2 + 1;
              if ((puVar25[uVar17 * 6 + 4] <= puVar25[uVar1 * 6 + 4]) &&
                 ((puVar25[uVar1 * 6 + 4] != puVar25[uVar17 * 6 + 4] ||
                  (puVar25[uVar17 * 6] <= puVar25[uVar1 * 6])))) {
                uVar17 = uVar1;
              }
              *(uint64_t *)(puVar25 + uVar16 * 6 + 4) = *(uint64_t *)(puVar25 + uVar17 * 6 + 4);
              uVar11 = *(uint64_t *)(puVar25 + uVar17 * 6 + 2);
              *(uint64_t *)(puVar25 + uVar16 * 6) = *(uint64_t *)(puVar25 + uVar17 * 6);
              *(uint64_t *)(puVar25 + uVar16 * 6 + 2) = uVar11;
              uVar16 = uVar17;
            } while ((int64_t)uVar17 < (int64_t)uVar28);
          }
          bVar31 = (uVar13 & 1) == 0;
          bVar5 = bVar31 != (uVar17 == uVar28);
          if ((int64_t)(int)(uStack_50 * -0x2fadd2ab + 0x30b606b3) <
              (int64_t)
              (uint64_t)
              ((0xfc0013ffU >> (bVar10 & 0x1f) | -0x3ffec01 << 0x20 - (bVar10 & 0x1f)) + 0x7ffffffb)
             ) {
            bVar5 = bVar31 && uVar17 == uVar28;
          }
          if (bVar5) {
            *(uint64_t *)(puVar14 + 4) = *(uint64_t *)(puVar32 + 4);
            uVar11 = *(uint64_t *)(puVar32 + 2);
            *(uint64_t *)puVar14 = *(uint64_t *)puVar32;
            *(uint64_t *)(puVar14 + 2) = uVar11;
            uVar17 = uVar21;
          }
          uVar16 = uVar17;
          if ((int64_t)uVar24 <= (int64_t)uVar17) {
            do {
              uVar17 = (int64_t)(uVar16 - 1) >> 1;
              puVar15 = puVar25 + uVar17 * 6;
              uVar19 = (uint32_t)uVar4;
              if ((uVar19 <= puVar25[uVar17 * 6 + 4]) &&
                 ((puVar25[uVar17 * 6 + 4] != uVar19 || (uVar18 <= *puVar15)))) {
                uVar17 = uVar16;
                break;
              }
              *(uint64_t *)(puVar25 + uVar16 * 6 + 4) = *(uint64_t *)(puVar15 + 4);
              uVar11 = *(uint64_t *)(puVar15 + 2);
              *(uint64_t *)(puVar25 + uVar16 * 6) = *(uint64_t *)puVar15;
              *(uint64_t *)(puVar25 + uVar16 * 6 + 2) = uVar11;
              uVar16 = uVar17;
            } while ((int64_t)uVar24 <= (int64_t)uVar17);
          }
          puVar25[uVar17 * 6] = uVar18;
          *(uint64_t *)(puVar25 + uVar17 * 6 + 1) = uVar3;
          puVar25[uVar17 * 6 + 3] = uVar30;
          *(uint64_t *)(puVar25 + uVar17 * 6 + 4) = uVar4;
          bVar5 = 1 < (int64_t)uVar24;
          uVar24 = uVar26;
        } while (bVar5);
        do {
          uVar18 = puVar29[-6];
          uVar30 = puVar29[-3];
          uVar3 = *(uint64_t *)(puVar29 + -5);
          uVar4 = *(uint64_t *)(puVar29 + -2);
          *(uint64_t *)(puVar29 + -2) = *(uint64_t *)(puVar25 + 4);
          uVar11 = *(uint64_t *)(puVar25 + 2);
          *(uint64_t *)(puVar29 + -6) = *(uint64_t *)puVar25;
          *(uint64_t *)(puVar29 + -4) = uVar11;
          puVar29 = puVar29 + -6;
          uVar24 = ((int64_t)puVar29 - (int64_t)puVar25 >> 3) * -0x5555555555555555;
          uVar13 = uVar24 - 1;
          uVar21 = (int64_t)uVar13 >> 1;
          if ((int64_t)uVar21 < 1) {
            uVar26 = 0;
          }
          else {
            uVar28 = 0;
            do {
              uVar17 = uVar28 * 2 + 1;
              uVar26 = uVar28 * 2 + 2;
              if ((puVar25[uVar26 * 6 + 4] < puVar25[uVar17 * 6 + 4]) ||
                 ((puVar25[uVar26 * 6 + 4] == puVar25[uVar17 * 6 + 4] &&
                  (puVar25[uVar26 * 6] < puVar25[uVar17 * 6])))) {
                uVar26 = uVar17;
              }
              *(uint64_t *)(puVar25 + uVar28 * 6 + 4) = *(uint64_t *)(puVar25 + uVar26 * 6 + 4);
              uVar11 = *(uint64_t *)(puVar25 + uVar26 * 6 + 2);
              *(uint64_t *)(puVar25 + uVar28 * 6) = *(uint64_t *)(puVar25 + uVar26 * 6);
              *(uint64_t *)(puVar25 + uVar28 * 6 + 2) = uVar11;
              uVar28 = uVar26;
            } while ((int64_t)uVar26 < (int64_t)uVar21);
          }
          if (((uVar24 & 1) == 0) && (uVar26 == uVar21)) {
            *(uint64_t *)(puVar25 + uVar21 * 6 + 4) = *(uint64_t *)(puVar25 + uVar13 * 6 + 4);
            uVar11 = *(uint64_t *)(puVar25 + uVar13 * 6 + 2);
            *(uint64_t *)(puVar25 + uVar21 * 6) = *(uint64_t *)(puVar25 + uVar13 * 6);
            *(uint64_t *)(puVar25 + uVar21 * 6 + 2) = uVar11;
            uVar26 = uVar13;
          }
          if (0 < (int64_t)uVar26) {
            do {
              uVar21 = ((uint64_t)
                        (uStack_50 * -0x515b142f + 0x68bf30b3 <
                        (0x4506db75 << (bVar10 & 0x1f) | 0x4506db75U >> 0x20 - (bVar10 & 0x1f))) - 1
                       | 1) + uVar26;
              uVar13 = uVar21 >> 1;
              puVar32 = puVar25 + uVar13 * 6;
              uVar19 = (uint32_t)uVar4;
              if ((uVar19 <= puVar25[uVar13 * 6 + 4]) &&
                 ((puVar25[uVar13 * 6 + 4] != uVar19 || (uVar18 <= *puVar32))))
              goto LAB_7fffa56ac773;
              *(uint64_t *)(puVar25 + uVar26 * 6 + 4) = *(uint64_t *)(puVar32 + 4);
              uVar11 = *(uint64_t *)(puVar32 + 2);
              *(uint64_t *)(puVar25 + uVar26 * 6) = *(uint64_t *)puVar32;
              *(uint64_t *)(puVar25 + uVar26 * 6 + 2) = uVar11;
              uVar26 = uVar13;
            } while (1 < uVar21);
            uVar26 = 0;
          }
LAB_7fffa56ac773:
          puVar25[uVar26 * 6] = uVar18;
          *(uint64_t *)(puVar25 + uVar26 * 6 + 1) = uVar3;
          puVar25[uVar26 * 6 + 3] = uVar30;
          *(uint64_t *)(puVar25 + uVar26 * 6 + 4) = uVar4;
          if ((int64_t)puVar29 - (int64_t)puVar25 <=
              (int64_t)(uint64_t)((in_R11D ^ 0x80b1) & 0xffff)) {
            return;
          }
        } while( true );
      }
      puVar14 = puVar25 + (uVar13 >> 1) * 6;
      uVar18 = puVar25[4];
      puVar32 = puVar29 + -6;
      uVar13 = (int64_t)puVar32 - (int64_t)puVar25;
      if ((int64_t)uVar13 < 0x3c1) {
        uVar30 = puVar14[4];
        if ((uVar30 < uVar18) || ((uVar30 == uVar18 && (*puVar14 < *puVar25)))) {
          uVar3 = *(uint64_t *)(puVar14 + 4);
          uVar4 = *(uint64_t *)puVar14;
          uVar11 = *(uint64_t *)(puVar14 + 2);
          *(uint64_t *)(puVar14 + 4) = *(uint64_t *)(puVar25 + 4);
          uVar12 = *(uint64_t *)(puVar25 + 2);
          *(uint64_t *)puVar14 = *(uint64_t *)puVar25;
          *(uint64_t *)(puVar14 + 2) = uVar12;
          *(uint64_t *)(puVar25 + 4) = uVar3;
          *(uint64_t *)puVar25 = uVar4;
          *(uint64_t *)(puVar25 + 2) = uVar11;
          uVar30 = puVar14[4];
        }
        if ((puVar29[-2] < uVar30) || ((puVar29[-2] == uVar30 && (*puVar32 < *puVar14)))) {
          uVar3 = *(uint64_t *)(puVar29 + -2);
          uVar4 = *(uint64_t *)puVar32;
          uVar11 = *(uint64_t *)(puVar29 + -4);
          *(uint64_t *)(puVar29 + -2) = *(uint64_t *)(puVar14 + 4);
          uVar12 = *(uint64_t *)(puVar14 + 2);
          *(uint64_t *)puVar32 = *(uint64_t *)puVar14;
          *(uint64_t *)(puVar29 + -4) = uVar12;
          *(uint64_t *)(puVar14 + 4) = uVar3;
          *(uint64_t *)puVar14 = uVar4;
          *(uint64_t *)(puVar14 + 2) = uVar11;
          if ((puVar14[4] < puVar25[4]) || ((puVar14[4] == puVar25[4] && (*puVar14 < *puVar25)))) {
            uVar3 = *(uint64_t *)(puVar14 + 4);
            uVar4 = *(uint64_t *)puVar14;
            uVar11 = *(uint64_t *)(puVar14 + 2);
            *(uint64_t *)(puVar14 + 4) = *(uint64_t *)(puVar25 + 4);
            uVar12 = *(uint64_t *)(puVar25 + 2);
            *(uint64_t *)puVar14 = *(uint64_t *)puVar25;
            *(uint64_t *)(puVar14 + 2) = uVar12;
            *(uint64_t *)(puVar25 + 4) = uVar3;
            *(uint64_t *)puVar25 = uVar4;
            *(uint64_t *)(puVar25 + 2) = uVar11;
          }
        }
      }
      else {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar13;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar13;
        uVar13 = SUB168(auVar9 * ZEXT816(0xaaaaaaaaaaaaaaa),8) + 1 +
                 (uint64_t)
                 CARRY8(SUB168(auVar9 * ZEXT816(0xaaaaaaaaaaaaaaa),0),
                        SUB168(auVar8 * ZEXT816(0xaaaaaaaaaaaaaaab),8)) >> 3;
        puVar15 = puVar25 + uVar13 * 6;
        uVar30 = puVar25[uVar13 * 6 + 4];
        if ((uVar30 < uVar18) || ((uVar30 == uVar18 && (*puVar15 < *puVar25)))) {
          uVar3 = *(uint64_t *)(puVar15 + 4);
          uVar4 = *(uint64_t *)puVar15;
          uVar11 = *(uint64_t *)(puVar15 + 2);
          *(uint64_t *)(puVar15 + 4) = *(uint64_t *)(puVar25 + 4);
          uVar12 = *(uint64_t *)(puVar25 + 2);
          *(uint64_t *)puVar15 = *(uint64_t *)puVar25;
          *(uint64_t *)(puVar15 + 2) = uVar12;
          *(uint64_t *)(puVar25 + 4) = uVar3;
          *(uint64_t *)puVar25 = uVar4;
          *(uint64_t *)(puVar25 + 2) = uVar11;
          uVar30 = puVar15[4];
        }
        puVar27 = puVar25 + uVar13 * 0xc;
        if ((puVar27[4] < uVar30) || ((puVar27[4] == uVar30 && (*puVar27 < *puVar15)))) {
          uVar3 = *(uint64_t *)(puVar27 + 4);
          uVar4 = *(uint64_t *)puVar27;
          uVar11 = *(uint64_t *)(puVar27 + 2);
          *(uint64_t *)(puVar27 + 4) = *(uint64_t *)(puVar15 + 4);
          uVar12 = *(uint64_t *)(puVar15 + 2);
          *(uint64_t *)puVar27 = *(uint64_t *)puVar15;
          *(uint64_t *)(puVar27 + 2) = uVar12;
          *(uint64_t *)(puVar15 + 4) = uVar3;
          *(uint64_t *)puVar15 = uVar4;
          *(uint64_t *)(puVar15 + 2) = uVar11;
          if ((puVar15[4] < puVar25[4]) || ((puVar15[4] == puVar25[4] && (*puVar15 < *puVar25)))) {
            uVar3 = *(uint64_t *)(puVar15 + 4);
            uVar4 = *(uint64_t *)puVar15;
            uVar11 = *(uint64_t *)(puVar15 + 2);
            *(uint64_t *)(puVar15 + 4) = *(uint64_t *)(puVar25 + 4);
            uVar12 = *(uint64_t *)(puVar25 + 2);
            *(uint64_t *)puVar15 = *(uint64_t *)puVar25;
            *(uint64_t *)(puVar15 + 2) = uVar12;
            *(uint64_t *)(puVar25 + 4) = uVar3;
            *(uint64_t *)puVar25 = uVar4;
            *(uint64_t *)(puVar25 + 2) = uVar11;
          }
        }
        uVar18 = puVar14[4];
        puVar27 = puVar14 + uVar13 * -6;
        if ((uVar18 < puVar14[uVar13 * -6 + 4]) ||
           ((uVar18 == puVar14[uVar13 * -6 + 4] && (*puVar14 < *puVar27)))) {
          uVar3 = *(uint64_t *)(puVar14 + 4);
          uVar4 = *(uint64_t *)puVar14;
          uVar11 = *(uint64_t *)(puVar14 + 2);
          *(uint64_t *)(puVar14 + 4) = *(uint64_t *)(puVar27 + 4);
          uVar12 = *(uint64_t *)(puVar27 + 2);
          *(uint64_t *)puVar14 = *(uint64_t *)puVar27;
          *(uint64_t *)(puVar14 + 2) = uVar12;
          *(uint64_t *)(puVar27 + 4) = uVar3;
          *(uint64_t *)puVar27 = uVar4;
          *(uint64_t *)(puVar27 + 2) = uVar11;
          uVar18 = puVar14[4];
        }
        puVar22 = puVar14 + uVar13 * 6;
        if ((puVar22[4] < uVar18) || ((puVar22[4] == uVar18 && (*puVar22 < *puVar14)))) {
          uVar3 = *(uint64_t *)(puVar22 + 4);
          uVar4 = *(uint64_t *)puVar22;
          uVar11 = *(uint64_t *)(puVar22 + 2);
          *(uint64_t *)(puVar22 + 4) = *(uint64_t *)(puVar14 + 4);
          uVar12 = *(uint64_t *)(puVar14 + 2);
          *(uint64_t *)puVar22 = *(uint64_t *)puVar14;
          *(uint64_t *)(puVar22 + 2) = uVar12;
          *(uint64_t *)(puVar14 + 4) = uVar3;
          *(uint64_t *)puVar14 = uVar4;
          *(uint64_t *)(puVar14 + 2) = uVar11;
          if ((puVar14[4] < puVar27[4]) || ((puVar14[4] == puVar27[4] && (*puVar14 < *puVar27)))) {
            uVar3 = *(uint64_t *)(puVar14 + 4);
            uVar4 = *(uint64_t *)puVar14;
            uVar11 = *(uint64_t *)(puVar14 + 2);
            *(uint64_t *)(puVar14 + 4) = *(uint64_t *)(puVar27 + 4);
            uVar12 = *(uint64_t *)(puVar27 + 2);
            *(uint64_t *)puVar14 = *(uint64_t *)puVar27;
            *(uint64_t *)(puVar14 + 2) = uVar12;
            *(uint64_t *)(puVar27 + 4) = uVar3;
            *(uint64_t *)puVar27 = uVar4;
            *(uint64_t *)(puVar27 + 2) = uVar11;
          }
        }
        puVar27 = puVar32 + uVar13 * -0xc;
        puVar22 = puVar32 + uVar13 * -6;
        uVar18 = puVar29[uVar13 * -6 + -2];
        if ((uVar18 < puVar29[uVar13 * -0xc + -2]) ||
           ((uVar18 == puVar29[uVar13 * -0xc + -2] && (*puVar22 < *puVar27)))) {
          uVar3 = *(uint64_t *)(puVar22 + 4);
          uVar4 = *(uint64_t *)puVar22;
          uVar11 = *(uint64_t *)(puVar22 + 2);
          *(uint64_t *)(puVar22 + 4) = *(uint64_t *)(puVar27 + 4);
          uVar12 = *(uint64_t *)(puVar27 + 2);
          *(uint64_t *)puVar22 = *(uint64_t *)puVar27;
          *(uint64_t *)(puVar22 + 2) = uVar12;
          *(uint64_t *)(puVar27 + 4) = uVar3;
          *(uint64_t *)puVar27 = uVar4;
          *(uint64_t *)(puVar27 + 2) = uVar11;
          uVar18 = puVar22[4];
        }
        if ((puVar29[-2] < uVar18) || ((puVar29[-2] == uVar18 && (*puVar32 < *puVar22)))) {
          uVar3 = *(uint64_t *)(puVar29 + -2);
          uVar4 = *(uint64_t *)puVar32;
          uVar11 = *(uint64_t *)(puVar29 + -4);
          *(uint64_t *)(puVar29 + -2) = *(uint64_t *)(puVar22 + 4);
          uVar12 = *(uint64_t *)(puVar22 + 2);
          *(uint64_t *)puVar32 = *(uint64_t *)puVar22;
          *(uint64_t *)(puVar29 + -4) = uVar12;
          *(uint64_t *)(puVar22 + 4) = uVar3;
          *(uint64_t *)puVar22 = uVar4;
          *(uint64_t *)(puVar22 + 2) = uVar11;
          if ((puVar22[4] < puVar27[4]) || ((puVar22[4] == puVar27[4] && (*puVar22 < *puVar27)))) {
            uVar3 = *(uint64_t *)(puVar22 + 4);
            uVar4 = *(uint64_t *)puVar22;
            uVar11 = *(uint64_t *)(puVar22 + 2);
            *(uint64_t *)(puVar22 + 4) = *(uint64_t *)(puVar27 + 4);
            uVar12 = *(uint64_t *)(puVar27 + 2);
            *(uint64_t *)puVar22 = *(uint64_t *)puVar27;
            *(uint64_t *)(puVar22 + 2) = uVar12;
            *(uint64_t *)(puVar27 + 4) = uVar3;
            *(uint64_t *)puVar27 = uVar4;
            *(uint64_t *)(puVar27 + 2) = uVar11;
          }
        }
        uVar18 = puVar14[4];
        if ((uVar18 < puVar15[4]) || ((uVar18 == puVar15[4] && (*puVar14 < *puVar15)))) {
          uVar3 = *(uint64_t *)(puVar14 + 4);
          uVar4 = *(uint64_t *)puVar14;
          uVar11 = *(uint64_t *)(puVar14 + 2);
          *(uint64_t *)(puVar14 + 4) = *(uint64_t *)(puVar15 + 4);
          uVar12 = *(uint64_t *)(puVar15 + 2);
          *(uint64_t *)puVar14 = *(uint64_t *)puVar15;
          *(uint64_t *)(puVar14 + 2) = uVar12;
          *(uint64_t *)(puVar15 + 4) = uVar3;
          *(uint64_t *)puVar15 = uVar4;
          *(uint64_t *)(puVar15 + 2) = uVar11;
          uVar18 = puVar14[4];
        }
        if ((puVar22[4] < uVar18) || ((puVar22[4] == uVar18 && (*puVar22 < *puVar14)))) {
          uVar3 = *(uint64_t *)(puVar22 + 4);
          uVar4 = *(uint64_t *)puVar22;
          uVar11 = *(uint64_t *)(puVar22 + 2);
          *(uint64_t *)(puVar22 + 4) = *(uint64_t *)(puVar14 + 4);
          uVar12 = *(uint64_t *)(puVar14 + 2);
          *(uint64_t *)puVar22 = *(uint64_t *)puVar14;
          *(uint64_t *)(puVar22 + 2) = uVar12;
          *(uint64_t *)(puVar14 + 4) = uVar3;
          *(uint64_t *)puVar14 = uVar4;
          *(uint64_t *)(puVar14 + 2) = uVar11;
          if ((puVar14[4] < puVar15[4]) || ((puVar14[4] == puVar15[4] && (*puVar14 < *puVar15)))) {
            uVar3 = *(uint64_t *)(puVar14 + 4);
            uVar4 = *(uint64_t *)puVar14;
            uVar11 = *(uint64_t *)(puVar14 + 2);
            *(uint64_t *)(puVar14 + 4) = *(uint64_t *)(puVar15 + 4);
            uVar12 = *(uint64_t *)(puVar15 + 2);
            *(uint64_t *)puVar14 = *(uint64_t *)puVar15;
            *(uint64_t *)(puVar14 + 2) = uVar12;
            *(uint64_t *)(puVar15 + 4) = uVar3;
            *(uint64_t *)puVar15 = uVar4;
            *(uint64_t *)(puVar15 + 2) = uVar11;
          }
        }
      }
      puVar32 = puVar14;
      do {
        puVar15 = puVar32;
        uVar18 = puVar15[-2];
        uVar30 = puVar15[4];
        if (uVar18 < uVar30) goto LAB_7fffa56ac0b4;
        if (uVar18 == uVar30) {
          if (*puVar15 != puVar15[-6]) goto LAB_7fffa56ac0b4;
        }
        else if (uVar30 < uVar18) goto LAB_7fffa56ac0b4;
        puVar32 = puVar15 + -6;
      } while (puVar25 < puVar15 + -6);
      puVar15 = puVar15 + -6;
LAB_7fffa56ac0b4:
      puVar14 = puVar14 + 6;
      if (puVar14 < puVar29) {
        puVar32 = puVar14;
        do {
          puVar14 = puVar32;
          if (((puVar14[4] < puVar15[4]) || (puVar14[4] != puVar15[4])) || (*puVar15 != *puVar14))
          goto LAB_7fffa56ac108;
          puVar32 = puVar14 + 6;
        } while (puVar14 + 6 < puVar29);
        puVar14 = puVar14 + 6;
      }
LAB_7fffa56ac108:
      puVar22 = puVar14;
      puVar27 = puVar15;
LAB_7fffa56ac124:
      if (puVar14 < puVar29) {
        uVar18 = puVar14[4];
        uVar30 = puVar27[4];
        if ((uVar18 <= uVar30) && ((uVar30 != uVar18 || (*puVar14 <= *puVar27)))) {
          if ((uVar18 < uVar30) || (*puVar14 < *puVar27)) goto LAB_7fffa56ac18f;
          if (puVar14 != puVar22) {
            uVar3 = *(uint64_t *)(puVar22 + 4);
            uVar4 = *(uint64_t *)puVar22;
            uVar11 = *(uint64_t *)(puVar22 + 2);
            *(uint64_t *)(puVar22 + 4) = *(uint64_t *)(puVar14 + 4);
            uVar12 = *(uint64_t *)(puVar14 + 2);
            *(uint64_t *)puVar22 = *(uint64_t *)puVar14;
            *(uint64_t *)(puVar22 + 2) = uVar12;
            puVar22 = puVar22 + 6;
            *(uint64_t *)(puVar14 + 4) = uVar3;
            *(uint64_t *)puVar14 = uVar4;
            *(uint64_t *)(puVar14 + 2) = uVar11;
            puVar14 = puVar14 + 6;
            goto LAB_7fffa56ac124;
          }
          puVar22 = puVar22 + 6;
        }
        puVar14 = puVar14 + 6;
        goto LAB_7fffa56ac124;
      }
LAB_7fffa56ac18f:
      puVar32 = puVar27;
      if (puVar25 < puVar15) {
        do {
          puVar20 = puVar15 + -6;
          uVar18 = puVar27[4];
          uVar30 = puVar15[-2];
          puVar32 = puVar27;
          if ((uVar18 <= uVar30) && ((uVar30 != uVar18 || (*puVar27 <= *puVar20)))) {
            if ((uVar18 < uVar30) || (*puVar27 < *puVar20)) goto joined_r0x7fffa56ac232;
            puVar32 = puVar27 + -6;
            if (puVar15 != puVar27) {
              uVar3 = *(uint64_t *)(puVar27 + -2);
              uVar4 = *(uint64_t *)puVar32;
              uVar11 = *(uint64_t *)(puVar27 + -4);
              *(uint64_t *)(puVar27 + -2) = *(uint64_t *)(puVar15 + -2);
              uVar12 = *(uint64_t *)(puVar15 + -4);
              *(uint64_t *)puVar32 = *(uint64_t *)puVar20;
              *(uint64_t *)(puVar27 + -4) = uVar12;
              *(uint64_t *)(puVar15 + -2) = uVar3;
              *(uint64_t *)puVar20 = uVar4;
              *(uint64_t *)(puVar15 + -4) = uVar11;
            }
          }
          puVar27 = puVar32;
          puVar15 = puVar20;
        } while (puVar25 < puVar20);
        puVar32 = puVar27;
      }
joined_r0x7fffa56ac232:
      if ((puVar14 != puVar29) || (puVar15 != puVar25)) {
        if (puVar15 == puVar25) {
          if (puVar22 != puVar14) {
            uVar3 = *(uint64_t *)(puVar32 + 4);
            uVar4 = *(uint64_t *)puVar32;
            uVar11 = *(uint64_t *)(puVar32 + 2);
            *(uint64_t *)(puVar32 + 4) = *(uint64_t *)(puVar22 + 4);
            uVar12 = *(uint64_t *)(puVar22 + 2);
            *(uint64_t *)puVar32 = *(uint64_t *)puVar22;
            *(uint64_t *)(puVar32 + 2) = uVar12;
            *(uint64_t *)(puVar22 + 4) = uVar3;
            *(uint64_t *)puVar22 = uVar4;
            *(uint64_t *)(puVar22 + 2) = uVar11;
          }
          uVar3 = *(uint64_t *)(puVar32 + 4);
          uVar4 = *(uint64_t *)puVar32;
          uVar11 = *(uint64_t *)(puVar32 + 2);
          *(uint64_t *)(puVar32 + 4) = *(uint64_t *)(puVar14 + 4);
          uVar12 = *(uint64_t *)(puVar14 + 2);
          *(uint64_t *)puVar32 = *(uint64_t *)puVar14;
          *(uint64_t *)(puVar32 + 2) = uVar12;
          *(uint64_t *)(puVar14 + 4) = uVar3;
          *(uint64_t *)puVar14 = uVar4;
          *(uint64_t *)(puVar14 + 2) = uVar11;
          puVar14 = puVar14 + 6;
          puVar22 = puVar22 + 6;
          puVar27 = puVar32 + 6;
        }
        else {
          puVar20 = puVar15 + -6;
          if (puVar14 == puVar29) {
            puVar27 = puVar32 + -6;
            if (puVar15 != puVar32) {
              uVar3 = *(uint64_t *)(puVar15 + -2);
              uVar4 = *(uint64_t *)puVar20;
              uVar11 = *(uint64_t *)(puVar15 + -4);
              *(uint64_t *)(puVar15 + -2) = *(uint64_t *)(puVar32 + -2);
              uVar12 = *(uint64_t *)(puVar32 + -4);
              *(uint64_t *)puVar20 = *(uint64_t *)puVar27;
              *(uint64_t *)(puVar15 + -4) = uVar12;
              *(uint64_t *)(puVar32 + -2) = uVar3;
              *(uint64_t *)puVar27 = uVar4;
              *(uint64_t *)(puVar32 + -4) = uVar11;
            }
            uVar3 = *(uint64_t *)(puVar32 + -2);
            uVar4 = *(uint64_t *)puVar27;
            uVar11 = *(uint64_t *)(puVar32 + -4);
            *(uint64_t *)(puVar32 + -2) = *(uint64_t *)(puVar22 + -2);
            uVar12 = *(uint64_t *)(puVar22 + -4);
            *(uint64_t *)puVar27 = *(uint64_t *)(puVar22 + -6);
            *(uint64_t *)(puVar32 + -4) = uVar12;
            *(uint64_t *)(puVar22 + -2) = uVar3;
            *(uint64_t *)(puVar22 + -6) = uVar4;
            *(uint64_t *)(puVar22 + -4) = uVar11;
            puVar22 = puVar22 + -6;
            puVar15 = puVar20;
          }
          else {
            uVar3 = *(uint64_t *)(puVar14 + 4);
            uVar4 = *(uint64_t *)puVar14;
            uVar11 = *(uint64_t *)(puVar14 + 2);
            *(uint64_t *)(puVar14 + 4) = *(uint64_t *)(puVar15 + -2);
            uVar12 = *(uint64_t *)(puVar15 + -4);
            *(uint64_t *)puVar14 = *(uint64_t *)puVar20;
            *(uint64_t *)(puVar14 + 2) = uVar12;
            puVar14 = puVar14 + 6;
            *(uint64_t *)(puVar15 + -2) = uVar3;
            *(uint64_t *)puVar20 = uVar4;
            *(uint64_t *)(puVar15 + -4) = uVar11;
            puVar15 = puVar20;
            puVar27 = puVar32;
          }
        }
        goto LAB_7fffa56ac124;
      }
      in_stack_00000028 = (in_stack_00000028 >> 2) + (in_stack_00000028 >> 1);
      if ((int64_t)puVar32 - (int64_t)puVar25 < (int64_t)puVar29 - (int64_t)puVar22) {
        uVar13 = ((int64_t)puVar25 << 0x3d | (uint64_t)puVar25 >> 3) ^
                 ((int64_t)puVar25 << 0x1e | (uint64_t)puVar25 >> 0x22) ^ (uint64_t)puVar25;
        uVar13 = uVar13 << 0x20 | uVar13 >> 0x20;
        uVar18 = (in_R11D | 1) *
                 (int)CONCAT62((int6)((uint64_t)((int64_t)puVar29 - (int64_t)puVar22) >> 0x10),
                               0x66d0) ^ 0x7330;
        (*(code *)(&UNK_7fffa56b0b10 + (short)uVar18))
                  (uVar13,uVar18,
                   (int64_t)puVar32 * -0x7ffffffff << 0x3b |
                   (uint64_t)((int64_t)puVar32 * -0x7ffffffff) >> 5,uVar13 << 0x18 ^ uVar13,
                   in_stack_00000028);
        puVar25 = puVar22;
        puVar32 = puVar29;
      }
      else {
        uVar13 = ((int64_t)puVar22 << 0x1e | (uint64_t)puVar22 >> 0x22) ^
                 ((int64_t)puVar22 << 0x3d | (uint64_t)puVar22 >> 3) ^ (uint64_t)puVar22;
        uVar13 = uVar13 << 0x20 | uVar13 >> 0x20;
        FUN_7fffa56ab770(&UNK_7fffa56b554d,
                         (int64_t)puVar29 * -0x7ffffffff << 0x3b |
                         (uint64_t)((int64_t)puVar29 * -0x7ffffffff) >> 5,FUN_7fffa56ab770,
                         uVar13 << 0x18 ^ uVar13,in_stack_00000028);
      }
      uVar13 = (int64_t)puVar32 - (int64_t)puVar25;
      puVar29 = puVar32;
    } while ((int64_t)(uint64_t)((in_R11D | 1) * -0x66d4 - 0x1af4 & 0xffff) <= (int64_t)uVar13);
  }
  if ((puVar25 != puVar32) && (puVar29 = puVar25 + 6, puVar29 != puVar32)) {
    puVar14 = puVar29;
    puVar15 = puVar25;
    do {
      puVar27 = puVar14;
      uVar18 = puVar15[6];
      uVar30 = puVar15[0xb];
      uVar19 = puVar15[10];
      uVar2 = puVar15[9];
      uVar3 = *(uint64_t *)(puVar15 + 7);
      if ((uVar19 < puVar25[4]) ||
         ((puVar14 = puVar27, uVar19 == puVar25[4] && (uVar18 < *puVar25)))) {
        FUN_7fffa56a5f20(puVar29,puVar25,(int64_t)puVar27 - (int64_t)puVar25);
        *puVar25 = uVar18;
        puVar25[5] = uVar30;
        puVar25[4] = uVar19;
        puVar25[3] = uVar2;
        *(uint64_t *)(puVar25 + 1) = uVar3;
      }
      else {
        while( true ) {
          puVar15 = puVar14 + -6;
          if ((puVar14[-2] <= uVar19) && ((uVar19 != puVar14[-2] || (*puVar15 <= uVar18)))) break;
          *(uint64_t *)(puVar14 + 4) = *(uint64_t *)(puVar14 + -2);
          *(uint64_t *)puVar14 = *(uint64_t *)puVar15;
          *(uint64_t *)(puVar14 + 2) = *(uint64_t *)(puVar14 + -4);
          puVar14 = puVar15;
        }
        *puVar14 = uVar18;
        puVar14[5] = uVar30;
        *(uint64_t *)(puVar14 + 1) = uVar3;
        puVar14[3] = uVar2;
        puVar14[4] = uVar19;
      }
      puVar14 = puVar27 + 6;
      puVar15 = puVar27;
    } while (puVar27 + 6 != puVar32);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa56ac990  |  RVA: 0xf3c990  |  Size: 1 bytes
// Callers  : FUN_7fffa5267248@0xaf7248
// Callees  : none
// ============================================================================
void FUN_7fffa56ac990(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa56ac9b0  |  RVA: 0xf3c9b0  |  Size: 3872 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa56ac9b0(uint64_t *param_1,char *param_2,uint64_t param_3,uint64_t *param_4)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  uint32_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  bool bVar7;
  uint32_t uVar8;
  int iVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint8_t bVar14;
  int iVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint8_t *pbVar18;
  uint64_t *puVar19;
  int64_t lVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  int64_t lVar23;
  uint64_t uVar24;
  int64_t lVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  uint64_t in_R10;
  uint64_t uVar28;
  uint64_t *puVar29;
  uint32_t uVar30;
  uint32_t uVar31;
  uint32_t uVar32;
  uint64_t *puVar33;
  uint32_t uVar34;
  uint32_t uVar35;
  uint64_t uVar36;
  int64_t lVar37;
  uint16_t uVar38;
  uint64_t *puVar39;
  int64_t lVar40;
  uint8_t auVar41 [16];
  char cVar42;
  uint8_t uVar46;
  uint8_t bVar48;
  uint8_t uVar49;
  uint8_t bVar51;
  uint8_t uVar52;
  uint8_t bVar54;
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  char cVar47;
  char cVar50;
  char cVar53;
  uint8_t auVar45 [16];
  uint8_t auVar55 [16];
  uint8_t uStack_1dc;
  uint32_t auStack_188 [66];
  int64_t lStack_80;
  uint64_t *puStack_78;
  char *pcStack_70;
  int64_t lStack_68;
  uint64_t uStack_60;
  int64_t lStack_58;
  uint64_t *puStack_50;
  int64_t lStack_48;
  
  puStack_78 = param_1;
  uVar16 = param_3 >> 0x27 ^ param_3;
  uVar36 = (in_R10 << 0x25 | in_R10 >> 0x1b) ^ (in_R10 << 0x26 | in_R10 >> 0x1a) ^ in_R10;
  uVar36 = (uVar36 << 10 | uVar36 >> 0x36) ^ (uVar36 << 0xc | uVar36 >> 0x34) ^ uVar36;
  pcStack_70 = param_2;
  uVar35 = (uint32_t)param_2;
  uVar16 = (uVar16 << 0xf | param_3 >> 0x31) ^
           (uVar16 >> 1 | (uint64_t)((uVar16 & 1) != 0) << 0x3f) ^ uVar16;
  uVar16 = (uVar16 << 0x3e | uVar16 >> 2) ^ (uVar16 << 0x1e | uVar16 >> 0x22) ^ uVar16;
  uVar36 = uVar36 ^ (uVar36 << 0x14 | uVar36 >> 0x2c) ^ (uVar36 << 0x18 | uVar36 >> 0x28);
  uVar17 = (uVar36 << 0x28 | uVar36 >> 0x18) ^ uVar36;
  uVar28 = uVar36 << 0x30 | uVar36 >> 0x10;
  uVar36 = uVar28 ^ uVar17;
  if (((uVar35 | 1) * -0x3cec8e30 | (uVar35 | 1) * 0x5c31371d >> 0x1c) == 0xb7b166b8) {
    uVar36 = uVar17 - uVar28;
  }
  iVar9 = *(int *)(uVar16 + 0x1c);
  puVar5 = *(uint64_t **)(uVar16 + 0xf8);
  puStack_50 = param_4;
  uVar34 = (int)*param_4 * -0x61c8864f;
  uVar30 = uVar34 >> (0x18U - *(char *)((int64_t)puVar5 + 0x34) & 0x1f);
  uVar17 = (uint64_t)(uVar30 >> 3 & 0xffffffe0);
  lVar23 = *(int64_t *)(uVar16 + 8);
  uStack_60 = (int64_t)param_4 - lVar23;
  uVar21 = (uint32_t)uStack_60;
  uVar26 = 5;
  if (*(uint32_t *)(uVar16 + 0x10c) < 5) {
    uVar26 = *(uint32_t *)(uVar16 + 0x10c);
  }
  uVar36 = (uVar36 << 0x10 | uVar36 >> 0x30) ^ (uVar36 << 0x20 | uVar36 >> 0x20) ^ uVar36;
  uVar36 = (uVar36 << 2 | uVar36 >> 0x3e) ^ (uVar36 << 0x1d | uVar36 >> 0x23) ^
           (uVar36 << 0x20 | uVar36 >> 0x20);
  uVar36 = (uVar36 << 0x3a | uVar36 >> 6) ^ (uVar36 << 4 | uVar36 >> 0x3c) ^ uVar36;
  uVar36 = (uVar36 << 0x34 | uVar36 >> 0xc) ^ (uVar36 << 8 | uVar36 >> 0x38) ^ uVar36;
  uVar26 = 1 << ((uint8_t)uVar26 & 0x1f);
  uVar36 = (uVar36 << 0x10 | uVar36 >> 0x30) ^ (uVar36 << 0x28 | uVar36 >> 0x18) ^ uVar36;
  uVar36 = (uVar36 << 0x20 | uVar36 >> 0x20) ^ (uVar36 << 0x10 | uVar36 >> 0x30) ^ uVar36;
  uVar27 = 1 << (*(uint8_t *)(uVar16 + 0x100) & 0x1f);
  puVar19 = (uint64_t *)(uVar36 << 0x20 | uVar36 >> 0x20);
  iVar15 = uVar21 - uVar27;
  if (uVar21 - iVar9 <= uVar27) {
    iVar15 = iVar9;
  }
  if (*(int *)(uVar16 + 0x28) != 0) {
    iVar15 = iVar9;
  }
  lStack_48 = CONCAT44(lStack_48._4_4_,iVar15);
  lVar37 = *(int64_t *)(uVar16 + 0x38);
  lStack_68 = *(int64_t *)(uVar16 + 0x70);
  uVar27 = *(uint32_t *)(uVar16 + 0x18);
  lVar20 = puVar5[7];
  lStack_58 = puVar5[0xe];
  lStack_80 = lVar23;
  cVar42 = (char)*(uint32_t *)(uVar16 + 0x34);
  uVar22 = (uint32_t)*(uint64_t *)(uVar16 + 0x60);
  if (*(int *)(uVar16 + 300) == 0) {
    uVar34 = *(uint32_t *)(uVar16 + 0x2c);
    uVar36 = (uint64_t)uVar34;
    lVar25 = lStack_68;
    lVar12 = lVar37;
    if (0x180 < uVar21 - uVar34) {
      if (uVar34 < 0xffffffa0) {
        uVar28 = uVar36 + 0x60;
        do {
          uVar24 = (uint64_t)((uint32_t)uVar36 & 7);
          uVar34 = *(uint32_t *)(uVar16 + 0x40 + uVar24 * 4);
          *(uint32_t *)(uVar16 + 0x40 + uVar24 * 4) =
               (*(int *)(lVar23 + 8 + uVar36) * -0x61c8864f ^ *(uint32_t *)(uVar16 + 0x60)) >>
               (0x18U - cVar42 & 0x1f);
          uVar24 = (uint64_t)(uVar34 >> 3 & 0xffffffe0);
          lVar12 = 0x1f;
          if ((*(uint8_t *)(lVar37 + uVar24) & 0x1f) != 1) {
            lVar12 = 0;
          }
          lVar12 = (uint64_t)(*(uint8_t *)(lVar37 + uVar24) - 1 & 0x1f) + lVar12;
          *(char *)(lVar37 + uVar24) = (char)lVar12;
          *(char *)(lVar37 + uVar24 + lVar12) = (char)uVar34;
          *(uint32_t *)(lStack_68 + uVar24 * 4 + lVar12 * 4) = (uint32_t)uVar36;
          uVar36 = uVar36 + 1;
        } while (uVar28 != uVar36);
        lVar12 = *(int64_t *)(uVar16 + 0x38);
        lVar25 = *(int64_t *)(uVar16 + 0x70);
      }
      uVar34 = uVar21 - 0x20;
      uVar36 = (uint64_t)uVar34;
      piVar1 = (int *)(lVar23 + uVar36);
      uVar31 = ((int)(int *)((int64_t)param_4 + 1U) - (int)piVar1) + 1;
      uVar32 = 8;
      if (uVar31 < 8) {
        uVar32 = uVar31;
      }
      uVar31 = 0;
      if (piVar1 <= (int *)((int64_t)param_4 + 1U)) {
        uVar31 = uVar32;
      }
      if (uVar34 < uVar31 + uVar34) {
        uVar32 = *(uint32_t *)(uVar16 + 0x60);
        bVar14 = 0x18 - (char)*(uint32_t *)(uVar16 + 0x34);
        if ((uVar31 & 1) != 0) {
          uVar36 = uVar36 + 1;
          if ((0x2e1be6b6 - uVar35) * -0x3fffff71 == 0x8789d84) {
            uVar36 = (uint64_t)(uVar34 & 1);
          }
          *(uint32_t *)(uVar16 + 0x40 + (uint64_t)(uVar34 & 7) * 4) =
               (*piVar1 * -0x61c8864f ^ uVar32) >> (bVar14 & 0x1f);
        }
        if (uVar31 != (uVar35 + 0x3217 & 0xffff)) {
          while( true ) {
            uVar8 = (uint32_t)uVar36;
            *(uint32_t *)(uVar16 + 0x40 + (uint64_t)(uVar8 & 7) * 4) =
                 (*(int *)(lVar23 + uVar36) * -0x61c8864f ^ uVar32) >> (bVar14 & 0x1f);
            *(uint32_t *)(uVar16 + 0x40 + (uint64_t)(uVar8 + 1 & 7) * 4) =
                 (*(int *)(lVar23 + 1 + uVar36) * -0x61c8864f ^ uVar32) >> (bVar14 & 0x1f);
            if ((uVar31 + uVar34) - 2 == uVar8) break;
            uVar36 = uVar36 + 2;
          }
        }
      }
    }
    uVar32 = (uVar35 ^ 0x93c52cf2) + 0xb63e4f96;
    if ((int64_t)(int)(uVar32 * 0x800 | uVar32 >> 0x15) < 0xe02150a6 != uVar21 <= uVar34) {
      lVar6 = *(int64_t *)(uVar16 + 8);
      uVar4 = *(uint32_t *)(uVar16 + 0x34);
      uVar36 = (uint64_t)uVar34;
      while( true ) {
        bVar14 = (uint8_t)param_2 & 0x1f;
        uVar28 = (uint64_t)((uint32_t)uVar36 & 7);
        uVar34 = *(uint32_t *)(uVar16 + 0x40 + uVar28 * 4);
        *(uint32_t *)(uVar16 + 0x40 + uVar28 * 4) =
             (*(int *)(lVar6 + 8 + uVar36) * -0x61c8864f ^ *(uint32_t *)(uVar16 + 0x60)) >>
             (0x18U - (char)uVar4 & 0x1f);
        uVar28 = (uint64_t)(uVar34 >> 3 & 0xffffffe0);
        lVar40 = 0x1f;
        if ((*(uint8_t *)(lVar12 + uVar28) & 0x1f) != 1) {
          lVar40 = 0;
        }
        bVar7 = uVar36 + 1 < (uStack_60 & 0xffffffff);
        if ((0x7e657832U >> bVar14 | 0x7e657832 << 0x20 - bVar14) <
            ((uVar35 ^ 0x16d830fd) << 0x15 | (uVar35 ^ 0x16d830fd) >> 0xb) + 0x815d184d) {
          bVar7 = (uStack_60 & 0xffffffff) - 1 == uVar36;
        }
        lVar40 = lVar40 + (uint64_t)((uint8_t)(*(uint8_t *)(lVar12 + uVar28) - 1) & 0x1f);
        *(char *)(lVar12 + uVar28) = (char)lVar40;
        *(char *)(lVar12 + uVar28 + lVar40) = (char)uVar34;
        *(uint32_t *)(lVar25 + uVar28 * 4 + lVar40 * 4) = (uint32_t)uVar36;
        if (bVar7) break;
        uVar36 = uVar36 + 1;
      }
    }
    *(uint32_t *)(uVar16 + 0x2c) = uVar21;
    uVar35 = *(uint32_t *)(uVar16 + 0x40 + (uint64_t)(uVar21 & 7) * 4);
    *(uint32_t *)(uVar16 + 0x40 + (uint64_t)(uVar21 & 7) * 4) =
         (*(int *)(lVar23 + 8 + (uStack_60 & 0xffffffff)) * -0x61c8864f ^ uVar22) >>
         (0x18U - cVar42 & 0x1f);
  }
  else {
    *(uint32_t *)(uVar16 + 0x2c) = uVar21;
    uVar35 = (uVar34 ^ uVar22) >> (0x18U - cVar42 & 0x1f);
  }
  uVar52 = (uint8_t)(uVar35 >> 0x18);
  uVar49 = (uint8_t)(uVar35 >> 0x10);
  uVar46 = (uint8_t)(uVar35 >> 8);
  auVar43._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar52,uVar52),uVar49),CONCAT14(uVar49,uVar35)) >> 0x20);
  auVar43[3] = uVar46;
  auVar43[2] = uVar46;
  auVar43[0] = (uint8_t)uVar35;
  auVar43[1] = auVar43[0];
  auVar43._8_8_ = 0;
  auVar44 = pshuflw(auVar43,auVar43,0);
  uVar36 = (uint64_t)(uVar35 >> 3 & 0xffffffe0);
  *(int *)(uVar16 + 0x68) = *(int *)(uVar16 + 0x68) + uVar35;
  lVar12 = lStack_68 + uVar36 * 4;
  bVar14 = *(uint8_t *)(lVar37 + uVar36);
  pcVar2 = (char *)(lVar37 + uVar36);
  pcVar3 = (char *)(lVar37 + 0x10 + uVar36);
  cVar42 = auVar44[0];
  auVar45[0] = -(*pcVar2 == cVar42);
  cVar47 = auVar44[1];
  auVar45[1] = -(pcVar2[1] == cVar47);
  cVar50 = auVar44[2];
  auVar45[2] = -(pcVar2[2] == cVar50);
  cVar53 = auVar44[3];
  auVar45[3] = -(pcVar2[3] == cVar53);
  auVar45[4] = -(pcVar2[4] == cVar42);
  auVar45[5] = -(pcVar2[5] == cVar47);
  auVar45[6] = -(pcVar2[6] == cVar50);
  auVar45[7] = -(pcVar2[7] == cVar53);
  auVar45[8] = -(pcVar2[8] == cVar42);
  auVar45[9] = -(pcVar2[9] == cVar47);
  auVar45[10] = -(pcVar2[10] == cVar50);
  auVar45[0xb] = -(pcVar2[0xb] == cVar53);
  auVar45[0xc] = -(pcVar2[0xc] == cVar42);
  auVar45[0xd] = -(pcVar2[0xd] == cVar47);
  auVar45[0xe] = -(pcVar2[0xe] == cVar50);
  auVar45[0xf] = -(pcVar2[0xf] == cVar53);
  auVar44[0] = -(*pcVar3 == cVar42);
  auVar44[1] = -(pcVar3[1] == cVar47);
  auVar44[2] = -(pcVar3[2] == cVar50);
  auVar44[3] = -(pcVar3[3] == cVar53);
  auVar44[4] = -(pcVar3[4] == cVar42);
  auVar44[5] = -(pcVar3[5] == cVar47);
  auVar44[6] = -(pcVar3[6] == cVar50);
  auVar44[7] = -(pcVar3[7] == cVar53);
  auVar44[8] = -(pcVar3[8] == cVar42);
  auVar44[9] = -(pcVar3[9] == cVar47);
  auVar44[10] = -(pcVar3[10] == cVar50);
  auVar44[0xb] = -(pcVar3[0xb] == cVar53);
  auVar44[0xc] = -(pcVar3[0xc] == cVar42);
  auVar44[0xd] = -(pcVar3[0xd] == cVar47);
  auVar44[0xe] = -(pcVar3[0xe] == cVar50);
  auVar44[0xf] = -(pcVar3[0xf] == cVar53);
  uVar35 = CONCAT22((uint16_t)(SUB161(auVar44 >> 7,0) & 1) |
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
                    (uint16_t)(auVar45[0xf] >> 7) << 0xf);
  if (uVar35 != 0) {
    uVar28 = (uint64_t)(uVar35 >> (bVar14 & 0x1f) | uVar35 << 0x20 - (bVar14 & 0x1f));
    lVar25 = 0;
    do {
      iVar9 = 0;
      for (uVar24 = uVar28; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
        iVar9 = iVar9 + 1;
      }
      uVar35 = iVar9 + (uint32_t)bVar14 & 0x1f;
      if (uVar35 != 0) {
        uVar35 = *(uint32_t *)(lVar12 + (uint64_t)uVar35 * 4);
        if (uVar35 < (uint32_t)lStack_48) goto LAB_7fffa56ad1e1;
        uVar26 = uVar26 - 1;
        auStack_188[lVar25] = uVar35;
        lVar25 = lVar25 + 1;
        param_2 = pcStack_70;
      }
      uVar28 = uVar28 & uVar28 - 1;
      if ((uVar28 == 0) ||
         (uVar38 = (uint16_t)param_2 ^ 0xcdea, uVar26 == (uint16_t)(uVar38 << 0xd | uVar38 >> 3)))
      goto LAB_7fffa56ad1e1;
    } while( true );
  }
  lVar25 = 0;
LAB_7fffa56ad1e1:
  pbVar18 = (uint8_t *)(lVar20 + uVar17);
  iVar9 = 0;
  if ((bVar14 & 0x1f) == 1) {
    iVar9 = 0x1f;
  }
  uVar35 = iVar9 + (bVar14 - 1 & 0x1f);
  *(uint8_t *)(lVar37 + uVar36) = (char)uVar35;
  ((uint8_t *)(lVar37 + uVar36))[uVar35] = auVar43[0];
  iVar9 = *(int *)(uVar16 + 0x2c);
  *(int *)(uVar16 + 0x2c) = iVar9 + 1;
  *(int *)(lVar12 + (uint64_t)uVar35 * 4) = iVar9;
  if (lVar25 == 0) {
    uVar36 = 3;
  }
  else {
    uVar36 = 3;
    lVar37 = 0;
    do {
      puVar10 = (uint64_t *)(lVar23 + (uint64_t)auStack_188[lVar37]);
      if (*(int *)((uVar36 - 3) + (int64_t)puVar10) ==
          *(int *)((int64_t)puStack_50 + (uVar36 - 3))) {
        puVar33 = puStack_50;
        if (puStack_50 < (uint64_t *)((int64_t)puStack_78 - 7U)) {
          lVar23 = lStack_80;
          if (*puVar10 == *puStack_50) {
            lVar20 = 8;
LAB_7fffa56ad300:
            puVar33 = (uint64_t *)((int64_t)puStack_50 + lVar20);
            if (puVar33 < (uint64_t *)((int64_t)puStack_78 - 7U)) {
              if (*(uint64_t *)((int64_t)puVar10 + lVar20) == *puVar33) goto code_r0x7fffa56ad315;
              uVar35 = 0;
              for (uVar16 = *(uint64_t *)((int64_t)puVar10 + lVar20) ^ *puVar33; (uVar16 & 1) == 0
                  ; uVar16 = uVar16 >> 1 | 0x8000000000000000) {
                uVar35 = uVar35 + 1;
              }
              uVar16 = (uint64_t)(uVar35 >> 3) + lVar20;
              goto joined_r0x7fffa56ad3a4;
            }
            puVar10 = (uint64_t *)((int64_t)puVar10 + lVar20);
            goto joined_r0x7fffa56ad337;
          }
          uVar35 = 0;
          for (uVar16 = *puStack_50 ^ *puVar10; (uVar16 & 1) == 0;
              uVar16 = uVar16 >> 1 | 0x8000000000000000) {
            uVar35 = uVar35 + 1;
          }
          uVar16 = (uint64_t)(uVar35 >> 3);
        }
        else {
joined_r0x7fffa56ad337:
          if ((puVar33 < (uint64_t *)((int64_t)puStack_78 - 3U)) &&
             ((int)*puVar10 == (int)*puVar33)) {
            puVar10 = (uint64_t *)((int64_t)puVar10 + 4);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
          }
          if ((puVar33 < (uint64_t *)((int64_t)puStack_78 - 1U)) &&
             ((short)*puVar10 == (short)*puVar33)) {
            puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
            puVar10 = (uint64_t *)((int64_t)puVar10 + 2);
          }
          if (puVar33 < puStack_78) {
            puVar33 = (uint64_t *)
                      ((int64_t)puVar33 + (uint64_t)((char)*puVar10 == (char)*puVar33));
          }
          uVar16 = (int64_t)puVar33 - (int64_t)puStack_50;
        }
joined_r0x7fffa56ad3a4:
        if (uVar36 < uVar16) {
          *puVar19 = (uint64_t)(((int)uStack_60 + 3) - auStack_188[lVar37]);
          uVar36 = uVar16;
          if ((uint64_t *)((int64_t)puStack_50 + uVar16) == puStack_78) break;
        }
      }
      lVar37 = lVar37 + 1;
    } while (lVar37 != lVar25);
  }
  uStack_1dc = (uint8_t)uVar30;
  auVar45 = pshuflw(ZEXT216(CONCAT11(uStack_1dc,uStack_1dc)),
                    ZEXT216(CONCAT11(uStack_1dc,uStack_1dc)),0);
  bVar14 = auVar45[0];
  auVar41[0] = -(*pbVar18 == bVar14);
  bVar48 = auVar45[1];
  auVar41[1] = -(pbVar18[1] == bVar48);
  bVar51 = auVar45[2];
  auVar41[2] = -(pbVar18[2] == bVar51);
  bVar54 = auVar45[3];
  auVar41[3] = -(pbVar18[3] == bVar54);
  auVar41[4] = -(pbVar18[4] == bVar14);
  auVar41[5] = -(pbVar18[5] == bVar48);
  auVar41[6] = -(pbVar18[6] == bVar51);
  auVar41[7] = -(pbVar18[7] == bVar54);
  auVar41[8] = -(pbVar18[8] == bVar14);
  auVar41[9] = -(pbVar18[9] == bVar48);
  auVar41[10] = -(pbVar18[10] == bVar51);
  auVar41[0xb] = -(pbVar18[0xb] == bVar54);
  auVar41[0xc] = -(pbVar18[0xc] == bVar14);
  auVar41[0xd] = -(pbVar18[0xd] == bVar48);
  auVar41[0xe] = -(pbVar18[0xe] == bVar51);
  auVar41[0xf] = -(pbVar18[0xf] == bVar54);
  auVar55[0] = -(pbVar18[0x10] == bVar14);
  auVar55[1] = -(pbVar18[0x11] == bVar48);
  auVar55[2] = -(pbVar18[0x12] == bVar51);
  auVar55[3] = -(pbVar18[0x13] == bVar54);
  auVar55[4] = -(pbVar18[0x14] == bVar14);
  auVar55[5] = -(pbVar18[0x15] == bVar48);
  auVar55[6] = -(pbVar18[0x16] == bVar51);
  auVar55[7] = -(pbVar18[0x17] == bVar54);
  auVar55[8] = -(pbVar18[0x18] == bVar14);
  auVar55[9] = -(pbVar18[0x19] == bVar48);
  auVar55[10] = -(pbVar18[0x1a] == bVar51);
  auVar55[0xb] = -(pbVar18[0x1b] == bVar54);
  auVar55[0xc] = -(pbVar18[0x1c] == bVar14);
  auVar55[0xd] = -(pbVar18[0x1d] == bVar48);
  auVar55[0xe] = -(pbVar18[0x1e] == bVar51);
  auVar55[0xf] = -(pbVar18[0x1f] == bVar54);
  uVar35 = CONCAT22((uint16_t)(SUB161(auVar55 >> 7,0) & 1) |
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
  if ((uVar35 != 0) && (uVar26 != 0)) {
    puVar10 = (uint64_t *)(lVar23 + (uint64_t)uVar27);
    bVar14 = *pbVar18;
    uVar21 = *(uint32_t *)(puVar5 + 3);
    pcVar2 = (char *)*puVar5;
    lVar37 = puVar5[1];
    pcStack_70 = pcVar2;
    bVar48 = bVar14 & 0x1f;
    uVar16 = (uint64_t)(uVar35 >> bVar48 | uVar35 << 0x20 - bVar48);
    lVar20 = 0;
    do {
      iVar9 = 0;
      for (uVar28 = uVar16; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x8000000000000000) {
        iVar9 = iVar9 + 1;
      }
      uVar35 = iVar9 + (uint32_t)bVar14 & 0x1f;
      if (uVar35 != 0) {
        uVar35 = *(uint32_t *)(lStack_58 + uVar17 * 4 + (uint64_t)uVar35 * 4);
        if (uVar35 < uVar21) break;
        uVar26 = uVar26 - 1;
        auStack_188[lVar20] = uVar35;
        lVar20 = lVar20 + 1;
      }
      uVar16 = uVar16 & uVar16 - 1;
    } while (uVar16 != 0 && uVar26 != 0);
    if (lVar20 != 0) {
      puVar33 = (uint64_t *)((int64_t)puStack_50 + 4);
      iVar9 = (int)*puStack_50;
      lStack_48 = (uint64_t)uVar27 + lVar23 + 8;
      lVar23 = 0;
      uVar16 = uVar36;
      do {
        uVar36 = (uint64_t)auStack_188[lVar23];
        if (*(int *)(lVar37 + uVar36) == iVar9) {
          puVar29 = (uint64_t *)(lVar37 + uVar36 + 4);
          puVar11 = (uint64_t *)(((int64_t)pcStack_70 - (int64_t)puVar29) + (int64_t)puVar33);
          if (puStack_78 <= puVar11) {
            puVar11 = puStack_78;
          }
          puVar13 = puVar33;
          puVar39 = puVar29;
          if (puVar33 < (uint64_t *)((int64_t)puVar11 - 7U)) {
            if (*puVar29 == *puVar33) {
              lStack_80 = CONCAT44(lStack_80._4_4_,iVar9);
              lVar12 = lVar37 + 0xc + uVar36;
              lVar25 = 0;
              do {
                puVar13 = (uint64_t *)((int64_t)puStack_50 + lVar25 + 0xc);
                if ((uint64_t *)((int64_t)puVar11 - 7U) <= puVar13) {
                  puVar39 = (uint64_t *)(lVar12 + lVar25);
                  goto LAB_7fffa56ad5dc;
                }
                uVar36 = *(uint64_t *)(lVar12 + lVar25);
                lVar25 = lVar25 + 8;
              } while (uVar36 == *puVar13);
              uVar35 = 0;
              for (uVar36 = *puVar13 ^ uVar36; (uVar36 & 1) == 0;
                  uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                uVar35 = uVar35 + 1;
              }
              uVar36 = (uint64_t)(uVar35 >> 3) + lVar25;
            }
            else {
              uVar35 = 0;
              for (uVar36 = *puVar33 ^ *puVar29; (uVar36 & 1) == 0;
                  uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                uVar35 = uVar35 + 1;
              }
              uVar36 = (uint64_t)(uVar35 >> 3);
            }
          }
          else {
LAB_7fffa56ad5dc:
            if ((puVar13 < (uint64_t *)((int64_t)puVar11 - 3U)) &&
               ((int)*puVar39 == (int)*puVar13)) {
              puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
              puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
            }
            if ((puVar13 < (uint64_t *)((int64_t)puVar11 - 1U)) &&
               ((short)*puVar39 == (short)*puVar13)) {
              puVar13 = (uint64_t *)((int64_t)puVar13 + 2);
              puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
            }
            if (puVar13 < puVar11) {
              puVar13 = (uint64_t *)
                        ((int64_t)puVar13 + (uint64_t)((char)*puVar39 == (char)*puVar13));
            }
            uVar36 = (int64_t)puVar13 - (int64_t)puVar33;
          }
          if ((char *)((int64_t)puVar29 + uVar36) == pcStack_70) {
            puVar11 = (uint64_t *)(uVar36 + (int64_t)puVar33);
            puVar13 = puVar10;
            puVar29 = puVar11;
            if (puVar11 < (uint64_t *)((int64_t)puStack_78 + -7)) {
              uVar17 = *puVar10;
              if (uVar17 == *puVar11) {
                lStack_80 = CONCAT44(lStack_80._4_4_,iVar9);
                lVar12 = 0;
                do {
                  puVar29 = (uint64_t *)((int64_t)puStack_50 + lVar12 + uVar36 + 0xc);
                  if ((uint64_t *)((int64_t)puStack_78 + -7) <= puVar29) {
                    puVar13 = (uint64_t *)(lVar12 + lStack_48);
                    goto LAB_7fffa56ad6e9;
                  }
                  puVar13 = (uint64_t *)(lStack_48 + lVar12);
                  lVar12 = lVar12 + 8;
                } while (*puVar13 == *puVar29);
                uVar35 = 0;
                for (uVar17 = *puVar13 ^ *puVar29; (uVar17 & 1) == 0;
                    uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                  uVar35 = uVar35 + 1;
                }
                uVar17 = (uint64_t)(uVar35 >> 3) + lVar12;
              }
              else {
                uVar35 = 0;
                for (uVar17 = *puVar11 ^ uVar17; (uVar17 & 1) == 0;
                    uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                  uVar35 = uVar35 + 1;
                }
                uVar17 = (uint64_t)(uVar35 >> 3);
              }
            }
            else {
LAB_7fffa56ad6e9:
              if ((puVar29 < (uint64_t *)((int64_t)puStack_78 - 3U)) &&
                 ((int)*puVar13 == (int)*puVar29)) {
                puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
                puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
              }
              if ((puVar29 < (uint64_t *)((int64_t)puStack_78 - 1U)) &&
                 ((short)*puVar13 == (short)*puVar29)) {
                puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
                puVar13 = (uint64_t *)((int64_t)puVar13 + 2);
              }
              if (puVar29 < puStack_78) {
                puVar29 = (uint64_t *)
                          ((int64_t)puVar29 + (uint64_t)((char)*puVar13 == (char)*puVar29));
              }
              uVar17 = (int64_t)puVar29 - (int64_t)puVar11;
            }
            uVar36 = uVar36 + uVar17;
          }
          uVar36 = uVar36 + 4;
          if (uVar16 < uVar36) {
            *puVar19 = (uint64_t)
                       ((((int)uStack_60 - uVar27) + ((int)pcVar2 - (int)lVar37) + 3) -
                       auStack_188[lVar23]);
            if ((uint64_t *)((int64_t)puStack_50 + uVar36) == puStack_78) break;
            iVar9 = (int)*puStack_50;
            uVar16 = uVar36;
          }
        }
        uVar36 = uVar16;
        lVar23 = lVar23 + 1;
        uVar16 = uVar36;
      } while (lVar23 != lVar20);
    }
  }
  return (uVar36 >> 1 | (uint64_t)((uVar36 & 1) != 0) << 0x3f) ^ (uVar36 << 0x11 | uVar36 >> 0x2f)
         ^ uVar36;
code_r0x7fffa56ad315:
  lVar20 = lVar20 + 8;
  goto LAB_7fffa56ad300;
}


// ============================================================================
// Function : FUN_7fffa56ae4b0  |  RVA: 0xf3e4b0  |  Size: 3699 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int64_t FUN_7fffa56ae4b0(uint32_t param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  uint8_t bVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  char *pcVar6;
  uint32_t uVar7;
  bool bVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint8_t bVar13;
  int iVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t *puVar17;
  int64_t lVar18;
  uint64_t *puVar19;
  uint64_t *puVar20;
  uint64_t *puVar21;
  uint64_t *puVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  int64_t lVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  uint32_t uVar28;
  uint32_t uVar29;
  uint64_t in_R11;
  int iVar30;
  uint64_t *puVar31;
  int64_t lVar32;
  uint32_t uVar33;
  uint64_t uVar34;
  int64_t in_XMM4_Qa;
  uint64_t uStack_88;
  
  uVar15 = (in_R11 >> 1 | (uint64_t)((in_R11 & 1) != 0) << 0x3f) ^
           (in_R11 << 0x23 | in_R11 >> 0x1d) ^ in_R11;
  uVar15 = (uVar15 << 0x3e | uVar15 >> 2) ^ (uVar15 << 6 | uVar15 >> 0x3a) ^ uVar15;
  uVar15 = (uVar15 << 0xc | uVar15 >> 0x34) ^ (uVar15 << 0x3c | uVar15 >> 4) ^ uVar15;
  uVar15 = (uVar15 << 0x18 | uVar15 >> 0x28) ^ (uVar15 << 0x38 | uVar15 >> 8) ^ uVar15;
  uVar28 = 1 << (*(uint8_t *)(uVar15 + 0x10c) & 0x1f);
  bVar2 = *(uint8_t *)(uVar15 + 0x104);
  uVar9 = 1 << (bVar2 & 0x1f);
  uVar11 = in_XMM4_Qa * 0x44708317a8b16035 + 0x792e9460e691151f;
  uVar16 = uVar11 << 0x33 ^ uVar11;
  uVar16 = (uVar16 << 2 | uVar16 >> 0x3e) ^ (uVar11 << 0x37 | uVar16 >> 9) ^ uVar16;
  uVar26 = *(uint32_t *)(uVar15 + 0x1c);
  uVar16 = (uVar16 << 4 | uVar16 >> 0x3c) ^ (uVar16 << 0x2e | uVar16 >> 0x12) ^ uVar16;
  uVar16 = (uVar16 << 0x1c | uVar16 >> 0x24) ^ (uVar16 << 8 | uVar16 >> 0x38) ^ uVar16;
  uVar16 = (uVar16 << 0x38 | uVar16 >> 8) ^ (uVar16 << 0x10 | uVar16 >> 0x30) ^ uVar16;
  lVar3 = *(int64_t *)(uVar15 + 8);
  uVar33 = 1 << (*(uint8_t *)(uVar15 + 0x100) & 0x1f);
  uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) ^ (uVar16 << 0x30 | uVar16 >> 0x10) ^ uVar16;
  uVar16 = uVar16 << 0x20 | uVar16 >> 0x20;
  puVar31 = (uint64_t *)(uVar16 + 0x98cea511);
  uVar29 = *(uint32_t *)(uVar15 + 0x18);
  uVar11 = (uint64_t)uVar29;
  uVar27 = (int)puVar31 - (int)lVar3;
  uVar10 = uVar27 - uVar33;
  if (uVar27 - uVar26 <= uVar33) {
    uVar10 = uVar26;
  }
  if (*(int *)(uVar15 + 0x28) != 0) {
    uVar10 = uVar26;
  }
  uVar26 = uVar27 - uVar9;
  if (uVar27 < uVar9) {
    uVar26 = 0;
  }
  puVar4 = *(uint64_t **)(uVar15 + 0xf8);
  uVar12 = (uint64_t)
           ((uint32_t)(*(int *)puVar31 * -0x61c8864f) >> (0x22U - *(char *)(puVar4 + 0x21) & 0x1f));
  uVar33 = *(uint32_t *)(uVar15 + 0x2c);
  uVar34 = (uint64_t)uVar33;
  uVar7 = uVar27;
  if (uVar27 < uVar33) {
    uVar7 = uVar33;
  }
  bVar13 = (uint8_t)*(uint32_t *)(uVar15 + 0x108);
  if (~((param_1 | 1) * -0x6cd40fde) <= ((param_1 | 1) * -0x69437f04 + 0xd3e26363 ^ 0x93f8f019)) {
    bVar13 = 0x20 - bVar13;
  }
  puVar17 = (uint64_t *)(uVar11 + lVar3);
  lVar5 = *(int64_t *)(uVar15 + 0x80);
  iVar14 = *(int *)(uVar15 + 300);
  lVar18 = *(int64_t *)(uVar15 + 0x70);
  do {
    if (uVar7 == uVar34) break;
    uVar24 = (uint64_t)((uint32_t)(*(int *)(lVar3 + uVar34) * -0x61c8864f) >> (bVar13 & 0x1f));
    *(uint32_t *)(lVar5 + (uint64_t)(~(-1 << (bVar2 & 0x1f)) & (uint32_t)uVar34) * 4) =
         *(uint32_t *)(lVar18 + uVar24 * 4);
    *(uint32_t *)(lVar18 + uVar24 * 4) = (uint32_t)uVar34;
    uVar34 = uVar34 + 1;
  } while (iVar14 == 0);
  *(uint32_t *)(uVar15 + 0x2c) = uVar27;
  uVar33 = *(uint32_t *)(lVar18 + (uint64_t)((uint32_t)(*(int *)puVar31 * -0x61c8864f) >> (bVar13 & 0x1f))
                              * 4);
  uStack_88 = 3;
  if ((int)(((param_1 ^ 0xd276ab6c) << 0xf | (param_1 ^ 0xd276ab6c) >> 0x11) * -0x32c0a1ed) <
      (int)((param_1 + 0xaff84534) * -0x7fffffe5) == uVar33 < uVar10) {
    puVar1 = (uint64_t *)((int64_t)param_2 - 7);
    puVar20 = (uint64_t *)(uVar16 + 0x98cea519);
    uVar15 = uStack_88;
    do {
      puVar19 = (uint64_t *)(lVar3 + (uint64_t)uVar33);
      if (*(int *)((uVar15 - 3) + (int64_t)puVar19) == *(int *)(uVar16 + 0x98cea50e + uVar15)) {
        puVar22 = puVar31;
        if (puVar31 < puVar1) {
          if (*puVar19 == *puVar31) {
            puVar19 = (uint64_t *)(lVar3 + 8 + (uint64_t)uVar33);
            lVar18 = 8;
            puVar22 = puVar20;
            if (puVar20 < puVar1) {
LAB_7fffa56aec60:
              if (*puVar19 == *puVar22) goto code_r0x7fffa56aec70;
              uVar7 = 0;
              for (uVar34 = *puVar19 ^ *puVar22; (uVar34 & 1) == 0;
                  uVar34 = uVar34 >> 1 | 0x8000000000000000) {
                uVar7 = uVar7 + 1;
              }
              uStack_88 = (uint64_t)(uVar7 >> 3) + lVar18;
              goto joined_r0x7fffa56aed3a;
            }
            goto joined_r0x7fffa56aeca6;
          }
          uVar7 = 0;
          for (uVar34 = *puVar19 ^ *puVar31; (uVar34 & 1) == 0;
              uVar34 = uVar34 >> 1 | 0x8000000000000000) {
            uVar7 = uVar7 + 1;
          }
          uStack_88 = (uint64_t)(uVar7 >> 3);
        }
        else {
joined_r0x7fffa56aeca6:
          if ((puVar22 < (uint64_t *)((int64_t)param_2 - 3U)) && ((int)*puVar19 == (int)*puVar22))
          {
            puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
            puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
          }
          if ((puVar22 < (uint64_t *)((int64_t)param_2 - 1U)) &&
             ((short)*puVar19 == (short)*puVar22)) {
            puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
            puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
          }
          if (puVar22 < param_2) {
            puVar22 = (uint64_t *)
                      ((int64_t)puVar22 + (uint64_t)((char)*puVar19 == (char)*puVar22));
          }
          uStack_88 = (int64_t)puVar22 - (int64_t)puVar31;
        }
joined_r0x7fffa56aed3a:
        if (uVar15 < uStack_88) {
          *param_3 = (uint64_t)((uVar27 + 3) - uVar33);
          uVar15 = uStack_88;
          if ((uint64_t *)((int64_t)puVar31 + uStack_88) == param_2) break;
        }
      }
      uStack_88 = uVar15;
      if (uVar33 <= uVar26) break;
      uVar28 = uVar28 - 1;
      uVar33 = *(uint32_t *)(lVar5 + (uint64_t)(uVar33 & uVar9 - 1) * 4);
      if ((uVar33 < uVar10) || (uVar15 = uStack_88, uVar28 == 0)) break;
    } while( true );
  }
  uVar15 = 3;
  if (uVar28 < 3) {
    uVar15 = (uint64_t)uVar28;
  }
  pcVar6 = (char *)*puVar4;
  lVar5 = puVar4[1];
  uVar26 = *(uint32_t *)(puVar4[0xe] + 0xc + uVar12 * 0x10);
  iVar14 = ((int)pcVar6 - (int)lVar5) - uVar29;
  if (uVar28 == 0) {
    iVar30 = 0;
  }
  else {
    puVar1 = (uint64_t *)(uVar16 + 0x98cea515);
    iVar30 = (int)uVar15;
    lVar18 = uVar11 + lVar3 + 8;
    uVar34 = 0;
    do {
      uVar26 = *(uint32_t *)(uVar12 * 0x10 + puVar4[0xe] + uVar34 * 4);
      uVar24 = (uint64_t)uVar26;
      if (uVar24 == 0) {
        uVar24 = uStack_88;
        goto LAB_7fffa56af30b;
      }
      if (*(int *)(lVar5 + uVar24) == *(int *)puVar31) {
        puVar19 = (uint64_t *)((int *)(lVar5 + uVar24) + 1);
        puVar20 = (uint64_t *)(((int64_t)pcVar6 - (int64_t)puVar19) + (int64_t)puVar1);
        if (param_2 <= puVar20) {
          puVar20 = param_2;
        }
        puVar22 = puVar1;
        puVar21 = puVar19;
        if (puVar1 < (uint64_t *)((int64_t)puVar20 - 7U)) {
          if (*puVar19 == *puVar1) {
            lVar32 = lVar5 + 0xc + uVar24;
            lVar25 = 0;
            do {
              puVar22 = (uint64_t *)(uVar16 + 0x98cea51d + lVar25);
              if ((uint64_t *)((int64_t)puVar20 - 7U) <= puVar22) {
                puVar21 = (uint64_t *)(lVar32 + lVar25);
                goto LAB_7fffa56aea01;
              }
              uVar24 = *(uint64_t *)(lVar32 + lVar25);
              lVar25 = lVar25 + 8;
              uVar23 = *puVar22 - uVar24;
            } while (uVar23 == 0);
            if ((uint64_t)
                (((param_1 ^ 0x3e93c4fa) << 6 | (param_1 ^ 0x3e93c4fa) >> 0x1a) + 0xee4e775d) <
                0x40000000273) {
              uVar23 = uVar24 ^ *puVar22;
            }
            uVar29 = 0;
            for (; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar29 = uVar29 + 1;
            }
            uVar24 = (uint64_t)(uVar29 >> 3) + lVar25;
          }
          else {
            uVar29 = 0;
            for (uVar24 = *puVar19 ^ *puVar1; (uVar24 & 1) == 0;
                uVar24 = uVar24 >> 1 | 0x8000000000000000) {
              uVar29 = uVar29 + 1;
            }
            uVar24 = (uint64_t)(uVar29 >> 3);
          }
        }
        else {
LAB_7fffa56aea01:
          if ((puVar22 < (uint64_t *)((int64_t)puVar20 - 3U)) && ((int)*puVar21 == (int)*puVar22))
          {
            puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
            puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
          }
          if ((puVar22 < (uint64_t *)((int64_t)puVar20 - 1U)) &&
             ((short)*puVar21 == (short)*puVar22)) {
            puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
          }
          if (puVar22 < puVar20) {
            puVar22 = (uint64_t *)
                      ((int64_t)puVar22 + (uint64_t)((char)*puVar21 == (char)*puVar22));
          }
          uVar24 = (int64_t)puVar22 - (int64_t)puVar1;
        }
        if ((char *)((int64_t)puVar19 + uVar24) == pcVar6) {
          puVar20 = (uint64_t *)(uVar24 + (int64_t)puVar1);
          puVar22 = puVar17;
          puVar19 = puVar20;
          if (puVar20 < (uint64_t *)((int64_t)param_2 + -7)) {
            if (*puVar17 == *puVar20) {
              lVar32 = 0;
              do {
                puVar19 = (uint64_t *)(uVar16 + 0x98cea51d + uVar24 + lVar32);
                if ((uint64_t *)((int64_t)param_2 + -7) <= puVar19) {
                  puVar22 = (uint64_t *)(lVar32 + lVar18);
                  goto code_r0x7fffa56aeb03;
                }
                uVar23 = *(uint64_t *)(lVar18 + lVar32);
                lVar32 = lVar32 + 8;
              } while (uVar23 == *puVar19);
              uVar29 = 0;
              for (uVar23 = uVar23 ^ *puVar19; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar29 = uVar29 + 1;
              }
              uVar23 = (uint64_t)(uVar29 >> 3) + lVar32;
            }
            else {
              uVar29 = 0;
              for (uVar23 = *puVar20 ^ *puVar17; (uVar23 & 1) == 0;
                  uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                uVar29 = uVar29 + 1;
              }
              uVar23 = (uint64_t)(uVar29 >> 3);
            }
          }
          else {
code_r0x7fffa56aeb03:
            if ((puVar19 < (uint64_t *)((int64_t)param_2 - 3U)) &&
               ((int)*puVar22 == (int)*puVar19)) {
              puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
              puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
            }
            if ((puVar19 < (uint64_t *)((int64_t)param_2 - 1U)) &&
               ((short)*puVar22 == (short)*puVar19)) {
              puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
              puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
            }
            if (puVar19 < param_2) {
              puVar19 = (uint64_t *)
                        ((int64_t)puVar19 + (uint64_t)((char)*puVar22 == (char)*puVar19));
            }
            uVar23 = (int64_t)puVar19 - (int64_t)puVar20;
          }
          uVar24 = uVar24 + uVar23;
        }
        uVar24 = uVar24 + 4;
        if (uStack_88 < uVar24) {
          *param_3 = (uint64_t)((uVar27 + 3 + iVar14) - uVar26);
          uStack_88 = uVar24;
          if ((uint64_t *)((int64_t)puVar31 + uVar24) == param_2) goto LAB_7fffa56af30b;
        }
      }
      uVar34 = uVar34 + 1;
    } while (uVar34 != uVar15);
    uVar26 = *(uint32_t *)(puVar4[0xe] + (uVar12 * 4 | 3) * 4);
  }
  uVar29 = uVar28 - iVar30;
  if ((uVar26 & 0xff) <= uVar28 - iVar30) {
    uVar29 = uVar26 & 0xff;
  }
  uVar24 = uStack_88;
  if (uVar29 != 0) {
    bVar2 = (uint8_t)param_1 & 0x1f;
    bVar8 = uVar29 == 8;
    if ((uint64_t)((0x48138768 << bVar2 | 0x48138768U >> 0x20 - bVar2) * -0x5f73425b) <=
        (uint64_t)(int64_t)(int)(param_1 + 0x14a346f5)) {
      bVar8 = uVar29 < 8;
    }
    if (!bVar8) {
      for (lVar18 = 0; (uint64_t)(uVar29 & 0xf8) - 8 != lVar18; lVar18 = lVar18 + 8) {
      }
    }
    if ((uVar29 & 7) != 0) {
      uVar15 = 0;
      do {
        uVar15 = uVar15 + 4;
      } while ((uVar29 & 7) << 2 != uVar15);
    }
    iVar30 = *(int *)puVar31;
    uVar15 = (uint64_t)(uVar26 >> 8);
    puVar1 = (uint64_t *)(uVar16 + 0x98cea515);
    uVar26 = 0;
    do {
      uVar10 = *(uint32_t *)(puVar4[0x10] + uVar15 * 4);
      if (*(int *)(lVar5 + (uint64_t)uVar10) == iVar30) {
        lVar18 = lVar5 + (uint64_t)uVar10;
        puVar20 = (uint64_t *)(lVar18 + 4);
        puVar19 = (uint64_t *)(((int64_t)pcVar6 - (int64_t)puVar20) + (int64_t)puVar1);
        if (param_2 <= puVar19) {
          puVar19 = param_2;
        }
        puVar21 = puVar20;
        puVar22 = puVar1;
        if (puVar1 < (uint64_t *)((int64_t)puVar19 - 7U)) {
          if (*puVar20 == *puVar1) {
            lVar32 = 0xc;
LAB_7fffa56af0f0:
            puVar22 = (uint64_t *)((int64_t)puVar31 + lVar32);
            if (puVar22 < (uint64_t *)((int64_t)puVar19 - 7U)) {
              if (*(uint64_t *)(lVar18 + lVar32) == *puVar22) goto code_r0x7fffa56af119;
              uVar9 = 0;
              for (uVar12 = *puVar22 ^ *(uint64_t *)(lVar18 + lVar32); (uVar12 & 1) == 0;
                  uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                uVar9 = uVar9 + 1;
              }
              uVar24 = ((uint64_t)(uVar9 >> 3) + lVar32) - 4;
              goto LAB_7fffa56af184;
            }
            puVar21 = (uint64_t *)(lVar18 + lVar32);
            goto LAB_7fffa56af125;
          }
          uVar9 = 0;
          for (uVar12 = *puVar20 ^ *puVar1; (uVar12 & 1) == 0;
              uVar12 = uVar12 >> 1 | 0x8000000000000000) {
            uVar9 = uVar9 + 1;
          }
          uVar24 = (uint64_t)(uVar9 >> 3);
        }
        else {
LAB_7fffa56af125:
          if ((puVar22 < (uint64_t *)((int64_t)puVar19 - 3U)) && ((int)*puVar21 == (int)*puVar22))
          {
            puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
          }
          if ((puVar22 < (uint64_t *)((int64_t)puVar19 - 1U)) &&
             ((short)*puVar21 == (short)*puVar22)) {
            puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
            puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
          }
          if (puVar22 < puVar19) {
            puVar22 = (uint64_t *)
                      ((int64_t)puVar22 + (uint64_t)((char)*puVar21 == (char)*puVar22));
          }
          uVar24 = (int64_t)puVar22 - (int64_t)puVar1;
        }
LAB_7fffa56af184:
        if ((char *)((int64_t)puVar20 + uVar24) == pcVar6) {
          puVar20 = (uint64_t *)((int64_t)puVar1 + uVar24);
          puVar22 = puVar17;
          puVar19 = puVar20;
          if (puVar20 < (uint64_t *)((int64_t)param_2 - 7U)) {
            if (*puVar17 == *puVar20) {
              puVar19 = (uint64_t *)(uVar16 + 0x98cea51d + uVar24);
              lVar18 = uVar16 + 0x98cea51d + uVar24;
              puVar22 = (uint64_t *)(uVar11 + lVar3);
LAB_7fffa56af230:
              puVar22 = puVar22 + 1;
              if (puVar19 < (uint64_t *)((int64_t)param_2 - 7U)) {
                if (*puVar22 == *puVar19) goto code_r0x7fffa56af256;
                uVar9 = 0;
                for (uVar12 = *puVar22 ^ *puVar19; (uVar12 & 1) == 0;
                    uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                  uVar9 = uVar9 + 1;
                }
                uVar12 = ((uint64_t)(uVar9 >> 3) + lVar18) - (int64_t)puVar20;
                goto LAB_7fffa56af2b2;
              }
              goto LAB_7fffa56af1a8;
            }
            uVar9 = 0;
            for (uVar12 = *puVar20 ^ *puVar17; (uVar12 & 1) == 0;
                uVar12 = uVar12 >> 1 | 0x8000000000000000) {
              uVar9 = uVar9 + 1;
            }
            uVar12 = (uint64_t)(uVar9 >> 3);
          }
          else {
LAB_7fffa56af1a8:
            if ((puVar19 < (uint64_t *)((int64_t)param_2 + -3)) &&
               ((int)*puVar22 == (int)*puVar19)) {
              puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
              puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
            }
            if ((puVar19 < (uint64_t *)((int64_t)param_2 - 1U)) &&
               ((short)*puVar22 == (short)*puVar19)) {
              puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
              puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
            }
            if (puVar19 < param_2) {
              puVar19 = (uint64_t *)
                        ((int64_t)puVar19 + (uint64_t)((char)*puVar22 == (char)*puVar19));
            }
            uVar12 = (int64_t)puVar19 - (int64_t)puVar20;
          }
LAB_7fffa56af2b2:
          uVar24 = uVar24 + uVar12;
        }
        uVar24 = uVar24 + 4;
        if (uStack_88 < uVar24) {
          *param_3 = (uint64_t)((uVar27 + 3 + iVar14) - uVar10);
          if ((uint64_t *)((int64_t)puVar31 + uVar24) == param_2) {
            break;
          }
          iVar30 = *(int *)puVar31;
          uStack_88 = uVar24;
        }
      }
      uVar26 = uVar26 + 1;
      uVar15 = uVar15 + 1;
      uVar24 = uStack_88;
    } while (uVar26 != uVar29);
  }
LAB_7fffa56af30b:
  return uVar24 - (uVar24 << 0x2b);
code_r0x7fffa56aec70:
  puVar22 = puVar22 + 1;
  lVar18 = lVar18 + 8;
  puVar19 = puVar19 + 1;
  if (puVar1 <= puVar22) goto joined_r0x7fffa56aeca6;
  goto LAB_7fffa56aec60;
code_r0x7fffa56af119:
  lVar32 = lVar32 + 8;
  goto LAB_7fffa56af0f0;
code_r0x7fffa56af256:
  puVar19 = puVar19 + 1;
  lVar18 = lVar18 + 8;
  goto LAB_7fffa56af230;
}


// ============================================================================
// Function : FUN_7fffa56af345  |  RVA: 0xf3f345  |  Size: 28 bytes
// Callers  : none
// Callees  : FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa56af345(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa4f54478(**(uint32_t **)(param_2 + 0x98));
  return;
}

