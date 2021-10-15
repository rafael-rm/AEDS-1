/*
5a Questão
Encontre e imprima os divisores de cada número até um limite N (número inteiro) fornecido pelo
usuário.
Exemplo com N = 5:
1:1
2:1 — 2
3:1 — 3
4: 1 — 2 — 4
5: 1 — 5
Exemplo de saída:
Digite um número limite: 10
Os divisores até 1 são: 1
Os divisores até 2 são: 1 2
Os divisores até 3 são: 1 3
Os divisores até 4 são: 1 2 4
Os divisores até 5 são: 1 5
Os divisores até 6 são: 1 2 3 6
Os divisores até 7 são: 1 7
Os divisores até 8 são: 1 2 4 8
Os divisores até 9 são: 1 3 9
Os divisores até 10 são: 1 2 5 10
*/

#include <stdio.h>

int main()
{
    int numero, repeticoes, repeticoes2;
    printf("\nDigite o numero limite: ");
    scanf("%d", &numero);

    for (repeticoes = 1; repeticoes <= numero; repeticoes++)
    {
        printf("\nOs divisores ate %d sao: ", repeticoes);

        for (repeticoes2 = 1; repeticoes2 <= numero; repeticoes2++)
            if (repeticoes % repeticoes2 == 0)
            {
                printf("%d ", repeticoes2);
            }
    }
    printf("\n");
    return 0;
}
