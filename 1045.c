#include <stdio.h>
int main()
{
    double A, B, C, M;

    scanf("%lf %lf %lf", &A, &B, &C);

    if(A < B)
    {
        M = B;
        B = A;
        A = M;
    }
    if(A < C)
    {
        M = C;
        C = A;
        A = M;
    }
    if(B < C)
    {
        M = C;
        C = B;
        B = M;
    }

        if(A >= (B + C))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else
        {
            if((A * A) == (B * B) + (C * C))
            {
                printf("TRIANGULO RETANGULO\n");
            }
            else if((A * A) > (B * B) + (C * C))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if((A * A) < (B * B) + (C * C))
            {
                printf("TRIANGULO ACUTANGULO\n");
            }

            if((A == B) && (B == C))
            {
                printf("TRIANGULO EQUILATERO\n");
            }
            else if((A == B) || (A == C) || (B == C))
            {
                printf("TRIANGULO ISOSCELES\n");
            }
        }

    return 0;
}