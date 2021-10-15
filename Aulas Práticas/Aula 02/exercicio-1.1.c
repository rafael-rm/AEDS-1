#include <stdio.h>

int main(){
    printf("Insira o numero: ");
    int valor;
    scanf("%i", &valor);
    if (valor % 2 == 0) {
        printf("\nO valor e par\n\n");
        printf("\n");        
    }
    else
    {
        printf("\n\nO valor e impar\n\n");
    }
    return 0;
}

