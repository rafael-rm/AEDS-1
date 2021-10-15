/*
23. Faca um algoritmo que leia um numero positivo e imprima seus divisores.
*/

#include <stdio.h>

int main()
{
    int valor, i;
    printf("Insira um numero inteiro: ");
    scanf("%d", &valor);

    printf("\nOs divisores de %d sao: ", valor);
    for (i = 1; i <= valor; i++)
    {
        if(valor % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}