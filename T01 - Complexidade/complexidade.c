#include <stdio.h>
#include <time.h>

typedef int Inteiro;

/*
 * Esta função simula uma pequena carga de processamento.
 * Serve para “engordar” o código e tornar a diferença de complexidade
 * mais visível no tempo de execução.
 */
void executaCarga(int carga) {
    int i;
    for (i = 0; i < carga; i++);
}


/*
 * Ordem O(log n): o valor de n é reduzido pela metade a cada passo.
 * Isso é muito mais eficiente que O(n).
 */
void ordem_logN(Inteiro n, int carga) {
    while (n > 0) {
        executaCarga(carga);
        n = n / 2;
    }
}


/*
 * Ordem O(n): um laço simples.
 * O código executa n vezes a função executaCarga.
 */
void ordem_n(Inteiro n, int carga) {
    Inteiro i;
    for (i = 0; i < n; i++) {
        executaCarga(carga);
    }
}

void ordem_n_exemplo2(Inteiro n, int carga) {
    Inteiro i;
    for (i = 0; i < n; i++) {
        executaCarga(carga);
    }

    for (i = 0; i < n; i++) {
        executaCarga(carga);
    }

    for (i = 0; i < n; i++) {
        executaCarga(carga);
    }

    for (i = 0; i < n; i++) {
        executaCarga(carga);
    }

    for (i = 0; i < n; i++) {
        executaCarga(carga);
    }
    
}

/*
 * Ordem O(n log n): o laço externo roda n vezes e o while divide j por 2.
 * A cada iteração do while, j diminui pela metade.
 */
void ordem_NlogN(Inteiro n, int carga) {
    Inteiro i, j;
    for (i = 0; i < n; i++) {
        j = n;
        while (j > 0) {
            executaCarga(carga);
            j = j / 2;
        }
    }
}


/*
 * Ordem O(n^2): laço externo + laço interno.
 * Para cada i, o laço interno executa até i vezes.
 */
void ordem_n2(Inteiro n, int carga) {
    Inteiro i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            executaCarga(carga);
        }
    }
}

void medeTempo(char* descricao, void (*funcao)(Inteiro, int), Inteiro n, int carga) {
    clock_t inicio, fim;
    double tempo_ms;

    /*
     * Medicao de tempo:
     * clock() retorna o tempo de CPU gasto ate o momento em "ticks".
     * Guardamos o momento antes da execucao da funcao e depois do termino.
     * A diferenca entre fim e inicio indica quanto tempo a funcao levou.
     */
    inicio = clock();
    funcao(n, carga);
    fim = clock();

    /* Converte o tempo em segundos para milissegundos para facilitar a leitura. */
    tempo_ms = ((double)(fim - inicio) * 1000.0) / CLOCKS_PER_SEC;

    printf("%12s : %.4f ms \n", descricao, tempo_ms);
}


int main() {

    Inteiro n = 10000;
    int carga = 10;

    medeTempo("O(log n)", ordem_logN, n, carga);
    medeTempo("O(n)", ordem_n, n, carga);   
    medeTempo("O(n log n)", ordem_NlogN, n, carga);
    medeTempo("O(n2)", ordem_n2, n, carga);
    
    printf("\n");
    printf("Exemplo de execução 5 * N \n");
    medeTempo("O(n) ex2", ordem_n_exemplo2, n, carga);
}