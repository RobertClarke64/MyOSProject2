#ifndef MEM_H
#define MEM_H

#include "../cpu/type.h"

void memory_copy(u8 *source, u8 *dest, int nbytes);
void mem_set(u8 *dest, u8 val, u32 len);

/* At this point there is no 'free' implemented */
u32 kmalloc(u32 size, int align, u32 *phys_addr);

#endif