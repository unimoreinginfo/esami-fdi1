#include"geometria.h"

int main(void) {

	struct punto p1 = { 9, 8 };
	struct punto p2 = { 5, 1 };
	struct punto p3 = { 7, 5 };
	int z = colineari(p1, p2, p3);

	return 0;
}