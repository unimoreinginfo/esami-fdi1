#include "stringhe.h"
#include <stdlib.h>
#include <stdio.h>

int main(){

    char c[] = "cccccccccccccccc";
    elimina_consecutivi(c);

    printf("%s", c);

}