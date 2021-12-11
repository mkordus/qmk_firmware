#include QMK_KEYBOARD_H

#define ____ KC_TRNS

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL, \
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,           KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,           KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, \
    LT(1, KC_LGUI), KC_LSFT, _______, KC_LALT, MT(MOD_LCTL, KC_SPC),       MT(MOD_LCTL, KC_ENT) ,KC_BSPC, KC_DEL, MT(MOD_LSFT, KC_LBRC), MT(MOD_RALT, KC_RBRC) \
),
[1] = LAYOUT(
    _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,        KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11, \
    _______, _______, _______, _______, _______, _______,        G(KC_LEFT), G(KC_DOWN), G(KC_UP), G(KC_RGHT), _______, KC_F12, \
    _______, G(KC_1), G(KC_2), G(KC_3), G(KC_4), G(KC_5),        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_MNXT, _______, \
    _______, KC_PSCR, _______, _______, _______, _______,        _______, KC_VOLD, KC_MPLY, KC_VOLU, KC_MPRV, RESET,   \
             _______, _______, _______, _______, _______,        _______,_______, _______, _______, _______                    \
),
[2] = LAYOUT(
    _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______,        _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, \
    _______, _______, _______, _______, _______, _______,        KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______, \
    _______, _______, _______, _______, _______, _______,        _______, KC_WH_D, KC_WH_U, _______, _______, _______, \
                 _______,     _______, _______, _______, _______,        _______,KC_BTN3, KC_BTN1, KC_BTN2, _______                    \
)
};


