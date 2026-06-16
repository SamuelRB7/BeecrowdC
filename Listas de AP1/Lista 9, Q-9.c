#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char number[20];
    int i;

    fgets(number, 20, stdin);

    number[strcspn(number, "\n")] = '\0';

    for(i = 0; number[i] != '\0'; i++)
    {
        if(isdigit(number[i]))
        {
            printf(" %c", number[i]);
        }
    }


    return 0;
}