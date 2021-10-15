#include <stdio.h>
#include <ctype.h>
#include <string.h>

int substring(char *frase, char *frase2)
{
    int cont = 0;
    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] = frase2[0])
        {
            for (int j = i, k = 0; k < strlen(frase2); j++, k++)
            {
                if (frase[j] == frase2[k])
                {
                    cont++;
                }
            }
        }
        if (cont == strlen(frase2))
        {
            printf("\nA segunda frase esta contida na primeira frase!\n");
            break;
        }
        cont = 0;
    }
    if (cont == 0)
    {
        printf("\nA segunda frase nao esta contida na primeira frase!\n");
    }
}

int main()
{
    char frase[200], *p1, frase2[200], *p2;
    p1 = frase;
    printf("Insira a primeira frase: ");
    setbuf(stdin, NULL);
    gets(frase);
    strlwr(frase);
    p2 = frase2;
    printf("Insira a segunda frase: ");
    setbuf(stdin, NULL);
    gets(frase2);
    strlwr(frase2);
    substring(p1, p2);
    return 0;
}
