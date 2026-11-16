#include <iostream>
#include "fila.h"

using namespace std;

int main(){

    Fila* f1 = new Fila();

    f1->enfileira(10);
    f1->enfileira(20);
    f1->enfileira(30);
    f1->enfileira(40);

    f1->imprime();  // [10,20,30,40]
    
    int elemento = f1->desenfileira();
    cout << "removido: " << elemento << endl;  // 10
    elemento = f1->desenfileira();
    cout << "removido: " << elemento << endl;  // 10
    
    f1->imprime();  // [30,40]

} 