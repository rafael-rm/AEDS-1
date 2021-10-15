/*
33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o prec ̧o antigo,
calcule e escreva o prec ̧o novo, e escreva uma mensagem em func ̧ao do prec ̧o novo (de  ̃
acordo com a segunda tabela).

PREC ̧ O ANTIGO PERCENTUAL DE AUMENTO
ate R$ 50  ́ 5%
entre R$ 50 e R$ 100 10%
acima de R$ 100 15%
*/

#include <stdio.h>

int main(){
    float valor_antigo, valor_novo;
    printf("\nInsira o valor do produto: ");
    scanf("%f", &valor_antigo);

    if(valor_antigo <= 50){
        valor_novo = valor_antigo + (0.05*valor_antigo);
        printf("\nNovo valor: %.2f", valor_novo);
    }
    else if(valor_antigo > 50 && valor_antigo <= 100){
        valor_novo = valor_antigo + (0.10*valor_antigo);
        printf("\nNovo valor: %.2f", valor_novo);
    }
    else if(valor_antigo > 100){
        valor_novo = valor_antigo + (0.15*valor_antigo);
        printf("\nNovo valor: %.2f", valor_novo);
    }
    printf("\n");
    return 0;
}