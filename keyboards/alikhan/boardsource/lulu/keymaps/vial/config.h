/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x7F, 0xE0, 0x25, 0xA8, 0xDE, 0xB6, 0xAA, 0x63}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 6

#define SPLIT_USB_TIMEOUT 4000

#if defined(__AVR_ATmega32U4__)
    #undef ENABLE_RGB_MATRIX_BAND_SAT
    #undef ENABLE_RGB_MATRIX_BAND_VAL
#endif
