#include <stdio.h>
int main()
{
    int vetor[10];
    int i;

    printf("Digite 10 numeros inteiros do teclado\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[10]);
    }
        for(i = 0; i < 10; i++)
        {
            printf("Ordem direta: %d\n", vetor[10]);
        }
            for(i = 9; i >= 0; i--)
            {
                printf("Ordem inversa: %d\n", vetor[10]);
            }
    
    return 0;
}