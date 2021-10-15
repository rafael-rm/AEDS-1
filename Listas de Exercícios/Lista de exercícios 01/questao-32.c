/*
32. Escrever um programa que leia o codigo do produto escolhido do card  ́ apio de uma lan-  ́
chonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
Considere que a cada execuc ̧ao somente ser  ̃ a calculado um pedido. O card  ́ apio da lan-  ́
chonete segue o padrao abaixo:  ̃

Especificac ̧ao ̃ Codigo  ́ Prec ̧o
Cachorro Quente 100 1.20
Bauru Simples 101 1.30
Bauru com Ovo 102 1.50
Hamburguer 103 1.20
Cheeseburguer 104 1.70
Suco 105 2.20
Refrigerante 106 1.00
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int codigo, quantidade;
    float valor;
    printf("\nInsira o codigo do produto: ");
    scanf("%d", &codigo);
    printf("\nInsira a quantidade do produto: ");
    scanf("%d", &quantidade);
    system("cls");
    printf("\n");

    switch (codigo)
    {
    case 100:
        valor = 1.20 * quantidade;
        printf("O valor a ser pago e de: %.2f", valor);
        break;
    case 101:
        valor = 1.30 * quantidade;
        printf("O valor a ser pago e de: %.2f", valor);
        break;
    case 102:
        valor = 1.50 * quantidade;
        printf("O valor a ser pago e de: %.2f", valor);
        break;
    case 103:
        valor = 1.20 * quantidade;
        printf("O valor a ser pago e de: %.2f", valor);
        break;
    case 104:
        valor = 1.70 * quantidade;
        printf("O valor a ser pago e de: %.2f", valor);
        break;
    case 105:
        valor = 2.20 * quantidade;
        printf("O valor a ser pago e de: %.2f", valor);
        break;
    case 106:
        valor = 1.00 * quantidade;
        printf("O valor a ser pago e de: %.2f", valor);
        break;
    default:
        printf("Nenhuma opcao valida encontrada para este codigo.");
        break;
    }
    printf("\n");
    return 0;
}