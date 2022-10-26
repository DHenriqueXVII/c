#include <stdio.h>
#include <stdlib.h>

/*
    Aula 19
    operador long para o tipo int
    %li ou %ld
*/

int main() {
    long long int x = 2147483647;

    printf("Tamanho de um long int na memória: %d bytes\n", sizeof x);

    printf("Valor de x: %lli\n", x);
    x ++;
    printf("Valor de x: %lld\n", x);

    return 0;
}