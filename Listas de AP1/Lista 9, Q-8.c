#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char palavra[11];
    int i;
    fgets(palavra, 11, stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    for(i = 0; palavra[i] != '\0'; i++)
    {
        char sam = tolower(palavra[i]);

        if(sam == 'a' || sam == 'e' || sam == 'i' || sam == 'o' || sam == 'u')
        {
            palavra[i] = '-';
        }
        else
        {
            palavra[i] = '.';
        }
    }

    printf("Palavra transformada: %s", palavra);

    return 0;
}