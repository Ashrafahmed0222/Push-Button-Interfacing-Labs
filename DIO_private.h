



/*
********************************************* DIO_private.h ************************************************
*  Author:  Ashraf Ahmed Hamed
*  Date:    2/9/2023
*  Layer:   M_CAL
*  SWC:     DIO/GPIO
*/


#include "BIT_MATH.h"
#include "STD_TYPES.h"


#ifndef _DIO_PRIVATE_H_
#define _DIO_PRIVATE_H_

/*  Group A  */
/* dataSheet --> Register summary */
#define PORTA *((volatile u8*)0X3B)
#define DDRA  *((volatile u8*)0X3A)
#define PINA  *((volatile u8*)0X39)


/*  Group B  */

#define PORTB *((volatile u8*)0X38)
#define DDRB  *((volatile u8*)0X37)
#define PINB  *((volatile u8*)0X36)


/*  Group C  */

#define PORTC *((volatile u8*)0X35)
#define DDRC  *((volatile u8*)0X34)
#define PINC  *((volatile u8*)0X33)


/*  Group D  */

#define PORTD *((volatile u8*)0X32)
#define DDRD  *((volatile u8*)0X31)
#define PIND  *((volatile u8*)0X30)




#endif
