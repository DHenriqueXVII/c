#include <stdio.h>
#include <stdlib.h>

/*
    Aula 16
    operador sizeof
    sizeof x ou sizeof(int)
*/

int main() {
    float x = 1.0;

    printf("Tamanho em memória de um float: %d bytes\n", sizeof x);
    printf("Tamanho em memória de um int: %d bytes\n", sizeof(int));

    return 0;
}