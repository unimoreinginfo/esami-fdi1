#include "matrix.h"

struct matrix* mat_permute_rows(const struct matrix* m, const size_t* p)
{
	struct matrix* res = malloc(sizeof(struct matrix) * 1);

	res->rows = m->rows;
	res->cols = m->cols;
	res->data = malloc(sizeof(double) * res->rows * res->cols);

	for (size_t r_i = 0; r_i < m->rows; r_i++) {
		size_t r = p[r_i];
		for (size_t c = 0; c < m->cols; c++) {
			res->data[r_i * m->cols + c] = m->data[r * m->cols + c];
		}
	}
	return res;
}
