#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 46

    Operador lógico de negação

    TABELA VERDADE x    !x
                   v    f
                   f    v
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("Digite um valor: ");
    
    scanf("%d", &a);

    printf("\nOperador ternário:\n");

    !(a < 0) ? printf("\nO valor %d é negativo\n", a) :
    a == 0 ? printf("\nO valor %d é igual a zero\n") : printf("\nO valor %d é positivo\n", a);

    printf("\nif e else:\n");

    if (a < 0) 
        printf("\nO valor %d é negativo\n", a);
    else {
        if (a == 0)
            printf("\nO valor é igual a zero\n");
        else
            printf("\nO valor %d é positivo\n", a);
    }

    return 0;
}