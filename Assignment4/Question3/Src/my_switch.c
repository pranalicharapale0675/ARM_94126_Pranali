/*
 * my_switch.c
 *
 *  Created on: Dec 17, 2025
 *      Author: kiran_z6dopa8
 */

#include <stdint.h>
#include <stdio.h>

#include "stm32f407xx.h"
#include "my_switch.h"

void switch_init(void)
{
    // Enable GPIOA clock
    RCC->AHB1ENR |= BV(0);

    // PA0 as input
    GPIOA->MODER &= ~(BV(0) | BV(1));

    // No pull-up/down
    GPIOA->PUPDR &= ~(BV(0) | BV(1));
}

int switch_status(void)
{
    return (GPIOA->IDR & BV(0)) ? 1 : 0;
}
