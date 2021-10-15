/* 1. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
números maiores que 0.
*/

#include <stdio.h>

int main(){
    int i, numero=0;
    printf("\nCinco primeiros numeros multiplos de 3 sao: ");
    for(i = 0; i < 5; i++){
        numero = numero+3;
        printf("%d ", numero);
    }
    printf("\n");
    return 0;
}