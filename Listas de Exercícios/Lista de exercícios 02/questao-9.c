/*
9. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares.
*/

#include <stdio.h>

int main()
{
    int numero, i=0;
    printf("\nInsira um numero inteiro: ");
    scanf("%d", &numero);
    printf("\n");
    while(i < 10){
        numero = numero+1;
        if(numero % 2 != 0){
            i++;
            printf("%d ", numero);
        }
    }
    printf("\n");
    return 0;
}