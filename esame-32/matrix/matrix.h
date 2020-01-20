#pragma once

#include <stdint.h>

struct matrix {
	size_t rows, cols;
	double* data;
};

struct matrix* mat_permute_rows(const struct matrix* m, const size_t* p);
