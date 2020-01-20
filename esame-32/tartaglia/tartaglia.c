#include <stdint.h>

unsigned int* tartaglia(unsigned int* v, size_t n)
{
	unsigned int* res = malloc(sizeof(unsigned int) * (n + 1));
	res[0] = 1;
	for (size_t i = 1; i < n; i++) {
		res[i] = v[i - 1] + v[i];
	}
	res[n] = 1;
	return res;
}

