#include <stdio.h>

int main(){
    printf("Insira um valor inteiro: ");
    int numero;
    scanf("%i", &numero);
    if (numero % 2 == 0) {
        printf("\nO numero inserido e par.\n\n");
    }
    else
    {
        printf("\nO numero inserido e impar.\n\n");
    }
    return 0;
}