#include <stdio.h>

int main()
{
    int A, *B, **C, ***D;
    B = &A;
    C = &B;
    D = &C;
    printf("Insira um valor inteiro: ");
    scanf("%d", &A);
    printf("\nValor: %d\nDobro: %d\nTriplo: %d\nQuadruplo: %d\n", A, *B * 2, **C * 3, ***D * 4);
    return 0;
}
