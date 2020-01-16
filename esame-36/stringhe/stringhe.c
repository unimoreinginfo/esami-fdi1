#include <string.h>

char* spacefill(const char* str, size_t n) {

	if (!str)
		return NULL;

	char* s;

	if (strlen(str) >= n) {

		s = malloc(strlen(str) + 1);
		strcpy(s, str);
		return s;
	}

	int whitespaces = abs(strlen(str) - n);
	int total_len = whitespaces + strlen(str);
	
	s = malloc(total_len + 1);

	for (int i = 0; i < total_len; i++) {

		if (i - whitespaces < 0)
			s[i] = ' ';
		else
			s[i] = str[i - whitespaces];

	}
	s[total_len] = 0;

	return s;

}