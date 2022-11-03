#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include "lvgl/lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *button1;
    lv_obj_t *image1;
    lv_obj_t *panel1;
    lv_obj_t *dropdown1;
    lv_obj_t *roller1;
    lv_obj_t *slider1;
    lv_obj_t *bar1;
    lv_obj_t *switch1;
    lv_obj_t *arc1;
    lv_obj_t *label1;
} objects_t;

extern objects_t objects;

void create_screen_main();
void tick_screen_main();

void create_screens();
void tick_screen(int screen_index);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/