#include <stdio.h>
#include <stdlib.h>

/*
    Aula 22
    operador long para o tipo double

    double -> %lf
    long double -> %Lf
    
    __mingw_printf()
*/

int main() {
    float x = 3.1415;

    long double y = 3.1415568697948869559;

    printf("Valor de y: %.20Lf\n", y);
    printf("Um long double precisa de %d bytes de memória\n", sizeof y);

    return 0;
}