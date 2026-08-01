#include <stdio.h>
int main()
{
    int vet[6], novo[6], i;

    for(i = 0; i < 6; i++)
    {
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 6; i++)
    {
        if(i % 2 == 0)
        {
            novo[i] = vet[i] / 2;
        }
        else
        {
            novo[i] = vet[i] * 3;
        }
    }

    for(i = 0; i < 6; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\n");

    for(i = 0; i < 6; i++)
    {
        printf("%d ", novo[i]);
    }

    printf("\n");

    return 0;
}