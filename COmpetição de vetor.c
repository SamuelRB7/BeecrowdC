#include <stdio.h>
int main()
{
    int i, Q;
    int vetN[10], soma = 0;

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &vetN[i]);
    }

        printf("Vetor: \n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", vetN[i]);

            if(vetN[i] > 0)
            {
                Q = Q + 1;
            }
    }

        printf("Inverso: \n");
    for(i = 9; i >= 0; i--)
    {
        printf("%d ", vetN[i]);
    }
    for(i = 0; i < 10; i++)
    {
        if(vetN[i] % 2 == 1)
        {
            soma = soma + vetN[i]; 
        }
    }
        printf("Soma dos impares: %d\n", soma);
        printf("Quantidade de positivos: %d", Q);

    int menor;

        printf("Menor Valor: \n");
    for(i = 0; i < vetN[10]; i++)
    {
        if(i == 0)
        {
            menor = vetN[i];
        }
        else if(menor > vetN[i])
        {
            menor = vetN[i];
        }
    }

    return 0;
}