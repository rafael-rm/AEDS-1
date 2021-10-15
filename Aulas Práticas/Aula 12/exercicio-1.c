/* 
1 - Crie uma função para verificar e retornar qual o maior valor entre 3 valores passados como parâmetro A passagem de parâmetro nesse exercício será feita por valor
*/

#include <stdlib.h>
#include <stdio.h>

int maior(int a, int b, int c);

int main()
{
    int a, b, c, maior_valor;
    printf("\nInsira 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);

    maior_valor=maior(a, b ,c);
    printf("\nO maior valor e: %d\n", maior_valor);
    return 0;
}

int maior(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    if (b > a && b > c)
        return b;
    if (c > a && c > b)
        return c;
}