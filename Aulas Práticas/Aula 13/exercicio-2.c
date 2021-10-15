/*
Escreva um programa que contenha duas variáveis inteiras Compare seus endereços e exiba o maior endereço
*/

#include <stdio.h>

int main()
{
    int a, b;
    int *p_a = &a, *p_b = &b;

    printf("Endereco de A: %p", p_a);
    printf("\nEndereco de B: %p", p_b);

    if (p_a > p_b)
        printf("\nO maior endereco de memoria e da variavel A (%p)", p_a);
    else
        printf("\nO maior endereco de memoria e da variavel B (%p)", p_b);

    return 0;
}