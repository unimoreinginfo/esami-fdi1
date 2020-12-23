#include<stdlib.h>
#include<stdint.h>

uint32_t* somme_2a2(uint32_t* vett, size_t size){

    if (vett == NULL)
        return 0;
    uint32_t* a = malloc((size / 2) * sizeof(uint32_t));
    size_t b = 0;
    size_t i;
    for (i = 0; i < size;) {
        if (size % 2 != 0 && i == size - 1) {
            return a;
        }
            a[b] = vett[i] + vett[i + 1];
            i = i + 2;
            b = b + 1;
    }
    return a;
}

int main(void)
{
    size_t n = 6;
    uint32_t* v = malloc(n * sizeof(uint32_t));
    if (v == NULL) {
        return 0;
     }
    v[0] = 3;
    v[1] = 87;
    v[2] = 5;
    v[3] = 7;
    v[4] = 12;
    v[5] = 9;
    uint32_t* somme = somme_2a2(v, n);
    free(v);
    free(somme);
    return 0;
}