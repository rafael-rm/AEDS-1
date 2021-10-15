#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <windows.h>

// Tamanho do tabuleiro;
#define LINHAS 8
#define COLUNAS 8

// Verdadeiro ou falso;
#define TRUE 1
#define FALSE 0

// Jogadores;
#define JOGADOR_1 0
#define JOGADOR_2 1
#define EMPATE 3

// Como a matriz(tabuleiro) é preenchido;
#define PRETO 1
#define BRANCO 2
#define VAZIO 3
#define JOGAVEL 4

// Marcadores exibidos no tabuleiro;
#define MARCADOR_PRETO "X"
#define MARCADOR_BRANCO "O"
#define MARCADOR_VAZIO " "
#define MARCADOR_JOGAVEL "."

// Outros;

// Struct com dados dos jogadores;
typedef struct dados_struct
{
    char nome[30];
    int idade;
    char sexo[10];
    int cor;
    int pontos;
} dados_struct;

// Declarando variaveis globais;
dados_struct *dados;
int **tabuleiro;
int jogador_preto;
int jogador_branco;
int vencedor = EMPATE;
int segundo_colocado = -1;
int jogar_linha;
int jogar_coluna;
int jogador_atual = PRETO;
int jogador_adversario = BRANCO;
int rodada = 1;
int jogadas_possiveis = 4;

// Cores
HANDLE console;
CONSOLE_SCREEN_BUFFER_INFO consoleinfo;
WORD cor_padrao;

// Declarando funções;
void coletardados_e_sortear();
void criar_tabuleiro();
void imprimir_tabuleiro();
void calcular_pontuacao();
void verificar_vencedor();
void ranking_final_da_partida();
void simular_jogo();
void trocar_jogador_atual();
void verificar_jogadas();
void colocar_peca();
void carregar_cores();
int limite_tabuleiro();


// Estrutura principal;
int main()
{
    // Chamada inicial;
    carregar_cores();
    criar_tabuleiro();
    coletardados_e_sortear();

    // Repetições ate não existir mais jogadas possiveis;
    do
    {
        verificar_jogadas();
        calcular_pontuacao();
        imprimir_tabuleiro();
        colocar_peca();
        trocar_jogador_atual();
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n\n  *  Fim da rodada\n\n\n");
        system("pause");
        // simular_jogo(); // Pula direto para o final de um jogo;
    } while (jogadas_possiveis != 0);

    // Finalização do jogo;
    calcular_pontuacao();
    verificar_vencedor();
    ranking_final_da_partida();
}


// Função para sortear a cor dos jogadores e coletar seus dados;
void coletardados_e_sortear()
{
    // Alocando memoria para struct;
    dados = (dados_struct *)calloc(2, sizeof(dados_struct));

    // Coletando dados;
    SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
    for (int i = 0; i < 2; i++)
    {
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n  * Jogador %d, insira seus dados abaixo:", i + 1);
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n\n Nome: ");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED);
        setbuf(stdin, NULL);
        fgets(dados[i].nome, 30, stdin);
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf(" Idade: ");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED);
        scanf("%d", &dados[i].idade);
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf(" Sexo: ");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED);
        setbuf(stdin, NULL);
        fgets(dados[i].sexo, 10, stdin);
    }
    SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
    printf("\n");

    // Sorteando a cor;
    int numero_aleatorio;
    srand(time(NULL));
    numero_aleatorio = rand() % 2 + 1;
    if (numero_aleatorio == 1)
    {
        dados[JOGADOR_1].cor = PRETO;
        dados[JOGADOR_2].cor = BRANCO;
        jogador_preto = 0;
        jogador_branco = 1;
        printf("\n  * O jogador 1 foi sorteado com a cor ");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE);
        printf("preta.");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n  * O jogador 2 foi sorteado com a cor ");
        SetConsoleTextAttribute(console, FOREGROUND_RED);
        printf("branca.\n\n\n");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
    }
    else
    {
        dados[JOGADOR_1].cor = BRANCO;
        dados[JOGADOR_2].cor = PRETO;
        jogador_branco = 0;
        jogador_preto = 1;
        printf("\n  * O jogador 1 foi sorteado com a cor ");
        SetConsoleTextAttribute(console, FOREGROUND_RED);
        printf("branca.");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n  * O jogador 2 foi sorteado com a cor ");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE);
        printf("preta.\n\n\n");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
    }
    system("pause");
};

