/*
10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/

#include <stdio.h>

int main()
{
    int pares = 0, numero = 0, total = 0;
    while (pares < 50)
    {
        numero = numero + 1;
        if (numero % 2 == 0)
        {
            pares++;
            total = total + numero;
            printf("%d ", numero);        }
    }
    printf("\n\nA soma dos 50 primeiros numeros pares foi de: %d\n", total);
    return 0;
}