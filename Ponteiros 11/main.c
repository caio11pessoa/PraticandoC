#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[3] = {1, 2, 3};

    int *ponteiro = &vetor[0];
    printf("%p\n", ponteiro);

    ponteiro = &vetor[1];
    printf("%p\n", ponteiro);

    ponteiro = &vetor[2];
    printf("%p\n", ponteiro);



    ponteiro = &vetor[0];
    printf("%i\n", *ponteiro);
    ++ponteiro;
    printf("com ++ %i\n", *ponteiro);
    ++ponteiro;
    printf("com ++ %i\n", *ponteiro);

    ponteiro = &vetor[0];
    *(ponteiro + 1) = 10;
    printf("%i\n", vetor[1]);



    //Subindo de quatro em quatro
    //Pra armazenar uma variavel inteira precisa=se de 4 bits
    getchar();
    return 0;
}
