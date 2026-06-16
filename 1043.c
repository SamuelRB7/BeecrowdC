#include <stdio.h>
int main()
{
    float A, B, C, area, perimetro;

    scanf("%f %f %f", &A, &B, &C);

    if((A + B > C) && (A + C > B) && (B + C > A))
    {
        perimetro = A + B + C;

            printf("Perimetro = %.1f\n", perimetro);
    }
    else 
    {
        area = ((A + B) * C) / 2;

        printf("Area = %.1f\n", area);
    }

    return 0;
}