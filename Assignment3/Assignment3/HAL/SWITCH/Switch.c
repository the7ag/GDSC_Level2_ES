/*
 * Switch.c
 *
 * Created: 04/05/2023 10:14:56 م
 *  Author: The7ag
 */ 

#include "../../UTILL/stdTypes.h"
#include "../../UTILL/errorStates.h"

#include "Switch_priv.h"
#include "Switch_config.h"

#include "../../MCAL/DIO/DIO.h"

ES_t Switch_enuInit(SW_t * Copy_AstrSwitchs)
{
	ES_t Local_enuErrorState = ES_NOK;

	if (Copy_AstrSwitchs != NULL)
	{
		u8 Local_u8Iterator =0;
		for (Local_u8Iterator=0; Local_u8Iterator < SW_NUM ; Local_u8Iterator++)
		{
			Local_enuErrorState = DIO_enuSetPinDirection(Copy_AstrSwitchs[Local_u8Iterator].SW_PortID ,Copy_AstrSwitchs[Local_u8Iterator].SW_PinID, DIO_u8INPUT);
			Local_enuErrorState = DIO_enuSetPinValue(Copy_AstrSwitchs[Local_u8Iterator].SW_PortID ,Copy_AstrSwitchs[Local_u8Iterator].SW_PinID,Copy_AstrSwitchs[Local_u8Iterator].SW_Status);
		}
	}
	else
	{
		Local_enuErrorState = ES_NULL_POINTER;
	}

	return Local_enuErrorState;
}

ES_t Switch_enuGetState(SW_t * Copy_AstrSwitchs, u8 * Copy_pu8SwState)
{
	ES_t Local_enuErrorState = ES_NOK;

	if (Copy_AstrSwitchs != NULL && Copy_pu8SwState != NULL)
	{
		Local_enuErrorState = DIO_enuGetPinValue(Copy_AstrSwitchs->SW_PortID, Copy_AstrSwitchs->SW_PinID, Copy_pu8SwState);
	}
	else
	{
		Local_enuErrorState = ES_NULL_POINTER;
	}

	return Local_enuErrorState;
}
