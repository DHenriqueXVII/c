#include <stdio.h>
#include <stdlib.h>

/*
    Aula 26
    Operador de resto da divisão
*/

int main() {
    int a = 10, b = 20;
    float pi = 3.1415;

    a = (int)pi;

    printf("Valor de a: %d\n", a);
    printf("Soma: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);
    printf("Divisão: %f\n", (float)a / b);
    printf("Resto da divisão inteira: %d\n", 10 % 20);

    char caractere = '8';

    printf("Valor da variável: %c\n", caractere);

    int numero = (int)caractere;

    printf("Valor da variável: %d\n", numero -48);

    return 0;
}