/*  Dumped By       : ZIKA
/*  Dumped With     : ZIKA Dumper
/*  Roblox Version  : version-2c6fd5e09aaf4cfa
/*  Dumper Version  : 4.0.0
/*  Dumped At       : 17:37:33 2026-11-24
/*  Total VM Offsets: 254
*/

#pragma once

#include <cstdint>
#include <string>

// Decryption helper for ScriptContext::GlobalState slots:
//   inline uintptr_t DecryptState(uintptr_t rawQword, uintptr_t fieldAddr) {
//       uint32_t k = static_cast<uint32_t>(fieldAddr & 0xFFFFFFFFULL);
//       return (static_cast<uintptr_t>(static_cast<uint32_t>(rawQword >> 32) ^ k) << 32) |
//              (static_cast<uintptr_t>(static_cast<uint32_t>(rawQword) ^ k));
//   }

namespace BaseLib {
    inline constexpr uintptr_t assert_ = 0x58c7e80; // live gt
    inline constexpr uintptr_t error = 0x58c2f50; // live gt
    inline constexpr uintptr_t getfenv = 0x41dcba0; // live gt
    inline constexpr uintptr_t getmetatable = 0x58c3ea0; // live gt
    inline constexpr uintptr_t newproxy = 0x58c8ad0; // live gt
    inline constexpr uintptr_t next = 0x58c7380; // live gt
    inline constexpr uintptr_t pcall = 0x58c8030; // live gt
    inline constexpr uintptr_t rawequal = 0x58c4d90; // live gt
    inline constexpr uintptr_t rawget = 0x58c4eb0; // live gt
    inline constexpr uintptr_t rawlen = 0x58c5bf0; // live gt
    inline constexpr uintptr_t rawset = 0x58c5440; // live gt
    inline constexpr uintptr_t select = 0x58c7f30; // live gt
    inline constexpr uintptr_t setfenv = 0x41dccf0; // live gt
    inline constexpr uintptr_t setmetatable = 0x58c4040; // live gt
    inline constexpr uintptr_t tonumber = 0x58c2bb0; // live gt
    inline constexpr uintptr_t tostring = 0x58c8a70; // live gt
    inline constexpr uintptr_t type = 0x58c5cb0; // live gt
    inline constexpr uintptr_t typeof = 0x58c6820; // live gt
    inline constexpr uintptr_t xpcall = 0x58c8490; // live gt
    inline constexpr uintptr_t ypcall = 0x58c8030; // live gt
}

namespace Bit32Lib {
    inline constexpr uintptr_t arshift = 0x58ff370;
    inline constexpr uintptr_t band = 0x58feda0;
    inline constexpr uintptr_t bnot = 0x58ff080;
    inline constexpr uintptr_t bor = 0x58fee60;
    inline constexpr uintptr_t btest = 0x58fedd0;
    inline constexpr uintptr_t bxor = 0x58fef70;
    inline constexpr uintptr_t byteswap = 0x58ffc20;
    inline constexpr uintptr_t countlz = 0x58ff960;
    inline constexpr uintptr_t countrz = 0x58ffac0;
    inline constexpr uintptr_t extract = 0x58ff750;
    inline constexpr uintptr_t lrotate = 0x58ff560;
    inline constexpr uintptr_t lshift = 0x58ff110;
    inline constexpr uintptr_t replace = 0x58ff810;
    inline constexpr uintptr_t rrotate = 0x58ff5f0;
    inline constexpr uintptr_t rshift = 0x58ff230;
}

