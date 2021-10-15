#include <stdio.h>

int main(){
    printf("Insira o valor de A e B (numero): ");
    int a, b, x;
    scanf("%i%i", &a, &b);
    printf("\n\nNo momento a variavel A possui o valor de: %i", a);
    printf("\nNo momento a variavel B possui o valor de: %i\n\n", b);
    printf("\nInvertendo variaveis");
    // Realizando inversão das variaveis
    x = b;
    b = a;
    a = x;
    printf("\n\nAgora a variavel A possui o valor de: %i\nAgora a variavel B possui o valor de: %i\n\n", a, b);
    return 0;
}