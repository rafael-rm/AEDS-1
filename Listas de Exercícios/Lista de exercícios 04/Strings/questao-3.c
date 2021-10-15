/*
3. Escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu
programa deve terminar quando uma idade negativa for digitada. Ao terminar, seu
programa deve escrever o nome e a idade das pessoas mais jovens e mais velhas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade[10], i, contador=0, maior, menor, indice_maior=0, indice_menor=0;
    char nome[50][10];

    for(i = 0; i < 10; i++){
        printf("Insira o nome da pessoa: ");
        setbuf(stdin, NULL);
        fgets(nome[i], 50, stdin);
        printf("Insira a idade: ");
        scanf("%d", &idade[i]);
        contador++;
        if(idade[i] < 0){
            i=10;
        }
    }
    contador = contador-1;
    maior=idade[0];
    menor=idade[0];
    for(i=0; i < contador; i++){
        printf("\nNome: %s", nome[i]);
        printf("Idade: %d", idade[i]);

        if(maior < idade[i]){
            maior = idade[i];
            indice_maior = i;
        }
        if(menor > idade[i]){
            menor = idade[i];
            indice_menor = i;
        }
    }

    printf("\n\nPessoa mais velha:\n");
    printf("\nNome: %s", nome[indice_maior]);
    printf("Idade: %d", idade[indice_maior]);

    printf("\n\nPessoa mais nova:\n");
    printf("\nNome: %s", nome[indice_menor]);
    printf("Idade: %d", idade[indice_menor]);
    return 0;
}