namespace BufferLib {
    inline constexpr uintptr_t copy = 0x58f1020;
    inline constexpr uintptr_t create = 0x58ef480;
    inline constexpr uintptr_t fill = 0x58f1320;
    inline constexpr uintptr_t fromstring = 0x58ef530;
    inline constexpr uintptr_t len = 0x58f0f60;
    inline constexpr uintptr_t readbits = 0x58f1580;
    inline constexpr uintptr_t readf32 = 0x58f23c0;
    inline constexpr uintptr_t readf64 = 0x58f2530;
    inline constexpr uintptr_t readi16 = 0x58f1e00;
    inline constexpr uintptr_t readi32 = 0x58f20e0;
    inline constexpr uintptr_t readi8 = 0x58f1b20;
    inline constexpr uintptr_t readstring = 0x58f0090;
    inline constexpr uintptr_t readu16 = 0x58f1f70;
    inline constexpr uintptr_t readu32 = 0x58f2250;
    inline constexpr uintptr_t readu8 = 0x58f1c90;
    inline constexpr uintptr_t tostring = 0x58ef600;
    inline constexpr uintptr_t writebits = 0x58f17c0;
    inline constexpr uintptr_t writef32 = 0x58f2b20;
    inline constexpr uintptr_t writef64 = 0x58f2cb0;
    inline constexpr uintptr_t writei16 = 0x58f2820;
    inline constexpr uintptr_t writei32 = 0x58f29a0;
    inline constexpr uintptr_t writei8 = 0x58f26a0;
    inline constexpr uintptr_t writestring = 0x58f0cb0;
    inline constexpr uintptr_t writeu16 = 0x58f2820;
    inline constexpr uintptr_t writeu32 = 0x58f29a0;
    inline constexpr uintptr_t writeu8 = 0x58f26a0;
}

namespace CallInfo {
    inline constexpr uintptr_t base = 0x10;
    inline constexpr uintptr_t func = 0x8;
    inline constexpr uintptr_t top = 0x18;
}

namespace Closure {
    inline constexpr uintptr_t c_func = 0x28;
    inline constexpr uintptr_t debugname = 0x18;
    inline constexpr uintptr_t env = 0x10;
    inline constexpr uintptr_t isC = 0x6;
    inline constexpr uintptr_t marked = 0x0;
    inline constexpr uintptr_t nupvalues = 0x5;
    inline constexpr uintptr_t proto = 0x18;
    inline constexpr uintptr_t tt = 0x1;
    inline constexpr uintptr_t uprefs = 0x2c;
    inline constexpr uintptr_t upvals = 0x40;
}

namespace CoroutineLib {
    inline constexpr uintptr_t close = 0x58f9b60;
    inline constexpr uintptr_t create = 0x58f7dc0;
    inline constexpr uintptr_t finally = 0x58fb060;
    inline constexpr uintptr_t isyieldable = 0x58f8730;
    inline constexpr uintptr_t resume = 0x58f66e0;
    inline constexpr uintptr_t running = 0x58f86b0;
    inline constexpr uintptr_t status = 0x58f5860;
    inline constexpr uintptr_t wrap = 0x58f8380;
    inline constexpr uintptr_t yield = 0x58f8650;
}

namespace DebugLib {
    inline constexpr uintptr_t dumpcodesize = 0x42a6360;
    inline constexpr uintptr_t dumpheap = 0x42a6330;
    inline constexpr uintptr_t dumprefs = 0x42a6340;
    inline constexpr uintptr_t getmemorycategory = 0x42a61d0;
    inline constexpr uintptr_t info = 0x58f3380;
    inline constexpr uintptr_t loadmodule = 0x42a61c0;
    inline constexpr uintptr_t profilebegin = 0x42a5f30;
    inline constexpr uintptr_t profileend = 0x42a6060;
    inline constexpr uintptr_t resetmemorycategory = 0x42a6210;
    inline constexpr uintptr_t setmemorycategory = 0x42a6200;
    inline constexpr uintptr_t traceback = 0x58f5660;
    inline constexpr uintptr_t tracerefs = 0x42a6350;
}

