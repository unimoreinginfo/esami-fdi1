#include "path_split.h"

#pragma warning(disable:4996)

#include <stdint.h>
#include <string.h>

void path_split(const char* str, char** path, char** filename)
{
	if (str == NULL) {
		*path = NULL;
		*filename = NULL;
		return;
	}

	size_t i;

	// last_slash_idx
	int last_slash_idx = -1;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == '\\')
			last_slash_idx = i;
	}

	if (last_slash_idx < 0)
		return;

	// p1
	size_t path_len = last_slash_idx + 1;
	*path = malloc(sizeof(char) * (path_len + 1));
	for (i = 0; i < path_len; i++) {
		(*path)[i] = str[i];
	}
	(*path)[i] = '\0';

	// p2
	size_t filename_len = strlen(str) - last_slash_idx;
	*filename = malloc(sizeof(char) * (filename_len + 1));
	for (i = 0; i < filename_len; i++) {
		(*filename)[i] = str[last_slash_idx + 1 + i];
	}
	(*filename)[i] = '\0';
}
