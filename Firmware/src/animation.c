#include <stdint.h>

/**
 * @brief Updates the internal brightness state of all filaments using chaotic logic.
 */
void animation_update_plasma(void);

/**
 * @brief Pushes the calculated brightness levels to the hardware PWM.
 */
void animation_render(void);

/**
 * @brief Plays a smooth fade-out effect for the entire reactor.
 */
void animation_play_shutdown(void);
