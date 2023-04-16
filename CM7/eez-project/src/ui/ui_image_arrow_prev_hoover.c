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

#ifndef LV_ATTRIBUTE_IMG_IMG_ARROW_PREV_HOOVER
#define LV_ATTRIBUTE_IMG_IMG_ARROW_PREV_HOOVER
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_ARROW_PREV_HOOVER uint8_t img_arrow_prev_hoover_map[] = {
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 
    0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x24, 0x08, 0x06, 
    0x00, 0x00, 0x00, 0xe1, 0x00, 0x98, 0x98, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 
    0x47, 0x42, 0x00, 0xae, 0xce, 0x1c, 0xe9, 0x00, 0x00, 0x00, 0xf9, 0x49, 0x44, 
    0x41, 0x54, 0x58, 0x47, 0x63, 0x64, 0x18, 0x64, 0x80, 0x71, 0x90, 0xb9, 0x87, 
    0x61, 0xd4, 0x41, 0x84, 0x62, 0x64, 0x34, 0x84, 0x46, 0x43, 0x88, 0x50, 0x08, 
    0x10, 0x92, 0x1f, 0x4d, 0x43, 0xa3, 0x21, 0x44, 0x28, 0x04, 0x08, 0xc9, 0x8f, 
    0xa6, 0x21, 0xba, 0x85, 0x50, 0x43, 0xc3, 0x7e, 0x16, 0x71, 0xf1, 0x2f, 0xd5, 
    0x7f, 0x18, 0x98, 0xf7, 0xe4, 0x66, 0x7a, 0x1d, 0x25, 0x64, 0x31, 0x2e, 0x79, 
    0xaa, 0x44, 0x59, 0x43, 0xc3, 0x7c, 0x0e, 0x51, 0x49, 0x91, 0x7a, 0x46, 0x06, 
    0x86, 0xb2, 0x3f, 0x7f, 0x19, 0xdd, 0xf3, 0xb2, 0x7c, 0xf6, 0x0c, 0xa8, 0x83, 
    0xa6, 0xcd, 0xdc, 0xb2, 0x9c, 0x81, 0x81, 0x21, 0x02, 0xe4, 0x88, 0x3f, 0x7f, 
    0x19, 0x5c, 0x07, 0xcc, 0x41, 0x33, 0x67, 0xee, 0xe6, 0xff, 0xcb, 0xf0, 0x63, 
    0x2e, 0x03, 0x03, 0x43, 0x20, 0x03, 0x03, 0x23, 0xd3, 0x80, 0x3b, 0xa8, 0x7f, 
    0xfa, 0x7a, 0x05, 0x76, 0x26, 0xd6, 0xf5, 0x0c, 0x0c, 0x0c, 0xfa, 0x0c, 0x0c, 
    0x90, 0xb6, 0xd5, 0x80, 0x86, 0x10, 0x2c, 0x9d, 0x4c, 0x9b, 0xb1, 0x79, 0x3f, 
    0x03, 0x23, 0xa3, 0xc3, 0xa0, 0x71, 0x50, 0x7f, 0xff, 0x7a, 0x01, 0x56, 0x4e, 
    0xb6, 0x3e, 0x26, 0xc6, 0xff, 0x09, 0x7f, 0xfe, 0x32, 0xb8, 0x0d, 0x58, 0x1a, 
    0x42, 0xce, 0x49, 0x93, 0x26, 0x4d, 0x62, 0x67, 0x62, 0x53, 0xe8, 0xfe, 0xf7, 
    0x8f, 0x69, 0x75, 0x5e, 0x96, 0xcf, 0xe1, 0x01, 0xcd, 0x65, 0xe4, 0x5a, 0x8e, 
    0x4d, 0x1f, 0x55, 0xca, 0xa1, 0x51, 0x07, 0x51, 0x33, 0x04, 0x08, 0x99, 0x35, 
    0x1a, 0x65, 0xa3, 0x21, 0x44, 0x28, 0x04, 0x08, 0xc9, 0x8f, 0xa6, 0xa1, 0xd1, 
    0x10, 0x22, 0x14, 0x02, 0x84, 0xe4, 0x47, 0xd3, 0x10, 0xa1, 0x10, 0x02, 0x00, 
    0x05, 0x3d, 0x3b, 0x25, 0xd0, 0xdd, 0x25, 0xb5, 0x00, 0x00, 0x00, 0x00, 0x49, 
    0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

const lv_img_dsc_t img_arrow_prev_hoover = {
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 36,
  .header.h = 36,
  .data_size = 319,
  .data = img_arrow_prev_hoover_map,
};
