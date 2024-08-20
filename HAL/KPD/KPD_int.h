/*
 * KPD_int.h
 *
 * Created: 13/08/2024 02:05:55 م
 *  Author: Ahmed Ali
 */ 


#ifndef KPD_INT_H_
#define KPD_INT_H_

#include "../../lib/BIT_MATH.H"
#include "../../lib/TYPES.H"

#include "KPD_config.h"
#include "../../MCAL/DIO/DIO_int.h"
#include <util/delay.h>

void KPD_voidKPDInit();
u8   KPD_u8GetKey();


#endif /* KPD_INT_H_ */