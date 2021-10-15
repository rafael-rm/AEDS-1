/*
4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
- O número digitado ao quadrado
- A raiz quadrada do número digitado
*/

#include <stdio.h>
#include <math.h>

int main(){
    printf("Insira um valor positivo: ");
    float valor;
    scanf("%f", &valor);

    if(valor <= 0){
        printf("\nO valor inserido precisa ser maior que zero.\n");
    }
    else{
        printf("\nA raiz quadrada de %2.f e: %.2f\n", valor, sqrt(valor));
        printf("O quadrado de %.2f e: %.2f\n", valor, valor*valor);
    }
    return 0;
}