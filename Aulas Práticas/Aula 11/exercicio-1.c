#include <stdio.h>
#include <stdlib.h>

void trocar_valor(int *a, int *b);

int main(){
    int a, b;
    printf("\nInsira o primeiro valor: ");
    scanf("%d", &a);
    printf("Insira o segundo valor: ");
    scanf("%d", &b);

    trocar_valor(&a, &b);

    printf("\nInvertidos: %d %d\n\n", a, b);
    return 0;
}

void trocar_valor(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}