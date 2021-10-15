/*
Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória 
Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são ímpares
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho, pares = 0, impares = 0;
    printf("Insira o tamanho do seu vetor: ");
    scanf("%d", &tamanho);
    int *vetor;
    vetor = (int *)calloc(tamanho, sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        printf("Insira o %do valor: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    printf("\n%d valores digitados sao pares\n%d valores digitados sao impares\n", pares, impares);
    return 0;
}