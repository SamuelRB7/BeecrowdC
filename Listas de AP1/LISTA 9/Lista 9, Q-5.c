#include <stdio.h>
#include <string.h>
int main()
{
    char usuario[60], senha[60];

    printf("Nome de usuario:\n");
    fgets(usuario, 60, stdin);

    printf("Senha: \n");
    fgets(senha, 60, stdin);

    usuario[strcspn(usuario, "\n")] = '\0';
    senha[strcspn(senha, "\n")] = '\0';

    if(strcmp(usuario, "admin") == 0 && strcmp(senha, "a1b2C3") == 0)
    {
        printf("Dados corretos.\n");
    }
    else
    {
        printf("Dados incorretos.\n");
    }
    return 0;
}