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

void vetor_forEach(int* v, int n, int (*funcao)(int)){
    

    for(int i=0; i < n; i++){
        v[i] = funcao(v[i]);
    }
}

int main(){
    

    int array[] = {15, 16, 17, 18, 19};
    printVetor(array, 5);
    
    vetor_forEach(array, 5, dobra);
    printVetor(array, 5);
    
    vetor_forEach(array, 5, incrementa);
    printVetor(array, 5);
    






  
} 