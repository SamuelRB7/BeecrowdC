#include <stdio.h>
int main()
{
    int vet[6], i;

    for(i = 0; i < 6; i++)
    {
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 3; i++)
    {
        printf("%d\n", vet[i] + vet[5 - i]);
    }

    return 0;
}