// Criar o tabuleiro (alocando memoria e preenchendo a matriz);
void criar_tabuleiro()
{
    //Alocando memoria;
    tabuleiro = malloc(LINHAS * sizeof(int *));
    tabuleiro[0] = malloc(LINHAS * COLUNAS * sizeof(int));
    for (int i = 1; i < LINHAS; i++)
        tabuleiro[i] = tabuleiro[0] + i * COLUNAS;

    // Prenchendo tabuleiro com marcador vazio;
    for (int i = 0; i < LINHAS; i++)
        for (int j = 0; j < COLUNAS; j++)
            tabuleiro[i][j] = VAZIO;

    // Colocando peças iniciais;
    tabuleiro[3][3] = PRETO;
    tabuleiro[4][4] = PRETO;
    tabuleiro[3][4] = BRANCO;
    tabuleiro[4][3] = BRANCO;
}

// Imprimir o tabuleiro atual;
void imprimir_tabuleiro()
{
    system("cls");

    if (jogador_atual == PRETO)
    {
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n\n   *   Jogador atual: ");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE);
        printf("PRETO (%s)", MARCADOR_PRETO);
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n   *   Rodada atual: %d\n   *   Jogadas possiveis: %d\n\n", rodada, jogadas_possiveis);
    }
    else if (jogador_atual == BRANCO)
    {
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n\n   *   Jogador atual: ");
        SetConsoleTextAttribute(console, FOREGROUND_RED);
        printf("BRANCO (%s)", MARCADOR_BRANCO);
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n   *   Rodada atual: %d\n   *   Jogadas possiveis: %d\n\n", rodada, jogadas_possiveis);
    }
    printf("\n      0     1     2     3     4     5     6     7\n");
    printf("    _____ _____ _____ _____ _____ _____ _____ _____\n");
    for (int i = 0; i < LINHAS; ++i)
    {
        printf("   |     |     |     |     |     |     |     |     |\n");
        printf(" %d ", i);
        printf("|");
        for (int j = 0; j < COLUNAS; ++j)
        {
            if (tabuleiro[i][j] == BRANCO)
            {
                SetConsoleTextAttribute(console, FOREGROUND_RED);
                printf("  %s  ", MARCADOR_BRANCO);
                SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
            }
            else if (tabuleiro[i][j] == PRETO)
            {
                SetConsoleTextAttribute(console, FOREGROUND_BLUE);
                printf("  %s  ", MARCADOR_PRETO);
                SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
            }
            else if (tabuleiro[i][j] == JOGAVEL)
            {
                SetConsoleTextAttribute(console, FOREGROUND_GREEN);
                printf("  %s  ", MARCADOR_JOGAVEL);
                SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
            }
            else
            {
                printf("  %s  ", MARCADOR_VAZIO);
            }
            printf("|");
        }
        printf("\n");
        printf("   |_____|_____|_____|_____|_____|_____|_____|_____|\n");
    }
    SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
    printf("\n\n");
}

// Calcular a pontuaçao de cada jogador;
void calcular_pontuacao()
{
    for (int i = 0; i < LINHAS; i++)
        for (int j = 0; j < COLUNAS; j++)
        {
            if (tabuleiro[i][j] == PRETO)
            {
                dados[jogador_preto].pontos += 1;
            }
            if (tabuleiro[i][j] == BRANCO)
            {
                dados[jogador_branco].pontos += 1;
            }
        }
}

// Verificar qual jogador venceu a partida;
void verificar_vencedor()
{
    calcular_pontuacao();
    if (dados[jogador_branco].pontos > dados[jogador_preto].pontos)
    {
        vencedor = jogador_branco;
        segundo_colocado = jogador_preto;
    }
    else if (dados[jogador_preto].pontos > dados[jogador_branco].pontos)
    {
        vencedor = jogador_preto;
        segundo_colocado = jogador_branco;
    }
    else if (dados[jogador_branco].pontos == dados[jogador_preto].pontos)
    {
        vencedor = EMPATE;
        segundo_colocado = FALSE;
    }
}

