#pragma once

#include <stdint.h>
#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

void flowInit();
void flowTick();

lv_obj_t *getLvglObjectFromIndex(int32_t index);
void loadScreen(int index);

#if HAS_FLOW_SUPPORT

void flowOnPageLoaded(unsigned pageIndex);
void flowPropagateValue(unsigned pageIndex, unsigned componentIndex, unsigned outputIndex);

const char *evalTextProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, const char *errorMessage);
int32_t evalIntegerProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, const char *errorMessage);
bool evalBooleanProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, const char *errorMessage);

void assignIntegerProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, int32_t value, const char *errorMessage);
void assignBooleanProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, bool value, const char *errorMessage);

#endif

#ifdef __cplusplus
}
#endif
