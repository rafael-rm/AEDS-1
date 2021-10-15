#include <stdio.h>

int negativos(float *vet, int *N)
{
    *N = 0;
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] < 0)
        {
            *N += 1;
        }
    }
}

int main()
{
    float vet[10], num_maior;
    int vezes;
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %do. elemento: ", i + 1);
        scanf("%f", &vet[i]);
    }
    negativos(vet, &vezes);
    printf("\nNo vetor inserido, %d numeros negativos presente.\n", vezes);
    return 0;
}
