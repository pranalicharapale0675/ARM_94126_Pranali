/*
 * my_led.c
 *
 *  Created on: Dec 17, 2025
 *      Author: kiran_z6dopa8
 */

#include "my_led.h"

void led_init(void)
{
    // Enable GPIOD clock
    RCC->AHB1ENR |= BV(3);

    // PD12 & PD15 as output
    GPIOD->MODER &= ~(BV(25) | BV(31));
    GPIOD->MODER |=  (BV(24) | BV(30));

    // Push-pull
    GPIOD->OTYPER &= ~(BV(12) | BV(15));

    // Low speed
    GPIOD->OSPEEDR &= ~(BV(25) | BV(24) | BV(31) | BV(30));

    // No pull-up/down
    GPIOD->PUPDR &= ~(BV(25) | BV(24) | BV(31) | BV(30));
}

void led_green_on(void)
{
    GPIOD->ODR |= BV(12);
}

void led_green_off(void)
{
    GPIOD->ODR &= ~BV(12);
}

void led_blue_on(void)
{
    GPIOD->ODR |= BV(15);
}

void led_blue_off(void)
{
    GPIOD->ODR &= ~BV(15);
}

