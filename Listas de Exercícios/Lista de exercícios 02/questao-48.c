/*
48. Fac ̧a um programa que some os termos de valor par da sequencia de Fibonacci, cujos ˆ
valores nao ultrapassem quatro milh  ̃ oes.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int soma = 0;
    int a = 0;
    int fibonacci = 1;
    int auxiliar, ultimo_valor;

    do
    {

        if (fibonacci % 2 == 0)
        {

            soma += fibonacci;

            ultimo_valor = fibonacci;
        }

        auxiliar = fibonacci;
        fibonacci += a;
        a = auxiliar;

    } while (fibonacci <= 4000000 && soma <= 4000000);

    if (soma >= 4000000)
    {

        soma -= ultimo_valor;
    }

    printf("%ld\n", soma);

    return 0;
}