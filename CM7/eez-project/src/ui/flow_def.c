#include "flow_def.h"

// ASSETS DEFINITION
const uint8_t assets[409] = {
    0x7E, 0x65, 0x65, 0x7A, 0x03, 0x00, 0x06, 0x00, 0xB8, 0x03, 0x00, 0x00, 0x6E, 0x24, 0x00, 0x00,
    0x00, 0x24, 0x00, 0x01, 0x00, 0x17, 0x20, 0x0C, 0x00, 0x53, 0xE0, 0x01, 0x10, 0x01, 0x01, 0x28,
    0x00, 0x13, 0x01, 0x1C, 0x00, 0x00, 0x08, 0x00, 0xA6, 0x1C, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x34, 0x03, 0x2C, 0x00, 0x13, 0x0C, 0x08, 0x00, 0x10, 0x10, 0x18, 0x00, 0x43, 0x00, 0x00,
    0x00, 0x02, 0x08, 0x00, 0x53, 0x09, 0x00, 0x00, 0x00, 0x30, 0x38, 0x00, 0x13, 0x4C, 0x18, 0x00,
    0x2E, 0x08, 0x03, 0x78, 0x00, 0xF0, 0x1A, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6C, 0x74, 0x00, 0xFF,
    0xFF, 0x08, 0x42, 0x28, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x7C,
    0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0xB4, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0xEC,
    0x64, 0x00, 0x96, 0x01, 0x00, 0x00, 0x38, 0x01, 0x00, 0x00, 0x10, 0x27, 0x40, 0x00, 0x01, 0x70,
    0x00, 0x12, 0x01, 0x68, 0x00, 0x00, 0x08, 0x00, 0x2E, 0xFF, 0xFF, 0x20, 0x00, 0x13, 0x20, 0x20,
    0x00, 0x13, 0x20, 0x20, 0x00, 0x17, 0x11, 0x20, 0x00, 0x00, 0x93, 0x00, 0x13, 0x0C, 0x20, 0x00,
    0x13, 0x10, 0x20, 0x00, 0x1B, 0x12, 0x40, 0x00, 0x17, 0xFC, 0x08, 0x00, 0x0C, 0x40, 0x00, 0x13,
    0x02, 0x9C, 0x00, 0x13, 0x01, 0x08, 0x00, 0x0F, 0x40, 0x00, 0x01, 0x17, 0xD8, 0x08, 0x00, 0x0F,
    0x40, 0x00, 0x01, 0x13, 0xC8, 0x40, 0x00, 0x13, 0xC8, 0x20, 0x00, 0x22, 0xEF, 0x03, 0x10, 0x00,
    0x17, 0xBC, 0x28, 0x01, 0x00, 0x10, 0x00, 0x13, 0xB0, 0x20, 0x00, 0x00, 0x0C, 0x00, 0x26, 0xA8,
    0x00, 0x28, 0x00, 0x1B, 0xA0, 0x28, 0x00, 0x17, 0x94, 0x28, 0x00, 0x13, 0x8C, 0x18, 0x00, 0x1B,
    0x07, 0x78, 0x01, 0x17, 0x78, 0x04, 0x00, 0x17, 0x80, 0x04, 0x00, 0x1B, 0x88, 0x04, 0x00, 0x17,
    0x90, 0x04, 0x00, 0x13, 0x98, 0x6C, 0x00, 0x04, 0x04, 0x00, 0x17, 0xA8, 0x04, 0x00, 0x00, 0x9C,
    0x00, 0x17, 0xB8, 0x04, 0x00, 0x13, 0x00, 0xC0, 0x00, 0x13, 0xC4, 0x94, 0x00, 0x00, 0x08, 0x00,
    0x11, 0xCC, 0x5D, 0x02, 0x03, 0x04, 0x00, 0x08, 0x8D, 0x00, 0x0F, 0x14, 0x00, 0x09, 0x3F, 0x40,
    0x00, 0xE0, 0x2C, 0x00, 0x0D, 0x13, 0x01, 0xC8, 0x00, 0x1F, 0x00, 0x60, 0x00, 0x18, 0x00, 0x34,
    0x00, 0x1F, 0x48, 0x34, 0x00, 0x09, 0x07, 0x28, 0x00, 0x0C, 0x34, 0x03, 0x04, 0x0C, 0x03, 0x13,
    0x1C, 0x1C, 0x03, 0x23, 0x20, 0x00, 0xA8, 0x00, 0x74, 0x40, 0x02, 0x00, 0x00, 0xC0, 0x00, 0xE0,
    0x0C, 0x00, 0x40, 0x01, 0xC0, 0x00, 0xE0, 0x78, 0x01, 0x53, 0x08, 0x00, 0x01, 0x00, 0x10, 0x30,
    0x00, 0x00, 0xE4, 0x02, 0x2F, 0x03, 0x03, 0x68, 0x00, 0x03, 0x08, 0x01, 0x00, 0x04, 0xB0, 0x01,
    0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
