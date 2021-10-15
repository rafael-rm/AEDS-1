/*
Faça um programa que leia do usuário o tamanho de um vetor a ser
lido e faça a alocação dinâmica de memória Em seguida, leia do
usuário seus valores e imprima o vetor lido
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int tamanho;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int *vetor;
    vetor = (int*) calloc(tamanho, sizeof(int));
    for (int i = 0; i < tamanho; i++)
    {
        printf("Insira o %do valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
        for (int i = 0; i < tamanho; i++)
    {
        printf("\nValor na posicao %d: %d", i, vetor[i]);
    }
    printf("\n");
    return 0;
}