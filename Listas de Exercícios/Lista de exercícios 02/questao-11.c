/*
11. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.
*/

#include <stdio.h>

int main(){
    int numero_max, i;
    printf("\nInsira um numero inteiro positivo: ");
    scanf("%d", &numero_max);

    for(i = 0; i <= numero_max; i++){
        printf("%d ", i);
    }
    return 0;

}