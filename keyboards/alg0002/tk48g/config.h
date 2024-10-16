// Copyright 2023 alglabnet (@alg0002)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define WS2812_DI_PIN GP16
#define RGBLED_NUM 1
#define RGBLIGHT_DEFAULT_HUE 148
#define RGBLIGHT_DEFAULT_VAL 63