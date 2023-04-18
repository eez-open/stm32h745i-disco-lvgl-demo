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

#ifndef LV_ATTRIBUTE_IMG_IMG_SAVE
#define LV_ATTRIBUTE_IMG_IMG_SAVE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_SAVE uint8_t img_save_map[] = {
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 
    0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x22, 0x08, 0x06, 
    0x00, 0x00, 0x00, 0xb0, 0x44, 0x50, 0xc6, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 
    0x47, 0x42, 0x00, 0xae, 0xce, 0x1c, 0xe9, 0x00, 0x00, 0x01, 0xa7, 0x49, 0x44, 
    0x41, 0x54, 0x78, 0x5e, 0xed, 0xdc, 0x41, 0x4b, 0xc2, 0x60, 0x1c, 0xc7, 0xf1, 
    0x3d, 0x2e, 0xed, 0xd2, 0xd6, 0xc1, 0x39, 0x2b, 0xe8, 0x15, 0x44, 0x85, 0xef, 
    0x42, 0xe8, 0xec, 0x4b, 0xe8, 0xe8, 0x41, 0x88, 0x8e, 0x12, 0x66, 0x60, 0x08, 
    0x12, 0x18, 0x45, 0x74, 0x19, 0x41, 0xbd, 0x80, 0xe8, 0x16, 0xf4, 0x16, 0xba, 
    0x57, 0x44, 0x11, 0x04, 0xea, 0xa3, 0x03, 0xe7, 0xa1, 0x34, 0x34, 0x26, 0x74, 
    0xe8, 0xa6, 0xfb, 0x1f, 0xf7, 0xf5, 0x28, 0xfb, 0x0d, 0x9e, 0x0f, 0xdf, 0xc3, 
    0x2e, 0x9b, 0x32, 0x0c, 0xc3, 0x28, 0x14, 0x0a, 0xe6, 0xc6, 0x76, 0x7e, 0x37, 
    0x95, 0x4c, 0x95, 0x2d, 0xcb, 0x5e, 0x35, 0x4d, 0x33, 0xfc, 0x9b, 0x1f, 0x02, 
    0xff, 0x04, 0xc6, 0xe3, 0xb1, 0x11, 0xf4, 0xfb, 0xad, 0xd1, 0x68, 0x58, 0xed, 
    0xb4, 0x1e, 0x2f, 0x9b, 0xcd, 0xe6, 0xb7, 0x9a, 0xc6, 0xb3, 0x95, 0xff, 0x74, 
    0xdd, 0xac, 0x8b, 0x17, 0x02, 0xb3, 0x0a, 0x68, 0xdd, 0xee, 0x3c, 0xdc, 0x5f, 
    0xad, 0xa9, 0xc3, 0x23, 0xaf, 0x94, 0x76, 0x9c, 0xc6, 0xac, 0x43, 0xae, 0x43, 
    0xe0, 0x4f, 0xc0, 0xef, 0x75, 0xcb, 0xaa, 0x56, 0xbf, 0x69, 0xdb, 0xb6, 0x9d, 
    0x81, 0x05, 0x81, 0x79, 0x05, 0x82, 0xa0, 0xdf, 0x55, 0xa7, 0xe7, 0xb7, 0x93, 
    0x44, 0x22, 0x31, 0xef, 0x96, 0xeb, 0x11, 0x30, 0xc2, 0x67, 0x22, 0x75, 0x76, 
    0x71, 0x37, 0xc1, 0x02, 0x81, 0xa8, 0x02, 0x04, 0x14, 0x55, 0x8e, 0xdd, 0x54, 
    0x80, 0x80, 0x08, 0x41, 0x24, 0x40, 0x40, 0x22, 0x3e, 0xc6, 0x04, 0x44, 0x03, 
    0x22, 0x01, 0x02, 0x12, 0xf1, 0x31, 0x26, 0x20, 0x1a, 0x10, 0x09, 0x10, 0x90, 
    0x88, 0x8f, 0x31, 0x01, 0xd1, 0x80, 0x48, 0x80, 0x80, 0x44, 0x7c, 0x8c, 0x09, 
    0x88, 0x06, 0x44, 0x02, 0x04, 0x24, 0xe2, 0x63, 0x4c, 0x40, 0x34, 0x20, 0x12, 
    0x20, 0x20, 0x11, 0x1f, 0x63, 0x02, 0xa2, 0x01, 0x91, 0x00, 0x01, 0x89, 0xf8, 
    0x18, 0x13, 0x10, 0x0d, 0x88, 0x04, 0x08, 0x48, 0xc4, 0xc7, 0x98, 0x80, 0x68, 
    0x40, 0x24, 0x40, 0x40, 0x22, 0x3e, 0xc6, 0x04, 0x44, 0x03, 0x22, 0x01, 0x02, 
    0x12, 0xf1, 0x31, 0x26, 0x20, 0x1a, 0x10, 0x09, 0x10, 0x90, 0x88, 0x8f, 0x31, 
    0x2f, 0x16, 0xd2, 0x40, 0x64, 0x81, 0xe9, 0x8b, 0x85, 0xb5, 0xfa, 0xb5, 0xb6, 
    0xed, 0xe5, 0x74, 0xe4, 0xbb, 0x30, 0x8c, 0xad, 0x40, 0x10, 0x04, 0xbe, 0xaa, 
    0x54, 0xbd, 0x7d, 0x27, 0xe3, 0x1c, 0xc7, 0x56, 0x81, 0x83, 0x47, 0x16, 0xe8, 
    0xf9, 0xbd, 0x8a, 0x2a, 0x16, 0x8b, 0x8b, 0x99, 0x95, 0xdc, 0x87, 0xe3, 0xb8, 
    0x7c, 0x60, 0x21, 0x32, 0x65, 0xfc, 0x86, 0x5a, 0x6b, 0xfd, 0xfa, 0xfc, 0xb6, 
    0xae, 0xc2, 0xa3, 0x87, 0xdf, 0x08, 0xda, 0xcc, 0xed, 0x94, 0x52, 0x0b, 0xc9, 
    0xbd, 0x25, 0xcb, 0xca, 0xf2, 0xb1, 0x85, 0xf8, 0x05, 0x31, 0xcb, 0x89, 0xc3, 
    0x67, 0x9e, 0xc1, 0x20, 0xe8, 0xfc, 0x8c, 0x86, 0x8d, 0x97, 0xa7, 0xf7, 0x13, 
    0xcf, 0x3b, 0xf8, 0xfa, 0x05, 0x06, 0xf5, 0xa2, 0xc1, 0x53, 0x84, 0xae, 0x84, 
    0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

const lv_img_dsc_t img_save = {
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 144,
  .header.h = 34,
  .data_size = 493,
  .data = img_save_map,
};