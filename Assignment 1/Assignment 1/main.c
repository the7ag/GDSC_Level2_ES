/*
 * Assignment 1.c
 *
 * Created: 19/04/2023 01:30:28 م
 * Author : The7ag
 */ 

#include <avr/io.h>
#define  F_CPU 8000000
#include <util/delay.h>
#define SetBit(Reg,Pin)		Reg |= (1<<Pin)
#define ClearBit(Reg,Pin)	Reg &= ~(1<<Pin)
#define ToggleBit(Reg,Pin)	Reg |= (1<<Pin)
#define ReadBit(Reg,Pin)	((Reg>>Pin)&1)

int main(void)
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

