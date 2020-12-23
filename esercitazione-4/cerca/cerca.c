#include<stdlib.h>
#include<stdint.h>
#include<string.h>

int cerca_primo(const char* s, char c) {

	for (size_t i = 0; s[i] != 0; ++i) {
		if (s[i] == c)
			return i;
	}
	return -1;
}

int main(void) {

	char c = 'b';
	char s[] = "cane";
	int x = cerca_primo(s, c);
	return 0;
}