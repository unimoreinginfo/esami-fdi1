#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_tga(const char* filename) {

	FILE* file = fopen(filename, "rb");

	if (!file)
		return false;

	fseek(file, -18, SEEK_END);

	char buffer[18];
	fread(buffer, 1, 18, file);

	fclose(file);

	if (!strcmp("TRUEVISION-XFILE.", buffer))
		return true;

	return false;

}