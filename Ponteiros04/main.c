#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    depois = &agora;

    (*depois).hora = 20;// o ponto tem preferência
    (*depois).minuto = 20;
    (*depois).segundo = 20;

    printf("%i:%i:%i\n", agora.hora, agora.minuto, agora.segundo);

    depois->hora = 40;
    depois->minuto = 40;
    depois->segundo = 40;

    printf("%i:%i:%i", agora.hora, agora.minuto, agora.segundo);
    getchar();

    return 0;
}
