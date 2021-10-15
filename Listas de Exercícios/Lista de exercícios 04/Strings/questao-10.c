/*
10. Faça um programa que contenha um menu com as seguintes opções:
a) Ler uma string S1 (tamanho máximo 20 caracteres);
b) Imprimir o tamanho da string S1;
c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir
o resultado da comparação;
d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da
concatenação;
e) Imprimir a string S1 de forma reversa;
f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere
deve ser informado pelo usuário;
g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2.
Os caracteres C1 e C2 serão lidos pelo usuário;
h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo
usuário;
i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir
de qual posição deve ser criada a substring e qual é o tamanho da substring.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char S1[20] = {'\0'}, S2[20];
    int opcao;
    printf("\nSelecione uma opcao:\n");
    printf("\n(1) Ler uma string S1 (Max: 20 caracteres);");
    printf("\n(2) Imprimir tamanho da string S1;");
    printf("\n(3) Comparar a string S1 com uma nova string S2;");
    printf("\n(4) Concatenar a string S1 com uma nova string S2");
    printf("\n(5) Imprimir a string S1 de forma reversa;");
    printf("\n(6) Contar quantas vezes um dado caractere aparece na string S1;");
    printf("\n(7) Substituir a 1a. ocorrencia do caractere C1 da string S1 pelo caractere C2;");
    printf("\n(8) Verificar se uma string S2 e substring de S1;");
    printf("\n(9) Retornar uma substring da string S1;");
    printf("\n(0) Encerrar o algoritmo.");
    do
    {
        printf("\n\nInsira a opcao: ");
        scanf("%d", &opcao);
        while (opcao < 0 || opcao > 9)
        {
            printf("\nOpcao invalida! Insira novamente a opcao desejada: ");
            scanf("%d", &opcao);
        }
        if (opcao == 0)
        {
            printf("\nEncerrando!\n");
            break;
        }
        else if (opcao == 1)
        {
            printf("Digite a string S1(Max: 20 caracteres): ");
            setbuf(stdin, NULL);
            gets(S1);
            printf("String inserida: %s.", S1);
        }
        else if (opcao == 2)
        {
            printf("Tamanho da string S1: %d.", strlen(S1));
        }
        else if (opcao == 3)
        {
            if (S1[0] == '\0')
            {
                printf("String S1 ainda nao informada, volte e selecione a opcao 1.\n");
            }
            else
            {
                printf("Digite a string S2(Max: 20 caracteres): ");
                setbuf(stdin, NULL);
                gets(S2);
                if (strcmp(S1, S2) == 0)
                {
                    printf("Strings iguais!");
                }
                else
                {
                    printf("Strings diferentes!");
                }
            }
        }
        else if (opcao == 4)
        {
            if (S1[0] == '\0')
            {
                printf("String S1 ainda nao informada, volte e selecione a opcao 1.\n");
            }
            else
            {
                int aux = strlen(S1);
                S1[aux + 1] = '\0';
                S1[aux] = ' ';
                printf("Digite a string S2(Max: 20 caracteres): ");
                setbuf(stdin, NULL);
                gets(S2);
                strcat(S1, S2);
                printf("A nova string S1 concatenada anteriormente por S1 e S2: %s.", S1);
            }
        }
        else if (opcao == 5)
        {
            if (S1[0] == '\0')
            {
                printf("String S1 ainda nao informada, volte e selecione a opcao 1.\n");
            }
            else
            {
                printf("A string S1 de forma reversa: ");
                for (int i = strlen(S1) - 1; i >= 0; i--)
                {
                    printf("%c", S1[i]);
                }
            }
        }
        else if (opcao == 6)
        {
            if (S1[0] == '\0')
            {
                printf("String S1 ainda nao informada, volte e selecione a opcao 1.\n");
            }
            else
            {
                char caracter;
                int cont = 0;
                printf("Insira o caracter: ");
                setbuf(stdin, NULL);
                scanf("%c", &caracter);
                for (int i = 0; S1[i] != '\0'; i++)
                {
                    if (S1[i] == caracter || S1[i] == toupper(caracter))
                    {
                        cont++;
                    }
                }
                printf("O caracter %c aparece %d vezes na string S1.", caracter, cont);
            }
        }
        else if (opcao == 7)
        {
            if (S1[0] == '\0')
            {
                printf("String S1 ainda nao informada, volte e selecione a opcao 1.\n");
            }
            else
            {
                char C1, C2;
                printf("Digite o caracter a ser substituido: ");
                setbuf(stdin, NULL);
                scanf("%c", &C1);
                int aux = 0;
                while (aux == 0)
                {
                    for (int i = 0; i < strlen(S1); i++)
                    {
                        if (S1[i] == C1)
                        {
                            aux = i + 1;
                            break;
                        }
                    }
                    if (aux == 0)
                    {
                        printf("Caracter nao encontrado na string S1! Insira novamente: ");
                        setbuf(stdin, NULL);
                        scanf("%c", &C1);
                    }
                }
                printf("Digite o caracter a ser inserido: ");
                setbuf(stdin, NULL);
                scanf("%c", &C2);
                S1[aux - 1] = C2;
                printf("Nova string S1: %s.", S1);
            }
        }
        else if (opcao == 8)
        {
            if (S1[0] == '\0')
            {
                printf("String S1 ainda nao informada, volte e selecione a opcao 1.\n");
            }
            else
            {
                printf("Digite a string S2(Max: 20 caracteres): ");
                setbuf(stdin, NULL);
                gets(S2);
                int cont = 0;
                for (int i = 0; i < strlen(S1); i++)
                {
                    if (tolower(S1[i]) == tolower(S2[0]))
                    {
                        for (int j = i, k = 0; k < strlen(S2); j++, k++)
                        {
                            if (tolower(S1[j]) == tolower(S2[k]))
                            {
                                cont++;
                            }
                        }
                    }
                    if (cont == strlen(S2))
                    {
                        printf("S2 e substring de S1!");
                        break;
                    }
                    cont = 0;
                }
                if (cont == 0)
                {
                    printf("S2 nao e substring de S1!");
                }
            }
        }
        else if (opcao == 9)
        {
            if (S1[0] == '\0')
            {
                printf("String S1 ainda nao informada, volte e selecione a opcao 1.\n");
            }
            else
            {
                int inicio, fim;
                printf("Digite a partir de qual posicao deve ser criada a substring: ");
                scanf("%d", &inicio);
                while (inicio < 1 || inicio > strlen(S1))
                {
                    printf("Valor invalido! Confira o tamanho da string e insira novamente: ");
                    scanf("%d", &inicio);
                }
                printf("Digite o tamanho dessa substring: ");
                scanf("%d", &fim);
                while (fim < inicio || fim > strlen(S1))
                {
                    printf("Valor invalido! Confira o tamanho da string e insira novamente: ");
                    scanf("%d", &fim);
                }
                inicio--;
                fim += inicio;
                for (int i = 0; inicio < fim; inicio++, i++)
                {
                    S2[i] = S1[inicio];
                }
                printf("Substring criada: %s.", S2);
            }
        }
    } while (opcao != 0);
    return 0;
}
