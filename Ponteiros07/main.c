#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void testeVariavel(int x);//uma c�pia da vari�vel teste est� sendo feita
    void testePonteiro(int *pX);//Neste caso o par�metro est� sendo passado por refer�ncia
    int teste = 1;
    int *pTeste = &teste;

    testeVariavel(teste);
    printf("%i\n", teste);

    testePonteiro(pTeste);//N�o escreve * nesse caso, pois a fun��o recebe um endere� de mem�ria
    printf("%i\n", teste);
    getchar();

    return 0;
}
//uma c�pia da vari�vel teste est� sendo feita
void testeVariavel(int x){
    ++x;
}
void testePonteiro(int *pX){
    ++*pX;
}
