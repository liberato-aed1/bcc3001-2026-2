#include <stdio.h>
#include <stdlib.h>


typedef struct no {
    int dado;
    struct no* prox;
} No;

void printContigua(int* v, int tam){
    printf("[");
    for(int i=0; i<tam; i++){
        printf("%d", v[i]);
        if (i < tam-1) printf(", ");
    }
    printf("]\n");
}

void printEncadeada(No* no){
    printf("[");
    No* aux = no;
    while(aux != NULL){
        printf("%d", aux->dado);
        if(aux->prox != NULL) printf(",");
        aux = aux->prox;
    }
    printf("]");
}


int main(){

    int* lista1 = calloc(3, sizeof(int));
    lista1[0] = 10;
    lista1[1] = 20;
    lista1[2] = 30;

    // printContigua(lista1, 3); //[10,20,30]

    // Nó com alocação estática
    struct no x;
    x.dado = 50;
    // printf("%d \n", x.dado);
    
    // Nó com alocação dinâmica
    No* y = malloc(sizeof(No));
    y->dado = 100;
    // printf("%d \n", y->dado);

    No* n1 = malloc(sizeof(No));
    No* n2 = malloc(sizeof(No));
    No* n3 = malloc(sizeof(No));

    n1->dado = 10;
    n2->dado = 20;
    n3->dado = 30;

    n1->prox = n2;
    n2->prox = n3;
    n3->prox = malloc(sizeof(No));
    n3->prox->dado = 40;
    n3->prox->prox = NULL;

    printEncadeada(n1); // [10,20,30]

    // printf("%d \n", n1->dado);
    // printf("%d \n", n1->prox);
    // printf("%d \n", n2);
    // printf("%d \n", n1->prox->dado);
    // printf("%d \n", n3->dado);
    // printf("%d \n", n1->prox->prox->dado);


    // printf("%d \n", n2->dado);
    // printf("%d \n", n3->dado);





}