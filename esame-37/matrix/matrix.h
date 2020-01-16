#pragma once

extern struct matrix {
	size_t rows, cols;
	double* data;
};
extern struct matrix* mat_rendiquadrata(const struct matrix* a);
