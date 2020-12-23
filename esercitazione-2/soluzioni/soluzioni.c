#include<stdio.h>
#include<math.h>

int soluzioni(double a, double b, double c, double* x1, double* x2) {

	double delta = 0;

	delta = (b * b) - 4 * a * c;

	if (a == 0)
		return 0;

	if(delta < 0)
		return 0;

	if(delta == 0) {

		*x1 = *x2 = (-b) / (2 * a);
		return 1;
	}
	
	else{

		*x1 = (-b + sqrt(delta)) / (2 * a);
		*x2 = (-b - sqrt(delta)) / (2 * a);
		return 2;
	}
		
}

int main(void) {

	double a = 4;
	double b = 10;
	double c = 2;
	double* x1, * x2;
	int x = soluzioni(a, b, c, &x1, &x2);

	return 0;

}