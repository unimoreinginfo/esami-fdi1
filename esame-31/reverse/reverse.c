#include <stdlib.h>

void reverse(int* vec, size_t len, size_t from, size_t to) {

	if (!vec || from >= to || from >= len || to > len)
		return;

	int* temp = malloc(sizeof(int) * (to - from)), k = 0;

	for (int i = from; i < to; i++) {

		temp[k] = vec[i];
		k++;

	}

	for (int i = 0; i < (to - from) / 2; i++) {

		int curr = temp[i],
			swapWith = temp[to - from - i - 1];

		temp[i] = swapWith;
		temp[to - from - i - 1] = curr;

	}
	k = 0;
	for (int i = from; i < to; i++) {

		vec[i] = temp[k++];

	}

	free(temp);

	return;

}