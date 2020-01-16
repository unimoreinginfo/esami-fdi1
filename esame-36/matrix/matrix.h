#pragma once
struct matrix {
	size_t rows, cols;
	double* data;
};

extern struct matrix* mat_permute_rows(const struct matrix* m, const size_t* p);