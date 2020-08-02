#include <iostream>
#include <new>
#include <string>

using namespace std;

int main() {

    int tam = 10;
    int i;
    int vetor[10];

    // Número randomico
    srand((unsigned) time(NULL));

    for (i = 0; i < tam; i++) {
        vetor[i] = rand() % 10;
    }

    cout << "Números sorteados:" << endl;
    for (i = 0; i < tam; i++) {
        if (i < tam - 1) 
            cout << vetor[i] << ", ";
        else 
            cout << vetor[i] << endl;

    }

    return 0;
}