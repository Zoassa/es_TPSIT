#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int vet[5];
    char str[5];
    int *pi = vet;
    //char *fgets(char *str, int scr, FILE *strw);
    char *s = str; //un  vettore di char non inxializzato vale NULL

    *(s + 3) = 'z';

    printf("%c", *(s + 3));


    for(int j = 0; j < 5; j ++) {

        //vet[j] = j;
        *(vet + j) = j;

    }

    *(pi + 3) = 28;

    while((pi - vet) < 5) {

        printf("%d  ", *(pi ++)); // *p = primo valore salvato nell'array, quindi scrivere *(pi) + k, ad ogni ciclo stamprebbe il prim elemento del vettore

    }

    return 0;
}
