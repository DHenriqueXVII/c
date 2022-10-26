#include <stdio.h>
#include <stdlib.h>

/*
    Aula 21
    tipo double
    %lf
*/

int main() {
    float x = 3.1415;

    double y = 3.1415568697948869559;

    printf("Um double precisa de %d bytes de memória\n", sizeof y);

    return 0;
}