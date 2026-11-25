#include <iostream>
#include "lista.h"

Lista::Lista(){
    this->inicio == nullptr;
    this->fim == nullptr;    
    this->quantidade = 0;
}

Lista::~Lista(){
    limpa();
}


No* Lista::getNode(int posicao){

    No* aux;
    if (posicao < this->quantidade / 2){
        aux = this->inicio;    
        for(int i=0; i < posicao; i++) aux = aux->prox;   
    } else {
        aux = this->fim;
        for(int i = this->quantidade-1; i > posicao; i--) aux = aux->ant;
    }
    return aux;
}


bool Lista::insereInicio(int valor){
    No* novo = new No(elemento);
        
    novo->prox = this->inicio;

    if (this->inicio == nullptr){
        this->fim = novo;
    } else {        
        this->inicio->ant = novo;
    }
    this->inicio = novo;
    this->quantidade++;
    return true;
}

bool Lista::insereFim(int valor){
    No* novo = new No(elemento);

    if (this->fim == nullptr){
        this->inicio = novo;
    } else { 
        this->ultimo->prox = novo;
    }
    novo->ant = this->ultimo;
    this->ultimo = novo;
    this->quantidade++;
    return true;
}

bool Lista::insere(int posicao, int valor){
    if (posicao < 0) return false;
    if (posicao > this->quantidade) return false;
    
    if (this->quantidade == 0)   // Inserção na lista vazia
        return insereFim(valor);      
    
    if (posicao == 0)     // Inserção na primeira posição
        return insereInicio(valor);
    
    if (posicao == this->quantidade)   // Inserção na última posição
        return insereFim(valor);                
    

    No* novo = new No(elemento);


    No* aux = getNode(posicao-1);

    novo->prox = aux->prox;
    novo->ant = aux;
    aux->prox->ant = novo;
    aux->prox = novo;
    
    this->quantidade++;
    return true;
}

int Lista::removeInicio(){
    if(this->quantidade < 0 ) return -1;

    No* noRemovido = this->inicio;
    this->inicio = this->inicio->prox;
    
    if (this->inicio == nullptr) {
        this->fim = nullptr;
    } else {
        this->inicio->ant = nullptr;
    }
    int valor = noRemovido->dado;
    delete noRemovido;

    this->quantidade--;
    return valor;
}

int Lista::removeFim(){
    if(this->quantidade < 0 ) return -1;

    No* noRemovido = this->fim;
    this->fim = this->fim->ant;
    if(this->fim == nullptr){
        this->inicio = nullptr;
    } else{
        this->fim->prox = nullptr;
    }
    int valor = noRemovido->dado;
    delete noRemovido;
    return valor;
}

int Lista::remove(int posicao){
    
    // Remoção do ÚNICO elemento da lista
    if (this->quantidade == 1) return removeInicio();
    
    // Remoção do PRIMEIRO elemento
    if (posicao == 0) return removeInicio();

    // Remoção do ÚLTIMO elemento
    if (posicao == this->quantidade-1) return removeFim();

    // Remoção do elemento que está no meio
    No* noRemovido = getNode(posicao);
    
    noRemovido->prox->ant = noRemovido->ant;
    noRemovido->ant->prox = noRemovido->prox;

    int valor = noRemovido->dado;
    delete noRemovido;

    return valor;
}

 int Lista::get(int posicao){
    
    // No* aux = getNode(posicao);
    // return aux->dado;

    return getNode(posicao)->dado;
 }

 bool Lista::set(int posicao, int valor){
    No* aux = getNode(posicao);
    aux->dado = valor;
    return true;
 }

int Lista::busca(int valor){
    No* aux = this->inicio;
    int posicao = 0;

    while(aux != nullptr){
        if (aux->dado == valor) return posicao;

        aux = aux->prox;
        posicao++;
    }

    return -1;
}

void Lista::limpa(){
    No* aux = this->inicio;

    while(aux != nullptr){
        No* proximo = aux->prox;
        delete aux;
        aux = proximo;
    }

    this->inicio = nullptr;
    this->fim = nullptr;
    this->quantidade = 0;
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