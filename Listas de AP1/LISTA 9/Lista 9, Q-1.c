#include <stdio.h>
#include <string.h>
int main()
{
    char STR[16];

    fgets(STR, 16, stdin);
    
    printf("%s", STR);

    return 0;
}