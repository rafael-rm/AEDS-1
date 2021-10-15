#include <stdio.h>

int main(){
    printf("Calculadora de IMC\n\n");
    // Declarando variaveis
    float peso;
    float altura;
    float imc;
    printf("Insira abaixo seu peso (em kg): ");
    scanf("%f", &peso);
    printf("Insira sua altura abaixo (em metros): ");
    scanf("%f", &altura);
    imc = peso / (altura*altura);
    printf("Seu indice de massa corporal e de: %f", imc);
    return 0;
}