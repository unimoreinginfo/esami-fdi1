unsigned int somma_cifre(unsigned int x) {

	unsigned int somma = 0;

	while (x != 0) {

		somma = somma + x % 10;
		x = x / 10;
	}
	return somma;
}

int main(void) {

	unsigned int x;

	x = somma_cifre(17);
	x = somma_cifre(256);

	return 0;
}