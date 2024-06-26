#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 * Base
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  ESC |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |   =  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | DEL  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |   -  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |   '  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | LCTRL|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   \  |   /  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | Lalt | LMOD | Layer |Space| /  BkSp /       \ Tab \  |Return| Layer |R-MOD |   #  |
 *            |      |      |  1   |      |/       /         \      \ |      |   2  |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */


    [0] = LAYOUT(
        KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_EQL,
        KC_DEL,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_MINS,
        KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,
        KC_LCTL,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_MUTE,   KC_NO, KC_N,    KC_M,   KC_COMM,  KC_DOT,  KC_NUBS,  KC_SLSH,
                   KC_LALT,   KC_LGUI, MO(1),   KC_SPC,  KC_BSPC,             KC_TAB,   KC_ENT, MO(2), KC_LGUI, KC_NUHS
    ),

/*
 * Layer1
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   `  |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  |  F11 |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | DEL  |   %  |   &  |   {  |   }  |   =  |                    |   \  |   7  |   8  |   9  |   *  |  F12 |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   $  |   ~  |   (  |   )  |   +  |-------.    ,-------|   ^  |   4  |   5  |   6  |   +  |   '  |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * | LCTRL|   "  |   `  |   [  |   ]  |   -  |-------|    |-------|   /  |   1  |   2  |   3  |   -  |   /  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |       | /      /       \      \ |    |  0  |  0   |   .  |
 *            |      |      |      |      |/       /         \      \     |     |      |      |
 *            `----------------------------------'           '------''------------------------'
 */

	[1] = LAYOUT(
            KC_GRV,    KC_F1,    KC_F2,    KC_F3,     KC_F4,    KC_F5,                         KC_F6,    KC_F7,  KC_F8,  KC_F9,  KC_F10,   KC_F11,
            KC_TRNS,   KC_PERC,  KC_AMPR,  KC_LCBR,   KC_RCBR,  KC_EQL,                        KC_NUHS,  KC_P7,  KC_P8,  KC_P9,  KC_PAST,  KC_F12,
            KC_TRNS,   KC_DLR,   KC_PIPE,  KC_LPRN,   KC_RPRN,  KC_PLUS,                       KC_CIRC,  KC_P4,  KC_P5,  KC_P6,  KC_PPLS,  KC_QUOT,
            KC_TRNS,   KC_AT,    KC_GRV,   KC_LBRC,   KC_RBRC,  KC_MINS,  KC_TRNS,   KC_TRNS,  KC_SLSH,  KC_P1,  KC_P2,  KC_P3,  KC_PMNS,
                       KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_P0,  KC_P0,  KC_PDOT
            ),

/*
 * Layer2
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |P-scrn|      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|   ←  |   ↓  |   ↑  |   →  |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |CMD-z |CMD-x |CMD-C |CMD-V |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |       |     | /  DEL  /       \      \ |    |     |      |      |
 *            |      |      |      |      |/       /         \      \     |     |      |      |
 *            `----------------------------------'           '------''------------------------'
 */


	[2] = LAYOUT(
            KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS,
            KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,                         KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS,
            KC_TRNS,   LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_DEL,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
           ),
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)


