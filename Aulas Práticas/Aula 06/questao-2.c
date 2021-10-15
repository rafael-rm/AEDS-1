/*
2a Questão
Dada uma matriz A[4x4], imprimir o número de linhas e o número de colunas nulas (com apenas 0s)
da matriz. Uma estrutura de repetição deve ser utilizada para percorrer as linhas e colunas.
Exemplo de saída:
Digite o elemento da linha 0 e coluna 0: 0
Digite o elemento da linha 0 e coluna 1: 0
Digite o elemento da linha 0 e coluna 2: 0
Digite o elemento da linha 0 e coluna 3: 0
Digite o elemento da linha 1 e coluna 0: 3
Digite o elemento da linha 1 e coluna 1: 4
Digite o elemento da linha 1 e coluna 2: 0
Digite o elemento da linha 1 e coluna 3: 3
Digite o elemento da linha 2 e coluna 0: 0
Digite o elemento da linha 2 e coluna 1: 0
Digite o elemento da linha 2 e coluna 2: 0
Digite o elemento da linha 2 e coluna 3: 0
Digite o elemento da linha 3 e coluna 0: 5
Digite o elemento da linha 3 e coluna 1: 3
Digite o elemento da linha 3 e coluna 2: 0
Digite o elemento da linha 3 e coluna 3: 3
Digite o elemento da linha 3 e coluna 4: 4
Esta matriz tem 2 linha(s) nula(s)
Esta matriz tem 1 coluna(s) nula(s)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4], i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite o elemento da linha %d e coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int repeticoes_zero = 0;
    int linhas_nulas = 0, colunas_nulas = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matriz[i][j] == 0)
            {
                repeticoes_zero++;
            }
        }
        if (repeticoes_zero == 4)
        {
            linhas_nulas++;
        }
        repeticoes_zero = 0;
    }

    repeticoes_zero = 0;

    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 4; i++)
        {
            if (matriz[i][j] == 0)
            {
                repeticoes_zero++;
            }
        }
        if (repeticoes_zero == 4)
        {
            colunas_nulas++;
        }
        repeticoes_zero = 0;
    }

    printf("\nEsta matriz tem %d linha(s) nula(s).", linhas_nulas);
    printf("\nEsta matriz tem %d coluna(s) nula(s).\n", colunas_nulas);
    return 0;
}