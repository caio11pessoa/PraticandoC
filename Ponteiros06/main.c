#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct horario {
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    };

    struct horario hoje;

    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    printf("hora - %i\n", *hoje.pHora );
    printf("minuto - %i\n", *hoje.pMinuto );
    printf("segundo - %i\n", *hoje.pSegundo );

    *hoje.pSegundo = 1000;

    printf("segundo - %i\n", *hoje.pSegundo );

    getchar();
    return 0;
}
