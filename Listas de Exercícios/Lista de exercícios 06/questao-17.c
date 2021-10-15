#include <stdio.h>

int main()
{
    int vet[10], *p;
    p = vet;
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %do. elemento: ", i + 1);
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        *(p + i) += 1;
    }
    printf("\nVetor apos ser somado +1 a cada elemento:");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d", vet[i]);
    }

    return 0;
}
