// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ H │ I │( )│
     * ├───┼───┼───┤
     * │ C │ H │ I │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_macro_3x2(
        KC_H,   KC_I,   KC_MUTE,
        KC_C,   KC_D,   MO(1)
    ),
    [1] = LAYOUT_macro_3x2(
        KC_P1,   KC_P2,   KC_MUTE,
        KC_P3,   KC_P4,   MO(2)
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}
};
#endif