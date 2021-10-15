/*
14. A nota final de um estudante e calculada a partir de trés notas atribuídas entre o intervalo
de 0 ate 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral  ̃
e a um exame final. A media das trés notas mencionadas anteriormente obedece aos ˆ
pesos: Trabalho de Laboratorio: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo  ̃
com o resultado, mostre na tela se o aluno esta reprovado (média entre 0 e 2,9), de  ́
recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota_trabalho_lab, nota_avaliacao_semestral, nota_exame_final, nota_final;

    // Trabalho laboratorio - Peso 2

    do
    {
        printf("Escreva a nota do trabalho: ");
        scanf("%f", &nota_trabalho_lab);
        if (nota_trabalho_lab < 0 || nota_trabalho_lab > 10)
        {
            system("cls");
            printf("\nNota invalida, insira uma nota entre 0 e 10.\n");
        }
    } while ((nota_trabalho_lab < 0) || (nota_trabalho_lab > 10));
    nota_trabalho_lab = nota_trabalho_lab * 2;

    // Avalicao semestral - Peso 3

    do
    {
        printf("Escreva a nota da avaliacao semestral: ");
        scanf("%f", &nota_avaliacao_semestral);
        if (nota_avaliacao_semestral < 0 || nota_avaliacao_semestral > 10)
        {
            system("cls");
            printf("\nNota invalida, insira uma nota entre 0 e 10.\n");
        }
    } while (nota_avaliacao_semestral < 0 || nota_avaliacao_semestral > 10);
    nota_avaliacao_semestral = nota_avaliacao_semestral * 3;

    // Exame final - Peso 5

    do
    {
        printf("Escreva a nota do exame final: ");
        scanf("%f", &nota_exame_final);
        if (nota_exame_final < 0 || nota_exame_final > 10)
        {
            system("cls");
            printf("\nNota invalida, insira uma nota entre 0 e 10.\n");
        }
    } while (nota_exame_final < 0 || nota_exame_final > 10);
    nota_exame_final = nota_exame_final * 5;

    // Nota final

    nota_final = (nota_avaliacao_semestral + nota_exame_final + nota_trabalho_lab) / 10;

    system("cls");

    if(nota_final <= 2.9){
        printf("\n\nNota final: %.2f\nO aluno foi reprovado.\n\n", nota_final);
    }
    else if(nota_final < 4.9){
        printf("\n\nNota final: %.2f\nO aluno esta de recuperacao.\n\n", nota_final);
    }
    else {
        printf("\n\nNota final: %.2f\nO aluno foi aprovado.\n\n", nota_final);
    }
    return 0;
}