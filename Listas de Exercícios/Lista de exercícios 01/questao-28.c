/*
28. Fac ̧a um programa que leia tres n ˆ umeros inteiros positivos e efetue o c  ́ alculo de uma das  ́
seguintes medias de acordo com um valor num  ́ erico digitado pelo usu  ́ ario:  ́
(a) Geometrica: 
(b) Ponderada: 
(c) Harmonica: 
(d) Aritmetica:  
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, z, opcao;
    float resultado;
    printf("\nInsira um valor inteiro para X: ");
    scanf("%d", &x);
    printf("\nInsira um valor inteiro para Y: ");
    scanf("%d", &y);
    printf("\nInsira um valor inteiro para Z: ");
    scanf("%d", &z);


    do
    {
        printf("\n(1) Geometrica");
        printf("\n(2) Ponderada");
        printf("\n(3) Harmonica");
        printf("\n(4) Aritmetica");
        printf("\n\nSelecione uma das opcoes acima: ");
        scanf("%d", &opcao);
        if (opcao < 1 || opcao > 4)
        {
            printf("\nInsira uma opcao valida.");
        }
    } while (opcao < 1 || opcao > 4);

    switch (opcao)
    {
    case 1:
        resultado = cbrt(x * y * z);
        printf("\nA media geometrica e de: %.2f\n", resultado);
        break;

    case 2:
        resultado = (x+2*y+3*z)/6;
        printf("\nA media ponderada e de: %.2f\n", resultado);
        break;

    case 3:
        resultado = 1/((1/x)+(1/y)+(1/z));
        printf("\nA media harmonica e de: %.2f\n", resultado);
        break;

    case 4:
        resultado = (x + y + z)/3;
        printf("\nA media aritimetica e de: %.2f\n", resultado);
        break;
    }
    printf("\n");
    system("pause");
    return 0;
}
