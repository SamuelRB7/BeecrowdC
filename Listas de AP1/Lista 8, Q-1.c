#include<stdio.h>
int main()
{
    int vetorA[5] = {1, 0, 5, -12, -55};
    int simples;

    simples = vetorA[0] + vetorA[2] + vetorA[4];

    printf("Soma dos vetores 0, 2, 4:\n");  
    printf("%d\n", simples);

    printf("Vetor 4 editado!!!\n");

    vetorA[4] = 100;

    printf("%d\n", vetorA[0]);
    printf("%d\n", vetorA[1]);
    printf("%d\n", vetorA[2]);
    printf("%d\n", vetorA[3]);
    printf("%d\n", vetorA[4]);

    return 0;
}