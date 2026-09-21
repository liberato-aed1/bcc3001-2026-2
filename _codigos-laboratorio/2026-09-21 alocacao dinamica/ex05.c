#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vetor_incrementa(int* v, int n) {
    for (int i = 0; i < n; i++) {
        v[i]++;
    }
}

void vetor_dobra(int* v, int n) {
    for (int i = 0; i < n; i++) {
        v[i] *= 2;
    }
}

void printVetor(int* vetor, int n){
    printf("[");
    for(int i = 0; i < n; i++){
        printf("%d", vetor[i]);
        if(i < n - 1){
            printf(",");
        }
    }
    printf("]\n");
}

int main(){
    int v1[5] = {10,20,30,40,50};
    int v2[5] = {1,2,3,4,5};

    vetor_incrementa(v1, 5); 
    printVetor(v1, 5); // [11,21,31,41,51]

    vetor_dobra(v2, 5); 
    printVetor(v2, 5); // [2,4,6,8,10]

}