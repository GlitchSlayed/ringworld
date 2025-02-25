#ifndef RINGWORLD__RASTERIZER__RASTERIZER_DX9_SCREEN_H
#define RINGWORLD__RASTERIZER__RASTERIZER_DX9_SCREEN_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

enum {
    RASTERIZER_SCREEN_BASE_WIDTH = 640,
    RASTERIZER_SCREEN_BASE_HEIGHT = 480
};

/**
 * Get the width of the screen.
 * @return The width of the screen.
 */
uint16_t rasterizer_screen_get_width(void);

/**
 * Get the height of the screen.
 * @return The height of the screen.
 */
uint16_t rasterizer_screen_get_height(void);

/**
 * Check if user interface rendering is enabled.
 * @return True if user interface rendering is enabled, false otherwise.
 */
bool rasterizer_screen_user_interface_render_enabled(void);

/**
 * Check if widescreen support is enabled.
 * @return True if widescreen support is enabled, false otherwise.
 */
bool rasterizer_screen_widescreen_support_enabled(void);

#ifdef __cplusplus
}
#endif

#endif
