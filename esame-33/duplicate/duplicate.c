#include <stdbool.h>
#include <stdio.h>

unsigned long long potenza_10_vicina(unsigned long long n)
{
	if (n == 0)
		return 0;

	unsigned long long r = 1;
	while (r <= n) r *= 10;
	r /= 10;
	return r;
}

bool cifre_duplicate(unsigned long long n)
{
	bool digits[10];
	for (int i = 0; i < 10; i++)
		digits[i] = false;

	while (1) {
		unsigned long long p_10 = potenza_10_vicina(n);
		if (p_10 == 0)
			break;

		char digit = n / p_10;

		if (digits[digit])
			return true;

		digits[digit] = true;

		n %= (digit * p_10);
	}

	return false;
}