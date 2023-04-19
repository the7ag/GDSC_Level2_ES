/*
 * problem2.c
 *
 * Created: 19/04/2023 01:47:18 م
 *  Author: The7ag
 */ 
#include "problem2.h"
void problem2()
{
	for (char i=0;i<8;i++)
	{
		SetBit(DDRA,i);
	}
	while(1)
	{
		for (char i=0;i<8;i++)
		{
			SetBit(PORTA,i);
			SetBit(PORTA,i-1);
			SetBit(PORTA,i+1);
			_delay_ms(1000);
			ClearBit(PORTA,i-1);
		}
		ClearBit(PORTA,7);
	}
}
