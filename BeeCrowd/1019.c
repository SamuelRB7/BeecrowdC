#include <stdio.h>
int main(){

int N, Horas, Minutos, Resto;

scanf("%d", &N);

    Horas = N / 3600;

    Resto = N % 3600;

    Minutos = Resto / 60;

    Resto = N % 60;
    
printf("%d:%d:%d\n", Horas, Minutos, Resto);

    return 0;
}