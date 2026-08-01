#include <stdio.h>
int main()
{
    float valores, positivos = 0;

    for(int i = 0; i < 6; i++)
    {
        scanf("%f", &valores);

            if(valores > 0)
            {
                positivos++;
            }
    }
    
    printf("%0.f valores positivos\n", positivos);

    return 0;
}   