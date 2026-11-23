#include <iostream>
#include "lista.h"

Lista::Lista(){
    this->inicio == nullptr;
    this->fim == nullptr;    
    this->quantidade = 0;
}


bool Lista::insere(int posicao, int valor){
    
    
    if (this->quantidade == 0) {  // Inserção na lista vazia
        this->inicio = novo;
        this->fim = novo;
        this->quantidade++;

    } else if (posicao == 0){     // Inserção na primeira posição
        No* novo = new No(elemento);
        
        novo->prox = this->inicio;
        this->inicio->ant = novo;
        this->inicio = novo;
        this->quantidade++;
        
    } else if (posicao == this->quantidade){   // Inserção na última posição
        No* novo = new No(elemento);

        this->ultimo->prox = novo;
        novo->ant = this->ultimo;
        this->ultimo = novo;
        this->quantidade++;
        
    } else {

        No* aux = this->inicio;
        
        for(int i=0; i < posicao-1; i++) aux = aux->prox;
        No* novo = new No(elemento);

        novo->prox = aux->prox;
        novo->ant = aux;
        aux->prox->ant = novo;
        aux->prox = novo;
        
        this->quantidade++;

        


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