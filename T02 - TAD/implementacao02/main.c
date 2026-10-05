#include <stdio.h>

#include "conta.h"

int main() {
    Conta* c = conta_criar(20, "Bruno");

    conta_depositar(c, 1000.0);
    conta_print(c);

    if (conta_sacar(c, 400.0)) {
        printf("Saque realizado.\n");
    }
    conta_print(c);

    conta_destruir(c);
    return 0;
}