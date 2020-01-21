#include <stdint.h>

int* convolution3(const int* v, size_t lenv, const int k[3])
{
	if (v == NULL || k == NULL) {
		return NULL;
	}

	int* c = malloc(sizeof(int) * lenv);

	for (size_t n = 0; n < lenv; n++) {
		c[n] = 0;
		for (size_t m = 0; m <= 2; m++) {
			size_t v_i = n + 1 - m;
			int vv = v_i >= 0 && v_i < lenv ? v[v_i] : 0;
			c[n] += vv * k[m];
		}
	}

	return c;
}
