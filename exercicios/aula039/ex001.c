#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 39

    Decisão simples

    Verificando se um número é negativo

    Brasília é a capital do Brasil ?
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("Digite um valor: ");
    
    scanf("%d", &a);

    if (a < 0) 
        printf("\nO valor %d é negativo\n", a);

    printf("\nContinuação do programa...\n");

    return 0;
}