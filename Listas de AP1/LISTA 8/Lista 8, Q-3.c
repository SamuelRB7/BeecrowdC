#include <stdio.h>
int main()
{
    int notas[5];
    int i, n1, n2, n3, n4, n5;
    float Media;

    printf("Digite as notas dos alunos\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &notas[i]);
    }
    n1 = notas[0];
    n2 = notas[1];
    n3 = notas[2];
    n4 = notas[3];
    n5 = notas[4]; 

    Media = ((n1 + n2 + n3 + n4 + n5) / 5.0);

    printf("Media geral das notas: %2.lf\n", Media);

    return 0;
}