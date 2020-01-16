#include <stdio.h>
#include <stdlib.h>
#include "vec_double.h"

struct vec_double *read_vec_double(const char *filename){

    FILE *file = fopen(filename, "rb");

    if(!file)
        return NULL;

    uint32_t size, actualElements = 0;
    size_t read = fread(&size, sizeof(unsigned int), 1, file);

    if(!read){
        fclose(file);
        return NULL;
    }
        
    struct vec_double *a = malloc(sizeof(struct vec_double));
    double *data = malloc(sizeof(double) * size);

    for(int i = 0; i < size; i++){

        if(fread(&data[i], sizeof(double), 1, file))
            actualElements++;

    }

    if(actualElements != size){

        free(a);
        free(data);
        fclose(file);
        return NULL;

    }

    a->size = size;
    a->data = data;

    fclose(file);

    return a;

}