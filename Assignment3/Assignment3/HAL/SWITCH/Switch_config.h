/*
 * Switch_config.h
 *
 * Created: 04/05/2023 10:12:10 م
 *  Author: The7ag
 */ 


#ifndef SWITCH_CONFIG_H_
#define SWITCH_CONFIG_H_
#include "../../UTILL/stdTypes.h"

#define SW_NUM		3
typedef struct
{
	u8 SW_PortID;
	u8 SW_PinID;
	u8 SW_Status;
}SW_t;




#endif /* SWITCH_CONFIG_H_ */