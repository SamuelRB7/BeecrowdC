#include <stdio.h>
int main()
{
    int A;
    double P, PA;
    A = 0;
    P = 1.20;
    PA = 0.90;

    do
    {
        printf("Anos %d\n", A);

        A++;
        P = P + 0.02;
        PA = PA + 0.03;

    } while(PA <= P);

    

    return 0;
}