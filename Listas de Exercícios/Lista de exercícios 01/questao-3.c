/*
3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário,
imprima o número ao quadrado.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Insira um valor qualquer: ");
    float valor;
    scanf("%f", &valor);

    if(valor < 0){
        printf("\nO quadrado de %.2f e: %.2f\n", valor, valor*valor);
    }
    else if (valor > 0){
        printf("\nA raiz quadrada de %.2f e: %.2f\n", valor, sqrt(valor));
    }
    else{
        printf("\nO raiz quadrada de zero e zero.\nO quadrado de zero e zero.\n");
    }
    return 0;
}