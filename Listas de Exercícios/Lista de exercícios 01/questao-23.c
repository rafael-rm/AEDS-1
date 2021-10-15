/*
23. Determine se um determinado ano lido e bissexto. Sendo que um ano  ́ e bissexto se  ́
for divis ́ıvel por 400 ou se for divis ́ıvel por 4 e nao for divis  ̃  ́ıvel por 100. Por exemplo:
1988, 1992, 1996
*/

#include <stdio.h>

int main(){
    int ano;
    printf("Insira o ano que deseja saber se e bissexto: ");
    scanf("%d", &ano);

    if(ano % 4 == 0 && ano % 100 != 0){
        printf("\nO ano e bissexto.");
    }
    else {
        printf("\nO ano nao e bissexto.");
    }
    printf("\n");
    return 0;
}

