int *prodotto(const int *v, size_t n){

    if(!v || n == 0 || n == 1)
        return NULL;

    int *newVector = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){

        int currentItem = v[i];
        int replace = 1;

        for(int k = 0; k < n; k++){

            if(k != i)
                replace *= v[k];

        }

        newVector[i] = replace;

    }

    return newVector;

}