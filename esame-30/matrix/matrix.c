#include "matrix.h"

struct matrix* mat_scale(const struct matrix* m, double x)
{
	if (m == NULL)
		return NULL;

	struct matrix* res = malloc(sizeof(struct matrix));

	res->rows = m->rows;
	res->cols = m->cols;
	res->data = malloc(sizeof(double) * res->rows * res->cols);

	for (size_t r = 0; r < res->rows; r++) {
		for (size_t c = 0; c < res->cols; c++) {
			res->data[r * res->cols + c] = x * m->data[r * m->cols + c];
		}
	}

	return res;
}
