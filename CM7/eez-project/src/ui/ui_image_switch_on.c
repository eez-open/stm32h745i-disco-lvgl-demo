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

#ifndef LV_ATTRIBUTE_IMG_IMG_SWITCH_ON
#define LV_ATTRIBUTE_IMG_IMG_SWITCH_ON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_SWITCH_ON uint8_t img_switch_on_map[] = {
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 
    0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x1b, 0x08, 0x06, 
    0x00, 0x00, 0x00, 0x41, 0x61, 0x0c, 0xfb, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 
    0x47, 0x42, 0x00, 0xae, 0xce, 0x1c, 0xe9, 0x00, 0x00, 0x03, 0xdc, 0x49, 0x44, 
    0x41, 0x54, 0x68, 0x43, 0xed, 0x9b, 0x4d, 0x68, 0x13, 0x41, 0x14, 0xc7, 0xff, 
    0x6f, 0xb6, 0x62, 0x6d, 0xab, 0x55, 0xf1, 0x23, 0x0a, 0xd1, 0x0a, 0xa2, 0x9e, 
    0x44, 0x7b, 0xf0, 0xe8, 0xc5, 0x93, 0x57, 0x51, 0x04, 0x05, 0x41, 0x2c, 0x3d, 
    0x08, 0x42, 0xad, 0xad, 0xd2, 0x26, 0x62, 0x50, 0x0f, 0x36, 0x46, 0x0f, 0xa2, 
    0xa0, 0x82, 0xb7, 0x7a, 0x51, 0x04, 0x6f, 0xd1, 0x82, 0x20, 0x08, 0x0a, 0xa2, 
    0x15, 0xac, 0x88, 0xa0, 0x49, 0x2a, 0xf8, 0x85, 0x82, 0x1f, 0x55, 0x34, 0xb6, 
    0xc9, 0x3c, 0xc9, 0x6c, 0x36, 0x99, 0x4d, 0x93, 0x18, 0xc5, 0x83, 0x6d, 0xde, 
    0x5e, 0xba, 0xcd, 0xee, 0xce, 0xce, 0x4c, 0x7e, 0x79, 0x1f, 0xff, 0x79, 0x43, 
    0xf8, 0xcd, 0x71, 0x32, 0xfc, 0x6c, 0x05, 0x67, 0x66, 0x6e, 0x50, 0x0e, 0x6f, 
    0x26, 0xa0, 0x1d, 0xac, 0xdb, 0x14, 0xa3, 0x85, 0x08, 0x69, 0x02, 0x18, 0xcc, 
    0xb3, 0x08, 0x4c, 0x60, 0x06, 0x81, 0x41, 0x0c, 0xf3, 0xd7, 0xfd, 0xdf, 0x3d, 
    0x27, 0x66, 0xf3, 0x16, 0xef, 0x7a, 0xee, 0xb1, 0xdc, 0x67, 0xb9, 0xeb, 0xee, 
    0x79, 0xc9, 0x7d, 0xe5, 0x9e, 0xcd, 0xb7, 0x6f, 0xda, 0xb1, 0xde, 0x35, 0xb9, 
    0xad, 0xe2, 0x7b, 0x0b, 0x7d, 0xf0, 0xda, 0x33, 0xfd, 0xc8, 0x5f, 0xf7, 0xfa, 
    0x54, 0x43, 0xbb, 0xbe, 0xf1, 0x94, 0xb9, 0xbf, 0xd8, 0xa7, 0x5c, 0xf3, 0x25, 
    0xf3, 0x50, 0xd2, 0x5f, 0xd3, 0x56, 0x8d, 0x63, 0xb0, 0xc7, 0xe6, 0xce, 0xa1, 
    0x35, 0x57, 0xf9, 0x73, 0xfb, 0x33, 0xdf, 0xb9, 0x35, 0xa7, 0xc5, 0x79, 0x36, 
    0x63, 0xd7, 0xc4, 0xfa, 0x07, 0x40, 0xe3, 0x04, 0xdd, 0x4a, 0x8c, 0xef, 0x0a, 
    0x78, 0xa9, 0x49, 0x0f, 0xab, 0x0c, 0xc5, 0xb3, 0x94, 0xbe, 0xbf, 0x2c, 0x7e, 
    0x30, 0x51, 0x0d, 0x0b, 0xb7, 0xbd, 0x32, 0xc7, 0x89, 0x43, 0x89, 0xd6, 0x86, 
    0x19, 0x74, 0x11, 0x4c, 0xdb, 0x40, 0x20, 0xff, 0x17, 0x5f, 0x32, 0x70, 0xf3, 
    0xdd, 0x0b, 0x34, 0x66, 0x32, 0xff, 0x7f, 0x68, 0xf2, 0x3f, 0xe2, 0xe2, 0x8f, 
    0xc7, 0x07, 0x32, 0x1b, 0x43, 0x70, 0x3d, 0xfb, 0x45, 0x77, 0x04, 0xef, 0x75, 
    0x7f, 0x2c, 0xc7, 0x46, 0x59, 0x68, 0x62, 0xfd, 0xc9, 0x4e, 0x28, 0x0a, 0x03, 
    0x08, 0x7a, 0x0f, 0x09, 0x34, 0x15, 0x26, 0xd9, 0x67, 0x39, 0xa6, 0x01, 0x34, 
    0xc6, 0x4b, 0x18, 0x6b, 0xfe, 0x86, 0x08, 0x27, 0x16, 0xc7, 0xf7, 0x9f, 0x35, 
    0x1e, 0xc5, 0x3a, 0x7c, 0xd0, 0x44, 0x22, 0xa9, 0xc6, 0xa6, 0x09, 0xdd, 0xa7, 
    0xa0, 0x42, 0x20, 0x38, 0xbe, 0x1b, 0x7d, 0x2e, 0x46, 0x2c, 0x8d, 0xed, 0x62, 
    0xa6, 0x98, 0x7b, 0xaa, 0x6e, 0x69, 0x3c, 0x68, 0x8c, 0x1b, 0x67, 0x0d, 0x46, 
    0x54, 0x7f, 0x18, 0x3b, 0xb6, 0xf4, 0x61, 0xe4, 0x7b, 0xc1, 0x80, 0xd8, 0x60, 
    0x0c, 0x84, 0x13, 0x11, 0x07, 0xea, 0x48, 0x59, 0x93, 0x24, 0xd0, 0xb8, 0x31, 
    0xda, 0xd4, 0x8f, 0x69, 0x6a, 0x87, 0xc6, 0xd8, 0x06, 0xe3, 0xaf, 0x62, 0x4b, 
    0x6e, 0x1c, 0xe8, 0x9d, 0x04, 0x4d, 0xb4, 0x3f, 0xb9, 0x8b, 0x94, 0xba, 0x44, 
    0xe0, 0x06, 0x81, 0xc6, 0x0b, 0xd0, 0x2b, 0x05, 0xd5, 0x7e, 0x4b, 0x3b, 0x6d, 
    0x2d, 0x4d, 0x1e, 0x1a, 0x02, 0xb2, 0xac, 0xf5, 0xde, 0xc0, 0x50, 0xcf, 0x45, 
    0x37, 0xa1, 0x01, 0x10, 0xd9, 0xfb, 0xa4, 0xa5, 0x65, 0x5e, 0xf3, 0x08, 0x08, 
    0x6d, 0x95, 0x02, 0x63, 0x89, 0x69, 0xea, 0x2c, 0xa6, 0xb1, 0xb3, 0x33, 0x17, 
    0x8a, 0xd7, 0x5f, 0xc7, 0xb2, 0xed, 0x2b, 0xef, 0xf6, 0xbe, 0x37, 0xd0, 0x44, 
    0xc3, 0xc9, 0x41, 0x05, 0xda, 0x59, 0x35, 0xcd, 0x12, 0xf7, 0x54, 0xb7, 0xee, 
    0xc9, 0x0b, 0x7c, 0x99, 0x71, 0x25, 0x70, 0xb3, 0x7b, 0x3b, 0x1d, 0x0f, 0xbd, 
    0x08, 0x36, 0x92, 0x33, 0x0a, 0x40, 0x09, 0x34, 0x45, 0xd9, 0xc0, 0xa7, 0x91, 
    0xd8, 0xba, 0x53, 0x1d, 0xc6, 0x34, 0x56, 0xb6, 0xa4, 0x31, 0x9e, 0x59, 0x45, 
    0x03, 0x7d, 0x89, 0x2d, 0x8e, 0xa3, 0xae, 0x55, 0x03, 0xc6, 0xf3, 0xd9, 0xae, 
    0x3f, 0xb3, 0xc4, 0x3a, 0x4f, 0x93, 0x10, 0x9d, 0xa6, 0x28, 0x56, 0x4e, 0x75, 
    0x9d, 0xc6, 0xce, 0x9e, 0x8a, 0x31, 0x4d, 0x01, 0x0f, 0x0d, 0xde, 0x4d, 0xb1, 
    0xc3, 0xa9, 0x0b, 0x60, 0x74, 0x0a, 0x34, 0x95, 0x95, 0xe6, 0x69, 0xa6, 0x08, 
    0xff, 0x71, 0xf6, 0x64, 0xeb, 0x32, 0xac, 0x79, 0x90, 0x62, 0xe1, 0xe4, 0x30, 
    0x40, 0xeb, 0x05, 0x1a, 0x81, 0xa6, 0x20, 0x27, 0x14, 0x96, 0x20, 0xf2, 0x59, 
    0xa4, 0x05, 0x07, 0x83, 0x47, 0x28, 0x16, 0x4e, 0x7d, 0x02, 0x30, 0x57, 0xa0, 
    0x11, 0x68, 0x6a, 0x81, 0x06, 0xc0, 0x58, 0x0e, 0x9a, 0x0c, 0xe0, 0x57, 0x7f, 
    0x45, 0xa7, 0x11, 0x9d, 0xc6, 0xb7, 0xb8, 0xec, 0x03, 0x82, 0x35, 0xc5, 0x42, 
    0xa9, 0xcf, 0x20, 0xb4, 0x8a, 0xa5, 0x11, 0x4b, 0x53, 0xbb, 0xa5, 0x09, 0xa5, 
    0x1e, 0x81, 0xb0, 0x4e, 0xa0, 0x11, 0x68, 0x6a, 0x82, 0x86, 0xf9, 0x89, 0x64, 
    0x4f, 0xf5, 0x57, 0x4f, 0xf3, 0x0f, 0xb2, 0xa7, 0xbe, 0xe4, 0x56, 0x38, 0x74, 
    0x55, 0x2c, 0x8d, 0x58, 0x9a, 0x5a, 0x2c, 0x0d, 0x6b, 0xde, 0x43, 0xb1, 0x50, 
    0x72, 0x39, 0x40, 0xa9, 0x5c, 0xa1, 0x95, 0x28, 0xc2, 0xa2, 0x08, 0xbb, 0x9a, 
    0x54, 0x49, 0x95, 0xa5, 0x07, 0x06, 0x83, 0x27, 0x32, 0xbc, 0xc6, 0x80, 0x72, 
    0x2a, 0x9c, 0xba, 0xcc, 0xc0, 0x0e, 0x81, 0x46, 0xa0, 0xa9, 0x06, 0x4d, 0x61, 
    0xed, 0xc9, 0xac, 0x72, 0xef, 0x7b, 0x3e, 0x67, 0x76, 0x6b, 0xc3, 0x08, 0x03, 
    0xcb, 0x64, 0x95, 0xdb, 0xad, 0xc3, 0x95, 0xb5, 0x27, 0x6b, 0x1e, 0x5c, 0x28, 
    0xde, 0x52, 0x3a, 0xd3, 0xbe, 0xe8, 0xf6, 0xc1, 0x77, 0x05, 0x97, 0x14, 0x3b, 
    0x3c, 0xda, 0x01, 0xcd, 0xe7, 0x4b, 0x2b, 0xf6, 0x3c, 0x88, 0xa4, 0x34, 0xa2, 
    0xae, 0x4b, 0x23, 0xb2, 0xac, 0xb3, 0xdd, 0x81, 0xa1, 0xde, 0x33, 0xee, 0xfa, 
    0xa3, 0x75, 0x48, 0xe5, 0x9e, 0xb8, 0xa7, 0x72, 0xee, 0xa9, 0x62, 0xe5, 0x9e, 
    0x71, 0x53, 0x9d, 0x0f, 0x9a, 0x9a, 0x16, 0xcc, 0x3f, 0xaa, 0x94, 0xea, 0x02, 
    0x58, 0x6a, 0x84, 0xad, 0xad, 0x34, 0xfe, 0xed, 0x30, 0x75, 0x52, 0xb9, 0x07, 
    0x68, 0x66, 0x7d, 0xce, 0x49, 0x7f, 0xed, 0x5f, 0x74, 0x3b, 0xf2, 0xad, 0xe0, 
    0x75, 0xca, 0xc5, 0x30, 0x27, 0x43, 0x89, 0x2e, 0x90, 0x3a, 0x44, 0x40, 0x40, 
    0xdc, 0x53, 0xc9, 0x3e, 0xae, 0x7a, 0xa9, 0xa7, 0x61, 0x7e, 0xef, 0x90, 0x3e, 
    0xbd, 0x30, 0xde, 0x1d, 0xa5, 0x7c, 0x94, 0x57, 0x15, 0x9a, 0xdc, 0x45, 0xd9, 
    0xf7, 0x54, 0xdc, 0xd0, 0x57, 0x57, 0xa5, 0x11, 0x7f, 0xbb, 0xef, 0xc9, 0x1f, 
    0xe7, 0x24, 0x57, 0xab, 0x2c, 0x36, 0x2a, 0x85, 0x4d, 0x04, 0xac, 0x05, 0x74, 
    0x90, 0x34, 0x9a, 0x89, 0xf0, 0x33, 0x57, 0xa6, 0x4e, 0xe0, 0x46, 0xd9, 0x61, 
    0xe9, 0x09, 0x83, 0x53, 0x62, 0xdf, 0x93, 0x26, 0xe6, 0x34, 0x18, 0x13, 0x44, 
    0x3c, 0x9b, 0xb4, 0xfe, 0x41, 0xc0, 0x2b, 0x10, 0x1e, 0x23, 0xab, 0x6f, 0x39, 
    0x94, 0xb9, 0xb3, 0x24, 0xde, 0xf3, 0xb4, 0x9a, 0xfc, 0xf2, 0x0b, 0x7b, 0xc9, 
    0xd3, 0xcf, 0x55, 0x5a, 0x6b, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 
    0x44, 0xae, 0x42, 0x60, 0x82
};

const lv_img_dsc_t img_switch_on = {
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 141,
  .header.h = 27,
  .data_size = 1058,
  .data = img_switch_on_map,
};