/*crea  una  lista e la  stampa*/
#include  <stdio.h>
#include  <stdlib.h>
#include <malloc.h>
#define A 5

typedef struct  node {
    int  valore;
    struct  node* next; //autoreferenziale --> fa riferimento a sè stessa
}Node;

void insertHead(struct node** head, int new_value){
    struct node* new_testa = (struct node*)malloc(sizeof(struct node));
    new_testa->valore = new_value; //carico il nuovo valore nel node new
    new_testa->next = (*head); //il next punterà alla testa attuale;

    (*head) = new_testa;
}

void insertInOrder(struct node** head, struct node* element, int new_value) {
    struct node* curr = *head, *prev = NULL;
    while(curr != NULL) {
        if(element->valore <= curr->valore)
            break;
        prev = curr;
        curr = curr->next;
    }

    if(prev == NULL)
        *head = element;
    else
        prev->next = element;

    element->next = curr;
}

int stampa(Node* lista) {
    Node* l;
    //lista = NULL;
    l=lista;
    int conta = 0;
    printf("numeri  inseriti: ");
    while (l!=NULL) {
        printf("%d - %p \n",l->valore, l->next); // %p --> fromattatore per i puntatori
        l=l->next;
        conta ++;
    }

    return conta;
}

void lunghezzaLista(int conta) {
    printf("Gli elementi sono %d.\n");
}
//ricorsive
void printList(Node *l) {
    printf("%d - %p \n",l->valore, l->next);
    if(l->next != NULL) {
        printList(l->next);
    }
}

int N_Nodes(Node *l) {
    if(l != NULL) {
        return N_Nodes(l->next) + 1;
    } else {
        return 0;
    }
}

int  main() {
    int n;
    Node* lista; //sono puntatori a Node
    Node* l;
    lista = NULL;
    int conta = 0;

    do {
        printf("Inserisci  un  naturale o  -1 per  terminare\n");
        scanf("%d",&n);
        if (n >= 0){
            if (lista == NULL) { /*  prima  iterazione  */
                lista = (Node*)malloc(sizeof(Node)); //spazio grande un blocco id node --> spazio che alloca una struttura
                l = lista; //
            }
            else { /*  iterazioni  successive  */
                l->next = (Node*)malloc(sizeof(Node)); //si assegna una nuova cella di node
                l = l->next;
            }
            l->valore = n;
            l->next = NULL;
        }
    } while (n>=0);
    insertHead(lista, 5);
    //insertInOrder(lista, 5, 10);
    conta = stampa(lista);
    lunghezzaLista(conta);
    //printf("Numero di elementi: %d", conta);
    printf("\n");
    return  0;
}



/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LUNG 20

typedef struct node{
    char nome[LUNG];
    struct node *next;
}Node;

int main(){
    Node *lista = (Node*)malloc(sizeof(Node));
    Node *temp = (Node*)malloc(sizeof(Node));
    printf("Inserisci un nome: ");
    gets(lista->nome);
    lista->next = NULL;
    printf("Nome1: %s",lista->nome);
    lista->next = NULL;

    printf("\nInserisci un nome: ");
    gets(temp->nome);
    printf("Nome2: %s",temp->nome);
    temp->next = NULL;
    lista->next = NULL;

    lista->next = temp;
    printf("\nInserisci un nome: ");
    gets(temp->nome);
    printf("Nome3: %s\n",temp->nome);
    temp->next = NULL;
    //lista->next = NULL;

    lista->next->next = temp;
    printf("\nNome1:%s\nNome2:%s\nNome3:%s",lista->nome,lista->next->nome,lista->next->next->nome);
    free(lista);
    free(temp);
    return 0;
}*/