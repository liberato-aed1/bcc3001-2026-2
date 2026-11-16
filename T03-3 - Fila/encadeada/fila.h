#ifndef FILA_H
#define FILA_H

class Node {
public:
    int valor;
    Node* prox;
};

class Fila {
private:
    Node* primeiro;
    Node* ultimo;
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