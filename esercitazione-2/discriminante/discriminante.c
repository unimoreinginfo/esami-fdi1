double discriminante(double a, double b, double c) {

	double delta = 0;

	delta = (b * b) - 4 * a * c;

	return delta;
}

int main(void) {

	double a = 2;
	double b = 6;
	double c = 5;
	int x = discriminante(a, b, c);

	return 0;
}