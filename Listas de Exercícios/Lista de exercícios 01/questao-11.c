/*
11. Escreva um programa que leia um número inteiro maior do que zero e devolva, na
tela, a soma de todos os seus algarismos. Por exemplo, ao número 2493 corresponderá
o valor 18 (2 + 4 + 9 + 3). Se o número lido não for maior do que zero, o programa
terminará com a mensagem “Número inválido”.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma = 0, a;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    a = numero;

    if (numero > 0)
    {
        while (numero > 0)
        {

            soma = (soma + numero % 10);
            numero = (numero / 10);
        }
        printf("\nA soma de seus algarismos de %d = %d\n", a, soma);
    }

    else
    {
        printf("Numero invalido\n");
    }

    system("pause");
    return 0;
}