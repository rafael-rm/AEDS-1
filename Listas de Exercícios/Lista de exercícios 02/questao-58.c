/*58. Fac ̧a um programa que some os numeros primos existentes entre  ́ a e b, onde a e b sao ̃
numeros informados pelo usu  ́ ario.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, i, j, divisoes = 0, soma_primos = 0, auxiliar;
    do
    {
        printf("\nInsira dois numeros inteiros e positivos: ");
        scanf("%d%d", &numero1, &numero2);
        if (numero1 <= 0 || numero2 <= 0)
        {
            system("cls");
            printf("O numero inserido nao e valido.\n\n");
            system("pause");
            system("cls");
        }
    } while (numero1 <= 0 || numero2 <= 0);

    if(numero1 > numero2){
        auxiliar = numero2;
        numero2 = numero1;
        numero1 = auxiliar;
    }

    if(numero1 == numero2){
        printf("\nOs 2 numeros sao iguais, logo nao existe distancia entre eles.\n");
        return 0;
    }

    if (numero1 < numero2)
    {
        for (i = numero1; i < numero2; i += 2)
        {
            divisoes = 0;
            for (j = 1; j < i; j += 2)
            {
                if (i % j == 0)
                {
                    divisoes += 2;
                }
            }
            if (divisoes == 2)
            {
                soma_primos += i;
                printf("\n%d", i);
            }
        }
        printf("\n\nA soma dos numeros primos no intervalo de %d a %d e de: %d\n", numero1, numero2, soma_primos);
        return 0;
    }
    return 0;
}