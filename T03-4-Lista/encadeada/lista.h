#ifndef LISTA_H
#define LISTA_H

/** Nó de uma lista duplamente encadeada. */
class No {
public:
    int valor;  ///< Valor armazenado.
    No* ant;  ///< Nó anterior (nullptr se for o primeiro).
    No* prox; ///< Próximo nó (nullptr se for o último).

    /** Cria um nó isolado com os ponteiros ant e prox em nullptr. */
    No(int valor);
};

/** Lista duplamente encadeada com acesso por índice. */
class Lista {
private:
    No* inicio;   ///< Primeiro nó (nullptr se vazia).
    No* fim;      ///< Último nó (nullptr se vazia).
    int quantidade; ///< Número de elementos.

    /**
     * Retorna o nó na posição informada.
     * @param posicao Índice (0 a quantidade - 1).
     * @return Ponteiro para o nó, ou nullptr se posição inválida.
     */
    No* getNode(int posicao);

public:
    Lista();
    ~Lista(); ///< Libera todos os nós alocados dinamicamente.

    /**
     * Insere valor no início da lista.
     * @return true em sucesso, false se a alocação falhar.
     */
    bool insereInicio(int valor);

    /**
     * Insere valor no fim da lista.
     * @return true em sucesso, false se a alocação falhar.
     */
    bool insereFim(int valor);

    /**
     * Insere valor na posição informada, deslocando os elementos seguintes.
     * @param posicao Índice de inserção (0 a quantidade, inclusive).
     *                Inserir em `quantidade` equivale a inserir no fim.
     * @return false se posição inválida ou alocação falhar.
     */
    bool insere(int posicao, int valor);

    /**
     * Remove e retorna o valor do início.
     * @return Valor removido, ou -1 se a lista estiver vazia.
     */
    int removeInicio();

    /**
     * Remove e retorna o valor do fim.
     * @return Valor removido, ou -1 se a lista estiver vazia.
     */
    int removeFim();

    /**
     * Remove e retorna o valor da posição informada.
     * @param posicao Índice (0 a quantidade - 1).
     * @return Valor removido, ou -1 se posição inválida.
     */
    int remove(int posicao);

    /**
     * Retorna o valor na posição sem remover.
     * @param posicao Índice (0 a quantidade - 1).
     * @return Valor na posição, ou -1 se posição inválida.
     */
    int get(int posicao);

    /**
     * Atualiza o valor na posição informada.
     * @param posicao Índice (0 a quantidade - 1).
     * @return false se posição inválida.
     */
    bool set(int posicao, int valor);

    /**
     * Retorna o índice da primeira ocorrência do valor.
     * @return Índice encontrado, ou -1 se não existir.
     */
    int busca(int valor);

    bool estaVazia(); ///< Retorna true se não houver elementos.
    int tamanho();    ///< Retorna a quantidade de elementos.
    void imprime();   ///< Imprime os elementos no formato [a, b, c].

    /** Remove todos os elementos; a lista permanece utilizável após a chamada. */
    void limpa();
};

#endif
