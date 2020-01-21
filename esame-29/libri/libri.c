#include "libri.h"

#pragma warning(disable:4996)

#include <string.h>

bool libro_scrivi(const struct libro* p, FILE* f)
{
	// titolo
	size_t len = strlen(p->titolo);
	if (fwrite(p->titolo, sizeof(char), len, f) < len)
		return false;
	if (fputc('\0', f) == EOF)
		return false;

	// anni_ristampe
	len = 0;
	while (p->anni_ristampe[len] != 0)
		len++;
	if (fwrite(p->anni_ristampe, sizeof(uint16_t), len + 1, f) < (len + 1))
		return false;

	return true;
}
