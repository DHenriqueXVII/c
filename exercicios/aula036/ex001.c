#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 36

    Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
    como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
    Dólares.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    float real, dolar;

    printf("Valor em real: \33[1;32m");

    scanf("%f", &real);

    dolar = real / 5.30;

    printf("\n\33[mValor em dolar: \33[1;32m%.2f\33[m\n", dolar);
}