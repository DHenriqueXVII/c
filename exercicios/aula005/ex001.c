#include <stdio.h>
#include <stdlib.h>

/*
    Aula 5
    lendo números reais
*/

int main() {
    /*int valor, valor2; //Criei uma variável para guardar um valor do tipo inteiro
    
    //Atribuição -> atribuir um valor a uma variável
    valor = 50;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Digite outro valor inteiro: ");
    scanf("%d", &valor2);

    printf("Valores das minhas variáveis: %d %d\n", valor, valor2);*/

    //Tipo nome

    float numero, numero2;

    printf("Digite um número real: ");
    scanf("%f", &numero);

    printf("Digite outro número real: ");
    scanf("%f", &numero2);

    printf("Valores das minhas variáveis: %.4f %.4f\n", numero, numero2);

    return 0;
}