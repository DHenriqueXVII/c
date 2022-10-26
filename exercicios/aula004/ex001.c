#include <stdio.h>
#include <stdlib.h>

/*
    Aula 4
    lendo números inteiros
*/

int main() {
    int valor, valor2; //Criei uma variável para guardar um valor do tipo inteiro
    
    //Atribuição -> atribuir um valor a uma variável
    valor = 50;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Digite outro valor inteiro: ");
    scanf("%d", &valor2);

    printf("Valores das minhas variáveis: %d %d\n", valor, valor2);

    return 0;
}