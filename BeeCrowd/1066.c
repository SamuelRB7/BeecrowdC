#include <stdio.h>
int main()
{
    int valores, pares = 0, impares = 0, positivos = 0, negativos = 0;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &valores);

            if(valores % 2 == 0)
            {
                pares++;
            }
            if(valores % 2 != 0)
            {
                impares++;
            }
            if(valores > 0)
            {
                positivos++;
            }
            if(valores < 0)
            {
                negativos++;
            }
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}