/*
7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média.
*/

#include <stdio.h>

int main()
{
    int i, valores_positivos = 10;
    float numero_inserido, total = 0, media;
    for (i = 0; i < 10; i++)
    {
        printf("Insira o %do numero: ", i + 1);
        scanf("%f", &numero_inserido);
        if (numero_inserido > 0)
        {
            total = total + numero_inserido;
        }
        else
        {
            valores_positivos--;
        }
    }
    media = total/valores_positivos;
    printf("\nA media dos %d valores digitados resulta em: %.2f\n", valores_positivos, media);
    return 0;
}