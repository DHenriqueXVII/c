#include <stdio.h>
#include <stdlib.h>

/*
    Aula 29
    Operador unsigned
    trocar o %d por %u
    limite para o tipo int: 2.147.483.647
    unsigned short int -> %hu ou %d
    unsigned long int -> %lu
*/

int main() {
    unsigned int x = 2147483647; // 0 .... 4.294.967.295

    unsigned short int y = 55000;

    unsigned long int z = 4294967295;

    printf("Valor de x: %u\n", ++x);
    printf("Valor de y: %d\n", y);
    printf("Valor de z: %lu\n", z);

    return 0;
}