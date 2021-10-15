/*
19. Fac ̧a um programa para verificar se um determinado numero inteiro e divis  ́  ́ıvel por 3 ou
5, mas nao simultaneamente pelos dois.
*/

#include <stdio.h>

int main()
{
    int valor;
    printf("Digte um valor inteiro: ");
    scanf("%d", &valor);

    if (valor % 3 == 0 && valor % 5 == 0)
    {
        printf("\nO valor e divisivel por 3 e 5 simultaneamente.\n");
    }
    else if (valor % 3 == 0 || valor % 5 == 0)
    {
        printf("\nO valor e divisivel por 3 ou 5\n");
    }
    else
    {
        printf("\nO valor nao e divisivel por 3 nem por 5\n");
    }
    return 0;
}