#include <stdio.h>

int main(){
    // Declarando variaveis
    float celsius;
    float fahrenheit;
    printf("Conversor de celsius para fahrenheit\n");
    printf("Insira a temperatura em graus celsius que deseja converter para fahrenheit: ");
    scanf("%f", &celsius);
    fahrenheit = celsius*1.8+32;
    printf("%.2f", fahrenheit);
    return 0;
}