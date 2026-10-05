#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DADOS

struct conta {
    int    numero;
    char   titular[100];
    double saldo;
};

typedef struct conta Conta;
typedef int          bool;

// OPERAÇÕES

Conta* conta_criar(int numero, char* titular){
    Conta* nova = malloc(sizeof(Conta));    
    nova->numero = numero;
    strcpy(nova->titular, titular);
    nova->saldo = 0;
    return nova;
}

void   conta_destruir(Conta* conta){
    free(conta);
}

bool   conta_depositar(Conta* conta, double valor){
    if (valor <= 0) return 0;

    conta->saldo += valor;
    return 1;
}

bool   conta_sacar(Conta* conta, double valor){
    if (valor > conta->saldo) return 0;

    conta->saldo -= valor;
    return 1;
}

double conta_saldo(Conta* conta){
    return conta->saldo;
}

void   conta_print(Conta* conta){
    printf("[Num %d | %s | Saldo %.2f] \n", conta->numero, conta->titular, conta->saldo);
}


void teste(){
    Conta* c1 = conta_criar(1, "Joao");
    Conta* c2 = conta_criar(2, "Maria");
    Conta* c3 = conta_criar(3, "Jose");
    printf("Conta criada com sucesso \n");

    conta_depositar(c1, 100);
    conta_depositar(c2, 200);
    conta_depositar(c3, 300);
    conta_print(c1);
    conta_print(c2);
    conta_print(c3);

    printf("\n");

    conta_sacar(c1, 50);
    conta_sacar(c2, 50);
    conta_sacar(c3, 50);
    conta_print(c1);
    conta_print(c2);
    conta_print(c3);

    // printf("%.2f \n", c1->saldo);
    printf("%.2f \n", conta_saldo(c1));
    


    conta_destruir(c1);
    conta_destruir(c2);
    conta_destruir(c3);
}


int main(){

    teste();


}

 