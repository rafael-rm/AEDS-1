/*
13. Faça um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem crescente.
*/

#include <stdio.h>

int main(){
    int numero_max, i;
    printf("\nInsira um numero inteiro positivo par: ");
    scanf("%d", &numero_max);

    for(i = 0; i <= numero_max; i++){
        if(i % 2 == 0)
        printf("%d ", i);
    }
    return 0;

}