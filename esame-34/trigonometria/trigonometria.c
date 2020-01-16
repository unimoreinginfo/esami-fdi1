double seno_iperbolico(double x) {
	if (x == 0) return 0;
	double somma = x;
	double sommaPrec = 0;
	double fatt = 1;
	double pot = x;
	for (int n = 1; sommaPrec != somma; n++) {
		sommaPrec = somma;
		fatt *= (2 * n);
		fatt *= (2 * n + 1);
		pot *= x * x;
		somma += pot / fatt;
	}
	return somma;
}
