#include <stdio.h>

int main()
{
    float vet[10], *pont;
    pont = vet;
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o valor do %do. elemento: ", i + 1);
        scanf("%f", &vet[i]);
    }
    printf("\nEndereco dos elementos do vetor inserido:");
    for (int i = 0; i < 10; i++)
    {
        printf("\n%do. elemento : %.2f : %d", i + 1, vet[i], pont++); // size float = 4
    }
    return 0;
}
