#include <stdio.h>

struct dados_alunos
{
    int matricula;
    float notas[3];
    float media;
};

int main()
{

    struct dados_alunos info_alunos[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Insira a matricula do %d aluno: ", i + 1);
        scanf("%d", &info_alunos[i].matricula);
        info_alunos[i].media = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("Insira a nota %d do aluno: ", j + 1);
            scanf("%f", &info_alunos[i].notas[j]);
            info_alunos[i].media += info_alunos[i].notas[j];
        }
        info_alunos[i].media = info_alunos[i].media / 3;
    }
    return 0;
}