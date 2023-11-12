#include <nvboard.h>
#include "Vmux41.h"

void nvboard_bind_all_pins(Vmux41* top) {
	nvboard_bind_pin( &top->ledr, BIND_RATE_SCR, BIND_DIR_OUT, 16, LD15, LD14, LD13, LD12, LD11, LD10, LD9, LD8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->sw, BIND_RATE_SCR, BIND_DIR_IN , 10, SW9, SW8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
}
