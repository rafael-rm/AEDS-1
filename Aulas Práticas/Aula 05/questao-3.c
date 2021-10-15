/*
Ler 5 números que devem ser digitados por usuários e armazená-los em um arranjo. Em seguida,
obtenha outro arranjo, cujos componentes são o triplo dos respectivos componentes do primeiro
arranjo.
*/

#include <stdio.h>

int main()
{
    int i, arranjoA[5], arranjoB[5];
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("Insira o %do numero do arranjo: ", i + 1);
        scanf("%d", &arranjoA[i]);
    }
    printf("\nValores do arranjo do B: ");
    for (i = 0; i < 5; i++)
    {
        arranjoB[i] = arranjoA[i] * 3;
        printf("%d ", arranjoB[i]);
    }
    printf("\n");
    return 0;
}