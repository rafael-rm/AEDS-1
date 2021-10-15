#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Estrutura com os dados dos alunos.
typedef struct dados_alunos_struct
{
    int matricula;
    char nome[50];
    float notas[3];
    float media;
} dados_alunos_struct;

// Funções
float media(float nota_1, float nota_2, float nota_3);
void ordenacao(dados_alunos_struct dados_alunos[], int leituras);
int busca_sequencial(int leituras, dados_alunos_struct *dados_alunos, int matricula_pesquisar);

// Estrutura principal.
int main()
{
    int i, j, ch, leituras = 1;

    // Abrindo Arquivo
    FILE *arquivo;
    arquivo = fopen("alunos.txt", "r+");

    if (arquivo == NULL) // Erro no arquivo ou arquivo não encontrado
    {
        printf("\n [ERROR] Problema na abertura/localizacao do arquivo.\n\n");
        system("pause");
        exit(1);
    }

    // Contagem de linhas (dados)
    while ((ch = fgetc(arquivo)) != EOF)
    {
        if (ch == '\n')
        {
            leituras++;
        }
    }

    printf("\n%d dados de alunos encontrados.\n\n", leituras);
    system("pause");

    // Alocação de memoria
    dados_alunos_struct *dados_alunos;
    dados_alunos = (dados_alunos_struct *)calloc(leituras, sizeof(dados_alunos_struct));

    // Memoria insuficiente
    if (dados_alunos == NULL)
    {
        printf("\n [ERROR] Memoria insuficiente, encerrando programa.\n");
        system("pause");
        exit(1);
    }

    // Lendo arquivo
    rewind(arquivo);
    for (i = 0; i < leituras; i++)
    {
        fscanf(arquivo, "%d", &dados_alunos[i].matricula);
        fscanf(arquivo, "%s", dados_alunos[i].nome);
        fscanf(arquivo, "%f", &dados_alunos[i].notas[0]);
        fscanf(arquivo, "%f", &dados_alunos[i].notas[1]);
        fscanf(arquivo, "%f", &dados_alunos[i].notas[2]);

        // Calculando media e transferindo para struct
        dados_alunos[i].media = media(dados_alunos[i].notas[0], dados_alunos[i].notas[1], dados_alunos[i].notas[2]);
    }
    fclose(arquivo); // Fechando arquivo pois nao sera mais utilizado no momento

    // Menu de opções - (0 a 9)
    int opcao_selecionada;
    system("cls");
    do
    {
        printf("\n1. Imprimir todos os elementos do arranjo;\n");
        printf("2. Imprimir apenas os nomes dos alunos;\n");
        printf("3. Imprimir o nome dos alunos e sua respectiva nota final;\n");
        printf("4. Buscar os dados de um aluno usando a busca sequencial;\n");
        printf("5. Ordernar os alunos de acordo com sua matricula;\n");
        printf("6. Editar as notas de um aluno, para isso e necessario que se busque os dados do aluno\n");
        printf("7. Imprimir a matricula, nome e nota final do aluno que obteve a maior nota de todas;\n");
        printf("8. Imprimir a matricula, nome e nota final do aluno que obteve a menor nota de todas;\n");
        printf("9. Imprimir quantos alunos foram aprovados e quantos alunos foram reprovados, imprima ainda a media geral;\n");
        printf("0. Sair do programa; \n");
        printf("\nSelecione uma das opcoes acima: ");
        scanf("%d", &opcao_selecionada);

        if (opcao_selecionada > 9 || opcao_selecionada < 0)
        {
            system("cls");
            printf("\nSelecione uma opcao valida!\n");
        }
        else if (opcao_selecionada >= 1 && opcao_selecionada <= 9)
        {
            system("cls");
            printf("\n");

            switch (opcao_selecionada)
            {
            // Imprimir todos os elementos do arranjo
            case 1:
                printf("Imprimindo todos os elementos:");
                for (i = 0; i < leituras; i++)
                {
                    printf("\n\n");
                    printf("Matricula: %.3d", dados_alunos[i].matricula);
                    printf("\nNome: %s\n", dados_alunos[i].nome);
                    for (j = 0; j < 3; j++)
                        printf("Nota %d: %.2f\n", j + 1, dados_alunos[i].notas[j]);
                    printf("Media: %.2f", dados_alunos[i].media);
                }
                break;

            // Imprimir apenas os nomes dos alunos;
            case 2:
                printf("Imprimindo o nome dos alunos:\n\n");
                for (i = 0; i < leituras; i++)
                {
                    printf("%s\n", dados_alunos[i].nome);
                }
                break;

            // Imprimir o nome dos alunos e sua respectiva nota final;
            case 3:
                printf("Imprimindo o nome dos alunos e sua nota final:");
                for (i = 0; i < leituras; i++)
                {
                    printf("\n\n");
                    printf("Nome: %s", dados_alunos[i].nome);
                    printf("\nNota final: %.2f", dados_alunos[i].media);
                }
                break;

            // Buscar os dados de um aluno usando a busca sequencial;
            case 4:
                printf("Insira a matricula do aluno que deseja pesquisar: ");
                int matricula_pesquisar;
                int indice_matricula_pesquisar = -1; // Caso o valor -1 não seja alterado significa que o aluno não foi encontrado.
                scanf("%d", &matricula_pesquisar);

                indice_matricula_pesquisar = busca_sequencial(leituras, dados_alunos, matricula_pesquisar);
                if (indice_matricula_pesquisar == -1)
                {
                    printf("\nNao foi possivel localizar este aluno.");
                }
                else
                {
                    printf("\nMatricula: %.3d\n", dados_alunos[indice_matricula_pesquisar].matricula);
                    printf("Nome: %s\n", dados_alunos[indice_matricula_pesquisar].nome);
                    printf("Nota 1: %.2f\n", dados_alunos[indice_matricula_pesquisar].notas[0]);
                    printf("Nota 2: %.2f\n", dados_alunos[indice_matricula_pesquisar].notas[1]);
                    printf("Nota 3: %.2f\n", dados_alunos[indice_matricula_pesquisar].notas[2]);
                    printf("Media: %.2f", dados_alunos[indice_matricula_pesquisar].media);
                }
                break;

            // Ordernar os alunos de acordo com sua matricula
            case 5:
                ordenacao(dados_alunos, leituras);

                printf("Imprimindo os alunos ordenadamento de acordo com sua matricula:");
                for (i = 0; i < leituras; i++)
                {
                    printf("\n\n");
                    printf("Matricula: %.3d", dados_alunos[i].matricula);
                    printf("\nNome: %s\n", dados_alunos[i].nome);
                    for (j = 0; j < 3; j++)
                        printf("Nota %d: %.2f\n", j + 1, dados_alunos[i].notas[j]);
                    printf("Media: %.2f", dados_alunos[i].media);
                }
                break;

            // Editar as notas de um aluno, para isso é necessário que se busque os dados do aluno
            case 6:
                printf("Insira a matricula do aluno que deseja alterar as notas: ");
                int matricula_alterar_nota;
                int indice_alterar_nota = -1; // Caso o valor -1 não seja alterado significa que o aluno não foi encontrado.
                scanf("%d", &matricula_alterar_nota);
                for (i = 0; i < leituras; i++)
                {
                    if (dados_alunos[i].matricula == matricula_alterar_nota)
                    {
                        indice_alterar_nota = i;
                        i = leituras;
                    }
                }
                if (indice_alterar_nota == -1)
                {
                    printf("\nNao foi possivel localizar este aluno.");
                }
                else
                {
                    int nota_para_editar;
                    do
                    {
                        // Menu para selecionar qual prova deseja editar
                        printf("\nSelecione 0 para sair deste menu.\n");
                        printf("Insira a nota que deseja editar (1 a 3): ");
                        scanf("%d", &nota_para_editar);
                        if (nota_para_editar >= 1 && nota_para_editar <= 3)
                        {
                            // Troca
                            printf("Insira a nova nota do aluno na prova %d: ", nota_para_editar);
                            scanf("%f", &dados_alunos[indice_alterar_nota].notas[nota_para_editar - 1]);
                            // Informações apos a troca
                            printf("\n\nTroca efetuada com sucesso, novas informacoes de %s", dados_alunos[indice_alterar_nota].nome);
                            printf("\n\nNota 1: %.2f", dados_alunos[indice_alterar_nota].notas[0]);
                            printf("\nNota 2: %.2f", dados_alunos[indice_alterar_nota].notas[1]);
                            printf("\nNota 3: %.2f", dados_alunos[indice_alterar_nota].notas[2]);
                            dados_alunos[indice_alterar_nota].media = (dados_alunos[indice_alterar_nota].notas[0] + dados_alunos[indice_alterar_nota].notas[1] + dados_alunos[indice_alterar_nota].notas[2]) / 3;
                            printf("\nMedia: %.2f\n\n", dados_alunos[indice_alterar_nota].media);
                        }
                        else if (nota_para_editar == 0)
                            printf("\nSaindo da opcao.\n");
                        else
                        {
                            printf("\nSelecione uma opcao valida!");
                        }
                        system("pause");
                        system("cls");
                    } while (nota_para_editar != 0);
                }
                break;

            // Imprimir a matricula, nome e nota final do aluno que obteve a maior nota de todas;
            case 7:
                printf("\n");
                float maior_nota = dados_alunos[0].notas[0];
                int indice_maior_nota = 0;
                for (i = 0; i < leituras; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        if (dados_alunos[i].notas[j] > maior_nota)
                        {
                            maior_nota = dados_alunos[i].notas[j];
                            indice_maior_nota = i;
                        }
                    }
                }
                printf("O aluno que obteve a maior nota foi %s", dados_alunos[indice_maior_nota].nome);
                printf("\nSua matricula e: %.3d", dados_alunos[indice_maior_nota].matricula);
                printf("\nSua nota final foi: %.2f", dados_alunos[indice_maior_nota].media);
                break;

            // Imprimir a matricula, nome e nota final do aluno que obteve a menor nota de todas;
            case 8:
                printf("\n");
                float menor_nota = dados_alunos[0].notas[0];
                int indice_menor_nota = 0;
                for (i = 0; i < leituras; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        if (dados_alunos[i].notas[j] < menor_nota)
                        {
                            menor_nota = dados_alunos[i].notas[j];
                            indice_menor_nota = i;
                        }
                    }
                }
                printf("O aluno que obteve a menor nota foi %s", dados_alunos[indice_menor_nota].nome);
                printf("\nSua matricula e: %.3d", dados_alunos[indice_menor_nota].matricula);
                printf("\nSua nota final foi: %.2f", dados_alunos[indice_menor_nota].media);
                break;

            // Imprimir quantos alunos foram aprovados e quantos alunos foram reprovados, imprima ainda a media geral;
            case 9:
                printf("\n");
                int aprovados = 0, reprovados = 0;
                float media_geral = 0;
                for (i = 0; i < leituras; i++)
                {
                    media_geral += dados_alunos[i].media;
                    if (dados_alunos[i].media < 6.0)
                        reprovados++;
                    else if (dados_alunos[i].media >= 6.0)
                        aprovados++;
                }
                media_geral = media_geral / leituras;
                printf("Alunos aprovados: %d", aprovados);
                printf("\nAlunos reprovados: %d", reprovados);
                printf("\n\nMedia geral: %.2f", media_geral);
                break;
            }

            printf("\n\n");
            system("pause");
            system("cls");
        }
    } while (opcao_selecionada != 0);
    system("cls");

    // Salvar alteracoes no arquivo - opção
    int salvar_opcao;
    do
    {
        printf("\nDeseja salvar as alteracoes?\n\n (1) SIM \n (2) NAO\n");
        printf("\n Opcao: ");
        scanf("%d", &salvar_opcao);
        if (!(salvar_opcao == 1 || salvar_opcao == 2))
        {
            system("cls");
            printf("\nSelecione uma opcao valida!\n");
        }
    } while (!(salvar_opcao == 1 || salvar_opcao == 2));
    system("cls");

    if (salvar_opcao == 1) // Salvar alterações
    {
        FILE *arquivo_salvar;
        arquivo_salvar = fopen("alunos-novo.txt", "w+");
        for (i = 0; i < leituras; i++)
        {
            fprintf(arquivo_salvar, "%d ", dados_alunos[i].matricula);
            fprintf(arquivo_salvar, "%s ", dados_alunos[i].nome);
            fprintf(arquivo_salvar, "%.2f ", dados_alunos[i].notas[0]);
            fprintf(arquivo_salvar, "%.2f ", dados_alunos[i].notas[1]);
            fprintf(arquivo_salvar, "%.2f ", dados_alunos[i].notas[2]);

            if (i == leituras - 1) // Evitar erro de adicionar uma linha em branco no final do arquivo
            {
                fprintf(arquivo_salvar, "%.2f", dados_alunos[i].media);
            }
            else
            {
                fprintf(arquivo_salvar, "%.2f\n", dados_alunos[i].media);
            }
        }
        fclose(arquivo_salvar);
        printf("\nAlteracoes salvas com sucesso, programa encerrado.\n");
        free(dados_alunos);
        return 0;
    }

    if (salvar_opcao == 2) // Não salva
    {
        printf("\nNenhuma alteracao salva, programa encerrado.\n");
        free(dados_alunos);
        return 0;
    }
}

// Função para calcular a média.
float media(float nota_1, float nota_2, float nota_3)
{
    return ((nota_1 + nota_2 + nota_3) / 3.0);
}

// Ordenação da struct (tendo em base as matrículas)
void ordenacao(dados_alunos_struct dados_alunos[], int leituras)
{
    for (int j = 0; j < leituras; j++)
    {
        for (int i = 0; i < leituras - 1 - j; i++)
        {
            if (dados_alunos[i].matricula > dados_alunos[i + 1].matricula)
            {
                dados_alunos_struct aux_matricula = dados_alunos[i];
                dados_alunos[i] = dados_alunos[i + 1];
                dados_alunos[i + 1] = aux_matricula;
            }
        }
    }
}

// Função de busca sequencial
int busca_sequencial(int leituras, dados_alunos_struct *dados_alunos, int matricula_pesquisar)
{
    for (int i = 0; i < leituras; i++)
    {
        if (dados_alunos[i].matricula == matricula_pesquisar)
        {
            return i; // Retorna posição do aluno no vetor
        }
    }
    return -1; // Ao retornar -1 informa que não foi possivel localizar o aluno
}