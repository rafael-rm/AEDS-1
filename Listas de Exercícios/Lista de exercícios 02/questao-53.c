/*
53. Escreva um programa que leia um numero inteiro positivo  ́ n e em seguida imprima n
linhas do chamado Triangulo de Floyd. Para n = 6, temos:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/

#include <stdio.h>

int main()
{
    int nlin, m, k, i, j;

    printf("Entre com o numero inteiro positivo: ");
    scanf("%d", &nlin);
    while (nlin <= 0)
    {
        printf("Numero negativo ou zero.\n", nlin);
        printf("Tente de novo: ");
        scanf("%d", &nlin);
    }

    m = nlin * (nlin + 1) / 2; 

    for (k = 0; m; k++)
        m /= 10; 

    m = 1;
    for (i = 1; i <= nlin; i++)
    {
        for (j = 0; j < i; j++)
            printf("%*d ", k, j + m);
        printf("\n");
        m += i;
    }
    return 0;
}
