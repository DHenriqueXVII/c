#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 33

    Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
    variável auxiliar.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    printf("Informe o primeiro número inteiro: ");

    scanf("%d", &a);

    printf("Informe o segundo número inteiro: ");

    scanf("%d", &b);

    printf("\nNúmeros inteiros recebidos: %d e %d", a, b);

    a += b;

    b = a - b;

    a = a - b;

    printf("\nNúmeros inteiros trocados: %d e %d\n", a, b);

    return 0;
}