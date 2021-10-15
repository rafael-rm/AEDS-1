/*
12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste número.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int numero;

    do
    {
        printf("Escreva um numero inteiro maior que zero: ");
        scanf("%d", &numero);
        if (numero < 0)
        {
            system("cls");
            printf("\nInsira um numero valido.");
            system("pause");
            system("cls");
        }
    } while (numero < 0);

    float logaritimo = log10(numero);
    printf("\nO logaritmo de %d e: %.2f", numero, logaritimo);
    return 0;
}