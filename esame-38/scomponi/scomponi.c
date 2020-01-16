#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void stampa_scomposizione(unsigned int);

int main(void){

  stampa_scomposizione(4294967295);
  return 0;

}

void stampa_scomposizione(unsigned int a){

    unsigned int notPrime = 0, factors[100], g = 0;

    for(int i = 2; i < sqrt((double)a) + 1; i++){

        if(i == 2 || i % 2 != 0){

            // cerco i numeri primi divisori di a
            //printf("Controllo se %d è divisore primo di %d\n", i, a);
            for(int k = sqrt((double)i) + 1; k > 1; k--){

                if(i % k == 0 && i != k){
                    
                    // printf("%d è divisibile per %d\n", i, k);
                    notPrime = 1;
                    break;

                }

            }

            if(notPrime){
                //printf("Sicuramente %d non è primo\n\n", i);
                notPrime = 0;
                continue;
            }

            else{

                // printf("Beh, %d è primo!\n", i);
                if(a % i == 0){

                    a /= i;
                    factors[g] = i;
                    g++;
                    //printf("%d\n\n", a);
                    i = 1;

                }

            }

        }else
            continue;

    }

    if(a != 1){

        factors[g] = a;
        factors[++g] = 0;

    }

    int current = 1;
    char mult;

    for(int i = 0; i < g; i++){

        if(factors[i + 1] != 0)
            mult = '*';
        else
            mult = 0;

        if(factors[i] == factors[i + 1]){

            current++;
            continue;

        }else{

            if(current != 1){
                printf("%d^%d%c", factors[i], current, mult);
                current = 1;
            }
            else
                printf("%d%c", factors[i], mult);

        }

    }

}