/*
4 - Crie uma função recursiva, para calcular e retornar o fatorial de um valor passado por parâmetro por valor para a função;
*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * fatorial(n - 1));
}

int main()
{
    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fatorial(n));
    return 0;
}