/*
24. Escreva um programa que leia um numero inteiro e calcule a soma de todos os divisores  ́
desse numero, com excec ̧  ́ ao dele pr  ̃ oprio. Ex: a soma dos divisores do n  ́ umero 66  ́ e ́
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/

#include <stdio.h>

int main()
{
    int valor, i, soma=0;
    printf("Insira um numero inteiro: ");
    scanf("%d", &valor);
    
    for (i = 1; i < valor; i++)
    {
        if(valor % i == 0)
        {
            soma += i;
        }
    }
    printf("\nA soma dos divisores de %d resulta em: %d\n", valor, soma);
    return 0;
}