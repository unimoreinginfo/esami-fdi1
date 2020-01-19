#include "shapes.h"

bool rect_load(FILE * f, struct rect * r)
{
	fread(&(r->x), sizeof(int16_t), 1, f);
	fread(&(r->y), sizeof(int16_t), 1, f);
	fread(&(r->width), sizeof(uint16_t), 1, f);
	fread(&(r->height), sizeof(uint16_t), 1, f);
	r->symbol = fgetc(f);
	return true;
}
