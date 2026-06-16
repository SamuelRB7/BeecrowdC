#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], OP;
    int Com = 0, Com2 = 0, i = 0;

    fgets(str, 50, stdin);

    str[strcspn(str, "\n")] = '\0';

    scanf(" %c", &OP);

    switch(OP)
    {
        case 'a':
        case 'A':
        
        Com = strlen(str);
        break;

        case 'b':
        case 'B':

        while(str[i] != '\0')
        { 
            Com2++;
            i++;
        }
        break;
    }

    printf("%d\n", Com);
    printf("%d\n", Com2);
    
    return 0;
}