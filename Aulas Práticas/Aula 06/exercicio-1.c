/*
Leia uma matriz de 3 x 3 elementos inteiros e calcule a soma dos seus
elementos
*/

#include <stdio.h>

int main()
{
    int matriz[3][3], i, j, total=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nInsira o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            total = total+matriz[i][j];
        }
    }
    printf("\nA soma dos elementos resulta em: %d\n", total);
    return 0;
}