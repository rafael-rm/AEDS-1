/*
6. Faça um programa que leia 10 inteiros e imprima sua média.
*/

#include <stdio.h>

int main(){
    int i;
    float numero_inserido, media=0;
    for(i = 0; i < 10; i++){
        printf("Insira o %do numero: ", i+1);
        scanf("%f", &numero_inserido);
        media = media+numero_inserido;
    }
    media = media/10;
    printf("\nA media dos 10 valores digitados resulta em: %.2f\n", media);
    return 0;   
}