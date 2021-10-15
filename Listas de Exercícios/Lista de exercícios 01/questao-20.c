/*
20. Dados tres valores, ˆ A, B, C, verificar se eles podem ser valores dos lados de um triangulo ˆ
e, se forem, se e um tri  ́ angulo escaleno, equil ˆ atero ou is  ́ oscele, considerando os seguin-  ́
tes conceitos:
• O comprimento de cada lado de um triangulo ˆ e menor do que a soma dos outros  ́
dois lados.
• Chama-se equilatero o tri  ́ angulo que tem tr ˆ es lados iguais. ˆ
• Denominam-se isosceles o tri  ́ angulo que tem o comprimento de dois lados iguais. ˆ
• Recebe o nome de escaleno o triangulo que tem os tr ˆ es lados diferentes.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C;
    do
    {
        do
        {
            printf("\nInsira o valor de A: ");
            scanf("%f", &A);
            if (A <= 0)
            {
                printf("\nO valor precisa ser maior que zero.");
            }
        } while (A <= 0);

        do
        {
            printf("Insira o valor de B: ");
            scanf("%f", &B);
            if (B <= 0)
            {
                printf("\nO valor precisa ser maior que zero.");
            }

        } while (A <= 0);

        do
        {
            printf("Insira o valor de C: ");
            scanf("%f", &C);
            if (C <= 0)
            {
                printf("\nO valor precisa ser maior que zero.");
            }

        } while (C <= 0);

        if (A > B + C || B > A + C || C > A + B)
        {
            system("cls");
            printf("As medidas nao formam um triangulo pois um de seus lados e maior que a soma dos outros dois.");
        }
    } while (A > B + C || B > A + C || C > A + B);

    if (A == B && B == C && C == A)
    {
        printf("\nO triangulo e equilatero.\n");
    }
    else if (A == B || B == C || C == A)
    {
        printf("\nO triangulo e isosceles.\n");
    }
    else
    {
        printf("\nO triangulo e escaleno.\n");
    }
}