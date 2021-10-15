/*
3. Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
iniciando em 10 e terminando em 0. Mostrar uma mensagem ͞FIM!͟ após a contagem.
*/

#include <stdio.h>

int main(){
    int i = 11;
    printf("\nContagem regressiva:\n");
    while(i > 0){
        i--;
        printf("\n%d", i);
    }
    printf("\nFIM!\n");
    return 0;
}