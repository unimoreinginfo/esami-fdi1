#include "rational.h"
#define min(a,b) ((a) < (b) ? (a) : (b))
#define abs(a) ((a) > 0 ? (a) : (-(a)))

void rational_sum(struct rational *sum, const struct rational *first,
	const struct rational *second) {
	sum->num = first->num*second->den + second->num*first->den;
	sum->den = first->den *second->den;
	for (int i = 2; i <= min(sum->num, sum->den); ) {
		if (sum->num%i == 0 && sum->den%i == 0) {
			sum->num /= i;
			sum->den /= i;
			continue;
		}
		i++; 
	}
	if (sum->num == 0) sum->den/=abs(sum->den);
}
