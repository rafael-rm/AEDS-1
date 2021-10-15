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

    setbuf(stdin, NULL);
    printf("Insira o nome do primeiro aluno: ");
    gets(nomes[0]);
    printf("\nInsira a nota do aluno: ");
    scanf("%f", &nota[0]);
    system("cls");
    setbuf(stdin, NULL);
    printf("Insira o nome do segundo aluno: ");
    gets(nomes[1]);
    printf("\nInsira a nota do aluno: ");
    scanf("%f", &nota[1]);
    system("cls");
    setbuf(stdin, NULL);
    printf("Insira o nome do terceiro aluno: ");
    gets(nomes[2]);
    printf("\nInsira a nota do aluno: ");
    scanf("%f", &nota[2]);
    system("pause");
    system("cls");

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