#include <stdlib.h>
#include "matrix.h"

struct matrix *mat_delete_row(const struct matrix *m, size_t i){

    if(m == NULL)
        return NULL;
    
    if(i >= m->rows || (i == 0 && m->rows == 1))
        return NULL;

    struct matrix *mat = malloc(sizeof(struct matrix));
    int newCols = m->cols, newRows = m->rows - 1, newIndex = 0;
    double *newData = malloc(sizeof(double) * newCols * newRows);

    for(int a = 0; a < m->rows; a++){
        
        if(a == i)
            continue;

        for(int k = 0; k < newCols; k++){

            int index = (a * newCols) + k;
            newData[newIndex] = m->data[index];                
            newIndex++;

        }

    }

    mat->data = newData;
    mat->cols = newCols;
    mat->rows = newRows;

    return mat;

}