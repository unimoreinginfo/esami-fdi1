#include<stdint.h>

extern unsigned int conta_spazi(const char* s);

int main(void) {

	char s[] = "Prova stringa in cui contare gli spazi";
	size_t spazi;
	spazi = conta_spazi(s);
	return 0;
}