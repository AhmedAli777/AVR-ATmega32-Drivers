/*
 *      Author: Ahmed Ali
 *      Email:  Ahmali777@gmail.com
 */



#ifndef DC_INT_H_
#define DC_INT_H_

#include "../../lib/BIT_MATH.H"
#include "../../lib/TYPES.H"


#include "../../MCAL/DIO/DIO_int.h"
#include "DC_config.h"

void DC_init();
void DC_voidRunforward();
void DC_voidRunbackward();


#endif /* DC_INT_H_ */