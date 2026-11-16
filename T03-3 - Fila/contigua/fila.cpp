#include "fila.h"
#include <iostream>

using namespace std;

Fila::Fila(){
    this->dados = new int[5];
    this->capacidade = 5;
    this->inicio = 0;
    this->fim = 0;
    this->quantidade = 0;
}

Fila::~Fila(){
    delete[] this->dados;    
}

bool Fila::enfileira(int valor){
    this->dados[this->fim] = valor;
    this->fim++;
    this->quantidade++;
    
    return true;
}

int Fila::desenfileira(){
    int elemento = this->dados[this->inicio];
    this->inicio++;
    this->quantidade--;
    return elemento;
}

int Fila::primeiro() {
    return this->dados[this->inicio];
}

bool Fila::estaVazia(){
    return this->quantidade == 0;
}

int Fila::tamanho(){
    return this->quantidade;
}

void Fila::imprime(){
    cout << "[";
    for(int i=this->inicio; i<this->fim; i++){
        cout << this->dados[i];
        if (i < this->fim -1)
            cout << ",";
    }
    cout << "]" << endl;
}