/*
 * problem1.h
 *
 * Created: 19/04/2023 01:44:30 م
 *  Author: The7ag
 */ 


#ifndef PROBLEM1_H_
#define PROBLEM1_H_

#include <avr/io.h>
#define  F_CPU 8000000
#include <util/delay.h>
#define SetBit(Reg,Pin)		(Reg) |= (1<<(Pin))
#define ClearBit(Reg,Pin)	(Reg) &= ~(1<<(Pin))
#define ToggleBit(Reg,Pin)	(Reg) |= (1<<(Pin))
#define ReadBit(Reg,Pin)	(((Reg)>>(Pin))&1)

void problem1();



#endif /* PROBLEM1_H_ */