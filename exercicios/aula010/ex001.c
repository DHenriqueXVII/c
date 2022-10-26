#include <stdio.h>
#include <stdlib.h>

/*
    Aula 10
    lendo vários valores
*/

int main() {
    int num1, num2, num3;

    printf("Digite três números inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("Valores das variáveis: %d %d %d\n", num1, num2, num3);

    return 0;
}