#include <stdlib.h>
#include "matrix.h"

struct matrix* mat_permute_rows(const struct matrix* m, const size_t* p) {

	struct matrix* alloc = malloc(sizeof(struct matrix));
	double* newData = malloc(sizeof(double) * m->rows * m->cols);

	for (int i = 0; i < m->rows; i++) {

		for (int k = 0; k < m->cols; k++) {

			int newDataIndex = (i * m->cols) + k;
			int whatToPut = (p[i] * m->cols) + k;

			newData[newDataIndex] = m->data[whatToPut];

		}

	}

	alloc->cols = m->cols;
	alloc->rows = m->rows;
	alloc->data = newData;

	return alloc;

}