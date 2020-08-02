#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tam);

void main() {

    // Vetor
    int *vetorInt;
    // Poderia receber uma lista com tamanho 4 por exemplo
    int tam = 4;
    vetorInt = alocaVetor(tam);

    // Matriz
    int **matrizInt;

    // Recebe lista
    int linhas = 3;
    int colunas = 3;
    int aux;
    
    matrizInt = (int **) malloc(linhas * sizeof(int *));
    for(aux = 0; aux < linhas; aux++) {
        matrizInt[aux] = (int *) malloc(colunas * sizeof(int));
    }

    // Inserir elementos na matriz com dois for por exemplo.

    // Libera memório
    free(matrizInt);

}

int* alocaVetor(int tam) {

    int *aux;
    // Alocação dinâmica de memória
    aux = (int*) malloc(tam * sizeof(int));
}