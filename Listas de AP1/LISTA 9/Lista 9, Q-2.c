#include <stdio.h>
#include <string.h>
int main()
{
    char STR[16], STR2[16];

    fgets(STR, 16, stdin);

        printf("%s \n", STR);

    strcpy(STR2, STR);

    return 0;
}