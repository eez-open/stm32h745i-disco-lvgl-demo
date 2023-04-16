#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMG_LIGHT_BULB
#define LV_ATTRIBUTE_IMG_IMG_LIGHT_BULB
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_LIGHT_BULB uint8_t img_light_bulb_map[] = {
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 
    0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00, 0x75, 0x08, 0x06, 
    0x00, 0x00, 0x00, 0x2c, 0xa2, 0x2f, 0xdd, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 
    0x47, 0x42, 0x00, 0xae, 0xce, 0x1c, 0xe9, 0x00, 0x00, 0x11, 0x6e, 0x49, 0x44, 
    0x41, 0x54, 0x78, 0x5e, 0xed, 0x9d, 0x7f, 0x74, 0x94, 0xd5, 0x99, 0xc7, 0x9f, 
    0xe7, 0xde, 0xf7, 0x9d, 0x99, 0x24, 0x84, 0xf0, 0x43, 0x22, 0xee, 0xa2, 0x56, 
    0x2c, 0xfe, 0x28, 0x28, 0xeb, 0x96, 0x53, 0x51, 0xd7, 0x15, 0x0e, 0xd6, 0xb5, 
    0xfe, 0x20, 0x41, 0x28, 0x25, 0x01, 0x97, 0xa3, 0xab, 0xd5, 0x26, 0x0b, 0x4d, 
    0x59, 0x5b, 0x57, 0x5b, 0xea, 0x20, 0x15, 0xed, 0xe1, 0x08, 0x82, 0x04, 0x61, 
    0xdb, 0x03, 0x8a, 0x12, 0x6a, 0x44, 0x08, 0x55, 0xdb, 0x9e, 0x15, 0x15, 0xb1, 
    0x1e, 0xdd, 0x5a, 0xe9, 0x39, 0xba, 0x62, 0x59, 0x60, 0x5b, 0x74, 0x3d, 0x82, 
    0x84, 0x1f, 0x39, 0x09, 0x43, 0x66, 0xde, 0xf7, 0xde, 0x67, 0xcf, 0x4d, 0x27, 
    0x34, 0x84, 0x24, 0xcc, 0x3b, 0xf3, 0xce, 0xcc, 0xcb, 0xe4, 0x79, 0xff, 0x83, 
    0xdc, 0xe7, 0xc7, 0xfd, 0x3c, 0xf7, 0x7b, 0xde, 0x77, 0xee, 0x7b, 0xdf, 0x7b, 
    0x11, 0xf8, 0x62, 0x02, 0x4c, 0x20, 0x6b, 0x04, 0x30, 0x6b, 0x9e, 0xd9, 0x31, 
    0x13, 0x60, 0x02, 0xc0, 0x02, 0xe3, 0x41, 0xc0, 0x04, 0xb2, 0x48, 0x80, 0x05, 
    0x96, 0x45, 0xb8, 0xec, 0x9a, 0x09, 0xb0, 0xc0, 0x78, 0x0c, 0x30, 0x81, 0x2c, 
    0x12, 0x60, 0x81, 0x65, 0x11, 0x6e, 0xae, 0x5c, 0xbb, 0xae, 0x3b, 0x55, 0x29, 
    0xb5, 0x3b, 0x1c, 0x0e, 0x7f, 0x90, 0xab, 0x98, 0x1c, 0x27, 0x35, 0x02, 0x2c, 
    0xb0, 0xd4, 0x38, 0x05, 0xba, 0x95, 0x52, 0xea, 0x3e, 0xad, 0xf5, 0xef, 0x6d, 
    0xdb, 0xde, 0x16, 0xe8, 0x44, 0xfb, 0x61, 0x72, 0x2c, 0xb0, 0x02, 0x28, 0x3a, 
    0x0b, 0x2c, 0xb8, 0x45, 0x64, 0x81, 0x05, 0xb7, 0x36, 0x29, 0x67, 0xc6, 0x02, 
    0x4b, 0x19, 0x55, 0xce, 0x1b, 0xb2, 0xc0, 0x72, 0x8e, 0xdc, 0xff, 0x80, 0x2c, 
    0x30, 0xff, 0x99, 0xfa, 0xe5, 0x91, 0x05, 0xe6, 0x17, 0xc9, 0x3c, 0xfa, 0x61, 
    0x81, 0xe5, 0x11, 0xfe, 0x69, 0x42, 0xb3, 0xc0, 0x82, 0x5b, 0x9b, 0x94, 0x33, 
    0x63, 0x81, 0xa5, 0x8c, 0x2a, 0xe7, 0x0d, 0x59, 0x60, 0x39, 0x47, 0xee, 0x7f, 
    0x40, 0xd7, 0x75, 0x67, 0x6a, 0xad, 0xff, 0x18, 0x0a, 0x85, 0xde, 0xf7, 0xdf, 
    0x3b, 0x7b, 0xcc, 0x84, 0x00, 0x0b, 0x2c, 0x13, 0x7a, 0x6c, 0xcb, 0x04, 0xf8, 
    0x11, 0x31, 0xbf, 0x63, 0x80, 0x88, 0x50, 0x6b, 0xfd, 0x9c, 0x52, 0x6a, 0x59, 
    0x28, 0x14, 0xfa, 0x5d, 0x7e, 0xb3, 0x49, 0x2f, 0x3a, 0x11, 0x55, 0x6a, 0xad, 
    0x2f, 0x96, 0x52, 0xfe, 0x34, 0x3d, 0x0f, 0xfd, 0xd7, 0x8a, 0xef, 0x60, 0x39, 
    0xa8, 0x7d, 0x2c, 0x16, 0x3b, 0x37, 0x12, 0x89, 0xbc, 0xa4, 0x94, 0x9a, 0x6b, 
    0xdb, 0xf6, 0xf6, 0x1c, 0x84, 0xf4, 0x2d, 0x84, 0xeb, 0xba, 0x55, 0x42, 0x88, 
    0xba, 0xe6, 0xe6, 0xe6, 0x49, 0xe5, 0xe5, 0xe5, 0x6d, 0xbe, 0x39, 0xee, 0x27, 
    0x8e, 0x58, 0x60, 0x39, 0x2a, 0x74, 0x6b, 0x6b, 0x6b, 0x79, 0x49, 0x49, 0xc9, 
    0xbb, 0xf1, 0x78, 0x7c, 0x62, 0x51, 0x51, 0xd1, 0xbe, 0x1c, 0x85, 0xcd, 0x28, 
    0x8c, 0xe3, 0x38, 0x37, 0x48, 0x29, 0x1f, 0xdb, 0xb1, 0x63, 0xc7, 0x95, 0xe3, 
    0xc6, 0x8d, 0x73, 0x32, 0x72, 0xd6, 0x4f, 0x8d, 0x59, 0x60, 0x39, 0x2c, 0x7c, 
    0x3c, 0x1e, 0xbf, 0xcc, 0xb6, 0xed, 0x17, 0x5d, 0xd7, 0x9d, 0x15, 0xf4, 0xc7, 
    0x45, 0xf3, 0x58, 0x48, 0x44, 0xf3, 0x11, 0xb1, 0x02, 0x11, 0xff, 0x2f, 0x87, 
    0x98, 0x0a, 0x2a, 0x14, 0x0b, 0x2c, 0xc7, 0xe5, 0x8c, 0xc5, 0x62, 0xe7, 0x25, 
    0x1f, 0x17, 0xef, 0xb5, 0x6d, 0xfb, 0x1d, 0x3f, 0xc2, 0x13, 0x91, 0x04, 0x00, 
    0x42, 0x44, 0xed, 0x93, 0xbf, 0xdb, 0x88, 0xe8, 0xdf, 0x0f, 0x1d, 0x3a, 0x34, 
    0x69, 0xd8, 0xb0, 0x61, 0xad, 0x7e, 0xf8, 0xec, 0xaf, 0x3e, 0x58, 0x60, 0x79, 
    0xa8, 0x7c, 0x5b, 0x5b, 0xdb, 0xf0, 0xa2, 0xa2, 0xa2, 0x25, 0x52, 0xca, 0xea, 
    0x74, 0xc2, 0xb7, 0xb6, 0xb6, 0x0e, 0x2b, 0x2e, 0x2e, 0xbe, 0x0d, 0x11, 0xbf, 
    0x0d, 0x00, 0x5f, 0x01, 0x80, 0x44, 0xd2, 0x8f, 0x05, 0x00, 0x9f, 0x12, 0x51, 
    0xbd, 0xe3, 0x38, 0xaf, 0x44, 0x22, 0x91, 0xff, 0x4d, 0xc7, 0xbf, 0xd6, 0xfa, 
    0x85, 0x9d, 0x3b, 0x77, 0xce, 0x1c, 0x33, 0x66, 0x4c, 0xa7, 0xdf, 0x74, 0xdc, 
    0xb0, 0x0d, 0x00, 0x7f, 0xd1, 0x9c, 0xaf, 0x51, 0x10, 0x8d, 0x46, 0x45, 0x34, 
    0x1a, 0x4d, 0xf9, 0x8e, 0x93, 0x48, 0x24, 0xc6, 0x49, 0x29, 0xbf, 0x83, 0x88, 
    0xd7, 0x01, 0xc0, 0xb9, 0x00, 0x60, 0xee, 0x5a, 0xc7, 0x00, 0xa0, 0x08, 0x00, 
    0x3a, 0x7f, 0x1f, 0x85, 0x00, 0x20, 0x06, 0x00, 0x25, 0x49, 0xd1, 0x19, 0xb1, 
    0xfd, 0x56, 0x29, 0xb5, 0xd2, 0xcb, 0x3b, 0x32, 0x33, 0xf3, 0x89, 0x88, 0x94, 
    0x2f, 0x36, 0x85, 0x14, 0x97, 0xef, 0x60, 0x01, 0xaf, 0x26, 0x11, 0x7d, 0x8d, 
    0x88, 0x7e, 0x00, 0x00, 0x37, 0x03, 0x80, 0x0d, 0x00, 0xdb, 0x88, 0xe8, 0x33, 
    0x22, 0xfa, 0x85, 0x94, 0xf2, 0xfd, 0x05, 0x0b, 0x16, 0x34, 0x77, 0x11, 0x2a, 
    0x12, 0xd1, 0xd9, 0x00, 0x70, 0x95, 0xd6, 0xfa, 0x06, 0x44, 0xbc, 0x04, 0x00, 
    0xc6, 0x9b, 0xc7, 0x47, 0x00, 0x78, 0x0d, 0x11, 0x7f, 0x8c, 0x88, 0x7f, 0x08, 
    0x78, 0x97, 0x0b, 0x2a, 0x3d, 0x16, 0x58, 0x80, 0xcb, 0xa9, 0x94, 0x7a, 0x1c, 
    0x11, 0xe7, 0x00, 0x80, 0x22, 0xa2, 0xcd, 0xe9, 0x3c, 0x52, 0xee, 0xdf, 0xbf, 
    0xbf, 0xa4, 0xbc, 0xbc, 0xfc, 0xd7, 0x00, 0x70, 0xa5, 0x11, 0x1a, 0x11, 0xfd, 
    0x4c, 0x4a, 0x69, 0x7c, 0xf2, 0x95, 0x03, 0x02, 0x2c, 0xb0, 0x1c, 0x40, 0xf6, 
    0x1a, 0x82, 0x88, 0x4a, 0x89, 0x68, 0x03, 0x00, 0x4c, 0x44, 0xc4, 0xd7, 0x01, 
    0x60, 0x11, 0x22, 0xa6, 0x3d, 0x21, 0x62, 0x1e, 0xf9, 0x00, 0xe0, 0x1a, 0x22, 
    0x7a, 0x02, 0x00, 0xcc, 0x5d, 0xed, 0x3d, 0x44, 0x9c, 0x8c, 0x88, 0x3c, 0x81, 
    0xe1, 0xb5, 0x38, 0x1e, 0xdb, 0xb3, 0xc0, 0x3c, 0x02, 0xcb, 0x76, 0x73, 0x22, 
    0xfa, 0x12, 0x11, 0xbd, 0x01, 0x00, 0x23, 0x88, 0xe8, 0xfb, 0x52, 0x4a, 0x23, 
    0x0a, 0xdf, 0x2e, 0xa5, 0xd4, 0x03, 0x88, 0xf8, 0x30, 0x00, 0xbc, 0x83, 0x88, 
    0xb3, 0x10, 0xf1, 0x13, 0xdf, 0x9c, 0xb3, 0xa3, 0x53, 0x08, 0xb0, 0xc0, 0x02, 
    0x34, 0x28, 0x0e, 0x1d, 0x3a, 0x34, 0x70, 0xf0, 0xe0, 0xc1, 0x66, 0xe6, 0x2f, 
    0xe2, 0xba, 0xee, 0x84, 0x50, 0x28, 0xf4, 0xfb, 0x6c, 0xa4, 0x47, 0x44, 0x17, 
    0x01, 0xc0, 0x07, 0x44, 0xd4, 0x2c, 0x84, 0x18, 0x91, 0x8d, 0x18, 0xec, 0xf3, 
    0x2f, 0x04, 0x58, 0x60, 0x01, 0x19, 0x09, 0x44, 0x14, 0x26, 0x22, 0xb3, 0x69, 
    0xcd, 0x79, 0xe6, 0xe5, 0x6e, 0x72, 0x52, 0x42, 0x65, 0x23, 0x3d, 0xf3, 0xde, 
    0xcc, 0x75, 0xdd, 0x49, 0x52, 0xca, 0x97, 0x01, 0xe0, 0x37, 0x88, 0x38, 0x1d, 
    0x11, 0xdb, 0xb3, 0x11, 0xab, 0xbf, 0xfb, 0x64, 0x81, 0x05, 0x60, 0x04, 0x10, 
    0x51, 0x48, 0x6b, 0x3d, 0x17, 0x11, 0x17, 0x12, 0x51, 0x9d, 0x94, 0x72, 0x75, 
    0x2e, 0xd2, 0x72, 0x5d, 0xf7, 0x6e, 0x21, 0xc4, 0x0a, 0x22, 0x5a, 0x20, 0xa5, 
    0x5c, 0x94, 0x8b, 0x98, 0xfd, 0x2d, 0x06, 0x0b, 0x2c, 0x00, 0x15, 0x27, 0xa2, 
    0xbb, 0x01, 0x60, 0xb5, 0xd6, 0xfa, 0x11, 0x29, 0xe5, 0xfc, 0x5c, 0xa6, 0xa4, 
    0x94, 0xfa, 0x19, 0x22, 0xde, 0xa1, 0xb5, 0x9e, 0x6c, 0x59, 0xd6, 0xaf, 0x72, 
    0x19, 0xbb, 0x3f, 0xc4, 0x62, 0x81, 0xe5, 0xb9, 0xca, 0x66, 0x86, 0x8f, 0x88, 
    0x3e, 0x02, 0x80, 0x21, 0x88, 0x78, 0x15, 0x22, 0xfe, 0x29, 0x97, 0x29, 0x11, 
    0xd1, 0xb9, 0x44, 0xf4, 0x5f, 0x00, 0x70, 0x40, 0x08, 0x71, 0x45, 0x2e, 0x63, 
    0xf7, 0x87, 0x58, 0x2c, 0xb0, 0x3c, 0x57, 0x99, 0x88, 0xee, 0x30, 0x4b, 0x9b, 
    0x88, 0x68, 0x95, 0x94, 0x72, 0x5e, 0x3e, 0xd2, 0x31, 0x2f, 0xb2, 0x89, 0xe8, 
    0x61, 0xad, 0xf5, 0x37, 0x2d, 0xcb, 0x7a, 0x29, 0x1f, 0x39, 0x14, 0x6a, 0x4c, 
    0x16, 0x58, 0x1e, 0x2b, 0x4b, 0x44, 0x36, 0x11, 0xbd, 0x69, 0x26, 0x36, 0xf2, 
    0x3d, 0x9b, 0xa7, 0xb5, 0xfe, 0x0c, 0x00, 0x3e, 0x46, 0xc4, 0xaf, 0xf3, 0x32, 
    0x29, 0xff, 0x06, 0x05, 0x0b, 0xcc, 0x3f, 0x96, 0x9e, 0x3d, 0x25, 0x57, 0xd6, 
    0xef, 0x42, 0xc4, 0xe5, 0x88, 0x78, 0xbf, 0x67, 0x07, 0x3e, 0x1a, 0x10, 0xd1, 
    0x52, 0x22, 0xfa, 0x36, 0x22, 0x0e, 0xe7, 0x17, 0xd0, 0xfe, 0x81, 0x65, 0x81, 
    0xf9, 0xc7, 0xd2, 0xb3, 0x27, 0xa5, 0xd4, 0x93, 0x66, 0x45, 0xbc, 0xe3, 0x38, 
    0x57, 0x84, 0xc3, 0xe1, 0x9d, 0x9e, 0x1d, 0xf8, 0x68, 0xe0, 0x38, 0xce, 0x35, 
    0x96, 0x65, 0x6d, 0xd5, 0x5a, 0xdf, 0x27, 0xa5, 0xac, 0xf7, 0xd1, 0x75, 0xbf, 
    0x76, 0xc5, 0x02, 0xcb, 0x53, 0xf9, 0xcd, 0xbb, 0x28, 0x22, 0x3a, 0x64, 0x56, 
    0xbe, 0x0b, 0x21, 0xcc, 0x22, 0xde, 0xbc, 0x5f, 0x5a, 0x6b, 0xb3, 0x12, 0x3f, 
    0x24, 0x84, 0x30, 0x9f, 0xbd, 0xf0, 0xe5, 0x03, 0x01, 0x16, 0x98, 0x0f, 0x10, 
    0xd3, 0x71, 0x71, 0xfc, 0xf8, 0xf1, 0x0b, 0xcc, 0x69, 0x28, 0x44, 0xf4, 0xbc, 
    0x94, 0xf2, 0xae, 0x74, 0x7c, 0xf8, 0x6d, 0xa3, 0x94, 0x7a, 0x1e, 0x11, 0x6f, 
    0x68, 0x6f, 0x6f, 0xbf, 0xbc, 0xb8, 0xb8, 0xf8, 0x53, 0xbf, 0xfd, 0xf7, 0x47, 
    0x7f, 0x2c, 0xb0, 0x3c, 0x55, 0xdd, 0x75, 0xdd, 0x29, 0x42, 0x88, 0x8d, 0xc9, 
    0x99, 0xbb, 0x4d, 0x79, 0x4a, 0xe3, 0xa4, 0xb0, 0x66, 0x2b, 0x03, 0x21, 0xc4, 
    0x33, 0x4a, 0xa9, 0x49, 0x7c, 0x52, 0x8b, 0x3f, 0x15, 0x61, 0x81, 0x65, 0xc0, 
    0x51, 0x29, 0xd5, 0x60, 0x66, 0xdd, 0x7a, 0x71, 0xf1, 0xb9, 0x10, 0xe2, 0xf2, 
    0xde, 0xdc, 0x2b, 0xa5, 0x6a, 0x11, 0xd1, 0xfc, 0x06, 0x33, 0x2b, 0xe6, 0xcd, 
    0x4c, 0x62, 0xde, 0x2f, 0xc7, 0x71, 0x26, 0x4a, 0x29, 0x5f, 0xd3, 0x5a, 0xdf, 
    0x65, 0x59, 0xd6, 0x9a, 0x3e, 0x72, 0x5f, 0x6a, 0x16, 0x0a, 0xf7, 0xf2, 0x77, 
    0xb3, 0xbe, 0xf1, 0xd2, 0xbc, 0x77, 0x26, 0x20, 0x09, 0xb0, 0xc0, 0x32, 0x28, 
    0x44, 0x7b, 0x7b, 0xfb, 0x48, 0x21, 0xc4, 0xc0, 0x9e, 0x5c, 0xd8, 0xb6, 0x9d, 
    0x40, 0xc4, 0x5e, 0x27, 0x2e, 0xcc, 0x16, 0x6e, 0x88, 0xb8, 0xd4, 0x75, 0xdd, 
    0x6b, 0x42, 0xa1, 0xd0, 0xbb, 0x19, 0xa4, 0xe1, 0x9b, 0x29, 0x11, 0xfd, 0x03, 
    0x11, 0x6d, 0x47, 0xc4, 0xef, 0x1a, 0xf1, 0xf7, 0xe6, 0xd8, 0x6c, 0x43, 0x67, 
    0x59, 0xd6, 0xd0, 0x5e, 0xfa, 0xed, 0x20, 0xa2, 0x79, 0x71, 0xce, 0x17, 0x2f, 
    0xf6, 0xcd, 0xdf, 0x18, 0x48, 0x0a, 0x6c, 0x09, 0x22, 0x8e, 0x47, 0xc4, 0xac, 
    0xac, 0x9a, 0xf7, 0xda, 0x3b, 0x22, 0xba, 0xca, 0x6c, 0x31, 0x40, 0x44, 0xdf, 
    0x93, 0x52, 0x2e, 0xf7, 0x6a, 0xcf, 0xed, 0x4f, 0x25, 0xc0, 0x77, 0xb0, 0x3c, 
    0x8d, 0x8a, 0x2e, 0x02, 0xbb, 0x1a, 0x11, 0x03, 0xb1, 0xe3, 0x2f, 0x11, 0x99, 
    0x8f, 0x32, 0xb7, 0x13, 0xd1, 0x3c, 0x29, 0xe5, 0xb2, 0x3c, 0xa1, 0x29, 0xa8, 
    0xb0, 0x2c, 0xb0, 0x3c, 0x95, 0x93, 0x88, 0x6a, 0x89, 0xc8, 0xfc, 0x06, 0xfb, 
    0x47, 0x44, 0xfc, 0x6d, 0x9e, 0xd2, 0x38, 0x29, 0xac, 0xe3, 0x38, 0xd7, 0x49, 
    0x29, 0xdf, 0x20, 0xa2, 0x1a, 0x29, 0xe5, 0xaa, 0x20, 0xe4, 0x74, 0xa6, 0xe7, 
    0xc0, 0x02, 0xcb, 0x53, 0x05, 0x89, 0x68, 0x06, 0x11, 0x35, 0x68, 0xad, 0x6f, 
    0xb6, 0x2c, 0xcb, 0xec, 0x99, 0x91, 0xf7, 0xcb, 0x75, 0xdd, 0x4a, 0x21, 0xc4, 
    0x8b, 0x88, 0x68, 0xb6, 0x84, 0xdb, 0x92, 0xf7, 0x84, 0x0a, 0x20, 0x01, 0x16, 
    0x58, 0x9e, 0x8a, 0x98, 0xdc, 0xe5, 0xf7, 0x0f, 0x44, 0xb4, 0x50, 0x4a, 0xb9, 
    0x20, 0x4f, 0x69, 0x9c, 0x14, 0x56, 0x29, 0xf5, 0x30, 0x22, 0xde, 0xe7, 0x38, 
    0xce, 0x95, 0xe1, 0x70, 0xf8, 0xc3, 0x20, 0xe4, 0x74, 0xa6, 0xe7, 0xc0, 0x02, 
    0xcb, 0x53, 0x05, 0x0f, 0x1f, 0x3e, 0x5c, 0x36, 0x68, 0xd0, 0xa0, 0xbd, 0x00, 
    0xf0, 0x99, 0x10, 0x62, 0x6c, 0x5f, 0x69, 0x98, 0x7d, 0xed, 0x6d, 0xdb, 0x2e, 
    0xcb, 0x24, 0xd5, 0x70, 0x38, 0x1c, 0x3f, 0xdd, 0xfe, 0x1b, 0x5a, 0x6b, 0xb3, 
    0x3f, 0xc7, 0xe0, 0xbd, 0x7b, 0xf7, 0x9e, 0x35, 0x6a, 0xd4, 0xa8, 0x78, 0x26, 
    0xf1, 0xd8, 0xf6, 0x2f, 0x04, 0x58, 0x60, 0x79, 0x1c, 0x09, 0x5a, 0xeb, 0xb7, 
    0x01, 0x60, 0x4c, 0x2c, 0x16, 0xbb, 0x68, 0xc0, 0x80, 0x01, 0x07, 0x7a, 0x4b, 
    0x45, 0x29, 0x55, 0x87, 0x88, 0xb7, 0xf6, 0x91, 0xaa, 0x11, 0xdf, 0x20, 0x00, 
    0xe8, 0xf5, 0x50, 0x09, 0x22, 0xda, 0x2b, 0xa5, 0x34, 0x3b, 0x01, 0xf7, 0x78, 
    0xb5, 0xb7, 0xb7, 0x5f, 0x18, 0x0a, 0x85, 0xcc, 0x9e, 0x89, 0xdb, 0x84, 0x10, 
    0x93, 0xf3, 0x88, 0xa5, 0xa0, 0x42, 0xb3, 0xc0, 0xf2, 0x58, 0xce, 0xe3, 0xc7, 
    0x8f, 0x9f, 0x1f, 0x0e, 0x87, 0xf7, 0x10, 0x51, 0x54, 0x4a, 0xf9, 0x48, 0xba, 
    0xa9, 0x98, 0x85, 0xba, 0x42, 0x08, 0x33, 0x41, 0x91, 0xf6, 0x67, 0xff, 0x4a, 
    0xa9, 0xc7, 0x10, 0xb1, 0xce, 0x71, 0x9c, 0x71, 0xe1, 0x70, 0xf8, 0xbf, 0xd3, 
    0xcd, 0x85, 0xed, 0x4e, 0x26, 0xc0, 0x02, 0xcb, 0xe3, 0x88, 0x48, 0x6e, 0x74, 
    0x63, 0x7e, 0xeb, 0x7c, 0x24, 0x84, 0x98, 0x92, 0x6e, 0x2a, 0x7e, 0x08, 0x4c, 
    0x6b, 0x6d, 0x5e, 0x76, 0x0f, 0x42, 0xc4, 0xb1, 0x88, 0xc8, 0x8f, 0x87, 0xe9, 
    0x16, 0xa3, 0x9b, 0x1d, 0x0b, 0xcc, 0x27, 0x90, 0xe9, 0xba, 0x21, 0xa2, 0x9f, 
    0x13, 0xd1, 0xcc, 0xe4, 0xc4, 0x82, 0xd9, 0x55, 0xca, 0xf3, 0x95, 0xa9, 0xc0, 
    0x1c, 0xc7, 0xb9, 0x51, 0x4a, 0xb9, 0x31, 0xb9, 0x1d, 0x77, 0x20, 0x16, 0x1e, 
    0x7b, 0x86, 0x10, 0x50, 0x03, 0x16, 0x58, 0x9e, 0x0b, 0xd3, 0xd8, 0xd8, 0x28, 
    0xa7, 0x4d, 0x9b, 0x66, 0x3e, 0x13, 0x39, 0x82, 0x88, 0xe7, 0xa4, 0xf3, 0x35, 
    0x71, 0x26, 0x02, 0x23, 0xa2, 0x12, 0x22, 0x32, 0xbf, 0x05, 0xbf, 0x8c, 0x88, 
    0x66, 0x5f, 0x10, 0x3e, 0x51, 0xc5, 0xc7, 0x31, 0xc1, 0x02, 0xf3, 0x11, 0x66, 
    0xba, 0xae, 0x94, 0x52, 0x8f, 0x98, 0x2f, 0x9a, 0xb5, 0xd6, 0x33, 0x2c, 0xcb, 
    0xda, 0xe8, 0xd5, 0x4f, 0x26, 0x02, 0x53, 0x4a, 0xdd, 0x6b, 0xbe, 0xa8, 0x26, 
    0xa2, 0xc5, 0x52, 0xca, 0x1f, 0x7a, 0x8d, 0xcd, 0xed, 0xfb, 0x26, 0xc0, 0x02, 
    0x0b, 0xc0, 0x08, 0x21, 0xa2, 0x73, 0x88, 0xc8, 0xac, 0xfd, 0x9b, 0x84, 0x88, 
    0xd7, 0x23, 0xe2, 0x0e, 0x2f, 0x69, 0xa5, 0x2b, 0x30, 0xc7, 0x71, 0x26, 0x48, 
    0x29, 0xcd, 0xa7, 0x32, 0x3b, 0xcc, 0x77, 0x60, 0x7e, 0x1d, 0xe0, 0xe7, 0x25, 
    0xf7, 0x42, 0x6f, 0xcb, 0x02, 0x0b, 0x48, 0x85, 0x89, 0xa8, 0x2c, 0xf9, 0x85, 
    0xf3, 0xdb, 0x66, 0x46, 0xd0, 0x4b, 0x5a, 0xe9, 0x0a, 0x4c, 0x6b, 0x6d, 0xde, 
    0xc3, 0x99, 0xc7, 0xd2, 0x51, 0x88, 0x68, 0x36, 0xbd, 0xe1, 0xcb, 0x67, 0x02, 
    0x2c, 0x30, 0x9f, 0x81, 0x66, 0xe2, 0xce, 0x75, 0xdd, 0xa9, 0x42, 0x88, 0xf5, 
    0x44, 0xb4, 0xd6, 0x1c, 0xb6, 0x97, 0xaa, 0x2f, 0xaf, 0x02, 0x4b, 0x9e, 0xb6, 
    0x62, 0x26, 0x57, 0xa6, 0x9a, 0xed, 0xda, 0xa4, 0x94, 0x4b, 0x52, 0x8d, 0xc5, 
    0xed, 0xbc, 0x11, 0x60, 0x81, 0x79, 0xe3, 0x95, 0xf5, 0xd6, 0x4a, 0xa9, 0x35, 
    0x88, 0x58, 0xa5, 0xb5, 0xfe, 0x96, 0x65, 0x59, 0xbf, 0x4c, 0x25, 0x60, 0x1a, 
    0x02, 0x33, 0x9f, 0xa5, 0x98, 0x8f, 0x3c, 0x5f, 0x15, 0x42, 0x98, 0x83, 0xfd, 
    0xf8, 0xca, 0x12, 0x01, 0x16, 0x58, 0x96, 0xc0, 0xa6, 0xeb, 0x76, 0xf7, 0xee, 
    0xdd, 0xe1, 0x0b, 0x2f, 0xbc, 0xb0, 0xc5, 0x1c, 0x0b, 0x2b, 0x84, 0x28, 0x4d, 
    0xc5, 0x8f, 0x17, 0x81, 0x99, 0x13, 0x30, 0x89, 0xc8, 0x9c, 0x35, 0x56, 0x12, 
    0x8b, 0xc5, 0x2e, 0xef, 0x6b, 0x05, 0x49, 0x2a, 0xb1, 0xb9, 0x0d, 0x4f, 0x72, 
    0x9c, 0x71, 0x63, 0xc0, 0x75, 0xdd, 0xc9, 0x66, 0xbf, 0x8e, 0xe4, 0x6e, 0xbf, 
    0x73, 0x4f, 0xd7, 0x01, 0x8f, 0x02, 0x5b, 0x43, 0x44, 0xb7, 0x23, 0x62, 0x25, 
    0x22, 0xbe, 0x72, 0x3a, 0xdf, 0xfc, 0xf7, 0xcc, 0x08, 0xf0, 0x1d, 0x2c, 0x33, 
    0x7e, 0x59, 0xb1, 0x36, 0x3b, 0xfe, 0x6a, 0xad, 0x9f, 0x46, 0xc4, 0x69, 0xf1, 
    0x78, 0xfc, 0x92, 0xa2, 0xa2, 0xa2, 0x3e, 0xf7, 0xab, 0x4f, 0x55, 0x60, 0x44, 
    0xf4, 0xf7, 0x44, 0xf4, 0x56, 0xf2, 0xf0, 0x3d, 0xde, 0xc1, 0x37, 0x2b, 0xd5, 
    0x3b, 0xd9, 0x29, 0x0b, 0x2c, 0x07, 0x90, 0xd3, 0x09, 0xd1, 0xd6, 0xd6, 0x36, 
    0xbc, 0xb8, 0xb8, 0xd8, 0xac, 0x09, 0x6c, 0x46, 0xc4, 0x4b, 0xfb, 0x7a, 0x01, 
    0x9d, 0x8a, 0xc0, 0x0e, 0x1e, 0x3c, 0x58, 0x3a, 0x74, 0xe8, 0x50, 0x73, 0x1c, 
    0xed, 0x15, 0xbc, 0xef, 0x61, 0x3a, 0x15, 0x49, 0xcf, 0x86, 0x05, 0x96, 0x1e, 
    0xb7, 0x9c, 0x58, 0x29, 0xa5, 0xa2, 0x88, 0xf8, 0x60, 0x72, 0xe7, 0x29, 0xb3, 
    0xda, 0xa2, 0xc7, 0x2b, 0x15, 0x81, 0xb9, 0xae, 0xfb, 0x0d, 0x21, 0xc4, 0xcb, 
    0x44, 0xf4, 0xa8, 0x94, 0xf2, 0x47, 0x39, 0xe9, 0x00, 0x07, 0xe1, 0xcf, 0x55, 
    0x82, 0x3c, 0x06, 0x92, 0xcb, 0x98, 0xcc, 0x4b, 0xe7, 0xf3, 0x8e, 0x1d, 0x3b, 
    0x76, 0x7e, 0x69, 0x69, 0xe9, 0x17, 0x3d, 0xe5, 0x7b, 0x3a, 0x81, 0xc5, 0x62, 
    0xb1, 0x11, 0x45, 0x45, 0x45, 0xfb, 0x88, 0xe8, 0xbd, 0xb6, 0xb6, 0xb6, 0x5b, 
    0x06, 0x0e, 0x1c, 0xd8, 0x1c, 0xe4, 0x7e, 0x17, 0x52, 0x6e, 0x7c, 0x07, 0x0b, 
    0x78, 0x35, 0x93, 0x1b, 0x94, 0x36, 0x2a, 0xa5, 0x6e, 0xb6, 0x6d, 0xfb, 0x3f, 
    0xd3, 0x11, 0x98, 0x52, 0xea, 0x07, 0x88, 0xb8, 0x28, 0x91, 0x48, 0x8c, 0x8e, 
    0x44, 0x22, 0xbb, 0x02, 0xde, 0xe5, 0x82, 0x4a, 0x8f, 0x05, 0x16, 0xf0, 0x72, 
    0x26, 0xf7, 0xc9, 0x78, 0xc1, 0x27, 0x81, 0x7d, 0x25, 0x12, 0x89, 0xfc, 0x4f, 
    0xc0, 0xbb, 0x5c, 0x50, 0xe9, 0xb1, 0xc0, 0x02, 0x5e, 0x4e, 0x16, 0x58, 0xc0, 
    0x0b, 0x74, 0x9a, 0xf4, 0x58, 0x60, 0x01, 0xaf, 0x1f, 0x0b, 0x2c, 0xe0, 0x05, 
    0x62, 0x81, 0x9d, 0xd9, 0x05, 0x62, 0x81, 0x9d, 0xd9, 0xf5, 0xe3, 0x3b, 0x58, 
    0xc0, 0xeb, 0xd7, 0x29, 0x30, 0x22, 0x7a, 0x40, 0x08, 0xf1, 0x7e, 0x4f, 0xe9, 
    0x6a, 0xad, 0xc7, 0x00, 0xc0, 0x58, 0xb3, 0x50, 0xb8, 0x97, 0xbf, 0x57, 0x21, 
    0xe2, 0x9d, 0x89, 0x44, 0x82, 0x7f, 0x83, 0xe5, 0xb8, 0xde, 0x2c, 0xb0, 0x1c, 
    0x03, 0xf7, 0x1a, 0xae, 0x53, 0x60, 0x00, 0x90, 0xe9, 0xa1, 0x78, 0x8a, 0x05, 
    0xe6, 0x95, 0x7e, 0xe6, 0xed, 0x59, 0x60, 0x99, 0x33, 0xcc, 0xaa, 0x87, 0x78, 
    0x3c, 0x3e, 0xda, 0xb2, 0x2c, 0xf3, 0x7d, 0x18, 0x65, 0x18, 0x08, 0x8f, 0x1d, 
    0x3b, 0xd6, 0xc8, 0xef, 0xc0, 0x32, 0xa4, 0xe8, 0xd1, 0x9c, 0x05, 0xe6, 0x11, 
    0x18, 0x37, 0x67, 0x02, 0x5e, 0x08, 0xb0, 0xc0, 0xbc, 0xd0, 0xe2, 0xb6, 0x4c, 
    0xc0, 0x23, 0x01, 0x16, 0x98, 0x47, 0x60, 0xdc, 0x9c, 0x09, 0x78, 0x21, 0xc0, 
    0x02, 0xf3, 0x42, 0x2b, 0x4f, 0x6d, 0x89, 0xc8, 0x8a, 0xc7, 0xe3, 0xe7, 0xa7, 
    0x1b, 0x5e, 0x6b, 0x9d, 0xe0, 0x43, 0xcd, 0xd3, 0xa5, 0x97, 0x99, 0x1d, 0x0b, 
    0x2c, 0x33, 0x7e, 0x39, 0xb1, 0x36, 0x47, 0xd5, 0x86, 0x42, 0xa1, 0x4c, 0x8e, 
    0x65, 0x35, 0x3b, 0x07, 0x8f, 0xcb, 0x49, 0xb2, 0x1c, 0xe4, 0x24, 0x02, 0x2c, 
    0x30, 0x1e, 0x10, 0x4c, 0x20, 0x8b, 0x04, 0x58, 0x60, 0x59, 0x84, 0xcb, 0xae, 
    0x99, 0x00, 0x0b, 0x8c, 0xc7, 0x00, 0x13, 0xc8, 0x22, 0x01, 0x16, 0x58, 0x16, 
    0xe1, 0xfa, 0xe5, 0x3a, 0x16, 0x8b, 0x9d, 0x17, 0x0e, 0x87, 0xa7, 0xa5, 0xeb, 
    0x4f, 0x08, 0x11, 0x43, 0x44, 0x3e, 0x73, 0x39, 0x5d, 0x80, 0x19, 0xd8, 0xb1, 
    0xc0, 0x32, 0x80, 0x97, 0x2b, 0x53, 0x22, 0xfa, 0x92, 0xd6, 0x7a, 0x66, 0x06, 
    0xf1, 0x62, 0x52, 0xca, 0xa5, 0x19, 0xd8, 0xb3, 0x69, 0x9a, 0x04, 0x58, 0x60, 
    0x69, 0x82, 0x63, 0x33, 0x26, 0x90, 0x0a, 0x01, 0x16, 0x58, 0x2a, 0x94, 0xb8, 
    0x0d, 0x13, 0x48, 0x93, 0x00, 0x0b, 0x2c, 0x4d, 0x70, 0xf9, 0x30, 0x6b, 0x6d, 
    0x6d, 0x1d, 0xe6, 0xf5, 0x30, 0xf4, 0x3d, 0x7b, 0xf6, 0x7c, 0x32, 0x66, 0xcc, 
    0x18, 0x3e, 0xf3, 0x2b, 0x1f, 0x05, 0xe3, 0x43, 0xd0, 0xf3, 0x44, 0x3d, 0xcd, 
    0xb0, 0x4a, 0xa9, 0x27, 0x10, 0xf1, 0x1e, 0x2f, 0xe6, 0x8e, 0xe3, 0x7c, 0x35, 
    0x1c, 0x0e, 0xef, 0xf4, 0x62, 0xc3, 0x6d, 0xfd, 0x23, 0xc0, 0x77, 0x30, 0xff, 
    0x58, 0xb2, 0x27, 0x26, 0x70, 0x0a, 0x01, 0x16, 0x18, 0x0f, 0x0a, 0x26, 0x90, 
    0x45, 0x02, 0x2c, 0xb0, 0x2c, 0xc2, 0x65, 0xd7, 0x4c, 0x80, 0x05, 0x76, 0x06, 
    0x8e, 0x01, 0xb3, 0xba, 0x9e, 0x88, 0xb6, 0xf5, 0x96, 0x3a, 0x11, 0xfd, 0x4a, 
    0x4a, 0xb9, 0xe8, 0x0c, 0xec, 0x5a, 0xc1, 0xa5, 0xcc, 0x02, 0x2b, 0xb8, 0x92, 
    0x72, 0x87, 0x82, 0x44, 0x80, 0x05, 0x16, 0xa4, 0x6a, 0x70, 0x2e, 0x05, 0x47, 
    0x80, 0x05, 0x56, 0x70, 0x25, 0xe5, 0x0e, 0x05, 0x89, 0x00, 0x0b, 0x2c, 0x48, 
    0xd5, 0xe0, 0x5c, 0x0a, 0x8e, 0x00, 0x0b, 0xac, 0xe0, 0x4a, 0xca, 0x1d, 0x0a, 
    0x12, 0x01, 0x16, 0x58, 0x90, 0xaa, 0xc1, 0xb9, 0x14, 0x1c, 0x01, 0x16, 0x58, 
    0xc1, 0x95, 0x94, 0x3b, 0x14, 0x24, 0x02, 0x2c, 0xb0, 0x20, 0x55, 0x83, 0x73, 
    0x29, 0x38, 0x02, 0x2c, 0xb0, 0x82, 0x2b, 0x29, 0x77, 0x28, 0x48, 0x04, 0x58, 
    0x60, 0x41, 0xaa, 0x06, 0xe7, 0x52, 0x70, 0x04, 0x58, 0x60, 0x05, 0x57, 0x52, 
    0xee, 0x50, 0x90, 0x08, 0x9c, 0x56, 0x60, 0x8f, 0xad, 0x6e, 0x2c, 0x1b, 0x38, 
    0x30, 0xfc, 0x41, 0x4d, 0x55, 0x45, 0xda, 0x3b, 0xcb, 0x06, 0xa9, 0xc3, 0x9c, 
    0x0b, 0x13, 0xf0, 0x83, 0x80, 0xd6, 0xfa, 0xcf, 0x2d, 0x2d, 0x2d, 0x7f, 0x37, 
    0x78, 0xf0, 0xe0, 0xa3, 0x7d, 0xf9, 0x3b, 0xad, 0xc0, 0x9e, 0x68, 0x68, 0x38, 
    0x3b, 0x84, 0x25, 0x9f, 0xd7, 0x54, 0x55, 0x08, 0x3f, 0x12, 0x63, 0x1f, 0x4c, 
    0xa0, 0x10, 0x08, 0x68, 0xad, 0x35, 0x22, 0xfe, 0x0d, 0x22, 0xee, 0x4f, 0x49, 
    0x60, 0x8b, 0xd6, 0x34, 0x0e, 0x2b, 0x8b, 0xd8, 0xd7, 0xd7, 0x56, 0x4f, 0xd9, 
    0xd0, 0xd5, 0xa0, 0x2f, 0x81, 0x2d, 0x7b, 0x6e, 0xf3, 0x24, 0x1b, 0xed, 0x1d, 
    0x35, 0x33, 0x6f, 0x39, 0x52, 0x08, 0xd0, 0xb8, 0x0f, 0x4c, 0xa0, 0x2b, 0x81, 
    0x23, 0x47, 0x8e, 0x0c, 0x1a, 0x30, 0x60, 0xc0, 0x78, 0xdb, 0xb6, 0x7f, 0xd3, 
    0x9d, 0x4c, 0x6f, 0x02, 0x73, 0x5d, 0x77, 0x5a, 0x7b, 0x7b, 0xfb, 0x5b, 0x03, 
    0x06, 0x0c, 0x38, 0x60, 0x6c, 0x4e, 0xdc, 0xc1, 0x9e, 0x5c, 0xb7, 0x65, 0x9c, 
    0xb4, 0xe1, 0x35, 0x22, 0x58, 0x35, 0xcc, 0x8a, 0x3f, 0x38, 0x7d, 0xfa, 0x74, 
    0x65, 0x1a, 0x44, 0x57, 0xaf, 0x2e, 0x2e, 0x2f, 0x1b, 0xfe, 0x76, 0xcd, 0x8c, 
    0x8a, 0x2b, 0xba, 0x04, 0xc1, 0xa7, 0x36, 0x34, 0xd5, 0x11, 0xc0, 0x43, 0xae, 
    0x12, 0x37, 0xce, 0x9d, 0x35, 0xf9, 0x5d, 0x2e, 0x0d, 0x13, 0x28, 0x34, 0x02, 
    0x89, 0x44, 0x62, 0x9c, 0x65, 0x59, 0xaf, 0x12, 0xd1, 0x62, 0x21, 0xc4, 0xa3, 
    0x88, 0x78, 0xe2, 0x10, 0x44, 0xad, 0xf5, 0x8e, 0x2f, 0xbe, 0xf8, 0xe2, 0xda, 
    0xe1, 0xc3, 0x87, 0x1f, 0x33, 0xfd, 0x26, 0x22, 0xa9, 0xb5, 0x8e, 0x22, 0xe2, 
    0x5c, 0xa5, 0xd4, 0x8d, 0xb6, 0x6d, 0xbf, 0x73, 0x92, 0xc0, 0xcc, 0x3f, 0xea, 
    0x1b, 0x9a, 0x6e, 0x45, 0x84, 0x8d, 0x44, 0xf4, 0x60, 0x6d, 0xf5, 0x94, 0xc7, 
    0x3b, 0x04, 0xb6, 0x76, 0x6d, 0xe4, 0x6c, 0x59, 0x36, 0xf0, 0xc0, 0xf1, 0x83, 
    0x6d, 0xd1, 0x7b, 0xee, 0x89, 0x99, 0xff, 0x5b, 0xb1, 0x61, 0xd3, 0x9d, 0x82, 
    0xe4, 0x52, 0x02, 0x7a, 0xa0, 0xb6, 0xba, 0x72, 0x65, 0xa1, 0x81, 0xe5, 0xfe, 
    0x30, 0x81, 0x4e, 0x02, 0xae, 0xeb, 0xfe, 0x8b, 0x10, 0x62, 0x89, 0xd6, 0xba, 
    0xce, 0xb2, 0xac, 0xb5, 0x49, 0x31, 0x15, 0x01, 0x40, 0x29, 0x00, 0xb4, 0x22, 
    0xe2, 0x71, 0xf3, 0x7f, 0x4a, 0xa9, 0x1a, 0x44, 0x7c, 0x1c, 0x11, 0x67, 0x23, 
    0x62, 0x63, 0xa7, 0xfd, 0x29, 0xbf, 0xc1, 0x96, 0x3f, 0xbb, 0x69, 0x2c, 0x5a, 
    0x62, 0xf6, 0x9c, 0xaa, 0x8a, 0x7f, 0x5b, 0xd9, 0xb0, 0xf9, 0x7b, 0x80, 0x72, 
    0x21, 0x00, 0x14, 0x77, 0x18, 0x68, 0xf8, 0x49, 0xcd, 0xcc, 0x8a, 0x1f, 0xaf, 
    0xf8, 0x45, 0xd3, 0x32, 0xd2, 0xf4, 0xfa, 0x9c, 0xea, 0x29, 0x4d, 0x5c, 0x0a, 
    0x26, 0x50, 0xe8, 0x04, 0x1c, 0xc7, 0xf9, 0xba, 0x10, 0xe2, 0x16, 0x29, 0x65, 
    0x9d, 0x52, 0xea, 0x87, 0x88, 0x18, 0x05, 0x00, 0x09, 0x00, 0xed, 0x44, 0x14, 
    0x5d, 0xb8, 0x70, 0xe1, 0xe2, 0xf9, 0xf3, 0xe7, 0x3f, 0xaa, 0x94, 0xda, 0x1c, 
    0x0a, 0x85, 0x4e, 0x7a, 0x9a, 0xeb, 0x71, 0x92, 0xa3, 0xb1, 0xb1, 0x51, 0x1e, 
    0x74, 0xc3, 0xcf, 0x22, 0x52, 0x25, 0x10, 0x2d, 0x04, 0xb0, 0x3e, 0x06, 0x54, 
    0x7f, 0x0b, 0x80, 0x0f, 0x10, 0xd0, 0x87, 0xb5, 0x55, 0x95, 0xdf, 0x28, 0x74, 
    0xa8, 0xdc, 0x3f, 0x26, 0xd0, 0x8d, 0x00, 0x6a, 0xad, 0x37, 0x03, 0xc0, 0x78, 
    0x22, 0x7a, 0x54, 0x08, 0xb1, 0x4f, 0x6b, 0x3d, 0x0a, 0x11, 0x7f, 0x04, 0x00, 
    0xaf, 0xbe, 0xf9, 0xe6, 0x9b, 0x33, 0x26, 0x4e, 0x9c, 0xe8, 0x76, 0xa7, 0xd6, 
    0xa3, 0xc0, 0x9e, 0xda, 0xd0, 0x34, 0x97, 0x00, 0xe7, 0x27, 0x12, 0xf8, 0xd5, 
    0xba, 0xd9, 0x93, 0x3f, 0xe9, 0x34, 0x7a, 0x72, 0x5d, 0xe3, 0x05, 0xd2, 0x0e, 
    0xbf, 0x05, 0x80, 0x4f, 0xd6, 0x54, 0x4d, 0xfe, 0x29, 0x97, 0x80, 0x09, 0xf4, 
    0x17, 0x02, 0x4a, 0xa9, 0xfb, 0x11, 0xf1, 0xbb, 0x88, 0x78, 0x2d, 0x22, 0xee, 
    0xed, 0xec, 0x37, 0x11, 0x9d, 0x4b, 0x44, 0xef, 0x11, 0xd1, 0x13, 0x52, 0xca, 
    0xc7, 0x7a, 0x12, 0x18, 0x46, 0xa3, 0x51, 0x73, 0xbb, 0x83, 0x68, 0x14, 0x34, 
    0x40, 0x54, 0xd7, 0x37, 0x6c, 0x79, 0x0b, 0x00, 0xf6, 0xd5, 0x56, 0x57, 0xcc, 
    0xea, 0x6e, 0xb0, 0xb2, 0x61, 0xf3, 0x1c, 0x40, 0xb1, 0xb0, 0xfd, 0xf3, 0xf8, 
    0x39, 0xf3, 0xe6, 0x4d, 0x6f, 0xff, 0xab, 0xed, 0x43, 0x0a, 0xe0, 0xaf, 0x3f, 
    0x02, 0x53, 0x04, 0x8f, 0x37, 0xdc, 0x7c, 0xef, 0x68, 0x4b, 0x5a, 0x91, 0x14, 
    0xdb, 0x73, 0x33, 0x26, 0x90, 0x11, 0x81, 0x16, 0x88, 0xed, 0x7a, 0xfb, 0x97, 
    0x6b, 0x5a, 0xfb, 0x72, 0x42, 0x44, 0xb8, 0x6d, 0xdb, 0xb6, 0x0e, 0x4d, 0x4c, 
    0x98, 0x30, 0xc1, 0x4c, 0xf6, 0x85, 0x88, 0xe8, 0x80, 0x99, 0xec, 0x90, 0x52, 
    0x3e, 0xd2, 0xdd, 0x56, 0x29, 0x55, 0x8f, 0x88, 0x57, 0x23, 0xa2, 0x39, 0xe4, 
    0x50, 0x77, 0xb5, 0xc5, 0x95, 0x1b, 0xb6, 0xec, 0x06, 0x80, 0x2f, 0x27, 0x8d, 
    0xfe, 0x54, 0x53, 0x55, 0x31, 0x72, 0x65, 0x43, 0xd3, 0x0e, 0x00, 0x78, 0xa9, 
    0xa6, 0xba, 0xf2, 0xa1, 0xee, 0xce, 0x9e, 0x6a, 0xd8, 0x3c, 0x55, 0x23, 0x3e, 
    0x7d, 0x9c, 0x62, 0x17, 0x14, 0x41, 0xc9, 0x36, 0x44, 0x18, 0xdd, 0xd5, 0xd6, 
    0x4b, 0xef, 0x6f, 0xba, 0xe9, 0xee, 0x8b, 0x44, 0xb8, 0xe8, 0x23, 0x44, 0xb0, 
    0xbc, 0xd8, 0x71, 0x5b, 0x26, 0x90, 0x2e, 0x01, 0xad, 0x61, 0xe5, 0x2b, 0x4d, 
    0xcb, 0x6b, 0xfb, 0xb2, 0xd7, 0x5a, 0xef, 0x02, 0x80, 0x8b, 0x92, 0x6d, 0x76, 
    0xb5, 0xb4, 0xb4, 0x8c, 0x2f, 0x2b, 0x2b, 0xfb, 0xd4, 0xcc, 0x10, 0x22, 0x62, 
    0xc7, 0x44, 0x47, 0xd7, 0x4b, 0x29, 0xf5, 0x7d, 0x44, 0xbc, 0x13, 0x11, 0xc7, 
    0x12, 0xd1, 0x07, 0x00, 0x70, 0x71, 0xa7, 0x26, 0xd0, 0xcc, 0x12, 0x9e, 0x25, 
    0xca, 0x4a, 0xcc, 0x7f, 0x60, 0x9b, 0x1b, 0xaf, 0xad, 0x9d, 0xde, 0x56, 0xbf, 
    0xa1, 0x69, 0x2b, 0x22, 0x1c, 0xad, 0x99, 0x51, 0x79, 0xca, 0x91, 0x39, 0xf5, 
    0xeb, 0x37, 0xcf, 0x07, 0x21, 0xee, 0x55, 0x07, 0xf7, 0x8d, 0x3c, 0x5c, 0x5a, 
    0x8a, 0x9d, 0xb6, 0xcd, 0x6d, 0x6e, 0x3c, 0x5a, 0x3b, 0xbd, 0xcd, 0x5b, 0xc7, 
    0xa3, 0xe2, 0xa6, 0x8a, 0xe6, 0xd1, 0x40, 0x10, 0xf6, 0x66, 0xc7, 0xad, 0x99, 
    0x40, 0x7a, 0x04, 0x12, 0xb1, 0xc4, 0xee, 0xad, 0x5b, 0xff, 0xa3, 0xa5, 0x2f, 
    0xeb, 0xfd, 0xfb, 0xf7, 0x97, 0x14, 0x17, 0x17, 0x77, 0x3c, 0x55, 0xb5, 0xb4, 
    0xb4, 0xc4, 0x46, 0x8c, 0x18, 0xe1, 0x12, 0xd1, 0x9f, 0x89, 0xe8, 0x39, 0x29, 
    0xe5, 0xfd, 0x3d, 0x08, 0x6c, 0x2d, 0x22, 0x5e, 0x8a, 0x88, 0xd7, 0x00, 0x40, 
    0xa4, 0xb5, 0xb5, 0xb5, 0xc3, 0xb6, 0xb4, 0xb4, 0x34, 0xd6, 0xe3, 0x6f, 0xb0, 
    0xfa, 0xf5, 0x4d, 0xff, 0x8c, 0x02, 0x57, 0x27, 0x12, 0xf1, 0x8b, 0xeb, 0x66, 
    0x4f, 0x3f, 0xf1, 0x1b, 0x6c, 0xc9, 0xfa, 0x8d, 0x23, 0x23, 0xc2, 0xde, 0x09, 
    0x2e, 0x7d, 0xa7, 0xe6, 0xf6, 0xca, 0x53, 0x94, 0x9c, 0x5e, 0x97, 0xd9, 0x8a, 
    0x09, 0x04, 0x9f, 0x80, 0xeb, 0xba, 0x77, 0x08, 0x21, 0x9e, 0x4a, 0x24, 0x12, 
    0x97, 0x45, 0x22, 0x11, 0xf3, 0xd4, 0xd7, 0x71, 0xc5, 0x62, 0xb1, 0x11, 0x91, 
    0x48, 0x64, 0x17, 0x11, 0xcd, 0x93, 0x52, 0xae, 0xee, 0xde, 0x93, 0xde, 0x67, 
    0x11, 0x9d, 0xc8, 0x62, 0x14, 0x74, 0x0f, 0x10, 0xbc, 0x00, 0x44, 0x1f, 0x13, 
    0xc2, 0x05, 0x08, 0x38, 0x05, 0x80, 0x5e, 0xaf, 0xa9, 0xae, 0xac, 0x36, 0xef, 
    0xd6, 0x82, 0x8f, 0x85, 0x33, 0x64, 0x02, 0xfe, 0x10, 0x30, 0xbf, 0xcb, 0xb4, 
    0xd6, 0x6b, 0x10, 0xf1, 0x56, 0x22, 0x32, 0xb3, 0x89, 0x7b, 0xcc, 0xa3, 0x20, 
    0x22, 0x4e, 0x33, 0x77, 0xb6, 0xed, 0xdb, 0xb7, 0xcf, 0x3d, 0xed, 0x2c, 0xe2, 
    0x37, 0x1b, 0x1b, 0xe5, 0x75, 0xca, 0xae, 0x46, 0x80, 0xaf, 0x6d, 0xdb, 0xe4, 
    0xd4, 0x4d, 0xa8, 0x0c, 0xcd, 0x04, 0xc4, 0xdb, 0x01, 0x61, 0x08, 0x02, 0x99, 
    0x37, 0xd6, 0xcf, 0xbf, 0xb1, 0x69, 0xfd, 0xaa, 0xeb, 0x2a, 0x67, 0xad, 0x14, 
    0x1a, 0x76, 0xbd, 0x11, 0x8e, 0x2f, 0x7b, 0x21, 0xb9, 0xe2, 0xc3, 0x9f, 0x6e, 
    0xb0, 0x17, 0x26, 0x10, 0x2c, 0x02, 0xe6, 0x95, 0xd5, 0xd4, 0xa9, 0x53, 0xcd, 
    0x81, 0x1b, 0x97, 0x0b, 0x21, 0x6a, 0x94, 0x52, 0x77, 0x09, 0x21, 0xcc, 0x0d, 
    0xc6, 0xbc, 0x68, 0x3e, 0x8a, 0x88, 0xeb, 0x01, 0xe0, 0x19, 0xad, 0xf5, 0x62, 
    0x22, 0xfa, 0x48, 0x4a, 0xf9, 0x34, 0x22, 0x76, 0xac, 0x82, 0xea, 0xf8, 0xd9, 
    0xd5, 0xb5, 0x3b, 0x2b, 0xd6, 0xbf, 0x78, 0xbb, 0x10, 0xd6, 0x3a, 0xa5, 0xdc, 
    0x99, 0x73, 0x66, 0x4d, 0x6d, 0xe8, 0xad, 0xab, 0xcb, 0x9f, 0x6d, 0xba, 0xd6, 
    0xb2, 0x70, 0x2b, 0x10, 0x3c, 0x5e, 0x53, 0x5d, 0xf1, 0x60, 0xb0, 0x90, 0x70, 
    0x36, 0x4c, 0xc0, 0x3f, 0x02, 0xc9, 0x17, 0xcb, 0x0f, 0x29, 0xa5, 0x26, 0xd9, 
    0xb6, 0x6d, 0x66, 0xd7, 0x7b, 0xbc, 0x5c, 0xd7, 0xad, 0x10, 0x42, 0x6c, 0x22, 
    0xa2, 0x5a, 0x29, 0xe5, 0x89, 0xe3, 0x7a, 0x4f, 0x08, 0xac, 0x7e, 0xfd, 0x96, 
    0x89, 0x28, 0x60, 0x33, 0x11, 0xdd, 0x3f, 0xcc, 0x4a, 0xfc, 0xfc, 0xc4, 0x5a, 
    0xc4, 0xe5, 0xcf, 0x0d, 0x2c, 0x3f, 0xab, 0xf4, 0x77, 0x35, 0xd5, 0x15, 0x97, 
    0x74, 0xf1, 0x8c, 0x2b, 0xd6, 0x6f, 0xf9, 0x96, 0x10, 0xb0, 0x4a, 0x29, 0x5d, 
    0x35, 0x67, 0xd6, 0x94, 0x5f, 0xfb, 0xd7, 0x25, 0xf6, 0xc4, 0x04, 0x82, 0x41, 
    0xc0, 0x71, 0x9c, 0xeb, 0xa5, 0x94, 0x1b, 0xb5, 0xd6, 0x73, 0xa5, 0x94, 0xcf, 
    0x76, 0x5b, 0x8b, 0xf8, 0xf1, 0xd1, 0xa3, 0x47, 0xc7, 0x0f, 0x19, 0x32, 0xa4, 
    0x63, 0xc2, 0x84, 0x88, 0x84, 0x52, 0x6a, 0xb6, 0x10, 0x62, 0xa9, 0x52, 0x6a, 
    0x46, 0xe7, 0x02, 0xe1, 0x13, 0x02, 0x5b, 0xf1, 0xcc, 0xa6, 0xa1, 0x20, 0xe1, 
    0xaa, 0x7f, 0x9d, 0x75, 0xdb, 0xcb, 0x5d, 0xbb, 0xd7, 0xd7, 0x6a, 0xfa, 0xfa, 
    0x0d, 0x4d, 0x57, 0xc7, 0x8f, 0x25, 0xfe, 0x38, 0xef, 0xae, 0xe9, 0x87, 0x83, 
    0x81, 0x84, 0xb3, 0x60, 0x02, 0xfe, 0x11, 0x38, 0x7a, 0xf4, 0xe8, 0xe0, 0xb2, 
    0xb2, 0xb2, 0xcb, 0x10, 0x71, 0x7b, 0x77, 0xaf, 0xbd, 0xad, 0xa6, 0x77, 0x1c, 
    0xe7, 0x9f, 0x2c, 0xcb, 0xda, 0x81, 0x88, 0x07, 0x4f, 0x79, 0x44, 0xec, 0x29, 
    0x35, 0xfe, 0x1e, 0xcc, 0xbf, 0x82, 0xb1, 0xa7, 0xc2, 0x21, 0xe0, 0xf9, 0x7b, 
    0xb0, 0xde, 0xba, 0xbe, 0x78, 0xdd, 0xba, 0x92, 0x62, 0xbb, 0xec, 0xc3, 0xda, 
    0xaa, 0x8a, 0x91, 0x85, 0x83, 0x87, 0x7b, 0xc2, 0x04, 0x32, 0x23, 0xa0, 0xb5, 
    0xde, 0xdb, 0xdc, 0xdc, 0x3c, 0xb6, 0xbc, 0xbc, 0xbc, 0xcf, 0x77, 0xbf, 0xff, 
    0x0f, 0xfd, 0x5e, 0xf5, 0xac, 0x1a, 0x57, 0xd5, 0x7f, 0x00, 0x00, 0x00, 0x00, 
    0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

const lv_img_dsc_t img_light_bulb = {
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 216,
  .header.h = 117,
  .data_size = 4532,
  .data = img_light_bulb_map,
};
