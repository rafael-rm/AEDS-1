/*Para um array A com 5 números inteiros, formular um algoritmo que
determine o maior elemento deste array
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numeros[5] = {90, 10, 88, 54, 101}, i;
    int maior = numeros[0];

    for(i = 0; i < 5; i++){
        if(maior < numeros[i]){
            maior = numeros[i];
        }
    }
    printf("\nO maior numero da array e: %d\n", maior);
}