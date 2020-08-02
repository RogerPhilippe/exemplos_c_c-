#include <stdio.h>
#include <stdlib.h>

void main() {

    int letra;

    FILE *file;
    file = fopen("teste.txt", "r");
    if (file) {
        while ((letra = getc(file)) != EOF) {
            printf("%c", letra);
        }
        fclose(file);
        
    }

}