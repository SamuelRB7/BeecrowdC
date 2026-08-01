#include <stdio.h>
int main()
{
    float salarioB, taxa1 = 0, taxa2 = 0, taxa3 = 0, salarioL, imposto;
    printf("Digite seu salario: \n");

    scanf("%f", &salarioB);

    if(salarioB <= 1900)
    {
        printf("Isento!!!\n");
    }
    else if(salarioB <= 2800)
    {
        taxa1 = salarioB - 1900;
        taxa1 = (taxa1 * 7.5) / 100;
    }
    else if(salarioB <= 3700)
    {
        taxa1 = ((2800 - 1900) * 7.5) / 100;
        taxa2 = ((salarioB - 2800) * 15) / 100;
    }
    else
    {
        taxa1 = ((2800 - 1900) * 7.5) / 100;
        taxa2 = ((3700 - 2800) * 15) / 100;
        taxa3 = ((salarioB - 3700) * 22.5) / 100;
    }
    imposto = taxa1 + taxa2 + taxa3;
    salarioL = salarioB - imposto;

    printf("Salario bruto: %.2f\n", salarioB);
    printf("Imposto total a pagar: %.2f\n", imposto);
    printf("Salario liquido: %.2f\n", salarioL);

    return 0;
}