/*
1. Faça um programa que leia dois valores inteiros e chame uma função que receba
estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor
na segunda variável. Escreva o conteúdo das 2 variáveis na tela.
*/

#include <stdio.h>

void troca(int *a, int *b);

int main()
{
    int a, b;

    printf("\nInsira o valor de A: ");
    scanf("%d", &a);
    printf("Insira o valor de B: ");
    scanf("%d", &b);

    troca(&a, &b);
    printf("\nValores trocados:\n\nA = %d\nB = %d\n", a, b);
}

void troca(int *a, int *b)
{
    if (*a < *b)
    {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}