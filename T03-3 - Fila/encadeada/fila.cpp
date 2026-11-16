#include "fila.h"
#include <iostream>

using namespace std;

Fila::Fila(){
    this->inicio == nullptr;
    this->fim == nullptr;    
    this->quantidade = 0;
}

Fila::~Fila(){
    
}

bool Fila::enfileira(int valor){
    No* novo = new No(valor);
    
    if (this->inicio == nullptr) {
        this->inicio = novo;    
    } else {
        this->fim->prox = novo;
    }

    this->fim = novo;
    this->quantidade++;
    return true; 
}

int Fila::desenfileira(){
    if(this->estaVazia()) return -1;

    No* aux = this->inicio;
    this->inicio = this->inicio->prox;
    if (this->inicio == nullptr) this->fim = nullptr;

    int elemento = aux->dado;
    delete aux;
    this->quantidade--;
    return elemento;
}

int Fila::primeiro() {
    return this->inicio->dado;
}

bool Fila::estaVazia(){
    return this->quantidade == 0;
}

int Fila::tamanho(){
    return this->quantidade;
}

void Fila::imprime(){
    cout << "[";
    No* aux = this->inicio;
    while(aux != nullptr) {
        cout << aux->dado;
        if (aux->prox != nullptr) cout << ",";
        aux = aux->prox;
    }

    cout << "]" << endl;
}