#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[50];
    int i, j, palavraIgual = 1;

    printf("Palindromo ou nao??? \n");
    printf("Digite a palavra que quer verificar: \n");

    fgets(palavra, 50, stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    j = strlen(palavra) - 1;

    for(i = 0; i < j; i++, j--)
    {
        if(palavra[i] != palavra[j])
        {
            palavraIgual = 0;
            break;
        }
    }
    if(palavraIgual == 1)
    {
        printf("E palindromo.\n");
    }
    else
    {
        printf("Nao e palindromo.\n");
    }
    
    return 0;
}