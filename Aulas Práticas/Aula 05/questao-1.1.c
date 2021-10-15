/*
1ª Questão
Suponha um arranjo a com 5 elementos e outro arranjo b com 5 elementos. Faça um programa que calcule o produto escalar de a por b (Isto é, o primeiro elemento de a multiplicado pelo primeiro elemento de b mais o segundo elemento de a multiplicado pelo segundo de b mais . . .).
Digite o primeiro elemento do arranjo a: 6
Digite o segundo elemento do arranjo a: 3
Digite o terceiro elemento do arranjo a: 4
Digite o quarto elemento do arranjo a: 8
Digite o quinto elemento do arranjo a: 3
Digite o primeiro elemento do arranjo b: 2
Digite o segundo elemento do arranjo b: 6
Digite o terceiro elemento do arranjo b: 7
Digite o quarto elemento do arranjo b: 2
Digite o quinto elemento do arranjo b: 5
O produto escalar de a[] por b[] é 89
*/

#include <stdio.h>

int main()
{
    int a[5], b[5];
    int produtoescalar;

    printf("Digite o primeiro elemento do arranjo A: \n");
    scanf("%d", &a[0]);
    printf("Digite o segundo elemento do arranjo A: \n");
    scanf("%d", &a[1]);
    printf("Digite o terceiro elemento do arranjo A: \n");
    scanf("%d", &a[2]);
    printf("Digite o quarto elemento do arranjo A: \n");
    scanf("%d", &a[3]);
    printf("Digite o quinto elemento do arranjo A: \n");
    scanf("%d", &a[4]);

    printf("Digite o primeiro elemento do arranjo B: \n");
    scanf("%d", &b[0]);
    printf("Digite o segundo elemento do arranjo B: \n");
    scanf("%d", &b[1]);
    printf("Digite o terceiro elemento do arranjo B: \n");
    scanf("%d", &b[2]);
    printf("Digite o quarto elemento do arranjo B: \n");
    scanf("%d", &b[3]);
    printf("Digite o quinto elemento do arranjo B: \n");
    scanf("%d", &b[4]);

    produtoescalar = a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3] + a[4] * b[4];

    printf("O produto escalar de A por B e: %d\n\n", produtoescalar);

    return 0;
}