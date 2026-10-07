#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "conta.h"

Conta* conta_criar(int numero, char* titular) {
    Conta* novo = malloc(sizeof(Conta));
    novo->numero = numero;
    strcpy(novo->titular, titular);
    novo->saldo  = 0;
    return novo;
}

void conta_destruir(Conta* conta) {
    free(conta);
}

bool conta_depositar(Conta* conta, double valor) {
    if (valor <= 0) return 0;
    conta->saldo += valor;
    return 1;
}

bool conta_sacar(Conta* conta, double valor) {
    if (valor > conta->saldo) return 0;
    conta->saldo -= valor;
    return 1;
}

double conta_saldo( Conta* conta) {
    return conta->saldo;
}

void conta_print( Conta* conta) {
    printf("[Conta %d | %s | Saldo: R$ %.2f]\n", conta->numero, conta->titular, conta->saldo);
}