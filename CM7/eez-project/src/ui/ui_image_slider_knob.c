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

#ifndef LV_ATTRIBUTE_IMG_IMG_SLIDER_KNOB
#define LV_ATTRIBUTE_IMG_IMG_SLIDER_KNOB
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_SLIDER_KNOB uint8_t img_slider_knob_map[] = {
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 
    0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x08, 0x06, 
    0x00, 0x00, 0x00, 0xa9, 0xac, 0x77, 0x26, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 
    0x47, 0x42, 0x00, 0xae, 0xce, 0x1c, 0xe9, 0x00, 0x00, 0x00, 0xe9, 0x49, 0x44, 
    0x41, 0x54, 0x28, 0x53, 0x85, 0x91, 0xbd, 0x4a, 0x04, 0x41, 0x10, 0x84, 0xab, 
    0x7a, 0x76, 0x46, 0x4f, 0x7c, 0x02, 0xe1, 0x10, 0x03, 0x31, 0xd1, 0x50, 0x31, 
    0x33, 0x36, 0x35, 0xbb, 0x50, 0xf0, 0x15, 0x0c, 0x7c, 0x01, 0x03, 0x43, 0x03, 
    0x03, 0xc1, 0x07, 0x30, 0xf5, 0x01, 0x36, 0xd6, 0x50, 0x33, 0x13, 0x11, 0x51, 
    0x8c, 0x45, 0x5d, 0xf6, 0x6f, 0xba, 0x65, 0x96, 0x15, 0x4e, 0xb8, 0x73, 0x3b, 
    0xe8, 0x86, 0xe6, 0xab, 0x0a, 0xaa, 0x88, 0x7e, 0xca, 0x8f, 0x72, 0xdd, 0x39, 
    0x7f, 0x28, 0xc2, 0x09, 0x80, 0x31, 0x0c, 0x6f, 0x4a, 0xbb, 0xce, 0x44, 0xae, 
    0xb8, 0xc8, 0xc7, 0x84, 0x31, 0xad, 0xea, 0xab, 0xda, 0xca, 0x24, 0xdc, 0x01, 
    0x18, 0xfd, 0x8a, 0xa7, 0x6e, 0x1d, 0xd1, 0xec, 0x85, 0xa5, 0x70, 0xcb, 0xe4, 
    0xe8, 0xfd, 0xc2, 0xfd, 0x1c, 0xb0, 0xd7, 0x58, 0xd9, 0x46, 0x6e, 0xb3, 0xf9, 
    0x8e, 0xa7, 0x42, 0x39, 0x99, 0xe1, 0xf8, 0xe7, 0xa5, 0xaa, 0xe7, 0x8c, 0x85, 
    0x3d, 0x01, 0x58, 0x1b, 0x82, 0x01, 0xbc, 0x24, 0xb8, 0x05, 0xe0, 0x86, 0x61, 
    0x53, 0xc6, 0x42, 0x9f, 0x01, 0xae, 0x0e, 0xc2, 0x66, 0xaf, 0x6c, 0x8a, 0x78, 
    0x26, 0x90, 0xe3, 0x21, 0xd8, 0x4c, 0x2f, 0x68, 0xa5, 0x6d, 0xa8, 0xe2, 0x01, 
    0x40, 0xf8, 0x47, 0x50, 0x47, 0xc5, 0x4e, 0x97, 0x73, 0x5d, 0xd4, 0xbb, 0x8e, 
    0x3e, 0x87, 0xcd, 0xce, 0x59, 0xd9, 0xee, 0xfb, 0x91, 0xcf, 0x3b, 0xb8, 0x2b, 
    0xe6, 0xd3, 0x36, 0x33, 0x87, 0x23, 0x98, 0x1d, 0x80, 0x58, 0x01, 0xf8, 0x6e, 
    0xa6, 0x37, 0x6a, 0x72, 0x19, 0x96, 0x99, 0x7a, 0xc0, 0x0f, 0x3a, 0x7d, 0x5a, 
    0xd3, 0x16, 0xa1, 0xda, 0xb9, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 
    0xae, 0x42, 0x60, 0x82
};

const lv_img_dsc_t img_slider_knob = {
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 11,
  .header.h = 11,
  .data_size = 303,
  .data = img_slider_knob_map,
};
