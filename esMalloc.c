#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNG 30

typedef struct node {
    char s[LUNG];
    struct* next;
} Node;

int main() {
    Node *lista;
    Node a;
    char nome[LUNG];

    a = (Node*)malloc(30 * sizeof(Node));
    printf("Inserire un nome: ");
    fflush(stdin);
    scanf("%s", nome);

    strcpy(nome, lista->s);
    lista->next = NULL;
    printf("%s", lista->s);

    return 0;
}
