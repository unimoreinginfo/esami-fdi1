#include "stringhe.h"

#include <stdint.h>
#include <string.h>
#include <math.h>

char* center(const char* str, size_t n, char c)
{
	if (str == NULL)
		return NULL;

	size_t str_len = strlen(str);
	if (n < str_len)
		n = str_len;

	char* res = malloc((n + 1) * sizeof(char));
	size_t i = 0;

	size_t contorno = (n - str_len) / 2;

	for (size_t j = 0; j < contorno; j++) {
		res[i] = c;
		i++;
	}

	if (str_len % 2 == 0 && n % 2 != 0) {
		res[i] = c;
		i++;
	}

	for (size_t j = 0; j < str_len; j++) {
		res[i] = str[j];
		i++;
	}

	for (size_t j = 0; j < contorno; j++) {
		res[i] = c;
		i++;
	}

	if (str_len % 2 != 0 && n % 2 == 0) {
		res[i] = c;
		i++;
	}

	res[n] = '\0';

	return res;
}
