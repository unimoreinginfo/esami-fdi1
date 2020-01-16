#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdint.h>
#include "rapporti.h"

struct rapporto* leggi_rapporti(const char* filename, uint16_t* n) {

	FILE* file = fopen(filename, "rb");

	if (!file)
		return NULL;

	fread(n, sizeof(uint16_t), 1, file);
	struct rapporto* robe = malloc(*n * sizeof(struct rapporto));

	for (int i = 0; i < *n; i++) {

		uint16_t id;
		char a;
		float f;

		fread(&id, sizeof(uint16_t), 1, file);
		fread(&a, 1, 1, file);
		fread(&f, sizeof(float), 1, file);

		struct rapporto tmp = { .id = id, .tipo = a, .valore = f };
		robe[i] = tmp;
	
	}

	fclose(file);

	return robe;

}