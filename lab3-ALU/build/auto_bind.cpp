#include <nvboard.h>
#include "Valu.h"

void nvboard_bind_all_pins(Valu* top) {
	nvboard_bind_pin( &top->ledr, BIND_RATE_SCR, BIND_DIR_OUT, 7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->sw, BIND_RATE_SCR, BIND_DIR_IN , 12, SW11, SW10, SW9, SW8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
}
