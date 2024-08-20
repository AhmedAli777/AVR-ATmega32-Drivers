/*
 *      Author: Ahmed Ali
 *      Email:  Ahmali777@gmail.com
 */


#include "ADC_int.h"


void ADC_voidADCInit(){
	DIO_voidSetPortDir(DIO_PORTA,DIO_PORT_INPUT);
	//ENABLE ADC
	SET_BIT(ADCSRA,ADEN);
   // ADCSRA|=(1<<ADEN);
	ADCSRA &= BRE_CLR;      //CLEAR PRESCAL BITS    0B11111000
	ADCSRA |= PRESCALE;
	
	ADMUX  &= REF_CLR;      //CLEAR REF. BITS        0B00111111
	ADMUX  |= (REFERENCE << REFS0);

	//CLR_BIT(ADMUX,ADLAR);
	ADMUX &=~(1<<ADLAR);
}

u16 ADC_u16ReadChannel(u8 u8CH){
     u8CH &= CH_CHECK; // make sure that channel not bigger than 7 00000111
	 ADMUX = (ADMUX & CH_CLR) | u8CH ; // clear bits 0:2 first to avoid garbage value from old operation, whit respict other bit as they are (5,6,7) , then assign Channel Id on it.
	 ADCSRA |= (1<<ADSC);
	while (!(ADCSRA & (1<<ADIF)) ); //STUCK UNTIL FLAG OF FINSH CONVEGRATION =1
	 ADCSRA|=(1<<ADIF); // clear flag
	 return ADC;
 }

