/*
24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
8%). Fac ̧a um programa em que o usuario entre com o valor e o estado destino do  ́
produto e o programa retorne o prec ̧o final do produto acrescido do imposto do estado
em que ele sera vendido. Se o estado digitado n  ́ ao for v  ̃ alido, mostrar uma mensagem  ́
de erro.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor;
    int opcao;
    printf("\nInsira o valor do produto: ");
    scanf("%f", &valor);
    system("cls");
    
    do {
    printf("\n[1] - Minas Gerais");
    printf("\n[2] - Sao Paulo");
    printf("\n[3] - Rio de Janeiro");
    printf("\n[4] - Mato Grosso do Sul");
    printf("\n\nSelecione uma das opcoes acima: ");
    scanf("%d", &opcao);

    if(opcao > 4 || opcao < 1){
        system("cls");
        printf("\nSelecione uma opcao valida!\n");
    }
    
    } while (opcao > 4);

    printf("\n");
    system("pause");
    system("cls");

    switch (opcao)
    {
    case 1:
        valor = valor + (valor * 0.07);
        printf("O valor final com acrescimo de 7%% de impostos sera: %.2f", valor);
        break;
    case 2:
        valor = valor + (valor * 0.12);
        printf("O valor final com acrescimo de 12%% de impostos sera: %.2f", valor);
        break;
    case 3:
        valor = valor + (valor * 0.15);
        printf("O valor final com acrescimo de 15%% de impostos sera: %.2f", valor);
        break;
    case 4: 
        valor = valor + (valor * 0.8);
        printf("O valor final com acrescimo de 8%% de impostos sera: %.2f", valor);
        break;
    
    default:
        printf("Nenhuma opcao valida encontrada.");
        break;
    }
    printf("\n");
    return 0;
}