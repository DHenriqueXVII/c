#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 35

    Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
    número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
    sabendo que são descontados 8% para imposto de renda.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int diasTrabalhados;
    float salario;

    printf("Informe o número de dias trabalhados: \33[1;32m");

    scanf("%d", &diasTrabalhados);

    salario = 45.00 * diasTrabalhados - 45.00 * diasTrabalhados * 8 / 100;

    printf("\n\33[mO salário com impostos será R$ \33[1;32m%.2f\33[m\n", salario);

    return 0;
}