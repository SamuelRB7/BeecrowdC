#include <stdio.h>

int main (){
    double S, F, TOTAL;
    char N[10];

printf("Primeiro nome do vendedor:\n");
scanf("%s", N);
scanf("%lf", &S);
scanf("%lf", &F);

TOTAL = ( F * 15 / 100 ) + S;

printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}