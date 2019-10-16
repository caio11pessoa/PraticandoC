#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;//procura um espaço para armazenar um valor inteiro
    x = 10;//Naquele espaço de memória foi jogado o valor 10

    int *ponteiro;
    ponteiro = &x;

    printf("valor no endereco %d\n", x);
    printf("endereco de memoria %d\n", &x);
    printf("valor armazenado no endereco de memoria anterior visto atraves de um ponteiro %d\n", *ponteiro);
    printf("endereco de memoria visto pelo ponteiro %d\n", ponteiro);


    int y = x;
    x = 20;

    printf("%i %i \n------------------------------------------------\n", x, y);

    x = 10;
    ponteiro = &x;

    y = 20;
    *ponteiro = y;

    printf("%i %i \n", x, y);
    getchar ();

    return 0;
}
