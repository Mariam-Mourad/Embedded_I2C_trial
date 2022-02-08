/*
 * i2c_private.h
 *
 *  Created on: Oct 18, 2019
 *      Author: Mariam
 */

#ifndef I2C_PRIVATE_H_
#define I2C_PRIVATE_H_

#define TWCR	 *((volatile u8*)(0x56))
#define TWDR	 *((volatile u8*)(0x23))
#define TWAR	 *((volatile u8*)(0x22))
#define TWSR	 *((volatile u8*)(0x21))
#define TWBR	 *((volatile u8*)(0x20))


#define TWPS1	1
#define TWPS0	0
#define	TWEN	2
#define TWINT	7
#define TSTOP	1

#endif /* I2C_PRIVATE_H_ */
