/*
34. Leia a nota e o numero de faltas de um aluno, e escreva seu conceito. De acordo com a  ́
tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma reduc ̧ao de conceito.

NOTA CONCEITO (ATE 20 FALTAS)  ́ CONCEITO (MAIS DE 20 FALTAS)
9.0 ate 10.0  ́ A B
7.5 ate 8.9  ́ B C
5.0 ate 7.4  ́ C D
4.0 ate 4.9  ́ D E
0.0 ate 3.9  ́ E E
*/

#include <stdio.h>

int main()
{
    float nota;
    int faltas;
    printf("\nInsira a nota do aluno: ");
    scanf("%f", &nota);
    printf("\nInsira o numero de faltas do aluno: ");
    scanf("%d", &faltas);
    printf("\n");

    if (nota >= 9 && nota <= 10)
    {
        if(faltas <= 20)
        printf("Conceito A");
        else if(faltas > 20)
        printf("Conceito B");
    }

    if (nota >= 7.5 && nota < 9)
    {
        if(faltas <= 20)
        printf("Conceito B");
        else if(faltas > 20)
        printf("Conceito C");
    }

    if (nota >= 5.0 && nota < 7.5)
    {
        if(faltas <= 20)
        printf("Conceito C");
        else if(faltas > 20)
        printf("Conceito D");
    }

    if (nota >= 4.0 && nota < 5.0)
    {
        if(faltas <= 20)
        printf("Conceito D");
        else if(faltas > 20)
        printf("Conceito E");
    }

    if (nota >= 0 && nota < 4)
    {
        if(faltas <= 20)
        printf("Conceito E");
        else if(faltas > 20)
        printf("Conceito E");
    }
    printf("\n");
    return 0;
}