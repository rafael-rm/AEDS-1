#include <stdio.h>

int main()
{
    int vet[5], *pont;
    pont = vet;
    for (int i = 0; i < 5; i++)
    {
        printf("Insira o %do. elemento: ", i + 1);
        scanf("%d", pont + i);
    }
    printf("\nEndereco dos elementos pares do vetor inserido:");
    for (int i = 0; i < 5; i++)
    {
        if (*(pont + i) % 2 == 0)
        {
            printf(" %d", pont + i);
        }
    }
    return 0;
}
