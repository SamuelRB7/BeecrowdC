#include <stdio.h>
int main()
{
    int C, Q;
    float P;

    scanf("%d", &C);
    scanf("%d", &Q);

    switch (C)
    {
        case 1:
        P = Q * 4.00;
        break;
        case 2:
        P = Q * 4.50;
        break;
        case 3:
        P = Q * 5.00;
        break;
        case 4:
        P = Q * 2.00;
        break;
        case 5:
        P = Q * 1.50;
        break;
    }
    printf("Total: R$ %.2f\n", P);

    return 0;

}