#include <stdint.h>

int* clamped(const int* v, size_t n, int min, int max)
{
	if (min > max || n == 0 || v == NULL)
		return NULL;

	int* new_v = malloc(sizeof(int) * n);

	for (size_t i = 0; i < n; i++) {
		if (v[i] < min)
			new_v[i] = min;
		else if (v[i] > max)
			new_v[i] = max;
		else
			new_v[i] = v[i];
	}

	return new_v;
}

