/*
Faça um programa que leia o nome de três alunos e suas respectivas notas em AEDS I. Em seguida, o programa deverá
apresentar o nome e a nota do aluno que obteve maior nota;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, indice;
    char nomes[3][20];
    float nota[3], maior;

    for(i=0; i < 3; i++){
    setbuf(stdin, NULL);
    printf("Insira o nome do %d aluno: ", i+1);
    gets(nomes[i]);
    printf("\nInsira a nota do aluno: ");
    scanf("%f", &nota[i]);
    system("cls");
    }

    maior=nota[0];

    for(i=0; i < 3; i++){
        if(nota[i] > maior){
            maior = nota[i];
            indice = i;
        }
    }
    printf("\nO aluno que obteve a maior nota foi %s, sua nota foi de %.2f", nomes[indice], nota[indice]);
    printf("\n");
    return 0;
}