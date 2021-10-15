#include <stdio.h>
#include <math.h>

int main(){
    printf("Calcular a hipotenusa de um triangulo retangulo\n\n");
    float cateto1, cateto2, hipotenusa;
    printf("Insira o valor do primeiro cateto: ");
    scanf("%f", &cateto1);
    printf("Insira o valor do segundo cateto: ");
    scanf("%f", &cateto2);
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    printf("\nO valor da hipotenusa e de: %.3f\n", hipotenusa);
    return 0;
}