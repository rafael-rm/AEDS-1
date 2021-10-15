/*
13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira
e a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do
aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser
igual ou superior a 60 pontos.
*/

#include <stdlib.h>

int main(){
    float nota1, nota2, nota3;
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nInsira a segunda nota: ");
    scanf("%f", &nota2);
    printf("\nInsira a terceira nota: ");
    scanf("%f", &nota3);

    float resultado;

    resultado = (nota1+nota2+(nota3*2))/4;

    if(resultado >= 60){
        printf("\n\nO aluno foi aprovado.\n\n");
    }
    else {
        printf("\n\nO aluno foi reprovado.\n\n");
    }
    return 0;
}