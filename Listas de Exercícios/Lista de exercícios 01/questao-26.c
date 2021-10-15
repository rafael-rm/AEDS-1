/*
26. Leia a distancia em ˆ Km e a quantidade de litros de gasolina consumidos por um carro
em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
a tabela abaixo:

CONSUMO (Km/l) MENSAGEM
menor que | 8 | Venda o carro!
entre 8 e | 14 | Economico!
maior que | 12 | Super economico!
*/

#include <stdio.h>

int main(){
    float km_percorrido, litros_gasolina, consumo;
    printf("\nQual a distancia percorrida em KM: ");
    scanf("%f", &km_percorrido);
    printf("\nQuantos litros de gasolina foram consumidos: ");
    scanf("%f", &litros_gasolina);

    consumo = km_percorrido/litros_gasolina;

    if(consumo<8){
        printf("\nVenda o carro!");
    }
    else if(consumo >= 8 && consumo <= 14){
        printf("\nEconomico!");
    }
    else{
        printf("\nSuper economico!");
    }
    printf("\n");
    return 0;
}