/*
2 - Crie uma função que receba 5 valores como parâmetro, e que “ qual
o menor e qual o maior valor dos 5 Nesta função ao menos dois parâmetros deverão ser passados por referência
*/

#include <stdlib.h>
#include <stdio.h>

void maior_menor(int valores[], int n, int *maior, int *menor);

int main()
{
    int valores[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Insira o %do valor: ", i + 1);
        scanf("%d", &valores[i]);
    }
    int maior = valores[0];
    int menor = valores[0];
    maior_menor(valores, 5, &maior, &menor);
    printf("Maior = %d\nMenor = %d", maior, menor);
    return 0;

}

void maior_menor(int valores[], int n, int *maior, int *menor)
{
    for (int i = 0; i < 5; i++)
    {
        if (*maior < valores[i])
        {
            *maior = valores[i];
        }
        if (*menor > valores[i])
        {
            *menor = valores[i];
        }
    }
}