namespace Env {
    inline constexpr uintptr_t collectgarbage = 0x41d82a0; // live gt
    inline constexpr uintptr_t delay = 0x41d8bb0; // live gt
    inline constexpr uintptr_t elapsedTime = 0x41d9350; // live gt
    inline constexpr uintptr_t loadstring = 0x41d93e0; // live gt
    inline constexpr uintptr_t print = 0x41da010; // live gt
    inline constexpr uintptr_t printidentity = 0x41da030; // live gt
    inline constexpr uintptr_t require = 0x41da130; // live gt
    inline constexpr uintptr_t spawn = 0x41dac20; // live gt
    inline constexpr uintptr_t tick = 0x41db960; // live gt
    inline constexpr uintptr_t time = 0x41db9e0; // live gt
    inline constexpr uintptr_t wait = 0x41dc170; // live gt
    inline constexpr uintptr_t warn = 0x41dc360; // live gt
}

namespace ExtraSpace {
    inline constexpr uintptr_t IdentityObj = 0x28;
    inline constexpr uintptr_t ScriptContext = 0x18;
}

namespace IdentityObj {
    inline constexpr uintptr_t CapabilitiesPtr = 0x8;
    inline constexpr uintptr_t Identity = 0x0;
}

namespace LocalScript {
    inline constexpr uintptr_t Archivable = 0x92; // reflection getter
    inline constexpr uintptr_t CachedRemoteSource = 0xa0; // reflection getter
    inline constexpr uintptr_t CachedRemoteSourceLoadState = 0xd8; // reflection getter
    inline constexpr uintptr_t Enabled = 0x11c; // reflection getter
    inline constexpr uintptr_t GUID = 0xb8;
    inline constexpr uintptr_t HasAssociatedDrafts = 0xdc; // reflection getter
    inline constexpr uintptr_t Hash = 0x188;
    inline constexpr uintptr_t LinkedSource = 0xf0; // reflection getter
    inline constexpr uintptr_t SandboxedSource = 0xe0; // reflection getter
    inline constexpr uintptr_t ScriptGuid = 0xb8; // reflection getter
    inline constexpr uintptr_t Source = 0x170; // reflection getter
}

namespace LuaVM {
    inline constexpr uintptr_t frealloc = 0x41b5bf0; // live global_State
    inline constexpr uintptr_t luaO_nilobject = 0x67dbca8; // from rawlen
    inline constexpr uintptr_t luavm_load = 0x25781d0; // signature verified
}

namespace Luau {
    inline constexpr uintptr_t BoolType = 0x1;
    inline constexpr uintptr_t FunctionType = 0x7;
    inline constexpr uintptr_t NilType = 0x0;
    inline constexpr uintptr_t NumberType = 0x3;
    inline constexpr uintptr_t StringType = 0x5;
    inline constexpr uintptr_t TValueSize = 0x10;
    inline constexpr uintptr_t TValueTag = 0xc;
    inline constexpr uintptr_t TableType = 0x6;
    inline constexpr uintptr_t ThreadType = 0x9;
    inline constexpr uintptr_t UserdataType = 0x8;
}

namespace ModuleScript {
    inline constexpr uintptr_t Archivable = 0x92; // reflection getter
    inline constexpr uintptr_t CachedRemoteSource = 0xa0; // reflection getter
    inline constexpr uintptr_t CachedRemoteSourceLoadState = 0xd8; // reflection getter
    inline constexpr uintptr_t GUID = 0xb8;
    inline constexpr uintptr_t HasAssociatedDrafts = 0xdc; // reflection getter
    inline constexpr uintptr_t LinkedSource = 0xf0; // reflection getter
    inline constexpr uintptr_t SandboxedSource = 0xe0; // reflection getter
    inline constexpr uintptr_t ScriptGuid = 0xb8; // reflection getter
    inline constexpr uintptr_t Source = 0x118; // reflection getter
}

namespace OsLib {
    inline constexpr uintptr_t clock = 0x42a8fd0;
    inline constexpr uintptr_t date = 0x58d3f70;
    inline constexpr uintptr_t difftime = 0x58d49a0;
    inline constexpr uintptr_t time = 0x58d4680;
}

