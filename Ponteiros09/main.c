#include <stdio.h>
#include <stdlib.h>
struct lista{
    int valor;
    struct lista *proximo;
    };

struct lista *ProcurarValor(struct lista *pLista, int valor) {
    while (pLista != (struct lista *)0){
        if(pLista->valor == valor){
                return(pLista);

        }else{
            pLista = pLista->proximo;
        }
    }
    return(struct lista *)0;
}

int main()
{
    struct lista *ProcurarValor(struct lista *pLista, int valor);
    struct lista m1, m2, m3;
    struct lista *resultado, *gancho = &m1;
    int valor;

    m1.valor = 5;
    m2.valor = 10;
    m3.valor = 15;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = 0;

    printf("Digite valor da pesquisa: ");
    scanf("%i", &valor);

    resultado = ProcurarValor(gancho, valor);

    if( resultado == (struct lista *)0){
        printf("Valor nao encontrado. \n");
    }else{
        printf("Valor %i encontrado. \n", resultado->valor);
    }
    system("pause");
    return 0;
}
