/*
39. Uma empresa decide dar um aumento aos seus funcionarios de acordo com uma tabela  ́
que considera o salario atual e o tempo de servic ̧o de cada funcion  ́ ario. Os funcion  ́ arios  ́
com menor salario ter  ́ ao um aumento proporcionalmente maior do que os funcion  ̃ arios  ́
com um salario maior, e conforme o tempo de servic ̧o na empresa, cada funcion  ́ ario ir  ́ a ́
receber um bonus adicional de sal ˆ ario. Fac ̧a um programa que leia:  ́
• o valor do salario atual do funcion  ́ ario;  ́
• o tempo de servic ̧o desse funcionario na empresa (n  ́ umero de anos de trabalho na  ́
empresa).
Use as tabelas abaixo para calcular o salario reajustado deste funcion  ́ ario e imprima o  ́
valor do salario final reajustado, ou uma mensagem caso o funcion  ́ ario n  ́ ao tenha direito  ̃
a nenhum aumento.
Salario Atual  ́ Reajuste(%) Tempo de Servic ̧o Bonus ˆ
Ate 500,00  ́ 25% Abaixo de 1 ano Sem bonus ˆ
Ate 1000,00  ́ 20% De 1 a 3 anos 100,00
Ate 1500,00  ́ 15% De 4 a 6 anos 200,00
Ate 2000,00  ́ 10% De 7 a 10 anos 300,00
Acima de 2000,00 Sem reajuste Mais de 10 anos 500,00
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float salario_atual, tempo_servico, salario_reajustado;
    printf("\nInsira o salario atual: ");
    scanf("%f", &salario_atual);
    printf("\nInsira o tempo de servico: ");
    scanf("%f", &tempo_servico);

    if (salario_atual <= 500)
        salario_reajustado = salario_atual + (salario_atual * 0.25);
    else if (salario_atual <= 1000)
        salario_reajustado = salario_atual + (salario_atual * 0.20);
    else if (salario_atual <= 1500)
        salario_reajustado = salario_atual + (salario_atual * 0.15);
    else if (salario_atual <= 2000)
        salario_reajustado = salario_atual + (salario_atual * 0.10);
    else if (salario_atual > 2000)
        salario_reajustado = salario_atual;

    if (tempo_servico < 1)
        salario_reajustado = salario_reajustado + 0;
    else if (tempo_servico >= 1 && tempo_servico <= 3)
        salario_reajustado = salario_reajustado + 100;
    else if (tempo_servico >= 4 && tempo_servico <= 6)
        salario_reajustado = salario_reajustado + 200;
    else if (tempo_servico >= 7 && tempo_servico <= 10)
        salario_reajustado = salario_reajustado + 300;
    else if (tempo_servico > 10)
        salario_reajustado = salario_reajustado + 500;

    printf("\nO salario final reajustado e de: %.2f\n", salario_reajustado);
    return 0;
}