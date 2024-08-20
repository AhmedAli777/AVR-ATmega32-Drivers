/*
 *      Author: Ahmed Ali
 *      Email:  Ahmali777@gmail.com
 */


#include "DC_int.h"
void DC_init()
{
	DIO_voidSetPinDir(TERM1, DIO_PIN_OUTPUT);
	DIO_voidSetPinDir(TERM2, DIO_PIN_OUTPUT);
}

void DC_voidRunforward()
{
	DIO_voidSetPinVal(TERM1, DIO_PIN_HIGH);
	DIO_voidSetPinVal(TERM2, DIO_PIN_LOW);	
}
void DC_voidRunbackward()
{
		DIO_voidSetPinVal(TERM1, DIO_PIN_LOW);
		DIO_voidSetPinVal(TERM2, DIO_PIN_HIGH);
	
}
