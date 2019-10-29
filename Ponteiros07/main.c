#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void testeVariavel(int x);//uma cópia da variável teste está sendo feita
    void testePonteiro(int *pX);//Neste caso o parâmetro está sendo passado por referência
    int teste = 1;
    int *pTeste = &teste;

    testeVariavel(teste);
    printf("%i\n", teste);

    testePonteiro(pTeste);//Não escreve * nesse caso, pois a função recebe um endereç de memória
    printf("%i\n", teste);
    getchar();

    return 0;
}
//uma cópia da variável teste está sendo feita
void testeVariavel(int x){
    ++x;
}
void testePonteiro(int *pX){
    ++*pX;
}
