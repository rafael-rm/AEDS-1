/*
26. Faca um algoritmo que encontre o primeiro multiplo de 11, 13 ou 17 ap  ́ os um n  ́ umero  ́
dado.
*/

#include <stdio.h>

int main()
{
    int i = 0, valor, contador;
    printf("Insira um numero inteiro: ");
    scanf("%d", &valor);
    contador = valor;

    while (i < 1)
    {
        contador++;
        printf("\nLoop executando...");
        if ((contador % 11 == 0) || (contador % 13 == 0) || (contador % 17 == 0)){
            i++;
        }
    }
    printf("\n\nO primeiro multiplo de 11, 13 ou 17 apos o numero %d e: %d\n", valor, contador);
    return 0;
}