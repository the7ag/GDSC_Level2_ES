/*
 * SW_config.c
 *
 * Created: 04/05/2023 09:47:03 ?
 *  Author: The7ag
 */


#include "../../LIB/std_types.h"
#include "SW_config.h"
#include "../../MCAL/DIO/DIO_int.h"

SW_t SW_AstrSwitches[SW_NUM] = {
		{DIO_uint8_PORTA, DIO_uint8_PIN0, PULL_UP},
		{DIO_uint8_PORTB, DIO_uint8_PIN3, PULL_UP},
		{DIO_uint8_PORTC, DIO_uint8_PIN4, PULL_UP},
		{DIO_uint8_PORTD, DIO_uint8_PIN5, PULL_UP}
};
