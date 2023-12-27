/*
 *      Author: Ahmed Ali
 *      Email:  Ahmali777@gmail.com
 */

#include "EXTI_int.h"



void EXTI_voidEnable( u8 u8EXTI_Line)
{
	switch(u8EXTI_Line)
	{
		case EXTI_0:
			SET_BIT (EXTI_GICR_REG ,GICR_INT0);
			#if SENSE_MODE==LOWLEVEL
			CLR_BIT (EXTI_MCUCR_REG ,MCUCR_ISC00);
			CLR_BIT (EXTI_MCUCR_REG ,MCUCR_ISC01);
			#elif SENSE_MODE==EXTI_ONCHANGE
			SET_BIT (EXTI_MCUCR_REG ,MCUCR_ISC00);
			CLR_BIT (EXTI_MCUCR_REG ,MCUCR_ISC01);
			break;
			#elif SENSE_MODE==EXTI_FALLING
				CLR_BIT (EXTI_MCUCR_REG ,MCUCR_ISC00);
				SET_BIT (EXTI_MCUCR_REG ,MCUCR_ISC01);
			#elif SENSE_MODE==EXTI_RISIG
			CLR_BIT (EXTI_MCUCR_REG ,MCUCR_ISC00);
			CLR_BIT (EXTI_MCUCR_REG ,MCUCR_ISC01);
			#endif
			break;
		case EXTI_1:
			SET_BIT (EXTI_GICR_REG ,GICR_INT1);
			#if SENSE_MODE==LOWLEVEL
			CLR_BIT (EXTI_MCUCR_REG ,MCUCR_ISC10);
			CLR_BIT (EXTI_MCUCR_REG ,MCUCR_ISC11);
			#elif SENSE_MODE==EXTI_ONCHANGE
			SET_BIT (EXTI_MCUCR_REG ,MCUCR_ISC10);
			CLR_BIT (EXTI_MCUCR_REG ,MCUCR_ISC11);
			break;
			#elif SENSE_MODE==EXTI_FALLING
			CLR_BIT (EXTI_MCUCR_REG ,MCUCR_ISC10);
			SET_BIT (EXTI_MCUCR_REG ,MCUCR_ISC11);
			#elif SENSE_MODE==EXTI_RISIG
			CLR_BIT (EXTI_MCUCR_REG ,MCUCR_ISC10);
			CLR_BIT (EXTI_MCUCR_REG ,MCUCR_ISC11);
			#endif
			break;
		case EXTI_2:
			SET_BIT (EXTI_GICR_REG ,GICR_INT2);
			#if SENSE_MODE== EXTI_FALLING
			CLR_BIT (EXTI_MCUCSR_REG ,MCUCSR_INT2);
			#elif SENSE_MODE==EXTI_RISIG
			SET_BIT (EXTI_MCUCSR_REG ,MCUCSR_INT2);
			#endif
			break;
	}
}
void EXTI_voidDisable( u8 u8EXTI_Line)
{

	switch(u8EXTI_Line)
	{
		case EXTI_0: CLR_BIT (EXTI_GICR_REG ,GICR_INT0); break;
		case EXTI_1: CLR_BIT (EXTI_GICR_REG ,GICR_INT1); break;
		case EXTI_2: CLR_BIT (EXTI_GICR_REG ,GICR_INT2); break;
	}
}






