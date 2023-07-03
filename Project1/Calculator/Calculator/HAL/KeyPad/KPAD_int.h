/*
 * KPAD_int.h
 *
 * Created: 04/05/2023 09:47:03 ?
 *  Author: The7ag
 */

#ifndef KPAD_INT_H_
#define KPAD_INT_H_

ErrorStates_t KPAD_enuInit(KPAD_t* Copy_pstrKeyPadConfig);

ErrorStates_t KPAD_enuGetPressedkey(KPAD_t* Copy_pstrKeyPadConfig, uint8* Copy_puint8Value);

#endif /* KPAD_INT_H_ */
