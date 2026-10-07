#include <iostream>
#include "conta.h"

int main() {
    Conta c(20, "Bruno");

    c.depositar(1000.0);
    c.print();

    if (c.sacar(400.0)) {
        std::cout << "Saque realizado.\n";
    }
    c.print();
    
    c1.sacar(-500)

    return 0;
}