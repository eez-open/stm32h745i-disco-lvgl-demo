#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "../flow.h"

static void event_handler_cb_main_button_1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    if (event == LV_EVENT_PRESSED) {
        flowPropagateValue(0, 3, 1);
    }
}

static void event_handler_cb_main_button_2(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    if (event == LV_EVENT_PRESSED) {
        flowPropagateValue(0, 5, 1);
    }
}

main_t *create_screen_main() {
    main_t *screen = (main_t *)lv_mem_alloc(sizeof(main_t));
    lv_obj_t *obj = lv_obj_create(0);
    screen->screen_obj = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 272);
    {
        lv_obj_t *parent_obj = obj;
        {
            // image_1
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_image_1 = obj;
            lv_obj_set_pos(obj, 5, 40);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_img_set_src(obj, &img_log_eez);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
        }
        {
            // image_2
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_image_2 = obj;
            lv_obj_set_pos(obj, 255, 40);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_img_set_src(obj, &img_logo_lvgl);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
        }
        {
            // label_1
            lv_obj_t *obj = lv_label_create(parent_obj);
            screen->obj_label_1 = obj;
            lv_obj_set_pos(obj, 0, 15);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // button_1
            lv_obj_t *obj = lv_btn_create(parent_obj);
            screen->obj_button_1 = obj;
            lv_obj_set_pos(obj, 120, 196);
            lv_obj_set_size(obj, 100, 40);
            lv_obj_add_event_cb(obj, event_handler_cb_main_button_1, LV_EVENT_ALL, screen);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_2
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    screen->obj_label_2 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "+");
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            // button_2
            lv_obj_t *obj = lv_btn_create(parent_obj);
            screen->obj_button_2 = obj;
            lv_obj_set_pos(obj, 260, 196);
            lv_obj_set_size(obj, 100, 40);
            lv_obj_add_event_cb(obj, event_handler_cb_main_button_2, LV_EVENT_ALL, screen);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // label_3
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    screen->obj_label_3 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "-");
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
    }
    return screen;
}

void tick_screen_main(main_t *screen) {
    {
        const char *new_val = evalTextProperty(0, 2, 2, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(screen->obj_label_1);
        if (strcmp(new_val, cur_val) != 0) lv_label_set_text(screen->obj_label_1, new_val);
    }
}


#include <assert.h>

typedef screen_t (*create_screen_func_t)();

create_screen_func_t create_screen_funcs[] = {
    (create_screen_func_t)create_screen_main,
};

typedef void (*tick_screen_func_t)(screen_t);

tick_screen_func_t tick_screen_funcs[] = {
    (tick_screen_func_t)tick_screen_main,
};

screen_t screens[NUM_SCREENS];

screen_t get_screen(int screen_index) {
    assert(screen_index >= 0 && screen_index < NUM_SCREENS);
    if (!screens[screen_index]) {
        screens[screen_index] = create_screen_funcs[screen_index]();
    }
    return screens[screen_index];
}

void tick_screen(int screen_index) {
    assert(screen_index >= 0 && screen_index < NUM_SCREENS);
    tick_screen_funcs[screen_index](get_screen(screen_index));
}
