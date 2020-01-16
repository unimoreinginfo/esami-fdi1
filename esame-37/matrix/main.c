#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"

int main(void) {

    double d[6] = { 1,2,3,4,5,6 };
    struct matrix a = { .rows = 2, .cols = 3, .data = d };
    struct matrix* b = malloc(sizeof(struct matrix));
    b = mat_rendiquadrata(&a);

    for (int i = 0; i < b->rows * b->cols; i++) {
        int index = (i * b->rows) + b->cols;
        printf("%f", b->data[index]);
    }

    return 0;

}
