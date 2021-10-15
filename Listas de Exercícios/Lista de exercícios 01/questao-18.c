/*
18. Fac ̧a um programa que mostre ao usuario um menu com 4 opc ̧  ́ oes de operac ̧  ̃ oes ma-  ̃
tematicas (as b  ́ asicas, por exemplo). O usu  ́ ario escolhe uma das opc ̧  ́ oes e o seu pro-  ̃
grama entao pede dois valores num  ̃ ericos e realiza a operac ̧  ́ ao, mostrando o resultado e  ̃
saindo.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int opcao;
    float valor1, valor2;
    printf("\n[1] - Soma\n");
    printf("[2] - Subtracao\n");
    printf("[3] - Multiplicacao\n");
    printf("[4] - Divisao\n");
    printf("\nSelecione uma das opcoes acima: ");
    scanf("%d", &opcao);
    system("cls");

    if ((opcao < 0 || opcao > 4))
    {
        printf("\nVoce nao selecionou nenhuma opcao valida.\n");
    }
    else
    {
        printf("\nInsira o primeiro valor: ");
        scanf("%f", &valor1);
        printf("\nInsira o segundo valor: ");
        scanf("%f", &valor2);
        system("cls");
        printf("\n");

        switch (opcao)
        {
        case 1:
            printf("A soma de %.2f + %.2f = %.2f", valor1, valor2, valor1 + valor2);
            break;
        case 2:
            printf("A subtracao de %.2f - %.2f = %.2f", valor1, valor2, valor1 - valor2);
            break;
        case 3:
            printf("A multiplicacao de %.2f * %.2f = %.2f", valor1, valor2, valor1 * valor2);
            break;
        case 4:
            printf("A divisao de %.2f / %.2f = %.2f", valor1, valor2, valor1 / valor2);
            break;

        default:
            printf("Voce nao selecionou nenhuma opcao valida.");
            break;
        }
        printf("\n");
    }
    return 0;
}