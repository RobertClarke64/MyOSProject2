#include "idt.h"
#include "../kernel/util.h"

void set_idt_gate(int n, u32 handler) {
	extern idt[n].low_offset = low_16(handler);
	extern idt[n].sel = KERNEL_CS;
	extern idt[n].always0 = 0;
	extern idt[n].flags = 0x8E;
	extern idt[n].high_offset = high_16(handler);
}

void set_idt() {
	extern idt_reg.base = (u32) &idt;
	extern idt_reg.limit = IDT_ENTRIES * sizeof(idt_gate_t) - 1;
	/* Don't make the mistake of loading &idt -- always load &idt_reg */
	__asm__ __volatile__("lidtl (%0)" : : "r" (&idt_reg));
}