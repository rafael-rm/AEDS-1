/*Fac ̧a um algoritmo que converta uma velocidade expressa em km/h para m/s e vice
versa. Voce deve criar um menu com as duas opc ̧ ˆ oes de convers  ̃ ao e com uma opc ̧  ̃ ao ̃
para finalizar o programa. O usuario poder  ́ a fazer quantas convers  ́ oes desejar, sendo  ̃
que o programa so ser  ́ a finalizado quando a opc ̧  ́ ao de finalizar for escolhida.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int velocidade, opcao;
    float mult, mult1;

    do
    {

        printf("[1] Conversao de km/h para m/s.\n[2] Conversao de m/s para km/h.\n[3] Finalizar programa.");
        printf("\nDigite qual opcao deseja: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("\nDigite a velocidade: ");
            scanf("%d", &velocidade);

            mult = velocidade * 3.6;

            printf("\nO valor da conversao de km/h para m/s = %.3f.\n\n", mult);
        }

        else if (opcao == 2)
        {
            printf("\nDigite a velocidade: ");
            scanf("%d", &velocidade);

            mult1 = velocidade / 3.6;

            printf("\nO valor da conversao de m/s para km/h = %.3f.\n\n", mult1);
        }

        else if (opcao == 3)
        {
            printf("Finalizando o programa");
        }

    } while (!(opcao == 3));

    return 0;
}