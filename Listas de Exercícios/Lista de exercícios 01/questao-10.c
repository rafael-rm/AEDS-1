/*
10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
- Homens: (72,7 * h) - 58
- Mulheres: (62, 1 * h) – 44, 7
*/

#include <stdio.h>

int main()
{
    printf("\nInsira sua altura: ");
    float altura;
    int opcao;
    scanf("%f", &altura);
    printf("\n[1] - Masculino\n[2] - Feminino\n");
    printf("\nInsira seu sexo: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nSeu peso ideal e de: %.2fkg\n", (altura * 72.6) - 58);
        break;

    case 2:
        printf("\nSeu peso ideal e de: %.2fkg\n", (altura * 62.1) - 44.7);
        break;

    default:
        printf("\nVoce nao selecionou nenhuma opcao valida.\n");
        break;
    }
    return 0;
}