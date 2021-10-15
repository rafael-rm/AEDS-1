/*
20. Ler uma sequencia de n ˆ umeros inteiros e determinar se eles s  ́ ao pares ou n  ̃ ao. Dever  ̃ a ́
ser informado o numero de dados lidos e n  ́ umero de valores pares. O processo termina  ́
quando for digitado o numero 1000.
*/

#include <stdio.h>

int main(){
    int numero, pares=0, total_lido=0;
    do {
        printf("\nInsira um numero inteiro: ");
        scanf("%d", &numero);
        if(numero != 1000){
        if(numero % 2 == 0){
            pares++;
            printf("O numero informado e par.\n");
        }
        total_lido++;
        }
    } while (numero != 1000);
    printf("O processo foi finalizado pois voce digitou o numero 1000.\n");
    printf("Total de numeros lidos: %d\n", total_lido);
    printf("Total de numeros pares lidos: %d\n", pares);
    return 0;
}