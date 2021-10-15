#include <stdio.h>

void maiorElemento(int *vet, int *maior, int *cont)
{
    *maior = vet[0];
    for (int i = 1; i < 10; i++)
    {
        if (vet[i] > *maior)
        {
            *maior = vet[i];
            *cont = 0;
        }
        if (*maior == vet[i])
        {
            *cont += 1;
        }
    }
}

int main()
{
    int vet[10], num_maior, vezes;
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %do. elemento: ", i + 1);
        scanf("%d", &vet[i]);
    }
    maiorElemento(vet, &num_maior, &vezes);
    printf("\nNo vetor inserido, o maior elemento %d ocorre %d vezes.\n", num_maior, vezes);
    return 0;
}
