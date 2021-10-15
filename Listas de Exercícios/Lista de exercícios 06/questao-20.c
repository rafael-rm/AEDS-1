#include <stdio.h>

void preencher(int *p, int *tam)
{
    for (int i = 0; i < *tam; i++)
    {
        printf("Insira o %do. elemento: ", i + 1);
        scanf("%d", p + i);
    }
}

void minMax(int *tam, int *vet, int *min, int *max)
{
    *min = vet[0];
    *max = vet[0];
    for (int i = 1; i < *tam; i++)
    {
        if (vet[i] > *max)
        {
            *max = vet[i];
        }
        if (vet[i] < *min)
        {
            *min = vet[i];
        }
    }
}

int main()
{
    int tam;
    do
    {
        printf("Insira o tamanho do primeiro vetor: ");
        scanf("%d", &tam);
    } while (tam < 1);
    int vet[tam], *p;
    p = vet;
    printf("Primeiro vetor\n\n");
    preencher(vet, &tam);
    int min, *pmin, max, *pmax;
    pmin = &min;
    pmax = &max;
    minMax(&tam, vet, pmin, pmax);
    printf("\nMaior valor: %d\nMenor valor: %d\n", *pmax, *pmin);
    return 0;
}
