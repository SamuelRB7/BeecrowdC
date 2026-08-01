#include <stdio.h>
int main()
{
    float valor, media, positivos = 0, soma = 0;
    
    for(int i = 0; i < 6; i++)
    {
        scanf("%f", &valor);

            if(valor > 0)
            {
                positivos++;
                soma = soma + valor;
            }
            
    }
    media = soma / positivos;

        printf("%.0f valores positivos\n", positivos);
        printf("%.1f\n", media);

    return 0;
}