// Imprimir o ranking final da partida juntamente com os dados dos jogadores;
void ranking_final_da_partida()
{
    system("pause");
    system("cls");

    if (vencedor == EMPATE)
    {
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n\n  *  Ranking final da partida:\n - A partida terminou em empate e por isso nao houve nenhum vencedor.  \n");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE);
        printf("\n * Dados do jogador PRETO");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n\nNome: %sIdade: %d\nSexo: %sCor: Preto\nPontos: %d", dados[jogador_preto].nome, dados[jogador_preto].idade, dados[jogador_preto].sexo, dados[jogador_preto].pontos);
        SetConsoleTextAttribute(console, FOREGROUND_RED);
        printf("\n\n * Dados do jogador BRANCO");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n\nNome: %sIdade: %d\nSexo: %sCor: Branco \nPontos: %d\n\n\n", dados[jogador_branco].nome, dados[jogador_branco].idade, dados[jogador_branco].sexo, dados[jogador_branco].pontos);
    }
    else if (vencedor == jogador_branco)
    {
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n\n  *  Ranking final da partida:\n\n  1. (BRANCO) %s  2. (PRETO) %s  \n", dados[jogador_branco].nome, dados[jogador_preto].nome);
        SetConsoleTextAttribute(console, FOREGROUND_BLUE);
        printf("\n * Dados do jogador PRETO");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n\n  Nome: %s  Idade: %d\n  Sexo: %s  Cor: Preto\n  Pontos: %d", dados[jogador_preto].nome, dados[jogador_preto].idade, dados[jogador_preto].sexo, dados[jogador_preto].pontos);
        SetConsoleTextAttribute(console, FOREGROUND_RED);
        printf("\n\n * Dados do jogador BRANCO");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n\n  Nome: %s  Idade: %d\n  Sexo: %s  Cor: Branco\n  Pontos: %d\n\n\n", dados[jogador_branco].nome, dados[jogador_branco].idade, dados[jogador_branco].sexo, dados[jogador_branco].pontos);
    }
    else if (vencedor == jogador_preto)
    {
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n\n  *  Ranking final da partida:\n\n  1. (PRETO) %s  2. (BRANCO) %s  \n", dados[jogador_preto].nome, dados[jogador_branco].nome);
        SetConsoleTextAttribute(console, FOREGROUND_BLUE);
        printf("\n * Dados do jogador PRETO");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n\n  Nome: %s  Idade: %d\n  Sexo: %s  Cor: Preto\n  Pontos: %d", dados[jogador_preto].nome, dados[jogador_preto].idade, dados[jogador_preto].sexo, dados[jogador_preto].pontos);
        SetConsoleTextAttribute(console, FOREGROUND_RED);
        printf("\n\n * Dados do jogador BRANCO");
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN);
        printf("\n\n  Nome: %s  Idade: %d\n  Sexo: %s  Cor: Branco\n  Pontos: %d\n\n\n", dados[jogador_branco].nome, dados[jogador_branco].idade, dados[jogador_branco].sexo, dados[jogador_branco].pontos);
    }
}

// DEBUG - Simular um tabuleiro para testar as demais funções
void simular_jogo()
{
    int preencher;
    srand(time(NULL));
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            preencher = rand() % 3;
            tabuleiro[i][j] = preencher;
        }
    }
    jogadas_possiveis = 0;
    imprimir_tabuleiro();
}

// A joga esta no limite do tabuleiro? LINHAS X COLUNAS (8X8);
int limite_maximo_tabuleiro()
{
    if (jogar_coluna >= 0 && jogar_coluna <= 7 && jogar_linha >= 0 && jogar_linha <= 7)
    {
        return FALSE; // Significa que não passou do limite maximo do tabuleiro;
    }
    else
    {
        return TRUE; // Significa que passou do limite maximo do tabuleiro;
    }
}

// Trocar a vez do jogador;
void trocar_jogador_atual()
{
    rodada += 1;
    if (jogador_atual == PRETO)
    {
        jogador_atual = BRANCO;
        jogador_adversario = PRETO;
    }
    else if (jogador_atual == BRANCO)
    {
        jogador_atual = PRETO;
        jogador_adversario = BRANCO;
    }
}

