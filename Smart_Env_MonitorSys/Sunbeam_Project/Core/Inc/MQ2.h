/*
 * MQ2.h
 *
 *  Created on: Dec 30, 2025
 *      Author: admin
 */

#ifndef MQ2_H
#define MQ2_H

#include "stm32f4xx_hal.h"
void MQ2_Init(ADC_HandleTypeDef* hadc1);
uint16_t MQ2_Read();
#endif
