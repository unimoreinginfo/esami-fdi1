#include<stdlib.h>
#include<stdint.h>

void copy_vector(uint32_t* dst, uint32_t* src, size_t n) {

	for (size_t i = 0; i < n; ++i)
		dst[i] = src[i];
}


int main(void) {

	size_t n = 5;
	uint32_t dst[5];
	uint32_t src[5] = { 1, 2, 3, 4, 5 };
	copy_vector(&dst, &src, n);
	return 0;
}