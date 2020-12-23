int primo(unsigned int val) {

	if (val < 2) {
		return 0;
	}

	for (unsigned int i = 2; i < val; ++i) {
		if (val % i == 0) {
			return 0;
		}
	}
	return 1;
}

unsigned int prossimo_primo(unsigned int x) {

	if (x < 2) {
		return 0;
	}
	
	unsigned int y = x + 1;
	
	while (primo(y) == 0) {
		y++;
	}
	return y;
}

int main(void) {

	unsigned int x;

	x = prossimo_primo(7);

	return 0;
}