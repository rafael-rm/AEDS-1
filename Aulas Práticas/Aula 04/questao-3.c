/*
Escreva um programa que receba a idade de n pessoas, calcule e imprima: a quantidade de pessoas
em cada faixa etária; a porcentagem de cada faixa etária em relação ao total de pessoas.
As faixas etárias são:
1 a 15 anos
16 a 30 anos
31 a 45 anos
46 a 60 anos
≥ 61 anos
Exemplo de saída:
Quantas idades deseja digitar? 10
Digite a idade da pessoa 1: 6
Digite a idade da pessoa 2: 41
Digite a idade da pessoa 3: 33
Digite a idade da pessoa 4: 25
Digite a idade da pessoa 5: 70
Digite a idade da pessoa 6: 71
Digite a idade da pessoa 7: 11
Digite a idade da pessoa 8: 39
Digite a idade da pessoa 9: 42
Digite a idade da pessoa 10: 28
Faixa etária:
1 a 15 anos - 20.0%
16 a 30 anos - 20.0%
31 a 45 anos - 40.0%
46 a 60 anos - 0.0%
Mais de 60 anos - 20.0%
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int leituras, repeticoes;
    int grupo1a15 = 0, grupo16a30 = 0, grupo31a45 = 0, grupo46a60 = 0, grupo61mais = 0, ignorados = 0;
    printf("Quantas idades deseja digitar?: ");
    scanf("%d", &leituras);

    if (leituras <= 0)
    {
        printf("\nO valor inserido precisa ser maior ou igual a 1\n\n");
        system("pause");
        return 0;
    }

    for (repeticoes = 1; repeticoes <= leituras; repeticoes++)
    {
        printf("Digite a idade da pessoa %d: ", repeticoes);
        int idade;
        scanf("%d", &idade);
        if (idade >= 1 && idade <= 15)
        {
            grupo1a15++;
        }
        else if (idade >= 16 && idade <= 30)
        {
            grupo16a30++;
        }
        else if (idade >= 31 && idade <= 45)
        {
            grupo31a45++;
        }
        else if (idade >= 46 && idade <= 60)
        {
            grupo46a60++;
        }
        else if (idade > 60)
        {
            grupo61mais++;
        }
        else
        {
            printf("Idade invalida, valor ignorado.\n");
            ignorados++;
        }
    }

    leituras = leituras - ignorados;

    system("cls");
    printf("\n\n1 a 15 anos - %d (%d%%)", grupo1a15, 100 * grupo1a15 / leituras);
    printf("\n16 a 30 anos - %d (%d%%)", grupo16a30, 100 * grupo16a30 / leituras);
    printf("\n31 a 45 anos - %d (%d%%)", grupo31a45, 100 * grupo31a45 / leituras);
    printf("\n46 a 60 anos - %d (%d%%)", grupo46a60, 100 * grupo46a60 / leituras);
    printf("\nMair ou igual a 61 anos - %d (%d%%)\n\n", grupo61mais, 100 * grupo61mais / leituras);
    return 0;
}