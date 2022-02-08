/*
 * i2c_prog.c
 *
 *  Created on: Oct 19, 2019
 *      Author: Mariam
 */
#include "i2c_interface.h"
#include "i2c_private.h"



void i2c_init_master(void)
{
	TWBR=0x02;
	TWSR &=~((1<<TWPS1)|(1<<TWPS0));

}
