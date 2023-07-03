/*
 * LCD_config.h
 *
 * Created: 04/05/2023 09:47:03 ?
 *  Author: The7ag
 */

#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_


#define LCD_BIT_MODE	FOUR_BIT_MODE

#define RS_PORT			DIO_uint8_PORTB
#define RS_PIN			DIO_uint8_PIN0

#define RW_PORT       	DIO_uint8_PORTB
#define RW_PIN         	DIO_uint8_PIN1

#define EN_PORT        	DIO_uint8_PORTB
#define EN_PIN         	DIO_uint8_PIN2

#define D7_PORT       	DIO_uint8_PORTB
#define D7_PIN         	DIO_uint8_PIN3

#define D6_PORT        	DIO_uint8_PORTB
#define D6_PIN         	DIO_uint8_PIN4

#define D5_PORT        	DIO_uint8_PORTB
#define D5_PIN         	DIO_uint8_PIN5

#define D4_PORT       	DIO_uint8_PORTB
#define D4_PIN        	DIO_uint8_PIN6

#define D3_PORT         DIO_uint8_PORTB
#define D3_PIN          DIO_uint8_PIN7

#define D2_PORT         DIO_uint8_PORTC
#define D2_PIN          DIO_uint8_PIN0

#define D1_PORT         DIO_uint8_PORTC
#define D1_PIN          DIO_uint8_PIN1

#define D0_PORT       	DIO_uint8_PORTC
#define D0_PIN        	DIO_uint8_PIN2

#define FRACTION_MAX_RANGE	4

#endif /* LCD_CONFIG_H_ */
