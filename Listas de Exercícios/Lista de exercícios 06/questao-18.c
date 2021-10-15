#include <stdio.h>

void preencher(int *p, int *tam)
{
    for (int i = 0; i < *tam; i++)
    {
        printf("Insira o %do. elemento: ", i + 1);
        scanf("%d", p + i);
    }
}

int somar(int *tam1, int *p, int *tam2, int *p2, int *p3)
{
    if (*tam1 != *tam2)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < *tam1; i++)
        {
            *(p3 + i) = *(p + i) + *(p2 + i);
        }
        return 1;
    }
}

int main()
{
    int tam1;
    do
    {
        printf("Insira o tamanho do primeiro vetor: ");
        scanf("%d", &tam1);
    } while (tam1 < 1);
    int vet[tam1], *p;
    p = vet;
    printf("Primeiro vetor\n\n");
    preencher(p, &tam1);
    int tam2;
    do
    {
        printf("\nInsira o tamanho do segundo vetor: ");
        scanf("%d", &tam2);
    } while (tam2 < 1);
    int vet2[tam2], *p2;
    p2 = vet2;
    printf("Segundo vetor\n\n");
    preencher(p2, &tam2);

    int vet3[tam1], *p3;
    p3 = vet3;
    int result = somar(&tam1, &tam2, p, p2, p3);
    if (result == 0)
    {
        printf("\nVetores com tamanhos diferentes!\n");
    }
    else
    {
        printf("\nTerceiro vetor (Soma do primeiro e segundo):");
        for (int i = 0; i < tam1; i++)
        {
            printf(" %d", *(p3 + i));
        }
    }
    return 0;
}
