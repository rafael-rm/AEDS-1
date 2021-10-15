/*
5. Faça um programa que receba um número inteiro e verifique se este número é par
ou ímpar.
*/

#include <stdio.h>

int main(){
    printf("Insira um valor inteiro para saber se ele e par ou impar: ");
    int valor;
    scanf("%d", &valor);

    if(valor % 2 == 0){
        printf("%d e um numero par.", valor);
    }
    else {
        printf("%d e um numero impar.", valor);
    }
    return 0;
}