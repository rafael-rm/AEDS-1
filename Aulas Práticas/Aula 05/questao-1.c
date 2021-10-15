/*
1ª Questão
Suponha um arranjo a com 5 elementos e outro arranjo b com 5 elementos. Faça um programa que calcule o produto escalar de a por b (Isto é, o primeiro elemento de a multiplicado pelo primeiro elemento de b mais o segundo elemento de a multiplicado pelo segundo de b mais . . .).
Digite o primeiro elemento do arranjo a: 6
Digite o segundo elemento do arranjo a: 3
Digite o terceiro elemento do arranjo a: 4
Digite o quarto elemento do arranjo a: 8
Digite o quinto elemento do arranjo a: 3
Digite o primeiro elemento do arranjo b: 2
Digite o segundo elemento do arranjo b: 6
Digite o terceiro elemento do arranjo b: 7
Digite o quarto elemento do arranjo b: 2
Digite o quinto elemento do arranjo b: 5
O produto escalar de a[] por b[] é 89
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5], b[5], i, multiplicao_a_b[5], total = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %do elemento do arranjo a: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %do elemento do arranjo b: ", i + 1);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 5; i++)
    {
        multiplicao_a_b[i] = a[i] * b[i];
        total = multiplicao_a_b[i] + total;
    }

    printf("\n\nO produto escalar e: %d", total);
    printf("\n");
    return 0;
}