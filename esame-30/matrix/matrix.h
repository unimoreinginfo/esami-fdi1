#pragma once

#include <stdint.h>

struct matrix {
	size_t rows, cols;
	double* data;
};

struct matrix* mat_scale(const struct matrix* m, double x);
