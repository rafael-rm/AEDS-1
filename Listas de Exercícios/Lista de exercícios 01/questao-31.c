/*
31. Fac ̧a um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
a seguir, verifique e mostra qual a classificac ̧ao dessa pessoa.  ̃
Altura Peso

Ate 60  ́ Entre 60 e 90 (Inclusive) Acima de 90
Menor que 1,20 A D G
De 1,20 a 1,70 B E H
Maior que 1,70 C F I
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float altura, peso;
    printf("\nInsira sua altura em metros: ");
    scanf("%f", &altura);
    printf("\nInsira seu peso em kg: ");
    scanf("%f", &peso);
    printf("\n");

    if(peso <= 60){
        if(altura < 1.20)
        printf("Classificacao A");
        else if(altura >= 1.20 && altura <= 1.70)
        printf("Classificacao B");
        else if(altura > 1.70)
        printf("Classificacao C");
    }

    if(peso > 60 && peso <= 90){
        if(altura < 1.20)
        printf("Classificacao D");
        else if(altura >= 1.20 && altura <= 1.70)
        printf("Classificacao E");
        else if(altura > 1.70)
        printf("Classificacao F");
    }

    if(peso > 90){
        if(altura < 1.20)
        printf("Classificacao G");
        else if(altura >= 1.20 && altura <= 1.70)
        printf("Classificacao H");
        else if(altura > 1.70)
        printf("Classificacao I");
    }
    printf("\n");
    return 0;
}