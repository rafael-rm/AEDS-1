/*
Ler 5 números que devem ser digitados por usuários e armazená-los em um arranjo. Em seguida,
obtenha o maior e o menor valor armazenado, além da média dos valores.
*/

#include <stdio.h>

int main()
{
    int i, arranjo[5], maior, menor, total=0;
    for (i = 0; i < 5; i++)
    {
        printf("Insira o %do numero do arranjo: ", i + 1);
        scanf("%d", &arranjo[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if(i == 0){
            maior = arranjo[i];
            menor = arranjo[i];
        }

        if (arranjo[i] > maior)
        maior = arranjo[i];
        if (arranjo[i] < menor)
        menor = arranjo[i];

        total = total + arranjo[i];
    }
    printf("\nO maior valor do arranjo e: %d", maior);
    printf("\nO menor valor do arranjo e: %d", menor);
    float media = total/5.0;
    printf("\nA media do arranjo e: %.2f\n", media);
    return 0;
}