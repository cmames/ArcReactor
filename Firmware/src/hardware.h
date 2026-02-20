/*
 * hardware.h - Hardware Abstraction Layer (HAL)
 * Defines pins and low-level driver configurations for ESP32-C3.
 */

#ifndef HARDWARE_H
#define HARDWARE_H

#include "driver/ledc.h"
#include "driver/gpio.h"

// TODO: Define exact frequency and resolution for LEDC
#define PWM_FREQ 5000
#define PWM_RES  LEDC_TIMER_8_BIT

/**
 * @brief Initializes all GPIOs and peripherals (PWM, ADC, I2C).
 */
void hw_init(void);

/**
 * @brief Sets the duty cycle for a specific LED channel.
 * @param channel The index of the LED (0-4: filaments, 5: center).
 * @param duty 8-bit duty cycle value (0-255).
 */
void hw_set_pwm(uint8_t channel, uint8_t duty);

/**
 * @brief Reads the raw battery voltage from the ADC.
 * @return Voltage in millivolts.
 */
uint32_t hw_read_battery_mv(void);

#endif