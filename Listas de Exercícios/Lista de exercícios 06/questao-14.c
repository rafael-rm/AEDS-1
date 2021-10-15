#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume)
{
    *area = 4 * 3.14 * pow(R, 2);
    *volume = 4.0 / 3.0 * 3.14 * pow(R, 3);
}

int main()
{
    float R, A, V;
    printf("Insira o raio da esfera: ");
    scanf("%f", &R);
    calc_esfera(R, &A, &V);
    printf("\nArea: %.2f\nVolume: %.2f\n", A, V);
    return 0;
}
