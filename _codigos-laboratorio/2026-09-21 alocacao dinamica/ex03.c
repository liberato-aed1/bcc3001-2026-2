#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    unsigned int codigo;
    char nome[50];
    
    float* notas;
    int qtdeNotas;
}Aluno;


Aluno* criarAluno(int qtdeNotas){
    Aluno* novo = malloc(sizeof *novo);
    novo->notas = calloc(qtdeNotas, sizeof(float));
    novo->qtdeNotas = qtdeNotas;
    return novo;
}

void printAluno(Aluno* a){
    printf("%d\n", a->codigo);
    printf("%s\n", a->nome);
    printf("[");
    for(int i=0; i < a->qtdeNotas; i++){
        printf("%.1f", a->notas[i]);
        if(i < a->qtdeNotas-1) printf(", ");        
    }
    printf("]\n");    
}



int main(){
    
    Aluno* a1 = criarAluno(5);
    a1->codigo = 1;
    strcpy(a1->nome, "Joao");
    a1->notas[0] = 8.0;
    a1->notas[1] = 7.0;
    a1->notas[2] = 9.0;
    a1->notas[3] = 7.5;
    a1->notas[4] = 8.9;

    Aluno* a2 = criarAluno(4);
    a2->codigo = 2;
    strcpy(a2->nome, "Maria");
    a2->notas[0] = 10.0;
    a2->notas[1] = 9.0;
    a2->notas[2] = 8.0;
    a2->notas[3] = 9.9;

    printAluno(a1);
    printAluno(a2);
  
} 