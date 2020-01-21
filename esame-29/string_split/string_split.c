#include "string_split.h"

#include <string.h>

void string_split(const char* str, size_t index, char** s1, char** s2)
{
	if (str == NULL || index > strlen(str)) {
		*s1 = NULL;
		*s2 = NULL;
		return;
	}

	size_t len = strlen(str);

	*s1 = malloc(sizeof(char) * (index + 1));
	*s2 = malloc(sizeof(char) * (len - index + 1));
	
	size_t i;

	// s1
	for (i = 0; i < index; i++) {
		(*s1)[i] = str[i];
	}
	(*s1)[i] = '\0';

	// s2
	for (i = 0; i < (len - index); i++) {
		(*s2)[i] = str[index + i];
	}
	(*s2)[i] = '\0';
}
