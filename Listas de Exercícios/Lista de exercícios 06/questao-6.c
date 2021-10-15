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
    printf("\nVetor inserido:");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", *(pont + i));
    }
    return 0;
}
