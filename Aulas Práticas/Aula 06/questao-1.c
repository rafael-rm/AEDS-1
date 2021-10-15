/*
1a Questão
Dada uma tabela de 4 x 5 elementos, calcular a soma de cada linha e a soma de todos os elementos.
Uma estrutura de repetição deve ser utilizada para percorrer as linhas e colunas.
Exemplo de saída:
Digite o elemento da linha 0 e coluna 0: 5
Digite o elemento da linha 0 e coluna 1: 7
Digite o elemento da linha 0 e coluna 2: 3
Digite o elemento da linha 0 e coluna 3: 6
Digite o elemento da linha 0 e coluna 4: 3
Digite o elemento da linha 1 e coluna 0: 3
Digite o elemento da linha 1 e coluna 1: 4
Digite o elemento da linha 1 e coluna 2: 6
Digite o elemento da linha 1 e coluna 3: 3
Digite o elemento da linha 1 e coluna 4: 2
Digite o elemento da linha 2 e coluna 0: 8
Digite o elemento da linha 2 e coluna 1: 3
Digite o elemento da linha 2 e coluna 2: 2
Digite o elemento da linha 2 e coluna 3: 6
Digite o elemento da linha 2 e coluna 4: 2
Digite o elemento da linha 3 e coluna 0: 5
Digite o elemento da linha 3 e coluna 1: 3
Digite o elemento da linha 3 e coluna 2: 7
Digite o elemento da linha 3 e coluna 3: 3
Digite o elemento da linha 3 e coluna 4: 4
A soma da linha 0 é igual a 24
A soma da linha 1 é igual a 18
A soma da linha 2 é igual a 21
A soma da linha 3 é igual a 22
A soma de todos os elementos é 85
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][5], i, j, soma = 0, total = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("\nInsira a matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // I = Linha
    // J = Coluna
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            soma = soma + matriz[i][j];
        }
        printf("\nA soma da linha %d e igual a: %d", i, soma);
        soma = 0;
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            total += matriz[i][j];
        }
    }
    printf("\nA soma de todos os elementos e: %d\n\n", total);
    system("pause");
    return 0;
}