/*
52. Escreva um programa que receba como entrada o valor do saque realizado pelo cliente
de um banco e retorne quantas notas de cada valor serao necess  ̃ arias para atender ao  ́
saque com a menor quantidade de notas poss ́ıvel. Serao utilizadas notas de 100, 50,  ̃
20, 10, 5, 2 e 1 real.
*/

#include <stdio.h>

int main()
{
    int valor, n100, n50, n10, n5, n1;
    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);

    n100 = valor / 100;
    n50 = (valor % 100) / 50;
    n10 = (valor % 50) / 10;
    n5 = (valor % 10) / 5;
    n1 = (valor % 5) / 1;

    printf("\nTotal de notas de 100,00: %d", n100);
    printf("\nTotal de notas de  50,00: %d", n50);
    printf("\nTotal de notas de  10,00: %d", n10);
    printf("\nTotal de notas de   5,00: %d", n5);
    printf("\nTotal de notas de   1,00: %d", n1);

    return 0;
}
