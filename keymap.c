#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _DEV 1

#define DEV MO(_DEV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_GESC, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSLA,
        _______, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                   KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                   KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
                          _______, _______,                                                       _______, _______,
                                            KC_BSPC, KC_DEL ,                   KC_ENT , KC_SPC ,
                                            KC_LGUI, _______,                   _______, KC_RGUI,
                                            KC_LCTL, KC_LALT,                   KC_RALT, KC_RCTL 
    )


    [_EMPTY] = LAYOUT_5x6(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
                          _______, _______,                                                       _______, _______,
                                            _______, _______,                   _______, _______,
                                            _______, _______,                   _______, _______,
                                            _______, _______,                   _______, _______
    )
};