// Verificar jogadas possiveis
void verificar_jogadas()
{
    int i, j, aux;

    // Limpar jogadas anteriores;
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            if (tabuleiro[i][j] == JOGAVEL)
            {
                tabuleiro[i][j] = VAZIO;
            }
        }
    }

    // Adiciona os locais possiveis de se jogar;
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {

            // Horizontal direita;
            if (tabuleiro[i][j] == jogador_atual && tabuleiro[i][j + 1] == jogador_adversario)
            {
                for (aux = j; aux < COLUNAS; aux++)
                {
                    if (tabuleiro[i][aux] == VAZIO)
                    {
                        tabuleiro[i][aux] = JOGAVEL;
                        aux = COLUNAS;
                    }
                }
            }

            // Horizontal esquerda;
            if (tabuleiro[i][j] == jogador_atual && tabuleiro[i][j - 1] == jogador_adversario)
            {
                for (aux = j; aux >= 0; aux--)
                {
                    if (tabuleiro[i][aux] == VAZIO)
                    {
                        tabuleiro[i][aux] = JOGAVEL;
                        aux = -1000;
                    }
                }
            }

            // Vertical superior;
            if (tabuleiro[i][j] == jogador_atual && tabuleiro[i + 1][j] == jogador_adversario)
            {
                for (aux = i; aux < COLUNAS; aux++)
                {
                    if (tabuleiro[aux][j] == VAZIO)
                    {
                        tabuleiro[aux][j] = JOGAVEL;
                        aux = COLUNAS;
                    }
                }
            }

            // Vertical inferior;
            if (tabuleiro[i][j] == jogador_atual && tabuleiro[i - 1][j] == jogador_adversario)
            {
                for (aux = i; aux >= 0; aux--)
                {
                    if (tabuleiro[aux][j] == VAZIO)
                    {
                        tabuleiro[aux][j] = JOGAVEL;
                        aux = -1000;
                    }
                }
            }

            // Diagonal inferior direita;
            if (tabuleiro[i][j] == jogador_atual && tabuleiro[i + 1][j + 1] == jogador_adversario)
            {
                for (aux = 0; aux + 1 <= 7; aux++)
                {
                    if (tabuleiro[i + aux][j + aux] == VAZIO)
                    {
                        tabuleiro[i + aux][j + aux] = JOGAVEL;
                        aux = 1000;
                    }
                }
            }

            // Diagonal inferior esquerda;
            if (tabuleiro[i][j] == jogador_atual && tabuleiro[i + 1][j - 1] == jogador_adversario)
            {
                for (aux = 0; (aux + 1 <= 7 && j - aux >= 0); aux++)
                {
                    if (tabuleiro[i + aux][j - aux] == VAZIO)
                    {
                        tabuleiro[i + aux][j - aux] = JOGAVEL;
                        aux = 1000;
                    }
                }
            }

            // Diagonal superior direita;
            if (tabuleiro[i][j] == jogador_atual && tabuleiro[i - 1][j + 1] == jogador_adversario)
            {
                for (aux = 0; (i - aux >= 0 && j + aux <= 7); aux++)
                {
                    if (tabuleiro[i - aux][j + aux] == VAZIO)
                    {
                        tabuleiro[i - aux][j + aux] = JOGAVEL;
                        aux = 1000;
                    }
                }
            }

            // Diagonal superior esquerda;
            if (tabuleiro[i][j] == jogador_atual && tabuleiro[i - 1][j - 1] == jogador_adversario)
            {
                for (aux = 0; (i - aux >= 0 && j - aux >= 0); aux++)
                {
                    if (tabuleiro[i - aux][j - aux] == VAZIO)
                    {
                        tabuleiro[i - aux][j - aux] = JOGAVEL;
                        aux = 1000;
                    }
                }
            }
        }
    }

    // Verificar quantidade de jogadas possiveis;
    jogadas_possiveis = 0;
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            if (tabuleiro[i][j] == JOGAVEL)
            {
                jogadas_possiveis += 1;
            }
        }
    }
}

// Colocar a peca no tabuleiro no local permitido;
void colocar_peca()
{
    int passou_do_limite;
    int finalizar_looping = FALSE;
    do
    {
        imprimir_tabuleiro();
        printf("  *  Exemplo: 3 7\n");
        printf("  *  Selecione a linha e a coluna em que deseja colocar a peca: ");
        SetConsoleTextAttribute(console, FOREGROUND_GREEN);
        scanf("%d %d", &jogar_linha, &jogar_coluna);
        SetConsoleTextAttribute(console, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED);
        passou_do_limite = limite_maximo_tabuleiro();

        if (passou_do_limite == TRUE)
        {
            printf("\n[ERRO] Local invalido.\n");
        }

        else if (tabuleiro[jogar_linha][jogar_coluna] != JOGAVEL)
        {
            printf("\n[ERRO] Local invalido.\n");
        }

        else if (tabuleiro[jogar_linha][jogar_coluna] == JOGAVEL)
        {

            tabuleiro[jogar_linha][jogar_coluna] = jogador_atual;
            // Funcao para trocar as pecas;
            finalizar_looping = TRUE;
        }

    } while (finalizar_looping == FALSE);
}

// Mudança de cores;
void carregar_cores()
{
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(console, &consoleinfo);
    cor_padrao = consoleinfo.wAttributes;
}
