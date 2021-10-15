/*
Dado duas matrizes reais de dimensão 2 x 3 fazer um programa para
calcular a soma delas
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz1[2][3], matriz2[2][3], soma[2][3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nInsira o valor da primeira matriz [%d][%d]: ", i, j);
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("\n");
    system("pause");
    system("cls");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nInsira o valor da segunda matriz [%d][%d]: ", i, j);
            scanf("%f", &matriz2[i][j]);
        }
    }

    printf("\n\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%.2f ",soma[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}