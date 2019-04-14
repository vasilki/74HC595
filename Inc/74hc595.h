/*
 * 74hc595.h
 *
 *  Created on: 14 апр. 2019 г.
 *      Author: vasilek
 */

#ifndef 74HC595_H_
#define 74HC595_H_

#include "stm32f401xe.h"

/*Init 74HC595 and pins*/
void sr74hc595_Init(GPIO_TypeDef *par_line,uint16_t par_pin_DS, uint16_t par_pin_STCP, uint16_t par_pin_SHCP);

/*Set outputs of 74HC595*/
void sr74hc595_WriteByte(uint8_t par_byte);

/*Reset outputs of 74HC595 without using MR-pin*/
void sr74hc595_Reset(void);

#endif /* 74HC595_H_ */
