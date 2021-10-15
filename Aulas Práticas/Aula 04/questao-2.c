/*
Escrever um algoritmo que lê n valores, um de cada vez, e conta quantos destes valores são pares,
escrevendo esta informação.
Exemplo de saída:
Quantos valores deseja ler? 7
Digite um número: 6
Digite um número: 3
Digite um número: 5
Digite um número: 4
Digite um número: 2
Digite um número: 8
Digite um número: 5
Você digitou 4 números pares e 3 números ímpares
*/

#include <stdio.h>

int main(){
    int leituras, repeticoes, pares, impares, numero;
    printf("\nQuantos valores deseja ler?: ");
    scanf("%d", &leituras);
    repeticoes = 0;
    pares = 0;
    impares = 0;

    while (repeticoes < leituras)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        repeticoes++;
        if(numero % 2 == 0){
            pares++;
        }
        else{
            impares++;
        }

    }
    printf("\nVoce digitou %d numeros pares e %d numeros impares.\n", pares, impares);
    return 0;   
}