#include <stdio.h>
int main()
{
    int matriz[4][4], i, j;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}