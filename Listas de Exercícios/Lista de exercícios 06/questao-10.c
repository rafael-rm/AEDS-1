#include <stdio.h>

void preencher(int *vetor, int *valor)
{
    for (int i = 0; i < 10; i++)
    {
        *(vetor + i) = *valor;
    }
}

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
    int vet[10], num, *p1, *p2;
    p1 = vet;
    p2 = &num;
    printf("Insira um valor inteiro: ");
    scanf("%d", &num);
    preencher(p1, p2);
    imprimir(p1);
    return 0;
}
