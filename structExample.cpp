#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

struct Fruta{
    int id;
    string nome;
};


int main() {
    
    Fruta *primeiraFruta = new Fruta;

    primeiraFruta->id = 0;
    primeiraFruta->nome = "Maçã";

    cout << "Fruta ID: " << primeiraFruta->id << endl;
    cout << "Nome: " << primeiraFruta->nome << endl;

    // List
    Fruta *frutas = new Fruta[2];

    frutas[0].id = 0;
    frutas[0].nome = "Maçã";
    frutas[1].id = 1;
    frutas[1].nome = "Banana";

    cout << "Primeira fruta: " << "ID: " << frutas[0].id << " Nome: " << frutas[0].nome << endl;
    
    return 0;

}