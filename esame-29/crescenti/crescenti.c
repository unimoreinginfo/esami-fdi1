#include <stdbool.h>

unsigned int potenza_10_vicina(unsigned int x)
{
	if (x == 0)
		return 0;

	unsigned int r = 1;
	while (r < x) r *= 10;
	return r / 10;
}

bool crescente(unsigned int x)
{
	int last_digit = -1;

	while (1) {
		unsigned int p_10 = potenza_10_vicina(x);
		if (p_10 == 0)
			break;

		int digit = x / p_10;
		if (last_digit > 0 && digit != last_digit + 1)
			return false;
		last_digit = digit;

		x %= digit * p_10;
	}

	return true;
}

