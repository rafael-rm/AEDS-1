/*Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estao abaixo da  ̃
diagonal principal.*/

#include <stdio.h>
int main()
{
    int v[3][3], i, j, aux, soma = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Insira o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &v[i][j]);
            
            if (i > j)
            {
                aux = v[i][j];
                soma += aux;
            }
        }
    }
    printf("\nA soma dos elementos abaixo da diagonal principal: %d.\n", soma);
    return 0;
}
