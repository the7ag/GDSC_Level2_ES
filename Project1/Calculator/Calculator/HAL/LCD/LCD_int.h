/*
 * LCD_int.h
 *
 * Created: 04/05/2023 09:47:03 ?
 *  Author: The7ag
 */

#ifndef LCD_INT_H_
#define LCD_INT_H_

ErrorStates_t LCD_enuInit(void);

ErrorStates_t LCD_enuSendCommand(uint8 Copy_uint8Command);

ErrorStates_t LCD_enuDisplayChar(uint8 Copy_uint8Data);

ErrorStates_t LCD_enuDisplayString(uint8* Copy_uint8Data);

ErrorStates_t LCD_enuDisplayInteger(sint64 Copy_uint32Data);

ErrorStates_t LCD_enuDisplayFloat(f64_t Copy_f64_tData);

void LCD_voidGotoxy(uint8 row,uint8 column);

#endif /* LCD_INT_H_ */
