#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "ui.h"

objects_t objects;

static void event_handler_cb_main_button_1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    if (event == LV_EVENT_PRESSED) {
        flowPropagateValue(0, 3, 1);
    }
    if (event == LV_EVENT_LONG_PRESSED_REPEAT) {
        flowPropagateValue(0, 3, 2);
    }
}

static void event_handler_cb_main_button_2(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    if (event == LV_EVENT_PRESSED) {
        flowPropagateValue(0, 5, 1);
    }
    if (event == LV_EVENT_LONG_PRESSED_REPEAT) {
        flowPropagateValue(0, 5, 2);
    }
}

void create_screen_main() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.main = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 272);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_img_create(parent_obj);
            objects.image_1 = obj;
            lv_obj_set_pos(obj, 5, 40);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_img_set_src(obj, &img_log_eez);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_img_create(parent_obj);
            objects.image_2 = obj;
            lv_obj_set_pos(obj, 255, 40);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_img_set_src(obj, &img_logo_lvgl);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.label_1 = obj;
            lv_obj_set_pos(obj, 0, 15);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.button_1 = obj;
            lv_obj_set_pos(obj, 120, 196);
            lv_obj_set_size(obj, 100, 40);
            lv_obj_add_event_cb(obj, event_handler_cb_main_button_1, LV_EVENT_ALL, 0);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "+");
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.button_2 = obj;
            lv_obj_set_pos(obj, 260, 196);
            lv_obj_set_size(obj, 100, 40);
            lv_obj_add_event_cb(obj, event_handler_cb_main_button_2, LV_EVENT_ALL, 0);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "-");
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
    }
}

