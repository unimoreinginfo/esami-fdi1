#include "matrix.h"

#include <stdio.h>

struct bmatrix* mat_boolean(const struct matrix* m, double rhs, enum comparisons cmp)
{
	if (m == NULL)
		return NULL;

	struct bmatrix* res = malloc(sizeof(struct bmatrix) * 1);
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = malloc(sizeof(bool) * res->rows * res->cols);

	for (size_t r = 0; r < m->rows; r++) {
		for (size_t c = 0; c < m->cols; c++) {
			double m_val = m->data[r * m->cols + c];
			bool res_val = false;

			switch (cmp) {
			case LT:
				res_val = m_val < rhs;
				break;
			case LE:
				res_val = m_val <= rhs;
				break;
			case EQ:
				res_val = m_val == rhs;
				break;
			case NE:
				res_val = m_val != rhs;
				break;
			case GE:
				res_val = m_val >= rhs;
				break;
			case GT:
				res_val = m_val > rhs;
				break;
			}

			res->data[r * res->cols + c] = res_val;
		}
	}

	return res;
}
