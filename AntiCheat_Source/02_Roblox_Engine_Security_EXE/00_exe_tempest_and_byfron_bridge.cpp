// RobloxPlayerBeta.exe — Embedded Bootstrap & Bridge Sections (tempest, .byfron, .rodata)
#include <cstdint>

// === Section tempest (RVA 0x9366000, Size 0x14) ===
void ExeSection_tempest() {
    /* +0x9366000 */ __asm { pop      rdi }
    /* +0x9366001 */ __asm { shr      bl, cl }
    /* +0x9366003 */ __asm { movabs   dword ptr [0x7fffa56a5e30b848], eax }
    /* +0x936600c */ __asm { add      byte ptr [rax], al }
    /* +0x936600e */ __asm { push     rax }
    /* +0x936600f */ __asm { ret       }
    /* +0x9366010 */ __asm { int3      }
}

// === Section .byfron (RVA 0x9367000, Size 0x252) ===
void ExeSection__byfron() {
    /* +0x9367000 */ __asm { push     rdx }
    /* +0x9367001 */ __asm { outsd    dx, dword ptr [rsi] }
    /* +0x9367003 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x9367004 */ __asm { outsd    dx, dword ptr [rsi] }
    /* +0x9367005 */ __asm { js       0x9367057 }
    /* +0x9367007 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x9367009 */ __asm { jns      0x9367070 }
    /* +0x936700b */ __asm { jb       0x936704f }
    /* +0x936700d */ __asm { je       0x9367071 }
    /* +0x9367010 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x9367013 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x9367014 */ __asm { add      byte ptr [rax], al }
    /* +0x9367016 */ __asm { add      byte ptr [rax], al }
    /* +0x9367018 */ __asm { add      byte ptr [rax], al }
    /* +0x936701a */ __asm { add      byte ptr [rax], al }
    /* +0x936701c */ __asm { add      byte ptr [rax], al }
    /* +0x936701e */ __asm { add      byte ptr [rax], al }
    /* +0x9367020 */ __asm { add      byte ptr [rax], al }
    /* +0x9367022 */ __asm { add      byte ptr [rax], al }
    /* +0x9367024 */ __asm { add      byte ptr [rax], al }
    /* +0x9367026 */ __asm { add      byte ptr [rax], al }
    /* +0x9367028 */ __asm { add      byte ptr [rax], al }
    /* +0x936702a */ __asm { add      byte ptr [rax], al }
    /* +0x936702c */ __asm { add      byte ptr [rax], al }
    /* +0x936702e */ __asm { add      byte ptr [rax], al }
    /* +0x9367030 */ __asm { add      byte ptr [rax], al }
    /* +0x9367032 */ __asm { add      byte ptr [rax], al }
    /* +0x9367034 */ __asm { add      byte ptr [rax], al }
    /* +0x9367036 */ __asm { add      byte ptr [rax], al }
    /* +0x9367038 */ __asm { add      byte ptr [rax], al }
    /* +0x936703a */ __asm { add      byte ptr [rax], al }
    /* +0x936703c */ __asm { add      byte ptr [rax], al }
    /* +0x936703e */ __asm { add      byte ptr [rax], al }
    /* +0x9367040 */ __asm { add      byte ptr [rax], al }
    /* +0x9367042 */ __asm { add      byte ptr [rax], al }
    /* +0x9367044 */ __asm { add      byte ptr [rax], al }
    /* +0x9367046 */ __asm { add      byte ptr [rax], al }
    /* +0x9367048 */ __asm { add      byte ptr [rax], al }
    /* +0x936704a */ __asm { add      byte ptr [rax], al }
    /* +0x936704c */ __asm { add      byte ptr [rax], al }
    /* +0x936704e */ __asm { add      byte ptr [rax], al }
    /* +0x9367050 */ __asm { add      byte ptr [rax], al }
    /* +0x9367052 */ __asm { add      byte ptr [rax], al }
    /* +0x9367054 */ __asm { add      byte ptr [rax], al }
    /* +0x9367056 */ __asm { add      byte ptr [rax], al }
    /* +0x9367058 */ __asm { add      byte ptr [rax], al }
    /* +0x936705a */ __asm { add      byte ptr [rax], al }
    /* +0x936705c */ __asm { add      byte ptr [rax], al }
    /* +0x936705e */ __asm { add      byte ptr [rax], al }
    /* +0x9367060 */ __asm { add      byte ptr [rax], al }
    /* +0x9367062 */ __asm { add      byte ptr [rax], al }
    /* +0x9367064 */ __asm { add      byte ptr [rax], al }
    /* +0x9367066 */ __asm { add      byte ptr [rax], al }
    /* +0x9367068 */ __asm { add      byte ptr [rax], al }
    /* +0x936706a */ __asm { add      byte ptr [rax], al }
    /* +0x936706c */ __asm { add      byte ptr [rax], al }
    /* +0x936706e */ __asm { add      byte ptr [rax], al }
    /* +0x9367070 */ __asm { add      byte ptr [rax], al }
    /* +0x9367072 */ __asm { add      byte ptr [rax], al }
    /* +0x9367074 */ __asm { add      byte ptr [rax], al }
    /* +0x9367076 */ __asm { add      byte ptr [rax], al }
    /* +0x9367078 */ __asm { add      byte ptr [rax], al }
    /* +0x936707a */ __asm { add      byte ptr [rax], al }
    /* +0x936707c */ __asm { add      byte ptr [rax], al }
    /* +0x936707e */ __asm { add      byte ptr [rax], al }
    /* +0x9367080 */ __asm { add      byte ptr [rax], al }
    /* +0x9367082 */ __asm { add      byte ptr [rax], al }
    /* +0x9367084 */ __asm { add      byte ptr [rax], al }
    /* +0x9367086 */ __asm { add      byte ptr [rax], al }
    /* +0x9367088 */ __asm { add      byte ptr [rax], al }
    /* +0x936708a */ __asm { add      byte ptr [rax], al }
    /* +0x936708c */ __asm { add      byte ptr [rax], al }
    /* +0x936708e */ __asm { add      byte ptr [rax], al }
    /* +0x9367090 */ __asm { add      byte ptr [rax], al }
    /* +0x9367092 */ __asm { add      byte ptr [rax], al }
    /* +0x9367094 */ __asm { add      byte ptr [rax], al }
    /* +0x9367096 */ __asm { add      byte ptr [rax], al }
    /* +0x9367098 */ __asm { add      byte ptr [rax], al }
    /* +0x936709a */ __asm { add      byte ptr [rax], al }
    /* +0x936709c */ __asm { add      byte ptr [rax], al }
    /* +0x936709e */ __asm { add      byte ptr [rax], al }
    /* +0x93670a0 */ __asm { add      byte ptr [rax], al }
    /* +0x93670a2 */ __asm { add      byte ptr [rax], al }
    /* +0x93670a4 */ __asm { add      byte ptr [rax], al }
    /* +0x93670a6 */ __asm { add      byte ptr [rax], al }
    /* +0x93670a8 */ __asm { add      byte ptr [rax], al }
    /* +0x93670aa */ __asm { add      byte ptr [rax], al }
    /* +0x93670ac */ __asm { add      byte ptr [rax], al }
    /* +0x93670ae */ __asm { add      byte ptr [rax], al }
    /* +0x93670b0 */ __asm { add      byte ptr [rax], al }
    /* +0x93670b2 */ __asm { add      byte ptr [rax], al }
    /* +0x93670b4 */ __asm { add      byte ptr [rax], al }
    /* +0x93670b6 */ __asm { add      byte ptr [rax], al }
    /* +0x93670b8 */ __asm { add      byte ptr [rax], al }
    /* +0x93670ba */ __asm { add      byte ptr [rax], al }
    /* +0x93670bc */ __asm { add      byte ptr [rax], al }
    /* +0x93670be */ __asm { add      byte ptr [rax], al }
    /* +0x93670c0 */ __asm { add      byte ptr [rax], al }
    /* +0x93670c2 */ __asm { add      byte ptr [rax], al }
    /* +0x93670c4 */ __asm { add      byte ptr [rax], al }
    /* +0x93670c6 */ __asm { add      byte ptr [rax], al }
    /* +0x93670c8 */ __asm { add      byte ptr [rax], al }
    /* +0x93670ca */ __asm { add      byte ptr [rax], al }
    /* +0x93670cc */ __asm { add      byte ptr [rax], al }
    /* +0x93670ce */ __asm { add      byte ptr [rax], al }
    /* +0x93670d0 */ __asm { add      byte ptr [rax], al }
    /* +0x93670d2 */ __asm { add      byte ptr [rax], al }
    /* +0x93670d4 */ __asm { add      byte ptr [rax], al }
    /* +0x93670d6 */ __asm { add      byte ptr [rax], al }
    /* +0x93670d8 */ __asm { add      byte ptr [rax], al }
    /* +0x93670da */ __asm { add      byte ptr [rax], al }
    /* +0x93670dc */ __asm { add      byte ptr [rax], al }
    /* +0x93670de */ __asm { add      byte ptr [rax], al }
    /* +0x93670e0 */ __asm { add      byte ptr [rax], al }
    /* +0x93670e2 */ __asm { add      byte ptr [rax], al }
    /* +0x93670e4 */ __asm { add      byte ptr [rax], al }
    /* +0x93670e6 */ __asm { add      byte ptr [rax], al }
    /* +0x93670e8 */ __asm { add      byte ptr [rax], al }
    /* +0x93670ea */ __asm { add      byte ptr [rax], al }
    /* +0x93670ec */ __asm { add      byte ptr [rax], al }
    /* +0x93670ee */ __asm { add      byte ptr [rax], al }
    /* +0x93670f0 */ __asm { add      byte ptr [rax], al }
    /* +0x93670f2 */ __asm { add      byte ptr [rax], al }
    /* +0x93670f4 */ __asm { add      byte ptr [rax], al }
    /* +0x93670f6 */ __asm { add      byte ptr [rax], al }
    /* +0x93670f8 */ __asm { add      byte ptr [rax], al }
    /* +0x93670fa */ __asm { add      byte ptr [rax], al }
    /* +0x93670fc */ __asm { add      byte ptr [rax], al }
    /* +0x93670fe */ __asm { add      byte ptr [rax], al }
    /* +0x9367100 */ __asm { add      byte ptr [rax], al }
    /* +0x9367102 */ __asm { add      byte ptr [rax], al }
    /* +0x9367104 */ __asm { add      byte ptr [rax], al }
    /* +0x9367106 */ __asm { jb       0x936717d }
    /* +0x9367108 */ __asm { outsb    dx, byte ptr [rsi] }
    /* +0x9367109 */ __asm { add      byte ptr [rax], al }
    /* +0x936710b */ __asm { add      byte ptr [rax], al }
    /* +0x936710d */ __asm { add      byte ptr [rax], al }
    /* +0x936710f */ __asm { add      byte ptr [rax], al }
    /* +0x9367111 */ __asm { add      byte ptr [rax], al }
    /* +0x9367113 */ __asm { add      byte ptr [rax], al }
    /* +0x9367115 */ __asm { add      byte ptr [rax], al }
    /* +0x9367117 */ __asm { add      byte ptr [rax], al }
    /* +0x9367119 */ __asm { add      byte ptr [rax], al }
    /* +0x936711b */ __asm { add      byte ptr [rax], al }
    /* +0x936711d */ __asm { add      byte ptr [rax], al }
    /* +0x936711f */ __asm { add      byte ptr [rax], al }
    /* +0x9367121 */ __asm { add      byte ptr [rax], al }
    /* +0x9367123 */ __asm { add      byte ptr [rax], al }
    /* +0x9367125 */ __asm { add      byte ptr [rax], al }
    /* +0x9367127 */ __asm { add      byte ptr [rax], al }
    /* +0x9367129 */ __asm { add      byte ptr [rax], al }
    /* +0x936712b */ __asm { add      byte ptr [rax], al }
    /* +0x936712d */ __asm { add      byte ptr [rax], al }
    /* +0x936712f */ __asm { add      byte ptr [rax], al }
    /* +0x9367131 */ __asm { add      byte ptr [rax], al }
    /* +0x9367133 */ __asm { add      byte ptr [rax], al }
    /* +0x9367135 */ __asm { add      byte ptr [rax], al }
    /* +0x9367137 */ __asm { add      byte ptr [rax], al }
    /* +0x9367139 */ __asm { add      byte ptr [rax], al }
    /* +0x936713b */ __asm { add      byte ptr [rax], al }
    /* +0x936713d */ __asm { add      byte ptr [rax], al }
    /* +0x936713f */ __asm { add      byte ptr [rax], al }
    /* +0x9367141 */ __asm { add      byte ptr [rax], al }
    /* +0x9367143 */ __asm { add      byte ptr [rax], al }
    /* +0x9367145 */ __asm { add      byte ptr [rax], al }
    /* +0x9367147 */ __asm { add      byte ptr [rax], al }
    /* +0x9367149 */ __asm { add      byte ptr [rax], al }
    /* +0x936714b */ __asm { add      byte ptr [rax], al }
    /* +0x936714d */ __asm { add      byte ptr [rax], al }
    /* +0x936714f */ __asm { add      byte ptr [rax], al }
    /* +0x9367151 */ __asm { add      byte ptr [rax], al }
    /* +0x9367153 */ __asm { add      byte ptr [rax], al }
    /* +0x9367155 */ __asm { add      byte ptr [rax], al }
    /* +0x9367157 */ __asm { add      byte ptr [rax], al }
    /* +0x9367159 */ __asm { add      byte ptr [rax], al }
    /* +0x936715b */ __asm { add      byte ptr [rax], al }
    /* +0x936715d */ __asm { add      byte ptr [rax], al }
    /* +0x936715f */ __asm { add      byte ptr [rax], al }
    /* +0x9367161 */ __asm { add      byte ptr [rax], al }
    /* +0x9367163 */ __asm { add      byte ptr [rax], al }
    /* +0x9367165 */ __asm { add      byte ptr [rax], al }
    /* +0x9367167 */ __asm { add      byte ptr [rax], al }
    /* +0x9367169 */ __asm { add      byte ptr [rax], al }
    /* +0x936716b */ __asm { add      byte ptr [rax], al }
    /* +0x936716d */ __asm { add      byte ptr [rax], al }
    /* +0x936716f */ __asm { add      byte ptr [rax], al }
    /* +0x9367171 */ __asm { add      byte ptr [rax], al }
    /* +0x9367173 */ __asm { add      byte ptr [rax], al }
    /* +0x9367175 */ __asm { add      byte ptr [rax], al }
    /* +0x9367177 */ __asm { add      byte ptr [rax], al }
    /* +0x9367179 */ __asm { add      byte ptr [rax], al }
    /* +0x936717b */ __asm { add      byte ptr [rax], al }
    /* +0x936717d */ __asm { add      byte ptr [rax], al }
    /* +0x936717f */ __asm { add      byte ptr [rax], al }
    /* +0x9367181 */ __asm { add      byte ptr [rax], al }
    /* +0x9367183 */ __asm { add      byte ptr [rax], al }
    /* +0x9367185 */ __asm { add      byte ptr [rax], al }
    /* +0x9367187 */ __asm { add      byte ptr [rax], al }
    /* +0x9367189 */ __asm { add      byte ptr [rax], al }
    /* +0x936718b */ __asm { add      byte ptr [rax], al }
    /* +0x936718d */ __asm { add      byte ptr [rax], al }
    /* +0x936718f */ __asm { add      byte ptr [rax], al }
    /* +0x9367191 */ __asm { add      byte ptr [rax], al }
    /* +0x9367193 */ __asm { add      byte ptr [rax], al }
    /* +0x9367195 */ __asm { add      byte ptr [rax], al }
    /* +0x9367197 */ __asm { add      byte ptr [rax], al }
    /* +0x9367199 */ __asm { add      byte ptr [rax], al }
    /* +0x936719b */ __asm { add      byte ptr [rax], al }
    /* +0x936719d */ __asm { add      byte ptr [rax], al }
    /* +0x936719f */ __asm { add      byte ptr [rax], al }
    /* +0x93671a1 */ __asm { add      byte ptr [rax], al }
    /* +0x93671a3 */ __asm { add      byte ptr [rax], al }
    /* +0x93671a5 */ __asm { add      byte ptr [rax], al }
    /* +0x93671a7 */ __asm { add      byte ptr [rax], al }
    /* +0x93671a9 */ __asm { add      byte ptr [rax], al }
    /* +0x93671ab */ __asm { add      byte ptr [rax], al }
    /* +0x93671ad */ __asm { add      byte ptr [rax], al }
    /* +0x93671af */ __asm { add      byte ptr [rax], al }
    /* +0x93671b1 */ __asm { add      byte ptr [rax], al }
    /* +0x93671b3 */ __asm { add      byte ptr [rax], al }
    /* +0x93671b5 */ __asm { add      byte ptr [rax], al }
    /* +0x93671b7 */ __asm { add      byte ptr [rax], al }
    /* +0x93671b9 */ __asm { add      byte ptr [rax], al }
    /* +0x93671bb */ __asm { add      byte ptr [rax], al }
    /* +0x93671bd */ __asm { add      byte ptr [rax], al }
    /* +0x93671bf */ __asm { add      byte ptr [rax], al }
    /* +0x93671c1 */ __asm { add      byte ptr [rax], al }
    /* +0x93671c3 */ __asm { add      byte ptr [rax], al }
    /* +0x93671c5 */ __asm { add      byte ptr [rax], al }
    /* +0x93671c7 */ __asm { add      byte ptr [rax], al }
    /* +0x93671c9 */ __asm { add      byte ptr [rax], al }
    /* +0x93671cb */ __asm { add      byte ptr [rax], al }
    /* +0x93671cd */ __asm { add      byte ptr [rax], al }
    /* +0x93671cf */ __asm { add      byte ptr [rax], al }
    /* +0x93671d1 */ __asm { add      byte ptr [rax], al }
    /* +0x93671d3 */ __asm { add      byte ptr [rax], al }
    /* +0x93671d5 */ __asm { add      byte ptr [rax], al }
    /* +0x93671d7 */ __asm { add      byte ptr [rax], al }
    /* +0x93671d9 */ __asm { add      byte ptr [rax], al }
    /* +0x93671db */ __asm { add      byte ptr [rax], al }
    /* +0x93671dd */ __asm { add      byte ptr [rax], al }
    /* +0x93671df */ __asm { add      byte ptr [rax], al }
    /* +0x93671e1 */ __asm { add      byte ptr [rax], al }
    /* +0x93671e3 */ __asm { add      byte ptr [rax], al }
    /* +0x93671e5 */ __asm { add      byte ptr [rax], al }
    /* +0x93671e7 */ __asm { add      byte ptr [rax], al }
    /* +0x93671e9 */ __asm { add      byte ptr [rax], al }
    /* +0x93671eb */ __asm { add      byte ptr [rax], al }
    /* +0x93671ed */ __asm { add      byte ptr [rax], al }
    /* +0x93671ef */ __asm { add      byte ptr [rax], al }
    /* +0x93671f1 */ __asm { add      byte ptr [rax], al }
    /* +0x93671f3 */ __asm { add      byte ptr [rax], al }
    /* +0x93671f5 */ __asm { add      byte ptr [rax], al }
    /* +0x93671f7 */ __asm { add      byte ptr [rax], al }
    /* +0x93671f9 */ __asm { add      byte ptr [rax], al }
    /* +0x93671fb */ __asm { add      byte ptr [rax], al }
    /* +0x93671fd */ __asm { add      byte ptr [rax], al }
    /* +0x93671ff */ __asm { add      byte ptr [rax], al }
}

