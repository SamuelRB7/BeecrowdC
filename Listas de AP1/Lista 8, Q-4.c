#include <stdio.h>
int main()
{
    int vetor[7];
    int i, N = 0, Soma = 0;

    for(i = 0; i < 7; i++)
    {
        scanf("%d", &vetor[i]);

            if(vetor[i] < 0)
            {
                N = N + 1;
            }
            else
            {
                Soma = Soma + vetor[i];
            } 
    }
        for(i = 0; i < 7; i++)
        {
            printf("%d\n", vetor[i]); 
        }

        printf("Quantidade de numeros negativos: %d\n", N);

            printf("Soma dos numeros positivos: %d\n", Soma);

    return 0;
}