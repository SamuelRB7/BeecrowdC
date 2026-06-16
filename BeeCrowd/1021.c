#include <stdio.h>
int main()
{

    double N;

    int valor ,N100, N50, N20, N10, N5, N2, R100, R50, R20, R10, R5, R2;
    int M1, M050, M025, M010, M05, M01, R1, R050, R025, R010, R05;

    scanf("%lf", &N);

    if(N >= 0 && N <= 1000000.00)
    {       //NOTAS
        valor = N * 100;
        N100 = valor / 10000;
        R100 = valor % 10000;
        
        N50 = R100 / 5000;
        R50 = R100 % 5000;
        
        N20 = R50 / 2000;
        R20 = R50 % 2000;
        
        N10 = R20 / 1000;
        R10 = R20 % 1000;
        
        N5 = R10 / 500;
        R5 = R10 % 500;
       
        N2 = R5 / 200;
        R2 = R5 % 200;
        //MOEDAS
        M1 = R2 / 100;
        R1 = R2 % 100;
        
        M050 = R1 / 50;
        R050 = R1 % 50;
        
        M025 = R050 / 25;
        R025 = R050 % 25;
        
        M010 = R025 / 10;
        R010 = R025 % 10;

        M05 = R010 / 5;
        R05 = R010 % 5;
        
        M01 = R05 / 1;    

    }
            printf("NOTAS:\n");

                printf("%d nota(s) de R$ 100.00\n", N100);
                printf("%d nota(s) de R$ 50.00\n", N50);
                printf("%d nota(s) de R$ 20.00\n", N20);
                printf("%d nota(s) de R$ 10.00\n", N10);
                printf("%d nota(s) de R$ 5.00\n", N5);
                printf("%d nota(s) de R$ 2.00\n", N2);

            printf("MOEDAS:\n");
            
                printf("%d moeda(s) de R$ 1.00\n", M1);
                printf("%d moeda(s) de R$ 0.50\n", M050);
                printf("%d moeda(s) de R$ 0.25\n", M025);
                printf("%d moeda(s) de R$ 0.10\n", M010);
                printf("%d moeda(s) de R$ 0.05\n", M05);
                printf("%d moeda(s) de R$ 0.01\n", M01);

    return 0;
}