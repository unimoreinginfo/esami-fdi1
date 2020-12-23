#include<stdlib.h>
#include<stdint.h>
#include<math.h>
#include "stat.h"

double media(double* x, unsigned int n) {

	if (x == NULL)
		return 0;
	double average = 0;
	if (n == 0)
		return 0;
	for (unsigned int i = 0; i < n; ++i) {
		average = average + x[i];
	}
	average = average / n;
	return average;
}

double varianza(double* x, unsigned int n) {

	if (x == NULL)
		return 0;
	double var = 0;
	if (n < 2)
		return 0;
	double diff = 0;
	for (unsigned int i = 0; i < n; ++i) {
		diff = diff + pow((x[i] - media(x, n)), 2);
	}
	var = diff / n;
	return var;
}

int main(void) {

	unsigned int n = 5;
	double* v = malloc(n * sizeof(double));
	if (v == NULL)
		return 0;
	v[0] = 4;
	v[1] = 6;
	v[2] = 5;
	v[3] = 2;
	v[4] = 3;
	double average = media(v, n);
	double var = varianza(v, n);
	free(v);
	return 0;
}