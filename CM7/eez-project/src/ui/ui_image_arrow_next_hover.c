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

#ifndef LV_ATTRIBUTE_IMG_IMG_ARROW_NEXT_HOVER
#define LV_ATTRIBUTE_IMG_IMG_ARROW_NEXT_HOVER
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_ARROW_NEXT_HOVER uint8_t img_arrow_next_hover_map[] = {
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 
    0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x24, 0x08, 0x06, 
    0x00, 0x00, 0x00, 0xe1, 0x00, 0x98, 0x98, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 
    0x47, 0x42, 0x00, 0xae, 0xce, 0x1c, 0xe9, 0x00, 0x00, 0x00, 0xf8, 0x49, 0x44, 
    0x41, 0x54, 0x58, 0x47, 0xed, 0x92, 0x3d, 0x0a, 0xc2, 0x40, 0x10, 0x85, 0xdf, 
    0x26, 0xf1, 0x02, 0x76, 0xe2, 0x2d, 0xd4, 0x46, 0xf0, 0x04, 0xa2, 0x60, 0x9a, 
    0x74, 0x16, 0x56, 0x0b, 0x16, 0x82, 0x56, 0x39, 0x48, 0x08, 0xda, 0x58, 0xd9, 
    0x59, 0x08, 0x6a, 0x2f, 0x36, 0x16, 0xb6, 0xf6, 0x9e, 0xc0, 0x46, 0x10, 0x43, 
    0xf0, 0x67, 0xc4, 0xc2, 0x4e, 0x1c, 0xc9, 0x46, 0x54, 0x98, 0x6d, 0xdf, 0x0e, 
    0xf3, 0xed, 0xb7, 0x4f, 0xe1, 0xc7, 0x8e, 0xfa, 0x31, 0x1e, 0x08, 0x10, 0xf7, 
    0x23, 0x62, 0x48, 0x0c, 0x71, 0x06, 0xb8, 0x5c, 0x3a, 0x24, 0x86, 0x38, 0x03, 
    0x5c, 0x2e, 0x1d, 0xfa, 0xa8, 0xa1, 0x60, 0x30, 0x2d, 0x58, 0x40, 0xf3, 0x1c, 
    0x3b, 0x7e, 0xa7, 0x53, 0x8d, 0xb9, 0x65, 0xef, 0xe4, 0x46, 0x5f, 0x16, 0xf4, 
    0x67, 0x65, 0x4b, 0xa9, 0xe5, 0x95, 0x68, 0x74, 0x50, 0x51, 0xd7, 0xd7, 0xde, 
    0xfe, 0x9d, 0xa5, 0xaf, 0xee, 0xa4, 0x02, 0x04, 0x20, 0x03, 0xa2, 0xb5, 0xad, 
    0x72, 0x15, 0xad, 0x4b, 0x27, 0x13, 0xa8, 0xf4, 0x80, 0x00, 0x02, 0x68, 0x83, 
    0x8b, 0x72, 0xdb, 0xed, 0xda, 0x36, 0x29, 0x54, 0x9a, 0x40, 0x57, 0x02, 0xad, 
    0x1c, 0xc0, 0xd5, 0xba, 0xbe, 0xfb, 0x3e, 0x10, 0xd1, 0x7c, 0x91, 0x8d, 0x1a, 
    0x63, 0xcf, 0xbb, 0x24, 0x85, 0xb9, 0xcf, 0xa5, 0x62, 0x88, 0x80, 0xa1, 0x03, 
    0xea, 0x69, 0x5d, 0x3f, 0x9a, 0xc0, 0x18, 0x03, 0x85, 0xe1, 0xa4, 0x08, 0xcb, 
    0x6a, 0xd9, 0x2a, 0xdf, 0x35, 0x2d, 0xf3, 0xe3, 0x21, 0x46, 0x86, 0x4c, 0x6d, 
    0x3c, 0x9b, 0x17, 0x20, 0xce, 0xaa, 0x18, 0x12, 0x43, 0x9c, 0x01, 0x2e, 0x97, 
    0x0e, 0x89, 0x21, 0xce, 0x00, 0x97, 0x4b, 0x87, 0xfe, 0xce, 0xd0, 0x0d, 0x40, 
    0xcb, 0x43, 0x25, 0x9c, 0xab, 0xfe, 0x85, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 
    0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

const lv_img_dsc_t img_arrow_next_hover = {
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 36,
  .header.h = 36,
  .data_size = 318,
  .data = img_arrow_next_hover_map,
};
