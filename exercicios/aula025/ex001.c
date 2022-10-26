#include <stdio.h>
#include <stdlib.h>

/*
    Aula 25
    Conversão de tipos
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

    return 0;
}