namespace Script {
    inline constexpr uintptr_t Archivable = 0x92; // reflection getter
    inline constexpr uintptr_t CachedRemoteSource = 0xa0; // reflection getter
    inline constexpr uintptr_t CachedRemoteSourceLoadState = 0xd8; // reflection getter
    inline constexpr uintptr_t Enabled = 0x11c; // reflection getter
    inline constexpr uintptr_t HasAssociatedDrafts = 0xdc; // reflection getter
    inline constexpr uintptr_t LinkedSource = 0xf0; // reflection getter
    inline constexpr uintptr_t SandboxedSource = 0xe0; // reflection getter
    inline constexpr uintptr_t ScriptGuid = 0xb8; // reflection getter
    inline constexpr uintptr_t Source = 0x170; // reflection getter
}

namespace ScriptContext {
    inline constexpr uintptr_t Archivable = 0x92; // reflection getter
    inline constexpr uintptr_t DefinesCapabilities = 0x92; // reflection getter
    inline constexpr uintptr_t GlobalState0 = 0x418; // XOR_ADDR32 encrypted
    inline constexpr uintptr_t GlobalState1 = 0x708; // elevated VM state
    inline constexpr uintptr_t GlobalStateStride = 0x2f0;
    inline constexpr uintptr_t Name = 0x68; // reflection getter
    inline constexpr uintptr_t Parent = 0x118; // reflection getter
    inline constexpr uintptr_t StateContainerOffset = 0x190;
}

namespace StringLib {
    inline constexpr uintptr_t byte = 0x58d6e60;
    inline constexpr uintptr_t char_ = 0x58d70f0;
    inline constexpr uintptr_t find = 0x58d97a0;
    inline constexpr uintptr_t format = 0x58dbff0;
    inline constexpr uintptr_t gmatch = 0x58d9ad0;
    inline constexpr uintptr_t gsub = 0x58db620;
    inline constexpr uintptr_t len = 0x58d4b60;
    inline constexpr uintptr_t lower = 0x58d6180;
    inline constexpr uintptr_t match = 0x58d97b0;
    inline constexpr uintptr_t pack = 0x58e1110;
    inline constexpr uintptr_t packsize = 0x58e1a80;
    inline constexpr uintptr_t rep = 0x58d6440;
    inline constexpr uintptr_t reverse = 0x58d6030;
    inline constexpr uintptr_t split = 0x58dc580;
    inline constexpr uintptr_t sub = 0x58d4c10;
    inline constexpr uintptr_t unpack = 0x58e1df0;
    inline constexpr uintptr_t upper = 0x58d62e0;
}

namespace TString {
    inline constexpr uintptr_t data = 0x18;
    inline constexpr uintptr_t hash = 0x10;
    inline constexpr uintptr_t len = 0x14;
    inline constexpr uintptr_t tt = 0x1;
}

namespace Table {
    inline constexpr uintptr_t NodeKey = 0x10;
    inline constexpr uintptr_t NodeKeyTag = 0x1c;
    inline constexpr uintptr_t NodeStride = 0x20;
    inline constexpr uintptr_t array = 0x20;
    inline constexpr uintptr_t lsizenode = 0x4;
    inline constexpr uintptr_t node = 0x28;
    inline constexpr uintptr_t readonly = 0x6;
    inline constexpr uintptr_t sizearray = 0xc;
    inline constexpr uintptr_t tt = 0x1;
}

