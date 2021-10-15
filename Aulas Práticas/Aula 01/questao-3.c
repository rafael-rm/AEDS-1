#include <stdio.h>

int main(){
    // Declarando variaveis
    float raio;
    float perimetro;
    float area;
    printf("Calcular a area e o perimetro de um circulo\n\n\n");
    printf("Insira o raio da circunferencia: ");
    scanf("%f", &raio);
    perimetro = (2*3.14) * raio;
    printf("O perimetro da circunferencia e de: %.2f\n", perimetro);
    area = 3.14 * (raio*raio);
    printf("A area da circunferencia e de: %.2f\n", area); 
    return 0;
}