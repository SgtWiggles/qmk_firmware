/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layers {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _FN,
    _ADJUST,
};

enum jj40_keycodes {
    QWERTY = SAFE_RANGE,
    LOWER,
    RAISE,
    FN,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_planck_mit( \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,    KC_O,    KC_P, KC_QUOT,  \
  KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,     KC_K,    KC_L, KC_SCLN, KC_ENT,   \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT , \
  KC_LCTL, FN  , KC_LGUI, KC_LALT,   LOWER,  KC_SPC,            RAISE,  KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT            
),

[_LOWER] = LAYOUT_planck_mit( \
  KC_GRV , KC_EXLM, KC_PIPE, KC_AMPR, KC_EQL,  KC_PERC, KC_CIRC, KC_PLUS, KC_MINUS, KC_ASTR, _______, KC_DQUO, \
  _______, KC_SLSH, KC_LABK, KC_LCBR, KC_LPRN, KC_LBRC, KC_RBRC, KC_RPRN, KC_RCBR,  KC_RABK, KC_BSLS, _______, \
  _______, _______, _______, _______, _______, _______, _______, KC_UNDS, KC_COLN,  _______, _______, _______, \
  _______, _______, _______, _______, LOWER,   KC_BSPC,          _______, _______,  _______, _______, _______           
),

[_RAISE] = LAYOUT_planck_mit( \
  KC_GRV , KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, _______, KC_MPLY, C(A(KC_LEFT)), \
  _______, _______, KC_5   , KC_3   , KC_1   , _______, _______, KC_0,    KC_2,    KC_4   , _______, _______, \
  _______, _______, _______, KC_9   , KC_7   , _______, _______, KC_6   , KC_8   , _______, _______, _______, \
  _______, _______, _______, _______, _______, KC_DEL ,          _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT            
),

[_FN] = LAYOUT_planck_mit( \
  _______, KC_F1 ,  KC_F2,   KC_F3,   KC_F4,   _______, KC_PSCR, KC_SCROLLLOCK, KC_PAUS, _______, KC_MPLY,  _______, \
  _______, KC_F5 ,  KC_F6 ,  KC_F7  , KC_F8  , _______, KC_INS , KC_HOME      , KC_PGDN, KC_PGUP, KC_END , _______, \
  _______, KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______, KC_DEL , _______      , KC_MUTE, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,          _______      , KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT  
),

[_ADJUST] =  LAYOUT_planck_mit( \
  _______, RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______           
),

};
// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case QWERTY:
            return false;
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case FN:
            if (record->event.pressed) {
                layer_on(_FN);
            } else {
                layer_off(_FN);
            }
            return false;
    }

    return true;
}
