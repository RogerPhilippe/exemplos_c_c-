#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Palavra {
    int order;
    char texto[255];
};

typedef struct DataNascimento {
        int dia;
        int mes;
        int ano;
}DataNascimento;

struct Aluno {
    int id;
    char nome[255];
    DataNascimento dtNascimento;
};

void main() {

    struct Palavra primeiraPalavra;

    primeiraPalavra.order = 0;
    primeiraPalavra.texto[0] = 'O';
    primeiraPalavra.texto[1] = 'l';
    primeiraPalavra.texto[2] = 'a';
    // Opcionalmente
    strcpy(primeiraPalavra.texto, "Mundo");

    // Exibindo
    printf("Palavra: %s", primeiraPalavra.texto);
    printf("\n");

    // Lista struct
    struct Palavra listaDePalavras[3];

    listaDePalavras[0].order = 0;
    listaDePalavras[0].texto[0] = 'E';
    listaDePalavras[0].texto[1] = 'i';

    strcpy(listaDePalavras[1].texto, "Oi");

    // Exibindo
    printf("Palavra: %s", listaDePalavras[1].texto);
    printf("\n");

    // Sub struct
    struct Aluno aluno1;
    aluno1.id = 0;
    aluno1.dtNascimento.dia = 21;
    aluno1.dtNascimento.mes = 10;
    aluno1.dtNascimento.ano = 1985;
    strcpy(aluno1.nome, "Roger Philippe");

    printf("Aluno: %s", aluno1.nome);
    printf("\n");
    printf("Data Nascimento: %d/%d/%d", aluno1.dtNascimento.dia, aluno1.dtNascimento.mes, aluno1.dtNascimento.ano);
    printf("\n");

}