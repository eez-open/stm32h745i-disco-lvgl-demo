#include "images.h"

const LV_ATTRIBUTE_MEM_ALIGN uint8_t img_btn_move_data[] = { 0, 0, 0, 0 };

const lv_img_dsc_t img_btn_move = {
    .header.always_zero = 0,
    .header.w = 1,
    .header.h = 1,
    .data_size = sizeof(img_btn_move_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = img_btn_move_data
};

const LV_ATTRIBUTE_MEM_ALIGN uint8_t img_btn_z_botton_data[] = { 0, 0, 0, 0 };

const lv_img_dsc_t img_btn_z_botton = {
    .header.always_zero = 0,
    .header.w = 1,
    .header.h = 1,
    .data_size = sizeof(img_btn_z_botton_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = img_btn_z_botton_data
};

const ext_img_desc_t images[2] = {
    { "btn_move", &img_btn_move },
    { "btn_z_botton", &img_btn_z_botton },
};
