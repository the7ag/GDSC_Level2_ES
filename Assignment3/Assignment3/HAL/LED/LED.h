/*
 * LED.h
 *
 * Created: 04/05/2023 10:05:23 م
 *  Author: The7ag
 */ 


#ifndef LED_H_
#define LED_H_


ES_t LED_enuInit(LED_t * Copy_pstrLedConfig);

ES_t LED_enuTurnON(LED_t * Copy_pstrLedID);

ES_t LED_enuTurnOFF(LED_t * Copy_pstrLedID);
#endif /* LED_H_ */