// === Section .rodata (RVA 0x6437000, Size 0x8f0) ===
void ExeSection__rodata() {
    /* +0x6437000 */ __asm { add      byte ptr [rip + 0x7020601], al }
    /* +0x6437006 */ __asm { add      ecx, dword ptr [rax] }
    /* +0x6437008 */ __asm { add      al, 9 }
    /* +0x643700a */ __asm { add      eax, 0x70b060a }
    /* +0x643700f */ __asm { or       al, 2 }
    /* +0x6437011 */ __asm { add      al, 3 }
    /* +0x6437013 */ __asm { add      eax, 0x7050604 }
    /* +0x6437019 */ __asm { or       byte ptr [rdi], al }
    /* +0x643701b */ __asm { or       dword ptr [rax], ecx }
    /* +0x643701d */ __asm { or       cl, byte ptr [rcx] }
    /* +0x643701f */ __asm { or       eax, dword ptr [rcx] }
    /* +0x6437021 */ __asm { add      eax, dword ptr [rdx] }
    /* +0x6437023 */ __asm { add      al, 3 }
    /* +0x6437025 */ __asm { add      eax, 0x7050604 }
    /* +0x643702b */ __asm { or       byte ptr [rdi], al }
    /* +0x643702d */ __asm { or       dword ptr [rax], ecx }
    /* +0x643702f */ __asm { or       al, byte ptr [rax + rcx] }
    /* +0x6437033 */ __asm { add      dword ptr [rax], ecx }
    /* +0x6437035 */ __asm { add      eax, dword ptr [rcx] }
    /* +0x6437037 */ __asm { add      eax, 0x9050703 }
    /* +0x643703d */ __asm { or       ecx, dword ptr [rcx] }
    /* +0x643703f */ __asm { or       eax, 0x8040602 }
    /* +0x6437045 */ __asm { add      dword ptr [rax], ecx }
    /* +0x6437047 */ __asm { add      eax, dword ptr [rcx] }
    /* +0x6437049 */ __asm { add      eax, 0x9050703 }
    /* +0x643704f */ __asm { or       eax, dword ptr [rax] }
    /* +0x6437052 */ __asm { add      byte ptr [rax], al }
    /* +0x6437056 */ __asm { add      byte ptr [rax], al }
    /* +0x643705a */ __asm { add      byte ptr [rax], al }
    /* +0x643705e */ __asm { add      byte ptr [rax], al }
    /* +0x6437061 */ __asm { add      byte ptr [rax], al }
    /* +0x6437063 */ __asm { add      byte ptr [rax], al }
    /* +0x6437065 */ __asm { add      byte ptr [rax], al }
    /* +0x6437067 */ __asm { add      byte ptr [rax], al }
    /* +0x6437069 */ __asm { add      byte ptr [rax], al }
    /* +0x643706b */ __asm { add      byte ptr [rax], al }
    /* +0x643706d */ __asm { add      byte ptr [rax], al }
    /* +0x643706f */ __asm { add      byte ptr [rax], al }
    /* +0x6437071 */ __asm { add      byte ptr [rax], al }
    /* +0x6437073 */ __asm { add      byte ptr [rax], al }
    /* +0x6437075 */ __asm { add      byte ptr [rax], al }
    /* +0x6437077 */ __asm { add      byte ptr [rax], al }
    /* +0x6437079 */ __asm { add      byte ptr [rax], al }
    /* +0x643707b */ __asm { add      byte ptr [rax], al }
    /* +0x643707d */ __asm { add      byte ptr [rax], al }
    /* +0x643707f */ __asm { add      byte ptr [rdx], al }
    /* +0x6437081 */ __asm { add      dword ptr [rdx], eax }
    /* +0x6437083 */ __asm { add      dword ptr [rdx], eax }
    /* +0x6437085 */ __asm { add      dword ptr [rdx], eax }
    /* +0x6437087 */ __asm { add      dword ptr [rdx], eax }
    /* +0x6437089 */ __asm { add      dword ptr [rdx], eax }
    /* +0x643708b */ __asm { add      dword ptr [rdx], eax }
    /* +0x643708d */ __asm { add      dword ptr [rdx], eax }
    /* +0x643708f */ __asm { add      dword ptr [rax], eax }
    /* +0x6437091 */ __asm { add      byte ptr [rax], al }
    /* +0x6437093 */ __asm { add      byte ptr [rax], al }
    /* +0x6437095 */ __asm { add      byte ptr [rax], al }
    /* +0x6437097 */ __asm { add      byte ptr [rax], al }
    /* +0x6437099 */ __asm { add      byte ptr [rax], al }
    /* +0x643709b */ __asm { add      byte ptr [rax], al }
    /* +0x643709d */ __asm { add      byte ptr [rax], al }
    /* +0x643709f */ __asm { add      byte ptr [rbx], al }
    /* +0x64370a1 */ __asm { add      eax, dword ptr [rbx] }
    /* +0x64370a3 */ __asm { add      eax, dword ptr [rbx] }
    /* +0x64370a5 */ __asm { add      eax, dword ptr [rbx] }
    /* +0x64370a7 */ __asm { add      eax, dword ptr [rbx] }
    /* +0x64370a9 */ __asm { add      eax, dword ptr [rbx] }
    /* +0x64370ab */ __asm { add      eax, dword ptr [rbx] }
    /* +0x64370ad */ __asm { add      eax, dword ptr [rbx] }
    /* +0x64370af */ __asm { add      eax, dword ptr [rax] }
    /* +0x64370b1 */ __asm { add      byte ptr [rax], al }
    /* +0x64370b3 */ __asm { add      byte ptr [rax], al }
    /* +0x64370b5 */ __asm { add      byte ptr [rax], al }
    /* +0x64370b7 */ __asm { add      byte ptr [rax], al }
    /* +0x64370b9 */ __asm { add      byte ptr [rax], al }
    /* +0x64370bb */ __asm { add      byte ptr [rax], al }
    /* +0x64370bd */ __asm { add      byte ptr [rax], al }
    /* +0x64370bf */ __asm { add      byte ptr [rcx], al }
    /* +0x64370c1 */ __asm { add      al, byte ptr [rcx] }
    /* +0x64370c3 */ __asm { add      al, byte ptr [rcx] }
    /* +0x64370c5 */ __asm { add      al, byte ptr [rcx] }
    /* +0x64370c7 */ __asm { add      al, byte ptr [rcx] }
    /* +0x64370c9 */ __asm { add      al, byte ptr [rcx] }
    /* +0x64370cb */ __asm { add      al, byte ptr [rcx] }
    /* +0x64370cd */ __asm { add      al, byte ptr [rcx] }
    /* +0x64370cf */ __asm { add      al, byte ptr [rax] }
    /* +0x64370d1 */ __asm { add      byte ptr [rax], al }
    /* +0x64370d3 */ __asm { add      byte ptr [rax], al }
    /* +0x64370d5 */ __asm { add      byte ptr [rax], al }
    /* +0x64370d7 */ __asm { add      byte ptr [rax], al }
    /* +0x64370d9 */ __asm { add      byte ptr [rax], al }
    /* +0x64370db */ __asm { add      byte ptr [rax], al }
    /* +0x64370dd */ __asm { add      byte ptr [rax], al }
    /* +0x64370df */ __asm { add      byte ptr [rax], al }
    /* +0x64370e1 */ __asm { add      byte ptr [rax], al }
    /* +0x64370e3 */ __asm { add      byte ptr [rax], al }
    /* +0x64370e5 */ __asm { add      byte ptr [rax], al }
    /* +0x64370e7 */ __asm { add      byte ptr [rax], al }
    /* +0x64370e9 */ __asm { add      byte ptr [rax], al }
    /* +0x64370eb */ __asm { add      byte ptr [rax], al }
    /* +0x64370ed */ __asm { add      byte ptr [rax], al }
    /* +0x64370ef */ __asm { add      dl, bh }
    /* +0x64370f1 */ __asm { or       al, 0xfa }
    /* +0x64370f3 */ __asm { or       al, 0xfa }
    /* +0x64370f5 */ __asm { or       al, 0xfa }
    /* +0x64370f7 */ __asm { or       al, 0xfa }
    /* +0x64370f9 */ __asm { or       al, 0xfa }
    /* +0x64370fb */ __asm { or       al, 0xfa }
    /* +0x64370fd */ __asm { or       al, 0xfa }
    /* +0x64370ff */ __asm { or       al, 0xf5 }
    /* +0x6437101 */ __asm { and      al, 0xf5 }
    /* +0x6437103 */ __asm { and      al, 0xf5 }
    /* +0x6437105 */ __asm { and      al, 0xf5 }
    /* +0x6437107 */ __asm { and      al, 0xf5 }
    /* +0x6437109 */ __asm { and      al, 0xf5 }
    /* +0x643710b */ __asm { and      al, 0xf5 }
    /* +0x643710d */ __asm { and      al, 0xf5 }
    /* +0x643710f */ __asm { and      al, 0xf7 }
    /* +0x6437111 */ __asm { xor      dh, bh }
    /* +0x6437113 */ __asm { xor      dh, bh }
    /* +0x6437115 */ __asm { xor      dh, bh }
    /* +0x6437117 */ __asm { xor      dh, bh }
    /* +0x6437119 */ __asm { xor      dh, bh }
    /* +0x643711b */ __asm { xor      dh, bh }
    /* +0x643711d */ __asm { xor      dh, bh }
    /* +0x643711f */ __asm { xor      dh, al }
    /* +0x643712f */ __asm { cli       }
    /* +0x6437131 */ __asm { pop      rbp }
    /* +0x6437132 */ __asm { cli       }
    /* +0x6437133 */ __asm { pop      rbp }
    /* +0x6437134 */ __asm { cli       }
    /* +0x6437135 */ __asm { pop      rbp }
    /* +0x6437136 */ __asm { cli       }
    /* +0x6437137 */ __asm { pop      rbp }
    /* +0x6437138 */ __asm { cli       }
    /* +0x6437139 */ __asm { pop      rbp }
    /* +0x643713a */ __asm { cli       }
    /* +0x643713b */ __asm { pop      rbp }
    /* +0x643713c */ __asm { cli       }
    /* +0x643713d */ __asm { pop      rbp }
    /* +0x643713e */ __asm { cli       }
    /* +0x643713f */ __asm { pop      rbp }
    /* +0x6437140 */ __asm { clc       }
    /* +0x6437141 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x6437142 */ __asm { clc       }
    /* +0x6437143 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x6437144 */ __asm { clc       }
    /* +0x6437145 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x6437146 */ __asm { clc       }
    /* +0x6437147 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x6437148 */ __asm { clc       }
    /* +0x6437149 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x643714a */ __asm { clc       }
    /* +0x643714b */ __asm { insb     byte ptr [rdi], dx }
    /* +0x643714c */ __asm { clc       }
    /* +0x643714d */ __asm { insb     byte ptr [rdi], dx }
    /* +0x643714e */ __asm { clc       }
    /* +0x643714f */ __asm { insb     byte ptr [rdi], dx }
    /* +0x6437151 */ __asm { jnp      0x6437152 }
    /* +0x6437153 */ __asm { jnp      0x6437154 }
    /* +0x6437155 */ __asm { jnp      0x6437156 }
    /* +0x6437157 */ __asm { jnp      0x6437158 }
    /* +0x6437159 */ __asm { jnp      0x643715a }
    /* +0x643715b */ __asm { jnp      0x643715c }
    /* +0x643715d */ __asm { jnp      0x643715e }
    /* +0x643715f */ __asm { jnp      0x64370e1 }
    /* +0x6437161 */ __asm { add      byte ptr [rax - 0x7fff8000], al }
    /* +0x6437167 */ __asm { add      byte ptr [rax - 0x7fff8000], al }
    /* +0x643716d */ __asm { add      byte ptr [rax + 0x7bff7b00], al }
    /* +0x6437174 */ __asm { jnp      0x6437175 }
    /* +0x6437176 */ __asm { jnp      0x6437177 }
    /* +0x6437178 */ __asm { jnp      0x6437179 }
    /* +0x643717a */ __asm { jnp      0x643717b }
    /* +0x643717c */ __asm { jnp      0x643717d }
    /* +0x643717e */ __asm { jnp      0x643717f }
    /* +0x6437180 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x6437181 */ __asm { clc       }
    /* +0x6437182 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x6437183 */ __asm { clc       }
    /* +0x6437184 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x6437185 */ __asm { clc       }
    /* +0x6437186 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x6437187 */ __asm { clc       }
    /* +0x6437188 */ __asm { insb     byte ptr [rdi], dx }
    /* +0x6437189 */ __asm { clc       }
    /* +0x643718a */ __asm { insb     byte ptr [rdi], dx }
    /* +0x643718b */ __asm { clc       }
    /* +0x643718c */ __asm { insb     byte ptr [rdi], dx }
    /* +0x643718d */ __asm { clc       }
    /* +0x643718e */ __asm { insb     byte ptr [rdi], dx }
    /* +0x643718f */ __asm { clc       }
    /* +0x6437190 */ __asm { pop      rbp }
    /* +0x6437191 */ __asm { cli       }
    /* +0x6437192 */ __asm { pop      rbp }
    /* +0x6437193 */ __asm { cli       }
    /* +0x6437194 */ __asm { pop      rbp }
    /* +0x6437195 */ __asm { cli       }
    /* +0x6437196 */ __asm { pop      rbp }
    /* +0x6437197 */ __asm { cli       }
    /* +0x6437198 */ __asm { pop      rbp }
    /* +0x6437199 */ __asm { cli       }
    /* +0x643719a */ __asm { pop      rbp }
    /* +0x643719b */ __asm { cli       }
    /* +0x643719c */ __asm { pop      rbp }
    /* +0x643719d */ __asm { cli       }
    /* +0x643719e */ __asm { pop      rbp }
    /* +0x643719f */ __asm { cli       }
    /* +0x64371b0 */ __asm { xor      dh, bh }
    /* +0x64371b2 */ __asm { xor      dh, bh }
    /* +0x64371b4 */ __asm { xor      dh, bh }
    /* +0x64371b6 */ __asm { xor      dh, bh }
    /* +0x64371b8 */ __asm { xor      dh, bh }
    /* +0x64371ba */ __asm { xor      dh, bh }
    /* +0x64371bc */ __asm { xor      dh, bh }
    /* +0x64371be */ __asm { xor      dh, bh }
    /* +0x64371c0 */ __asm { and      al, 0xf5 }
    /* +0x64371c2 */ __asm { and      al, 0xf5 }
    /* +0x64371c4 */ __asm { and      al, 0xf5 }
    /* +0x64371c6 */ __asm { and      al, 0xf5 }
    /* +0x64371c8 */ __asm { and      al, 0xf5 }
    /* +0x64371ca */ __asm { and      al, 0xf5 }
    /* +0x64371cc */ __asm { and      al, 0xf5 }
    /* +0x64371ce */ __asm { and      al, 0xf5 }
    /* +0x64371d0 */ __asm { or       al, 0xfa }
    /* +0x64371d2 */ __asm { or       al, 0xfa }
    /* +0x64371d4 */ __asm { or       al, 0xfa }
    /* +0x64371d6 */ __asm { or       al, 0xfa }
    /* +0x64371d8 */ __asm { or       al, 0xfa }
    /* +0x64371da */ __asm { or       al, 0xfa }
    /* +0x64371dc */ __asm { or       al, 0xfa }
    /* +0x64371de */ __asm { or       al, 0xfa }
    /* +0x64371e0 */ __asm { add      byte ptr [rax], 0x80 }
    /* +0x64371e3 */ __asm { add      byte ptr [rax - 0x7fff8000], al }
    /* +0x64371e9 */ __asm { add      byte ptr [rax - 0x7fff8000], al }
    /* +0x64371ef */ __asm { add      byte ptr [rax + 0x10], dh }
    /* +0x64371f2 */ __asm { jo       0x6437204 }
    /* +0x64371f4 */ __asm { jo       0x6437206 }
    /* +0x64371f6 */ __asm { jo       0x6437208 }
    /* +0x64371f8 */ __asm { jo       0x643720a }
    /* +0x64371fa */ __asm { jo       0x643720c }
    /* +0x64371fc */ __asm { jo       0x643720e }
    /* +0x64371fe */ __asm { jo       0x6437210 }
}
