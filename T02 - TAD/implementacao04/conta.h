#ifndef CONTA_H
#define CONTA_H

#include <string>

class Conta {
private:
    int         numero;
    std::string titular;
    double      saldo;

public:
    Conta(int numero,  std::string& titular);

    bool   depositar(double valor);
    bool   sacar(double valor);
    double saldo_atual() ;
    void   print() ;
};

#endif