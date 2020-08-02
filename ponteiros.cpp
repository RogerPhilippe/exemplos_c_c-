#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

void alteraViaMetodo(int *numero);
void preencheVetor(int *vetor);

int main() {

    int a = 10;
    int *ponteiro = &a;

    // Alterando valor de "a" via ponteiro
    *ponteiro = 20;

    alteraViaMetodo(&a);

    int vetor[3];
    preencheVetor(vetor);

return 0;

}

void alteraViaMetodo(int *numero) {
    *numero = 30;
}

void preencheVetor(int *vetor) {
    vetor[0] = 120;
}