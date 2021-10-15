/*
Ler 5 números que devem ser digitados por usuários e armazená-los em um arranjo. Em seguida,
obtenha outro arranjo, cujos componentes são o triplo dos respectivos componentes do primeiro
arranjo.
*/

#include <stdio.h>

int main()
{
    int a[5], b[5];

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

    b[0] = a[0] * 3;
    b[1] = a[1] * 3;
    b[2] = a[2] * 3;
    b[3] = a[3] * 3;
    b[4] = a[4] * 3;

    printf("Novo arranjo triplo de A: %d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
    return 0;
}