void tick_screen_main() {
    {
        const char *new_val = evalTextProperty(0, 2, 2, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_1);
        if (strcmp(new_val, cur_val) != 0) lv_label_set_text(objects.label_1, new_val);
    }
    {
        float timeline_position = getTimelinePosition(0);
        
        static struct {
            float last_timeline_position;
            int32_t obj_image_1_x_init_value;
            int32_t obj_image_1_y_init_value;
            int32_t obj_image_1_opacity_init_value;
            int32_t obj_image_2_x_init_value;
            int32_t obj_image_2_y_init_value;
            int32_t obj_image_2_opacity_init_value;
            int32_t obj_label_1_y_init_value;
            int32_t obj_label_1_opacity_init_value;
            int32_t obj_button_1_y_init_value;
            int32_t obj_button_1_opacity_init_value;
            int32_t obj_button_2_y_init_value;
            int32_t obj_button_2_opacity_init_value;
        } anim_state = { -1 };
        
        if (anim_state.last_timeline_position == -1) {
            anim_state.last_timeline_position = 0;
            anim_state.obj_image_1_x_init_value = lv_obj_get_style_prop(objects.image_1, LV_PART_MAIN, LV_STYLE_X).num;
            anim_state.obj_image_1_y_init_value = lv_obj_get_style_prop(objects.image_1, LV_PART_MAIN, LV_STYLE_Y).num;
            anim_state.obj_image_1_opacity_init_value = lv_obj_get_style_prop(objects.image_1, LV_PART_MAIN, LV_STYLE_OPA).num / 255.0f;
            anim_state.obj_image_2_x_init_value = lv_obj_get_style_prop(objects.image_2, LV_PART_MAIN, LV_STYLE_X).num;
            anim_state.obj_image_2_y_init_value = lv_obj_get_style_prop(objects.image_2, LV_PART_MAIN, LV_STYLE_Y).num;
            anim_state.obj_image_2_opacity_init_value = lv_obj_get_style_prop(objects.image_2, LV_PART_MAIN, LV_STYLE_OPA).num / 255.0f;
            anim_state.obj_label_1_y_init_value = lv_obj_get_style_prop(objects.label_1, LV_PART_MAIN, LV_STYLE_Y).num;
            anim_state.obj_label_1_opacity_init_value = lv_obj_get_style_prop(objects.label_1, LV_PART_MAIN, LV_STYLE_OPA).num / 255.0f;
            anim_state.obj_button_1_y_init_value = lv_obj_get_style_prop(objects.button_1, LV_PART_MAIN, LV_STYLE_Y).num;
            anim_state.obj_button_1_opacity_init_value = lv_obj_get_style_prop(objects.button_1, LV_PART_MAIN, LV_STYLE_OPA).num / 255.0f;
            anim_state.obj_button_2_y_init_value = lv_obj_get_style_prop(objects.button_2, LV_PART_MAIN, LV_STYLE_Y).num;
            anim_state.obj_button_2_opacity_init_value = lv_obj_get_style_prop(objects.button_2, LV_PART_MAIN, LV_STYLE_OPA).num / 255.0f;
        }
        
        if (timeline_position != anim_state.last_timeline_position) {
            anim_state.last_timeline_position = timeline_position;
            
            {
                lv_obj_t *obj = objects.image_1;
                
                float x_value = anim_state.obj_image_1_x_init_value;
                float y_value = anim_state.obj_image_1_y_init_value;
                float opacity_value = anim_state.obj_image_1_opacity_init_value;
                
                while (1) {
                    // keyframe #1
                    if (timeline_position < 0) {
                        break;
                    }
                    x_value = 240;
                    y_value = 272;
                    opacity_value = 1;
                    
                    // keyframe #2
                    if (timeline_position >= 0 && timeline_position < 1) {
                        float t = (timeline_position - 0) / 1;
                        // x
                        {
                            float t2 = eez_easeOutQuad(t);
                            x_value = (1 - t2) * (1 - t2) * x_value + 2 * (1 - t2) * t2 * 0 + t2 * t2 * 5;
                        }
                        // y
                        {
                            float t2 = eez_easeOutQuad(t);
                            y_value = (1 - t2) * (1 - t2) * y_value + 2 * (1 - t2) * t2 * 272 + t2 * t2 * 40;
                        }
                        break;
                    }
                    x_value = 5;
                    y_value = 40;
                    
                    break;
                }
                
                lv_style_value_t value;
                
                value.num = (int32_t)roundf(x_value);
                lv_obj_set_local_style_prop(obj, LV_STYLE_X, value, LV_PART_MAIN);
                
                value.num = (int32_t)roundf(y_value);
                lv_obj_set_local_style_prop(obj, LV_STYLE_Y, value, LV_PART_MAIN);
                
                value.num = (int32_t)roundf(opacity_value * 255.0f);
                lv_obj_set_local_style_prop(obj, LV_STYLE_OPA, value, LV_PART_MAIN);
            }
            {
                lv_obj_t *obj = objects.image_2;
                
                float x_value = anim_state.obj_image_2_x_init_value;
                float y_value = anim_state.obj_image_2_y_init_value;
                float opacity_value = anim_state.obj_image_2_opacity_init_value;
                
                while (1) {
                    // keyframe #1
                    if (timeline_position < 0) {
                        break;
                    }
                    x_value = 240;
                    y_value = 272;
                    opacity_value = 1;
                    
                    // keyframe #2
                    if (timeline_position >= 0 && timeline_position < 1) {
                        float t = (timeline_position - 0) / 1;
                        // x
                        {
                            float t2 = eez_easeOutQuad(t);
                            x_value = (1 - t2) * (1 - t2) * x_value + 2 * (1 - t2) * t2 * 480 + t2 * t2 * 255;
                        }
                        // y
                        {
                            float t2 = eez_easeOutQuad(t);
                            y_value = (1 - t2) * (1 - t2) * y_value + 2 * (1 - t2) * t2 * 272 + t2 * t2 * 40;
                        }
                        break;
                    }
                    x_value = 255;
                    y_value = 40;
                    
                    break;
                }
                
                lv_style_value_t value;
                
                value.num = (int32_t)roundf(x_value);
                lv_obj_set_local_style_prop(obj, LV_STYLE_X, value, LV_PART_MAIN);
                
                value.num = (int32_t)roundf(y_value);
                lv_obj_set_local_style_prop(obj, LV_STYLE_Y, value, LV_PART_MAIN);
                
                value.num = (int32_t)roundf(opacity_value * 255.0f);
                lv_obj_set_local_style_prop(obj, LV_STYLE_OPA, value, LV_PART_MAIN);
            }
            {
                lv_obj_t *obj = objects.label_1;
                
                float y_value = anim_state.obj_label_1_y_init_value;
                float opacity_value = anim_state.obj_label_1_opacity_init_value;
                
                while (1) {
                    // keyframe #1
                    if (timeline_position < 1) {
                        break;
                    }
                    y_value = 150;
                    opacity_value = 1;
                    
                    // keyframe #2
                    if (timeline_position >= 1 && timeline_position < 2) {
                        float t = (timeline_position - 1) / 1;
                        // y
                        {
                            float t2 = eez_easeOutQuad(t);
                            y_value = (1 - t2) * y_value + t2 * 15;
                        }
                        break;
                    }
                    y_value = 15;
                    
                    break;
                }
                
                lv_style_value_t value;
                
                value.num = (int32_t)roundf(y_value);
                lv_obj_set_local_style_prop(obj, LV_STYLE_Y, value, LV_PART_MAIN);
                
                value.num = (int32_t)roundf(opacity_value * 255.0f);
                lv_obj_set_local_style_prop(obj, LV_STYLE_OPA, value, LV_PART_MAIN);
            }
            {
                lv_obj_t *obj = objects.button_1;
                
                float y_value = anim_state.obj_button_1_y_init_value;
                float opacity_value = anim_state.obj_button_1_opacity_init_value;
                
                while (1) {
                    // keyframe #1
                    if (timeline_position < 1) {
                        break;
                    }
                    y_value = 600;
                    opacity_value = 1;
                    
                    // keyframe #2
                    if (timeline_position >= 1 && timeline_position < 2) {
                        float t = (timeline_position - 1) / 1;
                        // y
                        {
                            float t2 = eez_easeOutQuad(t);
                            y_value = (1 - t2) * y_value + t2 * 196;
                        }
                        break;
                    }
                    y_value = 196;
                    
                    break;
                }
                
                lv_style_value_t value;
                
                value.num = (int32_t)roundf(y_value);
                lv_obj_set_local_style_prop(obj, LV_STYLE_Y, value, LV_PART_MAIN);
                
                value.num = (int32_t)roundf(opacity_value * 255.0f);
                lv_obj_set_local_style_prop(obj, LV_STYLE_OPA, value, LV_PART_MAIN);
            }
            {
                lv_obj_t *obj = objects.button_2;
                
                float y_value = anim_state.obj_button_2_y_init_value;
                float opacity_value = anim_state.obj_button_2_opacity_init_value;
                
                while (1) {
                    // keyframe #1
                    if (timeline_position < 1) {
                        break;
                    }
                    y_value = 600;
                    opacity_value = 1;
                    
                    // keyframe #2
                    if (timeline_position >= 1 && timeline_position < 2) {
                        float t = (timeline_position - 1) / 1;
                        // y
                        {
                            float t2 = eez_easeOutQuad(t);
                            y_value = (1 - t2) * y_value + t2 * 196;
                        }
                        break;
                    }
                    y_value = 196;
                    
                    break;
                }
                
                lv_style_value_t value;
                
                value.num = (int32_t)roundf(y_value);
                lv_obj_set_local_style_prop(obj, LV_STYLE_Y, value, LV_PART_MAIN);
                
                value.num = (int32_t)roundf(opacity_value * 255.0f);
                lv_obj_set_local_style_prop(obj, LV_STYLE_OPA, value, LV_PART_MAIN);
            }
        }
        }
    }
    

void create_screens() {
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_main();
}

typedef void (*tick_screen_func_t)();

tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_main,
};

void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
