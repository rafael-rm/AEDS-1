#include <stdio.h>

int main(){
    printf("Calcular salario base\n\n");
    printf("Insira seu salario base: ");
    float salariobase, gratificao, imposto, salariofinal;
    scanf("%f", &salariobase);
    gratificao = salariobase * 0.05;
    imposto = salariobase * 0.07;
    salariofinal = salariobase + gratificao - imposto;
    printf("O salario final e de: %.2f\n\n", salariofinal);
    return 0;
}