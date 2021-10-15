#include <stdio.h>

int soma(int *n1, int *n2)
{
    int somat = 0;
    *n1 *= 2;
    *n2 *= 2;
    somat = *n1 + *n2;
    return somat;
}

int main()
{
    int num, num2;
    printf("Entre com dois valores inteiros: ");
    scanf("%d %d", &num, &num2);
    int resultado = soma(&num, &num2);
    printf("\n%d + %d = %d\n", num, num2, resultado);
    return 0;
}
