/*
 * SEG_int.h
 *
 * Created: 04/05/2023 09:47:03 ?
 *  Author: The7ag
 */

#ifndef SEG_INT_H_
#define SEG_INT_H_

ErrorStates_t SEG_enuInit(SEG_t* Copy_pstrSevenSeg);

ErrorStates_t SEG_enuEnableCommon(SEG_t* Copy_pstrSevenSeg);

ErrorStates_t SEG_enuDisableCommon(SEG_t* Copy_pstrSevenSeg);

ErrorStates_t SEG_enuEnableDot(SEG_t* Copy_pstrSevenSeg);

ErrorStates_t SEG_enuDisableDot(SEG_t* Copy_pstrSevenSeg);

ErrorStates_t SEG_enuDisplayNum(SEG_t* Copy_pstrSevenSeg, uint8 Copy_uint8Number);


#endif /* SEG_INT_H_ */
