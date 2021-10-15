/*
Construa um programa que leia vários números inteiros e mostre qual foi o maior e o menor valor
fornecido.
Exemplo de saída:
Quantos números deseja digitar? 5
Digite o número 1: 6
Digite o número 2: 3
Digite o número 3: 5
Digite o número 4: 2
Digite o número 5: 8
O maior número digitado foi 8
O menor número digitado foi 2
Dica: Quando o usuário digita seu primeiro número, este é sempre tanto o maior quanto o menor
número até então.
*/

#include <stdio.h>

int main()
{
    int leituras, repeticoes = 2, numero;
    printf("\nQuantos numeros voce deseja ler?: ");
    scanf("%d", &leituras);

    printf("Insira o numero 1: ");
    scanf("%d", &numero);

    int maior, menor;
    maior = numero;
    menor = numero;

    for (repeticoes = 2; repeticoes <= leituras; repeticoes++)
    {

        printf("Insira o numero %d: ", repeticoes);
        scanf("%d", &numero);
        if(numero > maior){
            maior = numero;
        }
        else if(numero < menor){
            menor = numero;
        }
    }
    printf("\nO maior numero digitado foi %d", maior);
    printf("\nO menor numero digitado foi %d\n", menor);
    return 0;
}