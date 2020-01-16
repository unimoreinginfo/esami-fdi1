#include "shapes.h"

bool line_load(FILE* f, struct line* pln) {

	int a = fread(&pln->x1, sizeof(int16_t), 1, f);
	int b = fread(&pln->y1, sizeof(int16_t), 1, f);
	int c = fread(&pln->x2, sizeof(int16_t), 1, f);
	int d = fread(&pln->y2, sizeof(int16_t), 1, f);
	int e = fread(&pln->thickness, sizeof(uint8_t), 1, f);

	if (a + b + c + d + e == 5)
		return true;
	return false;
}