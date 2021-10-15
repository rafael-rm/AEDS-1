/*
19. Escreva um algoritmo que leia um numero inteiro entre 100 e 999 e imprima na sa  ́  ́ıda
cada um dos algarismos que compoem o n  ̃ umero
*/

#include <stdio.h>

int main(){
    int numero, algorismo1, algorismo2, algorismo3;
    do {
        printf("Escreva um numero entre 100 e 999: ");
        scanf("%d", &numero);
        if(numero <= 100 || numero >= 1000){
            printf("Numero invalido, ");
        }
    } while (!(numero >= 100 && numero <= 999));

    algorismo1 = numero % 10;
    algorismo2 = ((numero % 100) - algorismo1)/10;
    algorismo3 = ((numero % 1000) - algorismo2 - algorismo1)/100;
    printf("\nO numero lido foi: %d\n\n", numero);
    printf("Algorismos:    %d    %d    %d\n", algorismo3, algorismo2, algorismo1);
    return 0;
}