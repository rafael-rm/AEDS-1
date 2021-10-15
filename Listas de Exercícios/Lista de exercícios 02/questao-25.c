/*
25. Fac ̧a um programa que some todos os numeros naturais abaixo de 1000 que s  ́ ao m  ̃ ultiplos  ́
de 3 ou 5.
*/

#include <stdio.h>

int main()
{
    int i, soma=0;
    for (i = 1; i < 1000; i++)
    {
        if( (i % 3 == 0) || (i % 5 == 0) )
        {
            soma += i;
        }
    }
    printf("\nA soma de todos os multiplos de 3 ou 5 ate 1000 resulta em: %d\n", soma);
    return 0;
}