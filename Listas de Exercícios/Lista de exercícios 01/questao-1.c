/* 
1. Faça um programa que receba dois números e mostre qual deles é o maior.
*/

#include <stdio.h>

int main()
{
    printf("Insira dois valores para saber qual o maior: ");
    float valor1, valor2;
    scanf("%f%f", &valor1, &valor2);

    if (valor1 > valor2)
    {
        printf("\n%.2f e maior que %.2f\n", valor1, valor2);
    }
    else if (valor1 < valor2)
    {
        printf("\n%.2f e maior que %.2f\n", valor2, valor1);
    }
    else
    {
        printf("\nOs dois valores possuem o mesmo valor.\n");
    }
    return 0;
}