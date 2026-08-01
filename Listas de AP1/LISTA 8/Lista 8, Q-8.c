#include <stdio.h>
int main()
{
    int N, i;
    char comandos[100000];

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf(" %c", &comandos[i]);
    }

    for(i = N - 1; i >= 0; i--)
    {
        printf("%c", comandos[i]);

        if(i > 0)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}