#include <stdio.h>
int main(){

int F, H;
double V, SALARY;

scanf("%d", &F);
scanf("%d", &H);
scanf("%lf", &V);

SALARY = H * V;

printf("NUMBER = %d\n", F);
printf("SALARY = %.2lf\n", SALARY);

    return 0;
}