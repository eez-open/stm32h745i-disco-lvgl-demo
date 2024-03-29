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

#ifndef LV_ATTRIBUTE_IMG_IMG_ARROW_ACCOUNT
#define LV_ATTRIBUTE_IMG_IMG_ARROW_ACCOUNT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_ARROW_ACCOUNT uint8_t img_arrow_account_map[] = {
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 
    0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x06, 0x08, 0x06, 
    0x00, 0x00, 0x00, 0xfa, 0xf0, 0x0f, 0xc6, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 
    0x47, 0x42, 0x00, 0xae, 0xce, 0x1c, 0xe9, 0x00, 0x00, 0x00, 0x8d, 0x49, 0x44, 
    0x41, 0x54, 0x18, 0x57, 0x7d, 0xce, 0x3d, 0x0e, 0x41, 0x41, 0x14, 0xc5, 0xf1, 
    0xf3, 0xcf, 0x2b, 0x46, 0x25, 0x99, 0x15, 0xd0, 0x2a, 0x14, 0x2a, 0x8d, 0xc6, 
    0x1a, 0x5e, 0xec, 0x43, 0x61, 0x1f, 0x36, 0x60, 0x0d, 0x76, 0xa0, 0xb4, 0x01, 
    0x0a, 0xbd, 0xfe, 0x35, 0x14, 0x53, 0xcc, 0xc7, 0x95, 0x11, 0x04, 0x09, 0xa7, 
    0xbb, 0x27, 0xbf, 0x9c, 0x5c, 0x72, 0xce, 0x6b, 0x60, 0xa9, 0x3f, 0x31, 0xb3, 
    0x0d, 0x92, 0x28, 0xa5, 0xec, 0x24, 0xcd, 0x7f, 0xd8, 0x23, 0x30, 0xa9, 0x50, 
    0x66, 0xe6, 0xcd, 0x6c, 0x2f, 0x69, 0xf4, 0x85, 0x2f, 0xc0, 0x18, 0x38, 0xdf, 
    0x61, 0x4d, 0xd7, 0x75, 0x7d, 0xef, 0xfd, 0x41, 0xd2, 0xe0, 0x51, 0x5d, 0x63, 
    0x8c, 0x33, 0xe7, 0x5c, 0xed, 0xf4, 0x82, 0xf5, 0x08, 0x21, 0x0c, 0x9d, 0x73, 
    0x27, 0x49, 0x3d, 0xa0, 0x05, 0xb6, 0xcf, 0xa1, 0x0f, 0x58, 0xcb, 0x94, 0xd2, 
    0x02, 0x98, 0x36, 0x4d, 0xb3, 0x7a, 0x7f, 0xe3, 0x06, 0xd1, 0x67, 0x27, 0x99, 
    0x0e, 0x0c, 0x65, 0x9d, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 
    0x42, 0x60, 0x82
};

const lv_img_dsc_t img_arrow_account = {
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 10,
  .header.h = 6,
  .data_size = 211,
  .data = img_arrow_account_map,
};
