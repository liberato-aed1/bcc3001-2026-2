#include <iostream>
#include "conta.h"

Conta* conta_criar(int numero, const std::string& titular) {
    Conta* novo = new Conta;
    novo->numero  = numero;
    novo->titular = titular;
    novo->saldo   = 0;
    return novo;
}

void conta_destruir(Conta* conta) {
    delete conta;
}

bool conta_depositar(Conta* conta, double valor) {
    if (valor <= 0) return false;
    conta->saldo += valor;
    return true;
}

bool conta_sacar(Conta* conta, double valor) {
    if (valor > conta->saldo) return false;
    conta->saldo -= valor;
    return true;
}

double conta_saldo(const Conta* conta) {
    return conta->saldo;
}

void conta_print(const Conta* conta) {
    std::cout << "[Conta " << conta->numero << " | " << conta->titular << " | Saldo: R$ " << conta->saldo << "]\n";
}