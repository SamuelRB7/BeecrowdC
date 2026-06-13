#include <stdio.h>
int main()
{
    double A, B, C, Temp;

    scanf("%lf %lf %lf", &A, &B, &C);

    if(A < B)
    {
        Temp = A;
        A = B;
        B = Temp;
    }
    else if(A < C)
    {
        Temp = A;
        A = C;
        C = Temp;
    }
    else if(B < C)
    {
        Temp = B;
        B = C;
        C = Temp;
    }

    if(A >= (B + C))
    {
        printf("NAO FORMA TRIANGULO.\n");
    }
    else if((A * A) == (B *B) + (C *C))
    {
        printf("TRIANGULO RETANGULO.\n");
    }
    else if((A * A) > (B *B) + (C *C))
    {
        printf("TRIANGULO OBTUSANGULO.\n");
    }
    else if((A * A) < (B *B) + (C * C))
    {
        printf("TRINAGULO ACUTANGULO.\n");
    }
    else if((A == B) && (A == C) && (B == C))
    {
        printf("TRIANGULO EQUILATERO.\n");
    }
    else if((A == B) || (B == C))
    {
        printf("TRIANGULOO ISOCELES.\n");
    }
    return 0;
}