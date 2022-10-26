#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 38

    Operadores relacionais

    menor que (a < b)
    maior que (a > b)
    menor ou igual (a <= b)
    maior ou igual (a >= b)
    igual (a == b)
    diferente (a != b)
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a = 10, b = 20;

    printf("Resultado: %d\n", a < b);
    printf("Resultado: %d\n", a > b);
    printf("Resultado: %d\n", a <= b);
    printf("Resultado: %d\n", a >= b);
    printf("Resultado: %d\n", a == b);
    printf("Resultado: %d\n", a != b);

    return 0;
}