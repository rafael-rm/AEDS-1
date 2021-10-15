/*
2a Questão
Fazer um algoritmo que:
(a) Crie um arranjo de 5 elementos e o preencha de números
(b) Procure a posição do menor elemento deste arranjo
(c) Troque o menor elemento com elemento da primeira posição
(d) Imprima os elementos do arranjo
*/

#include <stdio.h>

int main()
{
    int a[5], menor, local_menor;

    printf("Digite o primeiro elemento do arranjo A: \n");
    scanf("%d", &a[0]);
    printf("Digite o segundo elemento do arranjo A: \n");
    scanf("%d", &a[1]);
    printf("Digite o terceiro elemento do arranjo A: \n");
    scanf("%d", &a[2]);
    printf("Digite o quarto elemento do arranjo A: \n");
    scanf("%d", &a[3]);
    printf("Digite o quinto elemento do arranjo A: \n");
    scanf("%d", &a[4]);

    menor = a[0];
    local_menor = 0;

    if (menor > a[1])
    {
        menor = a[1];
        local_menor = 1;
    }

    if (menor > a[2])
    {
        menor = a[2];
        local_menor = 2;
    }

    if (menor > a[3])
    {
        menor = a[3];
        local_menor = 3;
    }

    if (menor > a[4])
    {
        menor = a[4];
        local_menor = 4;
    }

    a[local_menor] = a[0];
    a[0] = menor;
    printf("\nO menor elemento deste arranjo esta na posicao a[%d]", local_menor);
    printf("\nArranjo com novas posicoes: %d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
    return 0;
}