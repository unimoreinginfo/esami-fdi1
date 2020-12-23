#include<stdlib.h>
#include"geometria.h"

int colineari(struct punto p1, struct punto p2, struct punto p3) {

	if ((p3.x - p2.x) * (p1.y - p2.y) == (p3.y - p2.y) * (p1.x - p2.x)) {
		return 1;
	}
	else return 0;
}