/*
 * Assignment3.c
 *
 * Created: 04/05/2023 09:44:07 م
 * Author : The7ag
 */ 

#include "UTILL/stdTypes.h"
#include "UTILL/errorStates.h"

#include "MCAL/DIO/DIO.h"
#include "HAL/LED/LED_config.h"
#include "HAL/LED/LED.h"
#include "HAL/SWITCH/Switch_config.h"
#include "HAL/SWITCH/Switch.h"
#define F_CPU 8000000UL
#include <util/delay.h>
extern LED_t LED_AstrLedConfig [LED_NUM];
extern SW_t Switch_AstrSwitchState [SW_NUM];
int main(void)
{
	DIO_enuInit();
	LED_enuInit(LED_AstrLedConfig);
	Switch_enuInit(Switch_AstrSwitchState);
	u8 pinstate=0;
	while (1)
	{
		Switch_enuGetState(&Switch_AstrSwitchState[1] , &pinstate);
		if (pinstate==0)
		LED_enuTurnON(&LED_AstrLedConfig[1]);
		else
		LED_enuTurnOFF(&LED_AstrLedConfig[1]);

	}
}
