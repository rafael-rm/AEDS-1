#include <stdio.h>

void frac(float num, int *inteiro, float *frac)
{
    *inteiro = num;
    *frac = num - *inteiro;
}

int main()
{
    float num, fracao;
    int inteiro;
    printf("Insira um numero real: ");
    scanf("%f", &num);
    frac(num, &inteiro, &fracao);
    printf("\nParte inteira: %d\nParte fraccionaria: %.2f\n", inteiro, frac);
    return 0;
}
