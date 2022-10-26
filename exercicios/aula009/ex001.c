#include <stdio.h>
#include <stdlib.h>

/*
    Aula 9
    lendo caracteres
    função fgetc()
*/

int main() {
    char letra;

    printf("Digite uma letra: ");
    letra = fgetc(stdin);
    
    printf("Valor da variável: %c \n", letra);
    
    return 0;
}