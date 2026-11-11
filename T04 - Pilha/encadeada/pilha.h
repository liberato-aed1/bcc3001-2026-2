#ifndef PILHA_H
#define PILHA_H

class No {
    public:
        int dado;
        No* prox;
        No(int dado){
            this->dado = dado;
        }
    };

class Pilha {
private:
    

    No* topo;
    int quantidade;

public:
    Pilha();
    ~Pilha();

    void empilha(int valor);
    int desempilha();
    int  top();
    bool vazia();
    void imprime();
};

#endif