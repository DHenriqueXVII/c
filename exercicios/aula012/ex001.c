#include <stdio.h>
#include <stdlib.h>

/*
    Aula 12
    ler idade, peso, altura e sexo
*/

int main() {
    char sexo;
    int idade;
    float peso, altura;

    /*printf("Preencha abaixo:\n\n");

    printf("Sexo: \33[1;32m");
    scanf("%c", &sexo);
    printf("\33[mIdade: \33[1;32m");
    scanf("%d", &idade);
    printf("\33[mPeso: \33[1;32m");
    scanf("%f", &peso);
    printf("\33[mAltura: \33[1;32m");
    scanf("%f", &altura);

    printf("\n\33[mSuas informações:\n");

    printf("\n\33[mSexo: \33[1;32m%c\33[m\nIdade: \33[1;32m%d\33[m\nPeso: \33[1;32m%.1f\33[m\nAltura: \33[1;32m%.2f\33[m\n", sexo, idade, peso, altura);*/

    printf("Informe idade, peso, altura e sexo: ");
    scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);

    //Buffer do teclado => 45\n56.2\n1.63\n

    printf("\nSuas informações:\n\n");

    printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);
}