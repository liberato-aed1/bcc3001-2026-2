
#include <iostream>
#include "pilha.h"

using namespace std;

int main() {

    Pilha* p1 = new Pilha();

    p1->empilha(10);
    p1->empilha(20);
    p1->empilha(30);

    cout << p1->top() << endl;
    cout << p1->vazia() << endl;

    p1->imprime(); //[30,20,10]
    
    int elemento = p1->desempilha();
    cout << elemento << endl; // 30
    p1->imprime(); //[20,10]
    
    elemento = p1->desempilha();
    cout << elemento << endl; // 20
    p1->imprime(); //[10]
    
    elemento = p1->desempilha();
    cout << elemento << endl; // 10
    p1->imprime(); // []
    



}