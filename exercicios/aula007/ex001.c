#include <stdio.h>
#include <stdlib.h>

/*
    Aula 7
    lendo caracteres
    função getchar()
*/

int main() {
    char letra;

    printf("Digite uma letra: ");
    letra = getchar();

    printf("Valor da variável: %c\n", letra);

    return 0;
}