#pragma once

#include <stdint.h>
#include <stdbool.h>

struct matrix {
	size_t rows, cols;
	double* data;
};

struct bmatrix {
	size_t rows, cols;
	bool* data;
};

enum comparisons {
	LT, LE, EQ,
	NE, GE, GT
};

struct bmatrix* mat_boolean(const struct matrix* m, double rhs, enum comparisons cmp);
