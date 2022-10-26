#include <stdio.h>
#include <stdlib.h>

/*
    Aula 18
    tamanho de um int na memória
    intervalo: -2.147.483.648 até 2.147.483.647
    %hi ou %d
*/

int main() {
    int x = 2147483647;

    printf("Valor de x: %d\n", x);
    x ++;
    printf("Valor de x: %d\n", x);

    return 0;
}