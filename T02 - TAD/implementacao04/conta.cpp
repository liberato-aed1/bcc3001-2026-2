#include <iostream>
#include "conta.h"

Conta::Conta(int numero, const std::string& titular){
    this->numero  = numero;
    this->titular = titular;
    this->saldo   = 0;
}

bool Conta::depositar(double valor) {
    if (valor <= 0) return false;
    this->saldo += valor;
    return true;
}

bool Conta::sacar(double valor) {
    if (valor <= 0) return false;
    if (valor > this->saldo) return false;

    this->saldo -= valor;
    return true;
}

double Conta::saldo_atual() {
    return this->saldo;
}

void Conta::print() const {
    std::cout << "[Conta " << this->numero
              << " | " << this->titular
              << " | Saldo: R$ " << this->saldo << "]\n";
}