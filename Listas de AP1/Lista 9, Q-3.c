#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], OP;
    int Com, Com2 = 0, i = 0;
    getchar();

    fgets(str, 50, stdin);

    scanf(" %c", &OP);

    

    switch(OP)
    {
        case 'a':
        case 'A':
        
        Com = strlen(str);
        break;
//================================================
        case 'b':
        case 'B':

        while(str[i] != '\0')
        { 
            i++;
            Com2++;
        }
        break;
    }

    printf("%d", Com);
    printf("%d", Com2);
    
    return 0;
}