#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNG 100
#define NGIOCHI 20000

/*
Author: Mandrile Zoe 4°A ROB
Exercise: Creare un programma in linguaggio C che legga
il file vgsales.csv e lo importi in un array di strutture.
Ogni riga contiene i campi separati da virgole, per cui può
essere comodo creare una funzione split che dalla riga letta
ritorni la struttura valorizzata.
*/

typedef char Stringa[LUNG];

typedef struct{

    int rank;
    Stringa nome;
    Stringa platform;
    int year;
    Stringa genre;
    Stringa publisher;
    float naSales;
    float euSales;
    float jpSales;
    float otherSales;
    float globalSales;

}Videogioco;

int main()
{
    Videogioco giochi[NGIOCHI];
    Stringa riga;
    int k;

    FILE *fp;
    k = 0;
    fp = fopen("vgsales.csv", "r");

    //controlla se file esiste
    if(fp == NULL){

        printf("Il file non esiste.\n\n");
        return 0;

    } else {

        //lettura file

        while (fscanf(riga, 1024, fp)){

            fscanf(NULL, 1024, fp);
            printf("%s", riga);

        }

    }

    //stampa

    printf("hey");



    fclose(fp);
    return 1;
}
