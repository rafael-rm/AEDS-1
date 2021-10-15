#include <stdio.h>

int main(){
    printf("Quantos valores deseja ler?: ");
    int leituras;
    scanf("%d", &leituras);

    int par, impar, repeticoes;
    par = 0;
    impar = 0;
    repeticoes = 1;
    while(repeticoes <= leituras){
        int valor;
        printf("\nInsira o %do valor: ", repeticoes);
        scanf("%d", &valor);
        repeticoes = repeticoes + 1;
        if(valor % 2 == 0){
            par = par + 1;
        }
        else{
            impar = impar + 1;
        }
    }
    printf("\n%d valores inseridos sao pares.", par);
    printf("\n%d valores sao impares\n", impar);
    return 0;
}