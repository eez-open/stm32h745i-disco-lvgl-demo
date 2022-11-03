#pragma once

#include <eez/gui/data.h>
#include <eez/gui/widget.h>

#include "lvgl/lvgl.h"

namespace eez {

enum ThemesEnum {
    THEME_ID_DEFAULT = 0
};

enum ColorsEnum {
    COLOR_ID_TRANSPARENT = 65535,
    COLOR_ID_COLOR = 0,
    COLOR_ID_BACKGROUND_COLOR = 1,
	COLOR_ID_CUSTOM_UNDEFINED = 2
};

extern const uint8_t assets[1226];

} // namespace eez
