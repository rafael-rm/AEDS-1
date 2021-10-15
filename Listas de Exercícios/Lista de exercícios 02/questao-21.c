/* 
21. Fac ̧a um programa que receba dois numeros. Calcule e mostre:  ́
• a soma dos numeros pares desse intervalo de n  ́ umeros, incluindo os n  ́ umeros digi-  ́
tados;
• a multiplicac ̧ao dos n  ̃ umeros  ́  ́ımpares desse intervalo, incluindo os digitados;
*/

#include <stdio.h>

int main()
{
    int valor1, valor2, somapares = 0, multiimpares = 1;
    printf("Insira dois valores inteiros: ");
    scanf("%d%d", &valor1, &valor2);

    // Soma pares
    if (valor1 > valor2)
    {
        for (valor2; valor2 <= valor1; valor2++)
        {
            if (valor2 % 2 == 0)
            {
                somapares += valor2;
            }
            if (valor2 % 2 != 0)
            {
                multiimpares *= valor2;
            }
        }
    }
    else if (valor2 > valor1)
    {
        for (valor1; valor1 <= valor2; valor1++)
        {
            if (valor1 % 2 == 0)
            {
                somapares += valor1;
            }
            if (valor1 % 2 != 0)
            {
                multiimpares *= valor1;
            }
        }
    }
    printf("\nA soma dos numeros pares desse intervalo resulta em: %d", somapares);
    printf("\nA multiplicacao dos numeros impares desse intervalo resulta em: %d\n", multiimpares);
    return 0;
}