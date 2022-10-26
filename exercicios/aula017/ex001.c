#include <stdio.h>
#include <stdlib.h>

/*
    Aula 17
    operador short para o tipo int
    intervalo: -32.768 - 32.767
    %hi ou %d
*/

int main() {
    short int x = 32767;

    printf("Valor de x: %d\n", x);
    x ++;
    printf("Valor de x: %hi\n", x);
    printf("Tamanho em memória de um short int: %d bytes\n", sizeof x);
    printf("Tamanho em memória de um int: %d bytes\n", sizeof(int));

    return 0;
}