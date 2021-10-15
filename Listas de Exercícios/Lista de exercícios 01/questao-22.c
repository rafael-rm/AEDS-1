/*
22. Leia a idade e o tempo de servic ̧o de um trabalhador e escreva se ele pode ou nao se  ̃
aposentar. As condic ̧oes para aposentadoria s  ̃ ao ̃
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, tempo_servico;
    printf("\nInsira a idade do trabalhador: ");
    scanf("%d", &idade);
    system("cls");

    printf("Insira os anos de trabalho: ");
    scanf("%d", &tempo_servico);
    system("cls");

    if (idade >= 65)
    {
        printf("Esse trabalhor pode se aposentar pois possui %d anos.", idade);       
    }
    else if (tempo_servico >= 30){
        printf("Esse trabalhador pode se aposentar pois ja trabalhou %d anos.", tempo_servico);
    }
    else if (idade >= 60 && tempo_servico >= 25 ){
        
    }
    return 0;
}