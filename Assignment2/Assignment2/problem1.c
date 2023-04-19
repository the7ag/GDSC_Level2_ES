/*
 * problem1.c
 *
 * Created: 19/04/2023 02:09:43 م
 *  Author: The7ag
 */ 
#include "Problem1.h"
void problem1()
{
	ClearBit(DDRB,0);
	ClearBit(DDRB,1);
	ClearBit(DDRB,2);
	SetBit(DDRA,0);
	SetBit(DDRA,1);
	while(1)
	{

		if ((ReadBit(PINB,0)==1))
		{
			_delay_ms(10);
			SetBit(PORTA,0);
		}
		else if ((ReadBit(PINB,1)==1))
		{
			_delay_ms(10);
			SetBit(PORTA,1);
		}
		else if ((ReadBit(PINB,2)==1))
		{
			_delay_ms(10);
			SetBit(PORTA,0);
			SetBit(PORTA,1);
		}else
		{
			ClearBit(PORTA,0);
			ClearBit(PORTA,1);
		}
	}
}