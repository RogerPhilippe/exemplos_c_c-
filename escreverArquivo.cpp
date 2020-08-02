#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main() {

    ofstream arquivo;

    // Abrir ou criar arquivo
    arquivo.open("teste.txt", std::ios_base::app);
    arquivo << "Exemplo de screver em arquivo c++";
    arquivo.close();

    return 0;
}