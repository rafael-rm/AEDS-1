/*
28. Fac ̧a um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
conforme a formula a seguir  ́

E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
*/

int main()
{

    int N, E = 1, i, j, num, fatorial;

    printf("Digite um numero inteiro e positivo: ");

    scanf("%d", &N);

    for (i = 1; i <= N; ++i)
    {

        num = 1.0 / i;

        fatorial = 1;

        for (j = num; j > 0; --j)
        {

            fatorial *= num;
        }

        E += fatorial;
    }

    printf("Valor de 'E': %d", E);
}