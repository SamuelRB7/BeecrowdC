#include <stdio.h>
#include <string.h>
int main()
{
    char nome[50];

    fgets(nome, 50, stdin);

    printf(" %c %c %c %c", nome[0], nome[1], nome[2], nome[3]);
    
    return 0;
}