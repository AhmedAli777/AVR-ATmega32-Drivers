/*
 *      Author: Ahmed Ali
 *      Email:  Ahmali777@gmail.com
 */

#ifndef MCAL_SPI_SPI_PRIVATE_H_
#define MCAL_SPI_SPI_PRIVATE_H_


/***********************************************************************************/
/*  								REGISTERS ADDRESSES							   */
/***********************************************************************************/
#define  SPCR         *((volatile u8*)  0x2D)
#define  SPSR         *((volatile u8*)  0x2E)
#define  SPDR         *((volatile u8*)  0x2F)
#define  NULL 		   ((void*)0)
/***********************************************************************************/



/***********************************************************************************/
/* 					               SPI Control Register - SPCR	         		   */
/***********************************************************************************/
#define SPIE     7
#define SPE      6
#define DORD     5
#define MSTR     4
#define CPOL     3
#define CPHA     2
#define SPR1     1
#define SPR0     0
/***********************************************************************************/


/***********************************************************************************/
/* 					              SPI Status Register - SPSR	         		   */
/***********************************************************************************/
#define SPIF      7
#define WCOL      6
#define SPI2X     0
/***********************************************************************************/


/***********************************************************************************/
/* 					              SPI Data Register - SPDR              		   */
/***********************************************************************************/
#define MSB     7
#define LSB     0
/***********************************************************************************/



#endif /* MCAL_SPI_SPI_PRIVATE_H_ */