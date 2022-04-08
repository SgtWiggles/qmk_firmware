#include QMK_KEYBOARD_H

// clang-format off
enum layers{
  _BASE,
  _LOWER,
  _CENTER,
  _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] =
   LAYOUT( KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,   KC_BSPC,       KC_HOME, KC_MPLY,
			 KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_BSLS,  KC_ENT,                 
			   KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,     KC_RSFT,                    KC_UP,      
			KC_LCTRL, KC_LGUI, KC_LALT,        MO(_LOWER), MO(_CENTER), KC_SPC,       KC_RALT, MO(_FN), KC_RCTRL,        KC_LEFT, KC_DOWN, KC_RIGHT 
		 ),

  [_LOWER] = 
   LAYOUT( KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LBRC, KC_RBRC,   KC_BSPC,                                       _______, _______,
			 KC_TRNS, KC_SLSH, KC_LABK, KC_LCBR, KC_LPRN, KC_LBRC, KC_RBRC, KC_RPRN, KC_RCBR, KC_RABK, KC_BSLS, KC_QUOT, KC_BSLS,  KC_ENT,                 
			   _______, KC_EXLM, KC_PIPE, KC_AMPR, KC_EQL, _______,KC_PLUS, KC_MINUS, KC_ASTR, _______, _______, _______,                                  _______,      
			_______, _______, _______,        _______, _______, KC_BSPC,       _______, _______, _______,                                         _______, _______, _______ 
		 ),
  [_CENTER] = 
   LAYOUT( KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LBRC, KC_RBRC,   KC_BSPC,       _______, _______,
			 KC_GRV, KC_EXLM, KC_LABK, KC_LCBR, KC_LPRN, KC_LBRC, KC_RBRC, KC_RPRN, KC_RCBR, KC_RABK, KC_BSLS, KC_QUOT, KC_BSLS,  KC_ENT,                 
			   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______,             _______,      
			_______, _______, _______,       _______, _______, _______,       _______, _______, _______,        _______, _______, _______ 
		 ),

  [_FN] = 
   LAYOUT( KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL,   KC_DEL,       RESET, EEP_RST,
			 KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS,                  
			   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,               KC_TRNS,      
			RESET, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS 
		 )
};
// clang-format on
