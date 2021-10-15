/*
Leia uma data e determine se ela e v  ́ alida. Ou seja, verifique se o m  ́ es est ˆ a entre 1 e 12,  ́
e se o dia existe naquele mes. Note que Fevereiro tem 29 dias em anos bissextos, e 28 ˆ
dias em anos nao bissextos.
*/

// PROGRAMA COM ERRO DEVIDO NUMEROS OCTAIS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;
    printf("\nInsira o dia: ");
    scanf("%d", &dia);
    printf("\nInsira o mes: ");
    scanf("%d", &mes);
    printf("\nInsira o ano: ");
    scanf("%d", &ano);

    // Verificando o mes
    if (mes == 01 || mes == 1)
    {
        if (dia <= 31)
        {
            printf("\nData valida.");
        }
        else
        {
            printf("Data invalida.");
        }
    }
    if (mes == 02 || mes == 2)
    {
        if (ano % 4 == 0 && ano % 100 != 0)
        // Bissexto
        {
            if (dia <= 29)
            {
                printf("\nData valida.");
            }
            else
            {
                printf("Data invalida.");
            }
        }
        // Não bissexto
        else
        {
            if (dia <= 28)
            {
                printf("\nData valida.");
            }
            else
            {
                printf("Data invalida.");
            }
        }
    }
    if (mes == 03 || mes == 3)
    {
        if (dia <= 31)
        {
            printf("\nData valida.");
        }
        else
        {
            printf("Data invalida.");
        }
    }
    if (mes == 04 || mes == 4)
    {
        if (dia <= 30)
        {
            printf("\nData valida.");
        }
        else
        {
            printf("Data invalida.");
        }
    }
    if (mes == 05 || mes == 5)
    {
        if (dia <= 31)
        {
            printf("\nData valida.");
        }
        else
        {
            printf("Data invalida.");
        }
    }
    if (mes == 06 || mes == 6)
    {
        if (dia <= 30)
        {
            printf("\nData valida.");
        }
        else
        {
            printf("Data invalida.");
        }
    }
    if (mes == 07 || mes == 7)
    {
        if (dia <= 31)
        {
            printf("\nData valida.");
        }
        else
        {
            printf("Data invalida.");
        }
    }
    if (mes == 10 || mes == 8)
    {
        if (dia <= 31)
        {
            printf("\nData valida.");
        }
        else
        {
            printf("Data invalida.");
        }
    }
    if (mes == 11 || mes == 9)
    {
        if (dia <= 30)
        {
            printf("\nData valida.");
        }
        else
        {
            printf("Data invalida.");
        }
    }
    if ( mes == 10)
    {
        if (dia <= 31)
        {
            printf("\nData valida.");
        }
        else
        {
            printf("Data invalida.");
        }
    }
    if (mes == 11)
    {
        if (dia <= 30)
        {
            printf("\nData valida.");
        }
        else
        {
            printf("Data invalida.");
        }
    }
    if (mes == 12)
    {
        if (dia <= 31)
        {
            printf("\nData valida.");
        }
        else
        {
            printf("Data invalida.");
        }
    }
    return 0;
}