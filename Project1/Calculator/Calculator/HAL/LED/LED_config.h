/*
 * LED_config.h
 *
 * Created: 04/05/2023 09:47:03 ?
 *  Author: The7ag
 */

#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_


#define LED_NUM		5

typedef struct{
	uint8 SW_uint8PORTID;
	uint8 SW_uint8PinID;
	uint8 SW_uint8Connection;
	uint8 SW_uint8State;
}LED_t;


#endif /* LED_CONFIG_H_ */
