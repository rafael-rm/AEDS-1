/*
Escreva um programa que receba um número inteiro e verifique se o número fornecido é primo ou
não. O número é primo se ele tiver apenas 2 divisores: 1 e ele mesmo.
Exemplo de saída:
Digite um número limite: 7
7 é um número primo
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, repeticoes, primo = 0;
    do
    {
        printf("\nInsira um numero inteiro e positivo: ");
        scanf("%d", &numero);
        if (numero <= 0)
        {
            system("cls");
            printf("O numero inserido nao e valido.\n\n");
            system("pause");
            system("cls");
        }
    } while (numero <= 0);

    for (repeticoes = 1; repeticoes <= numero; repeticoes++)
    {
        if (numero % repeticoes == 0)
        {
            primo++;
        }
    }
    if (primo == 2)
    {
        printf("\nO numero %d e primo.\n", numero);
    }
    else
    {
        printf("\nO numero %d nao e primo.\n", numero);
    }
    return 0;
}