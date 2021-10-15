/*
8. Fazer um programa para simular uma agenda de telefones. Para cada pessoa devem-
se ter os seguintes dados:

 Nome;
 E-mail;
 Endereço (contendo campos para Rua, número, complemento, bairro, cep,
cidade, estado, país);
 Telefone (contendo campo para DDD e número);
 Data de aniversário (contendo campo para dia, mês, ano);
 Observações: Uma linha (string) para alguma observação especial;
 Crie tantas estruturas quanto forem necessárias para melhor representar o
problema;
a) Definir a estrutura acima.
b) Declarar a variável agenda (vetor) com capacidade de agendar até 100 nomes.
c) Definir um bloco de instruções busca por primeiro nome: Imprime os dados da
pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas).
d) Definir um bloco de instruções busca por mês de aniversário: Imprime os dados
de todas as pessoas que fazem aniversário nesse mês.
e) Definir um bloco de instruções busca por dia e mês de aniversário: Imprime os
dados de todas as pessoas que fazem aniversário nesse dia e mês.
f) Definir um bloco de instruções insere pessoa: Insere por ordem alfabética de
nome.
g) Definir um bloco de instruções retira pessoa: Retira todos os dados dessa
pessoa e desloca todos os elementos seguintes do vetor para a posição anterior.
h) Definir um bloco de instruções imprime agenda com as opções:
 Imprime nome, telefone e e-mail.
 Imprime todos os dados.
i) O programa deve ter um menu principal oferecendo as opções acima.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct agenda
{
    char nome[50], email[50], rua[50], numero[10], complemento[50], bairro[50];
    char cep[50], cidade[50], estado[10], pais[30], ddd[10], telefone[20], observacao[100];
    int dia, mes, ano;
};

int main()
{
    struct agenda contatos[100];
    int opcao, total = 0;

    printf("\nSelecione uma opcao:\n");
    printf("\n(1) Inserir contato;");
    printf("\n(2) Buscar contato por nome;");
    printf("\n(3) Buscar contato por mes de aniversario;");
    printf("\n(4) Buscar contato por dia e mes de aniversario;");
    printf("\n(5) Retirar contato;");
    printf("\n(6) Imprimir agenda com nome, telefone e e-mail;");
    printf("\n(7) Imprimir agenda com todas informacoes;");
    printf("\n(0) Encerrar.\n");

    do
    {
        printf("\nInsira a opcao desejada: ");
        scanf("%d", &opcao);
        while (opcao < 0 || opcao > 7)
        {
            printf("Opcao invalida! Insira novamente a opcao desejada: ");
            scanf("%d", &opcao);
        }
        if (opcao == 1)
        {
            if (total == 99)
            {
                printf("\nAgenda lotada!");
            }
            else
            {
                printf("\n> Cadastro de contato\n");
                printf("Insira o nome: ");
                setbuf(stdin, NULL);
                gets(contatos[total].nome);
                printf("Insira o e-mail: ");
                setbuf(stdin, NULL);
                gets(contatos[total].email);
                printf("Insira a rua: ");
                setbuf(stdin, NULL);
                gets(contatos[total].rua);
                printf("Insira o numero: ");
                setbuf(stdin, NULL);
                gets(contatos[total].numero);
                printf("Insira o complemento: ");
                setbuf(stdin, NULL);
                gets(contatos[total].complemento);
                printf("Insira o bairro: ");
                setbuf(stdin, NULL);
                gets(contatos[total].bairro);
                printf("Insira o CEP: ");
                setbuf(stdin, NULL);
                gets(contatos[total].cep);
                printf("Insira a cidade: ");
                setbuf(stdin, NULL);
                gets(contatos[total].cidade);
                printf("Insira o estado: ");
                setbuf(stdin, NULL);
                gets(contatos[total].estado);
                printf("Insira o pais: ");
                setbuf(stdin, NULL);
                gets(contatos[total].pais);
                printf("Insira o telefone: ");
                setbuf(stdin, NULL);
                gets(contatos[total].telefone);
                printf("Insira a observacao: ");
                setbuf(stdin, NULL);
                gets(contatos[total].observacao);
                printf("Insira a data de nascimento (dd mm aaaa): ");
                scanf("%d %d %d", &contatos[total].dia, &contatos[total].mes, &contatos[total].ano);
                while (contatos[total].dia < 1 || contatos[total].dia > 31 || contatos[total].mes < 1 || contatos[total].mes > 12 || contatos[total].ano < 1)
                {
                    printf("Data invalida! Insira novamente (dd mm aaaa): ");
                    scanf("%d %d %d", &contatos[total].dia, &contatos[total].mes, &contatos[total].ano);
                }
                total++;
            }
        }
        else if (opcao == 2)
        {
            char busca[50];
            printf("\nInsira o nome desejado para busca: ");
            setbuf(stdin, NULL);
            gets(busca);
            strlwr(busca);
            int cont, encontrados = 0;
            for (int i = 0; i < total; i++)
            {
                cont = 0;
                for (int j = 0; j < strlen(contatos[i].nome); j++)
                {
                    if (tolower(contatos[i].nome[j]) == busca[0])
                    {
                        for (int k = j, l = 0; l < strlen(busca); k++, l++)
                        {
                            if (tolower(contatos[i].nome[k]) == busca[l])
                            {
                                cont++;
                            }
                        }
                    }
                    if (cont == strlen(busca))
                    {
                        printf("\n> %do. encontrado", ++encontrados);
                        printf("\nNome: %s", contatos[i].nome);
                        printf("\nE-mail: %s ", contatos[i].email);
                        printf("\nRua: %s", contatos[i].rua);
                        printf("\nNumero: %s", contatos[i].numero);
                        printf("\nComplemento: %s", contatos[i].complemento);
                        printf("\nBairro: %s", contatos[i].bairro);
                        printf("\nCEP: %s", contatos[i].cep);
                        printf("\nCidade: %s", contatos[i].cidade);
                        printf("\nEstado: %s", contatos[i].estado);
                        printf("\nPais: %s", contatos[i].pais);
                        printf("\nTelefone: %s", contatos[i].telefone);
                        printf("\nObservacao: %s", contatos[i].observacao);
                        printf("\nData de nascimento: %d/%d/%d\n", contatos[i].dia, contatos[i].mes, contatos[i].ano);
                        break;
                    }
                }
            }
            if (encontrados == 0)
            {
                printf("\nNenhum contato encontrado!\n");
            }
        }
        else if (opcao == 3)
        {
            int mes;
            printf("\nInsira o mes de aniversario desejado para busca: ");
            scanf("%d", &mes);
            while (mes < 1 || mes > 12)
            {
                printf("\nValor invalido! Insira novamente o mes desejado para busca: ");
                scanf("%d", &mes);
            }
            int encontrados = 0;
            for (int i = 0; i < total; i++)
            {
                if (mes == contatos[i].mes)
                {
                    printf("\n\n> %do. encontrado", ++encontrados);
                    printf("\nNome: %s", contatos[i].nome);
                    printf("\nE-mail: %s ", contatos[i].email);
                    printf("\nRua: %s", contatos[i].rua);
                    printf("\nNumero: %s", contatos[i].numero);
                    printf("\nComplemento: %s", contatos[i].complemento);
                    printf("\nBairro: %s", contatos[i].bairro);
                    printf("\nCEP: %s", contatos[i].cep);
                    printf("\nCidade: %s", contatos[i].cidade);
                    printf("\nEstado: %s", contatos[i].estado);
                    printf("\nPais: %s", contatos[i].pais);
                    printf("\nTelefone: %s", contatos[i].telefone);
                    printf("\nObservacao: %s", contatos[i].observacao);
                    printf("\nData de nascimento: %d/%d/%d\n", contatos[i].dia, contatos[i].mes, contatos[i].ano);
                }
            }
            if (encontrados == 0)
            {
                printf("\nNenhum contato encontrado!\n");
            }
        }
        else if (opcao == 4)
        {
            int mes, dia;
            printf("\nInsira o dia e o mes de aniversario desejado para busca (dd mm): ");
            scanf("%d %d", &dia, &mes);
            while (dia < 1 || dia > 31 || mes < 1 || mes > 12)
            {
                printf("\nValor invalido! Insira novamente o dia e o mes desejado para busca(dd mm): ");
                scanf("%d", &mes);
            }
            int encontrados = 0;
            for (int i = 0; i < total; i++)
            {
                if (mes == contatos[i].mes && dia == contatos[i].dia)
                {
                    printf("\n\n> %do. encontrado", ++encontrados);
                    printf("\nNome: %s", contatos[i].nome);
                    printf("\nE-mail: %s ", contatos[i].email);
                    printf("\nRua: %s", contatos[i].rua);
                    printf("\nNumero: %s", contatos[i].numero);
                    printf("\nComplemento: %s", contatos[i].complemento);
                    printf("\nBairro: %s", contatos[i].bairro);
                    printf("\nCEP: %s", contatos[i].cep);
                    printf("\nCidade: %s", contatos[i].cidade);
                    printf("\nEstado: %s", contatos[i].estado);
                    printf("\nPais: %s", contatos[i].pais);
                    printf("\nTelefone: %s", contatos[i].telefone);
                    printf("\nObservacao: %s", contatos[i].observacao);
                    printf("\nData de nascimento: %d/%d/%d\n", contatos[i].dia, contatos[i].mes, contatos[i].ano);
                }
            }
            if (encontrados == 0)
            {
                printf("\nNenhum contato encontrado!\n");
            }
        }
        else if (opcao == 5)
        {
            printf("\nFucao em manutencao, impossivel de ser realizada! Retorne posteriormente.\n");
        }
        else if (opcao == 6)
        {
            for (int i = 0; i < total; i++)
            {
                printf("\n\n> %do. contato", i + 1);
                printf("\nNome: %s", contatos[i].nome);
                printf("\nE-mail: %s ", contatos[i].email);
                printf("\nTelefone: %s", contatos[i].telefone);
            }
        }
        else if (opcao == 7)
        {
            for (int i = 0; i < total; i++)
            {
                printf("\n\n> %do. contato", i + 1);
                printf("\nNome: %s", contatos[i].nome);
                printf("\nE-mail: %s ", contatos[i].email);
                printf("\nRua: %s", contatos[i].rua);
                printf("\nNumero: %s", contatos[i].numero);
                printf("\nComplemento: %s", contatos[i].complemento);
                printf("\nBairro: %s", contatos[i].bairro);
                printf("\nCEP: %s", contatos[i].cep);
                printf("\nCidade: %s", contatos[i].cidade);
                printf("\nEstado: %s", contatos[i].estado);
                printf("\nPais: %s", contatos[i].pais);
                printf("\nTelefone: %s", contatos[i].telefone);
                printf("\nObservacao: %s", contatos[i].observacao);
                printf("\nData de nascimento: %d/%d/%d\n", contatos[i].dia, contatos[i].mes, contatos[i].ano);
            }
        }
        else
        {
            printf("\nEncerrando!\n");
            break;
        }

    } while (opcao != 0);
    return 0;
}
