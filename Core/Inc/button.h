#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "spi.h"
#include "gpio.h"
#include "software_timer.h"
#include <stdbool.h>

extern uint16_t button_count[16];

void button_init();
void button_Scan();
bool is_button_pressed(uint8_t id);
bool is_button_long_pressed(uint8_t id);

#endif /* INC_BUTTON_H_ */
