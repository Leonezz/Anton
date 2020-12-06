#ifndef _WS2812_H
#define _WS2812_H
#include <stdint.h>
#include "main.h"
void ws2812WriteLow(void);
void ws2812WriteHigh(void);
void ws2812Reset(void);
void ws2812WriteByte(uint8_t byte);
void ws2812ShowColor(uint8_t green, uint8_t red, uint8_t blue);

#endif