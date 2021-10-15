#include <stdio.h>

int main()
{
    float vet[3][3], *pont;
    pont = &vet[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Insira o valor na posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &vet[i][j]);
        }
    }
    printf("\nEndereco dos elementos da matriz inserida:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nPosicao [%d][%d]: %.2f : %d", i + 1, j + 1, vet[i][j], pont++);
        }
    }
    return 0;
}
