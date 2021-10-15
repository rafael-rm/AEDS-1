#include <stdio.h>

void soma(int *n1, int *n2)
{
    *n1 += *n2;
}

int main()
{
    int num, num2;
    printf("Entre com dois valores inteiros (A e B): ");
    scanf("%d %d", &num, &num2);
    soma(&num, &num2);
    printf("\nValor de A (Soma = A + B): %d\nValor de B: %d\n", num, num2);
    return 0;
}
