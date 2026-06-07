#include <stdio.h>
int main()
{
    int IDADE;
    char SEXO, NOME[25];

    printf("Digite seu apenas seu primeiro nome:\n");
    scanf("%s", NOME);

    printf("Digite seu sexo, apenas F OU M:\n");
    scanf(" %c", &SEXO);

    printf("Digite a sua idade:\n");
    scanf("%d", &IDADE);

    if(SEXO == 'F' && IDADE < 25)
    {
        printf("%s ACEITA(O)!\n", NOME);
    }
    else
    {
        printf("NAO ACEITA(O)!\n");
    }

    return 0;
}