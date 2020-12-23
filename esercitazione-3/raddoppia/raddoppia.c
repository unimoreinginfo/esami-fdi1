#include<stdlib.h>
#include<stdint.h>
#include<stdio.h>

void raddoppia(uint32_t* x, size_t n) {

	if (x == NULL)
		return 0;
	for (size_t i = 0; i < n; i++) {
		x[i] = x[i] * 2;
	}
}


int main(void) {

	size_t n = 3;
	uint32_t* v = malloc(n * sizeof(uint32_t));
	if (v == NULL)
		return 0;
	v[0] = 12; 
	v[1] = 59;
	v[2] = 83;
	raddoppia(v, n);

	printf("STAMPO VETTORE\n");
	for (size_t i = 0; i < n; i++) {
		printf("%d elemento ---> ", i+1);
		printf("%d\n", v[i]);
	}
	free(v);
	return 0;
}