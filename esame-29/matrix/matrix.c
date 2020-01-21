
#include "matrix.h"

struct matrix* scambia_diagonali(const struct matrix* m)
{
	if (m == NULL || m->rows != m->cols)
		return NULL;

	struct matrix* res = malloc(sizeof(struct matrix) * 1);

	res->rows = m->rows;
	res->cols = m->cols;
	res->data = malloc(sizeof(double) * res->rows * res->cols);

	// copy
	for (size_t r = 0; r < m->rows; r++) {
		for (size_t c = 0; c < m->cols; c++) {
			res->data[r * res->cols + c] = m->data[r * m->cols + c];
		}
	}

	// swap
	for (size_t d = 0; d < m->rows; d++) {
		size_t ad_r = d;
		size_t ad_c = res->rows - d - 1;

		double m_d = res->data[d * res->cols + d];
		res->data[d * res->cols + d] = res->data[ad_r * res->cols + ad_c];
		res->data[ad_r * res->cols + ad_c] = m_d;
	}

	return res;
}