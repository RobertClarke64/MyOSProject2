#include "../drivers/ports.h"

void main() {
	clear_screen();
	krpint_at("X", 1, 6);
	kprint_at("This text spans multiple lines", 75, 10);
	kprint("There is a line\nbreak");
	kprint_at("What happens when we rund out of space?", 45, 24);
}