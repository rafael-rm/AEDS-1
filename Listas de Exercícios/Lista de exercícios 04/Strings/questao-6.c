/*
6. Faça um programa que, dada uma string, diga se ela é um palíndromo ou não.
Lembrando que um palíndromo é uma palavra que tenha a propriedade de poder ser
lida tanto da direita para a esquerda como da esquerda para a direita. Exemplo:
 ovo
 arara
 socorram-me, subi no ônibus em Marrocos
 anotaram a data da maratona
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char frase[100], inversa[100];
    int i, j, aux = 0;
    printf("Insira a frase: ");
    setbuf(stdin, NULL);
    gets(frase);
    aux = strlen(frase);
    for (i = 0; i < aux; i++)
    {
        if (frase[i] == ' ' || frase[i] == '.' || frase[i] == ',' || frase[i] == '-' || frase[i] == ';' || frase[i] == '/')
        {
            for (j = i; j < aux; j++)
            {
                frase[j] = frase[j + 1];
            }
            aux--;
            i--;
        }
    }
    for (i = 0; frase[i] != '\0'; i++)
    {
        frase[i] = (frase[i]);
    }
    printf("\nFrase: %s", frase);
    strcpy(inversa, frase);
    strrev(inversa);
    printf("\n     > %s", inversa);
    aux = strcmp(frase, inversa);
    if (aux == 0)
    {
        printf("\n\nA frase e um palindromo!\n");
    }
    else
    {
        printf("\n\nA frase nao e um palindromo!\n");
    }
    return 0;
}
