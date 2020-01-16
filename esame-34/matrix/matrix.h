#ifndef MATRIX_H
#define MATRIX_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct matrix {
	size_t rows, cols;
	double *data;
};
extern bool matrix_read(struct matrix *m, FILE *f);

#endif /* MATRIX_H */
