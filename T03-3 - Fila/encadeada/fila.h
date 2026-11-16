#ifndef FILA_H
#define FILA_H

class No {
    public:
        int dado;
        No* prox;
        No(int dado){
            this->dado = dado;
            this->prox = nullptr;
        }
};

class Fila {
private:
    No* inicio;
    No* fim;
    int quantidade;

public:
    Fila();
    ~Fila();

    bool enfileira(int valor);
    int desenfileira();
    int primeiro();
    bool estaVazia();
    int tamanho();
    void imprime();

};

#endif