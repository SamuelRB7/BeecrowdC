#include <stdio.h>
int main(){

    int N, M100, M50, M20, M10, M5, M2, M1;
    int R100, R50, R20, R10, R5, R2, R1;

    scanf("%d", &N);

    printf("%d\n", N);

    if (N > 0 && N < 1000000){
    
        M100 = N / 100;
    printf("%d nota(s) de R$ 100,00\n", M100);
        R100 = N % 100;

        M50 = R100 / 50;
    printf("%d nota(s) de R$ 50,00\n", M50);
        R50 = R100 % 50;

        M20 = R50 / 20;
    printf("%d nota(s) de R$ 20,00\n", M20);
        R20 = R50 % 20;

        M10 = R20 / 10;
    printf("%d nota(s) de R$ 10,00\n", M10);
        R10 = R20 % 10;

        M5 = R10 / 5;
    printf("%d nota(s) de R$ 5,00\n", M5);
        R5 = R10 % 5;

        M2 = R5 / 2;
    printf("%d nota(s) de R$ 2,00\n", M2);
        R2 = R5 % 2;

        M1 = R2 / 1;
    printf("%d nota(s) de R$ 1,00\n", M1);
        R1 = R1 % 1;
    }

return 0;

}