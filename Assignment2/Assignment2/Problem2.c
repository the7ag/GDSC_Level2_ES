/*
 * Problem2.c
 *
 * Created: 19/04/2023 02:22:12 م
 *  Author: The7ag
 */ 
#include "Problem2.h"
void problem2()
{
	ClearBit(DDRA,0);
	ClearBit(DDRA,1);
	SetBit(DDRA,5);
	SetBit(PORTA,5);
	SetBit(DDRA,6);
	SetBit(PORTA,6);
	int count=0;
	while(1)
	{
		if (ReadBit(PINA,0)==1)
		{
			_delay_ms(350);
			count++;
			if (count>9)
			{
				count=9;
			}else
			{
			ClearBit(PORTA,5);
			SetBit(PORTA,5);	
			}
		}
		if (ReadBit(PINA,1)==1)
		{
			_delay_ms(350);
			count--;
			if (count<0)
			{
				count=0;
			}else
			{
			ClearBit(PORTA,6);
			SetBit(PORTA,6);	
			}
		}
	}
}