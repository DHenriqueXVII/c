#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 30
    Tabela ASCII e acentuação
    1 byte (8 bits) -> -128 até 127
    unsigned 1 byte -> 0 até 256

    9 é o caractere de tabulação -> \t
    10 é o caractere de nova linha -> \n (enter)
    65 é a letra "A" maiúscula
    66 é a letra "B" maiúscula
    90 é a letra "Z" maiúscula

    1ª = setlocale(LC_ALL, NULL) é o padrão da linguagem C
    2ª = setlocale(LC_ALL, "") é o padrão do sistema operacional
    3ª = setlocale(LC_ALL, "Portuguese") é o português brasileiro
*/

int main() {
    //setlocale(LC_ALL, "Portuguese");

    printf("%s", setlocale(LC_ALL, NULL));

    printf("\nCoração\n");

    return 0;
}