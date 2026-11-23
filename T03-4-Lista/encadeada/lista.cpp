#include <iostream>
#include "lista.h"

Lista::Lista(){
    this->inicio == nullptr;
    this->fim == nullptr;    
    this->quantidade = 0;
}


bool Lista::insere(int posicao, int valor){

}

void Lista::imprime(){
    cout << "[";
    No* aux = this->inicio;
    while(aux != nullptr) {
        cout << aux->dado;
        if (aux->prox != nullptr) cout << ",";
        aux = aux->prox;
    }

    cout << "]" << endl;
}