/*
 * main.c - Application Entry Point
 * Architecture: Top-Down Execution Loop
 */

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "hardware.h"
#include "power.h"
#include "animation.h"

void app_main(void) {
    // Macro Level: Initialization
    hw_init();
    
    // TODO: Implement splash-screen animation on startup

    while (1) {
        // 1. Meso Level: Input & Safety monitoring
        if (power_button_triggered()) {
            animation_play_shutdown();
            power_enter_deep_sleep();
        }

        if (power_is_battery_low()) {
            // TODO: Add visual warning (red blink?) before forced sleep
            power_enter_deep_sleep();
        }

        // 2. Meso Level: Animation Logic
        animation_update_plasma();
        
        // 3. Micro Level: Hardware output
        animation_render();

        // Timing control for a consistent frame rate (e.g., 30 FPS)
        vTaskDelay(pdMS_TO_TICKS(33));
    }
}