/*
6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
assim como a diferença existente entre ambos.
*/

#include <stdio.h>

int main(){
    printf("Insira dois valores inteiros: ");
    int valor1, valor2;
    scanf("%d%d", &valor1, &valor2);

    if(valor1 > valor2){
        printf("\nO maior valor inserido e: %d\nA diferenca entre os dois valores e de: %d\n", valor1, valor1-valor2);
    }
    else if(valor1 < valor2){
        printf("\nO maior valor inserido e: %d\nA diferenca entre os dois valores e de: %d\n", valor2, valor2-valor1);
    }
    else{
        printf("\nOs numeros digitados possuem o mesmo valor.\n");
    }
    return 0;
}