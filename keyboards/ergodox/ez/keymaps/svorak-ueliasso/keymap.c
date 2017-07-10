#include "ergodox.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"


#include "keymap_german.h"

#include "keymap_nordic.h"

#define BASE 0
#define SYMB 1
#define MOUSE 2


enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD,
  
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = KEYMAP(
        // left hand 
        KC_EQUAL,  KC_1,          KC_2,            KC_3,         KC_4,         KC_5,     KC_LEFT,
        KC_TAB,    NO_AM,         NO_OSLH,         NO_AE,        KC_P,         KC_Y,     KC_Y,
        KC_BSPACE, LSFT_T(KC_A),  LCTL_T(KC_O),    LALT_T(KC_E), LGUI_T(KC_U), KC_I,
        KC_LSHIFT, CTL_T(KC_DOT), KC_Q,            KC_J,         KC_K,         KC_X,     ALL_T(KC_NO),
        TT(MOUSE), KC_QUOTE,      LALT(KC_LSHIFT), KC_DELETE,    KC_BSPACE,

        ALT_T(KC_APPLICATION), KC_LGUI,
                               KC_HOME,
        TT(SYMB), KC_DELETE,  KC_END,

        // right hand
        KC_RIGHT,       KC_6,         KC_7,         KC_8,           KC_9,           KC_0,            KC_MINUS,
        KC_G, KC_F,     KC_G,         KC_C,         KC_R,           KC_L,           KC_COMMA,
                        KC_D,         RGUI_T(KC_H), RALT_T(KC_T),   RCTL_T(KC_N),   RSFT_T(KC_S),    NO_MINS,
        MEH_T(KC_NO),   KC_B,         KC_M,         KC_W,           KC_V,           CTL_T(KC_Z),     KC_RSHIFT,
        KC_SPACE,       KC_ENTER,     KC_LBRACKET,  KC_RBRACKET,    KC_RBRACKET,

        KC_LALT,   CTL_T(KC_ESCAPE),
        KC_PGUP,
        KC_PGDOWN, KC_ENTER, TT(SYMB)
    ),

    [SYMB] = KEYMAP(
        // left hand 
// Rad 1
// NO_HALF, // <
// NO_PLUS, // +
// NO_ACUT, // ´
// NO_AM	, // å
// NO_QUOT	, // ¨
// NO_AE	, // ö
// NO_OSLH	, // ä

// Rad 2
// NO_APOS	, //  '  
// NO_LESS	, // §
// NO_MINS , // -
// NO_SECT , // >
// NO_QUO2	, // "
// NO_BULT , // €
// NO_AMPR	, // &

// Rad 3
// NO_SLSH , // /
// NO_LPRN	, // (
// NO_RPRN	, // )
// NO_EQL	, // =
// NO_QUES	, // ?
// NO_GRV	, // `
// 
// Rad 4
// NO_CIRC , // ^
// NO_GRTR	, // °
// NO_SCLN , // ;
// NO_COLN , // :
// NO_UNDS , // _
// NO_AT	, // @
// NO_PND	, // £

// Rad 5
// NO_DLR	, // $
// NO_LCBR , // |
// NO_LBRC , // [
// NO_RBRC , // ]
// NO_RCBR	, // ≈

// Exclude for now
// NO_PIPE , // ¶
// NO_EURO , // é
// NO_TILD , // ~
// NO_BSLS , // ±
// NO_MU , // ’
 
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, LSFT(NO_LBRC),  LSFT(NO_RBRC),  NO_LBRC,        NO_RBRC,        NO_DLR,         KC_TRANSPARENT,
        KC_TRANSPARENT, NO_SCLN,        NO_SLSH,        NO_LPRN,        NO_RPRN,        NO_LCBR,
        KC_TRANSPARENT, NO_COLN,        NO_EQL,         NO_AT,          LSFT(KC_1),     LALT(LSFT(KC_7)),  KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 

        KC_TRANSPARENT,                 KC_TRANSPARENT,
                                        KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

        // right hand
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, NO_QUO2,        NO_QUES,        NO_AMPR,        NO_HALF,        NO_SECT,        KC_TRANSPARENT,
                        LSFT(KC_3),     NO_CIRC,        LSFT(KC_3),     NO_QUO2,        NO_TILD,        KC_TRANSPARENT,
        KC_TRANSPARENT, LSFT(KC_5),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 

        KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),

    [MOUSE] = KEYMAP(
        // left hand 
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_UP,       KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,


        KC_TRANSPARENT,               KC_TRANSPARENT,
                                      KC_TRANSPARENT,
        KC_MS_ACCEL0, KC_TRANSPARENT, KC_TRANSPARENT,

        // right hand
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,

        KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
};

const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
      }
    return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
      break;
    
  }
  return true;
}

void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        case 3:
            ergodox_right_led_3_on();
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        default:
            break;
    }

};
