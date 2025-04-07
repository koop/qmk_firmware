/* Copyright 2024 ai03 Design Studio */
/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Qwerty
     * ,------------------------------------------------.  ,------------------------------------------------.
     * | Tab  |   Q  |   W  |   E  |   R  |   T  |      |  |      |   Y  |   U  |   I  |   O  |   P  | Bksp |
     * |------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
     * | Esc  |   A  |   S  |   D  |   F  |   G  |      |  |      |   H  |   J  |   K  |   L  |   ;  |  '   |
     * |------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
     * | Shift|   Z  |   X  |   C  |   V  |   B  |      |  |      |   N  |   M  |   ,  |   .  |   /  |Enter |
     * `------+------+------+------+------+------+------|  |------+------+------+------+------+------+------'
     *                      | Ctrl | Alt  | Symb | GUI  |  |Space | Nav  | Tab  | Del  |
     *                      `---------------------------'  `---------------------------'
     */
    [0] = LAYOUT(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    XXXXXXX, XXXXXXX, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX, XXXXXXX, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
                                   KC_LCTL, KC_LALT, MO(1),   KC_LGUI, KC_SPC,  MO(2),   KC_TAB,  KC_DEL
    ),

    /* Symbol
     * ,------------------------------------------------.  ,------------------------------------------------.
     * |   `  |   1  |   2  |   3  |   4  |   5  |      |  |      |   6  |   7  |   8  |   9  |   0  |      |
     * |------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
     * |      |   !  |   @  |   #  |   $  |   %  |      |  |      |   -  |   (  |   )  |   {  |   }  |  |   |
     * |------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
     * |      |   ∅  |   ∅  |   ^  |   &  |   *  |      |  |      |   =  |   [  |   ]  |   ∅  |   ∅  |      |
     * `------+------+------+------+------+------+------|  |------+------+------+------+------+------+------'
     *                      |      |      |      |      |  |      |      |      |      |
     *                      `---------------------------'  `---------------------------'
     */
    [1] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______, _______, KC_MINS, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_PIPE,
        _______, KC_NO,   KC_NO,   KC_CIRC, KC_AMPR, KC_ASTR, _______, _______, KC_EQL,  KC_LBRC, KC_RBRC, KC_NO,   KC_NO,   _______,
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* Navigation
     * ,------------------------------------------------.  ,------------------------------------------------.
     * |      |      |      | PgUp |      |      |Reset |  |      |      |Alt+L |  Up  |Alt+R |      |      |
     * |------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
     * |      |      | Home | PgDn | End  |      |      |  |      |      | Left | Down |Right |      |  \   |
     * |------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
     * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  |  F7  |  F8  |  F9  | F10  | F11  | F12  |      |
     * `------+------+------+------+------+------+------|  |------+------+------+------+------+------+------'
     *                      |      |      |      |      |  | Mute | Vol- | Vol+ | Play |
     *                      `---------------------------'  `---------------------------'
     */
    [2] = LAYOUT(
        _______, _______, _______, KC_PGUP, _______, _______, QK_BOOT, _______, _______, A(KC_LEFT), KC_UP,   A(KC_RIGHT), _______, _______,
        _______, _______, KC_HOME, KC_PGDN, KC_END,  _______, _______, _______, _______, KC_LEFT,    KC_DOWN, KC_RGHT,     _______, KC_BSLS,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,      KC_F10,  KC_F11,      KC_F12,  _______,
                                   _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU,    KC_MPLY
    )

};
