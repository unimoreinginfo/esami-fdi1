#include "stringhe.h"

#include <string.h>
#include <stdbool.h>

char* title(const char* str)
{
	if (str == NULL)
		return NULL;

	size_t str_len = strlen(str);
	char* res = malloc(sizeof(char) * (str_len + 1));

	bool was_space = true;
	for (size_t i = 0; i < str_len; i++) {
		res[i] = str[i];

		if (str[i] >= 'a' && str[i] <= 'z' && was_space) {
			res[i] -= 'a' - 'A';
		}

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
			was_space = true;
		}
		else if (was_space) {
			was_space = false;
		}
	}

	res[str_len] = '\0';

	return res;
}
