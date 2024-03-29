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

#ifndef LV_ATTRIBUTE_IMG_IMG_CHECKMARK
#define LV_ATTRIBUTE_IMG_IMG_CHECKMARK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_CHECKMARK uint8_t img_checkmark_map[] = {
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 
    0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0a, 0x08, 0x06, 
    0x00, 0x00, 0x00, 0x6f, 0xee, 0xd4, 0xc4, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 
    0x47, 0x42, 0x00, 0xae, 0xce, 0x1c, 0xe9, 0x00, 0x00, 0x01, 0x2d, 0x49, 0x44, 
    0x41, 0x54, 0x28, 0x53, 0x8d, 0x91, 0xbd, 0x4b, 0x42, 0x71, 0x14, 0x86, 0xdf, 
    0xf7, 0xe7, 0xbd, 0x09, 0x45, 0x2d, 0x41, 0x5a, 0x20, 0x21, 0xb6, 0x45, 0x1f, 
    0x34, 0xd4, 0x16, 0x26, 0x79, 0x5b, 0xfb, 0x23, 0x1a, 0x82, 0x68, 0x29, 0x85, 
    0xdc, 0x1c, 0xcd, 0x6b, 0x9b, 0x4b, 0x43, 0x43, 0x63, 0xa3, 0x53, 0x50, 0x58, 
    0xd2, 0x17, 0xb4, 0x97, 0x4b, 0xd1, 0x10, 0x99, 0xd7, 0xa2, 0xc0, 0x8f, 0xa1, 
    0xae, 0x76, 0x4f, 0x14, 0x18, 0x25, 0x42, 0x9e, 0xf5, 0x9c, 0x07, 0x9e, 0xf3, 
    0xbe, 0x44, 0x87, 0x73, 0x33, 0xb2, 0xea, 0xee, 0x0d, 0x0c, 0xa7, 0x09, 0x4e, 
    0xb1, 0x13, 0x46, 0x00, 0x5a, 0xe1, 0x64, 0x54, 0xd1, 0x95, 0x10, 0xca, 0x4e, 
    0x47, 0xd0, 0x53, 0x78, 0x6b, 0x45, 0x14, 0xd2, 0x10, 0x5c, 0xe7, 0xed, 0xea, 
    0xe4, 0xbf, 0x90, 0x15, 0x32, 0x43, 0xd4, 0x54, 0x46, 0x20, 0x0f, 0x7a, 0xb9, 
    0x36, 0xd3, 0x7f, 0x19, 0xaf, 0xf0, 0xc5, 0xd8, 0xf2, 0x55, 0xec, 0xea, 0xb3, 
    0x3f, 0x17, 0x7f, 0x6b, 0x55, 0x2d, 0xce, 0x25, 0x46, 0x95, 0xae, 0x9d, 0x83, 
    0x7c, 0x95, 0x06, 0xe7, 0xbd, 0xd9, 0xb5, 0xbb, 0xaf, 0x1b, 0x96, 0x8c, 0x54, 
    0x01, 0x80, 0xd8, 0x76, 0x3d, 0xe8, 0xcb, 0xc5, 0x6e, 0x9b, 0xe0, 0x7d, 0x28, 
    0x19, 0x70, 0x6b, 0xae, 0x53, 0x10, 0x7d, 0xa8, 0xc3, 0xf0, 0x1c, 0xad, 0x5f, 
    0x34, 0x77, 0x7c, 0x34, 0x52, 0x8b, 0x8a, 0xd8, 0x23, 0x58, 0x76, 0x1a, 0x12, 
    0x1c, 0xcc, 0x46, 0xf2, 0x96, 0x61, 0xf6, 0x80, 0x3c, 0x86, 0x60, 0xcc, 0xb1, 
    0x1b, 0xe1, 0xa1, 0xdc, 0xc6, 0xd9, 0x6f, 0x8b, 0xef, 0x9f, 0x2c, 0xc3, 0xf4, 
    0x83, 0xea, 0x8a, 0xc0, 0x87, 0xf3, 0x6e, 0x8f, 0xab, 0x2e, 0x7d, 0x17, 0xe4, 
    0x2c, 0x1c, 0x67, 0xd9, 0x73, 0x18, 0xdd, 0x6e, 0xd5, 0xfe, 0x09, 0xa2, 0x18, 
    0xda, 0x9c, 0x56, 0xba, 0xb6, 0x0f, 0x91, 0x6e, 0x92, 0xba, 0x23, 0x62, 0x7a, 
    0x0f, 0x22, 0xb1, 0x76, 0x95, 0xfc, 0x49, 0xaf, 0xb4, 0x90, 0x98, 0x10, 0x68, 
    0x19, 0x3a, 0x38, 0x19, 0x28, 0xd4, 0x96, 0x98, 0x8f, 0xdb, 0xed, 0xa0, 0x4f, 
    0x11, 0xea, 0x6c, 0x6e, 0x17, 0x4c, 0xf3, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x49, 
    0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

const lv_img_dsc_t img_checkmark = {
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 13,
  .header.h = 10,
  .data_size = 371,
  .data = img_checkmark_map,
};
