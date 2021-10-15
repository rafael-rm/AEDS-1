/*
16. Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mesˆ
correspondente a este numero. Isto e, janeiro se  ́ 1, fevereiro se 2, e assim por diante.
*/

#include <stdio.h>

int main()
{
    int valor;
    printf("Insira um valor de 1 a 12: ");
    scanf("%d", &valor);
    printf("\n");

    switch (valor)
    {
    case 1:
        printf("1 - Janeiro");
        break;
    case 2:
        printf("2 - Feveiro");
        break;
    case 3:
        printf("3 - Marco");
        break;
    case 4:
        printf("4 - Abril");
        break;
    case 5:
        printf("5 - Maio");
        break;
    case 6:
        printf("6 - Junho");
        break;
    case 7:
        printf("7 - Julho");
        break;
    case 8:
        printf("8 - Agosto");
        break;
    case 9:
        printf("9 - Setembro");
        break;
    case 10:
        printf("10 - Outubro");
        break;
    case 11:
        printf("11 - Novembro");
        break;
    case 12:
        printf("12 - Dezembro");
        break;

    default:
    printf("O valor inserido nao corresponde a nenhum mes.\nInsira valores entre 1 e 12.");
        break;
    }
    printf("\n");
    return 0;
}