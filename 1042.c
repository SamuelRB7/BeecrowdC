#include <stdio.h>
int main()
{
    int A, B, C, x, y, z, temp;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

        x = A;
        y = B;
        z = C;

    if(x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    if(x > z)
    {
        temp = x;
        x = z;
        z = temp;
    }
    if(y > z)
    {
        temp = y;
        y = z;
        z = temp;
    }

    printf("%d\n%d\n%d\n\n", x, y, z);
    printf("%d\n%d\n%d\n", A, B, C);  

    return 0;
}