/*
 * KPAD_config.h
 *
 * Created: 04/05/2023 09:47:03 ?
 *  Author: The7ag
 */

#ifndef KPAD_CONFIG_H_
#define KPAD_CONFIG_H_

#define NUM_OF_KPADS	1

#define NUM_OF_COLUMNS	4
#define NUM_OF_ROWS		4


typedef struct{
	struct{
		uint8 R_uint8Port;
		uint8 R_uint8Pin;
	}KPAD_strRows[NUM_OF_ROWS];

	struct{
			uint8 C_uint8Port;
			uint8 C_uint8Pin;
		}KPAD_strCols[NUM_OF_COLUMNS];
}KPAD_t;

#define PAD_KEY_VALUES	{\
		{ '7', '8', '9', '/'},\
		{ '4', '5', '6', '*'},\
		{ '1', '2', '3', '-'},\
		{'c','0','=', '+'}\
	}
#endif /* KPAD_CONFIG_H_ */
