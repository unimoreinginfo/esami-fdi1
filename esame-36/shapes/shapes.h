#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

struct line {
	int16_t x1, y1;
	int16_t x2, y2;
	uint8_t thickness;
};
extern bool line_load(FILE* f, struct line* pln);