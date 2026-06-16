#include <stdio.h>
int main()
{
    int inicio, fim, hora;

    scanf("%d %d", &inicio, &fim);

    if(fim > inicio)
    {
        hora = fim - inicio;

        printf("O JOGO DUROU %d HORA(S)\n", hora);
    }
    else if(fim < inicio)
    {
        hora = (24 - inicio) + fim;
        
        printf("O JOGO DUROU %d HORA(S)\n", hora);
    }
    else
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    return 0;
}