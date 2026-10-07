#include <iostream>
#include "conta.h"

using namespace std;

int main() {
    Conta* c = conta_criar(20, "Bruno");

    conta_depositar(c, 1000.0);
    conta_print(c);

    if (conta_sacar(c, 400.0)) {
        // std::cout << "Saque realizado.\n";        
        cout << "Saque realizado.\n";        
        // printf("Saque realizado\n");        
    }
    conta_print(c);

    c->saldo = -500;
    cout << c->saldo;

    conta_destruir(c);
    cout << "conta desalocada";
    return 0;
}