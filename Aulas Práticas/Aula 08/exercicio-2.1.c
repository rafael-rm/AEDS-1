#include <stdio.h>

struct dados_alunos
{
    int matricula;
    float notas[3];
    float media;
};

int main()
{

    struct dados_alunos dados_alunos[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Insira a matricula do %d aluno: ", i + 1);
        scanf("%d", &dados_alunos[i].matricula);
        dados_alunos[i].media = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("Insira a nota %d do aluno: ", j + 1);
            scanf("%f", &dados_alunos[i].notas[j]);
            dados_alunos[i].media += dados_alunos[i].notas[j];
        }
        dados_alunos[i].media = dados_alunos[i].media / 3;
        printf("\n\n");
    }

    for(int i = 0; i<3; i++){
        printf("Aluno: %d", dados_alunos[i].matricula);
        printf("\nMedia: %.2f", dados_alunos[i].media);
        printf("\n\n");
    }
    return 0;
}