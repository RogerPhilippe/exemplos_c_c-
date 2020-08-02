#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main() {

    ifstream input("teste.txt");
    string texto;
    for(string line; getline(input, line);) {
        texto += line;
    }

    cout << texto << endl;

    return 0;
}