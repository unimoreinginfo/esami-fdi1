#include <stdint.h>
#include <stdbool.h>

bool cifre_duplicate_oct(unsigned int n) {

	unsigned int index = 0, q = n;

	while (q != 0) {
		q = q / 10;
		index++;
	}

	int len = index;
	unsigned int *cache = malloc(len * sizeof(unsigned int));

	index = 0;
	while (n != 0) {

		unsigned int digit = n % 10;
		cache[index] = digit;
		index++;
		n = n / 10;

	}

	for (int i = 0; i < len; i++) {

		unsigned int a = cache[i];
		
		for (int k = i + 1; k < len; k++) {

			if (cache[k] == a)
				return true;

		}

	}

	free(cache);

	return false;

}