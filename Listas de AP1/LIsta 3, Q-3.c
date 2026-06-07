#include <stdio.h>
int main()
{
    int X, Y;

    printf("Digite numeros para X e Y:\n");

    scanf("%d", &X);
    scanf("%d", &Y);

    if(X == 0 && Y == 0)
    {
        printf("ORIGEM\n");
    }
    else if(X > 0 && Y > 0)
    {
        printf("1 QUADRANTE.\n");
    }
    else if(X < 0 && Y > 0)
    {
        printf("2 QUADRANTE.\n");
    }
    else if(X < 0 && Y < 0)
    {
        printf("3 QUADRANTE.\n");
    }
    else
    {
        printf("4 QUADRANTE.\n");
    }
    
    return 0;
}