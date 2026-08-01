#include <stdio.h>
int main()
{
    int inicio, fim, dias, hh, mm, ss, hhF, mmF, ssF, duracaoI, duracaoF, diasTotais;

    scanf(" Dia %d", &inicio);
    scanf(" %d : %d : %d", &hh, &mm, &ss);
    scanf(" Dia %d", &fim);
    scanf(" %d : %d : %d", &hhF, &mmF, &ssF);


    duracaoI = (inicio * 86400) + (hh * 3600) + (mm * 60) + ss;
    duracaoF = (fim * 86400) + (hhF * 3600) + (mmF * 60) + ssF;

    diasTotais = duracaoF - duracaoI;

    dias = diasTotais / 86400;
    diasTotais = diasTotais % 86400;

    hh = diasTotais / 3600;
    diasTotais = diasTotais % 3600;

    mm = diasTotais / 60;
    ss = diasTotais %60;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", hh);
    printf("%d minuto(s)\n", mm);
    printf("%d segundo(s)\n", ss);

    return 0; 
}