/*
27. Em Matematica, o n  ́ umero harm  ́ onico designado por ˆ H(n) define-se como sendo a soma
da serie harm  ́ onica:  ́

H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
*/

#include <stdio.h>

int main()
{
    float valor, resultado=0, i;
    printf("Insira um valor: ");
    scanf("%f", &valor);

    printf("\n1 + ");
    for (i = 1; i <= valor; i++)
    {
        printf("1/%.2f ", i);
        resultado += 1/i;
    }
    printf("= %f\n", resultado);
    return 0;
}