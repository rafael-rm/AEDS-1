/*
Crie uma scruct para representar a matrícula ( as notas, n 1
n 2 e n 3 e média geral, de um aluno, além de seu nome e curso que
está cursando Em seguida, leia por meio do teclado os dados de 5
alunos e armazene Em seguida, faça
•
a) apresente os dados do aluno que obteve a maior média geral
•
b) Apresente os dados do aluno que obteve a maior nota entre as três
recebidas
•
c) Apresente os dados do aluno que se encontra na posição 1 em uma ordem
crescente dos alunos de acordo com ordenação de seus nomes
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dados_alunos{
    int matricula;
    float nota[3];
    float media;
    char nome[30];
    char curso[30];
}dados;

int main(){
    dados dados[5];
    
    // Entrada de dados
    for(int i = 0; i < 5; i++){
        dados[i].media=0;
        printf("Insira a matricual do aluno: ");
        scanf("%d", &dados[i].matricula);

        for(int j = 0; j < 3; j++){
            printf("Insira a %do nota do aluno: ", j+1);
            scanf("%f", &dados[i].nota[j]);
            dados[i].media += dados[i].nota[j];
        }
     
        dados[i].media = dados[i].media/3.0;

        printf("Insira o nome do aluno: ");
        setbuf(stdin, NULL);
        fgets(dados[i].nome, 30, stdin);
        printf("Insira o curso do aluno: ");
        setbuf(stdin, NULL);
        fgets(dados[i].curso, 30, stdin);
        system("cls");
    }

    // Maior media
    float maior_media = dados[0].media;
    int indice = 0;
    for(int i=0; i < 5; i++){
        if(maior_media < dados[i].media){
            maior_media = dados[i].media;
            indice = i;
        }
    }
    printf("A) Informacoes do aluno com a maior media:\n\n");
    printf("Matricula: %d", dados[indice].matricula);
    for(int i = 0; i<3; i++)
    printf("\nNotas %d: %.2f", i+1, dados[indice].nota[i]);
    printf("\nMedia geral: %.2f", dados[indice].media);
    printf("\nNome: %s", dados[indice].nome);
    printf("\nCurso: %s\n\n\n", dados[indice].curso);

 // Maior nota
    int maior_nota = dados[0].nota[0];
    indice = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            if(maior_nota < dados[i].nota[j]){
                maior_nota = dados[i].nota[j];
                indice = i;
            }
        }
    }
    printf("B) Informacoes do aluno com a maior nota em uma das 3 provas:\n\n");
    printf("Matricula: %d", dados[indice].matricula);
    for(int i = 0; i<3; i++)
    printf("\nNotas %d: %.2f", i+1, dados[indice].nota[i]);
    printf("\nMedia geral: %.2f", dados[indice].media);
    printf("\nNome: %s", dados[indice].nome);
    printf("Curso: %s\n\n\n", dados[indice].curso);

    // Ordem alfabetica
    char primeiro_nome[30];
    indice = 0;
    strcpy(primeiro_nome, dados[0].nome); 
    for(int i=0; i < 5; i++){
        if(strcmp(dados[i].nome, primeiro_nome) < 0){
            strcpy(primeiro_nome, dados[i].nome);
            indice = i;
        }
    }
    printf("C) Informacoes do primeiro aluno em ordem alfabetica:\n\n");
    printf("Matricula: %d", dados[indice].matricula);
    for(int i = 0; i<3; i++)
    printf("\nNotas %d: %.2f", i+1, dados[indice].nota[i]);
    printf("\nMedia geral: %.2f", dados[indice].media);
    printf("\nNome: %s", dados[indice].nome);
    printf("\nCurso: %s\n\n\n", dados[indice].curso);
    return 0;
}