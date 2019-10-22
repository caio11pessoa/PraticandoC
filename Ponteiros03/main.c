#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    double soma = *pX + *pY;

    /*int *resultado;
    resultado = 6356720;//O endereço de memória de x nesse momento*/
    printf("Printando o valor contido na memoria apontado por Resultado = %i\n", *resultado);
    printf("Soma = %lf\n", soma);

    printf("Endereco x = %i - valor x = %i\n", pX, *pX);
    printf("Endereco y = %i - valor y = %lf\n", pY, *pY);
    printf("Endereco z = %i - valor z = %c\n", pZ, *pZ);

    getchar();
    return 0;
}
