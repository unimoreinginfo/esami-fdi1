#include <stdint.h>

int* rotate(const int* vec, size_t len, size_t r)
{
	if (vec == NULL)
		return NULL;

	int* res = malloc(sizeof(int) * len);

	for (size_t i = 0; i < len; i++) {
		res[(r + i) % len] = vec[i];
	}
	
	return res;
}
