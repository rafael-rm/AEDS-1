/*
47. Fac ̧a um programa que apresente um menu de opc ̧oes para o c  ̃ alculo das seguintes  ́
operac ̧oes entre dois n  ̃ umeros:  ́
• adic ̧ao (opc ̧  ̃ ao 1)  ̃
• subtrac ̧ao (opc ̧  ̃ ao 2)  ̃
• multiplicac ̧ao (opc ̧  ̃ ao 3)  ̃
• divisao (opc ̧  ̃ ao 4).  ̃
• sa ́ıda (opc ̧ao 5)
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float n1, n2;
    int opcao;

    do {
    printf("(1) Adicao\n(2) Subtracao\n(3) Multiplicacao\n(4) Divisao\n(5) Sair\n");
    printf("Escolha uma opcao:\n ");
    scanf("%d", &opcao);
        
        if (opcao == 1 ){

    printf("Digite um numero: \n");
    scanf("%f", &n1);
    printf("Digite outro numero: \n");
    scanf("%f", &n2);
    printf("A soma dos valores %.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
    }

    else if (opcao == 2){

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);
    printf("\nA soma dos valores %.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
    }

    else if (opcao == 3){

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);
    printf("\nA soma dos valores %.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
    }

    else if (opcao == 4){

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);
    printf("\nA soma dos valores %.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
    }

    else if (opcao == 5){

    printf("Obrigado por utilizar a calculadora.\n");
    } 
    }
    
    while(!(opcao == 5));
    system("pause");
    return 0;
}