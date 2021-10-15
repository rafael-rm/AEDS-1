/*
2. Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo:
“0011001” -> 3
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char string[50];
    int contador_i=0;
    printf("Insira a string: ");
    setbuf(stdin, NULL);
    fgets(string, 50, stdin);
    for(int i=0; string[i] != '\0'; i++){
        if(string[i] == '1'){
            contador_i++;
        }
    }
    printf(" -> %d", contador_i);
    return 0;
}