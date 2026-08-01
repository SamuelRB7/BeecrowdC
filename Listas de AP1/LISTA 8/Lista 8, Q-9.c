#include <stdio.h>
int main()
{
    int N, i, simetrica = 1;
    int cristais[100000];

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &cristais[i]);
    }

    for(i = 0; i < N / 2; i++)
    {
        if(cristais[i] != cristais[N - 1 - i])
        {
            simetrica = 0;
            break;
        }
    }

    if(simetrica == 1)
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }

    return 0;
}