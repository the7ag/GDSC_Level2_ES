/*
 * LDC_priv.h
 *
 * Created: 04/05/2023 09:47:03 ?
 *  Author: The7ag
 */

#ifndef LCD_PRIV_H_
#define LCD_PRIV_H_

#define EIGHT_BIT_MODE	90
#define FOUR_BIT_MODE	80

static inline ErrorStates_t LCD_enuToSendCommand(uint8 Copy_uint8Command);

static inline ErrorStates_t LCD_enuSendData(uint8 Copy_uint8Data);

static inline ErrorStates_t LCD_enuDisplayNumber(sint64 Copy_uint32Data);

#endif /* LCD_PRIV_H_ */
