/*
2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetição for, a segunda while, e a terceira do while.
*/

#include <stdio.h>

int main()
{
    int i, numero = 0;

    printf("\nNumeros de 1 a 100 utilizando for:\n");
    
    for (i = 0; i < 100; i++)
    {
        numero = numero + 1;
        printf("%d ", numero);
    }
    
    printf("\n\n");
    printf("\nNumeros de 1 a 100 utilizando while:\n");
    i = 0;
    numero = 0;

    while (i < 100)
    {
        numero = numero + 1;
        printf("%d ", numero);
        i++;
    }

    printf("\n\n");
    printf("\nNumeros de 1 a 100 utilizando do while:\n");
    numero = 0;
    i = 1;
    
    do
    {
        numero = numero + 1;
        i++;
        printf("%d ", numero);
    } while (i <= 100);

    printf("\n\n");
    return 0;
}