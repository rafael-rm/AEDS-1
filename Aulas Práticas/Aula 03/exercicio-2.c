#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso, altura;
    printf("Insira seu peso em kg: ");
    scanf("%f", &peso);
    printf("Insira sua altura em metros: ");
    scanf("%f", &altura);

    float imc;
    imc = peso/(altura*altura);
    printf("\n\nSeu IMC e de: %.2f", imc);

    if (imc < 18.5){
        printf("\nVoce esta abaixo do peso ideal.\n\n");
    }
    else if (imc >= 18.5 && imc <= 24.9){
        printf("\nVoce esta no peso ideal.\n\n");
    }
    else if (imc >= 25.0 && imc <= 29.9){
        printf("\nVoce esta acima do seu peso ideal.\n\n");
    }
    else if (imc >= 30 && imc <= 34.9){
        printf("\nVoce possui obesidade de grau 1.\n\n");
    }
    else if (imc >= 35 && imc <= 39.9){
        printf("\nVoce possui obesidade de grau 2 (severa).\n\n");
    }
    else if (imc >= 40){
        printf("\nVoce possui obesidade de grau 3 (morbida).\n\n");
    }
    system("PAUSE");
    return 0;
}