/*
Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char 
Associe as variáveis aos ponteiros (use Modifique os valores de cada variável usando os ponteiros Imprima os valores das variáveis antes e após a modificação;
*/

#include <stdio.h>

int main()
{
    int inteiro = 10, *p_inteiro = &inteiro;
    float real = 1.5, *p_real = &real;
    char letra = 'R', *p_letra = &letra;

    printf("\nValores iniciais dos ponteiros:\n\nInteiro: %d\nReal: %f\nLetra: %c\n", *p_inteiro, *p_real, *p_letra);

    *p_inteiro = 20;
    *p_real = 5.5;
    *p_letra = 'A';

    printf("\nValores trocados via ponteiros:\n\nInteiro: %d\nReal: %f\nLetra: %c\n", *p_inteiro, *p_real, *p_letra);
    return 0;
}
