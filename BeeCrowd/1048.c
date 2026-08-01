#include <stdio.h>
int main()
{
    float salario, reajuste, novoSalario;

    scanf("%f", &salario);

    if(salario <= 400)
    {
        novoSalario = salario + ((salario * 15) / 100);
        reajuste = novoSalario - salario;
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15 %%\n");
    }
    else if(salario > 400 && salario <= 800)
    {
        novoSalario = salario + ((salario * 12) / 100);
        reajuste = novoSalario - salario;
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %%\n"); 
    }
    else if(salario > 800 && salario <= 1200)
    {
        novoSalario = salario + ((salario * 10) / 100);
        reajuste = novoSalario - salario;
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10 %%\n");
    }
    else if(salario > 1200 && salario <= 2000)
    {
        novoSalario = salario + ((salario * 7) / 100);
        reajuste = novoSalario - salario;
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 7 %%\n");
    }
    else if(salario > 2000)
    {
        novoSalario = salario + ((salario * 4) / 100);
        reajuste = novoSalario - salario;
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}