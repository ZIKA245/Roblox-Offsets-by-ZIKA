/*  Dumped By       : ZIKA
/*  Dumped With     : ZIKA Dumper
/*  Roblox Version  : version-2c6fd5e09aaf4cfa
/*  Dumper Version  : 4.0.0
/*  Dumped At       : 17:37:33 2026-11-24
/*  Total Structs   : 14
*/

#pragma once

#include <cstdint>
#include <string>

namespace ZikaStructs {

struct TValue {
    uint64_t value; // 0x0
    int32_t extra; // 0x8
    int32_t tt; // 0xc
};

struct TString {
    uint8_t marked; // 0x0
    uint8_t tt; // 0x1
    uint8_t memcat; // 0x2
    uint8_t _pad_0[0xd];
    uint32_t hash; // 0x10
    uint32_t len; // 0x14
    char data[1]; // 0x18
    uint8_t _pad_tail[0x7];
};

struct Table {
    uint8_t marked; // 0x0
    uint8_t tt; // 0x1
    uint8_t _pad_0[0x2];
    uint8_t lsizenode; // 0x4
    uint8_t _pad_1[0x1];
    uint8_t readonly; // 0x6
    uint8_t _pad_2[0x5];
    uint32_t sizearray; // 0xc
    uint8_t _pad_3[0x10];
    TValue* array; // 0x20
    uintptr_t node; // 0x28
    uint8_t _pad_tail[0x8];
};

struct Closure {
    uint8_t marked; // 0x0
    uint8_t tt; // 0x1
    uint8_t _pad_0[0x4];
    uint8_t isC; // 0x6
    uint8_t _pad_1[0x9];
    Table* env; // 0x10
    uintptr_t protoOrName; // 0x18
    uint8_t _pad_2[0x8];
    uintptr_t cFunc; // 0x28
    uint8_t _pad_tail[0x18];
};

struct IdentityObj {
    uint64_t identity; // 0x0
    uintptr_t capabilitiesDescriptor; // 0x8
    uint8_t _pad_tail[0x20];
};

struct RobloxExtraSpace {
    uint8_t _pad_0[0x18];
    uintptr_t scriptContext; // 0x18
    uint8_t _pad_1[0x8];
    IdentityObj* identityObj; // 0x28
    uint8_t _pad_tail[0x90];
};

struct lua_State {
    uint8_t marked; // 0x0
    uint8_t tt; // 0x1
    uint8_t _pad_0[0x46];
    RobloxExtraSpace* userdata; // 0x48
    Table* gt; // 0x50
    uintptr_t ci; // 0x58
    uint8_t _pad_1[0x8];
    uintptr_t global; // 0x68
    TValue* stack; // 0x70
    TValue* base; // 0x78
    TValue* top; // 0x80
    uint8_t _pad_tail[0x8];
};

struct global_State {
    uint8_t _pad_0[0x20];
    uintptr_t frealloc; // 0x20
    uint8_t _pad_1[0x8];
    uint64_t totalbytes; // 0x30
    uint64_t GCthreshold; // 0x38
    uint8_t _pad_2[0x10];
    lua_State* mainthread; // 0x50
    uint8_t _pad_tail[0x8];
};

struct ProtectedString {
    uint8_t _pad_0[0x18];
    const uint8_t* data; // 0x18
    uint8_t _pad_1[0x8];
    uint64_t size; // 0x28
    uint64_t capacity; // 0x30
};

struct Instance {
    uint8_t _pad_0[0x8];
    uintptr_t self; // 0x8
    uint8_t _pad_1[0x8];
    uintptr_t classDescriptor; // 0x18
    uint8_t _pad_2[0x40];
    uintptr_t parent; // 0x60
    uintptr_t namePtr; // 0x68
    uintptr_t childrenContainer; // 0x70
    uint8_t _pad_tail[0x8];
};

struct ClassDescriptor {
    uintptr_t vtable; // 0x0
    uintptr_t className; // 0x8
    uint8_t _pad_0[0x30];
    uintptr_t propertyDescriptors; // 0x40
    uint64_t propertyCount; // 0x48
    uint8_t _pad_1[0x38];
    uintptr_t eventDescriptors; // 0x88
    uint64_t eventCount; // 0x90
    uint8_t _pad_2[0x38];
    uintptr_t functionDescriptors; // 0xd0
    uint64_t functionCount; // 0xd8
    uint8_t _pad_3[0x38];
    uintptr_t yieldFunctionDescriptors; // 0x118
    uint64_t yieldFunctionCount; // 0x120
    uint8_t _pad_4[0x38];
    uintptr_t callbackDescriptors; // 0x160
    uint8_t _pad_5[0x50];
    uintptr_t superClass; // 0x1b8
    uint8_t _pad_6[0x10];
    uintptr_t derivedClasses; // 0x1d0
};

struct Primitive {
    uint8_t _pad_0[0xb0];
    float rotation[9]; // 0xb0
    float position[3]; // 0xd4
    float linearVelocity[3]; // 0xe0
    float angularVelocity[3]; // 0xec
    uint8_t _pad_1[0xc6];
    uint8_t flags; // 0x1be
    uint8_t _pad_2[0x5];
    float size[3]; // 0x1c4
    uint8_t _pad_3[0x50];
    uintptr_t owner; // 0x220
    uint8_t _pad_4[0x2e];
    uint16_t material; // 0x256
    uint8_t _pad_tail[0x8];
};

struct VisualEngine {
    uint8_t _pad_0[0x1b0];
    float viewMatrix[16]; // 0x1b0
    uint8_t _pad_1[0x900];
    uintptr_t fakeDataModel; // 0xaf0
    uint8_t _pad_2[0x18];
    float dimensions[2]; // 0xb10
    uint8_t _pad_3[0x138];
    uintptr_t renderView; // 0xc50
    uint8_t _pad_tail[0x8];
};

struct TaskScheduler {
    uint8_t _pad_0[0xb0];
    double frameDelay; // 0xb0
    uint8_t _pad_1[0x10];
    uintptr_t jobStart; // 0xc8
    uintptr_t jobEnd; // 0xd0
    uint8_t _pad_tail[0x8];
};

} // namespace ZikaStructs
