#include<stdint.h>
#include<stdlib.h>

size_t lungh(const char* str) {

	size_t l = 0;
	for (size_t i = 0; str[i] != 0; ++i) {
		l = i + 1;
	}
	return l;
}