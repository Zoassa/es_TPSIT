#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5];
    int *pi = vet;

    for(int j = 0; j < 5; j ++) {

        vet[j] = j;

    }

    *(pi + 3) = 28;

    for(int k = 0; k < 5; k ++) {

        printf("%d  ", *(pi + k)); // *p = primo valore salvato nell'array, quindi scrivere *(pi) + k, ad ogni ciclo stamprebbe il prim elemento del vettore

    }

    return 0;
}
