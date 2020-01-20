#pragma once
#include <stdint.h>

struct sparse_matrix {
    uint32_t rows, cols;
    uint32_t nnz;
    uint32_t* rowidxs;
    uint32_t* colidxs;
    double* data;
};

extern double sm_get(struct sparse_matrix* m, uint32_t row, uint32_t col);