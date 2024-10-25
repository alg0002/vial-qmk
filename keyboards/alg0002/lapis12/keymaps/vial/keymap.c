// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_9,    KC_0,    KC_COMMA,KC_DOT,
        KC_5,    KC_6,    KC_7,    KC_8,
        KC_1,    KC_2,    KC_3,    KC_4
    ),
    [1] = LAYOUT(
        KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_F5,   KC_F6,   KC_F7,   KC_F8,
        KC_F1,   KC_F2,   KC_F3,   KC_F4
    ),
    [2] = LAYOUT(
        KC_HOME, KC_PGDN, KC_PGUP, KC_END,
        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
        KC_LSFT, KC_LALT, KC_RALT, KC_RSFT
    ),
    [3] = LAYOUT(
        KC_9,    KC_0,    KC_COMMA,KC_DOT,
        KC_5,    KC_6,    KC_7,    KC_8,
        KC_1,    KC_2,    KC_3,    KC_4
    ),
    [4] = LAYOUT(
        KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_F5,   KC_F6,   KC_F7,   KC_F8,
        KC_F1,   KC_F2,   KC_F3,   KC_F4
    ),
    [5] = LAYOUT(
        KC_HOME, KC_PGDN, KC_PGUP, KC_END,
        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
        KC_LSFT, KC_LALT, KC_RALT, KC_RSFT
    ),
    [6] = LAYOUT(
        KC_9,    KC_0,    KC_COMMA,KC_DOT,
        KC_5,    KC_6,    KC_7,    KC_8,
        KC_1,    KC_2,    KC_3,    KC_4
    ),
    [7] = LAYOUT(
        KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_F5,   KC_F6,   KC_F7,   KC_F8,
        KC_F1,   KC_F2,   KC_F3,   KC_F4
    ),
    [8] = LAYOUT(
        KC_HOME, KC_PGDN, KC_PGUP, KC_END,
        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
        KC_LSFT, KC_LALT, KC_RALT, KC_RSFT
    ),
    [9] = LAYOUT(
        KC_9,    KC_0,    KC_COMMA,KC_DOT,
        KC_5,    KC_6,    KC_7,    KC_8,
        KC_1,    KC_2,    KC_3,    KC_4
    )
};

bool dip_switch_update_mask_user(uint32_t state) {
  switch (state) {
    case 0:
      set_single_persistent_default_layer(0);
      break;
    case 1:
      set_single_persistent_default_layer(1);
      break;
    case 2:
      set_single_persistent_default_layer(2);
      break;
    case 3:
      set_single_persistent_default_layer(3);
      break;
    case 4:
      set_single_persistent_default_layer(4);
      break;
    case 5:
      set_single_persistent_default_layer(5);
      break;
    case 6:
      set_single_persistent_default_layer(6);
      break;
    case 7:
      set_single_persistent_default_layer(7);
      break;
    case 8:
      set_single_persistent_default_layer(8);
      break;
    case 9:
      set_single_persistent_default_layer(9);
      break;
  }
  return true;
}