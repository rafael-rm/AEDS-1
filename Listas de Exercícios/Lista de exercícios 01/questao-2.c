/*
2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
número é inválido.
*/

#include <math.h>
#include <stdio.h>

int main()
{
    printf("Insira um valor positivo: ");
    float valor;
    scanf("%f", &valor);

    if (valor < 0)
    {
        printf("\nO valor nao pode ser negativo.\n");
    }
    else
    {
        float raiz;
        raiz = sqrt(valor);
        printf("\nA raiz de %.2f e %.2f.\n", valor, raiz);
    }
    return 0;
}