#include <stdio.h>
int main()
{
    float renda, impostoDeRenda, temp;

    scanf("%f", &renda);

    if(renda <= 2000)
    {
        printf("Isento\n");
    }
    if(renda > 2000 && renda <= 3000)
    {
        temp = renda - 2000;
        impostoDeRenda = (temp * 8) / 100;
        
        printf("R$ %.2f\n", impostoDeRenda);
    }
    else if(renda > 3000 && renda <= 4500)
    {
        temp = renda - 3000;
        impostoDeRenda = (temp * 18) / 100;
        impostoDeRenda = impostoDeRenda + (1000 * 8) / 100;

        printf("R$ %.2f\n", impostoDeRenda);
    }
    else if(renda > 4500)
    {
        temp = renda - 4500;
        impostoDeRenda = (temp * 28) / 100;
        impostoDeRenda = impostoDeRenda + ((1500 * 18) / 100) + (1000 * 8) / 100;

        printf("R$ %.2f\n", impostoDeRenda);
    }

    return 0;
}