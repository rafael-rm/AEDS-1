#include <stdio.h>

int main(){
    printf("Converter fahrenheit para celsius\n\n");
    float fahrenheit, celsius;
    printf("Insira a temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = 5.0 * (fahrenheit - 32.0)/9.0;
    printf("%.2f fahrenheit sao %.2f graus celsius\n\n", fahrenheit, celsius);
    return 0;
}