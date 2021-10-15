/*29. Fac ̧a uma prova de matematica para crianc ̧as que est  ́ ao aprendendo a somar n  ̃ umeros  ́
inteiros menores do que 100. Escolha numeros aleat  ́ orios entre 1 e 100, e mostre na  ́
tela a pergunta: qual e a soma de  ́ a + b, onde a e b sao os n  ̃ umeros aleat  ́ orios. Pec ̧a a  ́
resposta. Fac ̧a cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas
corretas, alem de quantas vezes o aluno acertou.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int i, random1, random2, resultado_aluno, resultado_correto, acertos = 0;
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        random1 = rand() % 100;
        random2 = rand() % 100;
        resultado_correto = random1 + random2;
        printf("Digite o valor da some de %d + %d: ", random1, random2);
        scanf("%d", &resultado_aluno);
        if (resultado_aluno == resultado_correto)
        {
            printf("\nParabens voce acertou esta questao.\n\n108");
            system("pause");
            system("cls");
            acertos++;
        }
        else
        {
            printf("\nVoce errou esta questao.\n");
            printf("A resposta correta era: %d\n\n", resultado_correto);
            system("pause");
            system("cls");
        }
    }
    printf("Voce teve um total de %d acertos.\n", acertos);
    return 0;
}