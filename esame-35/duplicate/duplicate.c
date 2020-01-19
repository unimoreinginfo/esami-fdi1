#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

bool cifre_duplicate_hex(unsigned int n) {
	if (n < 16) return 0;
	int lunghezza_n = log2(n) / log2(16);

	char *str = malloc(lunghezza_n+2);
    // inefficiente ma semplice
	sprintf(str, "%x", n);

	for (int i = 1; str[i] != 0; i++) {
		for (int j = 0; j < i; j++) {
			if (str[i] == str[j]) {
				free(str);
				return true;
			}
		}
	}
		
	free(str);

	return false;

}
