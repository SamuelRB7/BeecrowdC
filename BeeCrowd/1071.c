#include <stdio.h>
int main()
{
    int X, Y, maior, menor, i, soma = 0;

    scanf("%d", &X);
    scanf("%d", &Y);

    if(X < Y)
    {
        maior = X + 1;
        menor = Y;
    }
    else
    {
        maior = Y + 1;
        menor = X;
    }

    for(i = maior; i < menor; i++)
    {
        if(i % 2 != 0)
        {
            soma += i;
        }
    }

        printf("%d\n", soma);

    return 0;
}