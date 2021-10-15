/*
1. Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome
da pessoa e a palavra “ACEITA”, caso contrário imprimir “NÃO ACEITA”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[50];
    int sexo; // 1 masculino; 2 feminino
    int idade;

    printf("Insira seu nome: ");
    setbuf(stdin, NULL);
    fgets(nome, 50, stdin);
    do
    {
        printf("\n(1) - Masculino\n(2) - Feminino\nInsira seu sexo: ");
        scanf("%d", &sexo);
        if(!(sexo == 1 || sexo == 2)){
            printf("\nInsira um sexo valido!\n");
            system("pause");
            system("cls");
        }
    }while(!(sexo == 1 || sexo == 2));
    printf("\nInsira sua idade: ");
    scanf("%d", &idade);

    system("cls");
    if(sexo = 2 && idade < 25){
        printf("%sVoce foi aceita.\n", nome);
    } else {
        printf("%sVoce nao foi aceita.\n", nome);
    }
    return 0;
}