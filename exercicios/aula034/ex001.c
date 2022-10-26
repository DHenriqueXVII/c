#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 34

    Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
    porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
    Assuma que a conta será dividida igualmente.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float despesa, gorjeta, conta;
    int pessoas;

    printf("Despesa em reais: \33[1;32m");

    scanf("%f", &despesa);

    printf("\33[mPorcentagem da gorjeta: \33[1;32m");

    scanf("%f", &gorjeta);

    printf("\33[mQuantidade de pessoas: \33[1;32m");

    scanf("%d", &pessoas);

    conta = (despesa + despesa * gorjeta / 100) / pessoas;

    printf("\n\33[mCada pessoa deverá pagar R$ \33[1;32m%.2f\33[m\n", conta);

    return 0;
}