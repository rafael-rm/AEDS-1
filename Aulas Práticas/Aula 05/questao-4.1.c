/*
Ler 5 números que devem ser digitados por usuários e armazená-los em um arranjo. Em seguida,
obtenha o maior e o menor valor armazenado, além da média dos valores.
*/

int main()
{
    int a[5], menor, maior, media;
    int produtoescalar;

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
    maior = a[0];

    if (menor > a[1])
        menor = a[1];

    if (menor > a[2])
        menor = a[2];

    if (menor > a[3])
        menor = a[3];

    if (menor > a[4])
        menor = a[4];

    if (maior < a[1])
        maior = a[1];

    if (maior < a[2])
        maior = a[2];

    if (maior < a[3])
        maior = a[3];

    if (maior < a[4])
        maior = a[4];

    media = (a[0] + a[1] + a[2] + a[3] + a[4]) / 5;
    printf("\nMaior numero do arranjo: %d", maior);
    printf("\nMenor numero do arranjo: %d", menor);
    printf("\nMedia do arranjo: %d", media);
    return 0;
}