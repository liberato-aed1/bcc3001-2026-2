#ifndef CONTA_H
#define CONTA_H

#include <string>

struct Conta {
    int         numero;
    std::string titular;
    double      saldo;
};

Conta* conta_criar(int numero, const std::string& titular);
void   conta_destruir(Conta* conta);
bool   conta_depositar(Conta* conta, double valor);
bool   conta_sacar(Conta* conta, double valor);
double conta_saldo(const Conta* conta);
void   conta_print(const Conta* conta);

#endif