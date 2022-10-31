#include <stdio.h>
#include <lvgl/lvgl.h>

#if HAS_FLOW_SUPPORT
#include <eez/core/os.h>
#include <eez/core/action.h>

#include <eez/flow/flow.h>
#include <eez/flow/expression.h>
#include <eez/flow/hooks.h>
#include <eez/flow/debugger.h>
#include <eez/flow/components.h>
#include <eez/flow/flow_defs_v3.h>

#include "ui/flow_def.h"

static void replacePageHook(int16_t pageId, uint32_t animType, uint32_t speed, uint32_t delay);
#endif

#include "ui/screens.h"
#include "ui/images.h"

static int16_t currentScreen = -1;

static lv_obj_t *getLvglObjectFromIndex(int32_t index) {
    if (index == -1) {
        return 0;
    }
    return ((lv_obj_t **)&objects)[index];
}

static const void *getLvglImageByName(const char *name) {
    for (size_t imageIndex = 0; imageIndex < sizeof(images) / sizeof(ext_img_desc_t); imageIndex++) {
        if (strcmp(images[imageIndex].name, name) == 0) {
            return images[imageIndex].img_dsc;
        }
    }
    return 0;
}

extern "C" void loadScreen(int index) {
    currentScreen = index;
    lv_obj_t *screen = getLvglObjectFromIndex(index);
    lv_scr_load_anim(screen, LV_SCR_LOAD_ANIM_FADE_IN, 200, 0, false);
}

extern "C" void flowInit() {
#if HAS_FLOW_SUPPORT
    eez::initAssetsMemory();
    eez::loadMainAssets(assets, sizeof(assets));
    eez::initOtherMemory();
    eez::initAllocHeap(eez::ALLOC_BUFFER, eez::ALLOC_BUFFER_SIZE);

    eez::flow::replacePageHook = replacePageHook;
    eez::flow::getLvglObjectFromIndexHook = getLvglObjectFromIndex;
    eez::flow::getLvglImageByNameHook = getLvglImageByName;

    eez::flow::start(eez::g_mainAssets);

    create_screens();
    replacePageHook(1, 0, 0, 0);
#else
    create_screens();
    loadScreen(0);
#endif
}

extern "C" void flowTick() {
#if HAS_FLOW_SUPPORT
    eez::flow::tick();
#endif
    tick_screen(currentScreen);
}

#if HAS_FLOW_SUPPORT

namespace eez {
ActionExecFunc g_actionExecFunctions[] = { 0 };
}

void replacePageHook(int16_t pageId, uint32_t animType, uint32_t speed, uint32_t delay) {
    eez::flow::onPageChanged(currentScreen + 1, pageId);
    currentScreen = pageId - 1;
    lv_scr_load_anim(getLvglObjectFromIndex(currentScreen), (lv_scr_load_anim_t)animType, speed, delay, false);
}

extern "C" void flowOnPageLoaded(int pageIndex) {
    eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);
}

extern "C" void flowPropagateValue(unsigned pageIndex, unsigned componentIndex, unsigned outputIndex) {
    eez::flow::FlowState *flowState = eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);
    eez::flow::propagateValue(flowState, componentIndex, outputIndex);
}

static char textValue[1000];

extern "C" const char *evalTextProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, const char *errorMessage) {
    eez::flow::FlowState *flowState = eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);
    eez::Value value;
    if (!eez::flow::evalProperty(flowState, componentIndex, propertyIndex, value, errorMessage)) {
        return "";
    }
    value.toText(textValue, sizeof(textValue));
    return textValue;
}

extern "C" int32_t evalIntegerProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, const char *errorMessage) {
    eez::flow::FlowState *flowState = eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);
    eez::Value value;
    if (!eez::flow::evalProperty(flowState, componentIndex, propertyIndex, value, errorMessage)) {
        return 0;
    }
    int err;
    int32_t intValue = value.toInt32(&err);
    if (err) {
        eez::flow::throwError(flowState, componentIndex, errorMessage);
        return 0;
    }
    return intValue;
}

extern "C" bool evalBooleanProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, const char *errorMessage) {
    eez::flow::FlowState *flowState = eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);
    eez::Value value;
    if (!eez::flow::evalProperty(flowState, componentIndex, propertyIndex, value, errorMessage)) {
        return 0;
    }
    int err;
    bool booleanValue = value.toBool(&err);
    if (err) {
        eez::flow::throwError(flowState, componentIndex, errorMessage);
        return 0;
    }
    return booleanValue;
}

extern "C" void assignIntegerProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, int32_t value, const char *errorMessage) {
    eez::flow::FlowState *flowState = eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);

    auto component = flowState->flow->components[componentIndex];

    eez::Value dstValue;
    if (!eez::flow::evalAssignableExpression(flowState, componentIndex, component->properties[propertyIndex]->evalInstructions, dstValue, errorMessage)) {
        return;
    }

    eez::Value srcValue((int)value, eez::VALUE_TYPE_INT32);

    eez::flow::assignValue(flowState, componentIndex, dstValue, srcValue);
}

extern "C" void assignBooleanProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, bool value, const char *errorMessage) {
    eez::flow::FlowState *flowState = eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);

    auto component = flowState->flow->components[componentIndex];

    eez::Value dstValue;
    if (!eez::flow::evalAssignableExpression(flowState, componentIndex, component->properties[propertyIndex]->evalInstructions, dstValue, errorMessage)) {
        return;
    }

    eez::Value srcValue(value, eez::VALUE_TYPE_BOOLEAN);

    eez::flow::assignValue(flowState, componentIndex, dstValue, srcValue);
}

#endif