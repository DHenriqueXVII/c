#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 40

    Decisão completa

    Verificando se um número é negativo
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("Digite um valor: ");
    
    scanf("%d", &a);

    if (a < 0) 
        printf("\nO valor %d é negativo\n", a);
    else 
        printf("\nO valor %d é positivo\n", a);

    return 0;
}