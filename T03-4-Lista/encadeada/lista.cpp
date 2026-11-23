#include <iostream>
#include "lista.h"

Lista::Lista(){
    this->inicio == nullptr;
    this->fim == nullptr;    
    this->quantidade = 0;
}


bool Lista::insere(int posicao, int valor){
    
    
    if (this->quantidade == 0) {  // Inserção na lista vazia

    } else if (posicao == 0){     // Inserção na primeira posição

    } else if (posicao == this->quantidade){   // Inserção na última posição

    } else {
        
    }


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