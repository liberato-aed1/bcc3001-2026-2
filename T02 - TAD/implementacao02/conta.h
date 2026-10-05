#ifndef CONTA_H
#define CONTA_H

struct conta {
    int    numero;
    char   titular[100];
    double saldo;
};

typedef struct conta Conta;
typedef int          bool;

Conta* conta_criar(int numero, char* titular);
void   conta_destruir(Conta* conta);
bool   conta_depositar(Conta* conta, double valor);
bool   conta_sacar(Conta* conta, double valor);
double conta_saldo(Conta* conta);
void   conta_print(Conta* conta);

#endif