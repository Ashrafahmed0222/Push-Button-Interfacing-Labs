/*
********************************************* DIO_program.c ************************************************
*  Author:  Ashraf Ahmed Hamed
*  Date:    2/9/2023
*  Layer:   M_CAL
*  SWC:     DIO/GPIO
*/

#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "DIO_private.h"
#include "DIO_interface.h"
#include "DIO_config.h"


DIO_ErrorStatus DIO_enumSetPinDirection (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Direction ){
	DIO_ErrorStatus LOC_enumState = DIO_OK;
	if(Copy_u8PORT <=  DIO_PORTD && Copy_u8PIN <= DIO_PIN7 )
	{


		if(Copy_u8Direction == DIO_PIN_OUTPUT)
		{
			switch(Copy_u8PORT)
			{
				case DIO_PORTA: SET_BIT(DDRA, Copy_u8PIN); break;
				case DIO_PORTB: SET_BIT(DDRB, Copy_u8PIN); break;
				case DIO_PORTC: SET_BIT(DDRC, Copy_u8PIN); break;
				case DIO_PORTD: SET_BIT(DDRD, Copy_u8PIN); break;
			}


		}
		else if (Copy_u8Direction == DIO_PIN_INPUT)
		{
			switch(Copy_u8PORT)
			{
				case DIO_PORTA: CLR_BIT(DDRA, Copy_u8PIN); break;
				case DIO_PORTB: CLR_BIT(DDRB, Copy_u8PIN); break;
				case DIO_PORTC: CLR_BIT(DDRC, Copy_u8PIN); break;
				case DIO_PORTD: CLR_BIT(DDRD, Copy_u8PIN); break;
			}
		}
		else
		{
			LOC_enumState = DIO_NOK;
		}
	}
	else
	{
		LOC_enumState = DIO_NOK;
	}


	return LOC_enumState;
}


