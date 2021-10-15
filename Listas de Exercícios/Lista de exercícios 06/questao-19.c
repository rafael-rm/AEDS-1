#include <stdio.h>

void maiorElemento(int *vet, int *maior, int *tamanho)
{
    *maior = vet[0];
    for (int i = 1; i < *tamanho; i++)
    {
        if (vet[i] > *maior)
        {
            *maior = vet[i];
        }
    }
}

int main()
{
    int N;
    do
    {
        printf("Insira o tamanho do primeiro vetor: ");
        scanf("%d", &N);
    } while (N < 1);
    int vet[N];
    for (int i = 0; i < N; i++)
    {
        printf("Insira o %do. elemento: ", i + 1);
        scanf("%d", &vet[i]);
    }
    int k;
    do
    {
        printf("\nQuantos elementos do array por linha: ");
        scanf("%d", &k);
    } while (k < 1);
    printf("\nVetor inserido com %d elementos por linha\n\n", k);
    for (int i = 0; i < N; i++)
    {
        printf(" %d", vet[i]);
        if ((i + 1) % k == 0)
        {
            printf("\n");
        }
    }
    int maior;
    maiorElemento(vet, &maior, &N);
    printf("\nNo vetor inserido, o maior elemento e %d.\n", maior);
    return 0;
}
