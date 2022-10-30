#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include "lvgl/lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _main_t {
    lv_obj_t *screen_obj;
    
    lv_obj_t *obj_image_1;
    lv_obj_t *obj_image_2;
    lv_obj_t *obj_label_1;
    lv_obj_t *obj_button_1;
    lv_obj_t *obj_label_2;
    lv_obj_t *obj_button_2;
    lv_obj_t *obj_label_3;
} main_t;

main_t *create_screen_main();
void tick_screen_main(main_t *screen);


typedef lv_obj_t **screen_t;

enum {
    SCREEN_MAIN,
    NUM_SCREENS
};

screen_t get_screen(int screen_index);
void tick_screen(int screen_index);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/