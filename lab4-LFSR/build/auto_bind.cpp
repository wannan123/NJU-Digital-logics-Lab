#include <nvboard.h>
#include "Vlfsr.h"

void nvboard_bind_all_pins(Vlfsr* top) {
	nvboard_bind_pin( &top->ledr, BIND_RATE_SCR, BIND_DIR_OUT, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->sw, BIND_RATE_SCR, BIND_DIR_IN , 1, SW0);
	nvboard_bind_pin( &top->seg0, BIND_RATE_SCR, BIND_DIR_OUT, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
	nvboard_bind_pin( &top->seg1, BIND_RATE_SCR, BIND_DIR_OUT, 8, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G, DEC1P);
}
