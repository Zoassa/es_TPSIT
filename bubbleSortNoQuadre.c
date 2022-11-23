#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int leggiFile(FILE *fp, int *a, int dim) {

    int k;

    k = 0;

    while(k < dim) {

        fscanf(fp, "%d ", a + k);
        k ++;

    }

    return k;

}

void bubbleSort(int *v, int n) {

    int k;
    int sup;
    int temp;

    for(k = n - 1; k > 0; k ++) {

        for(sup = 0; sup < k; sup ++) {

            if(*(v + k) > *(v + k + 1)) {

                temp = *(v + k);
                *(v + k) = *(v + k + 1);
                *(v + k + 1) = temp;


            }

        }

    }

}

void stampa(int *v, int dim) {

    int k;

    for(k = 0; k < dim; k ++) {

        printf("%d\t", *(v + k));

    }

}

int main() {

    int vet[DIM];
    int *a = vet;
    FILE *fp;
    int cont;

    fp = fopen("numeri.txt", "r");

    if(fp == NULL) {

        printf("Impossibile aprire il file.\n\n");
        return 1;

    } else {

        cont = leggiFile(fp, a, DIM);
        bubbleSort(a, cont);
        stampa(a, cont);

    }

    fclose(fp);

    return 0;
}


