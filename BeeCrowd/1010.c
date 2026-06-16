#include <stdio.h>
int main(){

int c1, n1, c2, n2;
float v1, v2, VALOR;

scanf("%d", &c1);
scanf("%d", &n1);
scanf("%f", &v1);
scanf("%d", &c2);
scanf("%d", &n2);
scanf("%f", &v2);

VALOR = (n1 * v1) + (n2 * v2);

printf("VALOR A PAGAR: R$ %.2f\n", VALOR);

    return 0;
}