#include <stdio.h>
int main(){

int H, V;
float L;

scanf("%d", &H);
scanf("%d", &V);

L = (H * V) / 12.0;

printf("%.3f\n", L);

    return 0;
}