#include <stdio.h>
#include <stdlib.h>

//aula 3 system("pause")

int main() {
    //Caractere de escape para saltar uma linha -> \n
    //printf é uma funçãode saída

    printf("Olá, mundo!\n");

    printf("Valor retornado: %d\n", printf("\nComo vai você ?\n"));

    printf("\nPressione qualquer tecla para finalizar.");

    getchar();

    return 0;
}