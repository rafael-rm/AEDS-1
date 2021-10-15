/*
15. Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero. Isto e, domingo se  ́ 1, segunda-feira se 2, e
assim por diante.
*/

#include <stdio.h>

int main()
{
    int valor;
    printf("Insira um valor de 1 a 7: ");
    scanf("%d", &valor);
    printf("\n");

    switch (valor)
    {
    case 1:
        printf("1 - Segunda-feira");
        break;
    case 2:
        printf("2 - Terça-feira");
        break;
    case 3:
        printf("3 - Quarta-feira");
        break;
    case 4:
        printf("4 - Quinta-feira");
        break;
    case 5:
        printf("5 - Sexta-feira");
        break;
    case 6:
        printf("6 - Sabado");
        break;
    case 7:
        printf("7 - Domingo");
        break;

    default:
        printf("O valor inserido nao corresponde a nenhum dia da semana.\nInsira valor entre 1 e 7.");
        break;
    }
    printf("\n");
    return 0;
}