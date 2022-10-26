#include <stdio.h>
#include <stdlib.h>

/*
    Aula 14
    ler dois caracteres
*/

int main() {
    char a, b;

    printf("Digite o primeiro caractere: ");
    scanf("%c", &a);
    printf("Digite o segundo caractere: ");
    scanf(" %c", &b);

    //Espaço para os %c -> comando para o computador desconsiderar o ENTER, o TAB e o ESPAÇO

    printf("Valores informados: %c e %c\n", a, b);

    return 0;
}