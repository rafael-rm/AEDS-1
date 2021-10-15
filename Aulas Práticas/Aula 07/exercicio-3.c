/*
Faça um programa que receba uma palavra e a imprima de trás para frente;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j;
    char palavra[20];
    printf("Insira uma palavra: ");
    setbuf(stdin, NULL);
    fgets(palavra, 20, stdin);

    for (i = 0; palavra[i] != '\0'; i++);
    printf("\ni = %d", i);
    j = i - 1;
    printf("\nj = %d\n", j);
    printf("\nA palavra invertida fica: ");
    for (j; j != -1; j--)
    {
        printf("%c", palavra[j]);
    }
    printf("\n");
    return 0;
}