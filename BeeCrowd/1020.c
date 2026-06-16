#include <stdio.h>
int main(){
    int i, dia, mes, ano, resto;

    scanf("%d", &i);

    ano = i / 365;
    resto = i % 365;
    mes = resto / 30;
    dia = resto % 30;
    
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;
}