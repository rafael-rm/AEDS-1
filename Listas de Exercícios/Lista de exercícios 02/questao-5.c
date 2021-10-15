/*
5. Faça um programa que peça ao usuário para digitar 10 valores e some-os.
*/

#include <stdio.h>

int main(){
    int i;
    float numero_inserido, total=0;
    for(i = 0; i < 10; i++){
        printf("Insira o %do numero: ", i+1);
        scanf("%f", &numero_inserido);
        total = total+numero_inserido;
    }
    printf("\nA soma dos 10 valores digitados resulta em: %.2f\n", total);
    return 0;   
}