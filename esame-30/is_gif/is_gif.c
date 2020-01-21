#include "is_gif.h"

#include <stdio.h>
#include <string.h>

bool is_gif(const char* filename)
{
	FILE* f = fopen(filename, "rb");
	if (f == NULL)
		return false;

	char hd[7];
	if (fread(hd, sizeof(char), 6, f) < 6)
		return false;

	fclose(f);

	hd[6] = '\0';

	return strcmp(hd, "GIF89a") == 0 || strcmp(hd, "GIF87a") == 0;
}

