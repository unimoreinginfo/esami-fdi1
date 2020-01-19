#define square(N) ((N)*(N))
#include <stdbool.h>

bool is_terna_pitagorica(unsigned int v[3]) {
	char max_index = 0;

	for (int i = 0; i < 3; i++) {
		if (v[i] > v[max_index]) {
			max_index = i;
		}
	}

	switch (max_index) {
		case 0:
			if (square(v[1]) + square(v[2]) == square(v[0])) return 1;
			break;
		case 1:
			if (square(v[0]) + square(v[2]) == square(v[1])) return 1;
			break;
		case 2:
			if (square(v[1]) + square(v[0]) == square(v[2])) return 1;
	};
	return 0;
}
