#include "sequenza.h"

#include <stdio.h>

bool seq_load(const char* filename, struct seq* s)
{
	FILE* f = fopen(filename, "rb");
	if (f == NULL)
		return false;

	uint16_t ign;
	s->len = 0;

	while (fread(&ign, sizeof(uint16_t), 1, f) == 1) {
		s->len++;
	}

	rewind(f);

	s->values = malloc(s->len * sizeof(uint16_t));
	fread(s->values, sizeof(uint16_t), s->len, f);

	fclose(f);

	return true;
}
