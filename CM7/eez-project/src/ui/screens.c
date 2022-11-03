#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "../flow.h"

objects_t objects;

void create_screen_main() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.main = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 272);
    {
        lv_obj_t *parent_obj = obj;
        {
            // button1
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.button1 = obj;
            lv_obj_set_pos(obj, 329, 222);
            lv_obj_set_size(obj, 150, 50);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Button");
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            // image1
            lv_obj_t *obj = lv_img_create(parent_obj);
            objects.image1 = obj;
            lv_obj_set_pos(obj, 36, 60);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_img_set_src(obj, &img_btn_move);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
        }
        {
            // panel1
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.panel1 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 150, 55);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
        }
        {
            // dropdown1
            lv_obj_t *obj = lv_dropdown_create(parent_obj);
            objects.dropdown1 = obj;
            lv_obj_set_pos(obj, 156, 37);
            lv_obj_set_size(obj, 150, LV_SIZE_CONTENT);
            lv_dropdown_set_options(obj, "Option 1\nOption 2\nOption 3\nOption 4\nOption 5");
        }
        {
            // roller1
            lv_obj_t *obj = lv_roller_create(parent_obj);
            objects.roller1 = obj;
            lv_obj_set_pos(obj, 156, 88);
            lv_obj_set_size(obj, 150, 100);
            lv_roller_set_options(obj, "Option 1\nOption 2\nOption 3\nOption 4\nOption 5\nOption 6\nOption 7\nOption 8\nOption 9\nOption 10", LV_ROLLER_MODE_NORMAL);
        }
        {
            // slider1
            lv_obj_t *obj = lv_slider_create(parent_obj);
            objects.slider1 = obj;
            lv_obj_set_pos(obj, 15, 232);
            lv_obj_set_size(obj, 150, 10);
        }
        {
            // bar1
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.bar1 = obj;
            lv_obj_set_pos(obj, 15, 255);
            lv_obj_set_size(obj, 150, 10);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_CLICKABLE);
        }
        {
            // switch1
            lv_obj_t *obj = lv_switch_create(parent_obj);
            objects.switch1 = obj;
            lv_obj_set_pos(obj, 231, 235);
            lv_obj_set_size(obj, 50, 25);
        }
        {
            // arc1
            lv_obj_t *obj = lv_arc_create(parent_obj);
            objects.arc1 = obj;
            lv_obj_set_pos(obj, 329, 57);
            lv_obj_set_size(obj, 150, 150);
            lv_arc_set_value(obj, 25);
            lv_arc_set_bg_end_angle(obj, 60);
        }
        {
            // label1
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label1 = obj;
            lv_obj_set_pos(obj, 352, 5);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "0");
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
}

void tick_screen_main() {
}


void create_screens() {
    create_screen_main();
}

typedef void (*tick_screen_func_t)();

tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_main,
};

void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
