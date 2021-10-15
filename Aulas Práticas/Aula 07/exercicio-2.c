/*
Faça um programa que leia um nome, e em seguida calcule e retorne quantas letras esse nome tem. Obs : não use a função strlen;
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int i, letras=0;
    char nome[20];
    printf("\nInsira um nome: ");
    setbuf(stdin, NULL);
    fgets(nome, 20, stdin);

    for(i=0; nome[i] != '\n'; i++){
    if(nome[i] != ' ')
    letras++;
    }
    printf("\nO total de letras desse nome e de: %d", letras);
    return 0;
}