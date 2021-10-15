/*
Faca um programa que calcule e mostre a area de um trapezio. Sabe-se que:  ́

A =
((basemaior + basemenor) ∗ altura) / 2

Lembre-se a base maior e a base menor devem ser numeros maiores que zero.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float base1, base2, altura, area_trapezio;

    do
    {
        printf("\nInsira o valor da maior base: ");
        scanf("%f", &base1);
        if (base1 < 0)
        {
            system("cls");
            printf("Base invalida. O valor precisa ser maior que zero.");
        }

    } while (base1 < 0);

    do
    {
        printf("\nInsira o valor da menor base: ");
        scanf("%f", &base2);
        if (base2 < 0)
        {
            system("cls");
            printf("Base invalida. O valor precisa ser maior que zero.");
        }
    } while (base2 < 0);

    do
    {
        printf("\nInsira a altura do trapezio: ");
        scanf("%f", &altura);
        if (altura < 0)
        {
            system("cls");
            printf("Altura invalida. O valor precisa ser maior que zero.");
        }
    } while (base2 < 0);

    area_trapezio = ((base1 + base2) * altura) / 2;
    printf("\n\nA area do trapezio equivale a: %.2f\n\n", area_trapezio);
}