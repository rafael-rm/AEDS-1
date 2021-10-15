#include <stdio.h>

int main(){
    printf("Escreva quantos dias voce trabalhou: ");
    int dias;
    float salario;
    scanf("%i", &dias);
    salario = (dias * 30.0) - (dias * 30.0 * 0.08);
    printf("O salario liquido e de: %.2f reais", salario);
    return 0;
}