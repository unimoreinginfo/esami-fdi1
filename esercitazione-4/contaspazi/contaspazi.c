#include<stdint.h>
#include<stdlib.h>
#include<string.h>

unsigned int conta_spazi(const char* s) {

	size_t i, space = 0;
	size_t lenght = strlen(s);
	for (i = 0; i < lenght; ++i) {
		if (s[i] == ' ')
			++space;
	}
	return space;
}