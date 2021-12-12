#include QMK_KEYBOARD_H

#define ____ KC_TRNS

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN2
#define LSFT_ESC MT(MOD_LSFT, KC_ESC)
#define LCTL_SPC MT(MOD_LCTL, KC_SPC)
#define LCTL_ENT MT(MOD_LCTL, KC_ENT)
#define LSFT_LBRC MT(MOD_LSFT, KC_LBRC)
#define RALT_RBRC MT(MOD_RALT, KC_RBRC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
    _______, _______, _______, _______, _______, _______,             _______, _______, _______, _______, _______, _______, \
    _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    _______, \
    _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, _______, \
    _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______, \
            OSL(1), LSFT_ESC, _______, _______, LCTL_SPC,             LCTL_ENT,_______, _______, LSFT_LBRC, RALT_RBRC \
),
[1] = LAYOUT(
    _______, _______, _______, _______, _______, _______,             _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, RESET,               KC_GRV,  KC_7,    KC_8,    KC_9,    KC_0,    _______, \
    _______, G(KC_1), G(KC_2), G(KC_3), G(KC_4), G(KC_5),             KC_MINS, KC_4,    KC_5,    KC_6,    KC_QUOT, _______, \
    _______, _______, _______, _______, _______, KC_PSCR,             KC_EQL,  KC_1,    KC_2,    KC_3,    KC_BSLS, _______, \
              OSL(2), _______, _______, _______, _______,             KC_BSPC, _______, _______, _______, _______           \
),
[2] = LAYOUT(
    _______, _______, _______, _______, _______, _______,             _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______,             _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______,             KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_MNXT, _______, \
    _______, _______, _______, _______, _______, _______,             _______, KC_VOLD, KC_MPLY, KC_VOLU, KC_MPRV, _______, \
             _______, _______, _______, _______, _______,             _______,_______, _______, _______, _______            \
),
[3] = LAYOUT(
    _______, _______, _______, _______, _______, _______,             _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______,             _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, \
    _______, _______, _______, _______, _______, _______,             KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______, \
    _______, _______, _______, _______, _______, _______,             _______, KC_WH_D, KC_WH_U, _______, _______, _______, \
             _______, _______, _______, _______, _______,             _______, KC_BTN3, KC_BTN1, KC_BTN2, _______           \
)
};


