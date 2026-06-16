#include <stdio.h>
int main()
{
    double N1, N2, N3, N4, MEDIA, NOTA, NOVAMEDIA;

    scanf("%lf", &N1);
    scanf("%lf", &N2);
    scanf("%lf", &N3);
    scanf("%lf", &N4);

    MEDIA = (((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / (2 + 3 + 4 + 1));  
    printf("Media: %.1lf\n", MEDIA);

        if(MEDIA >= 7)
        {
            printf("Aluno aprovado.\n");
        }
        else if(MEDIA < 5)
        {
            printf("Aluno reprovado.\n");
        }
        else if(MEDIA >= 5 && MEDIA < 7)
        {
            printf("Aluno em exame.\n");
        
    scanf("%lf", &NOTA);

            printf("Nota do exame: %.1lf\n", NOTA);
              
                NOVAMEDIA = ((NOTA + MEDIA) / 2);

                if(NOVAMEDIA >= 5)
                {
                    printf("Aluno aprovado.\n");
                }
                else
                {
                    printf("Aluno reprovado.\n");
                }
                printf("Media final: %.1lf\n", NOVAMEDIA);   
        }
         
    return 0;
}