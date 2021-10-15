/*
3 - Crie uma função que receba um array de tamanho 5 Os elementos deste array deverão ser lidos pelo teclado na função main A função criada deverá trocar de posição o menor e o maior valor deste array Após a saída da função, já na função main imprima os elementos do array;
*/

#include <stdio.h>
#include <stdlib.h>

void troca(int numeros[], int t);

int main()
{
    int numeros[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Insira o %do numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nAntes da troca: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numeros[i]);
    }

    troca(numeros, 5);
    printf("\nDepois da troca: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}

void troca(int numeros[], int t)
{
    int maior = numeros[0], menor = numeros[0];
    int indice_maior = 0, indice_menor = 0;
    for (int i = 0; i < 5; i++)
    {
        if (maior < numeros[i])
        {
            maior = numeros[i];
            indice_maior = i;
        }
        if (menor > numeros[i])
        {
            menor = numeros[i];
            indice_menor = i;
        }
    }
    int aux = numeros[indice_maior];
    numeros[indice_maior] = numeros[indice_menor];
    numeros[indice_menor] = aux;
}