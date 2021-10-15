/*
18. Escreva um algoritmo que leia certa quantidade de numeros e imprima o maior deles e  ́
quantas vezes o maior numero foi lido. A quantidade de n  ́ umeros a serem lidos deve ser  ́
fornecida pelo usuario.
*/

#include <stdio.h>

int main(){
    int leituras, i, contador_leituras=0;
    float valor, maior;
    printf("\nEscreva quantos numeros deseja ler: ");
    scanf("%d", &leituras);

    for(i = 0; i < leituras; i++){
        printf("Digite o %do valor: ", i+1);
        scanf("%f", &valor);
        if(i == 0){
            maior = valor;
            contador_leituras++;
        }
        if(valor > maior){
            maior = valor;
            contador_leituras++;
        }
    }
    printf("\nO maior numero e: %.2f", maior);
    printf("\nO maior numero foi lido %d vezes.\n", contador_leituras);
    return 0;
}