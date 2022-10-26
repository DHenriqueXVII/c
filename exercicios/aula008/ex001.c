#include <stdio.h>
#include <stdlib.h>

/*
    Aula 8
    lendo caracteres
    função getc()
*/

int main() {
    char letra;

    printf("Digite uma letra: ");
    letra = getc(stdin);

    printf("Valor da variável: %c\n", letra);

    return 0;
}