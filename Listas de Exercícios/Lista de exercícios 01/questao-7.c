/*
7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois
números forem iguais, imprima a mensagem Números iguais.
*/

#include <stdio.h>

int main(){
    printf("Insira dois valores: ");
    float valor1, valor2;
    scanf("%f%f", &valor1, &valor2);

    if(valor1 > valor2){
        printf("\n%.2f e maior que %.2f\n", valor1, valor2);
    }
    else if(valor2 > valor1){
        printf("\n%.2f e maior que %.2f\n", valor2, valor1);
    }
    else{
        printf("\nNumeros iguais\n");
    }
    return 0;
}