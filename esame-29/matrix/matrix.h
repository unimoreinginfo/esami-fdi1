#pragma once

#include <stdint.h>

struct matrix {
	size_t rows, cols;
	double* data;
};

struct matrix* scambia_diagonali(const struct matrix* m);
