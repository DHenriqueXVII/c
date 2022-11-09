#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 41

    Verdadeiro e falso na linguagem C
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("Digite um valor: ");
    
    scanf("%d", &a);

    printf("\nResultado lógico: %d", a < 0);

    if (a < 0) 
        printf("\nO valor %d é negativo\n", a);
    else 
        printf("\nO valor %d é positivo\n", a);

    return 0;
}