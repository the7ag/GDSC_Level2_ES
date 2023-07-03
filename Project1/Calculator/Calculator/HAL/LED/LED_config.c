/*
 * LED_config.c
 *
 * Created: 04/05/2023 09:47:03 ?
 *  Author: The7ag
 */

#include "../../LIB/std_types.h"
#include "../../LIB/ErrorStates.h"

#include "LED_config.h"
#include "LED_priv.h"

#include "../../MCAL/DIO/DIO_int.h"


LED_t SW_AstrLEDs[LED_NUM] = {
		{DIO_uint8_PORTA, DIO_uint8_PIN1, LED_uint8SINK, LOW},
		{DIO_uint8_PORTA, DIO_uint8_PIN2, LED_uint8SOURCE, LOW},
		{DIO_uint8_PORTA, DIO_uint8_PIN3, LED_uint8SOURCE, LOW},
		{DIO_uint8_PORTA, DIO_uint8_PIN4, LED_uint8SINK, LOW},
		{DIO_uint8_PORTA, DIO_uint8_PIN5, LED_uint8SINK, LOW}
};
