#include <stdio.h>
#include <stdlib.h>

int vetor_dobraTamanho(int **vetor, int tamanho) {
	int novoTamanho = tamanho * 2;
	int *novoVetor = calloc(novoTamanho, sizeof(int));

	if (novoVetor == NULL) {
		return 0;
	}

	for (int i = 0; i < tamanho; i++) {
		novoVetor[i] = (*vetor)[i];
	}

	free(*vetor);
	*vetor = novoVetor;

	return novoTamanho;
}

void printVetor(int* v, int tam){
    
    printf("[");
    for(int i=0; i<tam; i++){
        printf("%d", v[i]);
        if(i < tam-1) printf(",");
    }
    printf("]\n");
}

int main(){
	int *v = calloc(3, sizeof(int));
	v[0] = 2;
	v[1] = 4;
	v[2] = 6;

	int novoTamanho = vetor_dobraTamanho(&v, 3);
	printVetor(v, novoTamanho);

	free(v);
}