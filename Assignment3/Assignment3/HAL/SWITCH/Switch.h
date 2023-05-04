/*
 * Switch.h
 *
 * Created: 04/05/2023 10:14:24 م
 *  Author: The7ag
 */ 


#ifndef SWITCH_H_
#define SWITCH_H_

ES_t Switch_enuInit(SW_t * Copy_AstrSwitchs);

ES_t Switch_enuGetState(SW_t * Copy_AstrSwitchs, u8 * Copy_pu8SwState);



#endif /* SWITCH_H_ */