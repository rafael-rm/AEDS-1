/*
Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
1 Soma de 2 números.
2 Diferença entre 2 números (maior pelo menor).
3 Produto entre 2 números.
4 Divisão entre 2 números (o denominador não pode ser zero).
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float valor1, valor2;
    printf("Insira o primeiro numero: ");
    scanf("%f", &valor1);
    printf("\nInsira o segundo numero: ");
    scanf("%f", &valor2);

    printf("\n\nEscolha a operacao que deseja realizar com estes 2 valores inseridos:\n\n1 Soma de 2 numeros.0\n2 Diferenca entre 2 numeros (maior pelo menor).\n3 Produto entre 2 numeros.\n4 Divisao entre 2 numeros (o denominador nao pode ser zero).\n\n");
    int opcao;
    float operacao;
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao)
    {
    case 1:
        printf("Voce selecionou a primeira opcao.\n");
        operacao = valor1 + valor2;
        printf("\nA soma de %.2f + %.2f resulta em: %.2f\n", valor1, valor2, operacao);
        break;
    case 2:
        printf("Voce selecionou a segunda opcaoo.\n");
        operacao = fabs(valor1 - valor2);
        printf("\nA diferenca entre %.2f e %.2f e de: %.2f\n", valor1, valor2, operacao);
        break;
    case 3:
        printf("Voce selecionou a terceira opcao.\n");
        operacao = valor1 * valor2;
        printf("\nO produto de %.2f e %.2f e de: %.2f\n", valor1, valor2, operacao);
        break;
    case 4:
        if (valor2 == 0)
        {
            printf("Voce selecionou a quarta opcao.\n");
            printf("Porem voce nao pode ter um denonimador 0 em uma divisao.\n");
            break;
        }
        else
        {
            printf("Voce selecinou a quarta opcao.\n");
            operacao = valor1 / valor2;
            printf("O resultado da divisao de %.2f e %.2f resulta em: %.2f\n", valor1, valor2, operacao);
            break;
        }
    default:
        printf("\nVoce nao utilizou nenhuma das opcoes validas do menu.\n");
        break;
    }
    return 0;
}