#include <stdlib.h>
#include <string.h>

char *zfill(const char *str, size_t n) {
	if (str == NULL) return NULL;

	int length = strlen(str);
	char* str_out;


	if (n <= length) {
		str_out = malloc(length+1);
		strcpy(str_out, str);
	}
	else {
		str_out = malloc(n+1);
		size_t start_pos = n - length;
		strcpy(str_out + start_pos, str);
		for (size_t i = 0; i < start_pos; i++) {
			str_out[i] = '0';
		}
	}

	return str_out;
}
