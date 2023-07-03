/*
 * LED_int.h
 *
 * Created: 04/05/2023 09:47:03 ?
 *  Author: The7ag
 */

#ifndef LED_INT_H_
#define LED_INT_H_

#define LED_SINK	8
#define LED_SOURCE	9

ErrorStates_t LED_enuInit(LED_t* Copy_pstrLeds);

ErrorStates_t LED_enuTurnON(LED_t* Copy_pstrLeds);

ErrorStates_t LED_enuTurnOFF(LED_t* Copy_pstrLeds);

void LCD_voidGotoxy(uint8 row,uint8 column);
#endif /* LED_INT_H_ */
