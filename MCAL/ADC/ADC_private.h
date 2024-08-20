/*
 *      Author: Ahmed Ali
 *      Email:  Ahmali777@gmail.com
 */


#ifndef MCAL_ADC_PRIVATE_H_
#define MCAL_ADC_PRIVATE_H_


  
#define ADC     *((volatile u16*)0x24)

#define ADMUX   *((volatile u8*)0x27)
#define ADCSRA  *((volatile u8*)0x26)


/*********ADMUX************************/
#define ADLAR     5
#define REFS0     6
#define REFS1     7

/*********ADCSRA***********************/
#define ADPS0     0
#define ADPS1     1
#define ADPS2     2
#define ADSC      6
#define ADIF      4
#define ADEN      7
/**************************************/

#define BRE_CLR  0XF8
#define REF_CLR  0X3F
#define CH_CHECK 0X07
#define CH_CLR   0XF8
#endif /* MCAL_ADC_PRIVATE_H_ */
