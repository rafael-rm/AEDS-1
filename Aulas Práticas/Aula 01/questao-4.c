#include <stdio.h>
#include <math.h>

int main(){
    float a, b, resultado;
    printf("Insira o valor de A: ");
    scanf("%f", &a);
    printf("Insira o valor de B: ");
    scanf("%f", &b);
    resultado = (pow(b, 3) + (a*b)) - 2*b + fmod(a, b);
    printf("f(x) = %.2f", resultado);
    return 0;
}