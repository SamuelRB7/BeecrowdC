#include <stdio.h>
int main()
{
    int N;

    scanf("%d", &N);

    if(N > 20)
    {
        printf("Maior que 20!!\n");
    }
    else if (N < 20)
    {
        printf("Menor que 20!!\n");
    }
    else
    {
        printf("Igual a 20!!\n");
    }

    return 0;
}