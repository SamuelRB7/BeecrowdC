#include <stdio.h>
#include <string.h>
int main()
{
    char  primeiraPalavra[100], segundaPalavra[100], terceiraPalavra[100];

    scanf("%s", &primeiraPalavra[0]);
    scanf("%s", &segundaPalavra[0]);
    scanf("%s", &terceiraPalavra[0]);

    if(strcmp(primeiraPalavra, "vertebrado") == 0)
    {
        if(strcmp(segundaPalavra, "ave") == 0)
        {
            if(strcmp(terceiraPalavra, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
                else if(strcmp(terceiraPalavra, "onivoro") == 0)
                {
                    printf("pomba\n");
                }
        }
    }

    if(strcmp(primeiraPalavra, "vertebrado") == 0)
    {
        if(strcmp(segundaPalavra, "mamifero") == 0)
        {
            if(strcmp(terceiraPalavra, "onivoro") == 0)
            {
                printf("homem\n");
            }
                else if(strcmp(terceiraPalavra, "herbivoro") == 0)
                {
                    printf("vaca\n");
                }
        }
    }

    if(strcmp(primeiraPalavra, "invertebrado") == 0)
    {
        if(strcmp(segundaPalavra, "inseto") == 0)
        {
            if(strcmp(terceiraPalavra, "hematofago") == 0)
            {
                printf("pulga\n");
            }
                else if(strcmp(terceiraPalavra, "herbivoro") == 0)
                {
                    printf("lagarta\n");
                }
        }
    }

    if(strcmp(primeiraPalavra, "invertebrado") == 0)
    {
        if(strcmp(segundaPalavra, "anelideo") == 0)
        {
            if(strcmp(terceiraPalavra, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
                else if(strcmp(terceiraPalavra, "onivoro") == 0)
                {
                    printf("minhoca\n");
                }
        }
    }
    
    return 0;
}