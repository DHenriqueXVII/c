#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  
    Aula 32
    
    Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
    para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
    “a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
    estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    char a, b, c;

    printf("Informe o primeiro caractere: ");

    scanf("%c", &a);

    printf("Informe o segundo caractere: ");

    scanf(" %c", &b);
    
    printf("\n\nCaracteres recebidos: %c e %c", a, b);

    c = a;

    a = b;
    b = c;

    printf("\nCaracteres trocados: %c e %c\n", a, b);

    return 0;
}