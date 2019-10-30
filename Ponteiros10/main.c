#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetor[3] = {1,2,3};
    int *ponteiro = vetor;

    printf("%i\n", *ponteiro);

    ponteiro = &vetor[2];
    printf("%i\n", *ponteiro);

    getchar();
    return 0;
}
