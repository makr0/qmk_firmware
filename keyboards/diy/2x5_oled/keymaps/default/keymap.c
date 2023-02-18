// Copyright 2022 Commander1024 (@Commander1024)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ 1 │ 2 │ 3 │
     * ├───┼───┼───┤
     * │ 4 │ 5 │ 6 │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_5x2(
        KC_MEDIA_NEXT_TRACK, KC_MEDIA_PREV_TRACK, KC_3, KC_2, KC_1,
        KC_MEDIA_PLAY_PAUSE, KC_9, KC_8, KC_7, KC_6, QK_BOOT, KC_MINS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)  },
};
#endif
