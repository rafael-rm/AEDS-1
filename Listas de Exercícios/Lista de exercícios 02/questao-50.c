/*
50. Chico tem 1.50 metro e cresce 2 cent ́ımetros por ano, enquanto Ze tem 1.10 metros e  ́
cresce 3 cent ́ımetros por ano. Escreva um programa que calcule e imprima quantos anos
serao necess  ̃ arios para que Z  ́ e seja maior que Chico.
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    float juca = 1.10;
    float chico = 1.50;
    int ano=0;
    while (juca < chico)
    {
        juca = juca + 0.03;
        chico = chico + 0.02;
        ano+=1;
    }
    printf("\n%d anos serao necessarios para que Juca seja maior que Chico. \n\n", ano);
    printf("A altura de Juca daqui a 41 anos sera de %f\n", juca);
    printf("A altura de Chico daqui a 41 anos sera de %f\n", chico);
    return 0;
}
