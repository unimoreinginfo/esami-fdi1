#include "matrix.h"

bool matrix_read(struct matrix *m, FILE *f) {
	if(fscanf(f, "%u", &(m->rows)) != 1) return false;
	fscanf(f, "%u", &(m->cols));
	int c = 0;
	m->data = malloc(m->rows*m->cols * sizeof(double));
	for (size_t i = 0; i < m->rows; i++) {
		for (size_t j = 0; j < m->cols; j++) {
			fscanf(f, "%lf", m->data + c);
			c++;
		}
	}
	return true;
}
