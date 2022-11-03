#ifndef EEZ_LVGL_UI_IMAGES_H
#define EEZ_LVGL_UI_IMAGES_H

#include "lvgl/lvgl.h"

extern const lv_img_dsc_t img_btn_move;
extern const lv_img_dsc_t img_btn_z_botton;

typedef struct _ext_img_desc_t {
    const char *name;
    const lv_img_dsc_t *img_dsc;
} ext_img_desc_t;

extern const ext_img_desc_t images[2];


#endif /*EEZ_LVGL_UI_IMAGES_H*/