/*
9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso
contrário imprima: Empréstimo concedido.
*/

#include <stdio.h>

int main(){
    printf("Insira o valor do salario: ");
    int salario;
    scanf("%d", &salario);
    printf("\nInsira o valor da prestacao do emprestimo: ");
    int prestacao;
    scanf("%d", &prestacao);
    
    if(prestacao > salario * 0.2){
        printf("\nEmprestimo nao concedido.\n");
    }
    else{
        printf("\nEmprestimo concedido.\n");
    }
    return 0;
}