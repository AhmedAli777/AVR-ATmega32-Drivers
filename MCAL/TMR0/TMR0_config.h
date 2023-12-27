/*
 *      Author: Ahmed Ali
 *      Email:  Ahmali777@gmail.com
 */

#ifndef MCAL_TMR0_TMR0_CONFIG_H_
#define MCAL_TMR0_TMR0_CONFIG_H_

/*************************************************************************/
/************ Timer/Counter Control Register � TCCR0   *******************/
/*************************************************************************/
#define  FOC0       7
#define  WGM00      6
#define  COM01      5
#define  COM00      4
#define  WGM01      3
#define  CS02       2
#define  CS01       1
#define  CS00       0

/*************************************************************************/
/************* Timer/Counter Interrupt Mask Register � TIMSK   ***********/
/*************************************************************************/

#define  OCIE2       7
#define  TOIE2       6
#define  TICIE1      5
#define  OCIE1A      4
#define  OCIE1B      3
#define  TOIE1       2
#define  OCIE0       1
#define  TOIE0       0

/**************************************************************************/
/******** Timer/Counter Interrupt Flag Register � TIFR   ******************/
/**************************************************************************/

#define TOV0	0
#define OCF0 	1

/*******************************************************************/
/*************************** TIMER 0 MODES  ************************/
/*******************************************************************/

#define  	Normal		     	0
#define  	PWM_Phase_Correct 	1
#define  	CTC			        2
#define  	Fast_PWM			3

/**********************************************************************/
#define TIMER0_MODE		CTC
/*********************************************************************/

/*********************************************************************/
/*************************** TIMER 0 PRESCALER  **********************/
/*********************************************************************/

#define    NO_CLOCK_SOURCE    	 0  // 0x00
#define    NO_PRESCALER 	     1  // 0x01
#define    Prescaler_8	     	 2
#define    Prescaler_64	         3
#define    Prescaler_256	     4
#define    Prescaler_1024	     5
#define    EXT_FALLING_ADGE	     6
#define    EXT_RISING_ADGE		 7

/**************************************************************/
#define   TMR0_Prescaler	Prescaler_64
/**************************************************************/

/********************************************************************/
/*************************** TIMER0 OC0MODE  ************************/
/********************************************************************/

#define  	OC0_disconnected		0
#define  	Toggle_OC0		        1
#define  	Clear_OC0		     	2
#define  	Set_OC0		        	3
#define  	RESERVED		    	4

/*************************************************************************/
#define TIMER0_OC0_MODE		OC0_disconnected
/*************************************************************************/


#endif /* MCAL_TMR0_TMR0_CONFIG_H_ */
