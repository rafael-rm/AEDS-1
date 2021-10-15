#include <stdio.h>

int crescente(int *n1, int *n2, int *n3)
{
    if (*n1 == *n2 && *n1 == *n3 && *n2 == *n3)
    {
        return 1;
    }
    else
    {
        int aux;
        if (*n3 <= *n2)
        {
            aux = *n3;
            *n3 = *n2;
            *n2 = aux;
        }
        if (*n2 <= *n1)
        {
            aux = *n2;
            *n2 = *n1;
            *n1 = aux;
        }
        if (*n3 <= *n2)
        {
            aux = *n3;
            *n3 = *n2;
            *n2 = aux;
        }
        return 0;
    }
}

int main()
{
    int num, num2, num3;
    printf("Insira 3 valores inteiros:");
    scanf("%d %d %d", &num, &num2, &num3);
    int resultado = crescente(&num, &num2, &num3);
    if (resultado == 1)
    {
        printf("\nValores inseridos sao iguais!\n");
    }
    else
    {
        printf("\nOrdem crescente: %d < %d < %d.\n", num, num2, num3);
    }
    return 0;
}
