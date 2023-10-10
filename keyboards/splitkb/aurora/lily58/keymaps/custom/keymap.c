#include QMK_KEYBOARD_H

enum layer_number {
  _COLEMAK_DH = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
  _QWERTY,
  _NAV,
  _MOUSE,
  _BUTTON,
  _MEDIA,
  _NUM,
  _NUM2,
  _SYM,
  _FUN,
  _SYM2,
  _NAV_SINGLE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                        KC_RGUI, LT(8, KC_ESC), LT(6, KC_TAB), LT( 5, KC_SPC) , LT( 13,KC_ENT), LT(10, KC_BSPC), LT(12,KC_DEL ), KC_RGUI
),

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_COLEMAK_DH] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_LALT,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                     KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,    KC_RALT,
  KC_LSFT,  KC_A , LALT_T(KC_R), CTL_T(KC_S), SFT_T(KC_T), KC_G,         KC_M,    RSFT_T(KC_N),    RCTL_T(KC_E),   RALT_T(KC_I),    KC_O, KC_QUOT KC_RSFT,
  KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V, KC_LBRC,  KC_RBRC,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RCTL,
                        KC_RGUI, LT(8, KC_ESC), LT(6, KC_TAB), LT( 5, KC_SPC) , LT( 13,KC_ENT), LT(10, KC_BSPC), LT(12,KC_DEL ), KC_RGUI
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   -  |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |   _  |   +  |   {  |   }  |   |  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_LOWER] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______,_______, _______, _______,
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_GRV, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
  _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |-------.    ,-------|      | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |  F7  |  F8  |  F9  | F10  | F11  | F12  |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |   \  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_RAISE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
  KC_F1,  KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,                       XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   _______, _______,  KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
                             _______, _______, _______,  _______, _______,  _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  ),

  [_NAV] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      KC_AGIN,  KC_PSTE, KC_UP, KC_CUT, KC_UNDO, _______,
  _______, _______, KC_LALT, KC_LCTL, KC_LSFT,   _______,                    KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, _______,
  _______, _______, _______, _______, _______, _______,   _______, _______,  KC_INS, KC_HOME, KC_PGDN,  KC_PGUP, KC_END,  _______,
                             _______, _______, _______,  _______, KC_ENTER,  KC_BSPC, KC_DELETE, _______
  ),

  [_MOUSE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                      KC_AGIN,  KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, _______,
  _______, _______, KC_LALT, KC_LCTL, KC_LSFT,   _______,                    KC_CAPS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,
  _______, _______, _______, _______, _______, _______,   _______, _______,  KC_INS,  KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,  _______,
                             _______, _______, _______,  _______,  KC_BTN2,  KC_BTN1, KC_BTN3, _______
  ),

  [_BUTTON] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, KC_UNDO,  KC_CUT, KC_COPY, KC_PSTE, KC_AGIN,                      KC_AGIN,  KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, _______,
  _______, _______, KC_LALT, KC_LCTL, KC_LSFT,   _______,                    _______, KC_RSFT, KC_RCTL, KC_RALT, _______, _______,
  _______, KC_UNDO,  KC_CUT, KC_COPY, KC_PSTE, KC_AGIN,   _______, _______,  KC_AGIN,  KC_PSTE, KC_COPY, KC_CUT, KC_UNDO,  _______,
                             _______, KC_BTN3, KC_BTN1,  KC_BTN2,  KC_BTN2,  KC_BTN1, KC_BTN3, _______
  ),

  [_MEDIA] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                     RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, _______,
  _______, _______, KC_LALT, KC_LCTL, KC_LSFT,   _______,                    _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______,
  _______, _______, _______, _______, _______, _______,   _______, _______,  _______,  _______, _______, _______, _______,  _______,
                             _______, _______, _______,  _______,  KC_STOP, KC_MPLY, KC_MUTE, _______
  ),

  [_NUM] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC,                     _______, _______, _______, _______, _______, _______,
  _______, KC_SCLN,    KC_4,    KC_5,    KC_6, KC_EQL,                    _______, KC_RSFT,KC_RCTL,KC_RALT, _______, _______,
  _______, KC_GRAVE,   KC_1,    KC_2,    KC_3, KC_BSLS,   _______, _______,  _______,  _______, _______, _______, _______,  _______,
                             _______,  KC_DOT,    KC_0,  KC_MINS,  _______, _______, _______, _______
  ),
   [_NUM2] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC,                     _______, _______, _______, _______, _______, _______,
  _______, KC_SCLN,    KC_4,    KC_5,    KC_6, KC_EQL,                    _______, KC_RSFT,KC_RCTL,KC_RALT, _______, _______,
  _______, KC_GRAVE,   KC_1,    KC_2,    KC_3, KC_BSLS,   _______, _______,  _______,  _______, _______, _______, _______,  _______,
                             _______,  KC_DOT,    KC_0,  KC_MINS,  _______, _______, _______, _______
  ),


  [_SYM] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                     _______, _______, _______, _______, _______, _______,
  _______, KC_COLN,  KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,                    _______, KC_RSFT,KC_RCTL,KC_RALT, _______, _______,
  _______, KC_TILD, KC_EXLM,   KC_AT, KC_HASH, KC_PIPE,   _______, _______,  _______,  _______, _______, _______, _______,  _______,
                             _______, KC_LPRN, KC_RPRN,  KC_UNDS,  _______, _______, _______, _______
  ),

  [_FUN] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR,                     _______, _______, _______, _______, _______, _______,
  _______, KC_F11,  KC_F4, KC_F5, KC_F6, KC_SCRL,                    _______, KC_RSFT,KC_RCTL,KC_RALT, _______, _______,
  _______, KC_F10, KC_F1,   KC_F2, KC_F3, KC_PAUS,   _______, _______,  _______,  _______, _______, _______, _______,  _______,
                             _______, KC_APP, KC_SPC, KC_TAB,  _______, _______, _______, _______
  ),

  [_SYM2] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, KC_PERC, KC_AMPR, KC_LCBR, KC_RCBR, KC_ASTR,                     _______, _______, _______, _______, _______, _______,
  _______, KC_COLN,  KC_DLR, KC_LPRN, KC_RPRN, KC_PLUS,                    _______, KC_RSFT,KC_RCTL,KC_RALT, _______, _______,
  KC_HASH, KC_TILD, KC_EXLM,  KC_LBRC, KC_RBRC, KC_PIPE,   _______, _______,  _______,  _______, _______, _______, _______,  _______,
                             _______,  KC_AT, KC_CIRC,  KC_UNDS,  _______, _______, _______, _______
  ),

  [_NAV_SINGLE] = LAYOUT(
  _______, _______, _______, KC_UP, _______, _______,                     _______, _______, KC_UP, _______, _______, _______,
  _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,                      KC_AGIN,  KC_LEFT, KC_DOWN, KC_RGHT, KC_UNDO, _______,
  _______, _______, KC_LALT, KC_LCTL, KC_LSFT,   _______,                    KC_CAPS, KC_RSFT, KC_RCTL, KC_RALT, XXXXXXX, _______,
  _______, _______, _______, _______, _______, _______,   _______, _______,  KC_INS, KC_HOME, KC_PGDN,  KC_PGUP, KC_END,  _______,
                             _______, _______, _______,  _______, KC_ENTER,  KC_BSPC, KC_DELETE, _______
  ),
};



// layer_state_t layer_state_set_user(layer_state_t state) {
//   return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _RAISE:
        rgblight_setrgb (0x00,  0x00, 0xFF);
        break;
    case _LOWER:
        rgblight_setrgb (0xFF,  0x00, 0x00);
        break;
    case _ADJUST:
        rgblight_setrgb (0x7A,  0x00, 0xFF);
        break;
    default: //  for any other layers, or the default layer
        rgblight_setrgb (0x00,  0xFF, 0xFF);
        break;
    }
  return state;
}


//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}