namespace TableLib {
    inline constexpr uintptr_t clear = 0x58c1560;
    inline constexpr uintptr_t clone = 0x58c17c0;
    inline constexpr uintptr_t concat = 0x58bdfb0;
    inline constexpr uintptr_t create = 0x58c07a0;
    inline constexpr uintptr_t find = 0x58c0fa0;
    inline constexpr uintptr_t foreach = 0x58ba7c0;
    inline constexpr uintptr_t foreachi = 0x58b9a40;
    inline constexpr uintptr_t freeze = 0x58c15b0;
    inline constexpr uintptr_t getn = 0x58bbc30;
    inline constexpr uintptr_t insert = 0x58bce90;
    inline constexpr uintptr_t isfrozen = 0x58c1710;
    inline constexpr uintptr_t maxn = 0x58bb960;
    inline constexpr uintptr_t move = 0x58bd3b0;
    inline constexpr uintptr_t pack = 0x58be2e0;
    inline constexpr uintptr_t remove = 0x58bd030;
    inline constexpr uintptr_t sort = 0x58c0610;
    inline constexpr uintptr_t unpack = 0x58bef50;
}

namespace Task {
    inline constexpr uintptr_t cancel = 0x4212da0; // live task
    inline constexpr uintptr_t defer = 0x4211e10; // live task
    inline constexpr uintptr_t delay = 0x42127e0; // live task
    inline constexpr uintptr_t desynchronize = 0x42110d0; // live task
    inline constexpr uintptr_t spawn = 0x42122e0; // live task
    inline constexpr uintptr_t synchronize = 0x4210b70; // live task
    inline constexpr uintptr_t wait = 0x4212ad0; // live task
}

namespace Utf8Lib {
    inline constexpr uintptr_t char_ = 0x58cec70;
    inline constexpr uintptr_t codepoint = 0x58ce8c0;
    inline constexpr uintptr_t codes = 0x58cfee0;
    inline constexpr uintptr_t graphemes = 0x42a6650;
    inline constexpr uintptr_t len = 0x58ce5c0;
    inline constexpr uintptr_t nfcnormalize = 0x42a6ec0;
    inline constexpr uintptr_t nfdnormalize = 0x42a7e20;
    inline constexpr uintptr_t offset = 0x58cf970;
}

namespace VMInternals {
    inline constexpr uintptr_t get_identity_ptr_or_helper = 0x2569bb0;
    inline constexpr uintptr_t luaD_growstack_or_err = 0x77e45b; // string XREF
    inline constexpr uintptr_t luaD_pcall = 0x255b8f0; // from pcall
    inline constexpr uintptr_t luaD_protectedparser = 0x2576d60;
    inline constexpr uintptr_t luaD_rawrunprotected = 0x2551b80;
    inline constexpr uintptr_t luaD_throw = 0x2551bb0;
    inline constexpr uintptr_t luaF_newLclosure_inlined = 0x257b8f1;
    inline constexpr uintptr_t luaH_get = 0x2582180; // shared rawget/rawset
    inline constexpr uintptr_t luaH_getn = 0x2582460; // from rawlen
    inline constexpr uintptr_t luaL_argerrorL = 0x254cba0; // from rawlen
    inline constexpr uintptr_t luaL_typeerrorL = 0x254b930; // shared rawget/rawset
    inline constexpr uintptr_t luaM_newgco = 0x25a8e40;
    inline constexpr uintptr_t luaS_hash = 0x2581bc0; // MurmurHash3 constant
    inline constexpr uintptr_t lua_setmetatable_impl = 0x255e420; // from setmetatable
}

namespace global_State {
    inline constexpr uintptr_t GCthreshold = 0x38;
    inline constexpr uintptr_t OffsetFromMainThread = 0x90;
    inline constexpr uintptr_t frealloc = 0x20;
    inline constexpr uintptr_t totalbytes = 0x30;
}

namespace lua_State {
    inline constexpr uintptr_t base = 0x78;
    inline constexpr uintptr_t ci = 0x58;
    inline constexpr uintptr_t global = 0x68;
    inline constexpr uintptr_t gt = 0x50;
    inline constexpr uintptr_t marked = 0x0;
    inline constexpr uintptr_t stack = 0x70;
    inline constexpr uintptr_t top = 0x80;
    inline constexpr uintptr_t tt = 0x1;
    inline constexpr uintptr_t userdata = 0x48;
}

