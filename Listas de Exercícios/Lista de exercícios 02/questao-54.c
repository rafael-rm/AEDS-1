
/*
54. Fac ̧a um programa que receba um numero inteiro maior do que 1, e verifique se o n  ́ umero  ́
fornecido e primo ou n  ́ ao.
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
