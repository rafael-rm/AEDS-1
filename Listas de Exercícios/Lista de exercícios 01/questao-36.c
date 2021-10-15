/*
36. Escreva um programa que, dado o valor da venda, imprima a comissao que dever  ̃ a ser  ́
paga ao vendedor. Para calcular a comissao, considere a tabela abaixo:  ̃
Venda mensal Comissao ̃
Maior ou igual a R$100.000,00 R$700,00 + 16% das vendas
Menor que R$100.000,00 e maior ou igual a R$80.000,00 R$650,00 +14% das vendas
Menor que R$80.000,00 e maior ou igual a R$60.000,00 R$600,00 +14% das vendas
Menor que R$60.000,00 e maior ou igual a R$40.000,00 R$550,00 +14% das vendas
Menor que R$40.000,00 e maior ou igual a R$20.000,00 R$500,00 +14% das vendas
Menor que R$20.000,00 R$400,00 +14% das vendas
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_venda, comissao=0;
    printf("\nInsira o valor da venda: ");
    scanf("%f", &valor_venda);
    system("cls");

    if (valor_venda >= 100000)
    {
        comissao = 700 + (valor_venda * 0.16);
        printf("A comissao e de: %.2f", comissao);
    }

    else if (valor_venda >= 80000)
    {
        comissao = 650 + (valor_venda * 0.14);
        printf("A comissao e de: %.2f", comissao);
    }

    else if (valor_venda >= 60000)
    {
        comissao = 600 + (valor_venda * 0.14);
        printf("A comissao e de: %.2f", comissao);
    }

    else if (valor_venda >= 40000)
    {
        comissao = 550 + (valor_venda * 0.14);
        printf("A comissao e de: %.2f", comissao);
    }

    else if (valor_venda >= 20000)
    {
        comissao = 500 + (valor_venda * 0.14);
        printf("A comissao e de: %.2f", comissao);
    }

    else if (valor_venda < 20000)
    {
        comissao = 400 + (valor_venda * 0.14);
        printf("A comissao e de: %.2f", comissao);
    }
    printf("\n");
    return 0;
}