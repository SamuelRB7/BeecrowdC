#include <stdio.h>
int main()
{
    int X;

    scanf("%d", &X);

    if(X % 2 == 0)
    {
        X++;
    }

    for(int i = 0; i < 6; i++)
    {
        printf("%d\n", X);
        X += 2;
    }

    return 0;
}