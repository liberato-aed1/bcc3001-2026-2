#include <iostream>
#include "fila.h"

using namespace std;

int main(){

    Fila* f1 = new Fila();
    f1->enfileira(10);
    f1->enfileira(20);
    f1->enfileira(30);

    f1->imprime();  // [10,20,30]
    
    int elemento = f1->desenfileira();
    cout << elemento << endl;  // 10
    
    cout << "Primeiro: " << f1->primeiro(); // 20
    f1->imprime();  // [20,30]
    
    elemento = f1->desenfileira();
    cout << elemento << endl;  // 20
    f1->imprime();  // [30]

    elemento = f1->desenfileira();
    cout << elemento << endl;  // 10
    f1->imprime();  // []

}