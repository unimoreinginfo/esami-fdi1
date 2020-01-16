#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"

struct matrix* mat_rendiquadrata(const struct matrix* a) {
    // i*r + c

    int newRows = a->rows, newCols = a->cols, oldDim = a->cols * a->rows;
    if (newRows < newCols)
        for (; newRows < newCols;) ++newRows;

    if (newRows > newCols)
        for (; newCols < newRows;) ++newCols;

    struct matrix* mat = malloc(sizeof(struct matrix));
    mat->rows = newRows;
    mat->cols = newCols;

    double* newData = malloc(sizeof(double) * (newRows * newCols));
    mat->data = newData;
    int oldIndex = 0;

    for (int i = 0; i < newRows; i++) {
        for (int j = 0; j < newCols; j++) {

            int index = (i * newCols) + j;
            if (j >= a->cols || (index >= oldDim && a->rows < a->cols)) {
                mat->data[index] = 0;
                continue;
            }

            mat->data[index] = a->data[oldIndex];
            oldIndex++;

        }
    }

    return mat;

}
