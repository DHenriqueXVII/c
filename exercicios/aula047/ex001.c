#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 47

    Operador lógico "e" (&)

    TABELA VERDADE a    b   a & b
                   V    V     V
                   v    f     f
                   f    v     f
                   f    f     f
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    short int idade;

    printf("\33[1;32mALISTAMENTO MILITAR\33[m\n");

    printf("\nSexo: (m / f) ");
    scanf("%c", &sexo);

    printf("\nIdade: ");
    scanf("%hi", &idade);

    idade == 18 && sexo == 'm' ? printf("\nVocê está apto ao alistamento!\n") : printf("\nVocê não está apto ao alistamento!\n");

    return 0;
}