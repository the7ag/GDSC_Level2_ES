/*
 * problem1.c
 *
 * Created: 19/04/2023 01:45:10 م
 *  Author: The7ag
 */ 
#include "problem1.h"
void problem1(void)
{
	SetBit(DDRA,0);
	while (1)
	{
		SetBit(PORTA,0);
		_delay_ms(1000);
		ClearBit(PORTA,0);
		_delay_ms(1000);
	}
}

