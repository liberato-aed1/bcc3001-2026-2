#ifndef FILA_H
#define FILA_H

class Fila {
private:
    int* dados;
    int inicio;
    int fim;
    int capacidade;
    int quantidade;

    void redimensiona();
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