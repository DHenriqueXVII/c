#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 43

    Operador ternário em C

    Condição ? Verdadeiro : Falso
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("Digite um valor: ");
    
    scanf("%d", &a);

    printf("\nOperador ternário:\n");

    a < 0 ? printf("\nO valor %d é negativo\n", a) : printf("\nO valor %d é positivo\n", a);

    printf("\nif e else:\n");

    if (a < 0) 
        printf("\nO valor %d é negativo\n", a);
    else 
        printf("\nO valor %d é positivo\n", a);

    return 0;
}