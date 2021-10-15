/* Escreva um programa para encontrar as raízes de uma equação do segundo grau:
ax² + bx + c = 0
Os coeficientes da equação são reais. O programa faz a alocação de 3 posições de memória para esses coeficientes, inicializando-os com o valor zero.
O programa efetua a leitura dos coeficientes através do teclado, e a seguir, calcula o valor das raízes existentes. Caso não existam raízes reais, o programa deve informar este fato ao usuário.
*/

#include <stdio.h>
#include <math.h>

int main(){
    float A, B, C;
    printf("Insira os 3 coeficientes da equacao (A, B e C): ");
    scanf("%f %f %f", &A, &B, &C);
    printf("\nO valor de A foi definido como: %.2f\n", A);
    printf("\nO valor de A foi definido como: %.2f\n", B);
    printf("\nO valor de A foi definido como: %.2f\n", C);

    if(A == 0) {
        printf("\n\nO valor de A precisa ser diferente de 0 em uma equação de segundo grau.\n\n");
        system("PAUSE");
        return 0;
    }

    float delta;
    delta = B * B - 4 * A * C;

    printf("\n\nDelta e igual a: %.2f\n", delta);

    if(delta < 0) {
        printf("\nEssa equacao nao possui raiz\n");
    }
    else
    {
        if(delta == 0) {
            float X1;
            X1 = -B / (2 * A);
            printf("\n\nEssa equacao possui apenas uma raiz sendo ela: %.2f\n\n", X1);
        }
        else
        {
            float X1, X2;
            X1 = (-B + sqrt(delta)) / (2 * A);
            X2 = (-B - sqrt(delta)) / (2 * A);
            printf("\n\nEssa equacao possui duas raizes sendo elas: %.2f %.2f\n\n", X1, X2);

        }
    }
    system("PAUSE");
    return 0;


    
}