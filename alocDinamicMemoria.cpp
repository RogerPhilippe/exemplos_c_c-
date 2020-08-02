#include <stdio.h>
#include <stdlib.h>
#include <new>

int main() {

    int *vetorInt;
    // Recebe lista
    int tamList = 4;
    vetorInt = new int[tamList];

    // Matriz
    int **matrizInt;

    // Recebe lista
    int linhas = 3;
    int colunas = 3;
    int aux;

    matrizInt = (int **) new int[linhas];
        for(aux = 0; aux < linhas; aux++) {
        matrizInt[aux] = (int *) new int[colunas];
    }

    // Inserir elementos na matriz com dois for por exemplo.

    // Libera memório
    free(matrizInt);
 
    return 0;
}