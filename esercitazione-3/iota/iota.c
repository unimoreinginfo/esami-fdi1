#include<stdlib.h>
#include<stdint.h>

void iota(uint32_t* x, size_t n) {

	for (size_t i = 0; i < n; ++i)
		x[i] = i;
	if (x == NULL) {
		exit;
	}
}

int main(void) {

	size_t n = 10;
	uint32_t v[10] = { 0 };
	if (v == NULL) {
		return 0;
	}
	iota(v, n);
	return 0;
}