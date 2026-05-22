#include <stdio.h>
#include <math.h>
int main(){

    float x1, x2, y1, y2, D;

    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);

        D = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

        printf("%.4f\n", D);

    return 0;
}