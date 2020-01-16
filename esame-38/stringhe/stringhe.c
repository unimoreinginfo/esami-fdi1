#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void elimina_consecutivi(char *str){

    int size = 0, k = 0;

    for(int i = 0; str[i] != 0; i++){

        if(str[i] != str[i + 1])
            size++;

    }

    size++;
    char *newStr = malloc(size);

    for(int i = 0; str[i] != 0; i++){

        if(str[i] != str[i + 1]){
            newStr[k] = str[i];
            k++;
        }

    }

    newStr[++k] = 0;

    strcpy(str, newStr);

    free(newStr);

}