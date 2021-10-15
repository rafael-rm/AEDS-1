/*
Leia as notas de uma turma de cinco estudantes e depois imprima as notas
que são maiores do que a média da turma
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, alunos = 5;
    float notas[5], nota_turma = 0;
    for (i = 0; i < alunos; i++)
    {
        printf("\nInsira a nota do %do aluno: ", i + 1);
        scanf("%f", &notas[i]);
        nota_turma = nota_turma + notas[i];
    }

    float media = nota_turma / 5;
    printf("\nA media da sala e de: %.2f\n\n", media);
    system("PAUSE");
    system("cls");

    printf("\n\nAs seguintes notas sao maiores que a media da sala: ");
    for (i = 0; i < alunos; i++)
    {
        if (notas[i] > media)
        {
            printf("%.2f ", notas[i]);
        }
    }
    printf("\n\n");
    return 0;
}