#include <stdio.h>
#include <stdlib.h>

/*
    Aula 13
    ler dois caracteres
*/

int main() {
    char a, b;

    printf("Digite dois caracteres: ");
    scanf("%c %c", &a, &b);

    //Espaço para os %c -> comando para o computador desconsiderar o ENTER, o TAB e o ESPAÇO

    printf("Valores informados: %c e %c\n", a, b);

    return 0;
}