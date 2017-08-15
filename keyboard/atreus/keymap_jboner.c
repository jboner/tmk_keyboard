#include "keymap_common.h"

/*
  Layout by jboner
      OPT_DEFS=-DTEENSY
      make teensy KEYMAP=jboner
*/

#define KC_EXLM ACTION_MODS_KEY(MOD_LSFT, KC_1)
#define KC_AT   ACTION_MODS_KEY(MOD_LSFT, KC_2)
#define KC_HASH ACTION_MODS_KEY(MOD_LSFT, KC_3)
#define KC_DLR  ACTION_MODS_KEY(MOD_LSFT, KC_4)
#define KC_PERC ACTION_MODS_KEY(MOD_LSFT, KC_5)
#define KC_CIRC ACTION_MODS_KEY(MOD_LSFT, KC_6)
#define KC_AMPR ACTION_MODS_KEY(MOD_LSFT, KC_7)
#define KC_ASTR ACTION_MODS_KEY(MOD_LSFT, KC_8)
#define KC_LPRN ACTION_MODS_KEY(MOD_LSFT, KC_9)
#define KC_RPRN ACTION_MODS_KEY(MOD_LSFT, KC_0)
#define KC_UNDS ACTION_MODS_KEY(MOD_LSFT, KC_MINUS)
#define KC_PLUS ACTION_MODS_KEY(MOD_LSFT, KC_EQL)
#define MY_COLN ACTION_MODS_KEY(MOD_LSFT, MY_SCLN)
#define KC_QUES ACTION_MODS_KEY(MOD_LSFT, KC_SLSH)
#define KC_TILD ACTION_MODS_KEY(MOD_LSFT, KC_GRV)
#define KC_PIPE ACTION_MODS_KEY(MOD_LSFT, KC_BSLS)
#define KC_LCBR ACTION_MODS_KEY(MOD_LSFT, KC_LBRC)
#define KC_RCBR ACTION_MODS_KEY(MOD_LSFT, KC_RBRC)
#define KC_DQT  ACTION_MODS_KEY(MOD_LSFT, KC_QUOT)
#define KC_LABK ACTION_MODS_KEY(MOD_LSFT, KC_COMM)
#define KC_RABK ACTION_MODS_KEY(MOD_LSFT, KC_DOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 * ,-----------------------------------------------------------------------------------.
 * |   "  |   ,  |   .  |   P  |   Y  |      |      |   F  |   G  |   C  |   R  |   L  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   A  |   O  |   E  |   U  |   I  |      |      |   D  |   H  |   T  |   N  |   S  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   ;  |   Q  |   J  |   K  |   X  |      |      |   B  |   M  |   W  |   V  |   Z  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | CMD  | CTRL | ALT  | LOWER| SHIFT| CMD  | TAB  | SPC  | RAISE| VoL- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
  KEYMAP(KC_QUOT, KC_COMM,  KC_DOT,  KC_P,     KC_Y,                      KC_F,    KC_G,    KC_C,    KC_R,    KC_L, \
         KC_A,    KC_O,     KC_E,    KC_U,     KC_I,                      KC_D,    KC_H,    KC_T,    KC_N,    KC_S, \
         KC_SCLN, KC_Q,     KC_J,    KC_K,     KC_X,                      KC_B,    KC_M,    KC_W,    KC_V,    KC_Z, \
         KC_LGUI, KC_LCTL,  KC_LALT, KC_FN0,   KC_LSFT, KC_TAB,  KC_LGUI, KC_SPC,  KC_FN1,  KC_VOLD, KC_VOLU, KC_MPLY),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |  ~   |   !  |   @  |   #  |   $  |      |      |   %  |   *  |   (  |   )  |  ?   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |      |      |   -  |   +  |   {  |   }  |  /   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  F6  |  F7  |  F8  |  F9  |  F10 |      |      |   *  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  F11 |  F12 |      | LOWER| SHIFT| CMD  | DEL  | BSPC |  ENT |ARROWS|      |  |   |
 * `-----------------------------------------------------------------------------------'
 */
  KEYMAP(KC_TILD, KC_EXLM,  KC_AT,   KC_HASH,  KC_DLR,                     KC_PERC, KC_ASTR,  KC_LPRN,  KC_RPRN, SHIFT(KC_SLSH), \
         KC_F1,   KC_F2,    KC_F3,   KC_F4,    KC_F5,                      KC_MINS, KC_PLUS,  KC_LCBR,  KC_RCBR, KC_SLSH, \
         KC_F6,   KC_F7,    KC_F8,   KC_F9,    KC_F10,                     KC_ASTR, KC_EQL,   KC_LBRC,  KC_RBRC, KC_BSLS, \
         KC_F11,  KC_F12,   KC_NO,   KC_FN0,   KC_LSFT, KC_DEL, KC_LGUI,   KC_BSPC, KC_ENT,   KC_FN4,   KC_NO,   KC_PIPE),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |  `   | Home |  Up  | End  | PgUp |      |      |      |   7  |   8  |   9  |   0  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  %   | Left | Down |Right | PgDn |      |      |      |   4  |   5  |   6  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  ^   |      |      |      |      |      |      |      |   1  |   2  |   3  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | BOOT |      |      |      |SHIFT |  GUI |      | SPC  | RAISE| RESET|   0  |      |
 * `-----------------------------------------------------------------------------------'
 */
  KEYMAP(KC_GRV,   KC_HOME,  KC_UP,     KC_END,    KC_PGUP,                      KC_NO,   KC_7,    KC_8,    KC_9,   KC_0, \
         KC_PERC,  KC_LEFT,  KC_DOWN,   KC_RIGHT,  KC_PGDN,                      KC_NO,   KC_4,    KC_5,    KC_6,   KC_NO, \
         KC_CIRC,  KC_NO,    KC_NO,     KC_NO,     KC_NO,                        KC_NO,   KC_1,    KC_2,    KC_3,   KC_NO, \
         KC_FN3,   KC_NO,    KC_NO,     KC_NO,     KC_LSFT,  KC_NO,  KC_LGUI,    KC_SPC,  KC_FN1,  KC_FN2,  KC_0,   KC_NO)
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),     // switch to LOWER
  [1] = ACTION_LAYER_MOMENTARY(2),     // switch to RAISE
  [2] = ACTION_LAYER_SET_CLEAR(0),     // switch back to layer 0
  [3] = ACTION_FUNCTION(BOOTLOADER),   // put controller into bootloader mode
  [4] = ACTION_LAYER_SET(2, ON_PRESS), // switch to RAISE (sticky)
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  if (id == BOOTLOADER) {
    bootloader();
  }
}
