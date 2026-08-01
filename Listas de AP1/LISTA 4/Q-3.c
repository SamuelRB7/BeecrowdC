#include <stdio.h>
int main()
{
    int N;

    printf("Digite um numero:");
        scanf("%d", &N);

        printf("Em octal: %o\n", N);
        printf("Em Hexa: %X\n", N);

    return 0;
}