int divisione(double a, double b, double* q) {


	if (b != 0) {

		*q = a / b;

		return 1;
	}
	else
		return 0;
}

int main(void) {

	double a = 8;
	double b = 4;
	double q;
	int z = divisione(a, b, &q);

	return 0;
}