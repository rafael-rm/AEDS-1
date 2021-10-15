/*
16. Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os números
ímpares de 1 até N em ordem decrescente.
*/

#include <stdio.h>

int main(){
    int numero_max, i;
    printf("\nInsira um numero inteiro positivo impar: ");
    scanf("%d", &numero_max);

    for(i = numero_max; i >= 0; i--){
        if(i % 2 != 0)
        printf("%d ", i);
    }
    return 0;
}
