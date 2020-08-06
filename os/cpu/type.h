#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>

#define low_16(address) (u16)((address) & 0xFFFF)
#define high_16(address) (u16)(((address) >> 16) & 0xFFFF)

#endif 