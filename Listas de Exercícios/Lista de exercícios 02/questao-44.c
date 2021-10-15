/*
44. Leia um numero positivo do usu  ́ ario, ent  ́ ao, calcule e imprima a sequ  ̃ encia Fibonacci at ˆ e ́
o primeiro numero superior ao n  ́ umero lido. Exemplo: se o
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, f1 = 0, f2 = 1, f3;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Numero invalido.\n");
    }

    else
    {
        printf("0 - 1");

        while (f2 <= n)
        {
            f3 = f2 + f1;
            printf(" - %d", f3);
            f1 = f2;
            f2 = f3;
        }
    }

    printf("\n");
    return 0;
}