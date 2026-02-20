/*
 * power.h - Battery monitoring and Sleep management.
 */

#ifndef POWER_H
#define POWER_H

#include <stdbool.h>

/**
 * @brief Checks if the battery level is below the safety threshold.
 * @return true if battery is critical, false otherwise.
 */
bool power_is_battery_low(void);

/**
 * @brief Configures wakeup sources and puts the ESP32-C3 into Deep Sleep.
 * This function will also trigger the hardware shutdown of LEDs.
 */
void power_enter_deep_sleep(void);

/**
 * @brief Checks if the user has requested a power toggle via the touch sensor.
 * @return true if a toggle event is detected.
 */
bool power_button_triggered(void);

#endif