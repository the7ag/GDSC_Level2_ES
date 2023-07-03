/*
 * SW_int.h
 *
 * Created: 04/05/2023 09:47:03 ?
 *  Author: The7ag
 */

#ifndef SW_INT_H_
#define SW_INT_H_



ErrorStates_t SW_enuInit(SW_t* Copy_pstrSwitches);

ErrorStates_t SW_enuGetState(SW_t* Copy_pstrSwitches, uint8* Copy_puint8Value);

#endif /* SW_INT_H_ */
