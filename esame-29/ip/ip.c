#include "ip.h"

#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool read_ip(FILE* f, uint32_t* ip)
{
	*ip = 0;

	for (size_t i = 0; i < 4; i++) {
		char n_str[4];
		size_t j = 0;
		int c;

		while ((c = fgetc(f)) != EOF) {
			if (c == '.') {
				if (i == 3)
					return false;
				break;
			}

			if (c == '\n') {
				if (i < 3)
					return false;
				break;
			}

			n_str[j] = c;
			j++;
		}

		n_str[j] = '\0';

		if (c == EOF && i < 3)
			return false;

		uint32_t n = atoi(n_str);
		if (n >= 256)
			return false;

		uint32_t n_shifted = n << (i * 8);

		*ip = (*ip) | n_shifted;
	}

	return true;
}

uint32_t* leggi_indirizzi_ip(const char* filename, size_t* size)
{
	FILE* f = fopen(filename, "rt");
	if (f == NULL) {
		*size = 0;
		return NULL;
	}

	*size = 0;
	char c;
	int pos;

	while ((c = fgetc(f)) != EOF) {
		if (c == '\n') {
			pos = ftell(f);
			(*size)++;
		}
	}

	if (ftell(f) != pos)
		(*size)++;

	rewind(f);

	uint32_t* res = malloc(sizeof(uint32_t) * (*size));

	for (size_t i = 0; i < *size; i++) {
		if (!read_ip(f, &res[i])) {
			*size = 0;
			free(res);
			fclose(f);
			return NULL;
		}
	}

	fclose(f);

	return res;
}
