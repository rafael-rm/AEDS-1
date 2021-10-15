/*
Faça um programa que apresente um menu de opções para o cálculo das seguintes operações entre
dois números: adição, subtração, multiplicação e divisão. O programa deve solicitar dois números e
possibilitar ao usuário a escolha da operação desejada, exibindo o resultado e a voltar ao menu. O
programa só termina quando for escolhida a opção de saída.

Exemplo de saída:
[1] Adição
[2] Subtração
[3] Multiplicação
[4] Divisão
[0] Sair
Escolha uma opção: 3
Digite um número: 5.2
Digite outro número: 7.5
5.2 * 7.5 = 39.0
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float valor1, valor2;

    do
    {
        system("cls");
        printf("\nSelecione uma das opcoes abaixo:\n\n[1] Adicao\n[2] Subtracao\n[3] Multiplicacao\n[4] Divisao\n[0] Sair\n\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("\nInclua o primeiro valor: ");
            scanf("%f", &valor1);
            printf("\nInclua o segundo valor: ");
            scanf("%f", &valor2);
            printf("\nA soma de %.2f + %.2f = %.2f\n\n", valor1, valor2, valor1 + valor2);
            system("PAUSE");
            system("cls");
        }
        else if (opcao == 2)
        {
            printf("\nInclua o primeiro valor: ");
            scanf("%f", &valor1);
            printf("\nInclua o segundo valor: ");
            scanf("%f", &valor2);
            printf("\nA subtracao de %.2f - %.2f = %.2f\n\n", valor1, valor2, valor1 - valor2);
            system("PAUSE");
            system("cls");
        }
        else if (opcao == 3)
        {
            printf("\nInclua o primeiro valor: ");
            scanf("%f", &valor1);
            printf("\nInclua o segundo valor: ");
            scanf("%f", &valor2);
            printf("\nA multiplicao de %.2f * %.2f = %.2f\n\n", valor1, valor2, valor1 * valor2);
            system("PAUSE");
            system("cls");
        }
        else if (opcao == 4)
        {
            printf("\nInclua o primeiro valor: ");
            scanf("%f", &valor1);
            printf("\nInclua o segundo valor: ");
            scanf("%f", &valor2);
            printf("\nA divisao de %.2f / %.2f = %.2f\n\n", valor1, valor2, valor1 / valor2);
            system("PAUSE");
            system("cls");
        }
        else if (opcao == 0)
        {
            system("cls");
            printf("\nObrigado por utilizar a calculadora.\n\n");
        }
        else
        {
            system("cls");
            printf("\nOpcao invalida!\n\n");
            system("pause");
        }
    } while (!(opcao == 0));
    return 0;
}