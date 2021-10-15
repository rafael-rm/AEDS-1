/*
17. Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros
números naturais.
*/

#include <stdio.h>

int main(){
    int numero_max, i, total=0;
    printf("\nInsira um numero inteiro positivo: ");
    scanf("%d", &numero_max);

    for(i = numero_max; i >= 0; i--){
        total = total+i;
    }
    printf("\nA soma dos %d primeiros numeros inteiro e de: %d\n", numero_max, total);
    return 0;
}