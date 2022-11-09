#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 42

    Indentação e uso das chaves
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("Digite um valor: ");
    
    scanf("%d", &a);

    if (a < 0) {
        printf("\nO valor %d é negativo\n", a);
        printf("\nO valor %d é negativo\n", a);
    }
    else {
        printf("\nO valor %d é positivo\n", a);
        printf("\nO valor %d é positivo\n", a);
    }

    return 0;
}