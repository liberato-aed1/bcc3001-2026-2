#include <stdio.h>
#include <stdlib.h>


void printVetor(int* v, int tam){
    
    printf("[");
    for(int i=0; i<tam; i++){
        printf("%d", v[i]);
        if(i < tam-1) printf(",");
    }
    printf("]\n");
}

int dobra(int x){
    return x * 2;
}

int incrementa(int x){
    return x + 1;
}

int* vetor_map(int* v, int n, int (*funcao)(int)){
    int* novo = calloc(n, sizeof(int));

    for(int i=0; i < n; i++){
        novo[i] = funcao(v[i]);
    }
    return novo;
}

int main(){
    

    int array[] = {15, 16, 17, 18, 19};

    int* arrayDobrados = vetor_map(array, 5, dobra);
    int* arrayIncrementados = vetor_map(array, 5, incrementa);


    printVetor(array, 5);
    printVetor(arrayDobrados, 5);
    printVetor(arrayIncrementados, 5);




  
} 