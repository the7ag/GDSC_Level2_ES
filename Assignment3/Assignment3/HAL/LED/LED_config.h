/*
 * LED_config.h
 *
 * Created: 04/05/2023 10:01:57 م
 *  Author: The7ag
 */ 


#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_
#include "../../UTILL/stdTypes.h"


#define LED_NUM		3

typedef struct
{
	u8 LED_u8PortID;
	u8 LED_u8PinID;
	u8 LED_u8Connection;
	u8 LED_u8InitState;
}LED_t;


#endif /* LED_CONFIG_H_ */