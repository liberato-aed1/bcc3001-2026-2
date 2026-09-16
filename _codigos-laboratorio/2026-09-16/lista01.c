#include <stdio.h>
#include <stdlib.h>


int* novoVetor(int n, int valor){

    int* novo = calloc(n, sizeof *novo);
    for(int i=0; i < n; i++){
        novo[i] = valor;

    }
    return novo;
}

void printVetor(int* v, int tam){
    
    printf("[");
    for(int i=0; i<tam; i++){
        printf("%d", v[i]);
        if(i < tam-1) printf(",");
    }
    printf("]\n");
}


int main(){ 
    int* v1 = novoVetor(3,-1);
    
    int* v2 = novoVetor(5,9);

    printVetor(v1, 3);  // [-1,-1,-1]
    printVetor(v2, 5);  // [9,9,9,9,9]
}