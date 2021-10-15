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
    int i, arranjo[5], menor, local_do_menor;
    for(i = 0; i < 5; i++)
    {
        printf("\nInsira o %do numero do arranjo: ", i + 1);
        scanf("%d", &arranjo[i]);
    }
    for(i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            menor = arranjo[0];
        }
        if (arranjo[i] < menor)
        {
            menor = arranjo[i];
            local_do_menor = i;
        }
    }
    printf("\nA posicao do menor elemento e: arranjo[%d]\n", local_do_menor);
    arranjo[local_do_menor] = arranjo[0];
    arranjo[0] = menor;
    printf("Novos elementos do arranjo: ");
    for(i = 0; i < 5; i++){
        printf("%d ", arranjo[i]);
    }
    printf("\n");
    return 0;
}