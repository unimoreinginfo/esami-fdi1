#include<math.h>
#include<stdio.h>

int fattoriale(int n) {
	
	int i;
	long long res = 1;
	for (i = 1; i <= n; ++i)
		res *= i;
	return res;
}

double exponential(double x) {

	double s = 0;
	for (int n = 0; n < 10; ++n) {
		s += pow(x, n) / fattoriale(n);
	}
	return s;
}

int main(void) {

	double z = exponential(2);
	return 0;
}