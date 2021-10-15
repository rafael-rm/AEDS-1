/* Crie um programa que:

(a) Aloque dinamicamente um array de 5 números inteiros;
(b) Peça para o usuário digitar os 5 números no espaço alocado;
(c) Mostre na tela os 5 números;
(d) Libere a memória alocada;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *array;
    array = (int*) calloc(5, sizeof(int));

    printf("Digite 5 valores no espaco alocado:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("\n%d", array[i]);
    }
    return 0;
}