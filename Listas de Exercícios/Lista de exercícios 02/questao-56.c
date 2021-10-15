/*
56. Fac ̧a um programa que calcule a soma de todos os numeros primos abaixo de dois  ́
milhoes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, divisoes_efetuadas, soma_primos = 0;

    for (i = 3; i <= 2000000; i+=2)
    {
        divisoes_efetuadas = 0;

        for (j = 3; j <= i; j+=2)
        {
            if (i % j == 0)
                divisoes_efetuadas+= 2;
        }
        if (divisoes_efetuadas == 2)
        {
            soma_primos += i;
            printf("\n%d", i);
        }
    }
    printf("\n\nA soma dos numeros primos resulta em: %d\n", soma_primos);
    return 0;
}