#include <stdio.h>
int main()
{
    int OP;
            printf("Escolha algum exercicio da lista de 1 a 11:\n");

            scanf("%d", &OP);

        switch(OP)
        {
        case 1:
            printf("exercicio 1\n");
            break;
        case 2:
            printf("exercicio 2\n");
            break;
        case 3:
            printf("exercicio 3\n");
            break;
        case 4:
            printf("exercicio 4\n");
            break;
        case 5:
            printf("exercicio 5\n");
            break;
        case 6:
            printf("exercicio 6\n");
            break;
        case 7:
            printf("exercicio 7\n");
            break;
        case 8:
            printf("exercicio 8\n");
            break;
        case 9:
            printf("exercicio 9\n");
            break;
        case 10:
            printf("exercicio 10\n");
            break;
        case 11:
            printf("exercicio 11\n");
            break;
        default:
            printf("Opcao invalida!!!");
            break;
        }

    return 0;
}