/*
Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, 
ou seja, esta função é chamada passando duas variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de A;
*/

#include <stdio.h>

void troca(int *a, int *b);

int main(){
    int a, b;

    printf("\nInsira o valor de A: ");
    scanf("%d", &a);
    printf("Insira o valor de B: ");
    scanf("%d", &b);

    troca(&a, &b);
    printf("\nValores invertidos:\n\nA = %d\nB = %d\n", a, b);
}

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}