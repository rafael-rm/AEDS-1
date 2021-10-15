/*
14. Faça um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem decrescente.
*/

#include <stdio.h>

int main(){
    int numero_max, i;
    printf("\nInsira um numero inteiro positivo par: ");
    scanf("%d", &numero_max);

    for(i = numero_max; i >= 0; i--){
        if(i % 2 == 0)
        printf("%d ", i);
    }
    return 0;
}