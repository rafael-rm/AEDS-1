/*
40. O custo ao consumidor de um carro novo e a soma do custo de f  ́ abrica, da comiss  ́ ao ̃
do distribuidor, e dos impostos. A comissao e os impostos s  ̃ ao calculados sobre o custo  ̃
de fabrica, de acordo com a tabela abaixo. Leia o custo de f  ́ abrica e escreva o custo ao  ́
consumidor.
CUSTO DE FABRICA  ́ % DO DISTRIBUIDOR % DOS IMPOSTOS
ate R$12.000,00  ́ 5 isento
entre R$12.000,00 e 25.000,00 10 15
acima de R$25.000,00 15 20
*/

#include <stdio.h>

int main()
{
    float custo_fabrica, custo_consumidor;
    printf("\nInsira o custo de fabrica: ");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000)
        custo_consumidor = custo_fabrica + (custo_fabrica * 0.05);

    else if (custo_fabrica > 12000 && custo_fabrica <= 25000)
    {
        custo_consumidor = custo_fabrica + (custo_fabrica * 0.10);
        custo_consumidor = custo_consumidor + (custo_fabrica * 0.15);
    }

    else if (custo_fabrica > 25000)
    {
        custo_consumidor = custo_fabrica + (custo_fabrica * 0.15);
        custo_consumidor = custo_consumidor + (custo_fabrica * 0.20);
    }
    printf("\nCusto para o consumidor: %.2f", custo_consumidor);
    return 0;
}