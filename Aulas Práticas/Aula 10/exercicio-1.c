#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float imc(float altura, float peso);

int main(){
    float altura, peso, resultado;
    printf("\nInsura sua altura (m): ");
    scanf("%f", &altura);
    printf("Insira seu peso (kg): ");
    scanf("%f", &peso);
    resultado = imc(altura, peso);
    printf("\nSeu IMC e de: %f\n", resultado);
    return 0;
}
float imc(float altura, float peso){
    return peso/(altura*altura);
}