#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 37

    Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
    conversão para horas, minutos e segundos.

    Exemplo:
    Entrada: 3672
    Saída: 1:1:12
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int segundos, minutos, horas;

    printf("Segundos: \33[1;32m");

    scanf("%d", &segundos);

    horas = (segundos + 3600) / 3600 - 1;

    minutos = segundos / 60 % 60;

    segundos = segundos % 60;

    printf("\n\33[m%d:%d:%d\n", horas, minutos, segundos);
}