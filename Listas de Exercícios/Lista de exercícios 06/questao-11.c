#include <stdio.h>

void imprimir(int *vetor)
{
    printf("\nVetor:");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d", *(vetor + i));
    }
}

int main()
{
    int vet[10], *p;
    p = vet;
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %do. elemento: ", i + 1);
        scanf("%d", &vet[i]);
    }
    imprimir(p);
    return 0;
}
