#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID		0x0000
#define PRODUCT_ID		0x0000
#define DEVICE_VER		0x0000
#define MANUFACTURER		N/A	
#define PRODUCT 		White Hole 40
#define DESCRIPTION		Lorem ipsum dolor sit amet


/* Key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* Key matrix pins 
 * ROWS: Top to Bottom
 * COLS: Left to Right
 */

#define MATRIX_ROW_PINS { B3, B2, B6, B1 }
#define MATRIX_COL_PINS { D2, D3, F4, F5, D1, D0, D4, C6, D7, E6, B4, B5 }


#define UNUSED_PINS


/* Diode Direction 
 * Note: The real diode doesnt have the A letter, just to clarify.
 *
 * (Anode)          (Anode) 
 *  │o               │o
 * ┌┴┐         o    ┌┴┐         o
 * │A│    O         │A│    O
 * ├─┤              ├─┤      
 * └┬┘              └┬┘
 *  └────────────────┴───────────── (Cathode on ROW)
 *
 * COL2ROW : COL = Anode(+), ROW = Cathode (-, black line on diode), the example above
 * ROW2COL : ROW = Anode(+), COL = Cathode (-)
 */
#define DIODE_DIRECTION COL2ROW


/* Debounce reduces chatter (unintended double-presses)
 * set 0 if debouncing is not needed
 */
#define DEBOUNCING_DELAY 5


/* Define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST


/* Mechanical locking support. 
 * For old vintage mechanical keyboard, with MX lock switches feature
 */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchrozine hack */
//#define LOCKING_RESYNC_ENABLE


/* Key combination for command */
#define IS_COMMAND() ( \
	keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* Mouse configuration */
#define MOUSEKEY_INTERNAL			16
#define MOUSEKEY_DELAY			0
#define MOUSEKEY_TIME_TO_MAX      20
#define MOUSEKEY_MAX_SPEED		7
#define MOUSEKEY_WHEEL_DELAY 		0
#define MOUSEKEY_WHEEL_MAX_SPEED  3


/* Audio zone */
// #define C6_AUDIO
// #define AUDIO_CLICKY


#define PERMISSIVE_HOLD
#define TAPPING_TOGGLE 2
#define RETRO_TAPPING

#endif



