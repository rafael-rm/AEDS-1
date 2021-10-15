/*
60. Fac ̧a um programa que leia varios n  ́ umeros, calcule e mostre:  ́
(a) A soma dos numeros digitados  ́
(b) A quantidade de numeros digitados  ́
(c) A media dos n  ́ umeros digitados  ́
(d) O maior numero digitado  ́
(e) O menor numero digitado  ́
(f) A media dos n  ́ umeros pares  ́

Finalize a entrada de dados caso o usuário informe o valor 0.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, soma=0, quantidade=0, media, maior, menor, media_pares, quantidade_pares=0, soma_pares=0;
do
    {
        system("cls");
        printf("\n\nInsira um valor: ");
        scanf("%d", &numero);
        if (numero == 0)
        {
            printf("\nFinalizando programa.\n");
        }
        else
        {
            soma+=numero;
            quantidade++;
            if(quantidade==1){
            maior=numero;
            menor=numero;}
            if(maior < numero)
            maior=numero;
            if(menor > numero)
            menor=numero;
            if(numero%2==0){
                quantidade_pares++;
                soma_pares+=numero;
            }
        }
    } while (numero != 0);
    printf("\nA soma dos numeros digitados e de: %d", soma);
    printf("\nA quantidade de numeros digitados foi de: %d", quantidade);
    printf("\nA media dos numeros digitados e de: %.2f", (float) (soma/quantidade));
    printf("\nO maior numero digitado foi: %d", maior);
    printf("\nO menor numero digitado foi: %d", menor);
    printf("\nA media dos numeros pares foi de: %.2f", (float) (soma_pares/quantidade_pares));
    printf("\n");
    return 0;
}