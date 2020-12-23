#include<stdlib.h>

void potenza(double* d, size_t i) {

	double p = 1;
	for (size_t n = 0; n < i; ++n) {
		p *= *d;
	}
	*d = p;
}

int main(void) {

	double a[] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
	size_t i, n = 10;

	for (i = 0; i < n; ++i) {
		//double d = a[i];
		potenza(a + i, i);
		//a[i] = d;
	}
	return 0;
}