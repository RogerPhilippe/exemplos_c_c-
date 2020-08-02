#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

// Evitar utilizar std:: antes das funções da lib.
using namespace std;

int main() {

    // Uma string
    //std::string palavra;
    string palavra;

    // Lendo do teclado
    //std::cin >> palavra;
    cin >> palavra;

    // Exibindo no terminal
    //std::cout << palavra;
    // Para concatenar: << "MSG" << variável
    cout << palavra;

    return 0;

}