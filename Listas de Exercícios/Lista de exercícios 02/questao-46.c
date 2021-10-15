/*Fac ̧a um programa que gera um numero aleat  ́ orio de 1 a 1000. O usu  ́ ario deve tentar  ́
acertar qual o numero foi gerado, a cada tentativa o programa dever  ́ a informar se o  ́
chute e menor ou maior que o n  ́ umero gerado. O programa acaba quando o usu  ́ ario  ́
acerta o numero gerado. O programa deve informar em quantas tentativas o n  ́ umero foi  ́
descoberto.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random1, resultado, erros = 0;
    srand(time(NULL));
    random1 = rand() % 1000;

    do
    {
        printf("\nDigite um valor de 0 a 1000: ");
        scanf("%d", &resultado);

        if (resultado == random1)
        {
            printf("\nParabens voce acertou o numero gerado.");
            printf("\nVoce tentou acertar o numero %d vezes.\n\n", erros);
            system("pause");
            return 0;
        }
        else if (resultado > random1)
        {
            printf("\nO chute e menor que o numero gerado.\n");
            erros++;
        }
        else if (resultado < random1)
        {
            printf("\nO chute e maior que o numero gerado.\n");
            erros++;
        }
    }

    while (!(resultado == 0));
    return 0;
}