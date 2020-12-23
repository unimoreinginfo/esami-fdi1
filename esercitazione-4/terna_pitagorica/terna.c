#include<stdlib.h>
#include<stdint.h>
#include<stdbool.h>
#include<math.h>

bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c) {

	if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) == pow(b, 2) + pow(c, 2)) {
		return true;
	}
	else return false;
}

int main(void) {
	
	unsigned int a = 3;
	unsigned int b = 4;
	unsigned int c = 5;
	
	bool x = is_terna_pitagorica(a, b, c);
	return 0;
}