/*
8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
*/

#include <stdio.h>

int main(){
    int i;
    float numero_inserido, maior, menor;
    for(i = 0; i < 10; i++){
        printf("Insira o %do numero: ", i+1);
        scanf("%f", &numero_inserido);
        if(i == 0){
            maior = numero_inserido;
            menor = numero_inserido;
        }
        if(maior < numero_inserido)
        maior = numero_inserido;
        if(menor > numero_inserido)
        menor = numero_inserido;
        
    }
    printf("\nMenor valor: %.2f\nMaior valor: %.2f\n", menor, maior);
    return 0;   
}