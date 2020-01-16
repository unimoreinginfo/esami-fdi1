#pragma once

struct matrix {
	size_t rows, cols;
	double *data;
};

extern struct matrix *mat_delete_row(const struct matrix *m, size_t i);