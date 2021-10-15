/*
51. Um funcionario recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996  ́
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao
dobro do ano anterior. Fac ̧a programa que determine o salario atual do funcion  ́ ario.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario=2000;
    int anoini=1995, i, at=2019, perc;

    for (i = anoini; i <= at; i++)
    {
        if (i != anoini)
        {
            salario = salario + salario * perc / 100;
            perc = perc * 2;
        }
        printf("%d - %.2lf - %.2lf\n", i, perc, salario);
    }

    printf("O salario dele e %.2lf", salario);
    return 0;
}