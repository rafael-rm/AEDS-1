/*
Leia uma data e determine se ela e v  ́ alida. Ou seja, verifique se o m  ́ es est ˆ a entre 1 e 12,  ́
e se o dia existe naquele mes. Note que Fevereiro tem 29 dias em anos bissextos, e 28 ˆ
dias em anos nao bissextos.
*/

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
    printf("\n");

    if (mes < 1 || mes > 12)
    {
        printf("Data invalida.");
        return 0;
    }

    if (ano < 1)
    {
        printf("Data invalida.");
        return 0;
    }
    if (dia < 1)
    {
        printf("Data invalida.");
        return 0;
    }

    // Verificando o mes
    if (mes == 1)
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
    if (mes == 2)
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
    if (mes == 3)
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
    if (mes == 4)
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
    if (mes == 5)
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
    if (mes == 6)
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
    if (mes == 7)
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
    if (mes == 8)
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
    if (mes == 9)
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
    if (mes == 10)
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