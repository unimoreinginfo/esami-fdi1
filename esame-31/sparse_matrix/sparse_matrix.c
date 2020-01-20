#include "sparse_matrix.h"

double sm_get(struct sparse_matrix* m, uint32_t row, uint32_t col) {

	if (!m || m->rows <= row || m->cols <= col)
		return 0;

	int index;

	for (int i = 0; i < m->nnz; i++) {

		for (int k = 0; k < m->nnz; k++) {

			if (i == k && m->rowidxs[i] == row && m->colidxs[k] == col)
				return m->data[i];

		}

	}

	return 0;

}