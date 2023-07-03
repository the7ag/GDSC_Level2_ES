/*
 * std_types.h
 *
 * Created: 04/05/2023 09:55:16 ?
 *  Author: The7ag
 */ 


#ifndef STD_TYPES_H_
#define STD_TYPES_H_
#include "GPRs.h"

typedef unsigned char           uint8;
typedef unsigned short int      uint16;
typedef unsigned long int       uint32;
typedef unsigned long long int  uint64;

typedef signed char             sint8;
typedef signed short int        sint16;
typedef signed long int         sint32;
typedef signed long long int    sint64;

typedef float                   f32_t;
typedef double                  f64_t;
typedef long double             f128_t;

#define NULL (void*)0

#endif /* STD_TYPES_H_ */
