#include <iostream>
#include "lista.h"

using namespace std;


void teste1(){
    cout << "\n";
    cout << "Inserção do primeiro elemento" << endl;
    
    Lista* l1 = new Lista();
    l1->insere(0,10); // Inserção do primeiro elemento
    l1->imprime();    // [10]
}

void teste2(){
    cout << "\n";
    cout << "Inserção na PRIMEIRA posição" << endl;
    
    Lista* l1 = new Lista();
    l1->insere(0,30); 
    l1->insere(0,20); 
    l1->insere(0,10); 
    
    l1->imprime();    // [10,20,30]
}

void teste3(){
    cout << "\n";
    cout << "Inserção na ÚLTIMA posição" << endl;
    
    Lista* l1 = new Lista();
    l1->insere(0,10); 
    l1->insere(1,20); 
    l1->insere(2,30); 
    
    l1->imprime();    // [10,20,30]
}

void teste4(){
    cout << "\n";
    cout << "Inserção no MEIO da lista" << endl;
    
    Lista* l1 = new Lista();
    l1->insere(0,10); 
    l1->insere(1,20); 
    l1->insere(2,30); // [10,20,30]
    
    l1->insere(1,15); // [10,15,20,30]
    l1->insere(3,25); // [10,15,20,25,30]

    l1->imprime();    // [10,15,20,25,30]
}

int main(){
    teste1();
    teste2();
    teste3();
    teste4();

    
}