/*------------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus DIO_enumSetPinValue (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Value ){
	DIO_ErrorStatus LOC_enumState = DIO_OK;
	if(Copy_u8PORT <= DIO_PORTD && Copy_u8PIN <= DIO_PIN7)
	{
		if(Copy_u8Value == DIO_PIN_HIGH)
		{
			switch(Copy_u8PORT)
			{
				case DIO_PORTA: SET_BIT(PORTA, Copy_u8PIN); break;
				case DIO_PORTB: SET_BIT(PORTB, Copy_u8PIN); break;
				case DIO_PORTC: SET_BIT(PORTC, Copy_u8PIN); break;
				case DIO_PORTD: SET_BIT(PORTD, Copy_u8PIN); break;
			}


		}
		else if (Copy_u8Value == DIO_PIN_LOW)
		{
			switch(Copy_u8PORT)
			{
				case DIO_PORTA: CLR_BIT(PORTA, Copy_u8PIN); break;
				case DIO_PORTB: CLR_BIT(PORTB, Copy_u8PIN); break;
				case DIO_PORTC: CLR_BIT(PORTC, Copy_u8PIN); break;
				case DIO_PORTD: CLR_BIT(PORTD, Copy_u8PIN); break;
			}
		}
		else
		{
			LOC_enumState = DIO_NOK;
		}
	}
	else
	{
		LOC_enumState = DIO_NOK;
	}

	return LOC_enumState;
}

/*--------------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus DIO_enumGetPinValue (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 *Copy_PtrData ){
	DIO_ErrorStatus LOC_enumState = DIO_OK;
	if(Copy_u8PORT <= DIO_PORTD && Copy_u8PIN <= DIO_PIN7)
	{

		switch(Copy_u8PORT)
			{
				case DIO_PORTA: *Copy_PtrData = GET_BIT(PINA, Copy_u8PIN); break;
				case DIO_PORTB: *Copy_PtrData = GET_BIT(PINB, Copy_u8PIN); break;
				case DIO_PORTC: *Copy_PtrData = GET_BIT(PINC, Copy_u8PIN); break;
				case DIO_PORTD: *Copy_PtrData = GET_BIT(PIND, Copy_u8PIN); break;
			}

	}
	else
	{
		LOC_enumState = DIO_NOK;
	}

	return LOC_enumState;
}

/*-----------------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus DIO_enumTogglePinValue  (u8 Copy_u8PORT, u8 Copy_u8PIN                      )
{
	DIO_ErrorStatus LOC_enumState = DIO_OK;

	if(Copy_u8PORT <= DIO_PORTD)
	{
		switch(Copy_u8PORT)
			{
				case DIO_PORTA: TOG_BIT(PORTA, Copy_u8PIN); break;
				case DIO_PORTB: TOG_BIT(PORTB, Copy_u8PIN); break;
				case DIO_PORTC: TOG_BIT(PORTC, Copy_u8PIN); break;
				case DIO_PORTD: TOG_BIT(PORTD, Copy_u8PIN); break;
			}
	}
	else
	{
		LOC_enumState = DIO_NOK;
	}
	return LOC_enumState;
}

/*--------------------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus DIO_enumSetPortDirection (u8 Copy_u8PORT, u8 Copy_u8Direction )
{
	DIO_ErrorStatus LOC_enumState = DIO_OK;
	if(Copy_u8PORT <= DIO_PORTD)
	{


			switch(Copy_u8PORT)
			{
				case DIO_PORTA: DDRA = Copy_u8Direction;break;


				case DIO_PORTB: DDRB = Copy_u8Direction;break;


				case DIO_PORTC: DDRC = Copy_u8Direction;break;


				case DIO_PORTD: DDRD = Copy_u8Direction;break;


				default :       LOC_enumState = DIO_NOK    ;break;
			}

	}
		else
		{
			LOC_enumState = DIO_NOK;
		}

	return LOC_enumState;
}


/*------------------------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus DIO_enumSetPortValue     (u8 Copy_u8PORT, u8 Copy_u8Value     ){
	DIO_ErrorStatus LOC_enumState = DIO_OK;
	if(Copy_u8PORT <= DIO_PORTD)
	{


			switch(Copy_u8PORT)
			{
				case DIO_PORTA: PORTA = Copy_u8Value;break;


				case DIO_PORTB: PORTB = Copy_u8Value;break;


				case DIO_PORTC: PORTC = Copy_u8Value;break;


				case DIO_PORTD: PORTD = Copy_u8Value;break;


				default :       LOC_enumState = DIO_NOK    ;break;
			}

	}
		else
		{
			LOC_enumState = DIO_NOK;
		}

	return LOC_enumState;
}




/*------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus   DIO_enumGetPortValue         (u8 Copy_u8PORT , u8 *Copy_PortPtrData                   )
{
	DIO_ErrorStatus LOC_enumState = DIO_OK;
	if(Copy_u8PORT <= DIO_PORTD)
	{
		switch(Copy_u8PORT)
			{
				case DIO_PORTA: *Copy_PortPtrData = PINA;break;


				case DIO_PORTB: *Copy_PortPtrData = PINB;break;


				case DIO_PORTC: *Copy_PortPtrData = PINC;break;

				case DIO_PORTD: *Copy_PortPtrData = PIND;break;
				default :       LOC_enumState = DIO_NOK       ;break;

			}
	}
	else
	{
		LOC_enumState = DIO_NOK;
	}
	return LOC_enumState;
}




/*--------------------------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus DIO_enumTogglePortValue  (u8 Copy_u8PORT                     ){
	DIO_ErrorStatus LOC_enumState = DIO_OK;
		if(Copy_u8PORT <= DIO_PORTD)
		{


				switch(Copy_u8PORT)
				{
					case DIO_PORTA: PORTA = ~PORTA;break;


					case DIO_PORTB: PORTB = ~PORTB;break;


					case DIO_PORTC: PORTC = ~PORTC;break;


					case DIO_PORTD: PORTD = ~PORTD;break;


					default :       LOC_enumState = DIO_NOK    ;break;
				}

		}
			else
			{
				LOC_enumState = DIO_NOK;
			}

		return LOC_enumState;
}

