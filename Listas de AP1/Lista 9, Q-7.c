#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char string[100];
    int v = 0;

    fgets(string, 100, stdin);

    string[strcspn(string, "\n")] = '\0';

    for(int i = 0; string[i] != '\0'; i++)
    {
    char c = tolower(string[i]);

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            v++;
        }
    }
        printf("Quantidade de vogais: %d\n", v);
        

    return 0;
}