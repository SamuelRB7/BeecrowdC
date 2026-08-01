#include <stdio.h>
int main()
{
    int N, i;

    printf("Digite a quantidade de numeros anotados na lista\n");
    scanf("%d", &N);

    int vetN[N];

    printf("Numeros da lista: \n");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &vetN[i]);
    }
    int maior = vetN[0];

    for(i = 1; i < N; i++)
    {
        if(vetN[i] > maior)
        {
            maior = vetN[i];
        }
    }
        printf("Maior valor: %d\n", maior);
        printf("Indices: \n");

        for(i = 0; i < N; i++)
        {
            if(vetN[i] == maior)
            {
                printf("%d ", i);
            }
        }
    
    return 0;
}