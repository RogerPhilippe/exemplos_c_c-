#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main() {
    // Usar o idioma padrão do terminal no momento da execução.
    setlocale(LC_ALL, "");
    printf("Olá CC++.\n");

// Número randomico
    srand((unsigned) time(NULL));
    int randomic = rand(); // se rand() % 3, numero aleatório entre 0 e 2

    printf("Número aleatório: %d\n", randomic);

    // Define

    #define TAM 10;
    int tam = TAM;
    printf("Constante: %d\n", tam);

    // Vetor
    int vetor[3];
    // Entrada dado do teclado
    scanf("%d", &vetor[0]); // Adicionar no endereço do vetor no index 0

    // Scanf com variável
    int tamanho;
    printf("Digite um número:");
    scanf("%d", &tamanho);

    // String
    // Utilizando char
    char palavra [255];
    // Limpa buffer
    setbuf(stdin, 0);
    // Recebe palavra do teclado
    fgets(palavra, 255, stdin);
    // Indicando final da palavra para desocupar memória, no caso para palavras menores que 255, que é o tamonho do vetor
    palavra[strlen(palavra) -1] = '\0';

}