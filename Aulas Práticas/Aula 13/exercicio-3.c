/*
Escreva um programa que contenha duas variáveis inteiras Leia essas variáveis do teclado Em seguida, compare seus endereços e exiba o conteúdo do maior endereço
*/

#include <stdio.h>

int main()
{
    int a, b;
    int *p_a = &a, *p_b = &b;

    printf("\nInsira o conteudo de A: ");
    scanf("%d", &a);
    printf("Insira o conteudo de B: ");
    scanf("%d", &b);

    printf("\nEndereco de A: %p", p_a);
    printf("\nEndereco de B: %p", p_b);

    if (p_a > p_b)
        printf("\n\nO maior endereco de memoria e da variavel A (%p)\nSeu conteudo e: %d\n", p_a, *p_a);
    else
        printf("\nO maior endereco de memoria e da variavel B (%p)\nSeu conteudo e: %d\n", p_b, *p_b);

    return 0;
}