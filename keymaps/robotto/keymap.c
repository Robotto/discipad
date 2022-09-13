/* Copyright 2019 COSEYFANNITUTTI
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

#define _BL 0

/*
//https://github.com/qmk/qmk_firmware/blob/master/docs/feature_advanced_keycodes.md
const key_override_t esc_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL); //shift+backspace -> delete

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
  &esc_key_override,
  NULL
};
*/

const uint16_t PROGMEM comboboiiii[] = {KC_PAST, KC_PMNS, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(comboboiiii, KC_ESC),
    //COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT_numpad_5x4(
      KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, 
      KC_P7,   KC_P8,   KC_P9,            
      KC_P4,   KC_P5,   KC_P6,   KC_PPLS, 
      KC_P1,   KC_P2,   KC_P3,            
      KC_P0,   KC_PDOT,          KC_PENT  )
};
