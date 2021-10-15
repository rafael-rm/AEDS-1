/*
55. Escreva um programa que leia um inteiro nao negativo  ̃ n e imprima a soma dos n primei-
ros numeros primos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b, c, n, d;
    printf("Quantos numeros primos pretende exibir? ");
    scanf("%i", &n);
    d = n * (-1);
    printf("Os primeiros %i numeros primos sao:\n", n);
    do
    {
        a++;
        c = 0;
        for (b = 1; b < a; b++)
            if (a % b == 0)
                c++;
        if (c == 1)
        {
            printf("%i\n", a);
            d++;
        }
    } while (d);
    printf("\n");
    return 0;
}