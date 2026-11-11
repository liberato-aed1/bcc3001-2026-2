#include <iostream>
#include "pilha.h"

using namespace std;

Pilha::Pilha(){
    this->topo = nullptr;
    this->quantidade = 0;
}

Pilha::~Pilha(){
    
}


void Pilha::empilha(int valor){
    No* novo = new No(valor);

    novo->prox = this->topo;
    this->topo = novo;
    this->quantidade++;

}
int Pilha::desempilha(){
    No* aux = this->topo;
    this->topo = this->topo->prox;

    int elemento = aux->dado;
    delete aux;
    this->quantidade--;
    return elemento;

}

int  Pilha::top(){    
    return this->topo->dado;
}
bool Pilha::vazia(){
    return this->topo == nullptr;
}

void Pilha::imprime(){
    cout << "[";
    No* aux = this->topo;
    while(aux != nullptr){
        cout << aux->dado;
        if (aux->prox != nullptr) cout << ",";
        aux = aux->prox;
    }
    cout << "]" << endl;
}